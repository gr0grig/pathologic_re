GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	house_petr
	nopetr
	cot_maria
	nomaria
	bad petr init
	shouse1_kabak
	pt_b2q03_petr
	NPC_Petr
	b2q03_petr.xml
	bad maria init
	pt_b2q03_maria
	NPC_Maria
	b2q03_maria.xml
	place_maria
	kabak_unload
	fail
	completed
	b2q03
	cleanup
	GetLocator
	Locator 
	 doesn't exist

Import:
	GetSceneByName (2 args)
	Trigger (2 args)
	Trace (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)
	GetActiveScene (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, bool, bool) Params = 0
		EVENT_9 Op = 0x28 Vars = (int, float)
		EVENT_26 Op = 0x48 Vars = (string)


0x0: PushEmpty(object, object, object, object)
0x1: Push("house_petr")
0x2: @ GetSceneByName(Stack[-3], Stack[-1])
0x3: Pop(1)
0x4: Push("nopetr")
0x5: @ Trigger(Stack[-3], Stack[-1])
0x6: Pop(1)
0x7: Push("cot_maria")
0x8: @ GetSceneByName(Stack[-3], Stack[-1])
0x9: Pop(1)
0xa: Push("nomaria")
0xb: @ Trigger(Stack[-3], Stack[-1])
0xc: Pop(1)
0xd: PushEmpty(bool)
0xe: Call2 0xff

0xf: Pop(0)
0x10: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x11: Push("bad petr init")
0x12: @ Trace(Stack[-1])
0x13: Pop(1)
0x14: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x15: GOTO 0x22

0x16: Push("shouse1_kabak")
0x17: @ GetSceneByName(Stack[-2], Stack[-1])
0x18: Pop(1)
0x19: PushEmpty(object, object, string, string, string)
0x1a: Stack[-4] = Stack[-6]
0x1b: Stack[-3] = "pt_b2q03_petr"
0x1c: Stack[-2] = "NPC_Petr"
0x1d: Stack[-1] = "b2q03_petr.xml"
0x1e: Call2 0xe5

0x1f: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x20: Pop(5)
0x21: Stack[-1] = 0
0x22: PushEmpty(int)
0x23: Stack[-1] = (int) 2
0x24: Call2 0xc7

0x25: Pop(1)
0x26: Return(); Pop(4)

0x27: Stack[-2] = 0
0x28: PushEmpty(object, object)
0x29: Push((int) 1)
0x2a: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x2c: PushEmpty(bool)
0x2d: Call2 0xff

0x2e: Pop(0)
0x2f: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x30: Push("bad maria init")
0x31: @ Trace(Stack[-1])
0x32: Pop(1)
0x33: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x34: GOTO 0x41

0x35: Push("shouse1_kabak")
0x36: @ GetSceneByName(Stack[-2], Stack[-1])
0x37: Pop(1)
0x38: PushEmpty(object, object, string, string, string)
0x39: Stack[-4] = Stack[-6]
0x3a: Stack[-3] = "pt_b2q03_maria"
0x3b: Stack[-2] = "NPC_Maria"
0x3c: Stack[-1] = "b2q03_maria.xml"
0x3d: Call2 0xe5

0x3e: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x3f: Pop(5)
0x40: Stack[-1] = 0
0x41: GOTO 0x47

0x42: PushEmpty(int, float)
0x43: Stack[-2] = Stack[-6]
0x44: Stack[-1] = Stack[-5]
0x45: Call2 0xda

0x46: Pop(2)
0x47: Return(); Pop(2)

0x48: PushEmpty(float, object, object, float, object, object)
0x49: @ Trace(Stack[-7])
0x4a: Pop(0)
0x4b: Push("place_maria")
0x4c: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x4d: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x4e: PushEmpty(int)
0x4f: Call2 0xf7

0x50: Pop(0)
0x51: Push((int) 22)
0x52: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x53: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x54: @ GetGameTime(Stack[-3])
0x55: Pop(0)
0x56: Push((float)0.5)
0x57: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x58: Push((int) 1)
0x59: @ SetTimeEvent(Stack[-1], Stack[-4])
0x5a: Pop(1)
0x5b: GOTO 0x8b

0x5c: Push("kabak_unload")
0x5d: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x5e: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x5f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x60: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x61: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x62: Push("shouse1_kabak")
0x63: @ GetSceneByName(Stack[-3], Stack[-1])
0x64: Pop(1)
0x65: PushEmpty(object, object, string, string, string)
0x66: Stack[-4] = Stack[-7]
0x67: Stack[-3] = "pt_b2q03_petr"
0x68: Stack[-2] = "NPC_Petr"
0x69: Stack[-1] = "b2q03_petr.xml"
0x6a: Call2 0xe5

0x6b: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x6c: Pop(5)
0x6d: Stack[-2] = 0
0x6e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6f: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x70: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x71: Push("shouse1_kabak")
0x72: @ GetSceneByName(Stack[-2], Stack[-1])
0x73: Pop(1)
0x74: PushEmpty(object, object, string, string, string)
0x75: Stack[-4] = Stack[-6]
0x76: Stack[-3] = "pt_b2q03_maria"
0x77: Stack[-2] = "NPC_Maria"
0x78: Stack[-1] = "b2q03_maria.xml"
0x79: Call2 0xe5

0x7a: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x7b: Pop(5)
0x7c: Stack[-1] = 0
0x7d: GOTO 0x8b

0x7e: Push("fail")
0x7f: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x80: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x81: PushEmpty()
0x82: Call2 0x97

0x83: Pop(0)
0x84: GOTO 0x8b

0x85: Push("completed")
0x86: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x87: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x88: PushEmpty()
0x89: Call2 0x9f

0x8a: Pop(0)
0x8b: Return(); Pop(6)

0x8c: PushEmpty(int, int)
0x8d: Push("b2q03")
0x8e: @ GetVariable(Stack[-1], Stack[-2])
0x8f: Pop(1)
0x90: Push((int) 1000)
0x91: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x93: PushEmpty()
0x94: Call2 0x97

0x95: Pop(0)
0x96: Return(); Pop(2)

0x97: Push("b2q03")
0x98: Push((int) -1)
0x99: @ SetVariable(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: PushEmpty()
0x9c: Call2 0xa7

0x9d: Pop(0)
0x9e: Return(); Pop(0)

0x9f: Push("b2q03")
0xa0: Push((int) 1000)
0xa1: @ SetVariable(Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: PushEmpty()
0xa4: Call2 0xa7

0xa5: Pop(0)
0xa6: Return(); Pop(0)

0xa7: PushEmpty(object, object)
0xa8: EventDisable(26)
0xa9: EventDisable(9)
0xaa: Push( Stack[0 + Tasks[-1].StackPointer] )
0xab: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xac: Push("cleanup")
0xad: @ Trigger(Stack[-0], Stack[-1])
0xae: Pop(1)
0xaf: Push( Stack[1 + Tasks[-1].StackPointer] )
0xb0: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb1: Push("cleanup")
0xb2: @ Trigger(Stack[-1], Stack[-1])
0xb3: Pop(1)
0xb4: Push("house_petr")
0xb5: @ GetSceneByName(Stack[-2], Stack[-1])
0xb6: Pop(1)
0xb7: Push("petr")
0xb8: @ Trigger(Stack[-2], Stack[-1])
0xb9: Pop(1)
0xba: Push("cot_maria")
0xbb: @ GetSceneByName(Stack[-2], Stack[-1])
0xbc: Pop(1)
0xbd: Push("maria")
0xbe: @ Trigger(Stack[-2], Stack[-1])
0xbf: Pop(1)
0xc0: PushEmpty(object)
0xc1: Call2 0xdf

0xc2: Pop(0)
0xc3: @ RemoveActor(Stack[-1])
0xc4: Pop(1)
0xc5: Return(); Pop(2)

0xc6: Stack[-1] = 0
0xc7: PushEmpty(float, float)
0xc8: @ GetGameTime(Stack[-1])
0xc9: Pop(0)
0xca: Push((int) 24)
0xcb: Pop(1); Push(Stack[-4] * Stack[-1]);
0xcc: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xce: PushEmpty()
0xcf: Call2 0xa7

0xd0: Pop(0)
0xd1: GOTO 0xd9

0xd2: Push((int) 0)
0xd3: Push((int) 24)
0xd4: Pop(1); Push(Stack[-5] * Stack[-1]);
0xd5: @ SetTimeEvent(Stack[-2], Stack[-1])
0xd6: Pop(2)
0xd7: @ Hold()
0xd8: Pop(0)
0xd9: Return(); Pop(2)

0xda: PushEmpty()
0xdb: PushEmpty()
0xdc: Call2 0x8c

0xdd: Pop(0)
0xde: Return(); Pop(0)

0xdf: PushEmpty(object, object)
0xe0: @ self(Stack[-1])
0xe1: Pop(0)
0xe2: Stack[-3] = Stack[-1]
0xe3: Return(); Pop(2)

0xe4: Stack[-1] = 0
0xe5: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xe6: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xe7: Pop(0)
0xe8: Pop(0); Push((bool) Stack[-4] == 0)
0xe9: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xea: Push("Locator ")
0xeb: Pop(1); Push(Stack[-1] + Stack[-12]);
0xec: Push(" doesn't exist")
0xed: Pop(2); Push(Stack[-2] + Stack[-1]);
0xee: @ Trace(Stack[-1])
0xef: Pop(1)
0xf0: Stack[-1] = 0
0xf1: GOTO 0xf4

0xf2: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xf3: Pop(0)
0xf4: Stack[-13] = Stack[-1]
0xf5: Return(); Pop(8)

0xf6: Stack[-1] = 0
0xf7: PushEmpty(float, float)
0xf8: @ GetGameTime(Stack[-1])
0xf9: Pop(0)
0xfa: PushEmpty(int)
0xfb: Stack[-1] = Stack[-2]
0xfc: Push((int) 24)
0xfd: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xfe: Return(); Pop(2)

0xff: PushEmpty(object, object, object, object)
0x100: @ GetActiveScene(Stack[-2])
0x101: Pop(0)
0x102: Push("shouse1_kabak")
0x103: @ GetSceneByName(Stack[-2], Stack[-1])
0x104: Pop(1)
0x105: Stack[-5] = Stack[-1] == Stack[-2]; Pop(0);
0x106: Return(); Pop(4)

0x107: Stack[-1] = 0
0x108: Stack[-2] = 0
