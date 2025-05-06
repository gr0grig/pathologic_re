import os
from config import *
from PathologicScript import *


class BasicNode:

	def __init__(self, instructions):
		self.addr = instructions[0].index
		self.instructions = instructions

		last_inst = instructions[-1]

		bb_next = last_inst.bb_next
		i_next = [last_inst.index + 1]
		self.next_addr = bb_next if bb_next else i_next
		self.children = []
		self.call_next = last_inst.call_next
		self.je_next = last_inst.je_next

	def __repr__(self):
		next_str = str(list(map(hex, self.next_addr)))
		return '\n'.join([str(x) for x in self.instructions]) + f'\nNEXT: {next_str}'


class BasicGraph:

	def __init__(self):
		self.nodes = []

	def add_node(self, block):
		self.nodes.append(BasicNode(block))

	def get_node_by_addr(self, addr):
		for n in self.nodes:
			if n.addr == addr:
				return n

	def count(self):
		return len(self.nodes)

	def yield_nodes(self):
		for n in self.nodes:
			yield n

	def add_children(self, node):
		if node.children:
			return

		for addr in node.next_addr:
			if addr == -1:
				continue

			next_node = self.get_node_by_addr(addr)
			node.children.append(next_node)
			self.add_children(next_node)


class StackVar:

	current_index = 0

	@staticmethod
	def drop_index():
		StackVar.current_index = 0

	def __init__(self, type):

		if isinstance(type, VAR_TYPE):
			type = type.value

		self.type = int(type)
		self.index = StackVar.current_index
		StackVar.current_index += 1

	def __repr__(self):
		type_str = var_type_name(self.type)
		return f'var_{self.index}_{type_str}'


class StackSim:

	def __init__(self):
		self.stack = []

	def drop_stack(self):
		self.stack = []
		StackVar.drop_index()

	def create_stack(self, var_types):
		stack = []
		for i in var_types:
			stack.append(StackVar(i))
		return stack

	def get_var_type(self, index):
		return self.stack[index].type

	def process_opcode(self, opcode):

		opcode.stack_snapshot_before = self.stack[:]

		# get current var type from stack
		if isinstance(opcode, CInstructionPush):
			var_type = self.get_var_type(-opcode.VarIn)
			opcode.PushType = [var_type]

		# get current var type from stack
		if isinstance(opcode, CInstructionPushT):
			var_type = self.get_var_type(opcode.VarIn)
			opcode.PushType = [var_type]


		if hasattr(opcode, 'PopOffset'):
			PopOffset = opcode.PopOffset
		else:
			PopOffset = 0

		if hasattr(opcode, 'PopCount'):
			if len(self.stack) < opcode.PopCount + PopOffset:
				raise OSError('Invalid Pop count')

			for i in range(opcode.PopCount):

				if PopOffset == 0:
					self.stack.pop()
				else:
					self.stack.pop(-PopOffset)


		if hasattr(opcode, 'PushOffset'):
			PushOffset = opcode.PushOffset
		else:
			PushOffset = 0

		if hasattr(opcode, 'PushType'):
			for i in opcode.PushType:
				new_var = StackVar(i)

				if PushOffset == 0:
					self.stack.append(new_var)
				else:
					self.stack.insert(-PushOffset, new_var)

		opcode.stack_snapshot_after = self.stack[:]


	def is_call(self, opcode):
		for i in [CInstructionCall, CInstruction_NEW_2]:
			if isinstance(opcode, i):
				return True

	def process_node(self, node, seen_node = [], ident=0):
		for i in node.instructions:

			self.process_opcode(i.opcode)

			# make simulated call
			if self.is_call(i.opcode):
				next_node, call_node = node.children
				saved_stack = self.stack[:]

				self.process_node_iter(call_node, self.stack, seen_node, ident+1)
				self.stack = saved_stack

			
	def process_node_iter(self, start_node, stack_init, seen_node = [], ident = 0):
		if start_node.addr in seen_node: return
		seen_node += [start_node.addr]

		self.stack = stack_init
		self.process_node(start_node, seen_node, ident)

		
		for child in start_node.children:
			stack_copy = self.stack[:]
			self.process_node_iter(child, self.stack, seen_node, ident+1)
			self.stack = stack_copy

	def _process_func(self, start_node, stack):
		self.process_node_iter(start_node, stack, [])

	def process_func(self, start_node, var_types = []):
		stack = self.create_stack(var_types)
		self._process_func(start_node, stack)


class PathologicHL:

	def __init__(self, pat_script):
		self.script = pat_script
		self.graph = BasicGraph()
		self.sim = StackSim()

		self.parse_entry_points()
		self.parse_callee()
		self.parse_func_start()
		self.remove_double_ep()
		self.init_nodes()
		self.build_func_graph()


	def parse_entry_points(self):
		gtasks = self.script.gtasks
		gevents = self.script.gevents
		self.entry_tasks = []
		self.entry_main = gtasks.RunOp

		for i in gtasks.tasks:
			for i2 in i.events:
				self.entry_tasks.append(i2.ulOp)

		for i in gevents.events:
			self.entry_tasks.append(i.ulOp)

		self.entry_points = self.entry_tasks + [gtasks.RunOp]


	def get_func_args_2(self, addr):
		gtasks = self.script.gtasks
		gevents = self.script.gevents
		stack = []

		for i in gtasks.tasks:
			stack += i.VarTypes
			for i2 in i.events:
				if i2.ulOp == addr:
					stack += i2.pVarTypes

		for i in gevents.events:
			if i.ulOp == addr:
				stack += i.pVarTypes

		return stack

	def parse_func_start(self):
		instr = self.script.code.instr
		self.func_starts = []

		for i in instr:
			if i.call_next:
				self.func_starts += i.call_next

		self.func_starts += self.entry_points


	def parse_callee(self):
		instr = self.script.code.instr
		self.bb_next = []
		self.call_next = []

		for i in instr:
			if i.bb_next and i.bb_next != [-1]:
				self.bb_next += i.bb_next

			if i.call_next:
				#print(i, i.call_next)
				self.call_next += i.call_next

		self.bb_next = list(set(self.bb_next))
		self.call_next = list(set(self.call_next))


	def remove_double_ep(self):
		self.call_next = list(set(self.call_next) - set(self.entry_points))

	def is_block_start(self, instr):

		if instr.index in self.entry_points:
			return True

		if instr.index in self.bb_next:
			return True


	def is_last(self, instr):
		return instr.index == len(self.script.code.instr) - 1


	def init_nodes(self):
		code = self.script.code.instr
		index = 0

		for i in range(len(code)):

			inst = code[i]

			if not self.is_last(inst):
				if self.is_block_start(code[i + 1]):	
					block = code[index:i+1]
					self.graph.add_node(block)
					index = i + 1

			if self.is_last(inst) or inst.is_bb_end:
				if index == i+1:
					continue

				block = code[index:i+1]
				self.graph.add_node(block)
				index = i+1


	def build_func_graph(self):
		for addr in self.entry_points:
			start_node = self.graph.get_node_by_addr(addr)
			self.graph.add_children(start_node)

			self.sim.drop_stack()
			arg_types = self.get_func_args_2(start_node.addr)
			self.sim.process_func(start_node, arg_types)


	def get_ep_nodes(self):
		nodes = []
		for addr in self.entry_points:
			nodes += [self.graph.get_node_by_addr(addr)]
		return nodes

	def get_func_nodes(self):
		nodes = []
		for addr in self.call_next:
			nodes += [self.graph.get_node_by_addr(addr)]
		return nodes	

	