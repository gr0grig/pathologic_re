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
0xe: Call2 0x332

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x330

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x334

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x336

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x31f

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
0x31: Call2 0x2e3

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x224

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
0x48: Call2 0x213

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
0x59: Call2 0x307

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
0x68: Call2 0x313

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
0x8d: Call2 0x338

0x8e: Pop(0)
0x8f: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x90: @ lshWaitForAnimEnd()
0x91: Pop(0)
0x92: Push( Stack[3 + Tasks[-1].StackPointer] )
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: GOTO 0x9a

0x95: PushEmpty(string)
0x96: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x97: Call2 0x2ae

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
0xac: Call2 0x338

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
0xbc: Call2 0x2be

0xbd: Pop(2)
0xbe: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbf: Return(); Pop(0)

0xc0: PushEmpty()
0xc1: Push((int) 1)
0xc2: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0xc3: PushEmpty()
0xc4: Call2 0x2dc

0xc5: Pop(0)
0xc6: Push((int) 41153)
0xc7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x301

0xcd: Pop(2)
0xce: Push((int) 41152)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xd1: PushEmpty(bool, object)
0xd2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Call2 0x307

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
0xe2: Call2 0x313

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
0x186: Call2 0x338

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
0x1b3: Call2 0x2e3

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
0x1c8: Call2 0x2e3

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
0x1ea: Call2 0x2e9

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
0x1fa: @ CameraTransit(Stack[-3], Stack[-5])
0x1fb: Pop(0)
0x1fc: Push(CvectorIndex(Stack[-4], 0))
0x1fd: Push(CvectorIndex(Stack[-5], 2))
0x1fe: @ Rotate(Stack[-2], Stack[-1])
0x1ff: Pop(2)
0x200: PushEmpty(bool)
0x201: Call2 0x338

0x202: Pop(0)
0x203: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x204: GOTO 0x20d

0x205: Push("head")
0x206: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x207: Pop(1)
0x208: Push(Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20a: Push("head")
0x20b: @ LookAsyncCamera(Stack[-1])
0x20c: Pop(1)
0x20d: @ CameraWaitForPlayFinish()
0x20e: Pop(0)
0x20f: @ ResumeWorld()
0x210: Pop(0)
0x211: Stack[-21] = (bool) 1
0x212: Return(); Pop(18)

0x213: PushEmpty(bool, bool)
0x214: @ CameraSwitchToNormal()
0x215: Pop(0)
0x216: PushEmpty(bool)
0x217: Call2 0x338

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

0x224: PushEmpty(int, int, int, int)
0x225: Push("voice_common")
0x226: @ GetVariable(Stack[-1], Stack[-3])
0x227: Pop(1)
0x228: Push(Stack[-2])
0x229: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x22a: PushEmpty(bool, object)
0x22b: Stack[-1] = Stack[-7]
0x22c: Call2 0x25e

0x22d: Pop(1)
0x22e: Pop(1); Push((bool) Stack[-1] == 0)
0x22f: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x230: PushEmpty(bool, object)
0x231: Stack[-1] = Stack[-7]
0x232: Call2 0x283

0x233: Pop(1)
0x234: Pop(1); Push((bool) Stack[-1] == 0)
0x235: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x236: Stack[-6] = (bool) 0
0x237: Return(); Pop(4)

0x238: Push((int) 2)
0x239: @ irand(Stack[-2], Stack[-1])
0x23a: Pop(1)
0x23b: Push(Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x23d: Push("voice_common")
0x23e: Push((int) 1)
0x23f: Pop(1); Push(Stack[-4] + Stack[-1]);
0x240: Push((int) 3)
0x241: Pop(2); Push(Stack[-2] % Stack[-1]);
0x242: @ SetVariable(Stack[-2], Stack[-1])
0x243: Pop(2)
0x244: GOTO 0x249

0x245: Push("voice_common")
0x246: Push((int) 0)
0x247: @ SetVariable(Stack[-2], Stack[-1])
0x248: Pop(2)
0x249: GOTO 0x25c

0x24a: PushEmpty(bool, object)
0x24b: Stack[-1] = Stack[-7]
0x24c: Call2 0x283

0x24d: Pop(1)
0x24e: Pop(1); Push((bool) Stack[-1] == 0)
0x24f: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x250: PushEmpty(bool, object)
0x251: Stack[-1] = Stack[-7]
0x252: Call2 0x25e

0x253: Pop(1)
0x254: Pop(1); Push((bool) Stack[-1] == 0)
0x255: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x256: Stack[-6] = (bool) 0
0x257: Return(); Pop(4)

0x258: Push("voice_common")
0x259: Push((int) 1)
0x25a: @ SetVariable(Stack[-2], Stack[-1])
0x25b: Pop(2)
0x25c: Stack[-6] = (bool) 1
0x25d: Return(); Pop(4)

0x25e: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x25f: Stack[-5] = "c"
0x260: Stack[-4] = (int) 0
0x261: Push((int) 1)
0x262: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x263: Push((int) 1)
0x264: Pop(1); Push(Stack[-5] + Stack[-1]);
0x265: Pop(1); Push(Stack[-6] + Stack[-1]);
0x266: @@ HasProperty(Stack[-1], Stack[-4])
0x267: Pop(1)
0x268: Pop(0); Push((bool) Stack[-3] == 0)
0x269: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x26a: GOTO 0x26e

0x26b: Push((int) 1)
0x26c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x26d: GOTO 0x261

0x26e: Pop(0); Push((bool) Stack[-4] == 0)
0x26f: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x270: Stack[-12] = (bool) 0
0x271: Return(); Pop(10)

0x272: Stack[-2] = (int) 0
0x273: Push((int) 1)
0x274: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x276: @ irand(Stack[-2], Stack[-4])
0x277: Pop(0)
0x278: Push((int) 1)
0x279: Pop(1); Push(Stack[-3] + Stack[-1]);
0x27a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x27b: @@ GetProperty(Stack[-1], Stack[-2])
0x27c: Pop(1)
0x27d: PushEmpty(bool, string)
0x27e: Stack[-1] = Stack[-3]
0x27f: Call2 0x2cd

0x280: Stack[-14] = Stack[-2]
0x281: Pop(2)
0x282: Return(); Pop(10)

0x283: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x284: Push("d")
0x285: PushEmpty(int)
0x286: Call2 0x2f8

0x287: Pop(0)
0x288: Pop(2); Push(Stack[-2] + Stack[-1]);
0x289: Push("m")
0x28a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x28b: Stack[-4] = (int) 0
0x28c: Push((int) 1)
0x28d: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x28e: Push((int) 1)
0x28f: Pop(1); Push(Stack[-5] + Stack[-1]);
0x290: Pop(1); Push(Stack[-6] + Stack[-1]);
0x291: @@ HasProperty(Stack[-1], Stack[-4])
0x292: Pop(1)
0x293: Pop(0); Push((bool) Stack[-3] == 0)
0x294: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x295: GOTO 0x299

0x296: Push((int) 1)
0x297: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x298: GOTO 0x28c

0x299: Pop(0); Push((bool) Stack[-4] == 0)
0x29a: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29b: Stack[-12] = (bool) 0
0x29c: Return(); Pop(10)

0x29d: Stack[-2] = (int) 0
0x29e: Push((int) 1)
0x29f: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a1: @ irand(Stack[-2], Stack[-4])
0x2a2: Pop(0)
0x2a3: Push((int) 1)
0x2a4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2a5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2a6: @@ GetProperty(Stack[-1], Stack[-2])
0x2a7: Pop(1)
0x2a8: PushEmpty(bool, string)
0x2a9: Stack[-1] = Stack[-3]
0x2aa: Call2 0x2cd

0x2ab: Stack[-14] = Stack[-2]
0x2ac: Pop(2)
0x2ad: Return(); Pop(10)

0x2ae: PushEmpty(bool, float, float, bool, float, float)
0x2af: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2b0: Pop(0)
0x2b1: Push(Stack[-3])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b3: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2b4: Pop(0)
0x2b5: Push((bool) 0)
0x2b6: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2b7: Pop(1)
0x2b8: GOTO 0x2bd

0x2b9: Push("Can't find lsh animation : ")
0x2ba: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2bb: @ Trace(Stack[-1])
0x2bc: Pop(1)
0x2bd: Return(); Pop(6)

0x2be: PushEmpty(bool, float, float, bool, float, float)
0x2bf: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2c0: Pop(0)
0x2c1: Push(Stack[-3])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c3: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2c4: Pop(0)
0x2c5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2c6: Pop(0)
0x2c7: GOTO 0x2cc

0x2c8: Push("Can't find lsh animation : ")
0x2c9: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2ca: @ Trace(Stack[-1])
0x2cb: Pop(1)
0x2cc: Return(); Pop(6)

0x2cd: PushEmpty(bool, bool)
0x2ce: PushEmpty(bool)
0x2cf: Call2 0x338

0x2d0: Pop(0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d2: @ lshHasSpeech(Stack[-1], Stack[-3])
0x2d3: Pop(0)
0x2d4: Push(Stack[-1])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d6: @ lshPlaySpeech(Stack[-3])
0x2d7: Pop(0)
0x2d8: Stack[-4] = (bool) 1
0x2d9: Return(); Pop(2)

0x2da: Stack[-4] = (bool) 0
0x2db: Return(); Pop(2)

0x2dc: PushEmpty(bool)
0x2dd: Call2 0x338

0x2de: Pop(0)
0x2df: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e0: @ lshStopSpeech()
0x2e1: Pop(0)
0x2e2: Return(); Pop(0)

0x2e3: PushEmpty(object, object)
0x2e4: @ self(Stack[-1])
0x2e5: Pop(0)
0x2e6: Stack[-3] = Stack[-1]
0x2e7: Return(); Pop(2)

0x2e8: Stack[-1] = 0
0x2e9: PushEmpty(float, float)
0x2ea: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2eb: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2ec: Push((float)0.0)
0x2ed: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ef: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2f0: Return(); Pop(2)

0x2f1: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2f2: Return(); Pop(2)

0x2f3: PushEmpty(int, int)
0x2f4: @ GetVariable(Stack[-3], Stack[-1])
0x2f5: Pop(0)
0x2f6: Stack[-4] = Stack[-1]
0x2f7: Return(); Pop(2)

0x2f8: PushEmpty(float, float)
0x2f9: @ GetGameTime(Stack[-1])
0x2fa: Pop(0)
0x2fb: Push((int) 1)
0x2fc: PushEmpty(int)
0x2fd: Push((int) 24)
0x2fe: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x2ff: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x300: Return(); Pop(2)

0x301: PushEmpty()
0x302: Push("ook12BurahSobor1")
0x303: Push((int) 1)
0x304: @ SetVariable(Stack[-2], Stack[-1])
0x305: Pop(2)
0x306: Return(); Pop(0)

0x307: PushEmpty()
0x308: PushEmpty(int, string)
0x309: Stack[-1] = "game_final"
0x30a: Call2 0x2f3

0x30b: Pop(1)
0x30c: Push((int) 0)
0x30d: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x30f: Stack[-2] = (bool) 1
0x310: Return(); Pop(0)

0x311: Stack[-2] = (bool) 0
0x312: Return(); Pop(0)

0x313: PushEmpty()
0x314: PushEmpty(int, string)
0x315: Stack[-1] = "ook12BurahSobor1"
0x316: Call2 0x2f3

0x317: Pop(1)
0x318: Push((int) 0)
0x319: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31b: Stack[-2] = (bool) 1
0x31c: Return(); Pop(0)

0x31d: Stack[-2] = (bool) 0
0x31e: Return(); Pop(0)

0x31f: PushEmpty(int, int)
0x320: Push("branch")
0x321: @ GetVariable(Stack[-1], Stack[-2])
0x322: Pop(1)
0x323: Push((int) 0)
0x324: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x326: Stack[-3] = (int) 1
0x327: Return(); Pop(2)

0x328: GOTO 0x32e

0x329: Push((int) 1)
0x32a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32c: Stack[-3] = (int) 2
0x32d: Return(); Pop(2)

0x32e: Stack[-3] = (int) 3
0x32f: Return(); Pop(2)

0x330: Stack[-1] = (int) 515592
0x331: Return(); Pop(0)

0x332: Stack[-1] = (int) 511961
0x333: Return(); Pop(0)

0x334: Stack[-1] = "ui/NPC_Burah.png"
0x335: Return(); Pop(0)

0x336: Stack[-1] = "ui/NPC_Burah_b.png"
0x337: Return(); Pop(0)

0x338: Stack[-1] = (bool) 1
0x339: Return(); Pop(0)

