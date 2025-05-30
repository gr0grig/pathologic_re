GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	cleanup
	restore
	player
	Neutral
	all
	GetPosition
	c
	HasProperty
	GetProperty
	Can't find lsh animation : 
	idle

Import:
	IsLoaded (1 args)
	RemoveActor (1 args)
	Hold (0 args)
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
	StopGroup0 (0 args)
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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	HasAnimation (3 args)

RunOp = 0x2
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x6 Vars = (string)
		EVENT_6 Op = 0x1a Vars = ()
		EVENT_5 Op = 0x27 Vars = ()
		EVENT_7 Op = 0x70 Vars = (int)
		EVENT_45 Op = 0xb2 Vars = (bool)
		EVENT_0 Op = 0xbe Vars = (object)


0x0: PushEmpty()
0x1: Return(); Pop(0)

0x2: PushEmpty()
0x3: Call2 0x2b

0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty(bool, bool)
0x7: Push("cleanup")
0x8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0xa: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xb: @ IsLoaded(Stack[-1])
0xc: Pop(0)
0xd: Pop(0); Push((bool) Stack[-1] == 0)
0xe: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0xf: PushEmpty(object)
0x10: Call2 0x18b

0x11: Pop(0)
0x12: @ RemoveActor(Stack[-1])
0x13: Pop(1)
0x14: GOTO 0x19

0x15: Push("restore")
0x16: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x18: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x19: Return(); Pop(2)

0x1a: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1b: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x1c: PushEmpty(object)
0x1d: Call2 0x18b

0x1e: Pop(0)
0x1f: @ RemoveActor(Stack[-1])
0x20: Pop(1)
0x21: @ Hold()
0x22: Pop(0)
0x23: PushEmpty()
0x24: Call2 0x96

0x25: Pop(0)
0x26: Return(); Pop(0)

0x27: PushEmpty()
0x28: Call2 0xa5

0x29: Pop(0)
0x2a: Return(); Pop(0)

0x2b: PushEmpty(bool)
0x2c: Call2 0x142

0x2d: Pop(0)
0x2e: Pop(1); Push((bool) Stack[-1] == 0)
0x2f: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x30: @ Hold()
0x31: Pop(0)
0x32: @ GetDirection(Stack[-0])
0x33: Pop(0)
0x34: PushEmpty()
0x35: Call2 0xdb

0x36: Pop(0)
0x37: GOTO 0x34

0x38: Return(); Pop(0)

0x39: PushEmpty(object, object)
0x3a: Push("player")
0x3b: @ FindActor(Stack[-2], Stack[-1])
0x3c: Pop(1)
0x3d: Pop(0); Push((bool) Stack[-1] == 0)
0x3e: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3f: Stack[-3] = (bool) 0
0x40: Return(); Pop(2)

0x41: PushEmpty(bool, object)
0x42: Stack[-1] = Stack[-3]
0x43: Call2 0x139

0x44: Stack[-5] = Stack[-2]
0x45: Pop(2)
0x46: Return(); Pop(2)

0x47: Stack[-1] = 0
0x48: Push(CvectorIndex(Stack[-0], 0))
0x49: Push(CvectorIndex(Stack[-0], 2))
0x4a: @ RotateAsync(Stack[-2], Stack[-1])
0x4b: Pop(2)
0x4c: Return(); Pop(0)

0x4d: PushEmpty(object, bool, object, bool)
0x4e: Push("player")
0x4f: @ FindActor(Stack[-3], Stack[-1])
0x50: Pop(1)
0x51: Pop(0); Push((bool) Stack[-2] == 0)
0x52: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x53: Stack[-5] = (bool) 0
0x54: Return(); Pop(4)

0x55: PushEmpty(float, object)
0x56: Stack[-1] = Stack[-4]
0x57: Call2 0x127

0x58: Pop(1)
0x59: Push((float)90000.0)
0x5a: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5c: Stack[-5] = (bool) 0
0x5d: Return(); Pop(4)

0x5e: @ CanSee(Stack[-1], Stack[-2])
0x5f: Pop(0)
0x60: Stack[-5] = Stack[-1]
0x61: Return(); Pop(4)

0x62: Stack[-2] = 0
0x63: PushEmpty(float, float)
0x64: Push((int) 8)
0x65: Push((int) 16)
0x66: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(2)
0x68: Push((int) 10)
0x69: @ SetTimer(Stack[-1], Stack[-2])
0x6a: Pop(1)
0x6b: Return(); Pop(2)

0x6c: Push((int) 10)
0x6d: @ KillTimer(Stack[-1])
0x6e: Pop(1)
0x6f: Return(); Pop(0)

0x70: PushEmpty()
0x71: Push((int) 10)
0x72: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x73: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x74: PushEmpty()
0x75: Call2 0x6c

0x76: Pop(0)
0x77: PushEmpty(bool)
0x78: Stack[-1] = (bool) 0
0x79: PushEmpty(bool)
0x7a: Call2 0x142

0x7b: Pop(0)
0x7c: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7d: PushEmpty(bool)
0x7e: Call2 0x4d

0x7f: Pop(0)
0x80: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x81: Stack[-1] = (bool) 1
0x82: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x83: PushEmpty(bool)
0x84: Call2 0x39

0x85: Pop(0)
0x86: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x87: PushEmpty(bool, object)
0x88: PushEmpty(object)
0x89: Call2 0x18b

0x8a: Stack[-2] = Stack[-1]
0x8b: Pop(1)
0x8c: Call2 0x147

0x8d: Pop(2)
0x8e: GOTO 0x95

0x8f: PushEmpty()
0x90: Call2 0x48

0x91: Pop(0)
0x92: PushEmpty()
0x93: Call2 0x63

0x94: Pop(0)
0x95: Return(); Pop(0)

0x96: PushEmpty()
0x97: Call2 0x122

0x98: Pop(0)
0x99: PushEmpty()
0x9a: Call2 0x6c

0x9b: Pop(0)
0x9c: @ lshStopSpeech()
0x9d: Pop(0)
0x9e: @ lshStopAnimation()
0x9f: Pop(0)
0xa0: @ StopAsync()
0xa1: Pop(0)
0xa2: @ Hold()
0xa3: Pop(0)
0xa4: Return(); Pop(0)

0xa5: @ StopGroup0()
0xa6: Pop(0)
0xa7: PushEmpty()
0xa8: Call2 0x6c

0xa9: Pop(0)
0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x16c

0xad: Pop(1)
0xae: PushEmpty()
0xaf: Call2 0x63

0xb0: Pop(0)
0xb1: Return(); Pop(0)

0xb2: PushEmpty()
0xb3: Push(Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb5: PushEmpty()
0xb6: Call2 0x63

0xb7: Pop(0)
0xb8: GOTO 0xbd

0xb9: PushEmpty(string)
0xba: Stack[-1] = "Neutral"
0xbb: Call2 0x16c

0xbc: Pop(1)
0xbd: Return(); Pop(0)

0xbe: PushEmpty(bool, bool)
0xbf: @ IsOverrideActive(Stack[-1])
0xc0: Pop(0)
0xc1: Pop(0); Push((bool) Stack[-1] == 0)
0xc2: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xc3: EventDisable(0)
0xc4: PushEmpty()
0xc5: Call2 0x122

0xc6: Pop(0)
0xc7: PushEmpty(bool, object)
0xc8: Stack[-1] = Stack[-5]
0xc9: Call2 0x139

0xca: Pop(2)
0xcb: EventEnable(0)
0xcc: PushEmpty(object)
0xcd: Stack[-1] = Stack[-4]
0xce: Call2 0x0

0xcf: Pop(1)
0xd0: PushEmpty(string)
0xd1: Stack[-1] = "Neutral"
0xd2: Call2 0x16c

0xd3: Pop(1)
0xd4: PushEmpty()
0xd5: Call2 0x6c

0xd6: Pop(0)
0xd7: PushEmpty()
0xd8: Call2 0x63

0xd9: Pop(0)
0xda: Return(); Pop(2)

0xdb: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xdc: @ WaitForAnimEnd()
0xdd: Pop(0)
0xde: PushEmpty(bool)
0xdf: Call2 0x142

0xe0: Pop(0)
0xe1: Pop(1); Push((bool) Stack[-1] == 0)
0xe2: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xe3: Return(); Pop(12)

0xe4: PushEmpty(int)
0xe5: Call2 0x198

0xe6: Stack[-7] = Stack[-1]
0xe7: Pop(1)
0xe8: Stack[-5] = (int) 0
0xe9: PushEmpty(bool)
0xea: Stack[-1] = (bool) 0
0xeb: Push((int) 5)
0xec: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xee: PushEmpty(bool)
0xef: Call2 0x142

0xf0: Pop(0)
0xf1: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf2: Stack[-1] = (bool) 1
0xf3: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0xf4: Pop(0); Push((bool) Stack[-6] == 0)
0xf5: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf6: Push((int) 3)
0xf7: @ Sleep(Stack[-1], Stack[-5])
0xf8: Pop(1)
0xf9: Pop(0); Push((bool) Stack[-4] == 0)
0xfa: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xfb: GOTO 0x11d

0xfc: GOTO 0x112

0xfd: @ irand(Stack[-3], Stack[-6])
0xfe: Pop(0)
0xff: Push((int) 5)
0x100: @ irand(Stack[-3], Stack[-1])
0x101: Pop(1)
0x102: Push((int) 0)
0x103: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x105: Stack[-3] = (int) 0
0x106: Push("all")
0x107: PushEmpty(string, int)
0x108: Stack[-1] = Stack[-6]
0x109: Call2 0x191

0x10a: Pop(1)
0x10b: @ PlayAnimation(Stack[-2], Stack[-1])
0x10c: Pop(2)
0x10d: @ WaitForAnimEnd(Stack[-1])
0x10e: Pop(0)
0x10f: Pop(0); Push((bool) Stack[-1] == 0)
0x110: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x111: GOTO 0x11d

0x112: PushEmpty(bool)
0x113: Call2 0x120

0x114: Pop(0)
0x115: Pop(1); Push((bool) Stack[-1] == 0)
0x116: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x117: GOTO 0x11d

0x118: @ ResetAAS()
0x119: Pop(0)
0x11a: Push((int) 1)
0x11b: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x11c: GOTO 0xe9

0x11d: @ ResetAAS()
0x11e: Pop(0)
0x11f: Return(); Pop(12)

0x120: Stack[-1] = (bool) 1
0x121: Return(); Pop(0)

0x122: @ StopAnimation()
0x123: Pop(0)
0x124: @ StopGroup0()
0x125: Pop(0)
0x126: Return(); Pop(0)

0x127: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x128: @ GetPosition(Stack[-3])
0x129: Pop(0)
0x12a: @@ GetPosition(Stack[-2])
0x12b: Pop(0)
0x12c: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x12d: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x12e: Return(); Pop(6)

0x12f: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x130: @ GetPosition(Stack[-3])
0x131: Pop(0)
0x132: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x133: Push(CvectorIndex(Stack[-2], 0))
0x134: Push(CvectorIndex(Stack[-3], 2))
0x135: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x136: Pop(2)
0x137: Stack[-8] = Stack[-1]
0x138: Return(); Pop(6)

0x139: PushEmpty(cvector, cvector)
0x13a: @@ GetPosition(Stack[-1])
0x13b: Pop(0)
0x13c: PushEmpty(bool, cvector)
0x13d: Stack[-1] = Stack[-3]
0x13e: Call2 0x12f

0x13f: Stack[-6] = Stack[-2]
0x140: Pop(2)
0x141: Return(); Pop(2)

0x142: PushEmpty(bool, bool)
0x143: @ IsLoaded(Stack[-1])
0x144: Pop(0)
0x145: Stack[-3] = Stack[-1]
0x146: Return(); Pop(2)

0x147: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x148: Stack[-5] = "c"
0x149: Stack[-4] = (int) 0
0x14a: Push((int) 1)
0x14b: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x14c: Push((int) 1)
0x14d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x14e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x14f: @@ HasProperty(Stack[-1], Stack[-4])
0x150: Pop(1)
0x151: Pop(0); Push((bool) Stack[-3] == 0)
0x152: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x153: GOTO 0x157

0x154: Push((int) 1)
0x155: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x156: GOTO 0x14a

0x157: Pop(0); Push((bool) Stack[-4] == 0)
0x158: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x159: Stack[-12] = (bool) 0
0x15a: Return(); Pop(10)

0x15b: Stack[-2] = (int) 0
0x15c: Push((int) 1)
0x15d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15f: @ irand(Stack[-2], Stack[-4])
0x160: Pop(0)
0x161: Push((int) 1)
0x162: Pop(1); Push(Stack[-3] + Stack[-1]);
0x163: Pop(1); Push(Stack[-6] + Stack[-1]);
0x164: @@ GetProperty(Stack[-1], Stack[-2])
0x165: Pop(1)
0x166: PushEmpty(bool, string)
0x167: Stack[-1] = Stack[-3]
0x168: Call2 0x17c

0x169: Stack[-14] = Stack[-2]
0x16a: Pop(2)
0x16b: Return(); Pop(10)

0x16c: PushEmpty(bool, float, float, bool, float, float)
0x16d: @ lshHasAnimation(Stack[-3], Stack[-7])
0x16e: Pop(0)
0x16f: Push(Stack[-3])
0x170: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x171: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x172: Pop(0)
0x173: Push((bool) 0)
0x174: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(1)
0x176: GOTO 0x17b

0x177: Push("Can't find lsh animation : ")
0x178: Pop(1); Push(Stack[-1] + Stack[-8]);
0x179: @ Trace(Stack[-1])
0x17a: Pop(1)
0x17b: Return(); Pop(6)

0x17c: PushEmpty(bool, bool)
0x17d: PushEmpty(bool)
0x17e: Call2 0x1a9

0x17f: Pop(0)
0x180: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x181: @ lshHasSpeech(Stack[-1], Stack[-3])
0x182: Pop(0)
0x183: Push(Stack[-1])
0x184: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x185: @ lshPlaySpeech(Stack[-3])
0x186: Pop(0)
0x187: Stack[-4] = (bool) 1
0x188: Return(); Pop(2)

0x189: Stack[-4] = (bool) 0
0x18a: Return(); Pop(2)

0x18b: PushEmpty(object, object)
0x18c: @ self(Stack[-1])
0x18d: Pop(0)
0x18e: Stack[-3] = Stack[-1]
0x18f: Return(); Pop(2)

0x190: Stack[-1] = 0
0x191: PushEmpty(string, string)
0x192: Stack[-1] = "idle"
0x193: Push(Stack[-3])
0x194: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x195: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x196: Stack[-4] = Stack[-1]
0x197: Return(); Pop(2)

0x198: PushEmpty(int, bool, int, bool)
0x199: Stack[-2] = (int) 0
0x19a: Push("all")
0x19b: PushEmpty(string, int)
0x19c: Stack[-1] = Stack[-5]
0x19d: Call2 0x191

0x19e: Pop(1)
0x19f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1a0: Pop(2)
0x1a1: Pop(0); Push((bool) Stack[-1] == 0)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a3: GOTO 0x1a7

0x1a4: Push((int) 1)
0x1a5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1a6: GOTO 0x19a

0x1a7: Stack[-5] = Stack[-2]
0x1a8: Return(); Pop(4)

0x1a9: Stack[-1] = (bool) 1
0x1aa: Return(); Pop(0)

