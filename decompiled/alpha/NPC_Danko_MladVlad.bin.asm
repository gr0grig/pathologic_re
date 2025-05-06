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
	GetProperty
	SetProperty
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	.bin
	.xml
	No
	ui/NPC_MladVlad.png
	ood1MladVlad3
	KnowUklad
	ood1MladVlad4
	d1q03IsKapella
	d1q03MladVladGotoOspina
	pt_map_ospina
	AddMark
	quest_d1_03
	money500 is given
	money
	playsound
	givemoney
	KnowPochka
	ood2MladVlad1
	ood2MladVlad2
	ood2MladVlad3
	ood2MladVlad4
	d2q04
	pt_map_anna
	ShowMap
	pt_map_bigvlad
	d3q02
	d3q02MladVladGotoBigVlad
	ood4MladVlad1
	d4q01
	d4q01MladVladGotoBigVlad
	d4q01MladVladGotoBigVladSelf
	pt_map_mladvlad
	d4q01_subquest
	d4q01MladVladGotoOspina
	ood4MladVlad2
	d4q02MladVladGotoAnna
	d4q02MladVladGotoJulia
	pt_map_julia
	d4q02MladVladGotoLara
	pt_map_lara
	d4q02MladVladGotoAJLSelf
	quest_d4_02
	ood4MladVlad3
	money 50000 is given
	d6q02MladVladGotoBigVlad
	d6q02MladVladGotoBigVladSelf
	quest_d6_02
	place_trigger
	ood6MladVlad1
	ood6MladVlad2
	d6q02KnowAboutAttack
	ood6MladVlad3
	quest_d6_03
	failed
	money30000 is given
	ood5MladVlad1
	ood5MladVlad2
	ood5MladVlad3
	d6q02BigVlad
	FindMark
	Remove
	d6q02KapellaGotoMladVlad
	ood8MladVlad1
	ood8MladVlad2
	ood8MladVlad3
	d8q01MladVladIsVictim
	ood8MladVlad4
	ood8MladVlad5
	KnowMladVlad
	ood1MladVlad5
	ood1MladVlad6
	ood1MladVlad7
	ood1MladVlad8
	ood1MladVlad9
	ood1MladVlad10
	ood1MladVlad11
	d5q03
	d5q03MladVladSavePrisonersSelf
	d5q03SavePrisoners
	pt_map_uprava_prison
	quest_d5_03
	place_prisoners
	KnowTaurusProject
	ood1MladVlad1
	ood1MladVlad2
	d1q01FirstGeorgVisit
	d1q03
	d2q03
	KnowViktor
	d4q02
	d5q02
	d6q02
	d6q02GorbunDeath
	d6q02Trigger
	d8q01
	d8q01MladVladIsBad
	d8q01BringBadBoy
	KnowBigVlad
	KnowGrif
	KnowKaterina
	KnowLara
	ood1MladVlad12
	KnowMaria
	KnowOspina
	KnowKapella
	KnowMyth
	KnowTermitnik
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
	AddBlankActorFromXml (4 args)
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
		EVENT_11 Op = 0x2c5 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x886 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc2a Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xeea Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x12e9 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x155b Vars = (int, int)
	GTASK_16 Vars = (object) Params = 2
	GTASK_17 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x17d7 Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x22a1

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0x1b94

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
0x15: Call 0x1bd5

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
0x26: Call 0x22a5

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x1b88

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0x1b99

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0x1c3c

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0x1c3e

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x21e0

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
0x67: Call 0x1bd1

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
0x79: Call 0x1e2b

0x7a: Pop(2)
0x7b: PushEmpty(object, object)
0x7c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7e: Call 0x1c80

0x7f: Pop(2)
0x80: PushEmpty(string)
0x81: Stack[-1] = "Neutral"
0x82: Call 0xb4

0x83: Pop(1)
0x84: Push((int) 416)
0x85: @@ SetMessage(Stack[-1])
0x86: Pop(1)
0x87: @@ ClearReplies()
0x88: Pop(0)
0x89: Push((int) 417)
0x8a: Push((int) 487)
0x8b: Push((int) 485)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: Push((int) 418)
0x8f: Push((int) 9271)
0x90: Push((int) 486)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: GOTO 0x96

0x94: Return(); Pop(0)

0x95: GOTO 0x74

0x96: PushEmpty(bool)
0x97: Call 0x1c40

0x98: Pop(0)
0x99: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9a: @ lshWaitForAnimEnd()
0x9b: Pop(0)
0x9c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xa4

0x9f: PushEmpty(string)
0xa0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa1: Call 0x1bd5

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
0xb6: Call 0x1c40

0xb7: Pop(0)
0xb8: Pop(1); Push((bool) Stack[-1] == 0)
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: Return(); Pop(0)

0xbb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Return(); Pop(0)

0xbe: PushEmpty(string)
0xbf: Stack[-1] = Stack[-2]
0xc0: Call 0x1bd5

0xc1: Pop(1)
0xc2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: Push((int) 1)
0xc6: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0xc7: PushEmpty()
0xc8: Call 0x1be7

0xc9: Pop(0)
0xca: Push((int) 484)
0xcb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call 0x1e2b

0xd1: Pop(2)
0xd2: PushEmpty(object, object)
0xd3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd5: Call 0x1c80

0xd6: Pop(2)
0xd7: PushEmpty(string)
0xd8: Stack[-1] = "Neutral"
0xd9: Call 0xb4

0xda: Pop(1)
0xdb: Push((int) 416)
0xdc: @@ SetMessage(Stack[-1])
0xdd: Pop(1)
0xde: @@ ClearReplies()
0xdf: Pop(0)
0xe0: Push((int) 417)
0xe1: Push((int) 487)
0xe2: Push((int) 485)
0xe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: Push((int) 418)
0xe6: Push((int) 9271)
0xe7: Push((int) 486)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Return(); Pop(0)

0xeb: Push((int) 487)
0xec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xee: PushEmpty(string)
0xef: Stack[-1] = "Neutral"
0xf0: Call 0xb4

0xf1: Pop(1)
0xf2: Push((int) 419)
0xf3: @@ SetMessage(Stack[-1])
0xf4: Pop(1)
0xf5: @@ ClearReplies()
0xf6: Pop(0)
0xf7: Push((int) 420)
0xf8: Push((int) 9271)
0xf9: Push((int) 488)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Push((int) 421)
0xfd: Push((int) 9271)
0xfe: Push((int) 489)
0xff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100: Pop(3)
0x101: Push((int) 422)
0x102: Push((int) 9271)
0x103: Push((int) 490)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Return(); Pop(0)

0x107: Push((int) 9271)
0x108: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x10a: PushEmpty(string)
0x10b: Stack[-1] = "Neutral"
0x10c: Call 0xb4

0x10d: Pop(1)
0x10e: Push((int) 8445)
0x10f: @@ SetMessage(Stack[-1])
0x110: Pop(1)
0x111: @@ ClearReplies()
0x112: Pop(0)
0x113: Push((int) 8446)
0x114: Push((int) -1)
0x115: Push((int) 9275)
0x116: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117: Pop(3)
0x118: Push((int) 8447)
0x119: Push((int) -1)
0x11a: Push((int) 9276)
0x11b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: Return(); Pop(0)

0x11e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x11f: PushEmpty(bool)
0x120: Call 0x1c40

0x121: Pop(0)
0x122: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x123: @ lshStopAnimation()
0x124: Pop(0)
0x125: GOTO 0x128

0x126: @ StopAnimation()
0x127: Pop(0)
0x128: Return(); Pop(0)

0x129: GOTO 0xc5

0x12a: Return(); Pop(0)

0x12b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x12c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x12d: PushEmpty(bool, object)
0x12e: Stack[-1] = Stack[-11]
0x12f: Call 0x1b99

0x130: Pop(1)
0x131: Pop(1); Push((bool) Stack[-1] == 0)
0x132: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x133: Stack[-10] = (int) -2
0x134: Return(); Pop(8)

0x135: @ CreateDialog(Stack[-4])
0x136: Pop(0)
0x137: PushEmpty(int)
0x138: Call 0x1c3c

0x139: Pop(0)
0x13a: @@ SetNPCName(Stack[-1])
0x13b: Pop(1)
0x13c: PushEmpty(string)
0x13d: Call 0x1c3e

0x13e: Pop(0)
0x13f: @@ SetPhoto(Stack[-1])
0x140: Pop(1)
0x141: PushEmpty(int)
0x142: Call 0x21e0

0x143: Pop(0)
0x144: @@ SetPlayerName(Stack[-1])
0x145: Pop(1)
0x146: Stack[-2] = (int) -1
0x147: @ IsOverrideActive(Stack[-3])
0x148: Pop(0)
0x149: Push(Stack[-3])
0x14a: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14b: Stack[-10] = (int) -2
0x14c: Return(); Pop(8)

0x14d: @ DoDialog(Stack[-4])
0x14e: Pop(0)
0x14f: PushEmpty(object, object)
0x150: Stack[-2] = Stack[-11]
0x151: Stack[-1] = Stack[-6]
0x152: Push(-2, 4); TaskCall(5)
0x153: Call 0x16a

0x154: Pop(-2, 4); TaskReturn
0x155: Pop(2)
0x156: @@ IsDialogEnd(Stack[-1])
0x157: Pop(0)
0x158: Pop(0); Push((bool) Stack[-1] == 0)
0x159: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15a: @ sync()
0x15b: Pop(0)
0x15c: @@ IsDialogEnd(Stack[-1])
0x15d: Pop(0)
0x15e: GOTO 0x158

0x15f: PushEmpty(object)
0x160: Stack[-1] = Stack[-10]
0x161: Call 0x1bd1

0x162: Pop(1)
0x163: @ StopDialog(Stack[-4])
0x164: Pop(0)
0x165: @@ GetReturnValue(Stack[-2])
0x166: Pop(0)
0x167: Stack[-10] = Stack[-2]
0x168: Return(); Pop(8)

0x169: Stack[-4] = 0
0x16a: PushEmpty()
0x16b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x16c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x16d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x16e: Push((int) 1)
0x16f: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x170: PushEmpty(bool)
0x171: Stack[-1] = (bool) 0
0x172: PushEmpty(bool, object)
0x173: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x174: Call 0x215d

0x175: Pop(1)
0x176: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x177: PushEmpty(bool, object)
0x178: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x179: Call 0x1eba

0x17a: Pop(1)
0x17b: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17c: Stack[-1] = (bool) 1
0x17d: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x17e: PushEmpty(string)
0x17f: Stack[-1] = "Neutral"
0x180: Call 0x2b5

0x181: Pop(1)
0x182: Push((int) 5694)
0x183: @@ SetMessage(Stack[-1])
0x184: Pop(1)
0x185: @@ ClearReplies()
0x186: Pop(0)
0x187: Push((int) 5695)
0x188: Push((int) 6518)
0x189: Push((int) 6277)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: Push((int) 5698)
0x18d: Push((int) -1)
0x18e: Push((int) 6280)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Push((int) 5930)
0x192: Push((int) 6526)
0x193: Push((int) 6525)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: GOTO 0x297

0x197: PushEmpty(string)
0x198: Stack[-1] = "Neutral"
0x199: Call 0x2b5

0x19a: Pop(1)
0x19b: Push((int) 5699)
0x19c: @@ SetMessage(Stack[-1])
0x19d: Pop(1)
0x19e: @@ ClearReplies()
0x19f: Pop(0)
0x1a0: PushEmpty(bool)
0x1a1: Stack[-1] = (bool) 0
0x1a2: PushEmpty(bool)
0x1a3: Stack[-1] = (bool) 0
0x1a4: PushEmpty(bool, object)
0x1a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a6: Call 0x1ea2

0x1a7: Pop(1)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a9: PushEmpty(bool, object)
0x1aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ab: Call 0x1ec6

0x1ac: Pop(1)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ae: Stack[-1] = (bool) 1
0x1af: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b0: PushEmpty(bool, object)
0x1b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b2: Call 0x1ed2

0x1b3: Pop(1)
0x1b4: Pop(1); Push((bool) Stack[-1] == 0)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b6: Stack[-1] = (bool) 1
0x1b7: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1b8: Push((int) 5697)
0x1b9: Push((int) 6705)
0x1ba: Push((int) 6279)
0x1bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bc: Pop(3)
0x1bd: PushEmpty(bool)
0x1be: Stack[-1] = (bool) 0
0x1bf: PushEmpty(bool, object)
0x1c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c1: Call 0x1eba

0x1c2: Pop(1)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c4: PushEmpty(bool, object)
0x1c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c6: Call 0x215d

0x1c7: Pop(1)
0x1c8: Pop(1); Push((bool) Stack[-1] == 0)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1ca: Stack[-1] = (bool) 1
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cc: Push((int) 5700)
0x1cd: Push((int) 16487)
0x1ce: Push((int) 6282)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: PushEmpty(bool)
0x1d2: Stack[-1] = (bool) 0
0x1d3: PushEmpty(bool, object)
0x1d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d5: Call 0x2175

0x1d6: Pop(1)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1d8: PushEmpty(bool, object)
0x1d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1da: Call 0x1eae

0x1db: Pop(1)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1dd: Stack[-1] = (bool) 1
0x1de: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1df: Push((int) 8220)
0x1e0: Push((int) 6283)
0x1e1: Push((int) 9043)
0x1e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e3: Pop(3)
0x1e4: PushEmpty(bool)
0x1e5: Stack[-1] = (bool) 0
0x1e6: PushEmpty(bool, object)
0x1e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e8: Call 0x2139

0x1e9: Pop(1)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1eb: PushEmpty(bool, object)
0x1ec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ed: Call 0x2169

0x1ee: Pop(1)
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1f0: Stack[-1] = (bool) 1
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f2: Push((int) 8223)
0x1f3: Push((int) 6294)
0x1f4: Push((int) 9046)
0x1f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f6: Pop(3)
0x1f7: PushEmpty(bool)
0x1f8: Stack[-1] = (bool) 0
0x1f9: PushEmpty(bool, object)
0x1fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fb: Call 0x20a9

0x1fc: Pop(1)
0x1fd: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1fe: PushEmpty(bool, object)
0x1ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x200: Call 0x20b5

0x201: Pop(1)
0x202: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x203: Stack[-1] = (bool) 1
0x204: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x205: Push((int) 8226)
0x206: Push((int) 9070)
0x207: Push((int) 9049)
0x208: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x209: Pop(3)
0x20a: PushEmpty(bool)
0x20b: Stack[-1] = (bool) 0
0x20c: PushEmpty(bool, object)
0x20d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20e: Call 0x2121

0x20f: Pop(1)
0x210: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x211: PushEmpty(bool, object)
0x212: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x213: Call 0x20c1

0x214: Pop(1)
0x215: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x216: Stack[-1] = (bool) 1
0x217: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x218: Push((int) 8229)
0x219: Push((int) 9071)
0x21a: Push((int) 9052)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: PushEmpty(bool)
0x21e: Stack[-1] = (bool) 0
0x21f: PushEmpty(bool, object)
0x220: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x221: Call 0x209d

0x222: Pop(1)
0x223: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x224: PushEmpty(bool, object)
0x225: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x226: Call 0x20cd

0x227: Pop(1)
0x228: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x229: Stack[-1] = (bool) 1
0x22a: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22b: Push((int) 8231)
0x22c: Push((int) 9072)
0x22d: Push((int) 9054)
0x22e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22f: Pop(3)
0x230: PushEmpty(bool)
0x231: Stack[-1] = (bool) 0
0x232: PushEmpty(bool, object)
0x233: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x234: Call 0x2085

0x235: Pop(1)
0x236: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x237: PushEmpty(bool, object)
0x238: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x239: Call 0x20d9

0x23a: Pop(1)
0x23b: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23c: Stack[-1] = (bool) 1
0x23d: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x23e: Push((int) 8234)
0x23f: Push((int) 9073)
0x240: Push((int) 9057)
0x241: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x242: Pop(3)
0x243: PushEmpty(bool)
0x244: Stack[-1] = (bool) 0
0x245: PushEmpty(bool, object)
0x246: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x247: Call 0x1f30

0x248: Pop(1)
0x249: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24a: PushEmpty(bool, object)
0x24b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24c: Call 0x20e5

0x24d: Pop(1)
0x24e: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24f: Stack[-1] = (bool) 1
0x250: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x251: Push((int) 8235)
0x252: Push((int) 9074)
0x253: Push((int) 9058)
0x254: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x255: Pop(3)
0x256: PushEmpty(bool)
0x257: Stack[-1] = (bool) 0
0x258: PushEmpty(bool, object)
0x259: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x25a: Call 0x2091

0x25b: Pop(1)
0x25c: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x25d: PushEmpty(bool, object)
0x25e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x25f: Call 0x20f1

0x260: Pop(1)
0x261: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x262: Stack[-1] = (bool) 1
0x263: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x264: Push((int) 8238)
0x265: Push((int) 9075)
0x266: Push((int) 9061)
0x267: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x268: Pop(3)
0x269: PushEmpty(bool)
0x26a: Stack[-1] = (bool) 0
0x26b: PushEmpty(bool, object)
0x26c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x26d: Call 0x212d

0x26e: Pop(1)
0x26f: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x270: PushEmpty(bool, object)
0x271: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x272: Call 0x20fd

0x273: Pop(1)
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: Stack[-1] = (bool) 1
0x276: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x277: Push((int) 8241)
0x278: Push((int) 9076)
0x279: Push((int) 9064)
0x27a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27b: Pop(3)
0x27c: PushEmpty(bool)
0x27d: Stack[-1] = (bool) 0
0x27e: PushEmpty(bool, object)
0x27f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x280: Call 0x2115

0x281: Pop(1)
0x282: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x283: PushEmpty(bool, object)
0x284: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x285: Call 0x2109

0x286: Pop(1)
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: Stack[-1] = (bool) 1
0x289: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28a: Push((int) 8246)
0x28b: Push((int) 9077)
0x28c: Push((int) 9069)
0x28d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28e: Pop(3)
0x28f: Push((int) 6265)
0x290: Push((int) -1)
0x291: Push((int) 6932)
0x292: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x293: Pop(3)
0x294: GOTO 0x297

0x295: Return(); Pop(0)

0x296: GOTO 0x16e

0x297: PushEmpty(bool)
0x298: Call 0x1c40

0x299: Pop(0)
0x29a: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x29b: @ lshWaitForAnimEnd()
0x29c: Pop(0)
0x29d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x29e: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29f: GOTO 0x2a5

0x2a0: PushEmpty(string)
0x2a1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2a2: Call 0x1bd5

0x2a3: Pop(1)
0x2a4: GOTO 0x29b

0x2a5: GOTO 0x2b4

0x2a6: Push("all")
0x2a7: Push("idle")
0x2a8: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a9: Pop(2)
0x2aa: @ WaitForAnimEnd()
0x2ab: Pop(0)
0x2ac: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2ad: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ae: GOTO 0x2b4

0x2af: Push("all")
0x2b0: Push("idle")
0x2b1: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b2: Pop(2)
0x2b3: GOTO 0x2aa

0x2b4: Return(); Pop(0)

0x2b5: PushEmpty()
0x2b6: PushEmpty(bool)
0x2b7: Call 0x1c40

0x2b8: Pop(0)
0x2b9: Pop(1); Push((bool) Stack[-1] == 0)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2bb: Return(); Pop(0)

0x2bc: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: Return(); Pop(0)

0x2bf: PushEmpty(string)
0x2c0: Stack[-1] = Stack[-2]
0x2c1: Call 0x1bd5

0x2c2: Pop(1)
0x2c3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2c4: Return(); Pop(0)

0x2c5: PushEmpty()
0x2c6: Push((int) 1)
0x2c7: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x2c8: PushEmpty()
0x2c9: Call 0x1be7

0x2ca: Pop(0)
0x2cb: Push((int) 6555)
0x2cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2ce: PushEmpty(object, object)
0x2cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d1: Call 0x1e96

0x2d2: Pop(2)
0x2d3: PushEmpty(object, object)
0x2d4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d6: Call 0x1c54

0x2d7: Pop(2)
0x2d8: PushEmpty(object, object)
0x2d9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2db: Call 0x1cb4

0x2dc: Pop(2)
0x2dd: Push((int) 6567)
0x2de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e0: PushEmpty(object, object)
0x2e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e3: Call 0x1e96

0x2e4: Pop(2)
0x2e5: Push((int) 6552)
0x2e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e7: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2e8: PushEmpty(object, object)
0x2e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2eb: Call 0x1e96

0x2ec: Pop(2)
0x2ed: Push((int) 6553)
0x2ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f0: PushEmpty(object, object)
0x2f1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f3: Call 0x1e96

0x2f4: Pop(2)
0x2f5: Push((int) 6523)
0x2f6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f8: PushEmpty(object, object)
0x2f9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2fa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fb: Call 0x1e90

0x2fc: Pop(2)
0x2fd: Push((int) 6710)
0x2fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x300: PushEmpty(object, object)
0x301: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x302: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x303: Call 0x1c4e

0x304: Pop(2)
0x305: PushEmpty(object, object)
0x306: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x307: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x308: Call 0x1c6f

0x309: Pop(2)
0x30a: PushEmpty(object, object)
0x30b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x30c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30d: Call 0x1c7a

0x30e: Pop(2)
0x30f: Push((int) 6711)
0x310: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x312: PushEmpty(object, object)
0x313: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x314: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x315: Call 0x1c4e

0x316: Pop(2)
0x317: PushEmpty(object, object)
0x318: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x319: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31a: Call 0x1c7a

0x31b: Pop(2)
0x31c: PushEmpty(object, object)
0x31d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x31e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31f: Call 0x1c6f

0x320: Pop(2)
0x321: Push((int) 6712)
0x322: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x323: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x324: PushEmpty(object, object)
0x325: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x326: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x327: Call 0x1c4e

0x328: Pop(2)
0x329: Push((int) 16488)
0x32a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x32c: PushEmpty(object, object)
0x32d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x32e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32f: Call 0x1c54

0x330: Pop(2)
0x331: PushEmpty(object, object)
0x332: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x333: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x334: Call 0x1cb4

0x335: Pop(2)
0x336: Push((int) 9043)
0x337: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x339: PushEmpty(object, object)
0x33a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x33b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33c: Call 0x1c42

0x33d: Pop(2)
0x33e: Push((int) 9046)
0x33f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x340: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x341: PushEmpty(object, object)
0x342: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x343: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x344: Call 0x1e9c

0x345: Pop(2)
0x346: Push((int) 9049)
0x347: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x348: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x349: PushEmpty(object, object)
0x34a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x34b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34c: Call 0x1e31

0x34d: Pop(2)
0x34e: Push((int) 9052)
0x34f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x350: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x351: PushEmpty(object, object)
0x352: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x353: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x354: Call 0x1e37

0x355: Pop(2)
0x356: Push((int) 9054)
0x357: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x359: PushEmpty(object, object)
0x35a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x35b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35c: Call 0x1e3d

0x35d: Pop(2)
0x35e: Push((int) 9057)
0x35f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x360: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x361: PushEmpty(object, object)
0x362: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x363: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x364: Call 0x1e43

0x365: Pop(2)
0x366: Push((int) 9058)
0x367: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x368: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x369: PushEmpty(object, object)
0x36a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x36b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36c: Call 0x1e49

0x36d: Pop(2)
0x36e: Push((int) 9061)
0x36f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x370: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x371: PushEmpty(object, object)
0x372: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x373: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x374: Call 0x1e4f

0x375: Pop(2)
0x376: Push((int) 9064)
0x377: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x378: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x379: PushEmpty(object, object)
0x37a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x37b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x37c: Call 0x1e55

0x37d: Pop(2)
0x37e: Push((int) 6276)
0x37f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x380: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x381: PushEmpty(bool)
0x382: Stack[-1] = (bool) 0
0x383: PushEmpty(bool, object)
0x384: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x385: Call 0x215d

0x386: Pop(1)
0x387: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x388: PushEmpty(bool, object)
0x389: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x38a: Call 0x1eba

0x38b: Pop(1)
0x38c: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38d: Stack[-1] = (bool) 1
0x38e: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x38f: PushEmpty(string)
0x390: Stack[-1] = "Neutral"
0x391: Call 0x2b5

0x392: Pop(1)
0x393: Push((int) 5694)
0x394: @@ SetMessage(Stack[-1])
0x395: Pop(1)
0x396: @@ ClearReplies()
0x397: Pop(0)
0x398: Push((int) 5695)
0x399: Push((int) 6518)
0x39a: Push((int) 6277)
0x39b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39c: Pop(3)
0x39d: Push((int) 5698)
0x39e: Push((int) -1)
0x39f: Push((int) 6280)
0x3a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a1: Pop(3)
0x3a2: Push((int) 5930)
0x3a3: Push((int) 6526)
0x3a4: Push((int) 6525)
0x3a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a6: Pop(3)
0x3a7: Return(); Pop(0)

0x3a8: PushEmpty(string)
0x3a9: Stack[-1] = "Neutral"
0x3aa: Call 0x2b5

0x3ab: Pop(1)
0x3ac: Push((int) 5699)
0x3ad: @@ SetMessage(Stack[-1])
0x3ae: Pop(1)
0x3af: @@ ClearReplies()
0x3b0: Pop(0)
0x3b1: PushEmpty(bool)
0x3b2: Stack[-1] = (bool) 0
0x3b3: PushEmpty(bool)
0x3b4: Stack[-1] = (bool) 0
0x3b5: PushEmpty(bool, object)
0x3b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b7: Call 0x1ea2

0x3b8: Pop(1)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3ba: PushEmpty(bool, object)
0x3bb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3bc: Call 0x1ec6

0x3bd: Pop(1)
0x3be: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bf: Stack[-1] = (bool) 1
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c1: PushEmpty(bool, object)
0x3c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c3: Call 0x1ed2

0x3c4: Pop(1)
0x3c5: Pop(1); Push((bool) Stack[-1] == 0)
0x3c6: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c7: Stack[-1] = (bool) 1
0x3c8: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3c9: Push((int) 5697)
0x3ca: Push((int) 6705)
0x3cb: Push((int) 6279)
0x3cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cd: Pop(3)
0x3ce: PushEmpty(bool)
0x3cf: Stack[-1] = (bool) 0
0x3d0: PushEmpty(bool, object)
0x3d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d2: Call 0x1eba

0x3d3: Pop(1)
0x3d4: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3d5: PushEmpty(bool, object)
0x3d6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d7: Call 0x215d

0x3d8: Pop(1)
0x3d9: Pop(1); Push((bool) Stack[-1] == 0)
0x3da: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3db: Stack[-1] = (bool) 1
0x3dc: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3dd: Push((int) 5700)
0x3de: Push((int) 16487)
0x3df: Push((int) 6282)
0x3e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e1: Pop(3)
0x3e2: PushEmpty(bool)
0x3e3: Stack[-1] = (bool) 0
0x3e4: PushEmpty(bool, object)
0x3e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e6: Call 0x2175

0x3e7: Pop(1)
0x3e8: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3e9: PushEmpty(bool, object)
0x3ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3eb: Call 0x1eae

0x3ec: Pop(1)
0x3ed: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ee: Stack[-1] = (bool) 1
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f0: Push((int) 8220)
0x3f1: Push((int) 6283)
0x3f2: Push((int) 9043)
0x3f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f4: Pop(3)
0x3f5: PushEmpty(bool)
0x3f6: Stack[-1] = (bool) 0
0x3f7: PushEmpty(bool, object)
0x3f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f9: Call 0x2139

0x3fa: Pop(1)
0x3fb: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3fc: PushEmpty(bool, object)
0x3fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3fe: Call 0x2169

0x3ff: Pop(1)
0x400: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x401: Stack[-1] = (bool) 1
0x402: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x403: Push((int) 8223)
0x404: Push((int) 6294)
0x405: Push((int) 9046)
0x406: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x407: Pop(3)
0x408: PushEmpty(bool)
0x409: Stack[-1] = (bool) 0
0x40a: PushEmpty(bool, object)
0x40b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x40c: Call 0x20a9

0x40d: Pop(1)
0x40e: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x40f: PushEmpty(bool, object)
0x410: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x411: Call 0x20b5

0x412: Pop(1)
0x413: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x414: Stack[-1] = (bool) 1
0x415: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x416: Push((int) 8226)
0x417: Push((int) 9070)
0x418: Push((int) 9049)
0x419: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41a: Pop(3)
0x41b: PushEmpty(bool)
0x41c: Stack[-1] = (bool) 0
0x41d: PushEmpty(bool, object)
0x41e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x41f: Call 0x2121

0x420: Pop(1)
0x421: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x422: PushEmpty(bool, object)
0x423: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x424: Call 0x20c1

0x425: Pop(1)
0x426: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x427: Stack[-1] = (bool) 1
0x428: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x429: Push((int) 8229)
0x42a: Push((int) 9071)
0x42b: Push((int) 9052)
0x42c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42d: Pop(3)
0x42e: PushEmpty(bool)
0x42f: Stack[-1] = (bool) 0
0x430: PushEmpty(bool, object)
0x431: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x432: Call 0x209d

0x433: Pop(1)
0x434: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x435: PushEmpty(bool, object)
0x436: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x437: Call 0x20cd

0x438: Pop(1)
0x439: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x43a: Stack[-1] = (bool) 1
0x43b: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x43c: Push((int) 8231)
0x43d: Push((int) 9072)
0x43e: Push((int) 9054)
0x43f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x440: Pop(3)
0x441: PushEmpty(bool)
0x442: Stack[-1] = (bool) 0
0x443: PushEmpty(bool, object)
0x444: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x445: Call 0x2085

0x446: Pop(1)
0x447: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x448: PushEmpty(bool, object)
0x449: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x44a: Call 0x20d9

0x44b: Pop(1)
0x44c: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44d: Stack[-1] = (bool) 1
0x44e: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x44f: Push((int) 8234)
0x450: Push((int) 9073)
0x451: Push((int) 9057)
0x452: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x453: Pop(3)
0x454: PushEmpty(bool)
0x455: Stack[-1] = (bool) 0
0x456: PushEmpty(bool, object)
0x457: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x458: Call 0x1f30

0x459: Pop(1)
0x45a: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45b: PushEmpty(bool, object)
0x45c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x45d: Call 0x20e5

0x45e: Pop(1)
0x45f: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x460: Stack[-1] = (bool) 1
0x461: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x462: Push((int) 8235)
0x463: Push((int) 9074)
0x464: Push((int) 9058)
0x465: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x466: Pop(3)
0x467: PushEmpty(bool)
0x468: Stack[-1] = (bool) 0
0x469: PushEmpty(bool, object)
0x46a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x46b: Call 0x2091

0x46c: Pop(1)
0x46d: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x46e: PushEmpty(bool, object)
0x46f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x470: Call 0x20f1

0x471: Pop(1)
0x472: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x473: Stack[-1] = (bool) 1
0x474: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x475: Push((int) 8238)
0x476: Push((int) 9075)
0x477: Push((int) 9061)
0x478: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x479: Pop(3)
0x47a: PushEmpty(bool)
0x47b: Stack[-1] = (bool) 0
0x47c: PushEmpty(bool, object)
0x47d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47e: Call 0x212d

0x47f: Pop(1)
0x480: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x481: PushEmpty(bool, object)
0x482: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x483: Call 0x20fd

0x484: Pop(1)
0x485: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x486: Stack[-1] = (bool) 1
0x487: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x488: Push((int) 8241)
0x489: Push((int) 9076)
0x48a: Push((int) 9064)
0x48b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48c: Pop(3)
0x48d: PushEmpty(bool)
0x48e: Stack[-1] = (bool) 0
0x48f: PushEmpty(bool, object)
0x490: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x491: Call 0x2115

0x492: Pop(1)
0x493: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x494: PushEmpty(bool, object)
0x495: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x496: Call 0x2109

0x497: Pop(1)
0x498: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x499: Stack[-1] = (bool) 1
0x49a: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49b: Push((int) 8246)
0x49c: Push((int) 9077)
0x49d: Push((int) 9069)
0x49e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49f: Pop(3)
0x4a0: Push((int) 6265)
0x4a1: Push((int) -1)
0x4a2: Push((int) 6932)
0x4a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a4: Pop(3)
0x4a5: Return(); Pop(0)

0x4a6: Push((int) 9077)
0x4a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4a9: PushEmpty(string)
0x4aa: Stack[-1] = "Neutral"
0x4ab: Call 0x2b5

0x4ac: Pop(1)
0x4ad: Push((int) 8254)
0x4ae: @@ SetMessage(Stack[-1])
0x4af: Pop(1)
0x4b0: @@ ClearReplies()
0x4b1: Pop(0)
0x4b2: Push((int) 15212)
0x4b3: Push((int) -1)
0x4b4: Push((int) 16489)
0x4b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b6: Pop(3)
0x4b7: Return(); Pop(0)

0x4b8: Push((int) 9076)
0x4b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4bb: PushEmpty(string)
0x4bc: Stack[-1] = "Neutral"
0x4bd: Call 0x2b5

0x4be: Pop(1)
0x4bf: Push((int) 8253)
0x4c0: @@ SetMessage(Stack[-1])
0x4c1: Pop(1)
0x4c2: @@ ClearReplies()
0x4c3: Pop(0)
0x4c4: Push((int) 15213)
0x4c5: Push((int) -1)
0x4c6: Push((int) 16490)
0x4c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c8: Pop(3)
0x4c9: Return(); Pop(0)

0x4ca: Push((int) 9075)
0x4cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4cc: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4cd: PushEmpty(string)
0x4ce: Stack[-1] = "Neutral"
0x4cf: Call 0x2b5

0x4d0: Pop(1)
0x4d1: Push((int) 8252)
0x4d2: @@ SetMessage(Stack[-1])
0x4d3: Pop(1)
0x4d4: @@ ClearReplies()
0x4d5: Pop(0)
0x4d6: Push((int) 15214)
0x4d7: Push((int) -1)
0x4d8: Push((int) 16491)
0x4d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4da: Pop(3)
0x4db: Return(); Pop(0)

0x4dc: Push((int) 9074)
0x4dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4de: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4df: PushEmpty(string)
0x4e0: Stack[-1] = "Neutral"
0x4e1: Call 0x2b5

0x4e2: Pop(1)
0x4e3: Push((int) 8251)
0x4e4: @@ SetMessage(Stack[-1])
0x4e5: Pop(1)
0x4e6: @@ ClearReplies()
0x4e7: Pop(0)
0x4e8: Push((int) 15215)
0x4e9: Push((int) -1)
0x4ea: Push((int) 16492)
0x4eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ec: Pop(3)
0x4ed: Return(); Pop(0)

0x4ee: Push((int) 9073)
0x4ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f0: IF (Stack[-1] == 0) GOTO 0x500; Pop(1)

0x4f1: PushEmpty(string)
0x4f2: Stack[-1] = "Neutral"
0x4f3: Call 0x2b5

0x4f4: Pop(1)
0x4f5: Push((int) 8250)
0x4f6: @@ SetMessage(Stack[-1])
0x4f7: Pop(1)
0x4f8: @@ ClearReplies()
0x4f9: Pop(0)
0x4fa: Push((int) 15216)
0x4fb: Push((int) -1)
0x4fc: Push((int) 16493)
0x4fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fe: Pop(3)
0x4ff: Return(); Pop(0)

0x500: Push((int) 9072)
0x501: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x502: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x503: PushEmpty(string)
0x504: Stack[-1] = "Neutral"
0x505: Call 0x2b5

0x506: Pop(1)
0x507: Push((int) 8249)
0x508: @@ SetMessage(Stack[-1])
0x509: Pop(1)
0x50a: @@ ClearReplies()
0x50b: Pop(0)
0x50c: Push((int) 15217)
0x50d: Push((int) -1)
0x50e: Push((int) 16494)
0x50f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x510: Pop(3)
0x511: Return(); Pop(0)

0x512: Push((int) 9071)
0x513: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x514: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x515: PushEmpty(string)
0x516: Stack[-1] = "Neutral"
0x517: Call 0x2b5

0x518: Pop(1)
0x519: Push((int) 8248)
0x51a: @@ SetMessage(Stack[-1])
0x51b: Pop(1)
0x51c: @@ ClearReplies()
0x51d: Pop(0)
0x51e: Push((int) 15218)
0x51f: Push((int) -1)
0x520: Push((int) 16495)
0x521: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x522: Pop(3)
0x523: Return(); Pop(0)

0x524: Push((int) 9070)
0x525: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x526: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x527: PushEmpty(string)
0x528: Stack[-1] = "Neutral"
0x529: Call 0x2b5

0x52a: Pop(1)
0x52b: Push((int) 8247)
0x52c: @@ SetMessage(Stack[-1])
0x52d: Pop(1)
0x52e: @@ ClearReplies()
0x52f: Pop(0)
0x530: Push((int) 15219)
0x531: Push((int) -1)
0x532: Push((int) 16496)
0x533: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x534: Pop(3)
0x535: Return(); Pop(0)

0x536: Push((int) 6294)
0x537: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x538: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x539: PushEmpty(string)
0x53a: Stack[-1] = "Neutral"
0x53b: Call 0x2b5

0x53c: Pop(1)
0x53d: Push((int) 5711)
0x53e: @@ SetMessage(Stack[-1])
0x53f: Pop(1)
0x540: @@ ClearReplies()
0x541: Pop(0)
0x542: Push((int) 5712)
0x543: Push((int) 6296)
0x544: Push((int) 6295)
0x545: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x546: Pop(3)
0x547: Push((int) 5717)
0x548: Push((int) 6296)
0x549: Push((int) 6300)
0x54a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54b: Pop(3)
0x54c: Push((int) 5718)
0x54d: Push((int) -1)
0x54e: Push((int) 6302)
0x54f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x550: Pop(3)
0x551: Return(); Pop(0)

0x552: Push((int) 6296)
0x553: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x554: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x555: PushEmpty(string)
0x556: Stack[-1] = "Neutral"
0x557: Call 0x2b5

0x558: Pop(1)
0x559: Push((int) 5713)
0x55a: @@ SetMessage(Stack[-1])
0x55b: Pop(1)
0x55c: @@ ClearReplies()
0x55d: Pop(0)
0x55e: Push((int) 5714)
0x55f: Push((int) 6298)
0x560: Push((int) 6297)
0x561: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x562: Pop(3)
0x563: Push((int) 5716)
0x564: Push((int) -1)
0x565: Push((int) 6299)
0x566: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x567: Pop(3)
0x568: Return(); Pop(0)

0x569: Push((int) 6298)
0x56a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56b: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x56c: PushEmpty(string)
0x56d: Stack[-1] = "Neutral"
0x56e: Call 0x2b5

0x56f: Pop(1)
0x570: Push((int) 5715)
0x571: @@ SetMessage(Stack[-1])
0x572: Pop(1)
0x573: @@ ClearReplies()
0x574: Pop(0)
0x575: Push((int) 5719)
0x576: Push((int) -1)
0x577: Push((int) 6303)
0x578: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x579: Pop(3)
0x57a: Return(); Pop(0)

0x57b: Push((int) 6283)
0x57c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57d: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x57e: PushEmpty(string)
0x57f: Stack[-1] = "Neutral"
0x580: Call 0x2b5

0x581: Pop(1)
0x582: Push((int) 5701)
0x583: @@ SetMessage(Stack[-1])
0x584: Pop(1)
0x585: @@ ClearReplies()
0x586: Pop(0)
0x587: Push((int) 5702)
0x588: Push((int) 6285)
0x589: Push((int) 6284)
0x58a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58b: Pop(3)
0x58c: Return(); Pop(0)

0x58d: Push((int) 6285)
0x58e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58f: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x590: PushEmpty(string)
0x591: Stack[-1] = "Neutral"
0x592: Call 0x2b5

0x593: Pop(1)
0x594: Push((int) 5703)
0x595: @@ SetMessage(Stack[-1])
0x596: Pop(1)
0x597: @@ ClearReplies()
0x598: Pop(0)
0x599: Push((int) 5704)
0x59a: Push((int) 6287)
0x59b: Push((int) 6286)
0x59c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59d: Pop(3)
0x59e: Push((int) 5710)
0x59f: Push((int) 6287)
0x5a0: Push((int) 6292)
0x5a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a2: Pop(3)
0x5a3: Return(); Pop(0)

0x5a4: Push((int) 6287)
0x5a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a6: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5a7: PushEmpty(string)
0x5a8: Stack[-1] = "Neutral"
0x5a9: Call 0x2b5

0x5aa: Pop(1)
0x5ab: Push((int) 5705)
0x5ac: @@ SetMessage(Stack[-1])
0x5ad: Pop(1)
0x5ae: @@ ClearReplies()
0x5af: Pop(0)
0x5b0: Push((int) 5706)
0x5b1: Push((int) 6289)
0x5b2: Push((int) 6288)
0x5b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b4: Pop(3)
0x5b5: Return(); Pop(0)

0x5b6: Push((int) 6289)
0x5b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b8: IF (Stack[-1] == 0) GOTO 0x5cd; Pop(1)

0x5b9: PushEmpty(string)
0x5ba: Stack[-1] = "Neutral"
0x5bb: Call 0x2b5

0x5bc: Pop(1)
0x5bd: Push((int) 5707)
0x5be: @@ SetMessage(Stack[-1])
0x5bf: Pop(1)
0x5c0: @@ ClearReplies()
0x5c1: Pop(0)
0x5c2: Push((int) 5708)
0x5c3: Push((int) -1)
0x5c4: Push((int) 6290)
0x5c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c6: Pop(3)
0x5c7: Push((int) 5709)
0x5c8: Push((int) -1)
0x5c9: Push((int) 6291)
0x5ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cb: Pop(3)
0x5cc: Return(); Pop(0)

0x5cd: Push((int) 16487)
0x5ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5cf: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5d0: PushEmpty(string)
0x5d1: Stack[-1] = "Neutral"
0x5d2: Call 0x2b5

0x5d3: Pop(1)
0x5d4: Push((int) 15210)
0x5d5: @@ SetMessage(Stack[-1])
0x5d6: Pop(1)
0x5d7: @@ ClearReplies()
0x5d8: Pop(0)
0x5d9: Push((int) 15211)
0x5da: Push((int) -1)
0x5db: Push((int) 16488)
0x5dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5dd: Pop(3)
0x5de: Return(); Pop(0)

0x5df: Push((int) 6705)
0x5e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e1: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5e2: PushEmpty(string)
0x5e3: Stack[-1] = "Neutral"
0x5e4: Call 0x2b5

0x5e5: Pop(1)
0x5e6: Push((int) 6076)
0x5e7: @@ SetMessage(Stack[-1])
0x5e8: Pop(1)
0x5e9: @@ ClearReplies()
0x5ea: Pop(0)
0x5eb: Push((int) 6077)
0x5ec: Push((int) 6708)
0x5ed: Push((int) 6706)
0x5ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ef: Pop(3)
0x5f0: Push((int) 6078)
0x5f1: Push((int) 6708)
0x5f2: Push((int) 6707)
0x5f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f4: Pop(3)
0x5f5: Return(); Pop(0)

0x5f6: Push((int) 6708)
0x5f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f8: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x5f9: PushEmpty(string)
0x5fa: Stack[-1] = "Neutral"
0x5fb: Call 0x2b5

0x5fc: Pop(1)
0x5fd: Push((int) 6079)
0x5fe: @@ SetMessage(Stack[-1])
0x5ff: Pop(1)
0x600: @@ ClearReplies()
0x601: Pop(0)
0x602: Push((int) 6080)
0x603: Push((int) -1)
0x604: Push((int) 6710)
0x605: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x606: Pop(3)
0x607: Push((int) 6081)
0x608: Push((int) -1)
0x609: Push((int) 6711)
0x60a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60b: Pop(3)
0x60c: Push((int) 6082)
0x60d: Push((int) -1)
0x60e: Push((int) 6712)
0x60f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x610: Pop(3)
0x611: Return(); Pop(0)

0x612: Push((int) 6526)
0x613: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x614: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x615: PushEmpty(string)
0x616: Stack[-1] = "Neutral"
0x617: Call 0x2b5

0x618: Pop(1)
0x619: Push((int) 5931)
0x61a: @@ SetMessage(Stack[-1])
0x61b: Pop(1)
0x61c: @@ ClearReplies()
0x61d: Pop(0)
0x61e: Push((int) 5932)
0x61f: Push((int) 6518)
0x620: Push((int) 6527)
0x621: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x622: Pop(3)
0x623: Push((int) 5933)
0x624: Push((int) -1)
0x625: Push((int) 6528)
0x626: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x627: Pop(3)
0x628: Return(); Pop(0)

0x629: Push((int) 6518)
0x62a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62b: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x62c: PushEmpty(string)
0x62d: Stack[-1] = "Neutral"
0x62e: Call 0x2b5

0x62f: Pop(1)
0x630: Push((int) 5923)
0x631: @@ SetMessage(Stack[-1])
0x632: Pop(1)
0x633: @@ ClearReplies()
0x634: Pop(0)
0x635: PushEmpty(bool, object)
0x636: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x637: Call 0x2145

0x638: Pop(1)
0x639: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63a: Push((int) 5924)
0x63b: Push((int) 6530)
0x63c: Push((int) 6519)
0x63d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63e: Pop(3)
0x63f: Push((int) 5925)
0x640: Push((int) 6522)
0x641: Push((int) 6520)
0x642: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x643: Pop(3)
0x644: Push((int) 5926)
0x645: Push((int) 6522)
0x646: Push((int) 6521)
0x647: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x648: Pop(3)
0x649: Return(); Pop(0)

0x64a: Push((int) 6522)
0x64b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x64c: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x64d: PushEmpty(string)
0x64e: Stack[-1] = "Neutral"
0x64f: Call 0x2b5

0x650: Pop(1)
0x651: Push((int) 5927)
0x652: @@ SetMessage(Stack[-1])
0x653: Pop(1)
0x654: @@ ClearReplies()
0x655: Pop(0)
0x656: Push((int) 5929)
0x657: Push((int) 6530)
0x658: Push((int) 6524)
0x659: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65a: Pop(3)
0x65b: PushEmpty(bool, object)
0x65c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x65d: Call 0x2151

0x65e: Pop(1)
0x65f: Pop(1); Push((bool) Stack[-1] == 0)
0x660: IF (Stack[-1] == 0) GOTO 0x666; Pop(1)

0x661: Push((int) 5928)
0x662: Push((int) 6934)
0x663: Push((int) 6523)
0x664: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x665: Pop(3)
0x666: Return(); Pop(0)

0x667: Push((int) 6934)
0x668: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x669: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x66a: PushEmpty(string)
0x66b: Stack[-1] = "Neutral"
0x66c: Call 0x2b5

0x66d: Pop(1)
0x66e: Push((int) 6266)
0x66f: @@ SetMessage(Stack[-1])
0x670: Pop(1)
0x671: @@ ClearReplies()
0x672: Pop(0)
0x673: Push((int) 6267)
0x674: Push((int) 6530)
0x675: Push((int) 6935)
0x676: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x677: Pop(3)
0x678: Return(); Pop(0)

0x679: Push((int) 6530)
0x67a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x67b: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x67c: PushEmpty(string)
0x67d: Stack[-1] = "Neutral"
0x67e: Call 0x2b5

0x67f: Pop(1)
0x680: Push((int) 5934)
0x681: @@ SetMessage(Stack[-1])
0x682: Pop(1)
0x683: @@ ClearReplies()
0x684: Pop(0)
0x685: Push((int) 5937)
0x686: Push((int) 6535)
0x687: Push((int) 6534)
0x688: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x689: Pop(3)
0x68a: Push((int) 5935)
0x68b: Push((int) 6533)
0x68c: Push((int) 6532)
0x68d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68e: Pop(3)
0x68f: Return(); Pop(0)

0x690: Push((int) 6533)
0x691: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x692: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x693: PushEmpty(string)
0x694: Stack[-1] = "Neutral"
0x695: Call 0x2b5

0x696: Pop(1)
0x697: Push((int) 5936)
0x698: @@ SetMessage(Stack[-1])
0x699: Pop(1)
0x69a: @@ ClearReplies()
0x69b: Pop(0)
0x69c: Push((int) 5939)
0x69d: Push((int) 6535)
0x69e: Push((int) 6536)
0x69f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a0: Pop(3)
0x6a1: Return(); Pop(0)

0x6a2: Push((int) 6535)
0x6a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a4: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6a5: PushEmpty(object, object)
0x6a6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6a7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6a8: Call 0x1c48

0x6a9: Pop(2)
0x6aa: PushEmpty(string)
0x6ab: Stack[-1] = "Neutral"
0x6ac: Call 0x2b5

0x6ad: Pop(1)
0x6ae: Push((int) 5938)
0x6af: @@ SetMessage(Stack[-1])
0x6b0: Pop(1)
0x6b1: @@ ClearReplies()
0x6b2: Pop(0)
0x6b3: Push((int) 5940)
0x6b4: Push((int) 6539)
0x6b5: Push((int) 6538)
0x6b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b7: Pop(3)
0x6b8: Push((int) 5965)
0x6b9: Push((int) 6569)
0x6ba: Push((int) 6568)
0x6bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bc: Pop(3)
0x6bd: Return(); Pop(0)

0x6be: Push((int) 6569)
0x6bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c0: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6c1: PushEmpty(string)
0x6c2: Stack[-1] = "Neutral"
0x6c3: Call 0x2b5

0x6c4: Pop(1)
0x6c5: Push((int) 5966)
0x6c6: @@ SetMessage(Stack[-1])
0x6c7: Pop(1)
0x6c8: @@ ClearReplies()
0x6c9: Pop(0)
0x6ca: Push((int) 5967)
0x6cb: Push((int) 6539)
0x6cc: Push((int) 6570)
0x6cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ce: Pop(3)
0x6cf: Return(); Pop(0)

0x6d0: Push((int) 6539)
0x6d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d2: IF (Stack[-1] == 0) GOTO 0x6e7; Pop(1)

0x6d3: PushEmpty(string)
0x6d4: Stack[-1] = "Neutral"
0x6d5: Call 0x2b5

0x6d6: Pop(1)
0x6d7: Push((int) 5941)
0x6d8: @@ SetMessage(Stack[-1])
0x6d9: Pop(1)
0x6da: @@ ClearReplies()
0x6db: Pop(0)
0x6dc: Push((int) 5945)
0x6dd: Push((int) 6544)
0x6de: Push((int) 6543)
0x6df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e0: Pop(3)
0x6e1: Push((int) 5942)
0x6e2: Push((int) 6541)
0x6e3: Push((int) 6540)
0x6e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e5: Pop(3)
0x6e6: Return(); Pop(0)

0x6e7: Push((int) 6541)
0x6e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e9: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6ea: PushEmpty(string)
0x6eb: Stack[-1] = "Neutral"
0x6ec: Call 0x2b5

0x6ed: Pop(1)
0x6ee: Push((int) 5943)
0x6ef: @@ SetMessage(Stack[-1])
0x6f0: Pop(1)
0x6f1: @@ ClearReplies()
0x6f2: Pop(0)
0x6f3: Push((int) 5944)
0x6f4: Push((int) 6544)
0x6f5: Push((int) 6542)
0x6f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f7: Pop(3)
0x6f8: Push((int) 5957)
0x6f9: Push((int) 6557)
0x6fa: Push((int) 6556)
0x6fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fc: Pop(3)
0x6fd: Return(); Pop(0)

0x6fe: Push((int) 6557)
0x6ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x700: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x701: PushEmpty(string)
0x702: Stack[-1] = "Neutral"
0x703: Call 0x2b5

0x704: Pop(1)
0x705: Push((int) 5958)
0x706: @@ SetMessage(Stack[-1])
0x707: Pop(1)
0x708: @@ ClearReplies()
0x709: Pop(0)
0x70a: Push((int) 5959)
0x70b: Push((int) 6544)
0x70c: Push((int) 6558)
0x70d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70e: Pop(3)
0x70f: Push((int) 5960)
0x710: Push((int) 6544)
0x711: Push((int) 6559)
0x712: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x713: Pop(3)
0x714: Return(); Pop(0)

0x715: Push((int) 6544)
0x716: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x717: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x718: PushEmpty(string)
0x719: Stack[-1] = "Neutral"
0x71a: Call 0x2b5

0x71b: Pop(1)
0x71c: Push((int) 5946)
0x71d: @@ SetMessage(Stack[-1])
0x71e: Pop(1)
0x71f: @@ ClearReplies()
0x720: Pop(0)
0x721: Push((int) 5947)
0x722: Push((int) 6546)
0x723: Push((int) 6545)
0x724: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x725: Pop(3)
0x726: Push((int) 5949)
0x727: Push((int) 6562)
0x728: Push((int) 6548)
0x729: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72a: Pop(3)
0x72b: Return(); Pop(0)

0x72c: Push((int) 6562)
0x72d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x72e: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x72f: PushEmpty(string)
0x730: Stack[-1] = "Neutral"
0x731: Call 0x2b5

0x732: Pop(1)
0x733: Push((int) 5961)
0x734: @@ SetMessage(Stack[-1])
0x735: Pop(1)
0x736: @@ ClearReplies()
0x737: Pop(0)
0x738: Push((int) 5962)
0x739: Push((int) 6546)
0x73a: Push((int) 6563)
0x73b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73c: Pop(3)
0x73d: Push((int) 5963)
0x73e: Push((int) 6554)
0x73f: Push((int) 6564)
0x740: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x741: Pop(3)
0x742: Return(); Pop(0)

0x743: Push((int) 6546)
0x744: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x745: IF (Stack[-1] == 0) GOTO 0x75a; Pop(1)

0x746: PushEmpty(string)
0x747: Stack[-1] = "Neutral"
0x748: Call 0x2b5

0x749: Pop(1)
0x74a: Push((int) 5948)
0x74b: @@ SetMessage(Stack[-1])
0x74c: Pop(1)
0x74d: @@ ClearReplies()
0x74e: Pop(0)
0x74f: Push((int) 5950)
0x750: Push((int) 6554)
0x751: Push((int) 6549)
0x752: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x753: Pop(3)
0x754: Push((int) 5951)
0x755: Push((int) 6551)
0x756: Push((int) 6550)
0x757: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x758: Pop(3)
0x759: Return(); Pop(0)

0x75a: Push((int) 6551)
0x75b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x75c: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x75d: PushEmpty(string)
0x75e: Stack[-1] = "Neutral"
0x75f: Call 0x2b5

0x760: Pop(1)
0x761: Push((int) 5952)
0x762: @@ SetMessage(Stack[-1])
0x763: Pop(1)
0x764: @@ ClearReplies()
0x765: Pop(0)
0x766: Push((int) 5969)
0x767: Push((int) 6554)
0x768: Push((int) 6573)
0x769: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76a: Pop(3)
0x76b: Push((int) 5953)
0x76c: Push((int) -1)
0x76d: Push((int) 6552)
0x76e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76f: Pop(3)
0x770: Push((int) 5954)
0x771: Push((int) -1)
0x772: Push((int) 6553)
0x773: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x774: Pop(3)
0x775: Return(); Pop(0)

0x776: Push((int) 6554)
0x777: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x778: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x779: PushEmpty(string)
0x77a: Stack[-1] = "Neutral"
0x77b: Call 0x2b5

0x77c: Pop(1)
0x77d: Push((int) 5955)
0x77e: @@ SetMessage(Stack[-1])
0x77f: Pop(1)
0x780: @@ ClearReplies()
0x781: Pop(0)
0x782: Push((int) 5956)
0x783: Push((int) -1)
0x784: Push((int) 6555)
0x785: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x786: Pop(3)
0x787: Push((int) 5964)
0x788: Push((int) -1)
0x789: Push((int) 6567)
0x78a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78b: Pop(3)
0x78c: Return(); Pop(0)

0x78d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x78e: PushEmpty(bool)
0x78f: Call 0x1c40

0x790: Pop(0)
0x791: IF (Stack[-1] == 0) GOTO 0x795; Pop(1)

0x792: @ lshStopAnimation()
0x793: Pop(0)
0x794: GOTO 0x797

0x795: @ StopAnimation()
0x796: Pop(0)
0x797: Return(); Pop(0)

0x798: GOTO 0x2c6

0x799: Return(); Pop(0)

0x79a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x79b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x79c: PushEmpty(bool, object)
0x79d: Stack[-1] = Stack[-11]
0x79e: Call 0x1b99

0x79f: Pop(1)
0x7a0: Pop(1); Push((bool) Stack[-1] == 0)
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x7a2: Stack[-10] = (int) -2
0x7a3: Return(); Pop(8)

0x7a4: @ CreateDialog(Stack[-4])
0x7a5: Pop(0)
0x7a6: PushEmpty(int)
0x7a7: Call 0x1c3c

0x7a8: Pop(0)
0x7a9: @@ SetNPCName(Stack[-1])
0x7aa: Pop(1)
0x7ab: PushEmpty(string)
0x7ac: Call 0x1c3e

0x7ad: Pop(0)
0x7ae: @@ SetPhoto(Stack[-1])
0x7af: Pop(1)
0x7b0: PushEmpty(int)
0x7b1: Call 0x21e0

0x7b2: Pop(0)
0x7b3: @@ SetPlayerName(Stack[-1])
0x7b4: Pop(1)
0x7b5: Stack[-2] = (int) -1
0x7b6: @ IsOverrideActive(Stack[-3])
0x7b7: Pop(0)
0x7b8: Push(Stack[-3])
0x7b9: IF (Stack[-1] == 0) GOTO 0x7bc; Pop(1)

0x7ba: Stack[-10] = (int) -2
0x7bb: Return(); Pop(8)

0x7bc: @ DoDialog(Stack[-4])
0x7bd: Pop(0)
0x7be: PushEmpty(object, object)
0x7bf: Stack[-2] = Stack[-11]
0x7c0: Stack[-1] = Stack[-6]
0x7c1: Push(-2, 4); TaskCall(7)
0x7c2: Call 0x7d9

0x7c3: Pop(-2, 4); TaskReturn
0x7c4: Pop(2)
0x7c5: @@ IsDialogEnd(Stack[-1])
0x7c6: Pop(0)
0x7c7: Pop(0); Push((bool) Stack[-1] == 0)
0x7c8: IF (Stack[-1] == 0) GOTO 0x7ce; Pop(1)

0x7c9: @ sync()
0x7ca: Pop(0)
0x7cb: @@ IsDialogEnd(Stack[-1])
0x7cc: Pop(0)
0x7cd: GOTO 0x7c7

0x7ce: PushEmpty(object)
0x7cf: Stack[-1] = Stack[-10]
0x7d0: Call 0x1bd1

0x7d1: Pop(1)
0x7d2: @ StopDialog(Stack[-4])
0x7d3: Pop(0)
0x7d4: @@ GetReturnValue(Stack[-2])
0x7d5: Pop(0)
0x7d6: Stack[-10] = Stack[-2]
0x7d7: Return(); Pop(8)

0x7d8: Stack[-4] = 0
0x7d9: PushEmpty()
0x7da: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7db: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x7dc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7dd: Push((int) 1)
0x7de: IF (Stack[-1] == 0) GOTO 0x858; Pop(1)

0x7df: PushEmpty(bool)
0x7e0: Stack[-1] = (bool) 0
0x7e1: PushEmpty(bool, object)
0x7e2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e3: Call 0x1ef4

0x7e4: Pop(1)
0x7e5: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7e6: PushEmpty(bool, object)
0x7e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e8: Call 0x1ee8

0x7e9: Pop(1)
0x7ea: Pop(1); Push((bool) Stack[-1] == 0)
0x7eb: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7ec: Stack[-1] = (bool) 1
0x7ed: IF (Stack[-1] == 0) GOTO 0x802; Pop(1)

0x7ee: PushEmpty(string)
0x7ef: Stack[-1] = "Neutral"
0x7f0: Call 0x876

0x7f1: Pop(1)
0x7f2: Push((int) 6935)
0x7f3: @@ SetMessage(Stack[-1])
0x7f4: Pop(1)
0x7f5: @@ ClearReplies()
0x7f6: Pop(0)
0x7f7: Push((int) 7509)
0x7f8: Push((int) 8291)
0x7f9: Push((int) 8290)
0x7fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fb: Pop(3)
0x7fc: Push((int) 7518)
0x7fd: Push((int) 8300)
0x7fe: Push((int) 8299)
0x7ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x800: Pop(3)
0x801: GOTO 0x858

0x802: PushEmpty(string)
0x803: Stack[-1] = "Neutral"
0x804: Call 0x876

0x805: Pop(1)
0x806: Push((int) 6929)
0x807: @@ SetMessage(Stack[-1])
0x808: Pop(1)
0x809: @@ ClearReplies()
0x80a: Pop(0)
0x80b: PushEmpty(bool)
0x80c: Stack[-1] = (bool) 0
0x80d: PushEmpty(bool, object)
0x80e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80f: Call 0x1f00

0x810: Pop(1)
0x811: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x812: PushEmpty(bool, object)
0x813: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x814: Call 0x1ee8

0x815: Pop(1)
0x816: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x817: Stack[-1] = (bool) 1
0x818: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x819: Push((int) 6930)
0x81a: Push((int) 7637)
0x81b: Push((int) 7636)
0x81c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81d: Pop(3)
0x81e: PushEmpty(bool, object)
0x81f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x820: Call 0x1f0c

0x821: Pop(1)
0x822: IF (Stack[-1] == 0) GOTO 0x828; Pop(1)

0x823: Push((int) 6938)
0x824: Push((int) 7645)
0x825: Push((int) 7644)
0x826: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x827: Pop(3)
0x828: PushEmpty(bool, object)
0x829: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82a: Call 0x1f18

0x82b: Pop(1)
0x82c: IF (Stack[-1] == 0) GOTO 0x832; Pop(1)

0x82d: Push((int) 6940)
0x82e: Push((int) 7647)
0x82f: Push((int) 7646)
0x830: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x831: Pop(3)
0x832: PushEmpty(bool, object)
0x833: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x834: Call 0x1f24

0x835: Pop(1)
0x836: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x837: Push((int) 7776)
0x838: Push((int) 8568)
0x839: Push((int) 8577)
0x83a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83b: Pop(3)
0x83c: Push((int) 7746)
0x83d: Push((int) -1)
0x83e: Push((int) 8547)
0x83f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x840: Pop(3)
0x841: GOTO 0x858

0x842: PushEmpty(string)
0x843: Stack[-1] = "Neutral"
0x844: Call 0x876

0x845: Pop(1)
0x846: Push((int) 9500)
0x847: @@ SetMessage(Stack[-1])
0x848: Pop(1)
0x849: @@ ClearReplies()
0x84a: Pop(0)
0x84b: Push((int) 9501)
0x84c: Push((int) 10445)
0x84d: Push((int) 10444)
0x84e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84f: Pop(3)
0x850: Push((int) 9514)
0x851: Push((int) 10458)
0x852: Push((int) 10457)
0x853: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x854: Pop(3)
0x855: GOTO 0x858

0x856: Return(); Pop(0)

0x857: GOTO 0x7dd

0x858: PushEmpty(bool)
0x859: Call 0x1c40

0x85a: Pop(0)
0x85b: IF (Stack[-1] == 0) GOTO 0x867; Pop(1)

0x85c: @ lshWaitForAnimEnd()
0x85d: Pop(0)
0x85e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x85f: IF (Stack[-1] == 0) GOTO 0x861; Pop(1)

0x860: GOTO 0x866

0x861: PushEmpty(string)
0x862: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x863: Call 0x1bd5

0x864: Pop(1)
0x865: GOTO 0x85c

0x866: GOTO 0x875

0x867: Push("all")
0x868: Push("idle")
0x869: @ PlayAnimation(Stack[-2], Stack[-1])
0x86a: Pop(2)
0x86b: @ WaitForAnimEnd()
0x86c: Pop(0)
0x86d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86e: IF (Stack[-1] == 0) GOTO 0x870; Pop(1)

0x86f: GOTO 0x875

0x870: Push("all")
0x871: Push("idle")
0x872: @ PlayAnimation(Stack[-2], Stack[-1])
0x873: Pop(2)
0x874: GOTO 0x86b

0x875: Return(); Pop(0)

0x876: PushEmpty()
0x877: PushEmpty(bool)
0x878: Call 0x1c40

0x879: Pop(0)
0x87a: Pop(1); Push((bool) Stack[-1] == 0)
0x87b: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x87c: Return(); Pop(0)

0x87d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x87e: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x87f: Return(); Pop(0)

0x880: PushEmpty(string)
0x881: Stack[-1] = Stack[-2]
0x882: Call 0x1bd5

0x883: Pop(1)
0x884: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x885: Return(); Pop(0)

0x886: PushEmpty()
0x887: Push((int) 1)
0x888: IF (Stack[-1] == 0) GOTO 0xb8d; Pop(1)

0x889: PushEmpty()
0x88a: Call 0x1be7

0x88b: Pop(0)
0x88c: Push((int) 8567)
0x88d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x88e: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x88f: PushEmpty(object, object)
0x890: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x891: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x892: Call 0x1c86

0x893: Pop(2)
0x894: PushEmpty(object, object)
0x895: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x896: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x897: Call 0x1c9e

0x898: Pop(2)
0x899: Push((int) 8569)
0x89a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x89b: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x89c: PushEmpty(object, object)
0x89d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x89e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x89f: Call 0x1c86

0x8a0: Pop(2)
0x8a1: PushEmpty(object, object)
0x8a2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8a4: Call 0x1c9e

0x8a5: Pop(2)
0x8a6: Push((int) 8566)
0x8a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8a8: IF (Stack[-1] == 0) GOTO 0x8ae; Pop(1)

0x8a9: PushEmpty(object, object)
0x8aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8ac: Call 0x1c86

0x8ad: Pop(2)
0x8ae: Push((int) 8574)
0x8af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8b0: IF (Stack[-1] == 0) GOTO 0x8bb; Pop(1)

0x8b1: PushEmpty(object, object)
0x8b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8b4: Call 0x1c86

0x8b5: Pop(2)
0x8b6: PushEmpty(object, object)
0x8b7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8b9: Call 0x1c9e

0x8ba: Pop(2)
0x8bb: Push((int) 8576)
0x8bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8bd: IF (Stack[-1] == 0) GOTO 0x8c8; Pop(1)

0x8be: PushEmpty(object, object)
0x8bf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8c1: Call 0x1c9e

0x8c2: Pop(2)
0x8c3: PushEmpty(object, object)
0x8c4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8c6: Call 0x1c86

0x8c7: Pop(2)
0x8c8: Push((int) 8572)
0x8c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8ca: IF (Stack[-1] == 0) GOTO 0x8d5; Pop(1)

0x8cb: PushEmpty(object, object)
0x8cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8ce: Call 0x1c9e

0x8cf: Pop(2)
0x8d0: PushEmpty(object, object)
0x8d1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8d3: Call 0x1c86

0x8d4: Pop(2)
0x8d5: Push((int) 8297)
0x8d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8d7: IF (Stack[-1] == 0) GOTO 0x8e7; Pop(1)

0x8d8: PushEmpty(object, object)
0x8d9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8db: Call 0x1c8c

0x8dc: Pop(2)
0x8dd: PushEmpty(object, object)
0x8de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8e0: Call 0x1c6f

0x8e1: Pop(2)
0x8e2: PushEmpty(object, object)
0x8e3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8e5: Call 0x1c7a

0x8e6: Pop(2)
0x8e7: Push((int) 8298)
0x8e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8e9: IF (Stack[-1] == 0) GOTO 0x8f9; Pop(1)

0x8ea: PushEmpty(object, object)
0x8eb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8ed: Call 0x1c8c

0x8ee: Pop(2)
0x8ef: PushEmpty(object, object)
0x8f0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8f1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8f2: Call 0x1c6f

0x8f3: Pop(2)
0x8f4: PushEmpty(object, object)
0x8f5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8f6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8f7: Call 0x1c7a

0x8f8: Pop(2)
0x8f9: Push((int) 8553)
0x8fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8fb: IF (Stack[-1] == 0) GOTO 0x90b; Pop(1)

0x8fc: PushEmpty(object, object)
0x8fd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8fe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8ff: Call 0x1c8c

0x900: Pop(2)
0x901: PushEmpty(object, object)
0x902: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x903: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x904: Call 0x1c6f

0x905: Pop(2)
0x906: PushEmpty(object, object)
0x907: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x908: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x909: Call 0x1c7a

0x90a: Pop(2)
0x90b: Push((int) 8549)
0x90c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x90d: IF (Stack[-1] == 0) GOTO 0x913; Pop(1)

0x90e: PushEmpty(object, object)
0x90f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x910: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x911: Call 0x1c92

0x912: Pop(2)
0x913: Push((int) 8552)
0x914: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x915: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x916: PushEmpty(object, object)
0x917: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x918: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x919: Call 0x1c92

0x91a: Pop(2)
0x91b: Push((int) 8560)
0x91c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x91d: IF (Stack[-1] == 0) GOTO 0x923; Pop(1)

0x91e: PushEmpty(object, object)
0x91f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x920: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x921: Call 0x1c98

0x922: Pop(2)
0x923: Push((int) 7641)
0x924: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x925: IF (Stack[-1] == 0) GOTO 0x99d; Pop(1)

0x926: PushEmpty(bool)
0x927: Stack[-1] = (bool) 0
0x928: PushEmpty(bool, object)
0x929: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x92a: Call 0x1ef4

0x92b: Pop(1)
0x92c: IF (Stack[-1] == 0) GOTO 0x934; Pop(1)

0x92d: PushEmpty(bool, object)
0x92e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x92f: Call 0x1ee8

0x930: Pop(1)
0x931: Pop(1); Push((bool) Stack[-1] == 0)
0x932: IF (Stack[-1] == 0) GOTO 0x934; Pop(1)

0x933: Stack[-1] = (bool) 1
0x934: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x935: PushEmpty(string)
0x936: Stack[-1] = "Neutral"
0x937: Call 0x876

0x938: Pop(1)
0x939: Push((int) 6935)
0x93a: @@ SetMessage(Stack[-1])
0x93b: Pop(1)
0x93c: @@ ClearReplies()
0x93d: Pop(0)
0x93e: Push((int) 7509)
0x93f: Push((int) 8291)
0x940: Push((int) 8290)
0x941: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x942: Pop(3)
0x943: Push((int) 7518)
0x944: Push((int) 8300)
0x945: Push((int) 8299)
0x946: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x947: Pop(3)
0x948: Return(); Pop(0)

0x949: PushEmpty(string)
0x94a: Stack[-1] = "Neutral"
0x94b: Call 0x876

0x94c: Pop(1)
0x94d: Push((int) 6929)
0x94e: @@ SetMessage(Stack[-1])
0x94f: Pop(1)
0x950: @@ ClearReplies()
0x951: Pop(0)
0x952: PushEmpty(bool)
0x953: Stack[-1] = (bool) 0
0x954: PushEmpty(bool, object)
0x955: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x956: Call 0x1f00

0x957: Pop(1)
0x958: IF (Stack[-1] == 0) GOTO 0x95f; Pop(1)

0x959: PushEmpty(bool, object)
0x95a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x95b: Call 0x1ee8

0x95c: Pop(1)
0x95d: IF (Stack[-1] == 0) GOTO 0x95f; Pop(1)

0x95e: Stack[-1] = (bool) 1
0x95f: IF (Stack[-1] == 0) GOTO 0x965; Pop(1)

0x960: Push((int) 6930)
0x961: Push((int) 7637)
0x962: Push((int) 7636)
0x963: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x964: Pop(3)
0x965: PushEmpty(bool, object)
0x966: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x967: Call 0x1f0c

0x968: Pop(1)
0x969: IF (Stack[-1] == 0) GOTO 0x96f; Pop(1)

0x96a: Push((int) 6938)
0x96b: Push((int) 7645)
0x96c: Push((int) 7644)
0x96d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96e: Pop(3)
0x96f: PushEmpty(bool, object)
0x970: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x971: Call 0x1f18

0x972: Pop(1)
0x973: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x974: Push((int) 6940)
0x975: Push((int) 7647)
0x976: Push((int) 7646)
0x977: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x978: Pop(3)
0x979: PushEmpty(bool, object)
0x97a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97b: Call 0x1f24

0x97c: Pop(1)
0x97d: IF (Stack[-1] == 0) GOTO 0x983; Pop(1)

0x97e: Push((int) 7776)
0x97f: Push((int) 8568)
0x980: Push((int) 8577)
0x981: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x982: Pop(3)
0x983: Push((int) 7746)
0x984: Push((int) -1)
0x985: Push((int) 8547)
0x986: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x987: Pop(3)
0x988: Return(); Pop(0)

0x989: PushEmpty(string)
0x98a: Stack[-1] = "Neutral"
0x98b: Call 0x876

0x98c: Pop(1)
0x98d: Push((int) 9500)
0x98e: @@ SetMessage(Stack[-1])
0x98f: Pop(1)
0x990: @@ ClearReplies()
0x991: Pop(0)
0x992: Push((int) 9501)
0x993: Push((int) 10445)
0x994: Push((int) 10444)
0x995: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x996: Pop(3)
0x997: Push((int) 9514)
0x998: Push((int) 10458)
0x999: Push((int) 10457)
0x99a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99b: Pop(3)
0x99c: Return(); Pop(0)

0x99d: Push((int) 10458)
0x99e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x99f: IF (Stack[-1] == 0) GOTO 0x9af; Pop(1)

0x9a0: PushEmpty(string)
0x9a1: Stack[-1] = "Neutral"
0x9a2: Call 0x876

0x9a3: Pop(1)
0x9a4: Push((int) 9515)
0x9a5: @@ SetMessage(Stack[-1])
0x9a6: Pop(1)
0x9a7: @@ ClearReplies()
0x9a8: Pop(0)
0x9a9: Push((int) 9516)
0x9aa: Push((int) -1)
0x9ab: Push((int) 10459)
0x9ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ad: Pop(3)
0x9ae: Return(); Pop(0)

0x9af: Push((int) 10445)
0x9b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b1: IF (Stack[-1] == 0) GOTO 0x9cb; Pop(1)

0x9b2: PushEmpty(string)
0x9b3: Stack[-1] = "Neutral"
0x9b4: Call 0x876

0x9b5: Pop(1)
0x9b6: Push((int) 9502)
0x9b7: @@ SetMessage(Stack[-1])
0x9b8: Pop(1)
0x9b9: @@ ClearReplies()
0x9ba: Pop(0)
0x9bb: Push((int) 9503)
0x9bc: Push((int) 10447)
0x9bd: Push((int) 10446)
0x9be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9bf: Pop(3)
0x9c0: Push((int) 9510)
0x9c1: Push((int) -1)
0x9c2: Push((int) 10453)
0x9c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c4: Pop(3)
0x9c5: Push((int) 9511)
0x9c6: Push((int) 10455)
0x9c7: Push((int) 10454)
0x9c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c9: Pop(3)
0x9ca: Return(); Pop(0)

0x9cb: Push((int) 10455)
0x9cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9cd: IF (Stack[-1] == 0) GOTO 0x9dd; Pop(1)

0x9ce: PushEmpty(string)
0x9cf: Stack[-1] = "Neutral"
0x9d0: Call 0x876

0x9d1: Pop(1)
0x9d2: Push((int) 9512)
0x9d3: @@ SetMessage(Stack[-1])
0x9d4: Pop(1)
0x9d5: @@ ClearReplies()
0x9d6: Pop(0)
0x9d7: Push((int) 9513)
0x9d8: Push((int) -1)
0x9d9: Push((int) 10456)
0x9da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9db: Pop(3)
0x9dc: Return(); Pop(0)

0x9dd: Push((int) 10447)
0x9de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9df: IF (Stack[-1] == 0) GOTO 0x9f4; Pop(1)

0x9e0: PushEmpty(string)
0x9e1: Stack[-1] = "Neutral"
0x9e2: Call 0x876

0x9e3: Pop(1)
0x9e4: Push((int) 9504)
0x9e5: @@ SetMessage(Stack[-1])
0x9e6: Pop(1)
0x9e7: @@ ClearReplies()
0x9e8: Pop(0)
0x9e9: Push((int) 9505)
0x9ea: Push((int) 10449)
0x9eb: Push((int) 10448)
0x9ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ed: Pop(3)
0x9ee: Push((int) 9509)
0x9ef: Push((int) -1)
0x9f0: Push((int) 10452)
0x9f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f2: Pop(3)
0x9f3: Return(); Pop(0)

0x9f4: Push((int) 10449)
0x9f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f6: IF (Stack[-1] == 0) GOTO 0xa0b; Pop(1)

0x9f7: PushEmpty(string)
0x9f8: Stack[-1] = "Neutral"
0x9f9: Call 0x876

0x9fa: Pop(1)
0x9fb: Push((int) 9506)
0x9fc: @@ SetMessage(Stack[-1])
0x9fd: Pop(1)
0x9fe: @@ ClearReplies()
0x9ff: Pop(0)
0xa00: Push((int) 9507)
0xa01: Push((int) -1)
0xa02: Push((int) 10450)
0xa03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa04: Pop(3)
0xa05: Push((int) 9508)
0xa06: Push((int) -1)
0xa07: Push((int) 10451)
0xa08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa09: Pop(3)
0xa0a: Return(); Pop(0)

0xa0b: Push((int) 7647)
0xa0c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa0d: IF (Stack[-1] == 0) GOTO 0xa1d; Pop(1)

0xa0e: PushEmpty(string)
0xa0f: Stack[-1] = "Neutral"
0xa10: Call 0x876

0xa11: Pop(1)
0xa12: Push((int) 6941)
0xa13: @@ SetMessage(Stack[-1])
0xa14: Pop(1)
0xa15: @@ ClearReplies()
0xa16: Pop(0)
0xa17: Push((int) 7755)
0xa18: Push((int) 8557)
0xa19: Push((int) 8556)
0xa1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1b: Pop(3)
0xa1c: Return(); Pop(0)

0xa1d: Push((int) 8557)
0xa1e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa1f: IF (Stack[-1] == 0) GOTO 0xa2f; Pop(1)

0xa20: PushEmpty(string)
0xa21: Stack[-1] = "Neutral"
0xa22: Call 0x876

0xa23: Pop(1)
0xa24: Push((int) 7756)
0xa25: @@ SetMessage(Stack[-1])
0xa26: Pop(1)
0xa27: @@ ClearReplies()
0xa28: Pop(0)
0xa29: Push((int) 7757)
0xa2a: Push((int) 8559)
0xa2b: Push((int) 8558)
0xa2c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2d: Pop(3)
0xa2e: Return(); Pop(0)

0xa2f: Push((int) 8559)
0xa30: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa31: IF (Stack[-1] == 0) GOTO 0xa41; Pop(1)

0xa32: PushEmpty(string)
0xa33: Stack[-1] = "Neutral"
0xa34: Call 0x876

0xa35: Pop(1)
0xa36: Push((int) 7758)
0xa37: @@ SetMessage(Stack[-1])
0xa38: Pop(1)
0xa39: @@ ClearReplies()
0xa3a: Pop(0)
0xa3b: Push((int) 7759)
0xa3c: Push((int) -1)
0xa3d: Push((int) 8560)
0xa3e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3f: Pop(3)
0xa40: Return(); Pop(0)

0xa41: Push((int) 7645)
0xa42: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa43: IF (Stack[-1] == 0) GOTO 0xa58; Pop(1)

0xa44: PushEmpty(string)
0xa45: Stack[-1] = "Neutral"
0xa46: Call 0x876

0xa47: Pop(1)
0xa48: Push((int) 6939)
0xa49: @@ SetMessage(Stack[-1])
0xa4a: Pop(1)
0xa4b: @@ ClearReplies()
0xa4c: Pop(0)
0xa4d: Push((int) 7748)
0xa4e: Push((int) -1)
0xa4f: Push((int) 8549)
0xa50: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa51: Pop(3)
0xa52: Push((int) 7749)
0xa53: Push((int) 8551)
0xa54: Push((int) 8550)
0xa55: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa56: Pop(3)
0xa57: Return(); Pop(0)

0xa58: Push((int) 8551)
0xa59: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa5a: IF (Stack[-1] == 0) GOTO 0xa6a; Pop(1)

0xa5b: PushEmpty(string)
0xa5c: Stack[-1] = "Neutral"
0xa5d: Call 0x876

0xa5e: Pop(1)
0xa5f: Push((int) 7750)
0xa60: @@ SetMessage(Stack[-1])
0xa61: Pop(1)
0xa62: @@ ClearReplies()
0xa63: Pop(0)
0xa64: Push((int) 7751)
0xa65: Push((int) -1)
0xa66: Push((int) 8552)
0xa67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa68: Pop(3)
0xa69: Return(); Pop(0)

0xa6a: Push((int) 7637)
0xa6b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa6c: IF (Stack[-1] == 0) GOTO 0xa81; Pop(1)

0xa6d: PushEmpty(string)
0xa6e: Stack[-1] = "Neutral"
0xa6f: Call 0x876

0xa70: Pop(1)
0xa71: Push((int) 6931)
0xa72: @@ SetMessage(Stack[-1])
0xa73: Pop(1)
0xa74: @@ ClearReplies()
0xa75: Pop(0)
0xa76: Push((int) 6932)
0xa77: Push((int) 7639)
0xa78: Push((int) 7638)
0xa79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7a: Pop(3)
0xa7b: Push((int) 7752)
0xa7c: Push((int) -1)
0xa7d: Push((int) 8553)
0xa7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7f: Pop(3)
0xa80: Return(); Pop(0)

0xa81: Push((int) 7639)
0xa82: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa83: IF (Stack[-1] == 0) GOTO 0xa93; Pop(1)

0xa84: PushEmpty(string)
0xa85: Stack[-1] = "Neutral"
0xa86: Call 0x876

0xa87: Pop(1)
0xa88: Push((int) 6933)
0xa89: @@ SetMessage(Stack[-1])
0xa8a: Pop(1)
0xa8b: @@ ClearReplies()
0xa8c: Pop(0)
0xa8d: Push((int) 7753)
0xa8e: Push((int) 8555)
0xa8f: Push((int) 8554)
0xa90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa91: Pop(3)
0xa92: Return(); Pop(0)

0xa93: Push((int) 8555)
0xa94: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa95: IF (Stack[-1] == 0) GOTO 0xaa5; Pop(1)

0xa96: PushEmpty(string)
0xa97: Stack[-1] = "Neutral"
0xa98: Call 0x876

0xa99: Pop(1)
0xa9a: Push((int) 7754)
0xa9b: @@ SetMessage(Stack[-1])
0xa9c: Pop(1)
0xa9d: @@ ClearReplies()
0xa9e: Pop(0)
0xa9f: Push((int) 6934)
0xaa0: Push((int) 8296)
0xaa1: Push((int) 7640)
0xaa2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa3: Pop(3)
0xaa4: Return(); Pop(0)

0xaa5: Push((int) 8296)
0xaa6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa7: IF (Stack[-1] == 0) GOTO 0xabc; Pop(1)

0xaa8: PushEmpty(string)
0xaa9: Stack[-1] = "Neutral"
0xaaa: Call 0x876

0xaab: Pop(1)
0xaac: Push((int) 7515)
0xaad: @@ SetMessage(Stack[-1])
0xaae: Pop(1)
0xaaf: @@ ClearReplies()
0xab0: Pop(0)
0xab1: Push((int) 7516)
0xab2: Push((int) -1)
0xab3: Push((int) 8297)
0xab4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab5: Pop(3)
0xab6: Push((int) 7517)
0xab7: Push((int) -1)
0xab8: Push((int) 8298)
0xab9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaba: Pop(3)
0xabb: Return(); Pop(0)

0xabc: Push((int) 8300)
0xabd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xabe: IF (Stack[-1] == 0) GOTO 0xace; Pop(1)

0xabf: PushEmpty(string)
0xac0: Stack[-1] = "Neutral"
0xac1: Call 0x876

0xac2: Pop(1)
0xac3: Push((int) 7519)
0xac4: @@ SetMessage(Stack[-1])
0xac5: Pop(1)
0xac6: @@ ClearReplies()
0xac7: Pop(0)
0xac8: Push((int) 7520)
0xac9: Push((int) 8295)
0xaca: Push((int) 8301)
0xacb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xacc: Pop(3)
0xacd: Return(); Pop(0)

0xace: Push((int) 8291)
0xacf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad0: IF (Stack[-1] == 0) GOTO 0xae0; Pop(1)

0xad1: PushEmpty(string)
0xad2: Stack[-1] = "Neutral"
0xad3: Call 0x876

0xad4: Pop(1)
0xad5: Push((int) 7510)
0xad6: @@ SetMessage(Stack[-1])
0xad7: Pop(1)
0xad8: @@ ClearReplies()
0xad9: Pop(0)
0xada: Push((int) 7511)
0xadb: Push((int) 8293)
0xadc: Push((int) 8292)
0xadd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xade: Pop(3)
0xadf: Return(); Pop(0)

0xae0: Push((int) 8293)
0xae1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae2: IF (Stack[-1] == 0) GOTO 0xaf2; Pop(1)

0xae3: PushEmpty(string)
0xae4: Stack[-1] = "Neutral"
0xae5: Call 0x876

0xae6: Pop(1)
0xae7: Push((int) 7512)
0xae8: @@ SetMessage(Stack[-1])
0xae9: Pop(1)
0xaea: @@ ClearReplies()
0xaeb: Pop(0)
0xaec: Push((int) 7513)
0xaed: Push((int) 8295)
0xaee: Push((int) 8294)
0xaef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf0: Pop(3)
0xaf1: Return(); Pop(0)

0xaf2: Push((int) 8295)
0xaf3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf4: IF (Stack[-1] == 0) GOTO 0xb04; Pop(1)

0xaf5: PushEmpty(string)
0xaf6: Stack[-1] = "Neutral"
0xaf7: Call 0x876

0xaf8: Pop(1)
0xaf9: Push((int) 7514)
0xafa: @@ SetMessage(Stack[-1])
0xafb: Pop(1)
0xafc: @@ ClearReplies()
0xafd: Pop(0)
0xafe: Push((int) 7760)
0xaff: Push((int) 8562)
0xb00: Push((int) 8561)
0xb01: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb02: Pop(3)
0xb03: Return(); Pop(0)

0xb04: Push((int) 8562)
0xb05: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb06: IF (Stack[-1] == 0) GOTO 0xb1b; Pop(1)

0xb07: PushEmpty(string)
0xb08: Stack[-1] = "Neutral"
0xb09: Call 0x876

0xb0a: Pop(1)
0xb0b: Push((int) 7761)
0xb0c: @@ SetMessage(Stack[-1])
0xb0d: Pop(1)
0xb0e: @@ ClearReplies()
0xb0f: Pop(0)
0xb10: Push((int) 7762)
0xb11: Push((int) 8565)
0xb12: Push((int) 8563)
0xb13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb14: Pop(3)
0xb15: Push((int) 7763)
0xb16: Push((int) 8568)
0xb17: Push((int) 8564)
0xb18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb19: Pop(3)
0xb1a: Return(); Pop(0)

0xb1b: Push((int) 8568)
0xb1c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb1d: IF (Stack[-1] == 0) GOTO 0xb3c; Pop(1)

0xb1e: PushEmpty(string)
0xb1f: Stack[-1] = "Neutral"
0xb20: Call 0x876

0xb21: Pop(1)
0xb22: Push((int) 7767)
0xb23: @@ SetMessage(Stack[-1])
0xb24: Pop(1)
0xb25: @@ ClearReplies()
0xb26: Pop(0)
0xb27: Push((int) 7769)
0xb28: Push((int) 8571)
0xb29: Push((int) 8570)
0xb2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2b: Pop(3)
0xb2c: Push((int) 7772)
0xb2d: Push((int) 8575)
0xb2e: Push((int) 8573)
0xb2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb30: Pop(3)
0xb31: PushEmpty(bool, object)
0xb32: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb33: Call 0x1ef4

0xb34: Pop(1)
0xb35: IF (Stack[-1] == 0) GOTO 0xb3b; Pop(1)

0xb36: Push((int) 7771)
0xb37: Push((int) -1)
0xb38: Push((int) 8572)
0xb39: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb3a: Pop(3)
0xb3b: Return(); Pop(0)

0xb3c: Push((int) 8575)
0xb3d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb3e: IF (Stack[-1] == 0) GOTO 0xb53; Pop(1)

0xb3f: PushEmpty(string)
0xb40: Stack[-1] = "Neutral"
0xb41: Call 0x876

0xb42: Pop(1)
0xb43: Push((int) 7774)
0xb44: @@ SetMessage(Stack[-1])
0xb45: Pop(1)
0xb46: @@ ClearReplies()
0xb47: Pop(0)
0xb48: PushEmpty(bool, object)
0xb49: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb4a: Call 0x1ef4

0xb4b: Pop(1)
0xb4c: IF (Stack[-1] == 0) GOTO 0xb52; Pop(1)

0xb4d: Push((int) 7775)
0xb4e: Push((int) -1)
0xb4f: Push((int) 8576)
0xb50: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb51: Pop(3)
0xb52: Return(); Pop(0)

0xb53: Push((int) 8571)
0xb54: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb55: IF (Stack[-1] == 0) GOTO 0xb65; Pop(1)

0xb56: PushEmpty(string)
0xb57: Stack[-1] = "Neutral"
0xb58: Call 0x876

0xb59: Pop(1)
0xb5a: Push((int) 7770)
0xb5b: @@ SetMessage(Stack[-1])
0xb5c: Pop(1)
0xb5d: @@ ClearReplies()
0xb5e: Pop(0)
0xb5f: Push((int) 7773)
0xb60: Push((int) -1)
0xb61: Push((int) 8574)
0xb62: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb63: Pop(3)
0xb64: Return(); Pop(0)

0xb65: Push((int) 8565)
0xb66: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb67: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0xb68: PushEmpty(string)
0xb69: Stack[-1] = "Neutral"
0xb6a: Call 0x876

0xb6b: Pop(1)
0xb6c: Push((int) 7764)
0xb6d: @@ SetMessage(Stack[-1])
0xb6e: Pop(1)
0xb6f: @@ ClearReplies()
0xb70: Pop(0)
0xb71: Push((int) 7766)
0xb72: Push((int) -1)
0xb73: Push((int) 8567)
0xb74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb75: Pop(3)
0xb76: Push((int) 7768)
0xb77: Push((int) -1)
0xb78: Push((int) 8569)
0xb79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7a: Pop(3)
0xb7b: Push((int) 7765)
0xb7c: Push((int) -1)
0xb7d: Push((int) 8566)
0xb7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7f: Pop(3)
0xb80: Return(); Pop(0)

0xb81: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb82: PushEmpty(bool)
0xb83: Call 0x1c40

0xb84: Pop(0)
0xb85: IF (Stack[-1] == 0) GOTO 0xb89; Pop(1)

0xb86: @ lshStopAnimation()
0xb87: Pop(0)
0xb88: GOTO 0xb8b

0xb89: @ StopAnimation()
0xb8a: Pop(0)
0xb8b: Return(); Pop(0)

0xb8c: GOTO 0x887

0xb8d: Return(); Pop(0)

0xb8e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xb8f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xb90: PushEmpty(bool, object)
0xb91: Stack[-1] = Stack[-11]
0xb92: Call 0x1b99

0xb93: Pop(1)
0xb94: Pop(1); Push((bool) Stack[-1] == 0)
0xb95: IF (Stack[-1] == 0) GOTO 0xb98; Pop(1)

0xb96: Stack[-10] = (int) -2
0xb97: Return(); Pop(8)

0xb98: @ CreateDialog(Stack[-4])
0xb99: Pop(0)
0xb9a: PushEmpty(int)
0xb9b: Call 0x1c3c

0xb9c: Pop(0)
0xb9d: @@ SetNPCName(Stack[-1])
0xb9e: Pop(1)
0xb9f: PushEmpty(string)
0xba0: Call 0x1c3e

0xba1: Pop(0)
0xba2: @@ SetPhoto(Stack[-1])
0xba3: Pop(1)
0xba4: PushEmpty(int)
0xba5: Call 0x21e0

0xba6: Pop(0)
0xba7: @@ SetPlayerName(Stack[-1])
0xba8: Pop(1)
0xba9: Stack[-2] = (int) -1
0xbaa: @ IsOverrideActive(Stack[-3])
0xbab: Pop(0)
0xbac: Push(Stack[-3])
0xbad: IF (Stack[-1] == 0) GOTO 0xbb0; Pop(1)

0xbae: Stack[-10] = (int) -2
0xbaf: Return(); Pop(8)

0xbb0: @ DoDialog(Stack[-4])
0xbb1: Pop(0)
0xbb2: PushEmpty(object, object)
0xbb3: Stack[-2] = Stack[-11]
0xbb4: Stack[-1] = Stack[-6]
0xbb5: Push(-2, 4); TaskCall(9)
0xbb6: Call 0xbcd

0xbb7: Pop(-2, 4); TaskReturn
0xbb8: Pop(2)
0xbb9: @@ IsDialogEnd(Stack[-1])
0xbba: Pop(0)
0xbbb: Pop(0); Push((bool) Stack[-1] == 0)
0xbbc: IF (Stack[-1] == 0) GOTO 0xbc2; Pop(1)

0xbbd: @ sync()
0xbbe: Pop(0)
0xbbf: @@ IsDialogEnd(Stack[-1])
0xbc0: Pop(0)
0xbc1: GOTO 0xbbb

0xbc2: PushEmpty(object)
0xbc3: Stack[-1] = Stack[-10]
0xbc4: Call 0x1bd1

0xbc5: Pop(1)
0xbc6: @ StopDialog(Stack[-4])
0xbc7: Pop(0)
0xbc8: @@ GetReturnValue(Stack[-2])
0xbc9: Pop(0)
0xbca: Stack[-10] = Stack[-2]
0xbcb: Return(); Pop(8)

0xbcc: Stack[-4] = 0
0xbcd: PushEmpty()
0xbce: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xbcf: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xbd0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xbd1: Push((int) 1)
0xbd2: IF (Stack[-1] == 0) GOTO 0xbfc; Pop(1)

0xbd3: PushEmpty(string)
0xbd4: Stack[-1] = "Neutral"
0xbd5: Call 0xc1a

0xbd6: Pop(1)
0xbd7: Push((int) 10212)
0xbd8: @@ SetMessage(Stack[-1])
0xbd9: Pop(1)
0xbda: @@ ClearReplies()
0xbdb: Pop(0)
0xbdc: PushEmpty(bool)
0xbdd: Stack[-1] = (bool) 0
0xbde: PushEmpty(bool, object)
0xbdf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbe0: Call 0x1f3c

0xbe1: Pop(1)
0xbe2: IF (Stack[-1] == 0) GOTO 0xbe9; Pop(1)

0xbe3: PushEmpty(bool, object)
0xbe4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbe5: Call 0x1f48

0xbe6: Pop(1)
0xbe7: IF (Stack[-1] == 0) GOTO 0xbe9; Pop(1)

0xbe8: Stack[-1] = (bool) 1
0xbe9: IF (Stack[-1] == 0) GOTO 0xbef; Pop(1)

0xbea: Push((int) 10213)
0xbeb: Push((int) 11260)
0xbec: Push((int) 11259)
0xbed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbee: Pop(3)
0xbef: Push((int) 10302)
0xbf0: Push((int) 11359)
0xbf1: Push((int) 11358)
0xbf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf3: Pop(3)
0xbf4: Push((int) 10334)
0xbf5: Push((int) 11395)
0xbf6: Push((int) 11394)
0xbf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf8: Pop(3)
0xbf9: GOTO 0xbfc

0xbfa: Return(); Pop(0)

0xbfb: GOTO 0xbd1

0xbfc: PushEmpty(bool)
0xbfd: Call 0x1c40

0xbfe: Pop(0)
0xbff: IF (Stack[-1] == 0) GOTO 0xc0b; Pop(1)

0xc00: @ lshWaitForAnimEnd()
0xc01: Pop(0)
0xc02: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc03: IF (Stack[-1] == 0) GOTO 0xc05; Pop(1)

0xc04: GOTO 0xc0a

0xc05: PushEmpty(string)
0xc06: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc07: Call 0x1bd5

0xc08: Pop(1)
0xc09: GOTO 0xc00

0xc0a: GOTO 0xc19

0xc0b: Push("all")
0xc0c: Push("idle")
0xc0d: @ PlayAnimation(Stack[-2], Stack[-1])
0xc0e: Pop(2)
0xc0f: @ WaitForAnimEnd()
0xc10: Pop(0)
0xc11: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc12: IF (Stack[-1] == 0) GOTO 0xc14; Pop(1)

0xc13: GOTO 0xc19

0xc14: Push("all")
0xc15: Push("idle")
0xc16: @ PlayAnimation(Stack[-2], Stack[-1])
0xc17: Pop(2)
0xc18: GOTO 0xc0f

0xc19: Return(); Pop(0)

0xc1a: PushEmpty()
0xc1b: PushEmpty(bool)
0xc1c: Call 0x1c40

0xc1d: Pop(0)
0xc1e: Pop(1); Push((bool) Stack[-1] == 0)
0xc1f: IF (Stack[-1] == 0) GOTO 0xc21; Pop(1)

0xc20: Return(); Pop(0)

0xc21: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc22: IF (Stack[-1] == 0) GOTO 0xc24; Pop(1)

0xc23: Return(); Pop(0)

0xc24: PushEmpty(string)
0xc25: Stack[-1] = Stack[-2]
0xc26: Call 0x1bd5

0xc27: Pop(1)
0xc28: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc29: Return(); Pop(0)

0xc2a: PushEmpty()
0xc2b: Push((int) 1)
0xc2c: IF (Stack[-1] == 0) GOTO 0xe17; Pop(1)

0xc2d: PushEmpty()
0xc2e: Call 0x1be7

0xc2f: Pop(0)
0xc30: Push((int) 11379)
0xc31: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc32: IF (Stack[-1] == 0) GOTO 0xc42; Pop(1)

0xc33: PushEmpty(object, object)
0xc34: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc35: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc36: Call 0x1cd4

0xc37: Pop(2)
0xc38: PushEmpty(object, object)
0xc39: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc3b: Call 0x1cd6

0xc3c: Pop(2)
0xc3d: PushEmpty(object, object)
0xc3e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc40: Call 0x1cc4

0xc41: Pop(2)
0xc42: Push((int) 11380)
0xc43: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc44: IF (Stack[-1] == 0) GOTO 0xc54; Pop(1)

0xc45: PushEmpty(object, object)
0xc46: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc47: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc48: Call 0x1cd4

0xc49: Pop(2)
0xc4a: PushEmpty(object, object)
0xc4b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc4c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4d: Call 0x1cd6

0xc4e: Pop(2)
0xc4f: PushEmpty(object, object)
0xc50: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc51: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc52: Call 0x1cc4

0xc53: Pop(2)
0xc54: Push((int) 11383)
0xc55: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc56: IF (Stack[-1] == 0) GOTO 0xc66; Pop(1)

0xc57: PushEmpty(object, object)
0xc58: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc59: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc5a: Call 0x1cd6

0xc5b: Pop(2)
0xc5c: PushEmpty(object, object)
0xc5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc5f: Call 0x1cc4

0xc60: Pop(2)
0xc61: PushEmpty(object, object)
0xc62: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc63: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc64: Call 0x1cd4

0xc65: Pop(2)
0xc66: Push((int) 11258)
0xc67: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc68: IF (Stack[-1] == 0) GOTO 0xc90; Pop(1)

0xc69: PushEmpty(string)
0xc6a: Stack[-1] = "Neutral"
0xc6b: Call 0xc1a

0xc6c: Pop(1)
0xc6d: Push((int) 10212)
0xc6e: @@ SetMessage(Stack[-1])
0xc6f: Pop(1)
0xc70: @@ ClearReplies()
0xc71: Pop(0)
0xc72: PushEmpty(bool)
0xc73: Stack[-1] = (bool) 0
0xc74: PushEmpty(bool, object)
0xc75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc76: Call 0x1f3c

0xc77: Pop(1)
0xc78: IF (Stack[-1] == 0) GOTO 0xc7f; Pop(1)

0xc79: PushEmpty(bool, object)
0xc7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc7b: Call 0x1f48

0xc7c: Pop(1)
0xc7d: IF (Stack[-1] == 0) GOTO 0xc7f; Pop(1)

0xc7e: Stack[-1] = (bool) 1
0xc7f: IF (Stack[-1] == 0) GOTO 0xc85; Pop(1)

0xc80: Push((int) 10213)
0xc81: Push((int) 11260)
0xc82: Push((int) 11259)
0xc83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc84: Pop(3)
0xc85: Push((int) 10302)
0xc86: Push((int) 11359)
0xc87: Push((int) 11358)
0xc88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc89: Pop(3)
0xc8a: Push((int) 10334)
0xc8b: Push((int) 11395)
0xc8c: Push((int) 11394)
0xc8d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8e: Pop(3)
0xc8f: Return(); Pop(0)

0xc90: Push((int) 11395)
0xc91: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc92: IF (Stack[-1] == 0) GOTO 0xca7; Pop(1)

0xc93: PushEmpty(string)
0xc94: Stack[-1] = "Neutral"
0xc95: Call 0xc1a

0xc96: Pop(1)
0xc97: Push((int) 10335)
0xc98: @@ SetMessage(Stack[-1])
0xc99: Pop(1)
0xc9a: @@ ClearReplies()
0xc9b: Pop(0)
0xc9c: Push((int) 10336)
0xc9d: Push((int) 11399)
0xc9e: Push((int) 11396)
0xc9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca0: Pop(3)
0xca1: Push((int) 10337)
0xca2: Push((int) 11398)
0xca3: Push((int) 11397)
0xca4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca5: Pop(3)
0xca6: Return(); Pop(0)

0xca7: Push((int) 11398)
0xca8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca9: IF (Stack[-1] == 0) GOTO 0xcb9; Pop(1)

0xcaa: PushEmpty(string)
0xcab: Stack[-1] = "Neutral"
0xcac: Call 0xc1a

0xcad: Pop(1)
0xcae: Push((int) 10338)
0xcaf: @@ SetMessage(Stack[-1])
0xcb0: Pop(1)
0xcb1: @@ ClearReplies()
0xcb2: Pop(0)
0xcb3: Push((int) 10341)
0xcb4: Push((int) 11402)
0xcb5: Push((int) 11401)
0xcb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb7: Pop(3)
0xcb8: Return(); Pop(0)

0xcb9: Push((int) 11399)
0xcba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcbb: IF (Stack[-1] == 0) GOTO 0xccb; Pop(1)

0xcbc: PushEmpty(string)
0xcbd: Stack[-1] = "Neutral"
0xcbe: Call 0xc1a

0xcbf: Pop(1)
0xcc0: Push((int) 10339)
0xcc1: @@ SetMessage(Stack[-1])
0xcc2: Pop(1)
0xcc3: @@ ClearReplies()
0xcc4: Pop(0)
0xcc5: Push((int) 10340)
0xcc6: Push((int) 11402)
0xcc7: Push((int) 11400)
0xcc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc9: Pop(3)
0xcca: Return(); Pop(0)

0xccb: Push((int) 11402)
0xccc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xccd: IF (Stack[-1] == 0) GOTO 0xce2; Pop(1)

0xcce: PushEmpty(string)
0xccf: Stack[-1] = "Neutral"
0xcd0: Call 0xc1a

0xcd1: Pop(1)
0xcd2: Push((int) 10342)
0xcd3: @@ SetMessage(Stack[-1])
0xcd4: Pop(1)
0xcd5: @@ ClearReplies()
0xcd6: Pop(0)
0xcd7: Push((int) 10343)
0xcd8: Push((int) -1)
0xcd9: Push((int) 11404)
0xcda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcdb: Pop(3)
0xcdc: Push((int) 10344)
0xcdd: Push((int) 11406)
0xcde: Push((int) 11405)
0xcdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce0: Pop(3)
0xce1: Return(); Pop(0)

0xce2: Push((int) 11406)
0xce3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce4: IF (Stack[-1] == 0) GOTO 0xcf4; Pop(1)

0xce5: PushEmpty(string)
0xce6: Stack[-1] = "Neutral"
0xce7: Call 0xc1a

0xce8: Pop(1)
0xce9: Push((int) 10345)
0xcea: @@ SetMessage(Stack[-1])
0xceb: Pop(1)
0xcec: @@ ClearReplies()
0xced: Pop(0)
0xcee: Push((int) 10346)
0xcef: Push((int) -1)
0xcf0: Push((int) 11407)
0xcf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf2: Pop(3)
0xcf3: Return(); Pop(0)

0xcf4: Push((int) 11359)
0xcf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf6: IF (Stack[-1] == 0) GOTO 0xd06; Pop(1)

0xcf7: PushEmpty(string)
0xcf8: Stack[-1] = "Neutral"
0xcf9: Call 0xc1a

0xcfa: Pop(1)
0xcfb: Push((int) 10303)
0xcfc: @@ SetMessage(Stack[-1])
0xcfd: Pop(1)
0xcfe: @@ ClearReplies()
0xcff: Pop(0)
0xd00: Push((int) 10304)
0xd01: Push((int) 11039)
0xd02: Push((int) 11360)
0xd03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd04: Pop(3)
0xd05: Return(); Pop(0)

0xd06: Push((int) 11039)
0xd07: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd08: IF (Stack[-1] == 0) GOTO 0xd1d; Pop(1)

0xd09: PushEmpty(string)
0xd0a: Stack[-1] = "Neutral"
0xd0b: Call 0xc1a

0xd0c: Pop(1)
0xd0d: Push((int) 10017)
0xd0e: @@ SetMessage(Stack[-1])
0xd0f: Pop(1)
0xd10: @@ ClearReplies()
0xd11: Pop(0)
0xd12: Push((int) 10018)
0xd13: Push((int) 11041)
0xd14: Push((int) 11040)
0xd15: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd16: Pop(3)
0xd17: Push((int) 10028)
0xd18: Push((int) -1)
0xd19: Push((int) 11050)
0xd1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1b: Pop(3)
0xd1c: Return(); Pop(0)

0xd1d: Push((int) 11041)
0xd1e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd1f: IF (Stack[-1] == 0) GOTO 0xd34; Pop(1)

0xd20: PushEmpty(string)
0xd21: Stack[-1] = "Neutral"
0xd22: Call 0xc1a

0xd23: Pop(1)
0xd24: Push((int) 10019)
0xd25: @@ SetMessage(Stack[-1])
0xd26: Pop(1)
0xd27: @@ ClearReplies()
0xd28: Pop(0)
0xd29: Push((int) 10020)
0xd2a: Push((int) 11043)
0xd2b: Push((int) 11042)
0xd2c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2d: Pop(3)
0xd2e: Push((int) 10027)
0xd2f: Push((int) -1)
0xd30: Push((int) 11049)
0xd31: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd32: Pop(3)
0xd33: Return(); Pop(0)

0xd34: Push((int) 11043)
0xd35: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd36: IF (Stack[-1] == 0) GOTO 0xd4b; Pop(1)

0xd37: PushEmpty(string)
0xd38: Stack[-1] = "Neutral"
0xd39: Call 0xc1a

0xd3a: Pop(1)
0xd3b: Push((int) 10021)
0xd3c: @@ SetMessage(Stack[-1])
0xd3d: Pop(1)
0xd3e: @@ ClearReplies()
0xd3f: Pop(0)
0xd40: Push((int) 10022)
0xd41: Push((int) 11045)
0xd42: Push((int) 11044)
0xd43: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd44: Pop(3)
0xd45: Push((int) 10026)
0xd46: Push((int) -1)
0xd47: Push((int) 11048)
0xd48: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd49: Pop(3)
0xd4a: Return(); Pop(0)

0xd4b: Push((int) 11045)
0xd4c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd4d: IF (Stack[-1] == 0) GOTO 0xd62; Pop(1)

0xd4e: PushEmpty(string)
0xd4f: Stack[-1] = "Neutral"
0xd50: Call 0xc1a

0xd51: Pop(1)
0xd52: Push((int) 10023)
0xd53: @@ SetMessage(Stack[-1])
0xd54: Pop(1)
0xd55: @@ ClearReplies()
0xd56: Pop(0)
0xd57: Push((int) 10024)
0xd58: Push((int) -1)
0xd59: Push((int) 11046)
0xd5a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5b: Pop(3)
0xd5c: Push((int) 10025)
0xd5d: Push((int) -1)
0xd5e: Push((int) 11047)
0xd5f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd60: Pop(3)
0xd61: Return(); Pop(0)

0xd62: Push((int) 11260)
0xd63: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd64: IF (Stack[-1] == 0) GOTO 0xd79; Pop(1)

0xd65: PushEmpty(string)
0xd66: Stack[-1] = "Neutral"
0xd67: Call 0xc1a

0xd68: Pop(1)
0xd69: Push((int) 10214)
0xd6a: @@ SetMessage(Stack[-1])
0xd6b: Pop(1)
0xd6c: @@ ClearReplies()
0xd6d: Pop(0)
0xd6e: Push((int) 10305)
0xd6f: Push((int) 11364)
0xd70: Push((int) 11361)
0xd71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd72: Pop(3)
0xd73: Push((int) 10306)
0xd74: Push((int) 11363)
0xd75: Push((int) 11362)
0xd76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd77: Pop(3)
0xd78: Return(); Pop(0)

0xd79: Push((int) 11363)
0xd7a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7b: IF (Stack[-1] == 0) GOTO 0xd86; Pop(1)

0xd7c: PushEmpty(string)
0xd7d: Stack[-1] = "Neutral"
0xd7e: Call 0xc1a

0xd7f: Pop(1)
0xd80: Push((int) 10307)
0xd81: @@ SetMessage(Stack[-1])
0xd82: Pop(1)
0xd83: @@ ClearReplies()
0xd84: Pop(0)
0xd85: Return(); Pop(0)

0xd86: Push((int) 11364)
0xd87: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd88: IF (Stack[-1] == 0) GOTO 0xd9d; Pop(1)

0xd89: PushEmpty(string)
0xd8a: Stack[-1] = "Neutral"
0xd8b: Call 0xc1a

0xd8c: Pop(1)
0xd8d: Push((int) 10308)
0xd8e: @@ SetMessage(Stack[-1])
0xd8f: Pop(1)
0xd90: @@ ClearReplies()
0xd91: Pop(0)
0xd92: Push((int) 10309)
0xd93: Push((int) 11370)
0xd94: Push((int) 11365)
0xd95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd96: Pop(3)
0xd97: Push((int) 10311)
0xd98: Push((int) 11366)
0xd99: Push((int) 11367)
0xd9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9b: Pop(3)
0xd9c: Return(); Pop(0)

0xd9d: Push((int) 11366)
0xd9e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd9f: IF (Stack[-1] == 0) GOTO 0xdaf; Pop(1)

0xda0: PushEmpty(string)
0xda1: Stack[-1] = "Neutral"
0xda2: Call 0xc1a

0xda3: Pop(1)
0xda4: Push((int) 10310)
0xda5: @@ SetMessage(Stack[-1])
0xda6: Pop(1)
0xda7: @@ ClearReplies()
0xda8: Pop(0)
0xda9: Push((int) 10312)
0xdaa: Push((int) 11371)
0xdab: Push((int) 11369)
0xdac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdad: Pop(3)
0xdae: Return(); Pop(0)

0xdaf: Push((int) 11370)
0xdb0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb1: IF (Stack[-1] == 0) GOTO 0xdc6; Pop(1)

0xdb2: PushEmpty(string)
0xdb3: Stack[-1] = "Neutral"
0xdb4: Call 0xc1a

0xdb5: Pop(1)
0xdb6: Push((int) 10313)
0xdb7: @@ SetMessage(Stack[-1])
0xdb8: Pop(1)
0xdb9: @@ ClearReplies()
0xdba: Pop(0)
0xdbb: Push((int) 10315)
0xdbc: Push((int) 11371)
0xdbd: Push((int) 11372)
0xdbe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdbf: Pop(3)
0xdc0: Push((int) 10316)
0xdc1: Push((int) -1)
0xdc2: Push((int) 11373)
0xdc3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc4: Pop(3)
0xdc5: Return(); Pop(0)

0xdc6: Push((int) 11371)
0xdc7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc8: IF (Stack[-1] == 0) GOTO 0xddd; Pop(1)

0xdc9: PushEmpty(string)
0xdca: Stack[-1] = "Neutral"
0xdcb: Call 0xc1a

0xdcc: Pop(1)
0xdcd: Push((int) 10314)
0xdce: @@ SetMessage(Stack[-1])
0xdcf: Pop(1)
0xdd0: @@ ClearReplies()
0xdd1: Pop(0)
0xdd2: Push((int) 10317)
0xdd3: Push((int) 11376)
0xdd4: Push((int) 11375)
0xdd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd6: Pop(3)
0xdd7: Push((int) 10323)
0xdd8: Push((int) 11376)
0xdd9: Push((int) 11381)
0xdda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xddb: Pop(3)
0xddc: Return(); Pop(0)

0xddd: Push((int) 11376)
0xdde: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xddf: IF (Stack[-1] == 0) GOTO 0xdf4; Pop(1)

0xde0: PushEmpty(string)
0xde1: Stack[-1] = "Neutral"
0xde2: Call 0xc1a

0xde3: Pop(1)
0xde4: Push((int) 10318)
0xde5: @@ SetMessage(Stack[-1])
0xde6: Pop(1)
0xde7: @@ ClearReplies()
0xde8: Pop(0)
0xde9: Push((int) 10319)
0xdea: Push((int) 11378)
0xdeb: Push((int) 11377)
0xdec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xded: Pop(3)
0xdee: Push((int) 10324)
0xdef: Push((int) -1)
0xdf0: Push((int) 11383)
0xdf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf2: Pop(3)
0xdf3: Return(); Pop(0)

0xdf4: Push((int) 11378)
0xdf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf6: IF (Stack[-1] == 0) GOTO 0xe0b; Pop(1)

0xdf7: PushEmpty(string)
0xdf8: Stack[-1] = "Neutral"
0xdf9: Call 0xc1a

0xdfa: Pop(1)
0xdfb: Push((int) 10320)
0xdfc: @@ SetMessage(Stack[-1])
0xdfd: Pop(1)
0xdfe: @@ ClearReplies()
0xdff: Pop(0)
0xe00: Push((int) 10321)
0xe01: Push((int) -1)
0xe02: Push((int) 11379)
0xe03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe04: Pop(3)
0xe05: Push((int) 10322)
0xe06: Push((int) -1)
0xe07: Push((int) 11380)
0xe08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe09: Pop(3)
0xe0a: Return(); Pop(0)

0xe0b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe0c: PushEmpty(bool)
0xe0d: Call 0x1c40

0xe0e: Pop(0)
0xe0f: IF (Stack[-1] == 0) GOTO 0xe13; Pop(1)

0xe10: @ lshStopAnimation()
0xe11: Pop(0)
0xe12: GOTO 0xe15

0xe13: @ StopAnimation()
0xe14: Pop(0)
0xe15: Return(); Pop(0)

0xe16: GOTO 0xc2b

0xe17: Return(); Pop(0)

0xe18: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe19: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe1a: PushEmpty(bool, object)
0xe1b: Stack[-1] = Stack[-11]
0xe1c: Call 0x1b99

0xe1d: Pop(1)
0xe1e: Pop(1); Push((bool) Stack[-1] == 0)
0xe1f: IF (Stack[-1] == 0) GOTO 0xe22; Pop(1)

0xe20: Stack[-10] = (int) -2
0xe21: Return(); Pop(8)

0xe22: @ CreateDialog(Stack[-4])
0xe23: Pop(0)
0xe24: PushEmpty(int)
0xe25: Call 0x1c3c

0xe26: Pop(0)
0xe27: @@ SetNPCName(Stack[-1])
0xe28: Pop(1)
0xe29: PushEmpty(string)
0xe2a: Call 0x1c3e

0xe2b: Pop(0)
0xe2c: @@ SetPhoto(Stack[-1])
0xe2d: Pop(1)
0xe2e: PushEmpty(int)
0xe2f: Call 0x21e0

0xe30: Pop(0)
0xe31: @@ SetPlayerName(Stack[-1])
0xe32: Pop(1)
0xe33: Stack[-2] = (int) -1
0xe34: @ IsOverrideActive(Stack[-3])
0xe35: Pop(0)
0xe36: Push(Stack[-3])
0xe37: IF (Stack[-1] == 0) GOTO 0xe3a; Pop(1)

0xe38: Stack[-10] = (int) -2
0xe39: Return(); Pop(8)

0xe3a: @ DoDialog(Stack[-4])
0xe3b: Pop(0)
0xe3c: PushEmpty(object, object)
0xe3d: Stack[-2] = Stack[-11]
0xe3e: Stack[-1] = Stack[-6]
0xe3f: Push(-2, 4); TaskCall(11)
0xe40: Call 0xe57

0xe41: Pop(-2, 4); TaskReturn
0xe42: Pop(2)
0xe43: @@ IsDialogEnd(Stack[-1])
0xe44: Pop(0)
0xe45: Pop(0); Push((bool) Stack[-1] == 0)
0xe46: IF (Stack[-1] == 0) GOTO 0xe4c; Pop(1)

0xe47: @ sync()
0xe48: Pop(0)
0xe49: @@ IsDialogEnd(Stack[-1])
0xe4a: Pop(0)
0xe4b: GOTO 0xe45

0xe4c: PushEmpty(object)
0xe4d: Stack[-1] = Stack[-10]
0xe4e: Call 0x1bd1

0xe4f: Pop(1)
0xe50: @ StopDialog(Stack[-4])
0xe51: Pop(0)
0xe52: @@ GetReturnValue(Stack[-2])
0xe53: Pop(0)
0xe54: Stack[-10] = Stack[-2]
0xe55: Return(); Pop(8)

0xe56: Stack[-4] = 0
0xe57: PushEmpty()
0xe58: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xe59: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xe5a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xe5b: Push((int) 1)
0xe5c: IF (Stack[-1] == 0) GOTO 0xebc; Pop(1)

0xe5d: PushEmpty(bool)
0xe5e: Stack[-1] = (bool) 0
0xe5f: PushEmpty(bool, object)
0xe60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe61: Call 0x1f65

0xe62: Pop(1)
0xe63: IF (Stack[-1] == 0) GOTO 0xe6b; Pop(1)

0xe64: PushEmpty(bool, object)
0xe65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe66: Call 0x1f4d

0xe67: Pop(1)
0xe68: Pop(1); Push((bool) Stack[-1] == 0)
0xe69: IF (Stack[-1] == 0) GOTO 0xe6b; Pop(1)

0xe6a: Stack[-1] = (bool) 1
0xe6b: IF (Stack[-1] == 0) GOTO 0xe7b; Pop(1)

0xe6c: PushEmpty(string)
0xe6d: Stack[-1] = "Neutral"
0xe6e: Call 0xeda

0xe6f: Pop(1)
0xe70: Push((int) 11395)
0xe71: @@ SetMessage(Stack[-1])
0xe72: Pop(1)
0xe73: @@ ClearReplies()
0xe74: Pop(0)
0xe75: Push((int) 11396)
0xe76: Push((int) 12594)
0xe77: Push((int) 12593)
0xe78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe79: Pop(3)
0xe7a: GOTO 0xebc

0xe7b: PushEmpty(string)
0xe7c: Stack[-1] = "Neutral"
0xe7d: Call 0xeda

0xe7e: Pop(1)
0xe7f: Push((int) 10814)
0xe80: @@ SetMessage(Stack[-1])
0xe81: Pop(1)
0xe82: @@ ClearReplies()
0xe83: Pop(0)
0xe84: PushEmpty(bool)
0xe85: Stack[-1] = (bool) 0
0xe86: PushEmpty(bool, object)
0xe87: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe88: Call 0x1f59

0xe89: Pop(1)
0xe8a: IF (Stack[-1] == 0) GOTO 0xe91; Pop(1)

0xe8b: PushEmpty(bool, object)
0xe8c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe8d: Call 0x1f4d

0xe8e: Pop(1)
0xe8f: IF (Stack[-1] == 0) GOTO 0xe91; Pop(1)

0xe90: Stack[-1] = (bool) 1
0xe91: IF (Stack[-1] == 0) GOTO 0xe97; Pop(1)

0xe92: Push((int) 10815)
0xe93: Push((int) 11956)
0xe94: Push((int) 11955)
0xe95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe96: Pop(3)
0xe97: PushEmpty(bool, object)
0xe98: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe99: Call 0x1ede

0xe9a: Pop(1)
0xe9b: IF (Stack[-1] == 0) GOTO 0xea1; Pop(1)

0xe9c: Push((int) 11403)
0xe9d: Push((int) 12601)
0xe9e: Push((int) 12600)
0xe9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea0: Pop(3)
0xea1: PushEmpty(bool)
0xea2: Stack[-1] = (bool) 0
0xea3: PushEmpty(bool, object)
0xea4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xea5: Call 0x1f7d

0xea6: Pop(1)
0xea7: IF (Stack[-1] == 0) GOTO 0xeae; Pop(1)

0xea8: PushEmpty(bool, object)
0xea9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xeaa: Call 0x1f71

0xeab: Pop(1)
0xeac: IF (Stack[-1] == 0) GOTO 0xeae; Pop(1)

0xead: Stack[-1] = (bool) 1
0xeae: IF (Stack[-1] == 0) GOTO 0xeb4; Pop(1)

0xeaf: Push((int) 11862)
0xeb0: Push((int) 13076)
0xeb1: Push((int) 13075)
0xeb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb3: Pop(3)
0xeb4: Push((int) 11408)
0xeb5: Push((int) -1)
0xeb6: Push((int) 12605)
0xeb7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb8: Pop(3)
0xeb9: GOTO 0xebc

0xeba: Return(); Pop(0)

0xebb: GOTO 0xe5b

0xebc: PushEmpty(bool)
0xebd: Call 0x1c40

0xebe: Pop(0)
0xebf: IF (Stack[-1] == 0) GOTO 0xecb; Pop(1)

0xec0: @ lshWaitForAnimEnd()
0xec1: Pop(0)
0xec2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xec3: IF (Stack[-1] == 0) GOTO 0xec5; Pop(1)

0xec4: GOTO 0xeca

0xec5: PushEmpty(string)
0xec6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xec7: Call 0x1bd5

0xec8: Pop(1)
0xec9: GOTO 0xec0

0xeca: GOTO 0xed9

0xecb: Push("all")
0xecc: Push("idle")
0xecd: @ PlayAnimation(Stack[-2], Stack[-1])
0xece: Pop(2)
0xecf: @ WaitForAnimEnd()
0xed0: Pop(0)
0xed1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xed2: IF (Stack[-1] == 0) GOTO 0xed4; Pop(1)

0xed3: GOTO 0xed9

0xed4: Push("all")
0xed5: Push("idle")
0xed6: @ PlayAnimation(Stack[-2], Stack[-1])
0xed7: Pop(2)
0xed8: GOTO 0xecf

0xed9: Return(); Pop(0)

0xeda: PushEmpty()
0xedb: PushEmpty(bool)
0xedc: Call 0x1c40

0xedd: Pop(0)
0xede: Pop(1); Push((bool) Stack[-1] == 0)
0xedf: IF (Stack[-1] == 0) GOTO 0xee1; Pop(1)

0xee0: Return(); Pop(0)

0xee1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xee2: IF (Stack[-1] == 0) GOTO 0xee4; Pop(1)

0xee3: Return(); Pop(0)

0xee4: PushEmpty(string)
0xee5: Stack[-1] = Stack[-2]
0xee6: Call 0x1bd5

0xee7: Pop(1)
0xee8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xee9: Return(); Pop(0)

0xeea: PushEmpty()
0xeeb: Push((int) 1)
0xeec: IF (Stack[-1] == 0) GOTO 0x1206; Pop(1)

0xeed: PushEmpty()
0xeee: Call 0x1be7

0xeef: Pop(0)
0xef0: Push((int) 12610)
0xef1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xef2: IF (Stack[-1] == 0) GOTO 0xf02; Pop(1)

0xef3: PushEmpty(object, object)
0xef4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xef6: Call 0x1d27

0xef7: Pop(2)
0xef8: PushEmpty(object, object)
0xef9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xefa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xefb: Call 0x1d2d

0xefc: Pop(2)
0xefd: PushEmpty(object, object)
0xefe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf00: Call 0x1ca4

0xf01: Pop(2)
0xf02: Push((int) 12613)
0xf03: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf04: IF (Stack[-1] == 0) GOTO 0xf14; Pop(1)

0xf05: PushEmpty(object, object)
0xf06: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf07: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf08: Call 0x1d27

0xf09: Pop(2)
0xf0a: PushEmpty(object, object)
0xf0b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf0c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0d: Call 0x1d2d

0xf0e: Pop(2)
0xf0f: PushEmpty(object, object)
0xf10: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf11: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf12: Call 0x1ca4

0xf13: Pop(2)
0xf14: Push((int) 12243)
0xf15: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf16: IF (Stack[-1] == 0) GOTO 0xf2b; Pop(1)

0xf17: PushEmpty(object, object)
0xf18: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf19: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf1a: Call 0x1ced

0xf1b: Pop(2)
0xf1c: PushEmpty(object, object)
0xf1d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf1f: Call 0x1cf3

0xf20: Pop(2)
0xf21: PushEmpty(object, object)
0xf22: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf23: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf24: Call 0x1d13

0xf25: Pop(2)
0xf26: PushEmpty(object, object)
0xf27: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf28: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf29: Call 0x1cc4

0xf2a: Pop(2)
0xf2b: Push((int) 12244)
0xf2c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf2d: IF (Stack[-1] == 0) GOTO 0xf42; Pop(1)

0xf2e: PushEmpty(object, object)
0xf2f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf30: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf31: Call 0x1ced

0xf32: Pop(2)
0xf33: PushEmpty(object, object)
0xf34: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf35: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf36: Call 0x1cf3

0xf37: Pop(2)
0xf38: PushEmpty(object, object)
0xf39: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf3b: Call 0x1d13

0xf3c: Pop(2)
0xf3d: PushEmpty(object, object)
0xf3e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf40: Call 0x1cc4

0xf41: Pop(2)
0xf42: Push((int) 13077)
0xf43: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf44: IF (Stack[-1] == 0) GOTO 0xf4a; Pop(1)

0xf45: PushEmpty(object, object)
0xf46: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf47: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf48: Call 0x1d62

0xf49: Pop(2)
0xf4a: Push((int) 12592)
0xf4b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf4c: IF (Stack[-1] == 0) GOTO 0xfaa; Pop(1)

0xf4d: PushEmpty(bool)
0xf4e: Stack[-1] = (bool) 0
0xf4f: PushEmpty(bool, object)
0xf50: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf51: Call 0x1f65

0xf52: Pop(1)
0xf53: IF (Stack[-1] == 0) GOTO 0xf5b; Pop(1)

0xf54: PushEmpty(bool, object)
0xf55: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf56: Call 0x1f4d

0xf57: Pop(1)
0xf58: Pop(1); Push((bool) Stack[-1] == 0)
0xf59: IF (Stack[-1] == 0) GOTO 0xf5b; Pop(1)

0xf5a: Stack[-1] = (bool) 1
0xf5b: IF (Stack[-1] == 0) GOTO 0xf6b; Pop(1)

0xf5c: PushEmpty(string)
0xf5d: Stack[-1] = "Neutral"
0xf5e: Call 0xeda

0xf5f: Pop(1)
0xf60: Push((int) 11395)
0xf61: @@ SetMessage(Stack[-1])
0xf62: Pop(1)
0xf63: @@ ClearReplies()
0xf64: Pop(0)
0xf65: Push((int) 11396)
0xf66: Push((int) 12594)
0xf67: Push((int) 12593)
0xf68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf69: Pop(3)
0xf6a: Return(); Pop(0)

0xf6b: PushEmpty(string)
0xf6c: Stack[-1] = "Neutral"
0xf6d: Call 0xeda

0xf6e: Pop(1)
0xf6f: Push((int) 10814)
0xf70: @@ SetMessage(Stack[-1])
0xf71: Pop(1)
0xf72: @@ ClearReplies()
0xf73: Pop(0)
0xf74: PushEmpty(bool)
0xf75: Stack[-1] = (bool) 0
0xf76: PushEmpty(bool, object)
0xf77: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf78: Call 0x1f59

0xf79: Pop(1)
0xf7a: IF (Stack[-1] == 0) GOTO 0xf81; Pop(1)

0xf7b: PushEmpty(bool, object)
0xf7c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf7d: Call 0x1f4d

0xf7e: Pop(1)
0xf7f: IF (Stack[-1] == 0) GOTO 0xf81; Pop(1)

0xf80: Stack[-1] = (bool) 1
0xf81: IF (Stack[-1] == 0) GOTO 0xf87; Pop(1)

0xf82: Push((int) 10815)
0xf83: Push((int) 11956)
0xf84: Push((int) 11955)
0xf85: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf86: Pop(3)
0xf87: PushEmpty(bool, object)
0xf88: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf89: Call 0x1ede

0xf8a: Pop(1)
0xf8b: IF (Stack[-1] == 0) GOTO 0xf91; Pop(1)

0xf8c: Push((int) 11403)
0xf8d: Push((int) 12601)
0xf8e: Push((int) 12600)
0xf8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf90: Pop(3)
0xf91: PushEmpty(bool)
0xf92: Stack[-1] = (bool) 0
0xf93: PushEmpty(bool, object)
0xf94: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf95: Call 0x1f7d

0xf96: Pop(1)
0xf97: IF (Stack[-1] == 0) GOTO 0xf9e; Pop(1)

0xf98: PushEmpty(bool, object)
0xf99: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf9a: Call 0x1f71

0xf9b: Pop(1)
0xf9c: IF (Stack[-1] == 0) GOTO 0xf9e; Pop(1)

0xf9d: Stack[-1] = (bool) 1
0xf9e: IF (Stack[-1] == 0) GOTO 0xfa4; Pop(1)

0xf9f: Push((int) 11862)
0xfa0: Push((int) 13076)
0xfa1: Push((int) 13075)
0xfa2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa3: Pop(3)
0xfa4: Push((int) 11408)
0xfa5: Push((int) -1)
0xfa6: Push((int) 12605)
0xfa7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa8: Pop(3)
0xfa9: Return(); Pop(0)

0xfaa: Push((int) 13076)
0xfab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfac: IF (Stack[-1] == 0) GOTO 0xfbc; Pop(1)

0xfad: PushEmpty(string)
0xfae: Stack[-1] = "Neutral"
0xfaf: Call 0xeda

0xfb0: Pop(1)
0xfb1: Push((int) 11863)
0xfb2: @@ SetMessage(Stack[-1])
0xfb3: Pop(1)
0xfb4: @@ ClearReplies()
0xfb5: Pop(0)
0xfb6: Push((int) 11864)
0xfb7: Push((int) -1)
0xfb8: Push((int) 13077)
0xfb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfba: Pop(3)
0xfbb: Return(); Pop(0)

0xfbc: Push((int) 12601)
0xfbd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfbe: IF (Stack[-1] == 0) GOTO 0xfce; Pop(1)

0xfbf: PushEmpty(string)
0xfc0: Stack[-1] = "Neutral"
0xfc1: Call 0xeda

0xfc2: Pop(1)
0xfc3: Push((int) 11404)
0xfc4: @@ SetMessage(Stack[-1])
0xfc5: Pop(1)
0xfc6: @@ ClearReplies()
0xfc7: Pop(0)
0xfc8: Push((int) 11405)
0xfc9: Push((int) 12603)
0xfca: Push((int) 12602)
0xfcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfcc: Pop(3)
0xfcd: Return(); Pop(0)

0xfce: Push((int) 12603)
0xfcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfd0: IF (Stack[-1] == 0) GOTO 0xfe0; Pop(1)

0xfd1: PushEmpty(string)
0xfd2: Stack[-1] = "Neutral"
0xfd3: Call 0xeda

0xfd4: Pop(1)
0xfd5: Push((int) 11406)
0xfd6: @@ SetMessage(Stack[-1])
0xfd7: Pop(1)
0xfd8: @@ ClearReplies()
0xfd9: Pop(0)
0xfda: Push((int) 11407)
0xfdb: Push((int) -1)
0xfdc: Push((int) 12604)
0xfdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfde: Pop(3)
0xfdf: Return(); Pop(0)

0xfe0: Push((int) 11956)
0xfe1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe2: IF (Stack[-1] == 0) GOTO 0xff7; Pop(1)

0xfe3: PushEmpty(string)
0xfe4: Stack[-1] = "Neutral"
0xfe5: Call 0xeda

0xfe6: Pop(1)
0xfe7: Push((int) 10816)
0xfe8: @@ SetMessage(Stack[-1])
0xfe9: Pop(1)
0xfea: @@ ClearReplies()
0xfeb: Pop(0)
0xfec: Push((int) 10817)
0xfed: Push((int) 11958)
0xfee: Push((int) 11957)
0xfef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff0: Pop(3)
0xff1: Push((int) 11019)
0xff2: Push((int) 12191)
0xff3: Push((int) 12190)
0xff4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff5: Pop(3)
0xff6: Return(); Pop(0)

0xff7: Push((int) 12191)
0xff8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff9: IF (Stack[-1] == 0) GOTO 0x1009; Pop(1)

0xffa: PushEmpty(string)
0xffb: Stack[-1] = "Neutral"
0xffc: Call 0xeda

0xffd: Pop(1)
0xffe: Push((int) 11020)
0xfff: @@ SetMessage(Stack[-1])
0x1000: Pop(1)
0x1001: @@ ClearReplies()
0x1002: Pop(0)
0x1003: Push((int) 11021)
0x1004: Push((int) 12193)
0x1005: Push((int) 12192)
0x1006: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1007: Pop(3)
0x1008: Return(); Pop(0)

0x1009: Push((int) 12193)
0x100a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x100b: IF (Stack[-1] == 0) GOTO 0x1020; Pop(1)

0x100c: PushEmpty(string)
0x100d: Stack[-1] = "Neutral"
0x100e: Call 0xeda

0x100f: Pop(1)
0x1010: Push((int) 11022)
0x1011: @@ SetMessage(Stack[-1])
0x1012: Pop(1)
0x1013: @@ ClearReplies()
0x1014: Pop(0)
0x1015: Push((int) 11023)
0x1016: Push((int) 12202)
0x1017: Push((int) 12194)
0x1018: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1019: Pop(3)
0x101a: Push((int) 11024)
0x101b: Push((int) 12196)
0x101c: Push((int) 12195)
0x101d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101e: Pop(3)
0x101f: Return(); Pop(0)

0x1020: Push((int) 12196)
0x1021: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1022: IF (Stack[-1] == 0) GOTO 0x1037; Pop(1)

0x1023: PushEmpty(string)
0x1024: Stack[-1] = "Neutral"
0x1025: Call 0xeda

0x1026: Pop(1)
0x1027: Push((int) 11025)
0x1028: @@ SetMessage(Stack[-1])
0x1029: Pop(1)
0x102a: @@ ClearReplies()
0x102b: Pop(0)
0x102c: Push((int) 11026)
0x102d: Push((int) 12198)
0x102e: Push((int) 12197)
0x102f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1030: Pop(3)
0x1031: Push((int) 11028)
0x1032: Push((int) 12198)
0x1033: Push((int) 12199)
0x1034: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1035: Pop(3)
0x1036: Return(); Pop(0)

0x1037: Push((int) 12198)
0x1038: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1039: IF (Stack[-1] == 0) GOTO 0x1049; Pop(1)

0x103a: PushEmpty(string)
0x103b: Stack[-1] = "Neutral"
0x103c: Call 0xeda

0x103d: Pop(1)
0x103e: Push((int) 11027)
0x103f: @@ SetMessage(Stack[-1])
0x1040: Pop(1)
0x1041: @@ ClearReplies()
0x1042: Pop(0)
0x1043: Push((int) 11029)
0x1044: Push((int) 12202)
0x1045: Push((int) 12201)
0x1046: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1047: Pop(3)
0x1048: Return(); Pop(0)

0x1049: Push((int) 12202)
0x104a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x104b: IF (Stack[-1] == 0) GOTO 0x1060; Pop(1)

0x104c: PushEmpty(string)
0x104d: Stack[-1] = "Neutral"
0x104e: Call 0xeda

0x104f: Pop(1)
0x1050: Push((int) 11030)
0x1051: @@ SetMessage(Stack[-1])
0x1052: Pop(1)
0x1053: @@ ClearReplies()
0x1054: Pop(0)
0x1055: Push((int) 11031)
0x1056: Push((int) 12205)
0x1057: Push((int) 12203)
0x1058: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1059: Pop(3)
0x105a: Push((int) 11032)
0x105b: Push((int) 12205)
0x105c: Push((int) 12204)
0x105d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105e: Pop(3)
0x105f: Return(); Pop(0)

0x1060: Push((int) 12205)
0x1061: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1062: IF (Stack[-1] == 0) GOTO 0x1077; Pop(1)

0x1063: PushEmpty(string)
0x1064: Stack[-1] = "Neutral"
0x1065: Call 0xeda

0x1066: Pop(1)
0x1067: Push((int) 11033)
0x1068: @@ SetMessage(Stack[-1])
0x1069: Pop(1)
0x106a: @@ ClearReplies()
0x106b: Pop(0)
0x106c: Push((int) 11034)
0x106d: Push((int) 12208)
0x106e: Push((int) 12207)
0x106f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1070: Pop(3)
0x1071: Push((int) 11037)
0x1072: Push((int) 12211)
0x1073: Push((int) 12210)
0x1074: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1075: Pop(3)
0x1076: Return(); Pop(0)

0x1077: Push((int) 12211)
0x1078: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1079: IF (Stack[-1] == 0) GOTO 0x108e; Pop(1)

0x107a: PushEmpty(string)
0x107b: Stack[-1] = "Neutral"
0x107c: Call 0xeda

0x107d: Pop(1)
0x107e: Push((int) 11038)
0x107f: @@ SetMessage(Stack[-1])
0x1080: Pop(1)
0x1081: @@ ClearReplies()
0x1082: Pop(0)
0x1083: Push((int) 11039)
0x1084: Push((int) 12213)
0x1085: Push((int) 12212)
0x1086: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1087: Pop(3)
0x1088: Push((int) 11054)
0x1089: Push((int) 12222)
0x108a: Push((int) 12231)
0x108b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108c: Pop(3)
0x108d: Return(); Pop(0)

0x108e: Push((int) 12213)
0x108f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1090: IF (Stack[-1] == 0) GOTO 0x10a0; Pop(1)

0x1091: PushEmpty(string)
0x1092: Stack[-1] = "Neutral"
0x1093: Call 0xeda

0x1094: Pop(1)
0x1095: Push((int) 11040)
0x1096: @@ SetMessage(Stack[-1])
0x1097: Pop(1)
0x1098: @@ ClearReplies()
0x1099: Pop(0)
0x109a: Push((int) 11041)
0x109b: Push((int) 12215)
0x109c: Push((int) 12214)
0x109d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109e: Pop(3)
0x109f: Return(); Pop(0)

0x10a0: Push((int) 12215)
0x10a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a2: IF (Stack[-1] == 0) GOTO 0x10b2; Pop(1)

0x10a3: PushEmpty(string)
0x10a4: Stack[-1] = "Neutral"
0x10a5: Call 0xeda

0x10a6: Pop(1)
0x10a7: Push((int) 11042)
0x10a8: @@ SetMessage(Stack[-1])
0x10a9: Pop(1)
0x10aa: @@ ClearReplies()
0x10ab: Pop(0)
0x10ac: Push((int) 11043)
0x10ad: Push((int) 12222)
0x10ae: Push((int) 12216)
0x10af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b0: Pop(3)
0x10b1: Return(); Pop(0)

0x10b2: Push((int) 12208)
0x10b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b4: IF (Stack[-1] == 0) GOTO 0x10c4; Pop(1)

0x10b5: PushEmpty(string)
0x10b6: Stack[-1] = "Neutral"
0x10b7: Call 0xeda

0x10b8: Pop(1)
0x10b9: Push((int) 11035)
0x10ba: @@ SetMessage(Stack[-1])
0x10bb: Pop(1)
0x10bc: @@ ClearReplies()
0x10bd: Pop(0)
0x10be: Push((int) 11036)
0x10bf: Push((int) 12217)
0x10c0: Push((int) 12209)
0x10c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c2: Pop(3)
0x10c3: Return(); Pop(0)

0x10c4: Push((int) 12217)
0x10c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c6: IF (Stack[-1] == 0) GOTO 0x10db; Pop(1)

0x10c7: PushEmpty(string)
0x10c8: Stack[-1] = "Neutral"
0x10c9: Call 0xeda

0x10ca: Pop(1)
0x10cb: Push((int) 11044)
0x10cc: @@ SetMessage(Stack[-1])
0x10cd: Pop(1)
0x10ce: @@ ClearReplies()
0x10cf: Pop(0)
0x10d0: Push((int) 11045)
0x10d1: Push((int) 12222)
0x10d2: Push((int) 12218)
0x10d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d4: Pop(3)
0x10d5: Push((int) 11046)
0x10d6: Push((int) 12220)
0x10d7: Push((int) 12219)
0x10d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d9: Pop(3)
0x10da: Return(); Pop(0)

0x10db: Push((int) 12220)
0x10dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10dd: IF (Stack[-1] == 0) GOTO 0x10ed; Pop(1)

0x10de: PushEmpty(string)
0x10df: Stack[-1] = "Neutral"
0x10e0: Call 0xeda

0x10e1: Pop(1)
0x10e2: Push((int) 11047)
0x10e3: @@ SetMessage(Stack[-1])
0x10e4: Pop(1)
0x10e5: @@ ClearReplies()
0x10e6: Pop(0)
0x10e7: Push((int) 11048)
0x10e8: Push((int) 12222)
0x10e9: Push((int) 12221)
0x10ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10eb: Pop(3)
0x10ec: Return(); Pop(0)

0x10ed: Push((int) 11958)
0x10ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10ef: IF (Stack[-1] == 0) GOTO 0x1104; Pop(1)

0x10f0: PushEmpty(string)
0x10f1: Stack[-1] = "Neutral"
0x10f2: Call 0xeda

0x10f3: Pop(1)
0x10f4: Push((int) 10818)
0x10f5: @@ SetMessage(Stack[-1])
0x10f6: Pop(1)
0x10f7: @@ ClearReplies()
0x10f8: Pop(0)
0x10f9: Push((int) 10819)
0x10fa: Push((int) 12222)
0x10fb: Push((int) 11959)
0x10fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10fd: Pop(3)
0x10fe: Push((int) 10830)
0x10ff: Push((int) 11971)
0x1100: Push((int) 11970)
0x1101: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1102: Pop(3)
0x1103: Return(); Pop(0)

0x1104: Push((int) 11971)
0x1105: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1106: IF (Stack[-1] == 0) GOTO 0x111b; Pop(1)

0x1107: PushEmpty(string)
0x1108: Stack[-1] = "Neutral"
0x1109: Call 0xeda

0x110a: Pop(1)
0x110b: Push((int) 10831)
0x110c: @@ SetMessage(Stack[-1])
0x110d: Pop(1)
0x110e: @@ ClearReplies()
0x110f: Pop(0)
0x1110: Push((int) 10832)
0x1111: Push((int) 12222)
0x1112: Push((int) 11972)
0x1113: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1114: Pop(3)
0x1115: Push((int) 10833)
0x1116: Push((int) 12227)
0x1117: Push((int) 11974)
0x1118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1119: Pop(3)
0x111a: Return(); Pop(0)

0x111b: Push((int) 12227)
0x111c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x111d: IF (Stack[-1] == 0) GOTO 0x112d; Pop(1)

0x111e: PushEmpty(string)
0x111f: Stack[-1] = "Neutral"
0x1120: Call 0xeda

0x1121: Pop(1)
0x1122: Push((int) 11052)
0x1123: @@ SetMessage(Stack[-1])
0x1124: Pop(1)
0x1125: @@ ClearReplies()
0x1126: Pop(0)
0x1127: Push((int) 11053)
0x1128: Push((int) 12198)
0x1129: Push((int) 12228)
0x112a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112b: Pop(3)
0x112c: Return(); Pop(0)

0x112d: Push((int) 12222)
0x112e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x112f: IF (Stack[-1] == 0) GOTO 0x1149; Pop(1)

0x1130: PushEmpty(string)
0x1131: Stack[-1] = "Neutral"
0x1132: Call 0xeda

0x1133: Pop(1)
0x1134: Push((int) 11049)
0x1135: @@ SetMessage(Stack[-1])
0x1136: Pop(1)
0x1137: @@ ClearReplies()
0x1138: Pop(0)
0x1139: Push((int) 11050)
0x113a: Push((int) 12233)
0x113b: Push((int) 12223)
0x113c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113d: Pop(3)
0x113e: Push((int) 11051)
0x113f: Push((int) 12233)
0x1140: Push((int) 12224)
0x1141: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1142: Pop(3)
0x1143: Push((int) 11059)
0x1144: Push((int) 12240)
0x1145: Push((int) 12239)
0x1146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1147: Pop(3)
0x1148: Return(); Pop(0)

0x1149: Push((int) 12240)
0x114a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x114b: IF (Stack[-1] == 0) GOTO 0x115b; Pop(1)

0x114c: PushEmpty(string)
0x114d: Stack[-1] = "Neutral"
0x114e: Call 0xeda

0x114f: Pop(1)
0x1150: Push((int) 11060)
0x1151: @@ SetMessage(Stack[-1])
0x1152: Pop(1)
0x1153: @@ ClearReplies()
0x1154: Pop(0)
0x1155: Push((int) 11061)
0x1156: Push((int) 12233)
0x1157: Push((int) 12241)
0x1158: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1159: Pop(3)
0x115a: Return(); Pop(0)

0x115b: Push((int) 12233)
0x115c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115d: IF (Stack[-1] == 0) GOTO 0x1172; Pop(1)

0x115e: PushEmpty(string)
0x115f: Stack[-1] = "Neutral"
0x1160: Call 0xeda

0x1161: Pop(1)
0x1162: Push((int) 11055)
0x1163: @@ SetMessage(Stack[-1])
0x1164: Pop(1)
0x1165: @@ ClearReplies()
0x1166: Pop(0)
0x1167: Push((int) 11056)
0x1168: Push((int) 12237)
0x1169: Push((int) 12235)
0x116a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116b: Pop(3)
0x116c: Push((int) 11057)
0x116d: Push((int) 12237)
0x116e: Push((int) 12236)
0x116f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1170: Pop(3)
0x1171: Return(); Pop(0)

0x1172: Push((int) 12237)
0x1173: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1174: IF (Stack[-1] == 0) GOTO 0x1189; Pop(1)

0x1175: PushEmpty(string)
0x1176: Stack[-1] = "Neutral"
0x1177: Call 0xeda

0x1178: Pop(1)
0x1179: Push((int) 11058)
0x117a: @@ SetMessage(Stack[-1])
0x117b: Pop(1)
0x117c: @@ ClearReplies()
0x117d: Pop(0)
0x117e: Push((int) 11062)
0x117f: Push((int) -1)
0x1180: Push((int) 12243)
0x1181: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1182: Pop(3)
0x1183: Push((int) 11063)
0x1184: Push((int) -1)
0x1185: Push((int) 12244)
0x1186: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1187: Pop(3)
0x1188: Return(); Pop(0)

0x1189: Push((int) 12594)
0x118a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x118b: IF (Stack[-1] == 0) GOTO 0x119b; Pop(1)

0x118c: PushEmpty(string)
0x118d: Stack[-1] = "Neutral"
0x118e: Call 0xeda

0x118f: Pop(1)
0x1190: Push((int) 11397)
0x1191: @@ SetMessage(Stack[-1])
0x1192: Pop(1)
0x1193: @@ ClearReplies()
0x1194: Pop(0)
0x1195: Push((int) 11398)
0x1196: Push((int) 12596)
0x1197: Push((int) 12595)
0x1198: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1199: Pop(3)
0x119a: Return(); Pop(0)

0x119b: Push((int) 12596)
0x119c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x119d: IF (Stack[-1] == 0) GOTO 0x11ad; Pop(1)

0x119e: PushEmpty(string)
0x119f: Stack[-1] = "Neutral"
0x11a0: Call 0xeda

0x11a1: Pop(1)
0x11a2: Push((int) 11399)
0x11a3: @@ SetMessage(Stack[-1])
0x11a4: Pop(1)
0x11a5: @@ ClearReplies()
0x11a6: Pop(0)
0x11a7: Push((int) 11400)
0x11a8: Push((int) 12598)
0x11a9: Push((int) 12597)
0x11aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11ab: Pop(3)
0x11ac: Return(); Pop(0)

0x11ad: Push((int) 12598)
0x11ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11af: IF (Stack[-1] == 0) GOTO 0x11bf; Pop(1)

0x11b0: PushEmpty(string)
0x11b1: Stack[-1] = "Neutral"
0x11b2: Call 0xeda

0x11b3: Pop(1)
0x11b4: Push((int) 11401)
0x11b5: @@ SetMessage(Stack[-1])
0x11b6: Pop(1)
0x11b7: @@ ClearReplies()
0x11b8: Pop(0)
0x11b9: Push((int) 11409)
0x11ba: Push((int) 12607)
0x11bb: Push((int) 12606)
0x11bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11bd: Pop(3)
0x11be: Return(); Pop(0)

0x11bf: Push((int) 12607)
0x11c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c1: IF (Stack[-1] == 0) GOTO 0x11d1; Pop(1)

0x11c2: PushEmpty(string)
0x11c3: Stack[-1] = "Neutral"
0x11c4: Call 0xeda

0x11c5: Pop(1)
0x11c6: Push((int) 11410)
0x11c7: @@ SetMessage(Stack[-1])
0x11c8: Pop(1)
0x11c9: @@ ClearReplies()
0x11ca: Pop(0)
0x11cb: Push((int) 11411)
0x11cc: Push((int) 12609)
0x11cd: Push((int) 12608)
0x11ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11cf: Pop(3)
0x11d0: Return(); Pop(0)

0x11d1: Push((int) 12609)
0x11d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d3: IF (Stack[-1] == 0) GOTO 0x11e8; Pop(1)

0x11d4: PushEmpty(string)
0x11d5: Stack[-1] = "Neutral"
0x11d6: Call 0xeda

0x11d7: Pop(1)
0x11d8: Push((int) 11412)
0x11d9: @@ SetMessage(Stack[-1])
0x11da: Pop(1)
0x11db: @@ ClearReplies()
0x11dc: Pop(0)
0x11dd: Push((int) 11413)
0x11de: Push((int) -1)
0x11df: Push((int) 12610)
0x11e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e1: Pop(3)
0x11e2: Push((int) 11414)
0x11e3: Push((int) 12612)
0x11e4: Push((int) 12611)
0x11e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e6: Pop(3)
0x11e7: Return(); Pop(0)

0x11e8: Push((int) 12612)
0x11e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11ea: IF (Stack[-1] == 0) GOTO 0x11fa; Pop(1)

0x11eb: PushEmpty(string)
0x11ec: Stack[-1] = "Neutral"
0x11ed: Call 0xeda

0x11ee: Pop(1)
0x11ef: Push((int) 11415)
0x11f0: @@ SetMessage(Stack[-1])
0x11f1: Pop(1)
0x11f2: @@ ClearReplies()
0x11f3: Pop(0)
0x11f4: Push((int) 11416)
0x11f5: Push((int) -1)
0x11f6: Push((int) 12613)
0x11f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f8: Pop(3)
0x11f9: Return(); Pop(0)

0x11fa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x11fb: PushEmpty(bool)
0x11fc: Call 0x1c40

0x11fd: Pop(0)
0x11fe: IF (Stack[-1] == 0) GOTO 0x1202; Pop(1)

0x11ff: @ lshStopAnimation()
0x1200: Pop(0)
0x1201: GOTO 0x1204

0x1202: @ StopAnimation()
0x1203: Pop(0)
0x1204: Return(); Pop(0)

0x1205: GOTO 0xeeb

0x1206: Return(); Pop(0)

0x1207: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1208: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1209: PushEmpty(bool, object)
0x120a: Stack[-1] = Stack[-11]
0x120b: Call 0x1b99

0x120c: Pop(1)
0x120d: Pop(1); Push((bool) Stack[-1] == 0)
0x120e: IF (Stack[-1] == 0) GOTO 0x1211; Pop(1)

0x120f: Stack[-10] = (int) -2
0x1210: Return(); Pop(8)

0x1211: @ CreateDialog(Stack[-4])
0x1212: Pop(0)
0x1213: PushEmpty(int)
0x1214: Call 0x1c3c

0x1215: Pop(0)
0x1216: @@ SetNPCName(Stack[-1])
0x1217: Pop(1)
0x1218: PushEmpty(string)
0x1219: Call 0x1c3e

0x121a: Pop(0)
0x121b: @@ SetPhoto(Stack[-1])
0x121c: Pop(1)
0x121d: PushEmpty(int)
0x121e: Call 0x21e0

0x121f: Pop(0)
0x1220: @@ SetPlayerName(Stack[-1])
0x1221: Pop(1)
0x1222: Stack[-2] = (int) -1
0x1223: @ IsOverrideActive(Stack[-3])
0x1224: Pop(0)
0x1225: Push(Stack[-3])
0x1226: IF (Stack[-1] == 0) GOTO 0x1229; Pop(1)

0x1227: Stack[-10] = (int) -2
0x1228: Return(); Pop(8)

0x1229: @ DoDialog(Stack[-4])
0x122a: Pop(0)
0x122b: PushEmpty(object, object)
0x122c: Stack[-2] = Stack[-11]
0x122d: Stack[-1] = Stack[-6]
0x122e: Push(-2, 4); TaskCall(13)
0x122f: Call 0x1246

0x1230: Pop(-2, 4); TaskReturn
0x1231: Pop(2)
0x1232: @@ IsDialogEnd(Stack[-1])
0x1233: Pop(0)
0x1234: Pop(0); Push((bool) Stack[-1] == 0)
0x1235: IF (Stack[-1] == 0) GOTO 0x123b; Pop(1)

0x1236: @ sync()
0x1237: Pop(0)
0x1238: @@ IsDialogEnd(Stack[-1])
0x1239: Pop(0)
0x123a: GOTO 0x1234

0x123b: PushEmpty(object)
0x123c: Stack[-1] = Stack[-10]
0x123d: Call 0x1bd1

0x123e: Pop(1)
0x123f: @ StopDialog(Stack[-4])
0x1240: Pop(0)
0x1241: @@ GetReturnValue(Stack[-2])
0x1242: Pop(0)
0x1243: Stack[-10] = Stack[-2]
0x1244: Return(); Pop(8)

0x1245: Stack[-4] = 0
0x1246: PushEmpty()
0x1247: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1248: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1249: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x124a: Push((int) 1)
0x124b: IF (Stack[-1] == 0) GOTO 0x12bb; Pop(1)

0x124c: PushEmpty(bool)
0x124d: Stack[-1] = (bool) 0
0x124e: PushEmpty(bool)
0x124f: Stack[-1] = (bool) 0
0x1250: PushEmpty(bool, object)
0x1251: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1252: Call 0x2001

0x1253: Pop(1)
0x1254: IF (Stack[-1] == 0) GOTO 0x125c; Pop(1)

0x1255: PushEmpty(bool, object)
0x1256: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1257: Call 0x1fc5

0x1258: Pop(1)
0x1259: Pop(1); Push((bool) Stack[-1] == 0)
0x125a: IF (Stack[-1] == 0) GOTO 0x125c; Pop(1)

0x125b: Stack[-1] = (bool) 1
0x125c: IF (Stack[-1] == 0) GOTO 0x1264; Pop(1)

0x125d: PushEmpty(bool, object)
0x125e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x125f: Call 0x1fd1

0x1260: Pop(1)
0x1261: Pop(1); Push((bool) Stack[-1] == 0)
0x1262: IF (Stack[-1] == 0) GOTO 0x1264; Pop(1)

0x1263: Stack[-1] = (bool) 1
0x1264: IF (Stack[-1] == 0) GOTO 0x1284; Pop(1)

0x1265: PushEmpty(string)
0x1266: Stack[-1] = "Neutral"
0x1267: Call 0x12d9

0x1268: Pop(1)
0x1269: Push((int) 11741)
0x126a: @@ SetMessage(Stack[-1])
0x126b: Pop(1)
0x126c: @@ ClearReplies()
0x126d: Pop(0)
0x126e: Push((int) 11743)
0x126f: Push((int) 12951)
0x1270: Push((int) 12949)
0x1271: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1272: Pop(3)
0x1273: Push((int) 11742)
0x1274: Push((int) 12950)
0x1275: Push((int) 12948)
0x1276: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1277: Pop(3)
0x1278: PushEmpty(bool, object)
0x1279: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x127a: Call 0x1f89

0x127b: Pop(1)
0x127c: Pop(1); Push((bool) Stack[-1] == 0)
0x127d: IF (Stack[-1] == 0) GOTO 0x1283; Pop(1)

0x127e: Push((int) 12586)
0x127f: Push((int) 13766)
0x1280: Push((int) 13753)
0x1281: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1282: Pop(3)
0x1283: GOTO 0x12bb

0x1284: PushEmpty(string)
0x1285: Stack[-1] = "Neutral"
0x1286: Call 0x12d9

0x1287: Pop(1)
0x1288: Push((int) 12573)
0x1289: @@ SetMessage(Stack[-1])
0x128a: Pop(1)
0x128b: @@ ClearReplies()
0x128c: Pop(0)
0x128d: PushEmpty(bool)
0x128e: Stack[-1] = (bool) 0
0x128f: PushEmpty(bool, object)
0x1290: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1291: Call 0x1fdd

0x1292: Pop(1)
0x1293: IF (Stack[-1] == 0) GOTO 0x129a; Pop(1)

0x1294: PushEmpty(bool, object)
0x1295: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1296: Call 0x1fe9

0x1297: Pop(1)
0x1298: IF (Stack[-1] == 0) GOTO 0x129a; Pop(1)

0x1299: Stack[-1] = (bool) 1
0x129a: IF (Stack[-1] == 0) GOTO 0x12a0; Pop(1)

0x129b: Push((int) 12574)
0x129c: Push((int) 13744)
0x129d: Push((int) 13743)
0x129e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129f: Pop(3)
0x12a0: PushEmpty(bool)
0x12a1: Stack[-1] = (bool) 0
0x12a2: PushEmpty(bool, object)
0x12a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12a4: Call 0x1fc5

0x12a5: Pop(1)
0x12a6: IF (Stack[-1] == 0) GOTO 0x12ad; Pop(1)

0x12a7: PushEmpty(bool, object)
0x12a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12a9: Call 0x1ff5

0x12aa: Pop(1)
0x12ab: IF (Stack[-1] == 0) GOTO 0x12ad; Pop(1)

0x12ac: Stack[-1] = (bool) 1
0x12ad: IF (Stack[-1] == 0) GOTO 0x12b3; Pop(1)

0x12ae: Push((int) 12577)
0x12af: Push((int) 13747)
0x12b0: Push((int) 13746)
0x12b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b2: Pop(3)
0x12b3: Push((int) 12580)
0x12b4: Push((int) -1)
0x12b5: Push((int) 13749)
0x12b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b7: Pop(3)
0x12b8: GOTO 0x12bb

0x12b9: Return(); Pop(0)

0x12ba: GOTO 0x124a

0x12bb: PushEmpty(bool)
0x12bc: Call 0x1c40

0x12bd: Pop(0)
0x12be: IF (Stack[-1] == 0) GOTO 0x12ca; Pop(1)

0x12bf: @ lshWaitForAnimEnd()
0x12c0: Pop(0)
0x12c1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x12c2: IF (Stack[-1] == 0) GOTO 0x12c4; Pop(1)

0x12c3: GOTO 0x12c9

0x12c4: PushEmpty(string)
0x12c5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x12c6: Call 0x1bd5

0x12c7: Pop(1)
0x12c8: GOTO 0x12bf

0x12c9: GOTO 0x12d8

0x12ca: Push("all")
0x12cb: Push("idle")
0x12cc: @ PlayAnimation(Stack[-2], Stack[-1])
0x12cd: Pop(2)
0x12ce: @ WaitForAnimEnd()
0x12cf: Pop(0)
0x12d0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x12d1: IF (Stack[-1] == 0) GOTO 0x12d3; Pop(1)

0x12d2: GOTO 0x12d8

0x12d3: Push("all")
0x12d4: Push("idle")
0x12d5: @ PlayAnimation(Stack[-2], Stack[-1])
0x12d6: Pop(2)
0x12d7: GOTO 0x12ce

0x12d8: Return(); Pop(0)

0x12d9: PushEmpty()
0x12da: PushEmpty(bool)
0x12db: Call 0x1c40

0x12dc: Pop(0)
0x12dd: Pop(1); Push((bool) Stack[-1] == 0)
0x12de: IF (Stack[-1] == 0) GOTO 0x12e0; Pop(1)

0x12df: Return(); Pop(0)

0x12e0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x12e1: IF (Stack[-1] == 0) GOTO 0x12e3; Pop(1)

0x12e2: Return(); Pop(0)

0x12e3: PushEmpty(string)
0x12e4: Stack[-1] = Stack[-2]
0x12e5: Call 0x1bd5

0x12e6: Pop(1)
0x12e7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x12e8: Return(); Pop(0)

0x12e9: PushEmpty()
0x12ea: Push((int) 1)
0x12eb: IF (Stack[-1] == 0) GOTO 0x1483; Pop(1)

0x12ec: PushEmpty()
0x12ed: Call 0x1be7

0x12ee: Pop(0)
0x12ef: Push((int) 12969)
0x12f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12f1: IF (Stack[-1] == 0) GOTO 0x12fc; Pop(1)

0x12f2: PushEmpty(object, object)
0x12f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12f5: Call 0x1dd8

0x12f6: Pop(2)
0x12f7: PushEmpty(object, object)
0x12f8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12f9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12fa: Call 0x1e5b

0x12fb: Pop(2)
0x12fc: Push((int) 12970)
0x12fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12fe: IF (Stack[-1] == 0) GOTO 0x1309; Pop(1)

0x12ff: PushEmpty(object, object)
0x1300: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1301: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1302: Call 0x1dd8

0x1303: Pop(2)
0x1304: PushEmpty(object, object)
0x1305: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1306: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1307: Call 0x1e5b

0x1308: Pop(2)
0x1309: Push((int) 13745)
0x130a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x130b: IF (Stack[-1] == 0) GOTO 0x131b; Pop(1)

0x130c: PushEmpty(object, object)
0x130d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x130e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x130f: Call 0x1dca

0x1310: Pop(2)
0x1311: PushEmpty(object, object)
0x1312: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1313: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1314: Call 0x1dbd

0x1315: Pop(2)
0x1316: PushEmpty(object, object)
0x1317: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1318: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1319: Call 0x1c7a

0x131a: Pop(2)
0x131b: Push((int) 13748)
0x131c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x131d: IF (Stack[-1] == 0) GOTO 0x132d; Pop(1)

0x131e: PushEmpty(object, object)
0x131f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1320: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1321: Call 0x1dd0

0x1322: Pop(2)
0x1323: PushEmpty(object, object)
0x1324: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1325: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1326: Call 0x1dc8

0x1327: Pop(2)
0x1328: PushEmpty(object, object)
0x1329: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x132a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x132b: Call 0x1dd6

0x132c: Pop(2)
0x132d: Push((int) 12947)
0x132e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x132f: IF (Stack[-1] == 0) GOTO 0x139d; Pop(1)

0x1330: PushEmpty(bool)
0x1331: Stack[-1] = (bool) 0
0x1332: PushEmpty(bool)
0x1333: Stack[-1] = (bool) 0
0x1334: PushEmpty(bool, object)
0x1335: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1336: Call 0x2001

0x1337: Pop(1)
0x1338: IF (Stack[-1] == 0) GOTO 0x1340; Pop(1)

0x1339: PushEmpty(bool, object)
0x133a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x133b: Call 0x1fc5

0x133c: Pop(1)
0x133d: Pop(1); Push((bool) Stack[-1] == 0)
0x133e: IF (Stack[-1] == 0) GOTO 0x1340; Pop(1)

0x133f: Stack[-1] = (bool) 1
0x1340: IF (Stack[-1] == 0) GOTO 0x1348; Pop(1)

0x1341: PushEmpty(bool, object)
0x1342: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1343: Call 0x1fd1

0x1344: Pop(1)
0x1345: Pop(1); Push((bool) Stack[-1] == 0)
0x1346: IF (Stack[-1] == 0) GOTO 0x1348; Pop(1)

0x1347: Stack[-1] = (bool) 1
0x1348: IF (Stack[-1] == 0) GOTO 0x1368; Pop(1)

0x1349: PushEmpty(string)
0x134a: Stack[-1] = "Neutral"
0x134b: Call 0x12d9

0x134c: Pop(1)
0x134d: Push((int) 11741)
0x134e: @@ SetMessage(Stack[-1])
0x134f: Pop(1)
0x1350: @@ ClearReplies()
0x1351: Pop(0)
0x1352: Push((int) 11743)
0x1353: Push((int) 12951)
0x1354: Push((int) 12949)
0x1355: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1356: Pop(3)
0x1357: Push((int) 11742)
0x1358: Push((int) 12950)
0x1359: Push((int) 12948)
0x135a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135b: Pop(3)
0x135c: PushEmpty(bool, object)
0x135d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x135e: Call 0x1f89

0x135f: Pop(1)
0x1360: Pop(1); Push((bool) Stack[-1] == 0)
0x1361: IF (Stack[-1] == 0) GOTO 0x1367; Pop(1)

0x1362: Push((int) 12586)
0x1363: Push((int) 13766)
0x1364: Push((int) 13753)
0x1365: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1366: Pop(3)
0x1367: Return(); Pop(0)

0x1368: PushEmpty(string)
0x1369: Stack[-1] = "Neutral"
0x136a: Call 0x12d9

0x136b: Pop(1)
0x136c: Push((int) 12573)
0x136d: @@ SetMessage(Stack[-1])
0x136e: Pop(1)
0x136f: @@ ClearReplies()
0x1370: Pop(0)
0x1371: PushEmpty(bool)
0x1372: Stack[-1] = (bool) 0
0x1373: PushEmpty(bool, object)
0x1374: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1375: Call 0x1fdd

0x1376: Pop(1)
0x1377: IF (Stack[-1] == 0) GOTO 0x137e; Pop(1)

0x1378: PushEmpty(bool, object)
0x1379: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x137a: Call 0x1fe9

0x137b: Pop(1)
0x137c: IF (Stack[-1] == 0) GOTO 0x137e; Pop(1)

0x137d: Stack[-1] = (bool) 1
0x137e: IF (Stack[-1] == 0) GOTO 0x1384; Pop(1)

0x137f: Push((int) 12574)
0x1380: Push((int) 13744)
0x1381: Push((int) 13743)
0x1382: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1383: Pop(3)
0x1384: PushEmpty(bool)
0x1385: Stack[-1] = (bool) 0
0x1386: PushEmpty(bool, object)
0x1387: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1388: Call 0x1fc5

0x1389: Pop(1)
0x138a: IF (Stack[-1] == 0) GOTO 0x1391; Pop(1)

0x138b: PushEmpty(bool, object)
0x138c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x138d: Call 0x1ff5

0x138e: Pop(1)
0x138f: IF (Stack[-1] == 0) GOTO 0x1391; Pop(1)

0x1390: Stack[-1] = (bool) 1
0x1391: IF (Stack[-1] == 0) GOTO 0x1397; Pop(1)

0x1392: Push((int) 12577)
0x1393: Push((int) 13747)
0x1394: Push((int) 13746)
0x1395: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1396: Pop(3)
0x1397: Push((int) 12580)
0x1398: Push((int) -1)
0x1399: Push((int) 13749)
0x139a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x139b: Pop(3)
0x139c: Return(); Pop(0)

0x139d: Push((int) 13747)
0x139e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x139f: IF (Stack[-1] == 0) GOTO 0x13b4; Pop(1)

0x13a0: PushEmpty(string)
0x13a1: Stack[-1] = "Neutral"
0x13a2: Call 0x12d9

0x13a3: Pop(1)
0x13a4: Push((int) 12578)
0x13a5: @@ SetMessage(Stack[-1])
0x13a6: Pop(1)
0x13a7: @@ ClearReplies()
0x13a8: Pop(0)
0x13a9: Push((int) 12598)
0x13aa: Push((int) 13770)
0x13ab: Push((int) 13769)
0x13ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13ad: Pop(3)
0x13ae: Push((int) 12603)
0x13af: Push((int) 13772)
0x13b0: Push((int) 13775)
0x13b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b2: Pop(3)
0x13b3: Return(); Pop(0)

0x13b4: Push((int) 13770)
0x13b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13b6: IF (Stack[-1] == 0) GOTO 0x13cb; Pop(1)

0x13b7: PushEmpty(string)
0x13b8: Stack[-1] = "Neutral"
0x13b9: Call 0x12d9

0x13ba: Pop(1)
0x13bb: Push((int) 12599)
0x13bc: @@ SetMessage(Stack[-1])
0x13bd: Pop(1)
0x13be: @@ ClearReplies()
0x13bf: Pop(0)
0x13c0: Push((int) 12600)
0x13c1: Push((int) 13772)
0x13c2: Push((int) 13771)
0x13c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c4: Pop(3)
0x13c5: Push((int) 12602)
0x13c6: Push((int) 13772)
0x13c7: Push((int) 13773)
0x13c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c9: Pop(3)
0x13ca: Return(); Pop(0)

0x13cb: Push((int) 13772)
0x13cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13cd: IF (Stack[-1] == 0) GOTO 0x13dd; Pop(1)

0x13ce: PushEmpty(string)
0x13cf: Stack[-1] = "Neutral"
0x13d0: Call 0x12d9

0x13d1: Pop(1)
0x13d2: Push((int) 12601)
0x13d3: @@ SetMessage(Stack[-1])
0x13d4: Pop(1)
0x13d5: @@ ClearReplies()
0x13d6: Pop(0)
0x13d7: Push((int) 12579)
0x13d8: Push((int) -1)
0x13d9: Push((int) 13748)
0x13da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13db: Pop(3)
0x13dc: Return(); Pop(0)

0x13dd: Push((int) 13744)
0x13de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13df: IF (Stack[-1] == 0) GOTO 0x13ef; Pop(1)

0x13e0: PushEmpty(string)
0x13e1: Stack[-1] = "Neutral"
0x13e2: Call 0x12d9

0x13e3: Pop(1)
0x13e4: Push((int) 12575)
0x13e5: @@ SetMessage(Stack[-1])
0x13e6: Pop(1)
0x13e7: @@ ClearReplies()
0x13e8: Pop(0)
0x13e9: Push((int) 12576)
0x13ea: Push((int) -1)
0x13eb: Push((int) 13745)
0x13ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13ed: Pop(3)
0x13ee: Return(); Pop(0)

0x13ef: Push((int) 13766)
0x13f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13f1: IF (Stack[-1] == 0) GOTO 0x1401; Pop(1)

0x13f2: PushEmpty(string)
0x13f3: Stack[-1] = "Neutral"
0x13f4: Call 0x12d9

0x13f5: Pop(1)
0x13f6: Push((int) 12596)
0x13f7: @@ SetMessage(Stack[-1])
0x13f8: Pop(1)
0x13f9: @@ ClearReplies()
0x13fa: Pop(0)
0x13fb: Push((int) 12597)
0x13fc: Push((int) 12960)
0x13fd: Push((int) 13767)
0x13fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13ff: Pop(3)
0x1400: Return(); Pop(0)

0x1401: Push((int) 12950)
0x1402: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1403: IF (Stack[-1] == 0) GOTO 0x1413; Pop(1)

0x1404: PushEmpty(string)
0x1405: Stack[-1] = "Neutral"
0x1406: Call 0x12d9

0x1407: Pop(1)
0x1408: Push((int) 11744)
0x1409: @@ SetMessage(Stack[-1])
0x140a: Pop(1)
0x140b: @@ ClearReplies()
0x140c: Pop(0)
0x140d: Push((int) 11746)
0x140e: Push((int) 12954)
0x140f: Push((int) 12952)
0x1410: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1411: Pop(3)
0x1412: Return(); Pop(0)

0x1413: Push((int) 12954)
0x1414: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1415: IF (Stack[-1] == 0) GOTO 0x1425; Pop(1)

0x1416: PushEmpty(string)
0x1417: Stack[-1] = "Neutral"
0x1418: Call 0x12d9

0x1419: Pop(1)
0x141a: Push((int) 11748)
0x141b: @@ SetMessage(Stack[-1])
0x141c: Pop(1)
0x141d: @@ ClearReplies()
0x141e: Pop(0)
0x141f: Push((int) 11749)
0x1420: Push((int) 12951)
0x1421: Push((int) 12955)
0x1422: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1423: Pop(3)
0x1424: Return(); Pop(0)

0x1425: Push((int) 12951)
0x1426: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1427: IF (Stack[-1] == 0) GOTO 0x1437; Pop(1)

0x1428: PushEmpty(string)
0x1429: Stack[-1] = "Neutral"
0x142a: Call 0x12d9

0x142b: Pop(1)
0x142c: Push((int) 11745)
0x142d: @@ SetMessage(Stack[-1])
0x142e: Pop(1)
0x142f: @@ ClearReplies()
0x1430: Pop(0)
0x1431: Push((int) 11747)
0x1432: Push((int) 12957)
0x1433: Push((int) 12953)
0x1434: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1435: Pop(3)
0x1436: Return(); Pop(0)

0x1437: Push((int) 12957)
0x1438: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1439: IF (Stack[-1] == 0) GOTO 0x144e; Pop(1)

0x143a: PushEmpty(string)
0x143b: Stack[-1] = "Neutral"
0x143c: Call 0x12d9

0x143d: Pop(1)
0x143e: Push((int) 11750)
0x143f: @@ SetMessage(Stack[-1])
0x1440: Pop(1)
0x1441: @@ ClearReplies()
0x1442: Pop(0)
0x1443: Push((int) 11751)
0x1444: Push((int) 12960)
0x1445: Push((int) 12958)
0x1446: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1447: Pop(3)
0x1448: Push((int) 11752)
0x1449: Push((int) 12960)
0x144a: Push((int) 12959)
0x144b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x144c: Pop(3)
0x144d: Return(); Pop(0)

0x144e: Push((int) 12960)
0x144f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1450: IF (Stack[-1] == 0) GOTO 0x1460; Pop(1)

0x1451: PushEmpty(string)
0x1452: Stack[-1] = "Neutral"
0x1453: Call 0x12d9

0x1454: Pop(1)
0x1455: Push((int) 11753)
0x1456: @@ SetMessage(Stack[-1])
0x1457: Pop(1)
0x1458: @@ ClearReplies()
0x1459: Pop(0)
0x145a: Push((int) 11754)
0x145b: Push((int) 12964)
0x145c: Push((int) 12962)
0x145d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145e: Pop(3)
0x145f: Return(); Pop(0)

0x1460: Push((int) 12964)
0x1461: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1462: IF (Stack[-1] == 0) GOTO 0x1477; Pop(1)

0x1463: PushEmpty(string)
0x1464: Stack[-1] = "Neutral"
0x1465: Call 0x12d9

0x1466: Pop(1)
0x1467: Push((int) 11756)
0x1468: @@ SetMessage(Stack[-1])
0x1469: Pop(1)
0x146a: @@ ClearReplies()
0x146b: Pop(0)
0x146c: Push((int) 11761)
0x146d: Push((int) -1)
0x146e: Push((int) 12969)
0x146f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1470: Pop(3)
0x1471: Push((int) 11762)
0x1472: Push((int) -1)
0x1473: Push((int) 12970)
0x1474: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1475: Pop(3)
0x1476: Return(); Pop(0)

0x1477: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1478: PushEmpty(bool)
0x1479: Call 0x1c40

0x147a: Pop(0)
0x147b: IF (Stack[-1] == 0) GOTO 0x147f; Pop(1)

0x147c: @ lshStopAnimation()
0x147d: Pop(0)
0x147e: GOTO 0x1481

0x147f: @ StopAnimation()
0x1480: Pop(0)
0x1481: Return(); Pop(0)

0x1482: GOTO 0x12ea

0x1483: Return(); Pop(0)

0x1484: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1485: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1486: PushEmpty(bool, object)
0x1487: Stack[-1] = Stack[-11]
0x1488: Call 0x1b99

0x1489: Pop(1)
0x148a: Pop(1); Push((bool) Stack[-1] == 0)
0x148b: IF (Stack[-1] == 0) GOTO 0x148e; Pop(1)

0x148c: Stack[-10] = (int) -2
0x148d: Return(); Pop(8)

0x148e: @ CreateDialog(Stack[-4])
0x148f: Pop(0)
0x1490: PushEmpty(int)
0x1491: Call 0x1c3c

0x1492: Pop(0)
0x1493: @@ SetNPCName(Stack[-1])
0x1494: Pop(1)
0x1495: PushEmpty(string)
0x1496: Call 0x1c3e

0x1497: Pop(0)
0x1498: @@ SetPhoto(Stack[-1])
0x1499: Pop(1)
0x149a: PushEmpty(int)
0x149b: Call 0x21e0

0x149c: Pop(0)
0x149d: @@ SetPlayerName(Stack[-1])
0x149e: Pop(1)
0x149f: Stack[-2] = (int) -1
0x14a0: @ IsOverrideActive(Stack[-3])
0x14a1: Pop(0)
0x14a2: Push(Stack[-3])
0x14a3: IF (Stack[-1] == 0) GOTO 0x14a6; Pop(1)

0x14a4: Stack[-10] = (int) -2
0x14a5: Return(); Pop(8)

0x14a6: @ DoDialog(Stack[-4])
0x14a7: Pop(0)
0x14a8: PushEmpty(object, object)
0x14a9: Stack[-2] = Stack[-11]
0x14aa: Stack[-1] = Stack[-6]
0x14ab: Push(-2, 4); TaskCall(15)
0x14ac: Call 0x14c3

0x14ad: Pop(-2, 4); TaskReturn
0x14ae: Pop(2)
0x14af: @@ IsDialogEnd(Stack[-1])
0x14b0: Pop(0)
0x14b1: Pop(0); Push((bool) Stack[-1] == 0)
0x14b2: IF (Stack[-1] == 0) GOTO 0x14b8; Pop(1)

0x14b3: @ sync()
0x14b4: Pop(0)
0x14b5: @@ IsDialogEnd(Stack[-1])
0x14b6: Pop(0)
0x14b7: GOTO 0x14b1

0x14b8: PushEmpty(object)
0x14b9: Stack[-1] = Stack[-10]
0x14ba: Call 0x1bd1

0x14bb: Pop(1)
0x14bc: @ StopDialog(Stack[-4])
0x14bd: Pop(0)
0x14be: @@ GetReturnValue(Stack[-2])
0x14bf: Pop(0)
0x14c0: Stack[-10] = Stack[-2]
0x14c1: Return(); Pop(8)

0x14c2: Stack[-4] = 0
0x14c3: PushEmpty()
0x14c4: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x14c5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x14c6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x14c7: Push((int) 1)
0x14c8: IF (Stack[-1] == 0) GOTO 0x152d; Pop(1)

0x14c9: PushEmpty(bool, object)
0x14ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14cb: Call 0x1fa1

0x14cc: Pop(1)
0x14cd: IF (Stack[-1] == 0) GOTO 0x14e2; Pop(1)

0x14ce: PushEmpty(string)
0x14cf: Stack[-1] = "Neutral"
0x14d0: Call 0x154b

0x14d1: Pop(1)
0x14d2: Push((int) 12104)
0x14d3: @@ SetMessage(Stack[-1])
0x14d4: Pop(1)
0x14d5: @@ ClearReplies()
0x14d6: Pop(0)
0x14d7: Push((int) 12105)
0x14d8: Push((int) 13334)
0x14d9: Push((int) 13331)
0x14da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14db: Pop(3)
0x14dc: Push((int) 12106)
0x14dd: Push((int) 13333)
0x14de: Push((int) 13332)
0x14df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e0: Pop(3)
0x14e1: GOTO 0x152d

0x14e2: PushEmpty(string)
0x14e3: Stack[-1] = "Neutral"
0x14e4: Call 0x154b

0x14e5: Pop(1)
0x14e6: Push((int) 12515)
0x14e7: @@ SetMessage(Stack[-1])
0x14e8: Pop(1)
0x14e9: @@ ClearReplies()
0x14ea: Pop(0)
0x14eb: PushEmpty(bool, object)
0x14ec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14ed: Call 0x1f95

0x14ee: Pop(1)
0x14ef: IF (Stack[-1] == 0) GOTO 0x14f5; Pop(1)

0x14f0: Push((int) 12520)
0x14f1: Push((int) 13691)
0x14f2: Push((int) 13690)
0x14f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f4: Pop(3)
0x14f5: PushEmpty(bool)
0x14f6: Stack[-1] = (bool) 0
0x14f7: PushEmpty(bool, object)
0x14f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14f9: Call 0x1fad

0x14fa: Pop(1)
0x14fb: IF (Stack[-1] == 0) GOTO 0x1502; Pop(1)

0x14fc: PushEmpty(bool, object)
0x14fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14fe: Call 0x200d

0x14ff: Pop(1)
0x1500: IF (Stack[-1] == 0) GOTO 0x1502; Pop(1)

0x1501: Stack[-1] = (bool) 1
0x1502: IF (Stack[-1] == 0) GOTO 0x1508; Pop(1)

0x1503: Push((int) 12516)
0x1504: Push((int) 13688)
0x1505: Push((int) 13686)
0x1506: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1507: Pop(3)
0x1508: PushEmpty(bool)
0x1509: Stack[-1] = (bool) 0
0x150a: PushEmpty(bool)
0x150b: Stack[-1] = (bool) 0
0x150c: PushEmpty(bool, object)
0x150d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x150e: Call 0x1fb9

0x150f: Pop(1)
0x1510: IF (Stack[-1] == 0) GOTO 0x1517; Pop(1)

0x1511: PushEmpty(bool, object)
0x1512: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1513: Call 0x2019

0x1514: Pop(1)
0x1515: IF (Stack[-1] == 0) GOTO 0x1517; Pop(1)

0x1516: Stack[-1] = (bool) 1
0x1517: IF (Stack[-1] == 0) GOTO 0x151f; Pop(1)

0x1518: PushEmpty(bool, object)
0x1519: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x151a: Call 0x200d

0x151b: Pop(1)
0x151c: Pop(1); Push((bool) Stack[-1] == 0)
0x151d: IF (Stack[-1] == 0) GOTO 0x151f; Pop(1)

0x151e: Stack[-1] = (bool) 1
0x151f: IF (Stack[-1] == 0) GOTO 0x1525; Pop(1)

0x1520: Push((int) 12526)
0x1521: Push((int) 13697)
0x1522: Push((int) 13696)
0x1523: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1524: Pop(3)
0x1525: Push((int) 12517)
0x1526: Push((int) -1)
0x1527: Push((int) 13687)
0x1528: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1529: Pop(3)
0x152a: GOTO 0x152d

0x152b: Return(); Pop(0)

0x152c: GOTO 0x14c7

0x152d: PushEmpty(bool)
0x152e: Call 0x1c40

0x152f: Pop(0)
0x1530: IF (Stack[-1] == 0) GOTO 0x153c; Pop(1)

0x1531: @ lshWaitForAnimEnd()
0x1532: Pop(0)
0x1533: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1534: IF (Stack[-1] == 0) GOTO 0x1536; Pop(1)

0x1535: GOTO 0x153b

0x1536: PushEmpty(string)
0x1537: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1538: Call 0x1bd5

0x1539: Pop(1)
0x153a: GOTO 0x1531

0x153b: GOTO 0x154a

0x153c: Push("all")
0x153d: Push("idle")
0x153e: @ PlayAnimation(Stack[-2], Stack[-1])
0x153f: Pop(2)
0x1540: @ WaitForAnimEnd()
0x1541: Pop(0)
0x1542: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1543: IF (Stack[-1] == 0) GOTO 0x1545; Pop(1)

0x1544: GOTO 0x154a

0x1545: Push("all")
0x1546: Push("idle")
0x1547: @ PlayAnimation(Stack[-2], Stack[-1])
0x1548: Pop(2)
0x1549: GOTO 0x1540

0x154a: Return(); Pop(0)

0x154b: PushEmpty()
0x154c: PushEmpty(bool)
0x154d: Call 0x1c40

0x154e: Pop(0)
0x154f: Pop(1); Push((bool) Stack[-1] == 0)
0x1550: IF (Stack[-1] == 0) GOTO 0x1552; Pop(1)

0x1551: Return(); Pop(0)

0x1552: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1553: IF (Stack[-1] == 0) GOTO 0x1555; Pop(1)

0x1554: Return(); Pop(0)

0x1555: PushEmpty(string)
0x1556: Stack[-1] = Stack[-2]
0x1557: Call 0x1bd5

0x1558: Pop(1)
0x1559: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x155a: Return(); Pop(0)

0x155b: PushEmpty()
0x155c: Push((int) 1)
0x155d: IF (Stack[-1] == 0) GOTO 0x16d6; Pop(1)

0x155e: PushEmpty()
0x155f: Call 0x1be7

0x1560: Pop(0)
0x1561: Push((int) 13670)
0x1562: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1563: IF (Stack[-1] == 0) GOTO 0x1573; Pop(1)

0x1564: PushEmpty(object, object)
0x1565: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1566: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1567: Call 0x1d9b

0x1568: Pop(2)
0x1569: PushEmpty(object, object)
0x156a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x156b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x156c: Call 0x1d73

0x156d: Pop(2)
0x156e: PushEmpty(object, object)
0x156f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1570: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1571: Call 0x1da7

0x1572: Pop(2)
0x1573: Push((int) 13671)
0x1574: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1575: IF (Stack[-1] == 0) GOTO 0x1580; Pop(1)

0x1576: PushEmpty(object, object)
0x1577: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1578: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1579: Call 0x1d9b

0x157a: Pop(2)
0x157b: PushEmpty(object, object)
0x157c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x157d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x157e: Call 0x1da7

0x157f: Pop(2)
0x1580: Push((int) 13692)
0x1581: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1582: IF (Stack[-1] == 0) GOTO 0x1588; Pop(1)

0x1583: PushEmpty(object, object)
0x1584: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1585: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1586: Call 0x1d73

0x1587: Pop(2)
0x1588: Push((int) 13689)
0x1589: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x158a: IF (Stack[-1] == 0) GOTO 0x159f; Pop(1)

0x158b: PushEmpty(object, object)
0x158c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x158d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x158e: Call 0x1d68

0x158f: Pop(2)
0x1590: PushEmpty(object, object)
0x1591: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1592: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1593: Call 0x1c7a

0x1594: Pop(2)
0x1595: PushEmpty(object, object)
0x1596: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1597: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1598: Call 0x1da1

0x1599: Pop(2)
0x159a: PushEmpty(object, object)
0x159b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x159c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x159d: Call 0x1dde

0x159e: Pop(2)
0x159f: Push((int) 13698)
0x15a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15a1: IF (Stack[-1] == 0) GOTO 0x15ac; Pop(1)

0x15a2: PushEmpty(object, object)
0x15a3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15a5: Call 0x1dad

0x15a6: Pop(2)
0x15a7: PushEmpty(object, object)
0x15a8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15a9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15aa: Call 0x1db3

0x15ab: Pop(2)
0x15ac: Push((int) 13330)
0x15ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15ae: IF (Stack[-1] == 0) GOTO 0x1611; Pop(1)

0x15af: PushEmpty(bool, object)
0x15b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15b1: Call 0x1fa1

0x15b2: Pop(1)
0x15b3: IF (Stack[-1] == 0) GOTO 0x15c8; Pop(1)

0x15b4: PushEmpty(string)
0x15b5: Stack[-1] = "Neutral"
0x15b6: Call 0x154b

0x15b7: Pop(1)
0x15b8: Push((int) 12104)
0x15b9: @@ SetMessage(Stack[-1])
0x15ba: Pop(1)
0x15bb: @@ ClearReplies()
0x15bc: Pop(0)
0x15bd: Push((int) 12105)
0x15be: Push((int) 13334)
0x15bf: Push((int) 13331)
0x15c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c1: Pop(3)
0x15c2: Push((int) 12106)
0x15c3: Push((int) 13333)
0x15c4: Push((int) 13332)
0x15c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c6: Pop(3)
0x15c7: Return(); Pop(0)

0x15c8: PushEmpty(string)
0x15c9: Stack[-1] = "Neutral"
0x15ca: Call 0x154b

0x15cb: Pop(1)
0x15cc: Push((int) 12515)
0x15cd: @@ SetMessage(Stack[-1])
0x15ce: Pop(1)
0x15cf: @@ ClearReplies()
0x15d0: Pop(0)
0x15d1: PushEmpty(bool, object)
0x15d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d3: Call 0x1f95

0x15d4: Pop(1)
0x15d5: IF (Stack[-1] == 0) GOTO 0x15db; Pop(1)

0x15d6: Push((int) 12520)
0x15d7: Push((int) 13691)
0x15d8: Push((int) 13690)
0x15d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15da: Pop(3)
0x15db: PushEmpty(bool)
0x15dc: Stack[-1] = (bool) 0
0x15dd: PushEmpty(bool, object)
0x15de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15df: Call 0x1fad

0x15e0: Pop(1)
0x15e1: IF (Stack[-1] == 0) GOTO 0x15e8; Pop(1)

0x15e2: PushEmpty(bool, object)
0x15e3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15e4: Call 0x200d

0x15e5: Pop(1)
0x15e6: IF (Stack[-1] == 0) GOTO 0x15e8; Pop(1)

0x15e7: Stack[-1] = (bool) 1
0x15e8: IF (Stack[-1] == 0) GOTO 0x15ee; Pop(1)

0x15e9: Push((int) 12516)
0x15ea: Push((int) 13688)
0x15eb: Push((int) 13686)
0x15ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15ed: Pop(3)
0x15ee: PushEmpty(bool)
0x15ef: Stack[-1] = (bool) 0
0x15f0: PushEmpty(bool)
0x15f1: Stack[-1] = (bool) 0
0x15f2: PushEmpty(bool, object)
0x15f3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15f4: Call 0x1fb9

0x15f5: Pop(1)
0x15f6: IF (Stack[-1] == 0) GOTO 0x15fd; Pop(1)

0x15f7: PushEmpty(bool, object)
0x15f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15f9: Call 0x2019

0x15fa: Pop(1)
0x15fb: IF (Stack[-1] == 0) GOTO 0x15fd; Pop(1)

0x15fc: Stack[-1] = (bool) 1
0x15fd: IF (Stack[-1] == 0) GOTO 0x1605; Pop(1)

0x15fe: PushEmpty(bool, object)
0x15ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1600: Call 0x200d

0x1601: Pop(1)
0x1602: Pop(1); Push((bool) Stack[-1] == 0)
0x1603: IF (Stack[-1] == 0) GOTO 0x1605; Pop(1)

0x1604: Stack[-1] = (bool) 1
0x1605: IF (Stack[-1] == 0) GOTO 0x160b; Pop(1)

0x1606: Push((int) 12526)
0x1607: Push((int) 13697)
0x1608: Push((int) 13696)
0x1609: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x160a: Pop(3)
0x160b: Push((int) 12517)
0x160c: Push((int) -1)
0x160d: Push((int) 13687)
0x160e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x160f: Pop(3)
0x1610: Return(); Pop(0)

0x1611: Push((int) 13697)
0x1612: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1613: IF (Stack[-1] == 0) GOTO 0x1623; Pop(1)

0x1614: PushEmpty(string)
0x1615: Stack[-1] = "Neutral"
0x1616: Call 0x154b

0x1617: Pop(1)
0x1618: Push((int) 12527)
0x1619: @@ SetMessage(Stack[-1])
0x161a: Pop(1)
0x161b: @@ ClearReplies()
0x161c: Pop(0)
0x161d: Push((int) 12528)
0x161e: Push((int) -1)
0x161f: Push((int) 13698)
0x1620: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1621: Pop(3)
0x1622: Return(); Pop(0)

0x1623: Push((int) 13688)
0x1624: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1625: IF (Stack[-1] == 0) GOTO 0x1635; Pop(1)

0x1626: PushEmpty(string)
0x1627: Stack[-1] = "Neutral"
0x1628: Call 0x154b

0x1629: Pop(1)
0x162a: Push((int) 12518)
0x162b: @@ SetMessage(Stack[-1])
0x162c: Pop(1)
0x162d: @@ ClearReplies()
0x162e: Pop(0)
0x162f: Push((int) 12519)
0x1630: Push((int) -1)
0x1631: Push((int) 13689)
0x1632: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1633: Pop(3)
0x1634: Return(); Pop(0)

0x1635: Push((int) 13691)
0x1636: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1637: IF (Stack[-1] == 0) GOTO 0x1647; Pop(1)

0x1638: PushEmpty(string)
0x1639: Stack[-1] = "Neutral"
0x163a: Call 0x154b

0x163b: Pop(1)
0x163c: Push((int) 12521)
0x163d: @@ SetMessage(Stack[-1])
0x163e: Pop(1)
0x163f: @@ ClearReplies()
0x1640: Pop(0)
0x1641: Push((int) 12522)
0x1642: Push((int) -1)
0x1643: Push((int) 13692)
0x1644: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1645: Pop(3)
0x1646: Return(); Pop(0)

0x1647: Push((int) 13333)
0x1648: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1649: IF (Stack[-1] == 0) GOTO 0x1659; Pop(1)

0x164a: PushEmpty(string)
0x164b: Stack[-1] = "Neutral"
0x164c: Call 0x154b

0x164d: Pop(1)
0x164e: Push((int) 12107)
0x164f: @@ SetMessage(Stack[-1])
0x1650: Pop(1)
0x1651: @@ ClearReplies()
0x1652: Pop(0)
0x1653: Push((int) 12493)
0x1654: Push((int) 13334)
0x1655: Push((int) 13662)
0x1656: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1657: Pop(3)
0x1658: Return(); Pop(0)

0x1659: Push((int) 13334)
0x165a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165b: IF (Stack[-1] == 0) GOTO 0x166b; Pop(1)

0x165c: PushEmpty(string)
0x165d: Stack[-1] = "Neutral"
0x165e: Call 0x154b

0x165f: Pop(1)
0x1660: Push((int) 12108)
0x1661: @@ SetMessage(Stack[-1])
0x1662: Pop(1)
0x1663: @@ ClearReplies()
0x1664: Pop(0)
0x1665: Push((int) 12109)
0x1666: Push((int) 13336)
0x1667: Push((int) 13335)
0x1668: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1669: Pop(3)
0x166a: Return(); Pop(0)

0x166b: Push((int) 13336)
0x166c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x166d: IF (Stack[-1] == 0) GOTO 0x167d; Pop(1)

0x166e: PushEmpty(string)
0x166f: Stack[-1] = "Neutral"
0x1670: Call 0x154b

0x1671: Pop(1)
0x1672: Push((int) 12110)
0x1673: @@ SetMessage(Stack[-1])
0x1674: Pop(1)
0x1675: @@ ClearReplies()
0x1676: Pop(0)
0x1677: Push((int) 12111)
0x1678: Push((int) 13338)
0x1679: Push((int) 13337)
0x167a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167b: Pop(3)
0x167c: Return(); Pop(0)

0x167d: Push((int) 13338)
0x167e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167f: IF (Stack[-1] == 0) GOTO 0x168f; Pop(1)

0x1680: PushEmpty(string)
0x1681: Stack[-1] = "Neutral"
0x1682: Call 0x154b

0x1683: Pop(1)
0x1684: Push((int) 12112)
0x1685: @@ SetMessage(Stack[-1])
0x1686: Pop(1)
0x1687: @@ ClearReplies()
0x1688: Pop(0)
0x1689: Push((int) 12494)
0x168a: Push((int) 13665)
0x168b: Push((int) 13664)
0x168c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168d: Pop(3)
0x168e: Return(); Pop(0)

0x168f: Push((int) 13665)
0x1690: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1691: IF (Stack[-1] == 0) GOTO 0x16a1; Pop(1)

0x1692: PushEmpty(string)
0x1693: Stack[-1] = "Neutral"
0x1694: Call 0x154b

0x1695: Pop(1)
0x1696: Push((int) 12495)
0x1697: @@ SetMessage(Stack[-1])
0x1698: Pop(1)
0x1699: @@ ClearReplies()
0x169a: Pop(0)
0x169b: Push((int) 12496)
0x169c: Push((int) 13667)
0x169d: Push((int) 13666)
0x169e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x169f: Pop(3)
0x16a0: Return(); Pop(0)

0x16a1: Push((int) 13667)
0x16a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16a3: IF (Stack[-1] == 0) GOTO 0x16b3; Pop(1)

0x16a4: PushEmpty(string)
0x16a5: Stack[-1] = "Neutral"
0x16a6: Call 0x154b

0x16a7: Pop(1)
0x16a8: Push((int) 12497)
0x16a9: @@ SetMessage(Stack[-1])
0x16aa: Pop(1)
0x16ab: @@ ClearReplies()
0x16ac: Pop(0)
0x16ad: Push((int) 12498)
0x16ae: Push((int) 13669)
0x16af: Push((int) 13668)
0x16b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b1: Pop(3)
0x16b2: Return(); Pop(0)

0x16b3: Push((int) 13669)
0x16b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16b5: IF (Stack[-1] == 0) GOTO 0x16ca; Pop(1)

0x16b6: PushEmpty(string)
0x16b7: Stack[-1] = "Neutral"
0x16b8: Call 0x154b

0x16b9: Pop(1)
0x16ba: Push((int) 12499)
0x16bb: @@ SetMessage(Stack[-1])
0x16bc: Pop(1)
0x16bd: @@ ClearReplies()
0x16be: Pop(0)
0x16bf: Push((int) 12500)
0x16c0: Push((int) -1)
0x16c1: Push((int) 13670)
0x16c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c3: Pop(3)
0x16c4: Push((int) 12501)
0x16c5: Push((int) -1)
0x16c6: Push((int) 13671)
0x16c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c8: Pop(3)
0x16c9: Return(); Pop(0)

0x16ca: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x16cb: PushEmpty(bool)
0x16cc: Call 0x1c40

0x16cd: Pop(0)
0x16ce: IF (Stack[-1] == 0) GOTO 0x16d2; Pop(1)

0x16cf: @ lshStopAnimation()
0x16d0: Pop(0)
0x16d1: GOTO 0x16d4

0x16d2: @ StopAnimation()
0x16d3: Pop(0)
0x16d4: Return(); Pop(0)

0x16d5: GOTO 0x155c

0x16d6: Return(); Pop(0)

0x16d7: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x16d8: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x16d9: PushEmpty(bool, object)
0x16da: Stack[-1] = Stack[-11]
0x16db: Call 0x1b99

0x16dc: Pop(1)
0x16dd: Pop(1); Push((bool) Stack[-1] == 0)
0x16de: IF (Stack[-1] == 0) GOTO 0x16e1; Pop(1)

0x16df: Stack[-10] = (int) -2
0x16e0: Return(); Pop(8)

0x16e1: @ CreateDialog(Stack[-4])
0x16e2: Pop(0)
0x16e3: PushEmpty(int)
0x16e4: Call 0x1c3c

0x16e5: Pop(0)
0x16e6: @@ SetNPCName(Stack[-1])
0x16e7: Pop(1)
0x16e8: PushEmpty(string)
0x16e9: Call 0x1c3e

0x16ea: Pop(0)
0x16eb: @@ SetPhoto(Stack[-1])
0x16ec: Pop(1)
0x16ed: PushEmpty(int)
0x16ee: Call 0x21e0

0x16ef: Pop(0)
0x16f0: @@ SetPlayerName(Stack[-1])
0x16f1: Pop(1)
0x16f2: Stack[-2] = (int) -1
0x16f3: @ IsOverrideActive(Stack[-3])
0x16f4: Pop(0)
0x16f5: Push(Stack[-3])
0x16f6: IF (Stack[-1] == 0) GOTO 0x16f9; Pop(1)

0x16f7: Stack[-10] = (int) -2
0x16f8: Return(); Pop(8)

0x16f9: @ DoDialog(Stack[-4])
0x16fa: Pop(0)
0x16fb: PushEmpty(object, object)
0x16fc: Stack[-2] = Stack[-11]
0x16fd: Stack[-1] = Stack[-6]
0x16fe: Push(-2, 4); TaskCall(17)
0x16ff: Call 0x1716

0x1700: Pop(-2, 4); TaskReturn
0x1701: Pop(2)
0x1702: @@ IsDialogEnd(Stack[-1])
0x1703: Pop(0)
0x1704: Pop(0); Push((bool) Stack[-1] == 0)
0x1705: IF (Stack[-1] == 0) GOTO 0x170b; Pop(1)

0x1706: @ sync()
0x1707: Pop(0)
0x1708: @@ IsDialogEnd(Stack[-1])
0x1709: Pop(0)
0x170a: GOTO 0x1704

0x170b: PushEmpty(object)
0x170c: Stack[-1] = Stack[-10]
0x170d: Call 0x1bd1

0x170e: Pop(1)
0x170f: @ StopDialog(Stack[-4])
0x1710: Pop(0)
0x1711: @@ GetReturnValue(Stack[-2])
0x1712: Pop(0)
0x1713: Stack[-10] = Stack[-2]
0x1714: Return(); Pop(8)

0x1715: Stack[-4] = 0
0x1716: PushEmpty()
0x1717: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1718: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1719: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x171a: Push((int) 1)
0x171b: IF (Stack[-1] == 0) GOTO 0x17a9; Pop(1)

0x171c: PushEmpty(string)
0x171d: Stack[-1] = "Neutral"
0x171e: Call 0x17c7

0x171f: Pop(1)
0x1720: Push((int) 12410)
0x1721: @@ SetMessage(Stack[-1])
0x1722: Pop(1)
0x1723: @@ ClearReplies()
0x1724: Pop(0)
0x1725: PushEmpty(bool)
0x1726: Stack[-1] = (bool) 0
0x1727: PushEmpty(bool)
0x1728: Stack[-1] = (bool) 0
0x1729: PushEmpty(bool, object)
0x172a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x172b: Call 0x2025

0x172c: Pop(1)
0x172d: IF (Stack[-1] == 0) GOTO 0x1734; Pop(1)

0x172e: PushEmpty(bool, object)
0x172f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1730: Call 0x203d

0x1731: Pop(1)
0x1732: IF (Stack[-1] == 0) GOTO 0x1734; Pop(1)

0x1733: Stack[-1] = (bool) 1
0x1734: IF (Stack[-1] == 0) GOTO 0x173c; Pop(1)

0x1735: PushEmpty(bool, object)
0x1736: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1737: Call 0x2031

0x1738: Pop(1)
0x1739: Pop(1); Push((bool) Stack[-1] == 0)
0x173a: IF (Stack[-1] == 0) GOTO 0x173c; Pop(1)

0x173b: Stack[-1] = (bool) 1
0x173c: IF (Stack[-1] == 0) GOTO 0x1742; Pop(1)

0x173d: Push((int) 12412)
0x173e: Push((int) 13577)
0x173f: Push((int) 13576)
0x1740: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1741: Pop(3)
0x1742: PushEmpty(bool)
0x1743: Stack[-1] = (bool) 0
0x1744: PushEmpty(bool, object)
0x1745: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1746: Call 0x2031

0x1747: Pop(1)
0x1748: IF (Stack[-1] == 0) GOTO 0x174f; Pop(1)

0x1749: PushEmpty(bool, object)
0x174a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x174b: Call 0x2049

0x174c: Pop(1)
0x174d: IF (Stack[-1] == 0) GOTO 0x174f; Pop(1)

0x174e: Stack[-1] = (bool) 1
0x174f: IF (Stack[-1] == 0) GOTO 0x1755; Pop(1)

0x1750: Push((int) 13588)
0x1751: Push((int) 14840)
0x1752: Push((int) 14839)
0x1753: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1754: Pop(3)
0x1755: PushEmpty(bool)
0x1756: Stack[-1] = (bool) 0
0x1757: PushEmpty(bool)
0x1758: Stack[-1] = (bool) 0
0x1759: PushEmpty(bool, object)
0x175a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x175b: Call 0x2055

0x175c: Pop(1)
0x175d: IF (Stack[-1] == 0) GOTO 0x1764; Pop(1)

0x175e: PushEmpty(bool, object)
0x175f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1760: Call 0x2031

0x1761: Pop(1)
0x1762: IF (Stack[-1] == 0) GOTO 0x1764; Pop(1)

0x1763: Stack[-1] = (bool) 1
0x1764: IF (Stack[-1] == 0) GOTO 0x176b; Pop(1)

0x1765: PushEmpty(bool, object)
0x1766: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1767: Call 0x2061

0x1768: Pop(1)
0x1769: IF (Stack[-1] == 0) GOTO 0x176b; Pop(1)

0x176a: Stack[-1] = (bool) 1
0x176b: IF (Stack[-1] == 0) GOTO 0x1771; Pop(1)

0x176c: Push((int) 13607)
0x176d: Push((int) 14868)
0x176e: Push((int) 14862)
0x176f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1770: Pop(3)
0x1771: PushEmpty(bool)
0x1772: Stack[-1] = (bool) 0
0x1773: PushEmpty(bool, object)
0x1774: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1775: Call 0x2055

0x1776: Pop(1)
0x1777: IF (Stack[-1] == 0) GOTO 0x177e; Pop(1)

0x1778: PushEmpty(bool, object)
0x1779: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x177a: Call 0x2079

0x177b: Pop(1)
0x177c: IF (Stack[-1] == 0) GOTO 0x177e; Pop(1)

0x177d: Stack[-1] = (bool) 1
0x177e: IF (Stack[-1] == 0) GOTO 0x1784; Pop(1)

0x177f: Push((int) 13618)
0x1780: Push((int) 14874)
0x1781: Push((int) 14873)
0x1782: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1783: Pop(3)
0x1784: PushEmpty(bool)
0x1785: Stack[-1] = (bool) 0
0x1786: PushEmpty(bool)
0x1787: Stack[-1] = (bool) 0
0x1788: PushEmpty(bool, object)
0x1789: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x178a: Call 0x2031

0x178b: Pop(1)
0x178c: Pop(1); Push((bool) Stack[-1] == 0)
0x178d: IF (Stack[-1] == 0) GOTO 0x1794; Pop(1)

0x178e: PushEmpty(bool, object)
0x178f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1790: Call 0x2025

0x1791: Pop(1)
0x1792: IF (Stack[-1] == 0) GOTO 0x1794; Pop(1)

0x1793: Stack[-1] = (bool) 1
0x1794: IF (Stack[-1] == 0) GOTO 0x179b; Pop(1)

0x1795: PushEmpty(bool, object)
0x1796: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1797: Call 0x206d

0x1798: Pop(1)
0x1799: IF (Stack[-1] == 0) GOTO 0x179b; Pop(1)

0x179a: Stack[-1] = (bool) 1
0x179b: IF (Stack[-1] == 0) GOTO 0x17a1; Pop(1)

0x179c: Push((int) 13612)
0x179d: Push((int) 14863)
0x179e: Push((int) 14867)
0x179f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a0: Pop(3)
0x17a1: Push((int) 12411)
0x17a2: Push((int) -1)
0x17a3: Push((int) 13575)
0x17a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a5: Pop(3)
0x17a6: GOTO 0x17a9

0x17a7: Return(); Pop(0)

0x17a8: GOTO 0x171a

0x17a9: PushEmpty(bool)
0x17aa: Call 0x1c40

0x17ab: Pop(0)
0x17ac: IF (Stack[-1] == 0) GOTO 0x17b8; Pop(1)

0x17ad: @ lshWaitForAnimEnd()
0x17ae: Pop(0)
0x17af: Push( Stack[3 + Tasks[-1].StackPointer] )
0x17b0: IF (Stack[-1] == 0) GOTO 0x17b2; Pop(1)

0x17b1: GOTO 0x17b7

0x17b2: PushEmpty(string)
0x17b3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x17b4: Call 0x1bd5

0x17b5: Pop(1)
0x17b6: GOTO 0x17ad

0x17b7: GOTO 0x17c6

0x17b8: Push("all")
0x17b9: Push("idle")
0x17ba: @ PlayAnimation(Stack[-2], Stack[-1])
0x17bb: Pop(2)
0x17bc: @ WaitForAnimEnd()
0x17bd: Pop(0)
0x17be: Push( Stack[3 + Tasks[-1].StackPointer] )
0x17bf: IF (Stack[-1] == 0) GOTO 0x17c1; Pop(1)

0x17c0: GOTO 0x17c6

0x17c1: Push("all")
0x17c2: Push("idle")
0x17c3: @ PlayAnimation(Stack[-2], Stack[-1])
0x17c4: Pop(2)
0x17c5: GOTO 0x17bc

0x17c6: Return(); Pop(0)

0x17c7: PushEmpty()
0x17c8: PushEmpty(bool)
0x17c9: Call 0x1c40

0x17ca: Pop(0)
0x17cb: Pop(1); Push((bool) Stack[-1] == 0)
0x17cc: IF (Stack[-1] == 0) GOTO 0x17ce; Pop(1)

0x17cd: Return(); Pop(0)

0x17ce: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x17cf: IF (Stack[-1] == 0) GOTO 0x17d1; Pop(1)

0x17d0: Return(); Pop(0)

0x17d1: PushEmpty(string)
0x17d2: Stack[-1] = Stack[-2]
0x17d3: Call 0x1bd5

0x17d4: Pop(1)
0x17d5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x17d6: Return(); Pop(0)

0x17d7: PushEmpty()
0x17d8: Push((int) 1)
0x17d9: IF (Stack[-1] == 0) GOTO 0x1b80; Pop(1)

0x17da: PushEmpty()
0x17db: Call 0x1be7

0x17dc: Pop(0)
0x17dd: Push((int) 14856)
0x17de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17df: IF (Stack[-1] == 0) GOTO 0x17ea; Pop(1)

0x17e0: PushEmpty(object, object)
0x17e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x17e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17e3: Call 0x1e05

0x17e4: Pop(2)
0x17e5: PushEmpty(object, object)
0x17e6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x17e7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17e8: Call 0x1e8b

0x17e9: Pop(2)
0x17ea: Push((int) 14857)
0x17eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17ec: IF (Stack[-1] == 0) GOTO 0x17f7; Pop(1)

0x17ed: PushEmpty(object, object)
0x17ee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x17ef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17f0: Call 0x1e05

0x17f1: Pop(2)
0x17f2: PushEmpty(object, object)
0x17f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x17f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17f5: Call 0x1e8b

0x17f6: Pop(2)
0x17f7: Push((int) 14858)
0x17f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17f9: IF (Stack[-1] == 0) GOTO 0x1804; Pop(1)

0x17fa: PushEmpty(object, object)
0x17fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x17fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17fd: Call 0x1e05

0x17fe: Pop(2)
0x17ff: PushEmpty(object, object)
0x1800: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1801: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1802: Call 0x1e8b

0x1803: Pop(2)
0x1804: Push((int) 14839)
0x1805: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1806: IF (Stack[-1] == 0) GOTO 0x180c; Pop(1)

0x1807: PushEmpty(object, object)
0x1808: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1809: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x180a: Call 0x1e0b

0x180b: Pop(2)
0x180c: Push((int) 14860)
0x180d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x180e: IF (Stack[-1] == 0) GOTO 0x1814; Pop(1)

0x180f: PushEmpty(object, object)
0x1810: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1811: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1812: Call 0x1e11

0x1813: Pop(2)
0x1814: Push((int) 14862)
0x1815: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1816: IF (Stack[-1] == 0) GOTO 0x181c; Pop(1)

0x1817: PushEmpty(object, object)
0x1818: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1819: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x181a: Call 0x1e13

0x181b: Pop(2)
0x181c: Push((int) 14894)
0x181d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x181e: IF (Stack[-1] == 0) GOTO 0x1824; Pop(1)

0x181f: PushEmpty(object, object)
0x1820: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1821: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1822: Call 0x1e19

0x1823: Pop(2)
0x1824: Push((int) 14873)
0x1825: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1826: IF (Stack[-1] == 0) GOTO 0x182c; Pop(1)

0x1827: PushEmpty(object, object)
0x1828: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1829: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x182a: Call 0x1e25

0x182b: Pop(2)
0x182c: Push((int) 14867)
0x182d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x182e: IF (Stack[-1] == 0) GOTO 0x1834; Pop(1)

0x182f: PushEmpty(object, object)
0x1830: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1831: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1832: Call 0x1e1f

0x1833: Pop(2)
0x1834: Push((int) 13574)
0x1835: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1836: IF (Stack[-1] == 0) GOTO 0x18c2; Pop(1)

0x1837: PushEmpty(string)
0x1838: Stack[-1] = "Neutral"
0x1839: Call 0x17c7

0x183a: Pop(1)
0x183b: Push((int) 12410)
0x183c: @@ SetMessage(Stack[-1])
0x183d: Pop(1)
0x183e: @@ ClearReplies()
0x183f: Pop(0)
0x1840: PushEmpty(bool)
0x1841: Stack[-1] = (bool) 0
0x1842: PushEmpty(bool)
0x1843: Stack[-1] = (bool) 0
0x1844: PushEmpty(bool, object)
0x1845: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1846: Call 0x2025

0x1847: Pop(1)
0x1848: IF (Stack[-1] == 0) GOTO 0x184f; Pop(1)

0x1849: PushEmpty(bool, object)
0x184a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x184b: Call 0x203d

0x184c: Pop(1)
0x184d: IF (Stack[-1] == 0) GOTO 0x184f; Pop(1)

0x184e: Stack[-1] = (bool) 1
0x184f: IF (Stack[-1] == 0) GOTO 0x1857; Pop(1)

0x1850: PushEmpty(bool, object)
0x1851: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1852: Call 0x2031

0x1853: Pop(1)
0x1854: Pop(1); Push((bool) Stack[-1] == 0)
0x1855: IF (Stack[-1] == 0) GOTO 0x1857; Pop(1)

0x1856: Stack[-1] = (bool) 1
0x1857: IF (Stack[-1] == 0) GOTO 0x185d; Pop(1)

0x1858: Push((int) 12412)
0x1859: Push((int) 13577)
0x185a: Push((int) 13576)
0x185b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x185c: Pop(3)
0x185d: PushEmpty(bool)
0x185e: Stack[-1] = (bool) 0
0x185f: PushEmpty(bool, object)
0x1860: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1861: Call 0x2031

0x1862: Pop(1)
0x1863: IF (Stack[-1] == 0) GOTO 0x186a; Pop(1)

0x1864: PushEmpty(bool, object)
0x1865: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1866: Call 0x2049

0x1867: Pop(1)
0x1868: IF (Stack[-1] == 0) GOTO 0x186a; Pop(1)

0x1869: Stack[-1] = (bool) 1
0x186a: IF (Stack[-1] == 0) GOTO 0x1870; Pop(1)

0x186b: Push((int) 13588)
0x186c: Push((int) 14840)
0x186d: Push((int) 14839)
0x186e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186f: Pop(3)
0x1870: PushEmpty(bool)
0x1871: Stack[-1] = (bool) 0
0x1872: PushEmpty(bool)
0x1873: Stack[-1] = (bool) 0
0x1874: PushEmpty(bool, object)
0x1875: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1876: Call 0x2055

0x1877: Pop(1)
0x1878: IF (Stack[-1] == 0) GOTO 0x187f; Pop(1)

0x1879: PushEmpty(bool, object)
0x187a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x187b: Call 0x2031

0x187c: Pop(1)
0x187d: IF (Stack[-1] == 0) GOTO 0x187f; Pop(1)

0x187e: Stack[-1] = (bool) 1
0x187f: IF (Stack[-1] == 0) GOTO 0x1886; Pop(1)

0x1880: PushEmpty(bool, object)
0x1881: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1882: Call 0x2061

0x1883: Pop(1)
0x1884: IF (Stack[-1] == 0) GOTO 0x1886; Pop(1)

0x1885: Stack[-1] = (bool) 1
0x1886: IF (Stack[-1] == 0) GOTO 0x188c; Pop(1)

0x1887: Push((int) 13607)
0x1888: Push((int) 14868)
0x1889: Push((int) 14862)
0x188a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x188b: Pop(3)
0x188c: PushEmpty(bool)
0x188d: Stack[-1] = (bool) 0
0x188e: PushEmpty(bool, object)
0x188f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1890: Call 0x2055

0x1891: Pop(1)
0x1892: IF (Stack[-1] == 0) GOTO 0x1899; Pop(1)

0x1893: PushEmpty(bool, object)
0x1894: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1895: Call 0x2079

0x1896: Pop(1)
0x1897: IF (Stack[-1] == 0) GOTO 0x1899; Pop(1)

0x1898: Stack[-1] = (bool) 1
0x1899: IF (Stack[-1] == 0) GOTO 0x189f; Pop(1)

0x189a: Push((int) 13618)
0x189b: Push((int) 14874)
0x189c: Push((int) 14873)
0x189d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x189e: Pop(3)
0x189f: PushEmpty(bool)
0x18a0: Stack[-1] = (bool) 0
0x18a1: PushEmpty(bool)
0x18a2: Stack[-1] = (bool) 0
0x18a3: PushEmpty(bool, object)
0x18a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18a5: Call 0x2031

0x18a6: Pop(1)
0x18a7: Pop(1); Push((bool) Stack[-1] == 0)
0x18a8: IF (Stack[-1] == 0) GOTO 0x18af; Pop(1)

0x18a9: PushEmpty(bool, object)
0x18aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18ab: Call 0x2025

0x18ac: Pop(1)
0x18ad: IF (Stack[-1] == 0) GOTO 0x18af; Pop(1)

0x18ae: Stack[-1] = (bool) 1
0x18af: IF (Stack[-1] == 0) GOTO 0x18b6; Pop(1)

0x18b0: PushEmpty(bool, object)
0x18b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18b2: Call 0x206d

0x18b3: Pop(1)
0x18b4: IF (Stack[-1] == 0) GOTO 0x18b6; Pop(1)

0x18b5: Stack[-1] = (bool) 1
0x18b6: IF (Stack[-1] == 0) GOTO 0x18bc; Pop(1)

0x18b7: Push((int) 13612)
0x18b8: Push((int) 14863)
0x18b9: Push((int) 14867)
0x18ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18bb: Pop(3)
0x18bc: Push((int) 12411)
0x18bd: Push((int) -1)
0x18be: Push((int) 13575)
0x18bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18c0: Pop(3)
0x18c1: Return(); Pop(0)

0x18c2: Push((int) 14863)
0x18c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18c4: IF (Stack[-1] == 0) GOTO 0x18d4; Pop(1)

0x18c5: PushEmpty(string)
0x18c6: Stack[-1] = "Neutral"
0x18c7: Call 0x17c7

0x18c8: Pop(1)
0x18c9: Push((int) 13608)
0x18ca: @@ SetMessage(Stack[-1])
0x18cb: Pop(1)
0x18cc: @@ ClearReplies()
0x18cd: Pop(0)
0x18ce: Push((int) 13609)
0x18cf: Push((int) 14865)
0x18d0: Push((int) 14864)
0x18d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18d2: Pop(3)
0x18d3: Return(); Pop(0)

0x18d4: Push((int) 14865)
0x18d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18d6: IF (Stack[-1] == 0) GOTO 0x18e6; Pop(1)

0x18d7: PushEmpty(string)
0x18d8: Stack[-1] = "Neutral"
0x18d9: Call 0x17c7

0x18da: Pop(1)
0x18db: Push((int) 13610)
0x18dc: @@ SetMessage(Stack[-1])
0x18dd: Pop(1)
0x18de: @@ ClearReplies()
0x18df: Pop(0)
0x18e0: Push((int) 13611)
0x18e1: Push((int) 14869)
0x18e2: Push((int) 14866)
0x18e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18e4: Pop(3)
0x18e5: Return(); Pop(0)

0x18e6: Push((int) 14869)
0x18e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18e8: IF (Stack[-1] == 0) GOTO 0x18f8; Pop(1)

0x18e9: PushEmpty(string)
0x18ea: Stack[-1] = "Neutral"
0x18eb: Call 0x17c7

0x18ec: Pop(1)
0x18ed: Push((int) 13614)
0x18ee: @@ SetMessage(Stack[-1])
0x18ef: Pop(1)
0x18f0: @@ ClearReplies()
0x18f1: Pop(0)
0x18f2: Push((int) 13615)
0x18f3: Push((int) 14871)
0x18f4: Push((int) 14870)
0x18f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f6: Pop(3)
0x18f7: Return(); Pop(0)

0x18f8: Push((int) 14871)
0x18f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18fa: IF (Stack[-1] == 0) GOTO 0x190a; Pop(1)

0x18fb: PushEmpty(string)
0x18fc: Stack[-1] = "Neutral"
0x18fd: Call 0x17c7

0x18fe: Pop(1)
0x18ff: Push((int) 13616)
0x1900: @@ SetMessage(Stack[-1])
0x1901: Pop(1)
0x1902: @@ ClearReplies()
0x1903: Pop(0)
0x1904: Push((int) 13617)
0x1905: Push((int) -1)
0x1906: Push((int) 14872)
0x1907: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1908: Pop(3)
0x1909: Return(); Pop(0)

0x190a: Push((int) 14874)
0x190b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x190c: IF (Stack[-1] == 0) GOTO 0x191c; Pop(1)

0x190d: PushEmpty(string)
0x190e: Stack[-1] = "Neutral"
0x190f: Call 0x17c7

0x1910: Pop(1)
0x1911: Push((int) 13619)
0x1912: @@ SetMessage(Stack[-1])
0x1913: Pop(1)
0x1914: @@ ClearReplies()
0x1915: Pop(0)
0x1916: Push((int) 13620)
0x1917: Push((int) 14876)
0x1918: Push((int) 14875)
0x1919: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191a: Pop(3)
0x191b: Return(); Pop(0)

0x191c: Push((int) 14876)
0x191d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x191e: IF (Stack[-1] == 0) GOTO 0x1933; Pop(1)

0x191f: PushEmpty(string)
0x1920: Stack[-1] = "Neutral"
0x1921: Call 0x17c7

0x1922: Pop(1)
0x1923: Push((int) 13621)
0x1924: @@ SetMessage(Stack[-1])
0x1925: Pop(1)
0x1926: @@ ClearReplies()
0x1927: Pop(0)
0x1928: Push((int) 13623)
0x1929: Push((int) 14879)
0x192a: Push((int) 14878)
0x192b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x192c: Pop(3)
0x192d: Push((int) 13622)
0x192e: Push((int) -1)
0x192f: Push((int) 14877)
0x1930: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1931: Pop(3)
0x1932: Return(); Pop(0)

0x1933: Push((int) 14879)
0x1934: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1935: IF (Stack[-1] == 0) GOTO 0x194a; Pop(1)

0x1936: PushEmpty(string)
0x1937: Stack[-1] = "Neutral"
0x1938: Call 0x17c7

0x1939: Pop(1)
0x193a: Push((int) 13624)
0x193b: @@ SetMessage(Stack[-1])
0x193c: Pop(1)
0x193d: @@ ClearReplies()
0x193e: Pop(0)
0x193f: Push((int) 13626)
0x1940: Push((int) 14882)
0x1941: Push((int) 14881)
0x1942: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1943: Pop(3)
0x1944: Push((int) 13625)
0x1945: Push((int) -1)
0x1946: Push((int) 14880)
0x1947: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1948: Pop(3)
0x1949: Return(); Pop(0)

0x194a: Push((int) 14882)
0x194b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194c: IF (Stack[-1] == 0) GOTO 0x195c; Pop(1)

0x194d: PushEmpty(string)
0x194e: Stack[-1] = "Neutral"
0x194f: Call 0x17c7

0x1950: Pop(1)
0x1951: Push((int) 13627)
0x1952: @@ SetMessage(Stack[-1])
0x1953: Pop(1)
0x1954: @@ ClearReplies()
0x1955: Pop(0)
0x1956: Push((int) 13628)
0x1957: Push((int) -1)
0x1958: Push((int) 14883)
0x1959: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195a: Pop(3)
0x195b: Return(); Pop(0)

0x195c: Push((int) 14868)
0x195d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x195e: IF (Stack[-1] == 0) GOTO 0x196e; Pop(1)

0x195f: PushEmpty(string)
0x1960: Stack[-1] = "Neutral"
0x1961: Call 0x17c7

0x1962: Pop(1)
0x1963: Push((int) 13613)
0x1964: @@ SetMessage(Stack[-1])
0x1965: Pop(1)
0x1966: @@ ClearReplies()
0x1967: Pop(0)
0x1968: Push((int) 13629)
0x1969: Push((int) 14885)
0x196a: Push((int) 14884)
0x196b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196c: Pop(3)
0x196d: Return(); Pop(0)

0x196e: Push((int) 14885)
0x196f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1970: IF (Stack[-1] == 0) GOTO 0x1985; Pop(1)

0x1971: PushEmpty(string)
0x1972: Stack[-1] = "Neutral"
0x1973: Call 0x17c7

0x1974: Pop(1)
0x1975: Push((int) 13630)
0x1976: @@ SetMessage(Stack[-1])
0x1977: Pop(1)
0x1978: @@ ClearReplies()
0x1979: Pop(0)
0x197a: Push((int) 13631)
0x197b: Push((int) 14889)
0x197c: Push((int) 14886)
0x197d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x197e: Pop(3)
0x197f: Push((int) 13632)
0x1980: Push((int) 14888)
0x1981: Push((int) 14887)
0x1982: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1983: Pop(3)
0x1984: Return(); Pop(0)

0x1985: Push((int) 14888)
0x1986: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1987: IF (Stack[-1] == 0) GOTO 0x1997; Pop(1)

0x1988: PushEmpty(string)
0x1989: Stack[-1] = "Neutral"
0x198a: Call 0x17c7

0x198b: Pop(1)
0x198c: Push((int) 13633)
0x198d: @@ SetMessage(Stack[-1])
0x198e: Pop(1)
0x198f: @@ ClearReplies()
0x1990: Pop(0)
0x1991: Push((int) 13636)
0x1992: Push((int) 14889)
0x1993: Push((int) 14891)
0x1994: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1995: Pop(3)
0x1996: Return(); Pop(0)

0x1997: Push((int) 14889)
0x1998: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1999: IF (Stack[-1] == 0) GOTO 0x19a9; Pop(1)

0x199a: PushEmpty(string)
0x199b: Stack[-1] = "Neutral"
0x199c: Call 0x17c7

0x199d: Pop(1)
0x199e: Push((int) 13634)
0x199f: @@ SetMessage(Stack[-1])
0x19a0: Pop(1)
0x19a1: @@ ClearReplies()
0x19a2: Pop(0)
0x19a3: Push((int) 13635)
0x19a4: Push((int) 14893)
0x19a5: Push((int) 14890)
0x19a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19a7: Pop(3)
0x19a8: Return(); Pop(0)

0x19a9: Push((int) 14893)
0x19aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19ab: IF (Stack[-1] == 0) GOTO 0x19bb; Pop(1)

0x19ac: PushEmpty(string)
0x19ad: Stack[-1] = "Neutral"
0x19ae: Call 0x17c7

0x19af: Pop(1)
0x19b0: Push((int) 13637)
0x19b1: @@ SetMessage(Stack[-1])
0x19b2: Pop(1)
0x19b3: @@ ClearReplies()
0x19b4: Pop(0)
0x19b5: Push((int) 13638)
0x19b6: Push((int) -1)
0x19b7: Push((int) 14894)
0x19b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19b9: Pop(3)
0x19ba: Return(); Pop(0)

0x19bb: Push((int) 14840)
0x19bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19bd: IF (Stack[-1] == 0) GOTO 0x19d2; Pop(1)

0x19be: PushEmpty(string)
0x19bf: Stack[-1] = "Neutral"
0x19c0: Call 0x17c7

0x19c1: Pop(1)
0x19c2: Push((int) 13589)
0x19c3: @@ SetMessage(Stack[-1])
0x19c4: Pop(1)
0x19c5: @@ ClearReplies()
0x19c6: Pop(0)
0x19c7: Push((int) 13591)
0x19c8: Push((int) 14843)
0x19c9: Push((int) 14842)
0x19ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19cb: Pop(3)
0x19cc: Push((int) 13590)
0x19cd: Push((int) 14845)
0x19ce: Push((int) 14841)
0x19cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d0: Pop(3)
0x19d1: Return(); Pop(0)

0x19d2: Push((int) 14845)
0x19d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19d4: IF (Stack[-1] == 0) GOTO 0x19e4; Pop(1)

0x19d5: PushEmpty(string)
0x19d6: Stack[-1] = "Neutral"
0x19d7: Call 0x17c7

0x19d8: Pop(1)
0x19d9: Push((int) 13594)
0x19da: @@ SetMessage(Stack[-1])
0x19db: Pop(1)
0x19dc: @@ ClearReplies()
0x19dd: Pop(0)
0x19de: Push((int) 13595)
0x19df: Push((int) 14847)
0x19e0: Push((int) 14846)
0x19e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19e2: Pop(3)
0x19e3: Return(); Pop(0)

0x19e4: Push((int) 14847)
0x19e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e6: IF (Stack[-1] == 0) GOTO 0x19f6; Pop(1)

0x19e7: PushEmpty(string)
0x19e8: Stack[-1] = "Neutral"
0x19e9: Call 0x17c7

0x19ea: Pop(1)
0x19eb: Push((int) 13596)
0x19ec: @@ SetMessage(Stack[-1])
0x19ed: Pop(1)
0x19ee: @@ ClearReplies()
0x19ef: Pop(0)
0x19f0: Push((int) 13597)
0x19f1: Push((int) 14843)
0x19f2: Push((int) 14848)
0x19f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19f4: Pop(3)
0x19f5: Return(); Pop(0)

0x19f6: Push((int) 14843)
0x19f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19f8: IF (Stack[-1] == 0) GOTO 0x1a0d; Pop(1)

0x19f9: PushEmpty(string)
0x19fa: Stack[-1] = "Neutral"
0x19fb: Call 0x17c7

0x19fc: Pop(1)
0x19fd: Push((int) 13592)
0x19fe: @@ SetMessage(Stack[-1])
0x19ff: Pop(1)
0x1a00: @@ ClearReplies()
0x1a01: Pop(0)
0x1a02: Push((int) 13598)
0x1a03: Push((int) 14824)
0x1a04: Push((int) 14850)
0x1a05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a06: Pop(3)
0x1a07: Push((int) 13593)
0x1a08: Push((int) 13583)
0x1a09: Push((int) 14844)
0x1a0a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a0b: Pop(3)
0x1a0c: Return(); Pop(0)

0x1a0d: Push((int) 13583)
0x1a0e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a0f: IF (Stack[-1] == 0) GOTO 0x1a1f; Pop(1)

0x1a10: PushEmpty(string)
0x1a11: Stack[-1] = "Neutral"
0x1a12: Call 0x17c7

0x1a13: Pop(1)
0x1a14: Push((int) 12419)
0x1a15: @@ SetMessage(Stack[-1])
0x1a16: Pop(1)
0x1a17: @@ ClearReplies()
0x1a18: Pop(0)
0x1a19: Push((int) 12423)
0x1a1a: Push((int) 13588)
0x1a1b: Push((int) 13587)
0x1a1c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1d: Pop(3)
0x1a1e: Return(); Pop(0)

0x1a1f: Push((int) 13588)
0x1a20: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a21: IF (Stack[-1] == 0) GOTO 0x1a36; Pop(1)

0x1a22: PushEmpty(string)
0x1a23: Stack[-1] = "Neutral"
0x1a24: Call 0x17c7

0x1a25: Pop(1)
0x1a26: Push((int) 12424)
0x1a27: @@ SetMessage(Stack[-1])
0x1a28: Pop(1)
0x1a29: @@ ClearReplies()
0x1a2a: Pop(0)
0x1a2b: Push((int) 12425)
0x1a2c: Push((int) 13594)
0x1a2d: Push((int) 13590)
0x1a2e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2f: Pop(3)
0x1a30: Push((int) 12426)
0x1a31: Push((int) 13592)
0x1a32: Push((int) 13591)
0x1a33: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a34: Pop(3)
0x1a35: Return(); Pop(0)

0x1a36: Push((int) 13592)
0x1a37: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a38: IF (Stack[-1] == 0) GOTO 0x1a48; Pop(1)

0x1a39: PushEmpty(string)
0x1a3a: Stack[-1] = "Neutral"
0x1a3b: Call 0x17c7

0x1a3c: Pop(1)
0x1a3d: Push((int) 12427)
0x1a3e: @@ SetMessage(Stack[-1])
0x1a3f: Pop(1)
0x1a40: @@ ClearReplies()
0x1a41: Pop(0)
0x1a42: Push((int) 12430)
0x1a43: Push((int) 13594)
0x1a44: Push((int) 13596)
0x1a45: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a46: Pop(3)
0x1a47: Return(); Pop(0)

0x1a48: Push((int) 13594)
0x1a49: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a4a: IF (Stack[-1] == 0) GOTO 0x1a5a; Pop(1)

0x1a4b: PushEmpty(string)
0x1a4c: Stack[-1] = "Neutral"
0x1a4d: Call 0x17c7

0x1a4e: Pop(1)
0x1a4f: Push((int) 12428)
0x1a50: @@ SetMessage(Stack[-1])
0x1a51: Pop(1)
0x1a52: @@ ClearReplies()
0x1a53: Pop(0)
0x1a54: Push((int) 12429)
0x1a55: Push((int) 13599)
0x1a56: Push((int) 13595)
0x1a57: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a58: Pop(3)
0x1a59: Return(); Pop(0)

0x1a5a: Push((int) 13599)
0x1a5b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a5c: IF (Stack[-1] == 0) GOTO 0x1a6c; Pop(1)

0x1a5d: PushEmpty(string)
0x1a5e: Stack[-1] = "Neutral"
0x1a5f: Call 0x17c7

0x1a60: Pop(1)
0x1a61: Push((int) 12432)
0x1a62: @@ SetMessage(Stack[-1])
0x1a63: Pop(1)
0x1a64: @@ ClearReplies()
0x1a65: Pop(0)
0x1a66: Push((int) 12433)
0x1a67: Push((int) 13601)
0x1a68: Push((int) 13600)
0x1a69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a6a: Pop(3)
0x1a6b: Return(); Pop(0)

0x1a6c: Push((int) 13601)
0x1a6d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6e: IF (Stack[-1] == 0) GOTO 0x1a83; Pop(1)

0x1a6f: PushEmpty(string)
0x1a70: Stack[-1] = "Neutral"
0x1a71: Call 0x17c7

0x1a72: Pop(1)
0x1a73: Push((int) 12434)
0x1a74: @@ SetMessage(Stack[-1])
0x1a75: Pop(1)
0x1a76: @@ ClearReplies()
0x1a77: Pop(0)
0x1a78: Push((int) 13581)
0x1a79: Push((int) 14826)
0x1a7a: Push((int) 14830)
0x1a7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7c: Pop(3)
0x1a7d: Push((int) 12435)
0x1a7e: Push((int) 14833)
0x1a7f: Push((int) 13602)
0x1a80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a81: Pop(3)
0x1a82: Return(); Pop(0)

0x1a83: Push((int) 14824)
0x1a84: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a85: IF (Stack[-1] == 0) GOTO 0x1a95; Pop(1)

0x1a86: PushEmpty(string)
0x1a87: Stack[-1] = "Neutral"
0x1a88: Call 0x17c7

0x1a89: Pop(1)
0x1a8a: Push((int) 13575)
0x1a8b: @@ SetMessage(Stack[-1])
0x1a8c: Pop(1)
0x1a8d: @@ ClearReplies()
0x1a8e: Pop(0)
0x1a8f: Push((int) 13576)
0x1a90: Push((int) 14826)
0x1a91: Push((int) 14825)
0x1a92: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a93: Pop(3)
0x1a94: Return(); Pop(0)

0x1a95: Push((int) 14826)
0x1a96: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a97: IF (Stack[-1] == 0) GOTO 0x1aa7; Pop(1)

0x1a98: PushEmpty(string)
0x1a99: Stack[-1] = "Neutral"
0x1a9a: Call 0x17c7

0x1a9b: Pop(1)
0x1a9c: Push((int) 13577)
0x1a9d: @@ SetMessage(Stack[-1])
0x1a9e: Pop(1)
0x1a9f: @@ ClearReplies()
0x1aa0: Pop(0)
0x1aa1: Push((int) 13578)
0x1aa2: Push((int) 14828)
0x1aa3: Push((int) 14827)
0x1aa4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1aa5: Pop(3)
0x1aa6: Return(); Pop(0)

0x1aa7: Push((int) 14828)
0x1aa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1aa9: IF (Stack[-1] == 0) GOTO 0x1ab9; Pop(1)

0x1aaa: PushEmpty(string)
0x1aab: Stack[-1] = "Neutral"
0x1aac: Call 0x17c7

0x1aad: Pop(1)
0x1aae: Push((int) 13579)
0x1aaf: @@ SetMessage(Stack[-1])
0x1ab0: Pop(1)
0x1ab1: @@ ClearReplies()
0x1ab2: Pop(0)
0x1ab3: Push((int) 13580)
0x1ab4: Push((int) 14833)
0x1ab5: Push((int) 14829)
0x1ab6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ab7: Pop(3)
0x1ab8: Return(); Pop(0)

0x1ab9: Push((int) 14833)
0x1aba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1abb: IF (Stack[-1] == 0) GOTO 0x1acb; Pop(1)

0x1abc: PushEmpty(string)
0x1abd: Stack[-1] = "Neutral"
0x1abe: Call 0x17c7

0x1abf: Pop(1)
0x1ac0: Push((int) 13582)
0x1ac1: @@ SetMessage(Stack[-1])
0x1ac2: Pop(1)
0x1ac3: @@ ClearReplies()
0x1ac4: Pop(0)
0x1ac5: Push((int) 13583)
0x1ac6: Push((int) 14835)
0x1ac7: Push((int) 14834)
0x1ac8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac9: Pop(3)
0x1aca: Return(); Pop(0)

0x1acb: Push((int) 14835)
0x1acc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1acd: IF (Stack[-1] == 0) GOTO 0x1add; Pop(1)

0x1ace: PushEmpty(string)
0x1acf: Stack[-1] = "Neutral"
0x1ad0: Call 0x17c7

0x1ad1: Pop(1)
0x1ad2: Push((int) 13584)
0x1ad3: @@ SetMessage(Stack[-1])
0x1ad4: Pop(1)
0x1ad5: @@ ClearReplies()
0x1ad6: Pop(0)
0x1ad7: Push((int) 13585)
0x1ad8: Push((int) 14837)
0x1ad9: Push((int) 14836)
0x1ada: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1adb: Pop(3)
0x1adc: Return(); Pop(0)

0x1add: Push((int) 14837)
0x1ade: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1adf: IF (Stack[-1] == 0) GOTO 0x1af4; Pop(1)

0x1ae0: PushEmpty(string)
0x1ae1: Stack[-1] = "Neutral"
0x1ae2: Call 0x17c7

0x1ae3: Pop(1)
0x1ae4: Push((int) 13586)
0x1ae5: @@ SetMessage(Stack[-1])
0x1ae6: Pop(1)
0x1ae7: @@ ClearReplies()
0x1ae8: Pop(0)
0x1ae9: Push((int) 13587)
0x1aea: Push((int) -1)
0x1aeb: Push((int) 14838)
0x1aec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1aed: Pop(3)
0x1aee: Push((int) 13606)
0x1aef: Push((int) -1)
0x1af0: Push((int) 14860)
0x1af1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1af2: Pop(3)
0x1af3: Return(); Pop(0)

0x1af4: Push((int) 13577)
0x1af5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1af6: IF (Stack[-1] == 0) GOTO 0x1b0b; Pop(1)

0x1af7: PushEmpty(string)
0x1af8: Stack[-1] = "Neutral"
0x1af9: Call 0x17c7

0x1afa: Pop(1)
0x1afb: Push((int) 12413)
0x1afc: @@ SetMessage(Stack[-1])
0x1afd: Pop(1)
0x1afe: @@ ClearReplies()
0x1aff: Pop(0)
0x1b00: Push((int) 12420)
0x1b01: Push((int) 13585)
0x1b02: Push((int) 13584)
0x1b03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b04: Pop(3)
0x1b05: Push((int) 12414)
0x1b06: Push((int) 13579)
0x1b07: Push((int) 13578)
0x1b08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b09: Pop(3)
0x1b0a: Return(); Pop(0)

0x1b0b: Push((int) 13579)
0x1b0c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b0d: IF (Stack[-1] == 0) GOTO 0x1b1d; Pop(1)

0x1b0e: PushEmpty(string)
0x1b0f: Stack[-1] = "Neutral"
0x1b10: Call 0x17c7

0x1b11: Pop(1)
0x1b12: Push((int) 12415)
0x1b13: @@ SetMessage(Stack[-1])
0x1b14: Pop(1)
0x1b15: @@ ClearReplies()
0x1b16: Pop(0)
0x1b17: Push((int) 12416)
0x1b18: Push((int) 13581)
0x1b19: Push((int) 13580)
0x1b1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b1b: Pop(3)
0x1b1c: Return(); Pop(0)

0x1b1d: Push((int) 13581)
0x1b1e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b1f: IF (Stack[-1] == 0) GOTO 0x1b2f; Pop(1)

0x1b20: PushEmpty(string)
0x1b21: Stack[-1] = "Neutral"
0x1b22: Call 0x17c7

0x1b23: Pop(1)
0x1b24: Push((int) 12417)
0x1b25: @@ SetMessage(Stack[-1])
0x1b26: Pop(1)
0x1b27: @@ ClearReplies()
0x1b28: Pop(0)
0x1b29: Push((int) 12418)
0x1b2a: Push((int) 14853)
0x1b2b: Push((int) 13582)
0x1b2c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b2d: Pop(3)
0x1b2e: Return(); Pop(0)

0x1b2f: Push((int) 13585)
0x1b30: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b31: IF (Stack[-1] == 0) GOTO 0x1b46; Pop(1)

0x1b32: PushEmpty(string)
0x1b33: Stack[-1] = "Neutral"
0x1b34: Call 0x17c7

0x1b35: Pop(1)
0x1b36: Push((int) 12421)
0x1b37: @@ SetMessage(Stack[-1])
0x1b38: Pop(1)
0x1b39: @@ ClearReplies()
0x1b3a: Pop(0)
0x1b3b: Push((int) 13574)
0x1b3c: Push((int) 14851)
0x1b3d: Push((int) 14823)
0x1b3e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b3f: Pop(3)
0x1b40: Push((int) 13602)
0x1b41: Push((int) 14853)
0x1b42: Push((int) 14854)
0x1b43: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b44: Pop(3)
0x1b45: Return(); Pop(0)

0x1b46: Push((int) 14851)
0x1b47: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b48: IF (Stack[-1] == 0) GOTO 0x1b58; Pop(1)

0x1b49: PushEmpty(string)
0x1b4a: Stack[-1] = "Neutral"
0x1b4b: Call 0x17c7

0x1b4c: Pop(1)
0x1b4d: Push((int) 13599)
0x1b4e: @@ SetMessage(Stack[-1])
0x1b4f: Pop(1)
0x1b50: @@ ClearReplies()
0x1b51: Pop(0)
0x1b52: Push((int) 13600)
0x1b53: Push((int) 14853)
0x1b54: Push((int) 14852)
0x1b55: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b56: Pop(3)
0x1b57: Return(); Pop(0)

0x1b58: Push((int) 14853)
0x1b59: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b5a: IF (Stack[-1] == 0) GOTO 0x1b74; Pop(1)

0x1b5b: PushEmpty(string)
0x1b5c: Stack[-1] = "Neutral"
0x1b5d: Call 0x17c7

0x1b5e: Pop(1)
0x1b5f: Push((int) 13601)
0x1b60: @@ SetMessage(Stack[-1])
0x1b61: Pop(1)
0x1b62: @@ ClearReplies()
0x1b63: Pop(0)
0x1b64: Push((int) 13603)
0x1b65: Push((int) -1)
0x1b66: Push((int) 14856)
0x1b67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b68: Pop(3)
0x1b69: Push((int) 13604)
0x1b6a: Push((int) -1)
0x1b6b: Push((int) 14857)
0x1b6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b6d: Pop(3)
0x1b6e: Push((int) 13605)
0x1b6f: Push((int) -1)
0x1b70: Push((int) 14858)
0x1b71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b72: Pop(3)
0x1b73: Return(); Pop(0)

0x1b74: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1b75: PushEmpty(bool)
0x1b76: Call 0x1c40

0x1b77: Pop(0)
0x1b78: IF (Stack[-1] == 0) GOTO 0x1b7c; Pop(1)

0x1b79: @ lshStopAnimation()
0x1b7a: Pop(0)
0x1b7b: GOTO 0x1b7e

0x1b7c: @ StopAnimation()
0x1b7d: Pop(0)
0x1b7e: Return(); Pop(0)

0x1b7f: GOTO 0x17d8

0x1b80: Return(); Pop(0)

0x1b81: PushEmpty(int, int)
0x1b82: @@ GetProperty(Stack[-4], Stack[-1])
0x1b83: Pop(0)
0x1b84: Pop(0); Push(Stack[-1] + Stack[-3]);
0x1b85: @@ SetProperty(Stack[-5], Stack[-1])
0x1b86: Pop(1)
0x1b87: Return(); Pop(2)

0x1b88: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x1b89: @@ GetPosition(Stack[-4])
0x1b8a: Pop(0)
0x1b8b: @ GetPosition(Stack[-3])
0x1b8c: Pop(0)
0x1b8d: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x1b8e: Push(CvectorIndex(Stack[-2], 0))
0x1b8f: Push(CvectorIndex(Stack[-3], 2))
0x1b90: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x1b91: Pop(2)
0x1b92: Stack[-10] = Stack[-1]
0x1b93: Return(); Pop(8)

0x1b94: PushEmpty(bool, bool)
0x1b95: @ IsLoaded(Stack[-1])
0x1b96: Pop(0)
0x1b97: Stack[-3] = Stack[-1]
0x1b98: Return(); Pop(2)

0x1b99: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1b9a: @@ GetPosition(Stack[-7])
0x1b9b: Pop(0)
0x1b9c: @@ GetEyesHeight(Stack[-8])
0x1b9d: Pop(0)
0x1b9e: Push(CvectorIndex(Stack[-7], 1))
0x1b9f: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1ba0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1ba1: @ GetPosition(Stack[-6])
0x1ba2: Pop(0)
0x1ba3: @ GetEyesHeight(Stack[-8])
0x1ba4: Pop(0)
0x1ba5: Push(CvectorIndex(Stack[-6], 1))
0x1ba6: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1ba7: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1ba8: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1ba9: Push(CvectorIndex(Stack[-5], 1))
0x1baa: Stack[-1] = (int) 0
0x1bab: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1bac: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1bad: Pop(1); Push(Sqrt(Stack[-1]))
0x1bae: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1baf: Stack[-4] = -Stack[-5]; Pop(0);
0x1bb0: Push((int) 70)
0x1bb1: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1bb2: PushEmpty(cvector, cvector)
0x1bb3: Push(CVector(0.0, 1.0, 0.0))
0x1bb4: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x1bb5: Call 0x1bee

0x1bb6: Pop(1)
0x1bb7: Push((int) 25)
0x1bb8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1bb9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1bba: Push(CVector(0.0, 10.0, 0.0))
0x1bbb: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1bbc: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1bbd: @ IsOverrideActive(Stack[-1])
0x1bbe: Pop(0)
0x1bbf: Push(Stack[-1])
0x1bc0: IF (Stack[-1] == 0) GOTO 0x1bc3; Pop(1)

0x1bc1: Stack[-18] = (bool) 0
0x1bc2: Return(); Pop(16)

0x1bc3: @ StopWorld()
0x1bc4: Pop(0)
0x1bc5: @ CameraTransit(Stack[-2], Stack[-4])
0x1bc6: Pop(0)
0x1bc7: Push(CvectorIndex(Stack[-3], 0))
0x1bc8: Push(CvectorIndex(Stack[-4], 2))
0x1bc9: @ Rotate(Stack[-2], Stack[-1])
0x1bca: Pop(2)
0x1bcb: @ CameraWaitForPlayFinish()
0x1bcc: Pop(0)
0x1bcd: @ ResumeWorld()
0x1bce: Pop(0)
0x1bcf: Stack[-18] = (bool) 1
0x1bd0: Return(); Pop(16)

0x1bd1: PushEmpty()
0x1bd2: @ CameraSwitchToNormal()
0x1bd3: Pop(0)
0x1bd4: Return(); Pop(0)

0x1bd5: PushEmpty(float, float, float, float)
0x1bd6: Push("playing ")
0x1bd7: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1bd8: @ Trace(Stack[-1])
0x1bd9: Pop(1)
0x1bda: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x1bdb: Pop(0)
0x1bdc: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x1bdd: Pop(0)
0x1bde: Push("start: ")
0x1bdf: Pop(1); Push(Stack[-1] + Stack[-3]);
0x1be0: @ Trace(Stack[-1])
0x1be1: Pop(1)
0x1be2: Push("end: ")
0x1be3: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1be4: @ Trace(Stack[-1])
0x1be5: Pop(1)
0x1be6: Return(); Pop(4)

0x1be7: PushEmpty(bool)
0x1be8: Call 0x1c40

0x1be9: Pop(0)
0x1bea: IF (Stack[-1] == 0) GOTO 0x1bed; Pop(1)

0x1beb: @ lshStopSpeech()
0x1bec: Pop(0)
0x1bed: Return(); Pop(0)

0x1bee: PushEmpty(float, float)
0x1bef: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1bf0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1bf1: Push((float)0.0)
0x1bf2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1bf3: IF (Stack[-1] == 0) GOTO 0x1bf6; Pop(1)

0x1bf4: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1bf5: Return(); Pop(2)

0x1bf6: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1bf7: Return(); Pop(2)

0x1bf8: PushEmpty(int, int)
0x1bf9: @ GetVariable(Stack[-3], Stack[-1])
0x1bfa: Pop(0)
0x1bfb: Stack[-4] = Stack[-1]
0x1bfc: Return(); Pop(2)

0x1bfd: PushEmpty(object, object, object, object)
0x1bfe: @ GetMainOutdoorScene(Stack[-2])
0x1bff: Pop(0)
0x1c00: Push(".bin")
0x1c01: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1c02: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x1c03: Pop(1)
0x1c04: Stack[-6] = Stack[-1]
0x1c05: Return(); Pop(4)

0x1c06: Stack[-1] = 0
0x1c07: Stack[-2] = 0
0x1c08: PushEmpty(object, object, object, object)
0x1c09: @ GetMainOutdoorScene(Stack[-2])
0x1c0a: Pop(0)
0x1c0b: Push(".xml")
0x1c0c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1c0d: @ AddBlankActorFromXml(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x1c0e: Pop(1)
0x1c0f: Stack[-6] = Stack[-1]
0x1c10: Return(); Pop(4)

0x1c11: Stack[-1] = 0
0x1c12: Stack[-2] = 0
0x1c13: PushEmpty(object, object)
0x1c14: @ FindActor(Stack[-1], Stack[-4])
0x1c15: Pop(0)
0x1c16: Pop(0); Push((bool) Stack[-1] == 0)
0x1c17: IF (Stack[-1] == 0) GOTO 0x1c1a; Pop(1)

0x1c18: Stack[-5] = (bool) 0
0x1c19: Return(); Pop(2)

0x1c1a: @ Trigger(Stack[-1], Stack[-3])
0x1c1b: Pop(0)
0x1c1c: Stack[-5] = (bool) 1
0x1c1d: Return(); Pop(2)

0x1c1e: Stack[-1] = 0
0x1c1f: PushEmpty(float, float)
0x1c20: @ GetGameTime(Stack[-1])
0x1c21: Pop(0)
0x1c22: Stack[-3] = Stack[-1]
0x1c23: Return(); Pop(2)

0x1c24: PushEmpty(float, float)
0x1c25: @ GetGameTime(Stack[-1])
0x1c26: Pop(0)
0x1c27: Push((int) 1)
0x1c28: PushEmpty(int)
0x1c29: Push((int) 24)
0x1c2a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1c2b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1c2c: Return(); Pop(2)

0x1c2d: PushEmpty()
0x1c2e: PushEmpty(int)
0x1c2f: Call 0x1c24

0x1c30: Pop(0)
0x1c31: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x1c32: Return(); Pop(0)

0x1c33: PushEmpty(bool, bool)
0x1c34: PushEmpty(string)
0x1c35: Stack[-1] = "No"
0x1c36: Call 0x1bd5

0x1c37: Pop(1)
0x1c38: @ lshWaitForAnimEnd(Stack[-1])
0x1c39: Pop(0)
0x1c3a: Stack[-3] = Stack[-1]
0x1c3b: Return(); Pop(2)

0x1c3c: Stack[-1] = (int) 2872
0x1c3d: Return(); Pop(0)

0x1c3e: Stack[-1] = "ui/NPC_MladVlad.png"
0x1c3f: Return(); Pop(0)

0x1c40: Stack[-1] = (bool) 1
0x1c41: Return(); Pop(0)

0x1c42: PushEmpty()
0x1c43: Push("ood1MladVlad3")
0x1c44: Push((int) 1)
0x1c45: @ SetVariable(Stack[-2], Stack[-1])
0x1c46: Pop(2)
0x1c47: Return(); Pop(0)

0x1c48: PushEmpty()
0x1c49: Push("KnowUklad")
0x1c4a: Push((int) 1)
0x1c4b: @ SetVariable(Stack[-2], Stack[-1])
0x1c4c: Pop(2)
0x1c4d: Return(); Pop(0)

0x1c4e: PushEmpty()
0x1c4f: Push("ood1MladVlad4")
0x1c50: Push((int) 1)
0x1c51: @ SetVariable(Stack[-2], Stack[-1])
0x1c52: Pop(2)
0x1c53: Return(); Pop(0)

0x1c54: PushEmpty(object, object)
0x1c55: Push("d1q03IsKapella")
0x1c56: Push((int) 0)
0x1c57: @ SetVariable(Stack[-2], Stack[-1])
0x1c58: Pop(2)
0x1c59: PushEmpty(object)
0x1c5a: Call 0x21ae

0x1c5b: Stack[-2] = Stack[-1]
0x1c5c: Pop(1)
0x1c5d: Push("d1q03MladVladGotoOspina")
0x1c5e: Push("pt_map_ospina")
0x1c5f: Push((int) 0)
0x1c60: Push((int) 8642)
0x1c61: PushEmpty(float)
0x1c62: Call 0x1c1f

0x1c63: Pop(0)
0x1c64: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1c65: Pop(5)
0x1c66: PushEmpty()
0x1c67: Call 0x21f1

0x1c68: Pop(0)
0x1c69: PushEmpty(object, string)
0x1c6a: Stack[-1] = "quest_d1_03"
0x1c6b: Call 0x1bfd

0x1c6c: Pop(2)
0x1c6d: Return(); Pop(2)

0x1c6e: Stack[-1] = 0
0x1c6f: PushEmpty()
0x1c70: Push("money500 is given")
0x1c71: @ Trace(Stack[-1])
0x1c72: Pop(1)
0x1c73: PushEmpty(object, string, int)
0x1c74: Stack[-3] = Stack[-5]
0x1c75: Stack[-2] = "money"
0x1c76: Stack[-1] = (int) 500
0x1c77: Call 0x1b81

0x1c78: Pop(3)
0x1c79: Return(); Pop(0)

0x1c7a: PushEmpty()
0x1c7b: Push("playsound")
0x1c7c: Push("givemoney")
0x1c7d: @ TriggerWorld(Stack[-2], Stack[-1])
0x1c7e: Pop(2)
0x1c7f: Return(); Pop(0)

0x1c80: PushEmpty()
0x1c81: Push("KnowPochka")
0x1c82: Push((int) 1)
0x1c83: @ SetVariable(Stack[-2], Stack[-1])
0x1c84: Pop(2)
0x1c85: Return(); Pop(0)

0x1c86: PushEmpty()
0x1c87: Push("ood2MladVlad1")
0x1c88: Push((int) 1)
0x1c89: @ SetVariable(Stack[-2], Stack[-1])
0x1c8a: Pop(2)
0x1c8b: Return(); Pop(0)

0x1c8c: PushEmpty()
0x1c8d: Push("ood2MladVlad2")
0x1c8e: Push((int) 1)
0x1c8f: @ SetVariable(Stack[-2], Stack[-1])
0x1c90: Pop(2)
0x1c91: Return(); Pop(0)

0x1c92: PushEmpty()
0x1c93: Push("ood2MladVlad3")
0x1c94: Push((int) 1)
0x1c95: @ SetVariable(Stack[-2], Stack[-1])
0x1c96: Pop(2)
0x1c97: Return(); Pop(0)

0x1c98: PushEmpty()
0x1c99: Push("ood2MladVlad4")
0x1c9a: Push((int) 1)
0x1c9b: @ SetVariable(Stack[-2], Stack[-1])
0x1c9c: Pop(2)
0x1c9d: Return(); Pop(0)

0x1c9e: PushEmpty()
0x1c9f: Push("d2q04")
0x1ca0: Push((int) 1)
0x1ca1: @ SetVariable(Stack[-2], Stack[-1])
0x1ca2: Pop(2)
0x1ca3: Return(); Pop(0)

0x1ca4: PushEmpty()
0x1ca5: PushEmpty(object, string, float)
0x1ca6: PushEmpty(object)
0x1ca7: Call 0x21ae

0x1ca8: Stack[-4] = Stack[-1]
0x1ca9: Pop(1)
0x1caa: Stack[-2] = "pt_map_anna"
0x1cab: Stack[-1] = (int) 2
0x1cac: Call 0x21bf

0x1cad: Pop(3)
0x1cae: PushEmpty(object)
0x1caf: Call 0x21ae

0x1cb0: Pop(0)
0x1cb1: @@ ShowMap(Stack[-1])
0x1cb2: Pop(1)
0x1cb3: Return(); Pop(0)

0x1cb4: PushEmpty()
0x1cb5: PushEmpty(object, string, float)
0x1cb6: PushEmpty(object)
0x1cb7: Call 0x21ae

0x1cb8: Stack[-4] = Stack[-1]
0x1cb9: Pop(1)
0x1cba: Stack[-2] = "pt_map_ospina"
0x1cbb: Stack[-1] = (int) 2
0x1cbc: Call 0x21bf

0x1cbd: Pop(3)
0x1cbe: PushEmpty(object)
0x1cbf: Call 0x21ae

0x1cc0: Pop(0)
0x1cc1: @@ ShowMap(Stack[-1])
0x1cc2: Pop(1)
0x1cc3: Return(); Pop(0)

0x1cc4: PushEmpty()
0x1cc5: PushEmpty(object, string, float)
0x1cc6: PushEmpty(object)
0x1cc7: Call 0x21ae

0x1cc8: Stack[-4] = Stack[-1]
0x1cc9: Pop(1)
0x1cca: Stack[-2] = "pt_map_bigvlad"
0x1ccb: Stack[-1] = (int) 2
0x1ccc: Call 0x21bf

0x1ccd: Pop(3)
0x1cce: PushEmpty(object)
0x1ccf: Call 0x21ae

0x1cd0: Pop(0)
0x1cd1: @@ ShowMap(Stack[-1])
0x1cd2: Pop(1)
0x1cd3: Return(); Pop(0)

0x1cd4: PushEmpty()
0x1cd5: Return(); Pop(0)

0x1cd6: PushEmpty(object, object)
0x1cd7: Push("d3q02")
0x1cd8: Push((int) 2)
0x1cd9: @ SetVariable(Stack[-2], Stack[-1])
0x1cda: Pop(2)
0x1cdb: PushEmpty(object)
0x1cdc: Call 0x21ae

0x1cdd: Stack[-2] = Stack[-1]
0x1cde: Pop(1)
0x1cdf: Push("d3q02MladVladGotoBigVlad")
0x1ce0: Push("pt_map_bigvlad")
0x1ce1: Push((int) 0)
0x1ce2: Push((int) 11384)
0x1ce3: PushEmpty(float)
0x1ce4: Call 0x1c1f

0x1ce5: Pop(0)
0x1ce6: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1ce7: Pop(5)
0x1ce8: PushEmpty()
0x1ce9: Call 0x2201

0x1cea: Pop(0)
0x1ceb: Return(); Pop(2)

0x1cec: Stack[-1] = 0
0x1ced: PushEmpty()
0x1cee: Push("ood4MladVlad1")
0x1cef: Push((int) 1)
0x1cf0: @ SetVariable(Stack[-2], Stack[-1])
0x1cf1: Pop(2)
0x1cf2: Return(); Pop(0)

0x1cf3: PushEmpty(object, object)
0x1cf4: Push("d4q01")
0x1cf5: Push((int) 3)
0x1cf6: @ SetVariable(Stack[-2], Stack[-1])
0x1cf7: Pop(2)
0x1cf8: PushEmpty(object)
0x1cf9: Call 0x21ae

0x1cfa: Stack[-2] = Stack[-1]
0x1cfb: Pop(1)
0x1cfc: Push("d4q01MladVladGotoBigVlad")
0x1cfd: Push("pt_map_bigvlad")
0x1cfe: Push((int) 1)
0x1cff: Push((int) 11507)
0x1d00: PushEmpty(float)
0x1d01: Call 0x1c1f

0x1d02: Pop(0)
0x1d03: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1d04: Pop(5)
0x1d05: Push("d4q01MladVladGotoBigVladSelf")
0x1d06: Push("pt_map_mladvlad")
0x1d07: Push((int) 1)
0x1d08: Push((int) 15322)
0x1d09: PushEmpty(float)
0x1d0a: Call 0x1c1f

0x1d0b: Pop(0)
0x1d0c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1d0d: Pop(5)
0x1d0e: PushEmpty()
0x1d0f: Call 0x2211

0x1d10: Pop(0)
0x1d11: Return(); Pop(2)

0x1d12: Stack[-1] = 0
0x1d13: PushEmpty(object, object)
0x1d14: Push("d4q01_subquest")
0x1d15: Push((int) 1)
0x1d16: @ SetVariable(Stack[-2], Stack[-1])
0x1d17: Pop(2)
0x1d18: PushEmpty(object)
0x1d19: Call 0x21ae

0x1d1a: Stack[-2] = Stack[-1]
0x1d1b: Pop(1)
0x1d1c: Push("d4q01MladVladGotoOspina")
0x1d1d: Push("pt_map_ospina")
0x1d1e: Push((int) 1)
0x1d1f: Push((int) 11503)
0x1d20: PushEmpty(float)
0x1d21: Call 0x1c1f

0x1d22: Pop(0)
0x1d23: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1d24: Pop(5)
0x1d25: Return(); Pop(2)

0x1d26: Stack[-1] = 0
0x1d27: PushEmpty()
0x1d28: Push("ood4MladVlad2")
0x1d29: Push((int) 1)
0x1d2a: @ SetVariable(Stack[-2], Stack[-1])
0x1d2b: Pop(2)
0x1d2c: Return(); Pop(0)

0x1d2d: PushEmpty(object, object)
0x1d2e: PushEmpty(object)
0x1d2f: Call 0x21ae

0x1d30: Stack[-2] = Stack[-1]
0x1d31: Pop(1)
0x1d32: Push("d4q02MladVladGotoAnna")
0x1d33: Push("pt_map_anna")
0x1d34: Push((int) 0)
0x1d35: Push((int) 11526)
0x1d36: PushEmpty(float)
0x1d37: Call 0x1c1f

0x1d38: Pop(0)
0x1d39: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1d3a: Pop(5)
0x1d3b: Push("d4q02MladVladGotoJulia")
0x1d3c: Push("pt_map_julia")
0x1d3d: Push((int) 0)
0x1d3e: Push((int) 11524)
0x1d3f: PushEmpty(float)
0x1d40: Call 0x1c1f

0x1d41: Pop(0)
0x1d42: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1d43: Pop(5)
0x1d44: Push("d4q02MladVladGotoLara")
0x1d45: Push("pt_map_lara")
0x1d46: Push((int) 0)
0x1d47: Push((int) 11525)
0x1d48: PushEmpty(float)
0x1d49: Call 0x1c1f

0x1d4a: Pop(0)
0x1d4b: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1d4c: Pop(5)
0x1d4d: Push("d4q02MladVladGotoAJLSelf")
0x1d4e: Push("pt_map_mladvlad")
0x1d4f: Push((int) 0)
0x1d50: Push((int) 15328)
0x1d51: PushEmpty(float)
0x1d52: Call 0x1c1f

0x1d53: Pop(0)
0x1d54: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1d55: Pop(5)
0x1d56: PushEmpty()
0x1d57: Call 0x2221

0x1d58: Pop(0)
0x1d59: PushEmpty()
0x1d5a: Call 0x2231

0x1d5b: Pop(0)
0x1d5c: PushEmpty(object, string)
0x1d5d: Stack[-1] = "quest_d4_02"
0x1d5e: Call 0x1c08

0x1d5f: Pop(2)
0x1d60: Return(); Pop(2)

0x1d61: Stack[-1] = 0
0x1d62: PushEmpty()
0x1d63: Push("ood4MladVlad3")
0x1d64: Push((int) 1)
0x1d65: @ SetVariable(Stack[-2], Stack[-1])
0x1d66: Pop(2)
0x1d67: Return(); Pop(0)

0x1d68: PushEmpty()
0x1d69: Push("money 50000 is given")
0x1d6a: @ Trace(Stack[-1])
0x1d6b: Pop(1)
0x1d6c: PushEmpty(object, string, int)
0x1d6d: Stack[-3] = Stack[-5]
0x1d6e: Stack[-2] = "money"
0x1d6f: Stack[-1] = (int) 50000
0x1d70: Call 0x1b81

0x1d71: Pop(3)
0x1d72: Return(); Pop(0)

0x1d73: PushEmpty(object, object)
0x1d74: PushEmpty(object)
0x1d75: Call 0x21ae

0x1d76: Stack[-2] = Stack[-1]
0x1d77: Pop(1)
0x1d78: Push("d6q02MladVladGotoBigVlad")
0x1d79: Push("pt_map_bigvlad")
0x1d7a: Push((int) 0)
0x1d7b: Push((int) 15378)
0x1d7c: PushEmpty(float)
0x1d7d: Call 0x1c1f

0x1d7e: Pop(0)
0x1d7f: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1d80: Pop(5)
0x1d81: Push("d6q02MladVladGotoBigVladSelf")
0x1d82: Push("pt_map_mladvlad")
0x1d83: Push((int) 0)
0x1d84: Push((int) 15379)
0x1d85: PushEmpty(float)
0x1d86: Call 0x1c1f

0x1d87: Pop(0)
0x1d88: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1d89: Pop(5)
0x1d8a: PushEmpty()
0x1d8b: Call 0x2251

0x1d8c: Pop(0)
0x1d8d: PushEmpty()
0x1d8e: Call 0x2271

0x1d8f: Pop(0)
0x1d90: PushEmpty(object, string)
0x1d91: Stack[-1] = "quest_d6_02"
0x1d92: Call 0x1bfd

0x1d93: Pop(2)
0x1d94: PushEmpty(bool, string, string)
0x1d95: Stack[-2] = "quest_d6_02"
0x1d96: Stack[-1] = "place_trigger"
0x1d97: Call 0x1c13

0x1d98: Pop(3)
0x1d99: Return(); Pop(2)

0x1d9a: Stack[-1] = 0
0x1d9b: PushEmpty()
0x1d9c: Push("ood6MladVlad1")
0x1d9d: Push((int) 1)
0x1d9e: @ SetVariable(Stack[-2], Stack[-1])
0x1d9f: Pop(2)
0x1da0: Return(); Pop(0)

0x1da1: PushEmpty()
0x1da2: Push("ood6MladVlad2")
0x1da3: Push((int) 1)
0x1da4: @ SetVariable(Stack[-2], Stack[-1])
0x1da5: Pop(2)
0x1da6: Return(); Pop(0)

0x1da7: PushEmpty()
0x1da8: Push("d6q02KnowAboutAttack")
0x1da9: Push((int) 1)
0x1daa: @ SetVariable(Stack[-2], Stack[-1])
0x1dab: Pop(2)
0x1dac: Return(); Pop(0)

0x1dad: PushEmpty()
0x1dae: Push("ood6MladVlad3")
0x1daf: Push((int) 1)
0x1db0: @ SetVariable(Stack[-2], Stack[-1])
0x1db1: Pop(2)
0x1db2: Return(); Pop(0)

0x1db3: PushEmpty()
0x1db4: PushEmpty()
0x1db5: Call 0x2281

0x1db6: Pop(0)
0x1db7: PushEmpty(bool, string, string)
0x1db8: Stack[-2] = "quest_d6_03"
0x1db9: Stack[-1] = "failed"
0x1dba: Call 0x1c13

0x1dbb: Pop(3)
0x1dbc: Return(); Pop(0)

0x1dbd: PushEmpty()
0x1dbe: Push("money30000 is given")
0x1dbf: @ Trace(Stack[-1])
0x1dc0: Pop(1)
0x1dc1: PushEmpty(object, string, int)
0x1dc2: Stack[-3] = Stack[-5]
0x1dc3: Stack[-2] = "money"
0x1dc4: Stack[-1] = (int) 30000
0x1dc5: Call 0x1b81

0x1dc6: Pop(3)
0x1dc7: Return(); Pop(0)

0x1dc8: PushEmpty()
0x1dc9: Return(); Pop(0)

0x1dca: PushEmpty()
0x1dcb: Push("ood5MladVlad1")
0x1dcc: Push((int) 1)
0x1dcd: @ SetVariable(Stack[-2], Stack[-1])
0x1dce: Pop(2)
0x1dcf: Return(); Pop(0)

0x1dd0: PushEmpty()
0x1dd1: Push("ood5MladVlad2")
0x1dd2: Push((int) 1)
0x1dd3: @ SetVariable(Stack[-2], Stack[-1])
0x1dd4: Pop(2)
0x1dd5: Return(); Pop(0)

0x1dd6: PushEmpty()
0x1dd7: Return(); Pop(0)

0x1dd8: PushEmpty()
0x1dd9: Push("ood5MladVlad3")
0x1dda: Push((int) 1)
0x1ddb: @ SetVariable(Stack[-2], Stack[-1])
0x1ddc: Pop(2)
0x1ddd: Return(); Pop(0)

0x1dde: PushEmpty(object, object, object, object)
0x1ddf: PushEmpty(object)
0x1de0: Call 0x21ae

0x1de1: Stack[-3] = Stack[-1]
0x1de2: Pop(1)
0x1de3: Push("d6q02BigVlad")
0x1de4: @@ FindMark(Stack[-2], Stack[-1])
0x1de5: Pop(1)
0x1de6: Push(Stack[-1])
0x1de7: IF (Stack[-1] == 0) GOTO 0x1dea; Pop(1)

0x1de8: @@ Remove()
0x1de9: Pop(0)
0x1dea: Push("d6q02KapellaGotoMladVlad")
0x1deb: @@ FindMark(Stack[-2], Stack[-1])
0x1dec: Pop(1)
0x1ded: Push(Stack[-1])
0x1dee: IF (Stack[-1] == 0) GOTO 0x1df1; Pop(1)

0x1def: @@ Remove()
0x1df0: Pop(0)
0x1df1: Push("d6q02MladVladGotoBigVlad")
0x1df2: @@ FindMark(Stack[-2], Stack[-1])
0x1df3: Pop(1)
0x1df4: Push(Stack[-1])
0x1df5: IF (Stack[-1] == 0) GOTO 0x1df8; Pop(1)

0x1df6: @@ Remove()
0x1df7: Pop(0)
0x1df8: Push("d6q02MladVladGotoBigVladSelf")
0x1df9: @@ FindMark(Stack[-2], Stack[-1])
0x1dfa: Pop(1)
0x1dfb: Push(Stack[-1])
0x1dfc: IF (Stack[-1] == 0) GOTO 0x1dff; Pop(1)

0x1dfd: @@ Remove()
0x1dfe: Pop(0)
0x1dff: PushEmpty()
0x1e00: Call 0x2261

0x1e01: Pop(0)
0x1e02: Return(); Pop(4)

0x1e03: Stack[-1] = 0
0x1e04: Stack[-2] = 0
0x1e05: PushEmpty()
0x1e06: Push("ood8MladVlad1")
0x1e07: Push((int) 1)
0x1e08: @ SetVariable(Stack[-2], Stack[-1])
0x1e09: Pop(2)
0x1e0a: Return(); Pop(0)

0x1e0b: PushEmpty()
0x1e0c: Push("ood8MladVlad2")
0x1e0d: Push((int) 1)
0x1e0e: @ SetVariable(Stack[-2], Stack[-1])
0x1e0f: Pop(2)
0x1e10: Return(); Pop(0)

0x1e11: PushEmpty()
0x1e12: Return(); Pop(0)

0x1e13: PushEmpty()
0x1e14: Push("ood8MladVlad3")
0x1e15: Push((int) 1)
0x1e16: @ SetVariable(Stack[-2], Stack[-1])
0x1e17: Pop(2)
0x1e18: Return(); Pop(0)

0x1e19: PushEmpty()
0x1e1a: Push("d8q01MladVladIsVictim")
0x1e1b: Push((int) 1)
0x1e1c: @ SetVariable(Stack[-2], Stack[-1])
0x1e1d: Pop(2)
0x1e1e: Return(); Pop(0)

0x1e1f: PushEmpty()
0x1e20: Push("ood8MladVlad4")
0x1e21: Push((int) 1)
0x1e22: @ SetVariable(Stack[-2], Stack[-1])
0x1e23: Pop(2)
0x1e24: Return(); Pop(0)

0x1e25: PushEmpty()
0x1e26: Push("ood8MladVlad5")
0x1e27: Push((int) 1)
0x1e28: @ SetVariable(Stack[-2], Stack[-1])
0x1e29: Pop(2)
0x1e2a: Return(); Pop(0)

0x1e2b: PushEmpty()
0x1e2c: Push("KnowMladVlad")
0x1e2d: Push((int) 1)
0x1e2e: @ SetVariable(Stack[-2], Stack[-1])
0x1e2f: Pop(2)
0x1e30: Return(); Pop(0)

0x1e31: PushEmpty()
0x1e32: Push("ood1MladVlad5")
0x1e33: Push((int) 1)
0x1e34: @ SetVariable(Stack[-2], Stack[-1])
0x1e35: Pop(2)
0x1e36: Return(); Pop(0)

0x1e37: PushEmpty()
0x1e38: Push("ood1MladVlad6")
0x1e39: Push((int) 1)
0x1e3a: @ SetVariable(Stack[-2], Stack[-1])
0x1e3b: Pop(2)
0x1e3c: Return(); Pop(0)

0x1e3d: PushEmpty()
0x1e3e: Push("ood1MladVlad7")
0x1e3f: Push((int) 1)
0x1e40: @ SetVariable(Stack[-2], Stack[-1])
0x1e41: Pop(2)
0x1e42: Return(); Pop(0)

0x1e43: PushEmpty()
0x1e44: Push("ood1MladVlad8")
0x1e45: Push((int) 1)
0x1e46: @ SetVariable(Stack[-2], Stack[-1])
0x1e47: Pop(2)
0x1e48: Return(); Pop(0)

0x1e49: PushEmpty()
0x1e4a: Push("ood1MladVlad9")
0x1e4b: Push((int) 1)
0x1e4c: @ SetVariable(Stack[-2], Stack[-1])
0x1e4d: Pop(2)
0x1e4e: Return(); Pop(0)

0x1e4f: PushEmpty()
0x1e50: Push("ood1MladVlad10")
0x1e51: Push((int) 1)
0x1e52: @ SetVariable(Stack[-2], Stack[-1])
0x1e53: Pop(2)
0x1e54: Return(); Pop(0)

0x1e55: PushEmpty()
0x1e56: Push("ood1MladVlad11")
0x1e57: Push((int) 1)
0x1e58: @ SetVariable(Stack[-2], Stack[-1])
0x1e59: Pop(2)
0x1e5a: Return(); Pop(0)

0x1e5b: PushEmpty(object, object)
0x1e5c: PushEmpty(int, string)
0x1e5d: Stack[-1] = "d5q03"
0x1e5e: Call 0x1bf8

0x1e5f: Pop(1)
0x1e60: Push((int) 0)
0x1e61: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1e62: IF (Stack[-1] == 0) GOTO 0x1e8a; Pop(1)

0x1e63: Push("d5q03")
0x1e64: Push((int) 1)
0x1e65: @ SetVariable(Stack[-2], Stack[-1])
0x1e66: Pop(2)
0x1e67: PushEmpty(object)
0x1e68: Call 0x21ae

0x1e69: Stack[-2] = Stack[-1]
0x1e6a: Pop(1)
0x1e6b: Push("d5q03MladVladSavePrisonersSelf")
0x1e6c: Push("pt_map_mladvlad")
0x1e6d: Push((int) 0)
0x1e6e: Push((int) 15369)
0x1e6f: PushEmpty(float)
0x1e70: Call 0x1c1f

0x1e71: Pop(0)
0x1e72: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1e73: Pop(5)
0x1e74: Push("d5q03SavePrisoners")
0x1e75: Push("pt_map_uprava_prison")
0x1e76: Push((int) 0)
0x1e77: Push((int) 15370)
0x1e78: PushEmpty(float)
0x1e79: Call 0x1c1f

0x1e7a: Pop(0)
0x1e7b: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1e7c: Pop(5)
0x1e7d: PushEmpty()
0x1e7e: Call 0x2241

0x1e7f: Pop(0)
0x1e80: PushEmpty(object, string)
0x1e81: Stack[-1] = "quest_d5_03"
0x1e82: Call 0x1bfd

0x1e83: Pop(2)
0x1e84: PushEmpty(bool, string, string)
0x1e85: Stack[-2] = "quest_d5_03"
0x1e86: Stack[-1] = "place_prisoners"
0x1e87: Call 0x1c13

0x1e88: Pop(3)
0x1e89: Stack[-1] = 0
0x1e8a: Return(); Pop(2)

0x1e8b: PushEmpty()
0x1e8c: PushEmpty()
0x1e8d: Call 0x2291

0x1e8e: Pop(0)
0x1e8f: Return(); Pop(0)

0x1e90: PushEmpty()
0x1e91: Push("KnowTaurusProject")
0x1e92: Push((int) 1)
0x1e93: @ SetVariable(Stack[-2], Stack[-1])
0x1e94: Pop(2)
0x1e95: Return(); Pop(0)

0x1e96: PushEmpty()
0x1e97: Push("ood1MladVlad1")
0x1e98: Push((int) 1)
0x1e99: @ SetVariable(Stack[-2], Stack[-1])
0x1e9a: Pop(2)
0x1e9b: Return(); Pop(0)

0x1e9c: PushEmpty()
0x1e9d: Push("ood1MladVlad2")
0x1e9e: Push((int) 1)
0x1e9f: @ SetVariable(Stack[-2], Stack[-1])
0x1ea0: Pop(2)
0x1ea1: Return(); Pop(0)

0x1ea2: PushEmpty()
0x1ea3: PushEmpty(int, string)
0x1ea4: Stack[-1] = "ood1MladVlad4"
0x1ea5: Call 0x1bf8

0x1ea6: Pop(1)
0x1ea7: Push((int) 0)
0x1ea8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1ea9: IF (Stack[-1] == 0) GOTO 0x1eac; Pop(1)

0x1eaa: Stack[-2] = (bool) 1
0x1eab: Return(); Pop(0)

0x1eac: Stack[-2] = (bool) 0
0x1ead: Return(); Pop(0)

0x1eae: PushEmpty()
0x1eaf: PushEmpty(int, string)
0x1eb0: Stack[-1] = "d1q01FirstGeorgVisit"
0x1eb1: Call 0x1bf8

0x1eb2: Pop(1)
0x1eb3: Push((int) 1)
0x1eb4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1eb5: IF (Stack[-1] == 0) GOTO 0x1eb8; Pop(1)

0x1eb6: Stack[-2] = (bool) 1
0x1eb7: Return(); Pop(0)

0x1eb8: Stack[-2] = (bool) 0
0x1eb9: Return(); Pop(0)

0x1eba: PushEmpty()
0x1ebb: PushEmpty(int, string)
0x1ebc: Stack[-1] = "d1q03"
0x1ebd: Call 0x1bf8

0x1ebe: Pop(1)
0x1ebf: Push((int) 0)
0x1ec0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1ec1: IF (Stack[-1] == 0) GOTO 0x1ec4; Pop(1)

0x1ec2: Stack[-2] = (bool) 1
0x1ec3: Return(); Pop(0)

0x1ec4: Stack[-2] = (bool) 0
0x1ec5: Return(); Pop(0)

0x1ec6: PushEmpty()
0x1ec7: PushEmpty(int, string)
0x1ec8: Stack[-1] = "d1q03"
0x1ec9: Call 0x1bf8

0x1eca: Pop(1)
0x1ecb: Push((int) 1000)
0x1ecc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1ecd: IF (Stack[-1] == 0) GOTO 0x1ed0; Pop(1)

0x1ece: Stack[-2] = (bool) 1
0x1ecf: Return(); Pop(0)

0x1ed0: Stack[-2] = (bool) 0
0x1ed1: Return(); Pop(0)

0x1ed2: PushEmpty()
0x1ed3: PushEmpty(int, string)
0x1ed4: Stack[-1] = "d1q03IsKapella"
0x1ed5: Call 0x1bf8

0x1ed6: Pop(1)
0x1ed7: Push((int) 1)
0x1ed8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1ed9: IF (Stack[-1] == 0) GOTO 0x1edc; Pop(1)

0x1eda: Stack[-2] = (bool) 1
0x1edb: Return(); Pop(0)

0x1edc: Stack[-2] = (bool) 0
0x1edd: Return(); Pop(0)

0x1ede: PushEmpty()
0x1edf: PushEmpty(bool, object)
0x1ee0: Stack[-1] = Stack[-3]
0x1ee1: Call 0x2181

0x1ee2: Pop(1)
0x1ee3: IF (Stack[-1] == 0) GOTO 0x1ee6; Pop(1)

0x1ee4: Stack[-2] = (bool) 1
0x1ee5: Return(); Pop(0)

0x1ee6: Stack[-2] = (bool) 0
0x1ee7: Return(); Pop(0)

0x1ee8: PushEmpty()
0x1ee9: PushEmpty(int, string)
0x1eea: Stack[-1] = "d2q03"
0x1eeb: Call 0x1bf8

0x1eec: Pop(1)
0x1eed: Push((int) 1)
0x1eee: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1eef: IF (Stack[-1] == 0) GOTO 0x1ef2; Pop(1)

0x1ef0: Stack[-2] = (bool) 1
0x1ef1: Return(); Pop(0)

0x1ef2: Stack[-2] = (bool) 0
0x1ef3: Return(); Pop(0)

0x1ef4: PushEmpty()
0x1ef5: PushEmpty(int, string)
0x1ef6: Stack[-1] = "ood2MladVlad1"
0x1ef7: Call 0x1bf8

0x1ef8: Pop(1)
0x1ef9: Push((int) 0)
0x1efa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1efb: IF (Stack[-1] == 0) GOTO 0x1efe; Pop(1)

0x1efc: Stack[-2] = (bool) 1
0x1efd: Return(); Pop(0)

0x1efe: Stack[-2] = (bool) 0
0x1eff: Return(); Pop(0)

0x1f00: PushEmpty()
0x1f01: PushEmpty(int, string)
0x1f02: Stack[-1] = "ood2MladVlad2"
0x1f03: Call 0x1bf8

0x1f04: Pop(1)
0x1f05: Push((int) 0)
0x1f06: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1f07: IF (Stack[-1] == 0) GOTO 0x1f0a; Pop(1)

0x1f08: Stack[-2] = (bool) 1
0x1f09: Return(); Pop(0)

0x1f0a: Stack[-2] = (bool) 0
0x1f0b: Return(); Pop(0)

0x1f0c: PushEmpty()
0x1f0d: PushEmpty(int, string)
0x1f0e: Stack[-1] = "ood2MladVlad3"
0x1f0f: Call 0x1bf8

0x1f10: Pop(1)
0x1f11: Push((int) 0)
0x1f12: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1f13: IF (Stack[-1] == 0) GOTO 0x1f16; Pop(1)

0x1f14: Stack[-2] = (bool) 1
0x1f15: Return(); Pop(0)

0x1f16: Stack[-2] = (bool) 0
0x1f17: Return(); Pop(0)

0x1f18: PushEmpty()
0x1f19: PushEmpty(int, string)
0x1f1a: Stack[-1] = "ood2MladVlad4"
0x1f1b: Call 0x1bf8

0x1f1c: Pop(1)
0x1f1d: Push((int) 0)
0x1f1e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1f1f: IF (Stack[-1] == 0) GOTO 0x1f22; Pop(1)

0x1f20: Stack[-2] = (bool) 1
0x1f21: Return(); Pop(0)

0x1f22: Stack[-2] = (bool) 0
0x1f23: Return(); Pop(0)

0x1f24: PushEmpty()
0x1f25: PushEmpty(int, string)
0x1f26: Stack[-1] = "d2q04"
0x1f27: Call 0x1bf8

0x1f28: Pop(1)
0x1f29: Push((int) 0)
0x1f2a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1f2b: IF (Stack[-1] == 0) GOTO 0x1f2e; Pop(1)

0x1f2c: Stack[-2] = (bool) 1
0x1f2d: Return(); Pop(0)

0x1f2e: Stack[-2] = (bool) 0
0x1f2f: Return(); Pop(0)

0x1f30: PushEmpty()
0x1f31: PushEmpty(int, string)
0x1f32: Stack[-1] = "KnowViktor"
0x1f33: Call 0x1bf8

0x1f34: Pop(1)
0x1f35: Push((int) 1)
0x1f36: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1f37: IF (Stack[-1] == 0) GOTO 0x1f3a; Pop(1)

0x1f38: Stack[-2] = (bool) 1
0x1f39: Return(); Pop(0)

0x1f3a: Stack[-2] = (bool) 0
0x1f3b: Return(); Pop(0)

0x1f3c: PushEmpty()
0x1f3d: PushEmpty(int, string)
0x1f3e: Stack[-1] = "d3q02"
0x1f3f: Call 0x1bf8

0x1f40: Pop(1)
0x1f41: Push((int) 1)
0x1f42: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1f43: IF (Stack[-1] == 0) GOTO 0x1f46; Pop(1)

0x1f44: Stack[-2] = (bool) 1
0x1f45: Return(); Pop(0)

0x1f46: Stack[-2] = (bool) 0
0x1f47: Return(); Pop(0)

0x1f48: PushEmpty()
0x1f49: Stack[-2] = (bool) 1
0x1f4a: Return(); Pop(0)

0x1f4b: Stack[-2] = (bool) 0
0x1f4c: Return(); Pop(0)

0x1f4d: PushEmpty()
0x1f4e: PushEmpty(int, string)
0x1f4f: Stack[-1] = "d4q01"
0x1f50: Call 0x1bf8

0x1f51: Pop(1)
0x1f52: Push((int) 2)
0x1f53: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1f54: IF (Stack[-1] == 0) GOTO 0x1f57; Pop(1)

0x1f55: Stack[-2] = (bool) 1
0x1f56: Return(); Pop(0)

0x1f57: Stack[-2] = (bool) 0
0x1f58: Return(); Pop(0)

0x1f59: PushEmpty()
0x1f5a: PushEmpty(int, string)
0x1f5b: Stack[-1] = "ood4MladVlad1"
0x1f5c: Call 0x1bf8

0x1f5d: Pop(1)
0x1f5e: Push((int) 0)
0x1f5f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1f60: IF (Stack[-1] == 0) GOTO 0x1f63; Pop(1)

0x1f61: Stack[-2] = (bool) 1
0x1f62: Return(); Pop(0)

0x1f63: Stack[-2] = (bool) 0
0x1f64: Return(); Pop(0)

0x1f65: PushEmpty()
0x1f66: PushEmpty(int, string)
0x1f67: Stack[-1] = "ood4MladVlad2"
0x1f68: Call 0x1bf8

0x1f69: Pop(1)
0x1f6a: Push((int) 0)
0x1f6b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1f6c: IF (Stack[-1] == 0) GOTO 0x1f6f; Pop(1)

0x1f6d: Stack[-2] = (bool) 1
0x1f6e: Return(); Pop(0)

0x1f6f: Stack[-2] = (bool) 0
0x1f70: Return(); Pop(0)

0x1f71: PushEmpty()
0x1f72: PushEmpty(int, string)
0x1f73: Stack[-1] = "d4q02"
0x1f74: Call 0x1bf8

0x1f75: Pop(1)
0x1f76: Push((int) 1000)
0x1f77: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1f78: IF (Stack[-1] == 0) GOTO 0x1f7b; Pop(1)

0x1f79: Stack[-2] = (bool) 1
0x1f7a: Return(); Pop(0)

0x1f7b: Stack[-2] = (bool) 0
0x1f7c: Return(); Pop(0)

0x1f7d: PushEmpty()
0x1f7e: PushEmpty(int, string)
0x1f7f: Stack[-1] = "ood4MladVlad3"
0x1f80: Call 0x1bf8

0x1f81: Pop(1)
0x1f82: Push((int) 0)
0x1f83: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1f84: IF (Stack[-1] == 0) GOTO 0x1f87; Pop(1)

0x1f85: Stack[-2] = (bool) 1
0x1f86: Return(); Pop(0)

0x1f87: Stack[-2] = (bool) 0
0x1f88: Return(); Pop(0)

0x1f89: PushEmpty()
0x1f8a: PushEmpty(int, string)
0x1f8b: Stack[-1] = "d5q02"
0x1f8c: Call 0x1bf8

0x1f8d: Pop(1)
0x1f8e: Push((int) 0)
0x1f8f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1f90: IF (Stack[-1] == 0) GOTO 0x1f93; Pop(1)

0x1f91: Stack[-2] = (bool) 1
0x1f92: Return(); Pop(0)

0x1f93: Stack[-2] = (bool) 0
0x1f94: Return(); Pop(0)

0x1f95: PushEmpty()
0x1f96: PushEmpty(int, string)
0x1f97: Stack[-1] = "d6q02"
0x1f98: Call 0x1bf8

0x1f99: Pop(1)
0x1f9a: Push((int) 0)
0x1f9b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1f9c: IF (Stack[-1] == 0) GOTO 0x1f9f; Pop(1)

0x1f9d: Stack[-2] = (bool) 1
0x1f9e: Return(); Pop(0)

0x1f9f: Stack[-2] = (bool) 0
0x1fa0: Return(); Pop(0)

0x1fa1: PushEmpty()
0x1fa2: PushEmpty(int, string)
0x1fa3: Stack[-1] = "ood6MladVlad1"
0x1fa4: Call 0x1bf8

0x1fa5: Pop(1)
0x1fa6: Push((int) 0)
0x1fa7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1fa8: IF (Stack[-1] == 0) GOTO 0x1fab; Pop(1)

0x1fa9: Stack[-2] = (bool) 1
0x1faa: Return(); Pop(0)

0x1fab: Stack[-2] = (bool) 0
0x1fac: Return(); Pop(0)

0x1fad: PushEmpty()
0x1fae: PushEmpty(int, string)
0x1faf: Stack[-1] = "ood6MladVlad2"
0x1fb0: Call 0x1bf8

0x1fb1: Pop(1)
0x1fb2: Push((int) 0)
0x1fb3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1fb4: IF (Stack[-1] == 0) GOTO 0x1fb7; Pop(1)

0x1fb5: Stack[-2] = (bool) 1
0x1fb6: Return(); Pop(0)

0x1fb7: Stack[-2] = (bool) 0
0x1fb8: Return(); Pop(0)

0x1fb9: PushEmpty()
0x1fba: PushEmpty(int, string)
0x1fbb: Stack[-1] = "ood6MladVlad3"
0x1fbc: Call 0x1bf8

0x1fbd: Pop(1)
0x1fbe: Push((int) 0)
0x1fbf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1fc0: IF (Stack[-1] == 0) GOTO 0x1fc3; Pop(1)

0x1fc1: Stack[-2] = (bool) 1
0x1fc2: Return(); Pop(0)

0x1fc3: Stack[-2] = (bool) 0
0x1fc4: Return(); Pop(0)

0x1fc5: PushEmpty()
0x1fc6: PushEmpty(int, string)
0x1fc7: Stack[-1] = "d5q03"
0x1fc8: Call 0x1bf8

0x1fc9: Pop(1)
0x1fca: Push((int) 1000)
0x1fcb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1fcc: IF (Stack[-1] == 0) GOTO 0x1fcf; Pop(1)

0x1fcd: Stack[-2] = (bool) 1
0x1fce: Return(); Pop(0)

0x1fcf: Stack[-2] = (bool) 0
0x1fd0: Return(); Pop(0)

0x1fd1: PushEmpty()
0x1fd2: PushEmpty(int, string)
0x1fd3: Stack[-1] = "d5q03"
0x1fd4: Call 0x1bf8

0x1fd5: Pop(1)
0x1fd6: Push((int) -1)
0x1fd7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1fd8: IF (Stack[-1] == 0) GOTO 0x1fdb; Pop(1)

0x1fd9: Stack[-2] = (bool) 1
0x1fda: Return(); Pop(0)

0x1fdb: Stack[-2] = (bool) 0
0x1fdc: Return(); Pop(0)

0x1fdd: PushEmpty()
0x1fde: PushEmpty(int, string)
0x1fdf: Stack[-1] = "d5q03"
0x1fe0: Call 0x1bf8

0x1fe1: Pop(1)
0x1fe2: Push((int) 2)
0x1fe3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1fe4: IF (Stack[-1] == 0) GOTO 0x1fe7; Pop(1)

0x1fe5: Stack[-2] = (bool) 1
0x1fe6: Return(); Pop(0)

0x1fe7: Stack[-2] = (bool) 0
0x1fe8: Return(); Pop(0)

0x1fe9: PushEmpty()
0x1fea: PushEmpty(int, string)
0x1feb: Stack[-1] = "ood5MladVlad1"
0x1fec: Call 0x1bf8

0x1fed: Pop(1)
0x1fee: Push((int) 0)
0x1fef: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1ff0: IF (Stack[-1] == 0) GOTO 0x1ff3; Pop(1)

0x1ff1: Stack[-2] = (bool) 1
0x1ff2: Return(); Pop(0)

0x1ff3: Stack[-2] = (bool) 0
0x1ff4: Return(); Pop(0)

0x1ff5: PushEmpty()
0x1ff6: PushEmpty(int, string)
0x1ff7: Stack[-1] = "ood5MladVlad2"
0x1ff8: Call 0x1bf8

0x1ff9: Pop(1)
0x1ffa: Push((int) 0)
0x1ffb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1ffc: IF (Stack[-1] == 0) GOTO 0x1fff; Pop(1)

0x1ffd: Stack[-2] = (bool) 1
0x1ffe: Return(); Pop(0)

0x1fff: Stack[-2] = (bool) 0
0x2000: Return(); Pop(0)

0x2001: PushEmpty()
0x2002: PushEmpty(int, string)
0x2003: Stack[-1] = "ood5MladVlad3"
0x2004: Call 0x1bf8

0x2005: Pop(1)
0x2006: Push((int) 0)
0x2007: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2008: IF (Stack[-1] == 0) GOTO 0x200b; Pop(1)

0x2009: Stack[-2] = (bool) 1
0x200a: Return(); Pop(0)

0x200b: Stack[-2] = (bool) 0
0x200c: Return(); Pop(0)

0x200d: PushEmpty()
0x200e: PushEmpty(int, string)
0x200f: Stack[-1] = "d6q02GorbunDeath"
0x2010: Call 0x1bf8

0x2011: Pop(1)
0x2012: Push((int) 0)
0x2013: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x2014: IF (Stack[-1] == 0) GOTO 0x2017; Pop(1)

0x2015: Stack[-2] = (bool) 1
0x2016: Return(); Pop(0)

0x2017: Stack[-2] = (bool) 0
0x2018: Return(); Pop(0)

0x2019: PushEmpty()
0x201a: PushEmpty(int, string)
0x201b: Stack[-1] = "d6q02Trigger"
0x201c: Call 0x1bf8

0x201d: Pop(1)
0x201e: Push((int) 0)
0x201f: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x2020: IF (Stack[-1] == 0) GOTO 0x2023; Pop(1)

0x2021: Stack[-2] = (bool) 1
0x2022: Return(); Pop(0)

0x2023: Stack[-2] = (bool) 0
0x2024: Return(); Pop(0)

0x2025: PushEmpty()
0x2026: PushEmpty(int, string)
0x2027: Stack[-1] = "d8q01"
0x2028: Call 0x1bf8

0x2029: Pop(1)
0x202a: Push((int) 1)
0x202b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x202c: IF (Stack[-1] == 0) GOTO 0x202f; Pop(1)

0x202d: Stack[-2] = (bool) 1
0x202e: Return(); Pop(0)

0x202f: Stack[-2] = (bool) 0
0x2030: Return(); Pop(0)

0x2031: PushEmpty()
0x2032: PushEmpty(int, string)
0x2033: Stack[-1] = "d8q01MladVladIsBad"
0x2034: Call 0x1bf8

0x2035: Pop(1)
0x2036: Push((int) 1)
0x2037: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2038: IF (Stack[-1] == 0) GOTO 0x203b; Pop(1)

0x2039: Stack[-2] = (bool) 1
0x203a: Return(); Pop(0)

0x203b: Stack[-2] = (bool) 0
0x203c: Return(); Pop(0)

0x203d: PushEmpty()
0x203e: PushEmpty(int, string)
0x203f: Stack[-1] = "ood8MladVlad1"
0x2040: Call 0x1bf8

0x2041: Pop(1)
0x2042: Push((int) 0)
0x2043: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2044: IF (Stack[-1] == 0) GOTO 0x2047; Pop(1)

0x2045: Stack[-2] = (bool) 1
0x2046: Return(); Pop(0)

0x2047: Stack[-2] = (bool) 0
0x2048: Return(); Pop(0)

0x2049: PushEmpty()
0x204a: PushEmpty(int, string)
0x204b: Stack[-1] = "ood8MladVlad2"
0x204c: Call 0x1bf8

0x204d: Pop(1)
0x204e: Push((int) 0)
0x204f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2050: IF (Stack[-1] == 0) GOTO 0x2053; Pop(1)

0x2051: Stack[-2] = (bool) 1
0x2052: Return(); Pop(0)

0x2053: Stack[-2] = (bool) 0
0x2054: Return(); Pop(0)

0x2055: PushEmpty()
0x2056: PushEmpty(int, string)
0x2057: Stack[-1] = "d8q01BringBadBoy"
0x2058: Call 0x1bf8

0x2059: Pop(1)
0x205a: Push((int) 1)
0x205b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x205c: IF (Stack[-1] == 0) GOTO 0x205f; Pop(1)

0x205d: Stack[-2] = (bool) 1
0x205e: Return(); Pop(0)

0x205f: Stack[-2] = (bool) 0
0x2060: Return(); Pop(0)

0x2061: PushEmpty()
0x2062: PushEmpty(int, string)
0x2063: Stack[-1] = "ood8MladVlad3"
0x2064: Call 0x1bf8

0x2065: Pop(1)
0x2066: Push((int) 0)
0x2067: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2068: IF (Stack[-1] == 0) GOTO 0x206b; Pop(1)

0x2069: Stack[-2] = (bool) 1
0x206a: Return(); Pop(0)

0x206b: Stack[-2] = (bool) 0
0x206c: Return(); Pop(0)

0x206d: PushEmpty()
0x206e: PushEmpty(int, string)
0x206f: Stack[-1] = "ood8MladVlad4"
0x2070: Call 0x1bf8

0x2071: Pop(1)
0x2072: Push((int) 0)
0x2073: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2074: IF (Stack[-1] == 0) GOTO 0x2077; Pop(1)

0x2075: Stack[-2] = (bool) 1
0x2076: Return(); Pop(0)

0x2077: Stack[-2] = (bool) 0
0x2078: Return(); Pop(0)

0x2079: PushEmpty()
0x207a: PushEmpty(int, string)
0x207b: Stack[-1] = "ood8MladVlad5"
0x207c: Call 0x1bf8

0x207d: Pop(1)
0x207e: Push((int) 0)
0x207f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2080: IF (Stack[-1] == 0) GOTO 0x2083; Pop(1)

0x2081: Stack[-2] = (bool) 1
0x2082: Return(); Pop(0)

0x2083: Stack[-2] = (bool) 0
0x2084: Return(); Pop(0)

0x2085: PushEmpty()
0x2086: PushEmpty(int, string)
0x2087: Stack[-1] = "KnowBigVlad"
0x2088: Call 0x1bf8

0x2089: Pop(1)
0x208a: Push((int) 1)
0x208b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x208c: IF (Stack[-1] == 0) GOTO 0x208f; Pop(1)

0x208d: Stack[-2] = (bool) 1
0x208e: Return(); Pop(0)

0x208f: Stack[-2] = (bool) 0
0x2090: Return(); Pop(0)

0x2091: PushEmpty()
0x2092: PushEmpty(int, string)
0x2093: Stack[-1] = "KnowGrif"
0x2094: Call 0x1bf8

0x2095: Pop(1)
0x2096: Push((int) 1)
0x2097: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2098: IF (Stack[-1] == 0) GOTO 0x209b; Pop(1)

0x2099: Stack[-2] = (bool) 1
0x209a: Return(); Pop(0)

0x209b: Stack[-2] = (bool) 0
0x209c: Return(); Pop(0)

0x209d: PushEmpty()
0x209e: PushEmpty(int, string)
0x209f: Stack[-1] = "KnowKaterina"
0x20a0: Call 0x1bf8

0x20a1: Pop(1)
0x20a2: Push((int) 1)
0x20a3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x20a4: IF (Stack[-1] == 0) GOTO 0x20a7; Pop(1)

0x20a5: Stack[-2] = (bool) 1
0x20a6: Return(); Pop(0)

0x20a7: Stack[-2] = (bool) 0
0x20a8: Return(); Pop(0)

0x20a9: PushEmpty()
0x20aa: PushEmpty(int, string)
0x20ab: Stack[-1] = "KnowLara"
0x20ac: Call 0x1bf8

0x20ad: Pop(1)
0x20ae: Push((int) 1)
0x20af: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x20b0: IF (Stack[-1] == 0) GOTO 0x20b3; Pop(1)

0x20b1: Stack[-2] = (bool) 1
0x20b2: Return(); Pop(0)

0x20b3: Stack[-2] = (bool) 0
0x20b4: Return(); Pop(0)

0x20b5: PushEmpty()
0x20b6: PushEmpty(int, string)
0x20b7: Stack[-1] = "ood1MladVlad5"
0x20b8: Call 0x1bf8

0x20b9: Pop(1)
0x20ba: Push((int) 0)
0x20bb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x20bc: IF (Stack[-1] == 0) GOTO 0x20bf; Pop(1)

0x20bd: Stack[-2] = (bool) 1
0x20be: Return(); Pop(0)

0x20bf: Stack[-2] = (bool) 0
0x20c0: Return(); Pop(0)

0x20c1: PushEmpty()
0x20c2: PushEmpty(int, string)
0x20c3: Stack[-1] = "ood1MladVlad6"
0x20c4: Call 0x1bf8

0x20c5: Pop(1)
0x20c6: Push((int) 0)
0x20c7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x20c8: IF (Stack[-1] == 0) GOTO 0x20cb; Pop(1)

0x20c9: Stack[-2] = (bool) 1
0x20ca: Return(); Pop(0)

0x20cb: Stack[-2] = (bool) 0
0x20cc: Return(); Pop(0)

0x20cd: PushEmpty()
0x20ce: PushEmpty(int, string)
0x20cf: Stack[-1] = "ood1MladVlad7"
0x20d0: Call 0x1bf8

0x20d1: Pop(1)
0x20d2: Push((int) 0)
0x20d3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x20d4: IF (Stack[-1] == 0) GOTO 0x20d7; Pop(1)

0x20d5: Stack[-2] = (bool) 1
0x20d6: Return(); Pop(0)

0x20d7: Stack[-2] = (bool) 0
0x20d8: Return(); Pop(0)

0x20d9: PushEmpty()
0x20da: PushEmpty(int, string)
0x20db: Stack[-1] = "ood1MladVlad8"
0x20dc: Call 0x1bf8

0x20dd: Pop(1)
0x20de: Push((int) 0)
0x20df: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x20e0: IF (Stack[-1] == 0) GOTO 0x20e3; Pop(1)

0x20e1: Stack[-2] = (bool) 1
0x20e2: Return(); Pop(0)

0x20e3: Stack[-2] = (bool) 0
0x20e4: Return(); Pop(0)

0x20e5: PushEmpty()
0x20e6: PushEmpty(int, string)
0x20e7: Stack[-1] = "ood1MladVlad9"
0x20e8: Call 0x1bf8

0x20e9: Pop(1)
0x20ea: Push((int) 0)
0x20eb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x20ec: IF (Stack[-1] == 0) GOTO 0x20ef; Pop(1)

0x20ed: Stack[-2] = (bool) 1
0x20ee: Return(); Pop(0)

0x20ef: Stack[-2] = (bool) 0
0x20f0: Return(); Pop(0)

0x20f1: PushEmpty()
0x20f2: PushEmpty(int, string)
0x20f3: Stack[-1] = "ood1MladVlad10"
0x20f4: Call 0x1bf8

0x20f5: Pop(1)
0x20f6: Push((int) 0)
0x20f7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x20f8: IF (Stack[-1] == 0) GOTO 0x20fb; Pop(1)

0x20f9: Stack[-2] = (bool) 1
0x20fa: Return(); Pop(0)

0x20fb: Stack[-2] = (bool) 0
0x20fc: Return(); Pop(0)

0x20fd: PushEmpty()
0x20fe: PushEmpty(int, string)
0x20ff: Stack[-1] = "ood1MladVlad11"
0x2100: Call 0x1bf8

0x2101: Pop(1)
0x2102: Push((int) 0)
0x2103: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2104: IF (Stack[-1] == 0) GOTO 0x2107; Pop(1)

0x2105: Stack[-2] = (bool) 1
0x2106: Return(); Pop(0)

0x2107: Stack[-2] = (bool) 0
0x2108: Return(); Pop(0)

0x2109: PushEmpty()
0x210a: PushEmpty(int, string)
0x210b: Stack[-1] = "ood1MladVlad12"
0x210c: Call 0x1bf8

0x210d: Pop(1)
0x210e: Push((int) 0)
0x210f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2110: IF (Stack[-1] == 0) GOTO 0x2113; Pop(1)

0x2111: Stack[-2] = (bool) 1
0x2112: Return(); Pop(0)

0x2113: Stack[-2] = (bool) 0
0x2114: Return(); Pop(0)

0x2115: PushEmpty()
0x2116: PushEmpty(int, string)
0x2117: Stack[-1] = "KnowMaria"
0x2118: Call 0x1bf8

0x2119: Pop(1)
0x211a: Push((int) 1)
0x211b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x211c: IF (Stack[-1] == 0) GOTO 0x211f; Pop(1)

0x211d: Stack[-2] = (bool) 1
0x211e: Return(); Pop(0)

0x211f: Stack[-2] = (bool) 0
0x2120: Return(); Pop(0)

0x2121: PushEmpty()
0x2122: PushEmpty(int, string)
0x2123: Stack[-1] = "KnowOspina"
0x2124: Call 0x1bf8

0x2125: Pop(1)
0x2126: Push((int) 1)
0x2127: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2128: IF (Stack[-1] == 0) GOTO 0x212b; Pop(1)

0x2129: Stack[-2] = (bool) 1
0x212a: Return(); Pop(0)

0x212b: Stack[-2] = (bool) 0
0x212c: Return(); Pop(0)

0x212d: PushEmpty()
0x212e: PushEmpty(int, string)
0x212f: Stack[-1] = "KnowKapella"
0x2130: Call 0x1bf8

0x2131: Pop(1)
0x2132: Push((int) 1)
0x2133: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2134: IF (Stack[-1] == 0) GOTO 0x2137; Pop(1)

0x2135: Stack[-2] = (bool) 1
0x2136: Return(); Pop(0)

0x2137: Stack[-2] = (bool) 0
0x2138: Return(); Pop(0)

0x2139: PushEmpty()
0x213a: PushEmpty(int, string)
0x213b: Stack[-1] = "KnowMyth"
0x213c: Call 0x1bf8

0x213d: Pop(1)
0x213e: Push((int) 1)
0x213f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2140: IF (Stack[-1] == 0) GOTO 0x2143; Pop(1)

0x2141: Stack[-2] = (bool) 1
0x2142: Return(); Pop(0)

0x2143: Stack[-2] = (bool) 0
0x2144: Return(); Pop(0)

0x2145: PushEmpty()
0x2146: PushEmpty(int, string)
0x2147: Stack[-1] = "KnowTermitnik"
0x2148: Call 0x1bf8

0x2149: Pop(1)
0x214a: Push((int) 1)
0x214b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x214c: IF (Stack[-1] == 0) GOTO 0x214f; Pop(1)

0x214d: Stack[-2] = (bool) 1
0x214e: Return(); Pop(0)

0x214f: Stack[-2] = (bool) 0
0x2150: Return(); Pop(0)

0x2151: PushEmpty()
0x2152: PushEmpty(int, string)
0x2153: Stack[-1] = "KnowTaurusProject"
0x2154: Call 0x1bf8

0x2155: Pop(1)
0x2156: Push((int) 1)
0x2157: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2158: IF (Stack[-1] == 0) GOTO 0x215b; Pop(1)

0x2159: Stack[-2] = (bool) 1
0x215a: Return(); Pop(0)

0x215b: Stack[-2] = (bool) 0
0x215c: Return(); Pop(0)

0x215d: PushEmpty()
0x215e: PushEmpty(int, string)
0x215f: Stack[-1] = "ood1MladVlad1"
0x2160: Call 0x1bf8

0x2161: Pop(1)
0x2162: Push((int) 0)
0x2163: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2164: IF (Stack[-1] == 0) GOTO 0x2167; Pop(1)

0x2165: Stack[-2] = (bool) 1
0x2166: Return(); Pop(0)

0x2167: Stack[-2] = (bool) 0
0x2168: Return(); Pop(0)

0x2169: PushEmpty()
0x216a: PushEmpty(int, string)
0x216b: Stack[-1] = "ood1MladVlad2"
0x216c: Call 0x1bf8

0x216d: Pop(1)
0x216e: Push((int) 0)
0x216f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2170: IF (Stack[-1] == 0) GOTO 0x2173; Pop(1)

0x2171: Stack[-2] = (bool) 1
0x2172: Return(); Pop(0)

0x2173: Stack[-2] = (bool) 0
0x2174: Return(); Pop(0)

0x2175: PushEmpty()
0x2176: PushEmpty(int, string)
0x2177: Stack[-1] = "ood1MladVlad3"
0x2178: Call 0x1bf8

0x2179: Pop(1)
0x217a: Push((int) 0)
0x217b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x217c: IF (Stack[-1] == 0) GOTO 0x217f; Pop(1)

0x217d: Stack[-2] = (bool) 1
0x217e: Return(); Pop(0)

0x217f: Stack[-2] = (bool) 0
0x2180: Return(); Pop(0)

0x2181: PushEmpty()
0x2182: Stack[-2] = (bool) 0
0x2183: Return(); Pop(0)

0x2184: PushEmpty(object, object)
0x2185: @ GetDiaryRoot(Stack[-1])
0x2186: Pop(0)
0x2187: Pop(0); Push((bool) Stack[-1] == 0)
0x2188: IF (Stack[-1] == 0) GOTO 0x218e; Pop(1)

0x2189: Push("Can't retrieve diary root")
0x218a: @ Trace(Stack[-1])
0x218b: Pop(1)
0x218c: Stack[-3] = (bool) 0
0x218d: Return(); Pop(2)

0x218e: Stack[-3] = Stack[-1]
0x218f: Return(); Pop(2)

0x2190: Stack[-1] = 0
0x2191: PushEmpty(object, object, int, object, object, int)
0x2192: PushEmpty(object)
0x2193: Call 0x2184

0x2194: Stack[-4] = Stack[-1]
0x2195: Pop(1)
0x2196: @@ Find(Stack[-7], Stack[-2])
0x2197: Pop(0)
0x2198: Pop(0); Push((bool) Stack[-2] == 0)
0x2199: IF (Stack[-1] == 0) GOTO 0x21a0; Pop(1)

0x219a: Push("Can't find diary parent with id: ")
0x219b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x219c: @ Trace(Stack[-1])
0x219d: Pop(1)
0x219e: Stack[-9] = (bool) 0
0x219f: Return(); Pop(6)

0x21a0: @@ AddChild(Stack[-8])
0x21a1: Pop(0)
0x21a2: Push("player_diary")
0x21a3: Push((int) 1)
0x21a4: @ SetVariable(Stack[-2], Stack[-1])
0x21a5: Pop(2)
0x21a6: @@ GetCategory(Stack[-1])
0x21a7: Pop(0)
0x21a8: @ SetDiarySection(Stack[-1])
0x21a9: Pop(0)
0x21aa: Stack[-9] = (bool) 0
0x21ab: Return(); Pop(6)

0x21ac: Stack[-2] = 0
0x21ad: Stack[-3] = 0
0x21ae: PushEmpty(object, object, object, object)
0x21af: @ GetMainOutdoorScene(Stack[-2])
0x21b0: Pop(0)
0x21b1: Pop(0); Push((bool) Stack[-2] == 0)
0x21b2: IF (Stack[-1] == 0) GOTO 0x21b9; Pop(1)

0x21b3: Push("Can't find main outdoor scene")
0x21b4: @ Trace(Stack[-1])
0x21b5: Pop(1)
0x21b6: Stack[-1] = 0
0x21b7: Stack[-5] = Stack[-1]
0x21b8: Return(); Pop(4)

0x21b9: @@ GetMap(Stack[-1])
0x21ba: Pop(0)
0x21bb: Stack[-5] = Stack[-1]
0x21bc: Return(); Pop(4)

0x21bd: Stack[-1] = 0
0x21be: Stack[-2] = 0
0x21bf: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x21c0: @ GetMainOutdoorScene(Stack[-2])
0x21c1: Pop(0)
0x21c2: Pop(0); Push((bool) Stack[-2] == 0)
0x21c3: IF (Stack[-1] == 0) GOTO 0x21c8; Pop(1)

0x21c4: Push("Can't find main outdoor scene")
0x21c5: @ Trace(Stack[-1])
0x21c6: Pop(1)
0x21c7: Return(); Pop(8)

0x21c8: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x21c9: Pop(0)
0x21ca: Pop(0); Push((bool) Stack[-1] == 0)
0x21cb: IF (Stack[-1] == 0) GOTO 0x21d2; Pop(1)

0x21cc: Push("Warning: outdoor scene locator ")
0x21cd: Pop(1); Push(Stack[-1] + Stack[-11]);
0x21ce: Push(" doesnt exist")
0x21cf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x21d0: @ Trace(Stack[-1])
0x21d1: Pop(1)
0x21d2: @@ GetMap(Stack[-11])
0x21d3: Pop(0)
0x21d4: Pop(0); Push((bool) Stack[-11] == 0)
0x21d5: IF (Stack[-1] == 0) GOTO 0x21da; Pop(1)

0x21d6: Push("Can't find map")
0x21d7: @ Trace(Stack[-1])
0x21d8: Pop(1)
0x21d9: Return(); Pop(8)

0x21da: Push(CvectorIndex(Stack[-4], 0))
0x21db: Push(CvectorIndex(Stack[-5], 2))
0x21dc: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x21dd: Pop(2)
0x21de: Return(); Pop(8)

0x21df: Stack[-2] = 0
0x21e0: PushEmpty(int, int)
0x21e1: Push("player")
0x21e2: @ GetVariable(Stack[-1], Stack[-2])
0x21e3: Pop(1)
0x21e4: Push((int) 0)
0x21e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x21e6: IF (Stack[-1] == 0) GOTO 0x21ea; Pop(1)

0x21e7: Stack[-3] = (int) 200001
0x21e8: Return(); Pop(2)

0x21e9: GOTO 0x21ef

0x21ea: Push((int) 1)
0x21eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x21ec: IF (Stack[-1] == 0) GOTO 0x21ef; Pop(1)

0x21ed: Stack[-3] = (int) 200002
0x21ee: Return(); Pop(2)

0x21ef: Stack[-3] = (int) 200003
0x21f0: Return(); Pop(2)

0x21f1: PushEmpty(object, object)
0x21f2: Push("Adding diary entry")
0x21f3: @ Trace(Stack[-1])
0x21f4: Pop(1)
0x21f5: Push((int) 37)
0x21f6: Push((int) 2)
0x21f7: Push((int) 12119)
0x21f8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x21f9: Pop(3)
0x21fa: PushEmpty(bool, object, int)
0x21fb: Stack[-2] = Stack[-4]
0x21fc: Stack[-1] = (int) -1
0x21fd: Call 0x2191

0x21fe: Pop(3)
0x21ff: Return(); Pop(2)

0x2200: Stack[-1] = 0
0x2201: PushEmpty(object, object)
0x2202: Push("Adding diary entry")
0x2203: @ Trace(Stack[-1])
0x2204: Pop(1)
0x2205: Push((int) 78)
0x2206: Push((int) 2)
0x2207: Push((int) 12160)
0x2208: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2209: Pop(3)
0x220a: PushEmpty(bool, object, int)
0x220b: Stack[-2] = Stack[-4]
0x220c: Stack[-1] = (int) 26
0x220d: Call 0x2191

0x220e: Pop(3)
0x220f: Return(); Pop(2)

0x2210: Stack[-1] = 0
0x2211: PushEmpty(object, object)
0x2212: Push("Adding diary entry")
0x2213: @ Trace(Stack[-1])
0x2214: Pop(1)
0x2215: Push((int) 137)
0x2216: Push((int) 1)
0x2217: Push((int) 15323)
0x2218: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2219: Pop(3)
0x221a: PushEmpty(bool, object, int)
0x221b: Stack[-2] = Stack[-4]
0x221c: Stack[-1] = (int) 20
0x221d: Call 0x2191

0x221e: Pop(3)
0x221f: Return(); Pop(2)

0x2220: Stack[-1] = 0
0x2221: PushEmpty(object, object)
0x2222: Push("Adding diary entry")
0x2223: @ Trace(Stack[-1])
0x2224: Pop(1)
0x2225: Push((int) 21)
0x2226: Push((int) 2)
0x2227: Push((int) 3361)
0x2228: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2229: Pop(3)
0x222a: PushEmpty(bool, object, int)
0x222b: Stack[-2] = Stack[-4]
0x222c: Stack[-1] = (int) -1
0x222d: Call 0x2191

0x222e: Pop(3)
0x222f: Return(); Pop(2)

0x2230: Stack[-1] = 0
0x2231: PushEmpty(object, object)
0x2232: Push("Adding diary entry")
0x2233: @ Trace(Stack[-1])
0x2234: Pop(1)
0x2235: Push((int) 92)
0x2236: Push((int) 2)
0x2237: Push((int) 12174)
0x2238: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2239: Pop(3)
0x223a: PushEmpty(bool, object, int)
0x223b: Stack[-2] = Stack[-4]
0x223c: Stack[-1] = (int) 21
0x223d: Call 0x2191

0x223e: Pop(3)
0x223f: Return(); Pop(2)

0x2240: Stack[-1] = 0
0x2241: PushEmpty(object, object)
0x2242: Push("Adding diary entry")
0x2243: @ Trace(Stack[-1])
0x2244: Pop(1)
0x2245: Push((int) 148)
0x2246: Push((int) 2)
0x2247: Push((int) 15354)
0x2248: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2249: Pop(3)
0x224a: PushEmpty(bool, object, int)
0x224b: Stack[-2] = Stack[-4]
0x224c: Stack[-1] = (int) -1
0x224d: Call 0x2191

0x224e: Pop(3)
0x224f: Return(); Pop(2)

0x2250: Stack[-1] = 0
0x2251: PushEmpty(object, object)
0x2252: Push("Adding diary entry")
0x2253: @ Trace(Stack[-1])
0x2254: Pop(1)
0x2255: Push((int) 102)
0x2256: Push((int) 2)
0x2257: Push((int) 13725)
0x2258: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2259: Pop(3)
0x225a: PushEmpty(bool, object, int)
0x225b: Stack[-2] = Stack[-4]
0x225c: Stack[-1] = (int) -1
0x225d: Call 0x2191

0x225e: Pop(3)
0x225f: Return(); Pop(2)

0x2260: Stack[-1] = 0
0x2261: PushEmpty(object, object)
0x2262: Push("Adding diary entry")
0x2263: @ Trace(Stack[-1])
0x2264: Pop(1)
0x2265: Push((int) 104)
0x2266: Push((int) 2)
0x2267: Push((int) 13727)
0x2268: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2269: Pop(3)
0x226a: PushEmpty(bool, object, int)
0x226b: Stack[-2] = Stack[-4]
0x226c: Stack[-1] = (int) 102
0x226d: Call 0x2191

0x226e: Pop(3)
0x226f: Return(); Pop(2)

0x2270: Stack[-1] = 0
0x2271: PushEmpty(object, object)
0x2272: Push("Adding diary entry")
0x2273: @ Trace(Stack[-1])
0x2274: Pop(1)
0x2275: Push((int) 106)
0x2276: Push((int) 2)
0x2277: Push((int) 13729)
0x2278: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2279: Pop(3)
0x227a: PushEmpty(bool, object, int)
0x227b: Stack[-2] = Stack[-4]
0x227c: Stack[-1] = (int) 102
0x227d: Call 0x2191

0x227e: Pop(3)
0x227f: Return(); Pop(2)

0x2280: Stack[-1] = 0
0x2281: PushEmpty(object, object)
0x2282: Push("Adding diary entry")
0x2283: @ Trace(Stack[-1])
0x2284: Pop(1)
0x2285: Push((int) 110)
0x2286: Push((int) 2)
0x2287: Push((int) 13733)
0x2288: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2289: Pop(3)
0x228a: PushEmpty(bool, object, int)
0x228b: Stack[-2] = Stack[-4]
0x228c: Stack[-1] = (int) 107
0x228d: Call 0x2191

0x228e: Pop(3)
0x228f: Return(); Pop(2)

0x2290: Stack[-1] = 0
0x2291: PushEmpty(object, object)
0x2292: Push("Adding diary entry")
0x2293: @ Trace(Stack[-1])
0x2294: Pop(1)
0x2295: Push((int) 177)
0x2296: Push((int) 1)
0x2297: Push((int) 15436)
0x2298: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2299: Pop(3)
0x229a: PushEmpty(bool, object, int)
0x229b: Stack[-2] = Stack[-4]
0x229c: Stack[-1] = (int) 175
0x229d: Call 0x2191

0x229e: Pop(3)
0x229f: Return(); Pop(2)

0x22a0: Stack[-1] = 0
0x22a1: Push(GlobalVars[1])
0x22a2: Stack[-1] = (bool) 0
0x22a3: GlobalVars[1] = Stack[-1]; Pop(1)
0x22a4: Return(); Pop(0)

0x22a5: PushEmpty()
0x22a6: Push(GlobalVars[1])
0x22a7: Pop(1); Push((bool) Stack[-1] == 0)
0x22a8: IF (Stack[-1] == 0) GOTO 0x22b2; Pop(1)

0x22a9: PushEmpty(int, object)
0x22aa: Stack[-1] = Stack[-3]
0x22ab: Push(-2, 1); TaskCall(2)
0x22ac: Call 0x31

0x22ad: Pop(-2, 1); TaskReturn
0x22ae: Pop(2)
0x22af: Push(GlobalVars[1])
0x22b0: Stack[-1] = (bool) 1
0x22b1: GlobalVars[1] = Stack[-1]; Pop(1)
0x22b2: PushEmpty(bool, int)
0x22b3: Stack[-1] = (int) 1
0x22b4: Call 0x1c2d

0x22b5: Pop(1)
0x22b6: IF (Stack[-1] == 0) GOTO 0x22be; Pop(1)

0x22b7: PushEmpty(int, object)
0x22b8: Stack[-1] = Stack[-3]
0x22b9: Push(-2, 1); TaskCall(4)
0x22ba: Call 0x12b

0x22bb: Pop(-2, 1); TaskReturn
0x22bc: Pop(2)
0x22bd: Return(); Pop(0)

0x22be: PushEmpty(bool, int)
0x22bf: Stack[-1] = (int) 2
0x22c0: Call 0x1c2d

0x22c1: Pop(1)
0x22c2: IF (Stack[-1] == 0) GOTO 0x22ca; Pop(1)

0x22c3: PushEmpty(int, object)
0x22c4: Stack[-1] = Stack[-3]
0x22c5: Push(-2, 1); TaskCall(6)
0x22c6: Call 0x79a

0x22c7: Pop(-2, 1); TaskReturn
0x22c8: Pop(2)
0x22c9: Return(); Pop(0)

0x22ca: PushEmpty(bool, int)
0x22cb: Stack[-1] = (int) 3
0x22cc: Call 0x1c2d

0x22cd: Pop(1)
0x22ce: IF (Stack[-1] == 0) GOTO 0x22d6; Pop(1)

0x22cf: PushEmpty(int, object)
0x22d0: Stack[-1] = Stack[-3]
0x22d1: Push(-2, 1); TaskCall(8)
0x22d2: Call 0xb8e

0x22d3: Pop(-2, 1); TaskReturn
0x22d4: Pop(2)
0x22d5: Return(); Pop(0)

0x22d6: PushEmpty(bool, int)
0x22d7: Stack[-1] = (int) 4
0x22d8: Call 0x1c2d

0x22d9: Pop(1)
0x22da: IF (Stack[-1] == 0) GOTO 0x22e2; Pop(1)

0x22db: PushEmpty(int, object)
0x22dc: Stack[-1] = Stack[-3]
0x22dd: Push(-2, 1); TaskCall(10)
0x22de: Call 0xe18

0x22df: Pop(-2, 1); TaskReturn
0x22e0: Pop(2)
0x22e1: Return(); Pop(0)

0x22e2: PushEmpty(bool, int)
0x22e3: Stack[-1] = (int) 5
0x22e4: Call 0x1c2d

0x22e5: Pop(1)
0x22e6: IF (Stack[-1] == 0) GOTO 0x22ee; Pop(1)

0x22e7: PushEmpty(int, object)
0x22e8: Stack[-1] = Stack[-3]
0x22e9: Push(-2, 1); TaskCall(12)
0x22ea: Call 0x1207

0x22eb: Pop(-2, 1); TaskReturn
0x22ec: Pop(2)
0x22ed: Return(); Pop(0)

0x22ee: PushEmpty(bool, int)
0x22ef: Stack[-1] = (int) 6
0x22f0: Call 0x1c2d

0x22f1: Pop(1)
0x22f2: IF (Stack[-1] == 0) GOTO 0x22fa; Pop(1)

0x22f3: PushEmpty(int, object)
0x22f4: Stack[-1] = Stack[-3]
0x22f5: Push(-2, 1); TaskCall(14)
0x22f6: Call 0x1484

0x22f7: Pop(-2, 1); TaskReturn
0x22f8: Pop(2)
0x22f9: Return(); Pop(0)

0x22fa: PushEmpty(bool, int)
0x22fb: Stack[-1] = (int) 8
0x22fc: Call 0x1c2d

0x22fd: Pop(1)
0x22fe: IF (Stack[-1] == 0) GOTO 0x2306; Pop(1)

0x22ff: PushEmpty(int, object)
0x2300: Stack[-1] = Stack[-3]
0x2301: Push(-2, 1); TaskCall(16)
0x2302: Call 0x16d7

0x2303: Pop(-2, 1); TaskReturn
0x2304: Pop(2)
0x2305: Return(); Pop(0)

0x2306: PushEmpty(bool)
0x2307: Call 0x1c33

0x2308: Pop(1)
0x2309: Return(); Pop(0)

