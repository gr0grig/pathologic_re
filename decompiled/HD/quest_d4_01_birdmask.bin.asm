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
	quest_d4_01
	birdmask_done
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	d4q01Whitemask
	pt_d4q01_key1_region
	AddMark
	ShowMap
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png

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
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	IsLoaded (1 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)

RunOp = 0x144
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x14d Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x1bb

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2d0

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2ce

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2d2

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2d4

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2bd

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
0x41: Call2 0x200

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
0x54: Push((int) 509650)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 509651)
0x5a: Push((int) 10621)
0x5b: Push((int) 10620)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 509661)
0x5f: Push((int) 10633)
0x60: Push((int) 10632)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 509665)
0x64: Push((int) 10625)
0x65: Push((int) 10638)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x2d6

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x212

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
0x8b: Call2 0x2d6

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
0x9b: Call2 0x222

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x231

0xa4: Pop(0)
0xa5: Push((int) 10626)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x26b

0xac: Pop(2)
0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x27b

0xb1: Pop(2)
0xb2: Push((int) 10627)
0xb3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb5: PushEmpty(object, object)
0xb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call2 0x26b

0xb9: Pop(2)
0xba: PushEmpty(object, object)
0xbb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd: Call2 0x27b

0xbe: Pop(2)
0xbf: Push((int) 10619)
0xc0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xc2: PushEmpty(string)
0xc3: Stack[-1] = "Neutral"
0xc4: Call2 0x89

0xc5: Pop(1)
0xc6: Push((int) 509650)
0xc7: @@ SetMessage(Stack[-1])
0xc8: Pop(1)
0xc9: @@ ClearReplies()
0xca: Pop(0)
0xcb: Push((int) 509651)
0xcc: Push((int) 10621)
0xcd: Push((int) 10620)
0xce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf: Pop(3)
0xd0: Push((int) 509661)
0xd1: Push((int) 10633)
0xd2: Push((int) 10632)
0xd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4: Pop(3)
0xd5: Push((int) 509665)
0xd6: Push((int) 10625)
0xd7: Push((int) 10638)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Return(); Pop(0)

0xdb: Push((int) 10633)
0xdc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xde: PushEmpty(string)
0xdf: Stack[-1] = "Neutral"
0xe0: Call2 0x89

0xe1: Pop(1)
0xe2: Push((int) 509662)
0xe3: @@ SetMessage(Stack[-1])
0xe4: Pop(1)
0xe5: @@ ClearReplies()
0xe6: Pop(0)
0xe7: Push((int) 509663)
0xe8: Push((int) 10625)
0xe9: Push((int) 10634)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: Push((int) 509664)
0xed: Push((int) 10621)
0xee: Push((int) 10636)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Return(); Pop(0)

0xf2: Push((int) 10621)
0xf3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xf5: PushEmpty(string)
0xf6: Stack[-1] = "Neutral"
0xf7: Call2 0x89

0xf8: Pop(1)
0xf9: Push((int) 509652)
0xfa: @@ SetMessage(Stack[-1])
0xfb: Pop(1)
0xfc: @@ ClearReplies()
0xfd: Pop(0)
0xfe: Push((int) 509653)
0xff: Push((int) 10623)
0x100: Push((int) 10622)
0x101: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102: Pop(3)
0x103: Push((int) 509660)
0x104: Push((int) 10625)
0x105: Push((int) 10630)
0x106: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107: Pop(3)
0x108: Return(); Pop(0)

0x109: Push((int) 10623)
0x10a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Neutral"
0x10e: Call2 0x89

0x10f: Pop(1)
0x110: Push((int) 509654)
0x111: @@ SetMessage(Stack[-1])
0x112: Pop(1)
0x113: @@ ClearReplies()
0x114: Pop(0)
0x115: Push((int) 509655)
0x116: Push((int) 10625)
0x117: Push((int) 10624)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: Push((int) 509659)
0x11b: Push((int) 10625)
0x11c: Push((int) 10628)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Push((int) 10625)
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Neutral"
0x125: Call2 0x89

0x126: Pop(1)
0x127: Push((int) 509656)
0x128: @@ SetMessage(Stack[-1])
0x129: Pop(1)
0x12a: @@ ClearReplies()
0x12b: Pop(0)
0x12c: Push((int) 509657)
0x12d: Push((int) -1)
0x12e: Push((int) 10626)
0x12f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x130: Pop(3)
0x131: Push((int) 509658)
0x132: Push((int) -1)
0x133: Push((int) 10627)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x138: PushEmpty(bool)
0x139: Call2 0x2d6

0x13a: Pop(0)
0x13b: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13c: @ lshStopAnimation()
0x13d: Pop(0)
0x13e: GOTO 0x141

0x13f: @ StopAnimation()
0x140: Pop(0)
0x141: Return(); Pop(0)

0x142: GOTO 0xa0

0x143: Return(); Pop(0)

0x144: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x145: Push((int) 3)
0x146: @ Sleep(Stack[-1])
0x147: Pop(1)
0x148: PushEmpty()
0x149: Call2 0x160

0x14a: Pop(0)
0x14b: GOTO 0x145

0x14c: Return(); Pop(0)

0x14d: PushEmpty()
0x14e: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x14f: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x150: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x151: PushEmpty()
0x152: Call2 0x1b1

0x153: Pop(0)
0x154: PushEmpty(int, object)
0x155: Stack[-1] = Stack[-3]
0x156: Push(-2, 1); TaskCall(0)
0x157: Call2 0x0

0x158: Pop(-2, 1); TaskReturn
0x159: Pop(2)
0x15a: PushEmpty(bool, string, string)
0x15b: Stack[-2] = "quest_d4_01"
0x15c: Stack[-1] = "birdmask_done"
0x15d: Call2 0x242

0x15e: Pop(3)
0x15f: Return(); Pop(0)

0x160: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x161: @ WaitForAnimEnd()
0x162: Pop(0)
0x163: PushEmpty(bool)
0x164: Call2 0x1b6

0x165: Pop(0)
0x166: Pop(1); Push((bool) Stack[-1] == 0)
0x167: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x168: Return(); Pop(14)

0x169: PushEmpty(int)
0x16a: Call2 0x25a

0x16b: Stack[-8] = Stack[-1]
0x16c: Pop(1)
0x16d: Stack[-6] = (int) 0
0x16e: PushEmpty(bool)
0x16f: Stack[-1] = (bool) 0
0x170: Push((int) 5)
0x171: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x173: PushEmpty(bool)
0x174: Call2 0x1b6

0x175: Pop(0)
0x176: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x177: Stack[-1] = (bool) 1
0x178: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x179: Push((int) 3)
0x17a: @ irand(Stack[-6], Stack[-1])
0x17b: Pop(1)
0x17c: Push((int) 0)
0x17d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x17f: Push(Stack[-7])
0x180: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x181: @ irand(Stack[-4], Stack[-7])
0x182: Pop(0)
0x183: Push("all")
0x184: PushEmpty(string, int)
0x185: Stack[-1] = Stack[-7]
0x186: Call2 0x253

0x187: Pop(1)
0x188: @ PlayAnimation(Stack[-2], Stack[-1])
0x189: Pop(2)
0x18a: @ WaitForAnimEnd(Stack[-3])
0x18b: Pop(0)
0x18c: Pop(0); Push((bool) Stack[-3] == 0)
0x18d: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18e: GOTO 0x1ac

0x18f: GOTO 0x1a1

0x190: Push((int) 1)
0x191: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x193: Push((int) 4)
0x194: @ rand(Stack[-3], Stack[-1])
0x195: Pop(1)
0x196: Push((int) 1)
0x197: Pop(1); Push(Stack[-3] + Stack[-1]);
0x198: @ Sleep(Stack[-1], Stack[-2])
0x199: Pop(1)
0x19a: Pop(0); Push((bool) Stack[-1] == 0)
0x19b: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19c: GOTO 0x1ac

0x19d: GOTO 0x1a1

0x19e: Push(Stack[-6])
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: GOTO 0x1ac

0x1a1: PushEmpty(bool)
0x1a2: Call2 0x1af

0x1a3: Pop(0)
0x1a4: Pop(1); Push((bool) Stack[-1] == 0)
0x1a5: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a6: GOTO 0x1ac

0x1a7: @ ResetAAS()
0x1a8: Pop(0)
0x1a9: Push((int) 1)
0x1aa: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1ab: GOTO 0x16e

0x1ac: @ ResetAAS()
0x1ad: Pop(0)
0x1ae: Return(); Pop(14)

0x1af: Stack[-1] = (bool) 1
0x1b0: Return(); Pop(0)

0x1b1: @ StopAnimation()
0x1b2: Pop(0)
0x1b3: @ StopGroup0()
0x1b4: Pop(0)
0x1b5: Return(); Pop(0)

0x1b6: PushEmpty(bool, bool)
0x1b7: @ IsLoaded(Stack[-1])
0x1b8: Pop(0)
0x1b9: Stack[-3] = Stack[-1]
0x1ba: Return(); Pop(2)

0x1bb: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1bc: @@ GetPosition(Stack[-8])
0x1bd: Pop(0)
0x1be: @@ GetEyesHeight(Stack[-9])
0x1bf: Pop(0)
0x1c0: Push(CvectorIndex(Stack[-8], 1))
0x1c1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1c2: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1c3: @ GetPosition(Stack[-7])
0x1c4: Pop(0)
0x1c5: @ GetEyesHeight(Stack[-9])
0x1c6: Pop(0)
0x1c7: Push(CvectorIndex(Stack[-7], 1))
0x1c8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1c9: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1ca: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1cb: Push(CvectorIndex(Stack[-6], 1))
0x1cc: Stack[-1] = (int) 0
0x1cd: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1ce: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1cf: Pop(1); Push(Sqrt(Stack[-1]))
0x1d0: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1d1: Stack[-5] = -Stack[-6]; Pop(0);
0x1d2: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1d3: PushEmpty(cvector, cvector)
0x1d4: Push(CVector(0.0, 1.0, 0.0))
0x1d5: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1d6: Call2 0x238

0x1d7: Pop(1)
0x1d8: Push((int) 25)
0x1d9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1da: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1db: Push(CVector(0.0, 10.0, 0.0))
0x1dc: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1dd: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1de: @ IsOverrideActive(Stack[-2])
0x1df: Pop(0)
0x1e0: Push(Stack[-2])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e2: Stack[-21] = (bool) 0
0x1e3: Return(); Pop(18)

0x1e4: @ StopWorld()
0x1e5: Pop(0)
0x1e6: Push((bool) 1)
0x1e7: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1e8: Pop(1)
0x1e9: Push(CvectorIndex(Stack[-4], 0))
0x1ea: Push(CvectorIndex(Stack[-5], 2))
0x1eb: @ Rotate(Stack[-2], Stack[-1])
0x1ec: Pop(2)
0x1ed: PushEmpty(bool)
0x1ee: Call2 0x2d6

0x1ef: Pop(0)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f1: GOTO 0x1fa

0x1f2: Push("head")
0x1f3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1f4: Pop(1)
0x1f5: Push(Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f7: Push("head")
0x1f8: @ LookAsyncCamera(Stack[-1])
0x1f9: Pop(1)
0x1fa: @ CameraWaitForPlayFinish()
0x1fb: Pop(0)
0x1fc: @ ResumeWorld()
0x1fd: Pop(0)
0x1fe: Stack[-21] = (bool) 1
0x1ff: Return(); Pop(18)

0x200: PushEmpty(bool, bool)
0x201: Push((bool) 1)
0x202: @ CameraSwitchToNormal(Stack[-1])
0x203: Pop(1)
0x204: PushEmpty(bool)
0x205: Call2 0x2d6

0x206: Pop(0)
0x207: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x208: GOTO 0x211

0x209: Push("head")
0x20a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x20b: Pop(1)
0x20c: Push(Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20e: Push("head")
0x20f: @ UnlookAsync(Stack[-1])
0x210: Pop(1)
0x211: Return(); Pop(2)

0x212: PushEmpty(bool, float, float, bool, float, float)
0x213: @ lshHasAnimation(Stack[-3], Stack[-7])
0x214: Pop(0)
0x215: Push(Stack[-3])
0x216: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x217: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x218: Pop(0)
0x219: Push((bool) 0)
0x21a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x21b: Pop(1)
0x21c: GOTO 0x221

0x21d: Push("Can't find lsh animation : ")
0x21e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x21f: @ Trace(Stack[-1])
0x220: Pop(1)
0x221: Return(); Pop(6)

0x222: PushEmpty(bool, float, float, bool, float, float)
0x223: @ lshHasAnimation(Stack[-3], Stack[-8])
0x224: Pop(0)
0x225: Push(Stack[-3])
0x226: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x227: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x228: Pop(0)
0x229: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x22a: Pop(0)
0x22b: GOTO 0x230

0x22c: Push("Can't find lsh animation : ")
0x22d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x22e: @ Trace(Stack[-1])
0x22f: Pop(1)
0x230: Return(); Pop(6)

0x231: PushEmpty(bool)
0x232: Call2 0x2d6

0x233: Pop(0)
0x234: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x235: @ lshStopSpeech()
0x236: Pop(0)
0x237: Return(); Pop(0)

0x238: PushEmpty(float, float)
0x239: Pop(0); Push(Stack[-3] | Stack[-3]);
0x23a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x23b: Push((float)0.0)
0x23c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x23f: Return(); Pop(2)

0x240: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x241: Return(); Pop(2)

0x242: PushEmpty(object, object)
0x243: @ FindActor(Stack[-1], Stack[-4])
0x244: Pop(0)
0x245: Pop(0); Push((bool) Stack[-1] == 0)
0x246: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x247: Stack[-5] = (bool) 0
0x248: Return(); Pop(2)

0x249: @ Trigger(Stack[-1], Stack[-3])
0x24a: Pop(0)
0x24b: Stack[-5] = (bool) 1
0x24c: Return(); Pop(2)

0x24d: Stack[-1] = 0
0x24e: PushEmpty(float, float)
0x24f: @ GetGameTime(Stack[-1])
0x250: Pop(0)
0x251: Stack[-3] = Stack[-1]
0x252: Return(); Pop(2)

0x253: PushEmpty(string, string)
0x254: Stack[-1] = "idle"
0x255: Push(Stack[-3])
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x258: Stack[-4] = Stack[-1]
0x259: Return(); Pop(2)

0x25a: PushEmpty(int, bool, int, bool)
0x25b: Stack[-2] = (int) 0
0x25c: Push("all")
0x25d: PushEmpty(string, int)
0x25e: Stack[-1] = Stack[-5]
0x25f: Call2 0x253

0x260: Pop(1)
0x261: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x262: Pop(2)
0x263: Pop(0); Push((bool) Stack[-1] == 0)
0x264: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x265: GOTO 0x269

0x266: Push((int) 1)
0x267: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x268: GOTO 0x25c

0x269: Stack[-5] = Stack[-2]
0x26a: Return(); Pop(4)

0x26b: PushEmpty(object, object)
0x26c: PushEmpty(object)
0x26d: Call2 0x28b

0x26e: Stack[-2] = Stack[-1]
0x26f: Pop(1)
0x270: Push("d4q01Whitemask")
0x271: Push("pt_d4q01_key1_region")
0x272: Push((int) 1)
0x273: Push((int) 511523)
0x274: PushEmpty(float)
0x275: Call2 0x24e

0x276: Pop(0)
0x277: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x278: Pop(5)
0x279: Return(); Pop(2)

0x27a: Stack[-1] = 0
0x27b: PushEmpty()
0x27c: PushEmpty(object, string, float)
0x27d: PushEmpty(object)
0x27e: Call2 0x28b

0x27f: Stack[-4] = Stack[-1]
0x280: Pop(1)
0x281: Stack[-2] = "pt_d4q01_key1_region"
0x282: Stack[-1] = (int) 2
0x283: Call2 0x29c

0x284: Pop(3)
0x285: PushEmpty(object)
0x286: Call2 0x28b

0x287: Pop(0)
0x288: @@ ShowMap(Stack[-1])
0x289: Pop(1)
0x28a: Return(); Pop(0)

0x28b: PushEmpty(object, object, object, object)
0x28c: @ GetMainOutdoorScene(Stack[-2])
0x28d: Pop(0)
0x28e: Pop(0); Push((bool) Stack[-2] == 0)
0x28f: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x290: Push("Can't find main outdoor scene")
0x291: @ Trace(Stack[-1])
0x292: Pop(1)
0x293: Stack[-1] = 0
0x294: Stack[-5] = Stack[-1]
0x295: Return(); Pop(4)

0x296: @@ GetMap(Stack[-1])
0x297: Pop(0)
0x298: Stack[-5] = Stack[-1]
0x299: Return(); Pop(4)

0x29a: Stack[-1] = 0
0x29b: Stack[-2] = 0
0x29c: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x29d: @ GetMainOutdoorScene(Stack[-2])
0x29e: Pop(0)
0x29f: Pop(0); Push((bool) Stack[-2] == 0)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a1: Push("Can't find main outdoor scene")
0x2a2: @ Trace(Stack[-1])
0x2a3: Pop(1)
0x2a4: Return(); Pop(8)

0x2a5: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x2a6: Pop(0)
0x2a7: Pop(0); Push((bool) Stack[-1] == 0)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2a9: Push("Warning: outdoor scene locator ")
0x2aa: Pop(1); Push(Stack[-1] + Stack[-11]);
0x2ab: Push(" doesnt exist")
0x2ac: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2ad: @ Trace(Stack[-1])
0x2ae: Pop(1)
0x2af: @@ GetMap(Stack[-11])
0x2b0: Pop(0)
0x2b1: Pop(0); Push((bool) Stack[-11] == 0)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b3: Push("Can't find map")
0x2b4: @ Trace(Stack[-1])
0x2b5: Pop(1)
0x2b6: Return(); Pop(8)

0x2b7: Push(CvectorIndex(Stack[-4], 0))
0x2b8: Push(CvectorIndex(Stack[-5], 2))
0x2b9: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x2ba: Pop(2)
0x2bb: Return(); Pop(8)

0x2bc: Stack[-2] = 0
0x2bd: PushEmpty(int, int)
0x2be: Push("branch")
0x2bf: @ GetVariable(Stack[-1], Stack[-2])
0x2c0: Pop(1)
0x2c1: Push((int) 0)
0x2c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c4: Stack[-3] = (int) 1
0x2c5: Return(); Pop(2)

0x2c6: GOTO 0x2cc

0x2c7: Push((int) 1)
0x2c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2ca: Stack[-3] = (int) 2
0x2cb: Return(); Pop(2)

0x2cc: Stack[-3] = (int) 3
0x2cd: Return(); Pop(2)

0x2ce: Stack[-1] = (int) 515571
0x2cf: Return(); Pop(0)

0x2d0: Stack[-1] = (int) 504029
0x2d1: Return(); Pop(0)

0x2d2: Stack[-1] = "ui/NPC_bmask.png"
0x2d3: Return(); Pop(0)

0x2d4: Stack[-1] = "ui/NPC_bmask_b.png"
0x2d5: Return(); Pop(0)

0x2d6: Stack[-1] = (bool) 0
0x2d7: Return(); Pop(0)

