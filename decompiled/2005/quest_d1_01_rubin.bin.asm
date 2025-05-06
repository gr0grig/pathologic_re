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
	Warning
	all
	idle
	Rage
	Confusion
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
	d1q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Rubin.png
	ui/NPC_Rubin_b.png

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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x260
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xba Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x264 Vars = (string)
		EVENT_6 Op = 0x278 Vars = ()
		EVENT_5 Op = 0x285 Vars = ()
		EVENT_7 Op = 0x2ce Vars = (int)
		EVENT_45 Op = 0x310 Vars = (bool)
		EVENT_0 Op = 0x31c Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x3a5

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x54d

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x54b

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x54f

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x551

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x53a

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
0x31: Call2 0x4b9

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x3fa

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
0x48: Call2 0x3e9

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
0x56: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x4f8

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral"
0x5e: Call2 0xa4

0x5f: Pop(1)
0x60: Push((int) 509170)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 509175)
0x66: Push((int) 10062)
0x67: Push((int) 10061)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 509187)
0x6b: Push((int) 10077)
0x6c: Push((int) 10076)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x86

0x70: PushEmpty(string)
0x71: Stack[-1] = "Warning"
0x72: Call2 0xa4

0x73: Pop(1)
0x74: Push((int) 531961)
0x75: @@ SetMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ ClearReplies()
0x78: Pop(0)
0x79: Push((int) 532856)
0x7a: Push((int) -1)
0x7b: Push((int) 34341)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: Push((int) 531962)
0x7f: Push((int) -1)
0x80: Push((int) 33366)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: GOTO 0x86

0x84: Return(); Pop(0)

0x85: GOTO 0x55

0x86: PushEmpty(bool)
0x87: Call2 0x553

0x88: Pop(0)
0x89: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8a: @ lshWaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: PushEmpty(string)
0x90: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x91: Call2 0x484

0x92: Pop(1)
0x93: GOTO 0x8a

0x94: GOTO 0xa3

0x95: Push("all")
0x96: Push("idle")
0x97: @ PlayAnimation(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: @ WaitForAnimEnd()
0x9a: Pop(0)
0x9b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: GOTO 0xa3

0x9e: Push("all")
0x9f: Push("idle")
0xa0: @ PlayAnimation(Stack[-2], Stack[-1])
0xa1: Pop(2)
0xa2: GOTO 0x99

0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: PushEmpty(bool)
0xa6: Call2 0x553

0xa7: Pop(0)
0xa8: Pop(1); Push((bool) Stack[-1] == 0)
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: Return(); Pop(0)

0xab: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Return(); Pop(0)

0xae: PushEmpty(string, bool)
0xaf: Stack[-2] = Stack[-3]
0xb0: Push("")
0xb1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb3: Stack[-1] = (bool) 0
0xb4: GOTO 0xb6

0xb5: Stack[-1] = (bool) 1
0xb6: Call2 0x494

0xb7: Pop(2)
0xb8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: Push((int) 1)
0xbc: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0xbd: PushEmpty()
0xbe: Call2 0x4b2

0xbf: Pop(0)
0xc0: Push((int) 10088)
0xc1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call2 0x4ef

0xc7: Pop(2)
0xc8: Push((int) 34358)
0xc9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcb: PushEmpty(object, object)
0xcc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce: Call2 0x4ef

0xcf: Pop(2)
0xd0: Push((int) 10081)
0xd1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd3: PushEmpty(object, object)
0xd4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd6: Call2 0x4ef

0xd7: Pop(2)
0xd8: Push((int) 10054)
0xd9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xdb: PushEmpty(bool, object)
0xdc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Call2 0x4f8

0xde: Pop(1)
0xdf: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xe0: PushEmpty(string)
0xe1: Stack[-1] = "Neutral"
0xe2: Call2 0xa4

0xe3: Pop(1)
0xe4: Push((int) 509170)
0xe5: @@ SetMessage(Stack[-1])
0xe6: Pop(1)
0xe7: @@ ClearReplies()
0xe8: Pop(0)
0xe9: Push((int) 509175)
0xea: Push((int) 10062)
0xeb: Push((int) 10061)
0xec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: Push((int) 509187)
0xef: Push((int) 10077)
0xf0: Push((int) 10076)
0xf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2: Pop(3)
0xf3: Return(); Pop(0)

0xf4: PushEmpty(string)
0xf5: Stack[-1] = "Warning"
0xf6: Call2 0xa4

0xf7: Pop(1)
0xf8: Push((int) 531961)
0xf9: @@ SetMessage(Stack[-1])
0xfa: Pop(1)
0xfb: @@ ClearReplies()
0xfc: Pop(0)
0xfd: Push((int) 532856)
0xfe: Push((int) -1)
0xff: Push((int) 34341)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Push((int) 531962)
0x103: Push((int) -1)
0x104: Push((int) 33366)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: Return(); Pop(0)

0x108: Push((int) 10077)
0x109: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x10b: PushEmpty(string)
0x10c: Stack[-1] = "Warning"
0x10d: Call2 0xa4

0x10e: Pop(1)
0x10f: Push((int) 509188)
0x110: @@ SetMessage(Stack[-1])
0x111: Pop(1)
0x112: @@ ClearReplies()
0x113: Pop(0)
0x114: Push((int) 509190)
0x115: Push((int) 10080)
0x116: Push((int) 10079)
0x117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: Push((int) 509189)
0x11a: Push((int) -1)
0x11b: Push((int) 10078)
0x11c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(3)
0x11e: Return(); Pop(0)

0x11f: Push((int) 10080)
0x120: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Warning"
0x124: Call2 0xa4

0x125: Pop(1)
0x126: Push((int) 509191)
0x127: @@ SetMessage(Stack[-1])
0x128: Pop(1)
0x129: @@ ClearReplies()
0x12a: Pop(0)
0x12b: Push((int) 509193)
0x12c: Push((int) 10083)
0x12d: Push((int) 10082)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Push((int) 509192)
0x131: Push((int) -1)
0x132: Push((int) 10081)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 10083)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Warning"
0x13b: Call2 0xa4

0x13c: Pop(1)
0x13d: Push((int) 509194)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: Push((int) 509195)
0x143: Push((int) 10085)
0x144: Push((int) 10084)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Push((int) 509202)
0x148: Push((int) 10085)
0x149: Push((int) 10093)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: Return(); Pop(0)

0x14d: Push((int) 10085)
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Warning"
0x152: Call2 0xa4

0x153: Pop(1)
0x154: Push((int) 509196)
0x155: @@ SetMessage(Stack[-1])
0x156: Pop(1)
0x157: @@ ClearReplies()
0x158: Pop(0)
0x159: Push((int) 509197)
0x15a: Push((int) 10087)
0x15b: Push((int) 10086)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: Push((int) 509200)
0x15f: Push((int) 34347)
0x160: Push((int) 10089)
0x161: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x162: Pop(3)
0x163: Push((int) 509201)
0x164: Push((int) 34339)
0x165: Push((int) 10091)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Return(); Pop(0)

0x169: Push((int) 34339)
0x16a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Rage"
0x16e: Call2 0xa4

0x16f: Pop(1)
0x170: Push((int) 532854)
0x171: @@ SetMessage(Stack[-1])
0x172: Pop(1)
0x173: @@ ClearReplies()
0x174: Pop(0)
0x175: Push((int) 532855)
0x176: Push((int) 10087)
0x177: Push((int) 34340)
0x178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: Return(); Pop(0)

0x17b: Push((int) 34347)
0x17c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x17e: PushEmpty(string)
0x17f: Stack[-1] = "Confusion"
0x180: Call2 0xa4

0x181: Pop(1)
0x182: Push((int) 532861)
0x183: @@ SetMessage(Stack[-1])
0x184: Pop(1)
0x185: @@ ClearReplies()
0x186: Pop(0)
0x187: Push((int) 532862)
0x188: Push((int) 34349)
0x189: Push((int) 34348)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: Push((int) 532865)
0x18d: Push((int) 34352)
0x18e: Push((int) 34351)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Return(); Pop(0)

0x192: Push((int) 34352)
0x193: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x195: PushEmpty(string)
0x196: Stack[-1] = "Confusion"
0x197: Call2 0xa4

0x198: Pop(1)
0x199: Push((int) 532866)
0x19a: @@ SetMessage(Stack[-1])
0x19b: Pop(1)
0x19c: @@ ClearReplies()
0x19d: Pop(0)
0x19e: Push((int) 532867)
0x19f: Push((int) 34354)
0x1a0: Push((int) 34353)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 34349)
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = "Warning"
0x1a9: Call2 0xa4

0x1aa: Pop(1)
0x1ab: Push((int) 532863)
0x1ac: @@ SetMessage(Stack[-1])
0x1ad: Pop(1)
0x1ae: @@ ClearReplies()
0x1af: Pop(0)
0x1b0: Push((int) 532864)
0x1b1: Push((int) 34354)
0x1b2: Push((int) 34350)
0x1b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4: Pop(3)
0x1b5: Return(); Pop(0)

0x1b6: Push((int) 34354)
0x1b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1b9: PushEmpty(string)
0x1ba: Stack[-1] = "Warning"
0x1bb: Call2 0xa4

0x1bc: Pop(1)
0x1bd: Push((int) 532868)
0x1be: @@ SetMessage(Stack[-1])
0x1bf: Pop(1)
0x1c0: @@ ClearReplies()
0x1c1: Pop(0)
0x1c2: Push((int) 532869)
0x1c3: Push((int) 10087)
0x1c4: Push((int) 34356)
0x1c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c6: Pop(3)
0x1c7: Return(); Pop(0)

0x1c8: Push((int) 10087)
0x1c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1cb: PushEmpty(string)
0x1cc: Stack[-1] = "Rage"
0x1cd: Call2 0xa4

0x1ce: Pop(1)
0x1cf: Push((int) 509198)
0x1d0: @@ SetMessage(Stack[-1])
0x1d1: Pop(1)
0x1d2: @@ ClearReplies()
0x1d3: Pop(0)
0x1d4: Push((int) 509199)
0x1d5: Push((int) -1)
0x1d6: Push((int) 10088)
0x1d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d8: Pop(3)
0x1d9: Push((int) 532870)
0x1da: Push((int) -1)
0x1db: Push((int) 34358)
0x1dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dd: Pop(3)
0x1de: Return(); Pop(0)

0x1df: Push((int) 10062)
0x1e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1e2: PushEmpty(string)
0x1e3: Stack[-1] = "Neutral"
0x1e4: Call2 0xa4

0x1e5: Pop(1)
0x1e6: Push((int) 509176)
0x1e7: @@ SetMessage(Stack[-1])
0x1e8: Pop(1)
0x1e9: @@ ClearReplies()
0x1ea: Pop(0)
0x1eb: Push((int) 509177)
0x1ec: Push((int) 10064)
0x1ed: Push((int) 10063)
0x1ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ef: Pop(3)
0x1f0: Return(); Pop(0)

0x1f1: Push((int) 10064)
0x1f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1f4: PushEmpty(string)
0x1f5: Stack[-1] = "Confusion"
0x1f6: Call2 0xa4

0x1f7: Pop(1)
0x1f8: Push((int) 509178)
0x1f9: @@ SetMessage(Stack[-1])
0x1fa: Pop(1)
0x1fb: @@ ClearReplies()
0x1fc: Pop(0)
0x1fd: Push((int) 509179)
0x1fe: Push((int) 10066)
0x1ff: Push((int) 10065)
0x200: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x201: Pop(3)
0x202: Push((int) 509185)
0x203: Push((int) 10066)
0x204: Push((int) 10073)
0x205: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x206: Pop(3)
0x207: Return(); Pop(0)

0x208: Push((int) 10066)
0x209: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x20b: PushEmpty(string)
0x20c: Stack[-1] = "Confusion"
0x20d: Call2 0xa4

0x20e: Pop(1)
0x20f: Push((int) 509180)
0x210: @@ SetMessage(Stack[-1])
0x211: Pop(1)
0x212: @@ ClearReplies()
0x213: Pop(0)
0x214: Push((int) 509181)
0x215: Push((int) 10068)
0x216: Push((int) 10067)
0x217: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x218: Pop(3)
0x219: Push((int) 509184)
0x21a: Push((int) 10068)
0x21b: Push((int) 10071)
0x21c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21d: Pop(3)
0x21e: Return(); Pop(0)

0x21f: Push((int) 10068)
0x220: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x222: PushEmpty(string)
0x223: Stack[-1] = "Confusion"
0x224: Call2 0xa4

0x225: Pop(1)
0x226: Push((int) 509182)
0x227: @@ SetMessage(Stack[-1])
0x228: Pop(1)
0x229: @@ ClearReplies()
0x22a: Pop(0)
0x22b: Push((int) 509183)
0x22c: Push((int) 10085)
0x22d: Push((int) 10069)
0x22e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22f: Pop(3)
0x230: Return(); Pop(0)

0x231: Push((int) 10056)
0x232: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x233: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x234: Push((int) 34342)
0x235: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x237: PushEmpty(string)
0x238: Stack[-1] = "Warning"
0x239: Call2 0xa4

0x23a: Pop(1)
0x23b: Push((int) 532857)
0x23c: @@ SetMessage(Stack[-1])
0x23d: Pop(1)
0x23e: @@ ClearReplies()
0x23f: Pop(0)
0x240: Push((int) 532858)
0x241: Push((int) 10064)
0x242: Push((int) 34343)
0x243: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x244: Pop(3)
0x245: Push((int) 532860)
0x246: Push((int) 10064)
0x247: Push((int) 34345)
0x248: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x249: Pop(3)
0x24a: Return(); Pop(0)

0x24b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x24c: PushEmpty(bool)
0x24d: Call2 0x553

0x24e: Pop(0)
0x24f: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x250: @ lshStopAnimation()
0x251: Pop(0)
0x252: GOTO 0x255

0x253: @ StopAnimation()
0x254: Pop(0)
0x255: Return(); Pop(0)

0x256: GOTO 0xbb

0x257: Return(); Pop(0)

0x258: PushEmpty()
0x259: PushEmpty(int, object)
0x25a: Stack[-1] = Stack[-3]
0x25b: Push(-2, 1); TaskCall(0)
0x25c: Call2 0x0

0x25d: Pop(-2, 1); TaskReturn
0x25e: Pop(2)
0x25f: Return(); Pop(0)

0x260: PushEmpty()
0x261: Call2 0x289

0x262: Pop(0)
0x263: Return(); Pop(0)

0x264: PushEmpty(bool, bool)
0x265: Push("cleanup")
0x266: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x268: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x269: @ IsLoaded(Stack[-1])
0x26a: Pop(0)
0x26b: Pop(0); Push((bool) Stack[-1] == 0)
0x26c: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x26d: PushEmpty(object)
0x26e: Call2 0x4b9

0x26f: Pop(0)
0x270: @ RemoveActor(Stack[-1])
0x271: Pop(1)
0x272: GOTO 0x277

0x273: Push("restore")
0x274: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x277: Return(); Pop(2)

0x278: Push( Stack[1 + Tasks[-1].StackPointer] )
0x279: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27a: PushEmpty(object)
0x27b: Call2 0x4b9

0x27c: Pop(0)
0x27d: @ RemoveActor(Stack[-1])
0x27e: Pop(1)
0x27f: @ Hold()
0x280: Pop(0)
0x281: PushEmpty()
0x282: Call2 0x2f4

0x283: Pop(0)
0x284: Return(); Pop(0)

0x285: PushEmpty()
0x286: Call2 0x303

0x287: Pop(0)
0x288: Return(); Pop(0)

0x289: PushEmpty(bool)
0x28a: Call2 0x3a0

0x28b: Pop(0)
0x28c: Pop(1); Push((bool) Stack[-1] == 0)
0x28d: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28e: @ Hold()
0x28f: Pop(0)
0x290: @ GetDirection(Stack[-0])
0x291: Pop(0)
0x292: PushEmpty()
0x293: Call2 0x339

0x294: Pop(0)
0x295: GOTO 0x292

0x296: Return(); Pop(0)

0x297: PushEmpty(object, object)
0x298: Push("player")
0x299: @ FindActor(Stack[-2], Stack[-1])
0x29a: Pop(1)
0x29b: Pop(0); Push((bool) Stack[-1] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29d: Stack[-3] = (bool) 0
0x29e: Return(); Pop(2)

0x29f: PushEmpty(bool, object)
0x2a0: Stack[-1] = Stack[-3]
0x2a1: Call2 0x397

0x2a2: Stack[-5] = Stack[-2]
0x2a3: Pop(2)
0x2a4: Return(); Pop(2)

0x2a5: Stack[-1] = 0
0x2a6: Push(CvectorIndex(Stack[-0], 0))
0x2a7: Push(CvectorIndex(Stack[-0], 2))
0x2a8: @ RotateAsync(Stack[-2], Stack[-1])
0x2a9: Pop(2)
0x2aa: Return(); Pop(0)

0x2ab: PushEmpty(object, bool, object, bool)
0x2ac: Push("player")
0x2ad: @ FindActor(Stack[-3], Stack[-1])
0x2ae: Pop(1)
0x2af: Pop(0); Push((bool) Stack[-2] == 0)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b1: Stack[-5] = (bool) 0
0x2b2: Return(); Pop(4)

0x2b3: PushEmpty(float, object)
0x2b4: Stack[-1] = Stack[-4]
0x2b5: Call2 0x385

0x2b6: Pop(1)
0x2b7: Push((float)90000.0)
0x2b8: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2ba: Stack[-5] = (bool) 0
0x2bb: Return(); Pop(4)

0x2bc: @ CanSee(Stack[-1], Stack[-2])
0x2bd: Pop(0)
0x2be: Stack[-5] = Stack[-1]
0x2bf: Return(); Pop(4)

0x2c0: Stack[-2] = 0
0x2c1: PushEmpty(float, float)
0x2c2: Push((int) 8)
0x2c3: Push((int) 16)
0x2c4: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x2c5: Pop(2)
0x2c6: Push((int) 10)
0x2c7: @ SetTimer(Stack[-1], Stack[-2])
0x2c8: Pop(1)
0x2c9: Return(); Pop(2)

0x2ca: Push((int) 10)
0x2cb: @ KillTimer(Stack[-1])
0x2cc: Pop(1)
0x2cd: Return(); Pop(0)

0x2ce: PushEmpty()
0x2cf: Push((int) 10)
0x2d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2d2: PushEmpty()
0x2d3: Call2 0x2ca

0x2d4: Pop(0)
0x2d5: PushEmpty(bool)
0x2d6: Stack[-1] = (bool) 0
0x2d7: PushEmpty(bool)
0x2d8: Call2 0x3a0

0x2d9: Pop(0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2db: PushEmpty(bool)
0x2dc: Call2 0x2ab

0x2dd: Pop(0)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2df: Stack[-1] = (bool) 1
0x2e0: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2e1: PushEmpty(bool)
0x2e2: Call2 0x297

0x2e3: Pop(0)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e5: PushEmpty(bool, object)
0x2e6: PushEmpty(object)
0x2e7: Call2 0x4b9

0x2e8: Stack[-2] = Stack[-1]
0x2e9: Pop(1)
0x2ea: Call2 0x434

0x2eb: Pop(2)
0x2ec: GOTO 0x2f3

0x2ed: PushEmpty()
0x2ee: Call2 0x2a6

0x2ef: Pop(0)
0x2f0: PushEmpty()
0x2f1: Call2 0x2c1

0x2f2: Pop(0)
0x2f3: Return(); Pop(0)

0x2f4: PushEmpty()
0x2f5: Call2 0x380

0x2f6: Pop(0)
0x2f7: PushEmpty()
0x2f8: Call2 0x2ca

0x2f9: Pop(0)
0x2fa: @ lshStopSpeech()
0x2fb: Pop(0)
0x2fc: @ lshStopAnimation()
0x2fd: Pop(0)
0x2fe: @ StopAsync()
0x2ff: Pop(0)
0x300: @ Hold()
0x301: Pop(0)
0x302: Return(); Pop(0)

0x303: @ StopGroup0()
0x304: Pop(0)
0x305: PushEmpty()
0x306: Call2 0x2ca

0x307: Pop(0)
0x308: PushEmpty(string)
0x309: Stack[-1] = "Neutral"
0x30a: Call2 0x484

0x30b: Pop(1)
0x30c: PushEmpty()
0x30d: Call2 0x2c1

0x30e: Pop(0)
0x30f: Return(); Pop(0)

0x310: PushEmpty()
0x311: Push(Stack[-1])
0x312: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x313: PushEmpty()
0x314: Call2 0x2c1

0x315: Pop(0)
0x316: GOTO 0x31b

0x317: PushEmpty(string)
0x318: Stack[-1] = "Neutral"
0x319: Call2 0x484

0x31a: Pop(1)
0x31b: Return(); Pop(0)

0x31c: PushEmpty(bool, bool)
0x31d: @ IsOverrideActive(Stack[-1])
0x31e: Pop(0)
0x31f: Pop(0); Push((bool) Stack[-1] == 0)
0x320: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x321: EventDisable(0)
0x322: PushEmpty()
0x323: Call2 0x380

0x324: Pop(0)
0x325: PushEmpty(bool, object)
0x326: Stack[-1] = Stack[-5]
0x327: Call2 0x397

0x328: Pop(2)
0x329: EventEnable(0)
0x32a: PushEmpty(object)
0x32b: Stack[-1] = Stack[-4]
0x32c: Call2 0x258

0x32d: Pop(1)
0x32e: PushEmpty(string)
0x32f: Stack[-1] = "Neutral"
0x330: Call2 0x484

0x331: Pop(1)
0x332: PushEmpty()
0x333: Call2 0x2ca

0x334: Pop(0)
0x335: PushEmpty()
0x336: Call2 0x2c1

0x337: Pop(0)
0x338: Return(); Pop(2)

0x339: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x33a: @ WaitForAnimEnd()
0x33b: Pop(0)
0x33c: PushEmpty(bool)
0x33d: Call2 0x3a0

0x33e: Pop(0)
0x33f: Pop(1); Push((bool) Stack[-1] == 0)
0x340: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x341: Return(); Pop(12)

0x342: PushEmpty(int)
0x343: Call2 0x4de

0x344: Stack[-7] = Stack[-1]
0x345: Pop(1)
0x346: Stack[-5] = (int) 0
0x347: PushEmpty(bool)
0x348: Stack[-1] = (bool) 0
0x349: Push((int) 5)
0x34a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x34b: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34c: PushEmpty(bool)
0x34d: Call2 0x3a0

0x34e: Pop(0)
0x34f: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x350: Stack[-1] = (bool) 1
0x351: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x352: Pop(0); Push((bool) Stack[-6] == 0)
0x353: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x354: Push((int) 3)
0x355: @ Sleep(Stack[-1], Stack[-5])
0x356: Pop(1)
0x357: Pop(0); Push((bool) Stack[-4] == 0)
0x358: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x359: GOTO 0x37b

0x35a: GOTO 0x370

0x35b: @ irand(Stack[-3], Stack[-6])
0x35c: Pop(0)
0x35d: Push((int) 5)
0x35e: @ irand(Stack[-3], Stack[-1])
0x35f: Pop(1)
0x360: Push((int) 0)
0x361: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x363: Stack[-3] = (int) 0
0x364: Push("all")
0x365: PushEmpty(string, int)
0x366: Stack[-1] = Stack[-6]
0x367: Call2 0x4d7

0x368: Pop(1)
0x369: @ PlayAnimation(Stack[-2], Stack[-1])
0x36a: Pop(2)
0x36b: @ WaitForAnimEnd(Stack[-1])
0x36c: Pop(0)
0x36d: Pop(0); Push((bool) Stack[-1] == 0)
0x36e: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36f: GOTO 0x37b

0x370: PushEmpty(bool)
0x371: Call2 0x37e

0x372: Pop(0)
0x373: Pop(1); Push((bool) Stack[-1] == 0)
0x374: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x375: GOTO 0x37b

0x376: @ ResetAAS()
0x377: Pop(0)
0x378: Push((int) 1)
0x379: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x37a: GOTO 0x347

0x37b: @ ResetAAS()
0x37c: Pop(0)
0x37d: Return(); Pop(12)

0x37e: Stack[-1] = (bool) 1
0x37f: Return(); Pop(0)

0x380: @ StopAnimation()
0x381: Pop(0)
0x382: @ StopGroup0()
0x383: Pop(0)
0x384: Return(); Pop(0)

0x385: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x386: @ GetPosition(Stack[-3])
0x387: Pop(0)
0x388: @@ GetPosition(Stack[-2])
0x389: Pop(0)
0x38a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x38b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x38c: Return(); Pop(6)

0x38d: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x38e: @ GetPosition(Stack[-3])
0x38f: Pop(0)
0x390: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x391: Push(CvectorIndex(Stack[-2], 0))
0x392: Push(CvectorIndex(Stack[-3], 2))
0x393: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x394: Pop(2)
0x395: Stack[-8] = Stack[-1]
0x396: Return(); Pop(6)

0x397: PushEmpty(cvector, cvector)
0x398: @@ GetPosition(Stack[-1])
0x399: Pop(0)
0x39a: PushEmpty(bool, cvector)
0x39b: Stack[-1] = Stack[-3]
0x39c: Call2 0x38d

0x39d: Stack[-6] = Stack[-2]
0x39e: Pop(2)
0x39f: Return(); Pop(2)

0x3a0: PushEmpty(bool, bool)
0x3a1: @ IsLoaded(Stack[-1])
0x3a2: Pop(0)
0x3a3: Stack[-3] = Stack[-1]
0x3a4: Return(); Pop(2)

0x3a5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3a6: @@ GetPosition(Stack[-8])
0x3a7: Pop(0)
0x3a8: @@ GetEyesHeight(Stack[-9])
0x3a9: Pop(0)
0x3aa: Push(CvectorIndex(Stack[-8], 1))
0x3ab: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3ac: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3ad: @ GetPosition(Stack[-7])
0x3ae: Pop(0)
0x3af: @ GetEyesHeight(Stack[-9])
0x3b0: Pop(0)
0x3b1: Push(CvectorIndex(Stack[-7], 1))
0x3b2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3b3: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3b4: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3b5: Push(CvectorIndex(Stack[-6], 1))
0x3b6: Stack[-1] = (int) 0
0x3b7: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3b8: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3b9: Pop(1); Push(Sqrt(Stack[-1]))
0x3ba: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3bb: Stack[-5] = -Stack[-6]; Pop(0);
0x3bc: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3bd: PushEmpty(cvector, cvector)
0x3be: Push(CVector(0.0, 1.0, 0.0))
0x3bf: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3c0: Call2 0x4bf

0x3c1: Pop(1)
0x3c2: Push((int) 25)
0x3c3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3c4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3c5: Push(CVector(0.0, 10.0, 0.0))
0x3c6: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3c7: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3c8: @ IsOverrideActive(Stack[-2])
0x3c9: Pop(0)
0x3ca: Push(Stack[-2])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cc: Stack[-21] = (bool) 0
0x3cd: Return(); Pop(18)

0x3ce: @ StopWorld()
0x3cf: Pop(0)
0x3d0: @ CameraTransit(Stack[-3], Stack[-5])
0x3d1: Pop(0)
0x3d2: Push(CvectorIndex(Stack[-4], 0))
0x3d3: Push(CvectorIndex(Stack[-5], 2))
0x3d4: @ Rotate(Stack[-2], Stack[-1])
0x3d5: Pop(2)
0x3d6: PushEmpty(bool)
0x3d7: Call2 0x553

0x3d8: Pop(0)
0x3d9: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3da: GOTO 0x3e3

0x3db: Push("head")
0x3dc: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3dd: Pop(1)
0x3de: Push(Stack[-1])
0x3df: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e0: Push("head")
0x3e1: @ LookAsyncCamera(Stack[-1])
0x3e2: Pop(1)
0x3e3: @ CameraWaitForPlayFinish()
0x3e4: Pop(0)
0x3e5: @ ResumeWorld()
0x3e6: Pop(0)
0x3e7: Stack[-21] = (bool) 1
0x3e8: Return(); Pop(18)

0x3e9: PushEmpty(bool, bool)
0x3ea: @ CameraSwitchToNormal()
0x3eb: Pop(0)
0x3ec: PushEmpty(bool)
0x3ed: Call2 0x553

0x3ee: Pop(0)
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3f0: GOTO 0x3f9

0x3f1: Push("head")
0x3f2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3f3: Pop(1)
0x3f4: Push(Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f6: Push("head")
0x3f7: @ UnlookAsync(Stack[-1])
0x3f8: Pop(1)
0x3f9: Return(); Pop(2)

0x3fa: PushEmpty(int, int, int, int)
0x3fb: Push("voice_common")
0x3fc: @ GetVariable(Stack[-1], Stack[-3])
0x3fd: Pop(1)
0x3fe: Push(Stack[-2])
0x3ff: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x400: PushEmpty(bool, object)
0x401: Stack[-1] = Stack[-7]
0x402: Call2 0x434

0x403: Pop(1)
0x404: Pop(1); Push((bool) Stack[-1] == 0)
0x405: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x406: PushEmpty(bool, object)
0x407: Stack[-1] = Stack[-7]
0x408: Call2 0x459

0x409: Pop(1)
0x40a: Pop(1); Push((bool) Stack[-1] == 0)
0x40b: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40c: Stack[-6] = (bool) 0
0x40d: Return(); Pop(4)

0x40e: Push((int) 2)
0x40f: @ irand(Stack[-2], Stack[-1])
0x410: Pop(1)
0x411: Push(Stack[-1])
0x412: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x413: Push("voice_common")
0x414: Push((int) 1)
0x415: Pop(1); Push(Stack[-4] + Stack[-1]);
0x416: Push((int) 3)
0x417: Pop(2); Push(Stack[-2] % Stack[-1]);
0x418: @ SetVariable(Stack[-2], Stack[-1])
0x419: Pop(2)
0x41a: GOTO 0x41f

0x41b: Push("voice_common")
0x41c: Push((int) 0)
0x41d: @ SetVariable(Stack[-2], Stack[-1])
0x41e: Pop(2)
0x41f: GOTO 0x432

0x420: PushEmpty(bool, object)
0x421: Stack[-1] = Stack[-7]
0x422: Call2 0x459

0x423: Pop(1)
0x424: Pop(1); Push((bool) Stack[-1] == 0)
0x425: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x426: PushEmpty(bool, object)
0x427: Stack[-1] = Stack[-7]
0x428: Call2 0x434

0x429: Pop(1)
0x42a: Pop(1); Push((bool) Stack[-1] == 0)
0x42b: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42c: Stack[-6] = (bool) 0
0x42d: Return(); Pop(4)

0x42e: Push("voice_common")
0x42f: Push((int) 1)
0x430: @ SetVariable(Stack[-2], Stack[-1])
0x431: Pop(2)
0x432: Stack[-6] = (bool) 1
0x433: Return(); Pop(4)

0x434: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x435: Stack[-5] = "c"
0x436: Stack[-4] = (int) 0
0x437: Push((int) 1)
0x438: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x439: Push((int) 1)
0x43a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x43b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x43c: @@ HasProperty(Stack[-1], Stack[-4])
0x43d: Pop(1)
0x43e: Pop(0); Push((bool) Stack[-3] == 0)
0x43f: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x440: GOTO 0x444

0x441: Push((int) 1)
0x442: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x443: GOTO 0x437

0x444: Pop(0); Push((bool) Stack[-4] == 0)
0x445: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x446: Stack[-12] = (bool) 0
0x447: Return(); Pop(10)

0x448: Stack[-2] = (int) 0
0x449: Push((int) 1)
0x44a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x44b: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44c: @ irand(Stack[-2], Stack[-4])
0x44d: Pop(0)
0x44e: Push((int) 1)
0x44f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x450: Pop(1); Push(Stack[-6] + Stack[-1]);
0x451: @@ GetProperty(Stack[-1], Stack[-2])
0x452: Pop(1)
0x453: PushEmpty(bool, string)
0x454: Stack[-1] = Stack[-3]
0x455: Call2 0x4a3

0x456: Stack[-14] = Stack[-2]
0x457: Pop(2)
0x458: Return(); Pop(10)

0x459: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x45a: Push("d")
0x45b: PushEmpty(int)
0x45c: Call2 0x4ce

0x45d: Pop(0)
0x45e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x45f: Push("m")
0x460: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x461: Stack[-4] = (int) 0
0x462: Push((int) 1)
0x463: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x464: Push((int) 1)
0x465: Pop(1); Push(Stack[-5] + Stack[-1]);
0x466: Pop(1); Push(Stack[-6] + Stack[-1]);
0x467: @@ HasProperty(Stack[-1], Stack[-4])
0x468: Pop(1)
0x469: Pop(0); Push((bool) Stack[-3] == 0)
0x46a: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x46b: GOTO 0x46f

0x46c: Push((int) 1)
0x46d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x46e: GOTO 0x462

0x46f: Pop(0); Push((bool) Stack[-4] == 0)
0x470: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x471: Stack[-12] = (bool) 0
0x472: Return(); Pop(10)

0x473: Stack[-2] = (int) 0
0x474: Push((int) 1)
0x475: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x476: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x477: @ irand(Stack[-2], Stack[-4])
0x478: Pop(0)
0x479: Push((int) 1)
0x47a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x47b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x47c: @@ GetProperty(Stack[-1], Stack[-2])
0x47d: Pop(1)
0x47e: PushEmpty(bool, string)
0x47f: Stack[-1] = Stack[-3]
0x480: Call2 0x4a3

0x481: Stack[-14] = Stack[-2]
0x482: Pop(2)
0x483: Return(); Pop(10)

0x484: PushEmpty(bool, float, float, bool, float, float)
0x485: @ lshHasAnimation(Stack[-3], Stack[-7])
0x486: Pop(0)
0x487: Push(Stack[-3])
0x488: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x489: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x48a: Pop(0)
0x48b: Push((bool) 0)
0x48c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x48d: Pop(1)
0x48e: GOTO 0x493

0x48f: Push("Can't find lsh animation : ")
0x490: Pop(1); Push(Stack[-1] + Stack[-8]);
0x491: @ Trace(Stack[-1])
0x492: Pop(1)
0x493: Return(); Pop(6)

0x494: PushEmpty(bool, float, float, bool, float, float)
0x495: @ lshHasAnimation(Stack[-3], Stack[-8])
0x496: Pop(0)
0x497: Push(Stack[-3])
0x498: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x499: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x49a: Pop(0)
0x49b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x49c: Pop(0)
0x49d: GOTO 0x4a2

0x49e: Push("Can't find lsh animation : ")
0x49f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x4a0: @ Trace(Stack[-1])
0x4a1: Pop(1)
0x4a2: Return(); Pop(6)

0x4a3: PushEmpty(bool, bool)
0x4a4: PushEmpty(bool)
0x4a5: Call2 0x553

0x4a6: Pop(0)
0x4a7: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4a8: @ lshHasSpeech(Stack[-1], Stack[-3])
0x4a9: Pop(0)
0x4aa: Push(Stack[-1])
0x4ab: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4ac: @ lshPlaySpeech(Stack[-3])
0x4ad: Pop(0)
0x4ae: Stack[-4] = (bool) 1
0x4af: Return(); Pop(2)

0x4b0: Stack[-4] = (bool) 0
0x4b1: Return(); Pop(2)

0x4b2: PushEmpty(bool)
0x4b3: Call2 0x553

0x4b4: Pop(0)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b6: @ lshStopSpeech()
0x4b7: Pop(0)
0x4b8: Return(); Pop(0)

0x4b9: PushEmpty(object, object)
0x4ba: @ self(Stack[-1])
0x4bb: Pop(0)
0x4bc: Stack[-3] = Stack[-1]
0x4bd: Return(); Pop(2)

0x4be: Stack[-1] = 0
0x4bf: PushEmpty(float, float)
0x4c0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4c1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4c2: Push((float)0.0)
0x4c3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c5: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x4c6: Return(); Pop(2)

0x4c7: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4c8: Return(); Pop(2)

0x4c9: PushEmpty(int, int)
0x4ca: @ GetVariable(Stack[-3], Stack[-1])
0x4cb: Pop(0)
0x4cc: Stack[-4] = Stack[-1]
0x4cd: Return(); Pop(2)

0x4ce: PushEmpty(float, float)
0x4cf: @ GetGameTime(Stack[-1])
0x4d0: Pop(0)
0x4d1: Push((int) 1)
0x4d2: PushEmpty(int)
0x4d3: Push((int) 24)
0x4d4: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x4d5: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x4d6: Return(); Pop(2)

0x4d7: PushEmpty(string, string)
0x4d8: Stack[-1] = "idle"
0x4d9: Push(Stack[-3])
0x4da: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4db: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4dc: Stack[-4] = Stack[-1]
0x4dd: Return(); Pop(2)

0x4de: PushEmpty(int, bool, int, bool)
0x4df: Stack[-2] = (int) 0
0x4e0: Push("all")
0x4e1: PushEmpty(string, int)
0x4e2: Stack[-1] = Stack[-5]
0x4e3: Call2 0x4d7

0x4e4: Pop(1)
0x4e5: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4e6: Pop(2)
0x4e7: Pop(0); Push((bool) Stack[-1] == 0)
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e9: GOTO 0x4ed

0x4ea: Push((int) 1)
0x4eb: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4ec: GOTO 0x4e0

0x4ed: Stack[-5] = Stack[-2]
0x4ee: Return(); Pop(4)

0x4ef: PushEmpty()
0x4f0: Push("d1q01")
0x4f1: Push((int) 8)
0x4f2: @ SetVariable(Stack[-2], Stack[-1])
0x4f3: Pop(2)
0x4f4: PushEmpty()
0x4f5: Call2 0x504

0x4f6: Pop(0)
0x4f7: Return(); Pop(0)

0x4f8: PushEmpty()
0x4f9: PushEmpty(int, string)
0x4fa: Stack[-1] = "d1q01"
0x4fb: Call2 0x4c9

0x4fc: Pop(1)
0x4fd: Push((int) 7)
0x4fe: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4ff: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x500: Stack[-2] = (bool) 1
0x501: Return(); Pop(0)

0x502: Stack[-2] = (bool) 0
0x503: Return(); Pop(0)

0x504: PushEmpty(object, object)
0x505: Push((int) 621)
0x506: Push((int) 1)
0x507: Push((int) 532195)
0x508: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x509: Pop(3)
0x50a: PushEmpty(bool, object, int)
0x50b: Stack[-2] = Stack[-4]
0x50c: Stack[-1] = (int) 2
0x50d: Call2 0x51e

0x50e: Pop(3)
0x50f: Return(); Pop(2)

0x510: Stack[-1] = 0
0x511: PushEmpty(object, object)
0x512: @ GetDiaryRoot(Stack[-1])
0x513: Pop(0)
0x514: Pop(0); Push((bool) Stack[-1] == 0)
0x515: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x516: Push("Can't retrieve diary root")
0x517: @ Trace(Stack[-1])
0x518: Pop(1)
0x519: Stack[-3] = (bool) 0
0x51a: Return(); Pop(2)

0x51b: Stack[-3] = Stack[-1]
0x51c: Return(); Pop(2)

0x51d: Stack[-1] = 0
0x51e: PushEmpty(object, object, int, object, object, int)
0x51f: PushEmpty(object)
0x520: Call2 0x511

0x521: Stack[-4] = Stack[-1]
0x522: Pop(1)
0x523: @@ Find(Stack[-7], Stack[-2])
0x524: Pop(0)
0x525: Pop(0); Push((bool) Stack[-2] == 0)
0x526: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x527: Push("Can't find diary parent with id: ")
0x528: Pop(1); Push(Stack[-1] + Stack[-8]);
0x529: @ Trace(Stack[-1])
0x52a: Pop(1)
0x52b: Stack[-9] = (bool) 0
0x52c: Return(); Pop(6)

0x52d: @@ AddChild(Stack[-8])
0x52e: Pop(0)
0x52f: Push((int) 7)
0x530: @ SendWorldWndMessage(Stack[-1])
0x531: Pop(1)
0x532: @@ GetCategory(Stack[-1])
0x533: Pop(0)
0x534: @ SetDiarySection(Stack[-1])
0x535: Pop(0)
0x536: Stack[-9] = (bool) 0
0x537: Return(); Pop(6)

0x538: Stack[-2] = 0
0x539: Stack[-3] = 0
0x53a: PushEmpty(int, int)
0x53b: Push("branch")
0x53c: @ GetVariable(Stack[-1], Stack[-2])
0x53d: Pop(1)
0x53e: Push((int) 0)
0x53f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x540: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x541: Stack[-3] = (int) 1
0x542: Return(); Pop(2)

0x543: GOTO 0x549

0x544: Push((int) 1)
0x545: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x546: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x547: Stack[-3] = (int) 2
0x548: Return(); Pop(2)

0x549: Stack[-3] = (int) 3
0x54a: Return(); Pop(2)

0x54b: Stack[-1] = (int) 515551
0x54c: Return(); Pop(0)

0x54d: Stack[-1] = (int) 502876
0x54e: Return(); Pop(0)

0x54f: Stack[-1] = "ui/NPC_Rubin.png"
0x550: Return(); Pop(0)

0x551: Stack[-1] = "ui/NPC_Rubin_b.png"
0x552: Return(); Pop(0)

0x553: Stack[-1] = (bool) 1
0x554: Return(); Pop(0)

