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
	Angry
	Staring
	Rage
	player
	GetPosition
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	m
	Can't find lsh animation : 
	.xml
	add
	money
	Money
	HasItem
	ui/NPC_Maria.png
	ui/NPC_Maria_b.png
	b6q03
	b6q03MariaGotoNina
	pt_map_nina
	AddMark
	quest_b6_03
	init_grave
	oob6Maria1
	b6q03NinaTalk
	completed
	b6q03_diary
	RemoveItemByType
	ShowMap
	oob12Maria1
	oob12Maria2
	b12q01MariaFinalTalk
	money2000 is given
	playsound
	givemoney
	game_final
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
	mt_maria
	d12_maria

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
	GetMainOutdoorScene (1 args)
	AddBlankActorFromXml (4 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x698
RunTask = 10

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1b5 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3e8 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x570 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x66e Vars = (int, int)
	GTASK_10 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x6e1 Vars = (int)
		EVENT_6 Op = 0x707 Vars = ()
		EVENT_5 Op = 0x716 Vars = ()
		EVENT_45 Op = 0x723 Vars = (bool)
		EVENT_0 Op = 0x72f Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x7bf

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x955

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x953

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x957

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x959

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xaad

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
0x31: Call2 0x8d5

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x816

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
0x48: Call2 0x804

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
0x56: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x8b

0x5a: Pop(1)
0x5b: Push((int) 518027)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 518028)
0x61: Push((int) 29772)
0x62: Push((int) 19161)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 528396)
0x66: Push((int) 29772)
0x67: Push((int) 29771)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0x95b

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x8a0

0x79: Pop(1)
0x7a: GOTO 0x71

0x7b: GOTO 0x8a

0x7c: Push("all")
0x7d: Push("idle")
0x7e: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: @ WaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: Push("all")
0x86: Push("idle")
0x87: @ PlayAnimation(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: GOTO 0x80

0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: PushEmpty(bool)
0x8d: Call2 0x95b

0x8e: Pop(0)
0x8f: Pop(1); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Return(); Pop(0)

0x92: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: PushEmpty(string, bool)
0x96: Stack[-2] = Stack[-3]
0x97: Push("")
0x98: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: GOTO 0x9d

0x9c: Stack[-1] = (bool) 1
0x9d: Call2 0x8b0

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x8ce

0xa6: Pop(0)
0xa7: Push((int) 19160)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 518027)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 518028)
0xb4: Push((int) 29772)
0xb5: Push((int) 19161)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 528396)
0xb9: Push((int) 29772)
0xba: Push((int) 29771)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 29772)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Neutral"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 528397)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 528398)
0xcb: Push((int) -1)
0xcc: Push((int) 29773)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 528399)
0xd0: Push((int) -1)
0xd1: Push((int) 29774)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd6: PushEmpty(bool)
0xd7: Call2 0x95b

0xd8: Pop(0)
0xd9: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xda: @ lshStopAnimation()
0xdb: Pop(0)
0xdc: GOTO 0xdf

0xdd: @ StopAnimation()
0xde: Pop(0)
0xdf: Return(); Pop(0)

0xe0: GOTO 0xa2

0xe1: Return(); Pop(0)

0xe2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe4: PushEmpty(bool, object, float)
0xe5: Stack[-2] = Stack[-12]
0xe6: Stack[-1] = (float) 70.0
0xe7: Call2 0x7bf

0xe8: Pop(2)
0xe9: Pop(1); Push((bool) Stack[-1] == 0)
0xea: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xeb: Stack[-10] = (int) -2
0xec: Return(); Pop(8)

0xed: @ CreateDialog(Stack[-4])
0xee: Pop(0)
0xef: PushEmpty(int)
0xf0: Call2 0x955

0xf1: Pop(0)
0xf2: @@ SetNPCName(Stack[-1])
0xf3: Pop(1)
0xf4: PushEmpty(int)
0xf5: Call2 0x953

0xf6: Pop(0)
0xf7: @@ SetNPCDescription(Stack[-1])
0xf8: Pop(1)
0xf9: PushEmpty(string)
0xfa: Call2 0x957

0xfb: Pop(0)
0xfc: @@ SetPhoto(Stack[-1])
0xfd: Pop(1)
0xfe: PushEmpty(string)
0xff: Call2 0x959

0x100: Pop(0)
0x101: @@ SetPhoto2(Stack[-1])
0x102: Pop(1)
0x103: PushEmpty(int)
0x104: Call2 0xaad

0x105: Pop(0)
0x106: @@ SetPlayerName(Stack[-1])
0x107: Pop(1)
0x108: Stack[-2] = (int) -1
0x109: @ IsOverrideActive(Stack[-3])
0x10a: Pop(0)
0x10b: Push(Stack[-3])
0x10c: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10d: Stack[-10] = (int) -2
0x10e: Return(); Pop(8)

0x10f: @ DoDialog(Stack[-4])
0x110: Pop(0)
0x111: PushEmpty(bool, object)
0x112: PushEmpty(object)
0x113: Call2 0x8d5

0x114: Stack[-2] = Stack[-1]
0x115: Pop(1)
0x116: Call2 0x816

0x117: Pop(2)
0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[-11]
0x11a: Stack[-1] = Stack[-6]
0x11b: Push(-2, 4); TaskCall(3)
0x11c: Call2 0x133

0x11d: Pop(-2, 4); TaskReturn
0x11e: Pop(2)
0x11f: @@ IsDialogEnd(Stack[-1])
0x120: Pop(0)
0x121: Pop(0); Push((bool) Stack[-1] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x123: @ sync()
0x124: Pop(0)
0x125: @@ IsDialogEnd(Stack[-1])
0x126: Pop(0)
0x127: GOTO 0x121

0x128: PushEmpty(object)
0x129: Stack[-1] = Stack[-10]
0x12a: Call2 0x804

0x12b: Pop(1)
0x12c: @ StopDialog(Stack[-4])
0x12d: Pop(0)
0x12e: @@ GetReturnValue(Stack[-2])
0x12f: Pop(0)
0x130: Stack[-10] = Stack[-2]
0x131: Return(); Pop(8)

0x132: Stack[-4] = 0
0x133: PushEmpty()
0x134: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x135: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x136: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x137: Push((int) 1)
0x138: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x139: PushEmpty(bool, object)
0x13a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13b: Call2 0x9e4

0x13c: Pop(1)
0x13d: Pop(1); Push((bool) Stack[-1] == 0)
0x13e: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x13f: PushEmpty(object, object)
0x140: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x141: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x142: Call2 0x986

0x143: Pop(2)
0x144: PushEmpty(string)
0x145: Stack[-1] = "Neutral"
0x146: Call2 0x19f

0x147: Pop(1)
0x148: Push((int) 521326)
0x149: @@ SetMessage(Stack[-1])
0x14a: Pop(1)
0x14b: @@ ClearReplies()
0x14c: Pop(0)
0x14d: Push((int) 528379)
0x14e: Push((int) 29753)
0x14f: Push((int) 29752)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: GOTO 0x181

0x153: PushEmpty(string)
0x154: Stack[-1] = "Neutral"
0x155: Call2 0x19f

0x156: Pop(1)
0x157: Push((int) 521329)
0x158: @@ SetMessage(Stack[-1])
0x159: Pop(1)
0x15a: @@ ClearReplies()
0x15b: Pop(0)
0x15c: PushEmpty(bool, object)
0x15d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15e: Call2 0x9d8

0x15f: Pop(1)
0x160: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x161: Push((int) 521330)
0x162: Push((int) 22527)
0x163: Push((int) 22524)
0x164: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x165: Pop(3)
0x166: PushEmpty(bool)
0x167: Stack[-1] = (bool) 0
0x168: PushEmpty(bool, object)
0x169: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16a: Call2 0x9f0

0x16b: Pop(1)
0x16c: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16d: PushEmpty(bool, object)
0x16e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16f: Call2 0x9cc

0x170: Pop(1)
0x171: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x172: Stack[-1] = (bool) 1
0x173: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x174: Push((int) 521331)
0x175: Push((int) 22529)
0x176: Push((int) 22525)
0x177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x178: Pop(3)
0x179: Push((int) 521332)
0x17a: Push((int) -1)
0x17b: Push((int) 22526)
0x17c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17d: Pop(3)
0x17e: GOTO 0x181

0x17f: Return(); Pop(0)

0x180: GOTO 0x137

0x181: PushEmpty(bool)
0x182: Call2 0x95b

0x183: Pop(0)
0x184: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x185: @ lshWaitForAnimEnd()
0x186: Pop(0)
0x187: Push( Stack[3 + Tasks[-1].StackPointer] )
0x188: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x189: GOTO 0x18f

0x18a: PushEmpty(string)
0x18b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x18c: Call2 0x8a0

0x18d: Pop(1)
0x18e: GOTO 0x185

0x18f: GOTO 0x19e

0x190: Push("all")
0x191: Push("idle")
0x192: @ PlayAnimation(Stack[-2], Stack[-1])
0x193: Pop(2)
0x194: @ WaitForAnimEnd()
0x195: Pop(0)
0x196: Push( Stack[3 + Tasks[-1].StackPointer] )
0x197: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x198: GOTO 0x19e

0x199: Push("all")
0x19a: Push("idle")
0x19b: @ PlayAnimation(Stack[-2], Stack[-1])
0x19c: Pop(2)
0x19d: GOTO 0x194

0x19e: Return(); Pop(0)

0x19f: PushEmpty()
0x1a0: PushEmpty(bool)
0x1a1: Call2 0x95b

0x1a2: Pop(0)
0x1a3: Pop(1); Push((bool) Stack[-1] == 0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: Return(); Pop(0)

0x1a6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a8: Return(); Pop(0)

0x1a9: PushEmpty(string, bool)
0x1aa: Stack[-2] = Stack[-3]
0x1ab: Push("")
0x1ac: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ae: Stack[-1] = (bool) 0
0x1af: GOTO 0x1b1

0x1b0: Stack[-1] = (bool) 1
0x1b1: Call2 0x8b0

0x1b2: Pop(2)
0x1b3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1b4: Return(); Pop(0)

0x1b5: PushEmpty()
0x1b6: Push((int) 1)
0x1b7: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x1b8: PushEmpty()
0x1b9: Call2 0x8ce

0x1ba: Pop(0)
0x1bb: Push((int) 22521)
0x1bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1be: PushEmpty(object, object)
0x1bf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c1: Call2 0x95d

0x1c2: Pop(2)
0x1c3: PushEmpty(object, object)
0x1c4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c6: Call2 0x99a

0x1c7: Pop(2)
0x1c8: Push((int) 22528)
0x1c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1cb: PushEmpty(object, object)
0x1cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ce: Call2 0x95d

0x1cf: Pop(2)
0x1d0: PushEmpty(object, object)
0x1d1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d3: Call2 0x99a

0x1d4: Pop(2)
0x1d5: Push((int) 22525)
0x1d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d8: PushEmpty(object, object)
0x1d9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1db: Call2 0x980

0x1dc: Pop(2)
0x1dd: Push((int) 22530)
0x1de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e0: PushEmpty(object, object)
0x1e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e3: Call2 0x98c

0x1e4: Pop(2)
0x1e5: PushEmpty(object, object)
0x1e6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e8: Call2 0x9bc

0x1e9: Pop(2)
0x1ea: PushEmpty(object, object)
0x1eb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ed: Call2 0x9c6

0x1ee: Pop(2)
0x1ef: Push((int) 29751)
0x1f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1f2: PushEmpty(object, object)
0x1f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f5: Call2 0x98c

0x1f6: Pop(2)
0x1f7: PushEmpty(object, object)
0x1f8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1fa: Call2 0x9bc

0x1fb: Pop(2)
0x1fc: PushEmpty(object, object)
0x1fd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1fe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ff: Call2 0x9c6

0x200: Pop(2)
0x201: Push((int) 22520)
0x202: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x204: PushEmpty(bool, object)
0x205: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x206: Call2 0x9e4

0x207: Pop(1)
0x208: Pop(1); Push((bool) Stack[-1] == 0)
0x209: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x20a: PushEmpty(object, object)
0x20b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x20c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x20d: Call2 0x986

0x20e: Pop(2)
0x20f: PushEmpty(string)
0x210: Stack[-1] = "Neutral"
0x211: Call2 0x19f

0x212: Pop(1)
0x213: Push((int) 521326)
0x214: @@ SetMessage(Stack[-1])
0x215: Pop(1)
0x216: @@ ClearReplies()
0x217: Pop(0)
0x218: Push((int) 528379)
0x219: Push((int) 29753)
0x21a: Push((int) 29752)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: Return(); Pop(0)

0x21e: PushEmpty(string)
0x21f: Stack[-1] = "Neutral"
0x220: Call2 0x19f

0x221: Pop(1)
0x222: Push((int) 521329)
0x223: @@ SetMessage(Stack[-1])
0x224: Pop(1)
0x225: @@ ClearReplies()
0x226: Pop(0)
0x227: PushEmpty(bool, object)
0x228: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x229: Call2 0x9d8

0x22a: Pop(1)
0x22b: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22c: Push((int) 521330)
0x22d: Push((int) 22527)
0x22e: Push((int) 22524)
0x22f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x230: Pop(3)
0x231: PushEmpty(bool)
0x232: Stack[-1] = (bool) 0
0x233: PushEmpty(bool, object)
0x234: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x235: Call2 0x9f0

0x236: Pop(1)
0x237: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x238: PushEmpty(bool, object)
0x239: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23a: Call2 0x9cc

0x23b: Pop(1)
0x23c: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23d: Stack[-1] = (bool) 1
0x23e: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23f: Push((int) 521331)
0x240: Push((int) 22529)
0x241: Push((int) 22525)
0x242: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x243: Pop(3)
0x244: Push((int) 521332)
0x245: Push((int) -1)
0x246: Push((int) 22526)
0x247: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x248: Pop(3)
0x249: Return(); Pop(0)

0x24a: Push((int) 22529)
0x24b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x24d: PushEmpty(string)
0x24e: Stack[-1] = "Neutral"
0x24f: Call2 0x19f

0x250: Pop(1)
0x251: Push((int) 521335)
0x252: @@ SetMessage(Stack[-1])
0x253: Pop(1)
0x254: @@ ClearReplies()
0x255: Pop(0)
0x256: Push((int) 521336)
0x257: Push((int) -1)
0x258: Push((int) 22530)
0x259: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25a: Pop(3)
0x25b: Push((int) 528376)
0x25c: Push((int) 29750)
0x25d: Push((int) 29749)
0x25e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25f: Pop(3)
0x260: Return(); Pop(0)

0x261: Push((int) 29750)
0x262: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x263: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x264: PushEmpty(string)
0x265: Stack[-1] = "Angry"
0x266: Call2 0x19f

0x267: Pop(1)
0x268: Push((int) 528377)
0x269: @@ SetMessage(Stack[-1])
0x26a: Pop(1)
0x26b: @@ ClearReplies()
0x26c: Pop(0)
0x26d: Push((int) 528378)
0x26e: Push((int) -1)
0x26f: Push((int) 29751)
0x270: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x271: Pop(3)
0x272: Return(); Pop(0)

0x273: Push((int) 22527)
0x274: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x276: PushEmpty(string)
0x277: Stack[-1] = "Staring"
0x278: Call2 0x19f

0x279: Pop(1)
0x27a: Push((int) 521333)
0x27b: @@ SetMessage(Stack[-1])
0x27c: Pop(1)
0x27d: @@ ClearReplies()
0x27e: Pop(0)
0x27f: Push((int) 528374)
0x280: Push((int) 29748)
0x281: Push((int) 29747)
0x282: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x283: Pop(3)
0x284: Return(); Pop(0)

0x285: Push((int) 29748)
0x286: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x288: PushEmpty(string)
0x289: Stack[-1] = "Staring"
0x28a: Call2 0x19f

0x28b: Pop(1)
0x28c: Push((int) 528375)
0x28d: @@ SetMessage(Stack[-1])
0x28e: Pop(1)
0x28f: @@ ClearReplies()
0x290: Pop(0)
0x291: Push((int) 521334)
0x292: Push((int) -1)
0x293: Push((int) 22528)
0x294: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x295: Pop(3)
0x296: Return(); Pop(0)

0x297: Push((int) 29753)
0x298: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x299: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x29a: PushEmpty(string)
0x29b: Stack[-1] = "Neutral"
0x29c: Call2 0x19f

0x29d: Pop(1)
0x29e: Push((int) 528380)
0x29f: @@ SetMessage(Stack[-1])
0x2a0: Pop(1)
0x2a1: @@ ClearReplies()
0x2a2: Pop(0)
0x2a3: Push((int) 528381)
0x2a4: Push((int) 29755)
0x2a5: Push((int) 29754)
0x2a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a7: Pop(3)
0x2a8: Return(); Pop(0)

0x2a9: Push((int) 29755)
0x2aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2ac: PushEmpty(string)
0x2ad: Stack[-1] = "Staring"
0x2ae: Call2 0x19f

0x2af: Pop(1)
0x2b0: Push((int) 528382)
0x2b1: @@ SetMessage(Stack[-1])
0x2b2: Pop(1)
0x2b3: @@ ClearReplies()
0x2b4: Pop(0)
0x2b5: Push((int) 528383)
0x2b6: Push((int) 29757)
0x2b7: Push((int) 29756)
0x2b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b9: Pop(3)
0x2ba: Push((int) 528386)
0x2bb: Push((int) 29760)
0x2bc: Push((int) 29759)
0x2bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2be: Pop(3)
0x2bf: Return(); Pop(0)

0x2c0: Push((int) 29760)
0x2c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2c3: PushEmpty(string)
0x2c4: Stack[-1] = "Staring"
0x2c5: Call2 0x19f

0x2c6: Pop(1)
0x2c7: Push((int) 528387)
0x2c8: @@ SetMessage(Stack[-1])
0x2c9: Pop(1)
0x2ca: @@ ClearReplies()
0x2cb: Pop(0)
0x2cc: Push((int) 528388)
0x2cd: Push((int) 29762)
0x2ce: Push((int) 29761)
0x2cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d0: Pop(3)
0x2d1: Return(); Pop(0)

0x2d2: Push((int) 29762)
0x2d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2d5: PushEmpty(string)
0x2d6: Stack[-1] = "Staring"
0x2d7: Call2 0x19f

0x2d8: Pop(1)
0x2d9: Push((int) 528389)
0x2da: @@ SetMessage(Stack[-1])
0x2db: Pop(1)
0x2dc: @@ ClearReplies()
0x2dd: Pop(0)
0x2de: Push((int) 528390)
0x2df: Push((int) 29757)
0x2e0: Push((int) 29763)
0x2e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e2: Pop(3)
0x2e3: Push((int) 528391)
0x2e4: Push((int) 29765)
0x2e5: Push((int) 29764)
0x2e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e7: Pop(3)
0x2e8: Push((int) 528394)
0x2e9: Push((int) -1)
0x2ea: Push((int) 29768)
0x2eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ec: Pop(3)
0x2ed: Return(); Pop(0)

0x2ee: Push((int) 29765)
0x2ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2f1: PushEmpty(string)
0x2f2: Stack[-1] = "Neutral"
0x2f3: Call2 0x19f

0x2f4: Pop(1)
0x2f5: Push((int) 528392)
0x2f6: @@ SetMessage(Stack[-1])
0x2f7: Pop(1)
0x2f8: @@ ClearReplies()
0x2f9: Pop(0)
0x2fa: Push((int) 528393)
0x2fb: Push((int) 29757)
0x2fc: Push((int) 29766)
0x2fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fe: Pop(3)
0x2ff: Return(); Pop(0)

0x300: Push((int) 29757)
0x301: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x303: PushEmpty(string)
0x304: Stack[-1] = "Staring"
0x305: Call2 0x19f

0x306: Pop(1)
0x307: Push((int) 528384)
0x308: @@ SetMessage(Stack[-1])
0x309: Pop(1)
0x30a: @@ ClearReplies()
0x30b: Pop(0)
0x30c: Push((int) 521327)
0x30d: Push((int) -1)
0x30e: Push((int) 22521)
0x30f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x310: Pop(3)
0x311: Push((int) 528395)
0x312: Push((int) -1)
0x313: Push((int) 29770)
0x314: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x315: Pop(3)
0x316: Return(); Pop(0)

0x317: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x318: PushEmpty(bool)
0x319: Call2 0x95b

0x31a: Pop(0)
0x31b: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31c: @ lshStopAnimation()
0x31d: Pop(0)
0x31e: GOTO 0x321

0x31f: @ StopAnimation()
0x320: Pop(0)
0x321: Return(); Pop(0)

0x322: GOTO 0x1b6

0x323: Return(); Pop(0)

0x324: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x325: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x326: PushEmpty(bool, object, float)
0x327: Stack[-2] = Stack[-12]
0x328: Stack[-1] = (float) 70.0
0x329: Call2 0x7bf

0x32a: Pop(2)
0x32b: Pop(1); Push((bool) Stack[-1] == 0)
0x32c: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32d: Stack[-10] = (int) -2
0x32e: Return(); Pop(8)

0x32f: @ CreateDialog(Stack[-4])
0x330: Pop(0)
0x331: PushEmpty(int)
0x332: Call2 0x955

0x333: Pop(0)
0x334: @@ SetNPCName(Stack[-1])
0x335: Pop(1)
0x336: PushEmpty(int)
0x337: Call2 0x953

0x338: Pop(0)
0x339: @@ SetNPCDescription(Stack[-1])
0x33a: Pop(1)
0x33b: PushEmpty(string)
0x33c: Call2 0x957

0x33d: Pop(0)
0x33e: @@ SetPhoto(Stack[-1])
0x33f: Pop(1)
0x340: PushEmpty(string)
0x341: Call2 0x959

0x342: Pop(0)
0x343: @@ SetPhoto2(Stack[-1])
0x344: Pop(1)
0x345: PushEmpty(int)
0x346: Call2 0xaad

0x347: Pop(0)
0x348: @@ SetPlayerName(Stack[-1])
0x349: Pop(1)
0x34a: Stack[-2] = (int) -1
0x34b: @ IsOverrideActive(Stack[-3])
0x34c: Pop(0)
0x34d: Push(Stack[-3])
0x34e: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34f: Stack[-10] = (int) -2
0x350: Return(); Pop(8)

0x351: @ DoDialog(Stack[-4])
0x352: Pop(0)
0x353: PushEmpty(bool, object)
0x354: PushEmpty(object)
0x355: Call2 0x8d5

0x356: Stack[-2] = Stack[-1]
0x357: Pop(1)
0x358: Call2 0x816

0x359: Pop(2)
0x35a: PushEmpty(object, object)
0x35b: Stack[-2] = Stack[-11]
0x35c: Stack[-1] = Stack[-6]
0x35d: Push(-2, 4); TaskCall(5)
0x35e: Call2 0x375

0x35f: Pop(-2, 4); TaskReturn
0x360: Pop(2)
0x361: @@ IsDialogEnd(Stack[-1])
0x362: Pop(0)
0x363: Pop(0); Push((bool) Stack[-1] == 0)
0x364: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x365: @ sync()
0x366: Pop(0)
0x367: @@ IsDialogEnd(Stack[-1])
0x368: Pop(0)
0x369: GOTO 0x363

0x36a: PushEmpty(object)
0x36b: Stack[-1] = Stack[-10]
0x36c: Call2 0x804

0x36d: Pop(1)
0x36e: @ StopDialog(Stack[-4])
0x36f: Pop(0)
0x370: @@ GetReturnValue(Stack[-2])
0x371: Pop(0)
0x372: Stack[-10] = Stack[-2]
0x373: Return(); Pop(8)

0x374: Stack[-4] = 0
0x375: PushEmpty()
0x376: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x377: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x378: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x379: Push((int) 1)
0x37a: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x37b: PushEmpty(string)
0x37c: Stack[-1] = "Neutral"
0x37d: Call2 0x3d2

0x37e: Pop(1)
0x37f: Push((int) 523177)
0x380: @@ SetMessage(Stack[-1])
0x381: Pop(1)
0x382: @@ ClearReplies()
0x383: Pop(0)
0x384: PushEmpty(bool, object)
0x385: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x386: Call2 0xa13

0x387: Pop(1)
0x388: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x389: Push((int) 523178)
0x38a: Push((int) 24382)
0x38b: Push((int) 24381)
0x38c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38d: Pop(3)
0x38e: PushEmpty(bool)
0x38f: Stack[-1] = (bool) 0
0x390: PushEmpty(bool)
0x391: Stack[-1] = (bool) 0
0x392: PushEmpty(bool, object)
0x393: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x394: Call2 0x9fb

0x395: Pop(1)
0x396: Pop(1); Push((bool) Stack[-1] == 0)
0x397: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x398: PushEmpty(bool, object)
0x399: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x39a: Call2 0xa07

0x39b: Pop(1)
0x39c: Pop(1); Push((bool) Stack[-1] == 0)
0x39d: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39e: Stack[-1] = (bool) 1
0x39f: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a0: PushEmpty(bool, object)
0x3a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a2: Call2 0xa1f

0x3a3: Pop(1)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a5: Stack[-1] = (bool) 1
0x3a6: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3a7: Push((int) 523187)
0x3a8: Push((int) 42102)
0x3a9: Push((int) 24390)
0x3aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ab: Pop(3)
0x3ac: Push((int) 523186)
0x3ad: Push((int) -1)
0x3ae: Push((int) 24389)
0x3af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b0: Pop(3)
0x3b1: GOTO 0x3b4

0x3b2: Return(); Pop(0)

0x3b3: GOTO 0x379

0x3b4: PushEmpty(bool)
0x3b5: Call2 0x95b

0x3b6: Pop(0)
0x3b7: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3b8: @ lshWaitForAnimEnd()
0x3b9: Pop(0)
0x3ba: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3bb: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bc: GOTO 0x3c2

0x3bd: PushEmpty(string)
0x3be: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3bf: Call2 0x8a0

0x3c0: Pop(1)
0x3c1: GOTO 0x3b8

0x3c2: GOTO 0x3d1

0x3c3: Push("all")
0x3c4: Push("idle")
0x3c5: @ PlayAnimation(Stack[-2], Stack[-1])
0x3c6: Pop(2)
0x3c7: @ WaitForAnimEnd()
0x3c8: Pop(0)
0x3c9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3cb: GOTO 0x3d1

0x3cc: Push("all")
0x3cd: Push("idle")
0x3ce: @ PlayAnimation(Stack[-2], Stack[-1])
0x3cf: Pop(2)
0x3d0: GOTO 0x3c7

0x3d1: Return(); Pop(0)

0x3d2: PushEmpty()
0x3d3: PushEmpty(bool)
0x3d4: Call2 0x95b

0x3d5: Pop(0)
0x3d6: Pop(1); Push((bool) Stack[-1] == 0)
0x3d7: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d8: Return(); Pop(0)

0x3d9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3da: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3db: Return(); Pop(0)

0x3dc: PushEmpty(string, bool)
0x3dd: Stack[-2] = Stack[-3]
0x3de: Push("")
0x3df: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e1: Stack[-1] = (bool) 0
0x3e2: GOTO 0x3e4

0x3e3: Stack[-1] = (bool) 1
0x3e4: Call2 0x8b0

0x3e5: Pop(2)
0x3e6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3e7: Return(); Pop(0)

0x3e8: PushEmpty()
0x3e9: Push((int) 1)
0x3ea: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x3eb: PushEmpty()
0x3ec: Call2 0x8ce

0x3ed: Pop(0)
0x3ee: Push((int) 24381)
0x3ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f0: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3f1: PushEmpty(object, object)
0x3f2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3f4: Call2 0x9aa

0x3f5: Pop(2)
0x3f6: PushEmpty(object, object)
0x3f7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3f9: Call2 0x9b6

0x3fa: Pop(2)
0x3fb: Push((int) 24390)
0x3fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3fd: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x3fe: PushEmpty(object, object)
0x3ff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x400: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x401: Call2 0x9b0

0x402: Pop(2)
0x403: Push((int) 24380)
0x404: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x405: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x406: PushEmpty(string)
0x407: Stack[-1] = "Neutral"
0x408: Call2 0x3d2

0x409: Pop(1)
0x40a: Push((int) 523177)
0x40b: @@ SetMessage(Stack[-1])
0x40c: Pop(1)
0x40d: @@ ClearReplies()
0x40e: Pop(0)
0x40f: PushEmpty(bool, object)
0x410: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x411: Call2 0xa13

0x412: Pop(1)
0x413: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x414: Push((int) 523178)
0x415: Push((int) 24382)
0x416: Push((int) 24381)
0x417: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x418: Pop(3)
0x419: PushEmpty(bool)
0x41a: Stack[-1] = (bool) 0
0x41b: PushEmpty(bool)
0x41c: Stack[-1] = (bool) 0
0x41d: PushEmpty(bool, object)
0x41e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x41f: Call2 0x9fb

0x420: Pop(1)
0x421: Pop(1); Push((bool) Stack[-1] == 0)
0x422: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x423: PushEmpty(bool, object)
0x424: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x425: Call2 0xa07

0x426: Pop(1)
0x427: Pop(1); Push((bool) Stack[-1] == 0)
0x428: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x429: Stack[-1] = (bool) 1
0x42a: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42b: PushEmpty(bool, object)
0x42c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x42d: Call2 0xa1f

0x42e: Pop(1)
0x42f: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x430: Stack[-1] = (bool) 1
0x431: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x432: Push((int) 523187)
0x433: Push((int) 42102)
0x434: Push((int) 24390)
0x435: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x436: Pop(3)
0x437: Push((int) 523186)
0x438: Push((int) -1)
0x439: Push((int) 24389)
0x43a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43b: Pop(3)
0x43c: Return(); Pop(0)

0x43d: Push((int) 42102)
0x43e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x43f: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x440: PushEmpty(string)
0x441: Stack[-1] = "Rage"
0x442: Call2 0x3d2

0x443: Pop(1)
0x444: Push((int) 540130)
0x445: @@ SetMessage(Stack[-1])
0x446: Pop(1)
0x447: @@ ClearReplies()
0x448: Pop(0)
0x449: Push((int) 540131)
0x44a: Push((int) 24391)
0x44b: Push((int) 42103)
0x44c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44d: Pop(3)
0x44e: Return(); Pop(0)

0x44f: Push((int) 24391)
0x450: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x451: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x452: PushEmpty(string)
0x453: Stack[-1] = "Rage"
0x454: Call2 0x3d2

0x455: Pop(1)
0x456: Push((int) 523188)
0x457: @@ SetMessage(Stack[-1])
0x458: Pop(1)
0x459: @@ ClearReplies()
0x45a: Pop(0)
0x45b: Push((int) 523189)
0x45c: Push((int) -1)
0x45d: Push((int) 24392)
0x45e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45f: Pop(3)
0x460: Return(); Pop(0)

0x461: Push((int) 24382)
0x462: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x463: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x464: PushEmpty(string)
0x465: Stack[-1] = "Angry"
0x466: Call2 0x3d2

0x467: Pop(1)
0x468: Push((int) 523179)
0x469: @@ SetMessage(Stack[-1])
0x46a: Pop(1)
0x46b: @@ ClearReplies()
0x46c: Pop(0)
0x46d: Push((int) 523180)
0x46e: Push((int) 24384)
0x46f: Push((int) 24383)
0x470: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x471: Pop(3)
0x472: Push((int) 540132)
0x473: Push((int) -1)
0x474: Push((int) 42104)
0x475: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x476: Pop(3)
0x477: Return(); Pop(0)

0x478: Push((int) 24384)
0x479: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47a: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x47b: PushEmpty(string)
0x47c: Stack[-1] = "Rage"
0x47d: Call2 0x3d2

0x47e: Pop(1)
0x47f: Push((int) 523181)
0x480: @@ SetMessage(Stack[-1])
0x481: Pop(1)
0x482: @@ ClearReplies()
0x483: Pop(0)
0x484: Push((int) 523182)
0x485: Push((int) 24386)
0x486: Push((int) 24385)
0x487: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x488: Pop(3)
0x489: Push((int) 540133)
0x48a: Push((int) -1)
0x48b: Push((int) 42105)
0x48c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48d: Pop(3)
0x48e: Return(); Pop(0)

0x48f: Push((int) 24386)
0x490: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x491: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x492: PushEmpty(string)
0x493: Stack[-1] = "Rage"
0x494: Call2 0x3d2

0x495: Pop(1)
0x496: Push((int) 523183)
0x497: @@ SetMessage(Stack[-1])
0x498: Pop(1)
0x499: @@ ClearReplies()
0x49a: Pop(0)
0x49b: Push((int) 523184)
0x49c: Push((int) 24388)
0x49d: Push((int) 24387)
0x49e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49f: Pop(3)
0x4a0: Push((int) 540134)
0x4a1: Push((int) -1)
0x4a2: Push((int) 42106)
0x4a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a4: Pop(3)
0x4a5: Return(); Pop(0)

0x4a6: Push((int) 24388)
0x4a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4a9: PushEmpty(string)
0x4aa: Stack[-1] = "Rage"
0x4ab: Call2 0x3d2

0x4ac: Pop(1)
0x4ad: Push((int) 523185)
0x4ae: @@ SetMessage(Stack[-1])
0x4af: Pop(1)
0x4b0: @@ ClearReplies()
0x4b1: Pop(0)
0x4b2: Push((int) 523190)
0x4b3: Push((int) -1)
0x4b4: Push((int) 24393)
0x4b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b6: Pop(3)
0x4b7: Push((int) 523191)
0x4b8: Push((int) -1)
0x4b9: Push((int) 24394)
0x4ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bb: Pop(3)
0x4bc: Return(); Pop(0)

0x4bd: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4be: PushEmpty(bool)
0x4bf: Call2 0x95b

0x4c0: Pop(0)
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c2: @ lshStopAnimation()
0x4c3: Pop(0)
0x4c4: GOTO 0x4c7

0x4c5: @ StopAnimation()
0x4c6: Pop(0)
0x4c7: Return(); Pop(0)

0x4c8: GOTO 0x3e9

0x4c9: Return(); Pop(0)

0x4ca: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4cb: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4cc: PushEmpty(bool, object, float)
0x4cd: Stack[-2] = Stack[-12]
0x4ce: Stack[-1] = (float) 70.0
0x4cf: Call2 0x7bf

0x4d0: Pop(2)
0x4d1: Pop(1); Push((bool) Stack[-1] == 0)
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d3: Stack[-10] = (int) -2
0x4d4: Return(); Pop(8)

0x4d5: @ CreateDialog(Stack[-4])
0x4d6: Pop(0)
0x4d7: PushEmpty(int)
0x4d8: Call2 0x955

0x4d9: Pop(0)
0x4da: @@ SetNPCName(Stack[-1])
0x4db: Pop(1)
0x4dc: PushEmpty(int)
0x4dd: Call2 0x953

0x4de: Pop(0)
0x4df: @@ SetNPCDescription(Stack[-1])
0x4e0: Pop(1)
0x4e1: PushEmpty(string)
0x4e2: Call2 0x957

0x4e3: Pop(0)
0x4e4: @@ SetPhoto(Stack[-1])
0x4e5: Pop(1)
0x4e6: PushEmpty(string)
0x4e7: Call2 0x959

0x4e8: Pop(0)
0x4e9: @@ SetPhoto2(Stack[-1])
0x4ea: Pop(1)
0x4eb: PushEmpty(int)
0x4ec: Call2 0xaad

0x4ed: Pop(0)
0x4ee: @@ SetPlayerName(Stack[-1])
0x4ef: Pop(1)
0x4f0: Stack[-2] = (int) -1
0x4f1: @ IsOverrideActive(Stack[-3])
0x4f2: Pop(0)
0x4f3: Push(Stack[-3])
0x4f4: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4f5: Stack[-10] = (int) -2
0x4f6: Return(); Pop(8)

0x4f7: @ DoDialog(Stack[-4])
0x4f8: Pop(0)
0x4f9: PushEmpty(bool, object)
0x4fa: PushEmpty(object)
0x4fb: Call2 0x8d5

0x4fc: Stack[-2] = Stack[-1]
0x4fd: Pop(1)
0x4fe: Call2 0x816

0x4ff: Pop(2)
0x500: PushEmpty(object, object)
0x501: Stack[-2] = Stack[-11]
0x502: Stack[-1] = Stack[-6]
0x503: Push(-2, 4); TaskCall(7)
0x504: Call2 0x51b

0x505: Pop(-2, 4); TaskReturn
0x506: Pop(2)
0x507: @@ IsDialogEnd(Stack[-1])
0x508: Pop(0)
0x509: Pop(0); Push((bool) Stack[-1] == 0)
0x50a: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50b: @ sync()
0x50c: Pop(0)
0x50d: @@ IsDialogEnd(Stack[-1])
0x50e: Pop(0)
0x50f: GOTO 0x509

0x510: PushEmpty(object)
0x511: Stack[-1] = Stack[-10]
0x512: Call2 0x804

0x513: Pop(1)
0x514: @ StopDialog(Stack[-4])
0x515: Pop(0)
0x516: @@ GetReturnValue(Stack[-2])
0x517: Pop(0)
0x518: Stack[-10] = Stack[-2]
0x519: Return(); Pop(8)

0x51a: Stack[-4] = 0
0x51b: PushEmpty()
0x51c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x51d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x51e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x51f: Push((int) 1)
0x520: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x521: PushEmpty(string)
0x522: Stack[-1] = "Neutral"
0x523: Call2 0x55a

0x524: Pop(1)
0x525: Push((int) 535231)
0x526: @@ SetMessage(Stack[-1])
0x527: Pop(1)
0x528: @@ ClearReplies()
0x529: Pop(0)
0x52a: Push((int) 535232)
0x52b: Push((int) 36953)
0x52c: Push((int) 36907)
0x52d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52e: Pop(3)
0x52f: Push((int) 535233)
0x530: Push((int) -1)
0x531: Push((int) 36908)
0x532: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x533: Pop(3)
0x534: Push((int) 535280)
0x535: Push((int) -1)
0x536: Push((int) 36956)
0x537: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x538: Pop(3)
0x539: GOTO 0x53c

0x53a: Return(); Pop(0)

0x53b: GOTO 0x51f

0x53c: PushEmpty(bool)
0x53d: Call2 0x95b

0x53e: Pop(0)
0x53f: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x540: @ lshWaitForAnimEnd()
0x541: Pop(0)
0x542: Push( Stack[3 + Tasks[-1].StackPointer] )
0x543: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x544: GOTO 0x54a

0x545: PushEmpty(string)
0x546: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x547: Call2 0x8a0

0x548: Pop(1)
0x549: GOTO 0x540

0x54a: GOTO 0x559

0x54b: Push("all")
0x54c: Push("idle")
0x54d: @ PlayAnimation(Stack[-2], Stack[-1])
0x54e: Pop(2)
0x54f: @ WaitForAnimEnd()
0x550: Pop(0)
0x551: Push( Stack[3 + Tasks[-1].StackPointer] )
0x552: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x553: GOTO 0x559

0x554: Push("all")
0x555: Push("idle")
0x556: @ PlayAnimation(Stack[-2], Stack[-1])
0x557: Pop(2)
0x558: GOTO 0x54f

0x559: Return(); Pop(0)

0x55a: PushEmpty()
0x55b: PushEmpty(bool)
0x55c: Call2 0x95b

0x55d: Pop(0)
0x55e: Pop(1); Push((bool) Stack[-1] == 0)
0x55f: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x560: Return(); Pop(0)

0x561: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x562: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x563: Return(); Pop(0)

0x564: PushEmpty(string, bool)
0x565: Stack[-2] = Stack[-3]
0x566: Push("")
0x567: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x568: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x569: Stack[-1] = (bool) 0
0x56a: GOTO 0x56c

0x56b: Stack[-1] = (bool) 1
0x56c: Call2 0x8b0

0x56d: Pop(2)
0x56e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x56f: Return(); Pop(0)

0x570: PushEmpty()
0x571: Push((int) 1)
0x572: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x573: PushEmpty()
0x574: Call2 0x8ce

0x575: Pop(0)
0x576: Push((int) 36906)
0x577: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x578: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x579: PushEmpty(string)
0x57a: Stack[-1] = "Neutral"
0x57b: Call2 0x55a

0x57c: Pop(1)
0x57d: Push((int) 535231)
0x57e: @@ SetMessage(Stack[-1])
0x57f: Pop(1)
0x580: @@ ClearReplies()
0x581: Pop(0)
0x582: Push((int) 535232)
0x583: Push((int) 36953)
0x584: Push((int) 36907)
0x585: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x586: Pop(3)
0x587: Push((int) 535233)
0x588: Push((int) -1)
0x589: Push((int) 36908)
0x58a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58b: Pop(3)
0x58c: Push((int) 535280)
0x58d: Push((int) -1)
0x58e: Push((int) 36956)
0x58f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x590: Pop(3)
0x591: Return(); Pop(0)

0x592: Push((int) 36953)
0x593: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x594: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x595: PushEmpty(string)
0x596: Stack[-1] = "Neutral"
0x597: Call2 0x55a

0x598: Pop(1)
0x599: Push((int) 535277)
0x59a: @@ SetMessage(Stack[-1])
0x59b: Pop(1)
0x59c: @@ ClearReplies()
0x59d: Pop(0)
0x59e: Push((int) 535278)
0x59f: Push((int) 36957)
0x5a0: Push((int) 36954)
0x5a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a2: Pop(3)
0x5a3: Push((int) 535279)
0x5a4: Push((int) 36957)
0x5a5: Push((int) 36955)
0x5a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a7: Pop(3)
0x5a8: Return(); Pop(0)

0x5a9: Push((int) 36957)
0x5aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ab: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5ac: PushEmpty(string)
0x5ad: Stack[-1] = "Neutral"
0x5ae: Call2 0x55a

0x5af: Pop(1)
0x5b0: Push((int) 535281)
0x5b1: @@ SetMessage(Stack[-1])
0x5b2: Pop(1)
0x5b3: @@ ClearReplies()
0x5b4: Pop(0)
0x5b5: Push((int) 535282)
0x5b6: Push((int) -1)
0x5b7: Push((int) 36958)
0x5b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b9: Pop(3)
0x5ba: Push((int) 535283)
0x5bb: Push((int) -1)
0x5bc: Push((int) 36959)
0x5bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5be: Pop(3)
0x5bf: Return(); Pop(0)

0x5c0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5c1: PushEmpty(bool)
0x5c2: Call2 0x95b

0x5c3: Pop(0)
0x5c4: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c5: @ lshStopAnimation()
0x5c6: Pop(0)
0x5c7: GOTO 0x5ca

0x5c8: @ StopAnimation()
0x5c9: Pop(0)
0x5ca: Return(); Pop(0)

0x5cb: GOTO 0x571

0x5cc: Return(); Pop(0)

0x5cd: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5ce: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5cf: PushEmpty(bool, object, float)
0x5d0: Stack[-2] = Stack[-12]
0x5d1: Stack[-1] = (float) 70.0
0x5d2: Call2 0x7bf

0x5d3: Pop(2)
0x5d4: Pop(1); Push((bool) Stack[-1] == 0)
0x5d5: IF (Stack[-1] == 0) GOTO 0x5d8; Pop(1)

0x5d6: Stack[-10] = (int) -2
0x5d7: Return(); Pop(8)

0x5d8: @ CreateDialog(Stack[-4])
0x5d9: Pop(0)
0x5da: PushEmpty(int)
0x5db: Call2 0x955

0x5dc: Pop(0)
0x5dd: @@ SetNPCName(Stack[-1])
0x5de: Pop(1)
0x5df: PushEmpty(int)
0x5e0: Call2 0x953

0x5e1: Pop(0)
0x5e2: @@ SetNPCDescription(Stack[-1])
0x5e3: Pop(1)
0x5e4: PushEmpty(string)
0x5e5: Call2 0x957

0x5e6: Pop(0)
0x5e7: @@ SetPhoto(Stack[-1])
0x5e8: Pop(1)
0x5e9: PushEmpty(string)
0x5ea: Call2 0x959

0x5eb: Pop(0)
0x5ec: @@ SetPhoto2(Stack[-1])
0x5ed: Pop(1)
0x5ee: PushEmpty(int)
0x5ef: Call2 0xaad

0x5f0: Pop(0)
0x5f1: @@ SetPlayerName(Stack[-1])
0x5f2: Pop(1)
0x5f3: Stack[-2] = (int) -1
0x5f4: @ IsOverrideActive(Stack[-3])
0x5f5: Pop(0)
0x5f6: Push(Stack[-3])
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f8: Stack[-10] = (int) -2
0x5f9: Return(); Pop(8)

0x5fa: @ DoDialog(Stack[-4])
0x5fb: Pop(0)
0x5fc: PushEmpty(bool, object)
0x5fd: PushEmpty(object)
0x5fe: Call2 0x8d5

0x5ff: Stack[-2] = Stack[-1]
0x600: Pop(1)
0x601: Call2 0x816

0x602: Pop(2)
0x603: PushEmpty(object, object)
0x604: Stack[-2] = Stack[-11]
0x605: Stack[-1] = Stack[-6]
0x606: Push(-2, 4); TaskCall(9)
0x607: Call2 0x61e

0x608: Pop(-2, 4); TaskReturn
0x609: Pop(2)
0x60a: @@ IsDialogEnd(Stack[-1])
0x60b: Pop(0)
0x60c: Pop(0); Push((bool) Stack[-1] == 0)
0x60d: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x60e: @ sync()
0x60f: Pop(0)
0x610: @@ IsDialogEnd(Stack[-1])
0x611: Pop(0)
0x612: GOTO 0x60c

0x613: PushEmpty(object)
0x614: Stack[-1] = Stack[-10]
0x615: Call2 0x804

0x616: Pop(1)
0x617: @ StopDialog(Stack[-4])
0x618: Pop(0)
0x619: @@ GetReturnValue(Stack[-2])
0x61a: Pop(0)
0x61b: Stack[-10] = Stack[-2]
0x61c: Return(); Pop(8)

0x61d: Stack[-4] = 0
0x61e: PushEmpty()
0x61f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x620: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x621: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x622: Push((int) 1)
0x623: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x624: PushEmpty(string)
0x625: Stack[-1] = "Neutral"
0x626: Call2 0x658

0x627: Pop(1)
0x628: Push((int) 540551)
0x629: @@ SetMessage(Stack[-1])
0x62a: Pop(1)
0x62b: @@ ClearReplies()
0x62c: Pop(0)
0x62d: Push((int) 540552)
0x62e: Push((int) -1)
0x62f: Push((int) 42561)
0x630: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x631: Pop(3)
0x632: Push((int) 540795)
0x633: Push((int) -1)
0x634: Push((int) 42844)
0x635: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x636: Pop(3)
0x637: GOTO 0x63a

0x638: Return(); Pop(0)

0x639: GOTO 0x622

0x63a: PushEmpty(bool)
0x63b: Call2 0x95b

0x63c: Pop(0)
0x63d: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x63e: @ lshWaitForAnimEnd()
0x63f: Pop(0)
0x640: Push( Stack[3 + Tasks[-1].StackPointer] )
0x641: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x642: GOTO 0x648

0x643: PushEmpty(string)
0x644: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x645: Call2 0x8a0

0x646: Pop(1)
0x647: GOTO 0x63e

0x648: GOTO 0x657

0x649: Push("all")
0x64a: Push("idle")
0x64b: @ PlayAnimation(Stack[-2], Stack[-1])
0x64c: Pop(2)
0x64d: @ WaitForAnimEnd()
0x64e: Pop(0)
0x64f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x650: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x651: GOTO 0x657

0x652: Push("all")
0x653: Push("idle")
0x654: @ PlayAnimation(Stack[-2], Stack[-1])
0x655: Pop(2)
0x656: GOTO 0x64d

0x657: Return(); Pop(0)

0x658: PushEmpty()
0x659: PushEmpty(bool)
0x65a: Call2 0x95b

0x65b: Pop(0)
0x65c: Pop(1); Push((bool) Stack[-1] == 0)
0x65d: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65e: Return(); Pop(0)

0x65f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x660: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x661: Return(); Pop(0)

0x662: PushEmpty(string, bool)
0x663: Stack[-2] = Stack[-3]
0x664: Push("")
0x665: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x666: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x667: Stack[-1] = (bool) 0
0x668: GOTO 0x66a

0x669: Stack[-1] = (bool) 1
0x66a: Call2 0x8b0

0x66b: Pop(2)
0x66c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x66d: Return(); Pop(0)

0x66e: PushEmpty()
0x66f: Push((int) 1)
0x670: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x671: PushEmpty()
0x672: Call2 0x8ce

0x673: Pop(0)
0x674: Push((int) 42560)
0x675: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x676: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x677: PushEmpty(string)
0x678: Stack[-1] = "Neutral"
0x679: Call2 0x658

0x67a: Pop(1)
0x67b: Push((int) 540551)
0x67c: @@ SetMessage(Stack[-1])
0x67d: Pop(1)
0x67e: @@ ClearReplies()
0x67f: Pop(0)
0x680: Push((int) 540552)
0x681: Push((int) -1)
0x682: Push((int) 42561)
0x683: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x684: Pop(3)
0x685: Push((int) 540795)
0x686: Push((int) -1)
0x687: Push((int) 42844)
0x688: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x689: Pop(3)
0x68a: Return(); Pop(0)

0x68b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x68c: PushEmpty(bool)
0x68d: Call2 0x95b

0x68e: Pop(0)
0x68f: IF (Stack[-1] == 0) GOTO 0x693; Pop(1)

0x690: @ lshStopAnimation()
0x691: Pop(0)
0x692: GOTO 0x695

0x693: @ StopAnimation()
0x694: Pop(0)
0x695: Return(); Pop(0)

0x696: GOTO 0x66f

0x697: Return(); Pop(0)

0x698: PushEmpty()
0x699: Call2 0x69c

0x69a: Pop(0)
0x69b: Return(); Pop(0)

0x69c: PushEmpty(bool)
0x69d: Call2 0x7ba

0x69e: Pop(0)
0x69f: Pop(1); Push((bool) Stack[-1] == 0)
0x6a0: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x6a1: @ Hold()
0x6a2: Pop(0)
0x6a3: @ GetDirection(Stack[-0])
0x6a4: Pop(0)
0x6a5: PushEmpty()
0x6a6: Call2 0x74c

0x6a7: Pop(0)
0x6a8: GOTO 0x6a5

0x6a9: Return(); Pop(0)

0x6aa: PushEmpty(object, object)
0x6ab: Push("player")
0x6ac: @ FindActor(Stack[-2], Stack[-1])
0x6ad: Pop(1)
0x6ae: Pop(0); Push((bool) Stack[-1] == 0)
0x6af: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6b0: Stack[-3] = (bool) 0
0x6b1: Return(); Pop(2)

0x6b2: PushEmpty(bool, object)
0x6b3: Stack[-1] = Stack[-3]
0x6b4: Call2 0x7b1

0x6b5: Stack[-5] = Stack[-2]
0x6b6: Pop(2)
0x6b7: Return(); Pop(2)

0x6b8: Stack[-1] = 0
0x6b9: Push(CvectorIndex(Stack[-0], 0))
0x6ba: Push(CvectorIndex(Stack[-0], 2))
0x6bb: @ RotateAsync(Stack[-2], Stack[-1])
0x6bc: Pop(2)
0x6bd: Return(); Pop(0)

0x6be: PushEmpty(object, bool, object, bool)
0x6bf: Push("player")
0x6c0: @ FindActor(Stack[-3], Stack[-1])
0x6c1: Pop(1)
0x6c2: Pop(0); Push((bool) Stack[-2] == 0)
0x6c3: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6c4: Stack[-5] = (bool) 0
0x6c5: Return(); Pop(4)

0x6c6: PushEmpty(float, object)
0x6c7: Stack[-1] = Stack[-4]
0x6c8: Call2 0x798

0x6c9: Pop(1)
0x6ca: Push((float)90000.0)
0x6cb: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x6cc: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6cd: Stack[-5] = (bool) 0
0x6ce: Return(); Pop(4)

0x6cf: @ CanSee(Stack[-1], Stack[-2])
0x6d0: Pop(0)
0x6d1: Stack[-5] = Stack[-1]
0x6d2: Return(); Pop(4)

0x6d3: Stack[-2] = 0
0x6d4: PushEmpty(float, float)
0x6d5: Push((int) 8)
0x6d6: Push((int) 16)
0x6d7: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x6d8: Pop(2)
0x6d9: Push((int) 10)
0x6da: @ SetTimer(Stack[-1], Stack[-2])
0x6db: Pop(1)
0x6dc: Return(); Pop(2)

0x6dd: Push((int) 10)
0x6de: @ KillTimer(Stack[-1])
0x6df: Pop(1)
0x6e0: Return(); Pop(0)

0x6e1: PushEmpty()
0x6e2: Push((int) 10)
0x6e3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6e4: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x6e5: PushEmpty()
0x6e6: Call2 0x6dd

0x6e7: Pop(0)
0x6e8: PushEmpty(bool)
0x6e9: Stack[-1] = (bool) 0
0x6ea: PushEmpty(bool)
0x6eb: Call2 0x7ba

0x6ec: Pop(0)
0x6ed: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6ee: PushEmpty(bool)
0x6ef: Call2 0x6be

0x6f0: Pop(0)
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6f2: Stack[-1] = (bool) 1
0x6f3: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6f4: PushEmpty(bool)
0x6f5: Call2 0x6aa

0x6f6: Pop(0)
0x6f7: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6f8: PushEmpty(bool, object)
0x6f9: PushEmpty(object)
0x6fa: Call2 0x8d5

0x6fb: Stack[-2] = Stack[-1]
0x6fc: Pop(1)
0x6fd: Call2 0x850

0x6fe: Pop(2)
0x6ff: GOTO 0x706

0x700: PushEmpty()
0x701: Call2 0x6b9

0x702: Pop(0)
0x703: PushEmpty()
0x704: Call2 0x6d4

0x705: Pop(0)
0x706: Return(); Pop(0)

0x707: PushEmpty()
0x708: Call2 0x793

0x709: Pop(0)
0x70a: PushEmpty()
0x70b: Call2 0x6dd

0x70c: Pop(0)
0x70d: @ lshStopSpeech()
0x70e: Pop(0)
0x70f: @ lshStopAnimation()
0x710: Pop(0)
0x711: @ StopAsync()
0x712: Pop(0)
0x713: @ Hold()
0x714: Pop(0)
0x715: Return(); Pop(0)

0x716: @ StopGroup0()
0x717: Pop(0)
0x718: PushEmpty()
0x719: Call2 0x6dd

0x71a: Pop(0)
0x71b: PushEmpty(string)
0x71c: Stack[-1] = "Neutral"
0x71d: Call2 0x8a0

0x71e: Pop(1)
0x71f: PushEmpty()
0x720: Call2 0x6d4

0x721: Pop(0)
0x722: Return(); Pop(0)

0x723: PushEmpty()
0x724: Push(Stack[-1])
0x725: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x726: PushEmpty()
0x727: Call2 0x6d4

0x728: Pop(0)
0x729: GOTO 0x72e

0x72a: PushEmpty(string)
0x72b: Stack[-1] = "Neutral"
0x72c: Call2 0x8a0

0x72d: Pop(1)
0x72e: Return(); Pop(0)

0x72f: PushEmpty(bool, bool)
0x730: @ IsOverrideActive(Stack[-1])
0x731: Pop(0)
0x732: Pop(0); Push((bool) Stack[-1] == 0)
0x733: IF (Stack[-1] == 0) GOTO 0x74b; Pop(1)

0x734: EventDisable(0)
0x735: PushEmpty()
0x736: Call2 0x793

0x737: Pop(0)
0x738: PushEmpty(bool, object)
0x739: Stack[-1] = Stack[-5]
0x73a: Call2 0x7b1

0x73b: Pop(2)
0x73c: EventEnable(0)
0x73d: PushEmpty(object)
0x73e: Stack[-1] = Stack[-4]
0x73f: Call2 0xac4

0x740: Pop(1)
0x741: PushEmpty(string)
0x742: Stack[-1] = "Neutral"
0x743: Call2 0x8a0

0x744: Pop(1)
0x745: PushEmpty()
0x746: Call2 0x6dd

0x747: Pop(0)
0x748: PushEmpty()
0x749: Call2 0x6d4

0x74a: Pop(0)
0x74b: Return(); Pop(2)

0x74c: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x74d: @ WaitForAnimEnd()
0x74e: Pop(0)
0x74f: PushEmpty(bool)
0x750: Call2 0x7ba

0x751: Pop(0)
0x752: Pop(1); Push((bool) Stack[-1] == 0)
0x753: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x754: Return(); Pop(12)

0x755: PushEmpty(int)
0x756: Call2 0x942

0x757: Stack[-7] = Stack[-1]
0x758: Pop(1)
0x759: Stack[-5] = (int) 0
0x75a: PushEmpty(bool)
0x75b: Stack[-1] = (bool) 0
0x75c: Push((int) 5)
0x75d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x75e: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x75f: PushEmpty(bool)
0x760: Call2 0x7ba

0x761: Pop(0)
0x762: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x763: Stack[-1] = (bool) 1
0x764: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x765: Pop(0); Push((bool) Stack[-6] == 0)
0x766: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x767: Push((int) 3)
0x768: @ Sleep(Stack[-1], Stack[-5])
0x769: Pop(1)
0x76a: Pop(0); Push((bool) Stack[-4] == 0)
0x76b: IF (Stack[-1] == 0) GOTO 0x76d; Pop(1)

0x76c: GOTO 0x78e

0x76d: GOTO 0x783

0x76e: @ irand(Stack[-3], Stack[-6])
0x76f: Pop(0)
0x770: Push((int) 5)
0x771: @ irand(Stack[-3], Stack[-1])
0x772: Pop(1)
0x773: Push((int) 0)
0x774: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x775: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x776: Stack[-3] = (int) 0
0x777: Push("all")
0x778: PushEmpty(string, int)
0x779: Stack[-1] = Stack[-6]
0x77a: Call2 0x93b

0x77b: Pop(1)
0x77c: @ PlayAnimation(Stack[-2], Stack[-1])
0x77d: Pop(2)
0x77e: @ WaitForAnimEnd(Stack[-1])
0x77f: Pop(0)
0x780: Pop(0); Push((bool) Stack[-1] == 0)
0x781: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x782: GOTO 0x78e

0x783: PushEmpty(bool)
0x784: Call2 0x791

0x785: Pop(0)
0x786: Pop(1); Push((bool) Stack[-1] == 0)
0x787: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x788: GOTO 0x78e

0x789: @ ResetAAS()
0x78a: Pop(0)
0x78b: Push((int) 1)
0x78c: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x78d: GOTO 0x75a

0x78e: @ ResetAAS()
0x78f: Pop(0)
0x790: Return(); Pop(12)

0x791: Stack[-1] = (bool) 1
0x792: Return(); Pop(0)

0x793: @ StopAnimation()
0x794: Pop(0)
0x795: @ StopGroup0()
0x796: Pop(0)
0x797: Return(); Pop(0)

0x798: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x799: @ GetPosition(Stack[-3])
0x79a: Pop(0)
0x79b: @@ GetPosition(Stack[-2])
0x79c: Pop(0)
0x79d: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x79e: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x79f: Return(); Pop(6)

0x7a0: PushEmpty(int, int)
0x7a1: @@ GetProperty(Stack[-4], Stack[-1])
0x7a2: Pop(0)
0x7a3: Pop(0); Push(Stack[-1] + Stack[-3]);
0x7a4: @@ SetProperty(Stack[-5], Stack[-1])
0x7a5: Pop(1)
0x7a6: Return(); Pop(2)

0x7a7: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x7a8: @ GetPosition(Stack[-3])
0x7a9: Pop(0)
0x7aa: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x7ab: Push(CvectorIndex(Stack[-2], 0))
0x7ac: Push(CvectorIndex(Stack[-3], 2))
0x7ad: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x7ae: Pop(2)
0x7af: Stack[-8] = Stack[-1]
0x7b0: Return(); Pop(6)

0x7b1: PushEmpty(cvector, cvector)
0x7b2: @@ GetPosition(Stack[-1])
0x7b3: Pop(0)
0x7b4: PushEmpty(bool, cvector)
0x7b5: Stack[-1] = Stack[-3]
0x7b6: Call2 0x7a7

0x7b7: Stack[-6] = Stack[-2]
0x7b8: Pop(2)
0x7b9: Return(); Pop(2)

0x7ba: PushEmpty(bool, bool)
0x7bb: @ IsLoaded(Stack[-1])
0x7bc: Pop(0)
0x7bd: Stack[-3] = Stack[-1]
0x7be: Return(); Pop(2)

0x7bf: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x7c0: @@ GetPosition(Stack[-8])
0x7c1: Pop(0)
0x7c2: @@ GetEyesHeight(Stack[-9])
0x7c3: Pop(0)
0x7c4: Push(CvectorIndex(Stack[-8], 1))
0x7c5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x7c6: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x7c7: @ GetPosition(Stack[-7])
0x7c8: Pop(0)
0x7c9: @ GetEyesHeight(Stack[-9])
0x7ca: Pop(0)
0x7cb: Push(CvectorIndex(Stack[-7], 1))
0x7cc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x7cd: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x7ce: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x7cf: Push(CvectorIndex(Stack[-6], 1))
0x7d0: Stack[-1] = (int) 0
0x7d1: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x7d2: Pop(0); Push(Stack[-6] | Stack[-6]);
0x7d3: Pop(1); Push(Sqrt(Stack[-1]))
0x7d4: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x7d5: Stack[-5] = -Stack[-6]; Pop(0);
0x7d6: Pop(0); Push(Stack[-6] * Stack[-19]);
0x7d7: PushEmpty(cvector, cvector)
0x7d8: Push(CVector(0.0, 1.0, 0.0))
0x7d9: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x7da: Call2 0x8db

0x7db: Pop(1)
0x7dc: Push((int) 25)
0x7dd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7de: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7df: Push(CVector(0.0, 10.0, 0.0))
0x7e0: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x7e1: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x7e2: @ IsOverrideActive(Stack[-2])
0x7e3: Pop(0)
0x7e4: Push(Stack[-2])
0x7e5: IF (Stack[-1] == 0) GOTO 0x7e8; Pop(1)

0x7e6: Stack[-21] = (bool) 0
0x7e7: Return(); Pop(18)

0x7e8: @ StopWorld()
0x7e9: Pop(0)
0x7ea: Push((bool) 1)
0x7eb: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x7ec: Pop(1)
0x7ed: Push(CvectorIndex(Stack[-4], 0))
0x7ee: Push(CvectorIndex(Stack[-5], 2))
0x7ef: @ Rotate(Stack[-2], Stack[-1])
0x7f0: Pop(2)
0x7f1: PushEmpty(bool)
0x7f2: Call2 0x95b

0x7f3: Pop(0)
0x7f4: IF (Stack[-1] == 0) GOTO 0x7f6; Pop(1)

0x7f5: GOTO 0x7fe

0x7f6: Push("head")
0x7f7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7f8: Pop(1)
0x7f9: Push(Stack[-1])
0x7fa: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7fb: Push("head")
0x7fc: @ LookAsyncCamera(Stack[-1])
0x7fd: Pop(1)
0x7fe: @ CameraWaitForPlayFinish()
0x7ff: Pop(0)
0x800: @ ResumeWorld()
0x801: Pop(0)
0x802: Stack[-21] = (bool) 1
0x803: Return(); Pop(18)

0x804: PushEmpty(bool, bool)
0x805: Push((bool) 1)
0x806: @ CameraSwitchToNormal(Stack[-1])
0x807: Pop(1)
0x808: PushEmpty(bool)
0x809: Call2 0x95b

0x80a: Pop(0)
0x80b: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x80c: GOTO 0x815

0x80d: Push("head")
0x80e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x80f: Pop(1)
0x810: Push(Stack[-1])
0x811: IF (Stack[-1] == 0) GOTO 0x815; Pop(1)

0x812: Push("head")
0x813: @ UnlookAsync(Stack[-1])
0x814: Pop(1)
0x815: Return(); Pop(2)

0x816: PushEmpty(int, int, int, int)
0x817: Push("voice_common")
0x818: @ GetVariable(Stack[-1], Stack[-3])
0x819: Pop(1)
0x81a: Push(Stack[-2])
0x81b: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x81c: PushEmpty(bool, object)
0x81d: Stack[-1] = Stack[-7]
0x81e: Call2 0x850

0x81f: Pop(1)
0x820: Pop(1); Push((bool) Stack[-1] == 0)
0x821: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x822: PushEmpty(bool, object)
0x823: Stack[-1] = Stack[-7]
0x824: Call2 0x875

0x825: Pop(1)
0x826: Pop(1); Push((bool) Stack[-1] == 0)
0x827: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x828: Stack[-6] = (bool) 0
0x829: Return(); Pop(4)

0x82a: Push((int) 2)
0x82b: @ irand(Stack[-2], Stack[-1])
0x82c: Pop(1)
0x82d: Push(Stack[-1])
0x82e: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x82f: Push("voice_common")
0x830: Push((int) 1)
0x831: Pop(1); Push(Stack[-4] + Stack[-1]);
0x832: Push((int) 3)
0x833: Pop(2); Push(Stack[-2] % Stack[-1]);
0x834: @ SetVariable(Stack[-2], Stack[-1])
0x835: Pop(2)
0x836: GOTO 0x83b

0x837: Push("voice_common")
0x838: Push((int) 0)
0x839: @ SetVariable(Stack[-2], Stack[-1])
0x83a: Pop(2)
0x83b: GOTO 0x84e

0x83c: PushEmpty(bool, object)
0x83d: Stack[-1] = Stack[-7]
0x83e: Call2 0x875

0x83f: Pop(1)
0x840: Pop(1); Push((bool) Stack[-1] == 0)
0x841: IF (Stack[-1] == 0) GOTO 0x84a; Pop(1)

0x842: PushEmpty(bool, object)
0x843: Stack[-1] = Stack[-7]
0x844: Call2 0x850

0x845: Pop(1)
0x846: Pop(1); Push((bool) Stack[-1] == 0)
0x847: IF (Stack[-1] == 0) GOTO 0x84a; Pop(1)

0x848: Stack[-6] = (bool) 0
0x849: Return(); Pop(4)

0x84a: Push("voice_common")
0x84b: Push((int) 1)
0x84c: @ SetVariable(Stack[-2], Stack[-1])
0x84d: Pop(2)
0x84e: Stack[-6] = (bool) 1
0x84f: Return(); Pop(4)

0x850: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x851: Stack[-5] = "c"
0x852: Stack[-4] = (int) 0
0x853: Push((int) 1)
0x854: IF (Stack[-1] == 0) GOTO 0x860; Pop(1)

0x855: Push((int) 1)
0x856: Pop(1); Push(Stack[-5] + Stack[-1]);
0x857: Pop(1); Push(Stack[-6] + Stack[-1]);
0x858: @@ HasProperty(Stack[-1], Stack[-4])
0x859: Pop(1)
0x85a: Pop(0); Push((bool) Stack[-3] == 0)
0x85b: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x85c: GOTO 0x860

0x85d: Push((int) 1)
0x85e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x85f: GOTO 0x853

0x860: Pop(0); Push((bool) Stack[-4] == 0)
0x861: IF (Stack[-1] == 0) GOTO 0x864; Pop(1)

0x862: Stack[-12] = (bool) 0
0x863: Return(); Pop(10)

0x864: Stack[-2] = (int) 0
0x865: Push((int) 1)
0x866: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x867: IF (Stack[-1] == 0) GOTO 0x86a; Pop(1)

0x868: @ irand(Stack[-2], Stack[-4])
0x869: Pop(0)
0x86a: Push((int) 1)
0x86b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x86c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x86d: @@ GetProperty(Stack[-1], Stack[-2])
0x86e: Pop(1)
0x86f: PushEmpty(bool, string)
0x870: Stack[-1] = Stack[-3]
0x871: Call2 0x8bf

0x872: Stack[-14] = Stack[-2]
0x873: Pop(2)
0x874: Return(); Pop(10)

0x875: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x876: Push("d")
0x877: PushEmpty(int)
0x878: Call2 0x92c

0x879: Pop(0)
0x87a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x87b: Push("m")
0x87c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x87d: Stack[-4] = (int) 0
0x87e: Push((int) 1)
0x87f: IF (Stack[-1] == 0) GOTO 0x88b; Pop(1)

0x880: Push((int) 1)
0x881: Pop(1); Push(Stack[-5] + Stack[-1]);
0x882: Pop(1); Push(Stack[-6] + Stack[-1]);
0x883: @@ HasProperty(Stack[-1], Stack[-4])
0x884: Pop(1)
0x885: Pop(0); Push((bool) Stack[-3] == 0)
0x886: IF (Stack[-1] == 0) GOTO 0x888; Pop(1)

0x887: GOTO 0x88b

0x888: Push((int) 1)
0x889: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x88a: GOTO 0x87e

0x88b: Pop(0); Push((bool) Stack[-4] == 0)
0x88c: IF (Stack[-1] == 0) GOTO 0x88f; Pop(1)

0x88d: Stack[-12] = (bool) 0
0x88e: Return(); Pop(10)

0x88f: Stack[-2] = (int) 0
0x890: Push((int) 1)
0x891: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x892: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x893: @ irand(Stack[-2], Stack[-4])
0x894: Pop(0)
0x895: Push((int) 1)
0x896: Pop(1); Push(Stack[-3] + Stack[-1]);
0x897: Pop(1); Push(Stack[-6] + Stack[-1]);
0x898: @@ GetProperty(Stack[-1], Stack[-2])
0x899: Pop(1)
0x89a: PushEmpty(bool, string)
0x89b: Stack[-1] = Stack[-3]
0x89c: Call2 0x8bf

0x89d: Stack[-14] = Stack[-2]
0x89e: Pop(2)
0x89f: Return(); Pop(10)

0x8a0: PushEmpty(bool, float, float, bool, float, float)
0x8a1: @ lshHasAnimation(Stack[-3], Stack[-7])
0x8a2: Pop(0)
0x8a3: Push(Stack[-3])
0x8a4: IF (Stack[-1] == 0) GOTO 0x8ab; Pop(1)

0x8a5: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x8a6: Pop(0)
0x8a7: Push((bool) 0)
0x8a8: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8a9: Pop(1)
0x8aa: GOTO 0x8af

0x8ab: Push("Can't find lsh animation : ")
0x8ac: Pop(1); Push(Stack[-1] + Stack[-8]);
0x8ad: @ Trace(Stack[-1])
0x8ae: Pop(1)
0x8af: Return(); Pop(6)

0x8b0: PushEmpty(bool, float, float, bool, float, float)
0x8b1: @ lshHasAnimation(Stack[-3], Stack[-8])
0x8b2: Pop(0)
0x8b3: Push(Stack[-3])
0x8b4: IF (Stack[-1] == 0) GOTO 0x8ba; Pop(1)

0x8b5: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x8b6: Pop(0)
0x8b7: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x8b8: Pop(0)
0x8b9: GOTO 0x8be

0x8ba: Push("Can't find lsh animation : ")
0x8bb: Pop(1); Push(Stack[-1] + Stack[-9]);
0x8bc: @ Trace(Stack[-1])
0x8bd: Pop(1)
0x8be: Return(); Pop(6)

0x8bf: PushEmpty(bool, bool)
0x8c0: PushEmpty(bool)
0x8c1: Call2 0x95b

0x8c2: Pop(0)
0x8c3: IF (Stack[-1] == 0) GOTO 0x8cc; Pop(1)

0x8c4: @ lshHasSpeech(Stack[-1], Stack[-3])
0x8c5: Pop(0)
0x8c6: Push(Stack[-1])
0x8c7: IF (Stack[-1] == 0) GOTO 0x8cc; Pop(1)

0x8c8: @ lshPlaySpeech(Stack[-3])
0x8c9: Pop(0)
0x8ca: Stack[-4] = (bool) 1
0x8cb: Return(); Pop(2)

0x8cc: Stack[-4] = (bool) 0
0x8cd: Return(); Pop(2)

0x8ce: PushEmpty(bool)
0x8cf: Call2 0x95b

0x8d0: Pop(0)
0x8d1: IF (Stack[-1] == 0) GOTO 0x8d4; Pop(1)

0x8d2: @ lshStopSpeech()
0x8d3: Pop(0)
0x8d4: Return(); Pop(0)

0x8d5: PushEmpty(object, object)
0x8d6: @ self(Stack[-1])
0x8d7: Pop(0)
0x8d8: Stack[-3] = Stack[-1]
0x8d9: Return(); Pop(2)

0x8da: Stack[-1] = 0
0x8db: PushEmpty(float, float)
0x8dc: Pop(0); Push(Stack[-3] | Stack[-3]);
0x8dd: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x8de: Push((float)0.0)
0x8df: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x8e0: IF (Stack[-1] == 0) GOTO 0x8e3; Pop(1)

0x8e1: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x8e2: Return(); Pop(2)

0x8e3: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x8e4: Return(); Pop(2)

0x8e5: PushEmpty(int, int)
0x8e6: @ GetVariable(Stack[-3], Stack[-1])
0x8e7: Pop(0)
0x8e8: Stack[-4] = Stack[-1]
0x8e9: Return(); Pop(2)

0x8ea: PushEmpty(object, object, object, object)
0x8eb: @ GetMainOutdoorScene(Stack[-2])
0x8ec: Pop(0)
0x8ed: Push(".xml")
0x8ee: Pop(1); Push(Stack[-6] + Stack[-1]);
0x8ef: @ AddBlankActorFromXml(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x8f0: Pop(1)
0x8f1: Stack[-6] = Stack[-1]
0x8f2: Return(); Pop(4)

0x8f3: Stack[-1] = 0
0x8f4: Stack[-2] = 0
0x8f5: PushEmpty(object, object)
0x8f6: @ CreateIntVector(Stack[-1])
0x8f7: Pop(0)
0x8f8: @@ add(Stack[-4])
0x8f9: Pop(0)
0x8fa: @@ add(Stack[-3])
0x8fb: Pop(0)
0x8fc: Push((int) 3)
0x8fd: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x8fe: Pop(1)
0x8ff: Return(); Pop(2)

0x900: Stack[-1] = 0
0x901: PushEmpty(int, int)
0x902: PushEmpty(object, string, int)
0x903: Stack[-3] = Stack[-7]
0x904: Stack[-2] = "money"
0x905: Stack[-1] = Stack[-6]
0x906: Call2 0x7a0

0x907: Pop(3)
0x908: Push((int) 0)
0x909: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x90a: IF (Stack[-1] == 0) GOTO 0x913; Pop(1)

0x90b: Push("Money")
0x90c: @ GetInvItemByName(Stack[-2], Stack[-1])
0x90d: Pop(1)
0x90e: PushEmpty(int, int)
0x90f: Stack[-2] = Stack[-3]
0x910: Stack[-1] = Stack[-5]
0x911: Call2 0x8f5

0x912: Pop(2)
0x913: Return(); Pop(2)

0x914: PushEmpty(int, bool, int, bool)
0x915: @ GetInvItemByName(Stack[-2], Stack[-5])
0x916: Pop(0)
0x917: @@ HasItem(Stack[-2], Stack[-1])
0x918: Pop(0)
0x919: Stack[-7] = Stack[-1]
0x91a: Return(); Pop(4)

0x91b: PushEmpty(object, object)
0x91c: @ FindActor(Stack[-1], Stack[-4])
0x91d: Pop(0)
0x91e: Pop(0); Push((bool) Stack[-1] == 0)
0x91f: IF (Stack[-1] == 0) GOTO 0x922; Pop(1)

0x920: Stack[-5] = (bool) 0
0x921: Return(); Pop(2)

0x922: @ Trigger(Stack[-1], Stack[-3])
0x923: Pop(0)
0x924: Stack[-5] = (bool) 1
0x925: Return(); Pop(2)

0x926: Stack[-1] = 0
0x927: PushEmpty(float, float)
0x928: @ GetGameTime(Stack[-1])
0x929: Pop(0)
0x92a: Stack[-3] = Stack[-1]
0x92b: Return(); Pop(2)

0x92c: PushEmpty(float, float)
0x92d: @ GetGameTime(Stack[-1])
0x92e: Pop(0)
0x92f: Push((int) 1)
0x930: PushEmpty(int)
0x931: Push((int) 24)
0x932: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x933: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x934: Return(); Pop(2)

0x935: PushEmpty()
0x936: PushEmpty(int)
0x937: Call2 0x92c

0x938: Pop(0)
0x939: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x93a: Return(); Pop(0)

0x93b: PushEmpty(string, string)
0x93c: Stack[-1] = "idle"
0x93d: Push(Stack[-3])
0x93e: IF (Stack[-1] == 0) GOTO 0x940; Pop(1)

0x93f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x940: Stack[-4] = Stack[-1]
0x941: Return(); Pop(2)

0x942: PushEmpty(int, bool, int, bool)
0x943: Stack[-2] = (int) 0
0x944: Push("all")
0x945: PushEmpty(string, int)
0x946: Stack[-1] = Stack[-5]
0x947: Call2 0x93b

0x948: Pop(1)
0x949: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x94a: Pop(2)
0x94b: Pop(0); Push((bool) Stack[-1] == 0)
0x94c: IF (Stack[-1] == 0) GOTO 0x94e; Pop(1)

0x94d: GOTO 0x951

0x94e: Push((int) 1)
0x94f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x950: GOTO 0x944

0x951: Stack[-5] = Stack[-2]
0x952: Return(); Pop(4)

0x953: Stack[-1] = (int) 515543
0x954: Return(); Pop(0)

0x955: Stack[-1] = (int) 502868
0x956: Return(); Pop(0)

0x957: Stack[-1] = "ui/NPC_Maria.png"
0x958: Return(); Pop(0)

0x959: Stack[-1] = "ui/NPC_Maria_b.png"
0x95a: Return(); Pop(0)

0x95b: Stack[-1] = (bool) 1
0x95c: Return(); Pop(0)

0x95d: PushEmpty(object, object)
0x95e: Push("b6q03")
0x95f: Push((int) 1)
0x960: @ SetVariable(Stack[-2], Stack[-1])
0x961: Pop(2)
0x962: PushEmpty(object)
0x963: Call2 0xa7b

0x964: Stack[-2] = Stack[-1]
0x965: Pop(1)
0x966: Push("b6q03MariaGotoNina")
0x967: Push("pt_map_nina")
0x968: Push((int) 0)
0x969: Push((int) 521342)
0x96a: PushEmpty(float)
0x96b: Call2 0x927

0x96c: Pop(0)
0x96d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x96e: Pop(5)
0x96f: PushEmpty()
0x970: Call2 0xa2b

0x971: Pop(0)
0x972: PushEmpty()
0x973: Call2 0xa45

0x974: Pop(0)
0x975: PushEmpty(object, string)
0x976: Stack[-1] = "quest_b6_03"
0x977: Call2 0x8ea

0x978: Pop(2)
0x979: PushEmpty(bool, string, string)
0x97a: Stack[-2] = "quest_b6_03"
0x97b: Stack[-1] = "init_grave"
0x97c: Call2 0x91b

0x97d: Pop(3)
0x97e: Return(); Pop(2)

0x97f: Stack[-1] = 0
0x980: PushEmpty()
0x981: Push("oob6Maria1")
0x982: Push((int) 1)
0x983: @ SetVariable(Stack[-2], Stack[-1])
0x984: Pop(2)
0x985: Return(); Pop(0)

0x986: PushEmpty()
0x987: Push("b6q03NinaTalk")
0x988: Push((int) 1)
0x989: @ SetVariable(Stack[-2], Stack[-1])
0x98a: Pop(2)
0x98b: Return(); Pop(0)

0x98c: PushEmpty(int, int)
0x98d: PushEmpty()
0x98e: Call2 0xa38

0x98f: Pop(0)
0x990: PushEmpty(bool, string, string)
0x991: Stack[-2] = "quest_b6_03"
0x992: Stack[-1] = "completed"
0x993: Call2 0x91b

0x994: Pop(3)
0x995: Push("b6q03_diary")
0x996: Push((int) 1)
0x997: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x998: Pop(2)
0x999: Return(); Pop(2)

0x99a: PushEmpty()
0x99b: PushEmpty(object, string, float)
0x99c: PushEmpty(object)
0x99d: Call2 0xa7b

0x99e: Stack[-4] = Stack[-1]
0x99f: Pop(1)
0x9a0: Stack[-2] = "pt_map_nina"
0x9a1: Stack[-1] = (int) 2
0x9a2: Call2 0xa8c

0x9a3: Pop(3)
0x9a4: PushEmpty(object)
0x9a5: Call2 0xa7b

0x9a6: Pop(0)
0x9a7: @@ ShowMap(Stack[-1])
0x9a8: Pop(1)
0x9a9: Return(); Pop(0)

0x9aa: PushEmpty()
0x9ab: Push("oob12Maria1")
0x9ac: Push((int) 1)
0x9ad: @ SetVariable(Stack[-2], Stack[-1])
0x9ae: Pop(2)
0x9af: Return(); Pop(0)

0x9b0: PushEmpty()
0x9b1: Push("oob12Maria2")
0x9b2: Push((int) 1)
0x9b3: @ SetVariable(Stack[-2], Stack[-1])
0x9b4: Pop(2)
0x9b5: Return(); Pop(0)

0x9b6: PushEmpty()
0x9b7: Push("b12q01MariaFinalTalk")
0x9b8: Push((int) 1)
0x9b9: @ SetVariable(Stack[-2], Stack[-1])
0x9ba: Pop(2)
0x9bb: Return(); Pop(0)

0x9bc: PushEmpty()
0x9bd: Push("money2000 is given")
0x9be: @ Trace(Stack[-1])
0x9bf: Pop(1)
0x9c0: PushEmpty(object, int)
0x9c1: Stack[-2] = Stack[-4]
0x9c2: Stack[-1] = (int) 2000
0x9c3: Call2 0x901

0x9c4: Pop(2)
0x9c5: Return(); Pop(0)

0x9c6: PushEmpty()
0x9c7: Push("playsound")
0x9c8: Push("givemoney")
0x9c9: @ TriggerWorld(Stack[-2], Stack[-1])
0x9ca: Pop(2)
0x9cb: Return(); Pop(0)

0x9cc: PushEmpty()
0x9cd: PushEmpty(int, string)
0x9ce: Stack[-1] = "oob6Maria1"
0x9cf: Call2 0x8e5

0x9d0: Pop(1)
0x9d1: Push((int) 0)
0x9d2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9d3: IF (Stack[-1] == 0) GOTO 0x9d6; Pop(1)

0x9d4: Stack[-2] = (bool) 1
0x9d5: Return(); Pop(0)

0x9d6: Stack[-2] = (bool) 0
0x9d7: Return(); Pop(0)

0x9d8: PushEmpty()
0x9d9: PushEmpty(int, string)
0x9da: Stack[-1] = "b6q03"
0x9db: Call2 0x8e5

0x9dc: Pop(1)
0x9dd: Push((int) 0)
0x9de: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9df: IF (Stack[-1] == 0) GOTO 0x9e2; Pop(1)

0x9e0: Stack[-2] = (bool) 1
0x9e1: Return(); Pop(0)

0x9e2: Stack[-2] = (bool) 0
0x9e3: Return(); Pop(0)

0x9e4: PushEmpty()
0x9e5: PushEmpty(int, string)
0x9e6: Stack[-1] = "b6q03NinaTalk"
0x9e7: Call2 0x8e5

0x9e8: Pop(1)
0x9e9: Push((int) 0)
0x9ea: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x9eb: IF (Stack[-1] == 0) GOTO 0x9ee; Pop(1)

0x9ec: Stack[-2] = (bool) 1
0x9ed: Return(); Pop(0)

0x9ee: Stack[-2] = (bool) 0
0x9ef: Return(); Pop(0)

0x9f0: PushEmpty()
0x9f1: PushEmpty(bool, object, string)
0x9f2: Stack[-2] = Stack[-4]
0x9f3: Stack[-1] = "b6q03_diary"
0x9f4: Call2 0x914

0x9f5: Pop(2)
0x9f6: IF (Stack[-1] == 0) GOTO 0x9f9; Pop(1)

0x9f7: Stack[-2] = (bool) 1
0x9f8: Return(); Pop(0)

0x9f9: Stack[-2] = (bool) 0
0x9fa: Return(); Pop(0)

0x9fb: PushEmpty()
0x9fc: PushEmpty(int, string)
0x9fd: Stack[-1] = "game_final"
0x9fe: Call2 0x8e5

0x9ff: Pop(1)
0xa00: Push((int) 2)
0xa01: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa02: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0xa03: Stack[-2] = (bool) 1
0xa04: Return(); Pop(0)

0xa05: Stack[-2] = (bool) 0
0xa06: Return(); Pop(0)

0xa07: PushEmpty()
0xa08: PushEmpty(int, string)
0xa09: Stack[-1] = "game_final"
0xa0a: Call2 0x8e5

0xa0b: Pop(1)
0xa0c: Push((int) 0)
0xa0d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa0e: IF (Stack[-1] == 0) GOTO 0xa11; Pop(1)

0xa0f: Stack[-2] = (bool) 1
0xa10: Return(); Pop(0)

0xa11: Stack[-2] = (bool) 0
0xa12: Return(); Pop(0)

0xa13: PushEmpty()
0xa14: PushEmpty(int, string)
0xa15: Stack[-1] = "oob12Maria1"
0xa16: Call2 0x8e5

0xa17: Pop(1)
0xa18: Push((int) 0)
0xa19: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa1a: IF (Stack[-1] == 0) GOTO 0xa1d; Pop(1)

0xa1b: Stack[-2] = (bool) 1
0xa1c: Return(); Pop(0)

0xa1d: Stack[-2] = (bool) 0
0xa1e: Return(); Pop(0)

0xa1f: PushEmpty()
0xa20: PushEmpty(int, string)
0xa21: Stack[-1] = "oob12Maria2"
0xa22: Call2 0x8e5

0xa23: Pop(1)
0xa24: Push((int) 0)
0xa25: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa26: IF (Stack[-1] == 0) GOTO 0xa29; Pop(1)

0xa27: Stack[-2] = (bool) 1
0xa28: Return(); Pop(0)

0xa29: Stack[-2] = (bool) 0
0xa2a: Return(); Pop(0)

0xa2b: PushEmpty(object, object)
0xa2c: Push((int) 276)
0xa2d: Push((int) 2)
0xa2e: Push((int) 521337)
0xa2f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa30: Pop(3)
0xa31: PushEmpty(bool, object, int)
0xa32: Stack[-2] = Stack[-4]
0xa33: Stack[-1] = (int) -1
0xa34: Call2 0xa5f

0xa35: Pop(3)
0xa36: Return(); Pop(2)

0xa37: Stack[-1] = 0
0xa38: PushEmpty(object, object)
0xa39: Push((int) 279)
0xa3a: Push((int) 2)
0xa3b: Push((int) 521340)
0xa3c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa3d: Pop(3)
0xa3e: PushEmpty(bool, object, int)
0xa3f: Stack[-2] = Stack[-4]
0xa40: Stack[-1] = (int) 276
0xa41: Call2 0xa5f

0xa42: Pop(3)
0xa43: Return(); Pop(2)

0xa44: Stack[-1] = 0
0xa45: PushEmpty(object, object)
0xa46: Push((int) 277)
0xa47: Push((int) 2)
0xa48: Push((int) 521338)
0xa49: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa4a: Pop(3)
0xa4b: PushEmpty(bool, object, int)
0xa4c: Stack[-2] = Stack[-4]
0xa4d: Stack[-1] = (int) 276
0xa4e: Call2 0xa5f

0xa4f: Pop(3)
0xa50: Return(); Pop(2)

0xa51: Stack[-1] = 0
0xa52: PushEmpty(object, object)
0xa53: @ GetDiaryRoot(Stack[-1])
0xa54: Pop(0)
0xa55: Pop(0); Push((bool) Stack[-1] == 0)
0xa56: IF (Stack[-1] == 0) GOTO 0xa5c; Pop(1)

0xa57: Push("Can't retrieve diary root")
0xa58: @ Trace(Stack[-1])
0xa59: Pop(1)
0xa5a: Stack[-3] = (bool) 0
0xa5b: Return(); Pop(2)

0xa5c: Stack[-3] = Stack[-1]
0xa5d: Return(); Pop(2)

0xa5e: Stack[-1] = 0
0xa5f: PushEmpty(object, object, int, object, object, int)
0xa60: PushEmpty(object)
0xa61: Call2 0xa52

0xa62: Stack[-4] = Stack[-1]
0xa63: Pop(1)
0xa64: @@ Find(Stack[-7], Stack[-2])
0xa65: Pop(0)
0xa66: Pop(0); Push((bool) Stack[-2] == 0)
0xa67: IF (Stack[-1] == 0) GOTO 0xa6e; Pop(1)

0xa68: Push("Can't find diary parent with id: ")
0xa69: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa6a: @ Trace(Stack[-1])
0xa6b: Pop(1)
0xa6c: Stack[-9] = (bool) 0
0xa6d: Return(); Pop(6)

0xa6e: @@ AddChild(Stack[-8])
0xa6f: Pop(0)
0xa70: Push((int) 7)
0xa71: @ SendWorldWndMessage(Stack[-1])
0xa72: Pop(1)
0xa73: @@ GetCategory(Stack[-1])
0xa74: Pop(0)
0xa75: @ SetDiarySection(Stack[-1])
0xa76: Pop(0)
0xa77: Stack[-9] = (bool) 0
0xa78: Return(); Pop(6)

0xa79: Stack[-2] = 0
0xa7a: Stack[-3] = 0
0xa7b: PushEmpty(object, object, object, object)
0xa7c: @ GetMainOutdoorScene(Stack[-2])
0xa7d: Pop(0)
0xa7e: Pop(0); Push((bool) Stack[-2] == 0)
0xa7f: IF (Stack[-1] == 0) GOTO 0xa86; Pop(1)

0xa80: Push("Can't find main outdoor scene")
0xa81: @ Trace(Stack[-1])
0xa82: Pop(1)
0xa83: Stack[-1] = 0
0xa84: Stack[-5] = Stack[-1]
0xa85: Return(); Pop(4)

0xa86: @@ GetMap(Stack[-1])
0xa87: Pop(0)
0xa88: Stack[-5] = Stack[-1]
0xa89: Return(); Pop(4)

0xa8a: Stack[-1] = 0
0xa8b: Stack[-2] = 0
0xa8c: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xa8d: @ GetMainOutdoorScene(Stack[-2])
0xa8e: Pop(0)
0xa8f: Pop(0); Push((bool) Stack[-2] == 0)
0xa90: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa91: Push("Can't find main outdoor scene")
0xa92: @ Trace(Stack[-1])
0xa93: Pop(1)
0xa94: Return(); Pop(8)

0xa95: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xa96: Pop(0)
0xa97: Pop(0); Push((bool) Stack[-1] == 0)
0xa98: IF (Stack[-1] == 0) GOTO 0xa9f; Pop(1)

0xa99: Push("Warning: outdoor scene locator ")
0xa9a: Pop(1); Push(Stack[-1] + Stack[-11]);
0xa9b: Push(" doesnt exist")
0xa9c: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa9d: @ Trace(Stack[-1])
0xa9e: Pop(1)
0xa9f: @@ GetMap(Stack[-11])
0xaa0: Pop(0)
0xaa1: Pop(0); Push((bool) Stack[-11] == 0)
0xaa2: IF (Stack[-1] == 0) GOTO 0xaa7; Pop(1)

0xaa3: Push("Can't find map")
0xaa4: @ Trace(Stack[-1])
0xaa5: Pop(1)
0xaa6: Return(); Pop(8)

0xaa7: Push(CvectorIndex(Stack[-4], 0))
0xaa8: Push(CvectorIndex(Stack[-5], 2))
0xaa9: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xaaa: Pop(2)
0xaab: Return(); Pop(8)

0xaac: Stack[-2] = 0
0xaad: PushEmpty(int, int)
0xaae: Push("branch")
0xaaf: @ GetVariable(Stack[-1], Stack[-2])
0xab0: Pop(1)
0xab1: Push((int) 0)
0xab2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xab3: IF (Stack[-1] == 0) GOTO 0xab7; Pop(1)

0xab4: Stack[-3] = (int) 1
0xab5: Return(); Pop(2)

0xab6: GOTO 0xabc

0xab7: Push((int) 1)
0xab8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xab9: IF (Stack[-1] == 0) GOTO 0xabc; Pop(1)

0xaba: Stack[-3] = (int) 2
0xabb: Return(); Pop(2)

0xabc: Stack[-3] = (int) 3
0xabd: Return(); Pop(2)

0xabe: PushEmpty(int, int)
0xabf: Push("game_final")
0xac0: @ GetVariable(Stack[-1], Stack[-2])
0xac1: Pop(1)
0xac2: Stack[-3] = Stack[-1]
0xac3: Return(); Pop(2)

0xac4: PushEmpty(int, int, int, int)
0xac5: Push("mt_maria")
0xac6: @ GetVariable(Stack[-1], Stack[-3])
0xac7: Pop(1)
0xac8: Pop(0); Push((bool) Stack[-2] == 0)
0xac9: IF (Stack[-1] == 0) GOTO 0xad4; Pop(1)

0xaca: PushEmpty(int, object)
0xacb: Stack[-1] = Stack[-7]
0xacc: Push(-2, 1); TaskCall(0)
0xacd: Call2 0x0

0xace: Pop(-2, 1); TaskReturn
0xacf: Pop(2)
0xad0: Push("mt_maria")
0xad1: Push((int) 1)
0xad2: @ SetVariable(Stack[-2], Stack[-1])
0xad3: Pop(2)
0xad4: PushEmpty(bool, int)
0xad5: Stack[-1] = (int) 6
0xad6: Call2 0x935

0xad7: Pop(1)
0xad8: IF (Stack[-1] == 0) GOTO 0xae0; Pop(1)

0xad9: PushEmpty(int, object)
0xada: Stack[-1] = Stack[-7]
0xadb: Push(-2, 1); TaskCall(2)
0xadc: Call2 0xe2

0xadd: Pop(-2, 1); TaskReturn
0xade: Pop(2)
0xadf: Return(); Pop(4)

0xae0: PushEmpty(bool, int)
0xae1: Stack[-1] = (int) 12
0xae2: Call2 0x935

0xae3: Pop(1)
0xae4: IF (Stack[-1] == 0) GOTO 0xb02; Pop(1)

0xae5: PushEmpty(int)
0xae6: Call2 0xabe

0xae7: Pop(0)
0xae8: Push((int) 0)
0xae9: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xaea: IF (Stack[-1] == 0) GOTO 0xaf2; Pop(1)

0xaeb: PushEmpty(int, object)
0xaec: Stack[-1] = Stack[-7]
0xaed: Push(-2, 1); TaskCall(4)
0xaee: Call2 0x324

0xaef: Pop(-2, 1); TaskReturn
0xaf0: Pop(2)
0xaf1: GOTO 0xb01

0xaf2: Push("d12_maria")
0xaf3: @ GetVariable(Stack[-1], Stack[-2])
0xaf4: Pop(1)
0xaf5: Pop(0); Push((bool) Stack[-1] == 0)
0xaf6: IF (Stack[-1] == 0) GOTO 0xb01; Pop(1)

0xaf7: PushEmpty(int, object)
0xaf8: Stack[-1] = Stack[-7]
0xaf9: Push(-2, 1); TaskCall(6)
0xafa: Call2 0x4ca

0xafb: Pop(-2, 1); TaskReturn
0xafc: Pop(2)
0xafd: Push("d12_maria")
0xafe: Push((int) 1)
0xaff: @ SetVariable(Stack[-2], Stack[-1])
0xb00: Pop(2)
0xb01: Return(); Pop(4)

0xb02: PushEmpty(int, object)
0xb03: Stack[-1] = Stack[-7]
0xb04: Push(-2, 1); TaskCall(8)
0xb05: Call2 0x5cd

0xb06: Pop(-2, 1); TaskReturn
0xb07: Pop(2)
0xb08: Return(); Pop(4)

