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
	cleanup
	player
	head
	GetPosition
	GetEyesHeight
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	.bin
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png
	ood7Nudegirl1
	d7q04
	d7q04NudeGotoAndrei
	pt_map_andrei
	AddMark
	quest_d7_04
	init_kabak
	ood7Nudegirl2
	ShowMap
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
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
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
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
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x2d2
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xdf Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2a8 Vars = (int, int)
	GTASK_4 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x2d8 Vars = (object)
		EVENT_26 Op = 0x315 Vars = (string)
		EVENT_6 Op = 0x31d Vars = ()
		EVENT_7 Op = 0x35e Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x3e6

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x55f

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x55d

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x561

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x563

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x63f

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
0x41: Call2 0x42a

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
0x4f: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x5a6

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x567

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0xc9

0x5d: Pop(1)
0x5e: Push((int) 533196)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 535791)
0x64: Push((int) 37488)
0x65: Push((int) 37477)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 535798)
0x69: Push((int) 37488)
0x6a: Push((int) 37485)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0xab

0x6e: PushEmpty(bool)
0x6f: Stack[-1] = (bool) 0
0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x5b2

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x75: PushEmpty(bool, object)
0x76: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77: Call2 0x5be

0x78: Pop(1)
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: Stack[-1] = (bool) 1
0x7b: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x7c: PushEmpty(object, object)
0x7d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7f: Call2 0x590

0x80: Pop(2)
0x81: PushEmpty(string)
0x82: Stack[-1] = "Neutral"
0x83: Call2 0xc9

0x84: Pop(1)
0x85: Push((int) 533221)
0x86: @@ SetMessage(Stack[-1])
0x87: Pop(1)
0x88: @@ ClearReplies()
0x89: Pop(0)
0x8a: Push((int) 533222)
0x8b: Push((int) 37473)
0x8c: Push((int) 34742)
0x8d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e: Pop(3)
0x8f: Push((int) 535790)
0x90: Push((int) -1)
0x91: Push((int) 37476)
0x92: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93: Pop(3)
0x94: GOTO 0xab

0x95: PushEmpty(string)
0x96: Stack[-1] = "Neutral"
0x97: Call2 0xc9

0x98: Pop(1)
0x99: Push((int) 533200)
0x9a: @@ SetMessage(Stack[-1])
0x9b: Pop(1)
0x9c: @@ ClearReplies()
0x9d: Pop(0)
0x9e: Push((int) 533201)
0x9f: Push((int) -1)
0xa0: Push((int) 34721)
0xa1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2: Pop(3)
0xa3: Push((int) 535786)
0xa4: Push((int) -1)
0xa5: Push((int) 37472)
0xa6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7: Pop(3)
0xa8: GOTO 0xab

0xa9: Return(); Pop(0)

0xaa: GOTO 0x4e

0xab: PushEmpty(bool)
0xac: Call2 0x565

0xad: Pop(0)
0xae: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xaf: @ lshWaitForAnimEnd()
0xb0: Pop(0)
0xb1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: GOTO 0xb9

0xb4: PushEmpty(string)
0xb5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb6: Call2 0x4c5

0xb7: Pop(1)
0xb8: GOTO 0xaf

0xb9: GOTO 0xc8

0xba: Push("all")
0xbb: Push("idle")
0xbc: @ PlayAnimation(Stack[-2], Stack[-1])
0xbd: Pop(2)
0xbe: @ WaitForAnimEnd()
0xbf: Pop(0)
0xc0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc1: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc2: GOTO 0xc8

0xc3: Push("all")
0xc4: Push("idle")
0xc5: @ PlayAnimation(Stack[-2], Stack[-1])
0xc6: Pop(2)
0xc7: GOTO 0xbe

0xc8: Return(); Pop(0)

0xc9: PushEmpty()
0xca: PushEmpty(bool)
0xcb: Call2 0x565

0xcc: Pop(0)
0xcd: Pop(1); Push((bool) Stack[-1] == 0)
0xce: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcf: Return(); Pop(0)

0xd0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: Return(); Pop(0)

0xd3: PushEmpty(string, bool)
0xd4: Stack[-2] = Stack[-3]
0xd5: Push("")
0xd6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd8: Stack[-1] = (bool) 0
0xd9: GOTO 0xdb

0xda: Stack[-1] = (bool) 1
0xdb: Call2 0x4d5

0xdc: Pop(2)
0xdd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xde: Return(); Pop(0)

0xdf: PushEmpty()
0xe0: Push((int) 1)
0xe1: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0xe2: PushEmpty()
0xe3: Call2 0x4fe

0xe4: Pop(0)
0xe5: Push((int) 34719)
0xe6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xe8: PushEmpty(object, object)
0xe9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeb: Call2 0x56d

0xec: Pop(2)
0xed: PushEmpty(object, object)
0xee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0: Call2 0x596

0xf1: Pop(2)
0xf2: Push((int) 37504)
0xf3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf5: PushEmpty(object, object)
0xf6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf8: Call2 0x56d

0xf9: Pop(2)
0xfa: PushEmpty(object, object)
0xfb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd: Call2 0x596

0xfe: Pop(2)
0xff: Push((int) 37503)
0x100: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x102: PushEmpty(object, object)
0x103: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x104: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x105: Call2 0x56d

0x106: Pop(2)
0x107: PushEmpty(object, object)
0x108: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x109: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10a: Call2 0x596

0x10b: Pop(2)
0x10c: Push((int) 34716)
0x10d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x10f: PushEmpty(bool, object)
0x110: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x111: Call2 0x5a6

0x112: Pop(1)
0x113: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x114: PushEmpty(object, object)
0x115: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x116: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x117: Call2 0x567

0x118: Pop(2)
0x119: PushEmpty(string)
0x11a: Stack[-1] = "Neutral"
0x11b: Call2 0xc9

0x11c: Pop(1)
0x11d: Push((int) 533196)
0x11e: @@ SetMessage(Stack[-1])
0x11f: Pop(1)
0x120: @@ ClearReplies()
0x121: Pop(0)
0x122: Push((int) 535791)
0x123: Push((int) 37488)
0x124: Push((int) 37477)
0x125: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126: Pop(3)
0x127: Push((int) 535798)
0x128: Push((int) 37488)
0x129: Push((int) 37485)
0x12a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b: Pop(3)
0x12c: Return(); Pop(0)

0x12d: PushEmpty(bool)
0x12e: Stack[-1] = (bool) 0
0x12f: PushEmpty(bool, object)
0x130: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x131: Call2 0x5b2

0x132: Pop(1)
0x133: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x134: PushEmpty(bool, object)
0x135: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x136: Call2 0x5be

0x137: Pop(1)
0x138: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x139: Stack[-1] = (bool) 1
0x13a: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x13b: PushEmpty(object, object)
0x13c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13e: Call2 0x590

0x13f: Pop(2)
0x140: PushEmpty(string)
0x141: Stack[-1] = "Neutral"
0x142: Call2 0xc9

0x143: Pop(1)
0x144: Push((int) 533221)
0x145: @@ SetMessage(Stack[-1])
0x146: Pop(1)
0x147: @@ ClearReplies()
0x148: Pop(0)
0x149: Push((int) 533222)
0x14a: Push((int) 37473)
0x14b: Push((int) 34742)
0x14c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14d: Pop(3)
0x14e: Push((int) 535790)
0x14f: Push((int) -1)
0x150: Push((int) 37476)
0x151: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x152: Pop(3)
0x153: Return(); Pop(0)

0x154: PushEmpty(string)
0x155: Stack[-1] = "Neutral"
0x156: Call2 0xc9

0x157: Pop(1)
0x158: Push((int) 533200)
0x159: @@ SetMessage(Stack[-1])
0x15a: Pop(1)
0x15b: @@ ClearReplies()
0x15c: Pop(0)
0x15d: Push((int) 533201)
0x15e: Push((int) -1)
0x15f: Push((int) 34721)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Push((int) 535786)
0x163: Push((int) -1)
0x164: Push((int) 37472)
0x165: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x166: Pop(3)
0x167: Return(); Pop(0)

0x168: Push((int) 37473)
0x169: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x16b: PushEmpty(string)
0x16c: Stack[-1] = "Neutral"
0x16d: Call2 0xc9

0x16e: Pop(1)
0x16f: Push((int) 535787)
0x170: @@ SetMessage(Stack[-1])
0x171: Pop(1)
0x172: @@ ClearReplies()
0x173: Pop(0)
0x174: Push((int) 535788)
0x175: Push((int) -1)
0x176: Push((int) 37474)
0x177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x178: Pop(3)
0x179: Push((int) 535789)
0x17a: Push((int) -1)
0x17b: Push((int) 37475)
0x17c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17d: Pop(3)
0x17e: Return(); Pop(0)

0x17f: Push((int) 37488)
0x180: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x182: PushEmpty(string)
0x183: Stack[-1] = "Neutral"
0x184: Call2 0xc9

0x185: Pop(1)
0x186: Push((int) 535799)
0x187: @@ SetMessage(Stack[-1])
0x188: Pop(1)
0x189: @@ ClearReplies()
0x18a: Pop(0)
0x18b: Push((int) 535800)
0x18c: Push((int) 37491)
0x18d: Push((int) 37490)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: Return(); Pop(0)

0x191: Push((int) 37491)
0x192: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Neutral"
0x196: Call2 0xc9

0x197: Pop(1)
0x198: Push((int) 535801)
0x199: @@ SetMessage(Stack[-1])
0x19a: Pop(1)
0x19b: @@ ClearReplies()
0x19c: Pop(0)
0x19d: Push((int) 535802)
0x19e: Push((int) 37493)
0x19f: Push((int) 37492)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: Push((int) 535806)
0x1a3: Push((int) 37498)
0x1a4: Push((int) 37497)
0x1a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a6: Pop(3)
0x1a7: Return(); Pop(0)

0x1a8: Push((int) 37498)
0x1a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1ab: PushEmpty(string)
0x1ac: Stack[-1] = "Neutral"
0x1ad: Call2 0xc9

0x1ae: Pop(1)
0x1af: Push((int) 535807)
0x1b0: @@ SetMessage(Stack[-1])
0x1b1: Pop(1)
0x1b2: @@ ClearReplies()
0x1b3: Pop(0)
0x1b4: Push((int) 535808)
0x1b5: Push((int) 37500)
0x1b6: Push((int) 37499)
0x1b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b8: Pop(3)
0x1b9: Return(); Pop(0)

0x1ba: Push((int) 37500)
0x1bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1bd: PushEmpty(string)
0x1be: Stack[-1] = "Neutral"
0x1bf: Call2 0xc9

0x1c0: Pop(1)
0x1c1: Push((int) 535809)
0x1c2: @@ SetMessage(Stack[-1])
0x1c3: Pop(1)
0x1c4: @@ ClearReplies()
0x1c5: Pop(0)
0x1c6: Push((int) 535810)
0x1c7: Push((int) 37493)
0x1c8: Push((int) 37501)
0x1c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ca: Pop(3)
0x1cb: Push((int) 535811)
0x1cc: Push((int) -1)
0x1cd: Push((int) 37503)
0x1ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cf: Pop(3)
0x1d0: Return(); Pop(0)

0x1d1: Push((int) 37493)
0x1d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1d4: PushEmpty(string)
0x1d5: Stack[-1] = "Neutral"
0x1d6: Call2 0xc9

0x1d7: Pop(1)
0x1d8: Push((int) 535803)
0x1d9: @@ SetMessage(Stack[-1])
0x1da: Pop(1)
0x1db: @@ ClearReplies()
0x1dc: Pop(0)
0x1dd: Push((int) 535804)
0x1de: Push((int) 37495)
0x1df: Push((int) 37494)
0x1e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e1: Pop(3)
0x1e2: Push((int) 535812)
0x1e3: Push((int) -1)
0x1e4: Push((int) 37504)
0x1e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e6: Pop(3)
0x1e7: Return(); Pop(0)

0x1e8: Push((int) 37495)
0x1e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1eb: PushEmpty(string)
0x1ec: Stack[-1] = "Neutral"
0x1ed: Call2 0xc9

0x1ee: Pop(1)
0x1ef: Push((int) 535805)
0x1f0: @@ SetMessage(Stack[-1])
0x1f1: Pop(1)
0x1f2: @@ ClearReplies()
0x1f3: Pop(0)
0x1f4: Push((int) 533199)
0x1f5: Push((int) -1)
0x1f6: Push((int) 34719)
0x1f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f8: Pop(3)
0x1f9: Return(); Pop(0)

0x1fa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1fb: PushEmpty(bool)
0x1fc: Call2 0x565

0x1fd: Pop(0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1ff: @ lshStopAnimation()
0x200: Pop(0)
0x201: GOTO 0x204

0x202: @ StopAnimation()
0x203: Pop(0)
0x204: Return(); Pop(0)

0x205: GOTO 0xe0

0x206: Return(); Pop(0)

0x207: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x208: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x209: PushEmpty(bool, object, float)
0x20a: Stack[-2] = Stack[-12]
0x20b: Stack[-1] = (float) 70.0
0x20c: Call2 0x3e6

0x20d: Pop(2)
0x20e: Pop(1); Push((bool) Stack[-1] == 0)
0x20f: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x210: Stack[-10] = (int) -2
0x211: Return(); Pop(8)

0x212: @ CreateDialog(Stack[-4])
0x213: Pop(0)
0x214: PushEmpty(int)
0x215: Call2 0x55f

0x216: Pop(0)
0x217: @@ SetNPCName(Stack[-1])
0x218: Pop(1)
0x219: PushEmpty(int)
0x21a: Call2 0x55d

0x21b: Pop(0)
0x21c: @@ SetNPCDescription(Stack[-1])
0x21d: Pop(1)
0x21e: PushEmpty(string)
0x21f: Call2 0x561

0x220: Pop(0)
0x221: @@ SetPhoto(Stack[-1])
0x222: Pop(1)
0x223: PushEmpty(string)
0x224: Call2 0x563

0x225: Pop(0)
0x226: @@ SetPhoto2(Stack[-1])
0x227: Pop(1)
0x228: PushEmpty(int)
0x229: Call2 0x63f

0x22a: Pop(0)
0x22b: @@ SetPlayerName(Stack[-1])
0x22c: Pop(1)
0x22d: Stack[-2] = (int) -1
0x22e: @ IsOverrideActive(Stack[-3])
0x22f: Pop(0)
0x230: Push(Stack[-3])
0x231: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x232: Stack[-10] = (int) -2
0x233: Return(); Pop(8)

0x234: @ DoDialog(Stack[-4])
0x235: Pop(0)
0x236: PushEmpty(bool, object)
0x237: PushEmpty(object)
0x238: Call2 0x505

0x239: Stack[-2] = Stack[-1]
0x23a: Pop(1)
0x23b: Call2 0x43b

0x23c: Pop(2)
0x23d: PushEmpty(object, object)
0x23e: Stack[-2] = Stack[-11]
0x23f: Stack[-1] = Stack[-6]
0x240: Push(-2, 4); TaskCall(3)
0x241: Call2 0x258

0x242: Pop(-2, 4); TaskReturn
0x243: Pop(2)
0x244: @@ IsDialogEnd(Stack[-1])
0x245: Pop(0)
0x246: Pop(0); Push((bool) Stack[-1] == 0)
0x247: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x248: @ sync()
0x249: Pop(0)
0x24a: @@ IsDialogEnd(Stack[-1])
0x24b: Pop(0)
0x24c: GOTO 0x246

0x24d: PushEmpty(object)
0x24e: Stack[-1] = Stack[-10]
0x24f: Call2 0x42a

0x250: Pop(1)
0x251: @ StopDialog(Stack[-4])
0x252: Pop(0)
0x253: @@ GetReturnValue(Stack[-2])
0x254: Pop(0)
0x255: Stack[-10] = Stack[-2]
0x256: Return(); Pop(8)

0x257: Stack[-4] = 0
0x258: PushEmpty()
0x259: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x25a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x25b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x25c: Push((int) 1)
0x25d: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x25e: PushEmpty(string)
0x25f: Stack[-1] = "Neutral"
0x260: Call2 0x292

0x261: Pop(1)
0x262: Push((int) 540548)
0x263: @@ SetMessage(Stack[-1])
0x264: Pop(1)
0x265: @@ ClearReplies()
0x266: Pop(0)
0x267: Push((int) 540549)
0x268: Push((int) -1)
0x269: Push((int) 42558)
0x26a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26b: Pop(3)
0x26c: Push((int) 540797)
0x26d: Push((int) -1)
0x26e: Push((int) 42846)
0x26f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x270: Pop(3)
0x271: GOTO 0x274

0x272: Return(); Pop(0)

0x273: GOTO 0x25c

0x274: PushEmpty(bool)
0x275: Call2 0x565

0x276: Pop(0)
0x277: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x278: @ lshWaitForAnimEnd()
0x279: Pop(0)
0x27a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x27b: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27c: GOTO 0x282

0x27d: PushEmpty(string)
0x27e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x27f: Call2 0x4c5

0x280: Pop(1)
0x281: GOTO 0x278

0x282: GOTO 0x291

0x283: Push("all")
0x284: Push("idle")
0x285: @ PlayAnimation(Stack[-2], Stack[-1])
0x286: Pop(2)
0x287: @ WaitForAnimEnd()
0x288: Pop(0)
0x289: Push( Stack[3 + Tasks[-1].StackPointer] )
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: GOTO 0x291

0x28c: Push("all")
0x28d: Push("idle")
0x28e: @ PlayAnimation(Stack[-2], Stack[-1])
0x28f: Pop(2)
0x290: GOTO 0x287

0x291: Return(); Pop(0)

0x292: PushEmpty()
0x293: PushEmpty(bool)
0x294: Call2 0x565

0x295: Pop(0)
0x296: Pop(1); Push((bool) Stack[-1] == 0)
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: Return(); Pop(0)

0x299: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x29a: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29b: Return(); Pop(0)

0x29c: PushEmpty(string, bool)
0x29d: Stack[-2] = Stack[-3]
0x29e: Push("")
0x29f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a1: Stack[-1] = (bool) 0
0x2a2: GOTO 0x2a4

0x2a3: Stack[-1] = (bool) 1
0x2a4: Call2 0x4d5

0x2a5: Pop(2)
0x2a6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2a7: Return(); Pop(0)

0x2a8: PushEmpty()
0x2a9: Push((int) 1)
0x2aa: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2ab: PushEmpty()
0x2ac: Call2 0x4fe

0x2ad: Pop(0)
0x2ae: Push((int) 42557)
0x2af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2b1: PushEmpty(string)
0x2b2: Stack[-1] = "Neutral"
0x2b3: Call2 0x292

0x2b4: Pop(1)
0x2b5: Push((int) 540548)
0x2b6: @@ SetMessage(Stack[-1])
0x2b7: Pop(1)
0x2b8: @@ ClearReplies()
0x2b9: Pop(0)
0x2ba: Push((int) 540549)
0x2bb: Push((int) -1)
0x2bc: Push((int) 42558)
0x2bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2be: Pop(3)
0x2bf: Push((int) 540797)
0x2c0: Push((int) -1)
0x2c1: Push((int) 42846)
0x2c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c3: Pop(3)
0x2c4: Return(); Pop(0)

0x2c5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2c6: PushEmpty(bool)
0x2c7: Call2 0x565

0x2c8: Pop(0)
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2ca: @ lshStopAnimation()
0x2cb: Pop(0)
0x2cc: GOTO 0x2cf

0x2cd: @ StopAnimation()
0x2ce: Pop(0)
0x2cf: Return(); Pop(0)

0x2d0: GOTO 0x2a9

0x2d1: Return(); Pop(0)

0x2d2: PushEmpty(float, float)
0x2d3: Stack[-2] = (int) 300
0x2d4: Stack[-1] = (int) 100
0x2d5: Call2 0x2ef

0x2d6: Pop(2)
0x2d7: Return(); Pop(0)

0x2d8: PushEmpty()
0x2d9: PushEmpty()
0x2da: Call2 0x375

0x2db: Pop(0)
0x2dc: PushEmpty(bool, int)
0x2dd: Stack[-1] = (int) 7
0x2de: Call2 0x53f

0x2df: Pop(1)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e1: PushEmpty(int, object)
0x2e2: Stack[-1] = Stack[-3]
0x2e3: Push(-2, 1); TaskCall(0)
0x2e4: Call2 0x0

0x2e5: Pop(-2, 1); TaskReturn
0x2e6: Pop(2)
0x2e7: Return(); Pop(0)

0x2e8: PushEmpty(int, object)
0x2e9: Stack[-1] = Stack[-3]
0x2ea: Push(-2, 1); TaskCall(2)
0x2eb: Call2 0x207

0x2ec: Pop(-2, 1); TaskReturn
0x2ed: Pop(2)
0x2ee: Return(); Pop(0)

0x2ef: PushEmpty(float, bool, float, bool)
0x2f0: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x2f1: Push((int) 3)
0x2f2: @ rand(Stack[-3], Stack[-1])
0x2f3: Pop(1)
0x2f4: Push((int) 3)
0x2f5: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2f6: @ Sleep(Stack[-1], Stack[-2])
0x2f7: Pop(1)
0x2f8: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x2f9: PushEmpty(float, float)
0x2fa: Stack[-2] = Stack[-8]
0x2fb: Stack[-1] = Stack[-7]
0x2fc: Call2 0x334

0x2fd: Pop(2)
0x2fe: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x2ff: GOTO 0x2f1

0x300: Return(); Pop(4)

0x301: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x302: PushEmpty(bool)
0x303: Stack[-1] = (bool) 0
0x304: PushEmpty(bool)
0x305: Call2 0x3e1

0x306: Pop(0)
0x307: Pop(1); Push((bool) Stack[-1] == 0)
0x308: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x309: PushEmpty(bool)
0x30a: Call2 0x332

0x30b: Pop(0)
0x30c: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30d: Stack[-1] = (bool) 1
0x30e: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30f: PushEmpty(object)
0x310: Call2 0x505

0x311: Pop(0)
0x312: @ RemoveActor(Stack[-1])
0x313: Pop(1)
0x314: Return(); Pop(0)

0x315: PushEmpty()
0x316: Push("cleanup")
0x317: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x318: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x319: PushEmpty()
0x31a: Call2 0x301

0x31b: Pop(0)
0x31c: Return(); Pop(0)

0x31d: Push( Stack[6 + Tasks[-1].StackPointer] )
0x31e: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31f: PushEmpty()
0x320: Call2 0x375

0x321: Pop(0)
0x322: PushEmpty(bool)
0x323: Stack[-1] = (bool) 0
0x324: Push( Stack[5 + Tasks[-1].StackPointer] )
0x325: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x326: PushEmpty(bool)
0x327: Call2 0x332

0x328: Pop(0)
0x329: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x32a: Stack[-1] = (bool) 1
0x32b: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32c: PushEmpty(object)
0x32d: Call2 0x505

0x32e: Pop(0)
0x32f: @ RemoveActor(Stack[-1])
0x330: Pop(1)
0x331: Return(); Pop(0)

0x332: Stack[-1] = (bool) 1
0x333: Return(); Pop(0)

0x334: PushEmpty()
0x335: PushEmpty(bool)
0x336: Call2 0x3e1

0x337: Pop(0)
0x338: Pop(1); Push((bool) Stack[-1] == 0)
0x339: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x33a: Return(); Pop(0)

0x33b: Push("player")
0x33c: @ FindActor(Stack[-4], Stack[-1])
0x33d: Pop(1)
0x33e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x33f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x340: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x341: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x342: Push((int) 10)
0x343: Push((float)1.0)
0x344: @ SetTimer(Stack[-2], Stack[-1])
0x345: Pop(2)
0x346: PushEmpty()
0x347: Call2 0x383

0x348: Pop(0)
0x349: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x34a: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34b: Push((int) 10)
0x34c: @ KillTimer(Stack[-1])
0x34d: Pop(1)
0x34e: Return(); Pop(0)

0x34f: PushEmpty(float, float)
0x350: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x351: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x352: Stack[-3] = (bool) 0
0x353: Return(); Pop(2)

0x354: PushEmpty(float, object)
0x355: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x356: Call2 0x3d9

0x357: Pop(1)
0x358: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x359: Push( Stack[2 + Tasks[-1].StackPointer] )
0x35a: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35b: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x35c: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x35d: Return(); Pop(2)

0x35e: PushEmpty()
0x35f: Push((int) 10)
0x360: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x361: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x362: PushEmpty(bool)
0x363: Call2 0x34f

0x364: Pop(0)
0x365: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x366: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x367: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x368: PushEmpty(object)
0x369: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x36a: Call2 0x4e4

0x36b: Pop(1)
0x36c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x36d: GOTO 0x374

0x36e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x36f: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x370: Push("head")
0x371: @ UnlookAsync(Stack[-1])
0x372: Pop(1)
0x373: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x374: Return(); Pop(0)

0x375: PushEmpty()
0x376: Call2 0x3d4

0x377: Pop(0)
0x378: Push((int) 10)
0x379: @ KillTimer(Stack[-1])
0x37a: Pop(1)
0x37b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x37c: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37d: Push("head")
0x37e: @ UnlookAsync(Stack[-1])
0x37f: Pop(1)
0x380: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x381: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x382: Return(); Pop(0)

0x383: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x384: @ WaitForAnimEnd()
0x385: Pop(0)
0x386: PushEmpty(bool)
0x387: Call2 0x3e1

0x388: Pop(0)
0x389: Pop(1); Push((bool) Stack[-1] == 0)
0x38a: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38b: Return(); Pop(14)

0x38c: PushEmpty(int)
0x38d: Call2 0x54c

0x38e: Stack[-8] = Stack[-1]
0x38f: Pop(1)
0x390: Stack[-6] = (int) 0
0x391: PushEmpty(bool)
0x392: Stack[-1] = (bool) 0
0x393: Push((int) 5)
0x394: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x395: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x396: PushEmpty(bool)
0x397: Call2 0x3e1

0x398: Pop(0)
0x399: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x39a: Stack[-1] = (bool) 1
0x39b: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x39c: Push((int) 3)
0x39d: @ irand(Stack[-6], Stack[-1])
0x39e: Pop(1)
0x39f: Push((int) 0)
0x3a0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3a1: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3a2: Push(Stack[-7])
0x3a3: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3a4: @ irand(Stack[-4], Stack[-7])
0x3a5: Pop(0)
0x3a6: Push("all")
0x3a7: PushEmpty(string, int)
0x3a8: Stack[-1] = Stack[-7]
0x3a9: Call2 0x545

0x3aa: Pop(1)
0x3ab: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ac: Pop(2)
0x3ad: @ WaitForAnimEnd(Stack[-3])
0x3ae: Pop(0)
0x3af: Pop(0); Push((bool) Stack[-3] == 0)
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b1: GOTO 0x3cf

0x3b2: GOTO 0x3c4

0x3b3: Push((int) 1)
0x3b4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3b6: Push((int) 4)
0x3b7: @ rand(Stack[-3], Stack[-1])
0x3b8: Pop(1)
0x3b9: Push((int) 1)
0x3ba: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3bb: @ Sleep(Stack[-1], Stack[-2])
0x3bc: Pop(1)
0x3bd: Pop(0); Push((bool) Stack[-1] == 0)
0x3be: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bf: GOTO 0x3cf

0x3c0: GOTO 0x3c4

0x3c1: Push(Stack[-6])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c3: GOTO 0x3cf

0x3c4: PushEmpty(bool)
0x3c5: Call2 0x3d2

0x3c6: Pop(0)
0x3c7: Pop(1); Push((bool) Stack[-1] == 0)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c9: GOTO 0x3cf

0x3ca: @ ResetAAS()
0x3cb: Pop(0)
0x3cc: Push((int) 1)
0x3cd: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x3ce: GOTO 0x391

0x3cf: @ ResetAAS()
0x3d0: Pop(0)
0x3d1: Return(); Pop(14)

0x3d2: Stack[-1] = (bool) 1
0x3d3: Return(); Pop(0)

0x3d4: @ StopAnimation()
0x3d5: Pop(0)
0x3d6: @ StopGroup0()
0x3d7: Pop(0)
0x3d8: Return(); Pop(0)

0x3d9: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3da: @ GetPosition(Stack[-3])
0x3db: Pop(0)
0x3dc: @@ GetPosition(Stack[-2])
0x3dd: Pop(0)
0x3de: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3df: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3e0: Return(); Pop(6)

0x3e1: PushEmpty(bool, bool)
0x3e2: @ IsLoaded(Stack[-1])
0x3e3: Pop(0)
0x3e4: Stack[-3] = Stack[-1]
0x3e5: Return(); Pop(2)

0x3e6: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3e7: @@ GetPosition(Stack[-8])
0x3e8: Pop(0)
0x3e9: @@ GetEyesHeight(Stack[-9])
0x3ea: Pop(0)
0x3eb: Push(CvectorIndex(Stack[-8], 1))
0x3ec: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3ed: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3ee: @ GetPosition(Stack[-7])
0x3ef: Pop(0)
0x3f0: @ GetEyesHeight(Stack[-9])
0x3f1: Pop(0)
0x3f2: Push(CvectorIndex(Stack[-7], 1))
0x3f3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3f4: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3f5: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3f6: Push(CvectorIndex(Stack[-6], 1))
0x3f7: Stack[-1] = (int) 0
0x3f8: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3f9: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3fa: Pop(1); Push(Sqrt(Stack[-1]))
0x3fb: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3fc: Stack[-5] = -Stack[-6]; Pop(0);
0x3fd: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3fe: PushEmpty(cvector, cvector)
0x3ff: Push(CVector(0.0, 1.0, 0.0))
0x400: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x401: Call2 0x50b

0x402: Pop(1)
0x403: Push((int) 25)
0x404: Pop(2); Push(Stack[-2] * Stack[-1]);
0x405: Pop(2); Push(Stack[-2] + Stack[-1]);
0x406: Push(CVector(0.0, 10.0, 0.0))
0x407: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x408: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x409: @ IsOverrideActive(Stack[-2])
0x40a: Pop(0)
0x40b: Push(Stack[-2])
0x40c: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40d: Stack[-21] = (bool) 0
0x40e: Return(); Pop(18)

0x40f: @ StopWorld()
0x410: Pop(0)
0x411: @ CameraTransit(Stack[-3], Stack[-5])
0x412: Pop(0)
0x413: Push(CvectorIndex(Stack[-4], 0))
0x414: Push(CvectorIndex(Stack[-5], 2))
0x415: @ Rotate(Stack[-2], Stack[-1])
0x416: Pop(2)
0x417: PushEmpty(bool)
0x418: Call2 0x565

0x419: Pop(0)
0x41a: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x41b: GOTO 0x424

0x41c: Push("head")
0x41d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x41e: Pop(1)
0x41f: Push(Stack[-1])
0x420: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x421: Push("head")
0x422: @ LookAsyncCamera(Stack[-1])
0x423: Pop(1)
0x424: @ CameraWaitForPlayFinish()
0x425: Pop(0)
0x426: @ ResumeWorld()
0x427: Pop(0)
0x428: Stack[-21] = (bool) 1
0x429: Return(); Pop(18)

0x42a: PushEmpty(bool, bool)
0x42b: @ CameraSwitchToNormal()
0x42c: Pop(0)
0x42d: PushEmpty(bool)
0x42e: Call2 0x565

0x42f: Pop(0)
0x430: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x431: GOTO 0x43a

0x432: Push("head")
0x433: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x434: Pop(1)
0x435: Push(Stack[-1])
0x436: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x437: Push("head")
0x438: @ UnlookAsync(Stack[-1])
0x439: Pop(1)
0x43a: Return(); Pop(2)

0x43b: PushEmpty(int, int, int, int)
0x43c: Push("voice_common")
0x43d: @ GetVariable(Stack[-1], Stack[-3])
0x43e: Pop(1)
0x43f: Push(Stack[-2])
0x440: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x441: PushEmpty(bool, object)
0x442: Stack[-1] = Stack[-7]
0x443: Call2 0x475

0x444: Pop(1)
0x445: Pop(1); Push((bool) Stack[-1] == 0)
0x446: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x447: PushEmpty(bool, object)
0x448: Stack[-1] = Stack[-7]
0x449: Call2 0x49a

0x44a: Pop(1)
0x44b: Pop(1); Push((bool) Stack[-1] == 0)
0x44c: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44d: Stack[-6] = (bool) 0
0x44e: Return(); Pop(4)

0x44f: Push((int) 2)
0x450: @ irand(Stack[-2], Stack[-1])
0x451: Pop(1)
0x452: Push(Stack[-1])
0x453: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x454: Push("voice_common")
0x455: Push((int) 1)
0x456: Pop(1); Push(Stack[-4] + Stack[-1]);
0x457: Push((int) 3)
0x458: Pop(2); Push(Stack[-2] % Stack[-1]);
0x459: @ SetVariable(Stack[-2], Stack[-1])
0x45a: Pop(2)
0x45b: GOTO 0x460

0x45c: Push("voice_common")
0x45d: Push((int) 0)
0x45e: @ SetVariable(Stack[-2], Stack[-1])
0x45f: Pop(2)
0x460: GOTO 0x473

0x461: PushEmpty(bool, object)
0x462: Stack[-1] = Stack[-7]
0x463: Call2 0x49a

0x464: Pop(1)
0x465: Pop(1); Push((bool) Stack[-1] == 0)
0x466: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x467: PushEmpty(bool, object)
0x468: Stack[-1] = Stack[-7]
0x469: Call2 0x475

0x46a: Pop(1)
0x46b: Pop(1); Push((bool) Stack[-1] == 0)
0x46c: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46d: Stack[-6] = (bool) 0
0x46e: Return(); Pop(4)

0x46f: Push("voice_common")
0x470: Push((int) 1)
0x471: @ SetVariable(Stack[-2], Stack[-1])
0x472: Pop(2)
0x473: Stack[-6] = (bool) 1
0x474: Return(); Pop(4)

0x475: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x476: Stack[-5] = "c"
0x477: Stack[-4] = (int) 0
0x478: Push((int) 1)
0x479: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x47a: Push((int) 1)
0x47b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x47c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x47d: @@ HasProperty(Stack[-1], Stack[-4])
0x47e: Pop(1)
0x47f: Pop(0); Push((bool) Stack[-3] == 0)
0x480: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x481: GOTO 0x485

0x482: Push((int) 1)
0x483: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x484: GOTO 0x478

0x485: Pop(0); Push((bool) Stack[-4] == 0)
0x486: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x487: Stack[-12] = (bool) 0
0x488: Return(); Pop(10)

0x489: Stack[-2] = (int) 0
0x48a: Push((int) 1)
0x48b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x48c: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48d: @ irand(Stack[-2], Stack[-4])
0x48e: Pop(0)
0x48f: Push((int) 1)
0x490: Pop(1); Push(Stack[-3] + Stack[-1]);
0x491: Pop(1); Push(Stack[-6] + Stack[-1]);
0x492: @@ GetProperty(Stack[-1], Stack[-2])
0x493: Pop(1)
0x494: PushEmpty(bool, string)
0x495: Stack[-1] = Stack[-3]
0x496: Call2 0x4ef

0x497: Stack[-14] = Stack[-2]
0x498: Pop(2)
0x499: Return(); Pop(10)

0x49a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x49b: Push("d")
0x49c: PushEmpty(int)
0x49d: Call2 0x536

0x49e: Pop(0)
0x49f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4a0: Push("m")
0x4a1: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4a2: Stack[-4] = (int) 0
0x4a3: Push((int) 1)
0x4a4: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4a5: Push((int) 1)
0x4a6: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4a7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4a8: @@ HasProperty(Stack[-1], Stack[-4])
0x4a9: Pop(1)
0x4aa: Pop(0); Push((bool) Stack[-3] == 0)
0x4ab: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4ac: GOTO 0x4b0

0x4ad: Push((int) 1)
0x4ae: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4af: GOTO 0x4a3

0x4b0: Pop(0); Push((bool) Stack[-4] == 0)
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b2: Stack[-12] = (bool) 0
0x4b3: Return(); Pop(10)

0x4b4: Stack[-2] = (int) 0
0x4b5: Push((int) 1)
0x4b6: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b8: @ irand(Stack[-2], Stack[-4])
0x4b9: Pop(0)
0x4ba: Push((int) 1)
0x4bb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4bc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4bd: @@ GetProperty(Stack[-1], Stack[-2])
0x4be: Pop(1)
0x4bf: PushEmpty(bool, string)
0x4c0: Stack[-1] = Stack[-3]
0x4c1: Call2 0x4ef

0x4c2: Stack[-14] = Stack[-2]
0x4c3: Pop(2)
0x4c4: Return(); Pop(10)

0x4c5: PushEmpty(bool, float, float, bool, float, float)
0x4c6: @ lshHasAnimation(Stack[-3], Stack[-7])
0x4c7: Pop(0)
0x4c8: Push(Stack[-3])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4ca: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x4cb: Pop(0)
0x4cc: Push((bool) 0)
0x4cd: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4ce: Pop(1)
0x4cf: GOTO 0x4d4

0x4d0: Push("Can't find lsh animation : ")
0x4d1: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4d2: @ Trace(Stack[-1])
0x4d3: Pop(1)
0x4d4: Return(); Pop(6)

0x4d5: PushEmpty(bool, float, float, bool, float, float)
0x4d6: @ lshHasAnimation(Stack[-3], Stack[-8])
0x4d7: Pop(0)
0x4d8: Push(Stack[-3])
0x4d9: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4da: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x4db: Pop(0)
0x4dc: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x4dd: Pop(0)
0x4de: GOTO 0x4e3

0x4df: Push("Can't find lsh animation : ")
0x4e0: Pop(1); Push(Stack[-1] + Stack[-9]);
0x4e1: @ Trace(Stack[-1])
0x4e2: Pop(1)
0x4e3: Return(); Pop(6)

0x4e4: PushEmpty(float, cvector, float, cvector)
0x4e5: @@ GetEyesHeight(Stack[-2])
0x4e6: Pop(0)
0x4e7: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x4e8: Push(CvectorIndex(Stack[-1], 1))
0x4e9: Stack[-1] = Stack[-3]
0x4ea: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4eb: Push("head")
0x4ec: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x4ed: Pop(1)
0x4ee: Return(); Pop(4)

0x4ef: PushEmpty(bool, bool)
0x4f0: PushEmpty(bool)
0x4f1: Call2 0x565

0x4f2: Pop(0)
0x4f3: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4f4: @ lshHasSpeech(Stack[-1], Stack[-3])
0x4f5: Pop(0)
0x4f6: Push(Stack[-1])
0x4f7: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4f8: @ lshPlaySpeech(Stack[-3])
0x4f9: Pop(0)
0x4fa: Stack[-4] = (bool) 1
0x4fb: Return(); Pop(2)

0x4fc: Stack[-4] = (bool) 0
0x4fd: Return(); Pop(2)

0x4fe: PushEmpty(bool)
0x4ff: Call2 0x565

0x500: Pop(0)
0x501: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x502: @ lshStopSpeech()
0x503: Pop(0)
0x504: Return(); Pop(0)

0x505: PushEmpty(object, object)
0x506: @ self(Stack[-1])
0x507: Pop(0)
0x508: Stack[-3] = Stack[-1]
0x509: Return(); Pop(2)

0x50a: Stack[-1] = 0
0x50b: PushEmpty(float, float)
0x50c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x50d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x50e: Push((float)0.0)
0x50f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x510: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x511: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x512: Return(); Pop(2)

0x513: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x514: Return(); Pop(2)

0x515: PushEmpty(int, int)
0x516: @ GetVariable(Stack[-3], Stack[-1])
0x517: Pop(0)
0x518: Stack[-4] = Stack[-1]
0x519: Return(); Pop(2)

0x51a: PushEmpty(object, object, object, object)
0x51b: @ GetMainOutdoorScene(Stack[-2])
0x51c: Pop(0)
0x51d: Push(".bin")
0x51e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x51f: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x520: Pop(1)
0x521: Stack[-6] = Stack[-1]
0x522: Return(); Pop(4)

0x523: Stack[-1] = 0
0x524: Stack[-2] = 0
0x525: PushEmpty(object, object)
0x526: @ FindActor(Stack[-1], Stack[-4])
0x527: Pop(0)
0x528: Pop(0); Push((bool) Stack[-1] == 0)
0x529: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x52a: Stack[-5] = (bool) 0
0x52b: Return(); Pop(2)

0x52c: @ Trigger(Stack[-1], Stack[-3])
0x52d: Pop(0)
0x52e: Stack[-5] = (bool) 1
0x52f: Return(); Pop(2)

0x530: Stack[-1] = 0
0x531: PushEmpty(float, float)
0x532: @ GetGameTime(Stack[-1])
0x533: Pop(0)
0x534: Stack[-3] = Stack[-1]
0x535: Return(); Pop(2)

0x536: PushEmpty(float, float)
0x537: @ GetGameTime(Stack[-1])
0x538: Pop(0)
0x539: Push((int) 1)
0x53a: PushEmpty(int)
0x53b: Push((int) 24)
0x53c: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x53d: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x53e: Return(); Pop(2)

0x53f: PushEmpty()
0x540: PushEmpty(int)
0x541: Call2 0x536

0x542: Pop(0)
0x543: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x544: Return(); Pop(0)

0x545: PushEmpty(string, string)
0x546: Stack[-1] = "idle"
0x547: Push(Stack[-3])
0x548: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x549: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x54a: Stack[-4] = Stack[-1]
0x54b: Return(); Pop(2)

0x54c: PushEmpty(int, bool, int, bool)
0x54d: Stack[-2] = (int) 0
0x54e: Push("all")
0x54f: PushEmpty(string, int)
0x550: Stack[-1] = Stack[-5]
0x551: Call2 0x545

0x552: Pop(1)
0x553: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x554: Pop(2)
0x555: Pop(0); Push((bool) Stack[-1] == 0)
0x556: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x557: GOTO 0x55b

0x558: Push((int) 1)
0x559: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x55a: GOTO 0x54e

0x55b: Stack[-5] = Stack[-2]
0x55c: Return(); Pop(4)

0x55d: Stack[-1] = (int) 533305
0x55e: Return(); Pop(0)

0x55f: Stack[-1] = (int) 533304
0x560: Return(); Pop(0)

0x561: Stack[-1] = "ui/NPC_Citizen1.png"
0x562: Return(); Pop(0)

0x563: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x564: Return(); Pop(0)

0x565: Stack[-1] = (bool) 0
0x566: Return(); Pop(0)

0x567: PushEmpty()
0x568: Push("ood7Nudegirl1")
0x569: Push((int) 1)
0x56a: @ SetVariable(Stack[-2], Stack[-1])
0x56b: Pop(2)
0x56c: Return(); Pop(0)

0x56d: PushEmpty(object, object)
0x56e: Push("d7q04")
0x56f: Push((int) 1)
0x570: @ SetVariable(Stack[-2], Stack[-1])
0x571: Pop(2)
0x572: PushEmpty(object)
0x573: Call2 0x60d

0x574: Stack[-2] = Stack[-1]
0x575: Pop(1)
0x576: Push("d7q04NudeGotoAndrei")
0x577: Push("pt_map_andrei")
0x578: Push((int) 0)
0x579: Push((int) 515352)
0x57a: PushEmpty(float)
0x57b: Call2 0x531

0x57c: Pop(0)
0x57d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x57e: Pop(5)
0x57f: PushEmpty()
0x580: Call2 0x5ca

0x581: Pop(0)
0x582: PushEmpty()
0x583: Call2 0x5d7

0x584: Pop(0)
0x585: PushEmpty(object, string)
0x586: Stack[-1] = "quest_d7_04"
0x587: Call2 0x51a

0x588: Pop(2)
0x589: PushEmpty(bool, string, string)
0x58a: Stack[-2] = "quest_d7_04"
0x58b: Stack[-1] = "init_kabak"
0x58c: Call2 0x525

0x58d: Pop(3)
0x58e: Return(); Pop(2)

0x58f: Stack[-1] = 0
0x590: PushEmpty()
0x591: Push("ood7Nudegirl2")
0x592: Push((int) 1)
0x593: @ SetVariable(Stack[-2], Stack[-1])
0x594: Pop(2)
0x595: Return(); Pop(0)

0x596: PushEmpty()
0x597: PushEmpty(object, string, float)
0x598: PushEmpty(object)
0x599: Call2 0x60d

0x59a: Stack[-4] = Stack[-1]
0x59b: Pop(1)
0x59c: Stack[-2] = "pt_map_andrei"
0x59d: Stack[-1] = (int) 2
0x59e: Call2 0x61e

0x59f: Pop(3)
0x5a0: PushEmpty(object)
0x5a1: Call2 0x60d

0x5a2: Pop(0)
0x5a3: @@ ShowMap(Stack[-1])
0x5a4: Pop(1)
0x5a5: Return(); Pop(0)

0x5a6: PushEmpty()
0x5a7: PushEmpty(int, string)
0x5a8: Stack[-1] = "ood7Nudegirl1"
0x5a9: Call2 0x515

0x5aa: Pop(1)
0x5ab: Push((int) 0)
0x5ac: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5ad: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5ae: Stack[-2] = (bool) 1
0x5af: Return(); Pop(0)

0x5b0: Stack[-2] = (bool) 0
0x5b1: Return(); Pop(0)

0x5b2: PushEmpty()
0x5b3: PushEmpty(int, string)
0x5b4: Stack[-1] = "d7q04"
0x5b5: Call2 0x515

0x5b6: Pop(1)
0x5b7: Push((int) 1000)
0x5b8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5b9: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5ba: Stack[-2] = (bool) 1
0x5bb: Return(); Pop(0)

0x5bc: Stack[-2] = (bool) 0
0x5bd: Return(); Pop(0)

0x5be: PushEmpty()
0x5bf: PushEmpty(int, string)
0x5c0: Stack[-1] = "ood7Nudegirl2"
0x5c1: Call2 0x515

0x5c2: Pop(1)
0x5c3: Push((int) 0)
0x5c4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5c5: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c6: Stack[-2] = (bool) 1
0x5c7: Return(); Pop(0)

0x5c8: Stack[-2] = (bool) 0
0x5c9: Return(); Pop(0)

0x5ca: PushEmpty(object, object)
0x5cb: Push((int) 637)
0x5cc: Push((int) 2)
0x5cd: Push((int) 533223)
0x5ce: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5cf: Pop(3)
0x5d0: PushEmpty(bool, object, int)
0x5d1: Stack[-2] = Stack[-4]
0x5d2: Stack[-1] = (int) -1
0x5d3: Call2 0x5f1

0x5d4: Pop(3)
0x5d5: Return(); Pop(2)

0x5d6: Stack[-1] = 0
0x5d7: PushEmpty(object, object)
0x5d8: Push((int) 638)
0x5d9: Push((int) 2)
0x5da: Push((int) 533224)
0x5db: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5dc: Pop(3)
0x5dd: PushEmpty(bool, object, int)
0x5de: Stack[-2] = Stack[-4]
0x5df: Stack[-1] = (int) 637
0x5e0: Call2 0x5f1

0x5e1: Pop(3)
0x5e2: Return(); Pop(2)

0x5e3: Stack[-1] = 0
0x5e4: PushEmpty(object, object)
0x5e5: @ GetDiaryRoot(Stack[-1])
0x5e6: Pop(0)
0x5e7: Pop(0); Push((bool) Stack[-1] == 0)
0x5e8: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5e9: Push("Can't retrieve diary root")
0x5ea: @ Trace(Stack[-1])
0x5eb: Pop(1)
0x5ec: Stack[-3] = (bool) 0
0x5ed: Return(); Pop(2)

0x5ee: Stack[-3] = Stack[-1]
0x5ef: Return(); Pop(2)

0x5f0: Stack[-1] = 0
0x5f1: PushEmpty(object, object, int, object, object, int)
0x5f2: PushEmpty(object)
0x5f3: Call2 0x5e4

0x5f4: Stack[-4] = Stack[-1]
0x5f5: Pop(1)
0x5f6: @@ Find(Stack[-7], Stack[-2])
0x5f7: Pop(0)
0x5f8: Pop(0); Push((bool) Stack[-2] == 0)
0x5f9: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5fa: Push("Can't find diary parent with id: ")
0x5fb: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5fc: @ Trace(Stack[-1])
0x5fd: Pop(1)
0x5fe: Stack[-9] = (bool) 0
0x5ff: Return(); Pop(6)

0x600: @@ AddChild(Stack[-8])
0x601: Pop(0)
0x602: Push((int) 7)
0x603: @ SendWorldWndMessage(Stack[-1])
0x604: Pop(1)
0x605: @@ GetCategory(Stack[-1])
0x606: Pop(0)
0x607: @ SetDiarySection(Stack[-1])
0x608: Pop(0)
0x609: Stack[-9] = (bool) 0
0x60a: Return(); Pop(6)

0x60b: Stack[-2] = 0
0x60c: Stack[-3] = 0
0x60d: PushEmpty(object, object, object, object)
0x60e: @ GetMainOutdoorScene(Stack[-2])
0x60f: Pop(0)
0x610: Pop(0); Push((bool) Stack[-2] == 0)
0x611: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x612: Push("Can't find main outdoor scene")
0x613: @ Trace(Stack[-1])
0x614: Pop(1)
0x615: Stack[-1] = 0
0x616: Stack[-5] = Stack[-1]
0x617: Return(); Pop(4)

0x618: @@ GetMap(Stack[-1])
0x619: Pop(0)
0x61a: Stack[-5] = Stack[-1]
0x61b: Return(); Pop(4)

0x61c: Stack[-1] = 0
0x61d: Stack[-2] = 0
0x61e: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x61f: @ GetMainOutdoorScene(Stack[-2])
0x620: Pop(0)
0x621: Pop(0); Push((bool) Stack[-2] == 0)
0x622: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x623: Push("Can't find main outdoor scene")
0x624: @ Trace(Stack[-1])
0x625: Pop(1)
0x626: Return(); Pop(8)

0x627: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x628: Pop(0)
0x629: Pop(0); Push((bool) Stack[-1] == 0)
0x62a: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62b: Push("Warning: outdoor scene locator ")
0x62c: Pop(1); Push(Stack[-1] + Stack[-11]);
0x62d: Push(" doesnt exist")
0x62e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x62f: @ Trace(Stack[-1])
0x630: Pop(1)
0x631: @@ GetMap(Stack[-11])
0x632: Pop(0)
0x633: Pop(0); Push((bool) Stack[-11] == 0)
0x634: IF (Stack[-1] == 0) GOTO 0x639; Pop(1)

0x635: Push("Can't find map")
0x636: @ Trace(Stack[-1])
0x637: Pop(1)
0x638: Return(); Pop(8)

0x639: Push(CvectorIndex(Stack[-4], 0))
0x63a: Push(CvectorIndex(Stack[-5], 2))
0x63b: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x63c: Pop(2)
0x63d: Return(); Pop(8)

0x63e: Stack[-2] = 0
0x63f: PushEmpty(int, int)
0x640: Push("branch")
0x641: @ GetVariable(Stack[-1], Stack[-2])
0x642: Pop(1)
0x643: Push((int) 0)
0x644: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x645: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x646: Stack[-3] = (int) 1
0x647: Return(); Pop(2)

0x648: GOTO 0x64e

0x649: Push((int) 1)
0x64a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x64b: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x64c: Stack[-3] = (int) 2
0x64d: Return(); Pop(2)

0x64e: Stack[-3] = (int) 3
0x64f: Return(); Pop(2)

