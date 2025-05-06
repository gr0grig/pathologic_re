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
	Declaim
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	Can't find lsh animation : 
	ui/NPC_Mark.png
	ui/NPC_Mark_b.png
	branch
	mt_mark
	d12_mark

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
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
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
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)

RunOp = 0x2c2
RunTask = 6

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a4 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x298 Vars = (int, int)
	GTASK_6 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x30b Vars = (int)
		EVENT_6 Op = 0x331 Vars = ()
		EVENT_5 Op = 0x340 Vars = ()
		EVENT_45 Op = 0x34d Vars = (bool)
		EVENT_0 Op = 0x359 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x3e2

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x52f

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x52d

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x531

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x533

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x537

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
0x31: Call2 0x4f6

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x437

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
0x48: Call2 0x426

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
0x5b: Push((int) 535231)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 535232)
0x61: Push((int) 36953)
0x62: Push((int) 36907)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 535233)
0x66: Push((int) -1)
0x67: Push((int) 36908)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 535280)
0x6b: Push((int) -1)
0x6c: Push((int) 36956)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0x535

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x4c1

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
0x92: Call2 0x535

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
0xa2: Call2 0x4d1

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x4ef

0xab: Pop(0)
0xac: Push((int) 36906)
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xaf: PushEmpty(string)
0xb0: Stack[-1] = "Neutral"
0xb1: Call2 0x90

0xb2: Pop(1)
0xb3: Push((int) 535231)
0xb4: @@ SetMessage(Stack[-1])
0xb5: Pop(1)
0xb6: @@ ClearReplies()
0xb7: Pop(0)
0xb8: Push((int) 535232)
0xb9: Push((int) 36953)
0xba: Push((int) 36907)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Push((int) 535233)
0xbe: Push((int) -1)
0xbf: Push((int) 36908)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: Push((int) 535280)
0xc3: Push((int) -1)
0xc4: Push((int) 36956)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Return(); Pop(0)

0xc8: Push((int) 36953)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0x90

0xce: Pop(1)
0xcf: Push((int) 535277)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 535278)
0xd5: Push((int) 36957)
0xd6: Push((int) 36954)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 535279)
0xda: Push((int) 36957)
0xdb: Push((int) 36955)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 36957)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call2 0x90

0xe5: Pop(1)
0xe6: Push((int) 535281)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 535282)
0xec: Push((int) -1)
0xed: Push((int) 36958)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 535283)
0xf1: Push((int) -1)
0xf2: Push((int) 36959)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf7: PushEmpty(bool)
0xf8: Call2 0x535

0xf9: Pop(0)
0xfa: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfb: @ lshStopAnimation()
0xfc: Pop(0)
0xfd: GOTO 0x100

0xfe: @ StopAnimation()
0xff: Pop(0)
0x100: Return(); Pop(0)

0x101: GOTO 0xa7

0x102: Return(); Pop(0)

0x103: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x104: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x105: PushEmpty(bool, object, float)
0x106: Stack[-2] = Stack[-12]
0x107: Stack[-1] = (float) 70.0
0x108: Call2 0x3e2

0x109: Pop(2)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-10] = (int) -2
0x10d: Return(); Pop(8)

0x10e: @ CreateDialog(Stack[-4])
0x10f: Pop(0)
0x110: PushEmpty(int)
0x111: Call2 0x52f

0x112: Pop(0)
0x113: @@ SetNPCName(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(int)
0x116: Call2 0x52d

0x117: Pop(0)
0x118: @@ SetNPCDescription(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(string)
0x11b: Call2 0x531

0x11c: Pop(0)
0x11d: @@ SetPhoto(Stack[-1])
0x11e: Pop(1)
0x11f: PushEmpty(string)
0x120: Call2 0x533

0x121: Pop(0)
0x122: @@ SetPhoto2(Stack[-1])
0x123: Pop(1)
0x124: PushEmpty(int)
0x125: Call2 0x537

0x126: Pop(0)
0x127: @@ SetPlayerName(Stack[-1])
0x128: Pop(1)
0x129: Stack[-2] = (int) -1
0x12a: @ IsOverrideActive(Stack[-3])
0x12b: Pop(0)
0x12c: Push(Stack[-3])
0x12d: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12e: Stack[-10] = (int) -2
0x12f: Return(); Pop(8)

0x130: @ DoDialog(Stack[-4])
0x131: Pop(0)
0x132: PushEmpty(bool, object)
0x133: PushEmpty(object)
0x134: Call2 0x4f6

0x135: Stack[-2] = Stack[-1]
0x136: Pop(1)
0x137: Call2 0x437

0x138: Pop(2)
0x139: PushEmpty(object, object)
0x13a: Stack[-2] = Stack[-11]
0x13b: Stack[-1] = Stack[-6]
0x13c: Push(-2, 4); TaskCall(3)
0x13d: Call2 0x154

0x13e: Pop(-2, 4); TaskReturn
0x13f: Pop(2)
0x140: @@ IsDialogEnd(Stack[-1])
0x141: Pop(0)
0x142: Pop(0); Push((bool) Stack[-1] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x144: @ sync()
0x145: Pop(0)
0x146: @@ IsDialogEnd(Stack[-1])
0x147: Pop(0)
0x148: GOTO 0x142

0x149: PushEmpty(object)
0x14a: Stack[-1] = Stack[-10]
0x14b: Call2 0x426

0x14c: Pop(1)
0x14d: @ StopDialog(Stack[-4])
0x14e: Pop(0)
0x14f: @@ GetReturnValue(Stack[-2])
0x150: Pop(0)
0x151: Stack[-10] = Stack[-2]
0x152: Return(); Pop(8)

0x153: Stack[-4] = 0
0x154: PushEmpty()
0x155: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x156: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x157: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x158: Push((int) 1)
0x159: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Declaim"
0x15c: Call2 0x18e

0x15d: Pop(1)
0x15e: Push((int) 520759)
0x15f: @@ SetMessage(Stack[-1])
0x160: Pop(1)
0x161: @@ ClearReplies()
0x162: Pop(0)
0x163: Push((int) 520760)
0x164: Push((int) 21974)
0x165: Push((int) 21973)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Push((int) 520766)
0x169: Push((int) 21976)
0x16a: Push((int) 21979)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: GOTO 0x170

0x16e: Return(); Pop(0)

0x16f: GOTO 0x158

0x170: PushEmpty(bool)
0x171: Call2 0x535

0x172: Pop(0)
0x173: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x174: @ lshWaitForAnimEnd()
0x175: Pop(0)
0x176: Push( Stack[3 + Tasks[-1].StackPointer] )
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: GOTO 0x17e

0x179: PushEmpty(string)
0x17a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x17b: Call2 0x4c1

0x17c: Pop(1)
0x17d: GOTO 0x174

0x17e: GOTO 0x18d

0x17f: Push("all")
0x180: Push("idle")
0x181: @ PlayAnimation(Stack[-2], Stack[-1])
0x182: Pop(2)
0x183: @ WaitForAnimEnd()
0x184: Pop(0)
0x185: Push( Stack[3 + Tasks[-1].StackPointer] )
0x186: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x187: GOTO 0x18d

0x188: Push("all")
0x189: Push("idle")
0x18a: @ PlayAnimation(Stack[-2], Stack[-1])
0x18b: Pop(2)
0x18c: GOTO 0x183

0x18d: Return(); Pop(0)

0x18e: PushEmpty()
0x18f: PushEmpty(bool)
0x190: Call2 0x535

0x191: Pop(0)
0x192: Pop(1); Push((bool) Stack[-1] == 0)
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: Return(); Pop(0)

0x195: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: Return(); Pop(0)

0x198: PushEmpty(string, bool)
0x199: Stack[-2] = Stack[-3]
0x19a: Push("")
0x19b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19d: Stack[-1] = (bool) 0
0x19e: GOTO 0x1a0

0x19f: Stack[-1] = (bool) 1
0x1a0: Call2 0x4d1

0x1a1: Pop(2)
0x1a2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty()
0x1a5: Push((int) 1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1a7: PushEmpty()
0x1a8: Call2 0x4ef

0x1a9: Pop(0)
0x1aa: Push((int) 21972)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Declaim"
0x1af: Call2 0x18e

0x1b0: Pop(1)
0x1b1: Push((int) 520759)
0x1b2: @@ SetMessage(Stack[-1])
0x1b3: Pop(1)
0x1b4: @@ ClearReplies()
0x1b5: Pop(0)
0x1b6: Push((int) 520760)
0x1b7: Push((int) 21974)
0x1b8: Push((int) 21973)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Push((int) 520766)
0x1bc: Push((int) 21976)
0x1bd: Push((int) 21979)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Return(); Pop(0)

0x1c1: Push((int) 21974)
0x1c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1c4: PushEmpty(string)
0x1c5: Stack[-1] = "Declaim"
0x1c6: Call2 0x18e

0x1c7: Pop(1)
0x1c8: Push((int) 520761)
0x1c9: @@ SetMessage(Stack[-1])
0x1ca: Pop(1)
0x1cb: @@ ClearReplies()
0x1cc: Pop(0)
0x1cd: Push((int) 520762)
0x1ce: Push((int) 21976)
0x1cf: Push((int) 21975)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: Return(); Pop(0)

0x1d3: Push((int) 21976)
0x1d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1d6: PushEmpty(string)
0x1d7: Stack[-1] = "Declaim"
0x1d8: Call2 0x18e

0x1d9: Pop(1)
0x1da: Push((int) 520763)
0x1db: @@ SetMessage(Stack[-1])
0x1dc: Pop(1)
0x1dd: @@ ClearReplies()
0x1de: Pop(0)
0x1df: Push((int) 520764)
0x1e0: Push((int) -1)
0x1e1: Push((int) 21977)
0x1e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e3: Pop(3)
0x1e4: Push((int) 520765)
0x1e5: Push((int) -1)
0x1e6: Push((int) 21978)
0x1e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e8: Pop(3)
0x1e9: Return(); Pop(0)

0x1ea: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1eb: PushEmpty(bool)
0x1ec: Call2 0x535

0x1ed: Pop(0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ef: @ lshStopAnimation()
0x1f0: Pop(0)
0x1f1: GOTO 0x1f4

0x1f2: @ StopAnimation()
0x1f3: Pop(0)
0x1f4: Return(); Pop(0)

0x1f5: GOTO 0x1a5

0x1f6: Return(); Pop(0)

0x1f7: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1f8: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1f9: PushEmpty(bool, object, float)
0x1fa: Stack[-2] = Stack[-12]
0x1fb: Stack[-1] = (float) 70.0
0x1fc: Call2 0x3e2

0x1fd: Pop(2)
0x1fe: Pop(1); Push((bool) Stack[-1] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x200: Stack[-10] = (int) -2
0x201: Return(); Pop(8)

0x202: @ CreateDialog(Stack[-4])
0x203: Pop(0)
0x204: PushEmpty(int)
0x205: Call2 0x52f

0x206: Pop(0)
0x207: @@ SetNPCName(Stack[-1])
0x208: Pop(1)
0x209: PushEmpty(int)
0x20a: Call2 0x52d

0x20b: Pop(0)
0x20c: @@ SetNPCDescription(Stack[-1])
0x20d: Pop(1)
0x20e: PushEmpty(string)
0x20f: Call2 0x531

0x210: Pop(0)
0x211: @@ SetPhoto(Stack[-1])
0x212: Pop(1)
0x213: PushEmpty(string)
0x214: Call2 0x533

0x215: Pop(0)
0x216: @@ SetPhoto2(Stack[-1])
0x217: Pop(1)
0x218: PushEmpty(int)
0x219: Call2 0x537

0x21a: Pop(0)
0x21b: @@ SetPlayerName(Stack[-1])
0x21c: Pop(1)
0x21d: Stack[-2] = (int) -1
0x21e: @ IsOverrideActive(Stack[-3])
0x21f: Pop(0)
0x220: Push(Stack[-3])
0x221: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x222: Stack[-10] = (int) -2
0x223: Return(); Pop(8)

0x224: @ DoDialog(Stack[-4])
0x225: Pop(0)
0x226: PushEmpty(bool, object)
0x227: PushEmpty(object)
0x228: Call2 0x4f6

0x229: Stack[-2] = Stack[-1]
0x22a: Pop(1)
0x22b: Call2 0x437

0x22c: Pop(2)
0x22d: PushEmpty(object, object)
0x22e: Stack[-2] = Stack[-11]
0x22f: Stack[-1] = Stack[-6]
0x230: Push(-2, 4); TaskCall(5)
0x231: Call2 0x248

0x232: Pop(-2, 4); TaskReturn
0x233: Pop(2)
0x234: @@ IsDialogEnd(Stack[-1])
0x235: Pop(0)
0x236: Pop(0); Push((bool) Stack[-1] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x238: @ sync()
0x239: Pop(0)
0x23a: @@ IsDialogEnd(Stack[-1])
0x23b: Pop(0)
0x23c: GOTO 0x236

0x23d: PushEmpty(object)
0x23e: Stack[-1] = Stack[-10]
0x23f: Call2 0x426

0x240: Pop(1)
0x241: @ StopDialog(Stack[-4])
0x242: Pop(0)
0x243: @@ GetReturnValue(Stack[-2])
0x244: Pop(0)
0x245: Stack[-10] = Stack[-2]
0x246: Return(); Pop(8)

0x247: Stack[-4] = 0
0x248: PushEmpty()
0x249: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x24a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x24b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x24c: Push((int) 1)
0x24d: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x24e: PushEmpty(string)
0x24f: Stack[-1] = "Neutral"
0x250: Call2 0x282

0x251: Pop(1)
0x252: Push((int) 540554)
0x253: @@ SetMessage(Stack[-1])
0x254: Pop(1)
0x255: @@ ClearReplies()
0x256: Pop(0)
0x257: Push((int) 540555)
0x258: Push((int) -1)
0x259: Push((int) 42564)
0x25a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25b: Pop(3)
0x25c: Push((int) 540794)
0x25d: Push((int) -1)
0x25e: Push((int) 42843)
0x25f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x260: Pop(3)
0x261: GOTO 0x264

0x262: Return(); Pop(0)

0x263: GOTO 0x24c

0x264: PushEmpty(bool)
0x265: Call2 0x535

0x266: Pop(0)
0x267: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x268: @ lshWaitForAnimEnd()
0x269: Pop(0)
0x26a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x26b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26c: GOTO 0x272

0x26d: PushEmpty(string)
0x26e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x26f: Call2 0x4c1

0x270: Pop(1)
0x271: GOTO 0x268

0x272: GOTO 0x281

0x273: Push("all")
0x274: Push("idle")
0x275: @ PlayAnimation(Stack[-2], Stack[-1])
0x276: Pop(2)
0x277: @ WaitForAnimEnd()
0x278: Pop(0)
0x279: Push( Stack[3 + Tasks[-1].StackPointer] )
0x27a: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27b: GOTO 0x281

0x27c: Push("all")
0x27d: Push("idle")
0x27e: @ PlayAnimation(Stack[-2], Stack[-1])
0x27f: Pop(2)
0x280: GOTO 0x277

0x281: Return(); Pop(0)

0x282: PushEmpty()
0x283: PushEmpty(bool)
0x284: Call2 0x535

0x285: Pop(0)
0x286: Pop(1); Push((bool) Stack[-1] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: Return(); Pop(0)

0x289: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: Return(); Pop(0)

0x28c: PushEmpty(string, bool)
0x28d: Stack[-2] = Stack[-3]
0x28e: Push("")
0x28f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x290: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x291: Stack[-1] = (bool) 0
0x292: GOTO 0x294

0x293: Stack[-1] = (bool) 1
0x294: Call2 0x4d1

0x295: Pop(2)
0x296: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x297: Return(); Pop(0)

0x298: PushEmpty()
0x299: Push((int) 1)
0x29a: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x29b: PushEmpty()
0x29c: Call2 0x4ef

0x29d: Pop(0)
0x29e: Push((int) 42563)
0x29f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2a1: PushEmpty(string)
0x2a2: Stack[-1] = "Neutral"
0x2a3: Call2 0x282

0x2a4: Pop(1)
0x2a5: Push((int) 540554)
0x2a6: @@ SetMessage(Stack[-1])
0x2a7: Pop(1)
0x2a8: @@ ClearReplies()
0x2a9: Pop(0)
0x2aa: Push((int) 540555)
0x2ab: Push((int) -1)
0x2ac: Push((int) 42564)
0x2ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ae: Pop(3)
0x2af: Push((int) 540794)
0x2b0: Push((int) -1)
0x2b1: Push((int) 42843)
0x2b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b3: Pop(3)
0x2b4: Return(); Pop(0)

0x2b5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2b6: PushEmpty(bool)
0x2b7: Call2 0x535

0x2b8: Pop(0)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2ba: @ lshStopAnimation()
0x2bb: Pop(0)
0x2bc: GOTO 0x2bf

0x2bd: @ StopAnimation()
0x2be: Pop(0)
0x2bf: Return(); Pop(0)

0x2c0: GOTO 0x299

0x2c1: Return(); Pop(0)

0x2c2: PushEmpty()
0x2c3: Call2 0x2c6

0x2c4: Pop(0)
0x2c5: Return(); Pop(0)

0x2c6: PushEmpty(bool)
0x2c7: Call2 0x3dd

0x2c8: Pop(0)
0x2c9: Pop(1); Push((bool) Stack[-1] == 0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cb: @ Hold()
0x2cc: Pop(0)
0x2cd: @ GetDirection(Stack[-0])
0x2ce: Pop(0)
0x2cf: PushEmpty()
0x2d0: Call2 0x376

0x2d1: Pop(0)
0x2d2: GOTO 0x2cf

0x2d3: Return(); Pop(0)

0x2d4: PushEmpty(object, object)
0x2d5: Push("player")
0x2d6: @ FindActor(Stack[-2], Stack[-1])
0x2d7: Pop(1)
0x2d8: Pop(0); Push((bool) Stack[-1] == 0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2da: Stack[-3] = (bool) 0
0x2db: Return(); Pop(2)

0x2dc: PushEmpty(bool, object)
0x2dd: Stack[-1] = Stack[-3]
0x2de: Call2 0x3d4

0x2df: Stack[-5] = Stack[-2]
0x2e0: Pop(2)
0x2e1: Return(); Pop(2)

0x2e2: Stack[-1] = 0
0x2e3: Push(CvectorIndex(Stack[-0], 0))
0x2e4: Push(CvectorIndex(Stack[-0], 2))
0x2e5: @ RotateAsync(Stack[-2], Stack[-1])
0x2e6: Pop(2)
0x2e7: Return(); Pop(0)

0x2e8: PushEmpty(object, bool, object, bool)
0x2e9: Push("player")
0x2ea: @ FindActor(Stack[-3], Stack[-1])
0x2eb: Pop(1)
0x2ec: Pop(0); Push((bool) Stack[-2] == 0)
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ee: Stack[-5] = (bool) 0
0x2ef: Return(); Pop(4)

0x2f0: PushEmpty(float, object)
0x2f1: Stack[-1] = Stack[-4]
0x2f2: Call2 0x3c2

0x2f3: Pop(1)
0x2f4: Push((float)90000.0)
0x2f5: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f7: Stack[-5] = (bool) 0
0x2f8: Return(); Pop(4)

0x2f9: @ CanSee(Stack[-1], Stack[-2])
0x2fa: Pop(0)
0x2fb: Stack[-5] = Stack[-1]
0x2fc: Return(); Pop(4)

0x2fd: Stack[-2] = 0
0x2fe: PushEmpty(float, float)
0x2ff: Push((int) 8)
0x300: Push((int) 16)
0x301: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x302: Pop(2)
0x303: Push((int) 10)
0x304: @ SetTimer(Stack[-1], Stack[-2])
0x305: Pop(1)
0x306: Return(); Pop(2)

0x307: Push((int) 10)
0x308: @ KillTimer(Stack[-1])
0x309: Pop(1)
0x30a: Return(); Pop(0)

0x30b: PushEmpty()
0x30c: Push((int) 10)
0x30d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x30f: PushEmpty()
0x310: Call2 0x307

0x311: Pop(0)
0x312: PushEmpty(bool)
0x313: Stack[-1] = (bool) 0
0x314: PushEmpty(bool)
0x315: Call2 0x3dd

0x316: Pop(0)
0x317: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x318: PushEmpty(bool)
0x319: Call2 0x2e8

0x31a: Pop(0)
0x31b: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31c: Stack[-1] = (bool) 1
0x31d: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x31e: PushEmpty(bool)
0x31f: Call2 0x2d4

0x320: Pop(0)
0x321: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x322: PushEmpty(bool, object)
0x323: PushEmpty(object)
0x324: Call2 0x4f6

0x325: Stack[-2] = Stack[-1]
0x326: Pop(1)
0x327: Call2 0x471

0x328: Pop(2)
0x329: GOTO 0x330

0x32a: PushEmpty()
0x32b: Call2 0x2e3

0x32c: Pop(0)
0x32d: PushEmpty()
0x32e: Call2 0x2fe

0x32f: Pop(0)
0x330: Return(); Pop(0)

0x331: PushEmpty()
0x332: Call2 0x3bd

0x333: Pop(0)
0x334: PushEmpty()
0x335: Call2 0x307

0x336: Pop(0)
0x337: @ lshStopSpeech()
0x338: Pop(0)
0x339: @ lshStopAnimation()
0x33a: Pop(0)
0x33b: @ StopAsync()
0x33c: Pop(0)
0x33d: @ Hold()
0x33e: Pop(0)
0x33f: Return(); Pop(0)

0x340: @ StopGroup0()
0x341: Pop(0)
0x342: PushEmpty()
0x343: Call2 0x307

0x344: Pop(0)
0x345: PushEmpty(string)
0x346: Stack[-1] = "Neutral"
0x347: Call2 0x4c1

0x348: Pop(1)
0x349: PushEmpty()
0x34a: Call2 0x2fe

0x34b: Pop(0)
0x34c: Return(); Pop(0)

0x34d: PushEmpty()
0x34e: Push(Stack[-1])
0x34f: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x350: PushEmpty()
0x351: Call2 0x2fe

0x352: Pop(0)
0x353: GOTO 0x358

0x354: PushEmpty(string)
0x355: Stack[-1] = "Neutral"
0x356: Call2 0x4c1

0x357: Pop(1)
0x358: Return(); Pop(0)

0x359: PushEmpty(bool, bool)
0x35a: @ IsOverrideActive(Stack[-1])
0x35b: Pop(0)
0x35c: Pop(0); Push((bool) Stack[-1] == 0)
0x35d: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x35e: EventDisable(0)
0x35f: PushEmpty()
0x360: Call2 0x3bd

0x361: Pop(0)
0x362: PushEmpty(bool, object)
0x363: Stack[-1] = Stack[-5]
0x364: Call2 0x3d4

0x365: Pop(2)
0x366: EventEnable(0)
0x367: PushEmpty(object)
0x368: Stack[-1] = Stack[-4]
0x369: Call2 0x548

0x36a: Pop(1)
0x36b: PushEmpty(string)
0x36c: Stack[-1] = "Neutral"
0x36d: Call2 0x4c1

0x36e: Pop(1)
0x36f: PushEmpty()
0x370: Call2 0x307

0x371: Pop(0)
0x372: PushEmpty()
0x373: Call2 0x2fe

0x374: Pop(0)
0x375: Return(); Pop(2)

0x376: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x377: @ WaitForAnimEnd()
0x378: Pop(0)
0x379: PushEmpty(bool)
0x37a: Call2 0x3dd

0x37b: Pop(0)
0x37c: Pop(1); Push((bool) Stack[-1] == 0)
0x37d: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37e: Return(); Pop(12)

0x37f: PushEmpty(int)
0x380: Call2 0x51c

0x381: Stack[-7] = Stack[-1]
0x382: Pop(1)
0x383: Stack[-5] = (int) 0
0x384: PushEmpty(bool)
0x385: Stack[-1] = (bool) 0
0x386: Push((int) 5)
0x387: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x388: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x389: PushEmpty(bool)
0x38a: Call2 0x3dd

0x38b: Pop(0)
0x38c: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38d: Stack[-1] = (bool) 1
0x38e: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x38f: Pop(0); Push((bool) Stack[-6] == 0)
0x390: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x391: Push((int) 3)
0x392: @ Sleep(Stack[-1], Stack[-5])
0x393: Pop(1)
0x394: Pop(0); Push((bool) Stack[-4] == 0)
0x395: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x396: GOTO 0x3b8

0x397: GOTO 0x3ad

0x398: @ irand(Stack[-3], Stack[-6])
0x399: Pop(0)
0x39a: Push((int) 5)
0x39b: @ irand(Stack[-3], Stack[-1])
0x39c: Pop(1)
0x39d: Push((int) 0)
0x39e: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x39f: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x3a0: Stack[-3] = (int) 0
0x3a1: Push("all")
0x3a2: PushEmpty(string, int)
0x3a3: Stack[-1] = Stack[-6]
0x3a4: Call2 0x515

0x3a5: Pop(1)
0x3a6: @ PlayAnimation(Stack[-2], Stack[-1])
0x3a7: Pop(2)
0x3a8: @ WaitForAnimEnd(Stack[-1])
0x3a9: Pop(0)
0x3aa: Pop(0); Push((bool) Stack[-1] == 0)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ac: GOTO 0x3b8

0x3ad: PushEmpty(bool)
0x3ae: Call2 0x3bb

0x3af: Pop(0)
0x3b0: Pop(1); Push((bool) Stack[-1] == 0)
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b2: GOTO 0x3b8

0x3b3: @ ResetAAS()
0x3b4: Pop(0)
0x3b5: Push((int) 1)
0x3b6: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3b7: GOTO 0x384

0x3b8: @ ResetAAS()
0x3b9: Pop(0)
0x3ba: Return(); Pop(12)

0x3bb: Stack[-1] = (bool) 1
0x3bc: Return(); Pop(0)

0x3bd: @ StopAnimation()
0x3be: Pop(0)
0x3bf: @ StopGroup0()
0x3c0: Pop(0)
0x3c1: Return(); Pop(0)

0x3c2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3c3: @ GetPosition(Stack[-3])
0x3c4: Pop(0)
0x3c5: @@ GetPosition(Stack[-2])
0x3c6: Pop(0)
0x3c7: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3c8: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3c9: Return(); Pop(6)

0x3ca: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x3cb: @ GetPosition(Stack[-3])
0x3cc: Pop(0)
0x3cd: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x3ce: Push(CvectorIndex(Stack[-2], 0))
0x3cf: Push(CvectorIndex(Stack[-3], 2))
0x3d0: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x3d1: Pop(2)
0x3d2: Stack[-8] = Stack[-1]
0x3d3: Return(); Pop(6)

0x3d4: PushEmpty(cvector, cvector)
0x3d5: @@ GetPosition(Stack[-1])
0x3d6: Pop(0)
0x3d7: PushEmpty(bool, cvector)
0x3d8: Stack[-1] = Stack[-3]
0x3d9: Call2 0x3ca

0x3da: Stack[-6] = Stack[-2]
0x3db: Pop(2)
0x3dc: Return(); Pop(2)

0x3dd: PushEmpty(bool, bool)
0x3de: @ IsLoaded(Stack[-1])
0x3df: Pop(0)
0x3e0: Stack[-3] = Stack[-1]
0x3e1: Return(); Pop(2)

0x3e2: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3e3: @@ GetPosition(Stack[-8])
0x3e4: Pop(0)
0x3e5: @@ GetEyesHeight(Stack[-9])
0x3e6: Pop(0)
0x3e7: Push(CvectorIndex(Stack[-8], 1))
0x3e8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3e9: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3ea: @ GetPosition(Stack[-7])
0x3eb: Pop(0)
0x3ec: @ GetEyesHeight(Stack[-9])
0x3ed: Pop(0)
0x3ee: Push(CvectorIndex(Stack[-7], 1))
0x3ef: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3f0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3f1: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3f2: Push(CvectorIndex(Stack[-6], 1))
0x3f3: Stack[-1] = (int) 0
0x3f4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3f5: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3f6: Pop(1); Push(Sqrt(Stack[-1]))
0x3f7: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3f8: Stack[-5] = -Stack[-6]; Pop(0);
0x3f9: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3fa: PushEmpty(cvector, cvector)
0x3fb: Push(CVector(0.0, 1.0, 0.0))
0x3fc: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3fd: Call2 0x4fc

0x3fe: Pop(1)
0x3ff: Push((int) 25)
0x400: Pop(2); Push(Stack[-2] * Stack[-1]);
0x401: Pop(2); Push(Stack[-2] + Stack[-1]);
0x402: Push(CVector(0.0, 10.0, 0.0))
0x403: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x404: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x405: @ IsOverrideActive(Stack[-2])
0x406: Pop(0)
0x407: Push(Stack[-2])
0x408: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x409: Stack[-21] = (bool) 0
0x40a: Return(); Pop(18)

0x40b: @ StopWorld()
0x40c: Pop(0)
0x40d: @ CameraTransit(Stack[-3], Stack[-5])
0x40e: Pop(0)
0x40f: Push(CvectorIndex(Stack[-4], 0))
0x410: Push(CvectorIndex(Stack[-5], 2))
0x411: @ Rotate(Stack[-2], Stack[-1])
0x412: Pop(2)
0x413: PushEmpty(bool)
0x414: Call2 0x535

0x415: Pop(0)
0x416: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x417: GOTO 0x420

0x418: Push("head")
0x419: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x41a: Pop(1)
0x41b: Push(Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41d: Push("head")
0x41e: @ LookAsyncCamera(Stack[-1])
0x41f: Pop(1)
0x420: @ CameraWaitForPlayFinish()
0x421: Pop(0)
0x422: @ ResumeWorld()
0x423: Pop(0)
0x424: Stack[-21] = (bool) 1
0x425: Return(); Pop(18)

0x426: PushEmpty(bool, bool)
0x427: @ CameraSwitchToNormal()
0x428: Pop(0)
0x429: PushEmpty(bool)
0x42a: Call2 0x535

0x42b: Pop(0)
0x42c: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42d: GOTO 0x436

0x42e: Push("head")
0x42f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x430: Pop(1)
0x431: Push(Stack[-1])
0x432: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x433: Push("head")
0x434: @ UnlookAsync(Stack[-1])
0x435: Pop(1)
0x436: Return(); Pop(2)

0x437: PushEmpty(int, int, int, int)
0x438: Push("voice_common")
0x439: @ GetVariable(Stack[-1], Stack[-3])
0x43a: Pop(1)
0x43b: Push(Stack[-2])
0x43c: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x43d: PushEmpty(bool, object)
0x43e: Stack[-1] = Stack[-7]
0x43f: Call2 0x471

0x440: Pop(1)
0x441: Pop(1); Push((bool) Stack[-1] == 0)
0x442: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x443: PushEmpty(bool, object)
0x444: Stack[-1] = Stack[-7]
0x445: Call2 0x496

0x446: Pop(1)
0x447: Pop(1); Push((bool) Stack[-1] == 0)
0x448: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x449: Stack[-6] = (bool) 0
0x44a: Return(); Pop(4)

0x44b: Push((int) 2)
0x44c: @ irand(Stack[-2], Stack[-1])
0x44d: Pop(1)
0x44e: Push(Stack[-1])
0x44f: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x450: Push("voice_common")
0x451: Push((int) 1)
0x452: Pop(1); Push(Stack[-4] + Stack[-1]);
0x453: Push((int) 3)
0x454: Pop(2); Push(Stack[-2] % Stack[-1]);
0x455: @ SetVariable(Stack[-2], Stack[-1])
0x456: Pop(2)
0x457: GOTO 0x45c

0x458: Push("voice_common")
0x459: Push((int) 0)
0x45a: @ SetVariable(Stack[-2], Stack[-1])
0x45b: Pop(2)
0x45c: GOTO 0x46f

0x45d: PushEmpty(bool, object)
0x45e: Stack[-1] = Stack[-7]
0x45f: Call2 0x496

0x460: Pop(1)
0x461: Pop(1); Push((bool) Stack[-1] == 0)
0x462: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x463: PushEmpty(bool, object)
0x464: Stack[-1] = Stack[-7]
0x465: Call2 0x471

0x466: Pop(1)
0x467: Pop(1); Push((bool) Stack[-1] == 0)
0x468: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x469: Stack[-6] = (bool) 0
0x46a: Return(); Pop(4)

0x46b: Push("voice_common")
0x46c: Push((int) 1)
0x46d: @ SetVariable(Stack[-2], Stack[-1])
0x46e: Pop(2)
0x46f: Stack[-6] = (bool) 1
0x470: Return(); Pop(4)

0x471: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x472: Stack[-5] = "c"
0x473: Stack[-4] = (int) 0
0x474: Push((int) 1)
0x475: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x476: Push((int) 1)
0x477: Pop(1); Push(Stack[-5] + Stack[-1]);
0x478: Pop(1); Push(Stack[-6] + Stack[-1]);
0x479: @@ HasProperty(Stack[-1], Stack[-4])
0x47a: Pop(1)
0x47b: Pop(0); Push((bool) Stack[-3] == 0)
0x47c: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x47d: GOTO 0x481

0x47e: Push((int) 1)
0x47f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x480: GOTO 0x474

0x481: Pop(0); Push((bool) Stack[-4] == 0)
0x482: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x483: Stack[-12] = (bool) 0
0x484: Return(); Pop(10)

0x485: Stack[-2] = (int) 0
0x486: Push((int) 1)
0x487: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x488: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x489: @ irand(Stack[-2], Stack[-4])
0x48a: Pop(0)
0x48b: Push((int) 1)
0x48c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x48d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x48e: @@ GetProperty(Stack[-1], Stack[-2])
0x48f: Pop(1)
0x490: PushEmpty(bool, string)
0x491: Stack[-1] = Stack[-3]
0x492: Call2 0x4e0

0x493: Stack[-14] = Stack[-2]
0x494: Pop(2)
0x495: Return(); Pop(10)

0x496: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x497: Push("d")
0x498: PushEmpty(int)
0x499: Call2 0x506

0x49a: Pop(0)
0x49b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x49c: Push("m")
0x49d: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x49e: Stack[-4] = (int) 0
0x49f: Push((int) 1)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4a1: Push((int) 1)
0x4a2: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4a3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4a4: @@ HasProperty(Stack[-1], Stack[-4])
0x4a5: Pop(1)
0x4a6: Pop(0); Push((bool) Stack[-3] == 0)
0x4a7: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a8: GOTO 0x4ac

0x4a9: Push((int) 1)
0x4aa: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4ab: GOTO 0x49f

0x4ac: Pop(0); Push((bool) Stack[-4] == 0)
0x4ad: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4ae: Stack[-12] = (bool) 0
0x4af: Return(); Pop(10)

0x4b0: Stack[-2] = (int) 0
0x4b1: Push((int) 1)
0x4b2: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b4: @ irand(Stack[-2], Stack[-4])
0x4b5: Pop(0)
0x4b6: Push((int) 1)
0x4b7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4b8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4b9: @@ GetProperty(Stack[-1], Stack[-2])
0x4ba: Pop(1)
0x4bb: PushEmpty(bool, string)
0x4bc: Stack[-1] = Stack[-3]
0x4bd: Call2 0x4e0

0x4be: Stack[-14] = Stack[-2]
0x4bf: Pop(2)
0x4c0: Return(); Pop(10)

0x4c1: PushEmpty(bool, float, float, bool, float, float)
0x4c2: @ lshHasAnimation(Stack[-3], Stack[-7])
0x4c3: Pop(0)
0x4c4: Push(Stack[-3])
0x4c5: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4c6: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x4c7: Pop(0)
0x4c8: Push((bool) 0)
0x4c9: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4ca: Pop(1)
0x4cb: GOTO 0x4d0

0x4cc: Push("Can't find lsh animation : ")
0x4cd: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4ce: @ Trace(Stack[-1])
0x4cf: Pop(1)
0x4d0: Return(); Pop(6)

0x4d1: PushEmpty(bool, float, float, bool, float, float)
0x4d2: @ lshHasAnimation(Stack[-3], Stack[-8])
0x4d3: Pop(0)
0x4d4: Push(Stack[-3])
0x4d5: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4d6: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x4d7: Pop(0)
0x4d8: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x4d9: Pop(0)
0x4da: GOTO 0x4df

0x4db: Push("Can't find lsh animation : ")
0x4dc: Pop(1); Push(Stack[-1] + Stack[-9]);
0x4dd: @ Trace(Stack[-1])
0x4de: Pop(1)
0x4df: Return(); Pop(6)

0x4e0: PushEmpty(bool, bool)
0x4e1: PushEmpty(bool)
0x4e2: Call2 0x535

0x4e3: Pop(0)
0x4e4: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4e5: @ lshHasSpeech(Stack[-1], Stack[-3])
0x4e6: Pop(0)
0x4e7: Push(Stack[-1])
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4e9: @ lshPlaySpeech(Stack[-3])
0x4ea: Pop(0)
0x4eb: Stack[-4] = (bool) 1
0x4ec: Return(); Pop(2)

0x4ed: Stack[-4] = (bool) 0
0x4ee: Return(); Pop(2)

0x4ef: PushEmpty(bool)
0x4f0: Call2 0x535

0x4f1: Pop(0)
0x4f2: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f3: @ lshStopSpeech()
0x4f4: Pop(0)
0x4f5: Return(); Pop(0)

0x4f6: PushEmpty(object, object)
0x4f7: @ self(Stack[-1])
0x4f8: Pop(0)
0x4f9: Stack[-3] = Stack[-1]
0x4fa: Return(); Pop(2)

0x4fb: Stack[-1] = 0
0x4fc: PushEmpty(float, float)
0x4fd: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4fe: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4ff: Push((float)0.0)
0x500: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x501: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x502: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x503: Return(); Pop(2)

0x504: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x505: Return(); Pop(2)

0x506: PushEmpty(float, float)
0x507: @ GetGameTime(Stack[-1])
0x508: Pop(0)
0x509: Push((int) 1)
0x50a: PushEmpty(int)
0x50b: Push((int) 24)
0x50c: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x50d: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x50e: Return(); Pop(2)

0x50f: PushEmpty()
0x510: PushEmpty(int)
0x511: Call2 0x506

0x512: Pop(0)
0x513: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x514: Return(); Pop(0)

0x515: PushEmpty(string, string)
0x516: Stack[-1] = "idle"
0x517: Push(Stack[-3])
0x518: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x519: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x51a: Stack[-4] = Stack[-1]
0x51b: Return(); Pop(2)

0x51c: PushEmpty(int, bool, int, bool)
0x51d: Stack[-2] = (int) 0
0x51e: Push("all")
0x51f: PushEmpty(string, int)
0x520: Stack[-1] = Stack[-5]
0x521: Call2 0x515

0x522: Pop(1)
0x523: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x524: Pop(2)
0x525: Pop(0); Push((bool) Stack[-1] == 0)
0x526: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x527: GOTO 0x52b

0x528: Push((int) 1)
0x529: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x52a: GOTO 0x51e

0x52b: Stack[-5] = Stack[-2]
0x52c: Return(); Pop(4)

0x52d: Stack[-1] = (int) 515544
0x52e: Return(); Pop(0)

0x52f: Stack[-1] = (int) 502869
0x530: Return(); Pop(0)

0x531: Stack[-1] = "ui/NPC_Mark.png"
0x532: Return(); Pop(0)

0x533: Stack[-1] = "ui/NPC_Mark_b.png"
0x534: Return(); Pop(0)

0x535: Stack[-1] = (bool) 1
0x536: Return(); Pop(0)

0x537: PushEmpty(int, int)
0x538: Push("branch")
0x539: @ GetVariable(Stack[-1], Stack[-2])
0x53a: Pop(1)
0x53b: Push((int) 0)
0x53c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x53d: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x53e: Stack[-3] = (int) 1
0x53f: Return(); Pop(2)

0x540: GOTO 0x546

0x541: Push((int) 1)
0x542: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x543: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x544: Stack[-3] = (int) 2
0x545: Return(); Pop(2)

0x546: Stack[-3] = (int) 3
0x547: Return(); Pop(2)

0x548: PushEmpty(int, int, int, int)
0x549: Push("mt_mark")
0x54a: @ GetVariable(Stack[-1], Stack[-3])
0x54b: Pop(1)
0x54c: Pop(0); Push((bool) Stack[-2] == 0)
0x54d: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x54e: PushEmpty(int, object)
0x54f: Stack[-1] = Stack[-7]
0x550: Push(-2, 1); TaskCall(2)
0x551: Call2 0x103

0x552: Pop(-2, 1); TaskReturn
0x553: Pop(2)
0x554: Push("mt_mark")
0x555: Push((int) 1)
0x556: @ SetVariable(Stack[-2], Stack[-1])
0x557: Pop(2)
0x558: Push("d12_mark")
0x559: @ GetVariable(Stack[-1], Stack[-2])
0x55a: Pop(1)
0x55b: PushEmpty(bool)
0x55c: Stack[-1] = (bool) 0
0x55d: PushEmpty(bool, int)
0x55e: Stack[-1] = (int) 12
0x55f: Call2 0x50f

0x560: Pop(1)
0x561: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x562: Pop(0); Push((bool) Stack[-2] == 0)
0x563: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x564: Stack[-1] = (bool) 1
0x565: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x566: PushEmpty(int, object)
0x567: Stack[-1] = Stack[-7]
0x568: Push(-2, 1); TaskCall(0)
0x569: Call2 0x0

0x56a: Pop(-2, 1); TaskReturn
0x56b: Pop(2)
0x56c: Push("d12_mark")
0x56d: Push((int) 1)
0x56e: @ SetVariable(Stack[-2], Stack[-1])
0x56f: Pop(2)
0x570: Return(); Pop(4)

0x571: PushEmpty(int, object)
0x572: Stack[-1] = Stack[-7]
0x573: Push(-2, 1); TaskCall(4)
0x574: Call2 0x1f7

0x575: Pop(-2, 1); TaskReturn
0x576: Pop(2)
0x577: Return(); Pop(4)

