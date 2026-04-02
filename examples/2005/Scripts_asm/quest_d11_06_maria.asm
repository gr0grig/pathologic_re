GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:cleanup
	W:restore
	W:player
	W:Neutral
	W:all
	A:GetPosition
	W:c
	A:HasProperty
	A:GetProperty
	W:idle
// @pool_raw:63006c00650061006e0075007000000072006500730074006f0072006500000070006c00610079006500720000004e00650075007400720061006c00000061006c006c000000476574506f736974696f6e006300000048617350726f70657274790047657450726f706572747900690064006c0065000000

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	lshStopAnimation (0 args)
	StopAsync (0 args)
	IsOverrideActive (1 args)
	WaitForAnimEnd (0 args)
	Sleep (2 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	HasAnimation (3 args)

RunOp = 0xf
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x13 Vars = (string)
		EVENT_6 Op = 0x27 Vars = ()
		EVENT_5 Op = 0x34 Vars = ()
		EVENT_7 Op = 0x83 Vars = (int)
		EVENT_45 Op = 0xc5 Vars = (bool)
		EVENT_0 Op = 0xd1 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x155

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 1) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty()
0xe: Return(); Pop(0)

0xf: PushEmpty()
0x10: Call2 0x38

0x11: Pop(0)
0x12: Return(); Pop(0)

0x13: PushEmpty(bool, bool)
0x14: Push("cleanup") // @poff=0
0x15: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x16: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x17: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x18: @ IsLoaded(Stack[-1])
0x19: Pop(0)
0x1a: Pop(0); Push((bool) Stack[-1] == 0)
0x1b: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x1c: PushEmpty(object)
0x1d: Call2 0x195

0x1e: Pop(0)
0x1f: @ RemoveActor(Stack[-1])
0x20: Pop(1)
0x21: GOTO 0x26

0x22: Push("restore") // @poff=16
0x23: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x24: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x25: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x26: Return(); Pop(2)

0x27: Push( Stack[1 + Tasks[-1].StackPointer] )
0x28: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x29: PushEmpty(object)
0x2a: Call2 0x195

0x2b: Pop(0)
0x2c: @ RemoveActor(Stack[-1])
0x2d: Pop(1)
0x2e: @ Hold()
0x2f: Pop(0)
0x30: PushEmpty()
0x31: Call2 0xa9

0x32: Pop(0)
0x33: Return(); Pop(0)

0x34: PushEmpty()
0x35: Call2 0xb8

0x36: Pop(0)
0x37: Return(); Pop(0)

0x38: PushEmpty(bool)
0x39: Call2 0x155

0x3a: Pop(0)
0x3b: Pop(1); Push((bool) Stack[-1] == 0)
0x3c: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3d: PushEmpty()
0x3e: Push(-0, 0); TaskCall(0)
0x3f: Call2 0x0

0x40: Pop(-0, 0); TaskReturn
0x41: Pop(0)
0x42: PushEmpty()
0x43: Call2 0x34

0x44: Pop(0)
0x45: @ GetDirection(Stack[-0]T)
0x46: Pop(0)
0x47: PushEmpty()
0x48: Call2 0xee

0x49: Pop(0)
0x4a: GOTO 0x47

0x4b: Return(); Pop(0)

0x4c: PushEmpty(object, object)
0x4d: Push("player") // @poff=32
0x4e: @ FindActor(Stack[-2], Stack[-1])
0x4f: Pop(1)
0x50: Pop(0); Push((bool) Stack[-1] == 0)
0x51: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x52: Stack[-3] = (bool) 0
0x53: Return(); Pop(2)

0x54: PushEmpty(bool, object)
0x55: Stack[-3] = Stack[-1]
0x56: Call2 0x14c

0x57: Stack[-2] = Stack[-5]
0x58: Pop(2)
0x59: Return(); Pop(2)

0x5a: Stack[-1] = 0
0x5b: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0x5c: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0x5d: @ RotateAsync(Stack[-2], Stack[-1])
0x5e: Pop(2)
0x5f: Return(); Pop(0)

0x60: PushEmpty(object, bool, object, bool)
0x61: Push("player") // @poff=32
0x62: @ FindActor(Stack[-3], Stack[-1])
0x63: Pop(1)
0x64: Pop(0); Push((bool) Stack[-2] == 0)
0x65: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x66: Stack[-5] = (bool) 0
0x67: Return(); Pop(4)

0x68: PushEmpty(float, object)
0x69: Stack[-4] = Stack[-1]
0x6a: Call2 0x13a

0x6b: Pop(1)
0x6c: Push((float)90000.0)
0x6d: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x6e: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6f: Stack[-5] = (bool) 0
0x70: Return(); Pop(4)

0x71: @ CanSee(Stack[-1], Stack[-2])
0x72: Pop(0)
0x73: Stack[-1] = Stack[-5]
0x74: Return(); Pop(4)

0x75: Stack[-2] = 0
0x76: PushEmpty(float, float)
0x77: Push((int) 8)
0x78: Push((int) 16)
0x79: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x7a: Pop(2)
0x7b: Push((int) 10)
0x7c: @ SetTimer(Stack[-1], Stack[-2])
0x7d: Pop(1)
0x7e: Return(); Pop(2)

0x7f: Push((int) 10)
0x80: @ KillTimer(Stack[-1])
0x81: Pop(1)
0x82: Return(); Pop(0)

0x83: PushEmpty()
0x84: Push((int) 10)
0x85: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x86: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0x87: PushEmpty()
0x88: Call2 0x7f

0x89: Pop(0)
0x8a: PushEmpty(bool)
0x8b: Stack[-1] = (bool) 0
0x8c: PushEmpty(bool)
0x8d: Call2 0x155

0x8e: Pop(0)
0x8f: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x90: PushEmpty(bool)
0x91: Call2 0x60

0x92: Pop(0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Stack[-1] = (bool) 1
0x95: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x96: PushEmpty(bool)
0x97: Call2 0x4c

0x98: Pop(0)
0x99: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9a: PushEmpty(bool, object)
0x9b: PushEmpty(object)
0x9c: Call2 0x195

0x9d: Stack[-1] = Stack[-2]
0x9e: Pop(1)
0x9f: Call2 0x15a

0xa0: Pop(2)
0xa1: GOTO 0xa8

0xa2: PushEmpty()
0xa3: Call2 0x5b

0xa4: Pop(0)
0xa5: PushEmpty()
0xa6: Call2 0x76

0xa7: Pop(0)
0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: Call2 0x135

0xab: Pop(0)
0xac: PushEmpty()
0xad: Call2 0x7f

0xae: Pop(0)
0xaf: @ lshStopSpeech()
0xb0: Pop(0)
0xb1: @ lshStopAnimation()
0xb2: Pop(0)
0xb3: @ StopAsync()
0xb4: Pop(0)
0xb5: @ Hold()
0xb6: Pop(0)
0xb7: Return(); Pop(0)

0xb8: @ StopGroup0()
0xb9: Pop(0)
0xba: PushEmpty()
0xbb: Call2 0x7f

0xbc: Pop(0)
0xbd: PushEmpty(string)
0xbe: Stack[-1] = "Neutral" // @poff=46
0xbf: Call2 0x17f

0xc0: Pop(1)
0xc1: PushEmpty()
0xc2: Call2 0x76

0xc3: Pop(0)
0xc4: Return(); Pop(0)

0xc5: PushEmpty()
0xc6: Push(Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc8: PushEmpty()
0xc9: Call2 0x76

0xca: Pop(0)
0xcb: GOTO 0xd0

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral" // @poff=46
0xce: Call2 0x17f

0xcf: Pop(1)
0xd0: Return(); Pop(0)

0xd1: PushEmpty(bool, bool)
0xd2: @ IsOverrideActive(Stack[-1])
0xd3: Pop(0)
0xd4: Pop(0); Push((bool) Stack[-1] == 0)
0xd5: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xd6: EventDisable(0)
0xd7: PushEmpty()
0xd8: Call2 0x135

0xd9: Pop(0)
0xda: PushEmpty(bool, object)
0xdb: Stack[-5] = Stack[-1]
0xdc: Call2 0x14c

0xdd: Pop(2)
0xde: EventEnable(0)
0xdf: PushEmpty(object)
0xe0: Stack[-4] = Stack[-1]
0xe1: Call2 0xd

0xe2: Pop(1)
0xe3: PushEmpty(string)
0xe4: Stack[-1] = "Neutral" // @poff=46
0xe5: Call2 0x17f

0xe6: Pop(1)
0xe7: PushEmpty()
0xe8: Call2 0x7f

0xe9: Pop(0)
0xea: PushEmpty()
0xeb: Call2 0x76

0xec: Pop(0)
0xed: Return(); Pop(2)

0xee: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xef: @ WaitForAnimEnd()
0xf0: Pop(0)
0xf1: PushEmpty(bool)
0xf2: Call2 0x155

0xf3: Pop(0)
0xf4: Pop(1); Push((bool) Stack[-1] == 0)
0xf5: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf6: Return(); Pop(12)

0xf7: PushEmpty(int)
0xf8: Call2 0x1a2

0xf9: Stack[-1] = Stack[-7]
0xfa: Pop(1)
0xfb: Stack[-5] = (int) 0
0xfc: PushEmpty(bool)
0xfd: Stack[-1] = (bool) 0
0xfe: Push((int) 5)
0xff: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x100: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x101: PushEmpty(bool)
0x102: Call2 0x155

0x103: Pop(0)
0x104: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x105: Stack[-1] = (bool) 1
0x106: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x107: Pop(0); Push((bool) Stack[-6] == 0)
0x108: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x109: Push((int) 3)
0x10a: @ Sleep(Stack[-1], Stack[-5])
0x10b: Pop(1)
0x10c: Pop(0); Push((bool) Stack[-4] == 0)
0x10d: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10e: GOTO 0x130

0x10f: GOTO 0x125

0x110: @ irand(Stack[-3], Stack[-6])
0x111: Pop(0)
0x112: Push((int) 5)
0x113: @ irand(Stack[-3], Stack[-1])
0x114: Pop(1)
0x115: Push((int) 0)
0x116: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x118: Stack[-3] = (int) 0
0x119: Push("all") // @poff=62
0x11a: PushEmpty(string, int)
0x11b: Stack[-6] = Stack[-1]
0x11c: Call2 0x19b

0x11d: Pop(1)
0x11e: @ PlayAnimation(Stack[-2], Stack[-1])
0x11f: Pop(2)
0x120: @ WaitForAnimEnd(Stack[-1])
0x121: Pop(0)
0x122: Pop(0); Push((bool) Stack[-1] == 0)
0x123: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x124: GOTO 0x130

0x125: PushEmpty(bool)
0x126: Call2 0x133

0x127: Pop(0)
0x128: Pop(1); Push((bool) Stack[-1] == 0)
0x129: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x12a: GOTO 0x130

0x12b: @ ResetAAS()
0x12c: Pop(0)
0x12d: Push((int) 1)
0x12e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x12f: GOTO 0xfc

0x130: @ ResetAAS()
0x131: Pop(0)
0x132: Return(); Pop(12)

0x133: Stack[-1] = (bool) 1
0x134: Return(); Pop(0)

0x135: @ StopAnimation()
0x136: Pop(0)
0x137: @ StopGroup0()
0x138: Pop(0)
0x139: Return(); Pop(0)

0x13a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x13b: @ GetPosition(Stack[-3])
0x13c: Pop(0)
0x13d: @@ GetPosition(Stack[-2]); Obj=7 // @poff=70
0x13e: Pop(0)
0x13f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x140: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x141: Return(); Pop(6)

0x142: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x143: @ GetPosition(Stack[-3])
0x144: Pop(0)
0x145: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x146: Push(CvectorIndex(Stack[-2], 0))
0x147: Push(CvectorIndex(Stack[-3], 2))
0x148: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x149: Pop(2)
0x14a: Stack[-1] = Stack[-8]
0x14b: Return(); Pop(6)

0x14c: PushEmpty(cvector, cvector)
0x14d: @@ GetPosition(Stack[-1]); Obj=3 // @poff=70
0x14e: Pop(0)
0x14f: PushEmpty(bool, cvector)
0x150: Stack[-3] = Stack[-1]
0x151: Call2 0x142

0x152: Stack[-2] = Stack[-6]
0x153: Pop(2)
0x154: Return(); Pop(2)

0x155: PushEmpty(bool, bool)
0x156: @ IsLoaded(Stack[-1])
0x157: Pop(0)
0x158: Stack[-1] = Stack[-3]
0x159: Return(); Pop(2)

0x15a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x15b: Stack[-5] = "c" // @poff=82
0x15c: Stack[-4] = (int) 0
0x15d: Push((int) 1)
0x15e: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x15f: Push((int) 1)
0x160: Pop(1); Push(Stack[-5] + Stack[-1]);
0x161: Pop(1); Push(Stack[-6] + Stack[-1]);
0x162: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=86
0x163: Pop(1)
0x164: Pop(0); Push((bool) Stack[-3] == 0)
0x165: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x166: GOTO 0x16a

0x167: Push((int) 1)
0x168: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x169: GOTO 0x15d

0x16a: Pop(0); Push((bool) Stack[-4] == 0)
0x16b: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16c: Stack[-12] = (bool) 0
0x16d: Return(); Pop(10)

0x16e: Stack[-2] = (int) 0
0x16f: Push((int) 1)
0x170: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x172: @ irand(Stack[-2], Stack[-4])
0x173: Pop(0)
0x174: Push((int) 1)
0x175: Pop(1); Push(Stack[-3] + Stack[-1]);
0x176: Pop(1); Push(Stack[-6] + Stack[-1]);
0x177: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=98
0x178: Pop(1)
0x179: PushEmpty(bool, string)
0x17a: Stack[-3] = Stack[-1]
0x17b: Call2 0x186

0x17c: Stack[-2] = Stack[-14]
0x17d: Pop(2)
0x17e: Return(); Pop(10)

0x17f: PushEmpty(float, float, float, float)
0x180: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x181: Pop(0)
0x182: Push((bool) 0)
0x183: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(1)
0x185: Return(); Pop(4)

0x186: PushEmpty(bool, bool)
0x187: PushEmpty(bool)
0x188: Call2 0x1b3

0x189: Pop(0)
0x18a: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18b: @ lshHasSpeech(Stack[-1], Stack[-3])
0x18c: Pop(0)
0x18d: Push(Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18f: @ lshPlaySpeech(Stack[-3])
0x190: Pop(0)
0x191: Stack[-4] = (bool) 1
0x192: Return(); Pop(2)

0x193: Stack[-4] = (bool) 0
0x194: Return(); Pop(2)

0x195: PushEmpty(object, object)
0x196: @ self(Stack[-1])
0x197: Pop(0)
0x198: Stack[-1] = Stack[-3]
0x199: Return(); Pop(2)

0x19a: Stack[-1] = 0
0x19b: PushEmpty(string, string)
0x19c: Stack[-1] = "idle" // @poff=110
0x19d: Push(Stack[-3])
0x19e: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1a0: Stack[-1] = Stack[-4]
0x1a1: Return(); Pop(2)

0x1a2: PushEmpty(int, bool, int, bool)
0x1a3: Stack[-2] = (int) 0
0x1a4: Push("all") // @poff=62
0x1a5: PushEmpty(string, int)
0x1a6: Stack[-5] = Stack[-1]
0x1a7: Call2 0x19b

0x1a8: Pop(1)
0x1a9: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1aa: Pop(2)
0x1ab: Pop(0); Push((bool) Stack[-1] == 0)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ad: GOTO 0x1b1

0x1ae: Push((int) 1)
0x1af: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1b0: GOTO 0x1a4

0x1b1: Stack[-2] = Stack[-5]
0x1b2: Return(); Pop(4)

0x1b3: Stack[-1] = (bool) 1
0x1b4: Return(); Pop(0)

