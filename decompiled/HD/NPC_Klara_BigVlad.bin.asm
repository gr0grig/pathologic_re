GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

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
	Anger
	Repentance
	player
	GetPosition
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	m
	Can't find lsh animation : 
	add
	money
	Money
	reputation
	ui/NPC_BigVlad.png
	ui/NPC_BigVlad_b.png
	ook2BigVlad1
	k2q01
	branch

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
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)

RunOp = 0x471
RunTask = 8

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb4 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x24b Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x349 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x447 Vars = (int, int)
	GTASK_8 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x4bd Vars = (int)
		EVENT_6 Op = 0x4e3 Vars = ()
		EVENT_5 Op = 0x4f2 Vars = ()
		EVENT_45 Op = 0x4ff Vars = (bool)
		EVENT_0 Op = 0x50b Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x5bd

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x768

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x766

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x76a

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x76c

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x7a0

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
0x31: Call2 0x6d3

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x614

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
0x48: Call2 0x602

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
0x56: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x9e

0x5a: Pop(1)
0x5b: Push((int) 525245)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool)
0x61: Stack[-1] = (bool) 0
0x62: PushEmpty(bool, object)
0x63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64: Call2 0x788

0x65: Pop(1)
0x66: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x67: PushEmpty(bool, object)
0x68: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69: Call2 0x794

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6c: Stack[-1] = (bool) 1
0x6d: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6e: Push((int) 525246)
0x6f: Push((int) 44478)
0x70: Push((int) 26614)
0x71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72: Pop(3)
0x73: Push((int) 525249)
0x74: Push((int) -1)
0x75: Push((int) 26617)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: Push((int) 529151)
0x79: Push((int) -1)
0x7a: Push((int) 30598)
0x7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c: Pop(3)
0x7d: GOTO 0x80

0x7e: Return(); Pop(0)

0x7f: GOTO 0x55

0x80: PushEmpty(bool)
0x81: Call2 0x76e

0x82: Pop(0)
0x83: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x84: @ lshWaitForAnimEnd()
0x85: Pop(0)
0x86: Push( Stack[3 + Tasks[-1].StackPointer] )
0x87: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x88: GOTO 0x8e

0x89: PushEmpty(string)
0x8a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8b: Call2 0x69e

0x8c: Pop(1)
0x8d: GOTO 0x84

0x8e: GOTO 0x9d

0x8f: Push("all")
0x90: Push("idle")
0x91: @ PlayAnimation(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: @ WaitForAnimEnd()
0x94: Pop(0)
0x95: Push( Stack[3 + Tasks[-1].StackPointer] )
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: GOTO 0x9d

0x98: Push("all")
0x99: Push("idle")
0x9a: @ PlayAnimation(Stack[-2], Stack[-1])
0x9b: Pop(2)
0x9c: GOTO 0x93

0x9d: Return(); Pop(0)

0x9e: PushEmpty()
0x9f: PushEmpty(bool)
0xa0: Call2 0x76e

0xa1: Pop(0)
0xa2: Pop(1); Push((bool) Stack[-1] == 0)
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Return(); Pop(0)

0xa5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: Return(); Pop(0)

0xa8: PushEmpty(string, bool)
0xa9: Stack[-2] = Stack[-3]
0xaa: Push("")
0xab: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xad: Stack[-1] = (bool) 0
0xae: GOTO 0xb0

0xaf: Stack[-1] = (bool) 1
0xb0: Call2 0x6ae

0xb1: Pop(2)
0xb2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb3: Return(); Pop(0)

0xb4: PushEmpty()
0xb5: Push((int) 1)
0xb6: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0xb7: PushEmpty()
0xb8: Call2 0x6cc

0xb9: Pop(0)
0xba: Push((int) 26614)
0xbb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xbd: PushEmpty(object, object)
0xbe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc0: Call2 0x782

0xc1: Pop(2)
0xc2: Push((int) 26616)
0xc3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc5: PushEmpty(object, object)
0xc6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc8: Call2 0x770

0xc9: Pop(2)
0xca: Push((int) 44497)
0xcb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call2 0x777

0xd1: Pop(2)
0xd2: Push((int) 26613)
0xd3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xd5: PushEmpty(string)
0xd6: Stack[-1] = "Neutral"
0xd7: Call2 0x9e

0xd8: Pop(1)
0xd9: Push((int) 525245)
0xda: @@ SetMessage(Stack[-1])
0xdb: Pop(1)
0xdc: @@ ClearReplies()
0xdd: Pop(0)
0xde: PushEmpty(bool)
0xdf: Stack[-1] = (bool) 0
0xe0: PushEmpty(bool, object)
0xe1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Call2 0x788

0xe3: Pop(1)
0xe4: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe5: PushEmpty(bool, object)
0xe6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe7: Call2 0x794

0xe8: Pop(1)
0xe9: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xea: Stack[-1] = (bool) 1
0xeb: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xec: Push((int) 525246)
0xed: Push((int) 44478)
0xee: Push((int) 26614)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Push((int) 525249)
0xf2: Push((int) -1)
0xf3: Push((int) 26617)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Push((int) 529151)
0xf7: Push((int) -1)
0xf8: Push((int) 30598)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Push((int) 44478)
0xfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Distrust"
0x101: Call2 0x9e

0x102: Pop(1)
0x103: Push((int) 542162)
0x104: @@ SetMessage(Stack[-1])
0x105: Pop(1)
0x106: @@ ClearReplies()
0x107: Pop(0)
0x108: Push((int) 542163)
0x109: Push((int) 30599)
0x10a: Push((int) 44479)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Push((int) 542164)
0x10e: Push((int) 44481)
0x10f: Push((int) 44480)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Push((int) 44481)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x116: PushEmpty(string)
0x117: Stack[-1] = "Anger"
0x118: Call2 0x9e

0x119: Pop(1)
0x11a: Push((int) 542165)
0x11b: @@ SetMessage(Stack[-1])
0x11c: Pop(1)
0x11d: @@ ClearReplies()
0x11e: Pop(0)
0x11f: Push((int) 542169)
0x120: Push((int) 30599)
0x121: Push((int) 44485)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Push((int) 542170)
0x125: Push((int) -1)
0x126: Push((int) 44486)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Return(); Pop(0)

0x12a: Push((int) 30599)
0x12b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x12d: PushEmpty(string)
0x12e: Stack[-1] = "Distrust"
0x12f: Call2 0x9e

0x130: Pop(1)
0x131: Push((int) 529152)
0x132: @@ SetMessage(Stack[-1])
0x133: Pop(1)
0x134: @@ ClearReplies()
0x135: Pop(0)
0x136: Push((int) 529153)
0x137: Push((int) 30601)
0x138: Push((int) 30600)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Push((int) 529155)
0x13c: Push((int) 30601)
0x13d: Push((int) 30602)
0x13e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f: Pop(3)
0x140: Return(); Pop(0)

0x141: Push((int) 30601)
0x142: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x143: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x144: PushEmpty(string)
0x145: Stack[-1] = "Anger"
0x146: Call2 0x9e

0x147: Pop(1)
0x148: Push((int) 529154)
0x149: @@ SetMessage(Stack[-1])
0x14a: Pop(1)
0x14b: @@ ClearReplies()
0x14c: Pop(0)
0x14d: Push((int) 529156)
0x14e: Push((int) 26615)
0x14f: Push((int) 30604)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Push((int) 529157)
0x153: Push((int) 44482)
0x154: Push((int) 30605)
0x155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x156: Pop(3)
0x157: Return(); Pop(0)

0x158: Push((int) 44482)
0x159: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x15b: PushEmpty(string)
0x15c: Stack[-1] = "Distrust"
0x15d: Call2 0x9e

0x15e: Pop(1)
0x15f: Push((int) 542166)
0x160: @@ SetMessage(Stack[-1])
0x161: Pop(1)
0x162: @@ ClearReplies()
0x163: Pop(0)
0x164: Push((int) 542167)
0x165: Push((int) 26615)
0x166: Push((int) 44483)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Push((int) 542168)
0x16a: Push((int) 44494)
0x16b: Push((int) 44484)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Return(); Pop(0)

0x16f: Push((int) 26615)
0x170: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x172: PushEmpty(string)
0x173: Stack[-1] = "Anger"
0x174: Call2 0x9e

0x175: Pop(1)
0x176: Push((int) 525247)
0x177: @@ SetMessage(Stack[-1])
0x178: Pop(1)
0x179: @@ ClearReplies()
0x17a: Pop(0)
0x17b: Push((int) 542171)
0x17c: Push((int) 44494)
0x17d: Push((int) 44488)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Push((int) 542176)
0x181: Push((int) 44494)
0x182: Push((int) 44493)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Return(); Pop(0)

0x186: Push((int) 44494)
0x187: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x189: PushEmpty(string)
0x18a: Stack[-1] = "Repentance"
0x18b: Call2 0x9e

0x18c: Pop(1)
0x18d: Push((int) 542177)
0x18e: @@ SetMessage(Stack[-1])
0x18f: Pop(1)
0x190: @@ ClearReplies()
0x191: Pop(0)
0x192: Push((int) 525248)
0x193: Push((int) -1)
0x194: Push((int) 26616)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Push((int) 542178)
0x198: Push((int) -1)
0x199: Push((int) 44497)
0x19a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19b: Pop(3)
0x19c: Return(); Pop(0)

0x19d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x19e: PushEmpty(bool)
0x19f: Call2 0x76e

0x1a0: Pop(0)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a2: @ lshStopAnimation()
0x1a3: Pop(0)
0x1a4: GOTO 0x1a7

0x1a5: @ StopAnimation()
0x1a6: Pop(0)
0x1a7: Return(); Pop(0)

0x1a8: GOTO 0xb5

0x1a9: Return(); Pop(0)

0x1aa: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1ab: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1ac: PushEmpty(bool, object, float)
0x1ad: Stack[-2] = Stack[-12]
0x1ae: Stack[-1] = (float) 70.0
0x1af: Call2 0x5bd

0x1b0: Pop(2)
0x1b1: Pop(1); Push((bool) Stack[-1] == 0)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b3: Stack[-10] = (int) -2
0x1b4: Return(); Pop(8)

0x1b5: @ CreateDialog(Stack[-4])
0x1b6: Pop(0)
0x1b7: PushEmpty(int)
0x1b8: Call2 0x768

0x1b9: Pop(0)
0x1ba: @@ SetNPCName(Stack[-1])
0x1bb: Pop(1)
0x1bc: PushEmpty(int)
0x1bd: Call2 0x766

0x1be: Pop(0)
0x1bf: @@ SetNPCDescription(Stack[-1])
0x1c0: Pop(1)
0x1c1: PushEmpty(string)
0x1c2: Call2 0x76a

0x1c3: Pop(0)
0x1c4: @@ SetPhoto(Stack[-1])
0x1c5: Pop(1)
0x1c6: PushEmpty(string)
0x1c7: Call2 0x76c

0x1c8: Pop(0)
0x1c9: @@ SetPhoto2(Stack[-1])
0x1ca: Pop(1)
0x1cb: PushEmpty(int)
0x1cc: Call2 0x7a0

0x1cd: Pop(0)
0x1ce: @@ SetPlayerName(Stack[-1])
0x1cf: Pop(1)
0x1d0: Stack[-2] = (int) -1
0x1d1: @ IsOverrideActive(Stack[-3])
0x1d2: Pop(0)
0x1d3: Push(Stack[-3])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d5: Stack[-10] = (int) -2
0x1d6: Return(); Pop(8)

0x1d7: @ DoDialog(Stack[-4])
0x1d8: Pop(0)
0x1d9: PushEmpty(bool, object)
0x1da: PushEmpty(object)
0x1db: Call2 0x6d3

0x1dc: Stack[-2] = Stack[-1]
0x1dd: Pop(1)
0x1de: Call2 0x614

0x1df: Pop(2)
0x1e0: PushEmpty(object, object)
0x1e1: Stack[-2] = Stack[-11]
0x1e2: Stack[-1] = Stack[-6]
0x1e3: Push(-2, 4); TaskCall(3)
0x1e4: Call2 0x1fb

0x1e5: Pop(-2, 4); TaskReturn
0x1e6: Pop(2)
0x1e7: @@ IsDialogEnd(Stack[-1])
0x1e8: Pop(0)
0x1e9: Pop(0); Push((bool) Stack[-1] == 0)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1eb: @ sync()
0x1ec: Pop(0)
0x1ed: @@ IsDialogEnd(Stack[-1])
0x1ee: Pop(0)
0x1ef: GOTO 0x1e9

0x1f0: PushEmpty(object)
0x1f1: Stack[-1] = Stack[-10]
0x1f2: Call2 0x602

0x1f3: Pop(1)
0x1f4: @ StopDialog(Stack[-4])
0x1f5: Pop(0)
0x1f6: @@ GetReturnValue(Stack[-2])
0x1f7: Pop(0)
0x1f8: Stack[-10] = Stack[-2]
0x1f9: Return(); Pop(8)

0x1fa: Stack[-4] = 0
0x1fb: PushEmpty()
0x1fc: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1fd: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1fe: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1ff: Push((int) 1)
0x200: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x201: PushEmpty(string)
0x202: Stack[-1] = "Neutral"
0x203: Call2 0x235

0x204: Pop(1)
0x205: Push((int) 525468)
0x206: @@ SetMessage(Stack[-1])
0x207: Pop(1)
0x208: @@ ClearReplies()
0x209: Pop(0)
0x20a: Push((int) 525469)
0x20b: Push((int) 30746)
0x20c: Push((int) 26825)
0x20d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20e: Pop(3)
0x20f: Push((int) 542158)
0x210: Push((int) 44475)
0x211: Push((int) 44474)
0x212: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x213: Pop(3)
0x214: GOTO 0x217

0x215: Return(); Pop(0)

0x216: GOTO 0x1ff

0x217: PushEmpty(bool)
0x218: Call2 0x76e

0x219: Pop(0)
0x21a: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x21b: @ lshWaitForAnimEnd()
0x21c: Pop(0)
0x21d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x21e: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21f: GOTO 0x225

0x220: PushEmpty(string)
0x221: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x222: Call2 0x69e

0x223: Pop(1)
0x224: GOTO 0x21b

0x225: GOTO 0x234

0x226: Push("all")
0x227: Push("idle")
0x228: @ PlayAnimation(Stack[-2], Stack[-1])
0x229: Pop(2)
0x22a: @ WaitForAnimEnd()
0x22b: Pop(0)
0x22c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x22d: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22e: GOTO 0x234

0x22f: Push("all")
0x230: Push("idle")
0x231: @ PlayAnimation(Stack[-2], Stack[-1])
0x232: Pop(2)
0x233: GOTO 0x22a

0x234: Return(); Pop(0)

0x235: PushEmpty()
0x236: PushEmpty(bool)
0x237: Call2 0x76e

0x238: Pop(0)
0x239: Pop(1); Push((bool) Stack[-1] == 0)
0x23a: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23b: Return(); Pop(0)

0x23c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x23d: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23e: Return(); Pop(0)

0x23f: PushEmpty(string, bool)
0x240: Stack[-2] = Stack[-3]
0x241: Push("")
0x242: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x243: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x244: Stack[-1] = (bool) 0
0x245: GOTO 0x247

0x246: Stack[-1] = (bool) 1
0x247: Call2 0x6ae

0x248: Pop(2)
0x249: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x24a: Return(); Pop(0)

0x24b: PushEmpty()
0x24c: Push((int) 1)
0x24d: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x24e: PushEmpty()
0x24f: Call2 0x6cc

0x250: Pop(0)
0x251: Push((int) 26824)
0x252: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x253: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x254: PushEmpty(string)
0x255: Stack[-1] = "Neutral"
0x256: Call2 0x235

0x257: Pop(1)
0x258: Push((int) 525468)
0x259: @@ SetMessage(Stack[-1])
0x25a: Pop(1)
0x25b: @@ ClearReplies()
0x25c: Pop(0)
0x25d: Push((int) 525469)
0x25e: Push((int) 30746)
0x25f: Push((int) 26825)
0x260: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x261: Pop(3)
0x262: Push((int) 542158)
0x263: Push((int) 44475)
0x264: Push((int) 44474)
0x265: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x266: Pop(3)
0x267: Return(); Pop(0)

0x268: Push((int) 44475)
0x269: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26a: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x26b: PushEmpty(string)
0x26c: Stack[-1] = "Neutral"
0x26d: Call2 0x235

0x26e: Pop(1)
0x26f: Push((int) 542159)
0x270: @@ SetMessage(Stack[-1])
0x271: Pop(1)
0x272: @@ ClearReplies()
0x273: Pop(0)
0x274: Push((int) 542160)
0x275: Push((int) -1)
0x276: Push((int) 44476)
0x277: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x278: Pop(3)
0x279: Push((int) 542161)
0x27a: Push((int) -1)
0x27b: Push((int) 44477)
0x27c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27d: Pop(3)
0x27e: Return(); Pop(0)

0x27f: Push((int) 30746)
0x280: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x282: PushEmpty(string)
0x283: Stack[-1] = "Neutral"
0x284: Call2 0x235

0x285: Pop(1)
0x286: Push((int) 529292)
0x287: @@ SetMessage(Stack[-1])
0x288: Pop(1)
0x289: @@ ClearReplies()
0x28a: Pop(0)
0x28b: Push((int) 529293)
0x28c: Push((int) -1)
0x28d: Push((int) 30747)
0x28e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28f: Pop(3)
0x290: Push((int) 529294)
0x291: Push((int) -1)
0x292: Push((int) 30748)
0x293: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x294: Pop(3)
0x295: Return(); Pop(0)

0x296: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x297: PushEmpty(bool)
0x298: Call2 0x76e

0x299: Pop(0)
0x29a: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29b: @ lshStopAnimation()
0x29c: Pop(0)
0x29d: GOTO 0x2a0

0x29e: @ StopAnimation()
0x29f: Pop(0)
0x2a0: Return(); Pop(0)

0x2a1: GOTO 0x24c

0x2a2: Return(); Pop(0)

0x2a3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2a4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2a5: PushEmpty(bool, object, float)
0x2a6: Stack[-2] = Stack[-12]
0x2a7: Stack[-1] = (float) 70.0
0x2a8: Call2 0x5bd

0x2a9: Pop(2)
0x2aa: Pop(1); Push((bool) Stack[-1] == 0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ac: Stack[-10] = (int) -2
0x2ad: Return(); Pop(8)

0x2ae: @ CreateDialog(Stack[-4])
0x2af: Pop(0)
0x2b0: PushEmpty(int)
0x2b1: Call2 0x768

0x2b2: Pop(0)
0x2b3: @@ SetNPCName(Stack[-1])
0x2b4: Pop(1)
0x2b5: PushEmpty(int)
0x2b6: Call2 0x766

0x2b7: Pop(0)
0x2b8: @@ SetNPCDescription(Stack[-1])
0x2b9: Pop(1)
0x2ba: PushEmpty(string)
0x2bb: Call2 0x76a

0x2bc: Pop(0)
0x2bd: @@ SetPhoto(Stack[-1])
0x2be: Pop(1)
0x2bf: PushEmpty(string)
0x2c0: Call2 0x76c

0x2c1: Pop(0)
0x2c2: @@ SetPhoto2(Stack[-1])
0x2c3: Pop(1)
0x2c4: PushEmpty(int)
0x2c5: Call2 0x7a0

0x2c6: Pop(0)
0x2c7: @@ SetPlayerName(Stack[-1])
0x2c8: Pop(1)
0x2c9: Stack[-2] = (int) -1
0x2ca: @ IsOverrideActive(Stack[-3])
0x2cb: Pop(0)
0x2cc: Push(Stack[-3])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2ce: Stack[-10] = (int) -2
0x2cf: Return(); Pop(8)

0x2d0: @ DoDialog(Stack[-4])
0x2d1: Pop(0)
0x2d2: PushEmpty(bool, object)
0x2d3: PushEmpty(object)
0x2d4: Call2 0x6d3

0x2d5: Stack[-2] = Stack[-1]
0x2d6: Pop(1)
0x2d7: Call2 0x614

0x2d8: Pop(2)
0x2d9: PushEmpty(object, object)
0x2da: Stack[-2] = Stack[-11]
0x2db: Stack[-1] = Stack[-6]
0x2dc: Push(-2, 4); TaskCall(5)
0x2dd: Call2 0x2f4

0x2de: Pop(-2, 4); TaskReturn
0x2df: Pop(2)
0x2e0: @@ IsDialogEnd(Stack[-1])
0x2e1: Pop(0)
0x2e2: Pop(0); Push((bool) Stack[-1] == 0)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e4: @ sync()
0x2e5: Pop(0)
0x2e6: @@ IsDialogEnd(Stack[-1])
0x2e7: Pop(0)
0x2e8: GOTO 0x2e2

0x2e9: PushEmpty(object)
0x2ea: Stack[-1] = Stack[-10]
0x2eb: Call2 0x602

0x2ec: Pop(1)
0x2ed: @ StopDialog(Stack[-4])
0x2ee: Pop(0)
0x2ef: @@ GetReturnValue(Stack[-2])
0x2f0: Pop(0)
0x2f1: Stack[-10] = Stack[-2]
0x2f2: Return(); Pop(8)

0x2f3: Stack[-4] = 0
0x2f4: PushEmpty()
0x2f5: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2f6: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2f7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2f8: Push((int) 1)
0x2f9: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x2fa: PushEmpty(string)
0x2fb: Stack[-1] = "Neutral"
0x2fc: Call2 0x333

0x2fd: Pop(1)
0x2fe: Push((int) 535284)
0x2ff: @@ SetMessage(Stack[-1])
0x300: Pop(1)
0x301: @@ ClearReplies()
0x302: Pop(0)
0x303: Push((int) 535285)
0x304: Push((int) 36962)
0x305: Push((int) 36961)
0x306: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x307: Pop(3)
0x308: Push((int) 535292)
0x309: Push((int) -1)
0x30a: Push((int) 36968)
0x30b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30c: Pop(3)
0x30d: Push((int) 535293)
0x30e: Push((int) -1)
0x30f: Push((int) 36969)
0x310: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x311: Pop(3)
0x312: GOTO 0x315

0x313: Return(); Pop(0)

0x314: GOTO 0x2f8

0x315: PushEmpty(bool)
0x316: Call2 0x76e

0x317: Pop(0)
0x318: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x319: @ lshWaitForAnimEnd()
0x31a: Pop(0)
0x31b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x31c: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31d: GOTO 0x323

0x31e: PushEmpty(string)
0x31f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x320: Call2 0x69e

0x321: Pop(1)
0x322: GOTO 0x319

0x323: GOTO 0x332

0x324: Push("all")
0x325: Push("idle")
0x326: @ PlayAnimation(Stack[-2], Stack[-1])
0x327: Pop(2)
0x328: @ WaitForAnimEnd()
0x329: Pop(0)
0x32a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x32b: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32c: GOTO 0x332

0x32d: Push("all")
0x32e: Push("idle")
0x32f: @ PlayAnimation(Stack[-2], Stack[-1])
0x330: Pop(2)
0x331: GOTO 0x328

0x332: Return(); Pop(0)

0x333: PushEmpty()
0x334: PushEmpty(bool)
0x335: Call2 0x76e

0x336: Pop(0)
0x337: Pop(1); Push((bool) Stack[-1] == 0)
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: Return(); Pop(0)

0x33a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x33b: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33c: Return(); Pop(0)

0x33d: PushEmpty(string, bool)
0x33e: Stack[-2] = Stack[-3]
0x33f: Push("")
0x340: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x342: Stack[-1] = (bool) 0
0x343: GOTO 0x345

0x344: Stack[-1] = (bool) 1
0x345: Call2 0x6ae

0x346: Pop(2)
0x347: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x348: Return(); Pop(0)

0x349: PushEmpty()
0x34a: Push((int) 1)
0x34b: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x34c: PushEmpty()
0x34d: Call2 0x6cc

0x34e: Pop(0)
0x34f: Push((int) 36960)
0x350: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x352: PushEmpty(string)
0x353: Stack[-1] = "Neutral"
0x354: Call2 0x333

0x355: Pop(1)
0x356: Push((int) 535284)
0x357: @@ SetMessage(Stack[-1])
0x358: Pop(1)
0x359: @@ ClearReplies()
0x35a: Pop(0)
0x35b: Push((int) 535285)
0x35c: Push((int) 36962)
0x35d: Push((int) 36961)
0x35e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35f: Pop(3)
0x360: Push((int) 535292)
0x361: Push((int) -1)
0x362: Push((int) 36968)
0x363: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x364: Pop(3)
0x365: Push((int) 535293)
0x366: Push((int) -1)
0x367: Push((int) 36969)
0x368: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x369: Pop(3)
0x36a: Return(); Pop(0)

0x36b: Push((int) 36962)
0x36c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36d: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x36e: PushEmpty(string)
0x36f: Stack[-1] = "Neutral"
0x370: Call2 0x333

0x371: Pop(1)
0x372: Push((int) 535286)
0x373: @@ SetMessage(Stack[-1])
0x374: Pop(1)
0x375: @@ ClearReplies()
0x376: Pop(0)
0x377: Push((int) 535287)
0x378: Push((int) 36964)
0x379: Push((int) 36963)
0x37a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37b: Pop(3)
0x37c: Push((int) 535291)
0x37d: Push((int) -1)
0x37e: Push((int) 36967)
0x37f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x380: Pop(3)
0x381: Return(); Pop(0)

0x382: Push((int) 36964)
0x383: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x385: PushEmpty(string)
0x386: Stack[-1] = "Neutral"
0x387: Call2 0x333

0x388: Pop(1)
0x389: Push((int) 535288)
0x38a: @@ SetMessage(Stack[-1])
0x38b: Pop(1)
0x38c: @@ ClearReplies()
0x38d: Pop(0)
0x38e: Push((int) 535289)
0x38f: Push((int) -1)
0x390: Push((int) 36965)
0x391: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x392: Pop(3)
0x393: Push((int) 535290)
0x394: Push((int) -1)
0x395: Push((int) 36966)
0x396: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x397: Pop(3)
0x398: Return(); Pop(0)

0x399: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x39a: PushEmpty(bool)
0x39b: Call2 0x76e

0x39c: Pop(0)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39e: @ lshStopAnimation()
0x39f: Pop(0)
0x3a0: GOTO 0x3a3

0x3a1: @ StopAnimation()
0x3a2: Pop(0)
0x3a3: Return(); Pop(0)

0x3a4: GOTO 0x34a

0x3a5: Return(); Pop(0)

0x3a6: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3a7: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3a8: PushEmpty(bool, object, float)
0x3a9: Stack[-2] = Stack[-12]
0x3aa: Stack[-1] = (float) 70.0
0x3ab: Call2 0x5bd

0x3ac: Pop(2)
0x3ad: Pop(1); Push((bool) Stack[-1] == 0)
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3af: Stack[-10] = (int) -2
0x3b0: Return(); Pop(8)

0x3b1: @ CreateDialog(Stack[-4])
0x3b2: Pop(0)
0x3b3: PushEmpty(int)
0x3b4: Call2 0x768

0x3b5: Pop(0)
0x3b6: @@ SetNPCName(Stack[-1])
0x3b7: Pop(1)
0x3b8: PushEmpty(int)
0x3b9: Call2 0x766

0x3ba: Pop(0)
0x3bb: @@ SetNPCDescription(Stack[-1])
0x3bc: Pop(1)
0x3bd: PushEmpty(string)
0x3be: Call2 0x76a

0x3bf: Pop(0)
0x3c0: @@ SetPhoto(Stack[-1])
0x3c1: Pop(1)
0x3c2: PushEmpty(string)
0x3c3: Call2 0x76c

0x3c4: Pop(0)
0x3c5: @@ SetPhoto2(Stack[-1])
0x3c6: Pop(1)
0x3c7: PushEmpty(int)
0x3c8: Call2 0x7a0

0x3c9: Pop(0)
0x3ca: @@ SetPlayerName(Stack[-1])
0x3cb: Pop(1)
0x3cc: Stack[-2] = (int) -1
0x3cd: @ IsOverrideActive(Stack[-3])
0x3ce: Pop(0)
0x3cf: Push(Stack[-3])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d1: Stack[-10] = (int) -2
0x3d2: Return(); Pop(8)

0x3d3: @ DoDialog(Stack[-4])
0x3d4: Pop(0)
0x3d5: PushEmpty(bool, object)
0x3d6: PushEmpty(object)
0x3d7: Call2 0x6d3

0x3d8: Stack[-2] = Stack[-1]
0x3d9: Pop(1)
0x3da: Call2 0x614

0x3db: Pop(2)
0x3dc: PushEmpty(object, object)
0x3dd: Stack[-2] = Stack[-11]
0x3de: Stack[-1] = Stack[-6]
0x3df: Push(-2, 4); TaskCall(7)
0x3e0: Call2 0x3f7

0x3e1: Pop(-2, 4); TaskReturn
0x3e2: Pop(2)
0x3e3: @@ IsDialogEnd(Stack[-1])
0x3e4: Pop(0)
0x3e5: Pop(0); Push((bool) Stack[-1] == 0)
0x3e6: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3e7: @ sync()
0x3e8: Pop(0)
0x3e9: @@ IsDialogEnd(Stack[-1])
0x3ea: Pop(0)
0x3eb: GOTO 0x3e5

0x3ec: PushEmpty(object)
0x3ed: Stack[-1] = Stack[-10]
0x3ee: Call2 0x602

0x3ef: Pop(1)
0x3f0: @ StopDialog(Stack[-4])
0x3f1: Pop(0)
0x3f2: @@ GetReturnValue(Stack[-2])
0x3f3: Pop(0)
0x3f4: Stack[-10] = Stack[-2]
0x3f5: Return(); Pop(8)

0x3f6: Stack[-4] = 0
0x3f7: PushEmpty()
0x3f8: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3f9: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3fa: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3fb: Push((int) 1)
0x3fc: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x3fd: PushEmpty(string)
0x3fe: Stack[-1] = "Neutral"
0x3ff: Call2 0x431

0x400: Pop(1)
0x401: Push((int) 540545)
0x402: @@ SetMessage(Stack[-1])
0x403: Pop(1)
0x404: @@ ClearReplies()
0x405: Pop(0)
0x406: Push((int) 540546)
0x407: Push((int) -1)
0x408: Push((int) 42555)
0x409: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40a: Pop(3)
0x40b: Push((int) 540798)
0x40c: Push((int) -1)
0x40d: Push((int) 42847)
0x40e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40f: Pop(3)
0x410: GOTO 0x413

0x411: Return(); Pop(0)

0x412: GOTO 0x3fb

0x413: PushEmpty(bool)
0x414: Call2 0x76e

0x415: Pop(0)
0x416: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x417: @ lshWaitForAnimEnd()
0x418: Pop(0)
0x419: Push( Stack[3 + Tasks[-1].StackPointer] )
0x41a: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x41b: GOTO 0x421

0x41c: PushEmpty(string)
0x41d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x41e: Call2 0x69e

0x41f: Pop(1)
0x420: GOTO 0x417

0x421: GOTO 0x430

0x422: Push("all")
0x423: Push("idle")
0x424: @ PlayAnimation(Stack[-2], Stack[-1])
0x425: Pop(2)
0x426: @ WaitForAnimEnd()
0x427: Pop(0)
0x428: Push( Stack[3 + Tasks[-1].StackPointer] )
0x429: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x42a: GOTO 0x430

0x42b: Push("all")
0x42c: Push("idle")
0x42d: @ PlayAnimation(Stack[-2], Stack[-1])
0x42e: Pop(2)
0x42f: GOTO 0x426

0x430: Return(); Pop(0)

0x431: PushEmpty()
0x432: PushEmpty(bool)
0x433: Call2 0x76e

0x434: Pop(0)
0x435: Pop(1); Push((bool) Stack[-1] == 0)
0x436: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x437: Return(); Pop(0)

0x438: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x439: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x43a: Return(); Pop(0)

0x43b: PushEmpty(string, bool)
0x43c: Stack[-2] = Stack[-3]
0x43d: Push("")
0x43e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x43f: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x440: Stack[-1] = (bool) 0
0x441: GOTO 0x443

0x442: Stack[-1] = (bool) 1
0x443: Call2 0x6ae

0x444: Pop(2)
0x445: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x446: Return(); Pop(0)

0x447: PushEmpty()
0x448: Push((int) 1)
0x449: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x44a: PushEmpty()
0x44b: Call2 0x6cc

0x44c: Pop(0)
0x44d: Push((int) 42554)
0x44e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44f: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x450: PushEmpty(string)
0x451: Stack[-1] = "Neutral"
0x452: Call2 0x431

0x453: Pop(1)
0x454: Push((int) 540545)
0x455: @@ SetMessage(Stack[-1])
0x456: Pop(1)
0x457: @@ ClearReplies()
0x458: Pop(0)
0x459: Push((int) 540546)
0x45a: Push((int) -1)
0x45b: Push((int) 42555)
0x45c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45d: Pop(3)
0x45e: Push((int) 540798)
0x45f: Push((int) -1)
0x460: Push((int) 42847)
0x461: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x462: Pop(3)
0x463: Return(); Pop(0)

0x464: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x465: PushEmpty(bool)
0x466: Call2 0x76e

0x467: Pop(0)
0x468: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x469: @ lshStopAnimation()
0x46a: Pop(0)
0x46b: GOTO 0x46e

0x46c: @ StopAnimation()
0x46d: Pop(0)
0x46e: Return(); Pop(0)

0x46f: GOTO 0x448

0x470: Return(); Pop(0)

0x471: Push(GlobalVars[1])
0x472: Stack[-1] = (bool) 0
0x473: GlobalVars[1] = Stack[-1]; Pop(1)
0x474: PushEmpty()
0x475: Call2 0x478

0x476: Pop(0)
0x477: Return(); Pop(0)

0x478: PushEmpty(bool)
0x479: Call2 0x5b8

0x47a: Pop(0)
0x47b: Pop(1); Push((bool) Stack[-1] == 0)
0x47c: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x47d: @ Hold()
0x47e: Pop(0)
0x47f: @ GetDirection(Stack[-0])
0x480: Pop(0)
0x481: PushEmpty()
0x482: Call2 0x528

0x483: Pop(0)
0x484: GOTO 0x481

0x485: Return(); Pop(0)

0x486: PushEmpty(object, object)
0x487: Push("player")
0x488: @ FindActor(Stack[-2], Stack[-1])
0x489: Pop(1)
0x48a: Pop(0); Push((bool) Stack[-1] == 0)
0x48b: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48c: Stack[-3] = (bool) 0
0x48d: Return(); Pop(2)

0x48e: PushEmpty(bool, object)
0x48f: Stack[-1] = Stack[-3]
0x490: Call2 0x5af

0x491: Stack[-5] = Stack[-2]
0x492: Pop(2)
0x493: Return(); Pop(2)

0x494: Stack[-1] = 0
0x495: Push(CvectorIndex(Stack[-0], 0))
0x496: Push(CvectorIndex(Stack[-0], 2))
0x497: @ RotateAsync(Stack[-2], Stack[-1])
0x498: Pop(2)
0x499: Return(); Pop(0)

0x49a: PushEmpty(object, bool, object, bool)
0x49b: Push("player")
0x49c: @ FindActor(Stack[-3], Stack[-1])
0x49d: Pop(1)
0x49e: Pop(0); Push((bool) Stack[-2] == 0)
0x49f: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x4a0: Stack[-5] = (bool) 0
0x4a1: Return(); Pop(4)

0x4a2: PushEmpty(float, object)
0x4a3: Stack[-1] = Stack[-4]
0x4a4: Call2 0x574

0x4a5: Pop(1)
0x4a6: Push((float)90000.0)
0x4a7: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a9: Stack[-5] = (bool) 0
0x4aa: Return(); Pop(4)

0x4ab: @ CanSee(Stack[-1], Stack[-2])
0x4ac: Pop(0)
0x4ad: Stack[-5] = Stack[-1]
0x4ae: Return(); Pop(4)

0x4af: Stack[-2] = 0
0x4b0: PushEmpty(float, float)
0x4b1: Push((int) 8)
0x4b2: Push((int) 16)
0x4b3: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x4b4: Pop(2)
0x4b5: Push((int) 10)
0x4b6: @ SetTimer(Stack[-1], Stack[-2])
0x4b7: Pop(1)
0x4b8: Return(); Pop(2)

0x4b9: Push((int) 10)
0x4ba: @ KillTimer(Stack[-1])
0x4bb: Pop(1)
0x4bc: Return(); Pop(0)

0x4bd: PushEmpty()
0x4be: Push((int) 10)
0x4bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c0: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4c1: PushEmpty()
0x4c2: Call2 0x4b9

0x4c3: Pop(0)
0x4c4: PushEmpty(bool)
0x4c5: Stack[-1] = (bool) 0
0x4c6: PushEmpty(bool)
0x4c7: Call2 0x5b8

0x4c8: Pop(0)
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4ca: PushEmpty(bool)
0x4cb: Call2 0x49a

0x4cc: Pop(0)
0x4cd: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4ce: Stack[-1] = (bool) 1
0x4cf: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4d0: PushEmpty(bool)
0x4d1: Call2 0x486

0x4d2: Pop(0)
0x4d3: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4d4: PushEmpty(bool, object)
0x4d5: PushEmpty(object)
0x4d6: Call2 0x6d3

0x4d7: Stack[-2] = Stack[-1]
0x4d8: Pop(1)
0x4d9: Call2 0x64e

0x4da: Pop(2)
0x4db: GOTO 0x4e2

0x4dc: PushEmpty()
0x4dd: Call2 0x495

0x4de: Pop(0)
0x4df: PushEmpty()
0x4e0: Call2 0x4b0

0x4e1: Pop(0)
0x4e2: Return(); Pop(0)

0x4e3: PushEmpty()
0x4e4: Call2 0x56f

0x4e5: Pop(0)
0x4e6: PushEmpty()
0x4e7: Call2 0x4b9

0x4e8: Pop(0)
0x4e9: @ lshStopSpeech()
0x4ea: Pop(0)
0x4eb: @ lshStopAnimation()
0x4ec: Pop(0)
0x4ed: @ StopAsync()
0x4ee: Pop(0)
0x4ef: @ Hold()
0x4f0: Pop(0)
0x4f1: Return(); Pop(0)

0x4f2: @ StopGroup0()
0x4f3: Pop(0)
0x4f4: PushEmpty()
0x4f5: Call2 0x4b9

0x4f6: Pop(0)
0x4f7: PushEmpty(string)
0x4f8: Stack[-1] = "Neutral"
0x4f9: Call2 0x69e

0x4fa: Pop(1)
0x4fb: PushEmpty()
0x4fc: Call2 0x4b0

0x4fd: Pop(0)
0x4fe: Return(); Pop(0)

0x4ff: PushEmpty()
0x500: Push(Stack[-1])
0x501: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x502: PushEmpty()
0x503: Call2 0x4b0

0x504: Pop(0)
0x505: GOTO 0x50a

0x506: PushEmpty(string)
0x507: Stack[-1] = "Neutral"
0x508: Call2 0x69e

0x509: Pop(1)
0x50a: Return(); Pop(0)

0x50b: PushEmpty(bool, bool)
0x50c: @ IsOverrideActive(Stack[-1])
0x50d: Pop(0)
0x50e: Pop(0); Push((bool) Stack[-1] == 0)
0x50f: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x510: EventDisable(0)
0x511: PushEmpty()
0x512: Call2 0x56f

0x513: Pop(0)
0x514: PushEmpty(bool, object)
0x515: Stack[-1] = Stack[-5]
0x516: Call2 0x5af

0x517: Pop(2)
0x518: EventEnable(0)
0x519: PushEmpty(object)
0x51a: Stack[-1] = Stack[-4]
0x51b: Call2 0x7b1

0x51c: Pop(1)
0x51d: PushEmpty(string)
0x51e: Stack[-1] = "Neutral"
0x51f: Call2 0x69e

0x520: Pop(1)
0x521: PushEmpty()
0x522: Call2 0x4b9

0x523: Pop(0)
0x524: PushEmpty()
0x525: Call2 0x4b0

0x526: Pop(0)
0x527: Return(); Pop(2)

0x528: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x529: @ WaitForAnimEnd()
0x52a: Pop(0)
0x52b: PushEmpty(bool)
0x52c: Call2 0x5b8

0x52d: Pop(0)
0x52e: Pop(1); Push((bool) Stack[-1] == 0)
0x52f: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x530: Return(); Pop(12)

0x531: PushEmpty(int)
0x532: Call2 0x755

0x533: Stack[-7] = Stack[-1]
0x534: Pop(1)
0x535: Stack[-5] = (int) 0
0x536: PushEmpty(bool)
0x537: Stack[-1] = (bool) 0
0x538: Push((int) 5)
0x539: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x53a: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53b: PushEmpty(bool)
0x53c: Call2 0x5b8

0x53d: Pop(0)
0x53e: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53f: Stack[-1] = (bool) 1
0x540: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x541: Pop(0); Push((bool) Stack[-6] == 0)
0x542: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x543: Push((int) 3)
0x544: @ Sleep(Stack[-1], Stack[-5])
0x545: Pop(1)
0x546: Pop(0); Push((bool) Stack[-4] == 0)
0x547: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x548: GOTO 0x56a

0x549: GOTO 0x55f

0x54a: @ irand(Stack[-3], Stack[-6])
0x54b: Pop(0)
0x54c: Push((int) 5)
0x54d: @ irand(Stack[-3], Stack[-1])
0x54e: Pop(1)
0x54f: Push((int) 0)
0x550: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x551: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x552: Stack[-3] = (int) 0
0x553: Push("all")
0x554: PushEmpty(string, int)
0x555: Stack[-1] = Stack[-6]
0x556: Call2 0x74e

0x557: Pop(1)
0x558: @ PlayAnimation(Stack[-2], Stack[-1])
0x559: Pop(2)
0x55a: @ WaitForAnimEnd(Stack[-1])
0x55b: Pop(0)
0x55c: Pop(0); Push((bool) Stack[-1] == 0)
0x55d: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55e: GOTO 0x56a

0x55f: PushEmpty(bool)
0x560: Call2 0x56d

0x561: Pop(0)
0x562: Pop(1); Push((bool) Stack[-1] == 0)
0x563: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x564: GOTO 0x56a

0x565: @ ResetAAS()
0x566: Pop(0)
0x567: Push((int) 1)
0x568: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x569: GOTO 0x536

0x56a: @ ResetAAS()
0x56b: Pop(0)
0x56c: Return(); Pop(12)

0x56d: Stack[-1] = (bool) 1
0x56e: Return(); Pop(0)

0x56f: @ StopAnimation()
0x570: Pop(0)
0x571: @ StopGroup0()
0x572: Pop(0)
0x573: Return(); Pop(0)

0x574: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x575: @ GetPosition(Stack[-3])
0x576: Pop(0)
0x577: @@ GetPosition(Stack[-2])
0x578: Pop(0)
0x579: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x57a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x57b: Return(); Pop(6)

0x57c: PushEmpty(bool, bool)
0x57d: Push("HasProperty")
0x57e: Push((int) 2)
0x57f: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x580: Pop(1); Push((bool) Stack[-1] == 0)
0x581: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x582: Stack[-5] = (bool) 0
0x583: Return(); Pop(2)

0x584: @@ HasProperty(Stack[-3], Stack[-1])
0x585: Pop(0)
0x586: Stack[-5] = Stack[-1]
0x587: Return(); Pop(2)

0x588: PushEmpty(float, float)
0x589: PushEmpty(bool, object, string)
0x58a: Stack[-2] = Stack[-10]
0x58b: Stack[-1] = Stack[-9]
0x58c: Call2 0x57c

0x58d: Pop(2)
0x58e: Pop(1); Push((bool) Stack[-1] == 0)
0x58f: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x590: Stack[-8] = (bool) 0
0x591: Return(); Pop(2)

0x592: @@ GetProperty(Stack[-6], Stack[-1])
0x593: Pop(0)
0x594: PushEmpty(float, float, float, float)
0x595: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x596: Stack[-2] = Stack[-8]
0x597: Stack[-1] = Stack[-7]
0x598: Call2 0x6e3

0x599: Pop(3)
0x59a: @@ SetProperty(Stack[-7], Stack[-1])
0x59b: Pop(1)
0x59c: Stack[-8] = (bool) 1
0x59d: Return(); Pop(2)

0x59e: PushEmpty(int, int)
0x59f: @@ GetProperty(Stack[-4], Stack[-1])
0x5a0: Pop(0)
0x5a1: Pop(0); Push(Stack[-1] + Stack[-3]);
0x5a2: @@ SetProperty(Stack[-5], Stack[-1])
0x5a3: Pop(1)
0x5a4: Return(); Pop(2)

0x5a5: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x5a6: @ GetPosition(Stack[-3])
0x5a7: Pop(0)
0x5a8: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x5a9: Push(CvectorIndex(Stack[-2], 0))
0x5aa: Push(CvectorIndex(Stack[-3], 2))
0x5ab: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x5ac: Pop(2)
0x5ad: Stack[-8] = Stack[-1]
0x5ae: Return(); Pop(6)

0x5af: PushEmpty(cvector, cvector)
0x5b0: @@ GetPosition(Stack[-1])
0x5b1: Pop(0)
0x5b2: PushEmpty(bool, cvector)
0x5b3: Stack[-1] = Stack[-3]
0x5b4: Call2 0x5a5

0x5b5: Stack[-6] = Stack[-2]
0x5b6: Pop(2)
0x5b7: Return(); Pop(2)

0x5b8: PushEmpty(bool, bool)
0x5b9: @ IsLoaded(Stack[-1])
0x5ba: Pop(0)
0x5bb: Stack[-3] = Stack[-1]
0x5bc: Return(); Pop(2)

0x5bd: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x5be: @@ GetPosition(Stack[-8])
0x5bf: Pop(0)
0x5c0: @@ GetEyesHeight(Stack[-9])
0x5c1: Pop(0)
0x5c2: Push(CvectorIndex(Stack[-8], 1))
0x5c3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x5c4: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x5c5: @ GetPosition(Stack[-7])
0x5c6: Pop(0)
0x5c7: @ GetEyesHeight(Stack[-9])
0x5c8: Pop(0)
0x5c9: Push(CvectorIndex(Stack[-7], 1))
0x5ca: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x5cb: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x5cc: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x5cd: Push(CvectorIndex(Stack[-6], 1))
0x5ce: Stack[-1] = (int) 0
0x5cf: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x5d0: Pop(0); Push(Stack[-6] | Stack[-6]);
0x5d1: Pop(1); Push(Sqrt(Stack[-1]))
0x5d2: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x5d3: Stack[-5] = -Stack[-6]; Pop(0);
0x5d4: Pop(0); Push(Stack[-6] * Stack[-19]);
0x5d5: PushEmpty(cvector, cvector)
0x5d6: Push(CVector(0.0, 1.0, 0.0))
0x5d7: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x5d8: Call2 0x6d9

0x5d9: Pop(1)
0x5da: Push((int) 25)
0x5db: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5dc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5dd: Push(CVector(0.0, 10.0, 0.0))
0x5de: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x5df: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x5e0: @ IsOverrideActive(Stack[-2])
0x5e1: Pop(0)
0x5e2: Push(Stack[-2])
0x5e3: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e4: Stack[-21] = (bool) 0
0x5e5: Return(); Pop(18)

0x5e6: @ StopWorld()
0x5e7: Pop(0)
0x5e8: Push((bool) 1)
0x5e9: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x5ea: Pop(1)
0x5eb: Push(CvectorIndex(Stack[-4], 0))
0x5ec: Push(CvectorIndex(Stack[-5], 2))
0x5ed: @ Rotate(Stack[-2], Stack[-1])
0x5ee: Pop(2)
0x5ef: PushEmpty(bool)
0x5f0: Call2 0x76e

0x5f1: Pop(0)
0x5f2: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5f3: GOTO 0x5fc

0x5f4: Push("head")
0x5f5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x5f6: Pop(1)
0x5f7: Push(Stack[-1])
0x5f8: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5f9: Push("head")
0x5fa: @ LookAsyncCamera(Stack[-1])
0x5fb: Pop(1)
0x5fc: @ CameraWaitForPlayFinish()
0x5fd: Pop(0)
0x5fe: @ ResumeWorld()
0x5ff: Pop(0)
0x600: Stack[-21] = (bool) 1
0x601: Return(); Pop(18)

0x602: PushEmpty(bool, bool)
0x603: Push((bool) 1)
0x604: @ CameraSwitchToNormal(Stack[-1])
0x605: Pop(1)
0x606: PushEmpty(bool)
0x607: Call2 0x76e

0x608: Pop(0)
0x609: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x60a: GOTO 0x613

0x60b: Push("head")
0x60c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x60d: Pop(1)
0x60e: Push(Stack[-1])
0x60f: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x610: Push("head")
0x611: @ UnlookAsync(Stack[-1])
0x612: Pop(1)
0x613: Return(); Pop(2)

0x614: PushEmpty(int, int, int, int)
0x615: Push("voice_common")
0x616: @ GetVariable(Stack[-1], Stack[-3])
0x617: Pop(1)
0x618: Push(Stack[-2])
0x619: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x61a: PushEmpty(bool, object)
0x61b: Stack[-1] = Stack[-7]
0x61c: Call2 0x64e

0x61d: Pop(1)
0x61e: Pop(1); Push((bool) Stack[-1] == 0)
0x61f: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x620: PushEmpty(bool, object)
0x621: Stack[-1] = Stack[-7]
0x622: Call2 0x673

0x623: Pop(1)
0x624: Pop(1); Push((bool) Stack[-1] == 0)
0x625: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x626: Stack[-6] = (bool) 0
0x627: Return(); Pop(4)

0x628: Push((int) 2)
0x629: @ irand(Stack[-2], Stack[-1])
0x62a: Pop(1)
0x62b: Push(Stack[-1])
0x62c: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x62d: Push("voice_common")
0x62e: Push((int) 1)
0x62f: Pop(1); Push(Stack[-4] + Stack[-1]);
0x630: Push((int) 3)
0x631: Pop(2); Push(Stack[-2] % Stack[-1]);
0x632: @ SetVariable(Stack[-2], Stack[-1])
0x633: Pop(2)
0x634: GOTO 0x639

0x635: Push("voice_common")
0x636: Push((int) 0)
0x637: @ SetVariable(Stack[-2], Stack[-1])
0x638: Pop(2)
0x639: GOTO 0x64c

0x63a: PushEmpty(bool, object)
0x63b: Stack[-1] = Stack[-7]
0x63c: Call2 0x673

0x63d: Pop(1)
0x63e: Pop(1); Push((bool) Stack[-1] == 0)
0x63f: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x640: PushEmpty(bool, object)
0x641: Stack[-1] = Stack[-7]
0x642: Call2 0x64e

0x643: Pop(1)
0x644: Pop(1); Push((bool) Stack[-1] == 0)
0x645: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x646: Stack[-6] = (bool) 0
0x647: Return(); Pop(4)

0x648: Push("voice_common")
0x649: Push((int) 1)
0x64a: @ SetVariable(Stack[-2], Stack[-1])
0x64b: Pop(2)
0x64c: Stack[-6] = (bool) 1
0x64d: Return(); Pop(4)

0x64e: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x64f: Stack[-5] = "c"
0x650: Stack[-4] = (int) 0
0x651: Push((int) 1)
0x652: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x653: Push((int) 1)
0x654: Pop(1); Push(Stack[-5] + Stack[-1]);
0x655: Pop(1); Push(Stack[-6] + Stack[-1]);
0x656: @@ HasProperty(Stack[-1], Stack[-4])
0x657: Pop(1)
0x658: Pop(0); Push((bool) Stack[-3] == 0)
0x659: IF (Stack[-1] == 0) GOTO 0x65b; Pop(1)

0x65a: GOTO 0x65e

0x65b: Push((int) 1)
0x65c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x65d: GOTO 0x651

0x65e: Pop(0); Push((bool) Stack[-4] == 0)
0x65f: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x660: Stack[-12] = (bool) 0
0x661: Return(); Pop(10)

0x662: Stack[-2] = (int) 0
0x663: Push((int) 1)
0x664: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x665: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x666: @ irand(Stack[-2], Stack[-4])
0x667: Pop(0)
0x668: Push((int) 1)
0x669: Pop(1); Push(Stack[-3] + Stack[-1]);
0x66a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x66b: @@ GetProperty(Stack[-1], Stack[-2])
0x66c: Pop(1)
0x66d: PushEmpty(bool, string)
0x66e: Stack[-1] = Stack[-3]
0x66f: Call2 0x6bd

0x670: Stack[-14] = Stack[-2]
0x671: Pop(2)
0x672: Return(); Pop(10)

0x673: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x674: Push("d")
0x675: PushEmpty(int)
0x676: Call2 0x73f

0x677: Pop(0)
0x678: Pop(2); Push(Stack[-2] + Stack[-1]);
0x679: Push("m")
0x67a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x67b: Stack[-4] = (int) 0
0x67c: Push((int) 1)
0x67d: IF (Stack[-1] == 0) GOTO 0x689; Pop(1)

0x67e: Push((int) 1)
0x67f: Pop(1); Push(Stack[-5] + Stack[-1]);
0x680: Pop(1); Push(Stack[-6] + Stack[-1]);
0x681: @@ HasProperty(Stack[-1], Stack[-4])
0x682: Pop(1)
0x683: Pop(0); Push((bool) Stack[-3] == 0)
0x684: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x685: GOTO 0x689

0x686: Push((int) 1)
0x687: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x688: GOTO 0x67c

0x689: Pop(0); Push((bool) Stack[-4] == 0)
0x68a: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x68b: Stack[-12] = (bool) 0
0x68c: Return(); Pop(10)

0x68d: Stack[-2] = (int) 0
0x68e: Push((int) 1)
0x68f: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x690: IF (Stack[-1] == 0) GOTO 0x693; Pop(1)

0x691: @ irand(Stack[-2], Stack[-4])
0x692: Pop(0)
0x693: Push((int) 1)
0x694: Pop(1); Push(Stack[-3] + Stack[-1]);
0x695: Pop(1); Push(Stack[-6] + Stack[-1]);
0x696: @@ GetProperty(Stack[-1], Stack[-2])
0x697: Pop(1)
0x698: PushEmpty(bool, string)
0x699: Stack[-1] = Stack[-3]
0x69a: Call2 0x6bd

0x69b: Stack[-14] = Stack[-2]
0x69c: Pop(2)
0x69d: Return(); Pop(10)

0x69e: PushEmpty(bool, float, float, bool, float, float)
0x69f: @ lshHasAnimation(Stack[-3], Stack[-7])
0x6a0: Pop(0)
0x6a1: Push(Stack[-3])
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x6a3: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x6a4: Pop(0)
0x6a5: Push((bool) 0)
0x6a6: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6a7: Pop(1)
0x6a8: GOTO 0x6ad

0x6a9: Push("Can't find lsh animation : ")
0x6aa: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6ab: @ Trace(Stack[-1])
0x6ac: Pop(1)
0x6ad: Return(); Pop(6)

0x6ae: PushEmpty(bool, float, float, bool, float, float)
0x6af: @ lshHasAnimation(Stack[-3], Stack[-8])
0x6b0: Pop(0)
0x6b1: Push(Stack[-3])
0x6b2: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x6b3: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x6b4: Pop(0)
0x6b5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x6b6: Pop(0)
0x6b7: GOTO 0x6bc

0x6b8: Push("Can't find lsh animation : ")
0x6b9: Pop(1); Push(Stack[-1] + Stack[-9]);
0x6ba: @ Trace(Stack[-1])
0x6bb: Pop(1)
0x6bc: Return(); Pop(6)

0x6bd: PushEmpty(bool, bool)
0x6be: PushEmpty(bool)
0x6bf: Call2 0x76e

0x6c0: Pop(0)
0x6c1: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6c2: @ lshHasSpeech(Stack[-1], Stack[-3])
0x6c3: Pop(0)
0x6c4: Push(Stack[-1])
0x6c5: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6c6: @ lshPlaySpeech(Stack[-3])
0x6c7: Pop(0)
0x6c8: Stack[-4] = (bool) 1
0x6c9: Return(); Pop(2)

0x6ca: Stack[-4] = (bool) 0
0x6cb: Return(); Pop(2)

0x6cc: PushEmpty(bool)
0x6cd: Call2 0x76e

0x6ce: Pop(0)
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6d0: @ lshStopSpeech()
0x6d1: Pop(0)
0x6d2: Return(); Pop(0)

0x6d3: PushEmpty(object, object)
0x6d4: @ self(Stack[-1])
0x6d5: Pop(0)
0x6d6: Stack[-3] = Stack[-1]
0x6d7: Return(); Pop(2)

0x6d8: Stack[-1] = 0
0x6d9: PushEmpty(float, float)
0x6da: Pop(0); Push(Stack[-3] | Stack[-3]);
0x6db: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x6dc: Push((float)0.0)
0x6dd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x6de: IF (Stack[-1] == 0) GOTO 0x6e1; Pop(1)

0x6df: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x6e0: Return(); Pop(2)

0x6e1: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x6e2: Return(); Pop(2)

0x6e3: PushEmpty()
0x6e4: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x6e5: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6e6: Stack[-4] = Stack[-2]
0x6e7: Return(); Pop(0)

0x6e8: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x6e9: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6ea: Stack[-4] = Stack[-1]
0x6eb: Return(); Pop(0)

0x6ec: Stack[-4] = Stack[-3]
0x6ed: Return(); Pop(0)

0x6ee: PushEmpty(int, int)
0x6ef: @ GetVariable(Stack[-3], Stack[-1])
0x6f0: Pop(0)
0x6f1: Stack[-4] = Stack[-1]
0x6f2: Return(); Pop(2)

0x6f3: PushEmpty(object, object)
0x6f4: @ CreateIntVector(Stack[-1])
0x6f5: Pop(0)
0x6f6: @@ add(Stack[-4])
0x6f7: Pop(0)
0x6f8: @@ add(Stack[-3])
0x6f9: Pop(0)
0x6fa: Push((int) 3)
0x6fb: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6fc: Pop(1)
0x6fd: Return(); Pop(2)

0x6fe: Stack[-1] = 0
0x6ff: PushEmpty(int, int)
0x700: PushEmpty(object, string, int)
0x701: Stack[-3] = Stack[-7]
0x702: Stack[-2] = "money"
0x703: Stack[-1] = Stack[-6]
0x704: Call2 0x59e

0x705: Pop(3)
0x706: Push((int) 0)
0x707: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x708: IF (Stack[-1] == 0) GOTO 0x711; Pop(1)

0x709: Push("Money")
0x70a: @ GetInvItemByName(Stack[-2], Stack[-1])
0x70b: Pop(1)
0x70c: PushEmpty(int, int)
0x70d: Stack[-2] = Stack[-3]
0x70e: Stack[-1] = Stack[-5]
0x70f: Call2 0x6f3

0x710: Pop(2)
0x711: Return(); Pop(2)

0x712: PushEmpty()
0x713: Pop(0); Push((bool) Stack[-2] == 0)
0x714: IF (Stack[-1] == 0) GOTO 0x717; Pop(1)

0x715: Stack[-3] = (bool) 0
0x716: Return(); Pop(0)

0x717: Push((int) 0)
0x718: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x719: IF (Stack[-1] == 0) GOTO 0x71e; Pop(1)

0x71a: Push((int) 8)
0x71b: @ SendWorldWndMessage(Stack[-1])
0x71c: Pop(1)
0x71d: GOTO 0x727

0x71e: Push((int) 0)
0x71f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x720: IF (Stack[-1] == 0) GOTO 0x725; Pop(1)

0x721: Push((int) 9)
0x722: @ SendWorldWndMessage(Stack[-1])
0x723: Pop(1)
0x724: GOTO 0x727

0x725: Stack[-3] = (bool) 0
0x726: Return(); Pop(0)

0x727: PushEmpty(float)
0x728: Stack[-1] = Stack[-2]
0x729: Call2 0x735

0x72a: Pop(1)
0x72b: PushEmpty(bool, object, string, float, float, float)
0x72c: Stack[-5] = Stack[-8]
0x72d: Stack[-4] = "reputation"
0x72e: Stack[-3] = Stack[-7]
0x72f: Stack[-2] = (int) 0
0x730: Stack[-1] = (int) 1
0x731: Call2 0x588

0x732: Pop(6)
0x733: Stack[-3] = (bool) 1
0x734: Return(); Pop(0)

0x735: PushEmpty(object, object)
0x736: @ CreateFloatVector(Stack[-1])
0x737: Pop(0)
0x738: @@ add(Stack[-3])
0x739: Pop(0)
0x73a: Push((int) 16)
0x73b: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x73c: Pop(1)
0x73d: Return(); Pop(2)

0x73e: Stack[-1] = 0
0x73f: PushEmpty(float, float)
0x740: @ GetGameTime(Stack[-1])
0x741: Pop(0)
0x742: Push((int) 1)
0x743: PushEmpty(int)
0x744: Push((int) 24)
0x745: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x746: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x747: Return(); Pop(2)

0x748: PushEmpty()
0x749: PushEmpty(int)
0x74a: Call2 0x73f

0x74b: Pop(0)
0x74c: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x74d: Return(); Pop(0)

0x74e: PushEmpty(string, string)
0x74f: Stack[-1] = "idle"
0x750: Push(Stack[-3])
0x751: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x752: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x753: Stack[-4] = Stack[-1]
0x754: Return(); Pop(2)

0x755: PushEmpty(int, bool, int, bool)
0x756: Stack[-2] = (int) 0
0x757: Push("all")
0x758: PushEmpty(string, int)
0x759: Stack[-1] = Stack[-5]
0x75a: Call2 0x74e

0x75b: Pop(1)
0x75c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x75d: Pop(2)
0x75e: Pop(0); Push((bool) Stack[-1] == 0)
0x75f: IF (Stack[-1] == 0) GOTO 0x761; Pop(1)

0x760: GOTO 0x764

0x761: Push((int) 1)
0x762: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x763: GOTO 0x757

0x764: Stack[-5] = Stack[-2]
0x765: Return(); Pop(4)

0x766: Stack[-1] = (int) 515531
0x767: Return(); Pop(0)

0x768: Stack[-1] = (int) 502857
0x769: Return(); Pop(0)

0x76a: Stack[-1] = "ui/NPC_BigVlad.png"
0x76b: Return(); Pop(0)

0x76c: Stack[-1] = "ui/NPC_BigVlad_b.png"
0x76d: Return(); Pop(0)

0x76e: Stack[-1] = (bool) 1
0x76f: Return(); Pop(0)

0x770: PushEmpty()
0x771: PushEmpty(bool, object, float)
0x772: Stack[-2] = Stack[-5]
0x773: Stack[-1] = (float) 0.02
0x774: Call2 0x712

0x775: Pop(3)
0x776: Return(); Pop(0)

0x777: PushEmpty(int, int)
0x778: Push((int) 1000)
0x779: @ irand(Stack[-2], Stack[-1])
0x77a: Pop(1)
0x77b: PushEmpty(object, int)
0x77c: Stack[-2] = Stack[-6]
0x77d: Push((int) 2000)
0x77e: Stack[-2] = Stack[-4] + Stack[-1]; Pop(1);
0x77f: Call2 0x6ff

0x780: Pop(2)
0x781: Return(); Pop(2)

0x782: PushEmpty()
0x783: Push("ook2BigVlad1")
0x784: Push((int) 1)
0x785: @ SetVariable(Stack[-2], Stack[-1])
0x786: Pop(2)
0x787: Return(); Pop(0)

0x788: PushEmpty()
0x789: PushEmpty(int, string)
0x78a: Stack[-1] = "k2q01"
0x78b: Call2 0x6ee

0x78c: Pop(1)
0x78d: Push((int) 2)
0x78e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x78f: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x790: Stack[-2] = (bool) 1
0x791: Return(); Pop(0)

0x792: Stack[-2] = (bool) 0
0x793: Return(); Pop(0)

0x794: PushEmpty()
0x795: PushEmpty(int, string)
0x796: Stack[-1] = "ook2BigVlad1"
0x797: Call2 0x6ee

0x798: Pop(1)
0x799: Push((int) 0)
0x79a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x79b: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x79c: Stack[-2] = (bool) 1
0x79d: Return(); Pop(0)

0x79e: Stack[-2] = (bool) 0
0x79f: Return(); Pop(0)

0x7a0: PushEmpty(int, int)
0x7a1: Push("branch")
0x7a2: @ GetVariable(Stack[-1], Stack[-2])
0x7a3: Pop(1)
0x7a4: Push((int) 0)
0x7a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7a6: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7a7: Stack[-3] = (int) 1
0x7a8: Return(); Pop(2)

0x7a9: GOTO 0x7af

0x7aa: Push((int) 1)
0x7ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ac: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x7ad: Stack[-3] = (int) 2
0x7ae: Return(); Pop(2)

0x7af: Stack[-3] = (int) 3
0x7b0: Return(); Pop(2)

0x7b1: PushEmpty()
0x7b2: Push(GlobalVars[1])
0x7b3: Pop(1); Push((bool) Stack[-1] == 0)
0x7b4: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7b5: PushEmpty(int, object)
0x7b6: Stack[-1] = Stack[-3]
0x7b7: Push(-2, 1); TaskCall(2)
0x7b8: Call2 0x1aa

0x7b9: Pop(-2, 1); TaskReturn
0x7ba: Pop(2)
0x7bb: Push(GlobalVars[1])
0x7bc: Stack[-1] = (bool) 1
0x7bd: GlobalVars[1] = Stack[-1]; Pop(1)
0x7be: PushEmpty(bool, int)
0x7bf: Stack[-1] = (int) 2
0x7c0: Call2 0x748

0x7c1: Pop(1)
0x7c2: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7c3: PushEmpty(int, object)
0x7c4: Stack[-1] = Stack[-3]
0x7c5: Push(-2, 1); TaskCall(0)
0x7c6: Call2 0x0

0x7c7: Pop(-2, 1); TaskReturn
0x7c8: Pop(2)
0x7c9: Return(); Pop(0)

0x7ca: PushEmpty(bool, int)
0x7cb: Stack[-1] = (int) 12
0x7cc: Call2 0x748

0x7cd: Pop(1)
0x7ce: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7cf: PushEmpty(int, object)
0x7d0: Stack[-1] = Stack[-3]
0x7d1: Push(-2, 1); TaskCall(4)
0x7d2: Call2 0x2a3

0x7d3: Pop(-2, 1); TaskReturn
0x7d4: Pop(2)
0x7d5: Return(); Pop(0)

0x7d6: PushEmpty(int, object)
0x7d7: Stack[-1] = Stack[-3]
0x7d8: Push(-2, 1); TaskCall(6)
0x7d9: Call2 0x3a6

0x7da: Pop(-2, 1); TaskReturn
0x7db: Pop(2)
0x7dc: Return(); Pop(0)

