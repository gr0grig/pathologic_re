#!/usr/bin/env python3
"""Decompiler for Pathologic script .bin files.

Converts compiled .bin scripts to C-like pseudocode.

Usage:
    python decompile.py input.bin [-o output.c]
    python decompile.py input_dir/ --batch [-o output_dir/]
    python decompile.py input.bin --hd
"""
import sys
import os
import glob
import argparse

_LIB = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'lib')
sys.path.insert(0, _LIB)


def decompile_file(input_path, output_path=None, is_alpha=True):
    """Decompile a single .bin file to C pseudocode."""
    import PathologicScript as PS
    PS.IS_ALPHA = is_alpha
    from PathologicHL import PathologicHL
    from PathologicPseudoC import PathologicPseudoC

    script = PS.PathologicScript(input_path)
    phl = PathologicHL(script)
    ppc = PathologicPseudoC(phl)
    c_text = str(ppc)

    if output_path:
        os.makedirs(os.path.dirname(output_path) or '.', exist_ok=True)
        with open(output_path, 'w', encoding='utf-8', newline='\n') as f:
            f.write(c_text)

    return c_text


def main():
    parser = argparse.ArgumentParser(description='Decompile Pathologic script .bin to C')
    parser.add_argument('input', nargs='?', help='Input .bin file or directory')
    parser.add_argument('-o', '--output', help='Output .c file or directory')
    parser.add_argument('--batch', action='store_true', help='Process all .bin in directory')
    parser.add_argument('--hd', action='store_true', help='HD version format')
    args = parser.parse_args()

    if not args.input:
        parser.print_help()
        return

    is_alpha = not args.hd

    if args.batch or os.path.isdir(args.input):
        input_dir = args.input
        output_dir = args.output or input_dir.rstrip('/\\') + '_c'
        ok = fail = 0
        files = sorted(glob.glob(os.path.join(input_dir, '**', '*.bin'), recursive=True))
        for f in files:
            if os.path.getsize(f) == 0:
                continue
            rel = os.path.relpath(f, input_dir)
            out = os.path.join(output_dir, os.path.splitext(rel)[0] + '.c')
            try:
                decompile_file(f, out, is_alpha=is_alpha)
                ok += 1
            except Exception as e:
                print(f"ERROR: {rel}: {e}")
                fail += 1
        print(f"Done: {ok} OK, {fail} FAIL")
    else:
        out = args.output or os.path.splitext(args.input)[0] + '.c'
        decompile_file(args.input, out, is_alpha=is_alpha)
        print(f"Decompiled: {out}")


if __name__ == '__main__':
    main()
