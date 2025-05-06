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
	Neutral
	SetMessage
	ClearReplies
	AddReply
	Untrust
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

RunOp = 0x1149
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
		EVENT_11 Op = 0x1c0 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2fa Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x599 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x835 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xac4 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbb3 Vars = (int, int)
	GTASK_16 Vars = (object) Params = 2
	GTASK_17 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xce6 Vars = (int, int)
	GTASK_18 Vars = (object) Params = 2
	GTASK_19 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf55 Vars = (int, int)
	GTASK_20 Vars = (object) Params = 2
	GTASK_21 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x111f Vars = (int, int)
	GTASK_22 Vars = (float, float, int) Params = 0
		EVENT_6 Op = 0x11c6 Vars = ()
		EVENT_0 Op = 0x11cf Vars = (object)

Events:
EVENT_6 Op = 0x1422 Vars = ()

0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x1218

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
0x15: Call2 0x11fa

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
0x3d: Call2 0x1422

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
0x50: Call2 0x1204

0x51: Pop(2)
0x52: EventEnable(0)
0x53: PushEmpty(object)
0x54: Stack[-1] = Stack[-4]
0x55: Call2 0x16e1

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
0x84: Call2 0x11e4

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
0x9c: Call2 0x120d

0x9d: Pop(1)
0x9e: Push((int) 6)
0x9f: @ Sleep(Stack[-1])
0xa0: Pop(1)
0xa1: Return(); Pop(2)

0xa2: PushEmpty()
0xa3: Call2 0xc1

0xa4: Pop(0)
0xa5: PushEmpty()
0xa6: Call2 0x1422

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
0xb9: Call2 0x1204

0xba: Pop(2)
0xbb: EventEnable(0)
0xbc: PushEmpty(object)
0xbd: Stack[-1] = Stack[-4]
0xbe: Call2 0x16e1

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
0xe6: Call2 0x1404

0xe7: Stack[-3] = Stack[-1]
0xe8: Pop(1)
0xe9: Push(Stack[-2])
0xea: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xeb: @ irand(Stack[-1], Stack[-2])
0xec: Pop(0)
0xed: Push("all")
0xee: PushEmpty(string, int)
0xef: Stack[-1] = Stack[-4]
0xf0: Call2 0x13fd

0xf1: Pop(1)
0xf2: @ PlayAnimation(Stack[-2], Stack[-1])
0xf3: Pop(2)
0xf4: @ WaitForAnimEnd()
0xf5: Pop(0)
0xf6: Return(); Pop(14)

0xf7: PushEmpty()
0xf8: Call2 0x1422

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
0x11f: Call2 0x121d

0x120: Pop(2)
0x121: Pop(1); Push((bool) Stack[-1] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x123: Stack[-10] = (int) -2
0x124: Return(); Pop(8)

0x125: @ CreateDialog(Stack[-4])
0x126: Pop(0)
0x127: PushEmpty(int)
0x128: Call2 0x1425

0x129: Pop(0)
0x12a: @@ SetNPCName(Stack[-1])
0x12b: Pop(1)
0x12c: PushEmpty(int)
0x12d: Call2 0x1423

0x12e: Pop(0)
0x12f: @@ SetNPCDescription(Stack[-1])
0x130: Pop(1)
0x131: PushEmpty(string)
0x132: Call2 0x1427

0x133: Pop(0)
0x134: @@ SetPhoto(Stack[-1])
0x135: Pop(1)
0x136: PushEmpty(string)
0x137: Call2 0x1429

0x138: Pop(0)
0x139: @@ SetPhoto2(Stack[-1])
0x13a: Pop(1)
0x13b: PushEmpty(int)
0x13c: Call2 0x16d0

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
0x14b: Call2 0x1331

0x14c: Stack[-2] = Stack[-1]
0x14d: Pop(1)
0x14e: Call2 0x1272

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
0x162: Call2 0x1261

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
0x170: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x171: PushEmpty(string)
0x172: Stack[-1] = "Neutral"
0x173: Call2 0x1aa

0x174: Pop(1)
0x175: Push((int) 535231)
0x176: @@ SetMessage(Stack[-1])
0x177: Pop(1)
0x178: @@ ClearReplies()
0x179: Pop(0)
0x17a: Push((int) 535232)
0x17b: Push((int) 36953)
0x17c: Push((int) 36907)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: Push((int) 535233)
0x180: Push((int) -1)
0x181: Push((int) 36908)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: Push((int) 535280)
0x185: Push((int) -1)
0x186: Push((int) 36956)
0x187: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x188: Pop(3)
0x189: GOTO 0x18c

0x18a: Return(); Pop(0)

0x18b: GOTO 0x16f

0x18c: PushEmpty(bool)
0x18d: Call2 0x142b

0x18e: Pop(0)
0x18f: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x190: @ lshWaitForAnimEnd()
0x191: Pop(0)
0x192: Push( Stack[3 + Tasks[-1].StackPointer] )
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: GOTO 0x19a

0x195: PushEmpty(string)
0x196: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x197: Call2 0x12fc

0x198: Pop(1)
0x199: GOTO 0x190

0x19a: GOTO 0x1a9

0x19b: Push("all")
0x19c: Push("idle")
0x19d: @ PlayAnimation(Stack[-2], Stack[-1])
0x19e: Pop(2)
0x19f: @ WaitForAnimEnd()
0x1a0: Pop(0)
0x1a1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a3: GOTO 0x1a9

0x1a4: Push("all")
0x1a5: Push("idle")
0x1a6: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a7: Pop(2)
0x1a8: GOTO 0x19f

0x1a9: Return(); Pop(0)

0x1aa: PushEmpty()
0x1ab: PushEmpty(bool)
0x1ac: Call2 0x142b

0x1ad: Pop(0)
0x1ae: Pop(1); Push((bool) Stack[-1] == 0)
0x1af: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1b0: Return(); Pop(0)

0x1b1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b3: Return(); Pop(0)

0x1b4: PushEmpty(string, bool)
0x1b5: Stack[-2] = Stack[-3]
0x1b6: Push("")
0x1b7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b9: Stack[-1] = (bool) 0
0x1ba: GOTO 0x1bc

0x1bb: Stack[-1] = (bool) 1
0x1bc: Call2 0x130c

0x1bd: Pop(2)
0x1be: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1bf: Return(); Pop(0)

0x1c0: PushEmpty()
0x1c1: Push((int) 1)
0x1c2: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x1c3: PushEmpty()
0x1c4: Call2 0x132a

0x1c5: Pop(0)
0x1c6: Push((int) 36906)
0x1c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1c9: PushEmpty(string)
0x1ca: Stack[-1] = "Neutral"
0x1cb: Call2 0x1aa

0x1cc: Pop(1)
0x1cd: Push((int) 535231)
0x1ce: @@ SetMessage(Stack[-1])
0x1cf: Pop(1)
0x1d0: @@ ClearReplies()
0x1d1: Pop(0)
0x1d2: Push((int) 535232)
0x1d3: Push((int) 36953)
0x1d4: Push((int) 36907)
0x1d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d6: Pop(3)
0x1d7: Push((int) 535233)
0x1d8: Push((int) -1)
0x1d9: Push((int) 36908)
0x1da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1db: Pop(3)
0x1dc: Push((int) 535280)
0x1dd: Push((int) -1)
0x1de: Push((int) 36956)
0x1df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e0: Pop(3)
0x1e1: Return(); Pop(0)

0x1e2: Push((int) 36953)
0x1e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1e5: PushEmpty(string)
0x1e6: Stack[-1] = "Neutral"
0x1e7: Call2 0x1aa

0x1e8: Pop(1)
0x1e9: Push((int) 535277)
0x1ea: @@ SetMessage(Stack[-1])
0x1eb: Pop(1)
0x1ec: @@ ClearReplies()
0x1ed: Pop(0)
0x1ee: Push((int) 535278)
0x1ef: Push((int) 36957)
0x1f0: Push((int) 36954)
0x1f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f2: Pop(3)
0x1f3: Push((int) 535279)
0x1f4: Push((int) 36957)
0x1f5: Push((int) 36955)
0x1f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f7: Pop(3)
0x1f8: Return(); Pop(0)

0x1f9: Push((int) 36957)
0x1fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x1fc: PushEmpty(string)
0x1fd: Stack[-1] = "Neutral"
0x1fe: Call2 0x1aa

0x1ff: Pop(1)
0x200: Push((int) 535281)
0x201: @@ SetMessage(Stack[-1])
0x202: Pop(1)
0x203: @@ ClearReplies()
0x204: Pop(0)
0x205: Push((int) 535282)
0x206: Push((int) -1)
0x207: Push((int) 36958)
0x208: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x209: Pop(3)
0x20a: Push((int) 535283)
0x20b: Push((int) -1)
0x20c: Push((int) 36959)
0x20d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20e: Pop(3)
0x20f: Return(); Pop(0)

0x210: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x211: PushEmpty(bool)
0x212: Call2 0x142b

0x213: Pop(0)
0x214: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x215: @ lshStopAnimation()
0x216: Pop(0)
0x217: GOTO 0x21a

0x218: @ StopAnimation()
0x219: Pop(0)
0x21a: Return(); Pop(0)

0x21b: GOTO 0x1c1

0x21c: Return(); Pop(0)

0x21d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x21e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x21f: PushEmpty(bool, object, float)
0x220: Stack[-2] = Stack[-12]
0x221: Stack[-1] = (float) 70.0
0x222: Call2 0x121d

0x223: Pop(2)
0x224: Pop(1); Push((bool) Stack[-1] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x226: Stack[-10] = (int) -2
0x227: Return(); Pop(8)

0x228: @ CreateDialog(Stack[-4])
0x229: Pop(0)
0x22a: PushEmpty(int)
0x22b: Call2 0x1425

0x22c: Pop(0)
0x22d: @@ SetNPCName(Stack[-1])
0x22e: Pop(1)
0x22f: PushEmpty(int)
0x230: Call2 0x1423

0x231: Pop(0)
0x232: @@ SetNPCDescription(Stack[-1])
0x233: Pop(1)
0x234: PushEmpty(string)
0x235: Call2 0x1427

0x236: Pop(0)
0x237: @@ SetPhoto(Stack[-1])
0x238: Pop(1)
0x239: PushEmpty(string)
0x23a: Call2 0x1429

0x23b: Pop(0)
0x23c: @@ SetPhoto2(Stack[-1])
0x23d: Pop(1)
0x23e: PushEmpty(int)
0x23f: Call2 0x16d0

0x240: Pop(0)
0x241: @@ SetPlayerName(Stack[-1])
0x242: Pop(1)
0x243: Stack[-2] = (int) -1
0x244: @ IsOverrideActive(Stack[-3])
0x245: Pop(0)
0x246: Push(Stack[-3])
0x247: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x248: Stack[-10] = (int) -2
0x249: Return(); Pop(8)

0x24a: @ DoDialog(Stack[-4])
0x24b: Pop(0)
0x24c: PushEmpty(bool, object)
0x24d: PushEmpty(object)
0x24e: Call2 0x1331

0x24f: Stack[-2] = Stack[-1]
0x250: Pop(1)
0x251: Call2 0x1272

0x252: Pop(2)
0x253: PushEmpty(object, object)
0x254: Stack[-2] = Stack[-11]
0x255: Stack[-1] = Stack[-6]
0x256: Push(-2, 4); TaskCall(7)
0x257: Call2 0x26e

0x258: Pop(-2, 4); TaskReturn
0x259: Pop(2)
0x25a: @@ IsDialogEnd(Stack[-1])
0x25b: Pop(0)
0x25c: Pop(0); Push((bool) Stack[-1] == 0)
0x25d: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x25e: @ sync()
0x25f: Pop(0)
0x260: @@ IsDialogEnd(Stack[-1])
0x261: Pop(0)
0x262: GOTO 0x25c

0x263: PushEmpty(object)
0x264: Stack[-1] = Stack[-10]
0x265: Call2 0x1261

0x266: Pop(1)
0x267: @ StopDialog(Stack[-4])
0x268: Pop(0)
0x269: @@ GetReturnValue(Stack[-2])
0x26a: Pop(0)
0x26b: Stack[-10] = Stack[-2]
0x26c: Return(); Pop(8)

0x26d: Stack[-4] = 0
0x26e: PushEmpty()
0x26f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x270: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x271: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x272: Push((int) 1)
0x273: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x274: PushEmpty(bool, object)
0x275: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x276: Call2 0x15ba

0x277: Pop(1)
0x278: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x279: PushEmpty(string)
0x27a: Stack[-1] = "Untrust"
0x27b: Call2 0x2e4

0x27c: Pop(1)
0x27d: Push((int) 520042)
0x27e: @@ SetMessage(Stack[-1])
0x27f: Pop(1)
0x280: @@ ClearReplies()
0x281: Pop(0)
0x282: Push((int) 520043)
0x283: Push((int) 21227)
0x284: Push((int) 21225)
0x285: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x286: Pop(3)
0x287: Push((int) 520044)
0x288: Push((int) -1)
0x289: Push((int) 21226)
0x28a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28b: Pop(3)
0x28c: GOTO 0x2c6

0x28d: PushEmpty(bool, object)
0x28e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28f: Call2 0x15c6

0x290: Pop(1)
0x291: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x292: PushEmpty(object, object)
0x293: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x294: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x295: Call2 0x143d

0x296: Pop(2)
0x297: PushEmpty(string)
0x298: Stack[-1] = "Neutral"
0x299: Call2 0x2e4

0x29a: Pop(1)
0x29b: Push((int) 519876)
0x29c: @@ SetMessage(Stack[-1])
0x29d: Pop(1)
0x29e: @@ ClearReplies()
0x29f: Pop(0)
0x2a0: Push((int) 519877)
0x2a1: Push((int) 21042)
0x2a2: Push((int) 21041)
0x2a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a4: Pop(3)
0x2a5: Push((int) 519905)
0x2a6: Push((int) 21042)
0x2a7: Push((int) 21073)
0x2a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a9: Pop(3)
0x2aa: GOTO 0x2c6

0x2ab: PushEmpty(string)
0x2ac: Stack[-1] = "Neutral"
0x2ad: Call2 0x2e4

0x2ae: Pop(1)
0x2af: Push((int) 519906)
0x2b0: @@ SetMessage(Stack[-1])
0x2b1: Pop(1)
0x2b2: @@ ClearReplies()
0x2b3: Pop(0)
0x2b4: PushEmpty(bool, object)
0x2b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b6: Call2 0x15d2

0x2b7: Pop(1)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2b9: Push((int) 519907)
0x2ba: Push((int) 21077)
0x2bb: Push((int) 21076)
0x2bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bd: Pop(3)
0x2be: Push((int) 519917)
0x2bf: Push((int) -1)
0x2c0: Push((int) 21086)
0x2c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c2: Pop(3)
0x2c3: GOTO 0x2c6

0x2c4: Return(); Pop(0)

0x2c5: GOTO 0x272

0x2c6: PushEmpty(bool)
0x2c7: Call2 0x142b

0x2c8: Pop(0)
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2ca: @ lshWaitForAnimEnd()
0x2cb: Pop(0)
0x2cc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2cd: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ce: GOTO 0x2d4

0x2cf: PushEmpty(string)
0x2d0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2d1: Call2 0x12fc

0x2d2: Pop(1)
0x2d3: GOTO 0x2ca

0x2d4: GOTO 0x2e3

0x2d5: Push("all")
0x2d6: Push("idle")
0x2d7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d8: Pop(2)
0x2d9: @ WaitForAnimEnd()
0x2da: Pop(0)
0x2db: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2dc: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dd: GOTO 0x2e3

0x2de: Push("all")
0x2df: Push("idle")
0x2e0: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e1: Pop(2)
0x2e2: GOTO 0x2d9

0x2e3: Return(); Pop(0)

0x2e4: PushEmpty()
0x2e5: PushEmpty(bool)
0x2e6: Call2 0x142b

0x2e7: Pop(0)
0x2e8: Pop(1); Push((bool) Stack[-1] == 0)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2ea: Return(); Pop(0)

0x2eb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ed: Return(); Pop(0)

0x2ee: PushEmpty(string, bool)
0x2ef: Stack[-2] = Stack[-3]
0x2f0: Push("")
0x2f1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f3: Stack[-1] = (bool) 0
0x2f4: GOTO 0x2f6

0x2f5: Stack[-1] = (bool) 1
0x2f6: Call2 0x130c

0x2f7: Pop(2)
0x2f8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2f9: Return(); Pop(0)

0x2fa: PushEmpty()
0x2fb: Push((int) 1)
0x2fc: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x2fd: PushEmpty()
0x2fe: Call2 0x132a

0x2ff: Pop(0)
0x300: Push((int) 21076)
0x301: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x303: PushEmpty(object, object)
0x304: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x305: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x306: Call2 0x1453

0x307: Pop(2)
0x308: Push((int) 21082)
0x309: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x30b: PushEmpty(object, object)
0x30c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x30d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30e: Call2 0x1443

0x30f: Pop(2)
0x310: PushEmpty(object, object)
0x311: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x312: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x313: Call2 0x156d

0x314: Pop(2)
0x315: Push((int) 21085)
0x316: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x318: PushEmpty(object, object)
0x319: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x31a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31b: Call2 0x1443

0x31c: Pop(2)
0x31d: PushEmpty(object, object)
0x31e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x31f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x320: Call2 0x156d

0x321: Pop(2)
0x322: Push((int) 21224)
0x323: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x325: PushEmpty(bool, object)
0x326: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x327: Call2 0x15ba

0x328: Pop(1)
0x329: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x32a: PushEmpty(string)
0x32b: Stack[-1] = "Untrust"
0x32c: Call2 0x2e4

0x32d: Pop(1)
0x32e: Push((int) 520042)
0x32f: @@ SetMessage(Stack[-1])
0x330: Pop(1)
0x331: @@ ClearReplies()
0x332: Pop(0)
0x333: Push((int) 520043)
0x334: Push((int) 21227)
0x335: Push((int) 21225)
0x336: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x337: Pop(3)
0x338: Push((int) 520044)
0x339: Push((int) -1)
0x33a: Push((int) 21226)
0x33b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33c: Pop(3)
0x33d: Return(); Pop(0)

0x33e: PushEmpty(bool, object)
0x33f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x340: Call2 0x15c6

0x341: Pop(1)
0x342: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x343: PushEmpty(object, object)
0x344: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x345: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x346: Call2 0x143d

0x347: Pop(2)
0x348: PushEmpty(string)
0x349: Stack[-1] = "Neutral"
0x34a: Call2 0x2e4

0x34b: Pop(1)
0x34c: Push((int) 519876)
0x34d: @@ SetMessage(Stack[-1])
0x34e: Pop(1)
0x34f: @@ ClearReplies()
0x350: Pop(0)
0x351: Push((int) 519877)
0x352: Push((int) 21042)
0x353: Push((int) 21041)
0x354: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x355: Pop(3)
0x356: Push((int) 519905)
0x357: Push((int) 21042)
0x358: Push((int) 21073)
0x359: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35a: Pop(3)
0x35b: Return(); Pop(0)

0x35c: PushEmpty(string)
0x35d: Stack[-1] = "Neutral"
0x35e: Call2 0x2e4

0x35f: Pop(1)
0x360: Push((int) 519906)
0x361: @@ SetMessage(Stack[-1])
0x362: Pop(1)
0x363: @@ ClearReplies()
0x364: Pop(0)
0x365: PushEmpty(bool, object)
0x366: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x367: Call2 0x15d2

0x368: Pop(1)
0x369: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36a: Push((int) 519907)
0x36b: Push((int) 21077)
0x36c: Push((int) 21076)
0x36d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36e: Pop(3)
0x36f: Push((int) 519917)
0x370: Push((int) -1)
0x371: Push((int) 21086)
0x372: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x373: Pop(3)
0x374: Return(); Pop(0)

0x375: Push((int) 21077)
0x376: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x377: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x378: PushEmpty(string)
0x379: Stack[-1] = "Neutral"
0x37a: Call2 0x2e4

0x37b: Pop(1)
0x37c: Push((int) 519908)
0x37d: @@ SetMessage(Stack[-1])
0x37e: Pop(1)
0x37f: @@ ClearReplies()
0x380: Pop(0)
0x381: PushEmpty(bool, object)
0x382: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x383: Call2 0x15ae

0x384: Pop(1)
0x385: Pop(1); Push((bool) Stack[-1] == 0)
0x386: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x387: Push((int) 519909)
0x388: Push((int) 21079)
0x389: Push((int) 21078)
0x38a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38b: Pop(3)
0x38c: PushEmpty(bool, object)
0x38d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x38e: Call2 0x15ae

0x38f: Pop(1)
0x390: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x391: Push((int) 519914)
0x392: Push((int) 21084)
0x393: Push((int) 21083)
0x394: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x395: Pop(3)
0x396: Return(); Pop(0)

0x397: Push((int) 21084)
0x398: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x399: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x39a: PushEmpty(string)
0x39b: Stack[-1] = "Neutral"
0x39c: Call2 0x2e4

0x39d: Pop(1)
0x39e: Push((int) 519915)
0x39f: @@ SetMessage(Stack[-1])
0x3a0: Pop(1)
0x3a1: @@ ClearReplies()
0x3a2: Pop(0)
0x3a3: Push((int) 519916)
0x3a4: Push((int) -1)
0x3a5: Push((int) 21085)
0x3a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a7: Pop(3)
0x3a8: Return(); Pop(0)

0x3a9: Push((int) 21079)
0x3aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3ac: PushEmpty(string)
0x3ad: Stack[-1] = "Untrust"
0x3ae: Call2 0x2e4

0x3af: Pop(1)
0x3b0: Push((int) 519910)
0x3b1: @@ SetMessage(Stack[-1])
0x3b2: Pop(1)
0x3b3: @@ ClearReplies()
0x3b4: Pop(0)
0x3b5: Push((int) 519911)
0x3b6: Push((int) 21081)
0x3b7: Push((int) 21080)
0x3b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b9: Pop(3)
0x3ba: Return(); Pop(0)

0x3bb: Push((int) 21081)
0x3bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3be: PushEmpty(string)
0x3bf: Stack[-1] = "Neutral"
0x3c0: Call2 0x2e4

0x3c1: Pop(1)
0x3c2: Push((int) 519912)
0x3c3: @@ SetMessage(Stack[-1])
0x3c4: Pop(1)
0x3c5: @@ ClearReplies()
0x3c6: Pop(0)
0x3c7: Push((int) 519913)
0x3c8: Push((int) -1)
0x3c9: Push((int) 21082)
0x3ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cb: Pop(3)
0x3cc: Return(); Pop(0)

0x3cd: Push((int) 21042)
0x3ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3d0: PushEmpty(string)
0x3d1: Stack[-1] = "Untrust"
0x3d2: Call2 0x2e4

0x3d3: Pop(1)
0x3d4: Push((int) 519878)
0x3d5: @@ SetMessage(Stack[-1])
0x3d6: Pop(1)
0x3d7: @@ ClearReplies()
0x3d8: Pop(0)
0x3d9: Push((int) 519879)
0x3da: Push((int) 21044)
0x3db: Push((int) 21043)
0x3dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dd: Pop(3)
0x3de: Push((int) 519902)
0x3df: Push((int) 21070)
0x3e0: Push((int) 21069)
0x3e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e2: Pop(3)
0x3e3: Return(); Pop(0)

0x3e4: Push((int) 21070)
0x3e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3e7: PushEmpty(string)
0x3e8: Stack[-1] = "Untrust"
0x3e9: Call2 0x2e4

0x3ea: Pop(1)
0x3eb: Push((int) 519903)
0x3ec: @@ SetMessage(Stack[-1])
0x3ed: Pop(1)
0x3ee: @@ ClearReplies()
0x3ef: Pop(0)
0x3f0: Push((int) 519904)
0x3f1: Push((int) 21044)
0x3f2: Push((int) 21071)
0x3f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f4: Pop(3)
0x3f5: Return(); Pop(0)

0x3f6: Push((int) 21044)
0x3f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f8: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x3f9: PushEmpty(string)
0x3fa: Stack[-1] = "Neutral"
0x3fb: Call2 0x2e4

0x3fc: Pop(1)
0x3fd: Push((int) 519880)
0x3fe: @@ SetMessage(Stack[-1])
0x3ff: Pop(1)
0x400: @@ ClearReplies()
0x401: Pop(0)
0x402: Push((int) 519881)
0x403: Push((int) 21046)
0x404: Push((int) 21045)
0x405: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x406: Pop(3)
0x407: Push((int) 519897)
0x408: Push((int) 21064)
0x409: Push((int) 21063)
0x40a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40b: Pop(3)
0x40c: Return(); Pop(0)

0x40d: Push((int) 21064)
0x40e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x410: PushEmpty(string)
0x411: Stack[-1] = "Sly"
0x412: Call2 0x2e4

0x413: Pop(1)
0x414: Push((int) 519898)
0x415: @@ SetMessage(Stack[-1])
0x416: Pop(1)
0x417: @@ ClearReplies()
0x418: Pop(0)
0x419: Push((int) 519899)
0x41a: Push((int) 21066)
0x41b: Push((int) 21065)
0x41c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41d: Pop(3)
0x41e: Return(); Pop(0)

0x41f: Push((int) 21066)
0x420: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x421: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x422: PushEmpty(string)
0x423: Stack[-1] = "Sly"
0x424: Call2 0x2e4

0x425: Pop(1)
0x426: Push((int) 519900)
0x427: @@ SetMessage(Stack[-1])
0x428: Pop(1)
0x429: @@ ClearReplies()
0x42a: Pop(0)
0x42b: Push((int) 519901)
0x42c: Push((int) 21046)
0x42d: Push((int) 21067)
0x42e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42f: Pop(3)
0x430: Return(); Pop(0)

0x431: Push((int) 21046)
0x432: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x434: PushEmpty(string)
0x435: Stack[-1] = "Neutral"
0x436: Call2 0x2e4

0x437: Pop(1)
0x438: Push((int) 519882)
0x439: @@ SetMessage(Stack[-1])
0x43a: Pop(1)
0x43b: @@ ClearReplies()
0x43c: Pop(0)
0x43d: Push((int) 519883)
0x43e: Push((int) 21048)
0x43f: Push((int) 21047)
0x440: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x441: Pop(3)
0x442: Push((int) 519896)
0x443: Push((int) 21048)
0x444: Push((int) 21061)
0x445: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x446: Pop(3)
0x447: Return(); Pop(0)

0x448: Push((int) 21048)
0x449: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44a: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x44b: PushEmpty(string)
0x44c: Stack[-1] = "Untrust"
0x44d: Call2 0x2e4

0x44e: Pop(1)
0x44f: Push((int) 519884)
0x450: @@ SetMessage(Stack[-1])
0x451: Pop(1)
0x452: @@ ClearReplies()
0x453: Pop(0)
0x454: Push((int) 519885)
0x455: Push((int) 21050)
0x456: Push((int) 21049)
0x457: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x458: Pop(3)
0x459: Push((int) 519893)
0x45a: Push((int) 21058)
0x45b: Push((int) 21057)
0x45c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45d: Pop(3)
0x45e: Return(); Pop(0)

0x45f: Push((int) 21058)
0x460: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x461: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x462: PushEmpty(string)
0x463: Stack[-1] = "Neutral"
0x464: Call2 0x2e4

0x465: Pop(1)
0x466: Push((int) 519894)
0x467: @@ SetMessage(Stack[-1])
0x468: Pop(1)
0x469: @@ ClearReplies()
0x46a: Pop(0)
0x46b: Push((int) 519895)
0x46c: Push((int) 21052)
0x46d: Push((int) 21059)
0x46e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46f: Pop(3)
0x470: Return(); Pop(0)

0x471: Push((int) 21050)
0x472: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x473: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x474: PushEmpty(string)
0x475: Stack[-1] = "Sly"
0x476: Call2 0x2e4

0x477: Pop(1)
0x478: Push((int) 519886)
0x479: @@ SetMessage(Stack[-1])
0x47a: Pop(1)
0x47b: @@ ClearReplies()
0x47c: Pop(0)
0x47d: Push((int) 519887)
0x47e: Push((int) 21052)
0x47f: Push((int) 21051)
0x480: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x481: Pop(3)
0x482: Return(); Pop(0)

0x483: Push((int) 21052)
0x484: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x485: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x486: PushEmpty(string)
0x487: Stack[-1] = "Neutral"
0x488: Call2 0x2e4

0x489: Pop(1)
0x48a: Push((int) 519888)
0x48b: @@ SetMessage(Stack[-1])
0x48c: Pop(1)
0x48d: @@ ClearReplies()
0x48e: Pop(0)
0x48f: Push((int) 519889)
0x490: Push((int) 21054)
0x491: Push((int) 21053)
0x492: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x493: Pop(3)
0x494: Return(); Pop(0)

0x495: Push((int) 21054)
0x496: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x497: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x498: PushEmpty(string)
0x499: Stack[-1] = "Neutral"
0x49a: Call2 0x2e4

0x49b: Pop(1)
0x49c: Push((int) 519890)
0x49d: @@ SetMessage(Stack[-1])
0x49e: Pop(1)
0x49f: @@ ClearReplies()
0x4a0: Pop(0)
0x4a1: Push((int) 519891)
0x4a2: Push((int) -1)
0x4a3: Push((int) 21055)
0x4a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a5: Pop(3)
0x4a6: Push((int) 519892)
0x4a7: Push((int) -1)
0x4a8: Push((int) 21056)
0x4a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4aa: Pop(3)
0x4ab: Return(); Pop(0)

0x4ac: Push((int) 21227)
0x4ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ae: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4af: PushEmpty(string)
0x4b0: Stack[-1] = "Untrust"
0x4b1: Call2 0x2e4

0x4b2: Pop(1)
0x4b3: Push((int) 520045)
0x4b4: @@ SetMessage(Stack[-1])
0x4b5: Pop(1)
0x4b6: @@ ClearReplies()
0x4b7: Pop(0)
0x4b8: Push((int) 520046)
0x4b9: Push((int) -1)
0x4ba: Push((int) 21228)
0x4bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bc: Pop(3)
0x4bd: Return(); Pop(0)

0x4be: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4bf: PushEmpty(bool)
0x4c0: Call2 0x142b

0x4c1: Pop(0)
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c3: @ lshStopAnimation()
0x4c4: Pop(0)
0x4c5: GOTO 0x4c8

0x4c6: @ StopAnimation()
0x4c7: Pop(0)
0x4c8: Return(); Pop(0)

0x4c9: GOTO 0x2fb

0x4ca: Return(); Pop(0)

0x4cb: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4cc: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4cd: PushEmpty(bool, object, float)
0x4ce: Stack[-2] = Stack[-12]
0x4cf: Stack[-1] = (float) 70.0
0x4d0: Call2 0x121d

0x4d1: Pop(2)
0x4d2: Pop(1); Push((bool) Stack[-1] == 0)
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d4: Stack[-10] = (int) -2
0x4d5: Return(); Pop(8)

0x4d6: @ CreateDialog(Stack[-4])
0x4d7: Pop(0)
0x4d8: PushEmpty(int)
0x4d9: Call2 0x1425

0x4da: Pop(0)
0x4db: @@ SetNPCName(Stack[-1])
0x4dc: Pop(1)
0x4dd: PushEmpty(int)
0x4de: Call2 0x1423

0x4df: Pop(0)
0x4e0: @@ SetNPCDescription(Stack[-1])
0x4e1: Pop(1)
0x4e2: PushEmpty(string)
0x4e3: Call2 0x1427

0x4e4: Pop(0)
0x4e5: @@ SetPhoto(Stack[-1])
0x4e6: Pop(1)
0x4e7: PushEmpty(string)
0x4e8: Call2 0x1429

0x4e9: Pop(0)
0x4ea: @@ SetPhoto2(Stack[-1])
0x4eb: Pop(1)
0x4ec: PushEmpty(int)
0x4ed: Call2 0x16d0

0x4ee: Pop(0)
0x4ef: @@ SetPlayerName(Stack[-1])
0x4f0: Pop(1)
0x4f1: Stack[-2] = (int) -1
0x4f2: @ IsOverrideActive(Stack[-3])
0x4f3: Pop(0)
0x4f4: Push(Stack[-3])
0x4f5: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f6: Stack[-10] = (int) -2
0x4f7: Return(); Pop(8)

0x4f8: @ DoDialog(Stack[-4])
0x4f9: Pop(0)
0x4fa: PushEmpty(bool, object)
0x4fb: PushEmpty(object)
0x4fc: Call2 0x1331

0x4fd: Stack[-2] = Stack[-1]
0x4fe: Pop(1)
0x4ff: Call2 0x1272

0x500: Pop(2)
0x501: PushEmpty(object, object)
0x502: Stack[-2] = Stack[-11]
0x503: Stack[-1] = Stack[-6]
0x504: Push(-2, 4); TaskCall(9)
0x505: Call2 0x51c

0x506: Pop(-2, 4); TaskReturn
0x507: Pop(2)
0x508: @@ IsDialogEnd(Stack[-1])
0x509: Pop(0)
0x50a: Pop(0); Push((bool) Stack[-1] == 0)
0x50b: IF (Stack[-1] == 0) GOTO 0x511; Pop(1)

0x50c: @ sync()
0x50d: Pop(0)
0x50e: @@ IsDialogEnd(Stack[-1])
0x50f: Pop(0)
0x510: GOTO 0x50a

0x511: PushEmpty(object)
0x512: Stack[-1] = Stack[-10]
0x513: Call2 0x1261

0x514: Pop(1)
0x515: @ StopDialog(Stack[-4])
0x516: Pop(0)
0x517: @@ GetReturnValue(Stack[-2])
0x518: Pop(0)
0x519: Stack[-10] = Stack[-2]
0x51a: Return(); Pop(8)

0x51b: Stack[-4] = 0
0x51c: PushEmpty()
0x51d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x51e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x51f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x520: Push((int) 1)
0x521: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x522: PushEmpty(bool, object)
0x523: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x524: Call2 0x15de

0x525: Pop(1)
0x526: Pop(1); Push((bool) Stack[-1] == 0)
0x527: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x528: PushEmpty(object, object)
0x529: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x52b: Call2 0x1524

0x52c: Pop(2)
0x52d: PushEmpty(string)
0x52e: Stack[-1] = "Neutral"
0x52f: Call2 0x583

0x530: Pop(1)
0x531: Push((int) 520000)
0x532: @@ SetMessage(Stack[-1])
0x533: Pop(1)
0x534: @@ ClearReplies()
0x535: Pop(0)
0x536: Push((int) 520001)
0x537: Push((int) 21183)
0x538: Push((int) 21182)
0x539: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53a: Pop(3)
0x53b: Push((int) 520017)
0x53c: Push((int) 21183)
0x53d: Push((int) 21199)
0x53e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53f: Pop(3)
0x540: GOTO 0x565

0x541: PushEmpty(string)
0x542: Stack[-1] = "Neutral"
0x543: Call2 0x583

0x544: Pop(1)
0x545: Push((int) 520019)
0x546: @@ SetMessage(Stack[-1])
0x547: Pop(1)
0x548: @@ ClearReplies()
0x549: Pop(0)
0x54a: PushEmpty(bool)
0x54b: Stack[-1] = (bool) 0
0x54c: PushEmpty(bool, object)
0x54d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54e: Call2 0x15ea

0x54f: Pop(1)
0x550: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x551: PushEmpty(bool, object)
0x552: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x553: Call2 0x15de

0x554: Pop(1)
0x555: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x556: Stack[-1] = (bool) 1
0x557: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x558: Push((int) 520020)
0x559: Push((int) 21205)
0x55a: Push((int) 21204)
0x55b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55c: Pop(3)
0x55d: Push((int) 520030)
0x55e: Push((int) -1)
0x55f: Push((int) 21214)
0x560: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x561: Pop(3)
0x562: GOTO 0x565

0x563: Return(); Pop(0)

0x564: GOTO 0x520

0x565: PushEmpty(bool)
0x566: Call2 0x142b

0x567: Pop(0)
0x568: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x569: @ lshWaitForAnimEnd()
0x56a: Pop(0)
0x56b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x56c: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x56d: GOTO 0x573

0x56e: PushEmpty(string)
0x56f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x570: Call2 0x12fc

0x571: Pop(1)
0x572: GOTO 0x569

0x573: GOTO 0x582

0x574: Push("all")
0x575: Push("idle")
0x576: @ PlayAnimation(Stack[-2], Stack[-1])
0x577: Pop(2)
0x578: @ WaitForAnimEnd()
0x579: Pop(0)
0x57a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x57b: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x57c: GOTO 0x582

0x57d: Push("all")
0x57e: Push("idle")
0x57f: @ PlayAnimation(Stack[-2], Stack[-1])
0x580: Pop(2)
0x581: GOTO 0x578

0x582: Return(); Pop(0)

0x583: PushEmpty()
0x584: PushEmpty(bool)
0x585: Call2 0x142b

0x586: Pop(0)
0x587: Pop(1); Push((bool) Stack[-1] == 0)
0x588: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x589: Return(); Pop(0)

0x58a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x58b: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x58c: Return(); Pop(0)

0x58d: PushEmpty(string, bool)
0x58e: Stack[-2] = Stack[-3]
0x58f: Push("")
0x590: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x591: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x592: Stack[-1] = (bool) 0
0x593: GOTO 0x595

0x594: Stack[-1] = (bool) 1
0x595: Call2 0x130c

0x596: Pop(2)
0x597: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x598: Return(); Pop(0)

0x599: PushEmpty()
0x59a: Push((int) 1)
0x59b: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x59c: PushEmpty()
0x59d: Call2 0x132a

0x59e: Pop(0)
0x59f: Push((int) 21192)
0x5a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a1: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5a2: PushEmpty(object, object)
0x5a3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a5: Call2 0x1459

0x5a6: Pop(2)
0x5a7: PushEmpty(object, object)
0x5a8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5a9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5aa: Call2 0x142d

0x5ab: Pop(2)
0x5ac: PushEmpty(object, object)
0x5ad: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ae: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5af: Call2 0x146d

0x5b0: Pop(2)
0x5b1: Push((int) 21193)
0x5b2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b3: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5b4: PushEmpty(object, object)
0x5b5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5b6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5b7: Call2 0x1459

0x5b8: Pop(2)
0x5b9: PushEmpty(object, object)
0x5ba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5bc: Call2 0x142d

0x5bd: Pop(2)
0x5be: PushEmpty(object, object)
0x5bf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c1: Call2 0x146d

0x5c2: Pop(2)
0x5c3: Push((int) 21194)
0x5c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c5: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5c6: PushEmpty(object, object)
0x5c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c9: Call2 0x1459

0x5ca: Pop(2)
0x5cb: PushEmpty(object, object)
0x5cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ce: Call2 0x142d

0x5cf: Pop(2)
0x5d0: PushEmpty(object, object)
0x5d1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d3: Call2 0x146d

0x5d4: Pop(2)
0x5d5: Push((int) 21204)
0x5d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d7: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5d8: PushEmpty(object, object)
0x5d9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5db: Call2 0x1474

0x5dc: Pop(2)
0x5dd: Push((int) 21212)
0x5de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5df: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5e0: PushEmpty(object, object)
0x5e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5e3: Call2 0x147a

0x5e4: Pop(2)
0x5e5: PushEmpty(object, object)
0x5e6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5e8: Call2 0x156d

0x5e9: Pop(2)
0x5ea: Push((int) 21213)
0x5eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ec: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5ed: PushEmpty(object, object)
0x5ee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f0: Call2 0x147a

0x5f1: Pop(2)
0x5f2: PushEmpty(object, object)
0x5f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f5: Call2 0x156d

0x5f6: Pop(2)
0x5f7: Push((int) 21181)
0x5f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f9: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x5fa: PushEmpty(bool, object)
0x5fb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5fc: Call2 0x15de

0x5fd: Pop(1)
0x5fe: Pop(1); Push((bool) Stack[-1] == 0)
0x5ff: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x600: PushEmpty(object, object)
0x601: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x602: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x603: Call2 0x1524

0x604: Pop(2)
0x605: PushEmpty(string)
0x606: Stack[-1] = "Neutral"
0x607: Call2 0x583

0x608: Pop(1)
0x609: Push((int) 520000)
0x60a: @@ SetMessage(Stack[-1])
0x60b: Pop(1)
0x60c: @@ ClearReplies()
0x60d: Pop(0)
0x60e: Push((int) 520001)
0x60f: Push((int) 21183)
0x610: Push((int) 21182)
0x611: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x612: Pop(3)
0x613: Push((int) 520017)
0x614: Push((int) 21183)
0x615: Push((int) 21199)
0x616: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x617: Pop(3)
0x618: Return(); Pop(0)

0x619: PushEmpty(string)
0x61a: Stack[-1] = "Neutral"
0x61b: Call2 0x583

0x61c: Pop(1)
0x61d: Push((int) 520019)
0x61e: @@ SetMessage(Stack[-1])
0x61f: Pop(1)
0x620: @@ ClearReplies()
0x621: Pop(0)
0x622: PushEmpty(bool)
0x623: Stack[-1] = (bool) 0
0x624: PushEmpty(bool, object)
0x625: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x626: Call2 0x15ea

0x627: Pop(1)
0x628: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x629: PushEmpty(bool, object)
0x62a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62b: Call2 0x15de

0x62c: Pop(1)
0x62d: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62e: Stack[-1] = (bool) 1
0x62f: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x630: Push((int) 520020)
0x631: Push((int) 21205)
0x632: Push((int) 21204)
0x633: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x634: Pop(3)
0x635: Push((int) 520030)
0x636: Push((int) -1)
0x637: Push((int) 21214)
0x638: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x639: Pop(3)
0x63a: Return(); Pop(0)

0x63b: Push((int) 21205)
0x63c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x63d: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x63e: PushEmpty(string)
0x63f: Stack[-1] = "Neutral"
0x640: Call2 0x583

0x641: Pop(1)
0x642: Push((int) 520021)
0x643: @@ SetMessage(Stack[-1])
0x644: Pop(1)
0x645: @@ ClearReplies()
0x646: Pop(0)
0x647: Push((int) 520022)
0x648: Push((int) 21207)
0x649: Push((int) 21206)
0x64a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64b: Pop(3)
0x64c: Push((int) 527733)
0x64d: Push((int) 29085)
0x64e: Push((int) 29084)
0x64f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x650: Pop(3)
0x651: Return(); Pop(0)

0x652: Push((int) 29085)
0x653: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x654: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x655: PushEmpty(string)
0x656: Stack[-1] = "Neutral"
0x657: Call2 0x583

0x658: Pop(1)
0x659: Push((int) 527734)
0x65a: @@ SetMessage(Stack[-1])
0x65b: Pop(1)
0x65c: @@ ClearReplies()
0x65d: Pop(0)
0x65e: Push((int) 520029)
0x65f: Push((int) -1)
0x660: Push((int) 21213)
0x661: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x662: Pop(3)
0x663: Return(); Pop(0)

0x664: Push((int) 21207)
0x665: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x666: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x667: PushEmpty(string)
0x668: Stack[-1] = "Untrust"
0x669: Call2 0x583

0x66a: Pop(1)
0x66b: Push((int) 520023)
0x66c: @@ SetMessage(Stack[-1])
0x66d: Pop(1)
0x66e: @@ ClearReplies()
0x66f: Pop(0)
0x670: Push((int) 520024)
0x671: Push((int) 21209)
0x672: Push((int) 21208)
0x673: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x674: Pop(3)
0x675: Return(); Pop(0)

0x676: Push((int) 21209)
0x677: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x678: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x679: PushEmpty(string)
0x67a: Stack[-1] = "Neutral"
0x67b: Call2 0x583

0x67c: Pop(1)
0x67d: Push((int) 520025)
0x67e: @@ SetMessage(Stack[-1])
0x67f: Pop(1)
0x680: @@ ClearReplies()
0x681: Pop(0)
0x682: Push((int) 520026)
0x683: Push((int) 21211)
0x684: Push((int) 21210)
0x685: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x686: Pop(3)
0x687: Push((int) 527735)
0x688: Push((int) 29087)
0x689: Push((int) 29086)
0x68a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68b: Pop(3)
0x68c: Return(); Pop(0)

0x68d: Push((int) 29087)
0x68e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x68f: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x690: PushEmpty(string)
0x691: Stack[-1] = "Untrust"
0x692: Call2 0x583

0x693: Pop(1)
0x694: Push((int) 527736)
0x695: @@ SetMessage(Stack[-1])
0x696: Pop(1)
0x697: @@ ClearReplies()
0x698: Pop(0)
0x699: Push((int) 527737)
0x69a: Push((int) 21211)
0x69b: Push((int) 29088)
0x69c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69d: Pop(3)
0x69e: Return(); Pop(0)

0x69f: Push((int) 21211)
0x6a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a1: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x6a2: PushEmpty(string)
0x6a3: Stack[-1] = "Neutral"
0x6a4: Call2 0x583

0x6a5: Pop(1)
0x6a6: Push((int) 520027)
0x6a7: @@ SetMessage(Stack[-1])
0x6a8: Pop(1)
0x6a9: @@ ClearReplies()
0x6aa: Pop(0)
0x6ab: Push((int) 520028)
0x6ac: Push((int) -1)
0x6ad: Push((int) 21212)
0x6ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6af: Pop(3)
0x6b0: Return(); Pop(0)

0x6b1: Push((int) 21183)
0x6b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b3: IF (Stack[-1] == 0) GOTO 0x6c8; Pop(1)

0x6b4: PushEmpty(string)
0x6b5: Stack[-1] = "Untrust"
0x6b6: Call2 0x583

0x6b7: Pop(1)
0x6b8: Push((int) 520002)
0x6b9: @@ SetMessage(Stack[-1])
0x6ba: Pop(1)
0x6bb: @@ ClearReplies()
0x6bc: Pop(0)
0x6bd: Push((int) 520003)
0x6be: Push((int) 21185)
0x6bf: Push((int) 21184)
0x6c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c1: Pop(3)
0x6c2: Push((int) 527725)
0x6c3: Push((int) 29074)
0x6c4: Push((int) 29073)
0x6c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c6: Pop(3)
0x6c7: Return(); Pop(0)

0x6c8: Push((int) 29074)
0x6c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ca: IF (Stack[-1] == 0) GOTO 0x6da; Pop(1)

0x6cb: PushEmpty(string)
0x6cc: Stack[-1] = "Rage"
0x6cd: Call2 0x583

0x6ce: Pop(1)
0x6cf: Push((int) 527726)
0x6d0: @@ SetMessage(Stack[-1])
0x6d1: Pop(1)
0x6d2: @@ ClearReplies()
0x6d3: Pop(0)
0x6d4: Push((int) 527727)
0x6d5: Push((int) 21185)
0x6d6: Push((int) 29075)
0x6d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d8: Pop(3)
0x6d9: Return(); Pop(0)

0x6da: Push((int) 21185)
0x6db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6dc: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6dd: PushEmpty(string)
0x6de: Stack[-1] = "Sly"
0x6df: Call2 0x583

0x6e0: Pop(1)
0x6e1: Push((int) 520004)
0x6e2: @@ SetMessage(Stack[-1])
0x6e3: Pop(1)
0x6e4: @@ ClearReplies()
0x6e5: Pop(0)
0x6e6: Push((int) 520005)
0x6e7: Push((int) 21187)
0x6e8: Push((int) 21186)
0x6e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ea: Pop(3)
0x6eb: Push((int) 520015)
0x6ec: Push((int) 21187)
0x6ed: Push((int) 21196)
0x6ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ef: Pop(3)
0x6f0: Return(); Pop(0)

0x6f1: Push((int) 21187)
0x6f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f3: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x6f4: PushEmpty(string)
0x6f5: Stack[-1] = "Untrust"
0x6f6: Call2 0x583

0x6f7: Pop(1)
0x6f8: Push((int) 520006)
0x6f9: @@ SetMessage(Stack[-1])
0x6fa: Pop(1)
0x6fb: @@ ClearReplies()
0x6fc: Pop(0)
0x6fd: Push((int) 520007)
0x6fe: Push((int) 21189)
0x6ff: Push((int) 21188)
0x700: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x701: Pop(3)
0x702: Push((int) 527728)
0x703: Push((int) 29079)
0x704: Push((int) 29078)
0x705: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x706: Pop(3)
0x707: Return(); Pop(0)

0x708: Push((int) 29079)
0x709: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x70a: IF (Stack[-1] == 0) GOTO 0x71a; Pop(1)

0x70b: PushEmpty(string)
0x70c: Stack[-1] = "Neutral"
0x70d: Call2 0x583

0x70e: Pop(1)
0x70f: Push((int) 527729)
0x710: @@ SetMessage(Stack[-1])
0x711: Pop(1)
0x712: @@ ClearReplies()
0x713: Pop(0)
0x714: Push((int) 527730)
0x715: Push((int) 29081)
0x716: Push((int) 29080)
0x717: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x718: Pop(3)
0x719: Return(); Pop(0)

0x71a: Push((int) 29081)
0x71b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x71c: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x71d: PushEmpty(string)
0x71e: Stack[-1] = "Neutral"
0x71f: Call2 0x583

0x720: Pop(1)
0x721: Push((int) 527731)
0x722: @@ SetMessage(Stack[-1])
0x723: Pop(1)
0x724: @@ ClearReplies()
0x725: Pop(0)
0x726: Push((int) 527732)
0x727: Push((int) 21189)
0x728: Push((int) 29082)
0x729: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72a: Pop(3)
0x72b: Return(); Pop(0)

0x72c: Push((int) 21189)
0x72d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x72e: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x72f: PushEmpty(string)
0x730: Stack[-1] = "Neutral"
0x731: Call2 0x583

0x732: Pop(1)
0x733: Push((int) 520008)
0x734: @@ SetMessage(Stack[-1])
0x735: Pop(1)
0x736: @@ ClearReplies()
0x737: Pop(0)
0x738: Push((int) 520009)
0x739: Push((int) 21191)
0x73a: Push((int) 21190)
0x73b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73c: Pop(3)
0x73d: Push((int) 520013)
0x73e: Push((int) -1)
0x73f: Push((int) 21194)
0x740: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x741: Pop(3)
0x742: Return(); Pop(0)

0x743: Push((int) 21191)
0x744: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x745: IF (Stack[-1] == 0) GOTO 0x75a; Pop(1)

0x746: PushEmpty(string)
0x747: Stack[-1] = "Sly"
0x748: Call2 0x583

0x749: Pop(1)
0x74a: Push((int) 520010)
0x74b: @@ SetMessage(Stack[-1])
0x74c: Pop(1)
0x74d: @@ ClearReplies()
0x74e: Pop(0)
0x74f: Push((int) 520011)
0x750: Push((int) -1)
0x751: Push((int) 21192)
0x752: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x753: Pop(3)
0x754: Push((int) 520012)
0x755: Push((int) -1)
0x756: Push((int) 21193)
0x757: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x758: Pop(3)
0x759: Return(); Pop(0)

0x75a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x75b: PushEmpty(bool)
0x75c: Call2 0x142b

0x75d: Pop(0)
0x75e: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x75f: @ lshStopAnimation()
0x760: Pop(0)
0x761: GOTO 0x764

0x762: @ StopAnimation()
0x763: Pop(0)
0x764: Return(); Pop(0)

0x765: GOTO 0x59a

0x766: Return(); Pop(0)

0x767: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x768: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x769: PushEmpty(bool, object, float)
0x76a: Stack[-2] = Stack[-12]
0x76b: Stack[-1] = (float) 70.0
0x76c: Call2 0x121d

0x76d: Pop(2)
0x76e: Pop(1); Push((bool) Stack[-1] == 0)
0x76f: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x770: Stack[-10] = (int) -2
0x771: Return(); Pop(8)

0x772: @ CreateDialog(Stack[-4])
0x773: Pop(0)
0x774: PushEmpty(int)
0x775: Call2 0x1425

0x776: Pop(0)
0x777: @@ SetNPCName(Stack[-1])
0x778: Pop(1)
0x779: PushEmpty(int)
0x77a: Call2 0x1423

0x77b: Pop(0)
0x77c: @@ SetNPCDescription(Stack[-1])
0x77d: Pop(1)
0x77e: PushEmpty(string)
0x77f: Call2 0x1427

0x780: Pop(0)
0x781: @@ SetPhoto(Stack[-1])
0x782: Pop(1)
0x783: PushEmpty(string)
0x784: Call2 0x1429

0x785: Pop(0)
0x786: @@ SetPhoto2(Stack[-1])
0x787: Pop(1)
0x788: PushEmpty(int)
0x789: Call2 0x16d0

0x78a: Pop(0)
0x78b: @@ SetPlayerName(Stack[-1])
0x78c: Pop(1)
0x78d: Stack[-2] = (int) -1
0x78e: @ IsOverrideActive(Stack[-3])
0x78f: Pop(0)
0x790: Push(Stack[-3])
0x791: IF (Stack[-1] == 0) GOTO 0x794; Pop(1)

0x792: Stack[-10] = (int) -2
0x793: Return(); Pop(8)

0x794: @ DoDialog(Stack[-4])
0x795: Pop(0)
0x796: PushEmpty(bool, object)
0x797: PushEmpty(object)
0x798: Call2 0x1331

0x799: Stack[-2] = Stack[-1]
0x79a: Pop(1)
0x79b: Call2 0x1272

0x79c: Pop(2)
0x79d: PushEmpty(object, object)
0x79e: Stack[-2] = Stack[-11]
0x79f: Stack[-1] = Stack[-6]
0x7a0: Push(-2, 4); TaskCall(11)
0x7a1: Call2 0x7b8

0x7a2: Pop(-2, 4); TaskReturn
0x7a3: Pop(2)
0x7a4: @@ IsDialogEnd(Stack[-1])
0x7a5: Pop(0)
0x7a6: Pop(0); Push((bool) Stack[-1] == 0)
0x7a7: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7a8: @ sync()
0x7a9: Pop(0)
0x7aa: @@ IsDialogEnd(Stack[-1])
0x7ab: Pop(0)
0x7ac: GOTO 0x7a6

0x7ad: PushEmpty(object)
0x7ae: Stack[-1] = Stack[-10]
0x7af: Call2 0x1261

0x7b0: Pop(1)
0x7b1: @ StopDialog(Stack[-4])
0x7b2: Pop(0)
0x7b3: @@ GetReturnValue(Stack[-2])
0x7b4: Pop(0)
0x7b5: Stack[-10] = Stack[-2]
0x7b6: Return(); Pop(8)

0x7b7: Stack[-4] = 0
0x7b8: PushEmpty()
0x7b9: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7ba: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x7bb: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7bc: Push((int) 1)
0x7bd: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7be: PushEmpty(bool, object)
0x7bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c0: Call2 0x15f6

0x7c1: Pop(1)
0x7c2: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7c3: PushEmpty(object, object)
0x7c4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7c6: Call2 0x14a7

0x7c7: Pop(2)
0x7c8: PushEmpty(object, object)
0x7c9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7ca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7cb: Call2 0x1541

0x7cc: Pop(2)
0x7cd: PushEmpty(string)
0x7ce: Stack[-1] = "Rage"
0x7cf: Call2 0x81f

0x7d0: Pop(1)
0x7d1: Push((int) 520138)
0x7d2: @@ SetMessage(Stack[-1])
0x7d3: Pop(1)
0x7d4: @@ ClearReplies()
0x7d5: Pop(0)
0x7d6: Push((int) 520139)
0x7d7: Push((int) 21324)
0x7d8: Push((int) 21323)
0x7d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7da: Pop(3)
0x7db: GOTO 0x801

0x7dc: PushEmpty(string)
0x7dd: Stack[-1] = "Rage"
0x7de: Call2 0x81f

0x7df: Pop(1)
0x7e0: Push((int) 520157)
0x7e1: @@ SetMessage(Stack[-1])
0x7e2: Pop(1)
0x7e3: @@ ClearReplies()
0x7e4: Pop(0)
0x7e5: PushEmpty(bool, object)
0x7e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e7: Call2 0x1602

0x7e8: Pop(1)
0x7e9: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7ea: Push((int) 520158)
0x7eb: Push((int) 21346)
0x7ec: Push((int) 21345)
0x7ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ee: Pop(3)
0x7ef: PushEmpty(bool, object)
0x7f0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f1: Call2 0x160e

0x7f2: Pop(1)
0x7f3: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7f4: Push((int) 520164)
0x7f5: Push((int) 21352)
0x7f6: Push((int) 21351)
0x7f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f8: Pop(3)
0x7f9: Push((int) 520180)
0x7fa: Push((int) -1)
0x7fb: Push((int) 21370)
0x7fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fd: Pop(3)
0x7fe: GOTO 0x801

0x7ff: Return(); Pop(0)

0x800: GOTO 0x7bc

0x801: PushEmpty(bool)
0x802: Call2 0x142b

0x803: Pop(0)
0x804: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x805: @ lshWaitForAnimEnd()
0x806: Pop(0)
0x807: Push( Stack[3 + Tasks[-1].StackPointer] )
0x808: IF (Stack[-1] == 0) GOTO 0x80a; Pop(1)

0x809: GOTO 0x80f

0x80a: PushEmpty(string)
0x80b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x80c: Call2 0x12fc

0x80d: Pop(1)
0x80e: GOTO 0x805

0x80f: GOTO 0x81e

0x810: Push("all")
0x811: Push("idle")
0x812: @ PlayAnimation(Stack[-2], Stack[-1])
0x813: Pop(2)
0x814: @ WaitForAnimEnd()
0x815: Pop(0)
0x816: Push( Stack[3 + Tasks[-1].StackPointer] )
0x817: IF (Stack[-1] == 0) GOTO 0x819; Pop(1)

0x818: GOTO 0x81e

0x819: Push("all")
0x81a: Push("idle")
0x81b: @ PlayAnimation(Stack[-2], Stack[-1])
0x81c: Pop(2)
0x81d: GOTO 0x814

0x81e: Return(); Pop(0)

0x81f: PushEmpty()
0x820: PushEmpty(bool)
0x821: Call2 0x142b

0x822: Pop(0)
0x823: Pop(1); Push((bool) Stack[-1] == 0)
0x824: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x825: Return(); Pop(0)

0x826: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x827: IF (Stack[-1] == 0) GOTO 0x829; Pop(1)

0x828: Return(); Pop(0)

0x829: PushEmpty(string, bool)
0x82a: Stack[-2] = Stack[-3]
0x82b: Push("")
0x82c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x82d: IF (Stack[-1] == 0) GOTO 0x830; Pop(1)

0x82e: Stack[-1] = (bool) 0
0x82f: GOTO 0x831

0x830: Stack[-1] = (bool) 1
0x831: Call2 0x130c

0x832: Pop(2)
0x833: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x834: Return(); Pop(0)

0x835: PushEmpty()
0x836: Push((int) 1)
0x837: IF (Stack[-1] == 0) GOTO 0xa22; Pop(1)

0x838: PushEmpty()
0x839: Call2 0x132a

0x83a: Pop(0)
0x83b: Push((int) 21333)
0x83c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x83d: IF (Stack[-1] == 0) GOTO 0x84d; Pop(1)

0x83e: PushEmpty(object, object)
0x83f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x840: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x841: Call2 0x14db

0x842: Pop(2)
0x843: PushEmpty(object, object)
0x844: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x845: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x846: Call2 0x153b

0x847: Pop(2)
0x848: PushEmpty(object, object)
0x849: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x84a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x84b: Call2 0x14ad

0x84c: Pop(2)
0x84d: Push((int) 21335)
0x84e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x84f: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x850: PushEmpty(object, object)
0x851: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x852: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x853: Call2 0x14db

0x854: Pop(2)
0x855: PushEmpty(object, object)
0x856: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x857: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x858: Call2 0x153b

0x859: Pop(2)
0x85a: PushEmpty(object, object)
0x85b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x85c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x85d: Call2 0x14ad

0x85e: Pop(2)
0x85f: Push((int) 21349)
0x860: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x861: IF (Stack[-1] == 0) GOTO 0x87b; Pop(1)

0x862: PushEmpty(object, object)
0x863: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x864: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x865: Call2 0x14d1

0x866: Pop(2)
0x867: PushEmpty(object, object)
0x868: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x869: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x86a: Call2 0x1535

0x86b: Pop(2)
0x86c: PushEmpty(object, object)
0x86d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x86e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x86f: Call2 0x14db

0x870: Pop(2)
0x871: PushEmpty(object, object)
0x872: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x873: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x874: Call2 0x14ad

0x875: Pop(2)
0x876: PushEmpty(object, object)
0x877: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x878: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x879: Call2 0x152b

0x87a: Pop(2)
0x87b: Push((int) 21350)
0x87c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x87d: IF (Stack[-1] == 0) GOTO 0x88d; Pop(1)

0x87e: PushEmpty(object, object)
0x87f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x880: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x881: Call2 0x14db

0x882: Pop(2)
0x883: PushEmpty(object, object)
0x884: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x885: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x886: Call2 0x153b

0x887: Pop(2)
0x888: PushEmpty(object, object)
0x889: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x88a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x88b: Call2 0x14ad

0x88c: Pop(2)
0x88d: Push((int) 21361)
0x88e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x88f: IF (Stack[-1] == 0) GOTO 0x8a9; Pop(1)

0x890: PushEmpty(object, object)
0x891: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x892: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x893: Call2 0x14c7

0x894: Pop(2)
0x895: PushEmpty(object, object)
0x896: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x897: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x898: Call2 0x1547

0x899: Pop(2)
0x89a: PushEmpty(object, object)
0x89b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x89c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x89d: Call2 0x1551

0x89e: Pop(2)
0x89f: PushEmpty(object, object)
0x8a0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8a1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8a2: Call2 0x155c

0x8a3: Pop(2)
0x8a4: PushEmpty(object, object)
0x8a5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8a6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8a7: Call2 0x153b

0x8a8: Pop(2)
0x8a9: Push((int) 21322)
0x8aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ab: IF (Stack[-1] == 0) GOTO 0x8ed; Pop(1)

0x8ac: PushEmpty(bool, object)
0x8ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8ae: Call2 0x15f6

0x8af: Pop(1)
0x8b0: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8b1: PushEmpty(object, object)
0x8b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8b4: Call2 0x14a7

0x8b5: Pop(2)
0x8b6: PushEmpty(object, object)
0x8b7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8b9: Call2 0x1541

0x8ba: Pop(2)
0x8bb: PushEmpty(string)
0x8bc: Stack[-1] = "Rage"
0x8bd: Call2 0x81f

0x8be: Pop(1)
0x8bf: Push((int) 520138)
0x8c0: @@ SetMessage(Stack[-1])
0x8c1: Pop(1)
0x8c2: @@ ClearReplies()
0x8c3: Pop(0)
0x8c4: Push((int) 520139)
0x8c5: Push((int) 21324)
0x8c6: Push((int) 21323)
0x8c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c8: Pop(3)
0x8c9: Return(); Pop(0)

0x8ca: PushEmpty(string)
0x8cb: Stack[-1] = "Rage"
0x8cc: Call2 0x81f

0x8cd: Pop(1)
0x8ce: Push((int) 520157)
0x8cf: @@ SetMessage(Stack[-1])
0x8d0: Pop(1)
0x8d1: @@ ClearReplies()
0x8d2: Pop(0)
0x8d3: PushEmpty(bool, object)
0x8d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d5: Call2 0x1602

0x8d6: Pop(1)
0x8d7: IF (Stack[-1] == 0) GOTO 0x8dd; Pop(1)

0x8d8: Push((int) 520158)
0x8d9: Push((int) 21346)
0x8da: Push((int) 21345)
0x8db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8dc: Pop(3)
0x8dd: PushEmpty(bool, object)
0x8de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8df: Call2 0x160e

0x8e0: Pop(1)
0x8e1: IF (Stack[-1] == 0) GOTO 0x8e7; Pop(1)

0x8e2: Push((int) 520164)
0x8e3: Push((int) 21352)
0x8e4: Push((int) 21351)
0x8e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e6: Pop(3)
0x8e7: Push((int) 520180)
0x8e8: Push((int) -1)
0x8e9: Push((int) 21370)
0x8ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8eb: Pop(3)
0x8ec: Return(); Pop(0)

0x8ed: Push((int) 21352)
0x8ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ef: IF (Stack[-1] == 0) GOTO 0x904; Pop(1)

0x8f0: PushEmpty(string)
0x8f1: Stack[-1] = "Neutral"
0x8f2: Call2 0x81f

0x8f3: Pop(1)
0x8f4: Push((int) 520165)
0x8f5: @@ SetMessage(Stack[-1])
0x8f6: Pop(1)
0x8f7: @@ ClearReplies()
0x8f8: Pop(0)
0x8f9: Push((int) 520166)
0x8fa: Push((int) 21354)
0x8fb: Push((int) 21353)
0x8fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fd: Pop(3)
0x8fe: Push((int) 520179)
0x8ff: Push((int) 21354)
0x900: Push((int) 21368)
0x901: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x902: Pop(3)
0x903: Return(); Pop(0)

0x904: Push((int) 21354)
0x905: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x906: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x907: PushEmpty(string)
0x908: Stack[-1] = "Neutral"
0x909: Call2 0x81f

0x90a: Pop(1)
0x90b: Push((int) 520167)
0x90c: @@ SetMessage(Stack[-1])
0x90d: Pop(1)
0x90e: @@ ClearReplies()
0x90f: Pop(0)
0x910: Push((int) 520168)
0x911: Push((int) 21356)
0x912: Push((int) 21355)
0x913: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x914: Pop(3)
0x915: Push((int) 520178)
0x916: Push((int) 21360)
0x917: Push((int) 21366)
0x918: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x919: Pop(3)
0x91a: Return(); Pop(0)

0x91b: Push((int) 21356)
0x91c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91d: IF (Stack[-1] == 0) GOTO 0x92d; Pop(1)

0x91e: PushEmpty(string)
0x91f: Stack[-1] = "Fear"
0x920: Call2 0x81f

0x921: Pop(1)
0x922: Push((int) 520169)
0x923: @@ SetMessage(Stack[-1])
0x924: Pop(1)
0x925: @@ ClearReplies()
0x926: Pop(0)
0x927: Push((int) 520170)
0x928: Push((int) 21358)
0x929: Push((int) 21357)
0x92a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92b: Pop(3)
0x92c: Return(); Pop(0)

0x92d: Push((int) 21358)
0x92e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x92f: IF (Stack[-1] == 0) GOTO 0x944; Pop(1)

0x930: PushEmpty(string)
0x931: Stack[-1] = "Fear"
0x932: Call2 0x81f

0x933: Pop(1)
0x934: Push((int) 520171)
0x935: @@ SetMessage(Stack[-1])
0x936: Pop(1)
0x937: @@ ClearReplies()
0x938: Pop(0)
0x939: Push((int) 520172)
0x93a: Push((int) 21360)
0x93b: Push((int) 21359)
0x93c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93d: Pop(3)
0x93e: Push((int) 520175)
0x93f: Push((int) 21363)
0x940: Push((int) 21362)
0x941: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x942: Pop(3)
0x943: Return(); Pop(0)

0x944: Push((int) 21363)
0x945: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x946: IF (Stack[-1] == 0) GOTO 0x956; Pop(1)

0x947: PushEmpty(string)
0x948: Stack[-1] = "Sly"
0x949: Call2 0x81f

0x94a: Pop(1)
0x94b: Push((int) 520176)
0x94c: @@ SetMessage(Stack[-1])
0x94d: Pop(1)
0x94e: @@ ClearReplies()
0x94f: Pop(0)
0x950: Push((int) 520177)
0x951: Push((int) 21360)
0x952: Push((int) 21364)
0x953: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x954: Pop(3)
0x955: Return(); Pop(0)

0x956: Push((int) 21360)
0x957: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x958: IF (Stack[-1] == 0) GOTO 0x968; Pop(1)

0x959: PushEmpty(string)
0x95a: Stack[-1] = "Neutral"
0x95b: Call2 0x81f

0x95c: Pop(1)
0x95d: Push((int) 520173)
0x95e: @@ SetMessage(Stack[-1])
0x95f: Pop(1)
0x960: @@ ClearReplies()
0x961: Pop(0)
0x962: Push((int) 520174)
0x963: Push((int) -1)
0x964: Push((int) 21361)
0x965: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x966: Pop(3)
0x967: Return(); Pop(0)

0x968: Push((int) 21346)
0x969: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x96a: IF (Stack[-1] == 0) GOTO 0x97f; Pop(1)

0x96b: PushEmpty(string)
0x96c: Stack[-1] = "Sly"
0x96d: Call2 0x81f

0x96e: Pop(1)
0x96f: Push((int) 520159)
0x970: @@ SetMessage(Stack[-1])
0x971: Pop(1)
0x972: @@ ClearReplies()
0x973: Pop(0)
0x974: Push((int) 520160)
0x975: Push((int) 21348)
0x976: Push((int) 21347)
0x977: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x978: Pop(3)
0x979: Push((int) 520163)
0x97a: Push((int) -1)
0x97b: Push((int) 21350)
0x97c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97d: Pop(3)
0x97e: Return(); Pop(0)

0x97f: Push((int) 21348)
0x980: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x981: IF (Stack[-1] == 0) GOTO 0x991; Pop(1)

0x982: PushEmpty(string)
0x983: Stack[-1] = "Neutral"
0x984: Call2 0x81f

0x985: Pop(1)
0x986: Push((int) 520161)
0x987: @@ SetMessage(Stack[-1])
0x988: Pop(1)
0x989: @@ ClearReplies()
0x98a: Pop(0)
0x98b: Push((int) 520162)
0x98c: Push((int) -1)
0x98d: Push((int) 21349)
0x98e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98f: Pop(3)
0x990: Return(); Pop(0)

0x991: Push((int) 21324)
0x992: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x993: IF (Stack[-1] == 0) GOTO 0x9a8; Pop(1)

0x994: PushEmpty(string)
0x995: Stack[-1] = "Rage"
0x996: Call2 0x81f

0x997: Pop(1)
0x998: Push((int) 520140)
0x999: @@ SetMessage(Stack[-1])
0x99a: Pop(1)
0x99b: @@ ClearReplies()
0x99c: Pop(0)
0x99d: Push((int) 520141)
0x99e: Push((int) 21326)
0x99f: Push((int) 21325)
0x9a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a1: Pop(3)
0x9a2: Push((int) 520154)
0x9a3: Push((int) 21341)
0x9a4: Push((int) 21340)
0x9a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a6: Pop(3)
0x9a7: Return(); Pop(0)

0x9a8: Push((int) 21341)
0x9a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9aa: IF (Stack[-1] == 0) GOTO 0x9ba; Pop(1)

0x9ab: PushEmpty(string)
0x9ac: Stack[-1] = "Sly"
0x9ad: Call2 0x81f

0x9ae: Pop(1)
0x9af: Push((int) 520155)
0x9b0: @@ SetMessage(Stack[-1])
0x9b1: Pop(1)
0x9b2: @@ ClearReplies()
0x9b3: Pop(0)
0x9b4: Push((int) 520156)
0x9b5: Push((int) 21326)
0x9b6: Push((int) 21342)
0x9b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b8: Pop(3)
0x9b9: Return(); Pop(0)

0x9ba: Push((int) 21326)
0x9bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9bc: IF (Stack[-1] == 0) GOTO 0x9d1; Pop(1)

0x9bd: PushEmpty(string)
0x9be: Stack[-1] = "Rage"
0x9bf: Call2 0x81f

0x9c0: Pop(1)
0x9c1: Push((int) 520142)
0x9c2: @@ SetMessage(Stack[-1])
0x9c3: Pop(1)
0x9c4: @@ ClearReplies()
0x9c5: Pop(0)
0x9c6: Push((int) 520143)
0x9c7: Push((int) 21328)
0x9c8: Push((int) 21327)
0x9c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ca: Pop(3)
0x9cb: Push((int) 520153)
0x9cc: Push((int) 21330)
0x9cd: Push((int) 21338)
0x9ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9cf: Pop(3)
0x9d0: Return(); Pop(0)

0x9d1: Push((int) 21328)
0x9d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9d3: IF (Stack[-1] == 0) GOTO 0x9e8; Pop(1)

0x9d4: PushEmpty(string)
0x9d5: Stack[-1] = "Sly"
0x9d6: Call2 0x81f

0x9d7: Pop(1)
0x9d8: Push((int) 520144)
0x9d9: @@ SetMessage(Stack[-1])
0x9da: Pop(1)
0x9db: @@ ClearReplies()
0x9dc: Pop(0)
0x9dd: Push((int) 520145)
0x9de: Push((int) 21330)
0x9df: Push((int) 21329)
0x9e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e1: Pop(3)
0x9e2: Push((int) 520152)
0x9e3: Push((int) 21330)
0x9e4: Push((int) 21336)
0x9e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e6: Pop(3)
0x9e7: Return(); Pop(0)

0x9e8: Push((int) 21330)
0x9e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ea: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x9eb: PushEmpty(string)
0x9ec: Stack[-1] = "Sly"
0x9ed: Call2 0x81f

0x9ee: Pop(1)
0x9ef: Push((int) 520146)
0x9f0: @@ SetMessage(Stack[-1])
0x9f1: Pop(1)
0x9f2: @@ ClearReplies()
0x9f3: Pop(0)
0x9f4: Push((int) 520147)
0x9f5: Push((int) 21332)
0x9f6: Push((int) 21331)
0x9f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f8: Pop(3)
0x9f9: Push((int) 520151)
0x9fa: Push((int) -1)
0x9fb: Push((int) 21335)
0x9fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fd: Pop(3)
0x9fe: Return(); Pop(0)

0x9ff: Push((int) 21332)
0xa00: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa01: IF (Stack[-1] == 0) GOTO 0xa16; Pop(1)

0xa02: PushEmpty(string)
0xa03: Stack[-1] = "Neutral"
0xa04: Call2 0x81f

0xa05: Pop(1)
0xa06: Push((int) 520148)
0xa07: @@ SetMessage(Stack[-1])
0xa08: Pop(1)
0xa09: @@ ClearReplies()
0xa0a: Pop(0)
0xa0b: Push((int) 520149)
0xa0c: Push((int) -1)
0xa0d: Push((int) 21333)
0xa0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0f: Pop(3)
0xa10: Push((int) 520150)
0xa11: Push((int) -1)
0xa12: Push((int) 21334)
0xa13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa14: Pop(3)
0xa15: Return(); Pop(0)

0xa16: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa17: PushEmpty(bool)
0xa18: Call2 0x142b

0xa19: Pop(0)
0xa1a: IF (Stack[-1] == 0) GOTO 0xa1e; Pop(1)

0xa1b: @ lshStopAnimation()
0xa1c: Pop(0)
0xa1d: GOTO 0xa20

0xa1e: @ StopAnimation()
0xa1f: Pop(0)
0xa20: Return(); Pop(0)

0xa21: GOTO 0x836

0xa22: Return(); Pop(0)

0xa23: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xa24: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa25: PushEmpty(bool, object, float)
0xa26: Stack[-2] = Stack[-12]
0xa27: Stack[-1] = (float) 70.0
0xa28: Call2 0x121d

0xa29: Pop(2)
0xa2a: Pop(1); Push((bool) Stack[-1] == 0)
0xa2b: IF (Stack[-1] == 0) GOTO 0xa2e; Pop(1)

0xa2c: Stack[-10] = (int) -2
0xa2d: Return(); Pop(8)

0xa2e: @ CreateDialog(Stack[-4])
0xa2f: Pop(0)
0xa30: PushEmpty(int)
0xa31: Call2 0x1425

0xa32: Pop(0)
0xa33: @@ SetNPCName(Stack[-1])
0xa34: Pop(1)
0xa35: PushEmpty(int)
0xa36: Call2 0x1423

0xa37: Pop(0)
0xa38: @@ SetNPCDescription(Stack[-1])
0xa39: Pop(1)
0xa3a: PushEmpty(string)
0xa3b: Call2 0x1427

0xa3c: Pop(0)
0xa3d: @@ SetPhoto(Stack[-1])
0xa3e: Pop(1)
0xa3f: PushEmpty(string)
0xa40: Call2 0x1429

0xa41: Pop(0)
0xa42: @@ SetPhoto2(Stack[-1])
0xa43: Pop(1)
0xa44: PushEmpty(int)
0xa45: Call2 0x16d0

0xa46: Pop(0)
0xa47: @@ SetPlayerName(Stack[-1])
0xa48: Pop(1)
0xa49: Stack[-2] = (int) -1
0xa4a: @ IsOverrideActive(Stack[-3])
0xa4b: Pop(0)
0xa4c: Push(Stack[-3])
0xa4d: IF (Stack[-1] == 0) GOTO 0xa50; Pop(1)

0xa4e: Stack[-10] = (int) -2
0xa4f: Return(); Pop(8)

0xa50: @ DoDialog(Stack[-4])
0xa51: Pop(0)
0xa52: PushEmpty(bool, object)
0xa53: PushEmpty(object)
0xa54: Call2 0x1331

0xa55: Stack[-2] = Stack[-1]
0xa56: Pop(1)
0xa57: Call2 0x1272

0xa58: Pop(2)
0xa59: PushEmpty(object, object)
0xa5a: Stack[-2] = Stack[-11]
0xa5b: Stack[-1] = Stack[-6]
0xa5c: Push(-2, 4); TaskCall(13)
0xa5d: Call2 0xa74

0xa5e: Pop(-2, 4); TaskReturn
0xa5f: Pop(2)
0xa60: @@ IsDialogEnd(Stack[-1])
0xa61: Pop(0)
0xa62: Pop(0); Push((bool) Stack[-1] == 0)
0xa63: IF (Stack[-1] == 0) GOTO 0xa69; Pop(1)

0xa64: @ sync()
0xa65: Pop(0)
0xa66: @@ IsDialogEnd(Stack[-1])
0xa67: Pop(0)
0xa68: GOTO 0xa62

0xa69: PushEmpty(object)
0xa6a: Stack[-1] = Stack[-10]
0xa6b: Call2 0x1261

0xa6c: Pop(1)
0xa6d: @ StopDialog(Stack[-4])
0xa6e: Pop(0)
0xa6f: @@ GetReturnValue(Stack[-2])
0xa70: Pop(0)
0xa71: Stack[-10] = Stack[-2]
0xa72: Return(); Pop(8)

0xa73: Stack[-4] = 0
0xa74: PushEmpty()
0xa75: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xa76: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xa77: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa78: Push((int) 1)
0xa79: IF (Stack[-1] == 0) GOTO 0xa90; Pop(1)

0xa7a: PushEmpty(string)
0xa7b: Stack[-1] = "Neutral"
0xa7c: Call2 0xaae

0xa7d: Pop(1)
0xa7e: Push((int) 520768)
0xa7f: @@ SetMessage(Stack[-1])
0xa80: Pop(1)
0xa81: @@ ClearReplies()
0xa82: Pop(0)
0xa83: Push((int) 520769)
0xa84: Push((int) 21984)
0xa85: Push((int) 21983)
0xa86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa87: Pop(3)
0xa88: Push((int) 520772)
0xa89: Push((int) 21987)
0xa8a: Push((int) 21986)
0xa8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8c: Pop(3)
0xa8d: GOTO 0xa90

0xa8e: Return(); Pop(0)

0xa8f: GOTO 0xa78

0xa90: PushEmpty(bool)
0xa91: Call2 0x142b

0xa92: Pop(0)
0xa93: IF (Stack[-1] == 0) GOTO 0xa9f; Pop(1)

0xa94: @ lshWaitForAnimEnd()
0xa95: Pop(0)
0xa96: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa97: IF (Stack[-1] == 0) GOTO 0xa99; Pop(1)

0xa98: GOTO 0xa9e

0xa99: PushEmpty(string)
0xa9a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa9b: Call2 0x12fc

0xa9c: Pop(1)
0xa9d: GOTO 0xa94

0xa9e: GOTO 0xaad

0xa9f: Push("all")
0xaa0: Push("idle")
0xaa1: @ PlayAnimation(Stack[-2], Stack[-1])
0xaa2: Pop(2)
0xaa3: @ WaitForAnimEnd()
0xaa4: Pop(0)
0xaa5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaa6: IF (Stack[-1] == 0) GOTO 0xaa8; Pop(1)

0xaa7: GOTO 0xaad

0xaa8: Push("all")
0xaa9: Push("idle")
0xaaa: @ PlayAnimation(Stack[-2], Stack[-1])
0xaab: Pop(2)
0xaac: GOTO 0xaa3

0xaad: Return(); Pop(0)

0xaae: PushEmpty()
0xaaf: PushEmpty(bool)
0xab0: Call2 0x142b

0xab1: Pop(0)
0xab2: Pop(1); Push((bool) Stack[-1] == 0)
0xab3: IF (Stack[-1] == 0) GOTO 0xab5; Pop(1)

0xab4: Return(); Pop(0)

0xab5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xab6: IF (Stack[-1] == 0) GOTO 0xab8; Pop(1)

0xab7: Return(); Pop(0)

0xab8: PushEmpty(string, bool)
0xab9: Stack[-2] = Stack[-3]
0xaba: Push("")
0xabb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xabc: IF (Stack[-1] == 0) GOTO 0xabf; Pop(1)

0xabd: Stack[-1] = (bool) 0
0xabe: GOTO 0xac0

0xabf: Stack[-1] = (bool) 1
0xac0: Call2 0x130c

0xac1: Pop(2)
0xac2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xac3: Return(); Pop(0)

0xac4: PushEmpty()
0xac5: Push((int) 1)
0xac6: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xac7: PushEmpty()
0xac8: Call2 0x132a

0xac9: Pop(0)
0xaca: Push((int) 21982)
0xacb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xacc: IF (Stack[-1] == 0) GOTO 0xae1; Pop(1)

0xacd: PushEmpty(string)
0xace: Stack[-1] = "Neutral"
0xacf: Call2 0xaae

0xad0: Pop(1)
0xad1: Push((int) 520768)
0xad2: @@ SetMessage(Stack[-1])
0xad3: Pop(1)
0xad4: @@ ClearReplies()
0xad5: Pop(0)
0xad6: Push((int) 520769)
0xad7: Push((int) 21984)
0xad8: Push((int) 21983)
0xad9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xada: Pop(3)
0xadb: Push((int) 520772)
0xadc: Push((int) 21987)
0xadd: Push((int) 21986)
0xade: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xadf: Pop(3)
0xae0: Return(); Pop(0)

0xae1: Push((int) 21987)
0xae2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae3: IF (Stack[-1] == 0) GOTO 0xaf3; Pop(1)

0xae4: PushEmpty(string)
0xae5: Stack[-1] = "Neutral"
0xae6: Call2 0xaae

0xae7: Pop(1)
0xae8: Push((int) 520773)
0xae9: @@ SetMessage(Stack[-1])
0xaea: Pop(1)
0xaeb: @@ ClearReplies()
0xaec: Pop(0)
0xaed: Push((int) 520774)
0xaee: Push((int) -1)
0xaef: Push((int) 21988)
0xaf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf1: Pop(3)
0xaf2: Return(); Pop(0)

0xaf3: Push((int) 21984)
0xaf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf5: IF (Stack[-1] == 0) GOTO 0xb05; Pop(1)

0xaf6: PushEmpty(string)
0xaf7: Stack[-1] = "Neutral"
0xaf8: Call2 0xaae

0xaf9: Pop(1)
0xafa: Push((int) 520770)
0xafb: @@ SetMessage(Stack[-1])
0xafc: Pop(1)
0xafd: @@ ClearReplies()
0xafe: Pop(0)
0xaff: Push((int) 520771)
0xb00: Push((int) -1)
0xb01: Push((int) 21985)
0xb02: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb03: Pop(3)
0xb04: Return(); Pop(0)

0xb05: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb06: PushEmpty(bool)
0xb07: Call2 0x142b

0xb08: Pop(0)
0xb09: IF (Stack[-1] == 0) GOTO 0xb0d; Pop(1)

0xb0a: @ lshStopAnimation()
0xb0b: Pop(0)
0xb0c: GOTO 0xb0f

0xb0d: @ StopAnimation()
0xb0e: Pop(0)
0xb0f: Return(); Pop(0)

0xb10: GOTO 0xac5

0xb11: Return(); Pop(0)

0xb12: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xb13: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xb14: PushEmpty(bool, object, float)
0xb15: Stack[-2] = Stack[-12]
0xb16: Stack[-1] = (float) 70.0
0xb17: Call2 0x121d

0xb18: Pop(2)
0xb19: Pop(1); Push((bool) Stack[-1] == 0)
0xb1a: IF (Stack[-1] == 0) GOTO 0xb1d; Pop(1)

0xb1b: Stack[-10] = (int) -2
0xb1c: Return(); Pop(8)

0xb1d: @ CreateDialog(Stack[-4])
0xb1e: Pop(0)
0xb1f: PushEmpty(int)
0xb20: Call2 0x1425

0xb21: Pop(0)
0xb22: @@ SetNPCName(Stack[-1])
0xb23: Pop(1)
0xb24: PushEmpty(int)
0xb25: Call2 0x1423

0xb26: Pop(0)
0xb27: @@ SetNPCDescription(Stack[-1])
0xb28: Pop(1)
0xb29: PushEmpty(string)
0xb2a: Call2 0x1427

0xb2b: Pop(0)
0xb2c: @@ SetPhoto(Stack[-1])
0xb2d: Pop(1)
0xb2e: PushEmpty(string)
0xb2f: Call2 0x1429

0xb30: Pop(0)
0xb31: @@ SetPhoto2(Stack[-1])
0xb32: Pop(1)
0xb33: PushEmpty(int)
0xb34: Call2 0x16d0

0xb35: Pop(0)
0xb36: @@ SetPlayerName(Stack[-1])
0xb37: Pop(1)
0xb38: Stack[-2] = (int) -1
0xb39: @ IsOverrideActive(Stack[-3])
0xb3a: Pop(0)
0xb3b: Push(Stack[-3])
0xb3c: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb3d: Stack[-10] = (int) -2
0xb3e: Return(); Pop(8)

0xb3f: @ DoDialog(Stack[-4])
0xb40: Pop(0)
0xb41: PushEmpty(bool, object)
0xb42: PushEmpty(object)
0xb43: Call2 0x1331

0xb44: Stack[-2] = Stack[-1]
0xb45: Pop(1)
0xb46: Call2 0x1272

0xb47: Pop(2)
0xb48: PushEmpty(object, object)
0xb49: Stack[-2] = Stack[-11]
0xb4a: Stack[-1] = Stack[-6]
0xb4b: Push(-2, 4); TaskCall(15)
0xb4c: Call2 0xb63

0xb4d: Pop(-2, 4); TaskReturn
0xb4e: Pop(2)
0xb4f: @@ IsDialogEnd(Stack[-1])
0xb50: Pop(0)
0xb51: Pop(0); Push((bool) Stack[-1] == 0)
0xb52: IF (Stack[-1] == 0) GOTO 0xb58; Pop(1)

0xb53: @ sync()
0xb54: Pop(0)
0xb55: @@ IsDialogEnd(Stack[-1])
0xb56: Pop(0)
0xb57: GOTO 0xb51

0xb58: PushEmpty(object)
0xb59: Stack[-1] = Stack[-10]
0xb5a: Call2 0x1261

0xb5b: Pop(1)
0xb5c: @ StopDialog(Stack[-4])
0xb5d: Pop(0)
0xb5e: @@ GetReturnValue(Stack[-2])
0xb5f: Pop(0)
0xb60: Stack[-10] = Stack[-2]
0xb61: Return(); Pop(8)

0xb62: Stack[-4] = 0
0xb63: PushEmpty()
0xb64: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xb65: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xb66: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xb67: Push((int) 1)
0xb68: IF (Stack[-1] == 0) GOTO 0xb7f; Pop(1)

0xb69: PushEmpty(string)
0xb6a: Stack[-1] = "Untrust"
0xb6b: Call2 0xb9d

0xb6c: Pop(1)
0xb6d: Push((int) 521202)
0xb6e: @@ SetMessage(Stack[-1])
0xb6f: Pop(1)
0xb70: @@ ClearReplies()
0xb71: Pop(0)
0xb72: Push((int) 521203)
0xb73: Push((int) 22402)
0xb74: Push((int) 22400)
0xb75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb76: Pop(3)
0xb77: Push((int) 521204)
0xb78: Push((int) -1)
0xb79: Push((int) 22401)
0xb7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7b: Pop(3)
0xb7c: GOTO 0xb7f

0xb7d: Return(); Pop(0)

0xb7e: GOTO 0xb67

0xb7f: PushEmpty(bool)
0xb80: Call2 0x142b

0xb81: Pop(0)
0xb82: IF (Stack[-1] == 0) GOTO 0xb8e; Pop(1)

0xb83: @ lshWaitForAnimEnd()
0xb84: Pop(0)
0xb85: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb86: IF (Stack[-1] == 0) GOTO 0xb88; Pop(1)

0xb87: GOTO 0xb8d

0xb88: PushEmpty(string)
0xb89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb8a: Call2 0x12fc

0xb8b: Pop(1)
0xb8c: GOTO 0xb83

0xb8d: GOTO 0xb9c

0xb8e: Push("all")
0xb8f: Push("idle")
0xb90: @ PlayAnimation(Stack[-2], Stack[-1])
0xb91: Pop(2)
0xb92: @ WaitForAnimEnd()
0xb93: Pop(0)
0xb94: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb95: IF (Stack[-1] == 0) GOTO 0xb97; Pop(1)

0xb96: GOTO 0xb9c

0xb97: Push("all")
0xb98: Push("idle")
0xb99: @ PlayAnimation(Stack[-2], Stack[-1])
0xb9a: Pop(2)
0xb9b: GOTO 0xb92

0xb9c: Return(); Pop(0)

0xb9d: PushEmpty()
0xb9e: PushEmpty(bool)
0xb9f: Call2 0x142b

0xba0: Pop(0)
0xba1: Pop(1); Push((bool) Stack[-1] == 0)
0xba2: IF (Stack[-1] == 0) GOTO 0xba4; Pop(1)

0xba3: Return(); Pop(0)

0xba4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xba5: IF (Stack[-1] == 0) GOTO 0xba7; Pop(1)

0xba6: Return(); Pop(0)

0xba7: PushEmpty(string, bool)
0xba8: Stack[-2] = Stack[-3]
0xba9: Push("")
0xbaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbab: IF (Stack[-1] == 0) GOTO 0xbae; Pop(1)

0xbac: Stack[-1] = (bool) 0
0xbad: GOTO 0xbaf

0xbae: Stack[-1] = (bool) 1
0xbaf: Call2 0x130c

0xbb0: Pop(2)
0xbb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbb2: Return(); Pop(0)

0xbb3: PushEmpty()
0xbb4: Push((int) 1)
0xbb5: IF (Stack[-1] == 0) GOTO 0xc0d; Pop(1)

0xbb6: PushEmpty()
0xbb7: Call2 0x132a

0xbb8: Pop(0)
0xbb9: Push((int) 22403)
0xbba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbbb: IF (Stack[-1] == 0) GOTO 0xbc1; Pop(1)

0xbbc: PushEmpty(object, object)
0xbbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbbf: Call2 0x14e6

0xbc0: Pop(2)
0xbc1: Push((int) 22399)
0xbc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc3: IF (Stack[-1] == 0) GOTO 0xbd8; Pop(1)

0xbc4: PushEmpty(string)
0xbc5: Stack[-1] = "Untrust"
0xbc6: Call2 0xb9d

0xbc7: Pop(1)
0xbc8: Push((int) 521202)
0xbc9: @@ SetMessage(Stack[-1])
0xbca: Pop(1)
0xbcb: @@ ClearReplies()
0xbcc: Pop(0)
0xbcd: Push((int) 521203)
0xbce: Push((int) 22402)
0xbcf: Push((int) 22400)
0xbd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd1: Pop(3)
0xbd2: Push((int) 521204)
0xbd3: Push((int) -1)
0xbd4: Push((int) 22401)
0xbd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd6: Pop(3)
0xbd7: Return(); Pop(0)

0xbd8: Push((int) 22402)
0xbd9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbda: IF (Stack[-1] == 0) GOTO 0xbef; Pop(1)

0xbdb: PushEmpty(string)
0xbdc: Stack[-1] = "Untrust"
0xbdd: Call2 0xb9d

0xbde: Pop(1)
0xbdf: Push((int) 521205)
0xbe0: @@ SetMessage(Stack[-1])
0xbe1: Pop(1)
0xbe2: @@ ClearReplies()
0xbe3: Pop(0)
0xbe4: Push((int) 528423)
0xbe5: Push((int) 29808)
0xbe6: Push((int) 29806)
0xbe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe8: Pop(3)
0xbe9: Push((int) 528424)
0xbea: Push((int) 29808)
0xbeb: Push((int) 29807)
0xbec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbed: Pop(3)
0xbee: Return(); Pop(0)

0xbef: Push((int) 29808)
0xbf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf1: IF (Stack[-1] == 0) GOTO 0xc01; Pop(1)

0xbf2: PushEmpty(string)
0xbf3: Stack[-1] = "Sly"
0xbf4: Call2 0xb9d

0xbf5: Pop(1)
0xbf6: Push((int) 528425)
0xbf7: @@ SetMessage(Stack[-1])
0xbf8: Pop(1)
0xbf9: @@ ClearReplies()
0xbfa: Pop(0)
0xbfb: Push((int) 521206)
0xbfc: Push((int) -1)
0xbfd: Push((int) 22403)
0xbfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbff: Pop(3)
0xc00: Return(); Pop(0)

0xc01: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc02: PushEmpty(bool)
0xc03: Call2 0x142b

0xc04: Pop(0)
0xc05: IF (Stack[-1] == 0) GOTO 0xc09; Pop(1)

0xc06: @ lshStopAnimation()
0xc07: Pop(0)
0xc08: GOTO 0xc0b

0xc09: @ StopAnimation()
0xc0a: Pop(0)
0xc0b: Return(); Pop(0)

0xc0c: GOTO 0xbb4

0xc0d: Return(); Pop(0)

0xc0e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xc0f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xc10: PushEmpty(bool, object, float)
0xc11: Stack[-2] = Stack[-12]
0xc12: Stack[-1] = (float) 70.0
0xc13: Call2 0x121d

0xc14: Pop(2)
0xc15: Pop(1); Push((bool) Stack[-1] == 0)
0xc16: IF (Stack[-1] == 0) GOTO 0xc19; Pop(1)

0xc17: Stack[-10] = (int) -2
0xc18: Return(); Pop(8)

0xc19: @ CreateDialog(Stack[-4])
0xc1a: Pop(0)
0xc1b: PushEmpty(int)
0xc1c: Call2 0x1425

0xc1d: Pop(0)
0xc1e: @@ SetNPCName(Stack[-1])
0xc1f: Pop(1)
0xc20: PushEmpty(int)
0xc21: Call2 0x1423

0xc22: Pop(0)
0xc23: @@ SetNPCDescription(Stack[-1])
0xc24: Pop(1)
0xc25: PushEmpty(string)
0xc26: Call2 0x1427

0xc27: Pop(0)
0xc28: @@ SetPhoto(Stack[-1])
0xc29: Pop(1)
0xc2a: PushEmpty(string)
0xc2b: Call2 0x1429

0xc2c: Pop(0)
0xc2d: @@ SetPhoto2(Stack[-1])
0xc2e: Pop(1)
0xc2f: PushEmpty(int)
0xc30: Call2 0x16d0

0xc31: Pop(0)
0xc32: @@ SetPlayerName(Stack[-1])
0xc33: Pop(1)
0xc34: Stack[-2] = (int) -1
0xc35: @ IsOverrideActive(Stack[-3])
0xc36: Pop(0)
0xc37: Push(Stack[-3])
0xc38: IF (Stack[-1] == 0) GOTO 0xc3b; Pop(1)

0xc39: Stack[-10] = (int) -2
0xc3a: Return(); Pop(8)

0xc3b: @ DoDialog(Stack[-4])
0xc3c: Pop(0)
0xc3d: PushEmpty(bool, object)
0xc3e: PushEmpty(object)
0xc3f: Call2 0x1331

0xc40: Stack[-2] = Stack[-1]
0xc41: Pop(1)
0xc42: Call2 0x1272

0xc43: Pop(2)
0xc44: PushEmpty(object, object)
0xc45: Stack[-2] = Stack[-11]
0xc46: Stack[-1] = Stack[-6]
0xc47: Push(-2, 4); TaskCall(17)
0xc48: Call2 0xc5f

0xc49: Pop(-2, 4); TaskReturn
0xc4a: Pop(2)
0xc4b: @@ IsDialogEnd(Stack[-1])
0xc4c: Pop(0)
0xc4d: Pop(0); Push((bool) Stack[-1] == 0)
0xc4e: IF (Stack[-1] == 0) GOTO 0xc54; Pop(1)

0xc4f: @ sync()
0xc50: Pop(0)
0xc51: @@ IsDialogEnd(Stack[-1])
0xc52: Pop(0)
0xc53: GOTO 0xc4d

0xc54: PushEmpty(object)
0xc55: Stack[-1] = Stack[-10]
0xc56: Call2 0x1261

0xc57: Pop(1)
0xc58: @ StopDialog(Stack[-4])
0xc59: Pop(0)
0xc5a: @@ GetReturnValue(Stack[-2])
0xc5b: Pop(0)
0xc5c: Stack[-10] = Stack[-2]
0xc5d: Return(); Pop(8)

0xc5e: Stack[-4] = 0
0xc5f: PushEmpty()
0xc60: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xc61: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xc62: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xc63: Push((int) 1)
0xc64: IF (Stack[-1] == 0) GOTO 0xcb2; Pop(1)

0xc65: PushEmpty(bool, object)
0xc66: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc67: Call2 0x1573

0xc68: Pop(1)
0xc69: IF (Stack[-1] == 0) GOTO 0xc83; Pop(1)

0xc6a: PushEmpty(object, object)
0xc6b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6d: Call2 0x150f

0xc6e: Pop(2)
0xc6f: PushEmpty(string)
0xc70: Stack[-1] = "Rage"
0xc71: Call2 0xcd0

0xc72: Pop(1)
0xc73: Push((int) 521469)
0xc74: @@ SetMessage(Stack[-1])
0xc75: Pop(1)
0xc76: @@ ClearReplies()
0xc77: Pop(0)
0xc78: Push((int) 523789)
0xc79: Push((int) 25055)
0xc7a: Push((int) 25054)
0xc7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7c: Pop(3)
0xc7d: Push((int) 523804)
0xc7e: Push((int) 25055)
0xc7f: Push((int) 25070)
0xc80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc81: Pop(3)
0xc82: GOTO 0xcb2

0xc83: PushEmpty(string)
0xc84: Stack[-1] = "Rage"
0xc85: Call2 0xcd0

0xc86: Pop(1)
0xc87: Push((int) 521474)
0xc88: @@ SetMessage(Stack[-1])
0xc89: Pop(1)
0xc8a: @@ ClearReplies()
0xc8b: Pop(0)
0xc8c: PushEmpty(bool, object)
0xc8d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc8e: Call2 0x157f

0xc8f: Pop(1)
0xc90: IF (Stack[-1] == 0) GOTO 0xc96; Pop(1)

0xc91: Push((int) 521475)
0xc92: Push((int) 22642)
0xc93: Push((int) 22640)
0xc94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc95: Pop(3)
0xc96: PushEmpty(bool)
0xc97: Stack[-1] = (bool) 0
0xc98: PushEmpty(bool, object)
0xc99: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc9a: Call2 0x157f

0xc9b: Pop(1)
0xc9c: Pop(1); Push((bool) Stack[-1] == 0)
0xc9d: IF (Stack[-1] == 0) GOTO 0xca4; Pop(1)

0xc9e: PushEmpty(bool, object)
0xc9f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xca0: Call2 0x158b

0xca1: Pop(1)
0xca2: IF (Stack[-1] == 0) GOTO 0xca4; Pop(1)

0xca3: Stack[-1] = (bool) 1
0xca4: IF (Stack[-1] == 0) GOTO 0xcaa; Pop(1)

0xca5: Push((int) 521479)
0xca6: Push((int) 22645)
0xca7: Push((int) 22644)
0xca8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca9: Pop(3)
0xcaa: Push((int) 521476)
0xcab: Push((int) -1)
0xcac: Push((int) 22641)
0xcad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcae: Pop(3)
0xcaf: GOTO 0xcb2

0xcb0: Return(); Pop(0)

0xcb1: GOTO 0xc63

0xcb2: PushEmpty(bool)
0xcb3: Call2 0x142b

0xcb4: Pop(0)
0xcb5: IF (Stack[-1] == 0) GOTO 0xcc1; Pop(1)

0xcb6: @ lshWaitForAnimEnd()
0xcb7: Pop(0)
0xcb8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcb9: IF (Stack[-1] == 0) GOTO 0xcbb; Pop(1)

0xcba: GOTO 0xcc0

0xcbb: PushEmpty(string)
0xcbc: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xcbd: Call2 0x12fc

0xcbe: Pop(1)
0xcbf: GOTO 0xcb6

0xcc0: GOTO 0xccf

0xcc1: Push("all")
0xcc2: Push("idle")
0xcc3: @ PlayAnimation(Stack[-2], Stack[-1])
0xcc4: Pop(2)
0xcc5: @ WaitForAnimEnd()
0xcc6: Pop(0)
0xcc7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcc8: IF (Stack[-1] == 0) GOTO 0xcca; Pop(1)

0xcc9: GOTO 0xccf

0xcca: Push("all")
0xccb: Push("idle")
0xccc: @ PlayAnimation(Stack[-2], Stack[-1])
0xccd: Pop(2)
0xcce: GOTO 0xcc5

0xccf: Return(); Pop(0)

0xcd0: PushEmpty()
0xcd1: PushEmpty(bool)
0xcd2: Call2 0x142b

0xcd3: Pop(0)
0xcd4: Pop(1); Push((bool) Stack[-1] == 0)
0xcd5: IF (Stack[-1] == 0) GOTO 0xcd7; Pop(1)

0xcd6: Return(); Pop(0)

0xcd7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xcd8: IF (Stack[-1] == 0) GOTO 0xcda; Pop(1)

0xcd9: Return(); Pop(0)

0xcda: PushEmpty(string, bool)
0xcdb: Stack[-2] = Stack[-3]
0xcdc: Push("")
0xcdd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xcde: IF (Stack[-1] == 0) GOTO 0xce1; Pop(1)

0xcdf: Stack[-1] = (bool) 0
0xce0: GOTO 0xce2

0xce1: Stack[-1] = (bool) 1
0xce2: Call2 0x130c

0xce3: Pop(2)
0xce4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xce5: Return(); Pop(0)

0xce6: PushEmpty()
0xce7: Push((int) 1)
0xce8: IF (Stack[-1] == 0) GOTO 0xea9; Pop(1)

0xce9: PushEmpty()
0xcea: Call2 0x132a

0xceb: Pop(0)
0xcec: Push((int) 22637)
0xced: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcee: IF (Stack[-1] == 0) GOTO 0xcf4; Pop(1)

0xcef: PushEmpty(object, object)
0xcf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcf2: Call2 0x14f1

0xcf3: Pop(2)
0xcf4: Push((int) 22643)
0xcf5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf6: IF (Stack[-1] == 0) GOTO 0xcfc; Pop(1)

0xcf7: PushEmpty(object, object)
0xcf8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcfa: Call2 0x14f1

0xcfb: Pop(2)
0xcfc: Push((int) 22646)
0xcfd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcfe: IF (Stack[-1] == 0) GOTO 0xd13; Pop(1)

0xcff: PushEmpty(object, object)
0xd00: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd01: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd02: Call2 0x1501

0xd03: Pop(2)
0xd04: PushEmpty(object, object)
0xd05: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd06: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd07: Call2 0x1567

0xd08: Pop(2)
0xd09: PushEmpty(object, object)
0xd0a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd0b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0c: Call2 0x14d1

0xd0d: Pop(2)
0xd0e: PushEmpty(object, object)
0xd0f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd10: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd11: Call2 0x1535

0xd12: Pop(2)
0xd13: Push((int) 25069)
0xd14: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd15: IF (Stack[-1] == 0) GOTO 0xd1b; Pop(1)

0xd16: PushEmpty(object, object)
0xd17: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd18: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd19: Call2 0x1501

0xd1a: Pop(2)
0xd1b: Push((int) 22634)
0xd1c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd1d: IF (Stack[-1] == 0) GOTO 0xd69; Pop(1)

0xd1e: PushEmpty(bool, object)
0xd1f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd20: Call2 0x1573

0xd21: Pop(1)
0xd22: IF (Stack[-1] == 0) GOTO 0xd3c; Pop(1)

0xd23: PushEmpty(object, object)
0xd24: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd25: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd26: Call2 0x150f

0xd27: Pop(2)
0xd28: PushEmpty(string)
0xd29: Stack[-1] = "Rage"
0xd2a: Call2 0xcd0

0xd2b: Pop(1)
0xd2c: Push((int) 521469)
0xd2d: @@ SetMessage(Stack[-1])
0xd2e: Pop(1)
0xd2f: @@ ClearReplies()
0xd30: Pop(0)
0xd31: Push((int) 523789)
0xd32: Push((int) 25055)
0xd33: Push((int) 25054)
0xd34: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd35: Pop(3)
0xd36: Push((int) 523804)
0xd37: Push((int) 25055)
0xd38: Push((int) 25070)
0xd39: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3a: Pop(3)
0xd3b: Return(); Pop(0)

0xd3c: PushEmpty(string)
0xd3d: Stack[-1] = "Rage"
0xd3e: Call2 0xcd0

0xd3f: Pop(1)
0xd40: Push((int) 521474)
0xd41: @@ SetMessage(Stack[-1])
0xd42: Pop(1)
0xd43: @@ ClearReplies()
0xd44: Pop(0)
0xd45: PushEmpty(bool, object)
0xd46: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd47: Call2 0x157f

0xd48: Pop(1)
0xd49: IF (Stack[-1] == 0) GOTO 0xd4f; Pop(1)

0xd4a: Push((int) 521475)
0xd4b: Push((int) 22642)
0xd4c: Push((int) 22640)
0xd4d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4e: Pop(3)
0xd4f: PushEmpty(bool)
0xd50: Stack[-1] = (bool) 0
0xd51: PushEmpty(bool, object)
0xd52: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd53: Call2 0x157f

0xd54: Pop(1)
0xd55: Pop(1); Push((bool) Stack[-1] == 0)
0xd56: IF (Stack[-1] == 0) GOTO 0xd5d; Pop(1)

0xd57: PushEmpty(bool, object)
0xd58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd59: Call2 0x158b

0xd5a: Pop(1)
0xd5b: IF (Stack[-1] == 0) GOTO 0xd5d; Pop(1)

0xd5c: Stack[-1] = (bool) 1
0xd5d: IF (Stack[-1] == 0) GOTO 0xd63; Pop(1)

0xd5e: Push((int) 521479)
0xd5f: Push((int) 22645)
0xd60: Push((int) 22644)
0xd61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd62: Pop(3)
0xd63: Push((int) 521476)
0xd64: Push((int) -1)
0xd65: Push((int) 22641)
0xd66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd67: Pop(3)
0xd68: Return(); Pop(0)

0xd69: Push((int) 25111)
0xd6a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd6b: IF (Stack[-1] == 0) GOTO 0xd6c; Pop(1)

0xd6c: Push((int) 25113)
0xd6d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd6e: IF (Stack[-1] == 0) GOTO 0xd7e; Pop(1)

0xd6f: PushEmpty(string)
0xd70: Stack[-1] = "Fear"
0xd71: Call2 0xcd0

0xd72: Pop(1)
0xd73: Push((int) 523840)
0xd74: @@ SetMessage(Stack[-1])
0xd75: Pop(1)
0xd76: @@ ClearReplies()
0xd77: Pop(0)
0xd78: Push((int) 523841)
0xd79: Push((int) 25115)
0xd7a: Push((int) 25114)
0xd7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7c: Pop(3)
0xd7d: Return(); Pop(0)

0xd7e: Push((int) 25115)
0xd7f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd80: IF (Stack[-1] == 0) GOTO 0xd90; Pop(1)

0xd81: PushEmpty(string)
0xd82: Stack[-1] = "Untrust"
0xd83: Call2 0xcd0

0xd84: Pop(1)
0xd85: Push((int) 523842)
0xd86: @@ SetMessage(Stack[-1])
0xd87: Pop(1)
0xd88: @@ ClearReplies()
0xd89: Pop(0)
0xd8a: Push((int) 523843)
0xd8b: Push((int) 25117)
0xd8c: Push((int) 25116)
0xd8d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8e: Pop(3)
0xd8f: Return(); Pop(0)

0xd90: Push((int) 25117)
0xd91: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd92: IF (Stack[-1] == 0) GOTO 0xda2; Pop(1)

0xd93: PushEmpty(string)
0xd94: Stack[-1] = "Untrust"
0xd95: Call2 0xcd0

0xd96: Pop(1)
0xd97: Push((int) 523844)
0xd98: @@ SetMessage(Stack[-1])
0xd99: Pop(1)
0xd9a: @@ ClearReplies()
0xd9b: Pop(0)
0xd9c: Push((int) 523845)
0xd9d: Push((int) -1)
0xd9e: Push((int) 25118)
0xd9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda0: Pop(3)
0xda1: Return(); Pop(0)

0xda2: Push((int) 22645)
0xda3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda4: IF (Stack[-1] == 0) GOTO 0xdb9; Pop(1)

0xda5: PushEmpty(string)
0xda6: Stack[-1] = "Sly"
0xda7: Call2 0xcd0

0xda8: Pop(1)
0xda9: Push((int) 521480)
0xdaa: @@ SetMessage(Stack[-1])
0xdab: Pop(1)
0xdac: @@ ClearReplies()
0xdad: Pop(0)
0xdae: Push((int) 523798)
0xdaf: Push((int) 25065)
0xdb0: Push((int) 25063)
0xdb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb2: Pop(3)
0xdb3: Push((int) 523799)
0xdb4: Push((int) 25066)
0xdb5: Push((int) 25064)
0xdb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb7: Pop(3)
0xdb8: Return(); Pop(0)

0xdb9: Push((int) 25066)
0xdba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdbb: IF (Stack[-1] == 0) GOTO 0xdcb; Pop(1)

0xdbc: PushEmpty(string)
0xdbd: Stack[-1] = "Neutral"
0xdbe: Call2 0xcd0

0xdbf: Pop(1)
0xdc0: Push((int) 523801)
0xdc1: @@ SetMessage(Stack[-1])
0xdc2: Pop(1)
0xdc3: @@ ClearReplies()
0xdc4: Pop(0)
0xdc5: Push((int) 523802)
0xdc6: Push((int) 25065)
0xdc7: Push((int) 25067)
0xdc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc9: Pop(3)
0xdca: Return(); Pop(0)

0xdcb: Push((int) 25065)
0xdcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdcd: IF (Stack[-1] == 0) GOTO 0xde2; Pop(1)

0xdce: PushEmpty(string)
0xdcf: Stack[-1] = "Neutral"
0xdd0: Call2 0xcd0

0xdd1: Pop(1)
0xdd2: Push((int) 523800)
0xdd3: @@ SetMessage(Stack[-1])
0xdd4: Pop(1)
0xdd5: @@ ClearReplies()
0xdd6: Pop(0)
0xdd7: Push((int) 521481)
0xdd8: Push((int) -1)
0xdd9: Push((int) 22646)
0xdda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xddb: Pop(3)
0xddc: Push((int) 523803)
0xddd: Push((int) -1)
0xdde: Push((int) 25069)
0xddf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde0: Pop(3)
0xde1: Return(); Pop(0)

0xde2: Push((int) 22642)
0xde3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xde4: IF (Stack[-1] == 0) GOTO 0xdf4; Pop(1)

0xde5: PushEmpty(string)
0xde6: Stack[-1] = "Neutral"
0xde7: Call2 0xcd0

0xde8: Pop(1)
0xde9: Push((int) 521477)
0xdea: @@ SetMessage(Stack[-1])
0xdeb: Pop(1)
0xdec: @@ ClearReplies()
0xded: Pop(0)
0xdee: Push((int) 521478)
0xdef: Push((int) -1)
0xdf0: Push((int) 22643)
0xdf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf2: Pop(3)
0xdf3: Return(); Pop(0)

0xdf4: Push((int) 25055)
0xdf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf6: IF (Stack[-1] == 0) GOTO 0xe0b; Pop(1)

0xdf7: PushEmpty(string)
0xdf8: Stack[-1] = "Rage"
0xdf9: Call2 0xcd0

0xdfa: Pop(1)
0xdfb: Push((int) 523790)
0xdfc: @@ SetMessage(Stack[-1])
0xdfd: Pop(1)
0xdfe: @@ ClearReplies()
0xdff: Pop(0)
0xe00: Push((int) 523791)
0xe01: Push((int) 25057)
0xe02: Push((int) 25056)
0xe03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe04: Pop(3)
0xe05: Push((int) 523805)
0xe06: Push((int) 25057)
0xe07: Push((int) 25072)
0xe08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe09: Pop(3)
0xe0a: Return(); Pop(0)

0xe0b: Push((int) 25057)
0xe0c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe0d: IF (Stack[-1] == 0) GOTO 0xe22; Pop(1)

0xe0e: PushEmpty(string)
0xe0f: Stack[-1] = "Rage"
0xe10: Call2 0xcd0

0xe11: Pop(1)
0xe12: Push((int) 523792)
0xe13: @@ SetMessage(Stack[-1])
0xe14: Pop(1)
0xe15: @@ ClearReplies()
0xe16: Pop(0)
0xe17: Push((int) 523793)
0xe18: Push((int) 25059)
0xe19: Push((int) 25058)
0xe1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1b: Pop(3)
0xe1c: Push((int) 523797)
0xe1d: Push((int) 25059)
0xe1e: Push((int) 25062)
0xe1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe20: Pop(3)
0xe21: Return(); Pop(0)

0xe22: Push((int) 25059)
0xe23: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe24: IF (Stack[-1] == 0) GOTO 0xe39; Pop(1)

0xe25: PushEmpty(string)
0xe26: Stack[-1] = "Rage"
0xe27: Call2 0xcd0

0xe28: Pop(1)
0xe29: Push((int) 523794)
0xe2a: @@ SetMessage(Stack[-1])
0xe2b: Pop(1)
0xe2c: @@ ClearReplies()
0xe2d: Pop(0)
0xe2e: Push((int) 523795)
0xe2f: Push((int) 25075)
0xe30: Push((int) 25060)
0xe31: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe32: Pop(3)
0xe33: Push((int) 523810)
0xe34: Push((int) 25080)
0xe35: Push((int) 25079)
0xe36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe37: Pop(3)
0xe38: Return(); Pop(0)

0xe39: Push((int) 25080)
0xe3a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe3b: IF (Stack[-1] == 0) GOTO 0xe4b; Pop(1)

0xe3c: PushEmpty(string)
0xe3d: Stack[-1] = "Rage"
0xe3e: Call2 0xcd0

0xe3f: Pop(1)
0xe40: Push((int) 523811)
0xe41: @@ SetMessage(Stack[-1])
0xe42: Pop(1)
0xe43: @@ ClearReplies()
0xe44: Pop(0)
0xe45: Push((int) 523812)
0xe46: Push((int) 25075)
0xe47: Push((int) 25081)
0xe48: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe49: Pop(3)
0xe4a: Return(); Pop(0)

0xe4b: Push((int) 25075)
0xe4c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4d: IF (Stack[-1] == 0) GOTO 0xe5d; Pop(1)

0xe4e: PushEmpty(string)
0xe4f: Stack[-1] = "Rage"
0xe50: Call2 0xcd0

0xe51: Pop(1)
0xe52: Push((int) 523806)
0xe53: @@ SetMessage(Stack[-1])
0xe54: Pop(1)
0xe55: @@ ClearReplies()
0xe56: Pop(0)
0xe57: Push((int) 523807)
0xe58: Push((int) 25077)
0xe59: Push((int) 25076)
0xe5a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5b: Pop(3)
0xe5c: Return(); Pop(0)

0xe5d: Push((int) 25077)
0xe5e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe5f: IF (Stack[-1] == 0) GOTO 0xe6f; Pop(1)

0xe60: PushEmpty(string)
0xe61: Stack[-1] = "Sly"
0xe62: Call2 0xcd0

0xe63: Pop(1)
0xe64: Push((int) 523808)
0xe65: @@ SetMessage(Stack[-1])
0xe66: Pop(1)
0xe67: @@ ClearReplies()
0xe68: Pop(0)
0xe69: Push((int) 523809)
0xe6a: Push((int) 22636)
0xe6b: Push((int) 25078)
0xe6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6d: Pop(3)
0xe6e: Return(); Pop(0)

0xe6f: Push((int) 22636)
0xe70: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe71: IF (Stack[-1] == 0) GOTO 0xe86; Pop(1)

0xe72: PushEmpty(string)
0xe73: Stack[-1] = "Rage"
0xe74: Call2 0xcd0

0xe75: Pop(1)
0xe76: Push((int) 521471)
0xe77: @@ SetMessage(Stack[-1])
0xe78: Pop(1)
0xe79: @@ ClearReplies()
0xe7a: Pop(0)
0xe7b: Push((int) 523813)
0xe7c: Push((int) 25084)
0xe7d: Push((int) 25083)
0xe7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7f: Pop(3)
0xe80: Push((int) 523815)
0xe81: Push((int) 25084)
0xe82: Push((int) 25085)
0xe83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe84: Pop(3)
0xe85: Return(); Pop(0)

0xe86: Push((int) 25084)
0xe87: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe88: IF (Stack[-1] == 0) GOTO 0xe9d; Pop(1)

0xe89: PushEmpty(string)
0xe8a: Stack[-1] = "Fear"
0xe8b: Call2 0xcd0

0xe8c: Pop(1)
0xe8d: Push((int) 523814)
0xe8e: @@ SetMessage(Stack[-1])
0xe8f: Pop(1)
0xe90: @@ ClearReplies()
0xe91: Pop(0)
0xe92: Push((int) 521472)
0xe93: Push((int) -1)
0xe94: Push((int) 22637)
0xe95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe96: Pop(3)
0xe97: Push((int) 521473)
0xe98: Push((int) -1)
0xe99: Push((int) 22638)
0xe9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9b: Pop(3)
0xe9c: Return(); Pop(0)

0xe9d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe9e: PushEmpty(bool)
0xe9f: Call2 0x142b

0xea0: Pop(0)
0xea1: IF (Stack[-1] == 0) GOTO 0xea5; Pop(1)

0xea2: @ lshStopAnimation()
0xea3: Pop(0)
0xea4: GOTO 0xea7

0xea5: @ StopAnimation()
0xea6: Pop(0)
0xea7: Return(); Pop(0)

0xea8: GOTO 0xce7

0xea9: Return(); Pop(0)

0xeaa: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xeab: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xeac: PushEmpty(bool, object, float)
0xead: Stack[-2] = Stack[-12]
0xeae: Stack[-1] = (float) 70.0
0xeaf: Call2 0x121d

0xeb0: Pop(2)
0xeb1: Pop(1); Push((bool) Stack[-1] == 0)
0xeb2: IF (Stack[-1] == 0) GOTO 0xeb5; Pop(1)

0xeb3: Stack[-10] = (int) -2
0xeb4: Return(); Pop(8)

0xeb5: @ CreateDialog(Stack[-4])
0xeb6: Pop(0)
0xeb7: PushEmpty(int)
0xeb8: Call2 0x1425

0xeb9: Pop(0)
0xeba: @@ SetNPCName(Stack[-1])
0xebb: Pop(1)
0xebc: PushEmpty(int)
0xebd: Call2 0x1423

0xebe: Pop(0)
0xebf: @@ SetNPCDescription(Stack[-1])
0xec0: Pop(1)
0xec1: PushEmpty(string)
0xec2: Call2 0x1427

0xec3: Pop(0)
0xec4: @@ SetPhoto(Stack[-1])
0xec5: Pop(1)
0xec6: PushEmpty(string)
0xec7: Call2 0x1429

0xec8: Pop(0)
0xec9: @@ SetPhoto2(Stack[-1])
0xeca: Pop(1)
0xecb: PushEmpty(int)
0xecc: Call2 0x16d0

0xecd: Pop(0)
0xece: @@ SetPlayerName(Stack[-1])
0xecf: Pop(1)
0xed0: Stack[-2] = (int) -1
0xed1: @ IsOverrideActive(Stack[-3])
0xed2: Pop(0)
0xed3: Push(Stack[-3])
0xed4: IF (Stack[-1] == 0) GOTO 0xed7; Pop(1)

0xed5: Stack[-10] = (int) -2
0xed6: Return(); Pop(8)

0xed7: @ DoDialog(Stack[-4])
0xed8: Pop(0)
0xed9: PushEmpty(bool, object)
0xeda: PushEmpty(object)
0xedb: Call2 0x1331

0xedc: Stack[-2] = Stack[-1]
0xedd: Pop(1)
0xede: Call2 0x1272

0xedf: Pop(2)
0xee0: PushEmpty(object, object)
0xee1: Stack[-2] = Stack[-11]
0xee2: Stack[-1] = Stack[-6]
0xee3: Push(-2, 4); TaskCall(19)
0xee4: Call2 0xefb

0xee5: Pop(-2, 4); TaskReturn
0xee6: Pop(2)
0xee7: @@ IsDialogEnd(Stack[-1])
0xee8: Pop(0)
0xee9: Pop(0); Push((bool) Stack[-1] == 0)
0xeea: IF (Stack[-1] == 0) GOTO 0xef0; Pop(1)

0xeeb: @ sync()
0xeec: Pop(0)
0xeed: @@ IsDialogEnd(Stack[-1])
0xeee: Pop(0)
0xeef: GOTO 0xee9

0xef0: PushEmpty(object)
0xef1: Stack[-1] = Stack[-10]
0xef2: Call2 0x1261

0xef3: Pop(1)
0xef4: @ StopDialog(Stack[-4])
0xef5: Pop(0)
0xef6: @@ GetReturnValue(Stack[-2])
0xef7: Pop(0)
0xef8: Stack[-10] = Stack[-2]
0xef9: Return(); Pop(8)

0xefa: Stack[-4] = 0
0xefb: PushEmpty()
0xefc: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xefd: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xefe: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xeff: Push((int) 1)
0xf00: IF (Stack[-1] == 0) GOTO 0xf21; Pop(1)

0xf01: PushEmpty(string)
0xf02: Stack[-1] = "Fear"
0xf03: Call2 0xf3f

0xf04: Pop(1)
0xf05: Push((int) 522079)
0xf06: @@ SetMessage(Stack[-1])
0xf07: Pop(1)
0xf08: @@ ClearReplies()
0xf09: Pop(0)
0xf0a: PushEmpty(bool, object)
0xf0b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf0c: Call2 0x15a2

0xf0d: Pop(1)
0xf0e: IF (Stack[-1] == 0) GOTO 0xf14; Pop(1)

0xf0f: Push((int) 523566)
0xf10: Push((int) 24801)
0xf11: Push((int) 24800)
0xf12: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf13: Pop(3)
0xf14: Push((int) 523569)
0xf15: Push((int) 24804)
0xf16: Push((int) 24803)
0xf17: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf18: Pop(3)
0xf19: Push((int) 522080)
0xf1a: Push((int) -1)
0xf1b: Push((int) 23249)
0xf1c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1d: Pop(3)
0xf1e: GOTO 0xf21

0xf1f: Return(); Pop(0)

0xf20: GOTO 0xeff

0xf21: PushEmpty(bool)
0xf22: Call2 0x142b

0xf23: Pop(0)
0xf24: IF (Stack[-1] == 0) GOTO 0xf30; Pop(1)

0xf25: @ lshWaitForAnimEnd()
0xf26: Pop(0)
0xf27: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf28: IF (Stack[-1] == 0) GOTO 0xf2a; Pop(1)

0xf29: GOTO 0xf2f

0xf2a: PushEmpty(string)
0xf2b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xf2c: Call2 0x12fc

0xf2d: Pop(1)
0xf2e: GOTO 0xf25

0xf2f: GOTO 0xf3e

0xf30: Push("all")
0xf31: Push("idle")
0xf32: @ PlayAnimation(Stack[-2], Stack[-1])
0xf33: Pop(2)
0xf34: @ WaitForAnimEnd()
0xf35: Pop(0)
0xf36: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf37: IF (Stack[-1] == 0) GOTO 0xf39; Pop(1)

0xf38: GOTO 0xf3e

0xf39: Push("all")
0xf3a: Push("idle")
0xf3b: @ PlayAnimation(Stack[-2], Stack[-1])
0xf3c: Pop(2)
0xf3d: GOTO 0xf34

0xf3e: Return(); Pop(0)

0xf3f: PushEmpty()
0xf40: PushEmpty(bool)
0xf41: Call2 0x142b

0xf42: Pop(0)
0xf43: Pop(1); Push((bool) Stack[-1] == 0)
0xf44: IF (Stack[-1] == 0) GOTO 0xf46; Pop(1)

0xf45: Return(); Pop(0)

0xf46: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf47: IF (Stack[-1] == 0) GOTO 0xf49; Pop(1)

0xf48: Return(); Pop(0)

0xf49: PushEmpty(string, bool)
0xf4a: Stack[-2] = Stack[-3]
0xf4b: Push("")
0xf4c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf4d: IF (Stack[-1] == 0) GOTO 0xf50; Pop(1)

0xf4e: Stack[-1] = (bool) 0
0xf4f: GOTO 0xf51

0xf50: Stack[-1] = (bool) 1
0xf51: Call2 0x130c

0xf52: Pop(2)
0xf53: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf54: Return(); Pop(0)

0xf55: PushEmpty()
0xf56: Push((int) 1)
0xf57: IF (Stack[-1] == 0) GOTO 0x107d; Pop(1)

0xf58: PushEmpty()
0xf59: Call2 0x132a

0xf5a: Pop(0)
0xf5b: Push((int) 24800)
0xf5c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf5d: IF (Stack[-1] == 0) GOTO 0xf63; Pop(1)

0xf5e: PushEmpty(object, object)
0xf5f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf60: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf61: Call2 0x151e

0xf62: Pop(2)
0xf63: Push((int) 23247)
0xf64: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf65: IF (Stack[-1] == 0) GOTO 0xf6b; Pop(1)

0xf66: PushEmpty(object, object)
0xf67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf69: Call2 0x1515

0xf6a: Pop(2)
0xf6b: Push((int) 23248)
0xf6c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6d: IF (Stack[-1] == 0) GOTO 0xf8c; Pop(1)

0xf6e: PushEmpty(string)
0xf6f: Stack[-1] = "Fear"
0xf70: Call2 0xf3f

0xf71: Pop(1)
0xf72: Push((int) 522079)
0xf73: @@ SetMessage(Stack[-1])
0xf74: Pop(1)
0xf75: @@ ClearReplies()
0xf76: Pop(0)
0xf77: PushEmpty(bool, object)
0xf78: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf79: Call2 0x15a2

0xf7a: Pop(1)
0xf7b: IF (Stack[-1] == 0) GOTO 0xf81; Pop(1)

0xf7c: Push((int) 523566)
0xf7d: Push((int) 24801)
0xf7e: Push((int) 24800)
0xf7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf80: Pop(3)
0xf81: Push((int) 523569)
0xf82: Push((int) 24804)
0xf83: Push((int) 24803)
0xf84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf85: Pop(3)
0xf86: Push((int) 522080)
0xf87: Push((int) -1)
0xf88: Push((int) 23249)
0xf89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8a: Pop(3)
0xf8b: Return(); Pop(0)

0xf8c: Push((int) 24804)
0xf8d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8e: IF (Stack[-1] == 0) GOTO 0xfa3; Pop(1)

0xf8f: PushEmpty(string)
0xf90: Stack[-1] = "Sly"
0xf91: Call2 0xf3f

0xf92: Pop(1)
0xf93: Push((int) 523570)
0xf94: @@ SetMessage(Stack[-1])
0xf95: Pop(1)
0xf96: @@ ClearReplies()
0xf97: Pop(0)
0xf98: Push((int) 523571)
0xf99: Push((int) 24807)
0xf9a: Push((int) 24805)
0xf9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9c: Pop(3)
0xf9d: Push((int) 523572)
0xf9e: Push((int) -1)
0xf9f: Push((int) 24806)
0xfa0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa1: Pop(3)
0xfa2: Return(); Pop(0)

0xfa3: Push((int) 24807)
0xfa4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfa5: IF (Stack[-1] == 0) GOTO 0xfb5; Pop(1)

0xfa6: PushEmpty(string)
0xfa7: Stack[-1] = "Fear"
0xfa8: Call2 0xf3f

0xfa9: Pop(1)
0xfaa: Push((int) 523573)
0xfab: @@ SetMessage(Stack[-1])
0xfac: Pop(1)
0xfad: @@ ClearReplies()
0xfae: Pop(0)
0xfaf: Push((int) 523574)
0xfb0: Push((int) 24809)
0xfb1: Push((int) 24808)
0xfb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb3: Pop(3)
0xfb4: Return(); Pop(0)

0xfb5: Push((int) 24811)
0xfb6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb7: IF (Stack[-1] == 0) GOTO 0xfb8; Pop(1)

0xfb8: Push((int) 24809)
0xfb9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfba: IF (Stack[-1] == 0) GOTO 0xfda; Pop(1)

0xfbb: PushEmpty(string)
0xfbc: Stack[-1] = "Sly"
0xfbd: Call2 0xf3f

0xfbe: Pop(1)
0xfbf: Push((int) 523575)
0xfc0: @@ SetMessage(Stack[-1])
0xfc1: Pop(1)
0xfc2: @@ ClearReplies()
0xfc3: Pop(0)
0xfc4: PushEmpty(bool, object)
0xfc5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfc6: Call2 0x1596

0xfc7: Pop(1)
0xfc8: Pop(1); Push((bool) Stack[-1] == 0)
0xfc9: IF (Stack[-1] == 0) GOTO 0xfcf; Pop(1)

0xfca: Push((int) 522078)
0xfcb: Push((int) -1)
0xfcc: Push((int) 23247)
0xfcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfce: Pop(3)
0xfcf: PushEmpty(bool, object)
0xfd0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfd1: Call2 0x1596

0xfd2: Pop(1)
0xfd3: IF (Stack[-1] == 0) GOTO 0xfd9; Pop(1)

0xfd4: Push((int) 522087)
0xfd5: Push((int) 24814)
0xfd6: Push((int) 23256)
0xfd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd8: Pop(3)
0xfd9: Return(); Pop(0)

0xfda: Push((int) 24814)
0xfdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfdc: IF (Stack[-1] == 0) GOTO 0xff1; Pop(1)

0xfdd: PushEmpty(string)
0xfde: Stack[-1] = "Sly"
0xfdf: Call2 0xf3f

0xfe0: Pop(1)
0xfe1: Push((int) 523580)
0xfe2: @@ SetMessage(Stack[-1])
0xfe3: Pop(1)
0xfe4: @@ ClearReplies()
0xfe5: Pop(0)
0xfe6: Push((int) 523582)
0xfe7: Push((int) 24819)
0xfe8: Push((int) 24817)
0xfe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfea: Pop(3)
0xfeb: Push((int) 523583)
0xfec: Push((int) -1)
0xfed: Push((int) 24818)
0xfee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfef: Pop(3)
0xff0: Return(); Pop(0)

0xff1: Push((int) 24819)
0xff2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff3: IF (Stack[-1] == 0) GOTO 0x1008; Pop(1)

0xff4: PushEmpty(string)
0xff5: Stack[-1] = "Sly"
0xff6: Call2 0xf3f

0xff7: Pop(1)
0xff8: Push((int) 523584)
0xff9: @@ SetMessage(Stack[-1])
0xffa: Pop(1)
0xffb: @@ ClearReplies()
0xffc: Pop(0)
0xffd: Push((int) 523585)
0xffe: Push((int) -1)
0xfff: Push((int) 24820)
0x1000: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1001: Pop(3)
0x1002: Push((int) 523586)
0x1003: Push((int) -1)
0x1004: Push((int) 24821)
0x1005: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1006: Pop(3)
0x1007: Return(); Pop(0)

0x1008: Push((int) 24801)
0x1009: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x100a: IF (Stack[-1] == 0) GOTO 0x101a; Pop(1)

0x100b: PushEmpty(string)
0x100c: Stack[-1] = "Sly"
0x100d: Call2 0xf3f

0x100e: Pop(1)
0x100f: Push((int) 523567)
0x1010: @@ SetMessage(Stack[-1])
0x1011: Pop(1)
0x1012: @@ ClearReplies()
0x1013: Pop(0)
0x1014: Push((int) 523568)
0x1015: Push((int) 24822)
0x1016: Push((int) 24802)
0x1017: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1018: Pop(3)
0x1019: Return(); Pop(0)

0x101a: Push((int) 24822)
0x101b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x101c: IF (Stack[-1] == 0) GOTO 0x1031; Pop(1)

0x101d: PushEmpty(string)
0x101e: Stack[-1] = "Sly"
0x101f: Call2 0xf3f

0x1020: Pop(1)
0x1021: Push((int) 523587)
0x1022: @@ SetMessage(Stack[-1])
0x1023: Pop(1)
0x1024: @@ ClearReplies()
0x1025: Pop(0)
0x1026: Push((int) 523588)
0x1027: Push((int) 24824)
0x1028: Push((int) 24823)
0x1029: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102a: Pop(3)
0x102b: Push((int) 523595)
0x102c: Push((int) -1)
0x102d: Push((int) 24830)
0x102e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102f: Pop(3)
0x1030: Return(); Pop(0)

0x1031: Push((int) 24824)
0x1032: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1033: IF (Stack[-1] == 0) GOTO 0x1043; Pop(1)

0x1034: PushEmpty(string)
0x1035: Stack[-1] = "Neutral"
0x1036: Call2 0xf3f

0x1037: Pop(1)
0x1038: Push((int) 523589)
0x1039: @@ SetMessage(Stack[-1])
0x103a: Pop(1)
0x103b: @@ ClearReplies()
0x103c: Pop(0)
0x103d: Push((int) 523590)
0x103e: Push((int) 24826)
0x103f: Push((int) 24825)
0x1040: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1041: Pop(3)
0x1042: Return(); Pop(0)

0x1043: Push((int) 24826)
0x1044: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1045: IF (Stack[-1] == 0) GOTO 0x105a; Pop(1)

0x1046: PushEmpty(string)
0x1047: Stack[-1] = "Untrust"
0x1048: Call2 0xf3f

0x1049: Pop(1)
0x104a: Push((int) 523591)
0x104b: @@ SetMessage(Stack[-1])
0x104c: Pop(1)
0x104d: @@ ClearReplies()
0x104e: Pop(0)
0x104f: Push((int) 523592)
0x1050: Push((int) 24828)
0x1051: Push((int) 24827)
0x1052: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1053: Pop(3)
0x1054: Push((int) 523594)
0x1055: Push((int) -1)
0x1056: Push((int) 24829)
0x1057: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1058: Pop(3)
0x1059: Return(); Pop(0)

0x105a: Push((int) 24828)
0x105b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105c: IF (Stack[-1] == 0) GOTO 0x1071; Pop(1)

0x105d: PushEmpty(string)
0x105e: Stack[-1] = "Sly"
0x105f: Call2 0xf3f

0x1060: Pop(1)
0x1061: Push((int) 523593)
0x1062: @@ SetMessage(Stack[-1])
0x1063: Pop(1)
0x1064: @@ ClearReplies()
0x1065: Pop(0)
0x1066: Push((int) 523596)
0x1067: Push((int) -1)
0x1068: Push((int) 24831)
0x1069: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106a: Pop(3)
0x106b: Push((int) 523597)
0x106c: Push((int) -1)
0x106d: Push((int) 24832)
0x106e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106f: Pop(3)
0x1070: Return(); Pop(0)

0x1071: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1072: PushEmpty(bool)
0x1073: Call2 0x142b

0x1074: Pop(0)
0x1075: IF (Stack[-1] == 0) GOTO 0x1079; Pop(1)

0x1076: @ lshStopAnimation()
0x1077: Pop(0)
0x1078: GOTO 0x107b

0x1079: @ StopAnimation()
0x107a: Pop(0)
0x107b: Return(); Pop(0)

0x107c: GOTO 0xf56

0x107d: Return(); Pop(0)

0x107e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x107f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1080: PushEmpty(bool, object, float)
0x1081: Stack[-2] = Stack[-12]
0x1082: Stack[-1] = (float) 70.0
0x1083: Call2 0x121d

0x1084: Pop(2)
0x1085: Pop(1); Push((bool) Stack[-1] == 0)
0x1086: IF (Stack[-1] == 0) GOTO 0x1089; Pop(1)

0x1087: Stack[-10] = (int) -2
0x1088: Return(); Pop(8)

0x1089: @ CreateDialog(Stack[-4])
0x108a: Pop(0)
0x108b: PushEmpty(int)
0x108c: Call2 0x1425

0x108d: Pop(0)
0x108e: @@ SetNPCName(Stack[-1])
0x108f: Pop(1)
0x1090: PushEmpty(int)
0x1091: Call2 0x1423

0x1092: Pop(0)
0x1093: @@ SetNPCDescription(Stack[-1])
0x1094: Pop(1)
0x1095: PushEmpty(string)
0x1096: Call2 0x1427

0x1097: Pop(0)
0x1098: @@ SetPhoto(Stack[-1])
0x1099: Pop(1)
0x109a: PushEmpty(string)
0x109b: Call2 0x1429

0x109c: Pop(0)
0x109d: @@ SetPhoto2(Stack[-1])
0x109e: Pop(1)
0x109f: PushEmpty(int)
0x10a0: Call2 0x16d0

0x10a1: Pop(0)
0x10a2: @@ SetPlayerName(Stack[-1])
0x10a3: Pop(1)
0x10a4: Stack[-2] = (int) -1
0x10a5: @ IsOverrideActive(Stack[-3])
0x10a6: Pop(0)
0x10a7: Push(Stack[-3])
0x10a8: IF (Stack[-1] == 0) GOTO 0x10ab; Pop(1)

0x10a9: Stack[-10] = (int) -2
0x10aa: Return(); Pop(8)

0x10ab: @ DoDialog(Stack[-4])
0x10ac: Pop(0)
0x10ad: PushEmpty(bool, object)
0x10ae: PushEmpty(object)
0x10af: Call2 0x1331

0x10b0: Stack[-2] = Stack[-1]
0x10b1: Pop(1)
0x10b2: Call2 0x1272

0x10b3: Pop(2)
0x10b4: PushEmpty(object, object)
0x10b5: Stack[-2] = Stack[-11]
0x10b6: Stack[-1] = Stack[-6]
0x10b7: Push(-2, 4); TaskCall(21)
0x10b8: Call2 0x10cf

0x10b9: Pop(-2, 4); TaskReturn
0x10ba: Pop(2)
0x10bb: @@ IsDialogEnd(Stack[-1])
0x10bc: Pop(0)
0x10bd: Pop(0); Push((bool) Stack[-1] == 0)
0x10be: IF (Stack[-1] == 0) GOTO 0x10c4; Pop(1)

0x10bf: @ sync()
0x10c0: Pop(0)
0x10c1: @@ IsDialogEnd(Stack[-1])
0x10c2: Pop(0)
0x10c3: GOTO 0x10bd

0x10c4: PushEmpty(object)
0x10c5: Stack[-1] = Stack[-10]
0x10c6: Call2 0x1261

0x10c7: Pop(1)
0x10c8: @ StopDialog(Stack[-4])
0x10c9: Pop(0)
0x10ca: @@ GetReturnValue(Stack[-2])
0x10cb: Pop(0)
0x10cc: Stack[-10] = Stack[-2]
0x10cd: Return(); Pop(8)

0x10ce: Stack[-4] = 0
0x10cf: PushEmpty()
0x10d0: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x10d1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x10d2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x10d3: Push((int) 1)
0x10d4: IF (Stack[-1] == 0) GOTO 0x10eb; Pop(1)

0x10d5: PushEmpty(string)
0x10d6: Stack[-1] = "Neutral"
0x10d7: Call2 0x1109

0x10d8: Pop(1)
0x10d9: Push((int) 540554)
0x10da: @@ SetMessage(Stack[-1])
0x10db: Pop(1)
0x10dc: @@ ClearReplies()
0x10dd: Pop(0)
0x10de: Push((int) 540555)
0x10df: Push((int) -1)
0x10e0: Push((int) 42564)
0x10e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e2: Pop(3)
0x10e3: Push((int) 540794)
0x10e4: Push((int) -1)
0x10e5: Push((int) 42843)
0x10e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e7: Pop(3)
0x10e8: GOTO 0x10eb

0x10e9: Return(); Pop(0)

0x10ea: GOTO 0x10d3

0x10eb: PushEmpty(bool)
0x10ec: Call2 0x142b

0x10ed: Pop(0)
0x10ee: IF (Stack[-1] == 0) GOTO 0x10fa; Pop(1)

0x10ef: @ lshWaitForAnimEnd()
0x10f0: Pop(0)
0x10f1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x10f2: IF (Stack[-1] == 0) GOTO 0x10f4; Pop(1)

0x10f3: GOTO 0x10f9

0x10f4: PushEmpty(string)
0x10f5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x10f6: Call2 0x12fc

0x10f7: Pop(1)
0x10f8: GOTO 0x10ef

0x10f9: GOTO 0x1108

0x10fa: Push("all")
0x10fb: Push("idle")
0x10fc: @ PlayAnimation(Stack[-2], Stack[-1])
0x10fd: Pop(2)
0x10fe: @ WaitForAnimEnd()
0x10ff: Pop(0)
0x1100: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1101: IF (Stack[-1] == 0) GOTO 0x1103; Pop(1)

0x1102: GOTO 0x1108

0x1103: Push("all")
0x1104: Push("idle")
0x1105: @ PlayAnimation(Stack[-2], Stack[-1])
0x1106: Pop(2)
0x1107: GOTO 0x10fe

0x1108: Return(); Pop(0)

0x1109: PushEmpty()
0x110a: PushEmpty(bool)
0x110b: Call2 0x142b

0x110c: Pop(0)
0x110d: Pop(1); Push((bool) Stack[-1] == 0)
0x110e: IF (Stack[-1] == 0) GOTO 0x1110; Pop(1)

0x110f: Return(); Pop(0)

0x1110: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1111: IF (Stack[-1] == 0) GOTO 0x1113; Pop(1)

0x1112: Return(); Pop(0)

0x1113: PushEmpty(string, bool)
0x1114: Stack[-2] = Stack[-3]
0x1115: Push("")
0x1116: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1117: IF (Stack[-1] == 0) GOTO 0x111a; Pop(1)

0x1118: Stack[-1] = (bool) 0
0x1119: GOTO 0x111b

0x111a: Stack[-1] = (bool) 1
0x111b: Call2 0x130c

0x111c: Pop(2)
0x111d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x111e: Return(); Pop(0)

0x111f: PushEmpty()
0x1120: Push((int) 1)
0x1121: IF (Stack[-1] == 0) GOTO 0x1148; Pop(1)

0x1122: PushEmpty()
0x1123: Call2 0x132a

0x1124: Pop(0)
0x1125: Push((int) 42563)
0x1126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1127: IF (Stack[-1] == 0) GOTO 0x113c; Pop(1)

0x1128: PushEmpty(string)
0x1129: Stack[-1] = "Neutral"
0x112a: Call2 0x1109

0x112b: Pop(1)
0x112c: Push((int) 540554)
0x112d: @@ SetMessage(Stack[-1])
0x112e: Pop(1)
0x112f: @@ ClearReplies()
0x1130: Pop(0)
0x1131: Push((int) 540555)
0x1132: Push((int) -1)
0x1133: Push((int) 42564)
0x1134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1135: Pop(3)
0x1136: Push((int) 540794)
0x1137: Push((int) -1)
0x1138: Push((int) 42843)
0x1139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113a: Pop(3)
0x113b: Return(); Pop(0)

0x113c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x113d: PushEmpty(bool)
0x113e: Call2 0x142b

0x113f: Pop(0)
0x1140: IF (Stack[-1] == 0) GOTO 0x1144; Pop(1)

0x1141: @ lshStopAnimation()
0x1142: Pop(0)
0x1143: GOTO 0x1146

0x1144: @ StopAnimation()
0x1145: Pop(0)
0x1146: Return(); Pop(0)

0x1147: GOTO 0x1120

0x1148: Return(); Pop(0)

0x1149: Push(GlobalVars[2])
0x114a: Stack[-1] = (bool) 0
0x114b: GlobalVars[2] = Stack[-1]; Pop(1)
0x114c: PushEmpty()
0x114d: Call2 0x1150

0x114e: Pop(0)
0x114f: Return(); Pop(0)

0x1150: PushEmpty(object, bool, int, bool, cvector, cvector, cvector, float, cvector, bool, cvector, object, bool, int, bool, cvector, cvector, cvector, float, cvector, bool, cvector)
0x1151: Push((bool) 1)
0x1152: @ SensePlayerOnly(Stack[-1])
0x1153: Pop(1)
0x1154: PushEmpty()
0x1155: Call2 0x11a8

0x1156: Pop(0)
0x1157: @ GetScene(Stack[-11])
0x1158: Pop(0)
0x1159: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x115a: PushEmpty(string, int)
0x115b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x115c: Call2 0x1415

0x115d: Pop(1)
0x115e: @@ GetLocator(Stack[-1], Stack[-11])
0x115f: Pop(1)
0x1160: Pop(0); Push((bool) Stack[-10] == 0)
0x1161: IF (Stack[-1] == 0) GOTO 0x1163; Pop(1)

0x1162: GOTO 0x1166

0x1163: Push((int) 1)
0x1164: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1165: GOTO 0x115a

0x1166: PushEmpty(bool)
0x1167: Call2 0x1218

0x1168: Pop(0)
0x1169: Pop(1); Push((bool) Stack[-1] == 0)
0x116a: IF (Stack[-1] == 0) GOTO 0x1170; Pop(1)

0x116b: PushEmpty()
0x116c: Push(-0, 0); TaskCall(0)
0x116d: Call2 0x0

0x116e: Pop(-0, 0); TaskReturn
0x116f: Pop(0)
0x1170: PushEmpty()
0x1171: Call2 0x11b0

0x1172: Pop(0)
0x1173: @ irand(Stack[-9], Stack[-2])
0x1174: Pop(0)
0x1175: PushEmpty(string, int)
0x1176: Stack[-1] = Stack[-11]
0x1177: Call2 0x1415

0x1178: Pop(1)
0x1179: @@ GetLocator(Stack[-1], Stack[-9], Stack[-8], Stack[-7])
0x117a: Pop(1)
0x117b: PushEmpty(cvector)
0x117c: Call2 0x11df

0x117d: Pop(0)
0x117e: Stack[-6] = Stack[-8] - Stack[-1]; Pop(1);
0x117f: PushEmpty(float, cvector)
0x1180: Stack[-1] = Stack[-7]
0x1181: Call2 0x1349

0x1182: Pop(1)
0x1183: Pop(1); Push((bool) Stack[-1] > Stack[1 + Tasks[-1].StackPointer])
0x1184: IF (Stack[-1] == 0) GOTO 0x11a2; Pop(1)

0x1185: @ GetHeight(Stack[-4])
0x1186: Pop(0)
0x1187: Stack[-3] = Stack[-7]
0x1188: Push(CvectorIndex(Stack[-3], 1))
0x1189: Stack[-1] = Stack[-1] + Stack[-5]; Pop(0);
0x118a: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x118b: @ CanReachByPF(Stack[-2], Stack[-3])
0x118c: Pop(0)
0x118d: Push(Stack[-2])
0x118e: IF (Stack[-1] == 0) GOTO 0x11a2; Pop(1)

0x118f: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1190: Pop(1); Push(Sqrt(Stack[-1]))
0x1191: Pop(1); Push(Stack[0 + StackPtr] / Stack[-1]);
0x1192: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1193: Stack[-2] = Stack[-8] - Stack[-1]; Pop(1);
0x1194: PushEmpty(bool, cvector, cvector)
0x1195: Stack[-2] = Stack[-4]
0x1196: Stack[-1] = Stack[-9]
0x1197: Push(-3, 1); TaskCall(1)
0x1198: Call2 0xd

0x1199: Pop(-3, 1); TaskReturn
0x119a: Pop(2)
0x119b: IF (Stack[-1] == 0) GOTO 0x11a2; Pop(1)

0x119c: PushEmpty(int)
0x119d: Stack[-1] = Stack[-10]
0x119e: Push(-1, 0); TaskCall(3)
0x119f: Call2 0xc6

0x11a0: Pop(-1, 0); TaskReturn
0x11a1: Pop(1)
0x11a2: Push((int) 1)
0x11a3: @ Sleep(Stack[-1])
0x11a4: Pop(1)
0x11a5: GOTO 0x1173

0x11a6: Return(); Pop(22)

0x11a7: Stack[-11] = 0
0x11a8: PushEmpty(string, string)
0x11a9: Push("loc")
0x11aa: @ GetProperty(Stack[-1], Stack[-2])
0x11ab: Pop(1)
0x11ac: Push(GlobalVars[0])
0x11ad: Stack[-1] = Stack[-2]
0x11ae: GlobalVars[0] = Stack[-1]; Pop(1)
0x11af: Return(); Pop(2)

0x11b0: PushEmpty(cvector, cvector, cvector, cvector)
0x11b1: Push("all")
0x11b2: Push("walk_stopl")
0x11b3: @ GetAnimationOffset(Stack[-4], Stack[-2], Stack[-1])
0x11b4: Pop(2)
0x11b5: Push("all")
0x11b6: Push("walk_stopr")
0x11b7: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x11b8: Pop(2)
0x11b9: Push(CvectorIndex(Stack[-2], 2))
0x11ba: Push(CvectorIndex(Stack[-2], 2))
0x11bb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11bc: Push((float)2.0)
0x11bd: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x11be: PushEmpty(float, float)
0x11bf: Push(CvectorIndex(Stack[-4], 2))
0x11c0: Stack[-2] = Stack[-1] - Stack[0 + Tasks[-1].StackPointer]; Pop(1);
0x11c1: Call2 0x1341

0x11c2: Pop(1)
0x11c3: Push((int) 40)
0x11c4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x11c5: Return(); Pop(4)

0x11c6: PushEmpty()
0x11c7: Call2 0x1422

0x11c8: Pop(0)
0x11c9: PushEmpty()
0x11ca: Push(-0, 0); TaskCall(0)
0x11cb: Call2 0x0

0x11cc: Pop(-0, 0); TaskReturn
0x11cd: Pop(0)
0x11ce: Return(); Pop(0)

0x11cf: PushEmpty(bool, bool)
0x11d0: @ IsOverrideActive(Stack[-1])
0x11d1: Pop(0)
0x11d2: Pop(0); Push((bool) Stack[-1] == 0)
0x11d3: IF (Stack[-1] == 0) GOTO 0x11de; Pop(1)

0x11d4: EventDisable(0)
0x11d5: PushEmpty(bool, object)
0x11d6: Stack[-1] = Stack[-5]
0x11d7: Call2 0x1204

0x11d8: Pop(2)
0x11d9: EventEnable(0)
0x11da: PushEmpty(object)
0x11db: Stack[-1] = Stack[-4]
0x11dc: Call2 0x16e1

0x11dd: Pop(1)
0x11de: Return(); Pop(2)

0x11df: PushEmpty(cvector, cvector)
0x11e0: @ GetPosition(Stack[-1])
0x11e1: Pop(0)
0x11e2: Stack[-3] = Stack[-1]
0x11e3: Return(); Pop(2)

0x11e4: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x11e5: @ GetPosition(Stack[-3])
0x11e6: Pop(0)
0x11e7: @@ GetPosition(Stack[-2])
0x11e8: Pop(0)
0x11e9: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x11ea: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x11eb: Return(); Pop(6)

0x11ec: PushEmpty(object, object)
0x11ed: Push("player")
0x11ee: @ FindActor(Stack[-2], Stack[-1])
0x11ef: Pop(1)
0x11f0: Stack[-3] = Stack[-1]
0x11f1: Return(); Pop(2)

0x11f2: Stack[-1] = 0
0x11f3: PushEmpty(int, int)
0x11f4: @@ GetProperty(Stack[-4], Stack[-1])
0x11f5: Pop(0)
0x11f6: Pop(0); Push(Stack[-1] + Stack[-3]);
0x11f7: @@ SetProperty(Stack[-5], Stack[-1])
0x11f8: Pop(1)
0x11f9: Return(); Pop(2)

0x11fa: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x11fb: @ GetPosition(Stack[-3])
0x11fc: Pop(0)
0x11fd: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x11fe: Push(CvectorIndex(Stack[-2], 0))
0x11ff: Push(CvectorIndex(Stack[-3], 2))
0x1200: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x1201: Pop(2)
0x1202: Stack[-8] = Stack[-1]
0x1203: Return(); Pop(6)

0x1204: PushEmpty(cvector, cvector)
0x1205: @@ GetPosition(Stack[-1])
0x1206: Pop(0)
0x1207: PushEmpty(bool, cvector)
0x1208: Stack[-1] = Stack[-3]
0x1209: Call2 0x11fa

0x120a: Stack[-6] = Stack[-2]
0x120b: Pop(2)
0x120c: Return(); Pop(2)

0x120d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x120e: @@ GetPosition(Stack[-3])
0x120f: Pop(0)
0x1210: @ GetPosition(Stack[-2])
0x1211: Pop(0)
0x1212: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x1213: Push(CvectorIndex(Stack[-1], 0))
0x1214: Push(CvectorIndex(Stack[-2], 2))
0x1215: @ RotateAsync(Stack[-2], Stack[-1])
0x1216: Pop(2)
0x1217: Return(); Pop(6)

0x1218: PushEmpty(bool, bool)
0x1219: @ IsLoaded(Stack[-1])
0x121a: Pop(0)
0x121b: Stack[-3] = Stack[-1]
0x121c: Return(); Pop(2)

0x121d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x121e: @@ GetPosition(Stack[-8])
0x121f: Pop(0)
0x1220: @@ GetEyesHeight(Stack[-9])
0x1221: Pop(0)
0x1222: Push(CvectorIndex(Stack[-8], 1))
0x1223: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1224: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1225: @ GetPosition(Stack[-7])
0x1226: Pop(0)
0x1227: @ GetEyesHeight(Stack[-9])
0x1228: Pop(0)
0x1229: Push(CvectorIndex(Stack[-7], 1))
0x122a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x122b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x122c: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x122d: Push(CvectorIndex(Stack[-6], 1))
0x122e: Stack[-1] = (int) 0
0x122f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1230: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1231: Pop(1); Push(Sqrt(Stack[-1]))
0x1232: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1233: Stack[-5] = -Stack[-6]; Pop(0);
0x1234: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1235: PushEmpty(cvector, cvector)
0x1236: Push(CVector(0.0, 1.0, 0.0))
0x1237: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1238: Call2 0x1337

0x1239: Pop(1)
0x123a: Push((int) 25)
0x123b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x123c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x123d: Push(CVector(0.0, 10.0, 0.0))
0x123e: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x123f: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1240: @ IsOverrideActive(Stack[-2])
0x1241: Pop(0)
0x1242: Push(Stack[-2])
0x1243: IF (Stack[-1] == 0) GOTO 0x1246; Pop(1)

0x1244: Stack[-21] = (bool) 0
0x1245: Return(); Pop(18)

0x1246: @ StopWorld()
0x1247: Pop(0)
0x1248: @ CameraTransit(Stack[-3], Stack[-5])
0x1249: Pop(0)
0x124a: Push(CvectorIndex(Stack[-4], 0))
0x124b: Push(CvectorIndex(Stack[-5], 2))
0x124c: @ Rotate(Stack[-2], Stack[-1])
0x124d: Pop(2)
0x124e: PushEmpty(bool)
0x124f: Call2 0x142b

0x1250: Pop(0)
0x1251: IF (Stack[-1] == 0) GOTO 0x1253; Pop(1)

0x1252: GOTO 0x125b

0x1253: Push("head")
0x1254: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1255: Pop(1)
0x1256: Push(Stack[-1])
0x1257: IF (Stack[-1] == 0) GOTO 0x125b; Pop(1)

0x1258: Push("head")
0x1259: @ LookAsyncCamera(Stack[-1])
0x125a: Pop(1)
0x125b: @ CameraWaitForPlayFinish()
0x125c: Pop(0)
0x125d: @ ResumeWorld()
0x125e: Pop(0)
0x125f: Stack[-21] = (bool) 1
0x1260: Return(); Pop(18)

0x1261: PushEmpty(bool, bool)
0x1262: @ CameraSwitchToNormal()
0x1263: Pop(0)
0x1264: PushEmpty(bool)
0x1265: Call2 0x142b

0x1266: Pop(0)
0x1267: IF (Stack[-1] == 0) GOTO 0x1269; Pop(1)

0x1268: GOTO 0x1271

0x1269: Push("head")
0x126a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x126b: Pop(1)
0x126c: Push(Stack[-1])
0x126d: IF (Stack[-1] == 0) GOTO 0x1271; Pop(1)

0x126e: Push("head")
0x126f: @ UnlookAsync(Stack[-1])
0x1270: Pop(1)
0x1271: Return(); Pop(2)

0x1272: PushEmpty(int, int, int, int)
0x1273: Push("voice_common")
0x1274: @ GetVariable(Stack[-1], Stack[-3])
0x1275: Pop(1)
0x1276: Push(Stack[-2])
0x1277: IF (Stack[-1] == 0) GOTO 0x1298; Pop(1)

0x1278: PushEmpty(bool, object)
0x1279: Stack[-1] = Stack[-7]
0x127a: Call2 0x12ac

0x127b: Pop(1)
0x127c: Pop(1); Push((bool) Stack[-1] == 0)
0x127d: IF (Stack[-1] == 0) GOTO 0x1286; Pop(1)

0x127e: PushEmpty(bool, object)
0x127f: Stack[-1] = Stack[-7]
0x1280: Call2 0x12d1

0x1281: Pop(1)
0x1282: Pop(1); Push((bool) Stack[-1] == 0)
0x1283: IF (Stack[-1] == 0) GOTO 0x1286; Pop(1)

0x1284: Stack[-6] = (bool) 0
0x1285: Return(); Pop(4)

0x1286: Push((int) 2)
0x1287: @ irand(Stack[-2], Stack[-1])
0x1288: Pop(1)
0x1289: Push(Stack[-1])
0x128a: IF (Stack[-1] == 0) GOTO 0x1293; Pop(1)

0x128b: Push("voice_common")
0x128c: Push((int) 1)
0x128d: Pop(1); Push(Stack[-4] + Stack[-1]);
0x128e: Push((int) 3)
0x128f: Pop(2); Push(Stack[-2] % Stack[-1]);
0x1290: @ SetVariable(Stack[-2], Stack[-1])
0x1291: Pop(2)
0x1292: GOTO 0x1297

0x1293: Push("voice_common")
0x1294: Push((int) 0)
0x1295: @ SetVariable(Stack[-2], Stack[-1])
0x1296: Pop(2)
0x1297: GOTO 0x12aa

0x1298: PushEmpty(bool, object)
0x1299: Stack[-1] = Stack[-7]
0x129a: Call2 0x12d1

0x129b: Pop(1)
0x129c: Pop(1); Push((bool) Stack[-1] == 0)
0x129d: IF (Stack[-1] == 0) GOTO 0x12a6; Pop(1)

0x129e: PushEmpty(bool, object)
0x129f: Stack[-1] = Stack[-7]
0x12a0: Call2 0x12ac

0x12a1: Pop(1)
0x12a2: Pop(1); Push((bool) Stack[-1] == 0)
0x12a3: IF (Stack[-1] == 0) GOTO 0x12a6; Pop(1)

0x12a4: Stack[-6] = (bool) 0
0x12a5: Return(); Pop(4)

0x12a6: Push("voice_common")
0x12a7: Push((int) 1)
0x12a8: @ SetVariable(Stack[-2], Stack[-1])
0x12a9: Pop(2)
0x12aa: Stack[-6] = (bool) 1
0x12ab: Return(); Pop(4)

0x12ac: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x12ad: Stack[-5] = "c"
0x12ae: Stack[-4] = (int) 0
0x12af: Push((int) 1)
0x12b0: IF (Stack[-1] == 0) GOTO 0x12bc; Pop(1)

0x12b1: Push((int) 1)
0x12b2: Pop(1); Push(Stack[-5] + Stack[-1]);
0x12b3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x12b4: @@ HasProperty(Stack[-1], Stack[-4])
0x12b5: Pop(1)
0x12b6: Pop(0); Push((bool) Stack[-3] == 0)
0x12b7: IF (Stack[-1] == 0) GOTO 0x12b9; Pop(1)

0x12b8: GOTO 0x12bc

0x12b9: Push((int) 1)
0x12ba: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x12bb: GOTO 0x12af

0x12bc: Pop(0); Push((bool) Stack[-4] == 0)
0x12bd: IF (Stack[-1] == 0) GOTO 0x12c0; Pop(1)

0x12be: Stack[-12] = (bool) 0
0x12bf: Return(); Pop(10)

0x12c0: Stack[-2] = (int) 0
0x12c1: Push((int) 1)
0x12c2: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x12c3: IF (Stack[-1] == 0) GOTO 0x12c6; Pop(1)

0x12c4: @ irand(Stack[-2], Stack[-4])
0x12c5: Pop(0)
0x12c6: Push((int) 1)
0x12c7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x12c8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x12c9: @@ GetProperty(Stack[-1], Stack[-2])
0x12ca: Pop(1)
0x12cb: PushEmpty(bool, string)
0x12cc: Stack[-1] = Stack[-3]
0x12cd: Call2 0x131b

0x12ce: Stack[-14] = Stack[-2]
0x12cf: Pop(2)
0x12d0: Return(); Pop(10)

0x12d1: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x12d2: Push("d")
0x12d3: PushEmpty(int)
0x12d4: Call2 0x13ee

0x12d5: Pop(0)
0x12d6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12d7: Push("m")
0x12d8: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x12d9: Stack[-4] = (int) 0
0x12da: Push((int) 1)
0x12db: IF (Stack[-1] == 0) GOTO 0x12e7; Pop(1)

0x12dc: Push((int) 1)
0x12dd: Pop(1); Push(Stack[-5] + Stack[-1]);
0x12de: Pop(1); Push(Stack[-6] + Stack[-1]);
0x12df: @@ HasProperty(Stack[-1], Stack[-4])
0x12e0: Pop(1)
0x12e1: Pop(0); Push((bool) Stack[-3] == 0)
0x12e2: IF (Stack[-1] == 0) GOTO 0x12e4; Pop(1)

0x12e3: GOTO 0x12e7

0x12e4: Push((int) 1)
0x12e5: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x12e6: GOTO 0x12da

0x12e7: Pop(0); Push((bool) Stack[-4] == 0)
0x12e8: IF (Stack[-1] == 0) GOTO 0x12eb; Pop(1)

0x12e9: Stack[-12] = (bool) 0
0x12ea: Return(); Pop(10)

0x12eb: Stack[-2] = (int) 0
0x12ec: Push((int) 1)
0x12ed: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x12ee: IF (Stack[-1] == 0) GOTO 0x12f1; Pop(1)

0x12ef: @ irand(Stack[-2], Stack[-4])
0x12f0: Pop(0)
0x12f1: Push((int) 1)
0x12f2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x12f3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x12f4: @@ GetProperty(Stack[-1], Stack[-2])
0x12f5: Pop(1)
0x12f6: PushEmpty(bool, string)
0x12f7: Stack[-1] = Stack[-3]
0x12f8: Call2 0x131b

0x12f9: Stack[-14] = Stack[-2]
0x12fa: Pop(2)
0x12fb: Return(); Pop(10)

0x12fc: PushEmpty(bool, float, float, bool, float, float)
0x12fd: @ lshHasAnimation(Stack[-3], Stack[-7])
0x12fe: Pop(0)
0x12ff: Push(Stack[-3])
0x1300: IF (Stack[-1] == 0) GOTO 0x1307; Pop(1)

0x1301: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1302: Pop(0)
0x1303: Push((bool) 0)
0x1304: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1305: Pop(1)
0x1306: GOTO 0x130b

0x1307: Push("Can't find lsh animation : ")
0x1308: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1309: @ Trace(Stack[-1])
0x130a: Pop(1)
0x130b: Return(); Pop(6)

0x130c: PushEmpty(bool, float, float, bool, float, float)
0x130d: @ lshHasAnimation(Stack[-3], Stack[-8])
0x130e: Pop(0)
0x130f: Push(Stack[-3])
0x1310: IF (Stack[-1] == 0) GOTO 0x1316; Pop(1)

0x1311: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1312: Pop(0)
0x1313: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1314: Pop(0)
0x1315: GOTO 0x131a

0x1316: Push("Can't find lsh animation : ")
0x1317: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1318: @ Trace(Stack[-1])
0x1319: Pop(1)
0x131a: Return(); Pop(6)

0x131b: PushEmpty(bool, bool)
0x131c: PushEmpty(bool)
0x131d: Call2 0x142b

0x131e: Pop(0)
0x131f: IF (Stack[-1] == 0) GOTO 0x1328; Pop(1)

0x1320: @ lshHasSpeech(Stack[-1], Stack[-3])
0x1321: Pop(0)
0x1322: Push(Stack[-1])
0x1323: IF (Stack[-1] == 0) GOTO 0x1328; Pop(1)

0x1324: @ lshPlaySpeech(Stack[-3])
0x1325: Pop(0)
0x1326: Stack[-4] = (bool) 1
0x1327: Return(); Pop(2)

0x1328: Stack[-4] = (bool) 0
0x1329: Return(); Pop(2)

0x132a: PushEmpty(bool)
0x132b: Call2 0x142b

0x132c: Pop(0)
0x132d: IF (Stack[-1] == 0) GOTO 0x1330; Pop(1)

0x132e: @ lshStopSpeech()
0x132f: Pop(0)
0x1330: Return(); Pop(0)

0x1331: PushEmpty(object, object)
0x1332: @ self(Stack[-1])
0x1333: Pop(0)
0x1334: Stack[-3] = Stack[-1]
0x1335: Return(); Pop(2)

0x1336: Stack[-1] = 0
0x1337: PushEmpty(float, float)
0x1338: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1339: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x133a: Push((float)0.0)
0x133b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x133c: IF (Stack[-1] == 0) GOTO 0x133f; Pop(1)

0x133d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x133e: Return(); Pop(2)

0x133f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1340: Return(); Pop(2)

0x1341: PushEmpty()
0x1342: Push((int) 0)
0x1343: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1344: IF (Stack[-1] == 0) GOTO 0x1347; Pop(1)

0x1345: Stack[-2] = -Stack[-1]; Pop(0);
0x1346: GOTO 0x1348

0x1347: Stack[-2] = Stack[-1]
0x1348: Return(); Pop(0)

0x1349: PushEmpty()
0x134a: Push(CvectorIndex(Stack[-1], 0))
0x134b: Push(CvectorIndex(Stack[-2], 0))
0x134c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x134d: Push(CvectorIndex(Stack[-2], 2))
0x134e: Push(CvectorIndex(Stack[-3], 2))
0x134f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1350: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1351: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x1352: Return(); Pop(0)

0x1353: PushEmpty(int, int)
0x1354: @ GetVariable(Stack[-3], Stack[-1])
0x1355: Pop(0)
0x1356: Stack[-4] = Stack[-1]
0x1357: Return(); Pop(2)

0x1358: PushEmpty(object, object, object, object)
0x1359: @ GetMainOutdoorScene(Stack[-2])
0x135a: Pop(0)
0x135b: Push(".bin")
0x135c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x135d: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x135e: Pop(1)
0x135f: Stack[-6] = Stack[-1]
0x1360: Return(); Pop(4)

0x1361: Stack[-1] = 0
0x1362: Stack[-2] = 0
0x1363: PushEmpty(object, object, object, object)
0x1364: @ GetMainOutdoorScene(Stack[-2])
0x1365: Pop(0)
0x1366: Push(".xml")
0x1367: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1368: @ AddBlankActorFromXml(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x1369: Pop(1)
0x136a: Stack[-6] = Stack[-1]
0x136b: Return(); Pop(4)

0x136c: Stack[-1] = 0
0x136d: Stack[-2] = 0
0x136e: PushEmpty(object, object)
0x136f: @ FindActor(Stack[-1], Stack[-4])
0x1370: Pop(0)
0x1371: Pop(0); Push((bool) Stack[-1] == 0)
0x1372: IF (Stack[-1] == 0) GOTO 0x137a; Pop(1)

0x1373: Push("Door ")
0x1374: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1375: Push(" not found")
0x1376: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1377: @ Trace(Stack[-1])
0x1378: Pop(1)
0x1379: GOTO 0x137d

0x137a: Push("locked")
0x137b: @@ SetProperty(Stack[-1], Stack[-4])
0x137c: Pop(1)
0x137d: Return(); Pop(2)

0x137e: Stack[-1] = 0
0x137f: PushEmpty(object, object)
0x1380: @ CreateIntVector(Stack[-1])
0x1381: Pop(0)
0x1382: @@ add(Stack[-4])
0x1383: Pop(0)
0x1384: @@ add(Stack[-3])
0x1385: Pop(0)
0x1386: Push((int) 3)
0x1387: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x1388: Pop(1)
0x1389: Return(); Pop(2)

0x138a: Stack[-1] = 0
0x138b: PushEmpty(int, int)
0x138c: PushEmpty(object, string, int)
0x138d: Stack[-3] = Stack[-7]
0x138e: Stack[-2] = "money"
0x138f: Stack[-1] = Stack[-6]
0x1390: Call2 0x11f3

0x1391: Pop(3)
0x1392: Push((int) 0)
0x1393: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x1394: IF (Stack[-1] == 0) GOTO 0x139d; Pop(1)

0x1395: Push("Money")
0x1396: @ GetInvItemByName(Stack[-2], Stack[-1])
0x1397: Pop(1)
0x1398: PushEmpty(int, int)
0x1399: Stack[-2] = Stack[-3]
0x139a: Stack[-1] = Stack[-5]
0x139b: Call2 0x137f

0x139c: Pop(2)
0x139d: Return(); Pop(2)

0x139e: PushEmpty(int, int, bool, int, int, bool)
0x139f: @@ GetItemID(Stack[-3])
0x13a0: Pop(0)
0x13a1: Push("Category")
0x13a2: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x13a3: Pop(1)
0x13a4: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x13a5: Pop(0)
0x13a6: Pop(0); Push((bool) Stack[-1] == 0)
0x13a7: IF (Stack[-1] == 0) GOTO 0x13ab; Pop(1)

0x13a8: @@ DropItems(Stack[-8], Stack[-7])
0x13a9: Pop(0)
0x13aa: GOTO 0x13b0

0x13ab: PushEmpty(int, int)
0x13ac: Stack[-2] = Stack[-5]
0x13ad: Stack[-1] = Stack[-9]
0x13ae: Call2 0x137f

0x13af: Pop(2)
0x13b0: Return(); Pop(6)

0x13b1: PushEmpty(object, object)
0x13b2: @ CreateInvItem(Stack[-1])
0x13b3: Pop(0)
0x13b4: @@ SetItemName(Stack[-4])
0x13b5: Pop(0)
0x13b6: PushEmpty(object, object, int)
0x13b7: Stack[-3] = Stack[-8]
0x13b8: Stack[-2] = Stack[-4]
0x13b9: Stack[-1] = Stack[-6]
0x13ba: Call2 0x139e

0x13bb: Pop(3)
0x13bc: Return(); Pop(2)

0x13bd: Stack[-1] = 0
0x13be: PushEmpty(int, bool, int, bool)
0x13bf: @ GetInvItemByName(Stack[-2], Stack[-5])
0x13c0: Pop(0)
0x13c1: @@ HasItem(Stack[-2], Stack[-1])
0x13c2: Pop(0)
0x13c3: Stack[-7] = Stack[-1]
0x13c4: Return(); Pop(4)

0x13c5: PushEmpty(object, object)
0x13c6: @ FindActor(Stack[-1], Stack[-4])
0x13c7: Pop(0)
0x13c8: Pop(0); Push((bool) Stack[-1] == 0)
0x13c9: IF (Stack[-1] == 0) GOTO 0x13cc; Pop(1)

0x13ca: Stack[-5] = (bool) 0
0x13cb: Return(); Pop(2)

0x13cc: @ Trigger(Stack[-1], Stack[-3])
0x13cd: Pop(0)
0x13ce: Stack[-5] = (bool) 1
0x13cf: Return(); Pop(2)

0x13d0: Stack[-1] = 0
0x13d1: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0x13d2: Pop(0); Push((bool) Stack[-11] == 0)
0x13d3: IF (Stack[-1] == 0) GOTO 0x13d5; Pop(1)

0x13d4: Return(); Pop(8)

0x13d5: @ GetSceneByName(Stack[-4], Stack[-10])
0x13d6: Pop(0)
0x13d7: @@ GetLocator(Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0x13d8: Pop(0)
0x13d9: Pop(0); Push((bool) Stack[-3] == 0)
0x13da: IF (Stack[-1] == 0) GOTO 0x13e5; Pop(1)

0x13db: Push("Teleport location '")
0x13dc: Pop(1); Push(Stack[-1] + Stack[-10]);
0x13dd: Push("' not found in scene '")
0x13de: Pop(2); Push(Stack[-2] + Stack[-1]);
0x13df: Pop(1); Push(Stack[-1] + Stack[-11]);
0x13e0: Push("'")
0x13e1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x13e2: @ Trace(Stack[-1])
0x13e3: Pop(1)
0x13e4: GOTO 0x13e7

0x13e5: @ Teleport(Stack[-11], Stack[-4], Stack[-2], Stack[-1])
0x13e6: Pop(0)
0x13e7: Return(); Pop(8)

0x13e8: Stack[-4] = 0
0x13e9: PushEmpty(float, float)
0x13ea: @ GetGameTime(Stack[-1])
0x13eb: Pop(0)
0x13ec: Stack[-3] = Stack[-1]
0x13ed: Return(); Pop(2)

0x13ee: PushEmpty(float, float)
0x13ef: @ GetGameTime(Stack[-1])
0x13f0: Pop(0)
0x13f1: Push((int) 1)
0x13f2: PushEmpty(int)
0x13f3: Push((int) 24)
0x13f4: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x13f5: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x13f6: Return(); Pop(2)

0x13f7: PushEmpty()
0x13f8: PushEmpty(int)
0x13f9: Call2 0x13ee

0x13fa: Pop(0)
0x13fb: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x13fc: Return(); Pop(0)

0x13fd: PushEmpty(string, string)
0x13fe: Stack[-1] = "idle"
0x13ff: Push(Stack[-3])
0x1400: IF (Stack[-1] == 0) GOTO 0x1402; Pop(1)

0x1401: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1402: Stack[-4] = Stack[-1]
0x1403: Return(); Pop(2)

0x1404: PushEmpty(int, bool, int, bool)
0x1405: Stack[-2] = (int) 0
0x1406: Push("all")
0x1407: PushEmpty(string, int)
0x1408: Stack[-1] = Stack[-5]
0x1409: Call2 0x13fd

0x140a: Pop(1)
0x140b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x140c: Pop(2)
0x140d: Pop(0); Push((bool) Stack[-1] == 0)
0x140e: IF (Stack[-1] == 0) GOTO 0x1410; Pop(1)

0x140f: GOTO 0x1413

0x1410: Push((int) 1)
0x1411: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1412: GOTO 0x1406

0x1413: Stack[-5] = Stack[-2]
0x1414: Return(); Pop(4)

0x1415: PushEmpty()
0x1416: Push((int) 0)
0x1417: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1418: IF (Stack[-1] == 0) GOTO 0x141d; Pop(1)

0x1419: Push("pt_")
0x141a: Push(GlobalVars[0])
0x141b: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x141c: GOTO 0x1421

0x141d: Push("pt_")
0x141e: Push(GlobalVars[0])
0x141f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1420: Stack[-3] = Stack[-1] + Stack[-2]; Pop(1);
0x1421: Return(); Pop(0)

0x1422: Return(); Pop(0)

0x1423: Stack[-1] = (int) 515547
0x1424: Return(); Pop(0)

0x1425: Stack[-1] = (int) 502872
0x1426: Return(); Pop(0)

0x1427: Stack[-1] = "ui/NPC_MladVlad.png"
0x1428: Return(); Pop(0)

0x1429: Stack[-1] = "ui/NPC_MladVlad_b.png"
0x142a: Return(); Pop(0)

0x142b: Stack[-1] = (bool) 1
0x142c: Return(); Pop(0)

0x142d: PushEmpty()
0x142e: PushEmpty(object, string, float)
0x142f: PushEmpty(object)
0x1430: Call2 0x169e

0x1431: Stack[-4] = Stack[-1]
0x1432: Pop(1)
0x1433: Stack[-2] = "pt_map_burah_home"
0x1434: Stack[-1] = (int) 2
0x1435: Call2 0x16af

0x1436: Pop(3)
0x1437: PushEmpty(object)
0x1438: Call2 0x169e

0x1439: Pop(0)
0x143a: @@ ShowMap(Stack[-1])
0x143b: Pop(1)
0x143c: Return(); Pop(0)

0x143d: PushEmpty()
0x143e: Push("oob1MladVlad1")
0x143f: Push((int) 1)
0x1440: @ SetVariable(Stack[-2], Stack[-1])
0x1441: Pop(2)
0x1442: Return(); Pop(0)

0x1443: PushEmpty(object, object)
0x1444: PushEmpty(object)
0x1445: Call2 0x169e

0x1446: Stack[-2] = Stack[-1]
0x1447: Pop(1)
0x1448: Push("b1MladVladGotoGrif")
0x1449: Push("pt_map_grif")
0x144a: Push((int) 3)
0x144b: Push((int) 520047)
0x144c: PushEmpty(float)
0x144d: Call2 0x13e9

0x144e: Pop(0)
0x144f: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1450: Pop(5)
0x1451: Return(); Pop(2)

0x1452: Stack[-1] = 0
0x1453: PushEmpty()
0x1454: Push("oob1MladVlad2")
0x1455: Push((int) 1)
0x1456: @ SetVariable(Stack[-2], Stack[-1])
0x1457: Pop(2)
0x1458: Return(); Pop(0)

0x1459: PushEmpty(object, object)
0x145a: Push("b2MladVladBurahHomeTalk")
0x145b: Push((int) 1)
0x145c: @ SetVariable(Stack[-2], Stack[-1])
0x145d: Pop(2)
0x145e: PushEmpty(object)
0x145f: Call2 0x169e

0x1460: Stack[-2] = Stack[-1]
0x1461: Pop(1)
0x1462: Push("b2BurahHome")
0x1463: Push("pt_map_burah_home")
0x1464: Push((int) 3)
0x1465: Push((int) 520460)
0x1466: PushEmpty(float)
0x1467: Call2 0x13e9

0x1468: Pop(0)
0x1469: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x146a: Pop(5)
0x146b: Return(); Pop(2)

0x146c: Stack[-1] = 0
0x146d: PushEmpty()
0x146e: PushEmpty(string, bool)
0x146f: Stack[-2] = "burah_home@door1"
0x1470: Stack[-1] = (bool) 0
0x1471: Call2 0x136e

0x1472: Pop(2)
0x1473: Return(); Pop(0)

0x1474: PushEmpty()
0x1475: Push("oob2MladVlad1")
0x1476: Push((int) 1)
0x1477: @ SetVariable(Stack[-2], Stack[-1])
0x1478: Pop(2)
0x1479: Return(); Pop(0)

0x147a: PushEmpty(object, object)
0x147b: PushEmpty(int, string)
0x147c: Stack[-1] = "b2TravnikMark"
0x147d: Call2 0x1353

0x147e: Pop(1)
0x147f: Push((int) 0)
0x1480: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1481: IF (Stack[-1] == 0) GOTO 0x14a6; Pop(1)

0x1482: Push("b2TravnikMark")
0x1483: Push((int) 1)
0x1484: @ SetVariable(Stack[-2], Stack[-1])
0x1485: Pop(2)
0x1486: PushEmpty(object)
0x1487: Call2 0x169e

0x1488: Stack[-2] = Stack[-1]
0x1489: Pop(1)
0x148a: Push("b2Travnik1")
0x148b: Push("pt_map_gatherer1")
0x148c: Push((int) 3)
0x148d: Push((int) 520463)
0x148e: PushEmpty(float)
0x148f: Call2 0x13e9

0x1490: Pop(0)
0x1491: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1492: Pop(5)
0x1493: Push("b2Travnik2")
0x1494: Push("pt_map_gatherer2")
0x1495: Push((int) 3)
0x1496: Push((int) 520464)
0x1497: PushEmpty(float)
0x1498: Call2 0x13e9

0x1499: Pop(0)
0x149a: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x149b: Pop(5)
0x149c: Push("b2Travnik3")
0x149d: Push("pt_map_gatherer3")
0x149e: Push((int) 3)
0x149f: Push((int) 520465)
0x14a0: PushEmpty(float)
0x14a1: Call2 0x13e9

0x14a2: Pop(0)
0x14a3: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x14a4: Pop(5)
0x14a5: Stack[-1] = 0
0x14a6: Return(); Pop(2)

0x14a7: PushEmpty()
0x14a8: Push("oob5MladVlad1")
0x14a9: Push((int) 1)
0x14aa: @ SetVariable(Stack[-2], Stack[-1])
0x14ab: Pop(2)
0x14ac: Return(); Pop(0)

0x14ad: PushEmpty()
0x14ae: Push("b5q02")
0x14af: Push((int) 1)
0x14b0: @ SetVariable(Stack[-2], Stack[-1])
0x14b1: Pop(2)
0x14b2: PushEmpty()
0x14b3: Call2 0x1627

0x14b4: Pop(0)
0x14b5: PushEmpty()
0x14b6: Call2 0x1641

0x14b7: Pop(0)
0x14b8: PushEmpty(object, string)
0x14b9: Stack[-1] = "quest_b5_02"
0x14ba: Call2 0x1358

0x14bb: Pop(2)
0x14bc: PushEmpty(bool, string, string)
0x14bd: Stack[-2] = "quest_b5_02"
0x14be: Stack[-1] = "place_prophet"
0x14bf: Call2 0x13c5

0x14c0: Pop(3)
0x14c1: PushEmpty(bool, string, string)
0x14c2: Stack[-2] = "quest_b5_02"
0x14c3: Stack[-1] = "maze_start"
0x14c4: Call2 0x13c5

0x14c5: Pop(3)
0x14c6: Return(); Pop(0)

0x14c7: PushEmpty()
0x14c8: PushEmpty()
0x14c9: Call2 0x1634

0x14ca: Pop(0)
0x14cb: PushEmpty(bool, string, string)
0x14cc: Stack[-2] = "quest_b5_02"
0x14cd: Stack[-1] = "completed"
0x14ce: Call2 0x13c5

0x14cf: Pop(3)
0x14d0: Return(); Pop(0)

0x14d1: PushEmpty()
0x14d2: Push("money 4000 is given")
0x14d3: @ Trace(Stack[-1])
0x14d4: Pop(1)
0x14d5: PushEmpty(object, int)
0x14d6: Stack[-2] = Stack[-4]
0x14d7: Stack[-1] = (int) 4000
0x14d8: Call2 0x138b

0x14d9: Pop(2)
0x14da: Return(); Pop(0)

0x14db: PushEmpty()
0x14dc: Push("kerosene50 is given")
0x14dd: @ Trace(Stack[-1])
0x14de: Pop(1)
0x14df: PushEmpty(object, string, int)
0x14e0: Stack[-3] = Stack[-5]
0x14e1: Stack[-2] = "kerosene"
0x14e2: Stack[-1] = (int) 50
0x14e3: Call2 0x13b1

0x14e4: Pop(3)
0x14e5: Return(); Pop(0)

0x14e6: PushEmpty()
0x14e7: PushEmpty(object, string, string)
0x14e8: PushEmpty(object)
0x14e9: Call2 0x11ec

0x14ea: Stack[-4] = Stack[-1]
0x14eb: Pop(1)
0x14ec: Stack[-2] = "house_vlad"
0x14ed: Stack[-1] = "pt_maze_start"
0x14ee: Call2 0x13d1

0x14ef: Pop(3)
0x14f0: Return(); Pop(0)

0x14f1: PushEmpty()
0x14f2: Push("b8q02")
0x14f3: Push((int) 1)
0x14f4: @ SetVariable(Stack[-2], Stack[-1])
0x14f5: Pop(2)
0x14f6: PushEmpty()
0x14f7: Call2 0x164e

0x14f8: Pop(0)
0x14f9: PushEmpty()
0x14fa: Call2 0x1668

0x14fb: Pop(0)
0x14fc: PushEmpty(object, string)
0x14fd: Stack[-1] = "quest_b8_02"
0x14fe: Call2 0x1363

0x14ff: Pop(2)
0x1500: Return(); Pop(0)

0x1501: PushEmpty(int, int)
0x1502: PushEmpty()
0x1503: Call2 0x165b

0x1504: Pop(0)
0x1505: PushEmpty(bool, string, string)
0x1506: Stack[-2] = "quest_b8_02"
0x1507: Stack[-1] = "completed"
0x1508: Call2 0x13c5

0x1509: Pop(3)
0x150a: Push("b8q02_book")
0x150b: Push((int) 1)
0x150c: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x150d: Pop(2)
0x150e: Return(); Pop(2)

0x150f: PushEmpty()
0x1510: Push("oob8MladVlad1")
0x1511: Push((int) 1)
0x1512: @ SetVariable(Stack[-2], Stack[-1])
0x1513: Pop(2)
0x1514: Return(); Pop(0)

0x1515: PushEmpty()
0x1516: Push("b11q01KnowWhoKilled")
0x1517: Push((int) 1)
0x1518: @ SetVariable(Stack[-2], Stack[-1])
0x1519: Pop(2)
0x151a: PushEmpty()
0x151b: Call2 0x161a

0x151c: Pop(0)
0x151d: Return(); Pop(0)

0x151e: PushEmpty()
0x151f: Push("oob11MladVlad1")
0x1520: Push((int) 1)
0x1521: @ SetVariable(Stack[-2], Stack[-1])
0x1522: Pop(2)
0x1523: Return(); Pop(0)

0x1524: PushEmpty()
0x1525: PushEmpty(bool, string, string)
0x1526: Stack[-2] = "quest_b2_01"
0x1527: Stack[-1] = "place_mladvlad"
0x1528: Call2 0x13c5

0x1529: Pop(3)
0x152a: Return(); Pop(0)

0x152b: PushEmpty()
0x152c: Push("money10000 is given")
0x152d: @ Trace(Stack[-1])
0x152e: Pop(1)
0x152f: PushEmpty(object, int)
0x1530: Stack[-2] = Stack[-4]
0x1531: Stack[-1] = (int) 10000
0x1532: Call2 0x138b

0x1533: Pop(2)
0x1534: Return(); Pop(0)

0x1535: PushEmpty()
0x1536: Push("playsound")
0x1537: Push("givemoney")
0x1538: @ TriggerWorld(Stack[-2], Stack[-1])
0x1539: Pop(2)
0x153a: Return(); Pop(0)

0x153b: PushEmpty()
0x153c: Push("playsound")
0x153d: Push("giveitem")
0x153e: @ TriggerWorld(Stack[-2], Stack[-1])
0x153f: Pop(2)
0x1540: Return(); Pop(0)

0x1541: PushEmpty()
0x1542: Push("b5MladVladVisit")
0x1543: Push((int) 1)
0x1544: @ SetVariable(Stack[-2], Stack[-1])
0x1545: Pop(2)
0x1546: Return(); Pop(0)

0x1547: PushEmpty()
0x1548: Push("money 7000 is given")
0x1549: @ Trace(Stack[-1])
0x154a: Pop(1)
0x154b: PushEmpty(object, int)
0x154c: Stack[-2] = Stack[-4]
0x154d: Stack[-1] = (int) 7000
0x154e: Call2 0x138b

0x154f: Pop(2)
0x1550: Return(); Pop(0)

0x1551: PushEmpty()
0x1552: Push("recipe2 is given")
0x1553: @ Trace(Stack[-1])
0x1554: Pop(1)
0x1555: PushEmpty(object, string, int)
0x1556: Stack[-3] = Stack[-5]
0x1557: Stack[-2] = "recipe2"
0x1558: Stack[-1] = (int) 1
0x1559: Call2 0x13b1

0x155a: Pop(3)
0x155b: Return(); Pop(0)

0x155c: PushEmpty()
0x155d: Push("recipe3 is given")
0x155e: @ Trace(Stack[-1])
0x155f: Pop(1)
0x1560: PushEmpty(object, string, int)
0x1561: Stack[-3] = Stack[-5]
0x1562: Stack[-2] = "recipe3"
0x1563: Stack[-1] = (int) 1
0x1564: Call2 0x13b1

0x1565: Pop(3)
0x1566: Return(); Pop(0)

0x1567: PushEmpty()
0x1568: Push("playsound")
0x1569: Push("giveitem")
0x156a: @ TriggerWorld(Stack[-2], Stack[-1])
0x156b: Pop(2)
0x156c: Return(); Pop(0)

0x156d: PushEmpty()
0x156e: Push("playsound")
0x156f: Push("mapmark")
0x1570: @ TriggerWorld(Stack[-2], Stack[-1])
0x1571: Pop(2)
0x1572: Return(); Pop(0)

0x1573: PushEmpty()
0x1574: PushEmpty(int, string)
0x1575: Stack[-1] = "oob8MladVlad1"
0x1576: Call2 0x1353

0x1577: Pop(1)
0x1578: Push((int) 0)
0x1579: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x157a: IF (Stack[-1] == 0) GOTO 0x157d; Pop(1)

0x157b: Stack[-2] = (bool) 1
0x157c: Return(); Pop(0)

0x157d: Stack[-2] = (bool) 0
0x157e: Return(); Pop(0)

0x157f: PushEmpty()
0x1580: PushEmpty(int, string)
0x1581: Stack[-1] = "b8q02"
0x1582: Call2 0x1353

0x1583: Pop(1)
0x1584: Push((int) 0)
0x1585: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1586: IF (Stack[-1] == 0) GOTO 0x1589; Pop(1)

0x1587: Stack[-2] = (bool) 1
0x1588: Return(); Pop(0)

0x1589: Stack[-2] = (bool) 0
0x158a: Return(); Pop(0)

0x158b: PushEmpty()
0x158c: PushEmpty(bool, object, string)
0x158d: Stack[-2] = Stack[-4]
0x158e: Stack[-1] = "b8q02_book"
0x158f: Call2 0x13be

0x1590: Pop(2)
0x1591: IF (Stack[-1] == 0) GOTO 0x1594; Pop(1)

0x1592: Stack[-2] = (bool) 1
0x1593: Return(); Pop(0)

0x1594: Stack[-2] = (bool) 0
0x1595: Return(); Pop(0)

0x1596: PushEmpty()
0x1597: PushEmpty(int, string)
0x1598: Stack[-1] = "b11q01"
0x1599: Call2 0x1353

0x159a: Pop(1)
0x159b: Push((int) 1000)
0x159c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x159d: IF (Stack[-1] == 0) GOTO 0x15a0; Pop(1)

0x159e: Stack[-2] = (bool) 1
0x159f: Return(); Pop(0)

0x15a0: Stack[-2] = (bool) 0
0x15a1: Return(); Pop(0)

0x15a2: PushEmpty()
0x15a3: PushEmpty(int, string)
0x15a4: Stack[-1] = "oob11MladVlad1"
0x15a5: Call2 0x1353

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
0x15b0: Stack[-1] = "KnowGrif"
0x15b1: Call2 0x1353

0x15b2: Pop(1)
0x15b3: Push((int) 1)
0x15b4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15b5: IF (Stack[-1] == 0) GOTO 0x15b8; Pop(1)

0x15b6: Stack[-2] = (bool) 1
0x15b7: Return(); Pop(0)

0x15b8: Stack[-2] = (bool) 0
0x15b9: Return(); Pop(0)

0x15ba: PushEmpty()
0x15bb: PushEmpty(int, string)
0x15bc: Stack[-1] = "b1q01"
0x15bd: Call2 0x1353

0x15be: Pop(1)
0x15bf: Push((int) 0)
0x15c0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15c1: IF (Stack[-1] == 0) GOTO 0x15c4; Pop(1)

0x15c2: Stack[-2] = (bool) 1
0x15c3: Return(); Pop(0)

0x15c4: Stack[-2] = (bool) 0
0x15c5: Return(); Pop(0)

0x15c6: PushEmpty()
0x15c7: PushEmpty(int, string)
0x15c8: Stack[-1] = "oob1MladVlad1"
0x15c9: Call2 0x1353

0x15ca: Pop(1)
0x15cb: Push((int) 0)
0x15cc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15cd: IF (Stack[-1] == 0) GOTO 0x15d0; Pop(1)

0x15ce: Stack[-2] = (bool) 1
0x15cf: Return(); Pop(0)

0x15d0: Stack[-2] = (bool) 0
0x15d1: Return(); Pop(0)

0x15d2: PushEmpty()
0x15d3: PushEmpty(int, string)
0x15d4: Stack[-1] = "oob1MladVlad2"
0x15d5: Call2 0x1353

0x15d6: Pop(1)
0x15d7: Push((int) 0)
0x15d8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15d9: IF (Stack[-1] == 0) GOTO 0x15dc; Pop(1)

0x15da: Stack[-2] = (bool) 1
0x15db: Return(); Pop(0)

0x15dc: Stack[-2] = (bool) 0
0x15dd: Return(); Pop(0)

0x15de: PushEmpty()
0x15df: PushEmpty(int, string)
0x15e0: Stack[-1] = "b2MladVladBurahHomeTalk"
0x15e1: Call2 0x1353

0x15e2: Pop(1)
0x15e3: Push((int) 1)
0x15e4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15e5: IF (Stack[-1] == 0) GOTO 0x15e8; Pop(1)

0x15e6: Stack[-2] = (bool) 1
0x15e7: Return(); Pop(0)

0x15e8: Stack[-2] = (bool) 0
0x15e9: Return(); Pop(0)

0x15ea: PushEmpty()
0x15eb: PushEmpty(int, string)
0x15ec: Stack[-1] = "oob2MladVlad1"
0x15ed: Call2 0x1353

0x15ee: Pop(1)
0x15ef: Push((int) 0)
0x15f0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15f1: IF (Stack[-1] == 0) GOTO 0x15f4; Pop(1)

0x15f2: Stack[-2] = (bool) 1
0x15f3: Return(); Pop(0)

0x15f4: Stack[-2] = (bool) 0
0x15f5: Return(); Pop(0)

0x15f6: PushEmpty()
0x15f7: PushEmpty(int, string)
0x15f8: Stack[-1] = "oob5MladVlad1"
0x15f9: Call2 0x1353

0x15fa: Pop(1)
0x15fb: Push((int) 0)
0x15fc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15fd: IF (Stack[-1] == 0) GOTO 0x1600; Pop(1)

0x15fe: Stack[-2] = (bool) 1
0x15ff: Return(); Pop(0)

0x1600: Stack[-2] = (bool) 0
0x1601: Return(); Pop(0)

0x1602: PushEmpty()
0x1603: PushEmpty(int, string)
0x1604: Stack[-1] = "b5q02"
0x1605: Call2 0x1353

0x1606: Pop(1)
0x1607: Push((int) 0)
0x1608: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1609: IF (Stack[-1] == 0) GOTO 0x160c; Pop(1)

0x160a: Stack[-2] = (bool) 1
0x160b: Return(); Pop(0)

0x160c: Stack[-2] = (bool) 0
0x160d: Return(); Pop(0)

0x160e: PushEmpty()
0x160f: PushEmpty(int, string)
0x1610: Stack[-1] = "b5q02"
0x1611: Call2 0x1353

0x1612: Pop(1)
0x1613: Push((int) 2)
0x1614: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1615: IF (Stack[-1] == 0) GOTO 0x1618; Pop(1)

0x1616: Stack[-2] = (bool) 1
0x1617: Return(); Pop(0)

0x1618: Stack[-2] = (bool) 0
0x1619: Return(); Pop(0)

0x161a: PushEmpty(object, object)
0x161b: Push((int) 315)
0x161c: Push((int) 1)
0x161d: Push((int) 522057)
0x161e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x161f: Pop(3)
0x1620: PushEmpty(bool, object, int)
0x1621: Stack[-2] = Stack[-4]
0x1622: Stack[-1] = (int) 313
0x1623: Call2 0x1682

0x1624: Pop(3)
0x1625: Return(); Pop(2)

0x1626: Stack[-1] = 0
0x1627: PushEmpty(object, object)
0x1628: Push((int) 249)
0x1629: Push((int) 2)
0x162a: Push((int) 520665)
0x162b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x162c: Pop(3)
0x162d: PushEmpty(bool, object, int)
0x162e: Stack[-2] = Stack[-4]
0x162f: Stack[-1] = (int) -1
0x1630: Call2 0x1682

0x1631: Pop(3)
0x1632: Return(); Pop(2)

0x1633: Stack[-1] = 0
0x1634: PushEmpty(object, object)
0x1635: Push((int) 252)
0x1636: Push((int) 2)
0x1637: Push((int) 520668)
0x1638: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1639: Pop(3)
0x163a: PushEmpty(bool, object, int)
0x163b: Stack[-2] = Stack[-4]
0x163c: Stack[-1] = (int) 249
0x163d: Call2 0x1682

0x163e: Pop(3)
0x163f: Return(); Pop(2)

0x1640: Stack[-1] = 0
0x1641: PushEmpty(object, object)
0x1642: Push((int) 250)
0x1643: Push((int) 2)
0x1644: Push((int) 520666)
0x1645: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1646: Pop(3)
0x1647: PushEmpty(bool, object, int)
0x1648: Stack[-2] = Stack[-4]
0x1649: Stack[-1] = (int) 249
0x164a: Call2 0x1682

0x164b: Pop(3)
0x164c: Return(); Pop(2)

0x164d: Stack[-1] = 0
0x164e: PushEmpty(object, object)
0x164f: Push((int) 293)
0x1650: Push((int) 2)
0x1651: Push((int) 521491)
0x1652: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1653: Pop(3)
0x1654: PushEmpty(bool, object, int)
0x1655: Stack[-2] = Stack[-4]
0x1656: Stack[-1] = (int) -1
0x1657: Call2 0x1682

0x1658: Pop(3)
0x1659: Return(); Pop(2)

0x165a: Stack[-1] = 0
0x165b: PushEmpty(object, object)
0x165c: Push((int) 296)
0x165d: Push((int) 2)
0x165e: Push((int) 521494)
0x165f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1660: Pop(3)
0x1661: PushEmpty(bool, object, int)
0x1662: Stack[-2] = Stack[-4]
0x1663: Stack[-1] = (int) 293
0x1664: Call2 0x1682

0x1665: Pop(3)
0x1666: Return(); Pop(2)

0x1667: Stack[-1] = 0
0x1668: PushEmpty(object, object)
0x1669: Push((int) 294)
0x166a: Push((int) 2)
0x166b: Push((int) 521492)
0x166c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x166d: Pop(3)
0x166e: PushEmpty(bool, object, int)
0x166f: Stack[-2] = Stack[-4]
0x1670: Stack[-1] = (int) 293
0x1671: Call2 0x1682

0x1672: Pop(3)
0x1673: Return(); Pop(2)

0x1674: Stack[-1] = 0
0x1675: PushEmpty(object, object)
0x1676: @ GetDiaryRoot(Stack[-1])
0x1677: Pop(0)
0x1678: Pop(0); Push((bool) Stack[-1] == 0)
0x1679: IF (Stack[-1] == 0) GOTO 0x167f; Pop(1)

0x167a: Push("Can't retrieve diary root")
0x167b: @ Trace(Stack[-1])
0x167c: Pop(1)
0x167d: Stack[-3] = (bool) 0
0x167e: Return(); Pop(2)

0x167f: Stack[-3] = Stack[-1]
0x1680: Return(); Pop(2)

0x1681: Stack[-1] = 0
0x1682: PushEmpty(object, object, int, object, object, int)
0x1683: PushEmpty(object)
0x1684: Call2 0x1675

0x1685: Stack[-4] = Stack[-1]
0x1686: Pop(1)
0x1687: @@ Find(Stack[-7], Stack[-2])
0x1688: Pop(0)
0x1689: Pop(0); Push((bool) Stack[-2] == 0)
0x168a: IF (Stack[-1] == 0) GOTO 0x1691; Pop(1)

0x168b: Push("Can't find diary parent with id: ")
0x168c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x168d: @ Trace(Stack[-1])
0x168e: Pop(1)
0x168f: Stack[-9] = (bool) 0
0x1690: Return(); Pop(6)

0x1691: @@ AddChild(Stack[-8])
0x1692: Pop(0)
0x1693: Push((int) 7)
0x1694: @ SendWorldWndMessage(Stack[-1])
0x1695: Pop(1)
0x1696: @@ GetCategory(Stack[-1])
0x1697: Pop(0)
0x1698: @ SetDiarySection(Stack[-1])
0x1699: Pop(0)
0x169a: Stack[-9] = (bool) 0
0x169b: Return(); Pop(6)

0x169c: Stack[-2] = 0
0x169d: Stack[-3] = 0
0x169e: PushEmpty(object, object, object, object)
0x169f: @ GetMainOutdoorScene(Stack[-2])
0x16a0: Pop(0)
0x16a1: Pop(0); Push((bool) Stack[-2] == 0)
0x16a2: IF (Stack[-1] == 0) GOTO 0x16a9; Pop(1)

0x16a3: Push("Can't find main outdoor scene")
0x16a4: @ Trace(Stack[-1])
0x16a5: Pop(1)
0x16a6: Stack[-1] = 0
0x16a7: Stack[-5] = Stack[-1]
0x16a8: Return(); Pop(4)

0x16a9: @@ GetMap(Stack[-1])
0x16aa: Pop(0)
0x16ab: Stack[-5] = Stack[-1]
0x16ac: Return(); Pop(4)

0x16ad: Stack[-1] = 0
0x16ae: Stack[-2] = 0
0x16af: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x16b0: @ GetMainOutdoorScene(Stack[-2])
0x16b1: Pop(0)
0x16b2: Pop(0); Push((bool) Stack[-2] == 0)
0x16b3: IF (Stack[-1] == 0) GOTO 0x16b8; Pop(1)

0x16b4: Push("Can't find main outdoor scene")
0x16b5: @ Trace(Stack[-1])
0x16b6: Pop(1)
0x16b7: Return(); Pop(8)

0x16b8: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x16b9: Pop(0)
0x16ba: Pop(0); Push((bool) Stack[-1] == 0)
0x16bb: IF (Stack[-1] == 0) GOTO 0x16c2; Pop(1)

0x16bc: Push("Warning: outdoor scene locator ")
0x16bd: Pop(1); Push(Stack[-1] + Stack[-11]);
0x16be: Push(" doesnt exist")
0x16bf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x16c0: @ Trace(Stack[-1])
0x16c1: Pop(1)
0x16c2: @@ GetMap(Stack[-11])
0x16c3: Pop(0)
0x16c4: Pop(0); Push((bool) Stack[-11] == 0)
0x16c5: IF (Stack[-1] == 0) GOTO 0x16ca; Pop(1)

0x16c6: Push("Can't find map")
0x16c7: @ Trace(Stack[-1])
0x16c8: Pop(1)
0x16c9: Return(); Pop(8)

0x16ca: Push(CvectorIndex(Stack[-4], 0))
0x16cb: Push(CvectorIndex(Stack[-5], 2))
0x16cc: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x16cd: Pop(2)
0x16ce: Return(); Pop(8)

0x16cf: Stack[-2] = 0
0x16d0: PushEmpty(int, int)
0x16d1: Push("branch")
0x16d2: @ GetVariable(Stack[-1], Stack[-2])
0x16d3: Pop(1)
0x16d4: Push((int) 0)
0x16d5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16d6: IF (Stack[-1] == 0) GOTO 0x16da; Pop(1)

0x16d7: Stack[-3] = (int) 1
0x16d8: Return(); Pop(2)

0x16d9: GOTO 0x16df

0x16da: Push((int) 1)
0x16db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16dc: IF (Stack[-1] == 0) GOTO 0x16df; Pop(1)

0x16dd: Stack[-3] = (int) 2
0x16de: Return(); Pop(2)

0x16df: Stack[-3] = (int) 3
0x16e0: Return(); Pop(2)

0x16e1: PushEmpty()
0x16e2: Push(GlobalVars[2])
0x16e3: Pop(1); Push((bool) Stack[-1] == 0)
0x16e4: IF (Stack[-1] == 0) GOTO 0x16ee; Pop(1)

0x16e5: PushEmpty(int, object)
0x16e6: Stack[-1] = Stack[-3]
0x16e7: Push(-2, 1); TaskCall(12)
0x16e8: Call2 0xa23

0x16e9: Pop(-2, 1); TaskReturn
0x16ea: Pop(2)
0x16eb: Push(GlobalVars[2])
0x16ec: Stack[-1] = (bool) 1
0x16ed: GlobalVars[2] = Stack[-1]; Pop(1)
0x16ee: PushEmpty(bool, int)
0x16ef: Stack[-1] = (int) 1
0x16f0: Call2 0x13f7

0x16f1: Pop(1)
0x16f2: IF (Stack[-1] == 0) GOTO 0x16fa; Pop(1)

0x16f3: PushEmpty(int, object)
0x16f4: Stack[-1] = Stack[-3]
0x16f5: Push(-2, 1); TaskCall(6)
0x16f6: Call2 0x21d

0x16f7: Pop(-2, 1); TaskReturn
0x16f8: Pop(2)
0x16f9: Return(); Pop(0)

0x16fa: PushEmpty(bool, int)
0x16fb: Stack[-1] = (int) 2
0x16fc: Call2 0x13f7

0x16fd: Pop(1)
0x16fe: IF (Stack[-1] == 0) GOTO 0x1706; Pop(1)

0x16ff: PushEmpty(int, object)
0x1700: Stack[-1] = Stack[-3]
0x1701: Push(-2, 1); TaskCall(8)
0x1702: Call2 0x4cb

0x1703: Pop(-2, 1); TaskReturn
0x1704: Pop(2)
0x1705: Return(); Pop(0)

0x1706: PushEmpty(bool, int)
0x1707: Stack[-1] = (int) 5
0x1708: Call2 0x13f7

0x1709: Pop(1)
0x170a: IF (Stack[-1] == 0) GOTO 0x1712; Pop(1)

0x170b: PushEmpty(int, object)
0x170c: Stack[-1] = Stack[-3]
0x170d: Push(-2, 1); TaskCall(10)
0x170e: Call2 0x767

0x170f: Pop(-2, 1); TaskReturn
0x1710: Pop(2)
0x1711: Return(); Pop(0)

0x1712: PushEmpty(bool, int)
0x1713: Stack[-1] = (int) 6
0x1714: Call2 0x13f7

0x1715: Pop(1)
0x1716: IF (Stack[-1] == 0) GOTO 0x171e; Pop(1)

0x1717: PushEmpty(int, object)
0x1718: Stack[-1] = Stack[-3]
0x1719: Push(-2, 1); TaskCall(14)
0x171a: Call2 0xb12

0x171b: Pop(-2, 1); TaskReturn
0x171c: Pop(2)
0x171d: Return(); Pop(0)

0x171e: PushEmpty(bool, int)
0x171f: Stack[-1] = (int) 8
0x1720: Call2 0x13f7

0x1721: Pop(1)
0x1722: IF (Stack[-1] == 0) GOTO 0x172a; Pop(1)

0x1723: PushEmpty(int, object)
0x1724: Stack[-1] = Stack[-3]
0x1725: Push(-2, 1); TaskCall(16)
0x1726: Call2 0xc0e

0x1727: Pop(-2, 1); TaskReturn
0x1728: Pop(2)
0x1729: Return(); Pop(0)

0x172a: PushEmpty(bool, int)
0x172b: Stack[-1] = (int) 11
0x172c: Call2 0x13f7

0x172d: Pop(1)
0x172e: IF (Stack[-1] == 0) GOTO 0x1736; Pop(1)

0x172f: PushEmpty(int, object)
0x1730: Stack[-1] = Stack[-3]
0x1731: Push(-2, 1); TaskCall(18)
0x1732: Call2 0xeaa

0x1733: Pop(-2, 1); TaskReturn
0x1734: Pop(2)
0x1735: Return(); Pop(0)

0x1736: PushEmpty(bool)
0x1737: Stack[-1] = (bool) 0
0x1738: PushEmpty(bool, int)
0x1739: Stack[-1] = (int) 12
0x173a: Call2 0x13f7

0x173b: Pop(1)
0x173c: IF (Stack[-1] == 0) GOTO 0x1741; Pop(1)

0x173d: Push(GlobalVars[3])
0x173e: Pop(1); Push((bool) Stack[-1] == 0)
0x173f: IF (Stack[-1] == 0) GOTO 0x1741; Pop(1)

0x1740: Stack[-1] = (bool) 1
0x1741: IF (Stack[-1] == 0) GOTO 0x174c; Pop(1)

0x1742: PushEmpty(int, object)
0x1743: Stack[-1] = Stack[-3]
0x1744: Push(-2, 1); TaskCall(4)
0x1745: Call2 0x11a

0x1746: Pop(-2, 1); TaskReturn
0x1747: Pop(2)
0x1748: Push(GlobalVars[3])
0x1749: Stack[-1] = (bool) 1
0x174a: GlobalVars[3] = Stack[-1]; Pop(1)
0x174b: Return(); Pop(0)

0x174c: PushEmpty(int, object)
0x174d: Stack[-1] = Stack[-3]
0x174e: Push(-2, 1); TaskCall(20)
0x174f: Call2 0x107e

0x1750: Pop(-2, 1); TaskReturn
0x1751: Pop(2)
0x1752: Return(); Pop(0)

