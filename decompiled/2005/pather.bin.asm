GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	player
	pt_b4_boy_dest
	GetLocator
	Unknown destination point
	GetPosition
	path found
	1
	2
	3
	4
	5
	6
	7
	walk
	run
	Waiting for your orders!
	Following you!
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty

Import:
	FindActor (2 args)
	WaitForAnimEnd (0 args)
	Sleep (1 args)
	GetMainOutdoorScene (1 args)
	Trace (1 args)
	GetPosition (1 args)
	Stop (0 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	SetTimer (2 args)
	FollowPath (5 args)
	KillTimer (1 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	Hold (0 args)
	GetScene (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
	GTASK_1 Vars = (bool, object, bool) Params = 3
		EVENT_7 Op = 0xac Vars = (int)
		EVENT_10 Op = 0xbe Vars = (object)
		EVENT_41 Op = 0xc9 Vars = (object)
	GTASK_2  Params = 0

Events:
EVENT_41 Op = 0x133 Vars = (object)

0x0: PushEmpty(object, object)
0x1: Push(GlobalVars[0])
0x2: Stack[-1] = (bool) 1
0x3: GlobalVars[0] = Stack[-1]; Pop(1)
0x4: Push("player")
0x5: @ FindActor(Stack[-2], Stack[-1])
0x6: Pop(1)
0x7: Pop(0); Push(( Stack[-1] != 0 )
0x8: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x9: PushEmpty(bool, object, string)
0xa: Stack[-2] = Stack[-4]
0xb: Stack[-1] = "pt_b4_boy_dest"
0xc: Push(-3, 3); TaskCall(1)
0xd: Call2 0x1e

0xe: Pop(-3, 3); TaskReturn
0xf: Pop(2)
0x10: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x11: PushEmpty()
0x12: Push(-0, 0); TaskCall(2)
0x13: Call2 0xdd

0x14: Pop(-0, 0); TaskReturn
0x15: Pop(0)
0x16: @ WaitForAnimEnd()
0x17: Pop(0)
0x18: Push((int) 3)
0x19: @ Sleep(Stack[-1])
0x1a: Pop(1)
0x1b: GOTO 0x7

0x1c: Return(); Pop(2)

0x1d: Stack[-1] = 0
0x1e: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0x1f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x20: @ GetMainOutdoorScene(Stack[-4])
0x21: Pop(0)
0x22: @@ GetLocator(Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0x23: Pop(0)
0x24: Pop(0); Push((bool) Stack[-3] == 0)
0x25: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x26: Push("Unknown destination point")
0x27: @ Trace(Stack[-1])
0x28: Pop(1)
0x29: Stack[-11] = (bool) 0
0x2a: Return(); Pop(8)

0x2b: PushEmpty(bool, object, cvector, float, bool, bool)
0x2c: Stack[-5] = Stack[-16]
0x2d: Stack[-4] = Stack[-8]
0x2e: Stack[-3] = (int) 10000
0x2f: Push(GlobalVars[0])
0x30: Stack[-3] = Stack[-1]
0x31: Pop(1)
0x32: Stack[-1] = (bool) 1
0x33: Call2 0x38

0x34: Pop(6)
0x35: Stack[-11] = Stack[2 + Tasks[-1].StackPointer]
0x36: Return(); Pop(8)

0x37: Stack[-4] = 0
0x38: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x39: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x3a: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x3b: Stack[-7] = Stack[-17]
0x3c: PushEmpty(bool, object)
0x3d: Stack[-1] = Stack[-23]
0x3e: Call2 0xd2

0x3f: Pop(1)
0x40: Pop(1); Push((bool) Stack[-1] == 0)
0x41: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x42: Stack[-22] = (bool) 0
0x43: Return(); Pop(16)

0x44: @@ GetPosition(Stack[-5])
0x45: Pop(0)
0x46: @ GetPosition(Stack[-4])
0x47: Pop(0)
0x48: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x49: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x4a: PushEmpty(bool)
0x4b: Stack[-1] = (bool) 0
0x4c: Push((int) 0)
0x4d: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x4e: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4f: Pop(0); Push(Stack[-20] * Stack[-20]);
0x50: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x51: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x52: Stack[-1] = (bool) 1
0x53: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x54: @ Stop()
0x55: Pop(0)
0x56: Stack[-22] = (bool) 0
0x57: Return(); Pop(16)

0x58: @ FindPathTo(Stack[-1], Stack[-20])
0x59: Pop(0)
0x5a: Pop(0); Push(( Stack[-1] != 0 )
0x5b: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5c: Push("path found")
0x5d: @ Trace(Stack[-1])
0x5e: Pop(1)
0x5f: Stack[-6] = Stack[-1]
0x60: Stack[-1] = 0
0x61: Pop(0); Push(( Stack[-6] != 0 )
0x62: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x63: Push("1")
0x64: @ Trace(Stack[-1])
0x65: Pop(1)
0x66: Push(Stack[-7])
0x67: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x68: Push("2")
0x69: @ Trace(Stack[-1])
0x6a: Pop(1)
0x6b: Stack[-7] = (bool) 0
0x6c: @ RotatePath(Stack[-6], Stack[-8])
0x6d: Pop(0)
0x6e: Pop(0); Push((bool) Stack[-8] == 0)
0x6f: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x70: GOTO 0xaa

0x71: Push("3")
0x72: @ Trace(Stack[-1])
0x73: Pop(1)
0x74: Push((int) 0)
0x75: Push((int) 3)
0x76: @ SetTimer(Stack[-2], Stack[-1])
0x77: Pop(2)
0x78: PushEmpty(string)
0x79: Call2 0xd9

0x7a: Pop(0)
0x7b: PushEmpty(string)
0x7c: Call2 0xdb

0x7d: Pop(0)
0x7e: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: Pop(0); Push((bool) Stack[-8] == 0)
0x81: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x82: Push( Stack[0 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x84: Push("4")
0x85: @ Trace(Stack[-1])
0x86: Pop(1)
0x87: Stack[-6] = 0
0x88: GOTO 0xaa

0x89: GOTO 0x8e

0x8a: Push("5")
0x8b: @ Trace(Stack[-1])
0x8c: Pop(1)
0x8d: GOTO 0xa9

0x8e: GOTO 0x93

0x8f: Push("6")
0x90: @ Trace(Stack[-1])
0x91: Pop(1)
0x92: Stack[-6] = 0
0x93: GOTO 0xa7

0x94: Push("7")
0x95: @ Trace(Stack[-1])
0x96: Pop(1)
0x97: Push((int) 0)
0x98: @ KillTimer(Stack[-1])
0x99: Pop(1)
0x9a: Push((float)0.5)
0x9b: @ Sleep(Stack[-1], Stack[-9])
0x9c: Pop(1)
0x9d: Pop(0); Push((bool) Stack[-8] == 0)
0x9e: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x9f: Push( Stack[0 + Tasks[-1].StackPointer] )
0xa0: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa1: Stack[-6] = 0
0xa2: GOTO 0xaa

0xa3: Push((int) 0)
0xa4: Push((float)0.3)
0xa5: @ SetTimer(Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: Stack[-1] = 0
0xa8: Stack[-6] = 0
0xa9: GOTO 0x3c

0xaa: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0xab: Return(); Pop(16)

0xac: PushEmpty()
0xad: Push((int) 0)
0xae: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: Return(); Pop(0)

0xb1: PushEmpty(bool, object)
0xb2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb3: Call2 0xd2

0xb4: Pop(1)
0xb5: Pop(1); Push((bool) Stack[-1] == 0)
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xb8: Push((int) 0)
0xb9: @ KillTimer(Stack[-1])
0xba: Pop(1)
0xbb: @ Stop()
0xbc: Pop(0)
0xbd: Return(); Pop(0)

0xbe: PushEmpty()
0xbf: @ RequestClearPath(Stack[-1])
0xc0: Pop(0)
0xc1: Return(); Pop(0)

0xc2: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xc3: Push((int) 0)
0xc4: @ KillTimer(Stack[-1])
0xc5: Pop(1)
0xc6: @ Stop()
0xc7: Pop(0)
0xc8: Return(); Pop(0)

0xc9: PushEmpty()
0xca: PushEmpty()
0xcb: Call2 0xc2

0xcc: Pop(0)
0xcd: PushEmpty(object)
0xce: Stack[-1] = Stack[-2]
0xcf: Call2 0x133

0xd0: Pop(1)
0xd1: Return(); Pop(0)

0xd2: PushEmpty()
0xd3: PushEmpty(bool, object)
0xd4: Stack[-1] = Stack[-3]
0xd5: Call2 0x11b

0xd6: Stack[-4] = Stack[-2]
0xd7: Pop(2)
0xd8: Return(); Pop(0)

0xd9: Stack[-1] = "walk"
0xda: Return(); Pop(0)

0xdb: Stack[-1] = "run"
0xdc: Return(); Pop(0)

0xdd: Push("Waiting for your orders!")
0xde: @ Trace(Stack[-1])
0xdf: Pop(1)
0xe0: @ Hold()
0xe1: Pop(0)
0xe2: Push("Following you!")
0xe3: @ Trace(Stack[-1])
0xe4: Pop(1)
0xe5: Return(); Pop(0)

0xe6: PushEmpty(bool, bool)
0xe7: Push("HasProperty")
0xe8: Push((int) 2)
0xe9: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xea: Pop(1); Push((bool) Stack[-1] == 0)
0xeb: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xec: Stack[-5] = (bool) 0
0xed: Return(); Pop(2)

0xee: @@ HasProperty(Stack[-3], Stack[-1])
0xef: Pop(0)
0xf0: Stack[-5] = Stack[-1]
0xf1: Return(); Pop(2)

0xf2: PushEmpty(bool, bool)
0xf3: @@ IsDead(Stack[-1])
0xf4: Pop(0)
0xf5: Stack[-4] = Stack[-1]
0xf6: Return(); Pop(2)

0xf7: PushEmpty(object, object, object, object)
0xf8: Pop(0); Push((bool) Stack[-5] == 0)
0xf9: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xfa: Stack[-6] = (bool) 0
0xfb: Return(); Pop(4)

0xfc: PushEmpty(bool)
0xfd: Stack[-1] = (bool) 0
0xfe: Push("IsDead")
0xff: Push((int) 1)
0x100: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x101: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x102: PushEmpty(bool, object)
0x103: Stack[-1] = Stack[-8]
0x104: Call2 0xf2

0x105: Pop(1)
0x106: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x107: Stack[-1] = (bool) 1
0x108: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x109: Stack[-6] = (bool) 0
0x10a: Return(); Pop(4)

0x10b: @ GetScene(Stack[-2])
0x10c: Pop(0)
0x10d: Pop(0); Push((bool) Stack[-2] == 0)
0x10e: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10f: Stack[-6] = (bool) 0
0x110: Return(); Pop(4)

0x111: @@ GetScene(Stack[-1])
0x112: Pop(0)
0x113: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x115: Stack[-6] = (bool) 0
0x116: Return(); Pop(4)

0x117: Stack[-6] = (bool) 1
0x118: Return(); Pop(4)

0x119: Stack[-1] = 0
0x11a: Stack[-2] = 0
0x11b: PushEmpty(int, int)
0x11c: PushEmpty(bool, object)
0x11d: Stack[-1] = Stack[-5]
0x11e: Call2 0xf7

0x11f: Pop(1)
0x120: Pop(1); Push((bool) Stack[-1] == 0)
0x121: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x122: Stack[-4] = (bool) 0
0x123: Return(); Pop(2)

0x124: PushEmpty(bool, object, string)
0x125: Stack[-2] = Stack[-6]
0x126: Stack[-1] = "noaccess"
0x127: Call2 0xe6

0x128: Pop(2)
0x129: Pop(1); Push((bool) Stack[-1] == 0)
0x12a: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12b: Stack[-4] = (bool) 1
0x12c: Return(); Pop(2)

0x12d: Push("noaccess")
0x12e: @@ GetProperty(Stack[-1], Stack[-2])
0x12f: Pop(1)
0x130: Push((int) 0)
0x131: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x132: Return(); Pop(2)

0x133: PushEmpty()
0x134: Return(); Pop(0)

