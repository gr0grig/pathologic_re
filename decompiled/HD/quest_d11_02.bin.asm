GlobalVarCount = 0

Strings:
	uprava_admin
	pt_d11q02_girl
	pers_littlegirl
	d11q02_littlegirl.xml
	pt_d11q02_boy
	pers_littleboy
	d11q02_littleboy.xml
	uprava_load
	init_graveyard
	d11q02
	d11q02_trigger
	d11q02_trigger.xml
	pt_d11q02_soldier
	pers_soldat
	d11q02_soldier.xml
	add
	pt_d11q02_victim1
	pers_worker
	d11q02_victim1.xml
	pt_d11q02_victim2
	d11q02_victim2.xml
	pt_d11q02_victim3
	pers_unosha
	d11q02_victim3.xml
	pt_d11q02_victim4
	d11q02_victim4.xml
	execute
	soldier_attack
	actor_unload
	soldier_dead
	size
	get
	IsDead
	fail
	completed
	cleanup
	GetLocator
	Locator 
	 doesn't exist
	clear

Import:
	GetSceneByName (2 args)
	Trace (1 args)
	SetVariable (2 args)
	GetMainOutdoorScene (1 args)
	AddActor (6 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	CreateObjectVector (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, bool, bool, int, bool) Params = 0
		EVENT_26 Op = 0x28 Vars = (string)
		EVENT_9 Op = 0x136 Vars = (int, float)


0x0: PushEmpty(object)
0x1: Call2 0x141

0x2: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x3: Pop(1)
0x4: PushEmpty(object)
0x5: Call2 0x141

0x6: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x7: Pop(1)
0x8: Stack[5 + Tasks[-1].StackPointer] = (bool)0
0x9: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0xa: Stack[7 + Tasks[-1].StackPointer] = (int)0
0xb: Stack[8 + Tasks[-1].StackPointer] = (bool)0
0xc: PushEmpty(int)
0xd: Stack[-1] = (int) 11
0xe: Call2 0x123

0xf: Pop(1)
0x10: Return(); Pop(0)

0x11: PushEmpty(object, object)
0x12: Push("uprava_admin")
0x13: @ GetSceneByName(Stack[-2], Stack[-1])
0x14: Pop(1)
0x15: PushEmpty(object, object, string, string, string)
0x16: Stack[-4] = Stack[-6]
0x17: Stack[-3] = "pt_d11q02_girl"
0x18: Stack[-2] = "pers_littlegirl"
0x19: Stack[-1] = "d11q02_littlegirl.xml"
0x1a: Call2 0x147

0x1b: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x1c: Pop(5)
0x1d: PushEmpty(object, object, string, string, string)
0x1e: Stack[-4] = Stack[-6]
0x1f: Stack[-3] = "pt_d11q02_boy"
0x20: Stack[-2] = "pers_littleboy"
0x21: Stack[-1] = "d11q02_littleboy.xml"
0x22: Call2 0x147

0x23: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x24: Pop(5)
0x25: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x26: Return(); Pop(2)

0x27: Stack[-1] = 0
0x28: PushEmpty(object, int, int, int, object, bool, object, int, int, int, object, bool)
0x29: @ Trace(Stack[-13])
0x2a: Pop(0)
0x2b: Push("uprava_load")
0x2c: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2e: Pop(0); Push((bool) Stack[5 + Tasks[-1].StackPointer] == 0)
0x2f: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x30: PushEmpty()
0x31: Call2 0x11

0x32: Pop(0)
0x33: GOTO 0xdc

0x34: Push("init_graveyard")
0x35: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x36: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x37: Push("d11q02")
0x38: Push((int) 1)
0x39: @ SetVariable(Stack[-2], Stack[-1])
0x3a: Pop(2)
0x3b: @ GetMainOutdoorScene(Stack[-6])
0x3c: Pop(0)
0x3d: Push("d11q02_trigger")
0x3e: Push(CVector(0.0, 0.0, 0.0))
0x3f: Push(CVector(0.0, 0.0, 1.0))
0x40: Push("d11q02_trigger.xml")
0x41: @ AddActor(Stack[-2], Stack[-4], Stack[-10], Stack[-3], Stack[-2], Stack[-1])
0x42: Pop(4)
0x43: Stack[-5] = (int) 1
0x44: Push((int) 4)
0x45: Pop(1); Push((bool) Stack[-6] <= Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x47: PushEmpty(object, object, string, string, string)
0x48: Stack[-4] = Stack[-11]
0x49: Push("pt_d11q02_soldier")
0x4a: Stack[-4] = Stack[-1] + Stack[-11]; Pop(1);
0x4b: Stack[-2] = "pers_soldat"
0x4c: Stack[-1] = "d11q02_soldier.xml"
0x4d: Call2 0x147

0x4e: Pop(4)
0x4f: @@ add(Stack[-1])
0x50: Pop(1)
0x51: Push((int) 1)
0x52: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x53: GOTO 0x44

0x54: PushEmpty(object, object, string, string, string)
0x55: Stack[-4] = Stack[-11]
0x56: Stack[-3] = "pt_d11q02_victim1"
0x57: Stack[-2] = "pers_worker"
0x58: Stack[-1] = "d11q02_victim1.xml"
0x59: Call2 0x147

0x5a: Pop(4)
0x5b: @@ add(Stack[-1])
0x5c: Pop(1)
0x5d: PushEmpty(object, object, string, string, string)
0x5e: Stack[-4] = Stack[-11]
0x5f: Stack[-3] = "pt_d11q02_victim2"
0x60: Stack[-2] = "pers_worker"
0x61: Stack[-1] = "d11q02_victim2.xml"
0x62: Call2 0x147

0x63: Pop(4)
0x64: @@ add(Stack[-1])
0x65: Pop(1)
0x66: PushEmpty(object, object, string, string, string)
0x67: Stack[-4] = Stack[-11]
0x68: Stack[-3] = "pt_d11q02_victim3"
0x69: Stack[-2] = "pers_unosha"
0x6a: Stack[-1] = "d11q02_victim3.xml"
0x6b: Call2 0x147

0x6c: Pop(4)
0x6d: @@ add(Stack[-1])
0x6e: Pop(1)
0x6f: PushEmpty(object, object, string, string, string)
0x70: Stack[-4] = Stack[-11]
0x71: Stack[-3] = "pt_d11q02_victim4"
0x72: Stack[-2] = "pers_unosha"
0x73: Stack[-1] = "d11q02_victim4.xml"
0x74: Call2 0x147

0x75: Pop(4)
0x76: @@ add(Stack[-1])
0x77: Pop(1)
0x78: Stack[-6] = 0
0x79: GOTO 0xdc

0x7a: Push("d11q02_trigger")
0x7b: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x7c: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7d: PushEmpty(object, string)
0x7e: Stack[-2] = Stack[3 + Tasks[-1].StackPointer]
0x7f: Stack[-1] = "execute"
0x80: Call2 0x16e

0x81: Pop(2)
0x82: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x83: GOTO 0xdc

0x84: Push("execute")
0x85: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x86: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x87: PushEmpty(object, string)
0x88: Stack[-2] = Stack[4 + Tasks[-1].StackPointer]
0x89: Stack[-1] = "execute"
0x8a: Call2 0x16e

0x8b: Pop(2)
0x8c: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x8d: PushEmpty()
0x8e: Call2 0xe8

0x8f: Pop(0)
0x90: GOTO 0xdc

0x91: Push("soldier_attack")
0x92: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x93: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x94: PushEmpty(object, string)
0x95: Stack[-2] = Stack[3 + Tasks[-1].StackPointer]
0x96: Stack[-1] = "attack"
0x97: Call2 0x16e

0x98: Pop(2)
0x99: GOTO 0xdc

0x9a: Push("actor_unload")
0x9b: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0x9d: Push( Stack[7 + Tasks[-1].StackPointer] )
0x9e: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0x9f: Push((int) 1)
0xa0: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] == Stack[-1])
0xa1: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0xf8

0xa4: Pop(0)
0xa5: GOTO 0xaf

0xa6: Push( Stack[6 + Tasks[-1].StackPointer] )
0xa7: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xa8: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0xa9: PushEmpty()
0xaa: Call2 0xe8

0xab: Pop(0)
0xac: PushEmpty()
0xad: Call2 0xf8

0xae: Pop(0)
0xaf: GOTO 0xdc

0xb0: Push("soldier_dead")
0xb1: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xb3: @@ size(Stack[-4])
0xb4: Pop(0)
0xb5: Stack[-3] = (int) 0
0xb6: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0xb7: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xb8: @@ get(Stack[-2], Stack[-3])
0xb9: Pop(0)
0xba: Push(Stack[-2])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: @@ IsDead(Stack[-1])
0xbd: Pop(0)
0xbe: Pop(0); Push((bool) Stack[-1] == 0)
0xbf: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xc0: GOTO 0xc5

0xc1: Stack[-2] = 0
0xc2: Push((int) 1)
0xc3: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xc4: GOTO 0xb6

0xc5: Pop(0); Push((bool) Stack[-3] == Stack[-4])
0xc6: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc7: Push("d11q02")
0xc8: Push((int) 2)
0xc9: @ SetVariable(Stack[-2], Stack[-1])
0xca: Pop(2)
0xcb: Pop(0); Push((bool) Stack[7 + Tasks[-1].StackPointer] == 0)
0xcc: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcd: Stack[7 + Tasks[-1].StackPointer] = (int)1
0xce: GOTO 0xdc

0xcf: Push("fail")
0xd0: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xd1: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd2: PushEmpty()
0xd3: Call2 0xe8

0xd4: Pop(0)
0xd5: GOTO 0xdc

0xd6: Push("completed")
0xd7: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd9: PushEmpty()
0xda: Call2 0xf0

0xdb: Pop(0)
0xdc: Return(); Pop(12)

0xdd: PushEmpty(int, int)
0xde: Push("d11q02")
0xdf: @ GetVariable(Stack[-1], Stack[-2])
0xe0: Pop(1)
0xe1: Push((int) 1000)
0xe2: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe4: PushEmpty()
0xe5: Call2 0xe8

0xe6: Pop(0)
0xe7: Return(); Pop(2)

0xe8: Push("d11q02")
0xe9: Push((int) -1)
0xea: @ SetVariable(Stack[-2], Stack[-1])
0xeb: Pop(2)
0xec: PushEmpty()
0xed: Call2 0x109

0xee: Pop(0)
0xef: Return(); Pop(0)

0xf0: Push("d11q02")
0xf1: Push((int) 1000)
0xf2: @ SetVariable(Stack[-2], Stack[-1])
0xf3: Pop(2)
0xf4: PushEmpty()
0xf5: Call2 0x109

0xf6: Pop(0)
0xf7: Return(); Pop(0)

0xf8: PushEmpty(object)
0xf9: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0xfa: Call2 0x159

0xfb: Pop(1)
0xfc: PushEmpty(object)
0xfd: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0xfe: Call2 0x159

0xff: Pop(1)
0x100: Push( Stack[8 + Tasks[-1].StackPointer] )
0x101: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x102: PushEmpty(object)
0x103: Call2 0x13b

0x104: Pop(0)
0x105: @ RemoveActor(Stack[-1])
0x106: Pop(1)
0x107: Stack[7 + Tasks[-1].StackPointer] = (int)2
0x108: Return(); Pop(0)

0x109: Push( Stack[0 + Tasks[-1].StackPointer] )
0x10a: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10b: Push("cleanup")
0x10c: @ Trigger(Stack[-0], Stack[-1])
0x10d: Pop(1)
0x10e: Push( Stack[1 + Tasks[-1].StackPointer] )
0x10f: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x110: Push("cleanup")
0x111: @ Trigger(Stack[-1], Stack[-1])
0x112: Pop(1)
0x113: Push( Stack[2 + Tasks[-1].StackPointer] )
0x114: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x115: @ RemoveActor(Stack[-2])
0x116: Pop(0)
0x117: Push((int) 2)
0x118: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11a: PushEmpty(object)
0x11b: Call2 0x13b

0x11c: Pop(0)
0x11d: @ RemoveActor(Stack[-1])
0x11e: Pop(1)
0x11f: GOTO 0x121

0x120: Stack[7 + Tasks[-1].StackPointer] = (int)1
0x121: Stack[8 + Tasks[-1].StackPointer] = (bool)1
0x122: Return(); Pop(0)

0x123: PushEmpty(float, float)
0x124: @ GetGameTime(Stack[-1])
0x125: Pop(0)
0x126: Push((int) 24)
0x127: Pop(1); Push(Stack[-4] * Stack[-1]);
0x128: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12a: PushEmpty()
0x12b: Call2 0x109

0x12c: Pop(0)
0x12d: GOTO 0x135

0x12e: Push((int) 0)
0x12f: Push((int) 24)
0x130: Pop(1); Push(Stack[-5] * Stack[-1]);
0x131: @ SetTimeEvent(Stack[-2], Stack[-1])
0x132: Pop(2)
0x133: @ Hold()
0x134: Pop(0)
0x135: Return(); Pop(2)

0x136: PushEmpty()
0x137: PushEmpty()
0x138: Call2 0xdd

0x139: Pop(0)
0x13a: Return(); Pop(0)

0x13b: PushEmpty(object, object)
0x13c: @ self(Stack[-1])
0x13d: Pop(0)
0x13e: Stack[-3] = Stack[-1]
0x13f: Return(); Pop(2)

0x140: Stack[-1] = 0
0x141: PushEmpty(object, object)
0x142: @ CreateObjectVector(Stack[-1])
0x143: Pop(0)
0x144: Stack[-3] = Stack[-1]
0x145: Return(); Pop(2)

0x146: Stack[-1] = 0
0x147: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x148: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x149: Pop(0)
0x14a: Pop(0); Push((bool) Stack[-4] == 0)
0x14b: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x14c: Push("Locator ")
0x14d: Pop(1); Push(Stack[-1] + Stack[-12]);
0x14e: Push(" doesn't exist")
0x14f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x150: @ Trace(Stack[-1])
0x151: Pop(1)
0x152: Stack[-1] = 0
0x153: GOTO 0x156

0x154: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x155: Pop(0)
0x156: Stack[-13] = Stack[-1]
0x157: Return(); Pop(8)

0x158: Stack[-1] = 0
0x159: PushEmpty(int, int, object, int, int, object)
0x15a: Push(Stack[-7])
0x15b: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x15c: @@ size(Stack[-3])
0x15d: Pop(0)
0x15e: Stack[-2] = (int) 0
0x15f: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x160: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x161: @@ get(Stack[-1], Stack[-2])
0x162: Pop(0)
0x163: Push(Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x165: @ RemoveActor(Stack[-1])
0x166: Pop(0)
0x167: Stack[-1] = 0
0x168: Push((int) 1)
0x169: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x16a: GOTO 0x15f

0x16b: @@ clear()
0x16c: Pop(0)
0x16d: Return(); Pop(6)

0x16e: PushEmpty(int, int, object, int, int, object)
0x16f: Push(Stack[-8])
0x170: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x171: @@ size(Stack[-3])
0x172: Pop(0)
0x173: Stack[-2] = (int) 0
0x174: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x175: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x176: @@ get(Stack[-1], Stack[-2])
0x177: Pop(0)
0x178: Push(Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x17a: @ Trigger(Stack[-1], Stack[-7])
0x17b: Pop(0)
0x17c: Stack[-1] = 0
0x17d: Push((int) 1)
0x17e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x17f: GOTO 0x174

0x180: Return(); Pop(6)

