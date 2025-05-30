GlobalVarCount = 0

Strings:
	player
	head
	all
	GetPosition
	GetEyesHeight
	idle
	quest_d2_02
	driver_unload

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
	Trigger (2 args)
	HasAnimation (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0xa Vars = ()
		EVENT_7 Op = 0x35 Vars = (int)

Events:
EVENT_6 Op = 0xd9 Vars = ()

0x0: PushEmpty(float, float)
0x1: Stack[-2] = (int) 300
0x2: Stack[-1] = (int) 100
0x3: Call2 0xb

0x4: Pop(2)
0x5: Push((int) 3)
0x6: @ Sleep(Stack[-1])
0x7: Pop(1)
0x8: GOTO 0x0

0x9: Return(); Pop(0)

0xa: Return(); Pop(0)

0xb: PushEmpty()
0xc: PushEmpty(bool)
0xd: Call2 0xa5

0xe: Pop(0)
0xf: Pop(1); Push((bool) Stack[-1] == 0)
0x10: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x11: Return(); Pop(0)

0x12: Push("player")
0x13: @ FindActor(Stack[-4], Stack[-1])
0x14: Pop(1)
0x15: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x16: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x17: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x18: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x19: Push((int) 10)
0x1a: Push((float)1.0)
0x1b: @ SetTimer(Stack[-2], Stack[-1])
0x1c: Pop(2)
0x1d: PushEmpty()
0x1e: Call2 0x4c

0x1f: Pop(0)
0x20: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x21: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x22: Push((int) 10)
0x23: @ KillTimer(Stack[-1])
0x24: Pop(1)
0x25: Return(); Pop(0)

0x26: PushEmpty(float, float)
0x27: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x28: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x29: Stack[-3] = (bool) 0
0x2a: Return(); Pop(2)

0x2b: PushEmpty(float, object)
0x2c: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2d: Call2 0x9d

0x2e: Pop(1)
0x2f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x30: Push( Stack[2 + Tasks[-1].StackPointer] )
0x31: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x32: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x33: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x34: Return(); Pop(2)

0x35: PushEmpty()
0x36: Push((int) 10)
0x37: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x39: PushEmpty(bool)
0x3a: Call2 0x26

0x3b: Pop(0)
0x3c: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x3d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3e: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x41: Call2 0xaa

0x42: Pop(1)
0x43: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x44: GOTO 0x4b

0x45: Push( Stack[2 + Tasks[-1].StackPointer] )
0x46: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x47: Push("head")
0x48: @ UnlookAsync(Stack[-1])
0x49: Pop(1)
0x4a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4b: Return(); Pop(0)

0x4c: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x4d: @ WaitForAnimEnd()
0x4e: Pop(0)
0x4f: PushEmpty(bool)
0x50: Call2 0xa5

0x51: Pop(0)
0x52: Pop(1); Push((bool) Stack[-1] == 0)
0x53: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x54: Return(); Pop(14)

0x55: PushEmpty(int)
0x56: Call2 0xc8

0x57: Stack[-8] = Stack[-1]
0x58: Pop(1)
0x59: Stack[-6] = (int) 0
0x5a: PushEmpty(bool)
0x5b: Stack[-1] = (bool) 0
0x5c: Push((int) 5)
0x5d: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x5e: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5f: PushEmpty(bool)
0x60: Call2 0xa5

0x61: Pop(0)
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: Stack[-1] = (bool) 1
0x64: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x65: Push((int) 3)
0x66: @ irand(Stack[-6], Stack[-1])
0x67: Pop(1)
0x68: Push((int) 0)
0x69: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x6a: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x6b: Push(Stack[-7])
0x6c: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x6d: @ irand(Stack[-4], Stack[-7])
0x6e: Pop(0)
0x6f: Push("all")
0x70: PushEmpty(string, int)
0x71: Stack[-1] = Stack[-7]
0x72: Call2 0xc1

0x73: Pop(1)
0x74: @ PlayAnimation(Stack[-2], Stack[-1])
0x75: Pop(2)
0x76: @ WaitForAnimEnd(Stack[-3])
0x77: Pop(0)
0x78: Pop(0); Push((bool) Stack[-3] == 0)
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x98

0x7b: GOTO 0x8d

0x7c: Push((int) 1)
0x7d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x7e: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x7f: Push((int) 4)
0x80: @ rand(Stack[-3], Stack[-1])
0x81: Pop(1)
0x82: Push((int) 1)
0x83: Pop(1); Push(Stack[-3] + Stack[-1]);
0x84: @ Sleep(Stack[-1], Stack[-2])
0x85: Pop(1)
0x86: Pop(0); Push((bool) Stack[-1] == 0)
0x87: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x88: GOTO 0x98

0x89: GOTO 0x8d

0x8a: Push(Stack[-6])
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x98

0x8d: PushEmpty(bool)
0x8e: Call2 0x9b

0x8f: Pop(0)
0x90: Pop(1); Push((bool) Stack[-1] == 0)
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: GOTO 0x98

0x93: @ ResetAAS()
0x94: Pop(0)
0x95: Push((int) 1)
0x96: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x97: GOTO 0x5a

0x98: @ ResetAAS()
0x99: Pop(0)
0x9a: Return(); Pop(14)

0x9b: Stack[-1] = (bool) 1
0x9c: Return(); Pop(0)

0x9d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x9e: @ GetPosition(Stack[-3])
0x9f: Pop(0)
0xa0: @@ GetPosition(Stack[-2])
0xa1: Pop(0)
0xa2: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xa3: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xa4: Return(); Pop(6)

0xa5: PushEmpty(bool, bool)
0xa6: @ IsLoaded(Stack[-1])
0xa7: Pop(0)
0xa8: Stack[-3] = Stack[-1]
0xa9: Return(); Pop(2)

0xaa: PushEmpty(float, cvector, float, cvector)
0xab: @@ GetEyesHeight(Stack[-2])
0xac: Pop(0)
0xad: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xae: Push(CvectorIndex(Stack[-1], 1))
0xaf: Stack[-1] = Stack[-3]
0xb0: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xb1: Push("head")
0xb2: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xb3: Pop(1)
0xb4: Return(); Pop(4)

0xb5: PushEmpty(object, object)
0xb6: @ FindActor(Stack[-1], Stack[-4])
0xb7: Pop(0)
0xb8: Pop(0); Push((bool) Stack[-1] == 0)
0xb9: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xba: Stack[-5] = (bool) 0
0xbb: Return(); Pop(2)

0xbc: @ Trigger(Stack[-1], Stack[-3])
0xbd: Pop(0)
0xbe: Stack[-5] = (bool) 1
0xbf: Return(); Pop(2)

0xc0: Stack[-1] = 0
0xc1: PushEmpty(string, string)
0xc2: Stack[-1] = "idle"
0xc3: Push(Stack[-3])
0xc4: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc5: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xc6: Stack[-4] = Stack[-1]
0xc7: Return(); Pop(2)

0xc8: PushEmpty(int, bool, int, bool)
0xc9: Stack[-2] = (int) 0
0xca: Push("all")
0xcb: PushEmpty(string, int)
0xcc: Stack[-1] = Stack[-5]
0xcd: Call2 0xc1

0xce: Pop(1)
0xcf: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xd0: Pop(2)
0xd1: Pop(0); Push((bool) Stack[-1] == 0)
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: GOTO 0xd7

0xd4: Push((int) 1)
0xd5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xd6: GOTO 0xca

0xd7: Stack[-5] = Stack[-2]
0xd8: Return(); Pop(4)

0xd9: PushEmpty(bool, string, string)
0xda: Stack[-2] = "quest_d2_02"
0xdb: Stack[-1] = "driver_unload"
0xdc: Call2 0xb5

0xdd: Pop(3)
0xde: Return(); Pop(0)

