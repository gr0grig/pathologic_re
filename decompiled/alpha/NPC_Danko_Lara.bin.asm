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
	Grief
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
	ui/NPC_Lara.png
	ood1Lara1
	ood1Lara2
	ood1Lara3
	playsound
	giveitem
	ood2Lara1
	ood2Lara2
	ood2Lara3
	d2q03
	d2q03LaraGotoMoneyFoodSelf
	pt_map_lara
	AddMark
	d2q03LaraGotoJulia
	pt_map_julia
	d2q03LaraGotoMaria
	pt_map_maria
	d2q03LaraGotoMladVlad
	pt_map_mladvlad
	quest_d2_03
	d2q03LaraGotoSklad
	pt_map_d2q03_shouse
	d2q03LaraGotoSkladSelf
	d2q03BirdmaskGotoLara
	FindMark
	Remove
	d2q03BirdmaskGotoLaraSelf
	smoked_meat
	RemoveItemByType
	dried_fish
	bread
	completed
	birdmask
	d1q01KnowEpidemic
	pt_map_ospina
	ShowMap
	ood4Lara1
	d4q01
	d4q01LaraGotoMladVlad
	d4q01LaraGotoMladVladSelf
	ood4Lara2
	d4q01_subquest
	d4q01LaraGotoOspina
	d4q01LaraGotoOspinaSelf
	ood4Lara3
	d4q02LaraGivesMedcine
	d4q02AnnaGivesMedcine
	d4q02JuliaGivesMedcine
	d4q02
	d4q02BirdmaskNearHome
	pt_d4q02_birdmask
	quest_d4_02
	ood4Lara4
	d5q01
	quest_d5_01
	factory
	ood6Lara1
	lara blood is given
	d6q01_lara_blood
	ood6Lara2
	ood6Lara3
	ood6Lara4
	d6q01LaraVolonteer
	d6q01AlexandrGotoJulia
	d6q01AlexandrGotoKaterina
	d6q01AlexandrGotoLara
	d6q01AlexangrGotoJulLaraSelf
	d6q01BigVladGotoAnna
	d6q01BigVladGotoAnnaOspinaSelf
	d6q01BigVladGotoOspina
	d6q01KaterinaGotoLaska
	d6q01KaterinagotoLaskaSelf
	d6q01KillerIsKlara
	d6q01LaskaGotoAlbinos
	d6q01ViktorGotoAlexandr
	d6q01ViktorGotoAlxBigSelf
	d6q01ViktorGotoBigVlad
	quest_d6_01
	KnowLara
	KnowMaria
	ood1Lara4
	ood1Lara5
	ood1Lara6
	ood1Lara7
	ood1Lara8
	ood1Lara9
	morfin is given
	morfin
	etorfin is given
	etorfin
	novocaine is given
	novocaine
	KnowPredictions
	KnowWarehouses
	d1q01
	KnowMark
	d6q01
	microscope_d6q01_lara_blood
	KnowAlexandr
	KnowJulia
	KnowKaterina
	KnowMladVlad
	GetItemCountOfType
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
		EVENT_11 Op = 0xba Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x237 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x641 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xacf Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe67 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1212 Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x1a46

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0x132a

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
0x15: Call 0x136b

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
0x26: Call 0x1a4a

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x131e

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0x132f

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0x13e9

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0x13eb

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x19a5

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
0x67: Call 0x1367

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
0x75: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x76: PushEmpty(object, object)
0x77: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x78: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x79: Call 0x1663

0x7a: Pop(2)
0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral"
0x7d: Call 0xaa

0x7e: Pop(1)
0x7f: Push((int) 441)
0x80: @@ SetMessage(Stack[-1])
0x81: Pop(1)
0x82: @@ ClearReplies()
0x83: Pop(0)
0x84: Push((int) 8443)
0x85: Push((int) 9267)
0x86: Push((int) 9266)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: GOTO 0x8c

0x8a: Return(); Pop(0)

0x8b: GOTO 0x74

0x8c: PushEmpty(bool)
0x8d: Call 0x13ed

0x8e: Pop(0)
0x8f: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x90: @ lshWaitForAnimEnd()
0x91: Pop(0)
0x92: Push( Stack[3 + Tasks[-1].StackPointer] )
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: GOTO 0x9a

0x95: PushEmpty(string)
0x96: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x97: Call 0x136b

0x98: Pop(1)
0x99: GOTO 0x90

0x9a: GOTO 0xa9

0x9b: Push("all")
0x9c: Push("idle")
0x9d: @ PlayAnimation(Stack[-2], Stack[-1])
0x9e: Pop(2)
0x9f: @ WaitForAnimEnd()
0xa0: Pop(0)
0xa1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: GOTO 0xa9

0xa4: Push("all")
0xa5: Push("idle")
0xa6: @ PlayAnimation(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: GOTO 0x9f

0xa9: Return(); Pop(0)

0xaa: PushEmpty()
0xab: PushEmpty(bool)
0xac: Call 0x13ed

0xad: Pop(0)
0xae: Pop(1); Push((bool) Stack[-1] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: Return(); Pop(0)

0xb1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: Return(); Pop(0)

0xb4: PushEmpty(string)
0xb5: Stack[-1] = Stack[-2]
0xb6: Call 0x136b

0xb7: Pop(1)
0xb8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: Push((int) 1)
0xbc: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0xbd: PushEmpty()
0xbe: Call 0x137d

0xbf: Pop(0)
0xc0: Push((int) 510)
0xc1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call 0x1663

0xc7: Pop(2)
0xc8: PushEmpty(string)
0xc9: Stack[-1] = "Neutral"
0xca: Call 0xaa

0xcb: Pop(1)
0xcc: Push((int) 441)
0xcd: @@ SetMessage(Stack[-1])
0xce: Pop(1)
0xcf: @@ ClearReplies()
0xd0: Pop(0)
0xd1: Push((int) 8443)
0xd2: Push((int) 9267)
0xd3: Push((int) 9266)
0xd4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5: Pop(3)
0xd6: Return(); Pop(0)

0xd7: Push((int) 9267)
0xd8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd9: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xda: PushEmpty(string)
0xdb: Stack[-1] = "Neutral"
0xdc: Call 0xaa

0xdd: Pop(1)
0xde: Push((int) 8444)
0xdf: @@ SetMessage(Stack[-1])
0xe0: Pop(1)
0xe1: @@ ClearReplies()
0xe2: Pop(0)
0xe3: Push((int) 443)
0xe4: Push((int) 519)
0xe5: Push((int) 512)
0xe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7: Pop(3)
0xe8: Push((int) 442)
0xe9: Push((int) 513)
0xea: Push((int) 511)
0xeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec: Pop(3)
0xed: Return(); Pop(0)

0xee: Push((int) 513)
0xef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xf1: PushEmpty(string)
0xf2: Stack[-1] = "Neutral"
0xf3: Call 0xaa

0xf4: Pop(1)
0xf5: Push((int) 444)
0xf6: @@ SetMessage(Stack[-1])
0xf7: Pop(1)
0xf8: @@ ClearReplies()
0xf9: Pop(0)
0xfa: Push((int) 445)
0xfb: Push((int) 516)
0xfc: Push((int) 514)
0xfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe: Pop(3)
0xff: Push((int) 446)
0x100: Push((int) -1)
0x101: Push((int) 515)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Return(); Pop(0)

0x105: Push((int) 516)
0x106: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x108: PushEmpty(string)
0x109: Stack[-1] = "Neutral"
0x10a: Call 0xaa

0x10b: Pop(1)
0x10c: Push((int) 447)
0x10d: @@ SetMessage(Stack[-1])
0x10e: Pop(1)
0x10f: @@ ClearReplies()
0x110: Pop(0)
0x111: Push((int) 449)
0x112: Push((int) -1)
0x113: Push((int) 518)
0x114: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115: Pop(3)
0x116: Push((int) 448)
0x117: Push((int) -1)
0x118: Push((int) 517)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Return(); Pop(0)

0x11c: Push((int) 519)
0x11d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x11f: PushEmpty(string)
0x120: Stack[-1] = "Neutral"
0x121: Call 0xaa

0x122: Pop(1)
0x123: Push((int) 450)
0x124: @@ SetMessage(Stack[-1])
0x125: Pop(1)
0x126: @@ ClearReplies()
0x127: Pop(0)
0x128: Push((int) 451)
0x129: Push((int) 522)
0x12a: Push((int) 520)
0x12b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c: Pop(3)
0x12d: Push((int) 452)
0x12e: Push((int) -1)
0x12f: Push((int) 521)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Return(); Pop(0)

0x133: Push((int) 522)
0x134: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x136: PushEmpty(object, object)
0x137: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x138: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x139: Call 0x16c4

0x13a: Pop(2)
0x13b: PushEmpty(string)
0x13c: Stack[-1] = "Neutral"
0x13d: Call 0xaa

0x13e: Pop(1)
0x13f: Push((int) 453)
0x140: @@ SetMessage(Stack[-1])
0x141: Pop(1)
0x142: @@ ClearReplies()
0x143: Pop(0)
0x144: Push((int) 454)
0x145: Push((int) -1)
0x146: Push((int) 523)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: Push((int) 455)
0x14a: Push((int) -1)
0x14b: Push((int) 524)
0x14c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14d: Pop(3)
0x14e: Return(); Pop(0)

0x14f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x150: PushEmpty(bool)
0x151: Call 0x13ed

0x152: Pop(0)
0x153: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x154: @ lshStopAnimation()
0x155: Pop(0)
0x156: GOTO 0x159

0x157: @ StopAnimation()
0x158: Pop(0)
0x159: Return(); Pop(0)

0x15a: GOTO 0xbb

0x15b: Return(); Pop(0)

0x15c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x15d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x15e: PushEmpty(bool, object)
0x15f: Stack[-1] = Stack[-11]
0x160: Call 0x132f

0x161: Pop(1)
0x162: Pop(1); Push((bool) Stack[-1] == 0)
0x163: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x164: Stack[-10] = (int) -2
0x165: Return(); Pop(8)

0x166: @ CreateDialog(Stack[-4])
0x167: Pop(0)
0x168: PushEmpty(int)
0x169: Call 0x13e9

0x16a: Pop(0)
0x16b: @@ SetNPCName(Stack[-1])
0x16c: Pop(1)
0x16d: PushEmpty(string)
0x16e: Call 0x13eb

0x16f: Pop(0)
0x170: @@ SetPhoto(Stack[-1])
0x171: Pop(1)
0x172: PushEmpty(int)
0x173: Call 0x19a5

0x174: Pop(0)
0x175: @@ SetPlayerName(Stack[-1])
0x176: Pop(1)
0x177: Stack[-2] = (int) -1
0x178: @ IsOverrideActive(Stack[-3])
0x179: Pop(0)
0x17a: Push(Stack[-3])
0x17b: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17c: Stack[-10] = (int) -2
0x17d: Return(); Pop(8)

0x17e: @ DoDialog(Stack[-4])
0x17f: Pop(0)
0x180: PushEmpty(object, object)
0x181: Stack[-2] = Stack[-11]
0x182: Stack[-1] = Stack[-6]
0x183: Push(-2, 4); TaskCall(5)
0x184: Call 0x19b

0x185: Pop(-2, 4); TaskReturn
0x186: Pop(2)
0x187: @@ IsDialogEnd(Stack[-1])
0x188: Pop(0)
0x189: Pop(0); Push((bool) Stack[-1] == 0)
0x18a: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18b: @ sync()
0x18c: Pop(0)
0x18d: @@ IsDialogEnd(Stack[-1])
0x18e: Pop(0)
0x18f: GOTO 0x189

0x190: PushEmpty(object)
0x191: Stack[-1] = Stack[-10]
0x192: Call 0x1367

0x193: Pop(1)
0x194: @ StopDialog(Stack[-4])
0x195: Pop(0)
0x196: @@ GetReturnValue(Stack[-2])
0x197: Pop(0)
0x198: Stack[-10] = Stack[-2]
0x199: Return(); Pop(8)

0x19a: Stack[-4] = 0
0x19b: PushEmpty()
0x19c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x19d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x19e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x19f: Push((int) 1)
0x1a0: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1a1: PushEmpty(string)
0x1a2: Stack[-1] = "Neutral"
0x1a3: Call 0x227

0x1a4: Pop(1)
0x1a5: Push((int) 3662)
0x1a6: @@ SetMessage(Stack[-1])
0x1a7: Pop(1)
0x1a8: @@ ClearReplies()
0x1a9: Pop(0)
0x1aa: PushEmpty(bool)
0x1ab: Stack[-1] = (bool) 0
0x1ac: PushEmpty(bool, object)
0x1ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ae: Call 0x1819

0x1af: Pop(1)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b1: PushEmpty(bool, object)
0x1b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b3: Call 0x1825

0x1b4: Pop(1)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b6: Stack[-1] = (bool) 1
0x1b7: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1b8: Push((int) 12735)
0x1b9: Push((int) 11881)
0x1ba: Push((int) 13929)
0x1bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bc: Pop(3)
0x1bd: PushEmpty(bool)
0x1be: Stack[-1] = (bool) 0
0x1bf: PushEmpty(bool)
0x1c0: Stack[-1] = (bool) 0
0x1c1: PushEmpty(bool)
0x1c2: Stack[-1] = (bool) 0
0x1c3: PushEmpty(bool, object)
0x1c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c5: Call 0x1831

0x1c6: Pop(1)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c8: PushEmpty(bool, object)
0x1c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ca: Call 0x183d

0x1cb: Pop(1)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cd: Stack[-1] = (bool) 1
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1cf: PushEmpty(bool, object)
0x1d0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d1: Call 0x186d

0x1d2: Pop(1)
0x1d3: Pop(1); Push((bool) Stack[-1] == 0)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d5: Stack[-1] = (bool) 1
0x1d6: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1d7: PushEmpty(bool, object)
0x1d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d9: Call 0x1879

0x1da: Pop(1)
0x1db: Pop(1); Push((bool) Stack[-1] == 0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1dd: Stack[-1] = (bool) 1
0x1de: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1df: Push((int) 12736)
0x1e0: Push((int) 11904)
0x1e1: Push((int) 13930)
0x1e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e3: Pop(3)
0x1e4: PushEmpty(bool)
0x1e5: Stack[-1] = (bool) 0
0x1e6: PushEmpty(bool, object)
0x1e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e8: Call 0x1849

0x1e9: Pop(1)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1eb: PushEmpty(bool, object)
0x1ec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ed: Call 0x1769

0x1ee: Pop(1)
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1f0: Stack[-1] = (bool) 1
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f2: Push((int) 3664)
0x1f3: Push((int) 3970)
0x1f4: Push((int) 3969)
0x1f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f6: Pop(3)
0x1f7: PushEmpty(bool, object)
0x1f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f9: Call 0x1861

0x1fa: Pop(1)
0x1fb: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fc: Push((int) 3663)
0x1fd: Push((int) 3972)
0x1fe: Push((int) 3968)
0x1ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x200: Pop(3)
0x201: Push((int) 13019)
0x202: Push((int) -1)
0x203: Push((int) 14225)
0x204: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x205: Pop(3)
0x206: GOTO 0x209

0x207: Return(); Pop(0)

0x208: GOTO 0x19f

0x209: PushEmpty(bool)
0x20a: Call 0x13ed

0x20b: Pop(0)
0x20c: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x20d: @ lshWaitForAnimEnd()
0x20e: Pop(0)
0x20f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: GOTO 0x217

0x212: PushEmpty(string)
0x213: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x214: Call 0x136b

0x215: Pop(1)
0x216: GOTO 0x20d

0x217: GOTO 0x226

0x218: Push("all")
0x219: Push("idle")
0x21a: @ PlayAnimation(Stack[-2], Stack[-1])
0x21b: Pop(2)
0x21c: @ WaitForAnimEnd()
0x21d: Pop(0)
0x21e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x21f: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x220: GOTO 0x226

0x221: Push("all")
0x222: Push("idle")
0x223: @ PlayAnimation(Stack[-2], Stack[-1])
0x224: Pop(2)
0x225: GOTO 0x21c

0x226: Return(); Pop(0)

0x227: PushEmpty()
0x228: PushEmpty(bool)
0x229: Call 0x13ed

0x22a: Pop(0)
0x22b: Pop(1); Push((bool) Stack[-1] == 0)
0x22c: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22d: Return(); Pop(0)

0x22e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x22f: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x230: Return(); Pop(0)

0x231: PushEmpty(string)
0x232: Stack[-1] = Stack[-2]
0x233: Call 0x136b

0x234: Pop(1)
0x235: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x236: Return(); Pop(0)

0x237: PushEmpty()
0x238: Push((int) 1)
0x239: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x23a: PushEmpty()
0x23b: Call 0x137d

0x23c: Pop(0)
0x23d: Push((int) 13929)
0x23e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23f: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x240: PushEmpty(object, object)
0x241: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x242: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x243: Call 0x15a9

0x244: Pop(2)
0x245: Push((int) 11890)
0x246: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x247: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x248: PushEmpty(object, object)
0x249: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x24a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24b: Call 0x15af

0x24c: Pop(2)
0x24d: PushEmpty(object, object)
0x24e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x24f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x250: Call 0x15bd

0x251: Pop(2)
0x252: Push((int) 11891)
0x253: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x255: PushEmpty(object, object)
0x256: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x257: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x258: Call 0x15af

0x259: Pop(2)
0x25a: PushEmpty(object, object)
0x25b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x25c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25d: Call 0x15bd

0x25e: Pop(2)
0x25f: Push((int) 13930)
0x260: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x262: PushEmpty(object, object)
0x263: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x264: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x265: Call 0x15c3

0x266: Pop(2)
0x267: Push((int) 11915)
0x268: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26a: PushEmpty(object, object)
0x26b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x26c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26d: Call 0x15d5

0x26e: Pop(2)
0x26f: Push((int) 3969)
0x270: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x271: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x272: PushEmpty(object, object)
0x273: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x274: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x275: Call 0x15c9

0x276: Pop(2)
0x277: Push((int) 3968)
0x278: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27a: PushEmpty(object, object)
0x27b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27d: Call 0x15cf

0x27e: Pop(2)
0x27f: Push((int) 3967)
0x280: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x282: PushEmpty(string)
0x283: Stack[-1] = "Neutral"
0x284: Call 0x227

0x285: Pop(1)
0x286: Push((int) 3662)
0x287: @@ SetMessage(Stack[-1])
0x288: Pop(1)
0x289: @@ ClearReplies()
0x28a: Pop(0)
0x28b: PushEmpty(bool)
0x28c: Stack[-1] = (bool) 0
0x28d: PushEmpty(bool, object)
0x28e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28f: Call 0x1819

0x290: Pop(1)
0x291: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x292: PushEmpty(bool, object)
0x293: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x294: Call 0x1825

0x295: Pop(1)
0x296: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x297: Stack[-1] = (bool) 1
0x298: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x299: Push((int) 12735)
0x29a: Push((int) 11881)
0x29b: Push((int) 13929)
0x29c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29d: Pop(3)
0x29e: PushEmpty(bool)
0x29f: Stack[-1] = (bool) 0
0x2a0: PushEmpty(bool)
0x2a1: Stack[-1] = (bool) 0
0x2a2: PushEmpty(bool)
0x2a3: Stack[-1] = (bool) 0
0x2a4: PushEmpty(bool, object)
0x2a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a6: Call 0x1831

0x2a7: Pop(1)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2a9: PushEmpty(bool, object)
0x2aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ab: Call 0x183d

0x2ac: Pop(1)
0x2ad: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ae: Stack[-1] = (bool) 1
0x2af: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b0: PushEmpty(bool, object)
0x2b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b2: Call 0x186d

0x2b3: Pop(1)
0x2b4: Pop(1); Push((bool) Stack[-1] == 0)
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b6: Stack[-1] = (bool) 1
0x2b7: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2b8: PushEmpty(bool, object)
0x2b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ba: Call 0x1879

0x2bb: Pop(1)
0x2bc: Pop(1); Push((bool) Stack[-1] == 0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: Stack[-1] = (bool) 1
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c0: Push((int) 12736)
0x2c1: Push((int) 11904)
0x2c2: Push((int) 13930)
0x2c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c4: Pop(3)
0x2c5: PushEmpty(bool)
0x2c6: Stack[-1] = (bool) 0
0x2c7: PushEmpty(bool, object)
0x2c8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c9: Call 0x1849

0x2ca: Pop(1)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2cc: PushEmpty(bool, object)
0x2cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ce: Call 0x1769

0x2cf: Pop(1)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d1: Stack[-1] = (bool) 1
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d3: Push((int) 3664)
0x2d4: Push((int) 3970)
0x2d5: Push((int) 3969)
0x2d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d7: Pop(3)
0x2d8: PushEmpty(bool, object)
0x2d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2da: Call 0x1861

0x2db: Pop(1)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2dd: Push((int) 3663)
0x2de: Push((int) 3972)
0x2df: Push((int) 3968)
0x2e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e1: Pop(3)
0x2e2: Push((int) 13019)
0x2e3: Push((int) -1)
0x2e4: Push((int) 14225)
0x2e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e6: Pop(3)
0x2e7: Return(); Pop(0)

0x2e8: Push((int) 3972)
0x2e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ea: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2eb: PushEmpty(string)
0x2ec: Stack[-1] = "Neutral"
0x2ed: Call 0x227

0x2ee: Pop(1)
0x2ef: Push((int) 3667)
0x2f0: @@ SetMessage(Stack[-1])
0x2f1: Pop(1)
0x2f2: @@ ClearReplies()
0x2f3: Pop(0)
0x2f4: Push((int) 3668)
0x2f5: Push((int) 3975)
0x2f6: Push((int) 3973)
0x2f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f8: Pop(3)
0x2f9: Push((int) 3669)
0x2fa: Push((int) 3975)
0x2fb: Push((int) 3974)
0x2fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fd: Pop(3)
0x2fe: Push((int) 3672)
0x2ff: Push((int) 3991)
0x300: Push((int) 3978)
0x301: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x302: Pop(3)
0x303: Return(); Pop(0)

0x304: Push((int) 3991)
0x305: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x307: PushEmpty(string)
0x308: Stack[-1] = "Neutral"
0x309: Call 0x227

0x30a: Pop(1)
0x30b: Push((int) 3683)
0x30c: @@ SetMessage(Stack[-1])
0x30d: Pop(1)
0x30e: @@ ClearReplies()
0x30f: Pop(0)
0x310: Push((int) 3684)
0x311: Push((int) 3972)
0x312: Push((int) 3992)
0x313: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x314: Pop(3)
0x315: Return(); Pop(0)

0x316: Push((int) 3975)
0x317: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x318: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x319: PushEmpty(string)
0x31a: Stack[-1] = "Neutral"
0x31b: Call 0x227

0x31c: Pop(1)
0x31d: Push((int) 3670)
0x31e: @@ SetMessage(Stack[-1])
0x31f: Pop(1)
0x320: @@ ClearReplies()
0x321: Pop(0)
0x322: Push((int) 3671)
0x323: Push((int) 3981)
0x324: Push((int) 3976)
0x325: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x326: Pop(3)
0x327: Push((int) 3673)
0x328: Push((int) -1)
0x329: Push((int) 3980)
0x32a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32b: Pop(3)
0x32c: Return(); Pop(0)

0x32d: Push((int) 3981)
0x32e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32f: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x330: PushEmpty(string)
0x331: Stack[-1] = "Neutral"
0x332: Call 0x227

0x333: Pop(1)
0x334: Push((int) 3674)
0x335: @@ SetMessage(Stack[-1])
0x336: Pop(1)
0x337: @@ ClearReplies()
0x338: Pop(0)
0x339: Push((int) 3675)
0x33a: Push((int) 3984)
0x33b: Push((int) 3982)
0x33c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33d: Pop(3)
0x33e: Push((int) 3676)
0x33f: Push((int) 3984)
0x340: Push((int) 3983)
0x341: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x342: Pop(3)
0x343: Return(); Pop(0)

0x344: Push((int) 3984)
0x345: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x346: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x347: PushEmpty(string)
0x348: Stack[-1] = "Neutral"
0x349: Call 0x227

0x34a: Pop(1)
0x34b: Push((int) 3677)
0x34c: @@ SetMessage(Stack[-1])
0x34d: Pop(1)
0x34e: @@ ClearReplies()
0x34f: Pop(0)
0x350: Push((int) 3678)
0x351: Push((int) 3988)
0x352: Push((int) 3986)
0x353: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x354: Pop(3)
0x355: Push((int) 3679)
0x356: Push((int) 3988)
0x357: Push((int) 3987)
0x358: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x359: Pop(3)
0x35a: Return(); Pop(0)

0x35b: Push((int) 3988)
0x35c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35d: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x35e: PushEmpty(string)
0x35f: Stack[-1] = "Neutral"
0x360: Call 0x227

0x361: Pop(1)
0x362: Push((int) 3680)
0x363: @@ SetMessage(Stack[-1])
0x364: Pop(1)
0x365: @@ ClearReplies()
0x366: Pop(0)
0x367: Push((int) 3681)
0x368: Push((int) -1)
0x369: Push((int) 3989)
0x36a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36b: Pop(3)
0x36c: Push((int) 3682)
0x36d: Push((int) -1)
0x36e: Push((int) 3990)
0x36f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x370: Pop(3)
0x371: Push((int) 3685)
0x372: Push((int) -1)
0x373: Push((int) 3995)
0x374: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x375: Pop(3)
0x376: Return(); Pop(0)

0x377: Push((int) 3970)
0x378: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x37a: PushEmpty(string)
0x37b: Stack[-1] = "Neutral"
0x37c: Call 0x227

0x37d: Pop(1)
0x37e: Push((int) 3665)
0x37f: @@ SetMessage(Stack[-1])
0x380: Pop(1)
0x381: @@ ClearReplies()
0x382: Pop(0)
0x383: Push((int) 3666)
0x384: Push((int) -1)
0x385: Push((int) 3971)
0x386: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x387: Pop(3)
0x388: Return(); Pop(0)

0x389: Push((int) 11904)
0x38a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x38c: PushEmpty(string)
0x38d: Stack[-1] = "Neutral"
0x38e: Call 0x227

0x38f: Pop(1)
0x390: Push((int) 10773)
0x391: @@ SetMessage(Stack[-1])
0x392: Pop(1)
0x393: @@ ClearReplies()
0x394: Pop(0)
0x395: Push((int) 10774)
0x396: Push((int) 11906)
0x397: Push((int) 11905)
0x398: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x399: Pop(3)
0x39a: Push((int) 10789)
0x39b: Push((int) 11906)
0x39c: Push((int) 11923)
0x39d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39e: Pop(3)
0x39f: Push((int) 10790)
0x3a0: Push((int) 11906)
0x3a1: Push((int) 11925)
0x3a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a3: Pop(3)
0x3a4: Return(); Pop(0)

0x3a5: Push((int) 11906)
0x3a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a7: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3a8: PushEmpty(string)
0x3a9: Stack[-1] = "Neutral"
0x3aa: Call 0x227

0x3ab: Pop(1)
0x3ac: Push((int) 10775)
0x3ad: @@ SetMessage(Stack[-1])
0x3ae: Pop(1)
0x3af: @@ ClearReplies()
0x3b0: Pop(0)
0x3b1: Push((int) 10776)
0x3b2: Push((int) 11908)
0x3b3: Push((int) 11907)
0x3b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b5: Pop(3)
0x3b6: Push((int) 10788)
0x3b7: Push((int) 11908)
0x3b8: Push((int) 11921)
0x3b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ba: Pop(3)
0x3bb: Return(); Pop(0)

0x3bc: Push((int) 11908)
0x3bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3be: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3bf: PushEmpty(string)
0x3c0: Stack[-1] = "Neutral"
0x3c1: Call 0x227

0x3c2: Pop(1)
0x3c3: Push((int) 10777)
0x3c4: @@ SetMessage(Stack[-1])
0x3c5: Pop(1)
0x3c6: @@ ClearReplies()
0x3c7: Pop(0)
0x3c8: Push((int) 10778)
0x3c9: Push((int) 11910)
0x3ca: Push((int) 11909)
0x3cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cc: Pop(3)
0x3cd: Push((int) 10787)
0x3ce: Push((int) 11910)
0x3cf: Push((int) 11920)
0x3d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d1: Pop(3)
0x3d2: Return(); Pop(0)

0x3d3: Push((int) 11910)
0x3d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3d6: PushEmpty(string)
0x3d7: Stack[-1] = "Neutral"
0x3d8: Call 0x227

0x3d9: Pop(1)
0x3da: Push((int) 10779)
0x3db: @@ SetMessage(Stack[-1])
0x3dc: Pop(1)
0x3dd: @@ ClearReplies()
0x3de: Pop(0)
0x3df: Push((int) 10780)
0x3e0: Push((int) 11912)
0x3e1: Push((int) 11911)
0x3e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e3: Pop(3)
0x3e4: Push((int) 10785)
0x3e5: Push((int) 11912)
0x3e6: Push((int) 11916)
0x3e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e8: Pop(3)
0x3e9: Push((int) 10786)
0x3ea: Push((int) 11912)
0x3eb: Push((int) 11918)
0x3ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ed: Pop(3)
0x3ee: Return(); Pop(0)

0x3ef: Push((int) 11912)
0x3f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x3f2: PushEmpty(string)
0x3f3: Stack[-1] = "Neutral"
0x3f4: Call 0x227

0x3f5: Pop(1)
0x3f6: Push((int) 10781)
0x3f7: @@ SetMessage(Stack[-1])
0x3f8: Pop(1)
0x3f9: @@ ClearReplies()
0x3fa: Pop(0)
0x3fb: Push((int) 10782)
0x3fc: Push((int) -1)
0x3fd: Push((int) 11913)
0x3fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ff: Pop(3)
0x400: Push((int) 10783)
0x401: Push((int) -1)
0x402: Push((int) 11914)
0x403: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x404: Pop(3)
0x405: Push((int) 10784)
0x406: Push((int) -1)
0x407: Push((int) 11915)
0x408: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x409: Pop(3)
0x40a: Return(); Pop(0)

0x40b: Push((int) 11881)
0x40c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40d: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x40e: PushEmpty(string)
0x40f: Stack[-1] = "Neutral"
0x410: Call 0x227

0x411: Pop(1)
0x412: Push((int) 10753)
0x413: @@ SetMessage(Stack[-1])
0x414: Pop(1)
0x415: @@ ClearReplies()
0x416: Pop(0)
0x417: Push((int) 10754)
0x418: Push((int) 11883)
0x419: Push((int) 11882)
0x41a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41b: Pop(3)
0x41c: Push((int) 10767)
0x41d: Push((int) 11897)
0x41e: Push((int) 11896)
0x41f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x420: Pop(3)
0x421: Push((int) 10769)
0x422: Push((int) 11899)
0x423: Push((int) 11898)
0x424: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x425: Pop(3)
0x426: Return(); Pop(0)

0x427: Push((int) 11899)
0x428: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x42a: PushEmpty(string)
0x42b: Stack[-1] = "Neutral"
0x42c: Call 0x227

0x42d: Pop(1)
0x42e: Push((int) 10770)
0x42f: @@ SetMessage(Stack[-1])
0x430: Pop(1)
0x431: @@ ClearReplies()
0x432: Pop(0)
0x433: Push((int) 10771)
0x434: Push((int) 11885)
0x435: Push((int) 11900)
0x436: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x437: Pop(3)
0x438: Push((int) 10772)
0x439: Push((int) 11897)
0x43a: Push((int) 11902)
0x43b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43c: Pop(3)
0x43d: Return(); Pop(0)

0x43e: Push((int) 11897)
0x43f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x441: PushEmpty(string)
0x442: Stack[-1] = "Neutral"
0x443: Call 0x227

0x444: Pop(1)
0x445: Push((int) 10768)
0x446: @@ SetMessage(Stack[-1])
0x447: Pop(1)
0x448: @@ ClearReplies()
0x449: Pop(0)
0x44a: Return(); Pop(0)

0x44b: Push((int) 11883)
0x44c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x44e: PushEmpty(string)
0x44f: Stack[-1] = "Neutral"
0x450: Call 0x227

0x451: Pop(1)
0x452: Push((int) 10755)
0x453: @@ SetMessage(Stack[-1])
0x454: Pop(1)
0x455: @@ ClearReplies()
0x456: Pop(0)
0x457: Push((int) 10756)
0x458: Push((int) 11885)
0x459: Push((int) 11884)
0x45a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45b: Pop(3)
0x45c: Push((int) 10766)
0x45d: Push((int) -1)
0x45e: Push((int) 11895)
0x45f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x460: Pop(3)
0x461: Return(); Pop(0)

0x462: Push((int) 11885)
0x463: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x464: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x465: PushEmpty(string)
0x466: Stack[-1] = "Neutral"
0x467: Call 0x227

0x468: Pop(1)
0x469: Push((int) 10757)
0x46a: @@ SetMessage(Stack[-1])
0x46b: Pop(1)
0x46c: @@ ClearReplies()
0x46d: Pop(0)
0x46e: Push((int) 10758)
0x46f: Push((int) 11887)
0x470: Push((int) 11886)
0x471: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x472: Pop(3)
0x473: Push((int) 10765)
0x474: Push((int) -1)
0x475: Push((int) 11894)
0x476: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x477: Pop(3)
0x478: Return(); Pop(0)

0x479: Push((int) 11887)
0x47a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47b: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x47c: PushEmpty(string)
0x47d: Stack[-1] = "Grief"
0x47e: Call 0x227

0x47f: Pop(1)
0x480: Push((int) 10759)
0x481: @@ SetMessage(Stack[-1])
0x482: Pop(1)
0x483: @@ ClearReplies()
0x484: Pop(0)
0x485: Push((int) 10760)
0x486: Push((int) 11889)
0x487: Push((int) 11888)
0x488: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x489: Pop(3)
0x48a: Push((int) 10764)
0x48b: Push((int) 11889)
0x48c: Push((int) 11892)
0x48d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48e: Pop(3)
0x48f: Return(); Pop(0)

0x490: Push((int) 11889)
0x491: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x492: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x493: PushEmpty(string)
0x494: Stack[-1] = "Neutral"
0x495: Call 0x227

0x496: Pop(1)
0x497: Push((int) 10761)
0x498: @@ SetMessage(Stack[-1])
0x499: Pop(1)
0x49a: @@ ClearReplies()
0x49b: Pop(0)
0x49c: Push((int) 10762)
0x49d: Push((int) -1)
0x49e: Push((int) 11890)
0x49f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a0: Pop(3)
0x4a1: Push((int) 10763)
0x4a2: Push((int) -1)
0x4a3: Push((int) 11891)
0x4a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a5: Pop(3)
0x4a6: Return(); Pop(0)

0x4a7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4a8: PushEmpty(bool)
0x4a9: Call 0x13ed

0x4aa: Pop(0)
0x4ab: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ac: @ lshStopAnimation()
0x4ad: Pop(0)
0x4ae: GOTO 0x4b1

0x4af: @ StopAnimation()
0x4b0: Pop(0)
0x4b1: Return(); Pop(0)

0x4b2: GOTO 0x238

0x4b3: Return(); Pop(0)

0x4b4: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4b5: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4b6: PushEmpty(bool, object)
0x4b7: Stack[-1] = Stack[-11]
0x4b8: Call 0x132f

0x4b9: Pop(1)
0x4ba: Pop(1); Push((bool) Stack[-1] == 0)
0x4bb: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4bc: Stack[-10] = (int) -2
0x4bd: Return(); Pop(8)

0x4be: @ CreateDialog(Stack[-4])
0x4bf: Pop(0)
0x4c0: PushEmpty(int)
0x4c1: Call 0x13e9

0x4c2: Pop(0)
0x4c3: @@ SetNPCName(Stack[-1])
0x4c4: Pop(1)
0x4c5: PushEmpty(string)
0x4c6: Call 0x13eb

0x4c7: Pop(0)
0x4c8: @@ SetPhoto(Stack[-1])
0x4c9: Pop(1)
0x4ca: PushEmpty(int)
0x4cb: Call 0x19a5

0x4cc: Pop(0)
0x4cd: @@ SetPlayerName(Stack[-1])
0x4ce: Pop(1)
0x4cf: Stack[-2] = (int) -1
0x4d0: @ IsOverrideActive(Stack[-3])
0x4d1: Pop(0)
0x4d2: Push(Stack[-3])
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d4: Stack[-10] = (int) -2
0x4d5: Return(); Pop(8)

0x4d6: @ DoDialog(Stack[-4])
0x4d7: Pop(0)
0x4d8: PushEmpty(object, object)
0x4d9: Stack[-2] = Stack[-11]
0x4da: Stack[-1] = Stack[-6]
0x4db: Push(-2, 4); TaskCall(7)
0x4dc: Call 0x4f3

0x4dd: Pop(-2, 4); TaskReturn
0x4de: Pop(2)
0x4df: @@ IsDialogEnd(Stack[-1])
0x4e0: Pop(0)
0x4e1: Pop(0); Push((bool) Stack[-1] == 0)
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e3: @ sync()
0x4e4: Pop(0)
0x4e5: @@ IsDialogEnd(Stack[-1])
0x4e6: Pop(0)
0x4e7: GOTO 0x4e1

0x4e8: PushEmpty(object)
0x4e9: Stack[-1] = Stack[-10]
0x4ea: Call 0x1367

0x4eb: Pop(1)
0x4ec: @ StopDialog(Stack[-4])
0x4ed: Pop(0)
0x4ee: @@ GetReturnValue(Stack[-2])
0x4ef: Pop(0)
0x4f0: Stack[-10] = Stack[-2]
0x4f1: Return(); Pop(8)

0x4f2: Stack[-4] = 0
0x4f3: PushEmpty()
0x4f4: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4f5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4f6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4f7: Push((int) 1)
0x4f8: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x4f9: PushEmpty(bool)
0x4fa: Stack[-1] = (bool) 0
0x4fb: PushEmpty(bool)
0x4fc: Stack[-1] = (bool) 0
0x4fd: PushEmpty(bool)
0x4fe: Stack[-1] = (bool) 0
0x4ff: PushEmpty(bool)
0x500: Stack[-1] = (bool) 0
0x501: PushEmpty(bool, object)
0x502: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x503: Call 0x16d6

0x504: Pop(1)
0x505: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x506: PushEmpty(bool, object)
0x507: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x508: Call 0x1706

0x509: Pop(1)
0x50a: Pop(1); Push((bool) Stack[-1] == 0)
0x50b: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50c: Stack[-1] = (bool) 1
0x50d: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x50e: PushEmpty(bool, object)
0x50f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x510: Call 0x16fa

0x511: Pop(1)
0x512: Pop(1); Push((bool) Stack[-1] == 0)
0x513: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x514: Stack[-1] = (bool) 1
0x515: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x516: PushEmpty(bool, object)
0x517: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x518: Call 0x1775

0x519: Pop(1)
0x51a: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x51b: Stack[-1] = (bool) 1
0x51c: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x51d: PushEmpty(bool, object)
0x51e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x51f: Call 0x16e2

0x520: Pop(1)
0x521: Pop(1); Push((bool) Stack[-1] == 0)
0x522: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x523: Stack[-1] = (bool) 1
0x524: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x525: PushEmpty(string)
0x526: Stack[-1] = "Neutral"
0x527: Call 0x631

0x528: Pop(1)
0x529: Push((int) 5423)
0x52a: @@ SetMessage(Stack[-1])
0x52b: Pop(1)
0x52c: @@ ClearReplies()
0x52d: Pop(0)
0x52e: Push((int) 5447)
0x52f: Push((int) 6886)
0x530: Push((int) 6001)
0x531: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x532: Pop(3)
0x533: Push((int) 6231)
0x534: Push((int) 6893)
0x535: Push((int) 6892)
0x536: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x537: Pop(3)
0x538: GOTO 0x613

0x539: PushEmpty(bool)
0x53a: Stack[-1] = (bool) 0
0x53b: PushEmpty(bool)
0x53c: Stack[-1] = (bool) 0
0x53d: PushEmpty(bool)
0x53e: Stack[-1] = (bool) 0
0x53f: PushEmpty(bool, object)
0x540: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x541: Call 0x16e2

0x542: Pop(1)
0x543: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x544: PushEmpty(bool, object)
0x545: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x546: Call 0x1706

0x547: Pop(1)
0x548: Pop(1); Push((bool) Stack[-1] == 0)
0x549: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x54a: Stack[-1] = (bool) 1
0x54b: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x54c: PushEmpty(bool, object)
0x54d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54e: Call 0x16fa

0x54f: Pop(1)
0x550: Pop(1); Push((bool) Stack[-1] == 0)
0x551: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x552: Stack[-1] = (bool) 1
0x553: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x554: PushEmpty(bool, object)
0x555: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x556: Call 0x1775

0x557: Pop(1)
0x558: Pop(1); Push((bool) Stack[-1] == 0)
0x559: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x55a: Stack[-1] = (bool) 1
0x55b: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x55c: PushEmpty(string)
0x55d: Stack[-1] = "Neutral"
0x55e: Call 0x631

0x55f: Pop(1)
0x560: Push((int) 8666)
0x561: @@ SetMessage(Stack[-1])
0x562: Pop(1)
0x563: @@ ClearReplies()
0x564: Pop(0)
0x565: Push((int) 8667)
0x566: Push((int) 9493)
0x567: Push((int) 9492)
0x568: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x569: Pop(3)
0x56a: GOTO 0x613

0x56b: PushEmpty(string)
0x56c: Stack[-1] = "Neutral"
0x56d: Call 0x631

0x56e: Pop(1)
0x56f: Push((int) 8034)
0x570: @@ SetMessage(Stack[-1])
0x571: Pop(1)
0x572: @@ ClearReplies()
0x573: Pop(0)
0x574: PushEmpty(bool)
0x575: Stack[-1] = (bool) 1
0x576: PushEmpty(bool)
0x577: Stack[-1] = (bool) 0
0x578: PushEmpty(bool, object)
0x579: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x57a: Call 0x1781

0x57b: Pop(1)
0x57c: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x57d: PushEmpty(bool, object)
0x57e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x57f: Call 0x16ee

0x580: Pop(1)
0x581: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x582: Stack[-1] = (bool) 1
0x583: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x584: PushEmpty(bool)
0x585: Stack[-1] = (bool) 0
0x586: PushEmpty(bool, object)
0x587: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x588: Call 0x17bb

0x589: Pop(1)
0x58a: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x58b: PushEmpty(bool, object)
0x58c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x58d: Call 0x16ee

0x58e: Pop(1)
0x58f: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x590: Stack[-1] = (bool) 1
0x591: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x592: Stack[-1] = (bool) 0
0x593: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x594: Push((int) 8036)
0x595: Push((int) 5976)
0x596: Push((int) 8859)
0x597: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x598: Pop(3)
0x599: PushEmpty(bool)
0x59a: Stack[-1] = (bool) 0
0x59b: PushEmpty(bool, object)
0x59c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59d: Call 0x18f1

0x59e: Pop(1)
0x59f: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a0: PushEmpty(bool, object)
0x5a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a2: Call 0x189d

0x5a3: Pop(1)
0x5a4: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a5: Stack[-1] = (bool) 1
0x5a6: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5a7: Push((int) 8039)
0x5a8: Push((int) 5991)
0x5a9: Push((int) 8862)
0x5aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ab: Pop(3)
0x5ac: PushEmpty(bool)
0x5ad: Stack[-1] = (bool) 0
0x5ae: PushEmpty(bool, object)
0x5af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b0: Call 0x1885

0x5b1: Pop(1)
0x5b2: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b3: PushEmpty(bool, object)
0x5b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b5: Call 0x18a9

0x5b6: Pop(1)
0x5b7: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b8: Stack[-1] = (bool) 1
0x5b9: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5ba: Push((int) 8042)
0x5bb: Push((int) 8884)
0x5bc: Push((int) 8865)
0x5bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5be: Pop(3)
0x5bf: PushEmpty(bool)
0x5c0: Stack[-1] = (bool) 0
0x5c1: PushEmpty(bool, object)
0x5c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5c3: Call 0x1891

0x5c4: Pop(1)
0x5c5: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5c6: PushEmpty(bool, object)
0x5c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5c8: Call 0x18b5

0x5c9: Pop(1)
0x5ca: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5cb: Stack[-1] = (bool) 1
0x5cc: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5cd: Push((int) 8046)
0x5ce: Push((int) 8885)
0x5cf: Push((int) 8869)
0x5d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d1: Pop(3)
0x5d2: PushEmpty(bool)
0x5d3: Stack[-1] = (bool) 0
0x5d4: PushEmpty(bool, object)
0x5d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d6: Call 0x1855

0x5d7: Pop(1)
0x5d8: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5d9: PushEmpty(bool, object)
0x5da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5db: Call 0x18c1

0x5dc: Pop(1)
0x5dd: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5de: Stack[-1] = (bool) 1
0x5df: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5e0: Push((int) 8047)
0x5e1: Push((int) 8886)
0x5e2: Push((int) 8870)
0x5e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e4: Pop(3)
0x5e5: PushEmpty(bool)
0x5e6: Stack[-1] = (bool) 0
0x5e7: PushEmpty(bool, object)
0x5e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5e9: Call 0x18e5

0x5ea: Pop(1)
0x5eb: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5ec: PushEmpty(bool, object)
0x5ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5ee: Call 0x18cd

0x5ef: Pop(1)
0x5f0: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5f1: Stack[-1] = (bool) 1
0x5f2: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5f3: Push((int) 8051)
0x5f4: Push((int) 8887)
0x5f5: Push((int) 8874)
0x5f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f7: Pop(3)
0x5f8: PushEmpty(bool)
0x5f9: Stack[-1] = (bool) 0
0x5fa: PushEmpty(bool, object)
0x5fb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5fc: Call 0x180d

0x5fd: Pop(1)
0x5fe: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x5ff: PushEmpty(bool, object)
0x600: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x601: Call 0x18d9

0x602: Pop(1)
0x603: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x604: Stack[-1] = (bool) 1
0x605: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x606: Push((int) 8052)
0x607: Push((int) 8888)
0x608: Push((int) 8875)
0x609: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60a: Pop(3)
0x60b: Push((int) 8709)
0x60c: Push((int) -1)
0x60d: Push((int) 9546)
0x60e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60f: Pop(3)
0x610: GOTO 0x613

0x611: Return(); Pop(0)

0x612: GOTO 0x4f7

0x613: PushEmpty(bool)
0x614: Call 0x13ed

0x615: Pop(0)
0x616: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x617: @ lshWaitForAnimEnd()
0x618: Pop(0)
0x619: Push( Stack[3 + Tasks[-1].StackPointer] )
0x61a: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x61b: GOTO 0x621

0x61c: PushEmpty(string)
0x61d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x61e: Call 0x136b

0x61f: Pop(1)
0x620: GOTO 0x617

0x621: GOTO 0x630

0x622: Push("all")
0x623: Push("idle")
0x624: @ PlayAnimation(Stack[-2], Stack[-1])
0x625: Pop(2)
0x626: @ WaitForAnimEnd()
0x627: Pop(0)
0x628: Push( Stack[3 + Tasks[-1].StackPointer] )
0x629: IF (Stack[-1] == 0) GOTO 0x62b; Pop(1)

0x62a: GOTO 0x630

0x62b: Push("all")
0x62c: Push("idle")
0x62d: @ PlayAnimation(Stack[-2], Stack[-1])
0x62e: Pop(2)
0x62f: GOTO 0x626

0x630: Return(); Pop(0)

0x631: PushEmpty()
0x632: PushEmpty(bool)
0x633: Call 0x13ed

0x634: Pop(0)
0x635: Pop(1); Push((bool) Stack[-1] == 0)
0x636: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x637: Return(); Pop(0)

0x638: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x639: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x63a: Return(); Pop(0)

0x63b: PushEmpty(string)
0x63c: Stack[-1] = Stack[-2]
0x63d: Call 0x136b

0x63e: Pop(1)
0x63f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x640: Return(); Pop(0)

0x641: PushEmpty()
0x642: Push((int) 1)
0x643: IF (Stack[-1] == 0) GOTO 0x9b4; Pop(1)

0x644: PushEmpty()
0x645: Call 0x137d

0x646: Pop(0)
0x647: Push((int) 6898)
0x648: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x649: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x64a: PushEmpty(object, object)
0x64b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x64c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x64d: Call 0x13ef

0x64e: Pop(2)
0x64f: Push((int) 6899)
0x650: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x651: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x652: PushEmpty(object, object)
0x653: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x654: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x655: Call 0x13ef

0x656: Pop(2)
0x657: Push((int) 9508)
0x658: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x659: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x65a: PushEmpty(object, object)
0x65b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x65c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x65d: Call 0x14d3

0x65e: Pop(2)
0x65f: PushEmpty(object, object)
0x660: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x661: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x662: Call 0x13f5

0x663: Pop(2)
0x664: Push((int) 8859)
0x665: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x666: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x667: PushEmpty(object, object)
0x668: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x669: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x66a: Call 0x13fb

0x66b: Pop(2)
0x66c: Push((int) 8862)
0x66d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x66e: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x66f: PushEmpty(object, object)
0x670: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x671: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x672: Call 0x166f

0x673: Pop(2)
0x674: Push((int) 8865)
0x675: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x676: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x677: PushEmpty(object, object)
0x678: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x679: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x67a: Call 0x1675

0x67b: Pop(2)
0x67c: Push((int) 8869)
0x67d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x67e: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x67f: PushEmpty(object, object)
0x680: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x681: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x682: Call 0x167b

0x683: Pop(2)
0x684: Push((int) 8870)
0x685: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x686: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x687: PushEmpty(object, object)
0x688: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x689: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x68a: Call 0x1681

0x68b: Pop(2)
0x68c: Push((int) 8874)
0x68d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x68e: IF (Stack[-1] == 0) GOTO 0x694; Pop(1)

0x68f: PushEmpty(object, object)
0x690: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x691: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x692: Call 0x1687

0x693: Pop(2)
0x694: Push((int) 8875)
0x695: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x696: IF (Stack[-1] == 0) GOTO 0x69c; Pop(1)

0x697: PushEmpty(object, object)
0x698: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x699: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69a: Call 0x168d

0x69b: Pop(2)
0x69c: Push((int) 5972)
0x69d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69e: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x69f: PushEmpty(bool)
0x6a0: Stack[-1] = (bool) 0
0x6a1: PushEmpty(bool)
0x6a2: Stack[-1] = (bool) 0
0x6a3: PushEmpty(bool)
0x6a4: Stack[-1] = (bool) 0
0x6a5: PushEmpty(bool)
0x6a6: Stack[-1] = (bool) 0
0x6a7: PushEmpty(bool, object)
0x6a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a9: Call 0x16d6

0x6aa: Pop(1)
0x6ab: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6ac: PushEmpty(bool, object)
0x6ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6ae: Call 0x1706

0x6af: Pop(1)
0x6b0: Pop(1); Push((bool) Stack[-1] == 0)
0x6b1: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6b2: Stack[-1] = (bool) 1
0x6b3: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6b4: PushEmpty(bool, object)
0x6b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b6: Call 0x16fa

0x6b7: Pop(1)
0x6b8: Pop(1); Push((bool) Stack[-1] == 0)
0x6b9: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6ba: Stack[-1] = (bool) 1
0x6bb: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6bc: PushEmpty(bool, object)
0x6bd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6be: Call 0x1775

0x6bf: Pop(1)
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6c1: Stack[-1] = (bool) 1
0x6c2: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6c3: PushEmpty(bool, object)
0x6c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c5: Call 0x16e2

0x6c6: Pop(1)
0x6c7: Pop(1); Push((bool) Stack[-1] == 0)
0x6c8: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6c9: Stack[-1] = (bool) 1
0x6ca: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6cb: PushEmpty(string)
0x6cc: Stack[-1] = "Neutral"
0x6cd: Call 0x631

0x6ce: Pop(1)
0x6cf: Push((int) 5423)
0x6d0: @@ SetMessage(Stack[-1])
0x6d1: Pop(1)
0x6d2: @@ ClearReplies()
0x6d3: Pop(0)
0x6d4: Push((int) 5447)
0x6d5: Push((int) 6886)
0x6d6: Push((int) 6001)
0x6d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d8: Pop(3)
0x6d9: Push((int) 6231)
0x6da: Push((int) 6893)
0x6db: Push((int) 6892)
0x6dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6dd: Pop(3)
0x6de: Return(); Pop(0)

0x6df: PushEmpty(bool)
0x6e0: Stack[-1] = (bool) 0
0x6e1: PushEmpty(bool)
0x6e2: Stack[-1] = (bool) 0
0x6e3: PushEmpty(bool)
0x6e4: Stack[-1] = (bool) 0
0x6e5: PushEmpty(bool, object)
0x6e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e7: Call 0x16e2

0x6e8: Pop(1)
0x6e9: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6ea: PushEmpty(bool, object)
0x6eb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6ec: Call 0x1706

0x6ed: Pop(1)
0x6ee: Pop(1); Push((bool) Stack[-1] == 0)
0x6ef: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6f0: Stack[-1] = (bool) 1
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6f2: PushEmpty(bool, object)
0x6f3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f4: Call 0x16fa

0x6f5: Pop(1)
0x6f6: Pop(1); Push((bool) Stack[-1] == 0)
0x6f7: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6f8: Stack[-1] = (bool) 1
0x6f9: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x6fa: PushEmpty(bool, object)
0x6fb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6fc: Call 0x1775

0x6fd: Pop(1)
0x6fe: Pop(1); Push((bool) Stack[-1] == 0)
0x6ff: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x700: Stack[-1] = (bool) 1
0x701: IF (Stack[-1] == 0) GOTO 0x711; Pop(1)

0x702: PushEmpty(string)
0x703: Stack[-1] = "Neutral"
0x704: Call 0x631

0x705: Pop(1)
0x706: Push((int) 8666)
0x707: @@ SetMessage(Stack[-1])
0x708: Pop(1)
0x709: @@ ClearReplies()
0x70a: Pop(0)
0x70b: Push((int) 8667)
0x70c: Push((int) 9493)
0x70d: Push((int) 9492)
0x70e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70f: Pop(3)
0x710: Return(); Pop(0)

0x711: PushEmpty(string)
0x712: Stack[-1] = "Neutral"
0x713: Call 0x631

0x714: Pop(1)
0x715: Push((int) 8034)
0x716: @@ SetMessage(Stack[-1])
0x717: Pop(1)
0x718: @@ ClearReplies()
0x719: Pop(0)
0x71a: PushEmpty(bool)
0x71b: Stack[-1] = (bool) 1
0x71c: PushEmpty(bool)
0x71d: Stack[-1] = (bool) 0
0x71e: PushEmpty(bool, object)
0x71f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x720: Call 0x1781

0x721: Pop(1)
0x722: IF (Stack[-1] == 0) GOTO 0x729; Pop(1)

0x723: PushEmpty(bool, object)
0x724: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x725: Call 0x16ee

0x726: Pop(1)
0x727: IF (Stack[-1] == 0) GOTO 0x729; Pop(1)

0x728: Stack[-1] = (bool) 1
0x729: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x72a: PushEmpty(bool)
0x72b: Stack[-1] = (bool) 0
0x72c: PushEmpty(bool, object)
0x72d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72e: Call 0x17bb

0x72f: Pop(1)
0x730: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x731: PushEmpty(bool, object)
0x732: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x733: Call 0x16ee

0x734: Pop(1)
0x735: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x736: Stack[-1] = (bool) 1
0x737: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x738: Stack[-1] = (bool) 0
0x739: IF (Stack[-1] == 0) GOTO 0x73f; Pop(1)

0x73a: Push((int) 8036)
0x73b: Push((int) 5976)
0x73c: Push((int) 8859)
0x73d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73e: Pop(3)
0x73f: PushEmpty(bool)
0x740: Stack[-1] = (bool) 0
0x741: PushEmpty(bool, object)
0x742: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x743: Call 0x18f1

0x744: Pop(1)
0x745: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x746: PushEmpty(bool, object)
0x747: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x748: Call 0x189d

0x749: Pop(1)
0x74a: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x74b: Stack[-1] = (bool) 1
0x74c: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x74d: Push((int) 8039)
0x74e: Push((int) 5991)
0x74f: Push((int) 8862)
0x750: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x751: Pop(3)
0x752: PushEmpty(bool)
0x753: Stack[-1] = (bool) 0
0x754: PushEmpty(bool, object)
0x755: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x756: Call 0x1885

0x757: Pop(1)
0x758: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x759: PushEmpty(bool, object)
0x75a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x75b: Call 0x18a9

0x75c: Pop(1)
0x75d: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x75e: Stack[-1] = (bool) 1
0x75f: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x760: Push((int) 8042)
0x761: Push((int) 8884)
0x762: Push((int) 8865)
0x763: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x764: Pop(3)
0x765: PushEmpty(bool)
0x766: Stack[-1] = (bool) 0
0x767: PushEmpty(bool, object)
0x768: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x769: Call 0x1891

0x76a: Pop(1)
0x76b: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x76c: PushEmpty(bool, object)
0x76d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76e: Call 0x18b5

0x76f: Pop(1)
0x770: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x771: Stack[-1] = (bool) 1
0x772: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x773: Push((int) 8046)
0x774: Push((int) 8885)
0x775: Push((int) 8869)
0x776: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x777: Pop(3)
0x778: PushEmpty(bool)
0x779: Stack[-1] = (bool) 0
0x77a: PushEmpty(bool, object)
0x77b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77c: Call 0x1855

0x77d: Pop(1)
0x77e: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x77f: PushEmpty(bool, object)
0x780: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x781: Call 0x18c1

0x782: Pop(1)
0x783: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x784: Stack[-1] = (bool) 1
0x785: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x786: Push((int) 8047)
0x787: Push((int) 8886)
0x788: Push((int) 8870)
0x789: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78a: Pop(3)
0x78b: PushEmpty(bool)
0x78c: Stack[-1] = (bool) 0
0x78d: PushEmpty(bool, object)
0x78e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x78f: Call 0x18e5

0x790: Pop(1)
0x791: IF (Stack[-1] == 0) GOTO 0x798; Pop(1)

0x792: PushEmpty(bool, object)
0x793: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x794: Call 0x18cd

0x795: Pop(1)
0x796: IF (Stack[-1] == 0) GOTO 0x798; Pop(1)

0x797: Stack[-1] = (bool) 1
0x798: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x799: Push((int) 8051)
0x79a: Push((int) 8887)
0x79b: Push((int) 8874)
0x79c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79d: Pop(3)
0x79e: PushEmpty(bool)
0x79f: Stack[-1] = (bool) 0
0x7a0: PushEmpty(bool, object)
0x7a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a2: Call 0x180d

0x7a3: Pop(1)
0x7a4: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7a5: PushEmpty(bool, object)
0x7a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a7: Call 0x18d9

0x7a8: Pop(1)
0x7a9: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7aa: Stack[-1] = (bool) 1
0x7ab: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x7ac: Push((int) 8052)
0x7ad: Push((int) 8888)
0x7ae: Push((int) 8875)
0x7af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b0: Pop(3)
0x7b1: Push((int) 8709)
0x7b2: Push((int) -1)
0x7b3: Push((int) 9546)
0x7b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b5: Pop(3)
0x7b6: Return(); Pop(0)

0x7b7: Push((int) 8888)
0x7b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b9: IF (Stack[-1] == 0) GOTO 0x7c9; Pop(1)

0x7ba: PushEmpty(string)
0x7bb: Stack[-1] = "Neutral"
0x7bc: Call 0x631

0x7bd: Pop(1)
0x7be: Push((int) 8065)
0x7bf: @@ SetMessage(Stack[-1])
0x7c0: Pop(1)
0x7c1: @@ ClearReplies()
0x7c2: Pop(0)
0x7c3: Push((int) 8708)
0x7c4: Push((int) -1)
0x7c5: Push((int) 9545)
0x7c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c7: Pop(3)
0x7c8: Return(); Pop(0)

0x7c9: Push((int) 8887)
0x7ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7cb: IF (Stack[-1] == 0) GOTO 0x7db; Pop(1)

0x7cc: PushEmpty(string)
0x7cd: Stack[-1] = "Neutral"
0x7ce: Call 0x631

0x7cf: Pop(1)
0x7d0: Push((int) 8064)
0x7d1: @@ SetMessage(Stack[-1])
0x7d2: Pop(1)
0x7d3: @@ ClearReplies()
0x7d4: Pop(0)
0x7d5: Push((int) 8707)
0x7d6: Push((int) -1)
0x7d7: Push((int) 9544)
0x7d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d9: Pop(3)
0x7da: Return(); Pop(0)

0x7db: Push((int) 8886)
0x7dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7dd: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7de: PushEmpty(string)
0x7df: Stack[-1] = "Neutral"
0x7e0: Call 0x631

0x7e1: Pop(1)
0x7e2: Push((int) 8063)
0x7e3: @@ SetMessage(Stack[-1])
0x7e4: Pop(1)
0x7e5: @@ ClearReplies()
0x7e6: Pop(0)
0x7e7: Push((int) 8706)
0x7e8: Push((int) -1)
0x7e9: Push((int) 9543)
0x7ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7eb: Pop(3)
0x7ec: Return(); Pop(0)

0x7ed: Push((int) 8885)
0x7ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ef: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7f0: PushEmpty(string)
0x7f1: Stack[-1] = "Neutral"
0x7f2: Call 0x631

0x7f3: Pop(1)
0x7f4: Push((int) 8062)
0x7f5: @@ SetMessage(Stack[-1])
0x7f6: Pop(1)
0x7f7: @@ ClearReplies()
0x7f8: Pop(0)
0x7f9: Push((int) 8705)
0x7fa: Push((int) -1)
0x7fb: Push((int) 9542)
0x7fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fd: Pop(3)
0x7fe: Return(); Pop(0)

0x7ff: Push((int) 8884)
0x800: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x801: IF (Stack[-1] == 0) GOTO 0x811; Pop(1)

0x802: PushEmpty(string)
0x803: Stack[-1] = "Neutral"
0x804: Call 0x631

0x805: Pop(1)
0x806: Push((int) 8061)
0x807: @@ SetMessage(Stack[-1])
0x808: Pop(1)
0x809: @@ ClearReplies()
0x80a: Pop(0)
0x80b: Push((int) 8704)
0x80c: Push((int) -1)
0x80d: Push((int) 9541)
0x80e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80f: Pop(3)
0x810: Return(); Pop(0)

0x811: Push((int) 5991)
0x812: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x813: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x814: PushEmpty(object, object)
0x815: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x816: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x817: Call 0x1669

0x818: Pop(2)
0x819: PushEmpty(string)
0x81a: Stack[-1] = "Neutral"
0x81b: Call 0x631

0x81c: Pop(1)
0x81d: Push((int) 5438)
0x81e: @@ SetMessage(Stack[-1])
0x81f: Pop(1)
0x820: @@ ClearReplies()
0x821: Pop(0)
0x822: Push((int) 5439)
0x823: Push((int) 5993)
0x824: Push((int) 5992)
0x825: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x826: Pop(3)
0x827: Push((int) 5446)
0x828: Push((int) -1)
0x829: Push((int) 6000)
0x82a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82b: Pop(3)
0x82c: Return(); Pop(0)

0x82d: Push((int) 5993)
0x82e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82f: IF (Stack[-1] == 0) GOTO 0x844; Pop(1)

0x830: PushEmpty(string)
0x831: Stack[-1] = "Neutral"
0x832: Call 0x631

0x833: Pop(1)
0x834: Push((int) 5440)
0x835: @@ SetMessage(Stack[-1])
0x836: Pop(1)
0x837: @@ ClearReplies()
0x838: Pop(0)
0x839: Push((int) 5441)
0x83a: Push((int) 5995)
0x83b: Push((int) 5994)
0x83c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83d: Pop(3)
0x83e: Push((int) 5445)
0x83f: Push((int) 5995)
0x840: Push((int) 5998)
0x841: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x842: Pop(3)
0x843: Return(); Pop(0)

0x844: Push((int) 5995)
0x845: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x846: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x847: PushEmpty(string)
0x848: Stack[-1] = "Neutral"
0x849: Call 0x631

0x84a: Pop(1)
0x84b: Push((int) 5442)
0x84c: @@ SetMessage(Stack[-1])
0x84d: Pop(1)
0x84e: @@ ClearReplies()
0x84f: Pop(0)
0x850: Push((int) 5443)
0x851: Push((int) -1)
0x852: Push((int) 5996)
0x853: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x854: Pop(3)
0x855: Push((int) 5444)
0x856: Push((int) -1)
0x857: Push((int) 5997)
0x858: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x859: Pop(3)
0x85a: Return(); Pop(0)

0x85b: Push((int) 5976)
0x85c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x85d: IF (Stack[-1] == 0) GOTO 0x87c; Pop(1)

0x85e: PushEmpty(bool, object)
0x85f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x860: Call 0x16ee

0x861: Pop(1)
0x862: IF (Stack[-1] == 0) GOTO 0x87c; Pop(1)

0x863: PushEmpty(string)
0x864: Stack[-1] = "Neutral"
0x865: Call 0x631

0x866: Pop(1)
0x867: Push((int) 5427)
0x868: @@ SetMessage(Stack[-1])
0x869: Pop(1)
0x86a: @@ ClearReplies()
0x86b: Pop(0)
0x86c: Push((int) 5428)
0x86d: Push((int) 5978)
0x86e: Push((int) 5977)
0x86f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x870: Pop(3)
0x871: Push((int) 5436)
0x872: Push((int) 5978)
0x873: Push((int) 5987)
0x874: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x875: Pop(3)
0x876: Push((int) 5437)
0x877: Push((int) 5978)
0x878: Push((int) 5989)
0x879: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87a: Pop(3)
0x87b: Return(); Pop(0)

0x87c: Push((int) 5978)
0x87d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x87e: IF (Stack[-1] == 0) GOTO 0x898; Pop(1)

0x87f: PushEmpty(string)
0x880: Stack[-1] = "Neutral"
0x881: Call 0x631

0x882: Pop(1)
0x883: Push((int) 5429)
0x884: @@ SetMessage(Stack[-1])
0x885: Pop(1)
0x886: @@ ClearReplies()
0x887: Pop(0)
0x888: Push((int) 5430)
0x889: Push((int) 5980)
0x88a: Push((int) 5979)
0x88b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88c: Pop(3)
0x88d: Push((int) 5434)
0x88e: Push((int) 5980)
0x88f: Push((int) 5983)
0x890: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x891: Pop(3)
0x892: Push((int) 5435)
0x893: Push((int) 5980)
0x894: Push((int) 5985)
0x895: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x896: Pop(3)
0x897: Return(); Pop(0)

0x898: Push((int) 5980)
0x899: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x89a: IF (Stack[-1] == 0) GOTO 0x8af; Pop(1)

0x89b: PushEmpty(string)
0x89c: Stack[-1] = "Neutral"
0x89d: Call 0x631

0x89e: Pop(1)
0x89f: Push((int) 5431)
0x8a0: @@ SetMessage(Stack[-1])
0x8a1: Pop(1)
0x8a2: @@ ClearReplies()
0x8a3: Pop(0)
0x8a4: Push((int) 5432)
0x8a5: Push((int) -1)
0x8a6: Push((int) 5981)
0x8a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a8: Pop(3)
0x8a9: Push((int) 5433)
0x8aa: Push((int) -1)
0x8ab: Push((int) 5982)
0x8ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ad: Pop(3)
0x8ae: Return(); Pop(0)

0x8af: Push((int) 9493)
0x8b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b1: IF (Stack[-1] == 0) GOTO 0x8c1; Pop(1)

0x8b2: PushEmpty(string)
0x8b3: Stack[-1] = "Neutral"
0x8b4: Call 0x631

0x8b5: Pop(1)
0x8b6: Push((int) 8668)
0x8b7: @@ SetMessage(Stack[-1])
0x8b8: Pop(1)
0x8b9: @@ ClearReplies()
0x8ba: Pop(0)
0x8bb: Push((int) 8669)
0x8bc: Push((int) 9495)
0x8bd: Push((int) 9494)
0x8be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bf: Pop(3)
0x8c0: Return(); Pop(0)

0x8c1: Push((int) 9495)
0x8c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c3: IF (Stack[-1] == 0) GOTO 0x8d3; Pop(1)

0x8c4: PushEmpty(string)
0x8c5: Stack[-1] = "Neutral"
0x8c6: Call 0x631

0x8c7: Pop(1)
0x8c8: Push((int) 8670)
0x8c9: @@ SetMessage(Stack[-1])
0x8ca: Pop(1)
0x8cb: @@ ClearReplies()
0x8cc: Pop(0)
0x8cd: Push((int) 8671)
0x8ce: Push((int) 9497)
0x8cf: Push((int) 9496)
0x8d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d1: Pop(3)
0x8d2: Return(); Pop(0)

0x8d3: Push((int) 9497)
0x8d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d5: IF (Stack[-1] == 0) GOTO 0x8e5; Pop(1)

0x8d6: PushEmpty(string)
0x8d7: Stack[-1] = "Neutral"
0x8d8: Call 0x631

0x8d9: Pop(1)
0x8da: Push((int) 8672)
0x8db: @@ SetMessage(Stack[-1])
0x8dc: Pop(1)
0x8dd: @@ ClearReplies()
0x8de: Pop(0)
0x8df: Push((int) 8673)
0x8e0: Push((int) 9499)
0x8e1: Push((int) 9498)
0x8e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e3: Pop(3)
0x8e4: Return(); Pop(0)

0x8e5: Push((int) 9499)
0x8e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e7: IF (Stack[-1] == 0) GOTO 0x8f7; Pop(1)

0x8e8: PushEmpty(string)
0x8e9: Stack[-1] = "Neutral"
0x8ea: Call 0x631

0x8eb: Pop(1)
0x8ec: Push((int) 8674)
0x8ed: @@ SetMessage(Stack[-1])
0x8ee: Pop(1)
0x8ef: @@ ClearReplies()
0x8f0: Pop(0)
0x8f1: Push((int) 8675)
0x8f2: Push((int) 9501)
0x8f3: Push((int) 9500)
0x8f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f5: Pop(3)
0x8f6: Return(); Pop(0)

0x8f7: Push((int) 9501)
0x8f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f9: IF (Stack[-1] == 0) GOTO 0x909; Pop(1)

0x8fa: PushEmpty(string)
0x8fb: Stack[-1] = "Neutral"
0x8fc: Call 0x631

0x8fd: Pop(1)
0x8fe: Push((int) 8676)
0x8ff: @@ SetMessage(Stack[-1])
0x900: Pop(1)
0x901: @@ ClearReplies()
0x902: Pop(0)
0x903: Push((int) 8677)
0x904: Push((int) 9503)
0x905: Push((int) 9502)
0x906: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x907: Pop(3)
0x908: Return(); Pop(0)

0x909: Push((int) 9503)
0x90a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x90b: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x90c: PushEmpty(string)
0x90d: Stack[-1] = "Neutral"
0x90e: Call 0x631

0x90f: Pop(1)
0x910: Push((int) 8678)
0x911: @@ SetMessage(Stack[-1])
0x912: Pop(1)
0x913: @@ ClearReplies()
0x914: Pop(0)
0x915: Push((int) 8679)
0x916: Push((int) 9505)
0x917: Push((int) 9504)
0x918: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x919: Pop(3)
0x91a: Return(); Pop(0)

0x91b: Push((int) 9505)
0x91c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91d: IF (Stack[-1] == 0) GOTO 0x92d; Pop(1)

0x91e: PushEmpty(string)
0x91f: Stack[-1] = "Neutral"
0x920: Call 0x631

0x921: Pop(1)
0x922: Push((int) 8680)
0x923: @@ SetMessage(Stack[-1])
0x924: Pop(1)
0x925: @@ ClearReplies()
0x926: Pop(0)
0x927: Push((int) 8681)
0x928: Push((int) 9507)
0x929: Push((int) 9506)
0x92a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92b: Pop(3)
0x92c: Return(); Pop(0)

0x92d: Push((int) 9507)
0x92e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x92f: IF (Stack[-1] == 0) GOTO 0x93f; Pop(1)

0x930: PushEmpty(string)
0x931: Stack[-1] = "Neutral"
0x932: Call 0x631

0x933: Pop(1)
0x934: Push((int) 8682)
0x935: @@ SetMessage(Stack[-1])
0x936: Pop(1)
0x937: @@ ClearReplies()
0x938: Pop(0)
0x939: Push((int) 8683)
0x93a: Push((int) -1)
0x93b: Push((int) 9508)
0x93c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93d: Pop(3)
0x93e: Return(); Pop(0)

0x93f: Push((int) 6893)
0x940: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x941: IF (Stack[-1] == 0) GOTO 0x951; Pop(1)

0x942: PushEmpty(string)
0x943: Stack[-1] = "Neutral"
0x944: Call 0x631

0x945: Pop(1)
0x946: Push((int) 6232)
0x947: @@ SetMessage(Stack[-1])
0x948: Pop(1)
0x949: @@ ClearReplies()
0x94a: Pop(0)
0x94b: Push((int) 6233)
0x94c: Push((int) 6895)
0x94d: Push((int) 6894)
0x94e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94f: Pop(3)
0x950: Return(); Pop(0)

0x951: Push((int) 6895)
0x952: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x953: IF (Stack[-1] == 0) GOTO 0x963; Pop(1)

0x954: PushEmpty(string)
0x955: Stack[-1] = "Neutral"
0x956: Call 0x631

0x957: Pop(1)
0x958: Push((int) 6234)
0x959: @@ SetMessage(Stack[-1])
0x95a: Pop(1)
0x95b: @@ ClearReplies()
0x95c: Pop(0)
0x95d: Push((int) 6235)
0x95e: Push((int) 6888)
0x95f: Push((int) 6896)
0x960: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x961: Pop(3)
0x962: Return(); Pop(0)

0x963: Push((int) 6886)
0x964: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x965: IF (Stack[-1] == 0) GOTO 0x975; Pop(1)

0x966: PushEmpty(string)
0x967: Stack[-1] = "Neutral"
0x968: Call 0x631

0x969: Pop(1)
0x96a: Push((int) 6225)
0x96b: @@ SetMessage(Stack[-1])
0x96c: Pop(1)
0x96d: @@ ClearReplies()
0x96e: Pop(0)
0x96f: Push((int) 6226)
0x970: Push((int) 6888)
0x971: Push((int) 6887)
0x972: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x973: Pop(3)
0x974: Return(); Pop(0)

0x975: Push((int) 6888)
0x976: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x977: IF (Stack[-1] == 0) GOTO 0x991; Pop(1)

0x978: PushEmpty(string)
0x979: Stack[-1] = "Neutral"
0x97a: Call 0x631

0x97b: Pop(1)
0x97c: Push((int) 6227)
0x97d: @@ SetMessage(Stack[-1])
0x97e: Pop(1)
0x97f: @@ ClearReplies()
0x980: Pop(0)
0x981: Push((int) 6229)
0x982: Push((int) 6891)
0x983: Push((int) 6890)
0x984: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x985: Pop(3)
0x986: PushEmpty(bool, object)
0x987: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x988: Call 0x16ca

0x989: Pop(1)
0x98a: IF (Stack[-1] == 0) GOTO 0x990; Pop(1)

0x98b: Push((int) 6228)
0x98c: Push((int) 6891)
0x98d: Push((int) 6889)
0x98e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98f: Pop(3)
0x990: Return(); Pop(0)

0x991: Push((int) 6891)
0x992: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x993: IF (Stack[-1] == 0) GOTO 0x9a8; Pop(1)

0x994: PushEmpty(string)
0x995: Stack[-1] = "Neutral"
0x996: Call 0x631

0x997: Pop(1)
0x998: Push((int) 6230)
0x999: @@ SetMessage(Stack[-1])
0x99a: Pop(1)
0x99b: @@ ClearReplies()
0x99c: Pop(0)
0x99d: Push((int) 6236)
0x99e: Push((int) -1)
0x99f: Push((int) 6898)
0x9a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a1: Pop(3)
0x9a2: Push((int) 6237)
0x9a3: Push((int) -1)
0x9a4: Push((int) 6899)
0x9a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a6: Pop(3)
0x9a7: Return(); Pop(0)

0x9a8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x9a9: PushEmpty(bool)
0x9aa: Call 0x13ed

0x9ab: Pop(0)
0x9ac: IF (Stack[-1] == 0) GOTO 0x9b0; Pop(1)

0x9ad: @ lshStopAnimation()
0x9ae: Pop(0)
0x9af: GOTO 0x9b2

0x9b0: @ StopAnimation()
0x9b1: Pop(0)
0x9b2: Return(); Pop(0)

0x9b3: GOTO 0x642

0x9b4: Return(); Pop(0)

0x9b5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x9b6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x9b7: PushEmpty(bool, object)
0x9b8: Stack[-1] = Stack[-11]
0x9b9: Call 0x132f

0x9ba: Pop(1)
0x9bb: Pop(1); Push((bool) Stack[-1] == 0)
0x9bc: IF (Stack[-1] == 0) GOTO 0x9bf; Pop(1)

0x9bd: Stack[-10] = (int) -2
0x9be: Return(); Pop(8)

0x9bf: @ CreateDialog(Stack[-4])
0x9c0: Pop(0)
0x9c1: PushEmpty(int)
0x9c2: Call 0x13e9

0x9c3: Pop(0)
0x9c4: @@ SetNPCName(Stack[-1])
0x9c5: Pop(1)
0x9c6: PushEmpty(string)
0x9c7: Call 0x13eb

0x9c8: Pop(0)
0x9c9: @@ SetPhoto(Stack[-1])
0x9ca: Pop(1)
0x9cb: PushEmpty(int)
0x9cc: Call 0x19a5

0x9cd: Pop(0)
0x9ce: @@ SetPlayerName(Stack[-1])
0x9cf: Pop(1)
0x9d0: Stack[-2] = (int) -1
0x9d1: @ IsOverrideActive(Stack[-3])
0x9d2: Pop(0)
0x9d3: Push(Stack[-3])
0x9d4: IF (Stack[-1] == 0) GOTO 0x9d7; Pop(1)

0x9d5: Stack[-10] = (int) -2
0x9d6: Return(); Pop(8)

0x9d7: @ DoDialog(Stack[-4])
0x9d8: Pop(0)
0x9d9: PushEmpty(object, object)
0x9da: Stack[-2] = Stack[-11]
0x9db: Stack[-1] = Stack[-6]
0x9dc: Push(-2, 4); TaskCall(9)
0x9dd: Call 0x9f4

0x9de: Pop(-2, 4); TaskReturn
0x9df: Pop(2)
0x9e0: @@ IsDialogEnd(Stack[-1])
0x9e1: Pop(0)
0x9e2: Pop(0); Push((bool) Stack[-1] == 0)
0x9e3: IF (Stack[-1] == 0) GOTO 0x9e9; Pop(1)

0x9e4: @ sync()
0x9e5: Pop(0)
0x9e6: @@ IsDialogEnd(Stack[-1])
0x9e7: Pop(0)
0x9e8: GOTO 0x9e2

0x9e9: PushEmpty(object)
0x9ea: Stack[-1] = Stack[-10]
0x9eb: Call 0x1367

0x9ec: Pop(1)
0x9ed: @ StopDialog(Stack[-4])
0x9ee: Pop(0)
0x9ef: @@ GetReturnValue(Stack[-2])
0x9f0: Pop(0)
0x9f1: Stack[-10] = Stack[-2]
0x9f2: Return(); Pop(8)

0x9f3: Stack[-4] = 0
0x9f4: PushEmpty()
0x9f5: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x9f6: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x9f7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x9f8: Push((int) 1)
0x9f9: IF (Stack[-1] == 0) GOTO 0xaa1; Pop(1)

0x9fa: PushEmpty(bool)
0x9fb: Stack[-1] = (bool) 0
0x9fc: PushEmpty(bool, object)
0x9fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9fe: Call 0x1712

0x9ff: Pop(1)
0xa00: IF (Stack[-1] == 0) GOTO 0xa07; Pop(1)

0xa01: PushEmpty(bool, object)
0xa02: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa03: Call 0x1736

0xa04: Pop(1)
0xa05: IF (Stack[-1] == 0) GOTO 0xa07; Pop(1)

0xa06: Stack[-1] = (bool) 1
0xa07: IF (Stack[-1] == 0) GOTO 0xa1c; Pop(1)

0xa08: PushEmpty(string)
0xa09: Stack[-1] = "Neutral"
0xa0a: Call 0xabf

0xa0b: Pop(1)
0xa0c: Push((int) 6893)
0xa0d: @@ SetMessage(Stack[-1])
0xa0e: Pop(1)
0xa0f: @@ ClearReplies()
0xa10: Pop(0)
0xa11: Push((int) 7378)
0xa12: Push((int) 8140)
0xa13: Push((int) 8139)
0xa14: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa15: Pop(3)
0xa16: Push((int) 7384)
0xa17: Push((int) 8140)
0xa18: Push((int) 8145)
0xa19: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1a: Pop(3)
0xa1b: GOTO 0xaa1

0xa1c: PushEmpty(string)
0xa1d: Stack[-1] = "Neutral"
0xa1e: Call 0xabf

0xa1f: Pop(1)
0xa20: Push((int) 7377)
0xa21: @@ SetMessage(Stack[-1])
0xa22: Pop(1)
0xa23: @@ ClearReplies()
0xa24: Pop(0)
0xa25: PushEmpty(bool)
0xa26: Stack[-1] = (bool) 0
0xa27: PushEmpty(bool)
0xa28: Stack[-1] = (bool) 0
0xa29: PushEmpty(bool, object)
0xa2a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa2b: Call 0x171e

0xa2c: Pop(1)
0xa2d: IF (Stack[-1] == 0) GOTO 0xa34; Pop(1)

0xa2e: PushEmpty(bool, object)
0xa2f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa30: Call 0x175d

0xa31: Pop(1)
0xa32: IF (Stack[-1] == 0) GOTO 0xa34; Pop(1)

0xa33: Stack[-1] = (bool) 1
0xa34: IF (Stack[-1] == 0) GOTO 0xa3b; Pop(1)

0xa35: PushEmpty(bool, object)
0xa36: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa37: Call 0x1747

0xa38: Pop(1)
0xa39: IF (Stack[-1] == 0) GOTO 0xa3b; Pop(1)

0xa3a: Stack[-1] = (bool) 1
0xa3b: IF (Stack[-1] == 0) GOTO 0xa41; Pop(1)

0xa3c: Push((int) 6900)
0xa3d: Push((int) 7607)
0xa3e: Push((int) 7606)
0xa3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa40: Pop(3)
0xa41: PushEmpty(bool)
0xa42: Stack[-1] = (bool) 0
0xa43: PushEmpty(bool, object)
0xa44: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa45: Call 0x172a

0xa46: Pop(1)
0xa47: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa48: PushEmpty(bool, object)
0xa49: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4a: Call 0x1747

0xa4b: Pop(1)
0xa4c: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa4d: Stack[-1] = (bool) 1
0xa4e: IF (Stack[-1] == 0) GOTO 0xa54; Pop(1)

0xa4f: Push((int) 6902)
0xa50: Push((int) 7609)
0xa51: Push((int) 7608)
0xa52: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa53: Pop(3)
0xa54: PushEmpty(bool)
0xa55: Stack[-1] = (bool) 0
0xa56: PushEmpty(bool, object)
0xa57: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa58: Call 0x1742

0xa59: Pop(1)
0xa5a: IF (Stack[-1] == 0) GOTO 0xa61; Pop(1)

0xa5b: PushEmpty(bool, object)
0xa5c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa5d: Call 0x1751

0xa5e: Pop(1)
0xa5f: IF (Stack[-1] == 0) GOTO 0xa61; Pop(1)

0xa60: Stack[-1] = (bool) 1
0xa61: IF (Stack[-1] == 0) GOTO 0xa67; Pop(1)

0xa62: Push((int) 6905)
0xa63: Push((int) 7612)
0xa64: Push((int) 7611)
0xa65: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa66: Pop(3)
0xa67: PushEmpty(bool, object)
0xa68: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa69: Call 0x1736

0xa6a: Pop(1)
0xa6b: IF (Stack[-1] == 0) GOTO 0xa71; Pop(1)

0xa6c: Push((int) 7745)
0xa6d: Push((int) 7601)
0xa6e: Push((int) 8545)
0xa6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa70: Pop(3)
0xa71: Push((int) 7744)
0xa72: Push((int) -1)
0xa73: Push((int) 8544)
0xa74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa75: Pop(3)
0xa76: GOTO 0xaa1

0xa77: PushEmpty(string)
0xa78: Stack[-1] = "Neutral"
0xa79: Call 0xabf

0xa7a: Pop(1)
0xa7b: Push((int) 9342)
0xa7c: @@ SetMessage(Stack[-1])
0xa7d: Pop(1)
0xa7e: @@ ClearReplies()
0xa7f: Pop(0)
0xa80: Push((int) 9343)
0xa81: Push((int) 10264)
0xa82: Push((int) 10263)
0xa83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa84: Pop(3)
0xa85: Push((int) 9350)
0xa86: Push((int) 10264)
0xa87: Push((int) 10271)
0xa88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa89: Pop(3)
0xa8a: GOTO 0xaa1

0xa8b: PushEmpty(string)
0xa8c: Stack[-1] = "Neutral"
0xa8d: Call 0xabf

0xa8e: Pop(1)
0xa8f: Push((int) 9451)
0xa90: @@ SetMessage(Stack[-1])
0xa91: Pop(1)
0xa92: @@ ClearReplies()
0xa93: Pop(0)
0xa94: Push((int) 9452)
0xa95: Push((int) 10391)
0xa96: Push((int) 10390)
0xa97: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa98: Pop(3)
0xa99: Push((int) 9471)
0xa9a: Push((int) 10391)
0xa9b: Push((int) 10412)
0xa9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9d: Pop(3)
0xa9e: GOTO 0xaa1

0xa9f: Return(); Pop(0)

0xaa0: GOTO 0x9f8

0xaa1: PushEmpty(bool)
0xaa2: Call 0x13ed

0xaa3: Pop(0)
0xaa4: IF (Stack[-1] == 0) GOTO 0xab0; Pop(1)

0xaa5: @ lshWaitForAnimEnd()
0xaa6: Pop(0)
0xaa7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaa8: IF (Stack[-1] == 0) GOTO 0xaaa; Pop(1)

0xaa9: GOTO 0xaaf

0xaaa: PushEmpty(string)
0xaab: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xaac: Call 0x136b

0xaad: Pop(1)
0xaae: GOTO 0xaa5

0xaaf: GOTO 0xabe

0xab0: Push("all")
0xab1: Push("idle")
0xab2: @ PlayAnimation(Stack[-2], Stack[-1])
0xab3: Pop(2)
0xab4: @ WaitForAnimEnd()
0xab5: Pop(0)
0xab6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xab7: IF (Stack[-1] == 0) GOTO 0xab9; Pop(1)

0xab8: GOTO 0xabe

0xab9: Push("all")
0xaba: Push("idle")
0xabb: @ PlayAnimation(Stack[-2], Stack[-1])
0xabc: Pop(2)
0xabd: GOTO 0xab4

0xabe: Return(); Pop(0)

0xabf: PushEmpty()
0xac0: PushEmpty(bool)
0xac1: Call 0x13ed

0xac2: Pop(0)
0xac3: Pop(1); Push((bool) Stack[-1] == 0)
0xac4: IF (Stack[-1] == 0) GOTO 0xac6; Pop(1)

0xac5: Return(); Pop(0)

0xac6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xac7: IF (Stack[-1] == 0) GOTO 0xac9; Pop(1)

0xac8: Return(); Pop(0)

0xac9: PushEmpty(string)
0xaca: Stack[-1] = Stack[-2]
0xacb: Call 0x136b

0xacc: Pop(1)
0xacd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xace: Return(); Pop(0)

0xacf: PushEmpty()
0xad0: Push((int) 1)
0xad1: IF (Stack[-1] == 0) GOTO 0xd82; Pop(1)

0xad2: PushEmpty()
0xad3: Call 0x137d

0xad4: Pop(0)
0xad5: Push((int) 7604)
0xad6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xad7: IF (Stack[-1] == 0) GOTO 0xae2; Pop(1)

0xad8: PushEmpty(object, object)
0xad9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xada: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xadb: Call 0x1407

0xadc: Pop(2)
0xadd: PushEmpty(object, object)
0xade: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xadf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xae0: Call 0x1419

0xae1: Pop(2)
0xae2: Push((int) 8158)
0xae3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xae4: IF (Stack[-1] == 0) GOTO 0xaef; Pop(1)

0xae5: PushEmpty(object, object)
0xae6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xae7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xae8: Call 0x1407

0xae9: Pop(2)
0xaea: PushEmpty(object, object)
0xaeb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaed: Call 0x1419

0xaee: Pop(2)
0xaef: Push((int) 8155)
0xaf0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaf1: IF (Stack[-1] == 0) GOTO 0xaf7; Pop(1)

0xaf2: PushEmpty(object, object)
0xaf3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaf5: Call 0x140d

0xaf6: Pop(2)
0xaf7: Push((int) 8161)
0xaf8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaf9: IF (Stack[-1] == 0) GOTO 0xb09; Pop(1)

0xafa: PushEmpty(object, object)
0xafb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xafc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xafd: Call 0x140d

0xafe: Pop(2)
0xaff: PushEmpty(object, object)
0xb00: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb01: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb02: Call 0x1472

0xb03: Pop(2)
0xb04: PushEmpty(object, object)
0xb05: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb06: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb07: Call 0x14c6

0xb08: Pop(2)
0xb09: Push((int) 8165)
0xb0a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb0b: IF (Stack[-1] == 0) GOTO 0xb20; Pop(1)

0xb0c: PushEmpty(object, object)
0xb0d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb0e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0f: Call 0x1413

0xb10: Pop(2)
0xb11: PushEmpty(object, object)
0xb12: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb13: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb14: Call 0x14cc

0xb15: Pop(2)
0xb16: PushEmpty(object, object)
0xb17: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb18: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb19: Call 0x1452

0xb1a: Pop(2)
0xb1b: PushEmpty(object, object)
0xb1c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb1d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb1e: Call 0x1693

0xb1f: Pop(2)
0xb20: Push((int) 7599)
0xb21: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb22: IF (Stack[-1] == 0) GOTO 0xbc8; Pop(1)

0xb23: PushEmpty(bool)
0xb24: Stack[-1] = (bool) 0
0xb25: PushEmpty(bool, object)
0xb26: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb27: Call 0x1712

0xb28: Pop(1)
0xb29: IF (Stack[-1] == 0) GOTO 0xb30; Pop(1)

0xb2a: PushEmpty(bool, object)
0xb2b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb2c: Call 0x1736

0xb2d: Pop(1)
0xb2e: IF (Stack[-1] == 0) GOTO 0xb30; Pop(1)

0xb2f: Stack[-1] = (bool) 1
0xb30: IF (Stack[-1] == 0) GOTO 0xb45; Pop(1)

0xb31: PushEmpty(string)
0xb32: Stack[-1] = "Neutral"
0xb33: Call 0xabf

0xb34: Pop(1)
0xb35: Push((int) 6893)
0xb36: @@ SetMessage(Stack[-1])
0xb37: Pop(1)
0xb38: @@ ClearReplies()
0xb39: Pop(0)
0xb3a: Push((int) 7378)
0xb3b: Push((int) 8140)
0xb3c: Push((int) 8139)
0xb3d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb3e: Pop(3)
0xb3f: Push((int) 7384)
0xb40: Push((int) 8140)
0xb41: Push((int) 8145)
0xb42: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb43: Pop(3)
0xb44: Return(); Pop(0)

0xb45: PushEmpty(string)
0xb46: Stack[-1] = "Neutral"
0xb47: Call 0xabf

0xb48: Pop(1)
0xb49: Push((int) 7377)
0xb4a: @@ SetMessage(Stack[-1])
0xb4b: Pop(1)
0xb4c: @@ ClearReplies()
0xb4d: Pop(0)
0xb4e: PushEmpty(bool)
0xb4f: Stack[-1] = (bool) 0
0xb50: PushEmpty(bool)
0xb51: Stack[-1] = (bool) 0
0xb52: PushEmpty(bool, object)
0xb53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb54: Call 0x171e

0xb55: Pop(1)
0xb56: IF (Stack[-1] == 0) GOTO 0xb5d; Pop(1)

0xb57: PushEmpty(bool, object)
0xb58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb59: Call 0x175d

0xb5a: Pop(1)
0xb5b: IF (Stack[-1] == 0) GOTO 0xb5d; Pop(1)

0xb5c: Stack[-1] = (bool) 1
0xb5d: IF (Stack[-1] == 0) GOTO 0xb64; Pop(1)

0xb5e: PushEmpty(bool, object)
0xb5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb60: Call 0x1747

0xb61: Pop(1)
0xb62: IF (Stack[-1] == 0) GOTO 0xb64; Pop(1)

0xb63: Stack[-1] = (bool) 1
0xb64: IF (Stack[-1] == 0) GOTO 0xb6a; Pop(1)

0xb65: Push((int) 6900)
0xb66: Push((int) 7607)
0xb67: Push((int) 7606)
0xb68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb69: Pop(3)
0xb6a: PushEmpty(bool)
0xb6b: Stack[-1] = (bool) 0
0xb6c: PushEmpty(bool, object)
0xb6d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb6e: Call 0x172a

0xb6f: Pop(1)
0xb70: IF (Stack[-1] == 0) GOTO 0xb77; Pop(1)

0xb71: PushEmpty(bool, object)
0xb72: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb73: Call 0x1747

0xb74: Pop(1)
0xb75: IF (Stack[-1] == 0) GOTO 0xb77; Pop(1)

0xb76: Stack[-1] = (bool) 1
0xb77: IF (Stack[-1] == 0) GOTO 0xb7d; Pop(1)

0xb78: Push((int) 6902)
0xb79: Push((int) 7609)
0xb7a: Push((int) 7608)
0xb7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7c: Pop(3)
0xb7d: PushEmpty(bool)
0xb7e: Stack[-1] = (bool) 0
0xb7f: PushEmpty(bool, object)
0xb80: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb81: Call 0x1742

0xb82: Pop(1)
0xb83: IF (Stack[-1] == 0) GOTO 0xb8a; Pop(1)

0xb84: PushEmpty(bool, object)
0xb85: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb86: Call 0x1751

0xb87: Pop(1)
0xb88: IF (Stack[-1] == 0) GOTO 0xb8a; Pop(1)

0xb89: Stack[-1] = (bool) 1
0xb8a: IF (Stack[-1] == 0) GOTO 0xb90; Pop(1)

0xb8b: Push((int) 6905)
0xb8c: Push((int) 7612)
0xb8d: Push((int) 7611)
0xb8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8f: Pop(3)
0xb90: PushEmpty(bool, object)
0xb91: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb92: Call 0x1736

0xb93: Pop(1)
0xb94: IF (Stack[-1] == 0) GOTO 0xb9a; Pop(1)

0xb95: Push((int) 7745)
0xb96: Push((int) 7601)
0xb97: Push((int) 8545)
0xb98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb99: Pop(3)
0xb9a: Push((int) 7744)
0xb9b: Push((int) -1)
0xb9c: Push((int) 8544)
0xb9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9e: Pop(3)
0xb9f: Return(); Pop(0)

0xba0: PushEmpty(string)
0xba1: Stack[-1] = "Neutral"
0xba2: Call 0xabf

0xba3: Pop(1)
0xba4: Push((int) 9342)
0xba5: @@ SetMessage(Stack[-1])
0xba6: Pop(1)
0xba7: @@ ClearReplies()
0xba8: Pop(0)
0xba9: Push((int) 9343)
0xbaa: Push((int) 10264)
0xbab: Push((int) 10263)
0xbac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbad: Pop(3)
0xbae: Push((int) 9350)
0xbaf: Push((int) 10264)
0xbb0: Push((int) 10271)
0xbb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb2: Pop(3)
0xbb3: Return(); Pop(0)

0xbb4: PushEmpty(string)
0xbb5: Stack[-1] = "Neutral"
0xbb6: Call 0xabf

0xbb7: Pop(1)
0xbb8: Push((int) 9451)
0xbb9: @@ SetMessage(Stack[-1])
0xbba: Pop(1)
0xbbb: @@ ClearReplies()
0xbbc: Pop(0)
0xbbd: Push((int) 9452)
0xbbe: Push((int) 10391)
0xbbf: Push((int) 10390)
0xbc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc1: Pop(3)
0xbc2: Push((int) 9471)
0xbc3: Push((int) 10391)
0xbc4: Push((int) 10412)
0xbc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc6: Pop(3)
0xbc7: Return(); Pop(0)

0xbc8: Push((int) 10391)
0xbc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbca: IF (Stack[-1] == 0) GOTO 0xbe4; Pop(1)

0xbcb: PushEmpty(string)
0xbcc: Stack[-1] = "Neutral"
0xbcd: Call 0xabf

0xbce: Pop(1)
0xbcf: Push((int) 9453)
0xbd0: @@ SetMessage(Stack[-1])
0xbd1: Pop(1)
0xbd2: @@ ClearReplies()
0xbd3: Pop(0)
0xbd4: Push((int) 9454)
0xbd5: Push((int) 10393)
0xbd6: Push((int) 10392)
0xbd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd8: Pop(3)
0xbd9: Push((int) 9467)
0xbda: Push((int) 10408)
0xbdb: Push((int) 10407)
0xbdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbdd: Pop(3)
0xbde: Push((int) 9470)
0xbdf: Push((int) -1)
0xbe0: Push((int) 10411)
0xbe1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe2: Pop(3)
0xbe3: Return(); Pop(0)

0xbe4: Push((int) 10408)
0xbe5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe6: IF (Stack[-1] == 0) GOTO 0xbf6; Pop(1)

0xbe7: PushEmpty(string)
0xbe8: Stack[-1] = "Neutral"
0xbe9: Call 0xabf

0xbea: Pop(1)
0xbeb: Push((int) 9468)
0xbec: @@ SetMessage(Stack[-1])
0xbed: Pop(1)
0xbee: @@ ClearReplies()
0xbef: Pop(0)
0xbf0: Push((int) 9469)
0xbf1: Push((int) 10393)
0xbf2: Push((int) 10409)
0xbf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf4: Pop(3)
0xbf5: Return(); Pop(0)

0xbf6: Push((int) 10393)
0xbf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf8: IF (Stack[-1] == 0) GOTO 0xc12; Pop(1)

0xbf9: PushEmpty(string)
0xbfa: Stack[-1] = "Neutral"
0xbfb: Call 0xabf

0xbfc: Pop(1)
0xbfd: Push((int) 9455)
0xbfe: @@ SetMessage(Stack[-1])
0xbff: Pop(1)
0xc00: @@ ClearReplies()
0xc01: Pop(0)
0xc02: Push((int) 9456)
0xc03: Push((int) 10395)
0xc04: Push((int) 10394)
0xc05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc06: Pop(3)
0xc07: Push((int) 9463)
0xc08: Push((int) 10403)
0xc09: Push((int) 10402)
0xc0a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0b: Pop(3)
0xc0c: Push((int) 9466)
0xc0d: Push((int) -1)
0xc0e: Push((int) 10406)
0xc0f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc10: Pop(3)
0xc11: Return(); Pop(0)

0xc12: Push((int) 10403)
0xc13: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc14: IF (Stack[-1] == 0) GOTO 0xc24; Pop(1)

0xc15: PushEmpty(string)
0xc16: Stack[-1] = "Neutral"
0xc17: Call 0xabf

0xc18: Pop(1)
0xc19: Push((int) 9464)
0xc1a: @@ SetMessage(Stack[-1])
0xc1b: Pop(1)
0xc1c: @@ ClearReplies()
0xc1d: Pop(0)
0xc1e: Push((int) 9465)
0xc1f: Push((int) 10395)
0xc20: Push((int) 10404)
0xc21: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc22: Pop(3)
0xc23: Return(); Pop(0)

0xc24: Push((int) 10395)
0xc25: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc26: IF (Stack[-1] == 0) GOTO 0xc3b; Pop(1)

0xc27: PushEmpty(string)
0xc28: Stack[-1] = "Neutral"
0xc29: Call 0xabf

0xc2a: Pop(1)
0xc2b: Push((int) 9457)
0xc2c: @@ SetMessage(Stack[-1])
0xc2d: Pop(1)
0xc2e: @@ ClearReplies()
0xc2f: Pop(0)
0xc30: Push((int) 9458)
0xc31: Push((int) 10397)
0xc32: Push((int) 10396)
0xc33: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc34: Pop(3)
0xc35: Push((int) 9462)
0xc36: Push((int) 10397)
0xc37: Push((int) 10400)
0xc38: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc39: Pop(3)
0xc3a: Return(); Pop(0)

0xc3b: Push((int) 10397)
0xc3c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3d: IF (Stack[-1] == 0) GOTO 0xc52; Pop(1)

0xc3e: PushEmpty(string)
0xc3f: Stack[-1] = "Neutral"
0xc40: Call 0xabf

0xc41: Pop(1)
0xc42: Push((int) 9459)
0xc43: @@ SetMessage(Stack[-1])
0xc44: Pop(1)
0xc45: @@ ClearReplies()
0xc46: Pop(0)
0xc47: Push((int) 9460)
0xc48: Push((int) -1)
0xc49: Push((int) 10398)
0xc4a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4b: Pop(3)
0xc4c: Push((int) 9461)
0xc4d: Push((int) -1)
0xc4e: Push((int) 10399)
0xc4f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc50: Pop(3)
0xc51: Return(); Pop(0)

0xc52: Push((int) 10264)
0xc53: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc54: IF (Stack[-1] == 0) GOTO 0xc69; Pop(1)

0xc55: PushEmpty(string)
0xc56: Stack[-1] = "Neutral"
0xc57: Call 0xabf

0xc58: Pop(1)
0xc59: Push((int) 9344)
0xc5a: @@ SetMessage(Stack[-1])
0xc5b: Pop(1)
0xc5c: @@ ClearReplies()
0xc5d: Pop(0)
0xc5e: Push((int) 9345)
0xc5f: Push((int) 10266)
0xc60: Push((int) 10265)
0xc61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc62: Pop(3)
0xc63: Push((int) 9349)
0xc64: Push((int) 10266)
0xc65: Push((int) 10269)
0xc66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc67: Pop(3)
0xc68: Return(); Pop(0)

0xc69: Push((int) 10266)
0xc6a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6b: IF (Stack[-1] == 0) GOTO 0xc80; Pop(1)

0xc6c: PushEmpty(string)
0xc6d: Stack[-1] = "Neutral"
0xc6e: Call 0xabf

0xc6f: Pop(1)
0xc70: Push((int) 9346)
0xc71: @@ SetMessage(Stack[-1])
0xc72: Pop(1)
0xc73: @@ ClearReplies()
0xc74: Pop(0)
0xc75: Push((int) 9347)
0xc76: Push((int) -1)
0xc77: Push((int) 10267)
0xc78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc79: Pop(3)
0xc7a: Push((int) 9348)
0xc7b: Push((int) -1)
0xc7c: Push((int) 10268)
0xc7d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7e: Pop(3)
0xc7f: Return(); Pop(0)

0xc80: Push((int) 7612)
0xc81: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc82: IF (Stack[-1] == 0) GOTO 0xc92; Pop(1)

0xc83: PushEmpty(string)
0xc84: Stack[-1] = "Neutral"
0xc85: Call 0xabf

0xc86: Pop(1)
0xc87: Push((int) 6906)
0xc88: @@ SetMessage(Stack[-1])
0xc89: Pop(1)
0xc8a: @@ ClearReplies()
0xc8b: Pop(0)
0xc8c: Push((int) 6907)
0xc8d: Push((int) -1)
0xc8e: Push((int) 7613)
0xc8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc90: Pop(3)
0xc91: Return(); Pop(0)

0xc92: Push((int) 7609)
0xc93: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc94: IF (Stack[-1] == 0) GOTO 0xca9; Pop(1)

0xc95: PushEmpty(string)
0xc96: Stack[-1] = "Neutral"
0xc97: Call 0xabf

0xc98: Pop(1)
0xc99: Push((int) 6903)
0xc9a: @@ SetMessage(Stack[-1])
0xc9b: Pop(1)
0xc9c: @@ ClearReplies()
0xc9d: Pop(0)
0xc9e: Push((int) 7397)
0xc9f: Push((int) 8163)
0xca0: Push((int) 8162)
0xca1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca2: Pop(3)
0xca3: Push((int) 6908)
0xca4: Push((int) 8163)
0xca5: Push((int) 7614)
0xca6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca7: Pop(3)
0xca8: Return(); Pop(0)

0xca9: Push((int) 8163)
0xcaa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcab: IF (Stack[-1] == 0) GOTO 0xcbb; Pop(1)

0xcac: PushEmpty(string)
0xcad: Stack[-1] = "Neutral"
0xcae: Call 0xabf

0xcaf: Pop(1)
0xcb0: Push((int) 7398)
0xcb1: @@ SetMessage(Stack[-1])
0xcb2: Pop(1)
0xcb3: @@ ClearReplies()
0xcb4: Pop(0)
0xcb5: Push((int) 7399)
0xcb6: Push((int) -1)
0xcb7: Push((int) 8165)
0xcb8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb9: Pop(3)
0xcba: Return(); Pop(0)

0xcbb: Push((int) 7607)
0xcbc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcbd: IF (Stack[-1] == 0) GOTO 0xccd; Pop(1)

0xcbe: PushEmpty(string)
0xcbf: Stack[-1] = "Neutral"
0xcc0: Call 0xabf

0xcc1: Pop(1)
0xcc2: Push((int) 6901)
0xcc3: @@ SetMessage(Stack[-1])
0xcc4: Pop(1)
0xcc5: @@ ClearReplies()
0xcc6: Pop(0)
0xcc7: Push((int) 7396)
0xcc8: Push((int) -1)
0xcc9: Push((int) 8161)
0xcca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xccb: Pop(3)
0xccc: Return(); Pop(0)

0xccd: Push((int) 8140)
0xcce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xccf: IF (Stack[-1] == 0) GOTO 0xce4; Pop(1)

0xcd0: PushEmpty(string)
0xcd1: Stack[-1] = "Neutral"
0xcd2: Call 0xabf

0xcd3: Pop(1)
0xcd4: Push((int) 7379)
0xcd5: @@ SetMessage(Stack[-1])
0xcd6: Pop(1)
0xcd7: @@ ClearReplies()
0xcd8: Pop(0)
0xcd9: Push((int) 7380)
0xcda: Push((int) 8142)
0xcdb: Push((int) 8141)
0xcdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcdd: Pop(3)
0xcde: Push((int) 7385)
0xcdf: Push((int) 8142)
0xce0: Push((int) 8147)
0xce1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce2: Pop(3)
0xce3: Return(); Pop(0)

0xce4: Push((int) 8142)
0xce5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce6: IF (Stack[-1] == 0) GOTO 0xcfb; Pop(1)

0xce7: PushEmpty(string)
0xce8: Stack[-1] = "Neutral"
0xce9: Call 0xabf

0xcea: Pop(1)
0xceb: Push((int) 7381)
0xcec: @@ SetMessage(Stack[-1])
0xced: Pop(1)
0xcee: @@ ClearReplies()
0xcef: Pop(0)
0xcf0: Push((int) 7382)
0xcf1: Push((int) 8144)
0xcf2: Push((int) 8143)
0xcf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf4: Pop(3)
0xcf5: Push((int) 7386)
0xcf6: Push((int) 8150)
0xcf7: Push((int) 8149)
0xcf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf9: Pop(3)
0xcfa: Return(); Pop(0)

0xcfb: Push((int) 8150)
0xcfc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcfd: IF (Stack[-1] == 0) GOTO 0xd0d; Pop(1)

0xcfe: PushEmpty(string)
0xcff: Stack[-1] = "Neutral"
0xd00: Call 0xabf

0xd01: Pop(1)
0xd02: Push((int) 7387)
0xd03: @@ SetMessage(Stack[-1])
0xd04: Pop(1)
0xd05: @@ ClearReplies()
0xd06: Pop(0)
0xd07: Push((int) 7388)
0xd08: Push((int) 8144)
0xd09: Push((int) 8151)
0xd0a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0b: Pop(3)
0xd0c: Return(); Pop(0)

0xd0d: Push((int) 8144)
0xd0e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0f: IF (Stack[-1] == 0) GOTO 0xd1f; Pop(1)

0xd10: PushEmpty(string)
0xd11: Stack[-1] = "Neutral"
0xd12: Call 0xabf

0xd13: Pop(1)
0xd14: Push((int) 7383)
0xd15: @@ SetMessage(Stack[-1])
0xd16: Pop(1)
0xd17: @@ ClearReplies()
0xd18: Pop(0)
0xd19: Push((int) 6894)
0xd1a: Push((int) 8153)
0xd1b: Push((int) 7600)
0xd1c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1d: Pop(3)
0xd1e: Return(); Pop(0)

0xd1f: Push((int) 8153)
0xd20: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd21: IF (Stack[-1] == 0) GOTO 0xd36; Pop(1)

0xd22: PushEmpty(string)
0xd23: Stack[-1] = "Neutral"
0xd24: Call 0xabf

0xd25: Pop(1)
0xd26: Push((int) 7389)
0xd27: @@ SetMessage(Stack[-1])
0xd28: Pop(1)
0xd29: @@ ClearReplies()
0xd2a: Pop(0)
0xd2b: Push((int) 7390)
0xd2c: Push((int) 7601)
0xd2d: Push((int) 8154)
0xd2e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2f: Pop(3)
0xd30: Push((int) 7391)
0xd31: Push((int) -1)
0xd32: Push((int) 8155)
0xd33: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd34: Pop(3)
0xd35: Return(); Pop(0)

0xd36: Push((int) 7601)
0xd37: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd38: IF (Stack[-1] == 0) GOTO 0xd4d; Pop(1)

0xd39: PushEmpty(string)
0xd3a: Stack[-1] = "Neutral"
0xd3b: Call 0xabf

0xd3c: Pop(1)
0xd3d: Push((int) 6895)
0xd3e: @@ SetMessage(Stack[-1])
0xd3f: Pop(1)
0xd40: @@ ClearReplies()
0xd41: Pop(0)
0xd42: Push((int) 6896)
0xd43: Push((int) 7603)
0xd44: Push((int) 7602)
0xd45: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd46: Pop(3)
0xd47: Push((int) 7392)
0xd48: Push((int) 8157)
0xd49: Push((int) 8156)
0xd4a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4b: Pop(3)
0xd4c: Return(); Pop(0)

0xd4d: Push((int) 8157)
0xd4e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd4f: IF (Stack[-1] == 0) GOTO 0xd5f; Pop(1)

0xd50: PushEmpty(string)
0xd51: Stack[-1] = "Neutral"
0xd52: Call 0xabf

0xd53: Pop(1)
0xd54: Push((int) 7393)
0xd55: @@ SetMessage(Stack[-1])
0xd56: Pop(1)
0xd57: @@ ClearReplies()
0xd58: Pop(0)
0xd59: Push((int) 7395)
0xd5a: Push((int) 7603)
0xd5b: Push((int) 8159)
0xd5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5d: Pop(3)
0xd5e: Return(); Pop(0)

0xd5f: Push((int) 7603)
0xd60: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd61: IF (Stack[-1] == 0) GOTO 0xd76; Pop(1)

0xd62: PushEmpty(string)
0xd63: Stack[-1] = "Neutral"
0xd64: Call 0xabf

0xd65: Pop(1)
0xd66: Push((int) 6897)
0xd67: @@ SetMessage(Stack[-1])
0xd68: Pop(1)
0xd69: @@ ClearReplies()
0xd6a: Pop(0)
0xd6b: Push((int) 6898)
0xd6c: Push((int) -1)
0xd6d: Push((int) 7604)
0xd6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6f: Pop(3)
0xd70: Push((int) 7394)
0xd71: Push((int) -1)
0xd72: Push((int) 8158)
0xd73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd74: Pop(3)
0xd75: Return(); Pop(0)

0xd76: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd77: PushEmpty(bool)
0xd78: Call 0x13ed

0xd79: Pop(0)
0xd7a: IF (Stack[-1] == 0) GOTO 0xd7e; Pop(1)

0xd7b: @ lshStopAnimation()
0xd7c: Pop(0)
0xd7d: GOTO 0xd80

0xd7e: @ StopAnimation()
0xd7f: Pop(0)
0xd80: Return(); Pop(0)

0xd81: GOTO 0xad0

0xd82: Return(); Pop(0)

0xd83: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xd84: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xd85: PushEmpty(bool, object)
0xd86: Stack[-1] = Stack[-11]
0xd87: Call 0x132f

0xd88: Pop(1)
0xd89: Pop(1); Push((bool) Stack[-1] == 0)
0xd8a: IF (Stack[-1] == 0) GOTO 0xd8d; Pop(1)

0xd8b: Stack[-10] = (int) -2
0xd8c: Return(); Pop(8)

0xd8d: @ CreateDialog(Stack[-4])
0xd8e: Pop(0)
0xd8f: PushEmpty(int)
0xd90: Call 0x13e9

0xd91: Pop(0)
0xd92: @@ SetNPCName(Stack[-1])
0xd93: Pop(1)
0xd94: PushEmpty(string)
0xd95: Call 0x13eb

0xd96: Pop(0)
0xd97: @@ SetPhoto(Stack[-1])
0xd98: Pop(1)
0xd99: PushEmpty(int)
0xd9a: Call 0x19a5

0xd9b: Pop(0)
0xd9c: @@ SetPlayerName(Stack[-1])
0xd9d: Pop(1)
0xd9e: Stack[-2] = (int) -1
0xd9f: @ IsOverrideActive(Stack[-3])
0xda0: Pop(0)
0xda1: Push(Stack[-3])
0xda2: IF (Stack[-1] == 0) GOTO 0xda5; Pop(1)

0xda3: Stack[-10] = (int) -2
0xda4: Return(); Pop(8)

0xda5: @ DoDialog(Stack[-4])
0xda6: Pop(0)
0xda7: PushEmpty(object, object)
0xda8: Stack[-2] = Stack[-11]
0xda9: Stack[-1] = Stack[-6]
0xdaa: Push(-2, 4); TaskCall(11)
0xdab: Call 0xdc2

0xdac: Pop(-2, 4); TaskReturn
0xdad: Pop(2)
0xdae: @@ IsDialogEnd(Stack[-1])
0xdaf: Pop(0)
0xdb0: Pop(0); Push((bool) Stack[-1] == 0)
0xdb1: IF (Stack[-1] == 0) GOTO 0xdb7; Pop(1)

0xdb2: @ sync()
0xdb3: Pop(0)
0xdb4: @@ IsDialogEnd(Stack[-1])
0xdb5: Pop(0)
0xdb6: GOTO 0xdb0

0xdb7: PushEmpty(object)
0xdb8: Stack[-1] = Stack[-10]
0xdb9: Call 0x1367

0xdba: Pop(1)
0xdbb: @ StopDialog(Stack[-4])
0xdbc: Pop(0)
0xdbd: @@ GetReturnValue(Stack[-2])
0xdbe: Pop(0)
0xdbf: Stack[-10] = Stack[-2]
0xdc0: Return(); Pop(8)

0xdc1: Stack[-4] = 0
0xdc2: PushEmpty()
0xdc3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xdc4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xdc5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xdc6: Push((int) 1)
0xdc7: IF (Stack[-1] == 0) GOTO 0xe39; Pop(1)

0xdc8: PushEmpty(string)
0xdc9: Stack[-1] = "Neutral"
0xdca: Call 0xe57

0xdcb: Pop(1)
0xdcc: Push((int) 10151)
0xdcd: @@ SetMessage(Stack[-1])
0xdce: Pop(1)
0xdcf: @@ ClearReplies()
0xdd0: Pop(0)
0xdd1: PushEmpty(bool)
0xdd2: Stack[-1] = (bool) 0
0xdd3: PushEmpty(bool, object)
0xdd4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdd5: Call 0x1797

0xdd6: Pop(1)
0xdd7: IF (Stack[-1] == 0) GOTO 0xdde; Pop(1)

0xdd8: PushEmpty(bool, object)
0xdd9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdda: Call 0x178b

0xddb: Pop(1)
0xddc: IF (Stack[-1] == 0) GOTO 0xdde; Pop(1)

0xddd: Stack[-1] = (bool) 1
0xdde: IF (Stack[-1] == 0) GOTO 0xde4; Pop(1)

0xddf: Push((int) 10152)
0xde0: Push((int) 11195)
0xde1: Push((int) 11194)
0xde2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde3: Pop(3)
0xde4: PushEmpty(bool)
0xde5: Stack[-1] = (bool) 0
0xde6: PushEmpty(bool, object)
0xde7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xde8: Call 0x17a3

0xde9: Pop(1)
0xdea: IF (Stack[-1] == 0) GOTO 0xdf1; Pop(1)

0xdeb: PushEmpty(bool, object)
0xdec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xded: Call 0x17af

0xdee: Pop(1)
0xdef: IF (Stack[-1] == 0) GOTO 0xdf1; Pop(1)

0xdf0: Stack[-1] = (bool) 1
0xdf1: IF (Stack[-1] == 0) GOTO 0xdf7; Pop(1)

0xdf2: Push((int) 10995)
0xdf3: Push((int) 12163)
0xdf4: Push((int) 12162)
0xdf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf6: Pop(3)
0xdf7: PushEmpty(bool)
0xdf8: Stack[-1] = (bool) 0
0xdf9: PushEmpty(bool, object)
0xdfa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdfb: Call 0x17d1

0xdfc: Pop(1)
0xdfd: IF (Stack[-1] == 0) GOTO 0xe04; Pop(1)

0xdfe: PushEmpty(bool, object)
0xdff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe00: Call 0x17c5

0xe01: Pop(1)
0xe02: IF (Stack[-1] == 0) GOTO 0xe04; Pop(1)

0xe03: Stack[-1] = (bool) 1
0xe04: IF (Stack[-1] == 0) GOTO 0xe0a; Pop(1)

0xe05: Push((int) 11435)
0xe06: Push((int) 12638)
0xe07: Push((int) 12637)
0xe08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe09: Pop(3)
0xe0a: PushEmpty(bool)
0xe0b: Stack[-1] = (bool) 0
0xe0c: PushEmpty(bool, object)
0xe0d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe0e: Call 0x17c5

0xe0f: Pop(1)
0xe10: IF (Stack[-1] == 0) GOTO 0xe18; Pop(1)

0xe11: PushEmpty(bool, object)
0xe12: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe13: Call 0x17dd

0xe14: Pop(1)
0xe15: Pop(1); Push((bool) Stack[-1] == 0)
0xe16: IF (Stack[-1] == 0) GOTO 0xe18; Pop(1)

0xe17: Stack[-1] = (bool) 1
0xe18: IF (Stack[-1] == 0) GOTO 0xe1e; Pop(1)

0xe19: Push((int) 11476)
0xe1a: Push((int) 12683)
0xe1b: Push((int) 12682)
0xe1c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1d: Pop(3)
0xe1e: PushEmpty(bool)
0xe1f: Stack[-1] = (bool) 0
0xe20: PushEmpty(bool, object)
0xe21: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe22: Call 0x17f5

0xe23: Pop(1)
0xe24: IF (Stack[-1] == 0) GOTO 0xe2b; Pop(1)

0xe25: PushEmpty(bool, object)
0xe26: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe27: Call 0x17e9

0xe28: Pop(1)
0xe29: IF (Stack[-1] == 0) GOTO 0xe2b; Pop(1)

0xe2a: Stack[-1] = (bool) 1
0xe2b: IF (Stack[-1] == 0) GOTO 0xe31; Pop(1)

0xe2c: Push((int) 11859)
0xe2d: Push((int) 13073)
0xe2e: Push((int) 13072)
0xe2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe30: Pop(3)
0xe31: Push((int) 11479)
0xe32: Push((int) -1)
0xe33: Push((int) 12685)
0xe34: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe35: Pop(3)
0xe36: GOTO 0xe39

0xe37: Return(); Pop(0)

0xe38: GOTO 0xdc6

0xe39: PushEmpty(bool)
0xe3a: Call 0x13ed

0xe3b: Pop(0)
0xe3c: IF (Stack[-1] == 0) GOTO 0xe48; Pop(1)

0xe3d: @ lshWaitForAnimEnd()
0xe3e: Pop(0)
0xe3f: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe40: IF (Stack[-1] == 0) GOTO 0xe42; Pop(1)

0xe41: GOTO 0xe47

0xe42: PushEmpty(string)
0xe43: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe44: Call 0x136b

0xe45: Pop(1)
0xe46: GOTO 0xe3d

0xe47: GOTO 0xe56

0xe48: Push("all")
0xe49: Push("idle")
0xe4a: @ PlayAnimation(Stack[-2], Stack[-1])
0xe4b: Pop(2)
0xe4c: @ WaitForAnimEnd()
0xe4d: Pop(0)
0xe4e: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe4f: IF (Stack[-1] == 0) GOTO 0xe51; Pop(1)

0xe50: GOTO 0xe56

0xe51: Push("all")
0xe52: Push("idle")
0xe53: @ PlayAnimation(Stack[-2], Stack[-1])
0xe54: Pop(2)
0xe55: GOTO 0xe4c

0xe56: Return(); Pop(0)

0xe57: PushEmpty()
0xe58: PushEmpty(bool)
0xe59: Call 0x13ed

0xe5a: Pop(0)
0xe5b: Pop(1); Push((bool) Stack[-1] == 0)
0xe5c: IF (Stack[-1] == 0) GOTO 0xe5e; Pop(1)

0xe5d: Return(); Pop(0)

0xe5e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe5f: IF (Stack[-1] == 0) GOTO 0xe61; Pop(1)

0xe60: Return(); Pop(0)

0xe61: PushEmpty(string)
0xe62: Stack[-1] = Stack[-2]
0xe63: Call 0x136b

0xe64: Pop(1)
0xe65: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe66: Return(); Pop(0)

0xe67: PushEmpty()
0xe68: Push((int) 1)
0xe69: IF (Stack[-1] == 0) GOTO 0x1183; Pop(1)

0xe6a: PushEmpty()
0xe6b: Call 0x137d

0xe6c: Pop(0)
0xe6d: Push((int) 12160)
0xe6e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe6f: IF (Stack[-1] == 0) GOTO 0xe7f; Pop(1)

0xe70: PushEmpty(object, object)
0xe71: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe72: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe73: Call 0x14fc

0xe74: Pop(2)
0xe75: PushEmpty(object, object)
0xe76: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe77: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe78: Call 0x1502

0xe79: Pop(2)
0xe7a: PushEmpty(object, object)
0xe7b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe7c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe7d: Call 0x14ec

0xe7e: Pop(2)
0xe7f: Push((int) 12161)
0xe80: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe81: IF (Stack[-1] == 0) GOTO 0xe91; Pop(1)

0xe82: PushEmpty(object, object)
0xe83: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe84: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe85: Call 0x14fc

0xe86: Pop(2)
0xe87: PushEmpty(object, object)
0xe88: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe89: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe8a: Call 0x1502

0xe8b: Pop(2)
0xe8c: PushEmpty(object, object)
0xe8d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe8e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe8f: Call 0x14ec

0xe90: Pop(2)
0xe91: Push((int) 12181)
0xe92: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe93: IF (Stack[-1] == 0) GOTO 0xe9e; Pop(1)

0xe94: PushEmpty(object, object)
0xe95: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe96: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe97: Call 0x1522

0xe98: Pop(2)
0xe99: PushEmpty(object, object)
0xe9a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe9b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe9c: Call 0x1528

0xe9d: Pop(2)
0xe9e: Push((int) 12182)
0xe9f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xea0: IF (Stack[-1] == 0) GOTO 0xeab; Pop(1)

0xea1: PushEmpty(object, object)
0xea2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xea3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xea4: Call 0x1522

0xea5: Pop(2)
0xea6: PushEmpty(object, object)
0xea7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xea8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xea9: Call 0x1528

0xeaa: Pop(2)
0xeab: Push((int) 12183)
0xeac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xead: IF (Stack[-1] == 0) GOTO 0xebd; Pop(1)

0xeae: PushEmpty(object, object)
0xeaf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeb1: Call 0x1522

0xeb2: Pop(2)
0xeb3: PushEmpty(object, object)
0xeb4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeb6: Call 0x1528

0xeb7: Pop(2)
0xeb8: PushEmpty(object, object)
0xeb9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xebb: Call 0x14dc

0xebc: Pop(2)
0xebd: Push((int) 12649)
0xebe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xebf: IF (Stack[-1] == 0) GOTO 0xee3; Pop(1)

0xec0: PushEmpty(object, object)
0xec1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xec2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec3: Call 0x1545

0xec4: Pop(2)
0xec5: PushEmpty(object, object)
0xec6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xec7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec8: Call 0x154b

0xec9: Pop(2)
0xeca: PushEmpty(object, object)
0xecb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xecc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xecd: Call 0x1551

0xece: Pop(2)
0xecf: PushEmpty(object, object)
0xed0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xed1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xed2: Call 0x16b9

0xed3: Pop(2)
0xed4: PushEmpty(object, object)
0xed5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xed6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xed7: Call 0x16a3

0xed8: Pop(2)
0xed9: PushEmpty(object, object)
0xeda: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xedb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xedc: Call 0x16ae

0xedd: Pop(2)
0xede: PushEmpty(object, object)
0xedf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xee0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xee1: Call 0x1401

0xee2: Pop(2)
0xee3: Push((int) 12650)
0xee4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xee5: IF (Stack[-1] == 0) GOTO 0xeeb; Pop(1)

0xee6: PushEmpty(object, object)
0xee7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xee8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xee9: Call 0x1545

0xeea: Pop(2)
0xeeb: Push((int) 12684)
0xeec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xeed: IF (Stack[-1] == 0) GOTO 0xf0c; Pop(1)

0xeee: PushEmpty(object, object)
0xeef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xef1: Call 0x154b

0xef2: Pop(2)
0xef3: PushEmpty(object, object)
0xef4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xef6: Call 0x1551

0xef7: Pop(2)
0xef8: PushEmpty(object, object)
0xef9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xefa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xefb: Call 0x16a3

0xefc: Pop(2)
0xefd: PushEmpty(object, object)
0xefe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf00: Call 0x16b9

0xf01: Pop(2)
0xf02: PushEmpty(object, object)
0xf03: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf04: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf05: Call 0x16ae

0xf06: Pop(2)
0xf07: PushEmpty(object, object)
0xf08: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf09: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0a: Call 0x1401

0xf0b: Pop(2)
0xf0c: Push((int) 13074)
0xf0d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf0e: IF (Stack[-1] == 0) GOTO 0xf14; Pop(1)

0xf0f: PushEmpty(object, object)
0xf10: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf11: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf12: Call 0x1595

0xf13: Pop(2)
0xf14: Push((int) 11193)
0xf15: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf16: IF (Stack[-1] == 0) GOTO 0xf86; Pop(1)

0xf17: PushEmpty(string)
0xf18: Stack[-1] = "Neutral"
0xf19: Call 0xe57

0xf1a: Pop(1)
0xf1b: Push((int) 10151)
0xf1c: @@ SetMessage(Stack[-1])
0xf1d: Pop(1)
0xf1e: @@ ClearReplies()
0xf1f: Pop(0)
0xf20: PushEmpty(bool)
0xf21: Stack[-1] = (bool) 0
0xf22: PushEmpty(bool, object)
0xf23: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf24: Call 0x1797

0xf25: Pop(1)
0xf26: IF (Stack[-1] == 0) GOTO 0xf2d; Pop(1)

0xf27: PushEmpty(bool, object)
0xf28: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf29: Call 0x178b

0xf2a: Pop(1)
0xf2b: IF (Stack[-1] == 0) GOTO 0xf2d; Pop(1)

0xf2c: Stack[-1] = (bool) 1
0xf2d: IF (Stack[-1] == 0) GOTO 0xf33; Pop(1)

0xf2e: Push((int) 10152)
0xf2f: Push((int) 11195)
0xf30: Push((int) 11194)
0xf31: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf32: Pop(3)
0xf33: PushEmpty(bool)
0xf34: Stack[-1] = (bool) 0
0xf35: PushEmpty(bool, object)
0xf36: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf37: Call 0x17a3

0xf38: Pop(1)
0xf39: IF (Stack[-1] == 0) GOTO 0xf40; Pop(1)

0xf3a: PushEmpty(bool, object)
0xf3b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf3c: Call 0x17af

0xf3d: Pop(1)
0xf3e: IF (Stack[-1] == 0) GOTO 0xf40; Pop(1)

0xf3f: Stack[-1] = (bool) 1
0xf40: IF (Stack[-1] == 0) GOTO 0xf46; Pop(1)

0xf41: Push((int) 10995)
0xf42: Push((int) 12163)
0xf43: Push((int) 12162)
0xf44: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf45: Pop(3)
0xf46: PushEmpty(bool)
0xf47: Stack[-1] = (bool) 0
0xf48: PushEmpty(bool, object)
0xf49: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf4a: Call 0x17d1

0xf4b: Pop(1)
0xf4c: IF (Stack[-1] == 0) GOTO 0xf53; Pop(1)

0xf4d: PushEmpty(bool, object)
0xf4e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf4f: Call 0x17c5

0xf50: Pop(1)
0xf51: IF (Stack[-1] == 0) GOTO 0xf53; Pop(1)

0xf52: Stack[-1] = (bool) 1
0xf53: IF (Stack[-1] == 0) GOTO 0xf59; Pop(1)

0xf54: Push((int) 11435)
0xf55: Push((int) 12638)
0xf56: Push((int) 12637)
0xf57: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf58: Pop(3)
0xf59: PushEmpty(bool)
0xf5a: Stack[-1] = (bool) 0
0xf5b: PushEmpty(bool, object)
0xf5c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf5d: Call 0x17c5

0xf5e: Pop(1)
0xf5f: IF (Stack[-1] == 0) GOTO 0xf67; Pop(1)

0xf60: PushEmpty(bool, object)
0xf61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf62: Call 0x17dd

0xf63: Pop(1)
0xf64: Pop(1); Push((bool) Stack[-1] == 0)
0xf65: IF (Stack[-1] == 0) GOTO 0xf67; Pop(1)

0xf66: Stack[-1] = (bool) 1
0xf67: IF (Stack[-1] == 0) GOTO 0xf6d; Pop(1)

0xf68: Push((int) 11476)
0xf69: Push((int) 12683)
0xf6a: Push((int) 12682)
0xf6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6c: Pop(3)
0xf6d: PushEmpty(bool)
0xf6e: Stack[-1] = (bool) 0
0xf6f: PushEmpty(bool, object)
0xf70: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf71: Call 0x17f5

0xf72: Pop(1)
0xf73: IF (Stack[-1] == 0) GOTO 0xf7a; Pop(1)

0xf74: PushEmpty(bool, object)
0xf75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf76: Call 0x17e9

0xf77: Pop(1)
0xf78: IF (Stack[-1] == 0) GOTO 0xf7a; Pop(1)

0xf79: Stack[-1] = (bool) 1
0xf7a: IF (Stack[-1] == 0) GOTO 0xf80; Pop(1)

0xf7b: Push((int) 11859)
0xf7c: Push((int) 13073)
0xf7d: Push((int) 13072)
0xf7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7f: Pop(3)
0xf80: Push((int) 11479)
0xf81: Push((int) -1)
0xf82: Push((int) 12685)
0xf83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf84: Pop(3)
0xf85: Return(); Pop(0)

0xf86: Push((int) 13073)
0xf87: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf88: IF (Stack[-1] == 0) GOTO 0xf98; Pop(1)

0xf89: PushEmpty(string)
0xf8a: Stack[-1] = "Neutral"
0xf8b: Call 0xe57

0xf8c: Pop(1)
0xf8d: Push((int) 11860)
0xf8e: @@ SetMessage(Stack[-1])
0xf8f: Pop(1)
0xf90: @@ ClearReplies()
0xf91: Pop(0)
0xf92: Push((int) 11861)
0xf93: Push((int) -1)
0xf94: Push((int) 13074)
0xf95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf96: Pop(3)
0xf97: Return(); Pop(0)

0xf98: Push((int) 12683)
0xf99: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf9a: IF (Stack[-1] == 0) GOTO 0xfaa; Pop(1)

0xf9b: PushEmpty(string)
0xf9c: Stack[-1] = "Neutral"
0xf9d: Call 0xe57

0xf9e: Pop(1)
0xf9f: Push((int) 11477)
0xfa0: @@ SetMessage(Stack[-1])
0xfa1: Pop(1)
0xfa2: @@ ClearReplies()
0xfa3: Pop(0)
0xfa4: Push((int) 11478)
0xfa5: Push((int) -1)
0xfa6: Push((int) 12684)
0xfa7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa8: Pop(3)
0xfa9: Return(); Pop(0)

0xfaa: Push((int) 12638)
0xfab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfac: IF (Stack[-1] == 0) GOTO 0xfc1; Pop(1)

0xfad: PushEmpty(string)
0xfae: Stack[-1] = "Neutral"
0xfaf: Call 0xe57

0xfb0: Pop(1)
0xfb1: Push((int) 11436)
0xfb2: @@ SetMessage(Stack[-1])
0xfb3: Pop(1)
0xfb4: @@ ClearReplies()
0xfb5: Pop(0)
0xfb6: Push((int) 11437)
0xfb7: Push((int) 12640)
0xfb8: Push((int) 12639)
0xfb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfba: Pop(3)
0xfbb: Push((int) 11450)
0xfbc: Push((int) 12654)
0xfbd: Push((int) 12653)
0xfbe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfbf: Pop(3)
0xfc0: Return(); Pop(0)

0xfc1: Push((int) 12654)
0xfc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc3: IF (Stack[-1] == 0) GOTO 0xfd3; Pop(1)

0xfc4: PushEmpty(string)
0xfc5: Stack[-1] = "Neutral"
0xfc6: Call 0xe57

0xfc7: Pop(1)
0xfc8: Push((int) 11451)
0xfc9: @@ SetMessage(Stack[-1])
0xfca: Pop(1)
0xfcb: @@ ClearReplies()
0xfcc: Pop(0)
0xfcd: Push((int) 11452)
0xfce: Push((int) 12656)
0xfcf: Push((int) 12655)
0xfd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd1: Pop(3)
0xfd2: Return(); Pop(0)

0xfd3: Push((int) 12656)
0xfd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfd5: IF (Stack[-1] == 0) GOTO 0xfe5; Pop(1)

0xfd6: PushEmpty(string)
0xfd7: Stack[-1] = "Neutral"
0xfd8: Call 0xe57

0xfd9: Pop(1)
0xfda: Push((int) 11453)
0xfdb: @@ SetMessage(Stack[-1])
0xfdc: Pop(1)
0xfdd: @@ ClearReplies()
0xfde: Pop(0)
0xfdf: Push((int) 11454)
0xfe0: Push((int) 12640)
0xfe1: Push((int) 12657)
0xfe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe3: Pop(3)
0xfe4: Return(); Pop(0)

0xfe5: Push((int) 12640)
0xfe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe7: IF (Stack[-1] == 0) GOTO 0xff7; Pop(1)

0xfe8: PushEmpty(string)
0xfe9: Stack[-1] = "Neutral"
0xfea: Call 0xe57

0xfeb: Pop(1)
0xfec: Push((int) 11438)
0xfed: @@ SetMessage(Stack[-1])
0xfee: Pop(1)
0xfef: @@ ClearReplies()
0xff0: Pop(0)
0xff1: Push((int) 11439)
0xff2: Push((int) 12642)
0xff3: Push((int) 12641)
0xff4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff5: Pop(3)
0xff6: Return(); Pop(0)

0xff7: Push((int) 12642)
0xff8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff9: IF (Stack[-1] == 0) GOTO 0x100e; Pop(1)

0xffa: PushEmpty(string)
0xffb: Stack[-1] = "Neutral"
0xffc: Call 0xe57

0xffd: Pop(1)
0xffe: Push((int) 11440)
0xfff: @@ SetMessage(Stack[-1])
0x1000: Pop(1)
0x1001: @@ ClearReplies()
0x1002: Pop(0)
0x1003: Push((int) 11441)
0x1004: Push((int) 12644)
0x1005: Push((int) 12643)
0x1006: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1007: Pop(3)
0x1008: Push((int) 11449)
0x1009: Push((int) 12644)
0x100a: Push((int) 12651)
0x100b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100c: Pop(3)
0x100d: Return(); Pop(0)

0x100e: Push((int) 12644)
0x100f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1010: IF (Stack[-1] == 0) GOTO 0x1020; Pop(1)

0x1011: PushEmpty(string)
0x1012: Stack[-1] = "Neutral"
0x1013: Call 0xe57

0x1014: Pop(1)
0x1015: Push((int) 11442)
0x1016: @@ SetMessage(Stack[-1])
0x1017: Pop(1)
0x1018: @@ ClearReplies()
0x1019: Pop(0)
0x101a: Push((int) 11443)
0x101b: Push((int) 12646)
0x101c: Push((int) 12645)
0x101d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101e: Pop(3)
0x101f: Return(); Pop(0)

0x1020: Push((int) 12646)
0x1021: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1022: IF (Stack[-1] == 0) GOTO 0x1032; Pop(1)

0x1023: PushEmpty(string)
0x1024: Stack[-1] = "Neutral"
0x1025: Call 0xe57

0x1026: Pop(1)
0x1027: Push((int) 11444)
0x1028: @@ SetMessage(Stack[-1])
0x1029: Pop(1)
0x102a: @@ ClearReplies()
0x102b: Pop(0)
0x102c: Push((int) 11445)
0x102d: Push((int) 12648)
0x102e: Push((int) 12647)
0x102f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1030: Pop(3)
0x1031: Return(); Pop(0)

0x1032: Push((int) 12648)
0x1033: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1034: IF (Stack[-1] == 0) GOTO 0x1049; Pop(1)

0x1035: PushEmpty(string)
0x1036: Stack[-1] = "Neutral"
0x1037: Call 0xe57

0x1038: Pop(1)
0x1039: Push((int) 11446)
0x103a: @@ SetMessage(Stack[-1])
0x103b: Pop(1)
0x103c: @@ ClearReplies()
0x103d: Pop(0)
0x103e: Push((int) 11447)
0x103f: Push((int) -1)
0x1040: Push((int) 12649)
0x1041: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1042: Pop(3)
0x1043: Push((int) 11448)
0x1044: Push((int) -1)
0x1045: Push((int) 12650)
0x1046: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1047: Pop(3)
0x1048: Return(); Pop(0)

0x1049: Push((int) 12163)
0x104a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x104b: IF (Stack[-1] == 0) GOTO 0x105b; Pop(1)

0x104c: PushEmpty(string)
0x104d: Stack[-1] = "Neutral"
0x104e: Call 0xe57

0x104f: Pop(1)
0x1050: Push((int) 10996)
0x1051: @@ SetMessage(Stack[-1])
0x1052: Pop(1)
0x1053: @@ ClearReplies()
0x1054: Pop(0)
0x1055: Push((int) 10997)
0x1056: Push((int) 12165)
0x1057: Push((int) 12164)
0x1058: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1059: Pop(3)
0x105a: Return(); Pop(0)

0x105b: Push((int) 12165)
0x105c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105d: IF (Stack[-1] == 0) GOTO 0x1072; Pop(1)

0x105e: PushEmpty(string)
0x105f: Stack[-1] = "Neutral"
0x1060: Call 0xe57

0x1061: Pop(1)
0x1062: Push((int) 10998)
0x1063: @@ SetMessage(Stack[-1])
0x1064: Pop(1)
0x1065: @@ ClearReplies()
0x1066: Pop(0)
0x1067: Push((int) 10999)
0x1068: Push((int) 12167)
0x1069: Push((int) 12166)
0x106a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106b: Pop(3)
0x106c: Push((int) 11001)
0x106d: Push((int) 12170)
0x106e: Push((int) 12168)
0x106f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1070: Pop(3)
0x1071: Return(); Pop(0)

0x1072: Push((int) 12170)
0x1073: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1074: IF (Stack[-1] == 0) GOTO 0x1089; Pop(1)

0x1075: PushEmpty(string)
0x1076: Stack[-1] = "Neutral"
0x1077: Call 0xe57

0x1078: Pop(1)
0x1079: Push((int) 11002)
0x107a: @@ SetMessage(Stack[-1])
0x107b: Pop(1)
0x107c: @@ ClearReplies()
0x107d: Pop(0)
0x107e: Push((int) 11003)
0x107f: Push((int) 12167)
0x1080: Push((int) 12171)
0x1081: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1082: Pop(3)
0x1083: Push((int) 11004)
0x1084: Push((int) 12167)
0x1085: Push((int) 12172)
0x1086: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1087: Pop(3)
0x1088: Return(); Pop(0)

0x1089: Push((int) 12167)
0x108a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108b: IF (Stack[-1] == 0) GOTO 0x10a0; Pop(1)

0x108c: PushEmpty(string)
0x108d: Stack[-1] = "Neutral"
0x108e: Call 0xe57

0x108f: Pop(1)
0x1090: Push((int) 11000)
0x1091: @@ SetMessage(Stack[-1])
0x1092: Pop(1)
0x1093: @@ ClearReplies()
0x1094: Pop(0)
0x1095: Push((int) 11005)
0x1096: Push((int) 12176)
0x1097: Push((int) 12175)
0x1098: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1099: Pop(3)
0x109a: Push((int) 11008)
0x109b: Push((int) 12176)
0x109c: Push((int) 12178)
0x109d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109e: Pop(3)
0x109f: Return(); Pop(0)

0x10a0: Push((int) 12176)
0x10a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a2: IF (Stack[-1] == 0) GOTO 0x10b7; Pop(1)

0x10a3: PushEmpty(string)
0x10a4: Stack[-1] = "Neutral"
0x10a5: Call 0xe57

0x10a6: Pop(1)
0x10a7: Push((int) 11006)
0x10a8: @@ SetMessage(Stack[-1])
0x10a9: Pop(1)
0x10aa: @@ ClearReplies()
0x10ab: Pop(0)
0x10ac: Push((int) 11007)
0x10ad: Push((int) 12180)
0x10ae: Push((int) 12177)
0x10af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b0: Pop(3)
0x10b1: Push((int) 11012)
0x10b2: Push((int) -1)
0x10b3: Push((int) 12183)
0x10b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b5: Pop(3)
0x10b6: Return(); Pop(0)

0x10b7: Push((int) 12180)
0x10b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b9: IF (Stack[-1] == 0) GOTO 0x10ce; Pop(1)

0x10ba: PushEmpty(string)
0x10bb: Stack[-1] = "Neutral"
0x10bc: Call 0xe57

0x10bd: Pop(1)
0x10be: Push((int) 11009)
0x10bf: @@ SetMessage(Stack[-1])
0x10c0: Pop(1)
0x10c1: @@ ClearReplies()
0x10c2: Pop(0)
0x10c3: Push((int) 11010)
0x10c4: Push((int) -1)
0x10c5: Push((int) 12181)
0x10c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c7: Pop(3)
0x10c8: Push((int) 11011)
0x10c9: Push((int) -1)
0x10ca: Push((int) 12182)
0x10cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10cc: Pop(3)
0x10cd: Return(); Pop(0)

0x10ce: Push((int) 11195)
0x10cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10d0: IF (Stack[-1] == 0) GOTO 0x10e5; Pop(1)

0x10d1: PushEmpty(string)
0x10d2: Stack[-1] = "Neutral"
0x10d3: Call 0xe57

0x10d4: Pop(1)
0x10d5: Push((int) 10153)
0x10d6: @@ SetMessage(Stack[-1])
0x10d7: Pop(1)
0x10d8: @@ ClearReplies()
0x10d9: Pop(0)
0x10da: Push((int) 10977)
0x10db: Push((int) 12140)
0x10dc: Push((int) 12139)
0x10dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10de: Pop(3)
0x10df: Push((int) 10154)
0x10e0: Push((int) 11197)
0x10e1: Push((int) 11196)
0x10e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e3: Pop(3)
0x10e4: Return(); Pop(0)

0x10e5: Push((int) 11197)
0x10e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e7: IF (Stack[-1] == 0) GOTO 0x10fc; Pop(1)

0x10e8: PushEmpty(string)
0x10e9: Stack[-1] = "Neutral"
0x10ea: Call 0xe57

0x10eb: Pop(1)
0x10ec: Push((int) 10155)
0x10ed: @@ SetMessage(Stack[-1])
0x10ee: Pop(1)
0x10ef: @@ ClearReplies()
0x10f0: Pop(0)
0x10f1: Push((int) 10982)
0x10f2: Push((int) 12145)
0x10f3: Push((int) 12144)
0x10f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f5: Pop(3)
0x10f6: Push((int) 10986)
0x10f7: Push((int) 12149)
0x10f8: Push((int) 12148)
0x10f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10fa: Pop(3)
0x10fb: Return(); Pop(0)

0x10fc: Push((int) 12149)
0x10fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10fe: IF (Stack[-1] == 0) GOTO 0x110e; Pop(1)

0x10ff: PushEmpty(string)
0x1100: Stack[-1] = "Neutral"
0x1101: Call 0xe57

0x1102: Pop(1)
0x1103: Push((int) 10987)
0x1104: @@ SetMessage(Stack[-1])
0x1105: Pop(1)
0x1106: @@ ClearReplies()
0x1107: Pop(0)
0x1108: Push((int) 10988)
0x1109: Push((int) 12143)
0x110a: Push((int) 12150)
0x110b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110c: Pop(3)
0x110d: Return(); Pop(0)

0x110e: Push((int) 12145)
0x110f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1110: IF (Stack[-1] == 0) GOTO 0x1125; Pop(1)

0x1111: PushEmpty(string)
0x1112: Stack[-1] = "Neutral"
0x1113: Call 0xe57

0x1114: Pop(1)
0x1115: Push((int) 10983)
0x1116: @@ SetMessage(Stack[-1])
0x1117: Pop(1)
0x1118: @@ ClearReplies()
0x1119: Pop(0)
0x111a: Push((int) 10984)
0x111b: Push((int) 12143)
0x111c: Push((int) 12146)
0x111d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111e: Pop(3)
0x111f: Push((int) 10985)
0x1120: Push((int) 12143)
0x1121: Push((int) 12147)
0x1122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1123: Pop(3)
0x1124: Return(); Pop(0)

0x1125: Push((int) 12140)
0x1126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1127: IF (Stack[-1] == 0) GOTO 0x1137; Pop(1)

0x1128: PushEmpty(string)
0x1129: Stack[-1] = "Neutral"
0x112a: Call 0xe57

0x112b: Pop(1)
0x112c: Push((int) 10978)
0x112d: @@ SetMessage(Stack[-1])
0x112e: Pop(1)
0x112f: @@ ClearReplies()
0x1130: Pop(0)
0x1131: Push((int) 10980)
0x1132: Push((int) 12143)
0x1133: Push((int) 12142)
0x1134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1135: Pop(3)
0x1136: Return(); Pop(0)

0x1137: Push((int) 12143)
0x1138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1139: IF (Stack[-1] == 0) GOTO 0x114e; Pop(1)

0x113a: PushEmpty(string)
0x113b: Stack[-1] = "Neutral"
0x113c: Call 0xe57

0x113d: Pop(1)
0x113e: Push((int) 10981)
0x113f: @@ SetMessage(Stack[-1])
0x1140: Pop(1)
0x1141: @@ ClearReplies()
0x1142: Pop(0)
0x1143: Push((int) 10159)
0x1144: Push((int) 12154)
0x1145: Push((int) 11201)
0x1146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1147: Pop(3)
0x1148: Push((int) 10990)
0x1149: Push((int) 12154)
0x114a: Push((int) 12155)
0x114b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114c: Pop(3)
0x114d: Return(); Pop(0)

0x114e: Push((int) 12154)
0x114f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1150: IF (Stack[-1] == 0) GOTO 0x1160; Pop(1)

0x1151: PushEmpty(string)
0x1152: Stack[-1] = "Neutral"
0x1153: Call 0xe57

0x1154: Pop(1)
0x1155: Push((int) 10989)
0x1156: @@ SetMessage(Stack[-1])
0x1157: Pop(1)
0x1158: @@ ClearReplies()
0x1159: Pop(0)
0x115a: Push((int) 10992)
0x115b: Push((int) 12157)
0x115c: Push((int) 12158)
0x115d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115e: Pop(3)
0x115f: Return(); Pop(0)

0x1160: Push((int) 12157)
0x1161: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1162: IF (Stack[-1] == 0) GOTO 0x1177; Pop(1)

0x1163: PushEmpty(string)
0x1164: Stack[-1] = "Neutral"
0x1165: Call 0xe57

0x1166: Pop(1)
0x1167: Push((int) 10991)
0x1168: @@ SetMessage(Stack[-1])
0x1169: Pop(1)
0x116a: @@ ClearReplies()
0x116b: Pop(0)
0x116c: Push((int) 10993)
0x116d: Push((int) -1)
0x116e: Push((int) 12160)
0x116f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1170: Pop(3)
0x1171: Push((int) 10994)
0x1172: Push((int) -1)
0x1173: Push((int) 12161)
0x1174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1175: Pop(3)
0x1176: Return(); Pop(0)

0x1177: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1178: PushEmpty(bool)
0x1179: Call 0x13ed

0x117a: Pop(0)
0x117b: IF (Stack[-1] == 0) GOTO 0x117f; Pop(1)

0x117c: @ lshStopAnimation()
0x117d: Pop(0)
0x117e: GOTO 0x1181

0x117f: @ StopAnimation()
0x1180: Pop(0)
0x1181: Return(); Pop(0)

0x1182: GOTO 0xe68

0x1183: Return(); Pop(0)

0x1184: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1185: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1186: PushEmpty(bool, object)
0x1187: Stack[-1] = Stack[-11]
0x1188: Call 0x132f

0x1189: Pop(1)
0x118a: Pop(1); Push((bool) Stack[-1] == 0)
0x118b: IF (Stack[-1] == 0) GOTO 0x118e; Pop(1)

0x118c: Stack[-10] = (int) -2
0x118d: Return(); Pop(8)

0x118e: @ CreateDialog(Stack[-4])
0x118f: Pop(0)
0x1190: PushEmpty(int)
0x1191: Call 0x13e9

0x1192: Pop(0)
0x1193: @@ SetNPCName(Stack[-1])
0x1194: Pop(1)
0x1195: PushEmpty(string)
0x1196: Call 0x13eb

0x1197: Pop(0)
0x1198: @@ SetPhoto(Stack[-1])
0x1199: Pop(1)
0x119a: PushEmpty(int)
0x119b: Call 0x19a5

0x119c: Pop(0)
0x119d: @@ SetPlayerName(Stack[-1])
0x119e: Pop(1)
0x119f: Stack[-2] = (int) -1
0x11a0: @ IsOverrideActive(Stack[-3])
0x11a1: Pop(0)
0x11a2: Push(Stack[-3])
0x11a3: IF (Stack[-1] == 0) GOTO 0x11a6; Pop(1)

0x11a4: Stack[-10] = (int) -2
0x11a5: Return(); Pop(8)

0x11a6: @ DoDialog(Stack[-4])
0x11a7: Pop(0)
0x11a8: PushEmpty(object, object)
0x11a9: Stack[-2] = Stack[-11]
0x11aa: Stack[-1] = Stack[-6]
0x11ab: Push(-2, 4); TaskCall(13)
0x11ac: Call 0x11c3

0x11ad: Pop(-2, 4); TaskReturn
0x11ae: Pop(2)
0x11af: @@ IsDialogEnd(Stack[-1])
0x11b0: Pop(0)
0x11b1: Pop(0); Push((bool) Stack[-1] == 0)
0x11b2: IF (Stack[-1] == 0) GOTO 0x11b8; Pop(1)

0x11b3: @ sync()
0x11b4: Pop(0)
0x11b5: @@ IsDialogEnd(Stack[-1])
0x11b6: Pop(0)
0x11b7: GOTO 0x11b1

0x11b8: PushEmpty(object)
0x11b9: Stack[-1] = Stack[-10]
0x11ba: Call 0x1367

0x11bb: Pop(1)
0x11bc: @ StopDialog(Stack[-4])
0x11bd: Pop(0)
0x11be: @@ GetReturnValue(Stack[-2])
0x11bf: Pop(0)
0x11c0: Stack[-10] = Stack[-2]
0x11c1: Return(); Pop(8)

0x11c2: Stack[-4] = 0
0x11c3: PushEmpty()
0x11c4: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x11c5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x11c6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x11c7: Push((int) 1)
0x11c8: IF (Stack[-1] == 0) GOTO 0x11e4; Pop(1)

0x11c9: PushEmpty(string)
0x11ca: Stack[-1] = "Neutral"
0x11cb: Call 0x1202

0x11cc: Pop(1)
0x11cd: Push((int) 11662)
0x11ce: @@ SetMessage(Stack[-1])
0x11cf: Pop(1)
0x11d0: @@ ClearReplies()
0x11d1: Pop(0)
0x11d2: PushEmpty(bool, object)
0x11d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11d4: Call 0x1801

0x11d5: Pop(1)
0x11d6: IF (Stack[-1] == 0) GOTO 0x11dc; Pop(1)

0x11d7: Push((int) 11663)
0x11d8: Push((int) 12863)
0x11d9: Push((int) 12862)
0x11da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11db: Pop(3)
0x11dc: Push((int) 11960)
0x11dd: Push((int) -1)
0x11de: Push((int) 13174)
0x11df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e0: Pop(3)
0x11e1: GOTO 0x11e4

0x11e2: Return(); Pop(0)

0x11e3: GOTO 0x11c7

0x11e4: PushEmpty(bool)
0x11e5: Call 0x13ed

0x11e6: Pop(0)
0x11e7: IF (Stack[-1] == 0) GOTO 0x11f3; Pop(1)

0x11e8: @ lshWaitForAnimEnd()
0x11e9: Pop(0)
0x11ea: Push( Stack[3 + Tasks[-1].StackPointer] )
0x11eb: IF (Stack[-1] == 0) GOTO 0x11ed; Pop(1)

0x11ec: GOTO 0x11f2

0x11ed: PushEmpty(string)
0x11ee: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x11ef: Call 0x136b

0x11f0: Pop(1)
0x11f1: GOTO 0x11e8

0x11f2: GOTO 0x1201

0x11f3: Push("all")
0x11f4: Push("idle")
0x11f5: @ PlayAnimation(Stack[-2], Stack[-1])
0x11f6: Pop(2)
0x11f7: @ WaitForAnimEnd()
0x11f8: Pop(0)
0x11f9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x11fa: IF (Stack[-1] == 0) GOTO 0x11fc; Pop(1)

0x11fb: GOTO 0x1201

0x11fc: Push("all")
0x11fd: Push("idle")
0x11fe: @ PlayAnimation(Stack[-2], Stack[-1])
0x11ff: Pop(2)
0x1200: GOTO 0x11f7

0x1201: Return(); Pop(0)

0x1202: PushEmpty()
0x1203: PushEmpty(bool)
0x1204: Call 0x13ed

0x1205: Pop(0)
0x1206: Pop(1); Push((bool) Stack[-1] == 0)
0x1207: IF (Stack[-1] == 0) GOTO 0x1209; Pop(1)

0x1208: Return(); Pop(0)

0x1209: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x120a: IF (Stack[-1] == 0) GOTO 0x120c; Pop(1)

0x120b: Return(); Pop(0)

0x120c: PushEmpty(string)
0x120d: Stack[-1] = Stack[-2]
0x120e: Call 0x136b

0x120f: Pop(1)
0x1210: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1211: Return(); Pop(0)

0x1212: PushEmpty()
0x1213: Push((int) 1)
0x1214: IF (Stack[-1] == 0) GOTO 0x131d; Pop(1)

0x1215: PushEmpty()
0x1216: Call 0x137d

0x1217: Pop(0)
0x1218: Push((int) 12878)
0x1219: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x121a: IF (Stack[-1] == 0) GOTO 0x1220; Pop(1)

0x121b: PushEmpty(object, object)
0x121c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x121d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x121e: Call 0x159b

0x121f: Pop(2)
0x1220: Push((int) 12861)
0x1221: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1222: IF (Stack[-1] == 0) GOTO 0x123c; Pop(1)

0x1223: PushEmpty(string)
0x1224: Stack[-1] = "Neutral"
0x1225: Call 0x1202

0x1226: Pop(1)
0x1227: Push((int) 11662)
0x1228: @@ SetMessage(Stack[-1])
0x1229: Pop(1)
0x122a: @@ ClearReplies()
0x122b: Pop(0)
0x122c: PushEmpty(bool, object)
0x122d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x122e: Call 0x1801

0x122f: Pop(1)
0x1230: IF (Stack[-1] == 0) GOTO 0x1236; Pop(1)

0x1231: Push((int) 11663)
0x1232: Push((int) 12863)
0x1233: Push((int) 12862)
0x1234: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1235: Pop(3)
0x1236: Push((int) 11960)
0x1237: Push((int) -1)
0x1238: Push((int) 13174)
0x1239: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123a: Pop(3)
0x123b: Return(); Pop(0)

0x123c: Push((int) 12863)
0x123d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123e: IF (Stack[-1] == 0) GOTO 0x1253; Pop(1)

0x123f: PushEmpty(string)
0x1240: Stack[-1] = "Neutral"
0x1241: Call 0x1202

0x1242: Pop(1)
0x1243: Push((int) 11664)
0x1244: @@ SetMessage(Stack[-1])
0x1245: Pop(1)
0x1246: @@ ClearReplies()
0x1247: Pop(0)
0x1248: Push((int) 11680)
0x1249: Push((int) 12867)
0x124a: Push((int) 12879)
0x124b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124c: Pop(3)
0x124d: Push((int) 11665)
0x124e: Push((int) 12865)
0x124f: Push((int) 12864)
0x1250: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1251: Pop(3)
0x1252: Return(); Pop(0)

0x1253: Push((int) 12865)
0x1254: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1255: IF (Stack[-1] == 0) GOTO 0x1265; Pop(1)

0x1256: PushEmpty(string)
0x1257: Stack[-1] = "Neutral"
0x1258: Call 0x1202

0x1259: Pop(1)
0x125a: Push((int) 11666)
0x125b: @@ SetMessage(Stack[-1])
0x125c: Pop(1)
0x125d: @@ ClearReplies()
0x125e: Pop(0)
0x125f: Push((int) 11667)
0x1260: Push((int) 12867)
0x1261: Push((int) 12866)
0x1262: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1263: Pop(3)
0x1264: Return(); Pop(0)

0x1265: Push((int) 12867)
0x1266: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1267: IF (Stack[-1] == 0) GOTO 0x127c; Pop(1)

0x1268: PushEmpty(string)
0x1269: Stack[-1] = "Neutral"
0x126a: Call 0x1202

0x126b: Pop(1)
0x126c: Push((int) 11668)
0x126d: @@ SetMessage(Stack[-1])
0x126e: Pop(1)
0x126f: @@ ClearReplies()
0x1270: Pop(0)
0x1271: Push((int) 11669)
0x1272: Push((int) 12869)
0x1273: Push((int) 12868)
0x1274: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1275: Pop(3)
0x1276: Push((int) 11684)
0x1277: Push((int) 12886)
0x1278: Push((int) 12885)
0x1279: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x127a: Pop(3)
0x127b: Return(); Pop(0)

0x127c: Push((int) 12886)
0x127d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127e: IF (Stack[-1] == 0) GOTO 0x128e; Pop(1)

0x127f: PushEmpty(string)
0x1280: Stack[-1] = "Neutral"
0x1281: Call 0x1202

0x1282: Pop(1)
0x1283: Push((int) 11685)
0x1284: @@ SetMessage(Stack[-1])
0x1285: Pop(1)
0x1286: @@ ClearReplies()
0x1287: Pop(0)
0x1288: Push((int) 11686)
0x1289: Push((int) 12888)
0x128a: Push((int) 12887)
0x128b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128c: Pop(3)
0x128d: Return(); Pop(0)

0x128e: Push((int) 12888)
0x128f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1290: IF (Stack[-1] == 0) GOTO 0x12a0; Pop(1)

0x1291: PushEmpty(string)
0x1292: Stack[-1] = "Neutral"
0x1293: Call 0x1202

0x1294: Pop(1)
0x1295: Push((int) 11687)
0x1296: @@ SetMessage(Stack[-1])
0x1297: Pop(1)
0x1298: @@ ClearReplies()
0x1299: Pop(0)
0x129a: Push((int) 11688)
0x129b: Push((int) 12869)
0x129c: Push((int) 12889)
0x129d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129e: Pop(3)
0x129f: Return(); Pop(0)

0x12a0: Push((int) 12869)
0x12a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a2: IF (Stack[-1] == 0) GOTO 0x12b7; Pop(1)

0x12a3: PushEmpty(string)
0x12a4: Stack[-1] = "Neutral"
0x12a5: Call 0x1202

0x12a6: Pop(1)
0x12a7: Push((int) 11670)
0x12a8: @@ SetMessage(Stack[-1])
0x12a9: Pop(1)
0x12aa: @@ ClearReplies()
0x12ab: Pop(0)
0x12ac: Push((int) 11673)
0x12ad: Push((int) 12873)
0x12ae: Push((int) 12872)
0x12af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b0: Pop(3)
0x12b1: Push((int) 11671)
0x12b2: Push((int) 12871)
0x12b3: Push((int) 12870)
0x12b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b5: Pop(3)
0x12b6: Return(); Pop(0)

0x12b7: Push((int) 12871)
0x12b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b9: IF (Stack[-1] == 0) GOTO 0x12c9; Pop(1)

0x12ba: PushEmpty(string)
0x12bb: Stack[-1] = "Neutral"
0x12bc: Call 0x1202

0x12bd: Pop(1)
0x12be: Push((int) 11672)
0x12bf: @@ SetMessage(Stack[-1])
0x12c0: Pop(1)
0x12c1: @@ ClearReplies()
0x12c2: Pop(0)
0x12c3: Push((int) 11681)
0x12c4: Push((int) 12882)
0x12c5: Push((int) 12881)
0x12c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c7: Pop(3)
0x12c8: Return(); Pop(0)

0x12c9: Push((int) 12882)
0x12ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12cb: IF (Stack[-1] == 0) GOTO 0x12db; Pop(1)

0x12cc: PushEmpty(string)
0x12cd: Stack[-1] = "Neutral"
0x12ce: Call 0x1202

0x12cf: Pop(1)
0x12d0: Push((int) 11682)
0x12d1: @@ SetMessage(Stack[-1])
0x12d2: Pop(1)
0x12d3: @@ ClearReplies()
0x12d4: Pop(0)
0x12d5: Push((int) 11683)
0x12d6: Push((int) 12873)
0x12d7: Push((int) 12883)
0x12d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d9: Pop(3)
0x12da: Return(); Pop(0)

0x12db: Push((int) 12873)
0x12dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12dd: IF (Stack[-1] == 0) GOTO 0x12ed; Pop(1)

0x12de: PushEmpty(string)
0x12df: Stack[-1] = "Neutral"
0x12e0: Call 0x1202

0x12e1: Pop(1)
0x12e2: Push((int) 11674)
0x12e3: @@ SetMessage(Stack[-1])
0x12e4: Pop(1)
0x12e5: @@ ClearReplies()
0x12e6: Pop(0)
0x12e7: Push((int) 11675)
0x12e8: Push((int) 12875)
0x12e9: Push((int) 12874)
0x12ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12eb: Pop(3)
0x12ec: Return(); Pop(0)

0x12ed: Push((int) 12875)
0x12ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12ef: IF (Stack[-1] == 0) GOTO 0x12ff; Pop(1)

0x12f0: PushEmpty(string)
0x12f1: Stack[-1] = "Neutral"
0x12f2: Call 0x1202

0x12f3: Pop(1)
0x12f4: Push((int) 11676)
0x12f5: @@ SetMessage(Stack[-1])
0x12f6: Pop(1)
0x12f7: @@ ClearReplies()
0x12f8: Pop(0)
0x12f9: Push((int) 11677)
0x12fa: Push((int) 12877)
0x12fb: Push((int) 12876)
0x12fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12fd: Pop(3)
0x12fe: Return(); Pop(0)

0x12ff: Push((int) 12877)
0x1300: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1301: IF (Stack[-1] == 0) GOTO 0x1311; Pop(1)

0x1302: PushEmpty(string)
0x1303: Stack[-1] = "Neutral"
0x1304: Call 0x1202

0x1305: Pop(1)
0x1306: Push((int) 11678)
0x1307: @@ SetMessage(Stack[-1])
0x1308: Pop(1)
0x1309: @@ ClearReplies()
0x130a: Pop(0)
0x130b: Push((int) 11679)
0x130c: Push((int) -1)
0x130d: Push((int) 12878)
0x130e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x130f: Pop(3)
0x1310: Return(); Pop(0)

0x1311: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1312: PushEmpty(bool)
0x1313: Call 0x13ed

0x1314: Pop(0)
0x1315: IF (Stack[-1] == 0) GOTO 0x1319; Pop(1)

0x1316: @ lshStopAnimation()
0x1317: Pop(0)
0x1318: GOTO 0x131b

0x1319: @ StopAnimation()
0x131a: Pop(0)
0x131b: Return(); Pop(0)

0x131c: GOTO 0x1213

0x131d: Return(); Pop(0)

0x131e: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x131f: @@ GetPosition(Stack[-4])
0x1320: Pop(0)
0x1321: @ GetPosition(Stack[-3])
0x1322: Pop(0)
0x1323: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x1324: Push(CvectorIndex(Stack[-2], 0))
0x1325: Push(CvectorIndex(Stack[-3], 2))
0x1326: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x1327: Pop(2)
0x1328: Stack[-10] = Stack[-1]
0x1329: Return(); Pop(8)

0x132a: PushEmpty(bool, bool)
0x132b: @ IsLoaded(Stack[-1])
0x132c: Pop(0)
0x132d: Stack[-3] = Stack[-1]
0x132e: Return(); Pop(2)

0x132f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1330: @@ GetPosition(Stack[-7])
0x1331: Pop(0)
0x1332: @@ GetEyesHeight(Stack[-8])
0x1333: Pop(0)
0x1334: Push(CvectorIndex(Stack[-7], 1))
0x1335: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1336: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1337: @ GetPosition(Stack[-6])
0x1338: Pop(0)
0x1339: @ GetEyesHeight(Stack[-8])
0x133a: Pop(0)
0x133b: Push(CvectorIndex(Stack[-6], 1))
0x133c: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x133d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x133e: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x133f: Push(CvectorIndex(Stack[-5], 1))
0x1340: Stack[-1] = (int) 0
0x1341: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1342: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1343: Pop(1); Push(Sqrt(Stack[-1]))
0x1344: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1345: Stack[-4] = -Stack[-5]; Pop(0);
0x1346: Push((int) 70)
0x1347: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1348: PushEmpty(cvector, cvector)
0x1349: Push(CVector(0.0, 1.0, 0.0))
0x134a: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x134b: Call 0x1384

0x134c: Pop(1)
0x134d: Push((int) 25)
0x134e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x134f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1350: Push(CVector(0.0, 10.0, 0.0))
0x1351: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1352: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1353: @ IsOverrideActive(Stack[-1])
0x1354: Pop(0)
0x1355: Push(Stack[-1])
0x1356: IF (Stack[-1] == 0) GOTO 0x1359; Pop(1)

0x1357: Stack[-18] = (bool) 0
0x1358: Return(); Pop(16)

0x1359: @ StopWorld()
0x135a: Pop(0)
0x135b: @ CameraTransit(Stack[-2], Stack[-4])
0x135c: Pop(0)
0x135d: Push(CvectorIndex(Stack[-3], 0))
0x135e: Push(CvectorIndex(Stack[-4], 2))
0x135f: @ Rotate(Stack[-2], Stack[-1])
0x1360: Pop(2)
0x1361: @ CameraWaitForPlayFinish()
0x1362: Pop(0)
0x1363: @ ResumeWorld()
0x1364: Pop(0)
0x1365: Stack[-18] = (bool) 1
0x1366: Return(); Pop(16)

0x1367: PushEmpty()
0x1368: @ CameraSwitchToNormal()
0x1369: Pop(0)
0x136a: Return(); Pop(0)

0x136b: PushEmpty(float, float, float, float)
0x136c: Push("playing ")
0x136d: Pop(1); Push(Stack[-1] + Stack[-6]);
0x136e: @ Trace(Stack[-1])
0x136f: Pop(1)
0x1370: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x1371: Pop(0)
0x1372: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x1373: Pop(0)
0x1374: Push("start: ")
0x1375: Pop(1); Push(Stack[-1] + Stack[-3]);
0x1376: @ Trace(Stack[-1])
0x1377: Pop(1)
0x1378: Push("end: ")
0x1379: Pop(1); Push(Stack[-1] + Stack[-2]);
0x137a: @ Trace(Stack[-1])
0x137b: Pop(1)
0x137c: Return(); Pop(4)

0x137d: PushEmpty(bool)
0x137e: Call 0x13ed

0x137f: Pop(0)
0x1380: IF (Stack[-1] == 0) GOTO 0x1383; Pop(1)

0x1381: @ lshStopSpeech()
0x1382: Pop(0)
0x1383: Return(); Pop(0)

0x1384: PushEmpty(float, float)
0x1385: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1386: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1387: Push((float)0.0)
0x1388: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1389: IF (Stack[-1] == 0) GOTO 0x138c; Pop(1)

0x138a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x138b: Return(); Pop(2)

0x138c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x138d: Return(); Pop(2)

0x138e: PushEmpty(int, int)
0x138f: @ GetVariable(Stack[-3], Stack[-1])
0x1390: Pop(0)
0x1391: Stack[-4] = Stack[-1]
0x1392: Return(); Pop(2)

0x1393: PushEmpty(object, object, object, object)
0x1394: @ GetMainOutdoorScene(Stack[-2])
0x1395: Pop(0)
0x1396: Push(".bin")
0x1397: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1398: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x1399: Pop(1)
0x139a: Stack[-6] = Stack[-1]
0x139b: Return(); Pop(4)

0x139c: Stack[-1] = 0
0x139d: Stack[-2] = 0
0x139e: PushEmpty(int, int, bool, int, int, bool)
0x139f: @@ GetItemID(Stack[-3])
0x13a0: Pop(0)
0x13a1: Push("Category")
0x13a2: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x13a3: Pop(1)
0x13a4: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x13a5: Pop(0)
0x13a6: Pop(0); Push((bool) Stack[-1] == 0)
0x13a7: IF (Stack[-1] == 0) GOTO 0x13aa; Pop(1)

0x13a8: @@ DropItems(Stack[-8], Stack[-7])
0x13a9: Pop(0)
0x13aa: Return(); Pop(6)

0x13ab: PushEmpty(object, object)
0x13ac: @ CreateInvItem(Stack[-1])
0x13ad: Pop(0)
0x13ae: @@ SetItemName(Stack[-4])
0x13af: Pop(0)
0x13b0: PushEmpty(object, object, int)
0x13b1: Stack[-3] = Stack[-8]
0x13b2: Stack[-2] = Stack[-4]
0x13b3: Stack[-1] = Stack[-6]
0x13b4: Call 0x139e

0x13b5: Pop(3)
0x13b6: Return(); Pop(2)

0x13b7: Stack[-1] = 0
0x13b8: PushEmpty(object, object)
0x13b9: @ FindActor(Stack[-1], Stack[-4])
0x13ba: Pop(0)
0x13bb: Pop(0); Push((bool) Stack[-1] == 0)
0x13bc: IF (Stack[-1] == 0) GOTO 0x13bf; Pop(1)

0x13bd: Stack[-5] = (bool) 0
0x13be: Return(); Pop(2)

0x13bf: @ Trigger(Stack[-1], Stack[-3])
0x13c0: Pop(0)
0x13c1: Stack[-5] = (bool) 1
0x13c2: Return(); Pop(2)

0x13c3: Stack[-1] = 0
0x13c4: PushEmpty(float, float)
0x13c5: @ GetGameTime(Stack[-1])
0x13c6: Pop(0)
0x13c7: Stack[-3] = Stack[-1]
0x13c8: Return(); Pop(2)

0x13c9: PushEmpty(float, float)
0x13ca: @ GetGameTime(Stack[-1])
0x13cb: Pop(0)
0x13cc: Push((int) 1)
0x13cd: PushEmpty(int)
0x13ce: Push((int) 24)
0x13cf: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x13d0: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x13d1: Return(); Pop(2)

0x13d2: PushEmpty(float, float)
0x13d3: @ GetGameTime(Stack[-1])
0x13d4: Pop(0)
0x13d5: PushEmpty(int)
0x13d6: Stack[-1] = Stack[-2]
0x13d7: Push((int) 24)
0x13d8: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x13d9: Return(); Pop(2)

0x13da: PushEmpty()
0x13db: PushEmpty(int)
0x13dc: Call 0x13c9

0x13dd: Pop(0)
0x13de: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x13df: Return(); Pop(0)

0x13e0: PushEmpty(bool, bool)
0x13e1: PushEmpty(string)
0x13e2: Stack[-1] = "No"
0x13e3: Call 0x136b

0x13e4: Pop(1)
0x13e5: @ lshWaitForAnimEnd(Stack[-1])
0x13e6: Pop(0)
0x13e7: Stack[-3] = Stack[-1]
0x13e8: Return(); Pop(2)

0x13e9: Stack[-1] = (int) 2866
0x13ea: Return(); Pop(0)

0x13eb: Stack[-1] = "ui/NPC_Lara.png"
0x13ec: Return(); Pop(0)

0x13ed: Stack[-1] = (bool) 1
0x13ee: Return(); Pop(0)

0x13ef: PushEmpty()
0x13f0: Push("ood1Lara1")
0x13f1: Push((int) 1)
0x13f2: @ SetVariable(Stack[-2], Stack[-1])
0x13f3: Pop(2)
0x13f4: Return(); Pop(0)

0x13f5: PushEmpty()
0x13f6: Push("ood1Lara2")
0x13f7: Push((int) 1)
0x13f8: @ SetVariable(Stack[-2], Stack[-1])
0x13f9: Pop(2)
0x13fa: Return(); Pop(0)

0x13fb: PushEmpty()
0x13fc: Push("ood1Lara3")
0x13fd: Push((int) 1)
0x13fe: @ SetVariable(Stack[-2], Stack[-1])
0x13ff: Pop(2)
0x1400: Return(); Pop(0)

0x1401: PushEmpty()
0x1402: Push("playsound")
0x1403: Push("giveitem")
0x1404: @ TriggerWorld(Stack[-2], Stack[-1])
0x1405: Pop(2)
0x1406: Return(); Pop(0)

0x1407: PushEmpty()
0x1408: Push("ood2Lara1")
0x1409: Push((int) 1)
0x140a: @ SetVariable(Stack[-2], Stack[-1])
0x140b: Pop(2)
0x140c: Return(); Pop(0)

0x140d: PushEmpty()
0x140e: Push("ood2Lara2")
0x140f: Push((int) 1)
0x1410: @ SetVariable(Stack[-2], Stack[-1])
0x1411: Pop(2)
0x1412: Return(); Pop(0)

0x1413: PushEmpty()
0x1414: Push("ood2Lara3")
0x1415: Push((int) 1)
0x1416: @ SetVariable(Stack[-2], Stack[-1])
0x1417: Pop(2)
0x1418: Return(); Pop(0)

0x1419: PushEmpty(object, object)
0x141a: Push("d2q03")
0x141b: Push((int) 1)
0x141c: @ SetVariable(Stack[-2], Stack[-1])
0x141d: Pop(2)
0x141e: PushEmpty(object)
0x141f: Call 0x1973

0x1420: Stack[-2] = Stack[-1]
0x1421: Pop(1)
0x1422: Push("d2q03LaraGotoMoneyFoodSelf")
0x1423: Push("pt_map_lara")
0x1424: Push((int) 0)
0x1425: Push((int) 15286)
0x1426: PushEmpty(float)
0x1427: Call 0x13c4

0x1428: Pop(0)
0x1429: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x142a: Pop(5)
0x142b: Push("d2q03LaraGotoJulia")
0x142c: Push("pt_map_julia")
0x142d: Push((int) 0)
0x142e: Push((int) 15288)
0x142f: PushEmpty(float)
0x1430: Call 0x13c4

0x1431: Pop(0)
0x1432: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1433: Pop(5)
0x1434: Push("d2q03LaraGotoMaria")
0x1435: Push("pt_map_maria")
0x1436: Push((int) 0)
0x1437: Push((int) 15289)
0x1438: PushEmpty(float)
0x1439: Call 0x13c4

0x143a: Pop(0)
0x143b: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x143c: Pop(5)
0x143d: Push("d2q03LaraGotoMladVlad")
0x143e: Push("pt_map_mladvlad")
0x143f: Push((int) 0)
0x1440: Push((int) 15287)
0x1441: PushEmpty(float)
0x1442: Call 0x13c4

0x1443: Pop(0)
0x1444: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1445: Pop(5)
0x1446: PushEmpty()
0x1447: Call 0x19c6

0x1448: Pop(0)
0x1449: PushEmpty()
0x144a: Call 0x19d6

0x144b: Pop(0)
0x144c: PushEmpty(object, string)
0x144d: Stack[-1] = "quest_d2_03"
0x144e: Call 0x1393

0x144f: Pop(2)
0x1450: Return(); Pop(2)

0x1451: Stack[-1] = 0
0x1452: PushEmpty(object, object)
0x1453: Push("d2q03")
0x1454: Push((int) 2)
0x1455: @ SetVariable(Stack[-2], Stack[-1])
0x1456: Pop(2)
0x1457: PushEmpty(object)
0x1458: Call 0x1973

0x1459: Stack[-2] = Stack[-1]
0x145a: Pop(1)
0x145b: Push("d2q03LaraGotoSklad")
0x145c: Push("pt_map_d2q03_shouse")
0x145d: Push((int) 0)
0x145e: Push((int) 15290)
0x145f: PushEmpty(float)
0x1460: Call 0x13c4

0x1461: Pop(0)
0x1462: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1463: Pop(5)
0x1464: Push("d2q03LaraGotoSkladSelf")
0x1465: Push("pt_map_lara")
0x1466: Push((int) 0)
0x1467: Push((int) 15291)
0x1468: PushEmpty(float)
0x1469: Call 0x13c4

0x146a: Pop(0)
0x146b: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x146c: Pop(5)
0x146d: PushEmpty()
0x146e: Call 0x19e6

0x146f: Pop(0)
0x1470: Return(); Pop(2)

0x1471: Stack[-1] = 0
0x1472: PushEmpty(object, object, int, object, object, int)
0x1473: PushEmpty(object)
0x1474: Call 0x1973

0x1475: Stack[-4] = Stack[-1]
0x1476: Pop(1)
0x1477: Push("d2q03BirdmaskGotoLara")
0x1478: @@ FindMark(Stack[-3], Stack[-1])
0x1479: Pop(1)
0x147a: Push(Stack[-2])
0x147b: IF (Stack[-1] == 0) GOTO 0x147e; Pop(1)

0x147c: @@ Remove()
0x147d: Pop(0)
0x147e: Push("d2q03BirdmaskGotoLaraSelf")
0x147f: @@ FindMark(Stack[-3], Stack[-1])
0x1480: Pop(1)
0x1481: Push(Stack[-2])
0x1482: IF (Stack[-1] == 0) GOTO 0x1485; Pop(1)

0x1483: @@ Remove()
0x1484: Pop(0)
0x1485: Push("d2q03LaraGotoJulia")
0x1486: @@ FindMark(Stack[-3], Stack[-1])
0x1487: Pop(1)
0x1488: Push(Stack[-2])
0x1489: IF (Stack[-1] == 0) GOTO 0x148c; Pop(1)

0x148a: @@ Remove()
0x148b: Pop(0)
0x148c: Push("d2q03LaraGotoMaria")
0x148d: @@ FindMark(Stack[-3], Stack[-1])
0x148e: Pop(1)
0x148f: Push(Stack[-2])
0x1490: IF (Stack[-1] == 0) GOTO 0x1493; Pop(1)

0x1491: @@ Remove()
0x1492: Pop(0)
0x1493: Push("d2q03LaraGotoMladVlad")
0x1494: @@ FindMark(Stack[-3], Stack[-1])
0x1495: Pop(1)
0x1496: Push(Stack[-2])
0x1497: IF (Stack[-1] == 0) GOTO 0x149a; Pop(1)

0x1498: @@ Remove()
0x1499: Pop(0)
0x149a: Push("d2q03LaraGotoMoneyFoodSelf")
0x149b: @@ FindMark(Stack[-3], Stack[-1])
0x149c: Pop(1)
0x149d: Push(Stack[-2])
0x149e: IF (Stack[-1] == 0) GOTO 0x14a1; Pop(1)

0x149f: @@ Remove()
0x14a0: Pop(0)
0x14a1: Push("d2q03LaraGotoSklad")
0x14a2: @@ FindMark(Stack[-3], Stack[-1])
0x14a3: Pop(1)
0x14a4: Push(Stack[-2])
0x14a5: IF (Stack[-1] == 0) GOTO 0x14a8; Pop(1)

0x14a6: @@ Remove()
0x14a7: Pop(0)
0x14a8: Push("d2q03LaraGotoSkladSelf")
0x14a9: @@ FindMark(Stack[-3], Stack[-1])
0x14aa: Pop(1)
0x14ab: Push(Stack[-2])
0x14ac: IF (Stack[-1] == 0) GOTO 0x14af; Pop(1)

0x14ad: @@ Remove()
0x14ae: Pop(0)
0x14af: PushEmpty()
0x14b0: Call 0x19f6

0x14b1: Pop(0)
0x14b2: Push("smoked_meat")
0x14b3: Push((int) 3)
0x14b4: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x14b5: Pop(2)
0x14b6: Push("dried_fish")
0x14b7: Push((int) 3)
0x14b8: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x14b9: Pop(2)
0x14ba: Push("bread")
0x14bb: Push((int) 3)
0x14bc: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x14bd: Pop(2)
0x14be: PushEmpty(bool, string, string)
0x14bf: Stack[-2] = "quest_d2_03"
0x14c0: Stack[-1] = "completed"
0x14c1: Call 0x13b8

0x14c2: Pop(3)
0x14c3: Return(); Pop(6)

0x14c4: Stack[-2] = 0
0x14c5: Stack[-3] = 0
0x14c6: PushEmpty()
0x14c7: Push("playsound")
0x14c8: Push("giveitem")
0x14c9: @ TriggerWorld(Stack[-2], Stack[-1])
0x14ca: Pop(2)
0x14cb: Return(); Pop(0)

0x14cc: PushEmpty()
0x14cd: PushEmpty(bool, string, string)
0x14ce: Stack[-2] = "quest_d2_03"
0x14cf: Stack[-1] = "birdmask"
0x14d0: Call 0x13b8

0x14d1: Pop(3)
0x14d2: Return(); Pop(0)

0x14d3: PushEmpty()
0x14d4: Push("d1q01KnowEpidemic")
0x14d5: Push((int) 1)
0x14d6: @ SetVariable(Stack[-2], Stack[-1])
0x14d7: Pop(2)
0x14d8: PushEmpty()
0x14d9: Call 0x19b6

0x14da: Pop(0)
0x14db: Return(); Pop(0)

0x14dc: PushEmpty()
0x14dd: PushEmpty(object, string, float)
0x14de: PushEmpty(object)
0x14df: Call 0x1973

0x14e0: Stack[-4] = Stack[-1]
0x14e1: Pop(1)
0x14e2: Stack[-2] = "pt_map_ospina"
0x14e3: Stack[-1] = (int) 2
0x14e4: Call 0x1984

0x14e5: Pop(3)
0x14e6: PushEmpty(object)
0x14e7: Call 0x1973

0x14e8: Pop(0)
0x14e9: @@ ShowMap(Stack[-1])
0x14ea: Pop(1)
0x14eb: Return(); Pop(0)

0x14ec: PushEmpty()
0x14ed: PushEmpty(object, string, float)
0x14ee: PushEmpty(object)
0x14ef: Call 0x1973

0x14f0: Stack[-4] = Stack[-1]
0x14f1: Pop(1)
0x14f2: Stack[-2] = "pt_map_mladvlad"
0x14f3: Stack[-1] = (int) 2
0x14f4: Call 0x1984

0x14f5: Pop(3)
0x14f6: PushEmpty(object)
0x14f7: Call 0x1973

0x14f8: Pop(0)
0x14f9: @@ ShowMap(Stack[-1])
0x14fa: Pop(1)
0x14fb: Return(); Pop(0)

0x14fc: PushEmpty()
0x14fd: Push("ood4Lara1")
0x14fe: Push((int) 1)
0x14ff: @ SetVariable(Stack[-2], Stack[-1])
0x1500: Pop(2)
0x1501: Return(); Pop(0)

0x1502: PushEmpty(object, object)
0x1503: Push("d4q01")
0x1504: Push((int) 2)
0x1505: @ SetVariable(Stack[-2], Stack[-1])
0x1506: Pop(2)
0x1507: PushEmpty(object)
0x1508: Call 0x1973

0x1509: Stack[-2] = Stack[-1]
0x150a: Pop(1)
0x150b: Push("d4q01LaraGotoMladVlad")
0x150c: Push("pt_map_mladvlad")
0x150d: Push((int) 1)
0x150e: Push((int) 11483)
0x150f: PushEmpty(float)
0x1510: Call 0x13c4

0x1511: Pop(0)
0x1512: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1513: Pop(5)
0x1514: Push("d4q01LaraGotoMladVladSelf")
0x1515: Push("pt_map_lara")
0x1516: Push((int) 1)
0x1517: Push((int) 15321)
0x1518: PushEmpty(float)
0x1519: Call 0x13c4

0x151a: Pop(0)
0x151b: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x151c: Pop(5)
0x151d: PushEmpty()
0x151e: Call 0x1a06

0x151f: Pop(0)
0x1520: Return(); Pop(2)

0x1521: Stack[-1] = 0
0x1522: PushEmpty()
0x1523: Push("ood4Lara2")
0x1524: Push((int) 1)
0x1525: @ SetVariable(Stack[-2], Stack[-1])
0x1526: Pop(2)
0x1527: Return(); Pop(0)

0x1528: PushEmpty(object, object)
0x1529: Push("d4q01_subquest")
0x152a: Push((int) 3)
0x152b: @ SetVariable(Stack[-2], Stack[-1])
0x152c: Pop(2)
0x152d: PushEmpty(object)
0x152e: Call 0x1973

0x152f: Stack[-2] = Stack[-1]
0x1530: Pop(1)
0x1531: Push("d4q01LaraGotoOspina")
0x1532: Push("pt_map_ospina")
0x1533: Push((int) 0)
0x1534: Push((int) 11506)
0x1535: PushEmpty(float)
0x1536: Call 0x13c4

0x1537: Pop(0)
0x1538: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1539: Pop(5)
0x153a: Push("d4q01LaraGotoOspinaSelf")
0x153b: Push("pt_map_lara")
0x153c: Push((int) 1)
0x153d: Push((int) 15324)
0x153e: PushEmpty(float)
0x153f: Call 0x13c4

0x1540: Pop(0)
0x1541: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1542: Pop(5)
0x1543: Return(); Pop(2)

0x1544: Stack[-1] = 0
0x1545: PushEmpty()
0x1546: Push("ood4Lara3")
0x1547: Push((int) 1)
0x1548: @ SetVariable(Stack[-2], Stack[-1])
0x1549: Pop(2)
0x154a: Return(); Pop(0)

0x154b: PushEmpty()
0x154c: Push("d4q02LaraGivesMedcine")
0x154d: Push((int) 1)
0x154e: @ SetVariable(Stack[-2], Stack[-1])
0x154f: Pop(2)
0x1550: Return(); Pop(0)

0x1551: PushEmpty(object, object)
0x1552: PushEmpty(bool)
0x1553: Stack[-1] = (bool) 0
0x1554: PushEmpty(bool)
0x1555: Stack[-1] = (bool) 0
0x1556: PushEmpty(int, string)
0x1557: Stack[-1] = "d4q02AnnaGivesMedcine"
0x1558: Call 0x138e

0x1559: Pop(1)
0x155a: Push((int) 1)
0x155b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x155c: IF (Stack[-1] == 0) GOTO 0x1565; Pop(1)

0x155d: PushEmpty(int, string)
0x155e: Stack[-1] = "d4q02JuliaGivesMedcine"
0x155f: Call 0x138e

0x1560: Pop(1)
0x1561: Push((int) 1)
0x1562: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1563: IF (Stack[-1] == 0) GOTO 0x1565; Pop(1)

0x1564: Stack[-1] = (bool) 1
0x1565: IF (Stack[-1] == 0) GOTO 0x156e; Pop(1)

0x1566: PushEmpty(int, string)
0x1567: Stack[-1] = "d4q02LaraGivesMedcine"
0x1568: Call 0x138e

0x1569: Pop(1)
0x156a: Push((int) 1)
0x156b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x156c: IF (Stack[-1] == 0) GOTO 0x156e; Pop(1)

0x156d: Stack[-1] = (bool) 1
0x156e: IF (Stack[-1] == 0) GOTO 0x1594; Pop(1)

0x156f: Push("d4q02")
0x1570: Push((int) 2)
0x1571: @ SetVariable(Stack[-2], Stack[-1])
0x1572: Pop(2)
0x1573: PushEmpty(object)
0x1574: Call 0x1973

0x1575: Stack[-2] = Stack[-1]
0x1576: Pop(1)
0x1577: Push("d4q02BirdmaskNearHome")
0x1578: Push("pt_d4q02_birdmask")
0x1579: Push((int) 0)
0x157a: Push((int) 11842)
0x157b: PushEmpty(float)
0x157c: Call 0x13c4

0x157d: Pop(0)
0x157e: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x157f: Pop(5)
0x1580: PushEmpty(bool, string, string)
0x1581: Stack[-2] = "quest_d4_02"
0x1582: Stack[-1] = "birdmask"
0x1583: Call 0x13b8

0x1584: Pop(3)
0x1585: PushEmpty(object, string, float)
0x1586: PushEmpty(object)
0x1587: Call 0x1973

0x1588: Stack[-4] = Stack[-1]
0x1589: Pop(1)
0x158a: Stack[-2] = "pt_d4q02_birdmask"
0x158b: Stack[-1] = (int) 2
0x158c: Call 0x1984

0x158d: Pop(3)
0x158e: PushEmpty(object)
0x158f: Call 0x1973

0x1590: Pop(0)
0x1591: @@ ShowMap(Stack[-1])
0x1592: Pop(1)
0x1593: Stack[-1] = 0
0x1594: Return(); Pop(2)

0x1595: PushEmpty()
0x1596: Push("ood4Lara4")
0x1597: Push((int) 1)
0x1598: @ SetVariable(Stack[-2], Stack[-1])
0x1599: Pop(2)
0x159a: Return(); Pop(0)

0x159b: PushEmpty()
0x159c: Push("d5q01")
0x159d: Push((int) 5)
0x159e: @ SetVariable(Stack[-2], Stack[-1])
0x159f: Pop(2)
0x15a0: PushEmpty()
0x15a1: Call 0x1a16

0x15a2: Pop(0)
0x15a3: PushEmpty(bool, string, string)
0x15a4: Stack[-2] = "quest_d5_01"
0x15a5: Stack[-1] = "factory"
0x15a6: Call 0x13b8

0x15a7: Pop(3)
0x15a8: Return(); Pop(0)

0x15a9: PushEmpty()
0x15aa: Push("ood6Lara1")
0x15ab: Push((int) 1)
0x15ac: @ SetVariable(Stack[-2], Stack[-1])
0x15ad: Pop(2)
0x15ae: Return(); Pop(0)

0x15af: PushEmpty()
0x15b0: PushEmpty()
0x15b1: Call 0x1a26

0x15b2: Pop(0)
0x15b3: Push("lara blood is given")
0x15b4: @ Trace(Stack[-1])
0x15b5: Pop(1)
0x15b6: PushEmpty(object, string, int)
0x15b7: Stack[-3] = Stack[-5]
0x15b8: Stack[-2] = "d6q01_lara_blood"
0x15b9: Stack[-1] = (int) 1
0x15ba: Call 0x13ab

0x15bb: Pop(3)
0x15bc: Return(); Pop(0)

0x15bd: PushEmpty()
0x15be: Push("playsound")
0x15bf: Push("giveitem")
0x15c0: @ TriggerWorld(Stack[-2], Stack[-1])
0x15c1: Pop(2)
0x15c2: Return(); Pop(0)

0x15c3: PushEmpty()
0x15c4: Push("ood6Lara2")
0x15c5: Push((int) 1)
0x15c6: @ SetVariable(Stack[-2], Stack[-1])
0x15c7: Pop(2)
0x15c8: Return(); Pop(0)

0x15c9: PushEmpty()
0x15ca: Push("ood6Lara3")
0x15cb: Push((int) 1)
0x15cc: @ SetVariable(Stack[-2], Stack[-1])
0x15cd: Pop(2)
0x15ce: Return(); Pop(0)

0x15cf: PushEmpty()
0x15d0: Push("ood6Lara4")
0x15d1: Push((int) 1)
0x15d2: @ SetVariable(Stack[-2], Stack[-1])
0x15d3: Pop(2)
0x15d4: Return(); Pop(0)

0x15d5: PushEmpty(object, object, object, object)
0x15d6: Push("d6q01LaraVolonteer")
0x15d7: Push((int) 1)
0x15d8: @ SetVariable(Stack[-2], Stack[-1])
0x15d9: Pop(2)
0x15da: PushEmpty(object)
0x15db: Call 0x1973

0x15dc: Stack[-3] = Stack[-1]
0x15dd: Pop(1)
0x15de: Push("d6q01AlexandrGotoJulia")
0x15df: @@ FindMark(Stack[-2], Stack[-1])
0x15e0: Pop(1)
0x15e1: Push(Stack[-1])
0x15e2: IF (Stack[-1] == 0) GOTO 0x15e5; Pop(1)

0x15e3: @@ Remove()
0x15e4: Pop(0)
0x15e5: Push("d6q01AlexandrGotoKaterina")
0x15e6: @@ FindMark(Stack[-2], Stack[-1])
0x15e7: Pop(1)
0x15e8: Push(Stack[-1])
0x15e9: IF (Stack[-1] == 0) GOTO 0x15ec; Pop(1)

0x15ea: @@ Remove()
0x15eb: Pop(0)
0x15ec: Push("d6q01AlexandrGotoLara")
0x15ed: @@ FindMark(Stack[-2], Stack[-1])
0x15ee: Pop(1)
0x15ef: Push(Stack[-1])
0x15f0: IF (Stack[-1] == 0) GOTO 0x15f3; Pop(1)

0x15f1: @@ Remove()
0x15f2: Pop(0)
0x15f3: Push("d6q01AlexangrGotoJulLaraSelf")
0x15f4: @@ FindMark(Stack[-2], Stack[-1])
0x15f5: Pop(1)
0x15f6: Push(Stack[-1])
0x15f7: IF (Stack[-1] == 0) GOTO 0x15fa; Pop(1)

0x15f8: @@ Remove()
0x15f9: Pop(0)
0x15fa: Push("d6q01BigVladGotoAnna")
0x15fb: @@ FindMark(Stack[-2], Stack[-1])
0x15fc: Pop(1)
0x15fd: Push(Stack[-1])
0x15fe: IF (Stack[-1] == 0) GOTO 0x1601; Pop(1)

0x15ff: @@ Remove()
0x1600: Pop(0)
0x1601: Push("d6q01BigVladGotoAnnaOspinaSelf")
0x1602: @@ FindMark(Stack[-2], Stack[-1])
0x1603: Pop(1)
0x1604: Push(Stack[-1])
0x1605: IF (Stack[-1] == 0) GOTO 0x1608; Pop(1)

0x1606: @@ Remove()
0x1607: Pop(0)
0x1608: Push("d6q01BigVladGotoOspina")
0x1609: @@ FindMark(Stack[-2], Stack[-1])
0x160a: Pop(1)
0x160b: Push(Stack[-1])
0x160c: IF (Stack[-1] == 0) GOTO 0x160f; Pop(1)

0x160d: @@ Remove()
0x160e: Pop(0)
0x160f: Push("d6q01KaterinaGotoLaska")
0x1610: @@ FindMark(Stack[-2], Stack[-1])
0x1611: Pop(1)
0x1612: Push(Stack[-1])
0x1613: IF (Stack[-1] == 0) GOTO 0x1616; Pop(1)

0x1614: @@ Remove()
0x1615: Pop(0)
0x1616: Push("d6q01KaterinagotoLaskaSelf")
0x1617: @@ FindMark(Stack[-2], Stack[-1])
0x1618: Pop(1)
0x1619: Push(Stack[-1])
0x161a: IF (Stack[-1] == 0) GOTO 0x161d; Pop(1)

0x161b: @@ Remove()
0x161c: Pop(0)
0x161d: Push("d6q01KillerIsKlara")
0x161e: @@ FindMark(Stack[-2], Stack[-1])
0x161f: Pop(1)
0x1620: Push(Stack[-1])
0x1621: IF (Stack[-1] == 0) GOTO 0x1624; Pop(1)

0x1622: @@ Remove()
0x1623: Pop(0)
0x1624: Push("d6q01LaskaGotoAlbinos")
0x1625: @@ FindMark(Stack[-2], Stack[-1])
0x1626: Pop(1)
0x1627: Push(Stack[-1])
0x1628: IF (Stack[-1] == 0) GOTO 0x162b; Pop(1)

0x1629: @@ Remove()
0x162a: Pop(0)
0x162b: Push("d6q01ViktorGotoAlexandr")
0x162c: @@ FindMark(Stack[-2], Stack[-1])
0x162d: Pop(1)
0x162e: Push(Stack[-1])
0x162f: IF (Stack[-1] == 0) GOTO 0x1632; Pop(1)

0x1630: @@ Remove()
0x1631: Pop(0)
0x1632: Push("d6q01ViktorGotoAlxBigSelf")
0x1633: @@ FindMark(Stack[-2], Stack[-1])
0x1634: Pop(1)
0x1635: Push(Stack[-1])
0x1636: IF (Stack[-1] == 0) GOTO 0x1639; Pop(1)

0x1637: @@ Remove()
0x1638: Pop(0)
0x1639: Push("d6q01ViktorGotoBigVlad")
0x163a: @@ FindMark(Stack[-2], Stack[-1])
0x163b: Pop(1)
0x163c: Push(Stack[-1])
0x163d: IF (Stack[-1] == 0) GOTO 0x1640; Pop(1)

0x163e: @@ Remove()
0x163f: Pop(0)
0x1640: PushEmpty()
0x1641: Call 0x1a36

0x1642: Pop(0)
0x1643: PushEmpty(bool, int)
0x1644: Stack[-1] = (int) 112
0x1645: Call 0x1962

0x1646: Pop(2)
0x1647: PushEmpty(bool, int)
0x1648: Stack[-1] = (int) 113
0x1649: Call 0x1962

0x164a: Pop(2)
0x164b: PushEmpty(bool, int)
0x164c: Stack[-1] = (int) 114
0x164d: Call 0x1962

0x164e: Pop(2)
0x164f: PushEmpty(bool, int)
0x1650: Stack[-1] = (int) 115
0x1651: Call 0x1962

0x1652: Pop(2)
0x1653: PushEmpty(bool, int)
0x1654: Stack[-1] = (int) 116
0x1655: Call 0x1962

0x1656: Pop(2)
0x1657: PushEmpty(bool, int)
0x1658: Stack[-1] = (int) 117
0x1659: Call 0x1962

0x165a: Pop(2)
0x165b: PushEmpty(bool, string, string)
0x165c: Stack[-2] = "quest_d6_01"
0x165d: Stack[-1] = "completed"
0x165e: Call 0x13b8

0x165f: Pop(3)
0x1660: Return(); Pop(4)

0x1661: Stack[-1] = 0
0x1662: Stack[-2] = 0
0x1663: PushEmpty()
0x1664: Push("KnowLara")
0x1665: Push((int) 1)
0x1666: @ SetVariable(Stack[-2], Stack[-1])
0x1667: Pop(2)
0x1668: Return(); Pop(0)

0x1669: PushEmpty()
0x166a: Push("KnowMaria")
0x166b: Push((int) 1)
0x166c: @ SetVariable(Stack[-2], Stack[-1])
0x166d: Pop(2)
0x166e: Return(); Pop(0)

0x166f: PushEmpty()
0x1670: Push("ood1Lara4")
0x1671: Push((int) 1)
0x1672: @ SetVariable(Stack[-2], Stack[-1])
0x1673: Pop(2)
0x1674: Return(); Pop(0)

0x1675: PushEmpty()
0x1676: Push("ood1Lara5")
0x1677: Push((int) 1)
0x1678: @ SetVariable(Stack[-2], Stack[-1])
0x1679: Pop(2)
0x167a: Return(); Pop(0)

0x167b: PushEmpty()
0x167c: Push("ood1Lara6")
0x167d: Push((int) 1)
0x167e: @ SetVariable(Stack[-2], Stack[-1])
0x167f: Pop(2)
0x1680: Return(); Pop(0)

0x1681: PushEmpty()
0x1682: Push("ood1Lara7")
0x1683: Push((int) 1)
0x1684: @ SetVariable(Stack[-2], Stack[-1])
0x1685: Pop(2)
0x1686: Return(); Pop(0)

0x1687: PushEmpty()
0x1688: Push("ood1Lara8")
0x1689: Push((int) 1)
0x168a: @ SetVariable(Stack[-2], Stack[-1])
0x168b: Pop(2)
0x168c: Return(); Pop(0)

0x168d: PushEmpty()
0x168e: Push("ood1Lara9")
0x168f: Push((int) 1)
0x1690: @ SetVariable(Stack[-2], Stack[-1])
0x1691: Pop(2)
0x1692: Return(); Pop(0)

0x1693: PushEmpty()
0x1694: PushEmpty(object, string, float)
0x1695: PushEmpty(object)
0x1696: Call 0x1973

0x1697: Stack[-4] = Stack[-1]
0x1698: Pop(1)
0x1699: Stack[-2] = "pt_map_d2q03_shouse"
0x169a: Stack[-1] = (int) 2
0x169b: Call 0x1984

0x169c: Pop(3)
0x169d: PushEmpty(object)
0x169e: Call 0x1973

0x169f: Pop(0)
0x16a0: @@ ShowMap(Stack[-1])
0x16a1: Pop(1)
0x16a2: Return(); Pop(0)

0x16a3: PushEmpty()
0x16a4: Push("morfin is given")
0x16a5: @ Trace(Stack[-1])
0x16a6: Pop(1)
0x16a7: PushEmpty(object, string, int)
0x16a8: Stack[-3] = Stack[-5]
0x16a9: Stack[-2] = "morfin"
0x16aa: Stack[-1] = (int) 1
0x16ab: Call 0x13ab

0x16ac: Pop(3)
0x16ad: Return(); Pop(0)

0x16ae: PushEmpty()
0x16af: Push("etorfin is given")
0x16b0: @ Trace(Stack[-1])
0x16b1: Pop(1)
0x16b2: PushEmpty(object, string, int)
0x16b3: Stack[-3] = Stack[-5]
0x16b4: Stack[-2] = "etorfin"
0x16b5: Stack[-1] = (int) 1
0x16b6: Call 0x13ab

0x16b7: Pop(3)
0x16b8: Return(); Pop(0)

0x16b9: PushEmpty()
0x16ba: Push("novocaine is given")
0x16bb: @ Trace(Stack[-1])
0x16bc: Pop(1)
0x16bd: PushEmpty(object, string, int)
0x16be: Stack[-3] = Stack[-5]
0x16bf: Stack[-2] = "novocaine"
0x16c0: Stack[-1] = (int) 1
0x16c1: Call 0x13ab

0x16c2: Pop(3)
0x16c3: Return(); Pop(0)

0x16c4: PushEmpty()
0x16c5: Push("KnowPredictions")
0x16c6: Push((int) 1)
0x16c7: @ SetVariable(Stack[-2], Stack[-1])
0x16c8: Pop(2)
0x16c9: Return(); Pop(0)

0x16ca: PushEmpty()
0x16cb: PushEmpty(int, string)
0x16cc: Stack[-1] = "KnowWarehouses"
0x16cd: Call 0x138e

0x16ce: Pop(1)
0x16cf: Push((int) 1)
0x16d0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16d1: IF (Stack[-1] == 0) GOTO 0x16d4; Pop(1)

0x16d2: Stack[-2] = (bool) 1
0x16d3: Return(); Pop(0)

0x16d4: Stack[-2] = (bool) 0
0x16d5: Return(); Pop(0)

0x16d6: PushEmpty()
0x16d7: PushEmpty(int, string)
0x16d8: Stack[-1] = "ood1Lara1"
0x16d9: Call 0x138e

0x16da: Pop(1)
0x16db: Push((int) 0)
0x16dc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16dd: IF (Stack[-1] == 0) GOTO 0x16e0; Pop(1)

0x16de: Stack[-2] = (bool) 1
0x16df: Return(); Pop(0)

0x16e0: Stack[-2] = (bool) 0
0x16e1: Return(); Pop(0)

0x16e2: PushEmpty()
0x16e3: PushEmpty(int, string)
0x16e4: Stack[-1] = "ood1Lara2"
0x16e5: Call 0x138e

0x16e6: Pop(1)
0x16e7: Push((int) 0)
0x16e8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16e9: IF (Stack[-1] == 0) GOTO 0x16ec; Pop(1)

0x16ea: Stack[-2] = (bool) 1
0x16eb: Return(); Pop(0)

0x16ec: Stack[-2] = (bool) 0
0x16ed: Return(); Pop(0)

0x16ee: PushEmpty()
0x16ef: PushEmpty(int, string)
0x16f0: Stack[-1] = "ood1Lara3"
0x16f1: Call 0x138e

0x16f2: Pop(1)
0x16f3: Push((int) 0)
0x16f4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16f5: IF (Stack[-1] == 0) GOTO 0x16f8; Pop(1)

0x16f6: Stack[-2] = (bool) 1
0x16f7: Return(); Pop(0)

0x16f8: Stack[-2] = (bool) 0
0x16f9: Return(); Pop(0)

0x16fa: PushEmpty()
0x16fb: PushEmpty(int, string)
0x16fc: Stack[-1] = "d1q01"
0x16fd: Call 0x138e

0x16fe: Pop(1)
0x16ff: Push((int) 1000)
0x1700: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1701: IF (Stack[-1] == 0) GOTO 0x1704; Pop(1)

0x1702: Stack[-2] = (bool) 1
0x1703: Return(); Pop(0)

0x1704: Stack[-2] = (bool) 0
0x1705: Return(); Pop(0)

0x1706: PushEmpty()
0x1707: PushEmpty(int, string)
0x1708: Stack[-1] = "d1q01"
0x1709: Call 0x138e

0x170a: Pop(1)
0x170b: Push((int) 0)
0x170c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x170d: IF (Stack[-1] == 0) GOTO 0x1710; Pop(1)

0x170e: Stack[-2] = (bool) 1
0x170f: Return(); Pop(0)

0x1710: Stack[-2] = (bool) 0
0x1711: Return(); Pop(0)

0x1712: PushEmpty()
0x1713: PushEmpty(int, string)
0x1714: Stack[-1] = "ood2Lara1"
0x1715: Call 0x138e

0x1716: Pop(1)
0x1717: Push((int) 0)
0x1718: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1719: IF (Stack[-1] == 0) GOTO 0x171c; Pop(1)

0x171a: Stack[-2] = (bool) 1
0x171b: Return(); Pop(0)

0x171c: Stack[-2] = (bool) 0
0x171d: Return(); Pop(0)

0x171e: PushEmpty()
0x171f: PushEmpty(int, string)
0x1720: Stack[-1] = "ood2Lara2"
0x1721: Call 0x138e

0x1722: Pop(1)
0x1723: Push((int) 0)
0x1724: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1725: IF (Stack[-1] == 0) GOTO 0x1728; Pop(1)

0x1726: Stack[-2] = (bool) 1
0x1727: Return(); Pop(0)

0x1728: Stack[-2] = (bool) 0
0x1729: Return(); Pop(0)

0x172a: PushEmpty()
0x172b: PushEmpty(int, string)
0x172c: Stack[-1] = "ood2Lara3"
0x172d: Call 0x138e

0x172e: Pop(1)
0x172f: Push((int) 0)
0x1730: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1731: IF (Stack[-1] == 0) GOTO 0x1734; Pop(1)

0x1732: Stack[-2] = (bool) 1
0x1733: Return(); Pop(0)

0x1734: Stack[-2] = (bool) 0
0x1735: Return(); Pop(0)

0x1736: PushEmpty()
0x1737: PushEmpty(int, string)
0x1738: Stack[-1] = "d2q03"
0x1739: Call 0x138e

0x173a: Pop(1)
0x173b: Push((int) 0)
0x173c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x173d: IF (Stack[-1] == 0) GOTO 0x1740; Pop(1)

0x173e: Stack[-2] = (bool) 1
0x173f: Return(); Pop(0)

0x1740: Stack[-2] = (bool) 0
0x1741: Return(); Pop(0)

0x1742: PushEmpty()
0x1743: Stack[-2] = (bool) 1
0x1744: Return(); Pop(0)

0x1745: Stack[-2] = (bool) 0
0x1746: Return(); Pop(0)

0x1747: PushEmpty()
0x1748: PushEmpty(bool, object)
0x1749: Stack[-1] = Stack[-3]
0x174a: Call 0x18fd

0x174b: Pop(1)
0x174c: IF (Stack[-1] == 0) GOTO 0x174f; Pop(1)

0x174d: Stack[-2] = (bool) 1
0x174e: Return(); Pop(0)

0x174f: Stack[-2] = (bool) 0
0x1750: Return(); Pop(0)

0x1751: PushEmpty()
0x1752: PushEmpty(int, string)
0x1753: Stack[-1] = "d2q03"
0x1754: Call 0x138e

0x1755: Pop(1)
0x1756: Push((int) 1)
0x1757: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1758: IF (Stack[-1] == 0) GOTO 0x175b; Pop(1)

0x1759: Stack[-2] = (bool) 1
0x175a: Return(); Pop(0)

0x175b: Stack[-2] = (bool) 0
0x175c: Return(); Pop(0)

0x175d: PushEmpty()
0x175e: PushEmpty(int, string)
0x175f: Stack[-1] = "d2q03"
0x1760: Call 0x138e

0x1761: Pop(1)
0x1762: Push((int) 3)
0x1763: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1764: IF (Stack[-1] == 0) GOTO 0x1767; Pop(1)

0x1765: Stack[-2] = (bool) 1
0x1766: Return(); Pop(0)

0x1767: Stack[-2] = (bool) 0
0x1768: Return(); Pop(0)

0x1769: PushEmpty()
0x176a: PushEmpty(int, string)
0x176b: Stack[-1] = "d2q03"
0x176c: Call 0x138e

0x176d: Pop(1)
0x176e: Push((int) 1000)
0x176f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1770: IF (Stack[-1] == 0) GOTO 0x1773; Pop(1)

0x1771: Stack[-2] = (bool) 1
0x1772: Return(); Pop(0)

0x1773: Stack[-2] = (bool) 0
0x1774: Return(); Pop(0)

0x1775: PushEmpty()
0x1776: PushEmpty(int, string)
0x1777: Stack[-1] = "d1q01KnowEpidemic"
0x1778: Call 0x138e

0x1779: Pop(1)
0x177a: Push((int) 1)
0x177b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x177c: IF (Stack[-1] == 0) GOTO 0x177f; Pop(1)

0x177d: Stack[-2] = (bool) 1
0x177e: Return(); Pop(0)

0x177f: Stack[-2] = (bool) 0
0x1780: Return(); Pop(0)

0x1781: PushEmpty()
0x1782: PushEmpty(bool, object)
0x1783: Stack[-1] = Stack[-3]
0x1784: Call 0x1918

0x1785: Pop(1)
0x1786: IF (Stack[-1] == 0) GOTO 0x1789; Pop(1)

0x1787: Stack[-2] = (bool) 1
0x1788: Return(); Pop(0)

0x1789: Stack[-2] = (bool) 0
0x178a: Return(); Pop(0)

0x178b: PushEmpty()
0x178c: PushEmpty(int, string)
0x178d: Stack[-1] = "d4q01"
0x178e: Call 0x138e

0x178f: Pop(1)
0x1790: Push((int) 1)
0x1791: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1792: IF (Stack[-1] == 0) GOTO 0x1795; Pop(1)

0x1793: Stack[-2] = (bool) 1
0x1794: Return(); Pop(0)

0x1795: Stack[-2] = (bool) 0
0x1796: Return(); Pop(0)

0x1797: PushEmpty()
0x1798: PushEmpty(int, string)
0x1799: Stack[-1] = "ood4Lara1"
0x179a: Call 0x138e

0x179b: Pop(1)
0x179c: Push((int) 0)
0x179d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x179e: IF (Stack[-1] == 0) GOTO 0x17a1; Pop(1)

0x179f: Stack[-2] = (bool) 1
0x17a0: Return(); Pop(0)

0x17a1: Stack[-2] = (bool) 0
0x17a2: Return(); Pop(0)

0x17a3: PushEmpty()
0x17a4: PushEmpty(int, string)
0x17a5: Stack[-1] = "ood4Lara2"
0x17a6: Call 0x138e

0x17a7: Pop(1)
0x17a8: Push((int) 0)
0x17a9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17aa: IF (Stack[-1] == 0) GOTO 0x17ad; Pop(1)

0x17ab: Stack[-2] = (bool) 1
0x17ac: Return(); Pop(0)

0x17ad: Stack[-2] = (bool) 0
0x17ae: Return(); Pop(0)

0x17af: PushEmpty()
0x17b0: PushEmpty(int, string)
0x17b1: Stack[-1] = "d4q01_subquest"
0x17b2: Call 0x138e

0x17b3: Pop(1)
0x17b4: Push((int) 2)
0x17b5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17b6: IF (Stack[-1] == 0) GOTO 0x17b9; Pop(1)

0x17b7: Stack[-2] = (bool) 1
0x17b8: Return(); Pop(0)

0x17b9: Stack[-2] = (bool) 0
0x17ba: Return(); Pop(0)

0x17bb: PushEmpty()
0x17bc: PushEmpty(bool, object)
0x17bd: Stack[-1] = Stack[-3]
0x17be: Call 0x1923

0x17bf: Pop(1)
0x17c0: IF (Stack[-1] == 0) GOTO 0x17c3; Pop(1)

0x17c1: Stack[-2] = (bool) 1
0x17c2: Return(); Pop(0)

0x17c3: Stack[-2] = (bool) 0
0x17c4: Return(); Pop(0)

0x17c5: PushEmpty()
0x17c6: PushEmpty(int, string)
0x17c7: Stack[-1] = "d4q02"
0x17c8: Call 0x138e

0x17c9: Pop(1)
0x17ca: Push((int) 1)
0x17cb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17cc: IF (Stack[-1] == 0) GOTO 0x17cf; Pop(1)

0x17cd: Stack[-2] = (bool) 1
0x17ce: Return(); Pop(0)

0x17cf: Stack[-2] = (bool) 0
0x17d0: Return(); Pop(0)

0x17d1: PushEmpty()
0x17d2: PushEmpty(int, string)
0x17d3: Stack[-1] = "ood4Lara3"
0x17d4: Call 0x138e

0x17d5: Pop(1)
0x17d6: Push((int) 0)
0x17d7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17d8: IF (Stack[-1] == 0) GOTO 0x17db; Pop(1)

0x17d9: Stack[-2] = (bool) 1
0x17da: Return(); Pop(0)

0x17db: Stack[-2] = (bool) 0
0x17dc: Return(); Pop(0)

0x17dd: PushEmpty()
0x17de: PushEmpty(int, string)
0x17df: Stack[-1] = "d4q02LaraGivesMedcine"
0x17e0: Call 0x138e

0x17e1: Pop(1)
0x17e2: Push((int) 1)
0x17e3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17e4: IF (Stack[-1] == 0) GOTO 0x17e7; Pop(1)

0x17e5: Stack[-2] = (bool) 1
0x17e6: Return(); Pop(0)

0x17e7: Stack[-2] = (bool) 0
0x17e8: Return(); Pop(0)

0x17e9: PushEmpty()
0x17ea: PushEmpty(int, string)
0x17eb: Stack[-1] = "d4q02"
0x17ec: Call 0x138e

0x17ed: Pop(1)
0x17ee: Push((int) 1000)
0x17ef: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17f0: IF (Stack[-1] == 0) GOTO 0x17f3; Pop(1)

0x17f1: Stack[-2] = (bool) 1
0x17f2: Return(); Pop(0)

0x17f3: Stack[-2] = (bool) 0
0x17f4: Return(); Pop(0)

0x17f5: PushEmpty()
0x17f6: PushEmpty(int, string)
0x17f7: Stack[-1] = "ood4Lara4"
0x17f8: Call 0x138e

0x17f9: Pop(1)
0x17fa: Push((int) 0)
0x17fb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17fc: IF (Stack[-1] == 0) GOTO 0x17ff; Pop(1)

0x17fd: Stack[-2] = (bool) 1
0x17fe: Return(); Pop(0)

0x17ff: Stack[-2] = (bool) 0
0x1800: Return(); Pop(0)

0x1801: PushEmpty()
0x1802: PushEmpty(int, string)
0x1803: Stack[-1] = "d5q01"
0x1804: Call 0x138e

0x1805: Pop(1)
0x1806: Push((int) 4)
0x1807: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1808: IF (Stack[-1] == 0) GOTO 0x180b; Pop(1)

0x1809: Stack[-2] = (bool) 1
0x180a: Return(); Pop(0)

0x180b: Stack[-2] = (bool) 0
0x180c: Return(); Pop(0)

0x180d: PushEmpty()
0x180e: PushEmpty(int, string)
0x180f: Stack[-1] = "KnowMark"
0x1810: Call 0x138e

0x1811: Pop(1)
0x1812: Push((int) 1)
0x1813: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1814: IF (Stack[-1] == 0) GOTO 0x1817; Pop(1)

0x1815: Stack[-2] = (bool) 1
0x1816: Return(); Pop(0)

0x1817: Stack[-2] = (bool) 0
0x1818: Return(); Pop(0)

0x1819: PushEmpty()
0x181a: PushEmpty(int, string)
0x181b: Stack[-1] = "d6q01"
0x181c: Call 0x138e

0x181d: Pop(1)
0x181e: Push((int) 1)
0x181f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1820: IF (Stack[-1] == 0) GOTO 0x1823; Pop(1)

0x1821: Stack[-2] = (bool) 1
0x1822: Return(); Pop(0)

0x1823: Stack[-2] = (bool) 0
0x1824: Return(); Pop(0)

0x1825: PushEmpty()
0x1826: PushEmpty(int, string)
0x1827: Stack[-1] = "ood6Lara1"
0x1828: Call 0x138e

0x1829: Pop(1)
0x182a: Push((int) 0)
0x182b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x182c: IF (Stack[-1] == 0) GOTO 0x182f; Pop(1)

0x182d: Stack[-2] = (bool) 1
0x182e: Return(); Pop(0)

0x182f: Stack[-2] = (bool) 0
0x1830: Return(); Pop(0)

0x1831: PushEmpty()
0x1832: PushEmpty(int, string)
0x1833: Stack[-1] = "microscope_d6q01_lara_blood"
0x1834: Call 0x138e

0x1835: Pop(1)
0x1836: Push((int) 0)
0x1837: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1838: IF (Stack[-1] == 0) GOTO 0x183b; Pop(1)

0x1839: Stack[-2] = (bool) 1
0x183a: Return(); Pop(0)

0x183b: Stack[-2] = (bool) 0
0x183c: Return(); Pop(0)

0x183d: PushEmpty()
0x183e: PushEmpty(int, string)
0x183f: Stack[-1] = "ood6Lara2"
0x1840: Call 0x138e

0x1841: Pop(1)
0x1842: Push((int) 0)
0x1843: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1844: IF (Stack[-1] == 0) GOTO 0x1847; Pop(1)

0x1845: Stack[-2] = (bool) 1
0x1846: Return(); Pop(0)

0x1847: Stack[-2] = (bool) 0
0x1848: Return(); Pop(0)

0x1849: PushEmpty()
0x184a: PushEmpty(int, string)
0x184b: Stack[-1] = "ood6Lara3"
0x184c: Call 0x138e

0x184d: Pop(1)
0x184e: Push((int) 0)
0x184f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1850: IF (Stack[-1] == 0) GOTO 0x1853; Pop(1)

0x1851: Stack[-2] = (bool) 1
0x1852: Return(); Pop(0)

0x1853: Stack[-2] = (bool) 0
0x1854: Return(); Pop(0)

0x1855: PushEmpty()
0x1856: PushEmpty(int, string)
0x1857: Stack[-1] = "KnowAlexandr"
0x1858: Call 0x138e

0x1859: Pop(1)
0x185a: Push((int) 1)
0x185b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x185c: IF (Stack[-1] == 0) GOTO 0x185f; Pop(1)

0x185d: Stack[-2] = (bool) 1
0x185e: Return(); Pop(0)

0x185f: Stack[-2] = (bool) 0
0x1860: Return(); Pop(0)

0x1861: PushEmpty()
0x1862: PushEmpty(int, string)
0x1863: Stack[-1] = "ood6Lara4"
0x1864: Call 0x138e

0x1865: Pop(1)
0x1866: Push((int) 0)
0x1867: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1868: IF (Stack[-1] == 0) GOTO 0x186b; Pop(1)

0x1869: Stack[-2] = (bool) 1
0x186a: Return(); Pop(0)

0x186b: Stack[-2] = (bool) 0
0x186c: Return(); Pop(0)

0x186d: PushEmpty()
0x186e: PushEmpty(int, string)
0x186f: Stack[-1] = "d6q01"
0x1870: Call 0x138e

0x1871: Pop(1)
0x1872: Push((int) 1000)
0x1873: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1874: IF (Stack[-1] == 0) GOTO 0x1877; Pop(1)

0x1875: Stack[-2] = (bool) 1
0x1876: Return(); Pop(0)

0x1877: Stack[-2] = (bool) 0
0x1878: Return(); Pop(0)

0x1879: PushEmpty()
0x187a: PushEmpty(int, string)
0x187b: Stack[-1] = "d6q01"
0x187c: Call 0x138e

0x187d: Pop(1)
0x187e: Push((int) -1)
0x187f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1880: IF (Stack[-1] == 0) GOTO 0x1883; Pop(1)

0x1881: Stack[-2] = (bool) 1
0x1882: Return(); Pop(0)

0x1883: Stack[-2] = (bool) 0
0x1884: Return(); Pop(0)

0x1885: PushEmpty()
0x1886: PushEmpty(int, string)
0x1887: Stack[-1] = "KnowJulia"
0x1888: Call 0x138e

0x1889: Pop(1)
0x188a: Push((int) 1)
0x188b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x188c: IF (Stack[-1] == 0) GOTO 0x188f; Pop(1)

0x188d: Stack[-2] = (bool) 1
0x188e: Return(); Pop(0)

0x188f: Stack[-2] = (bool) 0
0x1890: Return(); Pop(0)

0x1891: PushEmpty()
0x1892: PushEmpty(int, string)
0x1893: Stack[-1] = "KnowKaterina"
0x1894: Call 0x138e

0x1895: Pop(1)
0x1896: Push((int) 1)
0x1897: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1898: IF (Stack[-1] == 0) GOTO 0x189b; Pop(1)

0x1899: Stack[-2] = (bool) 1
0x189a: Return(); Pop(0)

0x189b: Stack[-2] = (bool) 0
0x189c: Return(); Pop(0)

0x189d: PushEmpty()
0x189e: PushEmpty(int, string)
0x189f: Stack[-1] = "ood1Lara4"
0x18a0: Call 0x138e

0x18a1: Pop(1)
0x18a2: Push((int) 0)
0x18a3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18a4: IF (Stack[-1] == 0) GOTO 0x18a7; Pop(1)

0x18a5: Stack[-2] = (bool) 1
0x18a6: Return(); Pop(0)

0x18a7: Stack[-2] = (bool) 0
0x18a8: Return(); Pop(0)

0x18a9: PushEmpty()
0x18aa: PushEmpty(int, string)
0x18ab: Stack[-1] = "ood1Lara5"
0x18ac: Call 0x138e

0x18ad: Pop(1)
0x18ae: Push((int) 0)
0x18af: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18b0: IF (Stack[-1] == 0) GOTO 0x18b3; Pop(1)

0x18b1: Stack[-2] = (bool) 1
0x18b2: Return(); Pop(0)

0x18b3: Stack[-2] = (bool) 0
0x18b4: Return(); Pop(0)

0x18b5: PushEmpty()
0x18b6: PushEmpty(int, string)
0x18b7: Stack[-1] = "ood1Lara6"
0x18b8: Call 0x138e

0x18b9: Pop(1)
0x18ba: Push((int) 0)
0x18bb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18bc: IF (Stack[-1] == 0) GOTO 0x18bf; Pop(1)

0x18bd: Stack[-2] = (bool) 1
0x18be: Return(); Pop(0)

0x18bf: Stack[-2] = (bool) 0
0x18c0: Return(); Pop(0)

0x18c1: PushEmpty()
0x18c2: PushEmpty(int, string)
0x18c3: Stack[-1] = "ood1Lara7"
0x18c4: Call 0x138e

0x18c5: Pop(1)
0x18c6: Push((int) 0)
0x18c7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18c8: IF (Stack[-1] == 0) GOTO 0x18cb; Pop(1)

0x18c9: Stack[-2] = (bool) 1
0x18ca: Return(); Pop(0)

0x18cb: Stack[-2] = (bool) 0
0x18cc: Return(); Pop(0)

0x18cd: PushEmpty()
0x18ce: PushEmpty(int, string)
0x18cf: Stack[-1] = "ood1Lara8"
0x18d0: Call 0x138e

0x18d1: Pop(1)
0x18d2: Push((int) 0)
0x18d3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18d4: IF (Stack[-1] == 0) GOTO 0x18d7; Pop(1)

0x18d5: Stack[-2] = (bool) 1
0x18d6: Return(); Pop(0)

0x18d7: Stack[-2] = (bool) 0
0x18d8: Return(); Pop(0)

0x18d9: PushEmpty()
0x18da: PushEmpty(int, string)
0x18db: Stack[-1] = "ood1Lara9"
0x18dc: Call 0x138e

0x18dd: Pop(1)
0x18de: Push((int) 0)
0x18df: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18e0: IF (Stack[-1] == 0) GOTO 0x18e3; Pop(1)

0x18e1: Stack[-2] = (bool) 1
0x18e2: Return(); Pop(0)

0x18e3: Stack[-2] = (bool) 0
0x18e4: Return(); Pop(0)

0x18e5: PushEmpty()
0x18e6: PushEmpty(int, string)
0x18e7: Stack[-1] = "KnowMladVlad"
0x18e8: Call 0x138e

0x18e9: Pop(1)
0x18ea: Push((int) 1)
0x18eb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18ec: IF (Stack[-1] == 0) GOTO 0x18ef; Pop(1)

0x18ed: Stack[-2] = (bool) 1
0x18ee: Return(); Pop(0)

0x18ef: Stack[-2] = (bool) 0
0x18f0: Return(); Pop(0)

0x18f1: PushEmpty()
0x18f2: PushEmpty(int, string)
0x18f3: Stack[-1] = "KnowPredictions"
0x18f4: Call 0x138e

0x18f5: Pop(1)
0x18f6: Push((int) 1)
0x18f7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18f8: IF (Stack[-1] == 0) GOTO 0x18fb; Pop(1)

0x18f9: Stack[-2] = (bool) 1
0x18fa: Return(); Pop(0)

0x18fb: Stack[-2] = (bool) 0
0x18fc: Return(); Pop(0)

0x18fd: PushEmpty(int, int)
0x18fe: Push("smoked_meat")
0x18ff: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x1900: Pop(1)
0x1901: Push((int) 3)
0x1902: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1903: IF (Stack[-1] == 0) GOTO 0x1906; Pop(1)

0x1904: Stack[-4] = (bool) 0
0x1905: Return(); Pop(2)

0x1906: Push("dried_fish")
0x1907: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x1908: Pop(1)
0x1909: Push((int) 3)
0x190a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x190b: IF (Stack[-1] == 0) GOTO 0x190e; Pop(1)

0x190c: Stack[-4] = (bool) 0
0x190d: Return(); Pop(2)

0x190e: Push("bread")
0x190f: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x1910: Pop(1)
0x1911: Push((int) 3)
0x1912: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1913: IF (Stack[-1] == 0) GOTO 0x1916; Pop(1)

0x1914: Stack[-4] = (bool) 0
0x1915: Return(); Pop(2)

0x1916: Stack[-4] = (bool) 1
0x1917: Return(); Pop(2)

0x1918: PushEmpty()
0x1919: PushEmpty(int)
0x191a: Call 0x13d2

0x191b: Pop(0)
0x191c: Push((int) 18)
0x191d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x191e: IF (Stack[-1] == 0) GOTO 0x1921; Pop(1)

0x191f: Stack[-2] = (bool) 1
0x1920: Return(); Pop(0)

0x1921: Stack[-2] = (bool) 0
0x1922: Return(); Pop(0)

0x1923: PushEmpty()
0x1924: PushEmpty(bool)
0x1925: Stack[-1] = (bool) 0
0x1926: PushEmpty(int)
0x1927: Call 0x13d2

0x1928: Pop(0)
0x1929: Push((int) 12)
0x192a: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x192b: IF (Stack[-1] == 0) GOTO 0x1933; Pop(1)

0x192c: PushEmpty(int)
0x192d: Call 0x13d2

0x192e: Pop(0)
0x192f: Push((int) 18)
0x1930: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1931: IF (Stack[-1] == 0) GOTO 0x1933; Pop(1)

0x1932: Stack[-1] = (bool) 1
0x1933: IF (Stack[-1] == 0) GOTO 0x1936; Pop(1)

0x1934: Stack[-2] = (bool) 1
0x1935: Return(); Pop(0)

0x1936: Stack[-2] = (bool) 0
0x1937: Return(); Pop(0)

0x1938: PushEmpty(object, object)
0x1939: @ GetDiaryRoot(Stack[-1])
0x193a: Pop(0)
0x193b: Pop(0); Push((bool) Stack[-1] == 0)
0x193c: IF (Stack[-1] == 0) GOTO 0x1942; Pop(1)

0x193d: Push("Can't retrieve diary root")
0x193e: @ Trace(Stack[-1])
0x193f: Pop(1)
0x1940: Stack[-3] = (bool) 0
0x1941: Return(); Pop(2)

0x1942: Stack[-3] = Stack[-1]
0x1943: Return(); Pop(2)

0x1944: Stack[-1] = 0
0x1945: PushEmpty(object, object, int, object, object, int)
0x1946: PushEmpty(object)
0x1947: Call 0x1938

0x1948: Stack[-4] = Stack[-1]
0x1949: Pop(1)
0x194a: @@ Find(Stack[-7], Stack[-2])
0x194b: Pop(0)
0x194c: Pop(0); Push((bool) Stack[-2] == 0)
0x194d: IF (Stack[-1] == 0) GOTO 0x1954; Pop(1)

0x194e: Push("Can't find diary parent with id: ")
0x194f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1950: @ Trace(Stack[-1])
0x1951: Pop(1)
0x1952: Stack[-9] = (bool) 0
0x1953: Return(); Pop(6)

0x1954: @@ AddChild(Stack[-8])
0x1955: Pop(0)
0x1956: Push("player_diary")
0x1957: Push((int) 1)
0x1958: @ SetVariable(Stack[-2], Stack[-1])
0x1959: Pop(2)
0x195a: @@ GetCategory(Stack[-1])
0x195b: Pop(0)
0x195c: @ SetDiarySection(Stack[-1])
0x195d: Pop(0)
0x195e: Stack[-9] = (bool) 0
0x195f: Return(); Pop(6)

0x1960: Stack[-2] = 0
0x1961: Stack[-3] = 0
0x1962: PushEmpty(object, object, object, object)
0x1963: PushEmpty(object)
0x1964: Call 0x1938

0x1965: Stack[-3] = Stack[-1]
0x1966: Pop(1)
0x1967: @@ Find(Stack[-5], Stack[-1])
0x1968: Pop(0)
0x1969: Pop(0); Push((bool) Stack[-1] == 0)
0x196a: IF (Stack[-1] == 0) GOTO 0x196d; Pop(1)

0x196b: Stack[-6] = (bool) 0
0x196c: Return(); Pop(4)

0x196d: @@ Remove()
0x196e: Pop(0)
0x196f: Stack[-6] = (bool) 1
0x1970: Return(); Pop(4)

0x1971: Stack[-1] = 0
0x1972: Stack[-2] = 0
0x1973: PushEmpty(object, object, object, object)
0x1974: @ GetMainOutdoorScene(Stack[-2])
0x1975: Pop(0)
0x1976: Pop(0); Push((bool) Stack[-2] == 0)
0x1977: IF (Stack[-1] == 0) GOTO 0x197e; Pop(1)

0x1978: Push("Can't find main outdoor scene")
0x1979: @ Trace(Stack[-1])
0x197a: Pop(1)
0x197b: Stack[-1] = 0
0x197c: Stack[-5] = Stack[-1]
0x197d: Return(); Pop(4)

0x197e: @@ GetMap(Stack[-1])
0x197f: Pop(0)
0x1980: Stack[-5] = Stack[-1]
0x1981: Return(); Pop(4)

0x1982: Stack[-1] = 0
0x1983: Stack[-2] = 0
0x1984: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x1985: @ GetMainOutdoorScene(Stack[-2])
0x1986: Pop(0)
0x1987: Pop(0); Push((bool) Stack[-2] == 0)
0x1988: IF (Stack[-1] == 0) GOTO 0x198d; Pop(1)

0x1989: Push("Can't find main outdoor scene")
0x198a: @ Trace(Stack[-1])
0x198b: Pop(1)
0x198c: Return(); Pop(8)

0x198d: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x198e: Pop(0)
0x198f: Pop(0); Push((bool) Stack[-1] == 0)
0x1990: IF (Stack[-1] == 0) GOTO 0x1997; Pop(1)

0x1991: Push("Warning: outdoor scene locator ")
0x1992: Pop(1); Push(Stack[-1] + Stack[-11]);
0x1993: Push(" doesnt exist")
0x1994: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1995: @ Trace(Stack[-1])
0x1996: Pop(1)
0x1997: @@ GetMap(Stack[-11])
0x1998: Pop(0)
0x1999: Pop(0); Push((bool) Stack[-11] == 0)
0x199a: IF (Stack[-1] == 0) GOTO 0x199f; Pop(1)

0x199b: Push("Can't find map")
0x199c: @ Trace(Stack[-1])
0x199d: Pop(1)
0x199e: Return(); Pop(8)

0x199f: Push(CvectorIndex(Stack[-4], 0))
0x19a0: Push(CvectorIndex(Stack[-5], 2))
0x19a1: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x19a2: Pop(2)
0x19a3: Return(); Pop(8)

0x19a4: Stack[-2] = 0
0x19a5: PushEmpty(int, int)
0x19a6: Push("player")
0x19a7: @ GetVariable(Stack[-1], Stack[-2])
0x19a8: Pop(1)
0x19a9: Push((int) 0)
0x19aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19ab: IF (Stack[-1] == 0) GOTO 0x19af; Pop(1)

0x19ac: Stack[-3] = (int) 200001
0x19ad: Return(); Pop(2)

0x19ae: GOTO 0x19b4

0x19af: Push((int) 1)
0x19b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19b1: IF (Stack[-1] == 0) GOTO 0x19b4; Pop(1)

0x19b2: Stack[-3] = (int) 200002
0x19b3: Return(); Pop(2)

0x19b4: Stack[-3] = (int) 200003
0x19b5: Return(); Pop(2)

0x19b6: PushEmpty(object, object)
0x19b7: Push("Adding diary entry")
0x19b8: @ Trace(Stack[-1])
0x19b9: Pop(1)
0x19ba: Push((int) 33)
0x19bb: Push((int) 1)
0x19bc: Push((int) 12115)
0x19bd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x19be: Pop(3)
0x19bf: PushEmpty(bool, object, int)
0x19c0: Stack[-2] = Stack[-4]
0x19c1: Stack[-1] = (int) 2
0x19c2: Call 0x1945

0x19c3: Pop(3)
0x19c4: Return(); Pop(2)

0x19c5: Stack[-1] = 0
0x19c6: PushEmpty(object, object)
0x19c7: Push("Adding diary entry")
0x19c8: @ Trace(Stack[-1])
0x19c9: Pop(1)
0x19ca: Push((int) 12)
0x19cb: Push((int) 2)
0x19cc: Push((int) 3096)
0x19cd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x19ce: Pop(3)
0x19cf: PushEmpty(bool, object, int)
0x19d0: Stack[-2] = Stack[-4]
0x19d1: Stack[-1] = (int) -1
0x19d2: Call 0x1945

0x19d3: Pop(3)
0x19d4: Return(); Pop(2)

0x19d5: Stack[-1] = 0
0x19d6: PushEmpty(object, object)
0x19d7: Push("Adding diary entry")
0x19d8: @ Trace(Stack[-1])
0x19d9: Pop(1)
0x19da: Push((int) 63)
0x19db: Push((int) 2)
0x19dc: Push((int) 12145)
0x19dd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x19de: Pop(3)
0x19df: PushEmpty(bool, object, int)
0x19e0: Stack[-2] = Stack[-4]
0x19e1: Stack[-1] = (int) 12
0x19e2: Call 0x1945

0x19e3: Pop(3)
0x19e4: Return(); Pop(2)

0x19e5: Stack[-1] = 0
0x19e6: PushEmpty(object, object)
0x19e7: Push("Adding diary entry")
0x19e8: @ Trace(Stack[-1])
0x19e9: Pop(1)
0x19ea: Push((int) 65)
0x19eb: Push((int) 2)
0x19ec: Push((int) 12147)
0x19ed: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x19ee: Pop(3)
0x19ef: PushEmpty(bool, object, int)
0x19f0: Stack[-2] = Stack[-4]
0x19f1: Stack[-1] = (int) 12
0x19f2: Call 0x1945

0x19f3: Pop(3)
0x19f4: Return(); Pop(2)

0x19f5: Stack[-1] = 0
0x19f6: PushEmpty(object, object)
0x19f7: Push("Adding diary entry")
0x19f8: @ Trace(Stack[-1])
0x19f9: Pop(1)
0x19fa: Push((int) 66)
0x19fb: Push((int) 2)
0x19fc: Push((int) 12148)
0x19fd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x19fe: Pop(3)
0x19ff: PushEmpty(bool, object, int)
0x1a00: Stack[-2] = Stack[-4]
0x1a01: Stack[-1] = (int) 12
0x1a02: Call 0x1945

0x1a03: Pop(3)
0x1a04: Return(); Pop(2)

0x1a05: Stack[-1] = 0
0x1a06: PushEmpty(object, object)
0x1a07: Push("Adding diary entry")
0x1a08: @ Trace(Stack[-1])
0x1a09: Pop(1)
0x1a0a: Push((int) 88)
0x1a0b: Push((int) 1)
0x1a0c: Push((int) 12170)
0x1a0d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1a0e: Pop(3)
0x1a0f: PushEmpty(bool, object, int)
0x1a10: Stack[-2] = Stack[-4]
0x1a11: Stack[-1] = (int) 20
0x1a12: Call 0x1945

0x1a13: Pop(3)
0x1a14: Return(); Pop(2)

0x1a15: Stack[-1] = 0
0x1a16: PushEmpty(object, object)
0x1a17: Push("Adding diary entry")
0x1a18: @ Trace(Stack[-1])
0x1a19: Pop(1)
0x1a1a: Push((int) 143)
0x1a1b: Push((int) 1)
0x1a1c: Push((int) 15343)
0x1a1d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1a1e: Pop(3)
0x1a1f: PushEmpty(bool, object, int)
0x1a20: Stack[-2] = Stack[-4]
0x1a21: Stack[-1] = (int) 139
0x1a22: Call 0x1945

0x1a23: Pop(3)
0x1a24: Return(); Pop(2)

0x1a25: Stack[-1] = 0
0x1a26: PushEmpty(object, object)
0x1a27: Push("Adding diary entry")
0x1a28: @ Trace(Stack[-1])
0x1a29: Pop(1)
0x1a2a: Push((int) 160)
0x1a2b: Push((int) 1)
0x1a2c: Push((int) 15393)
0x1a2d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1a2e: Pop(3)
0x1a2f: PushEmpty(bool, object, int)
0x1a30: Stack[-2] = Stack[-4]
0x1a31: Stack[-1] = (int) 111
0x1a32: Call 0x1945

0x1a33: Pop(3)
0x1a34: Return(); Pop(2)

0x1a35: Stack[-1] = 0
0x1a36: PushEmpty(object, object)
0x1a37: Push("Adding diary entry")
0x1a38: @ Trace(Stack[-1])
0x1a39: Pop(1)
0x1a3a: Push((int) 118)
0x1a3b: Push((int) 1)
0x1a3c: Push((int) 13741)
0x1a3d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1a3e: Pop(3)
0x1a3f: PushEmpty(bool, object, int)
0x1a40: Stack[-2] = Stack[-4]
0x1a41: Stack[-1] = (int) 111
0x1a42: Call 0x1945

0x1a43: Pop(3)
0x1a44: Return(); Pop(2)

0x1a45: Stack[-1] = 0
0x1a46: Push(GlobalVars[1])
0x1a47: Stack[-1] = (bool) 0
0x1a48: GlobalVars[1] = Stack[-1]; Pop(1)
0x1a49: Return(); Pop(0)

0x1a4a: PushEmpty()
0x1a4b: Push(GlobalVars[1])
0x1a4c: Pop(1); Push((bool) Stack[-1] == 0)
0x1a4d: IF (Stack[-1] == 0) GOTO 0x1a57; Pop(1)

0x1a4e: PushEmpty(int, object)
0x1a4f: Stack[-1] = Stack[-3]
0x1a50: Push(-2, 1); TaskCall(2)
0x1a51: Call 0x31

0x1a52: Pop(-2, 1); TaskReturn
0x1a53: Pop(2)
0x1a54: Push(GlobalVars[1])
0x1a55: Stack[-1] = (bool) 1
0x1a56: GlobalVars[1] = Stack[-1]; Pop(1)
0x1a57: PushEmpty(bool, int)
0x1a58: Stack[-1] = (int) 1
0x1a59: Call 0x13da

0x1a5a: Pop(1)
0x1a5b: IF (Stack[-1] == 0) GOTO 0x1a63; Pop(1)

0x1a5c: PushEmpty(int, object)
0x1a5d: Stack[-1] = Stack[-3]
0x1a5e: Push(-2, 1); TaskCall(6)
0x1a5f: Call 0x4b4

0x1a60: Pop(-2, 1); TaskReturn
0x1a61: Pop(2)
0x1a62: Return(); Pop(0)

0x1a63: PushEmpty(bool, int)
0x1a64: Stack[-1] = (int) 2
0x1a65: Call 0x13da

0x1a66: Pop(1)
0x1a67: IF (Stack[-1] == 0) GOTO 0x1a6f; Pop(1)

0x1a68: PushEmpty(int, object)
0x1a69: Stack[-1] = Stack[-3]
0x1a6a: Push(-2, 1); TaskCall(8)
0x1a6b: Call 0x9b5

0x1a6c: Pop(-2, 1); TaskReturn
0x1a6d: Pop(2)
0x1a6e: Return(); Pop(0)

0x1a6f: PushEmpty(bool, int)
0x1a70: Stack[-1] = (int) 4
0x1a71: Call 0x13da

0x1a72: Pop(1)
0x1a73: IF (Stack[-1] == 0) GOTO 0x1a7b; Pop(1)

0x1a74: PushEmpty(int, object)
0x1a75: Stack[-1] = Stack[-3]
0x1a76: Push(-2, 1); TaskCall(10)
0x1a77: Call 0xd83

0x1a78: Pop(-2, 1); TaskReturn
0x1a79: Pop(2)
0x1a7a: Return(); Pop(0)

0x1a7b: PushEmpty(bool, int)
0x1a7c: Stack[-1] = (int) 5
0x1a7d: Call 0x13da

0x1a7e: Pop(1)
0x1a7f: IF (Stack[-1] == 0) GOTO 0x1a87; Pop(1)

0x1a80: PushEmpty(int, object)
0x1a81: Stack[-1] = Stack[-3]
0x1a82: Push(-2, 1); TaskCall(12)
0x1a83: Call 0x1184

0x1a84: Pop(-2, 1); TaskReturn
0x1a85: Pop(2)
0x1a86: Return(); Pop(0)

0x1a87: PushEmpty(bool, int)
0x1a88: Stack[-1] = (int) 6
0x1a89: Call 0x13da

0x1a8a: Pop(1)
0x1a8b: IF (Stack[-1] == 0) GOTO 0x1a93; Pop(1)

0x1a8c: PushEmpty(int, object)
0x1a8d: Stack[-1] = Stack[-3]
0x1a8e: Push(-2, 1); TaskCall(4)
0x1a8f: Call 0x15c

0x1a90: Pop(-2, 1); TaskReturn
0x1a91: Pop(2)
0x1a92: Return(); Pop(0)

0x1a93: PushEmpty(bool)
0x1a94: Call 0x13e0

0x1a95: Pop(1)
0x1a96: Return(); Pop(0)

