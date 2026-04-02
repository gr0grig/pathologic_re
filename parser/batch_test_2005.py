"""Batch round-trip test for 2005 scripts (HD format)."""
import os, sys, re

sys.path.insert(0, os.path.join(os.path.dirname(__file__), 'lib'))
sys.path.insert(0, os.path.dirname(__file__))

import PathologicScript as PS
PS.IS_ALPHA = False  # HD mode

from PathologicHL import PathologicHL
from PathologicPseudoC import PathologicPseudoC
from compile import compile_c_to_asm

IN_FOLDER = r'C:\Users\user\Desktop\Pathologic\2005\Scripts'

def strip_poff(lines):
    result = []
    for line in lines:
        line = re.sub(r'\s*//\s*@poff=\S*', '', line)
        line = line.rstrip()
        if line:
            result.append(line)
    return result

def main():
    files = sorted([f for f in os.listdir(IN_FOLDER)
                    if f.endswith('.bin') and os.path.getsize(os.path.join(IN_FOLDER, f)) > 0])
    total = len(files)
    ok = fail = 0
    failed = []

    for idx, fname in enumerate(files, 1):
        fpath = os.path.join(IN_FOLDER, fname)
        try:
            script = PS.PathologicScript(fpath)
            phl = PathologicHL(script)
            ppc = PathologicPseudoC(phl)
            asm_text = str(script)
            c_text = str(ppc)
            compiled_asm = compile_c_to_asm(c_text, reference_asm=asm_text)

            orig = strip_poff(asm_text.splitlines())
            comp = strip_poff(compiled_asm.splitlines())

            if orig == comp:
                ok += 1
            else:
                fail += 1
                failed.append(fname)
                if len(failed) <= 10:
                    for i, (a, b) in enumerate(zip(orig, comp)):
                        if a != b:
                            print(f'  DIFF {fname} line {i}: {a!r} vs {b!r}', flush=True)
                            break
                    else:
                        print(f'  DIFF {fname}: len {len(orig)} vs {len(comp)}', flush=True)
        except Exception as e:
            fail += 1
            failed.append(f'{fname}: {e}')
            if len(failed) <= 10:
                print(f'  FAIL {fname}: {e}', flush=True)

        if idx % 100 == 0:
            print(f'[{idx}/{total}] ok={ok} fail={fail}', flush=True)

    print(f'\n=== Results ===', flush=True)
    print(f'Total: {total}, OK: {ok}, FAIL: {fail}', flush=True)
    if failed:
        print(f'\nFailed ({len(failed)}):')
        for f in failed[:30]:
            print(f'  {f}')

if __name__ == '__main__':
    main()
