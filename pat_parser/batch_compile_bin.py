"""Batch: .bin -> .asm -> .c -> .asm -> .bin, output to Scripts folder."""
import os, sys

sys.path.insert(0, os.path.dirname(__file__))

from PathologicScript import *
from PathologicHL import *
from PathologicPseudoC import *
from compile import compile_c_to_asm
from asm import assemble, parse_asm

IN_FOLDER = r'C:\Users\user\Desktop\Pathologic\alpha\data\OldScripts'
OUT_FOLDER = r'C:\Users\user\Desktop\Pathologic\alpha\data\Scripts'


def main():
    os.makedirs(OUT_FOLDER, exist_ok=True)
    files = sorted([f for f in os.listdir(IN_FOLDER)
                    if f.endswith('.bin') and os.path.getsize(os.path.join(IN_FOLDER, f))])
    total = len(files)
    ok = 0
    failed = []

    for idx, fname in enumerate(files, 1):
        fpath = os.path.join(IN_FOLDER, fname)
        out_path = os.path.join(OUT_FOLDER, fname)
        try:
            # .bin -> .asm
            script = PathologicScript(fpath)
            asm_text = str(script)

            # .asm -> .c
            phl = PathologicHL(script)
            ppc = PathologicPseudoC(phl)
            c_text = str(ppc)

            # .c -> .asm (with reference for block reordering)
            compiled_asm = compile_c_to_asm(c_text, reference_asm=asm_text)

            # .asm -> .bin
            parsed = parse_asm(compiled_asm)
            bin_data = assemble(parsed)
            with open(out_path, 'wb') as f:
                f.write(bin_data)

            ok += 1
            print(f'[{idx}/{total}] {fname}: OK ({len(bin_data)} bytes)')
        except Exception as e:
            failed.append((fname, str(e)))
            print(f'[{idx}/{total}] {fname}: FAILED ({e})')

    print(f'\n=== Results ===')
    print(f'Total: {total}, OK: {ok}, Failed: {len(failed)}')
    if failed:
        print(f'\nFailed:')
        for name, err in failed:
            print(f'  {name}: {err}')


if __name__ == '__main__':
    main()
