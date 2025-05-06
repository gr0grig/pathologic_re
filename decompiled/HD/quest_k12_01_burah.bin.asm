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
	Doubt
	Sorrow
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
	ook12BurahSobor1
	game_final
	branch
	ui/NPC_Burah.png
	ui/NPC_Burah_b.png

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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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

RunOp = 0x191
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc0 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x195 Vars = (object)
		EVENT_26 Op = 0x1a1 Vars = (string)
		EVENT_6 Op = 0x1bd Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1cf

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x334

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x332

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x336

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x338

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x321

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
0x31: Call2 0x2e5

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x226

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
0x48: Call2 0x214

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
0x56: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x309

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x5d: PushEmpty(string)
0x5e: Stack[-1] = "Neutral"
0x5f: Call2 0xaa

0x60: Pop(1)
0x61: Push((int) 539209)
0x62: @@ SetMessage(Stack[-1])
0x63: Pop(1)
0x64: @@ ClearReplies()
0x65: Pop(0)
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68: Call2 0x315

0x69: Pop(1)
0x6a: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6b: Push((int) 539210)
0x6c: Push((int) 43660)
0x6d: Push((int) 41153)
0x6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(3)
0x70: Push((int) 543010)
0x71: Push((int) -1)
0x72: Push((int) 45462)
0x73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74: Pop(3)
0x75: GOTO 0x8c

0x76: PushEmpty(string)
0x77: Stack[-1] = "Neutral"
0x78: Call2 0xaa

0x79: Pop(1)
0x7a: Push((int) 539211)
0x7b: @@ SetMessage(Stack[-1])
0x7c: Pop(1)
0x7d: @@ ClearReplies()
0x7e: Pop(0)
0x7f: Push((int) 539212)
0x80: Push((int) -1)
0x81: Push((int) 41155)
0x82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83: Pop(3)
0x84: Push((int) 541503)
0x85: Push((int) -1)
0x86: Push((int) 43665)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: GOTO 0x8c

0x8a: Return(); Pop(0)

0x8b: GOTO 0x55

0x8c: PushEmpty(bool)
0x8d: Call2 0x33a

0x8e: Pop(0)
0x8f: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x90: @ lshWaitForAnimEnd()
0x91: Pop(0)
0x92: Push( Stack[3 + Tasks[-1].StackPointer] )
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: GOTO 0x9a

0x95: PushEmpty(string)
0x96: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x97: Call2 0x2b0

0x98: Pop(1)
0x99: GOTO 0x90

0x9a: GOTO 0xa9

0x9b: Push("all")
0x9c: Push("idle")
0x9d: @ PlayAnimation(Stack[-2], Stack[-1])
0x9e: Pop(2)
0x9f: @ WaitForAnimEnd()
0xa0: Pop(0)
0xa1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: GOTO 0xa9

0xa4: Push("all")
0xa5: Push("idle")
0xa6: @ PlayAnimation(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: GOTO 0x9f

0xa9: Return(); Pop(0)

0xaa: PushEmpty()
0xab: PushEmpty(bool)
0xac: Call2 0x33a

0xad: Pop(0)
0xae: Pop(1); Push((bool) Stack[-1] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: Return(); Pop(0)

0xb1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: Return(); Pop(0)

0xb4: PushEmpty(string, bool)
0xb5: Stack[-2] = Stack[-3]
0xb6: Push("")
0xb7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb9: Stack[-1] = (bool) 0
0xba: GOTO 0xbc

0xbb: Stack[-1] = (bool) 1
0xbc: Call2 0x2c0

0xbd: Pop(2)
0xbe: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbf: Return(); Pop(0)

0xc0: PushEmpty()
0xc1: Push((int) 1)
0xc2: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0xc3: PushEmpty()
0xc4: Call2 0x2de

0xc5: Pop(0)
0xc6: Push((int) 41153)
0xc7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x303

0xcd: Pop(2)
0xce: Push((int) 41152)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xd1: PushEmpty(bool, object)
0xd2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Call2 0x309

0xd4: Pop(1)
0xd5: Pop(1); Push((bool) Stack[-1] == 0)
0xd6: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xd7: PushEmpty(string)
0xd8: Stack[-1] = "Neutral"
0xd9: Call2 0xaa

0xda: Pop(1)
0xdb: Push((int) 539209)
0xdc: @@ SetMessage(Stack[-1])
0xdd: Pop(1)
0xde: @@ ClearReplies()
0xdf: Pop(0)
0xe0: PushEmpty(bool, object)
0xe1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Call2 0x315

0xe3: Pop(1)
0xe4: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe5: Push((int) 539210)
0xe6: Push((int) 43660)
0xe7: Push((int) 41153)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Push((int) 543010)
0xeb: Push((int) -1)
0xec: Push((int) 45462)
0xed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee: Pop(3)
0xef: Return(); Pop(0)

0xf0: PushEmpty(string)
0xf1: Stack[-1] = "Neutral"
0xf2: Call2 0xaa

0xf3: Pop(1)
0xf4: Push((int) 539211)
0xf5: @@ SetMessage(Stack[-1])
0xf6: Pop(1)
0xf7: @@ ClearReplies()
0xf8: Pop(0)
0xf9: Push((int) 539212)
0xfa: Push((int) -1)
0xfb: Push((int) 41155)
0xfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd: Pop(3)
0xfe: Push((int) 541503)
0xff: Push((int) -1)
0x100: Push((int) 43665)
0x101: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102: Pop(3)
0x103: Return(); Pop(0)

0x104: Push((int) 43660)
0x105: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x107: PushEmpty(string)
0x108: Stack[-1] = "Doubt"
0x109: Call2 0xaa

0x10a: Pop(1)
0x10b: Push((int) 541498)
0x10c: @@ SetMessage(Stack[-1])
0x10d: Pop(1)
0x10e: @@ ClearReplies()
0x10f: Pop(0)
0x110: Push((int) 541499)
0x111: Push((int) 43662)
0x112: Push((int) 43661)
0x113: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114: Pop(3)
0x115: Push((int) 542901)
0x116: Push((int) 45332)
0x117: Push((int) 45330)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: Return(); Pop(0)

0x11b: Push((int) 43662)
0x11c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x11e: PushEmpty(string)
0x11f: Stack[-1] = "Doubt"
0x120: Call2 0xaa

0x121: Pop(1)
0x122: Push((int) 541500)
0x123: @@ SetMessage(Stack[-1])
0x124: Pop(1)
0x125: @@ ClearReplies()
0x126: Pop(0)
0x127: Push((int) 541501)
0x128: Push((int) 43664)
0x129: Push((int) 43663)
0x12a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b: Pop(3)
0x12c: Return(); Pop(0)

0x12d: Push((int) 43664)
0x12e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x130: PushEmpty(string)
0x131: Stack[-1] = "Sorrow"
0x132: Call2 0xaa

0x133: Pop(1)
0x134: Push((int) 541502)
0x135: @@ SetMessage(Stack[-1])
0x136: Pop(1)
0x137: @@ ClearReplies()
0x138: Pop(0)
0x139: Push((int) 541504)
0x13a: Push((int) 45332)
0x13b: Push((int) 43666)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: Push((int) 542902)
0x13f: Push((int) 45332)
0x140: Push((int) 45331)
0x141: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142: Pop(3)
0x143: Return(); Pop(0)

0x144: Push((int) 45332)
0x145: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x147: PushEmpty(string)
0x148: Stack[-1] = "Neutral"
0x149: Call2 0xaa

0x14a: Pop(1)
0x14b: Push((int) 542903)
0x14c: @@ SetMessage(Stack[-1])
0x14d: Pop(1)
0x14e: @@ ClearReplies()
0x14f: Pop(0)
0x150: Push((int) 542904)
0x151: Push((int) -1)
0x152: Push((int) 45335)
0x153: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x154: Pop(3)
0x155: Push((int) 542905)
0x156: Push((int) 45337)
0x157: Push((int) 45336)
0x158: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x159: Pop(3)
0x15a: Return(); Pop(0)

0x15b: Push((int) 45337)
0x15c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x15e: PushEmpty(string)
0x15f: Stack[-1] = "Neutral"
0x160: Call2 0xaa

0x161: Pop(1)
0x162: Push((int) 542906)
0x163: @@ SetMessage(Stack[-1])
0x164: Pop(1)
0x165: @@ ClearReplies()
0x166: Pop(0)
0x167: Push((int) 542907)
0x168: Push((int) 45339)
0x169: Push((int) 45338)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: Return(); Pop(0)

0x16d: Push((int) 45339)
0x16e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16f: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x170: PushEmpty(string)
0x171: Stack[-1] = "Neutral"
0x172: Call2 0xaa

0x173: Pop(1)
0x174: Push((int) 542908)
0x175: @@ SetMessage(Stack[-1])
0x176: Pop(1)
0x177: @@ ClearReplies()
0x178: Pop(0)
0x179: Push((int) 542909)
0x17a: Push((int) -1)
0x17b: Push((int) 45340)
0x17c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17d: Pop(3)
0x17e: Push((int) 542910)
0x17f: Push((int) -1)
0x180: Push((int) 45341)
0x181: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x182: Pop(3)
0x183: Return(); Pop(0)

0x184: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x185: PushEmpty(bool)
0x186: Call2 0x33a

0x187: Pop(0)
0x188: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x189: @ lshStopAnimation()
0x18a: Pop(0)
0x18b: GOTO 0x18e

0x18c: @ StopAnimation()
0x18d: Pop(0)
0x18e: Return(); Pop(0)

0x18f: GOTO 0xc1

0x190: Return(); Pop(0)

0x191: PushEmpty()
0x192: Call2 0x19d

0x193: Pop(0)
0x194: Return(); Pop(0)

0x195: PushEmpty()
0x196: PushEmpty(int, object)
0x197: Stack[-1] = Stack[-3]
0x198: Push(-2, 1); TaskCall(0)
0x199: Call2 0x0

0x19a: Pop(-2, 1); TaskReturn
0x19b: Pop(2)
0x19c: Return(); Pop(0)

0x19d: @ Hold()
0x19e: Pop(0)
0x19f: GOTO 0x19d

0x1a0: Return(); Pop(0)

0x1a1: PushEmpty(bool, bool)
0x1a2: Push("cleanup")
0x1a3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1a5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1a6: @ IsLoaded(Stack[-1])
0x1a7: Pop(0)
0x1a8: PushEmpty(bool)
0x1a9: Stack[-1] = (bool) 0
0x1aa: Pop(0); Push((bool) Stack[-2] == 0)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1ac: PushEmpty(bool)
0x1ad: Call2 0x1cd

0x1ae: Pop(0)
0x1af: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1b0: Stack[-1] = (bool) 1
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b2: PushEmpty(object)
0x1b3: Call2 0x2e5

0x1b4: Pop(0)
0x1b5: @ RemoveActor(Stack[-1])
0x1b6: Pop(1)
0x1b7: GOTO 0x1bc

0x1b8: Push("restore")
0x1b9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1bb: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1bc: Return(); Pop(2)

0x1bd: PushEmpty(bool)
0x1be: Stack[-1] = (bool) 0
0x1bf: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c1: PushEmpty(bool)
0x1c2: Call2 0x1cd

0x1c3: Pop(0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c5: Stack[-1] = (bool) 1
0x1c6: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c7: PushEmpty(object)
0x1c8: Call2 0x2e5

0x1c9: Pop(0)
0x1ca: @ RemoveActor(Stack[-1])
0x1cb: Pop(1)
0x1cc: Return(); Pop(0)

0x1cd: Stack[-1] = (bool) 1
0x1ce: Return(); Pop(0)

0x1cf: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1d0: @@ GetPosition(Stack[-8])
0x1d1: Pop(0)
0x1d2: @@ GetEyesHeight(Stack[-9])
0x1d3: Pop(0)
0x1d4: Push(CvectorIndex(Stack[-8], 1))
0x1d5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1d6: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1d7: @ GetPosition(Stack[-7])
0x1d8: Pop(0)
0x1d9: @ GetEyesHeight(Stack[-9])
0x1da: Pop(0)
0x1db: Push(CvectorIndex(Stack[-7], 1))
0x1dc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1dd: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1de: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1df: Push(CvectorIndex(Stack[-6], 1))
0x1e0: Stack[-1] = (int) 0
0x1e1: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1e2: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1e3: Pop(1); Push(Sqrt(Stack[-1]))
0x1e4: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1e5: Stack[-5] = -Stack[-6]; Pop(0);
0x1e6: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1e7: PushEmpty(cvector, cvector)
0x1e8: Push(CVector(0.0, 1.0, 0.0))
0x1e9: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1ea: Call2 0x2eb

0x1eb: Pop(1)
0x1ec: Push((int) 25)
0x1ed: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1ee: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ef: Push(CVector(0.0, 10.0, 0.0))
0x1f0: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1f1: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1f2: @ IsOverrideActive(Stack[-2])
0x1f3: Pop(0)
0x1f4: Push(Stack[-2])
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f6: Stack[-21] = (bool) 0
0x1f7: Return(); Pop(18)

0x1f8: @ StopWorld()
0x1f9: Pop(0)
0x1fa: Push((bool) 1)
0x1fb: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1fc: Pop(1)
0x1fd: Push(CvectorIndex(Stack[-4], 0))
0x1fe: Push(CvectorIndex(Stack[-5], 2))
0x1ff: @ Rotate(Stack[-2], Stack[-1])
0x200: Pop(2)
0x201: PushEmpty(bool)
0x202: Call2 0x33a

0x203: Pop(0)
0x204: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x205: GOTO 0x20e

0x206: Push("head")
0x207: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x208: Pop(1)
0x209: Push(Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x20b: Push("head")
0x20c: @ LookAsyncCamera(Stack[-1])
0x20d: Pop(1)
0x20e: @ CameraWaitForPlayFinish()
0x20f: Pop(0)
0x210: @ ResumeWorld()
0x211: Pop(0)
0x212: Stack[-21] = (bool) 1
0x213: Return(); Pop(18)

0x214: PushEmpty(bool, bool)
0x215: Push((bool) 1)
0x216: @ CameraSwitchToNormal(Stack[-1])
0x217: Pop(1)
0x218: PushEmpty(bool)
0x219: Call2 0x33a

0x21a: Pop(0)
0x21b: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21c: GOTO 0x225

0x21d: Push("head")
0x21e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x21f: Pop(1)
0x220: Push(Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x222: Push("head")
0x223: @ UnlookAsync(Stack[-1])
0x224: Pop(1)
0x225: Return(); Pop(2)

0x226: PushEmpty(int, int, int, int)
0x227: Push("voice_common")
0x228: @ GetVariable(Stack[-1], Stack[-3])
0x229: Pop(1)
0x22a: Push(Stack[-2])
0x22b: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x22c: PushEmpty(bool, object)
0x22d: Stack[-1] = Stack[-7]
0x22e: Call2 0x260

0x22f: Pop(1)
0x230: Pop(1); Push((bool) Stack[-1] == 0)
0x231: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x232: PushEmpty(bool, object)
0x233: Stack[-1] = Stack[-7]
0x234: Call2 0x285

0x235: Pop(1)
0x236: Pop(1); Push((bool) Stack[-1] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x238: Stack[-6] = (bool) 0
0x239: Return(); Pop(4)

0x23a: Push((int) 2)
0x23b: @ irand(Stack[-2], Stack[-1])
0x23c: Pop(1)
0x23d: Push(Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x23f: Push("voice_common")
0x240: Push((int) 1)
0x241: Pop(1); Push(Stack[-4] + Stack[-1]);
0x242: Push((int) 3)
0x243: Pop(2); Push(Stack[-2] % Stack[-1]);
0x244: @ SetVariable(Stack[-2], Stack[-1])
0x245: Pop(2)
0x246: GOTO 0x24b

0x247: Push("voice_common")
0x248: Push((int) 0)
0x249: @ SetVariable(Stack[-2], Stack[-1])
0x24a: Pop(2)
0x24b: GOTO 0x25e

0x24c: PushEmpty(bool, object)
0x24d: Stack[-1] = Stack[-7]
0x24e: Call2 0x285

0x24f: Pop(1)
0x250: Pop(1); Push((bool) Stack[-1] == 0)
0x251: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x252: PushEmpty(bool, object)
0x253: Stack[-1] = Stack[-7]
0x254: Call2 0x260

0x255: Pop(1)
0x256: Pop(1); Push((bool) Stack[-1] == 0)
0x257: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x258: Stack[-6] = (bool) 0
0x259: Return(); Pop(4)

0x25a: Push("voice_common")
0x25b: Push((int) 1)
0x25c: @ SetVariable(Stack[-2], Stack[-1])
0x25d: Pop(2)
0x25e: Stack[-6] = (bool) 1
0x25f: Return(); Pop(4)

0x260: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x261: Stack[-5] = "c"
0x262: Stack[-4] = (int) 0
0x263: Push((int) 1)
0x264: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x265: Push((int) 1)
0x266: Pop(1); Push(Stack[-5] + Stack[-1]);
0x267: Pop(1); Push(Stack[-6] + Stack[-1]);
0x268: @@ HasProperty(Stack[-1], Stack[-4])
0x269: Pop(1)
0x26a: Pop(0); Push((bool) Stack[-3] == 0)
0x26b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26c: GOTO 0x270

0x26d: Push((int) 1)
0x26e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x26f: GOTO 0x263

0x270: Pop(0); Push((bool) Stack[-4] == 0)
0x271: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x272: Stack[-12] = (bool) 0
0x273: Return(); Pop(10)

0x274: Stack[-2] = (int) 0
0x275: Push((int) 1)
0x276: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x278: @ irand(Stack[-2], Stack[-4])
0x279: Pop(0)
0x27a: Push((int) 1)
0x27b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x27c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x27d: @@ GetProperty(Stack[-1], Stack[-2])
0x27e: Pop(1)
0x27f: PushEmpty(bool, string)
0x280: Stack[-1] = Stack[-3]
0x281: Call2 0x2cf

0x282: Stack[-14] = Stack[-2]
0x283: Pop(2)
0x284: Return(); Pop(10)

0x285: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x286: Push("d")
0x287: PushEmpty(int)
0x288: Call2 0x2fa

0x289: Pop(0)
0x28a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x28b: Push("m")
0x28c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x28d: Stack[-4] = (int) 0
0x28e: Push((int) 1)
0x28f: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x290: Push((int) 1)
0x291: Pop(1); Push(Stack[-5] + Stack[-1]);
0x292: Pop(1); Push(Stack[-6] + Stack[-1]);
0x293: @@ HasProperty(Stack[-1], Stack[-4])
0x294: Pop(1)
0x295: Pop(0); Push((bool) Stack[-3] == 0)
0x296: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x297: GOTO 0x29b

0x298: Push((int) 1)
0x299: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x29a: GOTO 0x28e

0x29b: Pop(0); Push((bool) Stack[-4] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29d: Stack[-12] = (bool) 0
0x29e: Return(); Pop(10)

0x29f: Stack[-2] = (int) 0
0x2a0: Push((int) 1)
0x2a1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a3: @ irand(Stack[-2], Stack[-4])
0x2a4: Pop(0)
0x2a5: Push((int) 1)
0x2a6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2a7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2a8: @@ GetProperty(Stack[-1], Stack[-2])
0x2a9: Pop(1)
0x2aa: PushEmpty(bool, string)
0x2ab: Stack[-1] = Stack[-3]
0x2ac: Call2 0x2cf

0x2ad: Stack[-14] = Stack[-2]
0x2ae: Pop(2)
0x2af: Return(); Pop(10)

0x2b0: PushEmpty(bool, float, float, bool, float, float)
0x2b1: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2b2: Pop(0)
0x2b3: Push(Stack[-3])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b5: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2b6: Pop(0)
0x2b7: Push((bool) 0)
0x2b8: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2b9: Pop(1)
0x2ba: GOTO 0x2bf

0x2bb: Push("Can't find lsh animation : ")
0x2bc: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2bd: @ Trace(Stack[-1])
0x2be: Pop(1)
0x2bf: Return(); Pop(6)

0x2c0: PushEmpty(bool, float, float, bool, float, float)
0x2c1: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2c2: Pop(0)
0x2c3: Push(Stack[-3])
0x2c4: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c5: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2c6: Pop(0)
0x2c7: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2c8: Pop(0)
0x2c9: GOTO 0x2ce

0x2ca: Push("Can't find lsh animation : ")
0x2cb: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2cc: @ Trace(Stack[-1])
0x2cd: Pop(1)
0x2ce: Return(); Pop(6)

0x2cf: PushEmpty(bool, bool)
0x2d0: PushEmpty(bool)
0x2d1: Call2 0x33a

0x2d2: Pop(0)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d4: @ lshHasSpeech(Stack[-1], Stack[-3])
0x2d5: Pop(0)
0x2d6: Push(Stack[-1])
0x2d7: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d8: @ lshPlaySpeech(Stack[-3])
0x2d9: Pop(0)
0x2da: Stack[-4] = (bool) 1
0x2db: Return(); Pop(2)

0x2dc: Stack[-4] = (bool) 0
0x2dd: Return(); Pop(2)

0x2de: PushEmpty(bool)
0x2df: Call2 0x33a

0x2e0: Pop(0)
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e2: @ lshStopSpeech()
0x2e3: Pop(0)
0x2e4: Return(); Pop(0)

0x2e5: PushEmpty(object, object)
0x2e6: @ self(Stack[-1])
0x2e7: Pop(0)
0x2e8: Stack[-3] = Stack[-1]
0x2e9: Return(); Pop(2)

0x2ea: Stack[-1] = 0
0x2eb: PushEmpty(float, float)
0x2ec: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2ed: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2ee: Push((float)0.0)
0x2ef: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f1: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2f2: Return(); Pop(2)

0x2f3: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2f4: Return(); Pop(2)

0x2f5: PushEmpty(int, int)
0x2f6: @ GetVariable(Stack[-3], Stack[-1])
0x2f7: Pop(0)
0x2f8: Stack[-4] = Stack[-1]
0x2f9: Return(); Pop(2)

0x2fa: PushEmpty(float, float)
0x2fb: @ GetGameTime(Stack[-1])
0x2fc: Pop(0)
0x2fd: Push((int) 1)
0x2fe: PushEmpty(int)
0x2ff: Push((int) 24)
0x300: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x301: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x302: Return(); Pop(2)

0x303: PushEmpty()
0x304: Push("ook12BurahSobor1")
0x305: Push((int) 1)
0x306: @ SetVariable(Stack[-2], Stack[-1])
0x307: Pop(2)
0x308: Return(); Pop(0)

0x309: PushEmpty()
0x30a: PushEmpty(int, string)
0x30b: Stack[-1] = "game_final"
0x30c: Call2 0x2f5

0x30d: Pop(1)
0x30e: Push((int) 0)
0x30f: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x310: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x311: Stack[-2] = (bool) 1
0x312: Return(); Pop(0)

0x313: Stack[-2] = (bool) 0
0x314: Return(); Pop(0)

0x315: PushEmpty()
0x316: PushEmpty(int, string)
0x317: Stack[-1] = "ook12BurahSobor1"
0x318: Call2 0x2f5

0x319: Pop(1)
0x31a: Push((int) 0)
0x31b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x31c: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31d: Stack[-2] = (bool) 1
0x31e: Return(); Pop(0)

0x31f: Stack[-2] = (bool) 0
0x320: Return(); Pop(0)

0x321: PushEmpty(int, int)
0x322: Push("branch")
0x323: @ GetVariable(Stack[-1], Stack[-2])
0x324: Pop(1)
0x325: Push((int) 0)
0x326: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x327: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x328: Stack[-3] = (int) 1
0x329: Return(); Pop(2)

0x32a: GOTO 0x330

0x32b: Push((int) 1)
0x32c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32d: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32e: Stack[-3] = (int) 2
0x32f: Return(); Pop(2)

0x330: Stack[-3] = (int) 3
0x331: Return(); Pop(2)

0x332: Stack[-1] = (int) 515592
0x333: Return(); Pop(0)

0x334: Stack[-1] = (int) 511961
0x335: Return(); Pop(0)

0x336: Stack[-1] = "ui/NPC_Burah.png"
0x337: Return(); Pop(0)

0x338: Stack[-1] = "ui/NPC_Burah_b.png"
0x339: Return(); Pop(0)

0x33a: Stack[-1] = (bool) 1
0x33b: Return(); Pop(0)

