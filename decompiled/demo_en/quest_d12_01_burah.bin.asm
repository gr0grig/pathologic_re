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
	Sorrow
	Agression
	Doubt
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
	ood12BurahSobor1
	ood12BurahSobor2
	ood12BurahSobor3
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

RunOp = 0x232
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd4 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x236 Vars = (object)
		EVENT_26 Op = 0x242 Vars = (string)
		EVENT_6 Op = 0x25e Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x270

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3f7

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3f5

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3f9

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3fb

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3e4

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
0x31: Call2 0x384

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x2c5

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
0x48: Call2 0x2b4

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
0x56: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x3b4

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x5d: PushEmpty(string)
0x5e: Stack[-1] = "Neutral"
0x5f: Call2 0xbe

0x60: Pop(1)
0x61: Push((int) 540306)
0x62: @@ SetMessage(Stack[-1])
0x63: Pop(1)
0x64: @@ ClearReplies()
0x65: Pop(0)
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68: Call2 0x3c0

0x69: Pop(1)
0x6a: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6b: Push((int) 540307)
0x6c: Push((int) 42289)
0x6d: Push((int) 42288)
0x6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(3)
0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x3cc

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x75: Push((int) 540320)
0x76: Push((int) 42303)
0x77: Push((int) 42302)
0x78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79: Pop(3)
0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0x3d8

0x7d: Pop(1)
0x7e: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7f: Push((int) 540323)
0x80: Push((int) 42306)
0x81: Push((int) 42305)
0x82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83: Pop(3)
0x84: Push((int) 540333)
0x85: Push((int) -1)
0x86: Push((int) 42315)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: GOTO 0xa0

0x8a: PushEmpty(string)
0x8b: Stack[-1] = "Neutral"
0x8c: Call2 0xbe

0x8d: Pop(1)
0x8e: Push((int) 541636)
0x8f: @@ SetMessage(Stack[-1])
0x90: Pop(1)
0x91: @@ ClearReplies()
0x92: Pop(0)
0x93: Push((int) 541637)
0x94: Push((int) -1)
0x95: Push((int) 43809)
0x96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97: Pop(3)
0x98: Push((int) 541638)
0x99: Push((int) -1)
0x9a: Push((int) 43810)
0x9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c: Pop(3)
0x9d: GOTO 0xa0

0x9e: Return(); Pop(0)

0x9f: GOTO 0x55

0xa0: PushEmpty(bool)
0xa1: Call2 0x3fd

0xa2: Pop(0)
0xa3: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xa4: @ lshWaitForAnimEnd()
0xa5: Pop(0)
0xa6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: GOTO 0xae

0xa9: PushEmpty(string)
0xaa: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xab: Call2 0x34f

0xac: Pop(1)
0xad: GOTO 0xa4

0xae: GOTO 0xbd

0xaf: Push("all")
0xb0: Push("idle")
0xb1: @ PlayAnimation(Stack[-2], Stack[-1])
0xb2: Pop(2)
0xb3: @ WaitForAnimEnd()
0xb4: Pop(0)
0xb5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: GOTO 0xbd

0xb8: Push("all")
0xb9: Push("idle")
0xba: @ PlayAnimation(Stack[-2], Stack[-1])
0xbb: Pop(2)
0xbc: GOTO 0xb3

0xbd: Return(); Pop(0)

0xbe: PushEmpty()
0xbf: PushEmpty(bool)
0xc0: Call2 0x3fd

0xc1: Pop(0)
0xc2: Pop(1); Push((bool) Stack[-1] == 0)
0xc3: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc4: Return(); Pop(0)

0xc5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc6: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc7: Return(); Pop(0)

0xc8: PushEmpty(string, bool)
0xc9: Stack[-2] = Stack[-3]
0xca: Push("")
0xcb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xcd: Stack[-1] = (bool) 0
0xce: GOTO 0xd0

0xcf: Stack[-1] = (bool) 1
0xd0: Call2 0x35f

0xd1: Pop(2)
0xd2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd3: Return(); Pop(0)

0xd4: PushEmpty()
0xd5: Push((int) 1)
0xd6: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0xd7: PushEmpty()
0xd8: Call2 0x37d

0xd9: Pop(0)
0xda: Push((int) 42288)
0xdb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdd: PushEmpty(object, object)
0xde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0x3a2

0xe1: Pop(2)
0xe2: Push((int) 42302)
0xe3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe5: PushEmpty(object, object)
0xe6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe8: Call2 0x3a8

0xe9: Pop(2)
0xea: Push((int) 42305)
0xeb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xed: PushEmpty(object, object)
0xee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0: Call2 0x3ae

0xf1: Pop(2)
0xf2: Push((int) 42287)
0xf3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0xf5: PushEmpty(bool, object)
0xf6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf7: Call2 0x3b4

0xf8: Pop(1)
0xf9: Pop(1); Push((bool) Stack[-1] == 0)
0xfa: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0xfb: PushEmpty(string)
0xfc: Stack[-1] = "Neutral"
0xfd: Call2 0xbe

0xfe: Pop(1)
0xff: Push((int) 540306)
0x100: @@ SetMessage(Stack[-1])
0x101: Pop(1)
0x102: @@ ClearReplies()
0x103: Pop(0)
0x104: PushEmpty(bool, object)
0x105: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x106: Call2 0x3c0

0x107: Pop(1)
0x108: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x109: Push((int) 540307)
0x10a: Push((int) 42289)
0x10b: Push((int) 42288)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: PushEmpty(bool, object)
0x10f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x110: Call2 0x3cc

0x111: Pop(1)
0x112: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x113: Push((int) 540320)
0x114: Push((int) 42303)
0x115: Push((int) 42302)
0x116: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117: Pop(3)
0x118: PushEmpty(bool, object)
0x119: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Call2 0x3d8

0x11b: Pop(1)
0x11c: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x11d: Push((int) 540323)
0x11e: Push((int) 42306)
0x11f: Push((int) 42305)
0x120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: Push((int) 540333)
0x123: Push((int) -1)
0x124: Push((int) 42315)
0x125: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126: Pop(3)
0x127: Return(); Pop(0)

0x128: PushEmpty(string)
0x129: Stack[-1] = "Neutral"
0x12a: Call2 0xbe

0x12b: Pop(1)
0x12c: Push((int) 541636)
0x12d: @@ SetMessage(Stack[-1])
0x12e: Pop(1)
0x12f: @@ ClearReplies()
0x130: Pop(0)
0x131: Push((int) 541637)
0x132: Push((int) -1)
0x133: Push((int) 43809)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Push((int) 541638)
0x137: Push((int) -1)
0x138: Push((int) 43810)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Return(); Pop(0)

0x13c: Push((int) 42306)
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Neutral"
0x141: Call2 0xbe

0x142: Pop(1)
0x143: Push((int) 540324)
0x144: @@ SetMessage(Stack[-1])
0x145: Pop(1)
0x146: @@ ClearReplies()
0x147: Pop(0)
0x148: Push((int) 540325)
0x149: Push((int) 42308)
0x14a: Push((int) 42307)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Push((int) 540384)
0x14e: Push((int) -1)
0x14f: Push((int) 42370)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: Push((int) 42308)
0x154: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x156: PushEmpty(string)
0x157: Stack[-1] = "Neutral"
0x158: Call2 0xbe

0x159: Pop(1)
0x15a: Push((int) 540326)
0x15b: @@ SetMessage(Stack[-1])
0x15c: Pop(1)
0x15d: @@ ClearReplies()
0x15e: Pop(0)
0x15f: Push((int) 540327)
0x160: Push((int) 42310)
0x161: Push((int) 42309)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Return(); Pop(0)

0x165: Push((int) 42310)
0x166: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x168: PushEmpty(string)
0x169: Stack[-1] = "Sorrow"
0x16a: Call2 0xbe

0x16b: Pop(1)
0x16c: Push((int) 540328)
0x16d: @@ SetMessage(Stack[-1])
0x16e: Pop(1)
0x16f: @@ ClearReplies()
0x170: Pop(0)
0x171: Push((int) 540329)
0x172: Push((int) -1)
0x173: Push((int) 42311)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: Push((int) 540385)
0x177: Push((int) -1)
0x178: Push((int) 42371)
0x179: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a: Pop(3)
0x17b: Return(); Pop(0)

0x17c: Push((int) 42303)
0x17d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x17f: PushEmpty(string)
0x180: Stack[-1] = "Agression"
0x181: Call2 0xbe

0x182: Pop(1)
0x183: Push((int) 540321)
0x184: @@ SetMessage(Stack[-1])
0x185: Pop(1)
0x186: @@ ClearReplies()
0x187: Pop(0)
0x188: Push((int) 540322)
0x189: Push((int) -1)
0x18a: Push((int) 42304)
0x18b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18c: Pop(3)
0x18d: Push((int) 540372)
0x18e: Push((int) -1)
0x18f: Push((int) 42355)
0x190: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191: Pop(3)
0x192: Return(); Pop(0)

0x193: Push((int) 42289)
0x194: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x196: PushEmpty(string)
0x197: Stack[-1] = "Doubt"
0x198: Call2 0xbe

0x199: Pop(1)
0x19a: Push((int) 540308)
0x19b: @@ SetMessage(Stack[-1])
0x19c: Pop(1)
0x19d: @@ ClearReplies()
0x19e: Pop(0)
0x19f: Push((int) 540309)
0x1a0: Push((int) 42356)
0x1a1: Push((int) 42290)
0x1a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a3: Pop(3)
0x1a4: Push((int) 540319)
0x1a5: Push((int) 42351)
0x1a6: Push((int) 42300)
0x1a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a8: Pop(3)
0x1a9: Return(); Pop(0)

0x1aa: Push((int) 42351)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Doubt"
0x1af: Call2 0xbe

0x1b0: Pop(1)
0x1b1: Push((int) 540368)
0x1b2: @@ SetMessage(Stack[-1])
0x1b3: Pop(1)
0x1b4: @@ ClearReplies()
0x1b5: Pop(0)
0x1b6: Push((int) 540369)
0x1b7: Push((int) 42354)
0x1b8: Push((int) 42352)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Push((int) 540370)
0x1bc: Push((int) 42356)
0x1bd: Push((int) 42353)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Return(); Pop(0)

0x1c1: Push((int) 42354)
0x1c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1c4: PushEmpty(string)
0x1c5: Stack[-1] = "Doubt"
0x1c6: Call2 0xbe

0x1c7: Pop(1)
0x1c8: Push((int) 540371)
0x1c9: @@ SetMessage(Stack[-1])
0x1ca: Pop(1)
0x1cb: @@ ClearReplies()
0x1cc: Pop(0)
0x1cd: Push((int) 540375)
0x1ce: Push((int) 42360)
0x1cf: Push((int) 42359)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: Return(); Pop(0)

0x1d3: Push((int) 42356)
0x1d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1d6: PushEmpty(string)
0x1d7: Stack[-1] = "Doubt"
0x1d8: Call2 0xbe

0x1d9: Pop(1)
0x1da: Push((int) 540373)
0x1db: @@ SetMessage(Stack[-1])
0x1dc: Pop(1)
0x1dd: @@ ClearReplies()
0x1de: Pop(0)
0x1df: Push((int) 540374)
0x1e0: Push((int) 42360)
0x1e1: Push((int) 42358)
0x1e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e3: Pop(3)
0x1e4: Return(); Pop(0)

0x1e5: Push((int) 42360)
0x1e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1e8: PushEmpty(string)
0x1e9: Stack[-1] = "Agression"
0x1ea: Call2 0xbe

0x1eb: Pop(1)
0x1ec: Push((int) 540376)
0x1ed: @@ SetMessage(Stack[-1])
0x1ee: Pop(1)
0x1ef: @@ ClearReplies()
0x1f0: Pop(0)
0x1f1: Push((int) 540377)
0x1f2: Push((int) 42363)
0x1f3: Push((int) 42362)
0x1f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f5: Pop(3)
0x1f6: Push((int) 540379)
0x1f7: Push((int) 42365)
0x1f8: Push((int) 42364)
0x1f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fa: Pop(3)
0x1fb: Return(); Pop(0)

0x1fc: Push((int) 42365)
0x1fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x1ff: PushEmpty(string)
0x200: Stack[-1] = "Sorrow"
0x201: Call2 0xbe

0x202: Pop(1)
0x203: Push((int) 540380)
0x204: @@ SetMessage(Stack[-1])
0x205: Pop(1)
0x206: @@ ClearReplies()
0x207: Pop(0)
0x208: Push((int) 540381)
0x209: Push((int) 42363)
0x20a: Push((int) 42366)
0x20b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20c: Pop(3)
0x20d: Return(); Pop(0)

0x20e: Push((int) 42363)
0x20f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x211: PushEmpty(string)
0x212: Stack[-1] = "Agression"
0x213: Call2 0xbe

0x214: Pop(1)
0x215: Push((int) 540378)
0x216: @@ SetMessage(Stack[-1])
0x217: Pop(1)
0x218: @@ ClearReplies()
0x219: Pop(0)
0x21a: Push((int) 540382)
0x21b: Push((int) -1)
0x21c: Push((int) 42368)
0x21d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21e: Pop(3)
0x21f: Push((int) 540383)
0x220: Push((int) -1)
0x221: Push((int) 42369)
0x222: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x223: Pop(3)
0x224: Return(); Pop(0)

0x225: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x226: PushEmpty(bool)
0x227: Call2 0x3fd

0x228: Pop(0)
0x229: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22a: @ lshStopAnimation()
0x22b: Pop(0)
0x22c: GOTO 0x22f

0x22d: @ StopAnimation()
0x22e: Pop(0)
0x22f: Return(); Pop(0)

0x230: GOTO 0xd5

0x231: Return(); Pop(0)

0x232: PushEmpty()
0x233: Call2 0x23e

0x234: Pop(0)
0x235: Return(); Pop(0)

0x236: PushEmpty()
0x237: PushEmpty(int, object)
0x238: Stack[-1] = Stack[-3]
0x239: Push(-2, 1); TaskCall(0)
0x23a: Call2 0x0

0x23b: Pop(-2, 1); TaskReturn
0x23c: Pop(2)
0x23d: Return(); Pop(0)

0x23e: @ Hold()
0x23f: Pop(0)
0x240: GOTO 0x23e

0x241: Return(); Pop(0)

0x242: PushEmpty(bool, bool)
0x243: Push("cleanup")
0x244: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x246: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x247: @ IsLoaded(Stack[-1])
0x248: Pop(0)
0x249: PushEmpty(bool)
0x24a: Stack[-1] = (bool) 0
0x24b: Pop(0); Push((bool) Stack[-2] == 0)
0x24c: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x24d: PushEmpty(bool)
0x24e: Call2 0x26e

0x24f: Pop(0)
0x250: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x251: Stack[-1] = (bool) 1
0x252: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x253: PushEmpty(object)
0x254: Call2 0x384

0x255: Pop(0)
0x256: @ RemoveActor(Stack[-1])
0x257: Pop(1)
0x258: GOTO 0x25d

0x259: Push("restore")
0x25a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x25b: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25c: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x25d: Return(); Pop(2)

0x25e: PushEmpty(bool)
0x25f: Stack[-1] = (bool) 0
0x260: Push( Stack[0 + Tasks[-1].StackPointer] )
0x261: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x262: PushEmpty(bool)
0x263: Call2 0x26e

0x264: Pop(0)
0x265: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x266: Stack[-1] = (bool) 1
0x267: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x268: PushEmpty(object)
0x269: Call2 0x384

0x26a: Pop(0)
0x26b: @ RemoveActor(Stack[-1])
0x26c: Pop(1)
0x26d: Return(); Pop(0)

0x26e: Stack[-1] = (bool) 1
0x26f: Return(); Pop(0)

0x270: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x271: @@ GetPosition(Stack[-8])
0x272: Pop(0)
0x273: @@ GetEyesHeight(Stack[-9])
0x274: Pop(0)
0x275: Push(CvectorIndex(Stack[-8], 1))
0x276: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x277: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x278: @ GetPosition(Stack[-7])
0x279: Pop(0)
0x27a: @ GetEyesHeight(Stack[-9])
0x27b: Pop(0)
0x27c: Push(CvectorIndex(Stack[-7], 1))
0x27d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x27e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x27f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x280: Push(CvectorIndex(Stack[-6], 1))
0x281: Stack[-1] = (int) 0
0x282: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x283: Pop(0); Push(Stack[-6] | Stack[-6]);
0x284: Pop(1); Push(Sqrt(Stack[-1]))
0x285: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x286: Stack[-5] = -Stack[-6]; Pop(0);
0x287: Pop(0); Push(Stack[-6] * Stack[-19]);
0x288: PushEmpty(cvector, cvector)
0x289: Push(CVector(0.0, 1.0, 0.0))
0x28a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x28b: Call2 0x38a

0x28c: Pop(1)
0x28d: Push((int) 25)
0x28e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x28f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x290: Push(CVector(0.0, 10.0, 0.0))
0x291: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x292: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x293: @ IsOverrideActive(Stack[-2])
0x294: Pop(0)
0x295: Push(Stack[-2])
0x296: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x297: Stack[-21] = (bool) 0
0x298: Return(); Pop(18)

0x299: @ StopWorld()
0x29a: Pop(0)
0x29b: @ CameraTransit(Stack[-3], Stack[-5])
0x29c: Pop(0)
0x29d: Push(CvectorIndex(Stack[-4], 0))
0x29e: Push(CvectorIndex(Stack[-5], 2))
0x29f: @ Rotate(Stack[-2], Stack[-1])
0x2a0: Pop(2)
0x2a1: PushEmpty(bool)
0x2a2: Call2 0x3fd

0x2a3: Pop(0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a5: GOTO 0x2ae

0x2a6: Push("head")
0x2a7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2a8: Pop(1)
0x2a9: Push(Stack[-1])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ab: Push("head")
0x2ac: @ LookAsyncCamera(Stack[-1])
0x2ad: Pop(1)
0x2ae: @ CameraWaitForPlayFinish()
0x2af: Pop(0)
0x2b0: @ ResumeWorld()
0x2b1: Pop(0)
0x2b2: Stack[-21] = (bool) 1
0x2b3: Return(); Pop(18)

0x2b4: PushEmpty(bool, bool)
0x2b5: @ CameraSwitchToNormal()
0x2b6: Pop(0)
0x2b7: PushEmpty(bool)
0x2b8: Call2 0x3fd

0x2b9: Pop(0)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2bb: GOTO 0x2c4

0x2bc: Push("head")
0x2bd: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2be: Pop(1)
0x2bf: Push(Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c1: Push("head")
0x2c2: @ UnlookAsync(Stack[-1])
0x2c3: Pop(1)
0x2c4: Return(); Pop(2)

0x2c5: PushEmpty(int, int, int, int)
0x2c6: Push("voice_common")
0x2c7: @ GetVariable(Stack[-1], Stack[-3])
0x2c8: Pop(1)
0x2c9: Push(Stack[-2])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2cb: PushEmpty(bool, object)
0x2cc: Stack[-1] = Stack[-7]
0x2cd: Call2 0x2ff

0x2ce: Pop(1)
0x2cf: Pop(1); Push((bool) Stack[-1] == 0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d1: PushEmpty(bool, object)
0x2d2: Stack[-1] = Stack[-7]
0x2d3: Call2 0x324

0x2d4: Pop(1)
0x2d5: Pop(1); Push((bool) Stack[-1] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d7: Stack[-6] = (bool) 0
0x2d8: Return(); Pop(4)

0x2d9: Push((int) 2)
0x2da: @ irand(Stack[-2], Stack[-1])
0x2db: Pop(1)
0x2dc: Push(Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2de: Push("voice_common")
0x2df: Push((int) 1)
0x2e0: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2e1: Push((int) 3)
0x2e2: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2e3: @ SetVariable(Stack[-2], Stack[-1])
0x2e4: Pop(2)
0x2e5: GOTO 0x2ea

0x2e6: Push("voice_common")
0x2e7: Push((int) 0)
0x2e8: @ SetVariable(Stack[-2], Stack[-1])
0x2e9: Pop(2)
0x2ea: GOTO 0x2fd

0x2eb: PushEmpty(bool, object)
0x2ec: Stack[-1] = Stack[-7]
0x2ed: Call2 0x324

0x2ee: Pop(1)
0x2ef: Pop(1); Push((bool) Stack[-1] == 0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f1: PushEmpty(bool, object)
0x2f2: Stack[-1] = Stack[-7]
0x2f3: Call2 0x2ff

0x2f4: Pop(1)
0x2f5: Pop(1); Push((bool) Stack[-1] == 0)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f7: Stack[-6] = (bool) 0
0x2f8: Return(); Pop(4)

0x2f9: Push("voice_common")
0x2fa: Push((int) 1)
0x2fb: @ SetVariable(Stack[-2], Stack[-1])
0x2fc: Pop(2)
0x2fd: Stack[-6] = (bool) 1
0x2fe: Return(); Pop(4)

0x2ff: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x300: Stack[-5] = "c"
0x301: Stack[-4] = (int) 0
0x302: Push((int) 1)
0x303: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x304: Push((int) 1)
0x305: Pop(1); Push(Stack[-5] + Stack[-1]);
0x306: Pop(1); Push(Stack[-6] + Stack[-1]);
0x307: @@ HasProperty(Stack[-1], Stack[-4])
0x308: Pop(1)
0x309: Pop(0); Push((bool) Stack[-3] == 0)
0x30a: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30b: GOTO 0x30f

0x30c: Push((int) 1)
0x30d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x30e: GOTO 0x302

0x30f: Pop(0); Push((bool) Stack[-4] == 0)
0x310: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x311: Stack[-12] = (bool) 0
0x312: Return(); Pop(10)

0x313: Stack[-2] = (int) 0
0x314: Push((int) 1)
0x315: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x317: @ irand(Stack[-2], Stack[-4])
0x318: Pop(0)
0x319: Push((int) 1)
0x31a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x31b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x31c: @@ GetProperty(Stack[-1], Stack[-2])
0x31d: Pop(1)
0x31e: PushEmpty(bool, string)
0x31f: Stack[-1] = Stack[-3]
0x320: Call2 0x36e

0x321: Stack[-14] = Stack[-2]
0x322: Pop(2)
0x323: Return(); Pop(10)

0x324: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x325: Push("d")
0x326: PushEmpty(int)
0x327: Call2 0x399

0x328: Pop(0)
0x329: Pop(2); Push(Stack[-2] + Stack[-1]);
0x32a: Push("m")
0x32b: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x32c: Stack[-4] = (int) 0
0x32d: Push((int) 1)
0x32e: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x32f: Push((int) 1)
0x330: Pop(1); Push(Stack[-5] + Stack[-1]);
0x331: Pop(1); Push(Stack[-6] + Stack[-1]);
0x332: @@ HasProperty(Stack[-1], Stack[-4])
0x333: Pop(1)
0x334: Pop(0); Push((bool) Stack[-3] == 0)
0x335: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x336: GOTO 0x33a

0x337: Push((int) 1)
0x338: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x339: GOTO 0x32d

0x33a: Pop(0); Push((bool) Stack[-4] == 0)
0x33b: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33c: Stack[-12] = (bool) 0
0x33d: Return(); Pop(10)

0x33e: Stack[-2] = (int) 0
0x33f: Push((int) 1)
0x340: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x342: @ irand(Stack[-2], Stack[-4])
0x343: Pop(0)
0x344: Push((int) 1)
0x345: Pop(1); Push(Stack[-3] + Stack[-1]);
0x346: Pop(1); Push(Stack[-6] + Stack[-1]);
0x347: @@ GetProperty(Stack[-1], Stack[-2])
0x348: Pop(1)
0x349: PushEmpty(bool, string)
0x34a: Stack[-1] = Stack[-3]
0x34b: Call2 0x36e

0x34c: Stack[-14] = Stack[-2]
0x34d: Pop(2)
0x34e: Return(); Pop(10)

0x34f: PushEmpty(bool, float, float, bool, float, float)
0x350: @ lshHasAnimation(Stack[-3], Stack[-7])
0x351: Pop(0)
0x352: Push(Stack[-3])
0x353: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x354: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x355: Pop(0)
0x356: Push((bool) 0)
0x357: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x358: Pop(1)
0x359: GOTO 0x35e

0x35a: Push("Can't find lsh animation : ")
0x35b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x35c: @ Trace(Stack[-1])
0x35d: Pop(1)
0x35e: Return(); Pop(6)

0x35f: PushEmpty(bool, float, float, bool, float, float)
0x360: @ lshHasAnimation(Stack[-3], Stack[-8])
0x361: Pop(0)
0x362: Push(Stack[-3])
0x363: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x364: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x365: Pop(0)
0x366: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x367: Pop(0)
0x368: GOTO 0x36d

0x369: Push("Can't find lsh animation : ")
0x36a: Pop(1); Push(Stack[-1] + Stack[-9]);
0x36b: @ Trace(Stack[-1])
0x36c: Pop(1)
0x36d: Return(); Pop(6)

0x36e: PushEmpty(bool, bool)
0x36f: PushEmpty(bool)
0x370: Call2 0x3fd

0x371: Pop(0)
0x372: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x373: @ lshHasSpeech(Stack[-1], Stack[-3])
0x374: Pop(0)
0x375: Push(Stack[-1])
0x376: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x377: @ lshPlaySpeech(Stack[-3])
0x378: Pop(0)
0x379: Stack[-4] = (bool) 1
0x37a: Return(); Pop(2)

0x37b: Stack[-4] = (bool) 0
0x37c: Return(); Pop(2)

0x37d: PushEmpty(bool)
0x37e: Call2 0x3fd

0x37f: Pop(0)
0x380: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x381: @ lshStopSpeech()
0x382: Pop(0)
0x383: Return(); Pop(0)

0x384: PushEmpty(object, object)
0x385: @ self(Stack[-1])
0x386: Pop(0)
0x387: Stack[-3] = Stack[-1]
0x388: Return(); Pop(2)

0x389: Stack[-1] = 0
0x38a: PushEmpty(float, float)
0x38b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x38c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x38d: Push((float)0.0)
0x38e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x38f: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x390: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x391: Return(); Pop(2)

0x392: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x393: Return(); Pop(2)

0x394: PushEmpty(int, int)
0x395: @ GetVariable(Stack[-3], Stack[-1])
0x396: Pop(0)
0x397: Stack[-4] = Stack[-1]
0x398: Return(); Pop(2)

0x399: PushEmpty(float, float)
0x39a: @ GetGameTime(Stack[-1])
0x39b: Pop(0)
0x39c: Push((int) 1)
0x39d: PushEmpty(int)
0x39e: Push((int) 24)
0x39f: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3a0: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3a1: Return(); Pop(2)

0x3a2: PushEmpty()
0x3a3: Push("ood12BurahSobor1")
0x3a4: Push((int) 1)
0x3a5: @ SetVariable(Stack[-2], Stack[-1])
0x3a6: Pop(2)
0x3a7: Return(); Pop(0)

0x3a8: PushEmpty()
0x3a9: Push("ood12BurahSobor2")
0x3aa: Push((int) 1)
0x3ab: @ SetVariable(Stack[-2], Stack[-1])
0x3ac: Pop(2)
0x3ad: Return(); Pop(0)

0x3ae: PushEmpty()
0x3af: Push("ood12BurahSobor3")
0x3b0: Push((int) 1)
0x3b1: @ SetVariable(Stack[-2], Stack[-1])
0x3b2: Pop(2)
0x3b3: Return(); Pop(0)

0x3b4: PushEmpty()
0x3b5: PushEmpty(int, string)
0x3b6: Stack[-1] = "game_final"
0x3b7: Call2 0x394

0x3b8: Pop(1)
0x3b9: Push((int) 0)
0x3ba: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bc: Stack[-2] = (bool) 1
0x3bd: Return(); Pop(0)

0x3be: Stack[-2] = (bool) 0
0x3bf: Return(); Pop(0)

0x3c0: PushEmpty()
0x3c1: PushEmpty(int, string)
0x3c2: Stack[-1] = "ood12BurahSobor1"
0x3c3: Call2 0x394

0x3c4: Pop(1)
0x3c5: Push((int) 0)
0x3c6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c8: Stack[-2] = (bool) 1
0x3c9: Return(); Pop(0)

0x3ca: Stack[-2] = (bool) 0
0x3cb: Return(); Pop(0)

0x3cc: PushEmpty()
0x3cd: PushEmpty(int, string)
0x3ce: Stack[-1] = "ood12BurahSobor2"
0x3cf: Call2 0x394

0x3d0: Pop(1)
0x3d1: Push((int) 0)
0x3d2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d4: Stack[-2] = (bool) 1
0x3d5: Return(); Pop(0)

0x3d6: Stack[-2] = (bool) 0
0x3d7: Return(); Pop(0)

0x3d8: PushEmpty()
0x3d9: PushEmpty(int, string)
0x3da: Stack[-1] = "ood12BurahSobor3"
0x3db: Call2 0x394

0x3dc: Pop(1)
0x3dd: Push((int) 0)
0x3de: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3df: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3e0: Stack[-2] = (bool) 1
0x3e1: Return(); Pop(0)

0x3e2: Stack[-2] = (bool) 0
0x3e3: Return(); Pop(0)

0x3e4: PushEmpty(int, int)
0x3e5: Push("branch")
0x3e6: @ GetVariable(Stack[-1], Stack[-2])
0x3e7: Pop(1)
0x3e8: Push((int) 0)
0x3e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3eb: Stack[-3] = (int) 1
0x3ec: Return(); Pop(2)

0x3ed: GOTO 0x3f3

0x3ee: Push((int) 1)
0x3ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f1: Stack[-3] = (int) 2
0x3f2: Return(); Pop(2)

0x3f3: Stack[-3] = (int) 3
0x3f4: Return(); Pop(2)

0x3f5: Stack[-1] = (int) 515592
0x3f6: Return(); Pop(0)

0x3f7: Stack[-1] = (int) 511961
0x3f8: Return(); Pop(0)

0x3f9: Stack[-1] = "ui/NPC_Burah.png"
0x3fa: Return(); Pop(0)

0x3fb: Stack[-1] = "ui/NPC_Burah_b.png"
0x3fc: Return(); Pop(0)

0x3fd: Stack[-1] = (bool) 1
0x3fe: Return(); Pop(0)

