GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	player
	fstop
	fgo
	GetPosition
	GetPFPosition
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
	frun
	fwalk

Import:
	FindActor (2 args)
	WaitForAnimEnd (0 args)
	Sleep (1 args)
	GetPosition (1 args)
	Stop (0 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	SetTimer (2 args)
	FollowPath (5 args)
	KillTimer (1 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	Trace (1 args)
	Hold (0 args)
	StopGroup0 (0 args)
	GetScene (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_1000 Op = 0x1d Vars = (string, string)
	GTASK_1 Vars = (bool, object, bool) Params = 2
		EVENT_1000 Op = 0x3b Vars = (string, string)
		EVENT_7 Op = 0xb5 Vars = (int)
		EVENT_10 Op = 0xc7 Vars = (object)
		EVENT_41 Op = 0xd2 Vars = (object)
	GTASK_2  Params = 0
		EVENT_1000 Op = 0xef Vars = (string, string)

Events:
EVENT_41 Op = 0x149 Vars = (object)
EVENT_1000 Op = 0x14b Vars = (string, string)

0x0: PushEmpty(object, object)
0x1: Push(GlobalVars[0])
0x2: Stack[-1] = (bool) 1
0x3: GlobalVars[0] = Stack[-1]; Pop(1)
0x4: Push("player")
0x5: @ FindActor(Stack[-2], Stack[-1])
0x6: Pop(1)
0x7: Pop(0); Push(( Stack[-1] != 0 )
0x8: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x9: PushEmpty(bool, object)
0xa: Stack[-1] = Stack[-3]
0xb: Push(-2, 3); TaskCall(1)
0xc: Call2 0x2d

0xd: Pop(-2, 3); TaskReturn
0xe: Pop(1)
0xf: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0x10: PushEmpty()
0x11: Push(-0, 0); TaskCall(2)
0x12: Call2 0xe6

0x13: Pop(-0, 0); TaskReturn
0x14: Pop(0)
0x15: @ WaitForAnimEnd()
0x16: Pop(0)
0x17: Push((int) 3)
0x18: @ Sleep(Stack[-1])
0x19: Pop(1)
0x1a: GOTO 0x7

0x1b: Return(); Pop(2)

0x1c: Stack[-1] = 0
0x1d: PushEmpty()
0x1e: Push("fstop")
0x1f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x21: PushEmpty()
0x22: Push(-0, 0); TaskCall(2)
0x23: Call2 0xe6

0x24: Pop(-0, 0); TaskReturn
0x25: Pop(0)
0x26: GOTO 0x2c

0x27: PushEmpty(string, string)
0x28: Stack[-2] = Stack[-4]
0x29: Stack[-1] = Stack[-3]
0x2a: Call2 0x14b

0x2b: Pop(2)
0x2c: Return(); Pop(0)

0x2d: PushEmpty()
0x2e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2f: PushEmpty(bool, object, float, float, bool, bool)
0x30: Stack[-5] = Stack[-7]
0x31: Stack[-4] = (int) 200
0x32: Stack[-3] = (int) 10000
0x33: Push(GlobalVars[0])
0x34: Stack[-3] = Stack[-1]
0x35: Pop(1)
0x36: Stack[-1] = (bool) 1
0x37: Call2 0x4f

0x38: Pop(6)
0x39: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0x3a: Return(); Pop(0)

0x3b: PushEmpty()
0x3c: Push("fstop")
0x3d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x3f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x40: PushEmpty()
0x41: Call2 0xcb

0x42: Pop(0)
0x43: GOTO 0x4e

0x44: Push("fgo")
0x45: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x47: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x48: GOTO 0x4e

0x49: PushEmpty(string, string)
0x4a: Stack[-2] = Stack[-4]
0x4b: Stack[-1] = Stack[-3]
0x4c: Call2 0x14b

0x4d: Pop(2)
0x4e: Return(); Pop(0)

0x4f: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x50: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x51: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x52: Stack[-7] = Stack[-17]
0x53: PushEmpty(bool, object)
0x54: Stack[-1] = Stack[-23]
0x55: Call2 0xdb

0x56: Pop(1)
0x57: Pop(1); Push((bool) Stack[-1] == 0)
0x58: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x59: Stack[-22] = (bool) 0
0x5a: Return(); Pop(16)

0x5b: @@ GetPosition(Stack[-5])
0x5c: Pop(0)
0x5d: @ GetPosition(Stack[-4])
0x5e: Pop(0)
0x5f: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x60: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x61: PushEmpty(bool)
0x62: Stack[-1] = (bool) 0
0x63: Push((int) 0)
0x64: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x65: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x66: Pop(0); Push(Stack[-20] * Stack[-20]);
0x67: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x68: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x69: Stack[-1] = (bool) 1
0x6a: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6b: @ Stop()
0x6c: Pop(0)
0x6d: Stack[-22] = (bool) 0
0x6e: Return(); Pop(16)

0x6f: Pop(0); Push(Stack[-20] * Stack[-20]);
0x70: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x71: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0x72: @@ GetPFPosition(Stack[-5])
0x73: Pop(0)
0x74: @ FindPathTo(Stack[-1], Stack[-5])
0x75: Pop(0)
0x76: Pop(0); Push(( Stack[-1] != 0 )
0x77: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x78: Stack[-6] = Stack[-1]
0x79: Stack[-1] = 0
0x7a: Pop(0); Push(( Stack[-6] != 0 )
0x7b: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x7c: Push(Stack[-7])
0x7d: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7e: Stack[-7] = (bool) 0
0x7f: @ RotatePath(Stack[-6], Stack[-8])
0x80: Pop(0)
0x81: Pop(0); Push((bool) Stack[-8] == 0)
0x82: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x83: GOTO 0xb3

0x84: Push((int) 0)
0x85: Push((float)0.3)
0x86: @ SetTimer(Stack[-2], Stack[-1])
0x87: Pop(2)
0x88: PushEmpty(string)
0x89: Call2 0xe2

0x8a: Pop(0)
0x8b: PushEmpty(string)
0x8c: Call2 0xe4

0x8d: Pop(0)
0x8e: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x8f: Pop(2)
0x90: Pop(0); Push((bool) Stack[-8] == 0)
0x91: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x92: Push( Stack[0 + Tasks[-1].StackPointer] )
0x93: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x94: Stack[-6] = 0
0x95: GOTO 0xb3

0x96: GOTO 0x98

0x97: GOTO 0xb2

0x98: GOTO 0x9a

0x99: Stack[-6] = 0
0x9a: GOTO 0xab

0x9b: Push((int) 0)
0x9c: @ KillTimer(Stack[-1])
0x9d: Pop(1)
0x9e: Push((float)0.5)
0x9f: @ Sleep(Stack[-1], Stack[-9])
0xa0: Pop(1)
0xa1: Pop(0); Push((bool) Stack[-8] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa3: Push( Stack[0 + Tasks[-1].StackPointer] )
0xa4: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa5: Stack[-6] = 0
0xa6: GOTO 0xb3

0xa7: Push((int) 0)
0xa8: Push((float)0.3)
0xa9: @ SetTimer(Stack[-2], Stack[-1])
0xaa: Pop(2)
0xab: Stack[-1] = 0
0xac: GOTO 0xb1

0xad: Push((int) 0)
0xae: @ KillTimer(Stack[-1])
0xaf: Pop(1)
0xb0: GOTO 0xb3

0xb1: Stack[-6] = 0
0xb2: GOTO 0x53

0xb3: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0xb4: Return(); Pop(16)

0xb5: PushEmpty()
0xb6: Push((int) 0)
0xb7: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: Return(); Pop(0)

0xba: PushEmpty(bool, object)
0xbb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Call2 0xdb

0xbd: Pop(1)
0xbe: Pop(1); Push((bool) Stack[-1] == 0)
0xbf: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xc0: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xc1: Push((int) 0)
0xc2: @ KillTimer(Stack[-1])
0xc3: Pop(1)
0xc4: @ Stop()
0xc5: Pop(0)
0xc6: Return(); Pop(0)

0xc7: PushEmpty()
0xc8: @ RequestClearPath(Stack[-1])
0xc9: Pop(0)
0xca: Return(); Pop(0)

0xcb: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xcc: Push((int) 0)
0xcd: @ KillTimer(Stack[-1])
0xce: Pop(1)
0xcf: @ Stop()
0xd0: Pop(0)
0xd1: Return(); Pop(0)

0xd2: PushEmpty()
0xd3: PushEmpty()
0xd4: Call2 0xcb

0xd5: Pop(0)
0xd6: PushEmpty(object)
0xd7: Stack[-1] = Stack[-2]
0xd8: Call2 0x149

0xd9: Pop(1)
0xda: Return(); Pop(0)

0xdb: PushEmpty()
0xdc: PushEmpty(bool, object)
0xdd: Stack[-1] = Stack[-3]
0xde: Call2 0x131

0xdf: Stack[-4] = Stack[-2]
0xe0: Pop(2)
0xe1: Return(); Pop(0)

0xe2: Stack[-1] = "walk"
0xe3: Return(); Pop(0)

0xe4: Stack[-1] = "run"
0xe5: Return(); Pop(0)

0xe6: Push("Waiting for your orders!")
0xe7: @ Trace(Stack[-1])
0xe8: Pop(1)
0xe9: @ Hold()
0xea: Pop(0)
0xeb: Push("Following you!")
0xec: @ Trace(Stack[-1])
0xed: Pop(1)
0xee: Return(); Pop(0)

0xef: PushEmpty()
0xf0: Push("fgo")
0xf1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf3: @ StopGroup0()
0xf4: Pop(0)
0xf5: GOTO 0xfb

0xf6: PushEmpty(string, string)
0xf7: Stack[-2] = Stack[-4]
0xf8: Stack[-1] = Stack[-3]
0xf9: Call2 0x14b

0xfa: Pop(2)
0xfb: Return(); Pop(0)

0xfc: PushEmpty(bool, bool)
0xfd: Push("HasProperty")
0xfe: Push((int) 2)
0xff: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x100: Pop(1); Push((bool) Stack[-1] == 0)
0x101: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x102: Stack[-5] = (bool) 0
0x103: Return(); Pop(2)

0x104: @@ HasProperty(Stack[-3], Stack[-1])
0x105: Pop(0)
0x106: Stack[-5] = Stack[-1]
0x107: Return(); Pop(2)

0x108: PushEmpty(bool, bool)
0x109: @@ IsDead(Stack[-1])
0x10a: Pop(0)
0x10b: Stack[-4] = Stack[-1]
0x10c: Return(); Pop(2)

0x10d: PushEmpty(object, object, object, object)
0x10e: Pop(0); Push((bool) Stack[-5] == 0)
0x10f: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x110: Stack[-6] = (bool) 0
0x111: Return(); Pop(4)

0x112: PushEmpty(bool)
0x113: Stack[-1] = (bool) 0
0x114: Push("IsDead")
0x115: Push((int) 1)
0x116: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x117: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x118: PushEmpty(bool, object)
0x119: Stack[-1] = Stack[-8]
0x11a: Call2 0x108

0x11b: Pop(1)
0x11c: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x11d: Stack[-1] = (bool) 1
0x11e: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11f: Stack[-6] = (bool) 0
0x120: Return(); Pop(4)

0x121: @ GetScene(Stack[-2])
0x122: Pop(0)
0x123: Pop(0); Push((bool) Stack[-2] == 0)
0x124: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x125: Stack[-6] = (bool) 0
0x126: Return(); Pop(4)

0x127: @@ GetScene(Stack[-1])
0x128: Pop(0)
0x129: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12b: Stack[-6] = (bool) 0
0x12c: Return(); Pop(4)

0x12d: Stack[-6] = (bool) 1
0x12e: Return(); Pop(4)

0x12f: Stack[-1] = 0
0x130: Stack[-2] = 0
0x131: PushEmpty(int, int)
0x132: PushEmpty(bool, object)
0x133: Stack[-1] = Stack[-5]
0x134: Call2 0x10d

0x135: Pop(1)
0x136: Pop(1); Push((bool) Stack[-1] == 0)
0x137: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x138: Stack[-4] = (bool) 0
0x139: Return(); Pop(2)

0x13a: PushEmpty(bool, object, string)
0x13b: Stack[-2] = Stack[-6]
0x13c: Stack[-1] = "noaccess"
0x13d: Call2 0xfc

0x13e: Pop(2)
0x13f: Pop(1); Push((bool) Stack[-1] == 0)
0x140: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x141: Stack[-4] = (bool) 1
0x142: Return(); Pop(2)

0x143: Push("noaccess")
0x144: @@ GetProperty(Stack[-1], Stack[-2])
0x145: Pop(1)
0x146: Push((int) 0)
0x147: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x148: Return(); Pop(2)

0x149: PushEmpty()
0x14a: Return(); Pop(0)

0x14b: PushEmpty()
0x14c: Push("frun")
0x14d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14e: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14f: Push(GlobalVars[0])
0x150: Stack[-1] = (bool) 1
0x151: GlobalVars[0] = Stack[-1]; Pop(1)
0x152: GOTO 0x159

0x153: Push("fwalk")
0x154: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x156: Push(GlobalVars[0])
0x157: Stack[-1] = (bool) 0
0x158: GlobalVars[0] = Stack[-1]; Pop(1)
0x159: Return(); Pop(0)

