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
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	Door 
	 not found
	locked
	SetProperty
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png
	quest_k12_01
	init_sobor
	ook12BirdmaskS1
	sobor@door1
	branch
	add
	vol_
	size
	get
	game_final

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
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateIntVector (1 args)

RunOp = 0x207
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe7 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x213 Vars = (object)
		EVENT_7 Op = 0x24e Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x2d6

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3ac

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3aa

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3ae

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3b0

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3f9

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
0x41: Call2 0x31b

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
0x4f: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x3c8

0x53: Pop(1)
0x54: Pop(1); Push((bool) Stack[-1] == 0)
0x55: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x56: PushEmpty(string)
0x57: Stack[-1] = "Neutral"
0x58: Call2 0xd1

0x59: Pop(1)
0x5a: Push((int) 539221)
0x5b: @@ SetMessage(Stack[-1])
0x5c: Pop(1)
0x5d: @@ ClearReplies()
0x5e: Pop(0)
0x5f: Push((int) 541225)
0x60: Push((int) 45255)
0x61: Push((int) 43355)
0x62: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63: Pop(3)
0x64: Push((int) 539222)
0x65: Push((int) 45249)
0x66: Push((int) 41165)
0x67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68: Pop(3)
0x69: GOTO 0xb3

0x6a: PushEmpty(bool, object)
0x6b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c: Call2 0x3d2

0x6d: Pop(1)
0x6e: Pop(1); Push((bool) Stack[-1] == 0)
0x6f: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral"
0x72: Call2 0xd1

0x73: Pop(1)
0x74: Push((int) 539219)
0x75: @@ SetMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ ClearReplies()
0x78: Pop(0)
0x79: Push((int) 541260)
0x7a: Push((int) -1)
0x7b: Push((int) 43390)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: Push((int) 542837)
0x7f: Push((int) 45265)
0x80: Push((int) 45264)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: GOTO 0xb3

0x84: PushEmpty(bool, object)
0x85: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86: Call2 0x3dc

0x87: Pop(1)
0x88: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x89: PushEmpty(object, object)
0x8a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8c: Call2 0x3bb

0x8d: Pop(2)
0x8e: PushEmpty(string)
0x8f: Stack[-1] = "Neutral"
0x90: Call2 0xd1

0x91: Pop(1)
0x92: Push((int) 539223)
0x93: @@ SetMessage(Stack[-1])
0x94: Pop(1)
0x95: @@ ClearReplies()
0x96: Pop(0)
0x97: Push((int) 539224)
0x98: Push((int) -1)
0x99: Push((int) 41167)
0x9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b: Pop(3)
0x9c: GOTO 0xb3

0x9d: PushEmpty(string)
0x9e: Stack[-1] = "Neutral"
0x9f: Call2 0xd1

0xa0: Pop(1)
0xa1: Push((int) 539225)
0xa2: @@ SetMessage(Stack[-1])
0xa3: Pop(1)
0xa4: @@ ClearReplies()
0xa5: Pop(0)
0xa6: Push((int) 539226)
0xa7: Push((int) -1)
0xa8: Push((int) 41169)
0xa9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa: Pop(3)
0xab: Push((int) 542845)
0xac: Push((int) -1)
0xad: Push((int) 45271)
0xae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf: Pop(3)
0xb0: GOTO 0xb3

0xb1: Return(); Pop(0)

0xb2: GOTO 0x4e

0xb3: PushEmpty(bool)
0xb4: Call2 0x3b2

0xb5: Pop(0)
0xb6: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xb7: @ lshWaitForAnimEnd()
0xb8: Pop(0)
0xb9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xba: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xbb: GOTO 0xc1

0xbc: PushEmpty(string)
0xbd: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbe: Call2 0x32d

0xbf: Pop(1)
0xc0: GOTO 0xb7

0xc1: GOTO 0xd0

0xc2: Push("all")
0xc3: Push("idle")
0xc4: @ PlayAnimation(Stack[-2], Stack[-1])
0xc5: Pop(2)
0xc6: @ WaitForAnimEnd()
0xc7: Pop(0)
0xc8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc9: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xca: GOTO 0xd0

0xcb: Push("all")
0xcc: Push("idle")
0xcd: @ PlayAnimation(Stack[-2], Stack[-1])
0xce: Pop(2)
0xcf: GOTO 0xc6

0xd0: Return(); Pop(0)

0xd1: PushEmpty()
0xd2: PushEmpty(bool)
0xd3: Call2 0x3b2

0xd4: Pop(0)
0xd5: Pop(1); Push((bool) Stack[-1] == 0)
0xd6: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd7: Return(); Pop(0)

0xd8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd9: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xda: Return(); Pop(0)

0xdb: PushEmpty(string, bool)
0xdc: Stack[-2] = Stack[-3]
0xdd: Push("")
0xde: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xe0: Stack[-1] = (bool) 0
0xe1: GOTO 0xe3

0xe2: Stack[-1] = (bool) 1
0xe3: Call2 0x33d

0xe4: Pop(2)
0xe5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe6: Return(); Pop(0)

0xe7: PushEmpty()
0xe8: Push((int) 1)
0xe9: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0xea: PushEmpty()
0xeb: Call2 0x357

0xec: Pop(0)
0xed: Push((int) 41167)
0xee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf0: PushEmpty(object, object)
0xf1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf3: Call2 0x3c1

0xf4: Pop(2)
0xf5: PushEmpty(object, object)
0xf6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf8: Call2 0x3b4

0xf9: Pop(2)
0xfa: Push((int) 41164)
0xfb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0xfd: PushEmpty(bool, object)
0xfe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xff: Call2 0x3c8

0x100: Pop(1)
0x101: Pop(1); Push((bool) Stack[-1] == 0)
0x102: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x103: PushEmpty(string)
0x104: Stack[-1] = "Neutral"
0x105: Call2 0xd1

0x106: Pop(1)
0x107: Push((int) 539221)
0x108: @@ SetMessage(Stack[-1])
0x109: Pop(1)
0x10a: @@ ClearReplies()
0x10b: Pop(0)
0x10c: Push((int) 541225)
0x10d: Push((int) 45255)
0x10e: Push((int) 43355)
0x10f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110: Pop(3)
0x111: Push((int) 539222)
0x112: Push((int) 45249)
0x113: Push((int) 41165)
0x114: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115: Pop(3)
0x116: Return(); Pop(0)

0x117: PushEmpty(bool, object)
0x118: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x119: Call2 0x3d2

0x11a: Pop(1)
0x11b: Pop(1); Push((bool) Stack[-1] == 0)
0x11c: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x11d: PushEmpty(string)
0x11e: Stack[-1] = "Neutral"
0x11f: Call2 0xd1

0x120: Pop(1)
0x121: Push((int) 539219)
0x122: @@ SetMessage(Stack[-1])
0x123: Pop(1)
0x124: @@ ClearReplies()
0x125: Pop(0)
0x126: Push((int) 541260)
0x127: Push((int) -1)
0x128: Push((int) 43390)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Push((int) 542837)
0x12c: Push((int) 45265)
0x12d: Push((int) 45264)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Return(); Pop(0)

0x131: PushEmpty(bool, object)
0x132: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x133: Call2 0x3dc

0x134: Pop(1)
0x135: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x136: PushEmpty(object, object)
0x137: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x138: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x139: Call2 0x3bb

0x13a: Pop(2)
0x13b: PushEmpty(string)
0x13c: Stack[-1] = "Neutral"
0x13d: Call2 0xd1

0x13e: Pop(1)
0x13f: Push((int) 539223)
0x140: @@ SetMessage(Stack[-1])
0x141: Pop(1)
0x142: @@ ClearReplies()
0x143: Pop(0)
0x144: Push((int) 539224)
0x145: Push((int) -1)
0x146: Push((int) 41167)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: Return(); Pop(0)

0x14a: PushEmpty(string)
0x14b: Stack[-1] = "Neutral"
0x14c: Call2 0xd1

0x14d: Pop(1)
0x14e: Push((int) 539225)
0x14f: @@ SetMessage(Stack[-1])
0x150: Pop(1)
0x151: @@ ClearReplies()
0x152: Pop(0)
0x153: Push((int) 539226)
0x154: Push((int) -1)
0x155: Push((int) 41169)
0x156: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x157: Pop(3)
0x158: Push((int) 542845)
0x159: Push((int) -1)
0x15a: Push((int) 45271)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Return(); Pop(0)

0x15e: Push((int) 45265)
0x15f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x160: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x161: PushEmpty(string)
0x162: Stack[-1] = "Neutral"
0x163: Call2 0xd1

0x164: Pop(1)
0x165: Push((int) 542838)
0x166: @@ SetMessage(Stack[-1])
0x167: Pop(1)
0x168: @@ ClearReplies()
0x169: Pop(0)
0x16a: Push((int) 542839)
0x16b: Push((int) 45268)
0x16c: Push((int) 45266)
0x16d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16e: Pop(3)
0x16f: Push((int) 542840)
0x170: Push((int) -1)
0x171: Push((int) 45267)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Return(); Pop(0)

0x175: Push((int) 45268)
0x176: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x178: PushEmpty(string)
0x179: Stack[-1] = "Neutral"
0x17a: Call2 0xd1

0x17b: Pop(1)
0x17c: Push((int) 542841)
0x17d: @@ SetMessage(Stack[-1])
0x17e: Pop(1)
0x17f: @@ ClearReplies()
0x180: Pop(0)
0x181: Push((int) 542842)
0x182: Push((int) -1)
0x183: Push((int) 45269)
0x184: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x185: Pop(3)
0x186: Push((int) 542844)
0x187: Push((int) -1)
0x188: Push((int) 45270)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Return(); Pop(0)

0x18c: Push((int) 45249)
0x18d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x18f: PushEmpty(string)
0x190: Stack[-1] = "Neutral"
0x191: Call2 0xd1

0x192: Pop(1)
0x193: Push((int) 542823)
0x194: @@ SetMessage(Stack[-1])
0x195: Pop(1)
0x196: @@ ClearReplies()
0x197: Pop(0)
0x198: Push((int) 542824)
0x199: Push((int) 45251)
0x19a: Push((int) 45250)
0x19b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19c: Pop(3)
0x19d: Push((int) 542827)
0x19e: Push((int) -1)
0x19f: Push((int) 45254)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: Return(); Pop(0)

0x1a3: Push((int) 45255)
0x1a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1a6: PushEmpty(string)
0x1a7: Stack[-1] = "Neutral"
0x1a8: Call2 0xd1

0x1a9: Pop(1)
0x1aa: Push((int) 542828)
0x1ab: @@ SetMessage(Stack[-1])
0x1ac: Pop(1)
0x1ad: @@ ClearReplies()
0x1ae: Pop(0)
0x1af: Push((int) 542829)
0x1b0: Push((int) 45251)
0x1b1: Push((int) 45256)
0x1b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b3: Pop(3)
0x1b4: Push((int) 542830)
0x1b5: Push((int) -1)
0x1b6: Push((int) 45257)
0x1b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b8: Pop(3)
0x1b9: Return(); Pop(0)

0x1ba: Push((int) 45251)
0x1bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1bd: PushEmpty(string)
0x1be: Stack[-1] = "Neutral"
0x1bf: Call2 0xd1

0x1c0: Pop(1)
0x1c1: Push((int) 542825)
0x1c2: @@ SetMessage(Stack[-1])
0x1c3: Pop(1)
0x1c4: @@ ClearReplies()
0x1c5: Pop(0)
0x1c6: Push((int) 542826)
0x1c7: Push((int) 45259)
0x1c8: Push((int) 45252)
0x1c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ca: Pop(3)
0x1cb: Push((int) 542831)
0x1cc: Push((int) -1)
0x1cd: Push((int) 45258)
0x1ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cf: Pop(3)
0x1d0: Return(); Pop(0)

0x1d1: Push((int) 45259)
0x1d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1d4: PushEmpty(string)
0x1d5: Stack[-1] = "Neutral"
0x1d6: Call2 0xd1

0x1d7: Pop(1)
0x1d8: Push((int) 542832)
0x1d9: @@ SetMessage(Stack[-1])
0x1da: Pop(1)
0x1db: @@ ClearReplies()
0x1dc: Pop(0)
0x1dd: Push((int) 542833)
0x1de: Push((int) -1)
0x1df: Push((int) 45260)
0x1e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e1: Pop(3)
0x1e2: Push((int) 542834)
0x1e3: Push((int) 45262)
0x1e4: Push((int) 45261)
0x1e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e6: Pop(3)
0x1e7: Return(); Pop(0)

0x1e8: Push((int) 45262)
0x1e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1eb: PushEmpty(string)
0x1ec: Stack[-1] = "Neutral"
0x1ed: Call2 0xd1

0x1ee: Pop(1)
0x1ef: Push((int) 542835)
0x1f0: @@ SetMessage(Stack[-1])
0x1f1: Pop(1)
0x1f2: @@ ClearReplies()
0x1f3: Pop(0)
0x1f4: Push((int) 542836)
0x1f5: Push((int) -1)
0x1f6: Push((int) 45263)
0x1f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f8: Pop(3)
0x1f9: Return(); Pop(0)

0x1fa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1fb: PushEmpty(bool)
0x1fc: Call2 0x3b2

0x1fd: Pop(0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1ff: @ lshStopAnimation()
0x200: Pop(0)
0x201: GOTO 0x204

0x202: @ StopAnimation()
0x203: Pop(0)
0x204: Return(); Pop(0)

0x205: GOTO 0xe8

0x206: Return(); Pop(0)

0x207: Push((bool) 1)
0x208: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x209: PushEmpty(float, float)
0x20a: Stack[-2] = (int) 300
0x20b: Stack[-1] = (int) 100
0x20c: Call2 0x224

0x20d: Pop(2)
0x20e: Push((int) 1)
0x20f: @ Sleep(Stack[-1])
0x210: Pop(1)
0x211: GOTO 0x207

0x212: Return(); Pop(0)

0x213: PushEmpty()
0x214: PushEmpty(int)
0x215: Call2 0x464

0x216: Pop(0)
0x217: Push((int) 0)
0x218: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x21a: PushEmpty()
0x21b: Call2 0x265

0x21c: Pop(0)
0x21d: PushEmpty(int, object)
0x21e: Stack[-1] = Stack[-3]
0x21f: Push(-2, 1); TaskCall(0)
0x220: Call2 0x0

0x221: Pop(-2, 1); TaskReturn
0x222: Pop(2)
0x223: Return(); Pop(0)

0x224: PushEmpty()
0x225: PushEmpty(bool)
0x226: Call2 0x2d1

0x227: Pop(0)
0x228: Pop(1); Push((bool) Stack[-1] == 0)
0x229: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x22a: Return(); Pop(0)

0x22b: Push("player")
0x22c: @ FindActor(Stack[-4], Stack[-1])
0x22d: Pop(1)
0x22e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x22f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x230: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x231: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x232: Push((int) 10)
0x233: Push((float)1.0)
0x234: @ SetTimer(Stack[-2], Stack[-1])
0x235: Pop(2)
0x236: PushEmpty()
0x237: Call2 0x273

0x238: Pop(0)
0x239: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x23a: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23b: Push((int) 10)
0x23c: @ KillTimer(Stack[-1])
0x23d: Pop(1)
0x23e: Return(); Pop(0)

0x23f: PushEmpty(float, float)
0x240: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x241: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x242: Stack[-3] = (bool) 0
0x243: Return(); Pop(2)

0x244: PushEmpty(float, object)
0x245: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x246: Call2 0x2c9

0x247: Pop(1)
0x248: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x249: Push( Stack[2 + Tasks[-1].StackPointer] )
0x24a: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x24b: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x24c: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x24d: Return(); Pop(2)

0x24e: PushEmpty()
0x24f: Push((int) 10)
0x250: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x251: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x252: PushEmpty(bool)
0x253: Call2 0x23f

0x254: Pop(0)
0x255: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x256: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x257: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x258: PushEmpty(object)
0x259: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x25a: Call2 0x34c

0x25b: Pop(1)
0x25c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x25d: GOTO 0x264

0x25e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x25f: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x260: Push("head")
0x261: @ UnlookAsync(Stack[-1])
0x262: Pop(1)
0x263: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x264: Return(); Pop(0)

0x265: PushEmpty()
0x266: Call2 0x2c4

0x267: Pop(0)
0x268: Push((int) 10)
0x269: @ KillTimer(Stack[-1])
0x26a: Pop(1)
0x26b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x26c: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26d: Push("head")
0x26e: @ UnlookAsync(Stack[-1])
0x26f: Pop(1)
0x270: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x271: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x272: Return(); Pop(0)

0x273: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x274: @ WaitForAnimEnd()
0x275: Pop(0)
0x276: PushEmpty(bool)
0x277: Call2 0x2d1

0x278: Pop(0)
0x279: Pop(1); Push((bool) Stack[-1] == 0)
0x27a: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27b: Return(); Pop(14)

0x27c: PushEmpty(int)
0x27d: Call2 0x399

0x27e: Stack[-8] = Stack[-1]
0x27f: Pop(1)
0x280: Stack[-6] = (int) 0
0x281: PushEmpty(bool)
0x282: Stack[-1] = (bool) 0
0x283: Push((int) 5)
0x284: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x285: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x286: PushEmpty(bool)
0x287: Call2 0x2d1

0x288: Pop(0)
0x289: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x28a: Stack[-1] = (bool) 1
0x28b: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x28c: Push((int) 3)
0x28d: @ irand(Stack[-6], Stack[-1])
0x28e: Pop(1)
0x28f: Push((int) 0)
0x290: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x292: Push(Stack[-7])
0x293: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x294: @ irand(Stack[-4], Stack[-7])
0x295: Pop(0)
0x296: Push("all")
0x297: PushEmpty(string, int)
0x298: Stack[-1] = Stack[-7]
0x299: Call2 0x392

0x29a: Pop(1)
0x29b: @ PlayAnimation(Stack[-2], Stack[-1])
0x29c: Pop(2)
0x29d: @ WaitForAnimEnd(Stack[-3])
0x29e: Pop(0)
0x29f: Pop(0); Push((bool) Stack[-3] == 0)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x2a1: GOTO 0x2bf

0x2a2: GOTO 0x2b4

0x2a3: Push((int) 1)
0x2a4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2a6: Push((int) 4)
0x2a7: @ rand(Stack[-3], Stack[-1])
0x2a8: Pop(1)
0x2a9: Push((int) 1)
0x2aa: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2ab: @ Sleep(Stack[-1], Stack[-2])
0x2ac: Pop(1)
0x2ad: Pop(0); Push((bool) Stack[-1] == 0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2af: GOTO 0x2bf

0x2b0: GOTO 0x2b4

0x2b1: Push(Stack[-6])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b3: GOTO 0x2bf

0x2b4: PushEmpty(bool)
0x2b5: Call2 0x2c2

0x2b6: Pop(0)
0x2b7: Pop(1); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: GOTO 0x2bf

0x2ba: @ ResetAAS()
0x2bb: Pop(0)
0x2bc: Push((int) 1)
0x2bd: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2be: GOTO 0x281

0x2bf: @ ResetAAS()
0x2c0: Pop(0)
0x2c1: Return(); Pop(14)

0x2c2: Stack[-1] = (bool) 1
0x2c3: Return(); Pop(0)

0x2c4: @ StopAnimation()
0x2c5: Pop(0)
0x2c6: @ StopGroup0()
0x2c7: Pop(0)
0x2c8: Return(); Pop(0)

0x2c9: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2ca: @ GetPosition(Stack[-3])
0x2cb: Pop(0)
0x2cc: @@ GetPosition(Stack[-2])
0x2cd: Pop(0)
0x2ce: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2cf: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2d0: Return(); Pop(6)

0x2d1: PushEmpty(bool, bool)
0x2d2: @ IsLoaded(Stack[-1])
0x2d3: Pop(0)
0x2d4: Stack[-3] = Stack[-1]
0x2d5: Return(); Pop(2)

0x2d6: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2d7: @@ GetPosition(Stack[-8])
0x2d8: Pop(0)
0x2d9: @@ GetEyesHeight(Stack[-9])
0x2da: Pop(0)
0x2db: Push(CvectorIndex(Stack[-8], 1))
0x2dc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2dd: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2de: @ GetPosition(Stack[-7])
0x2df: Pop(0)
0x2e0: @ GetEyesHeight(Stack[-9])
0x2e1: Pop(0)
0x2e2: Push(CvectorIndex(Stack[-7], 1))
0x2e3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2e4: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2e5: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2e6: Push(CvectorIndex(Stack[-6], 1))
0x2e7: Stack[-1] = (int) 0
0x2e8: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2e9: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2ea: Pop(1); Push(Sqrt(Stack[-1]))
0x2eb: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2ec: Stack[-5] = -Stack[-6]; Pop(0);
0x2ed: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2ee: PushEmpty(cvector, cvector)
0x2ef: Push(CVector(0.0, 1.0, 0.0))
0x2f0: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2f1: Call2 0x35e

0x2f2: Pop(1)
0x2f3: Push((int) 25)
0x2f4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2f5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2f6: Push(CVector(0.0, 10.0, 0.0))
0x2f7: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2f8: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2f9: @ IsOverrideActive(Stack[-2])
0x2fa: Pop(0)
0x2fb: Push(Stack[-2])
0x2fc: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fd: Stack[-21] = (bool) 0
0x2fe: Return(); Pop(18)

0x2ff: @ StopWorld()
0x300: Pop(0)
0x301: Push((bool) 1)
0x302: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x303: Pop(1)
0x304: Push(CvectorIndex(Stack[-4], 0))
0x305: Push(CvectorIndex(Stack[-5], 2))
0x306: @ Rotate(Stack[-2], Stack[-1])
0x307: Pop(2)
0x308: PushEmpty(bool)
0x309: Call2 0x3b2

0x30a: Pop(0)
0x30b: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x30c: GOTO 0x315

0x30d: Push("head")
0x30e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x30f: Pop(1)
0x310: Push(Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x312: Push("head")
0x313: @ LookAsyncCamera(Stack[-1])
0x314: Pop(1)
0x315: @ CameraWaitForPlayFinish()
0x316: Pop(0)
0x317: @ ResumeWorld()
0x318: Pop(0)
0x319: Stack[-21] = (bool) 1
0x31a: Return(); Pop(18)

0x31b: PushEmpty(bool, bool)
0x31c: Push((bool) 1)
0x31d: @ CameraSwitchToNormal(Stack[-1])
0x31e: Pop(1)
0x31f: PushEmpty(bool)
0x320: Call2 0x3b2

0x321: Pop(0)
0x322: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x323: GOTO 0x32c

0x324: Push("head")
0x325: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x326: Pop(1)
0x327: Push(Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x329: Push("head")
0x32a: @ UnlookAsync(Stack[-1])
0x32b: Pop(1)
0x32c: Return(); Pop(2)

0x32d: PushEmpty(bool, float, float, bool, float, float)
0x32e: @ lshHasAnimation(Stack[-3], Stack[-7])
0x32f: Pop(0)
0x330: Push(Stack[-3])
0x331: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x332: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x333: Pop(0)
0x334: Push((bool) 0)
0x335: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x336: Pop(1)
0x337: GOTO 0x33c

0x338: Push("Can't find lsh animation : ")
0x339: Pop(1); Push(Stack[-1] + Stack[-8]);
0x33a: @ Trace(Stack[-1])
0x33b: Pop(1)
0x33c: Return(); Pop(6)

0x33d: PushEmpty(bool, float, float, bool, float, float)
0x33e: @ lshHasAnimation(Stack[-3], Stack[-8])
0x33f: Pop(0)
0x340: Push(Stack[-3])
0x341: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x342: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x343: Pop(0)
0x344: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x345: Pop(0)
0x346: GOTO 0x34b

0x347: Push("Can't find lsh animation : ")
0x348: Pop(1); Push(Stack[-1] + Stack[-9]);
0x349: @ Trace(Stack[-1])
0x34a: Pop(1)
0x34b: Return(); Pop(6)

0x34c: PushEmpty(float, cvector, float, cvector)
0x34d: @@ GetEyesHeight(Stack[-2])
0x34e: Pop(0)
0x34f: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x350: Push(CvectorIndex(Stack[-1], 1))
0x351: Stack[-1] = Stack[-3]
0x352: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x353: Push("head")
0x354: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x355: Pop(1)
0x356: Return(); Pop(4)

0x357: PushEmpty(bool)
0x358: Call2 0x3b2

0x359: Pop(0)
0x35a: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x35b: @ lshStopSpeech()
0x35c: Pop(0)
0x35d: Return(); Pop(0)

0x35e: PushEmpty(float, float)
0x35f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x360: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x361: Push((float)0.0)
0x362: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x364: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x365: Return(); Pop(2)

0x366: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x367: Return(); Pop(2)

0x368: PushEmpty(int, int)
0x369: @ GetVariable(Stack[-3], Stack[-1])
0x36a: Pop(0)
0x36b: Stack[-4] = Stack[-1]
0x36c: Return(); Pop(2)

0x36d: PushEmpty(object, object)
0x36e: @ FindActor(Stack[-1], Stack[-4])
0x36f: Pop(0)
0x370: Pop(0); Push((bool) Stack[-1] == 0)
0x371: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x372: Push("Door ")
0x373: Pop(1); Push(Stack[-1] + Stack[-5]);
0x374: Push(" not found")
0x375: Pop(2); Push(Stack[-2] + Stack[-1]);
0x376: @ Trace(Stack[-1])
0x377: Pop(1)
0x378: GOTO 0x37c

0x379: Push("locked")
0x37a: @@ SetProperty(Stack[-1], Stack[-4])
0x37b: Pop(1)
0x37c: Return(); Pop(2)

0x37d: Stack[-1] = 0
0x37e: PushEmpty(object, object)
0x37f: @ FindActor(Stack[-1], Stack[-4])
0x380: Pop(0)
0x381: Pop(0); Push((bool) Stack[-1] == 0)
0x382: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x383: Stack[-5] = (bool) 0
0x384: Return(); Pop(2)

0x385: @ Trigger(Stack[-1], Stack[-3])
0x386: Pop(0)
0x387: Stack[-5] = (bool) 1
0x388: Return(); Pop(2)

0x389: Stack[-1] = 0
0x38a: PushEmpty(float, float)
0x38b: @ GetGameTime(Stack[-1])
0x38c: Pop(0)
0x38d: PushEmpty(int)
0x38e: Stack[-1] = Stack[-2]
0x38f: Push((int) 24)
0x390: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x391: Return(); Pop(2)

0x392: PushEmpty(string, string)
0x393: Stack[-1] = "idle"
0x394: Push(Stack[-3])
0x395: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x396: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x397: Stack[-4] = Stack[-1]
0x398: Return(); Pop(2)

0x399: PushEmpty(int, bool, int, bool)
0x39a: Stack[-2] = (int) 0
0x39b: Push("all")
0x39c: PushEmpty(string, int)
0x39d: Stack[-1] = Stack[-5]
0x39e: Call2 0x392

0x39f: Pop(1)
0x3a0: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3a1: Pop(2)
0x3a2: Pop(0); Push((bool) Stack[-1] == 0)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a4: GOTO 0x3a8

0x3a5: Push((int) 1)
0x3a6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3a7: GOTO 0x39b

0x3a8: Stack[-5] = Stack[-2]
0x3a9: Return(); Pop(4)

0x3aa: Stack[-1] = (int) 515571
0x3ab: Return(); Pop(0)

0x3ac: Stack[-1] = (int) 504029
0x3ad: Return(); Pop(0)

0x3ae: Stack[-1] = "ui/NPC_bmask.png"
0x3af: Return(); Pop(0)

0x3b0: Stack[-1] = "ui/NPC_bmask_b.png"
0x3b1: Return(); Pop(0)

0x3b2: Stack[-1] = (bool) 0
0x3b3: Return(); Pop(0)

0x3b4: PushEmpty()
0x3b5: PushEmpty(bool, string, string)
0x3b6: Stack[-2] = "quest_k12_01"
0x3b7: Stack[-1] = "init_sobor"
0x3b8: Call2 0x37e

0x3b9: Pop(3)
0x3ba: Return(); Pop(0)

0x3bb: PushEmpty()
0x3bc: Push("ook12BirdmaskS1")
0x3bd: Push((int) 1)
0x3be: @ SetVariable(Stack[-2], Stack[-1])
0x3bf: Pop(2)
0x3c0: Return(); Pop(0)

0x3c1: PushEmpty()
0x3c2: PushEmpty(string, bool)
0x3c3: Stack[-2] = "sobor@door1"
0x3c4: Stack[-1] = (bool) 0
0x3c5: Call2 0x36d

0x3c6: Pop(2)
0x3c7: Return(); Pop(0)

0x3c8: PushEmpty()
0x3c9: PushEmpty(bool, object)
0x3ca: Stack[-1] = Stack[-3]
0x3cb: Call2 0x3e8

0x3cc: Pop(1)
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3ce: Stack[-2] = (bool) 1
0x3cf: Return(); Pop(0)

0x3d0: Stack[-2] = (bool) 0
0x3d1: Return(); Pop(0)

0x3d2: PushEmpty()
0x3d3: PushEmpty(bool, object)
0x3d4: Stack[-1] = Stack[-3]
0x3d5: Call2 0x3ee

0x3d6: Pop(1)
0x3d7: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d8: Stack[-2] = (bool) 1
0x3d9: Return(); Pop(0)

0x3da: Stack[-2] = (bool) 0
0x3db: Return(); Pop(0)

0x3dc: PushEmpty()
0x3dd: PushEmpty(int, string)
0x3de: Stack[-1] = "ook12BirdmaskS1"
0x3df: Call2 0x368

0x3e0: Pop(1)
0x3e1: Push((int) 0)
0x3e2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e4: Stack[-2] = (bool) 1
0x3e5: Return(); Pop(0)

0x3e6: Stack[-2] = (bool) 0
0x3e7: Return(); Pop(0)

0x3e8: PushEmpty()
0x3e9: PushEmpty(bool)
0x3ea: Call2 0x43e

0x3eb: Stack[-3] = Stack[-1]
0x3ec: Pop(1)
0x3ed: Return(); Pop(0)

0x3ee: PushEmpty()
0x3ef: PushEmpty(int)
0x3f0: Call2 0x38a

0x3f1: Pop(0)
0x3f2: Push((int) 19)
0x3f3: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f5: Stack[-2] = (bool) 1
0x3f6: Return(); Pop(0)

0x3f7: Stack[-2] = (bool) 0
0x3f8: Return(); Pop(0)

0x3f9: PushEmpty(int, int)
0x3fa: Push("branch")
0x3fb: @ GetVariable(Stack[-1], Stack[-2])
0x3fc: Pop(1)
0x3fd: Push((int) 0)
0x3fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x400: Stack[-3] = (int) 1
0x401: Return(); Pop(2)

0x402: GOTO 0x408

0x403: Push((int) 1)
0x404: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x405: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x406: Stack[-3] = (int) 2
0x407: Return(); Pop(2)

0x408: Stack[-3] = (int) 3
0x409: Return(); Pop(2)

0x40a: PushEmpty()
0x40b: Push((int) 7)
0x40c: @@ add(Stack[-1])
0x40d: Pop(1)
0x40e: Push((int) 23)
0x40f: @@ add(Stack[-1])
0x410: Pop(1)
0x411: Push((int) 21)
0x412: @@ add(Stack[-1])
0x413: Pop(1)
0x414: Push((int) 9)
0x415: @@ add(Stack[-1])
0x416: Pop(1)
0x417: Push((int) 3)
0x418: @@ add(Stack[-1])
0x419: Pop(1)
0x41a: Push((int) 1)
0x41b: @@ add(Stack[-1])
0x41c: Pop(1)
0x41d: Push((int) 11)
0x41e: @@ add(Stack[-1])
0x41f: Pop(1)
0x420: Push((int) 13)
0x421: @@ add(Stack[-1])
0x422: Pop(1)
0x423: Push((bool) 0)
0x424: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x425: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x426: Push((int) 25)
0x427: @@ add(Stack[-1])
0x428: Pop(1)
0x429: Return(); Pop(0)

0x42a: PushEmpty(int, int)
0x42b: Push("vol_")
0x42c: Pop(1); Push(Stack[-1] + Stack[-4]);
0x42d: @ GetVariable(Stack[-1], Stack[-2])
0x42e: Pop(1)
0x42f: Push((int) 4)
0x430: Pop(1); Push(Stack[-2] & Stack[-1]);
0x431: Push((int) 0)
0x432: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x433: Return(); Pop(2)

0x434: PushEmpty(int, int)
0x435: Push("vol_")
0x436: Pop(1); Push(Stack[-1] + Stack[-4]);
0x437: @ GetVariable(Stack[-1], Stack[-2])
0x438: Pop(1)
0x439: Push((int) 16)
0x43a: Pop(1); Push(Stack[-2] & Stack[-1]);
0x43b: Push((int) 0)
0x43c: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x43d: Return(); Pop(2)

0x43e: PushEmpty(object, int, int, int, object, int, int, int)
0x43f: @ CreateIntVector(Stack[-4])
0x440: Pop(0)
0x441: PushEmpty(object, bool, int)
0x442: Stack[-3] = Stack[-7]
0x443: Stack[-2] = (bool) 0
0x444: Stack[-1] = (int) -1
0x445: Call2 0x40a

0x446: Pop(3)
0x447: @@ size(Stack[-3])
0x448: Pop(0)
0x449: Stack[-2] = (int) 0
0x44a: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x44b: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x44c: @@ get(Stack[-1], Stack[-2])
0x44d: Pop(0)
0x44e: PushEmpty(bool)
0x44f: Stack[-1] = (bool) 1
0x450: PushEmpty(bool, int)
0x451: Stack[-1] = Stack[-4]
0x452: Call2 0x434

0x453: Pop(1)
0x454: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x455: PushEmpty(bool, int)
0x456: Stack[-1] = Stack[-4]
0x457: Call2 0x42a

0x458: Pop(1)
0x459: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x45a: Stack[-1] = (bool) 0
0x45b: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x45c: Stack[-9] = (bool) 0
0x45d: Return(); Pop(8)

0x45e: Push((int) 1)
0x45f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x460: GOTO 0x44a

0x461: Stack[-9] = (bool) 1
0x462: Return(); Pop(8)

0x463: Stack[-4] = 0
0x464: PushEmpty(int, int)
0x465: Push("game_final")
0x466: @ GetVariable(Stack[-1], Stack[-2])
0x467: Pop(1)
0x468: Stack[-3] = Stack[-1]
0x469: Return(); Pop(2)

