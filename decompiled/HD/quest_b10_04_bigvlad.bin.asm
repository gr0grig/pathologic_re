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
	Distrust
	cleanup
	restore
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
	b10q04PlennikTalk
	branch
	ui/NPC_BigVlad.png
	ui/NPC_BigVlad_b.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
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

RunOp = 0x13f
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc0 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x143 Vars = (string)
		EVENT_6 Op = 0x157 Vars = ()
		EVENT_5 Op = 0x164 Vars = ()
		EVENT_7 Op = 0x1ad Vars = (int)
		EVENT_45 Op = 0x1ef Vars = (bool)
		EVENT_0 Op = 0x1fb Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x284

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3f5

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3f3

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3f7

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3f9

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3e2

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
0x31: Call2 0x39a

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x2db

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
0x48: Call2 0x2c9

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
0x59: Call2 0x3d6

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x5d: PushEmpty(object, object)
0x5e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x60: Call2 0x3d0

0x61: Pop(2)
0x62: PushEmpty(string)
0x63: Stack[-1] = "Neutral"
0x64: Call2 0xaa

0x65: Pop(1)
0x66: Push((int) 530380)
0x67: @@ SetMessage(Stack[-1])
0x68: Pop(1)
0x69: @@ ClearReplies()
0x6a: Pop(0)
0x6b: Push((int) 530381)
0x6c: Push((int) 32786)
0x6d: Push((int) 31753)
0x6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(3)
0x70: Push((int) 530382)
0x71: Push((int) 32786)
0x72: Push((int) 31754)
0x73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74: Pop(3)
0x75: GOTO 0x8c

0x76: PushEmpty(string)
0x77: Stack[-1] = "Neutral"
0x78: Call2 0xaa

0x79: Pop(1)
0x7a: Push((int) 530383)
0x7b: @@ SetMessage(Stack[-1])
0x7c: Pop(1)
0x7d: @@ ClearReplies()
0x7e: Pop(0)
0x7f: Push((int) 530384)
0x80: Push((int) -1)
0x81: Push((int) 31756)
0x82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83: Pop(3)
0x84: Push((int) 531445)
0x85: Push((int) -1)
0x86: Push((int) 32792)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: GOTO 0x8c

0x8a: Return(); Pop(0)

0x8b: GOTO 0x55

0x8c: PushEmpty(bool)
0x8d: Call2 0x3fb

0x8e: Pop(0)
0x8f: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x90: @ lshWaitForAnimEnd()
0x91: Pop(0)
0x92: Push( Stack[3 + Tasks[-1].StackPointer] )
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: GOTO 0x9a

0x95: PushEmpty(string)
0x96: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x97: Call2 0x365

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
0xac: Call2 0x3fb

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
0xbc: Call2 0x375

0xbd: Pop(2)
0xbe: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbf: Return(); Pop(0)

0xc0: PushEmpty()
0xc1: Push((int) 1)
0xc2: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0xc3: PushEmpty()
0xc4: Call2 0x393

0xc5: Pop(0)
0xc6: Push((int) 31752)
0xc7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0x3d6

0xcc: Pop(1)
0xcd: Pop(1); Push((bool) Stack[-1] == 0)
0xce: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xcf: PushEmpty(object, object)
0xd0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd2: Call2 0x3d0

0xd3: Pop(2)
0xd4: PushEmpty(string)
0xd5: Stack[-1] = "Neutral"
0xd6: Call2 0xaa

0xd7: Pop(1)
0xd8: Push((int) 530380)
0xd9: @@ SetMessage(Stack[-1])
0xda: Pop(1)
0xdb: @@ ClearReplies()
0xdc: Pop(0)
0xdd: Push((int) 530381)
0xde: Push((int) 32786)
0xdf: Push((int) 31753)
0xe0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1: Pop(3)
0xe2: Push((int) 530382)
0xe3: Push((int) 32786)
0xe4: Push((int) 31754)
0xe5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6: Pop(3)
0xe7: Return(); Pop(0)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral"
0xea: Call2 0xaa

0xeb: Pop(1)
0xec: Push((int) 530383)
0xed: @@ SetMessage(Stack[-1])
0xee: Pop(1)
0xef: @@ ClearReplies()
0xf0: Pop(0)
0xf1: Push((int) 530384)
0xf2: Push((int) -1)
0xf3: Push((int) 31756)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Push((int) 531445)
0xf7: Push((int) -1)
0xf8: Push((int) 32792)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Push((int) 32786)
0xfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Distrust"
0x101: Call2 0xaa

0x102: Pop(1)
0x103: Push((int) 531440)
0x104: @@ SetMessage(Stack[-1])
0x105: Pop(1)
0x106: @@ ClearReplies()
0x107: Pop(0)
0x108: Push((int) 531441)
0x109: Push((int) 32788)
0x10a: Push((int) 32787)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Push((int) 531444)
0x10e: Push((int) 32788)
0x10f: Push((int) 32790)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Push((int) 32788)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x116: PushEmpty(string)
0x117: Stack[-1] = "Neutral"
0x118: Call2 0xaa

0x119: Pop(1)
0x11a: Push((int) 531442)
0x11b: @@ SetMessage(Stack[-1])
0x11c: Pop(1)
0x11d: @@ ClearReplies()
0x11e: Pop(0)
0x11f: Push((int) 531443)
0x120: Push((int) -1)
0x121: Push((int) 32789)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Push((int) 531446)
0x125: Push((int) -1)
0x126: Push((int) 32794)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Return(); Pop(0)

0x12a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x12b: PushEmpty(bool)
0x12c: Call2 0x3fb

0x12d: Pop(0)
0x12e: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12f: @ lshStopAnimation()
0x130: Pop(0)
0x131: GOTO 0x134

0x132: @ StopAnimation()
0x133: Pop(0)
0x134: Return(); Pop(0)

0x135: GOTO 0xc1

0x136: Return(); Pop(0)

0x137: PushEmpty()
0x138: PushEmpty(int, object)
0x139: Stack[-1] = Stack[-3]
0x13a: Push(-2, 1); TaskCall(0)
0x13b: Call2 0x0

0x13c: Pop(-2, 1); TaskReturn
0x13d: Pop(2)
0x13e: Return(); Pop(0)

0x13f: PushEmpty()
0x140: Call2 0x168

0x141: Pop(0)
0x142: Return(); Pop(0)

0x143: PushEmpty(bool, bool)
0x144: Push("cleanup")
0x145: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x147: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x148: @ IsLoaded(Stack[-1])
0x149: Pop(0)
0x14a: Pop(0); Push((bool) Stack[-1] == 0)
0x14b: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14c: PushEmpty(object)
0x14d: Call2 0x39a

0x14e: Pop(0)
0x14f: @ RemoveActor(Stack[-1])
0x150: Pop(1)
0x151: GOTO 0x156

0x152: Push("restore")
0x153: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x155: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x156: Return(); Pop(2)

0x157: Push( Stack[1 + Tasks[-1].StackPointer] )
0x158: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x159: PushEmpty(object)
0x15a: Call2 0x39a

0x15b: Pop(0)
0x15c: @ RemoveActor(Stack[-1])
0x15d: Pop(1)
0x15e: @ Hold()
0x15f: Pop(0)
0x160: PushEmpty()
0x161: Call2 0x1d3

0x162: Pop(0)
0x163: Return(); Pop(0)

0x164: PushEmpty()
0x165: Call2 0x1e2

0x166: Pop(0)
0x167: Return(); Pop(0)

0x168: PushEmpty(bool)
0x169: Call2 0x27f

0x16a: Pop(0)
0x16b: Pop(1); Push((bool) Stack[-1] == 0)
0x16c: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16d: @ Hold()
0x16e: Pop(0)
0x16f: @ GetDirection(Stack[-0])
0x170: Pop(0)
0x171: PushEmpty()
0x172: Call2 0x218

0x173: Pop(0)
0x174: GOTO 0x171

0x175: Return(); Pop(0)

0x176: PushEmpty(object, object)
0x177: Push("player")
0x178: @ FindActor(Stack[-2], Stack[-1])
0x179: Pop(1)
0x17a: Pop(0); Push((bool) Stack[-1] == 0)
0x17b: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17c: Stack[-3] = (bool) 0
0x17d: Return(); Pop(2)

0x17e: PushEmpty(bool, object)
0x17f: Stack[-1] = Stack[-3]
0x180: Call2 0x276

0x181: Stack[-5] = Stack[-2]
0x182: Pop(2)
0x183: Return(); Pop(2)

0x184: Stack[-1] = 0
0x185: Push(CvectorIndex(Stack[-0], 0))
0x186: Push(CvectorIndex(Stack[-0], 2))
0x187: @ RotateAsync(Stack[-2], Stack[-1])
0x188: Pop(2)
0x189: Return(); Pop(0)

0x18a: PushEmpty(object, bool, object, bool)
0x18b: Push("player")
0x18c: @ FindActor(Stack[-3], Stack[-1])
0x18d: Pop(1)
0x18e: Pop(0); Push((bool) Stack[-2] == 0)
0x18f: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x190: Stack[-5] = (bool) 0
0x191: Return(); Pop(4)

0x192: PushEmpty(float, object)
0x193: Stack[-1] = Stack[-4]
0x194: Call2 0x264

0x195: Pop(1)
0x196: Push((float)90000.0)
0x197: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x199: Stack[-5] = (bool) 0
0x19a: Return(); Pop(4)

0x19b: @ CanSee(Stack[-1], Stack[-2])
0x19c: Pop(0)
0x19d: Stack[-5] = Stack[-1]
0x19e: Return(); Pop(4)

0x19f: Stack[-2] = 0
0x1a0: PushEmpty(float, float)
0x1a1: Push((int) 8)
0x1a2: Push((int) 16)
0x1a3: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1a4: Pop(2)
0x1a5: Push((int) 10)
0x1a6: @ SetTimer(Stack[-1], Stack[-2])
0x1a7: Pop(1)
0x1a8: Return(); Pop(2)

0x1a9: Push((int) 10)
0x1aa: @ KillTimer(Stack[-1])
0x1ab: Pop(1)
0x1ac: Return(); Pop(0)

0x1ad: PushEmpty()
0x1ae: Push((int) 10)
0x1af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1b1: PushEmpty()
0x1b2: Call2 0x1a9

0x1b3: Pop(0)
0x1b4: PushEmpty(bool)
0x1b5: Stack[-1] = (bool) 0
0x1b6: PushEmpty(bool)
0x1b7: Call2 0x27f

0x1b8: Pop(0)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ba: PushEmpty(bool)
0x1bb: Call2 0x18a

0x1bc: Pop(0)
0x1bd: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1be: Stack[-1] = (bool) 1
0x1bf: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c0: PushEmpty(bool)
0x1c1: Call2 0x176

0x1c2: Pop(0)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c4: PushEmpty(bool, object)
0x1c5: PushEmpty(object)
0x1c6: Call2 0x39a

0x1c7: Stack[-2] = Stack[-1]
0x1c8: Pop(1)
0x1c9: Call2 0x315

0x1ca: Pop(2)
0x1cb: GOTO 0x1d2

0x1cc: PushEmpty()
0x1cd: Call2 0x185

0x1ce: Pop(0)
0x1cf: PushEmpty()
0x1d0: Call2 0x1a0

0x1d1: Pop(0)
0x1d2: Return(); Pop(0)

0x1d3: PushEmpty()
0x1d4: Call2 0x25f

0x1d5: Pop(0)
0x1d6: PushEmpty()
0x1d7: Call2 0x1a9

0x1d8: Pop(0)
0x1d9: @ lshStopSpeech()
0x1da: Pop(0)
0x1db: @ lshStopAnimation()
0x1dc: Pop(0)
0x1dd: @ StopAsync()
0x1de: Pop(0)
0x1df: @ Hold()
0x1e0: Pop(0)
0x1e1: Return(); Pop(0)

0x1e2: @ StopGroup0()
0x1e3: Pop(0)
0x1e4: PushEmpty()
0x1e5: Call2 0x1a9

0x1e6: Pop(0)
0x1e7: PushEmpty(string)
0x1e8: Stack[-1] = "Neutral"
0x1e9: Call2 0x365

0x1ea: Pop(1)
0x1eb: PushEmpty()
0x1ec: Call2 0x1a0

0x1ed: Pop(0)
0x1ee: Return(); Pop(0)

0x1ef: PushEmpty()
0x1f0: Push(Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f2: PushEmpty()
0x1f3: Call2 0x1a0

0x1f4: Pop(0)
0x1f5: GOTO 0x1fa

0x1f6: PushEmpty(string)
0x1f7: Stack[-1] = "Neutral"
0x1f8: Call2 0x365

0x1f9: Pop(1)
0x1fa: Return(); Pop(0)

0x1fb: PushEmpty(bool, bool)
0x1fc: @ IsOverrideActive(Stack[-1])
0x1fd: Pop(0)
0x1fe: Pop(0); Push((bool) Stack[-1] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x200: EventDisable(0)
0x201: PushEmpty()
0x202: Call2 0x25f

0x203: Pop(0)
0x204: PushEmpty(bool, object)
0x205: Stack[-1] = Stack[-5]
0x206: Call2 0x276

0x207: Pop(2)
0x208: EventEnable(0)
0x209: PushEmpty(object)
0x20a: Stack[-1] = Stack[-4]
0x20b: Call2 0x137

0x20c: Pop(1)
0x20d: PushEmpty(string)
0x20e: Stack[-1] = "Neutral"
0x20f: Call2 0x365

0x210: Pop(1)
0x211: PushEmpty()
0x212: Call2 0x1a9

0x213: Pop(0)
0x214: PushEmpty()
0x215: Call2 0x1a0

0x216: Pop(0)
0x217: Return(); Pop(2)

0x218: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x219: @ WaitForAnimEnd()
0x21a: Pop(0)
0x21b: PushEmpty(bool)
0x21c: Call2 0x27f

0x21d: Pop(0)
0x21e: Pop(1); Push((bool) Stack[-1] == 0)
0x21f: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x220: Return(); Pop(12)

0x221: PushEmpty(int)
0x222: Call2 0x3bf

0x223: Stack[-7] = Stack[-1]
0x224: Pop(1)
0x225: Stack[-5] = (int) 0
0x226: PushEmpty(bool)
0x227: Stack[-1] = (bool) 0
0x228: Push((int) 5)
0x229: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22b: PushEmpty(bool)
0x22c: Call2 0x27f

0x22d: Pop(0)
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: Stack[-1] = (bool) 1
0x230: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x231: Pop(0); Push((bool) Stack[-6] == 0)
0x232: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x233: Push((int) 3)
0x234: @ Sleep(Stack[-1], Stack[-5])
0x235: Pop(1)
0x236: Pop(0); Push((bool) Stack[-4] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x238: GOTO 0x25a

0x239: GOTO 0x24f

0x23a: @ irand(Stack[-3], Stack[-6])
0x23b: Pop(0)
0x23c: Push((int) 5)
0x23d: @ irand(Stack[-3], Stack[-1])
0x23e: Pop(1)
0x23f: Push((int) 0)
0x240: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x242: Stack[-3] = (int) 0
0x243: Push("all")
0x244: PushEmpty(string, int)
0x245: Stack[-1] = Stack[-6]
0x246: Call2 0x3b8

0x247: Pop(1)
0x248: @ PlayAnimation(Stack[-2], Stack[-1])
0x249: Pop(2)
0x24a: @ WaitForAnimEnd(Stack[-1])
0x24b: Pop(0)
0x24c: Pop(0); Push((bool) Stack[-1] == 0)
0x24d: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24e: GOTO 0x25a

0x24f: PushEmpty(bool)
0x250: Call2 0x25d

0x251: Pop(0)
0x252: Pop(1); Push((bool) Stack[-1] == 0)
0x253: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x254: GOTO 0x25a

0x255: @ ResetAAS()
0x256: Pop(0)
0x257: Push((int) 1)
0x258: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x259: GOTO 0x226

0x25a: @ ResetAAS()
0x25b: Pop(0)
0x25c: Return(); Pop(12)

0x25d: Stack[-1] = (bool) 1
0x25e: Return(); Pop(0)

0x25f: @ StopAnimation()
0x260: Pop(0)
0x261: @ StopGroup0()
0x262: Pop(0)
0x263: Return(); Pop(0)

0x264: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x265: @ GetPosition(Stack[-3])
0x266: Pop(0)
0x267: @@ GetPosition(Stack[-2])
0x268: Pop(0)
0x269: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x26a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x26b: Return(); Pop(6)

0x26c: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x26d: @ GetPosition(Stack[-3])
0x26e: Pop(0)
0x26f: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x270: Push(CvectorIndex(Stack[-2], 0))
0x271: Push(CvectorIndex(Stack[-3], 2))
0x272: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x273: Pop(2)
0x274: Stack[-8] = Stack[-1]
0x275: Return(); Pop(6)

0x276: PushEmpty(cvector, cvector)
0x277: @@ GetPosition(Stack[-1])
0x278: Pop(0)
0x279: PushEmpty(bool, cvector)
0x27a: Stack[-1] = Stack[-3]
0x27b: Call2 0x26c

0x27c: Stack[-6] = Stack[-2]
0x27d: Pop(2)
0x27e: Return(); Pop(2)

0x27f: PushEmpty(bool, bool)
0x280: @ IsLoaded(Stack[-1])
0x281: Pop(0)
0x282: Stack[-3] = Stack[-1]
0x283: Return(); Pop(2)

0x284: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x285: @@ GetPosition(Stack[-8])
0x286: Pop(0)
0x287: @@ GetEyesHeight(Stack[-9])
0x288: Pop(0)
0x289: Push(CvectorIndex(Stack[-8], 1))
0x28a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x28b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x28c: @ GetPosition(Stack[-7])
0x28d: Pop(0)
0x28e: @ GetEyesHeight(Stack[-9])
0x28f: Pop(0)
0x290: Push(CvectorIndex(Stack[-7], 1))
0x291: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x292: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x293: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x294: Push(CvectorIndex(Stack[-6], 1))
0x295: Stack[-1] = (int) 0
0x296: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x297: Pop(0); Push(Stack[-6] | Stack[-6]);
0x298: Pop(1); Push(Sqrt(Stack[-1]))
0x299: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x29a: Stack[-5] = -Stack[-6]; Pop(0);
0x29b: Pop(0); Push(Stack[-6] * Stack[-19]);
0x29c: PushEmpty(cvector, cvector)
0x29d: Push(CVector(0.0, 1.0, 0.0))
0x29e: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x29f: Call2 0x3a0

0x2a0: Pop(1)
0x2a1: Push((int) 25)
0x2a2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2a3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2a4: Push(CVector(0.0, 10.0, 0.0))
0x2a5: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2a6: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2a7: @ IsOverrideActive(Stack[-2])
0x2a8: Pop(0)
0x2a9: Push(Stack[-2])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ab: Stack[-21] = (bool) 0
0x2ac: Return(); Pop(18)

0x2ad: @ StopWorld()
0x2ae: Pop(0)
0x2af: Push((bool) 1)
0x2b0: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2b1: Pop(1)
0x2b2: Push(CvectorIndex(Stack[-4], 0))
0x2b3: Push(CvectorIndex(Stack[-5], 2))
0x2b4: @ Rotate(Stack[-2], Stack[-1])
0x2b5: Pop(2)
0x2b6: PushEmpty(bool)
0x2b7: Call2 0x3fb

0x2b8: Pop(0)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ba: GOTO 0x2c3

0x2bb: Push("head")
0x2bc: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2bd: Pop(1)
0x2be: Push(Stack[-1])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c0: Push("head")
0x2c1: @ LookAsyncCamera(Stack[-1])
0x2c2: Pop(1)
0x2c3: @ CameraWaitForPlayFinish()
0x2c4: Pop(0)
0x2c5: @ ResumeWorld()
0x2c6: Pop(0)
0x2c7: Stack[-21] = (bool) 1
0x2c8: Return(); Pop(18)

0x2c9: PushEmpty(bool, bool)
0x2ca: Push((bool) 1)
0x2cb: @ CameraSwitchToNormal(Stack[-1])
0x2cc: Pop(1)
0x2cd: PushEmpty(bool)
0x2ce: Call2 0x3fb

0x2cf: Pop(0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d1: GOTO 0x2da

0x2d2: Push("head")
0x2d3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2d4: Pop(1)
0x2d5: Push(Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d7: Push("head")
0x2d8: @ UnlookAsync(Stack[-1])
0x2d9: Pop(1)
0x2da: Return(); Pop(2)

0x2db: PushEmpty(int, int, int, int)
0x2dc: Push("voice_common")
0x2dd: @ GetVariable(Stack[-1], Stack[-3])
0x2de: Pop(1)
0x2df: Push(Stack[-2])
0x2e0: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2e1: PushEmpty(bool, object)
0x2e2: Stack[-1] = Stack[-7]
0x2e3: Call2 0x315

0x2e4: Pop(1)
0x2e5: Pop(1); Push((bool) Stack[-1] == 0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2e7: PushEmpty(bool, object)
0x2e8: Stack[-1] = Stack[-7]
0x2e9: Call2 0x33a

0x2ea: Pop(1)
0x2eb: Pop(1); Push((bool) Stack[-1] == 0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ed: Stack[-6] = (bool) 0
0x2ee: Return(); Pop(4)

0x2ef: Push((int) 2)
0x2f0: @ irand(Stack[-2], Stack[-1])
0x2f1: Pop(1)
0x2f2: Push(Stack[-1])
0x2f3: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f4: Push("voice_common")
0x2f5: Push((int) 1)
0x2f6: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2f7: Push((int) 3)
0x2f8: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2f9: @ SetVariable(Stack[-2], Stack[-1])
0x2fa: Pop(2)
0x2fb: GOTO 0x300

0x2fc: Push("voice_common")
0x2fd: Push((int) 0)
0x2fe: @ SetVariable(Stack[-2], Stack[-1])
0x2ff: Pop(2)
0x300: GOTO 0x313

0x301: PushEmpty(bool, object)
0x302: Stack[-1] = Stack[-7]
0x303: Call2 0x33a

0x304: Pop(1)
0x305: Pop(1); Push((bool) Stack[-1] == 0)
0x306: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x307: PushEmpty(bool, object)
0x308: Stack[-1] = Stack[-7]
0x309: Call2 0x315

0x30a: Pop(1)
0x30b: Pop(1); Push((bool) Stack[-1] == 0)
0x30c: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30d: Stack[-6] = (bool) 0
0x30e: Return(); Pop(4)

0x30f: Push("voice_common")
0x310: Push((int) 1)
0x311: @ SetVariable(Stack[-2], Stack[-1])
0x312: Pop(2)
0x313: Stack[-6] = (bool) 1
0x314: Return(); Pop(4)

0x315: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x316: Stack[-5] = "c"
0x317: Stack[-4] = (int) 0
0x318: Push((int) 1)
0x319: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x31a: Push((int) 1)
0x31b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x31c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x31d: @@ HasProperty(Stack[-1], Stack[-4])
0x31e: Pop(1)
0x31f: Pop(0); Push((bool) Stack[-3] == 0)
0x320: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x321: GOTO 0x325

0x322: Push((int) 1)
0x323: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x324: GOTO 0x318

0x325: Pop(0); Push((bool) Stack[-4] == 0)
0x326: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x327: Stack[-12] = (bool) 0
0x328: Return(); Pop(10)

0x329: Stack[-2] = (int) 0
0x32a: Push((int) 1)
0x32b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x32c: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32d: @ irand(Stack[-2], Stack[-4])
0x32e: Pop(0)
0x32f: Push((int) 1)
0x330: Pop(1); Push(Stack[-3] + Stack[-1]);
0x331: Pop(1); Push(Stack[-6] + Stack[-1]);
0x332: @@ GetProperty(Stack[-1], Stack[-2])
0x333: Pop(1)
0x334: PushEmpty(bool, string)
0x335: Stack[-1] = Stack[-3]
0x336: Call2 0x384

0x337: Stack[-14] = Stack[-2]
0x338: Pop(2)
0x339: Return(); Pop(10)

0x33a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x33b: Push("d")
0x33c: PushEmpty(int)
0x33d: Call2 0x3af

0x33e: Pop(0)
0x33f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x340: Push("m")
0x341: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x342: Stack[-4] = (int) 0
0x343: Push((int) 1)
0x344: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x345: Push((int) 1)
0x346: Pop(1); Push(Stack[-5] + Stack[-1]);
0x347: Pop(1); Push(Stack[-6] + Stack[-1]);
0x348: @@ HasProperty(Stack[-1], Stack[-4])
0x349: Pop(1)
0x34a: Pop(0); Push((bool) Stack[-3] == 0)
0x34b: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34c: GOTO 0x350

0x34d: Push((int) 1)
0x34e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x34f: GOTO 0x343

0x350: Pop(0); Push((bool) Stack[-4] == 0)
0x351: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x352: Stack[-12] = (bool) 0
0x353: Return(); Pop(10)

0x354: Stack[-2] = (int) 0
0x355: Push((int) 1)
0x356: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x357: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x358: @ irand(Stack[-2], Stack[-4])
0x359: Pop(0)
0x35a: Push((int) 1)
0x35b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x35c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x35d: @@ GetProperty(Stack[-1], Stack[-2])
0x35e: Pop(1)
0x35f: PushEmpty(bool, string)
0x360: Stack[-1] = Stack[-3]
0x361: Call2 0x384

0x362: Stack[-14] = Stack[-2]
0x363: Pop(2)
0x364: Return(); Pop(10)

0x365: PushEmpty(bool, float, float, bool, float, float)
0x366: @ lshHasAnimation(Stack[-3], Stack[-7])
0x367: Pop(0)
0x368: Push(Stack[-3])
0x369: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36a: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x36b: Pop(0)
0x36c: Push((bool) 0)
0x36d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x36e: Pop(1)
0x36f: GOTO 0x374

0x370: Push("Can't find lsh animation : ")
0x371: Pop(1); Push(Stack[-1] + Stack[-8]);
0x372: @ Trace(Stack[-1])
0x373: Pop(1)
0x374: Return(); Pop(6)

0x375: PushEmpty(bool, float, float, bool, float, float)
0x376: @ lshHasAnimation(Stack[-3], Stack[-8])
0x377: Pop(0)
0x378: Push(Stack[-3])
0x379: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37a: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x37b: Pop(0)
0x37c: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x37d: Pop(0)
0x37e: GOTO 0x383

0x37f: Push("Can't find lsh animation : ")
0x380: Pop(1); Push(Stack[-1] + Stack[-9]);
0x381: @ Trace(Stack[-1])
0x382: Pop(1)
0x383: Return(); Pop(6)

0x384: PushEmpty(bool, bool)
0x385: PushEmpty(bool)
0x386: Call2 0x3fb

0x387: Pop(0)
0x388: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x389: @ lshHasSpeech(Stack[-1], Stack[-3])
0x38a: Pop(0)
0x38b: Push(Stack[-1])
0x38c: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38d: @ lshPlaySpeech(Stack[-3])
0x38e: Pop(0)
0x38f: Stack[-4] = (bool) 1
0x390: Return(); Pop(2)

0x391: Stack[-4] = (bool) 0
0x392: Return(); Pop(2)

0x393: PushEmpty(bool)
0x394: Call2 0x3fb

0x395: Pop(0)
0x396: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x397: @ lshStopSpeech()
0x398: Pop(0)
0x399: Return(); Pop(0)

0x39a: PushEmpty(object, object)
0x39b: @ self(Stack[-1])
0x39c: Pop(0)
0x39d: Stack[-3] = Stack[-1]
0x39e: Return(); Pop(2)

0x39f: Stack[-1] = 0
0x3a0: PushEmpty(float, float)
0x3a1: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3a2: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3a3: Push((float)0.0)
0x3a4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a6: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3a7: Return(); Pop(2)

0x3a8: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3a9: Return(); Pop(2)

0x3aa: PushEmpty(int, int)
0x3ab: @ GetVariable(Stack[-3], Stack[-1])
0x3ac: Pop(0)
0x3ad: Stack[-4] = Stack[-1]
0x3ae: Return(); Pop(2)

0x3af: PushEmpty(float, float)
0x3b0: @ GetGameTime(Stack[-1])
0x3b1: Pop(0)
0x3b2: Push((int) 1)
0x3b3: PushEmpty(int)
0x3b4: Push((int) 24)
0x3b5: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3b6: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3b7: Return(); Pop(2)

0x3b8: PushEmpty(string, string)
0x3b9: Stack[-1] = "idle"
0x3ba: Push(Stack[-3])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bc: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3bd: Stack[-4] = Stack[-1]
0x3be: Return(); Pop(2)

0x3bf: PushEmpty(int, bool, int, bool)
0x3c0: Stack[-2] = (int) 0
0x3c1: Push("all")
0x3c2: PushEmpty(string, int)
0x3c3: Stack[-1] = Stack[-5]
0x3c4: Call2 0x3b8

0x3c5: Pop(1)
0x3c6: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3c7: Pop(2)
0x3c8: Pop(0); Push((bool) Stack[-1] == 0)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3ca: GOTO 0x3ce

0x3cb: Push((int) 1)
0x3cc: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3cd: GOTO 0x3c1

0x3ce: Stack[-5] = Stack[-2]
0x3cf: Return(); Pop(4)

0x3d0: PushEmpty()
0x3d1: Push("b10q04PlennikTalk")
0x3d2: Push((int) 1)
0x3d3: @ SetVariable(Stack[-2], Stack[-1])
0x3d4: Pop(2)
0x3d5: Return(); Pop(0)

0x3d6: PushEmpty()
0x3d7: PushEmpty(int, string)
0x3d8: Stack[-1] = "b10q04PlennikTalk"
0x3d9: Call2 0x3aa

0x3da: Pop(1)
0x3db: Push((int) 0)
0x3dc: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3dd: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3de: Stack[-2] = (bool) 1
0x3df: Return(); Pop(0)

0x3e0: Stack[-2] = (bool) 0
0x3e1: Return(); Pop(0)

0x3e2: PushEmpty(int, int)
0x3e3: Push("branch")
0x3e4: @ GetVariable(Stack[-1], Stack[-2])
0x3e5: Pop(1)
0x3e6: Push((int) 0)
0x3e7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e8: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3e9: Stack[-3] = (int) 1
0x3ea: Return(); Pop(2)

0x3eb: GOTO 0x3f1

0x3ec: Push((int) 1)
0x3ed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ef: Stack[-3] = (int) 2
0x3f0: Return(); Pop(2)

0x3f1: Stack[-3] = (int) 3
0x3f2: Return(); Pop(2)

0x3f3: Stack[-1] = (int) 515531
0x3f4: Return(); Pop(0)

0x3f5: Stack[-1] = (int) 502857
0x3f6: Return(); Pop(0)

0x3f7: Stack[-1] = "ui/NPC_BigVlad.png"
0x3f8: Return(); Pop(0)

0x3f9: Stack[-1] = "ui/NPC_BigVlad_b.png"
0x3fa: Return(); Pop(0)

0x3fb: Stack[-1] = (bool) 1
0x3fc: Return(); Pop(0)

