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
	Untrust
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ui/NPC_Petr.png
	ui/NPC_Petr_b.png
	oob2Petr1
	branch
	mt_petr
	d12_petr

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

RunOp = 0x3f1
RunTask = 8

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a4 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x28b Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3c7 Vars = (int, int)
	GTASK_8 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x43a Vars = (int)
		EVENT_6 Op = 0x460 Vars = ()
		EVENT_5 Op = 0x46f Vars = ()
		EVENT_45 Op = 0x47c Vars = (bool)
		EVENT_0 Op = 0x488 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x511

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x663

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x661

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x665

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x667

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x67d

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
0x31: Call2 0x625

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x566

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
0x48: Call2 0x555

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
0x73: Call2 0x669

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x5f0

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
0x92: Call2 0x669

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
0xa2: Call2 0x600

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x61e

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
0xf8: Call2 0x669

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
0x108: Call2 0x511

0x109: Pop(2)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-10] = (int) -2
0x10d: Return(); Pop(8)

0x10e: @ CreateDialog(Stack[-4])
0x10f: Pop(0)
0x110: PushEmpty(int)
0x111: Call2 0x663

0x112: Pop(0)
0x113: @@ SetNPCName(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(int)
0x116: Call2 0x661

0x117: Pop(0)
0x118: @@ SetNPCDescription(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(string)
0x11b: Call2 0x665

0x11c: Pop(0)
0x11d: @@ SetPhoto(Stack[-1])
0x11e: Pop(1)
0x11f: PushEmpty(string)
0x120: Call2 0x667

0x121: Pop(0)
0x122: @@ SetPhoto2(Stack[-1])
0x123: Pop(1)
0x124: PushEmpty(int)
0x125: Call2 0x67d

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
0x134: Call2 0x625

0x135: Stack[-2] = Stack[-1]
0x136: Pop(1)
0x137: Call2 0x566

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
0x14b: Call2 0x555

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
0x15b: Stack[-1] = "Neutral"
0x15c: Call2 0x18e

0x15d: Pop(1)
0x15e: Push((int) 518045)
0x15f: @@ SetMessage(Stack[-1])
0x160: Pop(1)
0x161: @@ ClearReplies()
0x162: Pop(0)
0x163: Push((int) 518046)
0x164: Push((int) 32123)
0x165: Push((int) 19179)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Push((int) 530814)
0x169: Push((int) 32123)
0x16a: Push((int) 32122)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: GOTO 0x170

0x16e: Return(); Pop(0)

0x16f: GOTO 0x158

0x170: PushEmpty(bool)
0x171: Call2 0x669

0x172: Pop(0)
0x173: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x174: @ lshWaitForAnimEnd()
0x175: Pop(0)
0x176: Push( Stack[3 + Tasks[-1].StackPointer] )
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: GOTO 0x17e

0x179: PushEmpty(string)
0x17a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x17b: Call2 0x5f0

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
0x190: Call2 0x669

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
0x1a0: Call2 0x600

0x1a1: Pop(2)
0x1a2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty()
0x1a5: Push((int) 1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1a7: PushEmpty()
0x1a8: Call2 0x61e

0x1a9: Pop(0)
0x1aa: Push((int) 19178)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Neutral"
0x1af: Call2 0x18e

0x1b0: Pop(1)
0x1b1: Push((int) 518045)
0x1b2: @@ SetMessage(Stack[-1])
0x1b3: Pop(1)
0x1b4: @@ ClearReplies()
0x1b5: Pop(0)
0x1b6: Push((int) 518046)
0x1b7: Push((int) 32123)
0x1b8: Push((int) 19179)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Push((int) 530814)
0x1bc: Push((int) 32123)
0x1bd: Push((int) 32122)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Return(); Pop(0)

0x1c1: Push((int) 32123)
0x1c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1c4: PushEmpty(string)
0x1c5: Stack[-1] = "Neutral"
0x1c6: Call2 0x18e

0x1c7: Pop(1)
0x1c8: Push((int) 530815)
0x1c9: @@ SetMessage(Stack[-1])
0x1ca: Pop(1)
0x1cb: @@ ClearReplies()
0x1cc: Pop(0)
0x1cd: Push((int) 530816)
0x1ce: Push((int) -1)
0x1cf: Push((int) 32125)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: Push((int) 530817)
0x1d3: Push((int) -1)
0x1d4: Push((int) 32126)
0x1d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d6: Pop(3)
0x1d7: Return(); Pop(0)

0x1d8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d9: PushEmpty(bool)
0x1da: Call2 0x669

0x1db: Pop(0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1dd: @ lshStopAnimation()
0x1de: Pop(0)
0x1df: GOTO 0x1e2

0x1e0: @ StopAnimation()
0x1e1: Pop(0)
0x1e2: Return(); Pop(0)

0x1e3: GOTO 0x1a5

0x1e4: Return(); Pop(0)

0x1e5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1e6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1e7: PushEmpty(bool, object, float)
0x1e8: Stack[-2] = Stack[-12]
0x1e9: Stack[-1] = (float) 70.0
0x1ea: Call2 0x511

0x1eb: Pop(2)
0x1ec: Pop(1); Push((bool) Stack[-1] == 0)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ee: Stack[-10] = (int) -2
0x1ef: Return(); Pop(8)

0x1f0: @ CreateDialog(Stack[-4])
0x1f1: Pop(0)
0x1f2: PushEmpty(int)
0x1f3: Call2 0x663

0x1f4: Pop(0)
0x1f5: @@ SetNPCName(Stack[-1])
0x1f6: Pop(1)
0x1f7: PushEmpty(int)
0x1f8: Call2 0x661

0x1f9: Pop(0)
0x1fa: @@ SetNPCDescription(Stack[-1])
0x1fb: Pop(1)
0x1fc: PushEmpty(string)
0x1fd: Call2 0x665

0x1fe: Pop(0)
0x1ff: @@ SetPhoto(Stack[-1])
0x200: Pop(1)
0x201: PushEmpty(string)
0x202: Call2 0x667

0x203: Pop(0)
0x204: @@ SetPhoto2(Stack[-1])
0x205: Pop(1)
0x206: PushEmpty(int)
0x207: Call2 0x67d

0x208: Pop(0)
0x209: @@ SetPlayerName(Stack[-1])
0x20a: Pop(1)
0x20b: Stack[-2] = (int) -1
0x20c: @ IsOverrideActive(Stack[-3])
0x20d: Pop(0)
0x20e: Push(Stack[-3])
0x20f: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x210: Stack[-10] = (int) -2
0x211: Return(); Pop(8)

0x212: @ DoDialog(Stack[-4])
0x213: Pop(0)
0x214: PushEmpty(bool, object)
0x215: PushEmpty(object)
0x216: Call2 0x625

0x217: Stack[-2] = Stack[-1]
0x218: Pop(1)
0x219: Call2 0x566

0x21a: Pop(2)
0x21b: PushEmpty(object, object)
0x21c: Stack[-2] = Stack[-11]
0x21d: Stack[-1] = Stack[-6]
0x21e: Push(-2, 4); TaskCall(5)
0x21f: Call2 0x236

0x220: Pop(-2, 4); TaskReturn
0x221: Pop(2)
0x222: @@ IsDialogEnd(Stack[-1])
0x223: Pop(0)
0x224: Pop(0); Push((bool) Stack[-1] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x226: @ sync()
0x227: Pop(0)
0x228: @@ IsDialogEnd(Stack[-1])
0x229: Pop(0)
0x22a: GOTO 0x224

0x22b: PushEmpty(object)
0x22c: Stack[-1] = Stack[-10]
0x22d: Call2 0x555

0x22e: Pop(1)
0x22f: @ StopDialog(Stack[-4])
0x230: Pop(0)
0x231: @@ GetReturnValue(Stack[-2])
0x232: Pop(0)
0x233: Stack[-10] = Stack[-2]
0x234: Return(); Pop(8)

0x235: Stack[-4] = 0
0x236: PushEmpty()
0x237: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x238: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x239: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x23a: Push((int) 1)
0x23b: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x23c: PushEmpty(string)
0x23d: Stack[-1] = "Neutral"
0x23e: Call2 0x275

0x23f: Pop(1)
0x240: Push((int) 518209)
0x241: @@ SetMessage(Stack[-1])
0x242: Pop(1)
0x243: @@ ClearReplies()
0x244: Pop(0)
0x245: PushEmpty(bool, object)
0x246: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x247: Call2 0x671

0x248: Pop(1)
0x249: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24a: Push((int) 519429)
0x24b: Push((int) 20597)
0x24c: Push((int) 20596)
0x24d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24e: Pop(3)
0x24f: Push((int) 518211)
0x250: Push((int) -1)
0x251: Push((int) 19324)
0x252: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x253: Pop(3)
0x254: GOTO 0x257

0x255: Return(); Pop(0)

0x256: GOTO 0x23a

0x257: PushEmpty(bool)
0x258: Call2 0x669

0x259: Pop(0)
0x25a: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x25b: @ lshWaitForAnimEnd()
0x25c: Pop(0)
0x25d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x25e: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25f: GOTO 0x265

0x260: PushEmpty(string)
0x261: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x262: Call2 0x5f0

0x263: Pop(1)
0x264: GOTO 0x25b

0x265: GOTO 0x274

0x266: Push("all")
0x267: Push("idle")
0x268: @ PlayAnimation(Stack[-2], Stack[-1])
0x269: Pop(2)
0x26a: @ WaitForAnimEnd()
0x26b: Pop(0)
0x26c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x26d: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26e: GOTO 0x274

0x26f: Push("all")
0x270: Push("idle")
0x271: @ PlayAnimation(Stack[-2], Stack[-1])
0x272: Pop(2)
0x273: GOTO 0x26a

0x274: Return(); Pop(0)

0x275: PushEmpty()
0x276: PushEmpty(bool)
0x277: Call2 0x669

0x278: Pop(0)
0x279: Pop(1); Push((bool) Stack[-1] == 0)
0x27a: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27b: Return(); Pop(0)

0x27c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x27d: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27e: Return(); Pop(0)

0x27f: PushEmpty(string, bool)
0x280: Stack[-2] = Stack[-3]
0x281: Push("")
0x282: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x283: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x284: Stack[-1] = (bool) 0
0x285: GOTO 0x287

0x286: Stack[-1] = (bool) 1
0x287: Call2 0x600

0x288: Pop(2)
0x289: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x28a: Return(); Pop(0)

0x28b: PushEmpty()
0x28c: Push((int) 1)
0x28d: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x28e: PushEmpty()
0x28f: Call2 0x61e

0x290: Pop(0)
0x291: Push((int) 20596)
0x292: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x293: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x294: PushEmpty(object, object)
0x295: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x296: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x297: Call2 0x66b

0x298: Pop(2)
0x299: Push((int) 19322)
0x29a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x29c: PushEmpty(string)
0x29d: Stack[-1] = "Neutral"
0x29e: Call2 0x275

0x29f: Pop(1)
0x2a0: Push((int) 518209)
0x2a1: @@ SetMessage(Stack[-1])
0x2a2: Pop(1)
0x2a3: @@ ClearReplies()
0x2a4: Pop(0)
0x2a5: PushEmpty(bool, object)
0x2a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a7: Call2 0x671

0x2a8: Pop(1)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2aa: Push((int) 519429)
0x2ab: Push((int) 20597)
0x2ac: Push((int) 20596)
0x2ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ae: Pop(3)
0x2af: Push((int) 518211)
0x2b0: Push((int) -1)
0x2b1: Push((int) 19324)
0x2b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b3: Pop(3)
0x2b4: Return(); Pop(0)

0x2b5: Push((int) 20597)
0x2b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2b8: PushEmpty(string)
0x2b9: Stack[-1] = "Neutral"
0x2ba: Call2 0x275

0x2bb: Pop(1)
0x2bc: Push((int) 519430)
0x2bd: @@ SetMessage(Stack[-1])
0x2be: Pop(1)
0x2bf: @@ ClearReplies()
0x2c0: Pop(0)
0x2c1: Push((int) 519431)
0x2c2: Push((int) 20599)
0x2c3: Push((int) 20598)
0x2c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c5: Pop(3)
0x2c6: Push((int) 519438)
0x2c7: Push((int) -1)
0x2c8: Push((int) 20605)
0x2c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ca: Pop(3)
0x2cb: Return(); Pop(0)

0x2cc: Push((int) 20599)
0x2cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2cf: PushEmpty(string)
0x2d0: Stack[-1] = "Untrust"
0x2d1: Call2 0x275

0x2d2: Pop(1)
0x2d3: Push((int) 519432)
0x2d4: @@ SetMessage(Stack[-1])
0x2d5: Pop(1)
0x2d6: @@ ClearReplies()
0x2d7: Pop(0)
0x2d8: Push((int) 519433)
0x2d9: Push((int) 20601)
0x2da: Push((int) 20600)
0x2db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2dc: Pop(3)
0x2dd: Push((int) 519439)
0x2de: Push((int) 20607)
0x2df: Push((int) 20606)
0x2e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e1: Pop(3)
0x2e2: Return(); Pop(0)

0x2e3: Push((int) 20607)
0x2e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2e6: PushEmpty(string)
0x2e7: Stack[-1] = "Neutral"
0x2e8: Call2 0x275

0x2e9: Pop(1)
0x2ea: Push((int) 519440)
0x2eb: @@ SetMessage(Stack[-1])
0x2ec: Pop(1)
0x2ed: @@ ClearReplies()
0x2ee: Pop(0)
0x2ef: Push((int) 519441)
0x2f0: Push((int) 20601)
0x2f1: Push((int) 20608)
0x2f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f3: Pop(3)
0x2f4: Return(); Pop(0)

0x2f5: Push((int) 20601)
0x2f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x2f8: PushEmpty(string)
0x2f9: Stack[-1] = "Untrust"
0x2fa: Call2 0x275

0x2fb: Pop(1)
0x2fc: Push((int) 519434)
0x2fd: @@ SetMessage(Stack[-1])
0x2fe: Pop(1)
0x2ff: @@ ClearReplies()
0x300: Pop(0)
0x301: Push((int) 519435)
0x302: Push((int) 20603)
0x303: Push((int) 20602)
0x304: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x305: Pop(3)
0x306: Return(); Pop(0)

0x307: Push((int) 20603)
0x308: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x30a: PushEmpty(string)
0x30b: Stack[-1] = "Untrust"
0x30c: Call2 0x275

0x30d: Pop(1)
0x30e: Push((int) 519436)
0x30f: @@ SetMessage(Stack[-1])
0x310: Pop(1)
0x311: @@ ClearReplies()
0x312: Pop(0)
0x313: Push((int) 519437)
0x314: Push((int) -1)
0x315: Push((int) 20604)
0x316: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x317: Pop(3)
0x318: Return(); Pop(0)

0x319: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x31a: PushEmpty(bool)
0x31b: Call2 0x669

0x31c: Pop(0)
0x31d: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31e: @ lshStopAnimation()
0x31f: Pop(0)
0x320: GOTO 0x323

0x321: @ StopAnimation()
0x322: Pop(0)
0x323: Return(); Pop(0)

0x324: GOTO 0x28c

0x325: Return(); Pop(0)

0x326: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x327: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x328: PushEmpty(bool, object, float)
0x329: Stack[-2] = Stack[-12]
0x32a: Stack[-1] = (float) 70.0
0x32b: Call2 0x511

0x32c: Pop(2)
0x32d: Pop(1); Push((bool) Stack[-1] == 0)
0x32e: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32f: Stack[-10] = (int) -2
0x330: Return(); Pop(8)

0x331: @ CreateDialog(Stack[-4])
0x332: Pop(0)
0x333: PushEmpty(int)
0x334: Call2 0x663

0x335: Pop(0)
0x336: @@ SetNPCName(Stack[-1])
0x337: Pop(1)
0x338: PushEmpty(int)
0x339: Call2 0x661

0x33a: Pop(0)
0x33b: @@ SetNPCDescription(Stack[-1])
0x33c: Pop(1)
0x33d: PushEmpty(string)
0x33e: Call2 0x665

0x33f: Pop(0)
0x340: @@ SetPhoto(Stack[-1])
0x341: Pop(1)
0x342: PushEmpty(string)
0x343: Call2 0x667

0x344: Pop(0)
0x345: @@ SetPhoto2(Stack[-1])
0x346: Pop(1)
0x347: PushEmpty(int)
0x348: Call2 0x67d

0x349: Pop(0)
0x34a: @@ SetPlayerName(Stack[-1])
0x34b: Pop(1)
0x34c: Stack[-2] = (int) -1
0x34d: @ IsOverrideActive(Stack[-3])
0x34e: Pop(0)
0x34f: Push(Stack[-3])
0x350: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x351: Stack[-10] = (int) -2
0x352: Return(); Pop(8)

0x353: @ DoDialog(Stack[-4])
0x354: Pop(0)
0x355: PushEmpty(bool, object)
0x356: PushEmpty(object)
0x357: Call2 0x625

0x358: Stack[-2] = Stack[-1]
0x359: Pop(1)
0x35a: Call2 0x566

0x35b: Pop(2)
0x35c: PushEmpty(object, object)
0x35d: Stack[-2] = Stack[-11]
0x35e: Stack[-1] = Stack[-6]
0x35f: Push(-2, 4); TaskCall(7)
0x360: Call2 0x377

0x361: Pop(-2, 4); TaskReturn
0x362: Pop(2)
0x363: @@ IsDialogEnd(Stack[-1])
0x364: Pop(0)
0x365: Pop(0); Push((bool) Stack[-1] == 0)
0x366: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x367: @ sync()
0x368: Pop(0)
0x369: @@ IsDialogEnd(Stack[-1])
0x36a: Pop(0)
0x36b: GOTO 0x365

0x36c: PushEmpty(object)
0x36d: Stack[-1] = Stack[-10]
0x36e: Call2 0x555

0x36f: Pop(1)
0x370: @ StopDialog(Stack[-4])
0x371: Pop(0)
0x372: @@ GetReturnValue(Stack[-2])
0x373: Pop(0)
0x374: Stack[-10] = Stack[-2]
0x375: Return(); Pop(8)

0x376: Stack[-4] = 0
0x377: PushEmpty()
0x378: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x379: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x37a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x37b: Push((int) 1)
0x37c: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x37d: PushEmpty(string)
0x37e: Stack[-1] = "Neutral"
0x37f: Call2 0x3b1

0x380: Pop(1)
0x381: Push((int) 540554)
0x382: @@ SetMessage(Stack[-1])
0x383: Pop(1)
0x384: @@ ClearReplies()
0x385: Pop(0)
0x386: Push((int) 540555)
0x387: Push((int) -1)
0x388: Push((int) 42564)
0x389: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38a: Pop(3)
0x38b: Push((int) 540794)
0x38c: Push((int) -1)
0x38d: Push((int) 42843)
0x38e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38f: Pop(3)
0x390: GOTO 0x393

0x391: Return(); Pop(0)

0x392: GOTO 0x37b

0x393: PushEmpty(bool)
0x394: Call2 0x669

0x395: Pop(0)
0x396: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x397: @ lshWaitForAnimEnd()
0x398: Pop(0)
0x399: Push( Stack[3 + Tasks[-1].StackPointer] )
0x39a: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x39b: GOTO 0x3a1

0x39c: PushEmpty(string)
0x39d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x39e: Call2 0x5f0

0x39f: Pop(1)
0x3a0: GOTO 0x397

0x3a1: GOTO 0x3b0

0x3a2: Push("all")
0x3a3: Push("idle")
0x3a4: @ PlayAnimation(Stack[-2], Stack[-1])
0x3a5: Pop(2)
0x3a6: @ WaitForAnimEnd()
0x3a7: Pop(0)
0x3a8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3aa: GOTO 0x3b0

0x3ab: Push("all")
0x3ac: Push("idle")
0x3ad: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ae: Pop(2)
0x3af: GOTO 0x3a6

0x3b0: Return(); Pop(0)

0x3b1: PushEmpty()
0x3b2: PushEmpty(bool)
0x3b3: Call2 0x669

0x3b4: Pop(0)
0x3b5: Pop(1); Push((bool) Stack[-1] == 0)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b7: Return(); Pop(0)

0x3b8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3ba: Return(); Pop(0)

0x3bb: PushEmpty(string, bool)
0x3bc: Stack[-2] = Stack[-3]
0x3bd: Push("")
0x3be: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c0: Stack[-1] = (bool) 0
0x3c1: GOTO 0x3c3

0x3c2: Stack[-1] = (bool) 1
0x3c3: Call2 0x600

0x3c4: Pop(2)
0x3c5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3c6: Return(); Pop(0)

0x3c7: PushEmpty()
0x3c8: Push((int) 1)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ca: PushEmpty()
0x3cb: Call2 0x61e

0x3cc: Pop(0)
0x3cd: Push((int) 42563)
0x3ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3d0: PushEmpty(string)
0x3d1: Stack[-1] = "Neutral"
0x3d2: Call2 0x3b1

0x3d3: Pop(1)
0x3d4: Push((int) 540554)
0x3d5: @@ SetMessage(Stack[-1])
0x3d6: Pop(1)
0x3d7: @@ ClearReplies()
0x3d8: Pop(0)
0x3d9: Push((int) 540555)
0x3da: Push((int) -1)
0x3db: Push((int) 42564)
0x3dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dd: Pop(3)
0x3de: Push((int) 540794)
0x3df: Push((int) -1)
0x3e0: Push((int) 42843)
0x3e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e2: Pop(3)
0x3e3: Return(); Pop(0)

0x3e4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3e5: PushEmpty(bool)
0x3e6: Call2 0x669

0x3e7: Pop(0)
0x3e8: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3e9: @ lshStopAnimation()
0x3ea: Pop(0)
0x3eb: GOTO 0x3ee

0x3ec: @ StopAnimation()
0x3ed: Pop(0)
0x3ee: Return(); Pop(0)

0x3ef: GOTO 0x3c8

0x3f0: Return(); Pop(0)

0x3f1: PushEmpty()
0x3f2: Call2 0x3f5

0x3f3: Pop(0)
0x3f4: Return(); Pop(0)

0x3f5: PushEmpty(bool)
0x3f6: Call2 0x50c

0x3f7: Pop(0)
0x3f8: Pop(1); Push((bool) Stack[-1] == 0)
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: @ Hold()
0x3fb: Pop(0)
0x3fc: @ GetDirection(Stack[-0])
0x3fd: Pop(0)
0x3fe: PushEmpty()
0x3ff: Call2 0x4a5

0x400: Pop(0)
0x401: GOTO 0x3fe

0x402: Return(); Pop(0)

0x403: PushEmpty(object, object)
0x404: Push("player")
0x405: @ FindActor(Stack[-2], Stack[-1])
0x406: Pop(1)
0x407: Pop(0); Push((bool) Stack[-1] == 0)
0x408: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x409: Stack[-3] = (bool) 0
0x40a: Return(); Pop(2)

0x40b: PushEmpty(bool, object)
0x40c: Stack[-1] = Stack[-3]
0x40d: Call2 0x503

0x40e: Stack[-5] = Stack[-2]
0x40f: Pop(2)
0x410: Return(); Pop(2)

0x411: Stack[-1] = 0
0x412: Push(CvectorIndex(Stack[-0], 0))
0x413: Push(CvectorIndex(Stack[-0], 2))
0x414: @ RotateAsync(Stack[-2], Stack[-1])
0x415: Pop(2)
0x416: Return(); Pop(0)

0x417: PushEmpty(object, bool, object, bool)
0x418: Push("player")
0x419: @ FindActor(Stack[-3], Stack[-1])
0x41a: Pop(1)
0x41b: Pop(0); Push((bool) Stack[-2] == 0)
0x41c: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41d: Stack[-5] = (bool) 0
0x41e: Return(); Pop(4)

0x41f: PushEmpty(float, object)
0x420: Stack[-1] = Stack[-4]
0x421: Call2 0x4f1

0x422: Pop(1)
0x423: Push((float)90000.0)
0x424: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x425: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x426: Stack[-5] = (bool) 0
0x427: Return(); Pop(4)

0x428: @ CanSee(Stack[-1], Stack[-2])
0x429: Pop(0)
0x42a: Stack[-5] = Stack[-1]
0x42b: Return(); Pop(4)

0x42c: Stack[-2] = 0
0x42d: PushEmpty(float, float)
0x42e: Push((int) 8)
0x42f: Push((int) 16)
0x430: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x431: Pop(2)
0x432: Push((int) 10)
0x433: @ SetTimer(Stack[-1], Stack[-2])
0x434: Pop(1)
0x435: Return(); Pop(2)

0x436: Push((int) 10)
0x437: @ KillTimer(Stack[-1])
0x438: Pop(1)
0x439: Return(); Pop(0)

0x43a: PushEmpty()
0x43b: Push((int) 10)
0x43c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x43d: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x43e: PushEmpty()
0x43f: Call2 0x436

0x440: Pop(0)
0x441: PushEmpty(bool)
0x442: Stack[-1] = (bool) 0
0x443: PushEmpty(bool)
0x444: Call2 0x50c

0x445: Pop(0)
0x446: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x447: PushEmpty(bool)
0x448: Call2 0x417

0x449: Pop(0)
0x44a: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x44b: Stack[-1] = (bool) 1
0x44c: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x44d: PushEmpty(bool)
0x44e: Call2 0x403

0x44f: Pop(0)
0x450: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x451: PushEmpty(bool, object)
0x452: PushEmpty(object)
0x453: Call2 0x625

0x454: Stack[-2] = Stack[-1]
0x455: Pop(1)
0x456: Call2 0x5a0

0x457: Pop(2)
0x458: GOTO 0x45f

0x459: PushEmpty()
0x45a: Call2 0x412

0x45b: Pop(0)
0x45c: PushEmpty()
0x45d: Call2 0x42d

0x45e: Pop(0)
0x45f: Return(); Pop(0)

0x460: PushEmpty()
0x461: Call2 0x4ec

0x462: Pop(0)
0x463: PushEmpty()
0x464: Call2 0x436

0x465: Pop(0)
0x466: @ lshStopSpeech()
0x467: Pop(0)
0x468: @ lshStopAnimation()
0x469: Pop(0)
0x46a: @ StopAsync()
0x46b: Pop(0)
0x46c: @ Hold()
0x46d: Pop(0)
0x46e: Return(); Pop(0)

0x46f: @ StopGroup0()
0x470: Pop(0)
0x471: PushEmpty()
0x472: Call2 0x436

0x473: Pop(0)
0x474: PushEmpty(string)
0x475: Stack[-1] = "Neutral"
0x476: Call2 0x5f0

0x477: Pop(1)
0x478: PushEmpty()
0x479: Call2 0x42d

0x47a: Pop(0)
0x47b: Return(); Pop(0)

0x47c: PushEmpty()
0x47d: Push(Stack[-1])
0x47e: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x47f: PushEmpty()
0x480: Call2 0x42d

0x481: Pop(0)
0x482: GOTO 0x487

0x483: PushEmpty(string)
0x484: Stack[-1] = "Neutral"
0x485: Call2 0x5f0

0x486: Pop(1)
0x487: Return(); Pop(0)

0x488: PushEmpty(bool, bool)
0x489: @ IsOverrideActive(Stack[-1])
0x48a: Pop(0)
0x48b: Pop(0); Push((bool) Stack[-1] == 0)
0x48c: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x48d: EventDisable(0)
0x48e: PushEmpty()
0x48f: Call2 0x4ec

0x490: Pop(0)
0x491: PushEmpty(bool, object)
0x492: Stack[-1] = Stack[-5]
0x493: Call2 0x503

0x494: Pop(2)
0x495: EventEnable(0)
0x496: PushEmpty(object)
0x497: Stack[-1] = Stack[-4]
0x498: Call2 0x68e

0x499: Pop(1)
0x49a: PushEmpty(string)
0x49b: Stack[-1] = "Neutral"
0x49c: Call2 0x5f0

0x49d: Pop(1)
0x49e: PushEmpty()
0x49f: Call2 0x436

0x4a0: Pop(0)
0x4a1: PushEmpty()
0x4a2: Call2 0x42d

0x4a3: Pop(0)
0x4a4: Return(); Pop(2)

0x4a5: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x4a6: @ WaitForAnimEnd()
0x4a7: Pop(0)
0x4a8: PushEmpty(bool)
0x4a9: Call2 0x50c

0x4aa: Pop(0)
0x4ab: Pop(1); Push((bool) Stack[-1] == 0)
0x4ac: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4ad: Return(); Pop(12)

0x4ae: PushEmpty(int)
0x4af: Call2 0x650

0x4b0: Stack[-7] = Stack[-1]
0x4b1: Pop(1)
0x4b2: Stack[-5] = (int) 0
0x4b3: PushEmpty(bool)
0x4b4: Stack[-1] = (bool) 0
0x4b5: Push((int) 5)
0x4b6: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4b8: PushEmpty(bool)
0x4b9: Call2 0x50c

0x4ba: Pop(0)
0x4bb: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4bc: Stack[-1] = (bool) 1
0x4bd: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4be: Pop(0); Push((bool) Stack[-6] == 0)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c0: Push((int) 3)
0x4c1: @ Sleep(Stack[-1], Stack[-5])
0x4c2: Pop(1)
0x4c3: Pop(0); Push((bool) Stack[-4] == 0)
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c5: GOTO 0x4e7

0x4c6: GOTO 0x4dc

0x4c7: @ irand(Stack[-3], Stack[-6])
0x4c8: Pop(0)
0x4c9: Push((int) 5)
0x4ca: @ irand(Stack[-3], Stack[-1])
0x4cb: Pop(1)
0x4cc: Push((int) 0)
0x4cd: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4cf: Stack[-3] = (int) 0
0x4d0: Push("all")
0x4d1: PushEmpty(string, int)
0x4d2: Stack[-1] = Stack[-6]
0x4d3: Call2 0x649

0x4d4: Pop(1)
0x4d5: @ PlayAnimation(Stack[-2], Stack[-1])
0x4d6: Pop(2)
0x4d7: @ WaitForAnimEnd(Stack[-1])
0x4d8: Pop(0)
0x4d9: Pop(0); Push((bool) Stack[-1] == 0)
0x4da: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4db: GOTO 0x4e7

0x4dc: PushEmpty(bool)
0x4dd: Call2 0x4ea

0x4de: Pop(0)
0x4df: Pop(1); Push((bool) Stack[-1] == 0)
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4e1: GOTO 0x4e7

0x4e2: @ ResetAAS()
0x4e3: Pop(0)
0x4e4: Push((int) 1)
0x4e5: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x4e6: GOTO 0x4b3

0x4e7: @ ResetAAS()
0x4e8: Pop(0)
0x4e9: Return(); Pop(12)

0x4ea: Stack[-1] = (bool) 1
0x4eb: Return(); Pop(0)

0x4ec: @ StopAnimation()
0x4ed: Pop(0)
0x4ee: @ StopGroup0()
0x4ef: Pop(0)
0x4f0: Return(); Pop(0)

0x4f1: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4f2: @ GetPosition(Stack[-3])
0x4f3: Pop(0)
0x4f4: @@ GetPosition(Stack[-2])
0x4f5: Pop(0)
0x4f6: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x4f7: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x4f8: Return(); Pop(6)

0x4f9: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x4fa: @ GetPosition(Stack[-3])
0x4fb: Pop(0)
0x4fc: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x4fd: Push(CvectorIndex(Stack[-2], 0))
0x4fe: Push(CvectorIndex(Stack[-3], 2))
0x4ff: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x500: Pop(2)
0x501: Stack[-8] = Stack[-1]
0x502: Return(); Pop(6)

0x503: PushEmpty(cvector, cvector)
0x504: @@ GetPosition(Stack[-1])
0x505: Pop(0)
0x506: PushEmpty(bool, cvector)
0x507: Stack[-1] = Stack[-3]
0x508: Call2 0x4f9

0x509: Stack[-6] = Stack[-2]
0x50a: Pop(2)
0x50b: Return(); Pop(2)

0x50c: PushEmpty(bool, bool)
0x50d: @ IsLoaded(Stack[-1])
0x50e: Pop(0)
0x50f: Stack[-3] = Stack[-1]
0x510: Return(); Pop(2)

0x511: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x512: @@ GetPosition(Stack[-8])
0x513: Pop(0)
0x514: @@ GetEyesHeight(Stack[-9])
0x515: Pop(0)
0x516: Push(CvectorIndex(Stack[-8], 1))
0x517: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x518: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x519: @ GetPosition(Stack[-7])
0x51a: Pop(0)
0x51b: @ GetEyesHeight(Stack[-9])
0x51c: Pop(0)
0x51d: Push(CvectorIndex(Stack[-7], 1))
0x51e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x51f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x520: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x521: Push(CvectorIndex(Stack[-6], 1))
0x522: Stack[-1] = (int) 0
0x523: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x524: Pop(0); Push(Stack[-6] | Stack[-6]);
0x525: Pop(1); Push(Sqrt(Stack[-1]))
0x526: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x527: Stack[-5] = -Stack[-6]; Pop(0);
0x528: Pop(0); Push(Stack[-6] * Stack[-19]);
0x529: PushEmpty(cvector, cvector)
0x52a: Push(CVector(0.0, 1.0, 0.0))
0x52b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x52c: Call2 0x62b

0x52d: Pop(1)
0x52e: Push((int) 25)
0x52f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x530: Pop(2); Push(Stack[-2] + Stack[-1]);
0x531: Push(CVector(0.0, 10.0, 0.0))
0x532: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x533: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x534: @ IsOverrideActive(Stack[-2])
0x535: Pop(0)
0x536: Push(Stack[-2])
0x537: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x538: Stack[-21] = (bool) 0
0x539: Return(); Pop(18)

0x53a: @ StopWorld()
0x53b: Pop(0)
0x53c: @ CameraTransit(Stack[-3], Stack[-5])
0x53d: Pop(0)
0x53e: Push(CvectorIndex(Stack[-4], 0))
0x53f: Push(CvectorIndex(Stack[-5], 2))
0x540: @ Rotate(Stack[-2], Stack[-1])
0x541: Pop(2)
0x542: PushEmpty(bool)
0x543: Call2 0x669

0x544: Pop(0)
0x545: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x546: GOTO 0x54f

0x547: Push("head")
0x548: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x549: Pop(1)
0x54a: Push(Stack[-1])
0x54b: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54c: Push("head")
0x54d: @ LookAsyncCamera(Stack[-1])
0x54e: Pop(1)
0x54f: @ CameraWaitForPlayFinish()
0x550: Pop(0)
0x551: @ ResumeWorld()
0x552: Pop(0)
0x553: Stack[-21] = (bool) 1
0x554: Return(); Pop(18)

0x555: PushEmpty(bool, bool)
0x556: @ CameraSwitchToNormal()
0x557: Pop(0)
0x558: PushEmpty(bool)
0x559: Call2 0x669

0x55a: Pop(0)
0x55b: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x55c: GOTO 0x565

0x55d: Push("head")
0x55e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x55f: Pop(1)
0x560: Push(Stack[-1])
0x561: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x562: Push("head")
0x563: @ UnlookAsync(Stack[-1])
0x564: Pop(1)
0x565: Return(); Pop(2)

0x566: PushEmpty(int, int, int, int)
0x567: Push("voice_common")
0x568: @ GetVariable(Stack[-1], Stack[-3])
0x569: Pop(1)
0x56a: Push(Stack[-2])
0x56b: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x56c: PushEmpty(bool, object)
0x56d: Stack[-1] = Stack[-7]
0x56e: Call2 0x5a0

0x56f: Pop(1)
0x570: Pop(1); Push((bool) Stack[-1] == 0)
0x571: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x572: PushEmpty(bool, object)
0x573: Stack[-1] = Stack[-7]
0x574: Call2 0x5c5

0x575: Pop(1)
0x576: Pop(1); Push((bool) Stack[-1] == 0)
0x577: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x578: Stack[-6] = (bool) 0
0x579: Return(); Pop(4)

0x57a: Push((int) 2)
0x57b: @ irand(Stack[-2], Stack[-1])
0x57c: Pop(1)
0x57d: Push(Stack[-1])
0x57e: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x57f: Push("voice_common")
0x580: Push((int) 1)
0x581: Pop(1); Push(Stack[-4] + Stack[-1]);
0x582: Push((int) 3)
0x583: Pop(2); Push(Stack[-2] % Stack[-1]);
0x584: @ SetVariable(Stack[-2], Stack[-1])
0x585: Pop(2)
0x586: GOTO 0x58b

0x587: Push("voice_common")
0x588: Push((int) 0)
0x589: @ SetVariable(Stack[-2], Stack[-1])
0x58a: Pop(2)
0x58b: GOTO 0x59e

0x58c: PushEmpty(bool, object)
0x58d: Stack[-1] = Stack[-7]
0x58e: Call2 0x5c5

0x58f: Pop(1)
0x590: Pop(1); Push((bool) Stack[-1] == 0)
0x591: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x592: PushEmpty(bool, object)
0x593: Stack[-1] = Stack[-7]
0x594: Call2 0x5a0

0x595: Pop(1)
0x596: Pop(1); Push((bool) Stack[-1] == 0)
0x597: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x598: Stack[-6] = (bool) 0
0x599: Return(); Pop(4)

0x59a: Push("voice_common")
0x59b: Push((int) 1)
0x59c: @ SetVariable(Stack[-2], Stack[-1])
0x59d: Pop(2)
0x59e: Stack[-6] = (bool) 1
0x59f: Return(); Pop(4)

0x5a0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5a1: Stack[-5] = "c"
0x5a2: Stack[-4] = (int) 0
0x5a3: Push((int) 1)
0x5a4: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5a5: Push((int) 1)
0x5a6: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5a7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5a8: @@ HasProperty(Stack[-1], Stack[-4])
0x5a9: Pop(1)
0x5aa: Pop(0); Push((bool) Stack[-3] == 0)
0x5ab: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5ac: GOTO 0x5b0

0x5ad: Push((int) 1)
0x5ae: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5af: GOTO 0x5a3

0x5b0: Pop(0); Push((bool) Stack[-4] == 0)
0x5b1: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b2: Stack[-12] = (bool) 0
0x5b3: Return(); Pop(10)

0x5b4: Stack[-2] = (int) 0
0x5b5: Push((int) 1)
0x5b6: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5b7: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5b8: @ irand(Stack[-2], Stack[-4])
0x5b9: Pop(0)
0x5ba: Push((int) 1)
0x5bb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5bc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5bd: @@ GetProperty(Stack[-1], Stack[-2])
0x5be: Pop(1)
0x5bf: PushEmpty(bool, string)
0x5c0: Stack[-1] = Stack[-3]
0x5c1: Call2 0x60f

0x5c2: Stack[-14] = Stack[-2]
0x5c3: Pop(2)
0x5c4: Return(); Pop(10)

0x5c5: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5c6: Push("d")
0x5c7: PushEmpty(int)
0x5c8: Call2 0x63a

0x5c9: Pop(0)
0x5ca: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5cb: Push("m")
0x5cc: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5cd: Stack[-4] = (int) 0
0x5ce: Push((int) 1)
0x5cf: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5d0: Push((int) 1)
0x5d1: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5d2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5d3: @@ HasProperty(Stack[-1], Stack[-4])
0x5d4: Pop(1)
0x5d5: Pop(0); Push((bool) Stack[-3] == 0)
0x5d6: IF (Stack[-1] == 0) GOTO 0x5d8; Pop(1)

0x5d7: GOTO 0x5db

0x5d8: Push((int) 1)
0x5d9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5da: GOTO 0x5ce

0x5db: Pop(0); Push((bool) Stack[-4] == 0)
0x5dc: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5dd: Stack[-12] = (bool) 0
0x5de: Return(); Pop(10)

0x5df: Stack[-2] = (int) 0
0x5e0: Push((int) 1)
0x5e1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5e2: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5e3: @ irand(Stack[-2], Stack[-4])
0x5e4: Pop(0)
0x5e5: Push((int) 1)
0x5e6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5e7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5e8: @@ GetProperty(Stack[-1], Stack[-2])
0x5e9: Pop(1)
0x5ea: PushEmpty(bool, string)
0x5eb: Stack[-1] = Stack[-3]
0x5ec: Call2 0x60f

0x5ed: Stack[-14] = Stack[-2]
0x5ee: Pop(2)
0x5ef: Return(); Pop(10)

0x5f0: PushEmpty(bool, float, float, bool, float, float)
0x5f1: @ lshHasAnimation(Stack[-3], Stack[-7])
0x5f2: Pop(0)
0x5f3: Push(Stack[-3])
0x5f4: IF (Stack[-1] == 0) GOTO 0x5fb; Pop(1)

0x5f5: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x5f6: Pop(0)
0x5f7: Push((bool) 0)
0x5f8: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5f9: Pop(1)
0x5fa: GOTO 0x5ff

0x5fb: Push("Can't find lsh animation : ")
0x5fc: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5fd: @ Trace(Stack[-1])
0x5fe: Pop(1)
0x5ff: Return(); Pop(6)

0x600: PushEmpty(bool, float, float, bool, float, float)
0x601: @ lshHasAnimation(Stack[-3], Stack[-8])
0x602: Pop(0)
0x603: Push(Stack[-3])
0x604: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x605: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x606: Pop(0)
0x607: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x608: Pop(0)
0x609: GOTO 0x60e

0x60a: Push("Can't find lsh animation : ")
0x60b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x60c: @ Trace(Stack[-1])
0x60d: Pop(1)
0x60e: Return(); Pop(6)

0x60f: PushEmpty(bool, bool)
0x610: PushEmpty(bool)
0x611: Call2 0x669

0x612: Pop(0)
0x613: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x614: @ lshHasSpeech(Stack[-1], Stack[-3])
0x615: Pop(0)
0x616: Push(Stack[-1])
0x617: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x618: @ lshPlaySpeech(Stack[-3])
0x619: Pop(0)
0x61a: Stack[-4] = (bool) 1
0x61b: Return(); Pop(2)

0x61c: Stack[-4] = (bool) 0
0x61d: Return(); Pop(2)

0x61e: PushEmpty(bool)
0x61f: Call2 0x669

0x620: Pop(0)
0x621: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x622: @ lshStopSpeech()
0x623: Pop(0)
0x624: Return(); Pop(0)

0x625: PushEmpty(object, object)
0x626: @ self(Stack[-1])
0x627: Pop(0)
0x628: Stack[-3] = Stack[-1]
0x629: Return(); Pop(2)

0x62a: Stack[-1] = 0
0x62b: PushEmpty(float, float)
0x62c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x62d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x62e: Push((float)0.0)
0x62f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x630: IF (Stack[-1] == 0) GOTO 0x633; Pop(1)

0x631: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x632: Return(); Pop(2)

0x633: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x634: Return(); Pop(2)

0x635: PushEmpty(int, int)
0x636: @ GetVariable(Stack[-3], Stack[-1])
0x637: Pop(0)
0x638: Stack[-4] = Stack[-1]
0x639: Return(); Pop(2)

0x63a: PushEmpty(float, float)
0x63b: @ GetGameTime(Stack[-1])
0x63c: Pop(0)
0x63d: Push((int) 1)
0x63e: PushEmpty(int)
0x63f: Push((int) 24)
0x640: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x641: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x642: Return(); Pop(2)

0x643: PushEmpty()
0x644: PushEmpty(int)
0x645: Call2 0x63a

0x646: Pop(0)
0x647: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x648: Return(); Pop(0)

0x649: PushEmpty(string, string)
0x64a: Stack[-1] = "idle"
0x64b: Push(Stack[-3])
0x64c: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x64d: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x64e: Stack[-4] = Stack[-1]
0x64f: Return(); Pop(2)

0x650: PushEmpty(int, bool, int, bool)
0x651: Stack[-2] = (int) 0
0x652: Push("all")
0x653: PushEmpty(string, int)
0x654: Stack[-1] = Stack[-5]
0x655: Call2 0x649

0x656: Pop(1)
0x657: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x658: Pop(2)
0x659: Pop(0); Push((bool) Stack[-1] == 0)
0x65a: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x65b: GOTO 0x65f

0x65c: Push((int) 1)
0x65d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x65e: GOTO 0x652

0x65f: Stack[-5] = Stack[-2]
0x660: Return(); Pop(4)

0x661: Stack[-1] = (int) 515550
0x662: Return(); Pop(0)

0x663: Stack[-1] = (int) 502875
0x664: Return(); Pop(0)

0x665: Stack[-1] = "ui/NPC_Petr.png"
0x666: Return(); Pop(0)

0x667: Stack[-1] = "ui/NPC_Petr_b.png"
0x668: Return(); Pop(0)

0x669: Stack[-1] = (bool) 1
0x66a: Return(); Pop(0)

0x66b: PushEmpty()
0x66c: Push("oob2Petr1")
0x66d: Push((int) 1)
0x66e: @ SetVariable(Stack[-2], Stack[-1])
0x66f: Pop(2)
0x670: Return(); Pop(0)

0x671: PushEmpty()
0x672: PushEmpty(int, string)
0x673: Stack[-1] = "oob2Petr1"
0x674: Call2 0x635

0x675: Pop(1)
0x676: Push((int) 0)
0x677: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x678: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x679: Stack[-2] = (bool) 1
0x67a: Return(); Pop(0)

0x67b: Stack[-2] = (bool) 0
0x67c: Return(); Pop(0)

0x67d: PushEmpty(int, int)
0x67e: Push("branch")
0x67f: @ GetVariable(Stack[-1], Stack[-2])
0x680: Pop(1)
0x681: Push((int) 0)
0x682: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x683: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x684: Stack[-3] = (int) 1
0x685: Return(); Pop(2)

0x686: GOTO 0x68c

0x687: Push((int) 1)
0x688: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x689: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x68a: Stack[-3] = (int) 2
0x68b: Return(); Pop(2)

0x68c: Stack[-3] = (int) 3
0x68d: Return(); Pop(2)

0x68e: PushEmpty(int, int, int, int)
0x68f: Push("mt_petr")
0x690: @ GetVariable(Stack[-1], Stack[-3])
0x691: Pop(1)
0x692: Pop(0); Push((bool) Stack[-2] == 0)
0x693: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x694: PushEmpty(int, object)
0x695: Stack[-1] = Stack[-7]
0x696: Push(-2, 1); TaskCall(2)
0x697: Call2 0x103

0x698: Pop(-2, 1); TaskReturn
0x699: Pop(2)
0x69a: Push("mt_petr")
0x69b: Push((int) 1)
0x69c: @ SetVariable(Stack[-2], Stack[-1])
0x69d: Pop(2)
0x69e: PushEmpty(bool, int)
0x69f: Stack[-1] = (int) 2
0x6a0: Call2 0x643

0x6a1: Pop(1)
0x6a2: IF (Stack[-1] == 0) GOTO 0x6aa; Pop(1)

0x6a3: PushEmpty(int, object)
0x6a4: Stack[-1] = Stack[-7]
0x6a5: Push(-2, 1); TaskCall(4)
0x6a6: Call2 0x1e5

0x6a7: Pop(-2, 1); TaskReturn
0x6a8: Pop(2)
0x6a9: Return(); Pop(4)

0x6aa: Push("d12_petr")
0x6ab: @ GetVariable(Stack[-1], Stack[-2])
0x6ac: Pop(1)
0x6ad: PushEmpty(bool)
0x6ae: Stack[-1] = (bool) 0
0x6af: PushEmpty(bool, int)
0x6b0: Stack[-1] = (int) 12
0x6b1: Call2 0x643

0x6b2: Pop(1)
0x6b3: IF (Stack[-1] == 0) GOTO 0x6b7; Pop(1)

0x6b4: Push(Stack[-2])
0x6b5: IF (Stack[-1] == 0) GOTO 0x6b7; Pop(1)

0x6b6: Stack[-1] = (bool) 1
0x6b7: IF (Stack[-1] == 0) GOTO 0x6c3; Pop(1)

0x6b8: PushEmpty(int, object)
0x6b9: Stack[-1] = Stack[-7]
0x6ba: Push(-2, 1); TaskCall(0)
0x6bb: Call2 0x0

0x6bc: Pop(-2, 1); TaskReturn
0x6bd: Pop(2)
0x6be: Push("d12_petr")
0x6bf: Push((int) 1)
0x6c0: @ SetVariable(Stack[-2], Stack[-1])
0x6c1: Pop(2)
0x6c2: Return(); Pop(4)

0x6c3: PushEmpty(int, object)
0x6c4: Stack[-1] = Stack[-7]
0x6c5: Push(-2, 1); TaskCall(6)
0x6c6: Call2 0x326

0x6c7: Pop(-2, 1); TaskReturn
0x6c8: Pop(2)
0x6c9: Return(); Pop(4)

