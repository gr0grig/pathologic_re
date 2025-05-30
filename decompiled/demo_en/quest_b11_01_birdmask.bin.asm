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
	cleanup
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png
	oob11Birdmask1
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
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x10f
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x104 Vars = (object)
		EVENT_26 Op = 0x138 Vars = (string)
		EVENT_5 Op = 0x140 Vars = ()
		EVENT_6 Op = 0x145 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x1b2

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x25c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x25a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x25e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x260

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x276

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
0x41: Call2 0x1f6

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
0x54: Push((int) 522006)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x26a

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 523342)
0x5f: Push((int) 24559)
0x60: Push((int) 24558)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 522007)
0x64: Push((int) -1)
0x65: Push((int) 23177)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x262

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x207

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
0x8b: Call2 0x262

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
0x9b: Call2 0x217

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x226

0xa4: Pop(0)
0xa5: Push((int) 24558)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x264

0xac: Pop(2)
0xad: Push((int) 23176)
0xae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xb0: PushEmpty(string)
0xb1: Stack[-1] = "Neutral"
0xb2: Call2 0x89

0xb3: Pop(1)
0xb4: Push((int) 522006)
0xb5: @@ SetMessage(Stack[-1])
0xb6: Pop(1)
0xb7: @@ ClearReplies()
0xb8: Pop(0)
0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x26a

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 523342)
0xbf: Push((int) 24559)
0xc0: Push((int) 24558)
0xc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2: Pop(3)
0xc3: Push((int) 522007)
0xc4: Push((int) -1)
0xc5: Push((int) 23177)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Push((int) 24559)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call2 0x89

0xcf: Pop(1)
0xd0: Push((int) 523343)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: Push((int) 523344)
0xd6: Push((int) 24562)
0xd7: Push((int) 24560)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Push((int) 523345)
0xdb: Push((int) -1)
0xdc: Push((int) 24561)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Return(); Pop(0)

0xe0: Push((int) 24562)
0xe1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xe3: PushEmpty(string)
0xe4: Stack[-1] = "Neutral"
0xe5: Call2 0x89

0xe6: Pop(1)
0xe7: Push((int) 523346)
0xe8: @@ SetMessage(Stack[-1])
0xe9: Pop(1)
0xea: @@ ClearReplies()
0xeb: Pop(0)
0xec: Push((int) 523347)
0xed: Push((int) -1)
0xee: Push((int) 24563)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Push((int) 523348)
0xf2: Push((int) -1)
0xf3: Push((int) 24564)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Return(); Pop(0)

0xf7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf8: PushEmpty(bool)
0xf9: Call2 0x262

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

0x104: PushEmpty()
0x105: PushEmpty()
0x106: Call2 0x1a8

0x107: Pop(0)
0x108: PushEmpty(int, object)
0x109: Stack[-1] = Stack[-3]
0x10a: Push(-2, 1); TaskCall(0)
0x10b: Call2 0x0

0x10c: Pop(-2, 1); TaskReturn
0x10d: Pop(2)
0x10e: Return(); Pop(0)

0x10f: PushEmpty(float, float)
0x110: PushEmpty(bool)
0x111: Call2 0x1ad

0x112: Pop(0)
0x113: Pop(1); Push((bool) Stack[-1] == 0)
0x114: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x115: @ Hold()
0x116: Pop(0)
0x117: GOTO 0x110

0x118: Push((int) 3)
0x119: @ rand(Stack[-2], Stack[-1])
0x11a: Pop(1)
0x11b: Push((int) 3)
0x11c: Pop(1); Push(Stack[-2] + Stack[-1]);
0x11d: @ Sleep(Stack[-1])
0x11e: Pop(1)
0x11f: PushEmpty()
0x120: Call2 0x157

0x121: Pop(0)
0x122: GOTO 0x110

0x123: Return(); Pop(2)

0x124: PushEmpty(bool, bool)
0x125: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x126: @ IsLoaded(Stack[-1])
0x127: Pop(0)
0x128: PushEmpty(bool)
0x129: Stack[-1] = (bool) 0
0x12a: Pop(0); Push((bool) Stack[-2] == 0)
0x12b: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12c: PushEmpty(bool)
0x12d: Call2 0x155

0x12e: Pop(0)
0x12f: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x130: Stack[-1] = (bool) 1
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: PushEmpty(object)
0x133: Call2 0x22d

0x134: Pop(0)
0x135: @ RemoveActor(Stack[-1])
0x136: Pop(1)
0x137: Return(); Pop(2)

0x138: PushEmpty()
0x139: Push("cleanup")
0x13a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13c: PushEmpty()
0x13d: Call2 0x124

0x13e: Pop(0)
0x13f: Return(); Pop(0)

0x140: @ StopGroup0()
0x141: Pop(0)
0x142: @ sync()
0x143: Pop(0)
0x144: Return(); Pop(0)

0x145: PushEmpty(bool)
0x146: Stack[-1] = (bool) 0
0x147: Push( Stack[0 + Tasks[-1].StackPointer] )
0x148: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x149: PushEmpty(bool)
0x14a: Call2 0x155

0x14b: Pop(0)
0x14c: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x14d: Stack[-1] = (bool) 1
0x14e: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x14f: PushEmpty(object)
0x150: Call2 0x22d

0x151: Pop(0)
0x152: @ RemoveActor(Stack[-1])
0x153: Pop(1)
0x154: Return(); Pop(0)

0x155: Stack[-1] = (bool) 1
0x156: Return(); Pop(0)

0x157: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x158: @ WaitForAnimEnd()
0x159: Pop(0)
0x15a: PushEmpty(bool)
0x15b: Call2 0x1ad

0x15c: Pop(0)
0x15d: Pop(1); Push((bool) Stack[-1] == 0)
0x15e: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15f: Return(); Pop(14)

0x160: PushEmpty(int)
0x161: Call2 0x249

0x162: Stack[-8] = Stack[-1]
0x163: Pop(1)
0x164: Stack[-6] = (int) 0
0x165: PushEmpty(bool)
0x166: Stack[-1] = (bool) 0
0x167: Push((int) 5)
0x168: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x169: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16a: PushEmpty(bool)
0x16b: Call2 0x1ad

0x16c: Pop(0)
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: Stack[-1] = (bool) 1
0x16f: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x170: Push((int) 3)
0x171: @ irand(Stack[-6], Stack[-1])
0x172: Pop(1)
0x173: Push((int) 0)
0x174: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x176: Push(Stack[-7])
0x177: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x178: @ irand(Stack[-4], Stack[-7])
0x179: Pop(0)
0x17a: Push("all")
0x17b: PushEmpty(string, int)
0x17c: Stack[-1] = Stack[-7]
0x17d: Call2 0x242

0x17e: Pop(1)
0x17f: @ PlayAnimation(Stack[-2], Stack[-1])
0x180: Pop(2)
0x181: @ WaitForAnimEnd(Stack[-3])
0x182: Pop(0)
0x183: Pop(0); Push((bool) Stack[-3] == 0)
0x184: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x185: GOTO 0x1a3

0x186: GOTO 0x198

0x187: Push((int) 1)
0x188: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x18a: Push((int) 4)
0x18b: @ rand(Stack[-3], Stack[-1])
0x18c: Pop(1)
0x18d: Push((int) 1)
0x18e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x18f: @ Sleep(Stack[-1], Stack[-2])
0x190: Pop(1)
0x191: Pop(0); Push((bool) Stack[-1] == 0)
0x192: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x193: GOTO 0x1a3

0x194: GOTO 0x198

0x195: Push(Stack[-6])
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: GOTO 0x1a3

0x198: PushEmpty(bool)
0x199: Call2 0x1a6

0x19a: Pop(0)
0x19b: Pop(1); Push((bool) Stack[-1] == 0)
0x19c: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19d: GOTO 0x1a3

0x19e: @ ResetAAS()
0x19f: Pop(0)
0x1a0: Push((int) 1)
0x1a1: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1a2: GOTO 0x165

0x1a3: @ ResetAAS()
0x1a4: Pop(0)
0x1a5: Return(); Pop(14)

0x1a6: Stack[-1] = (bool) 1
0x1a7: Return(); Pop(0)

0x1a8: @ StopAnimation()
0x1a9: Pop(0)
0x1aa: @ StopGroup0()
0x1ab: Pop(0)
0x1ac: Return(); Pop(0)

0x1ad: PushEmpty(bool, bool)
0x1ae: @ IsLoaded(Stack[-1])
0x1af: Pop(0)
0x1b0: Stack[-3] = Stack[-1]
0x1b1: Return(); Pop(2)

0x1b2: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1b3: @@ GetPosition(Stack[-8])
0x1b4: Pop(0)
0x1b5: @@ GetEyesHeight(Stack[-9])
0x1b6: Pop(0)
0x1b7: Push(CvectorIndex(Stack[-8], 1))
0x1b8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1b9: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1ba: @ GetPosition(Stack[-7])
0x1bb: Pop(0)
0x1bc: @ GetEyesHeight(Stack[-9])
0x1bd: Pop(0)
0x1be: Push(CvectorIndex(Stack[-7], 1))
0x1bf: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1c0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1c1: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1c2: Push(CvectorIndex(Stack[-6], 1))
0x1c3: Stack[-1] = (int) 0
0x1c4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1c5: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1c6: Pop(1); Push(Sqrt(Stack[-1]))
0x1c7: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1c8: Stack[-5] = -Stack[-6]; Pop(0);
0x1c9: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1ca: PushEmpty(cvector, cvector)
0x1cb: Push(CVector(0.0, 1.0, 0.0))
0x1cc: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1cd: Call2 0x233

0x1ce: Pop(1)
0x1cf: Push((int) 25)
0x1d0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1d1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1d2: Push(CVector(0.0, 10.0, 0.0))
0x1d3: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1d4: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1d5: @ IsOverrideActive(Stack[-2])
0x1d6: Pop(0)
0x1d7: Push(Stack[-2])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d9: Stack[-21] = (bool) 0
0x1da: Return(); Pop(18)

0x1db: @ StopWorld()
0x1dc: Pop(0)
0x1dd: @ CameraTransit(Stack[-3], Stack[-5])
0x1de: Pop(0)
0x1df: Push(CvectorIndex(Stack[-4], 0))
0x1e0: Push(CvectorIndex(Stack[-5], 2))
0x1e1: @ Rotate(Stack[-2], Stack[-1])
0x1e2: Pop(2)
0x1e3: PushEmpty(bool)
0x1e4: Call2 0x262

0x1e5: Pop(0)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e7: GOTO 0x1f0

0x1e8: Push("head")
0x1e9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1ea: Pop(1)
0x1eb: Push(Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ed: Push("head")
0x1ee: @ LookAsyncCamera(Stack[-1])
0x1ef: Pop(1)
0x1f0: @ CameraWaitForPlayFinish()
0x1f1: Pop(0)
0x1f2: @ ResumeWorld()
0x1f3: Pop(0)
0x1f4: Stack[-21] = (bool) 1
0x1f5: Return(); Pop(18)

0x1f6: PushEmpty(bool, bool)
0x1f7: @ CameraSwitchToNormal()
0x1f8: Pop(0)
0x1f9: PushEmpty(bool)
0x1fa: Call2 0x262

0x1fb: Pop(0)
0x1fc: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fd: GOTO 0x206

0x1fe: Push("head")
0x1ff: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x200: Pop(1)
0x201: Push(Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x203: Push("head")
0x204: @ UnlookAsync(Stack[-1])
0x205: Pop(1)
0x206: Return(); Pop(2)

0x207: PushEmpty(bool, float, float, bool, float, float)
0x208: @ lshHasAnimation(Stack[-3], Stack[-7])
0x209: Pop(0)
0x20a: Push(Stack[-3])
0x20b: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x20c: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x20d: Pop(0)
0x20e: Push((bool) 0)
0x20f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x210: Pop(1)
0x211: GOTO 0x216

0x212: Push("Can't find lsh animation : ")
0x213: Pop(1); Push(Stack[-1] + Stack[-8]);
0x214: @ Trace(Stack[-1])
0x215: Pop(1)
0x216: Return(); Pop(6)

0x217: PushEmpty(bool, float, float, bool, float, float)
0x218: @ lshHasAnimation(Stack[-3], Stack[-8])
0x219: Pop(0)
0x21a: Push(Stack[-3])
0x21b: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x21c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x21d: Pop(0)
0x21e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x21f: Pop(0)
0x220: GOTO 0x225

0x221: Push("Can't find lsh animation : ")
0x222: Pop(1); Push(Stack[-1] + Stack[-9]);
0x223: @ Trace(Stack[-1])
0x224: Pop(1)
0x225: Return(); Pop(6)

0x226: PushEmpty(bool)
0x227: Call2 0x262

0x228: Pop(0)
0x229: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22a: @ lshStopSpeech()
0x22b: Pop(0)
0x22c: Return(); Pop(0)

0x22d: PushEmpty(object, object)
0x22e: @ self(Stack[-1])
0x22f: Pop(0)
0x230: Stack[-3] = Stack[-1]
0x231: Return(); Pop(2)

0x232: Stack[-1] = 0
0x233: PushEmpty(float, float)
0x234: Pop(0); Push(Stack[-3] | Stack[-3]);
0x235: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x236: Push((float)0.0)
0x237: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x238: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x239: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x23a: Return(); Pop(2)

0x23b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x23c: Return(); Pop(2)

0x23d: PushEmpty(int, int)
0x23e: @ GetVariable(Stack[-3], Stack[-1])
0x23f: Pop(0)
0x240: Stack[-4] = Stack[-1]
0x241: Return(); Pop(2)

0x242: PushEmpty(string, string)
0x243: Stack[-1] = "idle"
0x244: Push(Stack[-3])
0x245: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x246: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x247: Stack[-4] = Stack[-1]
0x248: Return(); Pop(2)

0x249: PushEmpty(int, bool, int, bool)
0x24a: Stack[-2] = (int) 0
0x24b: Push("all")
0x24c: PushEmpty(string, int)
0x24d: Stack[-1] = Stack[-5]
0x24e: Call2 0x242

0x24f: Pop(1)
0x250: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x251: Pop(2)
0x252: Pop(0); Push((bool) Stack[-1] == 0)
0x253: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x254: GOTO 0x258

0x255: Push((int) 1)
0x256: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x257: GOTO 0x24b

0x258: Stack[-5] = Stack[-2]
0x259: Return(); Pop(4)

0x25a: Stack[-1] = (int) 515571
0x25b: Return(); Pop(0)

0x25c: Stack[-1] = (int) 504029
0x25d: Return(); Pop(0)

0x25e: Stack[-1] = "ui/NPC_bmask.png"
0x25f: Return(); Pop(0)

0x260: Stack[-1] = "ui/NPC_bmask_b.png"
0x261: Return(); Pop(0)

0x262: Stack[-1] = (bool) 0
0x263: Return(); Pop(0)

0x264: PushEmpty()
0x265: Push("oob11Birdmask1")
0x266: Push((int) 1)
0x267: @ SetVariable(Stack[-2], Stack[-1])
0x268: Pop(2)
0x269: Return(); Pop(0)

0x26a: PushEmpty()
0x26b: PushEmpty(int, string)
0x26c: Stack[-1] = "oob11Birdmask1"
0x26d: Call2 0x23d

0x26e: Pop(1)
0x26f: Push((int) 0)
0x270: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x271: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x272: Stack[-2] = (bool) 1
0x273: Return(); Pop(0)

0x274: Stack[-2] = (bool) 0
0x275: Return(); Pop(0)

0x276: PushEmpty(int, int)
0x277: Push("branch")
0x278: @ GetVariable(Stack[-1], Stack[-2])
0x279: Pop(1)
0x27a: Push((int) 0)
0x27b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27d: Stack[-3] = (int) 1
0x27e: Return(); Pop(2)

0x27f: GOTO 0x285

0x280: Push((int) 1)
0x281: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x282: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x283: Stack[-3] = (int) 2
0x284: Return(); Pop(2)

0x285: Stack[-3] = (int) 3
0x286: Return(); Pop(2)

