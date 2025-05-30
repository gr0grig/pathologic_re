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

RunOp = 0x684
RunTask = 10

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a4 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2b8 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4d7 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x65a Vars = (int, int)
	GTASK_10 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x6cd Vars = (int)
		EVENT_6 Op = 0x6f3 Vars = ()
		EVENT_5 Op = 0x702 Vars = ()
		EVENT_45 Op = 0x70f Vars = (bool)
		EVENT_0 Op = 0x71b Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x7ab

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x93f

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x93d

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x941

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x943

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xa97

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
0x31: Call2 0x8bf

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x800

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
0x48: Call2 0x7ef

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
0x56: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x90

0x5a: Pop(1)
0x5b: Push((int) 535231)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 535232)
0x61: Push((int) 36953)
0x62: Push((int) 36907)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 535233)
0x66: Push((int) -1)
0x67: Push((int) 36908)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 535280)
0x6b: Push((int) -1)
0x6c: Push((int) 36956)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0x945

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x88a

0x7e: Pop(1)
0x7f: GOTO 0x76

0x80: GOTO 0x8f

0x81: Push("all")
0x82: Push("idle")
0x83: @ PlayAnimation(Stack[-2], Stack[-1])
0x84: Pop(2)
0x85: @ WaitForAnimEnd()
0x86: Pop(0)
0x87: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: GOTO 0x8f

0x8a: Push("all")
0x8b: Push("idle")
0x8c: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: GOTO 0x85

0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: PushEmpty(bool)
0x92: Call2 0x945

0x93: Pop(0)
0x94: Pop(1); Push((bool) Stack[-1] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Return(); Pop(0)

0x97: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(0)

0x9a: PushEmpty(string, bool)
0x9b: Stack[-2] = Stack[-3]
0x9c: Push("")
0x9d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9f: Stack[-1] = (bool) 0
0xa0: GOTO 0xa2

0xa1: Stack[-1] = (bool) 1
0xa2: Call2 0x89a

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x8b8

0xab: Pop(0)
0xac: Push((int) 36906)
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xaf: PushEmpty(string)
0xb0: Stack[-1] = "Neutral"
0xb1: Call2 0x90

0xb2: Pop(1)
0xb3: Push((int) 535231)
0xb4: @@ SetMessage(Stack[-1])
0xb5: Pop(1)
0xb6: @@ ClearReplies()
0xb7: Pop(0)
0xb8: Push((int) 535232)
0xb9: Push((int) 36953)
0xba: Push((int) 36907)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Push((int) 535233)
0xbe: Push((int) -1)
0xbf: Push((int) 36908)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: Push((int) 535280)
0xc3: Push((int) -1)
0xc4: Push((int) 36956)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Return(); Pop(0)

0xc8: Push((int) 36953)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0x90

0xce: Pop(1)
0xcf: Push((int) 535277)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 535278)
0xd5: Push((int) 36957)
0xd6: Push((int) 36954)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 535279)
0xda: Push((int) 36957)
0xdb: Push((int) 36955)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 36957)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call2 0x90

0xe5: Pop(1)
0xe6: Push((int) 535281)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 535282)
0xec: Push((int) -1)
0xed: Push((int) 36958)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 535283)
0xf1: Push((int) -1)
0xf2: Push((int) 36959)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf7: PushEmpty(bool)
0xf8: Call2 0x945

0xf9: Pop(0)
0xfa: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfb: @ lshStopAnimation()
0xfc: Pop(0)
0xfd: GOTO 0x100

0xfe: @ StopAnimation()
0xff: Pop(0)
0x100: Return(); Pop(0)

0x101: GOTO 0xa7

0x102: Return(); Pop(0)

0x103: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x104: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x105: PushEmpty(bool, object, float)
0x106: Stack[-2] = Stack[-12]
0x107: Stack[-1] = (float) 70.0
0x108: Call2 0x7ab

0x109: Pop(2)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-10] = (int) -2
0x10d: Return(); Pop(8)

0x10e: @ CreateDialog(Stack[-4])
0x10f: Pop(0)
0x110: PushEmpty(int)
0x111: Call2 0x93f

0x112: Pop(0)
0x113: @@ SetNPCName(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(int)
0x116: Call2 0x93d

0x117: Pop(0)
0x118: @@ SetNPCDescription(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(string)
0x11b: Call2 0x941

0x11c: Pop(0)
0x11d: @@ SetPhoto(Stack[-1])
0x11e: Pop(1)
0x11f: PushEmpty(string)
0x120: Call2 0x943

0x121: Pop(0)
0x122: @@ SetPhoto2(Stack[-1])
0x123: Pop(1)
0x124: PushEmpty(int)
0x125: Call2 0xa97

0x126: Pop(0)
0x127: @@ SetPlayerName(Stack[-1])
0x128: Pop(1)
0x129: Stack[-2] = (int) -1
0x12a: @ IsOverrideActive(Stack[-3])
0x12b: Pop(0)
0x12c: Push(Stack[-3])
0x12d: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12e: Stack[-10] = (int) -2
0x12f: Return(); Pop(8)

0x130: @ DoDialog(Stack[-4])
0x131: Pop(0)
0x132: PushEmpty(bool, object)
0x133: PushEmpty(object)
0x134: Call2 0x8bf

0x135: Stack[-2] = Stack[-1]
0x136: Pop(1)
0x137: Call2 0x800

0x138: Pop(2)
0x139: PushEmpty(object, object)
0x13a: Stack[-2] = Stack[-11]
0x13b: Stack[-1] = Stack[-6]
0x13c: Push(-2, 4); TaskCall(3)
0x13d: Call2 0x154

0x13e: Pop(-2, 4); TaskReturn
0x13f: Pop(2)
0x140: @@ IsDialogEnd(Stack[-1])
0x141: Pop(0)
0x142: Pop(0); Push((bool) Stack[-1] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x144: @ sync()
0x145: Pop(0)
0x146: @@ IsDialogEnd(Stack[-1])
0x147: Pop(0)
0x148: GOTO 0x142

0x149: PushEmpty(object)
0x14a: Stack[-1] = Stack[-10]
0x14b: Call2 0x7ef

0x14c: Pop(1)
0x14d: @ StopDialog(Stack[-4])
0x14e: Pop(0)
0x14f: @@ GetReturnValue(Stack[-2])
0x150: Pop(0)
0x151: Stack[-10] = Stack[-2]
0x152: Return(); Pop(8)

0x153: Stack[-4] = 0
0x154: PushEmpty()
0x155: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x156: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x157: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x158: Push((int) 1)
0x159: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Neutral"
0x15c: Call2 0x18e

0x15d: Pop(1)
0x15e: Push((int) 518027)
0x15f: @@ SetMessage(Stack[-1])
0x160: Pop(1)
0x161: @@ ClearReplies()
0x162: Pop(0)
0x163: Push((int) 518028)
0x164: Push((int) 29772)
0x165: Push((int) 19161)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Push((int) 528396)
0x169: Push((int) 29772)
0x16a: Push((int) 29771)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: GOTO 0x170

0x16e: Return(); Pop(0)

0x16f: GOTO 0x158

0x170: PushEmpty(bool)
0x171: Call2 0x945

0x172: Pop(0)
0x173: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x174: @ lshWaitForAnimEnd()
0x175: Pop(0)
0x176: Push( Stack[3 + Tasks[-1].StackPointer] )
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: GOTO 0x17e

0x179: PushEmpty(string)
0x17a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x17b: Call2 0x88a

0x17c: Pop(1)
0x17d: GOTO 0x174

0x17e: GOTO 0x18d

0x17f: Push("all")
0x180: Push("idle")
0x181: @ PlayAnimation(Stack[-2], Stack[-1])
0x182: Pop(2)
0x183: @ WaitForAnimEnd()
0x184: Pop(0)
0x185: Push( Stack[3 + Tasks[-1].StackPointer] )
0x186: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x187: GOTO 0x18d

0x188: Push("all")
0x189: Push("idle")
0x18a: @ PlayAnimation(Stack[-2], Stack[-1])
0x18b: Pop(2)
0x18c: GOTO 0x183

0x18d: Return(); Pop(0)

0x18e: PushEmpty()
0x18f: PushEmpty(bool)
0x190: Call2 0x945

0x191: Pop(0)
0x192: Pop(1); Push((bool) Stack[-1] == 0)
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: Return(); Pop(0)

0x195: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: Return(); Pop(0)

0x198: PushEmpty(string, bool)
0x199: Stack[-2] = Stack[-3]
0x19a: Push("")
0x19b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19d: Stack[-1] = (bool) 0
0x19e: GOTO 0x1a0

0x19f: Stack[-1] = (bool) 1
0x1a0: Call2 0x89a

0x1a1: Pop(2)
0x1a2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty()
0x1a5: Push((int) 1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1a7: PushEmpty()
0x1a8: Call2 0x8b8

0x1a9: Pop(0)
0x1aa: Push((int) 19160)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Neutral"
0x1af: Call2 0x18e

0x1b0: Pop(1)
0x1b1: Push((int) 518027)
0x1b2: @@ SetMessage(Stack[-1])
0x1b3: Pop(1)
0x1b4: @@ ClearReplies()
0x1b5: Pop(0)
0x1b6: Push((int) 518028)
0x1b7: Push((int) 29772)
0x1b8: Push((int) 19161)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Push((int) 528396)
0x1bc: Push((int) 29772)
0x1bd: Push((int) 29771)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Return(); Pop(0)

0x1c1: Push((int) 29772)
0x1c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1c4: PushEmpty(string)
0x1c5: Stack[-1] = "Neutral"
0x1c6: Call2 0x18e

0x1c7: Pop(1)
0x1c8: Push((int) 528397)
0x1c9: @@ SetMessage(Stack[-1])
0x1ca: Pop(1)
0x1cb: @@ ClearReplies()
0x1cc: Pop(0)
0x1cd: Push((int) 528398)
0x1ce: Push((int) -1)
0x1cf: Push((int) 29773)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: Push((int) 528399)
0x1d3: Push((int) -1)
0x1d4: Push((int) 29774)
0x1d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d6: Pop(3)
0x1d7: Return(); Pop(0)

0x1d8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d9: PushEmpty(bool)
0x1da: Call2 0x945

0x1db: Pop(0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1dd: @ lshStopAnimation()
0x1de: Pop(0)
0x1df: GOTO 0x1e2

0x1e0: @ StopAnimation()
0x1e1: Pop(0)
0x1e2: Return(); Pop(0)

0x1e3: GOTO 0x1a5

0x1e4: Return(); Pop(0)

0x1e5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1e6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1e7: PushEmpty(bool, object, float)
0x1e8: Stack[-2] = Stack[-12]
0x1e9: Stack[-1] = (float) 70.0
0x1ea: Call2 0x7ab

0x1eb: Pop(2)
0x1ec: Pop(1); Push((bool) Stack[-1] == 0)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ee: Stack[-10] = (int) -2
0x1ef: Return(); Pop(8)

0x1f0: @ CreateDialog(Stack[-4])
0x1f1: Pop(0)
0x1f2: PushEmpty(int)
0x1f3: Call2 0x93f

0x1f4: Pop(0)
0x1f5: @@ SetNPCName(Stack[-1])
0x1f6: Pop(1)
0x1f7: PushEmpty(int)
0x1f8: Call2 0x93d

0x1f9: Pop(0)
0x1fa: @@ SetNPCDescription(Stack[-1])
0x1fb: Pop(1)
0x1fc: PushEmpty(string)
0x1fd: Call2 0x941

0x1fe: Pop(0)
0x1ff: @@ SetPhoto(Stack[-1])
0x200: Pop(1)
0x201: PushEmpty(string)
0x202: Call2 0x943

0x203: Pop(0)
0x204: @@ SetPhoto2(Stack[-1])
0x205: Pop(1)
0x206: PushEmpty(int)
0x207: Call2 0xa97

0x208: Pop(0)
0x209: @@ SetPlayerName(Stack[-1])
0x20a: Pop(1)
0x20b: Stack[-2] = (int) -1
0x20c: @ IsOverrideActive(Stack[-3])
0x20d: Pop(0)
0x20e: Push(Stack[-3])
0x20f: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x210: Stack[-10] = (int) -2
0x211: Return(); Pop(8)

0x212: @ DoDialog(Stack[-4])
0x213: Pop(0)
0x214: PushEmpty(bool, object)
0x215: PushEmpty(object)
0x216: Call2 0x8bf

0x217: Stack[-2] = Stack[-1]
0x218: Pop(1)
0x219: Call2 0x800

0x21a: Pop(2)
0x21b: PushEmpty(object, object)
0x21c: Stack[-2] = Stack[-11]
0x21d: Stack[-1] = Stack[-6]
0x21e: Push(-2, 4); TaskCall(5)
0x21f: Call2 0x236

0x220: Pop(-2, 4); TaskReturn
0x221: Pop(2)
0x222: @@ IsDialogEnd(Stack[-1])
0x223: Pop(0)
0x224: Pop(0); Push((bool) Stack[-1] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x226: @ sync()
0x227: Pop(0)
0x228: @@ IsDialogEnd(Stack[-1])
0x229: Pop(0)
0x22a: GOTO 0x224

0x22b: PushEmpty(object)
0x22c: Stack[-1] = Stack[-10]
0x22d: Call2 0x7ef

0x22e: Pop(1)
0x22f: @ StopDialog(Stack[-4])
0x230: Pop(0)
0x231: @@ GetReturnValue(Stack[-2])
0x232: Pop(0)
0x233: Stack[-10] = Stack[-2]
0x234: Return(); Pop(8)

0x235: Stack[-4] = 0
0x236: PushEmpty()
0x237: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x238: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x239: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x23a: Push((int) 1)
0x23b: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x23c: PushEmpty(bool, object)
0x23d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23e: Call2 0x9ce

0x23f: Pop(1)
0x240: Pop(1); Push((bool) Stack[-1] == 0)
0x241: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x242: PushEmpty(object, object)
0x243: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x244: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x245: Call2 0x970

0x246: Pop(2)
0x247: PushEmpty(string)
0x248: Stack[-1] = "Neutral"
0x249: Call2 0x2a2

0x24a: Pop(1)
0x24b: Push((int) 521326)
0x24c: @@ SetMessage(Stack[-1])
0x24d: Pop(1)
0x24e: @@ ClearReplies()
0x24f: Pop(0)
0x250: Push((int) 528379)
0x251: Push((int) 29753)
0x252: Push((int) 29752)
0x253: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x254: Pop(3)
0x255: GOTO 0x284

0x256: PushEmpty(string)
0x257: Stack[-1] = "Neutral"
0x258: Call2 0x2a2

0x259: Pop(1)
0x25a: Push((int) 521329)
0x25b: @@ SetMessage(Stack[-1])
0x25c: Pop(1)
0x25d: @@ ClearReplies()
0x25e: Pop(0)
0x25f: PushEmpty(bool, object)
0x260: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x261: Call2 0x9c2

0x262: Pop(1)
0x263: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x264: Push((int) 521330)
0x265: Push((int) 22527)
0x266: Push((int) 22524)
0x267: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x268: Pop(3)
0x269: PushEmpty(bool)
0x26a: Stack[-1] = (bool) 0
0x26b: PushEmpty(bool, object)
0x26c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x26d: Call2 0x9da

0x26e: Pop(1)
0x26f: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x270: PushEmpty(bool, object)
0x271: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x272: Call2 0x9b6

0x273: Pop(1)
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: Stack[-1] = (bool) 1
0x276: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x277: Push((int) 521331)
0x278: Push((int) 22529)
0x279: Push((int) 22525)
0x27a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27b: Pop(3)
0x27c: Push((int) 521332)
0x27d: Push((int) -1)
0x27e: Push((int) 22526)
0x27f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x280: Pop(3)
0x281: GOTO 0x284

0x282: Return(); Pop(0)

0x283: GOTO 0x23a

0x284: PushEmpty(bool)
0x285: Call2 0x945

0x286: Pop(0)
0x287: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x288: @ lshWaitForAnimEnd()
0x289: Pop(0)
0x28a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x28b: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28c: GOTO 0x292

0x28d: PushEmpty(string)
0x28e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x28f: Call2 0x88a

0x290: Pop(1)
0x291: GOTO 0x288

0x292: GOTO 0x2a1

0x293: Push("all")
0x294: Push("idle")
0x295: @ PlayAnimation(Stack[-2], Stack[-1])
0x296: Pop(2)
0x297: @ WaitForAnimEnd()
0x298: Pop(0)
0x299: Push( Stack[3 + Tasks[-1].StackPointer] )
0x29a: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29b: GOTO 0x2a1

0x29c: Push("all")
0x29d: Push("idle")
0x29e: @ PlayAnimation(Stack[-2], Stack[-1])
0x29f: Pop(2)
0x2a0: GOTO 0x297

0x2a1: Return(); Pop(0)

0x2a2: PushEmpty()
0x2a3: PushEmpty(bool)
0x2a4: Call2 0x945

0x2a5: Pop(0)
0x2a6: Pop(1); Push((bool) Stack[-1] == 0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a8: Return(); Pop(0)

0x2a9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2ab: Return(); Pop(0)

0x2ac: PushEmpty(string, bool)
0x2ad: Stack[-2] = Stack[-3]
0x2ae: Push("")
0x2af: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b1: Stack[-1] = (bool) 0
0x2b2: GOTO 0x2b4

0x2b3: Stack[-1] = (bool) 1
0x2b4: Call2 0x89a

0x2b5: Pop(2)
0x2b6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2b7: Return(); Pop(0)

0x2b8: PushEmpty()
0x2b9: Push((int) 1)
0x2ba: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x2bb: PushEmpty()
0x2bc: Call2 0x8b8

0x2bd: Pop(0)
0x2be: Push((int) 22521)
0x2bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c1: PushEmpty(object, object)
0x2c2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c4: Call2 0x947

0x2c5: Pop(2)
0x2c6: PushEmpty(object, object)
0x2c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c9: Call2 0x984

0x2ca: Pop(2)
0x2cb: Push((int) 22528)
0x2cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2ce: PushEmpty(object, object)
0x2cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d1: Call2 0x947

0x2d2: Pop(2)
0x2d3: PushEmpty(object, object)
0x2d4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d6: Call2 0x984

0x2d7: Pop(2)
0x2d8: Push((int) 22525)
0x2d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2da: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2db: PushEmpty(object, object)
0x2dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2de: Call2 0x96a

0x2df: Pop(2)
0x2e0: Push((int) 22530)
0x2e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2e3: PushEmpty(object, object)
0x2e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e6: Call2 0x976

0x2e7: Pop(2)
0x2e8: PushEmpty(object, object)
0x2e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2eb: Call2 0x9a6

0x2ec: Pop(2)
0x2ed: PushEmpty(object, object)
0x2ee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f0: Call2 0x9b0

0x2f1: Pop(2)
0x2f2: Push((int) 29751)
0x2f3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f4: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2f5: PushEmpty(object, object)
0x2f6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f8: Call2 0x976

0x2f9: Pop(2)
0x2fa: PushEmpty(object, object)
0x2fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fd: Call2 0x9a6

0x2fe: Pop(2)
0x2ff: PushEmpty(object, object)
0x300: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x301: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x302: Call2 0x9b0

0x303: Pop(2)
0x304: Push((int) 22520)
0x305: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x307: PushEmpty(bool, object)
0x308: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x309: Call2 0x9ce

0x30a: Pop(1)
0x30b: Pop(1); Push((bool) Stack[-1] == 0)
0x30c: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x30d: PushEmpty(object, object)
0x30e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x30f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x310: Call2 0x970

0x311: Pop(2)
0x312: PushEmpty(string)
0x313: Stack[-1] = "Neutral"
0x314: Call2 0x2a2

0x315: Pop(1)
0x316: Push((int) 521326)
0x317: @@ SetMessage(Stack[-1])
0x318: Pop(1)
0x319: @@ ClearReplies()
0x31a: Pop(0)
0x31b: Push((int) 528379)
0x31c: Push((int) 29753)
0x31d: Push((int) 29752)
0x31e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31f: Pop(3)
0x320: Return(); Pop(0)

0x321: PushEmpty(string)
0x322: Stack[-1] = "Neutral"
0x323: Call2 0x2a2

0x324: Pop(1)
0x325: Push((int) 521329)
0x326: @@ SetMessage(Stack[-1])
0x327: Pop(1)
0x328: @@ ClearReplies()
0x329: Pop(0)
0x32a: PushEmpty(bool, object)
0x32b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32c: Call2 0x9c2

0x32d: Pop(1)
0x32e: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x32f: Push((int) 521330)
0x330: Push((int) 22527)
0x331: Push((int) 22524)
0x332: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x333: Pop(3)
0x334: PushEmpty(bool)
0x335: Stack[-1] = (bool) 0
0x336: PushEmpty(bool, object)
0x337: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x338: Call2 0x9da

0x339: Pop(1)
0x33a: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33b: PushEmpty(bool, object)
0x33c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x33d: Call2 0x9b6

0x33e: Pop(1)
0x33f: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x340: Stack[-1] = (bool) 1
0x341: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x342: Push((int) 521331)
0x343: Push((int) 22529)
0x344: Push((int) 22525)
0x345: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x346: Pop(3)
0x347: Push((int) 521332)
0x348: Push((int) -1)
0x349: Push((int) 22526)
0x34a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34b: Pop(3)
0x34c: Return(); Pop(0)

0x34d: Push((int) 22529)
0x34e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34f: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x350: PushEmpty(string)
0x351: Stack[-1] = "Neutral"
0x352: Call2 0x2a2

0x353: Pop(1)
0x354: Push((int) 521335)
0x355: @@ SetMessage(Stack[-1])
0x356: Pop(1)
0x357: @@ ClearReplies()
0x358: Pop(0)
0x359: Push((int) 521336)
0x35a: Push((int) -1)
0x35b: Push((int) 22530)
0x35c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35d: Pop(3)
0x35e: Push((int) 528376)
0x35f: Push((int) 29750)
0x360: Push((int) 29749)
0x361: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x362: Pop(3)
0x363: Return(); Pop(0)

0x364: Push((int) 29750)
0x365: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x366: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x367: PushEmpty(string)
0x368: Stack[-1] = "Angry"
0x369: Call2 0x2a2

0x36a: Pop(1)
0x36b: Push((int) 528377)
0x36c: @@ SetMessage(Stack[-1])
0x36d: Pop(1)
0x36e: @@ ClearReplies()
0x36f: Pop(0)
0x370: Push((int) 528378)
0x371: Push((int) -1)
0x372: Push((int) 29751)
0x373: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x374: Pop(3)
0x375: Return(); Pop(0)

0x376: Push((int) 22527)
0x377: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x378: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x379: PushEmpty(string)
0x37a: Stack[-1] = "Staring"
0x37b: Call2 0x2a2

0x37c: Pop(1)
0x37d: Push((int) 521333)
0x37e: @@ SetMessage(Stack[-1])
0x37f: Pop(1)
0x380: @@ ClearReplies()
0x381: Pop(0)
0x382: Push((int) 528374)
0x383: Push((int) 29748)
0x384: Push((int) 29747)
0x385: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x386: Pop(3)
0x387: Return(); Pop(0)

0x388: Push((int) 29748)
0x389: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x38b: PushEmpty(string)
0x38c: Stack[-1] = "Staring"
0x38d: Call2 0x2a2

0x38e: Pop(1)
0x38f: Push((int) 528375)
0x390: @@ SetMessage(Stack[-1])
0x391: Pop(1)
0x392: @@ ClearReplies()
0x393: Pop(0)
0x394: Push((int) 521334)
0x395: Push((int) -1)
0x396: Push((int) 22528)
0x397: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x398: Pop(3)
0x399: Return(); Pop(0)

0x39a: Push((int) 29753)
0x39b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39c: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x39d: PushEmpty(string)
0x39e: Stack[-1] = "Neutral"
0x39f: Call2 0x2a2

0x3a0: Pop(1)
0x3a1: Push((int) 528380)
0x3a2: @@ SetMessage(Stack[-1])
0x3a3: Pop(1)
0x3a4: @@ ClearReplies()
0x3a5: Pop(0)
0x3a6: Push((int) 528381)
0x3a7: Push((int) 29755)
0x3a8: Push((int) 29754)
0x3a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3aa: Pop(3)
0x3ab: Return(); Pop(0)

0x3ac: Push((int) 29755)
0x3ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3af: PushEmpty(string)
0x3b0: Stack[-1] = "Staring"
0x3b1: Call2 0x2a2

0x3b2: Pop(1)
0x3b3: Push((int) 528382)
0x3b4: @@ SetMessage(Stack[-1])
0x3b5: Pop(1)
0x3b6: @@ ClearReplies()
0x3b7: Pop(0)
0x3b8: Push((int) 528383)
0x3b9: Push((int) 29757)
0x3ba: Push((int) 29756)
0x3bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bc: Pop(3)
0x3bd: Return(); Pop(0)

0x3be: Push((int) 29760)
0x3bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3c1: Push((int) 29762)
0x3c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c3: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3c4: PushEmpty(string)
0x3c5: Stack[-1] = "Staring"
0x3c6: Call2 0x2a2

0x3c7: Pop(1)
0x3c8: Push((int) 528389)
0x3c9: @@ SetMessage(Stack[-1])
0x3ca: Pop(1)
0x3cb: @@ ClearReplies()
0x3cc: Pop(0)
0x3cd: Push((int) 528390)
0x3ce: Push((int) 29757)
0x3cf: Push((int) 29763)
0x3d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d1: Pop(3)
0x3d2: Push((int) 528391)
0x3d3: Push((int) 29765)
0x3d4: Push((int) 29764)
0x3d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d6: Pop(3)
0x3d7: Push((int) 528394)
0x3d8: Push((int) -1)
0x3d9: Push((int) 29768)
0x3da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3db: Pop(3)
0x3dc: Return(); Pop(0)

0x3dd: Push((int) 29765)
0x3de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3df: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3e0: PushEmpty(string)
0x3e1: Stack[-1] = "Neutral"
0x3e2: Call2 0x2a2

0x3e3: Pop(1)
0x3e4: Push((int) 528392)
0x3e5: @@ SetMessage(Stack[-1])
0x3e6: Pop(1)
0x3e7: @@ ClearReplies()
0x3e8: Pop(0)
0x3e9: Push((int) 528393)
0x3ea: Push((int) 29757)
0x3eb: Push((int) 29766)
0x3ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ed: Pop(3)
0x3ee: Return(); Pop(0)

0x3ef: Push((int) 29757)
0x3f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x3f2: PushEmpty(string)
0x3f3: Stack[-1] = "Staring"
0x3f4: Call2 0x2a2

0x3f5: Pop(1)
0x3f6: Push((int) 528384)
0x3f7: @@ SetMessage(Stack[-1])
0x3f8: Pop(1)
0x3f9: @@ ClearReplies()
0x3fa: Pop(0)
0x3fb: Push((int) 521327)
0x3fc: Push((int) -1)
0x3fd: Push((int) 22521)
0x3fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ff: Pop(3)
0x400: Push((int) 528395)
0x401: Push((int) -1)
0x402: Push((int) 29770)
0x403: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x404: Pop(3)
0x405: Return(); Pop(0)

0x406: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x407: PushEmpty(bool)
0x408: Call2 0x945

0x409: Pop(0)
0x40a: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40b: @ lshStopAnimation()
0x40c: Pop(0)
0x40d: GOTO 0x410

0x40e: @ StopAnimation()
0x40f: Pop(0)
0x410: Return(); Pop(0)

0x411: GOTO 0x2b9

0x412: Return(); Pop(0)

0x413: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x414: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x415: PushEmpty(bool, object, float)
0x416: Stack[-2] = Stack[-12]
0x417: Stack[-1] = (float) 70.0
0x418: Call2 0x7ab

0x419: Pop(2)
0x41a: Pop(1); Push((bool) Stack[-1] == 0)
0x41b: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41c: Stack[-10] = (int) -2
0x41d: Return(); Pop(8)

0x41e: @ CreateDialog(Stack[-4])
0x41f: Pop(0)
0x420: PushEmpty(int)
0x421: Call2 0x93f

0x422: Pop(0)
0x423: @@ SetNPCName(Stack[-1])
0x424: Pop(1)
0x425: PushEmpty(int)
0x426: Call2 0x93d

0x427: Pop(0)
0x428: @@ SetNPCDescription(Stack[-1])
0x429: Pop(1)
0x42a: PushEmpty(string)
0x42b: Call2 0x941

0x42c: Pop(0)
0x42d: @@ SetPhoto(Stack[-1])
0x42e: Pop(1)
0x42f: PushEmpty(string)
0x430: Call2 0x943

0x431: Pop(0)
0x432: @@ SetPhoto2(Stack[-1])
0x433: Pop(1)
0x434: PushEmpty(int)
0x435: Call2 0xa97

0x436: Pop(0)
0x437: @@ SetPlayerName(Stack[-1])
0x438: Pop(1)
0x439: Stack[-2] = (int) -1
0x43a: @ IsOverrideActive(Stack[-3])
0x43b: Pop(0)
0x43c: Push(Stack[-3])
0x43d: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43e: Stack[-10] = (int) -2
0x43f: Return(); Pop(8)

0x440: @ DoDialog(Stack[-4])
0x441: Pop(0)
0x442: PushEmpty(bool, object)
0x443: PushEmpty(object)
0x444: Call2 0x8bf

0x445: Stack[-2] = Stack[-1]
0x446: Pop(1)
0x447: Call2 0x800

0x448: Pop(2)
0x449: PushEmpty(object, object)
0x44a: Stack[-2] = Stack[-11]
0x44b: Stack[-1] = Stack[-6]
0x44c: Push(-2, 4); TaskCall(7)
0x44d: Call2 0x464

0x44e: Pop(-2, 4); TaskReturn
0x44f: Pop(2)
0x450: @@ IsDialogEnd(Stack[-1])
0x451: Pop(0)
0x452: Pop(0); Push((bool) Stack[-1] == 0)
0x453: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x454: @ sync()
0x455: Pop(0)
0x456: @@ IsDialogEnd(Stack[-1])
0x457: Pop(0)
0x458: GOTO 0x452

0x459: PushEmpty(object)
0x45a: Stack[-1] = Stack[-10]
0x45b: Call2 0x7ef

0x45c: Pop(1)
0x45d: @ StopDialog(Stack[-4])
0x45e: Pop(0)
0x45f: @@ GetReturnValue(Stack[-2])
0x460: Pop(0)
0x461: Stack[-10] = Stack[-2]
0x462: Return(); Pop(8)

0x463: Stack[-4] = 0
0x464: PushEmpty()
0x465: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x466: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x467: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x468: Push((int) 1)
0x469: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x46a: PushEmpty(string)
0x46b: Stack[-1] = "Neutral"
0x46c: Call2 0x4c1

0x46d: Pop(1)
0x46e: Push((int) 523177)
0x46f: @@ SetMessage(Stack[-1])
0x470: Pop(1)
0x471: @@ ClearReplies()
0x472: Pop(0)
0x473: PushEmpty(bool, object)
0x474: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x475: Call2 0x9fd

0x476: Pop(1)
0x477: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x478: Push((int) 523178)
0x479: Push((int) 24382)
0x47a: Push((int) 24381)
0x47b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47c: Pop(3)
0x47d: PushEmpty(bool)
0x47e: Stack[-1] = (bool) 0
0x47f: PushEmpty(bool)
0x480: Stack[-1] = (bool) 0
0x481: PushEmpty(bool, object)
0x482: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x483: Call2 0x9e5

0x484: Pop(1)
0x485: Pop(1); Push((bool) Stack[-1] == 0)
0x486: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x487: PushEmpty(bool, object)
0x488: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x489: Call2 0x9f1

0x48a: Pop(1)
0x48b: Pop(1); Push((bool) Stack[-1] == 0)
0x48c: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48d: Stack[-1] = (bool) 1
0x48e: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x48f: PushEmpty(bool, object)
0x490: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x491: Call2 0xa09

0x492: Pop(1)
0x493: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x494: Stack[-1] = (bool) 1
0x495: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x496: Push((int) 523187)
0x497: Push((int) 42102)
0x498: Push((int) 24390)
0x499: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49a: Pop(3)
0x49b: Push((int) 523186)
0x49c: Push((int) -1)
0x49d: Push((int) 24389)
0x49e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49f: Pop(3)
0x4a0: GOTO 0x4a3

0x4a1: Return(); Pop(0)

0x4a2: GOTO 0x468

0x4a3: PushEmpty(bool)
0x4a4: Call2 0x945

0x4a5: Pop(0)
0x4a6: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4a7: @ lshWaitForAnimEnd()
0x4a8: Pop(0)
0x4a9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4aa: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4ab: GOTO 0x4b1

0x4ac: PushEmpty(string)
0x4ad: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4ae: Call2 0x88a

0x4af: Pop(1)
0x4b0: GOTO 0x4a7

0x4b1: GOTO 0x4c0

0x4b2: Push("all")
0x4b3: Push("idle")
0x4b4: @ PlayAnimation(Stack[-2], Stack[-1])
0x4b5: Pop(2)
0x4b6: @ WaitForAnimEnd()
0x4b7: Pop(0)
0x4b8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4b9: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4ba: GOTO 0x4c0

0x4bb: Push("all")
0x4bc: Push("idle")
0x4bd: @ PlayAnimation(Stack[-2], Stack[-1])
0x4be: Pop(2)
0x4bf: GOTO 0x4b6

0x4c0: Return(); Pop(0)

0x4c1: PushEmpty()
0x4c2: PushEmpty(bool)
0x4c3: Call2 0x945

0x4c4: Pop(0)
0x4c5: Pop(1); Push((bool) Stack[-1] == 0)
0x4c6: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c7: Return(); Pop(0)

0x4c8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4ca: Return(); Pop(0)

0x4cb: PushEmpty(string, bool)
0x4cc: Stack[-2] = Stack[-3]
0x4cd: Push("")
0x4ce: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4d0: Stack[-1] = (bool) 0
0x4d1: GOTO 0x4d3

0x4d2: Stack[-1] = (bool) 1
0x4d3: Call2 0x89a

0x4d4: Pop(2)
0x4d5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4d6: Return(); Pop(0)

0x4d7: PushEmpty()
0x4d8: Push((int) 1)
0x4d9: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x4da: PushEmpty()
0x4db: Call2 0x8b8

0x4dc: Pop(0)
0x4dd: Push((int) 24381)
0x4de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4df: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e0: PushEmpty(object, object)
0x4e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e3: Call2 0x994

0x4e4: Pop(2)
0x4e5: PushEmpty(object, object)
0x4e6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4e7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e8: Call2 0x9a0

0x4e9: Pop(2)
0x4ea: Push((int) 24390)
0x4eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ec: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4ed: PushEmpty(object, object)
0x4ee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f0: Call2 0x99a

0x4f1: Pop(2)
0x4f2: Push((int) 24380)
0x4f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f4: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x4f5: PushEmpty(string)
0x4f6: Stack[-1] = "Neutral"
0x4f7: Call2 0x4c1

0x4f8: Pop(1)
0x4f9: Push((int) 523177)
0x4fa: @@ SetMessage(Stack[-1])
0x4fb: Pop(1)
0x4fc: @@ ClearReplies()
0x4fd: Pop(0)
0x4fe: PushEmpty(bool, object)
0x4ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x500: Call2 0x9fd

0x501: Pop(1)
0x502: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x503: Push((int) 523178)
0x504: Push((int) 24382)
0x505: Push((int) 24381)
0x506: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x507: Pop(3)
0x508: PushEmpty(bool)
0x509: Stack[-1] = (bool) 0
0x50a: PushEmpty(bool)
0x50b: Stack[-1] = (bool) 0
0x50c: PushEmpty(bool, object)
0x50d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x50e: Call2 0x9e5

0x50f: Pop(1)
0x510: Pop(1); Push((bool) Stack[-1] == 0)
0x511: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x512: PushEmpty(bool, object)
0x513: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x514: Call2 0x9f1

0x515: Pop(1)
0x516: Pop(1); Push((bool) Stack[-1] == 0)
0x517: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x518: Stack[-1] = (bool) 1
0x519: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51a: PushEmpty(bool, object)
0x51b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x51c: Call2 0xa09

0x51d: Pop(1)
0x51e: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51f: Stack[-1] = (bool) 1
0x520: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x521: Push((int) 523187)
0x522: Push((int) 42102)
0x523: Push((int) 24390)
0x524: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x525: Pop(3)
0x526: Push((int) 523186)
0x527: Push((int) -1)
0x528: Push((int) 24389)
0x529: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52a: Pop(3)
0x52b: Return(); Pop(0)

0x52c: Push((int) 42102)
0x52d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52e: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x52f: PushEmpty(string)
0x530: Stack[-1] = "Rage"
0x531: Call2 0x4c1

0x532: Pop(1)
0x533: Push((int) 540130)
0x534: @@ SetMessage(Stack[-1])
0x535: Pop(1)
0x536: @@ ClearReplies()
0x537: Pop(0)
0x538: Push((int) 540131)
0x539: Push((int) 24391)
0x53a: Push((int) 42103)
0x53b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53c: Pop(3)
0x53d: Return(); Pop(0)

0x53e: Push((int) 24391)
0x53f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x540: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x541: PushEmpty(string)
0x542: Stack[-1] = "Rage"
0x543: Call2 0x4c1

0x544: Pop(1)
0x545: Push((int) 523188)
0x546: @@ SetMessage(Stack[-1])
0x547: Pop(1)
0x548: @@ ClearReplies()
0x549: Pop(0)
0x54a: Push((int) 523189)
0x54b: Push((int) -1)
0x54c: Push((int) 24392)
0x54d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54e: Pop(3)
0x54f: Return(); Pop(0)

0x550: Push((int) 24382)
0x551: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x552: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x553: PushEmpty(string)
0x554: Stack[-1] = "Angry"
0x555: Call2 0x4c1

0x556: Pop(1)
0x557: Push((int) 523179)
0x558: @@ SetMessage(Stack[-1])
0x559: Pop(1)
0x55a: @@ ClearReplies()
0x55b: Pop(0)
0x55c: Push((int) 523180)
0x55d: Push((int) 24384)
0x55e: Push((int) 24383)
0x55f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x560: Pop(3)
0x561: Push((int) 540132)
0x562: Push((int) -1)
0x563: Push((int) 42104)
0x564: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x565: Pop(3)
0x566: Return(); Pop(0)

0x567: Push((int) 24384)
0x568: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x569: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x56a: PushEmpty(string)
0x56b: Stack[-1] = "Rage"
0x56c: Call2 0x4c1

0x56d: Pop(1)
0x56e: Push((int) 523181)
0x56f: @@ SetMessage(Stack[-1])
0x570: Pop(1)
0x571: @@ ClearReplies()
0x572: Pop(0)
0x573: Push((int) 523182)
0x574: Push((int) 24386)
0x575: Push((int) 24385)
0x576: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x577: Pop(3)
0x578: Push((int) 540133)
0x579: Push((int) -1)
0x57a: Push((int) 42105)
0x57b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57c: Pop(3)
0x57d: Return(); Pop(0)

0x57e: Push((int) 24386)
0x57f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x580: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x581: PushEmpty(string)
0x582: Stack[-1] = "Rage"
0x583: Call2 0x4c1

0x584: Pop(1)
0x585: Push((int) 523183)
0x586: @@ SetMessage(Stack[-1])
0x587: Pop(1)
0x588: @@ ClearReplies()
0x589: Pop(0)
0x58a: Push((int) 523184)
0x58b: Push((int) 24388)
0x58c: Push((int) 24387)
0x58d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58e: Pop(3)
0x58f: Push((int) 540134)
0x590: Push((int) -1)
0x591: Push((int) 42106)
0x592: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x593: Pop(3)
0x594: Return(); Pop(0)

0x595: Push((int) 24388)
0x596: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x597: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x598: PushEmpty(string)
0x599: Stack[-1] = "Rage"
0x59a: Call2 0x4c1

0x59b: Pop(1)
0x59c: Push((int) 523185)
0x59d: @@ SetMessage(Stack[-1])
0x59e: Pop(1)
0x59f: @@ ClearReplies()
0x5a0: Pop(0)
0x5a1: Push((int) 523190)
0x5a2: Push((int) -1)
0x5a3: Push((int) 24393)
0x5a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a5: Pop(3)
0x5a6: Push((int) 523191)
0x5a7: Push((int) -1)
0x5a8: Push((int) 24394)
0x5a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5aa: Pop(3)
0x5ab: Return(); Pop(0)

0x5ac: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5ad: PushEmpty(bool)
0x5ae: Call2 0x945

0x5af: Pop(0)
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b1: @ lshStopAnimation()
0x5b2: Pop(0)
0x5b3: GOTO 0x5b6

0x5b4: @ StopAnimation()
0x5b5: Pop(0)
0x5b6: Return(); Pop(0)

0x5b7: GOTO 0x4d8

0x5b8: Return(); Pop(0)

0x5b9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5ba: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5bb: PushEmpty(bool, object, float)
0x5bc: Stack[-2] = Stack[-12]
0x5bd: Stack[-1] = (float) 70.0
0x5be: Call2 0x7ab

0x5bf: Pop(2)
0x5c0: Pop(1); Push((bool) Stack[-1] == 0)
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5c2: Stack[-10] = (int) -2
0x5c3: Return(); Pop(8)

0x5c4: @ CreateDialog(Stack[-4])
0x5c5: Pop(0)
0x5c6: PushEmpty(int)
0x5c7: Call2 0x93f

0x5c8: Pop(0)
0x5c9: @@ SetNPCName(Stack[-1])
0x5ca: Pop(1)
0x5cb: PushEmpty(int)
0x5cc: Call2 0x93d

0x5cd: Pop(0)
0x5ce: @@ SetNPCDescription(Stack[-1])
0x5cf: Pop(1)
0x5d0: PushEmpty(string)
0x5d1: Call2 0x941

0x5d2: Pop(0)
0x5d3: @@ SetPhoto(Stack[-1])
0x5d4: Pop(1)
0x5d5: PushEmpty(string)
0x5d6: Call2 0x943

0x5d7: Pop(0)
0x5d8: @@ SetPhoto2(Stack[-1])
0x5d9: Pop(1)
0x5da: PushEmpty(int)
0x5db: Call2 0xa97

0x5dc: Pop(0)
0x5dd: @@ SetPlayerName(Stack[-1])
0x5de: Pop(1)
0x5df: Stack[-2] = (int) -1
0x5e0: @ IsOverrideActive(Stack[-3])
0x5e1: Pop(0)
0x5e2: Push(Stack[-3])
0x5e3: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e4: Stack[-10] = (int) -2
0x5e5: Return(); Pop(8)

0x5e6: @ DoDialog(Stack[-4])
0x5e7: Pop(0)
0x5e8: PushEmpty(bool, object)
0x5e9: PushEmpty(object)
0x5ea: Call2 0x8bf

0x5eb: Stack[-2] = Stack[-1]
0x5ec: Pop(1)
0x5ed: Call2 0x800

0x5ee: Pop(2)
0x5ef: PushEmpty(object, object)
0x5f0: Stack[-2] = Stack[-11]
0x5f1: Stack[-1] = Stack[-6]
0x5f2: Push(-2, 4); TaskCall(9)
0x5f3: Call2 0x60a

0x5f4: Pop(-2, 4); TaskReturn
0x5f5: Pop(2)
0x5f6: @@ IsDialogEnd(Stack[-1])
0x5f7: Pop(0)
0x5f8: Pop(0); Push((bool) Stack[-1] == 0)
0x5f9: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fa: @ sync()
0x5fb: Pop(0)
0x5fc: @@ IsDialogEnd(Stack[-1])
0x5fd: Pop(0)
0x5fe: GOTO 0x5f8

0x5ff: PushEmpty(object)
0x600: Stack[-1] = Stack[-10]
0x601: Call2 0x7ef

0x602: Pop(1)
0x603: @ StopDialog(Stack[-4])
0x604: Pop(0)
0x605: @@ GetReturnValue(Stack[-2])
0x606: Pop(0)
0x607: Stack[-10] = Stack[-2]
0x608: Return(); Pop(8)

0x609: Stack[-4] = 0
0x60a: PushEmpty()
0x60b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x60c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x60d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x60e: Push((int) 1)
0x60f: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x610: PushEmpty(string)
0x611: Stack[-1] = "Neutral"
0x612: Call2 0x644

0x613: Pop(1)
0x614: Push((int) 540551)
0x615: @@ SetMessage(Stack[-1])
0x616: Pop(1)
0x617: @@ ClearReplies()
0x618: Pop(0)
0x619: Push((int) 540552)
0x61a: Push((int) -1)
0x61b: Push((int) 42561)
0x61c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61d: Pop(3)
0x61e: Push((int) 540795)
0x61f: Push((int) -1)
0x620: Push((int) 42844)
0x621: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x622: Pop(3)
0x623: GOTO 0x626

0x624: Return(); Pop(0)

0x625: GOTO 0x60e

0x626: PushEmpty(bool)
0x627: Call2 0x945

0x628: Pop(0)
0x629: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x62a: @ lshWaitForAnimEnd()
0x62b: Pop(0)
0x62c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x62d: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62e: GOTO 0x634

0x62f: PushEmpty(string)
0x630: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x631: Call2 0x88a

0x632: Pop(1)
0x633: GOTO 0x62a

0x634: GOTO 0x643

0x635: Push("all")
0x636: Push("idle")
0x637: @ PlayAnimation(Stack[-2], Stack[-1])
0x638: Pop(2)
0x639: @ WaitForAnimEnd()
0x63a: Pop(0)
0x63b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x63c: IF (Stack[-1] == 0) GOTO 0x63e; Pop(1)

0x63d: GOTO 0x643

0x63e: Push("all")
0x63f: Push("idle")
0x640: @ PlayAnimation(Stack[-2], Stack[-1])
0x641: Pop(2)
0x642: GOTO 0x639

0x643: Return(); Pop(0)

0x644: PushEmpty()
0x645: PushEmpty(bool)
0x646: Call2 0x945

0x647: Pop(0)
0x648: Pop(1); Push((bool) Stack[-1] == 0)
0x649: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x64a: Return(); Pop(0)

0x64b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x64c: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x64d: Return(); Pop(0)

0x64e: PushEmpty(string, bool)
0x64f: Stack[-2] = Stack[-3]
0x650: Push("")
0x651: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x652: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x653: Stack[-1] = (bool) 0
0x654: GOTO 0x656

0x655: Stack[-1] = (bool) 1
0x656: Call2 0x89a

0x657: Pop(2)
0x658: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x659: Return(); Pop(0)

0x65a: PushEmpty()
0x65b: Push((int) 1)
0x65c: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x65d: PushEmpty()
0x65e: Call2 0x8b8

0x65f: Pop(0)
0x660: Push((int) 42560)
0x661: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x662: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x663: PushEmpty(string)
0x664: Stack[-1] = "Neutral"
0x665: Call2 0x644

0x666: Pop(1)
0x667: Push((int) 540551)
0x668: @@ SetMessage(Stack[-1])
0x669: Pop(1)
0x66a: @@ ClearReplies()
0x66b: Pop(0)
0x66c: Push((int) 540552)
0x66d: Push((int) -1)
0x66e: Push((int) 42561)
0x66f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x670: Pop(3)
0x671: Push((int) 540795)
0x672: Push((int) -1)
0x673: Push((int) 42844)
0x674: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x675: Pop(3)
0x676: Return(); Pop(0)

0x677: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x678: PushEmpty(bool)
0x679: Call2 0x945

0x67a: Pop(0)
0x67b: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67c: @ lshStopAnimation()
0x67d: Pop(0)
0x67e: GOTO 0x681

0x67f: @ StopAnimation()
0x680: Pop(0)
0x681: Return(); Pop(0)

0x682: GOTO 0x65b

0x683: Return(); Pop(0)

0x684: PushEmpty()
0x685: Call2 0x688

0x686: Pop(0)
0x687: Return(); Pop(0)

0x688: PushEmpty(bool)
0x689: Call2 0x7a6

0x68a: Pop(0)
0x68b: Pop(1); Push((bool) Stack[-1] == 0)
0x68c: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x68d: @ Hold()
0x68e: Pop(0)
0x68f: @ GetDirection(Stack[-0])
0x690: Pop(0)
0x691: PushEmpty()
0x692: Call2 0x738

0x693: Pop(0)
0x694: GOTO 0x691

0x695: Return(); Pop(0)

0x696: PushEmpty(object, object)
0x697: Push("player")
0x698: @ FindActor(Stack[-2], Stack[-1])
0x699: Pop(1)
0x69a: Pop(0); Push((bool) Stack[-1] == 0)
0x69b: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x69c: Stack[-3] = (bool) 0
0x69d: Return(); Pop(2)

0x69e: PushEmpty(bool, object)
0x69f: Stack[-1] = Stack[-3]
0x6a0: Call2 0x79d

0x6a1: Stack[-5] = Stack[-2]
0x6a2: Pop(2)
0x6a3: Return(); Pop(2)

0x6a4: Stack[-1] = 0
0x6a5: Push(CvectorIndex(Stack[-0], 0))
0x6a6: Push(CvectorIndex(Stack[-0], 2))
0x6a7: @ RotateAsync(Stack[-2], Stack[-1])
0x6a8: Pop(2)
0x6a9: Return(); Pop(0)

0x6aa: PushEmpty(object, bool, object, bool)
0x6ab: Push("player")
0x6ac: @ FindActor(Stack[-3], Stack[-1])
0x6ad: Pop(1)
0x6ae: Pop(0); Push((bool) Stack[-2] == 0)
0x6af: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6b0: Stack[-5] = (bool) 0
0x6b1: Return(); Pop(4)

0x6b2: PushEmpty(float, object)
0x6b3: Stack[-1] = Stack[-4]
0x6b4: Call2 0x784

0x6b5: Pop(1)
0x6b6: Push((float)90000.0)
0x6b7: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x6b8: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6b9: Stack[-5] = (bool) 0
0x6ba: Return(); Pop(4)

0x6bb: @ CanSee(Stack[-1], Stack[-2])
0x6bc: Pop(0)
0x6bd: Stack[-5] = Stack[-1]
0x6be: Return(); Pop(4)

0x6bf: Stack[-2] = 0
0x6c0: PushEmpty(float, float)
0x6c1: Push((int) 8)
0x6c2: Push((int) 16)
0x6c3: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x6c4: Pop(2)
0x6c5: Push((int) 10)
0x6c6: @ SetTimer(Stack[-1], Stack[-2])
0x6c7: Pop(1)
0x6c8: Return(); Pop(2)

0x6c9: Push((int) 10)
0x6ca: @ KillTimer(Stack[-1])
0x6cb: Pop(1)
0x6cc: Return(); Pop(0)

0x6cd: PushEmpty()
0x6ce: Push((int) 10)
0x6cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d0: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6d1: PushEmpty()
0x6d2: Call2 0x6c9

0x6d3: Pop(0)
0x6d4: PushEmpty(bool)
0x6d5: Stack[-1] = (bool) 0
0x6d6: PushEmpty(bool)
0x6d7: Call2 0x7a6

0x6d8: Pop(0)
0x6d9: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6da: PushEmpty(bool)
0x6db: Call2 0x6aa

0x6dc: Pop(0)
0x6dd: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6de: Stack[-1] = (bool) 1
0x6df: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6e0: PushEmpty(bool)
0x6e1: Call2 0x696

0x6e2: Pop(0)
0x6e3: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6e4: PushEmpty(bool, object)
0x6e5: PushEmpty(object)
0x6e6: Call2 0x8bf

0x6e7: Stack[-2] = Stack[-1]
0x6e8: Pop(1)
0x6e9: Call2 0x83a

0x6ea: Pop(2)
0x6eb: GOTO 0x6f2

0x6ec: PushEmpty()
0x6ed: Call2 0x6a5

0x6ee: Pop(0)
0x6ef: PushEmpty()
0x6f0: Call2 0x6c0

0x6f1: Pop(0)
0x6f2: Return(); Pop(0)

0x6f3: PushEmpty()
0x6f4: Call2 0x77f

0x6f5: Pop(0)
0x6f6: PushEmpty()
0x6f7: Call2 0x6c9

0x6f8: Pop(0)
0x6f9: @ lshStopSpeech()
0x6fa: Pop(0)
0x6fb: @ lshStopAnimation()
0x6fc: Pop(0)
0x6fd: @ StopAsync()
0x6fe: Pop(0)
0x6ff: @ Hold()
0x700: Pop(0)
0x701: Return(); Pop(0)

0x702: @ StopGroup0()
0x703: Pop(0)
0x704: PushEmpty()
0x705: Call2 0x6c9

0x706: Pop(0)
0x707: PushEmpty(string)
0x708: Stack[-1] = "Neutral"
0x709: Call2 0x88a

0x70a: Pop(1)
0x70b: PushEmpty()
0x70c: Call2 0x6c0

0x70d: Pop(0)
0x70e: Return(); Pop(0)

0x70f: PushEmpty()
0x710: Push(Stack[-1])
0x711: IF (Stack[-1] == 0) GOTO 0x716; Pop(1)

0x712: PushEmpty()
0x713: Call2 0x6c0

0x714: Pop(0)
0x715: GOTO 0x71a

0x716: PushEmpty(string)
0x717: Stack[-1] = "Neutral"
0x718: Call2 0x88a

0x719: Pop(1)
0x71a: Return(); Pop(0)

0x71b: PushEmpty(bool, bool)
0x71c: @ IsOverrideActive(Stack[-1])
0x71d: Pop(0)
0x71e: Pop(0); Push((bool) Stack[-1] == 0)
0x71f: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x720: EventDisable(0)
0x721: PushEmpty()
0x722: Call2 0x77f

0x723: Pop(0)
0x724: PushEmpty(bool, object)
0x725: Stack[-1] = Stack[-5]
0x726: Call2 0x79d

0x727: Pop(2)
0x728: EventEnable(0)
0x729: PushEmpty(object)
0x72a: Stack[-1] = Stack[-4]
0x72b: Call2 0xaae

0x72c: Pop(1)
0x72d: PushEmpty(string)
0x72e: Stack[-1] = "Neutral"
0x72f: Call2 0x88a

0x730: Pop(1)
0x731: PushEmpty()
0x732: Call2 0x6c9

0x733: Pop(0)
0x734: PushEmpty()
0x735: Call2 0x6c0

0x736: Pop(0)
0x737: Return(); Pop(2)

0x738: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x739: @ WaitForAnimEnd()
0x73a: Pop(0)
0x73b: PushEmpty(bool)
0x73c: Call2 0x7a6

0x73d: Pop(0)
0x73e: Pop(1); Push((bool) Stack[-1] == 0)
0x73f: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x740: Return(); Pop(12)

0x741: PushEmpty(int)
0x742: Call2 0x92c

0x743: Stack[-7] = Stack[-1]
0x744: Pop(1)
0x745: Stack[-5] = (int) 0
0x746: PushEmpty(bool)
0x747: Stack[-1] = (bool) 0
0x748: Push((int) 5)
0x749: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x74a: IF (Stack[-1] == 0) GOTO 0x750; Pop(1)

0x74b: PushEmpty(bool)
0x74c: Call2 0x7a6

0x74d: Pop(0)
0x74e: IF (Stack[-1] == 0) GOTO 0x750; Pop(1)

0x74f: Stack[-1] = (bool) 1
0x750: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x751: Pop(0); Push((bool) Stack[-6] == 0)
0x752: IF (Stack[-1] == 0) GOTO 0x75a; Pop(1)

0x753: Push((int) 3)
0x754: @ Sleep(Stack[-1], Stack[-5])
0x755: Pop(1)
0x756: Pop(0); Push((bool) Stack[-4] == 0)
0x757: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x758: GOTO 0x77a

0x759: GOTO 0x76f

0x75a: @ irand(Stack[-3], Stack[-6])
0x75b: Pop(0)
0x75c: Push((int) 5)
0x75d: @ irand(Stack[-3], Stack[-1])
0x75e: Pop(1)
0x75f: Push((int) 0)
0x760: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x761: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x762: Stack[-3] = (int) 0
0x763: Push("all")
0x764: PushEmpty(string, int)
0x765: Stack[-1] = Stack[-6]
0x766: Call2 0x925

0x767: Pop(1)
0x768: @ PlayAnimation(Stack[-2], Stack[-1])
0x769: Pop(2)
0x76a: @ WaitForAnimEnd(Stack[-1])
0x76b: Pop(0)
0x76c: Pop(0); Push((bool) Stack[-1] == 0)
0x76d: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x76e: GOTO 0x77a

0x76f: PushEmpty(bool)
0x770: Call2 0x77d

0x771: Pop(0)
0x772: Pop(1); Push((bool) Stack[-1] == 0)
0x773: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x774: GOTO 0x77a

0x775: @ ResetAAS()
0x776: Pop(0)
0x777: Push((int) 1)
0x778: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x779: GOTO 0x746

0x77a: @ ResetAAS()
0x77b: Pop(0)
0x77c: Return(); Pop(12)

0x77d: Stack[-1] = (bool) 1
0x77e: Return(); Pop(0)

0x77f: @ StopAnimation()
0x780: Pop(0)
0x781: @ StopGroup0()
0x782: Pop(0)
0x783: Return(); Pop(0)

0x784: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x785: @ GetPosition(Stack[-3])
0x786: Pop(0)
0x787: @@ GetPosition(Stack[-2])
0x788: Pop(0)
0x789: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x78a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x78b: Return(); Pop(6)

0x78c: PushEmpty(int, int)
0x78d: @@ GetProperty(Stack[-4], Stack[-1])
0x78e: Pop(0)
0x78f: Pop(0); Push(Stack[-1] + Stack[-3]);
0x790: @@ SetProperty(Stack[-5], Stack[-1])
0x791: Pop(1)
0x792: Return(); Pop(2)

0x793: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x794: @ GetPosition(Stack[-3])
0x795: Pop(0)
0x796: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x797: Push(CvectorIndex(Stack[-2], 0))
0x798: Push(CvectorIndex(Stack[-3], 2))
0x799: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x79a: Pop(2)
0x79b: Stack[-8] = Stack[-1]
0x79c: Return(); Pop(6)

0x79d: PushEmpty(cvector, cvector)
0x79e: @@ GetPosition(Stack[-1])
0x79f: Pop(0)
0x7a0: PushEmpty(bool, cvector)
0x7a1: Stack[-1] = Stack[-3]
0x7a2: Call2 0x793

0x7a3: Stack[-6] = Stack[-2]
0x7a4: Pop(2)
0x7a5: Return(); Pop(2)

0x7a6: PushEmpty(bool, bool)
0x7a7: @ IsLoaded(Stack[-1])
0x7a8: Pop(0)
0x7a9: Stack[-3] = Stack[-1]
0x7aa: Return(); Pop(2)

0x7ab: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x7ac: @@ GetPosition(Stack[-8])
0x7ad: Pop(0)
0x7ae: @@ GetEyesHeight(Stack[-9])
0x7af: Pop(0)
0x7b0: Push(CvectorIndex(Stack[-8], 1))
0x7b1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x7b2: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x7b3: @ GetPosition(Stack[-7])
0x7b4: Pop(0)
0x7b5: @ GetEyesHeight(Stack[-9])
0x7b6: Pop(0)
0x7b7: Push(CvectorIndex(Stack[-7], 1))
0x7b8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x7b9: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x7ba: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x7bb: Push(CvectorIndex(Stack[-6], 1))
0x7bc: Stack[-1] = (int) 0
0x7bd: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x7be: Pop(0); Push(Stack[-6] | Stack[-6]);
0x7bf: Pop(1); Push(Sqrt(Stack[-1]))
0x7c0: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x7c1: Stack[-5] = -Stack[-6]; Pop(0);
0x7c2: Pop(0); Push(Stack[-6] * Stack[-19]);
0x7c3: PushEmpty(cvector, cvector)
0x7c4: Push(CVector(0.0, 1.0, 0.0))
0x7c5: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x7c6: Call2 0x8c5

0x7c7: Pop(1)
0x7c8: Push((int) 25)
0x7c9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7ca: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7cb: Push(CVector(0.0, 10.0, 0.0))
0x7cc: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x7cd: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x7ce: @ IsOverrideActive(Stack[-2])
0x7cf: Pop(0)
0x7d0: Push(Stack[-2])
0x7d1: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7d2: Stack[-21] = (bool) 0
0x7d3: Return(); Pop(18)

0x7d4: @ StopWorld()
0x7d5: Pop(0)
0x7d6: @ CameraTransit(Stack[-3], Stack[-5])
0x7d7: Pop(0)
0x7d8: Push(CvectorIndex(Stack[-4], 0))
0x7d9: Push(CvectorIndex(Stack[-5], 2))
0x7da: @ Rotate(Stack[-2], Stack[-1])
0x7db: Pop(2)
0x7dc: PushEmpty(bool)
0x7dd: Call2 0x945

0x7de: Pop(0)
0x7df: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7e0: GOTO 0x7e9

0x7e1: Push("head")
0x7e2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7e3: Pop(1)
0x7e4: Push(Stack[-1])
0x7e5: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x7e6: Push("head")
0x7e7: @ LookAsyncCamera(Stack[-1])
0x7e8: Pop(1)
0x7e9: @ CameraWaitForPlayFinish()
0x7ea: Pop(0)
0x7eb: @ ResumeWorld()
0x7ec: Pop(0)
0x7ed: Stack[-21] = (bool) 1
0x7ee: Return(); Pop(18)

0x7ef: PushEmpty(bool, bool)
0x7f0: @ CameraSwitchToNormal()
0x7f1: Pop(0)
0x7f2: PushEmpty(bool)
0x7f3: Call2 0x945

0x7f4: Pop(0)
0x7f5: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7f6: GOTO 0x7ff

0x7f7: Push("head")
0x7f8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7f9: Pop(1)
0x7fa: Push(Stack[-1])
0x7fb: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7fc: Push("head")
0x7fd: @ UnlookAsync(Stack[-1])
0x7fe: Pop(1)
0x7ff: Return(); Pop(2)

0x800: PushEmpty(int, int, int, int)
0x801: Push("voice_common")
0x802: @ GetVariable(Stack[-1], Stack[-3])
0x803: Pop(1)
0x804: Push(Stack[-2])
0x805: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x806: PushEmpty(bool, object)
0x807: Stack[-1] = Stack[-7]
0x808: Call2 0x83a

0x809: Pop(1)
0x80a: Pop(1); Push((bool) Stack[-1] == 0)
0x80b: IF (Stack[-1] == 0) GOTO 0x814; Pop(1)

0x80c: PushEmpty(bool, object)
0x80d: Stack[-1] = Stack[-7]
0x80e: Call2 0x85f

0x80f: Pop(1)
0x810: Pop(1); Push((bool) Stack[-1] == 0)
0x811: IF (Stack[-1] == 0) GOTO 0x814; Pop(1)

0x812: Stack[-6] = (bool) 0
0x813: Return(); Pop(4)

0x814: Push((int) 2)
0x815: @ irand(Stack[-2], Stack[-1])
0x816: Pop(1)
0x817: Push(Stack[-1])
0x818: IF (Stack[-1] == 0) GOTO 0x821; Pop(1)

0x819: Push("voice_common")
0x81a: Push((int) 1)
0x81b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x81c: Push((int) 3)
0x81d: Pop(2); Push(Stack[-2] % Stack[-1]);
0x81e: @ SetVariable(Stack[-2], Stack[-1])
0x81f: Pop(2)
0x820: GOTO 0x825

0x821: Push("voice_common")
0x822: Push((int) 0)
0x823: @ SetVariable(Stack[-2], Stack[-1])
0x824: Pop(2)
0x825: GOTO 0x838

0x826: PushEmpty(bool, object)
0x827: Stack[-1] = Stack[-7]
0x828: Call2 0x85f

0x829: Pop(1)
0x82a: Pop(1); Push((bool) Stack[-1] == 0)
0x82b: IF (Stack[-1] == 0) GOTO 0x834; Pop(1)

0x82c: PushEmpty(bool, object)
0x82d: Stack[-1] = Stack[-7]
0x82e: Call2 0x83a

0x82f: Pop(1)
0x830: Pop(1); Push((bool) Stack[-1] == 0)
0x831: IF (Stack[-1] == 0) GOTO 0x834; Pop(1)

0x832: Stack[-6] = (bool) 0
0x833: Return(); Pop(4)

0x834: Push("voice_common")
0x835: Push((int) 1)
0x836: @ SetVariable(Stack[-2], Stack[-1])
0x837: Pop(2)
0x838: Stack[-6] = (bool) 1
0x839: Return(); Pop(4)

0x83a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x83b: Stack[-5] = "c"
0x83c: Stack[-4] = (int) 0
0x83d: Push((int) 1)
0x83e: IF (Stack[-1] == 0) GOTO 0x84a; Pop(1)

0x83f: Push((int) 1)
0x840: Pop(1); Push(Stack[-5] + Stack[-1]);
0x841: Pop(1); Push(Stack[-6] + Stack[-1]);
0x842: @@ HasProperty(Stack[-1], Stack[-4])
0x843: Pop(1)
0x844: Pop(0); Push((bool) Stack[-3] == 0)
0x845: IF (Stack[-1] == 0) GOTO 0x847; Pop(1)

0x846: GOTO 0x84a

0x847: Push((int) 1)
0x848: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x849: GOTO 0x83d

0x84a: Pop(0); Push((bool) Stack[-4] == 0)
0x84b: IF (Stack[-1] == 0) GOTO 0x84e; Pop(1)

0x84c: Stack[-12] = (bool) 0
0x84d: Return(); Pop(10)

0x84e: Stack[-2] = (int) 0
0x84f: Push((int) 1)
0x850: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x851: IF (Stack[-1] == 0) GOTO 0x854; Pop(1)

0x852: @ irand(Stack[-2], Stack[-4])
0x853: Pop(0)
0x854: Push((int) 1)
0x855: Pop(1); Push(Stack[-3] + Stack[-1]);
0x856: Pop(1); Push(Stack[-6] + Stack[-1]);
0x857: @@ GetProperty(Stack[-1], Stack[-2])
0x858: Pop(1)
0x859: PushEmpty(bool, string)
0x85a: Stack[-1] = Stack[-3]
0x85b: Call2 0x8a9

0x85c: Stack[-14] = Stack[-2]
0x85d: Pop(2)
0x85e: Return(); Pop(10)

0x85f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x860: Push("d")
0x861: PushEmpty(int)
0x862: Call2 0x916

0x863: Pop(0)
0x864: Pop(2); Push(Stack[-2] + Stack[-1]);
0x865: Push("m")
0x866: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x867: Stack[-4] = (int) 0
0x868: Push((int) 1)
0x869: IF (Stack[-1] == 0) GOTO 0x875; Pop(1)

0x86a: Push((int) 1)
0x86b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x86c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x86d: @@ HasProperty(Stack[-1], Stack[-4])
0x86e: Pop(1)
0x86f: Pop(0); Push((bool) Stack[-3] == 0)
0x870: IF (Stack[-1] == 0) GOTO 0x872; Pop(1)

0x871: GOTO 0x875

0x872: Push((int) 1)
0x873: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x874: GOTO 0x868

0x875: Pop(0); Push((bool) Stack[-4] == 0)
0x876: IF (Stack[-1] == 0) GOTO 0x879; Pop(1)

0x877: Stack[-12] = (bool) 0
0x878: Return(); Pop(10)

0x879: Stack[-2] = (int) 0
0x87a: Push((int) 1)
0x87b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x87c: IF (Stack[-1] == 0) GOTO 0x87f; Pop(1)

0x87d: @ irand(Stack[-2], Stack[-4])
0x87e: Pop(0)
0x87f: Push((int) 1)
0x880: Pop(1); Push(Stack[-3] + Stack[-1]);
0x881: Pop(1); Push(Stack[-6] + Stack[-1]);
0x882: @@ GetProperty(Stack[-1], Stack[-2])
0x883: Pop(1)
0x884: PushEmpty(bool, string)
0x885: Stack[-1] = Stack[-3]
0x886: Call2 0x8a9

0x887: Stack[-14] = Stack[-2]
0x888: Pop(2)
0x889: Return(); Pop(10)

0x88a: PushEmpty(bool, float, float, bool, float, float)
0x88b: @ lshHasAnimation(Stack[-3], Stack[-7])
0x88c: Pop(0)
0x88d: Push(Stack[-3])
0x88e: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x88f: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x890: Pop(0)
0x891: Push((bool) 0)
0x892: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x893: Pop(1)
0x894: GOTO 0x899

0x895: Push("Can't find lsh animation : ")
0x896: Pop(1); Push(Stack[-1] + Stack[-8]);
0x897: @ Trace(Stack[-1])
0x898: Pop(1)
0x899: Return(); Pop(6)

0x89a: PushEmpty(bool, float, float, bool, float, float)
0x89b: @ lshHasAnimation(Stack[-3], Stack[-8])
0x89c: Pop(0)
0x89d: Push(Stack[-3])
0x89e: IF (Stack[-1] == 0) GOTO 0x8a4; Pop(1)

0x89f: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x8a0: Pop(0)
0x8a1: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x8a2: Pop(0)
0x8a3: GOTO 0x8a8

0x8a4: Push("Can't find lsh animation : ")
0x8a5: Pop(1); Push(Stack[-1] + Stack[-9]);
0x8a6: @ Trace(Stack[-1])
0x8a7: Pop(1)
0x8a8: Return(); Pop(6)

0x8a9: PushEmpty(bool, bool)
0x8aa: PushEmpty(bool)
0x8ab: Call2 0x945

0x8ac: Pop(0)
0x8ad: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8ae: @ lshHasSpeech(Stack[-1], Stack[-3])
0x8af: Pop(0)
0x8b0: Push(Stack[-1])
0x8b1: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8b2: @ lshPlaySpeech(Stack[-3])
0x8b3: Pop(0)
0x8b4: Stack[-4] = (bool) 1
0x8b5: Return(); Pop(2)

0x8b6: Stack[-4] = (bool) 0
0x8b7: Return(); Pop(2)

0x8b8: PushEmpty(bool)
0x8b9: Call2 0x945

0x8ba: Pop(0)
0x8bb: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8bc: @ lshStopSpeech()
0x8bd: Pop(0)
0x8be: Return(); Pop(0)

0x8bf: PushEmpty(object, object)
0x8c0: @ self(Stack[-1])
0x8c1: Pop(0)
0x8c2: Stack[-3] = Stack[-1]
0x8c3: Return(); Pop(2)

0x8c4: Stack[-1] = 0
0x8c5: PushEmpty(float, float)
0x8c6: Pop(0); Push(Stack[-3] | Stack[-3]);
0x8c7: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x8c8: Push((float)0.0)
0x8c9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x8ca: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8cb: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x8cc: Return(); Pop(2)

0x8cd: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x8ce: Return(); Pop(2)

0x8cf: PushEmpty(int, int)
0x8d0: @ GetVariable(Stack[-3], Stack[-1])
0x8d1: Pop(0)
0x8d2: Stack[-4] = Stack[-1]
0x8d3: Return(); Pop(2)

0x8d4: PushEmpty(object, object, object, object)
0x8d5: @ GetMainOutdoorScene(Stack[-2])
0x8d6: Pop(0)
0x8d7: Push(".xml")
0x8d8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x8d9: @ AddBlankActorFromXml(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x8da: Pop(1)
0x8db: Stack[-6] = Stack[-1]
0x8dc: Return(); Pop(4)

0x8dd: Stack[-1] = 0
0x8de: Stack[-2] = 0
0x8df: PushEmpty(object, object)
0x8e0: @ CreateIntVector(Stack[-1])
0x8e1: Pop(0)
0x8e2: @@ add(Stack[-4])
0x8e3: Pop(0)
0x8e4: @@ add(Stack[-3])
0x8e5: Pop(0)
0x8e6: Push((int) 3)
0x8e7: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x8e8: Pop(1)
0x8e9: Return(); Pop(2)

0x8ea: Stack[-1] = 0
0x8eb: PushEmpty(int, int)
0x8ec: PushEmpty(object, string, int)
0x8ed: Stack[-3] = Stack[-7]
0x8ee: Stack[-2] = "money"
0x8ef: Stack[-1] = Stack[-6]
0x8f0: Call2 0x78c

0x8f1: Pop(3)
0x8f2: Push((int) 0)
0x8f3: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x8f4: IF (Stack[-1] == 0) GOTO 0x8fd; Pop(1)

0x8f5: Push("Money")
0x8f6: @ GetInvItemByName(Stack[-2], Stack[-1])
0x8f7: Pop(1)
0x8f8: PushEmpty(int, int)
0x8f9: Stack[-2] = Stack[-3]
0x8fa: Stack[-1] = Stack[-5]
0x8fb: Call2 0x8df

0x8fc: Pop(2)
0x8fd: Return(); Pop(2)

0x8fe: PushEmpty(int, bool, int, bool)
0x8ff: @ GetInvItemByName(Stack[-2], Stack[-5])
0x900: Pop(0)
0x901: @@ HasItem(Stack[-2], Stack[-1])
0x902: Pop(0)
0x903: Stack[-7] = Stack[-1]
0x904: Return(); Pop(4)

0x905: PushEmpty(object, object)
0x906: @ FindActor(Stack[-1], Stack[-4])
0x907: Pop(0)
0x908: Pop(0); Push((bool) Stack[-1] == 0)
0x909: IF (Stack[-1] == 0) GOTO 0x90c; Pop(1)

0x90a: Stack[-5] = (bool) 0
0x90b: Return(); Pop(2)

0x90c: @ Trigger(Stack[-1], Stack[-3])
0x90d: Pop(0)
0x90e: Stack[-5] = (bool) 1
0x90f: Return(); Pop(2)

0x910: Stack[-1] = 0
0x911: PushEmpty(float, float)
0x912: @ GetGameTime(Stack[-1])
0x913: Pop(0)
0x914: Stack[-3] = Stack[-1]
0x915: Return(); Pop(2)

0x916: PushEmpty(float, float)
0x917: @ GetGameTime(Stack[-1])
0x918: Pop(0)
0x919: Push((int) 1)
0x91a: PushEmpty(int)
0x91b: Push((int) 24)
0x91c: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x91d: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x91e: Return(); Pop(2)

0x91f: PushEmpty()
0x920: PushEmpty(int)
0x921: Call2 0x916

0x922: Pop(0)
0x923: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x924: Return(); Pop(0)

0x925: PushEmpty(string, string)
0x926: Stack[-1] = "idle"
0x927: Push(Stack[-3])
0x928: IF (Stack[-1] == 0) GOTO 0x92a; Pop(1)

0x929: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x92a: Stack[-4] = Stack[-1]
0x92b: Return(); Pop(2)

0x92c: PushEmpty(int, bool, int, bool)
0x92d: Stack[-2] = (int) 0
0x92e: Push("all")
0x92f: PushEmpty(string, int)
0x930: Stack[-1] = Stack[-5]
0x931: Call2 0x925

0x932: Pop(1)
0x933: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x934: Pop(2)
0x935: Pop(0); Push((bool) Stack[-1] == 0)
0x936: IF (Stack[-1] == 0) GOTO 0x938; Pop(1)

0x937: GOTO 0x93b

0x938: Push((int) 1)
0x939: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x93a: GOTO 0x92e

0x93b: Stack[-5] = Stack[-2]
0x93c: Return(); Pop(4)

0x93d: Stack[-1] = (int) 515543
0x93e: Return(); Pop(0)

0x93f: Stack[-1] = (int) 502868
0x940: Return(); Pop(0)

0x941: Stack[-1] = "ui/NPC_Maria.png"
0x942: Return(); Pop(0)

0x943: Stack[-1] = "ui/NPC_Maria_b.png"
0x944: Return(); Pop(0)

0x945: Stack[-1] = (bool) 1
0x946: Return(); Pop(0)

0x947: PushEmpty(object, object)
0x948: Push("b6q03")
0x949: Push((int) 1)
0x94a: @ SetVariable(Stack[-2], Stack[-1])
0x94b: Pop(2)
0x94c: PushEmpty(object)
0x94d: Call2 0xa65

0x94e: Stack[-2] = Stack[-1]
0x94f: Pop(1)
0x950: Push("b6q03MariaGotoNina")
0x951: Push("pt_map_nina")
0x952: Push((int) 0)
0x953: Push((int) 521342)
0x954: PushEmpty(float)
0x955: Call2 0x911

0x956: Pop(0)
0x957: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x958: Pop(5)
0x959: PushEmpty()
0x95a: Call2 0xa15

0x95b: Pop(0)
0x95c: PushEmpty()
0x95d: Call2 0xa2f

0x95e: Pop(0)
0x95f: PushEmpty(object, string)
0x960: Stack[-1] = "quest_b6_03"
0x961: Call2 0x8d4

0x962: Pop(2)
0x963: PushEmpty(bool, string, string)
0x964: Stack[-2] = "quest_b6_03"
0x965: Stack[-1] = "init_grave"
0x966: Call2 0x905

0x967: Pop(3)
0x968: Return(); Pop(2)

0x969: Stack[-1] = 0
0x96a: PushEmpty()
0x96b: Push("oob6Maria1")
0x96c: Push((int) 1)
0x96d: @ SetVariable(Stack[-2], Stack[-1])
0x96e: Pop(2)
0x96f: Return(); Pop(0)

0x970: PushEmpty()
0x971: Push("b6q03NinaTalk")
0x972: Push((int) 1)
0x973: @ SetVariable(Stack[-2], Stack[-1])
0x974: Pop(2)
0x975: Return(); Pop(0)

0x976: PushEmpty(int, int)
0x977: PushEmpty()
0x978: Call2 0xa22

0x979: Pop(0)
0x97a: PushEmpty(bool, string, string)
0x97b: Stack[-2] = "quest_b6_03"
0x97c: Stack[-1] = "completed"
0x97d: Call2 0x905

0x97e: Pop(3)
0x97f: Push("b6q03_diary")
0x980: Push((int) 1)
0x981: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x982: Pop(2)
0x983: Return(); Pop(2)

0x984: PushEmpty()
0x985: PushEmpty(object, string, float)
0x986: PushEmpty(object)
0x987: Call2 0xa65

0x988: Stack[-4] = Stack[-1]
0x989: Pop(1)
0x98a: Stack[-2] = "pt_map_nina"
0x98b: Stack[-1] = (int) 2
0x98c: Call2 0xa76

0x98d: Pop(3)
0x98e: PushEmpty(object)
0x98f: Call2 0xa65

0x990: Pop(0)
0x991: @@ ShowMap(Stack[-1])
0x992: Pop(1)
0x993: Return(); Pop(0)

0x994: PushEmpty()
0x995: Push("oob12Maria1")
0x996: Push((int) 1)
0x997: @ SetVariable(Stack[-2], Stack[-1])
0x998: Pop(2)
0x999: Return(); Pop(0)

0x99a: PushEmpty()
0x99b: Push("oob12Maria2")
0x99c: Push((int) 1)
0x99d: @ SetVariable(Stack[-2], Stack[-1])
0x99e: Pop(2)
0x99f: Return(); Pop(0)

0x9a0: PushEmpty()
0x9a1: Push("b12q01MariaFinalTalk")
0x9a2: Push((int) 1)
0x9a3: @ SetVariable(Stack[-2], Stack[-1])
0x9a4: Pop(2)
0x9a5: Return(); Pop(0)

0x9a6: PushEmpty()
0x9a7: Push("money2000 is given")
0x9a8: @ Trace(Stack[-1])
0x9a9: Pop(1)
0x9aa: PushEmpty(object, int)
0x9ab: Stack[-2] = Stack[-4]
0x9ac: Stack[-1] = (int) 2000
0x9ad: Call2 0x8eb

0x9ae: Pop(2)
0x9af: Return(); Pop(0)

0x9b0: PushEmpty()
0x9b1: Push("playsound")
0x9b2: Push("givemoney")
0x9b3: @ TriggerWorld(Stack[-2], Stack[-1])
0x9b4: Pop(2)
0x9b5: Return(); Pop(0)

0x9b6: PushEmpty()
0x9b7: PushEmpty(int, string)
0x9b8: Stack[-1] = "oob6Maria1"
0x9b9: Call2 0x8cf

0x9ba: Pop(1)
0x9bb: Push((int) 0)
0x9bc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9bd: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9be: Stack[-2] = (bool) 1
0x9bf: Return(); Pop(0)

0x9c0: Stack[-2] = (bool) 0
0x9c1: Return(); Pop(0)

0x9c2: PushEmpty()
0x9c3: PushEmpty(int, string)
0x9c4: Stack[-1] = "b6q03"
0x9c5: Call2 0x8cf

0x9c6: Pop(1)
0x9c7: Push((int) 0)
0x9c8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9c9: IF (Stack[-1] == 0) GOTO 0x9cc; Pop(1)

0x9ca: Stack[-2] = (bool) 1
0x9cb: Return(); Pop(0)

0x9cc: Stack[-2] = (bool) 0
0x9cd: Return(); Pop(0)

0x9ce: PushEmpty()
0x9cf: PushEmpty(int, string)
0x9d0: Stack[-1] = "b6q03NinaTalk"
0x9d1: Call2 0x8cf

0x9d2: Pop(1)
0x9d3: Push((int) 0)
0x9d4: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x9d5: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9d6: Stack[-2] = (bool) 1
0x9d7: Return(); Pop(0)

0x9d8: Stack[-2] = (bool) 0
0x9d9: Return(); Pop(0)

0x9da: PushEmpty()
0x9db: PushEmpty(bool, object, string)
0x9dc: Stack[-2] = Stack[-4]
0x9dd: Stack[-1] = "b6q03_diary"
0x9de: Call2 0x8fe

0x9df: Pop(2)
0x9e0: IF (Stack[-1] == 0) GOTO 0x9e3; Pop(1)

0x9e1: Stack[-2] = (bool) 1
0x9e2: Return(); Pop(0)

0x9e3: Stack[-2] = (bool) 0
0x9e4: Return(); Pop(0)

0x9e5: PushEmpty()
0x9e6: PushEmpty(int, string)
0x9e7: Stack[-1] = "game_final"
0x9e8: Call2 0x8cf

0x9e9: Pop(1)
0x9ea: Push((int) 2)
0x9eb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9ec: IF (Stack[-1] == 0) GOTO 0x9ef; Pop(1)

0x9ed: Stack[-2] = (bool) 1
0x9ee: Return(); Pop(0)

0x9ef: Stack[-2] = (bool) 0
0x9f0: Return(); Pop(0)

0x9f1: PushEmpty()
0x9f2: PushEmpty(int, string)
0x9f3: Stack[-1] = "game_final"
0x9f4: Call2 0x8cf

0x9f5: Pop(1)
0x9f6: Push((int) 0)
0x9f7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9f8: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9f9: Stack[-2] = (bool) 1
0x9fa: Return(); Pop(0)

0x9fb: Stack[-2] = (bool) 0
0x9fc: Return(); Pop(0)

0x9fd: PushEmpty()
0x9fe: PushEmpty(int, string)
0x9ff: Stack[-1] = "oob12Maria1"
0xa00: Call2 0x8cf

0xa01: Pop(1)
0xa02: Push((int) 0)
0xa03: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa04: IF (Stack[-1] == 0) GOTO 0xa07; Pop(1)

0xa05: Stack[-2] = (bool) 1
0xa06: Return(); Pop(0)

0xa07: Stack[-2] = (bool) 0
0xa08: Return(); Pop(0)

0xa09: PushEmpty()
0xa0a: PushEmpty(int, string)
0xa0b: Stack[-1] = "oob12Maria2"
0xa0c: Call2 0x8cf

0xa0d: Pop(1)
0xa0e: Push((int) 0)
0xa0f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa10: IF (Stack[-1] == 0) GOTO 0xa13; Pop(1)

0xa11: Stack[-2] = (bool) 1
0xa12: Return(); Pop(0)

0xa13: Stack[-2] = (bool) 0
0xa14: Return(); Pop(0)

0xa15: PushEmpty(object, object)
0xa16: Push((int) 276)
0xa17: Push((int) 2)
0xa18: Push((int) 521337)
0xa19: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa1a: Pop(3)
0xa1b: PushEmpty(bool, object, int)
0xa1c: Stack[-2] = Stack[-4]
0xa1d: Stack[-1] = (int) -1
0xa1e: Call2 0xa49

0xa1f: Pop(3)
0xa20: Return(); Pop(2)

0xa21: Stack[-1] = 0
0xa22: PushEmpty(object, object)
0xa23: Push((int) 279)
0xa24: Push((int) 2)
0xa25: Push((int) 521340)
0xa26: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa27: Pop(3)
0xa28: PushEmpty(bool, object, int)
0xa29: Stack[-2] = Stack[-4]
0xa2a: Stack[-1] = (int) 276
0xa2b: Call2 0xa49

0xa2c: Pop(3)
0xa2d: Return(); Pop(2)

0xa2e: Stack[-1] = 0
0xa2f: PushEmpty(object, object)
0xa30: Push((int) 277)
0xa31: Push((int) 2)
0xa32: Push((int) 521338)
0xa33: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa34: Pop(3)
0xa35: PushEmpty(bool, object, int)
0xa36: Stack[-2] = Stack[-4]
0xa37: Stack[-1] = (int) 276
0xa38: Call2 0xa49

0xa39: Pop(3)
0xa3a: Return(); Pop(2)

0xa3b: Stack[-1] = 0
0xa3c: PushEmpty(object, object)
0xa3d: @ GetDiaryRoot(Stack[-1])
0xa3e: Pop(0)
0xa3f: Pop(0); Push((bool) Stack[-1] == 0)
0xa40: IF (Stack[-1] == 0) GOTO 0xa46; Pop(1)

0xa41: Push("Can't retrieve diary root")
0xa42: @ Trace(Stack[-1])
0xa43: Pop(1)
0xa44: Stack[-3] = (bool) 0
0xa45: Return(); Pop(2)

0xa46: Stack[-3] = Stack[-1]
0xa47: Return(); Pop(2)

0xa48: Stack[-1] = 0
0xa49: PushEmpty(object, object, int, object, object, int)
0xa4a: PushEmpty(object)
0xa4b: Call2 0xa3c

0xa4c: Stack[-4] = Stack[-1]
0xa4d: Pop(1)
0xa4e: @@ Find(Stack[-7], Stack[-2])
0xa4f: Pop(0)
0xa50: Pop(0); Push((bool) Stack[-2] == 0)
0xa51: IF (Stack[-1] == 0) GOTO 0xa58; Pop(1)

0xa52: Push("Can't find diary parent with id: ")
0xa53: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa54: @ Trace(Stack[-1])
0xa55: Pop(1)
0xa56: Stack[-9] = (bool) 0
0xa57: Return(); Pop(6)

0xa58: @@ AddChild(Stack[-8])
0xa59: Pop(0)
0xa5a: Push((int) 7)
0xa5b: @ SendWorldWndMessage(Stack[-1])
0xa5c: Pop(1)
0xa5d: @@ GetCategory(Stack[-1])
0xa5e: Pop(0)
0xa5f: @ SetDiarySection(Stack[-1])
0xa60: Pop(0)
0xa61: Stack[-9] = (bool) 0
0xa62: Return(); Pop(6)

0xa63: Stack[-2] = 0
0xa64: Stack[-3] = 0
0xa65: PushEmpty(object, object, object, object)
0xa66: @ GetMainOutdoorScene(Stack[-2])
0xa67: Pop(0)
0xa68: Pop(0); Push((bool) Stack[-2] == 0)
0xa69: IF (Stack[-1] == 0) GOTO 0xa70; Pop(1)

0xa6a: Push("Can't find main outdoor scene")
0xa6b: @ Trace(Stack[-1])
0xa6c: Pop(1)
0xa6d: Stack[-1] = 0
0xa6e: Stack[-5] = Stack[-1]
0xa6f: Return(); Pop(4)

0xa70: @@ GetMap(Stack[-1])
0xa71: Pop(0)
0xa72: Stack[-5] = Stack[-1]
0xa73: Return(); Pop(4)

0xa74: Stack[-1] = 0
0xa75: Stack[-2] = 0
0xa76: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xa77: @ GetMainOutdoorScene(Stack[-2])
0xa78: Pop(0)
0xa79: Pop(0); Push((bool) Stack[-2] == 0)
0xa7a: IF (Stack[-1] == 0) GOTO 0xa7f; Pop(1)

0xa7b: Push("Can't find main outdoor scene")
0xa7c: @ Trace(Stack[-1])
0xa7d: Pop(1)
0xa7e: Return(); Pop(8)

0xa7f: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xa80: Pop(0)
0xa81: Pop(0); Push((bool) Stack[-1] == 0)
0xa82: IF (Stack[-1] == 0) GOTO 0xa89; Pop(1)

0xa83: Push("Warning: outdoor scene locator ")
0xa84: Pop(1); Push(Stack[-1] + Stack[-11]);
0xa85: Push(" doesnt exist")
0xa86: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa87: @ Trace(Stack[-1])
0xa88: Pop(1)
0xa89: @@ GetMap(Stack[-11])
0xa8a: Pop(0)
0xa8b: Pop(0); Push((bool) Stack[-11] == 0)
0xa8c: IF (Stack[-1] == 0) GOTO 0xa91; Pop(1)

0xa8d: Push("Can't find map")
0xa8e: @ Trace(Stack[-1])
0xa8f: Pop(1)
0xa90: Return(); Pop(8)

0xa91: Push(CvectorIndex(Stack[-4], 0))
0xa92: Push(CvectorIndex(Stack[-5], 2))
0xa93: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xa94: Pop(2)
0xa95: Return(); Pop(8)

0xa96: Stack[-2] = 0
0xa97: PushEmpty(int, int)
0xa98: Push("branch")
0xa99: @ GetVariable(Stack[-1], Stack[-2])
0xa9a: Pop(1)
0xa9b: Push((int) 0)
0xa9c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa9d: IF (Stack[-1] == 0) GOTO 0xaa1; Pop(1)

0xa9e: Stack[-3] = (int) 1
0xa9f: Return(); Pop(2)

0xaa0: GOTO 0xaa6

0xaa1: Push((int) 1)
0xaa2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaa3: IF (Stack[-1] == 0) GOTO 0xaa6; Pop(1)

0xaa4: Stack[-3] = (int) 2
0xaa5: Return(); Pop(2)

0xaa6: Stack[-3] = (int) 3
0xaa7: Return(); Pop(2)

0xaa8: PushEmpty(int, int)
0xaa9: Push("game_final")
0xaaa: @ GetVariable(Stack[-1], Stack[-2])
0xaab: Pop(1)
0xaac: Stack[-3] = Stack[-1]
0xaad: Return(); Pop(2)

0xaae: PushEmpty(int, int, int, int)
0xaaf: Push("mt_maria")
0xab0: @ GetVariable(Stack[-1], Stack[-3])
0xab1: Pop(1)
0xab2: Pop(0); Push((bool) Stack[-2] == 0)
0xab3: IF (Stack[-1] == 0) GOTO 0xabe; Pop(1)

0xab4: PushEmpty(int, object)
0xab5: Stack[-1] = Stack[-7]
0xab6: Push(-2, 1); TaskCall(2)
0xab7: Call2 0x103

0xab8: Pop(-2, 1); TaskReturn
0xab9: Pop(2)
0xaba: Push("mt_maria")
0xabb: Push((int) 1)
0xabc: @ SetVariable(Stack[-2], Stack[-1])
0xabd: Pop(2)
0xabe: PushEmpty(bool, int)
0xabf: Stack[-1] = (int) 6
0xac0: Call2 0x91f

0xac1: Pop(1)
0xac2: IF (Stack[-1] == 0) GOTO 0xaca; Pop(1)

0xac3: PushEmpty(int, object)
0xac4: Stack[-1] = Stack[-7]
0xac5: Push(-2, 1); TaskCall(4)
0xac6: Call2 0x1e5

0xac7: Pop(-2, 1); TaskReturn
0xac8: Pop(2)
0xac9: Return(); Pop(4)

0xaca: PushEmpty(bool, int)
0xacb: Stack[-1] = (int) 12
0xacc: Call2 0x91f

0xacd: Pop(1)
0xace: IF (Stack[-1] == 0) GOTO 0xaec; Pop(1)

0xacf: PushEmpty(int)
0xad0: Call2 0xaa8

0xad1: Pop(0)
0xad2: Push((int) 0)
0xad3: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xad4: IF (Stack[-1] == 0) GOTO 0xadc; Pop(1)

0xad5: PushEmpty(int, object)
0xad6: Stack[-1] = Stack[-7]
0xad7: Push(-2, 1); TaskCall(6)
0xad8: Call2 0x413

0xad9: Pop(-2, 1); TaskReturn
0xada: Pop(2)
0xadb: GOTO 0xaeb

0xadc: Push("d12_maria")
0xadd: @ GetVariable(Stack[-1], Stack[-2])
0xade: Pop(1)
0xadf: Pop(0); Push((bool) Stack[-1] == 0)
0xae0: IF (Stack[-1] == 0) GOTO 0xaeb; Pop(1)

0xae1: PushEmpty(int, object)
0xae2: Stack[-1] = Stack[-7]
0xae3: Push(-2, 1); TaskCall(0)
0xae4: Call2 0x0

0xae5: Pop(-2, 1); TaskReturn
0xae6: Pop(2)
0xae7: Push("d12_maria")
0xae8: Push((int) 1)
0xae9: @ SetVariable(Stack[-2], Stack[-1])
0xaea: Pop(2)
0xaeb: Return(); Pop(4)

0xaec: PushEmpty(int, object)
0xaed: Stack[-1] = Stack[-7]
0xaee: Push(-2, 1); TaskCall(8)
0xaef: Call2 0x5b9

0xaf0: Pop(-2, 1); TaskReturn
0xaf1: Pop(2)
0xaf2: Return(); Pop(4)

