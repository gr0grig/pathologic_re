GlobalVarCount = 0

Strings:
	player
	all
	head
	GetPosition
	GetEyesHeight
	dance

Import:
	FindActor (2 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	UnlookAsync (1 args)
	Hold (0 args)
	GetPosition (1 args)
	IsLoaded (1 args)
	LookAsync (3 args)
	HasAnimation (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, object) Params = 0
		EVENT_6 Op = 0x47 Vars = ()


0x0: PushEmpty(object, int, int, bool, object, int, int, bool)
0x1: Push("player")
0x2: @ FindActor(Stack[-5], Stack[-1])
0x3: Pop(1)
0x4: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x5: @ WaitForAnimEnd()
0x6: Pop(0)
0x7: PushEmpty(bool)
0x8: Call2 0x53

0x9: Pop(0)
0xa: Pop(1); Push((bool) Stack[-1] == 0)
0xb: IF (Stack[-1] == 0) GOTO 0xd; Pop(1)

0xc: Return(); Pop(8)

0xd: PushEmpty(int)
0xe: Call2 0x63

0xf: Stack[-4] = Stack[-1]
0x10: Pop(1)
0x11: Push(Stack[-3])
0x12: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x13: @ irand(Stack[-2], Stack[-3])
0x14: Pop(0)
0x15: Push("all")
0x16: PushEmpty(string, int)
0x17: Stack[-1] = Stack[-5]
0x18: Call2 0x74

0x19: Pop(1)
0x1a: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b: Pop(2)
0x1c: PushEmpty(bool)
0x1d: Stack[-1] = (bool) 0
0x1e: PushEmpty(bool, object)
0x1f: Stack[-1] = Stack[-7]
0x20: Call2 0x7b

0x21: Pop(1)
0x22: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x23: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x24: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x25: Stack[-1] = (bool) 1
0x26: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x27: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x28: PushEmpty(object)
0x29: Stack[-1] = Stack[-5]
0x2a: Call2 0x58

0x2b: Pop(1)
0x2c: @ WaitForAnimEnd(Stack[-1])
0x2d: Pop(0)
0x2e: Pop(0); Push((bool) Stack[-1] == 0)
0x2f: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x30: GOTO 0x42

0x31: PushEmpty(bool)
0x32: Stack[-1] = (bool) 0
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-7]
0x35: Call2 0x7b

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x39: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3a: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3b: Stack[-1] = (bool) 1
0x3c: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3d: Push("head")
0x3e: @ UnlookAsync(Stack[-1])
0x3f: Pop(1)
0x40: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x41: GOTO 0x11

0x42: @ Hold()
0x43: Pop(0)
0x44: GOTO 0x42

0x45: Return(); Pop(8)

0x46: Stack[-4] = 0
0x47: @ Hold()
0x48: Pop(0)
0x49: GOTO 0x47

0x4a: Return(); Pop(0)

0x4b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4c: @ GetPosition(Stack[-3])
0x4d: Pop(0)
0x4e: @@ GetPosition(Stack[-2])
0x4f: Pop(0)
0x50: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x51: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x52: Return(); Pop(6)

0x53: PushEmpty(bool, bool)
0x54: @ IsLoaded(Stack[-1])
0x55: Pop(0)
0x56: Stack[-3] = Stack[-1]
0x57: Return(); Pop(2)

0x58: PushEmpty(float, cvector, float, cvector)
0x59: @@ GetEyesHeight(Stack[-2])
0x5a: Pop(0)
0x5b: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5c: Push(CvectorIndex(Stack[-1], 1))
0x5d: Stack[-1] = Stack[-3]
0x5e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5f: Push("head")
0x60: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x61: Pop(1)
0x62: Return(); Pop(4)

0x63: PushEmpty(int, bool, int, bool)
0x64: Stack[-2] = (int) 0
0x65: Push("all")
0x66: PushEmpty(string, int)
0x67: Stack[-1] = Stack[-5]
0x68: Call2 0x74

0x69: Pop(1)
0x6a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(2)
0x6c: Pop(0); Push((bool) Stack[-1] == 0)
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x72

0x6f: Push((int) 1)
0x70: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x71: GOTO 0x65

0x72: Stack[-5] = Stack[-2]
0x73: Return(); Pop(4)

0x74: PushEmpty(string, string)
0x75: Stack[-1] = "dance"
0x76: Push(Stack[-3])
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x79: Stack[-4] = Stack[-1]
0x7a: Return(); Pop(2)

0x7b: PushEmpty(float, float)
0x7c: Pop(0); Push((bool) Stack[-3] == 0)
0x7d: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7e: Stack[-4] = (bool) 0
0x7f: Return(); Pop(2)

0x80: PushEmpty(float, object)
0x81: Stack[-1] = Stack[-5]
0x82: Call2 0x4b

0x83: Pop(1)
0x84: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x85: Push((int) 350)
0x86: Stack[-5] = Stack[-2] < Stack[-1]; Pop(1);
0x87: Return(); Pop(2)

