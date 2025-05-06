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
	Sleep (1 args)
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
		EVENT_26 Op = 0x30 Vars = (string)
		EVENT_6 Op = 0x38 Vars = ()
		EVENT_7 Op = 0x79 Vars = (int)


0x0: PushEmpty(float, float)
0x1: Stack[-2] = (int) 300
0x2: Stack[-1] = (int) 100
0x3: Call2 0xa

0x4: Pop(2)
0x5: Push((int) 3)
0x6: @ Sleep(Stack[-1])
0x7: Pop(1)
0x8: GOTO 0x0

0x9: Return(); Pop(0)

0xa: PushEmpty(float, bool, float, bool)
0xb: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0xc: Push((int) 3)
0xd: @ rand(Stack[-3], Stack[-1])
0xe: Pop(1)
0xf: Push((int) 3)
0x10: Pop(1); Push(Stack[-3] + Stack[-1]);
0x11: @ Sleep(Stack[-1], Stack[-2])
0x12: Pop(1)
0x13: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x14: PushEmpty(float, float)
0x15: Stack[-2] = Stack[-8]
0x16: Stack[-1] = Stack[-7]
0x17: Call2 0x4f

0x18: Pop(2)
0x19: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1a: GOTO 0xc

0x1b: Return(); Pop(4)

0x1c: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1d: PushEmpty(bool)
0x1e: Stack[-1] = (bool) 0
0x1f: PushEmpty(bool)
0x20: Call2 0xfc

0x21: Pop(0)
0x22: Pop(1); Push((bool) Stack[-1] == 0)
0x23: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x24: PushEmpty(bool)
0x25: Call2 0x4d

0x26: Pop(0)
0x27: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x28: Stack[-1] = (bool) 1
0x29: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2a: PushEmpty(object)
0x2b: Call2 0x10c

0x2c: Pop(0)
0x2d: @ RemoveActor(Stack[-1])
0x2e: Pop(1)
0x2f: Return(); Pop(0)

0x30: PushEmpty()
0x31: Push("cleanup")
0x32: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x34: PushEmpty()
0x35: Call2 0x1c

0x36: Pop(0)
0x37: Return(); Pop(0)

0x38: Push( Stack[6 + Tasks[-1].StackPointer] )
0x39: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x3a: PushEmpty()
0x3b: Call2 0x90

0x3c: Pop(0)
0x3d: PushEmpty(bool)
0x3e: Stack[-1] = (bool) 0
0x3f: Push( Stack[5 + Tasks[-1].StackPointer] )
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: PushEmpty(bool)
0x42: Call2 0x4d

0x43: Pop(0)
0x44: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x45: Stack[-1] = (bool) 1
0x46: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x47: PushEmpty(object)
0x48: Call2 0x10c

0x49: Pop(0)
0x4a: @ RemoveActor(Stack[-1])
0x4b: Pop(1)
0x4c: Return(); Pop(0)

0x4d: Stack[-1] = (bool) 1
0x4e: Return(); Pop(0)

0x4f: PushEmpty()
0x50: PushEmpty(bool)
0x51: Call2 0xfc

0x52: Pop(0)
0x53: Pop(1); Push((bool) Stack[-1] == 0)
0x54: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x55: Return(); Pop(0)

0x56: Push("player")
0x57: @ FindActor(Stack[-4], Stack[-1])
0x58: Pop(1)
0x59: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x5a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5b: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x5c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x5d: Push((int) 10)
0x5e: Push((float)1.0)
0x5f: @ SetTimer(Stack[-2], Stack[-1])
0x60: Pop(2)
0x61: PushEmpty()
0x62: Call2 0x9e

0x63: Pop(0)
0x64: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x65: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x66: Push((int) 10)
0x67: @ KillTimer(Stack[-1])
0x68: Pop(1)
0x69: Return(); Pop(0)

0x6a: PushEmpty(float, float)
0x6b: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x6c: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6d: Stack[-3] = (bool) 0
0x6e: Return(); Pop(2)

0x6f: PushEmpty(float, object)
0x70: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x71: Call2 0xf4

0x72: Pop(1)
0x73: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x74: Push( Stack[2 + Tasks[-1].StackPointer] )
0x75: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x76: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x77: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x78: Return(); Pop(2)

0x79: PushEmpty()
0x7a: Push((int) 10)
0x7b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x7d: PushEmpty(bool)
0x7e: Call2 0x6a

0x7f: Pop(0)
0x80: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x81: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x82: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x83: PushEmpty(object)
0x84: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x85: Call2 0x101

0x86: Pop(1)
0x87: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x88: GOTO 0x8f

0x89: Push( Stack[2 + Tasks[-1].StackPointer] )
0x8a: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8b: Push("head")
0x8c: @ UnlookAsync(Stack[-1])
0x8d: Pop(1)
0x8e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: Call2 0xef

0x92: Pop(0)
0x93: Push((int) 10)
0x94: @ KillTimer(Stack[-1])
0x95: Pop(1)
0x96: Push( Stack[2 + Tasks[-1].StackPointer] )
0x97: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x98: Push("head")
0x99: @ UnlookAsync(Stack[-1])
0x9a: Pop(1)
0x9b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x9c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x9d: Return(); Pop(0)

0x9e: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x9f: @ WaitForAnimEnd()
0xa0: Pop(0)
0xa1: PushEmpty(bool)
0xa2: Call2 0xfc

0xa3: Pop(0)
0xa4: Pop(1); Push((bool) Stack[-1] == 0)
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(14)

0xa7: PushEmpty(int)
0xa8: Call2 0x119

0xa9: Stack[-8] = Stack[-1]
0xaa: Pop(1)
0xab: Stack[-6] = (int) 0
0xac: PushEmpty(bool)
0xad: Stack[-1] = (bool) 0
0xae: Push((int) 5)
0xaf: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb1: PushEmpty(bool)
0xb2: Call2 0xfc

0xb3: Pop(0)
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Stack[-1] = (bool) 1
0xb6: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xb7: Push((int) 3)
0xb8: @ irand(Stack[-6], Stack[-1])
0xb9: Pop(1)
0xba: Push((int) 0)
0xbb: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xbd: Push(Stack[-7])
0xbe: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xbf: @ irand(Stack[-4], Stack[-7])
0xc0: Pop(0)
0xc1: Push("all")
0xc2: PushEmpty(string, int)
0xc3: Stack[-1] = Stack[-7]
0xc4: Call2 0x112

0xc5: Pop(1)
0xc6: @ PlayAnimation(Stack[-2], Stack[-1])
0xc7: Pop(2)
0xc8: @ WaitForAnimEnd(Stack[-3])
0xc9: Pop(0)
0xca: Pop(0); Push((bool) Stack[-3] == 0)
0xcb: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xcc: GOTO 0xea

0xcd: GOTO 0xdf

0xce: Push((int) 1)
0xcf: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd1: Push((int) 4)
0xd2: @ rand(Stack[-3], Stack[-1])
0xd3: Pop(1)
0xd4: Push((int) 1)
0xd5: Pop(1); Push(Stack[-3] + Stack[-1]);
0xd6: @ Sleep(Stack[-1], Stack[-2])
0xd7: Pop(1)
0xd8: Pop(0); Push((bool) Stack[-1] == 0)
0xd9: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xda: GOTO 0xea

0xdb: GOTO 0xdf

0xdc: Push(Stack[-6])
0xdd: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xde: GOTO 0xea

0xdf: PushEmpty(bool)
0xe0: Call2 0xed

0xe1: Pop(0)
0xe2: Pop(1); Push((bool) Stack[-1] == 0)
0xe3: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe4: GOTO 0xea

0xe5: @ ResetAAS()
0xe6: Pop(0)
0xe7: Push((int) 1)
0xe8: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xe9: GOTO 0xac

0xea: @ ResetAAS()
0xeb: Pop(0)
0xec: Return(); Pop(14)

0xed: Stack[-1] = (bool) 1
0xee: Return(); Pop(0)

0xef: @ StopAnimation()
0xf0: Pop(0)
0xf1: @ StopGroup0()
0xf2: Pop(0)
0xf3: Return(); Pop(0)

0xf4: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xf5: @ GetPosition(Stack[-3])
0xf6: Pop(0)
0xf7: @@ GetPosition(Stack[-2])
0xf8: Pop(0)
0xf9: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xfa: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xfb: Return(); Pop(6)

0xfc: PushEmpty(bool, bool)
0xfd: @ IsLoaded(Stack[-1])
0xfe: Pop(0)
0xff: Stack[-3] = Stack[-1]
0x100: Return(); Pop(2)

0x101: PushEmpty(float, cvector, float, cvector)
0x102: @@ GetEyesHeight(Stack[-2])
0x103: Pop(0)
0x104: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x105: Push(CvectorIndex(Stack[-1], 1))
0x106: Stack[-1] = Stack[-3]
0x107: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x108: Push("head")
0x109: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x10a: Pop(1)
0x10b: Return(); Pop(4)

0x10c: PushEmpty(object, object)
0x10d: @ self(Stack[-1])
0x10e: Pop(0)
0x10f: Stack[-3] = Stack[-1]
0x110: Return(); Pop(2)

0x111: Stack[-1] = 0
0x112: PushEmpty(string, string)
0x113: Stack[-1] = "idle"
0x114: Push(Stack[-3])
0x115: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x116: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x117: Stack[-4] = Stack[-1]
0x118: Return(); Pop(2)

0x119: PushEmpty(int, bool, int, bool)
0x11a: Stack[-2] = (int) 0
0x11b: Push("all")
0x11c: PushEmpty(string, int)
0x11d: Stack[-1] = Stack[-5]
0x11e: Call2 0x112

0x11f: Pop(1)
0x120: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(2)
0x122: Pop(0); Push((bool) Stack[-1] == 0)
0x123: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x124: GOTO 0x128

0x125: Push((int) 1)
0x126: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x127: GOTO 0x11b

0x128: Stack[-5] = Stack[-2]
0x129: Return(); Pop(4)

