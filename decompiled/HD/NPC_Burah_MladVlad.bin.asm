GlobalVarCount = 4
	G_VAR_0 string 
	G_VAR_1 object 
	G_VAR_2 bool 
	G_VAR_3 bool 

Strings:
	player
	ptidle
	all
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Untrust
	SetMessage
	ClearReplies
	AddReply
	Neutral
	Sly
	Rage
	Fear
	GetLocator
	loc
	walk_stopl
	walk_stopr
	GetPosition
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	HasProperty
	m
	Can't find lsh animation : 
	.bin
	.xml
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
	Teleport location '
	' not found in scene '
	pt_
	ui/NPC_MladVlad.png
	ui/NPC_MladVlad_b.png
	pt_map_burah_home
	ShowMap
	oob1MladVlad1
	b1MladVladGotoGrif
	pt_map_grif
	AddMark
	oob1MladVlad2
	b2MladVladBurahHomeTalk
	b2BurahHome
	burah_home@door1
	oob2MladVlad1
	b2TravnikMark
	b2Travnik1
	pt_map_gatherer1
	b2Travnik2
	pt_map_gatherer2
	b2Travnik3
	pt_map_gatherer3
	oob5MladVlad1
	b5q02
	quest_b5_02
	place_prophet
	maze_start
	completed
	money 4000 is given
	kerosene50 is given
	kerosene
	house_vlad
	pt_maze_start
	b8q02
	quest_b8_02
	b8q02_book
	RemoveItemByType
	oob8MladVlad1
	b11q01KnowWhoKilled
	oob11MladVlad1
	quest_b2_01
	place_mladvlad
	money10000 is given
	playsound
	givemoney
	giveitem
	b5MladVladVisit
	money 7000 is given
	recipe2 is given
	recipe2
	recipe3 is given
	recipe3
	mapmark
	b11q01
	KnowGrif
	b1q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	SetTimer (2 args)
	MovePoint (3 args)
	KillTimer (1 args)
	WaitForAnimEnd (1 args)
	Rotate (3 args)
	IsOverrideActive (1 args)
	IsPlayerActor (2 args)
	FindActor (2 args)
	Stop (0 args)
	Sleep (1 args)
	StopAnimation (0 args)
	HasProperty (2 args)
	GetProperty (2 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	HasAnimation (3 args)
	CreateDialog (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	SensePlayerOnly (1 args)
	GetScene (1 args)
	GetHeight (1 args)
	CanReachByPF (2 args)
	GetAnimationOffset (3 args)
	GetPosition (1 args)
	RotateAsync (2 args)
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
	lshStopSpeech (0 args)
	self (1 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	AddBlankActorFromXml (4 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	Trigger (2 args)
	GetSceneByName (2 args)
	Teleport (4 args)
	GetGameTime (1 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x1176
RunTask = 22

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (bool) Params = 3
		EVENT_6 Op = 0x38 Vars = ()
		EVENT_0 Op = 0x45 Vars = (object)
		EVENT_10 Op = 0x59 Vars = (object)
		EVENT_7 Op = 0x6d Vars = (int)
	GTASK_2  Params = 1
		EVENT_6 Op = 0xa2 Vars = ()
		EVENT_0 Op = 0xae Vars = (object)
	GTASK_3  Params = 1
		EVENT_6 Op = 0xf7 Vars = ()
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1f7 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x496 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x732 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9c1 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab0 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbe8 Vars = (int, int)
	GTASK_16 Vars = (object) Params = 2
	GTASK_17 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe6b Vars = (int, int)
	GTASK_18 Vars = (object) Params = 2
	GTASK_19 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x104e Vars = (int, int)
	GTASK_20 Vars = (object) Params = 2
	GTASK_21 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x114c Vars = (int, int)
	GTASK_22 Vars = (float, float, int) Params = 0
		EVENT_6 Op = 0x11f3 Vars = ()
		EVENT_0 Op = 0x11fc Vars = (object)

Events:
EVENT_6 Op = 0x1451 Vars = ()

0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x1245

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(bool, bool)
0xe: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xf: Push((int) 21)
0x10: Push((float)0.5)
0x11: @ SetTimer(Stack[-2], Stack[-1])
0x12: Pop(2)
0x13: PushEmpty(bool, cvector)
0x14: Stack[-1] = Stack[-6]
0x15: Call2 0x1227

0x16: Pop(1)
0x17: Pop(1); Push((bool) Stack[-1] == 0)
0x18: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x19: GOTO 0x13

0x1a: Push((bool) 0)
0x1b: @ MovePoint(Stack[-5], Stack[-1], Stack[-2])
0x1c: Pop(1)
0x1d: Push(Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1f: GOTO 0x21

0x20: GOTO 0x13

0x21: Push((int) 20)
0x22: @ KillTimer(Stack[-1])
0x23: Pop(1)
0x24: Push((int) 21)
0x25: @ KillTimer(Stack[-1])
0x26: Pop(1)
0x27: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x28: @ WaitForAnimEnd(Stack[-1])
0x29: Pop(0)
0x2a: Pop(0); Push((bool) Stack[-1] == 0)
0x2b: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2c: Stack[-5] = (bool) 0
0x2d: Return(); Pop(2)

0x2e: Push(CvectorIndex(Stack[-3], 0))
0x2f: Push(CvectorIndex(Stack[-4], 2))
0x30: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x31: Pop(2)
0x32: Pop(0); Push((bool) Stack[-1] == 0)
0x33: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x34: Stack[-5] = (bool) 0
0x35: Return(); Pop(2)

0x36: Stack[-5] = (bool) 1
0x37: Return(); Pop(2)

0x38: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x39: PushEmpty()
0x3a: Call2 0x91

0x3b: Pop(0)
0x3c: PushEmpty()
0x3d: Call2 0x1451

0x3e: Pop(0)
0x3f: PushEmpty()
0x40: Push(-0, 0); TaskCall(0)
0x41: Call2 0x0

0x42: Pop(-0, 0); TaskReturn
0x43: Pop(0)
0x44: Return(); Pop(0)

0x45: PushEmpty(bool, bool)
0x46: @ IsOverrideActive(Stack[-1])
0x47: Pop(0)
0x48: Pop(0); Push((bool) Stack[-1] == 0)
0x49: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x4a: PushEmpty()
0x4b: Call2 0x91

0x4c: Pop(0)
0x4d: EventDisable(0)
0x4e: PushEmpty(bool, object)
0x4f: Stack[-1] = Stack[-5]
0x50: Call2 0x1231

0x51: Pop(2)
0x52: EventEnable(0)
0x53: PushEmpty(object)
0x54: Stack[-1] = Stack[-4]
0x55: Call2 0x1710

0x56: Pop(1)
0x57: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x58: Return(); Pop(2)

0x59: PushEmpty(bool, bool)
0x5a: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5b: Pop(0)
0x5c: Push(Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x5e: PushEmpty()
0x5f: Call2 0x91

0x60: Pop(0)
0x61: PushEmpty(object)
0x62: Stack[-1] = Stack[-4]
0x63: Push(-1, 0); TaskCall(2)
0x64: Call2 0x94

0x65: Pop(-1, 0); TaskReturn
0x66: Pop(1)
0x67: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x68: Push((int) 20)
0x69: Push((float)10.0)
0x6a: @ SetTimer(Stack[-2], Stack[-1])
0x6b: Pop(2)
0x6c: Return(); Pop(2)

0x6d: PushEmpty(object, object)
0x6e: Push((int) 20)
0x6f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x70: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x71: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x72: Push((int) 20)
0x73: @ KillTimer(Stack[-1])
0x74: Pop(1)
0x75: GOTO 0x90

0x76: Push((int) 21)
0x77: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x79: Push( Stack[0 + Tasks[-1].StackPointer] )
0x7a: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x7b: Push("player")
0x7c: @ FindActor(Stack[-2], Stack[-1])
0x7d: Pop(1)
0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 0
0x80: Push(Stack[-2])
0x81: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x82: PushEmpty(float, object)
0x83: Stack[-1] = Stack[-4]
0x84: Call2 0x1211

0x85: Pop(1)
0x86: Push((float)62500.0)
0x87: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: Stack[-1] = (bool) 1
0x8a: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8b: PushEmpty(object)
0x8c: Stack[-1] = Stack[-2]
0x8d: Call2 0x59

0x8e: Pop(1)
0x8f: Stack[-1] = 0
0x90: Return(); Pop(2)

0x91: @ Stop()
0x92: Pop(0)
0x93: Return(); Pop(0)

0x94: PushEmpty(bool, bool)
0x95: @ WaitForAnimEnd(Stack[-1])
0x96: Pop(0)
0x97: Pop(0); Push((bool) Stack[-1] == 0)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(2)

0x9a: PushEmpty(object)
0x9b: Stack[-1] = Stack[-4]
0x9c: Call2 0x123a

0x9d: Pop(1)
0x9e: Push((int) 6)
0x9f: @ Sleep(Stack[-1])
0xa0: Pop(1)
0xa1: Return(); Pop(2)

0xa2: PushEmpty()
0xa3: Call2 0xc1

0xa4: Pop(0)
0xa5: PushEmpty()
0xa6: Call2 0x1451

0xa7: Pop(0)
0xa8: PushEmpty()
0xa9: Push(-0, 0); TaskCall(0)
0xaa: Call2 0x0

0xab: Pop(-0, 0); TaskReturn
0xac: Pop(0)
0xad: Return(); Pop(0)

0xae: PushEmpty(bool, bool)
0xaf: @ IsOverrideActive(Stack[-1])
0xb0: Pop(0)
0xb1: Pop(0); Push((bool) Stack[-1] == 0)
0xb2: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xb3: PushEmpty()
0xb4: Call2 0xc1

0xb5: Pop(0)
0xb6: EventDisable(0)
0xb7: PushEmpty(bool, object)
0xb8: Stack[-1] = Stack[-5]
0xb9: Call2 0x1231

0xba: Pop(2)
0xbb: EventEnable(0)
0xbc: PushEmpty(object)
0xbd: Stack[-1] = Stack[-4]
0xbe: Call2 0x1710

0xbf: Pop(1)
0xc0: Return(); Pop(2)

0xc1: @ StopGroup0()
0xc2: Pop(0)
0xc3: @ StopAnimation()
0xc4: Pop(0)
0xc5: Return(); Pop(0)

0xc6: PushEmpty(string, bool, string, int, int, int, int, string, bool, string, int, int, int, int)
0xc7: Push(Stack[-15])
0xc8: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc9: Push("ptidle")
0xca: Stack[-8] = Stack[-1] + Stack[-16]; Pop(1);
0xcb: GOTO 0xcd

0xcc: Stack[-7] = "ptidle"
0xcd: @ HasProperty(Stack[-7], Stack[-6])
0xce: Pop(0)
0xcf: Push(Stack[-6])
0xd0: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xd1: @ GetProperty(Stack[-7], Stack[-5])
0xd2: Pop(0)
0xd3: PushEmpty(int, string)
0xd4: Stack[-1] = Stack[-7]
0xd5: Call2 0x108

0xd6: Stack[-6] = Stack[-2]
0xd7: Pop(2)
0xd8: @ irand(Stack[-3], Stack[-4])
0xd9: Pop(0)
0xda: Push("all")
0xdb: PushEmpty(string, string, int)
0xdc: Stack[-2] = Stack[-9]
0xdd: Stack[-1] = Stack[-7]
0xde: Call2 0x100

0xdf: Pop(2)
0xe0: @ PlayAnimation(Stack[-2], Stack[-1])
0xe1: Pop(2)
0xe2: @ WaitForAnimEnd()
0xe3: Pop(0)
0xe4: GOTO 0xf6

0xe5: PushEmpty(int)
0xe6: Call2 0x1433

0xe7: Stack[-3] = Stack[-1]
0xe8: Pop(1)
0xe9: Push(Stack[-2])
0xea: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xeb: @ irand(Stack[-1], Stack[-2])
0xec: Pop(0)
0xed: Push("all")
0xee: PushEmpty(string, int)
0xef: Stack[-1] = Stack[-4]
0xf0: Call2 0x142c

0xf1: Pop(1)
0xf2: @ PlayAnimation(Stack[-2], Stack[-1])
0xf3: Pop(2)
0xf4: @ WaitForAnimEnd()
0xf5: Pop(0)
0xf6: Return(); Pop(14)

0xf7: PushEmpty()
0xf8: Call2 0x1451

0xf9: Pop(0)
0xfa: PushEmpty()
0xfb: Push(-0, 0); TaskCall(0)
0xfc: Call2 0x0

0xfd: Pop(-0, 0); TaskReturn
0xfe: Pop(0)
0xff: Return(); Pop(0)

0x100: PushEmpty()
0x101: Push((int) 0)
0x102: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x104: Stack[-3] = Stack[-2]
0x105: GOTO 0x107

0x106: Stack[-3] = Stack[-2] + Stack[-1]; Pop(0);
0x107: Return(); Pop(0)

0x108: PushEmpty(int, bool, int, bool)
0x109: Stack[-2] = (int) 0
0x10a: Push("all")
0x10b: PushEmpty(string, string, int)
0x10c: Stack[-2] = Stack[-9]
0x10d: Stack[-1] = Stack[-6]
0x10e: Call2 0x100

0x10f: Pop(2)
0x110: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(2)
0x112: Pop(0); Push((bool) Stack[-1] == 0)
0x113: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x114: GOTO 0x118

0x115: Push((int) 1)
0x116: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x117: GOTO 0x10a

0x118: Stack[-6] = Stack[-2]
0x119: Return(); Pop(4)

0x11a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x11b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x11c: PushEmpty(bool, object, float)
0x11d: Stack[-2] = Stack[-12]
0x11e: Stack[-1] = (float) 70.0
0x11f: Call2 0x124a

0x120: Pop(2)
0x121: Pop(1); Push((bool) Stack[-1] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x123: Stack[-10] = (int) -2
0x124: Return(); Pop(8)

0x125: @ CreateDialog(Stack[-4])
0x126: Pop(0)
0x127: PushEmpty(int)
0x128: Call2 0x1454

0x129: Pop(0)
0x12a: @@ SetNPCName(Stack[-1])
0x12b: Pop(1)
0x12c: PushEmpty(int)
0x12d: Call2 0x1452

0x12e: Pop(0)
0x12f: @@ SetNPCDescription(Stack[-1])
0x130: Pop(1)
0x131: PushEmpty(string)
0x132: Call2 0x1456

0x133: Pop(0)
0x134: @@ SetPhoto(Stack[-1])
0x135: Pop(1)
0x136: PushEmpty(string)
0x137: Call2 0x1458

0x138: Pop(0)
0x139: @@ SetPhoto2(Stack[-1])
0x13a: Pop(1)
0x13b: PushEmpty(int)
0x13c: Call2 0x16ff

0x13d: Pop(0)
0x13e: @@ SetPlayerName(Stack[-1])
0x13f: Pop(1)
0x140: Stack[-2] = (int) -1
0x141: @ IsOverrideActive(Stack[-3])
0x142: Pop(0)
0x143: Push(Stack[-3])
0x144: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x145: Stack[-10] = (int) -2
0x146: Return(); Pop(8)

0x147: @ DoDialog(Stack[-4])
0x148: Pop(0)
0x149: PushEmpty(bool, object)
0x14a: PushEmpty(object)
0x14b: Call2 0x1360

0x14c: Stack[-2] = Stack[-1]
0x14d: Pop(1)
0x14e: Call2 0x12a1

0x14f: Pop(2)
0x150: PushEmpty(object, object)
0x151: Stack[-2] = Stack[-11]
0x152: Stack[-1] = Stack[-6]
0x153: Push(-2, 4); TaskCall(5)
0x154: Call2 0x16b

0x155: Pop(-2, 4); TaskReturn
0x156: Pop(2)
0x157: @@ IsDialogEnd(Stack[-1])
0x158: Pop(0)
0x159: Pop(0); Push((bool) Stack[-1] == 0)
0x15a: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15b: @ sync()
0x15c: Pop(0)
0x15d: @@ IsDialogEnd(Stack[-1])
0x15e: Pop(0)
0x15f: GOTO 0x159

0x160: PushEmpty(object)
0x161: Stack[-1] = Stack[-10]
0x162: Call2 0x128f

0x163: Pop(1)
0x164: @ StopDialog(Stack[-4])
0x165: Pop(0)
0x166: @@ GetReturnValue(Stack[-2])
0x167: Pop(0)
0x168: Stack[-10] = Stack[-2]
0x169: Return(); Pop(8)

0x16a: Stack[-4] = 0
0x16b: PushEmpty()
0x16c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x16d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x16e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x16f: Push((int) 1)
0x170: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x171: PushEmpty(bool, object)
0x172: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x173: Call2 0x15e9

0x174: Pop(1)
0x175: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x176: PushEmpty(string)
0x177: Stack[-1] = "Untrust"
0x178: Call2 0x1e1

0x179: Pop(1)
0x17a: Push((int) 520042)
0x17b: @@ SetMessage(Stack[-1])
0x17c: Pop(1)
0x17d: @@ ClearReplies()
0x17e: Pop(0)
0x17f: Push((int) 520043)
0x180: Push((int) 21227)
0x181: Push((int) 21225)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: Push((int) 520044)
0x185: Push((int) -1)
0x186: Push((int) 21226)
0x187: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x188: Pop(3)
0x189: GOTO 0x1c3

0x18a: PushEmpty(bool, object)
0x18b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18c: Call2 0x15f5

0x18d: Pop(1)
0x18e: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x18f: PushEmpty(object, object)
0x190: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x191: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x192: Call2 0x146c

0x193: Pop(2)
0x194: PushEmpty(string)
0x195: Stack[-1] = "Neutral"
0x196: Call2 0x1e1

0x197: Pop(1)
0x198: Push((int) 519876)
0x199: @@ SetMessage(Stack[-1])
0x19a: Pop(1)
0x19b: @@ ClearReplies()
0x19c: Pop(0)
0x19d: Push((int) 519877)
0x19e: Push((int) 21042)
0x19f: Push((int) 21041)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: Push((int) 519905)
0x1a3: Push((int) 21042)
0x1a4: Push((int) 21073)
0x1a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a6: Pop(3)
0x1a7: GOTO 0x1c3

0x1a8: PushEmpty(string)
0x1a9: Stack[-1] = "Neutral"
0x1aa: Call2 0x1e1

0x1ab: Pop(1)
0x1ac: Push((int) 519906)
0x1ad: @@ SetMessage(Stack[-1])
0x1ae: Pop(1)
0x1af: @@ ClearReplies()
0x1b0: Pop(0)
0x1b1: PushEmpty(bool, object)
0x1b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b3: Call2 0x1601

0x1b4: Pop(1)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b6: Push((int) 519907)
0x1b7: Push((int) 21077)
0x1b8: Push((int) 21076)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Push((int) 519917)
0x1bc: Push((int) -1)
0x1bd: Push((int) 21086)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: GOTO 0x1c3

0x1c1: Return(); Pop(0)

0x1c2: GOTO 0x16f

0x1c3: PushEmpty(bool)
0x1c4: Call2 0x145a

0x1c5: Pop(0)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1c7: @ lshWaitForAnimEnd()
0x1c8: Pop(0)
0x1c9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1cb: GOTO 0x1d1

0x1cc: PushEmpty(string)
0x1cd: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1ce: Call2 0x132b

0x1cf: Pop(1)
0x1d0: GOTO 0x1c7

0x1d1: GOTO 0x1e0

0x1d2: Push("all")
0x1d3: Push("idle")
0x1d4: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d5: Pop(2)
0x1d6: @ WaitForAnimEnd()
0x1d7: Pop(0)
0x1d8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1d9: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1da: GOTO 0x1e0

0x1db: Push("all")
0x1dc: Push("idle")
0x1dd: @ PlayAnimation(Stack[-2], Stack[-1])
0x1de: Pop(2)
0x1df: GOTO 0x1d6

0x1e0: Return(); Pop(0)

0x1e1: PushEmpty()
0x1e2: PushEmpty(bool)
0x1e3: Call2 0x145a

0x1e4: Pop(0)
0x1e5: Pop(1); Push((bool) Stack[-1] == 0)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e7: Return(); Pop(0)

0x1e8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1ea: Return(); Pop(0)

0x1eb: PushEmpty(string, bool)
0x1ec: Stack[-2] = Stack[-3]
0x1ed: Push("")
0x1ee: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f0: Stack[-1] = (bool) 0
0x1f1: GOTO 0x1f3

0x1f2: Stack[-1] = (bool) 1
0x1f3: Call2 0x133b

0x1f4: Pop(2)
0x1f5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1f6: Return(); Pop(0)

0x1f7: PushEmpty()
0x1f8: Push((int) 1)
0x1f9: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x1fa: PushEmpty()
0x1fb: Call2 0x1359

0x1fc: Pop(0)
0x1fd: Push((int) 21076)
0x1fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x200: PushEmpty(object, object)
0x201: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x202: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x203: Call2 0x1482

0x204: Pop(2)
0x205: Push((int) 21082)
0x206: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x208: PushEmpty(object, object)
0x209: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x20a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x20b: Call2 0x1472

0x20c: Pop(2)
0x20d: PushEmpty(object, object)
0x20e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x20f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x210: Call2 0x159c

0x211: Pop(2)
0x212: Push((int) 21085)
0x213: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x215: PushEmpty(object, object)
0x216: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x217: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x218: Call2 0x1472

0x219: Pop(2)
0x21a: PushEmpty(object, object)
0x21b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x21c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x21d: Call2 0x159c

0x21e: Pop(2)
0x21f: Push((int) 21224)
0x220: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x222: PushEmpty(bool, object)
0x223: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x224: Call2 0x15e9

0x225: Pop(1)
0x226: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x227: PushEmpty(string)
0x228: Stack[-1] = "Untrust"
0x229: Call2 0x1e1

0x22a: Pop(1)
0x22b: Push((int) 520042)
0x22c: @@ SetMessage(Stack[-1])
0x22d: Pop(1)
0x22e: @@ ClearReplies()
0x22f: Pop(0)
0x230: Push((int) 520043)
0x231: Push((int) 21227)
0x232: Push((int) 21225)
0x233: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x234: Pop(3)
0x235: Push((int) 520044)
0x236: Push((int) -1)
0x237: Push((int) 21226)
0x238: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x239: Pop(3)
0x23a: Return(); Pop(0)

0x23b: PushEmpty(bool, object)
0x23c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23d: Call2 0x15f5

0x23e: Pop(1)
0x23f: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x240: PushEmpty(object, object)
0x241: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x242: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x243: Call2 0x146c

0x244: Pop(2)
0x245: PushEmpty(string)
0x246: Stack[-1] = "Neutral"
0x247: Call2 0x1e1

0x248: Pop(1)
0x249: Push((int) 519876)
0x24a: @@ SetMessage(Stack[-1])
0x24b: Pop(1)
0x24c: @@ ClearReplies()
0x24d: Pop(0)
0x24e: Push((int) 519877)
0x24f: Push((int) 21042)
0x250: Push((int) 21041)
0x251: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x252: Pop(3)
0x253: Push((int) 519905)
0x254: Push((int) 21042)
0x255: Push((int) 21073)
0x256: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x257: Pop(3)
0x258: Return(); Pop(0)

0x259: PushEmpty(string)
0x25a: Stack[-1] = "Neutral"
0x25b: Call2 0x1e1

0x25c: Pop(1)
0x25d: Push((int) 519906)
0x25e: @@ SetMessage(Stack[-1])
0x25f: Pop(1)
0x260: @@ ClearReplies()
0x261: Pop(0)
0x262: PushEmpty(bool, object)
0x263: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x264: Call2 0x1601

0x265: Pop(1)
0x266: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x267: Push((int) 519907)
0x268: Push((int) 21077)
0x269: Push((int) 21076)
0x26a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26b: Pop(3)
0x26c: Push((int) 519917)
0x26d: Push((int) -1)
0x26e: Push((int) 21086)
0x26f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x270: Pop(3)
0x271: Return(); Pop(0)

0x272: Push((int) 21077)
0x273: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x274: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x275: PushEmpty(string)
0x276: Stack[-1] = "Neutral"
0x277: Call2 0x1e1

0x278: Pop(1)
0x279: Push((int) 519908)
0x27a: @@ SetMessage(Stack[-1])
0x27b: Pop(1)
0x27c: @@ ClearReplies()
0x27d: Pop(0)
0x27e: PushEmpty(bool, object)
0x27f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x280: Call2 0x15dd

0x281: Pop(1)
0x282: Pop(1); Push((bool) Stack[-1] == 0)
0x283: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x284: Push((int) 519909)
0x285: Push((int) 21079)
0x286: Push((int) 21078)
0x287: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x288: Pop(3)
0x289: PushEmpty(bool, object)
0x28a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28b: Call2 0x15dd

0x28c: Pop(1)
0x28d: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x28e: Push((int) 519914)
0x28f: Push((int) 21084)
0x290: Push((int) 21083)
0x291: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x292: Pop(3)
0x293: Return(); Pop(0)

0x294: Push((int) 21084)
0x295: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x296: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x297: PushEmpty(string)
0x298: Stack[-1] = "Neutral"
0x299: Call2 0x1e1

0x29a: Pop(1)
0x29b: Push((int) 519915)
0x29c: @@ SetMessage(Stack[-1])
0x29d: Pop(1)
0x29e: @@ ClearReplies()
0x29f: Pop(0)
0x2a0: Push((int) 519916)
0x2a1: Push((int) -1)
0x2a2: Push((int) 21085)
0x2a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a4: Pop(3)
0x2a5: Return(); Pop(0)

0x2a6: Push((int) 21079)
0x2a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2a9: PushEmpty(string)
0x2aa: Stack[-1] = "Untrust"
0x2ab: Call2 0x1e1

0x2ac: Pop(1)
0x2ad: Push((int) 519910)
0x2ae: @@ SetMessage(Stack[-1])
0x2af: Pop(1)
0x2b0: @@ ClearReplies()
0x2b1: Pop(0)
0x2b2: Push((int) 519911)
0x2b3: Push((int) 21081)
0x2b4: Push((int) 21080)
0x2b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b6: Pop(3)
0x2b7: Return(); Pop(0)

0x2b8: Push((int) 21081)
0x2b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2bb: PushEmpty(string)
0x2bc: Stack[-1] = "Neutral"
0x2bd: Call2 0x1e1

0x2be: Pop(1)
0x2bf: Push((int) 519912)
0x2c0: @@ SetMessage(Stack[-1])
0x2c1: Pop(1)
0x2c2: @@ ClearReplies()
0x2c3: Pop(0)
0x2c4: Push((int) 519913)
0x2c5: Push((int) -1)
0x2c6: Push((int) 21082)
0x2c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c8: Pop(3)
0x2c9: Return(); Pop(0)

0x2ca: Push((int) 21042)
0x2cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2cc: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2cd: PushEmpty(string)
0x2ce: Stack[-1] = "Untrust"
0x2cf: Call2 0x1e1

0x2d0: Pop(1)
0x2d1: Push((int) 519878)
0x2d2: @@ SetMessage(Stack[-1])
0x2d3: Pop(1)
0x2d4: @@ ClearReplies()
0x2d5: Pop(0)
0x2d6: Push((int) 519879)
0x2d7: Push((int) 21044)
0x2d8: Push((int) 21043)
0x2d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2da: Pop(3)
0x2db: Push((int) 519902)
0x2dc: Push((int) 21070)
0x2dd: Push((int) 21069)
0x2de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2df: Pop(3)
0x2e0: Return(); Pop(0)

0x2e1: Push((int) 21070)
0x2e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2e4: PushEmpty(string)
0x2e5: Stack[-1] = "Untrust"
0x2e6: Call2 0x1e1

0x2e7: Pop(1)
0x2e8: Push((int) 519903)
0x2e9: @@ SetMessage(Stack[-1])
0x2ea: Pop(1)
0x2eb: @@ ClearReplies()
0x2ec: Pop(0)
0x2ed: Push((int) 519904)
0x2ee: Push((int) 21044)
0x2ef: Push((int) 21071)
0x2f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f1: Pop(3)
0x2f2: Return(); Pop(0)

0x2f3: Push((int) 21044)
0x2f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x2f6: PushEmpty(string)
0x2f7: Stack[-1] = "Neutral"
0x2f8: Call2 0x1e1

0x2f9: Pop(1)
0x2fa: Push((int) 519880)
0x2fb: @@ SetMessage(Stack[-1])
0x2fc: Pop(1)
0x2fd: @@ ClearReplies()
0x2fe: Pop(0)
0x2ff: Push((int) 519881)
0x300: Push((int) 21046)
0x301: Push((int) 21045)
0x302: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x303: Pop(3)
0x304: Push((int) 519897)
0x305: Push((int) 21064)
0x306: Push((int) 21063)
0x307: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x308: Pop(3)
0x309: Return(); Pop(0)

0x30a: Push((int) 21064)
0x30b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x30d: PushEmpty(string)
0x30e: Stack[-1] = "Sly"
0x30f: Call2 0x1e1

0x310: Pop(1)
0x311: Push((int) 519898)
0x312: @@ SetMessage(Stack[-1])
0x313: Pop(1)
0x314: @@ ClearReplies()
0x315: Pop(0)
0x316: Push((int) 519899)
0x317: Push((int) 21066)
0x318: Push((int) 21065)
0x319: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31a: Pop(3)
0x31b: Return(); Pop(0)

0x31c: Push((int) 21066)
0x31d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x31f: PushEmpty(string)
0x320: Stack[-1] = "Sly"
0x321: Call2 0x1e1

0x322: Pop(1)
0x323: Push((int) 519900)
0x324: @@ SetMessage(Stack[-1])
0x325: Pop(1)
0x326: @@ ClearReplies()
0x327: Pop(0)
0x328: Push((int) 519901)
0x329: Push((int) 21046)
0x32a: Push((int) 21067)
0x32b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32c: Pop(3)
0x32d: Return(); Pop(0)

0x32e: Push((int) 21046)
0x32f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x331: PushEmpty(string)
0x332: Stack[-1] = "Neutral"
0x333: Call2 0x1e1

0x334: Pop(1)
0x335: Push((int) 519882)
0x336: @@ SetMessage(Stack[-1])
0x337: Pop(1)
0x338: @@ ClearReplies()
0x339: Pop(0)
0x33a: Push((int) 519883)
0x33b: Push((int) 21048)
0x33c: Push((int) 21047)
0x33d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33e: Pop(3)
0x33f: Push((int) 519896)
0x340: Push((int) 21048)
0x341: Push((int) 21061)
0x342: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x343: Pop(3)
0x344: Return(); Pop(0)

0x345: Push((int) 21048)
0x346: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x348: PushEmpty(string)
0x349: Stack[-1] = "Untrust"
0x34a: Call2 0x1e1

0x34b: Pop(1)
0x34c: Push((int) 519884)
0x34d: @@ SetMessage(Stack[-1])
0x34e: Pop(1)
0x34f: @@ ClearReplies()
0x350: Pop(0)
0x351: Push((int) 519885)
0x352: Push((int) 21050)
0x353: Push((int) 21049)
0x354: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x355: Pop(3)
0x356: Push((int) 519893)
0x357: Push((int) 21058)
0x358: Push((int) 21057)
0x359: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35a: Pop(3)
0x35b: Return(); Pop(0)

0x35c: Push((int) 21058)
0x35d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35e: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x35f: PushEmpty(string)
0x360: Stack[-1] = "Neutral"
0x361: Call2 0x1e1

0x362: Pop(1)
0x363: Push((int) 519894)
0x364: @@ SetMessage(Stack[-1])
0x365: Pop(1)
0x366: @@ ClearReplies()
0x367: Pop(0)
0x368: Push((int) 519895)
0x369: Push((int) 21052)
0x36a: Push((int) 21059)
0x36b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36c: Pop(3)
0x36d: Return(); Pop(0)

0x36e: Push((int) 21050)
0x36f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x370: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x371: PushEmpty(string)
0x372: Stack[-1] = "Sly"
0x373: Call2 0x1e1

0x374: Pop(1)
0x375: Push((int) 519886)
0x376: @@ SetMessage(Stack[-1])
0x377: Pop(1)
0x378: @@ ClearReplies()
0x379: Pop(0)
0x37a: Push((int) 519887)
0x37b: Push((int) 21052)
0x37c: Push((int) 21051)
0x37d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37e: Pop(3)
0x37f: Return(); Pop(0)

0x380: Push((int) 21052)
0x381: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x383: PushEmpty(string)
0x384: Stack[-1] = "Neutral"
0x385: Call2 0x1e1

0x386: Pop(1)
0x387: Push((int) 519888)
0x388: @@ SetMessage(Stack[-1])
0x389: Pop(1)
0x38a: @@ ClearReplies()
0x38b: Pop(0)
0x38c: Push((int) 519889)
0x38d: Push((int) 21054)
0x38e: Push((int) 21053)
0x38f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x390: Pop(3)
0x391: Return(); Pop(0)

0x392: Push((int) 21054)
0x393: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x394: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x395: PushEmpty(string)
0x396: Stack[-1] = "Neutral"
0x397: Call2 0x1e1

0x398: Pop(1)
0x399: Push((int) 519890)
0x39a: @@ SetMessage(Stack[-1])
0x39b: Pop(1)
0x39c: @@ ClearReplies()
0x39d: Pop(0)
0x39e: Push((int) 519891)
0x39f: Push((int) -1)
0x3a0: Push((int) 21055)
0x3a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a2: Pop(3)
0x3a3: Push((int) 519892)
0x3a4: Push((int) -1)
0x3a5: Push((int) 21056)
0x3a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a7: Pop(3)
0x3a8: Return(); Pop(0)

0x3a9: Push((int) 21227)
0x3aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3ac: PushEmpty(string)
0x3ad: Stack[-1] = "Untrust"
0x3ae: Call2 0x1e1

0x3af: Pop(1)
0x3b0: Push((int) 520045)
0x3b1: @@ SetMessage(Stack[-1])
0x3b2: Pop(1)
0x3b3: @@ ClearReplies()
0x3b4: Pop(0)
0x3b5: Push((int) 520046)
0x3b6: Push((int) -1)
0x3b7: Push((int) 21228)
0x3b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b9: Pop(3)
0x3ba: Return(); Pop(0)

0x3bb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3bc: PushEmpty(bool)
0x3bd: Call2 0x145a

0x3be: Pop(0)
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c0: @ lshStopAnimation()
0x3c1: Pop(0)
0x3c2: GOTO 0x3c5

0x3c3: @ StopAnimation()
0x3c4: Pop(0)
0x3c5: Return(); Pop(0)

0x3c6: GOTO 0x1f8

0x3c7: Return(); Pop(0)

0x3c8: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3c9: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3ca: PushEmpty(bool, object, float)
0x3cb: Stack[-2] = Stack[-12]
0x3cc: Stack[-1] = (float) 70.0
0x3cd: Call2 0x124a

0x3ce: Pop(2)
0x3cf: Pop(1); Push((bool) Stack[-1] == 0)
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d1: Stack[-10] = (int) -2
0x3d2: Return(); Pop(8)

0x3d3: @ CreateDialog(Stack[-4])
0x3d4: Pop(0)
0x3d5: PushEmpty(int)
0x3d6: Call2 0x1454

0x3d7: Pop(0)
0x3d8: @@ SetNPCName(Stack[-1])
0x3d9: Pop(1)
0x3da: PushEmpty(int)
0x3db: Call2 0x1452

0x3dc: Pop(0)
0x3dd: @@ SetNPCDescription(Stack[-1])
0x3de: Pop(1)
0x3df: PushEmpty(string)
0x3e0: Call2 0x1456

0x3e1: Pop(0)
0x3e2: @@ SetPhoto(Stack[-1])
0x3e3: Pop(1)
0x3e4: PushEmpty(string)
0x3e5: Call2 0x1458

0x3e6: Pop(0)
0x3e7: @@ SetPhoto2(Stack[-1])
0x3e8: Pop(1)
0x3e9: PushEmpty(int)
0x3ea: Call2 0x16ff

0x3eb: Pop(0)
0x3ec: @@ SetPlayerName(Stack[-1])
0x3ed: Pop(1)
0x3ee: Stack[-2] = (int) -1
0x3ef: @ IsOverrideActive(Stack[-3])
0x3f0: Pop(0)
0x3f1: Push(Stack[-3])
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f3: Stack[-10] = (int) -2
0x3f4: Return(); Pop(8)

0x3f5: @ DoDialog(Stack[-4])
0x3f6: Pop(0)
0x3f7: PushEmpty(bool, object)
0x3f8: PushEmpty(object)
0x3f9: Call2 0x1360

0x3fa: Stack[-2] = Stack[-1]
0x3fb: Pop(1)
0x3fc: Call2 0x12a1

0x3fd: Pop(2)
0x3fe: PushEmpty(object, object)
0x3ff: Stack[-2] = Stack[-11]
0x400: Stack[-1] = Stack[-6]
0x401: Push(-2, 4); TaskCall(7)
0x402: Call2 0x419

0x403: Pop(-2, 4); TaskReturn
0x404: Pop(2)
0x405: @@ IsDialogEnd(Stack[-1])
0x406: Pop(0)
0x407: Pop(0); Push((bool) Stack[-1] == 0)
0x408: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x409: @ sync()
0x40a: Pop(0)
0x40b: @@ IsDialogEnd(Stack[-1])
0x40c: Pop(0)
0x40d: GOTO 0x407

0x40e: PushEmpty(object)
0x40f: Stack[-1] = Stack[-10]
0x410: Call2 0x128f

0x411: Pop(1)
0x412: @ StopDialog(Stack[-4])
0x413: Pop(0)
0x414: @@ GetReturnValue(Stack[-2])
0x415: Pop(0)
0x416: Stack[-10] = Stack[-2]
0x417: Return(); Pop(8)

0x418: Stack[-4] = 0
0x419: PushEmpty()
0x41a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x41c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x41d: Push((int) 1)
0x41e: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x41f: PushEmpty(bool, object)
0x420: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x421: Call2 0x160d

0x422: Pop(1)
0x423: Pop(1); Push((bool) Stack[-1] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x425: PushEmpty(object, object)
0x426: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x427: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x428: Call2 0x1553

0x429: Pop(2)
0x42a: PushEmpty(string)
0x42b: Stack[-1] = "Neutral"
0x42c: Call2 0x480

0x42d: Pop(1)
0x42e: Push((int) 520000)
0x42f: @@ SetMessage(Stack[-1])
0x430: Pop(1)
0x431: @@ ClearReplies()
0x432: Pop(0)
0x433: Push((int) 520001)
0x434: Push((int) 21183)
0x435: Push((int) 21182)
0x436: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x437: Pop(3)
0x438: Push((int) 520017)
0x439: Push((int) 21183)
0x43a: Push((int) 21199)
0x43b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43c: Pop(3)
0x43d: GOTO 0x462

0x43e: PushEmpty(string)
0x43f: Stack[-1] = "Neutral"
0x440: Call2 0x480

0x441: Pop(1)
0x442: Push((int) 520019)
0x443: @@ SetMessage(Stack[-1])
0x444: Pop(1)
0x445: @@ ClearReplies()
0x446: Pop(0)
0x447: PushEmpty(bool)
0x448: Stack[-1] = (bool) 0
0x449: PushEmpty(bool, object)
0x44a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x44b: Call2 0x1619

0x44c: Pop(1)
0x44d: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x44e: PushEmpty(bool, object)
0x44f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x450: Call2 0x160d

0x451: Pop(1)
0x452: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x453: Stack[-1] = (bool) 1
0x454: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x455: Push((int) 520020)
0x456: Push((int) 21205)
0x457: Push((int) 21204)
0x458: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x459: Pop(3)
0x45a: Push((int) 520030)
0x45b: Push((int) -1)
0x45c: Push((int) 21214)
0x45d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45e: Pop(3)
0x45f: GOTO 0x462

0x460: Return(); Pop(0)

0x461: GOTO 0x41d

0x462: PushEmpty(bool)
0x463: Call2 0x145a

0x464: Pop(0)
0x465: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x466: @ lshWaitForAnimEnd()
0x467: Pop(0)
0x468: Push( Stack[3 + Tasks[-1].StackPointer] )
0x469: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x46a: GOTO 0x470

0x46b: PushEmpty(string)
0x46c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x46d: Call2 0x132b

0x46e: Pop(1)
0x46f: GOTO 0x466

0x470: GOTO 0x47f

0x471: Push("all")
0x472: Push("idle")
0x473: @ PlayAnimation(Stack[-2], Stack[-1])
0x474: Pop(2)
0x475: @ WaitForAnimEnd()
0x476: Pop(0)
0x477: Push( Stack[3 + Tasks[-1].StackPointer] )
0x478: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x479: GOTO 0x47f

0x47a: Push("all")
0x47b: Push("idle")
0x47c: @ PlayAnimation(Stack[-2], Stack[-1])
0x47d: Pop(2)
0x47e: GOTO 0x475

0x47f: Return(); Pop(0)

0x480: PushEmpty()
0x481: PushEmpty(bool)
0x482: Call2 0x145a

0x483: Pop(0)
0x484: Pop(1); Push((bool) Stack[-1] == 0)
0x485: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x486: Return(); Pop(0)

0x487: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x488: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x489: Return(); Pop(0)

0x48a: PushEmpty(string, bool)
0x48b: Stack[-2] = Stack[-3]
0x48c: Push("")
0x48d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x48e: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x48f: Stack[-1] = (bool) 0
0x490: GOTO 0x492

0x491: Stack[-1] = (bool) 1
0x492: Call2 0x133b

0x493: Pop(2)
0x494: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x495: Return(); Pop(0)

0x496: PushEmpty()
0x497: Push((int) 1)
0x498: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x499: PushEmpty()
0x49a: Call2 0x1359

0x49b: Pop(0)
0x49c: Push((int) 21192)
0x49d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x49e: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x49f: PushEmpty(object, object)
0x4a0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a2: Call2 0x1488

0x4a3: Pop(2)
0x4a4: PushEmpty(object, object)
0x4a5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a7: Call2 0x145c

0x4a8: Pop(2)
0x4a9: PushEmpty(object, object)
0x4aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ac: Call2 0x149c

0x4ad: Pop(2)
0x4ae: Push((int) 21193)
0x4af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b0: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4b1: PushEmpty(object, object)
0x4b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b4: Call2 0x1488

0x4b5: Pop(2)
0x4b6: PushEmpty(object, object)
0x4b7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b9: Call2 0x145c

0x4ba: Pop(2)
0x4bb: PushEmpty(object, object)
0x4bc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4bd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4be: Call2 0x149c

0x4bf: Pop(2)
0x4c0: Push((int) 21194)
0x4c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c2: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4c3: PushEmpty(object, object)
0x4c4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c6: Call2 0x1488

0x4c7: Pop(2)
0x4c8: PushEmpty(object, object)
0x4c9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4cb: Call2 0x145c

0x4cc: Pop(2)
0x4cd: PushEmpty(object, object)
0x4ce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d0: Call2 0x149c

0x4d1: Pop(2)
0x4d2: Push((int) 21204)
0x4d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d4: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d5: PushEmpty(object, object)
0x4d6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4d7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d8: Call2 0x14a3

0x4d9: Pop(2)
0x4da: Push((int) 21212)
0x4db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4dc: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4dd: PushEmpty(object, object)
0x4de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e0: Call2 0x14a9

0x4e1: Pop(2)
0x4e2: PushEmpty(object, object)
0x4e3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e5: Call2 0x159c

0x4e6: Pop(2)
0x4e7: Push((int) 21213)
0x4e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e9: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4ea: PushEmpty(object, object)
0x4eb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ed: Call2 0x14a9

0x4ee: Pop(2)
0x4ef: PushEmpty(object, object)
0x4f0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4f1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f2: Call2 0x159c

0x4f3: Pop(2)
0x4f4: Push((int) 21181)
0x4f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f6: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x4f7: PushEmpty(bool, object)
0x4f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f9: Call2 0x160d

0x4fa: Pop(1)
0x4fb: Pop(1); Push((bool) Stack[-1] == 0)
0x4fc: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x4fd: PushEmpty(object, object)
0x4fe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x500: Call2 0x1553

0x501: Pop(2)
0x502: PushEmpty(string)
0x503: Stack[-1] = "Neutral"
0x504: Call2 0x480

0x505: Pop(1)
0x506: Push((int) 520000)
0x507: @@ SetMessage(Stack[-1])
0x508: Pop(1)
0x509: @@ ClearReplies()
0x50a: Pop(0)
0x50b: Push((int) 520001)
0x50c: Push((int) 21183)
0x50d: Push((int) 21182)
0x50e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50f: Pop(3)
0x510: Push((int) 520017)
0x511: Push((int) 21183)
0x512: Push((int) 21199)
0x513: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x514: Pop(3)
0x515: Return(); Pop(0)

0x516: PushEmpty(string)
0x517: Stack[-1] = "Neutral"
0x518: Call2 0x480

0x519: Pop(1)
0x51a: Push((int) 520019)
0x51b: @@ SetMessage(Stack[-1])
0x51c: Pop(1)
0x51d: @@ ClearReplies()
0x51e: Pop(0)
0x51f: PushEmpty(bool)
0x520: Stack[-1] = (bool) 0
0x521: PushEmpty(bool, object)
0x522: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x523: Call2 0x1619

0x524: Pop(1)
0x525: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x526: PushEmpty(bool, object)
0x527: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x528: Call2 0x160d

0x529: Pop(1)
0x52a: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x52b: Stack[-1] = (bool) 1
0x52c: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x52d: Push((int) 520020)
0x52e: Push((int) 21205)
0x52f: Push((int) 21204)
0x530: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x531: Pop(3)
0x532: Push((int) 520030)
0x533: Push((int) -1)
0x534: Push((int) 21214)
0x535: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x536: Pop(3)
0x537: Return(); Pop(0)

0x538: Push((int) 21205)
0x539: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53a: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x53b: PushEmpty(string)
0x53c: Stack[-1] = "Neutral"
0x53d: Call2 0x480

0x53e: Pop(1)
0x53f: Push((int) 520021)
0x540: @@ SetMessage(Stack[-1])
0x541: Pop(1)
0x542: @@ ClearReplies()
0x543: Pop(0)
0x544: Push((int) 520022)
0x545: Push((int) 21207)
0x546: Push((int) 21206)
0x547: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x548: Pop(3)
0x549: Push((int) 527733)
0x54a: Push((int) 29085)
0x54b: Push((int) 29084)
0x54c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54d: Pop(3)
0x54e: Return(); Pop(0)

0x54f: Push((int) 29085)
0x550: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x551: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x552: PushEmpty(string)
0x553: Stack[-1] = "Neutral"
0x554: Call2 0x480

0x555: Pop(1)
0x556: Push((int) 527734)
0x557: @@ SetMessage(Stack[-1])
0x558: Pop(1)
0x559: @@ ClearReplies()
0x55a: Pop(0)
0x55b: Push((int) 520029)
0x55c: Push((int) -1)
0x55d: Push((int) 21213)
0x55e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55f: Pop(3)
0x560: Return(); Pop(0)

0x561: Push((int) 21207)
0x562: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x563: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x564: PushEmpty(string)
0x565: Stack[-1] = "Untrust"
0x566: Call2 0x480

0x567: Pop(1)
0x568: Push((int) 520023)
0x569: @@ SetMessage(Stack[-1])
0x56a: Pop(1)
0x56b: @@ ClearReplies()
0x56c: Pop(0)
0x56d: Push((int) 520024)
0x56e: Push((int) 21209)
0x56f: Push((int) 21208)
0x570: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x571: Pop(3)
0x572: Return(); Pop(0)

0x573: Push((int) 21209)
0x574: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x575: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x576: PushEmpty(string)
0x577: Stack[-1] = "Neutral"
0x578: Call2 0x480

0x579: Pop(1)
0x57a: Push((int) 520025)
0x57b: @@ SetMessage(Stack[-1])
0x57c: Pop(1)
0x57d: @@ ClearReplies()
0x57e: Pop(0)
0x57f: Push((int) 520026)
0x580: Push((int) 21211)
0x581: Push((int) 21210)
0x582: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x583: Pop(3)
0x584: Push((int) 527735)
0x585: Push((int) 29087)
0x586: Push((int) 29086)
0x587: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x588: Pop(3)
0x589: Return(); Pop(0)

0x58a: Push((int) 29087)
0x58b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58c: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x58d: PushEmpty(string)
0x58e: Stack[-1] = "Untrust"
0x58f: Call2 0x480

0x590: Pop(1)
0x591: Push((int) 527736)
0x592: @@ SetMessage(Stack[-1])
0x593: Pop(1)
0x594: @@ ClearReplies()
0x595: Pop(0)
0x596: Push((int) 527737)
0x597: Push((int) 21211)
0x598: Push((int) 29088)
0x599: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59a: Pop(3)
0x59b: Return(); Pop(0)

0x59c: Push((int) 21211)
0x59d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59e: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x59f: PushEmpty(string)
0x5a0: Stack[-1] = "Neutral"
0x5a1: Call2 0x480

0x5a2: Pop(1)
0x5a3: Push((int) 520027)
0x5a4: @@ SetMessage(Stack[-1])
0x5a5: Pop(1)
0x5a6: @@ ClearReplies()
0x5a7: Pop(0)
0x5a8: Push((int) 520028)
0x5a9: Push((int) -1)
0x5aa: Push((int) 21212)
0x5ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ac: Pop(3)
0x5ad: Return(); Pop(0)

0x5ae: Push((int) 21183)
0x5af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b0: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5b1: PushEmpty(string)
0x5b2: Stack[-1] = "Untrust"
0x5b3: Call2 0x480

0x5b4: Pop(1)
0x5b5: Push((int) 520002)
0x5b6: @@ SetMessage(Stack[-1])
0x5b7: Pop(1)
0x5b8: @@ ClearReplies()
0x5b9: Pop(0)
0x5ba: Push((int) 520003)
0x5bb: Push((int) 21185)
0x5bc: Push((int) 21184)
0x5bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5be: Pop(3)
0x5bf: Push((int) 527725)
0x5c0: Push((int) 29074)
0x5c1: Push((int) 29073)
0x5c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c3: Pop(3)
0x5c4: Return(); Pop(0)

0x5c5: Push((int) 29074)
0x5c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c7: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5c8: PushEmpty(string)
0x5c9: Stack[-1] = "Rage"
0x5ca: Call2 0x480

0x5cb: Pop(1)
0x5cc: Push((int) 527726)
0x5cd: @@ SetMessage(Stack[-1])
0x5ce: Pop(1)
0x5cf: @@ ClearReplies()
0x5d0: Pop(0)
0x5d1: Push((int) 527727)
0x5d2: Push((int) 21185)
0x5d3: Push((int) 29075)
0x5d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d5: Pop(3)
0x5d6: Return(); Pop(0)

0x5d7: Push((int) 21185)
0x5d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d9: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5da: PushEmpty(string)
0x5db: Stack[-1] = "Sly"
0x5dc: Call2 0x480

0x5dd: Pop(1)
0x5de: Push((int) 520004)
0x5df: @@ SetMessage(Stack[-1])
0x5e0: Pop(1)
0x5e1: @@ ClearReplies()
0x5e2: Pop(0)
0x5e3: Push((int) 520005)
0x5e4: Push((int) 21187)
0x5e5: Push((int) 21186)
0x5e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e7: Pop(3)
0x5e8: Push((int) 520015)
0x5e9: Push((int) 21187)
0x5ea: Push((int) 21196)
0x5eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ec: Pop(3)
0x5ed: Return(); Pop(0)

0x5ee: Push((int) 21187)
0x5ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f0: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x5f1: PushEmpty(string)
0x5f2: Stack[-1] = "Untrust"
0x5f3: Call2 0x480

0x5f4: Pop(1)
0x5f5: Push((int) 520006)
0x5f6: @@ SetMessage(Stack[-1])
0x5f7: Pop(1)
0x5f8: @@ ClearReplies()
0x5f9: Pop(0)
0x5fa: Push((int) 520007)
0x5fb: Push((int) 21189)
0x5fc: Push((int) 21188)
0x5fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fe: Pop(3)
0x5ff: Push((int) 527728)
0x600: Push((int) 29079)
0x601: Push((int) 29078)
0x602: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x603: Pop(3)
0x604: Return(); Pop(0)

0x605: Push((int) 29079)
0x606: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x607: IF (Stack[-1] == 0) GOTO 0x617; Pop(1)

0x608: PushEmpty(string)
0x609: Stack[-1] = "Neutral"
0x60a: Call2 0x480

0x60b: Pop(1)
0x60c: Push((int) 527729)
0x60d: @@ SetMessage(Stack[-1])
0x60e: Pop(1)
0x60f: @@ ClearReplies()
0x610: Pop(0)
0x611: Push((int) 527730)
0x612: Push((int) 29081)
0x613: Push((int) 29080)
0x614: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x615: Pop(3)
0x616: Return(); Pop(0)

0x617: Push((int) 29081)
0x618: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x619: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x61a: PushEmpty(string)
0x61b: Stack[-1] = "Neutral"
0x61c: Call2 0x480

0x61d: Pop(1)
0x61e: Push((int) 527731)
0x61f: @@ SetMessage(Stack[-1])
0x620: Pop(1)
0x621: @@ ClearReplies()
0x622: Pop(0)
0x623: Push((int) 527732)
0x624: Push((int) 21189)
0x625: Push((int) 29082)
0x626: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x627: Pop(3)
0x628: Return(); Pop(0)

0x629: Push((int) 21189)
0x62a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62b: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x62c: PushEmpty(string)
0x62d: Stack[-1] = "Neutral"
0x62e: Call2 0x480

0x62f: Pop(1)
0x630: Push((int) 520008)
0x631: @@ SetMessage(Stack[-1])
0x632: Pop(1)
0x633: @@ ClearReplies()
0x634: Pop(0)
0x635: Push((int) 520009)
0x636: Push((int) 21191)
0x637: Push((int) 21190)
0x638: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x639: Pop(3)
0x63a: Push((int) 520013)
0x63b: Push((int) -1)
0x63c: Push((int) 21194)
0x63d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63e: Pop(3)
0x63f: Return(); Pop(0)

0x640: Push((int) 21191)
0x641: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x642: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x643: PushEmpty(string)
0x644: Stack[-1] = "Sly"
0x645: Call2 0x480

0x646: Pop(1)
0x647: Push((int) 520010)
0x648: @@ SetMessage(Stack[-1])
0x649: Pop(1)
0x64a: @@ ClearReplies()
0x64b: Pop(0)
0x64c: Push((int) 520011)
0x64d: Push((int) -1)
0x64e: Push((int) 21192)
0x64f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x650: Pop(3)
0x651: Push((int) 520012)
0x652: Push((int) -1)
0x653: Push((int) 21193)
0x654: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x655: Pop(3)
0x656: Return(); Pop(0)

0x657: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x658: PushEmpty(bool)
0x659: Call2 0x145a

0x65a: Pop(0)
0x65b: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65c: @ lshStopAnimation()
0x65d: Pop(0)
0x65e: GOTO 0x661

0x65f: @ StopAnimation()
0x660: Pop(0)
0x661: Return(); Pop(0)

0x662: GOTO 0x497

0x663: Return(); Pop(0)

0x664: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x665: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x666: PushEmpty(bool, object, float)
0x667: Stack[-2] = Stack[-12]
0x668: Stack[-1] = (float) 70.0
0x669: Call2 0x124a

0x66a: Pop(2)
0x66b: Pop(1); Push((bool) Stack[-1] == 0)
0x66c: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x66d: Stack[-10] = (int) -2
0x66e: Return(); Pop(8)

0x66f: @ CreateDialog(Stack[-4])
0x670: Pop(0)
0x671: PushEmpty(int)
0x672: Call2 0x1454

0x673: Pop(0)
0x674: @@ SetNPCName(Stack[-1])
0x675: Pop(1)
0x676: PushEmpty(int)
0x677: Call2 0x1452

0x678: Pop(0)
0x679: @@ SetNPCDescription(Stack[-1])
0x67a: Pop(1)
0x67b: PushEmpty(string)
0x67c: Call2 0x1456

0x67d: Pop(0)
0x67e: @@ SetPhoto(Stack[-1])
0x67f: Pop(1)
0x680: PushEmpty(string)
0x681: Call2 0x1458

0x682: Pop(0)
0x683: @@ SetPhoto2(Stack[-1])
0x684: Pop(1)
0x685: PushEmpty(int)
0x686: Call2 0x16ff

0x687: Pop(0)
0x688: @@ SetPlayerName(Stack[-1])
0x689: Pop(1)
0x68a: Stack[-2] = (int) -1
0x68b: @ IsOverrideActive(Stack[-3])
0x68c: Pop(0)
0x68d: Push(Stack[-3])
0x68e: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x68f: Stack[-10] = (int) -2
0x690: Return(); Pop(8)

0x691: @ DoDialog(Stack[-4])
0x692: Pop(0)
0x693: PushEmpty(bool, object)
0x694: PushEmpty(object)
0x695: Call2 0x1360

0x696: Stack[-2] = Stack[-1]
0x697: Pop(1)
0x698: Call2 0x12a1

0x699: Pop(2)
0x69a: PushEmpty(object, object)
0x69b: Stack[-2] = Stack[-11]
0x69c: Stack[-1] = Stack[-6]
0x69d: Push(-2, 4); TaskCall(9)
0x69e: Call2 0x6b5

0x69f: Pop(-2, 4); TaskReturn
0x6a0: Pop(2)
0x6a1: @@ IsDialogEnd(Stack[-1])
0x6a2: Pop(0)
0x6a3: Pop(0); Push((bool) Stack[-1] == 0)
0x6a4: IF (Stack[-1] == 0) GOTO 0x6aa; Pop(1)

0x6a5: @ sync()
0x6a6: Pop(0)
0x6a7: @@ IsDialogEnd(Stack[-1])
0x6a8: Pop(0)
0x6a9: GOTO 0x6a3

0x6aa: PushEmpty(object)
0x6ab: Stack[-1] = Stack[-10]
0x6ac: Call2 0x128f

0x6ad: Pop(1)
0x6ae: @ StopDialog(Stack[-4])
0x6af: Pop(0)
0x6b0: @@ GetReturnValue(Stack[-2])
0x6b1: Pop(0)
0x6b2: Stack[-10] = Stack[-2]
0x6b3: Return(); Pop(8)

0x6b4: Stack[-4] = 0
0x6b5: PushEmpty()
0x6b6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x6b7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x6b8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6b9: Push((int) 1)
0x6ba: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6bb: PushEmpty(bool, object)
0x6bc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6bd: Call2 0x1625

0x6be: Pop(1)
0x6bf: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6c0: PushEmpty(object, object)
0x6c1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6c3: Call2 0x14d6

0x6c4: Pop(2)
0x6c5: PushEmpty(object, object)
0x6c6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6c8: Call2 0x1570

0x6c9: Pop(2)
0x6ca: PushEmpty(string)
0x6cb: Stack[-1] = "Rage"
0x6cc: Call2 0x71c

0x6cd: Pop(1)
0x6ce: Push((int) 520138)
0x6cf: @@ SetMessage(Stack[-1])
0x6d0: Pop(1)
0x6d1: @@ ClearReplies()
0x6d2: Pop(0)
0x6d3: Push((int) 520139)
0x6d4: Push((int) 21324)
0x6d5: Push((int) 21323)
0x6d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d7: Pop(3)
0x6d8: GOTO 0x6fe

0x6d9: PushEmpty(string)
0x6da: Stack[-1] = "Rage"
0x6db: Call2 0x71c

0x6dc: Pop(1)
0x6dd: Push((int) 520157)
0x6de: @@ SetMessage(Stack[-1])
0x6df: Pop(1)
0x6e0: @@ ClearReplies()
0x6e1: Pop(0)
0x6e2: PushEmpty(bool, object)
0x6e3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e4: Call2 0x1631

0x6e5: Pop(1)
0x6e6: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6e7: Push((int) 520158)
0x6e8: Push((int) 21346)
0x6e9: Push((int) 21345)
0x6ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6eb: Pop(3)
0x6ec: PushEmpty(bool, object)
0x6ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6ee: Call2 0x163d

0x6ef: Pop(1)
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f6; Pop(1)

0x6f1: Push((int) 520164)
0x6f2: Push((int) 21352)
0x6f3: Push((int) 21351)
0x6f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f5: Pop(3)
0x6f6: Push((int) 520180)
0x6f7: Push((int) -1)
0x6f8: Push((int) 21370)
0x6f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fa: Pop(3)
0x6fb: GOTO 0x6fe

0x6fc: Return(); Pop(0)

0x6fd: GOTO 0x6b9

0x6fe: PushEmpty(bool)
0x6ff: Call2 0x145a

0x700: Pop(0)
0x701: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x702: @ lshWaitForAnimEnd()
0x703: Pop(0)
0x704: Push( Stack[3 + Tasks[-1].StackPointer] )
0x705: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x706: GOTO 0x70c

0x707: PushEmpty(string)
0x708: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x709: Call2 0x132b

0x70a: Pop(1)
0x70b: GOTO 0x702

0x70c: GOTO 0x71b

0x70d: Push("all")
0x70e: Push("idle")
0x70f: @ PlayAnimation(Stack[-2], Stack[-1])
0x710: Pop(2)
0x711: @ WaitForAnimEnd()
0x712: Pop(0)
0x713: Push( Stack[3 + Tasks[-1].StackPointer] )
0x714: IF (Stack[-1] == 0) GOTO 0x716; Pop(1)

0x715: GOTO 0x71b

0x716: Push("all")
0x717: Push("idle")
0x718: @ PlayAnimation(Stack[-2], Stack[-1])
0x719: Pop(2)
0x71a: GOTO 0x711

0x71b: Return(); Pop(0)

0x71c: PushEmpty()
0x71d: PushEmpty(bool)
0x71e: Call2 0x145a

0x71f: Pop(0)
0x720: Pop(1); Push((bool) Stack[-1] == 0)
0x721: IF (Stack[-1] == 0) GOTO 0x723; Pop(1)

0x722: Return(); Pop(0)

0x723: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x724: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x725: Return(); Pop(0)

0x726: PushEmpty(string, bool)
0x727: Stack[-2] = Stack[-3]
0x728: Push("")
0x729: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x72a: IF (Stack[-1] == 0) GOTO 0x72d; Pop(1)

0x72b: Stack[-1] = (bool) 0
0x72c: GOTO 0x72e

0x72d: Stack[-1] = (bool) 1
0x72e: Call2 0x133b

0x72f: Pop(2)
0x730: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x731: Return(); Pop(0)

0x732: PushEmpty()
0x733: Push((int) 1)
0x734: IF (Stack[-1] == 0) GOTO 0x91f; Pop(1)

0x735: PushEmpty()
0x736: Call2 0x1359

0x737: Pop(0)
0x738: Push((int) 21333)
0x739: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x73a: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x73b: PushEmpty(object, object)
0x73c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x73d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x73e: Call2 0x150a

0x73f: Pop(2)
0x740: PushEmpty(object, object)
0x741: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x742: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x743: Call2 0x156a

0x744: Pop(2)
0x745: PushEmpty(object, object)
0x746: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x747: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x748: Call2 0x14dc

0x749: Pop(2)
0x74a: Push((int) 21335)
0x74b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x74c: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x74d: PushEmpty(object, object)
0x74e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x74f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x750: Call2 0x150a

0x751: Pop(2)
0x752: PushEmpty(object, object)
0x753: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x754: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x755: Call2 0x156a

0x756: Pop(2)
0x757: PushEmpty(object, object)
0x758: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x759: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x75a: Call2 0x14dc

0x75b: Pop(2)
0x75c: Push((int) 21349)
0x75d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x75e: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x75f: PushEmpty(object, object)
0x760: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x761: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x762: Call2 0x1500

0x763: Pop(2)
0x764: PushEmpty(object, object)
0x765: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x766: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x767: Call2 0x1564

0x768: Pop(2)
0x769: PushEmpty(object, object)
0x76a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x76b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x76c: Call2 0x150a

0x76d: Pop(2)
0x76e: PushEmpty(object, object)
0x76f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x770: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x771: Call2 0x14dc

0x772: Pop(2)
0x773: PushEmpty(object, object)
0x774: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x775: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x776: Call2 0x155a

0x777: Pop(2)
0x778: Push((int) 21350)
0x779: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x77a: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x77b: PushEmpty(object, object)
0x77c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x77d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x77e: Call2 0x150a

0x77f: Pop(2)
0x780: PushEmpty(object, object)
0x781: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x782: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x783: Call2 0x156a

0x784: Pop(2)
0x785: PushEmpty(object, object)
0x786: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x787: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x788: Call2 0x14dc

0x789: Pop(2)
0x78a: Push((int) 21361)
0x78b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x78c: IF (Stack[-1] == 0) GOTO 0x7a6; Pop(1)

0x78d: PushEmpty(object, object)
0x78e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x78f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x790: Call2 0x14f6

0x791: Pop(2)
0x792: PushEmpty(object, object)
0x793: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x794: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x795: Call2 0x1576

0x796: Pop(2)
0x797: PushEmpty(object, object)
0x798: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x799: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x79a: Call2 0x1580

0x79b: Pop(2)
0x79c: PushEmpty(object, object)
0x79d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x79e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x79f: Call2 0x158b

0x7a0: Pop(2)
0x7a1: PushEmpty(object, object)
0x7a2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7a4: Call2 0x156a

0x7a5: Pop(2)
0x7a6: Push((int) 21322)
0x7a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a8: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7a9: PushEmpty(bool, object)
0x7aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ab: Call2 0x1625

0x7ac: Pop(1)
0x7ad: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7ae: PushEmpty(object, object)
0x7af: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7b0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7b1: Call2 0x14d6

0x7b2: Pop(2)
0x7b3: PushEmpty(object, object)
0x7b4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7b5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7b6: Call2 0x1570

0x7b7: Pop(2)
0x7b8: PushEmpty(string)
0x7b9: Stack[-1] = "Rage"
0x7ba: Call2 0x71c

0x7bb: Pop(1)
0x7bc: Push((int) 520138)
0x7bd: @@ SetMessage(Stack[-1])
0x7be: Pop(1)
0x7bf: @@ ClearReplies()
0x7c0: Pop(0)
0x7c1: Push((int) 520139)
0x7c2: Push((int) 21324)
0x7c3: Push((int) 21323)
0x7c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c5: Pop(3)
0x7c6: Return(); Pop(0)

0x7c7: PushEmpty(string)
0x7c8: Stack[-1] = "Rage"
0x7c9: Call2 0x71c

0x7ca: Pop(1)
0x7cb: Push((int) 520157)
0x7cc: @@ SetMessage(Stack[-1])
0x7cd: Pop(1)
0x7ce: @@ ClearReplies()
0x7cf: Pop(0)
0x7d0: PushEmpty(bool, object)
0x7d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d2: Call2 0x1631

0x7d3: Pop(1)
0x7d4: IF (Stack[-1] == 0) GOTO 0x7da; Pop(1)

0x7d5: Push((int) 520158)
0x7d6: Push((int) 21346)
0x7d7: Push((int) 21345)
0x7d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d9: Pop(3)
0x7da: PushEmpty(bool, object)
0x7db: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7dc: Call2 0x163d

0x7dd: Pop(1)
0x7de: IF (Stack[-1] == 0) GOTO 0x7e4; Pop(1)

0x7df: Push((int) 520164)
0x7e0: Push((int) 21352)
0x7e1: Push((int) 21351)
0x7e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e3: Pop(3)
0x7e4: Push((int) 520180)
0x7e5: Push((int) -1)
0x7e6: Push((int) 21370)
0x7e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e8: Pop(3)
0x7e9: Return(); Pop(0)

0x7ea: Push((int) 21352)
0x7eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ec: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7ed: PushEmpty(string)
0x7ee: Stack[-1] = "Neutral"
0x7ef: Call2 0x71c

0x7f0: Pop(1)
0x7f1: Push((int) 520165)
0x7f2: @@ SetMessage(Stack[-1])
0x7f3: Pop(1)
0x7f4: @@ ClearReplies()
0x7f5: Pop(0)
0x7f6: Push((int) 520166)
0x7f7: Push((int) 21354)
0x7f8: Push((int) 21353)
0x7f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fa: Pop(3)
0x7fb: Push((int) 520179)
0x7fc: Push((int) 21354)
0x7fd: Push((int) 21368)
0x7fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ff: Pop(3)
0x800: Return(); Pop(0)

0x801: Push((int) 21354)
0x802: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x803: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x804: PushEmpty(string)
0x805: Stack[-1] = "Neutral"
0x806: Call2 0x71c

0x807: Pop(1)
0x808: Push((int) 520167)
0x809: @@ SetMessage(Stack[-1])
0x80a: Pop(1)
0x80b: @@ ClearReplies()
0x80c: Pop(0)
0x80d: Push((int) 520168)
0x80e: Push((int) 21356)
0x80f: Push((int) 21355)
0x810: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x811: Pop(3)
0x812: Push((int) 520178)
0x813: Push((int) 21360)
0x814: Push((int) 21366)
0x815: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x816: Pop(3)
0x817: Return(); Pop(0)

0x818: Push((int) 21356)
0x819: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81a: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x81b: PushEmpty(string)
0x81c: Stack[-1] = "Fear"
0x81d: Call2 0x71c

0x81e: Pop(1)
0x81f: Push((int) 520169)
0x820: @@ SetMessage(Stack[-1])
0x821: Pop(1)
0x822: @@ ClearReplies()
0x823: Pop(0)
0x824: Push((int) 520170)
0x825: Push((int) 21358)
0x826: Push((int) 21357)
0x827: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x828: Pop(3)
0x829: Return(); Pop(0)

0x82a: Push((int) 21358)
0x82b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82c: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x82d: PushEmpty(string)
0x82e: Stack[-1] = "Fear"
0x82f: Call2 0x71c

0x830: Pop(1)
0x831: Push((int) 520171)
0x832: @@ SetMessage(Stack[-1])
0x833: Pop(1)
0x834: @@ ClearReplies()
0x835: Pop(0)
0x836: Push((int) 520172)
0x837: Push((int) 21360)
0x838: Push((int) 21359)
0x839: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83a: Pop(3)
0x83b: Push((int) 520175)
0x83c: Push((int) 21363)
0x83d: Push((int) 21362)
0x83e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83f: Pop(3)
0x840: Return(); Pop(0)

0x841: Push((int) 21363)
0x842: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x843: IF (Stack[-1] == 0) GOTO 0x853; Pop(1)

0x844: PushEmpty(string)
0x845: Stack[-1] = "Sly"
0x846: Call2 0x71c

0x847: Pop(1)
0x848: Push((int) 520176)
0x849: @@ SetMessage(Stack[-1])
0x84a: Pop(1)
0x84b: @@ ClearReplies()
0x84c: Pop(0)
0x84d: Push((int) 520177)
0x84e: Push((int) 21360)
0x84f: Push((int) 21364)
0x850: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x851: Pop(3)
0x852: Return(); Pop(0)

0x853: Push((int) 21360)
0x854: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x855: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x856: PushEmpty(string)
0x857: Stack[-1] = "Neutral"
0x858: Call2 0x71c

0x859: Pop(1)
0x85a: Push((int) 520173)
0x85b: @@ SetMessage(Stack[-1])
0x85c: Pop(1)
0x85d: @@ ClearReplies()
0x85e: Pop(0)
0x85f: Push((int) 520174)
0x860: Push((int) -1)
0x861: Push((int) 21361)
0x862: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x863: Pop(3)
0x864: Return(); Pop(0)

0x865: Push((int) 21346)
0x866: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x867: IF (Stack[-1] == 0) GOTO 0x87c; Pop(1)

0x868: PushEmpty(string)
0x869: Stack[-1] = "Sly"
0x86a: Call2 0x71c

0x86b: Pop(1)
0x86c: Push((int) 520159)
0x86d: @@ SetMessage(Stack[-1])
0x86e: Pop(1)
0x86f: @@ ClearReplies()
0x870: Pop(0)
0x871: Push((int) 520160)
0x872: Push((int) 21348)
0x873: Push((int) 21347)
0x874: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x875: Pop(3)
0x876: Push((int) 520163)
0x877: Push((int) -1)
0x878: Push((int) 21350)
0x879: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87a: Pop(3)
0x87b: Return(); Pop(0)

0x87c: Push((int) 21348)
0x87d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x87e: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x87f: PushEmpty(string)
0x880: Stack[-1] = "Neutral"
0x881: Call2 0x71c

0x882: Pop(1)
0x883: Push((int) 520161)
0x884: @@ SetMessage(Stack[-1])
0x885: Pop(1)
0x886: @@ ClearReplies()
0x887: Pop(0)
0x888: Push((int) 520162)
0x889: Push((int) -1)
0x88a: Push((int) 21349)
0x88b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88c: Pop(3)
0x88d: Return(); Pop(0)

0x88e: Push((int) 21324)
0x88f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x890: IF (Stack[-1] == 0) GOTO 0x8a5; Pop(1)

0x891: PushEmpty(string)
0x892: Stack[-1] = "Rage"
0x893: Call2 0x71c

0x894: Pop(1)
0x895: Push((int) 520140)
0x896: @@ SetMessage(Stack[-1])
0x897: Pop(1)
0x898: @@ ClearReplies()
0x899: Pop(0)
0x89a: Push((int) 520141)
0x89b: Push((int) 21326)
0x89c: Push((int) 21325)
0x89d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89e: Pop(3)
0x89f: Push((int) 520154)
0x8a0: Push((int) 21341)
0x8a1: Push((int) 21340)
0x8a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a3: Pop(3)
0x8a4: Return(); Pop(0)

0x8a5: Push((int) 21341)
0x8a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a7: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8a8: PushEmpty(string)
0x8a9: Stack[-1] = "Sly"
0x8aa: Call2 0x71c

0x8ab: Pop(1)
0x8ac: Push((int) 520155)
0x8ad: @@ SetMessage(Stack[-1])
0x8ae: Pop(1)
0x8af: @@ ClearReplies()
0x8b0: Pop(0)
0x8b1: Push((int) 520156)
0x8b2: Push((int) 21326)
0x8b3: Push((int) 21342)
0x8b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b5: Pop(3)
0x8b6: Return(); Pop(0)

0x8b7: Push((int) 21326)
0x8b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b9: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8ba: PushEmpty(string)
0x8bb: Stack[-1] = "Rage"
0x8bc: Call2 0x71c

0x8bd: Pop(1)
0x8be: Push((int) 520142)
0x8bf: @@ SetMessage(Stack[-1])
0x8c0: Pop(1)
0x8c1: @@ ClearReplies()
0x8c2: Pop(0)
0x8c3: Push((int) 520143)
0x8c4: Push((int) 21328)
0x8c5: Push((int) 21327)
0x8c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c7: Pop(3)
0x8c8: Push((int) 520153)
0x8c9: Push((int) 21330)
0x8ca: Push((int) 21338)
0x8cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cc: Pop(3)
0x8cd: Return(); Pop(0)

0x8ce: Push((int) 21328)
0x8cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d0: IF (Stack[-1] == 0) GOTO 0x8e5; Pop(1)

0x8d1: PushEmpty(string)
0x8d2: Stack[-1] = "Sly"
0x8d3: Call2 0x71c

0x8d4: Pop(1)
0x8d5: Push((int) 520144)
0x8d6: @@ SetMessage(Stack[-1])
0x8d7: Pop(1)
0x8d8: @@ ClearReplies()
0x8d9: Pop(0)
0x8da: Push((int) 520145)
0x8db: Push((int) 21330)
0x8dc: Push((int) 21329)
0x8dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8de: Pop(3)
0x8df: Push((int) 520152)
0x8e0: Push((int) 21330)
0x8e1: Push((int) 21336)
0x8e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e3: Pop(3)
0x8e4: Return(); Pop(0)

0x8e5: Push((int) 21330)
0x8e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e7: IF (Stack[-1] == 0) GOTO 0x8fc; Pop(1)

0x8e8: PushEmpty(string)
0x8e9: Stack[-1] = "Sly"
0x8ea: Call2 0x71c

0x8eb: Pop(1)
0x8ec: Push((int) 520146)
0x8ed: @@ SetMessage(Stack[-1])
0x8ee: Pop(1)
0x8ef: @@ ClearReplies()
0x8f0: Pop(0)
0x8f1: Push((int) 520147)
0x8f2: Push((int) 21332)
0x8f3: Push((int) 21331)
0x8f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f5: Pop(3)
0x8f6: Push((int) 520151)
0x8f7: Push((int) -1)
0x8f8: Push((int) 21335)
0x8f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fa: Pop(3)
0x8fb: Return(); Pop(0)

0x8fc: Push((int) 21332)
0x8fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8fe: IF (Stack[-1] == 0) GOTO 0x913; Pop(1)

0x8ff: PushEmpty(string)
0x900: Stack[-1] = "Neutral"
0x901: Call2 0x71c

0x902: Pop(1)
0x903: Push((int) 520148)
0x904: @@ SetMessage(Stack[-1])
0x905: Pop(1)
0x906: @@ ClearReplies()
0x907: Pop(0)
0x908: Push((int) 520149)
0x909: Push((int) -1)
0x90a: Push((int) 21333)
0x90b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90c: Pop(3)
0x90d: Push((int) 520150)
0x90e: Push((int) -1)
0x90f: Push((int) 21334)
0x910: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x911: Pop(3)
0x912: Return(); Pop(0)

0x913: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x914: PushEmpty(bool)
0x915: Call2 0x145a

0x916: Pop(0)
0x917: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x918: @ lshStopAnimation()
0x919: Pop(0)
0x91a: GOTO 0x91d

0x91b: @ StopAnimation()
0x91c: Pop(0)
0x91d: Return(); Pop(0)

0x91e: GOTO 0x733

0x91f: Return(); Pop(0)

0x920: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x921: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x922: PushEmpty(bool, object, float)
0x923: Stack[-2] = Stack[-12]
0x924: Stack[-1] = (float) 70.0
0x925: Call2 0x124a

0x926: Pop(2)
0x927: Pop(1); Push((bool) Stack[-1] == 0)
0x928: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x929: Stack[-10] = (int) -2
0x92a: Return(); Pop(8)

0x92b: @ CreateDialog(Stack[-4])
0x92c: Pop(0)
0x92d: PushEmpty(int)
0x92e: Call2 0x1454

0x92f: Pop(0)
0x930: @@ SetNPCName(Stack[-1])
0x931: Pop(1)
0x932: PushEmpty(int)
0x933: Call2 0x1452

0x934: Pop(0)
0x935: @@ SetNPCDescription(Stack[-1])
0x936: Pop(1)
0x937: PushEmpty(string)
0x938: Call2 0x1456

0x939: Pop(0)
0x93a: @@ SetPhoto(Stack[-1])
0x93b: Pop(1)
0x93c: PushEmpty(string)
0x93d: Call2 0x1458

0x93e: Pop(0)
0x93f: @@ SetPhoto2(Stack[-1])
0x940: Pop(1)
0x941: PushEmpty(int)
0x942: Call2 0x16ff

0x943: Pop(0)
0x944: @@ SetPlayerName(Stack[-1])
0x945: Pop(1)
0x946: Stack[-2] = (int) -1
0x947: @ IsOverrideActive(Stack[-3])
0x948: Pop(0)
0x949: Push(Stack[-3])
0x94a: IF (Stack[-1] == 0) GOTO 0x94d; Pop(1)

0x94b: Stack[-10] = (int) -2
0x94c: Return(); Pop(8)

0x94d: @ DoDialog(Stack[-4])
0x94e: Pop(0)
0x94f: PushEmpty(bool, object)
0x950: PushEmpty(object)
0x951: Call2 0x1360

0x952: Stack[-2] = Stack[-1]
0x953: Pop(1)
0x954: Call2 0x12a1

0x955: Pop(2)
0x956: PushEmpty(object, object)
0x957: Stack[-2] = Stack[-11]
0x958: Stack[-1] = Stack[-6]
0x959: Push(-2, 4); TaskCall(11)
0x95a: Call2 0x971

0x95b: Pop(-2, 4); TaskReturn
0x95c: Pop(2)
0x95d: @@ IsDialogEnd(Stack[-1])
0x95e: Pop(0)
0x95f: Pop(0); Push((bool) Stack[-1] == 0)
0x960: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x961: @ sync()
0x962: Pop(0)
0x963: @@ IsDialogEnd(Stack[-1])
0x964: Pop(0)
0x965: GOTO 0x95f

0x966: PushEmpty(object)
0x967: Stack[-1] = Stack[-10]
0x968: Call2 0x128f

0x969: Pop(1)
0x96a: @ StopDialog(Stack[-4])
0x96b: Pop(0)
0x96c: @@ GetReturnValue(Stack[-2])
0x96d: Pop(0)
0x96e: Stack[-10] = Stack[-2]
0x96f: Return(); Pop(8)

0x970: Stack[-4] = 0
0x971: PushEmpty()
0x972: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x973: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x974: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x975: Push((int) 1)
0x976: IF (Stack[-1] == 0) GOTO 0x98d; Pop(1)

0x977: PushEmpty(string)
0x978: Stack[-1] = "Neutral"
0x979: Call2 0x9ab

0x97a: Pop(1)
0x97b: Push((int) 520768)
0x97c: @@ SetMessage(Stack[-1])
0x97d: Pop(1)
0x97e: @@ ClearReplies()
0x97f: Pop(0)
0x980: Push((int) 520769)
0x981: Push((int) 21984)
0x982: Push((int) 21983)
0x983: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x984: Pop(3)
0x985: Push((int) 520772)
0x986: Push((int) 21987)
0x987: Push((int) 21986)
0x988: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x989: Pop(3)
0x98a: GOTO 0x98d

0x98b: Return(); Pop(0)

0x98c: GOTO 0x975

0x98d: PushEmpty(bool)
0x98e: Call2 0x145a

0x98f: Pop(0)
0x990: IF (Stack[-1] == 0) GOTO 0x99c; Pop(1)

0x991: @ lshWaitForAnimEnd()
0x992: Pop(0)
0x993: Push( Stack[3 + Tasks[-1].StackPointer] )
0x994: IF (Stack[-1] == 0) GOTO 0x996; Pop(1)

0x995: GOTO 0x99b

0x996: PushEmpty(string)
0x997: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x998: Call2 0x132b

0x999: Pop(1)
0x99a: GOTO 0x991

0x99b: GOTO 0x9aa

0x99c: Push("all")
0x99d: Push("idle")
0x99e: @ PlayAnimation(Stack[-2], Stack[-1])
0x99f: Pop(2)
0x9a0: @ WaitForAnimEnd()
0x9a1: Pop(0)
0x9a2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a3: IF (Stack[-1] == 0) GOTO 0x9a5; Pop(1)

0x9a4: GOTO 0x9aa

0x9a5: Push("all")
0x9a6: Push("idle")
0x9a7: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a8: Pop(2)
0x9a9: GOTO 0x9a0

0x9aa: Return(); Pop(0)

0x9ab: PushEmpty()
0x9ac: PushEmpty(bool)
0x9ad: Call2 0x145a

0x9ae: Pop(0)
0x9af: Pop(1); Push((bool) Stack[-1] == 0)
0x9b0: IF (Stack[-1] == 0) GOTO 0x9b2; Pop(1)

0x9b1: Return(); Pop(0)

0x9b2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9b3: IF (Stack[-1] == 0) GOTO 0x9b5; Pop(1)

0x9b4: Return(); Pop(0)

0x9b5: PushEmpty(string, bool)
0x9b6: Stack[-2] = Stack[-3]
0x9b7: Push("")
0x9b8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9b9: IF (Stack[-1] == 0) GOTO 0x9bc; Pop(1)

0x9ba: Stack[-1] = (bool) 0
0x9bb: GOTO 0x9bd

0x9bc: Stack[-1] = (bool) 1
0x9bd: Call2 0x133b

0x9be: Pop(2)
0x9bf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9c0: Return(); Pop(0)

0x9c1: PushEmpty()
0x9c2: Push((int) 1)
0x9c3: IF (Stack[-1] == 0) GOTO 0xa0e; Pop(1)

0x9c4: PushEmpty()
0x9c5: Call2 0x1359

0x9c6: Pop(0)
0x9c7: Push((int) 21982)
0x9c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9c9: IF (Stack[-1] == 0) GOTO 0x9de; Pop(1)

0x9ca: PushEmpty(string)
0x9cb: Stack[-1] = "Neutral"
0x9cc: Call2 0x9ab

0x9cd: Pop(1)
0x9ce: Push((int) 520768)
0x9cf: @@ SetMessage(Stack[-1])
0x9d0: Pop(1)
0x9d1: @@ ClearReplies()
0x9d2: Pop(0)
0x9d3: Push((int) 520769)
0x9d4: Push((int) 21984)
0x9d5: Push((int) 21983)
0x9d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d7: Pop(3)
0x9d8: Push((int) 520772)
0x9d9: Push((int) 21987)
0x9da: Push((int) 21986)
0x9db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9dc: Pop(3)
0x9dd: Return(); Pop(0)

0x9de: Push((int) 21987)
0x9df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e0: IF (Stack[-1] == 0) GOTO 0x9f0; Pop(1)

0x9e1: PushEmpty(string)
0x9e2: Stack[-1] = "Neutral"
0x9e3: Call2 0x9ab

0x9e4: Pop(1)
0x9e5: Push((int) 520773)
0x9e6: @@ SetMessage(Stack[-1])
0x9e7: Pop(1)
0x9e8: @@ ClearReplies()
0x9e9: Pop(0)
0x9ea: Push((int) 520774)
0x9eb: Push((int) -1)
0x9ec: Push((int) 21988)
0x9ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ee: Pop(3)
0x9ef: Return(); Pop(0)

0x9f0: Push((int) 21984)
0x9f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f2: IF (Stack[-1] == 0) GOTO 0xa02; Pop(1)

0x9f3: PushEmpty(string)
0x9f4: Stack[-1] = "Neutral"
0x9f5: Call2 0x9ab

0x9f6: Pop(1)
0x9f7: Push((int) 520770)
0x9f8: @@ SetMessage(Stack[-1])
0x9f9: Pop(1)
0x9fa: @@ ClearReplies()
0x9fb: Pop(0)
0x9fc: Push((int) 520771)
0x9fd: Push((int) -1)
0x9fe: Push((int) 21985)
0x9ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa00: Pop(3)
0xa01: Return(); Pop(0)

0xa02: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa03: PushEmpty(bool)
0xa04: Call2 0x145a

0xa05: Pop(0)
0xa06: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0xa07: @ lshStopAnimation()
0xa08: Pop(0)
0xa09: GOTO 0xa0c

0xa0a: @ StopAnimation()
0xa0b: Pop(0)
0xa0c: Return(); Pop(0)

0xa0d: GOTO 0x9c2

0xa0e: Return(); Pop(0)

0xa0f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xa10: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa11: PushEmpty(bool, object, float)
0xa12: Stack[-2] = Stack[-12]
0xa13: Stack[-1] = (float) 70.0
0xa14: Call2 0x124a

0xa15: Pop(2)
0xa16: Pop(1); Push((bool) Stack[-1] == 0)
0xa17: IF (Stack[-1] == 0) GOTO 0xa1a; Pop(1)

0xa18: Stack[-10] = (int) -2
0xa19: Return(); Pop(8)

0xa1a: @ CreateDialog(Stack[-4])
0xa1b: Pop(0)
0xa1c: PushEmpty(int)
0xa1d: Call2 0x1454

0xa1e: Pop(0)
0xa1f: @@ SetNPCName(Stack[-1])
0xa20: Pop(1)
0xa21: PushEmpty(int)
0xa22: Call2 0x1452

0xa23: Pop(0)
0xa24: @@ SetNPCDescription(Stack[-1])
0xa25: Pop(1)
0xa26: PushEmpty(string)
0xa27: Call2 0x1456

0xa28: Pop(0)
0xa29: @@ SetPhoto(Stack[-1])
0xa2a: Pop(1)
0xa2b: PushEmpty(string)
0xa2c: Call2 0x1458

0xa2d: Pop(0)
0xa2e: @@ SetPhoto2(Stack[-1])
0xa2f: Pop(1)
0xa30: PushEmpty(int)
0xa31: Call2 0x16ff

0xa32: Pop(0)
0xa33: @@ SetPlayerName(Stack[-1])
0xa34: Pop(1)
0xa35: Stack[-2] = (int) -1
0xa36: @ IsOverrideActive(Stack[-3])
0xa37: Pop(0)
0xa38: Push(Stack[-3])
0xa39: IF (Stack[-1] == 0) GOTO 0xa3c; Pop(1)

0xa3a: Stack[-10] = (int) -2
0xa3b: Return(); Pop(8)

0xa3c: @ DoDialog(Stack[-4])
0xa3d: Pop(0)
0xa3e: PushEmpty(bool, object)
0xa3f: PushEmpty(object)
0xa40: Call2 0x1360

0xa41: Stack[-2] = Stack[-1]
0xa42: Pop(1)
0xa43: Call2 0x12a1

0xa44: Pop(2)
0xa45: PushEmpty(object, object)
0xa46: Stack[-2] = Stack[-11]
0xa47: Stack[-1] = Stack[-6]
0xa48: Push(-2, 4); TaskCall(13)
0xa49: Call2 0xa60

0xa4a: Pop(-2, 4); TaskReturn
0xa4b: Pop(2)
0xa4c: @@ IsDialogEnd(Stack[-1])
0xa4d: Pop(0)
0xa4e: Pop(0); Push((bool) Stack[-1] == 0)
0xa4f: IF (Stack[-1] == 0) GOTO 0xa55; Pop(1)

0xa50: @ sync()
0xa51: Pop(0)
0xa52: @@ IsDialogEnd(Stack[-1])
0xa53: Pop(0)
0xa54: GOTO 0xa4e

0xa55: PushEmpty(object)
0xa56: Stack[-1] = Stack[-10]
0xa57: Call2 0x128f

0xa58: Pop(1)
0xa59: @ StopDialog(Stack[-4])
0xa5a: Pop(0)
0xa5b: @@ GetReturnValue(Stack[-2])
0xa5c: Pop(0)
0xa5d: Stack[-10] = Stack[-2]
0xa5e: Return(); Pop(8)

0xa5f: Stack[-4] = 0
0xa60: PushEmpty()
0xa61: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xa62: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xa63: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa64: Push((int) 1)
0xa65: IF (Stack[-1] == 0) GOTO 0xa7c; Pop(1)

0xa66: PushEmpty(string)
0xa67: Stack[-1] = "Untrust"
0xa68: Call2 0xa9a

0xa69: Pop(1)
0xa6a: Push((int) 521202)
0xa6b: @@ SetMessage(Stack[-1])
0xa6c: Pop(1)
0xa6d: @@ ClearReplies()
0xa6e: Pop(0)
0xa6f: Push((int) 521203)
0xa70: Push((int) 22402)
0xa71: Push((int) 22400)
0xa72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa73: Pop(3)
0xa74: Push((int) 521204)
0xa75: Push((int) -1)
0xa76: Push((int) 22401)
0xa77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa78: Pop(3)
0xa79: GOTO 0xa7c

0xa7a: Return(); Pop(0)

0xa7b: GOTO 0xa64

0xa7c: PushEmpty(bool)
0xa7d: Call2 0x145a

0xa7e: Pop(0)
0xa7f: IF (Stack[-1] == 0) GOTO 0xa8b; Pop(1)

0xa80: @ lshWaitForAnimEnd()
0xa81: Pop(0)
0xa82: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa83: IF (Stack[-1] == 0) GOTO 0xa85; Pop(1)

0xa84: GOTO 0xa8a

0xa85: PushEmpty(string)
0xa86: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa87: Call2 0x132b

0xa88: Pop(1)
0xa89: GOTO 0xa80

0xa8a: GOTO 0xa99

0xa8b: Push("all")
0xa8c: Push("idle")
0xa8d: @ PlayAnimation(Stack[-2], Stack[-1])
0xa8e: Pop(2)
0xa8f: @ WaitForAnimEnd()
0xa90: Pop(0)
0xa91: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa92: IF (Stack[-1] == 0) GOTO 0xa94; Pop(1)

0xa93: GOTO 0xa99

0xa94: Push("all")
0xa95: Push("idle")
0xa96: @ PlayAnimation(Stack[-2], Stack[-1])
0xa97: Pop(2)
0xa98: GOTO 0xa8f

0xa99: Return(); Pop(0)

0xa9a: PushEmpty()
0xa9b: PushEmpty(bool)
0xa9c: Call2 0x145a

0xa9d: Pop(0)
0xa9e: Pop(1); Push((bool) Stack[-1] == 0)
0xa9f: IF (Stack[-1] == 0) GOTO 0xaa1; Pop(1)

0xaa0: Return(); Pop(0)

0xaa1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaa2: IF (Stack[-1] == 0) GOTO 0xaa4; Pop(1)

0xaa3: Return(); Pop(0)

0xaa4: PushEmpty(string, bool)
0xaa5: Stack[-2] = Stack[-3]
0xaa6: Push("")
0xaa7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xaa8: IF (Stack[-1] == 0) GOTO 0xaab; Pop(1)

0xaa9: Stack[-1] = (bool) 0
0xaaa: GOTO 0xaac

0xaab: Stack[-1] = (bool) 1
0xaac: Call2 0x133b

0xaad: Pop(2)
0xaae: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaaf: Return(); Pop(0)

0xab0: PushEmpty()
0xab1: Push((int) 1)
0xab2: IF (Stack[-1] == 0) GOTO 0xb0a; Pop(1)

0xab3: PushEmpty()
0xab4: Call2 0x1359

0xab5: Pop(0)
0xab6: Push((int) 22403)
0xab7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xab8: IF (Stack[-1] == 0) GOTO 0xabe; Pop(1)

0xab9: PushEmpty(object, object)
0xaba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xabb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xabc: Call2 0x1515

0xabd: Pop(2)
0xabe: Push((int) 22399)
0xabf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac0: IF (Stack[-1] == 0) GOTO 0xad5; Pop(1)

0xac1: PushEmpty(string)
0xac2: Stack[-1] = "Untrust"
0xac3: Call2 0xa9a

0xac4: Pop(1)
0xac5: Push((int) 521202)
0xac6: @@ SetMessage(Stack[-1])
0xac7: Pop(1)
0xac8: @@ ClearReplies()
0xac9: Pop(0)
0xaca: Push((int) 521203)
0xacb: Push((int) 22402)
0xacc: Push((int) 22400)
0xacd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xace: Pop(3)
0xacf: Push((int) 521204)
0xad0: Push((int) -1)
0xad1: Push((int) 22401)
0xad2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad3: Pop(3)
0xad4: Return(); Pop(0)

0xad5: Push((int) 22402)
0xad6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad7: IF (Stack[-1] == 0) GOTO 0xaec; Pop(1)

0xad8: PushEmpty(string)
0xad9: Stack[-1] = "Untrust"
0xada: Call2 0xa9a

0xadb: Pop(1)
0xadc: Push((int) 521205)
0xadd: @@ SetMessage(Stack[-1])
0xade: Pop(1)
0xadf: @@ ClearReplies()
0xae0: Pop(0)
0xae1: Push((int) 528423)
0xae2: Push((int) 29808)
0xae3: Push((int) 29806)
0xae4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae5: Pop(3)
0xae6: Push((int) 528424)
0xae7: Push((int) 29808)
0xae8: Push((int) 29807)
0xae9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaea: Pop(3)
0xaeb: Return(); Pop(0)

0xaec: Push((int) 29808)
0xaed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaee: IF (Stack[-1] == 0) GOTO 0xafe; Pop(1)

0xaef: PushEmpty(string)
0xaf0: Stack[-1] = "Sly"
0xaf1: Call2 0xa9a

0xaf2: Pop(1)
0xaf3: Push((int) 528425)
0xaf4: @@ SetMessage(Stack[-1])
0xaf5: Pop(1)
0xaf6: @@ ClearReplies()
0xaf7: Pop(0)
0xaf8: Push((int) 521206)
0xaf9: Push((int) -1)
0xafa: Push((int) 22403)
0xafb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xafc: Pop(3)
0xafd: Return(); Pop(0)

0xafe: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xaff: PushEmpty(bool)
0xb00: Call2 0x145a

0xb01: Pop(0)
0xb02: IF (Stack[-1] == 0) GOTO 0xb06; Pop(1)

0xb03: @ lshStopAnimation()
0xb04: Pop(0)
0xb05: GOTO 0xb08

0xb06: @ StopAnimation()
0xb07: Pop(0)
0xb08: Return(); Pop(0)

0xb09: GOTO 0xab1

0xb0a: Return(); Pop(0)

0xb0b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xb0c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xb0d: PushEmpty(bool, object, float)
0xb0e: Stack[-2] = Stack[-12]
0xb0f: Stack[-1] = (float) 70.0
0xb10: Call2 0x124a

0xb11: Pop(2)
0xb12: Pop(1); Push((bool) Stack[-1] == 0)
0xb13: IF (Stack[-1] == 0) GOTO 0xb16; Pop(1)

0xb14: Stack[-10] = (int) -2
0xb15: Return(); Pop(8)

0xb16: @ CreateDialog(Stack[-4])
0xb17: Pop(0)
0xb18: PushEmpty(int)
0xb19: Call2 0x1454

0xb1a: Pop(0)
0xb1b: @@ SetNPCName(Stack[-1])
0xb1c: Pop(1)
0xb1d: PushEmpty(int)
0xb1e: Call2 0x1452

0xb1f: Pop(0)
0xb20: @@ SetNPCDescription(Stack[-1])
0xb21: Pop(1)
0xb22: PushEmpty(string)
0xb23: Call2 0x1456

0xb24: Pop(0)
0xb25: @@ SetPhoto(Stack[-1])
0xb26: Pop(1)
0xb27: PushEmpty(string)
0xb28: Call2 0x1458

0xb29: Pop(0)
0xb2a: @@ SetPhoto2(Stack[-1])
0xb2b: Pop(1)
0xb2c: PushEmpty(int)
0xb2d: Call2 0x16ff

0xb2e: Pop(0)
0xb2f: @@ SetPlayerName(Stack[-1])
0xb30: Pop(1)
0xb31: Stack[-2] = (int) -1
0xb32: @ IsOverrideActive(Stack[-3])
0xb33: Pop(0)
0xb34: Push(Stack[-3])
0xb35: IF (Stack[-1] == 0) GOTO 0xb38; Pop(1)

0xb36: Stack[-10] = (int) -2
0xb37: Return(); Pop(8)

0xb38: @ DoDialog(Stack[-4])
0xb39: Pop(0)
0xb3a: PushEmpty(bool, object)
0xb3b: PushEmpty(object)
0xb3c: Call2 0x1360

0xb3d: Stack[-2] = Stack[-1]
0xb3e: Pop(1)
0xb3f: Call2 0x12a1

0xb40: Pop(2)
0xb41: PushEmpty(object, object)
0xb42: Stack[-2] = Stack[-11]
0xb43: Stack[-1] = Stack[-6]
0xb44: Push(-2, 4); TaskCall(15)
0xb45: Call2 0xb5c

0xb46: Pop(-2, 4); TaskReturn
0xb47: Pop(2)
0xb48: @@ IsDialogEnd(Stack[-1])
0xb49: Pop(0)
0xb4a: Pop(0); Push((bool) Stack[-1] == 0)
0xb4b: IF (Stack[-1] == 0) GOTO 0xb51; Pop(1)

0xb4c: @ sync()
0xb4d: Pop(0)
0xb4e: @@ IsDialogEnd(Stack[-1])
0xb4f: Pop(0)
0xb50: GOTO 0xb4a

0xb51: PushEmpty(object)
0xb52: Stack[-1] = Stack[-10]
0xb53: Call2 0x128f

0xb54: Pop(1)
0xb55: @ StopDialog(Stack[-4])
0xb56: Pop(0)
0xb57: @@ GetReturnValue(Stack[-2])
0xb58: Pop(0)
0xb59: Stack[-10] = Stack[-2]
0xb5a: Return(); Pop(8)

0xb5b: Stack[-4] = 0
0xb5c: PushEmpty()
0xb5d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xb5e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xb5f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xb60: Push((int) 1)
0xb61: IF (Stack[-1] == 0) GOTO 0xbb4; Pop(1)

0xb62: PushEmpty(bool, object)
0xb63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb64: Call2 0x15a2

0xb65: Pop(1)
0xb66: IF (Stack[-1] == 0) GOTO 0xb80; Pop(1)

0xb67: PushEmpty(object, object)
0xb68: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb69: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb6a: Call2 0x153e

0xb6b: Pop(2)
0xb6c: PushEmpty(string)
0xb6d: Stack[-1] = "Rage"
0xb6e: Call2 0xbd2

0xb6f: Pop(1)
0xb70: Push((int) 521469)
0xb71: @@ SetMessage(Stack[-1])
0xb72: Pop(1)
0xb73: @@ ClearReplies()
0xb74: Pop(0)
0xb75: Push((int) 523789)
0xb76: Push((int) 25055)
0xb77: Push((int) 25054)
0xb78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb79: Pop(3)
0xb7a: Push((int) 523804)
0xb7b: Push((int) 25055)
0xb7c: Push((int) 25070)
0xb7d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7e: Pop(3)
0xb7f: GOTO 0xbb4

0xb80: PushEmpty(string)
0xb81: Stack[-1] = "Rage"
0xb82: Call2 0xbd2

0xb83: Pop(1)
0xb84: Push((int) 521474)
0xb85: @@ SetMessage(Stack[-1])
0xb86: Pop(1)
0xb87: @@ ClearReplies()
0xb88: Pop(0)
0xb89: PushEmpty(bool, object)
0xb8a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb8b: Call2 0x15ae

0xb8c: Pop(1)
0xb8d: IF (Stack[-1] == 0) GOTO 0xb93; Pop(1)

0xb8e: Push((int) 521475)
0xb8f: Push((int) 22642)
0xb90: Push((int) 22640)
0xb91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb92: Pop(3)
0xb93: PushEmpty(bool)
0xb94: Stack[-1] = (bool) 0
0xb95: PushEmpty(bool, object)
0xb96: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb97: Call2 0x15ae

0xb98: Pop(1)
0xb99: Pop(1); Push((bool) Stack[-1] == 0)
0xb9a: IF (Stack[-1] == 0) GOTO 0xba1; Pop(1)

0xb9b: PushEmpty(bool, object)
0xb9c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb9d: Call2 0x15ba

0xb9e: Pop(1)
0xb9f: IF (Stack[-1] == 0) GOTO 0xba1; Pop(1)

0xba0: Stack[-1] = (bool) 1
0xba1: IF (Stack[-1] == 0) GOTO 0xba7; Pop(1)

0xba2: Push((int) 521479)
0xba3: Push((int) 22645)
0xba4: Push((int) 22644)
0xba5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba6: Pop(3)
0xba7: Push((int) 523837)
0xba8: Push((int) 25111)
0xba9: Push((int) 25110)
0xbaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbab: Pop(3)
0xbac: Push((int) 521476)
0xbad: Push((int) -1)
0xbae: Push((int) 22641)
0xbaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb0: Pop(3)
0xbb1: GOTO 0xbb4

0xbb2: Return(); Pop(0)

0xbb3: GOTO 0xb60

0xbb4: PushEmpty(bool)
0xbb5: Call2 0x145a

0xbb6: Pop(0)
0xbb7: IF (Stack[-1] == 0) GOTO 0xbc3; Pop(1)

0xbb8: @ lshWaitForAnimEnd()
0xbb9: Pop(0)
0xbba: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbbb: IF (Stack[-1] == 0) GOTO 0xbbd; Pop(1)

0xbbc: GOTO 0xbc2

0xbbd: PushEmpty(string)
0xbbe: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbbf: Call2 0x132b

0xbc0: Pop(1)
0xbc1: GOTO 0xbb8

0xbc2: GOTO 0xbd1

0xbc3: Push("all")
0xbc4: Push("idle")
0xbc5: @ PlayAnimation(Stack[-2], Stack[-1])
0xbc6: Pop(2)
0xbc7: @ WaitForAnimEnd()
0xbc8: Pop(0)
0xbc9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbca: IF (Stack[-1] == 0) GOTO 0xbcc; Pop(1)

0xbcb: GOTO 0xbd1

0xbcc: Push("all")
0xbcd: Push("idle")
0xbce: @ PlayAnimation(Stack[-2], Stack[-1])
0xbcf: Pop(2)
0xbd0: GOTO 0xbc7

0xbd1: Return(); Pop(0)

0xbd2: PushEmpty()
0xbd3: PushEmpty(bool)
0xbd4: Call2 0x145a

0xbd5: Pop(0)
0xbd6: Pop(1); Push((bool) Stack[-1] == 0)
0xbd7: IF (Stack[-1] == 0) GOTO 0xbd9; Pop(1)

0xbd8: Return(); Pop(0)

0xbd9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbda: IF (Stack[-1] == 0) GOTO 0xbdc; Pop(1)

0xbdb: Return(); Pop(0)

0xbdc: PushEmpty(string, bool)
0xbdd: Stack[-2] = Stack[-3]
0xbde: Push("")
0xbdf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbe0: IF (Stack[-1] == 0) GOTO 0xbe3; Pop(1)

0xbe1: Stack[-1] = (bool) 0
0xbe2: GOTO 0xbe4

0xbe3: Stack[-1] = (bool) 1
0xbe4: Call2 0x133b

0xbe5: Pop(2)
0xbe6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe7: Return(); Pop(0)

0xbe8: PushEmpty()
0xbe9: Push((int) 1)
0xbea: IF (Stack[-1] == 0) GOTO 0xdbf; Pop(1)

0xbeb: PushEmpty()
0xbec: Call2 0x1359

0xbed: Pop(0)
0xbee: Push((int) 22637)
0xbef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbf0: IF (Stack[-1] == 0) GOTO 0xbf6; Pop(1)

0xbf1: PushEmpty(object, object)
0xbf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf4: Call2 0x1520

0xbf5: Pop(2)
0xbf6: Push((int) 22643)
0xbf7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbf8: IF (Stack[-1] == 0) GOTO 0xbfe; Pop(1)

0xbf9: PushEmpty(object, object)
0xbfa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbfb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbfc: Call2 0x1520

0xbfd: Pop(2)
0xbfe: Push((int) 22646)
0xbff: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc00: IF (Stack[-1] == 0) GOTO 0xc15; Pop(1)

0xc01: PushEmpty(object, object)
0xc02: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc03: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc04: Call2 0x1530

0xc05: Pop(2)
0xc06: PushEmpty(object, object)
0xc07: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc08: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc09: Call2 0x1596

0xc0a: Pop(2)
0xc0b: PushEmpty(object, object)
0xc0c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc0d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc0e: Call2 0x1500

0xc0f: Pop(2)
0xc10: PushEmpty(object, object)
0xc11: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc12: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc13: Call2 0x1564

0xc14: Pop(2)
0xc15: Push((int) 25069)
0xc16: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc17: IF (Stack[-1] == 0) GOTO 0xc1d; Pop(1)

0xc18: PushEmpty(object, object)
0xc19: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc1b: Call2 0x1530

0xc1c: Pop(2)
0xc1d: Push((int) 22634)
0xc1e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1f: IF (Stack[-1] == 0) GOTO 0xc70; Pop(1)

0xc20: PushEmpty(bool, object)
0xc21: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc22: Call2 0x15a2

0xc23: Pop(1)
0xc24: IF (Stack[-1] == 0) GOTO 0xc3e; Pop(1)

0xc25: PushEmpty(object, object)
0xc26: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc27: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc28: Call2 0x153e

0xc29: Pop(2)
0xc2a: PushEmpty(string)
0xc2b: Stack[-1] = "Rage"
0xc2c: Call2 0xbd2

0xc2d: Pop(1)
0xc2e: Push((int) 521469)
0xc2f: @@ SetMessage(Stack[-1])
0xc30: Pop(1)
0xc31: @@ ClearReplies()
0xc32: Pop(0)
0xc33: Push((int) 523789)
0xc34: Push((int) 25055)
0xc35: Push((int) 25054)
0xc36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc37: Pop(3)
0xc38: Push((int) 523804)
0xc39: Push((int) 25055)
0xc3a: Push((int) 25070)
0xc3b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3c: Pop(3)
0xc3d: Return(); Pop(0)

0xc3e: PushEmpty(string)
0xc3f: Stack[-1] = "Rage"
0xc40: Call2 0xbd2

0xc41: Pop(1)
0xc42: Push((int) 521474)
0xc43: @@ SetMessage(Stack[-1])
0xc44: Pop(1)
0xc45: @@ ClearReplies()
0xc46: Pop(0)
0xc47: PushEmpty(bool, object)
0xc48: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc49: Call2 0x15ae

0xc4a: Pop(1)
0xc4b: IF (Stack[-1] == 0) GOTO 0xc51; Pop(1)

0xc4c: Push((int) 521475)
0xc4d: Push((int) 22642)
0xc4e: Push((int) 22640)
0xc4f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc50: Pop(3)
0xc51: PushEmpty(bool)
0xc52: Stack[-1] = (bool) 0
0xc53: PushEmpty(bool, object)
0xc54: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc55: Call2 0x15ae

0xc56: Pop(1)
0xc57: Pop(1); Push((bool) Stack[-1] == 0)
0xc58: IF (Stack[-1] == 0) GOTO 0xc5f; Pop(1)

0xc59: PushEmpty(bool, object)
0xc5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc5b: Call2 0x15ba

0xc5c: Pop(1)
0xc5d: IF (Stack[-1] == 0) GOTO 0xc5f; Pop(1)

0xc5e: Stack[-1] = (bool) 1
0xc5f: IF (Stack[-1] == 0) GOTO 0xc65; Pop(1)

0xc60: Push((int) 521479)
0xc61: Push((int) 22645)
0xc62: Push((int) 22644)
0xc63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc64: Pop(3)
0xc65: Push((int) 523837)
0xc66: Push((int) 25111)
0xc67: Push((int) 25110)
0xc68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc69: Pop(3)
0xc6a: Push((int) 521476)
0xc6b: Push((int) -1)
0xc6c: Push((int) 22641)
0xc6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6e: Pop(3)
0xc6f: Return(); Pop(0)

0xc70: Push((int) 25111)
0xc71: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc72: IF (Stack[-1] == 0) GOTO 0xc82; Pop(1)

0xc73: PushEmpty(string)
0xc74: Stack[-1] = "Untrust"
0xc75: Call2 0xbd2

0xc76: Pop(1)
0xc77: Push((int) 523838)
0xc78: @@ SetMessage(Stack[-1])
0xc79: Pop(1)
0xc7a: @@ ClearReplies()
0xc7b: Pop(0)
0xc7c: Push((int) 523839)
0xc7d: Push((int) 25113)
0xc7e: Push((int) 25112)
0xc7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc80: Pop(3)
0xc81: Return(); Pop(0)

0xc82: Push((int) 25113)
0xc83: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc84: IF (Stack[-1] == 0) GOTO 0xc94; Pop(1)

0xc85: PushEmpty(string)
0xc86: Stack[-1] = "Fear"
0xc87: Call2 0xbd2

0xc88: Pop(1)
0xc89: Push((int) 523840)
0xc8a: @@ SetMessage(Stack[-1])
0xc8b: Pop(1)
0xc8c: @@ ClearReplies()
0xc8d: Pop(0)
0xc8e: Push((int) 523841)
0xc8f: Push((int) 25115)
0xc90: Push((int) 25114)
0xc91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc92: Pop(3)
0xc93: Return(); Pop(0)

0xc94: Push((int) 25115)
0xc95: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc96: IF (Stack[-1] == 0) GOTO 0xca6; Pop(1)

0xc97: PushEmpty(string)
0xc98: Stack[-1] = "Untrust"
0xc99: Call2 0xbd2

0xc9a: Pop(1)
0xc9b: Push((int) 523842)
0xc9c: @@ SetMessage(Stack[-1])
0xc9d: Pop(1)
0xc9e: @@ ClearReplies()
0xc9f: Pop(0)
0xca0: Push((int) 523843)
0xca1: Push((int) 25117)
0xca2: Push((int) 25116)
0xca3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca4: Pop(3)
0xca5: Return(); Pop(0)

0xca6: Push((int) 25117)
0xca7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca8: IF (Stack[-1] == 0) GOTO 0xcb8; Pop(1)

0xca9: PushEmpty(string)
0xcaa: Stack[-1] = "Untrust"
0xcab: Call2 0xbd2

0xcac: Pop(1)
0xcad: Push((int) 523844)
0xcae: @@ SetMessage(Stack[-1])
0xcaf: Pop(1)
0xcb0: @@ ClearReplies()
0xcb1: Pop(0)
0xcb2: Push((int) 523845)
0xcb3: Push((int) -1)
0xcb4: Push((int) 25118)
0xcb5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb6: Pop(3)
0xcb7: Return(); Pop(0)

0xcb8: Push((int) 22645)
0xcb9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcba: IF (Stack[-1] == 0) GOTO 0xccf; Pop(1)

0xcbb: PushEmpty(string)
0xcbc: Stack[-1] = "Sly"
0xcbd: Call2 0xbd2

0xcbe: Pop(1)
0xcbf: Push((int) 521480)
0xcc0: @@ SetMessage(Stack[-1])
0xcc1: Pop(1)
0xcc2: @@ ClearReplies()
0xcc3: Pop(0)
0xcc4: Push((int) 523798)
0xcc5: Push((int) 25065)
0xcc6: Push((int) 25063)
0xcc7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc8: Pop(3)
0xcc9: Push((int) 523799)
0xcca: Push((int) 25066)
0xccb: Push((int) 25064)
0xccc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xccd: Pop(3)
0xcce: Return(); Pop(0)

0xccf: Push((int) 25066)
0xcd0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd1: IF (Stack[-1] == 0) GOTO 0xce1; Pop(1)

0xcd2: PushEmpty(string)
0xcd3: Stack[-1] = "Neutral"
0xcd4: Call2 0xbd2

0xcd5: Pop(1)
0xcd6: Push((int) 523801)
0xcd7: @@ SetMessage(Stack[-1])
0xcd8: Pop(1)
0xcd9: @@ ClearReplies()
0xcda: Pop(0)
0xcdb: Push((int) 523802)
0xcdc: Push((int) 25065)
0xcdd: Push((int) 25067)
0xcde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcdf: Pop(3)
0xce0: Return(); Pop(0)

0xce1: Push((int) 25065)
0xce2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce3: IF (Stack[-1] == 0) GOTO 0xcf8; Pop(1)

0xce4: PushEmpty(string)
0xce5: Stack[-1] = "Neutral"
0xce6: Call2 0xbd2

0xce7: Pop(1)
0xce8: Push((int) 523800)
0xce9: @@ SetMessage(Stack[-1])
0xcea: Pop(1)
0xceb: @@ ClearReplies()
0xcec: Pop(0)
0xced: Push((int) 521481)
0xcee: Push((int) -1)
0xcef: Push((int) 22646)
0xcf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf1: Pop(3)
0xcf2: Push((int) 523803)
0xcf3: Push((int) -1)
0xcf4: Push((int) 25069)
0xcf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf6: Pop(3)
0xcf7: Return(); Pop(0)

0xcf8: Push((int) 22642)
0xcf9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcfa: IF (Stack[-1] == 0) GOTO 0xd0a; Pop(1)

0xcfb: PushEmpty(string)
0xcfc: Stack[-1] = "Neutral"
0xcfd: Call2 0xbd2

0xcfe: Pop(1)
0xcff: Push((int) 521477)
0xd00: @@ SetMessage(Stack[-1])
0xd01: Pop(1)
0xd02: @@ ClearReplies()
0xd03: Pop(0)
0xd04: Push((int) 521478)
0xd05: Push((int) -1)
0xd06: Push((int) 22643)
0xd07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd08: Pop(3)
0xd09: Return(); Pop(0)

0xd0a: Push((int) 25055)
0xd0b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0c: IF (Stack[-1] == 0) GOTO 0xd21; Pop(1)

0xd0d: PushEmpty(string)
0xd0e: Stack[-1] = "Rage"
0xd0f: Call2 0xbd2

0xd10: Pop(1)
0xd11: Push((int) 523790)
0xd12: @@ SetMessage(Stack[-1])
0xd13: Pop(1)
0xd14: @@ ClearReplies()
0xd15: Pop(0)
0xd16: Push((int) 523791)
0xd17: Push((int) 25057)
0xd18: Push((int) 25056)
0xd19: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1a: Pop(3)
0xd1b: Push((int) 523805)
0xd1c: Push((int) 25057)
0xd1d: Push((int) 25072)
0xd1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1f: Pop(3)
0xd20: Return(); Pop(0)

0xd21: Push((int) 25057)
0xd22: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd23: IF (Stack[-1] == 0) GOTO 0xd38; Pop(1)

0xd24: PushEmpty(string)
0xd25: Stack[-1] = "Rage"
0xd26: Call2 0xbd2

0xd27: Pop(1)
0xd28: Push((int) 523792)
0xd29: @@ SetMessage(Stack[-1])
0xd2a: Pop(1)
0xd2b: @@ ClearReplies()
0xd2c: Pop(0)
0xd2d: Push((int) 523793)
0xd2e: Push((int) 25059)
0xd2f: Push((int) 25058)
0xd30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd31: Pop(3)
0xd32: Push((int) 523797)
0xd33: Push((int) 25059)
0xd34: Push((int) 25062)
0xd35: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd36: Pop(3)
0xd37: Return(); Pop(0)

0xd38: Push((int) 25059)
0xd39: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd3a: IF (Stack[-1] == 0) GOTO 0xd4f; Pop(1)

0xd3b: PushEmpty(string)
0xd3c: Stack[-1] = "Rage"
0xd3d: Call2 0xbd2

0xd3e: Pop(1)
0xd3f: Push((int) 523794)
0xd40: @@ SetMessage(Stack[-1])
0xd41: Pop(1)
0xd42: @@ ClearReplies()
0xd43: Pop(0)
0xd44: Push((int) 523795)
0xd45: Push((int) 25075)
0xd46: Push((int) 25060)
0xd47: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd48: Pop(3)
0xd49: Push((int) 523810)
0xd4a: Push((int) 25080)
0xd4b: Push((int) 25079)
0xd4c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4d: Pop(3)
0xd4e: Return(); Pop(0)

0xd4f: Push((int) 25080)
0xd50: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd51: IF (Stack[-1] == 0) GOTO 0xd61; Pop(1)

0xd52: PushEmpty(string)
0xd53: Stack[-1] = "Rage"
0xd54: Call2 0xbd2

0xd55: Pop(1)
0xd56: Push((int) 523811)
0xd57: @@ SetMessage(Stack[-1])
0xd58: Pop(1)
0xd59: @@ ClearReplies()
0xd5a: Pop(0)
0xd5b: Push((int) 523812)
0xd5c: Push((int) 25075)
0xd5d: Push((int) 25081)
0xd5e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5f: Pop(3)
0xd60: Return(); Pop(0)

0xd61: Push((int) 25075)
0xd62: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd63: IF (Stack[-1] == 0) GOTO 0xd73; Pop(1)

0xd64: PushEmpty(string)
0xd65: Stack[-1] = "Rage"
0xd66: Call2 0xbd2

0xd67: Pop(1)
0xd68: Push((int) 523806)
0xd69: @@ SetMessage(Stack[-1])
0xd6a: Pop(1)
0xd6b: @@ ClearReplies()
0xd6c: Pop(0)
0xd6d: Push((int) 523807)
0xd6e: Push((int) 25077)
0xd6f: Push((int) 25076)
0xd70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd71: Pop(3)
0xd72: Return(); Pop(0)

0xd73: Push((int) 25077)
0xd74: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd75: IF (Stack[-1] == 0) GOTO 0xd85; Pop(1)

0xd76: PushEmpty(string)
0xd77: Stack[-1] = "Sly"
0xd78: Call2 0xbd2

0xd79: Pop(1)
0xd7a: Push((int) 523808)
0xd7b: @@ SetMessage(Stack[-1])
0xd7c: Pop(1)
0xd7d: @@ ClearReplies()
0xd7e: Pop(0)
0xd7f: Push((int) 523809)
0xd80: Push((int) 22636)
0xd81: Push((int) 25078)
0xd82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd83: Pop(3)
0xd84: Return(); Pop(0)

0xd85: Push((int) 22636)
0xd86: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd87: IF (Stack[-1] == 0) GOTO 0xd9c; Pop(1)

0xd88: PushEmpty(string)
0xd89: Stack[-1] = "Rage"
0xd8a: Call2 0xbd2

0xd8b: Pop(1)
0xd8c: Push((int) 521471)
0xd8d: @@ SetMessage(Stack[-1])
0xd8e: Pop(1)
0xd8f: @@ ClearReplies()
0xd90: Pop(0)
0xd91: Push((int) 523813)
0xd92: Push((int) 25084)
0xd93: Push((int) 25083)
0xd94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd95: Pop(3)
0xd96: Push((int) 523815)
0xd97: Push((int) 25084)
0xd98: Push((int) 25085)
0xd99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9a: Pop(3)
0xd9b: Return(); Pop(0)

0xd9c: Push((int) 25084)
0xd9d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd9e: IF (Stack[-1] == 0) GOTO 0xdb3; Pop(1)

0xd9f: PushEmpty(string)
0xda0: Stack[-1] = "Fear"
0xda1: Call2 0xbd2

0xda2: Pop(1)
0xda3: Push((int) 523814)
0xda4: @@ SetMessage(Stack[-1])
0xda5: Pop(1)
0xda6: @@ ClearReplies()
0xda7: Pop(0)
0xda8: Push((int) 521472)
0xda9: Push((int) -1)
0xdaa: Push((int) 22637)
0xdab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdac: Pop(3)
0xdad: Push((int) 521473)
0xdae: Push((int) -1)
0xdaf: Push((int) 22638)
0xdb0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb1: Pop(3)
0xdb2: Return(); Pop(0)

0xdb3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xdb4: PushEmpty(bool)
0xdb5: Call2 0x145a

0xdb6: Pop(0)
0xdb7: IF (Stack[-1] == 0) GOTO 0xdbb; Pop(1)

0xdb8: @ lshStopAnimation()
0xdb9: Pop(0)
0xdba: GOTO 0xdbd

0xdbb: @ StopAnimation()
0xdbc: Pop(0)
0xdbd: Return(); Pop(0)

0xdbe: GOTO 0xbe9

0xdbf: Return(); Pop(0)

0xdc0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xdc1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xdc2: PushEmpty(bool, object, float)
0xdc3: Stack[-2] = Stack[-12]
0xdc4: Stack[-1] = (float) 70.0
0xdc5: Call2 0x124a

0xdc6: Pop(2)
0xdc7: Pop(1); Push((bool) Stack[-1] == 0)
0xdc8: IF (Stack[-1] == 0) GOTO 0xdcb; Pop(1)

0xdc9: Stack[-10] = (int) -2
0xdca: Return(); Pop(8)

0xdcb: @ CreateDialog(Stack[-4])
0xdcc: Pop(0)
0xdcd: PushEmpty(int)
0xdce: Call2 0x1454

0xdcf: Pop(0)
0xdd0: @@ SetNPCName(Stack[-1])
0xdd1: Pop(1)
0xdd2: PushEmpty(int)
0xdd3: Call2 0x1452

0xdd4: Pop(0)
0xdd5: @@ SetNPCDescription(Stack[-1])
0xdd6: Pop(1)
0xdd7: PushEmpty(string)
0xdd8: Call2 0x1456

0xdd9: Pop(0)
0xdda: @@ SetPhoto(Stack[-1])
0xddb: Pop(1)
0xddc: PushEmpty(string)
0xddd: Call2 0x1458

0xdde: Pop(0)
0xddf: @@ SetPhoto2(Stack[-1])
0xde0: Pop(1)
0xde1: PushEmpty(int)
0xde2: Call2 0x16ff

0xde3: Pop(0)
0xde4: @@ SetPlayerName(Stack[-1])
0xde5: Pop(1)
0xde6: Stack[-2] = (int) -1
0xde7: @ IsOverrideActive(Stack[-3])
0xde8: Pop(0)
0xde9: Push(Stack[-3])
0xdea: IF (Stack[-1] == 0) GOTO 0xded; Pop(1)

0xdeb: Stack[-10] = (int) -2
0xdec: Return(); Pop(8)

0xded: @ DoDialog(Stack[-4])
0xdee: Pop(0)
0xdef: PushEmpty(bool, object)
0xdf0: PushEmpty(object)
0xdf1: Call2 0x1360

0xdf2: Stack[-2] = Stack[-1]
0xdf3: Pop(1)
0xdf4: Call2 0x12a1

0xdf5: Pop(2)
0xdf6: PushEmpty(object, object)
0xdf7: Stack[-2] = Stack[-11]
0xdf8: Stack[-1] = Stack[-6]
0xdf9: Push(-2, 4); TaskCall(17)
0xdfa: Call2 0xe11

0xdfb: Pop(-2, 4); TaskReturn
0xdfc: Pop(2)
0xdfd: @@ IsDialogEnd(Stack[-1])
0xdfe: Pop(0)
0xdff: Pop(0); Push((bool) Stack[-1] == 0)
0xe00: IF (Stack[-1] == 0) GOTO 0xe06; Pop(1)

0xe01: @ sync()
0xe02: Pop(0)
0xe03: @@ IsDialogEnd(Stack[-1])
0xe04: Pop(0)
0xe05: GOTO 0xdff

0xe06: PushEmpty(object)
0xe07: Stack[-1] = Stack[-10]
0xe08: Call2 0x128f

0xe09: Pop(1)
0xe0a: @ StopDialog(Stack[-4])
0xe0b: Pop(0)
0xe0c: @@ GetReturnValue(Stack[-2])
0xe0d: Pop(0)
0xe0e: Stack[-10] = Stack[-2]
0xe0f: Return(); Pop(8)

0xe10: Stack[-4] = 0
0xe11: PushEmpty()
0xe12: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xe13: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xe14: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xe15: Push((int) 1)
0xe16: IF (Stack[-1] == 0) GOTO 0xe37; Pop(1)

0xe17: PushEmpty(string)
0xe18: Stack[-1] = "Fear"
0xe19: Call2 0xe55

0xe1a: Pop(1)
0xe1b: Push((int) 522079)
0xe1c: @@ SetMessage(Stack[-1])
0xe1d: Pop(1)
0xe1e: @@ ClearReplies()
0xe1f: Pop(0)
0xe20: PushEmpty(bool, object)
0xe21: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe22: Call2 0x15d1

0xe23: Pop(1)
0xe24: IF (Stack[-1] == 0) GOTO 0xe2a; Pop(1)

0xe25: Push((int) 523566)
0xe26: Push((int) 24801)
0xe27: Push((int) 24800)
0xe28: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe29: Pop(3)
0xe2a: Push((int) 523569)
0xe2b: Push((int) 24804)
0xe2c: Push((int) 24803)
0xe2d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2e: Pop(3)
0xe2f: Push((int) 522080)
0xe30: Push((int) -1)
0xe31: Push((int) 23249)
0xe32: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe33: Pop(3)
0xe34: GOTO 0xe37

0xe35: Return(); Pop(0)

0xe36: GOTO 0xe15

0xe37: PushEmpty(bool)
0xe38: Call2 0x145a

0xe39: Pop(0)
0xe3a: IF (Stack[-1] == 0) GOTO 0xe46; Pop(1)

0xe3b: @ lshWaitForAnimEnd()
0xe3c: Pop(0)
0xe3d: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe3e: IF (Stack[-1] == 0) GOTO 0xe40; Pop(1)

0xe3f: GOTO 0xe45

0xe40: PushEmpty(string)
0xe41: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe42: Call2 0x132b

0xe43: Pop(1)
0xe44: GOTO 0xe3b

0xe45: GOTO 0xe54

0xe46: Push("all")
0xe47: Push("idle")
0xe48: @ PlayAnimation(Stack[-2], Stack[-1])
0xe49: Pop(2)
0xe4a: @ WaitForAnimEnd()
0xe4b: Pop(0)
0xe4c: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe4d: IF (Stack[-1] == 0) GOTO 0xe4f; Pop(1)

0xe4e: GOTO 0xe54

0xe4f: Push("all")
0xe50: Push("idle")
0xe51: @ PlayAnimation(Stack[-2], Stack[-1])
0xe52: Pop(2)
0xe53: GOTO 0xe4a

0xe54: Return(); Pop(0)

0xe55: PushEmpty()
0xe56: PushEmpty(bool)
0xe57: Call2 0x145a

0xe58: Pop(0)
0xe59: Pop(1); Push((bool) Stack[-1] == 0)
0xe5a: IF (Stack[-1] == 0) GOTO 0xe5c; Pop(1)

0xe5b: Return(); Pop(0)

0xe5c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe5d: IF (Stack[-1] == 0) GOTO 0xe5f; Pop(1)

0xe5e: Return(); Pop(0)

0xe5f: PushEmpty(string, bool)
0xe60: Stack[-2] = Stack[-3]
0xe61: Push("")
0xe62: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe63: IF (Stack[-1] == 0) GOTO 0xe66; Pop(1)

0xe64: Stack[-1] = (bool) 0
0xe65: GOTO 0xe67

0xe66: Stack[-1] = (bool) 1
0xe67: Call2 0x133b

0xe68: Pop(2)
0xe69: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe6a: Return(); Pop(0)

0xe6b: PushEmpty()
0xe6c: Push((int) 1)
0xe6d: IF (Stack[-1] == 0) GOTO 0xfa7; Pop(1)

0xe6e: PushEmpty()
0xe6f: Call2 0x1359

0xe70: Pop(0)
0xe71: Push((int) 24800)
0xe72: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe73: IF (Stack[-1] == 0) GOTO 0xe79; Pop(1)

0xe74: PushEmpty(object, object)
0xe75: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe76: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe77: Call2 0x154d

0xe78: Pop(2)
0xe79: Push((int) 23247)
0xe7a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe7b: IF (Stack[-1] == 0) GOTO 0xe81; Pop(1)

0xe7c: PushEmpty(object, object)
0xe7d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe7e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe7f: Call2 0x1544

0xe80: Pop(2)
0xe81: Push((int) 23248)
0xe82: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe83: IF (Stack[-1] == 0) GOTO 0xea2; Pop(1)

0xe84: PushEmpty(string)
0xe85: Stack[-1] = "Fear"
0xe86: Call2 0xe55

0xe87: Pop(1)
0xe88: Push((int) 522079)
0xe89: @@ SetMessage(Stack[-1])
0xe8a: Pop(1)
0xe8b: @@ ClearReplies()
0xe8c: Pop(0)
0xe8d: PushEmpty(bool, object)
0xe8e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe8f: Call2 0x15d1

0xe90: Pop(1)
0xe91: IF (Stack[-1] == 0) GOTO 0xe97; Pop(1)

0xe92: Push((int) 523566)
0xe93: Push((int) 24801)
0xe94: Push((int) 24800)
0xe95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe96: Pop(3)
0xe97: Push((int) 523569)
0xe98: Push((int) 24804)
0xe99: Push((int) 24803)
0xe9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9b: Pop(3)
0xe9c: Push((int) 522080)
0xe9d: Push((int) -1)
0xe9e: Push((int) 23249)
0xe9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea0: Pop(3)
0xea1: Return(); Pop(0)

0xea2: Push((int) 24804)
0xea3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xea4: IF (Stack[-1] == 0) GOTO 0xeb9; Pop(1)

0xea5: PushEmpty(string)
0xea6: Stack[-1] = "Sly"
0xea7: Call2 0xe55

0xea8: Pop(1)
0xea9: Push((int) 523570)
0xeaa: @@ SetMessage(Stack[-1])
0xeab: Pop(1)
0xeac: @@ ClearReplies()
0xead: Pop(0)
0xeae: Push((int) 523571)
0xeaf: Push((int) 24807)
0xeb0: Push((int) 24805)
0xeb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb2: Pop(3)
0xeb3: Push((int) 523572)
0xeb4: Push((int) -1)
0xeb5: Push((int) 24806)
0xeb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb7: Pop(3)
0xeb8: Return(); Pop(0)

0xeb9: Push((int) 24807)
0xeba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xebb: IF (Stack[-1] == 0) GOTO 0xed0; Pop(1)

0xebc: PushEmpty(string)
0xebd: Stack[-1] = "Fear"
0xebe: Call2 0xe55

0xebf: Pop(1)
0xec0: Push((int) 523573)
0xec1: @@ SetMessage(Stack[-1])
0xec2: Pop(1)
0xec3: @@ ClearReplies()
0xec4: Pop(0)
0xec5: Push((int) 523574)
0xec6: Push((int) 24809)
0xec7: Push((int) 24808)
0xec8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec9: Pop(3)
0xeca: Push((int) 523576)
0xecb: Push((int) 24811)
0xecc: Push((int) 24810)
0xecd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xece: Pop(3)
0xecf: Return(); Pop(0)

0xed0: Push((int) 24811)
0xed1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed2: IF (Stack[-1] == 0) GOTO 0xee2; Pop(1)

0xed3: PushEmpty(string)
0xed4: Stack[-1] = "Rage"
0xed5: Call2 0xe55

0xed6: Pop(1)
0xed7: Push((int) 523577)
0xed8: @@ SetMessage(Stack[-1])
0xed9: Pop(1)
0xeda: @@ ClearReplies()
0xedb: Pop(0)
0xedc: Push((int) 523578)
0xedd: Push((int) 24809)
0xede: Push((int) 24812)
0xedf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee0: Pop(3)
0xee1: Return(); Pop(0)

0xee2: Push((int) 24809)
0xee3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee4: IF (Stack[-1] == 0) GOTO 0xf04; Pop(1)

0xee5: PushEmpty(string)
0xee6: Stack[-1] = "Sly"
0xee7: Call2 0xe55

0xee8: Pop(1)
0xee9: Push((int) 523575)
0xeea: @@ SetMessage(Stack[-1])
0xeeb: Pop(1)
0xeec: @@ ClearReplies()
0xeed: Pop(0)
0xeee: PushEmpty(bool, object)
0xeef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xef0: Call2 0x15c5

0xef1: Pop(1)
0xef2: Pop(1); Push((bool) Stack[-1] == 0)
0xef3: IF (Stack[-1] == 0) GOTO 0xef9; Pop(1)

0xef4: Push((int) 522078)
0xef5: Push((int) -1)
0xef6: Push((int) 23247)
0xef7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef8: Pop(3)
0xef9: PushEmpty(bool, object)
0xefa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xefb: Call2 0x15c5

0xefc: Pop(1)
0xefd: IF (Stack[-1] == 0) GOTO 0xf03; Pop(1)

0xefe: Push((int) 522087)
0xeff: Push((int) 24814)
0xf00: Push((int) 23256)
0xf01: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf02: Pop(3)
0xf03: Return(); Pop(0)

0xf04: Push((int) 24814)
0xf05: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf06: IF (Stack[-1] == 0) GOTO 0xf1b; Pop(1)

0xf07: PushEmpty(string)
0xf08: Stack[-1] = "Sly"
0xf09: Call2 0xe55

0xf0a: Pop(1)
0xf0b: Push((int) 523580)
0xf0c: @@ SetMessage(Stack[-1])
0xf0d: Pop(1)
0xf0e: @@ ClearReplies()
0xf0f: Pop(0)
0xf10: Push((int) 523582)
0xf11: Push((int) 24819)
0xf12: Push((int) 24817)
0xf13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf14: Pop(3)
0xf15: Push((int) 523583)
0xf16: Push((int) -1)
0xf17: Push((int) 24818)
0xf18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf19: Pop(3)
0xf1a: Return(); Pop(0)

0xf1b: Push((int) 24819)
0xf1c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1d: IF (Stack[-1] == 0) GOTO 0xf32; Pop(1)

0xf1e: PushEmpty(string)
0xf1f: Stack[-1] = "Sly"
0xf20: Call2 0xe55

0xf21: Pop(1)
0xf22: Push((int) 523584)
0xf23: @@ SetMessage(Stack[-1])
0xf24: Pop(1)
0xf25: @@ ClearReplies()
0xf26: Pop(0)
0xf27: Push((int) 523585)
0xf28: Push((int) -1)
0xf29: Push((int) 24820)
0xf2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2b: Pop(3)
0xf2c: Push((int) 523586)
0xf2d: Push((int) -1)
0xf2e: Push((int) 24821)
0xf2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf30: Pop(3)
0xf31: Return(); Pop(0)

0xf32: Push((int) 24801)
0xf33: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf34: IF (Stack[-1] == 0) GOTO 0xf44; Pop(1)

0xf35: PushEmpty(string)
0xf36: Stack[-1] = "Sly"
0xf37: Call2 0xe55

0xf38: Pop(1)
0xf39: Push((int) 523567)
0xf3a: @@ SetMessage(Stack[-1])
0xf3b: Pop(1)
0xf3c: @@ ClearReplies()
0xf3d: Pop(0)
0xf3e: Push((int) 523568)
0xf3f: Push((int) 24822)
0xf40: Push((int) 24802)
0xf41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf42: Pop(3)
0xf43: Return(); Pop(0)

0xf44: Push((int) 24822)
0xf45: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf46: IF (Stack[-1] == 0) GOTO 0xf5b; Pop(1)

0xf47: PushEmpty(string)
0xf48: Stack[-1] = "Sly"
0xf49: Call2 0xe55

0xf4a: Pop(1)
0xf4b: Push((int) 523587)
0xf4c: @@ SetMessage(Stack[-1])
0xf4d: Pop(1)
0xf4e: @@ ClearReplies()
0xf4f: Pop(0)
0xf50: Push((int) 523588)
0xf51: Push((int) 24824)
0xf52: Push((int) 24823)
0xf53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf54: Pop(3)
0xf55: Push((int) 523595)
0xf56: Push((int) -1)
0xf57: Push((int) 24830)
0xf58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf59: Pop(3)
0xf5a: Return(); Pop(0)

0xf5b: Push((int) 24824)
0xf5c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5d: IF (Stack[-1] == 0) GOTO 0xf6d; Pop(1)

0xf5e: PushEmpty(string)
0xf5f: Stack[-1] = "Neutral"
0xf60: Call2 0xe55

0xf61: Pop(1)
0xf62: Push((int) 523589)
0xf63: @@ SetMessage(Stack[-1])
0xf64: Pop(1)
0xf65: @@ ClearReplies()
0xf66: Pop(0)
0xf67: Push((int) 523590)
0xf68: Push((int) 24826)
0xf69: Push((int) 24825)
0xf6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6b: Pop(3)
0xf6c: Return(); Pop(0)

0xf6d: Push((int) 24826)
0xf6e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6f: IF (Stack[-1] == 0) GOTO 0xf84; Pop(1)

0xf70: PushEmpty(string)
0xf71: Stack[-1] = "Untrust"
0xf72: Call2 0xe55

0xf73: Pop(1)
0xf74: Push((int) 523591)
0xf75: @@ SetMessage(Stack[-1])
0xf76: Pop(1)
0xf77: @@ ClearReplies()
0xf78: Pop(0)
0xf79: Push((int) 523592)
0xf7a: Push((int) 24828)
0xf7b: Push((int) 24827)
0xf7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7d: Pop(3)
0xf7e: Push((int) 523594)
0xf7f: Push((int) -1)
0xf80: Push((int) 24829)
0xf81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf82: Pop(3)
0xf83: Return(); Pop(0)

0xf84: Push((int) 24828)
0xf85: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf86: IF (Stack[-1] == 0) GOTO 0xf9b; Pop(1)

0xf87: PushEmpty(string)
0xf88: Stack[-1] = "Sly"
0xf89: Call2 0xe55

0xf8a: Pop(1)
0xf8b: Push((int) 523593)
0xf8c: @@ SetMessage(Stack[-1])
0xf8d: Pop(1)
0xf8e: @@ ClearReplies()
0xf8f: Pop(0)
0xf90: Push((int) 523596)
0xf91: Push((int) -1)
0xf92: Push((int) 24831)
0xf93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf94: Pop(3)
0xf95: Push((int) 523597)
0xf96: Push((int) -1)
0xf97: Push((int) 24832)
0xf98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf99: Pop(3)
0xf9a: Return(); Pop(0)

0xf9b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf9c: PushEmpty(bool)
0xf9d: Call2 0x145a

0xf9e: Pop(0)
0xf9f: IF (Stack[-1] == 0) GOTO 0xfa3; Pop(1)

0xfa0: @ lshStopAnimation()
0xfa1: Pop(0)
0xfa2: GOTO 0xfa5

0xfa3: @ StopAnimation()
0xfa4: Pop(0)
0xfa5: Return(); Pop(0)

0xfa6: GOTO 0xe6c

0xfa7: Return(); Pop(0)

0xfa8: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xfa9: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xfaa: PushEmpty(bool, object, float)
0xfab: Stack[-2] = Stack[-12]
0xfac: Stack[-1] = (float) 70.0
0xfad: Call2 0x124a

0xfae: Pop(2)
0xfaf: Pop(1); Push((bool) Stack[-1] == 0)
0xfb0: IF (Stack[-1] == 0) GOTO 0xfb3; Pop(1)

0xfb1: Stack[-10] = (int) -2
0xfb2: Return(); Pop(8)

0xfb3: @ CreateDialog(Stack[-4])
0xfb4: Pop(0)
0xfb5: PushEmpty(int)
0xfb6: Call2 0x1454

0xfb7: Pop(0)
0xfb8: @@ SetNPCName(Stack[-1])
0xfb9: Pop(1)
0xfba: PushEmpty(int)
0xfbb: Call2 0x1452

0xfbc: Pop(0)
0xfbd: @@ SetNPCDescription(Stack[-1])
0xfbe: Pop(1)
0xfbf: PushEmpty(string)
0xfc0: Call2 0x1456

0xfc1: Pop(0)
0xfc2: @@ SetPhoto(Stack[-1])
0xfc3: Pop(1)
0xfc4: PushEmpty(string)
0xfc5: Call2 0x1458

0xfc6: Pop(0)
0xfc7: @@ SetPhoto2(Stack[-1])
0xfc8: Pop(1)
0xfc9: PushEmpty(int)
0xfca: Call2 0x16ff

0xfcb: Pop(0)
0xfcc: @@ SetPlayerName(Stack[-1])
0xfcd: Pop(1)
0xfce: Stack[-2] = (int) -1
0xfcf: @ IsOverrideActive(Stack[-3])
0xfd0: Pop(0)
0xfd1: Push(Stack[-3])
0xfd2: IF (Stack[-1] == 0) GOTO 0xfd5; Pop(1)

0xfd3: Stack[-10] = (int) -2
0xfd4: Return(); Pop(8)

0xfd5: @ DoDialog(Stack[-4])
0xfd6: Pop(0)
0xfd7: PushEmpty(bool, object)
0xfd8: PushEmpty(object)
0xfd9: Call2 0x1360

0xfda: Stack[-2] = Stack[-1]
0xfdb: Pop(1)
0xfdc: Call2 0x12a1

0xfdd: Pop(2)
0xfde: PushEmpty(object, object)
0xfdf: Stack[-2] = Stack[-11]
0xfe0: Stack[-1] = Stack[-6]
0xfe1: Push(-2, 4); TaskCall(19)
0xfe2: Call2 0xff9

0xfe3: Pop(-2, 4); TaskReturn
0xfe4: Pop(2)
0xfe5: @@ IsDialogEnd(Stack[-1])
0xfe6: Pop(0)
0xfe7: Pop(0); Push((bool) Stack[-1] == 0)
0xfe8: IF (Stack[-1] == 0) GOTO 0xfee; Pop(1)

0xfe9: @ sync()
0xfea: Pop(0)
0xfeb: @@ IsDialogEnd(Stack[-1])
0xfec: Pop(0)
0xfed: GOTO 0xfe7

0xfee: PushEmpty(object)
0xfef: Stack[-1] = Stack[-10]
0xff0: Call2 0x128f

0xff1: Pop(1)
0xff2: @ StopDialog(Stack[-4])
0xff3: Pop(0)
0xff4: @@ GetReturnValue(Stack[-2])
0xff5: Pop(0)
0xff6: Stack[-10] = Stack[-2]
0xff7: Return(); Pop(8)

0xff8: Stack[-4] = 0
0xff9: PushEmpty()
0xffa: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xffb: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xffc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xffd: Push((int) 1)
0xffe: IF (Stack[-1] == 0) GOTO 0x101a; Pop(1)

0xfff: PushEmpty(string)
0x1000: Stack[-1] = "Neutral"
0x1001: Call2 0x1038

0x1002: Pop(1)
0x1003: Push((int) 535231)
0x1004: @@ SetMessage(Stack[-1])
0x1005: Pop(1)
0x1006: @@ ClearReplies()
0x1007: Pop(0)
0x1008: Push((int) 535232)
0x1009: Push((int) 36953)
0x100a: Push((int) 36907)
0x100b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100c: Pop(3)
0x100d: Push((int) 535233)
0x100e: Push((int) -1)
0x100f: Push((int) 36908)
0x1010: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1011: Pop(3)
0x1012: Push((int) 535280)
0x1013: Push((int) -1)
0x1014: Push((int) 36956)
0x1015: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1016: Pop(3)
0x1017: GOTO 0x101a

0x1018: Return(); Pop(0)

0x1019: GOTO 0xffd

0x101a: PushEmpty(bool)
0x101b: Call2 0x145a

0x101c: Pop(0)
0x101d: IF (Stack[-1] == 0) GOTO 0x1029; Pop(1)

0x101e: @ lshWaitForAnimEnd()
0x101f: Pop(0)
0x1020: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1021: IF (Stack[-1] == 0) GOTO 0x1023; Pop(1)

0x1022: GOTO 0x1028

0x1023: PushEmpty(string)
0x1024: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1025: Call2 0x132b

0x1026: Pop(1)
0x1027: GOTO 0x101e

0x1028: GOTO 0x1037

0x1029: Push("all")
0x102a: Push("idle")
0x102b: @ PlayAnimation(Stack[-2], Stack[-1])
0x102c: Pop(2)
0x102d: @ WaitForAnimEnd()
0x102e: Pop(0)
0x102f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1030: IF (Stack[-1] == 0) GOTO 0x1032; Pop(1)

0x1031: GOTO 0x1037

0x1032: Push("all")
0x1033: Push("idle")
0x1034: @ PlayAnimation(Stack[-2], Stack[-1])
0x1035: Pop(2)
0x1036: GOTO 0x102d

0x1037: Return(); Pop(0)

0x1038: PushEmpty()
0x1039: PushEmpty(bool)
0x103a: Call2 0x145a

0x103b: Pop(0)
0x103c: Pop(1); Push((bool) Stack[-1] == 0)
0x103d: IF (Stack[-1] == 0) GOTO 0x103f; Pop(1)

0x103e: Return(); Pop(0)

0x103f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1040: IF (Stack[-1] == 0) GOTO 0x1042; Pop(1)

0x1041: Return(); Pop(0)

0x1042: PushEmpty(string, bool)
0x1043: Stack[-2] = Stack[-3]
0x1044: Push("")
0x1045: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1046: IF (Stack[-1] == 0) GOTO 0x1049; Pop(1)

0x1047: Stack[-1] = (bool) 0
0x1048: GOTO 0x104a

0x1049: Stack[-1] = (bool) 1
0x104a: Call2 0x133b

0x104b: Pop(2)
0x104c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x104d: Return(); Pop(0)

0x104e: PushEmpty()
0x104f: Push((int) 1)
0x1050: IF (Stack[-1] == 0) GOTO 0x10aa; Pop(1)

0x1051: PushEmpty()
0x1052: Call2 0x1359

0x1053: Pop(0)
0x1054: Push((int) 36906)
0x1055: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1056: IF (Stack[-1] == 0) GOTO 0x1070; Pop(1)

0x1057: PushEmpty(string)
0x1058: Stack[-1] = "Neutral"
0x1059: Call2 0x1038

0x105a: Pop(1)
0x105b: Push((int) 535231)
0x105c: @@ SetMessage(Stack[-1])
0x105d: Pop(1)
0x105e: @@ ClearReplies()
0x105f: Pop(0)
0x1060: Push((int) 535232)
0x1061: Push((int) 36953)
0x1062: Push((int) 36907)
0x1063: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1064: Pop(3)
0x1065: Push((int) 535233)
0x1066: Push((int) -1)
0x1067: Push((int) 36908)
0x1068: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1069: Pop(3)
0x106a: Push((int) 535280)
0x106b: Push((int) -1)
0x106c: Push((int) 36956)
0x106d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106e: Pop(3)
0x106f: Return(); Pop(0)

0x1070: Push((int) 36953)
0x1071: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1072: IF (Stack[-1] == 0) GOTO 0x1087; Pop(1)

0x1073: PushEmpty(string)
0x1074: Stack[-1] = "Neutral"
0x1075: Call2 0x1038

0x1076: Pop(1)
0x1077: Push((int) 535277)
0x1078: @@ SetMessage(Stack[-1])
0x1079: Pop(1)
0x107a: @@ ClearReplies()
0x107b: Pop(0)
0x107c: Push((int) 535278)
0x107d: Push((int) 36957)
0x107e: Push((int) 36954)
0x107f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1080: Pop(3)
0x1081: Push((int) 535279)
0x1082: Push((int) 36957)
0x1083: Push((int) 36955)
0x1084: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1085: Pop(3)
0x1086: Return(); Pop(0)

0x1087: Push((int) 36957)
0x1088: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1089: IF (Stack[-1] == 0) GOTO 0x109e; Pop(1)

0x108a: PushEmpty(string)
0x108b: Stack[-1] = "Neutral"
0x108c: Call2 0x1038

0x108d: Pop(1)
0x108e: Push((int) 535281)
0x108f: @@ SetMessage(Stack[-1])
0x1090: Pop(1)
0x1091: @@ ClearReplies()
0x1092: Pop(0)
0x1093: Push((int) 535282)
0x1094: Push((int) -1)
0x1095: Push((int) 36958)
0x1096: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1097: Pop(3)
0x1098: Push((int) 535283)
0x1099: Push((int) -1)
0x109a: Push((int) 36959)
0x109b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109c: Pop(3)
0x109d: Return(); Pop(0)

0x109e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x109f: PushEmpty(bool)
0x10a0: Call2 0x145a

0x10a1: Pop(0)
0x10a2: IF (Stack[-1] == 0) GOTO 0x10a6; Pop(1)

0x10a3: @ lshStopAnimation()
0x10a4: Pop(0)
0x10a5: GOTO 0x10a8

0x10a6: @ StopAnimation()
0x10a7: Pop(0)
0x10a8: Return(); Pop(0)

0x10a9: GOTO 0x104f

0x10aa: Return(); Pop(0)

0x10ab: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x10ac: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x10ad: PushEmpty(bool, object, float)
0x10ae: Stack[-2] = Stack[-12]
0x10af: Stack[-1] = (float) 70.0
0x10b0: Call2 0x124a

0x10b1: Pop(2)
0x10b2: Pop(1); Push((bool) Stack[-1] == 0)
0x10b3: IF (Stack[-1] == 0) GOTO 0x10b6; Pop(1)

0x10b4: Stack[-10] = (int) -2
0x10b5: Return(); Pop(8)

0x10b6: @ CreateDialog(Stack[-4])
0x10b7: Pop(0)
0x10b8: PushEmpty(int)
0x10b9: Call2 0x1454

0x10ba: Pop(0)
0x10bb: @@ SetNPCName(Stack[-1])
0x10bc: Pop(1)
0x10bd: PushEmpty(int)
0x10be: Call2 0x1452

0x10bf: Pop(0)
0x10c0: @@ SetNPCDescription(Stack[-1])
0x10c1: Pop(1)
0x10c2: PushEmpty(string)
0x10c3: Call2 0x1456

0x10c4: Pop(0)
0x10c5: @@ SetPhoto(Stack[-1])
0x10c6: Pop(1)
0x10c7: PushEmpty(string)
0x10c8: Call2 0x1458

0x10c9: Pop(0)
0x10ca: @@ SetPhoto2(Stack[-1])
0x10cb: Pop(1)
0x10cc: PushEmpty(int)
0x10cd: Call2 0x16ff

0x10ce: Pop(0)
0x10cf: @@ SetPlayerName(Stack[-1])
0x10d0: Pop(1)
0x10d1: Stack[-2] = (int) -1
0x10d2: @ IsOverrideActive(Stack[-3])
0x10d3: Pop(0)
0x10d4: Push(Stack[-3])
0x10d5: IF (Stack[-1] == 0) GOTO 0x10d8; Pop(1)

0x10d6: Stack[-10] = (int) -2
0x10d7: Return(); Pop(8)

0x10d8: @ DoDialog(Stack[-4])
0x10d9: Pop(0)
0x10da: PushEmpty(bool, object)
0x10db: PushEmpty(object)
0x10dc: Call2 0x1360

0x10dd: Stack[-2] = Stack[-1]
0x10de: Pop(1)
0x10df: Call2 0x12a1

0x10e0: Pop(2)
0x10e1: PushEmpty(object, object)
0x10e2: Stack[-2] = Stack[-11]
0x10e3: Stack[-1] = Stack[-6]
0x10e4: Push(-2, 4); TaskCall(21)
0x10e5: Call2 0x10fc

0x10e6: Pop(-2, 4); TaskReturn
0x10e7: Pop(2)
0x10e8: @@ IsDialogEnd(Stack[-1])
0x10e9: Pop(0)
0x10ea: Pop(0); Push((bool) Stack[-1] == 0)
0x10eb: IF (Stack[-1] == 0) GOTO 0x10f1; Pop(1)

0x10ec: @ sync()
0x10ed: Pop(0)
0x10ee: @@ IsDialogEnd(Stack[-1])
0x10ef: Pop(0)
0x10f0: GOTO 0x10ea

0x10f1: PushEmpty(object)
0x10f2: Stack[-1] = Stack[-10]
0x10f3: Call2 0x128f

0x10f4: Pop(1)
0x10f5: @ StopDialog(Stack[-4])
0x10f6: Pop(0)
0x10f7: @@ GetReturnValue(Stack[-2])
0x10f8: Pop(0)
0x10f9: Stack[-10] = Stack[-2]
0x10fa: Return(); Pop(8)

0x10fb: Stack[-4] = 0
0x10fc: PushEmpty()
0x10fd: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x10fe: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x10ff: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1100: Push((int) 1)
0x1101: IF (Stack[-1] == 0) GOTO 0x1118; Pop(1)

0x1102: PushEmpty(string)
0x1103: Stack[-1] = "Neutral"
0x1104: Call2 0x1136

0x1105: Pop(1)
0x1106: Push((int) 540554)
0x1107: @@ SetMessage(Stack[-1])
0x1108: Pop(1)
0x1109: @@ ClearReplies()
0x110a: Pop(0)
0x110b: Push((int) 540555)
0x110c: Push((int) -1)
0x110d: Push((int) 42564)
0x110e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110f: Pop(3)
0x1110: Push((int) 540794)
0x1111: Push((int) -1)
0x1112: Push((int) 42843)
0x1113: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1114: Pop(3)
0x1115: GOTO 0x1118

0x1116: Return(); Pop(0)

0x1117: GOTO 0x1100

0x1118: PushEmpty(bool)
0x1119: Call2 0x145a

0x111a: Pop(0)
0x111b: IF (Stack[-1] == 0) GOTO 0x1127; Pop(1)

0x111c: @ lshWaitForAnimEnd()
0x111d: Pop(0)
0x111e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x111f: IF (Stack[-1] == 0) GOTO 0x1121; Pop(1)

0x1120: GOTO 0x1126

0x1121: PushEmpty(string)
0x1122: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1123: Call2 0x132b

0x1124: Pop(1)
0x1125: GOTO 0x111c

0x1126: GOTO 0x1135

0x1127: Push("all")
0x1128: Push("idle")
0x1129: @ PlayAnimation(Stack[-2], Stack[-1])
0x112a: Pop(2)
0x112b: @ WaitForAnimEnd()
0x112c: Pop(0)
0x112d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x112e: IF (Stack[-1] == 0) GOTO 0x1130; Pop(1)

0x112f: GOTO 0x1135

0x1130: Push("all")
0x1131: Push("idle")
0x1132: @ PlayAnimation(Stack[-2], Stack[-1])
0x1133: Pop(2)
0x1134: GOTO 0x112b

0x1135: Return(); Pop(0)

0x1136: PushEmpty()
0x1137: PushEmpty(bool)
0x1138: Call2 0x145a

0x1139: Pop(0)
0x113a: Pop(1); Push((bool) Stack[-1] == 0)
0x113b: IF (Stack[-1] == 0) GOTO 0x113d; Pop(1)

0x113c: Return(); Pop(0)

0x113d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x113e: IF (Stack[-1] == 0) GOTO 0x1140; Pop(1)

0x113f: Return(); Pop(0)

0x1140: PushEmpty(string, bool)
0x1141: Stack[-2] = Stack[-3]
0x1142: Push("")
0x1143: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1144: IF (Stack[-1] == 0) GOTO 0x1147; Pop(1)

0x1145: Stack[-1] = (bool) 0
0x1146: GOTO 0x1148

0x1147: Stack[-1] = (bool) 1
0x1148: Call2 0x133b

0x1149: Pop(2)
0x114a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x114b: Return(); Pop(0)

0x114c: PushEmpty()
0x114d: Push((int) 1)
0x114e: IF (Stack[-1] == 0) GOTO 0x1175; Pop(1)

0x114f: PushEmpty()
0x1150: Call2 0x1359

0x1151: Pop(0)
0x1152: Push((int) 42563)
0x1153: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1154: IF (Stack[-1] == 0) GOTO 0x1169; Pop(1)

0x1155: PushEmpty(string)
0x1156: Stack[-1] = "Neutral"
0x1157: Call2 0x1136

0x1158: Pop(1)
0x1159: Push((int) 540554)
0x115a: @@ SetMessage(Stack[-1])
0x115b: Pop(1)
0x115c: @@ ClearReplies()
0x115d: Pop(0)
0x115e: Push((int) 540555)
0x115f: Push((int) -1)
0x1160: Push((int) 42564)
0x1161: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1162: Pop(3)
0x1163: Push((int) 540794)
0x1164: Push((int) -1)
0x1165: Push((int) 42843)
0x1166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1167: Pop(3)
0x1168: Return(); Pop(0)

0x1169: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x116a: PushEmpty(bool)
0x116b: Call2 0x145a

0x116c: Pop(0)
0x116d: IF (Stack[-1] == 0) GOTO 0x1171; Pop(1)

0x116e: @ lshStopAnimation()
0x116f: Pop(0)
0x1170: GOTO 0x1173

0x1171: @ StopAnimation()
0x1172: Pop(0)
0x1173: Return(); Pop(0)

0x1174: GOTO 0x114d

0x1175: Return(); Pop(0)

0x1176: Push(GlobalVars[2])
0x1177: Stack[-1] = (bool) 0
0x1178: GlobalVars[2] = Stack[-1]; Pop(1)
0x1179: PushEmpty()
0x117a: Call2 0x117d

0x117b: Pop(0)
0x117c: Return(); Pop(0)

0x117d: PushEmpty(object, bool, int, bool, cvector, cvector, cvector, float, cvector, bool, cvector, object, bool, int, bool, cvector, cvector, cvector, float, cvector, bool, cvector)
0x117e: Push((bool) 1)
0x117f: @ SensePlayerOnly(Stack[-1])
0x1180: Pop(1)
0x1181: PushEmpty()
0x1182: Call2 0x11d5

0x1183: Pop(0)
0x1184: @ GetScene(Stack[-11])
0x1185: Pop(0)
0x1186: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x1187: PushEmpty(string, int)
0x1188: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1189: Call2 0x1444

0x118a: Pop(1)
0x118b: @@ GetLocator(Stack[-1], Stack[-11])
0x118c: Pop(1)
0x118d: Pop(0); Push((bool) Stack[-10] == 0)
0x118e: IF (Stack[-1] == 0) GOTO 0x1190; Pop(1)

0x118f: GOTO 0x1193

0x1190: Push((int) 1)
0x1191: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1192: GOTO 0x1187

0x1193: PushEmpty(bool)
0x1194: Call2 0x1245

0x1195: Pop(0)
0x1196: Pop(1); Push((bool) Stack[-1] == 0)
0x1197: IF (Stack[-1] == 0) GOTO 0x119d; Pop(1)

0x1198: PushEmpty()
0x1199: Push(-0, 0); TaskCall(0)
0x119a: Call2 0x0

0x119b: Pop(-0, 0); TaskReturn
0x119c: Pop(0)
0x119d: PushEmpty()
0x119e: Call2 0x11dd

0x119f: Pop(0)
0x11a0: @ irand(Stack[-9], Stack[-2])
0x11a1: Pop(0)
0x11a2: PushEmpty(string, int)
0x11a3: Stack[-1] = Stack[-11]
0x11a4: Call2 0x1444

0x11a5: Pop(1)
0x11a6: @@ GetLocator(Stack[-1], Stack[-9], Stack[-8], Stack[-7])
0x11a7: Pop(1)
0x11a8: PushEmpty(cvector)
0x11a9: Call2 0x120c

0x11aa: Pop(0)
0x11ab: Stack[-6] = Stack[-8] - Stack[-1]; Pop(1);
0x11ac: PushEmpty(float, cvector)
0x11ad: Stack[-1] = Stack[-7]
0x11ae: Call2 0x1378

0x11af: Pop(1)
0x11b0: Pop(1); Push((bool) Stack[-1] > Stack[1 + Tasks[-1].StackPointer])
0x11b1: IF (Stack[-1] == 0) GOTO 0x11cf; Pop(1)

0x11b2: @ GetHeight(Stack[-4])
0x11b3: Pop(0)
0x11b4: Stack[-3] = Stack[-7]
0x11b5: Push(CvectorIndex(Stack[-3], 1))
0x11b6: Stack[-1] = Stack[-1] + Stack[-5]; Pop(0);
0x11b7: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x11b8: @ CanReachByPF(Stack[-2], Stack[-3])
0x11b9: Pop(0)
0x11ba: Push(Stack[-2])
0x11bb: IF (Stack[-1] == 0) GOTO 0x11cf; Pop(1)

0x11bc: Pop(0); Push(Stack[-5] | Stack[-5]);
0x11bd: Pop(1); Push(Sqrt(Stack[-1]))
0x11be: Pop(1); Push(Stack[0 + StackPtr] / Stack[-1]);
0x11bf: Pop(1); Push(Stack[-6] * Stack[-1]);
0x11c0: Stack[-2] = Stack[-8] - Stack[-1]; Pop(1);
0x11c1: PushEmpty(bool, cvector, cvector)
0x11c2: Stack[-2] = Stack[-4]
0x11c3: Stack[-1] = Stack[-9]
0x11c4: Push(-3, 1); TaskCall(1)
0x11c5: Call2 0xd

0x11c6: Pop(-3, 1); TaskReturn
0x11c7: Pop(2)
0x11c8: IF (Stack[-1] == 0) GOTO 0x11cf; Pop(1)

0x11c9: PushEmpty(int)
0x11ca: Stack[-1] = Stack[-10]
0x11cb: Push(-1, 0); TaskCall(3)
0x11cc: Call2 0xc6

0x11cd: Pop(-1, 0); TaskReturn
0x11ce: Pop(1)
0x11cf: Push((int) 1)
0x11d0: @ Sleep(Stack[-1])
0x11d1: Pop(1)
0x11d2: GOTO 0x11a0

0x11d3: Return(); Pop(22)

0x11d4: Stack[-11] = 0
0x11d5: PushEmpty(string, string)
0x11d6: Push("loc")
0x11d7: @ GetProperty(Stack[-1], Stack[-2])
0x11d8: Pop(1)
0x11d9: Push(GlobalVars[0])
0x11da: Stack[-1] = Stack[-2]
0x11db: GlobalVars[0] = Stack[-1]; Pop(1)
0x11dc: Return(); Pop(2)

0x11dd: PushEmpty(cvector, cvector, cvector, cvector)
0x11de: Push("all")
0x11df: Push("walk_stopl")
0x11e0: @ GetAnimationOffset(Stack[-4], Stack[-2], Stack[-1])
0x11e1: Pop(2)
0x11e2: Push("all")
0x11e3: Push("walk_stopr")
0x11e4: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x11e5: Pop(2)
0x11e6: Push(CvectorIndex(Stack[-2], 2))
0x11e7: Push(CvectorIndex(Stack[-2], 2))
0x11e8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11e9: Push((float)2.0)
0x11ea: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x11eb: PushEmpty(float, float)
0x11ec: Push(CvectorIndex(Stack[-4], 2))
0x11ed: Stack[-2] = Stack[-1] - Stack[0 + Tasks[-1].StackPointer]; Pop(1);
0x11ee: Call2 0x1370

0x11ef: Pop(1)
0x11f0: Push((int) 40)
0x11f1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x11f2: Return(); Pop(4)

0x11f3: PushEmpty()
0x11f4: Call2 0x1451

0x11f5: Pop(0)
0x11f6: PushEmpty()
0x11f7: Push(-0, 0); TaskCall(0)
0x11f8: Call2 0x0

0x11f9: Pop(-0, 0); TaskReturn
0x11fa: Pop(0)
0x11fb: Return(); Pop(0)

0x11fc: PushEmpty(bool, bool)
0x11fd: @ IsOverrideActive(Stack[-1])
0x11fe: Pop(0)
0x11ff: Pop(0); Push((bool) Stack[-1] == 0)
0x1200: IF (Stack[-1] == 0) GOTO 0x120b; Pop(1)

0x1201: EventDisable(0)
0x1202: PushEmpty(bool, object)
0x1203: Stack[-1] = Stack[-5]
0x1204: Call2 0x1231

0x1205: Pop(2)
0x1206: EventEnable(0)
0x1207: PushEmpty(object)
0x1208: Stack[-1] = Stack[-4]
0x1209: Call2 0x1710

0x120a: Pop(1)
0x120b: Return(); Pop(2)

0x120c: PushEmpty(cvector, cvector)
0x120d: @ GetPosition(Stack[-1])
0x120e: Pop(0)
0x120f: Stack[-3] = Stack[-1]
0x1210: Return(); Pop(2)

0x1211: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1212: @ GetPosition(Stack[-3])
0x1213: Pop(0)
0x1214: @@ GetPosition(Stack[-2])
0x1215: Pop(0)
0x1216: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1217: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1218: Return(); Pop(6)

0x1219: PushEmpty(object, object)
0x121a: Push("player")
0x121b: @ FindActor(Stack[-2], Stack[-1])
0x121c: Pop(1)
0x121d: Stack[-3] = Stack[-1]
0x121e: Return(); Pop(2)

0x121f: Stack[-1] = 0
0x1220: PushEmpty(int, int)
0x1221: @@ GetProperty(Stack[-4], Stack[-1])
0x1222: Pop(0)
0x1223: Pop(0); Push(Stack[-1] + Stack[-3]);
0x1224: @@ SetProperty(Stack[-5], Stack[-1])
0x1225: Pop(1)
0x1226: Return(); Pop(2)

0x1227: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x1228: @ GetPosition(Stack[-3])
0x1229: Pop(0)
0x122a: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x122b: Push(CvectorIndex(Stack[-2], 0))
0x122c: Push(CvectorIndex(Stack[-3], 2))
0x122d: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x122e: Pop(2)
0x122f: Stack[-8] = Stack[-1]
0x1230: Return(); Pop(6)

0x1231: PushEmpty(cvector, cvector)
0x1232: @@ GetPosition(Stack[-1])
0x1233: Pop(0)
0x1234: PushEmpty(bool, cvector)
0x1235: Stack[-1] = Stack[-3]
0x1236: Call2 0x1227

0x1237: Stack[-6] = Stack[-2]
0x1238: Pop(2)
0x1239: Return(); Pop(2)

0x123a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x123b: @@ GetPosition(Stack[-3])
0x123c: Pop(0)
0x123d: @ GetPosition(Stack[-2])
0x123e: Pop(0)
0x123f: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x1240: Push(CvectorIndex(Stack[-1], 0))
0x1241: Push(CvectorIndex(Stack[-2], 2))
0x1242: @ RotateAsync(Stack[-2], Stack[-1])
0x1243: Pop(2)
0x1244: Return(); Pop(6)

0x1245: PushEmpty(bool, bool)
0x1246: @ IsLoaded(Stack[-1])
0x1247: Pop(0)
0x1248: Stack[-3] = Stack[-1]
0x1249: Return(); Pop(2)

0x124a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x124b: @@ GetPosition(Stack[-8])
0x124c: Pop(0)
0x124d: @@ GetEyesHeight(Stack[-9])
0x124e: Pop(0)
0x124f: Push(CvectorIndex(Stack[-8], 1))
0x1250: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1251: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1252: @ GetPosition(Stack[-7])
0x1253: Pop(0)
0x1254: @ GetEyesHeight(Stack[-9])
0x1255: Pop(0)
0x1256: Push(CvectorIndex(Stack[-7], 1))
0x1257: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1258: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1259: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x125a: Push(CvectorIndex(Stack[-6], 1))
0x125b: Stack[-1] = (int) 0
0x125c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x125d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x125e: Pop(1); Push(Sqrt(Stack[-1]))
0x125f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1260: Stack[-5] = -Stack[-6]; Pop(0);
0x1261: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1262: PushEmpty(cvector, cvector)
0x1263: Push(CVector(0.0, 1.0, 0.0))
0x1264: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1265: Call2 0x1366

0x1266: Pop(1)
0x1267: Push((int) 25)
0x1268: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1269: Pop(2); Push(Stack[-2] + Stack[-1]);
0x126a: Push(CVector(0.0, 10.0, 0.0))
0x126b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x126c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x126d: @ IsOverrideActive(Stack[-2])
0x126e: Pop(0)
0x126f: Push(Stack[-2])
0x1270: IF (Stack[-1] == 0) GOTO 0x1273; Pop(1)

0x1271: Stack[-21] = (bool) 0
0x1272: Return(); Pop(18)

0x1273: @ StopWorld()
0x1274: Pop(0)
0x1275: Push((bool) 1)
0x1276: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1277: Pop(1)
0x1278: Push(CvectorIndex(Stack[-4], 0))
0x1279: Push(CvectorIndex(Stack[-5], 2))
0x127a: @ Rotate(Stack[-2], Stack[-1])
0x127b: Pop(2)
0x127c: PushEmpty(bool)
0x127d: Call2 0x145a

0x127e: Pop(0)
0x127f: IF (Stack[-1] == 0) GOTO 0x1281; Pop(1)

0x1280: GOTO 0x1289

0x1281: Push("head")
0x1282: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1283: Pop(1)
0x1284: Push(Stack[-1])
0x1285: IF (Stack[-1] == 0) GOTO 0x1289; Pop(1)

0x1286: Push("head")
0x1287: @ LookAsyncCamera(Stack[-1])
0x1288: Pop(1)
0x1289: @ CameraWaitForPlayFinish()
0x128a: Pop(0)
0x128b: @ ResumeWorld()
0x128c: Pop(0)
0x128d: Stack[-21] = (bool) 1
0x128e: Return(); Pop(18)

0x128f: PushEmpty(bool, bool)
0x1290: Push((bool) 1)
0x1291: @ CameraSwitchToNormal(Stack[-1])
0x1292: Pop(1)
0x1293: PushEmpty(bool)
0x1294: Call2 0x145a

0x1295: Pop(0)
0x1296: IF (Stack[-1] == 0) GOTO 0x1298; Pop(1)

0x1297: GOTO 0x12a0

0x1298: Push("head")
0x1299: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x129a: Pop(1)
0x129b: Push(Stack[-1])
0x129c: IF (Stack[-1] == 0) GOTO 0x12a0; Pop(1)

0x129d: Push("head")
0x129e: @ UnlookAsync(Stack[-1])
0x129f: Pop(1)
0x12a0: Return(); Pop(2)

0x12a1: PushEmpty(int, int, int, int)
0x12a2: Push("voice_common")
0x12a3: @ GetVariable(Stack[-1], Stack[-3])
0x12a4: Pop(1)
0x12a5: Push(Stack[-2])
0x12a6: IF (Stack[-1] == 0) GOTO 0x12c7; Pop(1)

0x12a7: PushEmpty(bool, object)
0x12a8: Stack[-1] = Stack[-7]
0x12a9: Call2 0x12db

0x12aa: Pop(1)
0x12ab: Pop(1); Push((bool) Stack[-1] == 0)
0x12ac: IF (Stack[-1] == 0) GOTO 0x12b5; Pop(1)

0x12ad: PushEmpty(bool, object)
0x12ae: Stack[-1] = Stack[-7]
0x12af: Call2 0x1300

0x12b0: Pop(1)
0x12b1: Pop(1); Push((bool) Stack[-1] == 0)
0x12b2: IF (Stack[-1] == 0) GOTO 0x12b5; Pop(1)

0x12b3: Stack[-6] = (bool) 0
0x12b4: Return(); Pop(4)

0x12b5: Push((int) 2)
0x12b6: @ irand(Stack[-2], Stack[-1])
0x12b7: Pop(1)
0x12b8: Push(Stack[-1])
0x12b9: IF (Stack[-1] == 0) GOTO 0x12c2; Pop(1)

0x12ba: Push("voice_common")
0x12bb: Push((int) 1)
0x12bc: Pop(1); Push(Stack[-4] + Stack[-1]);
0x12bd: Push((int) 3)
0x12be: Pop(2); Push(Stack[-2] % Stack[-1]);
0x12bf: @ SetVariable(Stack[-2], Stack[-1])
0x12c0: Pop(2)
0x12c1: GOTO 0x12c6

0x12c2: Push("voice_common")
0x12c3: Push((int) 0)
0x12c4: @ SetVariable(Stack[-2], Stack[-1])
0x12c5: Pop(2)
0x12c6: GOTO 0x12d9

0x12c7: PushEmpty(bool, object)
0x12c8: Stack[-1] = Stack[-7]
0x12c9: Call2 0x1300

0x12ca: Pop(1)
0x12cb: Pop(1); Push((bool) Stack[-1] == 0)
0x12cc: IF (Stack[-1] == 0) GOTO 0x12d5; Pop(1)

0x12cd: PushEmpty(bool, object)
0x12ce: Stack[-1] = Stack[-7]
0x12cf: Call2 0x12db

0x12d0: Pop(1)
0x12d1: Pop(1); Push((bool) Stack[-1] == 0)
0x12d2: IF (Stack[-1] == 0) GOTO 0x12d5; Pop(1)

0x12d3: Stack[-6] = (bool) 0
0x12d4: Return(); Pop(4)

0x12d5: Push("voice_common")
0x12d6: Push((int) 1)
0x12d7: @ SetVariable(Stack[-2], Stack[-1])
0x12d8: Pop(2)
0x12d9: Stack[-6] = (bool) 1
0x12da: Return(); Pop(4)

0x12db: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x12dc: Stack[-5] = "c"
0x12dd: Stack[-4] = (int) 0
0x12de: Push((int) 1)
0x12df: IF (Stack[-1] == 0) GOTO 0x12eb; Pop(1)

0x12e0: Push((int) 1)
0x12e1: Pop(1); Push(Stack[-5] + Stack[-1]);
0x12e2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x12e3: @@ HasProperty(Stack[-1], Stack[-4])
0x12e4: Pop(1)
0x12e5: Pop(0); Push((bool) Stack[-3] == 0)
0x12e6: IF (Stack[-1] == 0) GOTO 0x12e8; Pop(1)

0x12e7: GOTO 0x12eb

0x12e8: Push((int) 1)
0x12e9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x12ea: GOTO 0x12de

0x12eb: Pop(0); Push((bool) Stack[-4] == 0)
0x12ec: IF (Stack[-1] == 0) GOTO 0x12ef; Pop(1)

0x12ed: Stack[-12] = (bool) 0
0x12ee: Return(); Pop(10)

0x12ef: Stack[-2] = (int) 0
0x12f0: Push((int) 1)
0x12f1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x12f2: IF (Stack[-1] == 0) GOTO 0x12f5; Pop(1)

0x12f3: @ irand(Stack[-2], Stack[-4])
0x12f4: Pop(0)
0x12f5: Push((int) 1)
0x12f6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x12f7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x12f8: @@ GetProperty(Stack[-1], Stack[-2])
0x12f9: Pop(1)
0x12fa: PushEmpty(bool, string)
0x12fb: Stack[-1] = Stack[-3]
0x12fc: Call2 0x134a

0x12fd: Stack[-14] = Stack[-2]
0x12fe: Pop(2)
0x12ff: Return(); Pop(10)

0x1300: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1301: Push("d")
0x1302: PushEmpty(int)
0x1303: Call2 0x141d

0x1304: Pop(0)
0x1305: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1306: Push("m")
0x1307: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x1308: Stack[-4] = (int) 0
0x1309: Push((int) 1)
0x130a: IF (Stack[-1] == 0) GOTO 0x1316; Pop(1)

0x130b: Push((int) 1)
0x130c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x130d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x130e: @@ HasProperty(Stack[-1], Stack[-4])
0x130f: Pop(1)
0x1310: Pop(0); Push((bool) Stack[-3] == 0)
0x1311: IF (Stack[-1] == 0) GOTO 0x1313; Pop(1)

0x1312: GOTO 0x1316

0x1313: Push((int) 1)
0x1314: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1315: GOTO 0x1309

0x1316: Pop(0); Push((bool) Stack[-4] == 0)
0x1317: IF (Stack[-1] == 0) GOTO 0x131a; Pop(1)

0x1318: Stack[-12] = (bool) 0
0x1319: Return(); Pop(10)

0x131a: Stack[-2] = (int) 0
0x131b: Push((int) 1)
0x131c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x131d: IF (Stack[-1] == 0) GOTO 0x1320; Pop(1)

0x131e: @ irand(Stack[-2], Stack[-4])
0x131f: Pop(0)
0x1320: Push((int) 1)
0x1321: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1322: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1323: @@ GetProperty(Stack[-1], Stack[-2])
0x1324: Pop(1)
0x1325: PushEmpty(bool, string)
0x1326: Stack[-1] = Stack[-3]
0x1327: Call2 0x134a

0x1328: Stack[-14] = Stack[-2]
0x1329: Pop(2)
0x132a: Return(); Pop(10)

0x132b: PushEmpty(bool, float, float, bool, float, float)
0x132c: @ lshHasAnimation(Stack[-3], Stack[-7])
0x132d: Pop(0)
0x132e: Push(Stack[-3])
0x132f: IF (Stack[-1] == 0) GOTO 0x1336; Pop(1)

0x1330: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1331: Pop(0)
0x1332: Push((bool) 0)
0x1333: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1334: Pop(1)
0x1335: GOTO 0x133a

0x1336: Push("Can't find lsh animation : ")
0x1337: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1338: @ Trace(Stack[-1])
0x1339: Pop(1)
0x133a: Return(); Pop(6)

0x133b: PushEmpty(bool, float, float, bool, float, float)
0x133c: @ lshHasAnimation(Stack[-3], Stack[-8])
0x133d: Pop(0)
0x133e: Push(Stack[-3])
0x133f: IF (Stack[-1] == 0) GOTO 0x1345; Pop(1)

0x1340: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1341: Pop(0)
0x1342: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1343: Pop(0)
0x1344: GOTO 0x1349

0x1345: Push("Can't find lsh animation : ")
0x1346: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1347: @ Trace(Stack[-1])
0x1348: Pop(1)
0x1349: Return(); Pop(6)

0x134a: PushEmpty(bool, bool)
0x134b: PushEmpty(bool)
0x134c: Call2 0x145a

0x134d: Pop(0)
0x134e: IF (Stack[-1] == 0) GOTO 0x1357; Pop(1)

0x134f: @ lshHasSpeech(Stack[-1], Stack[-3])
0x1350: Pop(0)
0x1351: Push(Stack[-1])
0x1352: IF (Stack[-1] == 0) GOTO 0x1357; Pop(1)

0x1353: @ lshPlaySpeech(Stack[-3])
0x1354: Pop(0)
0x1355: Stack[-4] = (bool) 1
0x1356: Return(); Pop(2)

0x1357: Stack[-4] = (bool) 0
0x1358: Return(); Pop(2)

0x1359: PushEmpty(bool)
0x135a: Call2 0x145a

0x135b: Pop(0)
0x135c: IF (Stack[-1] == 0) GOTO 0x135f; Pop(1)

0x135d: @ lshStopSpeech()
0x135e: Pop(0)
0x135f: Return(); Pop(0)

0x1360: PushEmpty(object, object)
0x1361: @ self(Stack[-1])
0x1362: Pop(0)
0x1363: Stack[-3] = Stack[-1]
0x1364: Return(); Pop(2)

0x1365: Stack[-1] = 0
0x1366: PushEmpty(float, float)
0x1367: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1368: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1369: Push((float)0.0)
0x136a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x136b: IF (Stack[-1] == 0) GOTO 0x136e; Pop(1)

0x136c: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x136d: Return(); Pop(2)

0x136e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x136f: Return(); Pop(2)

0x1370: PushEmpty()
0x1371: Push((int) 0)
0x1372: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1373: IF (Stack[-1] == 0) GOTO 0x1376; Pop(1)

0x1374: Stack[-2] = -Stack[-1]; Pop(0);
0x1375: GOTO 0x1377

0x1376: Stack[-2] = Stack[-1]
0x1377: Return(); Pop(0)

0x1378: PushEmpty()
0x1379: Push(CvectorIndex(Stack[-1], 0))
0x137a: Push(CvectorIndex(Stack[-2], 0))
0x137b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x137c: Push(CvectorIndex(Stack[-2], 2))
0x137d: Push(CvectorIndex(Stack[-3], 2))
0x137e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x137f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1380: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x1381: Return(); Pop(0)

0x1382: PushEmpty(int, int)
0x1383: @ GetVariable(Stack[-3], Stack[-1])
0x1384: Pop(0)
0x1385: Stack[-4] = Stack[-1]
0x1386: Return(); Pop(2)

0x1387: PushEmpty(object, object, object, object)
0x1388: @ GetMainOutdoorScene(Stack[-2])
0x1389: Pop(0)
0x138a: Push(".bin")
0x138b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x138c: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x138d: Pop(1)
0x138e: Stack[-6] = Stack[-1]
0x138f: Return(); Pop(4)

0x1390: Stack[-1] = 0
0x1391: Stack[-2] = 0
0x1392: PushEmpty(object, object, object, object)
0x1393: @ GetMainOutdoorScene(Stack[-2])
0x1394: Pop(0)
0x1395: Push(".xml")
0x1396: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1397: @ AddBlankActorFromXml(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x1398: Pop(1)
0x1399: Stack[-6] = Stack[-1]
0x139a: Return(); Pop(4)

0x139b: Stack[-1] = 0
0x139c: Stack[-2] = 0
0x139d: PushEmpty(object, object)
0x139e: @ FindActor(Stack[-1], Stack[-4])
0x139f: Pop(0)
0x13a0: Pop(0); Push((bool) Stack[-1] == 0)
0x13a1: IF (Stack[-1] == 0) GOTO 0x13a9; Pop(1)

0x13a2: Push("Door ")
0x13a3: Pop(1); Push(Stack[-1] + Stack[-5]);
0x13a4: Push(" not found")
0x13a5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x13a6: @ Trace(Stack[-1])
0x13a7: Pop(1)
0x13a8: GOTO 0x13ac

0x13a9: Push("locked")
0x13aa: @@ SetProperty(Stack[-1], Stack[-4])
0x13ab: Pop(1)
0x13ac: Return(); Pop(2)

0x13ad: Stack[-1] = 0
0x13ae: PushEmpty(object, object)
0x13af: @ CreateIntVector(Stack[-1])
0x13b0: Pop(0)
0x13b1: @@ add(Stack[-4])
0x13b2: Pop(0)
0x13b3: @@ add(Stack[-3])
0x13b4: Pop(0)
0x13b5: Push((int) 3)
0x13b6: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x13b7: Pop(1)
0x13b8: Return(); Pop(2)

0x13b9: Stack[-1] = 0
0x13ba: PushEmpty(int, int)
0x13bb: PushEmpty(object, string, int)
0x13bc: Stack[-3] = Stack[-7]
0x13bd: Stack[-2] = "money"
0x13be: Stack[-1] = Stack[-6]
0x13bf: Call2 0x1220

0x13c0: Pop(3)
0x13c1: Push((int) 0)
0x13c2: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x13c3: IF (Stack[-1] == 0) GOTO 0x13cc; Pop(1)

0x13c4: Push("Money")
0x13c5: @ GetInvItemByName(Stack[-2], Stack[-1])
0x13c6: Pop(1)
0x13c7: PushEmpty(int, int)
0x13c8: Stack[-2] = Stack[-3]
0x13c9: Stack[-1] = Stack[-5]
0x13ca: Call2 0x13ae

0x13cb: Pop(2)
0x13cc: Return(); Pop(2)

0x13cd: PushEmpty(int, int, bool, int, int, bool)
0x13ce: @@ GetItemID(Stack[-3])
0x13cf: Pop(0)
0x13d0: Push("Category")
0x13d1: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x13d2: Pop(1)
0x13d3: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x13d4: Pop(0)
0x13d5: Pop(0); Push((bool) Stack[-1] == 0)
0x13d6: IF (Stack[-1] == 0) GOTO 0x13da; Pop(1)

0x13d7: @@ DropItems(Stack[-8], Stack[-7])
0x13d8: Pop(0)
0x13d9: GOTO 0x13df

0x13da: PushEmpty(int, int)
0x13db: Stack[-2] = Stack[-5]
0x13dc: Stack[-1] = Stack[-9]
0x13dd: Call2 0x13ae

0x13de: Pop(2)
0x13df: Return(); Pop(6)

0x13e0: PushEmpty(object, object)
0x13e1: @ CreateInvItem(Stack[-1])
0x13e2: Pop(0)
0x13e3: @@ SetItemName(Stack[-4])
0x13e4: Pop(0)
0x13e5: PushEmpty(object, object, int)
0x13e6: Stack[-3] = Stack[-8]
0x13e7: Stack[-2] = Stack[-4]
0x13e8: Stack[-1] = Stack[-6]
0x13e9: Call2 0x13cd

0x13ea: Pop(3)
0x13eb: Return(); Pop(2)

0x13ec: Stack[-1] = 0
0x13ed: PushEmpty(int, bool, int, bool)
0x13ee: @ GetInvItemByName(Stack[-2], Stack[-5])
0x13ef: Pop(0)
0x13f0: @@ HasItem(Stack[-2], Stack[-1])
0x13f1: Pop(0)
0x13f2: Stack[-7] = Stack[-1]
0x13f3: Return(); Pop(4)

0x13f4: PushEmpty(object, object)
0x13f5: @ FindActor(Stack[-1], Stack[-4])
0x13f6: Pop(0)
0x13f7: Pop(0); Push((bool) Stack[-1] == 0)
0x13f8: IF (Stack[-1] == 0) GOTO 0x13fb; Pop(1)

0x13f9: Stack[-5] = (bool) 0
0x13fa: Return(); Pop(2)

0x13fb: @ Trigger(Stack[-1], Stack[-3])
0x13fc: Pop(0)
0x13fd: Stack[-5] = (bool) 1
0x13fe: Return(); Pop(2)

0x13ff: Stack[-1] = 0
0x1400: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0x1401: Pop(0); Push((bool) Stack[-11] == 0)
0x1402: IF (Stack[-1] == 0) GOTO 0x1404; Pop(1)

0x1403: Return(); Pop(8)

0x1404: @ GetSceneByName(Stack[-4], Stack[-10])
0x1405: Pop(0)
0x1406: @@ GetLocator(Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0x1407: Pop(0)
0x1408: Pop(0); Push((bool) Stack[-3] == 0)
0x1409: IF (Stack[-1] == 0) GOTO 0x1414; Pop(1)

0x140a: Push("Teleport location '")
0x140b: Pop(1); Push(Stack[-1] + Stack[-10]);
0x140c: Push("' not found in scene '")
0x140d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x140e: Pop(1); Push(Stack[-1] + Stack[-11]);
0x140f: Push("'")
0x1410: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1411: @ Trace(Stack[-1])
0x1412: Pop(1)
0x1413: GOTO 0x1416

0x1414: @ Teleport(Stack[-11], Stack[-4], Stack[-2], Stack[-1])
0x1415: Pop(0)
0x1416: Return(); Pop(8)

0x1417: Stack[-4] = 0
0x1418: PushEmpty(float, float)
0x1419: @ GetGameTime(Stack[-1])
0x141a: Pop(0)
0x141b: Stack[-3] = Stack[-1]
0x141c: Return(); Pop(2)

0x141d: PushEmpty(float, float)
0x141e: @ GetGameTime(Stack[-1])
0x141f: Pop(0)
0x1420: Push((int) 1)
0x1421: PushEmpty(int)
0x1422: Push((int) 24)
0x1423: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1424: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1425: Return(); Pop(2)

0x1426: PushEmpty()
0x1427: PushEmpty(int)
0x1428: Call2 0x141d

0x1429: Pop(0)
0x142a: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x142b: Return(); Pop(0)

0x142c: PushEmpty(string, string)
0x142d: Stack[-1] = "idle"
0x142e: Push(Stack[-3])
0x142f: IF (Stack[-1] == 0) GOTO 0x1431; Pop(1)

0x1430: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1431: Stack[-4] = Stack[-1]
0x1432: Return(); Pop(2)

0x1433: PushEmpty(int, bool, int, bool)
0x1434: Stack[-2] = (int) 0
0x1435: Push("all")
0x1436: PushEmpty(string, int)
0x1437: Stack[-1] = Stack[-5]
0x1438: Call2 0x142c

0x1439: Pop(1)
0x143a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x143b: Pop(2)
0x143c: Pop(0); Push((bool) Stack[-1] == 0)
0x143d: IF (Stack[-1] == 0) GOTO 0x143f; Pop(1)

0x143e: GOTO 0x1442

0x143f: Push((int) 1)
0x1440: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1441: GOTO 0x1435

0x1442: Stack[-5] = Stack[-2]
0x1443: Return(); Pop(4)

0x1444: PushEmpty()
0x1445: Push((int) 0)
0x1446: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1447: IF (Stack[-1] == 0) GOTO 0x144c; Pop(1)

0x1448: Push("pt_")
0x1449: Push(GlobalVars[0])
0x144a: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x144b: GOTO 0x1450

0x144c: Push("pt_")
0x144d: Push(GlobalVars[0])
0x144e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x144f: Stack[-3] = Stack[-1] + Stack[-2]; Pop(1);
0x1450: Return(); Pop(0)

0x1451: Return(); Pop(0)

0x1452: Stack[-1] = (int) 515547
0x1453: Return(); Pop(0)

0x1454: Stack[-1] = (int) 502872
0x1455: Return(); Pop(0)

0x1456: Stack[-1] = "ui/NPC_MladVlad.png"
0x1457: Return(); Pop(0)

0x1458: Stack[-1] = "ui/NPC_MladVlad_b.png"
0x1459: Return(); Pop(0)

0x145a: Stack[-1] = (bool) 1
0x145b: Return(); Pop(0)

0x145c: PushEmpty()
0x145d: PushEmpty(object, string, float)
0x145e: PushEmpty(object)
0x145f: Call2 0x16cd

0x1460: Stack[-4] = Stack[-1]
0x1461: Pop(1)
0x1462: Stack[-2] = "pt_map_burah_home"
0x1463: Stack[-1] = (int) 2
0x1464: Call2 0x16de

0x1465: Pop(3)
0x1466: PushEmpty(object)
0x1467: Call2 0x16cd

0x1468: Pop(0)
0x1469: @@ ShowMap(Stack[-1])
0x146a: Pop(1)
0x146b: Return(); Pop(0)

0x146c: PushEmpty()
0x146d: Push("oob1MladVlad1")
0x146e: Push((int) 1)
0x146f: @ SetVariable(Stack[-2], Stack[-1])
0x1470: Pop(2)
0x1471: Return(); Pop(0)

0x1472: PushEmpty(object, object)
0x1473: PushEmpty(object)
0x1474: Call2 0x16cd

0x1475: Stack[-2] = Stack[-1]
0x1476: Pop(1)
0x1477: Push("b1MladVladGotoGrif")
0x1478: Push("pt_map_grif")
0x1479: Push((int) 3)
0x147a: Push((int) 520047)
0x147b: PushEmpty(float)
0x147c: Call2 0x1418

0x147d: Pop(0)
0x147e: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x147f: Pop(5)
0x1480: Return(); Pop(2)

0x1481: Stack[-1] = 0
0x1482: PushEmpty()
0x1483: Push("oob1MladVlad2")
0x1484: Push((int) 1)
0x1485: @ SetVariable(Stack[-2], Stack[-1])
0x1486: Pop(2)
0x1487: Return(); Pop(0)

0x1488: PushEmpty(object, object)
0x1489: Push("b2MladVladBurahHomeTalk")
0x148a: Push((int) 1)
0x148b: @ SetVariable(Stack[-2], Stack[-1])
0x148c: Pop(2)
0x148d: PushEmpty(object)
0x148e: Call2 0x16cd

0x148f: Stack[-2] = Stack[-1]
0x1490: Pop(1)
0x1491: Push("b2BurahHome")
0x1492: Push("pt_map_burah_home")
0x1493: Push((int) 3)
0x1494: Push((int) 520460)
0x1495: PushEmpty(float)
0x1496: Call2 0x1418

0x1497: Pop(0)
0x1498: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1499: Pop(5)
0x149a: Return(); Pop(2)

0x149b: Stack[-1] = 0
0x149c: PushEmpty()
0x149d: PushEmpty(string, bool)
0x149e: Stack[-2] = "burah_home@door1"
0x149f: Stack[-1] = (bool) 0
0x14a0: Call2 0x139d

0x14a1: Pop(2)
0x14a2: Return(); Pop(0)

0x14a3: PushEmpty()
0x14a4: Push("oob2MladVlad1")
0x14a5: Push((int) 1)
0x14a6: @ SetVariable(Stack[-2], Stack[-1])
0x14a7: Pop(2)
0x14a8: Return(); Pop(0)

0x14a9: PushEmpty(object, object)
0x14aa: PushEmpty(int, string)
0x14ab: Stack[-1] = "b2TravnikMark"
0x14ac: Call2 0x1382

0x14ad: Pop(1)
0x14ae: Push((int) 0)
0x14af: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14b0: IF (Stack[-1] == 0) GOTO 0x14d5; Pop(1)

0x14b1: Push("b2TravnikMark")
0x14b2: Push((int) 1)
0x14b3: @ SetVariable(Stack[-2], Stack[-1])
0x14b4: Pop(2)
0x14b5: PushEmpty(object)
0x14b6: Call2 0x16cd

0x14b7: Stack[-2] = Stack[-1]
0x14b8: Pop(1)
0x14b9: Push("b2Travnik1")
0x14ba: Push("pt_map_gatherer1")
0x14bb: Push((int) 3)
0x14bc: Push((int) 520463)
0x14bd: PushEmpty(float)
0x14be: Call2 0x1418

0x14bf: Pop(0)
0x14c0: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x14c1: Pop(5)
0x14c2: Push("b2Travnik2")
0x14c3: Push("pt_map_gatherer2")
0x14c4: Push((int) 3)
0x14c5: Push((int) 520464)
0x14c6: PushEmpty(float)
0x14c7: Call2 0x1418

0x14c8: Pop(0)
0x14c9: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x14ca: Pop(5)
0x14cb: Push("b2Travnik3")
0x14cc: Push("pt_map_gatherer3")
0x14cd: Push((int) 3)
0x14ce: Push((int) 520465)
0x14cf: PushEmpty(float)
0x14d0: Call2 0x1418

0x14d1: Pop(0)
0x14d2: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x14d3: Pop(5)
0x14d4: Stack[-1] = 0
0x14d5: Return(); Pop(2)

0x14d6: PushEmpty()
0x14d7: Push("oob5MladVlad1")
0x14d8: Push((int) 1)
0x14d9: @ SetVariable(Stack[-2], Stack[-1])
0x14da: Pop(2)
0x14db: Return(); Pop(0)

0x14dc: PushEmpty()
0x14dd: Push("b5q02")
0x14de: Push((int) 1)
0x14df: @ SetVariable(Stack[-2], Stack[-1])
0x14e0: Pop(2)
0x14e1: PushEmpty()
0x14e2: Call2 0x1656

0x14e3: Pop(0)
0x14e4: PushEmpty()
0x14e5: Call2 0x1670

0x14e6: Pop(0)
0x14e7: PushEmpty(object, string)
0x14e8: Stack[-1] = "quest_b5_02"
0x14e9: Call2 0x1387

0x14ea: Pop(2)
0x14eb: PushEmpty(bool, string, string)
0x14ec: Stack[-2] = "quest_b5_02"
0x14ed: Stack[-1] = "place_prophet"
0x14ee: Call2 0x13f4

0x14ef: Pop(3)
0x14f0: PushEmpty(bool, string, string)
0x14f1: Stack[-2] = "quest_b5_02"
0x14f2: Stack[-1] = "maze_start"
0x14f3: Call2 0x13f4

0x14f4: Pop(3)
0x14f5: Return(); Pop(0)

0x14f6: PushEmpty()
0x14f7: PushEmpty()
0x14f8: Call2 0x1663

0x14f9: Pop(0)
0x14fa: PushEmpty(bool, string, string)
0x14fb: Stack[-2] = "quest_b5_02"
0x14fc: Stack[-1] = "completed"
0x14fd: Call2 0x13f4

0x14fe: Pop(3)
0x14ff: Return(); Pop(0)

0x1500: PushEmpty()
0x1501: Push("money 4000 is given")
0x1502: @ Trace(Stack[-1])
0x1503: Pop(1)
0x1504: PushEmpty(object, int)
0x1505: Stack[-2] = Stack[-4]
0x1506: Stack[-1] = (int) 4000
0x1507: Call2 0x13ba

0x1508: Pop(2)
0x1509: Return(); Pop(0)

0x150a: PushEmpty()
0x150b: Push("kerosene50 is given")
0x150c: @ Trace(Stack[-1])
0x150d: Pop(1)
0x150e: PushEmpty(object, string, int)
0x150f: Stack[-3] = Stack[-5]
0x1510: Stack[-2] = "kerosene"
0x1511: Stack[-1] = (int) 50
0x1512: Call2 0x13e0

0x1513: Pop(3)
0x1514: Return(); Pop(0)

0x1515: PushEmpty()
0x1516: PushEmpty(object, string, string)
0x1517: PushEmpty(object)
0x1518: Call2 0x1219

0x1519: Stack[-4] = Stack[-1]
0x151a: Pop(1)
0x151b: Stack[-2] = "house_vlad"
0x151c: Stack[-1] = "pt_maze_start"
0x151d: Call2 0x1400

0x151e: Pop(3)
0x151f: Return(); Pop(0)

0x1520: PushEmpty()
0x1521: Push("b8q02")
0x1522: Push((int) 1)
0x1523: @ SetVariable(Stack[-2], Stack[-1])
0x1524: Pop(2)
0x1525: PushEmpty()
0x1526: Call2 0x167d

0x1527: Pop(0)
0x1528: PushEmpty()
0x1529: Call2 0x1697

0x152a: Pop(0)
0x152b: PushEmpty(object, string)
0x152c: Stack[-1] = "quest_b8_02"
0x152d: Call2 0x1392

0x152e: Pop(2)
0x152f: Return(); Pop(0)

0x1530: PushEmpty(int, int)
0x1531: PushEmpty()
0x1532: Call2 0x168a

0x1533: Pop(0)
0x1534: PushEmpty(bool, string, string)
0x1535: Stack[-2] = "quest_b8_02"
0x1536: Stack[-1] = "completed"
0x1537: Call2 0x13f4

0x1538: Pop(3)
0x1539: Push("b8q02_book")
0x153a: Push((int) 1)
0x153b: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x153c: Pop(2)
0x153d: Return(); Pop(2)

0x153e: PushEmpty()
0x153f: Push("oob8MladVlad1")
0x1540: Push((int) 1)
0x1541: @ SetVariable(Stack[-2], Stack[-1])
0x1542: Pop(2)
0x1543: Return(); Pop(0)

0x1544: PushEmpty()
0x1545: Push("b11q01KnowWhoKilled")
0x1546: Push((int) 1)
0x1547: @ SetVariable(Stack[-2], Stack[-1])
0x1548: Pop(2)
0x1549: PushEmpty()
0x154a: Call2 0x1649

0x154b: Pop(0)
0x154c: Return(); Pop(0)

0x154d: PushEmpty()
0x154e: Push("oob11MladVlad1")
0x154f: Push((int) 1)
0x1550: @ SetVariable(Stack[-2], Stack[-1])
0x1551: Pop(2)
0x1552: Return(); Pop(0)

0x1553: PushEmpty()
0x1554: PushEmpty(bool, string, string)
0x1555: Stack[-2] = "quest_b2_01"
0x1556: Stack[-1] = "place_mladvlad"
0x1557: Call2 0x13f4

0x1558: Pop(3)
0x1559: Return(); Pop(0)

0x155a: PushEmpty()
0x155b: Push("money10000 is given")
0x155c: @ Trace(Stack[-1])
0x155d: Pop(1)
0x155e: PushEmpty(object, int)
0x155f: Stack[-2] = Stack[-4]
0x1560: Stack[-1] = (int) 10000
0x1561: Call2 0x13ba

0x1562: Pop(2)
0x1563: Return(); Pop(0)

0x1564: PushEmpty()
0x1565: Push("playsound")
0x1566: Push("givemoney")
0x1567: @ TriggerWorld(Stack[-2], Stack[-1])
0x1568: Pop(2)
0x1569: Return(); Pop(0)

0x156a: PushEmpty()
0x156b: Push("playsound")
0x156c: Push("giveitem")
0x156d: @ TriggerWorld(Stack[-2], Stack[-1])
0x156e: Pop(2)
0x156f: Return(); Pop(0)

0x1570: PushEmpty()
0x1571: Push("b5MladVladVisit")
0x1572: Push((int) 1)
0x1573: @ SetVariable(Stack[-2], Stack[-1])
0x1574: Pop(2)
0x1575: Return(); Pop(0)

0x1576: PushEmpty()
0x1577: Push("money 7000 is given")
0x1578: @ Trace(Stack[-1])
0x1579: Pop(1)
0x157a: PushEmpty(object, int)
0x157b: Stack[-2] = Stack[-4]
0x157c: Stack[-1] = (int) 7000
0x157d: Call2 0x13ba

0x157e: Pop(2)
0x157f: Return(); Pop(0)

0x1580: PushEmpty()
0x1581: Push("recipe2 is given")
0x1582: @ Trace(Stack[-1])
0x1583: Pop(1)
0x1584: PushEmpty(object, string, int)
0x1585: Stack[-3] = Stack[-5]
0x1586: Stack[-2] = "recipe2"
0x1587: Stack[-1] = (int) 1
0x1588: Call2 0x13e0

0x1589: Pop(3)
0x158a: Return(); Pop(0)

0x158b: PushEmpty()
0x158c: Push("recipe3 is given")
0x158d: @ Trace(Stack[-1])
0x158e: Pop(1)
0x158f: PushEmpty(object, string, int)
0x1590: Stack[-3] = Stack[-5]
0x1591: Stack[-2] = "recipe3"
0x1592: Stack[-1] = (int) 1
0x1593: Call2 0x13e0

0x1594: Pop(3)
0x1595: Return(); Pop(0)

0x1596: PushEmpty()
0x1597: Push("playsound")
0x1598: Push("giveitem")
0x1599: @ TriggerWorld(Stack[-2], Stack[-1])
0x159a: Pop(2)
0x159b: Return(); Pop(0)

0x159c: PushEmpty()
0x159d: Push("playsound")
0x159e: Push("mapmark")
0x159f: @ TriggerWorld(Stack[-2], Stack[-1])
0x15a0: Pop(2)
0x15a1: Return(); Pop(0)

0x15a2: PushEmpty()
0x15a3: PushEmpty(int, string)
0x15a4: Stack[-1] = "oob8MladVlad1"
0x15a5: Call2 0x1382

0x15a6: Pop(1)
0x15a7: Push((int) 0)
0x15a8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15a9: IF (Stack[-1] == 0) GOTO 0x15ac; Pop(1)

0x15aa: Stack[-2] = (bool) 1
0x15ab: Return(); Pop(0)

0x15ac: Stack[-2] = (bool) 0
0x15ad: Return(); Pop(0)

0x15ae: PushEmpty()
0x15af: PushEmpty(int, string)
0x15b0: Stack[-1] = "b8q02"
0x15b1: Call2 0x1382

0x15b2: Pop(1)
0x15b3: Push((int) 0)
0x15b4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15b5: IF (Stack[-1] == 0) GOTO 0x15b8; Pop(1)

0x15b6: Stack[-2] = (bool) 1
0x15b7: Return(); Pop(0)

0x15b8: Stack[-2] = (bool) 0
0x15b9: Return(); Pop(0)

0x15ba: PushEmpty()
0x15bb: PushEmpty(bool, object, string)
0x15bc: Stack[-2] = Stack[-4]
0x15bd: Stack[-1] = "b8q02_book"
0x15be: Call2 0x13ed

0x15bf: Pop(2)
0x15c0: IF (Stack[-1] == 0) GOTO 0x15c3; Pop(1)

0x15c1: Stack[-2] = (bool) 1
0x15c2: Return(); Pop(0)

0x15c3: Stack[-2] = (bool) 0
0x15c4: Return(); Pop(0)

0x15c5: PushEmpty()
0x15c6: PushEmpty(int, string)
0x15c7: Stack[-1] = "b11q01"
0x15c8: Call2 0x1382

0x15c9: Pop(1)
0x15ca: Push((int) 1000)
0x15cb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15cc: IF (Stack[-1] == 0) GOTO 0x15cf; Pop(1)

0x15cd: Stack[-2] = (bool) 1
0x15ce: Return(); Pop(0)

0x15cf: Stack[-2] = (bool) 0
0x15d0: Return(); Pop(0)

0x15d1: PushEmpty()
0x15d2: PushEmpty(int, string)
0x15d3: Stack[-1] = "oob11MladVlad1"
0x15d4: Call2 0x1382

0x15d5: Pop(1)
0x15d6: Push((int) 0)
0x15d7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15d8: IF (Stack[-1] == 0) GOTO 0x15db; Pop(1)

0x15d9: Stack[-2] = (bool) 1
0x15da: Return(); Pop(0)

0x15db: Stack[-2] = (bool) 0
0x15dc: Return(); Pop(0)

0x15dd: PushEmpty()
0x15de: PushEmpty(int, string)
0x15df: Stack[-1] = "KnowGrif"
0x15e0: Call2 0x1382

0x15e1: Pop(1)
0x15e2: Push((int) 1)
0x15e3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15e4: IF (Stack[-1] == 0) GOTO 0x15e7; Pop(1)

0x15e5: Stack[-2] = (bool) 1
0x15e6: Return(); Pop(0)

0x15e7: Stack[-2] = (bool) 0
0x15e8: Return(); Pop(0)

0x15e9: PushEmpty()
0x15ea: PushEmpty(int, string)
0x15eb: Stack[-1] = "b1q01"
0x15ec: Call2 0x1382

0x15ed: Pop(1)
0x15ee: Push((int) 0)
0x15ef: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15f0: IF (Stack[-1] == 0) GOTO 0x15f3; Pop(1)

0x15f1: Stack[-2] = (bool) 1
0x15f2: Return(); Pop(0)

0x15f3: Stack[-2] = (bool) 0
0x15f4: Return(); Pop(0)

0x15f5: PushEmpty()
0x15f6: PushEmpty(int, string)
0x15f7: Stack[-1] = "oob1MladVlad1"
0x15f8: Call2 0x1382

0x15f9: Pop(1)
0x15fa: Push((int) 0)
0x15fb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15fc: IF (Stack[-1] == 0) GOTO 0x15ff; Pop(1)

0x15fd: Stack[-2] = (bool) 1
0x15fe: Return(); Pop(0)

0x15ff: Stack[-2] = (bool) 0
0x1600: Return(); Pop(0)

0x1601: PushEmpty()
0x1602: PushEmpty(int, string)
0x1603: Stack[-1] = "oob1MladVlad2"
0x1604: Call2 0x1382

0x1605: Pop(1)
0x1606: Push((int) 0)
0x1607: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1608: IF (Stack[-1] == 0) GOTO 0x160b; Pop(1)

0x1609: Stack[-2] = (bool) 1
0x160a: Return(); Pop(0)

0x160b: Stack[-2] = (bool) 0
0x160c: Return(); Pop(0)

0x160d: PushEmpty()
0x160e: PushEmpty(int, string)
0x160f: Stack[-1] = "b2MladVladBurahHomeTalk"
0x1610: Call2 0x1382

0x1611: Pop(1)
0x1612: Push((int) 1)
0x1613: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1614: IF (Stack[-1] == 0) GOTO 0x1617; Pop(1)

0x1615: Stack[-2] = (bool) 1
0x1616: Return(); Pop(0)

0x1617: Stack[-2] = (bool) 0
0x1618: Return(); Pop(0)

0x1619: PushEmpty()
0x161a: PushEmpty(int, string)
0x161b: Stack[-1] = "oob2MladVlad1"
0x161c: Call2 0x1382

0x161d: Pop(1)
0x161e: Push((int) 0)
0x161f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1620: IF (Stack[-1] == 0) GOTO 0x1623; Pop(1)

0x1621: Stack[-2] = (bool) 1
0x1622: Return(); Pop(0)

0x1623: Stack[-2] = (bool) 0
0x1624: Return(); Pop(0)

0x1625: PushEmpty()
0x1626: PushEmpty(int, string)
0x1627: Stack[-1] = "oob5MladVlad1"
0x1628: Call2 0x1382

0x1629: Pop(1)
0x162a: Push((int) 0)
0x162b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x162c: IF (Stack[-1] == 0) GOTO 0x162f; Pop(1)

0x162d: Stack[-2] = (bool) 1
0x162e: Return(); Pop(0)

0x162f: Stack[-2] = (bool) 0
0x1630: Return(); Pop(0)

0x1631: PushEmpty()
0x1632: PushEmpty(int, string)
0x1633: Stack[-1] = "b5q02"
0x1634: Call2 0x1382

0x1635: Pop(1)
0x1636: Push((int) 0)
0x1637: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1638: IF (Stack[-1] == 0) GOTO 0x163b; Pop(1)

0x1639: Stack[-2] = (bool) 1
0x163a: Return(); Pop(0)

0x163b: Stack[-2] = (bool) 0
0x163c: Return(); Pop(0)

0x163d: PushEmpty()
0x163e: PushEmpty(int, string)
0x163f: Stack[-1] = "b5q02"
0x1640: Call2 0x1382

0x1641: Pop(1)
0x1642: Push((int) 2)
0x1643: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1644: IF (Stack[-1] == 0) GOTO 0x1647; Pop(1)

0x1645: Stack[-2] = (bool) 1
0x1646: Return(); Pop(0)

0x1647: Stack[-2] = (bool) 0
0x1648: Return(); Pop(0)

0x1649: PushEmpty(object, object)
0x164a: Push((int) 315)
0x164b: Push((int) 1)
0x164c: Push((int) 522057)
0x164d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x164e: Pop(3)
0x164f: PushEmpty(bool, object, int)
0x1650: Stack[-2] = Stack[-4]
0x1651: Stack[-1] = (int) 313
0x1652: Call2 0x16b1

0x1653: Pop(3)
0x1654: Return(); Pop(2)

0x1655: Stack[-1] = 0
0x1656: PushEmpty(object, object)
0x1657: Push((int) 249)
0x1658: Push((int) 2)
0x1659: Push((int) 520665)
0x165a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x165b: Pop(3)
0x165c: PushEmpty(bool, object, int)
0x165d: Stack[-2] = Stack[-4]
0x165e: Stack[-1] = (int) -1
0x165f: Call2 0x16b1

0x1660: Pop(3)
0x1661: Return(); Pop(2)

0x1662: Stack[-1] = 0
0x1663: PushEmpty(object, object)
0x1664: Push((int) 252)
0x1665: Push((int) 2)
0x1666: Push((int) 520668)
0x1667: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1668: Pop(3)
0x1669: PushEmpty(bool, object, int)
0x166a: Stack[-2] = Stack[-4]
0x166b: Stack[-1] = (int) 249
0x166c: Call2 0x16b1

0x166d: Pop(3)
0x166e: Return(); Pop(2)

0x166f: Stack[-1] = 0
0x1670: PushEmpty(object, object)
0x1671: Push((int) 250)
0x1672: Push((int) 2)
0x1673: Push((int) 520666)
0x1674: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1675: Pop(3)
0x1676: PushEmpty(bool, object, int)
0x1677: Stack[-2] = Stack[-4]
0x1678: Stack[-1] = (int) 249
0x1679: Call2 0x16b1

0x167a: Pop(3)
0x167b: Return(); Pop(2)

0x167c: Stack[-1] = 0
0x167d: PushEmpty(object, object)
0x167e: Push((int) 293)
0x167f: Push((int) 2)
0x1680: Push((int) 521491)
0x1681: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1682: Pop(3)
0x1683: PushEmpty(bool, object, int)
0x1684: Stack[-2] = Stack[-4]
0x1685: Stack[-1] = (int) -1
0x1686: Call2 0x16b1

0x1687: Pop(3)
0x1688: Return(); Pop(2)

0x1689: Stack[-1] = 0
0x168a: PushEmpty(object, object)
0x168b: Push((int) 296)
0x168c: Push((int) 2)
0x168d: Push((int) 521494)
0x168e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x168f: Pop(3)
0x1690: PushEmpty(bool, object, int)
0x1691: Stack[-2] = Stack[-4]
0x1692: Stack[-1] = (int) 293
0x1693: Call2 0x16b1

0x1694: Pop(3)
0x1695: Return(); Pop(2)

0x1696: Stack[-1] = 0
0x1697: PushEmpty(object, object)
0x1698: Push((int) 294)
0x1699: Push((int) 2)
0x169a: Push((int) 521492)
0x169b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x169c: Pop(3)
0x169d: PushEmpty(bool, object, int)
0x169e: Stack[-2] = Stack[-4]
0x169f: Stack[-1] = (int) 293
0x16a0: Call2 0x16b1

0x16a1: Pop(3)
0x16a2: Return(); Pop(2)

0x16a3: Stack[-1] = 0
0x16a4: PushEmpty(object, object)
0x16a5: @ GetDiaryRoot(Stack[-1])
0x16a6: Pop(0)
0x16a7: Pop(0); Push((bool) Stack[-1] == 0)
0x16a8: IF (Stack[-1] == 0) GOTO 0x16ae; Pop(1)

0x16a9: Push("Can't retrieve diary root")
0x16aa: @ Trace(Stack[-1])
0x16ab: Pop(1)
0x16ac: Stack[-3] = (bool) 0
0x16ad: Return(); Pop(2)

0x16ae: Stack[-3] = Stack[-1]
0x16af: Return(); Pop(2)

0x16b0: Stack[-1] = 0
0x16b1: PushEmpty(object, object, int, object, object, int)
0x16b2: PushEmpty(object)
0x16b3: Call2 0x16a4

0x16b4: Stack[-4] = Stack[-1]
0x16b5: Pop(1)
0x16b6: @@ Find(Stack[-7], Stack[-2])
0x16b7: Pop(0)
0x16b8: Pop(0); Push((bool) Stack[-2] == 0)
0x16b9: IF (Stack[-1] == 0) GOTO 0x16c0; Pop(1)

0x16ba: Push("Can't find diary parent with id: ")
0x16bb: Pop(1); Push(Stack[-1] + Stack[-8]);
0x16bc: @ Trace(Stack[-1])
0x16bd: Pop(1)
0x16be: Stack[-9] = (bool) 0
0x16bf: Return(); Pop(6)

0x16c0: @@ AddChild(Stack[-8])
0x16c1: Pop(0)
0x16c2: Push((int) 7)
0x16c3: @ SendWorldWndMessage(Stack[-1])
0x16c4: Pop(1)
0x16c5: @@ GetCategory(Stack[-1])
0x16c6: Pop(0)
0x16c7: @ SetDiarySection(Stack[-1])
0x16c8: Pop(0)
0x16c9: Stack[-9] = (bool) 0
0x16ca: Return(); Pop(6)

0x16cb: Stack[-2] = 0
0x16cc: Stack[-3] = 0
0x16cd: PushEmpty(object, object, object, object)
0x16ce: @ GetMainOutdoorScene(Stack[-2])
0x16cf: Pop(0)
0x16d0: Pop(0); Push((bool) Stack[-2] == 0)
0x16d1: IF (Stack[-1] == 0) GOTO 0x16d8; Pop(1)

0x16d2: Push("Can't find main outdoor scene")
0x16d3: @ Trace(Stack[-1])
0x16d4: Pop(1)
0x16d5: Stack[-1] = 0
0x16d6: Stack[-5] = Stack[-1]
0x16d7: Return(); Pop(4)

0x16d8: @@ GetMap(Stack[-1])
0x16d9: Pop(0)
0x16da: Stack[-5] = Stack[-1]
0x16db: Return(); Pop(4)

0x16dc: Stack[-1] = 0
0x16dd: Stack[-2] = 0
0x16de: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x16df: @ GetMainOutdoorScene(Stack[-2])
0x16e0: Pop(0)
0x16e1: Pop(0); Push((bool) Stack[-2] == 0)
0x16e2: IF (Stack[-1] == 0) GOTO 0x16e7; Pop(1)

0x16e3: Push("Can't find main outdoor scene")
0x16e4: @ Trace(Stack[-1])
0x16e5: Pop(1)
0x16e6: Return(); Pop(8)

0x16e7: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x16e8: Pop(0)
0x16e9: Pop(0); Push((bool) Stack[-1] == 0)
0x16ea: IF (Stack[-1] == 0) GOTO 0x16f1; Pop(1)

0x16eb: Push("Warning: outdoor scene locator ")
0x16ec: Pop(1); Push(Stack[-1] + Stack[-11]);
0x16ed: Push(" doesnt exist")
0x16ee: Pop(2); Push(Stack[-2] + Stack[-1]);
0x16ef: @ Trace(Stack[-1])
0x16f0: Pop(1)
0x16f1: @@ GetMap(Stack[-11])
0x16f2: Pop(0)
0x16f3: Pop(0); Push((bool) Stack[-11] == 0)
0x16f4: IF (Stack[-1] == 0) GOTO 0x16f9; Pop(1)

0x16f5: Push("Can't find map")
0x16f6: @ Trace(Stack[-1])
0x16f7: Pop(1)
0x16f8: Return(); Pop(8)

0x16f9: Push(CvectorIndex(Stack[-4], 0))
0x16fa: Push(CvectorIndex(Stack[-5], 2))
0x16fb: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x16fc: Pop(2)
0x16fd: Return(); Pop(8)

0x16fe: Stack[-2] = 0
0x16ff: PushEmpty(int, int)
0x1700: Push("branch")
0x1701: @ GetVariable(Stack[-1], Stack[-2])
0x1702: Pop(1)
0x1703: Push((int) 0)
0x1704: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1705: IF (Stack[-1] == 0) GOTO 0x1709; Pop(1)

0x1706: Stack[-3] = (int) 1
0x1707: Return(); Pop(2)

0x1708: GOTO 0x170e

0x1709: Push((int) 1)
0x170a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x170b: IF (Stack[-1] == 0) GOTO 0x170e; Pop(1)

0x170c: Stack[-3] = (int) 2
0x170d: Return(); Pop(2)

0x170e: Stack[-3] = (int) 3
0x170f: Return(); Pop(2)

0x1710: PushEmpty()
0x1711: Push(GlobalVars[2])
0x1712: Pop(1); Push((bool) Stack[-1] == 0)
0x1713: IF (Stack[-1] == 0) GOTO 0x171d; Pop(1)

0x1714: PushEmpty(int, object)
0x1715: Stack[-1] = Stack[-3]
0x1716: Push(-2, 1); TaskCall(10)
0x1717: Call2 0x920

0x1718: Pop(-2, 1); TaskReturn
0x1719: Pop(2)
0x171a: Push(GlobalVars[2])
0x171b: Stack[-1] = (bool) 1
0x171c: GlobalVars[2] = Stack[-1]; Pop(1)
0x171d: PushEmpty(bool, int)
0x171e: Stack[-1] = (int) 1
0x171f: Call2 0x1426

0x1720: Pop(1)
0x1721: IF (Stack[-1] == 0) GOTO 0x1729; Pop(1)

0x1722: PushEmpty(int, object)
0x1723: Stack[-1] = Stack[-3]
0x1724: Push(-2, 1); TaskCall(4)
0x1725: Call2 0x11a

0x1726: Pop(-2, 1); TaskReturn
0x1727: Pop(2)
0x1728: Return(); Pop(0)

0x1729: PushEmpty(bool, int)
0x172a: Stack[-1] = (int) 2
0x172b: Call2 0x1426

0x172c: Pop(1)
0x172d: IF (Stack[-1] == 0) GOTO 0x1735; Pop(1)

0x172e: PushEmpty(int, object)
0x172f: Stack[-1] = Stack[-3]
0x1730: Push(-2, 1); TaskCall(6)
0x1731: Call2 0x3c8

0x1732: Pop(-2, 1); TaskReturn
0x1733: Pop(2)
0x1734: Return(); Pop(0)

0x1735: PushEmpty(bool, int)
0x1736: Stack[-1] = (int) 5
0x1737: Call2 0x1426

0x1738: Pop(1)
0x1739: IF (Stack[-1] == 0) GOTO 0x1741; Pop(1)

0x173a: PushEmpty(int, object)
0x173b: Stack[-1] = Stack[-3]
0x173c: Push(-2, 1); TaskCall(8)
0x173d: Call2 0x664

0x173e: Pop(-2, 1); TaskReturn
0x173f: Pop(2)
0x1740: Return(); Pop(0)

0x1741: PushEmpty(bool, int)
0x1742: Stack[-1] = (int) 6
0x1743: Call2 0x1426

0x1744: Pop(1)
0x1745: IF (Stack[-1] == 0) GOTO 0x174d; Pop(1)

0x1746: PushEmpty(int, object)
0x1747: Stack[-1] = Stack[-3]
0x1748: Push(-2, 1); TaskCall(12)
0x1749: Call2 0xa0f

0x174a: Pop(-2, 1); TaskReturn
0x174b: Pop(2)
0x174c: Return(); Pop(0)

0x174d: PushEmpty(bool, int)
0x174e: Stack[-1] = (int) 8
0x174f: Call2 0x1426

0x1750: Pop(1)
0x1751: IF (Stack[-1] == 0) GOTO 0x1759; Pop(1)

0x1752: PushEmpty(int, object)
0x1753: Stack[-1] = Stack[-3]
0x1754: Push(-2, 1); TaskCall(14)
0x1755: Call2 0xb0b

0x1756: Pop(-2, 1); TaskReturn
0x1757: Pop(2)
0x1758: Return(); Pop(0)

0x1759: PushEmpty(bool, int)
0x175a: Stack[-1] = (int) 11
0x175b: Call2 0x1426

0x175c: Pop(1)
0x175d: IF (Stack[-1] == 0) GOTO 0x1765; Pop(1)

0x175e: PushEmpty(int, object)
0x175f: Stack[-1] = Stack[-3]
0x1760: Push(-2, 1); TaskCall(16)
0x1761: Call2 0xdc0

0x1762: Pop(-2, 1); TaskReturn
0x1763: Pop(2)
0x1764: Return(); Pop(0)

0x1765: PushEmpty(bool)
0x1766: Stack[-1] = (bool) 0
0x1767: PushEmpty(bool, int)
0x1768: Stack[-1] = (int) 12
0x1769: Call2 0x1426

0x176a: Pop(1)
0x176b: IF (Stack[-1] == 0) GOTO 0x1770; Pop(1)

0x176c: Push(GlobalVars[3])
0x176d: Pop(1); Push((bool) Stack[-1] == 0)
0x176e: IF (Stack[-1] == 0) GOTO 0x1770; Pop(1)

0x176f: Stack[-1] = (bool) 1
0x1770: IF (Stack[-1] == 0) GOTO 0x177b; Pop(1)

0x1771: PushEmpty(int, object)
0x1772: Stack[-1] = Stack[-3]
0x1773: Push(-2, 1); TaskCall(18)
0x1774: Call2 0xfa8

0x1775: Pop(-2, 1); TaskReturn
0x1776: Pop(2)
0x1777: Push(GlobalVars[3])
0x1778: Stack[-1] = (bool) 1
0x1779: GlobalVars[3] = Stack[-1]; Pop(1)
0x177a: Return(); Pop(0)

0x177b: PushEmpty(int, object)
0x177c: Stack[-1] = Stack[-3]
0x177d: Push(-2, 1); TaskCall(20)
0x177e: Call2 0x10ab

0x177f: Pop(-2, 1); TaskReturn
0x1780: Pop(2)
0x1781: Return(); Pop(0)

