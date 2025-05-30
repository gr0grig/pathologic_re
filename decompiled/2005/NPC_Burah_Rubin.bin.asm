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
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ui/NPC_Rubin.png
	ui/NPC_Rubin_b.png
	branch
	d12_rubin

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

RunOp = 0x1ce
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a4 Vars = (int, int)
	GTASK_4 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x217 Vars = (int)
		EVENT_6 Op = 0x23d Vars = ()
		EVENT_5 Op = 0x24c Vars = ()
		EVENT_45 Op = 0x259 Vars = (bool)
		EVENT_0 Op = 0x265 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2ee

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x43b

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x439

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x43d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x43f

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x443

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
0x31: Call2 0x402

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x343

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
0x48: Call2 0x332

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
0x5b: Push((int) 535294)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 535295)
0x61: Push((int) 36973)
0x62: Push((int) 36972)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 535302)
0x66: Push((int) -1)
0x67: Push((int) 36980)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 535303)
0x6b: Push((int) -1)
0x6c: Push((int) 36981)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0x441

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x3cd

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
0x92: Call2 0x441

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
0xa2: Call2 0x3dd

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x3fb

0xab: Pop(0)
0xac: Push((int) 36971)
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xaf: PushEmpty(string)
0xb0: Stack[-1] = "Neutral"
0xb1: Call2 0x90

0xb2: Pop(1)
0xb3: Push((int) 535294)
0xb4: @@ SetMessage(Stack[-1])
0xb5: Pop(1)
0xb6: @@ ClearReplies()
0xb7: Pop(0)
0xb8: Push((int) 535295)
0xb9: Push((int) 36973)
0xba: Push((int) 36972)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Push((int) 535302)
0xbe: Push((int) -1)
0xbf: Push((int) 36980)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: Push((int) 535303)
0xc3: Push((int) -1)
0xc4: Push((int) 36981)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Return(); Pop(0)

0xc8: Push((int) 36973)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0x90

0xce: Pop(1)
0xcf: Push((int) 535296)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 535297)
0xd5: Push((int) 36975)
0xd6: Push((int) 36974)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 535301)
0xda: Push((int) 36975)
0xdb: Push((int) 36978)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 36975)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call2 0x90

0xe5: Pop(1)
0xe6: Push((int) 535298)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 535299)
0xec: Push((int) -1)
0xed: Push((int) 36976)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 535300)
0xf1: Push((int) -1)
0xf2: Push((int) 36977)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf7: PushEmpty(bool)
0xf8: Call2 0x441

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
0x108: Call2 0x2ee

0x109: Pop(2)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-10] = (int) -2
0x10d: Return(); Pop(8)

0x10e: @ CreateDialog(Stack[-4])
0x10f: Pop(0)
0x110: PushEmpty(int)
0x111: Call2 0x43b

0x112: Pop(0)
0x113: @@ SetNPCName(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(int)
0x116: Call2 0x439

0x117: Pop(0)
0x118: @@ SetNPCDescription(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(string)
0x11b: Call2 0x43d

0x11c: Pop(0)
0x11d: @@ SetPhoto(Stack[-1])
0x11e: Pop(1)
0x11f: PushEmpty(string)
0x120: Call2 0x43f

0x121: Pop(0)
0x122: @@ SetPhoto2(Stack[-1])
0x123: Pop(1)
0x124: PushEmpty(int)
0x125: Call2 0x443

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
0x134: Call2 0x402

0x135: Stack[-2] = Stack[-1]
0x136: Pop(1)
0x137: Call2 0x343

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
0x14b: Call2 0x332

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
0x15e: Push((int) 540554)
0x15f: @@ SetMessage(Stack[-1])
0x160: Pop(1)
0x161: @@ ClearReplies()
0x162: Pop(0)
0x163: Push((int) 540555)
0x164: Push((int) -1)
0x165: Push((int) 42564)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Push((int) 540794)
0x169: Push((int) -1)
0x16a: Push((int) 42843)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: GOTO 0x170

0x16e: Return(); Pop(0)

0x16f: GOTO 0x158

0x170: PushEmpty(bool)
0x171: Call2 0x441

0x172: Pop(0)
0x173: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x174: @ lshWaitForAnimEnd()
0x175: Pop(0)
0x176: Push( Stack[3 + Tasks[-1].StackPointer] )
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: GOTO 0x17e

0x179: PushEmpty(string)
0x17a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x17b: Call2 0x3cd

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
0x190: Call2 0x441

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
0x1a0: Call2 0x3dd

0x1a1: Pop(2)
0x1a2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty()
0x1a5: Push((int) 1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1a7: PushEmpty()
0x1a8: Call2 0x3fb

0x1a9: Pop(0)
0x1aa: Push((int) 42563)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Neutral"
0x1af: Call2 0x18e

0x1b0: Pop(1)
0x1b1: Push((int) 540554)
0x1b2: @@ SetMessage(Stack[-1])
0x1b3: Pop(1)
0x1b4: @@ ClearReplies()
0x1b5: Pop(0)
0x1b6: Push((int) 540555)
0x1b7: Push((int) -1)
0x1b8: Push((int) 42564)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Push((int) 540794)
0x1bc: Push((int) -1)
0x1bd: Push((int) 42843)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Return(); Pop(0)

0x1c1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c2: PushEmpty(bool)
0x1c3: Call2 0x441

0x1c4: Pop(0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c6: @ lshStopAnimation()
0x1c7: Pop(0)
0x1c8: GOTO 0x1cb

0x1c9: @ StopAnimation()
0x1ca: Pop(0)
0x1cb: Return(); Pop(0)

0x1cc: GOTO 0x1a5

0x1cd: Return(); Pop(0)

0x1ce: PushEmpty()
0x1cf: Call2 0x1d2

0x1d0: Pop(0)
0x1d1: Return(); Pop(0)

0x1d2: PushEmpty(bool)
0x1d3: Call2 0x2e9

0x1d4: Pop(0)
0x1d5: Pop(1); Push((bool) Stack[-1] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d7: @ Hold()
0x1d8: Pop(0)
0x1d9: @ GetDirection(Stack[-0])
0x1da: Pop(0)
0x1db: PushEmpty()
0x1dc: Call2 0x282

0x1dd: Pop(0)
0x1de: GOTO 0x1db

0x1df: Return(); Pop(0)

0x1e0: PushEmpty(object, object)
0x1e1: Push("player")
0x1e2: @ FindActor(Stack[-2], Stack[-1])
0x1e3: Pop(1)
0x1e4: Pop(0); Push((bool) Stack[-1] == 0)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e6: Stack[-3] = (bool) 0
0x1e7: Return(); Pop(2)

0x1e8: PushEmpty(bool, object)
0x1e9: Stack[-1] = Stack[-3]
0x1ea: Call2 0x2e0

0x1eb: Stack[-5] = Stack[-2]
0x1ec: Pop(2)
0x1ed: Return(); Pop(2)

0x1ee: Stack[-1] = 0
0x1ef: Push(CvectorIndex(Stack[-0], 0))
0x1f0: Push(CvectorIndex(Stack[-0], 2))
0x1f1: @ RotateAsync(Stack[-2], Stack[-1])
0x1f2: Pop(2)
0x1f3: Return(); Pop(0)

0x1f4: PushEmpty(object, bool, object, bool)
0x1f5: Push("player")
0x1f6: @ FindActor(Stack[-3], Stack[-1])
0x1f7: Pop(1)
0x1f8: Pop(0); Push((bool) Stack[-2] == 0)
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fa: Stack[-5] = (bool) 0
0x1fb: Return(); Pop(4)

0x1fc: PushEmpty(float, object)
0x1fd: Stack[-1] = Stack[-4]
0x1fe: Call2 0x2ce

0x1ff: Pop(1)
0x200: Push((float)90000.0)
0x201: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x203: Stack[-5] = (bool) 0
0x204: Return(); Pop(4)

0x205: @ CanSee(Stack[-1], Stack[-2])
0x206: Pop(0)
0x207: Stack[-5] = Stack[-1]
0x208: Return(); Pop(4)

0x209: Stack[-2] = 0
0x20a: PushEmpty(float, float)
0x20b: Push((int) 8)
0x20c: Push((int) 16)
0x20d: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x20e: Pop(2)
0x20f: Push((int) 10)
0x210: @ SetTimer(Stack[-1], Stack[-2])
0x211: Pop(1)
0x212: Return(); Pop(2)

0x213: Push((int) 10)
0x214: @ KillTimer(Stack[-1])
0x215: Pop(1)
0x216: Return(); Pop(0)

0x217: PushEmpty()
0x218: Push((int) 10)
0x219: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x21b: PushEmpty()
0x21c: Call2 0x213

0x21d: Pop(0)
0x21e: PushEmpty(bool)
0x21f: Stack[-1] = (bool) 0
0x220: PushEmpty(bool)
0x221: Call2 0x2e9

0x222: Pop(0)
0x223: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x224: PushEmpty(bool)
0x225: Call2 0x1f4

0x226: Pop(0)
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: Stack[-1] = (bool) 1
0x229: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x22a: PushEmpty(bool)
0x22b: Call2 0x1e0

0x22c: Pop(0)
0x22d: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x22e: PushEmpty(bool, object)
0x22f: PushEmpty(object)
0x230: Call2 0x402

0x231: Stack[-2] = Stack[-1]
0x232: Pop(1)
0x233: Call2 0x37d

0x234: Pop(2)
0x235: GOTO 0x23c

0x236: PushEmpty()
0x237: Call2 0x1ef

0x238: Pop(0)
0x239: PushEmpty()
0x23a: Call2 0x20a

0x23b: Pop(0)
0x23c: Return(); Pop(0)

0x23d: PushEmpty()
0x23e: Call2 0x2c9

0x23f: Pop(0)
0x240: PushEmpty()
0x241: Call2 0x213

0x242: Pop(0)
0x243: @ lshStopSpeech()
0x244: Pop(0)
0x245: @ lshStopAnimation()
0x246: Pop(0)
0x247: @ StopAsync()
0x248: Pop(0)
0x249: @ Hold()
0x24a: Pop(0)
0x24b: Return(); Pop(0)

0x24c: @ StopGroup0()
0x24d: Pop(0)
0x24e: PushEmpty()
0x24f: Call2 0x213

0x250: Pop(0)
0x251: PushEmpty(string)
0x252: Stack[-1] = "Neutral"
0x253: Call2 0x3cd

0x254: Pop(1)
0x255: PushEmpty()
0x256: Call2 0x20a

0x257: Pop(0)
0x258: Return(); Pop(0)

0x259: PushEmpty()
0x25a: Push(Stack[-1])
0x25b: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25c: PushEmpty()
0x25d: Call2 0x20a

0x25e: Pop(0)
0x25f: GOTO 0x264

0x260: PushEmpty(string)
0x261: Stack[-1] = "Neutral"
0x262: Call2 0x3cd

0x263: Pop(1)
0x264: Return(); Pop(0)

0x265: PushEmpty(bool, bool)
0x266: @ IsOverrideActive(Stack[-1])
0x267: Pop(0)
0x268: Pop(0); Push((bool) Stack[-1] == 0)
0x269: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x26a: EventDisable(0)
0x26b: PushEmpty()
0x26c: Call2 0x2c9

0x26d: Pop(0)
0x26e: PushEmpty(bool, object)
0x26f: Stack[-1] = Stack[-5]
0x270: Call2 0x2e0

0x271: Pop(2)
0x272: EventEnable(0)
0x273: PushEmpty(object)
0x274: Stack[-1] = Stack[-4]
0x275: Call2 0x454

0x276: Pop(1)
0x277: PushEmpty(string)
0x278: Stack[-1] = "Neutral"
0x279: Call2 0x3cd

0x27a: Pop(1)
0x27b: PushEmpty()
0x27c: Call2 0x213

0x27d: Pop(0)
0x27e: PushEmpty()
0x27f: Call2 0x20a

0x280: Pop(0)
0x281: Return(); Pop(2)

0x282: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x283: @ WaitForAnimEnd()
0x284: Pop(0)
0x285: PushEmpty(bool)
0x286: Call2 0x2e9

0x287: Pop(0)
0x288: Pop(1); Push((bool) Stack[-1] == 0)
0x289: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x28a: Return(); Pop(12)

0x28b: PushEmpty(int)
0x28c: Call2 0x428

0x28d: Stack[-7] = Stack[-1]
0x28e: Pop(1)
0x28f: Stack[-5] = (int) 0
0x290: PushEmpty(bool)
0x291: Stack[-1] = (bool) 0
0x292: Push((int) 5)
0x293: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x294: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x295: PushEmpty(bool)
0x296: Call2 0x2e9

0x297: Pop(0)
0x298: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x299: Stack[-1] = (bool) 1
0x29a: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x29b: Pop(0); Push((bool) Stack[-6] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x29d: Push((int) 3)
0x29e: @ Sleep(Stack[-1], Stack[-5])
0x29f: Pop(1)
0x2a0: Pop(0); Push((bool) Stack[-4] == 0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a2: GOTO 0x2c4

0x2a3: GOTO 0x2b9

0x2a4: @ irand(Stack[-3], Stack[-6])
0x2a5: Pop(0)
0x2a6: Push((int) 5)
0x2a7: @ irand(Stack[-3], Stack[-1])
0x2a8: Pop(1)
0x2a9: Push((int) 0)
0x2aa: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: Stack[-3] = (int) 0
0x2ad: Push("all")
0x2ae: PushEmpty(string, int)
0x2af: Stack[-1] = Stack[-6]
0x2b0: Call2 0x421

0x2b1: Pop(1)
0x2b2: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b3: Pop(2)
0x2b4: @ WaitForAnimEnd(Stack[-1])
0x2b5: Pop(0)
0x2b6: Pop(0); Push((bool) Stack[-1] == 0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b8: GOTO 0x2c4

0x2b9: PushEmpty(bool)
0x2ba: Call2 0x2c7

0x2bb: Pop(0)
0x2bc: Pop(1); Push((bool) Stack[-1] == 0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: GOTO 0x2c4

0x2bf: @ ResetAAS()
0x2c0: Pop(0)
0x2c1: Push((int) 1)
0x2c2: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2c3: GOTO 0x290

0x2c4: @ ResetAAS()
0x2c5: Pop(0)
0x2c6: Return(); Pop(12)

0x2c7: Stack[-1] = (bool) 1
0x2c8: Return(); Pop(0)

0x2c9: @ StopAnimation()
0x2ca: Pop(0)
0x2cb: @ StopGroup0()
0x2cc: Pop(0)
0x2cd: Return(); Pop(0)

0x2ce: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2cf: @ GetPosition(Stack[-3])
0x2d0: Pop(0)
0x2d1: @@ GetPosition(Stack[-2])
0x2d2: Pop(0)
0x2d3: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2d4: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2d5: Return(); Pop(6)

0x2d6: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2d7: @ GetPosition(Stack[-3])
0x2d8: Pop(0)
0x2d9: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2da: Push(CvectorIndex(Stack[-2], 0))
0x2db: Push(CvectorIndex(Stack[-3], 2))
0x2dc: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2dd: Pop(2)
0x2de: Stack[-8] = Stack[-1]
0x2df: Return(); Pop(6)

0x2e0: PushEmpty(cvector, cvector)
0x2e1: @@ GetPosition(Stack[-1])
0x2e2: Pop(0)
0x2e3: PushEmpty(bool, cvector)
0x2e4: Stack[-1] = Stack[-3]
0x2e5: Call2 0x2d6

0x2e6: Stack[-6] = Stack[-2]
0x2e7: Pop(2)
0x2e8: Return(); Pop(2)

0x2e9: PushEmpty(bool, bool)
0x2ea: @ IsLoaded(Stack[-1])
0x2eb: Pop(0)
0x2ec: Stack[-3] = Stack[-1]
0x2ed: Return(); Pop(2)

0x2ee: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2ef: @@ GetPosition(Stack[-8])
0x2f0: Pop(0)
0x2f1: @@ GetEyesHeight(Stack[-9])
0x2f2: Pop(0)
0x2f3: Push(CvectorIndex(Stack[-8], 1))
0x2f4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2f5: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2f6: @ GetPosition(Stack[-7])
0x2f7: Pop(0)
0x2f8: @ GetEyesHeight(Stack[-9])
0x2f9: Pop(0)
0x2fa: Push(CvectorIndex(Stack[-7], 1))
0x2fb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2fc: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2fd: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2fe: Push(CvectorIndex(Stack[-6], 1))
0x2ff: Stack[-1] = (int) 0
0x300: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x301: Pop(0); Push(Stack[-6] | Stack[-6]);
0x302: Pop(1); Push(Sqrt(Stack[-1]))
0x303: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x304: Stack[-5] = -Stack[-6]; Pop(0);
0x305: Pop(0); Push(Stack[-6] * Stack[-19]);
0x306: PushEmpty(cvector, cvector)
0x307: Push(CVector(0.0, 1.0, 0.0))
0x308: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x309: Call2 0x408

0x30a: Pop(1)
0x30b: Push((int) 25)
0x30c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x30d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x30e: Push(CVector(0.0, 10.0, 0.0))
0x30f: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x310: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x311: @ IsOverrideActive(Stack[-2])
0x312: Pop(0)
0x313: Push(Stack[-2])
0x314: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x315: Stack[-21] = (bool) 0
0x316: Return(); Pop(18)

0x317: @ StopWorld()
0x318: Pop(0)
0x319: @ CameraTransit(Stack[-3], Stack[-5])
0x31a: Pop(0)
0x31b: Push(CvectorIndex(Stack[-4], 0))
0x31c: Push(CvectorIndex(Stack[-5], 2))
0x31d: @ Rotate(Stack[-2], Stack[-1])
0x31e: Pop(2)
0x31f: PushEmpty(bool)
0x320: Call2 0x441

0x321: Pop(0)
0x322: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x323: GOTO 0x32c

0x324: Push("head")
0x325: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x326: Pop(1)
0x327: Push(Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x329: Push("head")
0x32a: @ LookAsyncCamera(Stack[-1])
0x32b: Pop(1)
0x32c: @ CameraWaitForPlayFinish()
0x32d: Pop(0)
0x32e: @ ResumeWorld()
0x32f: Pop(0)
0x330: Stack[-21] = (bool) 1
0x331: Return(); Pop(18)

0x332: PushEmpty(bool, bool)
0x333: @ CameraSwitchToNormal()
0x334: Pop(0)
0x335: PushEmpty(bool)
0x336: Call2 0x441

0x337: Pop(0)
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: GOTO 0x342

0x33a: Push("head")
0x33b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x33c: Pop(1)
0x33d: Push(Stack[-1])
0x33e: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x33f: Push("head")
0x340: @ UnlookAsync(Stack[-1])
0x341: Pop(1)
0x342: Return(); Pop(2)

0x343: PushEmpty(int, int, int, int)
0x344: Push("voice_common")
0x345: @ GetVariable(Stack[-1], Stack[-3])
0x346: Pop(1)
0x347: Push(Stack[-2])
0x348: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x349: PushEmpty(bool, object)
0x34a: Stack[-1] = Stack[-7]
0x34b: Call2 0x37d

0x34c: Pop(1)
0x34d: Pop(1); Push((bool) Stack[-1] == 0)
0x34e: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x34f: PushEmpty(bool, object)
0x350: Stack[-1] = Stack[-7]
0x351: Call2 0x3a2

0x352: Pop(1)
0x353: Pop(1); Push((bool) Stack[-1] == 0)
0x354: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x355: Stack[-6] = (bool) 0
0x356: Return(); Pop(4)

0x357: Push((int) 2)
0x358: @ irand(Stack[-2], Stack[-1])
0x359: Pop(1)
0x35a: Push(Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x35c: Push("voice_common")
0x35d: Push((int) 1)
0x35e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x35f: Push((int) 3)
0x360: Pop(2); Push(Stack[-2] % Stack[-1]);
0x361: @ SetVariable(Stack[-2], Stack[-1])
0x362: Pop(2)
0x363: GOTO 0x368

0x364: Push("voice_common")
0x365: Push((int) 0)
0x366: @ SetVariable(Stack[-2], Stack[-1])
0x367: Pop(2)
0x368: GOTO 0x37b

0x369: PushEmpty(bool, object)
0x36a: Stack[-1] = Stack[-7]
0x36b: Call2 0x3a2

0x36c: Pop(1)
0x36d: Pop(1); Push((bool) Stack[-1] == 0)
0x36e: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x36f: PushEmpty(bool, object)
0x370: Stack[-1] = Stack[-7]
0x371: Call2 0x37d

0x372: Pop(1)
0x373: Pop(1); Push((bool) Stack[-1] == 0)
0x374: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x375: Stack[-6] = (bool) 0
0x376: Return(); Pop(4)

0x377: Push("voice_common")
0x378: Push((int) 1)
0x379: @ SetVariable(Stack[-2], Stack[-1])
0x37a: Pop(2)
0x37b: Stack[-6] = (bool) 1
0x37c: Return(); Pop(4)

0x37d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x37e: Stack[-5] = "c"
0x37f: Stack[-4] = (int) 0
0x380: Push((int) 1)
0x381: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x382: Push((int) 1)
0x383: Pop(1); Push(Stack[-5] + Stack[-1]);
0x384: Pop(1); Push(Stack[-6] + Stack[-1]);
0x385: @@ HasProperty(Stack[-1], Stack[-4])
0x386: Pop(1)
0x387: Pop(0); Push((bool) Stack[-3] == 0)
0x388: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x389: GOTO 0x38d

0x38a: Push((int) 1)
0x38b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x38c: GOTO 0x380

0x38d: Pop(0); Push((bool) Stack[-4] == 0)
0x38e: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38f: Stack[-12] = (bool) 0
0x390: Return(); Pop(10)

0x391: Stack[-2] = (int) 0
0x392: Push((int) 1)
0x393: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x394: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x395: @ irand(Stack[-2], Stack[-4])
0x396: Pop(0)
0x397: Push((int) 1)
0x398: Pop(1); Push(Stack[-3] + Stack[-1]);
0x399: Pop(1); Push(Stack[-6] + Stack[-1]);
0x39a: @@ GetProperty(Stack[-1], Stack[-2])
0x39b: Pop(1)
0x39c: PushEmpty(bool, string)
0x39d: Stack[-1] = Stack[-3]
0x39e: Call2 0x3ec

0x39f: Stack[-14] = Stack[-2]
0x3a0: Pop(2)
0x3a1: Return(); Pop(10)

0x3a2: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3a3: Push("d")
0x3a4: PushEmpty(int)
0x3a5: Call2 0x412

0x3a6: Pop(0)
0x3a7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a8: Push("m")
0x3a9: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3aa: Stack[-4] = (int) 0
0x3ab: Push((int) 1)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3ad: Push((int) 1)
0x3ae: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3af: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3b0: @@ HasProperty(Stack[-1], Stack[-4])
0x3b1: Pop(1)
0x3b2: Pop(0); Push((bool) Stack[-3] == 0)
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b4: GOTO 0x3b8

0x3b5: Push((int) 1)
0x3b6: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3b7: GOTO 0x3ab

0x3b8: Pop(0); Push((bool) Stack[-4] == 0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: Stack[-12] = (bool) 0
0x3bb: Return(); Pop(10)

0x3bc: Stack[-2] = (int) 0
0x3bd: Push((int) 1)
0x3be: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c0: @ irand(Stack[-2], Stack[-4])
0x3c1: Pop(0)
0x3c2: Push((int) 1)
0x3c3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3c4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3c5: @@ GetProperty(Stack[-1], Stack[-2])
0x3c6: Pop(1)
0x3c7: PushEmpty(bool, string)
0x3c8: Stack[-1] = Stack[-3]
0x3c9: Call2 0x3ec

0x3ca: Stack[-14] = Stack[-2]
0x3cb: Pop(2)
0x3cc: Return(); Pop(10)

0x3cd: PushEmpty(bool, float, float, bool, float, float)
0x3ce: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3cf: Pop(0)
0x3d0: Push(Stack[-3])
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d2: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3d3: Pop(0)
0x3d4: Push((bool) 0)
0x3d5: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3d6: Pop(1)
0x3d7: GOTO 0x3dc

0x3d8: Push("Can't find lsh animation : ")
0x3d9: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3da: @ Trace(Stack[-1])
0x3db: Pop(1)
0x3dc: Return(); Pop(6)

0x3dd: PushEmpty(bool, float, float, bool, float, float)
0x3de: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3df: Pop(0)
0x3e0: Push(Stack[-3])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e2: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3e3: Pop(0)
0x3e4: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3e5: Pop(0)
0x3e6: GOTO 0x3eb

0x3e7: Push("Can't find lsh animation : ")
0x3e8: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3e9: @ Trace(Stack[-1])
0x3ea: Pop(1)
0x3eb: Return(); Pop(6)

0x3ec: PushEmpty(bool, bool)
0x3ed: PushEmpty(bool)
0x3ee: Call2 0x441

0x3ef: Pop(0)
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f1: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3f2: Pop(0)
0x3f3: Push(Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f5: @ lshPlaySpeech(Stack[-3])
0x3f6: Pop(0)
0x3f7: Stack[-4] = (bool) 1
0x3f8: Return(); Pop(2)

0x3f9: Stack[-4] = (bool) 0
0x3fa: Return(); Pop(2)

0x3fb: PushEmpty(bool)
0x3fc: Call2 0x441

0x3fd: Pop(0)
0x3fe: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3ff: @ lshStopSpeech()
0x400: Pop(0)
0x401: Return(); Pop(0)

0x402: PushEmpty(object, object)
0x403: @ self(Stack[-1])
0x404: Pop(0)
0x405: Stack[-3] = Stack[-1]
0x406: Return(); Pop(2)

0x407: Stack[-1] = 0
0x408: PushEmpty(float, float)
0x409: Pop(0); Push(Stack[-3] | Stack[-3]);
0x40a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x40b: Push((float)0.0)
0x40c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x40d: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x40f: Return(); Pop(2)

0x410: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x411: Return(); Pop(2)

0x412: PushEmpty(float, float)
0x413: @ GetGameTime(Stack[-1])
0x414: Pop(0)
0x415: Push((int) 1)
0x416: PushEmpty(int)
0x417: Push((int) 24)
0x418: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x419: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x41a: Return(); Pop(2)

0x41b: PushEmpty()
0x41c: PushEmpty(int)
0x41d: Call2 0x412

0x41e: Pop(0)
0x41f: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x420: Return(); Pop(0)

0x421: PushEmpty(string, string)
0x422: Stack[-1] = "idle"
0x423: Push(Stack[-3])
0x424: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x425: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x426: Stack[-4] = Stack[-1]
0x427: Return(); Pop(2)

0x428: PushEmpty(int, bool, int, bool)
0x429: Stack[-2] = (int) 0
0x42a: Push("all")
0x42b: PushEmpty(string, int)
0x42c: Stack[-1] = Stack[-5]
0x42d: Call2 0x421

0x42e: Pop(1)
0x42f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x430: Pop(2)
0x431: Pop(0); Push((bool) Stack[-1] == 0)
0x432: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x433: GOTO 0x437

0x434: Push((int) 1)
0x435: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x436: GOTO 0x42a

0x437: Stack[-5] = Stack[-2]
0x438: Return(); Pop(4)

0x439: Stack[-1] = (int) 515551
0x43a: Return(); Pop(0)

0x43b: Stack[-1] = (int) 502876
0x43c: Return(); Pop(0)

0x43d: Stack[-1] = "ui/NPC_Rubin.png"
0x43e: Return(); Pop(0)

0x43f: Stack[-1] = "ui/NPC_Rubin_b.png"
0x440: Return(); Pop(0)

0x441: Stack[-1] = (bool) 1
0x442: Return(); Pop(0)

0x443: PushEmpty(int, int)
0x444: Push("branch")
0x445: @ GetVariable(Stack[-1], Stack[-2])
0x446: Pop(1)
0x447: Push((int) 0)
0x448: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x449: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x44a: Stack[-3] = (int) 1
0x44b: Return(); Pop(2)

0x44c: GOTO 0x452

0x44d: Push((int) 1)
0x44e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44f: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x450: Stack[-3] = (int) 2
0x451: Return(); Pop(2)

0x452: Stack[-3] = (int) 3
0x453: Return(); Pop(2)

0x454: PushEmpty(int, int)
0x455: Push("d12_rubin")
0x456: @ GetVariable(Stack[-1], Stack[-2])
0x457: Pop(1)
0x458: PushEmpty(bool)
0x459: Stack[-1] = (bool) 0
0x45a: PushEmpty(bool, int)
0x45b: Stack[-1] = (int) 12
0x45c: Call2 0x41b

0x45d: Pop(1)
0x45e: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x45f: Pop(0); Push((bool) Stack[-2] == 0)
0x460: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x461: Stack[-1] = (bool) 1
0x462: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x463: PushEmpty(int, object)
0x464: Stack[-1] = Stack[-5]
0x465: Push(-2, 1); TaskCall(0)
0x466: Call2 0x0

0x467: Pop(-2, 1); TaskReturn
0x468: Pop(2)
0x469: Push("d12_rubin")
0x46a: Push((int) 1)
0x46b: @ SetVariable(Stack[-2], Stack[-1])
0x46c: Pop(2)
0x46d: Return(); Pop(2)

0x46e: PushEmpty(int, object)
0x46f: Stack[-1] = Stack[-5]
0x470: Push(-2, 1); TaskCall(2)
0x471: Call2 0x103

0x472: Pop(-2, 1); TaskReturn
0x473: Pop(2)
0x474: Return(); Pop(2)

