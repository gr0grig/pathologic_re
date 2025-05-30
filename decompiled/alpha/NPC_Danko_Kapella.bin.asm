GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
	Neutral
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	.bin
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	No
	ui/NPC_Kapella.png
	KnowUklad
	ood1Kapella1
	ood1Kapella2
	ood1Kapella3
	ood1Kapella4
	KnowKaterina
	KnowKapella
	d1q03IsKapella
	d1q03KapellaGotoOspina
	pt_map_ospina
	AddMark
	quest_d1_03
	ood1Kapella6
	funduk3 is given
	funduk
	playsound
	giveitem
	ood2Kapella1
	ood2Kapella2
	d2q01
	d2q01KapellaGotoSpi4ka
	pt_map_spi4ka
	ShowMap
	ood1Kapella7
	ood1Kapella8
	ood1Kapella9
	ood1Kapella10
	ood1Kapella12
	d3q03
	d3q03KapellaBoyLocation
	pt_d3q03_boy
	quest_d3_03
	ood3Kapella1
	ood3Kapella2
	FindMark
	Remove
	d3q03KapellaBoyLocationSelf
	completed
	ood3Kapella3
	ood3Kapella4
	ood3Kapella5
	ood6Kapella1
	d6q02KnowAboutAttack
	KnowViktoria
	ood8Kapella1
	d8q02
	feromicin is given
	feromicin
	ood8Kapella2
	ood4Kapella1
	KnowPredictions
	d6q02KapellaGotoMladVlad
	pt_map_mladvlad
	d6KapellaVisit
	ood6Kapella3
	KnowTermitnik
	d1q01FirstGeorgVisit
	ood1Kapella5
	d1q03
	KnowAgo
	ood1Kapella11
	d3q01
	d6q02
	d6q01
	d8TalkToMat
	d8TermitnikLoad
	KnowLara
	KnowMishka
	KnowMladVlad
	d4q02
	KnowNotkin
	KnowSpi4ka
	disease
	GetProperty
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	player
	Adding diary entry

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	lshWaitForAnimEnd (1 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x6
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x1d Vars = ()
		EVENT_0 Op = 0x23 Vars = (object)
		EVENT_10 Op = 0x29 Vars = (object)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc4 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x23b Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x526 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcb9 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf33 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x134b Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x147b Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x1b2f

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0x15b7

0xb: Pop(0)
0xc: Pop(1); Push((bool) Stack[-1] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xe: PushEmpty()
0xf: Push(-0, 0); TaskCall(0)
0x10: Call 0x0

0x11: Pop(-0, 0); TaskReturn
0x12: Pop(0)
0x13: PushEmpty(string)
0x14: Stack[-1] = "Neutral"
0x15: Call 0x15f8

0x16: Pop(1)
0x17: @ lshWaitForAnimEnd()
0x18: Pop(0)
0x19: GOTO 0x13

0x1a: @ Hold()
0x1b: Pop(0)
0x1c: Return(); Pop(0)

0x1d: PushEmpty()
0x1e: Push(-0, 0); TaskCall(0)
0x1f: Call 0x0

0x20: Pop(-0, 0); TaskReturn
0x21: Pop(0)
0x22: Return(); Pop(0)

0x23: PushEmpty()
0x24: PushEmpty(object)
0x25: Stack[-1] = Stack[-2]
0x26: Call 0x1b33

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x15ab

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0x15bc

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0x166e

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0x1670

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x1abe

0x49: Pop(0)
0x4a: @@ SetPlayerName(Stack[-1])
0x4b: Pop(1)
0x4c: Stack[-2] = (int) -1
0x4d: @ IsOverrideActive(Stack[-3])
0x4e: Pop(0)
0x4f: Push(Stack[-3])
0x50: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x51: Stack[-10] = (int) -2
0x52: Return(); Pop(8)

0x53: @ DoDialog(Stack[-4])
0x54: Pop(0)
0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[-11]
0x57: Stack[-1] = Stack[-6]
0x58: Push(-2, 4); TaskCall(3)
0x59: Call 0x70

0x5a: Pop(-2, 4); TaskReturn
0x5b: Pop(2)
0x5c: @@ IsDialogEnd(Stack[-1])
0x5d: Pop(0)
0x5e: Pop(0); Push((bool) Stack[-1] == 0)
0x5f: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x60: @ sync()
0x61: Pop(0)
0x62: @@ IsDialogEnd(Stack[-1])
0x63: Pop(0)
0x64: GOTO 0x5e

0x65: PushEmpty(object)
0x66: Stack[-1] = Stack[-10]
0x67: Call 0x15f4

0x68: Pop(1)
0x69: @ StopDialog(Stack[-4])
0x6a: Pop(0)
0x6b: @@ GetReturnValue(Stack[-2])
0x6c: Pop(0)
0x6d: Stack[-10] = Stack[-2]
0x6e: Return(); Pop(8)

0x6f: Stack[-4] = 0
0x70: PushEmpty()
0x71: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x72: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x73: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x74: Push((int) 1)
0x75: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x76: PushEmpty(object, object)
0x77: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x78: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x79: Call 0x1692

0x7a: Pop(2)
0x7b: PushEmpty(object, object)
0x7c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7e: Call 0x1698

0x7f: Pop(2)
0x80: PushEmpty(string)
0x81: Stack[-1] = "Neutral"
0x82: Call 0xb4

0x83: Pop(1)
0x84: Push((int) 473)
0x85: @@ SetMessage(Stack[-1])
0x86: Pop(1)
0x87: @@ ClearReplies()
0x88: Pop(0)
0x89: Push((int) 476)
0x8a: Push((int) 547)
0x8b: Push((int) 546)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: Push((int) 474)
0x8f: Push((int) 545)
0x90: Push((int) 544)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: GOTO 0x96

0x94: Return(); Pop(0)

0x95: GOTO 0x74

0x96: PushEmpty(bool)
0x97: Call 0x1672

0x98: Pop(0)
0x99: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9a: @ lshWaitForAnimEnd()
0x9b: Pop(0)
0x9c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xa4

0x9f: PushEmpty(string)
0xa0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa1: Call 0x15f8

0xa2: Pop(1)
0xa3: GOTO 0x9a

0xa4: GOTO 0xb3

0xa5: Push("all")
0xa6: Push("idle")
0xa7: @ PlayAnimation(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: @ WaitForAnimEnd()
0xaa: Pop(0)
0xab: Push( Stack[3 + Tasks[-1].StackPointer] )
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: GOTO 0xb3

0xae: Push("all")
0xaf: Push("idle")
0xb0: @ PlayAnimation(Stack[-2], Stack[-1])
0xb1: Pop(2)
0xb2: GOTO 0xa9

0xb3: Return(); Pop(0)

0xb4: PushEmpty()
0xb5: PushEmpty(bool)
0xb6: Call 0x1672

0xb7: Pop(0)
0xb8: Pop(1); Push((bool) Stack[-1] == 0)
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: Return(); Pop(0)

0xbb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Return(); Pop(0)

0xbe: PushEmpty(string)
0xbf: Stack[-1] = Stack[-2]
0xc0: Call 0x15f8

0xc1: Pop(1)
0xc2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: Push((int) 1)
0xc6: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0xc7: PushEmpty()
0xc8: Call 0x160a

0xc9: Pop(0)
0xca: Push((int) 543)
0xcb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call 0x1692

0xd1: Pop(2)
0xd2: PushEmpty(object, object)
0xd3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd5: Call 0x1698

0xd6: Pop(2)
0xd7: PushEmpty(string)
0xd8: Stack[-1] = "Neutral"
0xd9: Call 0xb4

0xda: Pop(1)
0xdb: Push((int) 473)
0xdc: @@ SetMessage(Stack[-1])
0xdd: Pop(1)
0xde: @@ ClearReplies()
0xdf: Pop(0)
0xe0: Push((int) 476)
0xe1: Push((int) 547)
0xe2: Push((int) 546)
0xe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: Push((int) 474)
0xe6: Push((int) 545)
0xe7: Push((int) 544)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Return(); Pop(0)

0xeb: Push((int) 545)
0xec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xee: PushEmpty(object, object)
0xef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf1: Call 0x17ac

0xf2: Pop(2)
0xf3: PushEmpty(string)
0xf4: Stack[-1] = "Neutral"
0xf5: Call 0xb4

0xf6: Pop(1)
0xf7: Push((int) 475)
0xf8: @@ SetMessage(Stack[-1])
0xf9: Pop(1)
0xfa: @@ ClearReplies()
0xfb: Pop(0)
0xfc: Push((int) 480)
0xfd: Push((int) 547)
0xfe: Push((int) 550)
0xff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100: Pop(3)
0x101: Push((int) 479)
0x102: Push((int) -1)
0x103: Push((int) 549)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Return(); Pop(0)

0x107: Push((int) 547)
0x108: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x10a: PushEmpty(object, object)
0x10b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10d: Call 0x17d8

0x10e: Pop(2)
0x10f: PushEmpty(string)
0x110: Stack[-1] = "Neutral"
0x111: Call 0xb4

0x112: Pop(1)
0x113: Push((int) 477)
0x114: @@ SetMessage(Stack[-1])
0x115: Pop(1)
0x116: @@ ClearReplies()
0x117: Pop(0)
0x118: Push((int) 481)
0x119: Push((int) 554)
0x11a: Push((int) 552)
0x11b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: Push((int) 8439)
0x11e: Push((int) 9263)
0x11f: Push((int) 9262)
0x120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: Return(); Pop(0)

0x123: Push((int) 9263)
0x124: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x125: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x126: PushEmpty(string)
0x127: Stack[-1] = "Neutral"
0x128: Call 0xb4

0x129: Pop(1)
0x12a: Push((int) 8440)
0x12b: @@ SetMessage(Stack[-1])
0x12c: Pop(1)
0x12d: @@ ClearReplies()
0x12e: Pop(0)
0x12f: Push((int) 8442)
0x130: Push((int) -1)
0x131: Push((int) 9265)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Push((int) 8441)
0x135: Push((int) -1)
0x136: Push((int) 9264)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: Return(); Pop(0)

0x13a: Push((int) 554)
0x13b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13c: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x13d: PushEmpty(string)
0x13e: Stack[-1] = "Neutral"
0x13f: Call 0xb4

0x140: Pop(1)
0x141: Push((int) 483)
0x142: @@ SetMessage(Stack[-1])
0x143: Pop(1)
0x144: @@ ClearReplies()
0x145: Pop(0)
0x146: Push((int) 484)
0x147: Push((int) -1)
0x148: Push((int) 555)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Push((int) 485)
0x14c: Push((int) -1)
0x14d: Push((int) 556)
0x14e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f: Pop(3)
0x150: Return(); Pop(0)

0x151: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x152: PushEmpty(bool)
0x153: Call 0x1672

0x154: Pop(0)
0x155: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x156: @ lshStopAnimation()
0x157: Pop(0)
0x158: GOTO 0x15b

0x159: @ StopAnimation()
0x15a: Pop(0)
0x15b: Return(); Pop(0)

0x15c: GOTO 0xc5

0x15d: Return(); Pop(0)

0x15e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x15f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x160: PushEmpty(bool, object)
0x161: Stack[-1] = Stack[-11]
0x162: Call 0x15bc

0x163: Pop(1)
0x164: Pop(1); Push((bool) Stack[-1] == 0)
0x165: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x166: Stack[-10] = (int) -2
0x167: Return(); Pop(8)

0x168: @ CreateDialog(Stack[-4])
0x169: Pop(0)
0x16a: PushEmpty(int)
0x16b: Call 0x166e

0x16c: Pop(0)
0x16d: @@ SetNPCName(Stack[-1])
0x16e: Pop(1)
0x16f: PushEmpty(string)
0x170: Call 0x1670

0x171: Pop(0)
0x172: @@ SetPhoto(Stack[-1])
0x173: Pop(1)
0x174: PushEmpty(int)
0x175: Call 0x1abe

0x176: Pop(0)
0x177: @@ SetPlayerName(Stack[-1])
0x178: Pop(1)
0x179: Stack[-2] = (int) -1
0x17a: @ IsOverrideActive(Stack[-3])
0x17b: Pop(0)
0x17c: Push(Stack[-3])
0x17d: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17e: Stack[-10] = (int) -2
0x17f: Return(); Pop(8)

0x180: @ DoDialog(Stack[-4])
0x181: Pop(0)
0x182: PushEmpty(object, object)
0x183: Stack[-2] = Stack[-11]
0x184: Stack[-1] = Stack[-6]
0x185: Push(-2, 4); TaskCall(5)
0x186: Call 0x19d

0x187: Pop(-2, 4); TaskReturn
0x188: Pop(2)
0x189: @@ IsDialogEnd(Stack[-1])
0x18a: Pop(0)
0x18b: Pop(0); Push((bool) Stack[-1] == 0)
0x18c: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18d: @ sync()
0x18e: Pop(0)
0x18f: @@ IsDialogEnd(Stack[-1])
0x190: Pop(0)
0x191: GOTO 0x18b

0x192: PushEmpty(object)
0x193: Stack[-1] = Stack[-10]
0x194: Call 0x15f4

0x195: Pop(1)
0x196: @ StopDialog(Stack[-4])
0x197: Pop(0)
0x198: @@ GetReturnValue(Stack[-2])
0x199: Pop(0)
0x19a: Stack[-10] = Stack[-2]
0x19b: Return(); Pop(8)

0x19c: Stack[-4] = 0
0x19d: PushEmpty()
0x19e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x19f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1a0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1a1: Push((int) 1)
0x1a2: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x1a3: PushEmpty(bool)
0x1a4: Stack[-1] = (bool) 0
0x1a5: PushEmpty(bool, object)
0x1a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a7: Call 0x1983

0x1a8: Pop(1)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1aa: PushEmpty(bool, object)
0x1ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ac: Call 0x1a1f

0x1ad: Pop(1)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1af: Stack[-1] = (bool) 1
0x1b0: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1b1: PushEmpty(object, object)
0x1b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b4: Call 0x17ee

0x1b5: Pop(2)
0x1b6: PushEmpty(object, object)
0x1b7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b9: Call 0x17f4

0x1ba: Pop(2)
0x1bb: PushEmpty(string)
0x1bc: Stack[-1] = "Neutral"
0x1bd: Call 0x22b

0x1be: Pop(1)
0x1bf: Push((int) 3371)
0x1c0: @@ SetMessage(Stack[-1])
0x1c1: Pop(1)
0x1c2: @@ ClearReplies()
0x1c3: Pop(0)
0x1c4: Push((int) 3375)
0x1c5: Push((int) 3621)
0x1c6: Push((int) 3619)
0x1c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c8: Pop(3)
0x1c9: Push((int) 3376)
0x1ca: Push((int) 3621)
0x1cb: Push((int) 3620)
0x1cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cd: Pop(3)
0x1ce: GOTO 0x20d

0x1cf: PushEmpty(bool)
0x1d0: Stack[-1] = (bool) 0
0x1d1: PushEmpty(bool)
0x1d2: Stack[-1] = (bool) 0
0x1d3: PushEmpty(bool, object)
0x1d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d5: Call 0x1977

0x1d6: Pop(1)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1d8: PushEmpty(bool, object)
0x1d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1da: Call 0x195f

0x1db: Pop(1)
0x1dc: Pop(1); Push((bool) Stack[-1] == 0)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1de: Stack[-1] = (bool) 1
0x1df: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e0: PushEmpty(bool, object)
0x1e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e2: Call 0x196b

0x1e3: Pop(1)
0x1e4: Pop(1); Push((bool) Stack[-1] == 0)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e6: Stack[-1] = (bool) 1
0x1e7: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1e8: PushEmpty(object, object)
0x1e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1eb: Call 0x17ee

0x1ec: Pop(2)
0x1ed: PushEmpty(string)
0x1ee: Stack[-1] = "Neutral"
0x1ef: Call 0x22b

0x1f0: Pop(1)
0x1f1: Push((int) 12095)
0x1f2: @@ SetMessage(Stack[-1])
0x1f3: Pop(1)
0x1f4: @@ ClearReplies()
0x1f5: Pop(0)
0x1f6: Push((int) 12096)
0x1f7: Push((int) 13323)
0x1f8: Push((int) 13322)
0x1f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fa: Pop(3)
0x1fb: GOTO 0x20d

0x1fc: PushEmpty(string)
0x1fd: Stack[-1] = "Neutral"
0x1fe: Call 0x22b

0x1ff: Pop(1)
0x200: Push((int) 12523)
0x201: @@ SetMessage(Stack[-1])
0x202: Pop(1)
0x203: @@ ClearReplies()
0x204: Pop(0)
0x205: Push((int) 12524)
0x206: Push((int) -1)
0x207: Push((int) 13694)
0x208: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x209: Pop(3)
0x20a: GOTO 0x20d

0x20b: Return(); Pop(0)

0x20c: GOTO 0x1a1

0x20d: PushEmpty(bool)
0x20e: Call 0x1672

0x20f: Pop(0)
0x210: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x211: @ lshWaitForAnimEnd()
0x212: Pop(0)
0x213: Push( Stack[3 + Tasks[-1].StackPointer] )
0x214: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x215: GOTO 0x21b

0x216: PushEmpty(string)
0x217: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x218: Call 0x15f8

0x219: Pop(1)
0x21a: GOTO 0x211

0x21b: GOTO 0x22a

0x21c: Push("all")
0x21d: Push("idle")
0x21e: @ PlayAnimation(Stack[-2], Stack[-1])
0x21f: Pop(2)
0x220: @ WaitForAnimEnd()
0x221: Pop(0)
0x222: Push( Stack[3 + Tasks[-1].StackPointer] )
0x223: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x224: GOTO 0x22a

0x225: Push("all")
0x226: Push("idle")
0x227: @ PlayAnimation(Stack[-2], Stack[-1])
0x228: Pop(2)
0x229: GOTO 0x220

0x22a: Return(); Pop(0)

0x22b: PushEmpty()
0x22c: PushEmpty(bool)
0x22d: Call 0x1672

0x22e: Pop(0)
0x22f: Pop(1); Push((bool) Stack[-1] == 0)
0x230: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x231: Return(); Pop(0)

0x232: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x233: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x234: Return(); Pop(0)

0x235: PushEmpty(string)
0x236: Stack[-1] = Stack[-2]
0x237: Call 0x15f8

0x238: Pop(1)
0x239: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x23a: Return(); Pop(0)

0x23b: PushEmpty()
0x23c: Push((int) 1)
0x23d: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x23e: PushEmpty()
0x23f: Call 0x160a

0x240: Pop(0)
0x241: Push((int) 13328)
0x242: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x243: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x244: PushEmpty(object, object)
0x245: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x246: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x247: Call 0x17a0

0x248: Pop(2)
0x249: PushEmpty(object, object)
0x24a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x24b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24c: Call 0x17de

0x24d: Pop(2)
0x24e: Push((int) 13695)
0x24f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x250: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x251: PushEmpty(object, object)
0x252: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x253: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x254: Call 0x17a0

0x255: Pop(2)
0x256: Push((int) 3618)
0x257: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x259: PushEmpty(bool)
0x25a: Stack[-1] = (bool) 0
0x25b: PushEmpty(bool, object)
0x25c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x25d: Call 0x1983

0x25e: Pop(1)
0x25f: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x260: PushEmpty(bool, object)
0x261: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x262: Call 0x1a1f

0x263: Pop(1)
0x264: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x265: Stack[-1] = (bool) 1
0x266: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x267: PushEmpty(object, object)
0x268: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x269: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26a: Call 0x17ee

0x26b: Pop(2)
0x26c: PushEmpty(object, object)
0x26d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x26e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26f: Call 0x17f4

0x270: Pop(2)
0x271: PushEmpty(string)
0x272: Stack[-1] = "Neutral"
0x273: Call 0x22b

0x274: Pop(1)
0x275: Push((int) 3371)
0x276: @@ SetMessage(Stack[-1])
0x277: Pop(1)
0x278: @@ ClearReplies()
0x279: Pop(0)
0x27a: Push((int) 3375)
0x27b: Push((int) 3621)
0x27c: Push((int) 3619)
0x27d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27e: Pop(3)
0x27f: Push((int) 3376)
0x280: Push((int) 3621)
0x281: Push((int) 3620)
0x282: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x283: Pop(3)
0x284: Return(); Pop(0)

0x285: PushEmpty(bool)
0x286: Stack[-1] = (bool) 0
0x287: PushEmpty(bool)
0x288: Stack[-1] = (bool) 0
0x289: PushEmpty(bool, object)
0x28a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28b: Call 0x1977

0x28c: Pop(1)
0x28d: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x28e: PushEmpty(bool, object)
0x28f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x290: Call 0x195f

0x291: Pop(1)
0x292: Pop(1); Push((bool) Stack[-1] == 0)
0x293: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x294: Stack[-1] = (bool) 1
0x295: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x296: PushEmpty(bool, object)
0x297: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x298: Call 0x196b

0x299: Pop(1)
0x29a: Pop(1); Push((bool) Stack[-1] == 0)
0x29b: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29c: Stack[-1] = (bool) 1
0x29d: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x29e: PushEmpty(object, object)
0x29f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a1: Call 0x17ee

0x2a2: Pop(2)
0x2a3: PushEmpty(string)
0x2a4: Stack[-1] = "Neutral"
0x2a5: Call 0x22b

0x2a6: Pop(1)
0x2a7: Push((int) 12095)
0x2a8: @@ SetMessage(Stack[-1])
0x2a9: Pop(1)
0x2aa: @@ ClearReplies()
0x2ab: Pop(0)
0x2ac: Push((int) 12096)
0x2ad: Push((int) 13323)
0x2ae: Push((int) 13322)
0x2af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b0: Pop(3)
0x2b1: Return(); Pop(0)

0x2b2: PushEmpty(string)
0x2b3: Stack[-1] = "Neutral"
0x2b4: Call 0x22b

0x2b5: Pop(1)
0x2b6: Push((int) 12523)
0x2b7: @@ SetMessage(Stack[-1])
0x2b8: Pop(1)
0x2b9: @@ ClearReplies()
0x2ba: Pop(0)
0x2bb: Push((int) 12524)
0x2bc: Push((int) -1)
0x2bd: Push((int) 13694)
0x2be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bf: Pop(3)
0x2c0: Return(); Pop(0)

0x2c1: Push((int) 13323)
0x2c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2c4: PushEmpty(string)
0x2c5: Stack[-1] = "Neutral"
0x2c6: Call 0x22b

0x2c7: Pop(1)
0x2c8: Push((int) 12097)
0x2c9: @@ SetMessage(Stack[-1])
0x2ca: Pop(1)
0x2cb: @@ ClearReplies()
0x2cc: Pop(0)
0x2cd: Push((int) 12098)
0x2ce: Push((int) 13325)
0x2cf: Push((int) 13324)
0x2d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d1: Pop(3)
0x2d2: Return(); Pop(0)

0x2d3: Push((int) 13325)
0x2d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2d6: PushEmpty(string)
0x2d7: Stack[-1] = "Neutral"
0x2d8: Call 0x22b

0x2d9: Pop(1)
0x2da: Push((int) 12099)
0x2db: @@ SetMessage(Stack[-1])
0x2dc: Pop(1)
0x2dd: @@ ClearReplies()
0x2de: Pop(0)
0x2df: Push((int) 12100)
0x2e0: Push((int) 13327)
0x2e1: Push((int) 13326)
0x2e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e3: Pop(3)
0x2e4: Return(); Pop(0)

0x2e5: Push((int) 13327)
0x2e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e7: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x2e8: PushEmpty(object, object)
0x2e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2eb: Call 0x17a6

0x2ec: Pop(2)
0x2ed: PushEmpty(string)
0x2ee: Stack[-1] = "Neutral"
0x2ef: Call 0x22b

0x2f0: Pop(1)
0x2f1: Push((int) 12101)
0x2f2: @@ SetMessage(Stack[-1])
0x2f3: Pop(1)
0x2f4: @@ ClearReplies()
0x2f5: Pop(0)
0x2f6: PushEmpty(bool, object)
0x2f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f8: Call 0x1953

0x2f9: Pop(1)
0x2fa: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fb: Push((int) 12102)
0x2fc: Push((int) -1)
0x2fd: Push((int) 13328)
0x2fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ff: Pop(3)
0x300: PushEmpty(bool, object)
0x301: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x302: Call 0x1953

0x303: Pop(1)
0x304: Pop(1); Push((bool) Stack[-1] == 0)
0x305: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x306: Push((int) 12525)
0x307: Push((int) -1)
0x308: Push((int) 13695)
0x309: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30a: Pop(3)
0x30b: Return(); Pop(0)

0x30c: Push((int) 3621)
0x30d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x30f: PushEmpty(string)
0x310: Stack[-1] = "Neutral"
0x311: Call 0x22b

0x312: Pop(1)
0x313: Push((int) 3377)
0x314: @@ SetMessage(Stack[-1])
0x315: Pop(1)
0x316: @@ ClearReplies()
0x317: Pop(0)
0x318: Push((int) 3378)
0x319: Push((int) 3626)
0x31a: Push((int) 3622)
0x31b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31c: Pop(3)
0x31d: Push((int) 3379)
0x31e: Push((int) 3626)
0x31f: Push((int) 3624)
0x320: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x321: Pop(3)
0x322: Push((int) 3380)
0x323: Push((int) 3626)
0x324: Push((int) 3625)
0x325: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x326: Pop(3)
0x327: Return(); Pop(0)

0x328: Push((int) 3626)
0x329: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x32b: PushEmpty(string)
0x32c: Stack[-1] = "Neutral"
0x32d: Call 0x22b

0x32e: Pop(1)
0x32f: Push((int) 3381)
0x330: @@ SetMessage(Stack[-1])
0x331: Pop(1)
0x332: @@ ClearReplies()
0x333: Pop(0)
0x334: Push((int) 3382)
0x335: Push((int) 3631)
0x336: Push((int) 3627)
0x337: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x338: Pop(3)
0x339: Push((int) 3383)
0x33a: Push((int) -1)
0x33b: Push((int) 3630)
0x33c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33d: Pop(3)
0x33e: Push((int) 3396)
0x33f: Push((int) -1)
0x340: Push((int) 3643)
0x341: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x342: Pop(3)
0x343: Return(); Pop(0)

0x344: Push((int) 3631)
0x345: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x346: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x347: PushEmpty(string)
0x348: Stack[-1] = "Neutral"
0x349: Call 0x22b

0x34a: Pop(1)
0x34b: Push((int) 3384)
0x34c: @@ SetMessage(Stack[-1])
0x34d: Pop(1)
0x34e: @@ ClearReplies()
0x34f: Pop(0)
0x350: Push((int) 3385)
0x351: Push((int) 3639)
0x352: Push((int) 3632)
0x353: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x354: Pop(3)
0x355: Push((int) 3386)
0x356: Push((int) -1)
0x357: Push((int) 3633)
0x358: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x359: Pop(3)
0x35a: Push((int) 3387)
0x35b: Push((int) -1)
0x35c: Push((int) 3634)
0x35d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35e: Pop(3)
0x35f: Push((int) 3388)
0x360: Push((int) 3636)
0x361: Push((int) 3635)
0x362: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x363: Pop(3)
0x364: Return(); Pop(0)

0x365: Push((int) 3636)
0x366: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x367: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x368: PushEmpty(string)
0x369: Stack[-1] = "Neutral"
0x36a: Call 0x22b

0x36b: Pop(1)
0x36c: Push((int) 3389)
0x36d: @@ SetMessage(Stack[-1])
0x36e: Pop(1)
0x36f: @@ ClearReplies()
0x370: Pop(0)
0x371: Push((int) 3390)
0x372: Push((int) -1)
0x373: Push((int) 3637)
0x374: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x375: Pop(3)
0x376: Push((int) 3391)
0x377: Push((int) -1)
0x378: Push((int) 3638)
0x379: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37a: Pop(3)
0x37b: Return(); Pop(0)

0x37c: Push((int) 3639)
0x37d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x37f: PushEmpty(string)
0x380: Stack[-1] = "Neutral"
0x381: Call 0x22b

0x382: Pop(1)
0x383: Push((int) 3392)
0x384: @@ SetMessage(Stack[-1])
0x385: Pop(1)
0x386: @@ ClearReplies()
0x387: Pop(0)
0x388: Push((int) 3393)
0x389: Push((int) -1)
0x38a: Push((int) 3640)
0x38b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38c: Pop(3)
0x38d: Push((int) 3394)
0x38e: Push((int) -1)
0x38f: Push((int) 3641)
0x390: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x391: Pop(3)
0x392: Push((int) 3395)
0x393: Push((int) -1)
0x394: Push((int) 3642)
0x395: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x396: Pop(3)
0x397: Return(); Pop(0)

0x398: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x399: PushEmpty(bool)
0x39a: Call 0x1672

0x39b: Pop(0)
0x39c: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39d: @ lshStopAnimation()
0x39e: Pop(0)
0x39f: GOTO 0x3a2

0x3a0: @ StopAnimation()
0x3a1: Pop(0)
0x3a2: Return(); Pop(0)

0x3a3: GOTO 0x23c

0x3a4: Return(); Pop(0)

0x3a5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3a6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3a7: PushEmpty(bool, object)
0x3a8: Stack[-1] = Stack[-11]
0x3a9: Call 0x15bc

0x3aa: Pop(1)
0x3ab: Pop(1); Push((bool) Stack[-1] == 0)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ad: Stack[-10] = (int) -2
0x3ae: Return(); Pop(8)

0x3af: @ CreateDialog(Stack[-4])
0x3b0: Pop(0)
0x3b1: PushEmpty(int)
0x3b2: Call 0x166e

0x3b3: Pop(0)
0x3b4: @@ SetNPCName(Stack[-1])
0x3b5: Pop(1)
0x3b6: PushEmpty(string)
0x3b7: Call 0x1670

0x3b8: Pop(0)
0x3b9: @@ SetPhoto(Stack[-1])
0x3ba: Pop(1)
0x3bb: PushEmpty(int)
0x3bc: Call 0x1abe

0x3bd: Pop(0)
0x3be: @@ SetPlayerName(Stack[-1])
0x3bf: Pop(1)
0x3c0: Stack[-2] = (int) -1
0x3c1: @ IsOverrideActive(Stack[-3])
0x3c2: Pop(0)
0x3c3: Push(Stack[-3])
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c5: Stack[-10] = (int) -2
0x3c6: Return(); Pop(8)

0x3c7: @ DoDialog(Stack[-4])
0x3c8: Pop(0)
0x3c9: PushEmpty(object, object)
0x3ca: Stack[-2] = Stack[-11]
0x3cb: Stack[-1] = Stack[-6]
0x3cc: Push(-2, 4); TaskCall(7)
0x3cd: Call 0x3e4

0x3ce: Pop(-2, 4); TaskReturn
0x3cf: Pop(2)
0x3d0: @@ IsDialogEnd(Stack[-1])
0x3d1: Pop(0)
0x3d2: Pop(0); Push((bool) Stack[-1] == 0)
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d4: @ sync()
0x3d5: Pop(0)
0x3d6: @@ IsDialogEnd(Stack[-1])
0x3d7: Pop(0)
0x3d8: GOTO 0x3d2

0x3d9: PushEmpty(object)
0x3da: Stack[-1] = Stack[-10]
0x3db: Call 0x15f4

0x3dc: Pop(1)
0x3dd: @ StopDialog(Stack[-4])
0x3de: Pop(0)
0x3df: @@ GetReturnValue(Stack[-2])
0x3e0: Pop(0)
0x3e1: Stack[-10] = Stack[-2]
0x3e2: Return(); Pop(8)

0x3e3: Stack[-4] = 0
0x3e4: PushEmpty()
0x3e5: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3e6: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3e7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3e8: Push((int) 1)
0x3e9: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x3ea: PushEmpty(bool)
0x3eb: Stack[-1] = (bool) 0
0x3ec: PushEmpty(bool, object)
0x3ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ee: Call 0x1a43

0x3ef: Pop(1)
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f1: PushEmpty(bool, object)
0x3f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f3: Call 0x1830

0x3f4: Pop(1)
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f6: Stack[-1] = (bool) 1
0x3f7: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x3f8: PushEmpty(string)
0x3f9: Stack[-1] = "Neutral"
0x3fa: Call 0x516

0x3fb: Pop(1)
0x3fc: Push((int) 5449)
0x3fd: @@ SetMessage(Stack[-1])
0x3fe: Pop(1)
0x3ff: @@ ClearReplies()
0x400: Pop(0)
0x401: Push((int) 5453)
0x402: Push((int) 6575)
0x403: Push((int) 6007)
0x404: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x405: Pop(3)
0x406: Push((int) 5974)
0x407: Push((int) 6575)
0x408: Push((int) 6579)
0x409: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40a: Pop(3)
0x40b: GOTO 0x4f8

0x40c: PushEmpty(string)
0x40d: Stack[-1] = "Neutral"
0x40e: Call 0x516

0x40f: Pop(1)
0x410: Push((int) 5484)
0x411: @@ SetMessage(Stack[-1])
0x412: Pop(1)
0x413: @@ ClearReplies()
0x414: Pop(0)
0x415: PushEmpty(bool, object)
0x416: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x417: Call 0x1a4f

0x418: Pop(1)
0x419: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41a: Push((int) 8729)
0x41b: Push((int) 6028)
0x41c: Push((int) 9566)
0x41d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41e: Pop(3)
0x41f: PushEmpty(bool)
0x420: Stack[-1] = (bool) 0
0x421: PushEmpty(bool, object)
0x422: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x423: Call 0x1800

0x424: Pop(1)
0x425: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x426: PushEmpty(bool, object)
0x427: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x428: Call 0x1818

0x429: Pop(1)
0x42a: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x42b: Stack[-1] = (bool) 1
0x42c: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x42d: Push((int) 8728)
0x42e: Push((int) 6008)
0x42f: Push((int) 9565)
0x430: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x431: Pop(3)
0x432: PushEmpty(bool)
0x433: Stack[-1] = (bool) 0
0x434: PushEmpty(bool)
0x435: Stack[-1] = (bool) 0
0x436: PushEmpty(bool, object)
0x437: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x438: Call 0x180c

0x439: Pop(1)
0x43a: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x43b: PushEmpty(bool, object)
0x43c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x43d: Call 0x183c

0x43e: Pop(1)
0x43f: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x440: Stack[-1] = (bool) 1
0x441: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x442: PushEmpty(bool, object)
0x443: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x444: Call 0x1848

0x445: Pop(1)
0x446: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x447: Stack[-1] = (bool) 1
0x448: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x449: Push((int) 5451)
0x44a: Push((int) 6666)
0x44b: Push((int) 6005)
0x44c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44d: Pop(3)
0x44e: PushEmpty(bool)
0x44f: Stack[-1] = (bool) 0
0x450: PushEmpty(bool)
0x451: Stack[-1] = (bool) 0
0x452: PushEmpty(bool, object)
0x453: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x454: Call 0x1824

0x455: Pop(1)
0x456: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x457: PushEmpty(bool, object)
0x458: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x459: Call 0x1830

0x45a: Pop(1)
0x45b: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x45c: Stack[-1] = (bool) 1
0x45d: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x45e: PushEmpty(bool, object)
0x45f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x460: Call 0x1a43

0x461: Pop(1)
0x462: Pop(1); Push((bool) Stack[-1] == 0)
0x463: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x464: Stack[-1] = (bool) 1
0x465: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x466: Push((int) 5452)
0x467: Push((int) 9563)
0x468: Push((int) 6006)
0x469: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46a: Pop(3)
0x46b: PushEmpty(bool)
0x46c: Stack[-1] = (bool) 0
0x46d: PushEmpty(bool, object)
0x46e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x46f: Call 0x1854

0x470: Pop(1)
0x471: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x472: PushEmpty(bool, object)
0x473: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x474: Call 0x1860

0x475: Pop(1)
0x476: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x477: Stack[-1] = (bool) 1
0x478: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x479: Push((int) 6288)
0x47a: Push((int) 6941)
0x47b: Push((int) 6940)
0x47c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47d: Pop(3)
0x47e: PushEmpty(bool)
0x47f: Stack[-1] = (bool) 0
0x480: PushEmpty(bool, object)
0x481: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x482: Call 0x19d7

0x483: Pop(1)
0x484: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x485: PushEmpty(bool, object)
0x486: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x487: Call 0x189c

0x488: Pop(1)
0x489: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x48a: Stack[-1] = (bool) 1
0x48b: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x48c: Push((int) 7933)
0x48d: Push((int) 8773)
0x48e: Push((int) 8753)
0x48f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x490: Pop(3)
0x491: PushEmpty(bool)
0x492: Stack[-1] = (bool) 0
0x493: PushEmpty(bool, object)
0x494: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x495: Call 0x19cb

0x496: Pop(1)
0x497: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x498: PushEmpty(bool, object)
0x499: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x49a: Call 0x18a8

0x49b: Pop(1)
0x49c: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x49d: Stack[-1] = (bool) 1
0x49e: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x49f: Push((int) 7938)
0x4a0: Push((int) 8784)
0x4a1: Push((int) 8758)
0x4a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a3: Pop(3)
0x4a4: PushEmpty(bool)
0x4a5: Stack[-1] = (bool) 0
0x4a6: PushEmpty(bool, object)
0x4a7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a8: Call 0x19ef

0x4a9: Pop(1)
0x4aa: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4ab: PushEmpty(bool, object)
0x4ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ad: Call 0x18b4

0x4ae: Pop(1)
0x4af: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4b0: Stack[-1] = (bool) 1
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b2: Push((int) 7943)
0x4b3: Push((int) 8775)
0x4b4: Push((int) 8763)
0x4b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b6: Pop(3)
0x4b7: PushEmpty(bool)
0x4b8: Stack[-1] = (bool) 0
0x4b9: PushEmpty(bool, object)
0x4ba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4bb: Call 0x19e3

0x4bc: Pop(1)
0x4bd: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4be: PushEmpty(bool, object)
0x4bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c0: Call 0x18c0

0x4c1: Pop(1)
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c3: Stack[-1] = (bool) 1
0x4c4: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c5: Push((int) 7950)
0x4c6: Push((int) 8776)
0x4c7: Push((int) 8770)
0x4c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c9: Pop(3)
0x4ca: PushEmpty(bool)
0x4cb: Stack[-1] = (bool) 0
0x4cc: PushEmpty(bool, object)
0x4cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ce: Call 0x1a2b

0x4cf: Pop(1)
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d1: PushEmpty(bool, object)
0x4d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d3: Call 0x18cc

0x4d4: Pop(1)
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d6: Stack[-1] = (bool) 1
0x4d7: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4d8: Push((int) 7951)
0x4d9: Push((int) 8777)
0x4da: Push((int) 8771)
0x4db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4dc: Pop(3)
0x4dd: PushEmpty(bool)
0x4de: Stack[-1] = (bool) 0
0x4df: PushEmpty(bool, object)
0x4e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e1: Call 0x1a13

0x4e2: Pop(1)
0x4e3: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e4: PushEmpty(bool, object)
0x4e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e6: Call 0x18d8

0x4e7: Pop(1)
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e9: Stack[-1] = (bool) 1
0x4ea: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4eb: Push((int) 7952)
0x4ec: Push((int) 8778)
0x4ed: Push((int) 8772)
0x4ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ef: Pop(3)
0x4f0: Push((int) 6264)
0x4f1: Push((int) -1)
0x4f2: Push((int) 6931)
0x4f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f4: Pop(3)
0x4f5: GOTO 0x4f8

0x4f6: Return(); Pop(0)

0x4f7: GOTO 0x3e8

0x4f8: PushEmpty(bool)
0x4f9: Call 0x1672

0x4fa: Pop(0)
0x4fb: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x4fc: @ lshWaitForAnimEnd()
0x4fd: Pop(0)
0x4fe: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4ff: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x500: GOTO 0x506

0x501: PushEmpty(string)
0x502: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x503: Call 0x15f8

0x504: Pop(1)
0x505: GOTO 0x4fc

0x506: GOTO 0x515

0x507: Push("all")
0x508: Push("idle")
0x509: @ PlayAnimation(Stack[-2], Stack[-1])
0x50a: Pop(2)
0x50b: @ WaitForAnimEnd()
0x50c: Pop(0)
0x50d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x50e: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50f: GOTO 0x515

0x510: Push("all")
0x511: Push("idle")
0x512: @ PlayAnimation(Stack[-2], Stack[-1])
0x513: Pop(2)
0x514: GOTO 0x50b

0x515: Return(); Pop(0)

0x516: PushEmpty()
0x517: PushEmpty(bool)
0x518: Call 0x1672

0x519: Pop(0)
0x51a: Pop(1); Push((bool) Stack[-1] == 0)
0x51b: IF (Stack[-1] == 0) GOTO 0x51d; Pop(1)

0x51c: Return(); Pop(0)

0x51d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x51e: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51f: Return(); Pop(0)

0x520: PushEmpty(string)
0x521: Stack[-1] = Stack[-2]
0x522: Call 0x15f8

0x523: Pop(1)
0x524: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x525: Return(); Pop(0)

0x526: PushEmpty()
0x527: Push((int) 1)
0x528: IF (Stack[-1] == 0) GOTO 0xbfe; Pop(1)

0x529: PushEmpty()
0x52a: Call 0x160a

0x52b: Pop(0)
0x52c: Push((int) 6610)
0x52d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52e: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x52f: PushEmpty(object, object)
0x530: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x531: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x532: Call 0x167a

0x533: Pop(2)
0x534: PushEmpty(object, object)
0x535: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x536: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x537: Call 0x169e

0x538: Pop(2)
0x539: PushEmpty(object, object)
0x53a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x53b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53c: Call 0x16f3

0x53d: Pop(2)
0x53e: Push((int) 6606)
0x53f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x540: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x541: PushEmpty(object, object)
0x542: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x543: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x544: Call 0x167a

0x545: Pop(2)
0x546: Push((int) 6611)
0x547: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x548: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x549: PushEmpty(object, object)
0x54a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x54b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x54c: Call 0x167a

0x54d: Pop(2)
0x54e: PushEmpty(object, object)
0x54f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x550: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x551: Call 0x169e

0x552: Pop(2)
0x553: PushEmpty(object, object)
0x554: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x555: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x556: Call 0x16f3

0x557: Pop(2)
0x558: Push((int) 6612)
0x559: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x55a: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x55b: PushEmpty(object, object)
0x55c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x55d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x55e: Call 0x167a

0x55f: Pop(2)
0x560: Push((int) 6035)
0x561: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x562: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x563: PushEmpty(object, object)
0x564: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x565: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x566: Call 0x1680

0x567: Pop(2)
0x568: Push((int) 6036)
0x569: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x56a: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x56b: PushEmpty(object, object)
0x56c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x56d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x56e: Call 0x1680

0x56f: Pop(2)
0x570: Push((int) 6037)
0x571: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x572: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x573: PushEmpty(object, object)
0x574: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x575: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x576: Call 0x1680

0x577: Pop(2)
0x578: Push((int) 6038)
0x579: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x57a: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57b: PushEmpty(object, object)
0x57c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x57e: Call 0x1680

0x57f: Pop(2)
0x580: Push((int) 6041)
0x581: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x582: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x583: PushEmpty(object, object)
0x584: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x585: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x586: Call 0x1680

0x587: Pop(2)
0x588: Push((int) 6042)
0x589: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x58a: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x58b: PushEmpty(object, object)
0x58c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x58d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58e: Call 0x1680

0x58f: Pop(2)
0x590: Push((int) 6015)
0x591: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x592: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x593: PushEmpty(object, object)
0x594: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x595: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x596: Call 0x1686

0x597: Pop(2)
0x598: Push((int) 6016)
0x599: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x59a: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59b: PushEmpty(object, object)
0x59c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x59d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x59e: Call 0x1686

0x59f: Pop(2)
0x5a0: Push((int) 6017)
0x5a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a3: PushEmpty(object, object)
0x5a4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a6: Call 0x1686

0x5a7: Pop(2)
0x5a8: Push((int) 6675)
0x5a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5aa: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5ab: PushEmpty(object, object)
0x5ac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ae: Call 0x168c

0x5af: Pop(2)
0x5b0: Push((int) 6700)
0x5b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b2: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5b3: PushEmpty(object, object)
0x5b4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5b5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5b6: Call 0x168c

0x5b7: Pop(2)
0x5b8: Push((int) 6701)
0x5b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ba: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5bb: PushEmpty(object, object)
0x5bc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5bd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5be: Call 0x168c

0x5bf: Pop(2)
0x5c0: Push((int) 6006)
0x5c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c3: PushEmpty(object, object)
0x5c4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c6: Call 0x169e

0x5c7: Pop(2)
0x5c8: Push((int) 9564)
0x5c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ca: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5cb: PushEmpty(object, object)
0x5cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ce: Call 0x169e

0x5cf: Pop(2)
0x5d0: PushEmpty(object, object)
0x5d1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d3: Call 0x16f3

0x5d4: Pop(2)
0x5d5: Push((int) 6942)
0x5d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d7: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5d8: PushEmpty(object, object)
0x5d9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5db: Call 0x16b9

0x5dc: Pop(2)
0x5dd: Push((int) 6943)
0x5de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5df: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5e0: PushEmpty(object, object)
0x5e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5e3: Call 0x16b9

0x5e4: Pop(2)
0x5e5: Push((int) 8783)
0x5e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e7: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5e8: PushEmpty(object, object)
0x5e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5eb: Call 0x1713

0x5ec: Pop(2)
0x5ed: Push((int) 8794)
0x5ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5f0: PushEmpty(object, object)
0x5f1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f3: Call 0x1719

0x5f4: Pop(2)
0x5f5: Push((int) 8803)
0x5f6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5f8: PushEmpty(object, object)
0x5f9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5fa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5fb: Call 0x171f

0x5fc: Pop(2)
0x5fd: Push((int) 8804)
0x5fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ff: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x600: PushEmpty(object, object)
0x601: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x602: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x603: Call 0x171f

0x604: Pop(2)
0x605: Push((int) 8811)
0x606: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x607: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x608: PushEmpty(object, object)
0x609: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x60a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x60b: Call 0x1725

0x60c: Pop(2)
0x60d: Push((int) 8812)
0x60e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x60f: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x610: PushEmpty(object, object)
0x611: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x612: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x613: Call 0x1725

0x614: Pop(2)
0x615: Push((int) 8817)
0x616: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x617: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x618: PushEmpty(object, object)
0x619: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x61a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x61b: Call 0x1725

0x61c: Pop(2)
0x61d: Push((int) 9568)
0x61e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x61f: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x620: PushEmpty(object, object)
0x621: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x622: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x623: Call 0x172b

0x624: Pop(2)
0x625: Push((int) 6003)
0x626: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x627: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x628: PushEmpty(bool)
0x629: Stack[-1] = (bool) 0
0x62a: PushEmpty(bool, object)
0x62b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62c: Call 0x1a43

0x62d: Pop(1)
0x62e: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x62f: PushEmpty(bool, object)
0x630: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x631: Call 0x1830

0x632: Pop(1)
0x633: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x634: Stack[-1] = (bool) 1
0x635: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x636: PushEmpty(string)
0x637: Stack[-1] = "Neutral"
0x638: Call 0x516

0x639: Pop(1)
0x63a: Push((int) 5449)
0x63b: @@ SetMessage(Stack[-1])
0x63c: Pop(1)
0x63d: @@ ClearReplies()
0x63e: Pop(0)
0x63f: Push((int) 5453)
0x640: Push((int) 6575)
0x641: Push((int) 6007)
0x642: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x643: Pop(3)
0x644: Push((int) 5974)
0x645: Push((int) 6575)
0x646: Push((int) 6579)
0x647: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x648: Pop(3)
0x649: Return(); Pop(0)

0x64a: PushEmpty(string)
0x64b: Stack[-1] = "Neutral"
0x64c: Call 0x516

0x64d: Pop(1)
0x64e: Push((int) 5484)
0x64f: @@ SetMessage(Stack[-1])
0x650: Pop(1)
0x651: @@ ClearReplies()
0x652: Pop(0)
0x653: PushEmpty(bool, object)
0x654: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x655: Call 0x1a4f

0x656: Pop(1)
0x657: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x658: Push((int) 8729)
0x659: Push((int) 6028)
0x65a: Push((int) 9566)
0x65b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65c: Pop(3)
0x65d: PushEmpty(bool)
0x65e: Stack[-1] = (bool) 0
0x65f: PushEmpty(bool, object)
0x660: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x661: Call 0x1800

0x662: Pop(1)
0x663: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x664: PushEmpty(bool, object)
0x665: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x666: Call 0x1818

0x667: Pop(1)
0x668: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x669: Stack[-1] = (bool) 1
0x66a: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x66b: Push((int) 8728)
0x66c: Push((int) 6008)
0x66d: Push((int) 9565)
0x66e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66f: Pop(3)
0x670: PushEmpty(bool)
0x671: Stack[-1] = (bool) 0
0x672: PushEmpty(bool)
0x673: Stack[-1] = (bool) 0
0x674: PushEmpty(bool, object)
0x675: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x676: Call 0x180c

0x677: Pop(1)
0x678: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x679: PushEmpty(bool, object)
0x67a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x67b: Call 0x183c

0x67c: Pop(1)
0x67d: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67e: Stack[-1] = (bool) 1
0x67f: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x680: PushEmpty(bool, object)
0x681: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x682: Call 0x1848

0x683: Pop(1)
0x684: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x685: Stack[-1] = (bool) 1
0x686: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x687: Push((int) 5451)
0x688: Push((int) 6666)
0x689: Push((int) 6005)
0x68a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68b: Pop(3)
0x68c: PushEmpty(bool)
0x68d: Stack[-1] = (bool) 0
0x68e: PushEmpty(bool)
0x68f: Stack[-1] = (bool) 0
0x690: PushEmpty(bool, object)
0x691: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x692: Call 0x1824

0x693: Pop(1)
0x694: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x695: PushEmpty(bool, object)
0x696: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x697: Call 0x1830

0x698: Pop(1)
0x699: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x69a: Stack[-1] = (bool) 1
0x69b: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x69c: PushEmpty(bool, object)
0x69d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69e: Call 0x1a43

0x69f: Pop(1)
0x6a0: Pop(1); Push((bool) Stack[-1] == 0)
0x6a1: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x6a2: Stack[-1] = (bool) 1
0x6a3: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x6a4: Push((int) 5452)
0x6a5: Push((int) 9563)
0x6a6: Push((int) 6006)
0x6a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a8: Pop(3)
0x6a9: PushEmpty(bool)
0x6aa: Stack[-1] = (bool) 0
0x6ab: PushEmpty(bool, object)
0x6ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6ad: Call 0x1854

0x6ae: Pop(1)
0x6af: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6b0: PushEmpty(bool, object)
0x6b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b2: Call 0x1860

0x6b3: Pop(1)
0x6b4: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6b5: Stack[-1] = (bool) 1
0x6b6: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6b7: Push((int) 6288)
0x6b8: Push((int) 6941)
0x6b9: Push((int) 6940)
0x6ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bb: Pop(3)
0x6bc: PushEmpty(bool)
0x6bd: Stack[-1] = (bool) 0
0x6be: PushEmpty(bool, object)
0x6bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c0: Call 0x19d7

0x6c1: Pop(1)
0x6c2: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c3: PushEmpty(bool, object)
0x6c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c5: Call 0x189c

0x6c6: Pop(1)
0x6c7: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c8: Stack[-1] = (bool) 1
0x6c9: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6ca: Push((int) 7933)
0x6cb: Push((int) 8773)
0x6cc: Push((int) 8753)
0x6cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ce: Pop(3)
0x6cf: PushEmpty(bool)
0x6d0: Stack[-1] = (bool) 0
0x6d1: PushEmpty(bool, object)
0x6d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d3: Call 0x19cb

0x6d4: Pop(1)
0x6d5: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6d6: PushEmpty(bool, object)
0x6d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d8: Call 0x18a8

0x6d9: Pop(1)
0x6da: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6db: Stack[-1] = (bool) 1
0x6dc: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6dd: Push((int) 7938)
0x6de: Push((int) 8784)
0x6df: Push((int) 8758)
0x6e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e1: Pop(3)
0x6e2: PushEmpty(bool)
0x6e3: Stack[-1] = (bool) 0
0x6e4: PushEmpty(bool, object)
0x6e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e6: Call 0x19ef

0x6e7: Pop(1)
0x6e8: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6e9: PushEmpty(bool, object)
0x6ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6eb: Call 0x18b4

0x6ec: Pop(1)
0x6ed: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6ee: Stack[-1] = (bool) 1
0x6ef: IF (Stack[-1] == 0) GOTO 0x6f5; Pop(1)

0x6f0: Push((int) 7943)
0x6f1: Push((int) 8775)
0x6f2: Push((int) 8763)
0x6f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f4: Pop(3)
0x6f5: PushEmpty(bool)
0x6f6: Stack[-1] = (bool) 0
0x6f7: PushEmpty(bool, object)
0x6f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f9: Call 0x19e3

0x6fa: Pop(1)
0x6fb: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x6fc: PushEmpty(bool, object)
0x6fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6fe: Call 0x18c0

0x6ff: Pop(1)
0x700: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x701: Stack[-1] = (bool) 1
0x702: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x703: Push((int) 7950)
0x704: Push((int) 8776)
0x705: Push((int) 8770)
0x706: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x707: Pop(3)
0x708: PushEmpty(bool)
0x709: Stack[-1] = (bool) 0
0x70a: PushEmpty(bool, object)
0x70b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x70c: Call 0x1a2b

0x70d: Pop(1)
0x70e: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x70f: PushEmpty(bool, object)
0x710: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x711: Call 0x18cc

0x712: Pop(1)
0x713: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x714: Stack[-1] = (bool) 1
0x715: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x716: Push((int) 7951)
0x717: Push((int) 8777)
0x718: Push((int) 8771)
0x719: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71a: Pop(3)
0x71b: PushEmpty(bool)
0x71c: Stack[-1] = (bool) 0
0x71d: PushEmpty(bool, object)
0x71e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x71f: Call 0x1a13

0x720: Pop(1)
0x721: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x722: PushEmpty(bool, object)
0x723: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x724: Call 0x18d8

0x725: Pop(1)
0x726: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x727: Stack[-1] = (bool) 1
0x728: IF (Stack[-1] == 0) GOTO 0x72e; Pop(1)

0x729: Push((int) 7952)
0x72a: Push((int) 8778)
0x72b: Push((int) 8772)
0x72c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72d: Pop(3)
0x72e: Push((int) 6264)
0x72f: Push((int) -1)
0x730: Push((int) 6931)
0x731: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x732: Pop(3)
0x733: Return(); Pop(0)

0x734: Push((int) 8778)
0x735: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x736: IF (Stack[-1] == 0) GOTO 0x74b; Pop(1)

0x737: PushEmpty(object, object)
0x738: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x739: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x73a: Call 0x17fa

0x73b: Pop(2)
0x73c: PushEmpty(string)
0x73d: Stack[-1] = "Neutral"
0x73e: Call 0x516

0x73f: Pop(1)
0x740: Push((int) 7958)
0x741: @@ SetMessage(Stack[-1])
0x742: Pop(1)
0x743: @@ ClearReplies()
0x744: Pop(0)
0x745: Push((int) 8000)
0x746: Push((int) 9567)
0x747: Push((int) 8823)
0x748: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x749: Pop(3)
0x74a: Return(); Pop(0)

0x74b: Push((int) 9567)
0x74c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x74d: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x74e: PushEmpty(string)
0x74f: Stack[-1] = "Neutral"
0x750: Call 0x516

0x751: Pop(1)
0x752: Push((int) 8730)
0x753: @@ SetMessage(Stack[-1])
0x754: Pop(1)
0x755: @@ ClearReplies()
0x756: Pop(0)
0x757: Push((int) 8731)
0x758: Push((int) -1)
0x759: Push((int) 9568)
0x75a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75b: Pop(3)
0x75c: Return(); Pop(0)

0x75d: Push((int) 8777)
0x75e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x75f: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x760: PushEmpty(string)
0x761: Stack[-1] = "Neutral"
0x762: Call 0x516

0x763: Pop(1)
0x764: Push((int) 7957)
0x765: @@ SetMessage(Stack[-1])
0x766: Pop(1)
0x767: @@ ClearReplies()
0x768: Pop(0)
0x769: Push((int) 7995)
0x76a: Push((int) 8819)
0x76b: Push((int) 8818)
0x76c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76d: Pop(3)
0x76e: Return(); Pop(0)

0x76f: Push((int) 8819)
0x770: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x771: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x772: PushEmpty(string)
0x773: Stack[-1] = "Neutral"
0x774: Call 0x516

0x775: Pop(1)
0x776: Push((int) 7996)
0x777: @@ SetMessage(Stack[-1])
0x778: Pop(1)
0x779: @@ ClearReplies()
0x77a: Pop(0)
0x77b: Push((int) 7997)
0x77c: Push((int) 9569)
0x77d: Push((int) 8820)
0x77e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77f: Pop(3)
0x780: Return(); Pop(0)

0x781: Push((int) 9569)
0x782: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x783: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x784: PushEmpty(string)
0x785: Stack[-1] = "Neutral"
0x786: Call 0x516

0x787: Pop(1)
0x788: Push((int) 8732)
0x789: @@ SetMessage(Stack[-1])
0x78a: Pop(1)
0x78b: @@ ClearReplies()
0x78c: Pop(0)
0x78d: Push((int) 8733)
0x78e: Push((int) 9571)
0x78f: Push((int) 9570)
0x790: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x791: Pop(3)
0x792: Return(); Pop(0)

0x793: Push((int) 9571)
0x794: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x795: IF (Stack[-1] == 0) GOTO 0x7a5; Pop(1)

0x796: PushEmpty(string)
0x797: Stack[-1] = "Neutral"
0x798: Call 0x516

0x799: Pop(1)
0x79a: Push((int) 8734)
0x79b: @@ SetMessage(Stack[-1])
0x79c: Pop(1)
0x79d: @@ ClearReplies()
0x79e: Pop(0)
0x79f: Push((int) 8735)
0x7a0: Push((int) -1)
0x7a1: Push((int) 9572)
0x7a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a3: Pop(3)
0x7a4: Return(); Pop(0)

0x7a5: Push((int) 8776)
0x7a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a7: IF (Stack[-1] == 0) GOTO 0x7bc; Pop(1)

0x7a8: PushEmpty(string)
0x7a9: Stack[-1] = "Neutral"
0x7aa: Call 0x516

0x7ab: Pop(1)
0x7ac: Push((int) 7956)
0x7ad: @@ SetMessage(Stack[-1])
0x7ae: Pop(1)
0x7af: @@ ClearReplies()
0x7b0: Pop(0)
0x7b1: Push((int) 7983)
0x7b2: Push((int) 8807)
0x7b3: Push((int) 8805)
0x7b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b5: Pop(3)
0x7b6: Push((int) 7984)
0x7b7: Push((int) 8807)
0x7b8: Push((int) 8806)
0x7b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ba: Pop(3)
0x7bb: Return(); Pop(0)

0x7bc: Push((int) 8807)
0x7bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7be: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7bf: PushEmpty(string)
0x7c0: Stack[-1] = "Neutral"
0x7c1: Call 0x516

0x7c2: Pop(1)
0x7c3: Push((int) 7985)
0x7c4: @@ SetMessage(Stack[-1])
0x7c5: Pop(1)
0x7c6: @@ ClearReplies()
0x7c7: Pop(0)
0x7c8: Push((int) 7986)
0x7c9: Push((int) 8810)
0x7ca: Push((int) 8809)
0x7cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cc: Pop(3)
0x7cd: Push((int) 7990)
0x7ce: Push((int) 8814)
0x7cf: Push((int) 8813)
0x7d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d1: Pop(3)
0x7d2: Return(); Pop(0)

0x7d3: Push((int) 8814)
0x7d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d5: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7d6: PushEmpty(string)
0x7d7: Stack[-1] = "Neutral"
0x7d8: Call 0x516

0x7d9: Pop(1)
0x7da: Push((int) 7991)
0x7db: @@ SetMessage(Stack[-1])
0x7dc: Pop(1)
0x7dd: @@ ClearReplies()
0x7de: Pop(0)
0x7df: Push((int) 7992)
0x7e0: Push((int) 8816)
0x7e1: Push((int) 8815)
0x7e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e3: Pop(3)
0x7e4: Return(); Pop(0)

0x7e5: Push((int) 8816)
0x7e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e7: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7e8: PushEmpty(string)
0x7e9: Stack[-1] = "Neutral"
0x7ea: Call 0x516

0x7eb: Pop(1)
0x7ec: Push((int) 7993)
0x7ed: @@ SetMessage(Stack[-1])
0x7ee: Pop(1)
0x7ef: @@ ClearReplies()
0x7f0: Pop(0)
0x7f1: Push((int) 7994)
0x7f2: Push((int) -1)
0x7f3: Push((int) 8817)
0x7f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f5: Pop(3)
0x7f6: Return(); Pop(0)

0x7f7: Push((int) 8810)
0x7f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f9: IF (Stack[-1] == 0) GOTO 0x80e; Pop(1)

0x7fa: PushEmpty(string)
0x7fb: Stack[-1] = "Neutral"
0x7fc: Call 0x516

0x7fd: Pop(1)
0x7fe: Push((int) 7987)
0x7ff: @@ SetMessage(Stack[-1])
0x800: Pop(1)
0x801: @@ ClearReplies()
0x802: Pop(0)
0x803: Push((int) 7988)
0x804: Push((int) -1)
0x805: Push((int) 8811)
0x806: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x807: Pop(3)
0x808: Push((int) 7989)
0x809: Push((int) -1)
0x80a: Push((int) 8812)
0x80b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80c: Pop(3)
0x80d: Return(); Pop(0)

0x80e: Push((int) 8775)
0x80f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x810: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x811: PushEmpty(string)
0x812: Stack[-1] = "Neutral"
0x813: Call 0x516

0x814: Pop(1)
0x815: Push((int) 7955)
0x816: @@ SetMessage(Stack[-1])
0x817: Pop(1)
0x818: @@ ClearReplies()
0x819: Pop(0)
0x81a: Push((int) 7977)
0x81b: Push((int) 8800)
0x81c: Push((int) 8799)
0x81d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81e: Pop(3)
0x81f: Return(); Pop(0)

0x820: Push((int) 8800)
0x821: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x822: IF (Stack[-1] == 0) GOTO 0x832; Pop(1)

0x823: PushEmpty(string)
0x824: Stack[-1] = "Neutral"
0x825: Call 0x516

0x826: Pop(1)
0x827: Push((int) 7978)
0x828: @@ SetMessage(Stack[-1])
0x829: Pop(1)
0x82a: @@ ClearReplies()
0x82b: Pop(0)
0x82c: Push((int) 7979)
0x82d: Push((int) 8802)
0x82e: Push((int) 8801)
0x82f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x830: Pop(3)
0x831: Return(); Pop(0)

0x832: Push((int) 8802)
0x833: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x834: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x835: PushEmpty(string)
0x836: Stack[-1] = "Neutral"
0x837: Call 0x516

0x838: Pop(1)
0x839: Push((int) 7980)
0x83a: @@ SetMessage(Stack[-1])
0x83b: Pop(1)
0x83c: @@ ClearReplies()
0x83d: Pop(0)
0x83e: Push((int) 7981)
0x83f: Push((int) -1)
0x840: Push((int) 8803)
0x841: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x842: Pop(3)
0x843: Push((int) 7982)
0x844: Push((int) -1)
0x845: Push((int) 8804)
0x846: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x847: Pop(3)
0x848: Return(); Pop(0)

0x849: Push((int) 8784)
0x84a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x84b: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x84c: PushEmpty(string)
0x84d: Stack[-1] = "Neutral"
0x84e: Call 0x516

0x84f: Pop(1)
0x850: Push((int) 7964)
0x851: @@ SetMessage(Stack[-1])
0x852: Pop(1)
0x853: @@ ClearReplies()
0x854: Pop(0)
0x855: Push((int) 7965)
0x856: Push((int) 8786)
0x857: Push((int) 8785)
0x858: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x859: Pop(3)
0x85a: Return(); Pop(0)

0x85b: Push((int) 8786)
0x85c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x85d: IF (Stack[-1] == 0) GOTO 0x872; Pop(1)

0x85e: PushEmpty(string)
0x85f: Stack[-1] = "Neutral"
0x860: Call 0x516

0x861: Pop(1)
0x862: Push((int) 7966)
0x863: @@ SetMessage(Stack[-1])
0x864: Pop(1)
0x865: @@ ClearReplies()
0x866: Pop(0)
0x867: Push((int) 7967)
0x868: Push((int) 8774)
0x869: Push((int) 8787)
0x86a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86b: Pop(3)
0x86c: Push((int) 7976)
0x86d: Push((int) 8774)
0x86e: Push((int) 8797)
0x86f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x870: Pop(3)
0x871: Return(); Pop(0)

0x872: Push((int) 8774)
0x873: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x874: IF (Stack[-1] == 0) GOTO 0x889; Pop(1)

0x875: PushEmpty(string)
0x876: Stack[-1] = "Neutral"
0x877: Call 0x516

0x878: Pop(1)
0x879: Push((int) 7954)
0x87a: @@ SetMessage(Stack[-1])
0x87b: Pop(1)
0x87c: @@ ClearReplies()
0x87d: Pop(0)
0x87e: Push((int) 7969)
0x87f: Push((int) 8790)
0x880: Push((int) 8789)
0x881: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x882: Pop(3)
0x883: Push((int) 7975)
0x884: Push((int) 8790)
0x885: Push((int) 8795)
0x886: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x887: Pop(3)
0x888: Return(); Pop(0)

0x889: Push((int) 8790)
0x88a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x88b: IF (Stack[-1] == 0) GOTO 0x89b; Pop(1)

0x88c: PushEmpty(string)
0x88d: Stack[-1] = "Neutral"
0x88e: Call 0x516

0x88f: Pop(1)
0x890: Push((int) 7970)
0x891: @@ SetMessage(Stack[-1])
0x892: Pop(1)
0x893: @@ ClearReplies()
0x894: Pop(0)
0x895: Push((int) 7971)
0x896: Push((int) 8792)
0x897: Push((int) 8791)
0x898: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x899: Pop(3)
0x89a: Return(); Pop(0)

0x89b: Push((int) 8792)
0x89c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x89d: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x89e: PushEmpty(string)
0x89f: Stack[-1] = "Neutral"
0x8a0: Call 0x516

0x8a1: Pop(1)
0x8a2: Push((int) 7972)
0x8a3: @@ SetMessage(Stack[-1])
0x8a4: Pop(1)
0x8a5: @@ ClearReplies()
0x8a6: Pop(0)
0x8a7: Push((int) 7974)
0x8a8: Push((int) -1)
0x8a9: Push((int) 8794)
0x8aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ab: Pop(3)
0x8ac: Return(); Pop(0)

0x8ad: Push((int) 8773)
0x8ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8af: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x8b0: PushEmpty(string)
0x8b1: Stack[-1] = "Neutral"
0x8b2: Call 0x516

0x8b3: Pop(1)
0x8b4: Push((int) 7953)
0x8b5: @@ SetMessage(Stack[-1])
0x8b6: Pop(1)
0x8b7: @@ ClearReplies()
0x8b8: Pop(0)
0x8b9: Push((int) 7959)
0x8ba: Push((int) 8780)
0x8bb: Push((int) 8779)
0x8bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bd: Pop(3)
0x8be: Return(); Pop(0)

0x8bf: Push((int) 8780)
0x8c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c1: IF (Stack[-1] == 0) GOTO 0x8d1; Pop(1)

0x8c2: PushEmpty(string)
0x8c3: Stack[-1] = "Neutral"
0x8c4: Call 0x516

0x8c5: Pop(1)
0x8c6: Push((int) 7960)
0x8c7: @@ SetMessage(Stack[-1])
0x8c8: Pop(1)
0x8c9: @@ ClearReplies()
0x8ca: Pop(0)
0x8cb: Push((int) 7961)
0x8cc: Push((int) 8782)
0x8cd: Push((int) 8781)
0x8ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cf: Pop(3)
0x8d0: Return(); Pop(0)

0x8d1: Push((int) 8782)
0x8d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d3: IF (Stack[-1] == 0) GOTO 0x8e3; Pop(1)

0x8d4: PushEmpty(string)
0x8d5: Stack[-1] = "Neutral"
0x8d6: Call 0x516

0x8d7: Pop(1)
0x8d8: Push((int) 7962)
0x8d9: @@ SetMessage(Stack[-1])
0x8da: Pop(1)
0x8db: @@ ClearReplies()
0x8dc: Pop(0)
0x8dd: Push((int) 7963)
0x8de: Push((int) -1)
0x8df: Push((int) 8783)
0x8e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e1: Pop(3)
0x8e2: Return(); Pop(0)

0x8e3: Push((int) 6941)
0x8e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e5: IF (Stack[-1] == 0) GOTO 0x8fa; Pop(1)

0x8e6: PushEmpty(string)
0x8e7: Stack[-1] = "Neutral"
0x8e8: Call 0x516

0x8e9: Pop(1)
0x8ea: Push((int) 6289)
0x8eb: @@ SetMessage(Stack[-1])
0x8ec: Pop(1)
0x8ed: @@ ClearReplies()
0x8ee: Pop(0)
0x8ef: Push((int) 6290)
0x8f0: Push((int) -1)
0x8f1: Push((int) 6942)
0x8f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f3: Pop(3)
0x8f4: Push((int) 6291)
0x8f5: Push((int) -1)
0x8f6: Push((int) 6943)
0x8f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f8: Pop(3)
0x8f9: Return(); Pop(0)

0x8fa: Push((int) 9563)
0x8fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8fc: IF (Stack[-1] == 0) GOTO 0x90c; Pop(1)

0x8fd: PushEmpty(string)
0x8fe: Stack[-1] = "Neutral"
0x8ff: Call 0x516

0x900: Pop(1)
0x901: Push((int) 8726)
0x902: @@ SetMessage(Stack[-1])
0x903: Pop(1)
0x904: @@ ClearReplies()
0x905: Pop(0)
0x906: Push((int) 8727)
0x907: Push((int) -1)
0x908: Push((int) 9564)
0x909: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90a: Pop(3)
0x90b: Return(); Pop(0)

0x90c: Push((int) 6666)
0x90d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x90e: IF (Stack[-1] == 0) GOTO 0x928; Pop(1)

0x90f: PushEmpty(object, object)
0x910: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x911: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x912: Call 0x168c

0x913: Pop(2)
0x914: PushEmpty(string)
0x915: Stack[-1] = "Neutral"
0x916: Call 0x516

0x917: Pop(1)
0x918: Push((int) 6043)
0x919: @@ SetMessage(Stack[-1])
0x91a: Pop(1)
0x91b: @@ ClearReplies()
0x91c: Pop(0)
0x91d: Push((int) 6044)
0x91e: Push((int) 6670)
0x91f: Push((int) 6667)
0x920: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x921: Pop(3)
0x922: Push((int) 6045)
0x923: Push((int) 6669)
0x924: Push((int) 6668)
0x925: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x926: Pop(3)
0x927: Return(); Pop(0)

0x928: Push((int) 6669)
0x929: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x92a: IF (Stack[-1] == 0) GOTO 0x93f; Pop(1)

0x92b: PushEmpty(string)
0x92c: Stack[-1] = "Neutral"
0x92d: Call 0x516

0x92e: Pop(1)
0x92f: Push((int) 6046)
0x930: @@ SetMessage(Stack[-1])
0x931: Pop(1)
0x932: @@ ClearReplies()
0x933: Pop(0)
0x934: Push((int) 6053)
0x935: Push((int) 6679)
0x936: Push((int) 6677)
0x937: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x938: Pop(3)
0x939: Push((int) 6054)
0x93a: Push((int) 6681)
0x93b: Push((int) 6678)
0x93c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93d: Pop(3)
0x93e: Return(); Pop(0)

0x93f: Push((int) 6679)
0x940: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x941: IF (Stack[-1] == 0) GOTO 0x95c; Pop(1)

0x942: PushEmpty(string)
0x943: Stack[-1] = "Neutral"
0x944: Call 0x516

0x945: Pop(1)
0x946: Push((int) 6055)
0x947: @@ SetMessage(Stack[-1])
0x948: Pop(1)
0x949: @@ ClearReplies()
0x94a: Pop(0)
0x94b: Push((int) 6056)
0x94c: Push((int) 6681)
0x94d: Push((int) 6680)
0x94e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94f: Pop(3)
0x950: PushEmpty(bool, object)
0x951: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x952: Call 0x1a37

0x953: Pop(1)
0x954: Pop(1); Push((bool) Stack[-1] == 0)
0x955: IF (Stack[-1] == 0) GOTO 0x95b; Pop(1)

0x956: Push((int) 6058)
0x957: Push((int) 6702)
0x958: Push((int) 6683)
0x959: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95a: Pop(3)
0x95b: Return(); Pop(0)

0x95c: Push((int) 6702)
0x95d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x95e: IF (Stack[-1] == 0) GOTO 0x973; Pop(1)

0x95f: PushEmpty(object, object)
0x960: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x961: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x962: Call 0x1674

0x963: Pop(2)
0x964: PushEmpty(string)
0x965: Stack[-1] = "Neutral"
0x966: Call 0x516

0x967: Pop(1)
0x968: Push((int) 6074)
0x969: @@ SetMessage(Stack[-1])
0x96a: Pop(1)
0x96b: @@ ClearReplies()
0x96c: Pop(0)
0x96d: Push((int) 6075)
0x96e: Push((int) 6681)
0x96f: Push((int) 6703)
0x970: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x971: Pop(3)
0x972: Return(); Pop(0)

0x973: Push((int) 6681)
0x974: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x975: IF (Stack[-1] == 0) GOTO 0x98a; Pop(1)

0x976: PushEmpty(string)
0x977: Stack[-1] = "Neutral"
0x978: Call 0x516

0x979: Pop(1)
0x97a: Push((int) 6057)
0x97b: @@ SetMessage(Stack[-1])
0x97c: Pop(1)
0x97d: @@ ClearReplies()
0x97e: Pop(0)
0x97f: Push((int) 6059)
0x980: Push((int) 6686)
0x981: Push((int) 6684)
0x982: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x983: Pop(3)
0x984: Push((int) 6060)
0x985: Push((int) 6688)
0x986: Push((int) 6685)
0x987: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x988: Pop(3)
0x989: Return(); Pop(0)

0x98a: Push((int) 6688)
0x98b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x98c: IF (Stack[-1] == 0) GOTO 0x99c; Pop(1)

0x98d: PushEmpty(string)
0x98e: Stack[-1] = "Neutral"
0x98f: Call 0x516

0x990: Pop(1)
0x991: Push((int) 6063)
0x992: @@ SetMessage(Stack[-1])
0x993: Pop(1)
0x994: @@ ClearReplies()
0x995: Pop(0)
0x996: Push((int) 6064)
0x997: Push((int) 6686)
0x998: Push((int) 6689)
0x999: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99a: Pop(3)
0x99b: Return(); Pop(0)

0x99c: Push((int) 6686)
0x99d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x99e: IF (Stack[-1] == 0) GOTO 0x9ae; Pop(1)

0x99f: PushEmpty(string)
0x9a0: Stack[-1] = "Neutral"
0x9a1: Call 0x516

0x9a2: Pop(1)
0x9a3: Push((int) 6061)
0x9a4: @@ SetMessage(Stack[-1])
0x9a5: Pop(1)
0x9a6: @@ ClearReplies()
0x9a7: Pop(0)
0x9a8: Push((int) 6062)
0x9a9: Push((int) 6691)
0x9aa: Push((int) 6687)
0x9ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ac: Pop(3)
0x9ad: Return(); Pop(0)

0x9ae: Push((int) 6691)
0x9af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b0: IF (Stack[-1] == 0) GOTO 0x9c5; Pop(1)

0x9b1: PushEmpty(string)
0x9b2: Stack[-1] = "Neutral"
0x9b3: Call 0x516

0x9b4: Pop(1)
0x9b5: Push((int) 6065)
0x9b6: @@ SetMessage(Stack[-1])
0x9b7: Pop(1)
0x9b8: @@ ClearReplies()
0x9b9: Pop(0)
0x9ba: Push((int) 6066)
0x9bb: Push((int) 6696)
0x9bc: Push((int) 6692)
0x9bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9be: Pop(3)
0x9bf: Push((int) 6067)
0x9c0: Push((int) 6694)
0x9c1: Push((int) 6693)
0x9c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c3: Pop(3)
0x9c4: Return(); Pop(0)

0x9c5: Push((int) 6694)
0x9c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9c7: IF (Stack[-1] == 0) GOTO 0x9dc; Pop(1)

0x9c8: PushEmpty(string)
0x9c9: Stack[-1] = "Neutral"
0x9ca: Call 0x516

0x9cb: Pop(1)
0x9cc: Push((int) 6068)
0x9cd: @@ SetMessage(Stack[-1])
0x9ce: Pop(1)
0x9cf: @@ ClearReplies()
0x9d0: Pop(0)
0x9d1: Push((int) 6069)
0x9d2: Push((int) 6696)
0x9d3: Push((int) 6695)
0x9d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d5: Pop(3)
0x9d6: Push((int) 6071)
0x9d7: Push((int) 6696)
0x9d8: Push((int) 6698)
0x9d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9da: Pop(3)
0x9db: Return(); Pop(0)

0x9dc: Push((int) 6696)
0x9dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9de: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9df: PushEmpty(object, object)
0x9e0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9e1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9e2: Call 0x16bf

0x9e3: Pop(2)
0x9e4: PushEmpty(object, object)
0x9e5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9e6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9e7: Call 0x16ca

0x9e8: Pop(2)
0x9e9: PushEmpty(string)
0x9ea: Stack[-1] = "Neutral"
0x9eb: Call 0x516

0x9ec: Pop(1)
0x9ed: Push((int) 6070)
0x9ee: @@ SetMessage(Stack[-1])
0x9ef: Pop(1)
0x9f0: @@ ClearReplies()
0x9f1: Pop(0)
0x9f2: Push((int) 6072)
0x9f3: Push((int) -1)
0x9f4: Push((int) 6700)
0x9f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f6: Pop(3)
0x9f7: Push((int) 6073)
0x9f8: Push((int) -1)
0x9f9: Push((int) 6701)
0x9fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fb: Pop(3)
0x9fc: Return(); Pop(0)

0x9fd: Push((int) 6670)
0x9fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ff: IF (Stack[-1] == 0) GOTO 0xa14; Pop(1)

0xa00: PushEmpty(string)
0xa01: Stack[-1] = "Neutral"
0xa02: Call 0x516

0xa03: Pop(1)
0xa04: Push((int) 6047)
0xa05: @@ SetMessage(Stack[-1])
0xa06: Pop(1)
0xa07: @@ ClearReplies()
0xa08: Pop(0)
0xa09: Push((int) 6048)
0xa0a: Push((int) 6673)
0xa0b: Push((int) 6671)
0xa0c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0d: Pop(3)
0xa0e: Push((int) 6049)
0xa0f: Push((int) 6673)
0xa10: Push((int) 6672)
0xa11: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa12: Pop(3)
0xa13: Return(); Pop(0)

0xa14: Push((int) 6673)
0xa15: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa16: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa17: PushEmpty(string)
0xa18: Stack[-1] = "Neutral"
0xa19: Call 0x516

0xa1a: Pop(1)
0xa1b: Push((int) 6050)
0xa1c: @@ SetMessage(Stack[-1])
0xa1d: Pop(1)
0xa1e: @@ ClearReplies()
0xa1f: Pop(0)
0xa20: Push((int) 6051)
0xa21: Push((int) -1)
0xa22: Push((int) 6675)
0xa23: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa24: Pop(3)
0xa25: Return(); Pop(0)

0xa26: Push((int) 6008)
0xa27: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa28: IF (Stack[-1] == 0) GOTO 0xa3d; Pop(1)

0xa29: PushEmpty(string)
0xa2a: Stack[-1] = "Neutral"
0xa2b: Call 0x516

0xa2c: Pop(1)
0xa2d: Push((int) 5454)
0xa2e: @@ SetMessage(Stack[-1])
0xa2f: Pop(1)
0xa30: @@ ClearReplies()
0xa31: Pop(0)
0xa32: Push((int) 5455)
0xa33: Push((int) 6010)
0xa34: Push((int) 6009)
0xa35: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa36: Pop(3)
0xa37: Push((int) 5467)
0xa38: Push((int) 6010)
0xa39: Push((int) 6024)
0xa3a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3b: Pop(3)
0xa3c: Return(); Pop(0)

0xa3d: Push((int) 6010)
0xa3e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa3f: IF (Stack[-1] == 0) GOTO 0xa54; Pop(1)

0xa40: PushEmpty(string)
0xa41: Stack[-1] = "Neutral"
0xa42: Call 0x516

0xa43: Pop(1)
0xa44: Push((int) 5456)
0xa45: @@ SetMessage(Stack[-1])
0xa46: Pop(1)
0xa47: @@ ClearReplies()
0xa48: Pop(0)
0xa49: Push((int) 5457)
0xa4a: Push((int) 6012)
0xa4b: Push((int) 6011)
0xa4c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4d: Pop(3)
0xa4e: Push((int) 5466)
0xa4f: Push((int) 6012)
0xa50: Push((int) 6022)
0xa51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa52: Pop(3)
0xa53: Return(); Pop(0)

0xa54: Push((int) 6012)
0xa55: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa56: IF (Stack[-1] == 0) GOTO 0xa70; Pop(1)

0xa57: PushEmpty(string)
0xa58: Stack[-1] = "Neutral"
0xa59: Call 0x516

0xa5a: Pop(1)
0xa5b: Push((int) 5458)
0xa5c: @@ SetMessage(Stack[-1])
0xa5d: Pop(1)
0xa5e: @@ ClearReplies()
0xa5f: Pop(0)
0xa60: Push((int) 5459)
0xa61: Push((int) 6014)
0xa62: Push((int) 6013)
0xa63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa64: Pop(3)
0xa65: Push((int) 5465)
0xa66: Push((int) 6014)
0xa67: Push((int) 6020)
0xa68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa69: Pop(3)
0xa6a: Push((int) 5464)
0xa6b: Push((int) 6014)
0xa6c: Push((int) 6018)
0xa6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6e: Pop(3)
0xa6f: Return(); Pop(0)

0xa70: Push((int) 6014)
0xa71: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa72: IF (Stack[-1] == 0) GOTO 0xa8c; Pop(1)

0xa73: PushEmpty(string)
0xa74: Stack[-1] = "Neutral"
0xa75: Call 0x516

0xa76: Pop(1)
0xa77: Push((int) 5460)
0xa78: @@ SetMessage(Stack[-1])
0xa79: Pop(1)
0xa7a: @@ ClearReplies()
0xa7b: Pop(0)
0xa7c: Push((int) 5461)
0xa7d: Push((int) -1)
0xa7e: Push((int) 6015)
0xa7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa80: Pop(3)
0xa81: Push((int) 5462)
0xa82: Push((int) -1)
0xa83: Push((int) 6016)
0xa84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa85: Pop(3)
0xa86: Push((int) 5463)
0xa87: Push((int) -1)
0xa88: Push((int) 6017)
0xa89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8a: Pop(3)
0xa8b: Return(); Pop(0)

0xa8c: Push((int) 6028)
0xa8d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa8e: IF (Stack[-1] == 0) GOTO 0xaa3; Pop(1)

0xa8f: PushEmpty(string)
0xa90: Stack[-1] = "Neutral"
0xa91: Call 0x516

0xa92: Pop(1)
0xa93: Push((int) 5469)
0xa94: @@ SetMessage(Stack[-1])
0xa95: Pop(1)
0xa96: @@ ClearReplies()
0xa97: Pop(0)
0xa98: Push((int) 5470)
0xa99: Push((int) 6030)
0xa9a: Push((int) 6029)
0xa9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9c: Pop(3)
0xa9d: Push((int) 5480)
0xa9e: Push((int) 6040)
0xa9f: Push((int) 6039)
0xaa0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa1: Pop(3)
0xaa2: Return(); Pop(0)

0xaa3: Push((int) 6040)
0xaa4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa5: IF (Stack[-1] == 0) GOTO 0xaba; Pop(1)

0xaa6: PushEmpty(string)
0xaa7: Stack[-1] = "Neutral"
0xaa8: Call 0x516

0xaa9: Pop(1)
0xaaa: Push((int) 5481)
0xaab: @@ SetMessage(Stack[-1])
0xaac: Pop(1)
0xaad: @@ ClearReplies()
0xaae: Pop(0)
0xaaf: Push((int) 5482)
0xab0: Push((int) -1)
0xab1: Push((int) 6041)
0xab2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab3: Pop(3)
0xab4: Push((int) 5483)
0xab5: Push((int) -1)
0xab6: Push((int) 6042)
0xab7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab8: Pop(3)
0xab9: Return(); Pop(0)

0xaba: Push((int) 6030)
0xabb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xabc: IF (Stack[-1] == 0) GOTO 0xad1; Pop(1)

0xabd: PushEmpty(string)
0xabe: Stack[-1] = "Neutral"
0xabf: Call 0x516

0xac0: Pop(1)
0xac1: Push((int) 5471)
0xac2: @@ SetMessage(Stack[-1])
0xac3: Pop(1)
0xac4: @@ ClearReplies()
0xac5: Pop(0)
0xac6: Push((int) 5472)
0xac7: Push((int) 6032)
0xac8: Push((int) 6031)
0xac9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaca: Pop(3)
0xacb: Push((int) 5479)
0xacc: Push((int) -1)
0xacd: Push((int) 6038)
0xace: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xacf: Pop(3)
0xad0: Return(); Pop(0)

0xad1: Push((int) 6032)
0xad2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad3: IF (Stack[-1] == 0) GOTO 0xae8; Pop(1)

0xad4: PushEmpty(string)
0xad5: Stack[-1] = "Neutral"
0xad6: Call 0x516

0xad7: Pop(1)
0xad8: Push((int) 5473)
0xad9: @@ SetMessage(Stack[-1])
0xada: Pop(1)
0xadb: @@ ClearReplies()
0xadc: Pop(0)
0xadd: Push((int) 5474)
0xade: Push((int) 6034)
0xadf: Push((int) 6033)
0xae0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae1: Pop(3)
0xae2: Push((int) 5478)
0xae3: Push((int) -1)
0xae4: Push((int) 6037)
0xae5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae6: Pop(3)
0xae7: Return(); Pop(0)

0xae8: Push((int) 6034)
0xae9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaea: IF (Stack[-1] == 0) GOTO 0xaff; Pop(1)

0xaeb: PushEmpty(string)
0xaec: Stack[-1] = "Neutral"
0xaed: Call 0x516

0xaee: Pop(1)
0xaef: Push((int) 5475)
0xaf0: @@ SetMessage(Stack[-1])
0xaf1: Pop(1)
0xaf2: @@ ClearReplies()
0xaf3: Pop(0)
0xaf4: Push((int) 5476)
0xaf5: Push((int) -1)
0xaf6: Push((int) 6035)
0xaf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf8: Pop(3)
0xaf9: Push((int) 5477)
0xafa: Push((int) -1)
0xafb: Push((int) 6036)
0xafc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xafd: Pop(3)
0xafe: Return(); Pop(0)

0xaff: Push((int) 6575)
0xb00: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb01: IF (Stack[-1] == 0) GOTO 0xb16; Pop(1)

0xb02: PushEmpty(string)
0xb03: Stack[-1] = "Neutral"
0xb04: Call 0x516

0xb05: Pop(1)
0xb06: Push((int) 5970)
0xb07: @@ SetMessage(Stack[-1])
0xb08: Pop(1)
0xb09: @@ ClearReplies()
0xb0a: Pop(0)
0xb0b: Push((int) 5971)
0xb0c: Push((int) 6580)
0xb0d: Push((int) 6576)
0xb0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0f: Pop(3)
0xb10: Push((int) 5973)
0xb11: Push((int) 6580)
0xb12: Push((int) 6578)
0xb13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb14: Pop(3)
0xb15: Return(); Pop(0)

0xb16: Push((int) 6580)
0xb17: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb18: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb19: PushEmpty(string)
0xb1a: Stack[-1] = "Neutral"
0xb1b: Call 0x516

0xb1c: Pop(1)
0xb1d: Push((int) 5975)
0xb1e: @@ SetMessage(Stack[-1])
0xb1f: Pop(1)
0xb20: @@ ClearReplies()
0xb21: Pop(0)
0xb22: Push((int) 5976)
0xb23: Push((int) 6588)
0xb24: Push((int) 6583)
0xb25: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb26: Pop(3)
0xb27: Push((int) 5977)
0xb28: Push((int) 6585)
0xb29: Push((int) 6584)
0xb2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2b: Pop(3)
0xb2c: Return(); Pop(0)

0xb2d: Push((int) 6585)
0xb2e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb2f: IF (Stack[-1] == 0) GOTO 0xb44; Pop(1)

0xb30: PushEmpty(string)
0xb31: Stack[-1] = "Neutral"
0xb32: Call 0x516

0xb33: Pop(1)
0xb34: Push((int) 5978)
0xb35: @@ SetMessage(Stack[-1])
0xb36: Pop(1)
0xb37: @@ ClearReplies()
0xb38: Pop(0)
0xb39: Push((int) 5979)
0xb3a: Push((int) -1)
0xb3b: Push((int) 6586)
0xb3c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb3d: Pop(3)
0xb3e: Push((int) 5980)
0xb3f: Push((int) -1)
0xb40: Push((int) 6587)
0xb41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb42: Pop(3)
0xb43: Return(); Pop(0)

0xb44: Push((int) 6588)
0xb45: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb46: IF (Stack[-1] == 0) GOTO 0xb5b; Pop(1)

0xb47: PushEmpty(string)
0xb48: Stack[-1] = "Neutral"
0xb49: Call 0x516

0xb4a: Pop(1)
0xb4b: Push((int) 5981)
0xb4c: @@ SetMessage(Stack[-1])
0xb4d: Pop(1)
0xb4e: @@ ClearReplies()
0xb4f: Pop(0)
0xb50: Push((int) 5982)
0xb51: Push((int) 6593)
0xb52: Push((int) 6589)
0xb53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb54: Pop(3)
0xb55: Push((int) 5983)
0xb56: Push((int) 6591)
0xb57: Push((int) 6590)
0xb58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb59: Pop(3)
0xb5a: Return(); Pop(0)

0xb5b: Push((int) 6591)
0xb5c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb5d: IF (Stack[-1] == 0) GOTO 0xb6d; Pop(1)

0xb5e: PushEmpty(string)
0xb5f: Stack[-1] = "Neutral"
0xb60: Call 0x516

0xb61: Pop(1)
0xb62: Push((int) 5984)
0xb63: @@ SetMessage(Stack[-1])
0xb64: Pop(1)
0xb65: @@ ClearReplies()
0xb66: Pop(0)
0xb67: Push((int) 5985)
0xb68: Push((int) 6593)
0xb69: Push((int) 6592)
0xb6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb6b: Pop(3)
0xb6c: Return(); Pop(0)

0xb6d: Push((int) 6593)
0xb6e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6f: IF (Stack[-1] == 0) GOTO 0xb84; Pop(1)

0xb70: PushEmpty(string)
0xb71: Stack[-1] = "Neutral"
0xb72: Call 0x516

0xb73: Pop(1)
0xb74: Push((int) 5986)
0xb75: @@ SetMessage(Stack[-1])
0xb76: Pop(1)
0xb77: @@ ClearReplies()
0xb78: Pop(0)
0xb79: Push((int) 5987)
0xb7a: Push((int) 6595)
0xb7b: Push((int) 6594)
0xb7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7d: Pop(3)
0xb7e: Push((int) 5993)
0xb7f: Push((int) 6599)
0xb80: Push((int) 6601)
0xb81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb82: Pop(3)
0xb83: Return(); Pop(0)

0xb84: Push((int) 6595)
0xb85: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb86: IF (Stack[-1] == 0) GOTO 0xb9b; Pop(1)

0xb87: PushEmpty(string)
0xb88: Stack[-1] = "Neutral"
0xb89: Call 0x516

0xb8a: Pop(1)
0xb8b: Push((int) 5988)
0xb8c: @@ SetMessage(Stack[-1])
0xb8d: Pop(1)
0xb8e: @@ ClearReplies()
0xb8f: Pop(0)
0xb90: Push((int) 5989)
0xb91: Push((int) 6597)
0xb92: Push((int) 6596)
0xb93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb94: Pop(3)
0xb95: Push((int) 5994)
0xb96: Push((int) 6597)
0xb97: Push((int) 6603)
0xb98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb99: Pop(3)
0xb9a: Return(); Pop(0)

0xb9b: Push((int) 6597)
0xb9c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9d: IF (Stack[-1] == 0) GOTO 0xbad; Pop(1)

0xb9e: PushEmpty(string)
0xb9f: Stack[-1] = "Neutral"
0xba0: Call 0x516

0xba1: Pop(1)
0xba2: Push((int) 5990)
0xba3: @@ SetMessage(Stack[-1])
0xba4: Pop(1)
0xba5: @@ ClearReplies()
0xba6: Pop(0)
0xba7: Push((int) 5991)
0xba8: Push((int) 6599)
0xba9: Push((int) 6598)
0xbaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbab: Pop(3)
0xbac: Return(); Pop(0)

0xbad: Push((int) 6599)
0xbae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbaf: IF (Stack[-1] == 0) GOTO 0xbc4; Pop(1)

0xbb0: PushEmpty(string)
0xbb1: Stack[-1] = "Neutral"
0xbb2: Call 0x516

0xbb3: Pop(1)
0xbb4: Push((int) 5992)
0xbb5: @@ SetMessage(Stack[-1])
0xbb6: Pop(1)
0xbb7: @@ ClearReplies()
0xbb8: Pop(0)
0xbb9: Push((int) 5995)
0xbba: Push((int) 6609)
0xbbb: Push((int) 6605)
0xbbc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbbd: Pop(3)
0xbbe: Push((int) 5997)
0xbbf: Push((int) 6608)
0xbc0: Push((int) 6607)
0xbc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc2: Pop(3)
0xbc3: Return(); Pop(0)

0xbc4: Push((int) 6608)
0xbc5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc6: IF (Stack[-1] == 0) GOTO 0xbdb; Pop(1)

0xbc7: PushEmpty(string)
0xbc8: Stack[-1] = "Neutral"
0xbc9: Call 0x516

0xbca: Pop(1)
0xbcb: Push((int) 5998)
0xbcc: @@ SetMessage(Stack[-1])
0xbcd: Pop(1)
0xbce: @@ ClearReplies()
0xbcf: Pop(0)
0xbd0: Push((int) 6001)
0xbd1: Push((int) -1)
0xbd2: Push((int) 6611)
0xbd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd4: Pop(3)
0xbd5: Push((int) 6002)
0xbd6: Push((int) -1)
0xbd7: Push((int) 6612)
0xbd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd9: Pop(3)
0xbda: Return(); Pop(0)

0xbdb: Push((int) 6609)
0xbdc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbdd: IF (Stack[-1] == 0) GOTO 0xbf2; Pop(1)

0xbde: PushEmpty(string)
0xbdf: Stack[-1] = "Neutral"
0xbe0: Call 0x516

0xbe1: Pop(1)
0xbe2: Push((int) 5999)
0xbe3: @@ SetMessage(Stack[-1])
0xbe4: Pop(1)
0xbe5: @@ ClearReplies()
0xbe6: Pop(0)
0xbe7: Push((int) 6000)
0xbe8: Push((int) -1)
0xbe9: Push((int) 6610)
0xbea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbeb: Pop(3)
0xbec: Push((int) 5996)
0xbed: Push((int) -1)
0xbee: Push((int) 6606)
0xbef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf0: Pop(3)
0xbf1: Return(); Pop(0)

0xbf2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xbf3: PushEmpty(bool)
0xbf4: Call 0x1672

0xbf5: Pop(0)
0xbf6: IF (Stack[-1] == 0) GOTO 0xbfa; Pop(1)

0xbf7: @ lshStopAnimation()
0xbf8: Pop(0)
0xbf9: GOTO 0xbfc

0xbfa: @ StopAnimation()
0xbfb: Pop(0)
0xbfc: Return(); Pop(0)

0xbfd: GOTO 0x527

0xbfe: Return(); Pop(0)

0xbff: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xc00: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xc01: PushEmpty(bool, object)
0xc02: Stack[-1] = Stack[-11]
0xc03: Call 0x15bc

0xc04: Pop(1)
0xc05: Pop(1); Push((bool) Stack[-1] == 0)
0xc06: IF (Stack[-1] == 0) GOTO 0xc09; Pop(1)

0xc07: Stack[-10] = (int) -2
0xc08: Return(); Pop(8)

0xc09: @ CreateDialog(Stack[-4])
0xc0a: Pop(0)
0xc0b: PushEmpty(int)
0xc0c: Call 0x166e

0xc0d: Pop(0)
0xc0e: @@ SetNPCName(Stack[-1])
0xc0f: Pop(1)
0xc10: PushEmpty(string)
0xc11: Call 0x1670

0xc12: Pop(0)
0xc13: @@ SetPhoto(Stack[-1])
0xc14: Pop(1)
0xc15: PushEmpty(int)
0xc16: Call 0x1abe

0xc17: Pop(0)
0xc18: @@ SetPlayerName(Stack[-1])
0xc19: Pop(1)
0xc1a: Stack[-2] = (int) -1
0xc1b: @ IsOverrideActive(Stack[-3])
0xc1c: Pop(0)
0xc1d: Push(Stack[-3])
0xc1e: IF (Stack[-1] == 0) GOTO 0xc21; Pop(1)

0xc1f: Stack[-10] = (int) -2
0xc20: Return(); Pop(8)

0xc21: @ DoDialog(Stack[-4])
0xc22: Pop(0)
0xc23: PushEmpty(object, object)
0xc24: Stack[-2] = Stack[-11]
0xc25: Stack[-1] = Stack[-6]
0xc26: Push(-2, 4); TaskCall(9)
0xc27: Call 0xc3e

0xc28: Pop(-2, 4); TaskReturn
0xc29: Pop(2)
0xc2a: @@ IsDialogEnd(Stack[-1])
0xc2b: Pop(0)
0xc2c: Pop(0); Push((bool) Stack[-1] == 0)
0xc2d: IF (Stack[-1] == 0) GOTO 0xc33; Pop(1)

0xc2e: @ sync()
0xc2f: Pop(0)
0xc30: @@ IsDialogEnd(Stack[-1])
0xc31: Pop(0)
0xc32: GOTO 0xc2c

0xc33: PushEmpty(object)
0xc34: Stack[-1] = Stack[-10]
0xc35: Call 0x15f4

0xc36: Pop(1)
0xc37: @ StopDialog(Stack[-4])
0xc38: Pop(0)
0xc39: @@ GetReturnValue(Stack[-2])
0xc3a: Pop(0)
0xc3b: Stack[-10] = Stack[-2]
0xc3c: Return(); Pop(8)

0xc3d: Stack[-4] = 0
0xc3e: PushEmpty()
0xc3f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xc40: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xc41: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xc42: Push((int) 1)
0xc43: IF (Stack[-1] == 0) GOTO 0xc8b; Pop(1)

0xc44: PushEmpty(string)
0xc45: Stack[-1] = "Neutral"
0xc46: Call 0xca9

0xc47: Pop(1)
0xc48: Push((int) 6647)
0xc49: @@ SetMessage(Stack[-1])
0xc4a: Pop(1)
0xc4b: @@ ClearReplies()
0xc4c: Pop(0)
0xc4d: PushEmpty(bool)
0xc4e: Stack[-1] = (bool) 0
0xc4f: PushEmpty(bool, object)
0xc50: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc51: Call 0x1878

0xc52: Pop(1)
0xc53: IF (Stack[-1] == 0) GOTO 0xc5a; Pop(1)

0xc54: PushEmpty(bool, object)
0xc55: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc56: Call 0x1890

0xc57: Pop(1)
0xc58: IF (Stack[-1] == 0) GOTO 0xc5a; Pop(1)

0xc59: Stack[-1] = (bool) 1
0xc5a: IF (Stack[-1] == 0) GOTO 0xc60; Pop(1)

0xc5b: Push((int) 7373)
0xc5c: Push((int) 8135)
0xc5d: Push((int) 8134)
0xc5e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc5f: Pop(3)
0xc60: PushEmpty(bool, object)
0xc61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc62: Call 0x1884

0xc63: Pop(1)
0xc64: IF (Stack[-1] == 0) GOTO 0xc6a; Pop(1)

0xc65: Push((int) 6640)
0xc66: Push((int) 7312)
0xc67: Push((int) 7311)
0xc68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc69: Pop(3)
0xc6a: Push((int) 7533)
0xc6b: Push((int) -1)
0xc6c: Push((int) 8315)
0xc6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6e: Pop(3)
0xc6f: GOTO 0xc8b

0xc70: PushEmpty(string)
0xc71: Stack[-1] = "Neutral"
0xc72: Call 0xca9

0xc73: Pop(1)
0xc74: Push((int) 9438)
0xc75: @@ SetMessage(Stack[-1])
0xc76: Pop(1)
0xc77: @@ ClearReplies()
0xc78: Pop(0)
0xc79: Push((int) 9439)
0xc7a: Push((int) 10375)
0xc7b: Push((int) 10374)
0xc7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7d: Pop(3)
0xc7e: Push((int) 9449)
0xc7f: Push((int) 10375)
0xc80: Push((int) 10385)
0xc81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc82: Pop(3)
0xc83: Push((int) 9450)
0xc84: Push((int) 10375)
0xc85: Push((int) 10387)
0xc86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc87: Pop(3)
0xc88: GOTO 0xc8b

0xc89: Return(); Pop(0)

0xc8a: GOTO 0xc42

0xc8b: PushEmpty(bool)
0xc8c: Call 0x1672

0xc8d: Pop(0)
0xc8e: IF (Stack[-1] == 0) GOTO 0xc9a; Pop(1)

0xc8f: @ lshWaitForAnimEnd()
0xc90: Pop(0)
0xc91: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc92: IF (Stack[-1] == 0) GOTO 0xc94; Pop(1)

0xc93: GOTO 0xc99

0xc94: PushEmpty(string)
0xc95: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc96: Call 0x15f8

0xc97: Pop(1)
0xc98: GOTO 0xc8f

0xc99: GOTO 0xca8

0xc9a: Push("all")
0xc9b: Push("idle")
0xc9c: @ PlayAnimation(Stack[-2], Stack[-1])
0xc9d: Pop(2)
0xc9e: @ WaitForAnimEnd()
0xc9f: Pop(0)
0xca0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xca1: IF (Stack[-1] == 0) GOTO 0xca3; Pop(1)

0xca2: GOTO 0xca8

0xca3: Push("all")
0xca4: Push("idle")
0xca5: @ PlayAnimation(Stack[-2], Stack[-1])
0xca6: Pop(2)
0xca7: GOTO 0xc9e

0xca8: Return(); Pop(0)

0xca9: PushEmpty()
0xcaa: PushEmpty(bool)
0xcab: Call 0x1672

0xcac: Pop(0)
0xcad: Pop(1); Push((bool) Stack[-1] == 0)
0xcae: IF (Stack[-1] == 0) GOTO 0xcb0; Pop(1)

0xcaf: Return(); Pop(0)

0xcb0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xcb1: IF (Stack[-1] == 0) GOTO 0xcb3; Pop(1)

0xcb2: Return(); Pop(0)

0xcb3: PushEmpty(string)
0xcb4: Stack[-1] = Stack[-2]
0xcb5: Call 0x15f8

0xcb6: Pop(1)
0xcb7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcb8: Return(); Pop(0)

0xcb9: PushEmpty()
0xcba: Push((int) 1)
0xcbb: IF (Stack[-1] == 0) GOTO 0xe30; Pop(1)

0xcbc: PushEmpty()
0xcbd: Call 0x160a

0xcbe: Pop(0)
0xcbf: Push((int) 7322)
0xcc0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcc1: IF (Stack[-1] == 0) GOTO 0xcd1; Pop(1)

0xcc2: PushEmpty(object, object)
0xcc3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcc4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc5: Call 0x16d0

0xcc6: Pop(2)
0xcc7: PushEmpty(object, object)
0xcc8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcc9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcca: Call 0x16dc

0xccb: Pop(2)
0xccc: PushEmpty(object, object)
0xccd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xccf: Call 0x1703

0xcd0: Pop(2)
0xcd1: Push((int) 8137)
0xcd2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcd3: IF (Stack[-1] == 0) GOTO 0xce3; Pop(1)

0xcd4: PushEmpty(object, object)
0xcd5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcd6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcd7: Call 0x16d0

0xcd8: Pop(2)
0xcd9: PushEmpty(object, object)
0xcda: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcdb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcdc: Call 0x16dc

0xcdd: Pop(2)
0xcde: PushEmpty(object, object)
0xcdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xce0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce1: Call 0x1703

0xce2: Pop(2)
0xce3: Push((int) 7317)
0xce4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xce5: IF (Stack[-1] == 0) GOTO 0xceb; Pop(1)

0xce6: PushEmpty(object, object)
0xce7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xce8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce9: Call 0x16d6

0xcea: Pop(2)
0xceb: Push((int) 7313)
0xcec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xced: IF (Stack[-1] == 0) GOTO 0xcf3; Pop(1)

0xcee: PushEmpty(object, object)
0xcef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcf1: Call 0x16d6

0xcf2: Pop(2)
0xcf3: Push((int) 7320)
0xcf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf5: IF (Stack[-1] == 0) GOTO 0xd3b; Pop(1)

0xcf6: PushEmpty(string)
0xcf7: Stack[-1] = "Neutral"
0xcf8: Call 0xca9

0xcf9: Pop(1)
0xcfa: Push((int) 6647)
0xcfb: @@ SetMessage(Stack[-1])
0xcfc: Pop(1)
0xcfd: @@ ClearReplies()
0xcfe: Pop(0)
0xcff: PushEmpty(bool)
0xd00: Stack[-1] = (bool) 0
0xd01: PushEmpty(bool, object)
0xd02: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd03: Call 0x1878

0xd04: Pop(1)
0xd05: IF (Stack[-1] == 0) GOTO 0xd0c; Pop(1)

0xd06: PushEmpty(bool, object)
0xd07: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd08: Call 0x1890

0xd09: Pop(1)
0xd0a: IF (Stack[-1] == 0) GOTO 0xd0c; Pop(1)

0xd0b: Stack[-1] = (bool) 1
0xd0c: IF (Stack[-1] == 0) GOTO 0xd12; Pop(1)

0xd0d: Push((int) 7373)
0xd0e: Push((int) 8135)
0xd0f: Push((int) 8134)
0xd10: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd11: Pop(3)
0xd12: PushEmpty(bool, object)
0xd13: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd14: Call 0x1884

0xd15: Pop(1)
0xd16: IF (Stack[-1] == 0) GOTO 0xd1c; Pop(1)

0xd17: Push((int) 6640)
0xd18: Push((int) 7312)
0xd19: Push((int) 7311)
0xd1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1b: Pop(3)
0xd1c: Push((int) 7533)
0xd1d: Push((int) -1)
0xd1e: Push((int) 8315)
0xd1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd20: Pop(3)
0xd21: Return(); Pop(0)

0xd22: PushEmpty(string)
0xd23: Stack[-1] = "Neutral"
0xd24: Call 0xca9

0xd25: Pop(1)
0xd26: Push((int) 9438)
0xd27: @@ SetMessage(Stack[-1])
0xd28: Pop(1)
0xd29: @@ ClearReplies()
0xd2a: Pop(0)
0xd2b: Push((int) 9439)
0xd2c: Push((int) 10375)
0xd2d: Push((int) 10374)
0xd2e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2f: Pop(3)
0xd30: Push((int) 9449)
0xd31: Push((int) 10375)
0xd32: Push((int) 10385)
0xd33: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd34: Pop(3)
0xd35: Push((int) 9450)
0xd36: Push((int) 10375)
0xd37: Push((int) 10387)
0xd38: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd39: Pop(3)
0xd3a: Return(); Pop(0)

0xd3b: Push((int) 10375)
0xd3c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd3d: IF (Stack[-1] == 0) GOTO 0xd52; Pop(1)

0xd3e: PushEmpty(string)
0xd3f: Stack[-1] = "Neutral"
0xd40: Call 0xca9

0xd41: Pop(1)
0xd42: Push((int) 9440)
0xd43: @@ SetMessage(Stack[-1])
0xd44: Pop(1)
0xd45: @@ ClearReplies()
0xd46: Pop(0)
0xd47: Push((int) 9441)
0xd48: Push((int) 10377)
0xd49: Push((int) 10376)
0xd4a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4b: Pop(3)
0xd4c: Push((int) 9448)
0xd4d: Push((int) 10377)
0xd4e: Push((int) 10383)
0xd4f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd50: Pop(3)
0xd51: Return(); Pop(0)

0xd52: Push((int) 10377)
0xd53: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd54: IF (Stack[-1] == 0) GOTO 0xd69; Pop(1)

0xd55: PushEmpty(string)
0xd56: Stack[-1] = "Neutral"
0xd57: Call 0xca9

0xd58: Pop(1)
0xd59: Push((int) 9442)
0xd5a: @@ SetMessage(Stack[-1])
0xd5b: Pop(1)
0xd5c: @@ ClearReplies()
0xd5d: Pop(0)
0xd5e: Push((int) 9443)
0xd5f: Push((int) 10379)
0xd60: Push((int) 10378)
0xd61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd62: Pop(3)
0xd63: Push((int) 9447)
0xd64: Push((int) -1)
0xd65: Push((int) 10382)
0xd66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd67: Pop(3)
0xd68: Return(); Pop(0)

0xd69: Push((int) 10379)
0xd6a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd6b: IF (Stack[-1] == 0) GOTO 0xd80; Pop(1)

0xd6c: PushEmpty(string)
0xd6d: Stack[-1] = "Neutral"
0xd6e: Call 0xca9

0xd6f: Pop(1)
0xd70: Push((int) 9444)
0xd71: @@ SetMessage(Stack[-1])
0xd72: Pop(1)
0xd73: @@ ClearReplies()
0xd74: Pop(0)
0xd75: Push((int) 9445)
0xd76: Push((int) -1)
0xd77: Push((int) 10380)
0xd78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd79: Pop(3)
0xd7a: Push((int) 9446)
0xd7b: Push((int) -1)
0xd7c: Push((int) 10381)
0xd7d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7e: Pop(3)
0xd7f: Return(); Pop(0)

0xd80: Push((int) 7312)
0xd81: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd82: IF (Stack[-1] == 0) GOTO 0xd97; Pop(1)

0xd83: PushEmpty(string)
0xd84: Stack[-1] = "Neutral"
0xd85: Call 0xca9

0xd86: Pop(1)
0xd87: Push((int) 6641)
0xd88: @@ SetMessage(Stack[-1])
0xd89: Pop(1)
0xd8a: @@ ClearReplies()
0xd8b: Pop(0)
0xd8c: Push((int) 6643)
0xd8d: Push((int) 7316)
0xd8e: Push((int) 7315)
0xd8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd90: Pop(3)
0xd91: Push((int) 6642)
0xd92: Push((int) -1)
0xd93: Push((int) 7313)
0xd94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd95: Pop(3)
0xd96: Return(); Pop(0)

0xd97: Push((int) 7316)
0xd98: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd99: IF (Stack[-1] == 0) GOTO 0xda9; Pop(1)

0xd9a: PushEmpty(string)
0xd9b: Stack[-1] = "Neutral"
0xd9c: Call 0xca9

0xd9d: Pop(1)
0xd9e: Push((int) 6644)
0xd9f: @@ SetMessage(Stack[-1])
0xda0: Pop(1)
0xda1: @@ ClearReplies()
0xda2: Pop(0)
0xda3: Push((int) 6645)
0xda4: Push((int) -1)
0xda5: Push((int) 7317)
0xda6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda7: Pop(3)
0xda8: Return(); Pop(0)

0xda9: Push((int) 8135)
0xdaa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdab: IF (Stack[-1] == 0) GOTO 0xdbb; Pop(1)

0xdac: PushEmpty(string)
0xdad: Stack[-1] = "Neutral"
0xdae: Call 0xca9

0xdaf: Pop(1)
0xdb0: Push((int) 7374)
0xdb1: @@ SetMessage(Stack[-1])
0xdb2: Pop(1)
0xdb3: @@ ClearReplies()
0xdb4: Pop(0)
0xdb5: Push((int) 7375)
0xdb6: Push((int) 7298)
0xdb7: Push((int) 8136)
0xdb8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb9: Pop(3)
0xdba: Return(); Pop(0)

0xdbb: Push((int) 7298)
0xdbc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdbd: IF (Stack[-1] == 0) GOTO 0xdcd; Pop(1)

0xdbe: PushEmpty(string)
0xdbf: Stack[-1] = "Neutral"
0xdc0: Call 0xca9

0xdc1: Pop(1)
0xdc2: Push((int) 6629)
0xdc3: @@ SetMessage(Stack[-1])
0xdc4: Pop(1)
0xdc5: @@ ClearReplies()
0xdc6: Pop(0)
0xdc7: Push((int) 6630)
0xdc8: Push((int) 7300)
0xdc9: Push((int) 7299)
0xdca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdcb: Pop(3)
0xdcc: Return(); Pop(0)

0xdcd: Push((int) 7300)
0xdce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdcf: IF (Stack[-1] == 0) GOTO 0xde4; Pop(1)

0xdd0: PushEmpty(string)
0xdd1: Stack[-1] = "Neutral"
0xdd2: Call 0xca9

0xdd3: Pop(1)
0xdd4: Push((int) 6631)
0xdd5: @@ SetMessage(Stack[-1])
0xdd6: Pop(1)
0xdd7: @@ ClearReplies()
0xdd8: Pop(0)
0xdd9: Push((int) 6632)
0xdda: Push((int) 7302)
0xddb: Push((int) 7301)
0xddc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xddd: Pop(3)
0xdde: Push((int) 6636)
0xddf: Push((int) 7306)
0xde0: Push((int) 7305)
0xde1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde2: Pop(3)
0xde3: Return(); Pop(0)

0xde4: Push((int) 7306)
0xde5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xde6: IF (Stack[-1] == 0) GOTO 0xdf6; Pop(1)

0xde7: PushEmpty(string)
0xde8: Stack[-1] = "Neutral"
0xde9: Call 0xca9

0xdea: Pop(1)
0xdeb: Push((int) 6637)
0xdec: @@ SetMessage(Stack[-1])
0xded: Pop(1)
0xdee: @@ ClearReplies()
0xdef: Pop(0)
0xdf0: Push((int) 6638)
0xdf1: Push((int) 7302)
0xdf2: Push((int) 7307)
0xdf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf4: Pop(3)
0xdf5: Return(); Pop(0)

0xdf6: Push((int) 7302)
0xdf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf8: IF (Stack[-1] == 0) GOTO 0xe0d; Pop(1)

0xdf9: PushEmpty(string)
0xdfa: Stack[-1] = "Neutral"
0xdfb: Call 0xca9

0xdfc: Pop(1)
0xdfd: Push((int) 6633)
0xdfe: @@ SetMessage(Stack[-1])
0xdff: Pop(1)
0xe00: @@ ClearReplies()
0xe01: Pop(0)
0xe02: Push((int) 6634)
0xe03: Push((int) 7297)
0xe04: Push((int) 7303)
0xe05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe06: Pop(3)
0xe07: Push((int) 6635)
0xe08: Push((int) 7297)
0xe09: Push((int) 7304)
0xe0a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0b: Pop(3)
0xe0c: Return(); Pop(0)

0xe0d: Push((int) 7297)
0xe0e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe0f: IF (Stack[-1] == 0) GOTO 0xe24; Pop(1)

0xe10: PushEmpty(string)
0xe11: Stack[-1] = "Neutral"
0xe12: Call 0xca9

0xe13: Pop(1)
0xe14: Push((int) 6628)
0xe15: @@ SetMessage(Stack[-1])
0xe16: Pop(1)
0xe17: @@ ClearReplies()
0xe18: Pop(0)
0xe19: Push((int) 6648)
0xe1a: Push((int) -1)
0xe1b: Push((int) 7322)
0xe1c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1d: Pop(3)
0xe1e: Push((int) 7376)
0xe1f: Push((int) -1)
0xe20: Push((int) 8137)
0xe21: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe22: Pop(3)
0xe23: Return(); Pop(0)

0xe24: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe25: PushEmpty(bool)
0xe26: Call 0x1672

0xe27: Pop(0)
0xe28: IF (Stack[-1] == 0) GOTO 0xe2c; Pop(1)

0xe29: @ lshStopAnimation()
0xe2a: Pop(0)
0xe2b: GOTO 0xe2e

0xe2c: @ StopAnimation()
0xe2d: Pop(0)
0xe2e: Return(); Pop(0)

0xe2f: GOTO 0xcba

0xe30: Return(); Pop(0)

0xe31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe33: PushEmpty(bool, object)
0xe34: Stack[-1] = Stack[-11]
0xe35: Call 0x15bc

0xe36: Pop(1)
0xe37: Pop(1); Push((bool) Stack[-1] == 0)
0xe38: IF (Stack[-1] == 0) GOTO 0xe3b; Pop(1)

0xe39: Stack[-10] = (int) -2
0xe3a: Return(); Pop(8)

0xe3b: @ CreateDialog(Stack[-4])
0xe3c: Pop(0)
0xe3d: PushEmpty(int)
0xe3e: Call 0x166e

0xe3f: Pop(0)
0xe40: @@ SetNPCName(Stack[-1])
0xe41: Pop(1)
0xe42: PushEmpty(string)
0xe43: Call 0x1670

0xe44: Pop(0)
0xe45: @@ SetPhoto(Stack[-1])
0xe46: Pop(1)
0xe47: PushEmpty(int)
0xe48: Call 0x1abe

0xe49: Pop(0)
0xe4a: @@ SetPlayerName(Stack[-1])
0xe4b: Pop(1)
0xe4c: Stack[-2] = (int) -1
0xe4d: @ IsOverrideActive(Stack[-3])
0xe4e: Pop(0)
0xe4f: Push(Stack[-3])
0xe50: IF (Stack[-1] == 0) GOTO 0xe53; Pop(1)

0xe51: Stack[-10] = (int) -2
0xe52: Return(); Pop(8)

0xe53: @ DoDialog(Stack[-4])
0xe54: Pop(0)
0xe55: PushEmpty(object, object)
0xe56: Stack[-2] = Stack[-11]
0xe57: Stack[-1] = Stack[-6]
0xe58: Push(-2, 4); TaskCall(11)
0xe59: Call 0xe70

0xe5a: Pop(-2, 4); TaskReturn
0xe5b: Pop(2)
0xe5c: @@ IsDialogEnd(Stack[-1])
0xe5d: Pop(0)
0xe5e: Pop(0); Push((bool) Stack[-1] == 0)
0xe5f: IF (Stack[-1] == 0) GOTO 0xe65; Pop(1)

0xe60: @ sync()
0xe61: Pop(0)
0xe62: @@ IsDialogEnd(Stack[-1])
0xe63: Pop(0)
0xe64: GOTO 0xe5e

0xe65: PushEmpty(object)
0xe66: Stack[-1] = Stack[-10]
0xe67: Call 0x15f4

0xe68: Pop(1)
0xe69: @ StopDialog(Stack[-4])
0xe6a: Pop(0)
0xe6b: @@ GetReturnValue(Stack[-2])
0xe6c: Pop(0)
0xe6d: Stack[-10] = Stack[-2]
0xe6e: Return(); Pop(8)

0xe6f: Stack[-4] = 0
0xe70: PushEmpty()
0xe71: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xe72: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xe73: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xe74: Push((int) 1)
0xe75: IF (Stack[-1] == 0) GOTO 0xf05; Pop(1)

0xe76: PushEmpty(bool)
0xe77: Stack[-1] = (bool) 0
0xe78: PushEmpty(bool, object)
0xe79: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe7a: Call 0x18e4

0xe7b: Pop(1)
0xe7c: IF (Stack[-1] == 0) GOTO 0xe83; Pop(1)

0xe7d: PushEmpty(bool, object)
0xe7e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe7f: Call 0x18f0

0xe80: Pop(1)
0xe81: IF (Stack[-1] == 0) GOTO 0xe83; Pop(1)

0xe82: Stack[-1] = (bool) 1
0xe83: IF (Stack[-1] == 0) GOTO 0xe93; Pop(1)

0xe84: PushEmpty(string)
0xe85: Stack[-1] = "Neutral"
0xe86: Call 0xf23

0xe87: Pop(1)
0xe88: Push((int) 10844)
0xe89: @@ SetMessage(Stack[-1])
0xe8a: Pop(1)
0xe8b: @@ ClearReplies()
0xe8c: Pop(0)
0xe8d: Push((int) 10845)
0xe8e: Push((int) 11990)
0xe8f: Push((int) 11989)
0xe90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe91: Pop(3)
0xe92: GOTO 0xf05

0xe93: PushEmpty(string)
0xe94: Stack[-1] = "Neutral"
0xe95: Call 0xf23

0xe96: Pop(1)
0xe97: Push((int) 10841)
0xe98: @@ SetMessage(Stack[-1])
0xe99: Pop(1)
0xe9a: @@ ClearReplies()
0xe9b: Pop(0)
0xe9c: PushEmpty(bool, object)
0xe9d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe9e: Call 0x18e4

0xe9f: Pop(1)
0xea0: IF (Stack[-1] == 0) GOTO 0xea6; Pop(1)

0xea1: Push((int) 10873)
0xea2: Push((int) 12022)
0xea3: Push((int) 12021)
0xea4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea5: Pop(3)
0xea6: PushEmpty(bool)
0xea7: Stack[-1] = (bool) 0
0xea8: PushEmpty(bool)
0xea9: Stack[-1] = (bool) 0
0xeaa: PushEmpty(bool, object)
0xeab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xeac: Call 0x18fc

0xead: Pop(1)
0xeae: IF (Stack[-1] == 0) GOTO 0xeb5; Pop(1)

0xeaf: PushEmpty(bool, object)
0xeb0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xeb1: Call 0x1908

0xeb2: Pop(1)
0xeb3: IF (Stack[-1] == 0) GOTO 0xeb5; Pop(1)

0xeb4: Stack[-1] = (bool) 1
0xeb5: IF (Stack[-1] == 0) GOTO 0xebc; Pop(1)

0xeb6: PushEmpty(bool, object)
0xeb7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xeb8: Call 0x1944

0xeb9: Pop(1)
0xeba: IF (Stack[-1] == 0) GOTO 0xebc; Pop(1)

0xebb: Stack[-1] = (bool) 1
0xebc: IF (Stack[-1] == 0) GOTO 0xec2; Pop(1)

0xebd: Push((int) 10876)
0xebe: Push((int) 12025)
0xebf: Push((int) 12024)
0xec0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec1: Pop(3)
0xec2: PushEmpty(bool)
0xec3: Stack[-1] = (bool) 0
0xec4: PushEmpty(bool)
0xec5: Stack[-1] = (bool) 0
0xec6: PushEmpty(bool, object)
0xec7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xec8: Call 0x18fc

0xec9: Pop(1)
0xeca: IF (Stack[-1] == 0) GOTO 0xed1; Pop(1)

0xecb: PushEmpty(bool, object)
0xecc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xecd: Call 0x194e

0xece: Pop(1)
0xecf: IF (Stack[-1] == 0) GOTO 0xed1; Pop(1)

0xed0: Stack[-1] = (bool) 1
0xed1: IF (Stack[-1] == 0) GOTO 0xed9; Pop(1)

0xed2: PushEmpty(bool, object)
0xed3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xed4: Call 0x1944

0xed5: Pop(1)
0xed6: Pop(1); Push((bool) Stack[-1] == 0)
0xed7: IF (Stack[-1] == 0) GOTO 0xed9; Pop(1)

0xed8: Stack[-1] = (bool) 1
0xed9: IF (Stack[-1] == 0) GOTO 0xedf; Pop(1)

0xeda: Push((int) 11160)
0xedb: Push((int) 12344)
0xedc: Push((int) 12343)
0xedd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xede: Pop(3)
0xedf: PushEmpty(bool, object)
0xee0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xee1: Call 0x1914

0xee2: Pop(1)
0xee3: IF (Stack[-1] == 0) GOTO 0xee9; Pop(1)

0xee4: Push((int) 10842)
0xee5: Push((int) 10885)
0xee6: Push((int) 11986)
0xee7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee8: Pop(3)
0xee9: PushEmpty(bool, object)
0xeea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xeeb: Call 0x1920

0xeec: Pop(1)
0xeed: IF (Stack[-1] == 0) GOTO 0xef3; Pop(1)

0xeee: Push((int) 9894)
0xeef: Push((int) 10899)
0xef0: Push((int) 10898)
0xef1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef2: Pop(3)
0xef3: PushEmpty(bool, object)
0xef4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xef5: Call 0x192c

0xef6: Pop(1)
0xef7: IF (Stack[-1] == 0) GOTO 0xefd; Pop(1)

0xef8: Push((int) 10843)
0xef9: Push((int) 10909)
0xefa: Push((int) 11987)
0xefb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xefc: Pop(3)
0xefd: Push((int) 11157)
0xefe: Push((int) -1)
0xeff: Push((int) 12342)
0xf00: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf01: Pop(3)
0xf02: GOTO 0xf05

0xf03: Return(); Pop(0)

0xf04: GOTO 0xe74

0xf05: PushEmpty(bool)
0xf06: Call 0x1672

0xf07: Pop(0)
0xf08: IF (Stack[-1] == 0) GOTO 0xf14; Pop(1)

0xf09: @ lshWaitForAnimEnd()
0xf0a: Pop(0)
0xf0b: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf0c: IF (Stack[-1] == 0) GOTO 0xf0e; Pop(1)

0xf0d: GOTO 0xf13

0xf0e: PushEmpty(string)
0xf0f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xf10: Call 0x15f8

0xf11: Pop(1)
0xf12: GOTO 0xf09

0xf13: GOTO 0xf22

0xf14: Push("all")
0xf15: Push("idle")
0xf16: @ PlayAnimation(Stack[-2], Stack[-1])
0xf17: Pop(2)
0xf18: @ WaitForAnimEnd()
0xf19: Pop(0)
0xf1a: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf1b: IF (Stack[-1] == 0) GOTO 0xf1d; Pop(1)

0xf1c: GOTO 0xf22

0xf1d: Push("all")
0xf1e: Push("idle")
0xf1f: @ PlayAnimation(Stack[-2], Stack[-1])
0xf20: Pop(2)
0xf21: GOTO 0xf18

0xf22: Return(); Pop(0)

0xf23: PushEmpty()
0xf24: PushEmpty(bool)
0xf25: Call 0x1672

0xf26: Pop(0)
0xf27: Pop(1); Push((bool) Stack[-1] == 0)
0xf28: IF (Stack[-1] == 0) GOTO 0xf2a; Pop(1)

0xf29: Return(); Pop(0)

0xf2a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf2b: IF (Stack[-1] == 0) GOTO 0xf2d; Pop(1)

0xf2c: Return(); Pop(0)

0xf2d: PushEmpty(string)
0xf2e: Stack[-1] = Stack[-2]
0xf2f: Call 0x15f8

0xf30: Pop(1)
0xf31: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf32: Return(); Pop(0)

0xf33: PushEmpty()
0xf34: Push((int) 1)
0xf35: IF (Stack[-1] == 0) GOTO 0x12b3; Pop(1)

0xf36: PushEmpty()
0xf37: Call 0x160a

0xf38: Pop(0)
0xf39: Push((int) 12015)
0xf3a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf3b: IF (Stack[-1] == 0) GOTO 0xf4b; Pop(1)

0xf3c: PushEmpty(object, object)
0xf3d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf3f: Call 0x1754

0xf40: Pop(2)
0xf41: PushEmpty(object, object)
0xf42: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf43: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf44: Call 0x1731

0xf45: Pop(2)
0xf46: PushEmpty(object, object)
0xf47: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf48: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf49: Call 0x175a

0xf4a: Pop(2)
0xf4b: Push((int) 12018)
0xf4c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf4d: IF (Stack[-1] == 0) GOTO 0xf5d; Pop(1)

0xf4e: PushEmpty(object, object)
0xf4f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf50: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf51: Call 0x1754

0xf52: Pop(2)
0xf53: PushEmpty(object, object)
0xf54: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf55: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf56: Call 0x1731

0xf57: Pop(2)
0xf58: PushEmpty(object, object)
0xf59: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf5a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf5b: Call 0x175a

0xf5c: Pop(2)
0xf5d: Push((int) 12019)
0xf5e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf5f: IF (Stack[-1] == 0) GOTO 0xf65; Pop(1)

0xf60: PushEmpty(object, object)
0xf61: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf62: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf63: Call 0x1754

0xf64: Pop(2)
0xf65: Push((int) 12023)
0xf66: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf67: IF (Stack[-1] == 0) GOTO 0xf72; Pop(1)

0xf68: PushEmpty(object, object)
0xf69: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf6a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf6b: Call 0x1731

0xf6c: Pop(2)
0xf6d: PushEmpty(object, object)
0xf6e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf6f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf70: Call 0x175a

0xf71: Pop(2)
0xf72: Push((int) 12033)
0xf73: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf74: IF (Stack[-1] == 0) GOTO 0xf7f; Pop(1)

0xf75: PushEmpty(object, object)
0xf76: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf77: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf78: Call 0x176a

0xf79: Pop(2)
0xf7a: PushEmpty(object, object)
0xf7b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf7c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf7d: Call 0x1770

0xf7e: Pop(2)
0xf7f: Push((int) 12029)
0xf80: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf81: IF (Stack[-1] == 0) GOTO 0xf8c; Pop(1)

0xf82: PushEmpty(object, object)
0xf83: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf84: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf85: Call 0x176a

0xf86: Pop(2)
0xf87: PushEmpty(object, object)
0xf88: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf89: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf8a: Call 0x1770

0xf8b: Pop(2)
0xf8c: Push((int) 10893)
0xf8d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf8e: IF (Stack[-1] == 0) GOTO 0xf94; Pop(1)

0xf8f: PushEmpty(object, object)
0xf90: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf91: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf92: Call 0x178e

0xf93: Pop(2)
0xf94: Push((int) 10894)
0xf95: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf96: IF (Stack[-1] == 0) GOTO 0xf9c; Pop(1)

0xf97: PushEmpty(object, object)
0xf98: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf99: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9a: Call 0x178e

0xf9b: Pop(2)
0xf9c: Push((int) 10895)
0xf9d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf9e: IF (Stack[-1] == 0) GOTO 0xfa4; Pop(1)

0xf9f: PushEmpty(object, object)
0xfa0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfa1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfa2: Call 0x178e

0xfa3: Pop(2)
0xfa4: Push((int) 10888)
0xfa5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfa6: IF (Stack[-1] == 0) GOTO 0xfac; Pop(1)

0xfa7: PushEmpty(object, object)
0xfa8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfa9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfaa: Call 0x178e

0xfab: Pop(2)
0xfac: Push((int) 10904)
0xfad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfae: IF (Stack[-1] == 0) GOTO 0xfb4; Pop(1)

0xfaf: PushEmpty(object, object)
0xfb0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfb2: Call 0x1794

0xfb3: Pop(2)
0xfb4: Push((int) 10914)
0xfb5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfb6: IF (Stack[-1] == 0) GOTO 0xfbc; Pop(1)

0xfb7: PushEmpty(object, object)
0xfb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfba: Call 0x179a

0xfbb: Pop(2)
0xfbc: Push((int) 10915)
0xfbd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfbe: IF (Stack[-1] == 0) GOTO 0xfc4; Pop(1)

0xfbf: PushEmpty(object, object)
0xfc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfc2: Call 0x179a

0xfc3: Pop(2)
0xfc4: Push((int) 10916)
0xfc5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfc6: IF (Stack[-1] == 0) GOTO 0xfcc; Pop(1)

0xfc7: PushEmpty(object, object)
0xfc8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfca: Call 0x179a

0xfcb: Pop(2)
0xfcc: Push((int) 11988)
0xfcd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfce: IF (Stack[-1] == 0) GOTO 0x105c; Pop(1)

0xfcf: PushEmpty(bool)
0xfd0: Stack[-1] = (bool) 0
0xfd1: PushEmpty(bool, object)
0xfd2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfd3: Call 0x18e4

0xfd4: Pop(1)
0xfd5: IF (Stack[-1] == 0) GOTO 0xfdc; Pop(1)

0xfd6: PushEmpty(bool, object)
0xfd7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfd8: Call 0x18f0

0xfd9: Pop(1)
0xfda: IF (Stack[-1] == 0) GOTO 0xfdc; Pop(1)

0xfdb: Stack[-1] = (bool) 1
0xfdc: IF (Stack[-1] == 0) GOTO 0xfec; Pop(1)

0xfdd: PushEmpty(string)
0xfde: Stack[-1] = "Neutral"
0xfdf: Call 0xf23

0xfe0: Pop(1)
0xfe1: Push((int) 10844)
0xfe2: @@ SetMessage(Stack[-1])
0xfe3: Pop(1)
0xfe4: @@ ClearReplies()
0xfe5: Pop(0)
0xfe6: Push((int) 10845)
0xfe7: Push((int) 11990)
0xfe8: Push((int) 11989)
0xfe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfea: Pop(3)
0xfeb: Return(); Pop(0)

0xfec: PushEmpty(string)
0xfed: Stack[-1] = "Neutral"
0xfee: Call 0xf23

0xfef: Pop(1)
0xff0: Push((int) 10841)
0xff1: @@ SetMessage(Stack[-1])
0xff2: Pop(1)
0xff3: @@ ClearReplies()
0xff4: Pop(0)
0xff5: PushEmpty(bool, object)
0xff6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xff7: Call 0x18e4

0xff8: Pop(1)
0xff9: IF (Stack[-1] == 0) GOTO 0xfff; Pop(1)

0xffa: Push((int) 10873)
0xffb: Push((int) 12022)
0xffc: Push((int) 12021)
0xffd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xffe: Pop(3)
0xfff: PushEmpty(bool)
0x1000: Stack[-1] = (bool) 0
0x1001: PushEmpty(bool)
0x1002: Stack[-1] = (bool) 0
0x1003: PushEmpty(bool, object)
0x1004: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1005: Call 0x18fc

0x1006: Pop(1)
0x1007: IF (Stack[-1] == 0) GOTO 0x100e; Pop(1)

0x1008: PushEmpty(bool, object)
0x1009: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x100a: Call 0x1908

0x100b: Pop(1)
0x100c: IF (Stack[-1] == 0) GOTO 0x100e; Pop(1)

0x100d: Stack[-1] = (bool) 1
0x100e: IF (Stack[-1] == 0) GOTO 0x1015; Pop(1)

0x100f: PushEmpty(bool, object)
0x1010: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1011: Call 0x1944

0x1012: Pop(1)
0x1013: IF (Stack[-1] == 0) GOTO 0x1015; Pop(1)

0x1014: Stack[-1] = (bool) 1
0x1015: IF (Stack[-1] == 0) GOTO 0x101b; Pop(1)

0x1016: Push((int) 10876)
0x1017: Push((int) 12025)
0x1018: Push((int) 12024)
0x1019: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101a: Pop(3)
0x101b: PushEmpty(bool)
0x101c: Stack[-1] = (bool) 0
0x101d: PushEmpty(bool)
0x101e: Stack[-1] = (bool) 0
0x101f: PushEmpty(bool, object)
0x1020: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1021: Call 0x18fc

0x1022: Pop(1)
0x1023: IF (Stack[-1] == 0) GOTO 0x102a; Pop(1)

0x1024: PushEmpty(bool, object)
0x1025: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1026: Call 0x194e

0x1027: Pop(1)
0x1028: IF (Stack[-1] == 0) GOTO 0x102a; Pop(1)

0x1029: Stack[-1] = (bool) 1
0x102a: IF (Stack[-1] == 0) GOTO 0x1032; Pop(1)

0x102b: PushEmpty(bool, object)
0x102c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x102d: Call 0x1944

0x102e: Pop(1)
0x102f: Pop(1); Push((bool) Stack[-1] == 0)
0x1030: IF (Stack[-1] == 0) GOTO 0x1032; Pop(1)

0x1031: Stack[-1] = (bool) 1
0x1032: IF (Stack[-1] == 0) GOTO 0x1038; Pop(1)

0x1033: Push((int) 11160)
0x1034: Push((int) 12344)
0x1035: Push((int) 12343)
0x1036: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1037: Pop(3)
0x1038: PushEmpty(bool, object)
0x1039: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x103a: Call 0x1914

0x103b: Pop(1)
0x103c: IF (Stack[-1] == 0) GOTO 0x1042; Pop(1)

0x103d: Push((int) 10842)
0x103e: Push((int) 10885)
0x103f: Push((int) 11986)
0x1040: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1041: Pop(3)
0x1042: PushEmpty(bool, object)
0x1043: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1044: Call 0x1920

0x1045: Pop(1)
0x1046: IF (Stack[-1] == 0) GOTO 0x104c; Pop(1)

0x1047: Push((int) 9894)
0x1048: Push((int) 10899)
0x1049: Push((int) 10898)
0x104a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104b: Pop(3)
0x104c: PushEmpty(bool, object)
0x104d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x104e: Call 0x192c

0x104f: Pop(1)
0x1050: IF (Stack[-1] == 0) GOTO 0x1056; Pop(1)

0x1051: Push((int) 10843)
0x1052: Push((int) 10909)
0x1053: Push((int) 11987)
0x1054: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1055: Pop(3)
0x1056: Push((int) 11157)
0x1057: Push((int) -1)
0x1058: Push((int) 12342)
0x1059: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105a: Pop(3)
0x105b: Return(); Pop(0)

0x105c: Push((int) 10909)
0x105d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105e: IF (Stack[-1] == 0) GOTO 0x1078; Pop(1)

0x105f: PushEmpty(string)
0x1060: Stack[-1] = "Neutral"
0x1061: Call 0xf23

0x1062: Pop(1)
0x1063: Push((int) 9904)
0x1064: @@ SetMessage(Stack[-1])
0x1065: Pop(1)
0x1066: @@ ClearReplies()
0x1067: Pop(0)
0x1068: Push((int) 9905)
0x1069: Push((int) 10911)
0x106a: Push((int) 10910)
0x106b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106c: Pop(3)
0x106d: Push((int) 9912)
0x106e: Push((int) 10911)
0x106f: Push((int) 10917)
0x1070: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1071: Pop(3)
0x1072: Push((int) 9913)
0x1073: Push((int) 10911)
0x1074: Push((int) 10919)
0x1075: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1076: Pop(3)
0x1077: Return(); Pop(0)

0x1078: Push((int) 10911)
0x1079: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x107a: IF (Stack[-1] == 0) GOTO 0x108f; Pop(1)

0x107b: PushEmpty(string)
0x107c: Stack[-1] = "Neutral"
0x107d: Call 0xf23

0x107e: Pop(1)
0x107f: Push((int) 9906)
0x1080: @@ SetMessage(Stack[-1])
0x1081: Pop(1)
0x1082: @@ ClearReplies()
0x1083: Pop(0)
0x1084: Push((int) 9907)
0x1085: Push((int) 10913)
0x1086: Push((int) 10912)
0x1087: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1088: Pop(3)
0x1089: Push((int) 9911)
0x108a: Push((int) -1)
0x108b: Push((int) 10916)
0x108c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108d: Pop(3)
0x108e: Return(); Pop(0)

0x108f: Push((int) 10913)
0x1090: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1091: IF (Stack[-1] == 0) GOTO 0x10a6; Pop(1)

0x1092: PushEmpty(string)
0x1093: Stack[-1] = "Neutral"
0x1094: Call 0xf23

0x1095: Pop(1)
0x1096: Push((int) 9908)
0x1097: @@ SetMessage(Stack[-1])
0x1098: Pop(1)
0x1099: @@ ClearReplies()
0x109a: Pop(0)
0x109b: Push((int) 9909)
0x109c: Push((int) -1)
0x109d: Push((int) 10914)
0x109e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109f: Pop(3)
0x10a0: Push((int) 9910)
0x10a1: Push((int) -1)
0x10a2: Push((int) 10915)
0x10a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a4: Pop(3)
0x10a5: Return(); Pop(0)

0x10a6: Push((int) 10899)
0x10a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a8: IF (Stack[-1] == 0) GOTO 0x10bd; Pop(1)

0x10a9: PushEmpty(string)
0x10aa: Stack[-1] = "Neutral"
0x10ab: Call 0xf23

0x10ac: Pop(1)
0x10ad: Push((int) 9895)
0x10ae: @@ SetMessage(Stack[-1])
0x10af: Pop(1)
0x10b0: @@ ClearReplies()
0x10b1: Pop(0)
0x10b2: Push((int) 9896)
0x10b3: Push((int) 10901)
0x10b4: Push((int) 10900)
0x10b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b6: Pop(3)
0x10b7: Push((int) 9901)
0x10b8: Push((int) 10906)
0x10b9: Push((int) 10905)
0x10ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10bb: Pop(3)
0x10bc: Return(); Pop(0)

0x10bd: Push((int) 10906)
0x10be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10bf: IF (Stack[-1] == 0) GOTO 0x10cf; Pop(1)

0x10c0: PushEmpty(string)
0x10c1: Stack[-1] = "Neutral"
0x10c2: Call 0xf23

0x10c3: Pop(1)
0x10c4: Push((int) 9902)
0x10c5: @@ SetMessage(Stack[-1])
0x10c6: Pop(1)
0x10c7: @@ ClearReplies()
0x10c8: Pop(0)
0x10c9: Push((int) 9903)
0x10ca: Push((int) 10901)
0x10cb: Push((int) 10907)
0x10cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10cd: Pop(3)
0x10ce: Return(); Pop(0)

0x10cf: Push((int) 10901)
0x10d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10d1: IF (Stack[-1] == 0) GOTO 0x10e1; Pop(1)

0x10d2: PushEmpty(string)
0x10d3: Stack[-1] = "Neutral"
0x10d4: Call 0xf23

0x10d5: Pop(1)
0x10d6: Push((int) 9897)
0x10d7: @@ SetMessage(Stack[-1])
0x10d8: Pop(1)
0x10d9: @@ ClearReplies()
0x10da: Pop(0)
0x10db: Push((int) 9898)
0x10dc: Push((int) 10903)
0x10dd: Push((int) 10902)
0x10de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10df: Pop(3)
0x10e0: Return(); Pop(0)

0x10e1: Push((int) 10903)
0x10e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e3: IF (Stack[-1] == 0) GOTO 0x10f3; Pop(1)

0x10e4: PushEmpty(string)
0x10e5: Stack[-1] = "Neutral"
0x10e6: Call 0xf23

0x10e7: Pop(1)
0x10e8: Push((int) 9899)
0x10e9: @@ SetMessage(Stack[-1])
0x10ea: Pop(1)
0x10eb: @@ ClearReplies()
0x10ec: Pop(0)
0x10ed: Push((int) 9900)
0x10ee: Push((int) -1)
0x10ef: Push((int) 10904)
0x10f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f1: Pop(3)
0x10f2: Return(); Pop(0)

0x10f3: Push((int) 10885)
0x10f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f5: IF (Stack[-1] == 0) GOTO 0x110a; Pop(1)

0x10f6: PushEmpty(string)
0x10f7: Stack[-1] = "Neutral"
0x10f8: Call 0xf23

0x10f9: Pop(1)
0x10fa: Push((int) 9882)
0x10fb: @@ SetMessage(Stack[-1])
0x10fc: Pop(1)
0x10fd: @@ ClearReplies()
0x10fe: Pop(0)
0x10ff: Push((int) 9883)
0x1100: Push((int) 10887)
0x1101: Push((int) 10886)
0x1102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1103: Pop(3)
0x1104: Push((int) 9893)
0x1105: Push((int) 10887)
0x1106: Push((int) 10896)
0x1107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1108: Pop(3)
0x1109: Return(); Pop(0)

0x110a: Push((int) 10887)
0x110b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x110c: IF (Stack[-1] == 0) GOTO 0x1121; Pop(1)

0x110d: PushEmpty(string)
0x110e: Stack[-1] = "Neutral"
0x110f: Call 0xf23

0x1110: Pop(1)
0x1111: Push((int) 9884)
0x1112: @@ SetMessage(Stack[-1])
0x1113: Pop(1)
0x1114: @@ ClearReplies()
0x1115: Pop(0)
0x1116: Push((int) 9886)
0x1117: Push((int) 10890)
0x1118: Push((int) 10889)
0x1119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111a: Pop(3)
0x111b: Push((int) 9885)
0x111c: Push((int) -1)
0x111d: Push((int) 10888)
0x111e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111f: Pop(3)
0x1120: Return(); Pop(0)

0x1121: Push((int) 10890)
0x1122: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1123: IF (Stack[-1] == 0) GOTO 0x1138; Pop(1)

0x1124: PushEmpty(string)
0x1125: Stack[-1] = "Neutral"
0x1126: Call 0xf23

0x1127: Pop(1)
0x1128: Push((int) 9887)
0x1129: @@ SetMessage(Stack[-1])
0x112a: Pop(1)
0x112b: @@ ClearReplies()
0x112c: Pop(0)
0x112d: Push((int) 9888)
0x112e: Push((int) 10892)
0x112f: Push((int) 10891)
0x1130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1131: Pop(3)
0x1132: Push((int) 9892)
0x1133: Push((int) -1)
0x1134: Push((int) 10895)
0x1135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1136: Pop(3)
0x1137: Return(); Pop(0)

0x1138: Push((int) 10892)
0x1139: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x113a: IF (Stack[-1] == 0) GOTO 0x114f; Pop(1)

0x113b: PushEmpty(string)
0x113c: Stack[-1] = "Neutral"
0x113d: Call 0xf23

0x113e: Pop(1)
0x113f: Push((int) 9889)
0x1140: @@ SetMessage(Stack[-1])
0x1141: Pop(1)
0x1142: @@ ClearReplies()
0x1143: Pop(0)
0x1144: Push((int) 9890)
0x1145: Push((int) -1)
0x1146: Push((int) 10893)
0x1147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1148: Pop(3)
0x1149: Push((int) 9891)
0x114a: Push((int) -1)
0x114b: Push((int) 10894)
0x114c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114d: Pop(3)
0x114e: Return(); Pop(0)

0x114f: Push((int) 12344)
0x1150: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1151: IF (Stack[-1] == 0) GOTO 0x1166; Pop(1)

0x1152: PushEmpty(string)
0x1153: Stack[-1] = "Neutral"
0x1154: Call 0xf23

0x1155: Pop(1)
0x1156: Push((int) 11161)
0x1157: @@ SetMessage(Stack[-1])
0x1158: Pop(1)
0x1159: @@ ClearReplies()
0x115a: Pop(0)
0x115b: PushEmpty(bool, object)
0x115c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x115d: Call 0x1938

0x115e: Pop(1)
0x115f: IF (Stack[-1] == 0) GOTO 0x1165; Pop(1)

0x1160: Push((int) 11162)
0x1161: Push((int) -1)
0x1162: Push((int) 12345)
0x1163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1164: Pop(3)
0x1165: Return(); Pop(0)

0x1166: Push((int) 12025)
0x1167: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1168: IF (Stack[-1] == 0) GOTO 0x117d; Pop(1)

0x1169: PushEmpty(string)
0x116a: Stack[-1] = "Neutral"
0x116b: Call 0xf23

0x116c: Pop(1)
0x116d: Push((int) 10877)
0x116e: @@ SetMessage(Stack[-1])
0x116f: Pop(1)
0x1170: @@ ClearReplies()
0x1171: Pop(0)
0x1172: Push((int) 10878)
0x1173: Push((int) 12030)
0x1174: Push((int) 12026)
0x1175: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1176: Pop(3)
0x1177: Push((int) 10879)
0x1178: Push((int) 12028)
0x1179: Push((int) 12027)
0x117a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117b: Pop(3)
0x117c: Return(); Pop(0)

0x117d: Push((int) 12028)
0x117e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x117f: IF (Stack[-1] == 0) GOTO 0x118f; Pop(1)

0x1180: PushEmpty(string)
0x1181: Stack[-1] = "Neutral"
0x1182: Call 0xf23

0x1183: Pop(1)
0x1184: Push((int) 10880)
0x1185: @@ SetMessage(Stack[-1])
0x1186: Pop(1)
0x1187: @@ ClearReplies()
0x1188: Pop(0)
0x1189: Push((int) 10881)
0x118a: Push((int) -1)
0x118b: Push((int) 12029)
0x118c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118d: Pop(3)
0x118e: Return(); Pop(0)

0x118f: Push((int) 12030)
0x1190: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1191: IF (Stack[-1] == 0) GOTO 0x11a1; Pop(1)

0x1192: PushEmpty(string)
0x1193: Stack[-1] = "Neutral"
0x1194: Call 0xf23

0x1195: Pop(1)
0x1196: Push((int) 10882)
0x1197: @@ SetMessage(Stack[-1])
0x1198: Pop(1)
0x1199: @@ ClearReplies()
0x119a: Pop(0)
0x119b: Push((int) 10883)
0x119c: Push((int) 12032)
0x119d: Push((int) 12031)
0x119e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119f: Pop(3)
0x11a0: Return(); Pop(0)

0x11a1: Push((int) 12032)
0x11a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a3: IF (Stack[-1] == 0) GOTO 0x11b3; Pop(1)

0x11a4: PushEmpty(string)
0x11a5: Stack[-1] = "Neutral"
0x11a6: Call 0xf23

0x11a7: Pop(1)
0x11a8: Push((int) 10884)
0x11a9: @@ SetMessage(Stack[-1])
0x11aa: Pop(1)
0x11ab: @@ ClearReplies()
0x11ac: Pop(0)
0x11ad: Push((int) 10885)
0x11ae: Push((int) -1)
0x11af: Push((int) 12033)
0x11b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b1: Pop(3)
0x11b2: Return(); Pop(0)

0x11b3: Push((int) 12022)
0x11b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b5: IF (Stack[-1] == 0) GOTO 0x11c5; Pop(1)

0x11b6: PushEmpty(string)
0x11b7: Stack[-1] = "Neutral"
0x11b8: Call 0xf23

0x11b9: Pop(1)
0x11ba: Push((int) 10874)
0x11bb: @@ SetMessage(Stack[-1])
0x11bc: Pop(1)
0x11bd: @@ ClearReplies()
0x11be: Pop(0)
0x11bf: Push((int) 10875)
0x11c0: Push((int) -1)
0x11c1: Push((int) 12023)
0x11c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c3: Pop(3)
0x11c4: Return(); Pop(0)

0x11c5: Push((int) 11990)
0x11c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c7: IF (Stack[-1] == 0) GOTO 0x11e1; Pop(1)

0x11c8: PushEmpty(string)
0x11c9: Stack[-1] = "Neutral"
0x11ca: Call 0xf23

0x11cb: Pop(1)
0x11cc: Push((int) 10846)
0x11cd: @@ SetMessage(Stack[-1])
0x11ce: Pop(1)
0x11cf: @@ ClearReplies()
0x11d0: Pop(0)
0x11d1: Push((int) 10847)
0x11d2: Push((int) 11994)
0x11d3: Push((int) 11991)
0x11d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d5: Pop(3)
0x11d6: Push((int) 10849)
0x11d7: Push((int) 11994)
0x11d8: Push((int) 11993)
0x11d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11da: Pop(3)
0x11db: Push((int) 10848)
0x11dc: Push((int) 11994)
0x11dd: Push((int) 11992)
0x11de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11df: Pop(3)
0x11e0: Return(); Pop(0)

0x11e1: Push((int) 11994)
0x11e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e3: IF (Stack[-1] == 0) GOTO 0x1208; Pop(1)

0x11e4: PushEmpty(string)
0x11e5: Stack[-1] = "Neutral"
0x11e6: Call 0xf23

0x11e7: Pop(1)
0x11e8: Push((int) 10850)
0x11e9: @@ SetMessage(Stack[-1])
0x11ea: Pop(1)
0x11eb: @@ ClearReplies()
0x11ec: Pop(0)
0x11ed: Push((int) 10852)
0x11ee: Push((int) 12003)
0x11ef: Push((int) 11997)
0x11f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f1: Pop(3)
0x11f2: PushEmpty(bool, object)
0x11f3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11f4: Call 0x186c

0x11f5: Pop(1)
0x11f6: Pop(1); Push((bool) Stack[-1] == 0)
0x11f7: IF (Stack[-1] == 0) GOTO 0x11fd; Pop(1)

0x11f8: Push((int) 10851)
0x11f9: Push((int) 12001)
0x11fa: Push((int) 11995)
0x11fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11fc: Pop(3)
0x11fd: PushEmpty(bool, object)
0x11fe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11ff: Call 0x186c

0x1200: Pop(1)
0x1201: IF (Stack[-1] == 0) GOTO 0x1207; Pop(1)

0x1202: Push((int) 10853)
0x1203: Push((int) 11999)
0x1204: Push((int) 11998)
0x1205: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1206: Pop(3)
0x1207: Return(); Pop(0)

0x1208: Push((int) 11999)
0x1209: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x120a: IF (Stack[-1] == 0) GOTO 0x121a; Pop(1)

0x120b: PushEmpty(string)
0x120c: Stack[-1] = "Neutral"
0x120d: Call 0xf23

0x120e: Pop(1)
0x120f: Push((int) 10854)
0x1210: @@ SetMessage(Stack[-1])
0x1211: Pop(1)
0x1212: @@ ClearReplies()
0x1213: Pop(0)
0x1214: Push((int) 10855)
0x1215: Push((int) 12003)
0x1216: Push((int) 12000)
0x1217: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1218: Pop(3)
0x1219: Return(); Pop(0)

0x121a: Push((int) 12001)
0x121b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x121c: IF (Stack[-1] == 0) GOTO 0x122c; Pop(1)

0x121d: PushEmpty(string)
0x121e: Stack[-1] = "Neutral"
0x121f: Call 0xf23

0x1220: Pop(1)
0x1221: Push((int) 10856)
0x1222: @@ SetMessage(Stack[-1])
0x1223: Pop(1)
0x1224: @@ ClearReplies()
0x1225: Pop(0)
0x1226: Push((int) 10857)
0x1227: Push((int) 12003)
0x1228: Push((int) 12002)
0x1229: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122a: Pop(3)
0x122b: Return(); Pop(0)

0x122c: Push((int) 12003)
0x122d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122e: IF (Stack[-1] == 0) GOTO 0x123e; Pop(1)

0x122f: PushEmpty(string)
0x1230: Stack[-1] = "Neutral"
0x1231: Call 0xf23

0x1232: Pop(1)
0x1233: Push((int) 10858)
0x1234: @@ SetMessage(Stack[-1])
0x1235: Pop(1)
0x1236: @@ ClearReplies()
0x1237: Pop(0)
0x1238: Push((int) 10859)
0x1239: Push((int) 12007)
0x123a: Push((int) 12006)
0x123b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123c: Pop(3)
0x123d: Return(); Pop(0)

0x123e: Push((int) 12007)
0x123f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1240: IF (Stack[-1] == 0) GOTO 0x1255; Pop(1)

0x1241: PushEmpty(string)
0x1242: Stack[-1] = "Neutral"
0x1243: Call 0xf23

0x1244: Pop(1)
0x1245: Push((int) 10860)
0x1246: @@ SetMessage(Stack[-1])
0x1247: Pop(1)
0x1248: @@ ClearReplies()
0x1249: Pop(0)
0x124a: Push((int) 10861)
0x124b: Push((int) 12010)
0x124c: Push((int) 12008)
0x124d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124e: Pop(3)
0x124f: Push((int) 10862)
0x1250: Push((int) 12014)
0x1251: Push((int) 12009)
0x1252: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1253: Pop(3)
0x1254: Return(); Pop(0)

0x1255: Push((int) 12010)
0x1256: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1257: IF (Stack[-1] == 0) GOTO 0x1267; Pop(1)

0x1258: PushEmpty(string)
0x1259: Stack[-1] = "Neutral"
0x125a: Call 0xf23

0x125b: Pop(1)
0x125c: Push((int) 10863)
0x125d: @@ SetMessage(Stack[-1])
0x125e: Pop(1)
0x125f: @@ ClearReplies()
0x1260: Pop(0)
0x1261: Push((int) 10864)
0x1262: Push((int) 12012)
0x1263: Push((int) 12011)
0x1264: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1265: Pop(3)
0x1266: Return(); Pop(0)

0x1267: Push((int) 12012)
0x1268: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1269: IF (Stack[-1] == 0) GOTO 0x1279; Pop(1)

0x126a: PushEmpty(string)
0x126b: Stack[-1] = "Neutral"
0x126c: Call 0xf23

0x126d: Pop(1)
0x126e: Push((int) 10865)
0x126f: @@ SetMessage(Stack[-1])
0x1270: Pop(1)
0x1271: @@ ClearReplies()
0x1272: Pop(0)
0x1273: Push((int) 10866)
0x1274: Push((int) 12014)
0x1275: Push((int) 12013)
0x1276: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1277: Pop(3)
0x1278: Return(); Pop(0)

0x1279: Push((int) 12014)
0x127a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127b: IF (Stack[-1] == 0) GOTO 0x1290; Pop(1)

0x127c: PushEmpty(string)
0x127d: Stack[-1] = "Neutral"
0x127e: Call 0xf23

0x127f: Pop(1)
0x1280: Push((int) 10867)
0x1281: @@ SetMessage(Stack[-1])
0x1282: Pop(1)
0x1283: @@ ClearReplies()
0x1284: Pop(0)
0x1285: Push((int) 10868)
0x1286: Push((int) -1)
0x1287: Push((int) 12015)
0x1288: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1289: Pop(3)
0x128a: Push((int) 10869)
0x128b: Push((int) 12017)
0x128c: Push((int) 12016)
0x128d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128e: Pop(3)
0x128f: Return(); Pop(0)

0x1290: Push((int) 12017)
0x1291: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1292: IF (Stack[-1] == 0) GOTO 0x12a7; Pop(1)

0x1293: PushEmpty(string)
0x1294: Stack[-1] = "Neutral"
0x1295: Call 0xf23

0x1296: Pop(1)
0x1297: Push((int) 10870)
0x1298: @@ SetMessage(Stack[-1])
0x1299: Pop(1)
0x129a: @@ ClearReplies()
0x129b: Pop(0)
0x129c: Push((int) 10871)
0x129d: Push((int) -1)
0x129e: Push((int) 12018)
0x129f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a0: Pop(3)
0x12a1: Push((int) 10872)
0x12a2: Push((int) -1)
0x12a3: Push((int) 12019)
0x12a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a5: Pop(3)
0x12a6: Return(); Pop(0)

0x12a7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x12a8: PushEmpty(bool)
0x12a9: Call 0x1672

0x12aa: Pop(0)
0x12ab: IF (Stack[-1] == 0) GOTO 0x12af; Pop(1)

0x12ac: @ lshStopAnimation()
0x12ad: Pop(0)
0x12ae: GOTO 0x12b1

0x12af: @ StopAnimation()
0x12b0: Pop(0)
0x12b1: Return(); Pop(0)

0x12b2: GOTO 0xf34

0x12b3: Return(); Pop(0)

0x12b4: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x12b5: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x12b6: PushEmpty(bool, object)
0x12b7: Stack[-1] = Stack[-11]
0x12b8: Call 0x15bc

0x12b9: Pop(1)
0x12ba: Pop(1); Push((bool) Stack[-1] == 0)
0x12bb: IF (Stack[-1] == 0) GOTO 0x12be; Pop(1)

0x12bc: Stack[-10] = (int) -2
0x12bd: Return(); Pop(8)

0x12be: @ CreateDialog(Stack[-4])
0x12bf: Pop(0)
0x12c0: PushEmpty(int)
0x12c1: Call 0x166e

0x12c2: Pop(0)
0x12c3: @@ SetNPCName(Stack[-1])
0x12c4: Pop(1)
0x12c5: PushEmpty(string)
0x12c6: Call 0x1670

0x12c7: Pop(0)
0x12c8: @@ SetPhoto(Stack[-1])
0x12c9: Pop(1)
0x12ca: PushEmpty(int)
0x12cb: Call 0x1abe

0x12cc: Pop(0)
0x12cd: @@ SetPlayerName(Stack[-1])
0x12ce: Pop(1)
0x12cf: Stack[-2] = (int) -1
0x12d0: @ IsOverrideActive(Stack[-3])
0x12d1: Pop(0)
0x12d2: Push(Stack[-3])
0x12d3: IF (Stack[-1] == 0) GOTO 0x12d6; Pop(1)

0x12d4: Stack[-10] = (int) -2
0x12d5: Return(); Pop(8)

0x12d6: @ DoDialog(Stack[-4])
0x12d7: Pop(0)
0x12d8: PushEmpty(object, object)
0x12d9: Stack[-2] = Stack[-11]
0x12da: Stack[-1] = Stack[-6]
0x12db: Push(-2, 4); TaskCall(13)
0x12dc: Call 0x12f3

0x12dd: Pop(-2, 4); TaskReturn
0x12de: Pop(2)
0x12df: @@ IsDialogEnd(Stack[-1])
0x12e0: Pop(0)
0x12e1: Pop(0); Push((bool) Stack[-1] == 0)
0x12e2: IF (Stack[-1] == 0) GOTO 0x12e8; Pop(1)

0x12e3: @ sync()
0x12e4: Pop(0)
0x12e5: @@ IsDialogEnd(Stack[-1])
0x12e6: Pop(0)
0x12e7: GOTO 0x12e1

0x12e8: PushEmpty(object)
0x12e9: Stack[-1] = Stack[-10]
0x12ea: Call 0x15f4

0x12eb: Pop(1)
0x12ec: @ StopDialog(Stack[-4])
0x12ed: Pop(0)
0x12ee: @@ GetReturnValue(Stack[-2])
0x12ef: Pop(0)
0x12f0: Stack[-10] = Stack[-2]
0x12f1: Return(); Pop(8)

0x12f2: Stack[-4] = 0
0x12f3: PushEmpty()
0x12f4: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x12f5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x12f6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x12f7: Push((int) 1)
0x12f8: IF (Stack[-1] == 0) GOTO 0x131d; Pop(1)

0x12f9: PushEmpty(string)
0x12fa: Stack[-1] = "Neutral"
0x12fb: Call 0x133b

0x12fc: Pop(1)
0x12fd: Push((int) 11245)
0x12fe: @@ SetMessage(Stack[-1])
0x12ff: Pop(1)
0x1300: @@ ClearReplies()
0x1301: Pop(0)
0x1302: PushEmpty(bool)
0x1303: Stack[-1] = (bool) 0
0x1304: PushEmpty(bool, object)
0x1305: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1306: Call 0x19fb

0x1307: Pop(1)
0x1308: IF (Stack[-1] == 0) GOTO 0x130f; Pop(1)

0x1309: PushEmpty(bool, object)
0x130a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x130b: Call 0x1a07

0x130c: Pop(1)
0x130d: IF (Stack[-1] == 0) GOTO 0x130f; Pop(1)

0x130e: Stack[-1] = (bool) 1
0x130f: IF (Stack[-1] == 0) GOTO 0x1315; Pop(1)

0x1310: Push((int) 11247)
0x1311: Push((int) 12438)
0x1312: Push((int) 12437)
0x1313: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1314: Pop(3)
0x1315: Push((int) 11246)
0x1316: Push((int) -1)
0x1317: Push((int) 12436)
0x1318: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1319: Pop(3)
0x131a: GOTO 0x131d

0x131b: Return(); Pop(0)

0x131c: GOTO 0x12f7

0x131d: PushEmpty(bool)
0x131e: Call 0x1672

0x131f: Pop(0)
0x1320: IF (Stack[-1] == 0) GOTO 0x132c; Pop(1)

0x1321: @ lshWaitForAnimEnd()
0x1322: Pop(0)
0x1323: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1324: IF (Stack[-1] == 0) GOTO 0x1326; Pop(1)

0x1325: GOTO 0x132b

0x1326: PushEmpty(string)
0x1327: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1328: Call 0x15f8

0x1329: Pop(1)
0x132a: GOTO 0x1321

0x132b: GOTO 0x133a

0x132c: Push("all")
0x132d: Push("idle")
0x132e: @ PlayAnimation(Stack[-2], Stack[-1])
0x132f: Pop(2)
0x1330: @ WaitForAnimEnd()
0x1331: Pop(0)
0x1332: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1333: IF (Stack[-1] == 0) GOTO 0x1335; Pop(1)

0x1334: GOTO 0x133a

0x1335: Push("all")
0x1336: Push("idle")
0x1337: @ PlayAnimation(Stack[-2], Stack[-1])
0x1338: Pop(2)
0x1339: GOTO 0x1330

0x133a: Return(); Pop(0)

0x133b: PushEmpty()
0x133c: PushEmpty(bool)
0x133d: Call 0x1672

0x133e: Pop(0)
0x133f: Pop(1); Push((bool) Stack[-1] == 0)
0x1340: IF (Stack[-1] == 0) GOTO 0x1342; Pop(1)

0x1341: Return(); Pop(0)

0x1342: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1343: IF (Stack[-1] == 0) GOTO 0x1345; Pop(1)

0x1344: Return(); Pop(0)

0x1345: PushEmpty(string)
0x1346: Stack[-1] = Stack[-2]
0x1347: Call 0x15f8

0x1348: Pop(1)
0x1349: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x134a: Return(); Pop(0)

0x134b: PushEmpty()
0x134c: Push((int) 1)
0x134d: IF (Stack[-1] == 0) GOTO 0x13c0; Pop(1)

0x134e: PushEmpty()
0x134f: Call 0x160a

0x1350: Pop(0)
0x1351: Push((int) 12437)
0x1352: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1353: IF (Stack[-1] == 0) GOTO 0x1359; Pop(1)

0x1354: PushEmpty(object, object)
0x1355: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1356: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1357: Call 0x17d2

0x1358: Pop(2)
0x1359: Push((int) 12435)
0x135a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x135b: IF (Stack[-1] == 0) GOTO 0x137e; Pop(1)

0x135c: PushEmpty(string)
0x135d: Stack[-1] = "Neutral"
0x135e: Call 0x133b

0x135f: Pop(1)
0x1360: Push((int) 11245)
0x1361: @@ SetMessage(Stack[-1])
0x1362: Pop(1)
0x1363: @@ ClearReplies()
0x1364: Pop(0)
0x1365: PushEmpty(bool)
0x1366: Stack[-1] = (bool) 0
0x1367: PushEmpty(bool, object)
0x1368: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1369: Call 0x19fb

0x136a: Pop(1)
0x136b: IF (Stack[-1] == 0) GOTO 0x1372; Pop(1)

0x136c: PushEmpty(bool, object)
0x136d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x136e: Call 0x1a07

0x136f: Pop(1)
0x1370: IF (Stack[-1] == 0) GOTO 0x1372; Pop(1)

0x1371: Stack[-1] = (bool) 1
0x1372: IF (Stack[-1] == 0) GOTO 0x1378; Pop(1)

0x1373: Push((int) 11247)
0x1374: Push((int) 12438)
0x1375: Push((int) 12437)
0x1376: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1377: Pop(3)
0x1378: Push((int) 11246)
0x1379: Push((int) -1)
0x137a: Push((int) 12436)
0x137b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x137c: Pop(3)
0x137d: Return(); Pop(0)

0x137e: Push((int) 12438)
0x137f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1380: IF (Stack[-1] == 0) GOTO 0x1390; Pop(1)

0x1381: PushEmpty(string)
0x1382: Stack[-1] = "Neutral"
0x1383: Call 0x133b

0x1384: Pop(1)
0x1385: Push((int) 11248)
0x1386: @@ SetMessage(Stack[-1])
0x1387: Pop(1)
0x1388: @@ ClearReplies()
0x1389: Pop(0)
0x138a: Push((int) 11249)
0x138b: Push((int) 12440)
0x138c: Push((int) 12439)
0x138d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138e: Pop(3)
0x138f: Return(); Pop(0)

0x1390: Push((int) 12440)
0x1391: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1392: IF (Stack[-1] == 0) GOTO 0x13a2; Pop(1)

0x1393: PushEmpty(string)
0x1394: Stack[-1] = "Neutral"
0x1395: Call 0x133b

0x1396: Pop(1)
0x1397: Push((int) 11250)
0x1398: @@ SetMessage(Stack[-1])
0x1399: Pop(1)
0x139a: @@ ClearReplies()
0x139b: Pop(0)
0x139c: Push((int) 11251)
0x139d: Push((int) 12442)
0x139e: Push((int) 12441)
0x139f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a0: Pop(3)
0x13a1: Return(); Pop(0)

0x13a2: Push((int) 12442)
0x13a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a4: IF (Stack[-1] == 0) GOTO 0x13b4; Pop(1)

0x13a5: PushEmpty(string)
0x13a6: Stack[-1] = "Neutral"
0x13a7: Call 0x133b

0x13a8: Pop(1)
0x13a9: Push((int) 11252)
0x13aa: @@ SetMessage(Stack[-1])
0x13ab: Pop(1)
0x13ac: @@ ClearReplies()
0x13ad: Pop(0)
0x13ae: Push((int) 11253)
0x13af: Push((int) -1)
0x13b0: Push((int) 12443)
0x13b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b2: Pop(3)
0x13b3: Return(); Pop(0)

0x13b4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x13b5: PushEmpty(bool)
0x13b6: Call 0x1672

0x13b7: Pop(0)
0x13b8: IF (Stack[-1] == 0) GOTO 0x13bc; Pop(1)

0x13b9: @ lshStopAnimation()
0x13ba: Pop(0)
0x13bb: GOTO 0x13be

0x13bc: @ StopAnimation()
0x13bd: Pop(0)
0x13be: Return(); Pop(0)

0x13bf: GOTO 0x134c

0x13c0: Return(); Pop(0)

0x13c1: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x13c2: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x13c3: PushEmpty(bool, object)
0x13c4: Stack[-1] = Stack[-11]
0x13c5: Call 0x15bc

0x13c6: Pop(1)
0x13c7: Pop(1); Push((bool) Stack[-1] == 0)
0x13c8: IF (Stack[-1] == 0) GOTO 0x13cb; Pop(1)

0x13c9: Stack[-10] = (int) -2
0x13ca: Return(); Pop(8)

0x13cb: @ CreateDialog(Stack[-4])
0x13cc: Pop(0)
0x13cd: PushEmpty(int)
0x13ce: Call 0x166e

0x13cf: Pop(0)
0x13d0: @@ SetNPCName(Stack[-1])
0x13d1: Pop(1)
0x13d2: PushEmpty(string)
0x13d3: Call 0x1670

0x13d4: Pop(0)
0x13d5: @@ SetPhoto(Stack[-1])
0x13d6: Pop(1)
0x13d7: PushEmpty(int)
0x13d8: Call 0x1abe

0x13d9: Pop(0)
0x13da: @@ SetPlayerName(Stack[-1])
0x13db: Pop(1)
0x13dc: Stack[-2] = (int) -1
0x13dd: @ IsOverrideActive(Stack[-3])
0x13de: Pop(0)
0x13df: Push(Stack[-3])
0x13e0: IF (Stack[-1] == 0) GOTO 0x13e3; Pop(1)

0x13e1: Stack[-10] = (int) -2
0x13e2: Return(); Pop(8)

0x13e3: @ DoDialog(Stack[-4])
0x13e4: Pop(0)
0x13e5: PushEmpty(object, object)
0x13e6: Stack[-2] = Stack[-11]
0x13e7: Stack[-1] = Stack[-6]
0x13e8: Push(-2, 4); TaskCall(15)
0x13e9: Call 0x1400

0x13ea: Pop(-2, 4); TaskReturn
0x13eb: Pop(2)
0x13ec: @@ IsDialogEnd(Stack[-1])
0x13ed: Pop(0)
0x13ee: Pop(0); Push((bool) Stack[-1] == 0)
0x13ef: IF (Stack[-1] == 0) GOTO 0x13f5; Pop(1)

0x13f0: @ sync()
0x13f1: Pop(0)
0x13f2: @@ IsDialogEnd(Stack[-1])
0x13f3: Pop(0)
0x13f4: GOTO 0x13ee

0x13f5: PushEmpty(object)
0x13f6: Stack[-1] = Stack[-10]
0x13f7: Call 0x15f4

0x13f8: Pop(1)
0x13f9: @ StopDialog(Stack[-4])
0x13fa: Pop(0)
0x13fb: @@ GetReturnValue(Stack[-2])
0x13fc: Pop(0)
0x13fd: Stack[-10] = Stack[-2]
0x13fe: Return(); Pop(8)

0x13ff: Stack[-4] = 0
0x1400: PushEmpty()
0x1401: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1402: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1403: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1404: Push((int) 1)
0x1405: IF (Stack[-1] == 0) GOTO 0x144d; Pop(1)

0x1406: PushEmpty(bool, object)
0x1407: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1408: Call 0x199b

0x1409: Pop(1)
0x140a: IF (Stack[-1] == 0) GOTO 0x1429; Pop(1)

0x140b: PushEmpty(object, object)
0x140c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x140d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x140e: Call 0x17b2

0x140f: Pop(2)
0x1410: PushEmpty(string)
0x1411: Stack[-1] = "Neutral"
0x1412: Call 0x146b

0x1413: Pop(1)
0x1414: Push((int) 13464)
0x1415: @@ SetMessage(Stack[-1])
0x1416: Pop(1)
0x1417: @@ ClearReplies()
0x1418: Pop(0)
0x1419: Push((int) 13465)
0x141a: Push((int) 14704)
0x141b: Push((int) 14702)
0x141c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141d: Pop(3)
0x141e: PushEmpty(bool, object)
0x141f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1420: Call 0x19bf

0x1421: Pop(1)
0x1422: IF (Stack[-1] == 0) GOTO 0x1428; Pop(1)

0x1423: Push((int) 13466)
0x1424: Push((int) 14705)
0x1425: Push((int) 14703)
0x1426: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1427: Pop(3)
0x1428: GOTO 0x144d

0x1429: PushEmpty(string)
0x142a: Stack[-1] = "Neutral"
0x142b: Call 0x146b

0x142c: Pop(1)
0x142d: Push((int) 13462)
0x142e: @@ SetMessage(Stack[-1])
0x142f: Pop(1)
0x1430: @@ ClearReplies()
0x1431: Pop(0)
0x1432: PushEmpty(bool)
0x1433: Stack[-1] = (bool) 0
0x1434: PushEmpty(bool, object)
0x1435: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1436: Call 0x19a7

0x1437: Pop(1)
0x1438: IF (Stack[-1] == 0) GOTO 0x143f; Pop(1)

0x1439: PushEmpty(bool, object)
0x143a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x143b: Call 0x19b3

0x143c: Pop(1)
0x143d: IF (Stack[-1] == 0) GOTO 0x143f; Pop(1)

0x143e: Stack[-1] = (bool) 1
0x143f: IF (Stack[-1] == 0) GOTO 0x1445; Pop(1)

0x1440: Push((int) 13463)
0x1441: Push((int) 14713)
0x1442: Push((int) 14700)
0x1443: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1444: Pop(3)
0x1445: Push((int) 13483)
0x1446: Push((int) -1)
0x1447: Push((int) 14721)
0x1448: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1449: Pop(3)
0x144a: GOTO 0x144d

0x144b: Return(); Pop(0)

0x144c: GOTO 0x1404

0x144d: PushEmpty(bool)
0x144e: Call 0x1672

0x144f: Pop(0)
0x1450: IF (Stack[-1] == 0) GOTO 0x145c; Pop(1)

0x1451: @ lshWaitForAnimEnd()
0x1452: Pop(0)
0x1453: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1454: IF (Stack[-1] == 0) GOTO 0x1456; Pop(1)

0x1455: GOTO 0x145b

0x1456: PushEmpty(string)
0x1457: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1458: Call 0x15f8

0x1459: Pop(1)
0x145a: GOTO 0x1451

0x145b: GOTO 0x146a

0x145c: Push("all")
0x145d: Push("idle")
0x145e: @ PlayAnimation(Stack[-2], Stack[-1])
0x145f: Pop(2)
0x1460: @ WaitForAnimEnd()
0x1461: Pop(0)
0x1462: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1463: IF (Stack[-1] == 0) GOTO 0x1465; Pop(1)

0x1464: GOTO 0x146a

0x1465: Push("all")
0x1466: Push("idle")
0x1467: @ PlayAnimation(Stack[-2], Stack[-1])
0x1468: Pop(2)
0x1469: GOTO 0x1460

0x146a: Return(); Pop(0)

0x146b: PushEmpty()
0x146c: PushEmpty(bool)
0x146d: Call 0x1672

0x146e: Pop(0)
0x146f: Pop(1); Push((bool) Stack[-1] == 0)
0x1470: IF (Stack[-1] == 0) GOTO 0x1472; Pop(1)

0x1471: Return(); Pop(0)

0x1472: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1473: IF (Stack[-1] == 0) GOTO 0x1475; Pop(1)

0x1474: Return(); Pop(0)

0x1475: PushEmpty(string)
0x1476: Stack[-1] = Stack[-2]
0x1477: Call 0x15f8

0x1478: Pop(1)
0x1479: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x147a: Return(); Pop(0)

0x147b: PushEmpty()
0x147c: Push((int) 1)
0x147d: IF (Stack[-1] == 0) GOTO 0x15aa; Pop(1)

0x147e: PushEmpty()
0x147f: Call 0x160a

0x1480: Pop(0)
0x1481: Push((int) 14724)
0x1482: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1483: IF (Stack[-1] == 0) GOTO 0x1493; Pop(1)

0x1484: PushEmpty(object, object)
0x1485: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1486: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1487: Call 0x17b8

0x1488: Pop(2)
0x1489: PushEmpty(object, object)
0x148a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x148b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x148c: Call 0x17c1

0x148d: Pop(2)
0x148e: PushEmpty(object, object)
0x148f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1490: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1491: Call 0x16ca

0x1492: Pop(2)
0x1493: Push((int) 14700)
0x1494: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1495: IF (Stack[-1] == 0) GOTO 0x149b; Pop(1)

0x1496: PushEmpty(object, object)
0x1497: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1498: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1499: Call 0x17cc

0x149a: Pop(2)
0x149b: Push((int) 14701)
0x149c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x149d: IF (Stack[-1] == 0) GOTO 0x14e3; Pop(1)

0x149e: PushEmpty(bool, object)
0x149f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14a0: Call 0x199b

0x14a1: Pop(1)
0x14a2: IF (Stack[-1] == 0) GOTO 0x14c1; Pop(1)

0x14a3: PushEmpty(object, object)
0x14a4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14a6: Call 0x17b2

0x14a7: Pop(2)
0x14a8: PushEmpty(string)
0x14a9: Stack[-1] = "Neutral"
0x14aa: Call 0x146b

0x14ab: Pop(1)
0x14ac: Push((int) 13464)
0x14ad: @@ SetMessage(Stack[-1])
0x14ae: Pop(1)
0x14af: @@ ClearReplies()
0x14b0: Pop(0)
0x14b1: Push((int) 13465)
0x14b2: Push((int) 14704)
0x14b3: Push((int) 14702)
0x14b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b5: Pop(3)
0x14b6: PushEmpty(bool, object)
0x14b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14b8: Call 0x19bf

0x14b9: Pop(1)
0x14ba: IF (Stack[-1] == 0) GOTO 0x14c0; Pop(1)

0x14bb: Push((int) 13466)
0x14bc: Push((int) 14705)
0x14bd: Push((int) 14703)
0x14be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14bf: Pop(3)
0x14c0: Return(); Pop(0)

0x14c1: PushEmpty(string)
0x14c2: Stack[-1] = "Neutral"
0x14c3: Call 0x146b

0x14c4: Pop(1)
0x14c5: Push((int) 13462)
0x14c6: @@ SetMessage(Stack[-1])
0x14c7: Pop(1)
0x14c8: @@ ClearReplies()
0x14c9: Pop(0)
0x14ca: PushEmpty(bool)
0x14cb: Stack[-1] = (bool) 0
0x14cc: PushEmpty(bool, object)
0x14cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14ce: Call 0x19a7

0x14cf: Pop(1)
0x14d0: IF (Stack[-1] == 0) GOTO 0x14d7; Pop(1)

0x14d1: PushEmpty(bool, object)
0x14d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14d3: Call 0x19b3

0x14d4: Pop(1)
0x14d5: IF (Stack[-1] == 0) GOTO 0x14d7; Pop(1)

0x14d6: Stack[-1] = (bool) 1
0x14d7: IF (Stack[-1] == 0) GOTO 0x14dd; Pop(1)

0x14d8: Push((int) 13463)
0x14d9: Push((int) 14713)
0x14da: Push((int) 14700)
0x14db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14dc: Pop(3)
0x14dd: Push((int) 13483)
0x14de: Push((int) -1)
0x14df: Push((int) 14721)
0x14e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e1: Pop(3)
0x14e2: Return(); Pop(0)

0x14e3: Push((int) 14713)
0x14e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14e5: IF (Stack[-1] == 0) GOTO 0x14f5; Pop(1)

0x14e6: PushEmpty(string)
0x14e7: Stack[-1] = "Neutral"
0x14e8: Call 0x146b

0x14e9: Pop(1)
0x14ea: Push((int) 13476)
0x14eb: @@ SetMessage(Stack[-1])
0x14ec: Pop(1)
0x14ed: @@ ClearReplies()
0x14ee: Pop(0)
0x14ef: Push((int) 13477)
0x14f0: Push((int) 14715)
0x14f1: Push((int) 14714)
0x14f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f3: Pop(3)
0x14f4: Return(); Pop(0)

0x14f5: Push((int) 14715)
0x14f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f7: IF (Stack[-1] == 0) GOTO 0x150c; Pop(1)

0x14f8: PushEmpty(string)
0x14f9: Stack[-1] = "Neutral"
0x14fa: Call 0x146b

0x14fb: Pop(1)
0x14fc: Push((int) 13478)
0x14fd: @@ SetMessage(Stack[-1])
0x14fe: Pop(1)
0x14ff: @@ ClearReplies()
0x1500: Pop(0)
0x1501: Push((int) 13480)
0x1502: Push((int) 14718)
0x1503: Push((int) 14717)
0x1504: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1505: Pop(3)
0x1506: Push((int) 13479)
0x1507: Push((int) -1)
0x1508: Push((int) 14716)
0x1509: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150a: Pop(3)
0x150b: Return(); Pop(0)

0x150c: Push((int) 14718)
0x150d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150e: IF (Stack[-1] == 0) GOTO 0x151e; Pop(1)

0x150f: PushEmpty(string)
0x1510: Stack[-1] = "Neutral"
0x1511: Call 0x146b

0x1512: Pop(1)
0x1513: Push((int) 13481)
0x1514: @@ SetMessage(Stack[-1])
0x1515: Pop(1)
0x1516: @@ ClearReplies()
0x1517: Pop(0)
0x1518: Push((int) 13482)
0x1519: Push((int) -1)
0x151a: Push((int) 14719)
0x151b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151c: Pop(3)
0x151d: Return(); Pop(0)

0x151e: Push((int) 14705)
0x151f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1520: IF (Stack[-1] == 0) GOTO 0x153a; Pop(1)

0x1521: PushEmpty(string)
0x1522: Stack[-1] = "Neutral"
0x1523: Call 0x146b

0x1524: Pop(1)
0x1525: Push((int) 13468)
0x1526: @@ SetMessage(Stack[-1])
0x1527: Pop(1)
0x1528: @@ ClearReplies()
0x1529: Pop(0)
0x152a: Push((int) 13469)
0x152b: Push((int) 14704)
0x152c: Push((int) 14706)
0x152d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x152e: Pop(3)
0x152f: PushEmpty(bool, object)
0x1530: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1531: Call 0x198f

0x1532: Pop(1)
0x1533: IF (Stack[-1] == 0) GOTO 0x1539; Pop(1)

0x1534: Push((int) 13470)
0x1535: Push((int) 14708)
0x1536: Push((int) 14707)
0x1537: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1538: Pop(3)
0x1539: Return(); Pop(0)

0x153a: Push((int) 14708)
0x153b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x153c: IF (Stack[-1] == 0) GOTO 0x1551; Pop(1)

0x153d: PushEmpty(string)
0x153e: Stack[-1] = "Neutral"
0x153f: Call 0x146b

0x1540: Pop(1)
0x1541: Push((int) 13471)
0x1542: @@ SetMessage(Stack[-1])
0x1543: Pop(1)
0x1544: @@ ClearReplies()
0x1545: Pop(0)
0x1546: Push((int) 13472)
0x1547: Push((int) 14711)
0x1548: Push((int) 14709)
0x1549: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x154a: Pop(3)
0x154b: Push((int) 13473)
0x154c: Push((int) 14727)
0x154d: Push((int) 14710)
0x154e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x154f: Pop(3)
0x1550: Return(); Pop(0)

0x1551: Push((int) 14727)
0x1552: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1553: IF (Stack[-1] == 0) GOTO 0x1563; Pop(1)

0x1554: PushEmpty(string)
0x1555: Stack[-1] = "Neutral"
0x1556: Call 0x146b

0x1557: Pop(1)
0x1558: Push((int) 13488)
0x1559: @@ SetMessage(Stack[-1])
0x155a: Pop(1)
0x155b: @@ ClearReplies()
0x155c: Pop(0)
0x155d: Push((int) 13489)
0x155e: Push((int) 14711)
0x155f: Push((int) 14728)
0x1560: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1561: Pop(3)
0x1562: Return(); Pop(0)

0x1563: Push((int) 14711)
0x1564: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1565: IF (Stack[-1] == 0) GOTO 0x1575; Pop(1)

0x1566: PushEmpty(string)
0x1567: Stack[-1] = "Neutral"
0x1568: Call 0x146b

0x1569: Pop(1)
0x156a: Push((int) 13474)
0x156b: @@ SetMessage(Stack[-1])
0x156c: Pop(1)
0x156d: @@ ClearReplies()
0x156e: Pop(0)
0x156f: Push((int) 13490)
0x1570: Push((int) -1)
0x1571: Push((int) 14730)
0x1572: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1573: Pop(3)
0x1574: Return(); Pop(0)

0x1575: Push((int) 14704)
0x1576: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1577: IF (Stack[-1] == 0) GOTO 0x158c; Pop(1)

0x1578: PushEmpty(string)
0x1579: Stack[-1] = "Neutral"
0x157a: Call 0x146b

0x157b: Pop(1)
0x157c: Push((int) 13467)
0x157d: @@ SetMessage(Stack[-1])
0x157e: Pop(1)
0x157f: @@ ClearReplies()
0x1580: Pop(0)
0x1581: Push((int) 13475)
0x1582: Push((int) 14723)
0x1583: Push((int) 14712)
0x1584: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1585: Pop(3)
0x1586: Push((int) 13484)
0x1587: Push((int) -1)
0x1588: Push((int) 14722)
0x1589: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158a: Pop(3)
0x158b: Return(); Pop(0)

0x158c: Push((int) 14723)
0x158d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x158e: IF (Stack[-1] == 0) GOTO 0x159e; Pop(1)

0x158f: PushEmpty(string)
0x1590: Stack[-1] = "Neutral"
0x1591: Call 0x146b

0x1592: Pop(1)
0x1593: Push((int) 13485)
0x1594: @@ SetMessage(Stack[-1])
0x1595: Pop(1)
0x1596: @@ ClearReplies()
0x1597: Pop(0)
0x1598: Push((int) 13486)
0x1599: Push((int) -1)
0x159a: Push((int) 14724)
0x159b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x159c: Pop(3)
0x159d: Return(); Pop(0)

0x159e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x159f: PushEmpty(bool)
0x15a0: Call 0x1672

0x15a1: Pop(0)
0x15a2: IF (Stack[-1] == 0) GOTO 0x15a6; Pop(1)

0x15a3: @ lshStopAnimation()
0x15a4: Pop(0)
0x15a5: GOTO 0x15a8

0x15a6: @ StopAnimation()
0x15a7: Pop(0)
0x15a8: Return(); Pop(0)

0x15a9: GOTO 0x147c

0x15aa: Return(); Pop(0)

0x15ab: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x15ac: @@ GetPosition(Stack[-4])
0x15ad: Pop(0)
0x15ae: @ GetPosition(Stack[-3])
0x15af: Pop(0)
0x15b0: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x15b1: Push(CvectorIndex(Stack[-2], 0))
0x15b2: Push(CvectorIndex(Stack[-3], 2))
0x15b3: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x15b4: Pop(2)
0x15b5: Stack[-10] = Stack[-1]
0x15b6: Return(); Pop(8)

0x15b7: PushEmpty(bool, bool)
0x15b8: @ IsLoaded(Stack[-1])
0x15b9: Pop(0)
0x15ba: Stack[-3] = Stack[-1]
0x15bb: Return(); Pop(2)

0x15bc: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x15bd: @@ GetPosition(Stack[-7])
0x15be: Pop(0)
0x15bf: @@ GetEyesHeight(Stack[-8])
0x15c0: Pop(0)
0x15c1: Push(CvectorIndex(Stack[-7], 1))
0x15c2: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x15c3: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x15c4: @ GetPosition(Stack[-6])
0x15c5: Pop(0)
0x15c6: @ GetEyesHeight(Stack[-8])
0x15c7: Pop(0)
0x15c8: Push(CvectorIndex(Stack[-6], 1))
0x15c9: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x15ca: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x15cb: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x15cc: Push(CvectorIndex(Stack[-5], 1))
0x15cd: Stack[-1] = (int) 0
0x15ce: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x15cf: Pop(0); Push(Stack[-5] | Stack[-5]);
0x15d0: Pop(1); Push(Sqrt(Stack[-1]))
0x15d1: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x15d2: Stack[-4] = -Stack[-5]; Pop(0);
0x15d3: Push((int) 70)
0x15d4: Pop(1); Push(Stack[-6] * Stack[-1]);
0x15d5: PushEmpty(cvector, cvector)
0x15d6: Push(CVector(0.0, 1.0, 0.0))
0x15d7: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x15d8: Call 0x1611

0x15d9: Pop(1)
0x15da: Push((int) 25)
0x15db: Pop(2); Push(Stack[-2] * Stack[-1]);
0x15dc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x15dd: Push(CVector(0.0, 10.0, 0.0))
0x15de: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x15df: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x15e0: @ IsOverrideActive(Stack[-1])
0x15e1: Pop(0)
0x15e2: Push(Stack[-1])
0x15e3: IF (Stack[-1] == 0) GOTO 0x15e6; Pop(1)

0x15e4: Stack[-18] = (bool) 0
0x15e5: Return(); Pop(16)

0x15e6: @ StopWorld()
0x15e7: Pop(0)
0x15e8: @ CameraTransit(Stack[-2], Stack[-4])
0x15e9: Pop(0)
0x15ea: Push(CvectorIndex(Stack[-3], 0))
0x15eb: Push(CvectorIndex(Stack[-4], 2))
0x15ec: @ Rotate(Stack[-2], Stack[-1])
0x15ed: Pop(2)
0x15ee: @ CameraWaitForPlayFinish()
0x15ef: Pop(0)
0x15f0: @ ResumeWorld()
0x15f1: Pop(0)
0x15f2: Stack[-18] = (bool) 1
0x15f3: Return(); Pop(16)

0x15f4: PushEmpty()
0x15f5: @ CameraSwitchToNormal()
0x15f6: Pop(0)
0x15f7: Return(); Pop(0)

0x15f8: PushEmpty(float, float, float, float)
0x15f9: Push("playing ")
0x15fa: Pop(1); Push(Stack[-1] + Stack[-6]);
0x15fb: @ Trace(Stack[-1])
0x15fc: Pop(1)
0x15fd: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x15fe: Pop(0)
0x15ff: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x1600: Pop(0)
0x1601: Push("start: ")
0x1602: Pop(1); Push(Stack[-1] + Stack[-3]);
0x1603: @ Trace(Stack[-1])
0x1604: Pop(1)
0x1605: Push("end: ")
0x1606: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1607: @ Trace(Stack[-1])
0x1608: Pop(1)
0x1609: Return(); Pop(4)

0x160a: PushEmpty(bool)
0x160b: Call 0x1672

0x160c: Pop(0)
0x160d: IF (Stack[-1] == 0) GOTO 0x1610; Pop(1)

0x160e: @ lshStopSpeech()
0x160f: Pop(0)
0x1610: Return(); Pop(0)

0x1611: PushEmpty(float, float)
0x1612: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1613: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1614: Push((float)0.0)
0x1615: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1616: IF (Stack[-1] == 0) GOTO 0x1619; Pop(1)

0x1617: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1618: Return(); Pop(2)

0x1619: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x161a: Return(); Pop(2)

0x161b: PushEmpty(int, int)
0x161c: @ GetVariable(Stack[-3], Stack[-1])
0x161d: Pop(0)
0x161e: Stack[-4] = Stack[-1]
0x161f: Return(); Pop(2)

0x1620: PushEmpty(object, object, object, object)
0x1621: @ GetMainOutdoorScene(Stack[-2])
0x1622: Pop(0)
0x1623: Push(".bin")
0x1624: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1625: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x1626: Pop(1)
0x1627: Stack[-6] = Stack[-1]
0x1628: Return(); Pop(4)

0x1629: Stack[-1] = 0
0x162a: Stack[-2] = 0
0x162b: PushEmpty(int, int, bool, int, int, bool)
0x162c: @@ GetItemID(Stack[-3])
0x162d: Pop(0)
0x162e: Push("Category")
0x162f: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x1630: Pop(1)
0x1631: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x1632: Pop(0)
0x1633: Pop(0); Push((bool) Stack[-1] == 0)
0x1634: IF (Stack[-1] == 0) GOTO 0x1637; Pop(1)

0x1635: @@ DropItems(Stack[-8], Stack[-7])
0x1636: Pop(0)
0x1637: Return(); Pop(6)

0x1638: PushEmpty(object, object)
0x1639: @ CreateInvItem(Stack[-1])
0x163a: Pop(0)
0x163b: @@ SetItemName(Stack[-4])
0x163c: Pop(0)
0x163d: PushEmpty(object, object, int)
0x163e: Stack[-3] = Stack[-8]
0x163f: Stack[-2] = Stack[-4]
0x1640: Stack[-1] = Stack[-6]
0x1641: Call 0x162b

0x1642: Pop(3)
0x1643: Return(); Pop(2)

0x1644: Stack[-1] = 0
0x1645: PushEmpty(object, object)
0x1646: @ FindActor(Stack[-1], Stack[-4])
0x1647: Pop(0)
0x1648: Pop(0); Push((bool) Stack[-1] == 0)
0x1649: IF (Stack[-1] == 0) GOTO 0x164c; Pop(1)

0x164a: Stack[-5] = (bool) 0
0x164b: Return(); Pop(2)

0x164c: @ Trigger(Stack[-1], Stack[-3])
0x164d: Pop(0)
0x164e: Stack[-5] = (bool) 1
0x164f: Return(); Pop(2)

0x1650: Stack[-1] = 0
0x1651: PushEmpty(float, float)
0x1652: @ GetGameTime(Stack[-1])
0x1653: Pop(0)
0x1654: Stack[-3] = Stack[-1]
0x1655: Return(); Pop(2)

0x1656: PushEmpty(float, float)
0x1657: @ GetGameTime(Stack[-1])
0x1658: Pop(0)
0x1659: Push((int) 1)
0x165a: PushEmpty(int)
0x165b: Push((int) 24)
0x165c: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x165d: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x165e: Return(); Pop(2)

0x165f: PushEmpty()
0x1660: PushEmpty(int)
0x1661: Call 0x1656

0x1662: Pop(0)
0x1663: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x1664: Return(); Pop(0)

0x1665: PushEmpty(bool, bool)
0x1666: PushEmpty(string)
0x1667: Stack[-1] = "No"
0x1668: Call 0x15f8

0x1669: Pop(1)
0x166a: @ lshWaitForAnimEnd(Stack[-1])
0x166b: Pop(0)
0x166c: Stack[-3] = Stack[-1]
0x166d: Return(); Pop(2)

0x166e: Stack[-1] = (int) 2863
0x166f: Return(); Pop(0)

0x1670: Stack[-1] = "ui/NPC_Kapella.png"
0x1671: Return(); Pop(0)

0x1672: Stack[-1] = (bool) 1
0x1673: Return(); Pop(0)

0x1674: PushEmpty()
0x1675: Push("KnowUklad")
0x1676: Push((int) 1)
0x1677: @ SetVariable(Stack[-2], Stack[-1])
0x1678: Pop(2)
0x1679: Return(); Pop(0)

0x167a: PushEmpty()
0x167b: Push("ood1Kapella1")
0x167c: Push((int) 1)
0x167d: @ SetVariable(Stack[-2], Stack[-1])
0x167e: Pop(2)
0x167f: Return(); Pop(0)

0x1680: PushEmpty()
0x1681: Push("ood1Kapella2")
0x1682: Push((int) 1)
0x1683: @ SetVariable(Stack[-2], Stack[-1])
0x1684: Pop(2)
0x1685: Return(); Pop(0)

0x1686: PushEmpty()
0x1687: Push("ood1Kapella3")
0x1688: Push((int) 1)
0x1689: @ SetVariable(Stack[-2], Stack[-1])
0x168a: Pop(2)
0x168b: Return(); Pop(0)

0x168c: PushEmpty()
0x168d: Push("ood1Kapella4")
0x168e: Push((int) 1)
0x168f: @ SetVariable(Stack[-2], Stack[-1])
0x1690: Pop(2)
0x1691: Return(); Pop(0)

0x1692: PushEmpty()
0x1693: Push("KnowKaterina")
0x1694: Push((int) 1)
0x1695: @ SetVariable(Stack[-2], Stack[-1])
0x1696: Pop(2)
0x1697: Return(); Pop(0)

0x1698: PushEmpty()
0x1699: Push("KnowKapella")
0x169a: Push((int) 1)
0x169b: @ SetVariable(Stack[-2], Stack[-1])
0x169c: Pop(2)
0x169d: Return(); Pop(0)

0x169e: PushEmpty(object, object)
0x169f: Push("d1q03IsKapella")
0x16a0: Push((int) 1)
0x16a1: @ SetVariable(Stack[-2], Stack[-1])
0x16a2: Pop(2)
0x16a3: PushEmpty(object)
0x16a4: Call 0x1a8c

0x16a5: Stack[-2] = Stack[-1]
0x16a6: Pop(1)
0x16a7: Push("d1q03KapellaGotoOspina")
0x16a8: Push("pt_map_ospina")
0x16a9: Push((int) 0)
0x16aa: Push((int) 8641)
0x16ab: PushEmpty(float)
0x16ac: Call 0x1651

0x16ad: Pop(0)
0x16ae: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16af: Pop(5)
0x16b0: PushEmpty()
0x16b1: Call 0x1acf

0x16b2: Pop(0)
0x16b3: PushEmpty(object, string)
0x16b4: Stack[-1] = "quest_d1_03"
0x16b5: Call 0x1620

0x16b6: Pop(2)
0x16b7: Return(); Pop(2)

0x16b8: Stack[-1] = 0
0x16b9: PushEmpty()
0x16ba: Push("ood1Kapella6")
0x16bb: Push((int) 1)
0x16bc: @ SetVariable(Stack[-2], Stack[-1])
0x16bd: Pop(2)
0x16be: Return(); Pop(0)

0x16bf: PushEmpty()
0x16c0: Push("funduk3 is given")
0x16c1: @ Trace(Stack[-1])
0x16c2: Pop(1)
0x16c3: PushEmpty(object, string, int)
0x16c4: Stack[-3] = Stack[-5]
0x16c5: Stack[-2] = "funduk"
0x16c6: Stack[-1] = (int) 3
0x16c7: Call 0x1638

0x16c8: Pop(3)
0x16c9: Return(); Pop(0)

0x16ca: PushEmpty()
0x16cb: Push("playsound")
0x16cc: Push("giveitem")
0x16cd: @ TriggerWorld(Stack[-2], Stack[-1])
0x16ce: Pop(2)
0x16cf: Return(); Pop(0)

0x16d0: PushEmpty()
0x16d1: Push("ood2Kapella1")
0x16d2: Push((int) 1)
0x16d3: @ SetVariable(Stack[-2], Stack[-1])
0x16d4: Pop(2)
0x16d5: Return(); Pop(0)

0x16d6: PushEmpty()
0x16d7: Push("ood2Kapella2")
0x16d8: Push((int) 1)
0x16d9: @ SetVariable(Stack[-2], Stack[-1])
0x16da: Pop(2)
0x16db: Return(); Pop(0)

0x16dc: PushEmpty(object, object)
0x16dd: Push("d2q01")
0x16de: Push((int) 3)
0x16df: @ SetVariable(Stack[-2], Stack[-1])
0x16e0: Pop(2)
0x16e1: PushEmpty(object)
0x16e2: Call 0x1a8c

0x16e3: Stack[-2] = Stack[-1]
0x16e4: Pop(1)
0x16e5: Push("d2q01KapellaGotoSpi4ka")
0x16e6: Push("pt_map_spi4ka")
0x16e7: Push((int) 1)
0x16e8: Push((int) 11389)
0x16e9: PushEmpty(float)
0x16ea: Call 0x1651

0x16eb: Pop(0)
0x16ec: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16ed: Pop(5)
0x16ee: PushEmpty()
0x16ef: Call 0x1adf

0x16f0: Pop(0)
0x16f1: Return(); Pop(2)

0x16f2: Stack[-1] = 0
0x16f3: PushEmpty()
0x16f4: PushEmpty(object, string, float)
0x16f5: PushEmpty(object)
0x16f6: Call 0x1a8c

0x16f7: Stack[-4] = Stack[-1]
0x16f8: Pop(1)
0x16f9: Stack[-2] = "pt_map_ospina"
0x16fa: Stack[-1] = (int) 2
0x16fb: Call 0x1a9d

0x16fc: Pop(3)
0x16fd: PushEmpty(object)
0x16fe: Call 0x1a8c

0x16ff: Pop(0)
0x1700: @@ ShowMap(Stack[-1])
0x1701: Pop(1)
0x1702: Return(); Pop(0)

0x1703: PushEmpty()
0x1704: PushEmpty(object, string, float)
0x1705: PushEmpty(object)
0x1706: Call 0x1a8c

0x1707: Stack[-4] = Stack[-1]
0x1708: Pop(1)
0x1709: Stack[-2] = "pt_map_spi4ka"
0x170a: Stack[-1] = (int) 2
0x170b: Call 0x1a9d

0x170c: Pop(3)
0x170d: PushEmpty(object)
0x170e: Call 0x1a8c

0x170f: Pop(0)
0x1710: @@ ShowMap(Stack[-1])
0x1711: Pop(1)
0x1712: Return(); Pop(0)

0x1713: PushEmpty()
0x1714: Push("ood1Kapella7")
0x1715: Push((int) 1)
0x1716: @ SetVariable(Stack[-2], Stack[-1])
0x1717: Pop(2)
0x1718: Return(); Pop(0)

0x1719: PushEmpty()
0x171a: Push("ood1Kapella8")
0x171b: Push((int) 1)
0x171c: @ SetVariable(Stack[-2], Stack[-1])
0x171d: Pop(2)
0x171e: Return(); Pop(0)

0x171f: PushEmpty()
0x1720: Push("ood1Kapella9")
0x1721: Push((int) 1)
0x1722: @ SetVariable(Stack[-2], Stack[-1])
0x1723: Pop(2)
0x1724: Return(); Pop(0)

0x1725: PushEmpty()
0x1726: Push("ood1Kapella10")
0x1727: Push((int) 1)
0x1728: @ SetVariable(Stack[-2], Stack[-1])
0x1729: Pop(2)
0x172a: Return(); Pop(0)

0x172b: PushEmpty()
0x172c: Push("ood1Kapella12")
0x172d: Push((int) 1)
0x172e: @ SetVariable(Stack[-2], Stack[-1])
0x172f: Pop(2)
0x1730: Return(); Pop(0)

0x1731: PushEmpty(object, object)
0x1732: Push("d3q03")
0x1733: Push((int) 1)
0x1734: @ SetVariable(Stack[-2], Stack[-1])
0x1735: Pop(2)
0x1736: PushEmpty(object)
0x1737: Call 0x1a8c

0x1738: Stack[-2] = Stack[-1]
0x1739: Pop(1)
0x173a: Push("d3q03KapellaBoyLocation")
0x173b: Push("pt_d3q03_boy")
0x173c: Push((int) 0)
0x173d: Push((int) 11156)
0x173e: PushEmpty(float)
0x173f: Call 0x1651

0x1740: Pop(0)
0x1741: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1742: Pop(5)
0x1743: PushEmpty()
0x1744: Call 0x1aef

0x1745: Pop(0)
0x1746: PushEmpty()
0x1747: Call 0x1aff

0x1748: Pop(0)
0x1749: PushEmpty(object, string)
0x174a: Stack[-1] = "quest_d3_03"
0x174b: Call 0x1620

0x174c: Pop(2)
0x174d: PushEmpty(bool, string, string)
0x174e: Stack[-2] = "quest_d3_03"
0x174f: Stack[-1] = "boy"
0x1750: Call 0x1645

0x1751: Pop(3)
0x1752: Return(); Pop(2)

0x1753: Stack[-1] = 0
0x1754: PushEmpty()
0x1755: Push("ood3Kapella1")
0x1756: Push((int) 1)
0x1757: @ SetVariable(Stack[-2], Stack[-1])
0x1758: Pop(2)
0x1759: Return(); Pop(0)

0x175a: PushEmpty()
0x175b: PushEmpty(object, string, float)
0x175c: PushEmpty(object)
0x175d: Call 0x1a8c

0x175e: Stack[-4] = Stack[-1]
0x175f: Pop(1)
0x1760: Stack[-2] = "pt_d3q03_boy"
0x1761: Stack[-1] = (int) 2
0x1762: Call 0x1a9d

0x1763: Pop(3)
0x1764: PushEmpty(object)
0x1765: Call 0x1a8c

0x1766: Pop(0)
0x1767: @@ ShowMap(Stack[-1])
0x1768: Pop(1)
0x1769: Return(); Pop(0)

0x176a: PushEmpty()
0x176b: Push("ood3Kapella2")
0x176c: Push((int) 1)
0x176d: @ SetVariable(Stack[-2], Stack[-1])
0x176e: Pop(2)
0x176f: Return(); Pop(0)

0x1770: PushEmpty(object, object, object, object)
0x1771: PushEmpty(object)
0x1772: Call 0x1a8c

0x1773: Stack[-3] = Stack[-1]
0x1774: Pop(1)
0x1775: Push("d3q03KapellaBoyLocation")
0x1776: @@ FindMark(Stack[-2], Stack[-1])
0x1777: Pop(1)
0x1778: Push(Stack[-1])
0x1779: IF (Stack[-1] == 0) GOTO 0x177c; Pop(1)

0x177a: @@ Remove()
0x177b: Pop(0)
0x177c: Push("d3q03KapellaBoyLocationSelf")
0x177d: @@ FindMark(Stack[-2], Stack[-1])
0x177e: Pop(1)
0x177f: Push(Stack[-1])
0x1780: IF (Stack[-1] == 0) GOTO 0x1783; Pop(1)

0x1781: @@ Remove()
0x1782: Pop(0)
0x1783: PushEmpty()
0x1784: Call 0x1b0f

0x1785: Pop(0)
0x1786: PushEmpty(bool, string, string)
0x1787: Stack[-2] = "quest_d3_03"
0x1788: Stack[-1] = "completed"
0x1789: Call 0x1645

0x178a: Pop(3)
0x178b: Return(); Pop(4)

0x178c: Stack[-1] = 0
0x178d: Stack[-2] = 0
0x178e: PushEmpty()
0x178f: Push("ood3Kapella3")
0x1790: Push((int) 1)
0x1791: @ SetVariable(Stack[-2], Stack[-1])
0x1792: Pop(2)
0x1793: Return(); Pop(0)

0x1794: PushEmpty()
0x1795: Push("ood3Kapella4")
0x1796: Push((int) 1)
0x1797: @ SetVariable(Stack[-2], Stack[-1])
0x1798: Pop(2)
0x1799: Return(); Pop(0)

0x179a: PushEmpty()
0x179b: Push("ood3Kapella5")
0x179c: Push((int) 1)
0x179d: @ SetVariable(Stack[-2], Stack[-1])
0x179e: Pop(2)
0x179f: Return(); Pop(0)

0x17a0: PushEmpty()
0x17a1: Push("ood6Kapella1")
0x17a2: Push((int) 1)
0x17a3: @ SetVariable(Stack[-2], Stack[-1])
0x17a4: Pop(2)
0x17a5: Return(); Pop(0)

0x17a6: PushEmpty()
0x17a7: Push("d6q02KnowAboutAttack")
0x17a8: Push((int) 1)
0x17a9: @ SetVariable(Stack[-2], Stack[-1])
0x17aa: Pop(2)
0x17ab: Return(); Pop(0)

0x17ac: PushEmpty()
0x17ad: Push("KnowViktoria")
0x17ae: Push((int) 1)
0x17af: @ SetVariable(Stack[-2], Stack[-1])
0x17b0: Pop(2)
0x17b1: Return(); Pop(0)

0x17b2: PushEmpty()
0x17b3: Push("ood8Kapella1")
0x17b4: Push((int) 1)
0x17b5: @ SetVariable(Stack[-2], Stack[-1])
0x17b6: Pop(2)
0x17b7: Return(); Pop(0)

0x17b8: PushEmpty()
0x17b9: Push("d8q02")
0x17ba: Push((int) 1)
0x17bb: @ SetVariable(Stack[-2], Stack[-1])
0x17bc: Pop(2)
0x17bd: PushEmpty()
0x17be: Call 0x1b1f

0x17bf: Pop(0)
0x17c0: Return(); Pop(0)

0x17c1: PushEmpty()
0x17c2: Push("feromicin is given")
0x17c3: @ Trace(Stack[-1])
0x17c4: Pop(1)
0x17c5: PushEmpty(object, string, int)
0x17c6: Stack[-3] = Stack[-5]
0x17c7: Stack[-2] = "feromicin"
0x17c8: Stack[-1] = (int) 1
0x17c9: Call 0x1638

0x17ca: Pop(3)
0x17cb: Return(); Pop(0)

0x17cc: PushEmpty()
0x17cd: Push("ood8Kapella2")
0x17ce: Push((int) 1)
0x17cf: @ SetVariable(Stack[-2], Stack[-1])
0x17d0: Pop(2)
0x17d1: Return(); Pop(0)

0x17d2: PushEmpty()
0x17d3: Push("ood4Kapella1")
0x17d4: Push((int) 1)
0x17d5: @ SetVariable(Stack[-2], Stack[-1])
0x17d6: Pop(2)
0x17d7: Return(); Pop(0)

0x17d8: PushEmpty()
0x17d9: Push("KnowPredictions")
0x17da: Push((int) 1)
0x17db: @ SetVariable(Stack[-2], Stack[-1])
0x17dc: Pop(2)
0x17dd: Return(); Pop(0)

0x17de: PushEmpty(object, object)
0x17df: PushEmpty(object)
0x17e0: Call 0x1a8c

0x17e1: Stack[-2] = Stack[-1]
0x17e2: Pop(1)
0x17e3: Push("d6q02KapellaGotoMladVlad")
0x17e4: Push("pt_map_mladvlad")
0x17e5: Push((int) 0)
0x17e6: Push((int) 15377)
0x17e7: PushEmpty(float)
0x17e8: Call 0x1651

0x17e9: Pop(0)
0x17ea: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x17eb: Pop(5)
0x17ec: Return(); Pop(2)

0x17ed: Stack[-1] = 0
0x17ee: PushEmpty()
0x17ef: Push("d6KapellaVisit")
0x17f0: Push((int) 1)
0x17f1: @ SetVariable(Stack[-2], Stack[-1])
0x17f2: Pop(2)
0x17f3: Return(); Pop(0)

0x17f4: PushEmpty()
0x17f5: Push("ood6Kapella3")
0x17f6: Push((int) 1)
0x17f7: @ SetVariable(Stack[-2], Stack[-1])
0x17f8: Pop(2)
0x17f9: Return(); Pop(0)

0x17fa: PushEmpty()
0x17fb: Push("KnowTermitnik")
0x17fc: Push((int) 1)
0x17fd: @ SetVariable(Stack[-2], Stack[-1])
0x17fe: Pop(2)
0x17ff: Return(); Pop(0)

0x1800: PushEmpty()
0x1801: PushEmpty(int, string)
0x1802: Stack[-1] = "ood1Kapella3"
0x1803: Call 0x161b

0x1804: Pop(1)
0x1805: Push((int) 0)
0x1806: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1807: IF (Stack[-1] == 0) GOTO 0x180a; Pop(1)

0x1808: Stack[-2] = (bool) 1
0x1809: Return(); Pop(0)

0x180a: Stack[-2] = (bool) 0
0x180b: Return(); Pop(0)

0x180c: PushEmpty()
0x180d: PushEmpty(int, string)
0x180e: Stack[-1] = "ood1Kapella4"
0x180f: Call 0x161b

0x1810: Pop(1)
0x1811: Push((int) 0)
0x1812: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1813: IF (Stack[-1] == 0) GOTO 0x1816; Pop(1)

0x1814: Stack[-2] = (bool) 1
0x1815: Return(); Pop(0)

0x1816: Stack[-2] = (bool) 0
0x1817: Return(); Pop(0)

0x1818: PushEmpty()
0x1819: PushEmpty(int, string)
0x181a: Stack[-1] = "d1q01FirstGeorgVisit"
0x181b: Call 0x161b

0x181c: Pop(1)
0x181d: Push((int) 1)
0x181e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x181f: IF (Stack[-1] == 0) GOTO 0x1822; Pop(1)

0x1820: Stack[-2] = (bool) 1
0x1821: Return(); Pop(0)

0x1822: Stack[-2] = (bool) 0
0x1823: Return(); Pop(0)

0x1824: PushEmpty()
0x1825: PushEmpty(int, string)
0x1826: Stack[-1] = "ood1Kapella5"
0x1827: Call 0x161b

0x1828: Pop(1)
0x1829: Push((int) 0)
0x182a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x182b: IF (Stack[-1] == 0) GOTO 0x182e; Pop(1)

0x182c: Stack[-2] = (bool) 1
0x182d: Return(); Pop(0)

0x182e: Stack[-2] = (bool) 0
0x182f: Return(); Pop(0)

0x1830: PushEmpty()
0x1831: PushEmpty(int, string)
0x1832: Stack[-1] = "d1q03"
0x1833: Call 0x161b

0x1834: Pop(1)
0x1835: Push((int) 0)
0x1836: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1837: IF (Stack[-1] == 0) GOTO 0x183a; Pop(1)

0x1838: Stack[-2] = (bool) 1
0x1839: Return(); Pop(0)

0x183a: Stack[-2] = (bool) 0
0x183b: Return(); Pop(0)

0x183c: PushEmpty()
0x183d: PushEmpty(int, string)
0x183e: Stack[-1] = "d1q03"
0x183f: Call 0x161b

0x1840: Pop(1)
0x1841: Push((int) 1000)
0x1842: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1843: IF (Stack[-1] == 0) GOTO 0x1846; Pop(1)

0x1844: Stack[-2] = (bool) 1
0x1845: Return(); Pop(0)

0x1846: Stack[-2] = (bool) 0
0x1847: Return(); Pop(0)

0x1848: PushEmpty()
0x1849: PushEmpty(int, string)
0x184a: Stack[-1] = "d1q03IsKapella"
0x184b: Call 0x161b

0x184c: Pop(1)
0x184d: Push((int) 1)
0x184e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x184f: IF (Stack[-1] == 0) GOTO 0x1852; Pop(1)

0x1850: Stack[-2] = (bool) 1
0x1851: Return(); Pop(0)

0x1852: Stack[-2] = (bool) 0
0x1853: Return(); Pop(0)

0x1854: PushEmpty()
0x1855: PushEmpty(int, string)
0x1856: Stack[-1] = "ood1Kapella6"
0x1857: Call 0x161b

0x1858: Pop(1)
0x1859: Push((int) 0)
0x185a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x185b: IF (Stack[-1] == 0) GOTO 0x185e; Pop(1)

0x185c: Stack[-2] = (bool) 1
0x185d: Return(); Pop(0)

0x185e: Stack[-2] = (bool) 0
0x185f: Return(); Pop(0)

0x1860: PushEmpty()
0x1861: PushEmpty(int, string)
0x1862: Stack[-1] = "d1q03"
0x1863: Call 0x161b

0x1864: Pop(1)
0x1865: Push((int) -1)
0x1866: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1867: IF (Stack[-1] == 0) GOTO 0x186a; Pop(1)

0x1868: Stack[-2] = (bool) 1
0x1869: Return(); Pop(0)

0x186a: Stack[-2] = (bool) 0
0x186b: Return(); Pop(0)

0x186c: PushEmpty()
0x186d: PushEmpty(int, string)
0x186e: Stack[-1] = "KnowAgo"
0x186f: Call 0x161b

0x1870: Pop(1)
0x1871: Push((int) 1)
0x1872: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1873: IF (Stack[-1] == 0) GOTO 0x1876; Pop(1)

0x1874: Stack[-2] = (bool) 1
0x1875: Return(); Pop(0)

0x1876: Stack[-2] = (bool) 0
0x1877: Return(); Pop(0)

0x1878: PushEmpty()
0x1879: PushEmpty(int, string)
0x187a: Stack[-1] = "ood2Kapella1"
0x187b: Call 0x161b

0x187c: Pop(1)
0x187d: Push((int) 0)
0x187e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x187f: IF (Stack[-1] == 0) GOTO 0x1882; Pop(1)

0x1880: Stack[-2] = (bool) 1
0x1881: Return(); Pop(0)

0x1882: Stack[-2] = (bool) 0
0x1883: Return(); Pop(0)

0x1884: PushEmpty()
0x1885: PushEmpty(int, string)
0x1886: Stack[-1] = "ood2Kapella2"
0x1887: Call 0x161b

0x1888: Pop(1)
0x1889: Push((int) 0)
0x188a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x188b: IF (Stack[-1] == 0) GOTO 0x188e; Pop(1)

0x188c: Stack[-2] = (bool) 1
0x188d: Return(); Pop(0)

0x188e: Stack[-2] = (bool) 0
0x188f: Return(); Pop(0)

0x1890: PushEmpty()
0x1891: PushEmpty(int, string)
0x1892: Stack[-1] = "d2q01"
0x1893: Call 0x161b

0x1894: Pop(1)
0x1895: Push((int) 2)
0x1896: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1897: IF (Stack[-1] == 0) GOTO 0x189a; Pop(1)

0x1898: Stack[-2] = (bool) 1
0x1899: Return(); Pop(0)

0x189a: Stack[-2] = (bool) 0
0x189b: Return(); Pop(0)

0x189c: PushEmpty()
0x189d: PushEmpty(int, string)
0x189e: Stack[-1] = "ood1Kapella7"
0x189f: Call 0x161b

0x18a0: Pop(1)
0x18a1: Push((int) 0)
0x18a2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18a3: IF (Stack[-1] == 0) GOTO 0x18a6; Pop(1)

0x18a4: Stack[-2] = (bool) 1
0x18a5: Return(); Pop(0)

0x18a6: Stack[-2] = (bool) 0
0x18a7: Return(); Pop(0)

0x18a8: PushEmpty()
0x18a9: PushEmpty(int, string)
0x18aa: Stack[-1] = "ood1Kapella8"
0x18ab: Call 0x161b

0x18ac: Pop(1)
0x18ad: Push((int) 0)
0x18ae: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18af: IF (Stack[-1] == 0) GOTO 0x18b2; Pop(1)

0x18b0: Stack[-2] = (bool) 1
0x18b1: Return(); Pop(0)

0x18b2: Stack[-2] = (bool) 0
0x18b3: Return(); Pop(0)

0x18b4: PushEmpty()
0x18b5: PushEmpty(int, string)
0x18b6: Stack[-1] = "ood1Kapella9"
0x18b7: Call 0x161b

0x18b8: Pop(1)
0x18b9: Push((int) 0)
0x18ba: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18bb: IF (Stack[-1] == 0) GOTO 0x18be; Pop(1)

0x18bc: Stack[-2] = (bool) 1
0x18bd: Return(); Pop(0)

0x18be: Stack[-2] = (bool) 0
0x18bf: Return(); Pop(0)

0x18c0: PushEmpty()
0x18c1: PushEmpty(int, string)
0x18c2: Stack[-1] = "ood1Kapella10"
0x18c3: Call 0x161b

0x18c4: Pop(1)
0x18c5: Push((int) 0)
0x18c6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18c7: IF (Stack[-1] == 0) GOTO 0x18ca; Pop(1)

0x18c8: Stack[-2] = (bool) 1
0x18c9: Return(); Pop(0)

0x18ca: Stack[-2] = (bool) 0
0x18cb: Return(); Pop(0)

0x18cc: PushEmpty()
0x18cd: PushEmpty(int, string)
0x18ce: Stack[-1] = "ood1Kapella11"
0x18cf: Call 0x161b

0x18d0: Pop(1)
0x18d1: Push((int) 0)
0x18d2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18d3: IF (Stack[-1] == 0) GOTO 0x18d6; Pop(1)

0x18d4: Stack[-2] = (bool) 1
0x18d5: Return(); Pop(0)

0x18d6: Stack[-2] = (bool) 0
0x18d7: Return(); Pop(0)

0x18d8: PushEmpty()
0x18d9: PushEmpty(int, string)
0x18da: Stack[-1] = "ood1Kapella12"
0x18db: Call 0x161b

0x18dc: Pop(1)
0x18dd: Push((int) 0)
0x18de: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18df: IF (Stack[-1] == 0) GOTO 0x18e2; Pop(1)

0x18e0: Stack[-2] = (bool) 1
0x18e1: Return(); Pop(0)

0x18e2: Stack[-2] = (bool) 0
0x18e3: Return(); Pop(0)

0x18e4: PushEmpty()
0x18e5: PushEmpty(int, string)
0x18e6: Stack[-1] = "d3q03"
0x18e7: Call 0x161b

0x18e8: Pop(1)
0x18e9: Push((int) 0)
0x18ea: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18eb: IF (Stack[-1] == 0) GOTO 0x18ee; Pop(1)

0x18ec: Stack[-2] = (bool) 1
0x18ed: Return(); Pop(0)

0x18ee: Stack[-2] = (bool) 0
0x18ef: Return(); Pop(0)

0x18f0: PushEmpty()
0x18f1: PushEmpty(int, string)
0x18f2: Stack[-1] = "ood3Kapella1"
0x18f3: Call 0x161b

0x18f4: Pop(1)
0x18f5: Push((int) 0)
0x18f6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18f7: IF (Stack[-1] == 0) GOTO 0x18fa; Pop(1)

0x18f8: Stack[-2] = (bool) 1
0x18f9: Return(); Pop(0)

0x18fa: Stack[-2] = (bool) 0
0x18fb: Return(); Pop(0)

0x18fc: PushEmpty()
0x18fd: PushEmpty(int, string)
0x18fe: Stack[-1] = "d3q03"
0x18ff: Call 0x161b

0x1900: Pop(1)
0x1901: Push((int) 2)
0x1902: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1903: IF (Stack[-1] == 0) GOTO 0x1906; Pop(1)

0x1904: Stack[-2] = (bool) 1
0x1905: Return(); Pop(0)

0x1906: Stack[-2] = (bool) 0
0x1907: Return(); Pop(0)

0x1908: PushEmpty()
0x1909: PushEmpty(int, string)
0x190a: Stack[-1] = "ood3Kapella2"
0x190b: Call 0x161b

0x190c: Pop(1)
0x190d: Push((int) 0)
0x190e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x190f: IF (Stack[-1] == 0) GOTO 0x1912; Pop(1)

0x1910: Stack[-2] = (bool) 1
0x1911: Return(); Pop(0)

0x1912: Stack[-2] = (bool) 0
0x1913: Return(); Pop(0)

0x1914: PushEmpty()
0x1915: PushEmpty(int, string)
0x1916: Stack[-1] = "ood3Kapella3"
0x1917: Call 0x161b

0x1918: Pop(1)
0x1919: Push((int) 0)
0x191a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x191b: IF (Stack[-1] == 0) GOTO 0x191e; Pop(1)

0x191c: Stack[-2] = (bool) 1
0x191d: Return(); Pop(0)

0x191e: Stack[-2] = (bool) 0
0x191f: Return(); Pop(0)

0x1920: PushEmpty()
0x1921: PushEmpty(int, string)
0x1922: Stack[-1] = "ood3Kapella4"
0x1923: Call 0x161b

0x1924: Pop(1)
0x1925: Push((int) 0)
0x1926: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1927: IF (Stack[-1] == 0) GOTO 0x192a; Pop(1)

0x1928: Stack[-2] = (bool) 1
0x1929: Return(); Pop(0)

0x192a: Stack[-2] = (bool) 0
0x192b: Return(); Pop(0)

0x192c: PushEmpty()
0x192d: PushEmpty(int, string)
0x192e: Stack[-1] = "ood3Kapella5"
0x192f: Call 0x161b

0x1930: Pop(1)
0x1931: Push((int) 0)
0x1932: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1933: IF (Stack[-1] == 0) GOTO 0x1936; Pop(1)

0x1934: Stack[-2] = (bool) 1
0x1935: Return(); Pop(0)

0x1936: Stack[-2] = (bool) 0
0x1937: Return(); Pop(0)

0x1938: PushEmpty()
0x1939: PushEmpty(int, string)
0x193a: Stack[-1] = "d3q01"
0x193b: Call 0x161b

0x193c: Pop(1)
0x193d: Push((int) -1)
0x193e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x193f: IF (Stack[-1] == 0) GOTO 0x1942; Pop(1)

0x1940: Stack[-2] = (bool) 1
0x1941: Return(); Pop(0)

0x1942: Stack[-2] = (bool) 0
0x1943: Return(); Pop(0)

0x1944: PushEmpty()
0x1945: PushEmpty(bool, object)
0x1946: Stack[-1] = Stack[-3]
0x1947: Call 0x1a5b

0x1948: Pop(1)
0x1949: IF (Stack[-1] == 0) GOTO 0x194c; Pop(1)

0x194a: Stack[-2] = (bool) 1
0x194b: Return(); Pop(0)

0x194c: Stack[-2] = (bool) 0
0x194d: Return(); Pop(0)

0x194e: PushEmpty()
0x194f: Stack[-2] = (bool) 1
0x1950: Return(); Pop(0)

0x1951: Stack[-2] = (bool) 0
0x1952: Return(); Pop(0)

0x1953: PushEmpty()
0x1954: PushEmpty(int, string)
0x1955: Stack[-1] = "d6q02"
0x1956: Call 0x161b

0x1957: Pop(1)
0x1958: Push((int) 0)
0x1959: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x195a: IF (Stack[-1] == 0) GOTO 0x195d; Pop(1)

0x195b: Stack[-2] = (bool) 1
0x195c: Return(); Pop(0)

0x195d: Stack[-2] = (bool) 0
0x195e: Return(); Pop(0)

0x195f: PushEmpty()
0x1960: PushEmpty(int, string)
0x1961: Stack[-1] = "d6q02"
0x1962: Call 0x161b

0x1963: Pop(1)
0x1964: Push((int) 1000)
0x1965: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1966: IF (Stack[-1] == 0) GOTO 0x1969; Pop(1)

0x1967: Stack[-2] = (bool) 1
0x1968: Return(); Pop(0)

0x1969: Stack[-2] = (bool) 0
0x196a: Return(); Pop(0)

0x196b: PushEmpty()
0x196c: PushEmpty(int, string)
0x196d: Stack[-1] = "d6q02"
0x196e: Call 0x161b

0x196f: Pop(1)
0x1970: Push((int) -1)
0x1971: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1972: IF (Stack[-1] == 0) GOTO 0x1975; Pop(1)

0x1973: Stack[-2] = (bool) 1
0x1974: Return(); Pop(0)

0x1975: Stack[-2] = (bool) 0
0x1976: Return(); Pop(0)

0x1977: PushEmpty()
0x1978: PushEmpty(int, string)
0x1979: Stack[-1] = "ood6Kapella1"
0x197a: Call 0x161b

0x197b: Pop(1)
0x197c: Push((int) 0)
0x197d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x197e: IF (Stack[-1] == 0) GOTO 0x1981; Pop(1)

0x197f: Stack[-2] = (bool) 1
0x1980: Return(); Pop(0)

0x1981: Stack[-2] = (bool) 0
0x1982: Return(); Pop(0)

0x1983: PushEmpty()
0x1984: PushEmpty(int, string)
0x1985: Stack[-1] = "d6q01"
0x1986: Call 0x161b

0x1987: Pop(1)
0x1988: Push((int) 0)
0x1989: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x198a: IF (Stack[-1] == 0) GOTO 0x198d; Pop(1)

0x198b: Stack[-2] = (bool) 1
0x198c: Return(); Pop(0)

0x198d: Stack[-2] = (bool) 0
0x198e: Return(); Pop(0)

0x198f: PushEmpty()
0x1990: PushEmpty(int, string)
0x1991: Stack[-1] = "d8TalkToMat"
0x1992: Call 0x161b

0x1993: Pop(1)
0x1994: Push((int) 1)
0x1995: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1996: IF (Stack[-1] == 0) GOTO 0x1999; Pop(1)

0x1997: Stack[-2] = (bool) 1
0x1998: Return(); Pop(0)

0x1999: Stack[-2] = (bool) 0
0x199a: Return(); Pop(0)

0x199b: PushEmpty()
0x199c: PushEmpty(int, string)
0x199d: Stack[-1] = "ood8Kapella1"
0x199e: Call 0x161b

0x199f: Pop(1)
0x19a0: Push((int) 0)
0x19a1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x19a2: IF (Stack[-1] == 0) GOTO 0x19a5; Pop(1)

0x19a3: Stack[-2] = (bool) 1
0x19a4: Return(); Pop(0)

0x19a5: Stack[-2] = (bool) 0
0x19a6: Return(); Pop(0)

0x19a7: PushEmpty()
0x19a8: PushEmpty(int, string)
0x19a9: Stack[-1] = "d8q02"
0x19aa: Call 0x161b

0x19ab: Pop(1)
0x19ac: Push((int) 1000)
0x19ad: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x19ae: IF (Stack[-1] == 0) GOTO 0x19b1; Pop(1)

0x19af: Stack[-2] = (bool) 1
0x19b0: Return(); Pop(0)

0x19b1: Stack[-2] = (bool) 0
0x19b2: Return(); Pop(0)

0x19b3: PushEmpty()
0x19b4: PushEmpty(int, string)
0x19b5: Stack[-1] = "ood8Kapella2"
0x19b6: Call 0x161b

0x19b7: Pop(1)
0x19b8: Push((int) 0)
0x19b9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x19ba: IF (Stack[-1] == 0) GOTO 0x19bd; Pop(1)

0x19bb: Stack[-2] = (bool) 1
0x19bc: Return(); Pop(0)

0x19bd: Stack[-2] = (bool) 0
0x19be: Return(); Pop(0)

0x19bf: PushEmpty()
0x19c0: PushEmpty(int, string)
0x19c1: Stack[-1] = "d8TermitnikLoad"
0x19c2: Call 0x161b

0x19c3: Pop(1)
0x19c4: Push((int) 0)
0x19c5: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x19c6: IF (Stack[-1] == 0) GOTO 0x19c9; Pop(1)

0x19c7: Stack[-2] = (bool) 1
0x19c8: Return(); Pop(0)

0x19c9: Stack[-2] = (bool) 0
0x19ca: Return(); Pop(0)

0x19cb: PushEmpty()
0x19cc: PushEmpty(int, string)
0x19cd: Stack[-1] = "KnowKaterina"
0x19ce: Call 0x161b

0x19cf: Pop(1)
0x19d0: Push((int) 1)
0x19d1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x19d2: IF (Stack[-1] == 0) GOTO 0x19d5; Pop(1)

0x19d3: Stack[-2] = (bool) 1
0x19d4: Return(); Pop(0)

0x19d5: Stack[-2] = (bool) 0
0x19d6: Return(); Pop(0)

0x19d7: PushEmpty()
0x19d8: PushEmpty(int, string)
0x19d9: Stack[-1] = "KnowLara"
0x19da: Call 0x161b

0x19db: Pop(1)
0x19dc: Push((int) 1)
0x19dd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x19de: IF (Stack[-1] == 0) GOTO 0x19e1; Pop(1)

0x19df: Stack[-2] = (bool) 1
0x19e0: Return(); Pop(0)

0x19e1: Stack[-2] = (bool) 0
0x19e2: Return(); Pop(0)

0x19e3: PushEmpty()
0x19e4: PushEmpty(int, string)
0x19e5: Stack[-1] = "KnowMishka"
0x19e6: Call 0x161b

0x19e7: Pop(1)
0x19e8: Push((int) 1)
0x19e9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x19ea: IF (Stack[-1] == 0) GOTO 0x19ed; Pop(1)

0x19eb: Stack[-2] = (bool) 1
0x19ec: Return(); Pop(0)

0x19ed: Stack[-2] = (bool) 0
0x19ee: Return(); Pop(0)

0x19ef: PushEmpty()
0x19f0: PushEmpty(int, string)
0x19f1: Stack[-1] = "KnowMladVlad"
0x19f2: Call 0x161b

0x19f3: Pop(1)
0x19f4: Push((int) 1)
0x19f5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x19f6: IF (Stack[-1] == 0) GOTO 0x19f9; Pop(1)

0x19f7: Stack[-2] = (bool) 1
0x19f8: Return(); Pop(0)

0x19f9: Stack[-2] = (bool) 0
0x19fa: Return(); Pop(0)

0x19fb: PushEmpty()
0x19fc: PushEmpty(int, string)
0x19fd: Stack[-1] = "ood4Kapella1"
0x19fe: Call 0x161b

0x19ff: Pop(1)
0x1a00: Push((int) 0)
0x1a01: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a02: IF (Stack[-1] == 0) GOTO 0x1a05; Pop(1)

0x1a03: Stack[-2] = (bool) 1
0x1a04: Return(); Pop(0)

0x1a05: Stack[-2] = (bool) 0
0x1a06: Return(); Pop(0)

0x1a07: PushEmpty()
0x1a08: PushEmpty(int, string)
0x1a09: Stack[-1] = "d4q02"
0x1a0a: Call 0x161b

0x1a0b: Pop(1)
0x1a0c: Push((int) 0)
0x1a0d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a0e: IF (Stack[-1] == 0) GOTO 0x1a11; Pop(1)

0x1a0f: Stack[-2] = (bool) 1
0x1a10: Return(); Pop(0)

0x1a11: Stack[-2] = (bool) 0
0x1a12: Return(); Pop(0)

0x1a13: PushEmpty()
0x1a14: PushEmpty(int, string)
0x1a15: Stack[-1] = "KnowNotkin"
0x1a16: Call 0x161b

0x1a17: Pop(1)
0x1a18: Push((int) 1)
0x1a19: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a1a: IF (Stack[-1] == 0) GOTO 0x1a1d; Pop(1)

0x1a1b: Stack[-2] = (bool) 1
0x1a1c: Return(); Pop(0)

0x1a1d: Stack[-2] = (bool) 0
0x1a1e: Return(); Pop(0)

0x1a1f: PushEmpty()
0x1a20: PushEmpty(int, string)
0x1a21: Stack[-1] = "ood6Kapella3"
0x1a22: Call 0x161b

0x1a23: Pop(1)
0x1a24: Push((int) 0)
0x1a25: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a26: IF (Stack[-1] == 0) GOTO 0x1a29; Pop(1)

0x1a27: Stack[-2] = (bool) 1
0x1a28: Return(); Pop(0)

0x1a29: Stack[-2] = (bool) 0
0x1a2a: Return(); Pop(0)

0x1a2b: PushEmpty()
0x1a2c: PushEmpty(int, string)
0x1a2d: Stack[-1] = "KnowSpi4ka"
0x1a2e: Call 0x161b

0x1a2f: Pop(1)
0x1a30: Push((int) 1)
0x1a31: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a32: IF (Stack[-1] == 0) GOTO 0x1a35; Pop(1)

0x1a33: Stack[-2] = (bool) 1
0x1a34: Return(); Pop(0)

0x1a35: Stack[-2] = (bool) 0
0x1a36: Return(); Pop(0)

0x1a37: PushEmpty()
0x1a38: PushEmpty(int, string)
0x1a39: Stack[-1] = "KnowUklad"
0x1a3a: Call 0x161b

0x1a3b: Pop(1)
0x1a3c: Push((int) 1)
0x1a3d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a3e: IF (Stack[-1] == 0) GOTO 0x1a41; Pop(1)

0x1a3f: Stack[-2] = (bool) 1
0x1a40: Return(); Pop(0)

0x1a41: Stack[-2] = (bool) 0
0x1a42: Return(); Pop(0)

0x1a43: PushEmpty()
0x1a44: PushEmpty(int, string)
0x1a45: Stack[-1] = "ood1Kapella1"
0x1a46: Call 0x161b

0x1a47: Pop(1)
0x1a48: Push((int) 0)
0x1a49: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a4a: IF (Stack[-1] == 0) GOTO 0x1a4d; Pop(1)

0x1a4b: Stack[-2] = (bool) 1
0x1a4c: Return(); Pop(0)

0x1a4d: Stack[-2] = (bool) 0
0x1a4e: Return(); Pop(0)

0x1a4f: PushEmpty()
0x1a50: PushEmpty(int, string)
0x1a51: Stack[-1] = "ood1Kapella2"
0x1a52: Call 0x161b

0x1a53: Pop(1)
0x1a54: Push((int) 0)
0x1a55: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a56: IF (Stack[-1] == 0) GOTO 0x1a59; Pop(1)

0x1a57: Stack[-2] = (bool) 1
0x1a58: Return(); Pop(0)

0x1a59: Stack[-2] = (bool) 0
0x1a5a: Return(); Pop(0)

0x1a5b: PushEmpty(float, float)
0x1a5c: Push("disease")
0x1a5d: @@ GetProperty(Stack[-1], Stack[-2])
0x1a5e: Pop(1)
0x1a5f: Push((int) 0)
0x1a60: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x1a61: Return(); Pop(2)

0x1a62: PushEmpty(object, object)
0x1a63: @ GetDiaryRoot(Stack[-1])
0x1a64: Pop(0)
0x1a65: Pop(0); Push((bool) Stack[-1] == 0)
0x1a66: IF (Stack[-1] == 0) GOTO 0x1a6c; Pop(1)

0x1a67: Push("Can't retrieve diary root")
0x1a68: @ Trace(Stack[-1])
0x1a69: Pop(1)
0x1a6a: Stack[-3] = (bool) 0
0x1a6b: Return(); Pop(2)

0x1a6c: Stack[-3] = Stack[-1]
0x1a6d: Return(); Pop(2)

0x1a6e: Stack[-1] = 0
0x1a6f: PushEmpty(object, object, int, object, object, int)
0x1a70: PushEmpty(object)
0x1a71: Call 0x1a62

0x1a72: Stack[-4] = Stack[-1]
0x1a73: Pop(1)
0x1a74: @@ Find(Stack[-7], Stack[-2])
0x1a75: Pop(0)
0x1a76: Pop(0); Push((bool) Stack[-2] == 0)
0x1a77: IF (Stack[-1] == 0) GOTO 0x1a7e; Pop(1)

0x1a78: Push("Can't find diary parent with id: ")
0x1a79: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1a7a: @ Trace(Stack[-1])
0x1a7b: Pop(1)
0x1a7c: Stack[-9] = (bool) 0
0x1a7d: Return(); Pop(6)

0x1a7e: @@ AddChild(Stack[-8])
0x1a7f: Pop(0)
0x1a80: Push("player_diary")
0x1a81: Push((int) 1)
0x1a82: @ SetVariable(Stack[-2], Stack[-1])
0x1a83: Pop(2)
0x1a84: @@ GetCategory(Stack[-1])
0x1a85: Pop(0)
0x1a86: @ SetDiarySection(Stack[-1])
0x1a87: Pop(0)
0x1a88: Stack[-9] = (bool) 0
0x1a89: Return(); Pop(6)

0x1a8a: Stack[-2] = 0
0x1a8b: Stack[-3] = 0
0x1a8c: PushEmpty(object, object, object, object)
0x1a8d: @ GetMainOutdoorScene(Stack[-2])
0x1a8e: Pop(0)
0x1a8f: Pop(0); Push((bool) Stack[-2] == 0)
0x1a90: IF (Stack[-1] == 0) GOTO 0x1a97; Pop(1)

0x1a91: Push("Can't find main outdoor scene")
0x1a92: @ Trace(Stack[-1])
0x1a93: Pop(1)
0x1a94: Stack[-1] = 0
0x1a95: Stack[-5] = Stack[-1]
0x1a96: Return(); Pop(4)

0x1a97: @@ GetMap(Stack[-1])
0x1a98: Pop(0)
0x1a99: Stack[-5] = Stack[-1]
0x1a9a: Return(); Pop(4)

0x1a9b: Stack[-1] = 0
0x1a9c: Stack[-2] = 0
0x1a9d: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x1a9e: @ GetMainOutdoorScene(Stack[-2])
0x1a9f: Pop(0)
0x1aa0: Pop(0); Push((bool) Stack[-2] == 0)
0x1aa1: IF (Stack[-1] == 0) GOTO 0x1aa6; Pop(1)

0x1aa2: Push("Can't find main outdoor scene")
0x1aa3: @ Trace(Stack[-1])
0x1aa4: Pop(1)
0x1aa5: Return(); Pop(8)

0x1aa6: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x1aa7: Pop(0)
0x1aa8: Pop(0); Push((bool) Stack[-1] == 0)
0x1aa9: IF (Stack[-1] == 0) GOTO 0x1ab0; Pop(1)

0x1aaa: Push("Warning: outdoor scene locator ")
0x1aab: Pop(1); Push(Stack[-1] + Stack[-11]);
0x1aac: Push(" doesnt exist")
0x1aad: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1aae: @ Trace(Stack[-1])
0x1aaf: Pop(1)
0x1ab0: @@ GetMap(Stack[-11])
0x1ab1: Pop(0)
0x1ab2: Pop(0); Push((bool) Stack[-11] == 0)
0x1ab3: IF (Stack[-1] == 0) GOTO 0x1ab8; Pop(1)

0x1ab4: Push("Can't find map")
0x1ab5: @ Trace(Stack[-1])
0x1ab6: Pop(1)
0x1ab7: Return(); Pop(8)

0x1ab8: Push(CvectorIndex(Stack[-4], 0))
0x1ab9: Push(CvectorIndex(Stack[-5], 2))
0x1aba: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x1abb: Pop(2)
0x1abc: Return(); Pop(8)

0x1abd: Stack[-2] = 0
0x1abe: PushEmpty(int, int)
0x1abf: Push("player")
0x1ac0: @ GetVariable(Stack[-1], Stack[-2])
0x1ac1: Pop(1)
0x1ac2: Push((int) 0)
0x1ac3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ac4: IF (Stack[-1] == 0) GOTO 0x1ac8; Pop(1)

0x1ac5: Stack[-3] = (int) 200001
0x1ac6: Return(); Pop(2)

0x1ac7: GOTO 0x1acd

0x1ac8: Push((int) 1)
0x1ac9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1aca: IF (Stack[-1] == 0) GOTO 0x1acd; Pop(1)

0x1acb: Stack[-3] = (int) 200002
0x1acc: Return(); Pop(2)

0x1acd: Stack[-3] = (int) 200003
0x1ace: Return(); Pop(2)

0x1acf: PushEmpty(object, object)
0x1ad0: Push("Adding diary entry")
0x1ad1: @ Trace(Stack[-1])
0x1ad2: Pop(1)
0x1ad3: Push((int) 37)
0x1ad4: Push((int) 2)
0x1ad5: Push((int) 12119)
0x1ad6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1ad7: Pop(3)
0x1ad8: PushEmpty(bool, object, int)
0x1ad9: Stack[-2] = Stack[-4]
0x1ada: Stack[-1] = (int) -1
0x1adb: Call 0x1a6f

0x1adc: Pop(3)
0x1add: Return(); Pop(2)

0x1ade: Stack[-1] = 0
0x1adf: PushEmpty(object, object)
0x1ae0: Push("Adding diary entry")
0x1ae1: @ Trace(Stack[-1])
0x1ae2: Pop(1)
0x1ae3: Push((int) 52)
0x1ae4: Push((int) 1)
0x1ae5: Push((int) 12134)
0x1ae6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1ae7: Pop(3)
0x1ae8: PushEmpty(bool, object, int)
0x1ae9: Stack[-2] = Stack[-4]
0x1aea: Stack[-1] = (int) 10
0x1aeb: Call 0x1a6f

0x1aec: Pop(3)
0x1aed: Return(); Pop(2)

0x1aee: Stack[-1] = 0
0x1aef: PushEmpty(object, object)
0x1af0: Push("Adding diary entry")
0x1af1: @ Trace(Stack[-1])
0x1af2: Pop(1)
0x1af3: Push((int) 27)
0x1af4: Push((int) 2)
0x1af5: Push((int) 3367)
0x1af6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1af7: Pop(3)
0x1af8: PushEmpty(bool, object, int)
0x1af9: Stack[-2] = Stack[-4]
0x1afa: Stack[-1] = (int) -1
0x1afb: Call 0x1a6f

0x1afc: Pop(3)
0x1afd: Return(); Pop(2)

0x1afe: Stack[-1] = 0
0x1aff: PushEmpty(object, object)
0x1b00: Push("Adding diary entry")
0x1b01: @ Trace(Stack[-1])
0x1b02: Pop(1)
0x1b03: Push((int) 83)
0x1b04: Push((int) 2)
0x1b05: Push((int) 12165)
0x1b06: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1b07: Pop(3)
0x1b08: PushEmpty(bool, object, int)
0x1b09: Stack[-2] = Stack[-4]
0x1b0a: Stack[-1] = (int) 27
0x1b0b: Call 0x1a6f

0x1b0c: Pop(3)
0x1b0d: Return(); Pop(2)

0x1b0e: Stack[-1] = 0
0x1b0f: PushEmpty(object, object)
0x1b10: Push("Adding diary entry")
0x1b11: @ Trace(Stack[-1])
0x1b12: Pop(1)
0x1b13: Push((int) 85)
0x1b14: Push((int) 2)
0x1b15: Push((int) 12167)
0x1b16: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1b17: Pop(3)
0x1b18: PushEmpty(bool, object, int)
0x1b19: Stack[-2] = Stack[-4]
0x1b1a: Stack[-1] = (int) 27
0x1b1b: Call 0x1a6f

0x1b1c: Pop(3)
0x1b1d: Return(); Pop(2)

0x1b1e: Stack[-1] = 0
0x1b1f: PushEmpty(object, object)
0x1b20: Push("Adding diary entry")
0x1b21: @ Trace(Stack[-1])
0x1b22: Pop(1)
0x1b23: Push((int) 127)
0x1b24: Push((int) 2)
0x1b25: Push((int) 13772)
0x1b26: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1b27: Pop(3)
0x1b28: PushEmpty(bool, object, int)
0x1b29: Stack[-2] = Stack[-4]
0x1b2a: Stack[-1] = (int) -1
0x1b2b: Call 0x1a6f

0x1b2c: Pop(3)
0x1b2d: Return(); Pop(2)

0x1b2e: Stack[-1] = 0
0x1b2f: Push(GlobalVars[1])
0x1b30: Stack[-1] = (bool) 0
0x1b31: GlobalVars[1] = Stack[-1]; Pop(1)
0x1b32: Return(); Pop(0)

0x1b33: PushEmpty()
0x1b34: Push(GlobalVars[1])
0x1b35: Pop(1); Push((bool) Stack[-1] == 0)
0x1b36: IF (Stack[-1] == 0) GOTO 0x1b40; Pop(1)

0x1b37: PushEmpty(int, object)
0x1b38: Stack[-1] = Stack[-3]
0x1b39: Push(-2, 1); TaskCall(2)
0x1b3a: Call 0x31

0x1b3b: Pop(-2, 1); TaskReturn
0x1b3c: Pop(2)
0x1b3d: Push(GlobalVars[1])
0x1b3e: Stack[-1] = (bool) 1
0x1b3f: GlobalVars[1] = Stack[-1]; Pop(1)
0x1b40: PushEmpty(bool, int)
0x1b41: Stack[-1] = (int) 1
0x1b42: Call 0x165f

0x1b43: Pop(1)
0x1b44: IF (Stack[-1] == 0) GOTO 0x1b4c; Pop(1)

0x1b45: PushEmpty(int, object)
0x1b46: Stack[-1] = Stack[-3]
0x1b47: Push(-2, 1); TaskCall(6)
0x1b48: Call 0x3a5

0x1b49: Pop(-2, 1); TaskReturn
0x1b4a: Pop(2)
0x1b4b: Return(); Pop(0)

0x1b4c: PushEmpty(bool, int)
0x1b4d: Stack[-1] = (int) 2
0x1b4e: Call 0x165f

0x1b4f: Pop(1)
0x1b50: IF (Stack[-1] == 0) GOTO 0x1b58; Pop(1)

0x1b51: PushEmpty(int, object)
0x1b52: Stack[-1] = Stack[-3]
0x1b53: Push(-2, 1); TaskCall(8)
0x1b54: Call 0xbff

0x1b55: Pop(-2, 1); TaskReturn
0x1b56: Pop(2)
0x1b57: Return(); Pop(0)

0x1b58: PushEmpty(bool, int)
0x1b59: Stack[-1] = (int) 3
0x1b5a: Call 0x165f

0x1b5b: Pop(1)
0x1b5c: IF (Stack[-1] == 0) GOTO 0x1b64; Pop(1)

0x1b5d: PushEmpty(int, object)
0x1b5e: Stack[-1] = Stack[-3]
0x1b5f: Push(-2, 1); TaskCall(10)
0x1b60: Call 0xe31

0x1b61: Pop(-2, 1); TaskReturn
0x1b62: Pop(2)
0x1b63: Return(); Pop(0)

0x1b64: PushEmpty(bool, int)
0x1b65: Stack[-1] = (int) 4
0x1b66: Call 0x165f

0x1b67: Pop(1)
0x1b68: IF (Stack[-1] == 0) GOTO 0x1b70; Pop(1)

0x1b69: PushEmpty(int, object)
0x1b6a: Stack[-1] = Stack[-3]
0x1b6b: Push(-2, 1); TaskCall(12)
0x1b6c: Call 0x12b4

0x1b6d: Pop(-2, 1); TaskReturn
0x1b6e: Pop(2)
0x1b6f: Return(); Pop(0)

0x1b70: PushEmpty(bool, int)
0x1b71: Stack[-1] = (int) 6
0x1b72: Call 0x165f

0x1b73: Pop(1)
0x1b74: IF (Stack[-1] == 0) GOTO 0x1b7c; Pop(1)

0x1b75: PushEmpty(int, object)
0x1b76: Stack[-1] = Stack[-3]
0x1b77: Push(-2, 1); TaskCall(4)
0x1b78: Call 0x15e

0x1b79: Pop(-2, 1); TaskReturn
0x1b7a: Pop(2)
0x1b7b: Return(); Pop(0)

0x1b7c: PushEmpty(bool, int)
0x1b7d: Stack[-1] = (int) 8
0x1b7e: Call 0x165f

0x1b7f: Pop(1)
0x1b80: IF (Stack[-1] == 0) GOTO 0x1b88; Pop(1)

0x1b81: PushEmpty(int, object)
0x1b82: Stack[-1] = Stack[-3]
0x1b83: Push(-2, 1); TaskCall(14)
0x1b84: Call 0x13c1

0x1b85: Pop(-2, 1); TaskReturn
0x1b86: Pop(2)
0x1b87: Return(); Pop(0)

0x1b88: PushEmpty(bool)
0x1b89: Call 0x1665

0x1b8a: Pop(1)
0x1b8b: Return(); Pop(0)

