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
	Agression
	Sorrow
	Smile
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
		EVENT_11 Op = 0xb4 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x265 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x38f Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4d6 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x7d5 Vars = (int, int)
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
0xe: Call2 0xf2a

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xf28

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xf2c

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xf2e

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x11af

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
0x31: Call2 0xe79

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xdba

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
0x48: Call2 0xda8

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
0x5b: Push((int) 524702)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool)
0x61: Stack[-1] = (bool) 0
0x62: PushEmpty(bool, object)
0x63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64: Call2 0x1032

0x65: Pop(1)
0x66: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x67: PushEmpty(bool, object)
0x68: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69: Call2 0x103e

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6c: Stack[-1] = (bool) 1
0x6d: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6e: Push((int) 524703)
0x6f: Push((int) 28087)
0x70: Push((int) 26042)
0x71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72: Pop(3)
0x73: Push((int) 524704)
0x74: Push((int) -1)
0x75: Push((int) 26043)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: Push((int) 541803)
0x79: Push((int) -1)
0x7a: Push((int) 44015)
0x7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c: Pop(3)
0x7d: GOTO 0x80

0x7e: Return(); Pop(0)

0x7f: GOTO 0x55

0x80: PushEmpty(bool)
0x81: Call2 0xf30

0x82: Pop(0)
0x83: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x84: @ lshWaitForAnimEnd()
0x85: Pop(0)
0x86: Push( Stack[3 + Tasks[-1].StackPointer] )
0x87: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x88: GOTO 0x8e

0x89: PushEmpty(string)
0x8a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8b: Call2 0xe44

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
0xa0: Call2 0xf30

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
0xb0: Call2 0xe54

0xb1: Pop(2)
0xb2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb3: Return(); Pop(0)

0xb4: PushEmpty()
0xb5: Push((int) 1)
0xb6: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0xb7: PushEmpty()
0xb8: Call2 0xe72

0xb9: Pop(0)
0xba: Push((int) 26042)
0xbb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xbd: PushEmpty(object, object)
0xbe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc0: Call2 0xf49

0xc1: Pop(2)
0xc2: Push((int) 26045)
0xc3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc5: PushEmpty(object, object)
0xc6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc8: Call2 0xf4f

0xc9: Pop(2)
0xca: Push((int) 44014)
0xcb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call2 0xf4f

0xd1: Pop(2)
0xd2: Push((int) 44013)
0xd3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0xf4f

0xd9: Pop(2)
0xda: Push((int) 26041)
0xdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xdd: PushEmpty(string)
0xde: Stack[-1] = "Neutral"
0xdf: Call2 0x9e

0xe0: Pop(1)
0xe1: Push((int) 524702)
0xe2: @@ SetMessage(Stack[-1])
0xe3: Pop(1)
0xe4: @@ ClearReplies()
0xe5: Pop(0)
0xe6: PushEmpty(bool)
0xe7: Stack[-1] = (bool) 0
0xe8: PushEmpty(bool, object)
0xe9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xea: Call2 0x1032

0xeb: Pop(1)
0xec: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xed: PushEmpty(bool, object)
0xee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xef: Call2 0x103e

0xf0: Pop(1)
0xf1: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf2: Stack[-1] = (bool) 1
0xf3: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf4: Push((int) 524703)
0xf5: Push((int) 28087)
0xf6: Push((int) 26042)
0xf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8: Pop(3)
0xf9: Push((int) 524704)
0xfa: Push((int) -1)
0xfb: Push((int) 26043)
0xfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd: Pop(3)
0xfe: Push((int) 541803)
0xff: Push((int) -1)
0x100: Push((int) 44015)
0x101: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102: Pop(3)
0x103: Return(); Pop(0)

0x104: Push((int) 28087)
0x105: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x107: PushEmpty(string)
0x108: Stack[-1] = "Doubt"
0x109: Call2 0x9e

0x10a: Pop(1)
0x10b: Push((int) 526807)
0x10c: @@ SetMessage(Stack[-1])
0x10d: Pop(1)
0x10e: @@ ClearReplies()
0x10f: Pop(0)
0x110: Push((int) 526808)
0x111: Push((int) 28089)
0x112: Push((int) 28088)
0x113: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114: Pop(3)
0x115: Push((int) 541797)
0x116: Push((int) 28092)
0x117: Push((int) 44007)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: Return(); Pop(0)

0x11b: Push((int) 28089)
0x11c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x11e: PushEmpty(string)
0x11f: Stack[-1] = "Doubt"
0x120: Call2 0x9e

0x121: Pop(1)
0x122: Push((int) 526809)
0x123: @@ SetMessage(Stack[-1])
0x124: Pop(1)
0x125: @@ ClearReplies()
0x126: Pop(0)
0x127: Push((int) 526810)
0x128: Push((int) 26044)
0x129: Push((int) 28090)
0x12a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b: Pop(3)
0x12c: Push((int) 526811)
0x12d: Push((int) 28092)
0x12e: Push((int) 28091)
0x12f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x130: Pop(3)
0x131: Return(); Pop(0)

0x132: Push((int) 28092)
0x133: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x135: PushEmpty(string)
0x136: Stack[-1] = "Agression"
0x137: Call2 0x9e

0x138: Pop(1)
0x139: Push((int) 526812)
0x13a: @@ SetMessage(Stack[-1])
0x13b: Pop(1)
0x13c: @@ ClearReplies()
0x13d: Pop(0)
0x13e: Push((int) 526813)
0x13f: Push((int) 28095)
0x140: Push((int) 28093)
0x141: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142: Pop(3)
0x143: Push((int) 526814)
0x144: Push((int) 28095)
0x145: Push((int) 28094)
0x146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x147: Pop(3)
0x148: Return(); Pop(0)

0x149: Push((int) 28095)
0x14a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x14c: PushEmpty(string)
0x14d: Stack[-1] = "Agression"
0x14e: Call2 0x9e

0x14f: Pop(1)
0x150: Push((int) 526815)
0x151: @@ SetMessage(Stack[-1])
0x152: Pop(1)
0x153: @@ ClearReplies()
0x154: Pop(0)
0x155: Push((int) 526816)
0x156: Push((int) 26044)
0x157: Push((int) 28097)
0x158: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x159: Pop(3)
0x15a: Return(); Pop(0)

0x15b: Push((int) 26044)
0x15c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x15e: PushEmpty(string)
0x15f: Stack[-1] = "Doubt"
0x160: Call2 0x9e

0x161: Pop(1)
0x162: Push((int) 524705)
0x163: @@ SetMessage(Stack[-1])
0x164: Pop(1)
0x165: @@ ClearReplies()
0x166: Pop(0)
0x167: Push((int) 541798)
0x168: Push((int) 44010)
0x169: Push((int) 44009)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: Return(); Pop(0)

0x16d: Push((int) 44010)
0x16e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16f: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x170: PushEmpty(string)
0x171: Stack[-1] = "Agression"
0x172: Call2 0x9e

0x173: Pop(1)
0x174: Push((int) 541799)
0x175: @@ SetMessage(Stack[-1])
0x176: Pop(1)
0x177: @@ ClearReplies()
0x178: Pop(0)
0x179: Push((int) 526817)
0x17a: Push((int) 28100)
0x17b: Push((int) 28099)
0x17c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17d: Pop(3)
0x17e: Push((int) 541800)
0x17f: Push((int) 28102)
0x180: Push((int) 44011)
0x181: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x182: Pop(3)
0x183: Return(); Pop(0)

0x184: Push((int) 28100)
0x185: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x186: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x187: PushEmpty(string)
0x188: Stack[-1] = "Neutral"
0x189: Call2 0x9e

0x18a: Pop(1)
0x18b: Push((int) 526818)
0x18c: @@ SetMessage(Stack[-1])
0x18d: Pop(1)
0x18e: @@ ClearReplies()
0x18f: Pop(0)
0x190: Push((int) 526819)
0x191: Push((int) 28102)
0x192: Push((int) 28101)
0x193: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x194: Pop(3)
0x195: Push((int) 541801)
0x196: Push((int) -1)
0x197: Push((int) 44013)
0x198: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x199: Pop(3)
0x19a: Return(); Pop(0)

0x19b: Push((int) 28102)
0x19c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19d: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x19e: PushEmpty(string)
0x19f: Stack[-1] = "Agression"
0x1a0: Call2 0x9e

0x1a1: Pop(1)
0x1a2: Push((int) 526820)
0x1a3: @@ SetMessage(Stack[-1])
0x1a4: Pop(1)
0x1a5: @@ ClearReplies()
0x1a6: Pop(0)
0x1a7: Push((int) 524706)
0x1a8: Push((int) -1)
0x1a9: Push((int) 26045)
0x1aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ab: Pop(3)
0x1ac: Push((int) 541802)
0x1ad: Push((int) -1)
0x1ae: Push((int) 44014)
0x1af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b0: Pop(3)
0x1b1: Return(); Pop(0)

0x1b2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1b3: PushEmpty(bool)
0x1b4: Call2 0xf30

0x1b5: Pop(0)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b7: @ lshStopAnimation()
0x1b8: Pop(0)
0x1b9: GOTO 0x1bc

0x1ba: @ StopAnimation()
0x1bb: Pop(0)
0x1bc: Return(); Pop(0)

0x1bd: GOTO 0xb5

0x1be: Return(); Pop(0)

0x1bf: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1c0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1c1: PushEmpty(bool, object, float)
0x1c2: Stack[-2] = Stack[-12]
0x1c3: Stack[-1] = (float) 70.0
0x1c4: Call2 0xd63

0x1c5: Pop(2)
0x1c6: Pop(1); Push((bool) Stack[-1] == 0)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c8: Stack[-10] = (int) -2
0x1c9: Return(); Pop(8)

0x1ca: @ CreateDialog(Stack[-4])
0x1cb: Pop(0)
0x1cc: PushEmpty(int)
0x1cd: Call2 0xf2a

0x1ce: Pop(0)
0x1cf: @@ SetNPCName(Stack[-1])
0x1d0: Pop(1)
0x1d1: PushEmpty(int)
0x1d2: Call2 0xf28

0x1d3: Pop(0)
0x1d4: @@ SetNPCDescription(Stack[-1])
0x1d5: Pop(1)
0x1d6: PushEmpty(string)
0x1d7: Call2 0xf2c

0x1d8: Pop(0)
0x1d9: @@ SetPhoto(Stack[-1])
0x1da: Pop(1)
0x1db: PushEmpty(string)
0x1dc: Call2 0xf2e

0x1dd: Pop(0)
0x1de: @@ SetPhoto2(Stack[-1])
0x1df: Pop(1)
0x1e0: PushEmpty(int)
0x1e1: Call2 0x11af

0x1e2: Pop(0)
0x1e3: @@ SetPlayerName(Stack[-1])
0x1e4: Pop(1)
0x1e5: Stack[-2] = (int) -1
0x1e6: @ IsOverrideActive(Stack[-3])
0x1e7: Pop(0)
0x1e8: Push(Stack[-3])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1ea: Stack[-10] = (int) -2
0x1eb: Return(); Pop(8)

0x1ec: @ DoDialog(Stack[-4])
0x1ed: Pop(0)
0x1ee: PushEmpty(bool, object)
0x1ef: PushEmpty(object)
0x1f0: Call2 0xe79

0x1f1: Stack[-2] = Stack[-1]
0x1f2: Pop(1)
0x1f3: Call2 0xdba

0x1f4: Pop(2)
0x1f5: PushEmpty(object, object)
0x1f6: Stack[-2] = Stack[-11]
0x1f7: Stack[-1] = Stack[-6]
0x1f8: Push(-2, 4); TaskCall(3)
0x1f9: Call2 0x210

0x1fa: Pop(-2, 4); TaskReturn
0x1fb: Pop(2)
0x1fc: @@ IsDialogEnd(Stack[-1])
0x1fd: Pop(0)
0x1fe: Pop(0); Push((bool) Stack[-1] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x200: @ sync()
0x201: Pop(0)
0x202: @@ IsDialogEnd(Stack[-1])
0x203: Pop(0)
0x204: GOTO 0x1fe

0x205: PushEmpty(object)
0x206: Stack[-1] = Stack[-10]
0x207: Call2 0xda8

0x208: Pop(1)
0x209: @ StopDialog(Stack[-4])
0x20a: Pop(0)
0x20b: @@ GetReturnValue(Stack[-2])
0x20c: Pop(0)
0x20d: Stack[-10] = Stack[-2]
0x20e: Return(); Pop(8)

0x20f: Stack[-4] = 0
0x210: PushEmpty()
0x211: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x212: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x213: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x214: Push((int) 1)
0x215: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x216: PushEmpty(string)
0x217: Stack[-1] = "Neutral"
0x218: Call2 0x24f

0x219: Pop(1)
0x21a: Push((int) 525257)
0x21b: @@ SetMessage(Stack[-1])
0x21c: Pop(1)
0x21d: @@ ClearReplies()
0x21e: Pop(0)
0x21f: PushEmpty(bool, object)
0x220: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x221: Call2 0x1056

0x222: Pop(1)
0x223: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x224: Push((int) 525258)
0x225: Push((int) 30607)
0x226: Push((int) 26626)
0x227: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x228: Pop(3)
0x229: Push((int) 525261)
0x22a: Push((int) -1)
0x22b: Push((int) 26629)
0x22c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22d: Pop(3)
0x22e: GOTO 0x231

0x22f: Return(); Pop(0)

0x230: GOTO 0x214

0x231: PushEmpty(bool)
0x232: Call2 0xf30

0x233: Pop(0)
0x234: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x235: @ lshWaitForAnimEnd()
0x236: Pop(0)
0x237: Push( Stack[3 + Tasks[-1].StackPointer] )
0x238: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x239: GOTO 0x23f

0x23a: PushEmpty(string)
0x23b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x23c: Call2 0xe44

0x23d: Pop(1)
0x23e: GOTO 0x235

0x23f: GOTO 0x24e

0x240: Push("all")
0x241: Push("idle")
0x242: @ PlayAnimation(Stack[-2], Stack[-1])
0x243: Pop(2)
0x244: @ WaitForAnimEnd()
0x245: Pop(0)
0x246: Push( Stack[3 + Tasks[-1].StackPointer] )
0x247: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x248: GOTO 0x24e

0x249: Push("all")
0x24a: Push("idle")
0x24b: @ PlayAnimation(Stack[-2], Stack[-1])
0x24c: Pop(2)
0x24d: GOTO 0x244

0x24e: Return(); Pop(0)

0x24f: PushEmpty()
0x250: PushEmpty(bool)
0x251: Call2 0xf30

0x252: Pop(0)
0x253: Pop(1); Push((bool) Stack[-1] == 0)
0x254: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x255: Return(); Pop(0)

0x256: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x257: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x258: Return(); Pop(0)

0x259: PushEmpty(string, bool)
0x25a: Stack[-2] = Stack[-3]
0x25b: Push("")
0x25c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25e: Stack[-1] = (bool) 0
0x25f: GOTO 0x261

0x260: Stack[-1] = (bool) 1
0x261: Call2 0xe54

0x262: Pop(2)
0x263: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x264: Return(); Pop(0)

0x265: PushEmpty()
0x266: Push((int) 1)
0x267: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x268: PushEmpty()
0x269: Call2 0xe72

0x26a: Pop(0)
0x26b: Push((int) 26628)
0x26c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x26e: PushEmpty(object, object)
0x26f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x270: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x271: Call2 0xf62

0x272: Pop(2)
0x273: Push((int) 26625)
0x274: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x276: PushEmpty(string)
0x277: Stack[-1] = "Neutral"
0x278: Call2 0x24f

0x279: Pop(1)
0x27a: Push((int) 525257)
0x27b: @@ SetMessage(Stack[-1])
0x27c: Pop(1)
0x27d: @@ ClearReplies()
0x27e: Pop(0)
0x27f: PushEmpty(bool, object)
0x280: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x281: Call2 0x1056

0x282: Pop(1)
0x283: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x284: Push((int) 525258)
0x285: Push((int) 30607)
0x286: Push((int) 26626)
0x287: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x288: Pop(3)
0x289: Push((int) 525261)
0x28a: Push((int) -1)
0x28b: Push((int) 26629)
0x28c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28d: Pop(3)
0x28e: Return(); Pop(0)

0x28f: Push((int) 30607)
0x290: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x292: PushEmpty(string)
0x293: Stack[-1] = "Doubt"
0x294: Call2 0x24f

0x295: Pop(1)
0x296: Push((int) 529158)
0x297: @@ SetMessage(Stack[-1])
0x298: Pop(1)
0x299: @@ ClearReplies()
0x29a: Pop(0)
0x29b: Push((int) 529159)
0x29c: Push((int) 30609)
0x29d: Push((int) 30608)
0x29e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29f: Pop(3)
0x2a0: Push((int) 529161)
0x2a1: Push((int) 30611)
0x2a2: Push((int) 30610)
0x2a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a4: Pop(3)
0x2a5: Return(); Pop(0)

0x2a6: Push((int) 30611)
0x2a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2a9: PushEmpty(string)
0x2aa: Stack[-1] = "Sorrow"
0x2ab: Call2 0x24f

0x2ac: Pop(1)
0x2ad: Push((int) 529162)
0x2ae: @@ SetMessage(Stack[-1])
0x2af: Pop(1)
0x2b0: @@ ClearReplies()
0x2b1: Pop(0)
0x2b2: Push((int) 529163)
0x2b3: Push((int) 26627)
0x2b4: Push((int) 30612)
0x2b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b6: Pop(3)
0x2b7: Return(); Pop(0)

0x2b8: Push((int) 30609)
0x2b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2bb: PushEmpty(string)
0x2bc: Stack[-1] = "Smile"
0x2bd: Call2 0x24f

0x2be: Pop(1)
0x2bf: Push((int) 529160)
0x2c0: @@ SetMessage(Stack[-1])
0x2c1: Pop(1)
0x2c2: @@ ClearReplies()
0x2c3: Pop(0)
0x2c4: Push((int) 529164)
0x2c5: Push((int) 26627)
0x2c6: Push((int) 30613)
0x2c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c8: Pop(3)
0x2c9: Return(); Pop(0)

0x2ca: Push((int) 26627)
0x2cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2cc: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2cd: PushEmpty(string)
0x2ce: Stack[-1] = "Neutral"
0x2cf: Call2 0x24f

0x2d0: Pop(1)
0x2d1: Push((int) 525259)
0x2d2: @@ SetMessage(Stack[-1])
0x2d3: Pop(1)
0x2d4: @@ ClearReplies()
0x2d5: Pop(0)
0x2d6: Push((int) 525260)
0x2d7: Push((int) -1)
0x2d8: Push((int) 26628)
0x2d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2da: Pop(3)
0x2db: Push((int) 529166)
0x2dc: Push((int) -1)
0x2dd: Push((int) 30616)
0x2de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2df: Pop(3)
0x2e0: Return(); Pop(0)

0x2e1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2e2: PushEmpty(bool)
0x2e3: Call2 0xf30

0x2e4: Pop(0)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e6: @ lshStopAnimation()
0x2e7: Pop(0)
0x2e8: GOTO 0x2eb

0x2e9: @ StopAnimation()
0x2ea: Pop(0)
0x2eb: Return(); Pop(0)

0x2ec: GOTO 0x266

0x2ed: Return(); Pop(0)

0x2ee: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2ef: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2f0: PushEmpty(bool, object, float)
0x2f1: Stack[-2] = Stack[-12]
0x2f2: Stack[-1] = (float) 70.0
0x2f3: Call2 0xd63

0x2f4: Pop(2)
0x2f5: Pop(1); Push((bool) Stack[-1] == 0)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f7: Stack[-10] = (int) -2
0x2f8: Return(); Pop(8)

0x2f9: @ CreateDialog(Stack[-4])
0x2fa: Pop(0)
0x2fb: PushEmpty(int)
0x2fc: Call2 0xf2a

0x2fd: Pop(0)
0x2fe: @@ SetNPCName(Stack[-1])
0x2ff: Pop(1)
0x300: PushEmpty(int)
0x301: Call2 0xf28

0x302: Pop(0)
0x303: @@ SetNPCDescription(Stack[-1])
0x304: Pop(1)
0x305: PushEmpty(string)
0x306: Call2 0xf2c

0x307: Pop(0)
0x308: @@ SetPhoto(Stack[-1])
0x309: Pop(1)
0x30a: PushEmpty(string)
0x30b: Call2 0xf2e

0x30c: Pop(0)
0x30d: @@ SetPhoto2(Stack[-1])
0x30e: Pop(1)
0x30f: PushEmpty(int)
0x310: Call2 0x11af

0x311: Pop(0)
0x312: @@ SetPlayerName(Stack[-1])
0x313: Pop(1)
0x314: Stack[-2] = (int) -1
0x315: @ IsOverrideActive(Stack[-3])
0x316: Pop(0)
0x317: Push(Stack[-3])
0x318: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x319: Stack[-10] = (int) -2
0x31a: Return(); Pop(8)

0x31b: @ DoDialog(Stack[-4])
0x31c: Pop(0)
0x31d: PushEmpty(bool, object)
0x31e: PushEmpty(object)
0x31f: Call2 0xe79

0x320: Stack[-2] = Stack[-1]
0x321: Pop(1)
0x322: Call2 0xdba

0x323: Pop(2)
0x324: PushEmpty(object, object)
0x325: Stack[-2] = Stack[-11]
0x326: Stack[-1] = Stack[-6]
0x327: Push(-2, 4); TaskCall(5)
0x328: Call2 0x33f

0x329: Pop(-2, 4); TaskReturn
0x32a: Pop(2)
0x32b: @@ IsDialogEnd(Stack[-1])
0x32c: Pop(0)
0x32d: Pop(0); Push((bool) Stack[-1] == 0)
0x32e: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x32f: @ sync()
0x330: Pop(0)
0x331: @@ IsDialogEnd(Stack[-1])
0x332: Pop(0)
0x333: GOTO 0x32d

0x334: PushEmpty(object)
0x335: Stack[-1] = Stack[-10]
0x336: Call2 0xda8

0x337: Pop(1)
0x338: @ StopDialog(Stack[-4])
0x339: Pop(0)
0x33a: @@ GetReturnValue(Stack[-2])
0x33b: Pop(0)
0x33c: Stack[-10] = Stack[-2]
0x33d: Return(); Pop(8)

0x33e: Stack[-4] = 0
0x33f: PushEmpty()
0x340: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x341: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x342: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x343: Push((int) 1)
0x344: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x345: PushEmpty(string)
0x346: Stack[-1] = "Neutral"
0x347: Call2 0x379

0x348: Pop(1)
0x349: Push((int) 525471)
0x34a: @@ SetMessage(Stack[-1])
0x34b: Pop(1)
0x34c: @@ ClearReplies()
0x34d: Pop(0)
0x34e: Push((int) 525472)
0x34f: Push((int) 27550)
0x350: Push((int) 26828)
0x351: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x352: Pop(3)
0x353: Push((int) 526276)
0x354: Push((int) 28085)
0x355: Push((int) 27552)
0x356: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x357: Pop(3)
0x358: GOTO 0x35b

0x359: Return(); Pop(0)

0x35a: GOTO 0x343

0x35b: PushEmpty(bool)
0x35c: Call2 0xf30

0x35d: Pop(0)
0x35e: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x35f: @ lshWaitForAnimEnd()
0x360: Pop(0)
0x361: Push( Stack[3 + Tasks[-1].StackPointer] )
0x362: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x363: GOTO 0x369

0x364: PushEmpty(string)
0x365: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x366: Call2 0xe44

0x367: Pop(1)
0x368: GOTO 0x35f

0x369: GOTO 0x378

0x36a: Push("all")
0x36b: Push("idle")
0x36c: @ PlayAnimation(Stack[-2], Stack[-1])
0x36d: Pop(2)
0x36e: @ WaitForAnimEnd()
0x36f: Pop(0)
0x370: Push( Stack[3 + Tasks[-1].StackPointer] )
0x371: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x372: GOTO 0x378

0x373: Push("all")
0x374: Push("idle")
0x375: @ PlayAnimation(Stack[-2], Stack[-1])
0x376: Pop(2)
0x377: GOTO 0x36e

0x378: Return(); Pop(0)

0x379: PushEmpty()
0x37a: PushEmpty(bool)
0x37b: Call2 0xf30

0x37c: Pop(0)
0x37d: Pop(1); Push((bool) Stack[-1] == 0)
0x37e: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37f: Return(); Pop(0)

0x380: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x381: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x382: Return(); Pop(0)

0x383: PushEmpty(string, bool)
0x384: Stack[-2] = Stack[-3]
0x385: Push("")
0x386: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x387: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x388: Stack[-1] = (bool) 0
0x389: GOTO 0x38b

0x38a: Stack[-1] = (bool) 1
0x38b: Call2 0xe54

0x38c: Pop(2)
0x38d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x38e: Return(); Pop(0)

0x38f: PushEmpty()
0x390: Push((int) 1)
0x391: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x392: PushEmpty()
0x393: Call2 0xe72

0x394: Pop(0)
0x395: Push((int) 26827)
0x396: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x397: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x398: PushEmpty(string)
0x399: Stack[-1] = "Neutral"
0x39a: Call2 0x379

0x39b: Pop(1)
0x39c: Push((int) 525471)
0x39d: @@ SetMessage(Stack[-1])
0x39e: Pop(1)
0x39f: @@ ClearReplies()
0x3a0: Pop(0)
0x3a1: Push((int) 525472)
0x3a2: Push((int) 27550)
0x3a3: Push((int) 26828)
0x3a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a5: Pop(3)
0x3a6: Push((int) 526276)
0x3a7: Push((int) 28085)
0x3a8: Push((int) 27552)
0x3a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3aa: Pop(3)
0x3ab: Return(); Pop(0)

0x3ac: Push((int) 28085)
0x3ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3af: PushEmpty(string)
0x3b0: Stack[-1] = "Neutral"
0x3b1: Call2 0x379

0x3b2: Pop(1)
0x3b3: Push((int) 526805)
0x3b4: @@ SetMessage(Stack[-1])
0x3b5: Pop(1)
0x3b6: @@ ClearReplies()
0x3b7: Pop(0)
0x3b8: Push((int) 526806)
0x3b9: Push((int) -1)
0x3ba: Push((int) 28086)
0x3bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bc: Pop(3)
0x3bd: Return(); Pop(0)

0x3be: Push((int) 27550)
0x3bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3c1: PushEmpty(string)
0x3c2: Stack[-1] = "Neutral"
0x3c3: Call2 0x379

0x3c4: Pop(1)
0x3c5: Push((int) 526274)
0x3c6: @@ SetMessage(Stack[-1])
0x3c7: Pop(1)
0x3c8: @@ ClearReplies()
0x3c9: Pop(0)
0x3ca: Push((int) 526275)
0x3cb: Push((int) -1)
0x3cc: Push((int) 27551)
0x3cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ce: Pop(3)
0x3cf: Return(); Pop(0)

0x3d0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3d1: PushEmpty(bool)
0x3d2: Call2 0xf30

0x3d3: Pop(0)
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d5: @ lshStopAnimation()
0x3d6: Pop(0)
0x3d7: GOTO 0x3da

0x3d8: @ StopAnimation()
0x3d9: Pop(0)
0x3da: Return(); Pop(0)

0x3db: GOTO 0x390

0x3dc: Return(); Pop(0)

0x3dd: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3de: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3df: PushEmpty(bool, object, float)
0x3e0: Stack[-2] = Stack[-12]
0x3e1: Stack[-1] = (float) 70.0
0x3e2: Call2 0xd63

0x3e3: Pop(2)
0x3e4: Pop(1); Push((bool) Stack[-1] == 0)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e6: Stack[-10] = (int) -2
0x3e7: Return(); Pop(8)

0x3e8: @ CreateDialog(Stack[-4])
0x3e9: Pop(0)
0x3ea: PushEmpty(int)
0x3eb: Call2 0xf2a

0x3ec: Pop(0)
0x3ed: @@ SetNPCName(Stack[-1])
0x3ee: Pop(1)
0x3ef: PushEmpty(int)
0x3f0: Call2 0xf28

0x3f1: Pop(0)
0x3f2: @@ SetNPCDescription(Stack[-1])
0x3f3: Pop(1)
0x3f4: PushEmpty(string)
0x3f5: Call2 0xf2c

0x3f6: Pop(0)
0x3f7: @@ SetPhoto(Stack[-1])
0x3f8: Pop(1)
0x3f9: PushEmpty(string)
0x3fa: Call2 0xf2e

0x3fb: Pop(0)
0x3fc: @@ SetPhoto2(Stack[-1])
0x3fd: Pop(1)
0x3fe: PushEmpty(int)
0x3ff: Call2 0x11af

0x400: Pop(0)
0x401: @@ SetPlayerName(Stack[-1])
0x402: Pop(1)
0x403: Stack[-2] = (int) -1
0x404: @ IsOverrideActive(Stack[-3])
0x405: Pop(0)
0x406: Push(Stack[-3])
0x407: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x408: Stack[-10] = (int) -2
0x409: Return(); Pop(8)

0x40a: @ DoDialog(Stack[-4])
0x40b: Pop(0)
0x40c: PushEmpty(bool, object)
0x40d: PushEmpty(object)
0x40e: Call2 0xe79

0x40f: Stack[-2] = Stack[-1]
0x410: Pop(1)
0x411: Call2 0xdba

0x412: Pop(2)
0x413: PushEmpty(object, object)
0x414: Stack[-2] = Stack[-11]
0x415: Stack[-1] = Stack[-6]
0x416: Push(-2, 4); TaskCall(7)
0x417: Call2 0x42e

0x418: Pop(-2, 4); TaskReturn
0x419: Pop(2)
0x41a: @@ IsDialogEnd(Stack[-1])
0x41b: Pop(0)
0x41c: Pop(0); Push((bool) Stack[-1] == 0)
0x41d: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x41e: @ sync()
0x41f: Pop(0)
0x420: @@ IsDialogEnd(Stack[-1])
0x421: Pop(0)
0x422: GOTO 0x41c

0x423: PushEmpty(object)
0x424: Stack[-1] = Stack[-10]
0x425: Call2 0xda8

0x426: Pop(1)
0x427: @ StopDialog(Stack[-4])
0x428: Pop(0)
0x429: @@ GetReturnValue(Stack[-2])
0x42a: Pop(0)
0x42b: Stack[-10] = Stack[-2]
0x42c: Return(); Pop(8)

0x42d: Stack[-4] = 0
0x42e: PushEmpty()
0x42f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x430: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x431: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x432: Push((int) 1)
0x433: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x434: PushEmpty(bool, object)
0x435: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x436: Call2 0x1091

0x437: Pop(1)
0x438: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x439: PushEmpty(object, object)
0x43a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x43b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x43c: Call2 0xfbd

0x43d: Pop(2)
0x43e: PushEmpty(string)
0x43f: Stack[-1] = "Neutral"
0x440: Call2 0x4c0

0x441: Pop(1)
0x442: Push((int) 526373)
0x443: @@ SetMessage(Stack[-1])
0x444: Pop(1)
0x445: @@ ClearReplies()
0x446: Pop(0)
0x447: Push((int) 526374)
0x448: Push((int) 27655)
0x449: Push((int) 27654)
0x44a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44b: Pop(3)
0x44c: Push((int) 528676)
0x44d: Push((int) 27655)
0x44e: Push((int) 30089)
0x44f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x450: Pop(3)
0x451: GOTO 0x4a2

0x452: PushEmpty(string)
0x453: Stack[-1] = "Neutral"
0x454: Call2 0x4c0

0x455: Pop(1)
0x456: Push((int) 526173)
0x457: @@ SetMessage(Stack[-1])
0x458: Pop(1)
0x459: @@ ClearReplies()
0x45a: Pop(0)
0x45b: PushEmpty(bool)
0x45c: Stack[-1] = (bool) 0
0x45d: PushEmpty(bool, object)
0x45e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x45f: Call2 0x106d

0x460: Pop(1)
0x461: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x462: PushEmpty(bool, object)
0x463: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x464: Call2 0x1079

0x465: Pop(1)
0x466: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x467: Stack[-1] = (bool) 1
0x468: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x469: Push((int) 526174)
0x46a: Push((int) 27455)
0x46b: Push((int) 27454)
0x46c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46d: Pop(3)
0x46e: PushEmpty(bool)
0x46f: Stack[-1] = (bool) 0
0x470: PushEmpty(bool, object)
0x471: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x472: Call2 0x106d

0x473: Pop(1)
0x474: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x475: PushEmpty(bool, object)
0x476: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x477: Call2 0x1062

0x478: Pop(1)
0x479: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x47a: Stack[-1] = (bool) 1
0x47b: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47c: Push((int) 526178)
0x47d: Push((int) 27459)
0x47e: Push((int) 27458)
0x47f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x480: Pop(3)
0x481: PushEmpty(bool, object)
0x482: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x483: Call2 0x1085

0x484: Pop(1)
0x485: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x486: Push((int) 526378)
0x487: Push((int) 27659)
0x488: Push((int) 27658)
0x489: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48a: Pop(3)
0x48b: PushEmpty(bool, object)
0x48c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x48d: Call2 0x109d

0x48e: Pop(1)
0x48f: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x490: Push((int) 526387)
0x491: Push((int) 44876)
0x492: Push((int) 27667)
0x493: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x494: Pop(3)
0x495: Push((int) 526181)
0x496: Push((int) -1)
0x497: Push((int) 27461)
0x498: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x499: Pop(3)
0x49a: Push((int) 528675)
0x49b: Push((int) -1)
0x49c: Push((int) 30088)
0x49d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49e: Pop(3)
0x49f: GOTO 0x4a2

0x4a0: Return(); Pop(0)

0x4a1: GOTO 0x432

0x4a2: PushEmpty(bool)
0x4a3: Call2 0xf30

0x4a4: Pop(0)
0x4a5: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4a6: @ lshWaitForAnimEnd()
0x4a7: Pop(0)
0x4a8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4aa: GOTO 0x4b0

0x4ab: PushEmpty(string)
0x4ac: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4ad: Call2 0xe44

0x4ae: Pop(1)
0x4af: GOTO 0x4a6

0x4b0: GOTO 0x4bf

0x4b1: Push("all")
0x4b2: Push("idle")
0x4b3: @ PlayAnimation(Stack[-2], Stack[-1])
0x4b4: Pop(2)
0x4b5: @ WaitForAnimEnd()
0x4b6: Pop(0)
0x4b7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4b8: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b9: GOTO 0x4bf

0x4ba: Push("all")
0x4bb: Push("idle")
0x4bc: @ PlayAnimation(Stack[-2], Stack[-1])
0x4bd: Pop(2)
0x4be: GOTO 0x4b5

0x4bf: Return(); Pop(0)

0x4c0: PushEmpty()
0x4c1: PushEmpty(bool)
0x4c2: Call2 0xf30

0x4c3: Pop(0)
0x4c4: Pop(1); Push((bool) Stack[-1] == 0)
0x4c5: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c6: Return(); Pop(0)

0x4c7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4c8: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c9: Return(); Pop(0)

0x4ca: PushEmpty(string, bool)
0x4cb: Stack[-2] = Stack[-3]
0x4cc: Push("")
0x4cd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4cf: Stack[-1] = (bool) 0
0x4d0: GOTO 0x4d2

0x4d1: Stack[-1] = (bool) 1
0x4d2: Call2 0xe54

0x4d3: Pop(2)
0x4d4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4d5: Return(); Pop(0)

0x4d6: PushEmpty()
0x4d7: Push((int) 1)
0x4d8: IF (Stack[-1] == 0) GOTO 0x729; Pop(1)

0x4d9: PushEmpty()
0x4da: Call2 0xe72

0x4db: Pop(0)
0x4dc: Push((int) 27656)
0x4dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4de: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4df: PushEmpty(object, object)
0x4e0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4e1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e2: Call2 0xf9e

0x4e3: Pop(2)
0x4e4: PushEmpty(object, object)
0x4e5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4e6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e7: Call2 0xff1

0x4e8: Pop(2)
0x4e9: PushEmpty(object, object)
0x4ea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ec: Call2 0xfc3

0x4ed: Pop(2)
0x4ee: PushEmpty(object, object)
0x4ef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4f0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f1: Call2 0xf32

0x4f2: Pop(2)
0x4f3: Push((int) 27454)
0x4f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f5: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4f6: PushEmpty(object, object)
0x4f7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f9: Call2 0xf8b

0x4fa: Pop(2)
0x4fb: Push((int) 27456)
0x4fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4fd: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x4fe: PushEmpty(object, object)
0x4ff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x500: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x501: Call2 0xf6b

0x502: Pop(2)
0x503: Push((int) 27460)
0x504: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x505: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x506: PushEmpty(object, object)
0x507: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x508: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x509: Call2 0xf91

0x50a: Pop(2)
0x50b: Push((int) 27660)
0x50c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x50d: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x50e: PushEmpty(object, object)
0x50f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x510: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x511: Call2 0xf9e

0x512: Pop(2)
0x513: PushEmpty(object, object)
0x514: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x515: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x516: Call2 0xfc3

0x517: Pop(2)
0x518: PushEmpty(object, object)
0x519: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x51a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x51b: Call2 0xff1

0x51c: Pop(2)
0x51d: PushEmpty(object, object)
0x51e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x51f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x520: Call2 0xf32

0x521: Pop(2)
0x522: Push((int) 27669)
0x523: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x524: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x525: PushEmpty(object, object)
0x526: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x527: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x528: Call2 0xfce

0x529: Pop(2)
0x52a: PushEmpty(object, object)
0x52b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x52d: Call2 0xfd8

0x52e: Pop(2)
0x52f: PushEmpty(object, object)
0x530: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x531: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x532: Call2 0xfeb

0x533: Pop(2)
0x534: Push((int) 44880)
0x535: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x536: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x537: PushEmpty(object, object)
0x538: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x539: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53a: Call2 0xfce

0x53b: Pop(2)
0x53c: Push((int) 27653)
0x53d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53e: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x53f: PushEmpty(bool, object)
0x540: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x541: Call2 0x1091

0x542: Pop(1)
0x543: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x544: PushEmpty(object, object)
0x545: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x546: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x547: Call2 0xfbd

0x548: Pop(2)
0x549: PushEmpty(string)
0x54a: Stack[-1] = "Neutral"
0x54b: Call2 0x4c0

0x54c: Pop(1)
0x54d: Push((int) 526373)
0x54e: @@ SetMessage(Stack[-1])
0x54f: Pop(1)
0x550: @@ ClearReplies()
0x551: Pop(0)
0x552: Push((int) 526374)
0x553: Push((int) 27655)
0x554: Push((int) 27654)
0x555: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x556: Pop(3)
0x557: Push((int) 528676)
0x558: Push((int) 27655)
0x559: Push((int) 30089)
0x55a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55b: Pop(3)
0x55c: Return(); Pop(0)

0x55d: PushEmpty(string)
0x55e: Stack[-1] = "Neutral"
0x55f: Call2 0x4c0

0x560: Pop(1)
0x561: Push((int) 526173)
0x562: @@ SetMessage(Stack[-1])
0x563: Pop(1)
0x564: @@ ClearReplies()
0x565: Pop(0)
0x566: PushEmpty(bool)
0x567: Stack[-1] = (bool) 0
0x568: PushEmpty(bool, object)
0x569: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x56a: Call2 0x106d

0x56b: Pop(1)
0x56c: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x56d: PushEmpty(bool, object)
0x56e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x56f: Call2 0x1079

0x570: Pop(1)
0x571: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x572: Stack[-1] = (bool) 1
0x573: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x574: Push((int) 526174)
0x575: Push((int) 27455)
0x576: Push((int) 27454)
0x577: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x578: Pop(3)
0x579: PushEmpty(bool)
0x57a: Stack[-1] = (bool) 0
0x57b: PushEmpty(bool, object)
0x57c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x57d: Call2 0x106d

0x57e: Pop(1)
0x57f: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x580: PushEmpty(bool, object)
0x581: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x582: Call2 0x1062

0x583: Pop(1)
0x584: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x585: Stack[-1] = (bool) 1
0x586: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x587: Push((int) 526178)
0x588: Push((int) 27459)
0x589: Push((int) 27458)
0x58a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58b: Pop(3)
0x58c: PushEmpty(bool, object)
0x58d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x58e: Call2 0x1085

0x58f: Pop(1)
0x590: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x591: Push((int) 526378)
0x592: Push((int) 27659)
0x593: Push((int) 27658)
0x594: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x595: Pop(3)
0x596: PushEmpty(bool, object)
0x597: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x598: Call2 0x109d

0x599: Pop(1)
0x59a: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59b: Push((int) 526387)
0x59c: Push((int) 44876)
0x59d: Push((int) 27667)
0x59e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59f: Pop(3)
0x5a0: Push((int) 526181)
0x5a1: Push((int) -1)
0x5a2: Push((int) 27461)
0x5a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a4: Pop(3)
0x5a5: Push((int) 528675)
0x5a6: Push((int) -1)
0x5a7: Push((int) 30088)
0x5a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a9: Pop(3)
0x5aa: Return(); Pop(0)

0x5ab: Push((int) 44876)
0x5ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ad: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5ae: PushEmpty(string)
0x5af: Stack[-1] = "Sorrow"
0x5b0: Call2 0x4c0

0x5b1: Pop(1)
0x5b2: Push((int) 542490)
0x5b3: @@ SetMessage(Stack[-1])
0x5b4: Pop(1)
0x5b5: @@ ClearReplies()
0x5b6: Pop(0)
0x5b7: Push((int) 542491)
0x5b8: Push((int) 27668)
0x5b9: Push((int) 44877)
0x5ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bb: Pop(3)
0x5bc: Push((int) 542492)
0x5bd: Push((int) 27668)
0x5be: Push((int) 44878)
0x5bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c0: Pop(3)
0x5c1: Return(); Pop(0)

0x5c2: Push((int) 27668)
0x5c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c4: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5c5: PushEmpty(string)
0x5c6: Stack[-1] = "Smile"
0x5c7: Call2 0x4c0

0x5c8: Pop(1)
0x5c9: Push((int) 526388)
0x5ca: @@ SetMessage(Stack[-1])
0x5cb: Pop(1)
0x5cc: @@ ClearReplies()
0x5cd: Pop(0)
0x5ce: Push((int) 526389)
0x5cf: Push((int) -1)
0x5d0: Push((int) 27669)
0x5d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d2: Pop(3)
0x5d3: Push((int) 542493)
0x5d4: Push((int) -1)
0x5d5: Push((int) 44880)
0x5d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d7: Pop(3)
0x5d8: Return(); Pop(0)

0x5d9: Push((int) 27659)
0x5da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5db: IF (Stack[-1] == 0) GOTO 0x5eb; Pop(1)

0x5dc: PushEmpty(string)
0x5dd: Stack[-1] = "Neutral"
0x5de: Call2 0x4c0

0x5df: Pop(1)
0x5e0: Push((int) 526379)
0x5e1: @@ SetMessage(Stack[-1])
0x5e2: Pop(1)
0x5e3: @@ ClearReplies()
0x5e4: Pop(0)
0x5e5: Push((int) 526380)
0x5e6: Push((int) -1)
0x5e7: Push((int) 27660)
0x5e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e9: Pop(3)
0x5ea: Return(); Pop(0)

0x5eb: Push((int) 27459)
0x5ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ed: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5ee: PushEmpty(string)
0x5ef: Stack[-1] = "Neutral"
0x5f0: Call2 0x4c0

0x5f1: Pop(1)
0x5f2: Push((int) 526179)
0x5f3: @@ SetMessage(Stack[-1])
0x5f4: Pop(1)
0x5f5: @@ ClearReplies()
0x5f6: Pop(0)
0x5f7: Push((int) 528687)
0x5f8: Push((int) 30103)
0x5f9: Push((int) 30102)
0x5fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fb: Pop(3)
0x5fc: Return(); Pop(0)

0x5fd: Push((int) 30103)
0x5fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ff: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x600: PushEmpty(string)
0x601: Stack[-1] = "Doubt"
0x602: Call2 0x4c0

0x603: Pop(1)
0x604: Push((int) 528688)
0x605: @@ SetMessage(Stack[-1])
0x606: Pop(1)
0x607: @@ ClearReplies()
0x608: Pop(0)
0x609: Push((int) 528689)
0x60a: Push((int) 30105)
0x60b: Push((int) 30104)
0x60c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60d: Pop(3)
0x60e: Return(); Pop(0)

0x60f: Push((int) 30105)
0x610: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x611: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x612: PushEmpty(string)
0x613: Stack[-1] = "Sorrow"
0x614: Call2 0x4c0

0x615: Pop(1)
0x616: Push((int) 528690)
0x617: @@ SetMessage(Stack[-1])
0x618: Pop(1)
0x619: @@ ClearReplies()
0x61a: Pop(0)
0x61b: Push((int) 528691)
0x61c: Push((int) 30107)
0x61d: Push((int) 30106)
0x61e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61f: Pop(3)
0x620: Push((int) 528697)
0x621: Push((int) 30113)
0x622: Push((int) 30112)
0x623: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x624: Pop(3)
0x625: Return(); Pop(0)

0x626: Push((int) 30113)
0x627: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x628: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x629: PushEmpty(string)
0x62a: Stack[-1] = "Neutral"
0x62b: Call2 0x4c0

0x62c: Pop(1)
0x62d: Push((int) 528698)
0x62e: @@ SetMessage(Stack[-1])
0x62f: Pop(1)
0x630: @@ ClearReplies()
0x631: Pop(0)
0x632: Push((int) 528699)
0x633: Push((int) 30107)
0x634: Push((int) 30114)
0x635: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x636: Pop(3)
0x637: Return(); Pop(0)

0x638: Push((int) 30107)
0x639: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x63a: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x63b: PushEmpty(string)
0x63c: Stack[-1] = "Neutral"
0x63d: Call2 0x4c0

0x63e: Pop(1)
0x63f: Push((int) 528692)
0x640: @@ SetMessage(Stack[-1])
0x641: Pop(1)
0x642: @@ ClearReplies()
0x643: Pop(0)
0x644: Push((int) 528693)
0x645: Push((int) 30109)
0x646: Push((int) 30108)
0x647: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x648: Pop(3)
0x649: Return(); Pop(0)

0x64a: Push((int) 30109)
0x64b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x64c: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x64d: PushEmpty(string)
0x64e: Stack[-1] = "Doubt"
0x64f: Call2 0x4c0

0x650: Pop(1)
0x651: Push((int) 528694)
0x652: @@ SetMessage(Stack[-1])
0x653: Pop(1)
0x654: @@ ClearReplies()
0x655: Pop(0)
0x656: Push((int) 528702)
0x657: Push((int) 30118)
0x658: Push((int) 30117)
0x659: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65a: Pop(3)
0x65b: Push((int) 528700)
0x65c: Push((int) 30116)
0x65d: Push((int) 30115)
0x65e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65f: Pop(3)
0x660: Return(); Pop(0)

0x661: Push((int) 30116)
0x662: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x663: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x664: PushEmpty(string)
0x665: Stack[-1] = "Neutral"
0x666: Call2 0x4c0

0x667: Pop(1)
0x668: Push((int) 528701)
0x669: @@ SetMessage(Stack[-1])
0x66a: Pop(1)
0x66b: @@ ClearReplies()
0x66c: Pop(0)
0x66d: Push((int) 528704)
0x66e: Push((int) 30118)
0x66f: Push((int) 30119)
0x670: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x671: Pop(3)
0x672: Return(); Pop(0)

0x673: Push((int) 30118)
0x674: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x675: IF (Stack[-1] == 0) GOTO 0x685; Pop(1)

0x676: PushEmpty(string)
0x677: Stack[-1] = "Doubt"
0x678: Call2 0x4c0

0x679: Pop(1)
0x67a: Push((int) 528703)
0x67b: @@ SetMessage(Stack[-1])
0x67c: Pop(1)
0x67d: @@ ClearReplies()
0x67e: Pop(0)
0x67f: Push((int) 528695)
0x680: Push((int) 30111)
0x681: Push((int) 30110)
0x682: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x683: Pop(3)
0x684: Return(); Pop(0)

0x685: Push((int) 30111)
0x686: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x687: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x688: PushEmpty(string)
0x689: Stack[-1] = "Doubt"
0x68a: Call2 0x4c0

0x68b: Pop(1)
0x68c: Push((int) 528696)
0x68d: @@ SetMessage(Stack[-1])
0x68e: Pop(1)
0x68f: @@ ClearReplies()
0x690: Pop(0)
0x691: Push((int) 526180)
0x692: Push((int) -1)
0x693: Push((int) 27460)
0x694: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x695: Pop(3)
0x696: Return(); Pop(0)

0x697: Push((int) 27455)
0x698: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x699: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x69a: PushEmpty(string)
0x69b: Stack[-1] = "Sorrow"
0x69c: Call2 0x4c0

0x69d: Pop(1)
0x69e: Push((int) 526175)
0x69f: @@ SetMessage(Stack[-1])
0x6a0: Pop(1)
0x6a1: @@ ClearReplies()
0x6a2: Pop(0)
0x6a3: Push((int) 528685)
0x6a4: Push((int) 30101)
0x6a5: Push((int) 30100)
0x6a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a7: Pop(3)
0x6a8: Return(); Pop(0)

0x6a9: Push((int) 30101)
0x6aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ab: IF (Stack[-1] == 0) GOTO 0x6cb; Pop(1)

0x6ac: PushEmpty(string)
0x6ad: Stack[-1] = "Sorrow"
0x6ae: Call2 0x4c0

0x6af: Pop(1)
0x6b0: Push((int) 528686)
0x6b1: @@ SetMessage(Stack[-1])
0x6b2: Pop(1)
0x6b3: @@ ClearReplies()
0x6b4: Pop(0)
0x6b5: PushEmpty(bool, object)
0x6b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b7: Call2 0x1062

0x6b8: Pop(1)
0x6b9: Pop(1); Push((bool) Stack[-1] == 0)
0x6ba: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6bb: Push((int) 526176)
0x6bc: Push((int) -1)
0x6bd: Push((int) 27456)
0x6be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bf: Pop(3)
0x6c0: PushEmpty(bool, object)
0x6c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c2: Call2 0x1062

0x6c3: Pop(1)
0x6c4: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6c5: Push((int) 526177)
0x6c6: Push((int) 27459)
0x6c7: Push((int) 27457)
0x6c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c9: Pop(3)
0x6ca: Return(); Pop(0)

0x6cb: Push((int) 27655)
0x6cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6cd: IF (Stack[-1] == 0) GOTO 0x6dd; Pop(1)

0x6ce: PushEmpty(string)
0x6cf: Stack[-1] = "Neutral"
0x6d0: Call2 0x4c0

0x6d1: Pop(1)
0x6d2: Push((int) 526375)
0x6d3: @@ SetMessage(Stack[-1])
0x6d4: Pop(1)
0x6d5: @@ ClearReplies()
0x6d6: Pop(0)
0x6d7: Push((int) 528677)
0x6d8: Push((int) 30092)
0x6d9: Push((int) 30091)
0x6da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6db: Pop(3)
0x6dc: Return(); Pop(0)

0x6dd: Push((int) 30092)
0x6de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6df: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6e0: PushEmpty(string)
0x6e1: Stack[-1] = "Doubt"
0x6e2: Call2 0x4c0

0x6e3: Pop(1)
0x6e4: Push((int) 528678)
0x6e5: @@ SetMessage(Stack[-1])
0x6e6: Pop(1)
0x6e7: @@ ClearReplies()
0x6e8: Pop(0)
0x6e9: Push((int) 528679)
0x6ea: Push((int) 30094)
0x6eb: Push((int) 30093)
0x6ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ed: Pop(3)
0x6ee: Push((int) 528681)
0x6ef: Push((int) 30094)
0x6f0: Push((int) 30095)
0x6f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f2: Pop(3)
0x6f3: Return(); Pop(0)

0x6f4: Push((int) 30094)
0x6f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f6: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x6f7: PushEmpty(string)
0x6f8: Stack[-1] = "Doubt"
0x6f9: Call2 0x4c0

0x6fa: Pop(1)
0x6fb: Push((int) 528680)
0x6fc: @@ SetMessage(Stack[-1])
0x6fd: Pop(1)
0x6fe: @@ ClearReplies()
0x6ff: Pop(0)
0x700: Push((int) 528682)
0x701: Push((int) 30098)
0x702: Push((int) 30097)
0x703: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x704: Pop(3)
0x705: Return(); Pop(0)

0x706: Push((int) 30098)
0x707: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x708: IF (Stack[-1] == 0) GOTO 0x71d; Pop(1)

0x709: PushEmpty(string)
0x70a: Stack[-1] = "Neutral"
0x70b: Call2 0x4c0

0x70c: Pop(1)
0x70d: Push((int) 528683)
0x70e: @@ SetMessage(Stack[-1])
0x70f: Pop(1)
0x710: @@ ClearReplies()
0x711: Pop(0)
0x712: Push((int) 526376)
0x713: Push((int) -1)
0x714: Push((int) 27656)
0x715: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x716: Pop(3)
0x717: Push((int) 526377)
0x718: Push((int) -1)
0x719: Push((int) 27657)
0x71a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71b: Pop(3)
0x71c: Return(); Pop(0)

0x71d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x71e: PushEmpty(bool)
0x71f: Call2 0xf30

0x720: Pop(0)
0x721: IF (Stack[-1] == 0) GOTO 0x725; Pop(1)

0x722: @ lshStopAnimation()
0x723: Pop(0)
0x724: GOTO 0x727

0x725: @ StopAnimation()
0x726: Pop(0)
0x727: Return(); Pop(0)

0x728: GOTO 0x4d7

0x729: Return(); Pop(0)

0x72a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x72b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x72c: PushEmpty(bool, object, float)
0x72d: Stack[-2] = Stack[-12]
0x72e: Stack[-1] = (float) 70.0
0x72f: Call2 0xd63

0x730: Pop(2)
0x731: Pop(1); Push((bool) Stack[-1] == 0)
0x732: IF (Stack[-1] == 0) GOTO 0x735; Pop(1)

0x733: Stack[-10] = (int) -2
0x734: Return(); Pop(8)

0x735: @ CreateDialog(Stack[-4])
0x736: Pop(0)
0x737: PushEmpty(int)
0x738: Call2 0xf2a

0x739: Pop(0)
0x73a: @@ SetNPCName(Stack[-1])
0x73b: Pop(1)
0x73c: PushEmpty(int)
0x73d: Call2 0xf28

0x73e: Pop(0)
0x73f: @@ SetNPCDescription(Stack[-1])
0x740: Pop(1)
0x741: PushEmpty(string)
0x742: Call2 0xf2c

0x743: Pop(0)
0x744: @@ SetPhoto(Stack[-1])
0x745: Pop(1)
0x746: PushEmpty(string)
0x747: Call2 0xf2e

0x748: Pop(0)
0x749: @@ SetPhoto2(Stack[-1])
0x74a: Pop(1)
0x74b: PushEmpty(int)
0x74c: Call2 0x11af

0x74d: Pop(0)
0x74e: @@ SetPlayerName(Stack[-1])
0x74f: Pop(1)
0x750: Stack[-2] = (int) -1
0x751: @ IsOverrideActive(Stack[-3])
0x752: Pop(0)
0x753: Push(Stack[-3])
0x754: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x755: Stack[-10] = (int) -2
0x756: Return(); Pop(8)

0x757: @ DoDialog(Stack[-4])
0x758: Pop(0)
0x759: PushEmpty(bool, object)
0x75a: PushEmpty(object)
0x75b: Call2 0xe79

0x75c: Stack[-2] = Stack[-1]
0x75d: Pop(1)
0x75e: Call2 0xdba

0x75f: Pop(2)
0x760: PushEmpty(object, object)
0x761: Stack[-2] = Stack[-11]
0x762: Stack[-1] = Stack[-6]
0x763: Push(-2, 4); TaskCall(9)
0x764: Call2 0x77b

0x765: Pop(-2, 4); TaskReturn
0x766: Pop(2)
0x767: @@ IsDialogEnd(Stack[-1])
0x768: Pop(0)
0x769: Pop(0); Push((bool) Stack[-1] == 0)
0x76a: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76b: @ sync()
0x76c: Pop(0)
0x76d: @@ IsDialogEnd(Stack[-1])
0x76e: Pop(0)
0x76f: GOTO 0x769

0x770: PushEmpty(object)
0x771: Stack[-1] = Stack[-10]
0x772: Call2 0xda8

0x773: Pop(1)
0x774: @ StopDialog(Stack[-4])
0x775: Pop(0)
0x776: @@ GetReturnValue(Stack[-2])
0x777: Pop(0)
0x778: Stack[-10] = Stack[-2]
0x779: Return(); Pop(8)

0x77a: Stack[-4] = 0
0x77b: PushEmpty()
0x77c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x77d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x77e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x77f: Push((int) 1)
0x780: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x781: PushEmpty(string)
0x782: Stack[-1] = "Neutral"
0x783: Call2 0x7bf

0x784: Pop(1)
0x785: Push((int) 527204)
0x786: @@ SetMessage(Stack[-1])
0x787: Pop(1)
0x788: @@ ClearReplies()
0x789: Pop(0)
0x78a: PushEmpty(bool, object)
0x78b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x78c: Call2 0x10a9

0x78d: Pop(1)
0x78e: IF (Stack[-1] == 0) GOTO 0x794; Pop(1)

0x78f: Push((int) 527205)
0x790: Push((int) 28514)
0x791: Push((int) 28513)
0x792: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x793: Pop(3)
0x794: Push((int) 527210)
0x795: Push((int) -1)
0x796: Push((int) 28518)
0x797: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x798: Pop(3)
0x799: Push((int) 527533)
0x79a: Push((int) -1)
0x79b: Push((int) 28871)
0x79c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79d: Pop(3)
0x79e: GOTO 0x7a1

0x79f: Return(); Pop(0)

0x7a0: GOTO 0x77f

0x7a1: PushEmpty(bool)
0x7a2: Call2 0xf30

0x7a3: Pop(0)
0x7a4: IF (Stack[-1] == 0) GOTO 0x7b0; Pop(1)

0x7a5: @ lshWaitForAnimEnd()
0x7a6: Pop(0)
0x7a7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7a8: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7a9: GOTO 0x7af

0x7aa: PushEmpty(string)
0x7ab: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7ac: Call2 0xe44

0x7ad: Pop(1)
0x7ae: GOTO 0x7a5

0x7af: GOTO 0x7be

0x7b0: Push("all")
0x7b1: Push("idle")
0x7b2: @ PlayAnimation(Stack[-2], Stack[-1])
0x7b3: Pop(2)
0x7b4: @ WaitForAnimEnd()
0x7b5: Pop(0)
0x7b6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7b7: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b8: GOTO 0x7be

0x7b9: Push("all")
0x7ba: Push("idle")
0x7bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x7bc: Pop(2)
0x7bd: GOTO 0x7b4

0x7be: Return(); Pop(0)

0x7bf: PushEmpty()
0x7c0: PushEmpty(bool)
0x7c1: Call2 0xf30

0x7c2: Pop(0)
0x7c3: Pop(1); Push((bool) Stack[-1] == 0)
0x7c4: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c5: Return(); Pop(0)

0x7c6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x7c7: IF (Stack[-1] == 0) GOTO 0x7c9; Pop(1)

0x7c8: Return(); Pop(0)

0x7c9: PushEmpty(string, bool)
0x7ca: Stack[-2] = Stack[-3]
0x7cb: Push("")
0x7cc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7cd: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7ce: Stack[-1] = (bool) 0
0x7cf: GOTO 0x7d1

0x7d0: Stack[-1] = (bool) 1
0x7d1: Call2 0xe54

0x7d2: Pop(2)
0x7d3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x7d4: Return(); Pop(0)

0x7d5: PushEmpty()
0x7d6: Push((int) 1)
0x7d7: IF (Stack[-1] == 0) GOTO 0x8a2; Pop(1)

0x7d8: PushEmpty()
0x7d9: Call2 0xe72

0x7da: Pop(0)
0x7db: Push((int) 28885)
0x7dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7dd: IF (Stack[-1] == 0) GOTO 0x7e8; Pop(1)

0x7de: PushEmpty(object, object)
0x7df: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7e1: Call2 0xfe2

0x7e2: Pop(2)
0x7e3: PushEmpty(object, object)
0x7e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7e6: Call2 0xf42

0x7e7: Pop(2)
0x7e8: Push((int) 28512)
0x7e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ea: IF (Stack[-1] == 0) GOTO 0x809; Pop(1)

0x7eb: PushEmpty(string)
0x7ec: Stack[-1] = "Neutral"
0x7ed: Call2 0x7bf

0x7ee: Pop(1)
0x7ef: Push((int) 527204)
0x7f0: @@ SetMessage(Stack[-1])
0x7f1: Pop(1)
0x7f2: @@ ClearReplies()
0x7f3: Pop(0)
0x7f4: PushEmpty(bool, object)
0x7f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f6: Call2 0x10a9

0x7f7: Pop(1)
0x7f8: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7f9: Push((int) 527205)
0x7fa: Push((int) 28514)
0x7fb: Push((int) 28513)
0x7fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fd: Pop(3)
0x7fe: Push((int) 527210)
0x7ff: Push((int) -1)
0x800: Push((int) 28518)
0x801: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x802: Pop(3)
0x803: Push((int) 527533)
0x804: Push((int) -1)
0x805: Push((int) 28871)
0x806: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x807: Pop(3)
0x808: Return(); Pop(0)

0x809: Push((int) 28514)
0x80a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x80b: IF (Stack[-1] == 0) GOTO 0x81b; Pop(1)

0x80c: PushEmpty(string)
0x80d: Stack[-1] = "Sorrow"
0x80e: Call2 0x7bf

0x80f: Pop(1)
0x810: Push((int) 527206)
0x811: @@ SetMessage(Stack[-1])
0x812: Pop(1)
0x813: @@ ClearReplies()
0x814: Pop(0)
0x815: Push((int) 527207)
0x816: Push((int) 28516)
0x817: Push((int) 28515)
0x818: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x819: Pop(3)
0x81a: Return(); Pop(0)

0x81b: Push((int) 28516)
0x81c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81d: IF (Stack[-1] == 0) GOTO 0x832; Pop(1)

0x81e: PushEmpty(string)
0x81f: Stack[-1] = "Doubt"
0x820: Call2 0x7bf

0x821: Pop(1)
0x822: Push((int) 527208)
0x823: @@ SetMessage(Stack[-1])
0x824: Pop(1)
0x825: @@ ClearReplies()
0x826: Pop(0)
0x827: Push((int) 527534)
0x828: Push((int) 28874)
0x829: Push((int) 28872)
0x82a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82b: Pop(3)
0x82c: Push((int) 527535)
0x82d: Push((int) 28874)
0x82e: Push((int) 28873)
0x82f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x830: Pop(3)
0x831: Return(); Pop(0)

0x832: Push((int) 28874)
0x833: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x834: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x835: PushEmpty(string)
0x836: Stack[-1] = "Doubt"
0x837: Call2 0x7bf

0x838: Pop(1)
0x839: Push((int) 527536)
0x83a: @@ SetMessage(Stack[-1])
0x83b: Pop(1)
0x83c: @@ ClearReplies()
0x83d: Pop(0)
0x83e: Push((int) 527537)
0x83f: Push((int) 28876)
0x840: Push((int) 28875)
0x841: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x842: Pop(3)
0x843: Push((int) 527539)
0x844: Push((int) 28876)
0x845: Push((int) 28878)
0x846: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x847: Pop(3)
0x848: Return(); Pop(0)

0x849: Push((int) 28876)
0x84a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x84b: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x84c: PushEmpty(string)
0x84d: Stack[-1] = "Doubt"
0x84e: Call2 0x7bf

0x84f: Pop(1)
0x850: Push((int) 527538)
0x851: @@ SetMessage(Stack[-1])
0x852: Pop(1)
0x853: @@ ClearReplies()
0x854: Pop(0)
0x855: Push((int) 527540)
0x856: Push((int) 28881)
0x857: Push((int) 28880)
0x858: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x859: Pop(3)
0x85a: Return(); Pop(0)

0x85b: Push((int) 28881)
0x85c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x85d: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x85e: PushEmpty(string)
0x85f: Stack[-1] = "Sorrow"
0x860: Call2 0x7bf

0x861: Pop(1)
0x862: Push((int) 527541)
0x863: @@ SetMessage(Stack[-1])
0x864: Pop(1)
0x865: @@ ClearReplies()
0x866: Pop(0)
0x867: Push((int) 527542)
0x868: Push((int) 28883)
0x869: Push((int) 28882)
0x86a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86b: Pop(3)
0x86c: Return(); Pop(0)

0x86d: Push((int) 28883)
0x86e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x86f: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x870: PushEmpty(string)
0x871: Stack[-1] = "Sorrow"
0x872: Call2 0x7bf

0x873: Pop(1)
0x874: Push((int) 527543)
0x875: @@ SetMessage(Stack[-1])
0x876: Pop(1)
0x877: @@ ClearReplies()
0x878: Pop(0)
0x879: Push((int) 527209)
0x87a: Push((int) 28884)
0x87b: Push((int) 28517)
0x87c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87d: Pop(3)
0x87e: Push((int) 527546)
0x87f: Push((int) 28884)
0x880: Push((int) 28886)
0x881: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x882: Pop(3)
0x883: Return(); Pop(0)

0x884: Push((int) 28884)
0x885: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x886: IF (Stack[-1] == 0) GOTO 0x896; Pop(1)

0x887: PushEmpty(string)
0x888: Stack[-1] = "Smile"
0x889: Call2 0x7bf

0x88a: Pop(1)
0x88b: Push((int) 527544)
0x88c: @@ SetMessage(Stack[-1])
0x88d: Pop(1)
0x88e: @@ ClearReplies()
0x88f: Pop(0)
0x890: Push((int) 527545)
0x891: Push((int) -1)
0x892: Push((int) 28885)
0x893: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x894: Pop(3)
0x895: Return(); Pop(0)

0x896: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x897: PushEmpty(bool)
0x898: Call2 0xf30

0x899: Pop(0)
0x89a: IF (Stack[-1] == 0) GOTO 0x89e; Pop(1)

0x89b: @ lshStopAnimation()
0x89c: Pop(0)
0x89d: GOTO 0x8a0

0x89e: @ StopAnimation()
0x89f: Pop(0)
0x8a0: Return(); Pop(0)

0x8a1: GOTO 0x7d6

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
0x8b1: Call2 0xf2a

0x8b2: Pop(0)
0x8b3: @@ SetNPCName(Stack[-1])
0x8b4: Pop(1)
0x8b5: PushEmpty(int)
0x8b6: Call2 0xf28

0x8b7: Pop(0)
0x8b8: @@ SetNPCDescription(Stack[-1])
0x8b9: Pop(1)
0x8ba: PushEmpty(string)
0x8bb: Call2 0xf2c

0x8bc: Pop(0)
0x8bd: @@ SetPhoto(Stack[-1])
0x8be: Pop(1)
0x8bf: PushEmpty(string)
0x8c0: Call2 0xf2e

0x8c1: Pop(0)
0x8c2: @@ SetPhoto2(Stack[-1])
0x8c3: Pop(1)
0x8c4: PushEmpty(int)
0x8c5: Call2 0x11af

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
0x8d4: Call2 0xe79

0x8d5: Stack[-2] = Stack[-1]
0x8d6: Pop(1)
0x8d7: Call2 0xdba

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
0x8eb: Call2 0xda8

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
0x8fe: Call2 0x10cd

0x8ff: Pop(1)
0x900: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x901: PushEmpty(bool, object)
0x902: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x903: Call2 0x1026

0x904: Pop(1)
0x905: Pop(1); Push((bool) Stack[-1] == 0)
0x906: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x907: Stack[-1] = (bool) 1
0x908: IF (Stack[-1] == 0) GOTO 0x927; Pop(1)

0x909: PushEmpty(object, object)
0x90a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x90b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x90c: Call2 0xff7

0x90d: Pop(2)
0x90e: PushEmpty(object, object)
0x90f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x910: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x911: Call2 0x1016

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
0x92a: Call2 0x1016

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
0x93b: Call2 0x101c

0x93c: Pop(1)
0x93d: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x93e: PushEmpty(bool, object)
0x93f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x940: Call2 0x10c1

0x941: Pop(1)
0x942: Pop(1); Push((bool) Stack[-1] == 0)
0x943: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x944: Stack[-1] = (bool) 1
0x945: IF (Stack[-1] == 0) GOTO 0x94d; Pop(1)

0x946: PushEmpty(bool, object)
0x947: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x948: Call2 0x1026

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
0x95c: Call2 0xf30

0x95d: Pop(0)
0x95e: IF (Stack[-1] == 0) GOTO 0x96a; Pop(1)

0x95f: @ lshWaitForAnimEnd()
0x960: Pop(0)
0x961: Push( Stack[3 + Tasks[-1].StackPointer] )
0x962: IF (Stack[-1] == 0) GOTO 0x964; Pop(1)

0x963: GOTO 0x969

0x964: PushEmpty(string)
0x965: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x966: Call2 0xe44

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
0x97b: Call2 0xf30

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
0x98b: Call2 0xe54

0x98c: Pop(2)
0x98d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x98e: Return(); Pop(0)

0x98f: PushEmpty()
0x990: Push((int) 1)
0x991: IF (Stack[-1] == 0) GOTO 0xb70; Pop(1)

0x992: PushEmpty()
0x993: Call2 0xe72

0x994: Pop(0)
0x995: Push((int) 41268)
0x996: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x997: IF (Stack[-1] == 0) GOTO 0x99d; Pop(1)

0x998: PushEmpty(object, object)
0x999: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x99a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x99b: Call2 0x1006

0x99c: Pop(2)
0x99d: Push((int) 41271)
0x99e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x99f: IF (Stack[-1] == 0) GOTO 0x9a5; Pop(1)

0x9a0: PushEmpty(object, object)
0x9a1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9a2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9a3: Call2 0xffd

0x9a4: Pop(2)
0x9a5: Push((int) 41278)
0x9a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9a7: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x9a8: PushEmpty(object, object)
0x9a9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9aa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9ab: Call2 0xffd

0x9ac: Pop(2)
0x9ad: Push((int) 41261)
0x9ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9af: IF (Stack[-1] == 0) GOTO 0xa0f; Pop(1)

0x9b0: PushEmpty(bool)
0x9b1: Stack[-1] = (bool) 0
0x9b2: PushEmpty(bool, object)
0x9b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b4: Call2 0x10cd

0x9b5: Pop(1)
0x9b6: IF (Stack[-1] == 0) GOTO 0x9be; Pop(1)

0x9b7: PushEmpty(bool, object)
0x9b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b9: Call2 0x1026

0x9ba: Pop(1)
0x9bb: Pop(1); Push((bool) Stack[-1] == 0)
0x9bc: IF (Stack[-1] == 0) GOTO 0x9be; Pop(1)

0x9bd: Stack[-1] = (bool) 1
0x9be: IF (Stack[-1] == 0) GOTO 0x9dd; Pop(1)

0x9bf: PushEmpty(object, object)
0x9c0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9c2: Call2 0xff7

0x9c3: Pop(2)
0x9c4: PushEmpty(object, object)
0x9c5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9c7: Call2 0x1016

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
0x9e0: Call2 0x1016

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
0x9f1: Call2 0x101c

0x9f2: Pop(1)
0x9f3: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9f4: PushEmpty(bool, object)
0x9f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f6: Call2 0x10c1

0x9f7: Pop(1)
0x9f8: Pop(1); Push((bool) Stack[-1] == 0)
0x9f9: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9fa: Stack[-1] = (bool) 1
0x9fb: IF (Stack[-1] == 0) GOTO 0xa03; Pop(1)

0x9fc: PushEmpty(bool, object)
0x9fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9fe: Call2 0x1026

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
0xa41: Call2 0x104a

0xa42: Pop(1)
0xa43: IF (Stack[-1] == 0) GOTO 0xa49; Pop(1)

0xa44: Push((int) 542955)
0xa45: Push((int) 45398)
0xa46: Push((int) 45395)
0xa47: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa48: Pop(3)
0xa49: PushEmpty(bool, object)
0xa4a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4b: Call2 0x10b5

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
0xb0f: Call2 0x101c

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
0xb29: Call2 0x101c

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
0xb66: Call2 0xf30

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
0xb7f: Call2 0xf2a

0xb80: Pop(0)
0xb81: @@ SetNPCName(Stack[-1])
0xb82: Pop(1)
0xb83: PushEmpty(int)
0xb84: Call2 0xf28

0xb85: Pop(0)
0xb86: @@ SetNPCDescription(Stack[-1])
0xb87: Pop(1)
0xb88: PushEmpty(string)
0xb89: Call2 0xf2c

0xb8a: Pop(0)
0xb8b: @@ SetPhoto(Stack[-1])
0xb8c: Pop(1)
0xb8d: PushEmpty(string)
0xb8e: Call2 0xf2e

0xb8f: Pop(0)
0xb90: @@ SetPhoto2(Stack[-1])
0xb91: Pop(1)
0xb92: PushEmpty(int)
0xb93: Call2 0x11af

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
0xba2: Call2 0xe79

0xba3: Stack[-2] = Stack[-1]
0xba4: Pop(1)
0xba5: Call2 0xdba

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
0xbb9: Call2 0xda8

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
0xbdf: Call2 0xf30

0xbe0: Pop(0)
0xbe1: IF (Stack[-1] == 0) GOTO 0xbed; Pop(1)

0xbe2: @ lshWaitForAnimEnd()
0xbe3: Pop(0)
0xbe4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbe5: IF (Stack[-1] == 0) GOTO 0xbe7; Pop(1)

0xbe6: GOTO 0xbec

0xbe7: PushEmpty(string)
0xbe8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbe9: Call2 0xe44

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
0xbfe: Call2 0xf30

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
0xc0e: Call2 0xe54

0xc0f: Pop(2)
0xc10: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc11: Return(); Pop(0)

0xc12: PushEmpty()
0xc13: Push((int) 1)
0xc14: IF (Stack[-1] == 0) GOTO 0xc3b; Pop(1)

0xc15: PushEmpty()
0xc16: Call2 0xe72

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
0xc31: Call2 0xf30

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
0xc9e: Call2 0xe79

0xc9f: Stack[-2] = Stack[-1]
0xca0: Pop(1)
0xca1: Call2 0xdf4

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
0xcc1: Call2 0xe44

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
0xcd0: Call2 0xe44

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
0xce3: Call2 0x121b

0xce4: Pop(1)
0xce5: PushEmpty(string)
0xce6: Stack[-1] = "Neutral"
0xce7: Call2 0xe44

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
0xcfa: Call2 0xf17

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
0xd1e: Call2 0xf10

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
0xd7e: Call2 0xe7f

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
0xd8e: Push((bool) 1)
0xd8f: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xd90: Pop(1)
0xd91: Push(CvectorIndex(Stack[-4], 0))
0xd92: Push(CvectorIndex(Stack[-5], 2))
0xd93: @ Rotate(Stack[-2], Stack[-1])
0xd94: Pop(2)
0xd95: PushEmpty(bool)
0xd96: Call2 0xf30

0xd97: Pop(0)
0xd98: IF (Stack[-1] == 0) GOTO 0xd9a; Pop(1)

0xd99: GOTO 0xda2

0xd9a: Push("head")
0xd9b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xd9c: Pop(1)
0xd9d: Push(Stack[-1])
0xd9e: IF (Stack[-1] == 0) GOTO 0xda2; Pop(1)

0xd9f: Push("head")
0xda0: @ LookAsyncCamera(Stack[-1])
0xda1: Pop(1)
0xda2: @ CameraWaitForPlayFinish()
0xda3: Pop(0)
0xda4: @ ResumeWorld()
0xda5: Pop(0)
0xda6: Stack[-21] = (bool) 1
0xda7: Return(); Pop(18)

0xda8: PushEmpty(bool, bool)
0xda9: Push((bool) 1)
0xdaa: @ CameraSwitchToNormal(Stack[-1])
0xdab: Pop(1)
0xdac: PushEmpty(bool)
0xdad: Call2 0xf30

0xdae: Pop(0)
0xdaf: IF (Stack[-1] == 0) GOTO 0xdb1; Pop(1)

0xdb0: GOTO 0xdb9

0xdb1: Push("head")
0xdb2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xdb3: Pop(1)
0xdb4: Push(Stack[-1])
0xdb5: IF (Stack[-1] == 0) GOTO 0xdb9; Pop(1)

0xdb6: Push("head")
0xdb7: @ UnlookAsync(Stack[-1])
0xdb8: Pop(1)
0xdb9: Return(); Pop(2)

0xdba: PushEmpty(int, int, int, int)
0xdbb: Push("voice_common")
0xdbc: @ GetVariable(Stack[-1], Stack[-3])
0xdbd: Pop(1)
0xdbe: Push(Stack[-2])
0xdbf: IF (Stack[-1] == 0) GOTO 0xde0; Pop(1)

0xdc0: PushEmpty(bool, object)
0xdc1: Stack[-1] = Stack[-7]
0xdc2: Call2 0xdf4

0xdc3: Pop(1)
0xdc4: Pop(1); Push((bool) Stack[-1] == 0)
0xdc5: IF (Stack[-1] == 0) GOTO 0xdce; Pop(1)

0xdc6: PushEmpty(bool, object)
0xdc7: Stack[-1] = Stack[-7]
0xdc8: Call2 0xe19

0xdc9: Pop(1)
0xdca: Pop(1); Push((bool) Stack[-1] == 0)
0xdcb: IF (Stack[-1] == 0) GOTO 0xdce; Pop(1)

0xdcc: Stack[-6] = (bool) 0
0xdcd: Return(); Pop(4)

0xdce: Push((int) 2)
0xdcf: @ irand(Stack[-2], Stack[-1])
0xdd0: Pop(1)
0xdd1: Push(Stack[-1])
0xdd2: IF (Stack[-1] == 0) GOTO 0xddb; Pop(1)

0xdd3: Push("voice_common")
0xdd4: Push((int) 1)
0xdd5: Pop(1); Push(Stack[-4] + Stack[-1]);
0xdd6: Push((int) 3)
0xdd7: Pop(2); Push(Stack[-2] % Stack[-1]);
0xdd8: @ SetVariable(Stack[-2], Stack[-1])
0xdd9: Pop(2)
0xdda: GOTO 0xddf

0xddb: Push("voice_common")
0xddc: Push((int) 0)
0xddd: @ SetVariable(Stack[-2], Stack[-1])
0xdde: Pop(2)
0xddf: GOTO 0xdf2

0xde0: PushEmpty(bool, object)
0xde1: Stack[-1] = Stack[-7]
0xde2: Call2 0xe19

0xde3: Pop(1)
0xde4: Pop(1); Push((bool) Stack[-1] == 0)
0xde5: IF (Stack[-1] == 0) GOTO 0xdee; Pop(1)

0xde6: PushEmpty(bool, object)
0xde7: Stack[-1] = Stack[-7]
0xde8: Call2 0xdf4

0xde9: Pop(1)
0xdea: Pop(1); Push((bool) Stack[-1] == 0)
0xdeb: IF (Stack[-1] == 0) GOTO 0xdee; Pop(1)

0xdec: Stack[-6] = (bool) 0
0xded: Return(); Pop(4)

0xdee: Push("voice_common")
0xdef: Push((int) 1)
0xdf0: @ SetVariable(Stack[-2], Stack[-1])
0xdf1: Pop(2)
0xdf2: Stack[-6] = (bool) 1
0xdf3: Return(); Pop(4)

0xdf4: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xdf5: Stack[-5] = "c"
0xdf6: Stack[-4] = (int) 0
0xdf7: Push((int) 1)
0xdf8: IF (Stack[-1] == 0) GOTO 0xe04; Pop(1)

0xdf9: Push((int) 1)
0xdfa: Pop(1); Push(Stack[-5] + Stack[-1]);
0xdfb: Pop(1); Push(Stack[-6] + Stack[-1]);
0xdfc: @@ HasProperty(Stack[-1], Stack[-4])
0xdfd: Pop(1)
0xdfe: Pop(0); Push((bool) Stack[-3] == 0)
0xdff: IF (Stack[-1] == 0) GOTO 0xe01; Pop(1)

0xe00: GOTO 0xe04

0xe01: Push((int) 1)
0xe02: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xe03: GOTO 0xdf7

0xe04: Pop(0); Push((bool) Stack[-4] == 0)
0xe05: IF (Stack[-1] == 0) GOTO 0xe08; Pop(1)

0xe06: Stack[-12] = (bool) 0
0xe07: Return(); Pop(10)

0xe08: Stack[-2] = (int) 0
0xe09: Push((int) 1)
0xe0a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xe0b: IF (Stack[-1] == 0) GOTO 0xe0e; Pop(1)

0xe0c: @ irand(Stack[-2], Stack[-4])
0xe0d: Pop(0)
0xe0e: Push((int) 1)
0xe0f: Pop(1); Push(Stack[-3] + Stack[-1]);
0xe10: Pop(1); Push(Stack[-6] + Stack[-1]);
0xe11: @@ GetProperty(Stack[-1], Stack[-2])
0xe12: Pop(1)
0xe13: PushEmpty(bool, string)
0xe14: Stack[-1] = Stack[-3]
0xe15: Call2 0xe63

0xe16: Stack[-14] = Stack[-2]
0xe17: Pop(2)
0xe18: Return(); Pop(10)

0xe19: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xe1a: Push("d")
0xe1b: PushEmpty(int)
0xe1c: Call2 0xf01

0xe1d: Pop(0)
0xe1e: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe1f: Push("m")
0xe20: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xe21: Stack[-4] = (int) 0
0xe22: Push((int) 1)
0xe23: IF (Stack[-1] == 0) GOTO 0xe2f; Pop(1)

0xe24: Push((int) 1)
0xe25: Pop(1); Push(Stack[-5] + Stack[-1]);
0xe26: Pop(1); Push(Stack[-6] + Stack[-1]);
0xe27: @@ HasProperty(Stack[-1], Stack[-4])
0xe28: Pop(1)
0xe29: Pop(0); Push((bool) Stack[-3] == 0)
0xe2a: IF (Stack[-1] == 0) GOTO 0xe2c; Pop(1)

0xe2b: GOTO 0xe2f

0xe2c: Push((int) 1)
0xe2d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xe2e: GOTO 0xe22

0xe2f: Pop(0); Push((bool) Stack[-4] == 0)
0xe30: IF (Stack[-1] == 0) GOTO 0xe33; Pop(1)

0xe31: Stack[-12] = (bool) 0
0xe32: Return(); Pop(10)

0xe33: Stack[-2] = (int) 0
0xe34: Push((int) 1)
0xe35: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xe36: IF (Stack[-1] == 0) GOTO 0xe39; Pop(1)

0xe37: @ irand(Stack[-2], Stack[-4])
0xe38: Pop(0)
0xe39: Push((int) 1)
0xe3a: Pop(1); Push(Stack[-3] + Stack[-1]);
0xe3b: Pop(1); Push(Stack[-6] + Stack[-1]);
0xe3c: @@ GetProperty(Stack[-1], Stack[-2])
0xe3d: Pop(1)
0xe3e: PushEmpty(bool, string)
0xe3f: Stack[-1] = Stack[-3]
0xe40: Call2 0xe63

0xe41: Stack[-14] = Stack[-2]
0xe42: Pop(2)
0xe43: Return(); Pop(10)

0xe44: PushEmpty(bool, float, float, bool, float, float)
0xe45: @ lshHasAnimation(Stack[-3], Stack[-7])
0xe46: Pop(0)
0xe47: Push(Stack[-3])
0xe48: IF (Stack[-1] == 0) GOTO 0xe4f; Pop(1)

0xe49: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xe4a: Pop(0)
0xe4b: Push((bool) 0)
0xe4c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xe4d: Pop(1)
0xe4e: GOTO 0xe53

0xe4f: Push("Can't find lsh animation : ")
0xe50: Pop(1); Push(Stack[-1] + Stack[-8]);
0xe51: @ Trace(Stack[-1])
0xe52: Pop(1)
0xe53: Return(); Pop(6)

0xe54: PushEmpty(bool, float, float, bool, float, float)
0xe55: @ lshHasAnimation(Stack[-3], Stack[-8])
0xe56: Pop(0)
0xe57: Push(Stack[-3])
0xe58: IF (Stack[-1] == 0) GOTO 0xe5e; Pop(1)

0xe59: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xe5a: Pop(0)
0xe5b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xe5c: Pop(0)
0xe5d: GOTO 0xe62

0xe5e: Push("Can't find lsh animation : ")
0xe5f: Pop(1); Push(Stack[-1] + Stack[-9]);
0xe60: @ Trace(Stack[-1])
0xe61: Pop(1)
0xe62: Return(); Pop(6)

0xe63: PushEmpty(bool, bool)
0xe64: PushEmpty(bool)
0xe65: Call2 0xf30

0xe66: Pop(0)
0xe67: IF (Stack[-1] == 0) GOTO 0xe70; Pop(1)

0xe68: @ lshHasSpeech(Stack[-1], Stack[-3])
0xe69: Pop(0)
0xe6a: Push(Stack[-1])
0xe6b: IF (Stack[-1] == 0) GOTO 0xe70; Pop(1)

0xe6c: @ lshPlaySpeech(Stack[-3])
0xe6d: Pop(0)
0xe6e: Stack[-4] = (bool) 1
0xe6f: Return(); Pop(2)

0xe70: Stack[-4] = (bool) 0
0xe71: Return(); Pop(2)

0xe72: PushEmpty(bool)
0xe73: Call2 0xf30

0xe74: Pop(0)
0xe75: IF (Stack[-1] == 0) GOTO 0xe78; Pop(1)

0xe76: @ lshStopSpeech()
0xe77: Pop(0)
0xe78: Return(); Pop(0)

0xe79: PushEmpty(object, object)
0xe7a: @ self(Stack[-1])
0xe7b: Pop(0)
0xe7c: Stack[-3] = Stack[-1]
0xe7d: Return(); Pop(2)

0xe7e: Stack[-1] = 0
0xe7f: PushEmpty(float, float)
0xe80: Pop(0); Push(Stack[-3] | Stack[-3]);
0xe81: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xe82: Push((float)0.0)
0xe83: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xe84: IF (Stack[-1] == 0) GOTO 0xe87; Pop(1)

0xe85: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xe86: Return(); Pop(2)

0xe87: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xe88: Return(); Pop(2)

0xe89: PushEmpty(int, int)
0xe8a: @ GetVariable(Stack[-3], Stack[-1])
0xe8b: Pop(0)
0xe8c: Stack[-4] = Stack[-1]
0xe8d: Return(); Pop(2)

0xe8e: PushEmpty(object, object, object, object)
0xe8f: @ GetMainOutdoorScene(Stack[-2])
0xe90: Pop(0)
0xe91: Push(".bin")
0xe92: Pop(1); Push(Stack[-6] + Stack[-1]);
0xe93: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xe94: Pop(1)
0xe95: Stack[-6] = Stack[-1]
0xe96: Return(); Pop(4)

0xe97: Stack[-1] = 0
0xe98: Stack[-2] = 0
0xe99: PushEmpty(object, object)
0xe9a: @ FindActor(Stack[-1], Stack[-4])
0xe9b: Pop(0)
0xe9c: Pop(0); Push((bool) Stack[-1] == 0)
0xe9d: IF (Stack[-1] == 0) GOTO 0xea5; Pop(1)

0xe9e: Push("Door ")
0xe9f: Pop(1); Push(Stack[-1] + Stack[-5]);
0xea0: Push(" not found")
0xea1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xea2: @ Trace(Stack[-1])
0xea3: Pop(1)
0xea4: GOTO 0xea8

0xea5: Push("locked")
0xea6: @@ SetProperty(Stack[-1], Stack[-4])
0xea7: Pop(1)
0xea8: Return(); Pop(2)

0xea9: Stack[-1] = 0
0xeaa: PushEmpty(object, object)
0xeab: @ CreateIntVector(Stack[-1])
0xeac: Pop(0)
0xead: @@ add(Stack[-4])
0xeae: Pop(0)
0xeaf: @@ add(Stack[-3])
0xeb0: Pop(0)
0xeb1: Push((int) 3)
0xeb2: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xeb3: Pop(1)
0xeb4: Return(); Pop(2)

0xeb5: Stack[-1] = 0
0xeb6: PushEmpty(int, int)
0xeb7: PushEmpty(object, string, int)
0xeb8: Stack[-3] = Stack[-7]
0xeb9: Stack[-2] = "money"
0xeba: Stack[-1] = Stack[-6]
0xebb: Call2 0xd44

0xebc: Pop(3)
0xebd: Push((int) 0)
0xebe: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xebf: IF (Stack[-1] == 0) GOTO 0xec8; Pop(1)

0xec0: Push("Money")
0xec1: @ GetInvItemByName(Stack[-2], Stack[-1])
0xec2: Pop(1)
0xec3: PushEmpty(int, int)
0xec4: Stack[-2] = Stack[-3]
0xec5: Stack[-1] = Stack[-5]
0xec6: Call2 0xeaa

0xec7: Pop(2)
0xec8: Return(); Pop(2)

0xec9: PushEmpty(int, int, bool, int, int, bool)
0xeca: @@ GetItemID(Stack[-3])
0xecb: Pop(0)
0xecc: Push("Category")
0xecd: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xece: Pop(1)
0xecf: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xed0: Pop(0)
0xed1: Pop(0); Push((bool) Stack[-1] == 0)
0xed2: IF (Stack[-1] == 0) GOTO 0xed6; Pop(1)

0xed3: @@ DropItems(Stack[-8], Stack[-7])
0xed4: Pop(0)
0xed5: GOTO 0xedb

0xed6: PushEmpty(int, int)
0xed7: Stack[-2] = Stack[-5]
0xed8: Stack[-1] = Stack[-9]
0xed9: Call2 0xeaa

0xeda: Pop(2)
0xedb: Return(); Pop(6)

0xedc: PushEmpty(object, object)
0xedd: @ CreateInvItem(Stack[-1])
0xede: Pop(0)
0xedf: @@ SetItemName(Stack[-4])
0xee0: Pop(0)
0xee1: PushEmpty(object, object, int)
0xee2: Stack[-3] = Stack[-8]
0xee3: Stack[-2] = Stack[-4]
0xee4: Stack[-1] = Stack[-6]
0xee5: Call2 0xec9

0xee6: Pop(3)
0xee7: Return(); Pop(2)

0xee8: Stack[-1] = 0
0xee9: PushEmpty(int, bool, int, bool)
0xeea: @ GetInvItemByName(Stack[-2], Stack[-5])
0xeeb: Pop(0)
0xeec: @@ HasItem(Stack[-2], Stack[-1])
0xeed: Pop(0)
0xeee: Stack[-7] = Stack[-1]
0xeef: Return(); Pop(4)

0xef0: PushEmpty(object, object)
0xef1: @ FindActor(Stack[-1], Stack[-4])
0xef2: Pop(0)
0xef3: Pop(0); Push((bool) Stack[-1] == 0)
0xef4: IF (Stack[-1] == 0) GOTO 0xef7; Pop(1)

0xef5: Stack[-5] = (bool) 0
0xef6: Return(); Pop(2)

0xef7: @ Trigger(Stack[-1], Stack[-3])
0xef8: Pop(0)
0xef9: Stack[-5] = (bool) 1
0xefa: Return(); Pop(2)

0xefb: Stack[-1] = 0
0xefc: PushEmpty(float, float)
0xefd: @ GetGameTime(Stack[-1])
0xefe: Pop(0)
0xeff: Stack[-3] = Stack[-1]
0xf00: Return(); Pop(2)

0xf01: PushEmpty(float, float)
0xf02: @ GetGameTime(Stack[-1])
0xf03: Pop(0)
0xf04: Push((int) 1)
0xf05: PushEmpty(int)
0xf06: Push((int) 24)
0xf07: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xf08: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xf09: Return(); Pop(2)

0xf0a: PushEmpty()
0xf0b: PushEmpty(int)
0xf0c: Call2 0xf01

0xf0d: Pop(0)
0xf0e: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xf0f: Return(); Pop(0)

0xf10: PushEmpty(string, string)
0xf11: Stack[-1] = "idle"
0xf12: Push(Stack[-3])
0xf13: IF (Stack[-1] == 0) GOTO 0xf15; Pop(1)

0xf14: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xf15: Stack[-4] = Stack[-1]
0xf16: Return(); Pop(2)

0xf17: PushEmpty(int, bool, int, bool)
0xf18: Stack[-2] = (int) 0
0xf19: Push("all")
0xf1a: PushEmpty(string, int)
0xf1b: Stack[-1] = Stack[-5]
0xf1c: Call2 0xf10

0xf1d: Pop(1)
0xf1e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xf1f: Pop(2)
0xf20: Pop(0); Push((bool) Stack[-1] == 0)
0xf21: IF (Stack[-1] == 0) GOTO 0xf23; Pop(1)

0xf22: GOTO 0xf26

0xf23: Push((int) 1)
0xf24: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xf25: GOTO 0xf19

0xf26: Stack[-5] = Stack[-2]
0xf27: Return(); Pop(4)

0xf28: Stack[-1] = (int) 515592
0xf29: Return(); Pop(0)

0xf2a: Stack[-1] = (int) 511961
0xf2b: Return(); Pop(0)

0xf2c: Stack[-1] = "ui/NPC_Burah.png"
0xf2d: Return(); Pop(0)

0xf2e: Stack[-1] = "ui/NPC_Burah_b.png"
0xf2f: Return(); Pop(0)

0xf30: Stack[-1] = (bool) 1
0xf31: Return(); Pop(0)

0xf32: PushEmpty()
0xf33: PushEmpty(object, string, float)
0xf34: PushEmpty(object)
0xf35: Call2 0x117d

0xf36: Stack[-4] = Stack[-1]
0xf37: Pop(1)
0xf38: Stack[-2] = "pt_map_burah_home"
0xf39: Stack[-1] = (int) 2
0xf3a: Call2 0x118e

0xf3b: Pop(3)
0xf3c: PushEmpty(object)
0xf3d: Call2 0x117d

0xf3e: Pop(0)
0xf3f: @@ ShowMap(Stack[-1])
0xf40: Pop(1)
0xf41: Return(); Pop(0)

0xf42: PushEmpty()
0xf43: PushEmpty(string, bool)
0xf44: Stack[-2] = "boiny@door1"
0xf45: Stack[-1] = (bool) 0
0xf46: Call2 0xe99

0xf47: Pop(2)
0xf48: Return(); Pop(0)

0xf49: PushEmpty()
0xf4a: Push("ook1Burah1")
0xf4b: Push((int) 1)
0xf4c: @ SetVariable(Stack[-2], Stack[-1])
0xf4d: Pop(2)
0xf4e: Return(); Pop(0)

0xf4f: PushEmpty(object, object)
0xf50: PushEmpty(object)
0xf51: Call2 0x117d

0xf52: Stack[-2] = Stack[-1]
0xf53: Pop(1)
0xf54: Push("k1q01BurahGotoAnna")
0xf55: Push("pt_map_anna")
0xf56: Push((int) 1)
0xf57: Push((int) 524732)
0xf58: PushEmpty(float)
0xf59: Call2 0xefc

0xf5a: Pop(0)
0xf5b: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf5c: Pop(5)
0xf5d: PushEmpty()
0xf5e: Call2 0x1106

0xf5f: Pop(0)
0xf60: Return(); Pop(2)

0xf61: Stack[-1] = 0
0xf62: PushEmpty()
0xf63: Push("k2q01")
0xf64: Push((int) 5)
0xf65: @ SetVariable(Stack[-2], Stack[-1])
0xf66: Pop(2)
0xf67: PushEmpty()
0xf68: Call2 0x1113

0xf69: Pop(0)
0xf6a: Return(); Pop(0)

0xf6b: PushEmpty(object, object)
0xf6c: PushEmpty(int, string)
0xf6d: Stack[-1] = "k7q01CorpseMark"
0xf6e: Call2 0xe89

0xf6f: Pop(1)
0xf70: Push((int) 0)
0xf71: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf72: IF (Stack[-1] == 0) GOTO 0xf8a; Pop(1)

0xf73: Push("k7q01CorpseMark")
0xf74: Push((int) 1)
0xf75: @ SetVariable(Stack[-2], Stack[-1])
0xf76: Pop(2)
0xf77: PushEmpty(object)
0xf78: Call2 0x117d

0xf79: Stack[-2] = Stack[-1]
0xf7a: Pop(1)
0xf7b: Push("k7q01BirdmaskGotoCorpse")
0xf7c: Push("pt_d7q02_corpse")
0xf7d: Push((int) 3)
0xf7e: Push((int) 526214)
0xf7f: PushEmpty(float)
0xf80: Call2 0xefc

0xf81: Pop(0)
0xf82: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf83: Pop(5)
0xf84: PushEmpty(bool, string, string)
0xf85: Stack[-2] = "quest_k7_01"
0xf86: Stack[-1] = "place_corpse"
0xf87: Call2 0xef0

0xf88: Pop(3)
0xf89: Stack[-1] = 0
0xf8a: Return(); Pop(2)

0xf8b: PushEmpty()
0xf8c: Push("ook7Burah1")
0xf8d: Push((int) 1)
0xf8e: @ SetVariable(Stack[-2], Stack[-1])
0xf8f: Pop(2)
0xf90: Return(); Pop(0)

0xf91: PushEmpty(int, int)
0xf92: Push("k7q01")
0xf93: Push((int) 4)
0xf94: @ SetVariable(Stack[-2], Stack[-1])
0xf95: Pop(2)
0xf96: PushEmpty()
0xf97: Call2 0x1120

0xf98: Pop(0)
0xf99: Push("bird_balahon")
0xf9a: Push((int) 1)
0xf9b: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xf9c: Pop(2)
0xf9d: Return(); Pop(2)

0xf9e: PushEmpty(object, object)
0xf9f: PushEmpty(object)
0xfa0: Call2 0x117d

0xfa1: Stack[-2] = Stack[-1]
0xfa2: Pop(1)
0xfa3: Push("k7q03BurahGotoFather")
0xfa4: Push("pt_map_burah_home")
0xfa5: Push((int) 0)
0xfa6: Push((int) 526394)
0xfa7: PushEmpty(float)
0xfa8: Call2 0xefc

0xfa9: Pop(0)
0xfaa: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfab: Pop(5)
0xfac: PushEmpty()
0xfad: Call2 0x112d

0xfae: Pop(0)
0xfaf: PushEmpty()
0xfb0: Call2 0x113a

0xfb1: Pop(0)
0xfb2: PushEmpty(object, string)
0xfb3: Stack[-1] = "quest_k7_03"
0xfb4: Call2 0xe8e

0xfb5: Pop(2)
0xfb6: PushEmpty(bool, string, string)
0xfb7: Stack[-2] = "quest_k7_03"
0xfb8: Stack[-1] = "place_family"
0xfb9: Call2 0xef0

0xfba: Pop(3)
0xfbb: Return(); Pop(2)

0xfbc: Stack[-1] = 0
0xfbd: PushEmpty()
0xfbe: Push("ook7Burah2")
0xfbf: Push((int) 1)
0xfc0: @ SetVariable(Stack[-2], Stack[-1])
0xfc1: Pop(2)
0xfc2: Return(); Pop(0)

0xfc3: PushEmpty()
0xfc4: Push("tvirin 5 is given")
0xfc5: @ Trace(Stack[-1])
0xfc6: Pop(1)
0xfc7: PushEmpty(object, string, int)
0xfc8: Stack[-3] = Stack[-5]
0xfc9: Stack[-2] = "tvirin"
0xfca: Stack[-1] = (int) 5
0xfcb: Call2 0xedc

0xfcc: Pop(3)
0xfcd: Return(); Pop(0)

0xfce: PushEmpty()
0xfcf: PushEmpty()
0xfd0: Call2 0x1147

0xfd1: Pop(0)
0xfd2: PushEmpty(bool, string, string)
0xfd3: Stack[-2] = "quest_k7_03"
0xfd4: Stack[-1] = "completed"
0xfd5: Call2 0xef0

0xfd6: Pop(3)
0xfd7: Return(); Pop(0)

0xfd8: PushEmpty()
0xfd9: Push("money2000 is given")
0xfda: @ Trace(Stack[-1])
0xfdb: Pop(1)
0xfdc: PushEmpty(object, int)
0xfdd: Stack[-2] = Stack[-4]
0xfde: Stack[-1] = (int) 2000
0xfdf: Call2 0xeb6

0xfe0: Pop(2)
0xfe1: Return(); Pop(0)

0xfe2: PushEmpty()
0xfe3: Push("k11q01")
0xfe4: Push((int) 5)
0xfe5: @ SetVariable(Stack[-2], Stack[-1])
0xfe6: Pop(2)
0xfe7: PushEmpty()
0xfe8: Call2 0x10df

0xfe9: Pop(0)
0xfea: Return(); Pop(0)

0xfeb: PushEmpty()
0xfec: Push("playsound")
0xfed: Push("givemoney")
0xfee: @ TriggerWorld(Stack[-2], Stack[-1])
0xfef: Pop(2)
0xff0: Return(); Pop(0)

0xff1: PushEmpty()
0xff2: Push("playsound")
0xff3: Push("giveitem")
0xff4: @ TriggerWorld(Stack[-2], Stack[-1])
0xff5: Pop(2)
0xff6: Return(); Pop(0)

0xff7: PushEmpty()
0xff8: Push("ook12BurahFactory1")
0xff9: Push((int) 1)
0xffa: @ SetVariable(Stack[-2], Stack[-1])
0xffb: Pop(2)
0xffc: Return(); Pop(0)

0xffd: PushEmpty()
0xffe: Push("k12q01BurahInSobor")
0xfff: Push((int) 1)
0x1000: @ SetVariable(Stack[-2], Stack[-1])
0x1001: Pop(2)
0x1002: PushEmpty()
0x1003: Call2 0x10ec

0x1004: Pop(0)
0x1005: Return(); Pop(0)

0x1006: PushEmpty()
0x1007: PushEmpty(int, string)
0x1008: Stack[-1] = "k12q01_Burah"
0x1009: Call2 0xe89

0x100a: Pop(1)
0x100b: Push((int) 0)
0x100c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x100d: IF (Stack[-1] == 0) GOTO 0x1015; Pop(1)

0x100e: Push("k12q01_Burah")
0x100f: Push((int) 1)
0x1010: @ SetVariable(Stack[-2], Stack[-1])
0x1011: Pop(2)
0x1012: PushEmpty()
0x1013: Call2 0x10f9

0x1014: Pop(0)
0x1015: Return(); Pop(0)

0x1016: PushEmpty()
0x1017: Push("k12BurahVisit")
0x1018: Push((int) 1)
0x1019: @ SetVariable(Stack[-2], Stack[-1])
0x101a: Pop(2)
0x101b: Return(); Pop(0)

0x101c: PushEmpty()
0x101d: PushEmpty(bool, object)
0x101e: Stack[-1] = Stack[-3]
0x101f: Call2 0x10d9

0x1020: Pop(1)
0x1021: IF (Stack[-1] == 0) GOTO 0x1024; Pop(1)

0x1022: Stack[-2] = (bool) 1
0x1023: Return(); Pop(0)

0x1024: Stack[-2] = (bool) 0
0x1025: Return(); Pop(0)

0x1026: PushEmpty()
0x1027: PushEmpty(int, string)
0x1028: Stack[-1] = "game_final"
0x1029: Call2 0xe89

0x102a: Pop(1)
0x102b: Push((int) 0)
0x102c: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x102d: IF (Stack[-1] == 0) GOTO 0x1030; Pop(1)

0x102e: Stack[-2] = (bool) 1
0x102f: Return(); Pop(0)

0x1030: Stack[-2] = (bool) 0
0x1031: Return(); Pop(0)

0x1032: PushEmpty()
0x1033: PushEmpty(int, string)
0x1034: Stack[-1] = "k1q01LaskaGotoBurah"
0x1035: Call2 0xe89

0x1036: Pop(1)
0x1037: Push((int) 0)
0x1038: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1039: IF (Stack[-1] == 0) GOTO 0x103c; Pop(1)

0x103a: Stack[-2] = (bool) 1
0x103b: Return(); Pop(0)

0x103c: Stack[-2] = (bool) 0
0x103d: Return(); Pop(0)

0x103e: PushEmpty()
0x103f: PushEmpty(int, string)
0x1040: Stack[-1] = "ook1Burah1"
0x1041: Call2 0xe89

0x1042: Pop(1)
0x1043: Push((int) 0)
0x1044: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1045: IF (Stack[-1] == 0) GOTO 0x1048; Pop(1)

0x1046: Stack[-2] = (bool) 1
0x1047: Return(); Pop(0)

0x1048: Stack[-2] = (bool) 0
0x1049: Return(); Pop(0)

0x104a: PushEmpty()
0x104b: PushEmpty(int, string)
0x104c: Stack[-1] = "k12DankoVisit"
0x104d: Call2 0xe89

0x104e: Pop(1)
0x104f: Push((int) 0)
0x1050: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1051: IF (Stack[-1] == 0) GOTO 0x1054; Pop(1)

0x1052: Stack[-2] = (bool) 1
0x1053: Return(); Pop(0)

0x1054: Stack[-2] = (bool) 0
0x1055: Return(); Pop(0)

0x1056: PushEmpty()
0x1057: PushEmpty(int, string)
0x1058: Stack[-1] = "k2q01"
0x1059: Call2 0xe89

0x105a: Pop(1)
0x105b: Push((int) 4)
0x105c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x105d: IF (Stack[-1] == 0) GOTO 0x1060; Pop(1)

0x105e: Stack[-2] = (bool) 1
0x105f: Return(); Pop(0)

0x1060: Stack[-2] = (bool) 0
0x1061: Return(); Pop(0)

0x1062: PushEmpty()
0x1063: PushEmpty(bool, object, string)
0x1064: Stack[-2] = Stack[-4]
0x1065: Stack[-1] = "bird_balahon"
0x1066: Call2 0xee9

0x1067: Pop(2)
0x1068: IF (Stack[-1] == 0) GOTO 0x106b; Pop(1)

0x1069: Stack[-2] = (bool) 1
0x106a: Return(); Pop(0)

0x106b: Stack[-2] = (bool) 0
0x106c: Return(); Pop(0)

0x106d: PushEmpty()
0x106e: PushEmpty(int, string)
0x106f: Stack[-1] = "k7q01"
0x1070: Call2 0xe89

0x1071: Pop(1)
0x1072: Push((int) 3)
0x1073: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1074: IF (Stack[-1] == 0) GOTO 0x1077; Pop(1)

0x1075: Stack[-2] = (bool) 1
0x1076: Return(); Pop(0)

0x1077: Stack[-2] = (bool) 0
0x1078: Return(); Pop(0)

0x1079: PushEmpty()
0x107a: PushEmpty(int, string)
0x107b: Stack[-1] = "ook7Burah1"
0x107c: Call2 0xe89

0x107d: Pop(1)
0x107e: Push((int) 0)
0x107f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1080: IF (Stack[-1] == 0) GOTO 0x1083; Pop(1)

0x1081: Stack[-2] = (bool) 1
0x1082: Return(); Pop(0)

0x1083: Stack[-2] = (bool) 0
0x1084: Return(); Pop(0)

0x1085: PushEmpty()
0x1086: PushEmpty(int, string)
0x1087: Stack[-1] = "k7q03"
0x1088: Call2 0xe89

0x1089: Pop(1)
0x108a: Push((int) 0)
0x108b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x108c: IF (Stack[-1] == 0) GOTO 0x108f; Pop(1)

0x108d: Stack[-2] = (bool) 1
0x108e: Return(); Pop(0)

0x108f: Stack[-2] = (bool) 0
0x1090: Return(); Pop(0)

0x1091: PushEmpty()
0x1092: PushEmpty(int, string)
0x1093: Stack[-1] = "ook7Burah2"
0x1094: Call2 0xe89

0x1095: Pop(1)
0x1096: Push((int) 0)
0x1097: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1098: IF (Stack[-1] == 0) GOTO 0x109b; Pop(1)

0x1099: Stack[-2] = (bool) 1
0x109a: Return(); Pop(0)

0x109b: Stack[-2] = (bool) 0
0x109c: Return(); Pop(0)

0x109d: PushEmpty()
0x109e: PushEmpty(int, string)
0x109f: Stack[-1] = "k7q03"
0x10a0: Call2 0xe89

0x10a1: Pop(1)
0x10a2: Push((int) 2)
0x10a3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10a4: IF (Stack[-1] == 0) GOTO 0x10a7; Pop(1)

0x10a5: Stack[-2] = (bool) 1
0x10a6: Return(); Pop(0)

0x10a7: Stack[-2] = (bool) 0
0x10a8: Return(); Pop(0)

0x10a9: PushEmpty()
0x10aa: PushEmpty(int, string)
0x10ab: Stack[-1] = "k11q01"
0x10ac: Call2 0xe89

0x10ad: Pop(1)
0x10ae: Push((int) 4)
0x10af: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10b0: IF (Stack[-1] == 0) GOTO 0x10b3; Pop(1)

0x10b1: Stack[-2] = (bool) 1
0x10b2: Return(); Pop(0)

0x10b3: Stack[-2] = (bool) 0
0x10b4: Return(); Pop(0)

0x10b5: PushEmpty()
0x10b6: PushEmpty(int, string)
0x10b7: Stack[-1] = "k12q01ChildsAreVisited"
0x10b8: Call2 0xe89

0x10b9: Pop(1)
0x10ba: Push((int) 0)
0x10bb: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x10bc: IF (Stack[-1] == 0) GOTO 0x10bf; Pop(1)

0x10bd: Stack[-2] = (bool) 1
0x10be: Return(); Pop(0)

0x10bf: Stack[-2] = (bool) 0
0x10c0: Return(); Pop(0)

0x10c1: PushEmpty()
0x10c2: PushEmpty(int, string)
0x10c3: Stack[-1] = "k12q01BurahInSobor"
0x10c4: Call2 0xe89

0x10c5: Pop(1)
0x10c6: Push((int) 0)
0x10c7: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x10c8: IF (Stack[-1] == 0) GOTO 0x10cb; Pop(1)

0x10c9: Stack[-2] = (bool) 1
0x10ca: Return(); Pop(0)

0x10cb: Stack[-2] = (bool) 0
0x10cc: Return(); Pop(0)

0x10cd: PushEmpty()
0x10ce: PushEmpty(int, string)
0x10cf: Stack[-1] = "ook12BurahFactory1"
0x10d0: Call2 0xe89

0x10d1: Pop(1)
0x10d2: Push((int) 0)
0x10d3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10d4: IF (Stack[-1] == 0) GOTO 0x10d7; Pop(1)

0x10d5: Stack[-2] = (bool) 1
0x10d6: Return(); Pop(0)

0x10d7: Stack[-2] = (bool) 0
0x10d8: Return(); Pop(0)

0x10d9: PushEmpty()
0x10da: PushEmpty(bool)
0x10db: Call2 0x11f5

0x10dc: Stack[-3] = Stack[-1]
0x10dd: Pop(1)
0x10de: Return(); Pop(0)

0x10df: PushEmpty(object, object)
0x10e0: Push((int) 488)
0x10e1: Push((int) 1)
0x10e2: Push((int) 528055)
0x10e3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10e4: Pop(3)
0x10e5: PushEmpty(bool, object, int)
0x10e6: Stack[-2] = Stack[-4]
0x10e7: Stack[-1] = (int) 480
0x10e8: Call2 0x1161

0x10e9: Pop(3)
0x10ea: Return(); Pop(2)

0x10eb: Stack[-1] = 0
0x10ec: PushEmpty(object, object)
0x10ed: Push((int) 731)
0x10ee: Push((int) 1)
0x10ef: Push((int) 539361)
0x10f0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10f1: Pop(3)
0x10f2: PushEmpty(bool, object, int)
0x10f3: Stack[-2] = Stack[-4]
0x10f4: Stack[-1] = (int) 729
0x10f5: Call2 0x1161

0x10f6: Pop(3)
0x10f7: Return(); Pop(2)

0x10f8: Stack[-1] = 0
0x10f9: PushEmpty(object, object)
0x10fa: Push((int) 738)
0x10fb: Push((int) 1)
0x10fc: Push((int) 539368)
0x10fd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10fe: Pop(3)
0x10ff: PushEmpty(bool, object, int)
0x1100: Stack[-2] = Stack[-4]
0x1101: Stack[-1] = (int) 729
0x1102: Call2 0x1161

0x1103: Pop(3)
0x1104: Return(); Pop(2)

0x1105: Stack[-1] = 0
0x1106: PushEmpty(object, object)
0x1107: Push((int) 777)
0x1108: Push((int) 1)
0x1109: Push((int) 541531)
0x110a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x110b: Pop(3)
0x110c: PushEmpty(bool, object, int)
0x110d: Stack[-2] = Stack[-4]
0x110e: Stack[-1] = (int) 318
0x110f: Call2 0x1161

0x1110: Pop(3)
0x1111: Return(); Pop(2)

0x1112: Stack[-1] = 0
0x1113: PushEmpty(object, object)
0x1114: Push((int) 466)
0x1115: Push((int) 1)
0x1116: Push((int) 527782)
0x1117: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1118: Pop(3)
0x1119: PushEmpty(bool, object, int)
0x111a: Stack[-2] = Stack[-4]
0x111b: Stack[-1] = (int) 461
0x111c: Call2 0x1161

0x111d: Pop(3)
0x111e: Return(); Pop(2)

0x111f: Stack[-1] = 0
0x1120: PushEmpty(object, object)
0x1121: Push((int) 422)
0x1122: Push((int) 1)
0x1123: Push((int) 526221)
0x1124: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1125: Pop(3)
0x1126: PushEmpty(bool, object, int)
0x1127: Stack[-2] = Stack[-4]
0x1128: Stack[-1] = (int) 416
0x1129: Call2 0x1161

0x112a: Pop(3)
0x112b: Return(); Pop(2)

0x112c: Stack[-1] = 0
0x112d: PushEmpty(object, object)
0x112e: Push((int) 434)
0x112f: Push((int) 2)
0x1130: Push((int) 526390)
0x1131: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1132: Pop(3)
0x1133: PushEmpty(bool, object, int)
0x1134: Stack[-2] = Stack[-4]
0x1135: Stack[-1] = (int) -1
0x1136: Call2 0x1161

0x1137: Pop(3)
0x1138: Return(); Pop(2)

0x1139: Stack[-1] = 0
0x113a: PushEmpty(object, object)
0x113b: Push((int) 435)
0x113c: Push((int) 2)
0x113d: Push((int) 526391)
0x113e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x113f: Pop(3)
0x1140: PushEmpty(bool, object, int)
0x1141: Stack[-2] = Stack[-4]
0x1142: Stack[-1] = (int) 434
0x1143: Call2 0x1161

0x1144: Pop(3)
0x1145: Return(); Pop(2)

0x1146: Stack[-1] = 0
0x1147: PushEmpty(object, object)
0x1148: Push((int) 437)
0x1149: Push((int) 2)
0x114a: Push((int) 526393)
0x114b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x114c: Pop(3)
0x114d: PushEmpty(bool, object, int)
0x114e: Stack[-2] = Stack[-4]
0x114f: Stack[-1] = (int) 434
0x1150: Call2 0x1161

0x1151: Pop(3)
0x1152: Return(); Pop(2)

0x1153: Stack[-1] = 0
0x1154: PushEmpty(object, object)
0x1155: @ GetDiaryRoot(Stack[-1])
0x1156: Pop(0)
0x1157: Pop(0); Push((bool) Stack[-1] == 0)
0x1158: IF (Stack[-1] == 0) GOTO 0x115e; Pop(1)

0x1159: Push("Can't retrieve diary root")
0x115a: @ Trace(Stack[-1])
0x115b: Pop(1)
0x115c: Stack[-3] = (bool) 0
0x115d: Return(); Pop(2)

0x115e: Stack[-3] = Stack[-1]
0x115f: Return(); Pop(2)

0x1160: Stack[-1] = 0
0x1161: PushEmpty(object, object, int, object, object, int)
0x1162: PushEmpty(object)
0x1163: Call2 0x1154

0x1164: Stack[-4] = Stack[-1]
0x1165: Pop(1)
0x1166: @@ Find(Stack[-7], Stack[-2])
0x1167: Pop(0)
0x1168: Pop(0); Push((bool) Stack[-2] == 0)
0x1169: IF (Stack[-1] == 0) GOTO 0x1170; Pop(1)

0x116a: Push("Can't find diary parent with id: ")
0x116b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x116c: @ Trace(Stack[-1])
0x116d: Pop(1)
0x116e: Stack[-9] = (bool) 0
0x116f: Return(); Pop(6)

0x1170: @@ AddChild(Stack[-8])
0x1171: Pop(0)
0x1172: Push((int) 7)
0x1173: @ SendWorldWndMessage(Stack[-1])
0x1174: Pop(1)
0x1175: @@ GetCategory(Stack[-1])
0x1176: Pop(0)
0x1177: @ SetDiarySection(Stack[-1])
0x1178: Pop(0)
0x1179: Stack[-9] = (bool) 0
0x117a: Return(); Pop(6)

0x117b: Stack[-2] = 0
0x117c: Stack[-3] = 0
0x117d: PushEmpty(object, object, object, object)
0x117e: @ GetMainOutdoorScene(Stack[-2])
0x117f: Pop(0)
0x1180: Pop(0); Push((bool) Stack[-2] == 0)
0x1181: IF (Stack[-1] == 0) GOTO 0x1188; Pop(1)

0x1182: Push("Can't find main outdoor scene")
0x1183: @ Trace(Stack[-1])
0x1184: Pop(1)
0x1185: Stack[-1] = 0
0x1186: Stack[-5] = Stack[-1]
0x1187: Return(); Pop(4)

0x1188: @@ GetMap(Stack[-1])
0x1189: Pop(0)
0x118a: Stack[-5] = Stack[-1]
0x118b: Return(); Pop(4)

0x118c: Stack[-1] = 0
0x118d: Stack[-2] = 0
0x118e: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x118f: @ GetMainOutdoorScene(Stack[-2])
0x1190: Pop(0)
0x1191: Pop(0); Push((bool) Stack[-2] == 0)
0x1192: IF (Stack[-1] == 0) GOTO 0x1197; Pop(1)

0x1193: Push("Can't find main outdoor scene")
0x1194: @ Trace(Stack[-1])
0x1195: Pop(1)
0x1196: Return(); Pop(8)

0x1197: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x1198: Pop(0)
0x1199: Pop(0); Push((bool) Stack[-1] == 0)
0x119a: IF (Stack[-1] == 0) GOTO 0x11a1; Pop(1)

0x119b: Push("Warning: outdoor scene locator ")
0x119c: Pop(1); Push(Stack[-1] + Stack[-11]);
0x119d: Push(" doesnt exist")
0x119e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x119f: @ Trace(Stack[-1])
0x11a0: Pop(1)
0x11a1: @@ GetMap(Stack[-11])
0x11a2: Pop(0)
0x11a3: Pop(0); Push((bool) Stack[-11] == 0)
0x11a4: IF (Stack[-1] == 0) GOTO 0x11a9; Pop(1)

0x11a5: Push("Can't find map")
0x11a6: @ Trace(Stack[-1])
0x11a7: Pop(1)
0x11a8: Return(); Pop(8)

0x11a9: Push(CvectorIndex(Stack[-4], 0))
0x11aa: Push(CvectorIndex(Stack[-5], 2))
0x11ab: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x11ac: Pop(2)
0x11ad: Return(); Pop(8)

0x11ae: Stack[-2] = 0
0x11af: PushEmpty(int, int)
0x11b0: Push("branch")
0x11b1: @ GetVariable(Stack[-1], Stack[-2])
0x11b2: Pop(1)
0x11b3: Push((int) 0)
0x11b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11b5: IF (Stack[-1] == 0) GOTO 0x11b9; Pop(1)

0x11b6: Stack[-3] = (int) 1
0x11b7: Return(); Pop(2)

0x11b8: GOTO 0x11be

0x11b9: Push((int) 1)
0x11ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11bb: IF (Stack[-1] == 0) GOTO 0x11be; Pop(1)

0x11bc: Stack[-3] = (int) 2
0x11bd: Return(); Pop(2)

0x11be: Stack[-3] = (int) 3
0x11bf: Return(); Pop(2)

0x11c0: PushEmpty()
0x11c1: Push((int) 18)
0x11c2: @@ add(Stack[-1])
0x11c3: Pop(1)
0x11c4: Push((int) 24)
0x11c5: @@ add(Stack[-1])
0x11c6: Pop(1)
0x11c7: Push((int) 20)
0x11c8: @@ add(Stack[-1])
0x11c9: Pop(1)
0x11ca: Push((int) 14)
0x11cb: @@ add(Stack[-1])
0x11cc: Pop(1)
0x11cd: Push((bool) 0)
0x11ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11cf: IF (Stack[-1] == 0) GOTO 0x11da; Pop(1)

0x11d0: Push((int) 10)
0x11d1: @@ add(Stack[-1])
0x11d2: Pop(1)
0x11d3: Push((int) 17)
0x11d4: @@ add(Stack[-1])
0x11d5: Pop(1)
0x11d6: Push((int) 8)
0x11d7: @@ add(Stack[-1])
0x11d8: Pop(1)
0x11d9: GOTO 0x11e0

0x11da: Push((int) 1)
0x11db: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x11dc: IF (Stack[-1] == 0) GOTO 0x11e0; Pop(1)

0x11dd: Push((int) 10)
0x11de: @@ add(Stack[-1])
0x11df: Pop(1)
0x11e0: Return(); Pop(0)

0x11e1: PushEmpty(int, int)
0x11e2: Push("vol_")
0x11e3: Pop(1); Push(Stack[-1] + Stack[-4]);
0x11e4: @ GetVariable(Stack[-1], Stack[-2])
0x11e5: Pop(1)
0x11e6: Push((int) 4)
0x11e7: Pop(1); Push(Stack[-2] & Stack[-1]);
0x11e8: Push((int) 0)
0x11e9: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x11ea: Return(); Pop(2)

0x11eb: PushEmpty(int, int)
0x11ec: Push("vol_")
0x11ed: Pop(1); Push(Stack[-1] + Stack[-4]);
0x11ee: @ GetVariable(Stack[-1], Stack[-2])
0x11ef: Pop(1)
0x11f0: Push((int) 16)
0x11f1: Pop(1); Push(Stack[-2] & Stack[-1]);
0x11f2: Push((int) 0)
0x11f3: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x11f4: Return(); Pop(2)

0x11f5: PushEmpty(object, int, int, int, object, int, int, int)
0x11f6: @ CreateIntVector(Stack[-4])
0x11f7: Pop(0)
0x11f8: PushEmpty(object, bool, int)
0x11f9: Stack[-3] = Stack[-7]
0x11fa: Stack[-2] = (bool) 0
0x11fb: Stack[-1] = (int) -1
0x11fc: Call2 0x11c0

0x11fd: Pop(3)
0x11fe: @@ size(Stack[-3])
0x11ff: Pop(0)
0x1200: Stack[-2] = (int) 0
0x1201: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1202: IF (Stack[-1] == 0) GOTO 0x1218; Pop(1)

0x1203: @@ get(Stack[-1], Stack[-2])
0x1204: Pop(0)
0x1205: PushEmpty(bool)
0x1206: Stack[-1] = (bool) 1
0x1207: PushEmpty(bool, int)
0x1208: Stack[-1] = Stack[-4]
0x1209: Call2 0x11eb

0x120a: Pop(1)
0x120b: IF (Stack[-1] == 0) GOTO 0x1212; Pop(1)

0x120c: PushEmpty(bool, int)
0x120d: Stack[-1] = Stack[-4]
0x120e: Call2 0x11e1

0x120f: Pop(1)
0x1210: IF (Stack[-1] == 0) GOTO 0x1212; Pop(1)

0x1211: Stack[-1] = (bool) 0
0x1212: IF (Stack[-1] == 0) GOTO 0x1215; Pop(1)

0x1213: Stack[-9] = (bool) 0
0x1214: Return(); Pop(8)

0x1215: Push((int) 1)
0x1216: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1217: GOTO 0x1201

0x1218: Stack[-9] = (bool) 1
0x1219: Return(); Pop(8)

0x121a: Stack[-4] = 0
0x121b: PushEmpty(int, int)
0x121c: Push("mt_burah")
0x121d: @ GetVariable(Stack[-1], Stack[-2])
0x121e: Pop(1)
0x121f: Pop(0); Push((bool) Stack[-1] == 0)
0x1220: IF (Stack[-1] == 0) GOTO 0x122b; Pop(1)

0x1221: PushEmpty(int, object)
0x1222: Stack[-1] = Stack[-5]
0x1223: Push(-2, 1); TaskCall(4)
0x1224: Call2 0x2ee

0x1225: Pop(-2, 1); TaskReturn
0x1226: Pop(2)
0x1227: Push("mt_burah")
0x1228: Push((int) 1)
0x1229: @ SetVariable(Stack[-2], Stack[-1])
0x122a: Pop(2)
0x122b: PushEmpty(bool, int)
0x122c: Stack[-1] = (int) 1
0x122d: Call2 0xf0a

0x122e: Pop(1)
0x122f: IF (Stack[-1] == 0) GOTO 0x1237; Pop(1)

0x1230: PushEmpty(int, object)
0x1231: Stack[-1] = Stack[-5]
0x1232: Push(-2, 1); TaskCall(0)
0x1233: Call2 0x0

0x1234: Pop(-2, 1); TaskReturn
0x1235: Pop(2)
0x1236: Return(); Pop(2)

0x1237: PushEmpty(bool, int)
0x1238: Stack[-1] = (int) 2
0x1239: Call2 0xf0a

0x123a: Pop(1)
0x123b: IF (Stack[-1] == 0) GOTO 0x1243; Pop(1)

0x123c: PushEmpty(int, object)
0x123d: Stack[-1] = Stack[-5]
0x123e: Push(-2, 1); TaskCall(2)
0x123f: Call2 0x1bf

0x1240: Pop(-2, 1); TaskReturn
0x1241: Pop(2)
0x1242: Return(); Pop(2)

0x1243: PushEmpty(bool, int)
0x1244: Stack[-1] = (int) 7
0x1245: Call2 0xf0a

0x1246: Pop(1)
0x1247: IF (Stack[-1] == 0) GOTO 0x124f; Pop(1)

0x1248: PushEmpty(int, object)
0x1249: Stack[-1] = Stack[-5]
0x124a: Push(-2, 1); TaskCall(6)
0x124b: Call2 0x3dd

0x124c: Pop(-2, 1); TaskReturn
0x124d: Pop(2)
0x124e: Return(); Pop(2)

0x124f: PushEmpty(bool, int)
0x1250: Stack[-1] = (int) 11
0x1251: Call2 0xf0a

0x1252: Pop(1)
0x1253: IF (Stack[-1] == 0) GOTO 0x125b; Pop(1)

0x1254: PushEmpty(int, object)
0x1255: Stack[-1] = Stack[-5]
0x1256: Push(-2, 1); TaskCall(8)
0x1257: Call2 0x72a

0x1258: Pop(-2, 1); TaskReturn
0x1259: Pop(2)
0x125a: Return(); Pop(2)

0x125b: PushEmpty(bool, int)
0x125c: Stack[-1] = (int) 12
0x125d: Call2 0xf0a

0x125e: Pop(1)
0x125f: IF (Stack[-1] == 0) GOTO 0x1267; Pop(1)

0x1260: PushEmpty(int, object)
0x1261: Stack[-1] = Stack[-5]
0x1262: Push(-2, 1); TaskCall(10)
0x1263: Call2 0x8a3

0x1264: Pop(-2, 1); TaskReturn
0x1265: Pop(2)
0x1266: Return(); Pop(2)

0x1267: PushEmpty(int, object)
0x1268: Stack[-1] = Stack[-5]
0x1269: Push(-2, 1); TaskCall(12)
0x126a: Call2 0xb71

0x126b: Pop(-2, 1); TaskReturn
0x126c: Pop(2)
0x126d: Return(); Pop(2)

