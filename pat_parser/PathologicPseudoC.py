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
		return f'{self.VarOut} = {self.bVal};'

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
		# bool VAR_1 = 1; ?
		return f'{self.VarOut} = {self.VarIn};'

class HLInstructionPushI:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[-1]
		self.VarIn = opcode.VarIn
		self.Created = [self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.VarIn};'

class HLInstructionPushF:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[-1]
		self.VarIn = opcode.VarIn
		self.Created = [self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = {self.VarIn};'

class HLInstructionPushS:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarOut = stack[-1]
		self.String = opcode.String
		self.Created = [self.VarOut]

	def __repr__(self):
		return f'{self.VarOut} = "{self.String}";'

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
		return f'{self.VarOut} = {str(self.CVector)};'

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
		return f'{self.VarOut} = {self.Var_1} / {self.Var_2};'

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
		return f'{self.VarOut} = {self.Var} == 0;'

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
		return f'{self.VarOut} = {self.Var} != 0;'

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
		return f'{self.VarOut} = {self.Var1} == 0;'


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
			self.Var2 = stack_before[opcode.Var1] # + StackPtr
		else:
			self.Var2 = stack_before[-opcode.Var1]

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
		return f'{self.VarOut} = {self.Var1} == 0;'

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
		return f'{self.VarOut} = pow({self.Var1});'


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
		# FUNC_VAR have unknown Task bool
		self.args = []
		self.Used = []

		for i in opcode.fvar:
			arg = stack[-i.Var]
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

		self.args = []
		self.Used = []

		for i in opcode.fvar:
			arg = stack[-i.Var]
			self.args.append(str(arg))
			self.Used.append(arg)
		self.args_str = ', '.join(self.args)

	def __repr__(self):
		return f'{self.func_name}({self.args_str});'


class HLInstructionTObjFunc:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.func_name = opcode.func_name

		self.args = []
		self.Used = []

		for i in opcode.fvar:
			arg = stack[-i.Var]
			self.args.append(str(arg))
			self.Used.append(arg)
		self.args_str = ', '.join(self.args)

	def __repr__(self):
		return f'{self.func_name}({self.args_str});'


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


	def __repr__(self):
		self.printed = ''

		for node in self.phl.get_ep_nodes():
			self.print_tree(node, [])
			self.fake_print('\n')

		for node in self.phl.get_func_nodes():
			self.print_tree(node, [])
			self.fake_print('\n')

		return self.printed

	def fake_print(self, string):
		self.printed += string + '\n'

	def print_tree(self, node, seen=[]):

		if node.addr in	seen:
			return
		else:
			seen += [node.addr]

		for i in node.instructions:

			if hasattr(i, 'ident'):
				ident = i.ident
			else:
				ident = 0

			if ident: ident = 1
			ident_str = ident * '\t'

			cmt_addr = ''

			if hasattr(i.opcode, 'OpCode'):
				op_code = i.opcode.OpCode
				cmt_addr = f' // {hex(i.index)} {op_code}'

			if hasattr(i, 'hl'):

				# skip NOP
				if isinstance(i.hl, HLInstructionNop):
					continue

				self.fake_print(ident_str + str(i.hl) + cmt_addr)
			else:
				self.fake_print(ident_str + str(i) + cmt_addr)

		for i in node.children:
			self.print_tree(i, seen)


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

			if isinstance(instr.opcode, CInstructionMovS):
				node.instructions[i].hl = HLInstructionMovS(instr)

			if isinstance(instr.opcode, CInstructionMovS):
				node.instructions[i].hl = HLInstructionMovS(instr)

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

			if isinstance(instr.opcode, CInstruction_NEW_1):
				node.instructions[i].hl = HLInstruction_NEW_1(instr)

			if isinstance(instr.opcode, CInstruction_NEW_2):
				node.instructions[i].hl = HLInstruction_NEW_2(instr, self.callback_get_func_args)

