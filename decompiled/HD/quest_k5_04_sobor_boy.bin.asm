GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	player
	head
	all
	GetPosition
	GetEyesHeight
	idle

Import:
	Sleep (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
	IsLoaded (1 args)
	LookAsync (3 args)
	HasAnimation (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0xa Vars = (object)
		EVENT_7 Op = 0x39 Vars = (int)


0x0: Push((int) 1)
0x1: @ Sleep(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty(float, float)
0x4: Stack[-2] = (int) 300
0x5: Stack[-1] = (int) 100
0x6: Call2 0xf

0x7: Pop(2)
0x8: GOTO 0x0

0x9: Return(); Pop(0)

0xa: PushEmpty()
0xb: PushEmpty()
0xc: Call2 0x50

0xd: Pop(0)
0xe: Return(); Pop(0)

0xf: PushEmpty()
0x10: PushEmpty(bool)
0x11: Call2 0xbc

0x12: Pop(0)
0x13: Pop(1); Push((bool) Stack[-1] == 0)
0x14: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x15: Return(); Pop(0)

0x16: Push("player")
0x17: @ FindActor(Stack[-4], Stack[-1])
0x18: Pop(1)
0x19: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1b: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1d: Push((int) 10)
0x1e: Push((float)1.0)
0x1f: @ SetTimer(Stack[-2], Stack[-1])
0x20: Pop(2)
0x21: PushEmpty()
0x22: Call2 0x5e

0x23: Pop(0)
0x24: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x25: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x26: Push((int) 10)
0x27: @ KillTimer(Stack[-1])
0x28: Pop(1)
0x29: Return(); Pop(0)

0x2a: PushEmpty(float, float)
0x2b: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x2c: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2d: Stack[-3] = (bool) 0
0x2e: Return(); Pop(2)

0x2f: PushEmpty(float, object)
0x30: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x31: Call2 0xb4

0x32: Pop(1)
0x33: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x34: Push( Stack[2 + Tasks[-1].StackPointer] )
0x35: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x36: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x37: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x38: Return(); Pop(2)

0x39: PushEmpty()
0x3a: Push((int) 10)
0x3b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x3d: PushEmpty(bool)
0x3e: Call2 0x2a

0x3f: Pop(0)
0x40: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x41: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x42: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x43: PushEmpty(object)
0x44: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x45: Call2 0xc1

0x46: Pop(1)
0x47: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x48: GOTO 0x4f

0x49: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4a: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4b: Push("head")
0x4c: @ UnlookAsync(Stack[-1])
0x4d: Pop(1)
0x4e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4f: Return(); Pop(0)

0x50: PushEmpty()
0x51: Call2 0xaf

0x52: Pop(0)
0x53: Push((int) 10)
0x54: @ KillTimer(Stack[-1])
0x55: Pop(1)
0x56: Push( Stack[2 + Tasks[-1].StackPointer] )
0x57: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x58: Push("head")
0x59: @ UnlookAsync(Stack[-1])
0x5a: Pop(1)
0x5b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x5c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5d: Return(); Pop(0)

0x5e: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x5f: @ WaitForAnimEnd()
0x60: Pop(0)
0x61: PushEmpty(bool)
0x62: Call2 0xbc

0x63: Pop(0)
0x64: Pop(1); Push((bool) Stack[-1] == 0)
0x65: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x66: Return(); Pop(14)

0x67: PushEmpty(int)
0x68: Call2 0xd3

0x69: Stack[-8] = Stack[-1]
0x6a: Pop(1)
0x6b: Stack[-6] = (int) 0
0x6c: PushEmpty(bool)
0x6d: Stack[-1] = (bool) 0
0x6e: Push((int) 5)
0x6f: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x70: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x71: PushEmpty(bool)
0x72: Call2 0xbc

0x73: Pop(0)
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: Stack[-1] = (bool) 1
0x76: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x77: Push((int) 3)
0x78: @ irand(Stack[-6], Stack[-1])
0x79: Pop(1)
0x7a: Push((int) 0)
0x7b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x7c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x7d: Push(Stack[-7])
0x7e: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x7f: @ irand(Stack[-4], Stack[-7])
0x80: Pop(0)
0x81: Push("all")
0x82: PushEmpty(string, int)
0x83: Stack[-1] = Stack[-7]
0x84: Call2 0xcc

0x85: Pop(1)
0x86: @ PlayAnimation(Stack[-2], Stack[-1])
0x87: Pop(2)
0x88: @ WaitForAnimEnd(Stack[-3])
0x89: Pop(0)
0x8a: Pop(0); Push((bool) Stack[-3] == 0)
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0xaa

0x8d: GOTO 0x9f

0x8e: Push((int) 1)
0x8f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x90: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x91: Push((int) 4)
0x92: @ rand(Stack[-3], Stack[-1])
0x93: Pop(1)
0x94: Push((int) 1)
0x95: Pop(1); Push(Stack[-3] + Stack[-1]);
0x96: @ Sleep(Stack[-1], Stack[-2])
0x97: Pop(1)
0x98: Pop(0); Push((bool) Stack[-1] == 0)
0x99: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x9a: GOTO 0xaa

0x9b: GOTO 0x9f

0x9c: Push(Stack[-6])
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xaa

0x9f: PushEmpty(bool)
0xa0: Call2 0xad

0xa1: Pop(0)
0xa2: Pop(1); Push((bool) Stack[-1] == 0)
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: GOTO 0xaa

0xa5: @ ResetAAS()
0xa6: Pop(0)
0xa7: Push((int) 1)
0xa8: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xa9: GOTO 0x6c

0xaa: @ ResetAAS()
0xab: Pop(0)
0xac: Return(); Pop(14)

0xad: Stack[-1] = (bool) 1
0xae: Return(); Pop(0)

0xaf: @ StopAnimation()
0xb0: Pop(0)
0xb1: @ StopGroup0()
0xb2: Pop(0)
0xb3: Return(); Pop(0)

0xb4: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xb5: @ GetPosition(Stack[-3])
0xb6: Pop(0)
0xb7: @@ GetPosition(Stack[-2])
0xb8: Pop(0)
0xb9: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xba: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xbb: Return(); Pop(6)

0xbc: PushEmpty(bool, bool)
0xbd: @ IsLoaded(Stack[-1])
0xbe: Pop(0)
0xbf: Stack[-3] = Stack[-1]
0xc0: Return(); Pop(2)

0xc1: PushEmpty(float, cvector, float, cvector)
0xc2: @@ GetEyesHeight(Stack[-2])
0xc3: Pop(0)
0xc4: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xc5: Push(CvectorIndex(Stack[-1], 1))
0xc6: Stack[-1] = Stack[-3]
0xc7: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xc8: Push("head")
0xc9: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xca: Pop(1)
0xcb: Return(); Pop(4)

0xcc: PushEmpty(string, string)
0xcd: Stack[-1] = "idle"
0xce: Push(Stack[-3])
0xcf: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xd0: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xd1: Stack[-4] = Stack[-1]
0xd2: Return(); Pop(2)

0xd3: PushEmpty(int, bool, int, bool)
0xd4: Stack[-2] = (int) 0
0xd5: Push("all")
0xd6: PushEmpty(string, int)
0xd7: Stack[-1] = Stack[-5]
0xd8: Call2 0xcc

0xd9: Pop(1)
0xda: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xdb: Pop(2)
0xdc: Pop(0); Push((bool) Stack[-1] == 0)
0xdd: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xde: GOTO 0xe2

0xdf: Push((int) 1)
0xe0: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xe1: GOTO 0xd5

0xe2: Stack[-5] = Stack[-2]
0xe3: Return(); Pop(4)

