import re
import struct


RE_VAR_TYPE = re.compile('(CVariable[^:]+):')


def get_float(data):
	return round(struct.unpack('f', data)[0], 5)

def get_strlen_w(data):
	length = 0
	for i in range(0, len(data), 2):
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


def dump_vector(addr):
	m_start = idc.read_dbg_dword(addr)
	m_finish = idc.read_dbg_dword(addr+4)

	while m_start < m_finish:
		m_obj = idc.read_dbg_dword(m_start)
		vftable = idc.read_dbg_dword(m_obj)
		class_name = idc.get_name(vftable)
		demangle_type = idc.get_inf_attr(INF_SHORT_DN)
		class_name = idc.demangle_name(class_name, demangle_type)
		class_name = RE_VAR_TYPE.findall(class_name)[0]
		#print(RE_VAR_TYPE.findall(class_name))

		value = ''

		if class_name == 'CVariableInt':
			value = idc.read_dbg_dword(m_obj+8)

		if class_name == 'CVariableFloat':
			value = idc.read_dbg_memory(m_obj+8, 4)
			value = get_float(value)

		if class_name == 'CVariableString':
			vector = idc.read_dbg_dword(m_obj+8)
			str_data = read_dbg_memory(vector, 100)
			value = '"' + get_str_from_addr(str_data) + '"'

		if class_name == 'CVariableBool':
			value = idc.read_dbg_byte(m_obj+8)

		if class_name == 'CVariableVector':
			x = idc.read_dbg_memory(m_obj+8, 4)
			y = idc.read_dbg_memory(m_obj+8+4, 4)
			z = idc.read_dbg_memory(m_obj+8+4+4, 4)

			x = get_float(x)
			y = get_float(y)
			z = get_float(z)
			value = f'({x},{y},{z})'
			

		print(hex(m_start), hex(m_obj), class_name, value)
		m_start +=4


def dump_script():
	data_ptr = get_reg_value('esp') + 4
	data_adr = read_dbg_dword(data_ptr)
	script_run = read_dbg_dword(data_adr + 4)
	c_script = read_dbg_dword(script_run)
	print('GlobalVarCount:', read_dbg_dword(c_script))
	print('DataPoolSize:', read_dbg_dword(c_script + 0x14))
	print('CodeSize:', read_dbg_dword(c_script + 0x38))
	print('RunOp:', read_dbg_dword(c_script + 0x44))


def dump_vm_state():
	data_ptr = get_reg_value('esp') + 4
	data_adr = read_dbg_dword(data_ptr)
	stack_ptr = data_adr + 0x20
	cur_op = read_dbg_dword(data_adr + 0x2c)
	
	print(f'CurOP: {hex(cur_op)}')
	print(f'Stack: ')
	dump_vector(stack_ptr)


def dump_pool():
	data_ptr = get_reg_value('esp') + 4
	data_adr = read_dbg_dword(data_ptr)
	script_run = read_dbg_dword(data_adr + 4)
	c_script = read_dbg_dword(script_run)
	data_pool = read_dbg_dword(c_script + 0x18)
	size_pool = read_dbg_dword(c_script + 0x14)
	pool_bytes = read_dbg_memory(data_pool, size_pool)
	strings = []

	while True:
		len_a = get_strlen_a(pool_bytes) + 1
		len_w = get_strlen_w(pool_bytes) + 1
		if len_a ==1:
			break
		strings.append(get_str_from_addr(pool_bytes))
		index = len_w * 2 if len_a == 2 else len_a
		pool_bytes = pool_bytes[index:]

	print('POOL:', strings)


def dump_task_data(addr):
	m_ulTaskID = read_dbg_dword(addr)
	m_ulStackPtr = read_dbg_dword(addr+4)
	print(f'm_ulTaskID = {m_ulTaskID} m_ulStackPtr={m_ulStackPtr}')


def dump_vector_task(addr):
	m_start = idc.read_dbg_dword(addr)
	m_finish = idc.read_dbg_dword(addr+4)

	while m_start < m_finish:
		m_obj = idc.read_dbg_dword(m_start)
		print(hex(m_start), hex(m_obj))
		dump_task_data(m_start)
		m_start +=4

def dump_task():
	data_ptr = get_reg_value('esp') + 4
	data_adr = read_dbg_dword(data_ptr)
	tasks_ptr = data_adr + 0x14
	dump_vector_task(tasks_ptr)


def dump_script_2():
	data_ptr = get_reg_value('esp') + 4
	data_adr = read_dbg_dword(data_ptr)
	cscriptrun = read_dbg_dword(data_adr+4)
	cscript = read_dbg_dword(cscriptrun)
	print(hex(cscript))

