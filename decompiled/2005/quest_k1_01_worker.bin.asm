GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	cleanup
	player
	head
	all
	GetPosition
	GetEyesHeight
	idle

Import:
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
	IsLoaded (1 args)
	LookAsync (3 args)
	self (1 args)
	HasAnimation (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x15 Vars = (object)
		EVENT_9 Op = 0x1a Vars = (int, float)
		EVENT_26 Op = 0x46 Vars = (string)
		EVENT_6 Op = 0x4e Vars = ()
		EVENT_7 Op = 0x8f Vars = (int)


0x0: PushEmpty(float, float)
0x1: @ GetGameTime(Stack[-1])
0x2: Pop(0)
0x3: Push((int) 24)
0x4: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x5: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x6: PushEmpty(string)
0x7: Stack[-1] = "cleanup"
0x8: Call2 0x46

0x9: Pop(1)
0xa: GOTO 0xf

0xb: Push((int) 0)
0xc: Push((int) 24)
0xd: @ SetTimeEvent(Stack[-2], Stack[-1])
0xe: Pop(2)
0xf: PushEmpty(float, float)
0x10: Stack[-2] = (int) 300
0x11: Stack[-1] = (int) 100
0x12: Call2 0x20

0x13: Pop(2)
0x14: Return(); Pop(2)

0x15: PushEmpty()
0x16: PushEmpty()
0x17: Call2 0xa6

0x18: Pop(0)
0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(string)
0x1c: Stack[-1] = "cleanup"
0x1d: Call2 0x46

0x1e: Pop(1)
0x1f: Return(); Pop(0)

0x20: PushEmpty(float, bool, float, bool)
0x21: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x22: Push((int) 3)
0x23: @ rand(Stack[-3], Stack[-1])
0x24: Pop(1)
0x25: Push((int) 3)
0x26: Pop(1); Push(Stack[-3] + Stack[-1]);
0x27: @ Sleep(Stack[-1], Stack[-2])
0x28: Pop(1)
0x29: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x2a: PushEmpty(float, float)
0x2b: Stack[-2] = Stack[-8]
0x2c: Stack[-1] = Stack[-7]
0x2d: Call2 0x65

0x2e: Pop(2)
0x2f: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x30: GOTO 0x22

0x31: Return(); Pop(4)

0x32: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x33: PushEmpty(bool)
0x34: Stack[-1] = (bool) 0
0x35: PushEmpty(bool)
0x36: Call2 0x112

0x37: Pop(0)
0x38: Pop(1); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: PushEmpty(bool)
0x3b: Call2 0x63

0x3c: Pop(0)
0x3d: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3e: Stack[-1] = (bool) 1
0x3f: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x40: PushEmpty(object)
0x41: Call2 0x122

0x42: Pop(0)
0x43: @ RemoveActor(Stack[-1])
0x44: Pop(1)
0x45: Return(); Pop(0)

0x46: PushEmpty()
0x47: Push("cleanup")
0x48: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x49: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4a: PushEmpty()
0x4b: Call2 0x32

0x4c: Pop(0)
0x4d: Return(); Pop(0)

0x4e: Push( Stack[6 + Tasks[-1].StackPointer] )
0x4f: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x50: PushEmpty()
0x51: Call2 0xa6

0x52: Pop(0)
0x53: PushEmpty(bool)
0x54: Stack[-1] = (bool) 0
0x55: Push( Stack[5 + Tasks[-1].StackPointer] )
0x56: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x57: PushEmpty(bool)
0x58: Call2 0x63

0x59: Pop(0)
0x5a: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x5b: Stack[-1] = (bool) 1
0x5c: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x5d: PushEmpty(object)
0x5e: Call2 0x122

0x5f: Pop(0)
0x60: @ RemoveActor(Stack[-1])
0x61: Pop(1)
0x62: Return(); Pop(0)

0x63: Stack[-1] = (bool) 1
0x64: Return(); Pop(0)

0x65: PushEmpty()
0x66: PushEmpty(bool)
0x67: Call2 0x112

0x68: Pop(0)
0x69: Pop(1); Push((bool) Stack[-1] == 0)
0x6a: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x6b: Return(); Pop(0)

0x6c: Push("player")
0x6d: @ FindActor(Stack[-4], Stack[-1])
0x6e: Pop(1)
0x6f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x70: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x71: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x72: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x73: Push((int) 10)
0x74: Push((float)1.0)
0x75: @ SetTimer(Stack[-2], Stack[-1])
0x76: Pop(2)
0x77: PushEmpty()
0x78: Call2 0xb4

0x79: Pop(0)
0x7a: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x7b: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7c: Push((int) 10)
0x7d: @ KillTimer(Stack[-1])
0x7e: Pop(1)
0x7f: Return(); Pop(0)

0x80: PushEmpty(float, float)
0x81: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x82: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x83: Stack[-3] = (bool) 0
0x84: Return(); Pop(2)

0x85: PushEmpty(float, object)
0x86: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x87: Call2 0x10a

0x88: Pop(1)
0x89: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x8a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x8d: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x8e: Return(); Pop(2)

0x8f: PushEmpty()
0x90: Push((int) 10)
0x91: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x93: PushEmpty(bool)
0x94: Call2 0x80

0x95: Pop(0)
0x96: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x97: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x98: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x99: PushEmpty(object)
0x9a: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x9b: Call2 0x117

0x9c: Pop(1)
0x9d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x9e: GOTO 0xa5

0x9f: Push( Stack[2 + Tasks[-1].StackPointer] )
0xa0: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa1: Push("head")
0xa2: @ UnlookAsync(Stack[-1])
0xa3: Pop(1)
0xa4: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Call2 0x105

0xa8: Pop(0)
0xa9: Push((int) 10)
0xaa: @ KillTimer(Stack[-1])
0xab: Pop(1)
0xac: Push( Stack[2 + Tasks[-1].StackPointer] )
0xad: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xae: Push("head")
0xaf: @ UnlookAsync(Stack[-1])
0xb0: Pop(1)
0xb1: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xb2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb3: Return(); Pop(0)

0xb4: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xb5: @ WaitForAnimEnd()
0xb6: Pop(0)
0xb7: PushEmpty(bool)
0xb8: Call2 0x112

0xb9: Pop(0)
0xba: Pop(1); Push((bool) Stack[-1] == 0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: Return(); Pop(14)

0xbd: PushEmpty(int)
0xbe: Call2 0x12f

0xbf: Stack[-8] = Stack[-1]
0xc0: Pop(1)
0xc1: Stack[-6] = (int) 0
0xc2: PushEmpty(bool)
0xc3: Stack[-1] = (bool) 0
0xc4: Push((int) 5)
0xc5: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc7: PushEmpty(bool)
0xc8: Call2 0x112

0xc9: Pop(0)
0xca: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xcb: Stack[-1] = (bool) 1
0xcc: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xcd: Push((int) 3)
0xce: @ irand(Stack[-6], Stack[-1])
0xcf: Pop(1)
0xd0: Push((int) 0)
0xd1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xd3: Push(Stack[-7])
0xd4: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xd5: @ irand(Stack[-4], Stack[-7])
0xd6: Pop(0)
0xd7: Push("all")
0xd8: PushEmpty(string, int)
0xd9: Stack[-1] = Stack[-7]
0xda: Call2 0x128

0xdb: Pop(1)
0xdc: @ PlayAnimation(Stack[-2], Stack[-1])
0xdd: Pop(2)
0xde: @ WaitForAnimEnd(Stack[-3])
0xdf: Pop(0)
0xe0: Pop(0); Push((bool) Stack[-3] == 0)
0xe1: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe2: GOTO 0x100

0xe3: GOTO 0xf5

0xe4: Push((int) 1)
0xe5: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xe7: Push((int) 4)
0xe8: @ rand(Stack[-3], Stack[-1])
0xe9: Pop(1)
0xea: Push((int) 1)
0xeb: Pop(1); Push(Stack[-3] + Stack[-1]);
0xec: @ Sleep(Stack[-1], Stack[-2])
0xed: Pop(1)
0xee: Pop(0); Push((bool) Stack[-1] == 0)
0xef: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xf0: GOTO 0x100

0xf1: GOTO 0xf5

0xf2: Push(Stack[-6])
0xf3: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf4: GOTO 0x100

0xf5: PushEmpty(bool)
0xf6: Call2 0x103

0xf7: Pop(0)
0xf8: Pop(1); Push((bool) Stack[-1] == 0)
0xf9: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xfa: GOTO 0x100

0xfb: @ ResetAAS()
0xfc: Pop(0)
0xfd: Push((int) 1)
0xfe: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xff: GOTO 0xc2

0x100: @ ResetAAS()
0x101: Pop(0)
0x102: Return(); Pop(14)

0x103: Stack[-1] = (bool) 1
0x104: Return(); Pop(0)

0x105: @ StopAnimation()
0x106: Pop(0)
0x107: @ StopGroup0()
0x108: Pop(0)
0x109: Return(); Pop(0)

0x10a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x10b: @ GetPosition(Stack[-3])
0x10c: Pop(0)
0x10d: @@ GetPosition(Stack[-2])
0x10e: Pop(0)
0x10f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x110: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x111: Return(); Pop(6)

0x112: PushEmpty(bool, bool)
0x113: @ IsLoaded(Stack[-1])
0x114: Pop(0)
0x115: Stack[-3] = Stack[-1]
0x116: Return(); Pop(2)

0x117: PushEmpty(float, cvector, float, cvector)
0x118: @@ GetEyesHeight(Stack[-2])
0x119: Pop(0)
0x11a: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x11b: Push(CvectorIndex(Stack[-1], 1))
0x11c: Stack[-1] = Stack[-3]
0x11d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x11e: Push("head")
0x11f: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x120: Pop(1)
0x121: Return(); Pop(4)

0x122: PushEmpty(object, object)
0x123: @ self(Stack[-1])
0x124: Pop(0)
0x125: Stack[-3] = Stack[-1]
0x126: Return(); Pop(2)

0x127: Stack[-1] = 0
0x128: PushEmpty(string, string)
0x129: Stack[-1] = "idle"
0x12a: Push(Stack[-3])
0x12b: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x12d: Stack[-4] = Stack[-1]
0x12e: Return(); Pop(2)

0x12f: PushEmpty(int, bool, int, bool)
0x130: Stack[-2] = (int) 0
0x131: Push("all")
0x132: PushEmpty(string, int)
0x133: Stack[-1] = Stack[-5]
0x134: Call2 0x128

0x135: Pop(1)
0x136: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x137: Pop(2)
0x138: Pop(0); Push((bool) Stack[-1] == 0)
0x139: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x13a: GOTO 0x13e

0x13b: Push((int) 1)
0x13c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x13d: GOTO 0x131

0x13e: Stack[-5] = Stack[-2]
0x13f: Return(); Pop(4)

