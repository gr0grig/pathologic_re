GlobalVarCount = 0

Strings:
	size
	resize
	inited
	day
	SetProperty
	get
	strActorName: 
	strXMLName: 
	pt_k2s_svita
	setting property
	index
	property set
	set
	dead
	HasProperty
	GetLocator
	Locator 
	 doesn't exist
	pt_k2s_npc
	NPC_Bakalavr
	k2system_danko.xml
	pers_wasted_male
	add
	k2system_wasted_male.xml
	pers_patrool
	k2system_patrol.xml

Import:
	CreateObjectVector (1 args)
	CreateStringVector (1 args)
	CreateBoolVector (1 args)
	Hold (0 args)
	HasProperty (2 args)
	GetProperty (2 args)
	Trace (1 args)
	RemoveActor (1 args)
	self (1 args)
	AddActor (6 args)
	GetGameTime (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, bool, int) Params = 0
		EVENT_5 Op = 0x1e Vars = ()
		EVENT_6 Op = 0x6f Vars = ()


0x0: PushEmpty(int, int)
0x1: Stack[5 + Tasks[-1].StackPointer] = (bool)0
0x2: PushEmpty(int)
0x3: Call2 0x9d

0x4: Stack[6 + Tasks[-1].StackPointer] = Stack[-1]
0x5: Pop(1)
0x6: @ CreateObjectVector(Stack[-4])
0x7: Pop(0)
0x8: @ CreateStringVector(Stack[-0])
0x9: Pop(0)
0xa: @ CreateStringVector(Stack[-1])
0xb: Pop(0)
0xc: @ CreateBoolVector(Stack[-2])
0xd: Pop(0)
0xe: PushEmpty(object, object, object)
0xf: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x10: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x12: Call2 0xb0

0x13: Pop(3)
0x14: @@ size(Stack[-1])
0x15: Pop(0)
0x16: Push(Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x18: @@ resize(Stack[-1])
0x19: Pop(0)
0x1a: @ Hold()
0x1b: Pop(0)
0x1c: GOTO 0x1a

0x1d: Return(); Pop(2)

0x1e: PushEmpty(bool, bool, int, int, int, string, string, object, bool, bool, bool, int, int, int, string, string, object, bool)
0x1f: Stack[-8] = (bool) 0
0x20: Push("inited")
0x21: @ HasProperty(Stack[-1], Stack[-10])
0x22: Pop(1)
0x23: Push(Stack[-9])
0x24: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x25: Push("inited")
0x26: @ GetProperty(Stack[-1], Stack[-8])
0x27: Pop(1)
0x28: Push((int) 0)
0x29: Stack[-9] = Stack[-8] != Stack[-1]; Pop(1);
0x2a: Pop(0); Push((bool) Stack[-8] == 0)
0x2b: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2c: Return(); Pop(18)

0x2d: Pop(0); Push((bool) Stack[5 + Tasks[-1].StackPointer] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x2f: PushEmpty(object, object)
0x30: PushEmpty(object)
0x31: Call2 0x85

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xa6

0x35: Stack[3 + Tasks[-1].StackPointer] = Stack[-2]
0x36: Pop(2)
0x37: Push("day")
0x38: @@ SetProperty(Stack[-1], Stack[-6])
0x39: Pop(1)
0x3a: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x3b: @@ size(Stack[-6])
0x3c: Pop(0)
0x3d: Stack[-5] = (int) 0
0x3e: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x3f: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x40: @@ get(Stack[-4], Stack[-5])
0x41: Pop(0)
0x42: @@ get(Stack[-3], Stack[-5])
0x43: Pop(0)
0x44: Stack[-2] = 0
0x45: @@ get(Stack[-1], Stack[-5])
0x46: Pop(0)
0x47: Pop(0); Push((bool) Stack[-1] == 0)
0x48: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x49: Push("strActorName: ")
0x4a: Pop(1); Push(Stack[-1] + Stack[-5]);
0x4b: @ Trace(Stack[-1])
0x4c: Pop(1)
0x4d: Push("strXMLName: ")
0x4e: Pop(1); Push(Stack[-1] + Stack[-4]);
0x4f: @ Trace(Stack[-1])
0x50: Pop(1)
0x51: PushEmpty(object, object, string, string, string)
0x52: PushEmpty(object)
0x53: Call2 0x85

0x54: Stack[-5] = Stack[-1]
0x55: Pop(1)
0x56: Push("pt_k2s_svita")
0x57: Push((int) 1)
0x58: Pop(1); Push(Stack[-12] + Stack[-1]);
0x59: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5a: Stack[-2] = Stack[-9]
0x5b: Stack[-1] = Stack[-8]
0x5c: Call2 0x8b

0x5d: Stack[-7] = Stack[-5]
0x5e: Pop(5)
0x5f: Push("setting property")
0x60: @ Trace(Stack[-1])
0x61: Pop(1)
0x62: Push("index")
0x63: @@ SetProperty(Stack[-1], Stack[-6])
0x64: Pop(1)
0x65: Push("property set")
0x66: @ Trace(Stack[-1])
0x67: Pop(1)
0x68: @@ set(Stack[-5], Stack[-2])
0x69: Pop(0)
0x6a: Stack[-2] = 0
0x6b: Push((int) 1)
0x6c: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x6d: GOTO 0x3e

0x6e: Return(); Pop(18)

0x6f: PushEmpty(int, int, object, bool, int, int, object, bool)
0x70: @@ size(Stack[-4])
0x71: Pop(0)
0x72: Stack[-3] = (int) 0
0x73: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x74: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x75: @@ get(Stack[-2], Stack[-3])
0x76: Pop(0)
0x77: Push(Stack[-2])
0x78: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x79: Push("dead")
0x7a: @@ HasProperty(Stack[-1], Stack[-2])
0x7b: Pop(1)
0x7c: @@ set(Stack[-3], Stack[-1])
0x7d: Pop(0)
0x7e: @ RemoveActor(Stack[-2])
0x7f: Pop(0)
0x80: Stack[-2] = 0
0x81: Push((int) 1)
0x82: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x83: GOTO 0x73

0x84: Return(); Pop(8)

0x85: PushEmpty(object, object)
0x86: @ self(Stack[-1])
0x87: Pop(0)
0x88: Stack[-3] = Stack[-1]
0x89: Return(); Pop(2)

0x8a: Stack[-1] = 0
0x8b: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x8c: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x8d: Pop(0)
0x8e: Pop(0); Push((bool) Stack[-4] == 0)
0x8f: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x90: Push("Locator ")
0x91: Pop(1); Push(Stack[-1] + Stack[-12]);
0x92: Push(" doesn't exist")
0x93: Pop(2); Push(Stack[-2] + Stack[-1]);
0x94: @ Trace(Stack[-1])
0x95: Pop(1)
0x96: Stack[-1] = 0
0x97: GOTO 0x9a

0x98: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x99: Pop(0)
0x9a: Stack[-13] = Stack[-1]
0x9b: Return(); Pop(8)

0x9c: Stack[-1] = 0
0x9d: PushEmpty(float, float)
0x9e: @ GetGameTime(Stack[-1])
0x9f: Pop(0)
0xa0: Push((int) 1)
0xa1: PushEmpty(int)
0xa2: Push((int) 24)
0xa3: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xa4: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xa5: Return(); Pop(2)

0xa6: PushEmpty()
0xa7: PushEmpty(object, object, string, string, string)
0xa8: Stack[-4] = Stack[-6]
0xa9: Stack[-3] = "pt_k2s_npc"
0xaa: Stack[-2] = "NPC_Bakalavr"
0xab: Stack[-1] = "k2system_danko.xml"
0xac: Call2 0x8b

0xad: Stack[-7] = Stack[-5]
0xae: Pop(5)
0xaf: Return(); Pop(0)

0xb0: PushEmpty()
0xb1: Push("pers_wasted_male")
0xb2: @@ add(Stack[-1])
0xb3: Pop(1)
0xb4: Push("k2system_wasted_male.xml")
0xb5: @@ add(Stack[-1])
0xb6: Pop(1)
0xb7: Push((bool) 0)
0xb8: @@ add(Stack[-1])
0xb9: Pop(1)
0xba: Push("pers_wasted_male")
0xbb: @@ add(Stack[-1])
0xbc: Pop(1)
0xbd: Push("k2system_wasted_male.xml")
0xbe: @@ add(Stack[-1])
0xbf: Pop(1)
0xc0: Push((bool) 0)
0xc1: @@ add(Stack[-1])
0xc2: Pop(1)
0xc3: Push("pers_patrool")
0xc4: @@ add(Stack[-1])
0xc5: Pop(1)
0xc6: Push("k2system_patrol.xml")
0xc7: @@ add(Stack[-1])
0xc8: Pop(1)
0xc9: Push((bool) 0)
0xca: @@ add(Stack[-1])
0xcb: Pop(1)
0xcc: Return(); Pop(0)

