GlobalVarCount = 0

Strings:
	W:cleanup
	W:player
	W:head
	W:all
	A:GetPosition
	A:GetEyesHeight
	W:idle
// @pool_raw:63006c00650061006e0075007000000070006c00610079006500720000006800650061006400000061006c006c000000476574506f736974696f6e004765744579657348656967687400690064006c0065000000

Import:
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	sync (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	GetPosition (1 args)
	LookAsync (3 args)
	self (1 args)
	HasAnimation (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_26 Op = 0x33 Vars = (string)
		EVENT_5 Op = 0x3b Vars = ()
		EVENT_6 Op = 0x40 Vars = ()
		EVENT_7 Op = 0x7f Vars = (int)


0x0: PushEmpty(float, float)
0x1: Stack[-2] = (int) 200
0x2: Stack[-1] = (int) 100
0x3: Call2 0x6

0x4: Pop(2)
0x5: Return(); Pop(0)

0x6: PushEmpty(float, float)
0x7: PushEmpty(bool)
0x8: Call2 0x102

0x9: Pop(0)
0xa: Pop(1); Push((bool) Stack[-1] == 0)
0xb: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0xc: @ Hold()
0xd: Pop(0)
0xe: GOTO 0x7

0xf: Push((int) 3)
0x10: @ rand(Stack[-2], Stack[-1])
0x11: Pop(1)
0x12: Push((int) 3)
0x13: Pop(1); Push(Stack[-2] + Stack[-1]);
0x14: @ Sleep(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(float, float)
0x17: Stack[-6] = Stack[-2]
0x18: Stack[-5] = Stack[-1]
0x19: Call2 0x55

0x1a: Pop(2)
0x1b: @ sync()
0x1c: Pop(0)
0x1d: GOTO 0x7

0x1e: Return(); Pop(2)

0x1f: PushEmpty(bool, bool)
0x20: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x21: @ IsLoaded(Stack[-1])
0x22: Pop(0)
0x23: PushEmpty(bool)
0x24: Stack[-1] = (bool) 0
0x25: Pop(0); Push((bool) Stack[-2] == 0)
0x26: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x27: PushEmpty(bool)
0x28: Call2 0x53

0x29: Pop(0)
0x2a: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x2b: Stack[-1] = (bool) 1
0x2c: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2d: PushEmpty(object)
0x2e: Call2 0x112

0x2f: Pop(0)
0x30: @ RemoveActor(Stack[-1])
0x31: Pop(1)
0x32: Return(); Pop(2)

0x33: PushEmpty()
0x34: Push("cleanup") // @poff=0
0x35: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x37: PushEmpty()
0x38: Call2 0x1f

0x39: Pop(0)
0x3a: Return(); Pop(0)

0x3b: @ StopGroup0()
0x3c: Pop(0)
0x3d: @ sync()
0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: PushEmpty()
0x41: Call2 0x96

0x42: Pop(0)
0x43: PushEmpty(bool)
0x44: Stack[-1] = (bool) 0
0x45: Push( Stack[5 + Tasks[-1].StackPointer] )
0x46: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x47: PushEmpty(bool)
0x48: Call2 0x53

0x49: Pop(0)
0x4a: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x4b: Stack[-1] = (bool) 1
0x4c: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4d: PushEmpty(object)
0x4e: Call2 0x112

0x4f: Pop(0)
0x50: @ RemoveActor(Stack[-1])
0x51: Pop(1)
0x52: Return(); Pop(0)

0x53: Stack[-1] = (bool) 1
0x54: Return(); Pop(0)

0x55: PushEmpty()
0x56: PushEmpty(bool)
0x57: Call2 0x102

0x58: Pop(0)
0x59: Pop(1); Push((bool) Stack[-1] == 0)
0x5a: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x5b: Return(); Pop(0)

0x5c: Push("player") // @poff=16
0x5d: @ FindActor(Stack[-4]T, Stack[-1])
0x5e: Pop(1)
0x5f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x60: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x61: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x62: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x63: Push((int) 10)
0x64: Push((float)1.0)
0x65: @ SetTimer(Stack[-2], Stack[-1])
0x66: Pop(2)
0x67: PushEmpty()
0x68: Call2 0xa4

0x69: Pop(0)
0x6a: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x6b: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6c: Push((int) 10)
0x6d: @ KillTimer(Stack[-1])
0x6e: Pop(1)
0x6f: Return(); Pop(0)

0x70: PushEmpty(float, float)
0x71: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x72: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x73: Stack[-3] = (bool) 0
0x74: Return(); Pop(2)

0x75: PushEmpty(float, object)
0x76: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x77: Call2 0xfa

0x78: Pop(1)
0x79: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x7a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x7b: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7c: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x7d: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x7e: Return(); Pop(2)

0x7f: PushEmpty()
0x80: Push((int) 10)
0x81: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x82: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x83: PushEmpty(bool)
0x84: Call2 0x70

0x85: Pop(0)
0x86: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x87: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x88: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x89: PushEmpty(object)
0x8a: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x8b: Call2 0x107

0x8c: Pop(1)
0x8d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x8e: GOTO 0x95

0x8f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x91: Push("head") // @poff=30
0x92: @ UnlookAsync(Stack[-1])
0x93: Pop(1)
0x94: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x95: Return(); Pop(0)

0x96: PushEmpty()
0x97: Call2 0xf5

0x98: Pop(0)
0x99: Push((int) 10)
0x9a: @ KillTimer(Stack[-1])
0x9b: Pop(1)
0x9c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9e: Push("head") // @poff=30
0x9f: @ UnlookAsync(Stack[-1])
0xa0: Pop(1)
0xa1: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xa2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa3: Return(); Pop(0)

0xa4: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xa5: @ WaitForAnimEnd()
0xa6: Pop(0)
0xa7: PushEmpty(bool)
0xa8: Call2 0x102

0xa9: Pop(0)
0xaa: Pop(1); Push((bool) Stack[-1] == 0)
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: Return(); Pop(14)

0xad: PushEmpty(int)
0xae: Call2 0x11f

0xaf: Stack[-1] = Stack[-8]
0xb0: Pop(1)
0xb1: Stack[-6] = (int) 0
0xb2: PushEmpty(bool)
0xb3: Stack[-1] = (bool) 0
0xb4: Push((int) 5)
0xb5: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: PushEmpty(bool)
0xb8: Call2 0x102

0xb9: Pop(0)
0xba: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xbb: Stack[-1] = (bool) 1
0xbc: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xbd: Push((int) 3)
0xbe: @ irand(Stack[-6], Stack[-1])
0xbf: Pop(1)
0xc0: Push((int) 0)
0xc1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xc3: Push(Stack[-7])
0xc4: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc5: @ irand(Stack[-4], Stack[-7])
0xc6: Pop(0)
0xc7: Push("all") // @poff=40
0xc8: PushEmpty(string, int)
0xc9: Stack[-7] = Stack[-1]
0xca: Call2 0x118

0xcb: Pop(1)
0xcc: @ PlayAnimation(Stack[-2], Stack[-1])
0xcd: Pop(2)
0xce: @ WaitForAnimEnd(Stack[-3])
0xcf: Pop(0)
0xd0: Pop(0); Push((bool) Stack[-3] == 0)
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: GOTO 0xf0

0xd3: GOTO 0xe5

0xd4: Push((int) 1)
0xd5: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xd7: Push((int) 4)
0xd8: @ rand(Stack[-3], Stack[-1])
0xd9: Pop(1)
0xda: Push((int) 1)
0xdb: Pop(1); Push(Stack[-3] + Stack[-1]);
0xdc: @ Sleep(Stack[-1], Stack[-2])
0xdd: Pop(1)
0xde: Pop(0); Push((bool) Stack[-1] == 0)
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: GOTO 0xf0

0xe1: GOTO 0xe5

0xe2: Push(Stack[-6])
0xe3: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe4: GOTO 0xf0

0xe5: PushEmpty(bool)
0xe6: Call2 0xf3

0xe7: Pop(0)
0xe8: Pop(1); Push((bool) Stack[-1] == 0)
0xe9: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xea: GOTO 0xf0

0xeb: @ ResetAAS()
0xec: Pop(0)
0xed: Push((int) 1)
0xee: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xef: GOTO 0xb2

0xf0: @ ResetAAS()
0xf1: Pop(0)
0xf2: Return(); Pop(14)

0xf3: Stack[-1] = (bool) 1
0xf4: Return(); Pop(0)

0xf5: @ StopAnimation()
0xf6: Pop(0)
0xf7: @ StopGroup0()
0xf8: Pop(0)
0xf9: Return(); Pop(0)

0xfa: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xfb: @ GetPosition(Stack[-3])
0xfc: Pop(0)
0xfd: @@ GetPosition(Stack[-2]); Obj=7 // @poff=48
0xfe: Pop(0)
0xff: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x100: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x101: Return(); Pop(6)

0x102: PushEmpty(bool, bool)
0x103: @ IsLoaded(Stack[-1])
0x104: Pop(0)
0x105: Stack[-1] = Stack[-3]
0x106: Return(); Pop(2)

0x107: PushEmpty(float, cvector, float, cvector)
0x108: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=60
0x109: Pop(0)
0x10a: Stack[-1] = [0.0, 0.0, 0.0]
0x10b: Push(CvectorIndex(Stack[-1], 1))
0x10c: Stack[-3] = Stack[-1]
0x10d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x10e: Push("head") // @poff=30
0x10f: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x110: Pop(1)
0x111: Return(); Pop(4)

0x112: PushEmpty(object, object)
0x113: @ self(Stack[-1])
0x114: Pop(0)
0x115: Stack[-1] = Stack[-3]
0x116: Return(); Pop(2)

0x117: Stack[-1] = 0
0x118: PushEmpty(string, string)
0x119: Stack[-1] = "idle" // @poff=74
0x11a: Push(Stack[-3])
0x11b: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x11d: Stack[-1] = Stack[-4]
0x11e: Return(); Pop(2)

0x11f: PushEmpty(int, bool, int, bool)
0x120: Stack[-2] = (int) 0
0x121: Push("all") // @poff=40
0x122: PushEmpty(string, int)
0x123: Stack[-5] = Stack[-1]
0x124: Call2 0x118

0x125: Pop(1)
0x126: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x127: Pop(2)
0x128: Pop(0); Push((bool) Stack[-1] == 0)
0x129: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x12a: GOTO 0x12e

0x12b: Push((int) 1)
0x12c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x12d: GOTO 0x121

0x12e: Stack[-2] = Stack[-5]
0x12f: Return(); Pop(4)

