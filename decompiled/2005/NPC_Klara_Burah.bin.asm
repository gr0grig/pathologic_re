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
	Sorrow
	Smile
	Agression
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
	.bin
	Door 
	 not found
	locked
	add
	money
	Money
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	HasItem
	ui/NPC_Burah.png
	ui/NPC_Burah_b.png
	pt_map_burah_home
	ShowMap
	boiny@door1
	ook1Burah1
	k1q01BurahGotoAnna
	pt_map_anna
	AddMark
	k2q01
	k7q01CorpseMark
	k7q01BirdmaskGotoCorpse
	pt_d7q02_corpse
	quest_k7_01
	place_corpse
	ook7Burah1
	k7q01
	bird_balahon
	RemoveItemByType
	k7q03BurahGotoFather
	quest_k7_03
	place_family
	ook7Burah2
	tvirin 5 is given
	tvirin
	completed
	money2000 is given
	k11q01
	playsound
	givemoney
	giveitem
	ook12BurahFactory1
	k12q01BurahInSobor
	k12q01_Burah
	k12BurahVisit
	game_final
	k1q01LaskaGotoBurah
	k12DankoVisit
	k7q03
	k12q01ChildsAreVisited
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
	vol_
	size
	get
	mt_burah

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
	AddBlankActor (4 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0xc3c
RunTask = 14

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1d0 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x317 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x616 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x798 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x98f Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc12 Vars = (int, int)
	GTASK_14 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xc85 Vars = (int)
		EVENT_6 Op = 0xcab Vars = ()
		EVENT_5 Op = 0xcba Vars = ()
		EVENT_45 Op = 0xcc7 Vars = (bool)
		EVENT_0 Op = 0xcd3 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xd63

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xf28

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xf26

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xf2a

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xf2c

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x11ad

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
0x31: Call2 0xe77

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xdb8

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
0x48: Call2 0xda7

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
0x5b: Push((int) 525257)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x1054

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 525258)
0x66: Push((int) 30607)
0x67: Push((int) 26626)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 525261)
0x6b: Push((int) -1)
0x6c: Push((int) 26629)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0xf2e

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0xe42

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
0x92: Call2 0xf2e

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
0xa2: Call2 0xe52

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0xe70

0xab: Pop(0)
0xac: Push((int) 26628)
0xad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xaf: PushEmpty(object, object)
0xb0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2: Call2 0xf60

0xb3: Pop(2)
0xb4: Push((int) 26625)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Neutral"
0xb9: Call2 0x90

0xba: Pop(1)
0xbb: Push((int) 525257)
0xbc: @@ SetMessage(Stack[-1])
0xbd: Pop(1)
0xbe: @@ ClearReplies()
0xbf: Pop(0)
0xc0: PushEmpty(bool, object)
0xc1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc2: Call2 0x1054

0xc3: Pop(1)
0xc4: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc5: Push((int) 525258)
0xc6: Push((int) 30607)
0xc7: Push((int) 26626)
0xc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9: Pop(3)
0xca: Push((int) 525261)
0xcb: Push((int) -1)
0xcc: Push((int) 26629)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Return(); Pop(0)

0xd0: Push((int) 30607)
0xd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Doubt"
0xd5: Call2 0x90

0xd6: Pop(1)
0xd7: Push((int) 529158)
0xd8: @@ SetMessage(Stack[-1])
0xd9: Pop(1)
0xda: @@ ClearReplies()
0xdb: Pop(0)
0xdc: Push((int) 529159)
0xdd: Push((int) 30609)
0xde: Push((int) 30608)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Push((int) 529161)
0xe2: Push((int) 30611)
0xe3: Push((int) 30610)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Return(); Pop(0)

0xe7: Push((int) 30611)
0xe8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xea: PushEmpty(string)
0xeb: Stack[-1] = "Sorrow"
0xec: Call2 0x90

0xed: Pop(1)
0xee: Push((int) 529162)
0xef: @@ SetMessage(Stack[-1])
0xf0: Pop(1)
0xf1: @@ ClearReplies()
0xf2: Pop(0)
0xf3: Push((int) 529163)
0xf4: Push((int) 26627)
0xf5: Push((int) 30612)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: Push((int) 30609)
0xfa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xfc: PushEmpty(string)
0xfd: Stack[-1] = "Smile"
0xfe: Call2 0x90

0xff: Pop(1)
0x100: Push((int) 529160)
0x101: @@ SetMessage(Stack[-1])
0x102: Pop(1)
0x103: @@ ClearReplies()
0x104: Pop(0)
0x105: Push((int) 529164)
0x106: Push((int) 26627)
0x107: Push((int) 30613)
0x108: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109: Pop(3)
0x10a: Return(); Pop(0)

0x10b: Push((int) 26627)
0x10c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x10e: PushEmpty(string)
0x10f: Stack[-1] = "Neutral"
0x110: Call2 0x90

0x111: Pop(1)
0x112: Push((int) 525259)
0x113: @@ SetMessage(Stack[-1])
0x114: Pop(1)
0x115: @@ ClearReplies()
0x116: Pop(0)
0x117: Push((int) 525260)
0x118: Push((int) -1)
0x119: Push((int) 26628)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: Push((int) 529166)
0x11d: Push((int) -1)
0x11e: Push((int) 30616)
0x11f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x120: Pop(3)
0x121: Return(); Pop(0)

0x122: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x123: PushEmpty(bool)
0x124: Call2 0xf2e

0x125: Pop(0)
0x126: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x127: @ lshStopAnimation()
0x128: Pop(0)
0x129: GOTO 0x12c

0x12a: @ StopAnimation()
0x12b: Pop(0)
0x12c: Return(); Pop(0)

0x12d: GOTO 0xa7

0x12e: Return(); Pop(0)

0x12f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x130: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x131: PushEmpty(bool, object, float)
0x132: Stack[-2] = Stack[-12]
0x133: Stack[-1] = (float) 70.0
0x134: Call2 0xd63

0x135: Pop(2)
0x136: Pop(1); Push((bool) Stack[-1] == 0)
0x137: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x138: Stack[-10] = (int) -2
0x139: Return(); Pop(8)

0x13a: @ CreateDialog(Stack[-4])
0x13b: Pop(0)
0x13c: PushEmpty(int)
0x13d: Call2 0xf28

0x13e: Pop(0)
0x13f: @@ SetNPCName(Stack[-1])
0x140: Pop(1)
0x141: PushEmpty(int)
0x142: Call2 0xf26

0x143: Pop(0)
0x144: @@ SetNPCDescription(Stack[-1])
0x145: Pop(1)
0x146: PushEmpty(string)
0x147: Call2 0xf2a

0x148: Pop(0)
0x149: @@ SetPhoto(Stack[-1])
0x14a: Pop(1)
0x14b: PushEmpty(string)
0x14c: Call2 0xf2c

0x14d: Pop(0)
0x14e: @@ SetPhoto2(Stack[-1])
0x14f: Pop(1)
0x150: PushEmpty(int)
0x151: Call2 0x11ad

0x152: Pop(0)
0x153: @@ SetPlayerName(Stack[-1])
0x154: Pop(1)
0x155: Stack[-2] = (int) -1
0x156: @ IsOverrideActive(Stack[-3])
0x157: Pop(0)
0x158: Push(Stack[-3])
0x159: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x15a: Stack[-10] = (int) -2
0x15b: Return(); Pop(8)

0x15c: @ DoDialog(Stack[-4])
0x15d: Pop(0)
0x15e: PushEmpty(bool, object)
0x15f: PushEmpty(object)
0x160: Call2 0xe77

0x161: Stack[-2] = Stack[-1]
0x162: Pop(1)
0x163: Call2 0xdb8

0x164: Pop(2)
0x165: PushEmpty(object, object)
0x166: Stack[-2] = Stack[-11]
0x167: Stack[-1] = Stack[-6]
0x168: Push(-2, 4); TaskCall(3)
0x169: Call2 0x180

0x16a: Pop(-2, 4); TaskReturn
0x16b: Pop(2)
0x16c: @@ IsDialogEnd(Stack[-1])
0x16d: Pop(0)
0x16e: Pop(0); Push((bool) Stack[-1] == 0)
0x16f: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x170: @ sync()
0x171: Pop(0)
0x172: @@ IsDialogEnd(Stack[-1])
0x173: Pop(0)
0x174: GOTO 0x16e

0x175: PushEmpty(object)
0x176: Stack[-1] = Stack[-10]
0x177: Call2 0xda7

0x178: Pop(1)
0x179: @ StopDialog(Stack[-4])
0x17a: Pop(0)
0x17b: @@ GetReturnValue(Stack[-2])
0x17c: Pop(0)
0x17d: Stack[-10] = Stack[-2]
0x17e: Return(); Pop(8)

0x17f: Stack[-4] = 0
0x180: PushEmpty()
0x181: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x182: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x183: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x184: Push((int) 1)
0x185: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x186: PushEmpty(string)
0x187: Stack[-1] = "Neutral"
0x188: Call2 0x1ba

0x189: Pop(1)
0x18a: Push((int) 525471)
0x18b: @@ SetMessage(Stack[-1])
0x18c: Pop(1)
0x18d: @@ ClearReplies()
0x18e: Pop(0)
0x18f: Push((int) 525472)
0x190: Push((int) 27550)
0x191: Push((int) 26828)
0x192: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x193: Pop(3)
0x194: Push((int) 526276)
0x195: Push((int) 28085)
0x196: Push((int) 27552)
0x197: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x198: Pop(3)
0x199: GOTO 0x19c

0x19a: Return(); Pop(0)

0x19b: GOTO 0x184

0x19c: PushEmpty(bool)
0x19d: Call2 0xf2e

0x19e: Pop(0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a0: @ lshWaitForAnimEnd()
0x1a1: Pop(0)
0x1a2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: GOTO 0x1aa

0x1a5: PushEmpty(string)
0x1a6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1a7: Call2 0xe42

0x1a8: Pop(1)
0x1a9: GOTO 0x1a0

0x1aa: GOTO 0x1b9

0x1ab: Push("all")
0x1ac: Push("idle")
0x1ad: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ae: Pop(2)
0x1af: @ WaitForAnimEnd()
0x1b0: Pop(0)
0x1b1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b3: GOTO 0x1b9

0x1b4: Push("all")
0x1b5: Push("idle")
0x1b6: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b7: Pop(2)
0x1b8: GOTO 0x1af

0x1b9: Return(); Pop(0)

0x1ba: PushEmpty()
0x1bb: PushEmpty(bool)
0x1bc: Call2 0xf2e

0x1bd: Pop(0)
0x1be: Pop(1); Push((bool) Stack[-1] == 0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: Return(); Pop(0)

0x1c1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c3: Return(); Pop(0)

0x1c4: PushEmpty(string, bool)
0x1c5: Stack[-2] = Stack[-3]
0x1c6: Push("")
0x1c7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c9: Stack[-1] = (bool) 0
0x1ca: GOTO 0x1cc

0x1cb: Stack[-1] = (bool) 1
0x1cc: Call2 0xe52

0x1cd: Pop(2)
0x1ce: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1cf: Return(); Pop(0)

0x1d0: PushEmpty()
0x1d1: Push((int) 1)
0x1d2: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x1d3: PushEmpty()
0x1d4: Call2 0xe70

0x1d5: Pop(0)
0x1d6: Push((int) 26827)
0x1d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1d9: PushEmpty(string)
0x1da: Stack[-1] = "Neutral"
0x1db: Call2 0x1ba

0x1dc: Pop(1)
0x1dd: Push((int) 525471)
0x1de: @@ SetMessage(Stack[-1])
0x1df: Pop(1)
0x1e0: @@ ClearReplies()
0x1e1: Pop(0)
0x1e2: Push((int) 525472)
0x1e3: Push((int) 27550)
0x1e4: Push((int) 26828)
0x1e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e6: Pop(3)
0x1e7: Push((int) 526276)
0x1e8: Push((int) 28085)
0x1e9: Push((int) 27552)
0x1ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1eb: Pop(3)
0x1ec: Return(); Pop(0)

0x1ed: Push((int) 28085)
0x1ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1f0: PushEmpty(string)
0x1f1: Stack[-1] = "Neutral"
0x1f2: Call2 0x1ba

0x1f3: Pop(1)
0x1f4: Push((int) 526805)
0x1f5: @@ SetMessage(Stack[-1])
0x1f6: Pop(1)
0x1f7: @@ ClearReplies()
0x1f8: Pop(0)
0x1f9: Push((int) 526806)
0x1fa: Push((int) -1)
0x1fb: Push((int) 28086)
0x1fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fd: Pop(3)
0x1fe: Return(); Pop(0)

0x1ff: Push((int) 27550)
0x200: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x202: PushEmpty(string)
0x203: Stack[-1] = "Neutral"
0x204: Call2 0x1ba

0x205: Pop(1)
0x206: Push((int) 526274)
0x207: @@ SetMessage(Stack[-1])
0x208: Pop(1)
0x209: @@ ClearReplies()
0x20a: Pop(0)
0x20b: Push((int) 526275)
0x20c: Push((int) -1)
0x20d: Push((int) 27551)
0x20e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20f: Pop(3)
0x210: Return(); Pop(0)

0x211: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x212: PushEmpty(bool)
0x213: Call2 0xf2e

0x214: Pop(0)
0x215: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x216: @ lshStopAnimation()
0x217: Pop(0)
0x218: GOTO 0x21b

0x219: @ StopAnimation()
0x21a: Pop(0)
0x21b: Return(); Pop(0)

0x21c: GOTO 0x1d1

0x21d: Return(); Pop(0)

0x21e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x21f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x220: PushEmpty(bool, object, float)
0x221: Stack[-2] = Stack[-12]
0x222: Stack[-1] = (float) 70.0
0x223: Call2 0xd63

0x224: Pop(2)
0x225: Pop(1); Push((bool) Stack[-1] == 0)
0x226: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x227: Stack[-10] = (int) -2
0x228: Return(); Pop(8)

0x229: @ CreateDialog(Stack[-4])
0x22a: Pop(0)
0x22b: PushEmpty(int)
0x22c: Call2 0xf28

0x22d: Pop(0)
0x22e: @@ SetNPCName(Stack[-1])
0x22f: Pop(1)
0x230: PushEmpty(int)
0x231: Call2 0xf26

0x232: Pop(0)
0x233: @@ SetNPCDescription(Stack[-1])
0x234: Pop(1)
0x235: PushEmpty(string)
0x236: Call2 0xf2a

0x237: Pop(0)
0x238: @@ SetPhoto(Stack[-1])
0x239: Pop(1)
0x23a: PushEmpty(string)
0x23b: Call2 0xf2c

0x23c: Pop(0)
0x23d: @@ SetPhoto2(Stack[-1])
0x23e: Pop(1)
0x23f: PushEmpty(int)
0x240: Call2 0x11ad

0x241: Pop(0)
0x242: @@ SetPlayerName(Stack[-1])
0x243: Pop(1)
0x244: Stack[-2] = (int) -1
0x245: @ IsOverrideActive(Stack[-3])
0x246: Pop(0)
0x247: Push(Stack[-3])
0x248: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x249: Stack[-10] = (int) -2
0x24a: Return(); Pop(8)

0x24b: @ DoDialog(Stack[-4])
0x24c: Pop(0)
0x24d: PushEmpty(bool, object)
0x24e: PushEmpty(object)
0x24f: Call2 0xe77

0x250: Stack[-2] = Stack[-1]
0x251: Pop(1)
0x252: Call2 0xdb8

0x253: Pop(2)
0x254: PushEmpty(object, object)
0x255: Stack[-2] = Stack[-11]
0x256: Stack[-1] = Stack[-6]
0x257: Push(-2, 4); TaskCall(5)
0x258: Call2 0x26f

0x259: Pop(-2, 4); TaskReturn
0x25a: Pop(2)
0x25b: @@ IsDialogEnd(Stack[-1])
0x25c: Pop(0)
0x25d: Pop(0); Push((bool) Stack[-1] == 0)
0x25e: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x25f: @ sync()
0x260: Pop(0)
0x261: @@ IsDialogEnd(Stack[-1])
0x262: Pop(0)
0x263: GOTO 0x25d

0x264: PushEmpty(object)
0x265: Stack[-1] = Stack[-10]
0x266: Call2 0xda7

0x267: Pop(1)
0x268: @ StopDialog(Stack[-4])
0x269: Pop(0)
0x26a: @@ GetReturnValue(Stack[-2])
0x26b: Pop(0)
0x26c: Stack[-10] = Stack[-2]
0x26d: Return(); Pop(8)

0x26e: Stack[-4] = 0
0x26f: PushEmpty()
0x270: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x271: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x272: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x273: Push((int) 1)
0x274: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x275: PushEmpty(bool, object)
0x276: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x277: Call2 0x108f

0x278: Pop(1)
0x279: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x27a: PushEmpty(object, object)
0x27b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27d: Call2 0xfbb

0x27e: Pop(2)
0x27f: PushEmpty(string)
0x280: Stack[-1] = "Neutral"
0x281: Call2 0x301

0x282: Pop(1)
0x283: Push((int) 526373)
0x284: @@ SetMessage(Stack[-1])
0x285: Pop(1)
0x286: @@ ClearReplies()
0x287: Pop(0)
0x288: Push((int) 526374)
0x289: Push((int) 27655)
0x28a: Push((int) 27654)
0x28b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28c: Pop(3)
0x28d: Push((int) 528676)
0x28e: Push((int) 27655)
0x28f: Push((int) 30089)
0x290: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x291: Pop(3)
0x292: GOTO 0x2e3

0x293: PushEmpty(string)
0x294: Stack[-1] = "Neutral"
0x295: Call2 0x301

0x296: Pop(1)
0x297: Push((int) 526173)
0x298: @@ SetMessage(Stack[-1])
0x299: Pop(1)
0x29a: @@ ClearReplies()
0x29b: Pop(0)
0x29c: PushEmpty(bool)
0x29d: Stack[-1] = (bool) 0
0x29e: PushEmpty(bool, object)
0x29f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a0: Call2 0x106b

0x2a1: Pop(1)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a3: PushEmpty(bool, object)
0x2a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a5: Call2 0x1077

0x2a6: Pop(1)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a8: Stack[-1] = (bool) 1
0x2a9: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2aa: Push((int) 526174)
0x2ab: Push((int) 27455)
0x2ac: Push((int) 27454)
0x2ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ae: Pop(3)
0x2af: PushEmpty(bool)
0x2b0: Stack[-1] = (bool) 0
0x2b1: PushEmpty(bool, object)
0x2b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b3: Call2 0x106b

0x2b4: Pop(1)
0x2b5: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2b6: PushEmpty(bool, object)
0x2b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b8: Call2 0x1060

0x2b9: Pop(1)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2bb: Stack[-1] = (bool) 1
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2bd: Push((int) 526178)
0x2be: Push((int) 27459)
0x2bf: Push((int) 27458)
0x2c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c1: Pop(3)
0x2c2: PushEmpty(bool, object)
0x2c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c4: Call2 0x1083

0x2c5: Pop(1)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c7: Push((int) 526378)
0x2c8: Push((int) 27659)
0x2c9: Push((int) 27658)
0x2ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cb: Pop(3)
0x2cc: PushEmpty(bool, object)
0x2cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ce: Call2 0x109b

0x2cf: Pop(1)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d1: Push((int) 526387)
0x2d2: Push((int) 44876)
0x2d3: Push((int) 27667)
0x2d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d5: Pop(3)
0x2d6: Push((int) 526181)
0x2d7: Push((int) -1)
0x2d8: Push((int) 27461)
0x2d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2da: Pop(3)
0x2db: Push((int) 528675)
0x2dc: Push((int) -1)
0x2dd: Push((int) 30088)
0x2de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2df: Pop(3)
0x2e0: GOTO 0x2e3

0x2e1: Return(); Pop(0)

0x2e2: GOTO 0x273

0x2e3: PushEmpty(bool)
0x2e4: Call2 0xf2e

0x2e5: Pop(0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2e7: @ lshWaitForAnimEnd()
0x2e8: Pop(0)
0x2e9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2eb: GOTO 0x2f1

0x2ec: PushEmpty(string)
0x2ed: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2ee: Call2 0xe42

0x2ef: Pop(1)
0x2f0: GOTO 0x2e7

0x2f1: GOTO 0x300

0x2f2: Push("all")
0x2f3: Push("idle")
0x2f4: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f5: Pop(2)
0x2f6: @ WaitForAnimEnd()
0x2f7: Pop(0)
0x2f8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2fa: GOTO 0x300

0x2fb: Push("all")
0x2fc: Push("idle")
0x2fd: @ PlayAnimation(Stack[-2], Stack[-1])
0x2fe: Pop(2)
0x2ff: GOTO 0x2f6

0x300: Return(); Pop(0)

0x301: PushEmpty()
0x302: PushEmpty(bool)
0x303: Call2 0xf2e

0x304: Pop(0)
0x305: Pop(1); Push((bool) Stack[-1] == 0)
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: Return(); Pop(0)

0x308: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x309: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x30a: Return(); Pop(0)

0x30b: PushEmpty(string, bool)
0x30c: Stack[-2] = Stack[-3]
0x30d: Push("")
0x30e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x310: Stack[-1] = (bool) 0
0x311: GOTO 0x313

0x312: Stack[-1] = (bool) 1
0x313: Call2 0xe52

0x314: Pop(2)
0x315: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x316: Return(); Pop(0)

0x317: PushEmpty()
0x318: Push((int) 1)
0x319: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x31a: PushEmpty()
0x31b: Call2 0xe70

0x31c: Pop(0)
0x31d: Push((int) 27656)
0x31e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31f: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x320: PushEmpty(object, object)
0x321: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x322: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x323: Call2 0xf9c

0x324: Pop(2)
0x325: PushEmpty(object, object)
0x326: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x327: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x328: Call2 0xfef

0x329: Pop(2)
0x32a: PushEmpty(object, object)
0x32b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x32c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32d: Call2 0xfc1

0x32e: Pop(2)
0x32f: PushEmpty(object, object)
0x330: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x331: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x332: Call2 0xf30

0x333: Pop(2)
0x334: Push((int) 27454)
0x335: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x336: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x337: PushEmpty(object, object)
0x338: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x339: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33a: Call2 0xf89

0x33b: Pop(2)
0x33c: Push((int) 27456)
0x33d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x33e: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x33f: PushEmpty(object, object)
0x340: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x341: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x342: Call2 0xf69

0x343: Pop(2)
0x344: Push((int) 27460)
0x345: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x346: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x347: PushEmpty(object, object)
0x348: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x349: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34a: Call2 0xf8f

0x34b: Pop(2)
0x34c: Push((int) 27660)
0x34d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34e: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x34f: PushEmpty(object, object)
0x350: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x351: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x352: Call2 0xf9c

0x353: Pop(2)
0x354: PushEmpty(object, object)
0x355: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x356: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x357: Call2 0xfc1

0x358: Pop(2)
0x359: PushEmpty(object, object)
0x35a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x35b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35c: Call2 0xfef

0x35d: Pop(2)
0x35e: PushEmpty(object, object)
0x35f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x360: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x361: Call2 0xf30

0x362: Pop(2)
0x363: Push((int) 27669)
0x364: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x366: PushEmpty(object, object)
0x367: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x368: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x369: Call2 0xfcc

0x36a: Pop(2)
0x36b: PushEmpty(object, object)
0x36c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x36d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36e: Call2 0xfd6

0x36f: Pop(2)
0x370: PushEmpty(object, object)
0x371: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x372: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x373: Call2 0xfe9

0x374: Pop(2)
0x375: Push((int) 44880)
0x376: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x377: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x378: PushEmpty(object, object)
0x379: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x37a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x37b: Call2 0xfcc

0x37c: Pop(2)
0x37d: Push((int) 27653)
0x37e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37f: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x380: PushEmpty(bool, object)
0x381: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x382: Call2 0x108f

0x383: Pop(1)
0x384: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x385: PushEmpty(object, object)
0x386: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x387: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x388: Call2 0xfbb

0x389: Pop(2)
0x38a: PushEmpty(string)
0x38b: Stack[-1] = "Neutral"
0x38c: Call2 0x301

0x38d: Pop(1)
0x38e: Push((int) 526373)
0x38f: @@ SetMessage(Stack[-1])
0x390: Pop(1)
0x391: @@ ClearReplies()
0x392: Pop(0)
0x393: Push((int) 526374)
0x394: Push((int) 27655)
0x395: Push((int) 27654)
0x396: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x397: Pop(3)
0x398: Push((int) 528676)
0x399: Push((int) 27655)
0x39a: Push((int) 30089)
0x39b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39c: Pop(3)
0x39d: Return(); Pop(0)

0x39e: PushEmpty(string)
0x39f: Stack[-1] = "Neutral"
0x3a0: Call2 0x301

0x3a1: Pop(1)
0x3a2: Push((int) 526173)
0x3a3: @@ SetMessage(Stack[-1])
0x3a4: Pop(1)
0x3a5: @@ ClearReplies()
0x3a6: Pop(0)
0x3a7: PushEmpty(bool)
0x3a8: Stack[-1] = (bool) 0
0x3a9: PushEmpty(bool, object)
0x3aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ab: Call2 0x106b

0x3ac: Pop(1)
0x3ad: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3ae: PushEmpty(bool, object)
0x3af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b0: Call2 0x1077

0x3b1: Pop(1)
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b3: Stack[-1] = (bool) 1
0x3b4: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b5: Push((int) 526174)
0x3b6: Push((int) 27455)
0x3b7: Push((int) 27454)
0x3b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b9: Pop(3)
0x3ba: PushEmpty(bool)
0x3bb: Stack[-1] = (bool) 0
0x3bc: PushEmpty(bool, object)
0x3bd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3be: Call2 0x106b

0x3bf: Pop(1)
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c1: PushEmpty(bool, object)
0x3c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c3: Call2 0x1060

0x3c4: Pop(1)
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c6: Stack[-1] = (bool) 1
0x3c7: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3c8: Push((int) 526178)
0x3c9: Push((int) 27459)
0x3ca: Push((int) 27458)
0x3cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cc: Pop(3)
0x3cd: PushEmpty(bool, object)
0x3ce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3cf: Call2 0x1083

0x3d0: Pop(1)
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d2: Push((int) 526378)
0x3d3: Push((int) 27659)
0x3d4: Push((int) 27658)
0x3d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d6: Pop(3)
0x3d7: PushEmpty(bool, object)
0x3d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d9: Call2 0x109b

0x3da: Pop(1)
0x3db: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3dc: Push((int) 526387)
0x3dd: Push((int) 44876)
0x3de: Push((int) 27667)
0x3df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e0: Pop(3)
0x3e1: Push((int) 526181)
0x3e2: Push((int) -1)
0x3e3: Push((int) 27461)
0x3e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e5: Pop(3)
0x3e6: Push((int) 528675)
0x3e7: Push((int) -1)
0x3e8: Push((int) 30088)
0x3e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ea: Pop(3)
0x3eb: Return(); Pop(0)

0x3ec: Push((int) 44876)
0x3ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ee: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x3ef: PushEmpty(string)
0x3f0: Stack[-1] = "Sorrow"
0x3f1: Call2 0x301

0x3f2: Pop(1)
0x3f3: Push((int) 542490)
0x3f4: @@ SetMessage(Stack[-1])
0x3f5: Pop(1)
0x3f6: @@ ClearReplies()
0x3f7: Pop(0)
0x3f8: Push((int) 542491)
0x3f9: Push((int) 27668)
0x3fa: Push((int) 44877)
0x3fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fc: Pop(3)
0x3fd: Push((int) 542492)
0x3fe: Push((int) 27668)
0x3ff: Push((int) 44878)
0x400: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x401: Pop(3)
0x402: Return(); Pop(0)

0x403: Push((int) 27668)
0x404: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x405: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x406: PushEmpty(string)
0x407: Stack[-1] = "Smile"
0x408: Call2 0x301

0x409: Pop(1)
0x40a: Push((int) 526388)
0x40b: @@ SetMessage(Stack[-1])
0x40c: Pop(1)
0x40d: @@ ClearReplies()
0x40e: Pop(0)
0x40f: Push((int) 526389)
0x410: Push((int) -1)
0x411: Push((int) 27669)
0x412: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x413: Pop(3)
0x414: Push((int) 542493)
0x415: Push((int) -1)
0x416: Push((int) 44880)
0x417: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x418: Pop(3)
0x419: Return(); Pop(0)

0x41a: Push((int) 27659)
0x41b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x41d: PushEmpty(string)
0x41e: Stack[-1] = "Neutral"
0x41f: Call2 0x301

0x420: Pop(1)
0x421: Push((int) 526379)
0x422: @@ SetMessage(Stack[-1])
0x423: Pop(1)
0x424: @@ ClearReplies()
0x425: Pop(0)
0x426: Push((int) 526380)
0x427: Push((int) -1)
0x428: Push((int) 27660)
0x429: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42a: Pop(3)
0x42b: Return(); Pop(0)

0x42c: Push((int) 27459)
0x42d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42e: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x42f: PushEmpty(string)
0x430: Stack[-1] = "Neutral"
0x431: Call2 0x301

0x432: Pop(1)
0x433: Push((int) 526179)
0x434: @@ SetMessage(Stack[-1])
0x435: Pop(1)
0x436: @@ ClearReplies()
0x437: Pop(0)
0x438: Push((int) 528687)
0x439: Push((int) 30103)
0x43a: Push((int) 30102)
0x43b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43c: Pop(3)
0x43d: Return(); Pop(0)

0x43e: Push((int) 30103)
0x43f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x441: PushEmpty(string)
0x442: Stack[-1] = "Doubt"
0x443: Call2 0x301

0x444: Pop(1)
0x445: Push((int) 528688)
0x446: @@ SetMessage(Stack[-1])
0x447: Pop(1)
0x448: @@ ClearReplies()
0x449: Pop(0)
0x44a: Push((int) 528689)
0x44b: Push((int) 30105)
0x44c: Push((int) 30104)
0x44d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44e: Pop(3)
0x44f: Return(); Pop(0)

0x450: Push((int) 30105)
0x451: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x453: PushEmpty(string)
0x454: Stack[-1] = "Sorrow"
0x455: Call2 0x301

0x456: Pop(1)
0x457: Push((int) 528690)
0x458: @@ SetMessage(Stack[-1])
0x459: Pop(1)
0x45a: @@ ClearReplies()
0x45b: Pop(0)
0x45c: Push((int) 528691)
0x45d: Push((int) 30107)
0x45e: Push((int) 30106)
0x45f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x460: Pop(3)
0x461: Push((int) 528697)
0x462: Push((int) 30113)
0x463: Push((int) 30112)
0x464: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x465: Pop(3)
0x466: Return(); Pop(0)

0x467: Push((int) 30113)
0x468: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x469: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x46a: PushEmpty(string)
0x46b: Stack[-1] = "Neutral"
0x46c: Call2 0x301

0x46d: Pop(1)
0x46e: Push((int) 528698)
0x46f: @@ SetMessage(Stack[-1])
0x470: Pop(1)
0x471: @@ ClearReplies()
0x472: Pop(0)
0x473: Push((int) 528699)
0x474: Push((int) 30107)
0x475: Push((int) 30114)
0x476: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x477: Pop(3)
0x478: Return(); Pop(0)

0x479: Push((int) 30107)
0x47a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47b: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x47c: PushEmpty(string)
0x47d: Stack[-1] = "Neutral"
0x47e: Call2 0x301

0x47f: Pop(1)
0x480: Push((int) 528692)
0x481: @@ SetMessage(Stack[-1])
0x482: Pop(1)
0x483: @@ ClearReplies()
0x484: Pop(0)
0x485: Push((int) 528693)
0x486: Push((int) 30109)
0x487: Push((int) 30108)
0x488: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x489: Pop(3)
0x48a: Return(); Pop(0)

0x48b: Push((int) 30109)
0x48c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48d: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x48e: PushEmpty(string)
0x48f: Stack[-1] = "Doubt"
0x490: Call2 0x301

0x491: Pop(1)
0x492: Push((int) 528694)
0x493: @@ SetMessage(Stack[-1])
0x494: Pop(1)
0x495: @@ ClearReplies()
0x496: Pop(0)
0x497: Push((int) 528702)
0x498: Push((int) 30118)
0x499: Push((int) 30117)
0x49a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49b: Pop(3)
0x49c: Push((int) 528700)
0x49d: Push((int) 30116)
0x49e: Push((int) 30115)
0x49f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a0: Pop(3)
0x4a1: Return(); Pop(0)

0x4a2: Push((int) 30116)
0x4a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a4: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4a5: PushEmpty(string)
0x4a6: Stack[-1] = "Neutral"
0x4a7: Call2 0x301

0x4a8: Pop(1)
0x4a9: Push((int) 528701)
0x4aa: @@ SetMessage(Stack[-1])
0x4ab: Pop(1)
0x4ac: @@ ClearReplies()
0x4ad: Pop(0)
0x4ae: Push((int) 528704)
0x4af: Push((int) 30118)
0x4b0: Push((int) 30119)
0x4b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b2: Pop(3)
0x4b3: Return(); Pop(0)

0x4b4: Push((int) 30118)
0x4b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b6: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4b7: PushEmpty(string)
0x4b8: Stack[-1] = "Doubt"
0x4b9: Call2 0x301

0x4ba: Pop(1)
0x4bb: Push((int) 528703)
0x4bc: @@ SetMessage(Stack[-1])
0x4bd: Pop(1)
0x4be: @@ ClearReplies()
0x4bf: Pop(0)
0x4c0: Push((int) 528695)
0x4c1: Push((int) 30111)
0x4c2: Push((int) 30110)
0x4c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c4: Pop(3)
0x4c5: Return(); Pop(0)

0x4c6: Push((int) 30111)
0x4c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c8: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4c9: PushEmpty(string)
0x4ca: Stack[-1] = "Doubt"
0x4cb: Call2 0x301

0x4cc: Pop(1)
0x4cd: Push((int) 528696)
0x4ce: @@ SetMessage(Stack[-1])
0x4cf: Pop(1)
0x4d0: @@ ClearReplies()
0x4d1: Pop(0)
0x4d2: Push((int) 526180)
0x4d3: Push((int) -1)
0x4d4: Push((int) 27460)
0x4d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d6: Pop(3)
0x4d7: Return(); Pop(0)

0x4d8: Push((int) 27455)
0x4d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4da: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4db: PushEmpty(string)
0x4dc: Stack[-1] = "Sorrow"
0x4dd: Call2 0x301

0x4de: Pop(1)
0x4df: Push((int) 526175)
0x4e0: @@ SetMessage(Stack[-1])
0x4e1: Pop(1)
0x4e2: @@ ClearReplies()
0x4e3: Pop(0)
0x4e4: Push((int) 528685)
0x4e5: Push((int) 30101)
0x4e6: Push((int) 30100)
0x4e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e8: Pop(3)
0x4e9: Return(); Pop(0)

0x4ea: Push((int) 30101)
0x4eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ec: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x4ed: PushEmpty(string)
0x4ee: Stack[-1] = "Sorrow"
0x4ef: Call2 0x301

0x4f0: Pop(1)
0x4f1: Push((int) 528686)
0x4f2: @@ SetMessage(Stack[-1])
0x4f3: Pop(1)
0x4f4: @@ ClearReplies()
0x4f5: Pop(0)
0x4f6: PushEmpty(bool, object)
0x4f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f8: Call2 0x1060

0x4f9: Pop(1)
0x4fa: Pop(1); Push((bool) Stack[-1] == 0)
0x4fb: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4fc: Push((int) 526176)
0x4fd: Push((int) -1)
0x4fe: Push((int) 27456)
0x4ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x500: Pop(3)
0x501: PushEmpty(bool, object)
0x502: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x503: Call2 0x1060

0x504: Pop(1)
0x505: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x506: Push((int) 526177)
0x507: Push((int) 27459)
0x508: Push((int) 27457)
0x509: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50a: Pop(3)
0x50b: Return(); Pop(0)

0x50c: Push((int) 27655)
0x50d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50e: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x50f: PushEmpty(string)
0x510: Stack[-1] = "Neutral"
0x511: Call2 0x301

0x512: Pop(1)
0x513: Push((int) 526375)
0x514: @@ SetMessage(Stack[-1])
0x515: Pop(1)
0x516: @@ ClearReplies()
0x517: Pop(0)
0x518: Push((int) 528677)
0x519: Push((int) 30092)
0x51a: Push((int) 30091)
0x51b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51c: Pop(3)
0x51d: Return(); Pop(0)

0x51e: Push((int) 30092)
0x51f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x520: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x521: PushEmpty(string)
0x522: Stack[-1] = "Doubt"
0x523: Call2 0x301

0x524: Pop(1)
0x525: Push((int) 528678)
0x526: @@ SetMessage(Stack[-1])
0x527: Pop(1)
0x528: @@ ClearReplies()
0x529: Pop(0)
0x52a: Push((int) 528679)
0x52b: Push((int) 30094)
0x52c: Push((int) 30093)
0x52d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52e: Pop(3)
0x52f: Push((int) 528681)
0x530: Push((int) 30094)
0x531: Push((int) 30095)
0x532: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x533: Pop(3)
0x534: Return(); Pop(0)

0x535: Push((int) 30094)
0x536: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x537: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x538: PushEmpty(string)
0x539: Stack[-1] = "Doubt"
0x53a: Call2 0x301

0x53b: Pop(1)
0x53c: Push((int) 528680)
0x53d: @@ SetMessage(Stack[-1])
0x53e: Pop(1)
0x53f: @@ ClearReplies()
0x540: Pop(0)
0x541: Push((int) 528682)
0x542: Push((int) 30098)
0x543: Push((int) 30097)
0x544: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x545: Pop(3)
0x546: Return(); Pop(0)

0x547: Push((int) 30098)
0x548: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x549: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x54a: PushEmpty(string)
0x54b: Stack[-1] = "Neutral"
0x54c: Call2 0x301

0x54d: Pop(1)
0x54e: Push((int) 528683)
0x54f: @@ SetMessage(Stack[-1])
0x550: Pop(1)
0x551: @@ ClearReplies()
0x552: Pop(0)
0x553: Push((int) 526376)
0x554: Push((int) -1)
0x555: Push((int) 27656)
0x556: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x557: Pop(3)
0x558: Push((int) 526377)
0x559: Push((int) -1)
0x55a: Push((int) 27657)
0x55b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55c: Pop(3)
0x55d: Return(); Pop(0)

0x55e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x55f: PushEmpty(bool)
0x560: Call2 0xf2e

0x561: Pop(0)
0x562: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x563: @ lshStopAnimation()
0x564: Pop(0)
0x565: GOTO 0x568

0x566: @ StopAnimation()
0x567: Pop(0)
0x568: Return(); Pop(0)

0x569: GOTO 0x318

0x56a: Return(); Pop(0)

0x56b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x56c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x56d: PushEmpty(bool, object, float)
0x56e: Stack[-2] = Stack[-12]
0x56f: Stack[-1] = (float) 70.0
0x570: Call2 0xd63

0x571: Pop(2)
0x572: Pop(1); Push((bool) Stack[-1] == 0)
0x573: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x574: Stack[-10] = (int) -2
0x575: Return(); Pop(8)

0x576: @ CreateDialog(Stack[-4])
0x577: Pop(0)
0x578: PushEmpty(int)
0x579: Call2 0xf28

0x57a: Pop(0)
0x57b: @@ SetNPCName(Stack[-1])
0x57c: Pop(1)
0x57d: PushEmpty(int)
0x57e: Call2 0xf26

0x57f: Pop(0)
0x580: @@ SetNPCDescription(Stack[-1])
0x581: Pop(1)
0x582: PushEmpty(string)
0x583: Call2 0xf2a

0x584: Pop(0)
0x585: @@ SetPhoto(Stack[-1])
0x586: Pop(1)
0x587: PushEmpty(string)
0x588: Call2 0xf2c

0x589: Pop(0)
0x58a: @@ SetPhoto2(Stack[-1])
0x58b: Pop(1)
0x58c: PushEmpty(int)
0x58d: Call2 0x11ad

0x58e: Pop(0)
0x58f: @@ SetPlayerName(Stack[-1])
0x590: Pop(1)
0x591: Stack[-2] = (int) -1
0x592: @ IsOverrideActive(Stack[-3])
0x593: Pop(0)
0x594: Push(Stack[-3])
0x595: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x596: Stack[-10] = (int) -2
0x597: Return(); Pop(8)

0x598: @ DoDialog(Stack[-4])
0x599: Pop(0)
0x59a: PushEmpty(bool, object)
0x59b: PushEmpty(object)
0x59c: Call2 0xe77

0x59d: Stack[-2] = Stack[-1]
0x59e: Pop(1)
0x59f: Call2 0xdb8

0x5a0: Pop(2)
0x5a1: PushEmpty(object, object)
0x5a2: Stack[-2] = Stack[-11]
0x5a3: Stack[-1] = Stack[-6]
0x5a4: Push(-2, 4); TaskCall(7)
0x5a5: Call2 0x5bc

0x5a6: Pop(-2, 4); TaskReturn
0x5a7: Pop(2)
0x5a8: @@ IsDialogEnd(Stack[-1])
0x5a9: Pop(0)
0x5aa: Pop(0); Push((bool) Stack[-1] == 0)
0x5ab: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5ac: @ sync()
0x5ad: Pop(0)
0x5ae: @@ IsDialogEnd(Stack[-1])
0x5af: Pop(0)
0x5b0: GOTO 0x5aa

0x5b1: PushEmpty(object)
0x5b2: Stack[-1] = Stack[-10]
0x5b3: Call2 0xda7

0x5b4: Pop(1)
0x5b5: @ StopDialog(Stack[-4])
0x5b6: Pop(0)
0x5b7: @@ GetReturnValue(Stack[-2])
0x5b8: Pop(0)
0x5b9: Stack[-10] = Stack[-2]
0x5ba: Return(); Pop(8)

0x5bb: Stack[-4] = 0
0x5bc: PushEmpty()
0x5bd: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5be: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5bf: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5c0: Push((int) 1)
0x5c1: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5c2: PushEmpty(string)
0x5c3: Stack[-1] = "Neutral"
0x5c4: Call2 0x600

0x5c5: Pop(1)
0x5c6: Push((int) 527204)
0x5c7: @@ SetMessage(Stack[-1])
0x5c8: Pop(1)
0x5c9: @@ ClearReplies()
0x5ca: Pop(0)
0x5cb: PushEmpty(bool, object)
0x5cc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5cd: Call2 0x10a7

0x5ce: Pop(1)
0x5cf: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d0: Push((int) 527205)
0x5d1: Push((int) 28514)
0x5d2: Push((int) 28513)
0x5d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d4: Pop(3)
0x5d5: Push((int) 527210)
0x5d6: Push((int) -1)
0x5d7: Push((int) 28518)
0x5d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d9: Pop(3)
0x5da: Push((int) 527533)
0x5db: Push((int) -1)
0x5dc: Push((int) 28871)
0x5dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5de: Pop(3)
0x5df: GOTO 0x5e2

0x5e0: Return(); Pop(0)

0x5e1: GOTO 0x5c0

0x5e2: PushEmpty(bool)
0x5e3: Call2 0xf2e

0x5e4: Pop(0)
0x5e5: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5e6: @ lshWaitForAnimEnd()
0x5e7: Pop(0)
0x5e8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5e9: IF (Stack[-1] == 0) GOTO 0x5eb; Pop(1)

0x5ea: GOTO 0x5f0

0x5eb: PushEmpty(string)
0x5ec: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5ed: Call2 0xe42

0x5ee: Pop(1)
0x5ef: GOTO 0x5e6

0x5f0: GOTO 0x5ff

0x5f1: Push("all")
0x5f2: Push("idle")
0x5f3: @ PlayAnimation(Stack[-2], Stack[-1])
0x5f4: Pop(2)
0x5f5: @ WaitForAnimEnd()
0x5f6: Pop(0)
0x5f7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5f8: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f9: GOTO 0x5ff

0x5fa: Push("all")
0x5fb: Push("idle")
0x5fc: @ PlayAnimation(Stack[-2], Stack[-1])
0x5fd: Pop(2)
0x5fe: GOTO 0x5f5

0x5ff: Return(); Pop(0)

0x600: PushEmpty()
0x601: PushEmpty(bool)
0x602: Call2 0xf2e

0x603: Pop(0)
0x604: Pop(1); Push((bool) Stack[-1] == 0)
0x605: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x606: Return(); Pop(0)

0x607: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x608: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x609: Return(); Pop(0)

0x60a: PushEmpty(string, bool)
0x60b: Stack[-2] = Stack[-3]
0x60c: Push("")
0x60d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x60e: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x60f: Stack[-1] = (bool) 0
0x610: GOTO 0x612

0x611: Stack[-1] = (bool) 1
0x612: Call2 0xe52

0x613: Pop(2)
0x614: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x615: Return(); Pop(0)

0x616: PushEmpty()
0x617: Push((int) 1)
0x618: IF (Stack[-1] == 0) GOTO 0x6e3; Pop(1)

0x619: PushEmpty()
0x61a: Call2 0xe70

0x61b: Pop(0)
0x61c: Push((int) 28885)
0x61d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x61e: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x61f: PushEmpty(object, object)
0x620: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x621: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x622: Call2 0xfe0

0x623: Pop(2)
0x624: PushEmpty(object, object)
0x625: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x626: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x627: Call2 0xf40

0x628: Pop(2)
0x629: Push((int) 28512)
0x62a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62b: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x62c: PushEmpty(string)
0x62d: Stack[-1] = "Neutral"
0x62e: Call2 0x600

0x62f: Pop(1)
0x630: Push((int) 527204)
0x631: @@ SetMessage(Stack[-1])
0x632: Pop(1)
0x633: @@ ClearReplies()
0x634: Pop(0)
0x635: PushEmpty(bool, object)
0x636: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x637: Call2 0x10a7

0x638: Pop(1)
0x639: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63a: Push((int) 527205)
0x63b: Push((int) 28514)
0x63c: Push((int) 28513)
0x63d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63e: Pop(3)
0x63f: Push((int) 527210)
0x640: Push((int) -1)
0x641: Push((int) 28518)
0x642: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x643: Pop(3)
0x644: Push((int) 527533)
0x645: Push((int) -1)
0x646: Push((int) 28871)
0x647: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x648: Pop(3)
0x649: Return(); Pop(0)

0x64a: Push((int) 28514)
0x64b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x64c: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x64d: PushEmpty(string)
0x64e: Stack[-1] = "Sorrow"
0x64f: Call2 0x600

0x650: Pop(1)
0x651: Push((int) 527206)
0x652: @@ SetMessage(Stack[-1])
0x653: Pop(1)
0x654: @@ ClearReplies()
0x655: Pop(0)
0x656: Push((int) 527207)
0x657: Push((int) 28516)
0x658: Push((int) 28515)
0x659: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65a: Pop(3)
0x65b: Return(); Pop(0)

0x65c: Push((int) 28516)
0x65d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x65e: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x65f: PushEmpty(string)
0x660: Stack[-1] = "Doubt"
0x661: Call2 0x600

0x662: Pop(1)
0x663: Push((int) 527208)
0x664: @@ SetMessage(Stack[-1])
0x665: Pop(1)
0x666: @@ ClearReplies()
0x667: Pop(0)
0x668: Push((int) 527534)
0x669: Push((int) 28874)
0x66a: Push((int) 28872)
0x66b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66c: Pop(3)
0x66d: Push((int) 527535)
0x66e: Push((int) 28874)
0x66f: Push((int) 28873)
0x670: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x671: Pop(3)
0x672: Return(); Pop(0)

0x673: Push((int) 28874)
0x674: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x675: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x676: PushEmpty(string)
0x677: Stack[-1] = "Doubt"
0x678: Call2 0x600

0x679: Pop(1)
0x67a: Push((int) 527536)
0x67b: @@ SetMessage(Stack[-1])
0x67c: Pop(1)
0x67d: @@ ClearReplies()
0x67e: Pop(0)
0x67f: Push((int) 527537)
0x680: Push((int) 28876)
0x681: Push((int) 28875)
0x682: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x683: Pop(3)
0x684: Push((int) 527539)
0x685: Push((int) 28876)
0x686: Push((int) 28878)
0x687: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x688: Pop(3)
0x689: Return(); Pop(0)

0x68a: Push((int) 28876)
0x68b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x68c: IF (Stack[-1] == 0) GOTO 0x69c; Pop(1)

0x68d: PushEmpty(string)
0x68e: Stack[-1] = "Doubt"
0x68f: Call2 0x600

0x690: Pop(1)
0x691: Push((int) 527538)
0x692: @@ SetMessage(Stack[-1])
0x693: Pop(1)
0x694: @@ ClearReplies()
0x695: Pop(0)
0x696: Push((int) 527540)
0x697: Push((int) 28881)
0x698: Push((int) 28880)
0x699: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69a: Pop(3)
0x69b: Return(); Pop(0)

0x69c: Push((int) 28881)
0x69d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69e: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x69f: PushEmpty(string)
0x6a0: Stack[-1] = "Sorrow"
0x6a1: Call2 0x600

0x6a2: Pop(1)
0x6a3: Push((int) 527541)
0x6a4: @@ SetMessage(Stack[-1])
0x6a5: Pop(1)
0x6a6: @@ ClearReplies()
0x6a7: Pop(0)
0x6a8: Push((int) 527542)
0x6a9: Push((int) 28883)
0x6aa: Push((int) 28882)
0x6ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ac: Pop(3)
0x6ad: Return(); Pop(0)

0x6ae: Push((int) 28883)
0x6af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b0: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6b1: PushEmpty(string)
0x6b2: Stack[-1] = "Sorrow"
0x6b3: Call2 0x600

0x6b4: Pop(1)
0x6b5: Push((int) 527543)
0x6b6: @@ SetMessage(Stack[-1])
0x6b7: Pop(1)
0x6b8: @@ ClearReplies()
0x6b9: Pop(0)
0x6ba: Push((int) 527209)
0x6bb: Push((int) 28884)
0x6bc: Push((int) 28517)
0x6bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6be: Pop(3)
0x6bf: Push((int) 527546)
0x6c0: Push((int) 28884)
0x6c1: Push((int) 28886)
0x6c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c3: Pop(3)
0x6c4: Return(); Pop(0)

0x6c5: Push((int) 28884)
0x6c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c7: IF (Stack[-1] == 0) GOTO 0x6d7; Pop(1)

0x6c8: PushEmpty(string)
0x6c9: Stack[-1] = "Smile"
0x6ca: Call2 0x600

0x6cb: Pop(1)
0x6cc: Push((int) 527544)
0x6cd: @@ SetMessage(Stack[-1])
0x6ce: Pop(1)
0x6cf: @@ ClearReplies()
0x6d0: Pop(0)
0x6d1: Push((int) 527545)
0x6d2: Push((int) -1)
0x6d3: Push((int) 28885)
0x6d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d5: Pop(3)
0x6d6: Return(); Pop(0)

0x6d7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6d8: PushEmpty(bool)
0x6d9: Call2 0xf2e

0x6da: Pop(0)
0x6db: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6dc: @ lshStopAnimation()
0x6dd: Pop(0)
0x6de: GOTO 0x6e1

0x6df: @ StopAnimation()
0x6e0: Pop(0)
0x6e1: Return(); Pop(0)

0x6e2: GOTO 0x617

0x6e3: Return(); Pop(0)

0x6e4: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6e5: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6e6: PushEmpty(bool, object, float)
0x6e7: Stack[-2] = Stack[-12]
0x6e8: Stack[-1] = (float) 70.0
0x6e9: Call2 0xd63

0x6ea: Pop(2)
0x6eb: Pop(1); Push((bool) Stack[-1] == 0)
0x6ec: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6ed: Stack[-10] = (int) -2
0x6ee: Return(); Pop(8)

0x6ef: @ CreateDialog(Stack[-4])
0x6f0: Pop(0)
0x6f1: PushEmpty(int)
0x6f2: Call2 0xf28

0x6f3: Pop(0)
0x6f4: @@ SetNPCName(Stack[-1])
0x6f5: Pop(1)
0x6f6: PushEmpty(int)
0x6f7: Call2 0xf26

0x6f8: Pop(0)
0x6f9: @@ SetNPCDescription(Stack[-1])
0x6fa: Pop(1)
0x6fb: PushEmpty(string)
0x6fc: Call2 0xf2a

0x6fd: Pop(0)
0x6fe: @@ SetPhoto(Stack[-1])
0x6ff: Pop(1)
0x700: PushEmpty(string)
0x701: Call2 0xf2c

0x702: Pop(0)
0x703: @@ SetPhoto2(Stack[-1])
0x704: Pop(1)
0x705: PushEmpty(int)
0x706: Call2 0x11ad

0x707: Pop(0)
0x708: @@ SetPlayerName(Stack[-1])
0x709: Pop(1)
0x70a: Stack[-2] = (int) -1
0x70b: @ IsOverrideActive(Stack[-3])
0x70c: Pop(0)
0x70d: Push(Stack[-3])
0x70e: IF (Stack[-1] == 0) GOTO 0x711; Pop(1)

0x70f: Stack[-10] = (int) -2
0x710: Return(); Pop(8)

0x711: @ DoDialog(Stack[-4])
0x712: Pop(0)
0x713: PushEmpty(bool, object)
0x714: PushEmpty(object)
0x715: Call2 0xe77

0x716: Stack[-2] = Stack[-1]
0x717: Pop(1)
0x718: Call2 0xdb8

0x719: Pop(2)
0x71a: PushEmpty(object, object)
0x71b: Stack[-2] = Stack[-11]
0x71c: Stack[-1] = Stack[-6]
0x71d: Push(-2, 4); TaskCall(9)
0x71e: Call2 0x735

0x71f: Pop(-2, 4); TaskReturn
0x720: Pop(2)
0x721: @@ IsDialogEnd(Stack[-1])
0x722: Pop(0)
0x723: Pop(0); Push((bool) Stack[-1] == 0)
0x724: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x725: @ sync()
0x726: Pop(0)
0x727: @@ IsDialogEnd(Stack[-1])
0x728: Pop(0)
0x729: GOTO 0x723

0x72a: PushEmpty(object)
0x72b: Stack[-1] = Stack[-10]
0x72c: Call2 0xda7

0x72d: Pop(1)
0x72e: @ StopDialog(Stack[-4])
0x72f: Pop(0)
0x730: @@ GetReturnValue(Stack[-2])
0x731: Pop(0)
0x732: Stack[-10] = Stack[-2]
0x733: Return(); Pop(8)

0x734: Stack[-4] = 0
0x735: PushEmpty()
0x736: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x737: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x738: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x739: Push((int) 1)
0x73a: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x73b: PushEmpty(string)
0x73c: Stack[-1] = "Neutral"
0x73d: Call2 0x782

0x73e: Pop(1)
0x73f: Push((int) 524702)
0x740: @@ SetMessage(Stack[-1])
0x741: Pop(1)
0x742: @@ ClearReplies()
0x743: Pop(0)
0x744: PushEmpty(bool)
0x745: Stack[-1] = (bool) 0
0x746: PushEmpty(bool, object)
0x747: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x748: Call2 0x1030

0x749: Pop(1)
0x74a: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x74b: PushEmpty(bool, object)
0x74c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74d: Call2 0x103c

0x74e: Pop(1)
0x74f: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x750: Stack[-1] = (bool) 1
0x751: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x752: Push((int) 524703)
0x753: Push((int) 28087)
0x754: Push((int) 26042)
0x755: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x756: Pop(3)
0x757: Push((int) 524704)
0x758: Push((int) -1)
0x759: Push((int) 26043)
0x75a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75b: Pop(3)
0x75c: Push((int) 541803)
0x75d: Push((int) -1)
0x75e: Push((int) 44015)
0x75f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x760: Pop(3)
0x761: GOTO 0x764

0x762: Return(); Pop(0)

0x763: GOTO 0x739

0x764: PushEmpty(bool)
0x765: Call2 0xf2e

0x766: Pop(0)
0x767: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x768: @ lshWaitForAnimEnd()
0x769: Pop(0)
0x76a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x76b: IF (Stack[-1] == 0) GOTO 0x76d; Pop(1)

0x76c: GOTO 0x772

0x76d: PushEmpty(string)
0x76e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76f: Call2 0xe42

0x770: Pop(1)
0x771: GOTO 0x768

0x772: GOTO 0x781

0x773: Push("all")
0x774: Push("idle")
0x775: @ PlayAnimation(Stack[-2], Stack[-1])
0x776: Pop(2)
0x777: @ WaitForAnimEnd()
0x778: Pop(0)
0x779: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77a: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x77b: GOTO 0x781

0x77c: Push("all")
0x77d: Push("idle")
0x77e: @ PlayAnimation(Stack[-2], Stack[-1])
0x77f: Pop(2)
0x780: GOTO 0x777

0x781: Return(); Pop(0)

0x782: PushEmpty()
0x783: PushEmpty(bool)
0x784: Call2 0xf2e

0x785: Pop(0)
0x786: Pop(1); Push((bool) Stack[-1] == 0)
0x787: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x788: Return(); Pop(0)

0x789: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x78a: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x78b: Return(); Pop(0)

0x78c: PushEmpty(string, bool)
0x78d: Stack[-2] = Stack[-3]
0x78e: Push("")
0x78f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x790: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x791: Stack[-1] = (bool) 0
0x792: GOTO 0x794

0x793: Stack[-1] = (bool) 1
0x794: Call2 0xe52

0x795: Pop(2)
0x796: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x797: Return(); Pop(0)

0x798: PushEmpty()
0x799: Push((int) 1)
0x79a: IF (Stack[-1] == 0) GOTO 0x8a2; Pop(1)

0x79b: PushEmpty()
0x79c: Call2 0xe70

0x79d: Pop(0)
0x79e: Push((int) 26042)
0x79f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7a0: IF (Stack[-1] == 0) GOTO 0x7a6; Pop(1)

0x7a1: PushEmpty(object, object)
0x7a2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7a4: Call2 0xf47

0x7a5: Pop(2)
0x7a6: Push((int) 26045)
0x7a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7a8: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7a9: PushEmpty(object, object)
0x7aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7ac: Call2 0xf4d

0x7ad: Pop(2)
0x7ae: Push((int) 44014)
0x7af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b6; Pop(1)

0x7b1: PushEmpty(object, object)
0x7b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7b4: Call2 0xf4d

0x7b5: Pop(2)
0x7b6: Push((int) 44013)
0x7b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b8: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7b9: PushEmpty(object, object)
0x7ba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7bc: Call2 0xf4d

0x7bd: Pop(2)
0x7be: Push((int) 26041)
0x7bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c0: IF (Stack[-1] == 0) GOTO 0x7e8; Pop(1)

0x7c1: PushEmpty(string)
0x7c2: Stack[-1] = "Neutral"
0x7c3: Call2 0x782

0x7c4: Pop(1)
0x7c5: Push((int) 524702)
0x7c6: @@ SetMessage(Stack[-1])
0x7c7: Pop(1)
0x7c8: @@ ClearReplies()
0x7c9: Pop(0)
0x7ca: PushEmpty(bool)
0x7cb: Stack[-1] = (bool) 0
0x7cc: PushEmpty(bool, object)
0x7cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ce: Call2 0x1030

0x7cf: Pop(1)
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7d1: PushEmpty(bool, object)
0x7d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d3: Call2 0x103c

0x7d4: Pop(1)
0x7d5: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7d6: Stack[-1] = (bool) 1
0x7d7: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7d8: Push((int) 524703)
0x7d9: Push((int) 28087)
0x7da: Push((int) 26042)
0x7db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7dc: Pop(3)
0x7dd: Push((int) 524704)
0x7de: Push((int) -1)
0x7df: Push((int) 26043)
0x7e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e1: Pop(3)
0x7e2: Push((int) 541803)
0x7e3: Push((int) -1)
0x7e4: Push((int) 44015)
0x7e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e6: Pop(3)
0x7e7: Return(); Pop(0)

0x7e8: Push((int) 28087)
0x7e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ea: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7eb: PushEmpty(string)
0x7ec: Stack[-1] = "Doubt"
0x7ed: Call2 0x782

0x7ee: Pop(1)
0x7ef: Push((int) 526807)
0x7f0: @@ SetMessage(Stack[-1])
0x7f1: Pop(1)
0x7f2: @@ ClearReplies()
0x7f3: Pop(0)
0x7f4: Push((int) 526808)
0x7f5: Push((int) 28089)
0x7f6: Push((int) 28088)
0x7f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f8: Pop(3)
0x7f9: Push((int) 541797)
0x7fa: Push((int) 28092)
0x7fb: Push((int) 44007)
0x7fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fd: Pop(3)
0x7fe: Return(); Pop(0)

0x7ff: Push((int) 28089)
0x800: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x801: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x802: PushEmpty(string)
0x803: Stack[-1] = "Doubt"
0x804: Call2 0x782

0x805: Pop(1)
0x806: Push((int) 526809)
0x807: @@ SetMessage(Stack[-1])
0x808: Pop(1)
0x809: @@ ClearReplies()
0x80a: Pop(0)
0x80b: Push((int) 526810)
0x80c: Push((int) 26044)
0x80d: Push((int) 28090)
0x80e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80f: Pop(3)
0x810: Push((int) 526811)
0x811: Push((int) 28092)
0x812: Push((int) 28091)
0x813: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x814: Pop(3)
0x815: Return(); Pop(0)

0x816: Push((int) 28092)
0x817: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x818: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x819: PushEmpty(string)
0x81a: Stack[-1] = "Agression"
0x81b: Call2 0x782

0x81c: Pop(1)
0x81d: Push((int) 526812)
0x81e: @@ SetMessage(Stack[-1])
0x81f: Pop(1)
0x820: @@ ClearReplies()
0x821: Pop(0)
0x822: Push((int) 526813)
0x823: Push((int) 28095)
0x824: Push((int) 28093)
0x825: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x826: Pop(3)
0x827: Push((int) 526814)
0x828: Push((int) 28095)
0x829: Push((int) 28094)
0x82a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82b: Pop(3)
0x82c: Return(); Pop(0)

0x82d: Push((int) 28095)
0x82e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82f: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x830: PushEmpty(string)
0x831: Stack[-1] = "Agression"
0x832: Call2 0x782

0x833: Pop(1)
0x834: Push((int) 526815)
0x835: @@ SetMessage(Stack[-1])
0x836: Pop(1)
0x837: @@ ClearReplies()
0x838: Pop(0)
0x839: Push((int) 526816)
0x83a: Push((int) 26044)
0x83b: Push((int) 28097)
0x83c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83d: Pop(3)
0x83e: Return(); Pop(0)

0x83f: Push((int) 26044)
0x840: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x841: IF (Stack[-1] == 0) GOTO 0x851; Pop(1)

0x842: PushEmpty(string)
0x843: Stack[-1] = "Doubt"
0x844: Call2 0x782

0x845: Pop(1)
0x846: Push((int) 524705)
0x847: @@ SetMessage(Stack[-1])
0x848: Pop(1)
0x849: @@ ClearReplies()
0x84a: Pop(0)
0x84b: Push((int) 541798)
0x84c: Push((int) 44010)
0x84d: Push((int) 44009)
0x84e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84f: Pop(3)
0x850: Return(); Pop(0)

0x851: Push((int) 44010)
0x852: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x853: IF (Stack[-1] == 0) GOTO 0x868; Pop(1)

0x854: PushEmpty(string)
0x855: Stack[-1] = "Agression"
0x856: Call2 0x782

0x857: Pop(1)
0x858: Push((int) 541799)
0x859: @@ SetMessage(Stack[-1])
0x85a: Pop(1)
0x85b: @@ ClearReplies()
0x85c: Pop(0)
0x85d: Push((int) 526817)
0x85e: Push((int) 28100)
0x85f: Push((int) 28099)
0x860: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x861: Pop(3)
0x862: Push((int) 541800)
0x863: Push((int) 28102)
0x864: Push((int) 44011)
0x865: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x866: Pop(3)
0x867: Return(); Pop(0)

0x868: Push((int) 28100)
0x869: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x86a: IF (Stack[-1] == 0) GOTO 0x87f; Pop(1)

0x86b: PushEmpty(string)
0x86c: Stack[-1] = "Neutral"
0x86d: Call2 0x782

0x86e: Pop(1)
0x86f: Push((int) 526818)
0x870: @@ SetMessage(Stack[-1])
0x871: Pop(1)
0x872: @@ ClearReplies()
0x873: Pop(0)
0x874: Push((int) 526819)
0x875: Push((int) 28102)
0x876: Push((int) 28101)
0x877: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x878: Pop(3)
0x879: Push((int) 541801)
0x87a: Push((int) -1)
0x87b: Push((int) 44013)
0x87c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87d: Pop(3)
0x87e: Return(); Pop(0)

0x87f: Push((int) 28102)
0x880: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x881: IF (Stack[-1] == 0) GOTO 0x896; Pop(1)

0x882: PushEmpty(string)
0x883: Stack[-1] = "Agression"
0x884: Call2 0x782

0x885: Pop(1)
0x886: Push((int) 526820)
0x887: @@ SetMessage(Stack[-1])
0x888: Pop(1)
0x889: @@ ClearReplies()
0x88a: Pop(0)
0x88b: Push((int) 524706)
0x88c: Push((int) -1)
0x88d: Push((int) 26045)
0x88e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88f: Pop(3)
0x890: Push((int) 541802)
0x891: Push((int) -1)
0x892: Push((int) 44014)
0x893: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x894: Pop(3)
0x895: Return(); Pop(0)

0x896: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x897: PushEmpty(bool)
0x898: Call2 0xf2e

0x899: Pop(0)
0x89a: IF (Stack[-1] == 0) GOTO 0x89e; Pop(1)

0x89b: @ lshStopAnimation()
0x89c: Pop(0)
0x89d: GOTO 0x8a0

0x89e: @ StopAnimation()
0x89f: Pop(0)
0x8a0: Return(); Pop(0)

0x8a1: GOTO 0x799

0x8a2: Return(); Pop(0)

0x8a3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x8a4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x8a5: PushEmpty(bool, object, float)
0x8a6: Stack[-2] = Stack[-12]
0x8a7: Stack[-1] = (float) 70.0
0x8a8: Call2 0xd63

0x8a9: Pop(2)
0x8aa: Pop(1); Push((bool) Stack[-1] == 0)
0x8ab: IF (Stack[-1] == 0) GOTO 0x8ae; Pop(1)

0x8ac: Stack[-10] = (int) -2
0x8ad: Return(); Pop(8)

0x8ae: @ CreateDialog(Stack[-4])
0x8af: Pop(0)
0x8b0: PushEmpty(int)
0x8b1: Call2 0xf28

0x8b2: Pop(0)
0x8b3: @@ SetNPCName(Stack[-1])
0x8b4: Pop(1)
0x8b5: PushEmpty(int)
0x8b6: Call2 0xf26

0x8b7: Pop(0)
0x8b8: @@ SetNPCDescription(Stack[-1])
0x8b9: Pop(1)
0x8ba: PushEmpty(string)
0x8bb: Call2 0xf2a

0x8bc: Pop(0)
0x8bd: @@ SetPhoto(Stack[-1])
0x8be: Pop(1)
0x8bf: PushEmpty(string)
0x8c0: Call2 0xf2c

0x8c1: Pop(0)
0x8c2: @@ SetPhoto2(Stack[-1])
0x8c3: Pop(1)
0x8c4: PushEmpty(int)
0x8c5: Call2 0x11ad

0x8c6: Pop(0)
0x8c7: @@ SetPlayerName(Stack[-1])
0x8c8: Pop(1)
0x8c9: Stack[-2] = (int) -1
0x8ca: @ IsOverrideActive(Stack[-3])
0x8cb: Pop(0)
0x8cc: Push(Stack[-3])
0x8cd: IF (Stack[-1] == 0) GOTO 0x8d0; Pop(1)

0x8ce: Stack[-10] = (int) -2
0x8cf: Return(); Pop(8)

0x8d0: @ DoDialog(Stack[-4])
0x8d1: Pop(0)
0x8d2: PushEmpty(bool, object)
0x8d3: PushEmpty(object)
0x8d4: Call2 0xe77

0x8d5: Stack[-2] = Stack[-1]
0x8d6: Pop(1)
0x8d7: Call2 0xdb8

0x8d8: Pop(2)
0x8d9: PushEmpty(object, object)
0x8da: Stack[-2] = Stack[-11]
0x8db: Stack[-1] = Stack[-6]
0x8dc: Push(-2, 4); TaskCall(11)
0x8dd: Call2 0x8f4

0x8de: Pop(-2, 4); TaskReturn
0x8df: Pop(2)
0x8e0: @@ IsDialogEnd(Stack[-1])
0x8e1: Pop(0)
0x8e2: Pop(0); Push((bool) Stack[-1] == 0)
0x8e3: IF (Stack[-1] == 0) GOTO 0x8e9; Pop(1)

0x8e4: @ sync()
0x8e5: Pop(0)
0x8e6: @@ IsDialogEnd(Stack[-1])
0x8e7: Pop(0)
0x8e8: GOTO 0x8e2

0x8e9: PushEmpty(object)
0x8ea: Stack[-1] = Stack[-10]
0x8eb: Call2 0xda7

0x8ec: Pop(1)
0x8ed: @ StopDialog(Stack[-4])
0x8ee: Pop(0)
0x8ef: @@ GetReturnValue(Stack[-2])
0x8f0: Pop(0)
0x8f1: Stack[-10] = Stack[-2]
0x8f2: Return(); Pop(8)

0x8f3: Stack[-4] = 0
0x8f4: PushEmpty()
0x8f5: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x8f6: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x8f7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8f8: Push((int) 1)
0x8f9: IF (Stack[-1] == 0) GOTO 0x95b; Pop(1)

0x8fa: PushEmpty(bool)
0x8fb: Stack[-1] = (bool) 0
0x8fc: PushEmpty(bool, object)
0x8fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8fe: Call2 0x10cb

0x8ff: Pop(1)
0x900: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x901: PushEmpty(bool, object)
0x902: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x903: Call2 0x1024

0x904: Pop(1)
0x905: Pop(1); Push((bool) Stack[-1] == 0)
0x906: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x907: Stack[-1] = (bool) 1
0x908: IF (Stack[-1] == 0) GOTO 0x927; Pop(1)

0x909: PushEmpty(object, object)
0x90a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x90b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x90c: Call2 0xff5

0x90d: Pop(2)
0x90e: PushEmpty(object, object)
0x90f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x910: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x911: Call2 0x1014

0x912: Pop(2)
0x913: PushEmpty(string)
0x914: Stack[-1] = "Neutral"
0x915: Call2 0x979

0x916: Pop(1)
0x917: Push((int) 539318)
0x918: @@ SetMessage(Stack[-1])
0x919: Pop(1)
0x91a: @@ ClearReplies()
0x91b: Pop(0)
0x91c: Push((int) 541446)
0x91d: Push((int) 45384)
0x91e: Push((int) 43602)
0x91f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x920: Pop(3)
0x921: Push((int) 542944)
0x922: Push((int) 45384)
0x923: Push((int) 45383)
0x924: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x925: Pop(3)
0x926: GOTO 0x95b

0x927: PushEmpty(object, object)
0x928: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x929: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x92a: Call2 0x1014

0x92b: Pop(2)
0x92c: PushEmpty(string)
0x92d: Stack[-1] = "Neutral"
0x92e: Call2 0x979

0x92f: Pop(1)
0x930: Push((int) 539331)
0x931: @@ SetMessage(Stack[-1])
0x932: Pop(1)
0x933: @@ ClearReplies()
0x934: Pop(0)
0x935: PushEmpty(bool)
0x936: Stack[-1] = (bool) 0
0x937: PushEmpty(bool)
0x938: Stack[-1] = (bool) 0
0x939: PushEmpty(bool, object)
0x93a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x93b: Call2 0x101a

0x93c: Pop(1)
0x93d: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x93e: PushEmpty(bool, object)
0x93f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x940: Call2 0x10bf

0x941: Pop(1)
0x942: Pop(1); Push((bool) Stack[-1] == 0)
0x943: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x944: Stack[-1] = (bool) 1
0x945: IF (Stack[-1] == 0) GOTO 0x94d; Pop(1)

0x946: PushEmpty(bool, object)
0x947: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x948: Call2 0x1024

0x949: Pop(1)
0x94a: Pop(1); Push((bool) Stack[-1] == 0)
0x94b: IF (Stack[-1] == 0) GOTO 0x94d; Pop(1)

0x94c: Stack[-1] = (bool) 1
0x94d: IF (Stack[-1] == 0) GOTO 0x953; Pop(1)

0x94e: Push((int) 539332)
0x94f: Push((int) 41277)
0x950: Push((int) 41276)
0x951: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x952: Pop(3)
0x953: Push((int) 539335)
0x954: Push((int) -1)
0x955: Push((int) 41279)
0x956: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x957: Pop(3)
0x958: GOTO 0x95b

0x959: Return(); Pop(0)

0x95a: GOTO 0x8f8

0x95b: PushEmpty(bool)
0x95c: Call2 0xf2e

0x95d: Pop(0)
0x95e: IF (Stack[-1] == 0) GOTO 0x96a; Pop(1)

0x95f: @ lshWaitForAnimEnd()
0x960: Pop(0)
0x961: Push( Stack[3 + Tasks[-1].StackPointer] )
0x962: IF (Stack[-1] == 0) GOTO 0x964; Pop(1)

0x963: GOTO 0x969

0x964: PushEmpty(string)
0x965: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x966: Call2 0xe42

0x967: Pop(1)
0x968: GOTO 0x95f

0x969: GOTO 0x978

0x96a: Push("all")
0x96b: Push("idle")
0x96c: @ PlayAnimation(Stack[-2], Stack[-1])
0x96d: Pop(2)
0x96e: @ WaitForAnimEnd()
0x96f: Pop(0)
0x970: Push( Stack[3 + Tasks[-1].StackPointer] )
0x971: IF (Stack[-1] == 0) GOTO 0x973; Pop(1)

0x972: GOTO 0x978

0x973: Push("all")
0x974: Push("idle")
0x975: @ PlayAnimation(Stack[-2], Stack[-1])
0x976: Pop(2)
0x977: GOTO 0x96e

0x978: Return(); Pop(0)

0x979: PushEmpty()
0x97a: PushEmpty(bool)
0x97b: Call2 0xf2e

0x97c: Pop(0)
0x97d: Pop(1); Push((bool) Stack[-1] == 0)
0x97e: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x97f: Return(); Pop(0)

0x980: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x981: IF (Stack[-1] == 0) GOTO 0x983; Pop(1)

0x982: Return(); Pop(0)

0x983: PushEmpty(string, bool)
0x984: Stack[-2] = Stack[-3]
0x985: Push("")
0x986: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x987: IF (Stack[-1] == 0) GOTO 0x98a; Pop(1)

0x988: Stack[-1] = (bool) 0
0x989: GOTO 0x98b

0x98a: Stack[-1] = (bool) 1
0x98b: Call2 0xe52

0x98c: Pop(2)
0x98d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x98e: Return(); Pop(0)

0x98f: PushEmpty()
0x990: Push((int) 1)
0x991: IF (Stack[-1] == 0) GOTO 0xb70; Pop(1)

0x992: PushEmpty()
0x993: Call2 0xe70

0x994: Pop(0)
0x995: Push((int) 41268)
0x996: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x997: IF (Stack[-1] == 0) GOTO 0x99d; Pop(1)

0x998: PushEmpty(object, object)
0x999: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x99a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x99b: Call2 0x1004

0x99c: Pop(2)
0x99d: Push((int) 41271)
0x99e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x99f: IF (Stack[-1] == 0) GOTO 0x9a5; Pop(1)

0x9a0: PushEmpty(object, object)
0x9a1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9a2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9a3: Call2 0xffb

0x9a4: Pop(2)
0x9a5: Push((int) 41278)
0x9a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9a7: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x9a8: PushEmpty(object, object)
0x9a9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9aa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9ab: Call2 0xffb

0x9ac: Pop(2)
0x9ad: Push((int) 41261)
0x9ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9af: IF (Stack[-1] == 0) GOTO 0xa0f; Pop(1)

0x9b0: PushEmpty(bool)
0x9b1: Stack[-1] = (bool) 0
0x9b2: PushEmpty(bool, object)
0x9b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b4: Call2 0x10cb

0x9b5: Pop(1)
0x9b6: IF (Stack[-1] == 0) GOTO 0x9be; Pop(1)

0x9b7: PushEmpty(bool, object)
0x9b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b9: Call2 0x1024

0x9ba: Pop(1)
0x9bb: Pop(1); Push((bool) Stack[-1] == 0)
0x9bc: IF (Stack[-1] == 0) GOTO 0x9be; Pop(1)

0x9bd: Stack[-1] = (bool) 1
0x9be: IF (Stack[-1] == 0) GOTO 0x9dd; Pop(1)

0x9bf: PushEmpty(object, object)
0x9c0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9c2: Call2 0xff5

0x9c3: Pop(2)
0x9c4: PushEmpty(object, object)
0x9c5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9c7: Call2 0x1014

0x9c8: Pop(2)
0x9c9: PushEmpty(string)
0x9ca: Stack[-1] = "Neutral"
0x9cb: Call2 0x979

0x9cc: Pop(1)
0x9cd: Push((int) 539318)
0x9ce: @@ SetMessage(Stack[-1])
0x9cf: Pop(1)
0x9d0: @@ ClearReplies()
0x9d1: Pop(0)
0x9d2: Push((int) 541446)
0x9d3: Push((int) 45384)
0x9d4: Push((int) 43602)
0x9d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d6: Pop(3)
0x9d7: Push((int) 542944)
0x9d8: Push((int) 45384)
0x9d9: Push((int) 45383)
0x9da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9db: Pop(3)
0x9dc: Return(); Pop(0)

0x9dd: PushEmpty(object, object)
0x9de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9e0: Call2 0x1014

0x9e1: Pop(2)
0x9e2: PushEmpty(string)
0x9e3: Stack[-1] = "Neutral"
0x9e4: Call2 0x979

0x9e5: Pop(1)
0x9e6: Push((int) 539331)
0x9e7: @@ SetMessage(Stack[-1])
0x9e8: Pop(1)
0x9e9: @@ ClearReplies()
0x9ea: Pop(0)
0x9eb: PushEmpty(bool)
0x9ec: Stack[-1] = (bool) 0
0x9ed: PushEmpty(bool)
0x9ee: Stack[-1] = (bool) 0
0x9ef: PushEmpty(bool, object)
0x9f0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f1: Call2 0x101a

0x9f2: Pop(1)
0x9f3: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9f4: PushEmpty(bool, object)
0x9f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f6: Call2 0x10bf

0x9f7: Pop(1)
0x9f8: Pop(1); Push((bool) Stack[-1] == 0)
0x9f9: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9fa: Stack[-1] = (bool) 1
0x9fb: IF (Stack[-1] == 0) GOTO 0xa03; Pop(1)

0x9fc: PushEmpty(bool, object)
0x9fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9fe: Call2 0x1024

0x9ff: Pop(1)
0xa00: Pop(1); Push((bool) Stack[-1] == 0)
0xa01: IF (Stack[-1] == 0) GOTO 0xa03; Pop(1)

0xa02: Stack[-1] = (bool) 1
0xa03: IF (Stack[-1] == 0) GOTO 0xa09; Pop(1)

0xa04: Push((int) 539332)
0xa05: Push((int) 41277)
0xa06: Push((int) 41276)
0xa07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa08: Pop(3)
0xa09: Push((int) 539335)
0xa0a: Push((int) -1)
0xa0b: Push((int) 41279)
0xa0c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0d: Pop(3)
0xa0e: Return(); Pop(0)

0xa0f: Push((int) 41277)
0xa10: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa11: IF (Stack[-1] == 0) GOTO 0xa21; Pop(1)

0xa12: PushEmpty(string)
0xa13: Stack[-1] = "Doubt"
0xa14: Call2 0x979

0xa15: Pop(1)
0xa16: Push((int) 539333)
0xa17: @@ SetMessage(Stack[-1])
0xa18: Pop(1)
0xa19: @@ ClearReplies()
0xa1a: Pop(0)
0xa1b: Push((int) 539334)
0xa1c: Push((int) -1)
0xa1d: Push((int) 41278)
0xa1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1f: Pop(3)
0xa20: Return(); Pop(0)

0xa21: Push((int) 45384)
0xa22: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa23: IF (Stack[-1] == 0) GOTO 0xa33; Pop(1)

0xa24: PushEmpty(string)
0xa25: Stack[-1] = "Sorrow"
0xa26: Call2 0x979

0xa27: Pop(1)
0xa28: Push((int) 542945)
0xa29: @@ SetMessage(Stack[-1])
0xa2a: Pop(1)
0xa2b: @@ ClearReplies()
0xa2c: Pop(0)
0xa2d: Push((int) 542946)
0xa2e: Push((int) 45386)
0xa2f: Push((int) 45385)
0xa30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa31: Pop(3)
0xa32: Return(); Pop(0)

0xa33: Push((int) 45386)
0xa34: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa35: IF (Stack[-1] == 0) GOTO 0xa59; Pop(1)

0xa36: PushEmpty(string)
0xa37: Stack[-1] = "Smile"
0xa38: Call2 0x979

0xa39: Pop(1)
0xa3a: Push((int) 542947)
0xa3b: @@ SetMessage(Stack[-1])
0xa3c: Pop(1)
0xa3d: @@ ClearReplies()
0xa3e: Pop(0)
0xa3f: PushEmpty(bool, object)
0xa40: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa41: Call2 0x1048

0xa42: Pop(1)
0xa43: IF (Stack[-1] == 0) GOTO 0xa49; Pop(1)

0xa44: Push((int) 542955)
0xa45: Push((int) 45398)
0xa46: Push((int) 45395)
0xa47: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa48: Pop(3)
0xa49: PushEmpty(bool, object)
0xa4a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4b: Call2 0x10b3

0xa4c: Pop(1)
0xa4d: IF (Stack[-1] == 0) GOTO 0xa53; Pop(1)

0xa4e: Push((int) 542957)
0xa4f: Push((int) 45396)
0xa50: Push((int) 45397)
0xa51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa52: Pop(3)
0xa53: Push((int) 542951)
0xa54: Push((int) 45402)
0xa55: Push((int) 45391)
0xa56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa57: Pop(3)
0xa58: Return(); Pop(0)

0xa59: Push((int) 45402)
0xa5a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa5b: IF (Stack[-1] == 0) GOTO 0xa70; Pop(1)

0xa5c: PushEmpty(string)
0xa5d: Stack[-1] = "Neutral"
0xa5e: Call2 0x979

0xa5f: Pop(1)
0xa60: Push((int) 542961)
0xa61: @@ SetMessage(Stack[-1])
0xa62: Pop(1)
0xa63: @@ ClearReplies()
0xa64: Pop(0)
0xa65: Push((int) 542962)
0xa66: Push((int) 43611)
0xa67: Push((int) 45403)
0xa68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa69: Pop(3)
0xa6a: Push((int) 542963)
0xa6b: Push((int) -1)
0xa6c: Push((int) 45404)
0xa6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6e: Pop(3)
0xa6f: Return(); Pop(0)

0xa70: Push((int) 45396)
0xa71: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa72: IF (Stack[-1] == 0) GOTO 0xa82; Pop(1)

0xa73: PushEmpty(string)
0xa74: Stack[-1] = "Doubt"
0xa75: Call2 0x979

0xa76: Pop(1)
0xa77: Push((int) 542956)
0xa78: @@ SetMessage(Stack[-1])
0xa79: Pop(1)
0xa7a: @@ ClearReplies()
0xa7b: Pop(0)
0xa7c: Push((int) 542960)
0xa7d: Push((int) 45392)
0xa7e: Push((int) 45401)
0xa7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa80: Pop(3)
0xa81: Return(); Pop(0)

0xa82: Push((int) 45392)
0xa83: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa84: IF (Stack[-1] == 0) GOTO 0xa94; Pop(1)

0xa85: PushEmpty(string)
0xa86: Stack[-1] = "Doubt"
0xa87: Call2 0x979

0xa88: Pop(1)
0xa89: Push((int) 542952)
0xa8a: @@ SetMessage(Stack[-1])
0xa8b: Pop(1)
0xa8c: @@ ClearReplies()
0xa8d: Pop(0)
0xa8e: Push((int) 542953)
0xa8f: Push((int) 45394)
0xa90: Push((int) 45393)
0xa91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa92: Pop(3)
0xa93: Return(); Pop(0)

0xa94: Push((int) 45394)
0xa95: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa96: IF (Stack[-1] == 0) GOTO 0xaab; Pop(1)

0xa97: PushEmpty(string)
0xa98: Stack[-1] = "Sorrow"
0xa99: Call2 0x979

0xa9a: Pop(1)
0xa9b: Push((int) 542954)
0xa9c: @@ SetMessage(Stack[-1])
0xa9d: Pop(1)
0xa9e: @@ ClearReplies()
0xa9f: Pop(0)
0xaa0: Push((int) 542948)
0xaa1: Push((int) 45388)
0xaa2: Push((int) 45387)
0xaa3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa4: Pop(3)
0xaa5: Push((int) 542964)
0xaa6: Push((int) 45406)
0xaa7: Push((int) 45405)
0xaa8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa9: Pop(3)
0xaaa: Return(); Pop(0)

0xaab: Push((int) 45388)
0xaac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaad: IF (Stack[-1] == 0) GOTO 0xabd; Pop(1)

0xaae: PushEmpty(string)
0xaaf: Stack[-1] = "Sorrow"
0xab0: Call2 0x979

0xab1: Pop(1)
0xab2: Push((int) 542949)
0xab3: @@ SetMessage(Stack[-1])
0xab4: Pop(1)
0xab5: @@ ClearReplies()
0xab6: Pop(0)
0xab7: Push((int) 542950)
0xab8: Push((int) 45406)
0xab9: Push((int) 45389)
0xaba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xabb: Pop(3)
0xabc: Return(); Pop(0)

0xabd: Push((int) 45406)
0xabe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xabf: IF (Stack[-1] == 0) GOTO 0xad4; Pop(1)

0xac0: PushEmpty(string)
0xac1: Stack[-1] = "Smile"
0xac2: Call2 0x979

0xac3: Pop(1)
0xac4: Push((int) 542965)
0xac5: @@ SetMessage(Stack[-1])
0xac6: Pop(1)
0xac7: @@ ClearReplies()
0xac8: Pop(0)
0xac9: Push((int) 542966)
0xaca: Push((int) 43611)
0xacb: Push((int) 45407)
0xacc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xacd: Pop(3)
0xace: Push((int) 542967)
0xacf: Push((int) 45410)
0xad0: Push((int) 45408)
0xad1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad2: Pop(3)
0xad3: Return(); Pop(0)

0xad4: Push((int) 45410)
0xad5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad6: IF (Stack[-1] == 0) GOTO 0xae6; Pop(1)

0xad7: PushEmpty(string)
0xad8: Stack[-1] = "Neutral"
0xad9: Call2 0x979

0xada: Pop(1)
0xadb: Push((int) 542968)
0xadc: @@ SetMessage(Stack[-1])
0xadd: Pop(1)
0xade: @@ ClearReplies()
0xadf: Pop(0)
0xae0: Push((int) 542969)
0xae1: Push((int) 45412)
0xae2: Push((int) 45411)
0xae3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae4: Pop(3)
0xae5: Return(); Pop(0)

0xae6: Push((int) 45412)
0xae7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae8: IF (Stack[-1] == 0) GOTO 0xaf8; Pop(1)

0xae9: PushEmpty(string)
0xaea: Stack[-1] = "Sorrow"
0xaeb: Call2 0x979

0xaec: Pop(1)
0xaed: Push((int) 542970)
0xaee: @@ SetMessage(Stack[-1])
0xaef: Pop(1)
0xaf0: @@ ClearReplies()
0xaf1: Pop(0)
0xaf2: Push((int) 542971)
0xaf3: Push((int) 43611)
0xaf4: Push((int) 45413)
0xaf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf6: Pop(3)
0xaf7: Return(); Pop(0)

0xaf8: Push((int) 43611)
0xaf9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xafa: IF (Stack[-1] == 0) GOTO 0xb0a; Pop(1)

0xafb: PushEmpty(string)
0xafc: Stack[-1] = "Neutral"
0xafd: Call2 0x979

0xafe: Pop(1)
0xaff: Push((int) 541455)
0xb00: @@ SetMessage(Stack[-1])
0xb01: Pop(1)
0xb02: @@ ClearReplies()
0xb03: Pop(0)
0xb04: Push((int) 541456)
0xb05: Push((int) 41267)
0xb06: Push((int) 43612)
0xb07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb08: Pop(3)
0xb09: Return(); Pop(0)

0xb0a: Push((int) 41267)
0xb0b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb0c: IF (Stack[-1] == 0) GOTO 0xb40; Pop(1)

0xb0d: PushEmpty(bool, object)
0xb0e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb0f: Call2 0x101a

0xb10: Pop(1)
0xb11: Pop(1); Push((bool) Stack[-1] == 0)
0xb12: IF (Stack[-1] == 0) GOTO 0xb27; Pop(1)

0xb13: PushEmpty(string)
0xb14: Stack[-1] = "Neutral"
0xb15: Call2 0x979

0xb16: Pop(1)
0xb17: Push((int) 539324)
0xb18: @@ SetMessage(Stack[-1])
0xb19: Pop(1)
0xb1a: @@ ClearReplies()
0xb1b: Pop(0)
0xb1c: Push((int) 541458)
0xb1d: Push((int) 43615)
0xb1e: Push((int) 43614)
0xb1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb20: Pop(3)
0xb21: Push((int) 541461)
0xb22: Push((int) -1)
0xb23: Push((int) 43617)
0xb24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb25: Pop(3)
0xb26: Return(); Pop(0)

0xb27: PushEmpty(bool, object)
0xb28: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb29: Call2 0x101a

0xb2a: Pop(1)
0xb2b: IF (Stack[-1] == 0) GOTO 0xb40; Pop(1)

0xb2c: PushEmpty(string)
0xb2d: Stack[-1] = "Neutral"
0xb2e: Call2 0x979

0xb2f: Pop(1)
0xb30: Push((int) 539327)
0xb31: @@ SetMessage(Stack[-1])
0xb32: Pop(1)
0xb33: @@ ClearReplies()
0xb34: Pop(0)
0xb35: Push((int) 539328)
0xb36: Push((int) -1)
0xb37: Push((int) 41271)
0xb38: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb39: Pop(3)
0xb3a: Push((int) 539329)
0xb3b: Push((int) -1)
0xb3c: Push((int) 41272)
0xb3d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb3e: Pop(3)
0xb3f: Return(); Pop(0)

0xb40: Push((int) 43615)
0xb41: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb42: IF (Stack[-1] == 0) GOTO 0xb52; Pop(1)

0xb43: PushEmpty(string)
0xb44: Stack[-1] = "Neutral"
0xb45: Call2 0x979

0xb46: Pop(1)
0xb47: Push((int) 541459)
0xb48: @@ SetMessage(Stack[-1])
0xb49: Pop(1)
0xb4a: @@ ClearReplies()
0xb4b: Pop(0)
0xb4c: Push((int) 539325)
0xb4d: Push((int) -1)
0xb4e: Push((int) 41268)
0xb4f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb50: Pop(3)
0xb51: Return(); Pop(0)

0xb52: Push((int) 45398)
0xb53: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb54: IF (Stack[-1] == 0) GOTO 0xb64; Pop(1)

0xb55: PushEmpty(string)
0xb56: Stack[-1] = "Smile"
0xb57: Call2 0x979

0xb58: Pop(1)
0xb59: Push((int) 542958)
0xb5a: @@ SetMessage(Stack[-1])
0xb5b: Pop(1)
0xb5c: @@ ClearReplies()
0xb5d: Pop(0)
0xb5e: Push((int) 542959)
0xb5f: Push((int) 45396)
0xb60: Push((int) 45399)
0xb61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb62: Pop(3)
0xb63: Return(); Pop(0)

0xb64: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb65: PushEmpty(bool)
0xb66: Call2 0xf2e

0xb67: Pop(0)
0xb68: IF (Stack[-1] == 0) GOTO 0xb6c; Pop(1)

0xb69: @ lshStopAnimation()
0xb6a: Pop(0)
0xb6b: GOTO 0xb6e

0xb6c: @ StopAnimation()
0xb6d: Pop(0)
0xb6e: Return(); Pop(0)

0xb6f: GOTO 0x990

0xb70: Return(); Pop(0)

0xb71: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xb72: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xb73: PushEmpty(bool, object, float)
0xb74: Stack[-2] = Stack[-12]
0xb75: Stack[-1] = (float) 70.0
0xb76: Call2 0xd63

0xb77: Pop(2)
0xb78: Pop(1); Push((bool) Stack[-1] == 0)
0xb79: IF (Stack[-1] == 0) GOTO 0xb7c; Pop(1)

0xb7a: Stack[-10] = (int) -2
0xb7b: Return(); Pop(8)

0xb7c: @ CreateDialog(Stack[-4])
0xb7d: Pop(0)
0xb7e: PushEmpty(int)
0xb7f: Call2 0xf28

0xb80: Pop(0)
0xb81: @@ SetNPCName(Stack[-1])
0xb82: Pop(1)
0xb83: PushEmpty(int)
0xb84: Call2 0xf26

0xb85: Pop(0)
0xb86: @@ SetNPCDescription(Stack[-1])
0xb87: Pop(1)
0xb88: PushEmpty(string)
0xb89: Call2 0xf2a

0xb8a: Pop(0)
0xb8b: @@ SetPhoto(Stack[-1])
0xb8c: Pop(1)
0xb8d: PushEmpty(string)
0xb8e: Call2 0xf2c

0xb8f: Pop(0)
0xb90: @@ SetPhoto2(Stack[-1])
0xb91: Pop(1)
0xb92: PushEmpty(int)
0xb93: Call2 0x11ad

0xb94: Pop(0)
0xb95: @@ SetPlayerName(Stack[-1])
0xb96: Pop(1)
0xb97: Stack[-2] = (int) -1
0xb98: @ IsOverrideActive(Stack[-3])
0xb99: Pop(0)
0xb9a: Push(Stack[-3])
0xb9b: IF (Stack[-1] == 0) GOTO 0xb9e; Pop(1)

0xb9c: Stack[-10] = (int) -2
0xb9d: Return(); Pop(8)

0xb9e: @ DoDialog(Stack[-4])
0xb9f: Pop(0)
0xba0: PushEmpty(bool, object)
0xba1: PushEmpty(object)
0xba2: Call2 0xe77

0xba3: Stack[-2] = Stack[-1]
0xba4: Pop(1)
0xba5: Call2 0xdb8

0xba6: Pop(2)
0xba7: PushEmpty(object, object)
0xba8: Stack[-2] = Stack[-11]
0xba9: Stack[-1] = Stack[-6]
0xbaa: Push(-2, 4); TaskCall(13)
0xbab: Call2 0xbc2

0xbac: Pop(-2, 4); TaskReturn
0xbad: Pop(2)
0xbae: @@ IsDialogEnd(Stack[-1])
0xbaf: Pop(0)
0xbb0: Pop(0); Push((bool) Stack[-1] == 0)
0xbb1: IF (Stack[-1] == 0) GOTO 0xbb7; Pop(1)

0xbb2: @ sync()
0xbb3: Pop(0)
0xbb4: @@ IsDialogEnd(Stack[-1])
0xbb5: Pop(0)
0xbb6: GOTO 0xbb0

0xbb7: PushEmpty(object)
0xbb8: Stack[-1] = Stack[-10]
0xbb9: Call2 0xda7

0xbba: Pop(1)
0xbbb: @ StopDialog(Stack[-4])
0xbbc: Pop(0)
0xbbd: @@ GetReturnValue(Stack[-2])
0xbbe: Pop(0)
0xbbf: Stack[-10] = Stack[-2]
0xbc0: Return(); Pop(8)

0xbc1: Stack[-4] = 0
0xbc2: PushEmpty()
0xbc3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xbc4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xbc5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xbc6: Push((int) 1)
0xbc7: IF (Stack[-1] == 0) GOTO 0xbde; Pop(1)

0xbc8: PushEmpty(string)
0xbc9: Stack[-1] = "Neutral"
0xbca: Call2 0xbfc

0xbcb: Pop(1)
0xbcc: Push((int) 540545)
0xbcd: @@ SetMessage(Stack[-1])
0xbce: Pop(1)
0xbcf: @@ ClearReplies()
0xbd0: Pop(0)
0xbd1: Push((int) 540546)
0xbd2: Push((int) -1)
0xbd3: Push((int) 42555)
0xbd4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd5: Pop(3)
0xbd6: Push((int) 540798)
0xbd7: Push((int) -1)
0xbd8: Push((int) 42847)
0xbd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbda: Pop(3)
0xbdb: GOTO 0xbde

0xbdc: Return(); Pop(0)

0xbdd: GOTO 0xbc6

0xbde: PushEmpty(bool)
0xbdf: Call2 0xf2e

0xbe0: Pop(0)
0xbe1: IF (Stack[-1] == 0) GOTO 0xbed; Pop(1)

0xbe2: @ lshWaitForAnimEnd()
0xbe3: Pop(0)
0xbe4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbe5: IF (Stack[-1] == 0) GOTO 0xbe7; Pop(1)

0xbe6: GOTO 0xbec

0xbe7: PushEmpty(string)
0xbe8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbe9: Call2 0xe42

0xbea: Pop(1)
0xbeb: GOTO 0xbe2

0xbec: GOTO 0xbfb

0xbed: Push("all")
0xbee: Push("idle")
0xbef: @ PlayAnimation(Stack[-2], Stack[-1])
0xbf0: Pop(2)
0xbf1: @ WaitForAnimEnd()
0xbf2: Pop(0)
0xbf3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbf4: IF (Stack[-1] == 0) GOTO 0xbf6; Pop(1)

0xbf5: GOTO 0xbfb

0xbf6: Push("all")
0xbf7: Push("idle")
0xbf8: @ PlayAnimation(Stack[-2], Stack[-1])
0xbf9: Pop(2)
0xbfa: GOTO 0xbf1

0xbfb: Return(); Pop(0)

0xbfc: PushEmpty()
0xbfd: PushEmpty(bool)
0xbfe: Call2 0xf2e

0xbff: Pop(0)
0xc00: Pop(1); Push((bool) Stack[-1] == 0)
0xc01: IF (Stack[-1] == 0) GOTO 0xc03; Pop(1)

0xc02: Return(); Pop(0)

0xc03: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc04: IF (Stack[-1] == 0) GOTO 0xc06; Pop(1)

0xc05: Return(); Pop(0)

0xc06: PushEmpty(string, bool)
0xc07: Stack[-2] = Stack[-3]
0xc08: Push("")
0xc09: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc0a: IF (Stack[-1] == 0) GOTO 0xc0d; Pop(1)

0xc0b: Stack[-1] = (bool) 0
0xc0c: GOTO 0xc0e

0xc0d: Stack[-1] = (bool) 1
0xc0e: Call2 0xe52

0xc0f: Pop(2)
0xc10: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc11: Return(); Pop(0)

0xc12: PushEmpty()
0xc13: Push((int) 1)
0xc14: IF (Stack[-1] == 0) GOTO 0xc3b; Pop(1)

0xc15: PushEmpty()
0xc16: Call2 0xe70

0xc17: Pop(0)
0xc18: Push((int) 42554)
0xc19: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1a: IF (Stack[-1] == 0) GOTO 0xc2f; Pop(1)

0xc1b: PushEmpty(string)
0xc1c: Stack[-1] = "Neutral"
0xc1d: Call2 0xbfc

0xc1e: Pop(1)
0xc1f: Push((int) 540545)
0xc20: @@ SetMessage(Stack[-1])
0xc21: Pop(1)
0xc22: @@ ClearReplies()
0xc23: Pop(0)
0xc24: Push((int) 540546)
0xc25: Push((int) -1)
0xc26: Push((int) 42555)
0xc27: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc28: Pop(3)
0xc29: Push((int) 540798)
0xc2a: Push((int) -1)
0xc2b: Push((int) 42847)
0xc2c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2d: Pop(3)
0xc2e: Return(); Pop(0)

0xc2f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc30: PushEmpty(bool)
0xc31: Call2 0xf2e

0xc32: Pop(0)
0xc33: IF (Stack[-1] == 0) GOTO 0xc37; Pop(1)

0xc34: @ lshStopAnimation()
0xc35: Pop(0)
0xc36: GOTO 0xc39

0xc37: @ StopAnimation()
0xc38: Pop(0)
0xc39: Return(); Pop(0)

0xc3a: GOTO 0xc13

0xc3b: Return(); Pop(0)

0xc3c: PushEmpty()
0xc3d: Call2 0xc40

0xc3e: Pop(0)
0xc3f: Return(); Pop(0)

0xc40: PushEmpty(bool)
0xc41: Call2 0xd5e

0xc42: Pop(0)
0xc43: Pop(1); Push((bool) Stack[-1] == 0)
0xc44: IF (Stack[-1] == 0) GOTO 0xc47; Pop(1)

0xc45: @ Hold()
0xc46: Pop(0)
0xc47: @ GetDirection(Stack[-0])
0xc48: Pop(0)
0xc49: PushEmpty()
0xc4a: Call2 0xcf0

0xc4b: Pop(0)
0xc4c: GOTO 0xc49

0xc4d: Return(); Pop(0)

0xc4e: PushEmpty(object, object)
0xc4f: Push("player")
0xc50: @ FindActor(Stack[-2], Stack[-1])
0xc51: Pop(1)
0xc52: Pop(0); Push((bool) Stack[-1] == 0)
0xc53: IF (Stack[-1] == 0) GOTO 0xc56; Pop(1)

0xc54: Stack[-3] = (bool) 0
0xc55: Return(); Pop(2)

0xc56: PushEmpty(bool, object)
0xc57: Stack[-1] = Stack[-3]
0xc58: Call2 0xd55

0xc59: Stack[-5] = Stack[-2]
0xc5a: Pop(2)
0xc5b: Return(); Pop(2)

0xc5c: Stack[-1] = 0
0xc5d: Push(CvectorIndex(Stack[-0], 0))
0xc5e: Push(CvectorIndex(Stack[-0], 2))
0xc5f: @ RotateAsync(Stack[-2], Stack[-1])
0xc60: Pop(2)
0xc61: Return(); Pop(0)

0xc62: PushEmpty(object, bool, object, bool)
0xc63: Push("player")
0xc64: @ FindActor(Stack[-3], Stack[-1])
0xc65: Pop(1)
0xc66: Pop(0); Push((bool) Stack[-2] == 0)
0xc67: IF (Stack[-1] == 0) GOTO 0xc6a; Pop(1)

0xc68: Stack[-5] = (bool) 0
0xc69: Return(); Pop(4)

0xc6a: PushEmpty(float, object)
0xc6b: Stack[-1] = Stack[-4]
0xc6c: Call2 0xd3c

0xc6d: Pop(1)
0xc6e: Push((float)90000.0)
0xc6f: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xc70: IF (Stack[-1] == 0) GOTO 0xc73; Pop(1)

0xc71: Stack[-5] = (bool) 0
0xc72: Return(); Pop(4)

0xc73: @ CanSee(Stack[-1], Stack[-2])
0xc74: Pop(0)
0xc75: Stack[-5] = Stack[-1]
0xc76: Return(); Pop(4)

0xc77: Stack[-2] = 0
0xc78: PushEmpty(float, float)
0xc79: Push((int) 8)
0xc7a: Push((int) 16)
0xc7b: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xc7c: Pop(2)
0xc7d: Push((int) 10)
0xc7e: @ SetTimer(Stack[-1], Stack[-2])
0xc7f: Pop(1)
0xc80: Return(); Pop(2)

0xc81: Push((int) 10)
0xc82: @ KillTimer(Stack[-1])
0xc83: Pop(1)
0xc84: Return(); Pop(0)

0xc85: PushEmpty()
0xc86: Push((int) 10)
0xc87: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc88: IF (Stack[-1] == 0) GOTO 0xcaa; Pop(1)

0xc89: PushEmpty()
0xc8a: Call2 0xc81

0xc8b: Pop(0)
0xc8c: PushEmpty(bool)
0xc8d: Stack[-1] = (bool) 0
0xc8e: PushEmpty(bool)
0xc8f: Call2 0xd5e

0xc90: Pop(0)
0xc91: IF (Stack[-1] == 0) GOTO 0xc97; Pop(1)

0xc92: PushEmpty(bool)
0xc93: Call2 0xc62

0xc94: Pop(0)
0xc95: IF (Stack[-1] == 0) GOTO 0xc97; Pop(1)

0xc96: Stack[-1] = (bool) 1
0xc97: IF (Stack[-1] == 0) GOTO 0xca4; Pop(1)

0xc98: PushEmpty(bool)
0xc99: Call2 0xc4e

0xc9a: Pop(0)
0xc9b: IF (Stack[-1] == 0) GOTO 0xca3; Pop(1)

0xc9c: PushEmpty(bool, object)
0xc9d: PushEmpty(object)
0xc9e: Call2 0xe77

0xc9f: Stack[-2] = Stack[-1]
0xca0: Pop(1)
0xca1: Call2 0xdf2

0xca2: Pop(2)
0xca3: GOTO 0xcaa

0xca4: PushEmpty()
0xca5: Call2 0xc5d

0xca6: Pop(0)
0xca7: PushEmpty()
0xca8: Call2 0xc78

0xca9: Pop(0)
0xcaa: Return(); Pop(0)

0xcab: PushEmpty()
0xcac: Call2 0xd37

0xcad: Pop(0)
0xcae: PushEmpty()
0xcaf: Call2 0xc81

0xcb0: Pop(0)
0xcb1: @ lshStopSpeech()
0xcb2: Pop(0)
0xcb3: @ lshStopAnimation()
0xcb4: Pop(0)
0xcb5: @ StopAsync()
0xcb6: Pop(0)
0xcb7: @ Hold()
0xcb8: Pop(0)
0xcb9: Return(); Pop(0)

0xcba: @ StopGroup0()
0xcbb: Pop(0)
0xcbc: PushEmpty()
0xcbd: Call2 0xc81

0xcbe: Pop(0)
0xcbf: PushEmpty(string)
0xcc0: Stack[-1] = "Neutral"
0xcc1: Call2 0xe42

0xcc2: Pop(1)
0xcc3: PushEmpty()
0xcc4: Call2 0xc78

0xcc5: Pop(0)
0xcc6: Return(); Pop(0)

0xcc7: PushEmpty()
0xcc8: Push(Stack[-1])
0xcc9: IF (Stack[-1] == 0) GOTO 0xcce; Pop(1)

0xcca: PushEmpty()
0xccb: Call2 0xc78

0xccc: Pop(0)
0xccd: GOTO 0xcd2

0xcce: PushEmpty(string)
0xccf: Stack[-1] = "Neutral"
0xcd0: Call2 0xe42

0xcd1: Pop(1)
0xcd2: Return(); Pop(0)

0xcd3: PushEmpty(bool, bool)
0xcd4: @ IsOverrideActive(Stack[-1])
0xcd5: Pop(0)
0xcd6: Pop(0); Push((bool) Stack[-1] == 0)
0xcd7: IF (Stack[-1] == 0) GOTO 0xcef; Pop(1)

0xcd8: EventDisable(0)
0xcd9: PushEmpty()
0xcda: Call2 0xd37

0xcdb: Pop(0)
0xcdc: PushEmpty(bool, object)
0xcdd: Stack[-1] = Stack[-5]
0xcde: Call2 0xd55

0xcdf: Pop(2)
0xce0: EventEnable(0)
0xce1: PushEmpty(object)
0xce2: Stack[-1] = Stack[-4]
0xce3: Call2 0x1219

0xce4: Pop(1)
0xce5: PushEmpty(string)
0xce6: Stack[-1] = "Neutral"
0xce7: Call2 0xe42

0xce8: Pop(1)
0xce9: PushEmpty()
0xcea: Call2 0xc81

0xceb: Pop(0)
0xcec: PushEmpty()
0xced: Call2 0xc78

0xcee: Pop(0)
0xcef: Return(); Pop(2)

0xcf0: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xcf1: @ WaitForAnimEnd()
0xcf2: Pop(0)
0xcf3: PushEmpty(bool)
0xcf4: Call2 0xd5e

0xcf5: Pop(0)
0xcf6: Pop(1); Push((bool) Stack[-1] == 0)
0xcf7: IF (Stack[-1] == 0) GOTO 0xcf9; Pop(1)

0xcf8: Return(); Pop(12)

0xcf9: PushEmpty(int)
0xcfa: Call2 0xf15

0xcfb: Stack[-7] = Stack[-1]
0xcfc: Pop(1)
0xcfd: Stack[-5] = (int) 0
0xcfe: PushEmpty(bool)
0xcff: Stack[-1] = (bool) 0
0xd00: Push((int) 5)
0xd01: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xd02: IF (Stack[-1] == 0) GOTO 0xd08; Pop(1)

0xd03: PushEmpty(bool)
0xd04: Call2 0xd5e

0xd05: Pop(0)
0xd06: IF (Stack[-1] == 0) GOTO 0xd08; Pop(1)

0xd07: Stack[-1] = (bool) 1
0xd08: IF (Stack[-1] == 0) GOTO 0xd32; Pop(1)

0xd09: Pop(0); Push((bool) Stack[-6] == 0)
0xd0a: IF (Stack[-1] == 0) GOTO 0xd12; Pop(1)

0xd0b: Push((int) 3)
0xd0c: @ Sleep(Stack[-1], Stack[-5])
0xd0d: Pop(1)
0xd0e: Pop(0); Push((bool) Stack[-4] == 0)
0xd0f: IF (Stack[-1] == 0) GOTO 0xd11; Pop(1)

0xd10: GOTO 0xd32

0xd11: GOTO 0xd27

0xd12: @ irand(Stack[-3], Stack[-6])
0xd13: Pop(0)
0xd14: Push((int) 5)
0xd15: @ irand(Stack[-3], Stack[-1])
0xd16: Pop(1)
0xd17: Push((int) 0)
0xd18: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xd19: IF (Stack[-1] == 0) GOTO 0xd1b; Pop(1)

0xd1a: Stack[-3] = (int) 0
0xd1b: Push("all")
0xd1c: PushEmpty(string, int)
0xd1d: Stack[-1] = Stack[-6]
0xd1e: Call2 0xf0e

0xd1f: Pop(1)
0xd20: @ PlayAnimation(Stack[-2], Stack[-1])
0xd21: Pop(2)
0xd22: @ WaitForAnimEnd(Stack[-1])
0xd23: Pop(0)
0xd24: Pop(0); Push((bool) Stack[-1] == 0)
0xd25: IF (Stack[-1] == 0) GOTO 0xd27; Pop(1)

0xd26: GOTO 0xd32

0xd27: PushEmpty(bool)
0xd28: Call2 0xd35

0xd29: Pop(0)
0xd2a: Pop(1); Push((bool) Stack[-1] == 0)
0xd2b: IF (Stack[-1] == 0) GOTO 0xd2d; Pop(1)

0xd2c: GOTO 0xd32

0xd2d: @ ResetAAS()
0xd2e: Pop(0)
0xd2f: Push((int) 1)
0xd30: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xd31: GOTO 0xcfe

0xd32: @ ResetAAS()
0xd33: Pop(0)
0xd34: Return(); Pop(12)

0xd35: Stack[-1] = (bool) 1
0xd36: Return(); Pop(0)

0xd37: @ StopAnimation()
0xd38: Pop(0)
0xd39: @ StopGroup0()
0xd3a: Pop(0)
0xd3b: Return(); Pop(0)

0xd3c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xd3d: @ GetPosition(Stack[-3])
0xd3e: Pop(0)
0xd3f: @@ GetPosition(Stack[-2])
0xd40: Pop(0)
0xd41: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xd42: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xd43: Return(); Pop(6)

0xd44: PushEmpty(int, int)
0xd45: @@ GetProperty(Stack[-4], Stack[-1])
0xd46: Pop(0)
0xd47: Pop(0); Push(Stack[-1] + Stack[-3]);
0xd48: @@ SetProperty(Stack[-5], Stack[-1])
0xd49: Pop(1)
0xd4a: Return(); Pop(2)

0xd4b: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xd4c: @ GetPosition(Stack[-3])
0xd4d: Pop(0)
0xd4e: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xd4f: Push(CvectorIndex(Stack[-2], 0))
0xd50: Push(CvectorIndex(Stack[-3], 2))
0xd51: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xd52: Pop(2)
0xd53: Stack[-8] = Stack[-1]
0xd54: Return(); Pop(6)

0xd55: PushEmpty(cvector, cvector)
0xd56: @@ GetPosition(Stack[-1])
0xd57: Pop(0)
0xd58: PushEmpty(bool, cvector)
0xd59: Stack[-1] = Stack[-3]
0xd5a: Call2 0xd4b

0xd5b: Stack[-6] = Stack[-2]
0xd5c: Pop(2)
0xd5d: Return(); Pop(2)

0xd5e: PushEmpty(bool, bool)
0xd5f: @ IsLoaded(Stack[-1])
0xd60: Pop(0)
0xd61: Stack[-3] = Stack[-1]
0xd62: Return(); Pop(2)

0xd63: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xd64: @@ GetPosition(Stack[-8])
0xd65: Pop(0)
0xd66: @@ GetEyesHeight(Stack[-9])
0xd67: Pop(0)
0xd68: Push(CvectorIndex(Stack[-8], 1))
0xd69: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xd6a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xd6b: @ GetPosition(Stack[-7])
0xd6c: Pop(0)
0xd6d: @ GetEyesHeight(Stack[-9])
0xd6e: Pop(0)
0xd6f: Push(CvectorIndex(Stack[-7], 1))
0xd70: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xd71: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xd72: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xd73: Push(CvectorIndex(Stack[-6], 1))
0xd74: Stack[-1] = (int) 0
0xd75: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xd76: Pop(0); Push(Stack[-6] | Stack[-6]);
0xd77: Pop(1); Push(Sqrt(Stack[-1]))
0xd78: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xd79: Stack[-5] = -Stack[-6]; Pop(0);
0xd7a: Pop(0); Push(Stack[-6] * Stack[-19]);
0xd7b: PushEmpty(cvector, cvector)
0xd7c: Push(CVector(0.0, 1.0, 0.0))
0xd7d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xd7e: Call2 0xe7d

0xd7f: Pop(1)
0xd80: Push((int) 25)
0xd81: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd82: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd83: Push(CVector(0.0, 10.0, 0.0))
0xd84: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xd85: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xd86: @ IsOverrideActive(Stack[-2])
0xd87: Pop(0)
0xd88: Push(Stack[-2])
0xd89: IF (Stack[-1] == 0) GOTO 0xd8c; Pop(1)

0xd8a: Stack[-21] = (bool) 0
0xd8b: Return(); Pop(18)

0xd8c: @ StopWorld()
0xd8d: Pop(0)
0xd8e: @ CameraTransit(Stack[-3], Stack[-5])
0xd8f: Pop(0)
0xd90: Push(CvectorIndex(Stack[-4], 0))
0xd91: Push(CvectorIndex(Stack[-5], 2))
0xd92: @ Rotate(Stack[-2], Stack[-1])
0xd93: Pop(2)
0xd94: PushEmpty(bool)
0xd95: Call2 0xf2e

0xd96: Pop(0)
0xd97: IF (Stack[-1] == 0) GOTO 0xd99; Pop(1)

0xd98: GOTO 0xda1

0xd99: Push("head")
0xd9a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xd9b: Pop(1)
0xd9c: Push(Stack[-1])
0xd9d: IF (Stack[-1] == 0) GOTO 0xda1; Pop(1)

0xd9e: Push("head")
0xd9f: @ LookAsyncCamera(Stack[-1])
0xda0: Pop(1)
0xda1: @ CameraWaitForPlayFinish()
0xda2: Pop(0)
0xda3: @ ResumeWorld()
0xda4: Pop(0)
0xda5: Stack[-21] = (bool) 1
0xda6: Return(); Pop(18)

0xda7: PushEmpty(bool, bool)
0xda8: @ CameraSwitchToNormal()
0xda9: Pop(0)
0xdaa: PushEmpty(bool)
0xdab: Call2 0xf2e

0xdac: Pop(0)
0xdad: IF (Stack[-1] == 0) GOTO 0xdaf; Pop(1)

0xdae: GOTO 0xdb7

0xdaf: Push("head")
0xdb0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xdb1: Pop(1)
0xdb2: Push(Stack[-1])
0xdb3: IF (Stack[-1] == 0) GOTO 0xdb7; Pop(1)

0xdb4: Push("head")
0xdb5: @ UnlookAsync(Stack[-1])
0xdb6: Pop(1)
0xdb7: Return(); Pop(2)

0xdb8: PushEmpty(int, int, int, int)
0xdb9: Push("voice_common")
0xdba: @ GetVariable(Stack[-1], Stack[-3])
0xdbb: Pop(1)
0xdbc: Push(Stack[-2])
0xdbd: IF (Stack[-1] == 0) GOTO 0xdde; Pop(1)

0xdbe: PushEmpty(bool, object)
0xdbf: Stack[-1] = Stack[-7]
0xdc0: Call2 0xdf2

0xdc1: Pop(1)
0xdc2: Pop(1); Push((bool) Stack[-1] == 0)
0xdc3: IF (Stack[-1] == 0) GOTO 0xdcc; Pop(1)

0xdc4: PushEmpty(bool, object)
0xdc5: Stack[-1] = Stack[-7]
0xdc6: Call2 0xe17

0xdc7: Pop(1)
0xdc8: Pop(1); Push((bool) Stack[-1] == 0)
0xdc9: IF (Stack[-1] == 0) GOTO 0xdcc; Pop(1)

0xdca: Stack[-6] = (bool) 0
0xdcb: Return(); Pop(4)

0xdcc: Push((int) 2)
0xdcd: @ irand(Stack[-2], Stack[-1])
0xdce: Pop(1)
0xdcf: Push(Stack[-1])
0xdd0: IF (Stack[-1] == 0) GOTO 0xdd9; Pop(1)

0xdd1: Push("voice_common")
0xdd2: Push((int) 1)
0xdd3: Pop(1); Push(Stack[-4] + Stack[-1]);
0xdd4: Push((int) 3)
0xdd5: Pop(2); Push(Stack[-2] % Stack[-1]);
0xdd6: @ SetVariable(Stack[-2], Stack[-1])
0xdd7: Pop(2)
0xdd8: GOTO 0xddd

0xdd9: Push("voice_common")
0xdda: Push((int) 0)
0xddb: @ SetVariable(Stack[-2], Stack[-1])
0xddc: Pop(2)
0xddd: GOTO 0xdf0

0xdde: PushEmpty(bool, object)
0xddf: Stack[-1] = Stack[-7]
0xde0: Call2 0xe17

0xde1: Pop(1)
0xde2: Pop(1); Push((bool) Stack[-1] == 0)
0xde3: IF (Stack[-1] == 0) GOTO 0xdec; Pop(1)

0xde4: PushEmpty(bool, object)
0xde5: Stack[-1] = Stack[-7]
0xde6: Call2 0xdf2

0xde7: Pop(1)
0xde8: Pop(1); Push((bool) Stack[-1] == 0)
0xde9: IF (Stack[-1] == 0) GOTO 0xdec; Pop(1)

0xdea: Stack[-6] = (bool) 0
0xdeb: Return(); Pop(4)

0xdec: Push("voice_common")
0xded: Push((int) 1)
0xdee: @ SetVariable(Stack[-2], Stack[-1])
0xdef: Pop(2)
0xdf0: Stack[-6] = (bool) 1
0xdf1: Return(); Pop(4)

0xdf2: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xdf3: Stack[-5] = "c"
0xdf4: Stack[-4] = (int) 0
0xdf5: Push((int) 1)
0xdf6: IF (Stack[-1] == 0) GOTO 0xe02; Pop(1)

0xdf7: Push((int) 1)
0xdf8: Pop(1); Push(Stack[-5] + Stack[-1]);
0xdf9: Pop(1); Push(Stack[-6] + Stack[-1]);
0xdfa: @@ HasProperty(Stack[-1], Stack[-4])
0xdfb: Pop(1)
0xdfc: Pop(0); Push((bool) Stack[-3] == 0)
0xdfd: IF (Stack[-1] == 0) GOTO 0xdff; Pop(1)

0xdfe: GOTO 0xe02

0xdff: Push((int) 1)
0xe00: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xe01: GOTO 0xdf5

0xe02: Pop(0); Push((bool) Stack[-4] == 0)
0xe03: IF (Stack[-1] == 0) GOTO 0xe06; Pop(1)

0xe04: Stack[-12] = (bool) 0
0xe05: Return(); Pop(10)

0xe06: Stack[-2] = (int) 0
0xe07: Push((int) 1)
0xe08: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xe09: IF (Stack[-1] == 0) GOTO 0xe0c; Pop(1)

0xe0a: @ irand(Stack[-2], Stack[-4])
0xe0b: Pop(0)
0xe0c: Push((int) 1)
0xe0d: Pop(1); Push(Stack[-3] + Stack[-1]);
0xe0e: Pop(1); Push(Stack[-6] + Stack[-1]);
0xe0f: @@ GetProperty(Stack[-1], Stack[-2])
0xe10: Pop(1)
0xe11: PushEmpty(bool, string)
0xe12: Stack[-1] = Stack[-3]
0xe13: Call2 0xe61

0xe14: Stack[-14] = Stack[-2]
0xe15: Pop(2)
0xe16: Return(); Pop(10)

0xe17: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xe18: Push("d")
0xe19: PushEmpty(int)
0xe1a: Call2 0xeff

0xe1b: Pop(0)
0xe1c: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe1d: Push("m")
0xe1e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xe1f: Stack[-4] = (int) 0
0xe20: Push((int) 1)
0xe21: IF (Stack[-1] == 0) GOTO 0xe2d; Pop(1)

0xe22: Push((int) 1)
0xe23: Pop(1); Push(Stack[-5] + Stack[-1]);
0xe24: Pop(1); Push(Stack[-6] + Stack[-1]);
0xe25: @@ HasProperty(Stack[-1], Stack[-4])
0xe26: Pop(1)
0xe27: Pop(0); Push((bool) Stack[-3] == 0)
0xe28: IF (Stack[-1] == 0) GOTO 0xe2a; Pop(1)

0xe29: GOTO 0xe2d

0xe2a: Push((int) 1)
0xe2b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xe2c: GOTO 0xe20

0xe2d: Pop(0); Push((bool) Stack[-4] == 0)
0xe2e: IF (Stack[-1] == 0) GOTO 0xe31; Pop(1)

0xe2f: Stack[-12] = (bool) 0
0xe30: Return(); Pop(10)

0xe31: Stack[-2] = (int) 0
0xe32: Push((int) 1)
0xe33: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xe34: IF (Stack[-1] == 0) GOTO 0xe37; Pop(1)

0xe35: @ irand(Stack[-2], Stack[-4])
0xe36: Pop(0)
0xe37: Push((int) 1)
0xe38: Pop(1); Push(Stack[-3] + Stack[-1]);
0xe39: Pop(1); Push(Stack[-6] + Stack[-1]);
0xe3a: @@ GetProperty(Stack[-1], Stack[-2])
0xe3b: Pop(1)
0xe3c: PushEmpty(bool, string)
0xe3d: Stack[-1] = Stack[-3]
0xe3e: Call2 0xe61

0xe3f: Stack[-14] = Stack[-2]
0xe40: Pop(2)
0xe41: Return(); Pop(10)

0xe42: PushEmpty(bool, float, float, bool, float, float)
0xe43: @ lshHasAnimation(Stack[-3], Stack[-7])
0xe44: Pop(0)
0xe45: Push(Stack[-3])
0xe46: IF (Stack[-1] == 0) GOTO 0xe4d; Pop(1)

0xe47: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xe48: Pop(0)
0xe49: Push((bool) 0)
0xe4a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xe4b: Pop(1)
0xe4c: GOTO 0xe51

0xe4d: Push("Can't find lsh animation : ")
0xe4e: Pop(1); Push(Stack[-1] + Stack[-8]);
0xe4f: @ Trace(Stack[-1])
0xe50: Pop(1)
0xe51: Return(); Pop(6)

0xe52: PushEmpty(bool, float, float, bool, float, float)
0xe53: @ lshHasAnimation(Stack[-3], Stack[-8])
0xe54: Pop(0)
0xe55: Push(Stack[-3])
0xe56: IF (Stack[-1] == 0) GOTO 0xe5c; Pop(1)

0xe57: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xe58: Pop(0)
0xe59: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xe5a: Pop(0)
0xe5b: GOTO 0xe60

0xe5c: Push("Can't find lsh animation : ")
0xe5d: Pop(1); Push(Stack[-1] + Stack[-9]);
0xe5e: @ Trace(Stack[-1])
0xe5f: Pop(1)
0xe60: Return(); Pop(6)

0xe61: PushEmpty(bool, bool)
0xe62: PushEmpty(bool)
0xe63: Call2 0xf2e

0xe64: Pop(0)
0xe65: IF (Stack[-1] == 0) GOTO 0xe6e; Pop(1)

0xe66: @ lshHasSpeech(Stack[-1], Stack[-3])
0xe67: Pop(0)
0xe68: Push(Stack[-1])
0xe69: IF (Stack[-1] == 0) GOTO 0xe6e; Pop(1)

0xe6a: @ lshPlaySpeech(Stack[-3])
0xe6b: Pop(0)
0xe6c: Stack[-4] = (bool) 1
0xe6d: Return(); Pop(2)

0xe6e: Stack[-4] = (bool) 0
0xe6f: Return(); Pop(2)

0xe70: PushEmpty(bool)
0xe71: Call2 0xf2e

0xe72: Pop(0)
0xe73: IF (Stack[-1] == 0) GOTO 0xe76; Pop(1)

0xe74: @ lshStopSpeech()
0xe75: Pop(0)
0xe76: Return(); Pop(0)

0xe77: PushEmpty(object, object)
0xe78: @ self(Stack[-1])
0xe79: Pop(0)
0xe7a: Stack[-3] = Stack[-1]
0xe7b: Return(); Pop(2)

0xe7c: Stack[-1] = 0
0xe7d: PushEmpty(float, float)
0xe7e: Pop(0); Push(Stack[-3] | Stack[-3]);
0xe7f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xe80: Push((float)0.0)
0xe81: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xe82: IF (Stack[-1] == 0) GOTO 0xe85; Pop(1)

0xe83: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xe84: Return(); Pop(2)

0xe85: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xe86: Return(); Pop(2)

0xe87: PushEmpty(int, int)
0xe88: @ GetVariable(Stack[-3], Stack[-1])
0xe89: Pop(0)
0xe8a: Stack[-4] = Stack[-1]
0xe8b: Return(); Pop(2)

0xe8c: PushEmpty(object, object, object, object)
0xe8d: @ GetMainOutdoorScene(Stack[-2])
0xe8e: Pop(0)
0xe8f: Push(".bin")
0xe90: Pop(1); Push(Stack[-6] + Stack[-1]);
0xe91: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xe92: Pop(1)
0xe93: Stack[-6] = Stack[-1]
0xe94: Return(); Pop(4)

0xe95: Stack[-1] = 0
0xe96: Stack[-2] = 0
0xe97: PushEmpty(object, object)
0xe98: @ FindActor(Stack[-1], Stack[-4])
0xe99: Pop(0)
0xe9a: Pop(0); Push((bool) Stack[-1] == 0)
0xe9b: IF (Stack[-1] == 0) GOTO 0xea3; Pop(1)

0xe9c: Push("Door ")
0xe9d: Pop(1); Push(Stack[-1] + Stack[-5]);
0xe9e: Push(" not found")
0xe9f: Pop(2); Push(Stack[-2] + Stack[-1]);
0xea0: @ Trace(Stack[-1])
0xea1: Pop(1)
0xea2: GOTO 0xea6

0xea3: Push("locked")
0xea4: @@ SetProperty(Stack[-1], Stack[-4])
0xea5: Pop(1)
0xea6: Return(); Pop(2)

0xea7: Stack[-1] = 0
0xea8: PushEmpty(object, object)
0xea9: @ CreateIntVector(Stack[-1])
0xeaa: Pop(0)
0xeab: @@ add(Stack[-4])
0xeac: Pop(0)
0xead: @@ add(Stack[-3])
0xeae: Pop(0)
0xeaf: Push((int) 3)
0xeb0: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xeb1: Pop(1)
0xeb2: Return(); Pop(2)

0xeb3: Stack[-1] = 0
0xeb4: PushEmpty(int, int)
0xeb5: PushEmpty(object, string, int)
0xeb6: Stack[-3] = Stack[-7]
0xeb7: Stack[-2] = "money"
0xeb8: Stack[-1] = Stack[-6]
0xeb9: Call2 0xd44

0xeba: Pop(3)
0xebb: Push((int) 0)
0xebc: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xebd: IF (Stack[-1] == 0) GOTO 0xec6; Pop(1)

0xebe: Push("Money")
0xebf: @ GetInvItemByName(Stack[-2], Stack[-1])
0xec0: Pop(1)
0xec1: PushEmpty(int, int)
0xec2: Stack[-2] = Stack[-3]
0xec3: Stack[-1] = Stack[-5]
0xec4: Call2 0xea8

0xec5: Pop(2)
0xec6: Return(); Pop(2)

0xec7: PushEmpty(int, int, bool, int, int, bool)
0xec8: @@ GetItemID(Stack[-3])
0xec9: Pop(0)
0xeca: Push("Category")
0xecb: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xecc: Pop(1)
0xecd: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xece: Pop(0)
0xecf: Pop(0); Push((bool) Stack[-1] == 0)
0xed0: IF (Stack[-1] == 0) GOTO 0xed4; Pop(1)

0xed1: @@ DropItems(Stack[-8], Stack[-7])
0xed2: Pop(0)
0xed3: GOTO 0xed9

0xed4: PushEmpty(int, int)
0xed5: Stack[-2] = Stack[-5]
0xed6: Stack[-1] = Stack[-9]
0xed7: Call2 0xea8

0xed8: Pop(2)
0xed9: Return(); Pop(6)

0xeda: PushEmpty(object, object)
0xedb: @ CreateInvItem(Stack[-1])
0xedc: Pop(0)
0xedd: @@ SetItemName(Stack[-4])
0xede: Pop(0)
0xedf: PushEmpty(object, object, int)
0xee0: Stack[-3] = Stack[-8]
0xee1: Stack[-2] = Stack[-4]
0xee2: Stack[-1] = Stack[-6]
0xee3: Call2 0xec7

0xee4: Pop(3)
0xee5: Return(); Pop(2)

0xee6: Stack[-1] = 0
0xee7: PushEmpty(int, bool, int, bool)
0xee8: @ GetInvItemByName(Stack[-2], Stack[-5])
0xee9: Pop(0)
0xeea: @@ HasItem(Stack[-2], Stack[-1])
0xeeb: Pop(0)
0xeec: Stack[-7] = Stack[-1]
0xeed: Return(); Pop(4)

0xeee: PushEmpty(object, object)
0xeef: @ FindActor(Stack[-1], Stack[-4])
0xef0: Pop(0)
0xef1: Pop(0); Push((bool) Stack[-1] == 0)
0xef2: IF (Stack[-1] == 0) GOTO 0xef5; Pop(1)

0xef3: Stack[-5] = (bool) 0
0xef4: Return(); Pop(2)

0xef5: @ Trigger(Stack[-1], Stack[-3])
0xef6: Pop(0)
0xef7: Stack[-5] = (bool) 1
0xef8: Return(); Pop(2)

0xef9: Stack[-1] = 0
0xefa: PushEmpty(float, float)
0xefb: @ GetGameTime(Stack[-1])
0xefc: Pop(0)
0xefd: Stack[-3] = Stack[-1]
0xefe: Return(); Pop(2)

0xeff: PushEmpty(float, float)
0xf00: @ GetGameTime(Stack[-1])
0xf01: Pop(0)
0xf02: Push((int) 1)
0xf03: PushEmpty(int)
0xf04: Push((int) 24)
0xf05: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xf06: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xf07: Return(); Pop(2)

0xf08: PushEmpty()
0xf09: PushEmpty(int)
0xf0a: Call2 0xeff

0xf0b: Pop(0)
0xf0c: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xf0d: Return(); Pop(0)

0xf0e: PushEmpty(string, string)
0xf0f: Stack[-1] = "idle"
0xf10: Push(Stack[-3])
0xf11: IF (Stack[-1] == 0) GOTO 0xf13; Pop(1)

0xf12: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xf13: Stack[-4] = Stack[-1]
0xf14: Return(); Pop(2)

0xf15: PushEmpty(int, bool, int, bool)
0xf16: Stack[-2] = (int) 0
0xf17: Push("all")
0xf18: PushEmpty(string, int)
0xf19: Stack[-1] = Stack[-5]
0xf1a: Call2 0xf0e

0xf1b: Pop(1)
0xf1c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xf1d: Pop(2)
0xf1e: Pop(0); Push((bool) Stack[-1] == 0)
0xf1f: IF (Stack[-1] == 0) GOTO 0xf21; Pop(1)

0xf20: GOTO 0xf24

0xf21: Push((int) 1)
0xf22: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xf23: GOTO 0xf17

0xf24: Stack[-5] = Stack[-2]
0xf25: Return(); Pop(4)

0xf26: Stack[-1] = (int) 515592
0xf27: Return(); Pop(0)

0xf28: Stack[-1] = (int) 511961
0xf29: Return(); Pop(0)

0xf2a: Stack[-1] = "ui/NPC_Burah.png"
0xf2b: Return(); Pop(0)

0xf2c: Stack[-1] = "ui/NPC_Burah_b.png"
0xf2d: Return(); Pop(0)

0xf2e: Stack[-1] = (bool) 1
0xf2f: Return(); Pop(0)

0xf30: PushEmpty()
0xf31: PushEmpty(object, string, float)
0xf32: PushEmpty(object)
0xf33: Call2 0x117b

0xf34: Stack[-4] = Stack[-1]
0xf35: Pop(1)
0xf36: Stack[-2] = "pt_map_burah_home"
0xf37: Stack[-1] = (int) 2
0xf38: Call2 0x118c

0xf39: Pop(3)
0xf3a: PushEmpty(object)
0xf3b: Call2 0x117b

0xf3c: Pop(0)
0xf3d: @@ ShowMap(Stack[-1])
0xf3e: Pop(1)
0xf3f: Return(); Pop(0)

0xf40: PushEmpty()
0xf41: PushEmpty(string, bool)
0xf42: Stack[-2] = "boiny@door1"
0xf43: Stack[-1] = (bool) 0
0xf44: Call2 0xe97

0xf45: Pop(2)
0xf46: Return(); Pop(0)

0xf47: PushEmpty()
0xf48: Push("ook1Burah1")
0xf49: Push((int) 1)
0xf4a: @ SetVariable(Stack[-2], Stack[-1])
0xf4b: Pop(2)
0xf4c: Return(); Pop(0)

0xf4d: PushEmpty(object, object)
0xf4e: PushEmpty(object)
0xf4f: Call2 0x117b

0xf50: Stack[-2] = Stack[-1]
0xf51: Pop(1)
0xf52: Push("k1q01BurahGotoAnna")
0xf53: Push("pt_map_anna")
0xf54: Push((int) 1)
0xf55: Push((int) 524732)
0xf56: PushEmpty(float)
0xf57: Call2 0xefa

0xf58: Pop(0)
0xf59: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf5a: Pop(5)
0xf5b: PushEmpty()
0xf5c: Call2 0x1104

0xf5d: Pop(0)
0xf5e: Return(); Pop(2)

0xf5f: Stack[-1] = 0
0xf60: PushEmpty()
0xf61: Push("k2q01")
0xf62: Push((int) 5)
0xf63: @ SetVariable(Stack[-2], Stack[-1])
0xf64: Pop(2)
0xf65: PushEmpty()
0xf66: Call2 0x1111

0xf67: Pop(0)
0xf68: Return(); Pop(0)

0xf69: PushEmpty(object, object)
0xf6a: PushEmpty(int, string)
0xf6b: Stack[-1] = "k7q01CorpseMark"
0xf6c: Call2 0xe87

0xf6d: Pop(1)
0xf6e: Push((int) 0)
0xf6f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf70: IF (Stack[-1] == 0) GOTO 0xf88; Pop(1)

0xf71: Push("k7q01CorpseMark")
0xf72: Push((int) 1)
0xf73: @ SetVariable(Stack[-2], Stack[-1])
0xf74: Pop(2)
0xf75: PushEmpty(object)
0xf76: Call2 0x117b

0xf77: Stack[-2] = Stack[-1]
0xf78: Pop(1)
0xf79: Push("k7q01BirdmaskGotoCorpse")
0xf7a: Push("pt_d7q02_corpse")
0xf7b: Push((int) 3)
0xf7c: Push((int) 526214)
0xf7d: PushEmpty(float)
0xf7e: Call2 0xefa

0xf7f: Pop(0)
0xf80: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf81: Pop(5)
0xf82: PushEmpty(bool, string, string)
0xf83: Stack[-2] = "quest_k7_01"
0xf84: Stack[-1] = "place_corpse"
0xf85: Call2 0xeee

0xf86: Pop(3)
0xf87: Stack[-1] = 0
0xf88: Return(); Pop(2)

0xf89: PushEmpty()
0xf8a: Push("ook7Burah1")
0xf8b: Push((int) 1)
0xf8c: @ SetVariable(Stack[-2], Stack[-1])
0xf8d: Pop(2)
0xf8e: Return(); Pop(0)

0xf8f: PushEmpty(int, int)
0xf90: Push("k7q01")
0xf91: Push((int) 4)
0xf92: @ SetVariable(Stack[-2], Stack[-1])
0xf93: Pop(2)
0xf94: PushEmpty()
0xf95: Call2 0x111e

0xf96: Pop(0)
0xf97: Push("bird_balahon")
0xf98: Push((int) 1)
0xf99: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xf9a: Pop(2)
0xf9b: Return(); Pop(2)

0xf9c: PushEmpty(object, object)
0xf9d: PushEmpty(object)
0xf9e: Call2 0x117b

0xf9f: Stack[-2] = Stack[-1]
0xfa0: Pop(1)
0xfa1: Push("k7q03BurahGotoFather")
0xfa2: Push("pt_map_burah_home")
0xfa3: Push((int) 0)
0xfa4: Push((int) 526394)
0xfa5: PushEmpty(float)
0xfa6: Call2 0xefa

0xfa7: Pop(0)
0xfa8: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfa9: Pop(5)
0xfaa: PushEmpty()
0xfab: Call2 0x112b

0xfac: Pop(0)
0xfad: PushEmpty()
0xfae: Call2 0x1138

0xfaf: Pop(0)
0xfb0: PushEmpty(object, string)
0xfb1: Stack[-1] = "quest_k7_03"
0xfb2: Call2 0xe8c

0xfb3: Pop(2)
0xfb4: PushEmpty(bool, string, string)
0xfb5: Stack[-2] = "quest_k7_03"
0xfb6: Stack[-1] = "place_family"
0xfb7: Call2 0xeee

0xfb8: Pop(3)
0xfb9: Return(); Pop(2)

0xfba: Stack[-1] = 0
0xfbb: PushEmpty()
0xfbc: Push("ook7Burah2")
0xfbd: Push((int) 1)
0xfbe: @ SetVariable(Stack[-2], Stack[-1])
0xfbf: Pop(2)
0xfc0: Return(); Pop(0)

0xfc1: PushEmpty()
0xfc2: Push("tvirin 5 is given")
0xfc3: @ Trace(Stack[-1])
0xfc4: Pop(1)
0xfc5: PushEmpty(object, string, int)
0xfc6: Stack[-3] = Stack[-5]
0xfc7: Stack[-2] = "tvirin"
0xfc8: Stack[-1] = (int) 5
0xfc9: Call2 0xeda

0xfca: Pop(3)
0xfcb: Return(); Pop(0)

0xfcc: PushEmpty()
0xfcd: PushEmpty()
0xfce: Call2 0x1145

0xfcf: Pop(0)
0xfd0: PushEmpty(bool, string, string)
0xfd1: Stack[-2] = "quest_k7_03"
0xfd2: Stack[-1] = "completed"
0xfd3: Call2 0xeee

0xfd4: Pop(3)
0xfd5: Return(); Pop(0)

0xfd6: PushEmpty()
0xfd7: Push("money2000 is given")
0xfd8: @ Trace(Stack[-1])
0xfd9: Pop(1)
0xfda: PushEmpty(object, int)
0xfdb: Stack[-2] = Stack[-4]
0xfdc: Stack[-1] = (int) 2000
0xfdd: Call2 0xeb4

0xfde: Pop(2)
0xfdf: Return(); Pop(0)

0xfe0: PushEmpty()
0xfe1: Push("k11q01")
0xfe2: Push((int) 5)
0xfe3: @ SetVariable(Stack[-2], Stack[-1])
0xfe4: Pop(2)
0xfe5: PushEmpty()
0xfe6: Call2 0x10dd

0xfe7: Pop(0)
0xfe8: Return(); Pop(0)

0xfe9: PushEmpty()
0xfea: Push("playsound")
0xfeb: Push("givemoney")
0xfec: @ TriggerWorld(Stack[-2], Stack[-1])
0xfed: Pop(2)
0xfee: Return(); Pop(0)

0xfef: PushEmpty()
0xff0: Push("playsound")
0xff1: Push("giveitem")
0xff2: @ TriggerWorld(Stack[-2], Stack[-1])
0xff3: Pop(2)
0xff4: Return(); Pop(0)

0xff5: PushEmpty()
0xff6: Push("ook12BurahFactory1")
0xff7: Push((int) 1)
0xff8: @ SetVariable(Stack[-2], Stack[-1])
0xff9: Pop(2)
0xffa: Return(); Pop(0)

0xffb: PushEmpty()
0xffc: Push("k12q01BurahInSobor")
0xffd: Push((int) 1)
0xffe: @ SetVariable(Stack[-2], Stack[-1])
0xfff: Pop(2)
0x1000: PushEmpty()
0x1001: Call2 0x10ea

0x1002: Pop(0)
0x1003: Return(); Pop(0)

0x1004: PushEmpty()
0x1005: PushEmpty(int, string)
0x1006: Stack[-1] = "k12q01_Burah"
0x1007: Call2 0xe87

0x1008: Pop(1)
0x1009: Push((int) 0)
0x100a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x100b: IF (Stack[-1] == 0) GOTO 0x1013; Pop(1)

0x100c: Push("k12q01_Burah")
0x100d: Push((int) 1)
0x100e: @ SetVariable(Stack[-2], Stack[-1])
0x100f: Pop(2)
0x1010: PushEmpty()
0x1011: Call2 0x10f7

0x1012: Pop(0)
0x1013: Return(); Pop(0)

0x1014: PushEmpty()
0x1015: Push("k12BurahVisit")
0x1016: Push((int) 1)
0x1017: @ SetVariable(Stack[-2], Stack[-1])
0x1018: Pop(2)
0x1019: Return(); Pop(0)

0x101a: PushEmpty()
0x101b: PushEmpty(bool, object)
0x101c: Stack[-1] = Stack[-3]
0x101d: Call2 0x10d7

0x101e: Pop(1)
0x101f: IF (Stack[-1] == 0) GOTO 0x1022; Pop(1)

0x1020: Stack[-2] = (bool) 1
0x1021: Return(); Pop(0)

0x1022: Stack[-2] = (bool) 0
0x1023: Return(); Pop(0)

0x1024: PushEmpty()
0x1025: PushEmpty(int, string)
0x1026: Stack[-1] = "game_final"
0x1027: Call2 0xe87

0x1028: Pop(1)
0x1029: Push((int) 0)
0x102a: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x102b: IF (Stack[-1] == 0) GOTO 0x102e; Pop(1)

0x102c: Stack[-2] = (bool) 1
0x102d: Return(); Pop(0)

0x102e: Stack[-2] = (bool) 0
0x102f: Return(); Pop(0)

0x1030: PushEmpty()
0x1031: PushEmpty(int, string)
0x1032: Stack[-1] = "k1q01LaskaGotoBurah"
0x1033: Call2 0xe87

0x1034: Pop(1)
0x1035: Push((int) 0)
0x1036: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1037: IF (Stack[-1] == 0) GOTO 0x103a; Pop(1)

0x1038: Stack[-2] = (bool) 1
0x1039: Return(); Pop(0)

0x103a: Stack[-2] = (bool) 0
0x103b: Return(); Pop(0)

0x103c: PushEmpty()
0x103d: PushEmpty(int, string)
0x103e: Stack[-1] = "ook1Burah1"
0x103f: Call2 0xe87

0x1040: Pop(1)
0x1041: Push((int) 0)
0x1042: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1043: IF (Stack[-1] == 0) GOTO 0x1046; Pop(1)

0x1044: Stack[-2] = (bool) 1
0x1045: Return(); Pop(0)

0x1046: Stack[-2] = (bool) 0
0x1047: Return(); Pop(0)

0x1048: PushEmpty()
0x1049: PushEmpty(int, string)
0x104a: Stack[-1] = "k12DankoVisit"
0x104b: Call2 0xe87

0x104c: Pop(1)
0x104d: Push((int) 0)
0x104e: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x104f: IF (Stack[-1] == 0) GOTO 0x1052; Pop(1)

0x1050: Stack[-2] = (bool) 1
0x1051: Return(); Pop(0)

0x1052: Stack[-2] = (bool) 0
0x1053: Return(); Pop(0)

0x1054: PushEmpty()
0x1055: PushEmpty(int, string)
0x1056: Stack[-1] = "k2q01"
0x1057: Call2 0xe87

0x1058: Pop(1)
0x1059: Push((int) 4)
0x105a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x105b: IF (Stack[-1] == 0) GOTO 0x105e; Pop(1)

0x105c: Stack[-2] = (bool) 1
0x105d: Return(); Pop(0)

0x105e: Stack[-2] = (bool) 0
0x105f: Return(); Pop(0)

0x1060: PushEmpty()
0x1061: PushEmpty(bool, object, string)
0x1062: Stack[-2] = Stack[-4]
0x1063: Stack[-1] = "bird_balahon"
0x1064: Call2 0xee7

0x1065: Pop(2)
0x1066: IF (Stack[-1] == 0) GOTO 0x1069; Pop(1)

0x1067: Stack[-2] = (bool) 1
0x1068: Return(); Pop(0)

0x1069: Stack[-2] = (bool) 0
0x106a: Return(); Pop(0)

0x106b: PushEmpty()
0x106c: PushEmpty(int, string)
0x106d: Stack[-1] = "k7q01"
0x106e: Call2 0xe87

0x106f: Pop(1)
0x1070: Push((int) 3)
0x1071: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1072: IF (Stack[-1] == 0) GOTO 0x1075; Pop(1)

0x1073: Stack[-2] = (bool) 1
0x1074: Return(); Pop(0)

0x1075: Stack[-2] = (bool) 0
0x1076: Return(); Pop(0)

0x1077: PushEmpty()
0x1078: PushEmpty(int, string)
0x1079: Stack[-1] = "ook7Burah1"
0x107a: Call2 0xe87

0x107b: Pop(1)
0x107c: Push((int) 0)
0x107d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x107e: IF (Stack[-1] == 0) GOTO 0x1081; Pop(1)

0x107f: Stack[-2] = (bool) 1
0x1080: Return(); Pop(0)

0x1081: Stack[-2] = (bool) 0
0x1082: Return(); Pop(0)

0x1083: PushEmpty()
0x1084: PushEmpty(int, string)
0x1085: Stack[-1] = "k7q03"
0x1086: Call2 0xe87

0x1087: Pop(1)
0x1088: Push((int) 0)
0x1089: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x108a: IF (Stack[-1] == 0) GOTO 0x108d; Pop(1)

0x108b: Stack[-2] = (bool) 1
0x108c: Return(); Pop(0)

0x108d: Stack[-2] = (bool) 0
0x108e: Return(); Pop(0)

0x108f: PushEmpty()
0x1090: PushEmpty(int, string)
0x1091: Stack[-1] = "ook7Burah2"
0x1092: Call2 0xe87

0x1093: Pop(1)
0x1094: Push((int) 0)
0x1095: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1096: IF (Stack[-1] == 0) GOTO 0x1099; Pop(1)

0x1097: Stack[-2] = (bool) 1
0x1098: Return(); Pop(0)

0x1099: Stack[-2] = (bool) 0
0x109a: Return(); Pop(0)

0x109b: PushEmpty()
0x109c: PushEmpty(int, string)
0x109d: Stack[-1] = "k7q03"
0x109e: Call2 0xe87

0x109f: Pop(1)
0x10a0: Push((int) 2)
0x10a1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10a2: IF (Stack[-1] == 0) GOTO 0x10a5; Pop(1)

0x10a3: Stack[-2] = (bool) 1
0x10a4: Return(); Pop(0)

0x10a5: Stack[-2] = (bool) 0
0x10a6: Return(); Pop(0)

0x10a7: PushEmpty()
0x10a8: PushEmpty(int, string)
0x10a9: Stack[-1] = "k11q01"
0x10aa: Call2 0xe87

0x10ab: Pop(1)
0x10ac: Push((int) 4)
0x10ad: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10ae: IF (Stack[-1] == 0) GOTO 0x10b1; Pop(1)

0x10af: Stack[-2] = (bool) 1
0x10b0: Return(); Pop(0)

0x10b1: Stack[-2] = (bool) 0
0x10b2: Return(); Pop(0)

0x10b3: PushEmpty()
0x10b4: PushEmpty(int, string)
0x10b5: Stack[-1] = "k12q01ChildsAreVisited"
0x10b6: Call2 0xe87

0x10b7: Pop(1)
0x10b8: Push((int) 0)
0x10b9: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x10ba: IF (Stack[-1] == 0) GOTO 0x10bd; Pop(1)

0x10bb: Stack[-2] = (bool) 1
0x10bc: Return(); Pop(0)

0x10bd: Stack[-2] = (bool) 0
0x10be: Return(); Pop(0)

0x10bf: PushEmpty()
0x10c0: PushEmpty(int, string)
0x10c1: Stack[-1] = "k12q01BurahInSobor"
0x10c2: Call2 0xe87

0x10c3: Pop(1)
0x10c4: Push((int) 0)
0x10c5: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x10c6: IF (Stack[-1] == 0) GOTO 0x10c9; Pop(1)

0x10c7: Stack[-2] = (bool) 1
0x10c8: Return(); Pop(0)

0x10c9: Stack[-2] = (bool) 0
0x10ca: Return(); Pop(0)

0x10cb: PushEmpty()
0x10cc: PushEmpty(int, string)
0x10cd: Stack[-1] = "ook12BurahFactory1"
0x10ce: Call2 0xe87

0x10cf: Pop(1)
0x10d0: Push((int) 0)
0x10d1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10d2: IF (Stack[-1] == 0) GOTO 0x10d5; Pop(1)

0x10d3: Stack[-2] = (bool) 1
0x10d4: Return(); Pop(0)

0x10d5: Stack[-2] = (bool) 0
0x10d6: Return(); Pop(0)

0x10d7: PushEmpty()
0x10d8: PushEmpty(bool)
0x10d9: Call2 0x11f3

0x10da: Stack[-3] = Stack[-1]
0x10db: Pop(1)
0x10dc: Return(); Pop(0)

0x10dd: PushEmpty(object, object)
0x10de: Push((int) 488)
0x10df: Push((int) 1)
0x10e0: Push((int) 528055)
0x10e1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10e2: Pop(3)
0x10e3: PushEmpty(bool, object, int)
0x10e4: Stack[-2] = Stack[-4]
0x10e5: Stack[-1] = (int) 480
0x10e6: Call2 0x115f

0x10e7: Pop(3)
0x10e8: Return(); Pop(2)

0x10e9: Stack[-1] = 0
0x10ea: PushEmpty(object, object)
0x10eb: Push((int) 731)
0x10ec: Push((int) 1)
0x10ed: Push((int) 539361)
0x10ee: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10ef: Pop(3)
0x10f0: PushEmpty(bool, object, int)
0x10f1: Stack[-2] = Stack[-4]
0x10f2: Stack[-1] = (int) 729
0x10f3: Call2 0x115f

0x10f4: Pop(3)
0x10f5: Return(); Pop(2)

0x10f6: Stack[-1] = 0
0x10f7: PushEmpty(object, object)
0x10f8: Push((int) 738)
0x10f9: Push((int) 1)
0x10fa: Push((int) 539368)
0x10fb: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10fc: Pop(3)
0x10fd: PushEmpty(bool, object, int)
0x10fe: Stack[-2] = Stack[-4]
0x10ff: Stack[-1] = (int) 729
0x1100: Call2 0x115f

0x1101: Pop(3)
0x1102: Return(); Pop(2)

0x1103: Stack[-1] = 0
0x1104: PushEmpty(object, object)
0x1105: Push((int) 777)
0x1106: Push((int) 1)
0x1107: Push((int) 541531)
0x1108: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1109: Pop(3)
0x110a: PushEmpty(bool, object, int)
0x110b: Stack[-2] = Stack[-4]
0x110c: Stack[-1] = (int) 318
0x110d: Call2 0x115f

0x110e: Pop(3)
0x110f: Return(); Pop(2)

0x1110: Stack[-1] = 0
0x1111: PushEmpty(object, object)
0x1112: Push((int) 466)
0x1113: Push((int) 1)
0x1114: Push((int) 527782)
0x1115: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1116: Pop(3)
0x1117: PushEmpty(bool, object, int)
0x1118: Stack[-2] = Stack[-4]
0x1119: Stack[-1] = (int) 461
0x111a: Call2 0x115f

0x111b: Pop(3)
0x111c: Return(); Pop(2)

0x111d: Stack[-1] = 0
0x111e: PushEmpty(object, object)
0x111f: Push((int) 422)
0x1120: Push((int) 1)
0x1121: Push((int) 526221)
0x1122: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1123: Pop(3)
0x1124: PushEmpty(bool, object, int)
0x1125: Stack[-2] = Stack[-4]
0x1126: Stack[-1] = (int) 416
0x1127: Call2 0x115f

0x1128: Pop(3)
0x1129: Return(); Pop(2)

0x112a: Stack[-1] = 0
0x112b: PushEmpty(object, object)
0x112c: Push((int) 434)
0x112d: Push((int) 2)
0x112e: Push((int) 526390)
0x112f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1130: Pop(3)
0x1131: PushEmpty(bool, object, int)
0x1132: Stack[-2] = Stack[-4]
0x1133: Stack[-1] = (int) -1
0x1134: Call2 0x115f

0x1135: Pop(3)
0x1136: Return(); Pop(2)

0x1137: Stack[-1] = 0
0x1138: PushEmpty(object, object)
0x1139: Push((int) 435)
0x113a: Push((int) 2)
0x113b: Push((int) 526391)
0x113c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x113d: Pop(3)
0x113e: PushEmpty(bool, object, int)
0x113f: Stack[-2] = Stack[-4]
0x1140: Stack[-1] = (int) 434
0x1141: Call2 0x115f

0x1142: Pop(3)
0x1143: Return(); Pop(2)

0x1144: Stack[-1] = 0
0x1145: PushEmpty(object, object)
0x1146: Push((int) 437)
0x1147: Push((int) 2)
0x1148: Push((int) 526393)
0x1149: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x114a: Pop(3)
0x114b: PushEmpty(bool, object, int)
0x114c: Stack[-2] = Stack[-4]
0x114d: Stack[-1] = (int) 434
0x114e: Call2 0x115f

0x114f: Pop(3)
0x1150: Return(); Pop(2)

0x1151: Stack[-1] = 0
0x1152: PushEmpty(object, object)
0x1153: @ GetDiaryRoot(Stack[-1])
0x1154: Pop(0)
0x1155: Pop(0); Push((bool) Stack[-1] == 0)
0x1156: IF (Stack[-1] == 0) GOTO 0x115c; Pop(1)

0x1157: Push("Can't retrieve diary root")
0x1158: @ Trace(Stack[-1])
0x1159: Pop(1)
0x115a: Stack[-3] = (bool) 0
0x115b: Return(); Pop(2)

0x115c: Stack[-3] = Stack[-1]
0x115d: Return(); Pop(2)

0x115e: Stack[-1] = 0
0x115f: PushEmpty(object, object, int, object, object, int)
0x1160: PushEmpty(object)
0x1161: Call2 0x1152

0x1162: Stack[-4] = Stack[-1]
0x1163: Pop(1)
0x1164: @@ Find(Stack[-7], Stack[-2])
0x1165: Pop(0)
0x1166: Pop(0); Push((bool) Stack[-2] == 0)
0x1167: IF (Stack[-1] == 0) GOTO 0x116e; Pop(1)

0x1168: Push("Can't find diary parent with id: ")
0x1169: Pop(1); Push(Stack[-1] + Stack[-8]);
0x116a: @ Trace(Stack[-1])
0x116b: Pop(1)
0x116c: Stack[-9] = (bool) 0
0x116d: Return(); Pop(6)

0x116e: @@ AddChild(Stack[-8])
0x116f: Pop(0)
0x1170: Push((int) 7)
0x1171: @ SendWorldWndMessage(Stack[-1])
0x1172: Pop(1)
0x1173: @@ GetCategory(Stack[-1])
0x1174: Pop(0)
0x1175: @ SetDiarySection(Stack[-1])
0x1176: Pop(0)
0x1177: Stack[-9] = (bool) 0
0x1178: Return(); Pop(6)

0x1179: Stack[-2] = 0
0x117a: Stack[-3] = 0
0x117b: PushEmpty(object, object, object, object)
0x117c: @ GetMainOutdoorScene(Stack[-2])
0x117d: Pop(0)
0x117e: Pop(0); Push((bool) Stack[-2] == 0)
0x117f: IF (Stack[-1] == 0) GOTO 0x1186; Pop(1)

0x1180: Push("Can't find main outdoor scene")
0x1181: @ Trace(Stack[-1])
0x1182: Pop(1)
0x1183: Stack[-1] = 0
0x1184: Stack[-5] = Stack[-1]
0x1185: Return(); Pop(4)

0x1186: @@ GetMap(Stack[-1])
0x1187: Pop(0)
0x1188: Stack[-5] = Stack[-1]
0x1189: Return(); Pop(4)

0x118a: Stack[-1] = 0
0x118b: Stack[-2] = 0
0x118c: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x118d: @ GetMainOutdoorScene(Stack[-2])
0x118e: Pop(0)
0x118f: Pop(0); Push((bool) Stack[-2] == 0)
0x1190: IF (Stack[-1] == 0) GOTO 0x1195; Pop(1)

0x1191: Push("Can't find main outdoor scene")
0x1192: @ Trace(Stack[-1])
0x1193: Pop(1)
0x1194: Return(); Pop(8)

0x1195: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x1196: Pop(0)
0x1197: Pop(0); Push((bool) Stack[-1] == 0)
0x1198: IF (Stack[-1] == 0) GOTO 0x119f; Pop(1)

0x1199: Push("Warning: outdoor scene locator ")
0x119a: Pop(1); Push(Stack[-1] + Stack[-11]);
0x119b: Push(" doesnt exist")
0x119c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x119d: @ Trace(Stack[-1])
0x119e: Pop(1)
0x119f: @@ GetMap(Stack[-11])
0x11a0: Pop(0)
0x11a1: Pop(0); Push((bool) Stack[-11] == 0)
0x11a2: IF (Stack[-1] == 0) GOTO 0x11a7; Pop(1)

0x11a3: Push("Can't find map")
0x11a4: @ Trace(Stack[-1])
0x11a5: Pop(1)
0x11a6: Return(); Pop(8)

0x11a7: Push(CvectorIndex(Stack[-4], 0))
0x11a8: Push(CvectorIndex(Stack[-5], 2))
0x11a9: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x11aa: Pop(2)
0x11ab: Return(); Pop(8)

0x11ac: Stack[-2] = 0
0x11ad: PushEmpty(int, int)
0x11ae: Push("branch")
0x11af: @ GetVariable(Stack[-1], Stack[-2])
0x11b0: Pop(1)
0x11b1: Push((int) 0)
0x11b2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11b3: IF (Stack[-1] == 0) GOTO 0x11b7; Pop(1)

0x11b4: Stack[-3] = (int) 1
0x11b5: Return(); Pop(2)

0x11b6: GOTO 0x11bc

0x11b7: Push((int) 1)
0x11b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11b9: IF (Stack[-1] == 0) GOTO 0x11bc; Pop(1)

0x11ba: Stack[-3] = (int) 2
0x11bb: Return(); Pop(2)

0x11bc: Stack[-3] = (int) 3
0x11bd: Return(); Pop(2)

0x11be: PushEmpty()
0x11bf: Push((int) 18)
0x11c0: @@ add(Stack[-1])
0x11c1: Pop(1)
0x11c2: Push((int) 24)
0x11c3: @@ add(Stack[-1])
0x11c4: Pop(1)
0x11c5: Push((int) 20)
0x11c6: @@ add(Stack[-1])
0x11c7: Pop(1)
0x11c8: Push((int) 14)
0x11c9: @@ add(Stack[-1])
0x11ca: Pop(1)
0x11cb: Push((bool) 0)
0x11cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11cd: IF (Stack[-1] == 0) GOTO 0x11d8; Pop(1)

0x11ce: Push((int) 10)
0x11cf: @@ add(Stack[-1])
0x11d0: Pop(1)
0x11d1: Push((int) 17)
0x11d2: @@ add(Stack[-1])
0x11d3: Pop(1)
0x11d4: Push((int) 8)
0x11d5: @@ add(Stack[-1])
0x11d6: Pop(1)
0x11d7: GOTO 0x11de

0x11d8: Push((int) 1)
0x11d9: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x11da: IF (Stack[-1] == 0) GOTO 0x11de; Pop(1)

0x11db: Push((int) 10)
0x11dc: @@ add(Stack[-1])
0x11dd: Pop(1)
0x11de: Return(); Pop(0)

0x11df: PushEmpty(int, int)
0x11e0: Push("vol_")
0x11e1: Pop(1); Push(Stack[-1] + Stack[-4]);
0x11e2: @ GetVariable(Stack[-1], Stack[-2])
0x11e3: Pop(1)
0x11e4: Push((int) 4)
0x11e5: Pop(1); Push(Stack[-2] & Stack[-1]);
0x11e6: Push((int) 0)
0x11e7: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x11e8: Return(); Pop(2)

0x11e9: PushEmpty(int, int)
0x11ea: Push("vol_")
0x11eb: Pop(1); Push(Stack[-1] + Stack[-4]);
0x11ec: @ GetVariable(Stack[-1], Stack[-2])
0x11ed: Pop(1)
0x11ee: Push((int) 16)
0x11ef: Pop(1); Push(Stack[-2] & Stack[-1]);
0x11f0: Push((int) 0)
0x11f1: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x11f2: Return(); Pop(2)

0x11f3: PushEmpty(object, int, int, int, object, int, int, int)
0x11f4: @ CreateIntVector(Stack[-4])
0x11f5: Pop(0)
0x11f6: PushEmpty(object, bool, int)
0x11f7: Stack[-3] = Stack[-7]
0x11f8: Stack[-2] = (bool) 0
0x11f9: Stack[-1] = (int) -1
0x11fa: Call2 0x11be

0x11fb: Pop(3)
0x11fc: @@ size(Stack[-3])
0x11fd: Pop(0)
0x11fe: Stack[-2] = (int) 0
0x11ff: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1200: IF (Stack[-1] == 0) GOTO 0x1216; Pop(1)

0x1201: @@ get(Stack[-1], Stack[-2])
0x1202: Pop(0)
0x1203: PushEmpty(bool)
0x1204: Stack[-1] = (bool) 1
0x1205: PushEmpty(bool, int)
0x1206: Stack[-1] = Stack[-4]
0x1207: Call2 0x11e9

0x1208: Pop(1)
0x1209: IF (Stack[-1] == 0) GOTO 0x1210; Pop(1)

0x120a: PushEmpty(bool, int)
0x120b: Stack[-1] = Stack[-4]
0x120c: Call2 0x11df

0x120d: Pop(1)
0x120e: IF (Stack[-1] == 0) GOTO 0x1210; Pop(1)

0x120f: Stack[-1] = (bool) 0
0x1210: IF (Stack[-1] == 0) GOTO 0x1213; Pop(1)

0x1211: Stack[-9] = (bool) 0
0x1212: Return(); Pop(8)

0x1213: Push((int) 1)
0x1214: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1215: GOTO 0x11ff

0x1216: Stack[-9] = (bool) 1
0x1217: Return(); Pop(8)

0x1218: Stack[-4] = 0
0x1219: PushEmpty(int, int)
0x121a: Push("mt_burah")
0x121b: @ GetVariable(Stack[-1], Stack[-2])
0x121c: Pop(1)
0x121d: Pop(0); Push((bool) Stack[-1] == 0)
0x121e: IF (Stack[-1] == 0) GOTO 0x1229; Pop(1)

0x121f: PushEmpty(int, object)
0x1220: Stack[-1] = Stack[-5]
0x1221: Push(-2, 1); TaskCall(2)
0x1222: Call2 0x12f

0x1223: Pop(-2, 1); TaskReturn
0x1224: Pop(2)
0x1225: Push("mt_burah")
0x1226: Push((int) 1)
0x1227: @ SetVariable(Stack[-2], Stack[-1])
0x1228: Pop(2)
0x1229: PushEmpty(bool, int)
0x122a: Stack[-1] = (int) 1
0x122b: Call2 0xf08

0x122c: Pop(1)
0x122d: IF (Stack[-1] == 0) GOTO 0x1235; Pop(1)

0x122e: PushEmpty(int, object)
0x122f: Stack[-1] = Stack[-5]
0x1230: Push(-2, 1); TaskCall(8)
0x1231: Call2 0x6e4

0x1232: Pop(-2, 1); TaskReturn
0x1233: Pop(2)
0x1234: Return(); Pop(2)

0x1235: PushEmpty(bool, int)
0x1236: Stack[-1] = (int) 2
0x1237: Call2 0xf08

0x1238: Pop(1)
0x1239: IF (Stack[-1] == 0) GOTO 0x1241; Pop(1)

0x123a: PushEmpty(int, object)
0x123b: Stack[-1] = Stack[-5]
0x123c: Push(-2, 1); TaskCall(0)
0x123d: Call2 0x0

0x123e: Pop(-2, 1); TaskReturn
0x123f: Pop(2)
0x1240: Return(); Pop(2)

0x1241: PushEmpty(bool, int)
0x1242: Stack[-1] = (int) 7
0x1243: Call2 0xf08

0x1244: Pop(1)
0x1245: IF (Stack[-1] == 0) GOTO 0x124d; Pop(1)

0x1246: PushEmpty(int, object)
0x1247: Stack[-1] = Stack[-5]
0x1248: Push(-2, 1); TaskCall(4)
0x1249: Call2 0x21e

0x124a: Pop(-2, 1); TaskReturn
0x124b: Pop(2)
0x124c: Return(); Pop(2)

0x124d: PushEmpty(bool, int)
0x124e: Stack[-1] = (int) 11
0x124f: Call2 0xf08

0x1250: Pop(1)
0x1251: IF (Stack[-1] == 0) GOTO 0x1259; Pop(1)

0x1252: PushEmpty(int, object)
0x1253: Stack[-1] = Stack[-5]
0x1254: Push(-2, 1); TaskCall(6)
0x1255: Call2 0x56b

0x1256: Pop(-2, 1); TaskReturn
0x1257: Pop(2)
0x1258: Return(); Pop(2)

0x1259: PushEmpty(bool, int)
0x125a: Stack[-1] = (int) 12
0x125b: Call2 0xf08

0x125c: Pop(1)
0x125d: IF (Stack[-1] == 0) GOTO 0x1265; Pop(1)

0x125e: PushEmpty(int, object)
0x125f: Stack[-1] = Stack[-5]
0x1260: Push(-2, 1); TaskCall(10)
0x1261: Call2 0x8a3

0x1262: Pop(-2, 1); TaskReturn
0x1263: Pop(2)
0x1264: Return(); Pop(2)

0x1265: PushEmpty(int, object)
0x1266: Stack[-1] = Stack[-5]
0x1267: Push(-2, 1); TaskCall(12)
0x1268: Call2 0xb71

0x1269: Pop(-2, 1); TaskReturn
0x126a: Pop(2)
0x126b: Return(); Pop(2)

