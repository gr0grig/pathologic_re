GlobalVarCount = 3
	G_VAR_0 object 
	G_VAR_1 bool 
	G_VAR_2 bool 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Strange
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Neutral
	Fear
	Grin
	Grimacing
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
	.bin
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	ui/NPC_Ospina.png
	ui/NPC_Ospina_b.png
	oob5Ospina1
	b5q01PlaceButchers
	b5q01GathererWife
	pt_gatherer3
	AddMark
	quest_b5_01
	place_butchers
	oob3Ospina1
	b3q01
	b3q01OspinaGotoButcher
	pt_gmap_house5_24
	quest_b3_01
	place_butcher
	ShowMap
	oob2Ospina1
	oob2Ospina2
	oob2Ospina3
	oob2Ospina4
	b2TravnikMark
	b2Travnik1
	pt_map_gatherer1
	b2Travnik2
	pt_map_gatherer2
	b2Travnik3
	pt_map_gatherer3
	b8q01
	oob10Ospina1
	b11q01KnowWhoKilled
	oob11Ospina1
	playsound
	giveitem
	b2q01
	quest_b2_01
	place_box
	quest_b2_02
	oob8Ospina1
	b8q01_bone is given
	b8q01_bone
	b10q01
	b11q01
	b5q01
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
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
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

RunOp = 0x1015
RunTask = 18

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xaf Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2b5 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x46d Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x7d6 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8c7 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb5b Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcd5 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xeed Vars = (int, int)
	GTASK_16 Vars = (object) Params = 2
	GTASK_17 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xfeb Vars = (int, int)
	GTASK_18 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x1061 Vars = (int)
		EVENT_6 Op = 0x1087 Vars = ()
		EVENT_5 Op = 0x1096 Vars = ()
		EVENT_45 Op = 0x10a3 Vars = (bool)
		EVENT_0 Op = 0x10af Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1138

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x12d4

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x12d2

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x12d6

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x12d8

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x151a

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
0x31: Call2 0x124e

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x118f

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
0x48: Call2 0x117d

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
0x56: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Strange"
0x59: Call2 0x99

0x5a: Pop(1)
0x5b: Push((int) 518620)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool)
0x61: Stack[-1] = (bool) 0
0x62: PushEmpty(bool, object)
0x63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64: Call2 0x141f

0x65: Pop(1)
0x66: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x67: PushEmpty(bool, object)
0x68: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69: Call2 0x142b

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6c: Stack[-1] = (bool) 1
0x6d: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6e: Push((int) 518621)
0x6f: Push((int) 19933)
0x70: Push((int) 19713)
0x71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72: Pop(3)
0x73: Push((int) 518624)
0x74: Push((int) -1)
0x75: Push((int) 19716)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: GOTO 0x7b

0x79: Return(); Pop(0)

0x7a: GOTO 0x55

0x7b: PushEmpty(bool)
0x7c: Call2 0x12da

0x7d: Pop(0)
0x7e: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x7f: @ lshWaitForAnimEnd()
0x80: Pop(0)
0x81: Push( Stack[3 + Tasks[-1].StackPointer] )
0x82: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x83: GOTO 0x89

0x84: PushEmpty(string)
0x85: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x86: Call2 0x1219

0x87: Pop(1)
0x88: GOTO 0x7f

0x89: GOTO 0x98

0x8a: Push("all")
0x8b: Push("idle")
0x8c: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: @ WaitForAnimEnd()
0x8f: Pop(0)
0x90: Push( Stack[3 + Tasks[-1].StackPointer] )
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: GOTO 0x98

0x93: Push("all")
0x94: Push("idle")
0x95: @ PlayAnimation(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: GOTO 0x8e

0x98: Return(); Pop(0)

0x99: PushEmpty()
0x9a: PushEmpty(bool)
0x9b: Call2 0x12da

0x9c: Pop(0)
0x9d: Pop(1); Push((bool) Stack[-1] == 0)
0x9e: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9f: Return(); Pop(0)

0xa0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa1: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa2: Return(); Pop(0)

0xa3: PushEmpty(string, bool)
0xa4: Stack[-2] = Stack[-3]
0xa5: Push("")
0xa6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa8: Stack[-1] = (bool) 0
0xa9: GOTO 0xab

0xaa: Stack[-1] = (bool) 1
0xab: Call2 0x1229

0xac: Pop(2)
0xad: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xae: Return(); Pop(0)

0xaf: PushEmpty()
0xb0: Push((int) 1)
0xb1: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0xb2: PushEmpty()
0xb3: Call2 0x1247

0xb4: Pop(0)
0xb5: Push((int) 19713)
0xb6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb8: PushEmpty(object, object)
0xb9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbb: Call2 0x12dc

0xbc: Pop(2)
0xbd: Push((int) 19715)
0xbe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xc0: PushEmpty(object, object)
0xc1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc3: Call2 0x12e2

0xc4: Pop(2)
0xc5: PushEmpty(object, object)
0xc6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc8: Call2 0x1397

0xc9: Pop(2)
0xca: PushEmpty(object, object)
0xcb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcd: Call2 0x139c

0xce: Pop(2)
0xcf: Push((int) 19963)
0xd0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd1: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xd2: PushEmpty(object, object)
0xd3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd5: Call2 0x12e2

0xd6: Pop(2)
0xd7: PushEmpty(object, object)
0xd8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xda: Call2 0x1397

0xdb: Pop(2)
0xdc: PushEmpty(object, object)
0xdd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf: Call2 0x139c

0xe0: Pop(2)
0xe1: Push((int) 19712)
0xe2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xe4: PushEmpty(string)
0xe5: Stack[-1] = "Strange"
0xe6: Call2 0x99

0xe7: Pop(1)
0xe8: Push((int) 518620)
0xe9: @@ SetMessage(Stack[-1])
0xea: Pop(1)
0xeb: @@ ClearReplies()
0xec: Pop(0)
0xed: PushEmpty(bool)
0xee: Stack[-1] = (bool) 0
0xef: PushEmpty(bool, object)
0xf0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Call2 0x141f

0xf2: Pop(1)
0xf3: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf4: PushEmpty(bool, object)
0xf5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Call2 0x142b

0xf7: Pop(1)
0xf8: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf9: Stack[-1] = (bool) 1
0xfa: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfb: Push((int) 518621)
0xfc: Push((int) 19933)
0xfd: Push((int) 19713)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Push((int) 518624)
0x101: Push((int) -1)
0x102: Push((int) 19716)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: Return(); Pop(0)

0x106: Push((int) 19933)
0x107: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Neutral"
0x10b: Call2 0x99

0x10c: Pop(1)
0x10d: Push((int) 518828)
0x10e: @@ SetMessage(Stack[-1])
0x10f: Pop(1)
0x110: @@ ClearReplies()
0x111: Pop(0)
0x112: Push((int) 518829)
0x113: Push((int) 19935)
0x114: Push((int) 19934)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: Push((int) 19935)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Fear"
0x11d: Call2 0x99

0x11e: Pop(1)
0x11f: Push((int) 518830)
0x120: @@ SetMessage(Stack[-1])
0x121: Pop(1)
0x122: @@ ClearReplies()
0x123: Pop(0)
0x124: Push((int) 518831)
0x125: Push((int) 19937)
0x126: Push((int) 19936)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Push((int) 518845)
0x12a: Push((int) 19951)
0x12b: Push((int) 19950)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Return(); Pop(0)

0x12f: Push((int) 19951)
0x130: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x132: PushEmpty(string)
0x133: Stack[-1] = "Neutral"
0x134: Call2 0x99

0x135: Pop(1)
0x136: Push((int) 518846)
0x137: @@ SetMessage(Stack[-1])
0x138: Pop(1)
0x139: @@ ClearReplies()
0x13a: Pop(0)
0x13b: Push((int) 518847)
0x13c: Push((int) 19937)
0x13d: Push((int) 19952)
0x13e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f: Pop(3)
0x140: Push((int) 518848)
0x141: Push((int) 19940)
0x142: Push((int) 19953)
0x143: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x144: Pop(3)
0x145: Return(); Pop(0)

0x146: Push((int) 19937)
0x147: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x149: PushEmpty(string)
0x14a: Stack[-1] = "Neutral"
0x14b: Call2 0x99

0x14c: Pop(1)
0x14d: Push((int) 518832)
0x14e: @@ SetMessage(Stack[-1])
0x14f: Pop(1)
0x150: @@ ClearReplies()
0x151: Pop(0)
0x152: Push((int) 518834)
0x153: Push((int) 19940)
0x154: Push((int) 19939)
0x155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x156: Pop(3)
0x157: Return(); Pop(0)

0x158: Push((int) 19940)
0x159: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x15b: PushEmpty(string)
0x15c: Stack[-1] = "Neutral"
0x15d: Call2 0x99

0x15e: Pop(1)
0x15f: Push((int) 518835)
0x160: @@ SetMessage(Stack[-1])
0x161: Pop(1)
0x162: @@ ClearReplies()
0x163: Pop(0)
0x164: Push((int) 518837)
0x165: Push((int) 19948)
0x166: Push((int) 19942)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Push((int) 518836)
0x16a: Push((int) 19943)
0x16b: Push((int) 19941)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Return(); Pop(0)

0x16f: Push((int) 19943)
0x170: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x172: PushEmpty(string)
0x173: Stack[-1] = "Neutral"
0x174: Call2 0x99

0x175: Pop(1)
0x176: Push((int) 518838)
0x177: @@ SetMessage(Stack[-1])
0x178: Pop(1)
0x179: @@ ClearReplies()
0x17a: Pop(0)
0x17b: Push((int) 518841)
0x17c: Push((int) 19954)
0x17d: Push((int) 19946)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Push((int) 518839)
0x181: Push((int) 19945)
0x182: Push((int) 19944)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Return(); Pop(0)

0x186: Push((int) 19945)
0x187: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x189: PushEmpty(string)
0x18a: Stack[-1] = "Grin"
0x18b: Call2 0x99

0x18c: Pop(1)
0x18d: Push((int) 518840)
0x18e: @@ SetMessage(Stack[-1])
0x18f: Pop(1)
0x190: @@ ClearReplies()
0x191: Pop(0)
0x192: Push((int) 518842)
0x193: Push((int) -1)
0x194: Push((int) 19947)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Return(); Pop(0)

0x198: Push((int) 19954)
0x199: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x19b: PushEmpty(string)
0x19c: Stack[-1] = "Grin"
0x19d: Call2 0x99

0x19e: Pop(1)
0x19f: Push((int) 518849)
0x1a0: @@ SetMessage(Stack[-1])
0x1a1: Pop(1)
0x1a2: @@ ClearReplies()
0x1a3: Pop(0)
0x1a4: Push((int) 518850)
0x1a5: Push((int) 19956)
0x1a6: Push((int) 19955)
0x1a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a8: Pop(3)
0x1a9: Push((int) 518852)
0x1aa: Push((int) 19956)
0x1ab: Push((int) 19957)
0x1ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ad: Pop(3)
0x1ae: Return(); Pop(0)

0x1af: Push((int) 19956)
0x1b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1b2: PushEmpty(string)
0x1b3: Stack[-1] = "Neutral"
0x1b4: Call2 0x99

0x1b5: Pop(1)
0x1b6: Push((int) 518851)
0x1b7: @@ SetMessage(Stack[-1])
0x1b8: Pop(1)
0x1b9: @@ ClearReplies()
0x1ba: Pop(0)
0x1bb: Push((int) 518853)
0x1bc: Push((int) 19714)
0x1bd: Push((int) 19959)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Return(); Pop(0)

0x1c1: Push((int) 19948)
0x1c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1c4: PushEmpty(string)
0x1c5: Stack[-1] = "Grimacing"
0x1c6: Call2 0x99

0x1c7: Pop(1)
0x1c8: Push((int) 518843)
0x1c9: @@ SetMessage(Stack[-1])
0x1ca: Pop(1)
0x1cb: @@ ClearReplies()
0x1cc: Pop(0)
0x1cd: Push((int) 518844)
0x1ce: Push((int) 19714)
0x1cf: Push((int) 19949)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: Return(); Pop(0)

0x1d3: Push((int) 19714)
0x1d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1d6: Push((int) 518622)
0x1d7: @@ SetMessage(Stack[-1])
0x1d8: Pop(1)
0x1d9: @@ ClearReplies()
0x1da: Pop(0)
0x1db: Push((int) 518623)
0x1dc: Push((int) -1)
0x1dd: Push((int) 19715)
0x1de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1df: Pop(3)
0x1e0: Push((int) 518854)
0x1e1: Push((int) 19962)
0x1e2: Push((int) 19961)
0x1e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e4: Pop(3)
0x1e5: Return(); Pop(0)

0x1e6: Push((int) 19962)
0x1e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1e9: PushEmpty(string)
0x1ea: Stack[-1] = "Neutral"
0x1eb: Call2 0x99

0x1ec: Pop(1)
0x1ed: Push((int) 518855)
0x1ee: @@ SetMessage(Stack[-1])
0x1ef: Pop(1)
0x1f0: @@ ClearReplies()
0x1f1: Pop(0)
0x1f2: Push((int) 518856)
0x1f3: Push((int) -1)
0x1f4: Push((int) 19963)
0x1f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f6: Pop(3)
0x1f7: Return(); Pop(0)

0x1f8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f9: PushEmpty(bool)
0x1fa: Call2 0x12da

0x1fb: Pop(0)
0x1fc: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fd: @ lshStopAnimation()
0x1fe: Pop(0)
0x1ff: GOTO 0x202

0x200: @ StopAnimation()
0x201: Pop(0)
0x202: Return(); Pop(0)

0x203: GOTO 0xb0

0x204: Return(); Pop(0)

0x205: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x206: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x207: PushEmpty(bool, object, float)
0x208: Stack[-2] = Stack[-12]
0x209: Stack[-1] = (float) 70.0
0x20a: Call2 0x1138

0x20b: Pop(2)
0x20c: Pop(1); Push((bool) Stack[-1] == 0)
0x20d: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20e: Stack[-10] = (int) -2
0x20f: Return(); Pop(8)

0x210: @ CreateDialog(Stack[-4])
0x211: Pop(0)
0x212: PushEmpty(int)
0x213: Call2 0x12d4

0x214: Pop(0)
0x215: @@ SetNPCName(Stack[-1])
0x216: Pop(1)
0x217: PushEmpty(int)
0x218: Call2 0x12d2

0x219: Pop(0)
0x21a: @@ SetNPCDescription(Stack[-1])
0x21b: Pop(1)
0x21c: PushEmpty(string)
0x21d: Call2 0x12d6

0x21e: Pop(0)
0x21f: @@ SetPhoto(Stack[-1])
0x220: Pop(1)
0x221: PushEmpty(string)
0x222: Call2 0x12d8

0x223: Pop(0)
0x224: @@ SetPhoto2(Stack[-1])
0x225: Pop(1)
0x226: PushEmpty(int)
0x227: Call2 0x151a

0x228: Pop(0)
0x229: @@ SetPlayerName(Stack[-1])
0x22a: Pop(1)
0x22b: Stack[-2] = (int) -1
0x22c: @ IsOverrideActive(Stack[-3])
0x22d: Pop(0)
0x22e: Push(Stack[-3])
0x22f: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x230: Stack[-10] = (int) -2
0x231: Return(); Pop(8)

0x232: @ DoDialog(Stack[-4])
0x233: Pop(0)
0x234: PushEmpty(bool, object)
0x235: PushEmpty(object)
0x236: Call2 0x124e

0x237: Stack[-2] = Stack[-1]
0x238: Pop(1)
0x239: Call2 0x118f

0x23a: Pop(2)
0x23b: PushEmpty(object, object)
0x23c: Stack[-2] = Stack[-11]
0x23d: Stack[-1] = Stack[-6]
0x23e: Push(-2, 4); TaskCall(3)
0x23f: Call2 0x256

0x240: Pop(-2, 4); TaskReturn
0x241: Pop(2)
0x242: @@ IsDialogEnd(Stack[-1])
0x243: Pop(0)
0x244: Pop(0); Push((bool) Stack[-1] == 0)
0x245: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x246: @ sync()
0x247: Pop(0)
0x248: @@ IsDialogEnd(Stack[-1])
0x249: Pop(0)
0x24a: GOTO 0x244

0x24b: PushEmpty(object)
0x24c: Stack[-1] = Stack[-10]
0x24d: Call2 0x117d

0x24e: Pop(1)
0x24f: @ StopDialog(Stack[-4])
0x250: Pop(0)
0x251: @@ GetReturnValue(Stack[-2])
0x252: Pop(0)
0x253: Stack[-10] = Stack[-2]
0x254: Return(); Pop(8)

0x255: Stack[-4] = 0
0x256: PushEmpty()
0x257: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x258: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x259: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x25a: Push((int) 1)
0x25b: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x25c: PushEmpty(string)
0x25d: Stack[-1] = "Neutral"
0x25e: Call2 0x29f

0x25f: Pop(1)
0x260: Push((int) 519273)
0x261: @@ SetMessage(Stack[-1])
0x262: Pop(1)
0x263: @@ ClearReplies()
0x264: Pop(0)
0x265: PushEmpty(bool, object)
0x266: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x267: Call2 0x1443

0x268: Pop(1)
0x269: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26a: Push((int) 519274)
0x26b: Push((int) 20428)
0x26c: Push((int) 20426)
0x26d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26e: Pop(3)
0x26f: PushEmpty(bool, object)
0x270: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x271: Call2 0x1437

0x272: Pop(1)
0x273: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x274: Push((int) 519289)
0x275: Push((int) 20444)
0x276: Push((int) 20443)
0x277: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x278: Pop(3)
0x279: Push((int) 519275)
0x27a: Push((int) -1)
0x27b: Push((int) 20427)
0x27c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27d: Pop(3)
0x27e: GOTO 0x281

0x27f: Return(); Pop(0)

0x280: GOTO 0x25a

0x281: PushEmpty(bool)
0x282: Call2 0x12da

0x283: Pop(0)
0x284: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x285: @ lshWaitForAnimEnd()
0x286: Pop(0)
0x287: Push( Stack[3 + Tasks[-1].StackPointer] )
0x288: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x289: GOTO 0x28f

0x28a: PushEmpty(string)
0x28b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x28c: Call2 0x1219

0x28d: Pop(1)
0x28e: GOTO 0x285

0x28f: GOTO 0x29e

0x290: Push("all")
0x291: Push("idle")
0x292: @ PlayAnimation(Stack[-2], Stack[-1])
0x293: Pop(2)
0x294: @ WaitForAnimEnd()
0x295: Pop(0)
0x296: Push( Stack[3 + Tasks[-1].StackPointer] )
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: GOTO 0x29e

0x299: Push("all")
0x29a: Push("idle")
0x29b: @ PlayAnimation(Stack[-2], Stack[-1])
0x29c: Pop(2)
0x29d: GOTO 0x294

0x29e: Return(); Pop(0)

0x29f: PushEmpty()
0x2a0: PushEmpty(bool)
0x2a1: Call2 0x12da

0x2a2: Pop(0)
0x2a3: Pop(1); Push((bool) Stack[-1] == 0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a5: Return(); Pop(0)

0x2a6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a8: Return(); Pop(0)

0x2a9: PushEmpty(string, bool)
0x2aa: Stack[-2] = Stack[-3]
0x2ab: Push("")
0x2ac: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2ae: Stack[-1] = (bool) 0
0x2af: GOTO 0x2b1

0x2b0: Stack[-1] = (bool) 1
0x2b1: Call2 0x1229

0x2b2: Pop(2)
0x2b3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2b4: Return(); Pop(0)

0x2b5: PushEmpty()
0x2b6: Push((int) 1)
0x2b7: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x2b8: PushEmpty()
0x2b9: Call2 0x1247

0x2ba: Pop(0)
0x2bb: Push((int) 20446)
0x2bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2be: PushEmpty(object, object)
0x2bf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c1: Call2 0x1308

0x2c2: Pop(2)
0x2c3: PushEmpty(object, object)
0x2c4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c6: Call2 0x1324

0x2c7: Pop(2)
0x2c8: Push((int) 20443)
0x2c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2cb: PushEmpty(object, object)
0x2cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ce: Call2 0x1302

0x2cf: Pop(2)
0x2d0: Push((int) 20425)
0x2d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2d3: PushEmpty(string)
0x2d4: Stack[-1] = "Neutral"
0x2d5: Call2 0x29f

0x2d6: Pop(1)
0x2d7: Push((int) 519273)
0x2d8: @@ SetMessage(Stack[-1])
0x2d9: Pop(1)
0x2da: @@ ClearReplies()
0x2db: Pop(0)
0x2dc: PushEmpty(bool, object)
0x2dd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2de: Call2 0x1443

0x2df: Pop(1)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e1: Push((int) 519274)
0x2e2: Push((int) 20428)
0x2e3: Push((int) 20426)
0x2e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e5: Pop(3)
0x2e6: PushEmpty(bool, object)
0x2e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e8: Call2 0x1437

0x2e9: Pop(1)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2eb: Push((int) 519289)
0x2ec: Push((int) 20444)
0x2ed: Push((int) 20443)
0x2ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ef: Pop(3)
0x2f0: Push((int) 519275)
0x2f1: Push((int) -1)
0x2f2: Push((int) 20427)
0x2f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f4: Pop(3)
0x2f5: Return(); Pop(0)

0x2f6: Push((int) 20444)
0x2f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f8: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x2f9: PushEmpty(string)
0x2fa: Stack[-1] = "Neutral"
0x2fb: Call2 0x29f

0x2fc: Pop(1)
0x2fd: Push((int) 519290)
0x2fe: @@ SetMessage(Stack[-1])
0x2ff: Pop(1)
0x300: @@ ClearReplies()
0x301: Pop(0)
0x302: Push((int) 519291)
0x303: Push((int) -1)
0x304: Push((int) 20445)
0x305: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x306: Pop(3)
0x307: Return(); Pop(0)

0x308: Push((int) 20428)
0x309: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x30b: PushEmpty(string)
0x30c: Stack[-1] = "Neutral"
0x30d: Call2 0x29f

0x30e: Pop(1)
0x30f: Push((int) 519276)
0x310: @@ SetMessage(Stack[-1])
0x311: Pop(1)
0x312: @@ ClearReplies()
0x313: Pop(0)
0x314: Push((int) 519277)
0x315: Push((int) 20432)
0x316: Push((int) 20429)
0x317: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x318: Pop(3)
0x319: Push((int) 519278)
0x31a: Push((int) 20431)
0x31b: Push((int) 20430)
0x31c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31d: Pop(3)
0x31e: Return(); Pop(0)

0x31f: Push((int) 20431)
0x320: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x322: PushEmpty(string)
0x323: Stack[-1] = "Neutral"
0x324: Call2 0x29f

0x325: Pop(1)
0x326: Push((int) 519279)
0x327: @@ SetMessage(Stack[-1])
0x328: Pop(1)
0x329: @@ ClearReplies()
0x32a: Pop(0)
0x32b: Push((int) 519281)
0x32c: Push((int) 20432)
0x32d: Push((int) 20433)
0x32e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32f: Pop(3)
0x330: Return(); Pop(0)

0x331: Push((int) 20432)
0x332: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x333: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x334: PushEmpty(string)
0x335: Stack[-1] = "Neutral"
0x336: Call2 0x29f

0x337: Pop(1)
0x338: Push((int) 519280)
0x339: @@ SetMessage(Stack[-1])
0x33a: Pop(1)
0x33b: @@ ClearReplies()
0x33c: Pop(0)
0x33d: Push((int) 519282)
0x33e: Push((int) 20436)
0x33f: Push((int) 20435)
0x340: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x341: Pop(3)
0x342: Push((int) 527864)
0x343: Push((int) 20439)
0x344: Push((int) 29209)
0x345: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x346: Pop(3)
0x347: Return(); Pop(0)

0x348: Push((int) 20436)
0x349: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34a: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x34b: PushEmpty(string)
0x34c: Stack[-1] = "Neutral"
0x34d: Call2 0x29f

0x34e: Pop(1)
0x34f: Push((int) 519283)
0x350: @@ SetMessage(Stack[-1])
0x351: Pop(1)
0x352: @@ ClearReplies()
0x353: Pop(0)
0x354: Push((int) 519284)
0x355: Push((int) 20441)
0x356: Push((int) 20437)
0x357: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x358: Pop(3)
0x359: Push((int) 519285)
0x35a: Push((int) 20439)
0x35b: Push((int) 20438)
0x35c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35d: Pop(3)
0x35e: Return(); Pop(0)

0x35f: Push((int) 20439)
0x360: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x361: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x362: PushEmpty(string)
0x363: Stack[-1] = "Neutral"
0x364: Call2 0x29f

0x365: Pop(1)
0x366: Push((int) 519286)
0x367: @@ SetMessage(Stack[-1])
0x368: Pop(1)
0x369: @@ ClearReplies()
0x36a: Pop(0)
0x36b: Push((int) 519287)
0x36c: Push((int) 20441)
0x36d: Push((int) 20440)
0x36e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36f: Pop(3)
0x370: Return(); Pop(0)

0x371: Push((int) 20441)
0x372: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x374: PushEmpty(string)
0x375: Stack[-1] = "Neutral"
0x376: Call2 0x29f

0x377: Pop(1)
0x378: Push((int) 519288)
0x379: @@ SetMessage(Stack[-1])
0x37a: Pop(1)
0x37b: @@ ClearReplies()
0x37c: Pop(0)
0x37d: Push((int) 519292)
0x37e: Push((int) -1)
0x37f: Push((int) 20446)
0x380: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x381: Pop(3)
0x382: Return(); Pop(0)

0x383: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x384: PushEmpty(bool)
0x385: Call2 0x12da

0x386: Pop(0)
0x387: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x388: @ lshStopAnimation()
0x389: Pop(0)
0x38a: GOTO 0x38d

0x38b: @ StopAnimation()
0x38c: Pop(0)
0x38d: Return(); Pop(0)

0x38e: GOTO 0x2b6

0x38f: Return(); Pop(0)

0x390: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x391: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x392: PushEmpty(bool, object, float)
0x393: Stack[-2] = Stack[-12]
0x394: Stack[-1] = (float) 70.0
0x395: Call2 0x1138

0x396: Pop(2)
0x397: Pop(1); Push((bool) Stack[-1] == 0)
0x398: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x399: Stack[-10] = (int) -2
0x39a: Return(); Pop(8)

0x39b: @ CreateDialog(Stack[-4])
0x39c: Pop(0)
0x39d: PushEmpty(int)
0x39e: Call2 0x12d4

0x39f: Pop(0)
0x3a0: @@ SetNPCName(Stack[-1])
0x3a1: Pop(1)
0x3a2: PushEmpty(int)
0x3a3: Call2 0x12d2

0x3a4: Pop(0)
0x3a5: @@ SetNPCDescription(Stack[-1])
0x3a6: Pop(1)
0x3a7: PushEmpty(string)
0x3a8: Call2 0x12d6

0x3a9: Pop(0)
0x3aa: @@ SetPhoto(Stack[-1])
0x3ab: Pop(1)
0x3ac: PushEmpty(string)
0x3ad: Call2 0x12d8

0x3ae: Pop(0)
0x3af: @@ SetPhoto2(Stack[-1])
0x3b0: Pop(1)
0x3b1: PushEmpty(int)
0x3b2: Call2 0x151a

0x3b3: Pop(0)
0x3b4: @@ SetPlayerName(Stack[-1])
0x3b5: Pop(1)
0x3b6: Stack[-2] = (int) -1
0x3b7: @ IsOverrideActive(Stack[-3])
0x3b8: Pop(0)
0x3b9: Push(Stack[-3])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bb: Stack[-10] = (int) -2
0x3bc: Return(); Pop(8)

0x3bd: @ DoDialog(Stack[-4])
0x3be: Pop(0)
0x3bf: PushEmpty(bool, object)
0x3c0: PushEmpty(object)
0x3c1: Call2 0x124e

0x3c2: Stack[-2] = Stack[-1]
0x3c3: Pop(1)
0x3c4: Call2 0x118f

0x3c5: Pop(2)
0x3c6: PushEmpty(object, object)
0x3c7: Stack[-2] = Stack[-11]
0x3c8: Stack[-1] = Stack[-6]
0x3c9: Push(-2, 4); TaskCall(5)
0x3ca: Call2 0x3e1

0x3cb: Pop(-2, 4); TaskReturn
0x3cc: Pop(2)
0x3cd: @@ IsDialogEnd(Stack[-1])
0x3ce: Pop(0)
0x3cf: Pop(0); Push((bool) Stack[-1] == 0)
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d1: @ sync()
0x3d2: Pop(0)
0x3d3: @@ IsDialogEnd(Stack[-1])
0x3d4: Pop(0)
0x3d5: GOTO 0x3cf

0x3d6: PushEmpty(object)
0x3d7: Stack[-1] = Stack[-10]
0x3d8: Call2 0x117d

0x3d9: Pop(1)
0x3da: @ StopDialog(Stack[-4])
0x3db: Pop(0)
0x3dc: @@ GetReturnValue(Stack[-2])
0x3dd: Pop(0)
0x3de: Stack[-10] = Stack[-2]
0x3df: Return(); Pop(8)

0x3e0: Stack[-4] = 0
0x3e1: PushEmpty()
0x3e2: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3e3: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3e4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3e5: Push((int) 1)
0x3e6: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x3e7: PushEmpty(bool, object)
0x3e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e9: Call2 0x144f

0x3ea: Pop(1)
0x3eb: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3ec: PushEmpty(string)
0x3ed: Stack[-1] = "Neutral"
0x3ee: Call2 0x457

0x3ef: Pop(1)
0x3f0: Push((int) 520279)
0x3f1: @@ SetMessage(Stack[-1])
0x3f2: Pop(1)
0x3f3: @@ ClearReplies()
0x3f4: Pop(0)
0x3f5: Push((int) 520280)
0x3f6: Push((int) 21473)
0x3f7: Push((int) 21472)
0x3f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f9: Pop(3)
0x3fa: Push((int) 520299)
0x3fb: Push((int) 21475)
0x3fc: Push((int) 21493)
0x3fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fe: Pop(3)
0x3ff: GOTO 0x439

0x400: PushEmpty(string)
0x401: Stack[-1] = "Neutral"
0x402: Call2 0x457

0x403: Pop(1)
0x404: Push((int) 520300)
0x405: @@ SetMessage(Stack[-1])
0x406: Pop(1)
0x407: @@ ClearReplies()
0x408: Pop(0)
0x409: PushEmpty(bool, object)
0x40a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x40b: Call2 0x145b

0x40c: Pop(1)
0x40d: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x40e: Push((int) 520301)
0x40f: Push((int) 21497)
0x410: Push((int) 21496)
0x411: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x412: Pop(3)
0x413: PushEmpty(bool, object)
0x414: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x415: Call2 0x1467

0x416: Pop(1)
0x417: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x418: Push((int) 520317)
0x419: Push((int) 21513)
0x41a: Push((int) 21512)
0x41b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41c: Pop(3)
0x41d: PushEmpty(bool, object)
0x41e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x41f: Call2 0x1473

0x420: Pop(1)
0x421: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x422: Push((int) 520324)
0x423: Push((int) 21520)
0x424: Push((int) 21519)
0x425: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x426: Pop(3)
0x427: PushEmpty(bool, object)
0x428: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x429: Call2 0x147f

0x42a: Pop(1)
0x42b: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42c: Push((int) 520327)
0x42d: Push((int) 21523)
0x42e: Push((int) 21522)
0x42f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x430: Pop(3)
0x431: Push((int) 520330)
0x432: Push((int) -1)
0x433: Push((int) 21525)
0x434: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x435: Pop(3)
0x436: GOTO 0x439

0x437: Return(); Pop(0)

0x438: GOTO 0x3e5

0x439: PushEmpty(bool)
0x43a: Call2 0x12da

0x43b: Pop(0)
0x43c: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x43d: @ lshWaitForAnimEnd()
0x43e: Pop(0)
0x43f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x440: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x441: GOTO 0x447

0x442: PushEmpty(string)
0x443: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x444: Call2 0x1219

0x445: Pop(1)
0x446: GOTO 0x43d

0x447: GOTO 0x456

0x448: Push("all")
0x449: Push("idle")
0x44a: @ PlayAnimation(Stack[-2], Stack[-1])
0x44b: Pop(2)
0x44c: @ WaitForAnimEnd()
0x44d: Pop(0)
0x44e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x44f: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x450: GOTO 0x456

0x451: Push("all")
0x452: Push("idle")
0x453: @ PlayAnimation(Stack[-2], Stack[-1])
0x454: Pop(2)
0x455: GOTO 0x44c

0x456: Return(); Pop(0)

0x457: PushEmpty()
0x458: PushEmpty(bool)
0x459: Call2 0x12da

0x45a: Pop(0)
0x45b: Pop(1); Push((bool) Stack[-1] == 0)
0x45c: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x45d: Return(); Pop(0)

0x45e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x45f: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x460: Return(); Pop(0)

0x461: PushEmpty(string, bool)
0x462: Stack[-2] = Stack[-3]
0x463: Push("")
0x464: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x466: Stack[-1] = (bool) 0
0x467: GOTO 0x469

0x468: Stack[-1] = (bool) 1
0x469: Call2 0x1229

0x46a: Pop(2)
0x46b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x46c: Return(); Pop(0)

0x46d: PushEmpty()
0x46e: Push((int) 1)
0x46f: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x470: PushEmpty()
0x471: Call2 0x1247

0x472: Pop(0)
0x473: Push((int) 21486)
0x474: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x476: PushEmpty(object, object)
0x477: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x478: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x479: Call2 0x13b2

0x47a: Pop(2)
0x47b: Push((int) 21480)
0x47c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47d: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x47e: PushEmpty(object, object)
0x47f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x480: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x481: Call2 0x13b2

0x482: Pop(2)
0x483: Push((int) 21481)
0x484: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x485: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x486: PushEmpty(object, object)
0x487: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x488: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x489: Call2 0x13b2

0x48a: Pop(2)
0x48b: Push((int) 21496)
0x48c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x48d: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x48e: PushEmpty(object, object)
0x48f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x490: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x491: Call2 0x1334

0x492: Pop(2)
0x493: Push((int) 21512)
0x494: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x495: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x496: PushEmpty(object, object)
0x497: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x498: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x499: Call2 0x133a

0x49a: Pop(2)
0x49b: Push((int) 21518)
0x49c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x49d: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x49e: PushEmpty(object, object)
0x49f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a1: Call2 0x134c

0x4a2: Pop(2)
0x4a3: Push((int) 21519)
0x4a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a6: PushEmpty(object, object)
0x4a7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a9: Call2 0x1340

0x4aa: Pop(2)
0x4ab: Push((int) 21522)
0x4ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ad: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4ae: PushEmpty(object, object)
0x4af: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b1: Call2 0x1346

0x4b2: Pop(2)
0x4b3: Push((int) 21471)
0x4b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x4b6: PushEmpty(bool, object)
0x4b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b8: Call2 0x144f

0x4b9: Pop(1)
0x4ba: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4bb: PushEmpty(string)
0x4bc: Stack[-1] = "Neutral"
0x4bd: Call2 0x457

0x4be: Pop(1)
0x4bf: Push((int) 520279)
0x4c0: @@ SetMessage(Stack[-1])
0x4c1: Pop(1)
0x4c2: @@ ClearReplies()
0x4c3: Pop(0)
0x4c4: Push((int) 520280)
0x4c5: Push((int) 21473)
0x4c6: Push((int) 21472)
0x4c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c8: Pop(3)
0x4c9: Push((int) 520299)
0x4ca: Push((int) 21475)
0x4cb: Push((int) 21493)
0x4cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cd: Pop(3)
0x4ce: Return(); Pop(0)

0x4cf: PushEmpty(string)
0x4d0: Stack[-1] = "Neutral"
0x4d1: Call2 0x457

0x4d2: Pop(1)
0x4d3: Push((int) 520300)
0x4d4: @@ SetMessage(Stack[-1])
0x4d5: Pop(1)
0x4d6: @@ ClearReplies()
0x4d7: Pop(0)
0x4d8: PushEmpty(bool, object)
0x4d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4da: Call2 0x145b

0x4db: Pop(1)
0x4dc: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4dd: Push((int) 520301)
0x4de: Push((int) 21497)
0x4df: Push((int) 21496)
0x4e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e1: Pop(3)
0x4e2: PushEmpty(bool, object)
0x4e3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e4: Call2 0x1467

0x4e5: Pop(1)
0x4e6: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4e7: Push((int) 520317)
0x4e8: Push((int) 21513)
0x4e9: Push((int) 21512)
0x4ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4eb: Pop(3)
0x4ec: PushEmpty(bool, object)
0x4ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ee: Call2 0x1473

0x4ef: Pop(1)
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f1: Push((int) 520324)
0x4f2: Push((int) 21520)
0x4f3: Push((int) 21519)
0x4f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f5: Pop(3)
0x4f6: PushEmpty(bool, object)
0x4f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f8: Call2 0x147f

0x4f9: Pop(1)
0x4fa: IF (Stack[-1] == 0) GOTO 0x500; Pop(1)

0x4fb: Push((int) 520327)
0x4fc: Push((int) 21523)
0x4fd: Push((int) 21522)
0x4fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ff: Pop(3)
0x500: Push((int) 520330)
0x501: Push((int) -1)
0x502: Push((int) 21525)
0x503: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x504: Pop(3)
0x505: Return(); Pop(0)

0x506: Push((int) 21523)
0x507: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x508: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x509: PushEmpty(string)
0x50a: Stack[-1] = "Neutral"
0x50b: Call2 0x457

0x50c: Pop(1)
0x50d: Push((int) 520328)
0x50e: @@ SetMessage(Stack[-1])
0x50f: Pop(1)
0x510: @@ ClearReplies()
0x511: Pop(0)
0x512: Push((int) 527820)
0x513: Push((int) 29160)
0x514: Push((int) 29159)
0x515: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x516: Pop(3)
0x517: Return(); Pop(0)

0x518: Push((int) 29160)
0x519: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51a: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x51b: PushEmpty(string)
0x51c: Stack[-1] = "Neutral"
0x51d: Call2 0x457

0x51e: Pop(1)
0x51f: Push((int) 527821)
0x520: @@ SetMessage(Stack[-1])
0x521: Pop(1)
0x522: @@ ClearReplies()
0x523: Pop(0)
0x524: Push((int) 527822)
0x525: Push((int) 29162)
0x526: Push((int) 29161)
0x527: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x528: Pop(3)
0x529: Return(); Pop(0)

0x52a: Push((int) 29162)
0x52b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52c: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x52d: PushEmpty(string)
0x52e: Stack[-1] = "Neutral"
0x52f: Call2 0x457

0x530: Pop(1)
0x531: Push((int) 527823)
0x532: @@ SetMessage(Stack[-1])
0x533: Pop(1)
0x534: @@ ClearReplies()
0x535: Pop(0)
0x536: Push((int) 520329)
0x537: Push((int) -1)
0x538: Push((int) 21524)
0x539: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53a: Pop(3)
0x53b: Return(); Pop(0)

0x53c: Push((int) 21520)
0x53d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53e: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x53f: PushEmpty(string)
0x540: Stack[-1] = "Neutral"
0x541: Call2 0x457

0x542: Pop(1)
0x543: Push((int) 520325)
0x544: @@ SetMessage(Stack[-1])
0x545: Pop(1)
0x546: @@ ClearReplies()
0x547: Pop(0)
0x548: Push((int) 527824)
0x549: Push((int) 29164)
0x54a: Push((int) 29163)
0x54b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54c: Pop(3)
0x54d: Push((int) 520326)
0x54e: Push((int) -1)
0x54f: Push((int) 21521)
0x550: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x551: Pop(3)
0x552: Return(); Pop(0)

0x553: Push((int) 29164)
0x554: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x555: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x556: PushEmpty(string)
0x557: Stack[-1] = "Neutral"
0x558: Call2 0x457

0x559: Pop(1)
0x55a: Push((int) 527825)
0x55b: @@ SetMessage(Stack[-1])
0x55c: Pop(1)
0x55d: @@ ClearReplies()
0x55e: Pop(0)
0x55f: Push((int) 527826)
0x560: Push((int) -1)
0x561: Push((int) 29165)
0x562: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x563: Pop(3)
0x564: Push((int) 527827)
0x565: Push((int) -1)
0x566: Push((int) 29166)
0x567: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x568: Pop(3)
0x569: Return(); Pop(0)

0x56a: Push((int) 21513)
0x56b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56c: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x56d: PushEmpty(string)
0x56e: Stack[-1] = "Neutral"
0x56f: Call2 0x457

0x570: Pop(1)
0x571: Push((int) 520318)
0x572: @@ SetMessage(Stack[-1])
0x573: Pop(1)
0x574: @@ ClearReplies()
0x575: Pop(0)
0x576: Push((int) 520319)
0x577: Push((int) 21515)
0x578: Push((int) 21514)
0x579: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57a: Pop(3)
0x57b: Return(); Pop(0)

0x57c: Push((int) 21515)
0x57d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57e: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x57f: PushEmpty(string)
0x580: Stack[-1] = "Neutral"
0x581: Call2 0x457

0x582: Pop(1)
0x583: Push((int) 520320)
0x584: @@ SetMessage(Stack[-1])
0x585: Pop(1)
0x586: @@ ClearReplies()
0x587: Pop(0)
0x588: Push((int) 527818)
0x589: Push((int) 29158)
0x58a: Push((int) 29157)
0x58b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58c: Pop(3)
0x58d: Return(); Pop(0)

0x58e: Push((int) 29158)
0x58f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x590: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x591: PushEmpty(string)
0x592: Stack[-1] = "Neutral"
0x593: Call2 0x457

0x594: Pop(1)
0x595: Push((int) 527819)
0x596: @@ SetMessage(Stack[-1])
0x597: Pop(1)
0x598: @@ ClearReplies()
0x599: Pop(0)
0x59a: Push((int) 520321)
0x59b: Push((int) 21517)
0x59c: Push((int) 21516)
0x59d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59e: Pop(3)
0x59f: Return(); Pop(0)

0x5a0: Push((int) 21517)
0x5a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a2: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5a3: PushEmpty(string)
0x5a4: Stack[-1] = "Neutral"
0x5a5: Call2 0x457

0x5a6: Pop(1)
0x5a7: Push((int) 520322)
0x5a8: @@ SetMessage(Stack[-1])
0x5a9: Pop(1)
0x5aa: @@ ClearReplies()
0x5ab: Pop(0)
0x5ac: Push((int) 520323)
0x5ad: Push((int) -1)
0x5ae: Push((int) 21518)
0x5af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b0: Pop(3)
0x5b1: Return(); Pop(0)

0x5b2: Push((int) 21497)
0x5b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b4: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5b5: PushEmpty(string)
0x5b6: Stack[-1] = "Neutral"
0x5b7: Call2 0x457

0x5b8: Pop(1)
0x5b9: Push((int) 520302)
0x5ba: @@ SetMessage(Stack[-1])
0x5bb: Pop(1)
0x5bc: @@ ClearReplies()
0x5bd: Pop(0)
0x5be: Push((int) 520303)
0x5bf: Push((int) 21499)
0x5c0: Push((int) 21498)
0x5c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c2: Pop(3)
0x5c3: Push((int) 527811)
0x5c4: Push((int) 29150)
0x5c5: Push((int) 29149)
0x5c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c7: Pop(3)
0x5c8: Return(); Pop(0)

0x5c9: Push((int) 29150)
0x5ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5cb: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5cc: PushEmpty(string)
0x5cd: Stack[-1] = "Neutral"
0x5ce: Call2 0x457

0x5cf: Pop(1)
0x5d0: Push((int) 527812)
0x5d1: @@ SetMessage(Stack[-1])
0x5d2: Pop(1)
0x5d3: @@ ClearReplies()
0x5d4: Pop(0)
0x5d5: Push((int) 527813)
0x5d6: Push((int) 29152)
0x5d7: Push((int) 29151)
0x5d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d9: Pop(3)
0x5da: Return(); Pop(0)

0x5db: Push((int) 29152)
0x5dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5dd: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5de: PushEmpty(string)
0x5df: Stack[-1] = "Neutral"
0x5e0: Call2 0x457

0x5e1: Pop(1)
0x5e2: Push((int) 527814)
0x5e3: @@ SetMessage(Stack[-1])
0x5e4: Pop(1)
0x5e5: @@ ClearReplies()
0x5e6: Pop(0)
0x5e7: Push((int) 527815)
0x5e8: Push((int) 29154)
0x5e9: Push((int) 29153)
0x5ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5eb: Pop(3)
0x5ec: Return(); Pop(0)

0x5ed: Push((int) 29154)
0x5ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ef: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5f0: PushEmpty(string)
0x5f1: Stack[-1] = "Neutral"
0x5f2: Call2 0x457

0x5f3: Pop(1)
0x5f4: Push((int) 527816)
0x5f5: @@ SetMessage(Stack[-1])
0x5f6: Pop(1)
0x5f7: @@ ClearReplies()
0x5f8: Pop(0)
0x5f9: Push((int) 527817)
0x5fa: Push((int) 21499)
0x5fb: Push((int) 29155)
0x5fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fd: Pop(3)
0x5fe: Return(); Pop(0)

0x5ff: Push((int) 21499)
0x600: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x601: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x602: PushEmpty(string)
0x603: Stack[-1] = "Neutral"
0x604: Call2 0x457

0x605: Pop(1)
0x606: Push((int) 520304)
0x607: @@ SetMessage(Stack[-1])
0x608: Pop(1)
0x609: @@ ClearReplies()
0x60a: Pop(0)
0x60b: Push((int) 520305)
0x60c: Push((int) 21501)
0x60d: Push((int) 21500)
0x60e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60f: Pop(3)
0x610: Push((int) 520311)
0x611: Push((int) 21507)
0x612: Push((int) 21506)
0x613: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x614: Pop(3)
0x615: Return(); Pop(0)

0x616: Push((int) 21507)
0x617: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x618: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x619: PushEmpty(string)
0x61a: Stack[-1] = "Neutral"
0x61b: Call2 0x457

0x61c: Pop(1)
0x61d: Push((int) 520312)
0x61e: @@ SetMessage(Stack[-1])
0x61f: Pop(1)
0x620: @@ ClearReplies()
0x621: Pop(0)
0x622: Push((int) 520313)
0x623: Push((int) 21509)
0x624: Push((int) 21508)
0x625: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x626: Pop(3)
0x627: Return(); Pop(0)

0x628: Push((int) 21509)
0x629: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62a: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x62b: PushEmpty(string)
0x62c: Stack[-1] = "Neutral"
0x62d: Call2 0x457

0x62e: Pop(1)
0x62f: Push((int) 520314)
0x630: @@ SetMessage(Stack[-1])
0x631: Pop(1)
0x632: @@ ClearReplies()
0x633: Pop(0)
0x634: Push((int) 520315)
0x635: Push((int) -1)
0x636: Push((int) 21510)
0x637: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x638: Pop(3)
0x639: Push((int) 520316)
0x63a: Push((int) -1)
0x63b: Push((int) 21511)
0x63c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63d: Pop(3)
0x63e: Return(); Pop(0)

0x63f: Push((int) 21501)
0x640: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x641: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x642: PushEmpty(string)
0x643: Stack[-1] = "Neutral"
0x644: Call2 0x457

0x645: Pop(1)
0x646: Push((int) 520306)
0x647: @@ SetMessage(Stack[-1])
0x648: Pop(1)
0x649: @@ ClearReplies()
0x64a: Pop(0)
0x64b: Push((int) 520307)
0x64c: Push((int) -1)
0x64d: Push((int) 21502)
0x64e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64f: Pop(3)
0x650: Push((int) 520308)
0x651: Push((int) 21504)
0x652: Push((int) 21503)
0x653: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x654: Pop(3)
0x655: Return(); Pop(0)

0x656: Push((int) 21504)
0x657: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x658: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x659: PushEmpty(string)
0x65a: Stack[-1] = "Neutral"
0x65b: Call2 0x457

0x65c: Pop(1)
0x65d: Push((int) 520309)
0x65e: @@ SetMessage(Stack[-1])
0x65f: Pop(1)
0x660: @@ ClearReplies()
0x661: Pop(0)
0x662: Push((int) 520310)
0x663: Push((int) -1)
0x664: Push((int) 21505)
0x665: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x666: Pop(3)
0x667: Return(); Pop(0)

0x668: Push((int) 21473)
0x669: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x66a: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x66b: PushEmpty(string)
0x66c: Stack[-1] = "Neutral"
0x66d: Call2 0x457

0x66e: Pop(1)
0x66f: Push((int) 520281)
0x670: @@ SetMessage(Stack[-1])
0x671: Pop(1)
0x672: @@ ClearReplies()
0x673: Pop(0)
0x674: Push((int) 520282)
0x675: Push((int) 21475)
0x676: Push((int) 21474)
0x677: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x678: Pop(3)
0x679: Push((int) 520294)
0x67a: Push((int) 21488)
0x67b: Push((int) 21487)
0x67c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67d: Pop(3)
0x67e: Return(); Pop(0)

0x67f: Push((int) 21488)
0x680: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x681: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x682: PushEmpty(string)
0x683: Stack[-1] = "Neutral"
0x684: Call2 0x457

0x685: Pop(1)
0x686: Push((int) 520295)
0x687: @@ SetMessage(Stack[-1])
0x688: Pop(1)
0x689: @@ ClearReplies()
0x68a: Pop(0)
0x68b: Push((int) 520296)
0x68c: Push((int) 21490)
0x68d: Push((int) 21489)
0x68e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68f: Pop(3)
0x690: Push((int) 527807)
0x691: Push((int) 21477)
0x692: Push((int) 29143)
0x693: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x694: Pop(3)
0x695: Return(); Pop(0)

0x696: Push((int) 21490)
0x697: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x698: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x699: PushEmpty(string)
0x69a: Stack[-1] = "Neutral"
0x69b: Call2 0x457

0x69c: Pop(1)
0x69d: Push((int) 520297)
0x69e: @@ SetMessage(Stack[-1])
0x69f: Pop(1)
0x6a0: @@ ClearReplies()
0x6a1: Pop(0)
0x6a2: Push((int) 527805)
0x6a3: Push((int) 29142)
0x6a4: Push((int) 29141)
0x6a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a6: Pop(3)
0x6a7: Return(); Pop(0)

0x6a8: Push((int) 29142)
0x6a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6aa: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6ab: PushEmpty(string)
0x6ac: Stack[-1] = "Neutral"
0x6ad: Call2 0x457

0x6ae: Pop(1)
0x6af: Push((int) 527806)
0x6b0: @@ SetMessage(Stack[-1])
0x6b1: Pop(1)
0x6b2: @@ ClearReplies()
0x6b3: Pop(0)
0x6b4: Push((int) 520298)
0x6b5: Push((int) 21477)
0x6b6: Push((int) 21491)
0x6b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b8: Pop(3)
0x6b9: Return(); Pop(0)

0x6ba: Push((int) 21475)
0x6bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6bc: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x6bd: PushEmpty(string)
0x6be: Stack[-1] = "Neutral"
0x6bf: Call2 0x457

0x6c0: Pop(1)
0x6c1: Push((int) 520283)
0x6c2: @@ SetMessage(Stack[-1])
0x6c3: Pop(1)
0x6c4: @@ ClearReplies()
0x6c5: Pop(0)
0x6c6: Push((int) 520290)
0x6c7: Push((int) 21483)
0x6c8: Push((int) 21482)
0x6c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ca: Pop(3)
0x6cb: Push((int) 520284)
0x6cc: Push((int) 21477)
0x6cd: Push((int) 21476)
0x6ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cf: Pop(3)
0x6d0: Return(); Pop(0)

0x6d1: Push((int) 21477)
0x6d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d3: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6d4: PushEmpty(string)
0x6d5: Stack[-1] = "Neutral"
0x6d6: Call2 0x457

0x6d7: Pop(1)
0x6d8: Push((int) 520285)
0x6d9: @@ SetMessage(Stack[-1])
0x6da: Pop(1)
0x6db: @@ ClearReplies()
0x6dc: Pop(0)
0x6dd: Push((int) 520286)
0x6de: Push((int) 21479)
0x6df: Push((int) 21478)
0x6e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e1: Pop(3)
0x6e2: Push((int) 527808)
0x6e3: Push((int) 29146)
0x6e4: Push((int) 29145)
0x6e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e6: Pop(3)
0x6e7: Return(); Pop(0)

0x6e8: Push((int) 29146)
0x6e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ea: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6eb: PushEmpty(string)
0x6ec: Stack[-1] = "Neutral"
0x6ed: Call2 0x457

0x6ee: Pop(1)
0x6ef: Push((int) 527809)
0x6f0: @@ SetMessage(Stack[-1])
0x6f1: Pop(1)
0x6f2: @@ ClearReplies()
0x6f3: Pop(0)
0x6f4: Push((int) 527810)
0x6f5: Push((int) 21479)
0x6f6: Push((int) 29147)
0x6f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f8: Pop(3)
0x6f9: Return(); Pop(0)

0x6fa: Push((int) 21479)
0x6fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6fc: IF (Stack[-1] == 0) GOTO 0x711; Pop(1)

0x6fd: PushEmpty(string)
0x6fe: Stack[-1] = "Neutral"
0x6ff: Call2 0x457

0x700: Pop(1)
0x701: Push((int) 520287)
0x702: @@ SetMessage(Stack[-1])
0x703: Pop(1)
0x704: @@ ClearReplies()
0x705: Pop(0)
0x706: Push((int) 520288)
0x707: Push((int) -1)
0x708: Push((int) 21480)
0x709: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70a: Pop(3)
0x70b: Push((int) 520289)
0x70c: Push((int) -1)
0x70d: Push((int) 21481)
0x70e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70f: Pop(3)
0x710: Return(); Pop(0)

0x711: Push((int) 21483)
0x712: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x713: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x714: PushEmpty(string)
0x715: Stack[-1] = "Neutral"
0x716: Call2 0x457

0x717: Pop(1)
0x718: Push((int) 520291)
0x719: @@ SetMessage(Stack[-1])
0x71a: Pop(1)
0x71b: @@ ClearReplies()
0x71c: Pop(0)
0x71d: Push((int) 520292)
0x71e: Push((int) 21477)
0x71f: Push((int) 21484)
0x720: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x721: Pop(3)
0x722: Push((int) 520293)
0x723: Push((int) -1)
0x724: Push((int) 21486)
0x725: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x726: Pop(3)
0x727: Return(); Pop(0)

0x728: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x729: PushEmpty(bool)
0x72a: Call2 0x12da

0x72b: Pop(0)
0x72c: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x72d: @ lshStopAnimation()
0x72e: Pop(0)
0x72f: GOTO 0x732

0x730: @ StopAnimation()
0x731: Pop(0)
0x732: Return(); Pop(0)

0x733: GOTO 0x46e

0x734: Return(); Pop(0)

0x735: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x736: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x737: PushEmpty(bool, object, float)
0x738: Stack[-2] = Stack[-12]
0x739: Stack[-1] = (float) 70.0
0x73a: Call2 0x1138

0x73b: Pop(2)
0x73c: Pop(1); Push((bool) Stack[-1] == 0)
0x73d: IF (Stack[-1] == 0) GOTO 0x740; Pop(1)

0x73e: Stack[-10] = (int) -2
0x73f: Return(); Pop(8)

0x740: @ CreateDialog(Stack[-4])
0x741: Pop(0)
0x742: PushEmpty(int)
0x743: Call2 0x12d4

0x744: Pop(0)
0x745: @@ SetNPCName(Stack[-1])
0x746: Pop(1)
0x747: PushEmpty(int)
0x748: Call2 0x12d2

0x749: Pop(0)
0x74a: @@ SetNPCDescription(Stack[-1])
0x74b: Pop(1)
0x74c: PushEmpty(string)
0x74d: Call2 0x12d6

0x74e: Pop(0)
0x74f: @@ SetPhoto(Stack[-1])
0x750: Pop(1)
0x751: PushEmpty(string)
0x752: Call2 0x12d8

0x753: Pop(0)
0x754: @@ SetPhoto2(Stack[-1])
0x755: Pop(1)
0x756: PushEmpty(int)
0x757: Call2 0x151a

0x758: Pop(0)
0x759: @@ SetPlayerName(Stack[-1])
0x75a: Pop(1)
0x75b: Stack[-2] = (int) -1
0x75c: @ IsOverrideActive(Stack[-3])
0x75d: Pop(0)
0x75e: Push(Stack[-3])
0x75f: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x760: Stack[-10] = (int) -2
0x761: Return(); Pop(8)

0x762: @ DoDialog(Stack[-4])
0x763: Pop(0)
0x764: PushEmpty(bool, object)
0x765: PushEmpty(object)
0x766: Call2 0x124e

0x767: Stack[-2] = Stack[-1]
0x768: Pop(1)
0x769: Call2 0x118f

0x76a: Pop(2)
0x76b: PushEmpty(object, object)
0x76c: Stack[-2] = Stack[-11]
0x76d: Stack[-1] = Stack[-6]
0x76e: Push(-2, 4); TaskCall(7)
0x76f: Call2 0x786

0x770: Pop(-2, 4); TaskReturn
0x771: Pop(2)
0x772: @@ IsDialogEnd(Stack[-1])
0x773: Pop(0)
0x774: Pop(0); Push((bool) Stack[-1] == 0)
0x775: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x776: @ sync()
0x777: Pop(0)
0x778: @@ IsDialogEnd(Stack[-1])
0x779: Pop(0)
0x77a: GOTO 0x774

0x77b: PushEmpty(object)
0x77c: Stack[-1] = Stack[-10]
0x77d: Call2 0x117d

0x77e: Pop(1)
0x77f: @ StopDialog(Stack[-4])
0x780: Pop(0)
0x781: @@ GetReturnValue(Stack[-2])
0x782: Pop(0)
0x783: Stack[-10] = Stack[-2]
0x784: Return(); Pop(8)

0x785: Stack[-4] = 0
0x786: PushEmpty()
0x787: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x788: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x789: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x78a: Push((int) 1)
0x78b: IF (Stack[-1] == 0) GOTO 0x7a2; Pop(1)

0x78c: PushEmpty(string)
0x78d: Stack[-1] = "Neutral"
0x78e: Call2 0x7c0

0x78f: Pop(1)
0x790: Push((int) 520800)
0x791: @@ SetMessage(Stack[-1])
0x792: Pop(1)
0x793: @@ ClearReplies()
0x794: Pop(0)
0x795: Push((int) 520801)
0x796: Push((int) 29131)
0x797: Push((int) 22018)
0x798: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x799: Pop(3)
0x79a: Push((int) 527799)
0x79b: Push((int) -1)
0x79c: Push((int) 29132)
0x79d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79e: Pop(3)
0x79f: GOTO 0x7a2

0x7a0: Return(); Pop(0)

0x7a1: GOTO 0x78a

0x7a2: PushEmpty(bool)
0x7a3: Call2 0x12da

0x7a4: Pop(0)
0x7a5: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x7a6: @ lshWaitForAnimEnd()
0x7a7: Pop(0)
0x7a8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7a9: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7aa: GOTO 0x7b0

0x7ab: PushEmpty(string)
0x7ac: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7ad: Call2 0x1219

0x7ae: Pop(1)
0x7af: GOTO 0x7a6

0x7b0: GOTO 0x7bf

0x7b1: Push("all")
0x7b2: Push("idle")
0x7b3: @ PlayAnimation(Stack[-2], Stack[-1])
0x7b4: Pop(2)
0x7b5: @ WaitForAnimEnd()
0x7b6: Pop(0)
0x7b7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7b8: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7b9: GOTO 0x7bf

0x7ba: Push("all")
0x7bb: Push("idle")
0x7bc: @ PlayAnimation(Stack[-2], Stack[-1])
0x7bd: Pop(2)
0x7be: GOTO 0x7b5

0x7bf: Return(); Pop(0)

0x7c0: PushEmpty()
0x7c1: PushEmpty(bool)
0x7c2: Call2 0x12da

0x7c3: Pop(0)
0x7c4: Pop(1); Push((bool) Stack[-1] == 0)
0x7c5: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7c6: Return(); Pop(0)

0x7c7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x7c8: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7c9: Return(); Pop(0)

0x7ca: PushEmpty(string, bool)
0x7cb: Stack[-2] = Stack[-3]
0x7cc: Push("")
0x7cd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7ce: IF (Stack[-1] == 0) GOTO 0x7d1; Pop(1)

0x7cf: Stack[-1] = (bool) 0
0x7d0: GOTO 0x7d2

0x7d1: Stack[-1] = (bool) 1
0x7d2: Call2 0x1229

0x7d3: Pop(2)
0x7d4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x7d5: Return(); Pop(0)

0x7d6: PushEmpty()
0x7d7: Push((int) 1)
0x7d8: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x7d9: PushEmpty()
0x7da: Call2 0x1247

0x7db: Pop(0)
0x7dc: Push((int) 22017)
0x7dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7de: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7df: PushEmpty(string)
0x7e0: Stack[-1] = "Neutral"
0x7e1: Call2 0x7c0

0x7e2: Pop(1)
0x7e3: Push((int) 520800)
0x7e4: @@ SetMessage(Stack[-1])
0x7e5: Pop(1)
0x7e6: @@ ClearReplies()
0x7e7: Pop(0)
0x7e8: Push((int) 520801)
0x7e9: Push((int) 29131)
0x7ea: Push((int) 22018)
0x7eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ec: Pop(3)
0x7ed: Push((int) 527799)
0x7ee: Push((int) -1)
0x7ef: Push((int) 29132)
0x7f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f1: Pop(3)
0x7f2: Return(); Pop(0)

0x7f3: Push((int) 29131)
0x7f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f5: IF (Stack[-1] == 0) GOTO 0x80a; Pop(1)

0x7f6: PushEmpty(string)
0x7f7: Stack[-1] = "Neutral"
0x7f8: Call2 0x7c0

0x7f9: Pop(1)
0x7fa: Push((int) 527798)
0x7fb: @@ SetMessage(Stack[-1])
0x7fc: Pop(1)
0x7fd: @@ ClearReplies()
0x7fe: Pop(0)
0x7ff: Push((int) 527800)
0x800: Push((int) -1)
0x801: Push((int) 29133)
0x802: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x803: Pop(3)
0x804: Push((int) 527801)
0x805: Push((int) -1)
0x806: Push((int) 29134)
0x807: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x808: Pop(3)
0x809: Return(); Pop(0)

0x80a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x80b: PushEmpty(bool)
0x80c: Call2 0x12da

0x80d: Pop(0)
0x80e: IF (Stack[-1] == 0) GOTO 0x812; Pop(1)

0x80f: @ lshStopAnimation()
0x810: Pop(0)
0x811: GOTO 0x814

0x812: @ StopAnimation()
0x813: Pop(0)
0x814: Return(); Pop(0)

0x815: GOTO 0x7d7

0x816: Return(); Pop(0)

0x817: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x818: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x819: PushEmpty(bool, object, float)
0x81a: Stack[-2] = Stack[-12]
0x81b: Stack[-1] = (float) 70.0
0x81c: Call2 0x1138

0x81d: Pop(2)
0x81e: Pop(1); Push((bool) Stack[-1] == 0)
0x81f: IF (Stack[-1] == 0) GOTO 0x822; Pop(1)

0x820: Stack[-10] = (int) -2
0x821: Return(); Pop(8)

0x822: @ CreateDialog(Stack[-4])
0x823: Pop(0)
0x824: PushEmpty(int)
0x825: Call2 0x12d4

0x826: Pop(0)
0x827: @@ SetNPCName(Stack[-1])
0x828: Pop(1)
0x829: PushEmpty(int)
0x82a: Call2 0x12d2

0x82b: Pop(0)
0x82c: @@ SetNPCDescription(Stack[-1])
0x82d: Pop(1)
0x82e: PushEmpty(string)
0x82f: Call2 0x12d6

0x830: Pop(0)
0x831: @@ SetPhoto(Stack[-1])
0x832: Pop(1)
0x833: PushEmpty(string)
0x834: Call2 0x12d8

0x835: Pop(0)
0x836: @@ SetPhoto2(Stack[-1])
0x837: Pop(1)
0x838: PushEmpty(int)
0x839: Call2 0x151a

0x83a: Pop(0)
0x83b: @@ SetPlayerName(Stack[-1])
0x83c: Pop(1)
0x83d: Stack[-2] = (int) -1
0x83e: @ IsOverrideActive(Stack[-3])
0x83f: Pop(0)
0x840: Push(Stack[-3])
0x841: IF (Stack[-1] == 0) GOTO 0x844; Pop(1)

0x842: Stack[-10] = (int) -2
0x843: Return(); Pop(8)

0x844: @ DoDialog(Stack[-4])
0x845: Pop(0)
0x846: PushEmpty(bool, object)
0x847: PushEmpty(object)
0x848: Call2 0x124e

0x849: Stack[-2] = Stack[-1]
0x84a: Pop(1)
0x84b: Call2 0x118f

0x84c: Pop(2)
0x84d: PushEmpty(object, object)
0x84e: Stack[-2] = Stack[-11]
0x84f: Stack[-1] = Stack[-6]
0x850: Push(-2, 4); TaskCall(9)
0x851: Call2 0x868

0x852: Pop(-2, 4); TaskReturn
0x853: Pop(2)
0x854: @@ IsDialogEnd(Stack[-1])
0x855: Pop(0)
0x856: Pop(0); Push((bool) Stack[-1] == 0)
0x857: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x858: @ sync()
0x859: Pop(0)
0x85a: @@ IsDialogEnd(Stack[-1])
0x85b: Pop(0)
0x85c: GOTO 0x856

0x85d: PushEmpty(object)
0x85e: Stack[-1] = Stack[-10]
0x85f: Call2 0x117d

0x860: Pop(1)
0x861: @ StopDialog(Stack[-4])
0x862: Pop(0)
0x863: @@ GetReturnValue(Stack[-2])
0x864: Pop(0)
0x865: Stack[-10] = Stack[-2]
0x866: Return(); Pop(8)

0x867: Stack[-4] = 0
0x868: PushEmpty()
0x869: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x86a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x86b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x86c: Push((int) 1)
0x86d: IF (Stack[-1] == 0) GOTO 0x893; Pop(1)

0x86e: PushEmpty(string)
0x86f: Stack[-1] = "Neutral"
0x870: Call2 0x8b1

0x871: Pop(1)
0x872: Push((int) 521431)
0x873: @@ SetMessage(Stack[-1])
0x874: Pop(1)
0x875: @@ ClearReplies()
0x876: Pop(0)
0x877: PushEmpty(bool, object)
0x878: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x879: Call2 0x13d2

0x87a: Pop(1)
0x87b: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x87c: Push((int) 521432)
0x87d: Push((int) 22611)
0x87e: Push((int) 22610)
0x87f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x880: Pop(3)
0x881: PushEmpty(bool, object)
0x882: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x883: Call2 0x1413

0x884: Pop(1)
0x885: IF (Stack[-1] == 0) GOTO 0x88b; Pop(1)

0x886: Push((int) 523679)
0x887: Push((int) 24958)
0x888: Push((int) 24931)
0x889: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88a: Pop(3)
0x88b: Push((int) 521435)
0x88c: Push((int) -1)
0x88d: Push((int) 22613)
0x88e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88f: Pop(3)
0x890: GOTO 0x893

0x891: Return(); Pop(0)

0x892: GOTO 0x86c

0x893: PushEmpty(bool)
0x894: Call2 0x12da

0x895: Pop(0)
0x896: IF (Stack[-1] == 0) GOTO 0x8a2; Pop(1)

0x897: @ lshWaitForAnimEnd()
0x898: Pop(0)
0x899: Push( Stack[3 + Tasks[-1].StackPointer] )
0x89a: IF (Stack[-1] == 0) GOTO 0x89c; Pop(1)

0x89b: GOTO 0x8a1

0x89c: PushEmpty(string)
0x89d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x89e: Call2 0x1219

0x89f: Pop(1)
0x8a0: GOTO 0x897

0x8a1: GOTO 0x8b0

0x8a2: Push("all")
0x8a3: Push("idle")
0x8a4: @ PlayAnimation(Stack[-2], Stack[-1])
0x8a5: Pop(2)
0x8a6: @ WaitForAnimEnd()
0x8a7: Pop(0)
0x8a8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8a9: IF (Stack[-1] == 0) GOTO 0x8ab; Pop(1)

0x8aa: GOTO 0x8b0

0x8ab: Push("all")
0x8ac: Push("idle")
0x8ad: @ PlayAnimation(Stack[-2], Stack[-1])
0x8ae: Pop(2)
0x8af: GOTO 0x8a6

0x8b0: Return(); Pop(0)

0x8b1: PushEmpty()
0x8b2: PushEmpty(bool)
0x8b3: Call2 0x12da

0x8b4: Pop(0)
0x8b5: Pop(1); Push((bool) Stack[-1] == 0)
0x8b6: IF (Stack[-1] == 0) GOTO 0x8b8; Pop(1)

0x8b7: Return(); Pop(0)

0x8b8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8b9: IF (Stack[-1] == 0) GOTO 0x8bb; Pop(1)

0x8ba: Return(); Pop(0)

0x8bb: PushEmpty(string, bool)
0x8bc: Stack[-2] = Stack[-3]
0x8bd: Push("")
0x8be: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8bf: IF (Stack[-1] == 0) GOTO 0x8c2; Pop(1)

0x8c0: Stack[-1] = (bool) 0
0x8c1: GOTO 0x8c3

0x8c2: Stack[-1] = (bool) 1
0x8c3: Call2 0x1229

0x8c4: Pop(2)
0x8c5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8c6: Return(); Pop(0)

0x8c7: PushEmpty()
0x8c8: Push((int) 1)
0x8c9: IF (Stack[-1] == 0) GOTO 0xa99; Pop(1)

0x8ca: PushEmpty()
0x8cb: Call2 0x1247

0x8cc: Pop(0)
0x8cd: Push((int) 22612)
0x8ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8cf: IF (Stack[-1] == 0) GOTO 0x8df; Pop(1)

0x8d0: PushEmpty(object, object)
0x8d1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8d3: Call2 0x1379

0x8d4: Pop(2)
0x8d5: PushEmpty(object, object)
0x8d6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8d7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8d8: Call2 0x13c7

0x8d9: Pop(2)
0x8da: PushEmpty(object, object)
0x8db: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8dc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8dd: Call2 0x13ac

0x8de: Pop(2)
0x8df: Push((int) 24978)
0x8e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8e1: IF (Stack[-1] == 0) GOTO 0x8f1; Pop(1)

0x8e2: PushEmpty(object, object)
0x8e3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8e5: Call2 0x1379

0x8e6: Pop(2)
0x8e7: PushEmpty(object, object)
0x8e8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8e9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8ea: Call2 0x13c7

0x8eb: Pop(2)
0x8ec: PushEmpty(object, object)
0x8ed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8ee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8ef: Call2 0x13ac

0x8f0: Pop(2)
0x8f1: Push((int) 24931)
0x8f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8f3: IF (Stack[-1] == 0) GOTO 0x8f9; Pop(1)

0x8f4: PushEmpty(object, object)
0x8f5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8f6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8f7: Call2 0x13c1

0x8f8: Pop(2)
0x8f9: Push((int) 22609)
0x8fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8fb: IF (Stack[-1] == 0) GOTO 0x91f; Pop(1)

0x8fc: PushEmpty(string)
0x8fd: Stack[-1] = "Neutral"
0x8fe: Call2 0x8b1

0x8ff: Pop(1)
0x900: Push((int) 521431)
0x901: @@ SetMessage(Stack[-1])
0x902: Pop(1)
0x903: @@ ClearReplies()
0x904: Pop(0)
0x905: PushEmpty(bool, object)
0x906: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x907: Call2 0x13d2

0x908: Pop(1)
0x909: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x90a: Push((int) 521432)
0x90b: Push((int) 22611)
0x90c: Push((int) 22610)
0x90d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90e: Pop(3)
0x90f: PushEmpty(bool, object)
0x910: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x911: Call2 0x1413

0x912: Pop(1)
0x913: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x914: Push((int) 523679)
0x915: Push((int) 24958)
0x916: Push((int) 24931)
0x917: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x918: Pop(3)
0x919: Push((int) 521435)
0x91a: Push((int) -1)
0x91b: Push((int) 22613)
0x91c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91d: Pop(3)
0x91e: Return(); Pop(0)

0x91f: Push((int) 24958)
0x920: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x921: IF (Stack[-1] == 0) GOTO 0x93b; Pop(1)

0x922: PushEmpty(string)
0x923: Stack[-1] = "Neutral"
0x924: Call2 0x8b1

0x925: Pop(1)
0x926: Push((int) 523703)
0x927: @@ SetMessage(Stack[-1])
0x928: Pop(1)
0x929: @@ ClearReplies()
0x92a: Pop(0)
0x92b: Push((int) 523704)
0x92c: Push((int) 24960)
0x92d: Push((int) 24959)
0x92e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92f: Pop(3)
0x930: Push((int) 523706)
0x931: Push((int) -1)
0x932: Push((int) 24961)
0x933: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x934: Pop(3)
0x935: Push((int) 523707)
0x936: Push((int) -1)
0x937: Push((int) 24962)
0x938: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x939: Pop(3)
0x93a: Return(); Pop(0)

0x93b: Push((int) 24960)
0x93c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93d: IF (Stack[-1] == 0) GOTO 0x94d; Pop(1)

0x93e: PushEmpty(string)
0x93f: Stack[-1] = "Neutral"
0x940: Call2 0x8b1

0x941: Pop(1)
0x942: Push((int) 523705)
0x943: @@ SetMessage(Stack[-1])
0x944: Pop(1)
0x945: @@ ClearReplies()
0x946: Pop(0)
0x947: Push((int) 523681)
0x948: Push((int) 24934)
0x949: Push((int) 24933)
0x94a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94b: Pop(3)
0x94c: Return(); Pop(0)

0x94d: Push((int) 24934)
0x94e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x94f: IF (Stack[-1] == 0) GOTO 0x969; Pop(1)

0x950: PushEmpty(string)
0x951: Stack[-1] = "Neutral"
0x952: Call2 0x8b1

0x953: Pop(1)
0x954: Push((int) 523682)
0x955: @@ SetMessage(Stack[-1])
0x956: Pop(1)
0x957: @@ ClearReplies()
0x958: Pop(0)
0x959: Push((int) 523683)
0x95a: Push((int) 24936)
0x95b: Push((int) 24935)
0x95c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95d: Pop(3)
0x95e: Push((int) 523701)
0x95f: Push((int) 24957)
0x960: Push((int) 24956)
0x961: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x962: Pop(3)
0x963: Push((int) 523708)
0x964: Push((int) -1)
0x965: Push((int) 24963)
0x966: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x967: Pop(3)
0x968: Return(); Pop(0)

0x969: Push((int) 24957)
0x96a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x96b: IF (Stack[-1] == 0) GOTO 0x97b; Pop(1)

0x96c: PushEmpty(string)
0x96d: Stack[-1] = "Neutral"
0x96e: Call2 0x8b1

0x96f: Pop(1)
0x970: Push((int) 523702)
0x971: @@ SetMessage(Stack[-1])
0x972: Pop(1)
0x973: @@ ClearReplies()
0x974: Pop(0)
0x975: Push((int) 523709)
0x976: Push((int) 24965)
0x977: Push((int) 24964)
0x978: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x979: Pop(3)
0x97a: Return(); Pop(0)

0x97b: Push((int) 24965)
0x97c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x97d: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x97e: PushEmpty(string)
0x97f: Stack[-1] = "Neutral"
0x980: Call2 0x8b1

0x981: Pop(1)
0x982: Push((int) 523710)
0x983: @@ SetMessage(Stack[-1])
0x984: Pop(1)
0x985: @@ ClearReplies()
0x986: Pop(0)
0x987: Push((int) 523712)
0x988: Push((int) -1)
0x989: Push((int) 24967)
0x98a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98b: Pop(3)
0x98c: Push((int) 523711)
0x98d: Push((int) -1)
0x98e: Push((int) 24966)
0x98f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x990: Pop(3)
0x991: Return(); Pop(0)

0x992: Push((int) 24936)
0x993: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x994: IF (Stack[-1] == 0) GOTO 0x9a4; Pop(1)

0x995: PushEmpty(string)
0x996: Stack[-1] = "Neutral"
0x997: Call2 0x8b1

0x998: Pop(1)
0x999: Push((int) 523684)
0x99a: @@ SetMessage(Stack[-1])
0x99b: Pop(1)
0x99c: @@ ClearReplies()
0x99d: Pop(0)
0x99e: Push((int) 523685)
0x99f: Push((int) 24968)
0x9a0: Push((int) 24937)
0x9a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a2: Pop(3)
0x9a3: Return(); Pop(0)

0x9a4: Push((int) 24968)
0x9a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9a6: IF (Stack[-1] == 0) GOTO 0x9b6; Pop(1)

0x9a7: PushEmpty(string)
0x9a8: Stack[-1] = "Neutral"
0x9a9: Call2 0x8b1

0x9aa: Pop(1)
0x9ab: Push((int) 523713)
0x9ac: @@ SetMessage(Stack[-1])
0x9ad: Pop(1)
0x9ae: @@ ClearReplies()
0x9af: Pop(0)
0x9b0: Push((int) 523714)
0x9b1: Push((int) -1)
0x9b2: Push((int) 24969)
0x9b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b4: Pop(3)
0x9b5: Return(); Pop(0)

0x9b6: Push((int) 22611)
0x9b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b8: IF (Stack[-1] == 0) GOTO 0x9cd; Pop(1)

0x9b9: PushEmpty(string)
0x9ba: Stack[-1] = "Neutral"
0x9bb: Call2 0x8b1

0x9bc: Pop(1)
0x9bd: Push((int) 521433)
0x9be: @@ SetMessage(Stack[-1])
0x9bf: Pop(1)
0x9c0: @@ ClearReplies()
0x9c1: Pop(0)
0x9c2: Push((int) 523686)
0x9c3: Push((int) 24939)
0x9c4: Push((int) 24938)
0x9c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c6: Pop(3)
0x9c7: Push((int) 523690)
0x9c8: Push((int) 24941)
0x9c9: Push((int) 24942)
0x9ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9cb: Pop(3)
0x9cc: Return(); Pop(0)

0x9cd: Push((int) 24939)
0x9ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9cf: IF (Stack[-1] == 0) GOTO 0x9e4; Pop(1)

0x9d0: PushEmpty(string)
0x9d1: Stack[-1] = "Neutral"
0x9d2: Call2 0x8b1

0x9d3: Pop(1)
0x9d4: Push((int) 523687)
0x9d5: @@ SetMessage(Stack[-1])
0x9d6: Pop(1)
0x9d7: @@ ClearReplies()
0x9d8: Pop(0)
0x9d9: Push((int) 523688)
0x9da: Push((int) 24941)
0x9db: Push((int) 24940)
0x9dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9dd: Pop(3)
0x9de: Push((int) 523695)
0x9df: Push((int) 24949)
0x9e0: Push((int) 24948)
0x9e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e2: Pop(3)
0x9e3: Return(); Pop(0)

0x9e4: Push((int) 24949)
0x9e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e6: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9e7: PushEmpty(string)
0x9e8: Stack[-1] = "Neutral"
0x9e9: Call2 0x8b1

0x9ea: Pop(1)
0x9eb: Push((int) 523696)
0x9ec: @@ SetMessage(Stack[-1])
0x9ed: Pop(1)
0x9ee: @@ ClearReplies()
0x9ef: Pop(0)
0x9f0: Push((int) 523697)
0x9f1: Push((int) 24941)
0x9f2: Push((int) 24950)
0x9f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f4: Pop(3)
0x9f5: Push((int) 523698)
0x9f6: Push((int) 24952)
0x9f7: Push((int) 24951)
0x9f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f9: Pop(3)
0x9fa: Return(); Pop(0)

0x9fb: Push((int) 24952)
0x9fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9fd: IF (Stack[-1] == 0) GOTO 0xa0d; Pop(1)

0x9fe: PushEmpty(string)
0x9ff: Stack[-1] = "Neutral"
0xa00: Call2 0x8b1

0xa01: Pop(1)
0xa02: Push((int) 523699)
0xa03: @@ SetMessage(Stack[-1])
0xa04: Pop(1)
0xa05: @@ ClearReplies()
0xa06: Pop(0)
0xa07: Push((int) 523700)
0xa08: Push((int) 24941)
0xa09: Push((int) 24953)
0xa0a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0b: Pop(3)
0xa0c: Return(); Pop(0)

0xa0d: Push((int) 24941)
0xa0e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa0f: IF (Stack[-1] == 0) GOTO 0xa24; Pop(1)

0xa10: PushEmpty(string)
0xa11: Stack[-1] = "Neutral"
0xa12: Call2 0x8b1

0xa13: Pop(1)
0xa14: Push((int) 523689)
0xa15: @@ SetMessage(Stack[-1])
0xa16: Pop(1)
0xa17: @@ ClearReplies()
0xa18: Pop(0)
0xa19: Push((int) 523691)
0xa1a: Push((int) 24944)
0xa1b: Push((int) 24943)
0xa1c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1d: Pop(3)
0xa1e: Push((int) 523715)
0xa1f: Push((int) 24971)
0xa20: Push((int) 24970)
0xa21: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa22: Pop(3)
0xa23: Return(); Pop(0)

0xa24: Push((int) 24971)
0xa25: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa26: IF (Stack[-1] == 0) GOTO 0xa3b; Pop(1)

0xa27: PushEmpty(string)
0xa28: Stack[-1] = "Neutral"
0xa29: Call2 0x8b1

0xa2a: Pop(1)
0xa2b: Push((int) 523716)
0xa2c: @@ SetMessage(Stack[-1])
0xa2d: Pop(1)
0xa2e: @@ ClearReplies()
0xa2f: Pop(0)
0xa30: Push((int) 523718)
0xa31: Push((int) 24944)
0xa32: Push((int) 24973)
0xa33: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa34: Pop(3)
0xa35: Push((int) 523719)
0xa36: Push((int) 24944)
0xa37: Push((int) 24974)
0xa38: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa39: Pop(3)
0xa3a: Return(); Pop(0)

0xa3b: Push((int) 24944)
0xa3c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa3d: IF (Stack[-1] == 0) GOTO 0xa52; Pop(1)

0xa3e: PushEmpty(string)
0xa3f: Stack[-1] = "Neutral"
0xa40: Call2 0x8b1

0xa41: Pop(1)
0xa42: Push((int) 523692)
0xa43: @@ SetMessage(Stack[-1])
0xa44: Pop(1)
0xa45: @@ ClearReplies()
0xa46: Pop(0)
0xa47: Push((int) 523693)
0xa48: Push((int) 24946)
0xa49: Push((int) 24945)
0xa4a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4b: Pop(3)
0xa4c: Push((int) 523717)
0xa4d: Push((int) 24977)
0xa4e: Push((int) 24972)
0xa4f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa50: Pop(3)
0xa51: Return(); Pop(0)

0xa52: Push((int) 24977)
0xa53: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa54: IF (Stack[-1] == 0) GOTO 0xa64; Pop(1)

0xa55: PushEmpty(string)
0xa56: Stack[-1] = "Neutral"
0xa57: Call2 0x8b1

0xa58: Pop(1)
0xa59: Push((int) 523720)
0xa5a: @@ SetMessage(Stack[-1])
0xa5b: Pop(1)
0xa5c: @@ ClearReplies()
0xa5d: Pop(0)
0xa5e: Push((int) 523722)
0xa5f: Push((int) 24980)
0xa60: Push((int) 24979)
0xa61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa62: Pop(3)
0xa63: Return(); Pop(0)

0xa64: Push((int) 24980)
0xa65: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa66: IF (Stack[-1] == 0) GOTO 0xa76; Pop(1)

0xa67: PushEmpty(string)
0xa68: Stack[-1] = "Neutral"
0xa69: Call2 0x8b1

0xa6a: Pop(1)
0xa6b: Push((int) 523723)
0xa6c: @@ SetMessage(Stack[-1])
0xa6d: Pop(1)
0xa6e: @@ ClearReplies()
0xa6f: Pop(0)
0xa70: Push((int) 523724)
0xa71: Push((int) 24946)
0xa72: Push((int) 24981)
0xa73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa74: Pop(3)
0xa75: Return(); Pop(0)

0xa76: Push((int) 24946)
0xa77: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa78: IF (Stack[-1] == 0) GOTO 0xa8d; Pop(1)

0xa79: PushEmpty(string)
0xa7a: Stack[-1] = "Neutral"
0xa7b: Call2 0x8b1

0xa7c: Pop(1)
0xa7d: Push((int) 523694)
0xa7e: @@ SetMessage(Stack[-1])
0xa7f: Pop(1)
0xa80: @@ ClearReplies()
0xa81: Pop(0)
0xa82: Push((int) 521434)
0xa83: Push((int) -1)
0xa84: Push((int) 22612)
0xa85: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa86: Pop(3)
0xa87: Push((int) 523721)
0xa88: Push((int) -1)
0xa89: Push((int) 24978)
0xa8a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8b: Pop(3)
0xa8c: Return(); Pop(0)

0xa8d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa8e: PushEmpty(bool)
0xa8f: Call2 0x12da

0xa90: Pop(0)
0xa91: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa92: @ lshStopAnimation()
0xa93: Pop(0)
0xa94: GOTO 0xa97

0xa95: @ StopAnimation()
0xa96: Pop(0)
0xa97: Return(); Pop(0)

0xa98: GOTO 0x8c8

0xa99: Return(); Pop(0)

0xa9a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xa9b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa9c: PushEmpty(bool, object, float)
0xa9d: Stack[-2] = Stack[-12]
0xa9e: Stack[-1] = (float) 70.0
0xa9f: Call2 0x1138

0xaa0: Pop(2)
0xaa1: Pop(1); Push((bool) Stack[-1] == 0)
0xaa2: IF (Stack[-1] == 0) GOTO 0xaa5; Pop(1)

0xaa3: Stack[-10] = (int) -2
0xaa4: Return(); Pop(8)

0xaa5: @ CreateDialog(Stack[-4])
0xaa6: Pop(0)
0xaa7: PushEmpty(int)
0xaa8: Call2 0x12d4

0xaa9: Pop(0)
0xaaa: @@ SetNPCName(Stack[-1])
0xaab: Pop(1)
0xaac: PushEmpty(int)
0xaad: Call2 0x12d2

0xaae: Pop(0)
0xaaf: @@ SetNPCDescription(Stack[-1])
0xab0: Pop(1)
0xab1: PushEmpty(string)
0xab2: Call2 0x12d6

0xab3: Pop(0)
0xab4: @@ SetPhoto(Stack[-1])
0xab5: Pop(1)
0xab6: PushEmpty(string)
0xab7: Call2 0x12d8

0xab8: Pop(0)
0xab9: @@ SetPhoto2(Stack[-1])
0xaba: Pop(1)
0xabb: PushEmpty(int)
0xabc: Call2 0x151a

0xabd: Pop(0)
0xabe: @@ SetPlayerName(Stack[-1])
0xabf: Pop(1)
0xac0: Stack[-2] = (int) -1
0xac1: @ IsOverrideActive(Stack[-3])
0xac2: Pop(0)
0xac3: Push(Stack[-3])
0xac4: IF (Stack[-1] == 0) GOTO 0xac7; Pop(1)

0xac5: Stack[-10] = (int) -2
0xac6: Return(); Pop(8)

0xac7: @ DoDialog(Stack[-4])
0xac8: Pop(0)
0xac9: PushEmpty(bool, object)
0xaca: PushEmpty(object)
0xacb: Call2 0x124e

0xacc: Stack[-2] = Stack[-1]
0xacd: Pop(1)
0xace: Call2 0x118f

0xacf: Pop(2)
0xad0: PushEmpty(object, object)
0xad1: Stack[-2] = Stack[-11]
0xad2: Stack[-1] = Stack[-6]
0xad3: Push(-2, 4); TaskCall(11)
0xad4: Call2 0xaeb

0xad5: Pop(-2, 4); TaskReturn
0xad6: Pop(2)
0xad7: @@ IsDialogEnd(Stack[-1])
0xad8: Pop(0)
0xad9: Pop(0); Push((bool) Stack[-1] == 0)
0xada: IF (Stack[-1] == 0) GOTO 0xae0; Pop(1)

0xadb: @ sync()
0xadc: Pop(0)
0xadd: @@ IsDialogEnd(Stack[-1])
0xade: Pop(0)
0xadf: GOTO 0xad9

0xae0: PushEmpty(object)
0xae1: Stack[-1] = Stack[-10]
0xae2: Call2 0x117d

0xae3: Pop(1)
0xae4: @ StopDialog(Stack[-4])
0xae5: Pop(0)
0xae6: @@ GetReturnValue(Stack[-2])
0xae7: Pop(0)
0xae8: Stack[-10] = Stack[-2]
0xae9: Return(); Pop(8)

0xaea: Stack[-4] = 0
0xaeb: PushEmpty()
0xaec: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xaed: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xaee: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xaef: Push((int) 1)
0xaf0: IF (Stack[-1] == 0) GOTO 0xb27; Pop(1)

0xaf1: PushEmpty(string)
0xaf2: Stack[-1] = "Neutral"
0xaf3: Call2 0xb45

0xaf4: Pop(1)
0xaf5: Push((int) 521945)
0xaf6: @@ SetMessage(Stack[-1])
0xaf7: Pop(1)
0xaf8: @@ ClearReplies()
0xaf9: Pop(0)
0xafa: PushEmpty(bool)
0xafb: Stack[-1] = (bool) 1
0xafc: PushEmpty(bool)
0xafd: Stack[-1] = (bool) 0
0xafe: PushEmpty(bool, object)
0xaff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb00: Call2 0x13ea

0xb01: Pop(1)
0xb02: IF (Stack[-1] == 0) GOTO 0xb09; Pop(1)

0xb03: PushEmpty(bool, object)
0xb04: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb05: Call2 0x13f6

0xb06: Pop(1)
0xb07: IF (Stack[-1] == 0) GOTO 0xb09; Pop(1)

0xb08: Stack[-1] = (bool) 1
0xb09: IF (Stack[-1] == 0) GOTO 0xb19; Pop(1)

0xb0a: PushEmpty(bool)
0xb0b: Stack[-1] = (bool) 0
0xb0c: PushEmpty(bool, object)
0xb0d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb0e: Call2 0x13de

0xb0f: Pop(1)
0xb10: IF (Stack[-1] == 0) GOTO 0xb17; Pop(1)

0xb11: PushEmpty(bool, object)
0xb12: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb13: Call2 0x13f6

0xb14: Pop(1)
0xb15: IF (Stack[-1] == 0) GOTO 0xb17; Pop(1)

0xb16: Stack[-1] = (bool) 1
0xb17: IF (Stack[-1] == 0) GOTO 0xb19; Pop(1)

0xb18: Stack[-1] = (bool) 0
0xb19: IF (Stack[-1] == 0) GOTO 0xb1f; Pop(1)

0xb1a: Push((int) 521946)
0xb1b: Push((int) 23122)
0xb1c: Push((int) 23120)
0xb1d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1e: Pop(3)
0xb1f: Push((int) 521947)
0xb20: Push((int) -1)
0xb21: Push((int) 23121)
0xb22: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb23: Pop(3)
0xb24: GOTO 0xb27

0xb25: Return(); Pop(0)

0xb26: GOTO 0xaef

0xb27: PushEmpty(bool)
0xb28: Call2 0x12da

0xb29: Pop(0)
0xb2a: IF (Stack[-1] == 0) GOTO 0xb36; Pop(1)

0xb2b: @ lshWaitForAnimEnd()
0xb2c: Pop(0)
0xb2d: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb2e: IF (Stack[-1] == 0) GOTO 0xb30; Pop(1)

0xb2f: GOTO 0xb35

0xb30: PushEmpty(string)
0xb31: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb32: Call2 0x1219

0xb33: Pop(1)
0xb34: GOTO 0xb2b

0xb35: GOTO 0xb44

0xb36: Push("all")
0xb37: Push("idle")
0xb38: @ PlayAnimation(Stack[-2], Stack[-1])
0xb39: Pop(2)
0xb3a: @ WaitForAnimEnd()
0xb3b: Pop(0)
0xb3c: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb3d: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb3e: GOTO 0xb44

0xb3f: Push("all")
0xb40: Push("idle")
0xb41: @ PlayAnimation(Stack[-2], Stack[-1])
0xb42: Pop(2)
0xb43: GOTO 0xb3a

0xb44: Return(); Pop(0)

0xb45: PushEmpty()
0xb46: PushEmpty(bool)
0xb47: Call2 0x12da

0xb48: Pop(0)
0xb49: Pop(1); Push((bool) Stack[-1] == 0)
0xb4a: IF (Stack[-1] == 0) GOTO 0xb4c; Pop(1)

0xb4b: Return(); Pop(0)

0xb4c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb4d: IF (Stack[-1] == 0) GOTO 0xb4f; Pop(1)

0xb4e: Return(); Pop(0)

0xb4f: PushEmpty(string, bool)
0xb50: Stack[-2] = Stack[-3]
0xb51: Push("")
0xb52: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb53: IF (Stack[-1] == 0) GOTO 0xb56; Pop(1)

0xb54: Stack[-1] = (bool) 0
0xb55: GOTO 0xb57

0xb56: Stack[-1] = (bool) 1
0xb57: Call2 0x1229

0xb58: Pop(2)
0xb59: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb5a: Return(); Pop(0)

0xb5b: PushEmpty()
0xb5c: Push((int) 1)
0xb5d: IF (Stack[-1] == 0) GOTO 0xc0b; Pop(1)

0xb5e: PushEmpty()
0xb5f: Call2 0x1247

0xb60: Pop(0)
0xb61: Push((int) 23120)
0xb62: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb63: IF (Stack[-1] == 0) GOTO 0xb69; Pop(1)

0xb64: PushEmpty(object, object)
0xb65: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb66: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb67: Call2 0x1382

0xb68: Pop(2)
0xb69: Push((int) 23119)
0xb6a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6b: IF (Stack[-1] == 0) GOTO 0xba0; Pop(1)

0xb6c: PushEmpty(string)
0xb6d: Stack[-1] = "Neutral"
0xb6e: Call2 0xb45

0xb6f: Pop(1)
0xb70: Push((int) 521945)
0xb71: @@ SetMessage(Stack[-1])
0xb72: Pop(1)
0xb73: @@ ClearReplies()
0xb74: Pop(0)
0xb75: PushEmpty(bool)
0xb76: Stack[-1] = (bool) 1
0xb77: PushEmpty(bool)
0xb78: Stack[-1] = (bool) 0
0xb79: PushEmpty(bool, object)
0xb7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb7b: Call2 0x13ea

0xb7c: Pop(1)
0xb7d: IF (Stack[-1] == 0) GOTO 0xb84; Pop(1)

0xb7e: PushEmpty(bool, object)
0xb7f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb80: Call2 0x13f6

0xb81: Pop(1)
0xb82: IF (Stack[-1] == 0) GOTO 0xb84; Pop(1)

0xb83: Stack[-1] = (bool) 1
0xb84: IF (Stack[-1] == 0) GOTO 0xb94; Pop(1)

0xb85: PushEmpty(bool)
0xb86: Stack[-1] = (bool) 0
0xb87: PushEmpty(bool, object)
0xb88: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb89: Call2 0x13de

0xb8a: Pop(1)
0xb8b: IF (Stack[-1] == 0) GOTO 0xb92; Pop(1)

0xb8c: PushEmpty(bool, object)
0xb8d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb8e: Call2 0x13f6

0xb8f: Pop(1)
0xb90: IF (Stack[-1] == 0) GOTO 0xb92; Pop(1)

0xb91: Stack[-1] = (bool) 1
0xb92: IF (Stack[-1] == 0) GOTO 0xb94; Pop(1)

0xb93: Stack[-1] = (bool) 0
0xb94: IF (Stack[-1] == 0) GOTO 0xb9a; Pop(1)

0xb95: Push((int) 521946)
0xb96: Push((int) 23122)
0xb97: Push((int) 23120)
0xb98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb99: Pop(3)
0xb9a: Push((int) 521947)
0xb9b: Push((int) -1)
0xb9c: Push((int) 23121)
0xb9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9e: Pop(3)
0xb9f: Return(); Pop(0)

0xba0: Push((int) 23122)
0xba1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xba2: IF (Stack[-1] == 0) GOTO 0xbb2; Pop(1)

0xba3: PushEmpty(string)
0xba4: Stack[-1] = "Neutral"
0xba5: Call2 0xb45

0xba6: Pop(1)
0xba7: Push((int) 521948)
0xba8: @@ SetMessage(Stack[-1])
0xba9: Pop(1)
0xbaa: @@ ClearReplies()
0xbab: Pop(0)
0xbac: Push((int) 521949)
0xbad: Push((int) 23730)
0xbae: Push((int) 23123)
0xbaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb0: Pop(3)
0xbb1: Return(); Pop(0)

0xbb2: Push((int) 23730)
0xbb3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb4: IF (Stack[-1] == 0) GOTO 0xbc4; Pop(1)

0xbb5: PushEmpty(string)
0xbb6: Stack[-1] = "Neutral"
0xbb7: Call2 0xb45

0xbb8: Pop(1)
0xbb9: Push((int) 522551)
0xbba: @@ SetMessage(Stack[-1])
0xbbb: Pop(1)
0xbbc: @@ ClearReplies()
0xbbd: Pop(0)
0xbbe: Push((int) 522552)
0xbbf: Push((int) 23732)
0xbc0: Push((int) 23731)
0xbc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc2: Pop(3)
0xbc3: Return(); Pop(0)

0xbc4: Push((int) 23732)
0xbc5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc6: IF (Stack[-1] == 0) GOTO 0xbdb; Pop(1)

0xbc7: PushEmpty(string)
0xbc8: Stack[-1] = "Neutral"
0xbc9: Call2 0xb45

0xbca: Pop(1)
0xbcb: Push((int) 522553)
0xbcc: @@ SetMessage(Stack[-1])
0xbcd: Pop(1)
0xbce: @@ ClearReplies()
0xbcf: Pop(0)
0xbd0: Push((int) 522554)
0xbd1: Push((int) 23734)
0xbd2: Push((int) 23733)
0xbd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd4: Pop(3)
0xbd5: Push((int) 522556)
0xbd6: Push((int) -1)
0xbd7: Push((int) 23735)
0xbd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd9: Pop(3)
0xbda: Return(); Pop(0)

0xbdb: Push((int) 23734)
0xbdc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbdd: IF (Stack[-1] == 0) GOTO 0xbed; Pop(1)

0xbde: PushEmpty(string)
0xbdf: Stack[-1] = "Neutral"
0xbe0: Call2 0xb45

0xbe1: Pop(1)
0xbe2: Push((int) 522555)
0xbe3: @@ SetMessage(Stack[-1])
0xbe4: Pop(1)
0xbe5: @@ ClearReplies()
0xbe6: Pop(0)
0xbe7: Push((int) 522557)
0xbe8: Push((int) 23737)
0xbe9: Push((int) 23736)
0xbea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbeb: Pop(3)
0xbec: Return(); Pop(0)

0xbed: Push((int) 23737)
0xbee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbef: IF (Stack[-1] == 0) GOTO 0xbff; Pop(1)

0xbf0: PushEmpty(string)
0xbf1: Stack[-1] = "Neutral"
0xbf2: Call2 0xb45

0xbf3: Pop(1)
0xbf4: Push((int) 522558)
0xbf5: @@ SetMessage(Stack[-1])
0xbf6: Pop(1)
0xbf7: @@ ClearReplies()
0xbf8: Pop(0)
0xbf9: Push((int) 522559)
0xbfa: Push((int) -1)
0xbfb: Push((int) 23738)
0xbfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbfd: Pop(3)
0xbfe: Return(); Pop(0)

0xbff: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc00: PushEmpty(bool)
0xc01: Call2 0x12da

0xc02: Pop(0)
0xc03: IF (Stack[-1] == 0) GOTO 0xc07; Pop(1)

0xc04: @ lshStopAnimation()
0xc05: Pop(0)
0xc06: GOTO 0xc09

0xc07: @ StopAnimation()
0xc08: Pop(0)
0xc09: Return(); Pop(0)

0xc0a: GOTO 0xb5c

0xc0b: Return(); Pop(0)

0xc0c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xc0d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xc0e: PushEmpty(bool, object, float)
0xc0f: Stack[-2] = Stack[-12]
0xc10: Stack[-1] = (float) 70.0
0xc11: Call2 0x1138

0xc12: Pop(2)
0xc13: Pop(1); Push((bool) Stack[-1] == 0)
0xc14: IF (Stack[-1] == 0) GOTO 0xc17; Pop(1)

0xc15: Stack[-10] = (int) -2
0xc16: Return(); Pop(8)

0xc17: @ CreateDialog(Stack[-4])
0xc18: Pop(0)
0xc19: PushEmpty(int)
0xc1a: Call2 0x12d4

0xc1b: Pop(0)
0xc1c: @@ SetNPCName(Stack[-1])
0xc1d: Pop(1)
0xc1e: PushEmpty(int)
0xc1f: Call2 0x12d2

0xc20: Pop(0)
0xc21: @@ SetNPCDescription(Stack[-1])
0xc22: Pop(1)
0xc23: PushEmpty(string)
0xc24: Call2 0x12d6

0xc25: Pop(0)
0xc26: @@ SetPhoto(Stack[-1])
0xc27: Pop(1)
0xc28: PushEmpty(string)
0xc29: Call2 0x12d8

0xc2a: Pop(0)
0xc2b: @@ SetPhoto2(Stack[-1])
0xc2c: Pop(1)
0xc2d: PushEmpty(int)
0xc2e: Call2 0x151a

0xc2f: Pop(0)
0xc30: @@ SetPlayerName(Stack[-1])
0xc31: Pop(1)
0xc32: Stack[-2] = (int) -1
0xc33: @ IsOverrideActive(Stack[-3])
0xc34: Pop(0)
0xc35: Push(Stack[-3])
0xc36: IF (Stack[-1] == 0) GOTO 0xc39; Pop(1)

0xc37: Stack[-10] = (int) -2
0xc38: Return(); Pop(8)

0xc39: @ DoDialog(Stack[-4])
0xc3a: Pop(0)
0xc3b: PushEmpty(bool, object)
0xc3c: PushEmpty(object)
0xc3d: Call2 0x124e

0xc3e: Stack[-2] = Stack[-1]
0xc3f: Pop(1)
0xc40: Call2 0x118f

0xc41: Pop(2)
0xc42: PushEmpty(object, object)
0xc43: Stack[-2] = Stack[-11]
0xc44: Stack[-1] = Stack[-6]
0xc45: Push(-2, 4); TaskCall(13)
0xc46: Call2 0xc5d

0xc47: Pop(-2, 4); TaskReturn
0xc48: Pop(2)
0xc49: @@ IsDialogEnd(Stack[-1])
0xc4a: Pop(0)
0xc4b: Pop(0); Push((bool) Stack[-1] == 0)
0xc4c: IF (Stack[-1] == 0) GOTO 0xc52; Pop(1)

0xc4d: @ sync()
0xc4e: Pop(0)
0xc4f: @@ IsDialogEnd(Stack[-1])
0xc50: Pop(0)
0xc51: GOTO 0xc4b

0xc52: PushEmpty(object)
0xc53: Stack[-1] = Stack[-10]
0xc54: Call2 0x117d

0xc55: Pop(1)
0xc56: @ StopDialog(Stack[-4])
0xc57: Pop(0)
0xc58: @@ GetReturnValue(Stack[-2])
0xc59: Pop(0)
0xc5a: Stack[-10] = Stack[-2]
0xc5b: Return(); Pop(8)

0xc5c: Stack[-4] = 0
0xc5d: PushEmpty()
0xc5e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xc5f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xc60: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xc61: Push((int) 1)
0xc62: IF (Stack[-1] == 0) GOTO 0xca1; Pop(1)

0xc63: PushEmpty(bool, object)
0xc64: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc65: Call2 0x1407

0xc66: Pop(1)
0xc67: IF (Stack[-1] == 0) GOTO 0xc8b; Pop(1)

0xc68: PushEmpty(object, object)
0xc69: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6b: Call2 0x1391

0xc6c: Pop(2)
0xc6d: PushEmpty(string)
0xc6e: Stack[-1] = "Neutral"
0xc6f: Call2 0xcbf

0xc70: Pop(1)
0xc71: Push((int) 522089)
0xc72: @@ SetMessage(Stack[-1])
0xc73: Pop(1)
0xc74: @@ ClearReplies()
0xc75: Pop(0)
0xc76: Push((int) 523647)
0xc77: Push((int) 24892)
0xc78: Push((int) 24891)
0xc79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7a: Pop(3)
0xc7b: Push((int) 523657)
0xc7c: Push((int) 24892)
0xc7d: Push((int) 24901)
0xc7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7f: Pop(3)
0xc80: PushEmpty(bool, object)
0xc81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc82: Call2 0x13fb

0xc83: Pop(1)
0xc84: IF (Stack[-1] == 0) GOTO 0xc8a; Pop(1)

0xc85: Push((int) 522091)
0xc86: Push((int) 23261)
0xc87: Push((int) 23260)
0xc88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc89: Pop(3)
0xc8a: GOTO 0xca1

0xc8b: PushEmpty(string)
0xc8c: Stack[-1] = "Neutral"
0xc8d: Call2 0xcbf

0xc8e: Pop(1)
0xc8f: Push((int) 522094)
0xc90: @@ SetMessage(Stack[-1])
0xc91: Pop(1)
0xc92: @@ ClearReplies()
0xc93: Pop(0)
0xc94: Push((int) 523598)
0xc95: Push((int) 24834)
0xc96: Push((int) 24833)
0xc97: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc98: Pop(3)
0xc99: Push((int) 522095)
0xc9a: Push((int) -1)
0xc9b: Push((int) 23264)
0xc9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9d: Pop(3)
0xc9e: GOTO 0xca1

0xc9f: Return(); Pop(0)

0xca0: GOTO 0xc61

0xca1: PushEmpty(bool)
0xca2: Call2 0x12da

0xca3: Pop(0)
0xca4: IF (Stack[-1] == 0) GOTO 0xcb0; Pop(1)

0xca5: @ lshWaitForAnimEnd()
0xca6: Pop(0)
0xca7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xca8: IF (Stack[-1] == 0) GOTO 0xcaa; Pop(1)

0xca9: GOTO 0xcaf

0xcaa: PushEmpty(string)
0xcab: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xcac: Call2 0x1219

0xcad: Pop(1)
0xcae: GOTO 0xca5

0xcaf: GOTO 0xcbe

0xcb0: Push("all")
0xcb1: Push("idle")
0xcb2: @ PlayAnimation(Stack[-2], Stack[-1])
0xcb3: Pop(2)
0xcb4: @ WaitForAnimEnd()
0xcb5: Pop(0)
0xcb6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcb7: IF (Stack[-1] == 0) GOTO 0xcb9; Pop(1)

0xcb8: GOTO 0xcbe

0xcb9: Push("all")
0xcba: Push("idle")
0xcbb: @ PlayAnimation(Stack[-2], Stack[-1])
0xcbc: Pop(2)
0xcbd: GOTO 0xcb4

0xcbe: Return(); Pop(0)

0xcbf: PushEmpty()
0xcc0: PushEmpty(bool)
0xcc1: Call2 0x12da

0xcc2: Pop(0)
0xcc3: Pop(1); Push((bool) Stack[-1] == 0)
0xcc4: IF (Stack[-1] == 0) GOTO 0xcc6; Pop(1)

0xcc5: Return(); Pop(0)

0xcc6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xcc7: IF (Stack[-1] == 0) GOTO 0xcc9; Pop(1)

0xcc8: Return(); Pop(0)

0xcc9: PushEmpty(string, bool)
0xcca: Stack[-2] = Stack[-3]
0xccb: Push("")
0xccc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xccd: IF (Stack[-1] == 0) GOTO 0xcd0; Pop(1)

0xcce: Stack[-1] = (bool) 0
0xccf: GOTO 0xcd1

0xcd0: Stack[-1] = (bool) 1
0xcd1: Call2 0x1229

0xcd2: Pop(2)
0xcd3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcd4: Return(); Pop(0)

0xcd5: PushEmpty()
0xcd6: Push((int) 1)
0xcd7: IF (Stack[-1] == 0) GOTO 0xe46; Pop(1)

0xcd8: PushEmpty()
0xcd9: Call2 0x1247

0xcda: Pop(0)
0xcdb: Push((int) 23259)
0xcdc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcdd: IF (Stack[-1] == 0) GOTO 0xce3; Pop(1)

0xcde: PushEmpty(object, object)
0xcdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xce0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce1: Call2 0x1388

0xce2: Pop(2)
0xce3: Push((int) 23258)
0xce4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce5: IF (Stack[-1] == 0) GOTO 0xd22; Pop(1)

0xce6: PushEmpty(bool, object)
0xce7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xce8: Call2 0x1407

0xce9: Pop(1)
0xcea: IF (Stack[-1] == 0) GOTO 0xd0e; Pop(1)

0xceb: PushEmpty(object, object)
0xcec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xced: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcee: Call2 0x1391

0xcef: Pop(2)
0xcf0: PushEmpty(string)
0xcf1: Stack[-1] = "Neutral"
0xcf2: Call2 0xcbf

0xcf3: Pop(1)
0xcf4: Push((int) 522089)
0xcf5: @@ SetMessage(Stack[-1])
0xcf6: Pop(1)
0xcf7: @@ ClearReplies()
0xcf8: Pop(0)
0xcf9: Push((int) 523647)
0xcfa: Push((int) 24892)
0xcfb: Push((int) 24891)
0xcfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfd: Pop(3)
0xcfe: Push((int) 523657)
0xcff: Push((int) 24892)
0xd00: Push((int) 24901)
0xd01: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd02: Pop(3)
0xd03: PushEmpty(bool, object)
0xd04: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd05: Call2 0x13fb

0xd06: Pop(1)
0xd07: IF (Stack[-1] == 0) GOTO 0xd0d; Pop(1)

0xd08: Push((int) 522091)
0xd09: Push((int) 23261)
0xd0a: Push((int) 23260)
0xd0b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0c: Pop(3)
0xd0d: Return(); Pop(0)

0xd0e: PushEmpty(string)
0xd0f: Stack[-1] = "Neutral"
0xd10: Call2 0xcbf

0xd11: Pop(1)
0xd12: Push((int) 522094)
0xd13: @@ SetMessage(Stack[-1])
0xd14: Pop(1)
0xd15: @@ ClearReplies()
0xd16: Pop(0)
0xd17: Push((int) 523598)
0xd18: Push((int) 24834)
0xd19: Push((int) 24833)
0xd1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1b: Pop(3)
0xd1c: Push((int) 522095)
0xd1d: Push((int) -1)
0xd1e: Push((int) 23264)
0xd1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd20: Pop(3)
0xd21: Return(); Pop(0)

0xd22: Push((int) 24834)
0xd23: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd24: IF (Stack[-1] == 0) GOTO 0xd34; Pop(1)

0xd25: PushEmpty(string)
0xd26: Stack[-1] = "Neutral"
0xd27: Call2 0xcbf

0xd28: Pop(1)
0xd29: Push((int) 523599)
0xd2a: @@ SetMessage(Stack[-1])
0xd2b: Pop(1)
0xd2c: @@ ClearReplies()
0xd2d: Pop(0)
0xd2e: Push((int) 523655)
0xd2f: Push((int) 24900)
0xd30: Push((int) 24899)
0xd31: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd32: Pop(3)
0xd33: Return(); Pop(0)

0xd34: Push((int) 24900)
0xd35: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd36: IF (Stack[-1] == 0) GOTO 0xd46; Pop(1)

0xd37: PushEmpty(string)
0xd38: Stack[-1] = "Neutral"
0xd39: Call2 0xcbf

0xd3a: Pop(1)
0xd3b: Push((int) 523656)
0xd3c: @@ SetMessage(Stack[-1])
0xd3d: Pop(1)
0xd3e: @@ ClearReplies()
0xd3f: Pop(0)
0xd40: Push((int) 534554)
0xd41: Push((int) -1)
0xd42: Push((int) 36186)
0xd43: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd44: Pop(3)
0xd45: Return(); Pop(0)

0xd46: Push((int) 23261)
0xd47: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd48: IF (Stack[-1] == 0) GOTO 0xd5d; Pop(1)

0xd49: PushEmpty(string)
0xd4a: Stack[-1] = "Neutral"
0xd4b: Call2 0xcbf

0xd4c: Pop(1)
0xd4d: Push((int) 522092)
0xd4e: @@ SetMessage(Stack[-1])
0xd4f: Pop(1)
0xd50: @@ ClearReplies()
0xd51: Pop(0)
0xd52: Push((int) 523645)
0xd53: Push((int) 24889)
0xd54: Push((int) 24888)
0xd55: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd56: Pop(3)
0xd57: Push((int) 523644)
0xd58: Push((int) 24889)
0xd59: Push((int) 24887)
0xd5a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5b: Pop(3)
0xd5c: Return(); Pop(0)

0xd5d: Push((int) 24889)
0xd5e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5f: IF (Stack[-1] == 0) GOTO 0xd6f; Pop(1)

0xd60: PushEmpty(string)
0xd61: Stack[-1] = "Neutral"
0xd62: Call2 0xcbf

0xd63: Pop(1)
0xd64: Push((int) 523646)
0xd65: @@ SetMessage(Stack[-1])
0xd66: Pop(1)
0xd67: @@ ClearReplies()
0xd68: Pop(0)
0xd69: Push((int) 522093)
0xd6a: Push((int) -1)
0xd6b: Push((int) 23262)
0xd6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6d: Pop(3)
0xd6e: Return(); Pop(0)

0xd6f: Push((int) 24892)
0xd70: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd71: IF (Stack[-1] == 0) GOTO 0xd86; Pop(1)

0xd72: PushEmpty(string)
0xd73: Stack[-1] = "Neutral"
0xd74: Call2 0xcbf

0xd75: Pop(1)
0xd76: Push((int) 523648)
0xd77: @@ SetMessage(Stack[-1])
0xd78: Pop(1)
0xd79: @@ ClearReplies()
0xd7a: Pop(0)
0xd7b: Push((int) 523649)
0xd7c: Push((int) 24894)
0xd7d: Push((int) 24893)
0xd7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7f: Pop(3)
0xd80: Push((int) 523658)
0xd81: Push((int) 24908)
0xd82: Push((int) 24903)
0xd83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd84: Pop(3)
0xd85: Return(); Pop(0)

0xd86: Push((int) 24908)
0xd87: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd88: IF (Stack[-1] == 0) GOTO 0xd9d; Pop(1)

0xd89: PushEmpty(string)
0xd8a: Stack[-1] = "Neutral"
0xd8b: Call2 0xcbf

0xd8c: Pop(1)
0xd8d: Push((int) 523663)
0xd8e: @@ SetMessage(Stack[-1])
0xd8f: Pop(1)
0xd90: @@ ClearReplies()
0xd91: Pop(0)
0xd92: Push((int) 523664)
0xd93: Push((int) 24905)
0xd94: Push((int) 24909)
0xd95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd96: Pop(3)
0xd97: Push((int) 523665)
0xd98: Push((int) 24912)
0xd99: Push((int) 24910)
0xd9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9b: Pop(3)
0xd9c: Return(); Pop(0)

0xd9d: Push((int) 24912)
0xd9e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd9f: IF (Stack[-1] == 0) GOTO 0xdaf; Pop(1)

0xda0: PushEmpty(string)
0xda1: Stack[-1] = "Neutral"
0xda2: Call2 0xcbf

0xda3: Pop(1)
0xda4: Push((int) 523667)
0xda5: @@ SetMessage(Stack[-1])
0xda6: Pop(1)
0xda7: @@ ClearReplies()
0xda8: Pop(0)
0xda9: Push((int) 523668)
0xdaa: Push((int) 24905)
0xdab: Push((int) 24913)
0xdac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdad: Pop(3)
0xdae: Return(); Pop(0)

0xdaf: Push((int) 24894)
0xdb0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb1: IF (Stack[-1] == 0) GOTO 0xdc6; Pop(1)

0xdb2: PushEmpty(string)
0xdb3: Stack[-1] = "Neutral"
0xdb4: Call2 0xcbf

0xdb5: Pop(1)
0xdb6: Push((int) 523650)
0xdb7: @@ SetMessage(Stack[-1])
0xdb8: Pop(1)
0xdb9: @@ ClearReplies()
0xdba: Pop(0)
0xdbb: Push((int) 523659)
0xdbc: Push((int) 24905)
0xdbd: Push((int) 24904)
0xdbe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdbf: Pop(3)
0xdc0: Push((int) 523666)
0xdc1: Push((int) 24896)
0xdc2: Push((int) 24911)
0xdc3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc4: Pop(3)
0xdc5: Return(); Pop(0)

0xdc6: Push((int) 24905)
0xdc7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc8: IF (Stack[-1] == 0) GOTO 0xde2; Pop(1)

0xdc9: PushEmpty(string)
0xdca: Stack[-1] = "Neutral"
0xdcb: Call2 0xcbf

0xdcc: Pop(1)
0xdcd: Push((int) 523660)
0xdce: @@ SetMessage(Stack[-1])
0xdcf: Pop(1)
0xdd0: @@ ClearReplies()
0xdd1: Pop(0)
0xdd2: Push((int) 523661)
0xdd3: Push((int) 24896)
0xdd4: Push((int) 24906)
0xdd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd6: Pop(3)
0xdd7: Push((int) 523669)
0xdd8: Push((int) 24896)
0xdd9: Push((int) 24915)
0xdda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xddb: Pop(3)
0xddc: Push((int) 523651)
0xddd: Push((int) 24918)
0xdde: Push((int) 24895)
0xddf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde0: Pop(3)
0xde1: Return(); Pop(0)

0xde2: Push((int) 24918)
0xde3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xde4: IF (Stack[-1] == 0) GOTO 0xdf4; Pop(1)

0xde5: PushEmpty(string)
0xde6: Stack[-1] = "Neutral"
0xde7: Call2 0xcbf

0xde8: Pop(1)
0xde9: Push((int) 523670)
0xdea: @@ SetMessage(Stack[-1])
0xdeb: Pop(1)
0xdec: @@ ClearReplies()
0xded: Pop(0)
0xdee: Push((int) 523671)
0xdef: Push((int) 24896)
0xdf0: Push((int) 24919)
0xdf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf2: Pop(3)
0xdf3: Return(); Pop(0)

0xdf4: Push((int) 24896)
0xdf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf6: IF (Stack[-1] == 0) GOTO 0xe0b; Pop(1)

0xdf7: PushEmpty(string)
0xdf8: Stack[-1] = "Neutral"
0xdf9: Call2 0xcbf

0xdfa: Pop(1)
0xdfb: Push((int) 523652)
0xdfc: @@ SetMessage(Stack[-1])
0xdfd: Pop(1)
0xdfe: @@ ClearReplies()
0xdff: Pop(0)
0xe00: Push((int) 523653)
0xe01: Push((int) 24898)
0xe02: Push((int) 24897)
0xe03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe04: Pop(3)
0xe05: Push((int) 523675)
0xe06: Push((int) 24925)
0xe07: Push((int) 24924)
0xe08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe09: Pop(3)
0xe0a: Return(); Pop(0)

0xe0b: Push((int) 24925)
0xe0c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe0d: IF (Stack[-1] == 0) GOTO 0xe1d; Pop(1)

0xe0e: PushEmpty(string)
0xe0f: Stack[-1] = "Neutral"
0xe10: Call2 0xcbf

0xe11: Pop(1)
0xe12: Push((int) 523676)
0xe13: @@ SetMessage(Stack[-1])
0xe14: Pop(1)
0xe15: @@ ClearReplies()
0xe16: Pop(0)
0xe17: Push((int) 523677)
0xe18: Push((int) 24898)
0xe19: Push((int) 24926)
0xe1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1b: Pop(3)
0xe1c: Return(); Pop(0)

0xe1d: Push((int) 24898)
0xe1e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1f: IF (Stack[-1] == 0) GOTO 0xe3a; Pop(1)

0xe20: PushEmpty(string)
0xe21: Stack[-1] = "Neutral"
0xe22: Call2 0xcbf

0xe23: Pop(1)
0xe24: Push((int) 523654)
0xe25: @@ SetMessage(Stack[-1])
0xe26: Pop(1)
0xe27: @@ ClearReplies()
0xe28: Pop(0)
0xe29: PushEmpty(bool, object)
0xe2a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe2b: Call2 0x13fb

0xe2c: Pop(1)
0xe2d: Pop(1); Push((bool) Stack[-1] == 0)
0xe2e: IF (Stack[-1] == 0) GOTO 0xe34; Pop(1)

0xe2f: Push((int) 522090)
0xe30: Push((int) -1)
0xe31: Push((int) 23259)
0xe32: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe33: Pop(3)
0xe34: Push((int) 523678)
0xe35: Push((int) -1)
0xe36: Push((int) 24928)
0xe37: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe38: Pop(3)
0xe39: Return(); Pop(0)

0xe3a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe3b: PushEmpty(bool)
0xe3c: Call2 0x12da

0xe3d: Pop(0)
0xe3e: IF (Stack[-1] == 0) GOTO 0xe42; Pop(1)

0xe3f: @ lshStopAnimation()
0xe40: Pop(0)
0xe41: GOTO 0xe44

0xe42: @ StopAnimation()
0xe43: Pop(0)
0xe44: Return(); Pop(0)

0xe45: GOTO 0xcd6

0xe46: Return(); Pop(0)

0xe47: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe48: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe49: PushEmpty(bool, object, float)
0xe4a: Stack[-2] = Stack[-12]
0xe4b: Stack[-1] = (float) 70.0
0xe4c: Call2 0x1138

0xe4d: Pop(2)
0xe4e: Pop(1); Push((bool) Stack[-1] == 0)
0xe4f: IF (Stack[-1] == 0) GOTO 0xe52; Pop(1)

0xe50: Stack[-10] = (int) -2
0xe51: Return(); Pop(8)

0xe52: @ CreateDialog(Stack[-4])
0xe53: Pop(0)
0xe54: PushEmpty(int)
0xe55: Call2 0x12d4

0xe56: Pop(0)
0xe57: @@ SetNPCName(Stack[-1])
0xe58: Pop(1)
0xe59: PushEmpty(int)
0xe5a: Call2 0x12d2

0xe5b: Pop(0)
0xe5c: @@ SetNPCDescription(Stack[-1])
0xe5d: Pop(1)
0xe5e: PushEmpty(string)
0xe5f: Call2 0x12d6

0xe60: Pop(0)
0xe61: @@ SetPhoto(Stack[-1])
0xe62: Pop(1)
0xe63: PushEmpty(string)
0xe64: Call2 0x12d8

0xe65: Pop(0)
0xe66: @@ SetPhoto2(Stack[-1])
0xe67: Pop(1)
0xe68: PushEmpty(int)
0xe69: Call2 0x151a

0xe6a: Pop(0)
0xe6b: @@ SetPlayerName(Stack[-1])
0xe6c: Pop(1)
0xe6d: Stack[-2] = (int) -1
0xe6e: @ IsOverrideActive(Stack[-3])
0xe6f: Pop(0)
0xe70: Push(Stack[-3])
0xe71: IF (Stack[-1] == 0) GOTO 0xe74; Pop(1)

0xe72: Stack[-10] = (int) -2
0xe73: Return(); Pop(8)

0xe74: @ DoDialog(Stack[-4])
0xe75: Pop(0)
0xe76: PushEmpty(bool, object)
0xe77: PushEmpty(object)
0xe78: Call2 0x124e

0xe79: Stack[-2] = Stack[-1]
0xe7a: Pop(1)
0xe7b: Call2 0x118f

0xe7c: Pop(2)
0xe7d: PushEmpty(object, object)
0xe7e: Stack[-2] = Stack[-11]
0xe7f: Stack[-1] = Stack[-6]
0xe80: Push(-2, 4); TaskCall(15)
0xe81: Call2 0xe98

0xe82: Pop(-2, 4); TaskReturn
0xe83: Pop(2)
0xe84: @@ IsDialogEnd(Stack[-1])
0xe85: Pop(0)
0xe86: Pop(0); Push((bool) Stack[-1] == 0)
0xe87: IF (Stack[-1] == 0) GOTO 0xe8d; Pop(1)

0xe88: @ sync()
0xe89: Pop(0)
0xe8a: @@ IsDialogEnd(Stack[-1])
0xe8b: Pop(0)
0xe8c: GOTO 0xe86

0xe8d: PushEmpty(object)
0xe8e: Stack[-1] = Stack[-10]
0xe8f: Call2 0x117d

0xe90: Pop(1)
0xe91: @ StopDialog(Stack[-4])
0xe92: Pop(0)
0xe93: @@ GetReturnValue(Stack[-2])
0xe94: Pop(0)
0xe95: Stack[-10] = Stack[-2]
0xe96: Return(); Pop(8)

0xe97: Stack[-4] = 0
0xe98: PushEmpty()
0xe99: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xe9a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xe9b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xe9c: Push((int) 1)
0xe9d: IF (Stack[-1] == 0) GOTO 0xeb9; Pop(1)

0xe9e: PushEmpty(string)
0xe9f: Stack[-1] = "Neutral"
0xea0: Call2 0xed7

0xea1: Pop(1)
0xea2: Push((int) 535294)
0xea3: @@ SetMessage(Stack[-1])
0xea4: Pop(1)
0xea5: @@ ClearReplies()
0xea6: Pop(0)
0xea7: Push((int) 535295)
0xea8: Push((int) 36973)
0xea9: Push((int) 36972)
0xeaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeab: Pop(3)
0xeac: Push((int) 535302)
0xead: Push((int) -1)
0xeae: Push((int) 36980)
0xeaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb0: Pop(3)
0xeb1: Push((int) 535303)
0xeb2: Push((int) -1)
0xeb3: Push((int) 36981)
0xeb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb5: Pop(3)
0xeb6: GOTO 0xeb9

0xeb7: Return(); Pop(0)

0xeb8: GOTO 0xe9c

0xeb9: PushEmpty(bool)
0xeba: Call2 0x12da

0xebb: Pop(0)
0xebc: IF (Stack[-1] == 0) GOTO 0xec8; Pop(1)

0xebd: @ lshWaitForAnimEnd()
0xebe: Pop(0)
0xebf: Push( Stack[3 + Tasks[-1].StackPointer] )
0xec0: IF (Stack[-1] == 0) GOTO 0xec2; Pop(1)

0xec1: GOTO 0xec7

0xec2: PushEmpty(string)
0xec3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xec4: Call2 0x1219

0xec5: Pop(1)
0xec6: GOTO 0xebd

0xec7: GOTO 0xed6

0xec8: Push("all")
0xec9: Push("idle")
0xeca: @ PlayAnimation(Stack[-2], Stack[-1])
0xecb: Pop(2)
0xecc: @ WaitForAnimEnd()
0xecd: Pop(0)
0xece: Push( Stack[3 + Tasks[-1].StackPointer] )
0xecf: IF (Stack[-1] == 0) GOTO 0xed1; Pop(1)

0xed0: GOTO 0xed6

0xed1: Push("all")
0xed2: Push("idle")
0xed3: @ PlayAnimation(Stack[-2], Stack[-1])
0xed4: Pop(2)
0xed5: GOTO 0xecc

0xed6: Return(); Pop(0)

0xed7: PushEmpty()
0xed8: PushEmpty(bool)
0xed9: Call2 0x12da

0xeda: Pop(0)
0xedb: Pop(1); Push((bool) Stack[-1] == 0)
0xedc: IF (Stack[-1] == 0) GOTO 0xede; Pop(1)

0xedd: Return(); Pop(0)

0xede: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xedf: IF (Stack[-1] == 0) GOTO 0xee1; Pop(1)

0xee0: Return(); Pop(0)

0xee1: PushEmpty(string, bool)
0xee2: Stack[-2] = Stack[-3]
0xee3: Push("")
0xee4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xee5: IF (Stack[-1] == 0) GOTO 0xee8; Pop(1)

0xee6: Stack[-1] = (bool) 0
0xee7: GOTO 0xee9

0xee8: Stack[-1] = (bool) 1
0xee9: Call2 0x1229

0xeea: Pop(2)
0xeeb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xeec: Return(); Pop(0)

0xeed: PushEmpty()
0xeee: Push((int) 1)
0xeef: IF (Stack[-1] == 0) GOTO 0xf49; Pop(1)

0xef0: PushEmpty()
0xef1: Call2 0x1247

0xef2: Pop(0)
0xef3: Push((int) 36971)
0xef4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xef5: IF (Stack[-1] == 0) GOTO 0xf0f; Pop(1)

0xef6: PushEmpty(string)
0xef7: Stack[-1] = "Neutral"
0xef8: Call2 0xed7

0xef9: Pop(1)
0xefa: Push((int) 535294)
0xefb: @@ SetMessage(Stack[-1])
0xefc: Pop(1)
0xefd: @@ ClearReplies()
0xefe: Pop(0)
0xeff: Push((int) 535295)
0xf00: Push((int) 36973)
0xf01: Push((int) 36972)
0xf02: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf03: Pop(3)
0xf04: Push((int) 535302)
0xf05: Push((int) -1)
0xf06: Push((int) 36980)
0xf07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf08: Pop(3)
0xf09: Push((int) 535303)
0xf0a: Push((int) -1)
0xf0b: Push((int) 36981)
0xf0c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0d: Pop(3)
0xf0e: Return(); Pop(0)

0xf0f: Push((int) 36973)
0xf10: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf11: IF (Stack[-1] == 0) GOTO 0xf26; Pop(1)

0xf12: PushEmpty(string)
0xf13: Stack[-1] = "Neutral"
0xf14: Call2 0xed7

0xf15: Pop(1)
0xf16: Push((int) 535296)
0xf17: @@ SetMessage(Stack[-1])
0xf18: Pop(1)
0xf19: @@ ClearReplies()
0xf1a: Pop(0)
0xf1b: Push((int) 535297)
0xf1c: Push((int) 36975)
0xf1d: Push((int) 36974)
0xf1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1f: Pop(3)
0xf20: Push((int) 535301)
0xf21: Push((int) 36975)
0xf22: Push((int) 36978)
0xf23: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf24: Pop(3)
0xf25: Return(); Pop(0)

0xf26: Push((int) 36975)
0xf27: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf28: IF (Stack[-1] == 0) GOTO 0xf3d; Pop(1)

0xf29: PushEmpty(string)
0xf2a: Stack[-1] = "Neutral"
0xf2b: Call2 0xed7

0xf2c: Pop(1)
0xf2d: Push((int) 535298)
0xf2e: @@ SetMessage(Stack[-1])
0xf2f: Pop(1)
0xf30: @@ ClearReplies()
0xf31: Pop(0)
0xf32: Push((int) 535299)
0xf33: Push((int) -1)
0xf34: Push((int) 36976)
0xf35: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf36: Pop(3)
0xf37: Push((int) 535300)
0xf38: Push((int) -1)
0xf39: Push((int) 36977)
0xf3a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3b: Pop(3)
0xf3c: Return(); Pop(0)

0xf3d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf3e: PushEmpty(bool)
0xf3f: Call2 0x12da

0xf40: Pop(0)
0xf41: IF (Stack[-1] == 0) GOTO 0xf45; Pop(1)

0xf42: @ lshStopAnimation()
0xf43: Pop(0)
0xf44: GOTO 0xf47

0xf45: @ StopAnimation()
0xf46: Pop(0)
0xf47: Return(); Pop(0)

0xf48: GOTO 0xeee

0xf49: Return(); Pop(0)

0xf4a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xf4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf4c: PushEmpty(bool, object, float)
0xf4d: Stack[-2] = Stack[-12]
0xf4e: Stack[-1] = (float) 70.0
0xf4f: Call2 0x1138

0xf50: Pop(2)
0xf51: Pop(1); Push((bool) Stack[-1] == 0)
0xf52: IF (Stack[-1] == 0) GOTO 0xf55; Pop(1)

0xf53: Stack[-10] = (int) -2
0xf54: Return(); Pop(8)

0xf55: @ CreateDialog(Stack[-4])
0xf56: Pop(0)
0xf57: PushEmpty(int)
0xf58: Call2 0x12d4

0xf59: Pop(0)
0xf5a: @@ SetNPCName(Stack[-1])
0xf5b: Pop(1)
0xf5c: PushEmpty(int)
0xf5d: Call2 0x12d2

0xf5e: Pop(0)
0xf5f: @@ SetNPCDescription(Stack[-1])
0xf60: Pop(1)
0xf61: PushEmpty(string)
0xf62: Call2 0x12d6

0xf63: Pop(0)
0xf64: @@ SetPhoto(Stack[-1])
0xf65: Pop(1)
0xf66: PushEmpty(string)
0xf67: Call2 0x12d8

0xf68: Pop(0)
0xf69: @@ SetPhoto2(Stack[-1])
0xf6a: Pop(1)
0xf6b: PushEmpty(int)
0xf6c: Call2 0x151a

0xf6d: Pop(0)
0xf6e: @@ SetPlayerName(Stack[-1])
0xf6f: Pop(1)
0xf70: Stack[-2] = (int) -1
0xf71: @ IsOverrideActive(Stack[-3])
0xf72: Pop(0)
0xf73: Push(Stack[-3])
0xf74: IF (Stack[-1] == 0) GOTO 0xf77; Pop(1)

0xf75: Stack[-10] = (int) -2
0xf76: Return(); Pop(8)

0xf77: @ DoDialog(Stack[-4])
0xf78: Pop(0)
0xf79: PushEmpty(bool, object)
0xf7a: PushEmpty(object)
0xf7b: Call2 0x124e

0xf7c: Stack[-2] = Stack[-1]
0xf7d: Pop(1)
0xf7e: Call2 0x118f

0xf7f: Pop(2)
0xf80: PushEmpty(object, object)
0xf81: Stack[-2] = Stack[-11]
0xf82: Stack[-1] = Stack[-6]
0xf83: Push(-2, 4); TaskCall(17)
0xf84: Call2 0xf9b

0xf85: Pop(-2, 4); TaskReturn
0xf86: Pop(2)
0xf87: @@ IsDialogEnd(Stack[-1])
0xf88: Pop(0)
0xf89: Pop(0); Push((bool) Stack[-1] == 0)
0xf8a: IF (Stack[-1] == 0) GOTO 0xf90; Pop(1)

0xf8b: @ sync()
0xf8c: Pop(0)
0xf8d: @@ IsDialogEnd(Stack[-1])
0xf8e: Pop(0)
0xf8f: GOTO 0xf89

0xf90: PushEmpty(object)
0xf91: Stack[-1] = Stack[-10]
0xf92: Call2 0x117d

0xf93: Pop(1)
0xf94: @ StopDialog(Stack[-4])
0xf95: Pop(0)
0xf96: @@ GetReturnValue(Stack[-2])
0xf97: Pop(0)
0xf98: Stack[-10] = Stack[-2]
0xf99: Return(); Pop(8)

0xf9a: Stack[-4] = 0
0xf9b: PushEmpty()
0xf9c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xf9d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xf9e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xf9f: Push((int) 1)
0xfa0: IF (Stack[-1] == 0) GOTO 0xfb7; Pop(1)

0xfa1: PushEmpty(string)
0xfa2: Stack[-1] = "Neutral"
0xfa3: Call2 0xfd5

0xfa4: Pop(1)
0xfa5: Push((int) 540551)
0xfa6: @@ SetMessage(Stack[-1])
0xfa7: Pop(1)
0xfa8: @@ ClearReplies()
0xfa9: Pop(0)
0xfaa: Push((int) 540552)
0xfab: Push((int) -1)
0xfac: Push((int) 42561)
0xfad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfae: Pop(3)
0xfaf: Push((int) 540795)
0xfb0: Push((int) -1)
0xfb1: Push((int) 42844)
0xfb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb3: Pop(3)
0xfb4: GOTO 0xfb7

0xfb5: Return(); Pop(0)

0xfb6: GOTO 0xf9f

0xfb7: PushEmpty(bool)
0xfb8: Call2 0x12da

0xfb9: Pop(0)
0xfba: IF (Stack[-1] == 0) GOTO 0xfc6; Pop(1)

0xfbb: @ lshWaitForAnimEnd()
0xfbc: Pop(0)
0xfbd: Push( Stack[3 + Tasks[-1].StackPointer] )
0xfbe: IF (Stack[-1] == 0) GOTO 0xfc0; Pop(1)

0xfbf: GOTO 0xfc5

0xfc0: PushEmpty(string)
0xfc1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xfc2: Call2 0x1219

0xfc3: Pop(1)
0xfc4: GOTO 0xfbb

0xfc5: GOTO 0xfd4

0xfc6: Push("all")
0xfc7: Push("idle")
0xfc8: @ PlayAnimation(Stack[-2], Stack[-1])
0xfc9: Pop(2)
0xfca: @ WaitForAnimEnd()
0xfcb: Pop(0)
0xfcc: Push( Stack[3 + Tasks[-1].StackPointer] )
0xfcd: IF (Stack[-1] == 0) GOTO 0xfcf; Pop(1)

0xfce: GOTO 0xfd4

0xfcf: Push("all")
0xfd0: Push("idle")
0xfd1: @ PlayAnimation(Stack[-2], Stack[-1])
0xfd2: Pop(2)
0xfd3: GOTO 0xfca

0xfd4: Return(); Pop(0)

0xfd5: PushEmpty()
0xfd6: PushEmpty(bool)
0xfd7: Call2 0x12da

0xfd8: Pop(0)
0xfd9: Pop(1); Push((bool) Stack[-1] == 0)
0xfda: IF (Stack[-1] == 0) GOTO 0xfdc; Pop(1)

0xfdb: Return(); Pop(0)

0xfdc: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xfdd: IF (Stack[-1] == 0) GOTO 0xfdf; Pop(1)

0xfde: Return(); Pop(0)

0xfdf: PushEmpty(string, bool)
0xfe0: Stack[-2] = Stack[-3]
0xfe1: Push("")
0xfe2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xfe3: IF (Stack[-1] == 0) GOTO 0xfe6; Pop(1)

0xfe4: Stack[-1] = (bool) 0
0xfe5: GOTO 0xfe7

0xfe6: Stack[-1] = (bool) 1
0xfe7: Call2 0x1229

0xfe8: Pop(2)
0xfe9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xfea: Return(); Pop(0)

0xfeb: PushEmpty()
0xfec: Push((int) 1)
0xfed: IF (Stack[-1] == 0) GOTO 0x1014; Pop(1)

0xfee: PushEmpty()
0xfef: Call2 0x1247

0xff0: Pop(0)
0xff1: Push((int) 42560)
0xff2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff3: IF (Stack[-1] == 0) GOTO 0x1008; Pop(1)

0xff4: PushEmpty(string)
0xff5: Stack[-1] = "Neutral"
0xff6: Call2 0xfd5

0xff7: Pop(1)
0xff8: Push((int) 540551)
0xff9: @@ SetMessage(Stack[-1])
0xffa: Pop(1)
0xffb: @@ ClearReplies()
0xffc: Pop(0)
0xffd: Push((int) 540552)
0xffe: Push((int) -1)
0xfff: Push((int) 42561)
0x1000: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1001: Pop(3)
0x1002: Push((int) 540795)
0x1003: Push((int) -1)
0x1004: Push((int) 42844)
0x1005: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1006: Pop(3)
0x1007: Return(); Pop(0)

0x1008: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1009: PushEmpty(bool)
0x100a: Call2 0x12da

0x100b: Pop(0)
0x100c: IF (Stack[-1] == 0) GOTO 0x1010; Pop(1)

0x100d: @ lshStopAnimation()
0x100e: Pop(0)
0x100f: GOTO 0x1012

0x1010: @ StopAnimation()
0x1011: Pop(0)
0x1012: Return(); Pop(0)

0x1013: GOTO 0xfec

0x1014: Return(); Pop(0)

0x1015: Push(GlobalVars[1])
0x1016: Stack[-1] = (bool) 0
0x1017: GlobalVars[1] = Stack[-1]; Pop(1)
0x1018: PushEmpty()
0x1019: Call2 0x101c

0x101a: Pop(0)
0x101b: Return(); Pop(0)

0x101c: PushEmpty(bool)
0x101d: Call2 0x1133

0x101e: Pop(0)
0x101f: Pop(1); Push((bool) Stack[-1] == 0)
0x1020: IF (Stack[-1] == 0) GOTO 0x1023; Pop(1)

0x1021: @ Hold()
0x1022: Pop(0)
0x1023: @ GetDirection(Stack[-0])
0x1024: Pop(0)
0x1025: PushEmpty()
0x1026: Call2 0x10cc

0x1027: Pop(0)
0x1028: GOTO 0x1025

0x1029: Return(); Pop(0)

0x102a: PushEmpty(object, object)
0x102b: Push("player")
0x102c: @ FindActor(Stack[-2], Stack[-1])
0x102d: Pop(1)
0x102e: Pop(0); Push((bool) Stack[-1] == 0)
0x102f: IF (Stack[-1] == 0) GOTO 0x1032; Pop(1)

0x1030: Stack[-3] = (bool) 0
0x1031: Return(); Pop(2)

0x1032: PushEmpty(bool, object)
0x1033: Stack[-1] = Stack[-3]
0x1034: Call2 0x112a

0x1035: Stack[-5] = Stack[-2]
0x1036: Pop(2)
0x1037: Return(); Pop(2)

0x1038: Stack[-1] = 0
0x1039: Push(CvectorIndex(Stack[-0], 0))
0x103a: Push(CvectorIndex(Stack[-0], 2))
0x103b: @ RotateAsync(Stack[-2], Stack[-1])
0x103c: Pop(2)
0x103d: Return(); Pop(0)

0x103e: PushEmpty(object, bool, object, bool)
0x103f: Push("player")
0x1040: @ FindActor(Stack[-3], Stack[-1])
0x1041: Pop(1)
0x1042: Pop(0); Push((bool) Stack[-2] == 0)
0x1043: IF (Stack[-1] == 0) GOTO 0x1046; Pop(1)

0x1044: Stack[-5] = (bool) 0
0x1045: Return(); Pop(4)

0x1046: PushEmpty(float, object)
0x1047: Stack[-1] = Stack[-4]
0x1048: Call2 0x1118

0x1049: Pop(1)
0x104a: Push((float)90000.0)
0x104b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x104c: IF (Stack[-1] == 0) GOTO 0x104f; Pop(1)

0x104d: Stack[-5] = (bool) 0
0x104e: Return(); Pop(4)

0x104f: @ CanSee(Stack[-1], Stack[-2])
0x1050: Pop(0)
0x1051: Stack[-5] = Stack[-1]
0x1052: Return(); Pop(4)

0x1053: Stack[-2] = 0
0x1054: PushEmpty(float, float)
0x1055: Push((int) 8)
0x1056: Push((int) 16)
0x1057: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1058: Pop(2)
0x1059: Push((int) 10)
0x105a: @ SetTimer(Stack[-1], Stack[-2])
0x105b: Pop(1)
0x105c: Return(); Pop(2)

0x105d: Push((int) 10)
0x105e: @ KillTimer(Stack[-1])
0x105f: Pop(1)
0x1060: Return(); Pop(0)

0x1061: PushEmpty()
0x1062: Push((int) 10)
0x1063: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1064: IF (Stack[-1] == 0) GOTO 0x1086; Pop(1)

0x1065: PushEmpty()
0x1066: Call2 0x105d

0x1067: Pop(0)
0x1068: PushEmpty(bool)
0x1069: Stack[-1] = (bool) 0
0x106a: PushEmpty(bool)
0x106b: Call2 0x1133

0x106c: Pop(0)
0x106d: IF (Stack[-1] == 0) GOTO 0x1073; Pop(1)

0x106e: PushEmpty(bool)
0x106f: Call2 0x103e

0x1070: Pop(0)
0x1071: IF (Stack[-1] == 0) GOTO 0x1073; Pop(1)

0x1072: Stack[-1] = (bool) 1
0x1073: IF (Stack[-1] == 0) GOTO 0x1080; Pop(1)

0x1074: PushEmpty(bool)
0x1075: Call2 0x102a

0x1076: Pop(0)
0x1077: IF (Stack[-1] == 0) GOTO 0x107f; Pop(1)

0x1078: PushEmpty(bool, object)
0x1079: PushEmpty(object)
0x107a: Call2 0x124e

0x107b: Stack[-2] = Stack[-1]
0x107c: Pop(1)
0x107d: Call2 0x11c9

0x107e: Pop(2)
0x107f: GOTO 0x1086

0x1080: PushEmpty()
0x1081: Call2 0x1039

0x1082: Pop(0)
0x1083: PushEmpty()
0x1084: Call2 0x1054

0x1085: Pop(0)
0x1086: Return(); Pop(0)

0x1087: PushEmpty()
0x1088: Call2 0x1113

0x1089: Pop(0)
0x108a: PushEmpty()
0x108b: Call2 0x105d

0x108c: Pop(0)
0x108d: @ lshStopSpeech()
0x108e: Pop(0)
0x108f: @ lshStopAnimation()
0x1090: Pop(0)
0x1091: @ StopAsync()
0x1092: Pop(0)
0x1093: @ Hold()
0x1094: Pop(0)
0x1095: Return(); Pop(0)

0x1096: @ StopGroup0()
0x1097: Pop(0)
0x1098: PushEmpty()
0x1099: Call2 0x105d

0x109a: Pop(0)
0x109b: PushEmpty(string)
0x109c: Stack[-1] = "Neutral"
0x109d: Call2 0x1219

0x109e: Pop(1)
0x109f: PushEmpty()
0x10a0: Call2 0x1054

0x10a1: Pop(0)
0x10a2: Return(); Pop(0)

0x10a3: PushEmpty()
0x10a4: Push(Stack[-1])
0x10a5: IF (Stack[-1] == 0) GOTO 0x10aa; Pop(1)

0x10a6: PushEmpty()
0x10a7: Call2 0x1054

0x10a8: Pop(0)
0x10a9: GOTO 0x10ae

0x10aa: PushEmpty(string)
0x10ab: Stack[-1] = "Neutral"
0x10ac: Call2 0x1219

0x10ad: Pop(1)
0x10ae: Return(); Pop(0)

0x10af: PushEmpty(bool, bool)
0x10b0: @ IsOverrideActive(Stack[-1])
0x10b1: Pop(0)
0x10b2: Pop(0); Push((bool) Stack[-1] == 0)
0x10b3: IF (Stack[-1] == 0) GOTO 0x10cb; Pop(1)

0x10b4: EventDisable(0)
0x10b5: PushEmpty()
0x10b6: Call2 0x1113

0x10b7: Pop(0)
0x10b8: PushEmpty(bool, object)
0x10b9: Stack[-1] = Stack[-5]
0x10ba: Call2 0x112a

0x10bb: Pop(2)
0x10bc: EventEnable(0)
0x10bd: PushEmpty(object)
0x10be: Stack[-1] = Stack[-4]
0x10bf: Call2 0x152b

0x10c0: Pop(1)
0x10c1: PushEmpty(string)
0x10c2: Stack[-1] = "Neutral"
0x10c3: Call2 0x1219

0x10c4: Pop(1)
0x10c5: PushEmpty()
0x10c6: Call2 0x105d

0x10c7: Pop(0)
0x10c8: PushEmpty()
0x10c9: Call2 0x1054

0x10ca: Pop(0)
0x10cb: Return(); Pop(2)

0x10cc: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x10cd: @ WaitForAnimEnd()
0x10ce: Pop(0)
0x10cf: PushEmpty(bool)
0x10d0: Call2 0x1133

0x10d1: Pop(0)
0x10d2: Pop(1); Push((bool) Stack[-1] == 0)
0x10d3: IF (Stack[-1] == 0) GOTO 0x10d5; Pop(1)

0x10d4: Return(); Pop(12)

0x10d5: PushEmpty(int)
0x10d6: Call2 0x12c1

0x10d7: Stack[-7] = Stack[-1]
0x10d8: Pop(1)
0x10d9: Stack[-5] = (int) 0
0x10da: PushEmpty(bool)
0x10db: Stack[-1] = (bool) 0
0x10dc: Push((int) 5)
0x10dd: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x10de: IF (Stack[-1] == 0) GOTO 0x10e4; Pop(1)

0x10df: PushEmpty(bool)
0x10e0: Call2 0x1133

0x10e1: Pop(0)
0x10e2: IF (Stack[-1] == 0) GOTO 0x10e4; Pop(1)

0x10e3: Stack[-1] = (bool) 1
0x10e4: IF (Stack[-1] == 0) GOTO 0x110e; Pop(1)

0x10e5: Pop(0); Push((bool) Stack[-6] == 0)
0x10e6: IF (Stack[-1] == 0) GOTO 0x10ee; Pop(1)

0x10e7: Push((int) 3)
0x10e8: @ Sleep(Stack[-1], Stack[-5])
0x10e9: Pop(1)
0x10ea: Pop(0); Push((bool) Stack[-4] == 0)
0x10eb: IF (Stack[-1] == 0) GOTO 0x10ed; Pop(1)

0x10ec: GOTO 0x110e

0x10ed: GOTO 0x1103

0x10ee: @ irand(Stack[-3], Stack[-6])
0x10ef: Pop(0)
0x10f0: Push((int) 5)
0x10f1: @ irand(Stack[-3], Stack[-1])
0x10f2: Pop(1)
0x10f3: Push((int) 0)
0x10f4: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x10f5: IF (Stack[-1] == 0) GOTO 0x10f7; Pop(1)

0x10f6: Stack[-3] = (int) 0
0x10f7: Push("all")
0x10f8: PushEmpty(string, int)
0x10f9: Stack[-1] = Stack[-6]
0x10fa: Call2 0x12ba

0x10fb: Pop(1)
0x10fc: @ PlayAnimation(Stack[-2], Stack[-1])
0x10fd: Pop(2)
0x10fe: @ WaitForAnimEnd(Stack[-1])
0x10ff: Pop(0)
0x1100: Pop(0); Push((bool) Stack[-1] == 0)
0x1101: IF (Stack[-1] == 0) GOTO 0x1103; Pop(1)

0x1102: GOTO 0x110e

0x1103: PushEmpty(bool)
0x1104: Call2 0x1111

0x1105: Pop(0)
0x1106: Pop(1); Push((bool) Stack[-1] == 0)
0x1107: IF (Stack[-1] == 0) GOTO 0x1109; Pop(1)

0x1108: GOTO 0x110e

0x1109: @ ResetAAS()
0x110a: Pop(0)
0x110b: Push((int) 1)
0x110c: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x110d: GOTO 0x10da

0x110e: @ ResetAAS()
0x110f: Pop(0)
0x1110: Return(); Pop(12)

0x1111: Stack[-1] = (bool) 1
0x1112: Return(); Pop(0)

0x1113: @ StopAnimation()
0x1114: Pop(0)
0x1115: @ StopGroup0()
0x1116: Pop(0)
0x1117: Return(); Pop(0)

0x1118: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1119: @ GetPosition(Stack[-3])
0x111a: Pop(0)
0x111b: @@ GetPosition(Stack[-2])
0x111c: Pop(0)
0x111d: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x111e: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x111f: Return(); Pop(6)

0x1120: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x1121: @ GetPosition(Stack[-3])
0x1122: Pop(0)
0x1123: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x1124: Push(CvectorIndex(Stack[-2], 0))
0x1125: Push(CvectorIndex(Stack[-3], 2))
0x1126: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x1127: Pop(2)
0x1128: Stack[-8] = Stack[-1]
0x1129: Return(); Pop(6)

0x112a: PushEmpty(cvector, cvector)
0x112b: @@ GetPosition(Stack[-1])
0x112c: Pop(0)
0x112d: PushEmpty(bool, cvector)
0x112e: Stack[-1] = Stack[-3]
0x112f: Call2 0x1120

0x1130: Stack[-6] = Stack[-2]
0x1131: Pop(2)
0x1132: Return(); Pop(2)

0x1133: PushEmpty(bool, bool)
0x1134: @ IsLoaded(Stack[-1])
0x1135: Pop(0)
0x1136: Stack[-3] = Stack[-1]
0x1137: Return(); Pop(2)

0x1138: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1139: @@ GetPosition(Stack[-8])
0x113a: Pop(0)
0x113b: @@ GetEyesHeight(Stack[-9])
0x113c: Pop(0)
0x113d: Push(CvectorIndex(Stack[-8], 1))
0x113e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x113f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1140: @ GetPosition(Stack[-7])
0x1141: Pop(0)
0x1142: @ GetEyesHeight(Stack[-9])
0x1143: Pop(0)
0x1144: Push(CvectorIndex(Stack[-7], 1))
0x1145: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1146: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1147: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1148: Push(CvectorIndex(Stack[-6], 1))
0x1149: Stack[-1] = (int) 0
0x114a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x114b: Pop(0); Push(Stack[-6] | Stack[-6]);
0x114c: Pop(1); Push(Sqrt(Stack[-1]))
0x114d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x114e: Stack[-5] = -Stack[-6]; Pop(0);
0x114f: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1150: PushEmpty(cvector, cvector)
0x1151: Push(CVector(0.0, 1.0, 0.0))
0x1152: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1153: Call2 0x1254

0x1154: Pop(1)
0x1155: Push((int) 25)
0x1156: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1157: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1158: Push(CVector(0.0, 10.0, 0.0))
0x1159: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x115a: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x115b: @ IsOverrideActive(Stack[-2])
0x115c: Pop(0)
0x115d: Push(Stack[-2])
0x115e: IF (Stack[-1] == 0) GOTO 0x1161; Pop(1)

0x115f: Stack[-21] = (bool) 0
0x1160: Return(); Pop(18)

0x1161: @ StopWorld()
0x1162: Pop(0)
0x1163: Push((bool) 1)
0x1164: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1165: Pop(1)
0x1166: Push(CvectorIndex(Stack[-4], 0))
0x1167: Push(CvectorIndex(Stack[-5], 2))
0x1168: @ Rotate(Stack[-2], Stack[-1])
0x1169: Pop(2)
0x116a: PushEmpty(bool)
0x116b: Call2 0x12da

0x116c: Pop(0)
0x116d: IF (Stack[-1] == 0) GOTO 0x116f; Pop(1)

0x116e: GOTO 0x1177

0x116f: Push("head")
0x1170: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1171: Pop(1)
0x1172: Push(Stack[-1])
0x1173: IF (Stack[-1] == 0) GOTO 0x1177; Pop(1)

0x1174: Push("head")
0x1175: @ LookAsyncCamera(Stack[-1])
0x1176: Pop(1)
0x1177: @ CameraWaitForPlayFinish()
0x1178: Pop(0)
0x1179: @ ResumeWorld()
0x117a: Pop(0)
0x117b: Stack[-21] = (bool) 1
0x117c: Return(); Pop(18)

0x117d: PushEmpty(bool, bool)
0x117e: Push((bool) 1)
0x117f: @ CameraSwitchToNormal(Stack[-1])
0x1180: Pop(1)
0x1181: PushEmpty(bool)
0x1182: Call2 0x12da

0x1183: Pop(0)
0x1184: IF (Stack[-1] == 0) GOTO 0x1186; Pop(1)

0x1185: GOTO 0x118e

0x1186: Push("head")
0x1187: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1188: Pop(1)
0x1189: Push(Stack[-1])
0x118a: IF (Stack[-1] == 0) GOTO 0x118e; Pop(1)

0x118b: Push("head")
0x118c: @ UnlookAsync(Stack[-1])
0x118d: Pop(1)
0x118e: Return(); Pop(2)

0x118f: PushEmpty(int, int, int, int)
0x1190: Push("voice_common")
0x1191: @ GetVariable(Stack[-1], Stack[-3])
0x1192: Pop(1)
0x1193: Push(Stack[-2])
0x1194: IF (Stack[-1] == 0) GOTO 0x11b5; Pop(1)

0x1195: PushEmpty(bool, object)
0x1196: Stack[-1] = Stack[-7]
0x1197: Call2 0x11c9

0x1198: Pop(1)
0x1199: Pop(1); Push((bool) Stack[-1] == 0)
0x119a: IF (Stack[-1] == 0) GOTO 0x11a3; Pop(1)

0x119b: PushEmpty(bool, object)
0x119c: Stack[-1] = Stack[-7]
0x119d: Call2 0x11ee

0x119e: Pop(1)
0x119f: Pop(1); Push((bool) Stack[-1] == 0)
0x11a0: IF (Stack[-1] == 0) GOTO 0x11a3; Pop(1)

0x11a1: Stack[-6] = (bool) 0
0x11a2: Return(); Pop(4)

0x11a3: Push((int) 2)
0x11a4: @ irand(Stack[-2], Stack[-1])
0x11a5: Pop(1)
0x11a6: Push(Stack[-1])
0x11a7: IF (Stack[-1] == 0) GOTO 0x11b0; Pop(1)

0x11a8: Push("voice_common")
0x11a9: Push((int) 1)
0x11aa: Pop(1); Push(Stack[-4] + Stack[-1]);
0x11ab: Push((int) 3)
0x11ac: Pop(2); Push(Stack[-2] % Stack[-1]);
0x11ad: @ SetVariable(Stack[-2], Stack[-1])
0x11ae: Pop(2)
0x11af: GOTO 0x11b4

0x11b0: Push("voice_common")
0x11b1: Push((int) 0)
0x11b2: @ SetVariable(Stack[-2], Stack[-1])
0x11b3: Pop(2)
0x11b4: GOTO 0x11c7

0x11b5: PushEmpty(bool, object)
0x11b6: Stack[-1] = Stack[-7]
0x11b7: Call2 0x11ee

0x11b8: Pop(1)
0x11b9: Pop(1); Push((bool) Stack[-1] == 0)
0x11ba: IF (Stack[-1] == 0) GOTO 0x11c3; Pop(1)

0x11bb: PushEmpty(bool, object)
0x11bc: Stack[-1] = Stack[-7]
0x11bd: Call2 0x11c9

0x11be: Pop(1)
0x11bf: Pop(1); Push((bool) Stack[-1] == 0)
0x11c0: IF (Stack[-1] == 0) GOTO 0x11c3; Pop(1)

0x11c1: Stack[-6] = (bool) 0
0x11c2: Return(); Pop(4)

0x11c3: Push("voice_common")
0x11c4: Push((int) 1)
0x11c5: @ SetVariable(Stack[-2], Stack[-1])
0x11c6: Pop(2)
0x11c7: Stack[-6] = (bool) 1
0x11c8: Return(); Pop(4)

0x11c9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x11ca: Stack[-5] = "c"
0x11cb: Stack[-4] = (int) 0
0x11cc: Push((int) 1)
0x11cd: IF (Stack[-1] == 0) GOTO 0x11d9; Pop(1)

0x11ce: Push((int) 1)
0x11cf: Pop(1); Push(Stack[-5] + Stack[-1]);
0x11d0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x11d1: @@ HasProperty(Stack[-1], Stack[-4])
0x11d2: Pop(1)
0x11d3: Pop(0); Push((bool) Stack[-3] == 0)
0x11d4: IF (Stack[-1] == 0) GOTO 0x11d6; Pop(1)

0x11d5: GOTO 0x11d9

0x11d6: Push((int) 1)
0x11d7: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x11d8: GOTO 0x11cc

0x11d9: Pop(0); Push((bool) Stack[-4] == 0)
0x11da: IF (Stack[-1] == 0) GOTO 0x11dd; Pop(1)

0x11db: Stack[-12] = (bool) 0
0x11dc: Return(); Pop(10)

0x11dd: Stack[-2] = (int) 0
0x11de: Push((int) 1)
0x11df: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x11e0: IF (Stack[-1] == 0) GOTO 0x11e3; Pop(1)

0x11e1: @ irand(Stack[-2], Stack[-4])
0x11e2: Pop(0)
0x11e3: Push((int) 1)
0x11e4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x11e5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x11e6: @@ GetProperty(Stack[-1], Stack[-2])
0x11e7: Pop(1)
0x11e8: PushEmpty(bool, string)
0x11e9: Stack[-1] = Stack[-3]
0x11ea: Call2 0x1238

0x11eb: Stack[-14] = Stack[-2]
0x11ec: Pop(2)
0x11ed: Return(); Pop(10)

0x11ee: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x11ef: Push("d")
0x11f0: PushEmpty(int)
0x11f1: Call2 0x12ab

0x11f2: Pop(0)
0x11f3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11f4: Push("m")
0x11f5: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x11f6: Stack[-4] = (int) 0
0x11f7: Push((int) 1)
0x11f8: IF (Stack[-1] == 0) GOTO 0x1204; Pop(1)

0x11f9: Push((int) 1)
0x11fa: Pop(1); Push(Stack[-5] + Stack[-1]);
0x11fb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x11fc: @@ HasProperty(Stack[-1], Stack[-4])
0x11fd: Pop(1)
0x11fe: Pop(0); Push((bool) Stack[-3] == 0)
0x11ff: IF (Stack[-1] == 0) GOTO 0x1201; Pop(1)

0x1200: GOTO 0x1204

0x1201: Push((int) 1)
0x1202: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1203: GOTO 0x11f7

0x1204: Pop(0); Push((bool) Stack[-4] == 0)
0x1205: IF (Stack[-1] == 0) GOTO 0x1208; Pop(1)

0x1206: Stack[-12] = (bool) 0
0x1207: Return(); Pop(10)

0x1208: Stack[-2] = (int) 0
0x1209: Push((int) 1)
0x120a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x120b: IF (Stack[-1] == 0) GOTO 0x120e; Pop(1)

0x120c: @ irand(Stack[-2], Stack[-4])
0x120d: Pop(0)
0x120e: Push((int) 1)
0x120f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1210: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1211: @@ GetProperty(Stack[-1], Stack[-2])
0x1212: Pop(1)
0x1213: PushEmpty(bool, string)
0x1214: Stack[-1] = Stack[-3]
0x1215: Call2 0x1238

0x1216: Stack[-14] = Stack[-2]
0x1217: Pop(2)
0x1218: Return(); Pop(10)

0x1219: PushEmpty(bool, float, float, bool, float, float)
0x121a: @ lshHasAnimation(Stack[-3], Stack[-7])
0x121b: Pop(0)
0x121c: Push(Stack[-3])
0x121d: IF (Stack[-1] == 0) GOTO 0x1224; Pop(1)

0x121e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x121f: Pop(0)
0x1220: Push((bool) 0)
0x1221: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1222: Pop(1)
0x1223: GOTO 0x1228

0x1224: Push("Can't find lsh animation : ")
0x1225: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1226: @ Trace(Stack[-1])
0x1227: Pop(1)
0x1228: Return(); Pop(6)

0x1229: PushEmpty(bool, float, float, bool, float, float)
0x122a: @ lshHasAnimation(Stack[-3], Stack[-8])
0x122b: Pop(0)
0x122c: Push(Stack[-3])
0x122d: IF (Stack[-1] == 0) GOTO 0x1233; Pop(1)

0x122e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x122f: Pop(0)
0x1230: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1231: Pop(0)
0x1232: GOTO 0x1237

0x1233: Push("Can't find lsh animation : ")
0x1234: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1235: @ Trace(Stack[-1])
0x1236: Pop(1)
0x1237: Return(); Pop(6)

0x1238: PushEmpty(bool, bool)
0x1239: PushEmpty(bool)
0x123a: Call2 0x12da

0x123b: Pop(0)
0x123c: IF (Stack[-1] == 0) GOTO 0x1245; Pop(1)

0x123d: @ lshHasSpeech(Stack[-1], Stack[-3])
0x123e: Pop(0)
0x123f: Push(Stack[-1])
0x1240: IF (Stack[-1] == 0) GOTO 0x1245; Pop(1)

0x1241: @ lshPlaySpeech(Stack[-3])
0x1242: Pop(0)
0x1243: Stack[-4] = (bool) 1
0x1244: Return(); Pop(2)

0x1245: Stack[-4] = (bool) 0
0x1246: Return(); Pop(2)

0x1247: PushEmpty(bool)
0x1248: Call2 0x12da

0x1249: Pop(0)
0x124a: IF (Stack[-1] == 0) GOTO 0x124d; Pop(1)

0x124b: @ lshStopSpeech()
0x124c: Pop(0)
0x124d: Return(); Pop(0)

0x124e: PushEmpty(object, object)
0x124f: @ self(Stack[-1])
0x1250: Pop(0)
0x1251: Stack[-3] = Stack[-1]
0x1252: Return(); Pop(2)

0x1253: Stack[-1] = 0
0x1254: PushEmpty(float, float)
0x1255: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1256: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1257: Push((float)0.0)
0x1258: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1259: IF (Stack[-1] == 0) GOTO 0x125c; Pop(1)

0x125a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x125b: Return(); Pop(2)

0x125c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x125d: Return(); Pop(2)

0x125e: PushEmpty(int, int)
0x125f: @ GetVariable(Stack[-3], Stack[-1])
0x1260: Pop(0)
0x1261: Stack[-4] = Stack[-1]
0x1262: Return(); Pop(2)

0x1263: PushEmpty(object, object, object, object)
0x1264: @ GetMainOutdoorScene(Stack[-2])
0x1265: Pop(0)
0x1266: Push(".bin")
0x1267: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1268: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x1269: Pop(1)
0x126a: Stack[-6] = Stack[-1]
0x126b: Return(); Pop(4)

0x126c: Stack[-1] = 0
0x126d: Stack[-2] = 0
0x126e: PushEmpty(object, object)
0x126f: @ CreateIntVector(Stack[-1])
0x1270: Pop(0)
0x1271: @@ add(Stack[-4])
0x1272: Pop(0)
0x1273: @@ add(Stack[-3])
0x1274: Pop(0)
0x1275: Push((int) 3)
0x1276: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x1277: Pop(1)
0x1278: Return(); Pop(2)

0x1279: Stack[-1] = 0
0x127a: PushEmpty(int, int, bool, int, int, bool)
0x127b: @@ GetItemID(Stack[-3])
0x127c: Pop(0)
0x127d: Push("Category")
0x127e: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x127f: Pop(1)
0x1280: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x1281: Pop(0)
0x1282: Pop(0); Push((bool) Stack[-1] == 0)
0x1283: IF (Stack[-1] == 0) GOTO 0x1287; Pop(1)

0x1284: @@ DropItems(Stack[-8], Stack[-7])
0x1285: Pop(0)
0x1286: GOTO 0x128c

0x1287: PushEmpty(int, int)
0x1288: Stack[-2] = Stack[-5]
0x1289: Stack[-1] = Stack[-9]
0x128a: Call2 0x126e

0x128b: Pop(2)
0x128c: Return(); Pop(6)

0x128d: PushEmpty(object, object)
0x128e: @ CreateInvItem(Stack[-1])
0x128f: Pop(0)
0x1290: @@ SetItemName(Stack[-4])
0x1291: Pop(0)
0x1292: PushEmpty(object, object, int)
0x1293: Stack[-3] = Stack[-8]
0x1294: Stack[-2] = Stack[-4]
0x1295: Stack[-1] = Stack[-6]
0x1296: Call2 0x127a

0x1297: Pop(3)
0x1298: Return(); Pop(2)

0x1299: Stack[-1] = 0
0x129a: PushEmpty(object, object)
0x129b: @ FindActor(Stack[-1], Stack[-4])
0x129c: Pop(0)
0x129d: Pop(0); Push((bool) Stack[-1] == 0)
0x129e: IF (Stack[-1] == 0) GOTO 0x12a1; Pop(1)

0x129f: Stack[-5] = (bool) 0
0x12a0: Return(); Pop(2)

0x12a1: @ Trigger(Stack[-1], Stack[-3])
0x12a2: Pop(0)
0x12a3: Stack[-5] = (bool) 1
0x12a4: Return(); Pop(2)

0x12a5: Stack[-1] = 0
0x12a6: PushEmpty(float, float)
0x12a7: @ GetGameTime(Stack[-1])
0x12a8: Pop(0)
0x12a9: Stack[-3] = Stack[-1]
0x12aa: Return(); Pop(2)

0x12ab: PushEmpty(float, float)
0x12ac: @ GetGameTime(Stack[-1])
0x12ad: Pop(0)
0x12ae: Push((int) 1)
0x12af: PushEmpty(int)
0x12b0: Push((int) 24)
0x12b1: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x12b2: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x12b3: Return(); Pop(2)

0x12b4: PushEmpty()
0x12b5: PushEmpty(int)
0x12b6: Call2 0x12ab

0x12b7: Pop(0)
0x12b8: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x12b9: Return(); Pop(0)

0x12ba: PushEmpty(string, string)
0x12bb: Stack[-1] = "idle"
0x12bc: Push(Stack[-3])
0x12bd: IF (Stack[-1] == 0) GOTO 0x12bf; Pop(1)

0x12be: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x12bf: Stack[-4] = Stack[-1]
0x12c0: Return(); Pop(2)

0x12c1: PushEmpty(int, bool, int, bool)
0x12c2: Stack[-2] = (int) 0
0x12c3: Push("all")
0x12c4: PushEmpty(string, int)
0x12c5: Stack[-1] = Stack[-5]
0x12c6: Call2 0x12ba

0x12c7: Pop(1)
0x12c8: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x12c9: Pop(2)
0x12ca: Pop(0); Push((bool) Stack[-1] == 0)
0x12cb: IF (Stack[-1] == 0) GOTO 0x12cd; Pop(1)

0x12cc: GOTO 0x12d0

0x12cd: Push((int) 1)
0x12ce: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x12cf: GOTO 0x12c3

0x12d0: Stack[-5] = Stack[-2]
0x12d1: Return(); Pop(4)

0x12d2: Stack[-1] = (int) 515549
0x12d3: Return(); Pop(0)

0x12d4: Stack[-1] = (int) 502874
0x12d5: Return(); Pop(0)

0x12d6: Stack[-1] = "ui/NPC_Ospina.png"
0x12d7: Return(); Pop(0)

0x12d8: Stack[-1] = "ui/NPC_Ospina_b.png"
0x12d9: Return(); Pop(0)

0x12da: Stack[-1] = (bool) 1
0x12db: Return(); Pop(0)

0x12dc: PushEmpty()
0x12dd: Push("oob5Ospina1")
0x12de: Push((int) 1)
0x12df: @ SetVariable(Stack[-2], Stack[-1])
0x12e0: Pop(2)
0x12e1: Return(); Pop(0)

0x12e2: PushEmpty(object, object)
0x12e3: PushEmpty(int, string)
0x12e4: Stack[-1] = "b5q01PlaceButchers"
0x12e5: Call2 0x125e

0x12e6: Pop(1)
0x12e7: Push((int) 0)
0x12e8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12e9: IF (Stack[-1] == 0) GOTO 0x1301; Pop(1)

0x12ea: Push("b5q01PlaceButchers")
0x12eb: Push((int) 1)
0x12ec: @ SetVariable(Stack[-2], Stack[-1])
0x12ed: Pop(2)
0x12ee: PushEmpty(object)
0x12ef: Call2 0x14e8

0x12f0: Stack[-2] = Stack[-1]
0x12f1: Pop(1)
0x12f2: Push("b5q01GathererWife")
0x12f3: Push("pt_gatherer3")
0x12f4: Push((int) 1)
0x12f5: Push((int) 530181)
0x12f6: PushEmpty(float)
0x12f7: Call2 0x12a6

0x12f8: Pop(0)
0x12f9: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12fa: Pop(5)
0x12fb: PushEmpty(bool, string, string)
0x12fc: Stack[-2] = "quest_b5_01"
0x12fd: Stack[-1] = "place_butchers"
0x12fe: Call2 0x129a

0x12ff: Pop(3)
0x1300: Stack[-1] = 0
0x1301: Return(); Pop(2)

0x1302: PushEmpty()
0x1303: Push("oob3Ospina1")
0x1304: Push((int) 1)
0x1305: @ SetVariable(Stack[-2], Stack[-1])
0x1306: Pop(2)
0x1307: Return(); Pop(0)

0x1308: PushEmpty(object, object)
0x1309: Push("b3q01")
0x130a: Push((int) 2)
0x130b: @ SetVariable(Stack[-2], Stack[-1])
0x130c: Pop(2)
0x130d: PushEmpty(object)
0x130e: Call2 0x14e8

0x130f: Stack[-2] = Stack[-1]
0x1310: Pop(1)
0x1311: Push("b3q01OspinaGotoButcher")
0x1312: Push("pt_gmap_house5_24")
0x1313: Push((int) 1)
0x1314: Push((int) 519635)
0x1315: PushEmpty(float)
0x1316: Call2 0x12a6

0x1317: Pop(0)
0x1318: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1319: Pop(5)
0x131a: PushEmpty()
0x131b: Call2 0x1498

0x131c: Pop(0)
0x131d: PushEmpty(bool, string, string)
0x131e: Stack[-2] = "quest_b3_01"
0x131f: Stack[-1] = "place_butcher"
0x1320: Call2 0x129a

0x1321: Pop(3)
0x1322: Return(); Pop(2)

0x1323: Stack[-1] = 0
0x1324: PushEmpty()
0x1325: PushEmpty(object, string, float)
0x1326: PushEmpty(object)
0x1327: Call2 0x14e8

0x1328: Stack[-4] = Stack[-1]
0x1329: Pop(1)
0x132a: Stack[-2] = "pt_gmap_house5_24"
0x132b: Stack[-1] = (int) 2
0x132c: Call2 0x14f9

0x132d: Pop(3)
0x132e: PushEmpty(object)
0x132f: Call2 0x14e8

0x1330: Pop(0)
0x1331: @@ ShowMap(Stack[-1])
0x1332: Pop(1)
0x1333: Return(); Pop(0)

0x1334: PushEmpty()
0x1335: Push("oob2Ospina1")
0x1336: Push((int) 1)
0x1337: @ SetVariable(Stack[-2], Stack[-1])
0x1338: Pop(2)
0x1339: Return(); Pop(0)

0x133a: PushEmpty()
0x133b: Push("oob2Ospina2")
0x133c: Push((int) 1)
0x133d: @ SetVariable(Stack[-2], Stack[-1])
0x133e: Pop(2)
0x133f: Return(); Pop(0)

0x1340: PushEmpty()
0x1341: Push("oob2Ospina3")
0x1342: Push((int) 1)
0x1343: @ SetVariable(Stack[-2], Stack[-1])
0x1344: Pop(2)
0x1345: Return(); Pop(0)

0x1346: PushEmpty()
0x1347: Push("oob2Ospina4")
0x1348: Push((int) 1)
0x1349: @ SetVariable(Stack[-2], Stack[-1])
0x134a: Pop(2)
0x134b: Return(); Pop(0)

0x134c: PushEmpty(object, object)
0x134d: PushEmpty(int, string)
0x134e: Stack[-1] = "b2TravnikMark"
0x134f: Call2 0x125e

0x1350: Pop(1)
0x1351: Push((int) 0)
0x1352: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1353: IF (Stack[-1] == 0) GOTO 0x1378; Pop(1)

0x1354: Push("b2TravnikMark")
0x1355: Push((int) 1)
0x1356: @ SetVariable(Stack[-2], Stack[-1])
0x1357: Pop(2)
0x1358: PushEmpty(object)
0x1359: Call2 0x14e8

0x135a: Stack[-2] = Stack[-1]
0x135b: Pop(1)
0x135c: Push("b2Travnik1")
0x135d: Push("pt_map_gatherer1")
0x135e: Push((int) 3)
0x135f: Push((int) 520463)
0x1360: PushEmpty(float)
0x1361: Call2 0x12a6

0x1362: Pop(0)
0x1363: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1364: Pop(5)
0x1365: Push("b2Travnik2")
0x1366: Push("pt_map_gatherer2")
0x1367: Push((int) 3)
0x1368: Push((int) 520464)
0x1369: PushEmpty(float)
0x136a: Call2 0x12a6

0x136b: Pop(0)
0x136c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x136d: Pop(5)
0x136e: Push("b2Travnik3")
0x136f: Push("pt_map_gatherer3")
0x1370: Push((int) 3)
0x1371: Push((int) 520465)
0x1372: PushEmpty(float)
0x1373: Call2 0x12a6

0x1374: Pop(0)
0x1375: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1376: Pop(5)
0x1377: Stack[-1] = 0
0x1378: Return(); Pop(2)

0x1379: PushEmpty()
0x137a: Push("b8q01")
0x137b: Push((int) 6)
0x137c: @ SetVariable(Stack[-2], Stack[-1])
0x137d: Pop(2)
0x137e: PushEmpty()
0x137f: Call2 0x14b2

0x1380: Pop(0)
0x1381: Return(); Pop(0)

0x1382: PushEmpty()
0x1383: Push("oob10Ospina1")
0x1384: Push((int) 1)
0x1385: @ SetVariable(Stack[-2], Stack[-1])
0x1386: Pop(2)
0x1387: Return(); Pop(0)

0x1388: PushEmpty()
0x1389: Push("b11q01KnowWhoKilled")
0x138a: Push((int) 1)
0x138b: @ SetVariable(Stack[-2], Stack[-1])
0x138c: Pop(2)
0x138d: PushEmpty()
0x138e: Call2 0x148b

0x138f: Pop(0)
0x1390: Return(); Pop(0)

0x1391: PushEmpty()
0x1392: Push("oob11Ospina1")
0x1393: Push((int) 1)
0x1394: @ SetVariable(Stack[-2], Stack[-1])
0x1395: Pop(2)
0x1396: Return(); Pop(0)

0x1397: PushEmpty()
0x1398: PushEmpty()
0x1399: Call2 0x14a5

0x139a: Pop(0)
0x139b: Return(); Pop(0)

0x139c: PushEmpty()
0x139d: PushEmpty(object, string, float)
0x139e: PushEmpty(object)
0x139f: Call2 0x14e8

0x13a0: Stack[-4] = Stack[-1]
0x13a1: Pop(1)
0x13a2: Stack[-2] = "pt_gatherer3"
0x13a3: Stack[-1] = (int) 2
0x13a4: Call2 0x14f9

0x13a5: Pop(3)
0x13a6: PushEmpty(object)
0x13a7: Call2 0x14e8

0x13a8: Pop(0)
0x13a9: @@ ShowMap(Stack[-1])
0x13aa: Pop(1)
0x13ab: Return(); Pop(0)

0x13ac: PushEmpty()
0x13ad: Push("playsound")
0x13ae: Push("giveitem")
0x13af: @ TriggerWorld(Stack[-2], Stack[-1])
0x13b0: Pop(2)
0x13b1: Return(); Pop(0)

0x13b2: PushEmpty()
0x13b3: Push("b2q01")
0x13b4: Push((int) 3)
0x13b5: @ SetVariable(Stack[-2], Stack[-1])
0x13b6: Pop(2)
0x13b7: PushEmpty(bool, string, string)
0x13b8: Stack[-2] = "quest_b2_01"
0x13b9: Stack[-1] = "place_box"
0x13ba: Call2 0x129a

0x13bb: Pop(3)
0x13bc: PushEmpty(object, string)
0x13bd: Stack[-1] = "quest_b2_02"
0x13be: Call2 0x1263

0x13bf: Pop(2)
0x13c0: Return(); Pop(0)

0x13c1: PushEmpty()
0x13c2: Push("oob8Ospina1")
0x13c3: Push((int) 1)
0x13c4: @ SetVariable(Stack[-2], Stack[-1])
0x13c5: Pop(2)
0x13c6: Return(); Pop(0)

0x13c7: PushEmpty()
0x13c8: Push("b8q01_bone is given")
0x13c9: @ Trace(Stack[-1])
0x13ca: Pop(1)
0x13cb: PushEmpty(object, string, int)
0x13cc: Stack[-3] = Stack[-5]
0x13cd: Stack[-2] = "b8q01_bone"
0x13ce: Stack[-1] = (int) 1
0x13cf: Call2 0x128d

0x13d0: Pop(3)
0x13d1: Return(); Pop(0)

0x13d2: PushEmpty()
0x13d3: PushEmpty(int, string)
0x13d4: Stack[-1] = "b8q01"
0x13d5: Call2 0x125e

0x13d6: Pop(1)
0x13d7: Push((int) 5)
0x13d8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13d9: IF (Stack[-1] == 0) GOTO 0x13dc; Pop(1)

0x13da: Stack[-2] = (bool) 1
0x13db: Return(); Pop(0)

0x13dc: Stack[-2] = (bool) 0
0x13dd: Return(); Pop(0)

0x13de: PushEmpty()
0x13df: PushEmpty(int, string)
0x13e0: Stack[-1] = "b10q01"
0x13e1: Call2 0x125e

0x13e2: Pop(1)
0x13e3: Push((int) 4)
0x13e4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13e5: IF (Stack[-1] == 0) GOTO 0x13e8; Pop(1)

0x13e6: Stack[-2] = (bool) 1
0x13e7: Return(); Pop(0)

0x13e8: Stack[-2] = (bool) 0
0x13e9: Return(); Pop(0)

0x13ea: PushEmpty()
0x13eb: PushEmpty(int, string)
0x13ec: Stack[-1] = "b10q01"
0x13ed: Call2 0x125e

0x13ee: Pop(1)
0x13ef: Push((int) 1000)
0x13f0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13f1: IF (Stack[-1] == 0) GOTO 0x13f4; Pop(1)

0x13f2: Stack[-2] = (bool) 1
0x13f3: Return(); Pop(0)

0x13f4: Stack[-2] = (bool) 0
0x13f5: Return(); Pop(0)

0x13f6: PushEmpty()
0x13f7: Stack[-2] = (bool) 1
0x13f8: Return(); Pop(0)

0x13f9: Stack[-2] = (bool) 0
0x13fa: Return(); Pop(0)

0x13fb: PushEmpty()
0x13fc: PushEmpty(int, string)
0x13fd: Stack[-1] = "b11q01"
0x13fe: Call2 0x125e

0x13ff: Pop(1)
0x1400: Push((int) 1000)
0x1401: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1402: IF (Stack[-1] == 0) GOTO 0x1405; Pop(1)

0x1403: Stack[-2] = (bool) 1
0x1404: Return(); Pop(0)

0x1405: Stack[-2] = (bool) 0
0x1406: Return(); Pop(0)

0x1407: PushEmpty()
0x1408: PushEmpty(int, string)
0x1409: Stack[-1] = "oob11Ospina1"
0x140a: Call2 0x125e

0x140b: Pop(1)
0x140c: Push((int) 0)
0x140d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x140e: IF (Stack[-1] == 0) GOTO 0x1411; Pop(1)

0x140f: Stack[-2] = (bool) 1
0x1410: Return(); Pop(0)

0x1411: Stack[-2] = (bool) 0
0x1412: Return(); Pop(0)

0x1413: PushEmpty()
0x1414: PushEmpty(int, string)
0x1415: Stack[-1] = "oob8Ospina1"
0x1416: Call2 0x125e

0x1417: Pop(1)
0x1418: Push((int) 0)
0x1419: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x141a: IF (Stack[-1] == 0) GOTO 0x141d; Pop(1)

0x141b: Stack[-2] = (bool) 1
0x141c: Return(); Pop(0)

0x141d: Stack[-2] = (bool) 0
0x141e: Return(); Pop(0)

0x141f: PushEmpty()
0x1420: PushEmpty(int, string)
0x1421: Stack[-1] = "b5q01"
0x1422: Call2 0x125e

0x1423: Pop(1)
0x1424: Push((int) 1)
0x1425: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1426: IF (Stack[-1] == 0) GOTO 0x1429; Pop(1)

0x1427: Stack[-2] = (bool) 1
0x1428: Return(); Pop(0)

0x1429: Stack[-2] = (bool) 0
0x142a: Return(); Pop(0)

0x142b: PushEmpty()
0x142c: PushEmpty(int, string)
0x142d: Stack[-1] = "oob5Ospina1"
0x142e: Call2 0x125e

0x142f: Pop(1)
0x1430: Push((int) 0)
0x1431: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1432: IF (Stack[-1] == 0) GOTO 0x1435; Pop(1)

0x1433: Stack[-2] = (bool) 1
0x1434: Return(); Pop(0)

0x1435: Stack[-2] = (bool) 0
0x1436: Return(); Pop(0)

0x1437: PushEmpty()
0x1438: PushEmpty(int, string)
0x1439: Stack[-1] = "oob3Ospina1"
0x143a: Call2 0x125e

0x143b: Pop(1)
0x143c: Push((int) 0)
0x143d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x143e: IF (Stack[-1] == 0) GOTO 0x1441; Pop(1)

0x143f: Stack[-2] = (bool) 1
0x1440: Return(); Pop(0)

0x1441: Stack[-2] = (bool) 0
0x1442: Return(); Pop(0)

0x1443: PushEmpty()
0x1444: PushEmpty(int, string)
0x1445: Stack[-1] = "b3q01"
0x1446: Call2 0x125e

0x1447: Pop(1)
0x1448: Push((int) 1)
0x1449: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x144a: IF (Stack[-1] == 0) GOTO 0x144d; Pop(1)

0x144b: Stack[-2] = (bool) 1
0x144c: Return(); Pop(0)

0x144d: Stack[-2] = (bool) 0
0x144e: Return(); Pop(0)

0x144f: PushEmpty()
0x1450: PushEmpty(int, string)
0x1451: Stack[-1] = "b2q01"
0x1452: Call2 0x125e

0x1453: Pop(1)
0x1454: Push((int) 2)
0x1455: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1456: IF (Stack[-1] == 0) GOTO 0x1459; Pop(1)

0x1457: Stack[-2] = (bool) 1
0x1458: Return(); Pop(0)

0x1459: Stack[-2] = (bool) 0
0x145a: Return(); Pop(0)

0x145b: PushEmpty()
0x145c: PushEmpty(int, string)
0x145d: Stack[-1] = "oob2Ospina1"
0x145e: Call2 0x125e

0x145f: Pop(1)
0x1460: Push((int) 0)
0x1461: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1462: IF (Stack[-1] == 0) GOTO 0x1465; Pop(1)

0x1463: Stack[-2] = (bool) 1
0x1464: Return(); Pop(0)

0x1465: Stack[-2] = (bool) 0
0x1466: Return(); Pop(0)

0x1467: PushEmpty()
0x1468: PushEmpty(int, string)
0x1469: Stack[-1] = "oob2Ospina2"
0x146a: Call2 0x125e

0x146b: Pop(1)
0x146c: Push((int) 0)
0x146d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x146e: IF (Stack[-1] == 0) GOTO 0x1471; Pop(1)

0x146f: Stack[-2] = (bool) 1
0x1470: Return(); Pop(0)

0x1471: Stack[-2] = (bool) 0
0x1472: Return(); Pop(0)

0x1473: PushEmpty()
0x1474: PushEmpty(int, string)
0x1475: Stack[-1] = "oob2Ospina3"
0x1476: Call2 0x125e

0x1477: Pop(1)
0x1478: Push((int) 0)
0x1479: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x147a: IF (Stack[-1] == 0) GOTO 0x147d; Pop(1)

0x147b: Stack[-2] = (bool) 1
0x147c: Return(); Pop(0)

0x147d: Stack[-2] = (bool) 0
0x147e: Return(); Pop(0)

0x147f: PushEmpty()
0x1480: PushEmpty(int, string)
0x1481: Stack[-1] = "oob2Ospina4"
0x1482: Call2 0x125e

0x1483: Pop(1)
0x1484: Push((int) 0)
0x1485: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1486: IF (Stack[-1] == 0) GOTO 0x1489; Pop(1)

0x1487: Stack[-2] = (bool) 1
0x1488: Return(); Pop(0)

0x1489: Stack[-2] = (bool) 0
0x148a: Return(); Pop(0)

0x148b: PushEmpty(object, object)
0x148c: Push((int) 315)
0x148d: Push((int) 1)
0x148e: Push((int) 522057)
0x148f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1490: Pop(3)
0x1491: PushEmpty(bool, object, int)
0x1492: Stack[-2] = Stack[-4]
0x1493: Stack[-1] = (int) 313
0x1494: Call2 0x14cc

0x1495: Pop(3)
0x1496: Return(); Pop(2)

0x1497: Stack[-1] = 0
0x1498: PushEmpty(object, object)
0x1499: Push((int) 223)
0x149a: Push((int) 1)
0x149b: Push((int) 519636)
0x149c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x149d: Pop(3)
0x149e: PushEmpty(bool, object, int)
0x149f: Stack[-2] = Stack[-4]
0x14a0: Stack[-1] = (int) 221
0x14a1: Call2 0x14cc

0x14a2: Pop(3)
0x14a3: Return(); Pop(2)

0x14a4: Stack[-1] = 0
0x14a5: PushEmpty(object, object)
0x14a6: Push((int) 240)
0x14a7: Push((int) 1)
0x14a8: Push((int) 519745)
0x14a9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x14aa: Pop(3)
0x14ab: PushEmpty(bool, object, int)
0x14ac: Stack[-2] = Stack[-4]
0x14ad: Stack[-1] = (int) 238
0x14ae: Call2 0x14cc

0x14af: Pop(3)
0x14b0: Return(); Pop(2)

0x14b1: Stack[-1] = 0
0x14b2: PushEmpty(object, object)
0x14b3: Push((int) 290)
0x14b4: Push((int) 1)
0x14b5: Push((int) 521461)
0x14b6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x14b7: Pop(3)
0x14b8: PushEmpty(bool, object, int)
0x14b9: Stack[-2] = Stack[-4]
0x14ba: Stack[-1] = (int) 284
0x14bb: Call2 0x14cc

0x14bc: Pop(3)
0x14bd: Return(); Pop(2)

0x14be: Stack[-1] = 0
0x14bf: PushEmpty(object, object)
0x14c0: @ GetDiaryRoot(Stack[-1])
0x14c1: Pop(0)
0x14c2: Pop(0); Push((bool) Stack[-1] == 0)
0x14c3: IF (Stack[-1] == 0) GOTO 0x14c9; Pop(1)

0x14c4: Push("Can't retrieve diary root")
0x14c5: @ Trace(Stack[-1])
0x14c6: Pop(1)
0x14c7: Stack[-3] = (bool) 0
0x14c8: Return(); Pop(2)

0x14c9: Stack[-3] = Stack[-1]
0x14ca: Return(); Pop(2)

0x14cb: Stack[-1] = 0
0x14cc: PushEmpty(object, object, int, object, object, int)
0x14cd: PushEmpty(object)
0x14ce: Call2 0x14bf

0x14cf: Stack[-4] = Stack[-1]
0x14d0: Pop(1)
0x14d1: @@ Find(Stack[-7], Stack[-2])
0x14d2: Pop(0)
0x14d3: Pop(0); Push((bool) Stack[-2] == 0)
0x14d4: IF (Stack[-1] == 0) GOTO 0x14db; Pop(1)

0x14d5: Push("Can't find diary parent with id: ")
0x14d6: Pop(1); Push(Stack[-1] + Stack[-8]);
0x14d7: @ Trace(Stack[-1])
0x14d8: Pop(1)
0x14d9: Stack[-9] = (bool) 0
0x14da: Return(); Pop(6)

0x14db: @@ AddChild(Stack[-8])
0x14dc: Pop(0)
0x14dd: Push((int) 7)
0x14de: @ SendWorldWndMessage(Stack[-1])
0x14df: Pop(1)
0x14e0: @@ GetCategory(Stack[-1])
0x14e1: Pop(0)
0x14e2: @ SetDiarySection(Stack[-1])
0x14e3: Pop(0)
0x14e4: Stack[-9] = (bool) 0
0x14e5: Return(); Pop(6)

0x14e6: Stack[-2] = 0
0x14e7: Stack[-3] = 0
0x14e8: PushEmpty(object, object, object, object)
0x14e9: @ GetMainOutdoorScene(Stack[-2])
0x14ea: Pop(0)
0x14eb: Pop(0); Push((bool) Stack[-2] == 0)
0x14ec: IF (Stack[-1] == 0) GOTO 0x14f3; Pop(1)

0x14ed: Push("Can't find main outdoor scene")
0x14ee: @ Trace(Stack[-1])
0x14ef: Pop(1)
0x14f0: Stack[-1] = 0
0x14f1: Stack[-5] = Stack[-1]
0x14f2: Return(); Pop(4)

0x14f3: @@ GetMap(Stack[-1])
0x14f4: Pop(0)
0x14f5: Stack[-5] = Stack[-1]
0x14f6: Return(); Pop(4)

0x14f7: Stack[-1] = 0
0x14f8: Stack[-2] = 0
0x14f9: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x14fa: @ GetMainOutdoorScene(Stack[-2])
0x14fb: Pop(0)
0x14fc: Pop(0); Push((bool) Stack[-2] == 0)
0x14fd: IF (Stack[-1] == 0) GOTO 0x1502; Pop(1)

0x14fe: Push("Can't find main outdoor scene")
0x14ff: @ Trace(Stack[-1])
0x1500: Pop(1)
0x1501: Return(); Pop(8)

0x1502: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x1503: Pop(0)
0x1504: Pop(0); Push((bool) Stack[-1] == 0)
0x1505: IF (Stack[-1] == 0) GOTO 0x150c; Pop(1)

0x1506: Push("Warning: outdoor scene locator ")
0x1507: Pop(1); Push(Stack[-1] + Stack[-11]);
0x1508: Push(" doesnt exist")
0x1509: Pop(2); Push(Stack[-2] + Stack[-1]);
0x150a: @ Trace(Stack[-1])
0x150b: Pop(1)
0x150c: @@ GetMap(Stack[-11])
0x150d: Pop(0)
0x150e: Pop(0); Push((bool) Stack[-11] == 0)
0x150f: IF (Stack[-1] == 0) GOTO 0x1514; Pop(1)

0x1510: Push("Can't find map")
0x1511: @ Trace(Stack[-1])
0x1512: Pop(1)
0x1513: Return(); Pop(8)

0x1514: Push(CvectorIndex(Stack[-4], 0))
0x1515: Push(CvectorIndex(Stack[-5], 2))
0x1516: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x1517: Pop(2)
0x1518: Return(); Pop(8)

0x1519: Stack[-2] = 0
0x151a: PushEmpty(int, int)
0x151b: Push("branch")
0x151c: @ GetVariable(Stack[-1], Stack[-2])
0x151d: Pop(1)
0x151e: Push((int) 0)
0x151f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1520: IF (Stack[-1] == 0) GOTO 0x1524; Pop(1)

0x1521: Stack[-3] = (int) 1
0x1522: Return(); Pop(2)

0x1523: GOTO 0x1529

0x1524: Push((int) 1)
0x1525: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1526: IF (Stack[-1] == 0) GOTO 0x1529; Pop(1)

0x1527: Stack[-3] = (int) 2
0x1528: Return(); Pop(2)

0x1529: Stack[-3] = (int) 3
0x152a: Return(); Pop(2)

0x152b: PushEmpty()
0x152c: Push(GlobalVars[1])
0x152d: Pop(1); Push((bool) Stack[-1] == 0)
0x152e: IF (Stack[-1] == 0) GOTO 0x1538; Pop(1)

0x152f: PushEmpty(int, object)
0x1530: Stack[-1] = Stack[-3]
0x1531: Push(-2, 1); TaskCall(6)
0x1532: Call2 0x735

0x1533: Pop(-2, 1); TaskReturn
0x1534: Pop(2)
0x1535: Push(GlobalVars[1])
0x1536: Stack[-1] = (bool) 1
0x1537: GlobalVars[1] = Stack[-1]; Pop(1)
0x1538: PushEmpty(bool, int)
0x1539: Stack[-1] = (int) 2
0x153a: Call2 0x12b4

0x153b: Pop(1)
0x153c: IF (Stack[-1] == 0) GOTO 0x1544; Pop(1)

0x153d: PushEmpty(int, object)
0x153e: Stack[-1] = Stack[-3]
0x153f: Push(-2, 1); TaskCall(4)
0x1540: Call2 0x390

0x1541: Pop(-2, 1); TaskReturn
0x1542: Pop(2)
0x1543: Return(); Pop(0)

0x1544: PushEmpty(bool, int)
0x1545: Stack[-1] = (int) 3
0x1546: Call2 0x12b4

0x1547: Pop(1)
0x1548: IF (Stack[-1] == 0) GOTO 0x1550; Pop(1)

0x1549: PushEmpty(int, object)
0x154a: Stack[-1] = Stack[-3]
0x154b: Push(-2, 1); TaskCall(2)
0x154c: Call2 0x205

0x154d: Pop(-2, 1); TaskReturn
0x154e: Pop(2)
0x154f: Return(); Pop(0)

0x1550: PushEmpty(bool, int)
0x1551: Stack[-1] = (int) 5
0x1552: Call2 0x12b4

0x1553: Pop(1)
0x1554: IF (Stack[-1] == 0) GOTO 0x155c; Pop(1)

0x1555: PushEmpty(int, object)
0x1556: Stack[-1] = Stack[-3]
0x1557: Push(-2, 1); TaskCall(0)
0x1558: Call2 0x0

0x1559: Pop(-2, 1); TaskReturn
0x155a: Pop(2)
0x155b: Return(); Pop(0)

0x155c: PushEmpty(bool, int)
0x155d: Stack[-1] = (int) 8
0x155e: Call2 0x12b4

0x155f: Pop(1)
0x1560: IF (Stack[-1] == 0) GOTO 0x1568; Pop(1)

0x1561: PushEmpty(int, object)
0x1562: Stack[-1] = Stack[-3]
0x1563: Push(-2, 1); TaskCall(8)
0x1564: Call2 0x817

0x1565: Pop(-2, 1); TaskReturn
0x1566: Pop(2)
0x1567: Return(); Pop(0)

0x1568: PushEmpty(bool, int)
0x1569: Stack[-1] = (int) 10
0x156a: Call2 0x12b4

0x156b: Pop(1)
0x156c: IF (Stack[-1] == 0) GOTO 0x1574; Pop(1)

0x156d: PushEmpty(int, object)
0x156e: Stack[-1] = Stack[-3]
0x156f: Push(-2, 1); TaskCall(10)
0x1570: Call2 0xa9a

0x1571: Pop(-2, 1); TaskReturn
0x1572: Pop(2)
0x1573: Return(); Pop(0)

0x1574: PushEmpty(bool, int)
0x1575: Stack[-1] = (int) 11
0x1576: Call2 0x12b4

0x1577: Pop(1)
0x1578: IF (Stack[-1] == 0) GOTO 0x1580; Pop(1)

0x1579: PushEmpty(int, object)
0x157a: Stack[-1] = Stack[-3]
0x157b: Push(-2, 1); TaskCall(12)
0x157c: Call2 0xc0c

0x157d: Pop(-2, 1); TaskReturn
0x157e: Pop(2)
0x157f: Return(); Pop(0)

0x1580: PushEmpty(bool)
0x1581: Stack[-1] = (bool) 0
0x1582: PushEmpty(bool, int)
0x1583: Stack[-1] = (int) 12
0x1584: Call2 0x12b4

0x1585: Pop(1)
0x1586: IF (Stack[-1] == 0) GOTO 0x158b; Pop(1)

0x1587: Push(GlobalVars[2])
0x1588: Pop(1); Push((bool) Stack[-1] == 0)
0x1589: IF (Stack[-1] == 0) GOTO 0x158b; Pop(1)

0x158a: Stack[-1] = (bool) 1
0x158b: IF (Stack[-1] == 0) GOTO 0x1596; Pop(1)

0x158c: PushEmpty(int, object)
0x158d: Stack[-1] = Stack[-3]
0x158e: Push(-2, 1); TaskCall(14)
0x158f: Call2 0xe47

0x1590: Pop(-2, 1); TaskReturn
0x1591: Pop(2)
0x1592: Push(GlobalVars[2])
0x1593: Stack[-1] = (bool) 1
0x1594: GlobalVars[2] = Stack[-1]; Pop(1)
0x1595: Return(); Pop(0)

0x1596: PushEmpty(int, object)
0x1597: Stack[-1] = Stack[-3]
0x1598: Push(-2, 1); TaskCall(16)
0x1599: Call2 0xf4a

0x159a: Pop(-2, 1); TaskReturn
0x159b: Pop(2)
0x159c: Return(); Pop(0)

