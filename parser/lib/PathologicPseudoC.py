import re
from PathologicScript import *
from PathologicHL import *


class FakeNode(BasicNode):

	def __init__(self, addr, instructions, children=[]):
		self.addr = addr
		self.instructions = instructions
		self.children = children

	def __repr__(self):
		return f'FakeNode({hex(self.addr)})'

class FakeInstr(INSTRUCTION):

	def __init__(self, index=0, opcode=None):
		self.index = index
		self.opcode = opcode

	def __repr__(self):
		return f'FakeInstr({hex(self.index)})'


class HLInstructionProlog:

	def __init__(self, name, args):
		self.name = name
		self.args = args

	def __repr__(self):
		return f'{self.name}({self.args})'

class HLInstructionBlockStart:

	def __repr__(self):
		return '{'

class HLInstructionBlockEnd:

	def __repr__(self):
		return '}'

class HLInstructionNop:

	def __repr__(self):
		return 'NOP'

class HLInstructionLabel:

	def __init__(self, addr):
		self.addr = addr

	@staticmethod
	def make_name(addr):
		return f'Label_{addr}'

	def __repr__(self):
		return f'\n{HLInstructionLabel.make_name(self.addr)}:'

class HLInstructionMov:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarIn = stack[-opcode.VarIn]
		self.VarOut = stack[-opcode.VarOut]
		self.Used = [self.VarIn, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.VarIn};'

class HLInstructionMovB:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[-opcode.VarOut]
		self.bVal =	opcode.bVal
		self.Used = [self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.bVal};'

class HLInstructionMovI:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[-opcode.VarOut]
		self.lVal =	opcode.lVal
		self.Used = [self.VarOut]

	def __repr__(self):
		# todo - type conversation
		return f'{self.VarOut} = {self.lVal};'

class HLInstructionMovF:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[-opcode.VarOut]
		self.fVal =	opcode.fVal
		self.Used = [self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.fVal};'

class HLInstructionMovS:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[-opcode.VarOut]
		self.String = opcode.String
		self.Used = [self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = "{self.String}";'

class HLInstructionMovV:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[-opcode.VarOut]
		self.CVector = opcode.CVector
		self.Used = [self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {str(self.CVector)};'

class HLInstructionMovT:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[-opcode.VarOut]
		self.VarIn = stack[opcode.VarIn] # + StackPointer
		self.Used = [self.VarOut, self.VarIn]

	def __repr__(self):
		return f'{self.VarOut} = {self.VarIn};'

class HLInstructionTMov:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[opcode.VarOut] # + StackPointer
		self.VarIn = stack[-opcode.VarIn]
		self.Used = [self.VarOut, self.VarIn]

	def __repr__(self):
		return f'{self.VarOut} = {self.VarIn};'

class HLInstructionTMovB:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[opcode.VarOut] # + StackPointer
		self.bVal = opcode.bVal
		self.Used = [self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {"true" if self.bVal else "false"};'

class HLInstructionTMovI:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[opcode.VarOut] # + StackPointer
		self.lVal = opcode.lVal
		self.Used = [self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.lVal};'

class HLInstructionTMovF:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[opcode.VarOut] # + StackPointer
		self.fVal = opcode.fVal
		self.Used = [self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.fVal};'

class HLInstructionTMovS:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[opcode.VarOut] # + StackPointer
		self.String = opcode.String
		self.Used = [self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = "{self.String}";'

class HLInstructionTMovV:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[opcode.VarOut] # + StackPointer
		self.CVector = opcode.CVector
		self.Used = [self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {str(self.CVector)};'

class HLInstructionTMovT:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[opcode.VarOut] # + StackPointer
		self.VarIn = stack[opcode.VarIn] # + StackPointer
		self.Used = [self.VarIn, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.VarIn};'

class HLInstructionJump:

	def __init__(self, instr):
		opcode = instr.opcode
		self.addr = opcode.VarIn
		self.label = HLInstructionLabel.make_name(self.addr)

	def __repr__(self):
		return f'goto {self.label};'

class HLInstructionJumpB:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		self.Var_1 = stack_before[-opcode.lVar]
		self.Var_2 = opcode.bVal
		self.label = HLInstructionLabel.make_name(opcode.VarIn)

	def __repr__(self):
		return f'if({self.Var_1} == {self.Var_2}) goto {self.label};'


class HLInstructionPush:
	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		self.VarIn = stack_before[-opcode.VarIn]
		self.VarOut = stack[-1]
		self.Used = [self.VarIn]
		self.Created = [self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.VarIn};'


class HLInstructionPushB:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[-1]
		self.VarIn = opcode.VarIn
		self.Created = [self.VarOut]

	def __repr__(self):
		suffix = ' //@pi' if self.VarIn == 0 else ''
		return f'{self.VarOut} = {self.VarIn};{suffix}'

class HLInstructionPushI:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[-1]
		self.VarIn = opcode.VarIn
		self.Created = [self.VarOut]

	def __repr__(self):
		# Mark default-value PushI with //@pi so compiler uses Push, not PushEmpty
		suffix = ' //@pi' if self.VarIn == 0 else ''
		return f'{self.VarOut} = {self.VarIn};{suffix}'

class HLInstructionPushF:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[-1]
		self.VarIn = opcode.VarIn
		self.Created = [self.VarOut]

	def __repr__(self):
		suffix = ' //@pi' if self.VarIn == 0 or self.VarIn == 0.0 else ''
		return f'{self.VarOut} = {self.VarIn};{suffix}'

class HLInstructionPushS:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[-1]
		self.String = opcode.String
		self.Created = [self.VarOut]

	def __repr__(self):
		escaped = self.String.replace('"', '\\"')
		suffix = ' //@pi' if self.String == '' else ''
		return f'{self.VarOut} = "{escaped}";{suffix}'

class HLInstructionPushT:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before
		self.VarIn = stack_before[opcode.VarIn] # + StackPointer
		self.VarOut = stack[-1]
		self.Created = [self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.VarIn};'

class HLInstructionPushVec:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[-1]
		self.CVector = opcode.CVector
		self.Created = [self.VarOut]

	def __repr__(self):
		vec = self.CVector
		suffix = ' //@pi' if vec.x == 0 and vec.y == 0 and vec.z == 0 else ''
		return f'{self.VarOut} = {str(vec)};{suffix}'

class HLInstructionPushV:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.Created = []
		self.var_list = []

		for i in reversed(range(1, opcode.VarCount+1)):
			var = stack[-i]
			type = var_type_name(var.type)
			self.Created += [var]

			if type == 'bool' or type == 'int' or type == 'float':
				value = '0'

			if type == 'string':
				value = '""'

			if type == 'object':
				value = 'Obj()'

			if type == 'cvector':
				value = 'CVector(0,0,0)'

			var_str =  f'{var} = {value};'
			self.var_list.append(var_str)

	def __repr__(self):
		return ' '.join(self.var_list)

class HLInstructionPushE:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before
		self.Index = opcode.Index

		if opcode.TaskVar:
			self.VarIn = stack_before[opcode.VarIn] # + StackPointer
		else:
			self.VarIn = stack_before[-opcode.VarIn]

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.VarIn]

	def __repr__(self):
		return f'{self.VarOut} = GetByIndex({self.VarIn}, {self.Index});'

class HLInstructionPushGE:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarIn = opcode.VarIn

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = GlobalVars[{self.VarIn}];'

class HLInstructionPopE:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before
		self.Index = opcode.Index
		self.Flags = opcode.Flags

		if self.Flags & 1:
			self.VarOut = stack_before[opcode.VarOut]  # + StackPointer
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.VarIn = stack_before[-1]
		self.Used = [self.VarOut]

	def __repr__(self):
		return f'SetByIndex({self.VarOut}, {self.Index}) = {self.VarIn};'

class HLInstructionPopGE:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before
		self.VarOut = opcode.VarOut

		self.VarIn = stack_before[-1]
		self.Used = [self.VarIn]

	def __repr__(self):
		return f'GlobalVars[{self.VarOut}] = {self.VarIn};'

class HLInstructionSetNull:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarIn = stack[-opcode.VarIn]
		self.Used = [self.VarIn]

	def __repr__(self):
		return f'{self.VarIn} = 0;'

class HLInstructionSetNullT:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarIn = stack[opcode.VarIn] # + StackPointer
		self.Used = [self.VarIn]

	def __repr__(self):
		return f'{self.VarIn} = 0;'


class HLInstructionAdd:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var_1 = stack_before[-opcode.Var1]
		else:
			self.Var_1 = stack_before[opcode.Var1] # + StackPointer

		if opcode.TaskVar & 0x40:
			self.Var_2 = stack_before[opcode.Var2] # + StackPointer
		else:
			self.Var_2 = stack_before[-opcode.Var2]

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var_1, self.Var_2]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var_1} + {self.Var_2};'


class HLInstructionSub:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var_1 = stack_before[-opcode.Var1]
		else:
			self.Var_1 = stack_before[opcode.Var1] # + StackPointer

		if opcode.TaskVar & 0x40:
			self.Var_2 = stack_before[opcode.Var2] # + StackPointer
		else:
			self.Var_2 = stack_before[-opcode.Var2]

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var_1, self.Var_2]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var_1} - {self.Var_2};'

class HLInstructionMult:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var_1 = stack_before[-opcode.Var1]
		else:
			self.Var_1 = stack_before[opcode.Var1] # + StackPointer

		if opcode.TaskVar & 0x40:
			self.Var_2 = stack_before[opcode.Var2] # + StackPointer
		else:
			self.Var_2 = stack_before[-opcode.Var2]

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var_1, self.Var_2]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var_1} * {self.Var_2};'

class HLInstructionDiv:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var_1 = stack_before[-opcode.Var1]
		else:
			self.Var_1 = stack_before[opcode.Var1] # + StackPointer

		if opcode.TaskVar & 0x40:
			self.Var_2 = stack_before[opcode.Var2] # + StackPointer
		else:
			self.Var_2 = stack_before[-opcode.Var2]

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var_1, self.Var_2]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var_1} / {self.Var_2};'

class HLInstructionMod:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var_1 = stack_before[-opcode.Var1]
		else:
			self.Var_1 = stack_before[opcode.Var1] # + StackPointer

		if opcode.TaskVar & 0x40:
			self.Var_2 = stack_before[opcode.Var2] # + StackPointer
		else:
			self.Var_2 = stack_before[-opcode.Var2]

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var_1, self.Var_2]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var_1} % {self.Var_2};'

class HLInstructionAnd:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var_1 = stack_before[-opcode.Var1]
		else:
			self.Var_1 = stack_before[opcode.Var1] # + StackPointer

		if opcode.TaskVar & 0x40:
			self.Var_2 = stack_before[opcode.Var2] # + StackPointer
		else:
			self.Var_2 = stack_before[-opcode.Var2]

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var_1, self.Var_2]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var_1} & {self.Var_2};'

class HLInstructionOr:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var_1 = stack_before[-opcode.Var1]
		else:
			self.Var_1 = stack_before[opcode.Var1] # + StackPointer

		if opcode.TaskVar & 0x40:
			self.Var_2 = stack_before[opcode.Var2] # + StackPointer
		else:
			self.Var_2 = stack_before[-opcode.Var2]

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var_1, self.Var_2]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var_1} | {self.Var_2};'

class HLInstructionXor:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var_1 = stack_before[-opcode.Var1]
		else:
			self.Var_1 = stack_before[opcode.Var1] # + StackPointer

		if opcode.TaskVar & 0x40:
			self.Var_2 = stack_before[opcode.Var2] # + StackPointer
		else:
			self.Var_2 = stack_before[-opcode.Var2]

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var_1, self.Var_2]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var_1} ^ {self.Var_2};'


class HLInstructionEq:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if opcode.TaskVar & 0x40:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var1, self.Var2]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} == {self.Var2};'

class HLInstructionNeq:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if opcode.TaskVar & 0x40:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var1, self.Var2]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} != {self.Var2};'

class HLInstructionLT:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if opcode.TaskVar & 0x40:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var1, self.Var2]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} < {self.Var2};'

class HLInstructionGT:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if opcode.TaskVar & 0x40:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var1, self.Var2]


	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} > {self.Var2};'

class HLInstructionLE:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if opcode.TaskVar & 0x40:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var1, self.Var2]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} <= {self.Var2};'

class HLInstructionGE:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if opcode.TaskVar & 0x40:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var1, self.Var2]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} >= {self.Var2};'

class HLInstructionNullEq:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if (opcode.TaskVar & 0x80) == 0:
			self.Var = stack_before[-opcode.Var]
		else:
			self.Var = stack_before[opcode.Var] # + StackPtr

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var} == 0; //@ne'

class HLInstructionNullNeq:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if (opcode.TaskVar & 0x80) == 0:
			self.Var = stack_before[-opcode.Var]
		else:
			self.Var = stack_before[opcode.Var] # + StackPtr

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var} != 0; //@nn'

class HLInstructionNeg:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if (opcode.TaskVar & 0x80) == 0:
			self.Var = stack_before[-opcode.Var]
		else:
			self.Var = stack_before[opcode.Var] # + StackPtr

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var]

	def __repr__(self):
		return f'{self.VarOut} = -{self.Var};'

class HLInstructionNot:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_after = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if (opcode.TaskVar & 0x80) == 0:
			self.Var1 = stack_before[-opcode.Var]
		else:
			self.Var1 = stack_before[opcode.Var] # + StackPtr

		self.VarOut = stack_after[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var1]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} == 0; //@nz'


class HLInstructionAdd2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		if (opcode.TaskVar & 0x20) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.Var2, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} + {self.Var2};'

class HLInstructionSub2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		if (opcode.TaskVar & 0x20) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.Var2, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} - {self.Var2};'

class HLInstructionMult2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		if (opcode.TaskVar & 0x20) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.Var2, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} * {self.Var2};'

class HLInstructionDiv2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		if (opcode.TaskVar & 0x20) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.Var2, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} / {self.Var2};'

class HLInstructionMod2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		if (opcode.TaskVar & 0x20) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.Var2, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} % {self.Var2};'

class HLInstructionAnd2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		if (opcode.TaskVar & 0x20) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.Var2, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} & {self.Var2};'

class HLInstructionOr2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		if (opcode.TaskVar & 0x20) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.Var2, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} | {self.Var2};'

class HLInstructionXor2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		if (opcode.TaskVar & 0x20) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.Var2, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} ^ {self.Var2};'

class HLInstructionEq2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		if (opcode.TaskVar & 0x20) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.Var2, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} == {self.Var2};'

class HLInstructionNeq2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		if (opcode.TaskVar & 0x20) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.Var2, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} != {self.Var2};'

class HLInstructionLT2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		if (opcode.TaskVar & 0x20) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.Var2, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} < {self.Var2};'

class HLInstructionGT2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		if (opcode.TaskVar & 0x20) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.Var2, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} > {self.Var2};'

class HLInstructionLE2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		if (opcode.TaskVar & 0x20) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.Var2, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} <= {self.Var2};'

class HLInstructionGE2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		if (opcode.TaskVar & 0x20) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.Var2, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} >= {self.Var2};'


class HLInstructionNullEq2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var]
		else:
			self.Var1 = stack_before[opcode.Var] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} == 0; //@ne'

class HLInstructionNullNeq2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var]
		else:
			self.Var1 = stack_before[opcode.Var] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.Var1} != 0;'

class HLInstructionNeg2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var]
		else:
			self.Var1 = stack_before[opcode.Var] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = -{self.Var1};'

class HLInstructionNot2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var]
		else:
			self.Var1 = stack_before[opcode.Var] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = !{self.Var1};'


class HLInstructionSqrt:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if (opcode.TaskVar & 0x80) == 0:
			self.Var1 = stack_before[-opcode.Var]
		else:
			self.Var1 = stack_before[opcode.Var] # + StackPtr

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var1]

	def __repr__(self):
		return f'{self.VarOut} = sqrt({self.Var1});'


class HLInstructionSqrt2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var]
		else:
			self.Var1 = stack_before[opcode.Var] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = sqrt({self.Var1});'


class HLInstructionSin:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if (opcode.TaskVar & 0x80) == 0:
			self.Var1 = stack_before[-opcode.Var]
		else:
			self.Var1 = stack_before[opcode.Var] # + StackPtr

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var1]

	def __repr__(self):
		return f'{self.VarOut} = sin({self.Var1});'

class HLInstructionSin2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var]
		else:
			self.Var1 = stack_before[opcode.Var] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = sin({self.Var1});'

class HLInstructionCos:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if (opcode.TaskVar & 0x80) == 0:
			self.Var1 = stack_before[-opcode.Var]
		else:
			self.Var1 = stack_before[opcode.Var] # + StackPtr

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var1]

	def __repr__(self):
		return f'{self.VarOut} = cos({self.Var1});'

class HLInstructionCos2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var]
		else:
			self.Var1 = stack_before[opcode.Var] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = cos({self.Var1});'

class HLInstructionASin:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if (opcode.TaskVar & 0x80) == 0:
			self.Var1 = stack_before[-opcode.Var]
		else:
			self.Var1 = stack_before[opcode.Var] # + StackPtr

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var1]

	def __repr__(self):
		return f'{self.VarOut} = asin({self.Var1});'

class HLInstructionASin2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var]
		else:
			self.Var1 = stack_before[opcode.Var] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = asin({self.Var1});'

class HLInstructionPow:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before
		stack = opcode.stack_snapshot_after

		if opcode.TaskVar >= 0:
			self.Var_1 = stack_before[-opcode.Var1]
		else:
			self.Var_1 = stack_before[opcode.Var1] # + StackPointer

		if opcode.TaskVar & 0x40:
			self.Var_2 = stack_before[opcode.Var2] # + StackPointer
		else:
			self.Var_2 = stack_before[-opcode.Var2]

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var_1, self.Var_2]

	def __repr__(self):
		return f'{self.VarOut} = pow({self.Var_1}, {self.Var_2});'


class HLInstructionPow2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		if (opcode.TaskVar & 0x20) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.Var2, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = pow({self.Var1}, {self.Var2});'


class HLInstructionCall:

	def __init__(self, instr, callback):
		self.instr = instr
		opcode = instr.opcode
		self.VarIn = opcode.VarIn
		self.callback = callback

	def __repr__(self):
		args = self.callback(self.VarIn, self.instr)
		return f'func_{self.VarIn}({args});'


class HLInstructionReturn:

	def __init__(self, instr):
		opcode = instr.opcode
		self.VarIn = opcode.VarIn

	def __repr__(self):
		# todo: remove var count
		return f'return {self.VarIn};'


class HLInstructionTaskCall:

	def __init__(self, instr):
		opcode = instr.opcode
		self.VarIn = opcode.VarIn

	def __repr__(self):
		return f'TaskCall({self.VarIn});'

class HLInstructionTaskReturn:

	def __init__(self, instr):
		opcode = instr.opcode

	def __repr__(self):
		return f'TaskReturn();'

class HLInstructionFunc:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.func_name = opcode.func_name
		self.args = []
		self.Used = []

		for i in opcode.fvar:
			if i.Task:
				arg = stack[i.Var]  # task-addressing: from base forward
			else:
				arg = stack[-i.Var]  # normal: from top backward
			self.args.append(str(arg))
			self.Used.append(arg)
		self.args_str = ', '.join(self.args)

	def __repr__(self):
		return f'{self.func_name}({self.args_str});'


class HLInstructionObjFunc:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.func_name = opcode.func_name
		self.obj_var = str(stack[-opcode.Var])  # Resolved variable name

		self.args = []
		self.Used = [stack[-opcode.Var]]  # Track Obj reference as Used

		for i in opcode.fvar:
			if i.Task:
				arg = stack[i.Var]  # task-addressing
			else:
				arg = stack[-i.Var]  # normal
			self.args.append(str(arg))
			self.Used.append(arg)
		self.args_str = ', '.join(self.args)

	def __repr__(self):
		return f'@@{self.obj_var}:{self.func_name}({self.args_str});'


class HLInstructionTObjFunc:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.func_name = opcode.func_name
		self.obj_var = str(stack[opcode.Var])  # Resolved variable name (task-addressed)

		self.args = []
		self.Used = [stack[opcode.Var]]  # Track Obj reference as Used (task-addressed)

		for i in opcode.fvar:
			if i.Task:
				arg = stack[i.Var]  # task-addressing
			else:
				arg = stack[-i.Var]  # normal
			self.args.append(str(arg))
			self.Used.append(arg)
		self.args_str = ', '.join(self.args)

	def __repr__(self):
		return f'@@@{self.obj_var}:{self.func_name}({self.args_str});'


class HLInstructionEventEnable:

	def __init__(self, instr):
		opcode = instr.opcode
		self.VarIn = opcode.VarIn

	def __repr__(self):
		return f'EventEnable({self.VarIn});'

class HLInstructionEventDisable:

	def __init__(self, instr):
		opcode = instr.opcode
		self.VarIn = opcode.VarIn

	def __repr__(self):
		return f'EventDisable({self.VarIn});'

class HLInstructionFuncExist:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		if (opcode.TaskVar & 0x20) != 0:
			self.Var3 = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.Var3 = stack_before[-opcode.VarOut]

		self.VarOut = stack[-1]
		self.Created = [self.VarOut]
		self.Used = [self.Var1, self.Var2, self.Var3]

	def __repr__(self):
		return f'{self.VarOut} = IsFuncExist({self.Var1}, {self.Var2}, {self.Var3});'


class HLInstructionFuncExist2:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.Var1 = stack_before[-opcode.Var1]
		else:
			self.Var1 = stack_before[opcode.Var1] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.Var2 = stack_before[opcode.Var2] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var2]

		if (opcode.TaskVar & 0x20) != 0:
			self.Var3 = stack_before[opcode.Var3] # + StackPtr
		else:
			self.Var3 = stack_before[-opcode.Var3]

		if (opcode.TaskVar & 0x10) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

		self.Used = [self.Var1, self.Var2, self.Var3, self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = IsFuncExist({self.Var1}, {self.Var2}, {self.Var3});'


class HLInstruction_NEW_1:

	def __init__(self, instr):
		opcode = instr.opcode
		stack_before = opcode.stack_snapshot_before

		if opcode.TaskVar >= 0:
			self.VarIn = stack_before[-opcode.VarIn]
		else:
			self.VarIn = stack_before[opcode.VarIn] # + StackPtr

		if (opcode.TaskVar & 0x40) != 0:
			self.VarOut = stack_before[opcode.VarOut] # + StackPtr
		else:
			self.VarOut = stack_before[-opcode.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = NEW1({self.VarIn});'

class HLInstruction_NEW_2:

	def __init__(self, instr, callback):
		opcode = instr.opcode
		self.instr = instr
		self.VarIn = opcode.VarIn
		self.callback = callback

	def __repr__(self):
		args = self.callback(self.VarIn, self.instr)
		return f'func_{self.VarIn}({args});'

def parse_graph(node, seen=[]):

	if node.addr in seen:
		return
	else:
		seen += [node.addr]

	for i in node.instructions:
		yield node, i

	for i in node.children:
		yield from parse_graph(i, seen)



class PathologicPseudoC:

	def __init__(self, phl):
		self.insert_label_list = []
		self.call_dict = {}
		self.separate_call_seen = []

		self.phl = phl
		# Collect all entry point and function node addresses for boundary detection
		self.all_ep_addrs = set(phl.entry_points)
		self.all_func_addrs = set(phl.call_next)
		self.process_nodes()


	def process_nodes(self):
		for node in self.phl.get_ep_nodes():
			self.process_passes(node, [])
			self.pass_InsertLabels(node)
			self.pass_AddIdents(node)
			self.separate_call(node)
			self.pass_InsertPrologAndEpilog(node)

		for node in self.phl.get_func_nodes():
			self.pass_InsertPrologAndEpilog(node, True)


	def pass_WhileTrue(self, text):
		RE_LABEL = re.compile(r'^(\s*)(Label_\w+):')
		RE_GOTO = re.compile(r'^(\s*)goto (Label_\w+);')

		lines = text.split('\n')

		# Build label ref counts
		label_refs = {}
		for line in lines:
			m = RE_GOTO.match(line)
			if m:
				lbl = m.group(2)
				label_refs[lbl] = label_refs.get(lbl, 0) + 1
			m = re.match(r'^\s*if\(.+\) goto (Label_\w+);', line)
			if m:
				lbl = m.group(1)
				label_refs[lbl] = label_refs.get(lbl, 0) + 1

		# Find: Label_X: ... goto Label_X; (backward goto to immediately preceding label)
		wrapped_labels = set()
		i = 0
		while i < len(lines):
			m_goto = RE_GOTO.match(lines[i])
			if m_goto:
				target = m_goto.group(2)
				indent = m_goto.group(1)
				# Skip labels already wrapped into while(true)
				if target in wrapped_labels:
					i += 1
					continue
				# Find the label above
				label_line = None
				for j in range(i - 1, -1, -1):
					m_lbl = RE_LABEL.match(lines[j])
					if m_lbl and m_lbl.group(2) == target:
						label_line = j
						break
					# Stop searching if we hit a non-body line (function header, closing brace at same/lower indent)
					if lines[j].strip() and not lines[j].strip().startswith('//'):
						continue
				if label_line is not None:
					# Verify label and goto are at the same nesting level:
					# if brace balance goes negative between them, the label is
					# inside a block (e.g. an already-wrapped while) that the goto is outside of.
					brace_bal_check = 0
					scope_valid = True
					for j in range(label_line + 1, i):
						for ch in lines[j]:
							if ch == '{': brace_bal_check += 1
							elif ch == '}': brace_bal_check -= 1
						if brace_bal_check < 0:
							scope_valid = False
							break
					if not scope_valid:
						i += 1
						continue

					# Detect exit blocks within the loop body
					# Pattern: goto EXIT_LBL; EXIT_LBL: ..return..; CONT_LBL: ..goto LOOP;
					# Conditions: goto is immediately before label (no code between),
					# label has exactly 1 reference, and there IS code after exit block
					body_labels = {}
					for j in range(label_line + 1, i):
						m_lbl = RE_LABEL.match(lines[j])
						if m_lbl:
							body_labels[m_lbl.group(2)] = j

					exit_extract = {}
					for lbl, lbl_pos in body_labels.items():
						# Only extract if label has exactly 1 reference
						if label_refs.get(lbl, 0) != 1:
							continue
						blk_end = i
						for j in range(lbl_pos + 1, i):
							if RE_LABEL.match(lines[j]):
								blk_end = j
								break
						# Must have continuation code after exit block
						if blk_end >= i:
							continue
						has_return = False
						for j in range(lbl_pos, blk_end):
							if re.match(r'^\s*return\b', lines[j]):
								has_return = True
								break
						if not has_return:
							continue
						# Find the goto to this label - must be immediately before it
						goto_line = None
						j = lbl_pos - 1
						while j > label_line and not lines[j].strip():
							j -= 1
						if j > label_line:
							m_g = RE_GOTO.match(lines[j])
							if m_g and m_g.group(2) == lbl:
								goto_line = j
						if goto_line is not None:
							exit_extract[lbl] = (lbl_pos, blk_end, goto_line)

					exclude_lines = set()
					goto_to_break = {}
					after_while_lines = []
					for lbl, (blk_start, blk_end, goto_line) in exit_extract.items():
						goto_indent = RE_GOTO.match(lines[goto_line]).group(1)
						goto_to_break[goto_line] = goto_indent + 'break;'
						for j in range(blk_start + 1, blk_end):
							if lines[j].strip():
								after_while_lines.append(lines[j])
						for j in range(blk_start, blk_end):
							exclude_lines.add(j)
						j = blk_start - 1
						while j > label_line and not lines[j].strip():
							exclude_lines.add(j)
							j -= 1

					# Build while(true) block
					new_lines = []
					refs = label_refs.get(target, 0) - 1  # minus this goto
					if refs > 0:
						new_lines.append(lines[label_line])  # keep label
					new_lines.append(f'{indent}while(true) {{')
					for j in range(label_line + 1, i):
						if j in exclude_lines:
							continue
						if j in goto_to_break:
							new_lines.append('\t' + goto_to_break[j])
							continue
						line_content = lines[j]
						if line_content.strip():
							new_lines.append('\t' + line_content)
						else:
							new_lines.append('')
					while new_lines and new_lines[-1] == '':
						new_lines.pop()
					new_lines.append(f'{indent}}}')
					for al in after_while_lines:
						new_lines.append(al)
					lines[label_line:i + 1] = new_lines
					wrapped_labels.add(target)
					# Don't advance i — recheck from same position
					continue
			i += 1

		return '\n'.join(lines)

	@staticmethod
	def _has_func_header_between(lines, line_a, line_b):
		"""Check if any function header (e.g. 'main()' or 'func_123(...)') exists between two lines."""
		RE_FUNC_HDR = re.compile(r'\w+\(')
		lo, hi = min(line_a, line_b) + 1, max(line_a, line_b)
		for i in range(lo, hi):
			line = lines[i]
			stripped = line.strip()
			# Function header: has parens, followed by { on next line
			if (stripped and RE_FUNC_HDR.match(stripped) and
				stripped not in ('{', '}') and '=' not in stripped and
				';' not in stripped and i + 1 < len(lines) and
				lines[i + 1].strip() == '{'):
				return True
		return False

	def pass_StructureIfGoto(self, text):
		RE_IF_GOTO = re.compile(r'^(\s*)if\((.+?) == (\d+)\) goto (Label_\w+);')
		RE_LABEL = re.compile(r'^(\s*)(Label_\w+):')
		RE_GOTO = re.compile(r'^(\s*)goto (Label_\w+);')

		lines = text.split('\n')
		changed = True

		while changed:
			changed = False

			# Build indexes
			label_pos = {}       # label_name -> line_index
			label_refs = {}      # label_name -> count of goto/if-goto refs
			if_gotos = []        # (line_index, indent, var, val, target_label)

			for i, line in enumerate(lines):
				m = RE_LABEL.match(line)
				if m:
					label_pos[m.group(2)] = i

				# Count refs from goto and if-goto
				m_goto = RE_GOTO.match(line)
				if m_goto:
					lbl = m_goto.group(2)
					label_refs[lbl] = label_refs.get(lbl, 0) + 1

				m_if = RE_IF_GOTO.match(line)
				if m_if:
					lbl = m_if.group(4)
					label_refs[lbl] = label_refs.get(lbl, 0) + 1
					if_gotos.append((i, m_if.group(1), m_if.group(2), m_if.group(3), lbl))

			# Process if-gotos bottom-to-top
			for if_line, indent, var, val, target_label in reversed(if_gotos):
				if target_label not in label_pos:
					continue
				target_line = label_pos[target_label]

				# Skip backward jumps (loops)
				if target_line <= if_line:
					continue

				# Skip if a function header exists between if-goto and target
				if self._has_func_header_between(lines, if_line, target_line):
					continue

				# Check for reversed if-else pattern:
				# Look for "goto END_LABEL;" in the body where "END_LABEL:" is also in the body
				body_start = if_line + 1
				body_end = target_line  # exclusive

				# Find goto-end pattern: a "goto X;" where "X:" follows immediately
				# (only empty lines between goto and label) and both are in the body
				else_detected = False
				goto_end_line = None
				end_label = None
				end_label_line = None

				for j in range(body_start, body_end):
					m_g = RE_GOTO.match(lines[j])
					if not m_g:
						continue
					candidate_end = m_g.group(2)
					if candidate_end not in label_pos:
						continue
					end_pos = label_pos[candidate_end]
					# END label must be between the goto and the ELSE label (target)
					if not (j < end_pos < target_line):
						continue
					# Check that between goto and label there are only empty lines
					all_empty = True
					for k in range(j + 1, end_pos):
						if lines[k].strip():
							all_empty = False
							break
					if all_empty:
						goto_end_line = j
						end_label = candidate_end
						end_label_line = end_pos
						else_detected = True
						break

				if else_detected:
					# Pattern B: Reversed if-else
					# Find else body: from target_line (ELSE label) to the function closing brace
					# Use brace balance: the first "}" where balance goes negative is the function close
					else_body_start = target_line + 1
					else_body_end = None
					brace_bal = 0
					for j in range(target_line + 1, len(lines)):
						for ch in lines[j]:
							if ch == '{': brace_bal += 1
							elif ch == '}': brace_bal -= 1
						if brace_bal < 0:
							else_body_end = j
							break

					if else_body_end is None:
						# Fallback: else body extends to end of file
						else_body_end = len(lines)

					# Check if both then-body and else-body are empty
					# This happens when DFS reorders instructions:
					#   IF→target; GOTO end; end: content; target: (block end)
					# Both branches are empty, "rest" is the real then-body.
					then_empty = all(not lines[j].strip() for j in range(body_start, goto_end_line))
					else_empty = all(not lines[j].strip() for j in range(else_body_start, else_body_end))

					# Collect rest content (between end_label and target)
					rest_lines_content = [lines[j] for j in range(end_label_line + 1, target_line)
					                      if lines[j].strip()]

					if then_empty and else_empty and rest_lines_content:
						# Degenerate Pattern B: both branches empty, rest has content.
						# Convert to simple if with rest as body:
						#   if(cond != val) { rest_content; }
						inv_val = '1' if val == '0' else '0'
						new_lines = []
						new_lines.append(f'{indent}if({var} != {val}) {{')
						for j in range(end_label_line + 1, target_line):
							line_content = lines[j]
							if line_content.strip():
								new_lines.append('\t' + line_content)
							else:
								new_lines.append('')
						while new_lines and new_lines[-1] == '':
							new_lines.pop()
						new_lines.append(f'{indent}}}')

						# Remove labels if no longer referenced
						end_refs = label_refs.get(end_label, 0) - 1
						target_refs = label_refs.get(target_label, 0) - 1
						# Replace from if_line to else_body_end (exclusive)
						if target_refs > 0:
							# Keep target label after if block
							new_lines.append(lines[target_line])
						lines[if_line:else_body_end] = new_lines
						changed = True
						break

					# Invert condition
					inv_val = '1' if val == '0' else '0'

					# Build new lines
					new_lines = []
					# if header
					new_lines.append(f'{indent}if({var} != {val}) {{')

					# then body (if_line+1 to goto_end_line-1, indented)
					for j in range(body_start, goto_end_line):
						line_content = lines[j]
						if line_content.strip():  # non-empty
							new_lines.append('\t' + line_content)
						else:
							new_lines.append('')
					while new_lines and new_lines[-1] == '':
						new_lines.pop()

					# else
					new_lines.append(f'{indent}}} else {{')

					# else body (from ELSE label to closing brace, indented)
					for j in range(else_body_start, else_body_end):
						line_content = lines[j]
						if line_content.strip():
							new_lines.append('\t' + line_content)
						else:
							new_lines.append('')
					while new_lines and new_lines[-1] == '':
						new_lines.pop()

					new_lines.append(f'{indent}}}')

					# rest: from END label content (end_label_line+1 to target_line-1)
					# Check if END label should be kept
					end_refs = label_refs.get(end_label, 0) - 1  # minus the goto we removed
					if end_refs > 0:
						new_lines.append(lines[end_label_line])  # keep label
					for j in range(end_label_line + 1, target_line):
						new_lines.append(lines[j])

					# Replace: from if_line to else_body_end (exclusive)
					# We need to keep the closing brace if else_body_end points to it
					lines[if_line:else_body_end] = new_lines

					# Also remove the ELSE label ref if no longer needed
					changed = True
					break

				else:
					# Pattern A: Simple if-skip
					# Check brace balance in body — skip if unmatched closing braces
					brace_balance = 0
					body_ok = True
					for j in range(body_start, body_end):
						for ch in lines[j]:
							if ch == '{': brace_balance += 1
							elif ch == '}': brace_balance -= 1
						if brace_balance < 0:
							body_ok = False
							break
					if not body_ok:
						continue

					inv_val = '1' if val == '0' else '0'

					new_lines = []
					new_lines.append(f'{indent}if({var} != {val}) {{')

					# body (if_line+1 to target_line-1, indented)
					for j in range(body_start, body_end):
						line_content = lines[j]
						if line_content.strip():
							new_lines.append('\t' + line_content)
						else:
							new_lines.append('')
					while new_lines and new_lines[-1] == '':
						new_lines.pop()

					new_lines.append(f'{indent}}}')

					# Keep or remove label
					refs = label_refs.get(target_label, 0) - 1
					if refs > 0:
						# Keep the label, replace if_line to target_line (exclusive)
						lines[if_line:target_line] = new_lines
					else:
						# Remove the label too, replace if_line to target_line+1
						lines[if_line:target_line + 1] = new_lines

					changed = True
					break

		return '\n'.join(lines)

	def pass_FixLoopReturn(self, text):
		"""Fix misplaced return inside loop body.

		Detects:
		  Label_X:
		    ...
		    if(cond != 0) {
		      ... body ...
		      return N;
		    }
		    ... continuation ...
		    goto Label_X;

		Fixes to:
		  Label_X:
		    ...
		    if(cond != 0) {
		      ... body ...
		      ... continuation ...
		      goto Label_X;
		    }
		    return N;
		"""
		RE_LABEL = re.compile(r'^(\s*)(Label_\w+):')
		RE_GOTO = re.compile(r'^(\s*)goto (Label_\w+);')
		RE_RETURN = re.compile(r'^(\s*)return (\d+);')
		RE_IF_OPEN = re.compile(r'^(\s*)if\(.+\) \{')
		RE_CLOSE_BRACE = re.compile(r'^(\s*)\}')

		lines = text.split('\n')

		# Build label position index
		label_pos = {}
		for i, line in enumerate(lines):
			m = RE_LABEL.match(line)
			if m:
				label_pos[m.group(2)] = i

		changed = True
		while changed:
			changed = False

			# Rebuild label_pos each iteration
			label_pos = {}
			for i, line in enumerate(lines):
				m = RE_LABEL.match(line)
				if m:
					label_pos[m.group(2)] = i

			# Search for backward goto (loop back) that follows a closing brace
			for i, line in enumerate(lines):
				m_goto = RE_GOTO.match(line)
				if not m_goto:
					continue
				goto_target = m_goto.group(2)
				goto_indent = m_goto.group(1)

				# Must be backward goto (label is before this line)
				if goto_target not in label_pos:
					continue
				if label_pos[goto_target] >= i:
					continue

				# Find the closing brace of an if block above this goto
				# There may be continuation code between the brace and the goto
				# Search upward from goto to find a } at the same indent level
				close_brace_line = None
				for j in range(i - 1, -1, -1):
					if not lines[j].strip():
						continue
					# Check for label (skip it)
					if RE_LABEL.match(lines[j]):
						continue
					m_close = RE_CLOSE_BRACE.match(lines[j])
					if m_close and m_close.group(1) == goto_indent:
						close_brace_line = j
						break
					# If we find code at this indent that is NOT a closing brace,
					# it's continuation code — keep searching up
					if lines[j].strip() and not lines[j][0:1].isspace():
						break  # hit function-level code
					continue

				if close_brace_line is None:
					continue

				# Now check: the if block above should contain a `return N;` as its
				# last statement before the closing brace
				# Find the matching opening brace
				brace_depth = 0
				open_brace_line = None
				for j in range(close_brace_line, -1, -1):
					for ch in lines[j]:
						if ch == '}': brace_depth += 1
						elif ch == '{': brace_depth -= 1
					if brace_depth == 0:
						open_brace_line = j
						break

				if open_brace_line is None:
					continue

				# The opening line should be an if(...) {
				if not RE_IF_OPEN.match(lines[open_brace_line]):
					continue

				if_indent = RE_IF_OPEN.match(lines[open_brace_line]).group(1)

				# Check that the if block's label target is the same as the goto target
				# (the label should appear before the if block)
				if label_pos.get(goto_target, -1) >= open_brace_line:
					continue

				# Find the return statement just before the closing brace
				# It should be the last non-empty line before close_brace_line
				return_line = None
				for j in range(close_brace_line - 1, open_brace_line, -1):
					if lines[j].strip():
						m_ret = RE_RETURN.match(lines[j])
						if m_ret:
							return_line = j
						break

				if return_line is None:
					continue

				# Verify: the return is at if_indent + 1 tab (inside the if block)
				ret_indent = RE_RETURN.match(lines[return_line]).group(1)
				expected_indent = if_indent + '\t'
				if ret_indent != expected_indent:
					continue

				# Collect continuation lines between close_brace and goto (inclusive)
				continuation_lines = []
				for j in range(close_brace_line + 1, i + 1):
					line_content = lines[j]
					if RE_LABEL.match(line_content):
						continue  # skip labels between brace and goto
					if line_content.strip():
						continuation_lines.append(line_content)

				# Now fix: move return after the if, move continuation inside
				# Build new block:
				# 1. lines from open_brace to return_line-1 (if body without return)
				# 2. continuation lines (re-indented to inside the if block)
				# 3. closing brace
				# 4. return (at if indent level)
				return_val = RE_RETURN.match(lines[return_line]).group(2)

				new_lines = []
				# Keep everything from open_brace to return_line-1
				for j in range(open_brace_line, return_line):
					new_lines.append(lines[j])

				# Add continuation code inside the if block (with one extra tab)
				for cl in continuation_lines:
					# Re-indent: strip leading whitespace, add if_indent + tab
					stripped = cl.lstrip()
					new_lines.append(expected_indent + stripped)

				# Close brace
				new_lines.append(if_indent + '}')

				# Return after the if block
				new_lines.append(if_indent + f'return {return_val};')

				# Replace from open_brace_line to goto line (inclusive)
				lines[open_brace_line:i + 1] = new_lines

				changed = True
				break

		return '\n'.join(lines)

	@staticmethod
	def _is_literal(value):
		"""Check if value is a constant literal suitable for inlining."""
		# String literal
		if len(value) >= 2 and value[0] == '"' and value[-1] == '"':
			return True
		# CVector literal
		if value.startswith('CVector(') and value.endswith(')'):
			return True
		# Null object literal
		if value == 'Obj()':
			return True
		# Numeric literal (int or float, possibly negative)
		if re.match(r'^-?\d+(\.\d+)?$', value):
			return True
		return False

	def _find_function_ranges(self, lines):
		"""Find (start_line, end_line) ranges for each function body."""
		ranges = []
		i = 0
		while i < len(lines):
			line = lines[i]
			# Function header: non-empty, no leading whitespace, has parentheses
			if (line.strip() and
				not line[0:1].isspace() and
				'(' in line and ')' in line and
				line.strip() != '{' and line.strip() != '}'):
				# Check for opening brace on next line
				if i + 1 < len(lines) and lines[i + 1].strip() == '{':
					depth = 0
					for j in range(i + 1, len(lines)):
						depth += lines[j].count('{') - lines[j].count('}')
						if depth == 0:
							ranges.append((i, j + 1))
							i = j + 1
							break
					else:
						i += 1
					continue
			i += 1
		return ranges

	@staticmethod
	def _var_type(var_name):
		"""Extract type from variable name like var_6_bool -> 'bool'."""
		m = re.match(r'var_\d+_(\w+)', var_name)
		return m.group(1) if m else None

	@staticmethod
	def _wrap_with_cast(value, var_type):
		"""Wrap a literal value with a type cast based on variable type.
		E.g. value='1', var_type='bool' -> '(bool)1'"""
		if not var_type:
			return value
		# String literals: only need cast if target is not string
		if value.startswith('"'):
			return value
		# Obj() / Obj(x) don't need casts
		if value.startswith('Obj('):
			return value
		# CVector doesn't need cast
		if value.startswith('CVector('):
			return value
		# Object null: 0 assigned to object var -> Obj() (null object literal)
		if var_type == 'object' and value == '0':
			return 'Obj()'
		# Type-specific casts
		if var_type == 'int' and re.match(r'^-?\d+$', value):
			return f'(int){value}'
		if var_type == 'float' and re.match(r'^-?\d+(\.\d+)?$', value):
			return f'(float){value}'
		if var_type == 'bool' and value in ('0', '1', 'true', 'false'):
			return f'(bool){value}'
		if var_type == 'string' and value == '""':
			return value
		# Default: add cast for known types
		if var_type in ('int', 'float', 'bool'):
			return f'({var_type}){value}'
		return value

	def pass_InlineConstants(self, text):
		"""Inline single-use constant variables into their usage site.
		Adds type casts to preserve MovI/MovF/MovB distinction for round-trip."""
		lines = text.split('\n')

		changed = True
		while changed:
			changed = False
			# Clean up removed lines from previous iteration
			lines = [l for l in lines if l is not None]
			func_ranges = self._find_function_ranges(lines)

			for (func_start, func_end) in func_ranges:
				for i in range(func_start, func_end):
					line_stripped = lines[i].strip()

					# Match constant assignment: var_X_TYPE = LITERAL; (possibly with // comment)
					m = re.match(r'^(var_\d+_\w+) = (.+);\s*(?://.*)?$', line_stripped)
					if not m:
						continue

					var_name = m.group(1)
					value = m.group(2)

					# Skip multi-assignment lines (PushV with multiple vars)
					if line_stripped.count(' = ') > 1:
						continue

					# Check if value is a literal
					if not self._is_literal(value):
						continue

					# Get assignment indentation level
					assign_indent = len(lines[i]) - len(lines[i].lstrip())

					# Scan forward for uses of var_name
					var_pattern = re.compile(r'\b' + re.escape(var_name) + r'\b')
					reassign_pattern = re.compile(
						r'(?:^|; )' + re.escape(var_name) + r' = (?!=)')
					use_lines = []
					for j in range(i + 1, func_end):
						jline = lines[j]
						jstripped = jline.strip()

						if not jstripped:
							continue

						# Check if var_name is reassigned on this line
						is_reassigned = bool(reassign_pattern.search(jstripped))

						# Check if var_name is used on this line
						is_used = bool(var_pattern.search(jline))

						if is_reassigned:
							# If also used on the right side, count as use
							if is_used:
								parts = jstripped.split(var_name + ' = ', 1)
								if len(parts) > 1 and var_pattern.search(parts[1]):
									use_lines.append(j)
							break  # value is dead after reassignment

						if is_used:
							use_lines.append(j)

					if len(use_lines) != 1:
						continue

					use_line_idx = use_lines[0]

					# Check indentation: assignment must be at same or shallower level
					use_indent = len(lines[use_line_idx]) - len(lines[use_line_idx].lstrip())
					if assign_indent > use_indent:
						continue

					# Wrap value with type cast to preserve Push type distinction
					var_type = self._var_type(var_name)
					cast_value = self._wrap_with_cast(value, var_type)

					# Perform the inline substitution
					lines[use_line_idx] = var_pattern.sub(
						lambda m: cast_value, lines[use_line_idx])

					# Remove the assignment line
					lines[i] = None

					changed = True
					break  # restart from beginning

				if changed:
					break

		# Final cleanup: remove None lines
		lines = [l for l in lines if l is not None]

		return '\n'.join(lines)


	def _build_metadata_header(self):
		"""Build metadata header with info the compiler needs for round-trip."""
		script = self.phl.script
		lines = []

		# Import order with arg counts (original binary order, supports duplicates)
		import_parts = [f'{f.name}/{f.arg_count}' for f in script.gfunc.funcs]
		if import_parts:
			lines.append(f'// @IMPORTS: {",".join(import_parts)}')

		# String pool order (original binary order) with encoding prefix
		if script.pool.strings:
			# Use | as separator since strings may contain commas
			# Each entry: "E:string" where E is A (ASCII) or W (UTF-16LE)
			lines.append(f'// @STRINGS: {"|".join(f"{enc}:{s}" for enc, s in script.pool.strings)}')

		# Global variables with types and names
		if script.gvar.GlobalVarCount > 0:
			gvar_parts = []
			for gv in script.gvar.GvarTypes:
				type_str = var_type_name(gv.type)
				var_name = gv.str if gv.flag else ''
				gvar_parts.append(f'{gv.index}:{type_str}:{var_name}')
			lines.append(f'// @GLOBALS: {",".join(gvar_parts)}')

		# RunOp and RunTask (main function starting address and task in original binary)
		lines.append(f'// @RUN_OP: {hex(script.gtasks.RunOp)}')
		lines.append(f'// @RUN_TASK: {script.gtasks.RunTask}')

		# Task structure (task vars, params, events with their actual vars and Op addresses)
		for task in script.gtasks.tasks:
			task_types = [var_type_name(x) for x in task.VarTypes]
			task_types_str = ','.join(task_types) if task_types else ''
			lines.append(f'// @TASK_{task.index}: vars={task_types_str} params={task.ParmCount}')
			for ev in task.events:
				ev_types = [var_type_name(x) for x in ev.pVarTypes]
				ev_types_str = ','.join(ev_types) if ev_types else ''
				lines.append(f'// @EVENT_{ev.ulEventID}: op={hex(ev.ulOp)} vars={ev_types_str}')

		# Standalone events (not part of any task) — GlobEvents section
		if script.gevents.EventCount > 0:
			for ev in script.gevents.events:
				ev_types = [var_type_name(x) for x in ev.pVarTypes]
				ev_types_str = ','.join(ev_types) if ev_types else ''
				lines.append(f'// @STANDALONE_EVENT_{ev.ulEventID}: op={hex(ev.ulOp)} vars={ev_types_str}')

		# Dead code is now emitted via EMIT statements (computed in _compute_dead_code)
		# Keep @DEAD in header for backward compat only if no EMIT is used
		# (currently always using EMIT, so no @DEAD lines emitted)

		# PushEmpty annotation: list function addresses that start with PushV
		pe_addrs = self._find_pushempty_funcs()
		if pe_addrs:
			lines.append(f'// @PE: {",".join(hex(a) for a in pe_addrs)}')

		if lines:
			return '\n'.join(lines) + '\n\n'
		return ''

	def _find_pushempty_funcs(self):
		"""Return sorted list of function start addresses that need a function-level bare PushEmpty.
		A function-level PushEmpty is a bare PushV(0) at the function start whose scope spans
		the entire function body (not consumed by an adjacent Call).
		Detection: first instruction is bare PushV, and the immediately next instruction is
		neither Call nor TaskCall (which leads to Call)."""
		script = self.phl.script
		code = script.code.instr
		instr_by_addr = {}
		for inst in code:
			instr_by_addr[inst.index] = inst
		addr_list = [inst.index for inst in code]
		addr_to_idx = {a: i for i, a in enumerate(addr_list)}
		func_starts_sorted = sorted(set(self.phl.func_starts))
		pe_addrs = []
		for fstart in func_starts_sorted:
			inst = instr_by_addr.get(fstart)
			if not inst or inst.opcode.OpCode != 'PushV' or inst.opcode.VarCount != 0:
				continue
			idx = addr_to_idx.get(fstart)
			if idx is None or idx + 1 >= len(addr_list):
				continue
			next_op = instr_by_addr[addr_list[idx + 1]].opcode.OpCode
			# Call-related: next is Call (pattern A) or TaskCall (pattern: PE+TaskCall+Call)
			if next_op in ('Call', 'TaskCall'):
				continue
			# Otherwise: function-level PushEmpty
			pe_addrs.append(fstart)
		return pe_addrs

	def _find_pushi_defaults(self):
		"""Return sorted list of addresses where PushI pushes a default value (0, false, '', CVector(0,0,0)).
		These are distinct from PushV (PushEmpty) which allocates scope entries."""
		script = self.phl.script
		code = script.code.instr
		pi_addrs = []
		for inst in code:
			op = inst.opcode
			if op.OpCode == 'PushI':
				# Check if value is default for its type
				if hasattr(op, 'VarIn') and op.VarIn == 0:
					pi_addrs.append(inst.index)
			elif op.OpCode == 'PushS':
				# PushS with empty string
				if hasattr(op, 'VarIn') and op.VarIn == '':
					pi_addrs.append(inst.index)
			elif op.OpCode == 'PushVec':
				if hasattr(op, 'x') and op.x == 0 and op.y == 0 and op.z == 0:
					pi_addrs.append(inst.index)
		return sorted(pi_addrs)

	def _compute_dead_code(self):
		"""Find ALL dead instructions after terminators.
		Returns (inline_dead, trailing_dead) where:
		- inline_dead: trigger_addr -> [instr_str] for mid-function dead code
		- trailing_dead: func_start -> [instr_str] for boundary dead code"""
		script = self.phl.script
		code = script.code.instr
		func_starts = set(self.phl.func_starts)
		func_starts_sorted = sorted(func_starts)

		# Also collect all jump targets to know which addresses are reachable
		jump_targets = set()
		for inst in code:
			op = inst.opcode.OpCode
			if op in ('Jump', 'JumpB', 'JumpAbs'):
				if hasattr(inst.opcode, 'VarIn'):
					jump_targets.add(inst.opcode.VarIn)

		inline_dead = {}   # trigger_addr -> [instr_str]
		trailing_dead = {}  # func_start_addr -> [instr_str]
		i = 0
		while i < len(code):
			inst = code[i]
			op = inst.opcode.OpCode
			is_terminator = op in ('Return', 'Jump')
			if is_terminator:
				# Collect ALL unreachable instructions after this terminator
				# until we hit a function start, a jump target, or EOF
				dead_instrs = []
				j = i + 1
				is_boundary = False
				while j < len(code):
					next_inst = code[j]
					if next_inst.index in func_starts:
						is_boundary = True
						break
					if next_inst.index in jump_targets:
						break
					dead_instrs.append(str(next_inst.opcode))
					j += 1
				else:
					is_boundary = True  # EOF
				if dead_instrs:
					trigger_addr = inst.index
					if is_boundary:
						# Boundary dead code: attach to owning function
						owner_func = None
						for fs in func_starts_sorted:
							if fs <= trigger_addr:
								owner_func = fs
							else:
								break
						if owner_func is not None:
							if owner_func not in trailing_dead:
								trailing_dead[owner_func] = []
							trailing_dead[owner_func].extend(dead_instrs)
					else:
						# Mid-function dead code: attach to trigger instruction
						inline_dead[trigger_addr] = dead_instrs
				i = j
			else:
				i += 1
		return inline_dead, trailing_dead

	def __repr__(self):
		self.printed = ''

		# Emit metadata header for compiler round-trip
		self.printed += self._build_metadata_header()

		# Compute dead code: inline (mid-function) and trailing (boundary)
		inline_dead, trailing_dead = self._compute_dead_code()
		self._inline_dead = inline_dead  # Store for print_tree access

		for node in self.phl.get_ep_nodes():
			self.print_tree(node, [])
			for instr_str in trailing_dead.get(node.addr, []):
				escaped = instr_str.replace('"', '\\"')
				self.fake_print(f'EMIT "{escaped}";')
			self.fake_print('\n')

		for node in self.phl.get_func_nodes():
			self.print_tree(node, [])
			for instr_str in trailing_dead.get(node.addr, []):
				escaped = instr_str.replace('"', '\\"')
				self.fake_print(f'EMIT "{escaped}";')
			self.fake_print('\n')

		#self.printed = self.pass_WhileTrue(self.printed)
		self.printed = self.pass_StructureIfGoto(self.printed)
		self.printed = self.pass_FixLoopReturn(self.printed)
		self.printed = self.pass_InlineConstants(self.printed)
		return self.printed

	def fake_print(self, string):
		self.printed += string + '\n'

	def print_tree(self, node, seen=[], root_addr=None):

		if node.addr in	seen:
			return
		else:
			seen += [node.addr]

		# Skip nodes that are entry points of OTHER functions/entry points
		if root_addr is not None and node.addr != root_addr:
			if node.addr in self.all_ep_addrs or node.addr in self.all_func_addrs:
				return

		if root_addr is None:
			root_addr = node.addr

		for i in node.instructions:

			if hasattr(i, 'ident'):
				ident = i.ident
			else:
				ident = 0

			if ident: ident = 1
			ident_str = ident * '\t'

			if hasattr(i, 'hl'):

				# skip NOP
				if isinstance(i.hl, HLInstructionNop):
					continue

				self.fake_print(ident_str + str(i.hl))
			else:
				self.fake_print(ident_str + str(i))

		# Emit inline dead code after this node if applicable
		if hasattr(self, '_inline_dead'):
			last_addr = node.instructions[-1].index
			if last_addr in self._inline_dead:
				for instr_str in self._inline_dead[last_addr]:
					escaped = instr_str.replace('"', '\\"')
					self.fake_print(f'EMIT "{escaped}";')

		for i in node.children:
			self.print_tree(i, seen, root_addr)


	def get_func_args(self, top_node):
		Created = []
		Used = []

		for node, i in list(parse_graph(top_node, [])):

			if hasattr(node, 'Created'):
				Created += node.Created
				Used += node.Used

		# Used, but not created
		Args = list(set(Used) - set(Created))
		Args.sort(key=lambda x: x.index)
		return Args

	def get_actial_args(self, node, args, call_instr):
		stack = call_instr.opcode.stack_snapshot_before
		arg_count = len(args)
		if arg_count:
			return stack[-arg_count:]
		else:
			return []

	def callback_get_func_args(self, func_addr, call_instr):

		for node in self.phl.get_func_nodes():
			if node.addr == func_addr:
				args = self.get_func_args(node)
				args = self.get_actial_args(node, args, call_instr)
				args = list(map(str, args))
				args_str = ', '.join(args)
				return args_str

		return ''


	def separate_call(self, node):

		if node.addr in	self.separate_call_seen:
			return
		else:
			self.separate_call_seen += [node.addr]

		children = node.children[:]

		if node.call_next:
			call_addr = node.call_next[0]
			call_body = node.children[1]
			node.children.remove(call_body)
			self.call_dict[call_addr] = call_body

		for i in children:
			self.separate_call(i)


	def process_passes(self, node, seen=[]):

		if node.addr in	seen:
			return
		else:
			seen += [node.addr]

		# pass list
		self.pass_ReplaceSimple(node)
		self.pass_ReplaceEmpty(node)
		self.pass_RecordUsedVars(node)

		# process children
		for child in node.children:
			self.process_passes(child, seen)


	def pass_AfterAll(self, node, seen=[]):
		if node.addr in	seen:
			return
		else:
			seen += [node.addr]

		self.pass_RemoveNOP(node)

		# process children
		for child in node.children:
			self.process_passes(child, seen)


	def search_node(self, node, addr, seen=[]):

		if node.addr in	seen:
			return
		else:
			seen += [node.addr]

		if node.addr == addr:
			return node

		for child in node.children:
			result = self.search_node(child, addr, seen)

			if result:
				return result

	def insert_label(self, addr, top_node):
		node = self.search_node(top_node, addr, [])
		first_instr = node.instructions[0]

		if hasattr(first_instr, 'hl'):
			if isinstance(first_instr.hl, HLInstructionLabel):
				return

		label = FakeInstr(first_instr.index)
		label.hl = HLInstructionLabel(addr)
		node.instructions.insert(0, label)

	def pass_InsertLabels(self, top_node):
		if hasattr(self, 'insert_label_list'):
			for i in self.insert_label_list:
				self.insert_label(i, top_node)
			self.insert_label_list = []

	def get_last_node(self, top_node):
		last_node = top_node

		for node, i in list(parse_graph(top_node, [])):
			last_node = node

		return last_node

	def make_instr(self, hl, addr):
		temp = FakeInstr(addr)
		temp.hl = hl
		return temp

	def get_func_name(self, addr):
		if addr == self.phl.entry_main:
			return 'main'

		gtasks = self.phl.script.gtasks
		for i in gtasks.tasks:
			task_index = i.index
			for i2 in i.events:
				event_id = i2.ulEventID
				if addr == i2.ulOp:
					return f'task_{task_index}_event_{event_id}'

		gevents = self.phl.script.gevents
		for i in gevents.events:
			event_id = i.ulEventID
			if addr == i.ulOp:
				return f'event_{event_id}'

		return f'func_{addr}'


	def pass_AddIdents(self, top_node):
		for node, i in list(parse_graph(top_node, [])):
			if hasattr(i, 'ident'):
				i.ident += 1
			else:
				i.ident = 1

	def get_func_args_from_stack(self, node):

		# skip FakeInstr
		for i in node.instructions:
			if not hasattr(i.opcode, 'stack_snapshot_before'):
				continue

			stack_before = i.opcode.stack_snapshot_before
			task_args = list(map(str, stack_before))
			task_args_str = ', '.join(task_args)
			return task_args_str

	def pass_InsertPrologAndEpilog(self, node, is_call = False):

		func_addr = node.addr
		func_name = self.get_func_name(func_addr)

		# get real num
		if is_call:
			task_args = self.get_func_args(node)
			task_args = list(map(str, task_args))
			task_args_str = ', '.join(task_args)
		else:
			task_args_str = self.get_func_args_from_stack(node)

		prolog = self.make_instr(HLInstructionProlog(func_name, task_args_str), node.addr)
		node.instructions.insert(0, prolog)

		b_start = self.make_instr(HLInstructionBlockStart(), node.addr)
		node.instructions.insert(1, b_start)

		last_node = self.get_last_node(node)
		last_addr = last_node.instructions[-1].index
		b_end = self.make_instr(HLInstructionBlockEnd(), last_addr)
		last_node.instructions.append(b_end)

		#b_end = self.make_instr(HLInstructionBlockEnd(), 0)
		#end_node = FakeNode(0, [b_end])
		#node.children.append(end_node)

		pass


	def pass_ReplaceEmpty(self, node):
		for i in range(len(node.instructions)):
			instr = node.instructions[i]

			if hasattr(instr, 'hl'):
				if str(instr.hl) == '':
					node.instructions[i].hl = HLInstructionNop()

	def pass_RemoveNOP(self, node):

		del_index = []

		for i in range(len(node.instructions)):
			instr = node.instructions[i]

			if hasattr(instr, 'hl'):
				if isinstance(instr.hl, HLInstructionNop):
					del_index.append(i)

		for i in reversed(del_index):
			del (node.instructions[i])


	def pass_RecordUsedVars(self, node):
		node.Created = []
		node.Used = []

		for i in node.instructions:
			if hasattr(i, 'hl'):

				if hasattr(i.hl, 'Created'):
					node.Created += i.hl.Created

				if hasattr(i.hl, 'Used'):
					node.Used += i.hl.Used

		node.Created = list(set(node.Created))
		node.Used = list(set(node.Used))




	def pass_ReplaceSimple(self, node):

		for i in range(len(node.instructions)):
			instr = node.instructions[i]

			if isinstance(instr.opcode, CInstructionMov):
				node.instructions[i].hl = HLInstructionMov(instr)

			if isinstance(instr.opcode, CInstructionMovB):
				node.instructions[i].hl = HLInstructionMovB(instr)

			if isinstance(instr.opcode, CInstructionMovI):
				node.instructions[i].hl = HLInstructionMovI(instr)

			if isinstance(instr.opcode, CInstructionMovF):
				node.instructions[i].hl = HLInstructionMovF(instr)

			if isinstance(instr.opcode, CInstructionMovS):
				node.instructions[i].hl = HLInstructionMovS(instr)

			if isinstance(instr.opcode, CInstructionMovV):
				node.instructions[i].hl = HLInstructionMovV(instr)

			if isinstance(instr.opcode, CInstructionMovT):
				node.instructions[i].hl = HLInstructionMovT(instr)

			if isinstance(instr.opcode, CInstructionTMov):
				node.instructions[i].hl = HLInstructionTMov(instr)

			if isinstance(instr.opcode, CInstructionTMovB):
				node.instructions[i].hl = HLInstructionTMovB(instr)

			if isinstance(instr.opcode, CInstructionTMovI):
				node.instructions[i].hl = HLInstructionTMovI(instr)

			if isinstance(instr.opcode, CInstructionTMovF):
				node.instructions[i].hl = HLInstructionTMovF(instr)

			if isinstance(instr.opcode, CInstructionTMovS):
				node.instructions[i].hl = HLInstructionTMovS(instr)

			if isinstance(instr.opcode, CInstructionTMovV):
				node.instructions[i].hl = HLInstructionTMovV(instr)

			if isinstance(instr.opcode, CInstructionTMovT):
				node.instructions[i].hl = HLInstructionTMovT(instr)

			if isinstance(instr.opcode, CInstructionJump):
				node.instructions[i].hl = HLInstructionJump(instr)
				self.insert_label_list.append(instr.opcode.VarIn)

			if isinstance(instr.opcode, CInstructionJumpB):
				node.instructions[i].hl = HLInstructionJumpB(instr)
				self.insert_label_list.append(instr.opcode.VarIn)

			if isinstance(instr.opcode, CInstructionPush):
				node.instructions[i].hl = HLInstructionPush(instr)

			if isinstance(instr.opcode, CInstructionPushB):
				node.instructions[i].hl = HLInstructionPushB(instr)

			if isinstance(instr.opcode, CInstructionPushI):
				node.instructions[i].hl = HLInstructionPushI(instr)

			if isinstance(instr.opcode, CInstructionPushF):
				node.instructions[i].hl = HLInstructionPushF(instr)

			if isinstance(instr.opcode, CInstructionPushS):
				node.instructions[i].hl = HLInstructionPushS(instr)

			if isinstance(instr.opcode, CInstructionPushT):
				node.instructions[i].hl = HLInstructionPushT(instr)

			if isinstance(instr.opcode, CInstructionPushVec):
				node.instructions[i].hl = HLInstructionPushVec(instr)

			if isinstance(instr.opcode, CInstructionPushV):
				node.instructions[i].hl = HLInstructionPushV(instr)

			if isinstance(instr.opcode, CInstructionPushE):
				node.instructions[i].hl = HLInstructionPushE(instr)

			if isinstance(instr.opcode, CInstructionPushGE):
				node.instructions[i].hl = HLInstructionPushGE(instr)

			if isinstance(instr.opcode, CInstructionPop):
				node.instructions[i].hl = HLInstructionNop()

			if isinstance(instr.opcode, CInstructionPopE):
				node.instructions[i].hl = HLInstructionPopE(instr)

			if isinstance(instr.opcode, CInstructionPopGE):
				node.instructions[i].hl = HLInstructionPopGE(instr)

			if isinstance(instr.opcode, CInstructionSetNull):
				node.instructions[i].hl = HLInstructionSetNull(instr)

			if isinstance(instr.opcode, CInstructionSetNullT):
				node.instructions[i].hl = HLInstructionSetNullT(instr)

			if isinstance(instr.opcode, CInstructionAdd):
				node.instructions[i].hl = HLInstructionAdd(instr)

			if isinstance(instr.opcode, CInstructionSub):
				node.instructions[i].hl = HLInstructionSub(instr)

			if isinstance(instr.opcode, CInstructionMult):
				node.instructions[i].hl = HLInstructionMult(instr)

			if isinstance(instr.opcode, CInstructionDiv):
				node.instructions[i].hl = HLInstructionDiv(instr)

			if isinstance(instr.opcode, CInstructionMod):
				node.instructions[i].hl = HLInstructionMod(instr)

			if isinstance(instr.opcode, CInstructionAnd):
				node.instructions[i].hl = HLInstructionAnd(instr)

			if isinstance(instr.opcode, CInstructionOr):
				node.instructions[i].hl = HLInstructionOr(instr)

			if isinstance(instr.opcode, CInstructionXor):
				node.instructions[i].hl = HLInstructionXor(instr)

			if isinstance(instr.opcode, CInstructionEq):
				node.instructions[i].hl = HLInstructionEq(instr)

			if isinstance(instr.opcode, CInstructionNeq):
				node.instructions[i].hl = HLInstructionNeq(instr)

			if isinstance(instr.opcode, CInstructionLT):
				node.instructions[i].hl = HLInstructionLT(instr)

			if isinstance(instr.opcode, CInstructionGT):
				node.instructions[i].hl = HLInstructionGT(instr)

			if isinstance(instr.opcode, CInstructionLE):
				node.instructions[i].hl = HLInstructionLE(instr)

			if isinstance(instr.opcode, CInstructionGE):
				node.instructions[i].hl = HLInstructionGE(instr)

			if isinstance(instr.opcode, CInstructionNullEq):
				node.instructions[i].hl = HLInstructionNullEq(instr)

			if isinstance(instr.opcode, CInstructionNullNeq):
				node.instructions[i].hl = HLInstructionNullNeq(instr)

			if isinstance(instr.opcode, CInstructionNeg):
				node.instructions[i].hl = HLInstructionNeg(instr)

			if isinstance(instr.opcode, CInstructionNot):
				node.instructions[i].hl = HLInstructionNot(instr)

			if isinstance(instr.opcode, CInstructionAdd2):
				node.instructions[i].hl = HLInstructionAdd2(instr)

			if isinstance(instr.opcode, CInstructionSub2):
				node.instructions[i].hl = HLInstructionSub2(instr)

			if isinstance(instr.opcode, CInstructionMult2):
				node.instructions[i].hl = HLInstructionMult2(instr)

			if isinstance(instr.opcode, CInstructionDiv2):
				node.instructions[i].hl = HLInstructionDiv2(instr)

			if isinstance(instr.opcode, CInstructionMod2):
				node.instructions[i].hl = HLInstructionMod2(instr)

			if isinstance(instr.opcode, CInstructionAnd2):
				node.instructions[i].hl = HLInstructionAnd2(instr)

			if isinstance(instr.opcode, CInstructionOr2):
				node.instructions[i].hl = HLInstructionOr2(instr)

			if isinstance(instr.opcode, CInstructionXor2):
				node.instructions[i].hl = HLInstructionXor2(instr)

			if isinstance(instr.opcode, CInstructionEq2):
				node.instructions[i].hl = HLInstructionEq2(instr)

			if isinstance(instr.opcode, CInstructionNeq2):
				node.instructions[i].hl = HLInstructionNeq2(instr)

			if isinstance(instr.opcode, CInstructionLT2):
				node.instructions[i].hl = HLInstructionLT2(instr)

			if isinstance(instr.opcode, CInstructionGT2):
				node.instructions[i].hl = HLInstructionGT2(instr)

			if isinstance(instr.opcode, CInstructionLE2):
				node.instructions[i].hl = HLInstructionLE2(instr)

			if isinstance(instr.opcode, CInstructionGE2):
				node.instructions[i].hl = HLInstructionGE2(instr)

			if isinstance(instr.opcode, CInstructionNullEq2):
				node.instructions[i].hl = HLInstructionNullEq2(instr)

			if isinstance(instr.opcode, CInstructionNullNeq2):
				node.instructions[i].hl = HLInstructionNullNeq2(instr)

			if isinstance(instr.opcode, CInstructionNeg2):
				node.instructions[i].hl = HLInstructionNeg2(instr)

			if isinstance(instr.opcode, CInstructionNot2):
				node.instructions[i].hl = HLInstructionNot2(instr)

			if isinstance(instr.opcode, CInstructionSqrt):
				node.instructions[i].hl = HLInstructionSqrt(instr)

			if isinstance(instr.opcode, CInstructionSqrt2):
				node.instructions[i].hl = HLInstructionSqrt2(instr)

			if isinstance(instr.opcode, CInstructionSin):
				node.instructions[i].hl = HLInstructionSin(instr)

			if isinstance(instr.opcode, CInstructionSin2):
				node.instructions[i].hl = HLInstructionSin2(instr)

			if isinstance(instr.opcode, CInstructionCos):
				node.instructions[i].hl = HLInstructionCos(instr)

			if isinstance(instr.opcode, CInstructionCos2):
				node.instructions[i].hl = HLInstructionCos2(instr)

			if isinstance(instr.opcode, CInstructionASin):
				node.instructions[i].hl = HLInstructionASin(instr)

			if isinstance(instr.opcode, CInstructionASin2):
				node.instructions[i].hl = HLInstructionASin2(instr)

			if isinstance(instr.opcode, CInstructionPow):
				node.instructions[i].hl = HLInstructionPow(instr)

			if isinstance(instr.opcode, CInstructionPow2):
				node.instructions[i].hl = HLInstructionPow2(instr)

			if isinstance(instr.opcode, CInstructionCall):
				node.instructions[i].hl = HLInstructionCall(instr, self.callback_get_func_args)

			if isinstance(instr.opcode, CInstructionReturn):
				node.instructions[i].hl = HLInstructionReturn(instr)

			if isinstance(instr.opcode, CInstructionTaskCall):
				node.instructions[i].hl = HLInstructionTaskCall(instr)

			if isinstance(instr.opcode, CInstructionTaskReturn):
				node.instructions[i].hl = HLInstructionTaskReturn(instr)

			if isinstance(instr.opcode, CInstructionFunc):
				node.instructions[i].hl = HLInstructionFunc(instr)

			if isinstance(instr.opcode, CInstructionObjFunc):
				node.instructions[i].hl = HLInstructionObjFunc(instr)

			if isinstance(instr.opcode, CInstructionTObjFunc):
				node.instructions[i].hl = HLInstructionTObjFunc(instr)

			if isinstance(instr.opcode, CInstructionEventEnable):
				node.instructions[i].hl = HLInstructionEventEnable(instr)

			if isinstance(instr.opcode, CInstructionEventDisable):
				node.instructions[i].hl = HLInstructionEventDisable(instr)

			if isinstance(instr.opcode, CInstructionFuncExist):
				node.instructions[i].hl = HLInstructionFuncExist(instr)

			if isinstance(instr.opcode, CInstructionFuncExist2):
				node.instructions[i].hl = HLInstructionFuncExist2(instr)

			if isinstance(instr.opcode, CInstructionCString2):
				node.instructions[i].hl = HLInstruction_NEW_1(instr)

			if isinstance(instr.opcode, CInstruction_NEW_2):
				node.instructions[i].hl = HLInstruction_NEW_2(instr, self.callback_get_func_args)

