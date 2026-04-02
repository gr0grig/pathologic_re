GlobalVarCount = 1
	G_VAR_0 object 

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
	Sleep (1 args)
	Hold (0 args)
	rand (2 args)
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
		EVENT_26 Op = 0x37 Vars = (string)
		EVENT_5 Op = 0x3f Vars = ()
		EVENT_6 Op = 0x44 Vars = ()
		EVENT_7 Op = 0x83 Vars = (int)


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

0xa: PushEmpty(float, float)
0xb: PushEmpty(bool)
0xc: Call2 0x106

0xd: Pop(0)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0x10: @ Hold()
0x11: Pop(0)
0x12: GOTO 0xb

0x13: Push((int) 3)
0x14: @ rand(Stack[-2], Stack[-1])
0x15: Pop(1)
0x16: Push((int) 3)
0x17: Pop(1); Push(Stack[-2] + Stack[-1]);
0x18: @ Sleep(Stack[-1])
0x19: Pop(1)
0x1a: PushEmpty(float, float)
0x1b: Stack[-6] = Stack[-2]
0x1c: Stack[-5] = Stack[-1]
0x1d: Call2 0x59

0x1e: Pop(2)
0x1f: @ sync()
0x20: Pop(0)
0x21: GOTO 0xb

0x22: Return(); Pop(2)

0x23: PushEmpty(bool, bool)
0x24: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x25: @ IsLoaded(Stack[-1])
0x26: Pop(0)
0x27: PushEmpty(bool)
0x28: Stack[-1] = (bool) 0
0x29: Pop(0); Push((bool) Stack[-2] == 0)
0x2a: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2b: PushEmpty(bool)
0x2c: Call2 0x57

0x2d: Pop(0)
0x2e: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2f: Stack[-1] = (bool) 1
0x30: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x31: PushEmpty(object)
0x32: Call2 0x116

0x33: Pop(0)
0x34: @ RemoveActor(Stack[-1])
0x35: Pop(1)
0x36: Return(); Pop(2)

0x37: PushEmpty()
0x38: Push("cleanup") // @poff=0
0x39: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3b: PushEmpty()
0x3c: Call2 0x23

0x3d: Pop(0)
0x3e: Return(); Pop(0)

0x3f: @ StopGroup0()
0x40: Pop(0)
0x41: @ sync()
0x42: Pop(0)
0x43: Return(); Pop(0)

0x44: PushEmpty()
0x45: Call2 0x9a

0x46: Pop(0)
0x47: PushEmpty(bool)
0x48: Stack[-1] = (bool) 0
0x49: Push( Stack[5 + Tasks[-1].StackPointer] )
0x4a: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4b: PushEmpty(bool)
0x4c: Call2 0x57

0x4d: Pop(0)
0x4e: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4f: Stack[-1] = (bool) 1
0x50: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x51: PushEmpty(object)
0x52: Call2 0x116

0x53: Pop(0)
0x54: @ RemoveActor(Stack[-1])
0x55: Pop(1)
0x56: Return(); Pop(0)

0x57: Stack[-1] = (bool) 1
0x58: Return(); Pop(0)

0x59: PushEmpty()
0x5a: PushEmpty(bool)
0x5b: Call2 0x106

0x5c: Pop(0)
0x5d: Pop(1); Push((bool) Stack[-1] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5f: Return(); Pop(0)

0x60: Push("player") // @poff=16
0x61: @ FindActor(Stack[-4]T, Stack[-1])
0x62: Pop(1)
0x63: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x64: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x65: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x66: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x67: Push((int) 10)
0x68: Push((float)1.0)
0x69: @ SetTimer(Stack[-2], Stack[-1])
0x6a: Pop(2)
0x6b: PushEmpty()
0x6c: Call2 0xa8

0x6d: Pop(0)
0x6e: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x6f: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x70: Push((int) 10)
0x71: @ KillTimer(Stack[-1])
0x72: Pop(1)
0x73: Return(); Pop(0)

0x74: PushEmpty(float, float)
0x75: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x76: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x77: Stack[-3] = (bool) 0
0x78: Return(); Pop(2)

0x79: PushEmpty(float, object)
0x7a: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x7b: Call2 0xfe

0x7c: Pop(1)
0x7d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x7e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x7f: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x80: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x81: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x82: Return(); Pop(2)

0x83: PushEmpty()
0x84: Push((int) 10)
0x85: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x86: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x87: PushEmpty(bool)
0x88: Call2 0x74

0x89: Pop(0)
0x8a: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8b: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x8c: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8d: PushEmpty(object)
0x8e: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x8f: Call2 0x10b

0x90: Pop(1)
0x91: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x92: GOTO 0x99

0x93: Push( Stack[2 + Tasks[-1].StackPointer] )
0x94: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x95: Push("head") // @poff=30
0x96: @ UnlookAsync(Stack[-1])
0x97: Pop(1)
0x98: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Call2 0xf9

0x9c: Pop(0)
0x9d: Push((int) 10)
0x9e: @ KillTimer(Stack[-1])
0x9f: Pop(1)
0xa0: Push( Stack[2 + Tasks[-1].StackPointer] )
0xa1: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa2: Push("head") // @poff=30
0xa3: @ UnlookAsync(Stack[-1])
0xa4: Pop(1)
0xa5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xa6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa7: Return(); Pop(0)

0xa8: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xa9: @ WaitForAnimEnd()
0xaa: Pop(0)
0xab: PushEmpty(bool)
0xac: Call2 0x106

0xad: Pop(0)
0xae: Pop(1); Push((bool) Stack[-1] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: Return(); Pop(14)

0xb1: PushEmpty(int)
0xb2: Call2 0x123

0xb3: Stack[-1] = Stack[-8]
0xb4: Pop(1)
0xb5: Stack[-6] = (int) 0
0xb6: PushEmpty(bool)
0xb7: Stack[-1] = (bool) 0
0xb8: Push((int) 5)
0xb9: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbb: PushEmpty(bool)
0xbc: Call2 0x106

0xbd: Pop(0)
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: Stack[-1] = (bool) 1
0xc0: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xc1: Push((int) 3)
0xc2: @ irand(Stack[-6], Stack[-1])
0xc3: Pop(1)
0xc4: Push((int) 0)
0xc5: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xc7: Push(Stack[-7])
0xc8: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xc9: @ irand(Stack[-4], Stack[-7])
0xca: Pop(0)
0xcb: Push("all") // @poff=40
0xcc: PushEmpty(string, int)
0xcd: Stack[-7] = Stack[-1]
0xce: Call2 0x11c

0xcf: Pop(1)
0xd0: @ PlayAnimation(Stack[-2], Stack[-1])
0xd1: Pop(2)
0xd2: @ WaitForAnimEnd(Stack[-3])
0xd3: Pop(0)
0xd4: Pop(0); Push((bool) Stack[-3] == 0)
0xd5: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd6: GOTO 0xf4

0xd7: GOTO 0xe9

0xd8: Push((int) 1)
0xd9: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xdb: Push((int) 4)
0xdc: @ rand(Stack[-3], Stack[-1])
0xdd: Pop(1)
0xde: Push((int) 1)
0xdf: Pop(1); Push(Stack[-3] + Stack[-1]);
0xe0: @ Sleep(Stack[-1], Stack[-2])
0xe1: Pop(1)
0xe2: Pop(0); Push((bool) Stack[-1] == 0)
0xe3: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe4: GOTO 0xf4

0xe5: GOTO 0xe9

0xe6: Push(Stack[-6])
0xe7: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe8: GOTO 0xf4

0xe9: PushEmpty(bool)
0xea: Call2 0xf7

0xeb: Pop(0)
0xec: Pop(1); Push((bool) Stack[-1] == 0)
0xed: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xee: GOTO 0xf4

0xef: @ ResetAAS()
0xf0: Pop(0)
0xf1: Push((int) 1)
0xf2: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xf3: GOTO 0xb6

0xf4: @ ResetAAS()
0xf5: Pop(0)
0xf6: Return(); Pop(14)

0xf7: Stack[-1] = (bool) 1
0xf8: Return(); Pop(0)

0xf9: @ StopAnimation()
0xfa: Pop(0)
0xfb: @ StopGroup0()
0xfc: Pop(0)
0xfd: Return(); Pop(0)

0xfe: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xff: @ GetPosition(Stack[-3])
0x100: Pop(0)
0x101: @@ GetPosition(Stack[-2]); Obj=7 // @poff=48
0x102: Pop(0)
0x103: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x104: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x105: Return(); Pop(6)

0x106: PushEmpty(bool, bool)
0x107: @ IsLoaded(Stack[-1])
0x108: Pop(0)
0x109: Stack[-1] = Stack[-3]
0x10a: Return(); Pop(2)

0x10b: PushEmpty(float, cvector, float, cvector)
0x10c: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=60
0x10d: Pop(0)
0x10e: Stack[-1] = [0.0, 0.0, 0.0]
0x10f: Push(CvectorIndex(Stack[-1], 1))
0x110: Stack[-3] = Stack[-1]
0x111: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x112: Push("head") // @poff=30
0x113: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x114: Pop(1)
0x115: Return(); Pop(4)

0x116: PushEmpty(object, object)
0x117: @ self(Stack[-1])
0x118: Pop(0)
0x119: Stack[-1] = Stack[-3]
0x11a: Return(); Pop(2)

0x11b: Stack[-1] = 0
0x11c: PushEmpty(string, string)
0x11d: Stack[-1] = "idle" // @poff=74
0x11e: Push(Stack[-3])
0x11f: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x120: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x121: Stack[-1] = Stack[-4]
0x122: Return(); Pop(2)

0x123: PushEmpty(int, bool, int, bool)
0x124: Stack[-2] = (int) 0
0x125: Push("all") // @poff=40
0x126: PushEmpty(string, int)
0x127: Stack[-5] = Stack[-1]
0x128: Call2 0x11c

0x129: Pop(1)
0x12a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x12b: Pop(2)
0x12c: Pop(0); Push((bool) Stack[-1] == 0)
0x12d: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12e: GOTO 0x132

0x12f: Push((int) 1)
0x130: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x131: GOTO 0x125

0x132: Stack[-2] = Stack[-5]
0x133: Return(); Pop(4)

