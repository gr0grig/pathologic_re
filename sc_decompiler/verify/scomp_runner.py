"""Subprocess wrapper around scomp.exe.

scomp.exe must be co-located with sbuild.dll. We work around this by copying
both into a temporary work directory and invoking scomp.exe from there with
the .sc file alongside.
"""

from __future__ import annotations

import shutil
import subprocess
import tempfile
from dataclasses import dataclass
from pathlib import Path
from typing import Optional

DEFAULT_SCOMP_DIR = Path(r"C:\Users\user\Desktop\Pathologic\SRC\Scripts\build\tools")


@dataclass
class CompileResult:
    ok: bool
    bin_bytes: Optional[bytes]
    stdout: str
    stderr: str
    error_msg: Optional[str]  # parsed from scomp stdout when compilation fails


def compile_sc_text(
    sc_text: str,
    *,
    stem: str = "tmp",
    scomp_dir: Path = DEFAULT_SCOMP_DIR,
    keep_workdir: bool = False,
) -> CompileResult:
    """Compile one .sc source string. Returns the bytes scomp would have written.

    If `keep_workdir` is True, the temporary directory is NOT deleted (handy for
    debugging — caller can inspect both the input .sc and the produced .bin).
    """
    work = Path(tempfile.mkdtemp(prefix="sc_compile_"))
    try:
        (work / "scomp.exe").write_bytes((scomp_dir / "scomp.exe").read_bytes())
        (work / "sbuild.dll").write_bytes((scomp_dir / "sbuild.dll").read_bytes())
        sc_path = work / f"{stem}.sc"
        sc_path.write_text(sc_text, encoding="utf-8")
        proc = subprocess.run(
            [str(work / "scomp.exe"), sc_path.name],
            cwd=work,
            capture_output=True,
            text=True,
            timeout=120,
        )
        bin_path = sc_path.with_suffix(".bin")
        ok = bin_path.exists()
        bin_bytes = bin_path.read_bytes() if ok else None
        return CompileResult(
            ok=ok,
            bin_bytes=bin_bytes,
            stdout=proc.stdout,
            stderr=proc.stderr,
            error_msg=_parse_error(proc.stdout) if not ok else None,
        )
    finally:
        if not keep_workdir:
            shutil.rmtree(work, ignore_errors=True)


def _parse_error(stdout: str) -> Optional[str]:
    """Extract the parse/compile error line scomp prints when compilation fails."""
    for line in stdout.splitlines():
        line = line.strip()
        if line.startswith("Error"):
            return line
    return None
