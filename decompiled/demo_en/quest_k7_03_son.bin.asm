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
		EVENT_26 Op = 0x2c Vars = (string)
		EVENT_6 Op = 0x34 Vars = ()
		EVENT_7 Op = 0x75 Vars = (int)


0x0: PushEmpty(float, float)
0x1: Stack[-2] = (int) 300
0x2: Stack[-1] = (int) 100
0x3: Call2 0x6

0x4: Pop(2)
0x5: Return(); Pop(0)

0x6: PushEmpty(float, bool, float, bool)
0x7: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x8: Push((int) 3)
0x9: @ rand(Stack[-3], Stack[-1])
0xa: Pop(1)
0xb: Push((int) 3)
0xc: Pop(1); Push(Stack[-3] + Stack[-1]);
0xd: @ Sleep(Stack[-1], Stack[-2])
0xe: Pop(1)
0xf: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x10: PushEmpty(float, float)
0x11: Stack[-2] = Stack[-8]
0x12: Stack[-1] = Stack[-7]
0x13: Call2 0x4b

0x14: Pop(2)
0x15: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x16: GOTO 0x8

0x17: Return(); Pop(4)

0x18: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x19: PushEmpty(bool)
0x1a: Stack[-1] = (bool) 0
0x1b: PushEmpty(bool)
0x1c: Call2 0xf8

0x1d: Pop(0)
0x1e: Pop(1); Push((bool) Stack[-1] == 0)
0x1f: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x20: PushEmpty(bool)
0x21: Call2 0x49

0x22: Pop(0)
0x23: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x24: Stack[-1] = (bool) 1
0x25: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x26: PushEmpty(object)
0x27: Call2 0x108

0x28: Pop(0)
0x29: @ RemoveActor(Stack[-1])
0x2a: Pop(1)
0x2b: Return(); Pop(0)

0x2c: PushEmpty()
0x2d: Push("cleanup")
0x2e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x30: PushEmpty()
0x31: Call2 0x18

0x32: Pop(0)
0x33: Return(); Pop(0)

0x34: Push( Stack[6 + Tasks[-1].StackPointer] )
0x35: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x36: PushEmpty()
0x37: Call2 0x8c

0x38: Pop(0)
0x39: PushEmpty(bool)
0x3a: Stack[-1] = (bool) 0
0x3b: Push( Stack[5 + Tasks[-1].StackPointer] )
0x3c: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3d: PushEmpty(bool)
0x3e: Call2 0x49

0x3f: Pop(0)
0x40: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x41: Stack[-1] = (bool) 1
0x42: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x43: PushEmpty(object)
0x44: Call2 0x108

0x45: Pop(0)
0x46: @ RemoveActor(Stack[-1])
0x47: Pop(1)
0x48: Return(); Pop(0)

0x49: Stack[-1] = (bool) 1
0x4a: Return(); Pop(0)

0x4b: PushEmpty()
0x4c: PushEmpty(bool)
0x4d: Call2 0xf8

0x4e: Pop(0)
0x4f: Pop(1); Push((bool) Stack[-1] == 0)
0x50: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x51: Return(); Pop(0)

0x52: Push("player")
0x53: @ FindActor(Stack[-4], Stack[-1])
0x54: Pop(1)
0x55: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x56: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x57: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x58: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x59: Push((int) 10)
0x5a: Push((float)1.0)
0x5b: @ SetTimer(Stack[-2], Stack[-1])
0x5c: Pop(2)
0x5d: PushEmpty()
0x5e: Call2 0x9a

0x5f: Pop(0)
0x60: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x61: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x62: Push((int) 10)
0x63: @ KillTimer(Stack[-1])
0x64: Pop(1)
0x65: Return(); Pop(0)

0x66: PushEmpty(float, float)
0x67: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x68: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x69: Stack[-3] = (bool) 0
0x6a: Return(); Pop(2)

0x6b: PushEmpty(float, object)
0x6c: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x6d: Call2 0xf0

0x6e: Pop(1)
0x6f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x70: Push( Stack[2 + Tasks[-1].StackPointer] )
0x71: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x72: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x73: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x74: Return(); Pop(2)

0x75: PushEmpty()
0x76: Push((int) 10)
0x77: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x79: PushEmpty(bool)
0x7a: Call2 0x66

0x7b: Pop(0)
0x7c: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x7d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x7e: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7f: PushEmpty(object)
0x80: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x81: Call2 0xfd

0x82: Pop(1)
0x83: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x84: GOTO 0x8b

0x85: Push( Stack[2 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x87: Push("head")
0x88: @ UnlookAsync(Stack[-1])
0x89: Pop(1)
0x8a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x8b: Return(); Pop(0)

0x8c: PushEmpty()
0x8d: Call2 0xeb

0x8e: Pop(0)
0x8f: Push((int) 10)
0x90: @ KillTimer(Stack[-1])
0x91: Pop(1)
0x92: Push( Stack[2 + Tasks[-1].StackPointer] )
0x93: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x94: Push("head")
0x95: @ UnlookAsync(Stack[-1])
0x96: Pop(1)
0x97: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x98: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x99: Return(); Pop(0)

0x9a: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x9b: @ WaitForAnimEnd()
0x9c: Pop(0)
0x9d: PushEmpty(bool)
0x9e: Call2 0xf8

0x9f: Pop(0)
0xa0: Pop(1); Push((bool) Stack[-1] == 0)
0xa1: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa2: Return(); Pop(14)

0xa3: PushEmpty(int)
0xa4: Call2 0x115

0xa5: Stack[-8] = Stack[-1]
0xa6: Pop(1)
0xa7: Stack[-6] = (int) 0
0xa8: PushEmpty(bool)
0xa9: Stack[-1] = (bool) 0
0xaa: Push((int) 5)
0xab: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xad: PushEmpty(bool)
0xae: Call2 0xf8

0xaf: Pop(0)
0xb0: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb1: Stack[-1] = (bool) 1
0xb2: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xb3: Push((int) 3)
0xb4: @ irand(Stack[-6], Stack[-1])
0xb5: Pop(1)
0xb6: Push((int) 0)
0xb7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xb9: Push(Stack[-7])
0xba: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xbb: @ irand(Stack[-4], Stack[-7])
0xbc: Pop(0)
0xbd: Push("all")
0xbe: PushEmpty(string, int)
0xbf: Stack[-1] = Stack[-7]
0xc0: Call2 0x10e

0xc1: Pop(1)
0xc2: @ PlayAnimation(Stack[-2], Stack[-1])
0xc3: Pop(2)
0xc4: @ WaitForAnimEnd(Stack[-3])
0xc5: Pop(0)
0xc6: Pop(0); Push((bool) Stack[-3] == 0)
0xc7: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc8: GOTO 0xe6

0xc9: GOTO 0xdb

0xca: Push((int) 1)
0xcb: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xcd: Push((int) 4)
0xce: @ rand(Stack[-3], Stack[-1])
0xcf: Pop(1)
0xd0: Push((int) 1)
0xd1: Pop(1); Push(Stack[-3] + Stack[-1]);
0xd2: @ Sleep(Stack[-1], Stack[-2])
0xd3: Pop(1)
0xd4: Pop(0); Push((bool) Stack[-1] == 0)
0xd5: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd6: GOTO 0xe6

0xd7: GOTO 0xdb

0xd8: Push(Stack[-6])
0xd9: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xda: GOTO 0xe6

0xdb: PushEmpty(bool)
0xdc: Call2 0xe9

0xdd: Pop(0)
0xde: Pop(1); Push((bool) Stack[-1] == 0)
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: GOTO 0xe6

0xe1: @ ResetAAS()
0xe2: Pop(0)
0xe3: Push((int) 1)
0xe4: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xe5: GOTO 0xa8

0xe6: @ ResetAAS()
0xe7: Pop(0)
0xe8: Return(); Pop(14)

0xe9: Stack[-1] = (bool) 1
0xea: Return(); Pop(0)

0xeb: @ StopAnimation()
0xec: Pop(0)
0xed: @ StopGroup0()
0xee: Pop(0)
0xef: Return(); Pop(0)

0xf0: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xf1: @ GetPosition(Stack[-3])
0xf2: Pop(0)
0xf3: @@ GetPosition(Stack[-2])
0xf4: Pop(0)
0xf5: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xf6: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xf7: Return(); Pop(6)

0xf8: PushEmpty(bool, bool)
0xf9: @ IsLoaded(Stack[-1])
0xfa: Pop(0)
0xfb: Stack[-3] = Stack[-1]
0xfc: Return(); Pop(2)

0xfd: PushEmpty(float, cvector, float, cvector)
0xfe: @@ GetEyesHeight(Stack[-2])
0xff: Pop(0)
0x100: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x101: Push(CvectorIndex(Stack[-1], 1))
0x102: Stack[-1] = Stack[-3]
0x103: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x104: Push("head")
0x105: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x106: Pop(1)
0x107: Return(); Pop(4)

0x108: PushEmpty(object, object)
0x109: @ self(Stack[-1])
0x10a: Pop(0)
0x10b: Stack[-3] = Stack[-1]
0x10c: Return(); Pop(2)

0x10d: Stack[-1] = 0
0x10e: PushEmpty(string, string)
0x10f: Stack[-1] = "idle"
0x110: Push(Stack[-3])
0x111: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x112: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x113: Stack[-4] = Stack[-1]
0x114: Return(); Pop(2)

0x115: PushEmpty(int, bool, int, bool)
0x116: Stack[-2] = (int) 0
0x117: Push("all")
0x118: PushEmpty(string, int)
0x119: Stack[-1] = Stack[-5]
0x11a: Call2 0x10e

0x11b: Pop(1)
0x11c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(2)
0x11e: Pop(0); Push((bool) Stack[-1] == 0)
0x11f: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x120: GOTO 0x124

0x121: Push((int) 1)
0x122: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x123: GOTO 0x117

0x124: Stack[-5] = Stack[-2]
0x125: Return(); Pop(4)

