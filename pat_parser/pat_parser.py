import os
from config import *
from PathologicHL import *
from PathologicScript import *
from PathologicPseudoC import *
from compare_asm import normalize_asm_text


def decompile_folder(in_path, out_path=None):

	if out_path is None:
		out_path = in_path
	os.makedirs(out_path, exist_ok=True)

	os.chdir(in_path)

	files = [f for f in os.listdir('.') if f.endswith('.bin') and os.path.getsize(f)]
	total = len(files)
	success = 0
	failed = []

	for idx, file in enumerate(files, 1):

		print(f'[{idx}/{total}] {file}')

		try:
			script = PathologicScript(file)
			phl = PathologicHL(script)
			ppc = PathologicPseudoC(phl)

			decompiled_asm = str(script)
			decompiled_c = str(ppc)

		except BaseException as E:
			print(f'  EXCEPTION: {E}')
			failed.append((file, str(E)))
			continue

		with open(os.path.join(out_path, file + '.asm'), "wb") as f:
			f.write(decompiled_asm.encode('utf-8'))

		with open(os.path.join(out_path, file + '.c'), "wb") as f:
			f.write(decompiled_c.encode('utf-8'))

		success += 1

	print(f'\nDone: {success}/{total} succeeded, {len(failed)} failed')
	for name, err in failed:
		print(f'  FAILED: {name}: {err}')




def decompile_file(in_path):
	script = PathologicScript(in_path)
	decompiled = str(script)
	#print(decompiled)
	phl = PathologicHL(script)
	ppc = PathologicPseudoC(phl)

	print(script)
	print(ppc)
	#phl.print_basic_blocks()


#decompile_file(IN_FILE)
decompile_folder(IN_FOLDER, OUT_FOLDER)