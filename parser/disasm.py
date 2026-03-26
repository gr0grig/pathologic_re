#!/usr/bin/env python3
"""Disassembler for Pathologic script .bin files.

Usage:
    python disasm.py input.bin [-o output.asm]
    python disasm.py input_dir/ --batch [-o output_dir/]
    python disasm.py input.bin --hd
"""
import sys
import os
import glob
import argparse

_LIB = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'lib')
sys.path.insert(0, _LIB)


def disasm_file(input_path, output_path=None, is_alpha=True, verbose=False):
    """Disassemble a single .bin file to .asm text."""
    import PathologicScript as PS
    PS.IS_ALPHA = is_alpha

    script = PS.PathologicScript(input_path)
    asm_text = str(script)

    if output_path:
        os.makedirs(os.path.dirname(output_path) or '.', exist_ok=True)
        with open(output_path, 'w', encoding='utf-8', newline='\n') as f:
            f.write(asm_text)
    elif verbose:
        print(asm_text)


def main():
    parser = argparse.ArgumentParser(description='Disassemble Pathologic script .bin files')
    parser.add_argument('input', nargs='?', help='Input .bin file or directory')
    parser.add_argument('-o', '--output', help='Output .asm file or directory')
    parser.add_argument('--batch', action='store_true', help='Process all .bin in directory')
    parser.add_argument('--hd', action='store_true', help='HD version format')
    parser.add_argument('-v', '--verbose', action='store_true', help='Verbose output')
    args = parser.parse_args()

    if not args.input:
        parser.print_help()
        return

    is_alpha = not args.hd

    if args.batch or os.path.isdir(args.input):
        input_dir = args.input
        output_dir = args.output or input_dir.rstrip('/\\') + '_asm'
        ok = fail = 0
        files = sorted(glob.glob(os.path.join(input_dir, '**', '*.bin'), recursive=True))
        for f in files:
            if os.path.getsize(f) == 0:
                continue
            rel = os.path.relpath(f, input_dir)
            out = os.path.join(output_dir, os.path.splitext(rel)[0] + '.asm')
            try:
                disasm_file(f, out, is_alpha=is_alpha, verbose=args.verbose)
                ok += 1
            except Exception as e:
                print(f"ERROR: {rel}: {e}")
                fail += 1
        print(f"Done: {ok} OK, {fail} FAIL")
    else:
        out = args.output or os.path.splitext(args.input)[0] + '.asm'
        disasm_file(args.input, out, is_alpha=is_alpha, verbose=args.verbose)
        print(f"Disassembled: {out}")


if __name__ == '__main__':
    main()
