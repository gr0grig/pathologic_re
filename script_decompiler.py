import os
import struct

# toggle on Alpha version
IS_ALPHA = False
# path to extracted Scripts.vfs
IN_PATH = r'C:\\games\\Pathologic_2005\\data\\extracted'

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



VAR_TYPE = {1:'BOOL', 2:'INT', 3:'FLOAT', 4:'STRING', 5:'OBJECT', 6:'CVECTOR'}

class GlobalVars:

	def __init__(self, r):
		self.GlobalVarCount = r.uint32()
		self.GvarTypes = list()
		for i in range(self.GlobalVarCount):
			self.GvarTypes.append(VarTypes(r, i))

	def __repr__(self):
		out = f'GlobalVarCount = {self.GlobalVarCount}\n'
		for i in self.GvarTypes:
			type_str = VAR_TYPE[i.type]
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
		types = [VAR_TYPE[x].lower() for x in self.pVarTypes]
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
		types = [VAR_TYPE[x].lower() for x in self.VarTypes]
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


class GlobEvents:

	def __init__(self, r):
		self.EventCount = r.uint32()
		self.events = [GEVENT(r) for i in range(self.EventCount)]

	def __repr__(self):
		out = ''
		for i in self.events:
			out += str(i) + '\n'
		return out


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
		self.lVal = r.uint32()

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

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = "{get_str_from_pool(self.Offset)}"'

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
		self.lVal = r.uint32()	

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

	def __repr__(self):
		return f'Stack[{self.VarOut} + Tasks[-1].StackPointer] = "{get_str_from_pool(self.Offset)}"'

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
		self.VarOut = r.uint32()	

	def __repr__(self):
		return f'Stack[{self.VarOut} + Tasks[-1].StackPointer] = Stack[{self.VarIn} + Tasks[-1].StackPointer]'

class CInstructionJump:
	def __init__(self, r):
		self.OpCode = 'Jump'
		self.m_ulOp = r.uint32()

	def __repr__(self):
		return f'GOTO {hex(self.m_ulOp)}'

class CInstructionJumpB:
	def __init__(self, r):
		self.OpCode = 'JumpB'
		self.lVar = r.uint32()
		self.m_ulOp = r.uint32()
		zero = r.uint8() 
		self.sPop = r.uint8()
		self.bVal = r.uint8()

	def __repr__(self):
		out = f'IF (Stack[-{self.lVar}] == {self.bVal}) GOTO {hex(self.m_ulOp)}; Pop({self.sPop})'
		return out

class CInstructionPush:
	def __init__(self, r):
		self.OpCode = 'Push'
		self.VarIn = r.uint32()

	def __repr__(self):
		return f'Push(Stack[-{self.VarIn}])'

class CInstructionPushB:
	def __init__(self, r):
		self.OpCode = 'PushB'
		self.VarIn = r.uint8()

	def __repr__(self):
		return f'Push((bool) {self.VarIn})'

class CInstructionPushI:
	def __init__(self, r):
		self.OpCode = 'PushI'
		self.VarIn = r.uint32()

	def __repr__(self):
		return f'Push((int) {self.VarIn})'


class CInstructionPushF:
	def __init__(self, r):
		self.OpCode = 'PushF'
		self.VarIn = r.float()

	def __repr__(self):
		return f'Push((float){self.VarIn})'


class CInstructionPushS:
	def __init__(self, r):
		self.OpCode = 'PushS'
		self.Offset = r.uint32()

	def __repr__(self):
		return f'Push("{get_str_from_pool(self.Offset)}")'

class CInstructionPushT:
	def __init__(self, r):
		self.OpCode = 'PushT'
		self.VarIn = r.uint32()

	def __repr__(self):
		return f'Push( Stack[{self.VarIn} + Tasks[-1].StackPointer] )'

class CInstructionPushVec:
	def __init__(self, r):
		self.OpCode = 'PushVec'
		self.CVector = CVector(r)

	def __repr__(self):
		return f'Push({self.CVector})'

class CInstructionPushV:
	def __init__(self, r):
		self.OpCode = 'PushV'
		self.VarCount = r.uint32()
		self.VarTypes = r.bytes(self.VarCount)

	def __repr__(self):
		types = [VAR_TYPE[x].lower() for x in self.VarTypes]
		types_str = ', '.join(types)
		return f'PushEmpty({types_str})'

class CInstructionPushE:
	def __init__(self, r):
		self.OpCode = 'PushE'
		self.VarIn = r.uint32()
		self.Index = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		if self.TaskVar:
			temp = f'Stack[{self.VarIn} + Tasks[-1].StackPointer]'
		else:
			temp = f'Stack[-{self.VarIn}]'

		return f'Push(CVariableVector({temp}, {self.Index}))'

class CInstructionPushGE:
	def __init__(self, r):
		self.OpCode = 'PushGE'
		self.VarIn = r.uint32()

	def __repr__(self):
		return f'Push(GlobalVars[{self.VarIn}])'

class CInstructionPop:
	def __init__(self, r):
		self.OpCode = 'Pop'
		self.VarIn = r.uint32()

	def __repr__(self):
		return f'Pop({self.VarIn})'

class CInstructionPopE:
	def __init__(self, r):
		self.OpCode = 'PopE'
		self.VarOut = r.uint32()
		self.Index = r.uint32()
		self.Flags = r.uint8()

	def __repr__(self):
		if self.Flags:
			temp = f'Stack[{self.VarOut} + Tasks[-1].StackPointer]'
		else:
			temp = f'Stack[-{self.VarOut}]'

		return f'Stack[-1] = Stack[{temp} * 4 + {self.Index}]'

class CInstructionPopGE:
	def __init__(self, r):
		self.OpCode = 'PopGE'
		self.VarOut = r.uint32()
		self.Flags = r.uint8()

	def __repr__(self):
		return f'PopGE {self.VarOut}'

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
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.Var1}] += Stack[-{self.Var2}]'

class CInstructionSub:
	def __init__(self, r):
		self.OpCode = 'Sub'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.Var1}] -= Stack[-{self.Var2}]'

class CInstructionMult:
	def __init__(self, r):
		self.OpCode = 'Mult'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.Var1}] *= Stack[-{self.Var2}]'

class CInstructionDiv:
	def __init__(self, r):
		self.OpCode = 'Div'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.Var1}] /= Stack[-{self.Var2}]'

class CInstructionMod:
	def __init__(self, r):
		self.OpCode = 'Mod'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.Var1}] %= Stack[-{self.Var2}]'

class CInstructionAnd:
	def __init__(self, r):
		self.OpCode = 'And'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.Var1}] &= Stack[-{self.Var2}]'

class CInstructionOr:
	def __init__(self, r):
		self.OpCode = 'Or'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.Var1}] |= Stack[-{self.Var2}]'

class CInstructionXor:
	def __init__(self, r):
		self.OpCode = 'Xor'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.Var1}] ^= Stack[-{self.Var2}]'

class CInstructionEq:
	def __init__(self, r):
		self.OpCode = 'Eq'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):

		if self.TaskVar >= 0 and self.TaskVar < 0x7F:
			# signed > 0
			temp_1 = f'Stack[-{self.Var1}]'
		else:
			temp_1 = f'Stack[{self.Var1} + Tasks[-1].StackPointer]'
	
		if self.TaskVar & 64:
			temp_2 = f'Stack[{self.Var2} + Tasks[-1].StackPointer]'
		else:
			temp_2 = f'Stack[-{self.Var2}]'

		return f'Pop({self.TaskVar & 0x3F}); Push((bool) {temp_1} == {temp_2})'


class CInstructionNeq:
	def __init__(self, r):
		self.OpCode = 'Neq'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Pop({self.TaskVar & 0x7F}); Push((bool) Stack[-{self.Var1}] != Stack[-{self.Var2}])'

class CInstructionLT:
	def __init__(self, r):
		self.OpCode = 'LT'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Pop({self.TaskVar & 0x3F}); Push((bool) Stack[-{self.Var1}] < Stack[-{self.Var2}])'

class CInstructionGT:
	def __init__(self, r):
		self.OpCode = 'GT'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Pop({self.TaskVar & 0x3F}); Push((bool) Stack[-{self.Var1}] > Stack[-{self.Var2}])'

class CInstructionLE:
	def __init__(self, r):
		self.OpCode = 'LE'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Pop({self.TaskVar & 0x3F}); Push((bool) Stack[-{self.Var1}] <= Stack[-{self.Var2}])'

class CInstructionGE:
	def __init__(self, r):
		self.OpCode = 'GE'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Pop({self.TaskVar & 0x3F}); Push((bool) Stack[-{self.Var1}] >= Stack[-{self.Var2}])'

class CInstructionNullEq:
	def __init__(self, r):
		self.OpCode = 'NullEq'
		self.Var = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Pop({self.TaskVar & 0x3F}); Push((bool) Stack[-{self.Var}] == 0)'

class CInstructionNullNeq:
	def __init__(self, r):
		self.OpCode = 'NullNeq'
		self.Var = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Pop({self.TaskVar & 0x3F}); Push((bool) Stack[-{self.Var}] != 0)'


class CInstructionNeg:
	def __init__(self, r):
		self.OpCode = 'Neg'
		self.Var = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.Var}] = -Stack[-{self.Var}]'

class CInstructionNot:
	def __init__(self, r):
		self.OpCode = 'Not'
		self.Var = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.Var}] = !Stack[-{self.Var}]'

class CInstructionAdd2:
	def __init__(self, r):
		self.OpCode = 'Add2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = Stack[-{self.Var1}] + Stack[-{self.Var2}] '

class CInstructionSub2:
	def __init__(self, r):
		self.OpCode = 'Sub2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = Stack[-{self.Var1}] - Stack[-{self.Var2}] '

class CInstructionMult2:
	def __init__(self, r):
		self.OpCode = 'Mult2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = Stack[-{self.Var1}] * Stack[-{self.Var2}] '

class CInstructionDiv2:
	def __init__(self, r):
		self.OpCode = 'Div2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = Stack[-{self.Var1}] / Stack[-{self.Var2}] '

class CInstructionMod2:
	def __init__(self, r):
		self.OpCode = 'Mod2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = Stack[-{self.Var1}] % Stack[-{self.Var2}] '

class CInstructionAnd2:
	def __init__(self, r):
		self.OpCode = 'And2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = Stack[-{self.Var1}] & Stack[-{self.Var2}] '

class CInstructionOr2:
	def __init__(self, r):
		self.OpCode = 'Or2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = Stack[-{self.Var1}] | Stack[-{self.Var2}] '

class CInstructionXor2:
	def __init__(self, r):
		self.OpCode = 'Xor2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = Stack[-{self.Var1}] ^ Stack[-{self.Var2}] '

class CInstructionEq2:
	def __init__(self, r):
		self.OpCode = 'Eq2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = (bool) Stack[-{self.Var1}] == Stack[-{self.Var2}]); Pop(1)'

class CInstructionNeq2:
	def __init__(self, r):
		self.OpCode = 'Neq2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = (bool) Stack[-{self.Var1}] != Stack[-{self.Var2}]); Pop(1)'

class CInstructionLT2:
	def __init__(self, r):
		self.OpCode = 'LT2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = (bool) Stack[-{self.Var1}] < Stack[-{self.Var2}]); Pop(1)'

class CInstructionGT2:
	def __init__(self, r):
		self.OpCode = 'GT2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = (bool) Stack[-{self.Var1}] > Stack[-{self.Var2}]); Pop(1)'

class CInstructionLE2:
	def __init__(self, r):
		self.OpCode = 'LE2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = (bool) Stack[-{self.Var1}] <= Stack[-{self.Var2}]); Pop(1)'

class CInstructionGE2:
	def __init__(self, r):
		self.OpCode = 'GE2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = (bool) Stack[-{self.Var1}] >= Stack[-{self.Var2}]); Pop(1)'

class CInstructionNullEq2:
	def __init__(self, r):
		self.OpCode = 'NullEq2'
		self.Var = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = (bool) Stack[-{self.Var}] == 0); Pop(1)'

class CInstructionNullNeq2:
	def __init__(self, r):
		self.OpCode = 'NullNeq2'
		self.Var = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = (bool) Stack[-{self.Var}] != 0); Pop(1)'

class CInstructionNeg2:
	def __init__(self, r):
		self.OpCode = 'Neg2'
		self.Var = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = -Stack[-{self.Var}])'

class CInstructionNot2:
	def __init__(self, r):
		self.OpCode = 'Not2'
		self.Var = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = !Stack[-{self.Var}])'
		
class CInstructionSqrt:
	def __init__(self, r):
		self.OpCode = 'Sqrt'
		self.Var = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.Var}] = Sqrt(Stack[-{self.Var}])'
		
class CInstructionSqrt2:
	def __init__(self, r):
		self.OpCode = 'Sqrt2'
		self.Var = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = Sqrt(Stack[-{self.Var}])'

class CInstructionSin:
	def __init__(self, r):
		self.OpCode = 'Sin'
		self.Var = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.Var}] = Sin(Stack[-{self.Var}])'
		

class CInstructionSin2:
	def __init__(self, r):
		self.OpCode = 'Sin2'
		self.Var = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = Sin(Stack[-{self.Var}])'

class CInstructionCos:
	def __init__(self, r):
		self.OpCode = 'Cos'
		self.Var = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.Var}] = Cos(Stack[-{self.Var}])'
		
class CInstructionCos2:
	def __init__(self, r):
		self.OpCode = 'Cos2'
		self.Var = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = Cos(Stack[-{self.Var}])'

class CInstructionASin:
	def __init__(self, r):
		self.OpCode = 'ASin'
		self.Var = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.Var}] = ASin(Stack[-{self.Var}])'

class CInstructionASin2:
	def __init__(self, r):
		self.OpCode = 'ASin2'
		self.Var = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = ASin(Stack[-{self.Var}])'

class CInstructionPow:
	def __init__(self, r):
		self.OpCode = 'Pow'
		self.Var = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = Pow(Stack[-{self.VarOut}, {self.Var})'

class CInstructionPow2:
	def __init__(self, r):
		self.OpCode = 'Pow2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'Stack[-{self.VarOut}] = Pow(Stack[-{self.Var1}, {self.Var2})'

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

	def __repr__(self):
		return f'Return({self.VarIn})'

class CInstructionTaskCall:
	def __init__(self, r):
		self.OpCode = 'TaskCall'
		self.VarIn = r.uint32()

	def __repr__(self):
		return f'TaskCall {self.VarIn}'

class CInstructionTaskReturn:
	def __init__(self, r):
		self.OpCode = 'TaskReturn'

	def __repr__(self):
		return f'TaskReturn'

class FUNC_VAR:
	def __init__(self, r):
		self.Var = r.uint32()
		self.Task = r.uint8()

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
		self.fvar = [FUNC_VAR(r) for i in range(self.ParmCount)]

	def __repr__(self):
		func_name = get_str_from_pool(self.NameOffset)
		args_num = [f'Stack[-{x.Var}]' for x in self.fvar]
		args =', '.join(args_num) # just ignore Tasks for now
		# just ignore 'self.Var' for now
		return f'@@ {func_name}({args})'

class CInstructionTObjFunc:
	def __init__(self, r):
		self.OpCode = 'TObjFunc'
		self.Var = r.uint32()
		self.NameOffset = r.uint32()
		self.ParmCount = r.uint32()
		self.fvar = [FUNC_VAR(r) for i in range(self.ParmCount)]

	def __repr__(self):
		func_name = get_str_from_pool(self.NameOffset)
		args_num = [f'Stack[-{x.Var}]' for x in self.fvar]
		args =', '.join(args_num) # just ignore Tasks for now
		return f'@@ {func_name}({args})'

class CInstructionEventEnable:
	def __init__(self, r):
		self.OpCode = 'EventEnable'
		self.VarIn = r.uint32()

	def __repr__(self):
		return f'EventEnable {self.VarIn}'

class CInstructionEventDisable:
	def __init__(self, r):
		self.OpCode = 'EventDisable'
		self.VarIn = r.uint32()

	def __repr__(self):
		return f'EventDisable {self.VarIn}'


class CInstructionFuncExist:
	def __init__(self, r):
		self.OpCode = 'FuncExist'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()

	def __repr__(self):
		return f'FuncExist {self.VarOut} = {self.Var1}, {self.Var2} (TaskVar={self.TaskVar})'


class CInstructionFuncExist2:
	def __init__(self, r):
		self.OpCode = 'FuncExist2'
		self.Var1 = r.uint32()
		self.Var2 = r.uint32()
		self.Var3 = r.uint32()
		self.VarOut = r.uint32()
		self.TaskVar = r.uint8()
	def __repr__(self):
		return f'FuncExist2 {self.VarOut} = {self.Var1}, {self.Var2}, {self.Var3} (TaskVar={self.TaskVar})'


class CInstruction_NEW_1:
	def __init__(self, r):
		self.OpCode = 'NEW_1'
		self.VarIn = r.uint32()
		self.VarOut = r.uint32()
		self.bVar = r.uint8()

	def __repr__(self):
		return f'NEW_1({self.VarIn}); Stack[-{self.VarOut}] = 0; Pop({self.bVar & 0x3F})'


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
		self.instruction = self.parse(r, self.ulType)
		#print(f'OPCODE: {hex(self.ulType)}')

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
		return out + str(self.instruction)


BB_END = [CInstructionReturn, CInstructionJump, CInstructionJumpB, CInstructionCall, CInstructionTaskCall, CInstructionTaskReturn, CInstruction_NEW_2]



class ScriptCode:

	def __init__(self, r):
		self.CodeSize = r.uint32()
		self.instr = [INSTRUCTION(r, i) for i in range(self.CodeSize)]

	def __repr__(self):
		out = ''
		for i in self.instr:
			out += str(i) + '\n'

			for bbend in BB_END:
				if isinstance(i.instruction, bbend):
					out += '\n'

		return '\n' + out

class PathalogicScript:

	def __init__(self, path):
		r = Reader(path)
		self.gvar = GlobalVars(r)
		self.pool = DataPool(r)
		self.gfunc = GlobFuncs(r)
		self.gtasks = GlobTasks(r)
		self.gevents = GlobEvents(r)

		global GLOB_FUNC
		GLOB_FUNC = self.gfunc

		global GLOB_POOL
		GLOB_POOL = self.pool.data

		self.code = ScriptCode(r)
		

	def __repr__(self):
		return str(self.gvar) + str(self.pool) + str(self.gfunc) + str(self.gtasks) + str(self.gevents) + str(self.code)




os.chdir(IN_PATH)


for file in os.listdir('.'):

	if not file.endswith('.bin'):
		continue

	#print(file)

	try:
		decompiled = str(PathalogicScript(file))
	except BaseException as E:
		print('EXCEPTION', file)
		print(E)
		continue

	with open(file + '.txt', "wb") as f:
		f.write(decompiled.encode('utf-8'))

