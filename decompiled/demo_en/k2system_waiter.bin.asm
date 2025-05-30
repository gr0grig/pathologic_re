GlobalVarCount = 0

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
	GetPosition (1 args)
	IsLoaded (1 args)
	LookAsync (3 args)
	HasAnimation (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_7 Op = 0x34 Vars = (int)


0x0: Push((int) 1)
0x1: @ Sleep(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty(float, float)
0x4: Stack[-2] = (int) 300
0x5: Stack[-1] = (int) 100
0x6: Call2 0xa

0x7: Pop(2)
0x8: GOTO 0x0

0x9: Return(); Pop(0)

0xa: PushEmpty()
0xb: PushEmpty(bool)
0xc: Call2 0xa4

0xd: Pop(0)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0x10: Return(); Pop(0)

0x11: Push("player")
0x12: @ FindActor(Stack[-4], Stack[-1])
0x13: Pop(1)
0x14: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x15: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x16: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x17: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x18: Push((int) 10)
0x19: Push((float)1.0)
0x1a: @ SetTimer(Stack[-2], Stack[-1])
0x1b: Pop(2)
0x1c: PushEmpty()
0x1d: Call2 0x4b

0x1e: Pop(0)
0x1f: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x20: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x21: Push((int) 10)
0x22: @ KillTimer(Stack[-1])
0x23: Pop(1)
0x24: Return(); Pop(0)

0x25: PushEmpty(float, float)
0x26: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x27: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x28: Stack[-3] = (bool) 0
0x29: Return(); Pop(2)

0x2a: PushEmpty(float, object)
0x2b: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2c: Call2 0x9c

0x2d: Pop(1)
0x2e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x30: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x31: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x32: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x33: Return(); Pop(2)

0x34: PushEmpty()
0x35: Push((int) 10)
0x36: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x38: PushEmpty(bool)
0x39: Call2 0x25

0x3a: Pop(0)
0x3b: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x3c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3d: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x3e: PushEmpty(object)
0x3f: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x40: Call2 0xa9

0x41: Pop(1)
0x42: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x43: GOTO 0x4a

0x44: Push( Stack[2 + Tasks[-1].StackPointer] )
0x45: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x46: Push("head")
0x47: @ UnlookAsync(Stack[-1])
0x48: Pop(1)
0x49: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4a: Return(); Pop(0)

0x4b: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x4c: @ WaitForAnimEnd()
0x4d: Pop(0)
0x4e: PushEmpty(bool)
0x4f: Call2 0xa4

0x50: Pop(0)
0x51: Pop(1); Push((bool) Stack[-1] == 0)
0x52: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x53: Return(); Pop(14)

0x54: PushEmpty(int)
0x55: Call2 0xbb

0x56: Stack[-8] = Stack[-1]
0x57: Pop(1)
0x58: Stack[-6] = (int) 0
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: Push((int) 5)
0x5c: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: PushEmpty(bool)
0x5f: Call2 0xa4

0x60: Pop(0)
0x61: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x62: Stack[-1] = (bool) 1
0x63: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x64: Push((int) 3)
0x65: @ irand(Stack[-6], Stack[-1])
0x66: Pop(1)
0x67: Push((int) 0)
0x68: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x69: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x6a: Push(Stack[-7])
0x6b: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6c: @ irand(Stack[-4], Stack[-7])
0x6d: Pop(0)
0x6e: Push("all")
0x6f: PushEmpty(string, int)
0x70: Stack[-1] = Stack[-7]
0x71: Call2 0xb4

0x72: Pop(1)
0x73: @ PlayAnimation(Stack[-2], Stack[-1])
0x74: Pop(2)
0x75: @ WaitForAnimEnd(Stack[-3])
0x76: Pop(0)
0x77: Pop(0); Push((bool) Stack[-3] == 0)
0x78: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x79: GOTO 0x97

0x7a: GOTO 0x8c

0x7b: Push((int) 1)
0x7c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: Push((int) 4)
0x7f: @ rand(Stack[-3], Stack[-1])
0x80: Pop(1)
0x81: Push((int) 1)
0x82: Pop(1); Push(Stack[-3] + Stack[-1]);
0x83: @ Sleep(Stack[-1], Stack[-2])
0x84: Pop(1)
0x85: Pop(0); Push((bool) Stack[-1] == 0)
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x97

0x88: GOTO 0x8c

0x89: Push(Stack[-6])
0x8a: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8b: GOTO 0x97

0x8c: PushEmpty(bool)
0x8d: Call2 0x9a

0x8e: Pop(0)
0x8f: Pop(1); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: @ ResetAAS()
0x93: Pop(0)
0x94: Push((int) 1)
0x95: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x96: GOTO 0x59

0x97: @ ResetAAS()
0x98: Pop(0)
0x99: Return(); Pop(14)

0x9a: Stack[-1] = (bool) 1
0x9b: Return(); Pop(0)

0x9c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x9d: @ GetPosition(Stack[-3])
0x9e: Pop(0)
0x9f: @@ GetPosition(Stack[-2])
0xa0: Pop(0)
0xa1: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xa2: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xa3: Return(); Pop(6)

0xa4: PushEmpty(bool, bool)
0xa5: @ IsLoaded(Stack[-1])
0xa6: Pop(0)
0xa7: Stack[-3] = Stack[-1]
0xa8: Return(); Pop(2)

0xa9: PushEmpty(float, cvector, float, cvector)
0xaa: @@ GetEyesHeight(Stack[-2])
0xab: Pop(0)
0xac: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xad: Push(CvectorIndex(Stack[-1], 1))
0xae: Stack[-1] = Stack[-3]
0xaf: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xb0: Push("head")
0xb1: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xb2: Pop(1)
0xb3: Return(); Pop(4)

0xb4: PushEmpty(string, string)
0xb5: Stack[-1] = "idle"
0xb6: Push(Stack[-3])
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xb9: Stack[-4] = Stack[-1]
0xba: Return(); Pop(2)

0xbb: PushEmpty(int, bool, int, bool)
0xbc: Stack[-2] = (int) 0
0xbd: Push("all")
0xbe: PushEmpty(string, int)
0xbf: Stack[-1] = Stack[-5]
0xc0: Call2 0xb4

0xc1: Pop(1)
0xc2: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xc3: Pop(2)
0xc4: Pop(0); Push((bool) Stack[-1] == 0)
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: GOTO 0xca

0xc7: Push((int) 1)
0xc8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xc9: GOTO 0xbd

0xca: Stack[-5] = Stack[-2]
0xcb: Return(); Pop(4)

