GlobalVarCount = 0

Strings:
	d1GhostCatHDPathologic
	ACHIEVEMENT_NOTICE
	GetPosition
	player

Import:
	SetTimer (2 args)
	Hold (0 args)
	RemoveActor (1 args)
	GetVariable (2 args)
	UnlockAchievement (1 args)
	FindActor (2 args)
	self (1 args)
	GetGameTime (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_7 Op = 0x8 Vars = (int)


0x0: Push((int) 111)
0x1: Push((int) 1)
0x2: @ SetTimer(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: @ Hold()
0x5: Pop(0)
0x6: GOTO 0x4

0x7: Return(); Pop(0)

0x8: PushEmpty(object, int, int, cvector, cvector, int, object, int, int, cvector, cvector, int)
0x9: PushEmpty(object)
0xa: Call2 0x70

0xb: Stack[-7] = Stack[-1]
0xc: Pop(1)
0xd: PushEmpty(int)
0xe: Call2 0x82

0xf: Stack[-6] = Stack[-1]
0x10: Pop(1)
0x11: PushEmpty(int)
0x12: Call2 0x8b

0x13: Stack[-5] = Stack[-1]
0x14: Pop(1)
0x15: PushEmpty(bool)
0x16: Stack[-1] = (bool) 0
0x17: Push((int) 2)
0x18: Pop(1); Push((bool) Stack[-7] >= Stack[-1])
0x19: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x1a: Push((int) 2)
0x1b: Pop(1); Push((bool) Stack[-6] > Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x1d: Stack[-1] = (bool) 1
0x1e: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x1f: PushEmpty(object)
0x20: Call2 0x77

0x21: Pop(0)
0x22: @ RemoveActor(Stack[-1])
0x23: Pop(1)
0x24: Return(); Pop(12)

0x25: Pop(0); Push((bool) Stack[-6] == 0)
0x26: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x27: Return(); Pop(12)

0x28: PushEmpty(cvector, object)
0x29: Stack[-1] = Stack[-8]
0x2a: Call2 0x6b

0x2b: Stack[-5] = Stack[-2]
0x2c: Pop(2)
0x2d: Push(CvectorIndex(Stack[-2], 0))
0x2e: Stack[-1] = (int) 17738
0x2f: CvectorIndex(Stack[-3], 0) = Stack[-1];
0x30: Push(CvectorIndex(Stack[-2], 1))
0x31: Stack[-1] = (int) 705
0x32: CvectorIndex(Stack[-3], 1) = Stack[-1];
0x33: Push(CvectorIndex(Stack[-2], 2))
0x34: Stack[-1] = (int) 2229
0x35: CvectorIndex(Stack[-3], 2) = Stack[-1];
0x36: Stack[-1] = (int) 0
0x37: Push("d1GhostCatHDPathologic")
0x38: @ GetVariable(Stack[-1], Stack[-2])
0x39: Pop(1)
0x3a: PushEmpty(bool)
0x3b: Stack[-1] = (bool) 0
0x3c: Push((int) 0)
0x3d: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x3e: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x3f: PushEmpty(bool)
0x40: Stack[-1] = (bool) 1
0x41: PushEmpty(bool)
0x42: Stack[-1] = (bool) 0
0x43: Push((int) 1)
0x44: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x45: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x46: Push((int) 21)
0x47: Pop(1); Push((bool) Stack[-8] >= Stack[-1])
0x48: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x49: Stack[-1] = (bool) 1
0x4a: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x4b: PushEmpty(bool)
0x4c: Stack[-1] = (bool) 0
0x4d: Push((int) 2)
0x4e: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x4f: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x50: Push((int) 2)
0x51: Pop(1); Push((bool) Stack[-8] <= Stack[-1])
0x52: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x53: Stack[-1] = (bool) 1
0x54: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x55: Stack[-1] = (bool) 0
0x56: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x57: Stack[-1] = (bool) 1
0x58: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x59: PushEmpty(float, cvector, cvector)
0x5a: Stack[-2] = Stack[-6]
0x5b: Stack[-1] = Stack[-5]
0x5c: Call2 0x7d

0x5d: Pop(2)
0x5e: Push((int) 500)
0x5f: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x60: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x61: Push("ACHIEVEMENT_NOTICE")
0x62: @ UnlockAchievement(Stack[-1])
0x63: Pop(1)
0x64: PushEmpty(object)
0x65: Call2 0x77

0x66: Pop(0)
0x67: @ RemoveActor(Stack[-1])
0x68: Pop(1)
0x69: Return(); Pop(12)

0x6a: Stack[-6] = 0
0x6b: PushEmpty(cvector, cvector)
0x6c: @@ GetPosition(Stack[-1])
0x6d: Pop(0)
0x6e: Stack[-4] = Stack[-1]
0x6f: Return(); Pop(2)

0x70: PushEmpty(object, object)
0x71: Push("player")
0x72: @ FindActor(Stack[-2], Stack[-1])
0x73: Pop(1)
0x74: Stack[-3] = Stack[-1]
0x75: Return(); Pop(2)

0x76: Stack[-1] = 0
0x77: PushEmpty(object, object)
0x78: @ self(Stack[-1])
0x79: Pop(0)
0x7a: Stack[-3] = Stack[-1]
0x7b: Return(); Pop(2)

0x7c: Stack[-1] = 0
0x7d: PushEmpty(cvector, cvector)
0x7e: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x7f: Pop(0); Push(Stack[-1] | Stack[-1]);
0x80: Stack[-6] = Sqrt(Stack[-1]); Pop(1);
0x81: Return(); Pop(2)

0x82: PushEmpty(float, float)
0x83: @ GetGameTime(Stack[-1])
0x84: Pop(0)
0x85: Push((int) 1)
0x86: PushEmpty(int)
0x87: Push((int) 24)
0x88: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x89: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x8a: Return(); Pop(2)

0x8b: PushEmpty(float, float)
0x8c: @ GetGameTime(Stack[-1])
0x8d: Pop(0)
0x8e: PushEmpty(int)
0x8f: Stack[-1] = Stack[-2]
0x90: Push((int) 24)
0x91: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x92: Return(); Pop(2)

