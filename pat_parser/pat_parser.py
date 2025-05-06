import os
from config import *
from PathologicHL import *
from PathologicScript import *
from PathologicPseudoC import *


def decompile_folder(in_path):

	os.chdir(in_path)

	for file in os.listdir('.'):

		if not file.endswith('.bin'):
			continue

		if not os.path.getsize(file):
			continue

		print(file)

		#try:
		script = PathologicScript(file)
		phl = PathologicHL(script)
		ppc = PathologicPseudoC(phl)

		decompiled_asm = str(script)
		decompiled_c = str(ppc)

		# except BaseException as E:
		# 	print('EXCEPTION', file)
		# 	print(E)
		# 	continue

		with open(file + '.asm', "wb") as f:
			f.write(decompiled_asm.encode('utf-8'))

		with open(file + '.c', "wb") as f:
			f.write(decompiled_c.encode('utf-8'))




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
decompile_folder(IN_FOLDER)