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
	GetGameTime (1 args)
	SetTimeEvent (2 args)
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
		EVENT_0 Op = 0x15 Vars = (object)
		EVENT_9 Op = 0x1a Vars = (int, float)
		EVENT_26 Op = 0x4d Vars = (string)
		EVENT_5 Op = 0x55 Vars = ()
		EVENT_6 Op = 0x5a Vars = ()
		EVENT_7 Op = 0x99 Vars = (int)


0x0: PushEmpty(float, float)
0x1: @ GetGameTime(Stack[-1])
0x2: Pop(0)
0x3: Push((int) 24)
0x4: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x5: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x6: PushEmpty(string)
0x7: Stack[-1] = "cleanup" // @poff=0
0x8: Call2 0x4d

0x9: Pop(1)
0xa: GOTO 0xf

0xb: Push((int) 0)
0xc: Push((int) 24)
0xd: @ SetTimeEvent(Stack[-2], Stack[-1])
0xe: Pop(2)
0xf: PushEmpty(float, float)
0x10: Stack[-2] = (int) 300
0x11: Stack[-1] = (int) 100
0x12: Call2 0x20

0x13: Pop(2)
0x14: Return(); Pop(2)

0x15: PushEmpty()
0x16: PushEmpty()
0x17: Call2 0xb0

0x18: Pop(0)
0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(string)
0x1c: Stack[-1] = "cleanup" // @poff=0
0x1d: Call2 0x4d

0x1e: Pop(1)
0x1f: Return(); Pop(0)

0x20: PushEmpty(float, float)
0x21: PushEmpty(bool)
0x22: Call2 0x11c

0x23: Pop(0)
0x24: Pop(1); Push((bool) Stack[-1] == 0)
0x25: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x26: @ Hold()
0x27: Pop(0)
0x28: GOTO 0x21

0x29: Push((int) 3)
0x2a: @ rand(Stack[-2], Stack[-1])
0x2b: Pop(1)
0x2c: Push((int) 3)
0x2d: Pop(1); Push(Stack[-2] + Stack[-1]);
0x2e: @ Sleep(Stack[-1])
0x2f: Pop(1)
0x30: PushEmpty(float, float)
0x31: Stack[-6] = Stack[-2]
0x32: Stack[-5] = Stack[-1]
0x33: Call2 0x6f

0x34: Pop(2)
0x35: @ sync()
0x36: Pop(0)
0x37: GOTO 0x21

0x38: Return(); Pop(2)

0x39: PushEmpty(bool, bool)
0x3a: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x3b: @ IsLoaded(Stack[-1])
0x3c: Pop(0)
0x3d: PushEmpty(bool)
0x3e: Stack[-1] = (bool) 0
0x3f: Pop(0); Push((bool) Stack[-2] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: PushEmpty(bool)
0x42: Call2 0x6d

0x43: Pop(0)
0x44: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x45: Stack[-1] = (bool) 1
0x46: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x47: PushEmpty(object)
0x48: Call2 0x12c

0x49: Pop(0)
0x4a: @ RemoveActor(Stack[-1])
0x4b: Pop(1)
0x4c: Return(); Pop(2)

0x4d: PushEmpty()
0x4e: Push("cleanup") // @poff=0
0x4f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x50: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x51: PushEmpty()
0x52: Call2 0x39

0x53: Pop(0)
0x54: Return(); Pop(0)

0x55: @ StopGroup0()
0x56: Pop(0)
0x57: @ sync()
0x58: Pop(0)
0x59: Return(); Pop(0)

0x5a: PushEmpty()
0x5b: Call2 0xb0

0x5c: Pop(0)
0x5d: PushEmpty(bool)
0x5e: Stack[-1] = (bool) 0
0x5f: Push( Stack[5 + Tasks[-1].StackPointer] )
0x60: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x61: PushEmpty(bool)
0x62: Call2 0x6d

0x63: Pop(0)
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Stack[-1] = (bool) 1
0x66: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x67: PushEmpty(object)
0x68: Call2 0x12c

0x69: Pop(0)
0x6a: @ RemoveActor(Stack[-1])
0x6b: Pop(1)
0x6c: Return(); Pop(0)

0x6d: Stack[-1] = (bool) 1
0x6e: Return(); Pop(0)

0x6f: PushEmpty()
0x70: PushEmpty(bool)
0x71: Call2 0x11c

0x72: Pop(0)
0x73: Pop(1); Push((bool) Stack[-1] == 0)
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: Return(); Pop(0)

0x76: Push("player") // @poff=16
0x77: @ FindActor(Stack[-4]T, Stack[-1])
0x78: Pop(1)
0x79: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x7a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7b: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x7c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x7d: Push((int) 10)
0x7e: Push((float)1.0)
0x7f: @ SetTimer(Stack[-2], Stack[-1])
0x80: Pop(2)
0x81: PushEmpty()
0x82: Call2 0xbe

0x83: Pop(0)
0x84: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x85: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x86: Push((int) 10)
0x87: @ KillTimer(Stack[-1])
0x88: Pop(1)
0x89: Return(); Pop(0)

0x8a: PushEmpty(float, float)
0x8b: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x8c: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8d: Stack[-3] = (bool) 0
0x8e: Return(); Pop(2)

0x8f: PushEmpty(float, object)
0x90: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x91: Call2 0x114

0x92: Pop(1)
0x93: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x94: Push( Stack[2 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x97: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x98: Return(); Pop(2)

0x99: PushEmpty()
0x9a: Push((int) 10)
0x9b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0x9d: PushEmpty(bool)
0x9e: Call2 0x8a

0x9f: Pop(0)
0xa0: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa1: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: PushEmpty(object)
0xa4: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0xa5: Call2 0x121

0xa6: Pop(1)
0xa7: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xa8: GOTO 0xaf

0xa9: Push( Stack[2 + Tasks[-1].StackPointer] )
0xaa: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xab: Push("head") // @poff=30
0xac: @ UnlookAsync(Stack[-1])
0xad: Pop(1)
0xae: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xaf: Return(); Pop(0)

0xb0: PushEmpty()
0xb1: Call2 0x10f

0xb2: Pop(0)
0xb3: Push((int) 10)
0xb4: @ KillTimer(Stack[-1])
0xb5: Pop(1)
0xb6: Push( Stack[2 + Tasks[-1].StackPointer] )
0xb7: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb8: Push("head") // @poff=30
0xb9: @ UnlookAsync(Stack[-1])
0xba: Pop(1)
0xbb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xbc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xbd: Return(); Pop(0)

0xbe: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xbf: @ WaitForAnimEnd()
0xc0: Pop(0)
0xc1: PushEmpty(bool)
0xc2: Call2 0x11c

0xc3: Pop(0)
0xc4: Pop(1); Push((bool) Stack[-1] == 0)
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: Return(); Pop(14)

0xc7: PushEmpty(int)
0xc8: Call2 0x139

0xc9: Stack[-1] = Stack[-8]
0xca: Pop(1)
0xcb: Stack[-6] = (int) 0
0xcc: PushEmpty(bool)
0xcd: Stack[-1] = (bool) 0
0xce: Push((int) 5)
0xcf: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd1: PushEmpty(bool)
0xd2: Call2 0x11c

0xd3: Pop(0)
0xd4: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd5: Stack[-1] = (bool) 1
0xd6: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xd7: Push((int) 3)
0xd8: @ irand(Stack[-6], Stack[-1])
0xd9: Pop(1)
0xda: Push((int) 0)
0xdb: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xdd: Push(Stack[-7])
0xde: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xdf: @ irand(Stack[-4], Stack[-7])
0xe0: Pop(0)
0xe1: Push("all") // @poff=40
0xe2: PushEmpty(string, int)
0xe3: Stack[-7] = Stack[-1]
0xe4: Call2 0x132

0xe5: Pop(1)
0xe6: @ PlayAnimation(Stack[-2], Stack[-1])
0xe7: Pop(2)
0xe8: @ WaitForAnimEnd(Stack[-3])
0xe9: Pop(0)
0xea: Pop(0); Push((bool) Stack[-3] == 0)
0xeb: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xec: GOTO 0x10a

0xed: GOTO 0xff

0xee: Push((int) 1)
0xef: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf1: Push((int) 4)
0xf2: @ rand(Stack[-3], Stack[-1])
0xf3: Pop(1)
0xf4: Push((int) 1)
0xf5: Pop(1); Push(Stack[-3] + Stack[-1]);
0xf6: @ Sleep(Stack[-1], Stack[-2])
0xf7: Pop(1)
0xf8: Pop(0); Push((bool) Stack[-1] == 0)
0xf9: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xfa: GOTO 0x10a

0xfb: GOTO 0xff

0xfc: Push(Stack[-6])
0xfd: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfe: GOTO 0x10a

0xff: PushEmpty(bool)
0x100: Call2 0x10d

0x101: Pop(0)
0x102: Pop(1); Push((bool) Stack[-1] == 0)
0x103: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x104: GOTO 0x10a

0x105: @ ResetAAS()
0x106: Pop(0)
0x107: Push((int) 1)
0x108: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x109: GOTO 0xcc

0x10a: @ ResetAAS()
0x10b: Pop(0)
0x10c: Return(); Pop(14)

0x10d: Stack[-1] = (bool) 1
0x10e: Return(); Pop(0)

0x10f: @ StopAnimation()
0x110: Pop(0)
0x111: @ StopGroup0()
0x112: Pop(0)
0x113: Return(); Pop(0)

0x114: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x115: @ GetPosition(Stack[-3])
0x116: Pop(0)
0x117: @@ GetPosition(Stack[-2]); Obj=7 // @poff=48
0x118: Pop(0)
0x119: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x11a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x11b: Return(); Pop(6)

0x11c: PushEmpty(bool, bool)
0x11d: @ IsLoaded(Stack[-1])
0x11e: Pop(0)
0x11f: Stack[-1] = Stack[-3]
0x120: Return(); Pop(2)

0x121: PushEmpty(float, cvector, float, cvector)
0x122: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=60
0x123: Pop(0)
0x124: Stack[-1] = [0.0, 0.0, 0.0]
0x125: Push(CvectorIndex(Stack[-1], 1))
0x126: Stack[-3] = Stack[-1]
0x127: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x128: Push("head") // @poff=30
0x129: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x12a: Pop(1)
0x12b: Return(); Pop(4)

0x12c: PushEmpty(object, object)
0x12d: @ self(Stack[-1])
0x12e: Pop(0)
0x12f: Stack[-1] = Stack[-3]
0x130: Return(); Pop(2)

0x131: Stack[-1] = 0
0x132: PushEmpty(string, string)
0x133: Stack[-1] = "idle" // @poff=74
0x134: Push(Stack[-3])
0x135: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x136: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x137: Stack[-1] = Stack[-4]
0x138: Return(); Pop(2)

0x139: PushEmpty(int, bool, int, bool)
0x13a: Stack[-2] = (int) 0
0x13b: Push("all") // @poff=40
0x13c: PushEmpty(string, int)
0x13d: Stack[-5] = Stack[-1]
0x13e: Call2 0x132

0x13f: Pop(1)
0x140: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(2)
0x142: Pop(0); Push((bool) Stack[-1] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x144: GOTO 0x148

0x145: Push((int) 1)
0x146: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x147: GOTO 0x13b

0x148: Stack[-2] = Stack[-5]
0x149: Return(); Pop(4)

