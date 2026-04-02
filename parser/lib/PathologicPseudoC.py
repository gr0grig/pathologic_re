import re
import struct
from PathologicScript import *
from PathologicHL import *


def fmt_float32(val):
	"""Format a float as the shortest decimal that round-trips through 32-bit float."""
	f32 = struct.unpack('f', struct.pack('f', val))[0]
	for prec in range(1, 20):
		s = f'{f32:.{prec}f}'.rstrip('0').rstrip('.')
		if '.' not in s:
			s += '.0'
		reparsed = struct.unpack('f', struct.pack('f', float(s)))[0]
		if reparsed == f32:
			return s
	return str(f32)


# Event ID → Name map (from std.sci)
EVENT_NAMES = {
	0: 'OnUse', 1: 'OnSee', 2: 'OnStopSee', 3: 'OnHear', 4: 'OnStopHear',
	5: 'OnLoad', 6: 'OnUnload', 7: 'OnTimer', 8: 'OnRegionChange',
	9: 'OnGameTime', 10: 'OnCollision', 12: 'OnMusicChange',
	13: 'OnPlayerStartShooting', 14: 'OnPlayerStopShooting',
	15: 'OnPlayerHolsterWeapon', 16: 'OnPropertyChange', 17: 'OnAttacked',
	18: 'OnAction', 19: 'OnPlayerLand', 20: 'OnPlayerStartWalking',
	21: 'OnPlayerStopWalking', 22: 'OnHit', 23: 'OnIntersection',
	24: 'OnKeyDown', 25: 'OnKeyUp', 26: 'OnTrigger', 27: 'OnStopIntersection',
	28: 'OnActorStuck', 30: 'OnPlayerDamage', 31: 'OnReputationChange',
	32: 'OnDispose', 33: 'OnInventoryAddItem', 34: 'OnInventoryRemoveItem',
	35: 'OnInventorySelChange', 36: 'OnPlayerStartAltShooting',
	37: 'OnPlayerStopAltShooting', 38: 'OnClearPath', 39: 'OnFallDamage',
	40: 'OnSteal', 41: 'OnDeath', 42: 'OnMessage', 43: 'OnHit2',
	44: 'OnPlayerEnemy', 45: 'OnLSHAnimationEnd', 1000: 'OnConsole',
}
EVENT_IDS = {v: k for k, v in EVENT_NAMES.items()}

# Heuristic event parameter names (from original sources)
# Maps event_id → list of (type, name) for each parameter
EVENT_PARAM_NAMES = {
	0:  [('object', 'actor')],                                    # OnUse
	1:  [('object', 'actor')],                                    # OnSee
	2:  [('object', 'actor')],                                    # OnStopSee
	3:  [('object', 'actor')],                                    # OnHear
	4:  [('object', 'actor')],                                    # OnStopHear
	7:  [('int', 'iID'), ('float', 'fTime')],                     # OnTimer
	9:  [('int', 'iID'), ('float', 'fTime')],                     # OnGameTime
	10: [('object', 'actor')],                                    # OnCollision
	16: [('string', 'strProp')],                                  # OnPropertyChange
	17: [('object', 'actor'), ('int', 'iDamageType'), ('float', 'fDamage')],  # OnAttacked
	22: [('object', 'actor'), ('int', 'iHitType'), ('float', 'fDamage')],     # OnHit
	23: [('object', 'actor')],                                    # OnIntersection
	24: [('int', 'iKey')],                                        # OnKeyDown
	25: [('int', 'iKey')],                                        # OnKeyUp
	26: [('string', 'name')],                                     # OnTrigger
	27: [('object', 'actor')],                                    # OnStopIntersection
	30: [('object', 'actor'), ('int', 'iDamageType'), ('float', 'fDamage')],  # OnPlayerDamage
	31: [('string', 'name'), ('float', 'fValue')],                # OnReputationChange
	38: [('object', 'actor')],                                    # OnClearPath
	39: [('float', 'fDamage')],                                   # OnFallDamage
	40: [('object', 'actor')],                                    # OnSteal
	41: [('object', 'actor')],                                    # OnDeath
	42: [('string', 'name'), ('int', 'iParam')],                  # OnMessage
	43: [('object', 'actor'), ('int', 'iHitType'), ('float', 'fDamage')],     # OnHit2
	45: [('bool', 'bCycled')],                                    # OnLSHAnimationEnd
}


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

	def __init__(self, name, args, event_id=None):
		self.name = name
		self.args = args
		self.event_id = event_id
		# Build rename map from event heuristics
		self.rename_map = {}
		if event_id is not None and event_id in EVENT_PARAM_NAMES:
			heuristic = EVENT_PARAM_NAMES[event_id]
			if args:
				params = [a.strip() for a in args.split(', ') if a.strip()]
				for idx, param in enumerate(params):
					if idx < len(heuristic):
						expected_type, heur_name = heuristic[idx]
						# Only rename if types match
						m = re.match(r'var_\d+_(\w+)', param)
						if m and m.group(1) == expected_type:
							self.rename_map[param] = heur_name

	def __repr__(self):
		# Add type annotations to parameters
		if self.args:
			typed_args = []
			for arg in self.args.split(', '):
				arg = arg.strip()
				if not arg:
					continue
				# Check if this param has a heuristic name
				if arg in self.rename_map:
					m = re.match(r'var_\d+_(\w+)', arg)
					type_name = m.group(1) if m else 'object'
					typed_args.append(f'{type_name} {self.rename_map[arg]}')
				else:
					# Extract type from var_N_type naming
					m = re.match(r'var_\d+_(\w+)', arg)
					if m:
						typed_args.append(f'{m.group(1)} {arg}')
					else:
						typed_args.append(arg)
			args_str = ', '.join(typed_args)
		else:
			args_str = 'void'
		return f'void {self.name}({args_str})'

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
		return f'{self.VarOut} = {"true" if self.bVal else "false"};'

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
		return f'{self.VarOut} = {fmt_float32(self.fVal)};'

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
		v = self.CVector
		return f'{self.VarOut} = [{fmt_float32(v.x)}, {fmt_float32(v.y)}, {fmt_float32(v.z)}];'

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
		return f'{self.VarOut} = {fmt_float32(self.fVal)};'

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
		v = self.CVector
		return f'{self.VarOut} = [{fmt_float32(v.x)}, {fmt_float32(v.y)}, {fmt_float32(v.z)}];'

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
		return f'{self.VarOut} = {"true" if self.VarIn else "false"};{suffix}'

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
		return f'{self.VarOut} = {fmt_float32(self.VarIn)};{suffix}'

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
		v = self.CVector
		suffix = ' //@pi' if v.x == 0 and v.y == 0 and v.z == 0 else ''
		return f'{self.VarOut} = [{fmt_float32(v.x)}, {fmt_float32(v.y)}, {fmt_float32(v.z)}];{suffix}'

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

			var_str = f'{type} {var};'
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
		return f'{self.VarIn} = null;'

class HLInstructionSetNullT:

	def __init__(self, instr):
		opcode = instr.opcode
		stack = opcode.stack_snapshot_after
		self.VarIn = stack[opcode.VarIn] # + StackPointer
		self.Used = [self.VarIn]

	def __repr__(self):
		return f'{self.VarIn} = null;'


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
		return f'{self.VarOut} = {self.Var} == null; //@ne'

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
		return f'{self.VarOut} = {self.Var} != null; //@nn'

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
		return f'{self.VarOut} = !{self.Var1}; //@nz'


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
		return f'{self.VarOut} = {self.Var1} == null; //@ne'

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
		return f'@{self.func_name}({self.args_str});'


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
		return f'{self.obj_var}->{self.func_name}({self.args_str});'


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
		return f'{self.obj_var}->{self.func_name}({self.args_str}); //@t'


class HLInstructionEventEnable:

	def __init__(self, instr):
		opcode = instr.opcode
		self.VarIn = opcode.VarIn

	def __repr__(self):
		name = EVENT_NAMES.get(self.VarIn, f'event_{self.VarIn}')
		return f'enable {name};'

class HLInstructionEventDisable:

	def __init__(self, instr):
		opcode = instr.opcode
		self.VarIn = opcode.VarIn

	def __repr__(self):
		name = EVENT_NAMES.get(self.VarIn, f'event_{self.VarIn}')
		return f'disable {name};'

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
					new_lines.append(f'{indent}for(;;) {{')
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

	@staticmethod
	def _negate_condition(cond):
		"""Negate a boolean condition for if-goto → if-else inversion."""
		cond = cond.strip()
		# !(expr) → expr
		if cond.startswith('!('):
			depth = 0
			for i in range(1, len(cond)):
				if cond[i] == '(': depth += 1
				elif cond[i] == ')': depth -= 1
				if depth == 0:
					if i == len(cond) - 1:
						return cond[2:-1]
					break
		# !var → var
		if cond.startswith('!'):
			return cond[1:]
		# Find rightmost top-level comparison operator
		NEG = {'==': '!=', '!=': '==', '<': '>=', '>': '<=',
		       '<=': '>', '>=': '<'}
		depth = 0
		best_pos = -1
		best_op = None
		i = 0
		while i < len(cond):
			ch = cond[i]
			if ch == '(': depth += 1
			elif ch == ')': depth -= 1
			elif depth == 0:
				if i + 1 < len(cond) and cond[i:i+2] in NEG:
					best_pos = i
					best_op = cond[i:i+2]
					i += 2
					continue
				if ch in ('<', '>') and (i + 1 >= len(cond) or cond[i+1] != '='):
					best_pos = i
					best_op = ch
			i += 1
		if best_pos >= 0:
			lhs = cond[:best_pos].rstrip()
			rhs = cond[best_pos + len(best_op):].lstrip()
			return f'{lhs} {NEG[best_op]} {rhs}'
		# Fallback
		return f'!({cond})'

	def pass_StructureIfGoto(self, text):
		RE_IF_GOTO = re.compile(r'^(\s*)if\((.+?)\) goto (Label_\w+);')
		RE_LABEL = re.compile(r'^(\s*)(Label_\w+):')
		RE_GOTO = re.compile(r'^(\s*)goto (Label_\w+);')

		lines = text.split('\n')
		changed = True

		while changed:
			changed = False

			# Build indexes
			label_pos = {}       # label_name -> line_index
			label_refs = {}      # label_name -> count of goto/if-goto refs
			if_gotos = []        # (line_index, indent, cond, target_label)

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
					lbl = m_if.group(3)
					label_refs[lbl] = label_refs.get(lbl, 0) + 1
					if_gotos.append((i, m_if.group(1), m_if.group(2), lbl))

			# Process if-gotos bottom-to-top
			for if_line, indent, cond, target_label in reversed(if_gotos):
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
						# Convert to simple if with negated condition as body.
						neg_cond = self._negate_condition(cond)
						new_lines = []
						new_lines.append(f'{indent}if({neg_cond}) {{')
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

					# Invert condition for if-else
					neg_cond = self._negate_condition(cond)

					# Build new lines
					new_lines = []
					# if header
					new_lines.append(f'{indent}if({neg_cond}) {{')

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

					neg_cond = self._negate_condition(cond)

					new_lines = []
					new_lines.append(f'{indent}if({neg_cond}) {{')

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

	def pass_SimplifyAlwaysTrue(self, text):
		"""Convert always-true conditional gotos to unconditional gotos.
		if(!false) goto Label; → goto Label;
		if(false == 0) goto Label; → goto Label;
		Also remove always-false gotos: if(false) goto Label; → (remove)"""
		lines = text.split('\n')
		result = []
		for line in lines:
			stripped = line.strip()
			# Always-true: if(!false) goto Label; or if(false == 0) goto Label;
			m = re.match(r'^(\s*)if\(!false\) goto (Label_\w+);(.*)', stripped)
			if not m:
				m2 = re.match(r'^(\s*)if\(false == 0\) goto (Label_\w+);(.*)', stripped)
				if m2:
					m = m2
			if m:
				indent = re.match(r'^(\s*)', line).group(1)
				result.append(f'{indent}goto {m.group(2)};{m.group(3)}')
				continue
			# Always-false: if(false) goto Label; → skip
			if re.match(r'^if\(false\) goto Label_\w+;', stripped):
				continue
			result.append(line)
		return '\n'.join(result)

	def pass_LoopBreak(self, text):
		"""Convert if-goto at top of for(;;) to break when target is after loop.

		Detects:
		  for(;;) {
		      if(COND) goto Label_N;
		      ... body ...
		  }
		  Label_N:

		Converts to:
		  for(;;) {
		      if(COND) break;
		      ... body ...
		  }
		"""
		RE_FOR = re.compile(r'^(\s*)for\(;;\) \{')
		RE_IF_GOTO = re.compile(r'^(\s*)if\((.+?)\) goto (Label_\w+);')
		RE_LABEL = re.compile(r'^(\s*)(Label_\w+):')

		lines = text.split('\n')
		changed = True

		while changed:
			changed = False

			# Build label ref counts
			label_refs = {}
			for line in lines:
				for m in re.finditer(r'goto (Label_\w+)', line):
					lbl = m.group(1)
					label_refs[lbl] = label_refs.get(lbl, 0) + 1

			for i, line in enumerate(lines):
				m_for = RE_FOR.match(line)
				if not m_for:
					continue
				indent = m_for.group(1)

				# Find first non-empty line inside loop
				j = i + 1
				while j < len(lines) and not lines[j].strip():
					j += 1
				if j >= len(lines):
					continue
				m_ig = RE_IF_GOTO.match(lines[j])
				if not m_ig:
					continue
				ig_indent = m_ig.group(1)
				cond = m_ig.group(2)
				target = m_ig.group(3)

				# Find closing brace of for loop
				depth = 1
				k = i + 1
				while k < len(lines) and depth > 0:
					for ch in lines[k]:
						if ch == '{': depth += 1
						elif ch == '}': depth -= 1
					if depth == 0:
						break
					k += 1
				if depth != 0:
					continue

				# Check if target label is right after closing brace
				after = k + 1
				while after < len(lines) and not lines[after].strip():
					after += 1
				if after >= len(lines):
					continue
				m_lbl = RE_LABEL.match(lines[after])
				if not m_lbl or m_lbl.group(2) != target:
					continue

				# Convert: replace if-goto with break (same condition)
				lines[j] = f'{ig_indent}if({cond}) break;'

				# Remove label if no longer referenced
				refs = label_refs.get(target, 0) - 1
				if refs <= 0:
					lines[after] = None

				changed = True
				break

			lines = [l for l in lines if l is not None]

		return '\n'.join(lines)

	def pass_ForToWhile(self, text):
		"""Convert for(;;) { if(COND) break; ... } to while(!COND) { ... }

		Only converts when the break is the first statement in the loop body.
		"""
		RE_FOR = re.compile(r'^(\s*)for\(;;\) \{')
		RE_IF_BREAK = re.compile(r'^(\s*)if\((.+?)\) break;')

		lines = text.split('\n')
		changed = True

		while changed:
			changed = False
			for i, line in enumerate(lines):
				m_for = RE_FOR.match(line)
				if not m_for:
					continue
				indent = m_for.group(1)
				# Find first non-empty line
				j = i + 1
				while j < len(lines) and not lines[j].strip():
					j += 1
				if j >= len(lines):
					continue
				m_brk = RE_IF_BREAK.match(lines[j])
				if not m_brk:
					continue
				cond = m_brk.group(2)
				neg_cond = self._negate_condition(cond)
				# Replace for(;;) with while(neg_cond) and remove the break line
				lines[i] = f'{indent}while({neg_cond}) {{'
				lines[j] = None
				changed = True
				break
			lines = [l for l in lines if l is not None]

		return '\n'.join(lines)

	def pass_RemoveEmptyForLoops(self, text):
		"""Remove empty for(;;) {} loops that are truly dead code.

		Only removes empty for(;;) loops whose preceding label (if any) is NOT
		referenced by any goto in the code. Loops at goto targets are shared
		return points and must be preserved for correct round-trip.
		"""
		RE_FOR = re.compile(r'^(\s*)for\(;;\) \{')
		RE_CLOSE = re.compile(r'^(\s*)\}')
		RE_LABEL = re.compile(r'^(\s*)Label_(\d+):')

		lines = text.split('\n')

		# Collect all goto targets
		goto_targets = set()
		for line in lines:
			m = re.search(r'goto Label_(\d+);', line)
			if m:
				goto_targets.add(m.group(1))

		changed = True
		while changed:
			changed = False
			i = 0
			while i < len(lines):
				m_for = RE_FOR.match(lines[i])
				if not m_for:
					i += 1
					continue
				indent = m_for.group(1)
				# Check if the loop body is empty (only blank lines before closing brace)
				j = i + 1
				while j < len(lines) and not lines[j].strip():
					j += 1
				if j < len(lines):
					m_close = RE_CLOSE.match(lines[j])
					if m_close and len(m_close.group(1)) <= len(indent):
						# Check if preceding line is a label that is a goto target
						prev = i - 1
						while prev >= 0 and not lines[prev].strip():
							prev -= 1
						if prev >= 0:
							m_label = RE_LABEL.match(lines[prev])
							if m_label and m_label.group(2) in goto_targets:
								# This loop is a goto target — keep it
								i += 1
								continue
						# Safe to remove
						for k in range(i, j + 1):
							lines[k] = None
						changed = True
						i = j + 1
						continue
				i += 1
			lines = [l for l in lines if l is not None]

		return '\n'.join(lines)

	def pass_RemoveUnusedLabels(self, text):
		"""Remove labels that are not referenced by any goto or if-goto."""
		RE_LABEL = re.compile(r'^(\s*)(Label_\w+):')
		RE_GOTO = re.compile(r'goto (Label_\w+)')
		lines = text.split('\n')

		# Count references to each label
		label_refs = {}
		for line in lines:
			for m in RE_GOTO.finditer(line):
				lbl = m.group(1)
				label_refs[lbl] = label_refs.get(lbl, 0) + 1

		# Remove unreferenced labels
		result = []
		for line in lines:
			m = RE_LABEL.match(line)
			if m and label_refs.get(m.group(2), 0) == 0:
				continue  # Skip unreferenced label
			result.append(line)

		return '\n'.join(result)

	def pass_ElseToElseIf(self, text):
		"""Convert else { if(!(COND)) goto LABEL; BODY; } to else if(COND) { BODY; }.

		Detects:
		  } else {
		      if(!(COND)) goto LABEL;
		      BODY;
		  }
		  LABEL:

		Converts to:
		  } else if(COND) {
		      BODY;
		  }
		  LABEL:
		"""
		RE_ELSE_OPEN = re.compile(r'^(\s*)\} else \{$')
		RE_IF_GOTO = re.compile(r'^(\s*)if\((.+?)\) goto (Label_\w+);')
		RE_CLOSE = re.compile(r'^(\s*)\}$')
		RE_LABEL = re.compile(r'^(\s*)(Label_\w+):')

		lines = text.split('\n')
		changed = True

		while changed:
			changed = False
			for i in range(len(lines)):
				m_else = RE_ELSE_OPEN.match(lines[i])
				if not m_else:
					continue
				indent = m_else.group(1)

				# Next non-empty line should be if-goto
				j = i + 1
				while j < len(lines) and not lines[j].strip():
					j += 1
				if j >= len(lines):
					continue

				m_ig = RE_IF_GOTO.match(lines[j])
				if not m_ig:
					continue

				goto_label = m_ig.group(3)
				cond = m_ig.group(2)
				ig_line = j

				# Find the closing brace of the else block
				# Track depth from the else open brace
				depth = 1
				k = i + 1
				close_line = None
				while k < len(lines):
					for ch in lines[k]:
						if ch == '{':
							depth += 1
						elif ch == '}':
							depth -= 1
					if depth == 0:
						close_line = k
						break
					k += 1

				if close_line is None:
					continue

				# Check that there are no other gotos in the body
				body_has_other_goto = False
				for bi in range(ig_line + 1, close_line):
					if re.match(r'^\s*goto ', lines[bi]):
						body_has_other_goto = True
						break
					if re.match(r'^\s*if\(.+\) goto ', lines[bi]):
						body_has_other_goto = True
						break
				if body_has_other_goto:
					continue

				# Convert: negate the condition and merge into else if
				neg_cond = self._negate_condition(cond)
				lines[i] = f'{indent}}} else if({neg_cond}) {{'

				# Remove the if-goto line
				lines[ig_line] = None

				# Re-indent body lines to match else level
				# (they may have extra indentation from being inside the else)

				lines = [l for l in lines if l is not None]
				changed = True
				break

		return '\n'.join(lines)

	def pass_IfElseChain(self, text):
		"""Convert consecutive if-goto-exit blocks into if/else-if chains.

		Detects sequences of:
		  if(COND1) {
		      BODY1;
		      goto EXIT;
		  }
		  if(COND2) {
		      BODY2;
		      goto EXIT;
		  }
		  ...
		  EXIT:

		And converts to:
		  if(COND1) {
		      BODY1;
		  } else if(COND2) {
		      BODY2;
		  } ...

		Also handles the last-case patterns:
		  if(!(COND)) goto EXIT;
		  BODY;                   → } else if(COND) { BODY; }
		"""
		RE_IF_OPEN = re.compile(r'^(\s*)if\((.+)\) \{')
		RE_GOTO = re.compile(r'^(\s*)goto (Label_\w+);')
		RE_CLOSE = re.compile(r'^(\s*)\}$')
		RE_LABEL = re.compile(r'^(\s*)(Label_\w+):')
		RE_IF_GOTO = re.compile(r'^(\s*)if\((.+?)\) goto (Label_\w+);')

		lines = text.split('\n')
		changed = True

		while changed:
			changed = False

			# Build label reference counts (each goto/if-goto counts once)
			label_refs = {}
			for line in lines:
				# Count each line once: if-goto or standalone goto
				m_ig = RE_IF_GOTO.match(line)
				if m_ig:
					lbl = m_ig.group(3)
					label_refs[lbl] = label_refs.get(lbl, 0) + 1
				else:
					m_g = RE_GOTO.match(line)
					if m_g:
						lbl = m_g.group(2)
						label_refs[lbl] = label_refs.get(lbl, 0) + 1

			# Build label positions
			label_pos = {}
			for i, line in enumerate(lines):
				m = RE_LABEL.match(line)
				if m:
					label_pos[m.group(2)] = i

			# Scan for chains of if-blocks that goto the same exit
			i = 0
			while i < len(lines):
				m_if = RE_IF_OPEN.match(lines[i])
				if not m_if:
					i += 1
					continue

				base_indent = m_if.group(1)

				# Try to find an if-block: if(COND) { BODY; goto EXIT; }
				block = self._parse_if_goto_block(lines, i, base_indent)
				if not block:
					i += 1
					continue

				# Found first block. Now collect consecutive blocks with same exit.
				chain = [block]
				exit_label = block['goto_target']
				pos = block['end'] + 1

				while pos < len(lines):
					# Skip blank lines between blocks
					while pos < len(lines) and not lines[pos].strip():
						pos += 1
					if pos >= len(lines):
						break

					# Try another if-block with same exit
					next_block = self._parse_if_goto_block(lines, pos, base_indent)
					if next_block and next_block['goto_target'] == exit_label:
						chain.append(next_block)
						pos = next_block['end'] + 1
						continue

					# Try last-case: if(!(COND)) goto EXIT; BODY...
					m_last = RE_IF_GOTO.match(lines[pos])
					if m_last and m_last.group(3) == exit_label:
						last_cond = m_last.group(2)
						# Body: from pos+1 until end of scope
						body_end_pos = pos + 1
						while body_end_pos < len(lines):
							ln = lines[body_end_pos]
							stripped = ln.strip()
							if not stripped:
								body_end_pos += 1
								continue
							if RE_LABEL.match(ln):
								break
							m_cl = RE_CLOSE.match(ln)
							if m_cl and len(m_cl.group(1)) <= len(base_indent):
								break
							body_end_pos += 1
						body_lines = [lines[j] for j in range(pos + 1, body_end_pos)
						              if lines[j].strip()]
						if body_lines:
							chain.append({
								'start': pos,
								'end': body_end_pos - 1,
								'cond': self._negate_condition(last_cond),
								'body_start': pos + 1,
								'body_end': body_end_pos,
								'goto_target': exit_label,
								'is_negated_goto': True,
							})
						break

					break

				# Need at least 2 blocks to form a chain
				if len(chain) < 2:
					i += 1
					continue

				# Check that exit label exists
				if exit_label not in label_pos:
					i += 1
					continue

				# Build the if/else-if chain
				new_lines = []
				for ci, blk in enumerate(chain):
					if ci == 0:
						# First: if(COND) {
						new_lines.append(f'{base_indent}if({blk["cond"]}) {{')
					else:
						# Subsequent: } else if(COND) {
						new_lines.append(f'{base_indent}}} else if({blk["cond"]}) {{')

					# Body (without the goto line)
					if blk.get('is_negated_goto'):
						for j in range(blk['body_start'], blk['body_end']):
							line = lines[j]
							if line.strip():
								# Re-indent: keep relative indent
								stripped = line.lstrip()
								new_lines.append(base_indent + '\t' + stripped)
							else:
								new_lines.append('')
					else:
						for j in range(blk['start'] + 1, blk['end']):
							line = lines[j]
							stripped = line.strip()
							if not stripped:
								new_lines.append('')
								continue
							# Skip the goto EXIT; line
							m_g = RE_GOTO.match(line)
							if m_g and m_g.group(2) == exit_label:
								continue
							new_lines.append(line)

				# Close the chain
				new_lines.append(f'{base_indent}}}')

				# Determine replacement range
				chain_start = chain[0]['start']
				chain_end = chain[-1]['end']
				if chain[-1].get('is_negated_goto'):
					chain_end = chain[-1]['body_end'] - 1

				# Check if exit label still has references after removing chain gotos
				gotos_removed = sum(1 for b in chain if not b.get('is_negated_goto'))
				negated_gotos_removed = sum(1 for b in chain if b.get('is_negated_goto'))
				total_removed = gotos_removed + negated_gotos_removed
				remaining_refs = label_refs.get(exit_label, 0) - total_removed

				exit_pos = label_pos.get(exit_label)

				if remaining_refs <= 0 and exit_pos is not None:
					if exit_pos > chain_end:
						# Forward exit: extend replacement to include exit label
						if exit_pos == chain_end + 1 or all(
							not lines[j].strip() for j in range(chain_end + 1, exit_pos)):
							chain_end = exit_pos
					else:
						# Backward exit: remove exit label line separately
						lines[exit_pos] = ''

				lines[chain_start:chain_end + 1] = new_lines
				changed = True
				break

			if not changed:
				i += 1

		return '\n'.join(lines)

	def _parse_if_goto_block(self, lines, start, expected_indent):
		"""Parse an if(COND) { BODY; goto EXIT; } block starting at line `start`.

		Returns dict with start, end, cond, body_start, body_end, goto_target
		or None if the pattern doesn't match.
		"""
		RE_IF_OPEN = re.compile(r'^(\s*)if\((.+)\) \{')
		RE_GOTO = re.compile(r'^(\s*)goto (Label_\w+);')
		RE_CLOSE = re.compile(r'^(\s*)\}$')

		if start >= len(lines):
			return None

		m_if = RE_IF_OPEN.match(lines[start])
		if not m_if or m_if.group(1) != expected_indent:
			return None

		cond = m_if.group(2)
		indent = m_if.group(1)

		# Find matching close brace by tracking depth
		depth = 1
		j = start + 1
		goto_target = None
		last_stmt_line = None

		while j < len(lines) and depth > 0:
			line = lines[j]
			for ch in line:
				if ch == '{':
					depth += 1
				elif ch == '}':
					depth -= 1
					if depth == 0:
						break
			if depth == 0:
				# j is the closing brace
				break
			# Track last non-empty line for goto check
			if line.strip():
				last_stmt_line = j
				m_g = RE_GOTO.match(line)
				if m_g:
					goto_target = m_g.group(2)
					goto_line = j
			j += 1

		if depth != 0:
			return None

		close_line = j
		# Verify close brace is at same indent
		m_close = RE_CLOSE.match(lines[close_line])
		if not m_close or m_close.group(1) != indent:
			return None

		# Check that the last statement is a goto
		if goto_target is None or last_stmt_line != goto_line:
			return None

		return {
			'start': start,
			'end': close_line,
			'cond': cond,
			'body_start': start + 1,
			'body_end': close_line,
			'goto_target': goto_target,
			'goto_line': goto_line,
		}

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
		# CVector literal (old or new format)
		if value.startswith('CVector(') and value.endswith(')'):
			return True
		if value.startswith('[') and value.endswith(']'):
			return True
		# Null object literal
		if value == 'Obj()':
			return True
		# Boolean / null keywords
		if value in ('true', 'false', 'null'):
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
			stripped = lines[i].strip()
			# Function header: "void funcname(...)" or "funcname(...)"
			# Must have parens, not be a lone brace, and look like a function def
			if (stripped and
				'(' in stripped and ')' in stripped and
				stripped not in ('{', '}') and
				re.match(r'^(?:void\s+)?\w+\(', stripped)):
				# Check for opening brace on next line
				if i + 1 < len(lines) and lines[i + 1].strip() == '{':
					base_indent = len(lines[i]) - len(lines[i].lstrip())
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
		# CVector doesn't need cast (old or new format)
		if value.startswith('CVector(') or value.startswith('['):
			return value
		# Object null: 0 assigned to object var -> Obj() (null object literal)
		if var_type == 'object' and value in ('0', 'null'):
			return 'Obj()'
		# true/false don't need cast
		if value in ('true', 'false'):
			return value
		# null doesn't need cast
		if value == 'null':
			return value
		# Type-specific casts
		# Bare integers are naturally int in the compiler, no cast needed
		if var_type == 'int' and re.match(r'^-?\d+$', value):
			return value
		if var_type == 'float' and re.match(r'^-?\d+(\.\d+)?$', value):
			# Values with decimal point are naturally float, no cast needed
			if '.' in value:
				return value
			# Integer values assigned to float vars need (float) cast
			return f'(float){value}'
		if var_type == 'bool' and value in ('0', '1'):
			return f'(bool){value}'
		if var_type == 'string' and value == '""':
			return value
		# Default: add cast for float/bool
		if var_type in ('float', 'bool'):
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
							# If also used on the right side, it's a compound
							# assignment (e.g., x = x + y). Don't inline — the
							# variable is mutated, not just consumed.
							if is_used:
								parts = jstripped.split(var_name + ' = ', 1)
								if len(parts) > 1 and var_pattern.search(parts[1]):
									use_lines.append(j)
									use_lines.append(j)  # force >1 to block inline
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


	def _is_simple_expr(self, value):
		"""Check if value is a simple expression suitable for inlining.
		Includes binary ops, string concat, field access, but NOT function calls."""
		# Already a literal
		if self._is_literal(value):
			return True
		# Variable reference
		if re.match(r'^(?:var_\d+_\w+|m_var_\d+_\w+|\w+)$', value):
			return True
		# Negation
		if value.startswith('!') and self._is_simple_expr(value[1:]):
			return True
		# Binary expression: A OP B
		# Match: expr OP expr where OP is +, -, *, /, &, |, ^, ==, !=, <, >, <=, >=
		m = re.match(r'^(.+?)\s*([+\-*/&|^]|==|!=|<=?|>=?)\s*(.+)$', value)
		if m:
			return True
		# String concatenation with "..."
		if '+' in value and '"' in value:
			return True
		return False

	def pass_InlineExpressions(self, text):
		"""Inline single-use temporary variables whose values are simple expressions.
		E.g.: var_8 = A & B; @Func(var_8); → @Func(A & B);"""
		lines = text.split('\n')

		changed = True
		while changed:
			changed = False
			lines = [l for l in lines if l is not None]
			func_ranges = self._find_function_ranges(lines)

			for (func_start, func_end) in func_ranges:
				for i in range(func_start, func_end):
					line_stripped = lines[i].strip()

					# Match: var_X = EXPR; (no annotation except //@nz which is handled elsewhere)
					m = re.match(r'^(var_\d+_\w+) = (.+);\s*$', line_stripped)
					if not m:
						continue

					var_name = m.group(1)
					value = m.group(2)

					# Skip multi-assignment lines
					if line_stripped.count(' = ') > 1:
						continue

					# Skip if already a literal (handled by pass_InlineConstants)
					if self._is_literal(value):
						continue

					# Must be a simple expression (no function calls, no method calls)
					if '@' in value or '->' in value:
						continue
					# Skip function calls: word( pattern (but allow (expr) grouping)
					if re.search(r'\w\(', value):
						continue
					# Skip comparison expressions — pass_InlineIfCondition handles those
					if re.search(r'==|!=|>=?|<=?', value):
						continue
					if not self._is_simple_expr(value):
						continue

					# Same single-use scan as pass_InlineConstants
					assign_indent = len(lines[i]) - len(lines[i].lstrip())
					var_pattern = re.compile(r'\b' + re.escape(var_name) + r'\b')
					reassign_pattern = re.compile(
						r'(?:^|; )' + re.escape(var_name) + r' = (?!=)')
					use_lines = []
					for j in range(i + 1, func_end):
						jline = lines[j]
						if jline is None:
							continue
						jstripped = jline.strip()
						if not jstripped:
							continue

						is_reassigned = bool(reassign_pattern.search(jstripped))
						is_used = bool(var_pattern.search(jline))

						if is_reassigned:
							if is_used:
								parts = jstripped.split(var_name + ' = ', 1)
								if len(parts) > 1 and var_pattern.search(parts[1]):
									use_lines.append(j)
									use_lines.append(j)  # force >1 to block inline
							break
						if is_used:
							use_lines.append(j)

					if len(use_lines) != 1:
						continue

					use_line_idx = use_lines[0]
					use_indent = len(lines[use_line_idx]) - len(lines[use_line_idx].lstrip())
					if assign_indent > use_indent:
						continue

					# Wrap in parentheses if the expression is compound and used
					# in a larger expression (not just as a function argument)
					inline_value = value
					if ' ' in value and not (value.startswith('"') and value.endswith('"')):
						inline_value = f'({value})'

					lines[use_line_idx] = var_pattern.sub(
						lambda m: inline_value, lines[use_line_idx])
					lines[i] = None
					changed = True
					break

				if changed:
					break

		lines = [l for l in lines if l is not None]
		return '\n'.join(lines)


	def pass_StripTrailingReturn(self, text):
		"""Remove 'return N;' at the very end of function bodies.
		The compiler can infer the pop count from variable declarations."""
		lines = text.split('\n')
		func_ranges = self._find_function_ranges(lines)

		# Process in reverse so line indices stay valid
		for (func_start, func_end) in reversed(func_ranges):
			# Find last non-empty line before closing brace
			last_stmt = None
			for k in range(func_end - 2, func_start, -1):
				if lines[k].strip():
					last_stmt = k
					break

			if last_stmt is None:
				continue

			# Check if it's a plain return N;
			m = re.match(r'^(\s*)return \d+;\s*$', lines[last_stmt])
			if m:
				lines[last_stmt] = None

		lines = [l for l in lines if l is not None]
		return '\n'.join(lines)


	def pass_InlineNot(self, text):
		"""Merge 'var = !other; if(var != 0)' into 'if (!other)'.
		Also handles 'var = !other; if(var == 1)' → 'if (!other)'.
		Preserves //@nz annotation on the if-line for round-trip."""
		lines = text.split('\n')
		func_ranges = self._find_function_ranges(lines)

		changed = True
		while changed:
			changed = False
			lines = [l for l in lines if l is not None]
			func_ranges = self._find_function_ranges(lines)

			for (func_start, func_end) in func_ranges:
				for i in range(func_start, func_end):
					stripped = lines[i].strip()

					# Match: var_X = !other_var; //@nz
					m = re.match(
						r'^(var_\d+_\w+) = !(\w+);\s*(//@nz)?$',
						stripped)
					if not m:
						continue

					result_var = m.group(1)
					source_var = m.group(2)

					# Find next non-empty line
					next_idx = None
					for j in range(i + 1, func_end):
						if lines[j].strip():
							next_idx = j
							break
					if next_idx is None:
						continue

					next_stripped = lines[next_idx].strip()

					# Match: if(result_var != 0) or if(result_var == 1)
					if_match = re.match(
						r'^if\s*\(' + re.escape(result_var) +
						r'\s*(?:!=\s*0|==\s*1)\)\s*(.*)$',
						next_stripped)
					if not if_match:
						continue

					# Check result_var is not used elsewhere in function
					var_pat = re.compile(r'\b' + re.escape(result_var) + r'\b')
					used_elsewhere = False
					for k in range(func_start, func_end):
						if k == i or k == next_idx:
							continue
						if lines[k] is not None and var_pat.search(lines[k]):
							used_elsewhere = True
							break
					if used_elsewhere:
						continue

					rest = if_match.group(1)
					indent = lines[next_idx][:len(lines[next_idx]) - len(lines[next_idx].lstrip())]
					lines[next_idx] = f'{indent}if(!{source_var}) {rest} //@nz'
					lines[i] = None
					changed = True
					break

				if changed:
					break

		lines = [l for l in lines if l is not None]
		return '\n'.join(lines)


	def pass_InlineIfCondition(self, text):
		"""Inline comparison expressions into if-conditions.
		Pattern: var_X = A OP B; if(var_X != 0) → if(A OP B)
		Also handles: var_X = A == null; if(var_X != 0) → if(A == null)"""
		CMP_OPS = ('==', '!=', '>', '<', '>=', '<=')
		lines = text.split('\n')

		changed = True
		while changed:
			changed = False
			lines = [l for l in lines if l is not None]
			func_ranges = self._find_function_ranges(lines)

			for (func_start, func_end) in func_ranges:
				for i in range(func_start, func_end):
					stripped = lines[i].strip()

					# Match: var_X = EXPR; (where EXPR contains a comparison op)
					m = re.match(
						r'^(var_\d+_\w+) = (.+);\s*(?://@\w+)?$',
						stripped)
					if not m:
						continue

					result_var = m.group(1)
					expr = m.group(2)

					# Check expr is a comparison (A OP B) or null check
					is_comparison = False
					for op in CMP_OPS:
						if f' {op} ' in expr:
							is_comparison = True
							break
					if not is_comparison:
						continue

					# Find next non-empty line
					next_idx = None
					for j in range(i + 1, func_end):
						if lines[j].strip():
							next_idx = j
							break
					if next_idx is None:
						continue

					next_stripped = lines[next_idx].strip()

					# Match: if(var_X != 0) or if(var_X == 0)
					if_nz = re.match(
						r'^if\s*\(' + re.escape(result_var) + r'\s*!=\s*0\)\s*(.*)$',
						next_stripped)
					if_ez = re.match(
						r'^if\s*\(' + re.escape(result_var) + r'\s*==\s*0\)\s*(.*)$',
						next_stripped)

					if not if_nz and not if_ez:
						continue

					# Check result_var is not used elsewhere
					var_pat = re.compile(r'\b' + re.escape(result_var) + r'\b')
					used_elsewhere = False
					for k in range(func_start, func_end):
						if k == i or k == next_idx:
							continue
						if lines[k] is not None and var_pat.search(lines[k]):
							used_elsewhere = True
							break
					if used_elsewhere:
						continue

					indent = lines[next_idx][:len(lines[next_idx]) - len(lines[next_idx].lstrip())]

					if if_nz:
						rest = if_nz.group(1)
						lines[next_idx] = f'{indent}if({expr}) {rest}'
					else:
						# == 0 means inverted condition
						# Negate the comparison for readability
						rest = if_ez.group(1)
						# For now keep as-is (inverted comparisons are complex)
						# Just inline the expression
						lines[next_idx] = f'{indent}if(!({expr})) {rest}'

					lines[i] = None
					changed = True
					break

				if changed:
					break

		lines = [l for l in lines if l is not None]
		return '\n'.join(lines)


	def pass_RenameEventParams(self, text):
		"""Rename event handler parameters from var_N_TYPE to heuristic names.
		E.g. var_0_object → actor in OnUse, var_0_string → name in OnTrigger.
		Handles both cases: header already renamed by Prolog, or not yet renamed."""
		lines = text.split('\n')
		func_ranges = self._find_function_ranges(lines)

		for (func_start, func_end) in func_ranges:
			header = lines[func_start].strip()
			# Extract function name and params from header
			hdr_m = re.match(r'void\s+(\w+)\((.+)\)', header)
			if not hdr_m:
				continue
			func_name = hdr_m.group(1)
			params_str = hdr_m.group(2)
			if params_str == 'void':
				continue

			# Get event_id from name
			event_id = EVENT_IDS.get(func_name)
			if event_id is None or event_id not in EVENT_PARAM_NAMES:
				continue

			heuristic = EVENT_PARAM_NAMES[event_id]
			params = [p.strip() for p in params_str.split(',')]

			# Build rename map from event metadata
			# The header may already have renamed params (by Prolog), so we need to
			# figure out the original var_N_TYPE names from the parameter index
			rename_map = {}
			for idx, param in enumerate(params):
				if idx >= len(heuristic):
					break
				expected_type, heur_name = heuristic[idx]
				# Case 1: param still has var_N_TYPE form
				pm = re.match(r'(\w+)\s+(var_(\d+)_\w+)', param)
				if pm:
					ptype = pm.group(1)
					pvar = pm.group(2)
					if ptype == expected_type:
						rename_map[pvar] = heur_name
					continue
				# Case 2: header already renamed by Prolog — "type heur_name"
				pm2 = re.match(r'(\w+)\s+(\w+)', param)
				if pm2:
					ptype = pm2.group(1)
					pname = pm2.group(2)
					if ptype == expected_type and pname == heur_name:
						# Already renamed in header — figure out original var name
						# It was var_{idx}_{type}
						old_var = f'var_{idx}_{expected_type}'
						rename_map[old_var] = heur_name

			if not rename_map:
				continue

			# Rename in function header (only if not already renamed)
			new_header = header
			for old_name, new_name in rename_map.items():
				if old_name in new_header:
					m = re.match(r'var_\d+_(\w+)', old_name)
					type_str = m.group(1) if m else 'object'
					new_header = new_header.replace(f'{type_str} {old_name}', f'{type_str} {new_name}')
			if new_header != header:
				lines[func_start] = lines[func_start].replace(header, new_header)

			# Rename in function body
			for i in range(func_start + 1, func_end):
				for old_name, new_name in rename_map.items():
					if old_name in lines[i]:
						lines[i] = re.sub(r'\b' + re.escape(old_name) + r'\b',
										  new_name, lines[i])

		return '\n'.join(lines)


	def pass_RemoveUnusedDecls(self, text):
		"""Remove variable declarations for variables that are never used in the function body.
		Handles multi-decl lines like 'bool var_1_bool; bool var_2_bool;' by removing
		only the unused individual declarations. Keeps //@pi tag if any decl remains."""
		lines = text.split('\n')
		func_ranges = self._find_function_ranges(lines)

		for (func_start, func_end) in reversed(func_ranges):
			# Find all declaration lines in this function (lines with TYPE var_N; pattern)
			for i in range(func_start + 1, func_end):
				if lines[i] is None:
					continue
				stripped = lines[i].strip()
				if not stripped:
					continue

				# Match declaration line: "type var_N_type; type var_M_type; ..."
				# or with //@pi tag
				decl_part = re.sub(r'\s*//.*$', '', stripped).rstrip()
				if not decl_part:
					continue

				# Split into individual declarations
				# Pattern: "type varname;" repeated
				decls = re.findall(r'(\w+)\s+((?:var_\d+_\w+|m_var_\d+_\w+|\w+))(?=;)', decl_part)
				if not decls:
					continue

				# Verify this is a pure declaration line (no assignments, no function calls)
				# Remove all "type name;" pairs and check if anything remains
				test = decl_part
				for dtype, dname in decls:
					test = test.replace(f'{dtype} {dname};', '', 1)
				if test.strip():
					continue  # Not a pure declaration line

				# Check which variables are used in the function body (excluding this line)
				indent = lines[i][:len(lines[i]) - len(lines[i].lstrip())]
				keep_decls = []
				for dtype, dname in decls:
					# Check if variable name appears anywhere else in the function
					used = False
					for j in range(func_start, func_end):
						if j == i or lines[j] is None:
							continue
						if re.search(r'\b' + re.escape(dname) + r'\b', lines[j]):
							used = True
							break
					if used:
						keep_decls.append((dtype, dname))

				if len(keep_decls) == len(decls):
					continue  # All vars are used, no change

				if not keep_decls:
					# All vars unused — remove the entire line
					lines[i] = None
				else:
					# Rebuild with only used vars
					new_decl = ' '.join(f'{dtype} {dname};' for dtype, dname in keep_decls)
					# Preserve //@pi tag if present
					tag = ''
					tag_m = re.search(r'\s*(//.*)', stripped)
					if tag_m:
						tag = ' ' + tag_m.group(1)
					lines[i] = indent + new_decl + tag

		lines = [l for l in lines if l is not None]
		return '\n'.join(lines)


	def pass_MoveDecls(self, text):
		"""Move variable declarations closer to their first use.
		Only moves when the variable is first used at the same scope level (not inside
		a nested block). Splits multi-var declarations as needed."""
		lines = text.split('\n')
		func_ranges = self._find_function_ranges(lines)

		for (func_start, func_end) in reversed(func_ranges):
			body_start = func_start + 2  # skip header + opening brace
			if body_start >= func_end:
				continue
			base_indent = len(lines[func_start]) - len(lines[func_start].lstrip())
			body_indent = base_indent + 1  # one tab deeper

			# Find declaration lines at the start of the function body
			decl_lines = []
			first_non_decl = None
			for i in range(body_start, func_end):
				stripped = lines[i].strip()
				if not stripped:
					continue
				# Check if it's a declaration line
				decl_part = re.sub(r'\s*//.*$', '', stripped).rstrip()
				decls = re.findall(r'(\w+)\s+((?:var_\d+_\w+|m_var_\d+_\w+|\w+))(?=;)', decl_part)
				if decls:
					# Verify pure declaration
					test = decl_part
					for dt, dn in decls:
						test = test.replace(f'{dt} {dn};', '', 1)
					if not test.strip():
						decl_lines.append((i, decls))
						continue
				first_non_decl = i
				break

			if not decl_lines or first_non_decl is None:
				continue

			# For each declared variable, find its first use in the function body
			# Only move if first use is at the same scope depth
			indent_str = '\t' * (body_indent)
			for decl_idx, (decl_line, decls) in enumerate(decl_lines):
				for dtype, dname in decls:
					# Find first use
					first_use = None
					for j in range(first_non_decl, func_end):
						if lines[j] is None:
							continue
						if re.search(r'\b' + re.escape(dname) + r'\b', lines[j]):
							first_use = j
							break

					if first_use is None:
						continue
					if first_use == first_non_decl:
						continue  # Already at the first statement — don't move

					# Check scope: count brace depth from body_start to first_use
					depth = 0
					for j in range(first_non_decl, first_use):
						if lines[j] is None:
							continue
						depth += lines[j].count('{') - lines[j].count('}')

					if depth != 0:
						continue  # First use is inside a nested block — don't move

					# Insert declaration just before first_use
					new_decl_line = f'{indent_str}{dtype} {dname};'
					lines.insert(first_use, new_decl_line)
					# Adjust func_end and all subsequent indices
					func_end += 1
					# Remove from original declaration line
					self._remove_var_from_decl_line(lines, decl_line, dtype, dname)

		lines = [l for l in lines if l is not None]
		return '\n'.join(lines)

	def _remove_var_from_decl_line(self, lines, idx, dtype, dname):
		"""Remove a single variable from a declaration line. If it's the last one, remove the line."""
		if lines[idx] is None:
			return
		stripped = lines[idx].strip()
		decl_part = re.sub(r'\s*//.*$', '', stripped).rstrip()
		decls = re.findall(r'(\w+)\s+((?:var_\d+_\w+|m_var_\d+_\w+|\w+))(?=;)', decl_part)
		remaining = [(dt, dn) for dt, dn in decls if not (dt == dtype and dn == dname)]
		if not remaining:
			lines[idx] = None
		else:
			indent = lines[idx][:len(lines[idx]) - len(lines[idx].lstrip())]
			tag = ''
			tag_m = re.search(r'\s*(//.*)', stripped)
			if tag_m:
				tag = ' ' + tag_m.group(1)
			lines[idx] = indent + ' '.join(f'{dt} {dn};' for dt, dn in remaining) + tag


	def pass_MergeDeclAssign(self, text):
		"""Merge declaration + immediate assignment into one line.
		E.g.: float var_8; \\n var_8 = 1; → float var_8 = 1;
		Only for single-var declarations immediately followed by assignment."""
		lines = text.split('\n')
		func_ranges = self._find_function_ranges(lines)

		for (func_start, func_end) in reversed(func_ranges):
			i = func_start + 1
			while i < func_end - 1:
				if lines[i] is None:
					i += 1
					continue
				stripped = lines[i].strip()
				# Match single-var declaration: type varname;
				dm = re.match(r'^(\w+)\s+((?:var_\d+_\w+|m_var_\d+_\w+|\w+));$', stripped)
				if not dm:
					i += 1
					continue
				dtype = dm.group(1)
				dname = dm.group(2)
				# Must be a known type
				if dtype not in ('bool', 'int', 'float', 'string', 'object', 'cvector'):
					i += 1
					continue
				# Find next non-empty line
				j = i + 1
				while j < func_end and (lines[j] is None or not lines[j].strip()):
					j += 1
				if j >= func_end:
					i += 1
					continue
				nxt = lines[j].strip()
				# Match assignment: varname = VALUE;
				am = re.match(r'^' + re.escape(dname) + r' = (.+);$', nxt)
				if not am:
					i += 1
					continue
				value = am.group(1)
				# Merge
				indent = lines[i][:len(lines[i]) - len(lines[i].lstrip())]
				lines[i] = f'{indent}{dtype} {dname} = {value};'
				lines[j] = None
				i += 1

		lines = [l for l in lines if l is not None]
		return '\n'.join(lines)

	def pass_CompoundAssign(self, text):
		"""Convert x = x OP y; → x OP= y; for +=, -=, *=, /="""
		lines = text.split('\n')
		for i, line in enumerate(lines):
			stripped = line.strip()
			# Match: var = var OP expr;
			m = re.match(
				r'^((?:var_\d+_\w+|m_var_\d+_\w+|\w+)) = \1 ([+\-*/]) (.+);$',
				stripped)
			if m:
				var = m.group(1)
				op = m.group(2)
				rhs = m.group(3)
				indent = line[:len(line) - len(line.lstrip())]
				lines[i] = f'{indent}{var} {op}= {rhs};'
		return '\n'.join(lines)

	def pass_StripRedundantParens(self, text):
		"""Remove redundant double parentheses: ((expr)) → (expr).
		Also removes parens around single function arguments: func((expr)) → func(expr)."""
		# Strip ((expr)) → (expr) — only when balanced
		def strip_double(s):
			changed = True
			while changed:
				changed = False
				# Match ((...)): find positions of double-open
				i = 0
				while i < len(s) - 1:
					if s[i] == '(' and s[i+1] == '(':
						# Find matching close for inner paren
						depth = 0
						j = i + 1
						while j < len(s):
							if s[j] == '(':
								depth += 1
							elif s[j] == ')':
								depth -= 1
								if depth == 0:
									# j is closing inner, check j+1 is closing outer
									if j + 1 < len(s) and s[j+1] == ')':
										# Remove outer pair
										s = s[:i] + s[i+1:j+1] + s[j+2:]
										changed = True
										break
									else:
										break
							j += 1
					i += 1
			return s

		lines = text.split('\n')
		for i, line in enumerate(lines):
			if '((' in line:
				lines[i] = strip_double(line)
		return '\n'.join(lines)

	def pass_BracelessSingleIf(self, text):
		"""Remove braces from if/else blocks that contain exactly one statement.
		Transforms: if(cond) { stmt; } → if(cond)\n\tstmt;
		Does NOT remove braces when the single stmt is an if (dangling else problem)."""
		lines = text.split('\n')
		changed = True
		while changed:
			changed = False
			i = 0
			while i < len(lines):
				stripped = lines[i].rstrip()
				sline = stripped.lstrip()

				# Match: if(...) { or if(...) { //@nz etc
				# Also match: } else {
				m_if = re.match(r'^(\s*)(if\s*\(.+\))\s*\{\s*(//.*)?$', stripped)
				m_else = re.match(r'^(\s*)\}\s*else\s*\{\s*$', stripped)

				if m_if:
					indent = m_if.group(1)
					cond_part = m_if.group(2)
					tag = m_if.group(3) or ''
					body_indent = indent + '\t'

					# Look for the body: should be exactly one statement, then closing }
					# Find next non-empty line
					j = i + 1
					while j < len(lines) and not lines[j].strip():
						j += 1
					if j >= len(lines):
						i += 1
						continue

					body_line = lines[j]
					body_stripped = body_line.strip()

					# Skip if body is a brace or starts with closing brace
					if body_stripped in ('{', '}') or body_stripped.startswith('}'):
						i += 1
						continue

					# Skip if body is another if (dangling else)
					if re.match(r'^if\s*\(', body_stripped):
						i += 1
						continue

					# Skip labels, gotos, EMIT
					if body_stripped.startswith('Label_') or body_stripped.startswith('goto ') or body_stripped.startswith('EMIT '):
						i += 1
						continue

					# Next non-empty should be closing brace (possibly with else)
					k = j + 1
					while k < len(lines) and not lines[k].strip():
						k += 1
					if k >= len(lines):
						i += 1
						continue

					close_stripped = lines[k].strip()

					if close_stripped == '}':
						# Simple case: if(cond) { stmt; }
						# Check there's no else after
						next_k = k + 1
						while next_k < len(lines) and not lines[next_k].strip():
							next_k += 1
						if next_k < len(lines) and lines[next_k].strip().startswith('else'):
							i += 1
							continue

						# Transform: remove braces
						tag_suffix = f' {tag}' if tag else ''
						lines[i] = f'{indent}{cond_part}{tag_suffix}'
						lines[j] = f'{body_indent}{body_stripped}'
						lines[k] = None
						changed = True
						i = k + 1
						continue

					elif close_stripped == '} else {':
						# if(cond) { stmt; } else { stmt2; }
						# Check the else body is also single-statement
						ej = k + 1
						while ej < len(lines) and not lines[ej].strip():
							ej += 1
						if ej >= len(lines):
							i += 1
							continue
						else_body = lines[ej].strip()
						# Skip if else body is an if
						if else_body.startswith('if') or else_body.startswith('if('):
							i += 1
							continue
						ek = ej + 1
						while ek < len(lines) and not lines[ek].strip():
							ek += 1
						if ek >= len(lines) or lines[ek].strip() != '}':
							i += 1
							continue

						# Both branches are single-statement — remove braces from both
						tag_suffix = f' {tag}' if tag else ''
						lines[i] = f'{indent}{cond_part}{tag_suffix}'
						lines[j] = f'{body_indent}{body_stripped}'
						lines[k] = f'{indent}else'
						lines[ej] = f'{body_indent}{else_body}'
						lines[ek] = None
						changed = True
						i = ek + 1
						continue

				i += 1
			lines = [l for l in lines if l is not None]

		return '\n'.join(lines)


	def _build_metadata_header(self):
		"""Build minimal metadata header — only what the compiler cannot derive from code.
		Most metadata (imports, strings, run_op, run_task, event op=) is now derived
		by the compiler from declaration order, maintask keyword, and code analysis."""
		script = self.phl.script
		lines = []

		# Global variables with types and names (compiler cannot reliably infer all types)
		if script.gvar.GlobalVarCount > 0:
			gvar_parts = []
			for gv in script.gvar.GvarTypes:
				type_str = var_type_name(gv.type)
				var_name = gv.str if gv.flag else ''
				gvar_parts.append(f'{gv.index}:{type_str}:{var_name}')
			lines.append(f'// @GLOBALS: {",".join(gvar_parts)}')

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

	def _build_task_groups(self):
		"""Build a mapping of task_id -> {main_addr, event_addrs, is_maintask}."""
		script = self.phl.script
		run_task = script.gtasks.RunTask
		main_addr = self.phl.entry_main

		# Map each address to its task
		addr_to_task = {}
		tasks = {}
		for task in script.gtasks.tasks:
			tid = task.index
			tasks[tid] = {
				'is_maintask': (tid == run_task),
				'event_addrs': [],
				'main_addr': None,
			}
			for ev in task.events:
				addr_to_task[ev.ulOp] = tid
				tasks[tid]['event_addrs'].append(ev.ulOp)
		# Main function belongs to RunTask
		if run_task in tasks:
			tasks[run_task]['main_addr'] = main_addr
			addr_to_task[main_addr] = run_task

		return tasks, addr_to_task

	def _print_func_block(self, node, trailing_dead, indent=''):
		"""Print a single function block with optional indentation."""
		# Emit @pe annotation if this function needs a bare PushEmpty
		pe_addrs = getattr(self, '_pe_addrs', set())
		if node.addr in pe_addrs:
			self.printed += f'{indent}// @pe\n'

		# Capture printed output for this function
		saved = self.printed
		self.printed = ''
		self.print_tree(node, [])
		for instr_str in trailing_dead.get(node.addr, []):
			escaped = instr_str.replace('"', '\\"')
			self.fake_print(f'EMIT "{escaped}";')
		func_text = self.printed
		self.printed = saved

		# Apply indentation if inside a task block
		if indent:
			indented_lines = []
			for line in func_text.split('\n'):
				if line.strip():
					indented_lines.append(indent + line)
				else:
					indented_lines.append(line)
			func_text = '\n'.join(indented_lines)

		self.printed += func_text

	def __repr__(self):
		self.printed = ''

		# Emit metadata header for compiler round-trip
		self.printed += self._build_metadata_header()

		# Pre-compute PE addresses for per-function @pe annotations
		self._pe_addrs = set(self._find_pushempty_funcs())

		# Compute dead code: inline (mid-function) and trailing (boundary)
		inline_dead, trailing_dead = self._compute_dead_code()
		self._inline_dead = inline_dead  # Store for print_tree access

		# Build task grouping
		tasks, addr_to_task = self._build_task_groups()

		# Collect all nodes by address
		ep_nodes = {n.addr: n for n in self.phl.get_ep_nodes()}
		func_nodes = {n.addr: n for n in self.phl.get_func_nodes()}
		all_nodes = {**ep_nodes, **func_nodes}

		# Track which addresses have been printed
		printed_addrs = set()

		# Print task blocks
		for tid in sorted(tasks.keys()):
			tinfo = tasks[tid]
			keyword = 'maintask' if tinfo['is_maintask'] else 'task'
			self.fake_print(f'{keyword} task_{tid}')
			self.fake_print('{')

			# Print init (main) function first if in this task
			if tinfo['main_addr'] is not None and tinfo['main_addr'] in all_nodes:
				self._print_func_block(all_nodes[tinfo['main_addr']], trailing_dead, indent='\t')
				printed_addrs.add(tinfo['main_addr'])
				self.fake_print('')

			# Print event handlers
			for ev_addr in tinfo['event_addrs']:
				if ev_addr in all_nodes and ev_addr not in printed_addrs:
					self._print_func_block(all_nodes[ev_addr], trailing_dead, indent='\t')
					printed_addrs.add(ev_addr)
					self.fake_print('')

			self.fake_print('}')
			self.fake_print('\n')

		# Print standalone events (not in any task)
		for node in self.phl.get_ep_nodes():
			if node.addr not in printed_addrs:
				self._print_func_block(node, trailing_dead)
				printed_addrs.add(node.addr)
				self.fake_print('\n')

		# Print subroutine functions
		for node in self.phl.get_func_nodes():
			if node.addr not in printed_addrs:
				self._print_func_block(node, trailing_dead)
				printed_addrs.add(node.addr)
				self.fake_print('\n')

		self.printed = self.pass_WhileTrue(self.printed)
		self.printed = self.pass_StructureIfGoto(self.printed)
		self.printed = self.pass_FixLoopReturn(self.printed)
		self.printed = self.pass_InlineConstants(self.printed)
		self.printed = self.pass_InlineExpressions(self.printed)
		self.printed = self.pass_StripTrailingReturn(self.printed)
		self.printed = self.pass_InlineNot(self.printed)
		self.printed = self.pass_InlineIfCondition(self.printed)
		# Second pass: catch if-goto patterns that only appear after inlining
		self.printed = self.pass_StructureIfGoto(self.printed)
		self.printed = self.pass_ElseToElseIf(self.printed)
		self.printed = self.pass_IfElseChain(self.printed)
		self.printed = self.pass_LoopBreak(self.printed)
		self.printed = self.pass_ForToWhile(self.printed)
		self.printed = self.pass_RenameEventParams(self.printed)
		self.printed = self.pass_RemoveUnusedDecls(self.printed)
		self.printed = self.pass_MoveDecls(self.printed)
		self.printed = self.pass_MergeDeclAssign(self.printed)
		self.printed = self.pass_CompoundAssign(self.printed)
		self.printed = self.pass_StripRedundantParens(self.printed)
		self.printed = self.pass_BracelessSingleIf(self.printed)
		self.printed = self.pass_RemoveEmptyForLoops(self.printed)
		self.printed = self.pass_RemoveUnusedLabels(self.printed)
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

	def get_func_event_id(self, addr):
		"""Return event_id for a function address, or None if not an event handler."""
		gtasks = self.phl.script.gtasks
		for task in gtasks.tasks:
			for ev in task.events:
				if addr == ev.ulOp:
					return ev.ulEventID
		gevents = self.phl.script.gevents
		for ev in gevents.events:
			if addr == ev.ulOp:
				return ev.ulEventID
		return None

	def get_func_name(self, addr):
		if addr == self.phl.entry_main:
			return 'init'

		gtasks = self.phl.script.gtasks
		for i in gtasks.tasks:
			task_index = i.index
			for i2 in i.events:
				event_id = i2.ulEventID
				if addr == i2.ulOp:
					event_name = EVENT_NAMES.get(event_id, f'event_{event_id}')
					# Inside task block, use just event name (no task prefix)
					return event_name

		gevents = self.phl.script.gevents
		for i in gevents.events:
			event_id = i.ulEventID
			if addr == i.ulOp:
				event_name = EVENT_NAMES.get(event_id, f'event_{event_id}')
				return f'{event_name}'

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

		event_id = self.get_func_event_id(func_addr)
		prolog = self.make_instr(HLInstructionProlog(func_name, task_args_str, event_id), node.addr)
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

