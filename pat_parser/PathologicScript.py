import os
import struct
from enum import Enum
from config import *

class Reader:

	def __init__(self, path):
		self.f = open(path, "rb")

	def __del__(self):
		self.f.close()

	def read(self, size, format):
		return struct.unpack(format, self.f.read(size))[0]

	def uint32(self):
		return self.read(4, 'I')

	def uint16(self):
		return self.read(2, 'H')

	def uint8(self):
		return self.read(1, 'B')

	def int32(self):
		return self.read(4, 'i')

	def int16(self):
		return self.read(2, 'h')

	def int8(self):
		return self.read(1, 'b')

	def bytes(self, size):
		return self.f.read(size)

	def str_a(self, size):
		return self.f.read(size).decode('utf-8')

	def float(self):
		return round(struct.unpack('f', self.f.read(4))[0], 5)


class VarTypes:
	def __init__(self, r, index):
		self.index = index
		self.type = r.uint8()
		self.flag = r.uint8()
		if self.flag:
			self.str = r.str_a(r.uint8())


VAR_TYPE = Enum('VAR_TYPE', [('BOOL', 1), ('INT', 2), ('FLOAT', 3), ('STRING', 4), ('OBJECT', 5), ('CVECTOR', 6)])

def var_type_name(x):
	return VAR_TYPE(x).name.lower()

class GlobalVars:

	def __init__(self, r):
		self.GlobalVarCount = r.uint32()
		self.GvarTypes = list()
		for i in range(self.GlobalVarCount):
			self.GvarTypes.append(VarTypes(r, i))

	def __repr__(self):
		out = f'GlobalVarCount = {self.GlobalVarCount}\n'
		for i in self.GvarTypes:
			type_str = var_type_name(i.type)
			var_name = i.str if i.flag else ''
			out += f'\tG_VAR_{i.index} {type_str} {var_name}\n'

		return out + '\n'


def get_strlen_w(data):
	length = 0
	for i in range(0, len(data), 2):

		if len(data) < i+2:
			break
		if data[i] != 0 or data[i+1] != 0:
			length += 1
		else:
			break
	return length

def get_strlen_a(data):
	length = 0
	for i in range(len(data)):
		if data[i] != 0:
			length += 1
		else:
			break
	return length

def get_str_from_addr(data):
	if get_strlen_a(data) == 1:
		length = get_strlen_w(data)
		string = data[:length*2].decode('utf-16').encode("utf-8").decode("utf-8")
	else:
		length = get_strlen_a(data)
		string = data[:length].decode('utf-8')

	return string

def get_str_from_pool(index):
	global GLOB_POOL
	return get_str_from_addr(GLOB_POOL[index:])


class DataPool:

	def __init__(self, r):
		self.size = r.uint32()
		self.data = r.bytes(self.size)
		self.strings = self.dump_strings()

	def __repr__(self):
		out = f'Strings:\n'
		for s in self.strings:
			out += '\t' + s + '\n'
		return out + '\n'

	def dump_strings(self):
		strings = []
		pool_bytes = self.data[:]

		while True:
			len_a = get_strlen_a(pool_bytes) + 1
			len_w = get_strlen_w(pool_bytes) + 1
			if len_a ==1:
				break
			strings.append(get_str_from_addr(pool_bytes))
			index = len_w * 2 if len_a == 2 else len_a
			pool_bytes = pool_bytes[index:]

		return strings


class GFUNC:

	def __init__(self, r, index):
		size = r.uint8()
		self.index = index
		self.name = r.str_a(size)
		self.arg_count = r.uint32()

	def __repr__(self):
		return f'{self.name} ({self.arg_count} args)'



class GlobFuncs:

	def __init__(self, r):
		self.funcs = list()
		self.count = r.uint32()
		for i in range(self.count):
			self.funcs.append(GFUNC(r, i))

	def __repr__(self):
		out = 'Import:\n'
		for i in self.funcs:
			out += '\t' + str(i) + '\n'
		return out + '\n'


class GEVENT:

	def __init__(self, r):
		self.ulEventID = r.uint32()
		self.ulOp = r.uint32()
		self.ulVarCount = r.uint32()
		self.pVarTypes = r.bytes(self.ulVarCount)

	def __repr__(self):
		types = [var_type_name(x) for x in self.pVarTypes]
		types_str = ', '.join(types)
		return f'EVENT_{self.ulEventID} Op = {hex(self.ulOp)} Vars = ({types_str})'


class GTASK:

	def __init__(self, r, index):
		self.index = index
		self.VarCount = r.uint32()
		self.VarTypes = r.bytes(self.VarCount)
		self.ParmCount = r.uint32()
		self.EventCount = r.uint32()
		self.events = [GEVENT(r) for i in range(self.EventCount)]

	def __repr__(self):
		types = [var_type_name(x) for x in self.VarTypes]
		types_str = ', '.join(types)
		variables = f'Vars = ({types_str})' if self.VarCount  else''
		events = [f'\t\t{str(x)}' for x in self.events]
		events_str = '\n' + '\n'.join(events) if len(events) else ''
		return f'GTASK_{self.index} {variables} Params = {self.ParmCount}{events_str}' 


class GlobTasks:

	def __init__(self, r):
		self.RunTask = r.uint32()
		self.RunOp = r.uint32()
		self.TaskCount = r.uint32()
		self.tasks = [GTASK(r, i) for i in range(self.TaskCount)]

	def __repr__(self):
		out = f'RunOp = {hex(self.RunOp)}\nRunTask = {self.RunTask}\n\nGlobalTasks: \n'
		for i in self.tasks:
			out += '\t' + str(i) + '\n'
		return out + '\n'


def get_glob_task(num):
	global GLOB_TASK

	for i in GLOB_TASK.tasks:
		if num == i.index:
			return i


class GlobEvents:

	def __init__(self, r):
		self.EventCount = r.uint32()
		self.events = [GEVENT(r) for i in range(self.EventCount)]

	def __repr__(self):
		out = ''
		for i in self.events:
			out += str(i) + '\n'
		return 'Events:\n' + out if out else ''


class CInstructionMov:
	def __init__(self, r):
		self.OpCode = 'Mov'
		self.VarIn = r.uint32()
		self.VarOut = r.uint32()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = Stack[-{self.VarIn}]'

class CInstructionMovB:
	def __init__(self, r):
		self.OpCode = 'MovB'
		self.VarOut = r.uint32()
		self.bVal = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = (bool) {self.bVal}'

class CInstructionMovI:
	def __init__(self, r):
		self.OpCode = 'MovI'
		self.VarOut = r.uint32()
		self.lVal = r.int32() # unsigned !

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = (int) {self.lVal}'

class CInstructionMovF:
	def __init__(self, r):
		self.OpCode = 'MovF'
		self.VarOut = r.uint32()
		self.fVal = r.float()	

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = (float) {self.fVal}'

class CInstructionMovS:
	def __init__(self, r):
		self.OpCode = 'MovS'
		self.VarOut = r.uint32()
		self.Offset = r.uint32()
		self.String = get_str_from_pool(self.Offset)

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = "{self.String}"'

class CVector:
	def __init__(self, r):
		self.x = r.float()
		self.y = r.float()	
		self.z = r.float()	

	def __repr__(self):
		return f'CVector({self.x}, {self.y}, {self.z})'

class CInstructionMovV:
	def __init__(self, r):
		self.OpCode = 'MovV'
		self.VarOut = r.uint32()
		self.CVector = CVector(r)

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = {str(self.CVector)}'


class CInstructionMovT:
	def __init__(self, r):
		self.OpCode = 'MovT'
		self.VarIn = r.uint32()
		self.VarOut = r.uint32()	

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = Stack[{self.VarIn} + Tasks[-1].StackPointer]'

class CInstructionTMov:
	def __init__(self, r):
		self.OpCode = 'TMov'
		self.VarIn = r.uint32()
		self.VarOut = r.uint32()	

	def __repr__(self):
		return f'Stack[{self.VarOut} + Tasks[-1].StackPointer] = Stack[-{self.VarIn}]'

class CInstructionTMovB:
	def __init__(self, r):
		self.OpCode = 'TMovB'
		self.VarOut = r.uint32()
		self.bVal = r.uint8()	

	def __repr__(self):
		return f'Stack[{self.VarOut} + Tasks[-1].StackPointer] = (bool){self.bVal}' 

class CInstructionTMovI:
	def __init__(self, r):
		self.OpCode = 'TMovI'
		self.VarOut = r.uint32()
		self.lVal = r.int32() # unsigned !

	def __repr__(self):
		return f'Stack[{self.VarOut} + Tasks[-1].StackPointer] = (int){self.lVal}' 

class CInstructionTMovF:
	def __init__(self, r):
		self.OpCode = 'TMovF'
		self.VarOut = r.uint32()
		self.fVal = r.float()	

	def __repr__(self):
		return f'Stack[{self.VarOut} + Tasks[-1].StackPointer] = (float){self.fVal}' 

class CInstructionTMovS:
	def __init__(self, r):
		self.OpCode = 'TMovS'
		self.VarOut = r.uint32()
		self.Offset = r.uint32()
		self.String = get_str_from_pool(self.Offset)

	def __repr__(self):
		return f'Stack[{self.VarOut} + Tasks[-1].StackPointer] = "{self.String}"'

class CInstructionTMovV:
	def __init__(self, r):
		self.OpCode = 'TMovV'
		self.VarOut = r.uint32()
		self.CVector = CVector(r)	

	def __repr__(self):
		return f'Stack[{self.VarOut} + Tasks[-1].StackPointer] = {str(self.CVector)}'

class CInstructionTMovT:
	def __init__(self, r):
		self.OpCode = 'TMovT'
		self.VarIn = r.uint32()
		self.VarOut = r.uint32() # any type

	def __repr__(self):
		return f'Stack[{self.VarOut} + Tasks[-1].StackPointer] = Stack[{self.VarIn} + Tasks[-1].StackPointer]'


class CInstructionJump:
	def __init__(self, r):
		self.OpCode = 'Jump'
		self.VarIn = r.uint32()

	def __repr__(self):
		return f'GOTO {hex(self.VarIn)}'

class CInstructionJumpB:
	def __init__(self, r):
		self.OpCode = 'JumpB'
		self.lVar = r.uint32()
		self.VarIn = r.uint32()
		zero = r.uint8() 
		self.sPop = r.uint8()
		self.bVal = r.uint8()
		self.PopCount = self.sPop

	def __repr__(self):
		return f'IF (Stack[-{self.lVar}] == {self.bVal}) GOTO {hex(self.VarIn)}; Pop({self.sPop})'


class CInstructionPush:
	def __init__(self, r):
		self.OpCode = 'Push'
		self.VarIn = r.uint32()
		self.PushType = [VAR_TYPE.OBJECT] # any type

	def __repr__(self):
		return f'Push(Stack[-{self.VarIn}])'

class CInstructionPushB:
	def __init__(self, r):
		self.OpCode = 'PushB'
		self.VarIn = r.uint8()
		self.PushType = [VAR_TYPE.BOOL]

	def __repr__(self):
		return f'Push((bool) {self.VarIn})'

class CInstructionPushI:
	def __init__(self, r):
		self.OpCode = 'PushI'
		self.VarIn = r.int32() # unsigned
		self.PushType = [VAR_TYPE.INT]

	def __repr__(self):
		return f'Push((int) {self.VarIn})'

class CInstructionPushF:
	def __init__(self, r):
		self.OpCode = 'PushF'
		self.VarIn = r.float()
		self.PushType = [VAR_TYPE.FLOAT]

	def __repr__(self):
		return f'Push((float){self.VarIn})'

class CInstructionPushS:
	def __init__(self, r):
		self.OpCode = 'PushS'
		self.Offset = r.uint32()
		self.PushType = [VAR_TYPE.STRING]
		self.String = get_str_from_pool(self.Offset)

	def __repr__(self):
		return f'Push("{self.String}")'

class CInstructionPushT:
	def __init__(self, r):
		self.OpCode = 'PushT'
		self.VarIn = r.uint32()
		self.PushType = [VAR_TYPE.OBJECT] # any type

	def __repr__(self):
		return f'Push( Stack[{self.VarIn} + Tasks[-1].StackPointer] )'

class CInstructionPushVec:
	def __init__(self, r):
		self.OpCode = 'PushVec'
		self.CVector = CVector(r)
		self.PushType = [VAR_TYPE.CVECTOR]

	def __repr__(self):
		return f'Push({self.CVector})'

class CInstructionPushV:
	def __init__(self, r):
		self.OpCode = 'PushV'
		self.VarCount = r.uint32()
		self.VarTypes = r.bytes(self.VarCount)
		self.PushType = [int(x) for x in self.VarTypes]

	def __repr__(self):
		types = [var_type_name(x) for x in self.VarTypes]
		types_str = ', '.join(types)
		return f'PushEmpty({types_str})'

class CInstructionPushE:
	def __init__(self, r):
		self.OpCode = 'PushE'
		self.VarIn = r.uint32()

		# index field is really 1 signed byte hidden in 4 unsigned
		temp = r.bytes(1)
		self.Index = r.int8()
		temp = r.bytes(2)

		self.TaskVar = r.int8()
		self.PushType = [VAR_TYPE.FLOAT]

	def __repr__(self):
		if self.TaskVar:
			temp = f'Stack[{self.VarIn} + Tasks[-1].StackPointer]'
		else:
			temp = f'Stack[-{self.VarIn}]'

		return f'Push(CvectorIndex({temp}, {self.Index}))'


def get_global_var_type(index):
	global GLOB_VARS
	var = GLOB_VARS.GvarTypes[index]
	return var.type

class CInstructionPushGE:
	def __init__(self, r):
		self.OpCode = 'PushGE'
		self.VarIn = r.uint32()
		self.PushType = [get_global_var_type(self.VarIn)]

	def __repr__(self):
		return f'Push(GlobalVars[{self.VarIn}])'


class CInstructionPop:
	def __init__(self, r):
		self.OpCode = 'Pop'
		self.VarIn = r.uint32()
		self.PopCount = self.VarIn

	def __repr__(self):
		return f'Pop({self.VarIn})'

class CInstructionPopE:
	def __init__(self, r):
		self.OpCode = 'PopE'
		self.VarOut = r.uint32()
		self.Index = r.uint32()
		self.Flags = r.uint8()
		self.PopCount = int((self.Flags & 2) == 0)

	def __repr__(self):
		if self.Flags & 1:
			temp = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			temp = f'Stack[-{self.VarOut}]'

		return f'CvectorIndex({temp}, {self.Index}) = Stack[-1];'

class CInstructionPopGE:
	def __init__(self, r):
		self.OpCode = 'PopGE'
		self.VarOut = r.uint32()
		self.Flags = r.uint8()
		self.PopCount = int((self.Flags & 1) == 0)

	def __repr__(self):
		return f'GlobalVars[{self.VarOut}] = Stack[-1]; Pop({self.PopCount})'


class CInstructionSetNull:
	def __init__(self, r):
		self.OpCode = 'SetNull'
		self.VarIn = r.uint32()

	def __repr__(self):
		return f'Stack[-{self.VarIn}] = 0'

class CInstructionSetNullT:
	def __init__(self, r):
		self.OpCode = 'SetNullT'
		self.VarIn = r.uint32()

	def __repr__(self):
		return f'Stack[{self.VarIn} + Tasks[-1].StackPointer] = 0'


class CInstructionAdd:
	def __init__(self, r):
		self.OpCode = 'Add'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.int8() # signed
		self.PopCount = self.TaskVar & 0x3F
		self.PushType = [VAR_TYPE.INT]

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + StackPtr]'

		if self.TaskVar & 0x40:
			var_2 = f'Stack[{self.Var2} + StackPtr]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		return f'Pop({self.PopCount}); Push({var_1} + {var_2});'

class CInstructionSub:
	def __init__(self, r):
		self.OpCode = 'Sub'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F
		self.PushType = [VAR_TYPE.INT]

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + StackPtr]'

		if self.TaskVar & 0x40:
			var_2 = f'Stack[{self.Var2} + StackPtr]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		return f'Pop({self.PopCount}); Push({var_1} - {var_2});'

class CInstructionMult:
	def __init__(self, r):
		self.OpCode = 'Mult'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F
		self.PushType = [VAR_TYPE.FLOAT]

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + StackPtr]'

		if self.TaskVar & 0x40:
			var_2 = f'Stack[{self.Var2} + StackPtr]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		return f'Pop({self.PopCount}); Push({var_1} * {var_2});'

class CInstructionDiv:
	def __init__(self, r):
		self.OpCode = 'Div'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F
		self.PushType = [VAR_TYPE.FLOAT]

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + StackPtr]'

		if self.TaskVar & 0x40:
			var_2 = f'Stack[{self.Var2} + StackPtr]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		return f'Pop({self.PopCount}); Push({var_1} / {var_2});'

class CInstructionMod:
	def __init__(self, r):
		self.OpCode = 'Mod'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F
		self.PushType = [VAR_TYPE.INT]

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + StackPtr]'

		if self.TaskVar & 0x40:
			var_2 = f'Stack[{self.Var2} + StackPtr]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		return f'Pop({self.PopCount}); Push({var_1} % {var_2});'

class CInstructionAnd:
	def __init__(self, r):
		self.OpCode = 'And'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F
		self.PushType = [VAR_TYPE.INT]

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + StackPtr]'

		if self.TaskVar & 0x40:
			var_2 = f'Stack[{self.Var2} + StackPtr]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		return f'Pop({self.PopCount}); Push({var_1} & {var_2});'

class CInstructionOr:
	def __init__(self, r):
		self.OpCode = 'Or'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F
		self.PushType = [VAR_TYPE.INT]

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + StackPtr]'

		if self.TaskVar & 0x40:
			var_2 = f'Stack[{self.Var2} + StackPtr]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		return f'Pop({self.PopCount}); Push({var_1} | {var_2});'

class CInstructionXor:
	def __init__(self, r):
		self.OpCode = 'Xor'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F
		self.PushType = [VAR_TYPE.INT] # OBJ ?

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + StackPtr]'

		if self.TaskVar & 0x40:
			var_2 = f'Stack[{self.Var2} + StackPtr]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		return f'Pop({self.PopCount}); Push({var_1} ^ {var_2});'


class CInstructionEq:
	def __init__(self, r):
		self.OpCode = 'Eq'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F
		self.PushType = [VAR_TYPE.BOOL]

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'
	
		if self.TaskVar & 0x40:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		return f'Pop({self.PopCount}); Push((bool) {var_1} == {var_2})'

class CInstructionNeq:
	def __init__(self, r):
		self.OpCode = 'Neq'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F
		self.PushType = [VAR_TYPE.BOOL]

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if self.TaskVar & 0x40:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		return f'Pop({self.PopCount}); Push((bool) {var_1} != {var_2})'

class CInstructionLT:
	def __init__(self, r):
		self.OpCode = 'LT'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F
		self.PushType = [VAR_TYPE.BOOL]

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if self.TaskVar & 0x40:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		return f'Pop({self.PopCount}); Push((bool) {var_1} < {var_2})'

class CInstructionGT:
	def __init__(self, r):
		self.OpCode = 'GT'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F
		self.PushType = [VAR_TYPE.BOOL]

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if self.TaskVar & 0x40:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		return f'Pop({self.PopCount}); Push((bool) {var_1} > {var_2})'


class CInstructionLE:
	def __init__(self, r):
		self.OpCode = 'LE'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F
		self.PushType = [VAR_TYPE.BOOL]

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if self.TaskVar & 0x40:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		return f'Pop({self.PopCount}); Push((bool) {var_1} <= {var_2})'

class CInstructionGE:
	def __init__(self, r):
		self.OpCode = 'GE'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F
		self.PushType = [VAR_TYPE.BOOL]

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if self.TaskVar & 0x40:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		return f'Pop({self.PopCount}); Push((bool) {var_1} >= {var_2})'

class CInstructionNullEq:
	def __init__(self, r):
		self.OpCode = 'NullEq'
		self.Var = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x7F
		self.PushType = [VAR_TYPE.BOOL]

	def __repr__(self):
		if (self.TaskVar & 0x80) == 0:
			var_1 = f'Stack[-{self.Var}]'
		else:
			var_1 = f'Stack[{self.Var} + Tasks[-1].StackPointer]'

		return f'Pop({self.PopCount}); Push((bool) {var_1} == 0)'

class CInstructionNullNeq:
	def __init__(self, r):
		self.OpCode = 'NullNeq'
		self.Var = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x7F
		self.PushType = [VAR_TYPE.BOOL]

	def __repr__(self):
		if (self.TaskVar & 0x80) == 0:
			var_1 = f'Stack[-{self.Var}]'
		else:
			var_1 = f'Stack[{self.Var} + Tasks[-1].StackPointer]'

		return f'Pop({self.PopCount}); Push(( {var_1} != 0 )'

class CInstructionNeg:
	def __init__(self, r):
		self.OpCode = 'Neg'
		self.Var = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x7F
		self.PushType = [VAR_TYPE.INT] # BOOL or OBJ?

	def __repr__(self):
		if (self.TaskVar & 0x80) == 0:
			var_1 = f'Stack[-{self.Var}]'
		else:
			var_1 = f'Stack[{self.Var} + Tasks[-1].StackPointer]'

		return f'Pop({self.PopCount}); Push(( -{var_1})'

class CInstructionNot:
	def __init__(self, r):
		self.OpCode = 'Not'
		self.Var = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x7F
		self.PushType = [VAR_TYPE.BOOL]

	def __repr__(self):
		if (self.TaskVar & 0x80) == 0:
			var_1 = f'Stack[-{self.Var}]'
		else:
			var_1 = f'Stack[{self.Var} + Tasks[-1].StackPointer]'

		return f'Pop({self.PopCount}); Push((bool) {var_1} == 0)'

class CInstructionAdd2:
	def __init__(self, r):
		self.OpCode = 'Add2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x1F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		if (self.TaskVar & 0x20) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = {var_1} + {var_2}; Pop({self.PopCount});'

class CInstructionSub2:
	def __init__(self, r):
		self.OpCode = 'Sub2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x1F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		if (self.TaskVar & 0x20) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = {var_1} - {var_2}; Pop({self.PopCount});'

class CInstructionMult2:
	def __init__(self, r):
		self.OpCode = 'Mult2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x1F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		if (self.TaskVar & 0x20) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = {var_1} * {var_2}; Pop({self.PopCount});'

class CInstructionDiv2:
	def __init__(self, r):
		self.OpCode = 'Div2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x1F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		if (self.TaskVar & 0x20) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = {var_1} / {var_2}; Pop({self.PopCount});'

class CInstructionMod2:
	def __init__(self, r):
		self.OpCode = 'Mod2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x1F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		if (self.TaskVar & 0x20) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = {var_1} % {var_2}; Pop({self.PopCount});'

class CInstructionAnd2:
	def __init__(self, r):
		self.OpCode = 'And2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x1F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		if (self.TaskVar & 0x20) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = {var_1} & {var_2}; Pop({self.PopCount});'

class CInstructionOr2:
	def __init__(self, r):
		self.OpCode = 'Or2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x1F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		if (self.TaskVar & 0x20) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = {var_1} | {var_2}; Pop({self.PopCount});'

class CInstructionXor2:
	def __init__(self, r):
		self.OpCode = 'Xor2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x1F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		if (self.TaskVar & 0x20) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = {var_1} ^ {var_2}; Pop({self.PopCount});'

class CInstructionEq2:
	def __init__(self, r):
		self.OpCode = 'Eq2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x1F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		if (self.TaskVar & 0x20) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = {var_1} == {var_2}; Pop({self.PopCount});'

class CInstructionNeq2:
	def __init__(self, r):
		self.OpCode = 'Neq2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x1F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		if (self.TaskVar & 0x20) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = {var_1} != {var_2}; Pop({self.PopCount});'

class CInstructionLT2:
	def __init__(self, r):
		self.OpCode = 'LT2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x1F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		if (self.TaskVar & 0x20) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = {var_1} < {var_2}; Pop({self.PopCount});'

class CInstructionGT2:
	def __init__(self, r):
		self.OpCode = 'GT2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x1F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		if (self.TaskVar & 0x20) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = {var_1} > {var_2}; Pop({self.PopCount});'

class CInstructionLE2:
	def __init__(self, r):
		self.OpCode = 'LE2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x1F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		if (self.TaskVar & 0x20) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = {var_1} <= {var_2}; Pop({self.PopCount});'

class CInstructionGE2:
	def __init__(self, r):
		self.OpCode = 'GE2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x1F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		if (self.TaskVar & 0x20) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = {var_1} >= {var_2}; Pop({self.PopCount});'


class CInstructionNullEq2:
	def __init__(self, r):
		self.OpCode = 'NullEq2'
		self.Var = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var}]'
		else:
			var_1 = f'Stack[{self.Var} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = {var_1} == 0; Pop({self.PopCount});'

class CInstructionNullNeq2:
	def __init__(self, r):
		self.OpCode = 'NullNeq2'
		self.Var = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var}]'
		else:
			var_1 = f'Stack[{self.Var} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = {var_1} != 0; Pop({self.PopCount});'

class CInstructionNeg2:
	def __init__(self, r):
		self.OpCode = 'Neg2'
		self.Var = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var}]'
		else:
			var_1 = f'Stack[{self.Var} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = -{var_1}; Pop({self.PopCount});'

class CInstructionNot2:
	def __init__(self, r):
		self.OpCode = 'Not2'
		self.Var = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var}]'
		else:
			var_1 = f'Stack[{self.Var} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = !{var_1}; Pop({self.PopCount});'


class CInstructionSqrt:
	def __init__(self, r):
		self.OpCode = 'Sqrt'
		self.Var = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x7F
		self.PushType = [VAR_TYPE.FLOAT]

	def __repr__(self):
		if (self.TaskVar & 0x80) == 0:
			var_1 = f'Stack[-{self.Var}]'
		else:
			var_1 = f'Stack[{self.Var} + Tasks[-1].StackPointer]'

		return f'Pop({self.PopCount}); Push(Sqrt({var_1}))'


class CInstructionSqrt2:
	def __init__(self, r):
		self.OpCode = 'Sqrt2'
		self.Var = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var}]'
		else:
			var_1 = f'Stack[{self.Var} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = Sqrt({var_1}); Pop({self.PopCount});'


class CInstructionSin:
	def __init__(self, r):
		self.OpCode = 'Sin'
		self.Var = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x7F
		self.PushType = [VAR_TYPE.FLOAT]

	def __repr__(self):
		if (self.TaskVar & 0x80) == 0:
			var_1 = f'Stack[-{self.Var}]'
		else:
			var_1 = f'Stack[{self.Var} + Tasks[-1].StackPointer]'

		return f'Pop({self.PopCount}); Push(Sin({var_1}))'


class CInstructionSin2:
	def __init__(self, r):
		self.OpCode = 'Sin2'
		self.Var = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var}]'
		else:
			var_1 = f'Stack[{self.Var} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = Sin({var_1}); Pop({self.PopCount});'


class CInstructionCos:
	def __init__(self, r):
		self.OpCode = 'Cos'
		self.Var = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x7F
		self.PushType = [VAR_TYPE.FLOAT]

	def __repr__(self):
		if (self.TaskVar & 0x80) == 0:
			var_1 = f'Stack[-{self.Var}]'
		else:
			var_1 = f'Stack[{self.Var} + Tasks[-1].StackPointer]'

		return f'Pop({self.PopCount}); Push(Cos({var_1}))'

		
class CInstructionCos2:
	def __init__(self, r):
		self.OpCode = 'Cos2'
		self.Var = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var}]'
		else:
			var_1 = f'Stack[{self.Var} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = Cos({var_1}); Pop({self.PopCount});'


class CInstructionASin:
	def __init__(self, r):
		self.OpCode = 'ASin'
		self.Var = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x7F
		self.PushType = [VAR_TYPE.FLOAT]

	def __repr__(self):
		if (self.TaskVar & 0x80) == 0:
			var_1 = f'Stack[-{self.Var}]'
		else:
			var_1 = f'Stack[{self.Var} + Tasks[-1].StackPointer]'

		return f'Pop({self.PopCount}); Push(ASin({var_1}))'


class CInstructionASin2:
	def __init__(self, r):
		self.OpCode = 'ASin2'
		self.Var = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var}]'
		else:
			var_1 = f'Stack[{self.Var} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = ASin({var_1}); Pop({self.PopCount});'

class CInstructionPow:
	def __init__(self, r):
		self.OpCode = 'Pow'
		self.Var = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var}]'
		else:
			var_1 = f'Stack[{self.Var} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = Pow({var_1}); Pop({self.PopCount});'


class CInstructionPow2:
	def __init__(self, r):
		self.OpCode = 'Pow2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x1F

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		if (self.TaskVar & 0x20) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = Pow({var_1}, {var_2}); Pop({self.PopCount});'


class CInstructionCall:
	def __init__(self, r):
		self.OpCode = 'Call'
		self.VarIn = r.uint32()

	def __repr__(self):
		return f'Call {hex(self.VarIn)}'

class CInstructionReturn:
	def __init__(self, r):
		self.OpCode = 'Return'
		self.VarIn = r.uint32()
		# disabled for some reason
		self.PopCount = 0 # self.VarIn

	def __repr__(self):
		return f'Return(); Pop({self.VarIn})'


# global stack for use in TaskCall & TaskReturn pair
G_TASK_STACK = []

def g_task_stack_init():
	global G_TASK_STACK
	G_TASK_STACK = []

def g_task_stack_push(data):
	global G_TASK_STACK
	G_TASK_STACK.append(data)

def g_task_stack_pop():
	global G_TASK_STACK
	return G_TASK_STACK.pop()

class CInstructionTaskCall:
	def __init__(self, r):
		self.OpCode = 'TaskCall'
		self.VarIn = r.uint32() # TaskID

		task = get_glob_task(self.VarIn)
		assert(task is not None)

		self.PushOffset = task.ParmCount # negative offset from the end
		self.PushType = task.VarTypes
		self.PushCount = len(self.PushType)

		g_task_stack_push([self.PushOffset, self.PushCount])

	def __repr__(self):
		return f'Push(-{self.PushOffset}, {self.PushCount}); TaskCall({self.VarIn})'

class CInstructionTaskReturn:
	def __init__(self, r):
		self.OpCode = 'TaskReturn'
		self.PopOffset, self.PopCount = g_task_stack_pop()

	def __repr__(self):
		return f'Pop(-{self.PopOffset}, {self.PopCount}); TaskReturn'


class FUNC_VAR:
	def __init__(self, r):
		self.Var = r.uint32()
		self.Task = r.uint8() # (bool)

	def __repr__(self):
		return f'(V={self.Var} T={self.Task})'

def get_func_info(index):
	global GLOB_FUNC
	for i in GLOB_FUNC.funcs:
		if index == i.index:
			return i.name, i.arg_count

class CInstructionFunc:
	def __init__(self, r):
		self.OpCode = 'Func'
		self.FuncIndex = r.uint32()
		self.func_name, self.arg_count = get_func_info(self.FuncIndex)
		self.fvar = [FUNC_VAR(r) for i in range(self.arg_count)]

	def __repr__(self):
		args_num = [f'Stack[-{x.Var}]' for x in self.fvar]
		args =', '.join(args_num) # just ignore Tasks for now

		if not self.fvar: args = ''
		return f'@ {self.func_name}({args})'
		
class CInstructionObjFunc:
	def __init__(self, r):
		self.OpCode = 'ObjFunc'
		self.Var = r.uint32()
		self.NameOffset = r.uint32()
		self.ParmCount = r.uint32()
		self.func_name = get_str_from_pool(self.NameOffset)
		self.fvar = [FUNC_VAR(r) for i in range(self.ParmCount)]

	def __repr__(self):
		args_num = [f'Stack[-{x.Var}]' for x in self.fvar]
		args =', '.join(args_num) # just ignore Tasks for now
		# just ignore 'self.Var' for now
		return f'@@ {self.func_name}({args})'

class CInstructionTObjFunc:
	def __init__(self, r):
		self.OpCode = 'TObjFunc'
		self.Var = r.uint32()
		self.NameOffset = r.uint32()
		self.ParmCount = r.uint32()
		self.fvar = [FUNC_VAR(r) for i in range(self.ParmCount)]
		self.func_name = get_str_from_pool(self.NameOffset)

	def __repr__(self):

		args_num = [f'Stack[-{x.Var}]' for x in self.fvar]
		args =', '.join(args_num) # just ignore Tasks for now
		return f'@@ {self.func_name}({args})'


class CInstructionEventEnable:
	def __init__(self, r):
		self.OpCode = 'EventEnable'
		self.VarIn = r.uint32()

	def __repr__(self):
		return f'EventEnable({self.VarIn})'

class CInstructionEventDisable:
	def __init__(self, r):
		self.OpCode = 'EventDisable'
		self.VarIn = r.uint32()

	def __repr__(self):
		return f'EventDisable({self.VarIn})'


class CInstructionFuncExist:
	def __init__(self, r):
		self.OpCode = 'FuncExist'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x1F
		self.PushType = [VAR_TYPE.BOOL]

	def __repr__(self):
		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		if (self.TaskVar & 0x20) != 0:
			var_3 = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_3 = f'Stack[-{self.VarOut}]'

		return f'Pop({self.PopCount}); Push(IsFuncExist({var_1}, {var_2}, {var_3}))'


class CInstructionFuncExist2:
	def __init__(self, r):
		self.OpCode = 'FuncExist2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.Var3 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0xF


	def __repr__(self):

		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.Var1}]'
		else:
			var_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.Var2}]'

		if (self.TaskVar & 0x20) != 0:
			var_3 = f'Stack[{self.Var3} + Tasks[-1].StackPointer]'
		else:
			var_3 = f'Stack[-{self.Var3}]'

		if (self.TaskVar & 0x10) != 0:
			var_out = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_out = f'Stack[-{self.VarOut}]'

		return f'{var_out} = FuncExist2({var_1}, {var_2}, {var_3})'


class CInstruction_NEW_1:
	def __init__(self, r):
		self.OpCode = 'NEW_1'
		self.VarIn = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.int8()
		self.PopCount = self.TaskVar & 0x3F

	def __repr__(self):

		if self.TaskVar >= 0:
			var_1 = f'Stack[-{self.VarIn}]'
		else:
			var_1 = f'Stack[{self.VarIn} + Tasks[-1].StackPointer]'

		if (self.TaskVar & 0x40) != 0:
			var_2 = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			var_2 = f'Stack[-{self.VarOut}]'

		return f'{var_2} = NEW1({var_1}); Pop({self.PopCount})'


class CInstruction_NEW_2:
	def __init__(self, r):
		self.OpCode = 'NEW_2'
		self.VarIn = r.uint32()

	def __repr__(self):
		return f'Call2 {hex(self.VarIn)}'



class INSTRUCTION:

	def __init__(self, r, index):
		self.index = index
		self.ulType = r.uint16()
		self.opcode = self.parse(r, self.ulType)
		#print(f'OPCODE: {hex(self.ulType)}')
		self.analyze_bb()

	def parse(self, r, ulType):
		if ulType == 0x0: return CInstructionMov(r)
		if ulType == 0x1: return CInstructionMovB(r)
		if ulType == 0x2: return CInstructionMovI(r)
		if ulType == 0x3: return CInstructionMovF(r)
		if ulType == 0x4: return CInstructionMovS(r)
		if ulType == 0x5: return CInstructionMovV(r)
		if ulType == 0x6: return CInstructionMovT(r)
		if ulType == 0x7: return CInstructionTMov(r)
		if ulType == 0x8: return CInstructionTMovB(r)
		if ulType == 0x9: return CInstructionTMovI(r)
		if ulType == 0xA: return CInstructionTMovF(r)
		if ulType == 0xB: return CInstructionTMovS(r)
		if ulType == 0xC: return CInstructionTMovV(r)
		if ulType == 0xD: return CInstructionTMovT(r)
		if ulType == 0xE: return CInstructionJump(r)
		if ulType == 0xF: return CInstructionJumpB(r)
		if ulType == 0x10: return CInstructionPush(r)
		if ulType == 0x11: return CInstructionPushB(r) 
		if ulType == 0x12: return CInstructionPushI(r)
		if ulType == 0x13: return CInstructionPushF(r)
		if ulType == 0x14: return CInstructionPushS(r)
		if ulType == 0x15: return CInstructionPushT(r)
		if ulType == 0x16: return CInstructionPushVec(r)
		if ulType == 0x17: return CInstructionPushV(r) 
		if ulType == 0x18: return CInstructionPushE(r) 
		if ulType == 0x19: return CInstructionPushGE(r) 
		if ulType == 0x1A: return CInstructionPop(r) 
		if ulType == 0x1B: return CInstructionPopE(r)
		if ulType == 0x1C: return CInstructionPopGE(r)
		if ulType == 0x1D: return CInstructionSetNull(r)
		if ulType == 0x1E: return CInstructionSetNullT(r)
		if ulType == 0x1F: return CInstructionAdd(r)
		if ulType == 0x20: return CInstructionSub(r)
		if ulType == 0x21: return CInstructionMult(r)
		if ulType == 0x22: return CInstructionDiv(r)
		if ulType == 0x23: return CInstructionMod(r)
		if ulType == 0x24: return CInstructionAnd(r)
		if ulType == 0x25: return CInstructionOr(r)
		if ulType == 0x26: return CInstructionXor(r)
		if ulType == 0x27: return CInstructionEq(r)
		if ulType == 0x28: return CInstructionNeq(r)
		if ulType == 0x29: return CInstructionLT(r)
		if ulType == 0x2A: return CInstructionGT(r)
		if ulType == 0x2B: return CInstructionLE(r)
		if ulType == 0x2C: return CInstructionGE(r)
		if ulType == 0x2D: return CInstructionNullEq(r) 
		if ulType == 0x2E: return CInstructionNullNeq(r) 
		if ulType == 0x2F: return CInstructionNeg(r) 
		if ulType == 0x30: return CInstructionNot(r) 
		if ulType == 0x31: return CInstructionAdd2(r) 
		if ulType == 0x32: return CInstructionSub2(r) 
		if ulType == 0x33: return CInstructionMult2(r) 
		if ulType == 0x34: return CInstructionDiv2(r) 
		if ulType == 0x35: return CInstructionMod2(r) 
		if ulType == 0x36: return CInstructionAnd2(r)
		if ulType == 0x37: return CInstructionOr2(r)
		if ulType == 0x38: return CInstructionXor2(r)
		if ulType == 0x39: return CInstructionEq2(r)
		if ulType == 0x3A: return CInstructionNeq2(r)
		if ulType == 0x3B: return CInstructionLT2(r)
		if ulType == 0x3C: return CInstructionGT2(r)
		if ulType == 0x3D: return CInstructionLE2(r)
		if ulType == 0x3E: return CInstructionGE2(r)
		if ulType == 0x3F: return CInstructionNullEq2(r)
		if ulType == 0x40: return CInstructionNullNeq2(r)
		if ulType == 0x41: return CInstructionNeg2(r)
		if ulType == 0x42: return CInstructionNot2(r)
		if ulType == 0x43: return CInstructionSqrt(r)
		if ulType == 0x44: return CInstructionSqrt2(r)
		if ulType == 0x45: return CInstructionSin(r)
		if ulType == 0x46: return CInstructionSin2(r)
		if ulType == 0x47: return CInstructionCos(r)
		if ulType == 0x48: return CInstructionCos2(r)
		if ulType == 0x49: return CInstructionASin(r)
		if ulType == 0x4A: return CInstructionASin2(r)
		if ulType == 0x4B: return CInstructionPow(r)
		if ulType == 0x4C: return CInstructionPow2(r)
		if ulType == 0x4D: return CInstructionCall(r)

		global IS_ALPHA

		if IS_ALPHA:
			if ulType == 0x4E: return CInstructionReturn(r)
			if ulType == 0x4F: return CInstructionTaskCall(r)
			if ulType == 0x50: return CInstructionTaskReturn(r)
			if ulType == 0x51: return CInstructionFunc(r)
			if ulType == 0x52: return CInstructionObjFunc(r) 
			if ulType == 0x53: return CInstructionTObjFunc(r) 
			if ulType == 0x54: return CInstructionEventEnable(r)
			if ulType == 0x55: return CInstructionEventDisable(r)
			if ulType == 0x56: return CInstructionFuncExist(r)
			if ulType == 0x57: return CInstructionFuncExist2(r)
		else:
			if ulType == 0x4E: return CInstruction_NEW_1(r)
			if ulType == 0x4F: return CInstruction_NEW_2(r)
			if ulType == 0x50: return CInstructionReturn(r)
			if ulType == 0x51: return CInstructionTaskCall(r)
			if ulType == 0x52: return CInstructionTaskReturn(r)
			if ulType == 0x53: return CInstructionFunc(r)
			if ulType == 0x54: return CInstructionObjFunc(r) 
			if ulType == 0x55: return CInstructionTObjFunc(r) 
			if ulType == 0x56: return CInstructionEventEnable(r)
			if ulType == 0x57: return CInstructionEventDisable(r)
			if ulType == 0x58: return CInstructionFuncExist(r)
			if ulType == 0x59: return CInstructionFuncExist2(r)

		raise OSError(f'Invalid Opcode {ulType}')

	def __repr__(self):
		out = f'{hex(self.index)}: '
		return out + str(self.opcode)

	def is_inst_type(self, type_list):
		for i in type_list:
			if isinstance(self.opcode, i):
				return True

	def analyze_bb(self):
		self.is_bb_end = False
		self.bb_next = []
		self.call_next = []
		self.jmp_next = []
		self.je_next = []

		I_JE= [CInstructionJumpB]
		I_CALL = [CInstructionCall, CInstruction_NEW_2]
		I_CALL_ALL = I_CALL + I_JE
		I_JUMP = [CInstructionJump]
		I_END =  [CInstructionReturn]
		BB_END = I_CALL_ALL + I_JUMP + I_END

		if self.is_inst_type(I_CALL_ALL):
			self.bb_next = [self.index + 1, self.opcode.VarIn]

		if self.is_inst_type(I_CALL):
			self.call_next = [self.opcode.VarIn]

		if self.is_inst_type(I_JE):
			self.je_next = [self.opcode.VarIn]

		if self.is_inst_type(I_JUMP):
			self.bb_next = [self.opcode.VarIn]
			self.jmp_next = [self.opcode.VarIn]
			
		if self.is_inst_type(I_END):
			self.bb_next = [-1]

		if self.is_inst_type(BB_END):
			self.is_bb_end = True


class ScriptCode:

	def __init__(self, r):
		self.CodeSize = r.uint32()
		self.instr = [INSTRUCTION(r, i) for i in range(self.CodeSize)]

	def __repr__(self):
		out = ''
		for i in self.instr:
			out += str(i) + '\n'

			if i.is_bb_end:
				out += '\n'

		return '\n' + out


class PathologicScript:

	def __init__(self, path):
		r = Reader(path)
		self.gvar = GlobalVars(r)
		self.pool = DataPool(r)
		self.gfunc = GlobFuncs(r)
		self.gtasks = GlobTasks(r)
		self.gevents = GlobEvents(r)

		global GLOB_VARS
		GLOB_VARS = self.gvar

		global GLOB_FUNC
		GLOB_FUNC = self.gfunc

		global GLOB_POOL
		GLOB_POOL = self.pool.data

		global GLOB_TASK
		GLOB_TASK = self.gtasks


		self.code = ScriptCode(r)
		

	def __repr__(self):
		return str(self.gvar) + str(self.pool) + str(self.gfunc) + str(self.gtasks) + str(self.gevents) + str(self.code)

