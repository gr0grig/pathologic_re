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
	Doubt
	Grin
	Questioning
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
	ui/NPC_Han.png
	ui/NPC_Han_b.png
	k9q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	mt_han

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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x448
RunTask = 8

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x222 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x320 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x41e Vars = (int, int)
	GTASK_8 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x491 Vars = (int)
		EVENT_6 Op = 0x4b7 Vars = ()
		EVENT_5 Op = 0x4c6 Vars = ()
		EVENT_45 Op = 0x4d3 Vars = (bool)
		EVENT_0 Op = 0x4df Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x568

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x6ba

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x6b8

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x6bc

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x6be

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x70d

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
0x31: Call2 0x67c

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x5bd

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
0x48: Call2 0x5ac

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
0x5b: Push((int) 526521)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x6cb

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 526522)
0x66: Push((int) 27789)
0x67: Push((int) 27788)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 526525)
0x6b: Push((int) -1)
0x6c: Push((int) 27791)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 541603)
0x70: Push((int) -1)
0x71: Push((int) 43771)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x77

0x75: Return(); Pop(0)

0x76: GOTO 0x55

0x77: PushEmpty(bool)
0x78: Call2 0x6c0

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @ lshWaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: PushEmpty(string)
0x81: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x82: Call2 0x647

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
0x97: Call2 0x6c0

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
0xa7: Call2 0x657

0xa8: Pop(2)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0xae: PushEmpty()
0xaf: Call2 0x675

0xb0: Pop(0)
0xb1: Push((int) 30413)
0xb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0x6c2

0xb8: Pop(2)
0xb9: Push((int) 27787)
0xba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xbc: PushEmpty(string)
0xbd: Stack[-1] = "Neutral"
0xbe: Call2 0x95

0xbf: Pop(1)
0xc0: Push((int) 526521)
0xc1: @@ SetMessage(Stack[-1])
0xc2: Pop(1)
0xc3: @@ ClearReplies()
0xc4: Pop(0)
0xc5: PushEmpty(bool, object)
0xc6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc7: Call2 0x6cb

0xc8: Pop(1)
0xc9: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xca: Push((int) 526522)
0xcb: Push((int) 27789)
0xcc: Push((int) 27788)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 526525)
0xd0: Push((int) -1)
0xd1: Push((int) 27791)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Push((int) 541603)
0xd5: Push((int) -1)
0xd6: Push((int) 43771)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Return(); Pop(0)

0xda: Push((int) 27789)
0xdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xdd: PushEmpty(string)
0xde: Stack[-1] = "Doubt"
0xdf: Call2 0x95

0xe0: Pop(1)
0xe1: Push((int) 526523)
0xe2: @@ SetMessage(Stack[-1])
0xe3: Pop(1)
0xe4: @@ ClearReplies()
0xe5: Pop(0)
0xe6: Push((int) 526524)
0xe7: Push((int) 30396)
0xe8: Push((int) 27790)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Push((int) 528967)
0xec: Push((int) 30396)
0xed: Push((int) 30402)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Return(); Pop(0)

0xf1: Push((int) 30396)
0xf2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xf4: PushEmpty(string)
0xf5: Stack[-1] = "Doubt"
0xf6: Call2 0x95

0xf7: Pop(1)
0xf8: Push((int) 528961)
0xf9: @@ SetMessage(Stack[-1])
0xfa: Pop(1)
0xfb: @@ ClearReplies()
0xfc: Pop(0)
0xfd: Push((int) 528962)
0xfe: Push((int) 30398)
0xff: Push((int) 30397)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Push((int) 30398)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral"
0x108: Call2 0x95

0x109: Pop(1)
0x10a: Push((int) 528963)
0x10b: @@ SetMessage(Stack[-1])
0x10c: Pop(1)
0x10d: @@ ClearReplies()
0x10e: Pop(0)
0x10f: Push((int) 528964)
0x110: Push((int) 30400)
0x111: Push((int) 30399)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: Return(); Pop(0)

0x115: Push((int) 30400)
0x116: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x118: PushEmpty(string)
0x119: Stack[-1] = "Grin"
0x11a: Call2 0x95

0x11b: Pop(1)
0x11c: Push((int) 528965)
0x11d: @@ SetMessage(Stack[-1])
0x11e: Pop(1)
0x11f: @@ ClearReplies()
0x120: Pop(0)
0x121: Push((int) 528968)
0x122: Push((int) 30405)
0x123: Push((int) 30404)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: Return(); Pop(0)

0x127: Push((int) 30405)
0x128: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x12a: PushEmpty(string)
0x12b: Stack[-1] = "Doubt"
0x12c: Call2 0x95

0x12d: Pop(1)
0x12e: Push((int) 528969)
0x12f: @@ SetMessage(Stack[-1])
0x130: Pop(1)
0x131: @@ ClearReplies()
0x132: Pop(0)
0x133: Push((int) 528970)
0x134: Push((int) 30407)
0x135: Push((int) 30406)
0x136: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x137: Pop(3)
0x138: Return(); Pop(0)

0x139: Push((int) 30407)
0x13a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x13c: PushEmpty(string)
0x13d: Stack[-1] = "Questioning"
0x13e: Call2 0x95

0x13f: Pop(1)
0x140: Push((int) 528971)
0x141: @@ SetMessage(Stack[-1])
0x142: Pop(1)
0x143: @@ ClearReplies()
0x144: Pop(0)
0x145: Push((int) 528966)
0x146: Push((int) 30411)
0x147: Push((int) 30401)
0x148: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x149: Pop(3)
0x14a: Push((int) 528972)
0x14b: Push((int) 30409)
0x14c: Push((int) 30408)
0x14d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e: Pop(3)
0x14f: Return(); Pop(0)

0x150: Push((int) 30409)
0x151: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x153: PushEmpty(string)
0x154: Stack[-1] = "Neutral"
0x155: Call2 0x95

0x156: Pop(1)
0x157: Push((int) 528973)
0x158: @@ SetMessage(Stack[-1])
0x159: Pop(1)
0x15a: @@ ClearReplies()
0x15b: Pop(0)
0x15c: Push((int) 528974)
0x15d: Push((int) 30411)
0x15e: Push((int) 30410)
0x15f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x160: Pop(3)
0x161: Return(); Pop(0)

0x162: Push((int) 30411)
0x163: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x165: PushEmpty(string)
0x166: Stack[-1] = "Neutral"
0x167: Call2 0x95

0x168: Pop(1)
0x169: Push((int) 528975)
0x16a: @@ SetMessage(Stack[-1])
0x16b: Pop(1)
0x16c: @@ ClearReplies()
0x16d: Pop(0)
0x16e: Push((int) 528976)
0x16f: Push((int) -1)
0x170: Push((int) 30413)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: Return(); Pop(0)

0x174: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x175: PushEmpty(bool)
0x176: Call2 0x6c0

0x177: Pop(0)
0x178: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x179: @ lshStopAnimation()
0x17a: Pop(0)
0x17b: GOTO 0x17e

0x17c: @ StopAnimation()
0x17d: Pop(0)
0x17e: Return(); Pop(0)

0x17f: GOTO 0xac

0x180: Return(); Pop(0)

0x181: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x182: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x183: PushEmpty(bool, object, float)
0x184: Stack[-2] = Stack[-12]
0x185: Stack[-1] = (float) 70.0
0x186: Call2 0x568

0x187: Pop(2)
0x188: Pop(1); Push((bool) Stack[-1] == 0)
0x189: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x18a: Stack[-10] = (int) -2
0x18b: Return(); Pop(8)

0x18c: @ CreateDialog(Stack[-4])
0x18d: Pop(0)
0x18e: PushEmpty(int)
0x18f: Call2 0x6ba

0x190: Pop(0)
0x191: @@ SetNPCName(Stack[-1])
0x192: Pop(1)
0x193: PushEmpty(int)
0x194: Call2 0x6b8

0x195: Pop(0)
0x196: @@ SetNPCDescription(Stack[-1])
0x197: Pop(1)
0x198: PushEmpty(string)
0x199: Call2 0x6bc

0x19a: Pop(0)
0x19b: @@ SetPhoto(Stack[-1])
0x19c: Pop(1)
0x19d: PushEmpty(string)
0x19e: Call2 0x6be

0x19f: Pop(0)
0x1a0: @@ SetPhoto2(Stack[-1])
0x1a1: Pop(1)
0x1a2: PushEmpty(int)
0x1a3: Call2 0x70d

0x1a4: Pop(0)
0x1a5: @@ SetPlayerName(Stack[-1])
0x1a6: Pop(1)
0x1a7: Stack[-2] = (int) -1
0x1a8: @ IsOverrideActive(Stack[-3])
0x1a9: Pop(0)
0x1aa: Push(Stack[-3])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ac: Stack[-10] = (int) -2
0x1ad: Return(); Pop(8)

0x1ae: @ DoDialog(Stack[-4])
0x1af: Pop(0)
0x1b0: PushEmpty(bool, object)
0x1b1: PushEmpty(object)
0x1b2: Call2 0x67c

0x1b3: Stack[-2] = Stack[-1]
0x1b4: Pop(1)
0x1b5: Call2 0x5bd

0x1b6: Pop(2)
0x1b7: PushEmpty(object, object)
0x1b8: Stack[-2] = Stack[-11]
0x1b9: Stack[-1] = Stack[-6]
0x1ba: Push(-2, 4); TaskCall(3)
0x1bb: Call2 0x1d2

0x1bc: Pop(-2, 4); TaskReturn
0x1bd: Pop(2)
0x1be: @@ IsDialogEnd(Stack[-1])
0x1bf: Pop(0)
0x1c0: Pop(0); Push((bool) Stack[-1] == 0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c2: @ sync()
0x1c3: Pop(0)
0x1c4: @@ IsDialogEnd(Stack[-1])
0x1c5: Pop(0)
0x1c6: GOTO 0x1c0

0x1c7: PushEmpty(object)
0x1c8: Stack[-1] = Stack[-10]
0x1c9: Call2 0x5ac

0x1ca: Pop(1)
0x1cb: @ StopDialog(Stack[-4])
0x1cc: Pop(0)
0x1cd: @@ GetReturnValue(Stack[-2])
0x1ce: Pop(0)
0x1cf: Stack[-10] = Stack[-2]
0x1d0: Return(); Pop(8)

0x1d1: Stack[-4] = 0
0x1d2: PushEmpty()
0x1d3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1d4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1d5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1d6: Push((int) 1)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1d8: PushEmpty(string)
0x1d9: Stack[-1] = "Neutral"
0x1da: Call2 0x20c

0x1db: Pop(1)
0x1dc: Push((int) 529675)
0x1dd: @@ SetMessage(Stack[-1])
0x1de: Pop(1)
0x1df: @@ ClearReplies()
0x1e0: Pop(0)
0x1e1: Push((int) 529676)
0x1e2: Push((int) 43773)
0x1e3: Push((int) 31139)
0x1e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e5: Pop(3)
0x1e6: Push((int) 541604)
0x1e7: Push((int) 43774)
0x1e8: Push((int) 43772)
0x1e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ea: Pop(3)
0x1eb: GOTO 0x1ee

0x1ec: Return(); Pop(0)

0x1ed: GOTO 0x1d6

0x1ee: PushEmpty(bool)
0x1ef: Call2 0x6c0

0x1f0: Pop(0)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f2: @ lshWaitForAnimEnd()
0x1f3: Pop(0)
0x1f4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: GOTO 0x1fc

0x1f7: PushEmpty(string)
0x1f8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1f9: Call2 0x647

0x1fa: Pop(1)
0x1fb: GOTO 0x1f2

0x1fc: GOTO 0x20b

0x1fd: Push("all")
0x1fe: Push("idle")
0x1ff: @ PlayAnimation(Stack[-2], Stack[-1])
0x200: Pop(2)
0x201: @ WaitForAnimEnd()
0x202: Pop(0)
0x203: Push( Stack[3 + Tasks[-1].StackPointer] )
0x204: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x205: GOTO 0x20b

0x206: Push("all")
0x207: Push("idle")
0x208: @ PlayAnimation(Stack[-2], Stack[-1])
0x209: Pop(2)
0x20a: GOTO 0x201

0x20b: Return(); Pop(0)

0x20c: PushEmpty()
0x20d: PushEmpty(bool)
0x20e: Call2 0x6c0

0x20f: Pop(0)
0x210: Pop(1); Push((bool) Stack[-1] == 0)
0x211: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x212: Return(); Pop(0)

0x213: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x214: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x215: Return(); Pop(0)

0x216: PushEmpty(string, bool)
0x217: Stack[-2] = Stack[-3]
0x218: Push("")
0x219: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21b: Stack[-1] = (bool) 0
0x21c: GOTO 0x21e

0x21d: Stack[-1] = (bool) 1
0x21e: Call2 0x657

0x21f: Pop(2)
0x220: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x221: Return(); Pop(0)

0x222: PushEmpty()
0x223: Push((int) 1)
0x224: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x225: PushEmpty()
0x226: Call2 0x675

0x227: Pop(0)
0x228: Push((int) 31138)
0x229: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x22b: PushEmpty(string)
0x22c: Stack[-1] = "Neutral"
0x22d: Call2 0x20c

0x22e: Pop(1)
0x22f: Push((int) 529675)
0x230: @@ SetMessage(Stack[-1])
0x231: Pop(1)
0x232: @@ ClearReplies()
0x233: Pop(0)
0x234: Push((int) 529676)
0x235: Push((int) 43773)
0x236: Push((int) 31139)
0x237: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x238: Pop(3)
0x239: Push((int) 541604)
0x23a: Push((int) 43774)
0x23b: Push((int) 43772)
0x23c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23d: Pop(3)
0x23e: Return(); Pop(0)

0x23f: Push((int) 43774)
0x240: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x242: PushEmpty(string)
0x243: Stack[-1] = "Neutral"
0x244: Call2 0x20c

0x245: Pop(1)
0x246: Push((int) 541606)
0x247: @@ SetMessage(Stack[-1])
0x248: Pop(1)
0x249: @@ ClearReplies()
0x24a: Pop(0)
0x24b: Push((int) 541607)
0x24c: Push((int) 43773)
0x24d: Push((int) 43775)
0x24e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24f: Pop(3)
0x250: Push((int) 541608)
0x251: Push((int) 43773)
0x252: Push((int) 43776)
0x253: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x254: Pop(3)
0x255: Return(); Pop(0)

0x256: Push((int) 43773)
0x257: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x259: PushEmpty(string)
0x25a: Stack[-1] = "Neutral"
0x25b: Call2 0x20c

0x25c: Pop(1)
0x25d: Push((int) 541605)
0x25e: @@ SetMessage(Stack[-1])
0x25f: Pop(1)
0x260: @@ ClearReplies()
0x261: Pop(0)
0x262: Push((int) 541609)
0x263: Push((int) -1)
0x264: Push((int) 43778)
0x265: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x266: Pop(3)
0x267: Push((int) 541610)
0x268: Push((int) -1)
0x269: Push((int) 43781)
0x26a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26b: Pop(3)
0x26c: Return(); Pop(0)

0x26d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x26e: PushEmpty(bool)
0x26f: Call2 0x6c0

0x270: Pop(0)
0x271: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x272: @ lshStopAnimation()
0x273: Pop(0)
0x274: GOTO 0x277

0x275: @ StopAnimation()
0x276: Pop(0)
0x277: Return(); Pop(0)

0x278: GOTO 0x223

0x279: Return(); Pop(0)

0x27a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x27b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x27c: PushEmpty(bool, object, float)
0x27d: Stack[-2] = Stack[-12]
0x27e: Stack[-1] = (float) 70.0
0x27f: Call2 0x568

0x280: Pop(2)
0x281: Pop(1); Push((bool) Stack[-1] == 0)
0x282: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x283: Stack[-10] = (int) -2
0x284: Return(); Pop(8)

0x285: @ CreateDialog(Stack[-4])
0x286: Pop(0)
0x287: PushEmpty(int)
0x288: Call2 0x6ba

0x289: Pop(0)
0x28a: @@ SetNPCName(Stack[-1])
0x28b: Pop(1)
0x28c: PushEmpty(int)
0x28d: Call2 0x6b8

0x28e: Pop(0)
0x28f: @@ SetNPCDescription(Stack[-1])
0x290: Pop(1)
0x291: PushEmpty(string)
0x292: Call2 0x6bc

0x293: Pop(0)
0x294: @@ SetPhoto(Stack[-1])
0x295: Pop(1)
0x296: PushEmpty(string)
0x297: Call2 0x6be

0x298: Pop(0)
0x299: @@ SetPhoto2(Stack[-1])
0x29a: Pop(1)
0x29b: PushEmpty(int)
0x29c: Call2 0x70d

0x29d: Pop(0)
0x29e: @@ SetPlayerName(Stack[-1])
0x29f: Pop(1)
0x2a0: Stack[-2] = (int) -1
0x2a1: @ IsOverrideActive(Stack[-3])
0x2a2: Pop(0)
0x2a3: Push(Stack[-3])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a5: Stack[-10] = (int) -2
0x2a6: Return(); Pop(8)

0x2a7: @ DoDialog(Stack[-4])
0x2a8: Pop(0)
0x2a9: PushEmpty(bool, object)
0x2aa: PushEmpty(object)
0x2ab: Call2 0x67c

0x2ac: Stack[-2] = Stack[-1]
0x2ad: Pop(1)
0x2ae: Call2 0x5bd

0x2af: Pop(2)
0x2b0: PushEmpty(object, object)
0x2b1: Stack[-2] = Stack[-11]
0x2b2: Stack[-1] = Stack[-6]
0x2b3: Push(-2, 4); TaskCall(5)
0x2b4: Call2 0x2cb

0x2b5: Pop(-2, 4); TaskReturn
0x2b6: Pop(2)
0x2b7: @@ IsDialogEnd(Stack[-1])
0x2b8: Pop(0)
0x2b9: Pop(0); Push((bool) Stack[-1] == 0)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bb: @ sync()
0x2bc: Pop(0)
0x2bd: @@ IsDialogEnd(Stack[-1])
0x2be: Pop(0)
0x2bf: GOTO 0x2b9

0x2c0: PushEmpty(object)
0x2c1: Stack[-1] = Stack[-10]
0x2c2: Call2 0x5ac

0x2c3: Pop(1)
0x2c4: @ StopDialog(Stack[-4])
0x2c5: Pop(0)
0x2c6: @@ GetReturnValue(Stack[-2])
0x2c7: Pop(0)
0x2c8: Stack[-10] = Stack[-2]
0x2c9: Return(); Pop(8)

0x2ca: Stack[-4] = 0
0x2cb: PushEmpty()
0x2cc: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2cd: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2ce: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2cf: Push((int) 1)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2d1: PushEmpty(string)
0x2d2: Stack[-1] = "Neutral"
0x2d3: Call2 0x30a

0x2d4: Pop(1)
0x2d5: Push((int) 535284)
0x2d6: @@ SetMessage(Stack[-1])
0x2d7: Pop(1)
0x2d8: @@ ClearReplies()
0x2d9: Pop(0)
0x2da: Push((int) 535285)
0x2db: Push((int) 36962)
0x2dc: Push((int) 36961)
0x2dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2de: Pop(3)
0x2df: Push((int) 535292)
0x2e0: Push((int) -1)
0x2e1: Push((int) 36968)
0x2e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e3: Pop(3)
0x2e4: Push((int) 535293)
0x2e5: Push((int) -1)
0x2e6: Push((int) 36969)
0x2e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e8: Pop(3)
0x2e9: GOTO 0x2ec

0x2ea: Return(); Pop(0)

0x2eb: GOTO 0x2cf

0x2ec: PushEmpty(bool)
0x2ed: Call2 0x6c0

0x2ee: Pop(0)
0x2ef: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2f0: @ lshWaitForAnimEnd()
0x2f1: Pop(0)
0x2f2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f4: GOTO 0x2fa

0x2f5: PushEmpty(string)
0x2f6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2f7: Call2 0x647

0x2f8: Pop(1)
0x2f9: GOTO 0x2f0

0x2fa: GOTO 0x309

0x2fb: Push("all")
0x2fc: Push("idle")
0x2fd: @ PlayAnimation(Stack[-2], Stack[-1])
0x2fe: Pop(2)
0x2ff: @ WaitForAnimEnd()
0x300: Pop(0)
0x301: Push( Stack[3 + Tasks[-1].StackPointer] )
0x302: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x303: GOTO 0x309

0x304: Push("all")
0x305: Push("idle")
0x306: @ PlayAnimation(Stack[-2], Stack[-1])
0x307: Pop(2)
0x308: GOTO 0x2ff

0x309: Return(); Pop(0)

0x30a: PushEmpty()
0x30b: PushEmpty(bool)
0x30c: Call2 0x6c0

0x30d: Pop(0)
0x30e: Pop(1); Push((bool) Stack[-1] == 0)
0x30f: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x310: Return(); Pop(0)

0x311: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x312: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x313: Return(); Pop(0)

0x314: PushEmpty(string, bool)
0x315: Stack[-2] = Stack[-3]
0x316: Push("")
0x317: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x318: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x319: Stack[-1] = (bool) 0
0x31a: GOTO 0x31c

0x31b: Stack[-1] = (bool) 1
0x31c: Call2 0x657

0x31d: Pop(2)
0x31e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x31f: Return(); Pop(0)

0x320: PushEmpty()
0x321: Push((int) 1)
0x322: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x323: PushEmpty()
0x324: Call2 0x675

0x325: Pop(0)
0x326: Push((int) 36960)
0x327: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x329: PushEmpty(string)
0x32a: Stack[-1] = "Neutral"
0x32b: Call2 0x30a

0x32c: Pop(1)
0x32d: Push((int) 535284)
0x32e: @@ SetMessage(Stack[-1])
0x32f: Pop(1)
0x330: @@ ClearReplies()
0x331: Pop(0)
0x332: Push((int) 535285)
0x333: Push((int) 36962)
0x334: Push((int) 36961)
0x335: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x336: Pop(3)
0x337: Push((int) 535292)
0x338: Push((int) -1)
0x339: Push((int) 36968)
0x33a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33b: Pop(3)
0x33c: Push((int) 535293)
0x33d: Push((int) -1)
0x33e: Push((int) 36969)
0x33f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x340: Pop(3)
0x341: Return(); Pop(0)

0x342: Push((int) 36962)
0x343: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x345: PushEmpty(string)
0x346: Stack[-1] = "Neutral"
0x347: Call2 0x30a

0x348: Pop(1)
0x349: Push((int) 535286)
0x34a: @@ SetMessage(Stack[-1])
0x34b: Pop(1)
0x34c: @@ ClearReplies()
0x34d: Pop(0)
0x34e: Push((int) 535287)
0x34f: Push((int) 36964)
0x350: Push((int) 36963)
0x351: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x352: Pop(3)
0x353: Push((int) 535291)
0x354: Push((int) -1)
0x355: Push((int) 36967)
0x356: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x357: Pop(3)
0x358: Return(); Pop(0)

0x359: Push((int) 36964)
0x35a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x35c: PushEmpty(string)
0x35d: Stack[-1] = "Neutral"
0x35e: Call2 0x30a

0x35f: Pop(1)
0x360: Push((int) 535288)
0x361: @@ SetMessage(Stack[-1])
0x362: Pop(1)
0x363: @@ ClearReplies()
0x364: Pop(0)
0x365: Push((int) 535289)
0x366: Push((int) -1)
0x367: Push((int) 36965)
0x368: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x369: Pop(3)
0x36a: Push((int) 535290)
0x36b: Push((int) -1)
0x36c: Push((int) 36966)
0x36d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36e: Pop(3)
0x36f: Return(); Pop(0)

0x370: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x371: PushEmpty(bool)
0x372: Call2 0x6c0

0x373: Pop(0)
0x374: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x375: @ lshStopAnimation()
0x376: Pop(0)
0x377: GOTO 0x37a

0x378: @ StopAnimation()
0x379: Pop(0)
0x37a: Return(); Pop(0)

0x37b: GOTO 0x321

0x37c: Return(); Pop(0)

0x37d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x37e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x37f: PushEmpty(bool, object, float)
0x380: Stack[-2] = Stack[-12]
0x381: Stack[-1] = (float) 70.0
0x382: Call2 0x568

0x383: Pop(2)
0x384: Pop(1); Push((bool) Stack[-1] == 0)
0x385: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x386: Stack[-10] = (int) -2
0x387: Return(); Pop(8)

0x388: @ CreateDialog(Stack[-4])
0x389: Pop(0)
0x38a: PushEmpty(int)
0x38b: Call2 0x6ba

0x38c: Pop(0)
0x38d: @@ SetNPCName(Stack[-1])
0x38e: Pop(1)
0x38f: PushEmpty(int)
0x390: Call2 0x6b8

0x391: Pop(0)
0x392: @@ SetNPCDescription(Stack[-1])
0x393: Pop(1)
0x394: PushEmpty(string)
0x395: Call2 0x6bc

0x396: Pop(0)
0x397: @@ SetPhoto(Stack[-1])
0x398: Pop(1)
0x399: PushEmpty(string)
0x39a: Call2 0x6be

0x39b: Pop(0)
0x39c: @@ SetPhoto2(Stack[-1])
0x39d: Pop(1)
0x39e: PushEmpty(int)
0x39f: Call2 0x70d

0x3a0: Pop(0)
0x3a1: @@ SetPlayerName(Stack[-1])
0x3a2: Pop(1)
0x3a3: Stack[-2] = (int) -1
0x3a4: @ IsOverrideActive(Stack[-3])
0x3a5: Pop(0)
0x3a6: Push(Stack[-3])
0x3a7: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a8: Stack[-10] = (int) -2
0x3a9: Return(); Pop(8)

0x3aa: @ DoDialog(Stack[-4])
0x3ab: Pop(0)
0x3ac: PushEmpty(bool, object)
0x3ad: PushEmpty(object)
0x3ae: Call2 0x67c

0x3af: Stack[-2] = Stack[-1]
0x3b0: Pop(1)
0x3b1: Call2 0x5bd

0x3b2: Pop(2)
0x3b3: PushEmpty(object, object)
0x3b4: Stack[-2] = Stack[-11]
0x3b5: Stack[-1] = Stack[-6]
0x3b6: Push(-2, 4); TaskCall(7)
0x3b7: Call2 0x3ce

0x3b8: Pop(-2, 4); TaskReturn
0x3b9: Pop(2)
0x3ba: @@ IsDialogEnd(Stack[-1])
0x3bb: Pop(0)
0x3bc: Pop(0); Push((bool) Stack[-1] == 0)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3be: @ sync()
0x3bf: Pop(0)
0x3c0: @@ IsDialogEnd(Stack[-1])
0x3c1: Pop(0)
0x3c2: GOTO 0x3bc

0x3c3: PushEmpty(object)
0x3c4: Stack[-1] = Stack[-10]
0x3c5: Call2 0x5ac

0x3c6: Pop(1)
0x3c7: @ StopDialog(Stack[-4])
0x3c8: Pop(0)
0x3c9: @@ GetReturnValue(Stack[-2])
0x3ca: Pop(0)
0x3cb: Stack[-10] = Stack[-2]
0x3cc: Return(); Pop(8)

0x3cd: Stack[-4] = 0
0x3ce: PushEmpty()
0x3cf: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3d0: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3d1: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3d2: Push((int) 1)
0x3d3: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3d4: PushEmpty(string)
0x3d5: Stack[-1] = "Neutral"
0x3d6: Call2 0x408

0x3d7: Pop(1)
0x3d8: Push((int) 540545)
0x3d9: @@ SetMessage(Stack[-1])
0x3da: Pop(1)
0x3db: @@ ClearReplies()
0x3dc: Pop(0)
0x3dd: Push((int) 540546)
0x3de: Push((int) -1)
0x3df: Push((int) 42555)
0x3e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e1: Pop(3)
0x3e2: Push((int) 540798)
0x3e3: Push((int) -1)
0x3e4: Push((int) 42847)
0x3e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e6: Pop(3)
0x3e7: GOTO 0x3ea

0x3e8: Return(); Pop(0)

0x3e9: GOTO 0x3d2

0x3ea: PushEmpty(bool)
0x3eb: Call2 0x6c0

0x3ec: Pop(0)
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3ee: @ lshWaitForAnimEnd()
0x3ef: Pop(0)
0x3f0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f2: GOTO 0x3f8

0x3f3: PushEmpty(string)
0x3f4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3f5: Call2 0x647

0x3f6: Pop(1)
0x3f7: GOTO 0x3ee

0x3f8: GOTO 0x407

0x3f9: Push("all")
0x3fa: Push("idle")
0x3fb: @ PlayAnimation(Stack[-2], Stack[-1])
0x3fc: Pop(2)
0x3fd: @ WaitForAnimEnd()
0x3fe: Pop(0)
0x3ff: Push( Stack[3 + Tasks[-1].StackPointer] )
0x400: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x401: GOTO 0x407

0x402: Push("all")
0x403: Push("idle")
0x404: @ PlayAnimation(Stack[-2], Stack[-1])
0x405: Pop(2)
0x406: GOTO 0x3fd

0x407: Return(); Pop(0)

0x408: PushEmpty()
0x409: PushEmpty(bool)
0x40a: Call2 0x6c0

0x40b: Pop(0)
0x40c: Pop(1); Push((bool) Stack[-1] == 0)
0x40d: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40e: Return(); Pop(0)

0x40f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x410: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x411: Return(); Pop(0)

0x412: PushEmpty(string, bool)
0x413: Stack[-2] = Stack[-3]
0x414: Push("")
0x415: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x416: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x417: Stack[-1] = (bool) 0
0x418: GOTO 0x41a

0x419: Stack[-1] = (bool) 1
0x41a: Call2 0x657

0x41b: Pop(2)
0x41c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x41d: Return(); Pop(0)

0x41e: PushEmpty()
0x41f: Push((int) 1)
0x420: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x421: PushEmpty()
0x422: Call2 0x675

0x423: Pop(0)
0x424: Push((int) 42554)
0x425: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x426: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x427: PushEmpty(string)
0x428: Stack[-1] = "Neutral"
0x429: Call2 0x408

0x42a: Pop(1)
0x42b: Push((int) 540545)
0x42c: @@ SetMessage(Stack[-1])
0x42d: Pop(1)
0x42e: @@ ClearReplies()
0x42f: Pop(0)
0x430: Push((int) 540546)
0x431: Push((int) -1)
0x432: Push((int) 42555)
0x433: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x434: Pop(3)
0x435: Push((int) 540798)
0x436: Push((int) -1)
0x437: Push((int) 42847)
0x438: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x439: Pop(3)
0x43a: Return(); Pop(0)

0x43b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x43c: PushEmpty(bool)
0x43d: Call2 0x6c0

0x43e: Pop(0)
0x43f: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x440: @ lshStopAnimation()
0x441: Pop(0)
0x442: GOTO 0x445

0x443: @ StopAnimation()
0x444: Pop(0)
0x445: Return(); Pop(0)

0x446: GOTO 0x41f

0x447: Return(); Pop(0)

0x448: PushEmpty()
0x449: Call2 0x44c

0x44a: Pop(0)
0x44b: Return(); Pop(0)

0x44c: PushEmpty(bool)
0x44d: Call2 0x563

0x44e: Pop(0)
0x44f: Pop(1); Push((bool) Stack[-1] == 0)
0x450: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x451: @ Hold()
0x452: Pop(0)
0x453: @ GetDirection(Stack[-0])
0x454: Pop(0)
0x455: PushEmpty()
0x456: Call2 0x4fc

0x457: Pop(0)
0x458: GOTO 0x455

0x459: Return(); Pop(0)

0x45a: PushEmpty(object, object)
0x45b: Push("player")
0x45c: @ FindActor(Stack[-2], Stack[-1])
0x45d: Pop(1)
0x45e: Pop(0); Push((bool) Stack[-1] == 0)
0x45f: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x460: Stack[-3] = (bool) 0
0x461: Return(); Pop(2)

0x462: PushEmpty(bool, object)
0x463: Stack[-1] = Stack[-3]
0x464: Call2 0x55a

0x465: Stack[-5] = Stack[-2]
0x466: Pop(2)
0x467: Return(); Pop(2)

0x468: Stack[-1] = 0
0x469: Push(CvectorIndex(Stack[-0], 0))
0x46a: Push(CvectorIndex(Stack[-0], 2))
0x46b: @ RotateAsync(Stack[-2], Stack[-1])
0x46c: Pop(2)
0x46d: Return(); Pop(0)

0x46e: PushEmpty(object, bool, object, bool)
0x46f: Push("player")
0x470: @ FindActor(Stack[-3], Stack[-1])
0x471: Pop(1)
0x472: Pop(0); Push((bool) Stack[-2] == 0)
0x473: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x474: Stack[-5] = (bool) 0
0x475: Return(); Pop(4)

0x476: PushEmpty(float, object)
0x477: Stack[-1] = Stack[-4]
0x478: Call2 0x548

0x479: Pop(1)
0x47a: Push((float)90000.0)
0x47b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x47c: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x47d: Stack[-5] = (bool) 0
0x47e: Return(); Pop(4)

0x47f: @ CanSee(Stack[-1], Stack[-2])
0x480: Pop(0)
0x481: Stack[-5] = Stack[-1]
0x482: Return(); Pop(4)

0x483: Stack[-2] = 0
0x484: PushEmpty(float, float)
0x485: Push((int) 8)
0x486: Push((int) 16)
0x487: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x488: Pop(2)
0x489: Push((int) 10)
0x48a: @ SetTimer(Stack[-1], Stack[-2])
0x48b: Pop(1)
0x48c: Return(); Pop(2)

0x48d: Push((int) 10)
0x48e: @ KillTimer(Stack[-1])
0x48f: Pop(1)
0x490: Return(); Pop(0)

0x491: PushEmpty()
0x492: Push((int) 10)
0x493: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x494: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x495: PushEmpty()
0x496: Call2 0x48d

0x497: Pop(0)
0x498: PushEmpty(bool)
0x499: Stack[-1] = (bool) 0
0x49a: PushEmpty(bool)
0x49b: Call2 0x563

0x49c: Pop(0)
0x49d: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x49e: PushEmpty(bool)
0x49f: Call2 0x46e

0x4a0: Pop(0)
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x4a2: Stack[-1] = (bool) 1
0x4a3: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4a4: PushEmpty(bool)
0x4a5: Call2 0x45a

0x4a6: Pop(0)
0x4a7: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4a8: PushEmpty(bool, object)
0x4a9: PushEmpty(object)
0x4aa: Call2 0x67c

0x4ab: Stack[-2] = Stack[-1]
0x4ac: Pop(1)
0x4ad: Call2 0x5f7

0x4ae: Pop(2)
0x4af: GOTO 0x4b6

0x4b0: PushEmpty()
0x4b1: Call2 0x469

0x4b2: Pop(0)
0x4b3: PushEmpty()
0x4b4: Call2 0x484

0x4b5: Pop(0)
0x4b6: Return(); Pop(0)

0x4b7: PushEmpty()
0x4b8: Call2 0x543

0x4b9: Pop(0)
0x4ba: PushEmpty()
0x4bb: Call2 0x48d

0x4bc: Pop(0)
0x4bd: @ lshStopSpeech()
0x4be: Pop(0)
0x4bf: @ lshStopAnimation()
0x4c0: Pop(0)
0x4c1: @ StopAsync()
0x4c2: Pop(0)
0x4c3: @ Hold()
0x4c4: Pop(0)
0x4c5: Return(); Pop(0)

0x4c6: @ StopGroup0()
0x4c7: Pop(0)
0x4c8: PushEmpty()
0x4c9: Call2 0x48d

0x4ca: Pop(0)
0x4cb: PushEmpty(string)
0x4cc: Stack[-1] = "Neutral"
0x4cd: Call2 0x647

0x4ce: Pop(1)
0x4cf: PushEmpty()
0x4d0: Call2 0x484

0x4d1: Pop(0)
0x4d2: Return(); Pop(0)

0x4d3: PushEmpty()
0x4d4: Push(Stack[-1])
0x4d5: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d6: PushEmpty()
0x4d7: Call2 0x484

0x4d8: Pop(0)
0x4d9: GOTO 0x4de

0x4da: PushEmpty(string)
0x4db: Stack[-1] = "Neutral"
0x4dc: Call2 0x647

0x4dd: Pop(1)
0x4de: Return(); Pop(0)

0x4df: PushEmpty(bool, bool)
0x4e0: @ IsOverrideActive(Stack[-1])
0x4e1: Pop(0)
0x4e2: Pop(0); Push((bool) Stack[-1] == 0)
0x4e3: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4e4: EventDisable(0)
0x4e5: PushEmpty()
0x4e6: Call2 0x543

0x4e7: Pop(0)
0x4e8: PushEmpty(bool, object)
0x4e9: Stack[-1] = Stack[-5]
0x4ea: Call2 0x55a

0x4eb: Pop(2)
0x4ec: EventEnable(0)
0x4ed: PushEmpty(object)
0x4ee: Stack[-1] = Stack[-4]
0x4ef: Call2 0x71e

0x4f0: Pop(1)
0x4f1: PushEmpty(string)
0x4f2: Stack[-1] = "Neutral"
0x4f3: Call2 0x647

0x4f4: Pop(1)
0x4f5: PushEmpty()
0x4f6: Call2 0x48d

0x4f7: Pop(0)
0x4f8: PushEmpty()
0x4f9: Call2 0x484

0x4fa: Pop(0)
0x4fb: Return(); Pop(2)

0x4fc: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x4fd: @ WaitForAnimEnd()
0x4fe: Pop(0)
0x4ff: PushEmpty(bool)
0x500: Call2 0x563

0x501: Pop(0)
0x502: Pop(1); Push((bool) Stack[-1] == 0)
0x503: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x504: Return(); Pop(12)

0x505: PushEmpty(int)
0x506: Call2 0x6a7

0x507: Stack[-7] = Stack[-1]
0x508: Pop(1)
0x509: Stack[-5] = (int) 0
0x50a: PushEmpty(bool)
0x50b: Stack[-1] = (bool) 0
0x50c: Push((int) 5)
0x50d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x50e: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x50f: PushEmpty(bool)
0x510: Call2 0x563

0x511: Pop(0)
0x512: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x513: Stack[-1] = (bool) 1
0x514: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x515: Pop(0); Push((bool) Stack[-6] == 0)
0x516: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x517: Push((int) 3)
0x518: @ Sleep(Stack[-1], Stack[-5])
0x519: Pop(1)
0x51a: Pop(0); Push((bool) Stack[-4] == 0)
0x51b: IF (Stack[-1] == 0) GOTO 0x51d; Pop(1)

0x51c: GOTO 0x53e

0x51d: GOTO 0x533

0x51e: @ irand(Stack[-3], Stack[-6])
0x51f: Pop(0)
0x520: Push((int) 5)
0x521: @ irand(Stack[-3], Stack[-1])
0x522: Pop(1)
0x523: Push((int) 0)
0x524: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x525: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x526: Stack[-3] = (int) 0
0x527: Push("all")
0x528: PushEmpty(string, int)
0x529: Stack[-1] = Stack[-6]
0x52a: Call2 0x6a0

0x52b: Pop(1)
0x52c: @ PlayAnimation(Stack[-2], Stack[-1])
0x52d: Pop(2)
0x52e: @ WaitForAnimEnd(Stack[-1])
0x52f: Pop(0)
0x530: Pop(0); Push((bool) Stack[-1] == 0)
0x531: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x532: GOTO 0x53e

0x533: PushEmpty(bool)
0x534: Call2 0x541

0x535: Pop(0)
0x536: Pop(1); Push((bool) Stack[-1] == 0)
0x537: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x538: GOTO 0x53e

0x539: @ ResetAAS()
0x53a: Pop(0)
0x53b: Push((int) 1)
0x53c: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x53d: GOTO 0x50a

0x53e: @ ResetAAS()
0x53f: Pop(0)
0x540: Return(); Pop(12)

0x541: Stack[-1] = (bool) 1
0x542: Return(); Pop(0)

0x543: @ StopAnimation()
0x544: Pop(0)
0x545: @ StopGroup0()
0x546: Pop(0)
0x547: Return(); Pop(0)

0x548: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x549: @ GetPosition(Stack[-3])
0x54a: Pop(0)
0x54b: @@ GetPosition(Stack[-2])
0x54c: Pop(0)
0x54d: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x54e: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x54f: Return(); Pop(6)

0x550: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x551: @ GetPosition(Stack[-3])
0x552: Pop(0)
0x553: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x554: Push(CvectorIndex(Stack[-2], 0))
0x555: Push(CvectorIndex(Stack[-3], 2))
0x556: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x557: Pop(2)
0x558: Stack[-8] = Stack[-1]
0x559: Return(); Pop(6)

0x55a: PushEmpty(cvector, cvector)
0x55b: @@ GetPosition(Stack[-1])
0x55c: Pop(0)
0x55d: PushEmpty(bool, cvector)
0x55e: Stack[-1] = Stack[-3]
0x55f: Call2 0x550

0x560: Stack[-6] = Stack[-2]
0x561: Pop(2)
0x562: Return(); Pop(2)

0x563: PushEmpty(bool, bool)
0x564: @ IsLoaded(Stack[-1])
0x565: Pop(0)
0x566: Stack[-3] = Stack[-1]
0x567: Return(); Pop(2)

0x568: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x569: @@ GetPosition(Stack[-8])
0x56a: Pop(0)
0x56b: @@ GetEyesHeight(Stack[-9])
0x56c: Pop(0)
0x56d: Push(CvectorIndex(Stack[-8], 1))
0x56e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x56f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x570: @ GetPosition(Stack[-7])
0x571: Pop(0)
0x572: @ GetEyesHeight(Stack[-9])
0x573: Pop(0)
0x574: Push(CvectorIndex(Stack[-7], 1))
0x575: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x576: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x577: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x578: Push(CvectorIndex(Stack[-6], 1))
0x579: Stack[-1] = (int) 0
0x57a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x57b: Pop(0); Push(Stack[-6] | Stack[-6]);
0x57c: Pop(1); Push(Sqrt(Stack[-1]))
0x57d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x57e: Stack[-5] = -Stack[-6]; Pop(0);
0x57f: Pop(0); Push(Stack[-6] * Stack[-19]);
0x580: PushEmpty(cvector, cvector)
0x581: Push(CVector(0.0, 1.0, 0.0))
0x582: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x583: Call2 0x682

0x584: Pop(1)
0x585: Push((int) 25)
0x586: Pop(2); Push(Stack[-2] * Stack[-1]);
0x587: Pop(2); Push(Stack[-2] + Stack[-1]);
0x588: Push(CVector(0.0, 10.0, 0.0))
0x589: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x58a: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x58b: @ IsOverrideActive(Stack[-2])
0x58c: Pop(0)
0x58d: Push(Stack[-2])
0x58e: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x58f: Stack[-21] = (bool) 0
0x590: Return(); Pop(18)

0x591: @ StopWorld()
0x592: Pop(0)
0x593: @ CameraTransit(Stack[-3], Stack[-5])
0x594: Pop(0)
0x595: Push(CvectorIndex(Stack[-4], 0))
0x596: Push(CvectorIndex(Stack[-5], 2))
0x597: @ Rotate(Stack[-2], Stack[-1])
0x598: Pop(2)
0x599: PushEmpty(bool)
0x59a: Call2 0x6c0

0x59b: Pop(0)
0x59c: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59d: GOTO 0x5a6

0x59e: Push("head")
0x59f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x5a0: Pop(1)
0x5a1: Push(Stack[-1])
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a3: Push("head")
0x5a4: @ LookAsyncCamera(Stack[-1])
0x5a5: Pop(1)
0x5a6: @ CameraWaitForPlayFinish()
0x5a7: Pop(0)
0x5a8: @ ResumeWorld()
0x5a9: Pop(0)
0x5aa: Stack[-21] = (bool) 1
0x5ab: Return(); Pop(18)

0x5ac: PushEmpty(bool, bool)
0x5ad: @ CameraSwitchToNormal()
0x5ae: Pop(0)
0x5af: PushEmpty(bool)
0x5b0: Call2 0x6c0

0x5b1: Pop(0)
0x5b2: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b3: GOTO 0x5bc

0x5b4: Push("head")
0x5b5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x5b6: Pop(1)
0x5b7: Push(Stack[-1])
0x5b8: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5b9: Push("head")
0x5ba: @ UnlookAsync(Stack[-1])
0x5bb: Pop(1)
0x5bc: Return(); Pop(2)

0x5bd: PushEmpty(int, int, int, int)
0x5be: Push("voice_common")
0x5bf: @ GetVariable(Stack[-1], Stack[-3])
0x5c0: Pop(1)
0x5c1: Push(Stack[-2])
0x5c2: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5c3: PushEmpty(bool, object)
0x5c4: Stack[-1] = Stack[-7]
0x5c5: Call2 0x5f7

0x5c6: Pop(1)
0x5c7: Pop(1); Push((bool) Stack[-1] == 0)
0x5c8: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x5c9: PushEmpty(bool, object)
0x5ca: Stack[-1] = Stack[-7]
0x5cb: Call2 0x61c

0x5cc: Pop(1)
0x5cd: Pop(1); Push((bool) Stack[-1] == 0)
0x5ce: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x5cf: Stack[-6] = (bool) 0
0x5d0: Return(); Pop(4)

0x5d1: Push((int) 2)
0x5d2: @ irand(Stack[-2], Stack[-1])
0x5d3: Pop(1)
0x5d4: Push(Stack[-1])
0x5d5: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5d6: Push("voice_common")
0x5d7: Push((int) 1)
0x5d8: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5d9: Push((int) 3)
0x5da: Pop(2); Push(Stack[-2] % Stack[-1]);
0x5db: @ SetVariable(Stack[-2], Stack[-1])
0x5dc: Pop(2)
0x5dd: GOTO 0x5e2

0x5de: Push("voice_common")
0x5df: Push((int) 0)
0x5e0: @ SetVariable(Stack[-2], Stack[-1])
0x5e1: Pop(2)
0x5e2: GOTO 0x5f5

0x5e3: PushEmpty(bool, object)
0x5e4: Stack[-1] = Stack[-7]
0x5e5: Call2 0x61c

0x5e6: Pop(1)
0x5e7: Pop(1); Push((bool) Stack[-1] == 0)
0x5e8: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5e9: PushEmpty(bool, object)
0x5ea: Stack[-1] = Stack[-7]
0x5eb: Call2 0x5f7

0x5ec: Pop(1)
0x5ed: Pop(1); Push((bool) Stack[-1] == 0)
0x5ee: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5ef: Stack[-6] = (bool) 0
0x5f0: Return(); Pop(4)

0x5f1: Push("voice_common")
0x5f2: Push((int) 1)
0x5f3: @ SetVariable(Stack[-2], Stack[-1])
0x5f4: Pop(2)
0x5f5: Stack[-6] = (bool) 1
0x5f6: Return(); Pop(4)

0x5f7: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5f8: Stack[-5] = "c"
0x5f9: Stack[-4] = (int) 0
0x5fa: Push((int) 1)
0x5fb: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x5fc: Push((int) 1)
0x5fd: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5fe: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5ff: @@ HasProperty(Stack[-1], Stack[-4])
0x600: Pop(1)
0x601: Pop(0); Push((bool) Stack[-3] == 0)
0x602: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x603: GOTO 0x607

0x604: Push((int) 1)
0x605: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x606: GOTO 0x5fa

0x607: Pop(0); Push((bool) Stack[-4] == 0)
0x608: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x609: Stack[-12] = (bool) 0
0x60a: Return(); Pop(10)

0x60b: Stack[-2] = (int) 0
0x60c: Push((int) 1)
0x60d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x60e: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x60f: @ irand(Stack[-2], Stack[-4])
0x610: Pop(0)
0x611: Push((int) 1)
0x612: Pop(1); Push(Stack[-3] + Stack[-1]);
0x613: Pop(1); Push(Stack[-6] + Stack[-1]);
0x614: @@ GetProperty(Stack[-1], Stack[-2])
0x615: Pop(1)
0x616: PushEmpty(bool, string)
0x617: Stack[-1] = Stack[-3]
0x618: Call2 0x666

0x619: Stack[-14] = Stack[-2]
0x61a: Pop(2)
0x61b: Return(); Pop(10)

0x61c: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x61d: Push("d")
0x61e: PushEmpty(int)
0x61f: Call2 0x691

0x620: Pop(0)
0x621: Pop(2); Push(Stack[-2] + Stack[-1]);
0x622: Push("m")
0x623: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x624: Stack[-4] = (int) 0
0x625: Push((int) 1)
0x626: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x627: Push((int) 1)
0x628: Pop(1); Push(Stack[-5] + Stack[-1]);
0x629: Pop(1); Push(Stack[-6] + Stack[-1]);
0x62a: @@ HasProperty(Stack[-1], Stack[-4])
0x62b: Pop(1)
0x62c: Pop(0); Push((bool) Stack[-3] == 0)
0x62d: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62e: GOTO 0x632

0x62f: Push((int) 1)
0x630: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x631: GOTO 0x625

0x632: Pop(0); Push((bool) Stack[-4] == 0)
0x633: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x634: Stack[-12] = (bool) 0
0x635: Return(); Pop(10)

0x636: Stack[-2] = (int) 0
0x637: Push((int) 1)
0x638: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x639: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x63a: @ irand(Stack[-2], Stack[-4])
0x63b: Pop(0)
0x63c: Push((int) 1)
0x63d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x63e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x63f: @@ GetProperty(Stack[-1], Stack[-2])
0x640: Pop(1)
0x641: PushEmpty(bool, string)
0x642: Stack[-1] = Stack[-3]
0x643: Call2 0x666

0x644: Stack[-14] = Stack[-2]
0x645: Pop(2)
0x646: Return(); Pop(10)

0x647: PushEmpty(bool, float, float, bool, float, float)
0x648: @ lshHasAnimation(Stack[-3], Stack[-7])
0x649: Pop(0)
0x64a: Push(Stack[-3])
0x64b: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x64c: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x64d: Pop(0)
0x64e: Push((bool) 0)
0x64f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x650: Pop(1)
0x651: GOTO 0x656

0x652: Push("Can't find lsh animation : ")
0x653: Pop(1); Push(Stack[-1] + Stack[-8]);
0x654: @ Trace(Stack[-1])
0x655: Pop(1)
0x656: Return(); Pop(6)

0x657: PushEmpty(bool, float, float, bool, float, float)
0x658: @ lshHasAnimation(Stack[-3], Stack[-8])
0x659: Pop(0)
0x65a: Push(Stack[-3])
0x65b: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x65c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x65d: Pop(0)
0x65e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x65f: Pop(0)
0x660: GOTO 0x665

0x661: Push("Can't find lsh animation : ")
0x662: Pop(1); Push(Stack[-1] + Stack[-9]);
0x663: @ Trace(Stack[-1])
0x664: Pop(1)
0x665: Return(); Pop(6)

0x666: PushEmpty(bool, bool)
0x667: PushEmpty(bool)
0x668: Call2 0x6c0

0x669: Pop(0)
0x66a: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x66b: @ lshHasSpeech(Stack[-1], Stack[-3])
0x66c: Pop(0)
0x66d: Push(Stack[-1])
0x66e: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x66f: @ lshPlaySpeech(Stack[-3])
0x670: Pop(0)
0x671: Stack[-4] = (bool) 1
0x672: Return(); Pop(2)

0x673: Stack[-4] = (bool) 0
0x674: Return(); Pop(2)

0x675: PushEmpty(bool)
0x676: Call2 0x6c0

0x677: Pop(0)
0x678: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x679: @ lshStopSpeech()
0x67a: Pop(0)
0x67b: Return(); Pop(0)

0x67c: PushEmpty(object, object)
0x67d: @ self(Stack[-1])
0x67e: Pop(0)
0x67f: Stack[-3] = Stack[-1]
0x680: Return(); Pop(2)

0x681: Stack[-1] = 0
0x682: PushEmpty(float, float)
0x683: Pop(0); Push(Stack[-3] | Stack[-3]);
0x684: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x685: Push((float)0.0)
0x686: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x687: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x688: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x689: Return(); Pop(2)

0x68a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x68b: Return(); Pop(2)

0x68c: PushEmpty(int, int)
0x68d: @ GetVariable(Stack[-3], Stack[-1])
0x68e: Pop(0)
0x68f: Stack[-4] = Stack[-1]
0x690: Return(); Pop(2)

0x691: PushEmpty(float, float)
0x692: @ GetGameTime(Stack[-1])
0x693: Pop(0)
0x694: Push((int) 1)
0x695: PushEmpty(int)
0x696: Push((int) 24)
0x697: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x698: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x699: Return(); Pop(2)

0x69a: PushEmpty()
0x69b: PushEmpty(int)
0x69c: Call2 0x691

0x69d: Pop(0)
0x69e: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x69f: Return(); Pop(0)

0x6a0: PushEmpty(string, string)
0x6a1: Stack[-1] = "idle"
0x6a2: Push(Stack[-3])
0x6a3: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x6a4: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x6a5: Stack[-4] = Stack[-1]
0x6a6: Return(); Pop(2)

0x6a7: PushEmpty(int, bool, int, bool)
0x6a8: Stack[-2] = (int) 0
0x6a9: Push("all")
0x6aa: PushEmpty(string, int)
0x6ab: Stack[-1] = Stack[-5]
0x6ac: Call2 0x6a0

0x6ad: Pop(1)
0x6ae: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6af: Pop(2)
0x6b0: Pop(0); Push((bool) Stack[-1] == 0)
0x6b1: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6b2: GOTO 0x6b6

0x6b3: Push((int) 1)
0x6b4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x6b5: GOTO 0x6a9

0x6b6: Stack[-5] = Stack[-2]
0x6b7: Return(); Pop(4)

0x6b8: Stack[-1] = (int) 515536
0x6b9: Return(); Pop(0)

0x6ba: Stack[-1] = (int) 502861
0x6bb: Return(); Pop(0)

0x6bc: Stack[-1] = "ui/NPC_Han.png"
0x6bd: Return(); Pop(0)

0x6be: Stack[-1] = "ui/NPC_Han_b.png"
0x6bf: Return(); Pop(0)

0x6c0: Stack[-1] = (bool) 1
0x6c1: Return(); Pop(0)

0x6c2: PushEmpty()
0x6c3: Push("k9q01")
0x6c4: Push((int) 6)
0x6c5: @ SetVariable(Stack[-2], Stack[-1])
0x6c6: Pop(2)
0x6c7: PushEmpty()
0x6c8: Call2 0x6d7

0x6c9: Pop(0)
0x6ca: Return(); Pop(0)

0x6cb: PushEmpty()
0x6cc: PushEmpty(int, string)
0x6cd: Stack[-1] = "k9q01"
0x6ce: Call2 0x68c

0x6cf: Pop(1)
0x6d0: Push((int) 5)
0x6d1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6d2: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6d3: Stack[-2] = (bool) 1
0x6d4: Return(); Pop(0)

0x6d5: Stack[-2] = (bool) 0
0x6d6: Return(); Pop(0)

0x6d7: PushEmpty(object, object)
0x6d8: Push((int) 523)
0x6d9: Push((int) 1)
0x6da: Push((int) 529815)
0x6db: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6dc: Pop(3)
0x6dd: PushEmpty(bool, object, int)
0x6de: Stack[-2] = Stack[-4]
0x6df: Stack[-1] = (int) 517
0x6e0: Call2 0x6f1

0x6e1: Pop(3)
0x6e2: Return(); Pop(2)

0x6e3: Stack[-1] = 0
0x6e4: PushEmpty(object, object)
0x6e5: @ GetDiaryRoot(Stack[-1])
0x6e6: Pop(0)
0x6e7: Pop(0); Push((bool) Stack[-1] == 0)
0x6e8: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6e9: Push("Can't retrieve diary root")
0x6ea: @ Trace(Stack[-1])
0x6eb: Pop(1)
0x6ec: Stack[-3] = (bool) 0
0x6ed: Return(); Pop(2)

0x6ee: Stack[-3] = Stack[-1]
0x6ef: Return(); Pop(2)

0x6f0: Stack[-1] = 0
0x6f1: PushEmpty(object, object, int, object, object, int)
0x6f2: PushEmpty(object)
0x6f3: Call2 0x6e4

0x6f4: Stack[-4] = Stack[-1]
0x6f5: Pop(1)
0x6f6: @@ Find(Stack[-7], Stack[-2])
0x6f7: Pop(0)
0x6f8: Pop(0); Push((bool) Stack[-2] == 0)
0x6f9: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6fa: Push("Can't find diary parent with id: ")
0x6fb: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6fc: @ Trace(Stack[-1])
0x6fd: Pop(1)
0x6fe: Stack[-9] = (bool) 0
0x6ff: Return(); Pop(6)

0x700: @@ AddChild(Stack[-8])
0x701: Pop(0)
0x702: Push((int) 7)
0x703: @ SendWorldWndMessage(Stack[-1])
0x704: Pop(1)
0x705: @@ GetCategory(Stack[-1])
0x706: Pop(0)
0x707: @ SetDiarySection(Stack[-1])
0x708: Pop(0)
0x709: Stack[-9] = (bool) 0
0x70a: Return(); Pop(6)

0x70b: Stack[-2] = 0
0x70c: Stack[-3] = 0
0x70d: PushEmpty(int, int)
0x70e: Push("branch")
0x70f: @ GetVariable(Stack[-1], Stack[-2])
0x710: Pop(1)
0x711: Push((int) 0)
0x712: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x713: IF (Stack[-1] == 0) GOTO 0x717; Pop(1)

0x714: Stack[-3] = (int) 1
0x715: Return(); Pop(2)

0x716: GOTO 0x71c

0x717: Push((int) 1)
0x718: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x719: IF (Stack[-1] == 0) GOTO 0x71c; Pop(1)

0x71a: Stack[-3] = (int) 2
0x71b: Return(); Pop(2)

0x71c: Stack[-3] = (int) 3
0x71d: Return(); Pop(2)

0x71e: PushEmpty(int, int)
0x71f: Push("mt_han")
0x720: @ GetVariable(Stack[-1], Stack[-2])
0x721: Pop(1)
0x722: Pop(0); Push((bool) Stack[-1] == 0)
0x723: IF (Stack[-1] == 0) GOTO 0x72e; Pop(1)

0x724: PushEmpty(int, object)
0x725: Stack[-1] = Stack[-5]
0x726: Push(-2, 1); TaskCall(2)
0x727: Call2 0x181

0x728: Pop(-2, 1); TaskReturn
0x729: Pop(2)
0x72a: Push("mt_han")
0x72b: Push((int) 1)
0x72c: @ SetVariable(Stack[-2], Stack[-1])
0x72d: Pop(2)
0x72e: PushEmpty(bool, int)
0x72f: Stack[-1] = (int) 9
0x730: Call2 0x69a

0x731: Pop(1)
0x732: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x733: PushEmpty(int, object)
0x734: Stack[-1] = Stack[-5]
0x735: Push(-2, 1); TaskCall(0)
0x736: Call2 0x0

0x737: Pop(-2, 1); TaskReturn
0x738: Pop(2)
0x739: Return(); Pop(2)

0x73a: PushEmpty(bool, int)
0x73b: Stack[-1] = (int) 12
0x73c: Call2 0x69a

0x73d: Pop(1)
0x73e: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x73f: PushEmpty(int, object)
0x740: Stack[-1] = Stack[-5]
0x741: Push(-2, 1); TaskCall(4)
0x742: Call2 0x27a

0x743: Pop(-2, 1); TaskReturn
0x744: Pop(2)
0x745: Return(); Pop(2)

0x746: PushEmpty(int, object)
0x747: Stack[-1] = Stack[-5]
0x748: Push(-2, 1); TaskCall(6)
0x749: Call2 0x37d

0x74a: Pop(-2, 1); TaskReturn
0x74b: Pop(2)
0x74c: Return(); Pop(2)

