"""Batch: .bin -> .c, output to Script_C folder."""
import os, sys

sys.path.insert(0, os.path.dirname(__file__))

from PathologicScript import *
from PathologicHL import *
from PathologicPseudoC import *

IN_FOLDER = r'C:\Users\user\Desktop\Pathologic\alpha\data\OldScripts'
OUT_FOLDER = r'C:\Users\user\Desktop\Pathologic\alpha\data\Script_C'


def main():
    os.makedirs(OUT_FOLDER, exist_ok=True)
    files = sorted([f for f in os.listdir(IN_FOLDER)
                    if f.endswith('.bin') and os.path.getsize(os.path.join(IN_FOLDER, f))])
    total = len(files)
    ok = 0
    failed = []

    for idx, fname in enumerate(files, 1):
        fpath = os.path.join(IN_FOLDER, fname)
        out_path = os.path.join(OUT_FOLDER, fname.replace('.bin', '.c'))
        try:
            script = PathologicScript(fpath)
            phl = PathologicHL(script)
            ppc = PathologicPseudoC(phl)
            c_text = str(ppc)

            with open(out_path, 'w', encoding='utf-8') as f:
                f.write(c_text)

            ok += 1
            print(f'[{idx}/{total}] {fname}: OK')
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
