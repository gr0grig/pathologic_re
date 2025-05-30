GlobalVarCount = 0

Strings:
	cleanup
	all
	idle

Import:
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	sync (0 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	self (1 args)
	HasAnimation (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_26 Op = 0x29 Vars = (string)
		EVENT_5 Op = 0x31 Vars = ()
		EVENT_6 Op = 0x36 Vars = ()


0x0: PushEmpty(float, float)
0x1: PushEmpty(bool)
0x2: Call2 0x99

0x3: Pop(0)
0x4: Pop(1); Push((bool) Stack[-1] == 0)
0x5: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x6: @ Hold()
0x7: Pop(0)
0x8: GOTO 0x1

0x9: Push((int) 3)
0xa: @ rand(Stack[-2], Stack[-1])
0xb: Pop(1)
0xc: Push((int) 3)
0xd: Pop(1); Push(Stack[-2] + Stack[-1]);
0xe: @ Sleep(Stack[-1])
0xf: Pop(1)
0x10: PushEmpty()
0x11: Call2 0x48

0x12: Pop(0)
0x13: GOTO 0x1

0x14: Return(); Pop(2)

0x15: PushEmpty(bool, bool)
0x16: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x17: @ IsLoaded(Stack[-1])
0x18: Pop(0)
0x19: PushEmpty(bool)
0x1a: Stack[-1] = (bool) 0
0x1b: Pop(0); Push((bool) Stack[-2] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1d: PushEmpty(bool)
0x1e: Call2 0x46

0x1f: Pop(0)
0x20: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x21: Stack[-1] = (bool) 1
0x22: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x23: PushEmpty(object)
0x24: Call2 0x9e

0x25: Pop(0)
0x26: @ RemoveActor(Stack[-1])
0x27: Pop(1)
0x28: Return(); Pop(2)

0x29: PushEmpty()
0x2a: Push("cleanup")
0x2b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2d: PushEmpty()
0x2e: Call2 0x15

0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: @ StopGroup0()
0x32: Pop(0)
0x33: @ sync()
0x34: Pop(0)
0x35: Return(); Pop(0)

0x36: PushEmpty(bool)
0x37: Stack[-1] = (bool) 0
0x38: Push( Stack[0 + Tasks[-1].StackPointer] )
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: PushEmpty(bool)
0x3b: Call2 0x46

0x3c: Pop(0)
0x3d: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3e: Stack[-1] = (bool) 1
0x3f: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x40: PushEmpty(object)
0x41: Call2 0x9e

0x42: Pop(0)
0x43: @ RemoveActor(Stack[-1])
0x44: Pop(1)
0x45: Return(); Pop(0)

0x46: Stack[-1] = (bool) 1
0x47: Return(); Pop(0)

0x48: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x49: @ WaitForAnimEnd()
0x4a: Pop(0)
0x4b: PushEmpty(bool)
0x4c: Call2 0x99

0x4d: Pop(0)
0x4e: Pop(1); Push((bool) Stack[-1] == 0)
0x4f: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x50: Return(); Pop(14)

0x51: PushEmpty(int)
0x52: Call2 0xab

0x53: Stack[-8] = Stack[-1]
0x54: Pop(1)
0x55: Stack[-6] = (int) 0
0x56: PushEmpty(bool)
0x57: Stack[-1] = (bool) 0
0x58: Push((int) 5)
0x59: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x5a: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5b: PushEmpty(bool)
0x5c: Call2 0x99

0x5d: Pop(0)
0x5e: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5f: Stack[-1] = (bool) 1
0x60: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x61: Push((int) 3)
0x62: @ irand(Stack[-6], Stack[-1])
0x63: Pop(1)
0x64: Push((int) 0)
0x65: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x66: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x67: Push(Stack[-7])
0x68: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x69: @ irand(Stack[-4], Stack[-7])
0x6a: Pop(0)
0x6b: Push("all")
0x6c: PushEmpty(string, int)
0x6d: Stack[-1] = Stack[-7]
0x6e: Call2 0xa4

0x6f: Pop(1)
0x70: @ PlayAnimation(Stack[-2], Stack[-1])
0x71: Pop(2)
0x72: @ WaitForAnimEnd(Stack[-3])
0x73: Pop(0)
0x74: Pop(0); Push((bool) Stack[-3] == 0)
0x75: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x76: GOTO 0x94

0x77: GOTO 0x89

0x78: Push((int) 1)
0x79: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: Push((int) 4)
0x7c: @ rand(Stack[-3], Stack[-1])
0x7d: Pop(1)
0x7e: Push((int) 1)
0x7f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x80: @ Sleep(Stack[-1], Stack[-2])
0x81: Pop(1)
0x82: Pop(0); Push((bool) Stack[-1] == 0)
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x94

0x85: GOTO 0x89

0x86: Push(Stack[-6])
0x87: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x88: GOTO 0x94

0x89: PushEmpty(bool)
0x8a: Call2 0x97

0x8b: Pop(0)
0x8c: Pop(1); Push((bool) Stack[-1] == 0)
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: @ ResetAAS()
0x90: Pop(0)
0x91: Push((int) 1)
0x92: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x93: GOTO 0x56

0x94: @ ResetAAS()
0x95: Pop(0)
0x96: Return(); Pop(14)

0x97: Stack[-1] = (bool) 1
0x98: Return(); Pop(0)

0x99: PushEmpty(bool, bool)
0x9a: @ IsLoaded(Stack[-1])
0x9b: Pop(0)
0x9c: Stack[-3] = Stack[-1]
0x9d: Return(); Pop(2)

0x9e: PushEmpty(object, object)
0x9f: @ self(Stack[-1])
0xa0: Pop(0)
0xa1: Stack[-3] = Stack[-1]
0xa2: Return(); Pop(2)

0xa3: Stack[-1] = 0
0xa4: PushEmpty(string, string)
0xa5: Stack[-1] = "idle"
0xa6: Push(Stack[-3])
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xa9: Stack[-4] = Stack[-1]
0xaa: Return(); Pop(2)

0xab: PushEmpty(int, bool, int, bool)
0xac: Stack[-2] = (int) 0
0xad: Push("all")
0xae: PushEmpty(string, int)
0xaf: Stack[-1] = Stack[-5]
0xb0: Call2 0xa4

0xb1: Pop(1)
0xb2: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb3: Pop(2)
0xb4: Pop(0); Push((bool) Stack[-1] == 0)
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: GOTO 0xba

0xb7: Push((int) 1)
0xb8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xb9: GOTO 0xad

0xba: Stack[-5] = Stack[-2]
0xbb: Return(); Pop(4)

