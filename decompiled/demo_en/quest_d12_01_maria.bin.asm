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
	Staring
	cleanup
	restore
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ood12MariaSobor1
	branch
	ui/NPC_Maria.png
	ui/NPC_Maria_b.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
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
	GetVariable (2 args)
	irand (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetGameTime (1 args)

RunOp = 0x174
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x178 Vars = (object)
		EVENT_26 Op = 0x184 Vars = (string)
		EVENT_6 Op = 0x1a0 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1b2

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x309

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x307

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x30b

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x30d

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2f6

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
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x2c6

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x207

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x1f6

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x90

0x5a: Pop(1)
0x5b: Push((int) 535639)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x2ea

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 535640)
0x66: Push((int) 42495)
0x67: Push((int) 37326)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 540495)
0x6b: Push((int) -1)
0x6c: Push((int) 42494)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0x30f

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x291

0x7e: Pop(1)
0x7f: GOTO 0x76

0x80: GOTO 0x8f

0x81: Push("all")
0x82: Push("idle")
0x83: @ PlayAnimation(Stack[-2], Stack[-1])
0x84: Pop(2)
0x85: @ WaitForAnimEnd()
0x86: Pop(0)
0x87: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: GOTO 0x8f

0x8a: Push("all")
0x8b: Push("idle")
0x8c: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: GOTO 0x85

0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: PushEmpty(bool)
0x92: Call2 0x30f

0x93: Pop(0)
0x94: Pop(1); Push((bool) Stack[-1] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Return(); Pop(0)

0x97: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(0)

0x9a: PushEmpty(string, bool)
0x9b: Stack[-2] = Stack[-3]
0x9c: Push("")
0x9d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9f: Stack[-1] = (bool) 0
0xa0: GOTO 0xa2

0xa1: Stack[-1] = (bool) 1
0xa2: Call2 0x2a1

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x2bf

0xab: Pop(0)
0xac: Push((int) 37326)
0xad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xaf: PushEmpty(object, object)
0xb0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2: Call2 0x2e4

0xb3: Pop(2)
0xb4: Push((int) 37325)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Neutral"
0xb9: Call2 0x90

0xba: Pop(1)
0xbb: Push((int) 535639)
0xbc: @@ SetMessage(Stack[-1])
0xbd: Pop(1)
0xbe: @@ ClearReplies()
0xbf: Pop(0)
0xc0: PushEmpty(bool, object)
0xc1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc2: Call2 0x2ea

0xc3: Pop(1)
0xc4: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc5: Push((int) 535640)
0xc6: Push((int) 42495)
0xc7: Push((int) 37326)
0xc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9: Pop(3)
0xca: Push((int) 540495)
0xcb: Push((int) -1)
0xcc: Push((int) 42494)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Return(); Pop(0)

0xd0: Push((int) 42495)
0xd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Neutral"
0xd5: Call2 0x90

0xd6: Pop(1)
0xd7: Push((int) 540496)
0xd8: @@ SetMessage(Stack[-1])
0xd9: Pop(1)
0xda: @@ ClearReplies()
0xdb: Pop(0)
0xdc: Push((int) 540500)
0xdd: Push((int) 42500)
0xde: Push((int) 42499)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Push((int) 540498)
0xe2: Push((int) -1)
0xe3: Push((int) 42497)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Return(); Pop(0)

0xe7: Push((int) 42500)
0xe8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xea: PushEmpty(string)
0xeb: Stack[-1] = "Neutral"
0xec: Call2 0x90

0xed: Pop(1)
0xee: Push((int) 540501)
0xef: @@ SetMessage(Stack[-1])
0xf0: Pop(1)
0xf1: @@ ClearReplies()
0xf2: Pop(0)
0xf3: Push((int) 540497)
0xf4: Push((int) 42498)
0xf5: Push((int) 42496)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: Push((int) 42498)
0xfa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0xfc: PushEmpty(string)
0xfd: Stack[-1] = "Neutral"
0xfe: Call2 0x90

0xff: Pop(1)
0x100: Push((int) 540499)
0x101: @@ SetMessage(Stack[-1])
0x102: Pop(1)
0x103: @@ ClearReplies()
0x104: Pop(0)
0x105: Push((int) 540502)
0x106: Push((int) 42502)
0x107: Push((int) 42501)
0x108: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109: Pop(3)
0x10a: Push((int) 540511)
0x10b: Push((int) 42511)
0x10c: Push((int) 42510)
0x10d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e: Pop(3)
0x10f: Return(); Pop(0)

0x110: Push((int) 42511)
0x111: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x113: PushEmpty(string)
0x114: Stack[-1] = "Neutral"
0x115: Call2 0x90

0x116: Pop(1)
0x117: Push((int) 540512)
0x118: @@ SetMessage(Stack[-1])
0x119: Pop(1)
0x11a: @@ ClearReplies()
0x11b: Pop(0)
0x11c: Push((int) 540513)
0x11d: Push((int) 42504)
0x11e: Push((int) 42512)
0x11f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x120: Pop(3)
0x121: Push((int) 540514)
0x122: Push((int) -1)
0x123: Push((int) 42514)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: Return(); Pop(0)

0x127: Push((int) 42502)
0x128: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x12a: PushEmpty(string)
0x12b: Stack[-1] = "Neutral"
0x12c: Call2 0x90

0x12d: Pop(1)
0x12e: Push((int) 540503)
0x12f: @@ SetMessage(Stack[-1])
0x130: Pop(1)
0x131: @@ ClearReplies()
0x132: Pop(0)
0x133: Push((int) 540504)
0x134: Push((int) 42504)
0x135: Push((int) 42503)
0x136: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x137: Pop(3)
0x138: Push((int) 540506)
0x139: Push((int) -1)
0x13a: Push((int) 42505)
0x13b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c: Pop(3)
0x13d: Return(); Pop(0)

0x13e: Push((int) 42504)
0x13f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x141: PushEmpty(string)
0x142: Stack[-1] = "Neutral"
0x143: Call2 0x90

0x144: Pop(1)
0x145: Push((int) 540505)
0x146: @@ SetMessage(Stack[-1])
0x147: Pop(1)
0x148: @@ ClearReplies()
0x149: Pop(0)
0x14a: Push((int) 540507)
0x14b: Push((int) 42507)
0x14c: Push((int) 42506)
0x14d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e: Pop(3)
0x14f: Return(); Pop(0)

0x150: Push((int) 42507)
0x151: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x153: PushEmpty(string)
0x154: Stack[-1] = "Staring"
0x155: Call2 0x90

0x156: Pop(1)
0x157: Push((int) 540508)
0x158: @@ SetMessage(Stack[-1])
0x159: Pop(1)
0x15a: @@ ClearReplies()
0x15b: Pop(0)
0x15c: Push((int) 540509)
0x15d: Push((int) -1)
0x15e: Push((int) 42508)
0x15f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x160: Pop(3)
0x161: Push((int) 540510)
0x162: Push((int) -1)
0x163: Push((int) 42509)
0x164: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x165: Pop(3)
0x166: Return(); Pop(0)

0x167: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x168: PushEmpty(bool)
0x169: Call2 0x30f

0x16a: Pop(0)
0x16b: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16c: @ lshStopAnimation()
0x16d: Pop(0)
0x16e: GOTO 0x171

0x16f: @ StopAnimation()
0x170: Pop(0)
0x171: Return(); Pop(0)

0x172: GOTO 0xa7

0x173: Return(); Pop(0)

0x174: PushEmpty()
0x175: Call2 0x180

0x176: Pop(0)
0x177: Return(); Pop(0)

0x178: PushEmpty()
0x179: PushEmpty(int, object)
0x17a: Stack[-1] = Stack[-3]
0x17b: Push(-2, 1); TaskCall(0)
0x17c: Call2 0x0

0x17d: Pop(-2, 1); TaskReturn
0x17e: Pop(2)
0x17f: Return(); Pop(0)

0x180: @ Hold()
0x181: Pop(0)
0x182: GOTO 0x180

0x183: Return(); Pop(0)

0x184: PushEmpty(bool, bool)
0x185: Push("cleanup")
0x186: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x188: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x189: @ IsLoaded(Stack[-1])
0x18a: Pop(0)
0x18b: PushEmpty(bool)
0x18c: Stack[-1] = (bool) 0
0x18d: Pop(0); Push((bool) Stack[-2] == 0)
0x18e: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18f: PushEmpty(bool)
0x190: Call2 0x1b0

0x191: Pop(0)
0x192: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x193: Stack[-1] = (bool) 1
0x194: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x195: PushEmpty(object)
0x196: Call2 0x2c6

0x197: Pop(0)
0x198: @ RemoveActor(Stack[-1])
0x199: Pop(1)
0x19a: GOTO 0x19f

0x19b: Push("restore")
0x19c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x19d: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19e: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x19f: Return(); Pop(2)

0x1a0: PushEmpty(bool)
0x1a1: Stack[-1] = (bool) 0
0x1a2: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a4: PushEmpty(bool)
0x1a5: Call2 0x1b0

0x1a6: Pop(0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a8: Stack[-1] = (bool) 1
0x1a9: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1aa: PushEmpty(object)
0x1ab: Call2 0x2c6

0x1ac: Pop(0)
0x1ad: @ RemoveActor(Stack[-1])
0x1ae: Pop(1)
0x1af: Return(); Pop(0)

0x1b0: Stack[-1] = (bool) 1
0x1b1: Return(); Pop(0)

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
0x1cd: Call2 0x2cc

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
0x1e4: Call2 0x30f

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
0x1fa: Call2 0x30f

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

0x207: PushEmpty(int, int, int, int)
0x208: Push("voice_common")
0x209: @ GetVariable(Stack[-1], Stack[-3])
0x20a: Pop(1)
0x20b: Push(Stack[-2])
0x20c: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x20d: PushEmpty(bool, object)
0x20e: Stack[-1] = Stack[-7]
0x20f: Call2 0x241

0x210: Pop(1)
0x211: Pop(1); Push((bool) Stack[-1] == 0)
0x212: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x213: PushEmpty(bool, object)
0x214: Stack[-1] = Stack[-7]
0x215: Call2 0x266

0x216: Pop(1)
0x217: Pop(1); Push((bool) Stack[-1] == 0)
0x218: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x219: Stack[-6] = (bool) 0
0x21a: Return(); Pop(4)

0x21b: Push((int) 2)
0x21c: @ irand(Stack[-2], Stack[-1])
0x21d: Pop(1)
0x21e: Push(Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x220: Push("voice_common")
0x221: Push((int) 1)
0x222: Pop(1); Push(Stack[-4] + Stack[-1]);
0x223: Push((int) 3)
0x224: Pop(2); Push(Stack[-2] % Stack[-1]);
0x225: @ SetVariable(Stack[-2], Stack[-1])
0x226: Pop(2)
0x227: GOTO 0x22c

0x228: Push("voice_common")
0x229: Push((int) 0)
0x22a: @ SetVariable(Stack[-2], Stack[-1])
0x22b: Pop(2)
0x22c: GOTO 0x23f

0x22d: PushEmpty(bool, object)
0x22e: Stack[-1] = Stack[-7]
0x22f: Call2 0x266

0x230: Pop(1)
0x231: Pop(1); Push((bool) Stack[-1] == 0)
0x232: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x233: PushEmpty(bool, object)
0x234: Stack[-1] = Stack[-7]
0x235: Call2 0x241

0x236: Pop(1)
0x237: Pop(1); Push((bool) Stack[-1] == 0)
0x238: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x239: Stack[-6] = (bool) 0
0x23a: Return(); Pop(4)

0x23b: Push("voice_common")
0x23c: Push((int) 1)
0x23d: @ SetVariable(Stack[-2], Stack[-1])
0x23e: Pop(2)
0x23f: Stack[-6] = (bool) 1
0x240: Return(); Pop(4)

0x241: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x242: Stack[-5] = "c"
0x243: Stack[-4] = (int) 0
0x244: Push((int) 1)
0x245: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x246: Push((int) 1)
0x247: Pop(1); Push(Stack[-5] + Stack[-1]);
0x248: Pop(1); Push(Stack[-6] + Stack[-1]);
0x249: @@ HasProperty(Stack[-1], Stack[-4])
0x24a: Pop(1)
0x24b: Pop(0); Push((bool) Stack[-3] == 0)
0x24c: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24d: GOTO 0x251

0x24e: Push((int) 1)
0x24f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x250: GOTO 0x244

0x251: Pop(0); Push((bool) Stack[-4] == 0)
0x252: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x253: Stack[-12] = (bool) 0
0x254: Return(); Pop(10)

0x255: Stack[-2] = (int) 0
0x256: Push((int) 1)
0x257: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x259: @ irand(Stack[-2], Stack[-4])
0x25a: Pop(0)
0x25b: Push((int) 1)
0x25c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x25d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x25e: @@ GetProperty(Stack[-1], Stack[-2])
0x25f: Pop(1)
0x260: PushEmpty(bool, string)
0x261: Stack[-1] = Stack[-3]
0x262: Call2 0x2b0

0x263: Stack[-14] = Stack[-2]
0x264: Pop(2)
0x265: Return(); Pop(10)

0x266: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x267: Push("d")
0x268: PushEmpty(int)
0x269: Call2 0x2db

0x26a: Pop(0)
0x26b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x26c: Push("m")
0x26d: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x26e: Stack[-4] = (int) 0
0x26f: Push((int) 1)
0x270: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x271: Push((int) 1)
0x272: Pop(1); Push(Stack[-5] + Stack[-1]);
0x273: Pop(1); Push(Stack[-6] + Stack[-1]);
0x274: @@ HasProperty(Stack[-1], Stack[-4])
0x275: Pop(1)
0x276: Pop(0); Push((bool) Stack[-3] == 0)
0x277: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x278: GOTO 0x27c

0x279: Push((int) 1)
0x27a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x27b: GOTO 0x26f

0x27c: Pop(0); Push((bool) Stack[-4] == 0)
0x27d: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27e: Stack[-12] = (bool) 0
0x27f: Return(); Pop(10)

0x280: Stack[-2] = (int) 0
0x281: Push((int) 1)
0x282: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x283: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x284: @ irand(Stack[-2], Stack[-4])
0x285: Pop(0)
0x286: Push((int) 1)
0x287: Pop(1); Push(Stack[-3] + Stack[-1]);
0x288: Pop(1); Push(Stack[-6] + Stack[-1]);
0x289: @@ GetProperty(Stack[-1], Stack[-2])
0x28a: Pop(1)
0x28b: PushEmpty(bool, string)
0x28c: Stack[-1] = Stack[-3]
0x28d: Call2 0x2b0

0x28e: Stack[-14] = Stack[-2]
0x28f: Pop(2)
0x290: Return(); Pop(10)

0x291: PushEmpty(bool, float, float, bool, float, float)
0x292: @ lshHasAnimation(Stack[-3], Stack[-7])
0x293: Pop(0)
0x294: Push(Stack[-3])
0x295: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x296: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x297: Pop(0)
0x298: Push((bool) 0)
0x299: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x29a: Pop(1)
0x29b: GOTO 0x2a0

0x29c: Push("Can't find lsh animation : ")
0x29d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x29e: @ Trace(Stack[-1])
0x29f: Pop(1)
0x2a0: Return(); Pop(6)

0x2a1: PushEmpty(bool, float, float, bool, float, float)
0x2a2: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2a3: Pop(0)
0x2a4: Push(Stack[-3])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a6: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2a7: Pop(0)
0x2a8: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2a9: Pop(0)
0x2aa: GOTO 0x2af

0x2ab: Push("Can't find lsh animation : ")
0x2ac: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2ad: @ Trace(Stack[-1])
0x2ae: Pop(1)
0x2af: Return(); Pop(6)

0x2b0: PushEmpty(bool, bool)
0x2b1: PushEmpty(bool)
0x2b2: Call2 0x30f

0x2b3: Pop(0)
0x2b4: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2b5: @ lshHasSpeech(Stack[-1], Stack[-3])
0x2b6: Pop(0)
0x2b7: Push(Stack[-1])
0x2b8: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2b9: @ lshPlaySpeech(Stack[-3])
0x2ba: Pop(0)
0x2bb: Stack[-4] = (bool) 1
0x2bc: Return(); Pop(2)

0x2bd: Stack[-4] = (bool) 0
0x2be: Return(); Pop(2)

0x2bf: PushEmpty(bool)
0x2c0: Call2 0x30f

0x2c1: Pop(0)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c3: @ lshStopSpeech()
0x2c4: Pop(0)
0x2c5: Return(); Pop(0)

0x2c6: PushEmpty(object, object)
0x2c7: @ self(Stack[-1])
0x2c8: Pop(0)
0x2c9: Stack[-3] = Stack[-1]
0x2ca: Return(); Pop(2)

0x2cb: Stack[-1] = 0
0x2cc: PushEmpty(float, float)
0x2cd: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2ce: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2cf: Push((float)0.0)
0x2d0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d2: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2d3: Return(); Pop(2)

0x2d4: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2d5: Return(); Pop(2)

0x2d6: PushEmpty(int, int)
0x2d7: @ GetVariable(Stack[-3], Stack[-1])
0x2d8: Pop(0)
0x2d9: Stack[-4] = Stack[-1]
0x2da: Return(); Pop(2)

0x2db: PushEmpty(float, float)
0x2dc: @ GetGameTime(Stack[-1])
0x2dd: Pop(0)
0x2de: Push((int) 1)
0x2df: PushEmpty(int)
0x2e0: Push((int) 24)
0x2e1: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x2e2: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x2e3: Return(); Pop(2)

0x2e4: PushEmpty()
0x2e5: Push("ood12MariaSobor1")
0x2e6: Push((int) 1)
0x2e7: @ SetVariable(Stack[-2], Stack[-1])
0x2e8: Pop(2)
0x2e9: Return(); Pop(0)

0x2ea: PushEmpty()
0x2eb: PushEmpty(int, string)
0x2ec: Stack[-1] = "ood12MariaSobor1"
0x2ed: Call2 0x2d6

0x2ee: Pop(1)
0x2ef: Push((int) 0)
0x2f0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f2: Stack[-2] = (bool) 1
0x2f3: Return(); Pop(0)

0x2f4: Stack[-2] = (bool) 0
0x2f5: Return(); Pop(0)

0x2f6: PushEmpty(int, int)
0x2f7: Push("branch")
0x2f8: @ GetVariable(Stack[-1], Stack[-2])
0x2f9: Pop(1)
0x2fa: Push((int) 0)
0x2fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2fc: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fd: Stack[-3] = (int) 1
0x2fe: Return(); Pop(2)

0x2ff: GOTO 0x305

0x300: Push((int) 1)
0x301: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x303: Stack[-3] = (int) 2
0x304: Return(); Pop(2)

0x305: Stack[-3] = (int) 3
0x306: Return(); Pop(2)

0x307: Stack[-1] = (int) 515543
0x308: Return(); Pop(0)

0x309: Stack[-1] = (int) 502868
0x30a: Return(); Pop(0)

0x30b: Stack[-1] = "ui/NPC_Maria.png"
0x30c: Return(); Pop(0)

0x30d: Stack[-1] = "ui/NPC_Maria_b.png"
0x30e: Return(); Pop(0)

0x30f: Stack[-1] = (bool) 1
0x310: Return(); Pop(0)

