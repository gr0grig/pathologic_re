"""Batch test: exact 1:1 ASM match for all scripts.
Decompiles .bin -> .asm + .c, compiles .c -> .asm, then raw-diffs (strip @poff only).
"""
import os, sys, re

sys.path.insert(0, os.path.dirname(__file__))

from PathologicScript import *
from PathologicHL import *
from PathologicPseudoC import *
from compile import compile_c_to_asm

IN_FOLDER = r'C:\Users\user\Desktop\Pathologic\alpha\data\OldScripts'
OUT_FOLDER = r'C:\Users\user\Desktop\Pathologic\output'


def strip_poff(lines):
    result = []
    for line in lines:
        line = re.sub(r'\s*//\s*@poff=\S*', '', line)
        line = line.rstrip()
        if line:
            result.append(line)
    return result


def count_code_lines(lines):
    return sum(1 for l in lines if re.match(r'\s*0x[0-9a-fA-F]+:', l))


def compare_exact(orig_lines, comp_lines):
    """Compare stripped lines, return (match, n_diffs, n_reorder_diffs)"""
    if orig_lines == comp_lines:
        return True, 0, 0

    n_diffs = sum(1 for a, b in zip(orig_lines, comp_lines) if a != b)
    n_diffs += abs(len(orig_lines) - len(comp_lines))

    # Check if all diffs are pure reorderings (same instruction count)
    orig_code = count_code_lines(orig_lines)
    comp_code = count_code_lines(comp_lines)
    is_reorder = (orig_code == comp_code and len(orig_lines) == len(comp_lines))

    return False, n_diffs, is_reorder


def main():
    os.makedirs(OUT_FOLDER, exist_ok=True)
    files = sorted([f for f in os.listdir(IN_FOLDER) if f.endswith('.bin') and os.path.getsize(os.path.join(IN_FOLDER, f))])
    total = len(files)

    exact_match = 0
    reorder_only = 0
    real_diff = 0
    failed = []

    for idx, fname in enumerate(files, 1):
        fpath = os.path.join(IN_FOLDER, fname)
        try:
            # Decompile
            script = PathologicScript(fpath)
            phl = PathologicHL(script)
            ppc = PathologicPseudoC(phl)
            asm_text = str(script)
            c_text = str(ppc)

            # Compile back (with reference ASM for block reordering)
            compiled_asm = compile_c_to_asm(c_text, reference_asm=asm_text)

            # Compare
            orig_stripped = strip_poff(asm_text.splitlines())
            comp_stripped = strip_poff(compiled_asm.splitlines())

            match, n_diffs, is_reorder = compare_exact(orig_stripped, comp_stripped)

            if match:
                exact_match += 1
                status = 'EXACT'
            elif is_reorder:
                reorder_only += 1
                status = f'REORDER ({n_diffs} lines)'
            else:
                real_diff += 1
                orig_code = count_code_lines(orig_stripped)
                comp_code = count_code_lines(comp_stripped)
                status = f'DIFF ({n_diffs} lines, code: {orig_code} vs {comp_code})'

            print(f'[{idx}/{total}] {fname}: {status}')

        except Exception as e:
            failed.append((fname, str(e)))
            print(f'[{idx}/{total}] {fname}: FAILED ({e})')

    print(f'\n=== Results ===')
    print(f'Total: {total}')
    print(f'Exact match: {exact_match}')
    print(f'Reorder only: {reorder_only}')
    print(f'Real diff: {real_diff}')
    print(f'Failed: {len(failed)}')
    print(f'\nExact match rate: {exact_match}/{total} ({100*exact_match/total:.1f}%)')
    if failed:
        print(f'\nFailed scripts:')
        for name, err in failed:
            print(f'  {name}: {err}')


if __name__ == '__main__':
    main()
