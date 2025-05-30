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
	Menace
	Untrust
	Smile
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
	k11q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Bakalavr.png
	ui/NPC_Bakalavr_b.png

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

RunOp = 0x24c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x250 Vars = (string)
		EVENT_6 Op = 0x264 Vars = ()
		EVENT_5 Op = 0x271 Vars = ()
		EVENT_7 Op = 0x2ba Vars = (int)
		EVENT_45 Op = 0x2fc Vars = (bool)
		EVENT_0 Op = 0x308 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x391

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x53b

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x539

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x53d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x53f

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x528

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
0x31: Call2 0x4a7

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x3e8

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
0x48: Call2 0x3d6

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
0x56: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x95

0x5a: Pop(1)
0x5b: Push((int) 527198)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x4e6

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 527199)
0x66: Push((int) 28789)
0x67: Push((int) 28507)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 527202)
0x6b: Push((int) -1)
0x6c: Push((int) 28510)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 527506)
0x70: Push((int) -1)
0x71: Push((int) 28838)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x77

0x75: Return(); Pop(0)

0x76: GOTO 0x55

0x77: PushEmpty(bool)
0x78: Call2 0x541

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @ lshWaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: PushEmpty(string)
0x81: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x82: Call2 0x472

0x83: Pop(1)
0x84: GOTO 0x7b

0x85: GOTO 0x94

0x86: Push("all")
0x87: Push("idle")
0x88: @ PlayAnimation(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: @ WaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: Push("all")
0x90: Push("idle")
0x91: @ PlayAnimation(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: GOTO 0x8a

0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: PushEmpty(bool)
0x97: Call2 0x541

0x98: Pop(0)
0x99: Pop(1); Push((bool) Stack[-1] == 0)
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Return(); Pop(0)

0x9c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: PushEmpty(string, bool)
0xa0: Stack[-2] = Stack[-3]
0xa1: Push("")
0xa2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa4: Stack[-1] = (bool) 0
0xa5: GOTO 0xa7

0xa6: Stack[-1] = (bool) 1
0xa7: Call2 0x482

0xa8: Pop(2)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0xae: PushEmpty()
0xaf: Call2 0x4a0

0xb0: Pop(0)
0xb1: Push((int) 28833)
0xb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0x4dd

0xb8: Pop(2)
0xb9: Push((int) 28836)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x4dd

0xc0: Pop(2)
0xc1: Push((int) 28837)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0x4dd

0xc8: Pop(2)
0xc9: Push((int) 28506)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call2 0x95

0xcf: Pop(1)
0xd0: Push((int) 527198)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: PushEmpty(bool, object)
0xd6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Call2 0x4e6

0xd8: Pop(1)
0xd9: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xda: Push((int) 527199)
0xdb: Push((int) 28789)
0xdc: Push((int) 28507)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Push((int) 527202)
0xe0: Push((int) -1)
0xe1: Push((int) 28510)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Push((int) 527506)
0xe5: Push((int) -1)
0xe6: Push((int) 28838)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Return(); Pop(0)

0xea: Push((int) 28789)
0xeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Sorrow"
0xef: Call2 0x95

0xf0: Pop(1)
0xf1: Push((int) 527465)
0xf2: @@ SetMessage(Stack[-1])
0xf3: Pop(1)
0xf4: @@ ClearReplies()
0xf5: Pop(0)
0xf6: Push((int) 527466)
0xf7: Push((int) 28792)
0xf8: Push((int) 28791)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Push((int) 527468)
0xfc: Push((int) 28792)
0xfd: Push((int) 28793)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Return(); Pop(0)

0x101: Push((int) 28792)
0x102: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x104: PushEmpty(string)
0x105: Stack[-1] = "Sorrow"
0x106: Call2 0x95

0x107: Pop(1)
0x108: Push((int) 527467)
0x109: @@ SetMessage(Stack[-1])
0x10a: Pop(1)
0x10b: @@ ClearReplies()
0x10c: Pop(0)
0x10d: Push((int) 527469)
0x10e: Push((int) 28796)
0x10f: Push((int) 28795)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Push((int) 28796)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x116: PushEmpty(string)
0x117: Stack[-1] = "Menace"
0x118: Call2 0x95

0x119: Pop(1)
0x11a: Push((int) 527470)
0x11b: @@ SetMessage(Stack[-1])
0x11c: Pop(1)
0x11d: @@ ClearReplies()
0x11e: Pop(0)
0x11f: Push((int) 527477)
0x120: Push((int) 28804)
0x121: Push((int) 28803)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Push((int) 527471)
0x125: Push((int) 28798)
0x126: Push((int) 28797)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Return(); Pop(0)

0x12a: Push((int) 28798)
0x12b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x12d: PushEmpty(string)
0x12e: Stack[-1] = "Menace"
0x12f: Call2 0x95

0x130: Pop(1)
0x131: Push((int) 527472)
0x132: @@ SetMessage(Stack[-1])
0x133: Pop(1)
0x134: @@ ClearReplies()
0x135: Pop(0)
0x136: Push((int) 527473)
0x137: Push((int) 28800)
0x138: Push((int) 28799)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Return(); Pop(0)

0x13c: Push((int) 28800)
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Menace"
0x141: Call2 0x95

0x142: Pop(1)
0x143: Push((int) 527474)
0x144: @@ SetMessage(Stack[-1])
0x145: Pop(1)
0x146: @@ ClearReplies()
0x147: Pop(0)
0x148: Push((int) 527475)
0x149: Push((int) 28802)
0x14a: Push((int) 28801)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Return(); Pop(0)

0x14e: Push((int) 28802)
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x151: PushEmpty(string)
0x152: Stack[-1] = "Untrust"
0x153: Call2 0x95

0x154: Pop(1)
0x155: Push((int) 527476)
0x156: @@ SetMessage(Stack[-1])
0x157: Pop(1)
0x158: @@ ClearReplies()
0x159: Pop(0)
0x15a: Push((int) 527491)
0x15b: Push((int) 28804)
0x15c: Push((int) 28818)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Return(); Pop(0)

0x160: Push((int) 28804)
0x161: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x163: PushEmpty(string)
0x164: Stack[-1] = "Menace"
0x165: Call2 0x95

0x166: Pop(1)
0x167: Push((int) 527478)
0x168: @@ SetMessage(Stack[-1])
0x169: Pop(1)
0x16a: @@ ClearReplies()
0x16b: Pop(0)
0x16c: Push((int) 527479)
0x16d: Push((int) 28806)
0x16e: Push((int) 28805)
0x16f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x170: Pop(3)
0x171: Push((int) 527493)
0x172: Push((int) 28806)
0x173: Push((int) 28822)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: Return(); Pop(0)

0x177: Push((int) 28806)
0x178: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x17a: PushEmpty(string)
0x17b: Stack[-1] = "Sorrow"
0x17c: Call2 0x95

0x17d: Pop(1)
0x17e: Push((int) 527480)
0x17f: @@ SetMessage(Stack[-1])
0x180: Pop(1)
0x181: @@ ClearReplies()
0x182: Pop(0)
0x183: Push((int) 527481)
0x184: Push((int) 28808)
0x185: Push((int) 28807)
0x186: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x187: Pop(3)
0x188: Push((int) 527494)
0x189: Push((int) 28808)
0x18a: Push((int) 28824)
0x18b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18c: Pop(3)
0x18d: Return(); Pop(0)

0x18e: Push((int) 28808)
0x18f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x191: PushEmpty(string)
0x192: Stack[-1] = "Neutral"
0x193: Call2 0x95

0x194: Pop(1)
0x195: Push((int) 527482)
0x196: @@ SetMessage(Stack[-1])
0x197: Pop(1)
0x198: @@ ClearReplies()
0x199: Pop(0)
0x19a: Push((int) 527483)
0x19b: Push((int) 28810)
0x19c: Push((int) 28809)
0x19d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19e: Pop(3)
0x19f: Push((int) 527492)
0x1a0: Push((int) 28810)
0x1a1: Push((int) 28820)
0x1a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a3: Pop(3)
0x1a4: Return(); Pop(0)

0x1a5: Push((int) 28810)
0x1a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1a8: PushEmpty(string)
0x1a9: Stack[-1] = "Neutral"
0x1aa: Call2 0x95

0x1ab: Pop(1)
0x1ac: Push((int) 527484)
0x1ad: @@ SetMessage(Stack[-1])
0x1ae: Pop(1)
0x1af: @@ ClearReplies()
0x1b0: Pop(0)
0x1b1: Push((int) 527485)
0x1b2: Push((int) 28813)
0x1b3: Push((int) 28811)
0x1b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b5: Pop(3)
0x1b6: Push((int) 527486)
0x1b7: Push((int) 28813)
0x1b8: Push((int) 28812)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Return(); Pop(0)

0x1bc: Push((int) 28813)
0x1bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1bf: PushEmpty(string)
0x1c0: Stack[-1] = "Neutral"
0x1c1: Call2 0x95

0x1c2: Pop(1)
0x1c3: Push((int) 527487)
0x1c4: @@ SetMessage(Stack[-1])
0x1c5: Pop(1)
0x1c6: @@ ClearReplies()
0x1c7: Pop(0)
0x1c8: Push((int) 527488)
0x1c9: Push((int) 28816)
0x1ca: Push((int) 28815)
0x1cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: Push((int) 28816)
0x1cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = "Smile"
0x1d3: Call2 0x95

0x1d4: Pop(1)
0x1d5: Push((int) 527489)
0x1d6: @@ SetMessage(Stack[-1])
0x1d7: Pop(1)
0x1d8: @@ ClearReplies()
0x1d9: Pop(0)
0x1da: Push((int) 527490)
0x1db: Push((int) 28827)
0x1dc: Push((int) 28817)
0x1dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1de: Pop(3)
0x1df: Push((int) 527495)
0x1e0: Push((int) 28827)
0x1e1: Push((int) 28826)
0x1e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e3: Pop(3)
0x1e4: Return(); Pop(0)

0x1e5: Push((int) 28827)
0x1e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1e8: PushEmpty(string)
0x1e9: Stack[-1] = "Neutral"
0x1ea: Call2 0x95

0x1eb: Pop(1)
0x1ec: Push((int) 527496)
0x1ed: @@ SetMessage(Stack[-1])
0x1ee: Pop(1)
0x1ef: @@ ClearReplies()
0x1f0: Pop(0)
0x1f1: Push((int) 527497)
0x1f2: Push((int) 28829)
0x1f3: Push((int) 28828)
0x1f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f5: Pop(3)
0x1f6: Return(); Pop(0)

0x1f7: Push((int) 28829)
0x1f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f9: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1fa: PushEmpty(string)
0x1fb: Stack[-1] = "Neutral"
0x1fc: Call2 0x95

0x1fd: Pop(1)
0x1fe: Push((int) 527498)
0x1ff: @@ SetMessage(Stack[-1])
0x200: Pop(1)
0x201: @@ ClearReplies()
0x202: Pop(0)
0x203: Push((int) 527499)
0x204: Push((int) 28832)
0x205: Push((int) 28831)
0x206: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x207: Pop(3)
0x208: Return(); Pop(0)

0x209: Push((int) 28832)
0x20a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20b: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x20c: PushEmpty(string)
0x20d: Stack[-1] = "Neutral"
0x20e: Call2 0x95

0x20f: Pop(1)
0x210: Push((int) 527500)
0x211: @@ SetMessage(Stack[-1])
0x212: Pop(1)
0x213: @@ ClearReplies()
0x214: Pop(0)
0x215: Push((int) 527501)
0x216: Push((int) -1)
0x217: Push((int) 28833)
0x218: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x219: Pop(3)
0x21a: Push((int) 527502)
0x21b: Push((int) 28835)
0x21c: Push((int) 28834)
0x21d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21e: Pop(3)
0x21f: Return(); Pop(0)

0x220: Push((int) 28835)
0x221: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x223: PushEmpty(string)
0x224: Stack[-1] = "Menace"
0x225: Call2 0x95

0x226: Pop(1)
0x227: Push((int) 527503)
0x228: @@ SetMessage(Stack[-1])
0x229: Pop(1)
0x22a: @@ ClearReplies()
0x22b: Pop(0)
0x22c: Push((int) 527504)
0x22d: Push((int) -1)
0x22e: Push((int) 28836)
0x22f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x230: Pop(3)
0x231: Push((int) 527505)
0x232: Push((int) -1)
0x233: Push((int) 28837)
0x234: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x235: Pop(3)
0x236: Return(); Pop(0)

0x237: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x238: PushEmpty(bool)
0x239: Call2 0x541

0x23a: Pop(0)
0x23b: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23c: @ lshStopAnimation()
0x23d: Pop(0)
0x23e: GOTO 0x241

0x23f: @ StopAnimation()
0x240: Pop(0)
0x241: Return(); Pop(0)

0x242: GOTO 0xac

0x243: Return(); Pop(0)

0x244: PushEmpty()
0x245: PushEmpty(int, object)
0x246: Stack[-1] = Stack[-3]
0x247: Push(-2, 1); TaskCall(0)
0x248: Call2 0x0

0x249: Pop(-2, 1); TaskReturn
0x24a: Pop(2)
0x24b: Return(); Pop(0)

0x24c: PushEmpty()
0x24d: Call2 0x275

0x24e: Pop(0)
0x24f: Return(); Pop(0)

0x250: PushEmpty(bool, bool)
0x251: Push("cleanup")
0x252: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x253: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x254: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x255: @ IsLoaded(Stack[-1])
0x256: Pop(0)
0x257: Pop(0); Push((bool) Stack[-1] == 0)
0x258: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x259: PushEmpty(object)
0x25a: Call2 0x4a7

0x25b: Pop(0)
0x25c: @ RemoveActor(Stack[-1])
0x25d: Pop(1)
0x25e: GOTO 0x263

0x25f: Push("restore")
0x260: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x262: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x263: Return(); Pop(2)

0x264: Push( Stack[1 + Tasks[-1].StackPointer] )
0x265: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x266: PushEmpty(object)
0x267: Call2 0x4a7

0x268: Pop(0)
0x269: @ RemoveActor(Stack[-1])
0x26a: Pop(1)
0x26b: @ Hold()
0x26c: Pop(0)
0x26d: PushEmpty()
0x26e: Call2 0x2e0

0x26f: Pop(0)
0x270: Return(); Pop(0)

0x271: PushEmpty()
0x272: Call2 0x2ef

0x273: Pop(0)
0x274: Return(); Pop(0)

0x275: PushEmpty(bool)
0x276: Call2 0x38c

0x277: Pop(0)
0x278: Pop(1); Push((bool) Stack[-1] == 0)
0x279: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27a: @ Hold()
0x27b: Pop(0)
0x27c: @ GetDirection(Stack[-0])
0x27d: Pop(0)
0x27e: PushEmpty()
0x27f: Call2 0x325

0x280: Pop(0)
0x281: GOTO 0x27e

0x282: Return(); Pop(0)

0x283: PushEmpty(object, object)
0x284: Push("player")
0x285: @ FindActor(Stack[-2], Stack[-1])
0x286: Pop(1)
0x287: Pop(0); Push((bool) Stack[-1] == 0)
0x288: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x289: Stack[-3] = (bool) 0
0x28a: Return(); Pop(2)

0x28b: PushEmpty(bool, object)
0x28c: Stack[-1] = Stack[-3]
0x28d: Call2 0x383

0x28e: Stack[-5] = Stack[-2]
0x28f: Pop(2)
0x290: Return(); Pop(2)

0x291: Stack[-1] = 0
0x292: Push(CvectorIndex(Stack[-0], 0))
0x293: Push(CvectorIndex(Stack[-0], 2))
0x294: @ RotateAsync(Stack[-2], Stack[-1])
0x295: Pop(2)
0x296: Return(); Pop(0)

0x297: PushEmpty(object, bool, object, bool)
0x298: Push("player")
0x299: @ FindActor(Stack[-3], Stack[-1])
0x29a: Pop(1)
0x29b: Pop(0); Push((bool) Stack[-2] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29d: Stack[-5] = (bool) 0
0x29e: Return(); Pop(4)

0x29f: PushEmpty(float, object)
0x2a0: Stack[-1] = Stack[-4]
0x2a1: Call2 0x371

0x2a2: Pop(1)
0x2a3: Push((float)90000.0)
0x2a4: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a6: Stack[-5] = (bool) 0
0x2a7: Return(); Pop(4)

0x2a8: @ CanSee(Stack[-1], Stack[-2])
0x2a9: Pop(0)
0x2aa: Stack[-5] = Stack[-1]
0x2ab: Return(); Pop(4)

0x2ac: Stack[-2] = 0
0x2ad: PushEmpty(float, float)
0x2ae: Push((int) 8)
0x2af: Push((int) 16)
0x2b0: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x2b1: Pop(2)
0x2b2: Push((int) 10)
0x2b3: @ SetTimer(Stack[-1], Stack[-2])
0x2b4: Pop(1)
0x2b5: Return(); Pop(2)

0x2b6: Push((int) 10)
0x2b7: @ KillTimer(Stack[-1])
0x2b8: Pop(1)
0x2b9: Return(); Pop(0)

0x2ba: PushEmpty()
0x2bb: Push((int) 10)
0x2bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2be: PushEmpty()
0x2bf: Call2 0x2b6

0x2c0: Pop(0)
0x2c1: PushEmpty(bool)
0x2c2: Stack[-1] = (bool) 0
0x2c3: PushEmpty(bool)
0x2c4: Call2 0x38c

0x2c5: Pop(0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c7: PushEmpty(bool)
0x2c8: Call2 0x297

0x2c9: Pop(0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2cb: Stack[-1] = (bool) 1
0x2cc: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2cd: PushEmpty(bool)
0x2ce: Call2 0x283

0x2cf: Pop(0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d1: PushEmpty(bool, object)
0x2d2: PushEmpty(object)
0x2d3: Call2 0x4a7

0x2d4: Stack[-2] = Stack[-1]
0x2d5: Pop(1)
0x2d6: Call2 0x422

0x2d7: Pop(2)
0x2d8: GOTO 0x2df

0x2d9: PushEmpty()
0x2da: Call2 0x292

0x2db: Pop(0)
0x2dc: PushEmpty()
0x2dd: Call2 0x2ad

0x2de: Pop(0)
0x2df: Return(); Pop(0)

0x2e0: PushEmpty()
0x2e1: Call2 0x36c

0x2e2: Pop(0)
0x2e3: PushEmpty()
0x2e4: Call2 0x2b6

0x2e5: Pop(0)
0x2e6: @ lshStopSpeech()
0x2e7: Pop(0)
0x2e8: @ lshStopAnimation()
0x2e9: Pop(0)
0x2ea: @ StopAsync()
0x2eb: Pop(0)
0x2ec: @ Hold()
0x2ed: Pop(0)
0x2ee: Return(); Pop(0)

0x2ef: @ StopGroup0()
0x2f0: Pop(0)
0x2f1: PushEmpty()
0x2f2: Call2 0x2b6

0x2f3: Pop(0)
0x2f4: PushEmpty(string)
0x2f5: Stack[-1] = "Neutral"
0x2f6: Call2 0x472

0x2f7: Pop(1)
0x2f8: PushEmpty()
0x2f9: Call2 0x2ad

0x2fa: Pop(0)
0x2fb: Return(); Pop(0)

0x2fc: PushEmpty()
0x2fd: Push(Stack[-1])
0x2fe: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2ff: PushEmpty()
0x300: Call2 0x2ad

0x301: Pop(0)
0x302: GOTO 0x307

0x303: PushEmpty(string)
0x304: Stack[-1] = "Neutral"
0x305: Call2 0x472

0x306: Pop(1)
0x307: Return(); Pop(0)

0x308: PushEmpty(bool, bool)
0x309: @ IsOverrideActive(Stack[-1])
0x30a: Pop(0)
0x30b: Pop(0); Push((bool) Stack[-1] == 0)
0x30c: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x30d: EventDisable(0)
0x30e: PushEmpty()
0x30f: Call2 0x36c

0x310: Pop(0)
0x311: PushEmpty(bool, object)
0x312: Stack[-1] = Stack[-5]
0x313: Call2 0x383

0x314: Pop(2)
0x315: EventEnable(0)
0x316: PushEmpty(object)
0x317: Stack[-1] = Stack[-4]
0x318: Call2 0x244

0x319: Pop(1)
0x31a: PushEmpty(string)
0x31b: Stack[-1] = "Neutral"
0x31c: Call2 0x472

0x31d: Pop(1)
0x31e: PushEmpty()
0x31f: Call2 0x2b6

0x320: Pop(0)
0x321: PushEmpty()
0x322: Call2 0x2ad

0x323: Pop(0)
0x324: Return(); Pop(2)

0x325: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x326: @ WaitForAnimEnd()
0x327: Pop(0)
0x328: PushEmpty(bool)
0x329: Call2 0x38c

0x32a: Pop(0)
0x32b: Pop(1); Push((bool) Stack[-1] == 0)
0x32c: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32d: Return(); Pop(12)

0x32e: PushEmpty(int)
0x32f: Call2 0x4cc

0x330: Stack[-7] = Stack[-1]
0x331: Pop(1)
0x332: Stack[-5] = (int) 0
0x333: PushEmpty(bool)
0x334: Stack[-1] = (bool) 0
0x335: Push((int) 5)
0x336: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x337: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x338: PushEmpty(bool)
0x339: Call2 0x38c

0x33a: Pop(0)
0x33b: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33c: Stack[-1] = (bool) 1
0x33d: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x33e: Pop(0); Push((bool) Stack[-6] == 0)
0x33f: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x340: Push((int) 3)
0x341: @ Sleep(Stack[-1], Stack[-5])
0x342: Pop(1)
0x343: Pop(0); Push((bool) Stack[-4] == 0)
0x344: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x345: GOTO 0x367

0x346: GOTO 0x35c

0x347: @ irand(Stack[-3], Stack[-6])
0x348: Pop(0)
0x349: Push((int) 5)
0x34a: @ irand(Stack[-3], Stack[-1])
0x34b: Pop(1)
0x34c: Push((int) 0)
0x34d: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x34e: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34f: Stack[-3] = (int) 0
0x350: Push("all")
0x351: PushEmpty(string, int)
0x352: Stack[-1] = Stack[-6]
0x353: Call2 0x4c5

0x354: Pop(1)
0x355: @ PlayAnimation(Stack[-2], Stack[-1])
0x356: Pop(2)
0x357: @ WaitForAnimEnd(Stack[-1])
0x358: Pop(0)
0x359: Pop(0); Push((bool) Stack[-1] == 0)
0x35a: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35b: GOTO 0x367

0x35c: PushEmpty(bool)
0x35d: Call2 0x36a

0x35e: Pop(0)
0x35f: Pop(1); Push((bool) Stack[-1] == 0)
0x360: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x361: GOTO 0x367

0x362: @ ResetAAS()
0x363: Pop(0)
0x364: Push((int) 1)
0x365: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x366: GOTO 0x333

0x367: @ ResetAAS()
0x368: Pop(0)
0x369: Return(); Pop(12)

0x36a: Stack[-1] = (bool) 1
0x36b: Return(); Pop(0)

0x36c: @ StopAnimation()
0x36d: Pop(0)
0x36e: @ StopGroup0()
0x36f: Pop(0)
0x370: Return(); Pop(0)

0x371: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x372: @ GetPosition(Stack[-3])
0x373: Pop(0)
0x374: @@ GetPosition(Stack[-2])
0x375: Pop(0)
0x376: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x377: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x378: Return(); Pop(6)

0x379: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x37a: @ GetPosition(Stack[-3])
0x37b: Pop(0)
0x37c: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x37d: Push(CvectorIndex(Stack[-2], 0))
0x37e: Push(CvectorIndex(Stack[-3], 2))
0x37f: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x380: Pop(2)
0x381: Stack[-8] = Stack[-1]
0x382: Return(); Pop(6)

0x383: PushEmpty(cvector, cvector)
0x384: @@ GetPosition(Stack[-1])
0x385: Pop(0)
0x386: PushEmpty(bool, cvector)
0x387: Stack[-1] = Stack[-3]
0x388: Call2 0x379

0x389: Stack[-6] = Stack[-2]
0x38a: Pop(2)
0x38b: Return(); Pop(2)

0x38c: PushEmpty(bool, bool)
0x38d: @ IsLoaded(Stack[-1])
0x38e: Pop(0)
0x38f: Stack[-3] = Stack[-1]
0x390: Return(); Pop(2)

0x391: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x392: @@ GetPosition(Stack[-8])
0x393: Pop(0)
0x394: @@ GetEyesHeight(Stack[-9])
0x395: Pop(0)
0x396: Push(CvectorIndex(Stack[-8], 1))
0x397: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x398: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x399: @ GetPosition(Stack[-7])
0x39a: Pop(0)
0x39b: @ GetEyesHeight(Stack[-9])
0x39c: Pop(0)
0x39d: Push(CvectorIndex(Stack[-7], 1))
0x39e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x39f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3a0: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3a1: Push(CvectorIndex(Stack[-6], 1))
0x3a2: Stack[-1] = (int) 0
0x3a3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3a4: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3a5: Pop(1); Push(Sqrt(Stack[-1]))
0x3a6: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3a7: Stack[-5] = -Stack[-6]; Pop(0);
0x3a8: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3a9: PushEmpty(cvector, cvector)
0x3aa: Push(CVector(0.0, 1.0, 0.0))
0x3ab: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3ac: Call2 0x4ad

0x3ad: Pop(1)
0x3ae: Push((int) 25)
0x3af: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3b0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3b1: Push(CVector(0.0, 10.0, 0.0))
0x3b2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3b3: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3b4: @ IsOverrideActive(Stack[-2])
0x3b5: Pop(0)
0x3b6: Push(Stack[-2])
0x3b7: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b8: Stack[-21] = (bool) 0
0x3b9: Return(); Pop(18)

0x3ba: @ StopWorld()
0x3bb: Pop(0)
0x3bc: Push((bool) 1)
0x3bd: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x3be: Pop(1)
0x3bf: Push(CvectorIndex(Stack[-4], 0))
0x3c0: Push(CvectorIndex(Stack[-5], 2))
0x3c1: @ Rotate(Stack[-2], Stack[-1])
0x3c2: Pop(2)
0x3c3: PushEmpty(bool)
0x3c4: Call2 0x541

0x3c5: Pop(0)
0x3c6: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c7: GOTO 0x3d0

0x3c8: Push("head")
0x3c9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3ca: Pop(1)
0x3cb: Push(Stack[-1])
0x3cc: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3cd: Push("head")
0x3ce: @ LookAsyncCamera(Stack[-1])
0x3cf: Pop(1)
0x3d0: @ CameraWaitForPlayFinish()
0x3d1: Pop(0)
0x3d2: @ ResumeWorld()
0x3d3: Pop(0)
0x3d4: Stack[-21] = (bool) 1
0x3d5: Return(); Pop(18)

0x3d6: PushEmpty(bool, bool)
0x3d7: Push((bool) 1)
0x3d8: @ CameraSwitchToNormal(Stack[-1])
0x3d9: Pop(1)
0x3da: PushEmpty(bool)
0x3db: Call2 0x541

0x3dc: Pop(0)
0x3dd: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3de: GOTO 0x3e7

0x3df: Push("head")
0x3e0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3e1: Pop(1)
0x3e2: Push(Stack[-1])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e4: Push("head")
0x3e5: @ UnlookAsync(Stack[-1])
0x3e6: Pop(1)
0x3e7: Return(); Pop(2)

0x3e8: PushEmpty(int, int, int, int)
0x3e9: Push("voice_common")
0x3ea: @ GetVariable(Stack[-1], Stack[-3])
0x3eb: Pop(1)
0x3ec: Push(Stack[-2])
0x3ed: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x3ee: PushEmpty(bool, object)
0x3ef: Stack[-1] = Stack[-7]
0x3f0: Call2 0x422

0x3f1: Pop(1)
0x3f2: Pop(1); Push((bool) Stack[-1] == 0)
0x3f3: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3f4: PushEmpty(bool, object)
0x3f5: Stack[-1] = Stack[-7]
0x3f6: Call2 0x447

0x3f7: Pop(1)
0x3f8: Pop(1); Push((bool) Stack[-1] == 0)
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: Stack[-6] = (bool) 0
0x3fb: Return(); Pop(4)

0x3fc: Push((int) 2)
0x3fd: @ irand(Stack[-2], Stack[-1])
0x3fe: Pop(1)
0x3ff: Push(Stack[-1])
0x400: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x401: Push("voice_common")
0x402: Push((int) 1)
0x403: Pop(1); Push(Stack[-4] + Stack[-1]);
0x404: Push((int) 3)
0x405: Pop(2); Push(Stack[-2] % Stack[-1]);
0x406: @ SetVariable(Stack[-2], Stack[-1])
0x407: Pop(2)
0x408: GOTO 0x40d

0x409: Push("voice_common")
0x40a: Push((int) 0)
0x40b: @ SetVariable(Stack[-2], Stack[-1])
0x40c: Pop(2)
0x40d: GOTO 0x420

0x40e: PushEmpty(bool, object)
0x40f: Stack[-1] = Stack[-7]
0x410: Call2 0x447

0x411: Pop(1)
0x412: Pop(1); Push((bool) Stack[-1] == 0)
0x413: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x414: PushEmpty(bool, object)
0x415: Stack[-1] = Stack[-7]
0x416: Call2 0x422

0x417: Pop(1)
0x418: Pop(1); Push((bool) Stack[-1] == 0)
0x419: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x41a: Stack[-6] = (bool) 0
0x41b: Return(); Pop(4)

0x41c: Push("voice_common")
0x41d: Push((int) 1)
0x41e: @ SetVariable(Stack[-2], Stack[-1])
0x41f: Pop(2)
0x420: Stack[-6] = (bool) 1
0x421: Return(); Pop(4)

0x422: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x423: Stack[-5] = "c"
0x424: Stack[-4] = (int) 0
0x425: Push((int) 1)
0x426: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x427: Push((int) 1)
0x428: Pop(1); Push(Stack[-5] + Stack[-1]);
0x429: Pop(1); Push(Stack[-6] + Stack[-1]);
0x42a: @@ HasProperty(Stack[-1], Stack[-4])
0x42b: Pop(1)
0x42c: Pop(0); Push((bool) Stack[-3] == 0)
0x42d: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42e: GOTO 0x432

0x42f: Push((int) 1)
0x430: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x431: GOTO 0x425

0x432: Pop(0); Push((bool) Stack[-4] == 0)
0x433: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x434: Stack[-12] = (bool) 0
0x435: Return(); Pop(10)

0x436: Stack[-2] = (int) 0
0x437: Push((int) 1)
0x438: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x439: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x43a: @ irand(Stack[-2], Stack[-4])
0x43b: Pop(0)
0x43c: Push((int) 1)
0x43d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x43e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x43f: @@ GetProperty(Stack[-1], Stack[-2])
0x440: Pop(1)
0x441: PushEmpty(bool, string)
0x442: Stack[-1] = Stack[-3]
0x443: Call2 0x491

0x444: Stack[-14] = Stack[-2]
0x445: Pop(2)
0x446: Return(); Pop(10)

0x447: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x448: Push("d")
0x449: PushEmpty(int)
0x44a: Call2 0x4bc

0x44b: Pop(0)
0x44c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x44d: Push("m")
0x44e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x44f: Stack[-4] = (int) 0
0x450: Push((int) 1)
0x451: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x452: Push((int) 1)
0x453: Pop(1); Push(Stack[-5] + Stack[-1]);
0x454: Pop(1); Push(Stack[-6] + Stack[-1]);
0x455: @@ HasProperty(Stack[-1], Stack[-4])
0x456: Pop(1)
0x457: Pop(0); Push((bool) Stack[-3] == 0)
0x458: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x459: GOTO 0x45d

0x45a: Push((int) 1)
0x45b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x45c: GOTO 0x450

0x45d: Pop(0); Push((bool) Stack[-4] == 0)
0x45e: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45f: Stack[-12] = (bool) 0
0x460: Return(); Pop(10)

0x461: Stack[-2] = (int) 0
0x462: Push((int) 1)
0x463: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x464: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x465: @ irand(Stack[-2], Stack[-4])
0x466: Pop(0)
0x467: Push((int) 1)
0x468: Pop(1); Push(Stack[-3] + Stack[-1]);
0x469: Pop(1); Push(Stack[-6] + Stack[-1]);
0x46a: @@ GetProperty(Stack[-1], Stack[-2])
0x46b: Pop(1)
0x46c: PushEmpty(bool, string)
0x46d: Stack[-1] = Stack[-3]
0x46e: Call2 0x491

0x46f: Stack[-14] = Stack[-2]
0x470: Pop(2)
0x471: Return(); Pop(10)

0x472: PushEmpty(bool, float, float, bool, float, float)
0x473: @ lshHasAnimation(Stack[-3], Stack[-7])
0x474: Pop(0)
0x475: Push(Stack[-3])
0x476: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x477: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x478: Pop(0)
0x479: Push((bool) 0)
0x47a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x47b: Pop(1)
0x47c: GOTO 0x481

0x47d: Push("Can't find lsh animation : ")
0x47e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x47f: @ Trace(Stack[-1])
0x480: Pop(1)
0x481: Return(); Pop(6)

0x482: PushEmpty(bool, float, float, bool, float, float)
0x483: @ lshHasAnimation(Stack[-3], Stack[-8])
0x484: Pop(0)
0x485: Push(Stack[-3])
0x486: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x487: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x488: Pop(0)
0x489: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x48a: Pop(0)
0x48b: GOTO 0x490

0x48c: Push("Can't find lsh animation : ")
0x48d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x48e: @ Trace(Stack[-1])
0x48f: Pop(1)
0x490: Return(); Pop(6)

0x491: PushEmpty(bool, bool)
0x492: PushEmpty(bool)
0x493: Call2 0x541

0x494: Pop(0)
0x495: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x496: @ lshHasSpeech(Stack[-1], Stack[-3])
0x497: Pop(0)
0x498: Push(Stack[-1])
0x499: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x49a: @ lshPlaySpeech(Stack[-3])
0x49b: Pop(0)
0x49c: Stack[-4] = (bool) 1
0x49d: Return(); Pop(2)

0x49e: Stack[-4] = (bool) 0
0x49f: Return(); Pop(2)

0x4a0: PushEmpty(bool)
0x4a1: Call2 0x541

0x4a2: Pop(0)
0x4a3: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a4: @ lshStopSpeech()
0x4a5: Pop(0)
0x4a6: Return(); Pop(0)

0x4a7: PushEmpty(object, object)
0x4a8: @ self(Stack[-1])
0x4a9: Pop(0)
0x4aa: Stack[-3] = Stack[-1]
0x4ab: Return(); Pop(2)

0x4ac: Stack[-1] = 0
0x4ad: PushEmpty(float, float)
0x4ae: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4af: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4b0: Push((float)0.0)
0x4b1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b3: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x4b4: Return(); Pop(2)

0x4b5: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4b6: Return(); Pop(2)

0x4b7: PushEmpty(int, int)
0x4b8: @ GetVariable(Stack[-3], Stack[-1])
0x4b9: Pop(0)
0x4ba: Stack[-4] = Stack[-1]
0x4bb: Return(); Pop(2)

0x4bc: PushEmpty(float, float)
0x4bd: @ GetGameTime(Stack[-1])
0x4be: Pop(0)
0x4bf: Push((int) 1)
0x4c0: PushEmpty(int)
0x4c1: Push((int) 24)
0x4c2: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x4c3: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x4c4: Return(); Pop(2)

0x4c5: PushEmpty(string, string)
0x4c6: Stack[-1] = "idle"
0x4c7: Push(Stack[-3])
0x4c8: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c9: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4ca: Stack[-4] = Stack[-1]
0x4cb: Return(); Pop(2)

0x4cc: PushEmpty(int, bool, int, bool)
0x4cd: Stack[-2] = (int) 0
0x4ce: Push("all")
0x4cf: PushEmpty(string, int)
0x4d0: Stack[-1] = Stack[-5]
0x4d1: Call2 0x4c5

0x4d2: Pop(1)
0x4d3: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4d4: Pop(2)
0x4d5: Pop(0); Push((bool) Stack[-1] == 0)
0x4d6: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d7: GOTO 0x4db

0x4d8: Push((int) 1)
0x4d9: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4da: GOTO 0x4ce

0x4db: Stack[-5] = Stack[-2]
0x4dc: Return(); Pop(4)

0x4dd: PushEmpty()
0x4de: Push("k11q01")
0x4df: Push((int) 4)
0x4e0: @ SetVariable(Stack[-2], Stack[-1])
0x4e1: Pop(2)
0x4e2: PushEmpty()
0x4e3: Call2 0x4f2

0x4e4: Pop(0)
0x4e5: Return(); Pop(0)

0x4e6: PushEmpty()
0x4e7: PushEmpty(int, string)
0x4e8: Stack[-1] = "k11q01"
0x4e9: Call2 0x4b7

0x4ea: Pop(1)
0x4eb: Push((int) 3)
0x4ec: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4ed: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4ee: Stack[-2] = (bool) 1
0x4ef: Return(); Pop(0)

0x4f0: Stack[-2] = (bool) 0
0x4f1: Return(); Pop(0)

0x4f2: PushEmpty(object, object)
0x4f3: Push((int) 487)
0x4f4: Push((int) 1)
0x4f5: Push((int) 528054)
0x4f6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4f7: Pop(3)
0x4f8: PushEmpty(bool, object, int)
0x4f9: Stack[-2] = Stack[-4]
0x4fa: Stack[-1] = (int) 480
0x4fb: Call2 0x50c

0x4fc: Pop(3)
0x4fd: Return(); Pop(2)

0x4fe: Stack[-1] = 0
0x4ff: PushEmpty(object, object)
0x500: @ GetDiaryRoot(Stack[-1])
0x501: Pop(0)
0x502: Pop(0); Push((bool) Stack[-1] == 0)
0x503: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x504: Push("Can't retrieve diary root")
0x505: @ Trace(Stack[-1])
0x506: Pop(1)
0x507: Stack[-3] = (bool) 0
0x508: Return(); Pop(2)

0x509: Stack[-3] = Stack[-1]
0x50a: Return(); Pop(2)

0x50b: Stack[-1] = 0
0x50c: PushEmpty(object, object, int, object, object, int)
0x50d: PushEmpty(object)
0x50e: Call2 0x4ff

0x50f: Stack[-4] = Stack[-1]
0x510: Pop(1)
0x511: @@ Find(Stack[-7], Stack[-2])
0x512: Pop(0)
0x513: Pop(0); Push((bool) Stack[-2] == 0)
0x514: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x515: Push("Can't find diary parent with id: ")
0x516: Pop(1); Push(Stack[-1] + Stack[-8]);
0x517: @ Trace(Stack[-1])
0x518: Pop(1)
0x519: Stack[-9] = (bool) 0
0x51a: Return(); Pop(6)

0x51b: @@ AddChild(Stack[-8])
0x51c: Pop(0)
0x51d: Push((int) 7)
0x51e: @ SendWorldWndMessage(Stack[-1])
0x51f: Pop(1)
0x520: @@ GetCategory(Stack[-1])
0x521: Pop(0)
0x522: @ SetDiarySection(Stack[-1])
0x523: Pop(0)
0x524: Stack[-9] = (bool) 0
0x525: Return(); Pop(6)

0x526: Stack[-2] = 0
0x527: Stack[-3] = 0
0x528: PushEmpty(int, int)
0x529: Push("branch")
0x52a: @ GetVariable(Stack[-1], Stack[-2])
0x52b: Pop(1)
0x52c: Push((int) 0)
0x52d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52e: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x52f: Stack[-3] = (int) 1
0x530: Return(); Pop(2)

0x531: GOTO 0x537

0x532: Push((int) 1)
0x533: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x534: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x535: Stack[-3] = (int) 2
0x536: Return(); Pop(2)

0x537: Stack[-3] = (int) 3
0x538: Return(); Pop(2)

0x539: Stack[-1] = (int) 515573
0x53a: Return(); Pop(0)

0x53b: Stack[-1] = (int) 504032
0x53c: Return(); Pop(0)

0x53d: Stack[-1] = "ui/NPC_Bakalavr.png"
0x53e: Return(); Pop(0)

0x53f: Stack[-1] = "ui/NPC_Bakalavr_b.png"
0x540: Return(); Pop(0)

0x541: Stack[-1] = (bool) 1
0x542: Return(); Pop(0)

