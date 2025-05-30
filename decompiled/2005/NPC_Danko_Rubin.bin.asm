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
	Confusion
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Rage
	Warning
	Neutral
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

RunOp = 0x10d7
RunTask = 14

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x225 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3ae Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9b5 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe04 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf75 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x10ad Vars = (int, int)
	GTASK_14 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x1120 Vars = (int)
		EVENT_6 Op = 0x1146 Vars = ()
		EVENT_5 Op = 0x1155 Vars = ()
		EVENT_45 Op = 0x1162 Vars = (bool)
		EVENT_0 Op = 0x116e Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x11f7

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x13aa

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x13a8

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x13ac

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x13ae

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x16d1

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
0x31: Call2 0x130b

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x124c

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
0x48: Call2 0x123b

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
0x56: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Confusion"
0x59: Call2 0x95

0x5a: Pop(1)
0x5b: Push((int) 534092)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x1523

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 534093)
0x66: Push((int) 38177)
0x67: Push((int) 35686)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 536401)
0x6b: Push((int) -1)
0x6c: Push((int) 38180)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 536402)
0x70: Push((int) -1)
0x71: Push((int) 38181)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x77

0x75: Return(); Pop(0)

0x76: GOTO 0x55

0x77: PushEmpty(bool)
0x78: Call2 0x13b0

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @ lshWaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: PushEmpty(string)
0x81: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x82: Call2 0x12d6

0x83: Pop(1)
0x84: GOTO 0x7b

0x85: GOTO 0x94

0x86: Push("all")
0x87: Push("idle")
0x88: @ PlayAnimation(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: @ WaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: Push("all")
0x90: Push("idle")
0x91: @ PlayAnimation(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: GOTO 0x8a

0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: PushEmpty(bool)
0x97: Call2 0x13b0

0x98: Pop(0)
0x99: Pop(1); Push((bool) Stack[-1] == 0)
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Return(); Pop(0)

0x9c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: PushEmpty(string, bool)
0xa0: Stack[-2] = Stack[-3]
0xa1: Push("")
0xa2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa4: Stack[-1] = (bool) 0
0xa5: GOTO 0xa7

0xa6: Stack[-1] = (bool) 1
0xa7: Call2 0x12e6

0xa8: Pop(2)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0xae: PushEmpty()
0xaf: Call2 0x1304

0xb0: Pop(0)
0xb1: Push((int) 35688)
0xb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0x13bf

0xb8: Pop(2)
0xb9: PushEmpty(object, object)
0xba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc: Call2 0x1501

0xbd: Pop(2)
0xbe: Push((int) 38195)
0xbf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x13bf

0xc5: Pop(2)
0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call2 0x1501

0xca: Pop(2)
0xcb: Push((int) 35685)
0xcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Confusion"
0xd0: Call2 0x95

0xd1: Pop(1)
0xd2: Push((int) 534092)
0xd3: @@ SetMessage(Stack[-1])
0xd4: Pop(1)
0xd5: @@ ClearReplies()
0xd6: Pop(0)
0xd7: PushEmpty(bool, object)
0xd8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd9: Call2 0x1523

0xda: Pop(1)
0xdb: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdc: Push((int) 534093)
0xdd: Push((int) 38177)
0xde: Push((int) 35686)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Push((int) 536401)
0xe2: Push((int) -1)
0xe3: Push((int) 38180)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Push((int) 536402)
0xe7: Push((int) -1)
0xe8: Push((int) 38181)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Push((int) 38177)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Confusion"
0xf1: Call2 0x95

0xf2: Pop(1)
0xf3: Push((int) 536398)
0xf4: @@ SetMessage(Stack[-1])
0xf5: Pop(1)
0xf6: @@ ClearReplies()
0xf7: Pop(0)
0xf8: Push((int) 536399)
0xf9: Push((int) 38179)
0xfa: Push((int) 38178)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: Return(); Pop(0)

0xfe: Push((int) 38190)
0xff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x100: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0x101: Push((int) 38192)
0x102: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x104: PushEmpty(string)
0x105: Stack[-1] = "Rage"
0x106: Call2 0x95

0x107: Pop(1)
0x108: Push((int) 536413)
0x109: @@ SetMessage(Stack[-1])
0x10a: Pop(1)
0x10b: @@ ClearReplies()
0x10c: Pop(0)
0x10d: Push((int) 536414)
0x10e: Push((int) 38189)
0x10f: Push((int) 38193)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Push((int) 38179)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x116: PushEmpty(string)
0x117: Stack[-1] = "Confusion"
0x118: Call2 0x95

0x119: Pop(1)
0x11a: Push((int) 536400)
0x11b: @@ SetMessage(Stack[-1])
0x11c: Pop(1)
0x11d: @@ ClearReplies()
0x11e: Pop(0)
0x11f: Push((int) 536409)
0x120: Push((int) 38189)
0x121: Push((int) 38188)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Push((int) 536415)
0x125: Push((int) -1)
0x126: Push((int) 38195)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Return(); Pop(0)

0x12a: Push((int) 38189)
0x12b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x12d: PushEmpty(string)
0x12e: Stack[-1] = "Confusion"
0x12f: Call2 0x95

0x130: Pop(1)
0x131: Push((int) 536410)
0x132: @@ SetMessage(Stack[-1])
0x133: Pop(1)
0x134: @@ ClearReplies()
0x135: Pop(0)
0x136: Push((int) 536403)
0x137: Push((int) 38183)
0x138: Push((int) 38182)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Return(); Pop(0)

0x13c: Push((int) 38183)
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Rage"
0x141: Call2 0x95

0x142: Pop(1)
0x143: Push((int) 536404)
0x144: @@ SetMessage(Stack[-1])
0x145: Pop(1)
0x146: @@ ClearReplies()
0x147: Pop(0)
0x148: Push((int) 536405)
0x149: Push((int) 38185)
0x14a: Push((int) 38184)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Return(); Pop(0)

0x14e: Push((int) 38185)
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x151: PushEmpty(string)
0x152: Stack[-1] = "Rage"
0x153: Call2 0x95

0x154: Pop(1)
0x155: Push((int) 536406)
0x156: @@ SetMessage(Stack[-1])
0x157: Pop(1)
0x158: @@ ClearReplies()
0x159: Pop(0)
0x15a: Push((int) 536407)
0x15b: Push((int) 35687)
0x15c: Push((int) 38186)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Return(); Pop(0)

0x160: Push((int) 35687)
0x161: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x163: PushEmpty(string)
0x164: Stack[-1] = "Warning"
0x165: Call2 0x95

0x166: Pop(1)
0x167: Push((int) 534094)
0x168: @@ SetMessage(Stack[-1])
0x169: Pop(1)
0x16a: @@ ClearReplies()
0x16b: Pop(0)
0x16c: Push((int) 534095)
0x16d: Push((int) -1)
0x16e: Push((int) 35688)
0x16f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x170: Pop(3)
0x171: Return(); Pop(0)

0x172: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x173: PushEmpty(bool)
0x174: Call2 0x13b0

0x175: Pop(0)
0x176: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x177: @ lshStopAnimation()
0x178: Pop(0)
0x179: GOTO 0x17c

0x17a: @ StopAnimation()
0x17b: Pop(0)
0x17c: Return(); Pop(0)

0x17d: GOTO 0xac

0x17e: Return(); Pop(0)

0x17f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x180: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x181: PushEmpty(bool, object, float)
0x182: Stack[-2] = Stack[-12]
0x183: Stack[-1] = (float) 70.0
0x184: Call2 0x11f7

0x185: Pop(2)
0x186: Pop(1); Push((bool) Stack[-1] == 0)
0x187: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x188: Stack[-10] = (int) -2
0x189: Return(); Pop(8)

0x18a: @ CreateDialog(Stack[-4])
0x18b: Pop(0)
0x18c: PushEmpty(int)
0x18d: Call2 0x13aa

0x18e: Pop(0)
0x18f: @@ SetNPCName(Stack[-1])
0x190: Pop(1)
0x191: PushEmpty(int)
0x192: Call2 0x13a8

0x193: Pop(0)
0x194: @@ SetNPCDescription(Stack[-1])
0x195: Pop(1)
0x196: PushEmpty(string)
0x197: Call2 0x13ac

0x198: Pop(0)
0x199: @@ SetPhoto(Stack[-1])
0x19a: Pop(1)
0x19b: PushEmpty(string)
0x19c: Call2 0x13ae

0x19d: Pop(0)
0x19e: @@ SetPhoto2(Stack[-1])
0x19f: Pop(1)
0x1a0: PushEmpty(int)
0x1a1: Call2 0x16d1

0x1a2: Pop(0)
0x1a3: @@ SetPlayerName(Stack[-1])
0x1a4: Pop(1)
0x1a5: Stack[-2] = (int) -1
0x1a6: @ IsOverrideActive(Stack[-3])
0x1a7: Pop(0)
0x1a8: Push(Stack[-3])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1aa: Stack[-10] = (int) -2
0x1ab: Return(); Pop(8)

0x1ac: @ DoDialog(Stack[-4])
0x1ad: Pop(0)
0x1ae: PushEmpty(bool, object)
0x1af: PushEmpty(object)
0x1b0: Call2 0x130b

0x1b1: Stack[-2] = Stack[-1]
0x1b2: Pop(1)
0x1b3: Call2 0x124c

0x1b4: Pop(2)
0x1b5: PushEmpty(object, object)
0x1b6: Stack[-2] = Stack[-11]
0x1b7: Stack[-1] = Stack[-6]
0x1b8: Push(-2, 4); TaskCall(3)
0x1b9: Call2 0x1d0

0x1ba: Pop(-2, 4); TaskReturn
0x1bb: Pop(2)
0x1bc: @@ IsDialogEnd(Stack[-1])
0x1bd: Pop(0)
0x1be: Pop(0); Push((bool) Stack[-1] == 0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c0: @ sync()
0x1c1: Pop(0)
0x1c2: @@ IsDialogEnd(Stack[-1])
0x1c3: Pop(0)
0x1c4: GOTO 0x1be

0x1c5: PushEmpty(object)
0x1c6: Stack[-1] = Stack[-10]
0x1c7: Call2 0x123b

0x1c8: Pop(1)
0x1c9: @ StopDialog(Stack[-4])
0x1ca: Pop(0)
0x1cb: @@ GetReturnValue(Stack[-2])
0x1cc: Pop(0)
0x1cd: Stack[-10] = Stack[-2]
0x1ce: Return(); Pop(8)

0x1cf: Stack[-4] = 0
0x1d0: PushEmpty()
0x1d1: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1d2: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1d3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1d4: Push((int) 1)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1d6: PushEmpty(string)
0x1d7: Stack[-1] = "Neutral"
0x1d8: Call2 0x20f

0x1d9: Pop(1)
0x1da: Push((int) 535294)
0x1db: @@ SetMessage(Stack[-1])
0x1dc: Pop(1)
0x1dd: @@ ClearReplies()
0x1de: Pop(0)
0x1df: Push((int) 535295)
0x1e0: Push((int) 36973)
0x1e1: Push((int) 36972)
0x1e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e3: Pop(3)
0x1e4: Push((int) 535302)
0x1e5: Push((int) -1)
0x1e6: Push((int) 36980)
0x1e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e8: Pop(3)
0x1e9: Push((int) 535303)
0x1ea: Push((int) -1)
0x1eb: Push((int) 36981)
0x1ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ed: Pop(3)
0x1ee: GOTO 0x1f1

0x1ef: Return(); Pop(0)

0x1f0: GOTO 0x1d4

0x1f1: PushEmpty(bool)
0x1f2: Call2 0x13b0

0x1f3: Pop(0)
0x1f4: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f5: @ lshWaitForAnimEnd()
0x1f6: Pop(0)
0x1f7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f9: GOTO 0x1ff

0x1fa: PushEmpty(string)
0x1fb: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1fc: Call2 0x12d6

0x1fd: Pop(1)
0x1fe: GOTO 0x1f5

0x1ff: GOTO 0x20e

0x200: Push("all")
0x201: Push("idle")
0x202: @ PlayAnimation(Stack[-2], Stack[-1])
0x203: Pop(2)
0x204: @ WaitForAnimEnd()
0x205: Pop(0)
0x206: Push( Stack[3 + Tasks[-1].StackPointer] )
0x207: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x208: GOTO 0x20e

0x209: Push("all")
0x20a: Push("idle")
0x20b: @ PlayAnimation(Stack[-2], Stack[-1])
0x20c: Pop(2)
0x20d: GOTO 0x204

0x20e: Return(); Pop(0)

0x20f: PushEmpty()
0x210: PushEmpty(bool)
0x211: Call2 0x13b0

0x212: Pop(0)
0x213: Pop(1); Push((bool) Stack[-1] == 0)
0x214: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x215: Return(); Pop(0)

0x216: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x217: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x218: Return(); Pop(0)

0x219: PushEmpty(string, bool)
0x21a: Stack[-2] = Stack[-3]
0x21b: Push("")
0x21c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x21d: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21e: Stack[-1] = (bool) 0
0x21f: GOTO 0x221

0x220: Stack[-1] = (bool) 1
0x221: Call2 0x12e6

0x222: Pop(2)
0x223: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x224: Return(); Pop(0)

0x225: PushEmpty()
0x226: Push((int) 1)
0x227: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x228: PushEmpty()
0x229: Call2 0x1304

0x22a: Pop(0)
0x22b: Push((int) 36971)
0x22c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x22e: PushEmpty(string)
0x22f: Stack[-1] = "Neutral"
0x230: Call2 0x20f

0x231: Pop(1)
0x232: Push((int) 535294)
0x233: @@ SetMessage(Stack[-1])
0x234: Pop(1)
0x235: @@ ClearReplies()
0x236: Pop(0)
0x237: Push((int) 535295)
0x238: Push((int) 36973)
0x239: Push((int) 36972)
0x23a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23b: Pop(3)
0x23c: Push((int) 535302)
0x23d: Push((int) -1)
0x23e: Push((int) 36980)
0x23f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x240: Pop(3)
0x241: Push((int) 535303)
0x242: Push((int) -1)
0x243: Push((int) 36981)
0x244: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x245: Pop(3)
0x246: Return(); Pop(0)

0x247: Push((int) 36973)
0x248: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x24a: PushEmpty(string)
0x24b: Stack[-1] = "Neutral"
0x24c: Call2 0x20f

0x24d: Pop(1)
0x24e: Push((int) 535296)
0x24f: @@ SetMessage(Stack[-1])
0x250: Pop(1)
0x251: @@ ClearReplies()
0x252: Pop(0)
0x253: Push((int) 535297)
0x254: Push((int) 36975)
0x255: Push((int) 36974)
0x256: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x257: Pop(3)
0x258: Push((int) 535301)
0x259: Push((int) 36975)
0x25a: Push((int) 36978)
0x25b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25c: Pop(3)
0x25d: Return(); Pop(0)

0x25e: Push((int) 36975)
0x25f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x260: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x261: PushEmpty(string)
0x262: Stack[-1] = "Neutral"
0x263: Call2 0x20f

0x264: Pop(1)
0x265: Push((int) 535298)
0x266: @@ SetMessage(Stack[-1])
0x267: Pop(1)
0x268: @@ ClearReplies()
0x269: Pop(0)
0x26a: Push((int) 535299)
0x26b: Push((int) -1)
0x26c: Push((int) 36976)
0x26d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26e: Pop(3)
0x26f: Push((int) 535300)
0x270: Push((int) -1)
0x271: Push((int) 36977)
0x272: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x273: Pop(3)
0x274: Return(); Pop(0)

0x275: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x276: PushEmpty(bool)
0x277: Call2 0x13b0

0x278: Pop(0)
0x279: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27a: @ lshStopAnimation()
0x27b: Pop(0)
0x27c: GOTO 0x27f

0x27d: @ StopAnimation()
0x27e: Pop(0)
0x27f: Return(); Pop(0)

0x280: GOTO 0x226

0x281: Return(); Pop(0)

0x282: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x283: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x284: PushEmpty(bool, object, float)
0x285: Stack[-2] = Stack[-12]
0x286: Stack[-1] = (float) 70.0
0x287: Call2 0x11f7

0x288: Pop(2)
0x289: Pop(1); Push((bool) Stack[-1] == 0)
0x28a: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28b: Stack[-10] = (int) -2
0x28c: Return(); Pop(8)

0x28d: @ CreateDialog(Stack[-4])
0x28e: Pop(0)
0x28f: PushEmpty(int)
0x290: Call2 0x13aa

0x291: Pop(0)
0x292: @@ SetNPCName(Stack[-1])
0x293: Pop(1)
0x294: PushEmpty(int)
0x295: Call2 0x13a8

0x296: Pop(0)
0x297: @@ SetNPCDescription(Stack[-1])
0x298: Pop(1)
0x299: PushEmpty(string)
0x29a: Call2 0x13ac

0x29b: Pop(0)
0x29c: @@ SetPhoto(Stack[-1])
0x29d: Pop(1)
0x29e: PushEmpty(string)
0x29f: Call2 0x13ae

0x2a0: Pop(0)
0x2a1: @@ SetPhoto2(Stack[-1])
0x2a2: Pop(1)
0x2a3: PushEmpty(int)
0x2a4: Call2 0x16d1

0x2a5: Pop(0)
0x2a6: @@ SetPlayerName(Stack[-1])
0x2a7: Pop(1)
0x2a8: Stack[-2] = (int) -1
0x2a9: @ IsOverrideActive(Stack[-3])
0x2aa: Pop(0)
0x2ab: Push(Stack[-3])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ad: Stack[-10] = (int) -2
0x2ae: Return(); Pop(8)

0x2af: @ DoDialog(Stack[-4])
0x2b0: Pop(0)
0x2b1: PushEmpty(bool, object)
0x2b2: PushEmpty(object)
0x2b3: Call2 0x130b

0x2b4: Stack[-2] = Stack[-1]
0x2b5: Pop(1)
0x2b6: Call2 0x124c

0x2b7: Pop(2)
0x2b8: PushEmpty(object, object)
0x2b9: Stack[-2] = Stack[-11]
0x2ba: Stack[-1] = Stack[-6]
0x2bb: Push(-2, 4); TaskCall(5)
0x2bc: Call2 0x2d3

0x2bd: Pop(-2, 4); TaskReturn
0x2be: Pop(2)
0x2bf: @@ IsDialogEnd(Stack[-1])
0x2c0: Pop(0)
0x2c1: Pop(0); Push((bool) Stack[-1] == 0)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c3: @ sync()
0x2c4: Pop(0)
0x2c5: @@ IsDialogEnd(Stack[-1])
0x2c6: Pop(0)
0x2c7: GOTO 0x2c1

0x2c8: PushEmpty(object)
0x2c9: Stack[-1] = Stack[-10]
0x2ca: Call2 0x123b

0x2cb: Pop(1)
0x2cc: @ StopDialog(Stack[-4])
0x2cd: Pop(0)
0x2ce: @@ GetReturnValue(Stack[-2])
0x2cf: Pop(0)
0x2d0: Stack[-10] = Stack[-2]
0x2d1: Return(); Pop(8)

0x2d2: Stack[-4] = 0
0x2d3: PushEmpty()
0x2d4: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2d5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2d6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2d7: Push((int) 1)
0x2d8: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x2d9: PushEmpty(bool)
0x2da: Stack[-1] = (bool) 0
0x2db: PushEmpty(bool, object)
0x2dc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2dd: Call2 0x155f

0x2de: Pop(1)
0x2df: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e0: PushEmpty(bool, object)
0x2e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e2: Call2 0x156b

0x2e3: Pop(1)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e5: Stack[-1] = (bool) 1
0x2e6: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2e7: PushEmpty(object, object)
0x2e8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ea: Call2 0x1511

0x2eb: Pop(2)
0x2ec: PushEmpty(string)
0x2ed: Stack[-1] = "Neutral"
0x2ee: Call2 0x398

0x2ef: Pop(1)
0x2f0: Push((int) 508737)
0x2f1: @@ SetMessage(Stack[-1])
0x2f2: Pop(1)
0x2f3: @@ ClearReplies()
0x2f4: Pop(0)
0x2f5: Push((int) 508777)
0x2f6: Push((int) 9633)
0x2f7: Push((int) 9624)
0x2f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f9: Pop(3)
0x2fa: Push((int) 508781)
0x2fb: Push((int) 9629)
0x2fc: Push((int) 9628)
0x2fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fe: Pop(3)
0x2ff: GOTO 0x37a

0x300: PushEmpty(bool)
0x301: Stack[-1] = (bool) 0
0x302: PushEmpty(bool)
0x303: Stack[-1] = (bool) 0
0x304: PushEmpty(bool, object)
0x305: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x306: Call2 0x159b

0x307: Pop(1)
0x308: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x309: PushEmpty(bool, object)
0x30a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30b: Call2 0x158f

0x30c: Pop(1)
0x30d: Pop(1); Push((bool) Stack[-1] == 0)
0x30e: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30f: Stack[-1] = (bool) 1
0x310: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x311: PushEmpty(bool, object)
0x312: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x313: Call2 0x152f

0x314: Pop(1)
0x315: Pop(1); Push((bool) Stack[-1] == 0)
0x316: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x317: Stack[-1] = (bool) 1
0x318: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x319: PushEmpty(string)
0x31a: Stack[-1] = "Neutral"
0x31b: Call2 0x398

0x31c: Pop(1)
0x31d: Push((int) 536148)
0x31e: @@ SetMessage(Stack[-1])
0x31f: Pop(1)
0x320: @@ ClearReplies()
0x321: Pop(0)
0x322: Push((int) 536149)
0x323: Push((int) 37916)
0x324: Push((int) 37914)
0x325: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x326: Pop(3)
0x327: Push((int) 536150)
0x328: Push((int) 37916)
0x329: Push((int) 37915)
0x32a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32b: Pop(3)
0x32c: GOTO 0x37a

0x32d: PushEmpty(bool)
0x32e: Stack[-1] = (bool) 0
0x32f: PushEmpty(bool, object)
0x330: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x331: Call2 0x159b

0x332: Pop(1)
0x333: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x334: PushEmpty(bool, object)
0x335: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x336: Call2 0x158f

0x337: Pop(1)
0x338: Pop(1); Push((bool) Stack[-1] == 0)
0x339: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x33a: Stack[-1] = (bool) 1
0x33b: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x33c: PushEmpty(string)
0x33d: Stack[-1] = "Neutral"
0x33e: Call2 0x398

0x33f: Pop(1)
0x340: Push((int) 509078)
0x341: @@ SetMessage(Stack[-1])
0x342: Pop(1)
0x343: @@ ClearReplies()
0x344: Pop(0)
0x345: Push((int) 509079)
0x346: Push((int) 9958)
0x347: Push((int) 9957)
0x348: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x349: Pop(3)
0x34a: GOTO 0x37a

0x34b: PushEmpty(string)
0x34c: Stack[-1] = "Neutral"
0x34d: Call2 0x398

0x34e: Pop(1)
0x34f: Push((int) 508778)
0x350: @@ SetMessage(Stack[-1])
0x351: Pop(1)
0x352: @@ ClearReplies()
0x353: Pop(0)
0x354: PushEmpty(bool, object)
0x355: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x356: Call2 0x155f

0x357: Pop(1)
0x358: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x359: Push((int) 511141)
0x35a: Push((int) 12331)
0x35b: Push((int) 12330)
0x35c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35d: Pop(3)
0x35e: PushEmpty(bool, object)
0x35f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x360: Call2 0x1577

0x361: Pop(1)
0x362: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x363: Push((int) 508779)
0x364: Push((int) 9681)
0x365: Push((int) 9626)
0x366: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x367: Pop(3)
0x368: PushEmpty(bool, object)
0x369: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36a: Call2 0x1583

0x36b: Pop(1)
0x36c: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x36d: Push((int) 508780)
0x36e: Push((int) 9669)
0x36f: Push((int) 9627)
0x370: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x371: Pop(3)
0x372: Push((int) 511140)
0x373: Push((int) -1)
0x374: Push((int) 12329)
0x375: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x376: Pop(3)
0x377: GOTO 0x37a

0x378: Return(); Pop(0)

0x379: GOTO 0x2d7

0x37a: PushEmpty(bool)
0x37b: Call2 0x13b0

0x37c: Pop(0)
0x37d: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x37e: @ lshWaitForAnimEnd()
0x37f: Pop(0)
0x380: Push( Stack[3 + Tasks[-1].StackPointer] )
0x381: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x382: GOTO 0x388

0x383: PushEmpty(string)
0x384: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x385: Call2 0x12d6

0x386: Pop(1)
0x387: GOTO 0x37e

0x388: GOTO 0x397

0x389: Push("all")
0x38a: Push("idle")
0x38b: @ PlayAnimation(Stack[-2], Stack[-1])
0x38c: Pop(2)
0x38d: @ WaitForAnimEnd()
0x38e: Pop(0)
0x38f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x390: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x391: GOTO 0x397

0x392: Push("all")
0x393: Push("idle")
0x394: @ PlayAnimation(Stack[-2], Stack[-1])
0x395: Pop(2)
0x396: GOTO 0x38d

0x397: Return(); Pop(0)

0x398: PushEmpty()
0x399: PushEmpty(bool)
0x39a: Call2 0x13b0

0x39b: Pop(0)
0x39c: Pop(1); Push((bool) Stack[-1] == 0)
0x39d: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39e: Return(); Pop(0)

0x39f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x3a1: Return(); Pop(0)

0x3a2: PushEmpty(string, bool)
0x3a3: Stack[-2] = Stack[-3]
0x3a4: Push("")
0x3a5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3a6: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a7: Stack[-1] = (bool) 0
0x3a8: GOTO 0x3aa

0x3a9: Stack[-1] = (bool) 1
0x3aa: Call2 0x12e6

0x3ab: Pop(2)
0x3ac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3ad: Return(); Pop(0)

0x3ae: PushEmpty()
0x3af: Push((int) 1)
0x3b0: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x3b1: PushEmpty()
0x3b2: Call2 0x1304

0x3b3: Pop(0)
0x3b4: Push((int) 9647)
0x3b5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b6: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3b7: PushEmpty(object, object)
0x3b8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ba: Call2 0x141e

0x3bb: Pop(2)
0x3bc: PushEmpty(object, object)
0x3bd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3be: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3bf: Call2 0x1404

0x3c0: Pop(2)
0x3c1: PushEmpty(object, object)
0x3c2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3c3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3c4: Call2 0x1430

0x3c5: Pop(2)
0x3c6: Push((int) 9649)
0x3c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3c9: PushEmpty(object, object)
0x3ca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3cb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3cc: Call2 0x141e

0x3cd: Pop(2)
0x3ce: Push((int) 9639)
0x3cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3d1: PushEmpty(object, object)
0x3d2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d4: Call2 0x141e

0x3d5: Pop(2)
0x3d6: PushEmpty(object, object)
0x3d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d9: Call2 0x1404

0x3da: Pop(2)
0x3db: PushEmpty(object, object)
0x3dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3de: Call2 0x1430

0x3df: Pop(2)
0x3e0: Push((int) 9594)
0x3e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e2: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3e3: PushEmpty(object, object)
0x3e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e6: Call2 0x141e

0x3e7: Pop(2)
0x3e8: PushEmpty(object, object)
0x3e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3eb: Call2 0x1404

0x3ec: Pop(2)
0x3ed: PushEmpty(object, object)
0x3ee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3ef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3f0: Call2 0x1430

0x3f1: Pop(2)
0x3f2: Push((int) 9963)
0x3f3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x3f5: PushEmpty(object, object)
0x3f6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3f7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3f8: Call2 0x1450

0x3f9: Pop(2)
0x3fa: PushEmpty(object, object)
0x3fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3fd: Call2 0x13b8

0x3fe: Pop(2)
0x3ff: PushEmpty(object, object)
0x400: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x401: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x402: Call2 0x13fe

0x403: Pop(2)
0x404: PushEmpty(object, object)
0x405: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x406: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x407: Call2 0x13ed

0x408: Pop(2)
0x409: Push((int) 12332)
0x40a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x40b: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x40c: PushEmpty(object, object)
0x40d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x40e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x40f: Call2 0x1404

0x410: Pop(2)
0x411: PushEmpty(object, object)
0x412: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x413: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x414: Call2 0x1430

0x415: Pop(2)
0x416: Push((int) 9684)
0x417: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x418: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x419: PushEmpty(object, object)
0x41a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x41b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x41c: Call2 0x1424

0x41d: Pop(2)
0x41e: Push((int) 9627)
0x41f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x420: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x421: PushEmpty(object, object)
0x422: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x423: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x424: Call2 0x145a

0x425: Pop(2)
0x426: Push((int) 9672)
0x427: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x428: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x429: PushEmpty(object, object)
0x42a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x42b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x42c: Call2 0x142a

0x42d: Pop(2)
0x42e: Push((int) 9678)
0x42f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x430: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x431: PushEmpty(object, object)
0x432: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x433: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x434: Call2 0x142a

0x435: Pop(2)
0x436: Push((int) 9679)
0x437: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x438: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x439: PushEmpty(object, object)
0x43a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x43b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x43c: Call2 0x142a

0x43d: Pop(2)
0x43e: Push((int) 9667)
0x43f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x441: PushEmpty(object, object)
0x442: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x443: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x444: Call2 0x142a

0x445: Pop(2)
0x446: Push((int) 9574)
0x447: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x448: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x449: PushEmpty(bool)
0x44a: Stack[-1] = (bool) 0
0x44b: PushEmpty(bool, object)
0x44c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x44d: Call2 0x155f

0x44e: Pop(1)
0x44f: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x450: PushEmpty(bool, object)
0x451: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x452: Call2 0x156b

0x453: Pop(1)
0x454: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x455: Stack[-1] = (bool) 1
0x456: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x457: PushEmpty(object, object)
0x458: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x459: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x45a: Call2 0x1511

0x45b: Pop(2)
0x45c: PushEmpty(string)
0x45d: Stack[-1] = "Neutral"
0x45e: Call2 0x398

0x45f: Pop(1)
0x460: Push((int) 508737)
0x461: @@ SetMessage(Stack[-1])
0x462: Pop(1)
0x463: @@ ClearReplies()
0x464: Pop(0)
0x465: Push((int) 508777)
0x466: Push((int) 9633)
0x467: Push((int) 9624)
0x468: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x469: Pop(3)
0x46a: Push((int) 508781)
0x46b: Push((int) 9629)
0x46c: Push((int) 9628)
0x46d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46e: Pop(3)
0x46f: Return(); Pop(0)

0x470: PushEmpty(bool)
0x471: Stack[-1] = (bool) 0
0x472: PushEmpty(bool)
0x473: Stack[-1] = (bool) 0
0x474: PushEmpty(bool, object)
0x475: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x476: Call2 0x159b

0x477: Pop(1)
0x478: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x479: PushEmpty(bool, object)
0x47a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47b: Call2 0x158f

0x47c: Pop(1)
0x47d: Pop(1); Push((bool) Stack[-1] == 0)
0x47e: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47f: Stack[-1] = (bool) 1
0x480: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x481: PushEmpty(bool, object)
0x482: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x483: Call2 0x152f

0x484: Pop(1)
0x485: Pop(1); Push((bool) Stack[-1] == 0)
0x486: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x487: Stack[-1] = (bool) 1
0x488: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x489: PushEmpty(string)
0x48a: Stack[-1] = "Neutral"
0x48b: Call2 0x398

0x48c: Pop(1)
0x48d: Push((int) 536148)
0x48e: @@ SetMessage(Stack[-1])
0x48f: Pop(1)
0x490: @@ ClearReplies()
0x491: Pop(0)
0x492: Push((int) 536149)
0x493: Push((int) 37916)
0x494: Push((int) 37914)
0x495: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x496: Pop(3)
0x497: Push((int) 536150)
0x498: Push((int) 37916)
0x499: Push((int) 37915)
0x49a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49b: Pop(3)
0x49c: Return(); Pop(0)

0x49d: PushEmpty(bool)
0x49e: Stack[-1] = (bool) 0
0x49f: PushEmpty(bool, object)
0x4a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a1: Call2 0x159b

0x4a2: Pop(1)
0x4a3: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a4: PushEmpty(bool, object)
0x4a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a6: Call2 0x158f

0x4a7: Pop(1)
0x4a8: Pop(1); Push((bool) Stack[-1] == 0)
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4aa: Stack[-1] = (bool) 1
0x4ab: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4ac: PushEmpty(string)
0x4ad: Stack[-1] = "Neutral"
0x4ae: Call2 0x398

0x4af: Pop(1)
0x4b0: Push((int) 509078)
0x4b1: @@ SetMessage(Stack[-1])
0x4b2: Pop(1)
0x4b3: @@ ClearReplies()
0x4b4: Pop(0)
0x4b5: Push((int) 509079)
0x4b6: Push((int) 9958)
0x4b7: Push((int) 9957)
0x4b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b9: Pop(3)
0x4ba: Return(); Pop(0)

0x4bb: PushEmpty(string)
0x4bc: Stack[-1] = "Neutral"
0x4bd: Call2 0x398

0x4be: Pop(1)
0x4bf: Push((int) 508778)
0x4c0: @@ SetMessage(Stack[-1])
0x4c1: Pop(1)
0x4c2: @@ ClearReplies()
0x4c3: Pop(0)
0x4c4: PushEmpty(bool, object)
0x4c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c6: Call2 0x155f

0x4c7: Pop(1)
0x4c8: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4c9: Push((int) 511141)
0x4ca: Push((int) 12331)
0x4cb: Push((int) 12330)
0x4cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cd: Pop(3)
0x4ce: PushEmpty(bool, object)
0x4cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d0: Call2 0x1577

0x4d1: Pop(1)
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d3: Push((int) 508779)
0x4d4: Push((int) 9681)
0x4d5: Push((int) 9626)
0x4d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d7: Pop(3)
0x4d8: PushEmpty(bool, object)
0x4d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4da: Call2 0x1583

0x4db: Pop(1)
0x4dc: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4dd: Push((int) 508780)
0x4de: Push((int) 9669)
0x4df: Push((int) 9627)
0x4e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e1: Pop(3)
0x4e2: Push((int) 511140)
0x4e3: Push((int) -1)
0x4e4: Push((int) 12329)
0x4e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e6: Pop(3)
0x4e7: Return(); Pop(0)

0x4e8: Push((int) 9651)
0x4e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ea: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4eb: Push((int) 9640)
0x4ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ed: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4ee: PushEmpty(string)
0x4ef: Stack[-1] = "Rage"
0x4f0: Call2 0x398

0x4f1: Pop(1)
0x4f2: Push((int) 508793)
0x4f3: @@ SetMessage(Stack[-1])
0x4f4: Pop(1)
0x4f5: @@ ClearReplies()
0x4f6: Pop(0)
0x4f7: Push((int) 508795)
0x4f8: Push((int) 9643)
0x4f9: Push((int) 9642)
0x4fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fb: Pop(3)
0x4fc: Push((int) 508794)
0x4fd: Push((int) -1)
0x4fe: Push((int) 9641)
0x4ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x500: Pop(3)
0x501: Return(); Pop(0)

0x502: Push((int) 9643)
0x503: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x504: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x505: PushEmpty(string)
0x506: Stack[-1] = "Rage"
0x507: Call2 0x398

0x508: Pop(1)
0x509: Push((int) 508796)
0x50a: @@ SetMessage(Stack[-1])
0x50b: Pop(1)
0x50c: @@ ClearReplies()
0x50d: Pop(0)
0x50e: Push((int) 508797)
0x50f: Push((int) -1)
0x510: Push((int) 9644)
0x511: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x512: Pop(3)
0x513: Return(); Pop(0)

0x514: Push((int) 9669)
0x515: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x516: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x517: PushEmpty(string)
0x518: Stack[-1] = "Confusion"
0x519: Call2 0x398

0x51a: Pop(1)
0x51b: Push((int) 508818)
0x51c: @@ SetMessage(Stack[-1])
0x51d: Pop(1)
0x51e: @@ ClearReplies()
0x51f: Pop(0)
0x520: Push((int) 508819)
0x521: Push((int) 9666)
0x522: Push((int) 9670)
0x523: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x524: Pop(3)
0x525: PushEmpty(bool, object)
0x526: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x527: Call2 0x158f

0x528: Pop(1)
0x529: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x52a: Push((int) 536147)
0x52b: Push((int) 9616)
0x52c: Push((int) 37912)
0x52d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52e: Pop(3)
0x52f: Return(); Pop(0)

0x530: Push((int) 9616)
0x531: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x532: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x533: PushEmpty(string)
0x534: Stack[-1] = "Warning"
0x535: Call2 0x398

0x536: Pop(1)
0x537: Push((int) 508769)
0x538: @@ SetMessage(Stack[-1])
0x539: Pop(1)
0x53a: @@ ClearReplies()
0x53b: Pop(0)
0x53c: Push((int) 508770)
0x53d: Push((int) 9621)
0x53e: Push((int) 9617)
0x53f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x540: Pop(3)
0x541: Push((int) 508771)
0x542: Push((int) 9619)
0x543: Push((int) 9618)
0x544: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x545: Pop(3)
0x546: Return(); Pop(0)

0x547: Push((int) 9619)
0x548: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x549: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x54a: PushEmpty(string)
0x54b: Stack[-1] = "Neutral"
0x54c: Call2 0x398

0x54d: Pop(1)
0x54e: Push((int) 508772)
0x54f: @@ SetMessage(Stack[-1])
0x550: Pop(1)
0x551: @@ ClearReplies()
0x552: Pop(0)
0x553: Push((int) 508773)
0x554: Push((int) 9621)
0x555: Push((int) 9620)
0x556: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x557: Pop(3)
0x558: Push((int) 508814)
0x559: Push((int) -1)
0x55a: Push((int) 9663)
0x55b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55c: Pop(3)
0x55d: Return(); Pop(0)

0x55e: Push((int) 9621)
0x55f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x560: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x561: PushEmpty(string)
0x562: Stack[-1] = "Warning"
0x563: Call2 0x398

0x564: Pop(1)
0x565: Push((int) 508774)
0x566: @@ SetMessage(Stack[-1])
0x567: Pop(1)
0x568: @@ ClearReplies()
0x569: Pop(0)
0x56a: Push((int) 508775)
0x56b: Push((int) 9623)
0x56c: Push((int) 9622)
0x56d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56e: Pop(3)
0x56f: Push((int) 510448)
0x570: Push((int) 9623)
0x571: Push((int) 11518)
0x572: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x573: Pop(3)
0x574: Return(); Pop(0)

0x575: Push((int) 9623)
0x576: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x577: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x578: PushEmpty(string)
0x579: Stack[-1] = "Warning"
0x57a: Call2 0x398

0x57b: Pop(1)
0x57c: Push((int) 508776)
0x57d: @@ SetMessage(Stack[-1])
0x57e: Pop(1)
0x57f: @@ ClearReplies()
0x580: Pop(0)
0x581: Push((int) 508739)
0x582: Push((int) 9577)
0x583: Push((int) 9576)
0x584: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x585: Pop(3)
0x586: Push((int) 508764)
0x587: Push((int) 9577)
0x588: Push((int) 9608)
0x589: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58a: Pop(3)
0x58b: Push((int) 508765)
0x58c: Push((int) 9611)
0x58d: Push((int) 9610)
0x58e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58f: Pop(3)
0x590: Return(); Pop(0)

0x591: Push((int) 9611)
0x592: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x593: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x594: PushEmpty(string)
0x595: Stack[-1] = "Neutral"
0x596: Call2 0x398

0x597: Pop(1)
0x598: Push((int) 508766)
0x599: @@ SetMessage(Stack[-1])
0x59a: Pop(1)
0x59b: @@ ClearReplies()
0x59c: Pop(0)
0x59d: Push((int) 508767)
0x59e: Push((int) 9587)
0x59f: Push((int) 9612)
0x5a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a1: Pop(3)
0x5a2: Push((int) 508768)
0x5a3: Push((int) 9587)
0x5a4: Push((int) 9614)
0x5a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a6: Pop(3)
0x5a7: Return(); Pop(0)

0x5a8: Push((int) 9577)
0x5a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5aa: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5ab: PushEmpty(string)
0x5ac: Stack[-1] = "Warning"
0x5ad: Call2 0x398

0x5ae: Pop(1)
0x5af: Push((int) 508740)
0x5b0: @@ SetMessage(Stack[-1])
0x5b1: Pop(1)
0x5b2: @@ ClearReplies()
0x5b3: Pop(0)
0x5b4: Push((int) 508746)
0x5b5: Push((int) 9587)
0x5b6: Push((int) 9586)
0x5b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b8: Pop(3)
0x5b9: Return(); Pop(0)

0x5ba: Push((int) 9587)
0x5bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5bd: PushEmpty(string)
0x5be: Stack[-1] = "Warning"
0x5bf: Call2 0x398

0x5c0: Pop(1)
0x5c1: Push((int) 508747)
0x5c2: @@ SetMessage(Stack[-1])
0x5c3: Pop(1)
0x5c4: @@ ClearReplies()
0x5c5: Pop(0)
0x5c6: Push((int) 508748)
0x5c7: Push((int) 9589)
0x5c8: Push((int) 9588)
0x5c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ca: Pop(3)
0x5cb: Push((int) 508762)
0x5cc: Push((int) -1)
0x5cd: Push((int) 9604)
0x5ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cf: Pop(3)
0x5d0: Push((int) 508763)
0x5d1: Push((int) 9589)
0x5d2: Push((int) 9606)
0x5d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d4: Pop(3)
0x5d5: Return(); Pop(0)

0x5d6: Push((int) 9589)
0x5d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d8: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5d9: PushEmpty(string)
0x5da: Stack[-1] = "Warning"
0x5db: Call2 0x398

0x5dc: Pop(1)
0x5dd: Push((int) 508749)
0x5de: @@ SetMessage(Stack[-1])
0x5df: Pop(1)
0x5e0: @@ ClearReplies()
0x5e1: Pop(0)
0x5e2: Push((int) 508761)
0x5e3: Push((int) -1)
0x5e4: Push((int) 9603)
0x5e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e6: Pop(3)
0x5e7: Push((int) 536153)
0x5e8: Push((int) -1)
0x5e9: Push((int) 37918)
0x5ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5eb: Pop(3)
0x5ec: Return(); Pop(0)

0x5ed: Push((int) 9666)
0x5ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ef: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x5f0: PushEmpty(string)
0x5f1: Stack[-1] = "Confusion"
0x5f2: Call2 0x398

0x5f3: Pop(1)
0x5f4: Push((int) 508815)
0x5f5: @@ SetMessage(Stack[-1])
0x5f6: Pop(1)
0x5f7: @@ ClearReplies()
0x5f8: Pop(0)
0x5f9: Push((int) 508817)
0x5fa: Push((int) 9671)
0x5fb: Push((int) 9668)
0x5fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fd: Pop(3)
0x5fe: Push((int) 508816)
0x5ff: Push((int) -1)
0x600: Push((int) 9667)
0x601: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x602: Pop(3)
0x603: Return(); Pop(0)

0x604: Push((int) 9671)
0x605: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x606: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x607: PushEmpty(string)
0x608: Stack[-1] = "Confusion"
0x609: Call2 0x398

0x60a: Pop(1)
0x60b: Push((int) 508820)
0x60c: @@ SetMessage(Stack[-1])
0x60d: Pop(1)
0x60e: @@ ClearReplies()
0x60f: Pop(0)
0x610: Push((int) 508821)
0x611: Push((int) -1)
0x612: Push((int) 9672)
0x613: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x614: Pop(3)
0x615: Push((int) 508822)
0x616: Push((int) 9674)
0x617: Push((int) 9673)
0x618: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x619: Pop(3)
0x61a: Return(); Pop(0)

0x61b: Push((int) 9674)
0x61c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61d: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x61e: PushEmpty(string)
0x61f: Stack[-1] = "Warning"
0x620: Call2 0x398

0x621: Pop(1)
0x622: Push((int) 508823)
0x623: @@ SetMessage(Stack[-1])
0x624: Pop(1)
0x625: @@ ClearReplies()
0x626: Pop(0)
0x627: Push((int) 508824)
0x628: Push((int) 9677)
0x629: Push((int) 9675)
0x62a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62b: Pop(3)
0x62c: Return(); Pop(0)

0x62d: Push((int) 9677)
0x62e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62f: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x630: PushEmpty(string)
0x631: Stack[-1] = "Warning"
0x632: Call2 0x398

0x633: Pop(1)
0x634: Push((int) 508826)
0x635: @@ SetMessage(Stack[-1])
0x636: Pop(1)
0x637: @@ ClearReplies()
0x638: Pop(0)
0x639: Push((int) 508827)
0x63a: Push((int) -1)
0x63b: Push((int) 9678)
0x63c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63d: Pop(3)
0x63e: Push((int) 508828)
0x63f: Push((int) -1)
0x640: Push((int) 9679)
0x641: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x642: Pop(3)
0x643: Return(); Pop(0)

0x644: Push((int) 9681)
0x645: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x646: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x647: PushEmpty(string)
0x648: Stack[-1] = "Rage"
0x649: Call2 0x398

0x64a: Pop(1)
0x64b: Push((int) 508829)
0x64c: @@ SetMessage(Stack[-1])
0x64d: Pop(1)
0x64e: @@ ClearReplies()
0x64f: Pop(0)
0x650: Push((int) 508830)
0x651: Push((int) 9683)
0x652: Push((int) 9682)
0x653: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x654: Pop(3)
0x655: Return(); Pop(0)

0x656: Push((int) 9683)
0x657: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x658: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x659: PushEmpty(string)
0x65a: Stack[-1] = "Warning"
0x65b: Call2 0x398

0x65c: Pop(1)
0x65d: Push((int) 508831)
0x65e: @@ SetMessage(Stack[-1])
0x65f: Pop(1)
0x660: @@ ClearReplies()
0x661: Pop(0)
0x662: Push((int) 508832)
0x663: Push((int) -1)
0x664: Push((int) 9684)
0x665: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x666: Pop(3)
0x667: Return(); Pop(0)

0x668: Push((int) 12331)
0x669: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x66a: IF (Stack[-1] == 0) GOTO 0x67a; Pop(1)

0x66b: PushEmpty(string)
0x66c: Stack[-1] = "Neutral"
0x66d: Call2 0x398

0x66e: Pop(1)
0x66f: Push((int) 511142)
0x670: @@ SetMessage(Stack[-1])
0x671: Pop(1)
0x672: @@ ClearReplies()
0x673: Pop(0)
0x674: Push((int) 511143)
0x675: Push((int) -1)
0x676: Push((int) 12332)
0x677: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x678: Pop(3)
0x679: Return(); Pop(0)

0x67a: Push((int) 9958)
0x67b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x67c: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x67d: PushEmpty(string)
0x67e: Stack[-1] = "Rage"
0x67f: Call2 0x398

0x680: Pop(1)
0x681: Push((int) 509080)
0x682: @@ SetMessage(Stack[-1])
0x683: Pop(1)
0x684: @@ ClearReplies()
0x685: Pop(0)
0x686: Push((int) 509081)
0x687: Push((int) 11530)
0x688: Push((int) 9959)
0x689: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68a: Pop(3)
0x68b: Return(); Pop(0)

0x68c: Push((int) 10799)
0x68d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x68e: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x68f: Push((int) 10801)
0x690: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x691: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x692: PushEmpty(string)
0x693: Stack[-1] = "Confusion"
0x694: Call2 0x398

0x695: Pop(1)
0x696: Push((int) 509807)
0x697: @@ SetMessage(Stack[-1])
0x698: Pop(1)
0x699: @@ ClearReplies()
0x69a: Pop(0)
0x69b: Push((int) 509808)
0x69c: Push((int) 10803)
0x69d: Push((int) 10802)
0x69e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69f: Pop(3)
0x6a0: Push((int) 509821)
0x6a1: Push((int) 10803)
0x6a2: Push((int) 10816)
0x6a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a4: Pop(3)
0x6a5: Return(); Pop(0)

0x6a6: Push((int) 10803)
0x6a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a8: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6a9: PushEmpty(string)
0x6aa: Stack[-1] = "Confusion"
0x6ab: Call2 0x398

0x6ac: Pop(1)
0x6ad: Push((int) 509809)
0x6ae: @@ SetMessage(Stack[-1])
0x6af: Pop(1)
0x6b0: @@ ClearReplies()
0x6b1: Pop(0)
0x6b2: Push((int) 509810)
0x6b3: Push((int) 10805)
0x6b4: Push((int) 10804)
0x6b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b6: Pop(3)
0x6b7: Push((int) 509814)
0x6b8: Push((int) 10809)
0x6b9: Push((int) 10808)
0x6ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bb: Pop(3)
0x6bc: Push((int) 509820)
0x6bd: Push((int) 10809)
0x6be: Push((int) 10814)
0x6bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c0: Pop(3)
0x6c1: Return(); Pop(0)

0x6c2: Push((int) 10809)
0x6c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c4: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6c5: PushEmpty(string)
0x6c6: Stack[-1] = "Confusion"
0x6c7: Call2 0x398

0x6c8: Pop(1)
0x6c9: Push((int) 509815)
0x6ca: @@ SetMessage(Stack[-1])
0x6cb: Pop(1)
0x6cc: @@ ClearReplies()
0x6cd: Pop(0)
0x6ce: Push((int) 509816)
0x6cf: Push((int) 10811)
0x6d0: Push((int) 10810)
0x6d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d2: Pop(3)
0x6d3: Return(); Pop(0)

0x6d4: Push((int) 10811)
0x6d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d6: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6d7: PushEmpty(string)
0x6d8: Stack[-1] = "Confusion"
0x6d9: Call2 0x398

0x6da: Pop(1)
0x6db: Push((int) 509817)
0x6dc: @@ SetMessage(Stack[-1])
0x6dd: Pop(1)
0x6de: @@ ClearReplies()
0x6df: Pop(0)
0x6e0: Push((int) 509818)
0x6e1: Push((int) 11530)
0x6e2: Push((int) 10812)
0x6e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e4: Pop(3)
0x6e5: Push((int) 509819)
0x6e6: Push((int) 11530)
0x6e7: Push((int) 10813)
0x6e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e9: Pop(3)
0x6ea: Return(); Pop(0)

0x6eb: Push((int) 10805)
0x6ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ed: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x6ee: PushEmpty(string)
0x6ef: Stack[-1] = "Confusion"
0x6f0: Call2 0x398

0x6f1: Pop(1)
0x6f2: Push((int) 509811)
0x6f3: @@ SetMessage(Stack[-1])
0x6f4: Pop(1)
0x6f5: @@ ClearReplies()
0x6f6: Pop(0)
0x6f7: Push((int) 509812)
0x6f8: Push((int) 11530)
0x6f9: Push((int) 10806)
0x6fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fb: Pop(3)
0x6fc: Push((int) 509813)
0x6fd: Push((int) 11530)
0x6fe: Push((int) 10807)
0x6ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x700: Pop(3)
0x701: Return(); Pop(0)

0x702: Push((int) 11530)
0x703: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x704: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x705: PushEmpty(string)
0x706: Stack[-1] = "Neutral"
0x707: Call2 0x398

0x708: Pop(1)
0x709: Push((int) 510457)
0x70a: @@ SetMessage(Stack[-1])
0x70b: Pop(1)
0x70c: @@ ClearReplies()
0x70d: Pop(0)
0x70e: Push((int) 510458)
0x70f: Push((int) 11532)
0x710: Push((int) 11531)
0x711: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x712: Pop(3)
0x713: Return(); Pop(0)

0x714: Push((int) 11532)
0x715: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x716: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x717: PushEmpty(string)
0x718: Stack[-1] = "Neutral"
0x719: Call2 0x398

0x71a: Pop(1)
0x71b: Push((int) 510459)
0x71c: @@ SetMessage(Stack[-1])
0x71d: Pop(1)
0x71e: @@ ClearReplies()
0x71f: Pop(0)
0x720: Push((int) 510460)
0x721: Push((int) 11534)
0x722: Push((int) 11533)
0x723: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x724: Pop(3)
0x725: Return(); Pop(0)

0x726: Push((int) 11534)
0x727: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x728: IF (Stack[-1] == 0) GOTO 0x738; Pop(1)

0x729: PushEmpty(string)
0x72a: Stack[-1] = "Neutral"
0x72b: Call2 0x398

0x72c: Pop(1)
0x72d: Push((int) 510461)
0x72e: @@ SetMessage(Stack[-1])
0x72f: Pop(1)
0x730: @@ ClearReplies()
0x731: Pop(0)
0x732: Push((int) 510462)
0x733: Push((int) 9960)
0x734: Push((int) 11535)
0x735: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x736: Pop(3)
0x737: Return(); Pop(0)

0x738: Push((int) 9960)
0x739: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73a: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x73b: PushEmpty(string)
0x73c: Stack[-1] = "Neutral"
0x73d: Call2 0x398

0x73e: Pop(1)
0x73f: Push((int) 509082)
0x740: @@ SetMessage(Stack[-1])
0x741: Pop(1)
0x742: @@ ClearReplies()
0x743: Pop(0)
0x744: Push((int) 509083)
0x745: Push((int) 9962)
0x746: Push((int) 9961)
0x747: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x748: Pop(3)
0x749: Return(); Pop(0)

0x74a: Push((int) 9962)
0x74b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x74c: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x74d: PushEmpty(string)
0x74e: Stack[-1] = "Neutral"
0x74f: Call2 0x398

0x750: Pop(1)
0x751: Push((int) 509084)
0x752: @@ SetMessage(Stack[-1])
0x753: Pop(1)
0x754: @@ ClearReplies()
0x755: Pop(0)
0x756: Push((int) 509085)
0x757: Push((int) -1)
0x758: Push((int) 9963)
0x759: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75a: Pop(3)
0x75b: Return(); Pop(0)

0x75c: Push((int) 37916)
0x75d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x75e: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x75f: PushEmpty(string)
0x760: Stack[-1] = "Neutral"
0x761: Call2 0x398

0x762: Pop(1)
0x763: Push((int) 536151)
0x764: @@ SetMessage(Stack[-1])
0x765: Pop(1)
0x766: @@ ClearReplies()
0x767: Pop(0)
0x768: Push((int) 536152)
0x769: Push((int) -1)
0x76a: Push((int) 37917)
0x76b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76c: Pop(3)
0x76d: Return(); Pop(0)

0x76e: Push((int) 9629)
0x76f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x770: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x771: PushEmpty(object, object)
0x772: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x773: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x774: Call2 0x145a

0x775: Pop(2)
0x776: PushEmpty(string)
0x777: Stack[-1] = "Confusion"
0x778: Call2 0x398

0x779: Pop(1)
0x77a: Push((int) 508782)
0x77b: @@ SetMessage(Stack[-1])
0x77c: Pop(1)
0x77d: @@ ClearReplies()
0x77e: Pop(0)
0x77f: Push((int) 508783)
0x780: Push((int) 9631)
0x781: Push((int) 9630)
0x782: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x783: Pop(3)
0x784: Push((int) 510447)
0x785: Push((int) 9631)
0x786: Push((int) 11516)
0x787: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x788: Pop(3)
0x789: Return(); Pop(0)

0x78a: Push((int) 9631)
0x78b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x78c: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x78d: PushEmpty(string)
0x78e: Stack[-1] = "Confusion"
0x78f: Call2 0x398

0x790: Pop(1)
0x791: Push((int) 508784)
0x792: @@ SetMessage(Stack[-1])
0x793: Pop(1)
0x794: @@ ClearReplies()
0x795: Pop(0)
0x796: Push((int) 508785)
0x797: Push((int) 9591)
0x798: Push((int) 9632)
0x799: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79a: Pop(3)
0x79b: Return(); Pop(0)

0x79c: Push((int) 9633)
0x79d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x79e: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x79f: PushEmpty(string)
0x7a0: Stack[-1] = "Warning"
0x7a1: Call2 0x398

0x7a2: Pop(1)
0x7a3: Push((int) 508786)
0x7a4: @@ SetMessage(Stack[-1])
0x7a5: Pop(1)
0x7a6: @@ ClearReplies()
0x7a7: Pop(0)
0x7a8: Push((int) 508787)
0x7a9: Push((int) 9591)
0x7aa: Push((int) 9634)
0x7ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ac: Pop(3)
0x7ad: Return(); Pop(0)

0x7ae: Push((int) 9591)
0x7af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b0: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7b1: PushEmpty(string)
0x7b2: Stack[-1] = "Warning"
0x7b3: Call2 0x398

0x7b4: Pop(1)
0x7b5: Push((int) 508751)
0x7b6: @@ SetMessage(Stack[-1])
0x7b7: Pop(1)
0x7b8: @@ ClearReplies()
0x7b9: Pop(0)
0x7ba: Push((int) 508752)
0x7bb: Push((int) 9657)
0x7bc: Push((int) 9592)
0x7bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7be: Pop(3)
0x7bf: Push((int) 508757)
0x7c0: Push((int) 9598)
0x7c1: Push((int) 9597)
0x7c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c3: Pop(3)
0x7c4: Return(); Pop(0)

0x7c5: Push((int) 9598)
0x7c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c7: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7c8: PushEmpty(string)
0x7c9: Stack[-1] = "Rage"
0x7ca: Call2 0x398

0x7cb: Pop(1)
0x7cc: Push((int) 508758)
0x7cd: @@ SetMessage(Stack[-1])
0x7ce: Pop(1)
0x7cf: @@ ClearReplies()
0x7d0: Pop(0)
0x7d1: Push((int) 508759)
0x7d2: Push((int) 9593)
0x7d3: Push((int) 9599)
0x7d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d5: Pop(3)
0x7d6: Push((int) 508760)
0x7d7: Push((int) 9593)
0x7d8: Push((int) 9601)
0x7d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7da: Pop(3)
0x7db: Return(); Pop(0)

0x7dc: Push((int) 9657)
0x7dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7de: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7df: PushEmpty(string)
0x7e0: Stack[-1] = "Warning"
0x7e1: Call2 0x398

0x7e2: Pop(1)
0x7e3: Push((int) 508808)
0x7e4: @@ SetMessage(Stack[-1])
0x7e5: Pop(1)
0x7e6: @@ ClearReplies()
0x7e7: Pop(0)
0x7e8: Push((int) 508809)
0x7e9: Push((int) 9659)
0x7ea: Push((int) 9658)
0x7eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ec: Pop(3)
0x7ed: Push((int) 510449)
0x7ee: Push((int) 11521)
0x7ef: Push((int) 11520)
0x7f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f1: Pop(3)
0x7f2: Return(); Pop(0)

0x7f3: Push((int) 11521)
0x7f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f5: IF (Stack[-1] == 0) GOTO 0x805; Pop(1)

0x7f6: PushEmpty(string)
0x7f7: Stack[-1] = "Confusion"
0x7f8: Call2 0x398

0x7f9: Pop(1)
0x7fa: Push((int) 510450)
0x7fb: @@ SetMessage(Stack[-1])
0x7fc: Pop(1)
0x7fd: @@ ClearReplies()
0x7fe: Pop(0)
0x7ff: Push((int) 510451)
0x800: Push((int) 11523)
0x801: Push((int) 11522)
0x802: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x803: Pop(3)
0x804: Return(); Pop(0)

0x805: Push((int) 11523)
0x806: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x807: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x808: PushEmpty(string)
0x809: Stack[-1] = "Warning"
0x80a: Call2 0x398

0x80b: Pop(1)
0x80c: Push((int) 510452)
0x80d: @@ SetMessage(Stack[-1])
0x80e: Pop(1)
0x80f: @@ ClearReplies()
0x810: Pop(0)
0x811: Push((int) 510453)
0x812: Push((int) 9659)
0x813: Push((int) 11524)
0x814: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x815: Pop(3)
0x816: Return(); Pop(0)

0x817: Push((int) 9659)
0x818: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x819: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x81a: PushEmpty(string)
0x81b: Stack[-1] = "Warning"
0x81c: Call2 0x398

0x81d: Pop(1)
0x81e: Push((int) 508810)
0x81f: @@ SetMessage(Stack[-1])
0x820: Pop(1)
0x821: @@ ClearReplies()
0x822: Pop(0)
0x823: Push((int) 508811)
0x824: Push((int) 9661)
0x825: Push((int) 9660)
0x826: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x827: Pop(3)
0x828: Push((int) 510454)
0x829: Push((int) 11527)
0x82a: Push((int) 11526)
0x82b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82c: Pop(3)
0x82d: Return(); Pop(0)

0x82e: Push((int) 11527)
0x82f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x830: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x831: PushEmpty(string)
0x832: Stack[-1] = "Warning"
0x833: Call2 0x398

0x834: Pop(1)
0x835: Push((int) 510455)
0x836: @@ SetMessage(Stack[-1])
0x837: Pop(1)
0x838: @@ ClearReplies()
0x839: Pop(0)
0x83a: Push((int) 510456)
0x83b: Push((int) 9593)
0x83c: Push((int) 11528)
0x83d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83e: Pop(3)
0x83f: Return(); Pop(0)

0x840: Push((int) 9661)
0x841: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x842: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x843: PushEmpty(string)
0x844: Stack[-1] = "Rage"
0x845: Call2 0x398

0x846: Pop(1)
0x847: Push((int) 508812)
0x848: @@ SetMessage(Stack[-1])
0x849: Pop(1)
0x84a: @@ ClearReplies()
0x84b: Pop(0)
0x84c: Push((int) 508813)
0x84d: Push((int) 9593)
0x84e: Push((int) 9662)
0x84f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x850: Pop(3)
0x851: Return(); Pop(0)

0x852: Push((int) 9593)
0x853: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x854: IF (Stack[-1] == 0) GOTO 0x869; Pop(1)

0x855: PushEmpty(string)
0x856: Stack[-1] = "Neutral"
0x857: Call2 0x398

0x858: Pop(1)
0x859: Push((int) 508753)
0x85a: @@ SetMessage(Stack[-1])
0x85b: Pop(1)
0x85c: @@ ClearReplies()
0x85d: Pop(0)
0x85e: Push((int) 508790)
0x85f: Push((int) 9638)
0x860: Push((int) 9637)
0x861: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x862: Pop(3)
0x863: Push((int) 508754)
0x864: Push((int) -1)
0x865: Push((int) 9594)
0x866: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x867: Pop(3)
0x868: Return(); Pop(0)

0x869: Push((int) 9638)
0x86a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x86b: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x86c: PushEmpty(string)
0x86d: Stack[-1] = "Neutral"
0x86e: Call2 0x398

0x86f: Pop(1)
0x870: Push((int) 508791)
0x871: @@ SetMessage(Stack[-1])
0x872: Pop(1)
0x873: @@ ClearReplies()
0x874: Pop(0)
0x875: Push((int) 508798)
0x876: Push((int) 9646)
0x877: Push((int) 9645)
0x878: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x879: Pop(3)
0x87a: Push((int) 508792)
0x87b: Push((int) -1)
0x87c: Push((int) 9639)
0x87d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87e: Pop(3)
0x87f: Return(); Pop(0)

0x880: Push((int) 9646)
0x881: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x882: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x883: PushEmpty(string)
0x884: Stack[-1] = "Neutral"
0x885: Call2 0x398

0x886: Pop(1)
0x887: Push((int) 508799)
0x888: @@ SetMessage(Stack[-1])
0x889: Pop(1)
0x88a: @@ ClearReplies()
0x88b: Pop(0)
0x88c: Push((int) 508800)
0x88d: Push((int) -1)
0x88e: Push((int) 9647)
0x88f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x890: Pop(3)
0x891: Push((int) 508801)
0x892: Push((int) -1)
0x893: Push((int) 9649)
0x894: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x895: Pop(3)
0x896: Return(); Pop(0)

0x897: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x898: PushEmpty(bool)
0x899: Call2 0x13b0

0x89a: Pop(0)
0x89b: IF (Stack[-1] == 0) GOTO 0x89f; Pop(1)

0x89c: @ lshStopAnimation()
0x89d: Pop(0)
0x89e: GOTO 0x8a1

0x89f: @ StopAnimation()
0x8a0: Pop(0)
0x8a1: Return(); Pop(0)

0x8a2: GOTO 0x3af

0x8a3: Return(); Pop(0)

0x8a4: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x8a5: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x8a6: PushEmpty(bool, object, float)
0x8a7: Stack[-2] = Stack[-12]
0x8a8: Stack[-1] = (float) 70.0
0x8a9: Call2 0x11f7

0x8aa: Pop(2)
0x8ab: Pop(1); Push((bool) Stack[-1] == 0)
0x8ac: IF (Stack[-1] == 0) GOTO 0x8af; Pop(1)

0x8ad: Stack[-10] = (int) -2
0x8ae: Return(); Pop(8)

0x8af: @ CreateDialog(Stack[-4])
0x8b0: Pop(0)
0x8b1: PushEmpty(int)
0x8b2: Call2 0x13aa

0x8b3: Pop(0)
0x8b4: @@ SetNPCName(Stack[-1])
0x8b5: Pop(1)
0x8b6: PushEmpty(int)
0x8b7: Call2 0x13a8

0x8b8: Pop(0)
0x8b9: @@ SetNPCDescription(Stack[-1])
0x8ba: Pop(1)
0x8bb: PushEmpty(string)
0x8bc: Call2 0x13ac

0x8bd: Pop(0)
0x8be: @@ SetPhoto(Stack[-1])
0x8bf: Pop(1)
0x8c0: PushEmpty(string)
0x8c1: Call2 0x13ae

0x8c2: Pop(0)
0x8c3: @@ SetPhoto2(Stack[-1])
0x8c4: Pop(1)
0x8c5: PushEmpty(int)
0x8c6: Call2 0x16d1

0x8c7: Pop(0)
0x8c8: @@ SetPlayerName(Stack[-1])
0x8c9: Pop(1)
0x8ca: Stack[-2] = (int) -1
0x8cb: @ IsOverrideActive(Stack[-3])
0x8cc: Pop(0)
0x8cd: Push(Stack[-3])
0x8ce: IF (Stack[-1] == 0) GOTO 0x8d1; Pop(1)

0x8cf: Stack[-10] = (int) -2
0x8d0: Return(); Pop(8)

0x8d1: @ DoDialog(Stack[-4])
0x8d2: Pop(0)
0x8d3: PushEmpty(bool, object)
0x8d4: PushEmpty(object)
0x8d5: Call2 0x130b

0x8d6: Stack[-2] = Stack[-1]
0x8d7: Pop(1)
0x8d8: Call2 0x124c

0x8d9: Pop(2)
0x8da: PushEmpty(object, object)
0x8db: Stack[-2] = Stack[-11]
0x8dc: Stack[-1] = Stack[-6]
0x8dd: Push(-2, 4); TaskCall(7)
0x8de: Call2 0x8f5

0x8df: Pop(-2, 4); TaskReturn
0x8e0: Pop(2)
0x8e1: @@ IsDialogEnd(Stack[-1])
0x8e2: Pop(0)
0x8e3: Pop(0); Push((bool) Stack[-1] == 0)
0x8e4: IF (Stack[-1] == 0) GOTO 0x8ea; Pop(1)

0x8e5: @ sync()
0x8e6: Pop(0)
0x8e7: @@ IsDialogEnd(Stack[-1])
0x8e8: Pop(0)
0x8e9: GOTO 0x8e3

0x8ea: PushEmpty(object)
0x8eb: Stack[-1] = Stack[-10]
0x8ec: Call2 0x123b

0x8ed: Pop(1)
0x8ee: @ StopDialog(Stack[-4])
0x8ef: Pop(0)
0x8f0: @@ GetReturnValue(Stack[-2])
0x8f1: Pop(0)
0x8f2: Stack[-10] = Stack[-2]
0x8f3: Return(); Pop(8)

0x8f4: Stack[-4] = 0
0x8f5: PushEmpty()
0x8f6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x8f7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x8f8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8f9: Push((int) 1)
0x8fa: IF (Stack[-1] == 0) GOTO 0x981; Pop(1)

0x8fb: PushEmpty(bool, object)
0x8fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8fd: Call2 0x15a6

0x8fe: Pop(1)
0x8ff: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x900: PushEmpty(object, object)
0x901: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x902: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x903: Call2 0x1517

0x904: Pop(2)
0x905: PushEmpty(object, object)
0x906: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x907: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x908: Call2 0x1460

0x909: Pop(2)
0x90a: PushEmpty(string)
0x90b: Stack[-1] = "Rage"
0x90c: Call2 0x99f

0x90d: Pop(1)
0x90e: Push((int) 511527)
0x90f: @@ SetMessage(Stack[-1])
0x910: Pop(1)
0x911: @@ ClearReplies()
0x912: Pop(0)
0x913: Push((int) 511528)
0x914: Push((int) 12722)
0x915: Push((int) 12721)
0x916: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x917: Pop(3)
0x918: GOTO 0x981

0x919: PushEmpty(bool)
0x91a: Stack[-1] = (bool) 0
0x91b: PushEmpty(bool)
0x91c: Stack[-1] = (bool) 0
0x91d: PushEmpty(bool, object)
0x91e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91f: Call2 0x15be

0x920: Pop(1)
0x921: IF (Stack[-1] == 0) GOTO 0x928; Pop(1)

0x922: PushEmpty(bool, object)
0x923: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x924: Call2 0x15b2

0x925: Pop(1)
0x926: IF (Stack[-1] == 0) GOTO 0x928; Pop(1)

0x927: Stack[-1] = (bool) 1
0x928: IF (Stack[-1] == 0) GOTO 0x92f; Pop(1)

0x929: PushEmpty(bool, object)
0x92a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x92b: Call2 0x15ca

0x92c: Pop(1)
0x92d: IF (Stack[-1] == 0) GOTO 0x92f; Pop(1)

0x92e: Stack[-1] = (bool) 1
0x92f: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x930: PushEmpty(object, object)
0x931: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x932: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x933: Call2 0x1489

0x934: Pop(2)
0x935: PushEmpty(string)
0x936: Stack[-1] = "Neutral"
0x937: Call2 0x99f

0x938: Pop(1)
0x939: Push((int) 510510)
0x93a: @@ SetMessage(Stack[-1])
0x93b: Pop(1)
0x93c: @@ ClearReplies()
0x93d: Pop(0)
0x93e: Push((int) 510511)
0x93f: Push((int) 11594)
0x940: Push((int) 11593)
0x941: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x942: Pop(3)
0x943: Push((int) 510521)
0x944: Push((int) 11594)
0x945: Push((int) 11604)
0x946: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x947: Pop(3)
0x948: GOTO 0x981

0x949: PushEmpty(string)
0x94a: Stack[-1] = "Neutral"
0x94b: Call2 0x99f

0x94c: Pop(1)
0x94d: Push((int) 510500)
0x94e: @@ SetMessage(Stack[-1])
0x94f: Pop(1)
0x950: @@ ClearReplies()
0x951: Pop(0)
0x952: PushEmpty(bool, object)
0x953: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x954: Call2 0x15f9

0x955: Pop(1)
0x956: IF (Stack[-1] == 0) GOTO 0x95c; Pop(1)

0x957: Push((int) 510509)
0x958: Push((int) 16679)
0x959: Push((int) 11591)
0x95a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95b: Pop(3)
0x95c: PushEmpty(bool)
0x95d: Stack[-1] = (bool) 0
0x95e: PushEmpty(bool, object)
0x95f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x960: Call2 0x15ed

0x961: Pop(1)
0x962: IF (Stack[-1] == 0) GOTO 0x969; Pop(1)

0x963: PushEmpty(bool, object)
0x964: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x965: Call2 0x15f9

0x966: Pop(1)
0x967: IF (Stack[-1] == 0) GOTO 0x969; Pop(1)

0x968: Stack[-1] = (bool) 1
0x969: IF (Stack[-1] == 0) GOTO 0x96f; Pop(1)

0x96a: Push((int) 510501)
0x96b: Push((int) 11584)
0x96c: Push((int) 11583)
0x96d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96e: Pop(3)
0x96f: PushEmpty(bool, object)
0x970: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x971: Call2 0x15e1

0x972: Pop(1)
0x973: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x974: Push((int) 515653)
0x975: Push((int) 16690)
0x976: Push((int) 16689)
0x977: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x978: Pop(3)
0x979: Push((int) 515647)
0x97a: Push((int) -1)
0x97b: Push((int) 16682)
0x97c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97d: Pop(3)
0x97e: GOTO 0x981

0x97f: Return(); Pop(0)

0x980: GOTO 0x8f9

0x981: PushEmpty(bool)
0x982: Call2 0x13b0

0x983: Pop(0)
0x984: IF (Stack[-1] == 0) GOTO 0x990; Pop(1)

0x985: @ lshWaitForAnimEnd()
0x986: Pop(0)
0x987: Push( Stack[3 + Tasks[-1].StackPointer] )
0x988: IF (Stack[-1] == 0) GOTO 0x98a; Pop(1)

0x989: GOTO 0x98f

0x98a: PushEmpty(string)
0x98b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x98c: Call2 0x12d6

0x98d: Pop(1)
0x98e: GOTO 0x985

0x98f: GOTO 0x99e

0x990: Push("all")
0x991: Push("idle")
0x992: @ PlayAnimation(Stack[-2], Stack[-1])
0x993: Pop(2)
0x994: @ WaitForAnimEnd()
0x995: Pop(0)
0x996: Push( Stack[3 + Tasks[-1].StackPointer] )
0x997: IF (Stack[-1] == 0) GOTO 0x999; Pop(1)

0x998: GOTO 0x99e

0x999: Push("all")
0x99a: Push("idle")
0x99b: @ PlayAnimation(Stack[-2], Stack[-1])
0x99c: Pop(2)
0x99d: GOTO 0x994

0x99e: Return(); Pop(0)

0x99f: PushEmpty()
0x9a0: PushEmpty(bool)
0x9a1: Call2 0x13b0

0x9a2: Pop(0)
0x9a3: Pop(1); Push((bool) Stack[-1] == 0)
0x9a4: IF (Stack[-1] == 0) GOTO 0x9a6; Pop(1)

0x9a5: Return(); Pop(0)

0x9a6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9a7: IF (Stack[-1] == 0) GOTO 0x9a9; Pop(1)

0x9a8: Return(); Pop(0)

0x9a9: PushEmpty(string, bool)
0x9aa: Stack[-2] = Stack[-3]
0x9ab: Push("")
0x9ac: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9ad: IF (Stack[-1] == 0) GOTO 0x9b0; Pop(1)

0x9ae: Stack[-1] = (bool) 0
0x9af: GOTO 0x9b1

0x9b0: Stack[-1] = (bool) 1
0x9b1: Call2 0x12e6

0x9b2: Pop(2)
0x9b3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9b4: Return(); Pop(0)

0x9b5: PushEmpty()
0x9b6: Push((int) 1)
0x9b7: IF (Stack[-1] == 0) GOTO 0xd4e; Pop(1)

0x9b8: PushEmpty()
0x9b9: Call2 0x1304

0x9ba: Pop(0)
0x9bb: Push((int) 11563)
0x9bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9bd: IF (Stack[-1] == 0) GOTO 0x9c8; Pop(1)

0x9be: PushEmpty(object, object)
0x9bf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9c1: Call2 0x1466

0x9c2: Pop(2)
0x9c3: PushEmpty(object, object)
0x9c4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9c6: Call2 0x1440

0x9c7: Pop(2)
0x9c8: Push((int) 11566)
0x9c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9ca: IF (Stack[-1] == 0) GOTO 0x9d5; Pop(1)

0x9cb: PushEmpty(object, object)
0x9cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9ce: Call2 0x1466

0x9cf: Pop(2)
0x9d0: PushEmpty(object, object)
0x9d1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9d3: Call2 0x1440

0x9d4: Pop(2)
0x9d5: Push((int) 11569)
0x9d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9d7: IF (Stack[-1] == 0) GOTO 0x9e7; Pop(1)

0x9d8: PushEmpty(object, object)
0x9d9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9db: Call2 0x1460

0x9dc: Pop(2)
0x9dd: PushEmpty(object, object)
0x9de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9e0: Call2 0x1466

0x9e1: Pop(2)
0x9e2: PushEmpty(object, object)
0x9e3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9e5: Call2 0x1440

0x9e6: Pop(2)
0x9e7: Push((int) 11599)
0x9e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9e9: IF (Stack[-1] == 0) GOTO 0x9ef; Pop(1)

0x9ea: PushEmpty(object, object)
0x9eb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9ed: Call2 0x148f

0x9ee: Pop(2)
0x9ef: Push((int) 11600)
0x9f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9f1: IF (Stack[-1] == 0) GOTO 0x9f7; Pop(1)

0x9f2: PushEmpty(object, object)
0x9f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9f5: Call2 0x148f

0x9f6: Pop(2)
0x9f7: Push((int) 11601)
0x9f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9f9: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x9fa: PushEmpty(object, object)
0x9fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9fd: Call2 0x148f

0x9fe: Pop(2)
0x9ff: Push((int) 11583)
0xa00: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa01: IF (Stack[-1] == 0) GOTO 0xa07; Pop(1)

0xa02: PushEmpty(object, object)
0xa03: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa04: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa05: Call2 0x151d

0xa06: Pop(2)
0xa07: Push((int) 11570)
0xa08: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa09: IF (Stack[-1] == 0) GOTO 0xa14; Pop(1)

0xa0a: PushEmpty(object, object)
0xa0b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa0c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa0d: Call2 0x1466

0xa0e: Pop(2)
0xa0f: PushEmpty(object, object)
0xa10: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa11: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa12: Call2 0x1440

0xa13: Pop(2)
0xa14: Push((int) 12720)
0xa15: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa16: IF (Stack[-1] == 0) GOTO 0xa9b; Pop(1)

0xa17: PushEmpty(bool, object)
0xa18: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa19: Call2 0x15a6

0xa1a: Pop(1)
0xa1b: IF (Stack[-1] == 0) GOTO 0xa35; Pop(1)

0xa1c: PushEmpty(object, object)
0xa1d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa1e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa1f: Call2 0x1517

0xa20: Pop(2)
0xa21: PushEmpty(object, object)
0xa22: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa23: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa24: Call2 0x1460

0xa25: Pop(2)
0xa26: PushEmpty(string)
0xa27: Stack[-1] = "Rage"
0xa28: Call2 0x99f

0xa29: Pop(1)
0xa2a: Push((int) 511527)
0xa2b: @@ SetMessage(Stack[-1])
0xa2c: Pop(1)
0xa2d: @@ ClearReplies()
0xa2e: Pop(0)
0xa2f: Push((int) 511528)
0xa30: Push((int) 12722)
0xa31: Push((int) 12721)
0xa32: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa33: Pop(3)
0xa34: Return(); Pop(0)

0xa35: PushEmpty(bool)
0xa36: Stack[-1] = (bool) 0
0xa37: PushEmpty(bool)
0xa38: Stack[-1] = (bool) 0
0xa39: PushEmpty(bool, object)
0xa3a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa3b: Call2 0x15be

0xa3c: Pop(1)
0xa3d: IF (Stack[-1] == 0) GOTO 0xa44; Pop(1)

0xa3e: PushEmpty(bool, object)
0xa3f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa40: Call2 0x15b2

0xa41: Pop(1)
0xa42: IF (Stack[-1] == 0) GOTO 0xa44; Pop(1)

0xa43: Stack[-1] = (bool) 1
0xa44: IF (Stack[-1] == 0) GOTO 0xa4b; Pop(1)

0xa45: PushEmpty(bool, object)
0xa46: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa47: Call2 0x15ca

0xa48: Pop(1)
0xa49: IF (Stack[-1] == 0) GOTO 0xa4b; Pop(1)

0xa4a: Stack[-1] = (bool) 1
0xa4b: IF (Stack[-1] == 0) GOTO 0xa65; Pop(1)

0xa4c: PushEmpty(object, object)
0xa4d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa4e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa4f: Call2 0x1489

0xa50: Pop(2)
0xa51: PushEmpty(string)
0xa52: Stack[-1] = "Neutral"
0xa53: Call2 0x99f

0xa54: Pop(1)
0xa55: Push((int) 510510)
0xa56: @@ SetMessage(Stack[-1])
0xa57: Pop(1)
0xa58: @@ ClearReplies()
0xa59: Pop(0)
0xa5a: Push((int) 510511)
0xa5b: Push((int) 11594)
0xa5c: Push((int) 11593)
0xa5d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5e: Pop(3)
0xa5f: Push((int) 510521)
0xa60: Push((int) 11594)
0xa61: Push((int) 11604)
0xa62: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa63: Pop(3)
0xa64: Return(); Pop(0)

0xa65: PushEmpty(string)
0xa66: Stack[-1] = "Neutral"
0xa67: Call2 0x99f

0xa68: Pop(1)
0xa69: Push((int) 510500)
0xa6a: @@ SetMessage(Stack[-1])
0xa6b: Pop(1)
0xa6c: @@ ClearReplies()
0xa6d: Pop(0)
0xa6e: PushEmpty(bool, object)
0xa6f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa70: Call2 0x15f9

0xa71: Pop(1)
0xa72: IF (Stack[-1] == 0) GOTO 0xa78; Pop(1)

0xa73: Push((int) 510509)
0xa74: Push((int) 16679)
0xa75: Push((int) 11591)
0xa76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa77: Pop(3)
0xa78: PushEmpty(bool)
0xa79: Stack[-1] = (bool) 0
0xa7a: PushEmpty(bool, object)
0xa7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa7c: Call2 0x15ed

0xa7d: Pop(1)
0xa7e: IF (Stack[-1] == 0) GOTO 0xa85; Pop(1)

0xa7f: PushEmpty(bool, object)
0xa80: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa81: Call2 0x15f9

0xa82: Pop(1)
0xa83: IF (Stack[-1] == 0) GOTO 0xa85; Pop(1)

0xa84: Stack[-1] = (bool) 1
0xa85: IF (Stack[-1] == 0) GOTO 0xa8b; Pop(1)

0xa86: Push((int) 510501)
0xa87: Push((int) 11584)
0xa88: Push((int) 11583)
0xa89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8a: Pop(3)
0xa8b: PushEmpty(bool, object)
0xa8c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa8d: Call2 0x15e1

0xa8e: Pop(1)
0xa8f: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa90: Push((int) 515653)
0xa91: Push((int) 16690)
0xa92: Push((int) 16689)
0xa93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa94: Pop(3)
0xa95: Push((int) 515647)
0xa96: Push((int) -1)
0xa97: Push((int) 16682)
0xa98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa99: Pop(3)
0xa9a: Return(); Pop(0)

0xa9b: Push((int) 16690)
0xa9c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9d: IF (Stack[-1] == 0) GOTO 0xaad; Pop(1)

0xa9e: PushEmpty(string)
0xa9f: Stack[-1] = "Neutral"
0xaa0: Call2 0x99f

0xaa1: Pop(1)
0xaa2: Push((int) 515654)
0xaa3: @@ SetMessage(Stack[-1])
0xaa4: Pop(1)
0xaa5: @@ ClearReplies()
0xaa6: Pop(0)
0xaa7: Push((int) 510492)
0xaa8: Push((int) -1)
0xaa9: Push((int) 11570)
0xaaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaab: Pop(3)
0xaac: Return(); Pop(0)

0xaad: Push((int) 11584)
0xaae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaaf: IF (Stack[-1] == 0) GOTO 0xac4; Pop(1)

0xab0: PushEmpty(string)
0xab1: Stack[-1] = "Neutral"
0xab2: Call2 0x99f

0xab3: Pop(1)
0xab4: Push((int) 510502)
0xab5: @@ SetMessage(Stack[-1])
0xab6: Pop(1)
0xab7: @@ ClearReplies()
0xab8: Pop(0)
0xab9: Push((int) 510504)
0xaba: Push((int) -1)
0xabb: Push((int) 11586)
0xabc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xabd: Pop(3)
0xabe: Push((int) 510505)
0xabf: Push((int) 11588)
0xac0: Push((int) 11587)
0xac1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac2: Pop(3)
0xac3: Return(); Pop(0)

0xac4: Push((int) 11588)
0xac5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac6: IF (Stack[-1] == 0) GOTO 0xadb; Pop(1)

0xac7: PushEmpty(string)
0xac8: Stack[-1] = "Neutral"
0xac9: Call2 0x99f

0xaca: Pop(1)
0xacb: Push((int) 510506)
0xacc: @@ SetMessage(Stack[-1])
0xacd: Pop(1)
0xace: @@ ClearReplies()
0xacf: Pop(0)
0xad0: Push((int) 510508)
0xad1: Push((int) -1)
0xad2: Push((int) 11590)
0xad3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad4: Pop(3)
0xad5: Push((int) 510507)
0xad6: Push((int) -1)
0xad7: Push((int) 11589)
0xad8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad9: Pop(3)
0xada: Return(); Pop(0)

0xadb: Push((int) 16679)
0xadc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xadd: IF (Stack[-1] == 0) GOTO 0xaed; Pop(1)

0xade: PushEmpty(string)
0xadf: Stack[-1] = "Rage"
0xae0: Call2 0x99f

0xae1: Pop(1)
0xae2: Push((int) 515644)
0xae3: @@ SetMessage(Stack[-1])
0xae4: Pop(1)
0xae5: @@ ClearReplies()
0xae6: Pop(0)
0xae7: Push((int) 515645)
0xae8: Push((int) -1)
0xae9: Push((int) 16680)
0xaea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaeb: Pop(3)
0xaec: Return(); Pop(0)

0xaed: Push((int) 11594)
0xaee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaef: IF (Stack[-1] == 0) GOTO 0xb04; Pop(1)

0xaf0: PushEmpty(string)
0xaf1: Stack[-1] = "Neutral"
0xaf2: Call2 0x99f

0xaf3: Pop(1)
0xaf4: Push((int) 510512)
0xaf5: @@ SetMessage(Stack[-1])
0xaf6: Pop(1)
0xaf7: @@ ClearReplies()
0xaf8: Pop(0)
0xaf9: Push((int) 510513)
0xafa: Push((int) 11596)
0xafb: Push((int) 11595)
0xafc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xafd: Pop(3)
0xafe: Push((int) 510520)
0xaff: Push((int) 11598)
0xb00: Push((int) 11602)
0xb01: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb02: Pop(3)
0xb03: Return(); Pop(0)

0xb04: Push((int) 11596)
0xb05: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb06: IF (Stack[-1] == 0) GOTO 0xb1b; Pop(1)

0xb07: PushEmpty(string)
0xb08: Stack[-1] = "Neutral"
0xb09: Call2 0x99f

0xb0a: Pop(1)
0xb0b: Push((int) 510514)
0xb0c: @@ SetMessage(Stack[-1])
0xb0d: Pop(1)
0xb0e: @@ ClearReplies()
0xb0f: Pop(0)
0xb10: Push((int) 510515)
0xb11: Push((int) 11598)
0xb12: Push((int) 11597)
0xb13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb14: Pop(3)
0xb15: Push((int) 515650)
0xb16: Push((int) 11598)
0xb17: Push((int) 16685)
0xb18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb19: Pop(3)
0xb1a: Return(); Pop(0)

0xb1b: Push((int) 11598)
0xb1c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb1d: IF (Stack[-1] == 0) GOTO 0xb32; Pop(1)

0xb1e: PushEmpty(string)
0xb1f: Stack[-1] = "Neutral"
0xb20: Call2 0x99f

0xb21: Pop(1)
0xb22: Push((int) 510516)
0xb23: @@ SetMessage(Stack[-1])
0xb24: Pop(1)
0xb25: @@ ClearReplies()
0xb26: Pop(0)
0xb27: Push((int) 511550)
0xb28: Push((int) 12745)
0xb29: Push((int) 12744)
0xb2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2b: Pop(3)
0xb2c: Push((int) 510519)
0xb2d: Push((int) -1)
0xb2e: Push((int) 11601)
0xb2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb30: Pop(3)
0xb31: Return(); Pop(0)

0xb32: Push((int) 12745)
0xb33: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb34: IF (Stack[-1] == 0) GOTO 0xb44; Pop(1)

0xb35: PushEmpty(string)
0xb36: Stack[-1] = "Neutral"
0xb37: Call2 0x99f

0xb38: Pop(1)
0xb39: Push((int) 511551)
0xb3a: @@ SetMessage(Stack[-1])
0xb3b: Pop(1)
0xb3c: @@ ClearReplies()
0xb3d: Pop(0)
0xb3e: Push((int) 511552)
0xb3f: Push((int) 12747)
0xb40: Push((int) 12746)
0xb41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb42: Pop(3)
0xb43: Return(); Pop(0)

0xb44: Push((int) 12747)
0xb45: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb46: IF (Stack[-1] == 0) GOTO 0xb5b; Pop(1)

0xb47: PushEmpty(string)
0xb48: Stack[-1] = "Neutral"
0xb49: Call2 0x99f

0xb4a: Pop(1)
0xb4b: Push((int) 511553)
0xb4c: @@ SetMessage(Stack[-1])
0xb4d: Pop(1)
0xb4e: @@ ClearReplies()
0xb4f: Pop(0)
0xb50: Push((int) 511554)
0xb51: Push((int) 12749)
0xb52: Push((int) 12748)
0xb53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb54: Pop(3)
0xb55: Push((int) 510518)
0xb56: Push((int) -1)
0xb57: Push((int) 11600)
0xb58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb59: Pop(3)
0xb5a: Return(); Pop(0)

0xb5b: Push((int) 12749)
0xb5c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb5d: IF (Stack[-1] == 0) GOTO 0xb6d; Pop(1)

0xb5e: PushEmpty(string)
0xb5f: Stack[-1] = "Neutral"
0xb60: Call2 0x99f

0xb61: Pop(1)
0xb62: Push((int) 511555)
0xb63: @@ SetMessage(Stack[-1])
0xb64: Pop(1)
0xb65: @@ ClearReplies()
0xb66: Pop(0)
0xb67: Push((int) 510517)
0xb68: Push((int) -1)
0xb69: Push((int) 11599)
0xb6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb6b: Pop(3)
0xb6c: Return(); Pop(0)

0xb6d: Push((int) 16625)
0xb6e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6f: IF (Stack[-1] == 0) GOTO 0xb70; Pop(1)

0xb70: Push((int) 16627)
0xb71: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb72: IF (Stack[-1] == 0) GOTO 0xb82; Pop(1)

0xb73: PushEmpty(string)
0xb74: Stack[-1] = "Confusion"
0xb75: Call2 0x99f

0xb76: Pop(1)
0xb77: Push((int) 515601)
0xb78: @@ SetMessage(Stack[-1])
0xb79: Pop(1)
0xb7a: @@ ClearReplies()
0xb7b: Pop(0)
0xb7c: Push((int) 515602)
0xb7d: Push((int) 12722)
0xb7e: Push((int) 16628)
0xb7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb80: Pop(3)
0xb81: Return(); Pop(0)

0xb82: Push((int) 12722)
0xb83: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb84: IF (Stack[-1] == 0) GOTO 0xb99; Pop(1)

0xb85: PushEmpty(string)
0xb86: Stack[-1] = "Rage"
0xb87: Call2 0x99f

0xb88: Pop(1)
0xb89: Push((int) 511529)
0xb8a: @@ SetMessage(Stack[-1])
0xb8b: Pop(1)
0xb8c: @@ ClearReplies()
0xb8d: Pop(0)
0xb8e: Push((int) 511530)
0xb8f: Push((int) 11554)
0xb90: Push((int) 12723)
0xb91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb92: Pop(3)
0xb93: Push((int) 515603)
0xb94: Push((int) 16631)
0xb95: Push((int) 16630)
0xb96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb97: Pop(3)
0xb98: Return(); Pop(0)

0xb99: Push((int) 16631)
0xb9a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9b: IF (Stack[-1] == 0) GOTO 0xbab; Pop(1)

0xb9c: PushEmpty(string)
0xb9d: Stack[-1] = "Confusion"
0xb9e: Call2 0x99f

0xb9f: Pop(1)
0xba0: Push((int) 515604)
0xba1: @@ SetMessage(Stack[-1])
0xba2: Pop(1)
0xba3: @@ ClearReplies()
0xba4: Pop(0)
0xba5: Push((int) 515605)
0xba6: Push((int) 16633)
0xba7: Push((int) 16632)
0xba8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba9: Pop(3)
0xbaa: Return(); Pop(0)

0xbab: Push((int) 16633)
0xbac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbad: IF (Stack[-1] == 0) GOTO 0xbc2; Pop(1)

0xbae: PushEmpty(string)
0xbaf: Stack[-1] = "Warning"
0xbb0: Call2 0x99f

0xbb1: Pop(1)
0xbb2: Push((int) 515606)
0xbb3: @@ SetMessage(Stack[-1])
0xbb4: Pop(1)
0xbb5: @@ ClearReplies()
0xbb6: Pop(0)
0xbb7: Push((int) 515607)
0xbb8: Push((int) 11554)
0xbb9: Push((int) 16634)
0xbba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbbb: Pop(3)
0xbbc: Push((int) 515608)
0xbbd: Push((int) 11554)
0xbbe: Push((int) 16636)
0xbbf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc0: Pop(3)
0xbc1: Return(); Pop(0)

0xbc2: Push((int) 11554)
0xbc3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc4: IF (Stack[-1] == 0) GOTO 0xbd4; Pop(1)

0xbc5: PushEmpty(string)
0xbc6: Stack[-1] = "Warning"
0xbc7: Call2 0x99f

0xbc8: Pop(1)
0xbc9: Push((int) 510476)
0xbca: @@ SetMessage(Stack[-1])
0xbcb: Pop(1)
0xbcc: @@ ClearReplies()
0xbcd: Pop(0)
0xbce: Push((int) 510477)
0xbcf: Push((int) 11556)
0xbd0: Push((int) 11555)
0xbd1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd2: Pop(3)
0xbd3: Return(); Pop(0)

0xbd4: Push((int) 11556)
0xbd5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbd6: IF (Stack[-1] == 0) GOTO 0xbeb; Pop(1)

0xbd7: PushEmpty(string)
0xbd8: Stack[-1] = "Warning"
0xbd9: Call2 0x99f

0xbda: Pop(1)
0xbdb: Push((int) 510478)
0xbdc: @@ SetMessage(Stack[-1])
0xbdd: Pop(1)
0xbde: @@ ClearReplies()
0xbdf: Pop(0)
0xbe0: Push((int) 510479)
0xbe1: Push((int) 11558)
0xbe2: Push((int) 11557)
0xbe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe4: Pop(3)
0xbe5: Push((int) 515610)
0xbe6: Push((int) 16640)
0xbe7: Push((int) 16639)
0xbe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe9: Pop(3)
0xbea: Return(); Pop(0)

0xbeb: Push((int) 16640)
0xbec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbed: IF (Stack[-1] == 0) GOTO 0xc02; Pop(1)

0xbee: PushEmpty(string)
0xbef: Stack[-1] = "Rage"
0xbf0: Call2 0x99f

0xbf1: Pop(1)
0xbf2: Push((int) 515611)
0xbf3: @@ SetMessage(Stack[-1])
0xbf4: Pop(1)
0xbf5: @@ ClearReplies()
0xbf6: Pop(0)
0xbf7: Push((int) 515614)
0xbf8: Push((int) 16644)
0xbf9: Push((int) 16643)
0xbfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbfb: Pop(3)
0xbfc: Push((int) 515612)
0xbfd: Push((int) 16642)
0xbfe: Push((int) 16641)
0xbff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc00: Pop(3)
0xc01: Return(); Pop(0)

0xc02: Push((int) 16642)
0xc03: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc04: IF (Stack[-1] == 0) GOTO 0xc14; Pop(1)

0xc05: PushEmpty(string)
0xc06: Stack[-1] = "Neutral"
0xc07: Call2 0x99f

0xc08: Pop(1)
0xc09: Push((int) 515613)
0xc0a: @@ SetMessage(Stack[-1])
0xc0b: Pop(1)
0xc0c: @@ ClearReplies()
0xc0d: Pop(0)
0xc0e: Push((int) 515616)
0xc0f: Push((int) 16644)
0xc10: Push((int) 16645)
0xc11: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc12: Pop(3)
0xc13: Return(); Pop(0)

0xc14: Push((int) 16644)
0xc15: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc16: IF (Stack[-1] == 0) GOTO 0xc2b; Pop(1)

0xc17: PushEmpty(string)
0xc18: Stack[-1] = "Warning"
0xc19: Call2 0x99f

0xc1a: Pop(1)
0xc1b: Push((int) 515615)
0xc1c: @@ SetMessage(Stack[-1])
0xc1d: Pop(1)
0xc1e: @@ ClearReplies()
0xc1f: Pop(0)
0xc20: Push((int) 515618)
0xc21: Push((int) 11558)
0xc22: Push((int) 16648)
0xc23: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc24: Pop(3)
0xc25: Push((int) 515617)
0xc26: Push((int) -1)
0xc27: Push((int) 16647)
0xc28: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc29: Pop(3)
0xc2a: Return(); Pop(0)

0xc2b: Push((int) 11558)
0xc2c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc2d: IF (Stack[-1] == 0) GOTO 0xc42; Pop(1)

0xc2e: PushEmpty(string)
0xc2f: Stack[-1] = "Confusion"
0xc30: Call2 0x99f

0xc31: Pop(1)
0xc32: Push((int) 510480)
0xc33: @@ SetMessage(Stack[-1])
0xc34: Pop(1)
0xc35: @@ ClearReplies()
0xc36: Pop(0)
0xc37: Push((int) 515623)
0xc38: Push((int) 16655)
0xc39: Push((int) 16654)
0xc3a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3b: Pop(3)
0xc3c: Push((int) 515628)
0xc3d: Push((int) 16661)
0xc3e: Push((int) 16660)
0xc3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc40: Pop(3)
0xc41: Return(); Pop(0)

0xc42: Push((int) 16661)
0xc43: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc44: IF (Stack[-1] == 0) GOTO 0xc54; Pop(1)

0xc45: PushEmpty(string)
0xc46: Stack[-1] = "Confusion"
0xc47: Call2 0x99f

0xc48: Pop(1)
0xc49: Push((int) 515629)
0xc4a: @@ SetMessage(Stack[-1])
0xc4b: Pop(1)
0xc4c: @@ ClearReplies()
0xc4d: Pop(0)
0xc4e: Push((int) 515630)
0xc4f: Push((int) 16655)
0xc50: Push((int) 16662)
0xc51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc52: Pop(3)
0xc53: Return(); Pop(0)

0xc54: Push((int) 16655)
0xc55: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc56: IF (Stack[-1] == 0) GOTO 0xc6b; Pop(1)

0xc57: PushEmpty(string)
0xc58: Stack[-1] = "Confusion"
0xc59: Call2 0x99f

0xc5a: Pop(1)
0xc5b: Push((int) 515624)
0xc5c: @@ SetMessage(Stack[-1])
0xc5d: Pop(1)
0xc5e: @@ ClearReplies()
0xc5f: Pop(0)
0xc60: Push((int) 510481)
0xc61: Push((int) 11560)
0xc62: Push((int) 11559)
0xc63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc64: Pop(3)
0xc65: Push((int) 515626)
0xc66: Push((int) 16665)
0xc67: Push((int) 16657)
0xc68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc69: Pop(3)
0xc6a: Return(); Pop(0)

0xc6b: Push((int) 16665)
0xc6c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6d: IF (Stack[-1] == 0) GOTO 0xc7d; Pop(1)

0xc6e: PushEmpty(string)
0xc6f: Stack[-1] = "Rage"
0xc70: Call2 0x99f

0xc71: Pop(1)
0xc72: Push((int) 515632)
0xc73: @@ SetMessage(Stack[-1])
0xc74: Pop(1)
0xc75: @@ ClearReplies()
0xc76: Pop(0)
0xc77: Push((int) 515633)
0xc78: Push((int) 11560)
0xc79: Push((int) 16666)
0xc7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7b: Pop(3)
0xc7c: Return(); Pop(0)

0xc7d: Push((int) 11560)
0xc7e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc7f: IF (Stack[-1] == 0) GOTO 0xc99; Pop(1)

0xc80: PushEmpty(string)
0xc81: Stack[-1] = "Confusion"
0xc82: Call2 0x99f

0xc83: Pop(1)
0xc84: Push((int) 510482)
0xc85: @@ SetMessage(Stack[-1])
0xc86: Pop(1)
0xc87: @@ ClearReplies()
0xc88: Pop(0)
0xc89: Push((int) 510483)
0xc8a: Push((int) 11562)
0xc8b: Push((int) 11561)
0xc8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8d: Pop(3)
0xc8e: Push((int) 510494)
0xc8f: Push((int) 16650)
0xc90: Push((int) 11572)
0xc91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc92: Pop(3)
0xc93: Push((int) 515627)
0xc94: Push((int) 16650)
0xc95: Push((int) 16658)
0xc96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc97: Pop(3)
0xc98: Return(); Pop(0)

0xc99: Push((int) 16650)
0xc9a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc9b: IF (Stack[-1] == 0) GOTO 0xcab; Pop(1)

0xc9c: PushEmpty(string)
0xc9d: Stack[-1] = "Warning"
0xc9e: Call2 0x99f

0xc9f: Pop(1)
0xca0: Push((int) 515619)
0xca1: @@ SetMessage(Stack[-1])
0xca2: Pop(1)
0xca3: @@ ClearReplies()
0xca4: Pop(0)
0xca5: Push((int) 515620)
0xca6: Push((int) 16652)
0xca7: Push((int) 16651)
0xca8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca9: Pop(3)
0xcaa: Return(); Pop(0)

0xcab: Push((int) 16652)
0xcac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcad: IF (Stack[-1] == 0) GOTO 0xcbd; Pop(1)

0xcae: PushEmpty(string)
0xcaf: Stack[-1] = "Warning"
0xcb0: Call2 0x99f

0xcb1: Pop(1)
0xcb2: Push((int) 515621)
0xcb3: @@ SetMessage(Stack[-1])
0xcb4: Pop(1)
0xcb5: @@ ClearReplies()
0xcb6: Pop(0)
0xcb7: Push((int) 510489)
0xcb8: Push((int) 11568)
0xcb9: Push((int) 11567)
0xcba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcbb: Pop(3)
0xcbc: Return(); Pop(0)

0xcbd: Push((int) 11568)
0xcbe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcbf: IF (Stack[-1] == 0) GOTO 0xcd4; Pop(1)

0xcc0: PushEmpty(string)
0xcc1: Stack[-1] = "Confusion"
0xcc2: Call2 0x99f

0xcc3: Pop(1)
0xcc4: Push((int) 510490)
0xcc5: @@ SetMessage(Stack[-1])
0xcc6: Pop(1)
0xcc7: @@ ClearReplies()
0xcc8: Pop(0)
0xcc9: Push((int) 510491)
0xcca: Push((int) -1)
0xccb: Push((int) 11569)
0xccc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xccd: Pop(3)
0xcce: Push((int) 515655)
0xccf: Push((int) -1)
0xcd0: Push((int) 16691)
0xcd1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd2: Pop(3)
0xcd3: Return(); Pop(0)

0xcd4: Push((int) 11562)
0xcd5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd6: IF (Stack[-1] == 0) GOTO 0xcf0; Pop(1)

0xcd7: PushEmpty(string)
0xcd8: Stack[-1] = "Neutral"
0xcd9: Call2 0x99f

0xcda: Pop(1)
0xcdb: Push((int) 510484)
0xcdc: @@ SetMessage(Stack[-1])
0xcdd: Pop(1)
0xcde: @@ ClearReplies()
0xcdf: Pop(0)
0xce0: Push((int) 515635)
0xce1: Push((int) 16670)
0xce2: Push((int) 16669)
0xce3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce4: Pop(3)
0xce5: Push((int) 515641)
0xce6: Push((int) 16676)
0xce7: Push((int) 16675)
0xce8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce9: Pop(3)
0xcea: Push((int) 510486)
0xceb: Push((int) 11565)
0xcec: Push((int) 11564)
0xced: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcee: Pop(3)
0xcef: Return(); Pop(0)

0xcf0: Push((int) 11565)
0xcf1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf2: IF (Stack[-1] == 0) GOTO 0xd07; Pop(1)

0xcf3: PushEmpty(string)
0xcf4: Stack[-1] = "Rage"
0xcf5: Call2 0x99f

0xcf6: Pop(1)
0xcf7: Push((int) 510487)
0xcf8: @@ SetMessage(Stack[-1])
0xcf9: Pop(1)
0xcfa: @@ ClearReplies()
0xcfb: Pop(0)
0xcfc: Push((int) 510488)
0xcfd: Push((int) -1)
0xcfe: Push((int) 11566)
0xcff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd00: Pop(3)
0xd01: Push((int) 515643)
0xd02: Push((int) -1)
0xd03: Push((int) 16678)
0xd04: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd05: Pop(3)
0xd06: Return(); Pop(0)

0xd07: Push((int) 16676)
0xd08: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd09: IF (Stack[-1] == 0) GOTO 0xd19; Pop(1)

0xd0a: PushEmpty(string)
0xd0b: Stack[-1] = "Rage"
0xd0c: Call2 0x99f

0xd0d: Pop(1)
0xd0e: Push((int) 515642)
0xd0f: @@ SetMessage(Stack[-1])
0xd10: Pop(1)
0xd11: @@ ClearReplies()
0xd12: Pop(0)
0xd13: Push((int) 515637)
0xd14: Push((int) 16672)
0xd15: Push((int) 16671)
0xd16: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd17: Pop(3)
0xd18: Return(); Pop(0)

0xd19: Push((int) 16672)
0xd1a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd1b: IF (Stack[-1] == 0) GOTO 0xd30; Pop(1)

0xd1c: PushEmpty(string)
0xd1d: Stack[-1] = "Warning"
0xd1e: Call2 0x99f

0xd1f: Pop(1)
0xd20: Push((int) 515638)
0xd21: @@ SetMessage(Stack[-1])
0xd22: Pop(1)
0xd23: @@ ClearReplies()
0xd24: Pop(0)
0xd25: Push((int) 515640)
0xd26: Push((int) 16670)
0xd27: Push((int) 16674)
0xd28: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd29: Pop(3)
0xd2a: Push((int) 515639)
0xd2b: Push((int) -1)
0xd2c: Push((int) 16673)
0xd2d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2e: Pop(3)
0xd2f: Return(); Pop(0)

0xd30: Push((int) 16670)
0xd31: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd32: IF (Stack[-1] == 0) GOTO 0xd42; Pop(1)

0xd33: PushEmpty(string)
0xd34: Stack[-1] = "Neutral"
0xd35: Call2 0x99f

0xd36: Pop(1)
0xd37: Push((int) 515636)
0xd38: @@ SetMessage(Stack[-1])
0xd39: Pop(1)
0xd3a: @@ ClearReplies()
0xd3b: Pop(0)
0xd3c: Push((int) 510485)
0xd3d: Push((int) -1)
0xd3e: Push((int) 11563)
0xd3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd40: Pop(3)
0xd41: Return(); Pop(0)

0xd42: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd43: PushEmpty(bool)
0xd44: Call2 0x13b0

0xd45: Pop(0)
0xd46: IF (Stack[-1] == 0) GOTO 0xd4a; Pop(1)

0xd47: @ lshStopAnimation()
0xd48: Pop(0)
0xd49: GOTO 0xd4c

0xd4a: @ StopAnimation()
0xd4b: Pop(0)
0xd4c: Return(); Pop(0)

0xd4d: GOTO 0x9b6

0xd4e: Return(); Pop(0)

0xd4f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xd50: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xd51: PushEmpty(bool, object, float)
0xd52: Stack[-2] = Stack[-12]
0xd53: Stack[-1] = (float) 70.0
0xd54: Call2 0x11f7

0xd55: Pop(2)
0xd56: Pop(1); Push((bool) Stack[-1] == 0)
0xd57: IF (Stack[-1] == 0) GOTO 0xd5a; Pop(1)

0xd58: Stack[-10] = (int) -2
0xd59: Return(); Pop(8)

0xd5a: @ CreateDialog(Stack[-4])
0xd5b: Pop(0)
0xd5c: PushEmpty(int)
0xd5d: Call2 0x13aa

0xd5e: Pop(0)
0xd5f: @@ SetNPCName(Stack[-1])
0xd60: Pop(1)
0xd61: PushEmpty(int)
0xd62: Call2 0x13a8

0xd63: Pop(0)
0xd64: @@ SetNPCDescription(Stack[-1])
0xd65: Pop(1)
0xd66: PushEmpty(string)
0xd67: Call2 0x13ac

0xd68: Pop(0)
0xd69: @@ SetPhoto(Stack[-1])
0xd6a: Pop(1)
0xd6b: PushEmpty(string)
0xd6c: Call2 0x13ae

0xd6d: Pop(0)
0xd6e: @@ SetPhoto2(Stack[-1])
0xd6f: Pop(1)
0xd70: PushEmpty(int)
0xd71: Call2 0x16d1

0xd72: Pop(0)
0xd73: @@ SetPlayerName(Stack[-1])
0xd74: Pop(1)
0xd75: Stack[-2] = (int) -1
0xd76: @ IsOverrideActive(Stack[-3])
0xd77: Pop(0)
0xd78: Push(Stack[-3])
0xd79: IF (Stack[-1] == 0) GOTO 0xd7c; Pop(1)

0xd7a: Stack[-10] = (int) -2
0xd7b: Return(); Pop(8)

0xd7c: @ DoDialog(Stack[-4])
0xd7d: Pop(0)
0xd7e: PushEmpty(bool, object)
0xd7f: PushEmpty(object)
0xd80: Call2 0x130b

0xd81: Stack[-2] = Stack[-1]
0xd82: Pop(1)
0xd83: Call2 0x124c

0xd84: Pop(2)
0xd85: PushEmpty(object, object)
0xd86: Stack[-2] = Stack[-11]
0xd87: Stack[-1] = Stack[-6]
0xd88: Push(-2, 4); TaskCall(9)
0xd89: Call2 0xda0

0xd8a: Pop(-2, 4); TaskReturn
0xd8b: Pop(2)
0xd8c: @@ IsDialogEnd(Stack[-1])
0xd8d: Pop(0)
0xd8e: Pop(0); Push((bool) Stack[-1] == 0)
0xd8f: IF (Stack[-1] == 0) GOTO 0xd95; Pop(1)

0xd90: @ sync()
0xd91: Pop(0)
0xd92: @@ IsDialogEnd(Stack[-1])
0xd93: Pop(0)
0xd94: GOTO 0xd8e

0xd95: PushEmpty(object)
0xd96: Stack[-1] = Stack[-10]
0xd97: Call2 0x123b

0xd98: Pop(1)
0xd99: @ StopDialog(Stack[-4])
0xd9a: Pop(0)
0xd9b: @@ GetReturnValue(Stack[-2])
0xd9c: Pop(0)
0xd9d: Stack[-10] = Stack[-2]
0xd9e: Return(); Pop(8)

0xd9f: Stack[-4] = 0
0xda0: PushEmpty()
0xda1: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xda2: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xda3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xda4: Push((int) 1)
0xda5: IF (Stack[-1] == 0) GOTO 0xdd0; Pop(1)

0xda6: PushEmpty(string)
0xda7: Stack[-1] = "Neutral"
0xda8: Call2 0xdee

0xda9: Pop(1)
0xdaa: Push((int) 511122)
0xdab: @@ SetMessage(Stack[-1])
0xdac: Pop(1)
0xdad: @@ ClearReplies()
0xdae: Pop(0)
0xdaf: PushEmpty(bool, object)
0xdb0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdb1: Call2 0x153b

0xdb2: Pop(1)
0xdb3: IF (Stack[-1] == 0) GOTO 0xdb9; Pop(1)

0xdb4: Push((int) 511123)
0xdb5: Push((int) 12316)
0xdb6: Push((int) 12312)
0xdb7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb8: Pop(3)
0xdb9: PushEmpty(bool, object)
0xdba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdbb: Call2 0x1547

0xdbc: Pop(1)
0xdbd: IF (Stack[-1] == 0) GOTO 0xdc3; Pop(1)

0xdbe: Push((int) 511124)
0xdbf: Push((int) 12314)
0xdc0: Push((int) 12313)
0xdc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc2: Pop(3)
0xdc3: Push((int) 536267)
0xdc4: Push((int) -1)
0xdc5: Push((int) 38051)
0xdc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc7: Pop(3)
0xdc8: Push((int) 536268)
0xdc9: Push((int) -1)
0xdca: Push((int) 38052)
0xdcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdcc: Pop(3)
0xdcd: GOTO 0xdd0

0xdce: Return(); Pop(0)

0xdcf: GOTO 0xda4

0xdd0: PushEmpty(bool)
0xdd1: Call2 0x13b0

0xdd2: Pop(0)
0xdd3: IF (Stack[-1] == 0) GOTO 0xddf; Pop(1)

0xdd4: @ lshWaitForAnimEnd()
0xdd5: Pop(0)
0xdd6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdd7: IF (Stack[-1] == 0) GOTO 0xdd9; Pop(1)

0xdd8: GOTO 0xdde

0xdd9: PushEmpty(string)
0xdda: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xddb: Call2 0x12d6

0xddc: Pop(1)
0xddd: GOTO 0xdd4

0xdde: GOTO 0xded

0xddf: Push("all")
0xde0: Push("idle")
0xde1: @ PlayAnimation(Stack[-2], Stack[-1])
0xde2: Pop(2)
0xde3: @ WaitForAnimEnd()
0xde4: Pop(0)
0xde5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xde6: IF (Stack[-1] == 0) GOTO 0xde8; Pop(1)

0xde7: GOTO 0xded

0xde8: Push("all")
0xde9: Push("idle")
0xdea: @ PlayAnimation(Stack[-2], Stack[-1])
0xdeb: Pop(2)
0xdec: GOTO 0xde3

0xded: Return(); Pop(0)

0xdee: PushEmpty()
0xdef: PushEmpty(bool)
0xdf0: Call2 0x13b0

0xdf1: Pop(0)
0xdf2: Pop(1); Push((bool) Stack[-1] == 0)
0xdf3: IF (Stack[-1] == 0) GOTO 0xdf5; Pop(1)

0xdf4: Return(); Pop(0)

0xdf5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xdf6: IF (Stack[-1] == 0) GOTO 0xdf8; Pop(1)

0xdf7: Return(); Pop(0)

0xdf8: PushEmpty(string, bool)
0xdf9: Stack[-2] = Stack[-3]
0xdfa: Push("")
0xdfb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xdfc: IF (Stack[-1] == 0) GOTO 0xdff; Pop(1)

0xdfd: Stack[-1] = (bool) 0
0xdfe: GOTO 0xe00

0xdff: Stack[-1] = (bool) 1
0xe00: Call2 0x12e6

0xe01: Pop(2)
0xe02: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe03: Return(); Pop(0)

0xe04: PushEmpty()
0xe05: Push((int) 1)
0xe06: IF (Stack[-1] == 0) GOTO 0xeab; Pop(1)

0xe07: PushEmpty()
0xe08: Call2 0x1304

0xe09: Pop(0)
0xe0a: Push((int) 12312)
0xe0b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe0c: IF (Stack[-1] == 0) GOTO 0xe12; Pop(1)

0xe0d: PushEmpty(object, object)
0xe0e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe0f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe10: Call2 0x13e1

0xe11: Pop(2)
0xe12: Push((int) 12313)
0xe13: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe14: IF (Stack[-1] == 0) GOTO 0xe1a; Pop(1)

0xe15: PushEmpty(object, object)
0xe16: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe17: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe18: Call2 0x13e7

0xe19: Pop(2)
0xe1a: Push((int) 12315)
0xe1b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe1c: IF (Stack[-1] == 0) GOTO 0xe27; Pop(1)

0xe1d: PushEmpty(object, object)
0xe1e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe1f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe20: Call2 0x13d6

0xe21: Pop(2)
0xe22: PushEmpty(object, object)
0xe23: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe24: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe25: Call2 0x13fe

0xe26: Pop(2)
0xe27: Push((int) 12311)
0xe28: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe29: IF (Stack[-1] == 0) GOTO 0xe52; Pop(1)

0xe2a: PushEmpty(string)
0xe2b: Stack[-1] = "Neutral"
0xe2c: Call2 0xdee

0xe2d: Pop(1)
0xe2e: Push((int) 511122)
0xe2f: @@ SetMessage(Stack[-1])
0xe30: Pop(1)
0xe31: @@ ClearReplies()
0xe32: Pop(0)
0xe33: PushEmpty(bool, object)
0xe34: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe35: Call2 0x153b

0xe36: Pop(1)
0xe37: IF (Stack[-1] == 0) GOTO 0xe3d; Pop(1)

0xe38: Push((int) 511123)
0xe39: Push((int) 12316)
0xe3a: Push((int) 12312)
0xe3b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3c: Pop(3)
0xe3d: PushEmpty(bool, object)
0xe3e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe3f: Call2 0x1547

0xe40: Pop(1)
0xe41: IF (Stack[-1] == 0) GOTO 0xe47; Pop(1)

0xe42: Push((int) 511124)
0xe43: Push((int) 12314)
0xe44: Push((int) 12313)
0xe45: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe46: Pop(3)
0xe47: Push((int) 536267)
0xe48: Push((int) -1)
0xe49: Push((int) 38051)
0xe4a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4b: Pop(3)
0xe4c: Push((int) 536268)
0xe4d: Push((int) -1)
0xe4e: Push((int) 38052)
0xe4f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe50: Pop(3)
0xe51: Return(); Pop(0)

0xe52: Push((int) 12314)
0xe53: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe54: IF (Stack[-1] == 0) GOTO 0xe64; Pop(1)

0xe55: PushEmpty(string)
0xe56: Stack[-1] = "Warning"
0xe57: Call2 0xdee

0xe58: Pop(1)
0xe59: Push((int) 511125)
0xe5a: @@ SetMessage(Stack[-1])
0xe5b: Pop(1)
0xe5c: @@ ClearReplies()
0xe5d: Pop(0)
0xe5e: Push((int) 511126)
0xe5f: Push((int) -1)
0xe60: Push((int) 12315)
0xe61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe62: Pop(3)
0xe63: Return(); Pop(0)

0xe64: Push((int) 12316)
0xe65: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe66: IF (Stack[-1] == 0) GOTO 0xe76; Pop(1)

0xe67: PushEmpty(string)
0xe68: Stack[-1] = "Neutral"
0xe69: Call2 0xdee

0xe6a: Pop(1)
0xe6b: Push((int) 511127)
0xe6c: @@ SetMessage(Stack[-1])
0xe6d: Pop(1)
0xe6e: @@ ClearReplies()
0xe6f: Pop(0)
0xe70: Push((int) 511128)
0xe71: Push((int) 12318)
0xe72: Push((int) 12317)
0xe73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe74: Pop(3)
0xe75: Return(); Pop(0)

0xe76: Push((int) 12318)
0xe77: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe78: IF (Stack[-1] == 0) GOTO 0xe88; Pop(1)

0xe79: PushEmpty(string)
0xe7a: Stack[-1] = "Neutral"
0xe7b: Call2 0xdee

0xe7c: Pop(1)
0xe7d: Push((int) 511129)
0xe7e: @@ SetMessage(Stack[-1])
0xe7f: Pop(1)
0xe80: @@ ClearReplies()
0xe81: Pop(0)
0xe82: Push((int) 511130)
0xe83: Push((int) 12320)
0xe84: Push((int) 12319)
0xe85: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe86: Pop(3)
0xe87: Return(); Pop(0)

0xe88: Push((int) 12320)
0xe89: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe8a: IF (Stack[-1] == 0) GOTO 0xe9f; Pop(1)

0xe8b: PushEmpty(string)
0xe8c: Stack[-1] = "Warning"
0xe8d: Call2 0xdee

0xe8e: Pop(1)
0xe8f: Push((int) 511131)
0xe90: @@ SetMessage(Stack[-1])
0xe91: Pop(1)
0xe92: @@ ClearReplies()
0xe93: Pop(0)
0xe94: Push((int) 511132)
0xe95: Push((int) -1)
0xe96: Push((int) 12321)
0xe97: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe98: Pop(3)
0xe99: Push((int) 541854)
0xe9a: Push((int) -1)
0xe9b: Push((int) 44078)
0xe9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9d: Pop(3)
0xe9e: Return(); Pop(0)

0xe9f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xea0: PushEmpty(bool)
0xea1: Call2 0x13b0

0xea2: Pop(0)
0xea3: IF (Stack[-1] == 0) GOTO 0xea7; Pop(1)

0xea4: @ lshStopAnimation()
0xea5: Pop(0)
0xea6: GOTO 0xea9

0xea7: @ StopAnimation()
0xea8: Pop(0)
0xea9: Return(); Pop(0)

0xeaa: GOTO 0xe05

0xeab: Return(); Pop(0)

0xeac: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xead: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xeae: PushEmpty(bool, object, float)
0xeaf: Stack[-2] = Stack[-12]
0xeb0: Stack[-1] = (float) 70.0
0xeb1: Call2 0x11f7

0xeb2: Pop(2)
0xeb3: Pop(1); Push((bool) Stack[-1] == 0)
0xeb4: IF (Stack[-1] == 0) GOTO 0xeb7; Pop(1)

0xeb5: Stack[-10] = (int) -2
0xeb6: Return(); Pop(8)

0xeb7: @ CreateDialog(Stack[-4])
0xeb8: Pop(0)
0xeb9: PushEmpty(int)
0xeba: Call2 0x13aa

0xebb: Pop(0)
0xebc: @@ SetNPCName(Stack[-1])
0xebd: Pop(1)
0xebe: PushEmpty(int)
0xebf: Call2 0x13a8

0xec0: Pop(0)
0xec1: @@ SetNPCDescription(Stack[-1])
0xec2: Pop(1)
0xec3: PushEmpty(string)
0xec4: Call2 0x13ac

0xec5: Pop(0)
0xec6: @@ SetPhoto(Stack[-1])
0xec7: Pop(1)
0xec8: PushEmpty(string)
0xec9: Call2 0x13ae

0xeca: Pop(0)
0xecb: @@ SetPhoto2(Stack[-1])
0xecc: Pop(1)
0xecd: PushEmpty(int)
0xece: Call2 0x16d1

0xecf: Pop(0)
0xed0: @@ SetPlayerName(Stack[-1])
0xed1: Pop(1)
0xed2: Stack[-2] = (int) -1
0xed3: @ IsOverrideActive(Stack[-3])
0xed4: Pop(0)
0xed5: Push(Stack[-3])
0xed6: IF (Stack[-1] == 0) GOTO 0xed9; Pop(1)

0xed7: Stack[-10] = (int) -2
0xed8: Return(); Pop(8)

0xed9: @ DoDialog(Stack[-4])
0xeda: Pop(0)
0xedb: PushEmpty(bool, object)
0xedc: PushEmpty(object)
0xedd: Call2 0x130b

0xede: Stack[-2] = Stack[-1]
0xedf: Pop(1)
0xee0: Call2 0x124c

0xee1: Pop(2)
0xee2: PushEmpty(object, object)
0xee3: Stack[-2] = Stack[-11]
0xee4: Stack[-1] = Stack[-6]
0xee5: Push(-2, 4); TaskCall(11)
0xee6: Call2 0xefd

0xee7: Pop(-2, 4); TaskReturn
0xee8: Pop(2)
0xee9: @@ IsDialogEnd(Stack[-1])
0xeea: Pop(0)
0xeeb: Pop(0); Push((bool) Stack[-1] == 0)
0xeec: IF (Stack[-1] == 0) GOTO 0xef2; Pop(1)

0xeed: @ sync()
0xeee: Pop(0)
0xeef: @@ IsDialogEnd(Stack[-1])
0xef0: Pop(0)
0xef1: GOTO 0xeeb

0xef2: PushEmpty(object)
0xef3: Stack[-1] = Stack[-10]
0xef4: Call2 0x123b

0xef5: Pop(1)
0xef6: @ StopDialog(Stack[-4])
0xef7: Pop(0)
0xef8: @@ GetReturnValue(Stack[-2])
0xef9: Pop(0)
0xefa: Stack[-10] = Stack[-2]
0xefb: Return(); Pop(8)

0xefc: Stack[-4] = 0
0xefd: PushEmpty()
0xefe: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xeff: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xf00: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xf01: Push((int) 1)
0xf02: IF (Stack[-1] == 0) GOTO 0xf41; Pop(1)

0xf03: PushEmpty(bool)
0xf04: Stack[-1] = (bool) 0
0xf05: PushEmpty(bool, object)
0xf06: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf07: Call2 0x15d5

0xf08: Pop(1)
0xf09: Pop(1); Push((bool) Stack[-1] == 0)
0xf0a: IF (Stack[-1] == 0) GOTO 0xf11; Pop(1)

0xf0b: PushEmpty(bool, object)
0xf0c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf0d: Call2 0x1553

0xf0e: Pop(1)
0xf0f: IF (Stack[-1] == 0) GOTO 0xf11; Pop(1)

0xf10: Stack[-1] = (bool) 1
0xf11: IF (Stack[-1] == 0) GOTO 0xf26; Pop(1)

0xf12: PushEmpty(object, object)
0xf13: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf14: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf15: Call2 0x13f8

0xf16: Pop(2)
0xf17: PushEmpty(string)
0xf18: Stack[-1] = "Warning"
0xf19: Call2 0xf5f

0xf1a: Pop(1)
0xf1b: Push((int) 512020)
0xf1c: @@ SetMessage(Stack[-1])
0xf1d: Pop(1)
0xf1e: @@ ClearReplies()
0xf1f: Pop(0)
0xf20: Push((int) 512021)
0xf21: Push((int) 13240)
0xf22: Push((int) 13239)
0xf23: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf24: Pop(3)
0xf25: GOTO 0xf41

0xf26: PushEmpty(string)
0xf27: Stack[-1] = "Neutral"
0xf28: Call2 0xf5f

0xf29: Pop(1)
0xf2a: Push((int) 513723)
0xf2b: @@ SetMessage(Stack[-1])
0xf2c: Pop(1)
0xf2d: @@ ClearReplies()
0xf2e: Pop(0)
0xf2f: PushEmpty(bool, object)
0xf30: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf31: Call2 0x15d5

0xf32: Pop(1)
0xf33: IF (Stack[-1] == 0) GOTO 0xf39; Pop(1)

0xf34: Push((int) 541857)
0xf35: Push((int) -1)
0xf36: Push((int) 44082)
0xf37: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf38: Pop(3)
0xf39: Push((int) 513724)
0xf3a: Push((int) -1)
0xf3b: Push((int) 14990)
0xf3c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3d: Pop(3)
0xf3e: GOTO 0xf41

0xf3f: Return(); Pop(0)

0xf40: GOTO 0xf01

0xf41: PushEmpty(bool)
0xf42: Call2 0x13b0

0xf43: Pop(0)
0xf44: IF (Stack[-1] == 0) GOTO 0xf50; Pop(1)

0xf45: @ lshWaitForAnimEnd()
0xf46: Pop(0)
0xf47: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf48: IF (Stack[-1] == 0) GOTO 0xf4a; Pop(1)

0xf49: GOTO 0xf4f

0xf4a: PushEmpty(string)
0xf4b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xf4c: Call2 0x12d6

0xf4d: Pop(1)
0xf4e: GOTO 0xf45

0xf4f: GOTO 0xf5e

0xf50: Push("all")
0xf51: Push("idle")
0xf52: @ PlayAnimation(Stack[-2], Stack[-1])
0xf53: Pop(2)
0xf54: @ WaitForAnimEnd()
0xf55: Pop(0)
0xf56: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf57: IF (Stack[-1] == 0) GOTO 0xf59; Pop(1)

0xf58: GOTO 0xf5e

0xf59: Push("all")
0xf5a: Push("idle")
0xf5b: @ PlayAnimation(Stack[-2], Stack[-1])
0xf5c: Pop(2)
0xf5d: GOTO 0xf54

0xf5e: Return(); Pop(0)

0xf5f: PushEmpty()
0xf60: PushEmpty(bool)
0xf61: Call2 0x13b0

0xf62: Pop(0)
0xf63: Pop(1); Push((bool) Stack[-1] == 0)
0xf64: IF (Stack[-1] == 0) GOTO 0xf66; Pop(1)

0xf65: Return(); Pop(0)

0xf66: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf67: IF (Stack[-1] == 0) GOTO 0xf69; Pop(1)

0xf68: Return(); Pop(0)

0xf69: PushEmpty(string, bool)
0xf6a: Stack[-2] = Stack[-3]
0xf6b: Push("")
0xf6c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf6d: IF (Stack[-1] == 0) GOTO 0xf70; Pop(1)

0xf6e: Stack[-1] = (bool) 0
0xf6f: GOTO 0xf71

0xf70: Stack[-1] = (bool) 1
0xf71: Call2 0x12e6

0xf72: Pop(2)
0xf73: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf74: Return(); Pop(0)

0xf75: PushEmpty()
0xf76: Push((int) 1)
0xf77: IF (Stack[-1] == 0) GOTO 0x100b; Pop(1)

0xf78: PushEmpty()
0xf79: Call2 0x1304

0xf7a: Pop(0)
0xf7b: Push((int) 13243)
0xf7c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf7d: IF (Stack[-1] == 0) GOTO 0xf92; Pop(1)

0xf7e: PushEmpty(object, object)
0xf7f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf80: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf81: Call2 0x14e9

0xf82: Pop(2)
0xf83: PushEmpty(object, object)
0xf84: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf85: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf86: Call2 0x14f6

0xf87: Pop(2)
0xf88: PushEmpty(object, object)
0xf89: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf8b: Call2 0x13b2

0xf8c: Pop(2)
0xf8d: PushEmpty(object, object)
0xf8e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf90: Call2 0x13ed

0xf91: Pop(2)
0xf92: Push((int) 13238)
0xf93: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf94: IF (Stack[-1] == 0) GOTO 0xfd1; Pop(1)

0xf95: PushEmpty(bool)
0xf96: Stack[-1] = (bool) 0
0xf97: PushEmpty(bool, object)
0xf98: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf99: Call2 0x15d5

0xf9a: Pop(1)
0xf9b: Pop(1); Push((bool) Stack[-1] == 0)
0xf9c: IF (Stack[-1] == 0) GOTO 0xfa3; Pop(1)

0xf9d: PushEmpty(bool, object)
0xf9e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf9f: Call2 0x1553

0xfa0: Pop(1)
0xfa1: IF (Stack[-1] == 0) GOTO 0xfa3; Pop(1)

0xfa2: Stack[-1] = (bool) 1
0xfa3: IF (Stack[-1] == 0) GOTO 0xfb8; Pop(1)

0xfa4: PushEmpty(object, object)
0xfa5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfa6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfa7: Call2 0x13f8

0xfa8: Pop(2)
0xfa9: PushEmpty(string)
0xfaa: Stack[-1] = "Warning"
0xfab: Call2 0xf5f

0xfac: Pop(1)
0xfad: Push((int) 512020)
0xfae: @@ SetMessage(Stack[-1])
0xfaf: Pop(1)
0xfb0: @@ ClearReplies()
0xfb1: Pop(0)
0xfb2: Push((int) 512021)
0xfb3: Push((int) 13240)
0xfb4: Push((int) 13239)
0xfb5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb6: Pop(3)
0xfb7: Return(); Pop(0)

0xfb8: PushEmpty(string)
0xfb9: Stack[-1] = "Neutral"
0xfba: Call2 0xf5f

0xfbb: Pop(1)
0xfbc: Push((int) 513723)
0xfbd: @@ SetMessage(Stack[-1])
0xfbe: Pop(1)
0xfbf: @@ ClearReplies()
0xfc0: Pop(0)
0xfc1: PushEmpty(bool, object)
0xfc2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfc3: Call2 0x15d5

0xfc4: Pop(1)
0xfc5: IF (Stack[-1] == 0) GOTO 0xfcb; Pop(1)

0xfc6: Push((int) 541857)
0xfc7: Push((int) -1)
0xfc8: Push((int) 44082)
0xfc9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfca: Pop(3)
0xfcb: Push((int) 513724)
0xfcc: Push((int) -1)
0xfcd: Push((int) 14990)
0xfce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfcf: Pop(3)
0xfd0: Return(); Pop(0)

0xfd1: Push((int) 13240)
0xfd2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfd3: IF (Stack[-1] == 0) GOTO 0xfe8; Pop(1)

0xfd4: PushEmpty(string)
0xfd5: Stack[-1] = "Warning"
0xfd6: Call2 0xf5f

0xfd7: Pop(1)
0xfd8: Push((int) 512022)
0xfd9: @@ SetMessage(Stack[-1])
0xfda: Pop(1)
0xfdb: @@ ClearReplies()
0xfdc: Pop(0)
0xfdd: Push((int) 512023)
0xfde: Push((int) 13242)
0xfdf: Push((int) 13241)
0xfe0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe1: Pop(3)
0xfe2: Push((int) 541856)
0xfe3: Push((int) 13242)
0xfe4: Push((int) 44080)
0xfe5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe6: Pop(3)
0xfe7: Return(); Pop(0)

0xfe8: Push((int) 13242)
0xfe9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfea: IF (Stack[-1] == 0) GOTO 0xfff; Pop(1)

0xfeb: PushEmpty(string)
0xfec: Stack[-1] = "Warning"
0xfed: Call2 0xf5f

0xfee: Pop(1)
0xfef: Push((int) 512024)
0xff0: @@ SetMessage(Stack[-1])
0xff1: Pop(1)
0xff2: @@ ClearReplies()
0xff3: Pop(0)
0xff4: Push((int) 512025)
0xff5: Push((int) -1)
0xff6: Push((int) 13243)
0xff7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff8: Pop(3)
0xff9: Push((int) 541855)
0xffa: Push((int) -1)
0xffb: Push((int) 44079)
0xffc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xffd: Pop(3)
0xffe: Return(); Pop(0)

0xfff: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1000: PushEmpty(bool)
0x1001: Call2 0x13b0

0x1002: Pop(0)
0x1003: IF (Stack[-1] == 0) GOTO 0x1007; Pop(1)

0x1004: @ lshStopAnimation()
0x1005: Pop(0)
0x1006: GOTO 0x1009

0x1007: @ StopAnimation()
0x1008: Pop(0)
0x1009: Return(); Pop(0)

0x100a: GOTO 0xf76

0x100b: Return(); Pop(0)

0x100c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x100d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x100e: PushEmpty(bool, object, float)
0x100f: Stack[-2] = Stack[-12]
0x1010: Stack[-1] = (float) 70.0
0x1011: Call2 0x11f7

0x1012: Pop(2)
0x1013: Pop(1); Push((bool) Stack[-1] == 0)
0x1014: IF (Stack[-1] == 0) GOTO 0x1017; Pop(1)

0x1015: Stack[-10] = (int) -2
0x1016: Return(); Pop(8)

0x1017: @ CreateDialog(Stack[-4])
0x1018: Pop(0)
0x1019: PushEmpty(int)
0x101a: Call2 0x13aa

0x101b: Pop(0)
0x101c: @@ SetNPCName(Stack[-1])
0x101d: Pop(1)
0x101e: PushEmpty(int)
0x101f: Call2 0x13a8

0x1020: Pop(0)
0x1021: @@ SetNPCDescription(Stack[-1])
0x1022: Pop(1)
0x1023: PushEmpty(string)
0x1024: Call2 0x13ac

0x1025: Pop(0)
0x1026: @@ SetPhoto(Stack[-1])
0x1027: Pop(1)
0x1028: PushEmpty(string)
0x1029: Call2 0x13ae

0x102a: Pop(0)
0x102b: @@ SetPhoto2(Stack[-1])
0x102c: Pop(1)
0x102d: PushEmpty(int)
0x102e: Call2 0x16d1

0x102f: Pop(0)
0x1030: @@ SetPlayerName(Stack[-1])
0x1031: Pop(1)
0x1032: Stack[-2] = (int) -1
0x1033: @ IsOverrideActive(Stack[-3])
0x1034: Pop(0)
0x1035: Push(Stack[-3])
0x1036: IF (Stack[-1] == 0) GOTO 0x1039; Pop(1)

0x1037: Stack[-10] = (int) -2
0x1038: Return(); Pop(8)

0x1039: @ DoDialog(Stack[-4])
0x103a: Pop(0)
0x103b: PushEmpty(bool, object)
0x103c: PushEmpty(object)
0x103d: Call2 0x130b

0x103e: Stack[-2] = Stack[-1]
0x103f: Pop(1)
0x1040: Call2 0x124c

0x1041: Pop(2)
0x1042: PushEmpty(object, object)
0x1043: Stack[-2] = Stack[-11]
0x1044: Stack[-1] = Stack[-6]
0x1045: Push(-2, 4); TaskCall(13)
0x1046: Call2 0x105d

0x1047: Pop(-2, 4); TaskReturn
0x1048: Pop(2)
0x1049: @@ IsDialogEnd(Stack[-1])
0x104a: Pop(0)
0x104b: Pop(0); Push((bool) Stack[-1] == 0)
0x104c: IF (Stack[-1] == 0) GOTO 0x1052; Pop(1)

0x104d: @ sync()
0x104e: Pop(0)
0x104f: @@ IsDialogEnd(Stack[-1])
0x1050: Pop(0)
0x1051: GOTO 0x104b

0x1052: PushEmpty(object)
0x1053: Stack[-1] = Stack[-10]
0x1054: Call2 0x123b

0x1055: Pop(1)
0x1056: @ StopDialog(Stack[-4])
0x1057: Pop(0)
0x1058: @@ GetReturnValue(Stack[-2])
0x1059: Pop(0)
0x105a: Stack[-10] = Stack[-2]
0x105b: Return(); Pop(8)

0x105c: Stack[-4] = 0
0x105d: PushEmpty()
0x105e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x105f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1060: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1061: Push((int) 1)
0x1062: IF (Stack[-1] == 0) GOTO 0x1079; Pop(1)

0x1063: PushEmpty(string)
0x1064: Stack[-1] = "Neutral"
0x1065: Call2 0x1097

0x1066: Pop(1)
0x1067: Push((int) 540542)
0x1068: @@ SetMessage(Stack[-1])
0x1069: Pop(1)
0x106a: @@ ClearReplies()
0x106b: Pop(0)
0x106c: Push((int) 540543)
0x106d: Push((int) -1)
0x106e: Push((int) 42552)
0x106f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1070: Pop(3)
0x1071: Push((int) 540796)
0x1072: Push((int) -1)
0x1073: Push((int) 42845)
0x1074: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1075: Pop(3)
0x1076: GOTO 0x1079

0x1077: Return(); Pop(0)

0x1078: GOTO 0x1061

0x1079: PushEmpty(bool)
0x107a: Call2 0x13b0

0x107b: Pop(0)
0x107c: IF (Stack[-1] == 0) GOTO 0x1088; Pop(1)

0x107d: @ lshWaitForAnimEnd()
0x107e: Pop(0)
0x107f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1080: IF (Stack[-1] == 0) GOTO 0x1082; Pop(1)

0x1081: GOTO 0x1087

0x1082: PushEmpty(string)
0x1083: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1084: Call2 0x12d6

0x1085: Pop(1)
0x1086: GOTO 0x107d

0x1087: GOTO 0x1096

0x1088: Push("all")
0x1089: Push("idle")
0x108a: @ PlayAnimation(Stack[-2], Stack[-1])
0x108b: Pop(2)
0x108c: @ WaitForAnimEnd()
0x108d: Pop(0)
0x108e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x108f: IF (Stack[-1] == 0) GOTO 0x1091; Pop(1)

0x1090: GOTO 0x1096

0x1091: Push("all")
0x1092: Push("idle")
0x1093: @ PlayAnimation(Stack[-2], Stack[-1])
0x1094: Pop(2)
0x1095: GOTO 0x108c

0x1096: Return(); Pop(0)

0x1097: PushEmpty()
0x1098: PushEmpty(bool)
0x1099: Call2 0x13b0

0x109a: Pop(0)
0x109b: Pop(1); Push((bool) Stack[-1] == 0)
0x109c: IF (Stack[-1] == 0) GOTO 0x109e; Pop(1)

0x109d: Return(); Pop(0)

0x109e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x109f: IF (Stack[-1] == 0) GOTO 0x10a1; Pop(1)

0x10a0: Return(); Pop(0)

0x10a1: PushEmpty(string, bool)
0x10a2: Stack[-2] = Stack[-3]
0x10a3: Push("")
0x10a4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x10a5: IF (Stack[-1] == 0) GOTO 0x10a8; Pop(1)

0x10a6: Stack[-1] = (bool) 0
0x10a7: GOTO 0x10a9

0x10a8: Stack[-1] = (bool) 1
0x10a9: Call2 0x12e6

0x10aa: Pop(2)
0x10ab: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x10ac: Return(); Pop(0)

0x10ad: PushEmpty()
0x10ae: Push((int) 1)
0x10af: IF (Stack[-1] == 0) GOTO 0x10d6; Pop(1)

0x10b0: PushEmpty()
0x10b1: Call2 0x1304

0x10b2: Pop(0)
0x10b3: Push((int) 42551)
0x10b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b5: IF (Stack[-1] == 0) GOTO 0x10ca; Pop(1)

0x10b6: PushEmpty(string)
0x10b7: Stack[-1] = "Neutral"
0x10b8: Call2 0x1097

0x10b9: Pop(1)
0x10ba: Push((int) 540542)
0x10bb: @@ SetMessage(Stack[-1])
0x10bc: Pop(1)
0x10bd: @@ ClearReplies()
0x10be: Pop(0)
0x10bf: Push((int) 540543)
0x10c0: Push((int) -1)
0x10c1: Push((int) 42552)
0x10c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c3: Pop(3)
0x10c4: Push((int) 540796)
0x10c5: Push((int) -1)
0x10c6: Push((int) 42845)
0x10c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c8: Pop(3)
0x10c9: Return(); Pop(0)

0x10ca: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x10cb: PushEmpty(bool)
0x10cc: Call2 0x13b0

0x10cd: Pop(0)
0x10ce: IF (Stack[-1] == 0) GOTO 0x10d2; Pop(1)

0x10cf: @ lshStopAnimation()
0x10d0: Pop(0)
0x10d1: GOTO 0x10d4

0x10d2: @ StopAnimation()
0x10d3: Pop(0)
0x10d4: Return(); Pop(0)

0x10d5: GOTO 0x10ae

0x10d6: Return(); Pop(0)

0x10d7: PushEmpty()
0x10d8: Call2 0x10db

0x10d9: Pop(0)
0x10da: Return(); Pop(0)

0x10db: PushEmpty(bool)
0x10dc: Call2 0x11f2

0x10dd: Pop(0)
0x10de: Pop(1); Push((bool) Stack[-1] == 0)
0x10df: IF (Stack[-1] == 0) GOTO 0x10e2; Pop(1)

0x10e0: @ Hold()
0x10e1: Pop(0)
0x10e2: @ GetDirection(Stack[-0])
0x10e3: Pop(0)
0x10e4: PushEmpty()
0x10e5: Call2 0x118b

0x10e6: Pop(0)
0x10e7: GOTO 0x10e4

0x10e8: Return(); Pop(0)

0x10e9: PushEmpty(object, object)
0x10ea: Push("player")
0x10eb: @ FindActor(Stack[-2], Stack[-1])
0x10ec: Pop(1)
0x10ed: Pop(0); Push((bool) Stack[-1] == 0)
0x10ee: IF (Stack[-1] == 0) GOTO 0x10f1; Pop(1)

0x10ef: Stack[-3] = (bool) 0
0x10f0: Return(); Pop(2)

0x10f1: PushEmpty(bool, object)
0x10f2: Stack[-1] = Stack[-3]
0x10f3: Call2 0x11e9

0x10f4: Stack[-5] = Stack[-2]
0x10f5: Pop(2)
0x10f6: Return(); Pop(2)

0x10f7: Stack[-1] = 0
0x10f8: Push(CvectorIndex(Stack[-0], 0))
0x10f9: Push(CvectorIndex(Stack[-0], 2))
0x10fa: @ RotateAsync(Stack[-2], Stack[-1])
0x10fb: Pop(2)
0x10fc: Return(); Pop(0)

0x10fd: PushEmpty(object, bool, object, bool)
0x10fe: Push("player")
0x10ff: @ FindActor(Stack[-3], Stack[-1])
0x1100: Pop(1)
0x1101: Pop(0); Push((bool) Stack[-2] == 0)
0x1102: IF (Stack[-1] == 0) GOTO 0x1105; Pop(1)

0x1103: Stack[-5] = (bool) 0
0x1104: Return(); Pop(4)

0x1105: PushEmpty(float, object)
0x1106: Stack[-1] = Stack[-4]
0x1107: Call2 0x11d7

0x1108: Pop(1)
0x1109: Push((float)90000.0)
0x110a: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x110b: IF (Stack[-1] == 0) GOTO 0x110e; Pop(1)

0x110c: Stack[-5] = (bool) 0
0x110d: Return(); Pop(4)

0x110e: @ CanSee(Stack[-1], Stack[-2])
0x110f: Pop(0)
0x1110: Stack[-5] = Stack[-1]
0x1111: Return(); Pop(4)

0x1112: Stack[-2] = 0
0x1113: PushEmpty(float, float)
0x1114: Push((int) 8)
0x1115: Push((int) 16)
0x1116: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1117: Pop(2)
0x1118: Push((int) 10)
0x1119: @ SetTimer(Stack[-1], Stack[-2])
0x111a: Pop(1)
0x111b: Return(); Pop(2)

0x111c: Push((int) 10)
0x111d: @ KillTimer(Stack[-1])
0x111e: Pop(1)
0x111f: Return(); Pop(0)

0x1120: PushEmpty()
0x1121: Push((int) 10)
0x1122: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1123: IF (Stack[-1] == 0) GOTO 0x1145; Pop(1)

0x1124: PushEmpty()
0x1125: Call2 0x111c

0x1126: Pop(0)
0x1127: PushEmpty(bool)
0x1128: Stack[-1] = (bool) 0
0x1129: PushEmpty(bool)
0x112a: Call2 0x11f2

0x112b: Pop(0)
0x112c: IF (Stack[-1] == 0) GOTO 0x1132; Pop(1)

0x112d: PushEmpty(bool)
0x112e: Call2 0x10fd

0x112f: Pop(0)
0x1130: IF (Stack[-1] == 0) GOTO 0x1132; Pop(1)

0x1131: Stack[-1] = (bool) 1
0x1132: IF (Stack[-1] == 0) GOTO 0x113f; Pop(1)

0x1133: PushEmpty(bool)
0x1134: Call2 0x10e9

0x1135: Pop(0)
0x1136: IF (Stack[-1] == 0) GOTO 0x113e; Pop(1)

0x1137: PushEmpty(bool, object)
0x1138: PushEmpty(object)
0x1139: Call2 0x130b

0x113a: Stack[-2] = Stack[-1]
0x113b: Pop(1)
0x113c: Call2 0x1286

0x113d: Pop(2)
0x113e: GOTO 0x1145

0x113f: PushEmpty()
0x1140: Call2 0x10f8

0x1141: Pop(0)
0x1142: PushEmpty()
0x1143: Call2 0x1113

0x1144: Pop(0)
0x1145: Return(); Pop(0)

0x1146: PushEmpty()
0x1147: Call2 0x11d2

0x1148: Pop(0)
0x1149: PushEmpty()
0x114a: Call2 0x111c

0x114b: Pop(0)
0x114c: @ lshStopSpeech()
0x114d: Pop(0)
0x114e: @ lshStopAnimation()
0x114f: Pop(0)
0x1150: @ StopAsync()
0x1151: Pop(0)
0x1152: @ Hold()
0x1153: Pop(0)
0x1154: Return(); Pop(0)

0x1155: @ StopGroup0()
0x1156: Pop(0)
0x1157: PushEmpty()
0x1158: Call2 0x111c

0x1159: Pop(0)
0x115a: PushEmpty(string)
0x115b: Stack[-1] = "Neutral"
0x115c: Call2 0x12d6

0x115d: Pop(1)
0x115e: PushEmpty()
0x115f: Call2 0x1113

0x1160: Pop(0)
0x1161: Return(); Pop(0)

0x1162: PushEmpty()
0x1163: Push(Stack[-1])
0x1164: IF (Stack[-1] == 0) GOTO 0x1169; Pop(1)

0x1165: PushEmpty()
0x1166: Call2 0x1113

0x1167: Pop(0)
0x1168: GOTO 0x116d

0x1169: PushEmpty(string)
0x116a: Stack[-1] = "Neutral"
0x116b: Call2 0x12d6

0x116c: Pop(1)
0x116d: Return(); Pop(0)

0x116e: PushEmpty(bool, bool)
0x116f: @ IsOverrideActive(Stack[-1])
0x1170: Pop(0)
0x1171: Pop(0); Push((bool) Stack[-1] == 0)
0x1172: IF (Stack[-1] == 0) GOTO 0x118a; Pop(1)

0x1173: EventDisable(0)
0x1174: PushEmpty()
0x1175: Call2 0x11d2

0x1176: Pop(0)
0x1177: PushEmpty(bool, object)
0x1178: Stack[-1] = Stack[-5]
0x1179: Call2 0x11e9

0x117a: Pop(2)
0x117b: EventEnable(0)
0x117c: PushEmpty(object)
0x117d: Stack[-1] = Stack[-4]
0x117e: Call2 0x16e2

0x117f: Pop(1)
0x1180: PushEmpty(string)
0x1181: Stack[-1] = "Neutral"
0x1182: Call2 0x12d6

0x1183: Pop(1)
0x1184: PushEmpty()
0x1185: Call2 0x111c

0x1186: Pop(0)
0x1187: PushEmpty()
0x1188: Call2 0x1113

0x1189: Pop(0)
0x118a: Return(); Pop(2)

0x118b: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x118c: @ WaitForAnimEnd()
0x118d: Pop(0)
0x118e: PushEmpty(bool)
0x118f: Call2 0x11f2

0x1190: Pop(0)
0x1191: Pop(1); Push((bool) Stack[-1] == 0)
0x1192: IF (Stack[-1] == 0) GOTO 0x1194; Pop(1)

0x1193: Return(); Pop(12)

0x1194: PushEmpty(int)
0x1195: Call2 0x1397

0x1196: Stack[-7] = Stack[-1]
0x1197: Pop(1)
0x1198: Stack[-5] = (int) 0
0x1199: PushEmpty(bool)
0x119a: Stack[-1] = (bool) 0
0x119b: Push((int) 5)
0x119c: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x119d: IF (Stack[-1] == 0) GOTO 0x11a3; Pop(1)

0x119e: PushEmpty(bool)
0x119f: Call2 0x11f2

0x11a0: Pop(0)
0x11a1: IF (Stack[-1] == 0) GOTO 0x11a3; Pop(1)

0x11a2: Stack[-1] = (bool) 1
0x11a3: IF (Stack[-1] == 0) GOTO 0x11cd; Pop(1)

0x11a4: Pop(0); Push((bool) Stack[-6] == 0)
0x11a5: IF (Stack[-1] == 0) GOTO 0x11ad; Pop(1)

0x11a6: Push((int) 3)
0x11a7: @ Sleep(Stack[-1], Stack[-5])
0x11a8: Pop(1)
0x11a9: Pop(0); Push((bool) Stack[-4] == 0)
0x11aa: IF (Stack[-1] == 0) GOTO 0x11ac; Pop(1)

0x11ab: GOTO 0x11cd

0x11ac: GOTO 0x11c2

0x11ad: @ irand(Stack[-3], Stack[-6])
0x11ae: Pop(0)
0x11af: Push((int) 5)
0x11b0: @ irand(Stack[-3], Stack[-1])
0x11b1: Pop(1)
0x11b2: Push((int) 0)
0x11b3: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x11b4: IF (Stack[-1] == 0) GOTO 0x11b6; Pop(1)

0x11b5: Stack[-3] = (int) 0
0x11b6: Push("all")
0x11b7: PushEmpty(string, int)
0x11b8: Stack[-1] = Stack[-6]
0x11b9: Call2 0x1390

0x11ba: Pop(1)
0x11bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x11bc: Pop(2)
0x11bd: @ WaitForAnimEnd(Stack[-1])
0x11be: Pop(0)
0x11bf: Pop(0); Push((bool) Stack[-1] == 0)
0x11c0: IF (Stack[-1] == 0) GOTO 0x11c2; Pop(1)

0x11c1: GOTO 0x11cd

0x11c2: PushEmpty(bool)
0x11c3: Call2 0x11d0

0x11c4: Pop(0)
0x11c5: Pop(1); Push((bool) Stack[-1] == 0)
0x11c6: IF (Stack[-1] == 0) GOTO 0x11c8; Pop(1)

0x11c7: GOTO 0x11cd

0x11c8: @ ResetAAS()
0x11c9: Pop(0)
0x11ca: Push((int) 1)
0x11cb: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x11cc: GOTO 0x1199

0x11cd: @ ResetAAS()
0x11ce: Pop(0)
0x11cf: Return(); Pop(12)

0x11d0: Stack[-1] = (bool) 1
0x11d1: Return(); Pop(0)

0x11d2: @ StopAnimation()
0x11d3: Pop(0)
0x11d4: @ StopGroup0()
0x11d5: Pop(0)
0x11d6: Return(); Pop(0)

0x11d7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x11d8: @ GetPosition(Stack[-3])
0x11d9: Pop(0)
0x11da: @@ GetPosition(Stack[-2])
0x11db: Pop(0)
0x11dc: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x11dd: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x11de: Return(); Pop(6)

0x11df: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x11e0: @ GetPosition(Stack[-3])
0x11e1: Pop(0)
0x11e2: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x11e3: Push(CvectorIndex(Stack[-2], 0))
0x11e4: Push(CvectorIndex(Stack[-3], 2))
0x11e5: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x11e6: Pop(2)
0x11e7: Stack[-8] = Stack[-1]
0x11e8: Return(); Pop(6)

0x11e9: PushEmpty(cvector, cvector)
0x11ea: @@ GetPosition(Stack[-1])
0x11eb: Pop(0)
0x11ec: PushEmpty(bool, cvector)
0x11ed: Stack[-1] = Stack[-3]
0x11ee: Call2 0x11df

0x11ef: Stack[-6] = Stack[-2]
0x11f0: Pop(2)
0x11f1: Return(); Pop(2)

0x11f2: PushEmpty(bool, bool)
0x11f3: @ IsLoaded(Stack[-1])
0x11f4: Pop(0)
0x11f5: Stack[-3] = Stack[-1]
0x11f6: Return(); Pop(2)

0x11f7: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x11f8: @@ GetPosition(Stack[-8])
0x11f9: Pop(0)
0x11fa: @@ GetEyesHeight(Stack[-9])
0x11fb: Pop(0)
0x11fc: Push(CvectorIndex(Stack[-8], 1))
0x11fd: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x11fe: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x11ff: @ GetPosition(Stack[-7])
0x1200: Pop(0)
0x1201: @ GetEyesHeight(Stack[-9])
0x1202: Pop(0)
0x1203: Push(CvectorIndex(Stack[-7], 1))
0x1204: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1205: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1206: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1207: Push(CvectorIndex(Stack[-6], 1))
0x1208: Stack[-1] = (int) 0
0x1209: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x120a: Pop(0); Push(Stack[-6] | Stack[-6]);
0x120b: Pop(1); Push(Sqrt(Stack[-1]))
0x120c: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x120d: Stack[-5] = -Stack[-6]; Pop(0);
0x120e: Pop(0); Push(Stack[-6] * Stack[-19]);
0x120f: PushEmpty(cvector, cvector)
0x1210: Push(CVector(0.0, 1.0, 0.0))
0x1211: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1212: Call2 0x1311

0x1213: Pop(1)
0x1214: Push((int) 25)
0x1215: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1216: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1217: Push(CVector(0.0, 10.0, 0.0))
0x1218: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1219: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x121a: @ IsOverrideActive(Stack[-2])
0x121b: Pop(0)
0x121c: Push(Stack[-2])
0x121d: IF (Stack[-1] == 0) GOTO 0x1220; Pop(1)

0x121e: Stack[-21] = (bool) 0
0x121f: Return(); Pop(18)

0x1220: @ StopWorld()
0x1221: Pop(0)
0x1222: @ CameraTransit(Stack[-3], Stack[-5])
0x1223: Pop(0)
0x1224: Push(CvectorIndex(Stack[-4], 0))
0x1225: Push(CvectorIndex(Stack[-5], 2))
0x1226: @ Rotate(Stack[-2], Stack[-1])
0x1227: Pop(2)
0x1228: PushEmpty(bool)
0x1229: Call2 0x13b0

0x122a: Pop(0)
0x122b: IF (Stack[-1] == 0) GOTO 0x122d; Pop(1)

0x122c: GOTO 0x1235

0x122d: Push("head")
0x122e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x122f: Pop(1)
0x1230: Push(Stack[-1])
0x1231: IF (Stack[-1] == 0) GOTO 0x1235; Pop(1)

0x1232: Push("head")
0x1233: @ LookAsyncCamera(Stack[-1])
0x1234: Pop(1)
0x1235: @ CameraWaitForPlayFinish()
0x1236: Pop(0)
0x1237: @ ResumeWorld()
0x1238: Pop(0)
0x1239: Stack[-21] = (bool) 1
0x123a: Return(); Pop(18)

0x123b: PushEmpty(bool, bool)
0x123c: @ CameraSwitchToNormal()
0x123d: Pop(0)
0x123e: PushEmpty(bool)
0x123f: Call2 0x13b0

0x1240: Pop(0)
0x1241: IF (Stack[-1] == 0) GOTO 0x1243; Pop(1)

0x1242: GOTO 0x124b

0x1243: Push("head")
0x1244: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1245: Pop(1)
0x1246: Push(Stack[-1])
0x1247: IF (Stack[-1] == 0) GOTO 0x124b; Pop(1)

0x1248: Push("head")
0x1249: @ UnlookAsync(Stack[-1])
0x124a: Pop(1)
0x124b: Return(); Pop(2)

0x124c: PushEmpty(int, int, int, int)
0x124d: Push("voice_common")
0x124e: @ GetVariable(Stack[-1], Stack[-3])
0x124f: Pop(1)
0x1250: Push(Stack[-2])
0x1251: IF (Stack[-1] == 0) GOTO 0x1272; Pop(1)

0x1252: PushEmpty(bool, object)
0x1253: Stack[-1] = Stack[-7]
0x1254: Call2 0x1286

0x1255: Pop(1)
0x1256: Pop(1); Push((bool) Stack[-1] == 0)
0x1257: IF (Stack[-1] == 0) GOTO 0x1260; Pop(1)

0x1258: PushEmpty(bool, object)
0x1259: Stack[-1] = Stack[-7]
0x125a: Call2 0x12ab

0x125b: Pop(1)
0x125c: Pop(1); Push((bool) Stack[-1] == 0)
0x125d: IF (Stack[-1] == 0) GOTO 0x1260; Pop(1)

0x125e: Stack[-6] = (bool) 0
0x125f: Return(); Pop(4)

0x1260: Push((int) 2)
0x1261: @ irand(Stack[-2], Stack[-1])
0x1262: Pop(1)
0x1263: Push(Stack[-1])
0x1264: IF (Stack[-1] == 0) GOTO 0x126d; Pop(1)

0x1265: Push("voice_common")
0x1266: Push((int) 1)
0x1267: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1268: Push((int) 3)
0x1269: Pop(2); Push(Stack[-2] % Stack[-1]);
0x126a: @ SetVariable(Stack[-2], Stack[-1])
0x126b: Pop(2)
0x126c: GOTO 0x1271

0x126d: Push("voice_common")
0x126e: Push((int) 0)
0x126f: @ SetVariable(Stack[-2], Stack[-1])
0x1270: Pop(2)
0x1271: GOTO 0x1284

0x1272: PushEmpty(bool, object)
0x1273: Stack[-1] = Stack[-7]
0x1274: Call2 0x12ab

0x1275: Pop(1)
0x1276: Pop(1); Push((bool) Stack[-1] == 0)
0x1277: IF (Stack[-1] == 0) GOTO 0x1280; Pop(1)

0x1278: PushEmpty(bool, object)
0x1279: Stack[-1] = Stack[-7]
0x127a: Call2 0x1286

0x127b: Pop(1)
0x127c: Pop(1); Push((bool) Stack[-1] == 0)
0x127d: IF (Stack[-1] == 0) GOTO 0x1280; Pop(1)

0x127e: Stack[-6] = (bool) 0
0x127f: Return(); Pop(4)

0x1280: Push("voice_common")
0x1281: Push((int) 1)
0x1282: @ SetVariable(Stack[-2], Stack[-1])
0x1283: Pop(2)
0x1284: Stack[-6] = (bool) 1
0x1285: Return(); Pop(4)

0x1286: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1287: Stack[-5] = "c"
0x1288: Stack[-4] = (int) 0
0x1289: Push((int) 1)
0x128a: IF (Stack[-1] == 0) GOTO 0x1296; Pop(1)

0x128b: Push((int) 1)
0x128c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x128d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x128e: @@ HasProperty(Stack[-1], Stack[-4])
0x128f: Pop(1)
0x1290: Pop(0); Push((bool) Stack[-3] == 0)
0x1291: IF (Stack[-1] == 0) GOTO 0x1293; Pop(1)

0x1292: GOTO 0x1296

0x1293: Push((int) 1)
0x1294: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1295: GOTO 0x1289

0x1296: Pop(0); Push((bool) Stack[-4] == 0)
0x1297: IF (Stack[-1] == 0) GOTO 0x129a; Pop(1)

0x1298: Stack[-12] = (bool) 0
0x1299: Return(); Pop(10)

0x129a: Stack[-2] = (int) 0
0x129b: Push((int) 1)
0x129c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x129d: IF (Stack[-1] == 0) GOTO 0x12a0; Pop(1)

0x129e: @ irand(Stack[-2], Stack[-4])
0x129f: Pop(0)
0x12a0: Push((int) 1)
0x12a1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x12a2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x12a3: @@ GetProperty(Stack[-1], Stack[-2])
0x12a4: Pop(1)
0x12a5: PushEmpty(bool, string)
0x12a6: Stack[-1] = Stack[-3]
0x12a7: Call2 0x12f5

0x12a8: Stack[-14] = Stack[-2]
0x12a9: Pop(2)
0x12aa: Return(); Pop(10)

0x12ab: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x12ac: Push("d")
0x12ad: PushEmpty(int)
0x12ae: Call2 0x1381

0x12af: Pop(0)
0x12b0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12b1: Push("m")
0x12b2: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x12b3: Stack[-4] = (int) 0
0x12b4: Push((int) 1)
0x12b5: IF (Stack[-1] == 0) GOTO 0x12c1; Pop(1)

0x12b6: Push((int) 1)
0x12b7: Pop(1); Push(Stack[-5] + Stack[-1]);
0x12b8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x12b9: @@ HasProperty(Stack[-1], Stack[-4])
0x12ba: Pop(1)
0x12bb: Pop(0); Push((bool) Stack[-3] == 0)
0x12bc: IF (Stack[-1] == 0) GOTO 0x12be; Pop(1)

0x12bd: GOTO 0x12c1

0x12be: Push((int) 1)
0x12bf: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x12c0: GOTO 0x12b4

0x12c1: Pop(0); Push((bool) Stack[-4] == 0)
0x12c2: IF (Stack[-1] == 0) GOTO 0x12c5; Pop(1)

0x12c3: Stack[-12] = (bool) 0
0x12c4: Return(); Pop(10)

0x12c5: Stack[-2] = (int) 0
0x12c6: Push((int) 1)
0x12c7: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x12c8: IF (Stack[-1] == 0) GOTO 0x12cb; Pop(1)

0x12c9: @ irand(Stack[-2], Stack[-4])
0x12ca: Pop(0)
0x12cb: Push((int) 1)
0x12cc: Pop(1); Push(Stack[-3] + Stack[-1]);
0x12cd: Pop(1); Push(Stack[-6] + Stack[-1]);
0x12ce: @@ GetProperty(Stack[-1], Stack[-2])
0x12cf: Pop(1)
0x12d0: PushEmpty(bool, string)
0x12d1: Stack[-1] = Stack[-3]
0x12d2: Call2 0x12f5

0x12d3: Stack[-14] = Stack[-2]
0x12d4: Pop(2)
0x12d5: Return(); Pop(10)

0x12d6: PushEmpty(bool, float, float, bool, float, float)
0x12d7: @ lshHasAnimation(Stack[-3], Stack[-7])
0x12d8: Pop(0)
0x12d9: Push(Stack[-3])
0x12da: IF (Stack[-1] == 0) GOTO 0x12e1; Pop(1)

0x12db: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x12dc: Pop(0)
0x12dd: Push((bool) 0)
0x12de: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x12df: Pop(1)
0x12e0: GOTO 0x12e5

0x12e1: Push("Can't find lsh animation : ")
0x12e2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x12e3: @ Trace(Stack[-1])
0x12e4: Pop(1)
0x12e5: Return(); Pop(6)

0x12e6: PushEmpty(bool, float, float, bool, float, float)
0x12e7: @ lshHasAnimation(Stack[-3], Stack[-8])
0x12e8: Pop(0)
0x12e9: Push(Stack[-3])
0x12ea: IF (Stack[-1] == 0) GOTO 0x12f0; Pop(1)

0x12eb: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x12ec: Pop(0)
0x12ed: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x12ee: Pop(0)
0x12ef: GOTO 0x12f4

0x12f0: Push("Can't find lsh animation : ")
0x12f1: Pop(1); Push(Stack[-1] + Stack[-9]);
0x12f2: @ Trace(Stack[-1])
0x12f3: Pop(1)
0x12f4: Return(); Pop(6)

0x12f5: PushEmpty(bool, bool)
0x12f6: PushEmpty(bool)
0x12f7: Call2 0x13b0

0x12f8: Pop(0)
0x12f9: IF (Stack[-1] == 0) GOTO 0x1302; Pop(1)

0x12fa: @ lshHasSpeech(Stack[-1], Stack[-3])
0x12fb: Pop(0)
0x12fc: Push(Stack[-1])
0x12fd: IF (Stack[-1] == 0) GOTO 0x1302; Pop(1)

0x12fe: @ lshPlaySpeech(Stack[-3])
0x12ff: Pop(0)
0x1300: Stack[-4] = (bool) 1
0x1301: Return(); Pop(2)

0x1302: Stack[-4] = (bool) 0
0x1303: Return(); Pop(2)

0x1304: PushEmpty(bool)
0x1305: Call2 0x13b0

0x1306: Pop(0)
0x1307: IF (Stack[-1] == 0) GOTO 0x130a; Pop(1)

0x1308: @ lshStopSpeech()
0x1309: Pop(0)
0x130a: Return(); Pop(0)

0x130b: PushEmpty(object, object)
0x130c: @ self(Stack[-1])
0x130d: Pop(0)
0x130e: Stack[-3] = Stack[-1]
0x130f: Return(); Pop(2)

0x1310: Stack[-1] = 0
0x1311: PushEmpty(float, float)
0x1312: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1313: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1314: Push((float)0.0)
0x1315: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1316: IF (Stack[-1] == 0) GOTO 0x1319; Pop(1)

0x1317: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1318: Return(); Pop(2)

0x1319: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x131a: Return(); Pop(2)

0x131b: PushEmpty(int, int)
0x131c: @ GetVariable(Stack[-3], Stack[-1])
0x131d: Pop(0)
0x131e: Stack[-4] = Stack[-1]
0x131f: Return(); Pop(2)

0x1320: PushEmpty(object, object)
0x1321: @ CreateIntVector(Stack[-1])
0x1322: Pop(0)
0x1323: @@ add(Stack[-4])
0x1324: Pop(0)
0x1325: @@ add(Stack[-3])
0x1326: Pop(0)
0x1327: Push((int) 3)
0x1328: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x1329: Pop(1)
0x132a: Return(); Pop(2)

0x132b: Stack[-1] = 0
0x132c: PushEmpty(object, object)
0x132d: @ CreateIntVector(Stack[-1])
0x132e: Pop(0)
0x132f: @@ add(Stack[-4])
0x1330: Pop(0)
0x1331: @@ add(Stack[-3])
0x1332: Pop(0)
0x1333: Push((int) 4)
0x1334: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x1335: Pop(1)
0x1336: Return(); Pop(2)

0x1337: Stack[-1] = 0
0x1338: PushEmpty(int, int, bool, int, int, bool)
0x1339: @@ GetItemID(Stack[-3])
0x133a: Pop(0)
0x133b: Push("Category")
0x133c: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x133d: Pop(1)
0x133e: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x133f: Pop(0)
0x1340: Pop(0); Push((bool) Stack[-1] == 0)
0x1341: IF (Stack[-1] == 0) GOTO 0x1345; Pop(1)

0x1342: @@ DropItems(Stack[-8], Stack[-7])
0x1343: Pop(0)
0x1344: GOTO 0x134a

0x1345: PushEmpty(int, int)
0x1346: Stack[-2] = Stack[-5]
0x1347: Stack[-1] = Stack[-9]
0x1348: Call2 0x1320

0x1349: Pop(2)
0x134a: Return(); Pop(6)

0x134b: PushEmpty(object, object)
0x134c: @ CreateInvItem(Stack[-1])
0x134d: Pop(0)
0x134e: @@ SetItemName(Stack[-4])
0x134f: Pop(0)
0x1350: PushEmpty(object, object, int)
0x1351: Stack[-3] = Stack[-8]
0x1352: Stack[-2] = Stack[-4]
0x1353: Stack[-1] = Stack[-6]
0x1354: Call2 0x1338

0x1355: Pop(3)
0x1356: Return(); Pop(2)

0x1357: Stack[-1] = 0
0x1358: PushEmpty(int, bool, int, bool)
0x1359: @ GetInvItemByName(Stack[-2], Stack[-5])
0x135a: Pop(0)
0x135b: @@ HasItem(Stack[-2], Stack[-1])
0x135c: Pop(0)
0x135d: Stack[-7] = Stack[-1]
0x135e: Return(); Pop(4)

0x135f: PushEmpty(int, int, bool, int, int, bool)
0x1360: @ GetInvItemByName(Stack[-3], Stack[-7])
0x1361: Pop(0)
0x1362: Push("Category")
0x1363: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x1364: Pop(1)
0x1365: @@ RemoveItemByType(Stack[-1], Stack[-3], Stack[-2])
0x1366: Pop(0)
0x1367: Push(Stack[-1])
0x1368: IF (Stack[-1] == 0) GOTO 0x136e; Pop(1)

0x1369: PushEmpty(int, int)
0x136a: Stack[-2] = Stack[-5]
0x136b: Stack[-1] = (int) 1
0x136c: Call2 0x132c

0x136d: Pop(2)
0x136e: Stack[-9] = Stack[-1]
0x136f: Return(); Pop(6)

0x1370: PushEmpty(object, object)
0x1371: @ FindActor(Stack[-1], Stack[-4])
0x1372: Pop(0)
0x1373: Pop(0); Push((bool) Stack[-1] == 0)
0x1374: IF (Stack[-1] == 0) GOTO 0x1377; Pop(1)

0x1375: Stack[-5] = (bool) 0
0x1376: Return(); Pop(2)

0x1377: @ Trigger(Stack[-1], Stack[-3])
0x1378: Pop(0)
0x1379: Stack[-5] = (bool) 1
0x137a: Return(); Pop(2)

0x137b: Stack[-1] = 0
0x137c: PushEmpty(float, float)
0x137d: @ GetGameTime(Stack[-1])
0x137e: Pop(0)
0x137f: Stack[-3] = Stack[-1]
0x1380: Return(); Pop(2)

0x1381: PushEmpty(float, float)
0x1382: @ GetGameTime(Stack[-1])
0x1383: Pop(0)
0x1384: Push((int) 1)
0x1385: PushEmpty(int)
0x1386: Push((int) 24)
0x1387: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1388: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1389: Return(); Pop(2)

0x138a: PushEmpty()
0x138b: PushEmpty(int)
0x138c: Call2 0x1381

0x138d: Pop(0)
0x138e: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x138f: Return(); Pop(0)

0x1390: PushEmpty(string, string)
0x1391: Stack[-1] = "idle"
0x1392: Push(Stack[-3])
0x1393: IF (Stack[-1] == 0) GOTO 0x1395; Pop(1)

0x1394: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1395: Stack[-4] = Stack[-1]
0x1396: Return(); Pop(2)

0x1397: PushEmpty(int, bool, int, bool)
0x1398: Stack[-2] = (int) 0
0x1399: Push("all")
0x139a: PushEmpty(string, int)
0x139b: Stack[-1] = Stack[-5]
0x139c: Call2 0x1390

0x139d: Pop(1)
0x139e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x139f: Pop(2)
0x13a0: Pop(0); Push((bool) Stack[-1] == 0)
0x13a1: IF (Stack[-1] == 0) GOTO 0x13a3; Pop(1)

0x13a2: GOTO 0x13a6

0x13a3: Push((int) 1)
0x13a4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x13a5: GOTO 0x1399

0x13a6: Stack[-5] = Stack[-2]
0x13a7: Return(); Pop(4)

0x13a8: Stack[-1] = (int) 515551
0x13a9: Return(); Pop(0)

0x13aa: Stack[-1] = (int) 502876
0x13ab: Return(); Pop(0)

0x13ac: Stack[-1] = "ui/NPC_Rubin.png"
0x13ad: Return(); Pop(0)

0x13ae: Stack[-1] = "ui/NPC_Rubin_b.png"
0x13af: Return(); Pop(0)

0x13b0: Stack[-1] = (bool) 1
0x13b1: Return(); Pop(0)

0x13b2: PushEmpty()
0x13b3: Push("playsound")
0x13b4: Push("giveitem")
0x13b5: @ TriggerWorld(Stack[-2], Stack[-1])
0x13b6: Pop(2)
0x13b7: Return(); Pop(0)

0x13b8: PushEmpty()
0x13b9: PushEmpty(bool, object, string)
0x13ba: Stack[-2] = Stack[-5]
0x13bb: Stack[-1] = "d3q01_blood"
0x13bc: Call2 0x135f

0x13bd: Pop(3)
0x13be: Return(); Pop(0)

0x13bf: PushEmpty(object, object)
0x13c0: Push("d10q02")
0x13c1: Push((int) 2)
0x13c2: @ SetVariable(Stack[-2], Stack[-1])
0x13c3: Pop(2)
0x13c4: PushEmpty(object)
0x13c5: Call2 0x169f

0x13c6: Stack[-2] = Stack[-1]
0x13c7: Pop(1)
0x13c8: Push("d10q02RubinGotoMaria")
0x13c9: Push("pt_map_maria")
0x13ca: Push((int) 0)
0x13cb: Push((int) 515297)
0x13cc: PushEmpty(float)
0x13cd: Call2 0x137c

0x13ce: Pop(0)
0x13cf: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13d0: Pop(5)
0x13d1: PushEmpty()
0x13d2: Call2 0x161b

0x13d3: Pop(0)
0x13d4: Return(); Pop(2)

0x13d5: Stack[-1] = 0
0x13d6: PushEmpty()
0x13d7: Push("bluevaccine is given")
0x13d8: @ Trace(Stack[-1])
0x13d9: Pop(1)
0x13da: PushEmpty(object, string, int)
0x13db: Stack[-3] = Stack[-5]
0x13dc: Stack[-2] = "blue_vaccine"
0x13dd: Stack[-1] = (int) 1
0x13de: Call2 0x134b

0x13df: Pop(3)
0x13e0: Return(); Pop(0)

0x13e1: PushEmpty()
0x13e2: Push("ood4Rubin1")
0x13e3: Push((int) 1)
0x13e4: @ SetVariable(Stack[-2], Stack[-1])
0x13e5: Pop(2)
0x13e6: Return(); Pop(0)

0x13e7: PushEmpty()
0x13e8: Push("ood4Rubin2")
0x13e9: Push((int) 1)
0x13ea: @ SetVariable(Stack[-2], Stack[-1])
0x13eb: Pop(2)
0x13ec: Return(); Pop(0)

0x13ed: PushEmpty()
0x13ee: Push("lens is given")
0x13ef: @ Trace(Stack[-1])
0x13f0: Pop(1)
0x13f1: PushEmpty(object, string, int)
0x13f2: Stack[-3] = Stack[-5]
0x13f3: Stack[-2] = "lens"
0x13f4: Stack[-1] = (int) 1
0x13f5: Call2 0x134b

0x13f6: Pop(3)
0x13f7: Return(); Pop(0)

0x13f8: PushEmpty()
0x13f9: Push("ood6Rubin1")
0x13fa: Push((int) 1)
0x13fb: @ SetVariable(Stack[-2], Stack[-1])
0x13fc: Pop(2)
0x13fd: Return(); Pop(0)

0x13fe: PushEmpty()
0x13ff: Push("playsound")
0x1400: Push("giveitem")
0x1401: @ TriggerWorld(Stack[-2], Stack[-1])
0x1402: Pop(2)
0x1403: Return(); Pop(0)

0x1404: PushEmpty(object, object)
0x1405: Push("d3q01")
0x1406: Push((int) 1)
0x1407: @ SetVariable(Stack[-2], Stack[-1])
0x1408: Pop(2)
0x1409: PushEmpty(object)
0x140a: Call2 0x169f

0x140b: Stack[-2] = Stack[-1]
0x140c: Pop(1)
0x140d: Push("d3q01RubinGotoAlexandr")
0x140e: Push("pt_map_alexandr")
0x140f: Push((int) 1)
0x1410: Push((int) 511151)
0x1411: PushEmpty(float)
0x1412: Call2 0x137c

0x1413: Pop(0)
0x1414: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1415: Pop(5)
0x1416: PushEmpty()
0x1417: Call2 0x1628

0x1418: Pop(0)
0x1419: PushEmpty()
0x141a: Call2 0x1635

0x141b: Pop(0)
0x141c: Return(); Pop(2)

0x141d: Stack[-1] = 0
0x141e: PushEmpty()
0x141f: Push("ood3Rubin1")
0x1420: Push((int) 1)
0x1421: @ SetVariable(Stack[-2], Stack[-1])
0x1422: Pop(2)
0x1423: Return(); Pop(0)

0x1424: PushEmpty()
0x1425: Push("ood3Rubin2")
0x1426: Push((int) 1)
0x1427: @ SetVariable(Stack[-2], Stack[-1])
0x1428: Pop(2)
0x1429: Return(); Pop(0)

0x142a: PushEmpty()
0x142b: Push("ood3Rubin3")
0x142c: Push((int) 1)
0x142d: @ SetVariable(Stack[-2], Stack[-1])
0x142e: Pop(2)
0x142f: Return(); Pop(0)

0x1430: PushEmpty()
0x1431: PushEmpty(object, string, float)
0x1432: PushEmpty(object)
0x1433: Call2 0x169f

0x1434: Stack[-4] = Stack[-1]
0x1435: Pop(1)
0x1436: Stack[-2] = "pt_map_alexandr"
0x1437: Stack[-1] = (int) 2
0x1438: Call2 0x16b0

0x1439: Pop(3)
0x143a: PushEmpty(object)
0x143b: Call2 0x169f

0x143c: Pop(0)
0x143d: @@ ShowMap(Stack[-1])
0x143e: Pop(1)
0x143f: Return(); Pop(0)

0x1440: PushEmpty()
0x1441: PushEmpty(object, string, float)
0x1442: PushEmpty(object)
0x1443: Call2 0x169f

0x1444: Stack[-4] = Stack[-1]
0x1445: Pop(1)
0x1446: Stack[-2] = "pt_map_bigvlad"
0x1447: Stack[-1] = (int) 2
0x1448: Call2 0x16b0

0x1449: Pop(3)
0x144a: PushEmpty(object)
0x144b: Call2 0x169f

0x144c: Pop(0)
0x144d: @@ ShowMap(Stack[-1])
0x144e: Pop(1)
0x144f: Return(); Pop(0)

0x1450: PushEmpty()
0x1451: PushEmpty()
0x1452: Call2 0x1642

0x1453: Pop(0)
0x1454: PushEmpty(bool, string, string)
0x1455: Stack[-2] = "quest_d3_01"
0x1456: Stack[-1] = "completed"
0x1457: Call2 0x1370

0x1458: Pop(3)
0x1459: Return(); Pop(0)

0x145a: PushEmpty()
0x145b: Push("d3RubinToldWhereIsSimon")
0x145c: Push((int) 1)
0x145d: @ SetVariable(Stack[-2], Stack[-1])
0x145e: Pop(2)
0x145f: Return(); Pop(0)

0x1460: PushEmpty()
0x1461: Push("ood5Rubin1")
0x1462: Push((int) 1)
0x1463: @ SetVariable(Stack[-2], Stack[-1])
0x1464: Pop(2)
0x1465: Return(); Pop(0)

0x1466: PushEmpty(object, object)
0x1467: Push("d5q01")
0x1468: Push((int) 1)
0x1469: @ SetVariable(Stack[-2], Stack[-1])
0x146a: Pop(2)
0x146b: PushEmpty(object)
0x146c: Call2 0x169f

0x146d: Stack[-2] = Stack[-1]
0x146e: Pop(1)
0x146f: Push("d5q01RubinGotoBigVlad")
0x1470: Push("pt_map_bigvlad")
0x1471: Push((int) 1)
0x1472: Push((int) 511956)
0x1473: PushEmpty(float)
0x1474: Call2 0x137c

0x1475: Pop(0)
0x1476: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1477: Pop(5)
0x1478: Push("d5q01RubinGotoBigVladSelf")
0x1479: Push("pt_map_rubin")
0x147a: Push((int) 1)
0x147b: Push((int) 515348)
0x147c: PushEmpty(float)
0x147d: Call2 0x137c

0x147e: Pop(0)
0x147f: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1480: Pop(5)
0x1481: PushEmpty()
0x1482: Call2 0x164f

0x1483: Pop(0)
0x1484: PushEmpty()
0x1485: Call2 0x165c

0x1486: Pop(0)
0x1487: Return(); Pop(2)

0x1488: Stack[-1] = 0
0x1489: PushEmpty()
0x148a: Push("ood5Rubin2")
0x148b: Push((int) 1)
0x148c: @ SetVariable(Stack[-2], Stack[-1])
0x148d: Pop(2)
0x148e: Return(); Pop(0)

0x148f: PushEmpty(object, object, int, object, object, int)
0x1490: PushEmpty(object)
0x1491: Call2 0x169f

0x1492: Stack[-4] = Stack[-1]
0x1493: Pop(1)
0x1494: Push("d5q01AlexandrGotoKaterina")
0x1495: @@ FindMark(Stack[-3], Stack[-1])
0x1496: Pop(1)
0x1497: Push(Stack[-2])
0x1498: IF (Stack[-1] == 0) GOTO 0x149b; Pop(1)

0x1499: @@ Remove()
0x149a: Pop(0)
0x149b: Push("d5q01BigVladGotoAlexandr")
0x149c: @@ FindMark(Stack[-3], Stack[-1])
0x149d: Pop(1)
0x149e: Push(Stack[-2])
0x149f: IF (Stack[-1] == 0) GOTO 0x14a2; Pop(1)

0x14a0: @@ Remove()
0x14a1: Pop(0)
0x14a2: Push("d5q01BurahMeeting")
0x14a3: @@ FindMark(Stack[-3], Stack[-1])
0x14a4: Pop(1)
0x14a5: Push(Stack[-2])
0x14a6: IF (Stack[-1] == 0) GOTO 0x14a9; Pop(1)

0x14a7: @@ Remove()
0x14a8: Pop(0)
0x14a9: Push("d7q04NudeGotoAndrei")
0x14aa: @@ FindMark(Stack[-3], Stack[-1])
0x14ab: Pop(1)
0x14ac: Push(Stack[-2])
0x14ad: IF (Stack[-1] == 0) GOTO 0x14b0; Pop(1)

0x14ae: @@ Remove()
0x14af: Pop(0)
0x14b0: Push("d5q01GrifWantsMoney")
0x14b1: @@ FindMark(Stack[-3], Stack[-1])
0x14b2: Pop(1)
0x14b3: Push(Stack[-2])
0x14b4: IF (Stack[-1] == 0) GOTO 0x14b7; Pop(1)

0x14b5: @@ Remove()
0x14b6: Pop(0)
0x14b7: Push("d5q01GrifWillHelp")
0x14b8: @@ FindMark(Stack[-3], Stack[-1])
0x14b9: Pop(1)
0x14ba: Push(Stack[-2])
0x14bb: IF (Stack[-1] == 0) GOTO 0x14be; Pop(1)

0x14bc: @@ Remove()
0x14bd: Pop(0)
0x14be: Push("d5q01BigVladGotoLara")
0x14bf: @@ FindMark(Stack[-3], Stack[-1])
0x14c0: Pop(1)
0x14c1: Push(Stack[-2])
0x14c2: IF (Stack[-1] == 0) GOTO 0x14c5; Pop(1)

0x14c3: @@ Remove()
0x14c4: Pop(0)
0x14c5: Push("d5q01PatrolGotoGrif")
0x14c6: @@ FindMark(Stack[-3], Stack[-1])
0x14c7: Pop(1)
0x14c8: Push(Stack[-2])
0x14c9: IF (Stack[-1] == 0) GOTO 0x14cc; Pop(1)

0x14ca: @@ Remove()
0x14cb: Pop(0)
0x14cc: Push("d5q01RubinGotoBigVlad")
0x14cd: @@ FindMark(Stack[-3], Stack[-1])
0x14ce: Pop(1)
0x14cf: Push(Stack[-2])
0x14d0: IF (Stack[-1] == 0) GOTO 0x14d3; Pop(1)

0x14d1: @@ Remove()
0x14d2: Pop(0)
0x14d3: Push("d5q01RubinGotoBigVladSelf")
0x14d4: @@ FindMark(Stack[-3], Stack[-1])
0x14d5: Pop(1)
0x14d6: Push(Stack[-2])
0x14d7: IF (Stack[-1] == 0) GOTO 0x14da; Pop(1)

0x14d8: @@ Remove()
0x14d9: Pop(0)
0x14da: PushEmpty()
0x14db: Call2 0x1669

0x14dc: Pop(0)
0x14dd: Push("d5q01_heart")
0x14de: Push((int) 1)
0x14df: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x14e0: Pop(2)
0x14e1: PushEmpty(bool, string, string)
0x14e2: Stack[-2] = "quest_d5_01"
0x14e3: Stack[-1] = "completed"
0x14e4: Call2 0x1370

0x14e5: Pop(3)
0x14e6: Return(); Pop(6)

0x14e7: Stack[-2] = 0
0x14e8: Stack[-3] = 0
0x14e9: PushEmpty(object, object)
0x14ea: Push("d6RubinGoesToGeorg")
0x14eb: Push((int) 1)
0x14ec: @ SetVariable(Stack[-2], Stack[-1])
0x14ed: Pop(2)
0x14ee: Push("warehouse_rubin")
0x14ef: @ GetSceneByName(Stack[-2], Stack[-1])
0x14f0: Pop(1)
0x14f1: Push("norubin")
0x14f2: @ Trigger(Stack[-2], Stack[-1])
0x14f3: Pop(1)
0x14f4: Return(); Pop(2)

0x14f5: Stack[-1] = 0
0x14f6: PushEmpty()
0x14f7: Push("whitevaccine is given")
0x14f8: @ Trace(Stack[-1])
0x14f9: Pop(1)
0x14fa: PushEmpty(object, string, int)
0x14fb: Stack[-3] = Stack[-5]
0x14fc: Stack[-2] = "white_vaccine"
0x14fd: Stack[-1] = (int) 1
0x14fe: Call2 0x134b

0x14ff: Pop(3)
0x1500: Return(); Pop(0)

0x1501: PushEmpty()
0x1502: PushEmpty(object, string, float)
0x1503: PushEmpty(object)
0x1504: Call2 0x169f

0x1505: Stack[-4] = Stack[-1]
0x1506: Pop(1)
0x1507: Stack[-2] = "pt_map_maria"
0x1508: Stack[-1] = (int) 2
0x1509: Call2 0x16b0

0x150a: Pop(3)
0x150b: PushEmpty(object)
0x150c: Call2 0x169f

0x150d: Pop(0)
0x150e: @@ ShowMap(Stack[-1])
0x150f: Pop(1)
0x1510: Return(); Pop(0)

0x1511: PushEmpty()
0x1512: Push("d3RubinVisit")
0x1513: Push((int) 1)
0x1514: @ SetVariable(Stack[-2], Stack[-1])
0x1515: Pop(2)
0x1516: Return(); Pop(0)

0x1517: PushEmpty()
0x1518: Push("d5RubinVisit")
0x1519: Push((int) 1)
0x151a: @ SetVariable(Stack[-2], Stack[-1])
0x151b: Pop(2)
0x151c: Return(); Pop(0)

0x151d: PushEmpty()
0x151e: Push("ood5Rubin3")
0x151f: Push((int) 1)
0x1520: @ SetVariable(Stack[-2], Stack[-1])
0x1521: Pop(2)
0x1522: Return(); Pop(0)

0x1523: PushEmpty()
0x1524: PushEmpty(int, string)
0x1525: Stack[-1] = "d10q02"
0x1526: Call2 0x131b

0x1527: Pop(1)
0x1528: Push((int) 1)
0x1529: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x152a: IF (Stack[-1] == 0) GOTO 0x152d; Pop(1)

0x152b: Stack[-2] = (bool) 1
0x152c: Return(); Pop(0)

0x152d: Stack[-2] = (bool) 0
0x152e: Return(); Pop(0)

0x152f: PushEmpty()
0x1530: PushEmpty(int, string)
0x1531: Stack[-1] = "microscope_d3q01_blood"
0x1532: Call2 0x131b

0x1533: Pop(1)
0x1534: Push((int) 0)
0x1535: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1536: IF (Stack[-1] == 0) GOTO 0x1539; Pop(1)

0x1537: Stack[-2] = (bool) 1
0x1538: Return(); Pop(0)

0x1539: Stack[-2] = (bool) 0
0x153a: Return(); Pop(0)

0x153b: PushEmpty()
0x153c: PushEmpty(int, string)
0x153d: Stack[-1] = "ood4Rubin1"
0x153e: Call2 0x131b

0x153f: Pop(1)
0x1540: Push((int) 0)
0x1541: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1542: IF (Stack[-1] == 0) GOTO 0x1545; Pop(1)

0x1543: Stack[-2] = (bool) 1
0x1544: Return(); Pop(0)

0x1545: Stack[-2] = (bool) 0
0x1546: Return(); Pop(0)

0x1547: PushEmpty()
0x1548: PushEmpty(int, string)
0x1549: Stack[-1] = "ood4Rubin2"
0x154a: Call2 0x131b

0x154b: Pop(1)
0x154c: Push((int) 0)
0x154d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x154e: IF (Stack[-1] == 0) GOTO 0x1551; Pop(1)

0x154f: Stack[-2] = (bool) 1
0x1550: Return(); Pop(0)

0x1551: Stack[-2] = (bool) 0
0x1552: Return(); Pop(0)

0x1553: PushEmpty()
0x1554: PushEmpty(int, string)
0x1555: Stack[-1] = "ood6Rubin1"
0x1556: Call2 0x131b

0x1557: Pop(1)
0x1558: Push((int) 0)
0x1559: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x155a: IF (Stack[-1] == 0) GOTO 0x155d; Pop(1)

0x155b: Stack[-2] = (bool) 1
0x155c: Return(); Pop(0)

0x155d: Stack[-2] = (bool) 0
0x155e: Return(); Pop(0)

0x155f: PushEmpty()
0x1560: PushEmpty(int, string)
0x1561: Stack[-1] = "d3q01"
0x1562: Call2 0x131b

0x1563: Pop(1)
0x1564: Push((int) 0)
0x1565: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1566: IF (Stack[-1] == 0) GOTO 0x1569; Pop(1)

0x1567: Stack[-2] = (bool) 1
0x1568: Return(); Pop(0)

0x1569: Stack[-2] = (bool) 0
0x156a: Return(); Pop(0)

0x156b: PushEmpty()
0x156c: PushEmpty(int, string)
0x156d: Stack[-1] = "ood3Rubin1"
0x156e: Call2 0x131b

0x156f: Pop(1)
0x1570: Push((int) 0)
0x1571: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1572: IF (Stack[-1] == 0) GOTO 0x1575; Pop(1)

0x1573: Stack[-2] = (bool) 1
0x1574: Return(); Pop(0)

0x1575: Stack[-2] = (bool) 0
0x1576: Return(); Pop(0)

0x1577: PushEmpty()
0x1578: PushEmpty(int, string)
0x1579: Stack[-1] = "ood3Rubin2"
0x157a: Call2 0x131b

0x157b: Pop(1)
0x157c: Push((int) 0)
0x157d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x157e: IF (Stack[-1] == 0) GOTO 0x1581; Pop(1)

0x157f: Stack[-2] = (bool) 1
0x1580: Return(); Pop(0)

0x1581: Stack[-2] = (bool) 0
0x1582: Return(); Pop(0)

0x1583: PushEmpty()
0x1584: PushEmpty(int, string)
0x1585: Stack[-1] = "ood3Rubin3"
0x1586: Call2 0x131b

0x1587: Pop(1)
0x1588: Push((int) 0)
0x1589: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x158a: IF (Stack[-1] == 0) GOTO 0x158d; Pop(1)

0x158b: Stack[-2] = (bool) 1
0x158c: Return(); Pop(0)

0x158d: Stack[-2] = (bool) 0
0x158e: Return(); Pop(0)

0x158f: PushEmpty()
0x1590: PushEmpty(int, string)
0x1591: Stack[-1] = "d3q01"
0x1592: Call2 0x131b

0x1593: Pop(1)
0x1594: Push((int) 1000)
0x1595: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1596: IF (Stack[-1] == 0) GOTO 0x1599; Pop(1)

0x1597: Stack[-2] = (bool) 1
0x1598: Return(); Pop(0)

0x1599: Stack[-2] = (bool) 0
0x159a: Return(); Pop(0)

0x159b: PushEmpty()
0x159c: PushEmpty(bool, object, string)
0x159d: Stack[-2] = Stack[-4]
0x159e: Stack[-1] = "d3q01_blood"
0x159f: Call2 0x1358

0x15a0: Pop(2)
0x15a1: IF (Stack[-1] == 0) GOTO 0x15a4; Pop(1)

0x15a2: Stack[-2] = (bool) 1
0x15a3: Return(); Pop(0)

0x15a4: Stack[-2] = (bool) 0
0x15a5: Return(); Pop(0)

0x15a6: PushEmpty()
0x15a7: PushEmpty(int, string)
0x15a8: Stack[-1] = "ood5Rubin1"
0x15a9: Call2 0x131b

0x15aa: Pop(1)
0x15ab: Push((int) 0)
0x15ac: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15ad: IF (Stack[-1] == 0) GOTO 0x15b0; Pop(1)

0x15ae: Stack[-2] = (bool) 1
0x15af: Return(); Pop(0)

0x15b0: Stack[-2] = (bool) 0
0x15b1: Return(); Pop(0)

0x15b2: PushEmpty()
0x15b3: PushEmpty(int, string)
0x15b4: Stack[-1] = "d5q01"
0x15b5: Call2 0x131b

0x15b6: Pop(1)
0x15b7: Push((int) 7)
0x15b8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15b9: IF (Stack[-1] == 0) GOTO 0x15bc; Pop(1)

0x15ba: Stack[-2] = (bool) 1
0x15bb: Return(); Pop(0)

0x15bc: Stack[-2] = (bool) 0
0x15bd: Return(); Pop(0)

0x15be: PushEmpty()
0x15bf: PushEmpty(int, string)
0x15c0: Stack[-1] = "ood5Rubin2"
0x15c1: Call2 0x131b

0x15c2: Pop(1)
0x15c3: Push((int) 0)
0x15c4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15c5: IF (Stack[-1] == 0) GOTO 0x15c8; Pop(1)

0x15c6: Stack[-2] = (bool) 1
0x15c7: Return(); Pop(0)

0x15c8: Stack[-2] = (bool) 0
0x15c9: Return(); Pop(0)

0x15ca: PushEmpty()
0x15cb: PushEmpty(bool, object, string)
0x15cc: Stack[-2] = Stack[-4]
0x15cd: Stack[-1] = "d5q01_heart"
0x15ce: Call2 0x1358

0x15cf: Pop(2)
0x15d0: IF (Stack[-1] == 0) GOTO 0x15d3; Pop(1)

0x15d1: Stack[-2] = (bool) 1
0x15d2: Return(); Pop(0)

0x15d3: Stack[-2] = (bool) 0
0x15d4: Return(); Pop(0)

0x15d5: PushEmpty()
0x15d6: PushEmpty(int, string)
0x15d7: Stack[-1] = "d6RubinGoesToGeorg"
0x15d8: Call2 0x131b

0x15d9: Pop(1)
0x15da: Push((int) 0)
0x15db: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x15dc: IF (Stack[-1] == 0) GOTO 0x15df; Pop(1)

0x15dd: Stack[-2] = (bool) 1
0x15de: Return(); Pop(0)

0x15df: Stack[-2] = (bool) 0
0x15e0: Return(); Pop(0)

0x15e1: PushEmpty()
0x15e2: PushEmpty(int, string)
0x15e3: Stack[-1] = "d5q01"
0x15e4: Call2 0x131b

0x15e5: Pop(1)
0x15e6: Push((int) 0)
0x15e7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15e8: IF (Stack[-1] == 0) GOTO 0x15eb; Pop(1)

0x15e9: Stack[-2] = (bool) 1
0x15ea: Return(); Pop(0)

0x15eb: Stack[-2] = (bool) 0
0x15ec: Return(); Pop(0)

0x15ed: PushEmpty()
0x15ee: PushEmpty(int, string)
0x15ef: Stack[-1] = "ood5Rubin3"
0x15f0: Call2 0x131b

0x15f1: Pop(1)
0x15f2: Push((int) 0)
0x15f3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15f4: IF (Stack[-1] == 0) GOTO 0x15f7; Pop(1)

0x15f5: Stack[-2] = (bool) 1
0x15f6: Return(); Pop(0)

0x15f7: Stack[-2] = (bool) 0
0x15f8: Return(); Pop(0)

0x15f9: PushEmpty()
0x15fa: PushEmpty(bool)
0x15fb: Stack[-1] = (bool) 0
0x15fc: PushEmpty(bool)
0x15fd: Stack[-1] = (bool) 0
0x15fe: PushEmpty(int, string)
0x15ff: Stack[-1] = "d5q01"
0x1600: Call2 0x131b

0x1601: Pop(1)
0x1602: Push((int) 0)
0x1603: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1604: IF (Stack[-1] == 0) GOTO 0x160d; Pop(1)

0x1605: PushEmpty(int, string)
0x1606: Stack[-1] = "d5q01"
0x1607: Call2 0x131b

0x1608: Pop(1)
0x1609: Push((int) -1)
0x160a: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x160b: IF (Stack[-1] == 0) GOTO 0x160d; Pop(1)

0x160c: Stack[-1] = (bool) 1
0x160d: IF (Stack[-1] == 0) GOTO 0x1616; Pop(1)

0x160e: PushEmpty(int, string)
0x160f: Stack[-1] = "d5q01"
0x1610: Call2 0x131b

0x1611: Pop(1)
0x1612: Push((int) 1000)
0x1613: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1614: IF (Stack[-1] == 0) GOTO 0x1616; Pop(1)

0x1615: Stack[-1] = (bool) 1
0x1616: IF (Stack[-1] == 0) GOTO 0x1619; Pop(1)

0x1617: Stack[-2] = (bool) 1
0x1618: Return(); Pop(0)

0x1619: Stack[-2] = (bool) 0
0x161a: Return(); Pop(0)

0x161b: PushEmpty(object, object)
0x161c: Push((int) 668)
0x161d: Push((int) 2)
0x161e: Push((int) 534122)
0x161f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1620: Pop(3)
0x1621: PushEmpty(bool, object, int)
0x1622: Stack[-2] = Stack[-4]
0x1623: Stack[-1] = (int) 666
0x1624: Call2 0x1683

0x1625: Pop(3)
0x1626: Return(); Pop(2)

0x1627: Stack[-1] = 0
0x1628: PushEmpty(object, object)
0x1629: Push((int) 25)
0x162a: Push((int) 1)
0x162b: Push((int) 503365)
0x162c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x162d: Pop(3)
0x162e: PushEmpty(bool, object, int)
0x162f: Stack[-2] = Stack[-4]
0x1630: Stack[-1] = (int) -1
0x1631: Call2 0x1683

0x1632: Pop(3)
0x1633: Return(); Pop(2)

0x1634: Stack[-1] = 0
0x1635: PushEmpty(object, object)
0x1636: Push((int) 68)
0x1637: Push((int) 1)
0x1638: Push((int) 512150)
0x1639: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x163a: Pop(3)
0x163b: PushEmpty(bool, object, int)
0x163c: Stack[-2] = Stack[-4]
0x163d: Stack[-1] = (int) 25
0x163e: Call2 0x1683

0x163f: Pop(3)
0x1640: Return(); Pop(2)

0x1641: Stack[-1] = 0
0x1642: PushEmpty(object, object)
0x1643: Push((int) 74)
0x1644: Push((int) 1)
0x1645: Push((int) 512156)
0x1646: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1647: Pop(3)
0x1648: PushEmpty(bool, object, int)
0x1649: Stack[-2] = Stack[-4]
0x164a: Stack[-1] = (int) 25
0x164b: Call2 0x1683

0x164c: Pop(3)
0x164d: Return(); Pop(2)

0x164e: Stack[-1] = 0
0x164f: PushEmpty(object, object)
0x1650: Push((int) 139)
0x1651: Push((int) 1)
0x1652: Push((int) 515339)
0x1653: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1654: Pop(3)
0x1655: PushEmpty(bool, object, int)
0x1656: Stack[-2] = Stack[-4]
0x1657: Stack[-1] = (int) -1
0x1658: Call2 0x1683

0x1659: Pop(3)
0x165a: Return(); Pop(2)

0x165b: Stack[-1] = 0
0x165c: PushEmpty(object, object)
0x165d: Push((int) 140)
0x165e: Push((int) 1)
0x165f: Push((int) 515340)
0x1660: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1661: Pop(3)
0x1662: PushEmpty(bool, object, int)
0x1663: Stack[-2] = Stack[-4]
0x1664: Stack[-1] = (int) 139
0x1665: Call2 0x1683

0x1666: Pop(3)
0x1667: Return(); Pop(2)

0x1668: Stack[-1] = 0
0x1669: PushEmpty(object, object)
0x166a: Push((int) 147)
0x166b: Push((int) 1)
0x166c: Push((int) 515347)
0x166d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x166e: Pop(3)
0x166f: PushEmpty(bool, object, int)
0x1670: Stack[-2] = Stack[-4]
0x1671: Stack[-1] = (int) 139
0x1672: Call2 0x1683

0x1673: Pop(3)
0x1674: Return(); Pop(2)

0x1675: Stack[-1] = 0
0x1676: PushEmpty(object, object)
0x1677: @ GetDiaryRoot(Stack[-1])
0x1678: Pop(0)
0x1679: Pop(0); Push((bool) Stack[-1] == 0)
0x167a: IF (Stack[-1] == 0) GOTO 0x1680; Pop(1)

0x167b: Push("Can't retrieve diary root")
0x167c: @ Trace(Stack[-1])
0x167d: Pop(1)
0x167e: Stack[-3] = (bool) 0
0x167f: Return(); Pop(2)

0x1680: Stack[-3] = Stack[-1]
0x1681: Return(); Pop(2)

0x1682: Stack[-1] = 0
0x1683: PushEmpty(object, object, int, object, object, int)
0x1684: PushEmpty(object)
0x1685: Call2 0x1676

0x1686: Stack[-4] = Stack[-1]
0x1687: Pop(1)
0x1688: @@ Find(Stack[-7], Stack[-2])
0x1689: Pop(0)
0x168a: Pop(0); Push((bool) Stack[-2] == 0)
0x168b: IF (Stack[-1] == 0) GOTO 0x1692; Pop(1)

0x168c: Push("Can't find diary parent with id: ")
0x168d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x168e: @ Trace(Stack[-1])
0x168f: Pop(1)
0x1690: Stack[-9] = (bool) 0
0x1691: Return(); Pop(6)

0x1692: @@ AddChild(Stack[-8])
0x1693: Pop(0)
0x1694: Push((int) 7)
0x1695: @ SendWorldWndMessage(Stack[-1])
0x1696: Pop(1)
0x1697: @@ GetCategory(Stack[-1])
0x1698: Pop(0)
0x1699: @ SetDiarySection(Stack[-1])
0x169a: Pop(0)
0x169b: Stack[-9] = (bool) 0
0x169c: Return(); Pop(6)

0x169d: Stack[-2] = 0
0x169e: Stack[-3] = 0
0x169f: PushEmpty(object, object, object, object)
0x16a0: @ GetMainOutdoorScene(Stack[-2])
0x16a1: Pop(0)
0x16a2: Pop(0); Push((bool) Stack[-2] == 0)
0x16a3: IF (Stack[-1] == 0) GOTO 0x16aa; Pop(1)

0x16a4: Push("Can't find main outdoor scene")
0x16a5: @ Trace(Stack[-1])
0x16a6: Pop(1)
0x16a7: Stack[-1] = 0
0x16a8: Stack[-5] = Stack[-1]
0x16a9: Return(); Pop(4)

0x16aa: @@ GetMap(Stack[-1])
0x16ab: Pop(0)
0x16ac: Stack[-5] = Stack[-1]
0x16ad: Return(); Pop(4)

0x16ae: Stack[-1] = 0
0x16af: Stack[-2] = 0
0x16b0: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x16b1: @ GetMainOutdoorScene(Stack[-2])
0x16b2: Pop(0)
0x16b3: Pop(0); Push((bool) Stack[-2] == 0)
0x16b4: IF (Stack[-1] == 0) GOTO 0x16b9; Pop(1)

0x16b5: Push("Can't find main outdoor scene")
0x16b6: @ Trace(Stack[-1])
0x16b7: Pop(1)
0x16b8: Return(); Pop(8)

0x16b9: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x16ba: Pop(0)
0x16bb: Pop(0); Push((bool) Stack[-1] == 0)
0x16bc: IF (Stack[-1] == 0) GOTO 0x16c3; Pop(1)

0x16bd: Push("Warning: outdoor scene locator ")
0x16be: Pop(1); Push(Stack[-1] + Stack[-11]);
0x16bf: Push(" doesnt exist")
0x16c0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x16c1: @ Trace(Stack[-1])
0x16c2: Pop(1)
0x16c3: @@ GetMap(Stack[-11])
0x16c4: Pop(0)
0x16c5: Pop(0); Push((bool) Stack[-11] == 0)
0x16c6: IF (Stack[-1] == 0) GOTO 0x16cb; Pop(1)

0x16c7: Push("Can't find map")
0x16c8: @ Trace(Stack[-1])
0x16c9: Pop(1)
0x16ca: Return(); Pop(8)

0x16cb: Push(CvectorIndex(Stack[-4], 0))
0x16cc: Push(CvectorIndex(Stack[-5], 2))
0x16cd: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x16ce: Pop(2)
0x16cf: Return(); Pop(8)

0x16d0: Stack[-2] = 0
0x16d1: PushEmpty(int, int)
0x16d2: Push("branch")
0x16d3: @ GetVariable(Stack[-1], Stack[-2])
0x16d4: Pop(1)
0x16d5: Push((int) 0)
0x16d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16d7: IF (Stack[-1] == 0) GOTO 0x16db; Pop(1)

0x16d8: Stack[-3] = (int) 1
0x16d9: Return(); Pop(2)

0x16da: GOTO 0x16e0

0x16db: Push((int) 1)
0x16dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16dd: IF (Stack[-1] == 0) GOTO 0x16e0; Pop(1)

0x16de: Stack[-3] = (int) 2
0x16df: Return(); Pop(2)

0x16e0: Stack[-3] = (int) 3
0x16e1: Return(); Pop(2)

0x16e2: PushEmpty()
0x16e3: PushEmpty(bool, int)
0x16e4: Stack[-1] = (int) 3
0x16e5: Call2 0x138a

0x16e6: Pop(1)
0x16e7: IF (Stack[-1] == 0) GOTO 0x16ef; Pop(1)

0x16e8: PushEmpty(int, object)
0x16e9: Stack[-1] = Stack[-3]
0x16ea: Push(-2, 1); TaskCall(4)
0x16eb: Call2 0x282

0x16ec: Pop(-2, 1); TaskReturn
0x16ed: Pop(2)
0x16ee: Return(); Pop(0)

0x16ef: PushEmpty(bool, int)
0x16f0: Stack[-1] = (int) 4
0x16f1: Call2 0x138a

0x16f2: Pop(1)
0x16f3: IF (Stack[-1] == 0) GOTO 0x16fb; Pop(1)

0x16f4: PushEmpty(int, object)
0x16f5: Stack[-1] = Stack[-3]
0x16f6: Push(-2, 1); TaskCall(8)
0x16f7: Call2 0xd4f

0x16f8: Pop(-2, 1); TaskReturn
0x16f9: Pop(2)
0x16fa: Return(); Pop(0)

0x16fb: PushEmpty(bool, int)
0x16fc: Stack[-1] = (int) 5
0x16fd: Call2 0x138a

0x16fe: Pop(1)
0x16ff: IF (Stack[-1] == 0) GOTO 0x1707; Pop(1)

0x1700: PushEmpty(int, object)
0x1701: Stack[-1] = Stack[-3]
0x1702: Push(-2, 1); TaskCall(6)
0x1703: Call2 0x8a4

0x1704: Pop(-2, 1); TaskReturn
0x1705: Pop(2)
0x1706: Return(); Pop(0)

0x1707: PushEmpty(bool, int)
0x1708: Stack[-1] = (int) 6
0x1709: Call2 0x138a

0x170a: Pop(1)
0x170b: IF (Stack[-1] == 0) GOTO 0x1713; Pop(1)

0x170c: PushEmpty(int, object)
0x170d: Stack[-1] = Stack[-3]
0x170e: Push(-2, 1); TaskCall(10)
0x170f: Call2 0xeac

0x1710: Pop(-2, 1); TaskReturn
0x1711: Pop(2)
0x1712: Return(); Pop(0)

0x1713: PushEmpty(bool, int)
0x1714: Stack[-1] = (int) 10
0x1715: Call2 0x138a

0x1716: Pop(1)
0x1717: IF (Stack[-1] == 0) GOTO 0x171f; Pop(1)

0x1718: PushEmpty(int, object)
0x1719: Stack[-1] = Stack[-3]
0x171a: Push(-2, 1); TaskCall(0)
0x171b: Call2 0x0

0x171c: Pop(-2, 1); TaskReturn
0x171d: Pop(2)
0x171e: Return(); Pop(0)

0x171f: PushEmpty(bool, int)
0x1720: Stack[-1] = (int) 12
0x1721: Call2 0x138a

0x1722: Pop(1)
0x1723: IF (Stack[-1] == 0) GOTO 0x172b; Pop(1)

0x1724: PushEmpty(int, object)
0x1725: Stack[-1] = Stack[-3]
0x1726: Push(-2, 1); TaskCall(2)
0x1727: Call2 0x17f

0x1728: Pop(-2, 1); TaskReturn
0x1729: Pop(2)
0x172a: Return(); Pop(0)

0x172b: PushEmpty(int, object)
0x172c: Stack[-1] = Stack[-3]
0x172d: Push(-2, 1); TaskCall(12)
0x172e: Call2 0x100c

0x172f: Pop(-2, 1); TaskReturn
0x1730: Pop(2)
0x1731: Return(); Pop(0)

