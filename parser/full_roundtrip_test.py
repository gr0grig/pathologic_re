"""Full byte-identical round-trip test: .bin -> .asm -> .c -> .asm -> .bin.

For each input .bin:
  1. Disassemble to .asm
  2. Decompile to .c
  3. Compile .c back to .asm
  4. Assemble compiled .asm to .bin
  5. Compare original .bin and final .bin byte-for-byte

Prints per-script result and a final summary.
"""
import os, sys, hashlib, traceback

sys.path.insert(0, os.path.join(os.path.dirname(__file__), 'lib'))
sys.path.insert(0, os.path.dirname(__file__))

import PathologicScript as PS
from PathologicHL import PathologicHL
from PathologicPseudoC import PathologicPseudoC
from compile import compile_c_to_asm
from asm import parse_asm, assemble


def hex_diff(a: bytes, b: bytes, max_show=64):
    n = min(len(a), len(b))
    first = None
    for i in range(n):
        if a[i] != b[i]:
            first = i
            break
    parts = [f'len_a={len(a)} len_b={len(b)}']
    if first is not None:
        s = max(0, first - 8)
        e = min(n, first + 24)
        parts.append(f'first_diff_at=0x{first:X}')
        parts.append(f'  a[{s:X}:{e:X}]={a[s:e].hex(" ")}')
        parts.append(f'  b[{s:X}:{e:X}]={b[s:e].hex(" ")}')
    elif len(a) != len(b):
        # bytes match on common prefix; only length differs
        longer = a if len(a) > len(b) else b
        tail = longer[n:n+max_show]
        parts.append(f'extra_tail={tail.hex(" ")}')
    return '\n  '.join(parts)


def roundtrip_one(fpath: str, is_alpha: bool):
    """Perform one full round-trip; returns (status, info)."""
    with open(fpath, 'rb') as f:
        orig_bytes = f.read()

    # Step 1: disassemble (.bin -> in-memory PathologicScript -> .asm text)
    PS.IS_ALPHA = is_alpha
    script = PS.PathologicScript(fpath)
    phl = PathologicHL(script)
    ppc = PathologicPseudoC(phl)
    asm_text = str(script)
    c_text = str(ppc)

    # Step 2 & 3: decompile + recompile (.c -> .asm)
    compiled_asm = compile_c_to_asm(c_text, reference_asm=asm_text)

    # Step 4: assemble compiled .asm -> .bin
    parsed = parse_asm(compiled_asm)
    final_bytes = assemble(parsed, is_alpha=is_alpha)

    if orig_bytes == final_bytes:
        return ('OK', '')
    if hashlib.md5(orig_bytes).hexdigest() == hashlib.md5(final_bytes).hexdigest():
        return ('OK', '')  # paranoia check
    return ('DIFF', hex_diff(orig_bytes, final_bytes))


def main():
    is_alpha = '--hd' not in sys.argv
    in_folder = None
    for arg in sys.argv[1:]:
        if arg.startswith('--'):
            continue
        in_folder = arg
    if in_folder is None:
        in_folder = (r'C:\Users\user\Desktop\Pathologic\alpha\data\OldScripts'
                     if is_alpha else r'C:\Users\user\Desktop\Pathologic\2005\Scripts')

    files = sorted(f for f in os.listdir(in_folder)
                   if f.endswith('.bin') and os.path.getsize(os.path.join(in_folder, f)) > 0)
    total = len(files)

    ok = 0
    diff_count = 0
    fail = 0
    diffs = []
    fails = []

    for idx, fname in enumerate(files, 1):
        fpath = os.path.join(in_folder, fname)
        try:
            status, info = roundtrip_one(fpath, is_alpha)
            if status == 'OK':
                ok += 1
            else:
                diff_count += 1
                diffs.append((fname, info))
                if len(diffs) <= 20:
                    print(f'[{idx}/{total}] DIFF {fname}: {info.splitlines()[0]}', flush=True)
        except Exception as e:
            fail += 1
            fails.append((fname, str(e)))
            if len(fails) <= 20:
                print(f'[{idx}/{total}] FAIL {fname}: {e}', flush=True)

        if idx % 50 == 0:
            print(f'[{idx}/{total}] ok={ok} diff={diff_count} fail={fail}', flush=True)
            sys.stdout.flush()

    print(f'\n=== Final ({"alpha" if is_alpha else "HD"}, {in_folder}) ===')
    print(f'Total: {total}, byte-identical: {ok}, diff: {diff_count}, fail: {fail}')

    if diffs:
        print(f'\nDIFFs ({len(diffs)}):')
        for name, info in diffs[:30]:
            print(f'  {name}: {info.splitlines()[0]}')

    if fails:
        print(f'\nFAILs ({len(fails)}):')
        for name, err in fails[:30]:
            print(f'  {name}: {err}')

    sys.exit(0 if (diff_count == 0 and fail == 0) else 1)


if __name__ == '__main__':
    main()
