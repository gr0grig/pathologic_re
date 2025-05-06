GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png
	ood6Woman1
	branch

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Sleep (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x104
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x110 Vars = (object)
		EVENT_7 Op = 0x145 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1cd

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x27e

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x27c

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x280

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x282

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x298

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x212

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x89

0x53: Pop(1)
0x54: Push((int) 504001)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x28c

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 504002)
0x5f: Push((int) 4359)
0x60: Push((int) 4357)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 504003)
0x64: Push((int) -1)
0x65: Push((int) 4358)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x284

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x224

0x77: Pop(1)
0x78: GOTO 0x6f

0x79: GOTO 0x88

0x7a: Push("all")
0x7b: Push("idle")
0x7c: @ PlayAnimation(Stack[-2], Stack[-1])
0x7d: Pop(2)
0x7e: @ WaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: Push("all")
0x84: Push("idle")
0x85: @ PlayAnimation(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: GOTO 0x7e

0x88: Return(); Pop(0)

0x89: PushEmpty()
0x8a: PushEmpty(bool)
0x8b: Call2 0x284

0x8c: Pop(0)
0x8d: Pop(1); Push((bool) Stack[-1] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Return(); Pop(0)

0x90: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Return(); Pop(0)

0x93: PushEmpty(string, bool)
0x94: Stack[-2] = Stack[-3]
0x95: Push("")
0x96: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x98: Stack[-1] = (bool) 0
0x99: GOTO 0x9b

0x9a: Stack[-1] = (bool) 1
0x9b: Call2 0x234

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x24e

0xa4: Pop(0)
0xa5: Push((int) 4357)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x286

0xac: Pop(2)
0xad: Push((int) 4356)
0xae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xb0: PushEmpty(string)
0xb1: Stack[-1] = "Neutral"
0xb2: Call2 0x89

0xb3: Pop(1)
0xb4: Push((int) 504001)
0xb5: @@ SetMessage(Stack[-1])
0xb6: Pop(1)
0xb7: @@ ClearReplies()
0xb8: Pop(0)
0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x28c

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 504002)
0xbf: Push((int) 4359)
0xc0: Push((int) 4357)
0xc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2: Pop(3)
0xc3: Push((int) 504003)
0xc4: Push((int) -1)
0xc5: Push((int) 4358)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Push((int) 4359)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call2 0x89

0xcf: Pop(1)
0xd0: Push((int) 504004)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: Push((int) 504005)
0xd6: Push((int) 4362)
0xd7: Push((int) 4360)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Push((int) 504006)
0xdb: Push((int) -1)
0xdc: Push((int) 4361)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Return(); Pop(0)

0xe0: Push((int) 4362)
0xe1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xe3: PushEmpty(string)
0xe4: Stack[-1] = "Neutral"
0xe5: Call2 0x89

0xe6: Pop(1)
0xe7: Push((int) 504007)
0xe8: @@ SetMessage(Stack[-1])
0xe9: Pop(1)
0xea: @@ ClearReplies()
0xeb: Pop(0)
0xec: Push((int) 504008)
0xed: Push((int) -1)
0xee: Push((int) 4363)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Push((int) 504009)
0xf2: Push((int) -1)
0xf3: Push((int) 4364)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Return(); Pop(0)

0xf7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf8: PushEmpty(bool)
0xf9: Call2 0x284

0xfa: Pop(0)
0xfb: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfc: @ lshStopAnimation()
0xfd: Pop(0)
0xfe: GOTO 0x101

0xff: @ StopAnimation()
0x100: Pop(0)
0x101: Return(); Pop(0)

0x102: GOTO 0xa0

0x103: Return(); Pop(0)

0x104: Push((bool) 1)
0x105: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x106: Push((int) 1)
0x107: @ Sleep(Stack[-1])
0x108: Pop(1)
0x109: PushEmpty(float, float)
0x10a: Stack[-2] = (int) 300
0x10b: Stack[-1] = (int) 100
0x10c: Call2 0x11b

0x10d: Pop(2)
0x10e: GOTO 0x104

0x10f: Return(); Pop(0)

0x110: PushEmpty()
0x111: PushEmpty()
0x112: Call2 0x15c

0x113: Pop(0)
0x114: PushEmpty(int, object)
0x115: Stack[-1] = Stack[-3]
0x116: Push(-2, 1); TaskCall(0)
0x117: Call2 0x0

0x118: Pop(-2, 1); TaskReturn
0x119: Pop(2)
0x11a: Return(); Pop(0)

0x11b: PushEmpty()
0x11c: PushEmpty(bool)
0x11d: Call2 0x1c8

0x11e: Pop(0)
0x11f: Pop(1); Push((bool) Stack[-1] == 0)
0x120: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x121: Return(); Pop(0)

0x122: Push("player")
0x123: @ FindActor(Stack[-4], Stack[-1])
0x124: Pop(1)
0x125: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x126: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x127: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x128: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x129: Push((int) 10)
0x12a: Push((float)1.0)
0x12b: @ SetTimer(Stack[-2], Stack[-1])
0x12c: Pop(2)
0x12d: PushEmpty()
0x12e: Call2 0x16a

0x12f: Pop(0)
0x130: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x131: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x132: Push((int) 10)
0x133: @ KillTimer(Stack[-1])
0x134: Pop(1)
0x135: Return(); Pop(0)

0x136: PushEmpty(float, float)
0x137: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x138: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x139: Stack[-3] = (bool) 0
0x13a: Return(); Pop(2)

0x13b: PushEmpty(float, object)
0x13c: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x13d: Call2 0x1c0

0x13e: Pop(1)
0x13f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x140: Push( Stack[2 + Tasks[-1].StackPointer] )
0x141: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x142: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x143: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x144: Return(); Pop(2)

0x145: PushEmpty()
0x146: Push((int) 10)
0x147: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x149: PushEmpty(bool)
0x14a: Call2 0x136

0x14b: Pop(0)
0x14c: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x14d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x14e: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x14f: PushEmpty(object)
0x150: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x151: Call2 0x243

0x152: Pop(1)
0x153: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x154: GOTO 0x15b

0x155: Push( Stack[2 + Tasks[-1].StackPointer] )
0x156: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x157: Push("head")
0x158: @ UnlookAsync(Stack[-1])
0x159: Pop(1)
0x15a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x15b: Return(); Pop(0)

0x15c: PushEmpty()
0x15d: Call2 0x1bb

0x15e: Pop(0)
0x15f: Push((int) 10)
0x160: @ KillTimer(Stack[-1])
0x161: Pop(1)
0x162: Push( Stack[2 + Tasks[-1].StackPointer] )
0x163: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x164: Push("head")
0x165: @ UnlookAsync(Stack[-1])
0x166: Pop(1)
0x167: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x168: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x169: Return(); Pop(0)

0x16a: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x16b: @ WaitForAnimEnd()
0x16c: Pop(0)
0x16d: PushEmpty(bool)
0x16e: Call2 0x1c8

0x16f: Pop(0)
0x170: Pop(1); Push((bool) Stack[-1] == 0)
0x171: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x172: Return(); Pop(14)

0x173: PushEmpty(int)
0x174: Call2 0x26b

0x175: Stack[-8] = Stack[-1]
0x176: Pop(1)
0x177: Stack[-6] = (int) 0
0x178: PushEmpty(bool)
0x179: Stack[-1] = (bool) 0
0x17a: Push((int) 5)
0x17b: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x17d: PushEmpty(bool)
0x17e: Call2 0x1c8

0x17f: Pop(0)
0x180: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x181: Stack[-1] = (bool) 1
0x182: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x183: Push((int) 3)
0x184: @ irand(Stack[-6], Stack[-1])
0x185: Pop(1)
0x186: Push((int) 0)
0x187: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x189: Push(Stack[-7])
0x18a: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x18b: @ irand(Stack[-4], Stack[-7])
0x18c: Pop(0)
0x18d: Push("all")
0x18e: PushEmpty(string, int)
0x18f: Stack[-1] = Stack[-7]
0x190: Call2 0x264

0x191: Pop(1)
0x192: @ PlayAnimation(Stack[-2], Stack[-1])
0x193: Pop(2)
0x194: @ WaitForAnimEnd(Stack[-3])
0x195: Pop(0)
0x196: Pop(0); Push((bool) Stack[-3] == 0)
0x197: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x198: GOTO 0x1b6

0x199: GOTO 0x1ab

0x19a: Push((int) 1)
0x19b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x19d: Push((int) 4)
0x19e: @ rand(Stack[-3], Stack[-1])
0x19f: Pop(1)
0x1a0: Push((int) 1)
0x1a1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1a2: @ Sleep(Stack[-1], Stack[-2])
0x1a3: Pop(1)
0x1a4: Pop(0); Push((bool) Stack[-1] == 0)
0x1a5: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a6: GOTO 0x1b6

0x1a7: GOTO 0x1ab

0x1a8: Push(Stack[-6])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1aa: GOTO 0x1b6

0x1ab: PushEmpty(bool)
0x1ac: Call2 0x1b9

0x1ad: Pop(0)
0x1ae: Pop(1); Push((bool) Stack[-1] == 0)
0x1af: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1b0: GOTO 0x1b6

0x1b1: @ ResetAAS()
0x1b2: Pop(0)
0x1b3: Push((int) 1)
0x1b4: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1b5: GOTO 0x178

0x1b6: @ ResetAAS()
0x1b7: Pop(0)
0x1b8: Return(); Pop(14)

0x1b9: Stack[-1] = (bool) 1
0x1ba: Return(); Pop(0)

0x1bb: @ StopAnimation()
0x1bc: Pop(0)
0x1bd: @ StopGroup0()
0x1be: Pop(0)
0x1bf: Return(); Pop(0)

0x1c0: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1c1: @ GetPosition(Stack[-3])
0x1c2: Pop(0)
0x1c3: @@ GetPosition(Stack[-2])
0x1c4: Pop(0)
0x1c5: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1c6: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1c7: Return(); Pop(6)

0x1c8: PushEmpty(bool, bool)
0x1c9: @ IsLoaded(Stack[-1])
0x1ca: Pop(0)
0x1cb: Stack[-3] = Stack[-1]
0x1cc: Return(); Pop(2)

0x1cd: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1ce: @@ GetPosition(Stack[-8])
0x1cf: Pop(0)
0x1d0: @@ GetEyesHeight(Stack[-9])
0x1d1: Pop(0)
0x1d2: Push(CvectorIndex(Stack[-8], 1))
0x1d3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1d4: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1d5: @ GetPosition(Stack[-7])
0x1d6: Pop(0)
0x1d7: @ GetEyesHeight(Stack[-9])
0x1d8: Pop(0)
0x1d9: Push(CvectorIndex(Stack[-7], 1))
0x1da: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1db: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1dc: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1dd: Push(CvectorIndex(Stack[-6], 1))
0x1de: Stack[-1] = (int) 0
0x1df: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1e0: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1e1: Pop(1); Push(Sqrt(Stack[-1]))
0x1e2: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1e3: Stack[-5] = -Stack[-6]; Pop(0);
0x1e4: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1e5: PushEmpty(cvector, cvector)
0x1e6: Push(CVector(0.0, 1.0, 0.0))
0x1e7: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1e8: Call2 0x255

0x1e9: Pop(1)
0x1ea: Push((int) 25)
0x1eb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1ec: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ed: Push(CVector(0.0, 10.0, 0.0))
0x1ee: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1ef: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1f0: @ IsOverrideActive(Stack[-2])
0x1f1: Pop(0)
0x1f2: Push(Stack[-2])
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f4: Stack[-21] = (bool) 0
0x1f5: Return(); Pop(18)

0x1f6: @ StopWorld()
0x1f7: Pop(0)
0x1f8: Push((bool) 1)
0x1f9: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1fa: Pop(1)
0x1fb: Push(CvectorIndex(Stack[-4], 0))
0x1fc: Push(CvectorIndex(Stack[-5], 2))
0x1fd: @ Rotate(Stack[-2], Stack[-1])
0x1fe: Pop(2)
0x1ff: PushEmpty(bool)
0x200: Call2 0x284

0x201: Pop(0)
0x202: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x203: GOTO 0x20c

0x204: Push("head")
0x205: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x206: Pop(1)
0x207: Push(Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x209: Push("head")
0x20a: @ LookAsyncCamera(Stack[-1])
0x20b: Pop(1)
0x20c: @ CameraWaitForPlayFinish()
0x20d: Pop(0)
0x20e: @ ResumeWorld()
0x20f: Pop(0)
0x210: Stack[-21] = (bool) 1
0x211: Return(); Pop(18)

0x212: PushEmpty(bool, bool)
0x213: Push((bool) 1)
0x214: @ CameraSwitchToNormal(Stack[-1])
0x215: Pop(1)
0x216: PushEmpty(bool)
0x217: Call2 0x284

0x218: Pop(0)
0x219: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x21a: GOTO 0x223

0x21b: Push("head")
0x21c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x21d: Pop(1)
0x21e: Push(Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x220: Push("head")
0x221: @ UnlookAsync(Stack[-1])
0x222: Pop(1)
0x223: Return(); Pop(2)

0x224: PushEmpty(bool, float, float, bool, float, float)
0x225: @ lshHasAnimation(Stack[-3], Stack[-7])
0x226: Pop(0)
0x227: Push(Stack[-3])
0x228: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x229: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x22a: Pop(0)
0x22b: Push((bool) 0)
0x22c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x22d: Pop(1)
0x22e: GOTO 0x233

0x22f: Push("Can't find lsh animation : ")
0x230: Pop(1); Push(Stack[-1] + Stack[-8]);
0x231: @ Trace(Stack[-1])
0x232: Pop(1)
0x233: Return(); Pop(6)

0x234: PushEmpty(bool, float, float, bool, float, float)
0x235: @ lshHasAnimation(Stack[-3], Stack[-8])
0x236: Pop(0)
0x237: Push(Stack[-3])
0x238: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x239: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x23a: Pop(0)
0x23b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x23c: Pop(0)
0x23d: GOTO 0x242

0x23e: Push("Can't find lsh animation : ")
0x23f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x240: @ Trace(Stack[-1])
0x241: Pop(1)
0x242: Return(); Pop(6)

0x243: PushEmpty(float, cvector, float, cvector)
0x244: @@ GetEyesHeight(Stack[-2])
0x245: Pop(0)
0x246: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x247: Push(CvectorIndex(Stack[-1], 1))
0x248: Stack[-1] = Stack[-3]
0x249: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x24a: Push("head")
0x24b: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x24c: Pop(1)
0x24d: Return(); Pop(4)

0x24e: PushEmpty(bool)
0x24f: Call2 0x284

0x250: Pop(0)
0x251: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x252: @ lshStopSpeech()
0x253: Pop(0)
0x254: Return(); Pop(0)

0x255: PushEmpty(float, float)
0x256: Pop(0); Push(Stack[-3] | Stack[-3]);
0x257: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x258: Push((float)0.0)
0x259: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x25a: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x25c: Return(); Pop(2)

0x25d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x25e: Return(); Pop(2)

0x25f: PushEmpty(int, int)
0x260: @ GetVariable(Stack[-3], Stack[-1])
0x261: Pop(0)
0x262: Stack[-4] = Stack[-1]
0x263: Return(); Pop(2)

0x264: PushEmpty(string, string)
0x265: Stack[-1] = "idle"
0x266: Push(Stack[-3])
0x267: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x268: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x269: Stack[-4] = Stack[-1]
0x26a: Return(); Pop(2)

0x26b: PushEmpty(int, bool, int, bool)
0x26c: Stack[-2] = (int) 0
0x26d: Push("all")
0x26e: PushEmpty(string, int)
0x26f: Stack[-1] = Stack[-5]
0x270: Call2 0x264

0x271: Pop(1)
0x272: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x273: Pop(2)
0x274: Pop(0); Push((bool) Stack[-1] == 0)
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: GOTO 0x27a

0x277: Push((int) 1)
0x278: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x279: GOTO 0x26d

0x27a: Stack[-5] = Stack[-2]
0x27b: Return(); Pop(4)

0x27c: Stack[-1] = (int) 515567
0x27d: Return(); Pop(0)

0x27e: Stack[-1] = (int) 503352
0x27f: Return(); Pop(0)

0x280: Stack[-1] = "ui/NPC_Citizen3.png"
0x281: Return(); Pop(0)

0x282: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x283: Return(); Pop(0)

0x284: Stack[-1] = (bool) 0
0x285: Return(); Pop(0)

0x286: PushEmpty()
0x287: Push("ood6Woman1")
0x288: Push((int) 1)
0x289: @ SetVariable(Stack[-2], Stack[-1])
0x28a: Pop(2)
0x28b: Return(); Pop(0)

0x28c: PushEmpty()
0x28d: PushEmpty(int, string)
0x28e: Stack[-1] = "ood6Woman1"
0x28f: Call2 0x25f

0x290: Pop(1)
0x291: Push((int) 0)
0x292: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x293: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x294: Stack[-2] = (bool) 1
0x295: Return(); Pop(0)

0x296: Stack[-2] = (bool) 0
0x297: Return(); Pop(0)

0x298: PushEmpty(int, int)
0x299: Push("branch")
0x29a: @ GetVariable(Stack[-1], Stack[-2])
0x29b: Pop(1)
0x29c: Push((int) 0)
0x29d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29e: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x29f: Stack[-3] = (int) 1
0x2a0: Return(); Pop(2)

0x2a1: GOTO 0x2a7

0x2a2: Push((int) 1)
0x2a3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a5: Stack[-3] = (int) 2
0x2a6: Return(); Pop(2)

0x2a7: Stack[-3] = (int) 3
0x2a8: Return(); Pop(2)

