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
	Questioning
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	Suspicion
	Doubt
	Grin
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
	b11q02
	quest_b11_02
	fail
	oob12Han1
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x497
RunTask = 8

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x24c Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x38b Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x46d Vars = (int, int)
	GTASK_8 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x4e3 Vars = (int)
		EVENT_6 Op = 0x509 Vars = ()
		EVENT_5 Op = 0x518 Vars = ()
		EVENT_45 Op = 0x525 Vars = (bool)
		EVENT_0 Op = 0x531 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x5ba

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x718

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x716

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x71a

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x71c

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x794

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
0x41: Call2 0x5fe

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
0x4f: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x739

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Questioning"
0x57: Call2 0x98

0x58: Pop(1)
0x59: Push((int) 531123)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 531124)
0x5f: Push((int) 32443)
0x60: Push((int) 32442)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x7a

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral"
0x66: Call2 0x98

0x67: Pop(1)
0x68: Push((int) 531127)
0x69: @@ SetMessage(Stack[-1])
0x6a: Pop(1)
0x6b: @@ ClearReplies()
0x6c: Pop(0)
0x6d: Push((int) 531128)
0x6e: Push((int) -1)
0x6f: Push((int) 32446)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: Push((int) 531398)
0x73: Push((int) -1)
0x74: Push((int) 32739)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x4e

0x7a: PushEmpty(bool)
0x7b: Call2 0x71e

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x699

0x86: Pop(1)
0x87: GOTO 0x7e

0x88: GOTO 0x97

0x89: Push("all")
0x8a: Push("idle")
0x8b: @ PlayAnimation(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: @ WaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: Push("all")
0x93: Push("idle")
0x94: @ PlayAnimation(Stack[-2], Stack[-1])
0x95: Pop(2)
0x96: GOTO 0x8d

0x97: Return(); Pop(0)

0x98: PushEmpty()
0x99: PushEmpty(bool)
0x9a: Call2 0x71e

0x9b: Pop(0)
0x9c: Pop(1); Push((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Return(); Pop(0)

0xa2: PushEmpty(string, bool)
0xa3: Stack[-2] = Stack[-3]
0xa4: Push("")
0xa5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa7: Stack[-1] = (bool) 0
0xa8: GOTO 0xaa

0xa9: Stack[-1] = (bool) 1
0xaa: Call2 0x6a9

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x6c7

0xb3: Pop(0)
0xb4: Push((int) 32444)
0xb5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: PushEmpty(object, object)
0xb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba: Call2 0x720

0xbb: Pop(2)
0xbc: Push((int) 32756)
0xbd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbf: PushEmpty(object, object)
0xc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2: Call2 0x720

0xc3: Pop(2)
0xc4: Push((int) 32750)
0xc5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc7: PushEmpty(object, object)
0xc8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xca: Call2 0x729

0xcb: Pop(2)
0xcc: Push((int) 32441)
0xcd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xcf: PushEmpty(bool, object)
0xd0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd1: Call2 0x739

0xd2: Pop(1)
0xd3: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xd4: PushEmpty(string)
0xd5: Stack[-1] = "Questioning"
0xd6: Call2 0x98

0xd7: Pop(1)
0xd8: Push((int) 531123)
0xd9: @@ SetMessage(Stack[-1])
0xda: Pop(1)
0xdb: @@ ClearReplies()
0xdc: Pop(0)
0xdd: Push((int) 531124)
0xde: Push((int) 32443)
0xdf: Push((int) 32442)
0xe0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1: Pop(3)
0xe2: Return(); Pop(0)

0xe3: PushEmpty(string)
0xe4: Stack[-1] = "Neutral"
0xe5: Call2 0x98

0xe6: Pop(1)
0xe7: Push((int) 531127)
0xe8: @@ SetMessage(Stack[-1])
0xe9: Pop(1)
0xea: @@ ClearReplies()
0xeb: Pop(0)
0xec: Push((int) 531128)
0xed: Push((int) -1)
0xee: Push((int) 32446)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Push((int) 531398)
0xf2: Push((int) -1)
0xf3: Push((int) 32739)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Return(); Pop(0)

0xf7: Push((int) 32745)
0xf8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xfa: Push((int) 32443)
0xfb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xfd: PushEmpty(string)
0xfe: Stack[-1] = "Suspicion"
0xff: Call2 0x98

0x100: Pop(1)
0x101: Push((int) 531125)
0x102: @@ SetMessage(Stack[-1])
0x103: Pop(1)
0x104: @@ ClearReplies()
0x105: Pop(0)
0x106: Push((int) 531399)
0x107: Push((int) 32741)
0x108: Push((int) 32740)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Return(); Pop(0)

0x10c: Push((int) 32741)
0x10d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x10f: PushEmpty(string)
0x110: Stack[-1] = "Suspicion"
0x111: Call2 0x98

0x112: Pop(1)
0x113: Push((int) 531400)
0x114: @@ SetMessage(Stack[-1])
0x115: Pop(1)
0x116: @@ ClearReplies()
0x117: Pop(0)
0x118: Push((int) 531401)
0x119: Push((int) 32757)
0x11a: Push((int) 32742)
0x11b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: Push((int) 531407)
0x11e: Push((int) 32749)
0x11f: Push((int) 32748)
0x120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: Return(); Pop(0)

0x123: Push((int) 32749)
0x124: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x125: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x126: PushEmpty(string)
0x127: Stack[-1] = "Questioning"
0x128: Call2 0x98

0x129: Pop(1)
0x12a: Push((int) 531408)
0x12b: @@ SetMessage(Stack[-1])
0x12c: Pop(1)
0x12d: @@ ClearReplies()
0x12e: Pop(0)
0x12f: Push((int) 531409)
0x130: Push((int) -1)
0x131: Push((int) 32750)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: Push((int) 32757)
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Doubt"
0x13a: Call2 0x98

0x13b: Pop(1)
0x13c: Push((int) 531415)
0x13d: @@ SetMessage(Stack[-1])
0x13e: Pop(1)
0x13f: @@ ClearReplies()
0x140: Pop(0)
0x141: Push((int) 531417)
0x142: Push((int) 32760)
0x143: Push((int) 32759)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Push((int) 531416)
0x147: Push((int) 32743)
0x148: Push((int) 32758)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: Push((int) 32743)
0x14d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14e: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x14f: PushEmpty(string)
0x150: Stack[-1] = "Grin"
0x151: Call2 0x98

0x152: Pop(1)
0x153: Push((int) 531402)
0x154: @@ SetMessage(Stack[-1])
0x155: Pop(1)
0x156: @@ ClearReplies()
0x157: Pop(0)
0x158: Push((int) 531126)
0x159: Push((int) -1)
0x15a: Push((int) 32444)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Push((int) 531410)
0x15e: Push((int) 32753)
0x15f: Push((int) 32752)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: Push((int) 32753)
0x164: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x166: PushEmpty(string)
0x167: Stack[-1] = "Neutral"
0x168: Call2 0x98

0x169: Pop(1)
0x16a: Push((int) 531411)
0x16b: @@ SetMessage(Stack[-1])
0x16c: Pop(1)
0x16d: @@ ClearReplies()
0x16e: Pop(0)
0x16f: Push((int) 531412)
0x170: Push((int) 32755)
0x171: Push((int) 32754)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Return(); Pop(0)

0x175: Push((int) 32755)
0x176: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x178: PushEmpty(string)
0x179: Stack[-1] = "Grin"
0x17a: Call2 0x98

0x17b: Pop(1)
0x17c: Push((int) 531413)
0x17d: @@ SetMessage(Stack[-1])
0x17e: Pop(1)
0x17f: @@ ClearReplies()
0x180: Pop(0)
0x181: Push((int) 531414)
0x182: Push((int) -1)
0x183: Push((int) 32756)
0x184: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x185: Pop(3)
0x186: Return(); Pop(0)

0x187: Push((int) 32760)
0x188: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x18a: PushEmpty(string)
0x18b: Stack[-1] = "Doubt"
0x18c: Call2 0x98

0x18d: Pop(1)
0x18e: Push((int) 531418)
0x18f: @@ SetMessage(Stack[-1])
0x190: Pop(1)
0x191: @@ ClearReplies()
0x192: Pop(0)
0x193: Push((int) 531419)
0x194: Push((int) 32743)
0x195: Push((int) 32761)
0x196: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x197: Pop(3)
0x198: Return(); Pop(0)

0x199: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x19a: PushEmpty(bool)
0x19b: Call2 0x71e

0x19c: Pop(0)
0x19d: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19e: @ lshStopAnimation()
0x19f: Pop(0)
0x1a0: GOTO 0x1a3

0x1a1: @ StopAnimation()
0x1a2: Pop(0)
0x1a3: Return(); Pop(0)

0x1a4: GOTO 0xaf

0x1a5: Return(); Pop(0)

0x1a6: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1a7: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1a8: PushEmpty(bool, object, float)
0x1a9: Stack[-2] = Stack[-12]
0x1aa: Stack[-1] = (float) 70.0
0x1ab: Call2 0x5ba

0x1ac: Pop(2)
0x1ad: Pop(1); Push((bool) Stack[-1] == 0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1af: Stack[-10] = (int) -2
0x1b0: Return(); Pop(8)

0x1b1: @ CreateDialog(Stack[-4])
0x1b2: Pop(0)
0x1b3: PushEmpty(int)
0x1b4: Call2 0x718

0x1b5: Pop(0)
0x1b6: @@ SetNPCName(Stack[-1])
0x1b7: Pop(1)
0x1b8: PushEmpty(int)
0x1b9: Call2 0x716

0x1ba: Pop(0)
0x1bb: @@ SetNPCDescription(Stack[-1])
0x1bc: Pop(1)
0x1bd: PushEmpty(string)
0x1be: Call2 0x71a

0x1bf: Pop(0)
0x1c0: @@ SetPhoto(Stack[-1])
0x1c1: Pop(1)
0x1c2: PushEmpty(string)
0x1c3: Call2 0x71c

0x1c4: Pop(0)
0x1c5: @@ SetPhoto2(Stack[-1])
0x1c6: Pop(1)
0x1c7: PushEmpty(int)
0x1c8: Call2 0x794

0x1c9: Pop(0)
0x1ca: @@ SetPlayerName(Stack[-1])
0x1cb: Pop(1)
0x1cc: Stack[-2] = (int) -1
0x1cd: @ IsOverrideActive(Stack[-3])
0x1ce: Pop(0)
0x1cf: Push(Stack[-3])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1d1: Stack[-10] = (int) -2
0x1d2: Return(); Pop(8)

0x1d3: @ DoDialog(Stack[-4])
0x1d4: Pop(0)
0x1d5: PushEmpty(bool, object)
0x1d6: PushEmpty(object)
0x1d7: Call2 0x6ce

0x1d8: Stack[-2] = Stack[-1]
0x1d9: Pop(1)
0x1da: Call2 0x60f

0x1db: Pop(2)
0x1dc: PushEmpty(object, object)
0x1dd: Stack[-2] = Stack[-11]
0x1de: Stack[-1] = Stack[-6]
0x1df: Push(-2, 4); TaskCall(3)
0x1e0: Call2 0x1f7

0x1e1: Pop(-2, 4); TaskReturn
0x1e2: Pop(2)
0x1e3: @@ IsDialogEnd(Stack[-1])
0x1e4: Pop(0)
0x1e5: Pop(0); Push((bool) Stack[-1] == 0)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e7: @ sync()
0x1e8: Pop(0)
0x1e9: @@ IsDialogEnd(Stack[-1])
0x1ea: Pop(0)
0x1eb: GOTO 0x1e5

0x1ec: PushEmpty(object)
0x1ed: Stack[-1] = Stack[-10]
0x1ee: Call2 0x5fe

0x1ef: Pop(1)
0x1f0: @ StopDialog(Stack[-4])
0x1f1: Pop(0)
0x1f2: @@ GetReturnValue(Stack[-2])
0x1f3: Pop(0)
0x1f4: Stack[-10] = Stack[-2]
0x1f5: Return(); Pop(8)

0x1f6: Stack[-4] = 0
0x1f7: PushEmpty()
0x1f8: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1f9: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1fa: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1fb: Push((int) 1)
0x1fc: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x1fd: PushEmpty(string)
0x1fe: Stack[-1] = "Doubt"
0x1ff: Call2 0x236

0x200: Pop(1)
0x201: Push((int) 535268)
0x202: @@ SetMessage(Stack[-1])
0x203: Pop(1)
0x204: @@ ClearReplies()
0x205: Pop(0)
0x206: PushEmpty(bool, object)
0x207: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x208: Call2 0x745

0x209: Pop(1)
0x20a: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20b: Push((int) 535269)
0x20c: Push((int) 37004)
0x20d: Push((int) 36944)
0x20e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20f: Pop(3)
0x210: Push((int) 535322)
0x211: Push((int) -1)
0x212: Push((int) 37003)
0x213: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x214: Pop(3)
0x215: GOTO 0x218

0x216: Return(); Pop(0)

0x217: GOTO 0x1fb

0x218: PushEmpty(bool)
0x219: Call2 0x71e

0x21a: Pop(0)
0x21b: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x21c: @ lshWaitForAnimEnd()
0x21d: Pop(0)
0x21e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x21f: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x220: GOTO 0x226

0x221: PushEmpty(string)
0x222: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x223: Call2 0x699

0x224: Pop(1)
0x225: GOTO 0x21c

0x226: GOTO 0x235

0x227: Push("all")
0x228: Push("idle")
0x229: @ PlayAnimation(Stack[-2], Stack[-1])
0x22a: Pop(2)
0x22b: @ WaitForAnimEnd()
0x22c: Pop(0)
0x22d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: GOTO 0x235

0x230: Push("all")
0x231: Push("idle")
0x232: @ PlayAnimation(Stack[-2], Stack[-1])
0x233: Pop(2)
0x234: GOTO 0x22b

0x235: Return(); Pop(0)

0x236: PushEmpty()
0x237: PushEmpty(bool)
0x238: Call2 0x71e

0x239: Pop(0)
0x23a: Pop(1); Push((bool) Stack[-1] == 0)
0x23b: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23c: Return(); Pop(0)

0x23d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x23e: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23f: Return(); Pop(0)

0x240: PushEmpty(string, bool)
0x241: Stack[-2] = Stack[-3]
0x242: Push("")
0x243: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x244: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x245: Stack[-1] = (bool) 0
0x246: GOTO 0x248

0x247: Stack[-1] = (bool) 1
0x248: Call2 0x6a9

0x249: Pop(2)
0x24a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x24b: Return(); Pop(0)

0x24c: PushEmpty()
0x24d: Push((int) 1)
0x24e: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x24f: PushEmpty()
0x250: Call2 0x6c7

0x251: Pop(0)
0x252: Push((int) 36944)
0x253: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x255: PushEmpty(object, object)
0x256: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x257: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x258: Call2 0x733

0x259: Pop(2)
0x25a: Push((int) 36943)
0x25b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25c: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x25d: PushEmpty(string)
0x25e: Stack[-1] = "Doubt"
0x25f: Call2 0x236

0x260: Pop(1)
0x261: Push((int) 535268)
0x262: @@ SetMessage(Stack[-1])
0x263: Pop(1)
0x264: @@ ClearReplies()
0x265: Pop(0)
0x266: PushEmpty(bool, object)
0x267: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x268: Call2 0x745

0x269: Pop(1)
0x26a: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26b: Push((int) 535269)
0x26c: Push((int) 37004)
0x26d: Push((int) 36944)
0x26e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26f: Pop(3)
0x270: Push((int) 535322)
0x271: Push((int) -1)
0x272: Push((int) 37003)
0x273: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x274: Pop(3)
0x275: Return(); Pop(0)

0x276: Push((int) 37004)
0x277: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x278: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x279: PushEmpty(string)
0x27a: Stack[-1] = "Doubt"
0x27b: Call2 0x236

0x27c: Pop(1)
0x27d: Push((int) 535323)
0x27e: @@ SetMessage(Stack[-1])
0x27f: Pop(1)
0x280: @@ ClearReplies()
0x281: Pop(0)
0x282: Push((int) 535325)
0x283: Push((int) 37007)
0x284: Push((int) 37006)
0x285: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x286: Pop(3)
0x287: Return(); Pop(0)

0x288: Push((int) 37008)
0x289: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28a: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x28b: Push((int) 37011)
0x28c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x28e: PushEmpty(string)
0x28f: Stack[-1] = "Grin"
0x290: Call2 0x236

0x291: Pop(1)
0x292: Push((int) 535330)
0x293: @@ SetMessage(Stack[-1])
0x294: Pop(1)
0x295: @@ ClearReplies()
0x296: Pop(0)
0x297: Push((int) 535331)
0x298: Push((int) 37007)
0x299: Push((int) 37012)
0x29a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29b: Pop(3)
0x29c: Return(); Pop(0)

0x29d: Push((int) 37015)
0x29e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29f: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2a0: PushEmpty(string)
0x2a1: Stack[-1] = "Grin"
0x2a2: Call2 0x236

0x2a3: Pop(1)
0x2a4: Push((int) 535334)
0x2a5: @@ SetMessage(Stack[-1])
0x2a6: Pop(1)
0x2a7: @@ ClearReplies()
0x2a8: Pop(0)
0x2a9: Push((int) 535336)
0x2aa: Push((int) -1)
0x2ab: Push((int) 37017)
0x2ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ad: Pop(3)
0x2ae: Push((int) 535335)
0x2af: Push((int) -1)
0x2b0: Push((int) 37016)
0x2b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b2: Pop(3)
0x2b3: Return(); Pop(0)

0x2b4: Push((int) 37007)
0x2b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2b7: PushEmpty(string)
0x2b8: Stack[-1] = "Questioning"
0x2b9: Call2 0x236

0x2ba: Pop(1)
0x2bb: Push((int) 535326)
0x2bc: @@ SetMessage(Stack[-1])
0x2bd: Pop(1)
0x2be: @@ ClearReplies()
0x2bf: Pop(0)
0x2c0: Push((int) 535332)
0x2c1: Push((int) 37014)
0x2c2: Push((int) 37013)
0x2c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c4: Pop(3)
0x2c5: Return(); Pop(0)

0x2c6: Push((int) 37014)
0x2c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2c9: PushEmpty(string)
0x2ca: Stack[-1] = "Questioning"
0x2cb: Call2 0x236

0x2cc: Pop(1)
0x2cd: Push((int) 535333)
0x2ce: @@ SetMessage(Stack[-1])
0x2cf: Pop(1)
0x2d0: @@ ClearReplies()
0x2d1: Pop(0)
0x2d2: Push((int) 535337)
0x2d3: Push((int) -1)
0x2d4: Push((int) 37019)
0x2d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d6: Pop(3)
0x2d7: Push((int) 535338)
0x2d8: Push((int) -1)
0x2d9: Push((int) 37020)
0x2da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2db: Pop(3)
0x2dc: Return(); Pop(0)

0x2dd: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2de: PushEmpty(bool)
0x2df: Call2 0x71e

0x2e0: Pop(0)
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e2: @ lshStopAnimation()
0x2e3: Pop(0)
0x2e4: GOTO 0x2e7

0x2e5: @ StopAnimation()
0x2e6: Pop(0)
0x2e7: Return(); Pop(0)

0x2e8: GOTO 0x24d

0x2e9: Return(); Pop(0)

0x2ea: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2eb: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2ec: PushEmpty(bool, object, float)
0x2ed: Stack[-2] = Stack[-12]
0x2ee: Stack[-1] = (float) 70.0
0x2ef: Call2 0x5ba

0x2f0: Pop(2)
0x2f1: Pop(1); Push((bool) Stack[-1] == 0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f3: Stack[-10] = (int) -2
0x2f4: Return(); Pop(8)

0x2f5: @ CreateDialog(Stack[-4])
0x2f6: Pop(0)
0x2f7: PushEmpty(int)
0x2f8: Call2 0x718

0x2f9: Pop(0)
0x2fa: @@ SetNPCName(Stack[-1])
0x2fb: Pop(1)
0x2fc: PushEmpty(int)
0x2fd: Call2 0x716

0x2fe: Pop(0)
0x2ff: @@ SetNPCDescription(Stack[-1])
0x300: Pop(1)
0x301: PushEmpty(string)
0x302: Call2 0x71a

0x303: Pop(0)
0x304: @@ SetPhoto(Stack[-1])
0x305: Pop(1)
0x306: PushEmpty(string)
0x307: Call2 0x71c

0x308: Pop(0)
0x309: @@ SetPhoto2(Stack[-1])
0x30a: Pop(1)
0x30b: PushEmpty(int)
0x30c: Call2 0x794

0x30d: Pop(0)
0x30e: @@ SetPlayerName(Stack[-1])
0x30f: Pop(1)
0x310: Stack[-2] = (int) -1
0x311: @ IsOverrideActive(Stack[-3])
0x312: Pop(0)
0x313: Push(Stack[-3])
0x314: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x315: Stack[-10] = (int) -2
0x316: Return(); Pop(8)

0x317: @ DoDialog(Stack[-4])
0x318: Pop(0)
0x319: PushEmpty(bool, object)
0x31a: PushEmpty(object)
0x31b: Call2 0x6ce

0x31c: Stack[-2] = Stack[-1]
0x31d: Pop(1)
0x31e: Call2 0x60f

0x31f: Pop(2)
0x320: PushEmpty(object, object)
0x321: Stack[-2] = Stack[-11]
0x322: Stack[-1] = Stack[-6]
0x323: Push(-2, 4); TaskCall(5)
0x324: Call2 0x33b

0x325: Pop(-2, 4); TaskReturn
0x326: Pop(2)
0x327: @@ IsDialogEnd(Stack[-1])
0x328: Pop(0)
0x329: Pop(0); Push((bool) Stack[-1] == 0)
0x32a: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32b: @ sync()
0x32c: Pop(0)
0x32d: @@ IsDialogEnd(Stack[-1])
0x32e: Pop(0)
0x32f: GOTO 0x329

0x330: PushEmpty(object)
0x331: Stack[-1] = Stack[-10]
0x332: Call2 0x5fe

0x333: Pop(1)
0x334: @ StopDialog(Stack[-4])
0x335: Pop(0)
0x336: @@ GetReturnValue(Stack[-2])
0x337: Pop(0)
0x338: Stack[-10] = Stack[-2]
0x339: Return(); Pop(8)

0x33a: Stack[-4] = 0
0x33b: PushEmpty()
0x33c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x33d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x33e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x33f: Push((int) 1)
0x340: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x341: PushEmpty(string)
0x342: Stack[-1] = "Neutral"
0x343: Call2 0x375

0x344: Pop(1)
0x345: Push((int) 518009)
0x346: @@ SetMessage(Stack[-1])
0x347: Pop(1)
0x348: @@ ClearReplies()
0x349: Pop(0)
0x34a: Push((int) 518010)
0x34b: Push((int) 32920)
0x34c: Push((int) 19143)
0x34d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34e: Pop(3)
0x34f: Push((int) 531560)
0x350: Push((int) -1)
0x351: Push((int) 32919)
0x352: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x353: Pop(3)
0x354: GOTO 0x357

0x355: Return(); Pop(0)

0x356: GOTO 0x33f

0x357: PushEmpty(bool)
0x358: Call2 0x71e

0x359: Pop(0)
0x35a: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x35b: @ lshWaitForAnimEnd()
0x35c: Pop(0)
0x35d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x35e: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35f: GOTO 0x365

0x360: PushEmpty(string)
0x361: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x362: Call2 0x699

0x363: Pop(1)
0x364: GOTO 0x35b

0x365: GOTO 0x374

0x366: Push("all")
0x367: Push("idle")
0x368: @ PlayAnimation(Stack[-2], Stack[-1])
0x369: Pop(2)
0x36a: @ WaitForAnimEnd()
0x36b: Pop(0)
0x36c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x36d: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36e: GOTO 0x374

0x36f: Push("all")
0x370: Push("idle")
0x371: @ PlayAnimation(Stack[-2], Stack[-1])
0x372: Pop(2)
0x373: GOTO 0x36a

0x374: Return(); Pop(0)

0x375: PushEmpty()
0x376: PushEmpty(bool)
0x377: Call2 0x71e

0x378: Pop(0)
0x379: Pop(1); Push((bool) Stack[-1] == 0)
0x37a: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x37b: Return(); Pop(0)

0x37c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x37d: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37e: Return(); Pop(0)

0x37f: PushEmpty(string, bool)
0x380: Stack[-2] = Stack[-3]
0x381: Push("")
0x382: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x384: Stack[-1] = (bool) 0
0x385: GOTO 0x387

0x386: Stack[-1] = (bool) 1
0x387: Call2 0x6a9

0x388: Pop(2)
0x389: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x38a: Return(); Pop(0)

0x38b: PushEmpty()
0x38c: Push((int) 1)
0x38d: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x38e: PushEmpty()
0x38f: Call2 0x6c7

0x390: Pop(0)
0x391: Push((int) 19142)
0x392: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x394: PushEmpty(string)
0x395: Stack[-1] = "Neutral"
0x396: Call2 0x375

0x397: Pop(1)
0x398: Push((int) 518009)
0x399: @@ SetMessage(Stack[-1])
0x39a: Pop(1)
0x39b: @@ ClearReplies()
0x39c: Pop(0)
0x39d: Push((int) 518010)
0x39e: Push((int) 32920)
0x39f: Push((int) 19143)
0x3a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a1: Pop(3)
0x3a2: Push((int) 531560)
0x3a3: Push((int) -1)
0x3a4: Push((int) 32919)
0x3a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a6: Pop(3)
0x3a7: Return(); Pop(0)

0x3a8: Push((int) 32920)
0x3a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3ab: PushEmpty(string)
0x3ac: Stack[-1] = "Neutral"
0x3ad: Call2 0x375

0x3ae: Pop(1)
0x3af: Push((int) 531561)
0x3b0: @@ SetMessage(Stack[-1])
0x3b1: Pop(1)
0x3b2: @@ ClearReplies()
0x3b3: Pop(0)
0x3b4: Push((int) 531562)
0x3b5: Push((int) -1)
0x3b6: Push((int) 32921)
0x3b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b8: Pop(3)
0x3b9: Push((int) 531563)
0x3ba: Push((int) -1)
0x3bb: Push((int) 32922)
0x3bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bd: Pop(3)
0x3be: Return(); Pop(0)

0x3bf: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3c0: PushEmpty(bool)
0x3c1: Call2 0x71e

0x3c2: Pop(0)
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c4: @ lshStopAnimation()
0x3c5: Pop(0)
0x3c6: GOTO 0x3c9

0x3c7: @ StopAnimation()
0x3c8: Pop(0)
0x3c9: Return(); Pop(0)

0x3ca: GOTO 0x38c

0x3cb: Return(); Pop(0)

0x3cc: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3cd: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3ce: PushEmpty(bool, object, float)
0x3cf: Stack[-2] = Stack[-12]
0x3d0: Stack[-1] = (float) 70.0
0x3d1: Call2 0x5ba

0x3d2: Pop(2)
0x3d3: Pop(1); Push((bool) Stack[-1] == 0)
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d5: Stack[-10] = (int) -2
0x3d6: Return(); Pop(8)

0x3d7: @ CreateDialog(Stack[-4])
0x3d8: Pop(0)
0x3d9: PushEmpty(int)
0x3da: Call2 0x718

0x3db: Pop(0)
0x3dc: @@ SetNPCName(Stack[-1])
0x3dd: Pop(1)
0x3de: PushEmpty(int)
0x3df: Call2 0x716

0x3e0: Pop(0)
0x3e1: @@ SetNPCDescription(Stack[-1])
0x3e2: Pop(1)
0x3e3: PushEmpty(string)
0x3e4: Call2 0x71a

0x3e5: Pop(0)
0x3e6: @@ SetPhoto(Stack[-1])
0x3e7: Pop(1)
0x3e8: PushEmpty(string)
0x3e9: Call2 0x71c

0x3ea: Pop(0)
0x3eb: @@ SetPhoto2(Stack[-1])
0x3ec: Pop(1)
0x3ed: PushEmpty(int)
0x3ee: Call2 0x794

0x3ef: Pop(0)
0x3f0: @@ SetPlayerName(Stack[-1])
0x3f1: Pop(1)
0x3f2: Stack[-2] = (int) -1
0x3f3: @ IsOverrideActive(Stack[-3])
0x3f4: Pop(0)
0x3f5: Push(Stack[-3])
0x3f6: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f7: Stack[-10] = (int) -2
0x3f8: Return(); Pop(8)

0x3f9: @ DoDialog(Stack[-4])
0x3fa: Pop(0)
0x3fb: PushEmpty(bool, object)
0x3fc: PushEmpty(object)
0x3fd: Call2 0x6ce

0x3fe: Stack[-2] = Stack[-1]
0x3ff: Pop(1)
0x400: Call2 0x60f

0x401: Pop(2)
0x402: PushEmpty(object, object)
0x403: Stack[-2] = Stack[-11]
0x404: Stack[-1] = Stack[-6]
0x405: Push(-2, 4); TaskCall(7)
0x406: Call2 0x41d

0x407: Pop(-2, 4); TaskReturn
0x408: Pop(2)
0x409: @@ IsDialogEnd(Stack[-1])
0x40a: Pop(0)
0x40b: Pop(0); Push((bool) Stack[-1] == 0)
0x40c: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x40d: @ sync()
0x40e: Pop(0)
0x40f: @@ IsDialogEnd(Stack[-1])
0x410: Pop(0)
0x411: GOTO 0x40b

0x412: PushEmpty(object)
0x413: Stack[-1] = Stack[-10]
0x414: Call2 0x5fe

0x415: Pop(1)
0x416: @ StopDialog(Stack[-4])
0x417: Pop(0)
0x418: @@ GetReturnValue(Stack[-2])
0x419: Pop(0)
0x41a: Stack[-10] = Stack[-2]
0x41b: Return(); Pop(8)

0x41c: Stack[-4] = 0
0x41d: PushEmpty()
0x41e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x420: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x421: Push((int) 1)
0x422: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x423: PushEmpty(string)
0x424: Stack[-1] = "Neutral"
0x425: Call2 0x457

0x426: Pop(1)
0x427: Push((int) 540554)
0x428: @@ SetMessage(Stack[-1])
0x429: Pop(1)
0x42a: @@ ClearReplies()
0x42b: Pop(0)
0x42c: Push((int) 540555)
0x42d: Push((int) -1)
0x42e: Push((int) 42564)
0x42f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x430: Pop(3)
0x431: Push((int) 540794)
0x432: Push((int) -1)
0x433: Push((int) 42843)
0x434: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x435: Pop(3)
0x436: GOTO 0x439

0x437: Return(); Pop(0)

0x438: GOTO 0x421

0x439: PushEmpty(bool)
0x43a: Call2 0x71e

0x43b: Pop(0)
0x43c: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x43d: @ lshWaitForAnimEnd()
0x43e: Pop(0)
0x43f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x440: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x441: GOTO 0x447

0x442: PushEmpty(string)
0x443: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x444: Call2 0x699

0x445: Pop(1)
0x446: GOTO 0x43d

0x447: GOTO 0x456

0x448: Push("all")
0x449: Push("idle")
0x44a: @ PlayAnimation(Stack[-2], Stack[-1])
0x44b: Pop(2)
0x44c: @ WaitForAnimEnd()
0x44d: Pop(0)
0x44e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x44f: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x450: GOTO 0x456

0x451: Push("all")
0x452: Push("idle")
0x453: @ PlayAnimation(Stack[-2], Stack[-1])
0x454: Pop(2)
0x455: GOTO 0x44c

0x456: Return(); Pop(0)

0x457: PushEmpty()
0x458: PushEmpty(bool)
0x459: Call2 0x71e

0x45a: Pop(0)
0x45b: Pop(1); Push((bool) Stack[-1] == 0)
0x45c: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x45d: Return(); Pop(0)

0x45e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x45f: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x460: Return(); Pop(0)

0x461: PushEmpty(string, bool)
0x462: Stack[-2] = Stack[-3]
0x463: Push("")
0x464: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x466: Stack[-1] = (bool) 0
0x467: GOTO 0x469

0x468: Stack[-1] = (bool) 1
0x469: Call2 0x6a9

0x46a: Pop(2)
0x46b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x46c: Return(); Pop(0)

0x46d: PushEmpty()
0x46e: Push((int) 1)
0x46f: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x470: PushEmpty()
0x471: Call2 0x6c7

0x472: Pop(0)
0x473: Push((int) 42563)
0x474: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x476: PushEmpty(string)
0x477: Stack[-1] = "Neutral"
0x478: Call2 0x457

0x479: Pop(1)
0x47a: Push((int) 540554)
0x47b: @@ SetMessage(Stack[-1])
0x47c: Pop(1)
0x47d: @@ ClearReplies()
0x47e: Pop(0)
0x47f: Push((int) 540555)
0x480: Push((int) -1)
0x481: Push((int) 42564)
0x482: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x483: Pop(3)
0x484: Push((int) 540794)
0x485: Push((int) -1)
0x486: Push((int) 42843)
0x487: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x488: Pop(3)
0x489: Return(); Pop(0)

0x48a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x48b: PushEmpty(bool)
0x48c: Call2 0x71e

0x48d: Pop(0)
0x48e: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x48f: @ lshStopAnimation()
0x490: Pop(0)
0x491: GOTO 0x494

0x492: @ StopAnimation()
0x493: Pop(0)
0x494: Return(); Pop(0)

0x495: GOTO 0x46e

0x496: Return(); Pop(0)

0x497: Push(GlobalVars[1])
0x498: Stack[-1] = (bool) 0
0x499: GlobalVars[1] = Stack[-1]; Pop(1)
0x49a: PushEmpty()
0x49b: Call2 0x49e

0x49c: Pop(0)
0x49d: Return(); Pop(0)

0x49e: PushEmpty(bool)
0x49f: Call2 0x5b5

0x4a0: Pop(0)
0x4a1: Pop(1); Push((bool) Stack[-1] == 0)
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a3: @ Hold()
0x4a4: Pop(0)
0x4a5: @ GetDirection(Stack[-0])
0x4a6: Pop(0)
0x4a7: PushEmpty()
0x4a8: Call2 0x54e

0x4a9: Pop(0)
0x4aa: GOTO 0x4a7

0x4ab: Return(); Pop(0)

0x4ac: PushEmpty(object, object)
0x4ad: Push("player")
0x4ae: @ FindActor(Stack[-2], Stack[-1])
0x4af: Pop(1)
0x4b0: Pop(0); Push((bool) Stack[-1] == 0)
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b2: Stack[-3] = (bool) 0
0x4b3: Return(); Pop(2)

0x4b4: PushEmpty(bool, object)
0x4b5: Stack[-1] = Stack[-3]
0x4b6: Call2 0x5ac

0x4b7: Stack[-5] = Stack[-2]
0x4b8: Pop(2)
0x4b9: Return(); Pop(2)

0x4ba: Stack[-1] = 0
0x4bb: Push(CvectorIndex(Stack[-0], 0))
0x4bc: Push(CvectorIndex(Stack[-0], 2))
0x4bd: @ RotateAsync(Stack[-2], Stack[-1])
0x4be: Pop(2)
0x4bf: Return(); Pop(0)

0x4c0: PushEmpty(object, bool, object, bool)
0x4c1: Push("player")
0x4c2: @ FindActor(Stack[-3], Stack[-1])
0x4c3: Pop(1)
0x4c4: Pop(0); Push((bool) Stack[-2] == 0)
0x4c5: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c6: Stack[-5] = (bool) 0
0x4c7: Return(); Pop(4)

0x4c8: PushEmpty(float, object)
0x4c9: Stack[-1] = Stack[-4]
0x4ca: Call2 0x59a

0x4cb: Pop(1)
0x4cc: Push((float)90000.0)
0x4cd: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4cf: Stack[-5] = (bool) 0
0x4d0: Return(); Pop(4)

0x4d1: @ CanSee(Stack[-1], Stack[-2])
0x4d2: Pop(0)
0x4d3: Stack[-5] = Stack[-1]
0x4d4: Return(); Pop(4)

0x4d5: Stack[-2] = 0
0x4d6: PushEmpty(float, float)
0x4d7: Push((int) 8)
0x4d8: Push((int) 16)
0x4d9: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x4da: Pop(2)
0x4db: Push((int) 10)
0x4dc: @ SetTimer(Stack[-1], Stack[-2])
0x4dd: Pop(1)
0x4de: Return(); Pop(2)

0x4df: Push((int) 10)
0x4e0: @ KillTimer(Stack[-1])
0x4e1: Pop(1)
0x4e2: Return(); Pop(0)

0x4e3: PushEmpty()
0x4e4: Push((int) 10)
0x4e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e6: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x4e7: PushEmpty()
0x4e8: Call2 0x4df

0x4e9: Pop(0)
0x4ea: PushEmpty(bool)
0x4eb: Stack[-1] = (bool) 0
0x4ec: PushEmpty(bool)
0x4ed: Call2 0x5b5

0x4ee: Pop(0)
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f0: PushEmpty(bool)
0x4f1: Call2 0x4c0

0x4f2: Pop(0)
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f4: Stack[-1] = (bool) 1
0x4f5: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4f6: PushEmpty(bool)
0x4f7: Call2 0x4ac

0x4f8: Pop(0)
0x4f9: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4fa: PushEmpty(bool, object)
0x4fb: PushEmpty(object)
0x4fc: Call2 0x6ce

0x4fd: Stack[-2] = Stack[-1]
0x4fe: Pop(1)
0x4ff: Call2 0x649

0x500: Pop(2)
0x501: GOTO 0x508

0x502: PushEmpty()
0x503: Call2 0x4bb

0x504: Pop(0)
0x505: PushEmpty()
0x506: Call2 0x4d6

0x507: Pop(0)
0x508: Return(); Pop(0)

0x509: PushEmpty()
0x50a: Call2 0x595

0x50b: Pop(0)
0x50c: PushEmpty()
0x50d: Call2 0x4df

0x50e: Pop(0)
0x50f: @ lshStopSpeech()
0x510: Pop(0)
0x511: @ lshStopAnimation()
0x512: Pop(0)
0x513: @ StopAsync()
0x514: Pop(0)
0x515: @ Hold()
0x516: Pop(0)
0x517: Return(); Pop(0)

0x518: @ StopGroup0()
0x519: Pop(0)
0x51a: PushEmpty()
0x51b: Call2 0x4df

0x51c: Pop(0)
0x51d: PushEmpty(string)
0x51e: Stack[-1] = "Neutral"
0x51f: Call2 0x699

0x520: Pop(1)
0x521: PushEmpty()
0x522: Call2 0x4d6

0x523: Pop(0)
0x524: Return(); Pop(0)

0x525: PushEmpty()
0x526: Push(Stack[-1])
0x527: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x528: PushEmpty()
0x529: Call2 0x4d6

0x52a: Pop(0)
0x52b: GOTO 0x530

0x52c: PushEmpty(string)
0x52d: Stack[-1] = "Neutral"
0x52e: Call2 0x699

0x52f: Pop(1)
0x530: Return(); Pop(0)

0x531: PushEmpty(bool, bool)
0x532: @ IsOverrideActive(Stack[-1])
0x533: Pop(0)
0x534: Pop(0); Push((bool) Stack[-1] == 0)
0x535: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x536: EventDisable(0)
0x537: PushEmpty()
0x538: Call2 0x595

0x539: Pop(0)
0x53a: PushEmpty(bool, object)
0x53b: Stack[-1] = Stack[-5]
0x53c: Call2 0x5ac

0x53d: Pop(2)
0x53e: EventEnable(0)
0x53f: PushEmpty(object)
0x540: Stack[-1] = Stack[-4]
0x541: Call2 0x7a5

0x542: Pop(1)
0x543: PushEmpty(string)
0x544: Stack[-1] = "Neutral"
0x545: Call2 0x699

0x546: Pop(1)
0x547: PushEmpty()
0x548: Call2 0x4df

0x549: Pop(0)
0x54a: PushEmpty()
0x54b: Call2 0x4d6

0x54c: Pop(0)
0x54d: Return(); Pop(2)

0x54e: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x54f: @ WaitForAnimEnd()
0x550: Pop(0)
0x551: PushEmpty(bool)
0x552: Call2 0x5b5

0x553: Pop(0)
0x554: Pop(1); Push((bool) Stack[-1] == 0)
0x555: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x556: Return(); Pop(12)

0x557: PushEmpty(int)
0x558: Call2 0x705

0x559: Stack[-7] = Stack[-1]
0x55a: Pop(1)
0x55b: Stack[-5] = (int) 0
0x55c: PushEmpty(bool)
0x55d: Stack[-1] = (bool) 0
0x55e: Push((int) 5)
0x55f: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x560: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x561: PushEmpty(bool)
0x562: Call2 0x5b5

0x563: Pop(0)
0x564: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x565: Stack[-1] = (bool) 1
0x566: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x567: Pop(0); Push((bool) Stack[-6] == 0)
0x568: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x569: Push((int) 3)
0x56a: @ Sleep(Stack[-1], Stack[-5])
0x56b: Pop(1)
0x56c: Pop(0); Push((bool) Stack[-4] == 0)
0x56d: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x56e: GOTO 0x590

0x56f: GOTO 0x585

0x570: @ irand(Stack[-3], Stack[-6])
0x571: Pop(0)
0x572: Push((int) 5)
0x573: @ irand(Stack[-3], Stack[-1])
0x574: Pop(1)
0x575: Push((int) 0)
0x576: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x577: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x578: Stack[-3] = (int) 0
0x579: Push("all")
0x57a: PushEmpty(string, int)
0x57b: Stack[-1] = Stack[-6]
0x57c: Call2 0x6fe

0x57d: Pop(1)
0x57e: @ PlayAnimation(Stack[-2], Stack[-1])
0x57f: Pop(2)
0x580: @ WaitForAnimEnd(Stack[-1])
0x581: Pop(0)
0x582: Pop(0); Push((bool) Stack[-1] == 0)
0x583: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x584: GOTO 0x590

0x585: PushEmpty(bool)
0x586: Call2 0x593

0x587: Pop(0)
0x588: Pop(1); Push((bool) Stack[-1] == 0)
0x589: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x58a: GOTO 0x590

0x58b: @ ResetAAS()
0x58c: Pop(0)
0x58d: Push((int) 1)
0x58e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x58f: GOTO 0x55c

0x590: @ ResetAAS()
0x591: Pop(0)
0x592: Return(); Pop(12)

0x593: Stack[-1] = (bool) 1
0x594: Return(); Pop(0)

0x595: @ StopAnimation()
0x596: Pop(0)
0x597: @ StopGroup0()
0x598: Pop(0)
0x599: Return(); Pop(0)

0x59a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x59b: @ GetPosition(Stack[-3])
0x59c: Pop(0)
0x59d: @@ GetPosition(Stack[-2])
0x59e: Pop(0)
0x59f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x5a0: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x5a1: Return(); Pop(6)

0x5a2: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x5a3: @ GetPosition(Stack[-3])
0x5a4: Pop(0)
0x5a5: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x5a6: Push(CvectorIndex(Stack[-2], 0))
0x5a7: Push(CvectorIndex(Stack[-3], 2))
0x5a8: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x5a9: Pop(2)
0x5aa: Stack[-8] = Stack[-1]
0x5ab: Return(); Pop(6)

0x5ac: PushEmpty(cvector, cvector)
0x5ad: @@ GetPosition(Stack[-1])
0x5ae: Pop(0)
0x5af: PushEmpty(bool, cvector)
0x5b0: Stack[-1] = Stack[-3]
0x5b1: Call2 0x5a2

0x5b2: Stack[-6] = Stack[-2]
0x5b3: Pop(2)
0x5b4: Return(); Pop(2)

0x5b5: PushEmpty(bool, bool)
0x5b6: @ IsLoaded(Stack[-1])
0x5b7: Pop(0)
0x5b8: Stack[-3] = Stack[-1]
0x5b9: Return(); Pop(2)

0x5ba: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x5bb: @@ GetPosition(Stack[-8])
0x5bc: Pop(0)
0x5bd: @@ GetEyesHeight(Stack[-9])
0x5be: Pop(0)
0x5bf: Push(CvectorIndex(Stack[-8], 1))
0x5c0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x5c1: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x5c2: @ GetPosition(Stack[-7])
0x5c3: Pop(0)
0x5c4: @ GetEyesHeight(Stack[-9])
0x5c5: Pop(0)
0x5c6: Push(CvectorIndex(Stack[-7], 1))
0x5c7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x5c8: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x5c9: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x5ca: Push(CvectorIndex(Stack[-6], 1))
0x5cb: Stack[-1] = (int) 0
0x5cc: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x5cd: Pop(0); Push(Stack[-6] | Stack[-6]);
0x5ce: Pop(1); Push(Sqrt(Stack[-1]))
0x5cf: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x5d0: Stack[-5] = -Stack[-6]; Pop(0);
0x5d1: Pop(0); Push(Stack[-6] * Stack[-19]);
0x5d2: PushEmpty(cvector, cvector)
0x5d3: Push(CVector(0.0, 1.0, 0.0))
0x5d4: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x5d5: Call2 0x6d4

0x5d6: Pop(1)
0x5d7: Push((int) 25)
0x5d8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5d9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5da: Push(CVector(0.0, 10.0, 0.0))
0x5db: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x5dc: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x5dd: @ IsOverrideActive(Stack[-2])
0x5de: Pop(0)
0x5df: Push(Stack[-2])
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5e1: Stack[-21] = (bool) 0
0x5e2: Return(); Pop(18)

0x5e3: @ StopWorld()
0x5e4: Pop(0)
0x5e5: @ CameraTransit(Stack[-3], Stack[-5])
0x5e6: Pop(0)
0x5e7: Push(CvectorIndex(Stack[-4], 0))
0x5e8: Push(CvectorIndex(Stack[-5], 2))
0x5e9: @ Rotate(Stack[-2], Stack[-1])
0x5ea: Pop(2)
0x5eb: PushEmpty(bool)
0x5ec: Call2 0x71e

0x5ed: Pop(0)
0x5ee: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5ef: GOTO 0x5f8

0x5f0: Push("head")
0x5f1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x5f2: Pop(1)
0x5f3: Push(Stack[-1])
0x5f4: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5f5: Push("head")
0x5f6: @ LookAsyncCamera(Stack[-1])
0x5f7: Pop(1)
0x5f8: @ CameraWaitForPlayFinish()
0x5f9: Pop(0)
0x5fa: @ ResumeWorld()
0x5fb: Pop(0)
0x5fc: Stack[-21] = (bool) 1
0x5fd: Return(); Pop(18)

0x5fe: PushEmpty(bool, bool)
0x5ff: @ CameraSwitchToNormal()
0x600: Pop(0)
0x601: PushEmpty(bool)
0x602: Call2 0x71e

0x603: Pop(0)
0x604: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x605: GOTO 0x60e

0x606: Push("head")
0x607: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x608: Pop(1)
0x609: Push(Stack[-1])
0x60a: IF (Stack[-1] == 0) GOTO 0x60e; Pop(1)

0x60b: Push("head")
0x60c: @ UnlookAsync(Stack[-1])
0x60d: Pop(1)
0x60e: Return(); Pop(2)

0x60f: PushEmpty(int, int, int, int)
0x610: Push("voice_common")
0x611: @ GetVariable(Stack[-1], Stack[-3])
0x612: Pop(1)
0x613: Push(Stack[-2])
0x614: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x615: PushEmpty(bool, object)
0x616: Stack[-1] = Stack[-7]
0x617: Call2 0x649

0x618: Pop(1)
0x619: Pop(1); Push((bool) Stack[-1] == 0)
0x61a: IF (Stack[-1] == 0) GOTO 0x623; Pop(1)

0x61b: PushEmpty(bool, object)
0x61c: Stack[-1] = Stack[-7]
0x61d: Call2 0x66e

0x61e: Pop(1)
0x61f: Pop(1); Push((bool) Stack[-1] == 0)
0x620: IF (Stack[-1] == 0) GOTO 0x623; Pop(1)

0x621: Stack[-6] = (bool) 0
0x622: Return(); Pop(4)

0x623: Push((int) 2)
0x624: @ irand(Stack[-2], Stack[-1])
0x625: Pop(1)
0x626: Push(Stack[-1])
0x627: IF (Stack[-1] == 0) GOTO 0x630; Pop(1)

0x628: Push("voice_common")
0x629: Push((int) 1)
0x62a: Pop(1); Push(Stack[-4] + Stack[-1]);
0x62b: Push((int) 3)
0x62c: Pop(2); Push(Stack[-2] % Stack[-1]);
0x62d: @ SetVariable(Stack[-2], Stack[-1])
0x62e: Pop(2)
0x62f: GOTO 0x634

0x630: Push("voice_common")
0x631: Push((int) 0)
0x632: @ SetVariable(Stack[-2], Stack[-1])
0x633: Pop(2)
0x634: GOTO 0x647

0x635: PushEmpty(bool, object)
0x636: Stack[-1] = Stack[-7]
0x637: Call2 0x66e

0x638: Pop(1)
0x639: Pop(1); Push((bool) Stack[-1] == 0)
0x63a: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x63b: PushEmpty(bool, object)
0x63c: Stack[-1] = Stack[-7]
0x63d: Call2 0x649

0x63e: Pop(1)
0x63f: Pop(1); Push((bool) Stack[-1] == 0)
0x640: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x641: Stack[-6] = (bool) 0
0x642: Return(); Pop(4)

0x643: Push("voice_common")
0x644: Push((int) 1)
0x645: @ SetVariable(Stack[-2], Stack[-1])
0x646: Pop(2)
0x647: Stack[-6] = (bool) 1
0x648: Return(); Pop(4)

0x649: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x64a: Stack[-5] = "c"
0x64b: Stack[-4] = (int) 0
0x64c: Push((int) 1)
0x64d: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x64e: Push((int) 1)
0x64f: Pop(1); Push(Stack[-5] + Stack[-1]);
0x650: Pop(1); Push(Stack[-6] + Stack[-1]);
0x651: @@ HasProperty(Stack[-1], Stack[-4])
0x652: Pop(1)
0x653: Pop(0); Push((bool) Stack[-3] == 0)
0x654: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x655: GOTO 0x659

0x656: Push((int) 1)
0x657: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x658: GOTO 0x64c

0x659: Pop(0); Push((bool) Stack[-4] == 0)
0x65a: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x65b: Stack[-12] = (bool) 0
0x65c: Return(); Pop(10)

0x65d: Stack[-2] = (int) 0
0x65e: Push((int) 1)
0x65f: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x660: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x661: @ irand(Stack[-2], Stack[-4])
0x662: Pop(0)
0x663: Push((int) 1)
0x664: Pop(1); Push(Stack[-3] + Stack[-1]);
0x665: Pop(1); Push(Stack[-6] + Stack[-1]);
0x666: @@ GetProperty(Stack[-1], Stack[-2])
0x667: Pop(1)
0x668: PushEmpty(bool, string)
0x669: Stack[-1] = Stack[-3]
0x66a: Call2 0x6b8

0x66b: Stack[-14] = Stack[-2]
0x66c: Pop(2)
0x66d: Return(); Pop(10)

0x66e: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x66f: Push("d")
0x670: PushEmpty(int)
0x671: Call2 0x6ef

0x672: Pop(0)
0x673: Pop(2); Push(Stack[-2] + Stack[-1]);
0x674: Push("m")
0x675: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x676: Stack[-4] = (int) 0
0x677: Push((int) 1)
0x678: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x679: Push((int) 1)
0x67a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x67b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x67c: @@ HasProperty(Stack[-1], Stack[-4])
0x67d: Pop(1)
0x67e: Pop(0); Push((bool) Stack[-3] == 0)
0x67f: IF (Stack[-1] == 0) GOTO 0x681; Pop(1)

0x680: GOTO 0x684

0x681: Push((int) 1)
0x682: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x683: GOTO 0x677

0x684: Pop(0); Push((bool) Stack[-4] == 0)
0x685: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x686: Stack[-12] = (bool) 0
0x687: Return(); Pop(10)

0x688: Stack[-2] = (int) 0
0x689: Push((int) 1)
0x68a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x68b: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x68c: @ irand(Stack[-2], Stack[-4])
0x68d: Pop(0)
0x68e: Push((int) 1)
0x68f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x690: Pop(1); Push(Stack[-6] + Stack[-1]);
0x691: @@ GetProperty(Stack[-1], Stack[-2])
0x692: Pop(1)
0x693: PushEmpty(bool, string)
0x694: Stack[-1] = Stack[-3]
0x695: Call2 0x6b8

0x696: Stack[-14] = Stack[-2]
0x697: Pop(2)
0x698: Return(); Pop(10)

0x699: PushEmpty(bool, float, float, bool, float, float)
0x69a: @ lshHasAnimation(Stack[-3], Stack[-7])
0x69b: Pop(0)
0x69c: Push(Stack[-3])
0x69d: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x69e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x69f: Pop(0)
0x6a0: Push((bool) 0)
0x6a1: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6a2: Pop(1)
0x6a3: GOTO 0x6a8

0x6a4: Push("Can't find lsh animation : ")
0x6a5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6a6: @ Trace(Stack[-1])
0x6a7: Pop(1)
0x6a8: Return(); Pop(6)

0x6a9: PushEmpty(bool, float, float, bool, float, float)
0x6aa: @ lshHasAnimation(Stack[-3], Stack[-8])
0x6ab: Pop(0)
0x6ac: Push(Stack[-3])
0x6ad: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6ae: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x6af: Pop(0)
0x6b0: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x6b1: Pop(0)
0x6b2: GOTO 0x6b7

0x6b3: Push("Can't find lsh animation : ")
0x6b4: Pop(1); Push(Stack[-1] + Stack[-9]);
0x6b5: @ Trace(Stack[-1])
0x6b6: Pop(1)
0x6b7: Return(); Pop(6)

0x6b8: PushEmpty(bool, bool)
0x6b9: PushEmpty(bool)
0x6ba: Call2 0x71e

0x6bb: Pop(0)
0x6bc: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6bd: @ lshHasSpeech(Stack[-1], Stack[-3])
0x6be: Pop(0)
0x6bf: Push(Stack[-1])
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6c1: @ lshPlaySpeech(Stack[-3])
0x6c2: Pop(0)
0x6c3: Stack[-4] = (bool) 1
0x6c4: Return(); Pop(2)

0x6c5: Stack[-4] = (bool) 0
0x6c6: Return(); Pop(2)

0x6c7: PushEmpty(bool)
0x6c8: Call2 0x71e

0x6c9: Pop(0)
0x6ca: IF (Stack[-1] == 0) GOTO 0x6cd; Pop(1)

0x6cb: @ lshStopSpeech()
0x6cc: Pop(0)
0x6cd: Return(); Pop(0)

0x6ce: PushEmpty(object, object)
0x6cf: @ self(Stack[-1])
0x6d0: Pop(0)
0x6d1: Stack[-3] = Stack[-1]
0x6d2: Return(); Pop(2)

0x6d3: Stack[-1] = 0
0x6d4: PushEmpty(float, float)
0x6d5: Pop(0); Push(Stack[-3] | Stack[-3]);
0x6d6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x6d7: Push((float)0.0)
0x6d8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x6d9: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6da: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x6db: Return(); Pop(2)

0x6dc: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x6dd: Return(); Pop(2)

0x6de: PushEmpty(int, int)
0x6df: @ GetVariable(Stack[-3], Stack[-1])
0x6e0: Pop(0)
0x6e1: Stack[-4] = Stack[-1]
0x6e2: Return(); Pop(2)

0x6e3: PushEmpty(object, object)
0x6e4: @ FindActor(Stack[-1], Stack[-4])
0x6e5: Pop(0)
0x6e6: Pop(0); Push((bool) Stack[-1] == 0)
0x6e7: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e8: Stack[-5] = (bool) 0
0x6e9: Return(); Pop(2)

0x6ea: @ Trigger(Stack[-1], Stack[-3])
0x6eb: Pop(0)
0x6ec: Stack[-5] = (bool) 1
0x6ed: Return(); Pop(2)

0x6ee: Stack[-1] = 0
0x6ef: PushEmpty(float, float)
0x6f0: @ GetGameTime(Stack[-1])
0x6f1: Pop(0)
0x6f2: Push((int) 1)
0x6f3: PushEmpty(int)
0x6f4: Push((int) 24)
0x6f5: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x6f6: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x6f7: Return(); Pop(2)

0x6f8: PushEmpty()
0x6f9: PushEmpty(int)
0x6fa: Call2 0x6ef

0x6fb: Pop(0)
0x6fc: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x6fd: Return(); Pop(0)

0x6fe: PushEmpty(string, string)
0x6ff: Stack[-1] = "idle"
0x700: Push(Stack[-3])
0x701: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x702: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x703: Stack[-4] = Stack[-1]
0x704: Return(); Pop(2)

0x705: PushEmpty(int, bool, int, bool)
0x706: Stack[-2] = (int) 0
0x707: Push("all")
0x708: PushEmpty(string, int)
0x709: Stack[-1] = Stack[-5]
0x70a: Call2 0x6fe

0x70b: Pop(1)
0x70c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x70d: Pop(2)
0x70e: Pop(0); Push((bool) Stack[-1] == 0)
0x70f: IF (Stack[-1] == 0) GOTO 0x711; Pop(1)

0x710: GOTO 0x714

0x711: Push((int) 1)
0x712: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x713: GOTO 0x707

0x714: Stack[-5] = Stack[-2]
0x715: Return(); Pop(4)

0x716: Stack[-1] = (int) 515536
0x717: Return(); Pop(0)

0x718: Stack[-1] = (int) 502861
0x719: Return(); Pop(0)

0x71a: Stack[-1] = "ui/NPC_Han.png"
0x71b: Return(); Pop(0)

0x71c: Stack[-1] = "ui/NPC_Han_b.png"
0x71d: Return(); Pop(0)

0x71e: Stack[-1] = (bool) 1
0x71f: Return(); Pop(0)

0x720: PushEmpty()
0x721: Push("b11q02")
0x722: Push((int) 4)
0x723: @ SetVariable(Stack[-2], Stack[-1])
0x724: Pop(2)
0x725: PushEmpty()
0x726: Call2 0x75e

0x727: Pop(0)
0x728: Return(); Pop(0)

0x729: PushEmpty()
0x72a: PushEmpty()
0x72b: Call2 0x751

0x72c: Pop(0)
0x72d: PushEmpty(bool, string, string)
0x72e: Stack[-2] = "quest_b11_02"
0x72f: Stack[-1] = "fail"
0x730: Call2 0x6e3

0x731: Pop(3)
0x732: Return(); Pop(0)

0x733: PushEmpty()
0x734: Push("oob12Han1")
0x735: Push((int) 1)
0x736: @ SetVariable(Stack[-2], Stack[-1])
0x737: Pop(2)
0x738: Return(); Pop(0)

0x739: PushEmpty()
0x73a: PushEmpty(int, string)
0x73b: Stack[-1] = "b11q02"
0x73c: Call2 0x6de

0x73d: Pop(1)
0x73e: Push((int) 3)
0x73f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x740: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x741: Stack[-2] = (bool) 1
0x742: Return(); Pop(0)

0x743: Stack[-2] = (bool) 0
0x744: Return(); Pop(0)

0x745: PushEmpty()
0x746: PushEmpty(int, string)
0x747: Stack[-1] = "oob12Han1"
0x748: Call2 0x6de

0x749: Pop(1)
0x74a: Push((int) 0)
0x74b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x74c: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x74d: Stack[-2] = (bool) 1
0x74e: Return(); Pop(0)

0x74f: Stack[-2] = (bool) 0
0x750: Return(); Pop(0)

0x751: PushEmpty(object, object)
0x752: Push((int) 611)
0x753: Push((int) 2)
0x754: Push((int) 531506)
0x755: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x756: Pop(3)
0x757: PushEmpty(bool, object, int)
0x758: Stack[-2] = Stack[-4]
0x759: Stack[-1] = (int) 598
0x75a: Call2 0x778

0x75b: Pop(3)
0x75c: Return(); Pop(2)

0x75d: Stack[-1] = 0
0x75e: PushEmpty(object, object)
0x75f: Push((int) 601)
0x760: Push((int) 2)
0x761: Push((int) 531152)
0x762: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x763: Pop(3)
0x764: PushEmpty(bool, object, int)
0x765: Stack[-2] = Stack[-4]
0x766: Stack[-1] = (int) 598
0x767: Call2 0x778

0x768: Pop(3)
0x769: Return(); Pop(2)

0x76a: Stack[-1] = 0
0x76b: PushEmpty(object, object)
0x76c: @ GetDiaryRoot(Stack[-1])
0x76d: Pop(0)
0x76e: Pop(0); Push((bool) Stack[-1] == 0)
0x76f: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x770: Push("Can't retrieve diary root")
0x771: @ Trace(Stack[-1])
0x772: Pop(1)
0x773: Stack[-3] = (bool) 0
0x774: Return(); Pop(2)

0x775: Stack[-3] = Stack[-1]
0x776: Return(); Pop(2)

0x777: Stack[-1] = 0
0x778: PushEmpty(object, object, int, object, object, int)
0x779: PushEmpty(object)
0x77a: Call2 0x76b

0x77b: Stack[-4] = Stack[-1]
0x77c: Pop(1)
0x77d: @@ Find(Stack[-7], Stack[-2])
0x77e: Pop(0)
0x77f: Pop(0); Push((bool) Stack[-2] == 0)
0x780: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x781: Push("Can't find diary parent with id: ")
0x782: Pop(1); Push(Stack[-1] + Stack[-8]);
0x783: @ Trace(Stack[-1])
0x784: Pop(1)
0x785: Stack[-9] = (bool) 0
0x786: Return(); Pop(6)

0x787: @@ AddChild(Stack[-8])
0x788: Pop(0)
0x789: Push((int) 7)
0x78a: @ SendWorldWndMessage(Stack[-1])
0x78b: Pop(1)
0x78c: @@ GetCategory(Stack[-1])
0x78d: Pop(0)
0x78e: @ SetDiarySection(Stack[-1])
0x78f: Pop(0)
0x790: Stack[-9] = (bool) 0
0x791: Return(); Pop(6)

0x792: Stack[-2] = 0
0x793: Stack[-3] = 0
0x794: PushEmpty(int, int)
0x795: Push("branch")
0x796: @ GetVariable(Stack[-1], Stack[-2])
0x797: Pop(1)
0x798: Push((int) 0)
0x799: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x79a: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x79b: Stack[-3] = (int) 1
0x79c: Return(); Pop(2)

0x79d: GOTO 0x7a3

0x79e: Push((int) 1)
0x79f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7a0: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x7a1: Stack[-3] = (int) 2
0x7a2: Return(); Pop(2)

0x7a3: Stack[-3] = (int) 3
0x7a4: Return(); Pop(2)

0x7a5: PushEmpty()
0x7a6: Push(GlobalVars[1])
0x7a7: Pop(1); Push((bool) Stack[-1] == 0)
0x7a8: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7a9: PushEmpty(int, object)
0x7aa: Stack[-1] = Stack[-3]
0x7ab: Push(-2, 1); TaskCall(4)
0x7ac: Call2 0x2ea

0x7ad: Pop(-2, 1); TaskReturn
0x7ae: Pop(2)
0x7af: Push(GlobalVars[1])
0x7b0: Stack[-1] = (bool) 1
0x7b1: GlobalVars[1] = Stack[-1]; Pop(1)
0x7b2: PushEmpty(bool, int)
0x7b3: Stack[-1] = (int) 11
0x7b4: Call2 0x6f8

0x7b5: Pop(1)
0x7b6: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7b7: PushEmpty(int, object)
0x7b8: Stack[-1] = Stack[-3]
0x7b9: Push(-2, 1); TaskCall(0)
0x7ba: Call2 0x0

0x7bb: Pop(-2, 1); TaskReturn
0x7bc: Pop(2)
0x7bd: Return(); Pop(0)

0x7be: PushEmpty(bool, int)
0x7bf: Stack[-1] = (int) 12
0x7c0: Call2 0x6f8

0x7c1: Pop(1)
0x7c2: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7c3: PushEmpty(int, object)
0x7c4: Stack[-1] = Stack[-3]
0x7c5: Push(-2, 1); TaskCall(2)
0x7c6: Call2 0x1a6

0x7c7: Pop(-2, 1); TaskReturn
0x7c8: Pop(2)
0x7c9: Return(); Pop(0)

0x7ca: PushEmpty(int, object)
0x7cb: Stack[-1] = Stack[-3]
0x7cc: Push(-2, 1); TaskCall(6)
0x7cd: Call2 0x3cc

0x7ce: Pop(-2, 1); TaskReturn
0x7cf: Pop(2)
0x7d0: Return(); Pop(0)

