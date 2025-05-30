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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x27e
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbf Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x282 Vars = (string)
		EVENT_6 Op = 0x296 Vars = ()
		EVENT_5 Op = 0x2a3 Vars = ()
		EVENT_7 Op = 0x2ec Vars = (int)
		EVENT_45 Op = 0x32e Vars = (bool)
		EVENT_0 Op = 0x33a Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x3c3

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x56d

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x56b

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x56f

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x571

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x55a

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
0x31: Call2 0x4d9

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x41a

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
0x48: Call2 0x408

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
0x56: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x518

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral"
0x5e: Call2 0xa9

0x5f: Pop(1)
0x60: Push((int) 509170)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 509171)
0x66: Push((int) 10056)
0x67: Push((int) 10055)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 509175)
0x6b: Push((int) 10062)
0x6c: Push((int) 10061)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 509187)
0x70: Push((int) 10077)
0x71: Push((int) 10076)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x8b

0x75: PushEmpty(string)
0x76: Stack[-1] = "Warning"
0x77: Call2 0xa9

0x78: Pop(1)
0x79: Push((int) 531961)
0x7a: @@ SetMessage(Stack[-1])
0x7b: Pop(1)
0x7c: @@ ClearReplies()
0x7d: Pop(0)
0x7e: Push((int) 532856)
0x7f: Push((int) -1)
0x80: Push((int) 34341)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: Push((int) 531962)
0x84: Push((int) -1)
0x85: Push((int) 33366)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: GOTO 0x8b

0x89: Return(); Pop(0)

0x8a: GOTO 0x55

0x8b: PushEmpty(bool)
0x8c: Call2 0x573

0x8d: Pop(0)
0x8e: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x8f: @ lshWaitForAnimEnd()
0x90: Pop(0)
0x91: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: GOTO 0x99

0x94: PushEmpty(string)
0x95: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x96: Call2 0x4a4

0x97: Pop(1)
0x98: GOTO 0x8f

0x99: GOTO 0xa8

0x9a: Push("all")
0x9b: Push("idle")
0x9c: @ PlayAnimation(Stack[-2], Stack[-1])
0x9d: Pop(2)
0x9e: @ WaitForAnimEnd()
0x9f: Pop(0)
0xa0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa1: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa2: GOTO 0xa8

0xa3: Push("all")
0xa4: Push("idle")
0xa5: @ PlayAnimation(Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: GOTO 0x9e

0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: PushEmpty(bool)
0xab: Call2 0x573

0xac: Pop(0)
0xad: Pop(1); Push((bool) Stack[-1] == 0)
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: Return(); Pop(0)

0xb0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: Return(); Pop(0)

0xb3: PushEmpty(string, bool)
0xb4: Stack[-2] = Stack[-3]
0xb5: Push("")
0xb6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb8: Stack[-1] = (bool) 0
0xb9: GOTO 0xbb

0xba: Stack[-1] = (bool) 1
0xbb: Call2 0x4b4

0xbc: Pop(2)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0xc2: PushEmpty()
0xc3: Call2 0x4d2

0xc4: Pop(0)
0xc5: Push((int) 10088)
0xc6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x50f

0xcc: Pop(2)
0xcd: Push((int) 34358)
0xce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x50f

0xd4: Pop(2)
0xd5: Push((int) 10081)
0xd6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd8: PushEmpty(object, object)
0xd9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xda: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdb: Call2 0x50f

0xdc: Pop(2)
0xdd: Push((int) 10054)
0xde: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0xe0: PushEmpty(bool, object)
0xe1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Call2 0x518

0xe3: Pop(1)
0xe4: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Neutral"
0xe7: Call2 0xa9

0xe8: Pop(1)
0xe9: Push((int) 509170)
0xea: @@ SetMessage(Stack[-1])
0xeb: Pop(1)
0xec: @@ ClearReplies()
0xed: Pop(0)
0xee: Push((int) 509171)
0xef: Push((int) 10056)
0xf0: Push((int) 10055)
0xf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2: Pop(3)
0xf3: Push((int) 509175)
0xf4: Push((int) 10062)
0xf5: Push((int) 10061)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: Push((int) 509187)
0xf9: Push((int) 10077)
0xfa: Push((int) 10076)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: Return(); Pop(0)

0xfe: PushEmpty(string)
0xff: Stack[-1] = "Warning"
0x100: Call2 0xa9

0x101: Pop(1)
0x102: Push((int) 531961)
0x103: @@ SetMessage(Stack[-1])
0x104: Pop(1)
0x105: @@ ClearReplies()
0x106: Pop(0)
0x107: Push((int) 532856)
0x108: Push((int) -1)
0x109: Push((int) 34341)
0x10a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b: Pop(3)
0x10c: Push((int) 531962)
0x10d: Push((int) -1)
0x10e: Push((int) 33366)
0x10f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110: Pop(3)
0x111: Return(); Pop(0)

0x112: Push((int) 10077)
0x113: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x115: PushEmpty(string)
0x116: Stack[-1] = "Warning"
0x117: Call2 0xa9

0x118: Pop(1)
0x119: Push((int) 509188)
0x11a: @@ SetMessage(Stack[-1])
0x11b: Pop(1)
0x11c: @@ ClearReplies()
0x11d: Pop(0)
0x11e: Push((int) 509190)
0x11f: Push((int) 10080)
0x120: Push((int) 10079)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: Push((int) 509189)
0x124: Push((int) -1)
0x125: Push((int) 10078)
0x126: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x127: Pop(3)
0x128: Return(); Pop(0)

0x129: Push((int) 10080)
0x12a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x12c: PushEmpty(string)
0x12d: Stack[-1] = "Warning"
0x12e: Call2 0xa9

0x12f: Pop(1)
0x130: Push((int) 509191)
0x131: @@ SetMessage(Stack[-1])
0x132: Pop(1)
0x133: @@ ClearReplies()
0x134: Pop(0)
0x135: Push((int) 509193)
0x136: Push((int) 10083)
0x137: Push((int) 10082)
0x138: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x139: Pop(3)
0x13a: Push((int) 509192)
0x13b: Push((int) -1)
0x13c: Push((int) 10081)
0x13d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e: Pop(3)
0x13f: Return(); Pop(0)

0x140: Push((int) 10083)
0x141: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Warning"
0x145: Call2 0xa9

0x146: Pop(1)
0x147: Push((int) 509194)
0x148: @@ SetMessage(Stack[-1])
0x149: Pop(1)
0x14a: @@ ClearReplies()
0x14b: Pop(0)
0x14c: Push((int) 509195)
0x14d: Push((int) 10085)
0x14e: Push((int) 10084)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: Push((int) 509202)
0x152: Push((int) 10085)
0x153: Push((int) 10093)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: Return(); Pop(0)

0x157: Push((int) 10085)
0x158: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Warning"
0x15c: Call2 0xa9

0x15d: Pop(1)
0x15e: Push((int) 509196)
0x15f: @@ SetMessage(Stack[-1])
0x160: Pop(1)
0x161: @@ ClearReplies()
0x162: Pop(0)
0x163: Push((int) 509197)
0x164: Push((int) 10087)
0x165: Push((int) 10086)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Push((int) 509200)
0x169: Push((int) 34347)
0x16a: Push((int) 10089)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: Push((int) 509201)
0x16e: Push((int) 34339)
0x16f: Push((int) 10091)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: Return(); Pop(0)

0x173: Push((int) 34339)
0x174: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x176: PushEmpty(string)
0x177: Stack[-1] = "Rage"
0x178: Call2 0xa9

0x179: Pop(1)
0x17a: Push((int) 532854)
0x17b: @@ SetMessage(Stack[-1])
0x17c: Pop(1)
0x17d: @@ ClearReplies()
0x17e: Pop(0)
0x17f: Push((int) 532855)
0x180: Push((int) 10087)
0x181: Push((int) 34340)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: Return(); Pop(0)

0x185: Push((int) 34347)
0x186: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x188: PushEmpty(string)
0x189: Stack[-1] = "Confusion"
0x18a: Call2 0xa9

0x18b: Pop(1)
0x18c: Push((int) 532861)
0x18d: @@ SetMessage(Stack[-1])
0x18e: Pop(1)
0x18f: @@ ClearReplies()
0x190: Pop(0)
0x191: Push((int) 532862)
0x192: Push((int) 34349)
0x193: Push((int) 34348)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: Push((int) 532865)
0x197: Push((int) 34352)
0x198: Push((int) 34351)
0x199: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19a: Pop(3)
0x19b: Return(); Pop(0)

0x19c: Push((int) 34352)
0x19d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "Confusion"
0x1a1: Call2 0xa9

0x1a2: Pop(1)
0x1a3: Push((int) 532866)
0x1a4: @@ SetMessage(Stack[-1])
0x1a5: Pop(1)
0x1a6: @@ ClearReplies()
0x1a7: Pop(0)
0x1a8: Push((int) 532867)
0x1a9: Push((int) 34354)
0x1aa: Push((int) 34353)
0x1ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac: Pop(3)
0x1ad: Return(); Pop(0)

0x1ae: Push((int) 34349)
0x1af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1b1: PushEmpty(string)
0x1b2: Stack[-1] = "Warning"
0x1b3: Call2 0xa9

0x1b4: Pop(1)
0x1b5: Push((int) 532863)
0x1b6: @@ SetMessage(Stack[-1])
0x1b7: Pop(1)
0x1b8: @@ ClearReplies()
0x1b9: Pop(0)
0x1ba: Push((int) 532864)
0x1bb: Push((int) 34354)
0x1bc: Push((int) 34350)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: Return(); Pop(0)

0x1c0: Push((int) 34354)
0x1c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1c3: PushEmpty(string)
0x1c4: Stack[-1] = "Warning"
0x1c5: Call2 0xa9

0x1c6: Pop(1)
0x1c7: Push((int) 532868)
0x1c8: @@ SetMessage(Stack[-1])
0x1c9: Pop(1)
0x1ca: @@ ClearReplies()
0x1cb: Pop(0)
0x1cc: Push((int) 532869)
0x1cd: Push((int) 10087)
0x1ce: Push((int) 34356)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: Return(); Pop(0)

0x1d2: Push((int) 10087)
0x1d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1d5: PushEmpty(string)
0x1d6: Stack[-1] = "Rage"
0x1d7: Call2 0xa9

0x1d8: Pop(1)
0x1d9: Push((int) 509198)
0x1da: @@ SetMessage(Stack[-1])
0x1db: Pop(1)
0x1dc: @@ ClearReplies()
0x1dd: Pop(0)
0x1de: Push((int) 509199)
0x1df: Push((int) -1)
0x1e0: Push((int) 10088)
0x1e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e2: Pop(3)
0x1e3: Push((int) 532870)
0x1e4: Push((int) -1)
0x1e5: Push((int) 34358)
0x1e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e7: Pop(3)
0x1e8: Return(); Pop(0)

0x1e9: Push((int) 10062)
0x1ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1ec: PushEmpty(string)
0x1ed: Stack[-1] = "Neutral"
0x1ee: Call2 0xa9

0x1ef: Pop(1)
0x1f0: Push((int) 509176)
0x1f1: @@ SetMessage(Stack[-1])
0x1f2: Pop(1)
0x1f3: @@ ClearReplies()
0x1f4: Pop(0)
0x1f5: Push((int) 509177)
0x1f6: Push((int) 10064)
0x1f7: Push((int) 10063)
0x1f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f9: Pop(3)
0x1fa: Return(); Pop(0)

0x1fb: Push((int) 10064)
0x1fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x1fe: PushEmpty(string)
0x1ff: Stack[-1] = "Confusion"
0x200: Call2 0xa9

0x201: Pop(1)
0x202: Push((int) 509178)
0x203: @@ SetMessage(Stack[-1])
0x204: Pop(1)
0x205: @@ ClearReplies()
0x206: Pop(0)
0x207: Push((int) 509179)
0x208: Push((int) 10066)
0x209: Push((int) 10065)
0x20a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20b: Pop(3)
0x20c: Push((int) 509185)
0x20d: Push((int) 10066)
0x20e: Push((int) 10073)
0x20f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x210: Pop(3)
0x211: Return(); Pop(0)

0x212: Push((int) 10066)
0x213: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x215: PushEmpty(string)
0x216: Stack[-1] = "Confusion"
0x217: Call2 0xa9

0x218: Pop(1)
0x219: Push((int) 509180)
0x21a: @@ SetMessage(Stack[-1])
0x21b: Pop(1)
0x21c: @@ ClearReplies()
0x21d: Pop(0)
0x21e: Push((int) 509181)
0x21f: Push((int) 10068)
0x220: Push((int) 10067)
0x221: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x222: Pop(3)
0x223: Push((int) 509184)
0x224: Push((int) 10068)
0x225: Push((int) 10071)
0x226: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x227: Pop(3)
0x228: Return(); Pop(0)

0x229: Push((int) 10068)
0x22a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22b: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x22c: PushEmpty(string)
0x22d: Stack[-1] = "Confusion"
0x22e: Call2 0xa9

0x22f: Pop(1)
0x230: Push((int) 509182)
0x231: @@ SetMessage(Stack[-1])
0x232: Pop(1)
0x233: @@ ClearReplies()
0x234: Pop(0)
0x235: Push((int) 509183)
0x236: Push((int) 10085)
0x237: Push((int) 10069)
0x238: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x239: Pop(3)
0x23a: Return(); Pop(0)

0x23b: Push((int) 10056)
0x23c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x23e: PushEmpty(string)
0x23f: Stack[-1] = "Neutral"
0x240: Call2 0xa9

0x241: Pop(1)
0x242: Push((int) 509172)
0x243: @@ SetMessage(Stack[-1])
0x244: Pop(1)
0x245: @@ ClearReplies()
0x246: Pop(0)
0x247: Push((int) 509173)
0x248: Push((int) 34342)
0x249: Push((int) 10057)
0x24a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24b: Pop(3)
0x24c: Push((int) 509174)
0x24d: Push((int) 34342)
0x24e: Push((int) 10059)
0x24f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x250: Pop(3)
0x251: Return(); Pop(0)

0x252: Push((int) 34342)
0x253: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x255: PushEmpty(string)
0x256: Stack[-1] = "Warning"
0x257: Call2 0xa9

0x258: Pop(1)
0x259: Push((int) 532857)
0x25a: @@ SetMessage(Stack[-1])
0x25b: Pop(1)
0x25c: @@ ClearReplies()
0x25d: Pop(0)
0x25e: Push((int) 532858)
0x25f: Push((int) 10064)
0x260: Push((int) 34343)
0x261: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x262: Pop(3)
0x263: Push((int) 532860)
0x264: Push((int) 10064)
0x265: Push((int) 34345)
0x266: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x267: Pop(3)
0x268: Return(); Pop(0)

0x269: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x26a: PushEmpty(bool)
0x26b: Call2 0x573

0x26c: Pop(0)
0x26d: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26e: @ lshStopAnimation()
0x26f: Pop(0)
0x270: GOTO 0x273

0x271: @ StopAnimation()
0x272: Pop(0)
0x273: Return(); Pop(0)

0x274: GOTO 0xc0

0x275: Return(); Pop(0)

0x276: PushEmpty()
0x277: PushEmpty(int, object)
0x278: Stack[-1] = Stack[-3]
0x279: Push(-2, 1); TaskCall(0)
0x27a: Call2 0x0

0x27b: Pop(-2, 1); TaskReturn
0x27c: Pop(2)
0x27d: Return(); Pop(0)

0x27e: PushEmpty()
0x27f: Call2 0x2a7

0x280: Pop(0)
0x281: Return(); Pop(0)

0x282: PushEmpty(bool, bool)
0x283: Push("cleanup")
0x284: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x285: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x286: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x287: @ IsLoaded(Stack[-1])
0x288: Pop(0)
0x289: Pop(0); Push((bool) Stack[-1] == 0)
0x28a: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28b: PushEmpty(object)
0x28c: Call2 0x4d9

0x28d: Pop(0)
0x28e: @ RemoveActor(Stack[-1])
0x28f: Pop(1)
0x290: GOTO 0x295

0x291: Push("restore")
0x292: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x293: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x294: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x295: Return(); Pop(2)

0x296: Push( Stack[1 + Tasks[-1].StackPointer] )
0x297: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x298: PushEmpty(object)
0x299: Call2 0x4d9

0x29a: Pop(0)
0x29b: @ RemoveActor(Stack[-1])
0x29c: Pop(1)
0x29d: @ Hold()
0x29e: Pop(0)
0x29f: PushEmpty()
0x2a0: Call2 0x312

0x2a1: Pop(0)
0x2a2: Return(); Pop(0)

0x2a3: PushEmpty()
0x2a4: Call2 0x321

0x2a5: Pop(0)
0x2a6: Return(); Pop(0)

0x2a7: PushEmpty(bool)
0x2a8: Call2 0x3be

0x2a9: Pop(0)
0x2aa: Pop(1); Push((bool) Stack[-1] == 0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ac: @ Hold()
0x2ad: Pop(0)
0x2ae: @ GetDirection(Stack[-0])
0x2af: Pop(0)
0x2b0: PushEmpty()
0x2b1: Call2 0x357

0x2b2: Pop(0)
0x2b3: GOTO 0x2b0

0x2b4: Return(); Pop(0)

0x2b5: PushEmpty(object, object)
0x2b6: Push("player")
0x2b7: @ FindActor(Stack[-2], Stack[-1])
0x2b8: Pop(1)
0x2b9: Pop(0); Push((bool) Stack[-1] == 0)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2bb: Stack[-3] = (bool) 0
0x2bc: Return(); Pop(2)

0x2bd: PushEmpty(bool, object)
0x2be: Stack[-1] = Stack[-3]
0x2bf: Call2 0x3b5

0x2c0: Stack[-5] = Stack[-2]
0x2c1: Pop(2)
0x2c2: Return(); Pop(2)

0x2c3: Stack[-1] = 0
0x2c4: Push(CvectorIndex(Stack[-0], 0))
0x2c5: Push(CvectorIndex(Stack[-0], 2))
0x2c6: @ RotateAsync(Stack[-2], Stack[-1])
0x2c7: Pop(2)
0x2c8: Return(); Pop(0)

0x2c9: PushEmpty(object, bool, object, bool)
0x2ca: Push("player")
0x2cb: @ FindActor(Stack[-3], Stack[-1])
0x2cc: Pop(1)
0x2cd: Pop(0); Push((bool) Stack[-2] == 0)
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2cf: Stack[-5] = (bool) 0
0x2d0: Return(); Pop(4)

0x2d1: PushEmpty(float, object)
0x2d2: Stack[-1] = Stack[-4]
0x2d3: Call2 0x3a3

0x2d4: Pop(1)
0x2d5: Push((float)90000.0)
0x2d6: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2d7: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d8: Stack[-5] = (bool) 0
0x2d9: Return(); Pop(4)

0x2da: @ CanSee(Stack[-1], Stack[-2])
0x2db: Pop(0)
0x2dc: Stack[-5] = Stack[-1]
0x2dd: Return(); Pop(4)

0x2de: Stack[-2] = 0
0x2df: PushEmpty(float, float)
0x2e0: Push((int) 8)
0x2e1: Push((int) 16)
0x2e2: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x2e3: Pop(2)
0x2e4: Push((int) 10)
0x2e5: @ SetTimer(Stack[-1], Stack[-2])
0x2e6: Pop(1)
0x2e7: Return(); Pop(2)

0x2e8: Push((int) 10)
0x2e9: @ KillTimer(Stack[-1])
0x2ea: Pop(1)
0x2eb: Return(); Pop(0)

0x2ec: PushEmpty()
0x2ed: Push((int) 10)
0x2ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x2f0: PushEmpty()
0x2f1: Call2 0x2e8

0x2f2: Pop(0)
0x2f3: PushEmpty(bool)
0x2f4: Stack[-1] = (bool) 0
0x2f5: PushEmpty(bool)
0x2f6: Call2 0x3be

0x2f7: Pop(0)
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f9: PushEmpty(bool)
0x2fa: Call2 0x2c9

0x2fb: Pop(0)
0x2fc: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fd: Stack[-1] = (bool) 1
0x2fe: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x2ff: PushEmpty(bool)
0x300: Call2 0x2b5

0x301: Pop(0)
0x302: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x303: PushEmpty(bool, object)
0x304: PushEmpty(object)
0x305: Call2 0x4d9

0x306: Stack[-2] = Stack[-1]
0x307: Pop(1)
0x308: Call2 0x454

0x309: Pop(2)
0x30a: GOTO 0x311

0x30b: PushEmpty()
0x30c: Call2 0x2c4

0x30d: Pop(0)
0x30e: PushEmpty()
0x30f: Call2 0x2df

0x310: Pop(0)
0x311: Return(); Pop(0)

0x312: PushEmpty()
0x313: Call2 0x39e

0x314: Pop(0)
0x315: PushEmpty()
0x316: Call2 0x2e8

0x317: Pop(0)
0x318: @ lshStopSpeech()
0x319: Pop(0)
0x31a: @ lshStopAnimation()
0x31b: Pop(0)
0x31c: @ StopAsync()
0x31d: Pop(0)
0x31e: @ Hold()
0x31f: Pop(0)
0x320: Return(); Pop(0)

0x321: @ StopGroup0()
0x322: Pop(0)
0x323: PushEmpty()
0x324: Call2 0x2e8

0x325: Pop(0)
0x326: PushEmpty(string)
0x327: Stack[-1] = "Neutral"
0x328: Call2 0x4a4

0x329: Pop(1)
0x32a: PushEmpty()
0x32b: Call2 0x2df

0x32c: Pop(0)
0x32d: Return(); Pop(0)

0x32e: PushEmpty()
0x32f: Push(Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x331: PushEmpty()
0x332: Call2 0x2df

0x333: Pop(0)
0x334: GOTO 0x339

0x335: PushEmpty(string)
0x336: Stack[-1] = "Neutral"
0x337: Call2 0x4a4

0x338: Pop(1)
0x339: Return(); Pop(0)

0x33a: PushEmpty(bool, bool)
0x33b: @ IsOverrideActive(Stack[-1])
0x33c: Pop(0)
0x33d: Pop(0); Push((bool) Stack[-1] == 0)
0x33e: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x33f: EventDisable(0)
0x340: PushEmpty()
0x341: Call2 0x39e

0x342: Pop(0)
0x343: PushEmpty(bool, object)
0x344: Stack[-1] = Stack[-5]
0x345: Call2 0x3b5

0x346: Pop(2)
0x347: EventEnable(0)
0x348: PushEmpty(object)
0x349: Stack[-1] = Stack[-4]
0x34a: Call2 0x276

0x34b: Pop(1)
0x34c: PushEmpty(string)
0x34d: Stack[-1] = "Neutral"
0x34e: Call2 0x4a4

0x34f: Pop(1)
0x350: PushEmpty()
0x351: Call2 0x2e8

0x352: Pop(0)
0x353: PushEmpty()
0x354: Call2 0x2df

0x355: Pop(0)
0x356: Return(); Pop(2)

0x357: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x358: @ WaitForAnimEnd()
0x359: Pop(0)
0x35a: PushEmpty(bool)
0x35b: Call2 0x3be

0x35c: Pop(0)
0x35d: Pop(1); Push((bool) Stack[-1] == 0)
0x35e: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35f: Return(); Pop(12)

0x360: PushEmpty(int)
0x361: Call2 0x4fe

0x362: Stack[-7] = Stack[-1]
0x363: Pop(1)
0x364: Stack[-5] = (int) 0
0x365: PushEmpty(bool)
0x366: Stack[-1] = (bool) 0
0x367: Push((int) 5)
0x368: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x369: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36a: PushEmpty(bool)
0x36b: Call2 0x3be

0x36c: Pop(0)
0x36d: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36e: Stack[-1] = (bool) 1
0x36f: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x370: Pop(0); Push((bool) Stack[-6] == 0)
0x371: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x372: Push((int) 3)
0x373: @ Sleep(Stack[-1], Stack[-5])
0x374: Pop(1)
0x375: Pop(0); Push((bool) Stack[-4] == 0)
0x376: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x377: GOTO 0x399

0x378: GOTO 0x38e

0x379: @ irand(Stack[-3], Stack[-6])
0x37a: Pop(0)
0x37b: Push((int) 5)
0x37c: @ irand(Stack[-3], Stack[-1])
0x37d: Pop(1)
0x37e: Push((int) 0)
0x37f: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x380: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x381: Stack[-3] = (int) 0
0x382: Push("all")
0x383: PushEmpty(string, int)
0x384: Stack[-1] = Stack[-6]
0x385: Call2 0x4f7

0x386: Pop(1)
0x387: @ PlayAnimation(Stack[-2], Stack[-1])
0x388: Pop(2)
0x389: @ WaitForAnimEnd(Stack[-1])
0x38a: Pop(0)
0x38b: Pop(0); Push((bool) Stack[-1] == 0)
0x38c: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38d: GOTO 0x399

0x38e: PushEmpty(bool)
0x38f: Call2 0x39c

0x390: Pop(0)
0x391: Pop(1); Push((bool) Stack[-1] == 0)
0x392: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x393: GOTO 0x399

0x394: @ ResetAAS()
0x395: Pop(0)
0x396: Push((int) 1)
0x397: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x398: GOTO 0x365

0x399: @ ResetAAS()
0x39a: Pop(0)
0x39b: Return(); Pop(12)

0x39c: Stack[-1] = (bool) 1
0x39d: Return(); Pop(0)

0x39e: @ StopAnimation()
0x39f: Pop(0)
0x3a0: @ StopGroup0()
0x3a1: Pop(0)
0x3a2: Return(); Pop(0)

0x3a3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3a4: @ GetPosition(Stack[-3])
0x3a5: Pop(0)
0x3a6: @@ GetPosition(Stack[-2])
0x3a7: Pop(0)
0x3a8: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3a9: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3aa: Return(); Pop(6)

0x3ab: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x3ac: @ GetPosition(Stack[-3])
0x3ad: Pop(0)
0x3ae: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x3af: Push(CvectorIndex(Stack[-2], 0))
0x3b0: Push(CvectorIndex(Stack[-3], 2))
0x3b1: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x3b2: Pop(2)
0x3b3: Stack[-8] = Stack[-1]
0x3b4: Return(); Pop(6)

0x3b5: PushEmpty(cvector, cvector)
0x3b6: @@ GetPosition(Stack[-1])
0x3b7: Pop(0)
0x3b8: PushEmpty(bool, cvector)
0x3b9: Stack[-1] = Stack[-3]
0x3ba: Call2 0x3ab

0x3bb: Stack[-6] = Stack[-2]
0x3bc: Pop(2)
0x3bd: Return(); Pop(2)

0x3be: PushEmpty(bool, bool)
0x3bf: @ IsLoaded(Stack[-1])
0x3c0: Pop(0)
0x3c1: Stack[-3] = Stack[-1]
0x3c2: Return(); Pop(2)

0x3c3: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3c4: @@ GetPosition(Stack[-8])
0x3c5: Pop(0)
0x3c6: @@ GetEyesHeight(Stack[-9])
0x3c7: Pop(0)
0x3c8: Push(CvectorIndex(Stack[-8], 1))
0x3c9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3ca: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3cb: @ GetPosition(Stack[-7])
0x3cc: Pop(0)
0x3cd: @ GetEyesHeight(Stack[-9])
0x3ce: Pop(0)
0x3cf: Push(CvectorIndex(Stack[-7], 1))
0x3d0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3d1: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3d2: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3d3: Push(CvectorIndex(Stack[-6], 1))
0x3d4: Stack[-1] = (int) 0
0x3d5: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3d6: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3d7: Pop(1); Push(Sqrt(Stack[-1]))
0x3d8: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3d9: Stack[-5] = -Stack[-6]; Pop(0);
0x3da: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3db: PushEmpty(cvector, cvector)
0x3dc: Push(CVector(0.0, 1.0, 0.0))
0x3dd: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3de: Call2 0x4df

0x3df: Pop(1)
0x3e0: Push((int) 25)
0x3e1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3e2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3e3: Push(CVector(0.0, 10.0, 0.0))
0x3e4: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3e5: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3e6: @ IsOverrideActive(Stack[-2])
0x3e7: Pop(0)
0x3e8: Push(Stack[-2])
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3ea: Stack[-21] = (bool) 0
0x3eb: Return(); Pop(18)

0x3ec: @ StopWorld()
0x3ed: Pop(0)
0x3ee: Push((bool) 1)
0x3ef: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x3f0: Pop(1)
0x3f1: Push(CvectorIndex(Stack[-4], 0))
0x3f2: Push(CvectorIndex(Stack[-5], 2))
0x3f3: @ Rotate(Stack[-2], Stack[-1])
0x3f4: Pop(2)
0x3f5: PushEmpty(bool)
0x3f6: Call2 0x573

0x3f7: Pop(0)
0x3f8: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f9: GOTO 0x402

0x3fa: Push("head")
0x3fb: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3fc: Pop(1)
0x3fd: Push(Stack[-1])
0x3fe: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3ff: Push("head")
0x400: @ LookAsyncCamera(Stack[-1])
0x401: Pop(1)
0x402: @ CameraWaitForPlayFinish()
0x403: Pop(0)
0x404: @ ResumeWorld()
0x405: Pop(0)
0x406: Stack[-21] = (bool) 1
0x407: Return(); Pop(18)

0x408: PushEmpty(bool, bool)
0x409: Push((bool) 1)
0x40a: @ CameraSwitchToNormal(Stack[-1])
0x40b: Pop(1)
0x40c: PushEmpty(bool)
0x40d: Call2 0x573

0x40e: Pop(0)
0x40f: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x410: GOTO 0x419

0x411: Push("head")
0x412: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x413: Pop(1)
0x414: Push(Stack[-1])
0x415: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x416: Push("head")
0x417: @ UnlookAsync(Stack[-1])
0x418: Pop(1)
0x419: Return(); Pop(2)

0x41a: PushEmpty(int, int, int, int)
0x41b: Push("voice_common")
0x41c: @ GetVariable(Stack[-1], Stack[-3])
0x41d: Pop(1)
0x41e: Push(Stack[-2])
0x41f: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x420: PushEmpty(bool, object)
0x421: Stack[-1] = Stack[-7]
0x422: Call2 0x454

0x423: Pop(1)
0x424: Pop(1); Push((bool) Stack[-1] == 0)
0x425: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x426: PushEmpty(bool, object)
0x427: Stack[-1] = Stack[-7]
0x428: Call2 0x479

0x429: Pop(1)
0x42a: Pop(1); Push((bool) Stack[-1] == 0)
0x42b: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42c: Stack[-6] = (bool) 0
0x42d: Return(); Pop(4)

0x42e: Push((int) 2)
0x42f: @ irand(Stack[-2], Stack[-1])
0x430: Pop(1)
0x431: Push(Stack[-1])
0x432: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x433: Push("voice_common")
0x434: Push((int) 1)
0x435: Pop(1); Push(Stack[-4] + Stack[-1]);
0x436: Push((int) 3)
0x437: Pop(2); Push(Stack[-2] % Stack[-1]);
0x438: @ SetVariable(Stack[-2], Stack[-1])
0x439: Pop(2)
0x43a: GOTO 0x43f

0x43b: Push("voice_common")
0x43c: Push((int) 0)
0x43d: @ SetVariable(Stack[-2], Stack[-1])
0x43e: Pop(2)
0x43f: GOTO 0x452

0x440: PushEmpty(bool, object)
0x441: Stack[-1] = Stack[-7]
0x442: Call2 0x479

0x443: Pop(1)
0x444: Pop(1); Push((bool) Stack[-1] == 0)
0x445: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x446: PushEmpty(bool, object)
0x447: Stack[-1] = Stack[-7]
0x448: Call2 0x454

0x449: Pop(1)
0x44a: Pop(1); Push((bool) Stack[-1] == 0)
0x44b: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44c: Stack[-6] = (bool) 0
0x44d: Return(); Pop(4)

0x44e: Push("voice_common")
0x44f: Push((int) 1)
0x450: @ SetVariable(Stack[-2], Stack[-1])
0x451: Pop(2)
0x452: Stack[-6] = (bool) 1
0x453: Return(); Pop(4)

0x454: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x455: Stack[-5] = "c"
0x456: Stack[-4] = (int) 0
0x457: Push((int) 1)
0x458: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x459: Push((int) 1)
0x45a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x45b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x45c: @@ HasProperty(Stack[-1], Stack[-4])
0x45d: Pop(1)
0x45e: Pop(0); Push((bool) Stack[-3] == 0)
0x45f: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x460: GOTO 0x464

0x461: Push((int) 1)
0x462: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x463: GOTO 0x457

0x464: Pop(0); Push((bool) Stack[-4] == 0)
0x465: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x466: Stack[-12] = (bool) 0
0x467: Return(); Pop(10)

0x468: Stack[-2] = (int) 0
0x469: Push((int) 1)
0x46a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x46b: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46c: @ irand(Stack[-2], Stack[-4])
0x46d: Pop(0)
0x46e: Push((int) 1)
0x46f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x470: Pop(1); Push(Stack[-6] + Stack[-1]);
0x471: @@ GetProperty(Stack[-1], Stack[-2])
0x472: Pop(1)
0x473: PushEmpty(bool, string)
0x474: Stack[-1] = Stack[-3]
0x475: Call2 0x4c3

0x476: Stack[-14] = Stack[-2]
0x477: Pop(2)
0x478: Return(); Pop(10)

0x479: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x47a: Push("d")
0x47b: PushEmpty(int)
0x47c: Call2 0x4ee

0x47d: Pop(0)
0x47e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x47f: Push("m")
0x480: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x481: Stack[-4] = (int) 0
0x482: Push((int) 1)
0x483: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x484: Push((int) 1)
0x485: Pop(1); Push(Stack[-5] + Stack[-1]);
0x486: Pop(1); Push(Stack[-6] + Stack[-1]);
0x487: @@ HasProperty(Stack[-1], Stack[-4])
0x488: Pop(1)
0x489: Pop(0); Push((bool) Stack[-3] == 0)
0x48a: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x48b: GOTO 0x48f

0x48c: Push((int) 1)
0x48d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x48e: GOTO 0x482

0x48f: Pop(0); Push((bool) Stack[-4] == 0)
0x490: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x491: Stack[-12] = (bool) 0
0x492: Return(); Pop(10)

0x493: Stack[-2] = (int) 0
0x494: Push((int) 1)
0x495: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x496: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x497: @ irand(Stack[-2], Stack[-4])
0x498: Pop(0)
0x499: Push((int) 1)
0x49a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x49b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x49c: @@ GetProperty(Stack[-1], Stack[-2])
0x49d: Pop(1)
0x49e: PushEmpty(bool, string)
0x49f: Stack[-1] = Stack[-3]
0x4a0: Call2 0x4c3

0x4a1: Stack[-14] = Stack[-2]
0x4a2: Pop(2)
0x4a3: Return(); Pop(10)

0x4a4: PushEmpty(bool, float, float, bool, float, float)
0x4a5: @ lshHasAnimation(Stack[-3], Stack[-7])
0x4a6: Pop(0)
0x4a7: Push(Stack[-3])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4a9: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x4aa: Pop(0)
0x4ab: Push((bool) 0)
0x4ac: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4ad: Pop(1)
0x4ae: GOTO 0x4b3

0x4af: Push("Can't find lsh animation : ")
0x4b0: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4b1: @ Trace(Stack[-1])
0x4b2: Pop(1)
0x4b3: Return(); Pop(6)

0x4b4: PushEmpty(bool, float, float, bool, float, float)
0x4b5: @ lshHasAnimation(Stack[-3], Stack[-8])
0x4b6: Pop(0)
0x4b7: Push(Stack[-3])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4b9: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x4ba: Pop(0)
0x4bb: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x4bc: Pop(0)
0x4bd: GOTO 0x4c2

0x4be: Push("Can't find lsh animation : ")
0x4bf: Pop(1); Push(Stack[-1] + Stack[-9]);
0x4c0: @ Trace(Stack[-1])
0x4c1: Pop(1)
0x4c2: Return(); Pop(6)

0x4c3: PushEmpty(bool, bool)
0x4c4: PushEmpty(bool)
0x4c5: Call2 0x573

0x4c6: Pop(0)
0x4c7: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4c8: @ lshHasSpeech(Stack[-1], Stack[-3])
0x4c9: Pop(0)
0x4ca: Push(Stack[-1])
0x4cb: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4cc: @ lshPlaySpeech(Stack[-3])
0x4cd: Pop(0)
0x4ce: Stack[-4] = (bool) 1
0x4cf: Return(); Pop(2)

0x4d0: Stack[-4] = (bool) 0
0x4d1: Return(); Pop(2)

0x4d2: PushEmpty(bool)
0x4d3: Call2 0x573

0x4d4: Pop(0)
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d6: @ lshStopSpeech()
0x4d7: Pop(0)
0x4d8: Return(); Pop(0)

0x4d9: PushEmpty(object, object)
0x4da: @ self(Stack[-1])
0x4db: Pop(0)
0x4dc: Stack[-3] = Stack[-1]
0x4dd: Return(); Pop(2)

0x4de: Stack[-1] = 0
0x4df: PushEmpty(float, float)
0x4e0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4e1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4e2: Push((float)0.0)
0x4e3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e5: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x4e6: Return(); Pop(2)

0x4e7: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4e8: Return(); Pop(2)

0x4e9: PushEmpty(int, int)
0x4ea: @ GetVariable(Stack[-3], Stack[-1])
0x4eb: Pop(0)
0x4ec: Stack[-4] = Stack[-1]
0x4ed: Return(); Pop(2)

0x4ee: PushEmpty(float, float)
0x4ef: @ GetGameTime(Stack[-1])
0x4f0: Pop(0)
0x4f1: Push((int) 1)
0x4f2: PushEmpty(int)
0x4f3: Push((int) 24)
0x4f4: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x4f5: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x4f6: Return(); Pop(2)

0x4f7: PushEmpty(string, string)
0x4f8: Stack[-1] = "idle"
0x4f9: Push(Stack[-3])
0x4fa: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fb: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4fc: Stack[-4] = Stack[-1]
0x4fd: Return(); Pop(2)

0x4fe: PushEmpty(int, bool, int, bool)
0x4ff: Stack[-2] = (int) 0
0x500: Push("all")
0x501: PushEmpty(string, int)
0x502: Stack[-1] = Stack[-5]
0x503: Call2 0x4f7

0x504: Pop(1)
0x505: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x506: Pop(2)
0x507: Pop(0); Push((bool) Stack[-1] == 0)
0x508: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x509: GOTO 0x50d

0x50a: Push((int) 1)
0x50b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x50c: GOTO 0x500

0x50d: Stack[-5] = Stack[-2]
0x50e: Return(); Pop(4)

0x50f: PushEmpty()
0x510: Push("d1q01")
0x511: Push((int) 8)
0x512: @ SetVariable(Stack[-2], Stack[-1])
0x513: Pop(2)
0x514: PushEmpty()
0x515: Call2 0x524

0x516: Pop(0)
0x517: Return(); Pop(0)

0x518: PushEmpty()
0x519: PushEmpty(int, string)
0x51a: Stack[-1] = "d1q01"
0x51b: Call2 0x4e9

0x51c: Pop(1)
0x51d: Push((int) 7)
0x51e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x51f: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x520: Stack[-2] = (bool) 1
0x521: Return(); Pop(0)

0x522: Stack[-2] = (bool) 0
0x523: Return(); Pop(0)

0x524: PushEmpty(object, object)
0x525: Push((int) 621)
0x526: Push((int) 1)
0x527: Push((int) 532195)
0x528: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x529: Pop(3)
0x52a: PushEmpty(bool, object, int)
0x52b: Stack[-2] = Stack[-4]
0x52c: Stack[-1] = (int) 2
0x52d: Call2 0x53e

0x52e: Pop(3)
0x52f: Return(); Pop(2)

0x530: Stack[-1] = 0
0x531: PushEmpty(object, object)
0x532: @ GetDiaryRoot(Stack[-1])
0x533: Pop(0)
0x534: Pop(0); Push((bool) Stack[-1] == 0)
0x535: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x536: Push("Can't retrieve diary root")
0x537: @ Trace(Stack[-1])
0x538: Pop(1)
0x539: Stack[-3] = (bool) 0
0x53a: Return(); Pop(2)

0x53b: Stack[-3] = Stack[-1]
0x53c: Return(); Pop(2)

0x53d: Stack[-1] = 0
0x53e: PushEmpty(object, object, int, object, object, int)
0x53f: PushEmpty(object)
0x540: Call2 0x531

0x541: Stack[-4] = Stack[-1]
0x542: Pop(1)
0x543: @@ Find(Stack[-7], Stack[-2])
0x544: Pop(0)
0x545: Pop(0); Push((bool) Stack[-2] == 0)
0x546: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x547: Push("Can't find diary parent with id: ")
0x548: Pop(1); Push(Stack[-1] + Stack[-8]);
0x549: @ Trace(Stack[-1])
0x54a: Pop(1)
0x54b: Stack[-9] = (bool) 0
0x54c: Return(); Pop(6)

0x54d: @@ AddChild(Stack[-8])
0x54e: Pop(0)
0x54f: Push((int) 7)
0x550: @ SendWorldWndMessage(Stack[-1])
0x551: Pop(1)
0x552: @@ GetCategory(Stack[-1])
0x553: Pop(0)
0x554: @ SetDiarySection(Stack[-1])
0x555: Pop(0)
0x556: Stack[-9] = (bool) 0
0x557: Return(); Pop(6)

0x558: Stack[-2] = 0
0x559: Stack[-3] = 0
0x55a: PushEmpty(int, int)
0x55b: Push("branch")
0x55c: @ GetVariable(Stack[-1], Stack[-2])
0x55d: Pop(1)
0x55e: Push((int) 0)
0x55f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x560: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x561: Stack[-3] = (int) 1
0x562: Return(); Pop(2)

0x563: GOTO 0x569

0x564: Push((int) 1)
0x565: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x566: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x567: Stack[-3] = (int) 2
0x568: Return(); Pop(2)

0x569: Stack[-3] = (int) 3
0x56a: Return(); Pop(2)

0x56b: Stack[-1] = (int) 515551
0x56c: Return(); Pop(0)

0x56d: Stack[-1] = (int) 502876
0x56e: Return(); Pop(0)

0x56f: Stack[-1] = "ui/NPC_Rubin.png"
0x570: Return(); Pop(0)

0x571: Stack[-1] = "ui/NPC_Rubin_b.png"
0x572: Return(); Pop(0)

0x573: Stack[-1] = (bool) 1
0x574: Return(); Pop(0)

