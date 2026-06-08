"""Classify every BIN_MISMATCH / LIFT_ERROR file by root-cause signature.

Read the latest roundtrip CSV, decompile + recompile each non-OK file, diff the
bytecode against the original, and emit a TSV row per file with the inferred
cluster tag.

Usage:
    python pathologic_re/sc_decompiler/notes/classify_mismatches.py \
      --csv tmp_diff/rt26.csv --out tmp_diff/classify.tsv
"""
from __future__ import annotations

import argparse
import csv
import os
import re
import subprocess
import sys
from collections import Counter
from pathlib import Path

PROJ_ROOT = Path(__file__).resolve().parents[3]
PARSER_LIB = PROJ_ROOT / "pathologic_re" / "parser" / "lib"
SCRIPTS_DIR = PROJ_ROOT / "2005" / "Scripts"
REFERENCE_DIR = PROJ_ROOT / "pathologic_re" / "examples" / "2005" / "script_sources"

if str(PARSER_LIB) not in sys.path:
    sys.path.insert(0, str(PARSER_LIB))
if str(PROJ_ROOT) not in sys.path:
    sys.path.insert(0, str(PROJ_ROOT))

import PathologicScript as PS  # noqa: E402
PS.IS_ALPHA = False

from pathologic_re.sc_decompiler.verify.scomp_runner import compile_sc_text  # noqa: E402


# ----- bytecode diff --------------------------------------------------------

_STACK_PATTERN = re.compile(r"Stack\[-\d+\]")
_HEX_PATTERN = re.compile(r"0x[0-9a-f]+")
_POP_PATTERN = re.compile(r"Pop\((\d+)\)")


def _normalize(repr_str: str) -> str:
    s = _HEX_PATTERN.sub("0x?", repr_str)
    s = _STACK_PATTERN.sub("Stack[-?]", s)
    return s


def _bytecode_diff(orig_instrs, ours_instrs):
    """LCS-ish diff. Returns (inserts, deletes) lists of (addr, repr)."""
    oi_repr = [_normalize(repr(x.opcode)) for x in orig_instrs]
    ui_repr = [_normalize(repr(x.opcode)) for x in ours_instrs]
    i = j = 0
    inserts, deletes = [], []
    while i < len(orig_instrs) and j < len(ours_instrs):
        if oi_repr[i] == ui_repr[j]:
            i += 1; j += 1
            continue
        # Try 1-step look-ahead in each direction.
        if j + 1 < len(ours_instrs) and ui_repr[j + 1] == oi_repr[i]:
            inserts.append((ours_instrs[j].index, repr(ours_instrs[j].opcode)))
            j += 1
            continue
        if i + 1 < len(orig_instrs) and oi_repr[i + 1] == ui_repr[j]:
            deletes.append((orig_instrs[i].index, repr(orig_instrs[i].opcode)))
            i += 1
            continue
        # 2-step look-ahead.
        if j + 2 < len(ours_instrs) and ui_repr[j + 2] == oi_repr[i]:
            inserts.append((ours_instrs[j].index, repr(ours_instrs[j].opcode)))
            inserts.append((ours_instrs[j + 1].index, repr(ours_instrs[j + 1].opcode)))
            j += 2
            continue
        if i + 2 < len(orig_instrs) and oi_repr[i + 2] == ui_repr[j]:
            deletes.append((orig_instrs[i].index, repr(orig_instrs[i].opcode)))
            deletes.append((orig_instrs[i + 1].index, repr(orig_instrs[i + 1].opcode)))
            i += 2
            continue
        # Stuck. Treat as substitution (both differ).
        deletes.append((orig_instrs[i].index, repr(orig_instrs[i].opcode)))
        inserts.append((ours_instrs[j].index, repr(ours_instrs[j].opcode)))
        i += 1; j += 1
    while i < len(orig_instrs):
        deletes.append((orig_instrs[i].index, repr(orig_instrs[i].opcode)))
        i += 1
    while j < len(ours_instrs):
        inserts.append((ours_instrs[j].index, repr(ours_instrs[j].opcode)))
        j += 1
    return inserts, deletes


# ----- signatures ----------------------------------------------------------

def _has_nulleq_pattern(reprs: list[str]) -> bool:
    """Pop(0); Push((bool) Stack[-N] == 0) — NullEq."""
    return any("Pop(0); Push((bool) Stack[-" in r and "== 0)" in r for r in reprs)


def _has_movb01_pair(inserts: list[tuple[int, str]],
                     deletes: list[tuple[int, str]]) -> bool:
    """PushEmpty(bool) + MovB(0) somewhere → bool-flag pattern."""
    pushv_bool = any("PushEmpty(bool" in r for _, r in (deletes + inserts))
    movb0 = any("= (bool) 0" in r for _, r in (deletes + inserts))
    return pushv_bool and movb0


def _classify_bin_mismatch(orig_instrs, ours_instrs, delta: int) -> tuple[str, int | None]:
    """Return (category_tag, first_diff_addr)."""
    inserts, deletes = _bytecode_diff(orig_instrs, ours_instrs)
    n_ins = len(inserts)
    n_del = len(deletes)
    first_diff = None
    if inserts:
        first_diff = inserts[0][0]
    elif deletes:
        first_diff = deletes[0][0]

    # Detect bool-flag (cluster D).
    if _has_movb01_pair(inserts, deletes) or (deletes and _has_nulleq_pattern([r for _, r in deletes])):
        # Cluster D dominates if both PushEmpty(bool) and MovB are missing.
        pushv_bool_del = sum(1 for _, r in deletes if "PushEmpty(bool" in r)
        movb1_del = sum(1 for _, r in deletes if "= (bool) 1" in r)
        if pushv_bool_del >= 1 and movb1_del >= 1:
            return ("bool-flag", first_diff)

    # Cluster A: NullEq vs direct Push.
    nulleq_in_del = sum(1 for _, r in deletes if "Pop(0); Push((bool)" in r and "== 0" in r)
    push_in_ins = sum(1 for _, r in inserts if r.startswith("Push(Stack[-"))
    if nulleq_in_del >= 1 and push_in_ins >= 1 and abs(delta) <= 16:
        return ("nulleq-vs-push", first_diff)

    # Cluster B: missing Mov to slot.
    mov_in_del = sum(1 for _, r in deletes
                     if r.startswith("Stack[-") and " = " in r and not r.startswith("Stack[-1] = (bool)"))
    if mov_in_del >= 1 and n_ins <= mov_in_del:
        return (f"mov-missing-{mov_in_del}", first_diff)

    # Cluster C: extra PushEmpty(int) + Stack[-1] = X + Pop(1) temps.
    push_temp_ins = sum(1 for _, r in inserts
                        if r.startswith("PushEmpty(int") or r.startswith("PushEmpty(bool"))
    if push_temp_ins >= 2 and delta > 0:
        return (f"push-int-temp-{push_temp_ins}", first_diff)

    # Cluster E: same-size, single GOTO target diff.
    if delta == 0 and n_ins == 0 and n_del == 0:
        # The diff is hidden by normalization; find raw diff.
        for k in range(min(len(orig_instrs), len(ours_instrs))):
            if repr(orig_instrs[k].opcode) != repr(ours_instrs[k].opcode):
                first_diff = orig_instrs[k].index
                # Was it just a GOTO target shift?
                if "GOTO" in repr(orig_instrs[k].opcode) and "GOTO" in repr(ours_instrs[k].opcode):
                    return ("goto-target-shift", first_diff)
                return ("byte-level-shift", first_diff)
        return ("zero-delta-unknown", first_diff)

    if n_ins == 0 and n_del == 0:
        return ("normalized-equal-but-bytes-differ", first_diff)
    return (f"unknown-delta{delta:+d}-ins{n_ins}-del{n_del}", first_diff)


# ----- LIFT_ERROR parsing --------------------------------------------------

def _classify_lift_error(detail: str) -> str:
    m = re.search(r"JumpB target 0x([0-9a-f]+) not in current body", detail)
    if m:
        return "lift-jumpb-out-of-body"
    m = re.search(r"unstructured Jump at 0x([0-9a-f]+) -> 0x([0-9a-f]+)", detail)
    if m:
        a = int(m.group(1), 16)
        b = int(m.group(2), 16)
        if b == a + 2:
            return "lift-jump-skip1"  # GOTO X+2
        if b < a:
            return "lift-jump-backward"
        return "lift-jump-forward"
    m = re.search(r"subblock unbalanced", detail)
    if m:
        return "lift-stack-imbalance"
    m = re.search(r"backward JumpB", detail)
    if m:
        return "lift-backward-jumpb"
    return f"lift-other:{detail[:40]}"


# ----- pipeline ------------------------------------------------------------

def _ensure_recompiled_bin(sc_path: Path, name_stem: str) -> Path | None:
    """Compile our .sc via scomp.exe; return path to bin (in tmp_diff/)."""
    out_dir = PROJ_ROOT / "tmp_diff"
    out_dir.mkdir(parents=True, exist_ok=True)
    out_path = out_dir / f"classify_{name_stem}.bin"
    if not sc_path.exists():
        return None
    text = sc_path.read_text(encoding="utf-8")
    r = compile_sc_text(text, stem=name_stem)
    if not r.ok:
        return None
    out_path.write_bytes(r.bin_bytes)
    return out_path


def main(argv=None) -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--csv", default="tmp_diff/rt26.csv")
    ap.add_argument("--out", default="tmp_diff/classify.tsv")
    args = ap.parse_args(argv)

    csv_path = PROJ_ROOT / args.csv
    rows = list(csv.DictReader(csv_path.open()))

    results = []
    counter: Counter[str] = Counter()
    for row in rows:
        name = row["name"]
        status = row["status"]
        if status == "OK_ROUNDTRIP":
            continue
        bin_path = SCRIPTS_DIR / name
        sc_path = SCRIPTS_DIR / name.replace(".bin", ".sc")
        ref_path = REFERENCE_DIR / name.replace(".bin", ".sc")
        ref_exists = ref_path.exists()
        first_diff = None
        if status == "LIFT_ERROR":
            tag = _classify_lift_error(row["detail"])
            try:
                first_diff = int(row.get("first_diff_offset", "") or "0", 16)
            except (ValueError, TypeError):
                first_diff = None
        elif status == "BIN_MISMATCH":
            try:
                delta = int(row["size_compiled"]) - int(row["size_orig"])
            except (ValueError, KeyError):
                delta = 0
            # Regenerate our .sc and recompile.
            try:
                subprocess.run(
                    [sys.executable, "-m", "pathologic_re.sc_decompiler",
                     str(bin_path), "--roundtrip"],
                    capture_output=True, text=True, timeout=60,
                )
            except subprocess.TimeoutExpired:
                tag = "timeout"
                results.append((name, status, delta, tag, ref_exists, None))
                counter[tag] += 1
                continue
            recompiled = _ensure_recompiled_bin(sc_path, sc_path.stem)
            if recompiled is None or not bin_path.exists():
                tag = "scomp-failed-or-missing-bin"
            else:
                orig = PS.PathologicScript(str(bin_path))
                ours = PS.PathologicScript(str(recompiled))
                tag, first_diff = _classify_bin_mismatch(
                    orig.code.instr, ours.code.instr, delta)
        else:
            tag = f"other-status-{status}"
        delta_val = ""
        if status == "BIN_MISMATCH":
            try:
                delta_val = str(int(row["size_compiled"]) - int(row["size_orig"]))
            except Exception:
                pass
        results.append((name, status, delta_val, tag, "Y" if ref_exists else "N",
                        f"0x{first_diff:x}" if first_diff else ""))
        counter[tag] += 1
        print(f"[{counter[tag]:>3}] {tag:35s} {status:12s} {name}")

    out_path = PROJ_ROOT / args.out
    out_path.parent.mkdir(parents=True, exist_ok=True)
    with out_path.open("w", encoding="utf-8", newline="") as f:
        w = csv.writer(f, delimiter="\t")
        w.writerow(["name", "status", "delta", "category", "has_ref", "first_diff"])
        for r in results:
            w.writerow(r)
    print()
    print(f"=== Cluster summary ({len(results)} files) ===")
    for tag, count in counter.most_common():
        print(f"  {count:>4}  {tag}")
    print(f"\nReport written to {out_path}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
