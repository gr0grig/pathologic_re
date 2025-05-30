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

RunOp = 0x238
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x23c Vars = (string)
		EVENT_6 Op = 0x250 Vars = ()
		EVENT_5 Op = 0x25d Vars = ()
		EVENT_7 Op = 0x2a6 Vars = (int)
		EVENT_45 Op = 0x2e8 Vars = (bool)
		EVENT_0 Op = 0x2f4 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x37d

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x525

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x523

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x527

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x529

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x512

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
0x31: Call2 0x491

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x3d2

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
0x48: Call2 0x3c1

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
0x62: Call2 0x4d0

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
0x78: Call2 0x52b

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @ lshWaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: PushEmpty(string)
0x81: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x82: Call2 0x45c

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
0x97: Call2 0x52b

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
0xa7: Call2 0x46c

0xa8: Pop(2)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0xae: PushEmpty()
0xaf: Call2 0x48a

0xb0: Pop(0)
0xb1: Push((int) 28833)
0xb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0x4c7

0xb8: Pop(2)
0xb9: Push((int) 28836)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x4c7

0xc0: Pop(2)
0xc1: Push((int) 28837)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0x4c7

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
0xd7: Call2 0x4d0

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
0x115: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

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
0x124: Return(); Pop(0)

0x125: Push((int) 28798)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x128: Push((int) 28800)
0x129: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x12b: PushEmpty(string)
0x12c: Stack[-1] = "Menace"
0x12d: Call2 0x95

0x12e: Pop(1)
0x12f: Push((int) 527474)
0x130: @@ SetMessage(Stack[-1])
0x131: Pop(1)
0x132: @@ ClearReplies()
0x133: Pop(0)
0x134: Push((int) 527475)
0x135: Push((int) 28802)
0x136: Push((int) 28801)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: Return(); Pop(0)

0x13a: Push((int) 28802)
0x13b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13c: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x13d: PushEmpty(string)
0x13e: Stack[-1] = "Untrust"
0x13f: Call2 0x95

0x140: Pop(1)
0x141: Push((int) 527476)
0x142: @@ SetMessage(Stack[-1])
0x143: Pop(1)
0x144: @@ ClearReplies()
0x145: Pop(0)
0x146: Push((int) 527491)
0x147: Push((int) 28804)
0x148: Push((int) 28818)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: Push((int) 28804)
0x14d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14e: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x14f: PushEmpty(string)
0x150: Stack[-1] = "Menace"
0x151: Call2 0x95

0x152: Pop(1)
0x153: Push((int) 527478)
0x154: @@ SetMessage(Stack[-1])
0x155: Pop(1)
0x156: @@ ClearReplies()
0x157: Pop(0)
0x158: Push((int) 527479)
0x159: Push((int) 28806)
0x15a: Push((int) 28805)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Push((int) 527493)
0x15e: Push((int) 28806)
0x15f: Push((int) 28822)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: Push((int) 28806)
0x164: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x166: PushEmpty(string)
0x167: Stack[-1] = "Sorrow"
0x168: Call2 0x95

0x169: Pop(1)
0x16a: Push((int) 527480)
0x16b: @@ SetMessage(Stack[-1])
0x16c: Pop(1)
0x16d: @@ ClearReplies()
0x16e: Pop(0)
0x16f: Push((int) 527481)
0x170: Push((int) 28808)
0x171: Push((int) 28807)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Push((int) 527494)
0x175: Push((int) 28808)
0x176: Push((int) 28824)
0x177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x178: Pop(3)
0x179: Return(); Pop(0)

0x17a: Push((int) 28808)
0x17b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x17d: PushEmpty(string)
0x17e: Stack[-1] = "Neutral"
0x17f: Call2 0x95

0x180: Pop(1)
0x181: Push((int) 527482)
0x182: @@ SetMessage(Stack[-1])
0x183: Pop(1)
0x184: @@ ClearReplies()
0x185: Pop(0)
0x186: Push((int) 527483)
0x187: Push((int) 28810)
0x188: Push((int) 28809)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Push((int) 527492)
0x18c: Push((int) 28810)
0x18d: Push((int) 28820)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: Return(); Pop(0)

0x191: Push((int) 28810)
0x192: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Neutral"
0x196: Call2 0x95

0x197: Pop(1)
0x198: Push((int) 527484)
0x199: @@ SetMessage(Stack[-1])
0x19a: Pop(1)
0x19b: @@ ClearReplies()
0x19c: Pop(0)
0x19d: Push((int) 527485)
0x19e: Push((int) 28813)
0x19f: Push((int) 28811)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: Push((int) 527486)
0x1a3: Push((int) 28813)
0x1a4: Push((int) 28812)
0x1a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a6: Pop(3)
0x1a7: Return(); Pop(0)

0x1a8: Push((int) 28813)
0x1a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1ab: PushEmpty(string)
0x1ac: Stack[-1] = "Neutral"
0x1ad: Call2 0x95

0x1ae: Pop(1)
0x1af: Push((int) 527487)
0x1b0: @@ SetMessage(Stack[-1])
0x1b1: Pop(1)
0x1b2: @@ ClearReplies()
0x1b3: Pop(0)
0x1b4: Push((int) 527488)
0x1b5: Push((int) 28816)
0x1b6: Push((int) 28815)
0x1b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b8: Pop(3)
0x1b9: Return(); Pop(0)

0x1ba: Push((int) 28816)
0x1bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1bd: PushEmpty(string)
0x1be: Stack[-1] = "Smile"
0x1bf: Call2 0x95

0x1c0: Pop(1)
0x1c1: Push((int) 527489)
0x1c2: @@ SetMessage(Stack[-1])
0x1c3: Pop(1)
0x1c4: @@ ClearReplies()
0x1c5: Pop(0)
0x1c6: Push((int) 527490)
0x1c7: Push((int) 28827)
0x1c8: Push((int) 28817)
0x1c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ca: Pop(3)
0x1cb: Push((int) 527495)
0x1cc: Push((int) 28827)
0x1cd: Push((int) 28826)
0x1ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cf: Pop(3)
0x1d0: Return(); Pop(0)

0x1d1: Push((int) 28827)
0x1d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1d4: PushEmpty(string)
0x1d5: Stack[-1] = "Neutral"
0x1d6: Call2 0x95

0x1d7: Pop(1)
0x1d8: Push((int) 527496)
0x1d9: @@ SetMessage(Stack[-1])
0x1da: Pop(1)
0x1db: @@ ClearReplies()
0x1dc: Pop(0)
0x1dd: Push((int) 527497)
0x1de: Push((int) 28829)
0x1df: Push((int) 28828)
0x1e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e1: Pop(3)
0x1e2: Return(); Pop(0)

0x1e3: Push((int) 28829)
0x1e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1e6: PushEmpty(string)
0x1e7: Stack[-1] = "Neutral"
0x1e8: Call2 0x95

0x1e9: Pop(1)
0x1ea: Push((int) 527498)
0x1eb: @@ SetMessage(Stack[-1])
0x1ec: Pop(1)
0x1ed: @@ ClearReplies()
0x1ee: Pop(0)
0x1ef: Push((int) 527499)
0x1f0: Push((int) 28832)
0x1f1: Push((int) 28831)
0x1f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f3: Pop(3)
0x1f4: Return(); Pop(0)

0x1f5: Push((int) 28832)
0x1f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1f8: PushEmpty(string)
0x1f9: Stack[-1] = "Neutral"
0x1fa: Call2 0x95

0x1fb: Pop(1)
0x1fc: Push((int) 527500)
0x1fd: @@ SetMessage(Stack[-1])
0x1fe: Pop(1)
0x1ff: @@ ClearReplies()
0x200: Pop(0)
0x201: Push((int) 527501)
0x202: Push((int) -1)
0x203: Push((int) 28833)
0x204: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x205: Pop(3)
0x206: Push((int) 527502)
0x207: Push((int) 28835)
0x208: Push((int) 28834)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: Return(); Pop(0)

0x20c: Push((int) 28835)
0x20d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x20f: PushEmpty(string)
0x210: Stack[-1] = "Menace"
0x211: Call2 0x95

0x212: Pop(1)
0x213: Push((int) 527503)
0x214: @@ SetMessage(Stack[-1])
0x215: Pop(1)
0x216: @@ ClearReplies()
0x217: Pop(0)
0x218: Push((int) 527504)
0x219: Push((int) -1)
0x21a: Push((int) 28836)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: Push((int) 527505)
0x21e: Push((int) -1)
0x21f: Push((int) 28837)
0x220: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x221: Pop(3)
0x222: Return(); Pop(0)

0x223: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x224: PushEmpty(bool)
0x225: Call2 0x52b

0x226: Pop(0)
0x227: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x228: @ lshStopAnimation()
0x229: Pop(0)
0x22a: GOTO 0x22d

0x22b: @ StopAnimation()
0x22c: Pop(0)
0x22d: Return(); Pop(0)

0x22e: GOTO 0xac

0x22f: Return(); Pop(0)

0x230: PushEmpty()
0x231: PushEmpty(int, object)
0x232: Stack[-1] = Stack[-3]
0x233: Push(-2, 1); TaskCall(0)
0x234: Call2 0x0

0x235: Pop(-2, 1); TaskReturn
0x236: Pop(2)
0x237: Return(); Pop(0)

0x238: PushEmpty()
0x239: Call2 0x261

0x23a: Pop(0)
0x23b: Return(); Pop(0)

0x23c: PushEmpty(bool, bool)
0x23d: Push("cleanup")
0x23e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x23f: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x240: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x241: @ IsLoaded(Stack[-1])
0x242: Pop(0)
0x243: Pop(0); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x245: PushEmpty(object)
0x246: Call2 0x491

0x247: Pop(0)
0x248: @ RemoveActor(Stack[-1])
0x249: Pop(1)
0x24a: GOTO 0x24f

0x24b: Push("restore")
0x24c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24e: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x24f: Return(); Pop(2)

0x250: Push( Stack[1 + Tasks[-1].StackPointer] )
0x251: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x252: PushEmpty(object)
0x253: Call2 0x491

0x254: Pop(0)
0x255: @ RemoveActor(Stack[-1])
0x256: Pop(1)
0x257: @ Hold()
0x258: Pop(0)
0x259: PushEmpty()
0x25a: Call2 0x2cc

0x25b: Pop(0)
0x25c: Return(); Pop(0)

0x25d: PushEmpty()
0x25e: Call2 0x2db

0x25f: Pop(0)
0x260: Return(); Pop(0)

0x261: PushEmpty(bool)
0x262: Call2 0x378

0x263: Pop(0)
0x264: Pop(1); Push((bool) Stack[-1] == 0)
0x265: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x266: @ Hold()
0x267: Pop(0)
0x268: @ GetDirection(Stack[-0])
0x269: Pop(0)
0x26a: PushEmpty()
0x26b: Call2 0x311

0x26c: Pop(0)
0x26d: GOTO 0x26a

0x26e: Return(); Pop(0)

0x26f: PushEmpty(object, object)
0x270: Push("player")
0x271: @ FindActor(Stack[-2], Stack[-1])
0x272: Pop(1)
0x273: Pop(0); Push((bool) Stack[-1] == 0)
0x274: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x275: Stack[-3] = (bool) 0
0x276: Return(); Pop(2)

0x277: PushEmpty(bool, object)
0x278: Stack[-1] = Stack[-3]
0x279: Call2 0x36f

0x27a: Stack[-5] = Stack[-2]
0x27b: Pop(2)
0x27c: Return(); Pop(2)

0x27d: Stack[-1] = 0
0x27e: Push(CvectorIndex(Stack[-0], 0))
0x27f: Push(CvectorIndex(Stack[-0], 2))
0x280: @ RotateAsync(Stack[-2], Stack[-1])
0x281: Pop(2)
0x282: Return(); Pop(0)

0x283: PushEmpty(object, bool, object, bool)
0x284: Push("player")
0x285: @ FindActor(Stack[-3], Stack[-1])
0x286: Pop(1)
0x287: Pop(0); Push((bool) Stack[-2] == 0)
0x288: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x289: Stack[-5] = (bool) 0
0x28a: Return(); Pop(4)

0x28b: PushEmpty(float, object)
0x28c: Stack[-1] = Stack[-4]
0x28d: Call2 0x35d

0x28e: Pop(1)
0x28f: Push((float)90000.0)
0x290: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x292: Stack[-5] = (bool) 0
0x293: Return(); Pop(4)

0x294: @ CanSee(Stack[-1], Stack[-2])
0x295: Pop(0)
0x296: Stack[-5] = Stack[-1]
0x297: Return(); Pop(4)

0x298: Stack[-2] = 0
0x299: PushEmpty(float, float)
0x29a: Push((int) 8)
0x29b: Push((int) 16)
0x29c: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x29d: Pop(2)
0x29e: Push((int) 10)
0x29f: @ SetTimer(Stack[-1], Stack[-2])
0x2a0: Pop(1)
0x2a1: Return(); Pop(2)

0x2a2: Push((int) 10)
0x2a3: @ KillTimer(Stack[-1])
0x2a4: Pop(1)
0x2a5: Return(); Pop(0)

0x2a6: PushEmpty()
0x2a7: Push((int) 10)
0x2a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2aa: PushEmpty()
0x2ab: Call2 0x2a2

0x2ac: Pop(0)
0x2ad: PushEmpty(bool)
0x2ae: Stack[-1] = (bool) 0
0x2af: PushEmpty(bool)
0x2b0: Call2 0x378

0x2b1: Pop(0)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b3: PushEmpty(bool)
0x2b4: Call2 0x283

0x2b5: Pop(0)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b7: Stack[-1] = (bool) 1
0x2b8: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2b9: PushEmpty(bool)
0x2ba: Call2 0x26f

0x2bb: Pop(0)
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2bd: PushEmpty(bool, object)
0x2be: PushEmpty(object)
0x2bf: Call2 0x491

0x2c0: Stack[-2] = Stack[-1]
0x2c1: Pop(1)
0x2c2: Call2 0x40c

0x2c3: Pop(2)
0x2c4: GOTO 0x2cb

0x2c5: PushEmpty()
0x2c6: Call2 0x27e

0x2c7: Pop(0)
0x2c8: PushEmpty()
0x2c9: Call2 0x299

0x2ca: Pop(0)
0x2cb: Return(); Pop(0)

0x2cc: PushEmpty()
0x2cd: Call2 0x358

0x2ce: Pop(0)
0x2cf: PushEmpty()
0x2d0: Call2 0x2a2

0x2d1: Pop(0)
0x2d2: @ lshStopSpeech()
0x2d3: Pop(0)
0x2d4: @ lshStopAnimation()
0x2d5: Pop(0)
0x2d6: @ StopAsync()
0x2d7: Pop(0)
0x2d8: @ Hold()
0x2d9: Pop(0)
0x2da: Return(); Pop(0)

0x2db: @ StopGroup0()
0x2dc: Pop(0)
0x2dd: PushEmpty()
0x2de: Call2 0x2a2

0x2df: Pop(0)
0x2e0: PushEmpty(string)
0x2e1: Stack[-1] = "Neutral"
0x2e2: Call2 0x45c

0x2e3: Pop(1)
0x2e4: PushEmpty()
0x2e5: Call2 0x299

0x2e6: Pop(0)
0x2e7: Return(); Pop(0)

0x2e8: PushEmpty()
0x2e9: Push(Stack[-1])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2eb: PushEmpty()
0x2ec: Call2 0x299

0x2ed: Pop(0)
0x2ee: GOTO 0x2f3

0x2ef: PushEmpty(string)
0x2f0: Stack[-1] = "Neutral"
0x2f1: Call2 0x45c

0x2f2: Pop(1)
0x2f3: Return(); Pop(0)

0x2f4: PushEmpty(bool, bool)
0x2f5: @ IsOverrideActive(Stack[-1])
0x2f6: Pop(0)
0x2f7: Pop(0); Push((bool) Stack[-1] == 0)
0x2f8: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x2f9: EventDisable(0)
0x2fa: PushEmpty()
0x2fb: Call2 0x358

0x2fc: Pop(0)
0x2fd: PushEmpty(bool, object)
0x2fe: Stack[-1] = Stack[-5]
0x2ff: Call2 0x36f

0x300: Pop(2)
0x301: EventEnable(0)
0x302: PushEmpty(object)
0x303: Stack[-1] = Stack[-4]
0x304: Call2 0x230

0x305: Pop(1)
0x306: PushEmpty(string)
0x307: Stack[-1] = "Neutral"
0x308: Call2 0x45c

0x309: Pop(1)
0x30a: PushEmpty()
0x30b: Call2 0x2a2

0x30c: Pop(0)
0x30d: PushEmpty()
0x30e: Call2 0x299

0x30f: Pop(0)
0x310: Return(); Pop(2)

0x311: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x312: @ WaitForAnimEnd()
0x313: Pop(0)
0x314: PushEmpty(bool)
0x315: Call2 0x378

0x316: Pop(0)
0x317: Pop(1); Push((bool) Stack[-1] == 0)
0x318: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x319: Return(); Pop(12)

0x31a: PushEmpty(int)
0x31b: Call2 0x4b6

0x31c: Stack[-7] = Stack[-1]
0x31d: Pop(1)
0x31e: Stack[-5] = (int) 0
0x31f: PushEmpty(bool)
0x320: Stack[-1] = (bool) 0
0x321: Push((int) 5)
0x322: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x323: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x324: PushEmpty(bool)
0x325: Call2 0x378

0x326: Pop(0)
0x327: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x328: Stack[-1] = (bool) 1
0x329: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x32a: Pop(0); Push((bool) Stack[-6] == 0)
0x32b: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x32c: Push((int) 3)
0x32d: @ Sleep(Stack[-1], Stack[-5])
0x32e: Pop(1)
0x32f: Pop(0); Push((bool) Stack[-4] == 0)
0x330: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x331: GOTO 0x353

0x332: GOTO 0x348

0x333: @ irand(Stack[-3], Stack[-6])
0x334: Pop(0)
0x335: Push((int) 5)
0x336: @ irand(Stack[-3], Stack[-1])
0x337: Pop(1)
0x338: Push((int) 0)
0x339: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x33a: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x33b: Stack[-3] = (int) 0
0x33c: Push("all")
0x33d: PushEmpty(string, int)
0x33e: Stack[-1] = Stack[-6]
0x33f: Call2 0x4af

0x340: Pop(1)
0x341: @ PlayAnimation(Stack[-2], Stack[-1])
0x342: Pop(2)
0x343: @ WaitForAnimEnd(Stack[-1])
0x344: Pop(0)
0x345: Pop(0); Push((bool) Stack[-1] == 0)
0x346: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x347: GOTO 0x353

0x348: PushEmpty(bool)
0x349: Call2 0x356

0x34a: Pop(0)
0x34b: Pop(1); Push((bool) Stack[-1] == 0)
0x34c: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34d: GOTO 0x353

0x34e: @ ResetAAS()
0x34f: Pop(0)
0x350: Push((int) 1)
0x351: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x352: GOTO 0x31f

0x353: @ ResetAAS()
0x354: Pop(0)
0x355: Return(); Pop(12)

0x356: Stack[-1] = (bool) 1
0x357: Return(); Pop(0)

0x358: @ StopAnimation()
0x359: Pop(0)
0x35a: @ StopGroup0()
0x35b: Pop(0)
0x35c: Return(); Pop(0)

0x35d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x35e: @ GetPosition(Stack[-3])
0x35f: Pop(0)
0x360: @@ GetPosition(Stack[-2])
0x361: Pop(0)
0x362: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x363: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x364: Return(); Pop(6)

0x365: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x366: @ GetPosition(Stack[-3])
0x367: Pop(0)
0x368: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x369: Push(CvectorIndex(Stack[-2], 0))
0x36a: Push(CvectorIndex(Stack[-3], 2))
0x36b: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x36c: Pop(2)
0x36d: Stack[-8] = Stack[-1]
0x36e: Return(); Pop(6)

0x36f: PushEmpty(cvector, cvector)
0x370: @@ GetPosition(Stack[-1])
0x371: Pop(0)
0x372: PushEmpty(bool, cvector)
0x373: Stack[-1] = Stack[-3]
0x374: Call2 0x365

0x375: Stack[-6] = Stack[-2]
0x376: Pop(2)
0x377: Return(); Pop(2)

0x378: PushEmpty(bool, bool)
0x379: @ IsLoaded(Stack[-1])
0x37a: Pop(0)
0x37b: Stack[-3] = Stack[-1]
0x37c: Return(); Pop(2)

0x37d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x37e: @@ GetPosition(Stack[-8])
0x37f: Pop(0)
0x380: @@ GetEyesHeight(Stack[-9])
0x381: Pop(0)
0x382: Push(CvectorIndex(Stack[-8], 1))
0x383: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x384: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x385: @ GetPosition(Stack[-7])
0x386: Pop(0)
0x387: @ GetEyesHeight(Stack[-9])
0x388: Pop(0)
0x389: Push(CvectorIndex(Stack[-7], 1))
0x38a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x38b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x38c: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x38d: Push(CvectorIndex(Stack[-6], 1))
0x38e: Stack[-1] = (int) 0
0x38f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x390: Pop(0); Push(Stack[-6] | Stack[-6]);
0x391: Pop(1); Push(Sqrt(Stack[-1]))
0x392: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x393: Stack[-5] = -Stack[-6]; Pop(0);
0x394: Pop(0); Push(Stack[-6] * Stack[-19]);
0x395: PushEmpty(cvector, cvector)
0x396: Push(CVector(0.0, 1.0, 0.0))
0x397: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x398: Call2 0x497

0x399: Pop(1)
0x39a: Push((int) 25)
0x39b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x39c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x39d: Push(CVector(0.0, 10.0, 0.0))
0x39e: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x39f: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3a0: @ IsOverrideActive(Stack[-2])
0x3a1: Pop(0)
0x3a2: Push(Stack[-2])
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a4: Stack[-21] = (bool) 0
0x3a5: Return(); Pop(18)

0x3a6: @ StopWorld()
0x3a7: Pop(0)
0x3a8: @ CameraTransit(Stack[-3], Stack[-5])
0x3a9: Pop(0)
0x3aa: Push(CvectorIndex(Stack[-4], 0))
0x3ab: Push(CvectorIndex(Stack[-5], 2))
0x3ac: @ Rotate(Stack[-2], Stack[-1])
0x3ad: Pop(2)
0x3ae: PushEmpty(bool)
0x3af: Call2 0x52b

0x3b0: Pop(0)
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b2: GOTO 0x3bb

0x3b3: Push("head")
0x3b4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3b5: Pop(1)
0x3b6: Push(Stack[-1])
0x3b7: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b8: Push("head")
0x3b9: @ LookAsyncCamera(Stack[-1])
0x3ba: Pop(1)
0x3bb: @ CameraWaitForPlayFinish()
0x3bc: Pop(0)
0x3bd: @ ResumeWorld()
0x3be: Pop(0)
0x3bf: Stack[-21] = (bool) 1
0x3c0: Return(); Pop(18)

0x3c1: PushEmpty(bool, bool)
0x3c2: @ CameraSwitchToNormal()
0x3c3: Pop(0)
0x3c4: PushEmpty(bool)
0x3c5: Call2 0x52b

0x3c6: Pop(0)
0x3c7: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c8: GOTO 0x3d1

0x3c9: Push("head")
0x3ca: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3cb: Pop(1)
0x3cc: Push(Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3ce: Push("head")
0x3cf: @ UnlookAsync(Stack[-1])
0x3d0: Pop(1)
0x3d1: Return(); Pop(2)

0x3d2: PushEmpty(int, int, int, int)
0x3d3: Push("voice_common")
0x3d4: @ GetVariable(Stack[-1], Stack[-3])
0x3d5: Pop(1)
0x3d6: Push(Stack[-2])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3d8: PushEmpty(bool, object)
0x3d9: Stack[-1] = Stack[-7]
0x3da: Call2 0x40c

0x3db: Pop(1)
0x3dc: Pop(1); Push((bool) Stack[-1] == 0)
0x3dd: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3de: PushEmpty(bool, object)
0x3df: Stack[-1] = Stack[-7]
0x3e0: Call2 0x431

0x3e1: Pop(1)
0x3e2: Pop(1); Push((bool) Stack[-1] == 0)
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e4: Stack[-6] = (bool) 0
0x3e5: Return(); Pop(4)

0x3e6: Push((int) 2)
0x3e7: @ irand(Stack[-2], Stack[-1])
0x3e8: Pop(1)
0x3e9: Push(Stack[-1])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3eb: Push("voice_common")
0x3ec: Push((int) 1)
0x3ed: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3ee: Push((int) 3)
0x3ef: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3f0: @ SetVariable(Stack[-2], Stack[-1])
0x3f1: Pop(2)
0x3f2: GOTO 0x3f7

0x3f3: Push("voice_common")
0x3f4: Push((int) 0)
0x3f5: @ SetVariable(Stack[-2], Stack[-1])
0x3f6: Pop(2)
0x3f7: GOTO 0x40a

0x3f8: PushEmpty(bool, object)
0x3f9: Stack[-1] = Stack[-7]
0x3fa: Call2 0x431

0x3fb: Pop(1)
0x3fc: Pop(1); Push((bool) Stack[-1] == 0)
0x3fd: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x3fe: PushEmpty(bool, object)
0x3ff: Stack[-1] = Stack[-7]
0x400: Call2 0x40c

0x401: Pop(1)
0x402: Pop(1); Push((bool) Stack[-1] == 0)
0x403: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x404: Stack[-6] = (bool) 0
0x405: Return(); Pop(4)

0x406: Push("voice_common")
0x407: Push((int) 1)
0x408: @ SetVariable(Stack[-2], Stack[-1])
0x409: Pop(2)
0x40a: Stack[-6] = (bool) 1
0x40b: Return(); Pop(4)

0x40c: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x40d: Stack[-5] = "c"
0x40e: Stack[-4] = (int) 0
0x40f: Push((int) 1)
0x410: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x411: Push((int) 1)
0x412: Pop(1); Push(Stack[-5] + Stack[-1]);
0x413: Pop(1); Push(Stack[-6] + Stack[-1]);
0x414: @@ HasProperty(Stack[-1], Stack[-4])
0x415: Pop(1)
0x416: Pop(0); Push((bool) Stack[-3] == 0)
0x417: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x418: GOTO 0x41c

0x419: Push((int) 1)
0x41a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x41b: GOTO 0x40f

0x41c: Pop(0); Push((bool) Stack[-4] == 0)
0x41d: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41e: Stack[-12] = (bool) 0
0x41f: Return(); Pop(10)

0x420: Stack[-2] = (int) 0
0x421: Push((int) 1)
0x422: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x423: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x424: @ irand(Stack[-2], Stack[-4])
0x425: Pop(0)
0x426: Push((int) 1)
0x427: Pop(1); Push(Stack[-3] + Stack[-1]);
0x428: Pop(1); Push(Stack[-6] + Stack[-1]);
0x429: @@ GetProperty(Stack[-1], Stack[-2])
0x42a: Pop(1)
0x42b: PushEmpty(bool, string)
0x42c: Stack[-1] = Stack[-3]
0x42d: Call2 0x47b

0x42e: Stack[-14] = Stack[-2]
0x42f: Pop(2)
0x430: Return(); Pop(10)

0x431: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x432: Push("d")
0x433: PushEmpty(int)
0x434: Call2 0x4a6

0x435: Pop(0)
0x436: Pop(2); Push(Stack[-2] + Stack[-1]);
0x437: Push("m")
0x438: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x439: Stack[-4] = (int) 0
0x43a: Push((int) 1)
0x43b: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x43c: Push((int) 1)
0x43d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x43e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x43f: @@ HasProperty(Stack[-1], Stack[-4])
0x440: Pop(1)
0x441: Pop(0); Push((bool) Stack[-3] == 0)
0x442: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x443: GOTO 0x447

0x444: Push((int) 1)
0x445: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x446: GOTO 0x43a

0x447: Pop(0); Push((bool) Stack[-4] == 0)
0x448: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x449: Stack[-12] = (bool) 0
0x44a: Return(); Pop(10)

0x44b: Stack[-2] = (int) 0
0x44c: Push((int) 1)
0x44d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x44e: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44f: @ irand(Stack[-2], Stack[-4])
0x450: Pop(0)
0x451: Push((int) 1)
0x452: Pop(1); Push(Stack[-3] + Stack[-1]);
0x453: Pop(1); Push(Stack[-6] + Stack[-1]);
0x454: @@ GetProperty(Stack[-1], Stack[-2])
0x455: Pop(1)
0x456: PushEmpty(bool, string)
0x457: Stack[-1] = Stack[-3]
0x458: Call2 0x47b

0x459: Stack[-14] = Stack[-2]
0x45a: Pop(2)
0x45b: Return(); Pop(10)

0x45c: PushEmpty(bool, float, float, bool, float, float)
0x45d: @ lshHasAnimation(Stack[-3], Stack[-7])
0x45e: Pop(0)
0x45f: Push(Stack[-3])
0x460: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x461: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x462: Pop(0)
0x463: Push((bool) 0)
0x464: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x465: Pop(1)
0x466: GOTO 0x46b

0x467: Push("Can't find lsh animation : ")
0x468: Pop(1); Push(Stack[-1] + Stack[-8]);
0x469: @ Trace(Stack[-1])
0x46a: Pop(1)
0x46b: Return(); Pop(6)

0x46c: PushEmpty(bool, float, float, bool, float, float)
0x46d: @ lshHasAnimation(Stack[-3], Stack[-8])
0x46e: Pop(0)
0x46f: Push(Stack[-3])
0x470: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x471: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x472: Pop(0)
0x473: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x474: Pop(0)
0x475: GOTO 0x47a

0x476: Push("Can't find lsh animation : ")
0x477: Pop(1); Push(Stack[-1] + Stack[-9]);
0x478: @ Trace(Stack[-1])
0x479: Pop(1)
0x47a: Return(); Pop(6)

0x47b: PushEmpty(bool, bool)
0x47c: PushEmpty(bool)
0x47d: Call2 0x52b

0x47e: Pop(0)
0x47f: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x480: @ lshHasSpeech(Stack[-1], Stack[-3])
0x481: Pop(0)
0x482: Push(Stack[-1])
0x483: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x484: @ lshPlaySpeech(Stack[-3])
0x485: Pop(0)
0x486: Stack[-4] = (bool) 1
0x487: Return(); Pop(2)

0x488: Stack[-4] = (bool) 0
0x489: Return(); Pop(2)

0x48a: PushEmpty(bool)
0x48b: Call2 0x52b

0x48c: Pop(0)
0x48d: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48e: @ lshStopSpeech()
0x48f: Pop(0)
0x490: Return(); Pop(0)

0x491: PushEmpty(object, object)
0x492: @ self(Stack[-1])
0x493: Pop(0)
0x494: Stack[-3] = Stack[-1]
0x495: Return(); Pop(2)

0x496: Stack[-1] = 0
0x497: PushEmpty(float, float)
0x498: Pop(0); Push(Stack[-3] | Stack[-3]);
0x499: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x49a: Push((float)0.0)
0x49b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x49c: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x49d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x49e: Return(); Pop(2)

0x49f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4a0: Return(); Pop(2)

0x4a1: PushEmpty(int, int)
0x4a2: @ GetVariable(Stack[-3], Stack[-1])
0x4a3: Pop(0)
0x4a4: Stack[-4] = Stack[-1]
0x4a5: Return(); Pop(2)

0x4a6: PushEmpty(float, float)
0x4a7: @ GetGameTime(Stack[-1])
0x4a8: Pop(0)
0x4a9: Push((int) 1)
0x4aa: PushEmpty(int)
0x4ab: Push((int) 24)
0x4ac: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x4ad: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x4ae: Return(); Pop(2)

0x4af: PushEmpty(string, string)
0x4b0: Stack[-1] = "idle"
0x4b1: Push(Stack[-3])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b3: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4b4: Stack[-4] = Stack[-1]
0x4b5: Return(); Pop(2)

0x4b6: PushEmpty(int, bool, int, bool)
0x4b7: Stack[-2] = (int) 0
0x4b8: Push("all")
0x4b9: PushEmpty(string, int)
0x4ba: Stack[-1] = Stack[-5]
0x4bb: Call2 0x4af

0x4bc: Pop(1)
0x4bd: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4be: Pop(2)
0x4bf: Pop(0); Push((bool) Stack[-1] == 0)
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c1: GOTO 0x4c5

0x4c2: Push((int) 1)
0x4c3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4c4: GOTO 0x4b8

0x4c5: Stack[-5] = Stack[-2]
0x4c6: Return(); Pop(4)

0x4c7: PushEmpty()
0x4c8: Push("k11q01")
0x4c9: Push((int) 4)
0x4ca: @ SetVariable(Stack[-2], Stack[-1])
0x4cb: Pop(2)
0x4cc: PushEmpty()
0x4cd: Call2 0x4dc

0x4ce: Pop(0)
0x4cf: Return(); Pop(0)

0x4d0: PushEmpty()
0x4d1: PushEmpty(int, string)
0x4d2: Stack[-1] = "k11q01"
0x4d3: Call2 0x4a1

0x4d4: Pop(1)
0x4d5: Push((int) 3)
0x4d6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4d7: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d8: Stack[-2] = (bool) 1
0x4d9: Return(); Pop(0)

0x4da: Stack[-2] = (bool) 0
0x4db: Return(); Pop(0)

0x4dc: PushEmpty(object, object)
0x4dd: Push((int) 487)
0x4de: Push((int) 1)
0x4df: Push((int) 528054)
0x4e0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4e1: Pop(3)
0x4e2: PushEmpty(bool, object, int)
0x4e3: Stack[-2] = Stack[-4]
0x4e4: Stack[-1] = (int) 480
0x4e5: Call2 0x4f6

0x4e6: Pop(3)
0x4e7: Return(); Pop(2)

0x4e8: Stack[-1] = 0
0x4e9: PushEmpty(object, object)
0x4ea: @ GetDiaryRoot(Stack[-1])
0x4eb: Pop(0)
0x4ec: Pop(0); Push((bool) Stack[-1] == 0)
0x4ed: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4ee: Push("Can't retrieve diary root")
0x4ef: @ Trace(Stack[-1])
0x4f0: Pop(1)
0x4f1: Stack[-3] = (bool) 0
0x4f2: Return(); Pop(2)

0x4f3: Stack[-3] = Stack[-1]
0x4f4: Return(); Pop(2)

0x4f5: Stack[-1] = 0
0x4f6: PushEmpty(object, object, int, object, object, int)
0x4f7: PushEmpty(object)
0x4f8: Call2 0x4e9

0x4f9: Stack[-4] = Stack[-1]
0x4fa: Pop(1)
0x4fb: @@ Find(Stack[-7], Stack[-2])
0x4fc: Pop(0)
0x4fd: Pop(0); Push((bool) Stack[-2] == 0)
0x4fe: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x4ff: Push("Can't find diary parent with id: ")
0x500: Pop(1); Push(Stack[-1] + Stack[-8]);
0x501: @ Trace(Stack[-1])
0x502: Pop(1)
0x503: Stack[-9] = (bool) 0
0x504: Return(); Pop(6)

0x505: @@ AddChild(Stack[-8])
0x506: Pop(0)
0x507: Push((int) 7)
0x508: @ SendWorldWndMessage(Stack[-1])
0x509: Pop(1)
0x50a: @@ GetCategory(Stack[-1])
0x50b: Pop(0)
0x50c: @ SetDiarySection(Stack[-1])
0x50d: Pop(0)
0x50e: Stack[-9] = (bool) 0
0x50f: Return(); Pop(6)

0x510: Stack[-2] = 0
0x511: Stack[-3] = 0
0x512: PushEmpty(int, int)
0x513: Push("branch")
0x514: @ GetVariable(Stack[-1], Stack[-2])
0x515: Pop(1)
0x516: Push((int) 0)
0x517: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x518: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x519: Stack[-3] = (int) 1
0x51a: Return(); Pop(2)

0x51b: GOTO 0x521

0x51c: Push((int) 1)
0x51d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x51e: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x51f: Stack[-3] = (int) 2
0x520: Return(); Pop(2)

0x521: Stack[-3] = (int) 3
0x522: Return(); Pop(2)

0x523: Stack[-1] = (int) 515573
0x524: Return(); Pop(0)

0x525: Stack[-1] = (int) 504032
0x526: Return(); Pop(0)

0x527: Stack[-1] = "ui/NPC_Bakalavr.png"
0x528: Return(); Pop(0)

0x529: Stack[-1] = "ui/NPC_Bakalavr_b.png"
0x52a: Return(); Pop(0)

0x52b: Stack[-1] = (bool) 1
0x52c: Return(); Pop(0)

