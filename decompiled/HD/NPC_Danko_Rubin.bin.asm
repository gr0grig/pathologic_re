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
	Warning
	Rage
	Confusion
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
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	HasItem
	RemoveItemByType
	ui/NPC_Rubin.png
	ui/NPC_Rubin_b.png
	playsound
	giveitem
	d3q01_blood
	d10q02
	d10q02RubinGotoMaria
	pt_map_maria
	AddMark
	bluevaccine is given
	blue_vaccine
	ood4Rubin1
	ood4Rubin2
	lens is given
	lens
	ood6Rubin1
	d3q01
	d3q01RubinGotoAlexandr
	pt_map_alexandr
	ood3Rubin1
	ood3Rubin2
	ood3Rubin3
	ood3Rubin4
	ShowMap
	pt_map_bigvlad
	quest_d3_01
	completed
	d3RubinToldWhereIsSimon
	ood5Rubin1
	d5q01
	d5q01RubinGotoBigVlad
	d5q01RubinGotoBigVladSelf
	pt_map_rubin
	ood5Rubin2
	d5q01AlexandrGotoKaterina
	FindMark
	Remove
	d5q01BigVladGotoAlexandr
	d5q01BurahMeeting
	d7q04NudeGotoAndrei
	d5q01GrifWantsMoney
	d5q01GrifWillHelp
	d5q01BigVladGotoLara
	d5q01PatrolGotoGrif
	d5q01_heart
	quest_d5_01
	d6RubinGoesToGeorg
	warehouse_rubin
	norubin
	whitevaccine is given
	white_vaccine
	d3RubinVisit
	d5RubinVisit
	ood5Rubin3
	microscope_d3q01_blood
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
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	GetInvItemByName (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	GetSceneByName (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x1173
RunTask = 14

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x14a Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x7a7 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc0a Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd7b Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xebd Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x104b Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1149 Vars = (int, int)
	GTASK_14 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x11bc Vars = (int)
		EVENT_6 Op = 0x11e2 Vars = ()
		EVENT_5 Op = 0x11f1 Vars = ()
		EVENT_45 Op = 0x11fe Vars = (bool)
		EVENT_0 Op = 0x120a Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1293

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1448

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x1446

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x144a

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x144c

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x1781

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
0x31: Call2 0x13a9

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x12ea

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
0x48: Call2 0x12d8

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
0x56: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x1603

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x160f

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: Stack[-1] = (bool) 1
0x64: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x65: PushEmpty(object, object)
0x66: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x67: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x68: Call2 0x15b5

0x69: Pop(2)
0x6a: PushEmpty(string)
0x6b: Stack[-1] = "Neutral"
0x6c: Call2 0x134

0x6d: Pop(1)
0x6e: Push((int) 508737)
0x6f: @@ SetMessage(Stack[-1])
0x70: Pop(1)
0x71: @@ ClearReplies()
0x72: Pop(0)
0x73: Push((int) 508777)
0x74: Push((int) 9633)
0x75: Push((int) 9624)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: Push((int) 508781)
0x79: Push((int) 9629)
0x7a: Push((int) 9628)
0x7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c: Pop(3)
0x7d: GOTO 0x116

0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 0
0x80: PushEmpty(bool)
0x81: Stack[-1] = (bool) 0
0x82: PushEmpty(bool, object)
0x83: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x84: Call2 0x164b

0x85: Pop(1)
0x86: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x87: PushEmpty(bool, object)
0x88: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x89: Call2 0x163f

0x8a: Pop(1)
0x8b: Pop(1); Push((bool) Stack[-1] == 0)
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Stack[-1] = (bool) 1
0x8e: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8f: PushEmpty(bool, object)
0x90: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91: Call2 0x15d3

0x92: Pop(1)
0x93: Pop(1); Push((bool) Stack[-1] == 0)
0x94: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x95: Stack[-1] = (bool) 1
0x96: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0x97: PushEmpty(string)
0x98: Stack[-1] = "Neutral"
0x99: Call2 0x134

0x9a: Pop(1)
0x9b: Push((int) 536148)
0x9c: @@ SetMessage(Stack[-1])
0x9d: Pop(1)
0x9e: @@ ClearReplies()
0x9f: Pop(0)
0xa0: Push((int) 536149)
0xa1: Push((int) 37916)
0xa2: Push((int) 37914)
0xa3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4: Pop(3)
0xa5: Push((int) 536150)
0xa6: Push((int) 37916)
0xa7: Push((int) 37915)
0xa8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9: Pop(3)
0xaa: GOTO 0x116

0xab: PushEmpty(bool)
0xac: Stack[-1] = (bool) 0
0xad: PushEmpty(bool, object)
0xae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Call2 0x164b

0xb0: Pop(1)
0xb1: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb2: PushEmpty(bool, object)
0xb3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Call2 0x163f

0xb5: Pop(1)
0xb6: Pop(1); Push((bool) Stack[-1] == 0)
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: Stack[-1] = (bool) 1
0xb9: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral"
0xbc: Call2 0x134

0xbd: Pop(1)
0xbe: Push((int) 509078)
0xbf: @@ SetMessage(Stack[-1])
0xc0: Pop(1)
0xc1: @@ ClearReplies()
0xc2: Pop(0)
0xc3: Push((int) 509079)
0xc4: Push((int) 9958)
0xc5: Push((int) 9957)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: GOTO 0x116

0xc9: PushEmpty(string)
0xca: Stack[-1] = "Neutral"
0xcb: Call2 0x134

0xcc: Pop(1)
0xcd: Push((int) 508778)
0xce: @@ SetMessage(Stack[-1])
0xcf: Pop(1)
0xd0: @@ ClearReplies()
0xd1: Pop(0)
0xd2: PushEmpty(bool, object)
0xd3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Call2 0x1603

0xd5: Pop(1)
0xd6: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd7: Push((int) 511141)
0xd8: Push((int) 12331)
0xd9: Push((int) 12330)
0xda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb: Pop(3)
0xdc: PushEmpty(bool, object)
0xdd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xde: Call2 0x161b

0xdf: Pop(1)
0xe0: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe1: Push((int) 508779)
0xe2: Push((int) 9681)
0xe3: Push((int) 9626)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: PushEmpty(bool, object)
0xe7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Call2 0x1627

0xe9: Pop(1)
0xea: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xeb: Push((int) 508780)
0xec: Push((int) 9669)
0xed: Push((int) 9627)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: PushEmpty(bool)
0xf1: Stack[-1] = (bool) 0
0xf2: PushEmpty(bool)
0xf3: Stack[-1] = (bool) 0
0xf4: PushEmpty(bool, object)
0xf5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Call2 0x1633

0xf7: Pop(1)
0xf8: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf9: PushEmpty(bool, object)
0xfa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfb: Call2 0x1603

0xfc: Pop(1)
0xfd: Pop(1); Push((bool) Stack[-1] == 0)
0xfe: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xff: Stack[-1] = (bool) 1
0x100: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x101: PushEmpty(bool, object)
0x102: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x103: Call2 0x163f

0x104: Pop(1)
0x105: Pop(1); Push((bool) Stack[-1] == 0)
0x106: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x107: Stack[-1] = (bool) 1
0x108: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x109: Push((int) 508802)
0x10a: Push((int) 9651)
0x10b: Push((int) 9650)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: Push((int) 511140)
0x10f: Push((int) -1)
0x110: Push((int) 12329)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: GOTO 0x116

0x114: Return(); Pop(0)

0x115: GOTO 0x55

0x116: PushEmpty(bool)
0x117: Call2 0x144e

0x118: Pop(0)
0x119: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x11a: @ lshWaitForAnimEnd()
0x11b: Pop(0)
0x11c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x11d: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11e: GOTO 0x124

0x11f: PushEmpty(string)
0x120: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x121: Call2 0x1374

0x122: Pop(1)
0x123: GOTO 0x11a

0x124: GOTO 0x133

0x125: Push("all")
0x126: Push("idle")
0x127: @ PlayAnimation(Stack[-2], Stack[-1])
0x128: Pop(2)
0x129: @ WaitForAnimEnd()
0x12a: Pop(0)
0x12b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x12c: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12d: GOTO 0x133

0x12e: Push("all")
0x12f: Push("idle")
0x130: @ PlayAnimation(Stack[-2], Stack[-1])
0x131: Pop(2)
0x132: GOTO 0x129

0x133: Return(); Pop(0)

0x134: PushEmpty()
0x135: PushEmpty(bool)
0x136: Call2 0x144e

0x137: Pop(0)
0x138: Pop(1); Push((bool) Stack[-1] == 0)
0x139: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x13a: Return(); Pop(0)

0x13b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x13c: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13d: Return(); Pop(0)

0x13e: PushEmpty(string, bool)
0x13f: Stack[-2] = Stack[-3]
0x140: Push("")
0x141: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x143: Stack[-1] = (bool) 0
0x144: GOTO 0x146

0x145: Stack[-1] = (bool) 1
0x146: Call2 0x1384

0x147: Pop(2)
0x148: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x149: Return(); Pop(0)

0x14a: PushEmpty()
0x14b: Push((int) 1)
0x14c: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x14d: PushEmpty()
0x14e: Call2 0x13a2

0x14f: Pop(0)
0x150: Push((int) 9647)
0x151: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x153: PushEmpty(object, object)
0x154: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x155: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x156: Call2 0x14bc

0x157: Pop(2)
0x158: PushEmpty(object, object)
0x159: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15b: Call2 0x14a2

0x15c: Pop(2)
0x15d: PushEmpty(object, object)
0x15e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x160: Call2 0x14d4

0x161: Pop(2)
0x162: Push((int) 9649)
0x163: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x165: PushEmpty(object, object)
0x166: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x167: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x168: Call2 0x14bc

0x169: Pop(2)
0x16a: Push((int) 9639)
0x16b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x16d: PushEmpty(object, object)
0x16e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x16f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x170: Call2 0x14bc

0x171: Pop(2)
0x172: PushEmpty(object, object)
0x173: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x174: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x175: Call2 0x14a2

0x176: Pop(2)
0x177: PushEmpty(object, object)
0x178: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x179: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17a: Call2 0x14d4

0x17b: Pop(2)
0x17c: Push((int) 9594)
0x17d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x17f: PushEmpty(object, object)
0x180: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x181: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x182: Call2 0x14bc

0x183: Pop(2)
0x184: PushEmpty(object, object)
0x185: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x186: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x187: Call2 0x14a2

0x188: Pop(2)
0x189: PushEmpty(object, object)
0x18a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x18b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x18c: Call2 0x14d4

0x18d: Pop(2)
0x18e: Push((int) 9963)
0x18f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x191: PushEmpty(object, object)
0x192: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x193: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x194: Call2 0x14f4

0x195: Pop(2)
0x196: PushEmpty(object, object)
0x197: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x198: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x199: Call2 0x1456

0x19a: Pop(2)
0x19b: PushEmpty(object, object)
0x19c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x19d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x19e: Call2 0x149c

0x19f: Pop(2)
0x1a0: PushEmpty(object, object)
0x1a1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a3: Call2 0x148b

0x1a4: Pop(2)
0x1a5: Push((int) 12332)
0x1a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1a8: PushEmpty(object, object)
0x1a9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1aa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ab: Call2 0x14a2

0x1ac: Pop(2)
0x1ad: PushEmpty(object, object)
0x1ae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1af: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b0: Call2 0x14d4

0x1b1: Pop(2)
0x1b2: Push((int) 9684)
0x1b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b5: PushEmpty(object, object)
0x1b6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b8: Call2 0x14c2

0x1b9: Pop(2)
0x1ba: Push((int) 9627)
0x1bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1bd: PushEmpty(object, object)
0x1be: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c0: Call2 0x14fe

0x1c1: Pop(2)
0x1c2: Push((int) 9672)
0x1c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c5: PushEmpty(object, object)
0x1c6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c8: Call2 0x14c8

0x1c9: Pop(2)
0x1ca: Push((int) 9678)
0x1cb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cd: PushEmpty(object, object)
0x1ce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d0: Call2 0x14c8

0x1d1: Pop(2)
0x1d2: Push((int) 9679)
0x1d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d5: PushEmpty(object, object)
0x1d6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d8: Call2 0x14c8

0x1d9: Pop(2)
0x1da: Push((int) 9667)
0x1db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1dd: PushEmpty(object, object)
0x1de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e0: Call2 0x14c8

0x1e1: Pop(2)
0x1e2: Push((int) 9644)
0x1e3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e5: PushEmpty(object, object)
0x1e6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e8: Call2 0x14ce

0x1e9: Pop(2)
0x1ea: Push((int) 9641)
0x1eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ed: PushEmpty(object, object)
0x1ee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f0: Call2 0x14ce

0x1f1: Pop(2)
0x1f2: Push((int) 9574)
0x1f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x1f5: PushEmpty(bool)
0x1f6: Stack[-1] = (bool) 0
0x1f7: PushEmpty(bool, object)
0x1f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f9: Call2 0x1603

0x1fa: Pop(1)
0x1fb: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1fc: PushEmpty(bool, object)
0x1fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fe: Call2 0x160f

0x1ff: Pop(1)
0x200: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x201: Stack[-1] = (bool) 1
0x202: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x203: PushEmpty(object, object)
0x204: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x205: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x206: Call2 0x15b5

0x207: Pop(2)
0x208: PushEmpty(string)
0x209: Stack[-1] = "Neutral"
0x20a: Call2 0x134

0x20b: Pop(1)
0x20c: Push((int) 508737)
0x20d: @@ SetMessage(Stack[-1])
0x20e: Pop(1)
0x20f: @@ ClearReplies()
0x210: Pop(0)
0x211: Push((int) 508777)
0x212: Push((int) 9633)
0x213: Push((int) 9624)
0x214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x215: Pop(3)
0x216: Push((int) 508781)
0x217: Push((int) 9629)
0x218: Push((int) 9628)
0x219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21a: Pop(3)
0x21b: Return(); Pop(0)

0x21c: PushEmpty(bool)
0x21d: Stack[-1] = (bool) 0
0x21e: PushEmpty(bool)
0x21f: Stack[-1] = (bool) 0
0x220: PushEmpty(bool, object)
0x221: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x222: Call2 0x164b

0x223: Pop(1)
0x224: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x225: PushEmpty(bool, object)
0x226: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x227: Call2 0x163f

0x228: Pop(1)
0x229: Pop(1); Push((bool) Stack[-1] == 0)
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: Stack[-1] = (bool) 1
0x22c: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x22d: PushEmpty(bool, object)
0x22e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22f: Call2 0x15d3

0x230: Pop(1)
0x231: Pop(1); Push((bool) Stack[-1] == 0)
0x232: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x233: Stack[-1] = (bool) 1
0x234: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x235: PushEmpty(string)
0x236: Stack[-1] = "Neutral"
0x237: Call2 0x134

0x238: Pop(1)
0x239: Push((int) 536148)
0x23a: @@ SetMessage(Stack[-1])
0x23b: Pop(1)
0x23c: @@ ClearReplies()
0x23d: Pop(0)
0x23e: Push((int) 536149)
0x23f: Push((int) 37916)
0x240: Push((int) 37914)
0x241: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x242: Pop(3)
0x243: Push((int) 536150)
0x244: Push((int) 37916)
0x245: Push((int) 37915)
0x246: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x247: Pop(3)
0x248: Return(); Pop(0)

0x249: PushEmpty(bool)
0x24a: Stack[-1] = (bool) 0
0x24b: PushEmpty(bool, object)
0x24c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24d: Call2 0x164b

0x24e: Pop(1)
0x24f: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x250: PushEmpty(bool, object)
0x251: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x252: Call2 0x163f

0x253: Pop(1)
0x254: Pop(1); Push((bool) Stack[-1] == 0)
0x255: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x256: Stack[-1] = (bool) 1
0x257: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x258: PushEmpty(string)
0x259: Stack[-1] = "Neutral"
0x25a: Call2 0x134

0x25b: Pop(1)
0x25c: Push((int) 509078)
0x25d: @@ SetMessage(Stack[-1])
0x25e: Pop(1)
0x25f: @@ ClearReplies()
0x260: Pop(0)
0x261: Push((int) 509079)
0x262: Push((int) 9958)
0x263: Push((int) 9957)
0x264: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x265: Pop(3)
0x266: Return(); Pop(0)

0x267: PushEmpty(string)
0x268: Stack[-1] = "Neutral"
0x269: Call2 0x134

0x26a: Pop(1)
0x26b: Push((int) 508778)
0x26c: @@ SetMessage(Stack[-1])
0x26d: Pop(1)
0x26e: @@ ClearReplies()
0x26f: Pop(0)
0x270: PushEmpty(bool, object)
0x271: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x272: Call2 0x1603

0x273: Pop(1)
0x274: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x275: Push((int) 511141)
0x276: Push((int) 12331)
0x277: Push((int) 12330)
0x278: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x279: Pop(3)
0x27a: PushEmpty(bool, object)
0x27b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27c: Call2 0x161b

0x27d: Pop(1)
0x27e: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27f: Push((int) 508779)
0x280: Push((int) 9681)
0x281: Push((int) 9626)
0x282: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x283: Pop(3)
0x284: PushEmpty(bool, object)
0x285: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x286: Call2 0x1627

0x287: Pop(1)
0x288: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x289: Push((int) 508780)
0x28a: Push((int) 9669)
0x28b: Push((int) 9627)
0x28c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28d: Pop(3)
0x28e: PushEmpty(bool)
0x28f: Stack[-1] = (bool) 0
0x290: PushEmpty(bool)
0x291: Stack[-1] = (bool) 0
0x292: PushEmpty(bool, object)
0x293: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x294: Call2 0x1633

0x295: Pop(1)
0x296: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x297: PushEmpty(bool, object)
0x298: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x299: Call2 0x1603

0x29a: Pop(1)
0x29b: Pop(1); Push((bool) Stack[-1] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29d: Stack[-1] = (bool) 1
0x29e: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x29f: PushEmpty(bool, object)
0x2a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a1: Call2 0x163f

0x2a2: Pop(1)
0x2a3: Pop(1); Push((bool) Stack[-1] == 0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a5: Stack[-1] = (bool) 1
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a7: Push((int) 508802)
0x2a8: Push((int) 9651)
0x2a9: Push((int) 9650)
0x2aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ab: Pop(3)
0x2ac: Push((int) 511140)
0x2ad: Push((int) -1)
0x2ae: Push((int) 12329)
0x2af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b0: Pop(3)
0x2b1: Return(); Pop(0)

0x2b2: Push((int) 9651)
0x2b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2b5: PushEmpty(string)
0x2b6: Stack[-1] = "Warning"
0x2b7: Call2 0x134

0x2b8: Pop(1)
0x2b9: Push((int) 508803)
0x2ba: @@ SetMessage(Stack[-1])
0x2bb: Pop(1)
0x2bc: @@ ClearReplies()
0x2bd: Pop(0)
0x2be: Push((int) 508804)
0x2bf: Push((int) 9640)
0x2c0: Push((int) 9652)
0x2c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c2: Pop(3)
0x2c3: Return(); Pop(0)

0x2c4: Push((int) 9640)
0x2c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2c7: PushEmpty(string)
0x2c8: Stack[-1] = "Rage"
0x2c9: Call2 0x134

0x2ca: Pop(1)
0x2cb: Push((int) 508793)
0x2cc: @@ SetMessage(Stack[-1])
0x2cd: Pop(1)
0x2ce: @@ ClearReplies()
0x2cf: Pop(0)
0x2d0: Push((int) 508795)
0x2d1: Push((int) 9643)
0x2d2: Push((int) 9642)
0x2d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d4: Pop(3)
0x2d5: Push((int) 508794)
0x2d6: Push((int) -1)
0x2d7: Push((int) 9641)
0x2d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d9: Pop(3)
0x2da: Return(); Pop(0)

0x2db: Push((int) 9643)
0x2dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2de: PushEmpty(string)
0x2df: Stack[-1] = "Rage"
0x2e0: Call2 0x134

0x2e1: Pop(1)
0x2e2: Push((int) 508796)
0x2e3: @@ SetMessage(Stack[-1])
0x2e4: Pop(1)
0x2e5: @@ ClearReplies()
0x2e6: Pop(0)
0x2e7: Push((int) 508797)
0x2e8: Push((int) -1)
0x2e9: Push((int) 9644)
0x2ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2eb: Pop(3)
0x2ec: Return(); Pop(0)

0x2ed: Push((int) 9669)
0x2ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x2f0: PushEmpty(string)
0x2f1: Stack[-1] = "Confusion"
0x2f2: Call2 0x134

0x2f3: Pop(1)
0x2f4: Push((int) 508818)
0x2f5: @@ SetMessage(Stack[-1])
0x2f6: Pop(1)
0x2f7: @@ ClearReplies()
0x2f8: Pop(0)
0x2f9: Push((int) 508819)
0x2fa: Push((int) 9666)
0x2fb: Push((int) 9670)
0x2fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fd: Pop(3)
0x2fe: PushEmpty(bool, object)
0x2ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x300: Call2 0x163f

0x301: Pop(1)
0x302: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x303: Push((int) 536147)
0x304: Push((int) 9616)
0x305: Push((int) 37912)
0x306: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x307: Pop(3)
0x308: Return(); Pop(0)

0x309: Push((int) 9616)
0x30a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30b: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x30c: PushEmpty(string)
0x30d: Stack[-1] = "Warning"
0x30e: Call2 0x134

0x30f: Pop(1)
0x310: Push((int) 508769)
0x311: @@ SetMessage(Stack[-1])
0x312: Pop(1)
0x313: @@ ClearReplies()
0x314: Pop(0)
0x315: Push((int) 508770)
0x316: Push((int) 9621)
0x317: Push((int) 9617)
0x318: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x319: Pop(3)
0x31a: Push((int) 508771)
0x31b: Push((int) 9619)
0x31c: Push((int) 9618)
0x31d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31e: Pop(3)
0x31f: Return(); Pop(0)

0x320: Push((int) 9619)
0x321: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x323: PushEmpty(string)
0x324: Stack[-1] = "Neutral"
0x325: Call2 0x134

0x326: Pop(1)
0x327: Push((int) 508772)
0x328: @@ SetMessage(Stack[-1])
0x329: Pop(1)
0x32a: @@ ClearReplies()
0x32b: Pop(0)
0x32c: Push((int) 508773)
0x32d: Push((int) 9621)
0x32e: Push((int) 9620)
0x32f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x330: Pop(3)
0x331: Push((int) 508814)
0x332: Push((int) -1)
0x333: Push((int) 9663)
0x334: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x335: Pop(3)
0x336: Return(); Pop(0)

0x337: Push((int) 9621)
0x338: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x33a: PushEmpty(string)
0x33b: Stack[-1] = "Warning"
0x33c: Call2 0x134

0x33d: Pop(1)
0x33e: Push((int) 508774)
0x33f: @@ SetMessage(Stack[-1])
0x340: Pop(1)
0x341: @@ ClearReplies()
0x342: Pop(0)
0x343: Push((int) 508775)
0x344: Push((int) 9623)
0x345: Push((int) 9622)
0x346: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x347: Pop(3)
0x348: Push((int) 510448)
0x349: Push((int) 9623)
0x34a: Push((int) 11518)
0x34b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34c: Pop(3)
0x34d: Return(); Pop(0)

0x34e: Push((int) 9623)
0x34f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x350: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x351: PushEmpty(string)
0x352: Stack[-1] = "Warning"
0x353: Call2 0x134

0x354: Pop(1)
0x355: Push((int) 508776)
0x356: @@ SetMessage(Stack[-1])
0x357: Pop(1)
0x358: @@ ClearReplies()
0x359: Pop(0)
0x35a: Push((int) 508739)
0x35b: Push((int) 9577)
0x35c: Push((int) 9576)
0x35d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35e: Pop(3)
0x35f: Push((int) 508764)
0x360: Push((int) 9577)
0x361: Push((int) 9608)
0x362: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x363: Pop(3)
0x364: Push((int) 508765)
0x365: Push((int) 9611)
0x366: Push((int) 9610)
0x367: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x368: Pop(3)
0x369: Return(); Pop(0)

0x36a: Push((int) 9611)
0x36b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36c: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x36d: PushEmpty(string)
0x36e: Stack[-1] = "Neutral"
0x36f: Call2 0x134

0x370: Pop(1)
0x371: Push((int) 508766)
0x372: @@ SetMessage(Stack[-1])
0x373: Pop(1)
0x374: @@ ClearReplies()
0x375: Pop(0)
0x376: Push((int) 508767)
0x377: Push((int) 9587)
0x378: Push((int) 9612)
0x379: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37a: Pop(3)
0x37b: Push((int) 508768)
0x37c: Push((int) 9587)
0x37d: Push((int) 9614)
0x37e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37f: Pop(3)
0x380: Return(); Pop(0)

0x381: Push((int) 9577)
0x382: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x384: PushEmpty(string)
0x385: Stack[-1] = "Warning"
0x386: Call2 0x134

0x387: Pop(1)
0x388: Push((int) 508740)
0x389: @@ SetMessage(Stack[-1])
0x38a: Pop(1)
0x38b: @@ ClearReplies()
0x38c: Pop(0)
0x38d: Push((int) 508746)
0x38e: Push((int) 9587)
0x38f: Push((int) 9586)
0x390: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x391: Pop(3)
0x392: Return(); Pop(0)

0x393: Push((int) 9587)
0x394: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x395: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x396: PushEmpty(string)
0x397: Stack[-1] = "Warning"
0x398: Call2 0x134

0x399: Pop(1)
0x39a: Push((int) 508747)
0x39b: @@ SetMessage(Stack[-1])
0x39c: Pop(1)
0x39d: @@ ClearReplies()
0x39e: Pop(0)
0x39f: Push((int) 508748)
0x3a0: Push((int) 9589)
0x3a1: Push((int) 9588)
0x3a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a3: Pop(3)
0x3a4: Push((int) 508762)
0x3a5: Push((int) -1)
0x3a6: Push((int) 9604)
0x3a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a8: Pop(3)
0x3a9: Push((int) 508763)
0x3aa: Push((int) 9589)
0x3ab: Push((int) 9606)
0x3ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ad: Pop(3)
0x3ae: Return(); Pop(0)

0x3af: Push((int) 9589)
0x3b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3b2: PushEmpty(string)
0x3b3: Stack[-1] = "Warning"
0x3b4: Call2 0x134

0x3b5: Pop(1)
0x3b6: Push((int) 508749)
0x3b7: @@ SetMessage(Stack[-1])
0x3b8: Pop(1)
0x3b9: @@ ClearReplies()
0x3ba: Pop(0)
0x3bb: Push((int) 508761)
0x3bc: Push((int) -1)
0x3bd: Push((int) 9603)
0x3be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bf: Pop(3)
0x3c0: Push((int) 536153)
0x3c1: Push((int) -1)
0x3c2: Push((int) 37918)
0x3c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c4: Pop(3)
0x3c5: Return(); Pop(0)

0x3c6: Push((int) 9666)
0x3c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3c9: PushEmpty(string)
0x3ca: Stack[-1] = "Confusion"
0x3cb: Call2 0x134

0x3cc: Pop(1)
0x3cd: Push((int) 508815)
0x3ce: @@ SetMessage(Stack[-1])
0x3cf: Pop(1)
0x3d0: @@ ClearReplies()
0x3d1: Pop(0)
0x3d2: Push((int) 508817)
0x3d3: Push((int) 9671)
0x3d4: Push((int) 9668)
0x3d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d6: Pop(3)
0x3d7: Push((int) 508816)
0x3d8: Push((int) -1)
0x3d9: Push((int) 9667)
0x3da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3db: Pop(3)
0x3dc: Return(); Pop(0)

0x3dd: Push((int) 9671)
0x3de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3df: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3e0: PushEmpty(string)
0x3e1: Stack[-1] = "Confusion"
0x3e2: Call2 0x134

0x3e3: Pop(1)
0x3e4: Push((int) 508820)
0x3e5: @@ SetMessage(Stack[-1])
0x3e6: Pop(1)
0x3e7: @@ ClearReplies()
0x3e8: Pop(0)
0x3e9: Push((int) 508821)
0x3ea: Push((int) -1)
0x3eb: Push((int) 9672)
0x3ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ed: Pop(3)
0x3ee: Push((int) 508822)
0x3ef: Push((int) 9674)
0x3f0: Push((int) 9673)
0x3f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f2: Pop(3)
0x3f3: Return(); Pop(0)

0x3f4: Push((int) 9674)
0x3f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f6: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x3f7: PushEmpty(string)
0x3f8: Stack[-1] = "Warning"
0x3f9: Call2 0x134

0x3fa: Pop(1)
0x3fb: Push((int) 508823)
0x3fc: @@ SetMessage(Stack[-1])
0x3fd: Pop(1)
0x3fe: @@ ClearReplies()
0x3ff: Pop(0)
0x400: Push((int) 508824)
0x401: Push((int) 9677)
0x402: Push((int) 9675)
0x403: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x404: Pop(3)
0x405: Return(); Pop(0)

0x406: Push((int) 9677)
0x407: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x408: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x409: PushEmpty(string)
0x40a: Stack[-1] = "Warning"
0x40b: Call2 0x134

0x40c: Pop(1)
0x40d: Push((int) 508826)
0x40e: @@ SetMessage(Stack[-1])
0x40f: Pop(1)
0x410: @@ ClearReplies()
0x411: Pop(0)
0x412: Push((int) 508827)
0x413: Push((int) -1)
0x414: Push((int) 9678)
0x415: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x416: Pop(3)
0x417: Push((int) 508828)
0x418: Push((int) -1)
0x419: Push((int) 9679)
0x41a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41b: Pop(3)
0x41c: Return(); Pop(0)

0x41d: Push((int) 9681)
0x41e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41f: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x420: PushEmpty(string)
0x421: Stack[-1] = "Rage"
0x422: Call2 0x134

0x423: Pop(1)
0x424: Push((int) 508829)
0x425: @@ SetMessage(Stack[-1])
0x426: Pop(1)
0x427: @@ ClearReplies()
0x428: Pop(0)
0x429: Push((int) 508830)
0x42a: Push((int) 9683)
0x42b: Push((int) 9682)
0x42c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42d: Pop(3)
0x42e: Return(); Pop(0)

0x42f: Push((int) 9683)
0x430: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x431: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x432: PushEmpty(string)
0x433: Stack[-1] = "Warning"
0x434: Call2 0x134

0x435: Pop(1)
0x436: Push((int) 508831)
0x437: @@ SetMessage(Stack[-1])
0x438: Pop(1)
0x439: @@ ClearReplies()
0x43a: Pop(0)
0x43b: Push((int) 508832)
0x43c: Push((int) -1)
0x43d: Push((int) 9684)
0x43e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43f: Pop(3)
0x440: Return(); Pop(0)

0x441: Push((int) 12331)
0x442: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x443: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x444: PushEmpty(string)
0x445: Stack[-1] = "Neutral"
0x446: Call2 0x134

0x447: Pop(1)
0x448: Push((int) 511142)
0x449: @@ SetMessage(Stack[-1])
0x44a: Pop(1)
0x44b: @@ ClearReplies()
0x44c: Pop(0)
0x44d: Push((int) 511143)
0x44e: Push((int) -1)
0x44f: Push((int) 12332)
0x450: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x451: Pop(3)
0x452: Return(); Pop(0)

0x453: Push((int) 9958)
0x454: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x455: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x456: PushEmpty(string)
0x457: Stack[-1] = "Rage"
0x458: Call2 0x134

0x459: Pop(1)
0x45a: Push((int) 509080)
0x45b: @@ SetMessage(Stack[-1])
0x45c: Pop(1)
0x45d: @@ ClearReplies()
0x45e: Pop(0)
0x45f: Push((int) 509081)
0x460: Push((int) 11530)
0x461: Push((int) 9959)
0x462: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x463: Pop(3)
0x464: Push((int) 536146)
0x465: Push((int) 10799)
0x466: Push((int) 37906)
0x467: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x468: Pop(3)
0x469: Return(); Pop(0)

0x46a: Push((int) 10799)
0x46b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x46d: PushEmpty(string)
0x46e: Stack[-1] = "Rage"
0x46f: Call2 0x134

0x470: Pop(1)
0x471: Push((int) 509805)
0x472: @@ SetMessage(Stack[-1])
0x473: Pop(1)
0x474: @@ ClearReplies()
0x475: Pop(0)
0x476: Push((int) 509806)
0x477: Push((int) 10801)
0x478: Push((int) 10800)
0x479: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47a: Pop(3)
0x47b: Return(); Pop(0)

0x47c: Push((int) 10801)
0x47d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47e: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x47f: PushEmpty(string)
0x480: Stack[-1] = "Confusion"
0x481: Call2 0x134

0x482: Pop(1)
0x483: Push((int) 509807)
0x484: @@ SetMessage(Stack[-1])
0x485: Pop(1)
0x486: @@ ClearReplies()
0x487: Pop(0)
0x488: Push((int) 509808)
0x489: Push((int) 10803)
0x48a: Push((int) 10802)
0x48b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48c: Pop(3)
0x48d: Push((int) 509821)
0x48e: Push((int) 10803)
0x48f: Push((int) 10816)
0x490: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x491: Pop(3)
0x492: Return(); Pop(0)

0x493: Push((int) 10803)
0x494: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x495: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x496: PushEmpty(string)
0x497: Stack[-1] = "Confusion"
0x498: Call2 0x134

0x499: Pop(1)
0x49a: Push((int) 509809)
0x49b: @@ SetMessage(Stack[-1])
0x49c: Pop(1)
0x49d: @@ ClearReplies()
0x49e: Pop(0)
0x49f: Push((int) 509810)
0x4a0: Push((int) 10805)
0x4a1: Push((int) 10804)
0x4a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a3: Pop(3)
0x4a4: Push((int) 509814)
0x4a5: Push((int) 10809)
0x4a6: Push((int) 10808)
0x4a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a8: Pop(3)
0x4a9: Push((int) 509820)
0x4aa: Push((int) 10809)
0x4ab: Push((int) 10814)
0x4ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ad: Pop(3)
0x4ae: Return(); Pop(0)

0x4af: Push((int) 10809)
0x4b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b1: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4b2: PushEmpty(string)
0x4b3: Stack[-1] = "Confusion"
0x4b4: Call2 0x134

0x4b5: Pop(1)
0x4b6: Push((int) 509815)
0x4b7: @@ SetMessage(Stack[-1])
0x4b8: Pop(1)
0x4b9: @@ ClearReplies()
0x4ba: Pop(0)
0x4bb: Push((int) 509816)
0x4bc: Push((int) 10811)
0x4bd: Push((int) 10810)
0x4be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bf: Pop(3)
0x4c0: Return(); Pop(0)

0x4c1: Push((int) 10811)
0x4c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c3: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4c4: PushEmpty(string)
0x4c5: Stack[-1] = "Confusion"
0x4c6: Call2 0x134

0x4c7: Pop(1)
0x4c8: Push((int) 509817)
0x4c9: @@ SetMessage(Stack[-1])
0x4ca: Pop(1)
0x4cb: @@ ClearReplies()
0x4cc: Pop(0)
0x4cd: Push((int) 509818)
0x4ce: Push((int) 11530)
0x4cf: Push((int) 10812)
0x4d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d1: Pop(3)
0x4d2: Push((int) 509819)
0x4d3: Push((int) 11530)
0x4d4: Push((int) 10813)
0x4d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d6: Pop(3)
0x4d7: Return(); Pop(0)

0x4d8: Push((int) 10805)
0x4d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4da: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4db: PushEmpty(string)
0x4dc: Stack[-1] = "Confusion"
0x4dd: Call2 0x134

0x4de: Pop(1)
0x4df: Push((int) 509811)
0x4e0: @@ SetMessage(Stack[-1])
0x4e1: Pop(1)
0x4e2: @@ ClearReplies()
0x4e3: Pop(0)
0x4e4: Push((int) 509812)
0x4e5: Push((int) 11530)
0x4e6: Push((int) 10806)
0x4e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e8: Pop(3)
0x4e9: Push((int) 509813)
0x4ea: Push((int) 11530)
0x4eb: Push((int) 10807)
0x4ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ed: Pop(3)
0x4ee: Return(); Pop(0)

0x4ef: Push((int) 11530)
0x4f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f1: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4f2: PushEmpty(string)
0x4f3: Stack[-1] = "Neutral"
0x4f4: Call2 0x134

0x4f5: Pop(1)
0x4f6: Push((int) 510457)
0x4f7: @@ SetMessage(Stack[-1])
0x4f8: Pop(1)
0x4f9: @@ ClearReplies()
0x4fa: Pop(0)
0x4fb: Push((int) 510458)
0x4fc: Push((int) 11532)
0x4fd: Push((int) 11531)
0x4fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ff: Pop(3)
0x500: Return(); Pop(0)

0x501: Push((int) 11532)
0x502: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x503: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x504: PushEmpty(string)
0x505: Stack[-1] = "Neutral"
0x506: Call2 0x134

0x507: Pop(1)
0x508: Push((int) 510459)
0x509: @@ SetMessage(Stack[-1])
0x50a: Pop(1)
0x50b: @@ ClearReplies()
0x50c: Pop(0)
0x50d: Push((int) 510460)
0x50e: Push((int) 11534)
0x50f: Push((int) 11533)
0x510: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x511: Pop(3)
0x512: Return(); Pop(0)

0x513: Push((int) 11534)
0x514: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x515: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x516: PushEmpty(string)
0x517: Stack[-1] = "Neutral"
0x518: Call2 0x134

0x519: Pop(1)
0x51a: Push((int) 510461)
0x51b: @@ SetMessage(Stack[-1])
0x51c: Pop(1)
0x51d: @@ ClearReplies()
0x51e: Pop(0)
0x51f: Push((int) 510462)
0x520: Push((int) 9960)
0x521: Push((int) 11535)
0x522: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x523: Pop(3)
0x524: Return(); Pop(0)

0x525: Push((int) 9960)
0x526: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x527: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x528: PushEmpty(string)
0x529: Stack[-1] = "Neutral"
0x52a: Call2 0x134

0x52b: Pop(1)
0x52c: Push((int) 509082)
0x52d: @@ SetMessage(Stack[-1])
0x52e: Pop(1)
0x52f: @@ ClearReplies()
0x530: Pop(0)
0x531: Push((int) 509083)
0x532: Push((int) 9962)
0x533: Push((int) 9961)
0x534: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x535: Pop(3)
0x536: Return(); Pop(0)

0x537: Push((int) 9962)
0x538: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x539: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x53a: PushEmpty(string)
0x53b: Stack[-1] = "Neutral"
0x53c: Call2 0x134

0x53d: Pop(1)
0x53e: Push((int) 509084)
0x53f: @@ SetMessage(Stack[-1])
0x540: Pop(1)
0x541: @@ ClearReplies()
0x542: Pop(0)
0x543: Push((int) 509085)
0x544: Push((int) -1)
0x545: Push((int) 9963)
0x546: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x547: Pop(3)
0x548: Return(); Pop(0)

0x549: Push((int) 37916)
0x54a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54b: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x54c: PushEmpty(string)
0x54d: Stack[-1] = "Neutral"
0x54e: Call2 0x134

0x54f: Pop(1)
0x550: Push((int) 536151)
0x551: @@ SetMessage(Stack[-1])
0x552: Pop(1)
0x553: @@ ClearReplies()
0x554: Pop(0)
0x555: Push((int) 536152)
0x556: Push((int) -1)
0x557: Push((int) 37917)
0x558: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x559: Pop(3)
0x55a: Return(); Pop(0)

0x55b: Push((int) 9629)
0x55c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x55d: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x55e: PushEmpty(object, object)
0x55f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x560: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x561: Call2 0x14fe

0x562: Pop(2)
0x563: PushEmpty(string)
0x564: Stack[-1] = "Confusion"
0x565: Call2 0x134

0x566: Pop(1)
0x567: Push((int) 508782)
0x568: @@ SetMessage(Stack[-1])
0x569: Pop(1)
0x56a: @@ ClearReplies()
0x56b: Pop(0)
0x56c: Push((int) 508783)
0x56d: Push((int) 9631)
0x56e: Push((int) 9630)
0x56f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x570: Pop(3)
0x571: Push((int) 510447)
0x572: Push((int) 9631)
0x573: Push((int) 11516)
0x574: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x575: Pop(3)
0x576: Return(); Pop(0)

0x577: Push((int) 9631)
0x578: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x579: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x57a: PushEmpty(string)
0x57b: Stack[-1] = "Confusion"
0x57c: Call2 0x134

0x57d: Pop(1)
0x57e: Push((int) 508784)
0x57f: @@ SetMessage(Stack[-1])
0x580: Pop(1)
0x581: @@ ClearReplies()
0x582: Pop(0)
0x583: Push((int) 508785)
0x584: Push((int) 9591)
0x585: Push((int) 9632)
0x586: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x587: Pop(3)
0x588: Return(); Pop(0)

0x589: Push((int) 9633)
0x58a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58b: IF (Stack[-1] == 0) GOTO 0x59b; Pop(1)

0x58c: PushEmpty(string)
0x58d: Stack[-1] = "Warning"
0x58e: Call2 0x134

0x58f: Pop(1)
0x590: Push((int) 508786)
0x591: @@ SetMessage(Stack[-1])
0x592: Pop(1)
0x593: @@ ClearReplies()
0x594: Pop(0)
0x595: Push((int) 508787)
0x596: Push((int) 9591)
0x597: Push((int) 9634)
0x598: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x599: Pop(3)
0x59a: Return(); Pop(0)

0x59b: Push((int) 9591)
0x59c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59d: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x59e: PushEmpty(string)
0x59f: Stack[-1] = "Warning"
0x5a0: Call2 0x134

0x5a1: Pop(1)
0x5a2: Push((int) 508751)
0x5a3: @@ SetMessage(Stack[-1])
0x5a4: Pop(1)
0x5a5: @@ ClearReplies()
0x5a6: Pop(0)
0x5a7: Push((int) 508752)
0x5a8: Push((int) 9657)
0x5a9: Push((int) 9592)
0x5aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ab: Pop(3)
0x5ac: Push((int) 508757)
0x5ad: Push((int) 9598)
0x5ae: Push((int) 9597)
0x5af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b0: Pop(3)
0x5b1: Return(); Pop(0)

0x5b2: Push((int) 9598)
0x5b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b4: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5b5: PushEmpty(string)
0x5b6: Stack[-1] = "Rage"
0x5b7: Call2 0x134

0x5b8: Pop(1)
0x5b9: Push((int) 508758)
0x5ba: @@ SetMessage(Stack[-1])
0x5bb: Pop(1)
0x5bc: @@ ClearReplies()
0x5bd: Pop(0)
0x5be: Push((int) 508759)
0x5bf: Push((int) 9593)
0x5c0: Push((int) 9599)
0x5c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c2: Pop(3)
0x5c3: Push((int) 508760)
0x5c4: Push((int) 9593)
0x5c5: Push((int) 9601)
0x5c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c7: Pop(3)
0x5c8: Return(); Pop(0)

0x5c9: Push((int) 9657)
0x5ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5cb: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5cc: PushEmpty(string)
0x5cd: Stack[-1] = "Warning"
0x5ce: Call2 0x134

0x5cf: Pop(1)
0x5d0: Push((int) 508808)
0x5d1: @@ SetMessage(Stack[-1])
0x5d2: Pop(1)
0x5d3: @@ ClearReplies()
0x5d4: Pop(0)
0x5d5: Push((int) 508809)
0x5d6: Push((int) 9659)
0x5d7: Push((int) 9658)
0x5d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d9: Pop(3)
0x5da: Push((int) 510449)
0x5db: Push((int) 11521)
0x5dc: Push((int) 11520)
0x5dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5de: Pop(3)
0x5df: Return(); Pop(0)

0x5e0: Push((int) 11521)
0x5e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e2: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5e3: PushEmpty(string)
0x5e4: Stack[-1] = "Confusion"
0x5e5: Call2 0x134

0x5e6: Pop(1)
0x5e7: Push((int) 510450)
0x5e8: @@ SetMessage(Stack[-1])
0x5e9: Pop(1)
0x5ea: @@ ClearReplies()
0x5eb: Pop(0)
0x5ec: Push((int) 510451)
0x5ed: Push((int) 11523)
0x5ee: Push((int) 11522)
0x5ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f0: Pop(3)
0x5f1: Return(); Pop(0)

0x5f2: Push((int) 11523)
0x5f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f4: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x5f5: PushEmpty(string)
0x5f6: Stack[-1] = "Warning"
0x5f7: Call2 0x134

0x5f8: Pop(1)
0x5f9: Push((int) 510452)
0x5fa: @@ SetMessage(Stack[-1])
0x5fb: Pop(1)
0x5fc: @@ ClearReplies()
0x5fd: Pop(0)
0x5fe: Push((int) 510453)
0x5ff: Push((int) 9659)
0x600: Push((int) 11524)
0x601: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x602: Pop(3)
0x603: Return(); Pop(0)

0x604: Push((int) 9659)
0x605: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x606: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x607: PushEmpty(string)
0x608: Stack[-1] = "Warning"
0x609: Call2 0x134

0x60a: Pop(1)
0x60b: Push((int) 508810)
0x60c: @@ SetMessage(Stack[-1])
0x60d: Pop(1)
0x60e: @@ ClearReplies()
0x60f: Pop(0)
0x610: Push((int) 508811)
0x611: Push((int) 9661)
0x612: Push((int) 9660)
0x613: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x614: Pop(3)
0x615: Push((int) 510454)
0x616: Push((int) 11527)
0x617: Push((int) 11526)
0x618: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x619: Pop(3)
0x61a: Return(); Pop(0)

0x61b: Push((int) 11527)
0x61c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61d: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x61e: PushEmpty(string)
0x61f: Stack[-1] = "Warning"
0x620: Call2 0x134

0x621: Pop(1)
0x622: Push((int) 510455)
0x623: @@ SetMessage(Stack[-1])
0x624: Pop(1)
0x625: @@ ClearReplies()
0x626: Pop(0)
0x627: Push((int) 510456)
0x628: Push((int) 9593)
0x629: Push((int) 11528)
0x62a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62b: Pop(3)
0x62c: Return(); Pop(0)

0x62d: Push((int) 9661)
0x62e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62f: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x630: PushEmpty(string)
0x631: Stack[-1] = "Rage"
0x632: Call2 0x134

0x633: Pop(1)
0x634: Push((int) 508812)
0x635: @@ SetMessage(Stack[-1])
0x636: Pop(1)
0x637: @@ ClearReplies()
0x638: Pop(0)
0x639: Push((int) 508813)
0x63a: Push((int) 9593)
0x63b: Push((int) 9662)
0x63c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63d: Pop(3)
0x63e: Return(); Pop(0)

0x63f: Push((int) 9593)
0x640: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x641: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x642: PushEmpty(string)
0x643: Stack[-1] = "Neutral"
0x644: Call2 0x134

0x645: Pop(1)
0x646: Push((int) 508753)
0x647: @@ SetMessage(Stack[-1])
0x648: Pop(1)
0x649: @@ ClearReplies()
0x64a: Pop(0)
0x64b: Push((int) 508790)
0x64c: Push((int) 9638)
0x64d: Push((int) 9637)
0x64e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64f: Pop(3)
0x650: Push((int) 508754)
0x651: Push((int) -1)
0x652: Push((int) 9594)
0x653: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x654: Pop(3)
0x655: Return(); Pop(0)

0x656: Push((int) 9638)
0x657: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x658: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x659: PushEmpty(string)
0x65a: Stack[-1] = "Neutral"
0x65b: Call2 0x134

0x65c: Pop(1)
0x65d: Push((int) 508791)
0x65e: @@ SetMessage(Stack[-1])
0x65f: Pop(1)
0x660: @@ ClearReplies()
0x661: Pop(0)
0x662: Push((int) 508798)
0x663: Push((int) 9646)
0x664: Push((int) 9645)
0x665: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x666: Pop(3)
0x667: Push((int) 508792)
0x668: Push((int) -1)
0x669: Push((int) 9639)
0x66a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66b: Pop(3)
0x66c: Return(); Pop(0)

0x66d: Push((int) 9646)
0x66e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x66f: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x670: PushEmpty(string)
0x671: Stack[-1] = "Neutral"
0x672: Call2 0x134

0x673: Pop(1)
0x674: Push((int) 508799)
0x675: @@ SetMessage(Stack[-1])
0x676: Pop(1)
0x677: @@ ClearReplies()
0x678: Pop(0)
0x679: Push((int) 508800)
0x67a: Push((int) -1)
0x67b: Push((int) 9647)
0x67c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67d: Pop(3)
0x67e: Push((int) 508801)
0x67f: Push((int) -1)
0x680: Push((int) 9649)
0x681: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x682: Pop(3)
0x683: Return(); Pop(0)

0x684: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x685: PushEmpty(bool)
0x686: Call2 0x144e

0x687: Pop(0)
0x688: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x689: @ lshStopAnimation()
0x68a: Pop(0)
0x68b: GOTO 0x68e

0x68c: @ StopAnimation()
0x68d: Pop(0)
0x68e: Return(); Pop(0)

0x68f: GOTO 0x14b

0x690: Return(); Pop(0)

0x691: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x692: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x693: PushEmpty(bool, object, float)
0x694: Stack[-2] = Stack[-12]
0x695: Stack[-1] = (float) 70.0
0x696: Call2 0x1293

0x697: Pop(2)
0x698: Pop(1); Push((bool) Stack[-1] == 0)
0x699: IF (Stack[-1] == 0) GOTO 0x69c; Pop(1)

0x69a: Stack[-10] = (int) -2
0x69b: Return(); Pop(8)

0x69c: @ CreateDialog(Stack[-4])
0x69d: Pop(0)
0x69e: PushEmpty(int)
0x69f: Call2 0x1448

0x6a0: Pop(0)
0x6a1: @@ SetNPCName(Stack[-1])
0x6a2: Pop(1)
0x6a3: PushEmpty(int)
0x6a4: Call2 0x1446

0x6a5: Pop(0)
0x6a6: @@ SetNPCDescription(Stack[-1])
0x6a7: Pop(1)
0x6a8: PushEmpty(string)
0x6a9: Call2 0x144a

0x6aa: Pop(0)
0x6ab: @@ SetPhoto(Stack[-1])
0x6ac: Pop(1)
0x6ad: PushEmpty(string)
0x6ae: Call2 0x144c

0x6af: Pop(0)
0x6b0: @@ SetPhoto2(Stack[-1])
0x6b1: Pop(1)
0x6b2: PushEmpty(int)
0x6b3: Call2 0x1781

0x6b4: Pop(0)
0x6b5: @@ SetPlayerName(Stack[-1])
0x6b6: Pop(1)
0x6b7: Stack[-2] = (int) -1
0x6b8: @ IsOverrideActive(Stack[-3])
0x6b9: Pop(0)
0x6ba: Push(Stack[-3])
0x6bb: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6bc: Stack[-10] = (int) -2
0x6bd: Return(); Pop(8)

0x6be: @ DoDialog(Stack[-4])
0x6bf: Pop(0)
0x6c0: PushEmpty(bool, object)
0x6c1: PushEmpty(object)
0x6c2: Call2 0x13a9

0x6c3: Stack[-2] = Stack[-1]
0x6c4: Pop(1)
0x6c5: Call2 0x12ea

0x6c6: Pop(2)
0x6c7: PushEmpty(object, object)
0x6c8: Stack[-2] = Stack[-11]
0x6c9: Stack[-1] = Stack[-6]
0x6ca: Push(-2, 4); TaskCall(3)
0x6cb: Call2 0x6e2

0x6cc: Pop(-2, 4); TaskReturn
0x6cd: Pop(2)
0x6ce: @@ IsDialogEnd(Stack[-1])
0x6cf: Pop(0)
0x6d0: Pop(0); Push((bool) Stack[-1] == 0)
0x6d1: IF (Stack[-1] == 0) GOTO 0x6d7; Pop(1)

0x6d2: @ sync()
0x6d3: Pop(0)
0x6d4: @@ IsDialogEnd(Stack[-1])
0x6d5: Pop(0)
0x6d6: GOTO 0x6d0

0x6d7: PushEmpty(object)
0x6d8: Stack[-1] = Stack[-10]
0x6d9: Call2 0x12d8

0x6da: Pop(1)
0x6db: @ StopDialog(Stack[-4])
0x6dc: Pop(0)
0x6dd: @@ GetReturnValue(Stack[-2])
0x6de: Pop(0)
0x6df: Stack[-10] = Stack[-2]
0x6e0: Return(); Pop(8)

0x6e1: Stack[-4] = 0
0x6e2: PushEmpty()
0x6e3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x6e4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x6e5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6e6: Push((int) 1)
0x6e7: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x6e8: PushEmpty(bool, object)
0x6e9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6ea: Call2 0x1656

0x6eb: Pop(1)
0x6ec: IF (Stack[-1] == 0) GOTO 0x70b; Pop(1)

0x6ed: PushEmpty(object, object)
0x6ee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6ef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6f0: Call2 0x15bb

0x6f1: Pop(2)
0x6f2: PushEmpty(object, object)
0x6f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6f5: Call2 0x1504

0x6f6: Pop(2)
0x6f7: PushEmpty(string)
0x6f8: Stack[-1] = "Rage"
0x6f9: Call2 0x791

0x6fa: Pop(1)
0x6fb: Push((int) 511527)
0x6fc: @@ SetMessage(Stack[-1])
0x6fd: Pop(1)
0x6fe: @@ ClearReplies()
0x6ff: Pop(0)
0x700: Push((int) 511528)
0x701: Push((int) 12722)
0x702: Push((int) 12721)
0x703: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x704: Pop(3)
0x705: Push((int) 515598)
0x706: Push((int) 16625)
0x707: Push((int) 16624)
0x708: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x709: Pop(3)
0x70a: GOTO 0x773

0x70b: PushEmpty(bool)
0x70c: Stack[-1] = (bool) 0
0x70d: PushEmpty(bool)
0x70e: Stack[-1] = (bool) 0
0x70f: PushEmpty(bool, object)
0x710: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x711: Call2 0x166e

0x712: Pop(1)
0x713: IF (Stack[-1] == 0) GOTO 0x71a; Pop(1)

0x714: PushEmpty(bool, object)
0x715: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x716: Call2 0x1662

0x717: Pop(1)
0x718: IF (Stack[-1] == 0) GOTO 0x71a; Pop(1)

0x719: Stack[-1] = (bool) 1
0x71a: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x71b: PushEmpty(bool, object)
0x71c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x71d: Call2 0x167a

0x71e: Pop(1)
0x71f: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x720: Stack[-1] = (bool) 1
0x721: IF (Stack[-1] == 0) GOTO 0x73b; Pop(1)

0x722: PushEmpty(object, object)
0x723: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x724: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x725: Call2 0x152d

0x726: Pop(2)
0x727: PushEmpty(string)
0x728: Stack[-1] = "Neutral"
0x729: Call2 0x791

0x72a: Pop(1)
0x72b: Push((int) 510510)
0x72c: @@ SetMessage(Stack[-1])
0x72d: Pop(1)
0x72e: @@ ClearReplies()
0x72f: Pop(0)
0x730: Push((int) 510511)
0x731: Push((int) 11594)
0x732: Push((int) 11593)
0x733: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x734: Pop(3)
0x735: Push((int) 510521)
0x736: Push((int) 11594)
0x737: Push((int) 11604)
0x738: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x739: Pop(3)
0x73a: GOTO 0x773

0x73b: PushEmpty(string)
0x73c: Stack[-1] = "Neutral"
0x73d: Call2 0x791

0x73e: Pop(1)
0x73f: Push((int) 510500)
0x740: @@ SetMessage(Stack[-1])
0x741: Pop(1)
0x742: @@ ClearReplies()
0x743: Pop(0)
0x744: PushEmpty(bool, object)
0x745: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x746: Call2 0x16a9

0x747: Pop(1)
0x748: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x749: Push((int) 510509)
0x74a: Push((int) 16679)
0x74b: Push((int) 11591)
0x74c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74d: Pop(3)
0x74e: PushEmpty(bool)
0x74f: Stack[-1] = (bool) 0
0x750: PushEmpty(bool, object)
0x751: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x752: Call2 0x169d

0x753: Pop(1)
0x754: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x755: PushEmpty(bool, object)
0x756: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x757: Call2 0x16a9

0x758: Pop(1)
0x759: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x75a: Stack[-1] = (bool) 1
0x75b: IF (Stack[-1] == 0) GOTO 0x761; Pop(1)

0x75c: Push((int) 510501)
0x75d: Push((int) 11584)
0x75e: Push((int) 11583)
0x75f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x760: Pop(3)
0x761: PushEmpty(bool, object)
0x762: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x763: Call2 0x1691

0x764: Pop(1)
0x765: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x766: Push((int) 515653)
0x767: Push((int) 16690)
0x768: Push((int) 16689)
0x769: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76a: Pop(3)
0x76b: Push((int) 515647)
0x76c: Push((int) -1)
0x76d: Push((int) 16682)
0x76e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76f: Pop(3)
0x770: GOTO 0x773

0x771: Return(); Pop(0)

0x772: GOTO 0x6e6

0x773: PushEmpty(bool)
0x774: Call2 0x144e

0x775: Pop(0)
0x776: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x777: @ lshWaitForAnimEnd()
0x778: Pop(0)
0x779: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77a: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x77b: GOTO 0x781

0x77c: PushEmpty(string)
0x77d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x77e: Call2 0x1374

0x77f: Pop(1)
0x780: GOTO 0x777

0x781: GOTO 0x790

0x782: Push("all")
0x783: Push("idle")
0x784: @ PlayAnimation(Stack[-2], Stack[-1])
0x785: Pop(2)
0x786: @ WaitForAnimEnd()
0x787: Pop(0)
0x788: Push( Stack[3 + Tasks[-1].StackPointer] )
0x789: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x78a: GOTO 0x790

0x78b: Push("all")
0x78c: Push("idle")
0x78d: @ PlayAnimation(Stack[-2], Stack[-1])
0x78e: Pop(2)
0x78f: GOTO 0x786

0x790: Return(); Pop(0)

0x791: PushEmpty()
0x792: PushEmpty(bool)
0x793: Call2 0x144e

0x794: Pop(0)
0x795: Pop(1); Push((bool) Stack[-1] == 0)
0x796: IF (Stack[-1] == 0) GOTO 0x798; Pop(1)

0x797: Return(); Pop(0)

0x798: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x799: IF (Stack[-1] == 0) GOTO 0x79b; Pop(1)

0x79a: Return(); Pop(0)

0x79b: PushEmpty(string, bool)
0x79c: Stack[-2] = Stack[-3]
0x79d: Push("")
0x79e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x79f: IF (Stack[-1] == 0) GOTO 0x7a2; Pop(1)

0x7a0: Stack[-1] = (bool) 0
0x7a1: GOTO 0x7a3

0x7a2: Stack[-1] = (bool) 1
0x7a3: Call2 0x1384

0x7a4: Pop(2)
0x7a5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x7a6: Return(); Pop(0)

0x7a7: PushEmpty()
0x7a8: Push((int) 1)
0x7a9: IF (Stack[-1] == 0) GOTO 0xb54; Pop(1)

0x7aa: PushEmpty()
0x7ab: Call2 0x13a2

0x7ac: Pop(0)
0x7ad: Push((int) 11563)
0x7ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7af: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7b0: PushEmpty(object, object)
0x7b1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7b2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7b3: Call2 0x150a

0x7b4: Pop(2)
0x7b5: PushEmpty(object, object)
0x7b6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7b8: Call2 0x14e4

0x7b9: Pop(2)
0x7ba: Push((int) 11566)
0x7bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7bc: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7bd: PushEmpty(object, object)
0x7be: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7c0: Call2 0x150a

0x7c1: Pop(2)
0x7c2: PushEmpty(object, object)
0x7c3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7c4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7c5: Call2 0x14e4

0x7c6: Pop(2)
0x7c7: Push((int) 11569)
0x7c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c9: IF (Stack[-1] == 0) GOTO 0x7d9; Pop(1)

0x7ca: PushEmpty(object, object)
0x7cb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7cc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7cd: Call2 0x1504

0x7ce: Pop(2)
0x7cf: PushEmpty(object, object)
0x7d0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7d1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7d2: Call2 0x150a

0x7d3: Pop(2)
0x7d4: PushEmpty(object, object)
0x7d5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7d6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7d7: Call2 0x14e4

0x7d8: Pop(2)
0x7d9: Push((int) 11599)
0x7da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7db: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7dc: PushEmpty(object, object)
0x7dd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7de: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7df: Call2 0x1533

0x7e0: Pop(2)
0x7e1: Push((int) 11600)
0x7e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7e3: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x7e4: PushEmpty(object, object)
0x7e5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7e6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7e7: Call2 0x1533

0x7e8: Pop(2)
0x7e9: Push((int) 11601)
0x7ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7eb: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7ec: PushEmpty(object, object)
0x7ed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7ee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7ef: Call2 0x1533

0x7f0: Pop(2)
0x7f1: Push((int) 11583)
0x7f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7f3: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7f4: PushEmpty(object, object)
0x7f5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7f6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7f7: Call2 0x15c1

0x7f8: Pop(2)
0x7f9: Push((int) 11570)
0x7fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7fb: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x7fc: PushEmpty(object, object)
0x7fd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7fe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7ff: Call2 0x150a

0x800: Pop(2)
0x801: PushEmpty(object, object)
0x802: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x803: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x804: Call2 0x14e4

0x805: Pop(2)
0x806: Push((int) 12720)
0x807: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x808: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x809: PushEmpty(bool, object)
0x80a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80b: Call2 0x1656

0x80c: Pop(1)
0x80d: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x80e: PushEmpty(object, object)
0x80f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x810: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x811: Call2 0x15bb

0x812: Pop(2)
0x813: PushEmpty(object, object)
0x814: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x815: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x816: Call2 0x1504

0x817: Pop(2)
0x818: PushEmpty(string)
0x819: Stack[-1] = "Rage"
0x81a: Call2 0x791

0x81b: Pop(1)
0x81c: Push((int) 511527)
0x81d: @@ SetMessage(Stack[-1])
0x81e: Pop(1)
0x81f: @@ ClearReplies()
0x820: Pop(0)
0x821: Push((int) 511528)
0x822: Push((int) 12722)
0x823: Push((int) 12721)
0x824: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x825: Pop(3)
0x826: Push((int) 515598)
0x827: Push((int) 16625)
0x828: Push((int) 16624)
0x829: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82a: Pop(3)
0x82b: Return(); Pop(0)

0x82c: PushEmpty(bool)
0x82d: Stack[-1] = (bool) 0
0x82e: PushEmpty(bool)
0x82f: Stack[-1] = (bool) 0
0x830: PushEmpty(bool, object)
0x831: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x832: Call2 0x166e

0x833: Pop(1)
0x834: IF (Stack[-1] == 0) GOTO 0x83b; Pop(1)

0x835: PushEmpty(bool, object)
0x836: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x837: Call2 0x1662

0x838: Pop(1)
0x839: IF (Stack[-1] == 0) GOTO 0x83b; Pop(1)

0x83a: Stack[-1] = (bool) 1
0x83b: IF (Stack[-1] == 0) GOTO 0x842; Pop(1)

0x83c: PushEmpty(bool, object)
0x83d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x83e: Call2 0x167a

0x83f: Pop(1)
0x840: IF (Stack[-1] == 0) GOTO 0x842; Pop(1)

0x841: Stack[-1] = (bool) 1
0x842: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x843: PushEmpty(object, object)
0x844: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x845: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x846: Call2 0x152d

0x847: Pop(2)
0x848: PushEmpty(string)
0x849: Stack[-1] = "Neutral"
0x84a: Call2 0x791

0x84b: Pop(1)
0x84c: Push((int) 510510)
0x84d: @@ SetMessage(Stack[-1])
0x84e: Pop(1)
0x84f: @@ ClearReplies()
0x850: Pop(0)
0x851: Push((int) 510511)
0x852: Push((int) 11594)
0x853: Push((int) 11593)
0x854: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x855: Pop(3)
0x856: Push((int) 510521)
0x857: Push((int) 11594)
0x858: Push((int) 11604)
0x859: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85a: Pop(3)
0x85b: Return(); Pop(0)

0x85c: PushEmpty(string)
0x85d: Stack[-1] = "Neutral"
0x85e: Call2 0x791

0x85f: Pop(1)
0x860: Push((int) 510500)
0x861: @@ SetMessage(Stack[-1])
0x862: Pop(1)
0x863: @@ ClearReplies()
0x864: Pop(0)
0x865: PushEmpty(bool, object)
0x866: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x867: Call2 0x16a9

0x868: Pop(1)
0x869: IF (Stack[-1] == 0) GOTO 0x86f; Pop(1)

0x86a: Push((int) 510509)
0x86b: Push((int) 16679)
0x86c: Push((int) 11591)
0x86d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86e: Pop(3)
0x86f: PushEmpty(bool)
0x870: Stack[-1] = (bool) 0
0x871: PushEmpty(bool, object)
0x872: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x873: Call2 0x169d

0x874: Pop(1)
0x875: IF (Stack[-1] == 0) GOTO 0x87c; Pop(1)

0x876: PushEmpty(bool, object)
0x877: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x878: Call2 0x16a9

0x879: Pop(1)
0x87a: IF (Stack[-1] == 0) GOTO 0x87c; Pop(1)

0x87b: Stack[-1] = (bool) 1
0x87c: IF (Stack[-1] == 0) GOTO 0x882; Pop(1)

0x87d: Push((int) 510501)
0x87e: Push((int) 11584)
0x87f: Push((int) 11583)
0x880: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x881: Pop(3)
0x882: PushEmpty(bool, object)
0x883: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x884: Call2 0x1691

0x885: Pop(1)
0x886: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x887: Push((int) 515653)
0x888: Push((int) 16690)
0x889: Push((int) 16689)
0x88a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88b: Pop(3)
0x88c: Push((int) 515647)
0x88d: Push((int) -1)
0x88e: Push((int) 16682)
0x88f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x890: Pop(3)
0x891: Return(); Pop(0)

0x892: Push((int) 16690)
0x893: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x894: IF (Stack[-1] == 0) GOTO 0x8a4; Pop(1)

0x895: PushEmpty(string)
0x896: Stack[-1] = "Neutral"
0x897: Call2 0x791

0x898: Pop(1)
0x899: Push((int) 515654)
0x89a: @@ SetMessage(Stack[-1])
0x89b: Pop(1)
0x89c: @@ ClearReplies()
0x89d: Pop(0)
0x89e: Push((int) 510492)
0x89f: Push((int) -1)
0x8a0: Push((int) 11570)
0x8a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a2: Pop(3)
0x8a3: Return(); Pop(0)

0x8a4: Push((int) 11584)
0x8a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a6: IF (Stack[-1] == 0) GOTO 0x8bb; Pop(1)

0x8a7: PushEmpty(string)
0x8a8: Stack[-1] = "Neutral"
0x8a9: Call2 0x791

0x8aa: Pop(1)
0x8ab: Push((int) 510502)
0x8ac: @@ SetMessage(Stack[-1])
0x8ad: Pop(1)
0x8ae: @@ ClearReplies()
0x8af: Pop(0)
0x8b0: Push((int) 510504)
0x8b1: Push((int) -1)
0x8b2: Push((int) 11586)
0x8b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b4: Pop(3)
0x8b5: Push((int) 510505)
0x8b6: Push((int) 11588)
0x8b7: Push((int) 11587)
0x8b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b9: Pop(3)
0x8ba: Return(); Pop(0)

0x8bb: Push((int) 11588)
0x8bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8bd: IF (Stack[-1] == 0) GOTO 0x8d2; Pop(1)

0x8be: PushEmpty(string)
0x8bf: Stack[-1] = "Neutral"
0x8c0: Call2 0x791

0x8c1: Pop(1)
0x8c2: Push((int) 510506)
0x8c3: @@ SetMessage(Stack[-1])
0x8c4: Pop(1)
0x8c5: @@ ClearReplies()
0x8c6: Pop(0)
0x8c7: Push((int) 510508)
0x8c8: Push((int) -1)
0x8c9: Push((int) 11590)
0x8ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cb: Pop(3)
0x8cc: Push((int) 510507)
0x8cd: Push((int) -1)
0x8ce: Push((int) 11589)
0x8cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d0: Pop(3)
0x8d1: Return(); Pop(0)

0x8d2: Push((int) 16679)
0x8d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d4: IF (Stack[-1] == 0) GOTO 0x8e4; Pop(1)

0x8d5: PushEmpty(string)
0x8d6: Stack[-1] = "Rage"
0x8d7: Call2 0x791

0x8d8: Pop(1)
0x8d9: Push((int) 515644)
0x8da: @@ SetMessage(Stack[-1])
0x8db: Pop(1)
0x8dc: @@ ClearReplies()
0x8dd: Pop(0)
0x8de: Push((int) 515645)
0x8df: Push((int) -1)
0x8e0: Push((int) 16680)
0x8e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e2: Pop(3)
0x8e3: Return(); Pop(0)

0x8e4: Push((int) 11594)
0x8e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e6: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8e7: PushEmpty(string)
0x8e8: Stack[-1] = "Neutral"
0x8e9: Call2 0x791

0x8ea: Pop(1)
0x8eb: Push((int) 510512)
0x8ec: @@ SetMessage(Stack[-1])
0x8ed: Pop(1)
0x8ee: @@ ClearReplies()
0x8ef: Pop(0)
0x8f0: Push((int) 510513)
0x8f1: Push((int) 11596)
0x8f2: Push((int) 11595)
0x8f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f4: Pop(3)
0x8f5: Push((int) 510520)
0x8f6: Push((int) 11598)
0x8f7: Push((int) 11602)
0x8f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f9: Pop(3)
0x8fa: Return(); Pop(0)

0x8fb: Push((int) 11596)
0x8fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8fd: IF (Stack[-1] == 0) GOTO 0x912; Pop(1)

0x8fe: PushEmpty(string)
0x8ff: Stack[-1] = "Neutral"
0x900: Call2 0x791

0x901: Pop(1)
0x902: Push((int) 510514)
0x903: @@ SetMessage(Stack[-1])
0x904: Pop(1)
0x905: @@ ClearReplies()
0x906: Pop(0)
0x907: Push((int) 510515)
0x908: Push((int) 11598)
0x909: Push((int) 11597)
0x90a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90b: Pop(3)
0x90c: Push((int) 515650)
0x90d: Push((int) 11598)
0x90e: Push((int) 16685)
0x90f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x910: Pop(3)
0x911: Return(); Pop(0)

0x912: Push((int) 11598)
0x913: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x914: IF (Stack[-1] == 0) GOTO 0x929; Pop(1)

0x915: PushEmpty(string)
0x916: Stack[-1] = "Neutral"
0x917: Call2 0x791

0x918: Pop(1)
0x919: Push((int) 510516)
0x91a: @@ SetMessage(Stack[-1])
0x91b: Pop(1)
0x91c: @@ ClearReplies()
0x91d: Pop(0)
0x91e: Push((int) 511550)
0x91f: Push((int) 12745)
0x920: Push((int) 12744)
0x921: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x922: Pop(3)
0x923: Push((int) 510519)
0x924: Push((int) -1)
0x925: Push((int) 11601)
0x926: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x927: Pop(3)
0x928: Return(); Pop(0)

0x929: Push((int) 12745)
0x92a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x92b: IF (Stack[-1] == 0) GOTO 0x93b; Pop(1)

0x92c: PushEmpty(string)
0x92d: Stack[-1] = "Neutral"
0x92e: Call2 0x791

0x92f: Pop(1)
0x930: Push((int) 511551)
0x931: @@ SetMessage(Stack[-1])
0x932: Pop(1)
0x933: @@ ClearReplies()
0x934: Pop(0)
0x935: Push((int) 511552)
0x936: Push((int) 12747)
0x937: Push((int) 12746)
0x938: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x939: Pop(3)
0x93a: Return(); Pop(0)

0x93b: Push((int) 12747)
0x93c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93d: IF (Stack[-1] == 0) GOTO 0x952; Pop(1)

0x93e: PushEmpty(string)
0x93f: Stack[-1] = "Neutral"
0x940: Call2 0x791

0x941: Pop(1)
0x942: Push((int) 511553)
0x943: @@ SetMessage(Stack[-1])
0x944: Pop(1)
0x945: @@ ClearReplies()
0x946: Pop(0)
0x947: Push((int) 511554)
0x948: Push((int) 12749)
0x949: Push((int) 12748)
0x94a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94b: Pop(3)
0x94c: Push((int) 510518)
0x94d: Push((int) -1)
0x94e: Push((int) 11600)
0x94f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x950: Pop(3)
0x951: Return(); Pop(0)

0x952: Push((int) 12749)
0x953: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x954: IF (Stack[-1] == 0) GOTO 0x964; Pop(1)

0x955: PushEmpty(string)
0x956: Stack[-1] = "Neutral"
0x957: Call2 0x791

0x958: Pop(1)
0x959: Push((int) 511555)
0x95a: @@ SetMessage(Stack[-1])
0x95b: Pop(1)
0x95c: @@ ClearReplies()
0x95d: Pop(0)
0x95e: Push((int) 510517)
0x95f: Push((int) -1)
0x960: Push((int) 11599)
0x961: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x962: Pop(3)
0x963: Return(); Pop(0)

0x964: Push((int) 16625)
0x965: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x966: IF (Stack[-1] == 0) GOTO 0x976; Pop(1)

0x967: PushEmpty(string)
0x968: Stack[-1] = "Confusion"
0x969: Call2 0x791

0x96a: Pop(1)
0x96b: Push((int) 515599)
0x96c: @@ SetMessage(Stack[-1])
0x96d: Pop(1)
0x96e: @@ ClearReplies()
0x96f: Pop(0)
0x970: Push((int) 515600)
0x971: Push((int) 16627)
0x972: Push((int) 16626)
0x973: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x974: Pop(3)
0x975: Return(); Pop(0)

0x976: Push((int) 16627)
0x977: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x978: IF (Stack[-1] == 0) GOTO 0x988; Pop(1)

0x979: PushEmpty(string)
0x97a: Stack[-1] = "Confusion"
0x97b: Call2 0x791

0x97c: Pop(1)
0x97d: Push((int) 515601)
0x97e: @@ SetMessage(Stack[-1])
0x97f: Pop(1)
0x980: @@ ClearReplies()
0x981: Pop(0)
0x982: Push((int) 515602)
0x983: Push((int) 12722)
0x984: Push((int) 16628)
0x985: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x986: Pop(3)
0x987: Return(); Pop(0)

0x988: Push((int) 12722)
0x989: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x98a: IF (Stack[-1] == 0) GOTO 0x99f; Pop(1)

0x98b: PushEmpty(string)
0x98c: Stack[-1] = "Rage"
0x98d: Call2 0x791

0x98e: Pop(1)
0x98f: Push((int) 511529)
0x990: @@ SetMessage(Stack[-1])
0x991: Pop(1)
0x992: @@ ClearReplies()
0x993: Pop(0)
0x994: Push((int) 511530)
0x995: Push((int) 11554)
0x996: Push((int) 12723)
0x997: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x998: Pop(3)
0x999: Push((int) 515603)
0x99a: Push((int) 16631)
0x99b: Push((int) 16630)
0x99c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99d: Pop(3)
0x99e: Return(); Pop(0)

0x99f: Push((int) 16631)
0x9a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9a1: IF (Stack[-1] == 0) GOTO 0x9b1; Pop(1)

0x9a2: PushEmpty(string)
0x9a3: Stack[-1] = "Confusion"
0x9a4: Call2 0x791

0x9a5: Pop(1)
0x9a6: Push((int) 515604)
0x9a7: @@ SetMessage(Stack[-1])
0x9a8: Pop(1)
0x9a9: @@ ClearReplies()
0x9aa: Pop(0)
0x9ab: Push((int) 515605)
0x9ac: Push((int) 16633)
0x9ad: Push((int) 16632)
0x9ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9af: Pop(3)
0x9b0: Return(); Pop(0)

0x9b1: Push((int) 16633)
0x9b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b3: IF (Stack[-1] == 0) GOTO 0x9c8; Pop(1)

0x9b4: PushEmpty(string)
0x9b5: Stack[-1] = "Warning"
0x9b6: Call2 0x791

0x9b7: Pop(1)
0x9b8: Push((int) 515606)
0x9b9: @@ SetMessage(Stack[-1])
0x9ba: Pop(1)
0x9bb: @@ ClearReplies()
0x9bc: Pop(0)
0x9bd: Push((int) 515607)
0x9be: Push((int) 11554)
0x9bf: Push((int) 16634)
0x9c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c1: Pop(3)
0x9c2: Push((int) 515608)
0x9c3: Push((int) 11554)
0x9c4: Push((int) 16636)
0x9c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c6: Pop(3)
0x9c7: Return(); Pop(0)

0x9c8: Push((int) 11554)
0x9c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ca: IF (Stack[-1] == 0) GOTO 0x9da; Pop(1)

0x9cb: PushEmpty(string)
0x9cc: Stack[-1] = "Warning"
0x9cd: Call2 0x791

0x9ce: Pop(1)
0x9cf: Push((int) 510476)
0x9d0: @@ SetMessage(Stack[-1])
0x9d1: Pop(1)
0x9d2: @@ ClearReplies()
0x9d3: Pop(0)
0x9d4: Push((int) 510477)
0x9d5: Push((int) 11556)
0x9d6: Push((int) 11555)
0x9d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d8: Pop(3)
0x9d9: Return(); Pop(0)

0x9da: Push((int) 11556)
0x9db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9dc: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9dd: PushEmpty(string)
0x9de: Stack[-1] = "Warning"
0x9df: Call2 0x791

0x9e0: Pop(1)
0x9e1: Push((int) 510478)
0x9e2: @@ SetMessage(Stack[-1])
0x9e3: Pop(1)
0x9e4: @@ ClearReplies()
0x9e5: Pop(0)
0x9e6: Push((int) 510479)
0x9e7: Push((int) 11558)
0x9e8: Push((int) 11557)
0x9e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ea: Pop(3)
0x9eb: Push((int) 515610)
0x9ec: Push((int) 16640)
0x9ed: Push((int) 16639)
0x9ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ef: Pop(3)
0x9f0: Return(); Pop(0)

0x9f1: Push((int) 16640)
0x9f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f3: IF (Stack[-1] == 0) GOTO 0xa08; Pop(1)

0x9f4: PushEmpty(string)
0x9f5: Stack[-1] = "Rage"
0x9f6: Call2 0x791

0x9f7: Pop(1)
0x9f8: Push((int) 515611)
0x9f9: @@ SetMessage(Stack[-1])
0x9fa: Pop(1)
0x9fb: @@ ClearReplies()
0x9fc: Pop(0)
0x9fd: Push((int) 515614)
0x9fe: Push((int) 16644)
0x9ff: Push((int) 16643)
0xa00: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa01: Pop(3)
0xa02: Push((int) 515612)
0xa03: Push((int) 16642)
0xa04: Push((int) 16641)
0xa05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa06: Pop(3)
0xa07: Return(); Pop(0)

0xa08: Push((int) 16642)
0xa09: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa0a: IF (Stack[-1] == 0) GOTO 0xa1a; Pop(1)

0xa0b: PushEmpty(string)
0xa0c: Stack[-1] = "Neutral"
0xa0d: Call2 0x791

0xa0e: Pop(1)
0xa0f: Push((int) 515613)
0xa10: @@ SetMessage(Stack[-1])
0xa11: Pop(1)
0xa12: @@ ClearReplies()
0xa13: Pop(0)
0xa14: Push((int) 515616)
0xa15: Push((int) 16644)
0xa16: Push((int) 16645)
0xa17: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa18: Pop(3)
0xa19: Return(); Pop(0)

0xa1a: Push((int) 16644)
0xa1b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa1c: IF (Stack[-1] == 0) GOTO 0xa31; Pop(1)

0xa1d: PushEmpty(string)
0xa1e: Stack[-1] = "Warning"
0xa1f: Call2 0x791

0xa20: Pop(1)
0xa21: Push((int) 515615)
0xa22: @@ SetMessage(Stack[-1])
0xa23: Pop(1)
0xa24: @@ ClearReplies()
0xa25: Pop(0)
0xa26: Push((int) 515618)
0xa27: Push((int) 11558)
0xa28: Push((int) 16648)
0xa29: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2a: Pop(3)
0xa2b: Push((int) 515617)
0xa2c: Push((int) -1)
0xa2d: Push((int) 16647)
0xa2e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2f: Pop(3)
0xa30: Return(); Pop(0)

0xa31: Push((int) 11558)
0xa32: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa33: IF (Stack[-1] == 0) GOTO 0xa48; Pop(1)

0xa34: PushEmpty(string)
0xa35: Stack[-1] = "Confusion"
0xa36: Call2 0x791

0xa37: Pop(1)
0xa38: Push((int) 510480)
0xa39: @@ SetMessage(Stack[-1])
0xa3a: Pop(1)
0xa3b: @@ ClearReplies()
0xa3c: Pop(0)
0xa3d: Push((int) 515623)
0xa3e: Push((int) 16655)
0xa3f: Push((int) 16654)
0xa40: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa41: Pop(3)
0xa42: Push((int) 515628)
0xa43: Push((int) 16661)
0xa44: Push((int) 16660)
0xa45: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa46: Pop(3)
0xa47: Return(); Pop(0)

0xa48: Push((int) 16661)
0xa49: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa4a: IF (Stack[-1] == 0) GOTO 0xa5a; Pop(1)

0xa4b: PushEmpty(string)
0xa4c: Stack[-1] = "Confusion"
0xa4d: Call2 0x791

0xa4e: Pop(1)
0xa4f: Push((int) 515629)
0xa50: @@ SetMessage(Stack[-1])
0xa51: Pop(1)
0xa52: @@ ClearReplies()
0xa53: Pop(0)
0xa54: Push((int) 515630)
0xa55: Push((int) 16655)
0xa56: Push((int) 16662)
0xa57: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa58: Pop(3)
0xa59: Return(); Pop(0)

0xa5a: Push((int) 16655)
0xa5b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa5c: IF (Stack[-1] == 0) GOTO 0xa71; Pop(1)

0xa5d: PushEmpty(string)
0xa5e: Stack[-1] = "Confusion"
0xa5f: Call2 0x791

0xa60: Pop(1)
0xa61: Push((int) 515624)
0xa62: @@ SetMessage(Stack[-1])
0xa63: Pop(1)
0xa64: @@ ClearReplies()
0xa65: Pop(0)
0xa66: Push((int) 510481)
0xa67: Push((int) 11560)
0xa68: Push((int) 11559)
0xa69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6a: Pop(3)
0xa6b: Push((int) 515626)
0xa6c: Push((int) 16665)
0xa6d: Push((int) 16657)
0xa6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6f: Pop(3)
0xa70: Return(); Pop(0)

0xa71: Push((int) 16665)
0xa72: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa73: IF (Stack[-1] == 0) GOTO 0xa83; Pop(1)

0xa74: PushEmpty(string)
0xa75: Stack[-1] = "Rage"
0xa76: Call2 0x791

0xa77: Pop(1)
0xa78: Push((int) 515632)
0xa79: @@ SetMessage(Stack[-1])
0xa7a: Pop(1)
0xa7b: @@ ClearReplies()
0xa7c: Pop(0)
0xa7d: Push((int) 515633)
0xa7e: Push((int) 11560)
0xa7f: Push((int) 16666)
0xa80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa81: Pop(3)
0xa82: Return(); Pop(0)

0xa83: Push((int) 11560)
0xa84: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa85: IF (Stack[-1] == 0) GOTO 0xa9f; Pop(1)

0xa86: PushEmpty(string)
0xa87: Stack[-1] = "Confusion"
0xa88: Call2 0x791

0xa89: Pop(1)
0xa8a: Push((int) 510482)
0xa8b: @@ SetMessage(Stack[-1])
0xa8c: Pop(1)
0xa8d: @@ ClearReplies()
0xa8e: Pop(0)
0xa8f: Push((int) 510483)
0xa90: Push((int) 11562)
0xa91: Push((int) 11561)
0xa92: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa93: Pop(3)
0xa94: Push((int) 510494)
0xa95: Push((int) 16650)
0xa96: Push((int) 11572)
0xa97: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa98: Pop(3)
0xa99: Push((int) 515627)
0xa9a: Push((int) 16650)
0xa9b: Push((int) 16658)
0xa9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9d: Pop(3)
0xa9e: Return(); Pop(0)

0xa9f: Push((int) 16650)
0xaa0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa1: IF (Stack[-1] == 0) GOTO 0xab1; Pop(1)

0xaa2: PushEmpty(string)
0xaa3: Stack[-1] = "Warning"
0xaa4: Call2 0x791

0xaa5: Pop(1)
0xaa6: Push((int) 515619)
0xaa7: @@ SetMessage(Stack[-1])
0xaa8: Pop(1)
0xaa9: @@ ClearReplies()
0xaaa: Pop(0)
0xaab: Push((int) 515620)
0xaac: Push((int) 16652)
0xaad: Push((int) 16651)
0xaae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaaf: Pop(3)
0xab0: Return(); Pop(0)

0xab1: Push((int) 16652)
0xab2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xab3: IF (Stack[-1] == 0) GOTO 0xac3; Pop(1)

0xab4: PushEmpty(string)
0xab5: Stack[-1] = "Warning"
0xab6: Call2 0x791

0xab7: Pop(1)
0xab8: Push((int) 515621)
0xab9: @@ SetMessage(Stack[-1])
0xaba: Pop(1)
0xabb: @@ ClearReplies()
0xabc: Pop(0)
0xabd: Push((int) 510489)
0xabe: Push((int) 11568)
0xabf: Push((int) 11567)
0xac0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac1: Pop(3)
0xac2: Return(); Pop(0)

0xac3: Push((int) 11568)
0xac4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac5: IF (Stack[-1] == 0) GOTO 0xada; Pop(1)

0xac6: PushEmpty(string)
0xac7: Stack[-1] = "Confusion"
0xac8: Call2 0x791

0xac9: Pop(1)
0xaca: Push((int) 510490)
0xacb: @@ SetMessage(Stack[-1])
0xacc: Pop(1)
0xacd: @@ ClearReplies()
0xace: Pop(0)
0xacf: Push((int) 510491)
0xad0: Push((int) -1)
0xad1: Push((int) 11569)
0xad2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad3: Pop(3)
0xad4: Push((int) 515655)
0xad5: Push((int) -1)
0xad6: Push((int) 16691)
0xad7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad8: Pop(3)
0xad9: Return(); Pop(0)

0xada: Push((int) 11562)
0xadb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xadc: IF (Stack[-1] == 0) GOTO 0xaf6; Pop(1)

0xadd: PushEmpty(string)
0xade: Stack[-1] = "Neutral"
0xadf: Call2 0x791

0xae0: Pop(1)
0xae1: Push((int) 510484)
0xae2: @@ SetMessage(Stack[-1])
0xae3: Pop(1)
0xae4: @@ ClearReplies()
0xae5: Pop(0)
0xae6: Push((int) 515635)
0xae7: Push((int) 16670)
0xae8: Push((int) 16669)
0xae9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaea: Pop(3)
0xaeb: Push((int) 515641)
0xaec: Push((int) 16676)
0xaed: Push((int) 16675)
0xaee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaef: Pop(3)
0xaf0: Push((int) 510486)
0xaf1: Push((int) 11565)
0xaf2: Push((int) 11564)
0xaf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf4: Pop(3)
0xaf5: Return(); Pop(0)

0xaf6: Push((int) 11565)
0xaf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf8: IF (Stack[-1] == 0) GOTO 0xb0d; Pop(1)

0xaf9: PushEmpty(string)
0xafa: Stack[-1] = "Rage"
0xafb: Call2 0x791

0xafc: Pop(1)
0xafd: Push((int) 510487)
0xafe: @@ SetMessage(Stack[-1])
0xaff: Pop(1)
0xb00: @@ ClearReplies()
0xb01: Pop(0)
0xb02: Push((int) 510488)
0xb03: Push((int) -1)
0xb04: Push((int) 11566)
0xb05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb06: Pop(3)
0xb07: Push((int) 515643)
0xb08: Push((int) -1)
0xb09: Push((int) 16678)
0xb0a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0b: Pop(3)
0xb0c: Return(); Pop(0)

0xb0d: Push((int) 16676)
0xb0e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb0f: IF (Stack[-1] == 0) GOTO 0xb1f; Pop(1)

0xb10: PushEmpty(string)
0xb11: Stack[-1] = "Rage"
0xb12: Call2 0x791

0xb13: Pop(1)
0xb14: Push((int) 515642)
0xb15: @@ SetMessage(Stack[-1])
0xb16: Pop(1)
0xb17: @@ ClearReplies()
0xb18: Pop(0)
0xb19: Push((int) 515637)
0xb1a: Push((int) 16672)
0xb1b: Push((int) 16671)
0xb1c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1d: Pop(3)
0xb1e: Return(); Pop(0)

0xb1f: Push((int) 16672)
0xb20: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb21: IF (Stack[-1] == 0) GOTO 0xb36; Pop(1)

0xb22: PushEmpty(string)
0xb23: Stack[-1] = "Warning"
0xb24: Call2 0x791

0xb25: Pop(1)
0xb26: Push((int) 515638)
0xb27: @@ SetMessage(Stack[-1])
0xb28: Pop(1)
0xb29: @@ ClearReplies()
0xb2a: Pop(0)
0xb2b: Push((int) 515640)
0xb2c: Push((int) 16670)
0xb2d: Push((int) 16674)
0xb2e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2f: Pop(3)
0xb30: Push((int) 515639)
0xb31: Push((int) -1)
0xb32: Push((int) 16673)
0xb33: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb34: Pop(3)
0xb35: Return(); Pop(0)

0xb36: Push((int) 16670)
0xb37: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb38: IF (Stack[-1] == 0) GOTO 0xb48; Pop(1)

0xb39: PushEmpty(string)
0xb3a: Stack[-1] = "Neutral"
0xb3b: Call2 0x791

0xb3c: Pop(1)
0xb3d: Push((int) 515636)
0xb3e: @@ SetMessage(Stack[-1])
0xb3f: Pop(1)
0xb40: @@ ClearReplies()
0xb41: Pop(0)
0xb42: Push((int) 510485)
0xb43: Push((int) -1)
0xb44: Push((int) 11563)
0xb45: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb46: Pop(3)
0xb47: Return(); Pop(0)

0xb48: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb49: PushEmpty(bool)
0xb4a: Call2 0x144e

0xb4b: Pop(0)
0xb4c: IF (Stack[-1] == 0) GOTO 0xb50; Pop(1)

0xb4d: @ lshStopAnimation()
0xb4e: Pop(0)
0xb4f: GOTO 0xb52

0xb50: @ StopAnimation()
0xb51: Pop(0)
0xb52: Return(); Pop(0)

0xb53: GOTO 0x7a8

0xb54: Return(); Pop(0)

0xb55: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xb56: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xb57: PushEmpty(bool, object, float)
0xb58: Stack[-2] = Stack[-12]
0xb59: Stack[-1] = (float) 70.0
0xb5a: Call2 0x1293

0xb5b: Pop(2)
0xb5c: Pop(1); Push((bool) Stack[-1] == 0)
0xb5d: IF (Stack[-1] == 0) GOTO 0xb60; Pop(1)

0xb5e: Stack[-10] = (int) -2
0xb5f: Return(); Pop(8)

0xb60: @ CreateDialog(Stack[-4])
0xb61: Pop(0)
0xb62: PushEmpty(int)
0xb63: Call2 0x1448

0xb64: Pop(0)
0xb65: @@ SetNPCName(Stack[-1])
0xb66: Pop(1)
0xb67: PushEmpty(int)
0xb68: Call2 0x1446

0xb69: Pop(0)
0xb6a: @@ SetNPCDescription(Stack[-1])
0xb6b: Pop(1)
0xb6c: PushEmpty(string)
0xb6d: Call2 0x144a

0xb6e: Pop(0)
0xb6f: @@ SetPhoto(Stack[-1])
0xb70: Pop(1)
0xb71: PushEmpty(string)
0xb72: Call2 0x144c

0xb73: Pop(0)
0xb74: @@ SetPhoto2(Stack[-1])
0xb75: Pop(1)
0xb76: PushEmpty(int)
0xb77: Call2 0x1781

0xb78: Pop(0)
0xb79: @@ SetPlayerName(Stack[-1])
0xb7a: Pop(1)
0xb7b: Stack[-2] = (int) -1
0xb7c: @ IsOverrideActive(Stack[-3])
0xb7d: Pop(0)
0xb7e: Push(Stack[-3])
0xb7f: IF (Stack[-1] == 0) GOTO 0xb82; Pop(1)

0xb80: Stack[-10] = (int) -2
0xb81: Return(); Pop(8)

0xb82: @ DoDialog(Stack[-4])
0xb83: Pop(0)
0xb84: PushEmpty(bool, object)
0xb85: PushEmpty(object)
0xb86: Call2 0x13a9

0xb87: Stack[-2] = Stack[-1]
0xb88: Pop(1)
0xb89: Call2 0x12ea

0xb8a: Pop(2)
0xb8b: PushEmpty(object, object)
0xb8c: Stack[-2] = Stack[-11]
0xb8d: Stack[-1] = Stack[-6]
0xb8e: Push(-2, 4); TaskCall(5)
0xb8f: Call2 0xba6

0xb90: Pop(-2, 4); TaskReturn
0xb91: Pop(2)
0xb92: @@ IsDialogEnd(Stack[-1])
0xb93: Pop(0)
0xb94: Pop(0); Push((bool) Stack[-1] == 0)
0xb95: IF (Stack[-1] == 0) GOTO 0xb9b; Pop(1)

0xb96: @ sync()
0xb97: Pop(0)
0xb98: @@ IsDialogEnd(Stack[-1])
0xb99: Pop(0)
0xb9a: GOTO 0xb94

0xb9b: PushEmpty(object)
0xb9c: Stack[-1] = Stack[-10]
0xb9d: Call2 0x12d8

0xb9e: Pop(1)
0xb9f: @ StopDialog(Stack[-4])
0xba0: Pop(0)
0xba1: @@ GetReturnValue(Stack[-2])
0xba2: Pop(0)
0xba3: Stack[-10] = Stack[-2]
0xba4: Return(); Pop(8)

0xba5: Stack[-4] = 0
0xba6: PushEmpty()
0xba7: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xba8: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xba9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xbaa: Push((int) 1)
0xbab: IF (Stack[-1] == 0) GOTO 0xbd6; Pop(1)

0xbac: PushEmpty(string)
0xbad: Stack[-1] = "Neutral"
0xbae: Call2 0xbf4

0xbaf: Pop(1)
0xbb0: Push((int) 511122)
0xbb1: @@ SetMessage(Stack[-1])
0xbb2: Pop(1)
0xbb3: @@ ClearReplies()
0xbb4: Pop(0)
0xbb5: PushEmpty(bool, object)
0xbb6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb7: Call2 0x15df

0xbb8: Pop(1)
0xbb9: IF (Stack[-1] == 0) GOTO 0xbbf; Pop(1)

0xbba: Push((int) 511123)
0xbbb: Push((int) 12316)
0xbbc: Push((int) 12312)
0xbbd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbbe: Pop(3)
0xbbf: PushEmpty(bool, object)
0xbc0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbc1: Call2 0x15eb

0xbc2: Pop(1)
0xbc3: IF (Stack[-1] == 0) GOTO 0xbc9; Pop(1)

0xbc4: Push((int) 511124)
0xbc5: Push((int) 12314)
0xbc6: Push((int) 12313)
0xbc7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc8: Pop(3)
0xbc9: Push((int) 536267)
0xbca: Push((int) -1)
0xbcb: Push((int) 38051)
0xbcc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbcd: Pop(3)
0xbce: Push((int) 536268)
0xbcf: Push((int) -1)
0xbd0: Push((int) 38052)
0xbd1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd2: Pop(3)
0xbd3: GOTO 0xbd6

0xbd4: Return(); Pop(0)

0xbd5: GOTO 0xbaa

0xbd6: PushEmpty(bool)
0xbd7: Call2 0x144e

0xbd8: Pop(0)
0xbd9: IF (Stack[-1] == 0) GOTO 0xbe5; Pop(1)

0xbda: @ lshWaitForAnimEnd()
0xbdb: Pop(0)
0xbdc: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbdd: IF (Stack[-1] == 0) GOTO 0xbdf; Pop(1)

0xbde: GOTO 0xbe4

0xbdf: PushEmpty(string)
0xbe0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbe1: Call2 0x1374

0xbe2: Pop(1)
0xbe3: GOTO 0xbda

0xbe4: GOTO 0xbf3

0xbe5: Push("all")
0xbe6: Push("idle")
0xbe7: @ PlayAnimation(Stack[-2], Stack[-1])
0xbe8: Pop(2)
0xbe9: @ WaitForAnimEnd()
0xbea: Pop(0)
0xbeb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbec: IF (Stack[-1] == 0) GOTO 0xbee; Pop(1)

0xbed: GOTO 0xbf3

0xbee: Push("all")
0xbef: Push("idle")
0xbf0: @ PlayAnimation(Stack[-2], Stack[-1])
0xbf1: Pop(2)
0xbf2: GOTO 0xbe9

0xbf3: Return(); Pop(0)

0xbf4: PushEmpty()
0xbf5: PushEmpty(bool)
0xbf6: Call2 0x144e

0xbf7: Pop(0)
0xbf8: Pop(1); Push((bool) Stack[-1] == 0)
0xbf9: IF (Stack[-1] == 0) GOTO 0xbfb; Pop(1)

0xbfa: Return(); Pop(0)

0xbfb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbfc: IF (Stack[-1] == 0) GOTO 0xbfe; Pop(1)

0xbfd: Return(); Pop(0)

0xbfe: PushEmpty(string, bool)
0xbff: Stack[-2] = Stack[-3]
0xc00: Push("")
0xc01: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc02: IF (Stack[-1] == 0) GOTO 0xc05; Pop(1)

0xc03: Stack[-1] = (bool) 0
0xc04: GOTO 0xc06

0xc05: Stack[-1] = (bool) 1
0xc06: Call2 0x1384

0xc07: Pop(2)
0xc08: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc09: Return(); Pop(0)

0xc0a: PushEmpty()
0xc0b: Push((int) 1)
0xc0c: IF (Stack[-1] == 0) GOTO 0xcb1; Pop(1)

0xc0d: PushEmpty()
0xc0e: Call2 0x13a2

0xc0f: Pop(0)
0xc10: Push((int) 12312)
0xc11: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc12: IF (Stack[-1] == 0) GOTO 0xc18; Pop(1)

0xc13: PushEmpty(object, object)
0xc14: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc15: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc16: Call2 0x147f

0xc17: Pop(2)
0xc18: Push((int) 12313)
0xc19: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc1a: IF (Stack[-1] == 0) GOTO 0xc20; Pop(1)

0xc1b: PushEmpty(object, object)
0xc1c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc1e: Call2 0x1485

0xc1f: Pop(2)
0xc20: Push((int) 12315)
0xc21: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc22: IF (Stack[-1] == 0) GOTO 0xc2d; Pop(1)

0xc23: PushEmpty(object, object)
0xc24: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc25: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc26: Call2 0x1474

0xc27: Pop(2)
0xc28: PushEmpty(object, object)
0xc29: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc2a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2b: Call2 0x149c

0xc2c: Pop(2)
0xc2d: Push((int) 12311)
0xc2e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc2f: IF (Stack[-1] == 0) GOTO 0xc58; Pop(1)

0xc30: PushEmpty(string)
0xc31: Stack[-1] = "Neutral"
0xc32: Call2 0xbf4

0xc33: Pop(1)
0xc34: Push((int) 511122)
0xc35: @@ SetMessage(Stack[-1])
0xc36: Pop(1)
0xc37: @@ ClearReplies()
0xc38: Pop(0)
0xc39: PushEmpty(bool, object)
0xc3a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc3b: Call2 0x15df

0xc3c: Pop(1)
0xc3d: IF (Stack[-1] == 0) GOTO 0xc43; Pop(1)

0xc3e: Push((int) 511123)
0xc3f: Push((int) 12316)
0xc40: Push((int) 12312)
0xc41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc42: Pop(3)
0xc43: PushEmpty(bool, object)
0xc44: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc45: Call2 0x15eb

0xc46: Pop(1)
0xc47: IF (Stack[-1] == 0) GOTO 0xc4d; Pop(1)

0xc48: Push((int) 511124)
0xc49: Push((int) 12314)
0xc4a: Push((int) 12313)
0xc4b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4c: Pop(3)
0xc4d: Push((int) 536267)
0xc4e: Push((int) -1)
0xc4f: Push((int) 38051)
0xc50: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc51: Pop(3)
0xc52: Push((int) 536268)
0xc53: Push((int) -1)
0xc54: Push((int) 38052)
0xc55: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc56: Pop(3)
0xc57: Return(); Pop(0)

0xc58: Push((int) 12314)
0xc59: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc5a: IF (Stack[-1] == 0) GOTO 0xc6a; Pop(1)

0xc5b: PushEmpty(string)
0xc5c: Stack[-1] = "Warning"
0xc5d: Call2 0xbf4

0xc5e: Pop(1)
0xc5f: Push((int) 511125)
0xc60: @@ SetMessage(Stack[-1])
0xc61: Pop(1)
0xc62: @@ ClearReplies()
0xc63: Pop(0)
0xc64: Push((int) 511126)
0xc65: Push((int) -1)
0xc66: Push((int) 12315)
0xc67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc68: Pop(3)
0xc69: Return(); Pop(0)

0xc6a: Push((int) 12316)
0xc6b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6c: IF (Stack[-1] == 0) GOTO 0xc7c; Pop(1)

0xc6d: PushEmpty(string)
0xc6e: Stack[-1] = "Neutral"
0xc6f: Call2 0xbf4

0xc70: Pop(1)
0xc71: Push((int) 511127)
0xc72: @@ SetMessage(Stack[-1])
0xc73: Pop(1)
0xc74: @@ ClearReplies()
0xc75: Pop(0)
0xc76: Push((int) 511128)
0xc77: Push((int) 12318)
0xc78: Push((int) 12317)
0xc79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7a: Pop(3)
0xc7b: Return(); Pop(0)

0xc7c: Push((int) 12318)
0xc7d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc7e: IF (Stack[-1] == 0) GOTO 0xc8e; Pop(1)

0xc7f: PushEmpty(string)
0xc80: Stack[-1] = "Neutral"
0xc81: Call2 0xbf4

0xc82: Pop(1)
0xc83: Push((int) 511129)
0xc84: @@ SetMessage(Stack[-1])
0xc85: Pop(1)
0xc86: @@ ClearReplies()
0xc87: Pop(0)
0xc88: Push((int) 511130)
0xc89: Push((int) 12320)
0xc8a: Push((int) 12319)
0xc8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8c: Pop(3)
0xc8d: Return(); Pop(0)

0xc8e: Push((int) 12320)
0xc8f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc90: IF (Stack[-1] == 0) GOTO 0xca5; Pop(1)

0xc91: PushEmpty(string)
0xc92: Stack[-1] = "Warning"
0xc93: Call2 0xbf4

0xc94: Pop(1)
0xc95: Push((int) 511131)
0xc96: @@ SetMessage(Stack[-1])
0xc97: Pop(1)
0xc98: @@ ClearReplies()
0xc99: Pop(0)
0xc9a: Push((int) 511132)
0xc9b: Push((int) -1)
0xc9c: Push((int) 12321)
0xc9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9e: Pop(3)
0xc9f: Push((int) 541854)
0xca0: Push((int) -1)
0xca1: Push((int) 44078)
0xca2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca3: Pop(3)
0xca4: Return(); Pop(0)

0xca5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xca6: PushEmpty(bool)
0xca7: Call2 0x144e

0xca8: Pop(0)
0xca9: IF (Stack[-1] == 0) GOTO 0xcad; Pop(1)

0xcaa: @ lshStopAnimation()
0xcab: Pop(0)
0xcac: GOTO 0xcaf

0xcad: @ StopAnimation()
0xcae: Pop(0)
0xcaf: Return(); Pop(0)

0xcb0: GOTO 0xc0b

0xcb1: Return(); Pop(0)

0xcb2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xcb3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xcb4: PushEmpty(bool, object, float)
0xcb5: Stack[-2] = Stack[-12]
0xcb6: Stack[-1] = (float) 70.0
0xcb7: Call2 0x1293

0xcb8: Pop(2)
0xcb9: Pop(1); Push((bool) Stack[-1] == 0)
0xcba: IF (Stack[-1] == 0) GOTO 0xcbd; Pop(1)

0xcbb: Stack[-10] = (int) -2
0xcbc: Return(); Pop(8)

0xcbd: @ CreateDialog(Stack[-4])
0xcbe: Pop(0)
0xcbf: PushEmpty(int)
0xcc0: Call2 0x1448

0xcc1: Pop(0)
0xcc2: @@ SetNPCName(Stack[-1])
0xcc3: Pop(1)
0xcc4: PushEmpty(int)
0xcc5: Call2 0x1446

0xcc6: Pop(0)
0xcc7: @@ SetNPCDescription(Stack[-1])
0xcc8: Pop(1)
0xcc9: PushEmpty(string)
0xcca: Call2 0x144a

0xccb: Pop(0)
0xccc: @@ SetPhoto(Stack[-1])
0xccd: Pop(1)
0xcce: PushEmpty(string)
0xccf: Call2 0x144c

0xcd0: Pop(0)
0xcd1: @@ SetPhoto2(Stack[-1])
0xcd2: Pop(1)
0xcd3: PushEmpty(int)
0xcd4: Call2 0x1781

0xcd5: Pop(0)
0xcd6: @@ SetPlayerName(Stack[-1])
0xcd7: Pop(1)
0xcd8: Stack[-2] = (int) -1
0xcd9: @ IsOverrideActive(Stack[-3])
0xcda: Pop(0)
0xcdb: Push(Stack[-3])
0xcdc: IF (Stack[-1] == 0) GOTO 0xcdf; Pop(1)

0xcdd: Stack[-10] = (int) -2
0xcde: Return(); Pop(8)

0xcdf: @ DoDialog(Stack[-4])
0xce0: Pop(0)
0xce1: PushEmpty(bool, object)
0xce2: PushEmpty(object)
0xce3: Call2 0x13a9

0xce4: Stack[-2] = Stack[-1]
0xce5: Pop(1)
0xce6: Call2 0x12ea

0xce7: Pop(2)
0xce8: PushEmpty(object, object)
0xce9: Stack[-2] = Stack[-11]
0xcea: Stack[-1] = Stack[-6]
0xceb: Push(-2, 4); TaskCall(7)
0xcec: Call2 0xd03

0xced: Pop(-2, 4); TaskReturn
0xcee: Pop(2)
0xcef: @@ IsDialogEnd(Stack[-1])
0xcf0: Pop(0)
0xcf1: Pop(0); Push((bool) Stack[-1] == 0)
0xcf2: IF (Stack[-1] == 0) GOTO 0xcf8; Pop(1)

0xcf3: @ sync()
0xcf4: Pop(0)
0xcf5: @@ IsDialogEnd(Stack[-1])
0xcf6: Pop(0)
0xcf7: GOTO 0xcf1

0xcf8: PushEmpty(object)
0xcf9: Stack[-1] = Stack[-10]
0xcfa: Call2 0x12d8

0xcfb: Pop(1)
0xcfc: @ StopDialog(Stack[-4])
0xcfd: Pop(0)
0xcfe: @@ GetReturnValue(Stack[-2])
0xcff: Pop(0)
0xd00: Stack[-10] = Stack[-2]
0xd01: Return(); Pop(8)

0xd02: Stack[-4] = 0
0xd03: PushEmpty()
0xd04: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xd05: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xd06: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xd07: Push((int) 1)
0xd08: IF (Stack[-1] == 0) GOTO 0xd47; Pop(1)

0xd09: PushEmpty(bool)
0xd0a: Stack[-1] = (bool) 0
0xd0b: PushEmpty(bool, object)
0xd0c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd0d: Call2 0x1685

0xd0e: Pop(1)
0xd0f: Pop(1); Push((bool) Stack[-1] == 0)
0xd10: IF (Stack[-1] == 0) GOTO 0xd17; Pop(1)

0xd11: PushEmpty(bool, object)
0xd12: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd13: Call2 0x15f7

0xd14: Pop(1)
0xd15: IF (Stack[-1] == 0) GOTO 0xd17; Pop(1)

0xd16: Stack[-1] = (bool) 1
0xd17: IF (Stack[-1] == 0) GOTO 0xd2c; Pop(1)

0xd18: PushEmpty(object, object)
0xd19: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd1a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd1b: Call2 0x1496

0xd1c: Pop(2)
0xd1d: PushEmpty(string)
0xd1e: Stack[-1] = "Warning"
0xd1f: Call2 0xd65

0xd20: Pop(1)
0xd21: Push((int) 512020)
0xd22: @@ SetMessage(Stack[-1])
0xd23: Pop(1)
0xd24: @@ ClearReplies()
0xd25: Pop(0)
0xd26: Push((int) 512021)
0xd27: Push((int) 13240)
0xd28: Push((int) 13239)
0xd29: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2a: Pop(3)
0xd2b: GOTO 0xd47

0xd2c: PushEmpty(string)
0xd2d: Stack[-1] = "Neutral"
0xd2e: Call2 0xd65

0xd2f: Pop(1)
0xd30: Push((int) 513723)
0xd31: @@ SetMessage(Stack[-1])
0xd32: Pop(1)
0xd33: @@ ClearReplies()
0xd34: Pop(0)
0xd35: PushEmpty(bool, object)
0xd36: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd37: Call2 0x1685

0xd38: Pop(1)
0xd39: IF (Stack[-1] == 0) GOTO 0xd3f; Pop(1)

0xd3a: Push((int) 541857)
0xd3b: Push((int) -1)
0xd3c: Push((int) 44082)
0xd3d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3e: Pop(3)
0xd3f: Push((int) 513724)
0xd40: Push((int) -1)
0xd41: Push((int) 14990)
0xd42: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd43: Pop(3)
0xd44: GOTO 0xd47

0xd45: Return(); Pop(0)

0xd46: GOTO 0xd07

0xd47: PushEmpty(bool)
0xd48: Call2 0x144e

0xd49: Pop(0)
0xd4a: IF (Stack[-1] == 0) GOTO 0xd56; Pop(1)

0xd4b: @ lshWaitForAnimEnd()
0xd4c: Pop(0)
0xd4d: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd4e: IF (Stack[-1] == 0) GOTO 0xd50; Pop(1)

0xd4f: GOTO 0xd55

0xd50: PushEmpty(string)
0xd51: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd52: Call2 0x1374

0xd53: Pop(1)
0xd54: GOTO 0xd4b

0xd55: GOTO 0xd64

0xd56: Push("all")
0xd57: Push("idle")
0xd58: @ PlayAnimation(Stack[-2], Stack[-1])
0xd59: Pop(2)
0xd5a: @ WaitForAnimEnd()
0xd5b: Pop(0)
0xd5c: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd5d: IF (Stack[-1] == 0) GOTO 0xd5f; Pop(1)

0xd5e: GOTO 0xd64

0xd5f: Push("all")
0xd60: Push("idle")
0xd61: @ PlayAnimation(Stack[-2], Stack[-1])
0xd62: Pop(2)
0xd63: GOTO 0xd5a

0xd64: Return(); Pop(0)

0xd65: PushEmpty()
0xd66: PushEmpty(bool)
0xd67: Call2 0x144e

0xd68: Pop(0)
0xd69: Pop(1); Push((bool) Stack[-1] == 0)
0xd6a: IF (Stack[-1] == 0) GOTO 0xd6c; Pop(1)

0xd6b: Return(); Pop(0)

0xd6c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd6d: IF (Stack[-1] == 0) GOTO 0xd6f; Pop(1)

0xd6e: Return(); Pop(0)

0xd6f: PushEmpty(string, bool)
0xd70: Stack[-2] = Stack[-3]
0xd71: Push("")
0xd72: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd73: IF (Stack[-1] == 0) GOTO 0xd76; Pop(1)

0xd74: Stack[-1] = (bool) 0
0xd75: GOTO 0xd77

0xd76: Stack[-1] = (bool) 1
0xd77: Call2 0x1384

0xd78: Pop(2)
0xd79: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd7a: Return(); Pop(0)

0xd7b: PushEmpty()
0xd7c: Push((int) 1)
0xd7d: IF (Stack[-1] == 0) GOTO 0xe11; Pop(1)

0xd7e: PushEmpty()
0xd7f: Call2 0x13a2

0xd80: Pop(0)
0xd81: Push((int) 13243)
0xd82: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd83: IF (Stack[-1] == 0) GOTO 0xd98; Pop(1)

0xd84: PushEmpty(object, object)
0xd85: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd86: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd87: Call2 0x158d

0xd88: Pop(2)
0xd89: PushEmpty(object, object)
0xd8a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8c: Call2 0x159a

0xd8d: Pop(2)
0xd8e: PushEmpty(object, object)
0xd8f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd90: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd91: Call2 0x1450

0xd92: Pop(2)
0xd93: PushEmpty(object, object)
0xd94: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd95: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd96: Call2 0x148b

0xd97: Pop(2)
0xd98: Push((int) 13238)
0xd99: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd9a: IF (Stack[-1] == 0) GOTO 0xdd7; Pop(1)

0xd9b: PushEmpty(bool)
0xd9c: Stack[-1] = (bool) 0
0xd9d: PushEmpty(bool, object)
0xd9e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd9f: Call2 0x1685

0xda0: Pop(1)
0xda1: Pop(1); Push((bool) Stack[-1] == 0)
0xda2: IF (Stack[-1] == 0) GOTO 0xda9; Pop(1)

0xda3: PushEmpty(bool, object)
0xda4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xda5: Call2 0x15f7

0xda6: Pop(1)
0xda7: IF (Stack[-1] == 0) GOTO 0xda9; Pop(1)

0xda8: Stack[-1] = (bool) 1
0xda9: IF (Stack[-1] == 0) GOTO 0xdbe; Pop(1)

0xdaa: PushEmpty(object, object)
0xdab: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdad: Call2 0x1496

0xdae: Pop(2)
0xdaf: PushEmpty(string)
0xdb0: Stack[-1] = "Warning"
0xdb1: Call2 0xd65

0xdb2: Pop(1)
0xdb3: Push((int) 512020)
0xdb4: @@ SetMessage(Stack[-1])
0xdb5: Pop(1)
0xdb6: @@ ClearReplies()
0xdb7: Pop(0)
0xdb8: Push((int) 512021)
0xdb9: Push((int) 13240)
0xdba: Push((int) 13239)
0xdbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdbc: Pop(3)
0xdbd: Return(); Pop(0)

0xdbe: PushEmpty(string)
0xdbf: Stack[-1] = "Neutral"
0xdc0: Call2 0xd65

0xdc1: Pop(1)
0xdc2: Push((int) 513723)
0xdc3: @@ SetMessage(Stack[-1])
0xdc4: Pop(1)
0xdc5: @@ ClearReplies()
0xdc6: Pop(0)
0xdc7: PushEmpty(bool, object)
0xdc8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdc9: Call2 0x1685

0xdca: Pop(1)
0xdcb: IF (Stack[-1] == 0) GOTO 0xdd1; Pop(1)

0xdcc: Push((int) 541857)
0xdcd: Push((int) -1)
0xdce: Push((int) 44082)
0xdcf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd0: Pop(3)
0xdd1: Push((int) 513724)
0xdd2: Push((int) -1)
0xdd3: Push((int) 14990)
0xdd4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd5: Pop(3)
0xdd6: Return(); Pop(0)

0xdd7: Push((int) 13240)
0xdd8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd9: IF (Stack[-1] == 0) GOTO 0xdee; Pop(1)

0xdda: PushEmpty(string)
0xddb: Stack[-1] = "Warning"
0xddc: Call2 0xd65

0xddd: Pop(1)
0xdde: Push((int) 512022)
0xddf: @@ SetMessage(Stack[-1])
0xde0: Pop(1)
0xde1: @@ ClearReplies()
0xde2: Pop(0)
0xde3: Push((int) 512023)
0xde4: Push((int) 13242)
0xde5: Push((int) 13241)
0xde6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde7: Pop(3)
0xde8: Push((int) 541856)
0xde9: Push((int) 13242)
0xdea: Push((int) 44080)
0xdeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdec: Pop(3)
0xded: Return(); Pop(0)

0xdee: Push((int) 13242)
0xdef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf0: IF (Stack[-1] == 0) GOTO 0xe05; Pop(1)

0xdf1: PushEmpty(string)
0xdf2: Stack[-1] = "Warning"
0xdf3: Call2 0xd65

0xdf4: Pop(1)
0xdf5: Push((int) 512024)
0xdf6: @@ SetMessage(Stack[-1])
0xdf7: Pop(1)
0xdf8: @@ ClearReplies()
0xdf9: Pop(0)
0xdfa: Push((int) 512025)
0xdfb: Push((int) -1)
0xdfc: Push((int) 13243)
0xdfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdfe: Pop(3)
0xdff: Push((int) 541855)
0xe00: Push((int) -1)
0xe01: Push((int) 44079)
0xe02: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe03: Pop(3)
0xe04: Return(); Pop(0)

0xe05: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe06: PushEmpty(bool)
0xe07: Call2 0x144e

0xe08: Pop(0)
0xe09: IF (Stack[-1] == 0) GOTO 0xe0d; Pop(1)

0xe0a: @ lshStopAnimation()
0xe0b: Pop(0)
0xe0c: GOTO 0xe0f

0xe0d: @ StopAnimation()
0xe0e: Pop(0)
0xe0f: Return(); Pop(0)

0xe10: GOTO 0xd7c

0xe11: Return(); Pop(0)

0xe12: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe13: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe14: PushEmpty(bool, object, float)
0xe15: Stack[-2] = Stack[-12]
0xe16: Stack[-1] = (float) 70.0
0xe17: Call2 0x1293

0xe18: Pop(2)
0xe19: Pop(1); Push((bool) Stack[-1] == 0)
0xe1a: IF (Stack[-1] == 0) GOTO 0xe1d; Pop(1)

0xe1b: Stack[-10] = (int) -2
0xe1c: Return(); Pop(8)

0xe1d: @ CreateDialog(Stack[-4])
0xe1e: Pop(0)
0xe1f: PushEmpty(int)
0xe20: Call2 0x1448

0xe21: Pop(0)
0xe22: @@ SetNPCName(Stack[-1])
0xe23: Pop(1)
0xe24: PushEmpty(int)
0xe25: Call2 0x1446

0xe26: Pop(0)
0xe27: @@ SetNPCDescription(Stack[-1])
0xe28: Pop(1)
0xe29: PushEmpty(string)
0xe2a: Call2 0x144a

0xe2b: Pop(0)
0xe2c: @@ SetPhoto(Stack[-1])
0xe2d: Pop(1)
0xe2e: PushEmpty(string)
0xe2f: Call2 0x144c

0xe30: Pop(0)
0xe31: @@ SetPhoto2(Stack[-1])
0xe32: Pop(1)
0xe33: PushEmpty(int)
0xe34: Call2 0x1781

0xe35: Pop(0)
0xe36: @@ SetPlayerName(Stack[-1])
0xe37: Pop(1)
0xe38: Stack[-2] = (int) -1
0xe39: @ IsOverrideActive(Stack[-3])
0xe3a: Pop(0)
0xe3b: Push(Stack[-3])
0xe3c: IF (Stack[-1] == 0) GOTO 0xe3f; Pop(1)

0xe3d: Stack[-10] = (int) -2
0xe3e: Return(); Pop(8)

0xe3f: @ DoDialog(Stack[-4])
0xe40: Pop(0)
0xe41: PushEmpty(bool, object)
0xe42: PushEmpty(object)
0xe43: Call2 0x13a9

0xe44: Stack[-2] = Stack[-1]
0xe45: Pop(1)
0xe46: Call2 0x12ea

0xe47: Pop(2)
0xe48: PushEmpty(object, object)
0xe49: Stack[-2] = Stack[-11]
0xe4a: Stack[-1] = Stack[-6]
0xe4b: Push(-2, 4); TaskCall(9)
0xe4c: Call2 0xe63

0xe4d: Pop(-2, 4); TaskReturn
0xe4e: Pop(2)
0xe4f: @@ IsDialogEnd(Stack[-1])
0xe50: Pop(0)
0xe51: Pop(0); Push((bool) Stack[-1] == 0)
0xe52: IF (Stack[-1] == 0) GOTO 0xe58; Pop(1)

0xe53: @ sync()
0xe54: Pop(0)
0xe55: @@ IsDialogEnd(Stack[-1])
0xe56: Pop(0)
0xe57: GOTO 0xe51

0xe58: PushEmpty(object)
0xe59: Stack[-1] = Stack[-10]
0xe5a: Call2 0x12d8

0xe5b: Pop(1)
0xe5c: @ StopDialog(Stack[-4])
0xe5d: Pop(0)
0xe5e: @@ GetReturnValue(Stack[-2])
0xe5f: Pop(0)
0xe60: Stack[-10] = Stack[-2]
0xe61: Return(); Pop(8)

0xe62: Stack[-4] = 0
0xe63: PushEmpty()
0xe64: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xe65: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xe66: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xe67: Push((int) 1)
0xe68: IF (Stack[-1] == 0) GOTO 0xe89; Pop(1)

0xe69: PushEmpty(string)
0xe6a: Stack[-1] = "Confusion"
0xe6b: Call2 0xea7

0xe6c: Pop(1)
0xe6d: Push((int) 534092)
0xe6e: @@ SetMessage(Stack[-1])
0xe6f: Pop(1)
0xe70: @@ ClearReplies()
0xe71: Pop(0)
0xe72: PushEmpty(bool, object)
0xe73: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe74: Call2 0x15c7

0xe75: Pop(1)
0xe76: IF (Stack[-1] == 0) GOTO 0xe7c; Pop(1)

0xe77: Push((int) 534093)
0xe78: Push((int) 38177)
0xe79: Push((int) 35686)
0xe7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7b: Pop(3)
0xe7c: Push((int) 536401)
0xe7d: Push((int) -1)
0xe7e: Push((int) 38180)
0xe7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe80: Pop(3)
0xe81: Push((int) 536402)
0xe82: Push((int) -1)
0xe83: Push((int) 38181)
0xe84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe85: Pop(3)
0xe86: GOTO 0xe89

0xe87: Return(); Pop(0)

0xe88: GOTO 0xe67

0xe89: PushEmpty(bool)
0xe8a: Call2 0x144e

0xe8b: Pop(0)
0xe8c: IF (Stack[-1] == 0) GOTO 0xe98; Pop(1)

0xe8d: @ lshWaitForAnimEnd()
0xe8e: Pop(0)
0xe8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe90: IF (Stack[-1] == 0) GOTO 0xe92; Pop(1)

0xe91: GOTO 0xe97

0xe92: PushEmpty(string)
0xe93: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe94: Call2 0x1374

0xe95: Pop(1)
0xe96: GOTO 0xe8d

0xe97: GOTO 0xea6

0xe98: Push("all")
0xe99: Push("idle")
0xe9a: @ PlayAnimation(Stack[-2], Stack[-1])
0xe9b: Pop(2)
0xe9c: @ WaitForAnimEnd()
0xe9d: Pop(0)
0xe9e: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe9f: IF (Stack[-1] == 0) GOTO 0xea1; Pop(1)

0xea0: GOTO 0xea6

0xea1: Push("all")
0xea2: Push("idle")
0xea3: @ PlayAnimation(Stack[-2], Stack[-1])
0xea4: Pop(2)
0xea5: GOTO 0xe9c

0xea6: Return(); Pop(0)

0xea7: PushEmpty()
0xea8: PushEmpty(bool)
0xea9: Call2 0x144e

0xeaa: Pop(0)
0xeab: Pop(1); Push((bool) Stack[-1] == 0)
0xeac: IF (Stack[-1] == 0) GOTO 0xeae; Pop(1)

0xead: Return(); Pop(0)

0xeae: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xeaf: IF (Stack[-1] == 0) GOTO 0xeb1; Pop(1)

0xeb0: Return(); Pop(0)

0xeb1: PushEmpty(string, bool)
0xeb2: Stack[-2] = Stack[-3]
0xeb3: Push("")
0xeb4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xeb5: IF (Stack[-1] == 0) GOTO 0xeb8; Pop(1)

0xeb6: Stack[-1] = (bool) 0
0xeb7: GOTO 0xeb9

0xeb8: Stack[-1] = (bool) 1
0xeb9: Call2 0x1384

0xeba: Pop(2)
0xebb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xebc: Return(); Pop(0)

0xebd: PushEmpty()
0xebe: Push((int) 1)
0xebf: IF (Stack[-1] == 0) GOTO 0xfa4; Pop(1)

0xec0: PushEmpty()
0xec1: Call2 0x13a2

0xec2: Pop(0)
0xec3: Push((int) 35688)
0xec4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xec5: IF (Stack[-1] == 0) GOTO 0xed0; Pop(1)

0xec6: PushEmpty(object, object)
0xec7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xec8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec9: Call2 0x145d

0xeca: Pop(2)
0xecb: PushEmpty(object, object)
0xecc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xecd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xece: Call2 0x15a5

0xecf: Pop(2)
0xed0: Push((int) 38195)
0xed1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xed2: IF (Stack[-1] == 0) GOTO 0xedd; Pop(1)

0xed3: PushEmpty(object, object)
0xed4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xed5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xed6: Call2 0x145d

0xed7: Pop(2)
0xed8: PushEmpty(object, object)
0xed9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeda: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xedb: Call2 0x15a5

0xedc: Pop(2)
0xedd: Push((int) 35685)
0xede: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xedf: IF (Stack[-1] == 0) GOTO 0xefe; Pop(1)

0xee0: PushEmpty(string)
0xee1: Stack[-1] = "Confusion"
0xee2: Call2 0xea7

0xee3: Pop(1)
0xee4: Push((int) 534092)
0xee5: @@ SetMessage(Stack[-1])
0xee6: Pop(1)
0xee7: @@ ClearReplies()
0xee8: Pop(0)
0xee9: PushEmpty(bool, object)
0xeea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xeeb: Call2 0x15c7

0xeec: Pop(1)
0xeed: IF (Stack[-1] == 0) GOTO 0xef3; Pop(1)

0xeee: Push((int) 534093)
0xeef: Push((int) 38177)
0xef0: Push((int) 35686)
0xef1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef2: Pop(3)
0xef3: Push((int) 536401)
0xef4: Push((int) -1)
0xef5: Push((int) 38180)
0xef6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef7: Pop(3)
0xef8: Push((int) 536402)
0xef9: Push((int) -1)
0xefa: Push((int) 38181)
0xefb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xefc: Pop(3)
0xefd: Return(); Pop(0)

0xefe: Push((int) 38177)
0xeff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf00: IF (Stack[-1] == 0) GOTO 0xf15; Pop(1)

0xf01: PushEmpty(string)
0xf02: Stack[-1] = "Confusion"
0xf03: Call2 0xea7

0xf04: Pop(1)
0xf05: Push((int) 536398)
0xf06: @@ SetMessage(Stack[-1])
0xf07: Pop(1)
0xf08: @@ ClearReplies()
0xf09: Pop(0)
0xf0a: Push((int) 536399)
0xf0b: Push((int) 38179)
0xf0c: Push((int) 38178)
0xf0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0e: Pop(3)
0xf0f: Push((int) 536408)
0xf10: Push((int) 38190)
0xf11: Push((int) 38187)
0xf12: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf13: Pop(3)
0xf14: Return(); Pop(0)

0xf15: Push((int) 38190)
0xf16: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf17: IF (Stack[-1] == 0) GOTO 0xf27; Pop(1)

0xf18: PushEmpty(string)
0xf19: Stack[-1] = "Rage"
0xf1a: Call2 0xea7

0xf1b: Pop(1)
0xf1c: Push((int) 536411)
0xf1d: @@ SetMessage(Stack[-1])
0xf1e: Pop(1)
0xf1f: @@ ClearReplies()
0xf20: Pop(0)
0xf21: Push((int) 536412)
0xf22: Push((int) 38192)
0xf23: Push((int) 38191)
0xf24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf25: Pop(3)
0xf26: Return(); Pop(0)

0xf27: Push((int) 38192)
0xf28: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf29: IF (Stack[-1] == 0) GOTO 0xf39; Pop(1)

0xf2a: PushEmpty(string)
0xf2b: Stack[-1] = "Rage"
0xf2c: Call2 0xea7

0xf2d: Pop(1)
0xf2e: Push((int) 536413)
0xf2f: @@ SetMessage(Stack[-1])
0xf30: Pop(1)
0xf31: @@ ClearReplies()
0xf32: Pop(0)
0xf33: Push((int) 536414)
0xf34: Push((int) 38189)
0xf35: Push((int) 38193)
0xf36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf37: Pop(3)
0xf38: Return(); Pop(0)

0xf39: Push((int) 38179)
0xf3a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf3b: IF (Stack[-1] == 0) GOTO 0xf50; Pop(1)

0xf3c: PushEmpty(string)
0xf3d: Stack[-1] = "Confusion"
0xf3e: Call2 0xea7

0xf3f: Pop(1)
0xf40: Push((int) 536400)
0xf41: @@ SetMessage(Stack[-1])
0xf42: Pop(1)
0xf43: @@ ClearReplies()
0xf44: Pop(0)
0xf45: Push((int) 536409)
0xf46: Push((int) 38189)
0xf47: Push((int) 38188)
0xf48: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf49: Pop(3)
0xf4a: Push((int) 536415)
0xf4b: Push((int) -1)
0xf4c: Push((int) 38195)
0xf4d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4e: Pop(3)
0xf4f: Return(); Pop(0)

0xf50: Push((int) 38189)
0xf51: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf52: IF (Stack[-1] == 0) GOTO 0xf62; Pop(1)

0xf53: PushEmpty(string)
0xf54: Stack[-1] = "Confusion"
0xf55: Call2 0xea7

0xf56: Pop(1)
0xf57: Push((int) 536410)
0xf58: @@ SetMessage(Stack[-1])
0xf59: Pop(1)
0xf5a: @@ ClearReplies()
0xf5b: Pop(0)
0xf5c: Push((int) 536403)
0xf5d: Push((int) 38183)
0xf5e: Push((int) 38182)
0xf5f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf60: Pop(3)
0xf61: Return(); Pop(0)

0xf62: Push((int) 38183)
0xf63: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf64: IF (Stack[-1] == 0) GOTO 0xf74; Pop(1)

0xf65: PushEmpty(string)
0xf66: Stack[-1] = "Rage"
0xf67: Call2 0xea7

0xf68: Pop(1)
0xf69: Push((int) 536404)
0xf6a: @@ SetMessage(Stack[-1])
0xf6b: Pop(1)
0xf6c: @@ ClearReplies()
0xf6d: Pop(0)
0xf6e: Push((int) 536405)
0xf6f: Push((int) 38185)
0xf70: Push((int) 38184)
0xf71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf72: Pop(3)
0xf73: Return(); Pop(0)

0xf74: Push((int) 38185)
0xf75: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf76: IF (Stack[-1] == 0) GOTO 0xf86; Pop(1)

0xf77: PushEmpty(string)
0xf78: Stack[-1] = "Rage"
0xf79: Call2 0xea7

0xf7a: Pop(1)
0xf7b: Push((int) 536406)
0xf7c: @@ SetMessage(Stack[-1])
0xf7d: Pop(1)
0xf7e: @@ ClearReplies()
0xf7f: Pop(0)
0xf80: Push((int) 536407)
0xf81: Push((int) 35687)
0xf82: Push((int) 38186)
0xf83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf84: Pop(3)
0xf85: Return(); Pop(0)

0xf86: Push((int) 35687)
0xf87: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf88: IF (Stack[-1] == 0) GOTO 0xf98; Pop(1)

0xf89: PushEmpty(string)
0xf8a: Stack[-1] = "Warning"
0xf8b: Call2 0xea7

0xf8c: Pop(1)
0xf8d: Push((int) 534094)
0xf8e: @@ SetMessage(Stack[-1])
0xf8f: Pop(1)
0xf90: @@ ClearReplies()
0xf91: Pop(0)
0xf92: Push((int) 534095)
0xf93: Push((int) -1)
0xf94: Push((int) 35688)
0xf95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf96: Pop(3)
0xf97: Return(); Pop(0)

0xf98: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf99: PushEmpty(bool)
0xf9a: Call2 0x144e

0xf9b: Pop(0)
0xf9c: IF (Stack[-1] == 0) GOTO 0xfa0; Pop(1)

0xf9d: @ lshStopAnimation()
0xf9e: Pop(0)
0xf9f: GOTO 0xfa2

0xfa0: @ StopAnimation()
0xfa1: Pop(0)
0xfa2: Return(); Pop(0)

0xfa3: GOTO 0xebe

0xfa4: Return(); Pop(0)

0xfa5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xfa6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xfa7: PushEmpty(bool, object, float)
0xfa8: Stack[-2] = Stack[-12]
0xfa9: Stack[-1] = (float) 70.0
0xfaa: Call2 0x1293

0xfab: Pop(2)
0xfac: Pop(1); Push((bool) Stack[-1] == 0)
0xfad: IF (Stack[-1] == 0) GOTO 0xfb0; Pop(1)

0xfae: Stack[-10] = (int) -2
0xfaf: Return(); Pop(8)

0xfb0: @ CreateDialog(Stack[-4])
0xfb1: Pop(0)
0xfb2: PushEmpty(int)
0xfb3: Call2 0x1448

0xfb4: Pop(0)
0xfb5: @@ SetNPCName(Stack[-1])
0xfb6: Pop(1)
0xfb7: PushEmpty(int)
0xfb8: Call2 0x1446

0xfb9: Pop(0)
0xfba: @@ SetNPCDescription(Stack[-1])
0xfbb: Pop(1)
0xfbc: PushEmpty(string)
0xfbd: Call2 0x144a

0xfbe: Pop(0)
0xfbf: @@ SetPhoto(Stack[-1])
0xfc0: Pop(1)
0xfc1: PushEmpty(string)
0xfc2: Call2 0x144c

0xfc3: Pop(0)
0xfc4: @@ SetPhoto2(Stack[-1])
0xfc5: Pop(1)
0xfc6: PushEmpty(int)
0xfc7: Call2 0x1781

0xfc8: Pop(0)
0xfc9: @@ SetPlayerName(Stack[-1])
0xfca: Pop(1)
0xfcb: Stack[-2] = (int) -1
0xfcc: @ IsOverrideActive(Stack[-3])
0xfcd: Pop(0)
0xfce: Push(Stack[-3])
0xfcf: IF (Stack[-1] == 0) GOTO 0xfd2; Pop(1)

0xfd0: Stack[-10] = (int) -2
0xfd1: Return(); Pop(8)

0xfd2: @ DoDialog(Stack[-4])
0xfd3: Pop(0)
0xfd4: PushEmpty(bool, object)
0xfd5: PushEmpty(object)
0xfd6: Call2 0x13a9

0xfd7: Stack[-2] = Stack[-1]
0xfd8: Pop(1)
0xfd9: Call2 0x12ea

0xfda: Pop(2)
0xfdb: PushEmpty(object, object)
0xfdc: Stack[-2] = Stack[-11]
0xfdd: Stack[-1] = Stack[-6]
0xfde: Push(-2, 4); TaskCall(11)
0xfdf: Call2 0xff6

0xfe0: Pop(-2, 4); TaskReturn
0xfe1: Pop(2)
0xfe2: @@ IsDialogEnd(Stack[-1])
0xfe3: Pop(0)
0xfe4: Pop(0); Push((bool) Stack[-1] == 0)
0xfe5: IF (Stack[-1] == 0) GOTO 0xfeb; Pop(1)

0xfe6: @ sync()
0xfe7: Pop(0)
0xfe8: @@ IsDialogEnd(Stack[-1])
0xfe9: Pop(0)
0xfea: GOTO 0xfe4

0xfeb: PushEmpty(object)
0xfec: Stack[-1] = Stack[-10]
0xfed: Call2 0x12d8

0xfee: Pop(1)
0xfef: @ StopDialog(Stack[-4])
0xff0: Pop(0)
0xff1: @@ GetReturnValue(Stack[-2])
0xff2: Pop(0)
0xff3: Stack[-10] = Stack[-2]
0xff4: Return(); Pop(8)

0xff5: Stack[-4] = 0
0xff6: PushEmpty()
0xff7: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xff8: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xff9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xffa: Push((int) 1)
0xffb: IF (Stack[-1] == 0) GOTO 0x1017; Pop(1)

0xffc: PushEmpty(string)
0xffd: Stack[-1] = "Neutral"
0xffe: Call2 0x1035

0xfff: Pop(1)
0x1000: Push((int) 535294)
0x1001: @@ SetMessage(Stack[-1])
0x1002: Pop(1)
0x1003: @@ ClearReplies()
0x1004: Pop(0)
0x1005: Push((int) 535295)
0x1006: Push((int) 36973)
0x1007: Push((int) 36972)
0x1008: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1009: Pop(3)
0x100a: Push((int) 535302)
0x100b: Push((int) -1)
0x100c: Push((int) 36980)
0x100d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100e: Pop(3)
0x100f: Push((int) 535303)
0x1010: Push((int) -1)
0x1011: Push((int) 36981)
0x1012: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1013: Pop(3)
0x1014: GOTO 0x1017

0x1015: Return(); Pop(0)

0x1016: GOTO 0xffa

0x1017: PushEmpty(bool)
0x1018: Call2 0x144e

0x1019: Pop(0)
0x101a: IF (Stack[-1] == 0) GOTO 0x1026; Pop(1)

0x101b: @ lshWaitForAnimEnd()
0x101c: Pop(0)
0x101d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x101e: IF (Stack[-1] == 0) GOTO 0x1020; Pop(1)

0x101f: GOTO 0x1025

0x1020: PushEmpty(string)
0x1021: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1022: Call2 0x1374

0x1023: Pop(1)
0x1024: GOTO 0x101b

0x1025: GOTO 0x1034

0x1026: Push("all")
0x1027: Push("idle")
0x1028: @ PlayAnimation(Stack[-2], Stack[-1])
0x1029: Pop(2)
0x102a: @ WaitForAnimEnd()
0x102b: Pop(0)
0x102c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x102d: IF (Stack[-1] == 0) GOTO 0x102f; Pop(1)

0x102e: GOTO 0x1034

0x102f: Push("all")
0x1030: Push("idle")
0x1031: @ PlayAnimation(Stack[-2], Stack[-1])
0x1032: Pop(2)
0x1033: GOTO 0x102a

0x1034: Return(); Pop(0)

0x1035: PushEmpty()
0x1036: PushEmpty(bool)
0x1037: Call2 0x144e

0x1038: Pop(0)
0x1039: Pop(1); Push((bool) Stack[-1] == 0)
0x103a: IF (Stack[-1] == 0) GOTO 0x103c; Pop(1)

0x103b: Return(); Pop(0)

0x103c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x103d: IF (Stack[-1] == 0) GOTO 0x103f; Pop(1)

0x103e: Return(); Pop(0)

0x103f: PushEmpty(string, bool)
0x1040: Stack[-2] = Stack[-3]
0x1041: Push("")
0x1042: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1043: IF (Stack[-1] == 0) GOTO 0x1046; Pop(1)

0x1044: Stack[-1] = (bool) 0
0x1045: GOTO 0x1047

0x1046: Stack[-1] = (bool) 1
0x1047: Call2 0x1384

0x1048: Pop(2)
0x1049: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x104a: Return(); Pop(0)

0x104b: PushEmpty()
0x104c: Push((int) 1)
0x104d: IF (Stack[-1] == 0) GOTO 0x10a7; Pop(1)

0x104e: PushEmpty()
0x104f: Call2 0x13a2

0x1050: Pop(0)
0x1051: Push((int) 36971)
0x1052: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1053: IF (Stack[-1] == 0) GOTO 0x106d; Pop(1)

0x1054: PushEmpty(string)
0x1055: Stack[-1] = "Neutral"
0x1056: Call2 0x1035

0x1057: Pop(1)
0x1058: Push((int) 535294)
0x1059: @@ SetMessage(Stack[-1])
0x105a: Pop(1)
0x105b: @@ ClearReplies()
0x105c: Pop(0)
0x105d: Push((int) 535295)
0x105e: Push((int) 36973)
0x105f: Push((int) 36972)
0x1060: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1061: Pop(3)
0x1062: Push((int) 535302)
0x1063: Push((int) -1)
0x1064: Push((int) 36980)
0x1065: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1066: Pop(3)
0x1067: Push((int) 535303)
0x1068: Push((int) -1)
0x1069: Push((int) 36981)
0x106a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106b: Pop(3)
0x106c: Return(); Pop(0)

0x106d: Push((int) 36973)
0x106e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x106f: IF (Stack[-1] == 0) GOTO 0x1084; Pop(1)

0x1070: PushEmpty(string)
0x1071: Stack[-1] = "Neutral"
0x1072: Call2 0x1035

0x1073: Pop(1)
0x1074: Push((int) 535296)
0x1075: @@ SetMessage(Stack[-1])
0x1076: Pop(1)
0x1077: @@ ClearReplies()
0x1078: Pop(0)
0x1079: Push((int) 535297)
0x107a: Push((int) 36975)
0x107b: Push((int) 36974)
0x107c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107d: Pop(3)
0x107e: Push((int) 535301)
0x107f: Push((int) 36975)
0x1080: Push((int) 36978)
0x1081: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1082: Pop(3)
0x1083: Return(); Pop(0)

0x1084: Push((int) 36975)
0x1085: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1086: IF (Stack[-1] == 0) GOTO 0x109b; Pop(1)

0x1087: PushEmpty(string)
0x1088: Stack[-1] = "Neutral"
0x1089: Call2 0x1035

0x108a: Pop(1)
0x108b: Push((int) 535298)
0x108c: @@ SetMessage(Stack[-1])
0x108d: Pop(1)
0x108e: @@ ClearReplies()
0x108f: Pop(0)
0x1090: Push((int) 535299)
0x1091: Push((int) -1)
0x1092: Push((int) 36976)
0x1093: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1094: Pop(3)
0x1095: Push((int) 535300)
0x1096: Push((int) -1)
0x1097: Push((int) 36977)
0x1098: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1099: Pop(3)
0x109a: Return(); Pop(0)

0x109b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x109c: PushEmpty(bool)
0x109d: Call2 0x144e

0x109e: Pop(0)
0x109f: IF (Stack[-1] == 0) GOTO 0x10a3; Pop(1)

0x10a0: @ lshStopAnimation()
0x10a1: Pop(0)
0x10a2: GOTO 0x10a5

0x10a3: @ StopAnimation()
0x10a4: Pop(0)
0x10a5: Return(); Pop(0)

0x10a6: GOTO 0x104c

0x10a7: Return(); Pop(0)

0x10a8: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x10a9: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x10aa: PushEmpty(bool, object, float)
0x10ab: Stack[-2] = Stack[-12]
0x10ac: Stack[-1] = (float) 70.0
0x10ad: Call2 0x1293

0x10ae: Pop(2)
0x10af: Pop(1); Push((bool) Stack[-1] == 0)
0x10b0: IF (Stack[-1] == 0) GOTO 0x10b3; Pop(1)

0x10b1: Stack[-10] = (int) -2
0x10b2: Return(); Pop(8)

0x10b3: @ CreateDialog(Stack[-4])
0x10b4: Pop(0)
0x10b5: PushEmpty(int)
0x10b6: Call2 0x1448

0x10b7: Pop(0)
0x10b8: @@ SetNPCName(Stack[-1])
0x10b9: Pop(1)
0x10ba: PushEmpty(int)
0x10bb: Call2 0x1446

0x10bc: Pop(0)
0x10bd: @@ SetNPCDescription(Stack[-1])
0x10be: Pop(1)
0x10bf: PushEmpty(string)
0x10c0: Call2 0x144a

0x10c1: Pop(0)
0x10c2: @@ SetPhoto(Stack[-1])
0x10c3: Pop(1)
0x10c4: PushEmpty(string)
0x10c5: Call2 0x144c

0x10c6: Pop(0)
0x10c7: @@ SetPhoto2(Stack[-1])
0x10c8: Pop(1)
0x10c9: PushEmpty(int)
0x10ca: Call2 0x1781

0x10cb: Pop(0)
0x10cc: @@ SetPlayerName(Stack[-1])
0x10cd: Pop(1)
0x10ce: Stack[-2] = (int) -1
0x10cf: @ IsOverrideActive(Stack[-3])
0x10d0: Pop(0)
0x10d1: Push(Stack[-3])
0x10d2: IF (Stack[-1] == 0) GOTO 0x10d5; Pop(1)

0x10d3: Stack[-10] = (int) -2
0x10d4: Return(); Pop(8)

0x10d5: @ DoDialog(Stack[-4])
0x10d6: Pop(0)
0x10d7: PushEmpty(bool, object)
0x10d8: PushEmpty(object)
0x10d9: Call2 0x13a9

0x10da: Stack[-2] = Stack[-1]
0x10db: Pop(1)
0x10dc: Call2 0x12ea

0x10dd: Pop(2)
0x10de: PushEmpty(object, object)
0x10df: Stack[-2] = Stack[-11]
0x10e0: Stack[-1] = Stack[-6]
0x10e1: Push(-2, 4); TaskCall(13)
0x10e2: Call2 0x10f9

0x10e3: Pop(-2, 4); TaskReturn
0x10e4: Pop(2)
0x10e5: @@ IsDialogEnd(Stack[-1])
0x10e6: Pop(0)
0x10e7: Pop(0); Push((bool) Stack[-1] == 0)
0x10e8: IF (Stack[-1] == 0) GOTO 0x10ee; Pop(1)

0x10e9: @ sync()
0x10ea: Pop(0)
0x10eb: @@ IsDialogEnd(Stack[-1])
0x10ec: Pop(0)
0x10ed: GOTO 0x10e7

0x10ee: PushEmpty(object)
0x10ef: Stack[-1] = Stack[-10]
0x10f0: Call2 0x12d8

0x10f1: Pop(1)
0x10f2: @ StopDialog(Stack[-4])
0x10f3: Pop(0)
0x10f4: @@ GetReturnValue(Stack[-2])
0x10f5: Pop(0)
0x10f6: Stack[-10] = Stack[-2]
0x10f7: Return(); Pop(8)

0x10f8: Stack[-4] = 0
0x10f9: PushEmpty()
0x10fa: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x10fb: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x10fc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x10fd: Push((int) 1)
0x10fe: IF (Stack[-1] == 0) GOTO 0x1115; Pop(1)

0x10ff: PushEmpty(string)
0x1100: Stack[-1] = "Neutral"
0x1101: Call2 0x1133

0x1102: Pop(1)
0x1103: Push((int) 540542)
0x1104: @@ SetMessage(Stack[-1])
0x1105: Pop(1)
0x1106: @@ ClearReplies()
0x1107: Pop(0)
0x1108: Push((int) 540543)
0x1109: Push((int) -1)
0x110a: Push((int) 42552)
0x110b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110c: Pop(3)
0x110d: Push((int) 540796)
0x110e: Push((int) -1)
0x110f: Push((int) 42845)
0x1110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1111: Pop(3)
0x1112: GOTO 0x1115

0x1113: Return(); Pop(0)

0x1114: GOTO 0x10fd

0x1115: PushEmpty(bool)
0x1116: Call2 0x144e

0x1117: Pop(0)
0x1118: IF (Stack[-1] == 0) GOTO 0x1124; Pop(1)

0x1119: @ lshWaitForAnimEnd()
0x111a: Pop(0)
0x111b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x111c: IF (Stack[-1] == 0) GOTO 0x111e; Pop(1)

0x111d: GOTO 0x1123

0x111e: PushEmpty(string)
0x111f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1120: Call2 0x1374

0x1121: Pop(1)
0x1122: GOTO 0x1119

0x1123: GOTO 0x1132

0x1124: Push("all")
0x1125: Push("idle")
0x1126: @ PlayAnimation(Stack[-2], Stack[-1])
0x1127: Pop(2)
0x1128: @ WaitForAnimEnd()
0x1129: Pop(0)
0x112a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x112b: IF (Stack[-1] == 0) GOTO 0x112d; Pop(1)

0x112c: GOTO 0x1132

0x112d: Push("all")
0x112e: Push("idle")
0x112f: @ PlayAnimation(Stack[-2], Stack[-1])
0x1130: Pop(2)
0x1131: GOTO 0x1128

0x1132: Return(); Pop(0)

0x1133: PushEmpty()
0x1134: PushEmpty(bool)
0x1135: Call2 0x144e

0x1136: Pop(0)
0x1137: Pop(1); Push((bool) Stack[-1] == 0)
0x1138: IF (Stack[-1] == 0) GOTO 0x113a; Pop(1)

0x1139: Return(); Pop(0)

0x113a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x113b: IF (Stack[-1] == 0) GOTO 0x113d; Pop(1)

0x113c: Return(); Pop(0)

0x113d: PushEmpty(string, bool)
0x113e: Stack[-2] = Stack[-3]
0x113f: Push("")
0x1140: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1141: IF (Stack[-1] == 0) GOTO 0x1144; Pop(1)

0x1142: Stack[-1] = (bool) 0
0x1143: GOTO 0x1145

0x1144: Stack[-1] = (bool) 1
0x1145: Call2 0x1384

0x1146: Pop(2)
0x1147: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1148: Return(); Pop(0)

0x1149: PushEmpty()
0x114a: Push((int) 1)
0x114b: IF (Stack[-1] == 0) GOTO 0x1172; Pop(1)

0x114c: PushEmpty()
0x114d: Call2 0x13a2

0x114e: Pop(0)
0x114f: Push((int) 42551)
0x1150: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1151: IF (Stack[-1] == 0) GOTO 0x1166; Pop(1)

0x1152: PushEmpty(string)
0x1153: Stack[-1] = "Neutral"
0x1154: Call2 0x1133

0x1155: Pop(1)
0x1156: Push((int) 540542)
0x1157: @@ SetMessage(Stack[-1])
0x1158: Pop(1)
0x1159: @@ ClearReplies()
0x115a: Pop(0)
0x115b: Push((int) 540543)
0x115c: Push((int) -1)
0x115d: Push((int) 42552)
0x115e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115f: Pop(3)
0x1160: Push((int) 540796)
0x1161: Push((int) -1)
0x1162: Push((int) 42845)
0x1163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1164: Pop(3)
0x1165: Return(); Pop(0)

0x1166: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1167: PushEmpty(bool)
0x1168: Call2 0x144e

0x1169: Pop(0)
0x116a: IF (Stack[-1] == 0) GOTO 0x116e; Pop(1)

0x116b: @ lshStopAnimation()
0x116c: Pop(0)
0x116d: GOTO 0x1170

0x116e: @ StopAnimation()
0x116f: Pop(0)
0x1170: Return(); Pop(0)

0x1171: GOTO 0x114a

0x1172: Return(); Pop(0)

0x1173: PushEmpty()
0x1174: Call2 0x1177

0x1175: Pop(0)
0x1176: Return(); Pop(0)

0x1177: PushEmpty(bool)
0x1178: Call2 0x128e

0x1179: Pop(0)
0x117a: Pop(1); Push((bool) Stack[-1] == 0)
0x117b: IF (Stack[-1] == 0) GOTO 0x117e; Pop(1)

0x117c: @ Hold()
0x117d: Pop(0)
0x117e: @ GetDirection(Stack[-0])
0x117f: Pop(0)
0x1180: PushEmpty()
0x1181: Call2 0x1227

0x1182: Pop(0)
0x1183: GOTO 0x1180

0x1184: Return(); Pop(0)

0x1185: PushEmpty(object, object)
0x1186: Push("player")
0x1187: @ FindActor(Stack[-2], Stack[-1])
0x1188: Pop(1)
0x1189: Pop(0); Push((bool) Stack[-1] == 0)
0x118a: IF (Stack[-1] == 0) GOTO 0x118d; Pop(1)

0x118b: Stack[-3] = (bool) 0
0x118c: Return(); Pop(2)

0x118d: PushEmpty(bool, object)
0x118e: Stack[-1] = Stack[-3]
0x118f: Call2 0x1285

0x1190: Stack[-5] = Stack[-2]
0x1191: Pop(2)
0x1192: Return(); Pop(2)

0x1193: Stack[-1] = 0
0x1194: Push(CvectorIndex(Stack[-0], 0))
0x1195: Push(CvectorIndex(Stack[-0], 2))
0x1196: @ RotateAsync(Stack[-2], Stack[-1])
0x1197: Pop(2)
0x1198: Return(); Pop(0)

0x1199: PushEmpty(object, bool, object, bool)
0x119a: Push("player")
0x119b: @ FindActor(Stack[-3], Stack[-1])
0x119c: Pop(1)
0x119d: Pop(0); Push((bool) Stack[-2] == 0)
0x119e: IF (Stack[-1] == 0) GOTO 0x11a1; Pop(1)

0x119f: Stack[-5] = (bool) 0
0x11a0: Return(); Pop(4)

0x11a1: PushEmpty(float, object)
0x11a2: Stack[-1] = Stack[-4]
0x11a3: Call2 0x1273

0x11a4: Pop(1)
0x11a5: Push((float)90000.0)
0x11a6: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x11a7: IF (Stack[-1] == 0) GOTO 0x11aa; Pop(1)

0x11a8: Stack[-5] = (bool) 0
0x11a9: Return(); Pop(4)

0x11aa: @ CanSee(Stack[-1], Stack[-2])
0x11ab: Pop(0)
0x11ac: Stack[-5] = Stack[-1]
0x11ad: Return(); Pop(4)

0x11ae: Stack[-2] = 0
0x11af: PushEmpty(float, float)
0x11b0: Push((int) 8)
0x11b1: Push((int) 16)
0x11b2: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x11b3: Pop(2)
0x11b4: Push((int) 10)
0x11b5: @ SetTimer(Stack[-1], Stack[-2])
0x11b6: Pop(1)
0x11b7: Return(); Pop(2)

0x11b8: Push((int) 10)
0x11b9: @ KillTimer(Stack[-1])
0x11ba: Pop(1)
0x11bb: Return(); Pop(0)

0x11bc: PushEmpty()
0x11bd: Push((int) 10)
0x11be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11bf: IF (Stack[-1] == 0) GOTO 0x11e1; Pop(1)

0x11c0: PushEmpty()
0x11c1: Call2 0x11b8

0x11c2: Pop(0)
0x11c3: PushEmpty(bool)
0x11c4: Stack[-1] = (bool) 0
0x11c5: PushEmpty(bool)
0x11c6: Call2 0x128e

0x11c7: Pop(0)
0x11c8: IF (Stack[-1] == 0) GOTO 0x11ce; Pop(1)

0x11c9: PushEmpty(bool)
0x11ca: Call2 0x1199

0x11cb: Pop(0)
0x11cc: IF (Stack[-1] == 0) GOTO 0x11ce; Pop(1)

0x11cd: Stack[-1] = (bool) 1
0x11ce: IF (Stack[-1] == 0) GOTO 0x11db; Pop(1)

0x11cf: PushEmpty(bool)
0x11d0: Call2 0x1185

0x11d1: Pop(0)
0x11d2: IF (Stack[-1] == 0) GOTO 0x11da; Pop(1)

0x11d3: PushEmpty(bool, object)
0x11d4: PushEmpty(object)
0x11d5: Call2 0x13a9

0x11d6: Stack[-2] = Stack[-1]
0x11d7: Pop(1)
0x11d8: Call2 0x1324

0x11d9: Pop(2)
0x11da: GOTO 0x11e1

0x11db: PushEmpty()
0x11dc: Call2 0x1194

0x11dd: Pop(0)
0x11de: PushEmpty()
0x11df: Call2 0x11af

0x11e0: Pop(0)
0x11e1: Return(); Pop(0)

0x11e2: PushEmpty()
0x11e3: Call2 0x126e

0x11e4: Pop(0)
0x11e5: PushEmpty()
0x11e6: Call2 0x11b8

0x11e7: Pop(0)
0x11e8: @ lshStopSpeech()
0x11e9: Pop(0)
0x11ea: @ lshStopAnimation()
0x11eb: Pop(0)
0x11ec: @ StopAsync()
0x11ed: Pop(0)
0x11ee: @ Hold()
0x11ef: Pop(0)
0x11f0: Return(); Pop(0)

0x11f1: @ StopGroup0()
0x11f2: Pop(0)
0x11f3: PushEmpty()
0x11f4: Call2 0x11b8

0x11f5: Pop(0)
0x11f6: PushEmpty(string)
0x11f7: Stack[-1] = "Neutral"
0x11f8: Call2 0x1374

0x11f9: Pop(1)
0x11fa: PushEmpty()
0x11fb: Call2 0x11af

0x11fc: Pop(0)
0x11fd: Return(); Pop(0)

0x11fe: PushEmpty()
0x11ff: Push(Stack[-1])
0x1200: IF (Stack[-1] == 0) GOTO 0x1205; Pop(1)

0x1201: PushEmpty()
0x1202: Call2 0x11af

0x1203: Pop(0)
0x1204: GOTO 0x1209

0x1205: PushEmpty(string)
0x1206: Stack[-1] = "Neutral"
0x1207: Call2 0x1374

0x1208: Pop(1)
0x1209: Return(); Pop(0)

0x120a: PushEmpty(bool, bool)
0x120b: @ IsOverrideActive(Stack[-1])
0x120c: Pop(0)
0x120d: Pop(0); Push((bool) Stack[-1] == 0)
0x120e: IF (Stack[-1] == 0) GOTO 0x1226; Pop(1)

0x120f: EventDisable(0)
0x1210: PushEmpty()
0x1211: Call2 0x126e

0x1212: Pop(0)
0x1213: PushEmpty(bool, object)
0x1214: Stack[-1] = Stack[-5]
0x1215: Call2 0x1285

0x1216: Pop(2)
0x1217: EventEnable(0)
0x1218: PushEmpty(object)
0x1219: Stack[-1] = Stack[-4]
0x121a: Call2 0x1792

0x121b: Pop(1)
0x121c: PushEmpty(string)
0x121d: Stack[-1] = "Neutral"
0x121e: Call2 0x1374

0x121f: Pop(1)
0x1220: PushEmpty()
0x1221: Call2 0x11b8

0x1222: Pop(0)
0x1223: PushEmpty()
0x1224: Call2 0x11af

0x1225: Pop(0)
0x1226: Return(); Pop(2)

0x1227: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x1228: @ WaitForAnimEnd()
0x1229: Pop(0)
0x122a: PushEmpty(bool)
0x122b: Call2 0x128e

0x122c: Pop(0)
0x122d: Pop(1); Push((bool) Stack[-1] == 0)
0x122e: IF (Stack[-1] == 0) GOTO 0x1230; Pop(1)

0x122f: Return(); Pop(12)

0x1230: PushEmpty(int)
0x1231: Call2 0x1435

0x1232: Stack[-7] = Stack[-1]
0x1233: Pop(1)
0x1234: Stack[-5] = (int) 0
0x1235: PushEmpty(bool)
0x1236: Stack[-1] = (bool) 0
0x1237: Push((int) 5)
0x1238: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x1239: IF (Stack[-1] == 0) GOTO 0x123f; Pop(1)

0x123a: PushEmpty(bool)
0x123b: Call2 0x128e

0x123c: Pop(0)
0x123d: IF (Stack[-1] == 0) GOTO 0x123f; Pop(1)

0x123e: Stack[-1] = (bool) 1
0x123f: IF (Stack[-1] == 0) GOTO 0x1269; Pop(1)

0x1240: Pop(0); Push((bool) Stack[-6] == 0)
0x1241: IF (Stack[-1] == 0) GOTO 0x1249; Pop(1)

0x1242: Push((int) 3)
0x1243: @ Sleep(Stack[-1], Stack[-5])
0x1244: Pop(1)
0x1245: Pop(0); Push((bool) Stack[-4] == 0)
0x1246: IF (Stack[-1] == 0) GOTO 0x1248; Pop(1)

0x1247: GOTO 0x1269

0x1248: GOTO 0x125e

0x1249: @ irand(Stack[-3], Stack[-6])
0x124a: Pop(0)
0x124b: Push((int) 5)
0x124c: @ irand(Stack[-3], Stack[-1])
0x124d: Pop(1)
0x124e: Push((int) 0)
0x124f: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x1250: IF (Stack[-1] == 0) GOTO 0x1252; Pop(1)

0x1251: Stack[-3] = (int) 0
0x1252: Push("all")
0x1253: PushEmpty(string, int)
0x1254: Stack[-1] = Stack[-6]
0x1255: Call2 0x142e

0x1256: Pop(1)
0x1257: @ PlayAnimation(Stack[-2], Stack[-1])
0x1258: Pop(2)
0x1259: @ WaitForAnimEnd(Stack[-1])
0x125a: Pop(0)
0x125b: Pop(0); Push((bool) Stack[-1] == 0)
0x125c: IF (Stack[-1] == 0) GOTO 0x125e; Pop(1)

0x125d: GOTO 0x1269

0x125e: PushEmpty(bool)
0x125f: Call2 0x126c

0x1260: Pop(0)
0x1261: Pop(1); Push((bool) Stack[-1] == 0)
0x1262: IF (Stack[-1] == 0) GOTO 0x1264; Pop(1)

0x1263: GOTO 0x1269

0x1264: @ ResetAAS()
0x1265: Pop(0)
0x1266: Push((int) 1)
0x1267: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x1268: GOTO 0x1235

0x1269: @ ResetAAS()
0x126a: Pop(0)
0x126b: Return(); Pop(12)

0x126c: Stack[-1] = (bool) 1
0x126d: Return(); Pop(0)

0x126e: @ StopAnimation()
0x126f: Pop(0)
0x1270: @ StopGroup0()
0x1271: Pop(0)
0x1272: Return(); Pop(0)

0x1273: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1274: @ GetPosition(Stack[-3])
0x1275: Pop(0)
0x1276: @@ GetPosition(Stack[-2])
0x1277: Pop(0)
0x1278: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1279: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x127a: Return(); Pop(6)

0x127b: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x127c: @ GetPosition(Stack[-3])
0x127d: Pop(0)
0x127e: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x127f: Push(CvectorIndex(Stack[-2], 0))
0x1280: Push(CvectorIndex(Stack[-3], 2))
0x1281: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x1282: Pop(2)
0x1283: Stack[-8] = Stack[-1]
0x1284: Return(); Pop(6)

0x1285: PushEmpty(cvector, cvector)
0x1286: @@ GetPosition(Stack[-1])
0x1287: Pop(0)
0x1288: PushEmpty(bool, cvector)
0x1289: Stack[-1] = Stack[-3]
0x128a: Call2 0x127b

0x128b: Stack[-6] = Stack[-2]
0x128c: Pop(2)
0x128d: Return(); Pop(2)

0x128e: PushEmpty(bool, bool)
0x128f: @ IsLoaded(Stack[-1])
0x1290: Pop(0)
0x1291: Stack[-3] = Stack[-1]
0x1292: Return(); Pop(2)

0x1293: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1294: @@ GetPosition(Stack[-8])
0x1295: Pop(0)
0x1296: @@ GetEyesHeight(Stack[-9])
0x1297: Pop(0)
0x1298: Push(CvectorIndex(Stack[-8], 1))
0x1299: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x129a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x129b: @ GetPosition(Stack[-7])
0x129c: Pop(0)
0x129d: @ GetEyesHeight(Stack[-9])
0x129e: Pop(0)
0x129f: Push(CvectorIndex(Stack[-7], 1))
0x12a0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x12a1: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x12a2: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x12a3: Push(CvectorIndex(Stack[-6], 1))
0x12a4: Stack[-1] = (int) 0
0x12a5: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x12a6: Pop(0); Push(Stack[-6] | Stack[-6]);
0x12a7: Pop(1); Push(Sqrt(Stack[-1]))
0x12a8: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x12a9: Stack[-5] = -Stack[-6]; Pop(0);
0x12aa: Pop(0); Push(Stack[-6] * Stack[-19]);
0x12ab: PushEmpty(cvector, cvector)
0x12ac: Push(CVector(0.0, 1.0, 0.0))
0x12ad: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x12ae: Call2 0x13af

0x12af: Pop(1)
0x12b0: Push((int) 25)
0x12b1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12b2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12b3: Push(CVector(0.0, 10.0, 0.0))
0x12b4: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x12b5: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x12b6: @ IsOverrideActive(Stack[-2])
0x12b7: Pop(0)
0x12b8: Push(Stack[-2])
0x12b9: IF (Stack[-1] == 0) GOTO 0x12bc; Pop(1)

0x12ba: Stack[-21] = (bool) 0
0x12bb: Return(); Pop(18)

0x12bc: @ StopWorld()
0x12bd: Pop(0)
0x12be: Push((bool) 1)
0x12bf: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x12c0: Pop(1)
0x12c1: Push(CvectorIndex(Stack[-4], 0))
0x12c2: Push(CvectorIndex(Stack[-5], 2))
0x12c3: @ Rotate(Stack[-2], Stack[-1])
0x12c4: Pop(2)
0x12c5: PushEmpty(bool)
0x12c6: Call2 0x144e

0x12c7: Pop(0)
0x12c8: IF (Stack[-1] == 0) GOTO 0x12ca; Pop(1)

0x12c9: GOTO 0x12d2

0x12ca: Push("head")
0x12cb: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x12cc: Pop(1)
0x12cd: Push(Stack[-1])
0x12ce: IF (Stack[-1] == 0) GOTO 0x12d2; Pop(1)

0x12cf: Push("head")
0x12d0: @ LookAsyncCamera(Stack[-1])
0x12d1: Pop(1)
0x12d2: @ CameraWaitForPlayFinish()
0x12d3: Pop(0)
0x12d4: @ ResumeWorld()
0x12d5: Pop(0)
0x12d6: Stack[-21] = (bool) 1
0x12d7: Return(); Pop(18)

0x12d8: PushEmpty(bool, bool)
0x12d9: Push((bool) 1)
0x12da: @ CameraSwitchToNormal(Stack[-1])
0x12db: Pop(1)
0x12dc: PushEmpty(bool)
0x12dd: Call2 0x144e

0x12de: Pop(0)
0x12df: IF (Stack[-1] == 0) GOTO 0x12e1; Pop(1)

0x12e0: GOTO 0x12e9

0x12e1: Push("head")
0x12e2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x12e3: Pop(1)
0x12e4: Push(Stack[-1])
0x12e5: IF (Stack[-1] == 0) GOTO 0x12e9; Pop(1)

0x12e6: Push("head")
0x12e7: @ UnlookAsync(Stack[-1])
0x12e8: Pop(1)
0x12e9: Return(); Pop(2)

0x12ea: PushEmpty(int, int, int, int)
0x12eb: Push("voice_common")
0x12ec: @ GetVariable(Stack[-1], Stack[-3])
0x12ed: Pop(1)
0x12ee: Push(Stack[-2])
0x12ef: IF (Stack[-1] == 0) GOTO 0x1310; Pop(1)

0x12f0: PushEmpty(bool, object)
0x12f1: Stack[-1] = Stack[-7]
0x12f2: Call2 0x1324

0x12f3: Pop(1)
0x12f4: Pop(1); Push((bool) Stack[-1] == 0)
0x12f5: IF (Stack[-1] == 0) GOTO 0x12fe; Pop(1)

0x12f6: PushEmpty(bool, object)
0x12f7: Stack[-1] = Stack[-7]
0x12f8: Call2 0x1349

0x12f9: Pop(1)
0x12fa: Pop(1); Push((bool) Stack[-1] == 0)
0x12fb: IF (Stack[-1] == 0) GOTO 0x12fe; Pop(1)

0x12fc: Stack[-6] = (bool) 0
0x12fd: Return(); Pop(4)

0x12fe: Push((int) 2)
0x12ff: @ irand(Stack[-2], Stack[-1])
0x1300: Pop(1)
0x1301: Push(Stack[-1])
0x1302: IF (Stack[-1] == 0) GOTO 0x130b; Pop(1)

0x1303: Push("voice_common")
0x1304: Push((int) 1)
0x1305: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1306: Push((int) 3)
0x1307: Pop(2); Push(Stack[-2] % Stack[-1]);
0x1308: @ SetVariable(Stack[-2], Stack[-1])
0x1309: Pop(2)
0x130a: GOTO 0x130f

0x130b: Push("voice_common")
0x130c: Push((int) 0)
0x130d: @ SetVariable(Stack[-2], Stack[-1])
0x130e: Pop(2)
0x130f: GOTO 0x1322

0x1310: PushEmpty(bool, object)
0x1311: Stack[-1] = Stack[-7]
0x1312: Call2 0x1349

0x1313: Pop(1)
0x1314: Pop(1); Push((bool) Stack[-1] == 0)
0x1315: IF (Stack[-1] == 0) GOTO 0x131e; Pop(1)

0x1316: PushEmpty(bool, object)
0x1317: Stack[-1] = Stack[-7]
0x1318: Call2 0x1324

0x1319: Pop(1)
0x131a: Pop(1); Push((bool) Stack[-1] == 0)
0x131b: IF (Stack[-1] == 0) GOTO 0x131e; Pop(1)

0x131c: Stack[-6] = (bool) 0
0x131d: Return(); Pop(4)

0x131e: Push("voice_common")
0x131f: Push((int) 1)
0x1320: @ SetVariable(Stack[-2], Stack[-1])
0x1321: Pop(2)
0x1322: Stack[-6] = (bool) 1
0x1323: Return(); Pop(4)

0x1324: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1325: Stack[-5] = "c"
0x1326: Stack[-4] = (int) 0
0x1327: Push((int) 1)
0x1328: IF (Stack[-1] == 0) GOTO 0x1334; Pop(1)

0x1329: Push((int) 1)
0x132a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x132b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x132c: @@ HasProperty(Stack[-1], Stack[-4])
0x132d: Pop(1)
0x132e: Pop(0); Push((bool) Stack[-3] == 0)
0x132f: IF (Stack[-1] == 0) GOTO 0x1331; Pop(1)

0x1330: GOTO 0x1334

0x1331: Push((int) 1)
0x1332: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1333: GOTO 0x1327

0x1334: Pop(0); Push((bool) Stack[-4] == 0)
0x1335: IF (Stack[-1] == 0) GOTO 0x1338; Pop(1)

0x1336: Stack[-12] = (bool) 0
0x1337: Return(); Pop(10)

0x1338: Stack[-2] = (int) 0
0x1339: Push((int) 1)
0x133a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x133b: IF (Stack[-1] == 0) GOTO 0x133e; Pop(1)

0x133c: @ irand(Stack[-2], Stack[-4])
0x133d: Pop(0)
0x133e: Push((int) 1)
0x133f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1340: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1341: @@ GetProperty(Stack[-1], Stack[-2])
0x1342: Pop(1)
0x1343: PushEmpty(bool, string)
0x1344: Stack[-1] = Stack[-3]
0x1345: Call2 0x1393

0x1346: Stack[-14] = Stack[-2]
0x1347: Pop(2)
0x1348: Return(); Pop(10)

0x1349: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x134a: Push("d")
0x134b: PushEmpty(int)
0x134c: Call2 0x141f

0x134d: Pop(0)
0x134e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x134f: Push("m")
0x1350: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x1351: Stack[-4] = (int) 0
0x1352: Push((int) 1)
0x1353: IF (Stack[-1] == 0) GOTO 0x135f; Pop(1)

0x1354: Push((int) 1)
0x1355: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1356: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1357: @@ HasProperty(Stack[-1], Stack[-4])
0x1358: Pop(1)
0x1359: Pop(0); Push((bool) Stack[-3] == 0)
0x135a: IF (Stack[-1] == 0) GOTO 0x135c; Pop(1)

0x135b: GOTO 0x135f

0x135c: Push((int) 1)
0x135d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x135e: GOTO 0x1352

0x135f: Pop(0); Push((bool) Stack[-4] == 0)
0x1360: IF (Stack[-1] == 0) GOTO 0x1363; Pop(1)

0x1361: Stack[-12] = (bool) 0
0x1362: Return(); Pop(10)

0x1363: Stack[-2] = (int) 0
0x1364: Push((int) 1)
0x1365: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1366: IF (Stack[-1] == 0) GOTO 0x1369; Pop(1)

0x1367: @ irand(Stack[-2], Stack[-4])
0x1368: Pop(0)
0x1369: Push((int) 1)
0x136a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x136b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x136c: @@ GetProperty(Stack[-1], Stack[-2])
0x136d: Pop(1)
0x136e: PushEmpty(bool, string)
0x136f: Stack[-1] = Stack[-3]
0x1370: Call2 0x1393

0x1371: Stack[-14] = Stack[-2]
0x1372: Pop(2)
0x1373: Return(); Pop(10)

0x1374: PushEmpty(bool, float, float, bool, float, float)
0x1375: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1376: Pop(0)
0x1377: Push(Stack[-3])
0x1378: IF (Stack[-1] == 0) GOTO 0x137f; Pop(1)

0x1379: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x137a: Pop(0)
0x137b: Push((bool) 0)
0x137c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x137d: Pop(1)
0x137e: GOTO 0x1383

0x137f: Push("Can't find lsh animation : ")
0x1380: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1381: @ Trace(Stack[-1])
0x1382: Pop(1)
0x1383: Return(); Pop(6)

0x1384: PushEmpty(bool, float, float, bool, float, float)
0x1385: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1386: Pop(0)
0x1387: Push(Stack[-3])
0x1388: IF (Stack[-1] == 0) GOTO 0x138e; Pop(1)

0x1389: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x138a: Pop(0)
0x138b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x138c: Pop(0)
0x138d: GOTO 0x1392

0x138e: Push("Can't find lsh animation : ")
0x138f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1390: @ Trace(Stack[-1])
0x1391: Pop(1)
0x1392: Return(); Pop(6)

0x1393: PushEmpty(bool, bool)
0x1394: PushEmpty(bool)
0x1395: Call2 0x144e

0x1396: Pop(0)
0x1397: IF (Stack[-1] == 0) GOTO 0x13a0; Pop(1)

0x1398: @ lshHasSpeech(Stack[-1], Stack[-3])
0x1399: Pop(0)
0x139a: Push(Stack[-1])
0x139b: IF (Stack[-1] == 0) GOTO 0x13a0; Pop(1)

0x139c: @ lshPlaySpeech(Stack[-3])
0x139d: Pop(0)
0x139e: Stack[-4] = (bool) 1
0x139f: Return(); Pop(2)

0x13a0: Stack[-4] = (bool) 0
0x13a1: Return(); Pop(2)

0x13a2: PushEmpty(bool)
0x13a3: Call2 0x144e

0x13a4: Pop(0)
0x13a5: IF (Stack[-1] == 0) GOTO 0x13a8; Pop(1)

0x13a6: @ lshStopSpeech()
0x13a7: Pop(0)
0x13a8: Return(); Pop(0)

0x13a9: PushEmpty(object, object)
0x13aa: @ self(Stack[-1])
0x13ab: Pop(0)
0x13ac: Stack[-3] = Stack[-1]
0x13ad: Return(); Pop(2)

0x13ae: Stack[-1] = 0
0x13af: PushEmpty(float, float)
0x13b0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x13b1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x13b2: Push((float)0.0)
0x13b3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x13b4: IF (Stack[-1] == 0) GOTO 0x13b7; Pop(1)

0x13b5: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x13b6: Return(); Pop(2)

0x13b7: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x13b8: Return(); Pop(2)

0x13b9: PushEmpty(int, int)
0x13ba: @ GetVariable(Stack[-3], Stack[-1])
0x13bb: Pop(0)
0x13bc: Stack[-4] = Stack[-1]
0x13bd: Return(); Pop(2)

0x13be: PushEmpty(object, object)
0x13bf: @ CreateIntVector(Stack[-1])
0x13c0: Pop(0)
0x13c1: @@ add(Stack[-4])
0x13c2: Pop(0)
0x13c3: @@ add(Stack[-3])
0x13c4: Pop(0)
0x13c5: Push((int) 3)
0x13c6: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x13c7: Pop(1)
0x13c8: Return(); Pop(2)

0x13c9: Stack[-1] = 0
0x13ca: PushEmpty(object, object)
0x13cb: @ CreateIntVector(Stack[-1])
0x13cc: Pop(0)
0x13cd: @@ add(Stack[-4])
0x13ce: Pop(0)
0x13cf: @@ add(Stack[-3])
0x13d0: Pop(0)
0x13d1: Push((int) 4)
0x13d2: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x13d3: Pop(1)
0x13d4: Return(); Pop(2)

0x13d5: Stack[-1] = 0
0x13d6: PushEmpty(int, int, bool, int, int, bool)
0x13d7: @@ GetItemID(Stack[-3])
0x13d8: Pop(0)
0x13d9: Push("Category")
0x13da: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x13db: Pop(1)
0x13dc: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x13dd: Pop(0)
0x13de: Pop(0); Push((bool) Stack[-1] == 0)
0x13df: IF (Stack[-1] == 0) GOTO 0x13e3; Pop(1)

0x13e0: @@ DropItems(Stack[-8], Stack[-7])
0x13e1: Pop(0)
0x13e2: GOTO 0x13e8

0x13e3: PushEmpty(int, int)
0x13e4: Stack[-2] = Stack[-5]
0x13e5: Stack[-1] = Stack[-9]
0x13e6: Call2 0x13be

0x13e7: Pop(2)
0x13e8: Return(); Pop(6)

0x13e9: PushEmpty(object, object)
0x13ea: @ CreateInvItem(Stack[-1])
0x13eb: Pop(0)
0x13ec: @@ SetItemName(Stack[-4])
0x13ed: Pop(0)
0x13ee: PushEmpty(object, object, int)
0x13ef: Stack[-3] = Stack[-8]
0x13f0: Stack[-2] = Stack[-4]
0x13f1: Stack[-1] = Stack[-6]
0x13f2: Call2 0x13d6

0x13f3: Pop(3)
0x13f4: Return(); Pop(2)

0x13f5: Stack[-1] = 0
0x13f6: PushEmpty(int, bool, int, bool)
0x13f7: @ GetInvItemByName(Stack[-2], Stack[-5])
0x13f8: Pop(0)
0x13f9: @@ HasItem(Stack[-2], Stack[-1])
0x13fa: Pop(0)
0x13fb: Stack[-7] = Stack[-1]
0x13fc: Return(); Pop(4)

0x13fd: PushEmpty(int, int, bool, int, int, bool)
0x13fe: @ GetInvItemByName(Stack[-3], Stack[-7])
0x13ff: Pop(0)
0x1400: Push("Category")
0x1401: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x1402: Pop(1)
0x1403: @@ RemoveItemByType(Stack[-1], Stack[-3], Stack[-2])
0x1404: Pop(0)
0x1405: Push(Stack[-1])
0x1406: IF (Stack[-1] == 0) GOTO 0x140c; Pop(1)

0x1407: PushEmpty(int, int)
0x1408: Stack[-2] = Stack[-5]
0x1409: Stack[-1] = (int) 1
0x140a: Call2 0x13ca

0x140b: Pop(2)
0x140c: Stack[-9] = Stack[-1]
0x140d: Return(); Pop(6)

0x140e: PushEmpty(object, object)
0x140f: @ FindActor(Stack[-1], Stack[-4])
0x1410: Pop(0)
0x1411: Pop(0); Push((bool) Stack[-1] == 0)
0x1412: IF (Stack[-1] == 0) GOTO 0x1415; Pop(1)

0x1413: Stack[-5] = (bool) 0
0x1414: Return(); Pop(2)

0x1415: @ Trigger(Stack[-1], Stack[-3])
0x1416: Pop(0)
0x1417: Stack[-5] = (bool) 1
0x1418: Return(); Pop(2)

0x1419: Stack[-1] = 0
0x141a: PushEmpty(float, float)
0x141b: @ GetGameTime(Stack[-1])
0x141c: Pop(0)
0x141d: Stack[-3] = Stack[-1]
0x141e: Return(); Pop(2)

0x141f: PushEmpty(float, float)
0x1420: @ GetGameTime(Stack[-1])
0x1421: Pop(0)
0x1422: Push((int) 1)
0x1423: PushEmpty(int)
0x1424: Push((int) 24)
0x1425: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1426: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1427: Return(); Pop(2)

0x1428: PushEmpty()
0x1429: PushEmpty(int)
0x142a: Call2 0x141f

0x142b: Pop(0)
0x142c: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x142d: Return(); Pop(0)

0x142e: PushEmpty(string, string)
0x142f: Stack[-1] = "idle"
0x1430: Push(Stack[-3])
0x1431: IF (Stack[-1] == 0) GOTO 0x1433; Pop(1)

0x1432: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1433: Stack[-4] = Stack[-1]
0x1434: Return(); Pop(2)

0x1435: PushEmpty(int, bool, int, bool)
0x1436: Stack[-2] = (int) 0
0x1437: Push("all")
0x1438: PushEmpty(string, int)
0x1439: Stack[-1] = Stack[-5]
0x143a: Call2 0x142e

0x143b: Pop(1)
0x143c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x143d: Pop(2)
0x143e: Pop(0); Push((bool) Stack[-1] == 0)
0x143f: IF (Stack[-1] == 0) GOTO 0x1441; Pop(1)

0x1440: GOTO 0x1444

0x1441: Push((int) 1)
0x1442: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1443: GOTO 0x1437

0x1444: Stack[-5] = Stack[-2]
0x1445: Return(); Pop(4)

0x1446: Stack[-1] = (int) 515551
0x1447: Return(); Pop(0)

0x1448: Stack[-1] = (int) 502876
0x1449: Return(); Pop(0)

0x144a: Stack[-1] = "ui/NPC_Rubin.png"
0x144b: Return(); Pop(0)

0x144c: Stack[-1] = "ui/NPC_Rubin_b.png"
0x144d: Return(); Pop(0)

0x144e: Stack[-1] = (bool) 1
0x144f: Return(); Pop(0)

0x1450: PushEmpty()
0x1451: Push("playsound")
0x1452: Push("giveitem")
0x1453: @ TriggerWorld(Stack[-2], Stack[-1])
0x1454: Pop(2)
0x1455: Return(); Pop(0)

0x1456: PushEmpty()
0x1457: PushEmpty(bool, object, string)
0x1458: Stack[-2] = Stack[-5]
0x1459: Stack[-1] = "d3q01_blood"
0x145a: Call2 0x13fd

0x145b: Pop(3)
0x145c: Return(); Pop(0)

0x145d: PushEmpty(object, object)
0x145e: Push("d10q02")
0x145f: Push((int) 2)
0x1460: @ SetVariable(Stack[-2], Stack[-1])
0x1461: Pop(2)
0x1462: PushEmpty(object)
0x1463: Call2 0x174f

0x1464: Stack[-2] = Stack[-1]
0x1465: Pop(1)
0x1466: Push("d10q02RubinGotoMaria")
0x1467: Push("pt_map_maria")
0x1468: Push((int) 0)
0x1469: Push((int) 515297)
0x146a: PushEmpty(float)
0x146b: Call2 0x141a

0x146c: Pop(0)
0x146d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x146e: Pop(5)
0x146f: PushEmpty()
0x1470: Call2 0x16cb

0x1471: Pop(0)
0x1472: Return(); Pop(2)

0x1473: Stack[-1] = 0
0x1474: PushEmpty()
0x1475: Push("bluevaccine is given")
0x1476: @ Trace(Stack[-1])
0x1477: Pop(1)
0x1478: PushEmpty(object, string, int)
0x1479: Stack[-3] = Stack[-5]
0x147a: Stack[-2] = "blue_vaccine"
0x147b: Stack[-1] = (int) 1
0x147c: Call2 0x13e9

0x147d: Pop(3)
0x147e: Return(); Pop(0)

0x147f: PushEmpty()
0x1480: Push("ood4Rubin1")
0x1481: Push((int) 1)
0x1482: @ SetVariable(Stack[-2], Stack[-1])
0x1483: Pop(2)
0x1484: Return(); Pop(0)

0x1485: PushEmpty()
0x1486: Push("ood4Rubin2")
0x1487: Push((int) 1)
0x1488: @ SetVariable(Stack[-2], Stack[-1])
0x1489: Pop(2)
0x148a: Return(); Pop(0)

0x148b: PushEmpty()
0x148c: Push("lens is given")
0x148d: @ Trace(Stack[-1])
0x148e: Pop(1)
0x148f: PushEmpty(object, string, int)
0x1490: Stack[-3] = Stack[-5]
0x1491: Stack[-2] = "lens"
0x1492: Stack[-1] = (int) 1
0x1493: Call2 0x13e9

0x1494: Pop(3)
0x1495: Return(); Pop(0)

0x1496: PushEmpty()
0x1497: Push("ood6Rubin1")
0x1498: Push((int) 1)
0x1499: @ SetVariable(Stack[-2], Stack[-1])
0x149a: Pop(2)
0x149b: Return(); Pop(0)

0x149c: PushEmpty()
0x149d: Push("playsound")
0x149e: Push("giveitem")
0x149f: @ TriggerWorld(Stack[-2], Stack[-1])
0x14a0: Pop(2)
0x14a1: Return(); Pop(0)

0x14a2: PushEmpty(object, object)
0x14a3: Push("d3q01")
0x14a4: Push((int) 1)
0x14a5: @ SetVariable(Stack[-2], Stack[-1])
0x14a6: Pop(2)
0x14a7: PushEmpty(object)
0x14a8: Call2 0x174f

0x14a9: Stack[-2] = Stack[-1]
0x14aa: Pop(1)
0x14ab: Push("d3q01RubinGotoAlexandr")
0x14ac: Push("pt_map_alexandr")
0x14ad: Push((int) 1)
0x14ae: Push((int) 511151)
0x14af: PushEmpty(float)
0x14b0: Call2 0x141a

0x14b1: Pop(0)
0x14b2: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x14b3: Pop(5)
0x14b4: PushEmpty()
0x14b5: Call2 0x16d8

0x14b6: Pop(0)
0x14b7: PushEmpty()
0x14b8: Call2 0x16e5

0x14b9: Pop(0)
0x14ba: Return(); Pop(2)

0x14bb: Stack[-1] = 0
0x14bc: PushEmpty()
0x14bd: Push("ood3Rubin1")
0x14be: Push((int) 1)
0x14bf: @ SetVariable(Stack[-2], Stack[-1])
0x14c0: Pop(2)
0x14c1: Return(); Pop(0)

0x14c2: PushEmpty()
0x14c3: Push("ood3Rubin2")
0x14c4: Push((int) 1)
0x14c5: @ SetVariable(Stack[-2], Stack[-1])
0x14c6: Pop(2)
0x14c7: Return(); Pop(0)

0x14c8: PushEmpty()
0x14c9: Push("ood3Rubin3")
0x14ca: Push((int) 1)
0x14cb: @ SetVariable(Stack[-2], Stack[-1])
0x14cc: Pop(2)
0x14cd: Return(); Pop(0)

0x14ce: PushEmpty()
0x14cf: Push("ood3Rubin4")
0x14d0: Push((int) 1)
0x14d1: @ SetVariable(Stack[-2], Stack[-1])
0x14d2: Pop(2)
0x14d3: Return(); Pop(0)

0x14d4: PushEmpty()
0x14d5: PushEmpty(object, string, float)
0x14d6: PushEmpty(object)
0x14d7: Call2 0x174f

0x14d8: Stack[-4] = Stack[-1]
0x14d9: Pop(1)
0x14da: Stack[-2] = "pt_map_alexandr"
0x14db: Stack[-1] = (int) 2
0x14dc: Call2 0x1760

0x14dd: Pop(3)
0x14de: PushEmpty(object)
0x14df: Call2 0x174f

0x14e0: Pop(0)
0x14e1: @@ ShowMap(Stack[-1])
0x14e2: Pop(1)
0x14e3: Return(); Pop(0)

0x14e4: PushEmpty()
0x14e5: PushEmpty(object, string, float)
0x14e6: PushEmpty(object)
0x14e7: Call2 0x174f

0x14e8: Stack[-4] = Stack[-1]
0x14e9: Pop(1)
0x14ea: Stack[-2] = "pt_map_bigvlad"
0x14eb: Stack[-1] = (int) 2
0x14ec: Call2 0x1760

0x14ed: Pop(3)
0x14ee: PushEmpty(object)
0x14ef: Call2 0x174f

0x14f0: Pop(0)
0x14f1: @@ ShowMap(Stack[-1])
0x14f2: Pop(1)
0x14f3: Return(); Pop(0)

0x14f4: PushEmpty()
0x14f5: PushEmpty()
0x14f6: Call2 0x16f2

0x14f7: Pop(0)
0x14f8: PushEmpty(bool, string, string)
0x14f9: Stack[-2] = "quest_d3_01"
0x14fa: Stack[-1] = "completed"
0x14fb: Call2 0x140e

0x14fc: Pop(3)
0x14fd: Return(); Pop(0)

0x14fe: PushEmpty()
0x14ff: Push("d3RubinToldWhereIsSimon")
0x1500: Push((int) 1)
0x1501: @ SetVariable(Stack[-2], Stack[-1])
0x1502: Pop(2)
0x1503: Return(); Pop(0)

0x1504: PushEmpty()
0x1505: Push("ood5Rubin1")
0x1506: Push((int) 1)
0x1507: @ SetVariable(Stack[-2], Stack[-1])
0x1508: Pop(2)
0x1509: Return(); Pop(0)

0x150a: PushEmpty(object, object)
0x150b: Push("d5q01")
0x150c: Push((int) 1)
0x150d: @ SetVariable(Stack[-2], Stack[-1])
0x150e: Pop(2)
0x150f: PushEmpty(object)
0x1510: Call2 0x174f

0x1511: Stack[-2] = Stack[-1]
0x1512: Pop(1)
0x1513: Push("d5q01RubinGotoBigVlad")
0x1514: Push("pt_map_bigvlad")
0x1515: Push((int) 1)
0x1516: Push((int) 511956)
0x1517: PushEmpty(float)
0x1518: Call2 0x141a

0x1519: Pop(0)
0x151a: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x151b: Pop(5)
0x151c: Push("d5q01RubinGotoBigVladSelf")
0x151d: Push("pt_map_rubin")
0x151e: Push((int) 1)
0x151f: Push((int) 515348)
0x1520: PushEmpty(float)
0x1521: Call2 0x141a

0x1522: Pop(0)
0x1523: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1524: Pop(5)
0x1525: PushEmpty()
0x1526: Call2 0x16ff

0x1527: Pop(0)
0x1528: PushEmpty()
0x1529: Call2 0x170c

0x152a: Pop(0)
0x152b: Return(); Pop(2)

0x152c: Stack[-1] = 0
0x152d: PushEmpty()
0x152e: Push("ood5Rubin2")
0x152f: Push((int) 1)
0x1530: @ SetVariable(Stack[-2], Stack[-1])
0x1531: Pop(2)
0x1532: Return(); Pop(0)

0x1533: PushEmpty(object, object, int, object, object, int)
0x1534: PushEmpty(object)
0x1535: Call2 0x174f

0x1536: Stack[-4] = Stack[-1]
0x1537: Pop(1)
0x1538: Push("d5q01AlexandrGotoKaterina")
0x1539: @@ FindMark(Stack[-3], Stack[-1])
0x153a: Pop(1)
0x153b: Push(Stack[-2])
0x153c: IF (Stack[-1] == 0) GOTO 0x153f; Pop(1)

0x153d: @@ Remove()
0x153e: Pop(0)
0x153f: Push("d5q01BigVladGotoAlexandr")
0x1540: @@ FindMark(Stack[-3], Stack[-1])
0x1541: Pop(1)
0x1542: Push(Stack[-2])
0x1543: IF (Stack[-1] == 0) GOTO 0x1546; Pop(1)

0x1544: @@ Remove()
0x1545: Pop(0)
0x1546: Push("d5q01BurahMeeting")
0x1547: @@ FindMark(Stack[-3], Stack[-1])
0x1548: Pop(1)
0x1549: Push(Stack[-2])
0x154a: IF (Stack[-1] == 0) GOTO 0x154d; Pop(1)

0x154b: @@ Remove()
0x154c: Pop(0)
0x154d: Push("d7q04NudeGotoAndrei")
0x154e: @@ FindMark(Stack[-3], Stack[-1])
0x154f: Pop(1)
0x1550: Push(Stack[-2])
0x1551: IF (Stack[-1] == 0) GOTO 0x1554; Pop(1)

0x1552: @@ Remove()
0x1553: Pop(0)
0x1554: Push("d5q01GrifWantsMoney")
0x1555: @@ FindMark(Stack[-3], Stack[-1])
0x1556: Pop(1)
0x1557: Push(Stack[-2])
0x1558: IF (Stack[-1] == 0) GOTO 0x155b; Pop(1)

0x1559: @@ Remove()
0x155a: Pop(0)
0x155b: Push("d5q01GrifWillHelp")
0x155c: @@ FindMark(Stack[-3], Stack[-1])
0x155d: Pop(1)
0x155e: Push(Stack[-2])
0x155f: IF (Stack[-1] == 0) GOTO 0x1562; Pop(1)

0x1560: @@ Remove()
0x1561: Pop(0)
0x1562: Push("d5q01BigVladGotoLara")
0x1563: @@ FindMark(Stack[-3], Stack[-1])
0x1564: Pop(1)
0x1565: Push(Stack[-2])
0x1566: IF (Stack[-1] == 0) GOTO 0x1569; Pop(1)

0x1567: @@ Remove()
0x1568: Pop(0)
0x1569: Push("d5q01PatrolGotoGrif")
0x156a: @@ FindMark(Stack[-3], Stack[-1])
0x156b: Pop(1)
0x156c: Push(Stack[-2])
0x156d: IF (Stack[-1] == 0) GOTO 0x1570; Pop(1)

0x156e: @@ Remove()
0x156f: Pop(0)
0x1570: Push("d5q01RubinGotoBigVlad")
0x1571: @@ FindMark(Stack[-3], Stack[-1])
0x1572: Pop(1)
0x1573: Push(Stack[-2])
0x1574: IF (Stack[-1] == 0) GOTO 0x1577; Pop(1)

0x1575: @@ Remove()
0x1576: Pop(0)
0x1577: Push("d5q01RubinGotoBigVladSelf")
0x1578: @@ FindMark(Stack[-3], Stack[-1])
0x1579: Pop(1)
0x157a: Push(Stack[-2])
0x157b: IF (Stack[-1] == 0) GOTO 0x157e; Pop(1)

0x157c: @@ Remove()
0x157d: Pop(0)
0x157e: PushEmpty()
0x157f: Call2 0x1719

0x1580: Pop(0)
0x1581: Push("d5q01_heart")
0x1582: Push((int) 1)
0x1583: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x1584: Pop(2)
0x1585: PushEmpty(bool, string, string)
0x1586: Stack[-2] = "quest_d5_01"
0x1587: Stack[-1] = "completed"
0x1588: Call2 0x140e

0x1589: Pop(3)
0x158a: Return(); Pop(6)

0x158b: Stack[-2] = 0
0x158c: Stack[-3] = 0
0x158d: PushEmpty(object, object)
0x158e: Push("d6RubinGoesToGeorg")
0x158f: Push((int) 1)
0x1590: @ SetVariable(Stack[-2], Stack[-1])
0x1591: Pop(2)
0x1592: Push("warehouse_rubin")
0x1593: @ GetSceneByName(Stack[-2], Stack[-1])
0x1594: Pop(1)
0x1595: Push("norubin")
0x1596: @ Trigger(Stack[-2], Stack[-1])
0x1597: Pop(1)
0x1598: Return(); Pop(2)

0x1599: Stack[-1] = 0
0x159a: PushEmpty()
0x159b: Push("whitevaccine is given")
0x159c: @ Trace(Stack[-1])
0x159d: Pop(1)
0x159e: PushEmpty(object, string, int)
0x159f: Stack[-3] = Stack[-5]
0x15a0: Stack[-2] = "white_vaccine"
0x15a1: Stack[-1] = (int) 1
0x15a2: Call2 0x13e9

0x15a3: Pop(3)
0x15a4: Return(); Pop(0)

0x15a5: PushEmpty()
0x15a6: PushEmpty(object, string, float)
0x15a7: PushEmpty(object)
0x15a8: Call2 0x174f

0x15a9: Stack[-4] = Stack[-1]
0x15aa: Pop(1)
0x15ab: Stack[-2] = "pt_map_maria"
0x15ac: Stack[-1] = (int) 2
0x15ad: Call2 0x1760

0x15ae: Pop(3)
0x15af: PushEmpty(object)
0x15b0: Call2 0x174f

0x15b1: Pop(0)
0x15b2: @@ ShowMap(Stack[-1])
0x15b3: Pop(1)
0x15b4: Return(); Pop(0)

0x15b5: PushEmpty()
0x15b6: Push("d3RubinVisit")
0x15b7: Push((int) 1)
0x15b8: @ SetVariable(Stack[-2], Stack[-1])
0x15b9: Pop(2)
0x15ba: Return(); Pop(0)

0x15bb: PushEmpty()
0x15bc: Push("d5RubinVisit")
0x15bd: Push((int) 1)
0x15be: @ SetVariable(Stack[-2], Stack[-1])
0x15bf: Pop(2)
0x15c0: Return(); Pop(0)

0x15c1: PushEmpty()
0x15c2: Push("ood5Rubin3")
0x15c3: Push((int) 1)
0x15c4: @ SetVariable(Stack[-2], Stack[-1])
0x15c5: Pop(2)
0x15c6: Return(); Pop(0)

0x15c7: PushEmpty()
0x15c8: PushEmpty(int, string)
0x15c9: Stack[-1] = "d10q02"
0x15ca: Call2 0x13b9

0x15cb: Pop(1)
0x15cc: Push((int) 1)
0x15cd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15ce: IF (Stack[-1] == 0) GOTO 0x15d1; Pop(1)

0x15cf: Stack[-2] = (bool) 1
0x15d0: Return(); Pop(0)

0x15d1: Stack[-2] = (bool) 0
0x15d2: Return(); Pop(0)

0x15d3: PushEmpty()
0x15d4: PushEmpty(int, string)
0x15d5: Stack[-1] = "microscope_d3q01_blood"
0x15d6: Call2 0x13b9

0x15d7: Pop(1)
0x15d8: Push((int) 0)
0x15d9: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x15da: IF (Stack[-1] == 0) GOTO 0x15dd; Pop(1)

0x15db: Stack[-2] = (bool) 1
0x15dc: Return(); Pop(0)

0x15dd: Stack[-2] = (bool) 0
0x15de: Return(); Pop(0)

0x15df: PushEmpty()
0x15e0: PushEmpty(int, string)
0x15e1: Stack[-1] = "ood4Rubin1"
0x15e2: Call2 0x13b9

0x15e3: Pop(1)
0x15e4: Push((int) 0)
0x15e5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15e6: IF (Stack[-1] == 0) GOTO 0x15e9; Pop(1)

0x15e7: Stack[-2] = (bool) 1
0x15e8: Return(); Pop(0)

0x15e9: Stack[-2] = (bool) 0
0x15ea: Return(); Pop(0)

0x15eb: PushEmpty()
0x15ec: PushEmpty(int, string)
0x15ed: Stack[-1] = "ood4Rubin2"
0x15ee: Call2 0x13b9

0x15ef: Pop(1)
0x15f0: Push((int) 0)
0x15f1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15f2: IF (Stack[-1] == 0) GOTO 0x15f5; Pop(1)

0x15f3: Stack[-2] = (bool) 1
0x15f4: Return(); Pop(0)

0x15f5: Stack[-2] = (bool) 0
0x15f6: Return(); Pop(0)

0x15f7: PushEmpty()
0x15f8: PushEmpty(int, string)
0x15f9: Stack[-1] = "ood6Rubin1"
0x15fa: Call2 0x13b9

0x15fb: Pop(1)
0x15fc: Push((int) 0)
0x15fd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15fe: IF (Stack[-1] == 0) GOTO 0x1601; Pop(1)

0x15ff: Stack[-2] = (bool) 1
0x1600: Return(); Pop(0)

0x1601: Stack[-2] = (bool) 0
0x1602: Return(); Pop(0)

0x1603: PushEmpty()
0x1604: PushEmpty(int, string)
0x1605: Stack[-1] = "d3q01"
0x1606: Call2 0x13b9

0x1607: Pop(1)
0x1608: Push((int) 0)
0x1609: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x160a: IF (Stack[-1] == 0) GOTO 0x160d; Pop(1)

0x160b: Stack[-2] = (bool) 1
0x160c: Return(); Pop(0)

0x160d: Stack[-2] = (bool) 0
0x160e: Return(); Pop(0)

0x160f: PushEmpty()
0x1610: PushEmpty(int, string)
0x1611: Stack[-1] = "ood3Rubin1"
0x1612: Call2 0x13b9

0x1613: Pop(1)
0x1614: Push((int) 0)
0x1615: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1616: IF (Stack[-1] == 0) GOTO 0x1619; Pop(1)

0x1617: Stack[-2] = (bool) 1
0x1618: Return(); Pop(0)

0x1619: Stack[-2] = (bool) 0
0x161a: Return(); Pop(0)

0x161b: PushEmpty()
0x161c: PushEmpty(int, string)
0x161d: Stack[-1] = "ood3Rubin2"
0x161e: Call2 0x13b9

0x161f: Pop(1)
0x1620: Push((int) 0)
0x1621: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1622: IF (Stack[-1] == 0) GOTO 0x1625; Pop(1)

0x1623: Stack[-2] = (bool) 1
0x1624: Return(); Pop(0)

0x1625: Stack[-2] = (bool) 0
0x1626: Return(); Pop(0)

0x1627: PushEmpty()
0x1628: PushEmpty(int, string)
0x1629: Stack[-1] = "ood3Rubin3"
0x162a: Call2 0x13b9

0x162b: Pop(1)
0x162c: Push((int) 0)
0x162d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x162e: IF (Stack[-1] == 0) GOTO 0x1631; Pop(1)

0x162f: Stack[-2] = (bool) 1
0x1630: Return(); Pop(0)

0x1631: Stack[-2] = (bool) 0
0x1632: Return(); Pop(0)

0x1633: PushEmpty()
0x1634: PushEmpty(int, string)
0x1635: Stack[-1] = "ood3Rubin4"
0x1636: Call2 0x13b9

0x1637: Pop(1)
0x1638: Push((int) 0)
0x1639: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x163a: IF (Stack[-1] == 0) GOTO 0x163d; Pop(1)

0x163b: Stack[-2] = (bool) 1
0x163c: Return(); Pop(0)

0x163d: Stack[-2] = (bool) 0
0x163e: Return(); Pop(0)

0x163f: PushEmpty()
0x1640: PushEmpty(int, string)
0x1641: Stack[-1] = "d3q01"
0x1642: Call2 0x13b9

0x1643: Pop(1)
0x1644: Push((int) 1000)
0x1645: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1646: IF (Stack[-1] == 0) GOTO 0x1649; Pop(1)

0x1647: Stack[-2] = (bool) 1
0x1648: Return(); Pop(0)

0x1649: Stack[-2] = (bool) 0
0x164a: Return(); Pop(0)

0x164b: PushEmpty()
0x164c: PushEmpty(bool, object, string)
0x164d: Stack[-2] = Stack[-4]
0x164e: Stack[-1] = "d3q01_blood"
0x164f: Call2 0x13f6

0x1650: Pop(2)
0x1651: IF (Stack[-1] == 0) GOTO 0x1654; Pop(1)

0x1652: Stack[-2] = (bool) 1
0x1653: Return(); Pop(0)

0x1654: Stack[-2] = (bool) 0
0x1655: Return(); Pop(0)

0x1656: PushEmpty()
0x1657: PushEmpty(int, string)
0x1658: Stack[-1] = "ood5Rubin1"
0x1659: Call2 0x13b9

0x165a: Pop(1)
0x165b: Push((int) 0)
0x165c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x165d: IF (Stack[-1] == 0) GOTO 0x1660; Pop(1)

0x165e: Stack[-2] = (bool) 1
0x165f: Return(); Pop(0)

0x1660: Stack[-2] = (bool) 0
0x1661: Return(); Pop(0)

0x1662: PushEmpty()
0x1663: PushEmpty(int, string)
0x1664: Stack[-1] = "d5q01"
0x1665: Call2 0x13b9

0x1666: Pop(1)
0x1667: Push((int) 7)
0x1668: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1669: IF (Stack[-1] == 0) GOTO 0x166c; Pop(1)

0x166a: Stack[-2] = (bool) 1
0x166b: Return(); Pop(0)

0x166c: Stack[-2] = (bool) 0
0x166d: Return(); Pop(0)

0x166e: PushEmpty()
0x166f: PushEmpty(int, string)
0x1670: Stack[-1] = "ood5Rubin2"
0x1671: Call2 0x13b9

0x1672: Pop(1)
0x1673: Push((int) 0)
0x1674: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1675: IF (Stack[-1] == 0) GOTO 0x1678; Pop(1)

0x1676: Stack[-2] = (bool) 1
0x1677: Return(); Pop(0)

0x1678: Stack[-2] = (bool) 0
0x1679: Return(); Pop(0)

0x167a: PushEmpty()
0x167b: PushEmpty(bool, object, string)
0x167c: Stack[-2] = Stack[-4]
0x167d: Stack[-1] = "d5q01_heart"
0x167e: Call2 0x13f6

0x167f: Pop(2)
0x1680: IF (Stack[-1] == 0) GOTO 0x1683; Pop(1)

0x1681: Stack[-2] = (bool) 1
0x1682: Return(); Pop(0)

0x1683: Stack[-2] = (bool) 0
0x1684: Return(); Pop(0)

0x1685: PushEmpty()
0x1686: PushEmpty(int, string)
0x1687: Stack[-1] = "d6RubinGoesToGeorg"
0x1688: Call2 0x13b9

0x1689: Pop(1)
0x168a: Push((int) 0)
0x168b: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x168c: IF (Stack[-1] == 0) GOTO 0x168f; Pop(1)

0x168d: Stack[-2] = (bool) 1
0x168e: Return(); Pop(0)

0x168f: Stack[-2] = (bool) 0
0x1690: Return(); Pop(0)

0x1691: PushEmpty()
0x1692: PushEmpty(int, string)
0x1693: Stack[-1] = "d5q01"
0x1694: Call2 0x13b9

0x1695: Pop(1)
0x1696: Push((int) 0)
0x1697: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1698: IF (Stack[-1] == 0) GOTO 0x169b; Pop(1)

0x1699: Stack[-2] = (bool) 1
0x169a: Return(); Pop(0)

0x169b: Stack[-2] = (bool) 0
0x169c: Return(); Pop(0)

0x169d: PushEmpty()
0x169e: PushEmpty(int, string)
0x169f: Stack[-1] = "ood5Rubin3"
0x16a0: Call2 0x13b9

0x16a1: Pop(1)
0x16a2: Push((int) 0)
0x16a3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16a4: IF (Stack[-1] == 0) GOTO 0x16a7; Pop(1)

0x16a5: Stack[-2] = (bool) 1
0x16a6: Return(); Pop(0)

0x16a7: Stack[-2] = (bool) 0
0x16a8: Return(); Pop(0)

0x16a9: PushEmpty()
0x16aa: PushEmpty(bool)
0x16ab: Stack[-1] = (bool) 0
0x16ac: PushEmpty(bool)
0x16ad: Stack[-1] = (bool) 0
0x16ae: PushEmpty(int, string)
0x16af: Stack[-1] = "d5q01"
0x16b0: Call2 0x13b9

0x16b1: Pop(1)
0x16b2: Push((int) 0)
0x16b3: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x16b4: IF (Stack[-1] == 0) GOTO 0x16bd; Pop(1)

0x16b5: PushEmpty(int, string)
0x16b6: Stack[-1] = "d5q01"
0x16b7: Call2 0x13b9

0x16b8: Pop(1)
0x16b9: Push((int) -1)
0x16ba: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x16bb: IF (Stack[-1] == 0) GOTO 0x16bd; Pop(1)

0x16bc: Stack[-1] = (bool) 1
0x16bd: IF (Stack[-1] == 0) GOTO 0x16c6; Pop(1)

0x16be: PushEmpty(int, string)
0x16bf: Stack[-1] = "d5q01"
0x16c0: Call2 0x13b9

0x16c1: Pop(1)
0x16c2: Push((int) 1000)
0x16c3: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x16c4: IF (Stack[-1] == 0) GOTO 0x16c6; Pop(1)

0x16c5: Stack[-1] = (bool) 1
0x16c6: IF (Stack[-1] == 0) GOTO 0x16c9; Pop(1)

0x16c7: Stack[-2] = (bool) 1
0x16c8: Return(); Pop(0)

0x16c9: Stack[-2] = (bool) 0
0x16ca: Return(); Pop(0)

0x16cb: PushEmpty(object, object)
0x16cc: Push((int) 668)
0x16cd: Push((int) 2)
0x16ce: Push((int) 534122)
0x16cf: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16d0: Pop(3)
0x16d1: PushEmpty(bool, object, int)
0x16d2: Stack[-2] = Stack[-4]
0x16d3: Stack[-1] = (int) 666
0x16d4: Call2 0x1733

0x16d5: Pop(3)
0x16d6: Return(); Pop(2)

0x16d7: Stack[-1] = 0
0x16d8: PushEmpty(object, object)
0x16d9: Push((int) 25)
0x16da: Push((int) 1)
0x16db: Push((int) 503365)
0x16dc: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16dd: Pop(3)
0x16de: PushEmpty(bool, object, int)
0x16df: Stack[-2] = Stack[-4]
0x16e0: Stack[-1] = (int) -1
0x16e1: Call2 0x1733

0x16e2: Pop(3)
0x16e3: Return(); Pop(2)

0x16e4: Stack[-1] = 0
0x16e5: PushEmpty(object, object)
0x16e6: Push((int) 68)
0x16e7: Push((int) 1)
0x16e8: Push((int) 512150)
0x16e9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16ea: Pop(3)
0x16eb: PushEmpty(bool, object, int)
0x16ec: Stack[-2] = Stack[-4]
0x16ed: Stack[-1] = (int) 25
0x16ee: Call2 0x1733

0x16ef: Pop(3)
0x16f0: Return(); Pop(2)

0x16f1: Stack[-1] = 0
0x16f2: PushEmpty(object, object)
0x16f3: Push((int) 74)
0x16f4: Push((int) 1)
0x16f5: Push((int) 512156)
0x16f6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16f7: Pop(3)
0x16f8: PushEmpty(bool, object, int)
0x16f9: Stack[-2] = Stack[-4]
0x16fa: Stack[-1] = (int) 25
0x16fb: Call2 0x1733

0x16fc: Pop(3)
0x16fd: Return(); Pop(2)

0x16fe: Stack[-1] = 0
0x16ff: PushEmpty(object, object)
0x1700: Push((int) 139)
0x1701: Push((int) 1)
0x1702: Push((int) 515339)
0x1703: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1704: Pop(3)
0x1705: PushEmpty(bool, object, int)
0x1706: Stack[-2] = Stack[-4]
0x1707: Stack[-1] = (int) -1
0x1708: Call2 0x1733

0x1709: Pop(3)
0x170a: Return(); Pop(2)

0x170b: Stack[-1] = 0
0x170c: PushEmpty(object, object)
0x170d: Push((int) 140)
0x170e: Push((int) 1)
0x170f: Push((int) 515340)
0x1710: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1711: Pop(3)
0x1712: PushEmpty(bool, object, int)
0x1713: Stack[-2] = Stack[-4]
0x1714: Stack[-1] = (int) 139
0x1715: Call2 0x1733

0x1716: Pop(3)
0x1717: Return(); Pop(2)

0x1718: Stack[-1] = 0
0x1719: PushEmpty(object, object)
0x171a: Push((int) 147)
0x171b: Push((int) 1)
0x171c: Push((int) 515347)
0x171d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x171e: Pop(3)
0x171f: PushEmpty(bool, object, int)
0x1720: Stack[-2] = Stack[-4]
0x1721: Stack[-1] = (int) 139
0x1722: Call2 0x1733

0x1723: Pop(3)
0x1724: Return(); Pop(2)

0x1725: Stack[-1] = 0
0x1726: PushEmpty(object, object)
0x1727: @ GetDiaryRoot(Stack[-1])
0x1728: Pop(0)
0x1729: Pop(0); Push((bool) Stack[-1] == 0)
0x172a: IF (Stack[-1] == 0) GOTO 0x1730; Pop(1)

0x172b: Push("Can't retrieve diary root")
0x172c: @ Trace(Stack[-1])
0x172d: Pop(1)
0x172e: Stack[-3] = (bool) 0
0x172f: Return(); Pop(2)

0x1730: Stack[-3] = Stack[-1]
0x1731: Return(); Pop(2)

0x1732: Stack[-1] = 0
0x1733: PushEmpty(object, object, int, object, object, int)
0x1734: PushEmpty(object)
0x1735: Call2 0x1726

0x1736: Stack[-4] = Stack[-1]
0x1737: Pop(1)
0x1738: @@ Find(Stack[-7], Stack[-2])
0x1739: Pop(0)
0x173a: Pop(0); Push((bool) Stack[-2] == 0)
0x173b: IF (Stack[-1] == 0) GOTO 0x1742; Pop(1)

0x173c: Push("Can't find diary parent with id: ")
0x173d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x173e: @ Trace(Stack[-1])
0x173f: Pop(1)
0x1740: Stack[-9] = (bool) 0
0x1741: Return(); Pop(6)

0x1742: @@ AddChild(Stack[-8])
0x1743: Pop(0)
0x1744: Push((int) 7)
0x1745: @ SendWorldWndMessage(Stack[-1])
0x1746: Pop(1)
0x1747: @@ GetCategory(Stack[-1])
0x1748: Pop(0)
0x1749: @ SetDiarySection(Stack[-1])
0x174a: Pop(0)
0x174b: Stack[-9] = (bool) 0
0x174c: Return(); Pop(6)

0x174d: Stack[-2] = 0
0x174e: Stack[-3] = 0
0x174f: PushEmpty(object, object, object, object)
0x1750: @ GetMainOutdoorScene(Stack[-2])
0x1751: Pop(0)
0x1752: Pop(0); Push((bool) Stack[-2] == 0)
0x1753: IF (Stack[-1] == 0) GOTO 0x175a; Pop(1)

0x1754: Push("Can't find main outdoor scene")
0x1755: @ Trace(Stack[-1])
0x1756: Pop(1)
0x1757: Stack[-1] = 0
0x1758: Stack[-5] = Stack[-1]
0x1759: Return(); Pop(4)

0x175a: @@ GetMap(Stack[-1])
0x175b: Pop(0)
0x175c: Stack[-5] = Stack[-1]
0x175d: Return(); Pop(4)

0x175e: Stack[-1] = 0
0x175f: Stack[-2] = 0
0x1760: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x1761: @ GetMainOutdoorScene(Stack[-2])
0x1762: Pop(0)
0x1763: Pop(0); Push((bool) Stack[-2] == 0)
0x1764: IF (Stack[-1] == 0) GOTO 0x1769; Pop(1)

0x1765: Push("Can't find main outdoor scene")
0x1766: @ Trace(Stack[-1])
0x1767: Pop(1)
0x1768: Return(); Pop(8)

0x1769: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x176a: Pop(0)
0x176b: Pop(0); Push((bool) Stack[-1] == 0)
0x176c: IF (Stack[-1] == 0) GOTO 0x1773; Pop(1)

0x176d: Push("Warning: outdoor scene locator ")
0x176e: Pop(1); Push(Stack[-1] + Stack[-11]);
0x176f: Push(" doesnt exist")
0x1770: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1771: @ Trace(Stack[-1])
0x1772: Pop(1)
0x1773: @@ GetMap(Stack[-11])
0x1774: Pop(0)
0x1775: Pop(0); Push((bool) Stack[-11] == 0)
0x1776: IF (Stack[-1] == 0) GOTO 0x177b; Pop(1)

0x1777: Push("Can't find map")
0x1778: @ Trace(Stack[-1])
0x1779: Pop(1)
0x177a: Return(); Pop(8)

0x177b: Push(CvectorIndex(Stack[-4], 0))
0x177c: Push(CvectorIndex(Stack[-5], 2))
0x177d: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x177e: Pop(2)
0x177f: Return(); Pop(8)

0x1780: Stack[-2] = 0
0x1781: PushEmpty(int, int)
0x1782: Push("branch")
0x1783: @ GetVariable(Stack[-1], Stack[-2])
0x1784: Pop(1)
0x1785: Push((int) 0)
0x1786: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1787: IF (Stack[-1] == 0) GOTO 0x178b; Pop(1)

0x1788: Stack[-3] = (int) 1
0x1789: Return(); Pop(2)

0x178a: GOTO 0x1790

0x178b: Push((int) 1)
0x178c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x178d: IF (Stack[-1] == 0) GOTO 0x1790; Pop(1)

0x178e: Stack[-3] = (int) 2
0x178f: Return(); Pop(2)

0x1790: Stack[-3] = (int) 3
0x1791: Return(); Pop(2)

0x1792: PushEmpty()
0x1793: PushEmpty(bool, int)
0x1794: Stack[-1] = (int) 3
0x1795: Call2 0x1428

0x1796: Pop(1)
0x1797: IF (Stack[-1] == 0) GOTO 0x179f; Pop(1)

0x1798: PushEmpty(int, object)
0x1799: Stack[-1] = Stack[-3]
0x179a: Push(-2, 1); TaskCall(0)
0x179b: Call2 0x0

0x179c: Pop(-2, 1); TaskReturn
0x179d: Pop(2)
0x179e: Return(); Pop(0)

0x179f: PushEmpty(bool, int)
0x17a0: Stack[-1] = (int) 4
0x17a1: Call2 0x1428

0x17a2: Pop(1)
0x17a3: IF (Stack[-1] == 0) GOTO 0x17ab; Pop(1)

0x17a4: PushEmpty(int, object)
0x17a5: Stack[-1] = Stack[-3]
0x17a6: Push(-2, 1); TaskCall(4)
0x17a7: Call2 0xb55

0x17a8: Pop(-2, 1); TaskReturn
0x17a9: Pop(2)
0x17aa: Return(); Pop(0)

0x17ab: PushEmpty(bool, int)
0x17ac: Stack[-1] = (int) 5
0x17ad: Call2 0x1428

0x17ae: Pop(1)
0x17af: IF (Stack[-1] == 0) GOTO 0x17b7; Pop(1)

0x17b0: PushEmpty(int, object)
0x17b1: Stack[-1] = Stack[-3]
0x17b2: Push(-2, 1); TaskCall(2)
0x17b3: Call2 0x691

0x17b4: Pop(-2, 1); TaskReturn
0x17b5: Pop(2)
0x17b6: Return(); Pop(0)

0x17b7: PushEmpty(bool, int)
0x17b8: Stack[-1] = (int) 6
0x17b9: Call2 0x1428

0x17ba: Pop(1)
0x17bb: IF (Stack[-1] == 0) GOTO 0x17c3; Pop(1)

0x17bc: PushEmpty(int, object)
0x17bd: Stack[-1] = Stack[-3]
0x17be: Push(-2, 1); TaskCall(6)
0x17bf: Call2 0xcb2

0x17c0: Pop(-2, 1); TaskReturn
0x17c1: Pop(2)
0x17c2: Return(); Pop(0)

0x17c3: PushEmpty(bool, int)
0x17c4: Stack[-1] = (int) 10
0x17c5: Call2 0x1428

0x17c6: Pop(1)
0x17c7: IF (Stack[-1] == 0) GOTO 0x17cf; Pop(1)

0x17c8: PushEmpty(int, object)
0x17c9: Stack[-1] = Stack[-3]
0x17ca: Push(-2, 1); TaskCall(8)
0x17cb: Call2 0xe12

0x17cc: Pop(-2, 1); TaskReturn
0x17cd: Pop(2)
0x17ce: Return(); Pop(0)

0x17cf: PushEmpty(bool, int)
0x17d0: Stack[-1] = (int) 12
0x17d1: Call2 0x1428

0x17d2: Pop(1)
0x17d3: IF (Stack[-1] == 0) GOTO 0x17db; Pop(1)

0x17d4: PushEmpty(int, object)
0x17d5: Stack[-1] = Stack[-3]
0x17d6: Push(-2, 1); TaskCall(10)
0x17d7: Call2 0xfa5

0x17d8: Pop(-2, 1); TaskReturn
0x17d9: Pop(2)
0x17da: Return(); Pop(0)

0x17db: PushEmpty(int, object)
0x17dc: Stack[-1] = Stack[-3]
0x17dd: Push(-2, 1); TaskCall(12)
0x17de: Call2 0x10a8

0x17df: Pop(-2, 1); TaskReturn
0x17e0: Pop(2)
0x17e1: Return(); Pop(0)

