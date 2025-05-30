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
	Serious
	Secret
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
	ui/NPC_Spi4ka.png
	ui/NPC_Spi4ka_b.png
	k8q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	mt_spi4ka

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
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x3f9
RunTask = 8

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9c Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a7 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2d1 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3cf Vars = (int, int)
	GTASK_8 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x442 Vars = (int)
		EVENT_6 Op = 0x468 Vars = ()
		EVENT_5 Op = 0x477 Vars = ()
		EVENT_45 Op = 0x484 Vars = (bool)
		EVENT_0 Op = 0x490 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x519

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x66d

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x66b

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x66f

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x671

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x6c0

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
0x31: Call2 0x62f

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x570

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
0x48: Call2 0x55e

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
0x56: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x86

0x5a: Pop(1)
0x5b: Push((int) 525525)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 525526)
0x61: Push((int) 30726)
0x62: Push((int) 26882)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: GOTO 0x68

0x66: Return(); Pop(0)

0x67: GOTO 0x55

0x68: PushEmpty(bool)
0x69: Call2 0x673

0x6a: Pop(0)
0x6b: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x6c: @ lshWaitForAnimEnd()
0x6d: Pop(0)
0x6e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6f: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x70: GOTO 0x76

0x71: PushEmpty(string)
0x72: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x73: Call2 0x5fa

0x74: Pop(1)
0x75: GOTO 0x6c

0x76: GOTO 0x85

0x77: Push("all")
0x78: Push("idle")
0x79: @ PlayAnimation(Stack[-2], Stack[-1])
0x7a: Pop(2)
0x7b: @ WaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: Push("all")
0x81: Push("idle")
0x82: @ PlayAnimation(Stack[-2], Stack[-1])
0x83: Pop(2)
0x84: GOTO 0x7b

0x85: Return(); Pop(0)

0x86: PushEmpty()
0x87: PushEmpty(bool)
0x88: Call2 0x673

0x89: Pop(0)
0x8a: Pop(1); Push((bool) Stack[-1] == 0)
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: Return(); Pop(0)

0x8d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Return(); Pop(0)

0x90: PushEmpty(string, bool)
0x91: Stack[-2] = Stack[-3]
0x92: Push("")
0x93: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x95: Stack[-1] = (bool) 0
0x96: GOTO 0x98

0x97: Stack[-1] = (bool) 1
0x98: Call2 0x60a

0x99: Pop(2)
0x9a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9b: Return(); Pop(0)

0x9c: PushEmpty()
0x9d: Push((int) 1)
0x9e: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0x9f: PushEmpty()
0xa0: Call2 0x628

0xa1: Pop(0)
0xa2: Push((int) 26881)
0xa3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa4: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xa5: PushEmpty(string)
0xa6: Stack[-1] = "Neutral"
0xa7: Call2 0x86

0xa8: Pop(1)
0xa9: Push((int) 525525)
0xaa: @@ SetMessage(Stack[-1])
0xab: Pop(1)
0xac: @@ ClearReplies()
0xad: Pop(0)
0xae: Push((int) 525526)
0xaf: Push((int) 30726)
0xb0: Push((int) 26882)
0xb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2: Pop(3)
0xb3: Return(); Pop(0)

0xb4: Push((int) 30726)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Neutral"
0xb9: Call2 0x86

0xba: Pop(1)
0xbb: Push((int) 529273)
0xbc: @@ SetMessage(Stack[-1])
0xbd: Pop(1)
0xbe: @@ ClearReplies()
0xbf: Pop(0)
0xc0: Push((int) 529272)
0xc1: Push((int) 30728)
0xc2: Push((int) 30725)
0xc3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4: Pop(3)
0xc5: Push((int) 529274)
0xc6: Push((int) 30729)
0xc7: Push((int) 30727)
0xc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9: Pop(3)
0xca: Return(); Pop(0)

0xcb: Push((int) 30729)
0xcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral"
0xd0: Call2 0x86

0xd1: Pop(1)
0xd2: Push((int) 529276)
0xd3: @@ SetMessage(Stack[-1])
0xd4: Pop(1)
0xd5: @@ ClearReplies()
0xd6: Pop(0)
0xd7: Push((int) 529278)
0xd8: Push((int) -1)
0xd9: Push((int) 30731)
0xda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb: Pop(3)
0xdc: Return(); Pop(0)

0xdd: Push((int) 30728)
0xde: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xe0: PushEmpty(string)
0xe1: Stack[-1] = "Neutral"
0xe2: Call2 0x86

0xe3: Pop(1)
0xe4: Push((int) 529275)
0xe5: @@ SetMessage(Stack[-1])
0xe6: Pop(1)
0xe7: @@ ClearReplies()
0xe8: Pop(0)
0xe9: Push((int) 529277)
0xea: Push((int) -1)
0xeb: Push((int) 30730)
0xec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf0: PushEmpty(bool)
0xf1: Call2 0x673

0xf2: Pop(0)
0xf3: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf4: @ lshStopAnimation()
0xf5: Pop(0)
0xf6: GOTO 0xf9

0xf7: @ StopAnimation()
0xf8: Pop(0)
0xf9: Return(); Pop(0)

0xfa: GOTO 0x9d

0xfb: Return(); Pop(0)

0xfc: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xfd: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xfe: PushEmpty(bool, object, float)
0xff: Stack[-2] = Stack[-12]
0x100: Stack[-1] = (float) 70.0
0x101: Call2 0x519

0x102: Pop(2)
0x103: Pop(1); Push((bool) Stack[-1] == 0)
0x104: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x105: Stack[-10] = (int) -2
0x106: Return(); Pop(8)

0x107: @ CreateDialog(Stack[-4])
0x108: Pop(0)
0x109: PushEmpty(int)
0x10a: Call2 0x66d

0x10b: Pop(0)
0x10c: @@ SetNPCName(Stack[-1])
0x10d: Pop(1)
0x10e: PushEmpty(int)
0x10f: Call2 0x66b

0x110: Pop(0)
0x111: @@ SetNPCDescription(Stack[-1])
0x112: Pop(1)
0x113: PushEmpty(string)
0x114: Call2 0x66f

0x115: Pop(0)
0x116: @@ SetPhoto(Stack[-1])
0x117: Pop(1)
0x118: PushEmpty(string)
0x119: Call2 0x671

0x11a: Pop(0)
0x11b: @@ SetPhoto2(Stack[-1])
0x11c: Pop(1)
0x11d: PushEmpty(int)
0x11e: Call2 0x6c0

0x11f: Pop(0)
0x120: @@ SetPlayerName(Stack[-1])
0x121: Pop(1)
0x122: Stack[-2] = (int) -1
0x123: @ IsOverrideActive(Stack[-3])
0x124: Pop(0)
0x125: Push(Stack[-3])
0x126: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x127: Stack[-10] = (int) -2
0x128: Return(); Pop(8)

0x129: @ DoDialog(Stack[-4])
0x12a: Pop(0)
0x12b: PushEmpty(bool, object)
0x12c: PushEmpty(object)
0x12d: Call2 0x62f

0x12e: Stack[-2] = Stack[-1]
0x12f: Pop(1)
0x130: Call2 0x570

0x131: Pop(2)
0x132: PushEmpty(object, object)
0x133: Stack[-2] = Stack[-11]
0x134: Stack[-1] = Stack[-6]
0x135: Push(-2, 4); TaskCall(3)
0x136: Call2 0x14d

0x137: Pop(-2, 4); TaskReturn
0x138: Pop(2)
0x139: @@ IsDialogEnd(Stack[-1])
0x13a: Pop(0)
0x13b: Pop(0); Push((bool) Stack[-1] == 0)
0x13c: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13d: @ sync()
0x13e: Pop(0)
0x13f: @@ IsDialogEnd(Stack[-1])
0x140: Pop(0)
0x141: GOTO 0x13b

0x142: PushEmpty(object)
0x143: Stack[-1] = Stack[-10]
0x144: Call2 0x55e

0x145: Pop(1)
0x146: @ StopDialog(Stack[-4])
0x147: Pop(0)
0x148: @@ GetReturnValue(Stack[-2])
0x149: Pop(0)
0x14a: Stack[-10] = Stack[-2]
0x14b: Return(); Pop(8)

0x14c: Stack[-4] = 0
0x14d: PushEmpty()
0x14e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x14f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x150: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x151: Push((int) 1)
0x152: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x153: PushEmpty(string)
0x154: Stack[-1] = "Serious"
0x155: Call2 0x191

0x156: Pop(1)
0x157: Push((int) 526413)
0x158: @@ SetMessage(Stack[-1])
0x159: Pop(1)
0x15a: @@ ClearReplies()
0x15b: Pop(0)
0x15c: PushEmpty(bool, object)
0x15d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15e: Call2 0x67e

0x15f: Pop(1)
0x160: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x161: Push((int) 526414)
0x162: Push((int) 30415)
0x163: Push((int) 27689)
0x164: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x165: Pop(3)
0x166: Push((int) 526419)
0x167: Push((int) -1)
0x168: Push((int) 27694)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: Push((int) 528977)
0x16c: Push((int) -1)
0x16d: Push((int) 30414)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: GOTO 0x173

0x171: Return(); Pop(0)

0x172: GOTO 0x151

0x173: PushEmpty(bool)
0x174: Call2 0x673

0x175: Pop(0)
0x176: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x177: @ lshWaitForAnimEnd()
0x178: Pop(0)
0x179: Push( Stack[3 + Tasks[-1].StackPointer] )
0x17a: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x17b: GOTO 0x181

0x17c: PushEmpty(string)
0x17d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x17e: Call2 0x5fa

0x17f: Pop(1)
0x180: GOTO 0x177

0x181: GOTO 0x190

0x182: Push("all")
0x183: Push("idle")
0x184: @ PlayAnimation(Stack[-2], Stack[-1])
0x185: Pop(2)
0x186: @ WaitForAnimEnd()
0x187: Pop(0)
0x188: Push( Stack[3 + Tasks[-1].StackPointer] )
0x189: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x18a: GOTO 0x190

0x18b: Push("all")
0x18c: Push("idle")
0x18d: @ PlayAnimation(Stack[-2], Stack[-1])
0x18e: Pop(2)
0x18f: GOTO 0x186

0x190: Return(); Pop(0)

0x191: PushEmpty()
0x192: PushEmpty(bool)
0x193: Call2 0x673

0x194: Pop(0)
0x195: Pop(1); Push((bool) Stack[-1] == 0)
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: Return(); Pop(0)

0x198: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x199: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x19a: Return(); Pop(0)

0x19b: PushEmpty(string, bool)
0x19c: Stack[-2] = Stack[-3]
0x19d: Push("")
0x19e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a0: Stack[-1] = (bool) 0
0x1a1: GOTO 0x1a3

0x1a2: Stack[-1] = (bool) 1
0x1a3: Call2 0x60a

0x1a4: Pop(2)
0x1a5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a6: Return(); Pop(0)

0x1a7: PushEmpty()
0x1a8: Push((int) 1)
0x1a9: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x1aa: PushEmpty()
0x1ab: Call2 0x628

0x1ac: Pop(0)
0x1ad: Push((int) 27693)
0x1ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b0: PushEmpty(object, object)
0x1b1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b3: Call2 0x675

0x1b4: Pop(2)
0x1b5: Push((int) 27688)
0x1b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1b8: PushEmpty(string)
0x1b9: Stack[-1] = "Serious"
0x1ba: Call2 0x191

0x1bb: Pop(1)
0x1bc: Push((int) 526413)
0x1bd: @@ SetMessage(Stack[-1])
0x1be: Pop(1)
0x1bf: @@ ClearReplies()
0x1c0: Pop(0)
0x1c1: PushEmpty(bool, object)
0x1c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c3: Call2 0x67e

0x1c4: Pop(1)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c6: Push((int) 526414)
0x1c7: Push((int) 30415)
0x1c8: Push((int) 27689)
0x1c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ca: Pop(3)
0x1cb: Push((int) 526419)
0x1cc: Push((int) -1)
0x1cd: Push((int) 27694)
0x1ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cf: Pop(3)
0x1d0: Push((int) 528977)
0x1d1: Push((int) -1)
0x1d2: Push((int) 30414)
0x1d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d4: Pop(3)
0x1d5: Return(); Pop(0)

0x1d6: Push((int) 30415)
0x1d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1d9: PushEmpty(string)
0x1da: Stack[-1] = "Secret"
0x1db: Call2 0x191

0x1dc: Pop(1)
0x1dd: Push((int) 528978)
0x1de: @@ SetMessage(Stack[-1])
0x1df: Pop(1)
0x1e0: @@ ClearReplies()
0x1e1: Pop(0)
0x1e2: Push((int) 528980)
0x1e3: Push((int) 30418)
0x1e4: Push((int) 30417)
0x1e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e6: Pop(3)
0x1e7: Return(); Pop(0)

0x1e8: Push((int) 30418)
0x1e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1eb: PushEmpty(string)
0x1ec: Stack[-1] = "Secret"
0x1ed: Call2 0x191

0x1ee: Pop(1)
0x1ef: Push((int) 528981)
0x1f0: @@ SetMessage(Stack[-1])
0x1f1: Pop(1)
0x1f2: @@ ClearReplies()
0x1f3: Pop(0)
0x1f4: Push((int) 528979)
0x1f5: Push((int) 27690)
0x1f6: Push((int) 30416)
0x1f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f8: Pop(3)
0x1f9: Return(); Pop(0)

0x1fa: Push((int) 27690)
0x1fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1fd: PushEmpty(string)
0x1fe: Stack[-1] = "Neutral"
0x1ff: Call2 0x191

0x200: Pop(1)
0x201: Push((int) 526415)
0x202: @@ SetMessage(Stack[-1])
0x203: Pop(1)
0x204: @@ ClearReplies()
0x205: Pop(0)
0x206: Push((int) 526416)
0x207: Push((int) 27692)
0x208: Push((int) 27691)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: Return(); Pop(0)

0x20c: Push((int) 27692)
0x20d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x20f: PushEmpty(string)
0x210: Stack[-1] = "Serious"
0x211: Call2 0x191

0x212: Pop(1)
0x213: Push((int) 526417)
0x214: @@ SetMessage(Stack[-1])
0x215: Pop(1)
0x216: @@ ClearReplies()
0x217: Pop(0)
0x218: Push((int) 526418)
0x219: Push((int) -1)
0x21a: Push((int) 27693)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: Return(); Pop(0)

0x21e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x21f: PushEmpty(bool)
0x220: Call2 0x673

0x221: Pop(0)
0x222: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x223: @ lshStopAnimation()
0x224: Pop(0)
0x225: GOTO 0x228

0x226: @ StopAnimation()
0x227: Pop(0)
0x228: Return(); Pop(0)

0x229: GOTO 0x1a8

0x22a: Return(); Pop(0)

0x22b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x22c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x22d: PushEmpty(bool, object, float)
0x22e: Stack[-2] = Stack[-12]
0x22f: Stack[-1] = (float) 70.0
0x230: Call2 0x519

0x231: Pop(2)
0x232: Pop(1); Push((bool) Stack[-1] == 0)
0x233: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x234: Stack[-10] = (int) -2
0x235: Return(); Pop(8)

0x236: @ CreateDialog(Stack[-4])
0x237: Pop(0)
0x238: PushEmpty(int)
0x239: Call2 0x66d

0x23a: Pop(0)
0x23b: @@ SetNPCName(Stack[-1])
0x23c: Pop(1)
0x23d: PushEmpty(int)
0x23e: Call2 0x66b

0x23f: Pop(0)
0x240: @@ SetNPCDescription(Stack[-1])
0x241: Pop(1)
0x242: PushEmpty(string)
0x243: Call2 0x66f

0x244: Pop(0)
0x245: @@ SetPhoto(Stack[-1])
0x246: Pop(1)
0x247: PushEmpty(string)
0x248: Call2 0x671

0x249: Pop(0)
0x24a: @@ SetPhoto2(Stack[-1])
0x24b: Pop(1)
0x24c: PushEmpty(int)
0x24d: Call2 0x6c0

0x24e: Pop(0)
0x24f: @@ SetPlayerName(Stack[-1])
0x250: Pop(1)
0x251: Stack[-2] = (int) -1
0x252: @ IsOverrideActive(Stack[-3])
0x253: Pop(0)
0x254: Push(Stack[-3])
0x255: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x256: Stack[-10] = (int) -2
0x257: Return(); Pop(8)

0x258: @ DoDialog(Stack[-4])
0x259: Pop(0)
0x25a: PushEmpty(bool, object)
0x25b: PushEmpty(object)
0x25c: Call2 0x62f

0x25d: Stack[-2] = Stack[-1]
0x25e: Pop(1)
0x25f: Call2 0x570

0x260: Pop(2)
0x261: PushEmpty(object, object)
0x262: Stack[-2] = Stack[-11]
0x263: Stack[-1] = Stack[-6]
0x264: Push(-2, 4); TaskCall(5)
0x265: Call2 0x27c

0x266: Pop(-2, 4); TaskReturn
0x267: Pop(2)
0x268: @@ IsDialogEnd(Stack[-1])
0x269: Pop(0)
0x26a: Pop(0); Push((bool) Stack[-1] == 0)
0x26b: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26c: @ sync()
0x26d: Pop(0)
0x26e: @@ IsDialogEnd(Stack[-1])
0x26f: Pop(0)
0x270: GOTO 0x26a

0x271: PushEmpty(object)
0x272: Stack[-1] = Stack[-10]
0x273: Call2 0x55e

0x274: Pop(1)
0x275: @ StopDialog(Stack[-4])
0x276: Pop(0)
0x277: @@ GetReturnValue(Stack[-2])
0x278: Pop(0)
0x279: Stack[-10] = Stack[-2]
0x27a: Return(); Pop(8)

0x27b: Stack[-4] = 0
0x27c: PushEmpty()
0x27d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x27e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x27f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x280: Push((int) 1)
0x281: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x282: PushEmpty(string)
0x283: Stack[-1] = "Neutral"
0x284: Call2 0x2bb

0x285: Pop(1)
0x286: Push((int) 535284)
0x287: @@ SetMessage(Stack[-1])
0x288: Pop(1)
0x289: @@ ClearReplies()
0x28a: Pop(0)
0x28b: Push((int) 535285)
0x28c: Push((int) 36962)
0x28d: Push((int) 36961)
0x28e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28f: Pop(3)
0x290: Push((int) 535292)
0x291: Push((int) -1)
0x292: Push((int) 36968)
0x293: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x294: Pop(3)
0x295: Push((int) 535293)
0x296: Push((int) -1)
0x297: Push((int) 36969)
0x298: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x299: Pop(3)
0x29a: GOTO 0x29d

0x29b: Return(); Pop(0)

0x29c: GOTO 0x280

0x29d: PushEmpty(bool)
0x29e: Call2 0x673

0x29f: Pop(0)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a1: @ lshWaitForAnimEnd()
0x2a2: Pop(0)
0x2a3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a5: GOTO 0x2ab

0x2a6: PushEmpty(string)
0x2a7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2a8: Call2 0x5fa

0x2a9: Pop(1)
0x2aa: GOTO 0x2a1

0x2ab: GOTO 0x2ba

0x2ac: Push("all")
0x2ad: Push("idle")
0x2ae: @ PlayAnimation(Stack[-2], Stack[-1])
0x2af: Pop(2)
0x2b0: @ WaitForAnimEnd()
0x2b1: Pop(0)
0x2b2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b4: GOTO 0x2ba

0x2b5: Push("all")
0x2b6: Push("idle")
0x2b7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b8: Pop(2)
0x2b9: GOTO 0x2b0

0x2ba: Return(); Pop(0)

0x2bb: PushEmpty()
0x2bc: PushEmpty(bool)
0x2bd: Call2 0x673

0x2be: Pop(0)
0x2bf: Pop(1); Push((bool) Stack[-1] == 0)
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c1: Return(); Pop(0)

0x2c2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c4: Return(); Pop(0)

0x2c5: PushEmpty(string, bool)
0x2c6: Stack[-2] = Stack[-3]
0x2c7: Push("")
0x2c8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2ca: Stack[-1] = (bool) 0
0x2cb: GOTO 0x2cd

0x2cc: Stack[-1] = (bool) 1
0x2cd: Call2 0x60a

0x2ce: Pop(2)
0x2cf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2d0: Return(); Pop(0)

0x2d1: PushEmpty()
0x2d2: Push((int) 1)
0x2d3: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x2d4: PushEmpty()
0x2d5: Call2 0x628

0x2d6: Pop(0)
0x2d7: Push((int) 36960)
0x2d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2da: PushEmpty(string)
0x2db: Stack[-1] = "Neutral"
0x2dc: Call2 0x2bb

0x2dd: Pop(1)
0x2de: Push((int) 535284)
0x2df: @@ SetMessage(Stack[-1])
0x2e0: Pop(1)
0x2e1: @@ ClearReplies()
0x2e2: Pop(0)
0x2e3: Push((int) 535285)
0x2e4: Push((int) 36962)
0x2e5: Push((int) 36961)
0x2e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e7: Pop(3)
0x2e8: Push((int) 535292)
0x2e9: Push((int) -1)
0x2ea: Push((int) 36968)
0x2eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ec: Pop(3)
0x2ed: Push((int) 535293)
0x2ee: Push((int) -1)
0x2ef: Push((int) 36969)
0x2f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f1: Pop(3)
0x2f2: Return(); Pop(0)

0x2f3: Push((int) 36962)
0x2f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x2f6: PushEmpty(string)
0x2f7: Stack[-1] = "Neutral"
0x2f8: Call2 0x2bb

0x2f9: Pop(1)
0x2fa: Push((int) 535286)
0x2fb: @@ SetMessage(Stack[-1])
0x2fc: Pop(1)
0x2fd: @@ ClearReplies()
0x2fe: Pop(0)
0x2ff: Push((int) 535287)
0x300: Push((int) 36964)
0x301: Push((int) 36963)
0x302: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x303: Pop(3)
0x304: Push((int) 535291)
0x305: Push((int) -1)
0x306: Push((int) 36967)
0x307: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x308: Pop(3)
0x309: Return(); Pop(0)

0x30a: Push((int) 36964)
0x30b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x30d: PushEmpty(string)
0x30e: Stack[-1] = "Neutral"
0x30f: Call2 0x2bb

0x310: Pop(1)
0x311: Push((int) 535288)
0x312: @@ SetMessage(Stack[-1])
0x313: Pop(1)
0x314: @@ ClearReplies()
0x315: Pop(0)
0x316: Push((int) 535289)
0x317: Push((int) -1)
0x318: Push((int) 36965)
0x319: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31a: Pop(3)
0x31b: Push((int) 535290)
0x31c: Push((int) -1)
0x31d: Push((int) 36966)
0x31e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31f: Pop(3)
0x320: Return(); Pop(0)

0x321: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x322: PushEmpty(bool)
0x323: Call2 0x673

0x324: Pop(0)
0x325: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x326: @ lshStopAnimation()
0x327: Pop(0)
0x328: GOTO 0x32b

0x329: @ StopAnimation()
0x32a: Pop(0)
0x32b: Return(); Pop(0)

0x32c: GOTO 0x2d2

0x32d: Return(); Pop(0)

0x32e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x330: PushEmpty(bool, object, float)
0x331: Stack[-2] = Stack[-12]
0x332: Stack[-1] = (float) 70.0
0x333: Call2 0x519

0x334: Pop(2)
0x335: Pop(1); Push((bool) Stack[-1] == 0)
0x336: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x337: Stack[-10] = (int) -2
0x338: Return(); Pop(8)

0x339: @ CreateDialog(Stack[-4])
0x33a: Pop(0)
0x33b: PushEmpty(int)
0x33c: Call2 0x66d

0x33d: Pop(0)
0x33e: @@ SetNPCName(Stack[-1])
0x33f: Pop(1)
0x340: PushEmpty(int)
0x341: Call2 0x66b

0x342: Pop(0)
0x343: @@ SetNPCDescription(Stack[-1])
0x344: Pop(1)
0x345: PushEmpty(string)
0x346: Call2 0x66f

0x347: Pop(0)
0x348: @@ SetPhoto(Stack[-1])
0x349: Pop(1)
0x34a: PushEmpty(string)
0x34b: Call2 0x671

0x34c: Pop(0)
0x34d: @@ SetPhoto2(Stack[-1])
0x34e: Pop(1)
0x34f: PushEmpty(int)
0x350: Call2 0x6c0

0x351: Pop(0)
0x352: @@ SetPlayerName(Stack[-1])
0x353: Pop(1)
0x354: Stack[-2] = (int) -1
0x355: @ IsOverrideActive(Stack[-3])
0x356: Pop(0)
0x357: Push(Stack[-3])
0x358: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x359: Stack[-10] = (int) -2
0x35a: Return(); Pop(8)

0x35b: @ DoDialog(Stack[-4])
0x35c: Pop(0)
0x35d: PushEmpty(bool, object)
0x35e: PushEmpty(object)
0x35f: Call2 0x62f

0x360: Stack[-2] = Stack[-1]
0x361: Pop(1)
0x362: Call2 0x570

0x363: Pop(2)
0x364: PushEmpty(object, object)
0x365: Stack[-2] = Stack[-11]
0x366: Stack[-1] = Stack[-6]
0x367: Push(-2, 4); TaskCall(7)
0x368: Call2 0x37f

0x369: Pop(-2, 4); TaskReturn
0x36a: Pop(2)
0x36b: @@ IsDialogEnd(Stack[-1])
0x36c: Pop(0)
0x36d: Pop(0); Push((bool) Stack[-1] == 0)
0x36e: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x36f: @ sync()
0x370: Pop(0)
0x371: @@ IsDialogEnd(Stack[-1])
0x372: Pop(0)
0x373: GOTO 0x36d

0x374: PushEmpty(object)
0x375: Stack[-1] = Stack[-10]
0x376: Call2 0x55e

0x377: Pop(1)
0x378: @ StopDialog(Stack[-4])
0x379: Pop(0)
0x37a: @@ GetReturnValue(Stack[-2])
0x37b: Pop(0)
0x37c: Stack[-10] = Stack[-2]
0x37d: Return(); Pop(8)

0x37e: Stack[-4] = 0
0x37f: PushEmpty()
0x380: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x381: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x382: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x383: Push((int) 1)
0x384: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x385: PushEmpty(string)
0x386: Stack[-1] = "Neutral"
0x387: Call2 0x3b9

0x388: Pop(1)
0x389: Push((int) 540545)
0x38a: @@ SetMessage(Stack[-1])
0x38b: Pop(1)
0x38c: @@ ClearReplies()
0x38d: Pop(0)
0x38e: Push((int) 540546)
0x38f: Push((int) -1)
0x390: Push((int) 42555)
0x391: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x392: Pop(3)
0x393: Push((int) 540798)
0x394: Push((int) -1)
0x395: Push((int) 42847)
0x396: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x397: Pop(3)
0x398: GOTO 0x39b

0x399: Return(); Pop(0)

0x39a: GOTO 0x383

0x39b: PushEmpty(bool)
0x39c: Call2 0x673

0x39d: Pop(0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x39f: @ lshWaitForAnimEnd()
0x3a0: Pop(0)
0x3a1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a3: GOTO 0x3a9

0x3a4: PushEmpty(string)
0x3a5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3a6: Call2 0x5fa

0x3a7: Pop(1)
0x3a8: GOTO 0x39f

0x3a9: GOTO 0x3b8

0x3aa: Push("all")
0x3ab: Push("idle")
0x3ac: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ad: Pop(2)
0x3ae: @ WaitForAnimEnd()
0x3af: Pop(0)
0x3b0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b2: GOTO 0x3b8

0x3b3: Push("all")
0x3b4: Push("idle")
0x3b5: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b6: Pop(2)
0x3b7: GOTO 0x3ae

0x3b8: Return(); Pop(0)

0x3b9: PushEmpty()
0x3ba: PushEmpty(bool)
0x3bb: Call2 0x673

0x3bc: Pop(0)
0x3bd: Pop(1); Push((bool) Stack[-1] == 0)
0x3be: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bf: Return(); Pop(0)

0x3c0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c2: Return(); Pop(0)

0x3c3: PushEmpty(string, bool)
0x3c4: Stack[-2] = Stack[-3]
0x3c5: Push("")
0x3c6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c8: Stack[-1] = (bool) 0
0x3c9: GOTO 0x3cb

0x3ca: Stack[-1] = (bool) 1
0x3cb: Call2 0x60a

0x3cc: Pop(2)
0x3cd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3ce: Return(); Pop(0)

0x3cf: PushEmpty()
0x3d0: Push((int) 1)
0x3d1: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3d2: PushEmpty()
0x3d3: Call2 0x628

0x3d4: Pop(0)
0x3d5: Push((int) 42554)
0x3d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3d8: PushEmpty(string)
0x3d9: Stack[-1] = "Neutral"
0x3da: Call2 0x3b9

0x3db: Pop(1)
0x3dc: Push((int) 540545)
0x3dd: @@ SetMessage(Stack[-1])
0x3de: Pop(1)
0x3df: @@ ClearReplies()
0x3e0: Pop(0)
0x3e1: Push((int) 540546)
0x3e2: Push((int) -1)
0x3e3: Push((int) 42555)
0x3e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e5: Pop(3)
0x3e6: Push((int) 540798)
0x3e7: Push((int) -1)
0x3e8: Push((int) 42847)
0x3e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ea: Pop(3)
0x3eb: Return(); Pop(0)

0x3ec: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3ed: PushEmpty(bool)
0x3ee: Call2 0x673

0x3ef: Pop(0)
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3f1: @ lshStopAnimation()
0x3f2: Pop(0)
0x3f3: GOTO 0x3f6

0x3f4: @ StopAnimation()
0x3f5: Pop(0)
0x3f6: Return(); Pop(0)

0x3f7: GOTO 0x3d0

0x3f8: Return(); Pop(0)

0x3f9: PushEmpty()
0x3fa: Call2 0x3fd

0x3fb: Pop(0)
0x3fc: Return(); Pop(0)

0x3fd: PushEmpty(bool)
0x3fe: Call2 0x514

0x3ff: Pop(0)
0x400: Pop(1); Push((bool) Stack[-1] == 0)
0x401: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x402: @ Hold()
0x403: Pop(0)
0x404: @ GetDirection(Stack[-0])
0x405: Pop(0)
0x406: PushEmpty()
0x407: Call2 0x4ad

0x408: Pop(0)
0x409: GOTO 0x406

0x40a: Return(); Pop(0)

0x40b: PushEmpty(object, object)
0x40c: Push("player")
0x40d: @ FindActor(Stack[-2], Stack[-1])
0x40e: Pop(1)
0x40f: Pop(0); Push((bool) Stack[-1] == 0)
0x410: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x411: Stack[-3] = (bool) 0
0x412: Return(); Pop(2)

0x413: PushEmpty(bool, object)
0x414: Stack[-1] = Stack[-3]
0x415: Call2 0x50b

0x416: Stack[-5] = Stack[-2]
0x417: Pop(2)
0x418: Return(); Pop(2)

0x419: Stack[-1] = 0
0x41a: Push(CvectorIndex(Stack[-0], 0))
0x41b: Push(CvectorIndex(Stack[-0], 2))
0x41c: @ RotateAsync(Stack[-2], Stack[-1])
0x41d: Pop(2)
0x41e: Return(); Pop(0)

0x41f: PushEmpty(object, bool, object, bool)
0x420: Push("player")
0x421: @ FindActor(Stack[-3], Stack[-1])
0x422: Pop(1)
0x423: Pop(0); Push((bool) Stack[-2] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x425: Stack[-5] = (bool) 0
0x426: Return(); Pop(4)

0x427: PushEmpty(float, object)
0x428: Stack[-1] = Stack[-4]
0x429: Call2 0x4f9

0x42a: Pop(1)
0x42b: Push((float)90000.0)
0x42c: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x42d: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42e: Stack[-5] = (bool) 0
0x42f: Return(); Pop(4)

0x430: @ CanSee(Stack[-1], Stack[-2])
0x431: Pop(0)
0x432: Stack[-5] = Stack[-1]
0x433: Return(); Pop(4)

0x434: Stack[-2] = 0
0x435: PushEmpty(float, float)
0x436: Push((int) 8)
0x437: Push((int) 16)
0x438: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x439: Pop(2)
0x43a: Push((int) 10)
0x43b: @ SetTimer(Stack[-1], Stack[-2])
0x43c: Pop(1)
0x43d: Return(); Pop(2)

0x43e: Push((int) 10)
0x43f: @ KillTimer(Stack[-1])
0x440: Pop(1)
0x441: Return(); Pop(0)

0x442: PushEmpty()
0x443: Push((int) 10)
0x444: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x445: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x446: PushEmpty()
0x447: Call2 0x43e

0x448: Pop(0)
0x449: PushEmpty(bool)
0x44a: Stack[-1] = (bool) 0
0x44b: PushEmpty(bool)
0x44c: Call2 0x514

0x44d: Pop(0)
0x44e: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x44f: PushEmpty(bool)
0x450: Call2 0x41f

0x451: Pop(0)
0x452: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x453: Stack[-1] = (bool) 1
0x454: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x455: PushEmpty(bool)
0x456: Call2 0x40b

0x457: Pop(0)
0x458: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x459: PushEmpty(bool, object)
0x45a: PushEmpty(object)
0x45b: Call2 0x62f

0x45c: Stack[-2] = Stack[-1]
0x45d: Pop(1)
0x45e: Call2 0x5aa

0x45f: Pop(2)
0x460: GOTO 0x467

0x461: PushEmpty()
0x462: Call2 0x41a

0x463: Pop(0)
0x464: PushEmpty()
0x465: Call2 0x435

0x466: Pop(0)
0x467: Return(); Pop(0)

0x468: PushEmpty()
0x469: Call2 0x4f4

0x46a: Pop(0)
0x46b: PushEmpty()
0x46c: Call2 0x43e

0x46d: Pop(0)
0x46e: @ lshStopSpeech()
0x46f: Pop(0)
0x470: @ lshStopAnimation()
0x471: Pop(0)
0x472: @ StopAsync()
0x473: Pop(0)
0x474: @ Hold()
0x475: Pop(0)
0x476: Return(); Pop(0)

0x477: @ StopGroup0()
0x478: Pop(0)
0x479: PushEmpty()
0x47a: Call2 0x43e

0x47b: Pop(0)
0x47c: PushEmpty(string)
0x47d: Stack[-1] = "Neutral"
0x47e: Call2 0x5fa

0x47f: Pop(1)
0x480: PushEmpty()
0x481: Call2 0x435

0x482: Pop(0)
0x483: Return(); Pop(0)

0x484: PushEmpty()
0x485: Push(Stack[-1])
0x486: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x487: PushEmpty()
0x488: Call2 0x435

0x489: Pop(0)
0x48a: GOTO 0x48f

0x48b: PushEmpty(string)
0x48c: Stack[-1] = "Neutral"
0x48d: Call2 0x5fa

0x48e: Pop(1)
0x48f: Return(); Pop(0)

0x490: PushEmpty(bool, bool)
0x491: @ IsOverrideActive(Stack[-1])
0x492: Pop(0)
0x493: Pop(0); Push((bool) Stack[-1] == 0)
0x494: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x495: EventDisable(0)
0x496: PushEmpty()
0x497: Call2 0x4f4

0x498: Pop(0)
0x499: PushEmpty(bool, object)
0x49a: Stack[-1] = Stack[-5]
0x49b: Call2 0x50b

0x49c: Pop(2)
0x49d: EventEnable(0)
0x49e: PushEmpty(object)
0x49f: Stack[-1] = Stack[-4]
0x4a0: Call2 0x6d1

0x4a1: Pop(1)
0x4a2: PushEmpty(string)
0x4a3: Stack[-1] = "Neutral"
0x4a4: Call2 0x5fa

0x4a5: Pop(1)
0x4a6: PushEmpty()
0x4a7: Call2 0x43e

0x4a8: Pop(0)
0x4a9: PushEmpty()
0x4aa: Call2 0x435

0x4ab: Pop(0)
0x4ac: Return(); Pop(2)

0x4ad: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x4ae: @ WaitForAnimEnd()
0x4af: Pop(0)
0x4b0: PushEmpty(bool)
0x4b1: Call2 0x514

0x4b2: Pop(0)
0x4b3: Pop(1); Push((bool) Stack[-1] == 0)
0x4b4: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b5: Return(); Pop(12)

0x4b6: PushEmpty(int)
0x4b7: Call2 0x65a

0x4b8: Stack[-7] = Stack[-1]
0x4b9: Pop(1)
0x4ba: Stack[-5] = (int) 0
0x4bb: PushEmpty(bool)
0x4bc: Stack[-1] = (bool) 0
0x4bd: Push((int) 5)
0x4be: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c0: PushEmpty(bool)
0x4c1: Call2 0x514

0x4c2: Pop(0)
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c4: Stack[-1] = (bool) 1
0x4c5: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4c6: Pop(0); Push((bool) Stack[-6] == 0)
0x4c7: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4c8: Push((int) 3)
0x4c9: @ Sleep(Stack[-1], Stack[-5])
0x4ca: Pop(1)
0x4cb: Pop(0); Push((bool) Stack[-4] == 0)
0x4cc: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cd: GOTO 0x4ef

0x4ce: GOTO 0x4e4

0x4cf: @ irand(Stack[-3], Stack[-6])
0x4d0: Pop(0)
0x4d1: Push((int) 5)
0x4d2: @ irand(Stack[-3], Stack[-1])
0x4d3: Pop(1)
0x4d4: Push((int) 0)
0x4d5: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x4d6: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d7: Stack[-3] = (int) 0
0x4d8: Push("all")
0x4d9: PushEmpty(string, int)
0x4da: Stack[-1] = Stack[-6]
0x4db: Call2 0x653

0x4dc: Pop(1)
0x4dd: @ PlayAnimation(Stack[-2], Stack[-1])
0x4de: Pop(2)
0x4df: @ WaitForAnimEnd(Stack[-1])
0x4e0: Pop(0)
0x4e1: Pop(0); Push((bool) Stack[-1] == 0)
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e3: GOTO 0x4ef

0x4e4: PushEmpty(bool)
0x4e5: Call2 0x4f2

0x4e6: Pop(0)
0x4e7: Pop(1); Push((bool) Stack[-1] == 0)
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e9: GOTO 0x4ef

0x4ea: @ ResetAAS()
0x4eb: Pop(0)
0x4ec: Push((int) 1)
0x4ed: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x4ee: GOTO 0x4bb

0x4ef: @ ResetAAS()
0x4f0: Pop(0)
0x4f1: Return(); Pop(12)

0x4f2: Stack[-1] = (bool) 1
0x4f3: Return(); Pop(0)

0x4f4: @ StopAnimation()
0x4f5: Pop(0)
0x4f6: @ StopGroup0()
0x4f7: Pop(0)
0x4f8: Return(); Pop(0)

0x4f9: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4fa: @ GetPosition(Stack[-3])
0x4fb: Pop(0)
0x4fc: @@ GetPosition(Stack[-2])
0x4fd: Pop(0)
0x4fe: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x4ff: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x500: Return(); Pop(6)

0x501: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x502: @ GetPosition(Stack[-3])
0x503: Pop(0)
0x504: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x505: Push(CvectorIndex(Stack[-2], 0))
0x506: Push(CvectorIndex(Stack[-3], 2))
0x507: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x508: Pop(2)
0x509: Stack[-8] = Stack[-1]
0x50a: Return(); Pop(6)

0x50b: PushEmpty(cvector, cvector)
0x50c: @@ GetPosition(Stack[-1])
0x50d: Pop(0)
0x50e: PushEmpty(bool, cvector)
0x50f: Stack[-1] = Stack[-3]
0x510: Call2 0x501

0x511: Stack[-6] = Stack[-2]
0x512: Pop(2)
0x513: Return(); Pop(2)

0x514: PushEmpty(bool, bool)
0x515: @ IsLoaded(Stack[-1])
0x516: Pop(0)
0x517: Stack[-3] = Stack[-1]
0x518: Return(); Pop(2)

0x519: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x51a: @@ GetPosition(Stack[-8])
0x51b: Pop(0)
0x51c: @@ GetEyesHeight(Stack[-9])
0x51d: Pop(0)
0x51e: Push(CvectorIndex(Stack[-8], 1))
0x51f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x520: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x521: @ GetPosition(Stack[-7])
0x522: Pop(0)
0x523: @ GetEyesHeight(Stack[-9])
0x524: Pop(0)
0x525: Push(CvectorIndex(Stack[-7], 1))
0x526: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x527: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x528: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x529: Push(CvectorIndex(Stack[-6], 1))
0x52a: Stack[-1] = (int) 0
0x52b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x52c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x52d: Pop(1); Push(Sqrt(Stack[-1]))
0x52e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x52f: Stack[-5] = -Stack[-6]; Pop(0);
0x530: Pop(0); Push(Stack[-6] * Stack[-19]);
0x531: PushEmpty(cvector, cvector)
0x532: Push(CVector(0.0, 1.0, 0.0))
0x533: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x534: Call2 0x635

0x535: Pop(1)
0x536: Push((int) 25)
0x537: Pop(2); Push(Stack[-2] * Stack[-1]);
0x538: Pop(2); Push(Stack[-2] + Stack[-1]);
0x539: Push(CVector(0.0, 10.0, 0.0))
0x53a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x53b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x53c: @ IsOverrideActive(Stack[-2])
0x53d: Pop(0)
0x53e: Push(Stack[-2])
0x53f: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x540: Stack[-21] = (bool) 0
0x541: Return(); Pop(18)

0x542: @ StopWorld()
0x543: Pop(0)
0x544: Push((bool) 1)
0x545: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x546: Pop(1)
0x547: Push(CvectorIndex(Stack[-4], 0))
0x548: Push(CvectorIndex(Stack[-5], 2))
0x549: @ Rotate(Stack[-2], Stack[-1])
0x54a: Pop(2)
0x54b: PushEmpty(bool)
0x54c: Call2 0x673

0x54d: Pop(0)
0x54e: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54f: GOTO 0x558

0x550: Push("head")
0x551: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x552: Pop(1)
0x553: Push(Stack[-1])
0x554: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x555: Push("head")
0x556: @ LookAsyncCamera(Stack[-1])
0x557: Pop(1)
0x558: @ CameraWaitForPlayFinish()
0x559: Pop(0)
0x55a: @ ResumeWorld()
0x55b: Pop(0)
0x55c: Stack[-21] = (bool) 1
0x55d: Return(); Pop(18)

0x55e: PushEmpty(bool, bool)
0x55f: Push((bool) 1)
0x560: @ CameraSwitchToNormal(Stack[-1])
0x561: Pop(1)
0x562: PushEmpty(bool)
0x563: Call2 0x673

0x564: Pop(0)
0x565: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x566: GOTO 0x56f

0x567: Push("head")
0x568: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x569: Pop(1)
0x56a: Push(Stack[-1])
0x56b: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x56c: Push("head")
0x56d: @ UnlookAsync(Stack[-1])
0x56e: Pop(1)
0x56f: Return(); Pop(2)

0x570: PushEmpty(int, int, int, int)
0x571: Push("voice_common")
0x572: @ GetVariable(Stack[-1], Stack[-3])
0x573: Pop(1)
0x574: Push(Stack[-2])
0x575: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x576: PushEmpty(bool, object)
0x577: Stack[-1] = Stack[-7]
0x578: Call2 0x5aa

0x579: Pop(1)
0x57a: Pop(1); Push((bool) Stack[-1] == 0)
0x57b: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x57c: PushEmpty(bool, object)
0x57d: Stack[-1] = Stack[-7]
0x57e: Call2 0x5cf

0x57f: Pop(1)
0x580: Pop(1); Push((bool) Stack[-1] == 0)
0x581: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x582: Stack[-6] = (bool) 0
0x583: Return(); Pop(4)

0x584: Push((int) 2)
0x585: @ irand(Stack[-2], Stack[-1])
0x586: Pop(1)
0x587: Push(Stack[-1])
0x588: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x589: Push("voice_common")
0x58a: Push((int) 1)
0x58b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x58c: Push((int) 3)
0x58d: Pop(2); Push(Stack[-2] % Stack[-1]);
0x58e: @ SetVariable(Stack[-2], Stack[-1])
0x58f: Pop(2)
0x590: GOTO 0x595

0x591: Push("voice_common")
0x592: Push((int) 0)
0x593: @ SetVariable(Stack[-2], Stack[-1])
0x594: Pop(2)
0x595: GOTO 0x5a8

0x596: PushEmpty(bool, object)
0x597: Stack[-1] = Stack[-7]
0x598: Call2 0x5cf

0x599: Pop(1)
0x59a: Pop(1); Push((bool) Stack[-1] == 0)
0x59b: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x59c: PushEmpty(bool, object)
0x59d: Stack[-1] = Stack[-7]
0x59e: Call2 0x5aa

0x59f: Pop(1)
0x5a0: Pop(1); Push((bool) Stack[-1] == 0)
0x5a1: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x5a2: Stack[-6] = (bool) 0
0x5a3: Return(); Pop(4)

0x5a4: Push("voice_common")
0x5a5: Push((int) 1)
0x5a6: @ SetVariable(Stack[-2], Stack[-1])
0x5a7: Pop(2)
0x5a8: Stack[-6] = (bool) 1
0x5a9: Return(); Pop(4)

0x5aa: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5ab: Stack[-5] = "c"
0x5ac: Stack[-4] = (int) 0
0x5ad: Push((int) 1)
0x5ae: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5af: Push((int) 1)
0x5b0: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5b1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5b2: @@ HasProperty(Stack[-1], Stack[-4])
0x5b3: Pop(1)
0x5b4: Pop(0); Push((bool) Stack[-3] == 0)
0x5b5: IF (Stack[-1] == 0) GOTO 0x5b7; Pop(1)

0x5b6: GOTO 0x5ba

0x5b7: Push((int) 1)
0x5b8: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5b9: GOTO 0x5ad

0x5ba: Pop(0); Push((bool) Stack[-4] == 0)
0x5bb: IF (Stack[-1] == 0) GOTO 0x5be; Pop(1)

0x5bc: Stack[-12] = (bool) 0
0x5bd: Return(); Pop(10)

0x5be: Stack[-2] = (int) 0
0x5bf: Push((int) 1)
0x5c0: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5c2: @ irand(Stack[-2], Stack[-4])
0x5c3: Pop(0)
0x5c4: Push((int) 1)
0x5c5: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5c6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5c7: @@ GetProperty(Stack[-1], Stack[-2])
0x5c8: Pop(1)
0x5c9: PushEmpty(bool, string)
0x5ca: Stack[-1] = Stack[-3]
0x5cb: Call2 0x619

0x5cc: Stack[-14] = Stack[-2]
0x5cd: Pop(2)
0x5ce: Return(); Pop(10)

0x5cf: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5d0: Push("d")
0x5d1: PushEmpty(int)
0x5d2: Call2 0x644

0x5d3: Pop(0)
0x5d4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5d5: Push("m")
0x5d6: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5d7: Stack[-4] = (int) 0
0x5d8: Push((int) 1)
0x5d9: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5da: Push((int) 1)
0x5db: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5dc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5dd: @@ HasProperty(Stack[-1], Stack[-4])
0x5de: Pop(1)
0x5df: Pop(0); Push((bool) Stack[-3] == 0)
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5e1: GOTO 0x5e5

0x5e2: Push((int) 1)
0x5e3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5e4: GOTO 0x5d8

0x5e5: Pop(0); Push((bool) Stack[-4] == 0)
0x5e6: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e7: Stack[-12] = (bool) 0
0x5e8: Return(); Pop(10)

0x5e9: Stack[-2] = (int) 0
0x5ea: Push((int) 1)
0x5eb: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5ec: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ed: @ irand(Stack[-2], Stack[-4])
0x5ee: Pop(0)
0x5ef: Push((int) 1)
0x5f0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5f1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5f2: @@ GetProperty(Stack[-1], Stack[-2])
0x5f3: Pop(1)
0x5f4: PushEmpty(bool, string)
0x5f5: Stack[-1] = Stack[-3]
0x5f6: Call2 0x619

0x5f7: Stack[-14] = Stack[-2]
0x5f8: Pop(2)
0x5f9: Return(); Pop(10)

0x5fa: PushEmpty(bool, float, float, bool, float, float)
0x5fb: @ lshHasAnimation(Stack[-3], Stack[-7])
0x5fc: Pop(0)
0x5fd: Push(Stack[-3])
0x5fe: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x5ff: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x600: Pop(0)
0x601: Push((bool) 0)
0x602: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x603: Pop(1)
0x604: GOTO 0x609

0x605: Push("Can't find lsh animation : ")
0x606: Pop(1); Push(Stack[-1] + Stack[-8]);
0x607: @ Trace(Stack[-1])
0x608: Pop(1)
0x609: Return(); Pop(6)

0x60a: PushEmpty(bool, float, float, bool, float, float)
0x60b: @ lshHasAnimation(Stack[-3], Stack[-8])
0x60c: Pop(0)
0x60d: Push(Stack[-3])
0x60e: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x60f: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x610: Pop(0)
0x611: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x612: Pop(0)
0x613: GOTO 0x618

0x614: Push("Can't find lsh animation : ")
0x615: Pop(1); Push(Stack[-1] + Stack[-9]);
0x616: @ Trace(Stack[-1])
0x617: Pop(1)
0x618: Return(); Pop(6)

0x619: PushEmpty(bool, bool)
0x61a: PushEmpty(bool)
0x61b: Call2 0x673

0x61c: Pop(0)
0x61d: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x61e: @ lshHasSpeech(Stack[-1], Stack[-3])
0x61f: Pop(0)
0x620: Push(Stack[-1])
0x621: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x622: @ lshPlaySpeech(Stack[-3])
0x623: Pop(0)
0x624: Stack[-4] = (bool) 1
0x625: Return(); Pop(2)

0x626: Stack[-4] = (bool) 0
0x627: Return(); Pop(2)

0x628: PushEmpty(bool)
0x629: Call2 0x673

0x62a: Pop(0)
0x62b: IF (Stack[-1] == 0) GOTO 0x62e; Pop(1)

0x62c: @ lshStopSpeech()
0x62d: Pop(0)
0x62e: Return(); Pop(0)

0x62f: PushEmpty(object, object)
0x630: @ self(Stack[-1])
0x631: Pop(0)
0x632: Stack[-3] = Stack[-1]
0x633: Return(); Pop(2)

0x634: Stack[-1] = 0
0x635: PushEmpty(float, float)
0x636: Pop(0); Push(Stack[-3] | Stack[-3]);
0x637: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x638: Push((float)0.0)
0x639: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x63a: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x63b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x63c: Return(); Pop(2)

0x63d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x63e: Return(); Pop(2)

0x63f: PushEmpty(int, int)
0x640: @ GetVariable(Stack[-3], Stack[-1])
0x641: Pop(0)
0x642: Stack[-4] = Stack[-1]
0x643: Return(); Pop(2)

0x644: PushEmpty(float, float)
0x645: @ GetGameTime(Stack[-1])
0x646: Pop(0)
0x647: Push((int) 1)
0x648: PushEmpty(int)
0x649: Push((int) 24)
0x64a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x64b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x64c: Return(); Pop(2)

0x64d: PushEmpty()
0x64e: PushEmpty(int)
0x64f: Call2 0x644

0x650: Pop(0)
0x651: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x652: Return(); Pop(0)

0x653: PushEmpty(string, string)
0x654: Stack[-1] = "idle"
0x655: Push(Stack[-3])
0x656: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x657: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x658: Stack[-4] = Stack[-1]
0x659: Return(); Pop(2)

0x65a: PushEmpty(int, bool, int, bool)
0x65b: Stack[-2] = (int) 0
0x65c: Push("all")
0x65d: PushEmpty(string, int)
0x65e: Stack[-1] = Stack[-5]
0x65f: Call2 0x653

0x660: Pop(1)
0x661: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x662: Pop(2)
0x663: Pop(0); Push((bool) Stack[-1] == 0)
0x664: IF (Stack[-1] == 0) GOTO 0x666; Pop(1)

0x665: GOTO 0x669

0x666: Push((int) 1)
0x667: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x668: GOTO 0x65c

0x669: Stack[-5] = Stack[-2]
0x66a: Return(); Pop(4)

0x66b: Stack[-1] = (int) 515552
0x66c: Return(); Pop(0)

0x66d: Stack[-1] = (int) 502877
0x66e: Return(); Pop(0)

0x66f: Stack[-1] = "ui/NPC_Spi4ka.png"
0x670: Return(); Pop(0)

0x671: Stack[-1] = "ui/NPC_Spi4ka_b.png"
0x672: Return(); Pop(0)

0x673: Stack[-1] = (bool) 1
0x674: Return(); Pop(0)

0x675: PushEmpty()
0x676: Push("k8q01")
0x677: Push((int) 3)
0x678: @ SetVariable(Stack[-2], Stack[-1])
0x679: Pop(2)
0x67a: PushEmpty()
0x67b: Call2 0x68a

0x67c: Pop(0)
0x67d: Return(); Pop(0)

0x67e: PushEmpty()
0x67f: PushEmpty(int, string)
0x680: Stack[-1] = "k8q01"
0x681: Call2 0x63f

0x682: Pop(1)
0x683: Push((int) 2)
0x684: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x685: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x686: Stack[-2] = (bool) 1
0x687: Return(); Pop(0)

0x688: Stack[-2] = (bool) 0
0x689: Return(); Pop(0)

0x68a: PushEmpty(object, object)
0x68b: Push((int) 441)
0x68c: Push((int) 1)
0x68d: Push((int) 526466)
0x68e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x68f: Pop(3)
0x690: PushEmpty(bool, object, int)
0x691: Stack[-2] = Stack[-4]
0x692: Stack[-1] = (int) 438
0x693: Call2 0x6a4

0x694: Pop(3)
0x695: Return(); Pop(2)

0x696: Stack[-1] = 0
0x697: PushEmpty(object, object)
0x698: @ GetDiaryRoot(Stack[-1])
0x699: Pop(0)
0x69a: Pop(0); Push((bool) Stack[-1] == 0)
0x69b: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x69c: Push("Can't retrieve diary root")
0x69d: @ Trace(Stack[-1])
0x69e: Pop(1)
0x69f: Stack[-3] = (bool) 0
0x6a0: Return(); Pop(2)

0x6a1: Stack[-3] = Stack[-1]
0x6a2: Return(); Pop(2)

0x6a3: Stack[-1] = 0
0x6a4: PushEmpty(object, object, int, object, object, int)
0x6a5: PushEmpty(object)
0x6a6: Call2 0x697

0x6a7: Stack[-4] = Stack[-1]
0x6a8: Pop(1)
0x6a9: @@ Find(Stack[-7], Stack[-2])
0x6aa: Pop(0)
0x6ab: Pop(0); Push((bool) Stack[-2] == 0)
0x6ac: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6ad: Push("Can't find diary parent with id: ")
0x6ae: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6af: @ Trace(Stack[-1])
0x6b0: Pop(1)
0x6b1: Stack[-9] = (bool) 0
0x6b2: Return(); Pop(6)

0x6b3: @@ AddChild(Stack[-8])
0x6b4: Pop(0)
0x6b5: Push((int) 7)
0x6b6: @ SendWorldWndMessage(Stack[-1])
0x6b7: Pop(1)
0x6b8: @@ GetCategory(Stack[-1])
0x6b9: Pop(0)
0x6ba: @ SetDiarySection(Stack[-1])
0x6bb: Pop(0)
0x6bc: Stack[-9] = (bool) 0
0x6bd: Return(); Pop(6)

0x6be: Stack[-2] = 0
0x6bf: Stack[-3] = 0
0x6c0: PushEmpty(int, int)
0x6c1: Push("branch")
0x6c2: @ GetVariable(Stack[-1], Stack[-2])
0x6c3: Pop(1)
0x6c4: Push((int) 0)
0x6c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c6: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6c7: Stack[-3] = (int) 1
0x6c8: Return(); Pop(2)

0x6c9: GOTO 0x6cf

0x6ca: Push((int) 1)
0x6cb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6cc: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6cd: Stack[-3] = (int) 2
0x6ce: Return(); Pop(2)

0x6cf: Stack[-3] = (int) 3
0x6d0: Return(); Pop(2)

0x6d1: PushEmpty(int, int)
0x6d2: Push("mt_spi4ka")
0x6d3: @ GetVariable(Stack[-1], Stack[-2])
0x6d4: Pop(1)
0x6d5: Pop(0); Push((bool) Stack[-1] == 0)
0x6d6: IF (Stack[-1] == 0) GOTO 0x6e1; Pop(1)

0x6d7: PushEmpty(int, object)
0x6d8: Stack[-1] = Stack[-5]
0x6d9: Push(-2, 1); TaskCall(0)
0x6da: Call2 0x0

0x6db: Pop(-2, 1); TaskReturn
0x6dc: Pop(2)
0x6dd: Push("mt_spi4ka")
0x6de: Push((int) 1)
0x6df: @ SetVariable(Stack[-2], Stack[-1])
0x6e0: Pop(2)
0x6e1: PushEmpty(bool, int)
0x6e2: Stack[-1] = (int) 8
0x6e3: Call2 0x64d

0x6e4: Pop(1)
0x6e5: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x6e6: PushEmpty(int, object)
0x6e7: Stack[-1] = Stack[-5]
0x6e8: Push(-2, 1); TaskCall(2)
0x6e9: Call2 0xfc

0x6ea: Pop(-2, 1); TaskReturn
0x6eb: Pop(2)
0x6ec: Return(); Pop(2)

0x6ed: PushEmpty(bool, int)
0x6ee: Stack[-1] = (int) 12
0x6ef: Call2 0x64d

0x6f0: Pop(1)
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6f2: PushEmpty(int, object)
0x6f3: Stack[-1] = Stack[-5]
0x6f4: Push(-2, 1); TaskCall(4)
0x6f5: Call2 0x22b

0x6f6: Pop(-2, 1); TaskReturn
0x6f7: Pop(2)
0x6f8: Return(); Pop(2)

0x6f9: PushEmpty(int, object)
0x6fa: Stack[-1] = Stack[-5]
0x6fb: Push(-2, 1); TaskCall(6)
0x6fc: Call2 0x32e

0x6fd: Pop(-2, 1); TaskReturn
0x6fe: Pop(2)
0x6ff: Return(); Pop(2)

