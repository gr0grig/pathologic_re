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
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Strange
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

RunOp = 0xfe3
RunTask = 18

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1b2 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3b8 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x570 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8d9 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9ca Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc5e Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xdd3 Vars = (int, int)
	GTASK_16 Vars = (object) Params = 2
	GTASK_17 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xfb9 Vars = (int, int)
	GTASK_18 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x102f Vars = (int)
		EVENT_6 Op = 0x1055 Vars = ()
		EVENT_5 Op = 0x1064 Vars = ()
		EVENT_45 Op = 0x1071 Vars = (bool)
		EVENT_0 Op = 0x107d Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1106

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x12a0

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x129e

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x12a2

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x12a4

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x14e6

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
0x31: Call2 0x121a

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x115b

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
0x48: Call2 0x114a

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
0x5b: Push((int) 535294)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 535295)
0x61: Push((int) 36973)
0x62: Push((int) 36972)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 535302)
0x66: Push((int) -1)
0x67: Push((int) 36980)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 535303)
0x6b: Push((int) -1)
0x6c: Push((int) 36981)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0x12a6

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x11e5

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
0x92: Call2 0x12a6

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
0xa2: Call2 0x11f5

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x1213

0xab: Pop(0)
0xac: Push((int) 36971)
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xaf: PushEmpty(string)
0xb0: Stack[-1] = "Neutral"
0xb1: Call2 0x90

0xb2: Pop(1)
0xb3: Push((int) 535294)
0xb4: @@ SetMessage(Stack[-1])
0xb5: Pop(1)
0xb6: @@ ClearReplies()
0xb7: Pop(0)
0xb8: Push((int) 535295)
0xb9: Push((int) 36973)
0xba: Push((int) 36972)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Push((int) 535302)
0xbe: Push((int) -1)
0xbf: Push((int) 36980)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: Push((int) 535303)
0xc3: Push((int) -1)
0xc4: Push((int) 36981)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Return(); Pop(0)

0xc8: Push((int) 36973)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0x90

0xce: Pop(1)
0xcf: Push((int) 535296)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 535297)
0xd5: Push((int) 36975)
0xd6: Push((int) 36974)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 535301)
0xda: Push((int) 36975)
0xdb: Push((int) 36978)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 36975)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call2 0x90

0xe5: Pop(1)
0xe6: Push((int) 535298)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 535299)
0xec: Push((int) -1)
0xed: Push((int) 36976)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 535300)
0xf1: Push((int) -1)
0xf2: Push((int) 36977)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf7: PushEmpty(bool)
0xf8: Call2 0x12a6

0xf9: Pop(0)
0xfa: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfb: @ lshStopAnimation()
0xfc: Pop(0)
0xfd: GOTO 0x100

0xfe: @ StopAnimation()
0xff: Pop(0)
0x100: Return(); Pop(0)

0x101: GOTO 0xa7

0x102: Return(); Pop(0)

0x103: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x104: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x105: PushEmpty(bool, object, float)
0x106: Stack[-2] = Stack[-12]
0x107: Stack[-1] = (float) 70.0
0x108: Call2 0x1106

0x109: Pop(2)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-10] = (int) -2
0x10d: Return(); Pop(8)

0x10e: @ CreateDialog(Stack[-4])
0x10f: Pop(0)
0x110: PushEmpty(int)
0x111: Call2 0x12a0

0x112: Pop(0)
0x113: @@ SetNPCName(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(int)
0x116: Call2 0x129e

0x117: Pop(0)
0x118: @@ SetNPCDescription(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(string)
0x11b: Call2 0x12a2

0x11c: Pop(0)
0x11d: @@ SetPhoto(Stack[-1])
0x11e: Pop(1)
0x11f: PushEmpty(string)
0x120: Call2 0x12a4

0x121: Pop(0)
0x122: @@ SetPhoto2(Stack[-1])
0x123: Pop(1)
0x124: PushEmpty(int)
0x125: Call2 0x14e6

0x126: Pop(0)
0x127: @@ SetPlayerName(Stack[-1])
0x128: Pop(1)
0x129: Stack[-2] = (int) -1
0x12a: @ IsOverrideActive(Stack[-3])
0x12b: Pop(0)
0x12c: Push(Stack[-3])
0x12d: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12e: Stack[-10] = (int) -2
0x12f: Return(); Pop(8)

0x130: @ DoDialog(Stack[-4])
0x131: Pop(0)
0x132: PushEmpty(bool, object)
0x133: PushEmpty(object)
0x134: Call2 0x121a

0x135: Stack[-2] = Stack[-1]
0x136: Pop(1)
0x137: Call2 0x115b

0x138: Pop(2)
0x139: PushEmpty(object, object)
0x13a: Stack[-2] = Stack[-11]
0x13b: Stack[-1] = Stack[-6]
0x13c: Push(-2, 4); TaskCall(3)
0x13d: Call2 0x154

0x13e: Pop(-2, 4); TaskReturn
0x13f: Pop(2)
0x140: @@ IsDialogEnd(Stack[-1])
0x141: Pop(0)
0x142: Pop(0); Push((bool) Stack[-1] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x144: @ sync()
0x145: Pop(0)
0x146: @@ IsDialogEnd(Stack[-1])
0x147: Pop(0)
0x148: GOTO 0x142

0x149: PushEmpty(object)
0x14a: Stack[-1] = Stack[-10]
0x14b: Call2 0x114a

0x14c: Pop(1)
0x14d: @ StopDialog(Stack[-4])
0x14e: Pop(0)
0x14f: @@ GetReturnValue(Stack[-2])
0x150: Pop(0)
0x151: Stack[-10] = Stack[-2]
0x152: Return(); Pop(8)

0x153: Stack[-4] = 0
0x154: PushEmpty()
0x155: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x156: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x157: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x158: Push((int) 1)
0x159: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Strange"
0x15c: Call2 0x19c

0x15d: Pop(1)
0x15e: Push((int) 518620)
0x15f: @@ SetMessage(Stack[-1])
0x160: Pop(1)
0x161: @@ ClearReplies()
0x162: Pop(0)
0x163: PushEmpty(bool)
0x164: Stack[-1] = (bool) 0
0x165: PushEmpty(bool, object)
0x166: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x167: Call2 0x13eb

0x168: Pop(1)
0x169: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16a: PushEmpty(bool, object)
0x16b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16c: Call2 0x13f7

0x16d: Pop(1)
0x16e: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16f: Stack[-1] = (bool) 1
0x170: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x171: Push((int) 518621)
0x172: Push((int) 19933)
0x173: Push((int) 19713)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: Push((int) 518624)
0x177: Push((int) -1)
0x178: Push((int) 19716)
0x179: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a: Pop(3)
0x17b: GOTO 0x17e

0x17c: Return(); Pop(0)

0x17d: GOTO 0x158

0x17e: PushEmpty(bool)
0x17f: Call2 0x12a6

0x180: Pop(0)
0x181: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x182: @ lshWaitForAnimEnd()
0x183: Pop(0)
0x184: Push( Stack[3 + Tasks[-1].StackPointer] )
0x185: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x186: GOTO 0x18c

0x187: PushEmpty(string)
0x188: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x189: Call2 0x11e5

0x18a: Pop(1)
0x18b: GOTO 0x182

0x18c: GOTO 0x19b

0x18d: Push("all")
0x18e: Push("idle")
0x18f: @ PlayAnimation(Stack[-2], Stack[-1])
0x190: Pop(2)
0x191: @ WaitForAnimEnd()
0x192: Pop(0)
0x193: Push( Stack[3 + Tasks[-1].StackPointer] )
0x194: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x195: GOTO 0x19b

0x196: Push("all")
0x197: Push("idle")
0x198: @ PlayAnimation(Stack[-2], Stack[-1])
0x199: Pop(2)
0x19a: GOTO 0x191

0x19b: Return(); Pop(0)

0x19c: PushEmpty()
0x19d: PushEmpty(bool)
0x19e: Call2 0x12a6

0x19f: Pop(0)
0x1a0: Pop(1); Push((bool) Stack[-1] == 0)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a2: Return(); Pop(0)

0x1a3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: Return(); Pop(0)

0x1a6: PushEmpty(string, bool)
0x1a7: Stack[-2] = Stack[-3]
0x1a8: Push("")
0x1a9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1ab: Stack[-1] = (bool) 0
0x1ac: GOTO 0x1ae

0x1ad: Stack[-1] = (bool) 1
0x1ae: Call2 0x11f5

0x1af: Pop(2)
0x1b0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1b1: Return(); Pop(0)

0x1b2: PushEmpty()
0x1b3: Push((int) 1)
0x1b4: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x1b5: PushEmpty()
0x1b6: Call2 0x1213

0x1b7: Pop(0)
0x1b8: Push((int) 19713)
0x1b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bb: PushEmpty(object, object)
0x1bc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1be: Call2 0x12a8

0x1bf: Pop(2)
0x1c0: Push((int) 19715)
0x1c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1c3: PushEmpty(object, object)
0x1c4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c6: Call2 0x12ae

0x1c7: Pop(2)
0x1c8: PushEmpty(object, object)
0x1c9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1cb: Call2 0x1363

0x1cc: Pop(2)
0x1cd: PushEmpty(object, object)
0x1ce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d0: Call2 0x1368

0x1d1: Pop(2)
0x1d2: Push((int) 19963)
0x1d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1d5: PushEmpty(object, object)
0x1d6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d8: Call2 0x12ae

0x1d9: Pop(2)
0x1da: PushEmpty(object, object)
0x1db: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1dc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1dd: Call2 0x1363

0x1de: Pop(2)
0x1df: PushEmpty(object, object)
0x1e0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e2: Call2 0x1368

0x1e3: Pop(2)
0x1e4: Push((int) 19712)
0x1e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1e7: PushEmpty(string)
0x1e8: Stack[-1] = "Strange"
0x1e9: Call2 0x19c

0x1ea: Pop(1)
0x1eb: Push((int) 518620)
0x1ec: @@ SetMessage(Stack[-1])
0x1ed: Pop(1)
0x1ee: @@ ClearReplies()
0x1ef: Pop(0)
0x1f0: PushEmpty(bool)
0x1f1: Stack[-1] = (bool) 0
0x1f2: PushEmpty(bool, object)
0x1f3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f4: Call2 0x13eb

0x1f5: Pop(1)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f7: PushEmpty(bool, object)
0x1f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f9: Call2 0x13f7

0x1fa: Pop(1)
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fc: Stack[-1] = (bool) 1
0x1fd: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1fe: Push((int) 518621)
0x1ff: Push((int) 19933)
0x200: Push((int) 19713)
0x201: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x202: Pop(3)
0x203: Push((int) 518624)
0x204: Push((int) -1)
0x205: Push((int) 19716)
0x206: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x207: Pop(3)
0x208: Return(); Pop(0)

0x209: Push((int) 19933)
0x20a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20b: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x20c: PushEmpty(string)
0x20d: Stack[-1] = "Neutral"
0x20e: Call2 0x19c

0x20f: Pop(1)
0x210: Push((int) 518828)
0x211: @@ SetMessage(Stack[-1])
0x212: Pop(1)
0x213: @@ ClearReplies()
0x214: Pop(0)
0x215: Push((int) 518829)
0x216: Push((int) 19935)
0x217: Push((int) 19934)
0x218: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x219: Pop(3)
0x21a: Return(); Pop(0)

0x21b: Push((int) 19935)
0x21c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21d: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x21e: PushEmpty(string)
0x21f: Stack[-1] = "Fear"
0x220: Call2 0x19c

0x221: Pop(1)
0x222: Push((int) 518830)
0x223: @@ SetMessage(Stack[-1])
0x224: Pop(1)
0x225: @@ ClearReplies()
0x226: Pop(0)
0x227: Push((int) 518831)
0x228: Push((int) 19937)
0x229: Push((int) 19936)
0x22a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22b: Pop(3)
0x22c: Push((int) 518845)
0x22d: Push((int) 19951)
0x22e: Push((int) 19950)
0x22f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x230: Pop(3)
0x231: Return(); Pop(0)

0x232: Push((int) 19951)
0x233: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x234: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x235: PushEmpty(string)
0x236: Stack[-1] = "Neutral"
0x237: Call2 0x19c

0x238: Pop(1)
0x239: Push((int) 518846)
0x23a: @@ SetMessage(Stack[-1])
0x23b: Pop(1)
0x23c: @@ ClearReplies()
0x23d: Pop(0)
0x23e: Push((int) 518847)
0x23f: Push((int) 19937)
0x240: Push((int) 19952)
0x241: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x242: Pop(3)
0x243: Push((int) 518848)
0x244: Push((int) 19940)
0x245: Push((int) 19953)
0x246: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x247: Pop(3)
0x248: Return(); Pop(0)

0x249: Push((int) 19937)
0x24a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24b: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x24c: PushEmpty(string)
0x24d: Stack[-1] = "Neutral"
0x24e: Call2 0x19c

0x24f: Pop(1)
0x250: Push((int) 518832)
0x251: @@ SetMessage(Stack[-1])
0x252: Pop(1)
0x253: @@ ClearReplies()
0x254: Pop(0)
0x255: Push((int) 518834)
0x256: Push((int) 19940)
0x257: Push((int) 19939)
0x258: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x259: Pop(3)
0x25a: Return(); Pop(0)

0x25b: Push((int) 19940)
0x25c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x25e: PushEmpty(string)
0x25f: Stack[-1] = "Neutral"
0x260: Call2 0x19c

0x261: Pop(1)
0x262: Push((int) 518835)
0x263: @@ SetMessage(Stack[-1])
0x264: Pop(1)
0x265: @@ ClearReplies()
0x266: Pop(0)
0x267: Push((int) 518837)
0x268: Push((int) 19948)
0x269: Push((int) 19942)
0x26a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26b: Pop(3)
0x26c: Push((int) 518836)
0x26d: Push((int) 19943)
0x26e: Push((int) 19941)
0x26f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x270: Pop(3)
0x271: Return(); Pop(0)

0x272: Push((int) 19943)
0x273: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x274: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x275: PushEmpty(string)
0x276: Stack[-1] = "Neutral"
0x277: Call2 0x19c

0x278: Pop(1)
0x279: Push((int) 518838)
0x27a: @@ SetMessage(Stack[-1])
0x27b: Pop(1)
0x27c: @@ ClearReplies()
0x27d: Pop(0)
0x27e: Push((int) 518841)
0x27f: Push((int) 19954)
0x280: Push((int) 19946)
0x281: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x282: Pop(3)
0x283: Push((int) 518839)
0x284: Push((int) 19945)
0x285: Push((int) 19944)
0x286: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x287: Pop(3)
0x288: Return(); Pop(0)

0x289: Push((int) 19945)
0x28a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28b: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x28c: PushEmpty(string)
0x28d: Stack[-1] = "Grin"
0x28e: Call2 0x19c

0x28f: Pop(1)
0x290: Push((int) 518840)
0x291: @@ SetMessage(Stack[-1])
0x292: Pop(1)
0x293: @@ ClearReplies()
0x294: Pop(0)
0x295: Push((int) 518842)
0x296: Push((int) -1)
0x297: Push((int) 19947)
0x298: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x299: Pop(3)
0x29a: Return(); Pop(0)

0x29b: Push((int) 19954)
0x29c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x29e: PushEmpty(string)
0x29f: Stack[-1] = "Grin"
0x2a0: Call2 0x19c

0x2a1: Pop(1)
0x2a2: Push((int) 518849)
0x2a3: @@ SetMessage(Stack[-1])
0x2a4: Pop(1)
0x2a5: @@ ClearReplies()
0x2a6: Pop(0)
0x2a7: Push((int) 518850)
0x2a8: Push((int) 19956)
0x2a9: Push((int) 19955)
0x2aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ab: Pop(3)
0x2ac: Push((int) 518852)
0x2ad: Push((int) 19956)
0x2ae: Push((int) 19957)
0x2af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b0: Pop(3)
0x2b1: Return(); Pop(0)

0x2b2: Push((int) 19956)
0x2b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2b5: PushEmpty(string)
0x2b6: Stack[-1] = "Neutral"
0x2b7: Call2 0x19c

0x2b8: Pop(1)
0x2b9: Push((int) 518851)
0x2ba: @@ SetMessage(Stack[-1])
0x2bb: Pop(1)
0x2bc: @@ ClearReplies()
0x2bd: Pop(0)
0x2be: Push((int) 518853)
0x2bf: Push((int) 19714)
0x2c0: Push((int) 19959)
0x2c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c2: Pop(3)
0x2c3: Return(); Pop(0)

0x2c4: Push((int) 19948)
0x2c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2c7: PushEmpty(string)
0x2c8: Stack[-1] = "Grimacing"
0x2c9: Call2 0x19c

0x2ca: Pop(1)
0x2cb: Push((int) 518843)
0x2cc: @@ SetMessage(Stack[-1])
0x2cd: Pop(1)
0x2ce: @@ ClearReplies()
0x2cf: Pop(0)
0x2d0: Push((int) 518844)
0x2d1: Push((int) 19714)
0x2d2: Push((int) 19949)
0x2d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d4: Pop(3)
0x2d5: Return(); Pop(0)

0x2d6: Push((int) 19714)
0x2d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2d9: Push((int) 518622)
0x2da: @@ SetMessage(Stack[-1])
0x2db: Pop(1)
0x2dc: @@ ClearReplies()
0x2dd: Pop(0)
0x2de: Push((int) 518623)
0x2df: Push((int) -1)
0x2e0: Push((int) 19715)
0x2e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e2: Pop(3)
0x2e3: Push((int) 518854)
0x2e4: Push((int) 19962)
0x2e5: Push((int) 19961)
0x2e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e7: Pop(3)
0x2e8: Return(); Pop(0)

0x2e9: Push((int) 19962)
0x2ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2ec: PushEmpty(string)
0x2ed: Stack[-1] = "Neutral"
0x2ee: Call2 0x19c

0x2ef: Pop(1)
0x2f0: Push((int) 518855)
0x2f1: @@ SetMessage(Stack[-1])
0x2f2: Pop(1)
0x2f3: @@ ClearReplies()
0x2f4: Pop(0)
0x2f5: Push((int) 518856)
0x2f6: Push((int) -1)
0x2f7: Push((int) 19963)
0x2f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f9: Pop(3)
0x2fa: Return(); Pop(0)

0x2fb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2fc: PushEmpty(bool)
0x2fd: Call2 0x12a6

0x2fe: Pop(0)
0x2ff: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x300: @ lshStopAnimation()
0x301: Pop(0)
0x302: GOTO 0x305

0x303: @ StopAnimation()
0x304: Pop(0)
0x305: Return(); Pop(0)

0x306: GOTO 0x1b3

0x307: Return(); Pop(0)

0x308: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x309: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x30a: PushEmpty(bool, object, float)
0x30b: Stack[-2] = Stack[-12]
0x30c: Stack[-1] = (float) 70.0
0x30d: Call2 0x1106

0x30e: Pop(2)
0x30f: Pop(1); Push((bool) Stack[-1] == 0)
0x310: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x311: Stack[-10] = (int) -2
0x312: Return(); Pop(8)

0x313: @ CreateDialog(Stack[-4])
0x314: Pop(0)
0x315: PushEmpty(int)
0x316: Call2 0x12a0

0x317: Pop(0)
0x318: @@ SetNPCName(Stack[-1])
0x319: Pop(1)
0x31a: PushEmpty(int)
0x31b: Call2 0x129e

0x31c: Pop(0)
0x31d: @@ SetNPCDescription(Stack[-1])
0x31e: Pop(1)
0x31f: PushEmpty(string)
0x320: Call2 0x12a2

0x321: Pop(0)
0x322: @@ SetPhoto(Stack[-1])
0x323: Pop(1)
0x324: PushEmpty(string)
0x325: Call2 0x12a4

0x326: Pop(0)
0x327: @@ SetPhoto2(Stack[-1])
0x328: Pop(1)
0x329: PushEmpty(int)
0x32a: Call2 0x14e6

0x32b: Pop(0)
0x32c: @@ SetPlayerName(Stack[-1])
0x32d: Pop(1)
0x32e: Stack[-2] = (int) -1
0x32f: @ IsOverrideActive(Stack[-3])
0x330: Pop(0)
0x331: Push(Stack[-3])
0x332: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x333: Stack[-10] = (int) -2
0x334: Return(); Pop(8)

0x335: @ DoDialog(Stack[-4])
0x336: Pop(0)
0x337: PushEmpty(bool, object)
0x338: PushEmpty(object)
0x339: Call2 0x121a

0x33a: Stack[-2] = Stack[-1]
0x33b: Pop(1)
0x33c: Call2 0x115b

0x33d: Pop(2)
0x33e: PushEmpty(object, object)
0x33f: Stack[-2] = Stack[-11]
0x340: Stack[-1] = Stack[-6]
0x341: Push(-2, 4); TaskCall(5)
0x342: Call2 0x359

0x343: Pop(-2, 4); TaskReturn
0x344: Pop(2)
0x345: @@ IsDialogEnd(Stack[-1])
0x346: Pop(0)
0x347: Pop(0); Push((bool) Stack[-1] == 0)
0x348: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x349: @ sync()
0x34a: Pop(0)
0x34b: @@ IsDialogEnd(Stack[-1])
0x34c: Pop(0)
0x34d: GOTO 0x347

0x34e: PushEmpty(object)
0x34f: Stack[-1] = Stack[-10]
0x350: Call2 0x114a

0x351: Pop(1)
0x352: @ StopDialog(Stack[-4])
0x353: Pop(0)
0x354: @@ GetReturnValue(Stack[-2])
0x355: Pop(0)
0x356: Stack[-10] = Stack[-2]
0x357: Return(); Pop(8)

0x358: Stack[-4] = 0
0x359: PushEmpty()
0x35a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x35b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x35c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x35d: Push((int) 1)
0x35e: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x35f: PushEmpty(string)
0x360: Stack[-1] = "Neutral"
0x361: Call2 0x3a2

0x362: Pop(1)
0x363: Push((int) 519273)
0x364: @@ SetMessage(Stack[-1])
0x365: Pop(1)
0x366: @@ ClearReplies()
0x367: Pop(0)
0x368: PushEmpty(bool, object)
0x369: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36a: Call2 0x140f

0x36b: Pop(1)
0x36c: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x36d: Push((int) 519274)
0x36e: Push((int) 20428)
0x36f: Push((int) 20426)
0x370: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x371: Pop(3)
0x372: PushEmpty(bool, object)
0x373: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x374: Call2 0x1403

0x375: Pop(1)
0x376: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x377: Push((int) 519289)
0x378: Push((int) 20444)
0x379: Push((int) 20443)
0x37a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37b: Pop(3)
0x37c: Push((int) 519275)
0x37d: Push((int) -1)
0x37e: Push((int) 20427)
0x37f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x380: Pop(3)
0x381: GOTO 0x384

0x382: Return(); Pop(0)

0x383: GOTO 0x35d

0x384: PushEmpty(bool)
0x385: Call2 0x12a6

0x386: Pop(0)
0x387: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x388: @ lshWaitForAnimEnd()
0x389: Pop(0)
0x38a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x38b: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x38c: GOTO 0x392

0x38d: PushEmpty(string)
0x38e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x38f: Call2 0x11e5

0x390: Pop(1)
0x391: GOTO 0x388

0x392: GOTO 0x3a1

0x393: Push("all")
0x394: Push("idle")
0x395: @ PlayAnimation(Stack[-2], Stack[-1])
0x396: Pop(2)
0x397: @ WaitForAnimEnd()
0x398: Pop(0)
0x399: Push( Stack[3 + Tasks[-1].StackPointer] )
0x39a: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x39b: GOTO 0x3a1

0x39c: Push("all")
0x39d: Push("idle")
0x39e: @ PlayAnimation(Stack[-2], Stack[-1])
0x39f: Pop(2)
0x3a0: GOTO 0x397

0x3a1: Return(); Pop(0)

0x3a2: PushEmpty()
0x3a3: PushEmpty(bool)
0x3a4: Call2 0x12a6

0x3a5: Pop(0)
0x3a6: Pop(1); Push((bool) Stack[-1] == 0)
0x3a7: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a8: Return(); Pop(0)

0x3a9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3ab: Return(); Pop(0)

0x3ac: PushEmpty(string, bool)
0x3ad: Stack[-2] = Stack[-3]
0x3ae: Push("")
0x3af: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b1: Stack[-1] = (bool) 0
0x3b2: GOTO 0x3b4

0x3b3: Stack[-1] = (bool) 1
0x3b4: Call2 0x11f5

0x3b5: Pop(2)
0x3b6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3b7: Return(); Pop(0)

0x3b8: PushEmpty()
0x3b9: Push((int) 1)
0x3ba: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x3bb: PushEmpty()
0x3bc: Call2 0x1213

0x3bd: Pop(0)
0x3be: Push((int) 20446)
0x3bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c1: PushEmpty(object, object)
0x3c2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3c3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3c4: Call2 0x12d4

0x3c5: Pop(2)
0x3c6: PushEmpty(object, object)
0x3c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3c9: Call2 0x12f0

0x3ca: Pop(2)
0x3cb: Push((int) 20443)
0x3cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3ce: PushEmpty(object, object)
0x3cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d1: Call2 0x12ce

0x3d2: Pop(2)
0x3d3: Push((int) 20425)
0x3d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3d6: PushEmpty(string)
0x3d7: Stack[-1] = "Neutral"
0x3d8: Call2 0x3a2

0x3d9: Pop(1)
0x3da: Push((int) 519273)
0x3db: @@ SetMessage(Stack[-1])
0x3dc: Pop(1)
0x3dd: @@ ClearReplies()
0x3de: Pop(0)
0x3df: PushEmpty(bool, object)
0x3e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e1: Call2 0x140f

0x3e2: Pop(1)
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e4: Push((int) 519274)
0x3e5: Push((int) 20428)
0x3e6: Push((int) 20426)
0x3e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e8: Pop(3)
0x3e9: PushEmpty(bool, object)
0x3ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3eb: Call2 0x1403

0x3ec: Pop(1)
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3ee: Push((int) 519289)
0x3ef: Push((int) 20444)
0x3f0: Push((int) 20443)
0x3f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f2: Pop(3)
0x3f3: Push((int) 519275)
0x3f4: Push((int) -1)
0x3f5: Push((int) 20427)
0x3f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f7: Pop(3)
0x3f8: Return(); Pop(0)

0x3f9: Push((int) 20444)
0x3fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fb: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x3fc: PushEmpty(string)
0x3fd: Stack[-1] = "Neutral"
0x3fe: Call2 0x3a2

0x3ff: Pop(1)
0x400: Push((int) 519290)
0x401: @@ SetMessage(Stack[-1])
0x402: Pop(1)
0x403: @@ ClearReplies()
0x404: Pop(0)
0x405: Push((int) 519291)
0x406: Push((int) -1)
0x407: Push((int) 20445)
0x408: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x409: Pop(3)
0x40a: Return(); Pop(0)

0x40b: Push((int) 20428)
0x40c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40d: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x40e: PushEmpty(string)
0x40f: Stack[-1] = "Neutral"
0x410: Call2 0x3a2

0x411: Pop(1)
0x412: Push((int) 519276)
0x413: @@ SetMessage(Stack[-1])
0x414: Pop(1)
0x415: @@ ClearReplies()
0x416: Pop(0)
0x417: Push((int) 519277)
0x418: Push((int) 20432)
0x419: Push((int) 20429)
0x41a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41b: Pop(3)
0x41c: Push((int) 519278)
0x41d: Push((int) 20431)
0x41e: Push((int) 20430)
0x41f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x420: Pop(3)
0x421: Return(); Pop(0)

0x422: Push((int) 20431)
0x423: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x424: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x425: PushEmpty(string)
0x426: Stack[-1] = "Neutral"
0x427: Call2 0x3a2

0x428: Pop(1)
0x429: Push((int) 519279)
0x42a: @@ SetMessage(Stack[-1])
0x42b: Pop(1)
0x42c: @@ ClearReplies()
0x42d: Pop(0)
0x42e: Push((int) 519281)
0x42f: Push((int) 20432)
0x430: Push((int) 20433)
0x431: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x432: Pop(3)
0x433: Return(); Pop(0)

0x434: Push((int) 20432)
0x435: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x436: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x437: PushEmpty(string)
0x438: Stack[-1] = "Neutral"
0x439: Call2 0x3a2

0x43a: Pop(1)
0x43b: Push((int) 519280)
0x43c: @@ SetMessage(Stack[-1])
0x43d: Pop(1)
0x43e: @@ ClearReplies()
0x43f: Pop(0)
0x440: Push((int) 519282)
0x441: Push((int) 20436)
0x442: Push((int) 20435)
0x443: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x444: Pop(3)
0x445: Push((int) 527864)
0x446: Push((int) 20439)
0x447: Push((int) 29209)
0x448: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x449: Pop(3)
0x44a: Return(); Pop(0)

0x44b: Push((int) 20436)
0x44c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x44e: PushEmpty(string)
0x44f: Stack[-1] = "Neutral"
0x450: Call2 0x3a2

0x451: Pop(1)
0x452: Push((int) 519283)
0x453: @@ SetMessage(Stack[-1])
0x454: Pop(1)
0x455: @@ ClearReplies()
0x456: Pop(0)
0x457: Push((int) 519284)
0x458: Push((int) 20441)
0x459: Push((int) 20437)
0x45a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45b: Pop(3)
0x45c: Push((int) 519285)
0x45d: Push((int) 20439)
0x45e: Push((int) 20438)
0x45f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x460: Pop(3)
0x461: Return(); Pop(0)

0x462: Push((int) 20439)
0x463: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x464: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x465: PushEmpty(string)
0x466: Stack[-1] = "Neutral"
0x467: Call2 0x3a2

0x468: Pop(1)
0x469: Push((int) 519286)
0x46a: @@ SetMessage(Stack[-1])
0x46b: Pop(1)
0x46c: @@ ClearReplies()
0x46d: Pop(0)
0x46e: Push((int) 519287)
0x46f: Push((int) 20441)
0x470: Push((int) 20440)
0x471: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x472: Pop(3)
0x473: Return(); Pop(0)

0x474: Push((int) 20441)
0x475: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x476: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x477: PushEmpty(string)
0x478: Stack[-1] = "Neutral"
0x479: Call2 0x3a2

0x47a: Pop(1)
0x47b: Push((int) 519288)
0x47c: @@ SetMessage(Stack[-1])
0x47d: Pop(1)
0x47e: @@ ClearReplies()
0x47f: Pop(0)
0x480: Push((int) 519292)
0x481: Push((int) -1)
0x482: Push((int) 20446)
0x483: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x484: Pop(3)
0x485: Return(); Pop(0)

0x486: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x487: PushEmpty(bool)
0x488: Call2 0x12a6

0x489: Pop(0)
0x48a: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48b: @ lshStopAnimation()
0x48c: Pop(0)
0x48d: GOTO 0x490

0x48e: @ StopAnimation()
0x48f: Pop(0)
0x490: Return(); Pop(0)

0x491: GOTO 0x3b9

0x492: Return(); Pop(0)

0x493: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x494: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x495: PushEmpty(bool, object, float)
0x496: Stack[-2] = Stack[-12]
0x497: Stack[-1] = (float) 70.0
0x498: Call2 0x1106

0x499: Pop(2)
0x49a: Pop(1); Push((bool) Stack[-1] == 0)
0x49b: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x49c: Stack[-10] = (int) -2
0x49d: Return(); Pop(8)

0x49e: @ CreateDialog(Stack[-4])
0x49f: Pop(0)
0x4a0: PushEmpty(int)
0x4a1: Call2 0x12a0

0x4a2: Pop(0)
0x4a3: @@ SetNPCName(Stack[-1])
0x4a4: Pop(1)
0x4a5: PushEmpty(int)
0x4a6: Call2 0x129e

0x4a7: Pop(0)
0x4a8: @@ SetNPCDescription(Stack[-1])
0x4a9: Pop(1)
0x4aa: PushEmpty(string)
0x4ab: Call2 0x12a2

0x4ac: Pop(0)
0x4ad: @@ SetPhoto(Stack[-1])
0x4ae: Pop(1)
0x4af: PushEmpty(string)
0x4b0: Call2 0x12a4

0x4b1: Pop(0)
0x4b2: @@ SetPhoto2(Stack[-1])
0x4b3: Pop(1)
0x4b4: PushEmpty(int)
0x4b5: Call2 0x14e6

0x4b6: Pop(0)
0x4b7: @@ SetPlayerName(Stack[-1])
0x4b8: Pop(1)
0x4b9: Stack[-2] = (int) -1
0x4ba: @ IsOverrideActive(Stack[-3])
0x4bb: Pop(0)
0x4bc: Push(Stack[-3])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4be: Stack[-10] = (int) -2
0x4bf: Return(); Pop(8)

0x4c0: @ DoDialog(Stack[-4])
0x4c1: Pop(0)
0x4c2: PushEmpty(bool, object)
0x4c3: PushEmpty(object)
0x4c4: Call2 0x121a

0x4c5: Stack[-2] = Stack[-1]
0x4c6: Pop(1)
0x4c7: Call2 0x115b

0x4c8: Pop(2)
0x4c9: PushEmpty(object, object)
0x4ca: Stack[-2] = Stack[-11]
0x4cb: Stack[-1] = Stack[-6]
0x4cc: Push(-2, 4); TaskCall(7)
0x4cd: Call2 0x4e4

0x4ce: Pop(-2, 4); TaskReturn
0x4cf: Pop(2)
0x4d0: @@ IsDialogEnd(Stack[-1])
0x4d1: Pop(0)
0x4d2: Pop(0); Push((bool) Stack[-1] == 0)
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d4: @ sync()
0x4d5: Pop(0)
0x4d6: @@ IsDialogEnd(Stack[-1])
0x4d7: Pop(0)
0x4d8: GOTO 0x4d2

0x4d9: PushEmpty(object)
0x4da: Stack[-1] = Stack[-10]
0x4db: Call2 0x114a

0x4dc: Pop(1)
0x4dd: @ StopDialog(Stack[-4])
0x4de: Pop(0)
0x4df: @@ GetReturnValue(Stack[-2])
0x4e0: Pop(0)
0x4e1: Stack[-10] = Stack[-2]
0x4e2: Return(); Pop(8)

0x4e3: Stack[-4] = 0
0x4e4: PushEmpty()
0x4e5: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4e6: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4e7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e8: Push((int) 1)
0x4e9: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x4ea: PushEmpty(bool, object)
0x4eb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ec: Call2 0x141b

0x4ed: Pop(1)
0x4ee: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x4ef: PushEmpty(string)
0x4f0: Stack[-1] = "Neutral"
0x4f1: Call2 0x55a

0x4f2: Pop(1)
0x4f3: Push((int) 520279)
0x4f4: @@ SetMessage(Stack[-1])
0x4f5: Pop(1)
0x4f6: @@ ClearReplies()
0x4f7: Pop(0)
0x4f8: Push((int) 520280)
0x4f9: Push((int) 21473)
0x4fa: Push((int) 21472)
0x4fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fc: Pop(3)
0x4fd: Push((int) 520299)
0x4fe: Push((int) 21475)
0x4ff: Push((int) 21493)
0x500: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x501: Pop(3)
0x502: GOTO 0x53c

0x503: PushEmpty(string)
0x504: Stack[-1] = "Neutral"
0x505: Call2 0x55a

0x506: Pop(1)
0x507: Push((int) 520300)
0x508: @@ SetMessage(Stack[-1])
0x509: Pop(1)
0x50a: @@ ClearReplies()
0x50b: Pop(0)
0x50c: PushEmpty(bool, object)
0x50d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x50e: Call2 0x1427

0x50f: Pop(1)
0x510: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x511: Push((int) 520301)
0x512: Push((int) 21497)
0x513: Push((int) 21496)
0x514: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x515: Pop(3)
0x516: PushEmpty(bool, object)
0x517: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x518: Call2 0x1433

0x519: Pop(1)
0x51a: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51b: Push((int) 520317)
0x51c: Push((int) 21513)
0x51d: Push((int) 21512)
0x51e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51f: Pop(3)
0x520: PushEmpty(bool, object)
0x521: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x522: Call2 0x143f

0x523: Pop(1)
0x524: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x525: Push((int) 520324)
0x526: Push((int) 21520)
0x527: Push((int) 21519)
0x528: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x529: Pop(3)
0x52a: PushEmpty(bool, object)
0x52b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52c: Call2 0x144b

0x52d: Pop(1)
0x52e: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x52f: Push((int) 520327)
0x530: Push((int) 21523)
0x531: Push((int) 21522)
0x532: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x533: Pop(3)
0x534: Push((int) 520330)
0x535: Push((int) -1)
0x536: Push((int) 21525)
0x537: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x538: Pop(3)
0x539: GOTO 0x53c

0x53a: Return(); Pop(0)

0x53b: GOTO 0x4e8

0x53c: PushEmpty(bool)
0x53d: Call2 0x12a6

0x53e: Pop(0)
0x53f: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x540: @ lshWaitForAnimEnd()
0x541: Pop(0)
0x542: Push( Stack[3 + Tasks[-1].StackPointer] )
0x543: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x544: GOTO 0x54a

0x545: PushEmpty(string)
0x546: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x547: Call2 0x11e5

0x548: Pop(1)
0x549: GOTO 0x540

0x54a: GOTO 0x559

0x54b: Push("all")
0x54c: Push("idle")
0x54d: @ PlayAnimation(Stack[-2], Stack[-1])
0x54e: Pop(2)
0x54f: @ WaitForAnimEnd()
0x550: Pop(0)
0x551: Push( Stack[3 + Tasks[-1].StackPointer] )
0x552: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x553: GOTO 0x559

0x554: Push("all")
0x555: Push("idle")
0x556: @ PlayAnimation(Stack[-2], Stack[-1])
0x557: Pop(2)
0x558: GOTO 0x54f

0x559: Return(); Pop(0)

0x55a: PushEmpty()
0x55b: PushEmpty(bool)
0x55c: Call2 0x12a6

0x55d: Pop(0)
0x55e: Pop(1); Push((bool) Stack[-1] == 0)
0x55f: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x560: Return(); Pop(0)

0x561: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x562: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x563: Return(); Pop(0)

0x564: PushEmpty(string, bool)
0x565: Stack[-2] = Stack[-3]
0x566: Push("")
0x567: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x568: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x569: Stack[-1] = (bool) 0
0x56a: GOTO 0x56c

0x56b: Stack[-1] = (bool) 1
0x56c: Call2 0x11f5

0x56d: Pop(2)
0x56e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x56f: Return(); Pop(0)

0x570: PushEmpty()
0x571: Push((int) 1)
0x572: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x573: PushEmpty()
0x574: Call2 0x1213

0x575: Pop(0)
0x576: Push((int) 21486)
0x577: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x578: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x579: PushEmpty(object, object)
0x57a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x57c: Call2 0x137e

0x57d: Pop(2)
0x57e: Push((int) 21480)
0x57f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x580: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x581: PushEmpty(object, object)
0x582: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x583: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x584: Call2 0x137e

0x585: Pop(2)
0x586: Push((int) 21481)
0x587: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x588: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x589: PushEmpty(object, object)
0x58a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x58b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58c: Call2 0x137e

0x58d: Pop(2)
0x58e: Push((int) 21496)
0x58f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x590: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x591: PushEmpty(object, object)
0x592: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x593: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x594: Call2 0x1300

0x595: Pop(2)
0x596: Push((int) 21512)
0x597: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x598: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x599: PushEmpty(object, object)
0x59a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x59b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x59c: Call2 0x1306

0x59d: Pop(2)
0x59e: Push((int) 21518)
0x59f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a1: PushEmpty(object, object)
0x5a2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a4: Call2 0x1318

0x5a5: Pop(2)
0x5a6: Push((int) 21519)
0x5a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a8: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5a9: PushEmpty(object, object)
0x5aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ac: Call2 0x130c

0x5ad: Pop(2)
0x5ae: Push((int) 21522)
0x5af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b1: PushEmpty(object, object)
0x5b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5b4: Call2 0x1312

0x5b5: Pop(2)
0x5b6: Push((int) 21471)
0x5b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b8: IF (Stack[-1] == 0) GOTO 0x609; Pop(1)

0x5b9: PushEmpty(bool, object)
0x5ba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5bb: Call2 0x141b

0x5bc: Pop(1)
0x5bd: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5be: PushEmpty(string)
0x5bf: Stack[-1] = "Neutral"
0x5c0: Call2 0x55a

0x5c1: Pop(1)
0x5c2: Push((int) 520279)
0x5c3: @@ SetMessage(Stack[-1])
0x5c4: Pop(1)
0x5c5: @@ ClearReplies()
0x5c6: Pop(0)
0x5c7: Push((int) 520280)
0x5c8: Push((int) 21473)
0x5c9: Push((int) 21472)
0x5ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cb: Pop(3)
0x5cc: Push((int) 520299)
0x5cd: Push((int) 21475)
0x5ce: Push((int) 21493)
0x5cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d0: Pop(3)
0x5d1: Return(); Pop(0)

0x5d2: PushEmpty(string)
0x5d3: Stack[-1] = "Neutral"
0x5d4: Call2 0x55a

0x5d5: Pop(1)
0x5d6: Push((int) 520300)
0x5d7: @@ SetMessage(Stack[-1])
0x5d8: Pop(1)
0x5d9: @@ ClearReplies()
0x5da: Pop(0)
0x5db: PushEmpty(bool, object)
0x5dc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5dd: Call2 0x1427

0x5de: Pop(1)
0x5df: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5e0: Push((int) 520301)
0x5e1: Push((int) 21497)
0x5e2: Push((int) 21496)
0x5e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e4: Pop(3)
0x5e5: PushEmpty(bool, object)
0x5e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5e7: Call2 0x1433

0x5e8: Pop(1)
0x5e9: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ea: Push((int) 520317)
0x5eb: Push((int) 21513)
0x5ec: Push((int) 21512)
0x5ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ee: Pop(3)
0x5ef: PushEmpty(bool, object)
0x5f0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5f1: Call2 0x143f

0x5f2: Pop(1)
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f4: Push((int) 520324)
0x5f5: Push((int) 21520)
0x5f6: Push((int) 21519)
0x5f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f8: Pop(3)
0x5f9: PushEmpty(bool, object)
0x5fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5fb: Call2 0x144b

0x5fc: Pop(1)
0x5fd: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x5fe: Push((int) 520327)
0x5ff: Push((int) 21523)
0x600: Push((int) 21522)
0x601: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x602: Pop(3)
0x603: Push((int) 520330)
0x604: Push((int) -1)
0x605: Push((int) 21525)
0x606: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x607: Pop(3)
0x608: Return(); Pop(0)

0x609: Push((int) 21523)
0x60a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x60b: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x60c: PushEmpty(string)
0x60d: Stack[-1] = "Neutral"
0x60e: Call2 0x55a

0x60f: Pop(1)
0x610: Push((int) 520328)
0x611: @@ SetMessage(Stack[-1])
0x612: Pop(1)
0x613: @@ ClearReplies()
0x614: Pop(0)
0x615: Push((int) 527820)
0x616: Push((int) 29160)
0x617: Push((int) 29159)
0x618: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x619: Pop(3)
0x61a: Return(); Pop(0)

0x61b: Push((int) 29160)
0x61c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61d: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x61e: PushEmpty(string)
0x61f: Stack[-1] = "Neutral"
0x620: Call2 0x55a

0x621: Pop(1)
0x622: Push((int) 527821)
0x623: @@ SetMessage(Stack[-1])
0x624: Pop(1)
0x625: @@ ClearReplies()
0x626: Pop(0)
0x627: Push((int) 527822)
0x628: Push((int) 29162)
0x629: Push((int) 29161)
0x62a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62b: Pop(3)
0x62c: Return(); Pop(0)

0x62d: Push((int) 29162)
0x62e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62f: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x630: PushEmpty(string)
0x631: Stack[-1] = "Neutral"
0x632: Call2 0x55a

0x633: Pop(1)
0x634: Push((int) 527823)
0x635: @@ SetMessage(Stack[-1])
0x636: Pop(1)
0x637: @@ ClearReplies()
0x638: Pop(0)
0x639: Push((int) 520329)
0x63a: Push((int) -1)
0x63b: Push((int) 21524)
0x63c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63d: Pop(3)
0x63e: Return(); Pop(0)

0x63f: Push((int) 21520)
0x640: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x641: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x642: PushEmpty(string)
0x643: Stack[-1] = "Neutral"
0x644: Call2 0x55a

0x645: Pop(1)
0x646: Push((int) 520325)
0x647: @@ SetMessage(Stack[-1])
0x648: Pop(1)
0x649: @@ ClearReplies()
0x64a: Pop(0)
0x64b: Push((int) 527824)
0x64c: Push((int) 29164)
0x64d: Push((int) 29163)
0x64e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64f: Pop(3)
0x650: Push((int) 520326)
0x651: Push((int) -1)
0x652: Push((int) 21521)
0x653: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x654: Pop(3)
0x655: Return(); Pop(0)

0x656: Push((int) 29164)
0x657: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x658: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x659: PushEmpty(string)
0x65a: Stack[-1] = "Neutral"
0x65b: Call2 0x55a

0x65c: Pop(1)
0x65d: Push((int) 527825)
0x65e: @@ SetMessage(Stack[-1])
0x65f: Pop(1)
0x660: @@ ClearReplies()
0x661: Pop(0)
0x662: Push((int) 527826)
0x663: Push((int) -1)
0x664: Push((int) 29165)
0x665: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x666: Pop(3)
0x667: Push((int) 527827)
0x668: Push((int) -1)
0x669: Push((int) 29166)
0x66a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66b: Pop(3)
0x66c: Return(); Pop(0)

0x66d: Push((int) 21513)
0x66e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x66f: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x670: PushEmpty(string)
0x671: Stack[-1] = "Neutral"
0x672: Call2 0x55a

0x673: Pop(1)
0x674: Push((int) 520318)
0x675: @@ SetMessage(Stack[-1])
0x676: Pop(1)
0x677: @@ ClearReplies()
0x678: Pop(0)
0x679: Push((int) 520319)
0x67a: Push((int) 21515)
0x67b: Push((int) 21514)
0x67c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67d: Pop(3)
0x67e: Return(); Pop(0)

0x67f: Push((int) 21515)
0x680: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x681: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x682: PushEmpty(string)
0x683: Stack[-1] = "Neutral"
0x684: Call2 0x55a

0x685: Pop(1)
0x686: Push((int) 520320)
0x687: @@ SetMessage(Stack[-1])
0x688: Pop(1)
0x689: @@ ClearReplies()
0x68a: Pop(0)
0x68b: Push((int) 527818)
0x68c: Push((int) 29158)
0x68d: Push((int) 29157)
0x68e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68f: Pop(3)
0x690: Return(); Pop(0)

0x691: Push((int) 29158)
0x692: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x693: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x694: PushEmpty(string)
0x695: Stack[-1] = "Neutral"
0x696: Call2 0x55a

0x697: Pop(1)
0x698: Push((int) 527819)
0x699: @@ SetMessage(Stack[-1])
0x69a: Pop(1)
0x69b: @@ ClearReplies()
0x69c: Pop(0)
0x69d: Push((int) 520321)
0x69e: Push((int) 21517)
0x69f: Push((int) 21516)
0x6a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a1: Pop(3)
0x6a2: Return(); Pop(0)

0x6a3: Push((int) 21517)
0x6a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a5: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6a6: PushEmpty(string)
0x6a7: Stack[-1] = "Neutral"
0x6a8: Call2 0x55a

0x6a9: Pop(1)
0x6aa: Push((int) 520322)
0x6ab: @@ SetMessage(Stack[-1])
0x6ac: Pop(1)
0x6ad: @@ ClearReplies()
0x6ae: Pop(0)
0x6af: Push((int) 520323)
0x6b0: Push((int) -1)
0x6b1: Push((int) 21518)
0x6b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b3: Pop(3)
0x6b4: Return(); Pop(0)

0x6b5: Push((int) 21497)
0x6b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b7: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6b8: PushEmpty(string)
0x6b9: Stack[-1] = "Neutral"
0x6ba: Call2 0x55a

0x6bb: Pop(1)
0x6bc: Push((int) 520302)
0x6bd: @@ SetMessage(Stack[-1])
0x6be: Pop(1)
0x6bf: @@ ClearReplies()
0x6c0: Pop(0)
0x6c1: Push((int) 520303)
0x6c2: Push((int) 21499)
0x6c3: Push((int) 21498)
0x6c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c5: Pop(3)
0x6c6: Push((int) 527811)
0x6c7: Push((int) 29150)
0x6c8: Push((int) 29149)
0x6c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ca: Pop(3)
0x6cb: Return(); Pop(0)

0x6cc: Push((int) 29150)
0x6cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ce: IF (Stack[-1] == 0) GOTO 0x6de; Pop(1)

0x6cf: PushEmpty(string)
0x6d0: Stack[-1] = "Neutral"
0x6d1: Call2 0x55a

0x6d2: Pop(1)
0x6d3: Push((int) 527812)
0x6d4: @@ SetMessage(Stack[-1])
0x6d5: Pop(1)
0x6d6: @@ ClearReplies()
0x6d7: Pop(0)
0x6d8: Push((int) 527813)
0x6d9: Push((int) 29152)
0x6da: Push((int) 29151)
0x6db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6dc: Pop(3)
0x6dd: Return(); Pop(0)

0x6de: Push((int) 29152)
0x6df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e0: IF (Stack[-1] == 0) GOTO 0x6f0; Pop(1)

0x6e1: PushEmpty(string)
0x6e2: Stack[-1] = "Neutral"
0x6e3: Call2 0x55a

0x6e4: Pop(1)
0x6e5: Push((int) 527814)
0x6e6: @@ SetMessage(Stack[-1])
0x6e7: Pop(1)
0x6e8: @@ ClearReplies()
0x6e9: Pop(0)
0x6ea: Push((int) 527815)
0x6eb: Push((int) 29154)
0x6ec: Push((int) 29153)
0x6ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ee: Pop(3)
0x6ef: Return(); Pop(0)

0x6f0: Push((int) 29154)
0x6f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f2: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x6f3: PushEmpty(string)
0x6f4: Stack[-1] = "Neutral"
0x6f5: Call2 0x55a

0x6f6: Pop(1)
0x6f7: Push((int) 527816)
0x6f8: @@ SetMessage(Stack[-1])
0x6f9: Pop(1)
0x6fa: @@ ClearReplies()
0x6fb: Pop(0)
0x6fc: Push((int) 527817)
0x6fd: Push((int) 21499)
0x6fe: Push((int) 29155)
0x6ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x700: Pop(3)
0x701: Return(); Pop(0)

0x702: Push((int) 21499)
0x703: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x704: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x705: PushEmpty(string)
0x706: Stack[-1] = "Neutral"
0x707: Call2 0x55a

0x708: Pop(1)
0x709: Push((int) 520304)
0x70a: @@ SetMessage(Stack[-1])
0x70b: Pop(1)
0x70c: @@ ClearReplies()
0x70d: Pop(0)
0x70e: Push((int) 520305)
0x70f: Push((int) 21501)
0x710: Push((int) 21500)
0x711: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x712: Pop(3)
0x713: Push((int) 520311)
0x714: Push((int) 21507)
0x715: Push((int) 21506)
0x716: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x717: Pop(3)
0x718: Return(); Pop(0)

0x719: Push((int) 21507)
0x71a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x71b: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x71c: PushEmpty(string)
0x71d: Stack[-1] = "Neutral"
0x71e: Call2 0x55a

0x71f: Pop(1)
0x720: Push((int) 520312)
0x721: @@ SetMessage(Stack[-1])
0x722: Pop(1)
0x723: @@ ClearReplies()
0x724: Pop(0)
0x725: Push((int) 520313)
0x726: Push((int) 21509)
0x727: Push((int) 21508)
0x728: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x729: Pop(3)
0x72a: Return(); Pop(0)

0x72b: Push((int) 21509)
0x72c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x72d: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x72e: PushEmpty(string)
0x72f: Stack[-1] = "Neutral"
0x730: Call2 0x55a

0x731: Pop(1)
0x732: Push((int) 520314)
0x733: @@ SetMessage(Stack[-1])
0x734: Pop(1)
0x735: @@ ClearReplies()
0x736: Pop(0)
0x737: Push((int) 520315)
0x738: Push((int) -1)
0x739: Push((int) 21510)
0x73a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73b: Pop(3)
0x73c: Push((int) 520316)
0x73d: Push((int) -1)
0x73e: Push((int) 21511)
0x73f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x740: Pop(3)
0x741: Return(); Pop(0)

0x742: Push((int) 21501)
0x743: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x744: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x745: PushEmpty(string)
0x746: Stack[-1] = "Neutral"
0x747: Call2 0x55a

0x748: Pop(1)
0x749: Push((int) 520306)
0x74a: @@ SetMessage(Stack[-1])
0x74b: Pop(1)
0x74c: @@ ClearReplies()
0x74d: Pop(0)
0x74e: Push((int) 520307)
0x74f: Push((int) -1)
0x750: Push((int) 21502)
0x751: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x752: Pop(3)
0x753: Push((int) 520308)
0x754: Push((int) 21504)
0x755: Push((int) 21503)
0x756: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x757: Pop(3)
0x758: Return(); Pop(0)

0x759: Push((int) 21504)
0x75a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x75b: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x75c: PushEmpty(string)
0x75d: Stack[-1] = "Neutral"
0x75e: Call2 0x55a

0x75f: Pop(1)
0x760: Push((int) 520309)
0x761: @@ SetMessage(Stack[-1])
0x762: Pop(1)
0x763: @@ ClearReplies()
0x764: Pop(0)
0x765: Push((int) 520310)
0x766: Push((int) -1)
0x767: Push((int) 21505)
0x768: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x769: Pop(3)
0x76a: Return(); Pop(0)

0x76b: Push((int) 21473)
0x76c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x76d: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x76e: PushEmpty(string)
0x76f: Stack[-1] = "Neutral"
0x770: Call2 0x55a

0x771: Pop(1)
0x772: Push((int) 520281)
0x773: @@ SetMessage(Stack[-1])
0x774: Pop(1)
0x775: @@ ClearReplies()
0x776: Pop(0)
0x777: Push((int) 520282)
0x778: Push((int) 21475)
0x779: Push((int) 21474)
0x77a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77b: Pop(3)
0x77c: Push((int) 520294)
0x77d: Push((int) 21488)
0x77e: Push((int) 21487)
0x77f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x780: Pop(3)
0x781: Return(); Pop(0)

0x782: Push((int) 21488)
0x783: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x784: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x785: PushEmpty(string)
0x786: Stack[-1] = "Neutral"
0x787: Call2 0x55a

0x788: Pop(1)
0x789: Push((int) 520295)
0x78a: @@ SetMessage(Stack[-1])
0x78b: Pop(1)
0x78c: @@ ClearReplies()
0x78d: Pop(0)
0x78e: Push((int) 520296)
0x78f: Push((int) 21490)
0x790: Push((int) 21489)
0x791: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x792: Pop(3)
0x793: Push((int) 527807)
0x794: Push((int) 21477)
0x795: Push((int) 29143)
0x796: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x797: Pop(3)
0x798: Return(); Pop(0)

0x799: Push((int) 21490)
0x79a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x79b: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x79c: PushEmpty(string)
0x79d: Stack[-1] = "Neutral"
0x79e: Call2 0x55a

0x79f: Pop(1)
0x7a0: Push((int) 520297)
0x7a1: @@ SetMessage(Stack[-1])
0x7a2: Pop(1)
0x7a3: @@ ClearReplies()
0x7a4: Pop(0)
0x7a5: Push((int) 527805)
0x7a6: Push((int) 29142)
0x7a7: Push((int) 29141)
0x7a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a9: Pop(3)
0x7aa: Return(); Pop(0)

0x7ab: Push((int) 29142)
0x7ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ad: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7ae: PushEmpty(string)
0x7af: Stack[-1] = "Neutral"
0x7b0: Call2 0x55a

0x7b1: Pop(1)
0x7b2: Push((int) 527806)
0x7b3: @@ SetMessage(Stack[-1])
0x7b4: Pop(1)
0x7b5: @@ ClearReplies()
0x7b6: Pop(0)
0x7b7: Push((int) 520298)
0x7b8: Push((int) 21477)
0x7b9: Push((int) 21491)
0x7ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bb: Pop(3)
0x7bc: Return(); Pop(0)

0x7bd: Push((int) 21475)
0x7be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7bf: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7c0: PushEmpty(string)
0x7c1: Stack[-1] = "Neutral"
0x7c2: Call2 0x55a

0x7c3: Pop(1)
0x7c4: Push((int) 520283)
0x7c5: @@ SetMessage(Stack[-1])
0x7c6: Pop(1)
0x7c7: @@ ClearReplies()
0x7c8: Pop(0)
0x7c9: Push((int) 520290)
0x7ca: Push((int) 21483)
0x7cb: Push((int) 21482)
0x7cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cd: Pop(3)
0x7ce: Push((int) 520284)
0x7cf: Push((int) 21477)
0x7d0: Push((int) 21476)
0x7d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d2: Pop(3)
0x7d3: Return(); Pop(0)

0x7d4: Push((int) 21477)
0x7d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d6: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7d7: PushEmpty(string)
0x7d8: Stack[-1] = "Neutral"
0x7d9: Call2 0x55a

0x7da: Pop(1)
0x7db: Push((int) 520285)
0x7dc: @@ SetMessage(Stack[-1])
0x7dd: Pop(1)
0x7de: @@ ClearReplies()
0x7df: Pop(0)
0x7e0: Push((int) 520286)
0x7e1: Push((int) 21479)
0x7e2: Push((int) 21478)
0x7e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e4: Pop(3)
0x7e5: Push((int) 527808)
0x7e6: Push((int) 29146)
0x7e7: Push((int) 29145)
0x7e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e9: Pop(3)
0x7ea: Return(); Pop(0)

0x7eb: Push((int) 29146)
0x7ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ed: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7ee: PushEmpty(string)
0x7ef: Stack[-1] = "Neutral"
0x7f0: Call2 0x55a

0x7f1: Pop(1)
0x7f2: Push((int) 527809)
0x7f3: @@ SetMessage(Stack[-1])
0x7f4: Pop(1)
0x7f5: @@ ClearReplies()
0x7f6: Pop(0)
0x7f7: Push((int) 527810)
0x7f8: Push((int) 21479)
0x7f9: Push((int) 29147)
0x7fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fb: Pop(3)
0x7fc: Return(); Pop(0)

0x7fd: Push((int) 21479)
0x7fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ff: IF (Stack[-1] == 0) GOTO 0x814; Pop(1)

0x800: PushEmpty(string)
0x801: Stack[-1] = "Neutral"
0x802: Call2 0x55a

0x803: Pop(1)
0x804: Push((int) 520287)
0x805: @@ SetMessage(Stack[-1])
0x806: Pop(1)
0x807: @@ ClearReplies()
0x808: Pop(0)
0x809: Push((int) 520288)
0x80a: Push((int) -1)
0x80b: Push((int) 21480)
0x80c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80d: Pop(3)
0x80e: Push((int) 520289)
0x80f: Push((int) -1)
0x810: Push((int) 21481)
0x811: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x812: Pop(3)
0x813: Return(); Pop(0)

0x814: Push((int) 21483)
0x815: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x816: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x817: PushEmpty(string)
0x818: Stack[-1] = "Neutral"
0x819: Call2 0x55a

0x81a: Pop(1)
0x81b: Push((int) 520291)
0x81c: @@ SetMessage(Stack[-1])
0x81d: Pop(1)
0x81e: @@ ClearReplies()
0x81f: Pop(0)
0x820: Push((int) 520292)
0x821: Push((int) 21477)
0x822: Push((int) 21484)
0x823: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x824: Pop(3)
0x825: Push((int) 520293)
0x826: Push((int) -1)
0x827: Push((int) 21486)
0x828: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x829: Pop(3)
0x82a: Return(); Pop(0)

0x82b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x82c: PushEmpty(bool)
0x82d: Call2 0x12a6

0x82e: Pop(0)
0x82f: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x830: @ lshStopAnimation()
0x831: Pop(0)
0x832: GOTO 0x835

0x833: @ StopAnimation()
0x834: Pop(0)
0x835: Return(); Pop(0)

0x836: GOTO 0x571

0x837: Return(); Pop(0)

0x838: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x839: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x83a: PushEmpty(bool, object, float)
0x83b: Stack[-2] = Stack[-12]
0x83c: Stack[-1] = (float) 70.0
0x83d: Call2 0x1106

0x83e: Pop(2)
0x83f: Pop(1); Push((bool) Stack[-1] == 0)
0x840: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x841: Stack[-10] = (int) -2
0x842: Return(); Pop(8)

0x843: @ CreateDialog(Stack[-4])
0x844: Pop(0)
0x845: PushEmpty(int)
0x846: Call2 0x12a0

0x847: Pop(0)
0x848: @@ SetNPCName(Stack[-1])
0x849: Pop(1)
0x84a: PushEmpty(int)
0x84b: Call2 0x129e

0x84c: Pop(0)
0x84d: @@ SetNPCDescription(Stack[-1])
0x84e: Pop(1)
0x84f: PushEmpty(string)
0x850: Call2 0x12a2

0x851: Pop(0)
0x852: @@ SetPhoto(Stack[-1])
0x853: Pop(1)
0x854: PushEmpty(string)
0x855: Call2 0x12a4

0x856: Pop(0)
0x857: @@ SetPhoto2(Stack[-1])
0x858: Pop(1)
0x859: PushEmpty(int)
0x85a: Call2 0x14e6

0x85b: Pop(0)
0x85c: @@ SetPlayerName(Stack[-1])
0x85d: Pop(1)
0x85e: Stack[-2] = (int) -1
0x85f: @ IsOverrideActive(Stack[-3])
0x860: Pop(0)
0x861: Push(Stack[-3])
0x862: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x863: Stack[-10] = (int) -2
0x864: Return(); Pop(8)

0x865: @ DoDialog(Stack[-4])
0x866: Pop(0)
0x867: PushEmpty(bool, object)
0x868: PushEmpty(object)
0x869: Call2 0x121a

0x86a: Stack[-2] = Stack[-1]
0x86b: Pop(1)
0x86c: Call2 0x115b

0x86d: Pop(2)
0x86e: PushEmpty(object, object)
0x86f: Stack[-2] = Stack[-11]
0x870: Stack[-1] = Stack[-6]
0x871: Push(-2, 4); TaskCall(9)
0x872: Call2 0x889

0x873: Pop(-2, 4); TaskReturn
0x874: Pop(2)
0x875: @@ IsDialogEnd(Stack[-1])
0x876: Pop(0)
0x877: Pop(0); Push((bool) Stack[-1] == 0)
0x878: IF (Stack[-1] == 0) GOTO 0x87e; Pop(1)

0x879: @ sync()
0x87a: Pop(0)
0x87b: @@ IsDialogEnd(Stack[-1])
0x87c: Pop(0)
0x87d: GOTO 0x877

0x87e: PushEmpty(object)
0x87f: Stack[-1] = Stack[-10]
0x880: Call2 0x114a

0x881: Pop(1)
0x882: @ StopDialog(Stack[-4])
0x883: Pop(0)
0x884: @@ GetReturnValue(Stack[-2])
0x885: Pop(0)
0x886: Stack[-10] = Stack[-2]
0x887: Return(); Pop(8)

0x888: Stack[-4] = 0
0x889: PushEmpty()
0x88a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x88b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x88c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x88d: Push((int) 1)
0x88e: IF (Stack[-1] == 0) GOTO 0x8a5; Pop(1)

0x88f: PushEmpty(string)
0x890: Stack[-1] = "Neutral"
0x891: Call2 0x8c3

0x892: Pop(1)
0x893: Push((int) 520800)
0x894: @@ SetMessage(Stack[-1])
0x895: Pop(1)
0x896: @@ ClearReplies()
0x897: Pop(0)
0x898: Push((int) 520801)
0x899: Push((int) 29131)
0x89a: Push((int) 22018)
0x89b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89c: Pop(3)
0x89d: Push((int) 527799)
0x89e: Push((int) -1)
0x89f: Push((int) 29132)
0x8a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a1: Pop(3)
0x8a2: GOTO 0x8a5

0x8a3: Return(); Pop(0)

0x8a4: GOTO 0x88d

0x8a5: PushEmpty(bool)
0x8a6: Call2 0x12a6

0x8a7: Pop(0)
0x8a8: IF (Stack[-1] == 0) GOTO 0x8b4; Pop(1)

0x8a9: @ lshWaitForAnimEnd()
0x8aa: Pop(0)
0x8ab: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8ac: IF (Stack[-1] == 0) GOTO 0x8ae; Pop(1)

0x8ad: GOTO 0x8b3

0x8ae: PushEmpty(string)
0x8af: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8b0: Call2 0x11e5

0x8b1: Pop(1)
0x8b2: GOTO 0x8a9

0x8b3: GOTO 0x8c2

0x8b4: Push("all")
0x8b5: Push("idle")
0x8b6: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b7: Pop(2)
0x8b8: @ WaitForAnimEnd()
0x8b9: Pop(0)
0x8ba: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8bb: IF (Stack[-1] == 0) GOTO 0x8bd; Pop(1)

0x8bc: GOTO 0x8c2

0x8bd: Push("all")
0x8be: Push("idle")
0x8bf: @ PlayAnimation(Stack[-2], Stack[-1])
0x8c0: Pop(2)
0x8c1: GOTO 0x8b8

0x8c2: Return(); Pop(0)

0x8c3: PushEmpty()
0x8c4: PushEmpty(bool)
0x8c5: Call2 0x12a6

0x8c6: Pop(0)
0x8c7: Pop(1); Push((bool) Stack[-1] == 0)
0x8c8: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c9: Return(); Pop(0)

0x8ca: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8cb: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8cc: Return(); Pop(0)

0x8cd: PushEmpty(string, bool)
0x8ce: Stack[-2] = Stack[-3]
0x8cf: Push("")
0x8d0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8d1: IF (Stack[-1] == 0) GOTO 0x8d4; Pop(1)

0x8d2: Stack[-1] = (bool) 0
0x8d3: GOTO 0x8d5

0x8d4: Stack[-1] = (bool) 1
0x8d5: Call2 0x11f5

0x8d6: Pop(2)
0x8d7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8d8: Return(); Pop(0)

0x8d9: PushEmpty()
0x8da: Push((int) 1)
0x8db: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x8dc: PushEmpty()
0x8dd: Call2 0x1213

0x8de: Pop(0)
0x8df: Push((int) 22017)
0x8e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e1: IF (Stack[-1] == 0) GOTO 0x8f6; Pop(1)

0x8e2: PushEmpty(string)
0x8e3: Stack[-1] = "Neutral"
0x8e4: Call2 0x8c3

0x8e5: Pop(1)
0x8e6: Push((int) 520800)
0x8e7: @@ SetMessage(Stack[-1])
0x8e8: Pop(1)
0x8e9: @@ ClearReplies()
0x8ea: Pop(0)
0x8eb: Push((int) 520801)
0x8ec: Push((int) 29131)
0x8ed: Push((int) 22018)
0x8ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ef: Pop(3)
0x8f0: Push((int) 527799)
0x8f1: Push((int) -1)
0x8f2: Push((int) 29132)
0x8f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f4: Pop(3)
0x8f5: Return(); Pop(0)

0x8f6: Push((int) 29131)
0x8f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f8: IF (Stack[-1] == 0) GOTO 0x90d; Pop(1)

0x8f9: PushEmpty(string)
0x8fa: Stack[-1] = "Neutral"
0x8fb: Call2 0x8c3

0x8fc: Pop(1)
0x8fd: Push((int) 527798)
0x8fe: @@ SetMessage(Stack[-1])
0x8ff: Pop(1)
0x900: @@ ClearReplies()
0x901: Pop(0)
0x902: Push((int) 527800)
0x903: Push((int) -1)
0x904: Push((int) 29133)
0x905: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x906: Pop(3)
0x907: Push((int) 527801)
0x908: Push((int) -1)
0x909: Push((int) 29134)
0x90a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90b: Pop(3)
0x90c: Return(); Pop(0)

0x90d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x90e: PushEmpty(bool)
0x90f: Call2 0x12a6

0x910: Pop(0)
0x911: IF (Stack[-1] == 0) GOTO 0x915; Pop(1)

0x912: @ lshStopAnimation()
0x913: Pop(0)
0x914: GOTO 0x917

0x915: @ StopAnimation()
0x916: Pop(0)
0x917: Return(); Pop(0)

0x918: GOTO 0x8da

0x919: Return(); Pop(0)

0x91a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x91b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x91c: PushEmpty(bool, object, float)
0x91d: Stack[-2] = Stack[-12]
0x91e: Stack[-1] = (float) 70.0
0x91f: Call2 0x1106

0x920: Pop(2)
0x921: Pop(1); Push((bool) Stack[-1] == 0)
0x922: IF (Stack[-1] == 0) GOTO 0x925; Pop(1)

0x923: Stack[-10] = (int) -2
0x924: Return(); Pop(8)

0x925: @ CreateDialog(Stack[-4])
0x926: Pop(0)
0x927: PushEmpty(int)
0x928: Call2 0x12a0

0x929: Pop(0)
0x92a: @@ SetNPCName(Stack[-1])
0x92b: Pop(1)
0x92c: PushEmpty(int)
0x92d: Call2 0x129e

0x92e: Pop(0)
0x92f: @@ SetNPCDescription(Stack[-1])
0x930: Pop(1)
0x931: PushEmpty(string)
0x932: Call2 0x12a2

0x933: Pop(0)
0x934: @@ SetPhoto(Stack[-1])
0x935: Pop(1)
0x936: PushEmpty(string)
0x937: Call2 0x12a4

0x938: Pop(0)
0x939: @@ SetPhoto2(Stack[-1])
0x93a: Pop(1)
0x93b: PushEmpty(int)
0x93c: Call2 0x14e6

0x93d: Pop(0)
0x93e: @@ SetPlayerName(Stack[-1])
0x93f: Pop(1)
0x940: Stack[-2] = (int) -1
0x941: @ IsOverrideActive(Stack[-3])
0x942: Pop(0)
0x943: Push(Stack[-3])
0x944: IF (Stack[-1] == 0) GOTO 0x947; Pop(1)

0x945: Stack[-10] = (int) -2
0x946: Return(); Pop(8)

0x947: @ DoDialog(Stack[-4])
0x948: Pop(0)
0x949: PushEmpty(bool, object)
0x94a: PushEmpty(object)
0x94b: Call2 0x121a

0x94c: Stack[-2] = Stack[-1]
0x94d: Pop(1)
0x94e: Call2 0x115b

0x94f: Pop(2)
0x950: PushEmpty(object, object)
0x951: Stack[-2] = Stack[-11]
0x952: Stack[-1] = Stack[-6]
0x953: Push(-2, 4); TaskCall(11)
0x954: Call2 0x96b

0x955: Pop(-2, 4); TaskReturn
0x956: Pop(2)
0x957: @@ IsDialogEnd(Stack[-1])
0x958: Pop(0)
0x959: Pop(0); Push((bool) Stack[-1] == 0)
0x95a: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x95b: @ sync()
0x95c: Pop(0)
0x95d: @@ IsDialogEnd(Stack[-1])
0x95e: Pop(0)
0x95f: GOTO 0x959

0x960: PushEmpty(object)
0x961: Stack[-1] = Stack[-10]
0x962: Call2 0x114a

0x963: Pop(1)
0x964: @ StopDialog(Stack[-4])
0x965: Pop(0)
0x966: @@ GetReturnValue(Stack[-2])
0x967: Pop(0)
0x968: Stack[-10] = Stack[-2]
0x969: Return(); Pop(8)

0x96a: Stack[-4] = 0
0x96b: PushEmpty()
0x96c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x96d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x96e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x96f: Push((int) 1)
0x970: IF (Stack[-1] == 0) GOTO 0x996; Pop(1)

0x971: PushEmpty(string)
0x972: Stack[-1] = "Neutral"
0x973: Call2 0x9b4

0x974: Pop(1)
0x975: Push((int) 521431)
0x976: @@ SetMessage(Stack[-1])
0x977: Pop(1)
0x978: @@ ClearReplies()
0x979: Pop(0)
0x97a: PushEmpty(bool, object)
0x97b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97c: Call2 0x139e

0x97d: Pop(1)
0x97e: IF (Stack[-1] == 0) GOTO 0x984; Pop(1)

0x97f: Push((int) 521432)
0x980: Push((int) 22611)
0x981: Push((int) 22610)
0x982: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x983: Pop(3)
0x984: PushEmpty(bool, object)
0x985: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x986: Call2 0x13df

0x987: Pop(1)
0x988: IF (Stack[-1] == 0) GOTO 0x98e; Pop(1)

0x989: Push((int) 523679)
0x98a: Push((int) 24958)
0x98b: Push((int) 24931)
0x98c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98d: Pop(3)
0x98e: Push((int) 521435)
0x98f: Push((int) -1)
0x990: Push((int) 22613)
0x991: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x992: Pop(3)
0x993: GOTO 0x996

0x994: Return(); Pop(0)

0x995: GOTO 0x96f

0x996: PushEmpty(bool)
0x997: Call2 0x12a6

0x998: Pop(0)
0x999: IF (Stack[-1] == 0) GOTO 0x9a5; Pop(1)

0x99a: @ lshWaitForAnimEnd()
0x99b: Pop(0)
0x99c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x99d: IF (Stack[-1] == 0) GOTO 0x99f; Pop(1)

0x99e: GOTO 0x9a4

0x99f: PushEmpty(string)
0x9a0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9a1: Call2 0x11e5

0x9a2: Pop(1)
0x9a3: GOTO 0x99a

0x9a4: GOTO 0x9b3

0x9a5: Push("all")
0x9a6: Push("idle")
0x9a7: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a8: Pop(2)
0x9a9: @ WaitForAnimEnd()
0x9aa: Pop(0)
0x9ab: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9ac: IF (Stack[-1] == 0) GOTO 0x9ae; Pop(1)

0x9ad: GOTO 0x9b3

0x9ae: Push("all")
0x9af: Push("idle")
0x9b0: @ PlayAnimation(Stack[-2], Stack[-1])
0x9b1: Pop(2)
0x9b2: GOTO 0x9a9

0x9b3: Return(); Pop(0)

0x9b4: PushEmpty()
0x9b5: PushEmpty(bool)
0x9b6: Call2 0x12a6

0x9b7: Pop(0)
0x9b8: Pop(1); Push((bool) Stack[-1] == 0)
0x9b9: IF (Stack[-1] == 0) GOTO 0x9bb; Pop(1)

0x9ba: Return(); Pop(0)

0x9bb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9bc: IF (Stack[-1] == 0) GOTO 0x9be; Pop(1)

0x9bd: Return(); Pop(0)

0x9be: PushEmpty(string, bool)
0x9bf: Stack[-2] = Stack[-3]
0x9c0: Push("")
0x9c1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9c2: IF (Stack[-1] == 0) GOTO 0x9c5; Pop(1)

0x9c3: Stack[-1] = (bool) 0
0x9c4: GOTO 0x9c6

0x9c5: Stack[-1] = (bool) 1
0x9c6: Call2 0x11f5

0x9c7: Pop(2)
0x9c8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9c9: Return(); Pop(0)

0x9ca: PushEmpty()
0x9cb: Push((int) 1)
0x9cc: IF (Stack[-1] == 0) GOTO 0xb9c; Pop(1)

0x9cd: PushEmpty()
0x9ce: Call2 0x1213

0x9cf: Pop(0)
0x9d0: Push((int) 22612)
0x9d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9d2: IF (Stack[-1] == 0) GOTO 0x9e2; Pop(1)

0x9d3: PushEmpty(object, object)
0x9d4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9d5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9d6: Call2 0x1345

0x9d7: Pop(2)
0x9d8: PushEmpty(object, object)
0x9d9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9db: Call2 0x1393

0x9dc: Pop(2)
0x9dd: PushEmpty(object, object)
0x9de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9e0: Call2 0x1378

0x9e1: Pop(2)
0x9e2: Push((int) 24978)
0x9e3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9e4: IF (Stack[-1] == 0) GOTO 0x9f4; Pop(1)

0x9e5: PushEmpty(object, object)
0x9e6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9e7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9e8: Call2 0x1345

0x9e9: Pop(2)
0x9ea: PushEmpty(object, object)
0x9eb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9ed: Call2 0x1393

0x9ee: Pop(2)
0x9ef: PushEmpty(object, object)
0x9f0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9f1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9f2: Call2 0x1378

0x9f3: Pop(2)
0x9f4: Push((int) 24931)
0x9f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9f6: IF (Stack[-1] == 0) GOTO 0x9fc; Pop(1)

0x9f7: PushEmpty(object, object)
0x9f8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9f9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9fa: Call2 0x138d

0x9fb: Pop(2)
0x9fc: Push((int) 22609)
0x9fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9fe: IF (Stack[-1] == 0) GOTO 0xa22; Pop(1)

0x9ff: PushEmpty(string)
0xa00: Stack[-1] = "Neutral"
0xa01: Call2 0x9b4

0xa02: Pop(1)
0xa03: Push((int) 521431)
0xa04: @@ SetMessage(Stack[-1])
0xa05: Pop(1)
0xa06: @@ ClearReplies()
0xa07: Pop(0)
0xa08: PushEmpty(bool, object)
0xa09: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0a: Call2 0x139e

0xa0b: Pop(1)
0xa0c: IF (Stack[-1] == 0) GOTO 0xa12; Pop(1)

0xa0d: Push((int) 521432)
0xa0e: Push((int) 22611)
0xa0f: Push((int) 22610)
0xa10: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa11: Pop(3)
0xa12: PushEmpty(bool, object)
0xa13: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa14: Call2 0x13df

0xa15: Pop(1)
0xa16: IF (Stack[-1] == 0) GOTO 0xa1c; Pop(1)

0xa17: Push((int) 523679)
0xa18: Push((int) 24958)
0xa19: Push((int) 24931)
0xa1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1b: Pop(3)
0xa1c: Push((int) 521435)
0xa1d: Push((int) -1)
0xa1e: Push((int) 22613)
0xa1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa20: Pop(3)
0xa21: Return(); Pop(0)

0xa22: Push((int) 24958)
0xa23: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa24: IF (Stack[-1] == 0) GOTO 0xa3e; Pop(1)

0xa25: PushEmpty(string)
0xa26: Stack[-1] = "Neutral"
0xa27: Call2 0x9b4

0xa28: Pop(1)
0xa29: Push((int) 523703)
0xa2a: @@ SetMessage(Stack[-1])
0xa2b: Pop(1)
0xa2c: @@ ClearReplies()
0xa2d: Pop(0)
0xa2e: Push((int) 523704)
0xa2f: Push((int) 24960)
0xa30: Push((int) 24959)
0xa31: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa32: Pop(3)
0xa33: Push((int) 523706)
0xa34: Push((int) -1)
0xa35: Push((int) 24961)
0xa36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa37: Pop(3)
0xa38: Push((int) 523707)
0xa39: Push((int) -1)
0xa3a: Push((int) 24962)
0xa3b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3c: Pop(3)
0xa3d: Return(); Pop(0)

0xa3e: Push((int) 24960)
0xa3f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa40: IF (Stack[-1] == 0) GOTO 0xa50; Pop(1)

0xa41: PushEmpty(string)
0xa42: Stack[-1] = "Neutral"
0xa43: Call2 0x9b4

0xa44: Pop(1)
0xa45: Push((int) 523705)
0xa46: @@ SetMessage(Stack[-1])
0xa47: Pop(1)
0xa48: @@ ClearReplies()
0xa49: Pop(0)
0xa4a: Push((int) 523681)
0xa4b: Push((int) 24934)
0xa4c: Push((int) 24933)
0xa4d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4e: Pop(3)
0xa4f: Return(); Pop(0)

0xa50: Push((int) 24934)
0xa51: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa52: IF (Stack[-1] == 0) GOTO 0xa6c; Pop(1)

0xa53: PushEmpty(string)
0xa54: Stack[-1] = "Neutral"
0xa55: Call2 0x9b4

0xa56: Pop(1)
0xa57: Push((int) 523682)
0xa58: @@ SetMessage(Stack[-1])
0xa59: Pop(1)
0xa5a: @@ ClearReplies()
0xa5b: Pop(0)
0xa5c: Push((int) 523683)
0xa5d: Push((int) 24936)
0xa5e: Push((int) 24935)
0xa5f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa60: Pop(3)
0xa61: Push((int) 523701)
0xa62: Push((int) 24957)
0xa63: Push((int) 24956)
0xa64: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa65: Pop(3)
0xa66: Push((int) 523708)
0xa67: Push((int) -1)
0xa68: Push((int) 24963)
0xa69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6a: Pop(3)
0xa6b: Return(); Pop(0)

0xa6c: Push((int) 24957)
0xa6d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa6e: IF (Stack[-1] == 0) GOTO 0xa7e; Pop(1)

0xa6f: PushEmpty(string)
0xa70: Stack[-1] = "Neutral"
0xa71: Call2 0x9b4

0xa72: Pop(1)
0xa73: Push((int) 523702)
0xa74: @@ SetMessage(Stack[-1])
0xa75: Pop(1)
0xa76: @@ ClearReplies()
0xa77: Pop(0)
0xa78: Push((int) 523709)
0xa79: Push((int) 24965)
0xa7a: Push((int) 24964)
0xa7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7c: Pop(3)
0xa7d: Return(); Pop(0)

0xa7e: Push((int) 24965)
0xa7f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa80: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa81: PushEmpty(string)
0xa82: Stack[-1] = "Neutral"
0xa83: Call2 0x9b4

0xa84: Pop(1)
0xa85: Push((int) 523710)
0xa86: @@ SetMessage(Stack[-1])
0xa87: Pop(1)
0xa88: @@ ClearReplies()
0xa89: Pop(0)
0xa8a: Push((int) 523712)
0xa8b: Push((int) -1)
0xa8c: Push((int) 24967)
0xa8d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8e: Pop(3)
0xa8f: Push((int) 523711)
0xa90: Push((int) -1)
0xa91: Push((int) 24966)
0xa92: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa93: Pop(3)
0xa94: Return(); Pop(0)

0xa95: Push((int) 24936)
0xa96: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa97: IF (Stack[-1] == 0) GOTO 0xaa7; Pop(1)

0xa98: PushEmpty(string)
0xa99: Stack[-1] = "Neutral"
0xa9a: Call2 0x9b4

0xa9b: Pop(1)
0xa9c: Push((int) 523684)
0xa9d: @@ SetMessage(Stack[-1])
0xa9e: Pop(1)
0xa9f: @@ ClearReplies()
0xaa0: Pop(0)
0xaa1: Push((int) 523685)
0xaa2: Push((int) 24968)
0xaa3: Push((int) 24937)
0xaa4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa5: Pop(3)
0xaa6: Return(); Pop(0)

0xaa7: Push((int) 24968)
0xaa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa9: IF (Stack[-1] == 0) GOTO 0xab9; Pop(1)

0xaaa: PushEmpty(string)
0xaab: Stack[-1] = "Neutral"
0xaac: Call2 0x9b4

0xaad: Pop(1)
0xaae: Push((int) 523713)
0xaaf: @@ SetMessage(Stack[-1])
0xab0: Pop(1)
0xab1: @@ ClearReplies()
0xab2: Pop(0)
0xab3: Push((int) 523714)
0xab4: Push((int) -1)
0xab5: Push((int) 24969)
0xab6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab7: Pop(3)
0xab8: Return(); Pop(0)

0xab9: Push((int) 22611)
0xaba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xabb: IF (Stack[-1] == 0) GOTO 0xad0; Pop(1)

0xabc: PushEmpty(string)
0xabd: Stack[-1] = "Neutral"
0xabe: Call2 0x9b4

0xabf: Pop(1)
0xac0: Push((int) 521433)
0xac1: @@ SetMessage(Stack[-1])
0xac2: Pop(1)
0xac3: @@ ClearReplies()
0xac4: Pop(0)
0xac5: Push((int) 523686)
0xac6: Push((int) 24939)
0xac7: Push((int) 24938)
0xac8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac9: Pop(3)
0xaca: Push((int) 523690)
0xacb: Push((int) 24941)
0xacc: Push((int) 24942)
0xacd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xace: Pop(3)
0xacf: Return(); Pop(0)

0xad0: Push((int) 24939)
0xad1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad2: IF (Stack[-1] == 0) GOTO 0xae7; Pop(1)

0xad3: PushEmpty(string)
0xad4: Stack[-1] = "Neutral"
0xad5: Call2 0x9b4

0xad6: Pop(1)
0xad7: Push((int) 523687)
0xad8: @@ SetMessage(Stack[-1])
0xad9: Pop(1)
0xada: @@ ClearReplies()
0xadb: Pop(0)
0xadc: Push((int) 523688)
0xadd: Push((int) 24941)
0xade: Push((int) 24940)
0xadf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae0: Pop(3)
0xae1: Push((int) 523695)
0xae2: Push((int) 24949)
0xae3: Push((int) 24948)
0xae4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae5: Pop(3)
0xae6: Return(); Pop(0)

0xae7: Push((int) 24949)
0xae8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae9: IF (Stack[-1] == 0) GOTO 0xafe; Pop(1)

0xaea: PushEmpty(string)
0xaeb: Stack[-1] = "Neutral"
0xaec: Call2 0x9b4

0xaed: Pop(1)
0xaee: Push((int) 523696)
0xaef: @@ SetMessage(Stack[-1])
0xaf0: Pop(1)
0xaf1: @@ ClearReplies()
0xaf2: Pop(0)
0xaf3: Push((int) 523697)
0xaf4: Push((int) 24941)
0xaf5: Push((int) 24950)
0xaf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf7: Pop(3)
0xaf8: Push((int) 523698)
0xaf9: Push((int) 24952)
0xafa: Push((int) 24951)
0xafb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xafc: Pop(3)
0xafd: Return(); Pop(0)

0xafe: Push((int) 24952)
0xaff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb00: IF (Stack[-1] == 0) GOTO 0xb10; Pop(1)

0xb01: PushEmpty(string)
0xb02: Stack[-1] = "Neutral"
0xb03: Call2 0x9b4

0xb04: Pop(1)
0xb05: Push((int) 523699)
0xb06: @@ SetMessage(Stack[-1])
0xb07: Pop(1)
0xb08: @@ ClearReplies()
0xb09: Pop(0)
0xb0a: Push((int) 523700)
0xb0b: Push((int) 24941)
0xb0c: Push((int) 24953)
0xb0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0e: Pop(3)
0xb0f: Return(); Pop(0)

0xb10: Push((int) 24941)
0xb11: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb12: IF (Stack[-1] == 0) GOTO 0xb27; Pop(1)

0xb13: PushEmpty(string)
0xb14: Stack[-1] = "Neutral"
0xb15: Call2 0x9b4

0xb16: Pop(1)
0xb17: Push((int) 523689)
0xb18: @@ SetMessage(Stack[-1])
0xb19: Pop(1)
0xb1a: @@ ClearReplies()
0xb1b: Pop(0)
0xb1c: Push((int) 523691)
0xb1d: Push((int) 24944)
0xb1e: Push((int) 24943)
0xb1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb20: Pop(3)
0xb21: Push((int) 523715)
0xb22: Push((int) 24971)
0xb23: Push((int) 24970)
0xb24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb25: Pop(3)
0xb26: Return(); Pop(0)

0xb27: Push((int) 24971)
0xb28: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb29: IF (Stack[-1] == 0) GOTO 0xb3e; Pop(1)

0xb2a: PushEmpty(string)
0xb2b: Stack[-1] = "Neutral"
0xb2c: Call2 0x9b4

0xb2d: Pop(1)
0xb2e: Push((int) 523716)
0xb2f: @@ SetMessage(Stack[-1])
0xb30: Pop(1)
0xb31: @@ ClearReplies()
0xb32: Pop(0)
0xb33: Push((int) 523718)
0xb34: Push((int) 24944)
0xb35: Push((int) 24973)
0xb36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb37: Pop(3)
0xb38: Push((int) 523719)
0xb39: Push((int) 24944)
0xb3a: Push((int) 24974)
0xb3b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb3c: Pop(3)
0xb3d: Return(); Pop(0)

0xb3e: Push((int) 24944)
0xb3f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb40: IF (Stack[-1] == 0) GOTO 0xb55; Pop(1)

0xb41: PushEmpty(string)
0xb42: Stack[-1] = "Neutral"
0xb43: Call2 0x9b4

0xb44: Pop(1)
0xb45: Push((int) 523692)
0xb46: @@ SetMessage(Stack[-1])
0xb47: Pop(1)
0xb48: @@ ClearReplies()
0xb49: Pop(0)
0xb4a: Push((int) 523693)
0xb4b: Push((int) 24946)
0xb4c: Push((int) 24945)
0xb4d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb4e: Pop(3)
0xb4f: Push((int) 523717)
0xb50: Push((int) 24977)
0xb51: Push((int) 24972)
0xb52: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb53: Pop(3)
0xb54: Return(); Pop(0)

0xb55: Push((int) 24977)
0xb56: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb57: IF (Stack[-1] == 0) GOTO 0xb67; Pop(1)

0xb58: PushEmpty(string)
0xb59: Stack[-1] = "Neutral"
0xb5a: Call2 0x9b4

0xb5b: Pop(1)
0xb5c: Push((int) 523720)
0xb5d: @@ SetMessage(Stack[-1])
0xb5e: Pop(1)
0xb5f: @@ ClearReplies()
0xb60: Pop(0)
0xb61: Push((int) 523722)
0xb62: Push((int) 24980)
0xb63: Push((int) 24979)
0xb64: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb65: Pop(3)
0xb66: Return(); Pop(0)

0xb67: Push((int) 24980)
0xb68: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb69: IF (Stack[-1] == 0) GOTO 0xb79; Pop(1)

0xb6a: PushEmpty(string)
0xb6b: Stack[-1] = "Neutral"
0xb6c: Call2 0x9b4

0xb6d: Pop(1)
0xb6e: Push((int) 523723)
0xb6f: @@ SetMessage(Stack[-1])
0xb70: Pop(1)
0xb71: @@ ClearReplies()
0xb72: Pop(0)
0xb73: Push((int) 523724)
0xb74: Push((int) 24946)
0xb75: Push((int) 24981)
0xb76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb77: Pop(3)
0xb78: Return(); Pop(0)

0xb79: Push((int) 24946)
0xb7a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb7b: IF (Stack[-1] == 0) GOTO 0xb90; Pop(1)

0xb7c: PushEmpty(string)
0xb7d: Stack[-1] = "Neutral"
0xb7e: Call2 0x9b4

0xb7f: Pop(1)
0xb80: Push((int) 523694)
0xb81: @@ SetMessage(Stack[-1])
0xb82: Pop(1)
0xb83: @@ ClearReplies()
0xb84: Pop(0)
0xb85: Push((int) 521434)
0xb86: Push((int) -1)
0xb87: Push((int) 22612)
0xb88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb89: Pop(3)
0xb8a: Push((int) 523721)
0xb8b: Push((int) -1)
0xb8c: Push((int) 24978)
0xb8d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8e: Pop(3)
0xb8f: Return(); Pop(0)

0xb90: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb91: PushEmpty(bool)
0xb92: Call2 0x12a6

0xb93: Pop(0)
0xb94: IF (Stack[-1] == 0) GOTO 0xb98; Pop(1)

0xb95: @ lshStopAnimation()
0xb96: Pop(0)
0xb97: GOTO 0xb9a

0xb98: @ StopAnimation()
0xb99: Pop(0)
0xb9a: Return(); Pop(0)

0xb9b: GOTO 0x9cb

0xb9c: Return(); Pop(0)

0xb9d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xb9e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xb9f: PushEmpty(bool, object, float)
0xba0: Stack[-2] = Stack[-12]
0xba1: Stack[-1] = (float) 70.0
0xba2: Call2 0x1106

0xba3: Pop(2)
0xba4: Pop(1); Push((bool) Stack[-1] == 0)
0xba5: IF (Stack[-1] == 0) GOTO 0xba8; Pop(1)

0xba6: Stack[-10] = (int) -2
0xba7: Return(); Pop(8)

0xba8: @ CreateDialog(Stack[-4])
0xba9: Pop(0)
0xbaa: PushEmpty(int)
0xbab: Call2 0x12a0

0xbac: Pop(0)
0xbad: @@ SetNPCName(Stack[-1])
0xbae: Pop(1)
0xbaf: PushEmpty(int)
0xbb0: Call2 0x129e

0xbb1: Pop(0)
0xbb2: @@ SetNPCDescription(Stack[-1])
0xbb3: Pop(1)
0xbb4: PushEmpty(string)
0xbb5: Call2 0x12a2

0xbb6: Pop(0)
0xbb7: @@ SetPhoto(Stack[-1])
0xbb8: Pop(1)
0xbb9: PushEmpty(string)
0xbba: Call2 0x12a4

0xbbb: Pop(0)
0xbbc: @@ SetPhoto2(Stack[-1])
0xbbd: Pop(1)
0xbbe: PushEmpty(int)
0xbbf: Call2 0x14e6

0xbc0: Pop(0)
0xbc1: @@ SetPlayerName(Stack[-1])
0xbc2: Pop(1)
0xbc3: Stack[-2] = (int) -1
0xbc4: @ IsOverrideActive(Stack[-3])
0xbc5: Pop(0)
0xbc6: Push(Stack[-3])
0xbc7: IF (Stack[-1] == 0) GOTO 0xbca; Pop(1)

0xbc8: Stack[-10] = (int) -2
0xbc9: Return(); Pop(8)

0xbca: @ DoDialog(Stack[-4])
0xbcb: Pop(0)
0xbcc: PushEmpty(bool, object)
0xbcd: PushEmpty(object)
0xbce: Call2 0x121a

0xbcf: Stack[-2] = Stack[-1]
0xbd0: Pop(1)
0xbd1: Call2 0x115b

0xbd2: Pop(2)
0xbd3: PushEmpty(object, object)
0xbd4: Stack[-2] = Stack[-11]
0xbd5: Stack[-1] = Stack[-6]
0xbd6: Push(-2, 4); TaskCall(13)
0xbd7: Call2 0xbee

0xbd8: Pop(-2, 4); TaskReturn
0xbd9: Pop(2)
0xbda: @@ IsDialogEnd(Stack[-1])
0xbdb: Pop(0)
0xbdc: Pop(0); Push((bool) Stack[-1] == 0)
0xbdd: IF (Stack[-1] == 0) GOTO 0xbe3; Pop(1)

0xbde: @ sync()
0xbdf: Pop(0)
0xbe0: @@ IsDialogEnd(Stack[-1])
0xbe1: Pop(0)
0xbe2: GOTO 0xbdc

0xbe3: PushEmpty(object)
0xbe4: Stack[-1] = Stack[-10]
0xbe5: Call2 0x114a

0xbe6: Pop(1)
0xbe7: @ StopDialog(Stack[-4])
0xbe8: Pop(0)
0xbe9: @@ GetReturnValue(Stack[-2])
0xbea: Pop(0)
0xbeb: Stack[-10] = Stack[-2]
0xbec: Return(); Pop(8)

0xbed: Stack[-4] = 0
0xbee: PushEmpty()
0xbef: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xbf0: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xbf1: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xbf2: Push((int) 1)
0xbf3: IF (Stack[-1] == 0) GOTO 0xc2a; Pop(1)

0xbf4: PushEmpty(string)
0xbf5: Stack[-1] = "Neutral"
0xbf6: Call2 0xc48

0xbf7: Pop(1)
0xbf8: Push((int) 521945)
0xbf9: @@ SetMessage(Stack[-1])
0xbfa: Pop(1)
0xbfb: @@ ClearReplies()
0xbfc: Pop(0)
0xbfd: PushEmpty(bool)
0xbfe: Stack[-1] = (bool) 1
0xbff: PushEmpty(bool)
0xc00: Stack[-1] = (bool) 0
0xc01: PushEmpty(bool, object)
0xc02: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc03: Call2 0x13b6

0xc04: Pop(1)
0xc05: IF (Stack[-1] == 0) GOTO 0xc0c; Pop(1)

0xc06: PushEmpty(bool, object)
0xc07: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc08: Call2 0x13c2

0xc09: Pop(1)
0xc0a: IF (Stack[-1] == 0) GOTO 0xc0c; Pop(1)

0xc0b: Stack[-1] = (bool) 1
0xc0c: IF (Stack[-1] == 0) GOTO 0xc1c; Pop(1)

0xc0d: PushEmpty(bool)
0xc0e: Stack[-1] = (bool) 0
0xc0f: PushEmpty(bool, object)
0xc10: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc11: Call2 0x13aa

0xc12: Pop(1)
0xc13: IF (Stack[-1] == 0) GOTO 0xc1a; Pop(1)

0xc14: PushEmpty(bool, object)
0xc15: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc16: Call2 0x13c2

0xc17: Pop(1)
0xc18: IF (Stack[-1] == 0) GOTO 0xc1a; Pop(1)

0xc19: Stack[-1] = (bool) 1
0xc1a: IF (Stack[-1] == 0) GOTO 0xc1c; Pop(1)

0xc1b: Stack[-1] = (bool) 0
0xc1c: IF (Stack[-1] == 0) GOTO 0xc22; Pop(1)

0xc1d: Push((int) 521946)
0xc1e: Push((int) 23122)
0xc1f: Push((int) 23120)
0xc20: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc21: Pop(3)
0xc22: Push((int) 521947)
0xc23: Push((int) -1)
0xc24: Push((int) 23121)
0xc25: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc26: Pop(3)
0xc27: GOTO 0xc2a

0xc28: Return(); Pop(0)

0xc29: GOTO 0xbf2

0xc2a: PushEmpty(bool)
0xc2b: Call2 0x12a6

0xc2c: Pop(0)
0xc2d: IF (Stack[-1] == 0) GOTO 0xc39; Pop(1)

0xc2e: @ lshWaitForAnimEnd()
0xc2f: Pop(0)
0xc30: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc31: IF (Stack[-1] == 0) GOTO 0xc33; Pop(1)

0xc32: GOTO 0xc38

0xc33: PushEmpty(string)
0xc34: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc35: Call2 0x11e5

0xc36: Pop(1)
0xc37: GOTO 0xc2e

0xc38: GOTO 0xc47

0xc39: Push("all")
0xc3a: Push("idle")
0xc3b: @ PlayAnimation(Stack[-2], Stack[-1])
0xc3c: Pop(2)
0xc3d: @ WaitForAnimEnd()
0xc3e: Pop(0)
0xc3f: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc40: IF (Stack[-1] == 0) GOTO 0xc42; Pop(1)

0xc41: GOTO 0xc47

0xc42: Push("all")
0xc43: Push("idle")
0xc44: @ PlayAnimation(Stack[-2], Stack[-1])
0xc45: Pop(2)
0xc46: GOTO 0xc3d

0xc47: Return(); Pop(0)

0xc48: PushEmpty()
0xc49: PushEmpty(bool)
0xc4a: Call2 0x12a6

0xc4b: Pop(0)
0xc4c: Pop(1); Push((bool) Stack[-1] == 0)
0xc4d: IF (Stack[-1] == 0) GOTO 0xc4f; Pop(1)

0xc4e: Return(); Pop(0)

0xc4f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc50: IF (Stack[-1] == 0) GOTO 0xc52; Pop(1)

0xc51: Return(); Pop(0)

0xc52: PushEmpty(string, bool)
0xc53: Stack[-2] = Stack[-3]
0xc54: Push("")
0xc55: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc56: IF (Stack[-1] == 0) GOTO 0xc59; Pop(1)

0xc57: Stack[-1] = (bool) 0
0xc58: GOTO 0xc5a

0xc59: Stack[-1] = (bool) 1
0xc5a: Call2 0x11f5

0xc5b: Pop(2)
0xc5c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc5d: Return(); Pop(0)

0xc5e: PushEmpty()
0xc5f: Push((int) 1)
0xc60: IF (Stack[-1] == 0) GOTO 0xd0e; Pop(1)

0xc61: PushEmpty()
0xc62: Call2 0x1213

0xc63: Pop(0)
0xc64: Push((int) 23120)
0xc65: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc66: IF (Stack[-1] == 0) GOTO 0xc6c; Pop(1)

0xc67: PushEmpty(object, object)
0xc68: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc69: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6a: Call2 0x134e

0xc6b: Pop(2)
0xc6c: Push((int) 23119)
0xc6d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6e: IF (Stack[-1] == 0) GOTO 0xca3; Pop(1)

0xc6f: PushEmpty(string)
0xc70: Stack[-1] = "Neutral"
0xc71: Call2 0xc48

0xc72: Pop(1)
0xc73: Push((int) 521945)
0xc74: @@ SetMessage(Stack[-1])
0xc75: Pop(1)
0xc76: @@ ClearReplies()
0xc77: Pop(0)
0xc78: PushEmpty(bool)
0xc79: Stack[-1] = (bool) 1
0xc7a: PushEmpty(bool)
0xc7b: Stack[-1] = (bool) 0
0xc7c: PushEmpty(bool, object)
0xc7d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc7e: Call2 0x13b6

0xc7f: Pop(1)
0xc80: IF (Stack[-1] == 0) GOTO 0xc87; Pop(1)

0xc81: PushEmpty(bool, object)
0xc82: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc83: Call2 0x13c2

0xc84: Pop(1)
0xc85: IF (Stack[-1] == 0) GOTO 0xc87; Pop(1)

0xc86: Stack[-1] = (bool) 1
0xc87: IF (Stack[-1] == 0) GOTO 0xc97; Pop(1)

0xc88: PushEmpty(bool)
0xc89: Stack[-1] = (bool) 0
0xc8a: PushEmpty(bool, object)
0xc8b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc8c: Call2 0x13aa

0xc8d: Pop(1)
0xc8e: IF (Stack[-1] == 0) GOTO 0xc95; Pop(1)

0xc8f: PushEmpty(bool, object)
0xc90: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc91: Call2 0x13c2

0xc92: Pop(1)
0xc93: IF (Stack[-1] == 0) GOTO 0xc95; Pop(1)

0xc94: Stack[-1] = (bool) 1
0xc95: IF (Stack[-1] == 0) GOTO 0xc97; Pop(1)

0xc96: Stack[-1] = (bool) 0
0xc97: IF (Stack[-1] == 0) GOTO 0xc9d; Pop(1)

0xc98: Push((int) 521946)
0xc99: Push((int) 23122)
0xc9a: Push((int) 23120)
0xc9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9c: Pop(3)
0xc9d: Push((int) 521947)
0xc9e: Push((int) -1)
0xc9f: Push((int) 23121)
0xca0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca1: Pop(3)
0xca2: Return(); Pop(0)

0xca3: Push((int) 23122)
0xca4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca5: IF (Stack[-1] == 0) GOTO 0xcb5; Pop(1)

0xca6: PushEmpty(string)
0xca7: Stack[-1] = "Neutral"
0xca8: Call2 0xc48

0xca9: Pop(1)
0xcaa: Push((int) 521948)
0xcab: @@ SetMessage(Stack[-1])
0xcac: Pop(1)
0xcad: @@ ClearReplies()
0xcae: Pop(0)
0xcaf: Push((int) 521949)
0xcb0: Push((int) 23730)
0xcb1: Push((int) 23123)
0xcb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb3: Pop(3)
0xcb4: Return(); Pop(0)

0xcb5: Push((int) 23730)
0xcb6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb7: IF (Stack[-1] == 0) GOTO 0xcc7; Pop(1)

0xcb8: PushEmpty(string)
0xcb9: Stack[-1] = "Neutral"
0xcba: Call2 0xc48

0xcbb: Pop(1)
0xcbc: Push((int) 522551)
0xcbd: @@ SetMessage(Stack[-1])
0xcbe: Pop(1)
0xcbf: @@ ClearReplies()
0xcc0: Pop(0)
0xcc1: Push((int) 522552)
0xcc2: Push((int) 23732)
0xcc3: Push((int) 23731)
0xcc4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc5: Pop(3)
0xcc6: Return(); Pop(0)

0xcc7: Push((int) 23732)
0xcc8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc9: IF (Stack[-1] == 0) GOTO 0xcde; Pop(1)

0xcca: PushEmpty(string)
0xccb: Stack[-1] = "Neutral"
0xccc: Call2 0xc48

0xccd: Pop(1)
0xcce: Push((int) 522553)
0xccf: @@ SetMessage(Stack[-1])
0xcd0: Pop(1)
0xcd1: @@ ClearReplies()
0xcd2: Pop(0)
0xcd3: Push((int) 522554)
0xcd4: Push((int) 23734)
0xcd5: Push((int) 23733)
0xcd6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd7: Pop(3)
0xcd8: Push((int) 522556)
0xcd9: Push((int) -1)
0xcda: Push((int) 23735)
0xcdb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcdc: Pop(3)
0xcdd: Return(); Pop(0)

0xcde: Push((int) 23734)
0xcdf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce0: IF (Stack[-1] == 0) GOTO 0xcf0; Pop(1)

0xce1: PushEmpty(string)
0xce2: Stack[-1] = "Neutral"
0xce3: Call2 0xc48

0xce4: Pop(1)
0xce5: Push((int) 522555)
0xce6: @@ SetMessage(Stack[-1])
0xce7: Pop(1)
0xce8: @@ ClearReplies()
0xce9: Pop(0)
0xcea: Push((int) 522557)
0xceb: Push((int) 23737)
0xcec: Push((int) 23736)
0xced: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcee: Pop(3)
0xcef: Return(); Pop(0)

0xcf0: Push((int) 23737)
0xcf1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf2: IF (Stack[-1] == 0) GOTO 0xd02; Pop(1)

0xcf3: PushEmpty(string)
0xcf4: Stack[-1] = "Neutral"
0xcf5: Call2 0xc48

0xcf6: Pop(1)
0xcf7: Push((int) 522558)
0xcf8: @@ SetMessage(Stack[-1])
0xcf9: Pop(1)
0xcfa: @@ ClearReplies()
0xcfb: Pop(0)
0xcfc: Push((int) 522559)
0xcfd: Push((int) -1)
0xcfe: Push((int) 23738)
0xcff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd00: Pop(3)
0xd01: Return(); Pop(0)

0xd02: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd03: PushEmpty(bool)
0xd04: Call2 0x12a6

0xd05: Pop(0)
0xd06: IF (Stack[-1] == 0) GOTO 0xd0a; Pop(1)

0xd07: @ lshStopAnimation()
0xd08: Pop(0)
0xd09: GOTO 0xd0c

0xd0a: @ StopAnimation()
0xd0b: Pop(0)
0xd0c: Return(); Pop(0)

0xd0d: GOTO 0xc5f

0xd0e: Return(); Pop(0)

0xd0f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xd10: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xd11: PushEmpty(bool, object, float)
0xd12: Stack[-2] = Stack[-12]
0xd13: Stack[-1] = (float) 70.0
0xd14: Call2 0x1106

0xd15: Pop(2)
0xd16: Pop(1); Push((bool) Stack[-1] == 0)
0xd17: IF (Stack[-1] == 0) GOTO 0xd1a; Pop(1)

0xd18: Stack[-10] = (int) -2
0xd19: Return(); Pop(8)

0xd1a: @ CreateDialog(Stack[-4])
0xd1b: Pop(0)
0xd1c: PushEmpty(int)
0xd1d: Call2 0x12a0

0xd1e: Pop(0)
0xd1f: @@ SetNPCName(Stack[-1])
0xd20: Pop(1)
0xd21: PushEmpty(int)
0xd22: Call2 0x129e

0xd23: Pop(0)
0xd24: @@ SetNPCDescription(Stack[-1])
0xd25: Pop(1)
0xd26: PushEmpty(string)
0xd27: Call2 0x12a2

0xd28: Pop(0)
0xd29: @@ SetPhoto(Stack[-1])
0xd2a: Pop(1)
0xd2b: PushEmpty(string)
0xd2c: Call2 0x12a4

0xd2d: Pop(0)
0xd2e: @@ SetPhoto2(Stack[-1])
0xd2f: Pop(1)
0xd30: PushEmpty(int)
0xd31: Call2 0x14e6

0xd32: Pop(0)
0xd33: @@ SetPlayerName(Stack[-1])
0xd34: Pop(1)
0xd35: Stack[-2] = (int) -1
0xd36: @ IsOverrideActive(Stack[-3])
0xd37: Pop(0)
0xd38: Push(Stack[-3])
0xd39: IF (Stack[-1] == 0) GOTO 0xd3c; Pop(1)

0xd3a: Stack[-10] = (int) -2
0xd3b: Return(); Pop(8)

0xd3c: @ DoDialog(Stack[-4])
0xd3d: Pop(0)
0xd3e: PushEmpty(bool, object)
0xd3f: PushEmpty(object)
0xd40: Call2 0x121a

0xd41: Stack[-2] = Stack[-1]
0xd42: Pop(1)
0xd43: Call2 0x115b

0xd44: Pop(2)
0xd45: PushEmpty(object, object)
0xd46: Stack[-2] = Stack[-11]
0xd47: Stack[-1] = Stack[-6]
0xd48: Push(-2, 4); TaskCall(15)
0xd49: Call2 0xd60

0xd4a: Pop(-2, 4); TaskReturn
0xd4b: Pop(2)
0xd4c: @@ IsDialogEnd(Stack[-1])
0xd4d: Pop(0)
0xd4e: Pop(0); Push((bool) Stack[-1] == 0)
0xd4f: IF (Stack[-1] == 0) GOTO 0xd55; Pop(1)

0xd50: @ sync()
0xd51: Pop(0)
0xd52: @@ IsDialogEnd(Stack[-1])
0xd53: Pop(0)
0xd54: GOTO 0xd4e

0xd55: PushEmpty(object)
0xd56: Stack[-1] = Stack[-10]
0xd57: Call2 0x114a

0xd58: Pop(1)
0xd59: @ StopDialog(Stack[-4])
0xd5a: Pop(0)
0xd5b: @@ GetReturnValue(Stack[-2])
0xd5c: Pop(0)
0xd5d: Stack[-10] = Stack[-2]
0xd5e: Return(); Pop(8)

0xd5f: Stack[-4] = 0
0xd60: PushEmpty()
0xd61: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xd62: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xd63: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xd64: Push((int) 1)
0xd65: IF (Stack[-1] == 0) GOTO 0xd9f; Pop(1)

0xd66: PushEmpty(bool, object)
0xd67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd68: Call2 0x13d3

0xd69: Pop(1)
0xd6a: IF (Stack[-1] == 0) GOTO 0xd8e; Pop(1)

0xd6b: PushEmpty(object, object)
0xd6c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd6d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd6e: Call2 0x135d

0xd6f: Pop(2)
0xd70: PushEmpty(string)
0xd71: Stack[-1] = "Neutral"
0xd72: Call2 0xdbd

0xd73: Pop(1)
0xd74: Push((int) 522089)
0xd75: @@ SetMessage(Stack[-1])
0xd76: Pop(1)
0xd77: @@ ClearReplies()
0xd78: Pop(0)
0xd79: Push((int) 523647)
0xd7a: Push((int) 24892)
0xd7b: Push((int) 24891)
0xd7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7d: Pop(3)
0xd7e: Push((int) 523657)
0xd7f: Push((int) 24892)
0xd80: Push((int) 24901)
0xd81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd82: Pop(3)
0xd83: PushEmpty(bool, object)
0xd84: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd85: Call2 0x13c7

0xd86: Pop(1)
0xd87: IF (Stack[-1] == 0) GOTO 0xd8d; Pop(1)

0xd88: Push((int) 522091)
0xd89: Push((int) 23261)
0xd8a: Push((int) 23260)
0xd8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8c: Pop(3)
0xd8d: GOTO 0xd9f

0xd8e: PushEmpty(string)
0xd8f: Stack[-1] = "Neutral"
0xd90: Call2 0xdbd

0xd91: Pop(1)
0xd92: Push((int) 522094)
0xd93: @@ SetMessage(Stack[-1])
0xd94: Pop(1)
0xd95: @@ ClearReplies()
0xd96: Pop(0)
0xd97: Push((int) 522095)
0xd98: Push((int) -1)
0xd99: Push((int) 23264)
0xd9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9b: Pop(3)
0xd9c: GOTO 0xd9f

0xd9d: Return(); Pop(0)

0xd9e: GOTO 0xd64

0xd9f: PushEmpty(bool)
0xda0: Call2 0x12a6

0xda1: Pop(0)
0xda2: IF (Stack[-1] == 0) GOTO 0xdae; Pop(1)

0xda3: @ lshWaitForAnimEnd()
0xda4: Pop(0)
0xda5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xda6: IF (Stack[-1] == 0) GOTO 0xda8; Pop(1)

0xda7: GOTO 0xdad

0xda8: PushEmpty(string)
0xda9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xdaa: Call2 0x11e5

0xdab: Pop(1)
0xdac: GOTO 0xda3

0xdad: GOTO 0xdbc

0xdae: Push("all")
0xdaf: Push("idle")
0xdb0: @ PlayAnimation(Stack[-2], Stack[-1])
0xdb1: Pop(2)
0xdb2: @ WaitForAnimEnd()
0xdb3: Pop(0)
0xdb4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdb5: IF (Stack[-1] == 0) GOTO 0xdb7; Pop(1)

0xdb6: GOTO 0xdbc

0xdb7: Push("all")
0xdb8: Push("idle")
0xdb9: @ PlayAnimation(Stack[-2], Stack[-1])
0xdba: Pop(2)
0xdbb: GOTO 0xdb2

0xdbc: Return(); Pop(0)

0xdbd: PushEmpty()
0xdbe: PushEmpty(bool)
0xdbf: Call2 0x12a6

0xdc0: Pop(0)
0xdc1: Pop(1); Push((bool) Stack[-1] == 0)
0xdc2: IF (Stack[-1] == 0) GOTO 0xdc4; Pop(1)

0xdc3: Return(); Pop(0)

0xdc4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xdc5: IF (Stack[-1] == 0) GOTO 0xdc7; Pop(1)

0xdc6: Return(); Pop(0)

0xdc7: PushEmpty(string, bool)
0xdc8: Stack[-2] = Stack[-3]
0xdc9: Push("")
0xdca: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xdcb: IF (Stack[-1] == 0) GOTO 0xdce; Pop(1)

0xdcc: Stack[-1] = (bool) 0
0xdcd: GOTO 0xdcf

0xdce: Stack[-1] = (bool) 1
0xdcf: Call2 0x11f5

0xdd0: Pop(2)
0xdd1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xdd2: Return(); Pop(0)

0xdd3: PushEmpty()
0xdd4: Push((int) 1)
0xdd5: IF (Stack[-1] == 0) GOTO 0xf17; Pop(1)

0xdd6: PushEmpty()
0xdd7: Call2 0x1213

0xdd8: Pop(0)
0xdd9: Push((int) 23259)
0xdda: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xddb: IF (Stack[-1] == 0) GOTO 0xde1; Pop(1)

0xddc: PushEmpty(object, object)
0xddd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xddf: Call2 0x1354

0xde0: Pop(2)
0xde1: Push((int) 23258)
0xde2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xde3: IF (Stack[-1] == 0) GOTO 0xe1b; Pop(1)

0xde4: PushEmpty(bool, object)
0xde5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xde6: Call2 0x13d3

0xde7: Pop(1)
0xde8: IF (Stack[-1] == 0) GOTO 0xe0c; Pop(1)

0xde9: PushEmpty(object, object)
0xdea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdec: Call2 0x135d

0xded: Pop(2)
0xdee: PushEmpty(string)
0xdef: Stack[-1] = "Neutral"
0xdf0: Call2 0xdbd

0xdf1: Pop(1)
0xdf2: Push((int) 522089)
0xdf3: @@ SetMessage(Stack[-1])
0xdf4: Pop(1)
0xdf5: @@ ClearReplies()
0xdf6: Pop(0)
0xdf7: Push((int) 523647)
0xdf8: Push((int) 24892)
0xdf9: Push((int) 24891)
0xdfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdfb: Pop(3)
0xdfc: Push((int) 523657)
0xdfd: Push((int) 24892)
0xdfe: Push((int) 24901)
0xdff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe00: Pop(3)
0xe01: PushEmpty(bool, object)
0xe02: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe03: Call2 0x13c7

0xe04: Pop(1)
0xe05: IF (Stack[-1] == 0) GOTO 0xe0b; Pop(1)

0xe06: Push((int) 522091)
0xe07: Push((int) 23261)
0xe08: Push((int) 23260)
0xe09: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0a: Pop(3)
0xe0b: Return(); Pop(0)

0xe0c: PushEmpty(string)
0xe0d: Stack[-1] = "Neutral"
0xe0e: Call2 0xdbd

0xe0f: Pop(1)
0xe10: Push((int) 522094)
0xe11: @@ SetMessage(Stack[-1])
0xe12: Pop(1)
0xe13: @@ ClearReplies()
0xe14: Pop(0)
0xe15: Push((int) 522095)
0xe16: Push((int) -1)
0xe17: Push((int) 23264)
0xe18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe19: Pop(3)
0xe1a: Return(); Pop(0)

0xe1b: Push((int) 24834)
0xe1c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1d: IF (Stack[-1] == 0) GOTO 0xe1e; Pop(1)

0xe1e: Push((int) 24900)
0xe1f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe20: IF (Stack[-1] == 0) GOTO 0xe30; Pop(1)

0xe21: PushEmpty(string)
0xe22: Stack[-1] = "Neutral"
0xe23: Call2 0xdbd

0xe24: Pop(1)
0xe25: Push((int) 523656)
0xe26: @@ SetMessage(Stack[-1])
0xe27: Pop(1)
0xe28: @@ ClearReplies()
0xe29: Pop(0)
0xe2a: Push((int) 534554)
0xe2b: Push((int) -1)
0xe2c: Push((int) 36186)
0xe2d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2e: Pop(3)
0xe2f: Return(); Pop(0)

0xe30: Push((int) 23261)
0xe31: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe32: IF (Stack[-1] == 0) GOTO 0xe47; Pop(1)

0xe33: PushEmpty(string)
0xe34: Stack[-1] = "Neutral"
0xe35: Call2 0xdbd

0xe36: Pop(1)
0xe37: Push((int) 522092)
0xe38: @@ SetMessage(Stack[-1])
0xe39: Pop(1)
0xe3a: @@ ClearReplies()
0xe3b: Pop(0)
0xe3c: Push((int) 523645)
0xe3d: Push((int) 24889)
0xe3e: Push((int) 24888)
0xe3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe40: Pop(3)
0xe41: Push((int) 523644)
0xe42: Push((int) 24889)
0xe43: Push((int) 24887)
0xe44: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe45: Pop(3)
0xe46: Return(); Pop(0)

0xe47: Push((int) 24889)
0xe48: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe49: IF (Stack[-1] == 0) GOTO 0xe59; Pop(1)

0xe4a: PushEmpty(string)
0xe4b: Stack[-1] = "Neutral"
0xe4c: Call2 0xdbd

0xe4d: Pop(1)
0xe4e: Push((int) 523646)
0xe4f: @@ SetMessage(Stack[-1])
0xe50: Pop(1)
0xe51: @@ ClearReplies()
0xe52: Pop(0)
0xe53: Push((int) 522093)
0xe54: Push((int) -1)
0xe55: Push((int) 23262)
0xe56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe57: Pop(3)
0xe58: Return(); Pop(0)

0xe59: Push((int) 24892)
0xe5a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe5b: IF (Stack[-1] == 0) GOTO 0xe6b; Pop(1)

0xe5c: PushEmpty(string)
0xe5d: Stack[-1] = "Neutral"
0xe5e: Call2 0xdbd

0xe5f: Pop(1)
0xe60: Push((int) 523648)
0xe61: @@ SetMessage(Stack[-1])
0xe62: Pop(1)
0xe63: @@ ClearReplies()
0xe64: Pop(0)
0xe65: Push((int) 523649)
0xe66: Push((int) 24894)
0xe67: Push((int) 24893)
0xe68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe69: Pop(3)
0xe6a: Return(); Pop(0)

0xe6b: Push((int) 24908)
0xe6c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe6d: IF (Stack[-1] == 0) GOTO 0xe6e; Pop(1)

0xe6e: Push((int) 24912)
0xe6f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe70: IF (Stack[-1] == 0) GOTO 0xe80; Pop(1)

0xe71: PushEmpty(string)
0xe72: Stack[-1] = "Neutral"
0xe73: Call2 0xdbd

0xe74: Pop(1)
0xe75: Push((int) 523667)
0xe76: @@ SetMessage(Stack[-1])
0xe77: Pop(1)
0xe78: @@ ClearReplies()
0xe79: Pop(0)
0xe7a: Push((int) 523668)
0xe7b: Push((int) 24905)
0xe7c: Push((int) 24913)
0xe7d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7e: Pop(3)
0xe7f: Return(); Pop(0)

0xe80: Push((int) 24894)
0xe81: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe82: IF (Stack[-1] == 0) GOTO 0xe97; Pop(1)

0xe83: PushEmpty(string)
0xe84: Stack[-1] = "Neutral"
0xe85: Call2 0xdbd

0xe86: Pop(1)
0xe87: Push((int) 523650)
0xe88: @@ SetMessage(Stack[-1])
0xe89: Pop(1)
0xe8a: @@ ClearReplies()
0xe8b: Pop(0)
0xe8c: Push((int) 523659)
0xe8d: Push((int) 24905)
0xe8e: Push((int) 24904)
0xe8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe90: Pop(3)
0xe91: Push((int) 523666)
0xe92: Push((int) 24896)
0xe93: Push((int) 24911)
0xe94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe95: Pop(3)
0xe96: Return(); Pop(0)

0xe97: Push((int) 24905)
0xe98: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe99: IF (Stack[-1] == 0) GOTO 0xeb3; Pop(1)

0xe9a: PushEmpty(string)
0xe9b: Stack[-1] = "Neutral"
0xe9c: Call2 0xdbd

0xe9d: Pop(1)
0xe9e: Push((int) 523660)
0xe9f: @@ SetMessage(Stack[-1])
0xea0: Pop(1)
0xea1: @@ ClearReplies()
0xea2: Pop(0)
0xea3: Push((int) 523661)
0xea4: Push((int) 24896)
0xea5: Push((int) 24906)
0xea6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea7: Pop(3)
0xea8: Push((int) 523669)
0xea9: Push((int) 24896)
0xeaa: Push((int) 24915)
0xeab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeac: Pop(3)
0xead: Push((int) 523651)
0xeae: Push((int) 24918)
0xeaf: Push((int) 24895)
0xeb0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb1: Pop(3)
0xeb2: Return(); Pop(0)

0xeb3: Push((int) 24918)
0xeb4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeb5: IF (Stack[-1] == 0) GOTO 0xec5; Pop(1)

0xeb6: PushEmpty(string)
0xeb7: Stack[-1] = "Neutral"
0xeb8: Call2 0xdbd

0xeb9: Pop(1)
0xeba: Push((int) 523670)
0xebb: @@ SetMessage(Stack[-1])
0xebc: Pop(1)
0xebd: @@ ClearReplies()
0xebe: Pop(0)
0xebf: Push((int) 523671)
0xec0: Push((int) 24896)
0xec1: Push((int) 24919)
0xec2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec3: Pop(3)
0xec4: Return(); Pop(0)

0xec5: Push((int) 24896)
0xec6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec7: IF (Stack[-1] == 0) GOTO 0xedc; Pop(1)

0xec8: PushEmpty(string)
0xec9: Stack[-1] = "Neutral"
0xeca: Call2 0xdbd

0xecb: Pop(1)
0xecc: Push((int) 523652)
0xecd: @@ SetMessage(Stack[-1])
0xece: Pop(1)
0xecf: @@ ClearReplies()
0xed0: Pop(0)
0xed1: Push((int) 523653)
0xed2: Push((int) 24898)
0xed3: Push((int) 24897)
0xed4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed5: Pop(3)
0xed6: Push((int) 523675)
0xed7: Push((int) 24925)
0xed8: Push((int) 24924)
0xed9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeda: Pop(3)
0xedb: Return(); Pop(0)

0xedc: Push((int) 24925)
0xedd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xede: IF (Stack[-1] == 0) GOTO 0xeee; Pop(1)

0xedf: PushEmpty(string)
0xee0: Stack[-1] = "Neutral"
0xee1: Call2 0xdbd

0xee2: Pop(1)
0xee3: Push((int) 523676)
0xee4: @@ SetMessage(Stack[-1])
0xee5: Pop(1)
0xee6: @@ ClearReplies()
0xee7: Pop(0)
0xee8: Push((int) 523677)
0xee9: Push((int) 24898)
0xeea: Push((int) 24926)
0xeeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeec: Pop(3)
0xeed: Return(); Pop(0)

0xeee: Push((int) 24898)
0xeef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xef0: IF (Stack[-1] == 0) GOTO 0xf0b; Pop(1)

0xef1: PushEmpty(string)
0xef2: Stack[-1] = "Neutral"
0xef3: Call2 0xdbd

0xef4: Pop(1)
0xef5: Push((int) 523654)
0xef6: @@ SetMessage(Stack[-1])
0xef7: Pop(1)
0xef8: @@ ClearReplies()
0xef9: Pop(0)
0xefa: PushEmpty(bool, object)
0xefb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xefc: Call2 0x13c7

0xefd: Pop(1)
0xefe: Pop(1); Push((bool) Stack[-1] == 0)
0xeff: IF (Stack[-1] == 0) GOTO 0xf05; Pop(1)

0xf00: Push((int) 522090)
0xf01: Push((int) -1)
0xf02: Push((int) 23259)
0xf03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf04: Pop(3)
0xf05: Push((int) 523678)
0xf06: Push((int) -1)
0xf07: Push((int) 24928)
0xf08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf09: Pop(3)
0xf0a: Return(); Pop(0)

0xf0b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf0c: PushEmpty(bool)
0xf0d: Call2 0x12a6

0xf0e: Pop(0)
0xf0f: IF (Stack[-1] == 0) GOTO 0xf13; Pop(1)

0xf10: @ lshStopAnimation()
0xf11: Pop(0)
0xf12: GOTO 0xf15

0xf13: @ StopAnimation()
0xf14: Pop(0)
0xf15: Return(); Pop(0)

0xf16: GOTO 0xdd4

0xf17: Return(); Pop(0)

0xf18: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xf19: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf1a: PushEmpty(bool, object, float)
0xf1b: Stack[-2] = Stack[-12]
0xf1c: Stack[-1] = (float) 70.0
0xf1d: Call2 0x1106

0xf1e: Pop(2)
0xf1f: Pop(1); Push((bool) Stack[-1] == 0)
0xf20: IF (Stack[-1] == 0) GOTO 0xf23; Pop(1)

0xf21: Stack[-10] = (int) -2
0xf22: Return(); Pop(8)

0xf23: @ CreateDialog(Stack[-4])
0xf24: Pop(0)
0xf25: PushEmpty(int)
0xf26: Call2 0x12a0

0xf27: Pop(0)
0xf28: @@ SetNPCName(Stack[-1])
0xf29: Pop(1)
0xf2a: PushEmpty(int)
0xf2b: Call2 0x129e

0xf2c: Pop(0)
0xf2d: @@ SetNPCDescription(Stack[-1])
0xf2e: Pop(1)
0xf2f: PushEmpty(string)
0xf30: Call2 0x12a2

0xf31: Pop(0)
0xf32: @@ SetPhoto(Stack[-1])
0xf33: Pop(1)
0xf34: PushEmpty(string)
0xf35: Call2 0x12a4

0xf36: Pop(0)
0xf37: @@ SetPhoto2(Stack[-1])
0xf38: Pop(1)
0xf39: PushEmpty(int)
0xf3a: Call2 0x14e6

0xf3b: Pop(0)
0xf3c: @@ SetPlayerName(Stack[-1])
0xf3d: Pop(1)
0xf3e: Stack[-2] = (int) -1
0xf3f: @ IsOverrideActive(Stack[-3])
0xf40: Pop(0)
0xf41: Push(Stack[-3])
0xf42: IF (Stack[-1] == 0) GOTO 0xf45; Pop(1)

0xf43: Stack[-10] = (int) -2
0xf44: Return(); Pop(8)

0xf45: @ DoDialog(Stack[-4])
0xf46: Pop(0)
0xf47: PushEmpty(bool, object)
0xf48: PushEmpty(object)
0xf49: Call2 0x121a

0xf4a: Stack[-2] = Stack[-1]
0xf4b: Pop(1)
0xf4c: Call2 0x115b

0xf4d: Pop(2)
0xf4e: PushEmpty(object, object)
0xf4f: Stack[-2] = Stack[-11]
0xf50: Stack[-1] = Stack[-6]
0xf51: Push(-2, 4); TaskCall(17)
0xf52: Call2 0xf69

0xf53: Pop(-2, 4); TaskReturn
0xf54: Pop(2)
0xf55: @@ IsDialogEnd(Stack[-1])
0xf56: Pop(0)
0xf57: Pop(0); Push((bool) Stack[-1] == 0)
0xf58: IF (Stack[-1] == 0) GOTO 0xf5e; Pop(1)

0xf59: @ sync()
0xf5a: Pop(0)
0xf5b: @@ IsDialogEnd(Stack[-1])
0xf5c: Pop(0)
0xf5d: GOTO 0xf57

0xf5e: PushEmpty(object)
0xf5f: Stack[-1] = Stack[-10]
0xf60: Call2 0x114a

0xf61: Pop(1)
0xf62: @ StopDialog(Stack[-4])
0xf63: Pop(0)
0xf64: @@ GetReturnValue(Stack[-2])
0xf65: Pop(0)
0xf66: Stack[-10] = Stack[-2]
0xf67: Return(); Pop(8)

0xf68: Stack[-4] = 0
0xf69: PushEmpty()
0xf6a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xf6b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xf6c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xf6d: Push((int) 1)
0xf6e: IF (Stack[-1] == 0) GOTO 0xf85; Pop(1)

0xf6f: PushEmpty(string)
0xf70: Stack[-1] = "Neutral"
0xf71: Call2 0xfa3

0xf72: Pop(1)
0xf73: Push((int) 540551)
0xf74: @@ SetMessage(Stack[-1])
0xf75: Pop(1)
0xf76: @@ ClearReplies()
0xf77: Pop(0)
0xf78: Push((int) 540552)
0xf79: Push((int) -1)
0xf7a: Push((int) 42561)
0xf7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7c: Pop(3)
0xf7d: Push((int) 540795)
0xf7e: Push((int) -1)
0xf7f: Push((int) 42844)
0xf80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf81: Pop(3)
0xf82: GOTO 0xf85

0xf83: Return(); Pop(0)

0xf84: GOTO 0xf6d

0xf85: PushEmpty(bool)
0xf86: Call2 0x12a6

0xf87: Pop(0)
0xf88: IF (Stack[-1] == 0) GOTO 0xf94; Pop(1)

0xf89: @ lshWaitForAnimEnd()
0xf8a: Pop(0)
0xf8b: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf8c: IF (Stack[-1] == 0) GOTO 0xf8e; Pop(1)

0xf8d: GOTO 0xf93

0xf8e: PushEmpty(string)
0xf8f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xf90: Call2 0x11e5

0xf91: Pop(1)
0xf92: GOTO 0xf89

0xf93: GOTO 0xfa2

0xf94: Push("all")
0xf95: Push("idle")
0xf96: @ PlayAnimation(Stack[-2], Stack[-1])
0xf97: Pop(2)
0xf98: @ WaitForAnimEnd()
0xf99: Pop(0)
0xf9a: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf9b: IF (Stack[-1] == 0) GOTO 0xf9d; Pop(1)

0xf9c: GOTO 0xfa2

0xf9d: Push("all")
0xf9e: Push("idle")
0xf9f: @ PlayAnimation(Stack[-2], Stack[-1])
0xfa0: Pop(2)
0xfa1: GOTO 0xf98

0xfa2: Return(); Pop(0)

0xfa3: PushEmpty()
0xfa4: PushEmpty(bool)
0xfa5: Call2 0x12a6

0xfa6: Pop(0)
0xfa7: Pop(1); Push((bool) Stack[-1] == 0)
0xfa8: IF (Stack[-1] == 0) GOTO 0xfaa; Pop(1)

0xfa9: Return(); Pop(0)

0xfaa: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xfab: IF (Stack[-1] == 0) GOTO 0xfad; Pop(1)

0xfac: Return(); Pop(0)

0xfad: PushEmpty(string, bool)
0xfae: Stack[-2] = Stack[-3]
0xfaf: Push("")
0xfb0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xfb1: IF (Stack[-1] == 0) GOTO 0xfb4; Pop(1)

0xfb2: Stack[-1] = (bool) 0
0xfb3: GOTO 0xfb5

0xfb4: Stack[-1] = (bool) 1
0xfb5: Call2 0x11f5

0xfb6: Pop(2)
0xfb7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xfb8: Return(); Pop(0)

0xfb9: PushEmpty()
0xfba: Push((int) 1)
0xfbb: IF (Stack[-1] == 0) GOTO 0xfe2; Pop(1)

0xfbc: PushEmpty()
0xfbd: Call2 0x1213

0xfbe: Pop(0)
0xfbf: Push((int) 42560)
0xfc0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc1: IF (Stack[-1] == 0) GOTO 0xfd6; Pop(1)

0xfc2: PushEmpty(string)
0xfc3: Stack[-1] = "Neutral"
0xfc4: Call2 0xfa3

0xfc5: Pop(1)
0xfc6: Push((int) 540551)
0xfc7: @@ SetMessage(Stack[-1])
0xfc8: Pop(1)
0xfc9: @@ ClearReplies()
0xfca: Pop(0)
0xfcb: Push((int) 540552)
0xfcc: Push((int) -1)
0xfcd: Push((int) 42561)
0xfce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfcf: Pop(3)
0xfd0: Push((int) 540795)
0xfd1: Push((int) -1)
0xfd2: Push((int) 42844)
0xfd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd4: Pop(3)
0xfd5: Return(); Pop(0)

0xfd6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xfd7: PushEmpty(bool)
0xfd8: Call2 0x12a6

0xfd9: Pop(0)
0xfda: IF (Stack[-1] == 0) GOTO 0xfde; Pop(1)

0xfdb: @ lshStopAnimation()
0xfdc: Pop(0)
0xfdd: GOTO 0xfe0

0xfde: @ StopAnimation()
0xfdf: Pop(0)
0xfe0: Return(); Pop(0)

0xfe1: GOTO 0xfba

0xfe2: Return(); Pop(0)

0xfe3: Push(GlobalVars[1])
0xfe4: Stack[-1] = (bool) 0
0xfe5: GlobalVars[1] = Stack[-1]; Pop(1)
0xfe6: PushEmpty()
0xfe7: Call2 0xfea

0xfe8: Pop(0)
0xfe9: Return(); Pop(0)

0xfea: PushEmpty(bool)
0xfeb: Call2 0x1101

0xfec: Pop(0)
0xfed: Pop(1); Push((bool) Stack[-1] == 0)
0xfee: IF (Stack[-1] == 0) GOTO 0xff1; Pop(1)

0xfef: @ Hold()
0xff0: Pop(0)
0xff1: @ GetDirection(Stack[-0])
0xff2: Pop(0)
0xff3: PushEmpty()
0xff4: Call2 0x109a

0xff5: Pop(0)
0xff6: GOTO 0xff3

0xff7: Return(); Pop(0)

0xff8: PushEmpty(object, object)
0xff9: Push("player")
0xffa: @ FindActor(Stack[-2], Stack[-1])
0xffb: Pop(1)
0xffc: Pop(0); Push((bool) Stack[-1] == 0)
0xffd: IF (Stack[-1] == 0) GOTO 0x1000; Pop(1)

0xffe: Stack[-3] = (bool) 0
0xfff: Return(); Pop(2)

0x1000: PushEmpty(bool, object)
0x1001: Stack[-1] = Stack[-3]
0x1002: Call2 0x10f8

0x1003: Stack[-5] = Stack[-2]
0x1004: Pop(2)
0x1005: Return(); Pop(2)

0x1006: Stack[-1] = 0
0x1007: Push(CvectorIndex(Stack[-0], 0))
0x1008: Push(CvectorIndex(Stack[-0], 2))
0x1009: @ RotateAsync(Stack[-2], Stack[-1])
0x100a: Pop(2)
0x100b: Return(); Pop(0)

0x100c: PushEmpty(object, bool, object, bool)
0x100d: Push("player")
0x100e: @ FindActor(Stack[-3], Stack[-1])
0x100f: Pop(1)
0x1010: Pop(0); Push((bool) Stack[-2] == 0)
0x1011: IF (Stack[-1] == 0) GOTO 0x1014; Pop(1)

0x1012: Stack[-5] = (bool) 0
0x1013: Return(); Pop(4)

0x1014: PushEmpty(float, object)
0x1015: Stack[-1] = Stack[-4]
0x1016: Call2 0x10e6

0x1017: Pop(1)
0x1018: Push((float)90000.0)
0x1019: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x101a: IF (Stack[-1] == 0) GOTO 0x101d; Pop(1)

0x101b: Stack[-5] = (bool) 0
0x101c: Return(); Pop(4)

0x101d: @ CanSee(Stack[-1], Stack[-2])
0x101e: Pop(0)
0x101f: Stack[-5] = Stack[-1]
0x1020: Return(); Pop(4)

0x1021: Stack[-2] = 0
0x1022: PushEmpty(float, float)
0x1023: Push((int) 8)
0x1024: Push((int) 16)
0x1025: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1026: Pop(2)
0x1027: Push((int) 10)
0x1028: @ SetTimer(Stack[-1], Stack[-2])
0x1029: Pop(1)
0x102a: Return(); Pop(2)

0x102b: Push((int) 10)
0x102c: @ KillTimer(Stack[-1])
0x102d: Pop(1)
0x102e: Return(); Pop(0)

0x102f: PushEmpty()
0x1030: Push((int) 10)
0x1031: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1032: IF (Stack[-1] == 0) GOTO 0x1054; Pop(1)

0x1033: PushEmpty()
0x1034: Call2 0x102b

0x1035: Pop(0)
0x1036: PushEmpty(bool)
0x1037: Stack[-1] = (bool) 0
0x1038: PushEmpty(bool)
0x1039: Call2 0x1101

0x103a: Pop(0)
0x103b: IF (Stack[-1] == 0) GOTO 0x1041; Pop(1)

0x103c: PushEmpty(bool)
0x103d: Call2 0x100c

0x103e: Pop(0)
0x103f: IF (Stack[-1] == 0) GOTO 0x1041; Pop(1)

0x1040: Stack[-1] = (bool) 1
0x1041: IF (Stack[-1] == 0) GOTO 0x104e; Pop(1)

0x1042: PushEmpty(bool)
0x1043: Call2 0xff8

0x1044: Pop(0)
0x1045: IF (Stack[-1] == 0) GOTO 0x104d; Pop(1)

0x1046: PushEmpty(bool, object)
0x1047: PushEmpty(object)
0x1048: Call2 0x121a

0x1049: Stack[-2] = Stack[-1]
0x104a: Pop(1)
0x104b: Call2 0x1195

0x104c: Pop(2)
0x104d: GOTO 0x1054

0x104e: PushEmpty()
0x104f: Call2 0x1007

0x1050: Pop(0)
0x1051: PushEmpty()
0x1052: Call2 0x1022

0x1053: Pop(0)
0x1054: Return(); Pop(0)

0x1055: PushEmpty()
0x1056: Call2 0x10e1

0x1057: Pop(0)
0x1058: PushEmpty()
0x1059: Call2 0x102b

0x105a: Pop(0)
0x105b: @ lshStopSpeech()
0x105c: Pop(0)
0x105d: @ lshStopAnimation()
0x105e: Pop(0)
0x105f: @ StopAsync()
0x1060: Pop(0)
0x1061: @ Hold()
0x1062: Pop(0)
0x1063: Return(); Pop(0)

0x1064: @ StopGroup0()
0x1065: Pop(0)
0x1066: PushEmpty()
0x1067: Call2 0x102b

0x1068: Pop(0)
0x1069: PushEmpty(string)
0x106a: Stack[-1] = "Neutral"
0x106b: Call2 0x11e5

0x106c: Pop(1)
0x106d: PushEmpty()
0x106e: Call2 0x1022

0x106f: Pop(0)
0x1070: Return(); Pop(0)

0x1071: PushEmpty()
0x1072: Push(Stack[-1])
0x1073: IF (Stack[-1] == 0) GOTO 0x1078; Pop(1)

0x1074: PushEmpty()
0x1075: Call2 0x1022

0x1076: Pop(0)
0x1077: GOTO 0x107c

0x1078: PushEmpty(string)
0x1079: Stack[-1] = "Neutral"
0x107a: Call2 0x11e5

0x107b: Pop(1)
0x107c: Return(); Pop(0)

0x107d: PushEmpty(bool, bool)
0x107e: @ IsOverrideActive(Stack[-1])
0x107f: Pop(0)
0x1080: Pop(0); Push((bool) Stack[-1] == 0)
0x1081: IF (Stack[-1] == 0) GOTO 0x1099; Pop(1)

0x1082: EventDisable(0)
0x1083: PushEmpty()
0x1084: Call2 0x10e1

0x1085: Pop(0)
0x1086: PushEmpty(bool, object)
0x1087: Stack[-1] = Stack[-5]
0x1088: Call2 0x10f8

0x1089: Pop(2)
0x108a: EventEnable(0)
0x108b: PushEmpty(object)
0x108c: Stack[-1] = Stack[-4]
0x108d: Call2 0x14f7

0x108e: Pop(1)
0x108f: PushEmpty(string)
0x1090: Stack[-1] = "Neutral"
0x1091: Call2 0x11e5

0x1092: Pop(1)
0x1093: PushEmpty()
0x1094: Call2 0x102b

0x1095: Pop(0)
0x1096: PushEmpty()
0x1097: Call2 0x1022

0x1098: Pop(0)
0x1099: Return(); Pop(2)

0x109a: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x109b: @ WaitForAnimEnd()
0x109c: Pop(0)
0x109d: PushEmpty(bool)
0x109e: Call2 0x1101

0x109f: Pop(0)
0x10a0: Pop(1); Push((bool) Stack[-1] == 0)
0x10a1: IF (Stack[-1] == 0) GOTO 0x10a3; Pop(1)

0x10a2: Return(); Pop(12)

0x10a3: PushEmpty(int)
0x10a4: Call2 0x128d

0x10a5: Stack[-7] = Stack[-1]
0x10a6: Pop(1)
0x10a7: Stack[-5] = (int) 0
0x10a8: PushEmpty(bool)
0x10a9: Stack[-1] = (bool) 0
0x10aa: Push((int) 5)
0x10ab: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x10ac: IF (Stack[-1] == 0) GOTO 0x10b2; Pop(1)

0x10ad: PushEmpty(bool)
0x10ae: Call2 0x1101

0x10af: Pop(0)
0x10b0: IF (Stack[-1] == 0) GOTO 0x10b2; Pop(1)

0x10b1: Stack[-1] = (bool) 1
0x10b2: IF (Stack[-1] == 0) GOTO 0x10dc; Pop(1)

0x10b3: Pop(0); Push((bool) Stack[-6] == 0)
0x10b4: IF (Stack[-1] == 0) GOTO 0x10bc; Pop(1)

0x10b5: Push((int) 3)
0x10b6: @ Sleep(Stack[-1], Stack[-5])
0x10b7: Pop(1)
0x10b8: Pop(0); Push((bool) Stack[-4] == 0)
0x10b9: IF (Stack[-1] == 0) GOTO 0x10bb; Pop(1)

0x10ba: GOTO 0x10dc

0x10bb: GOTO 0x10d1

0x10bc: @ irand(Stack[-3], Stack[-6])
0x10bd: Pop(0)
0x10be: Push((int) 5)
0x10bf: @ irand(Stack[-3], Stack[-1])
0x10c0: Pop(1)
0x10c1: Push((int) 0)
0x10c2: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x10c3: IF (Stack[-1] == 0) GOTO 0x10c5; Pop(1)

0x10c4: Stack[-3] = (int) 0
0x10c5: Push("all")
0x10c6: PushEmpty(string, int)
0x10c7: Stack[-1] = Stack[-6]
0x10c8: Call2 0x1286

0x10c9: Pop(1)
0x10ca: @ PlayAnimation(Stack[-2], Stack[-1])
0x10cb: Pop(2)
0x10cc: @ WaitForAnimEnd(Stack[-1])
0x10cd: Pop(0)
0x10ce: Pop(0); Push((bool) Stack[-1] == 0)
0x10cf: IF (Stack[-1] == 0) GOTO 0x10d1; Pop(1)

0x10d0: GOTO 0x10dc

0x10d1: PushEmpty(bool)
0x10d2: Call2 0x10df

0x10d3: Pop(0)
0x10d4: Pop(1); Push((bool) Stack[-1] == 0)
0x10d5: IF (Stack[-1] == 0) GOTO 0x10d7; Pop(1)

0x10d6: GOTO 0x10dc

0x10d7: @ ResetAAS()
0x10d8: Pop(0)
0x10d9: Push((int) 1)
0x10da: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x10db: GOTO 0x10a8

0x10dc: @ ResetAAS()
0x10dd: Pop(0)
0x10de: Return(); Pop(12)

0x10df: Stack[-1] = (bool) 1
0x10e0: Return(); Pop(0)

0x10e1: @ StopAnimation()
0x10e2: Pop(0)
0x10e3: @ StopGroup0()
0x10e4: Pop(0)
0x10e5: Return(); Pop(0)

0x10e6: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x10e7: @ GetPosition(Stack[-3])
0x10e8: Pop(0)
0x10e9: @@ GetPosition(Stack[-2])
0x10ea: Pop(0)
0x10eb: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x10ec: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x10ed: Return(); Pop(6)

0x10ee: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x10ef: @ GetPosition(Stack[-3])
0x10f0: Pop(0)
0x10f1: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x10f2: Push(CvectorIndex(Stack[-2], 0))
0x10f3: Push(CvectorIndex(Stack[-3], 2))
0x10f4: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x10f5: Pop(2)
0x10f6: Stack[-8] = Stack[-1]
0x10f7: Return(); Pop(6)

0x10f8: PushEmpty(cvector, cvector)
0x10f9: @@ GetPosition(Stack[-1])
0x10fa: Pop(0)
0x10fb: PushEmpty(bool, cvector)
0x10fc: Stack[-1] = Stack[-3]
0x10fd: Call2 0x10ee

0x10fe: Stack[-6] = Stack[-2]
0x10ff: Pop(2)
0x1100: Return(); Pop(2)

0x1101: PushEmpty(bool, bool)
0x1102: @ IsLoaded(Stack[-1])
0x1103: Pop(0)
0x1104: Stack[-3] = Stack[-1]
0x1105: Return(); Pop(2)

0x1106: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1107: @@ GetPosition(Stack[-8])
0x1108: Pop(0)
0x1109: @@ GetEyesHeight(Stack[-9])
0x110a: Pop(0)
0x110b: Push(CvectorIndex(Stack[-8], 1))
0x110c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x110d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x110e: @ GetPosition(Stack[-7])
0x110f: Pop(0)
0x1110: @ GetEyesHeight(Stack[-9])
0x1111: Pop(0)
0x1112: Push(CvectorIndex(Stack[-7], 1))
0x1113: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1114: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1115: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1116: Push(CvectorIndex(Stack[-6], 1))
0x1117: Stack[-1] = (int) 0
0x1118: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1119: Pop(0); Push(Stack[-6] | Stack[-6]);
0x111a: Pop(1); Push(Sqrt(Stack[-1]))
0x111b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x111c: Stack[-5] = -Stack[-6]; Pop(0);
0x111d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x111e: PushEmpty(cvector, cvector)
0x111f: Push(CVector(0.0, 1.0, 0.0))
0x1120: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1121: Call2 0x1220

0x1122: Pop(1)
0x1123: Push((int) 25)
0x1124: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1125: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1126: Push(CVector(0.0, 10.0, 0.0))
0x1127: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1128: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1129: @ IsOverrideActive(Stack[-2])
0x112a: Pop(0)
0x112b: Push(Stack[-2])
0x112c: IF (Stack[-1] == 0) GOTO 0x112f; Pop(1)

0x112d: Stack[-21] = (bool) 0
0x112e: Return(); Pop(18)

0x112f: @ StopWorld()
0x1130: Pop(0)
0x1131: @ CameraTransit(Stack[-3], Stack[-5])
0x1132: Pop(0)
0x1133: Push(CvectorIndex(Stack[-4], 0))
0x1134: Push(CvectorIndex(Stack[-5], 2))
0x1135: @ Rotate(Stack[-2], Stack[-1])
0x1136: Pop(2)
0x1137: PushEmpty(bool)
0x1138: Call2 0x12a6

0x1139: Pop(0)
0x113a: IF (Stack[-1] == 0) GOTO 0x113c; Pop(1)

0x113b: GOTO 0x1144

0x113c: Push("head")
0x113d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x113e: Pop(1)
0x113f: Push(Stack[-1])
0x1140: IF (Stack[-1] == 0) GOTO 0x1144; Pop(1)

0x1141: Push("head")
0x1142: @ LookAsyncCamera(Stack[-1])
0x1143: Pop(1)
0x1144: @ CameraWaitForPlayFinish()
0x1145: Pop(0)
0x1146: @ ResumeWorld()
0x1147: Pop(0)
0x1148: Stack[-21] = (bool) 1
0x1149: Return(); Pop(18)

0x114a: PushEmpty(bool, bool)
0x114b: @ CameraSwitchToNormal()
0x114c: Pop(0)
0x114d: PushEmpty(bool)
0x114e: Call2 0x12a6

0x114f: Pop(0)
0x1150: IF (Stack[-1] == 0) GOTO 0x1152; Pop(1)

0x1151: GOTO 0x115a

0x1152: Push("head")
0x1153: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1154: Pop(1)
0x1155: Push(Stack[-1])
0x1156: IF (Stack[-1] == 0) GOTO 0x115a; Pop(1)

0x1157: Push("head")
0x1158: @ UnlookAsync(Stack[-1])
0x1159: Pop(1)
0x115a: Return(); Pop(2)

0x115b: PushEmpty(int, int, int, int)
0x115c: Push("voice_common")
0x115d: @ GetVariable(Stack[-1], Stack[-3])
0x115e: Pop(1)
0x115f: Push(Stack[-2])
0x1160: IF (Stack[-1] == 0) GOTO 0x1181; Pop(1)

0x1161: PushEmpty(bool, object)
0x1162: Stack[-1] = Stack[-7]
0x1163: Call2 0x1195

0x1164: Pop(1)
0x1165: Pop(1); Push((bool) Stack[-1] == 0)
0x1166: IF (Stack[-1] == 0) GOTO 0x116f; Pop(1)

0x1167: PushEmpty(bool, object)
0x1168: Stack[-1] = Stack[-7]
0x1169: Call2 0x11ba

0x116a: Pop(1)
0x116b: Pop(1); Push((bool) Stack[-1] == 0)
0x116c: IF (Stack[-1] == 0) GOTO 0x116f; Pop(1)

0x116d: Stack[-6] = (bool) 0
0x116e: Return(); Pop(4)

0x116f: Push((int) 2)
0x1170: @ irand(Stack[-2], Stack[-1])
0x1171: Pop(1)
0x1172: Push(Stack[-1])
0x1173: IF (Stack[-1] == 0) GOTO 0x117c; Pop(1)

0x1174: Push("voice_common")
0x1175: Push((int) 1)
0x1176: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1177: Push((int) 3)
0x1178: Pop(2); Push(Stack[-2] % Stack[-1]);
0x1179: @ SetVariable(Stack[-2], Stack[-1])
0x117a: Pop(2)
0x117b: GOTO 0x1180

0x117c: Push("voice_common")
0x117d: Push((int) 0)
0x117e: @ SetVariable(Stack[-2], Stack[-1])
0x117f: Pop(2)
0x1180: GOTO 0x1193

0x1181: PushEmpty(bool, object)
0x1182: Stack[-1] = Stack[-7]
0x1183: Call2 0x11ba

0x1184: Pop(1)
0x1185: Pop(1); Push((bool) Stack[-1] == 0)
0x1186: IF (Stack[-1] == 0) GOTO 0x118f; Pop(1)

0x1187: PushEmpty(bool, object)
0x1188: Stack[-1] = Stack[-7]
0x1189: Call2 0x1195

0x118a: Pop(1)
0x118b: Pop(1); Push((bool) Stack[-1] == 0)
0x118c: IF (Stack[-1] == 0) GOTO 0x118f; Pop(1)

0x118d: Stack[-6] = (bool) 0
0x118e: Return(); Pop(4)

0x118f: Push("voice_common")
0x1190: Push((int) 1)
0x1191: @ SetVariable(Stack[-2], Stack[-1])
0x1192: Pop(2)
0x1193: Stack[-6] = (bool) 1
0x1194: Return(); Pop(4)

0x1195: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1196: Stack[-5] = "c"
0x1197: Stack[-4] = (int) 0
0x1198: Push((int) 1)
0x1199: IF (Stack[-1] == 0) GOTO 0x11a5; Pop(1)

0x119a: Push((int) 1)
0x119b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x119c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x119d: @@ HasProperty(Stack[-1], Stack[-4])
0x119e: Pop(1)
0x119f: Pop(0); Push((bool) Stack[-3] == 0)
0x11a0: IF (Stack[-1] == 0) GOTO 0x11a2; Pop(1)

0x11a1: GOTO 0x11a5

0x11a2: Push((int) 1)
0x11a3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x11a4: GOTO 0x1198

0x11a5: Pop(0); Push((bool) Stack[-4] == 0)
0x11a6: IF (Stack[-1] == 0) GOTO 0x11a9; Pop(1)

0x11a7: Stack[-12] = (bool) 0
0x11a8: Return(); Pop(10)

0x11a9: Stack[-2] = (int) 0
0x11aa: Push((int) 1)
0x11ab: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x11ac: IF (Stack[-1] == 0) GOTO 0x11af; Pop(1)

0x11ad: @ irand(Stack[-2], Stack[-4])
0x11ae: Pop(0)
0x11af: Push((int) 1)
0x11b0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x11b1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x11b2: @@ GetProperty(Stack[-1], Stack[-2])
0x11b3: Pop(1)
0x11b4: PushEmpty(bool, string)
0x11b5: Stack[-1] = Stack[-3]
0x11b6: Call2 0x1204

0x11b7: Stack[-14] = Stack[-2]
0x11b8: Pop(2)
0x11b9: Return(); Pop(10)

0x11ba: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x11bb: Push("d")
0x11bc: PushEmpty(int)
0x11bd: Call2 0x1277

0x11be: Pop(0)
0x11bf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11c0: Push("m")
0x11c1: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x11c2: Stack[-4] = (int) 0
0x11c3: Push((int) 1)
0x11c4: IF (Stack[-1] == 0) GOTO 0x11d0; Pop(1)

0x11c5: Push((int) 1)
0x11c6: Pop(1); Push(Stack[-5] + Stack[-1]);
0x11c7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x11c8: @@ HasProperty(Stack[-1], Stack[-4])
0x11c9: Pop(1)
0x11ca: Pop(0); Push((bool) Stack[-3] == 0)
0x11cb: IF (Stack[-1] == 0) GOTO 0x11cd; Pop(1)

0x11cc: GOTO 0x11d0

0x11cd: Push((int) 1)
0x11ce: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x11cf: GOTO 0x11c3

0x11d0: Pop(0); Push((bool) Stack[-4] == 0)
0x11d1: IF (Stack[-1] == 0) GOTO 0x11d4; Pop(1)

0x11d2: Stack[-12] = (bool) 0
0x11d3: Return(); Pop(10)

0x11d4: Stack[-2] = (int) 0
0x11d5: Push((int) 1)
0x11d6: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x11d7: IF (Stack[-1] == 0) GOTO 0x11da; Pop(1)

0x11d8: @ irand(Stack[-2], Stack[-4])
0x11d9: Pop(0)
0x11da: Push((int) 1)
0x11db: Pop(1); Push(Stack[-3] + Stack[-1]);
0x11dc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x11dd: @@ GetProperty(Stack[-1], Stack[-2])
0x11de: Pop(1)
0x11df: PushEmpty(bool, string)
0x11e0: Stack[-1] = Stack[-3]
0x11e1: Call2 0x1204

0x11e2: Stack[-14] = Stack[-2]
0x11e3: Pop(2)
0x11e4: Return(); Pop(10)

0x11e5: PushEmpty(bool, float, float, bool, float, float)
0x11e6: @ lshHasAnimation(Stack[-3], Stack[-7])
0x11e7: Pop(0)
0x11e8: Push(Stack[-3])
0x11e9: IF (Stack[-1] == 0) GOTO 0x11f0; Pop(1)

0x11ea: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x11eb: Pop(0)
0x11ec: Push((bool) 0)
0x11ed: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x11ee: Pop(1)
0x11ef: GOTO 0x11f4

0x11f0: Push("Can't find lsh animation : ")
0x11f1: Pop(1); Push(Stack[-1] + Stack[-8]);
0x11f2: @ Trace(Stack[-1])
0x11f3: Pop(1)
0x11f4: Return(); Pop(6)

0x11f5: PushEmpty(bool, float, float, bool, float, float)
0x11f6: @ lshHasAnimation(Stack[-3], Stack[-8])
0x11f7: Pop(0)
0x11f8: Push(Stack[-3])
0x11f9: IF (Stack[-1] == 0) GOTO 0x11ff; Pop(1)

0x11fa: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x11fb: Pop(0)
0x11fc: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x11fd: Pop(0)
0x11fe: GOTO 0x1203

0x11ff: Push("Can't find lsh animation : ")
0x1200: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1201: @ Trace(Stack[-1])
0x1202: Pop(1)
0x1203: Return(); Pop(6)

0x1204: PushEmpty(bool, bool)
0x1205: PushEmpty(bool)
0x1206: Call2 0x12a6

0x1207: Pop(0)
0x1208: IF (Stack[-1] == 0) GOTO 0x1211; Pop(1)

0x1209: @ lshHasSpeech(Stack[-1], Stack[-3])
0x120a: Pop(0)
0x120b: Push(Stack[-1])
0x120c: IF (Stack[-1] == 0) GOTO 0x1211; Pop(1)

0x120d: @ lshPlaySpeech(Stack[-3])
0x120e: Pop(0)
0x120f: Stack[-4] = (bool) 1
0x1210: Return(); Pop(2)

0x1211: Stack[-4] = (bool) 0
0x1212: Return(); Pop(2)

0x1213: PushEmpty(bool)
0x1214: Call2 0x12a6

0x1215: Pop(0)
0x1216: IF (Stack[-1] == 0) GOTO 0x1219; Pop(1)

0x1217: @ lshStopSpeech()
0x1218: Pop(0)
0x1219: Return(); Pop(0)

0x121a: PushEmpty(object, object)
0x121b: @ self(Stack[-1])
0x121c: Pop(0)
0x121d: Stack[-3] = Stack[-1]
0x121e: Return(); Pop(2)

0x121f: Stack[-1] = 0
0x1220: PushEmpty(float, float)
0x1221: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1222: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1223: Push((float)0.0)
0x1224: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1225: IF (Stack[-1] == 0) GOTO 0x1228; Pop(1)

0x1226: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1227: Return(); Pop(2)

0x1228: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1229: Return(); Pop(2)

0x122a: PushEmpty(int, int)
0x122b: @ GetVariable(Stack[-3], Stack[-1])
0x122c: Pop(0)
0x122d: Stack[-4] = Stack[-1]
0x122e: Return(); Pop(2)

0x122f: PushEmpty(object, object, object, object)
0x1230: @ GetMainOutdoorScene(Stack[-2])
0x1231: Pop(0)
0x1232: Push(".bin")
0x1233: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1234: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x1235: Pop(1)
0x1236: Stack[-6] = Stack[-1]
0x1237: Return(); Pop(4)

0x1238: Stack[-1] = 0
0x1239: Stack[-2] = 0
0x123a: PushEmpty(object, object)
0x123b: @ CreateIntVector(Stack[-1])
0x123c: Pop(0)
0x123d: @@ add(Stack[-4])
0x123e: Pop(0)
0x123f: @@ add(Stack[-3])
0x1240: Pop(0)
0x1241: Push((int) 3)
0x1242: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x1243: Pop(1)
0x1244: Return(); Pop(2)

0x1245: Stack[-1] = 0
0x1246: PushEmpty(int, int, bool, int, int, bool)
0x1247: @@ GetItemID(Stack[-3])
0x1248: Pop(0)
0x1249: Push("Category")
0x124a: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x124b: Pop(1)
0x124c: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x124d: Pop(0)
0x124e: Pop(0); Push((bool) Stack[-1] == 0)
0x124f: IF (Stack[-1] == 0) GOTO 0x1253; Pop(1)

0x1250: @@ DropItems(Stack[-8], Stack[-7])
0x1251: Pop(0)
0x1252: GOTO 0x1258

0x1253: PushEmpty(int, int)
0x1254: Stack[-2] = Stack[-5]
0x1255: Stack[-1] = Stack[-9]
0x1256: Call2 0x123a

0x1257: Pop(2)
0x1258: Return(); Pop(6)

0x1259: PushEmpty(object, object)
0x125a: @ CreateInvItem(Stack[-1])
0x125b: Pop(0)
0x125c: @@ SetItemName(Stack[-4])
0x125d: Pop(0)
0x125e: PushEmpty(object, object, int)
0x125f: Stack[-3] = Stack[-8]
0x1260: Stack[-2] = Stack[-4]
0x1261: Stack[-1] = Stack[-6]
0x1262: Call2 0x1246

0x1263: Pop(3)
0x1264: Return(); Pop(2)

0x1265: Stack[-1] = 0
0x1266: PushEmpty(object, object)
0x1267: @ FindActor(Stack[-1], Stack[-4])
0x1268: Pop(0)
0x1269: Pop(0); Push((bool) Stack[-1] == 0)
0x126a: IF (Stack[-1] == 0) GOTO 0x126d; Pop(1)

0x126b: Stack[-5] = (bool) 0
0x126c: Return(); Pop(2)

0x126d: @ Trigger(Stack[-1], Stack[-3])
0x126e: Pop(0)
0x126f: Stack[-5] = (bool) 1
0x1270: Return(); Pop(2)

0x1271: Stack[-1] = 0
0x1272: PushEmpty(float, float)
0x1273: @ GetGameTime(Stack[-1])
0x1274: Pop(0)
0x1275: Stack[-3] = Stack[-1]
0x1276: Return(); Pop(2)

0x1277: PushEmpty(float, float)
0x1278: @ GetGameTime(Stack[-1])
0x1279: Pop(0)
0x127a: Push((int) 1)
0x127b: PushEmpty(int)
0x127c: Push((int) 24)
0x127d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x127e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x127f: Return(); Pop(2)

0x1280: PushEmpty()
0x1281: PushEmpty(int)
0x1282: Call2 0x1277

0x1283: Pop(0)
0x1284: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x1285: Return(); Pop(0)

0x1286: PushEmpty(string, string)
0x1287: Stack[-1] = "idle"
0x1288: Push(Stack[-3])
0x1289: IF (Stack[-1] == 0) GOTO 0x128b; Pop(1)

0x128a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x128b: Stack[-4] = Stack[-1]
0x128c: Return(); Pop(2)

0x128d: PushEmpty(int, bool, int, bool)
0x128e: Stack[-2] = (int) 0
0x128f: Push("all")
0x1290: PushEmpty(string, int)
0x1291: Stack[-1] = Stack[-5]
0x1292: Call2 0x1286

0x1293: Pop(1)
0x1294: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1295: Pop(2)
0x1296: Pop(0); Push((bool) Stack[-1] == 0)
0x1297: IF (Stack[-1] == 0) GOTO 0x1299; Pop(1)

0x1298: GOTO 0x129c

0x1299: Push((int) 1)
0x129a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x129b: GOTO 0x128f

0x129c: Stack[-5] = Stack[-2]
0x129d: Return(); Pop(4)

0x129e: Stack[-1] = (int) 515549
0x129f: Return(); Pop(0)

0x12a0: Stack[-1] = (int) 502874
0x12a1: Return(); Pop(0)

0x12a2: Stack[-1] = "ui/NPC_Ospina.png"
0x12a3: Return(); Pop(0)

0x12a4: Stack[-1] = "ui/NPC_Ospina_b.png"
0x12a5: Return(); Pop(0)

0x12a6: Stack[-1] = (bool) 1
0x12a7: Return(); Pop(0)

0x12a8: PushEmpty()
0x12a9: Push("oob5Ospina1")
0x12aa: Push((int) 1)
0x12ab: @ SetVariable(Stack[-2], Stack[-1])
0x12ac: Pop(2)
0x12ad: Return(); Pop(0)

0x12ae: PushEmpty(object, object)
0x12af: PushEmpty(int, string)
0x12b0: Stack[-1] = "b5q01PlaceButchers"
0x12b1: Call2 0x122a

0x12b2: Pop(1)
0x12b3: Push((int) 0)
0x12b4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12b5: IF (Stack[-1] == 0) GOTO 0x12cd; Pop(1)

0x12b6: Push("b5q01PlaceButchers")
0x12b7: Push((int) 1)
0x12b8: @ SetVariable(Stack[-2], Stack[-1])
0x12b9: Pop(2)
0x12ba: PushEmpty(object)
0x12bb: Call2 0x14b4

0x12bc: Stack[-2] = Stack[-1]
0x12bd: Pop(1)
0x12be: Push("b5q01GathererWife")
0x12bf: Push("pt_gatherer3")
0x12c0: Push((int) 1)
0x12c1: Push((int) 530181)
0x12c2: PushEmpty(float)
0x12c3: Call2 0x1272

0x12c4: Pop(0)
0x12c5: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12c6: Pop(5)
0x12c7: PushEmpty(bool, string, string)
0x12c8: Stack[-2] = "quest_b5_01"
0x12c9: Stack[-1] = "place_butchers"
0x12ca: Call2 0x1266

0x12cb: Pop(3)
0x12cc: Stack[-1] = 0
0x12cd: Return(); Pop(2)

0x12ce: PushEmpty()
0x12cf: Push("oob3Ospina1")
0x12d0: Push((int) 1)
0x12d1: @ SetVariable(Stack[-2], Stack[-1])
0x12d2: Pop(2)
0x12d3: Return(); Pop(0)

0x12d4: PushEmpty(object, object)
0x12d5: Push("b3q01")
0x12d6: Push((int) 2)
0x12d7: @ SetVariable(Stack[-2], Stack[-1])
0x12d8: Pop(2)
0x12d9: PushEmpty(object)
0x12da: Call2 0x14b4

0x12db: Stack[-2] = Stack[-1]
0x12dc: Pop(1)
0x12dd: Push("b3q01OspinaGotoButcher")
0x12de: Push("pt_gmap_house5_24")
0x12df: Push((int) 1)
0x12e0: Push((int) 519635)
0x12e1: PushEmpty(float)
0x12e2: Call2 0x1272

0x12e3: Pop(0)
0x12e4: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12e5: Pop(5)
0x12e6: PushEmpty()
0x12e7: Call2 0x1464

0x12e8: Pop(0)
0x12e9: PushEmpty(bool, string, string)
0x12ea: Stack[-2] = "quest_b3_01"
0x12eb: Stack[-1] = "place_butcher"
0x12ec: Call2 0x1266

0x12ed: Pop(3)
0x12ee: Return(); Pop(2)

0x12ef: Stack[-1] = 0
0x12f0: PushEmpty()
0x12f1: PushEmpty(object, string, float)
0x12f2: PushEmpty(object)
0x12f3: Call2 0x14b4

0x12f4: Stack[-4] = Stack[-1]
0x12f5: Pop(1)
0x12f6: Stack[-2] = "pt_gmap_house5_24"
0x12f7: Stack[-1] = (int) 2
0x12f8: Call2 0x14c5

0x12f9: Pop(3)
0x12fa: PushEmpty(object)
0x12fb: Call2 0x14b4

0x12fc: Pop(0)
0x12fd: @@ ShowMap(Stack[-1])
0x12fe: Pop(1)
0x12ff: Return(); Pop(0)

0x1300: PushEmpty()
0x1301: Push("oob2Ospina1")
0x1302: Push((int) 1)
0x1303: @ SetVariable(Stack[-2], Stack[-1])
0x1304: Pop(2)
0x1305: Return(); Pop(0)

0x1306: PushEmpty()
0x1307: Push("oob2Ospina2")
0x1308: Push((int) 1)
0x1309: @ SetVariable(Stack[-2], Stack[-1])
0x130a: Pop(2)
0x130b: Return(); Pop(0)

0x130c: PushEmpty()
0x130d: Push("oob2Ospina3")
0x130e: Push((int) 1)
0x130f: @ SetVariable(Stack[-2], Stack[-1])
0x1310: Pop(2)
0x1311: Return(); Pop(0)

0x1312: PushEmpty()
0x1313: Push("oob2Ospina4")
0x1314: Push((int) 1)
0x1315: @ SetVariable(Stack[-2], Stack[-1])
0x1316: Pop(2)
0x1317: Return(); Pop(0)

0x1318: PushEmpty(object, object)
0x1319: PushEmpty(int, string)
0x131a: Stack[-1] = "b2TravnikMark"
0x131b: Call2 0x122a

0x131c: Pop(1)
0x131d: Push((int) 0)
0x131e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x131f: IF (Stack[-1] == 0) GOTO 0x1344; Pop(1)

0x1320: Push("b2TravnikMark")
0x1321: Push((int) 1)
0x1322: @ SetVariable(Stack[-2], Stack[-1])
0x1323: Pop(2)
0x1324: PushEmpty(object)
0x1325: Call2 0x14b4

0x1326: Stack[-2] = Stack[-1]
0x1327: Pop(1)
0x1328: Push("b2Travnik1")
0x1329: Push("pt_map_gatherer1")
0x132a: Push((int) 3)
0x132b: Push((int) 520463)
0x132c: PushEmpty(float)
0x132d: Call2 0x1272

0x132e: Pop(0)
0x132f: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1330: Pop(5)
0x1331: Push("b2Travnik2")
0x1332: Push("pt_map_gatherer2")
0x1333: Push((int) 3)
0x1334: Push((int) 520464)
0x1335: PushEmpty(float)
0x1336: Call2 0x1272

0x1337: Pop(0)
0x1338: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1339: Pop(5)
0x133a: Push("b2Travnik3")
0x133b: Push("pt_map_gatherer3")
0x133c: Push((int) 3)
0x133d: Push((int) 520465)
0x133e: PushEmpty(float)
0x133f: Call2 0x1272

0x1340: Pop(0)
0x1341: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1342: Pop(5)
0x1343: Stack[-1] = 0
0x1344: Return(); Pop(2)

0x1345: PushEmpty()
0x1346: Push("b8q01")
0x1347: Push((int) 6)
0x1348: @ SetVariable(Stack[-2], Stack[-1])
0x1349: Pop(2)
0x134a: PushEmpty()
0x134b: Call2 0x147e

0x134c: Pop(0)
0x134d: Return(); Pop(0)

0x134e: PushEmpty()
0x134f: Push("oob10Ospina1")
0x1350: Push((int) 1)
0x1351: @ SetVariable(Stack[-2], Stack[-1])
0x1352: Pop(2)
0x1353: Return(); Pop(0)

0x1354: PushEmpty()
0x1355: Push("b11q01KnowWhoKilled")
0x1356: Push((int) 1)
0x1357: @ SetVariable(Stack[-2], Stack[-1])
0x1358: Pop(2)
0x1359: PushEmpty()
0x135a: Call2 0x1457

0x135b: Pop(0)
0x135c: Return(); Pop(0)

0x135d: PushEmpty()
0x135e: Push("oob11Ospina1")
0x135f: Push((int) 1)
0x1360: @ SetVariable(Stack[-2], Stack[-1])
0x1361: Pop(2)
0x1362: Return(); Pop(0)

0x1363: PushEmpty()
0x1364: PushEmpty()
0x1365: Call2 0x1471

0x1366: Pop(0)
0x1367: Return(); Pop(0)

0x1368: PushEmpty()
0x1369: PushEmpty(object, string, float)
0x136a: PushEmpty(object)
0x136b: Call2 0x14b4

0x136c: Stack[-4] = Stack[-1]
0x136d: Pop(1)
0x136e: Stack[-2] = "pt_gatherer3"
0x136f: Stack[-1] = (int) 2
0x1370: Call2 0x14c5

0x1371: Pop(3)
0x1372: PushEmpty(object)
0x1373: Call2 0x14b4

0x1374: Pop(0)
0x1375: @@ ShowMap(Stack[-1])
0x1376: Pop(1)
0x1377: Return(); Pop(0)

0x1378: PushEmpty()
0x1379: Push("playsound")
0x137a: Push("giveitem")
0x137b: @ TriggerWorld(Stack[-2], Stack[-1])
0x137c: Pop(2)
0x137d: Return(); Pop(0)

0x137e: PushEmpty()
0x137f: Push("b2q01")
0x1380: Push((int) 3)
0x1381: @ SetVariable(Stack[-2], Stack[-1])
0x1382: Pop(2)
0x1383: PushEmpty(bool, string, string)
0x1384: Stack[-2] = "quest_b2_01"
0x1385: Stack[-1] = "place_box"
0x1386: Call2 0x1266

0x1387: Pop(3)
0x1388: PushEmpty(object, string)
0x1389: Stack[-1] = "quest_b2_02"
0x138a: Call2 0x122f

0x138b: Pop(2)
0x138c: Return(); Pop(0)

0x138d: PushEmpty()
0x138e: Push("oob8Ospina1")
0x138f: Push((int) 1)
0x1390: @ SetVariable(Stack[-2], Stack[-1])
0x1391: Pop(2)
0x1392: Return(); Pop(0)

0x1393: PushEmpty()
0x1394: Push("b8q01_bone is given")
0x1395: @ Trace(Stack[-1])
0x1396: Pop(1)
0x1397: PushEmpty(object, string, int)
0x1398: Stack[-3] = Stack[-5]
0x1399: Stack[-2] = "b8q01_bone"
0x139a: Stack[-1] = (int) 1
0x139b: Call2 0x1259

0x139c: Pop(3)
0x139d: Return(); Pop(0)

0x139e: PushEmpty()
0x139f: PushEmpty(int, string)
0x13a0: Stack[-1] = "b8q01"
0x13a1: Call2 0x122a

0x13a2: Pop(1)
0x13a3: Push((int) 5)
0x13a4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13a5: IF (Stack[-1] == 0) GOTO 0x13a8; Pop(1)

0x13a6: Stack[-2] = (bool) 1
0x13a7: Return(); Pop(0)

0x13a8: Stack[-2] = (bool) 0
0x13a9: Return(); Pop(0)

0x13aa: PushEmpty()
0x13ab: PushEmpty(int, string)
0x13ac: Stack[-1] = "b10q01"
0x13ad: Call2 0x122a

0x13ae: Pop(1)
0x13af: Push((int) 4)
0x13b0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13b1: IF (Stack[-1] == 0) GOTO 0x13b4; Pop(1)

0x13b2: Stack[-2] = (bool) 1
0x13b3: Return(); Pop(0)

0x13b4: Stack[-2] = (bool) 0
0x13b5: Return(); Pop(0)

0x13b6: PushEmpty()
0x13b7: PushEmpty(int, string)
0x13b8: Stack[-1] = "b10q01"
0x13b9: Call2 0x122a

0x13ba: Pop(1)
0x13bb: Push((int) 1000)
0x13bc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13bd: IF (Stack[-1] == 0) GOTO 0x13c0; Pop(1)

0x13be: Stack[-2] = (bool) 1
0x13bf: Return(); Pop(0)

0x13c0: Stack[-2] = (bool) 0
0x13c1: Return(); Pop(0)

0x13c2: PushEmpty()
0x13c3: Stack[-2] = (bool) 1
0x13c4: Return(); Pop(0)

0x13c5: Stack[-2] = (bool) 0
0x13c6: Return(); Pop(0)

0x13c7: PushEmpty()
0x13c8: PushEmpty(int, string)
0x13c9: Stack[-1] = "b11q01"
0x13ca: Call2 0x122a

0x13cb: Pop(1)
0x13cc: Push((int) 1000)
0x13cd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13ce: IF (Stack[-1] == 0) GOTO 0x13d1; Pop(1)

0x13cf: Stack[-2] = (bool) 1
0x13d0: Return(); Pop(0)

0x13d1: Stack[-2] = (bool) 0
0x13d2: Return(); Pop(0)

0x13d3: PushEmpty()
0x13d4: PushEmpty(int, string)
0x13d5: Stack[-1] = "oob11Ospina1"
0x13d6: Call2 0x122a

0x13d7: Pop(1)
0x13d8: Push((int) 0)
0x13d9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13da: IF (Stack[-1] == 0) GOTO 0x13dd; Pop(1)

0x13db: Stack[-2] = (bool) 1
0x13dc: Return(); Pop(0)

0x13dd: Stack[-2] = (bool) 0
0x13de: Return(); Pop(0)

0x13df: PushEmpty()
0x13e0: PushEmpty(int, string)
0x13e1: Stack[-1] = "oob8Ospina1"
0x13e2: Call2 0x122a

0x13e3: Pop(1)
0x13e4: Push((int) 0)
0x13e5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13e6: IF (Stack[-1] == 0) GOTO 0x13e9; Pop(1)

0x13e7: Stack[-2] = (bool) 1
0x13e8: Return(); Pop(0)

0x13e9: Stack[-2] = (bool) 0
0x13ea: Return(); Pop(0)

0x13eb: PushEmpty()
0x13ec: PushEmpty(int, string)
0x13ed: Stack[-1] = "b5q01"
0x13ee: Call2 0x122a

0x13ef: Pop(1)
0x13f0: Push((int) 1)
0x13f1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13f2: IF (Stack[-1] == 0) GOTO 0x13f5; Pop(1)

0x13f3: Stack[-2] = (bool) 1
0x13f4: Return(); Pop(0)

0x13f5: Stack[-2] = (bool) 0
0x13f6: Return(); Pop(0)

0x13f7: PushEmpty()
0x13f8: PushEmpty(int, string)
0x13f9: Stack[-1] = "oob5Ospina1"
0x13fa: Call2 0x122a

0x13fb: Pop(1)
0x13fc: Push((int) 0)
0x13fd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13fe: IF (Stack[-1] == 0) GOTO 0x1401; Pop(1)

0x13ff: Stack[-2] = (bool) 1
0x1400: Return(); Pop(0)

0x1401: Stack[-2] = (bool) 0
0x1402: Return(); Pop(0)

0x1403: PushEmpty()
0x1404: PushEmpty(int, string)
0x1405: Stack[-1] = "oob3Ospina1"
0x1406: Call2 0x122a

0x1407: Pop(1)
0x1408: Push((int) 0)
0x1409: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x140a: IF (Stack[-1] == 0) GOTO 0x140d; Pop(1)

0x140b: Stack[-2] = (bool) 1
0x140c: Return(); Pop(0)

0x140d: Stack[-2] = (bool) 0
0x140e: Return(); Pop(0)

0x140f: PushEmpty()
0x1410: PushEmpty(int, string)
0x1411: Stack[-1] = "b3q01"
0x1412: Call2 0x122a

0x1413: Pop(1)
0x1414: Push((int) 1)
0x1415: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1416: IF (Stack[-1] == 0) GOTO 0x1419; Pop(1)

0x1417: Stack[-2] = (bool) 1
0x1418: Return(); Pop(0)

0x1419: Stack[-2] = (bool) 0
0x141a: Return(); Pop(0)

0x141b: PushEmpty()
0x141c: PushEmpty(int, string)
0x141d: Stack[-1] = "b2q01"
0x141e: Call2 0x122a

0x141f: Pop(1)
0x1420: Push((int) 2)
0x1421: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1422: IF (Stack[-1] == 0) GOTO 0x1425; Pop(1)

0x1423: Stack[-2] = (bool) 1
0x1424: Return(); Pop(0)

0x1425: Stack[-2] = (bool) 0
0x1426: Return(); Pop(0)

0x1427: PushEmpty()
0x1428: PushEmpty(int, string)
0x1429: Stack[-1] = "oob2Ospina1"
0x142a: Call2 0x122a

0x142b: Pop(1)
0x142c: Push((int) 0)
0x142d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x142e: IF (Stack[-1] == 0) GOTO 0x1431; Pop(1)

0x142f: Stack[-2] = (bool) 1
0x1430: Return(); Pop(0)

0x1431: Stack[-2] = (bool) 0
0x1432: Return(); Pop(0)

0x1433: PushEmpty()
0x1434: PushEmpty(int, string)
0x1435: Stack[-1] = "oob2Ospina2"
0x1436: Call2 0x122a

0x1437: Pop(1)
0x1438: Push((int) 0)
0x1439: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x143a: IF (Stack[-1] == 0) GOTO 0x143d; Pop(1)

0x143b: Stack[-2] = (bool) 1
0x143c: Return(); Pop(0)

0x143d: Stack[-2] = (bool) 0
0x143e: Return(); Pop(0)

0x143f: PushEmpty()
0x1440: PushEmpty(int, string)
0x1441: Stack[-1] = "oob2Ospina3"
0x1442: Call2 0x122a

0x1443: Pop(1)
0x1444: Push((int) 0)
0x1445: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1446: IF (Stack[-1] == 0) GOTO 0x1449; Pop(1)

0x1447: Stack[-2] = (bool) 1
0x1448: Return(); Pop(0)

0x1449: Stack[-2] = (bool) 0
0x144a: Return(); Pop(0)

0x144b: PushEmpty()
0x144c: PushEmpty(int, string)
0x144d: Stack[-1] = "oob2Ospina4"
0x144e: Call2 0x122a

0x144f: Pop(1)
0x1450: Push((int) 0)
0x1451: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1452: IF (Stack[-1] == 0) GOTO 0x1455; Pop(1)

0x1453: Stack[-2] = (bool) 1
0x1454: Return(); Pop(0)

0x1455: Stack[-2] = (bool) 0
0x1456: Return(); Pop(0)

0x1457: PushEmpty(object, object)
0x1458: Push((int) 315)
0x1459: Push((int) 1)
0x145a: Push((int) 522057)
0x145b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x145c: Pop(3)
0x145d: PushEmpty(bool, object, int)
0x145e: Stack[-2] = Stack[-4]
0x145f: Stack[-1] = (int) 313
0x1460: Call2 0x1498

0x1461: Pop(3)
0x1462: Return(); Pop(2)

0x1463: Stack[-1] = 0
0x1464: PushEmpty(object, object)
0x1465: Push((int) 223)
0x1466: Push((int) 1)
0x1467: Push((int) 519636)
0x1468: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1469: Pop(3)
0x146a: PushEmpty(bool, object, int)
0x146b: Stack[-2] = Stack[-4]
0x146c: Stack[-1] = (int) 221
0x146d: Call2 0x1498

0x146e: Pop(3)
0x146f: Return(); Pop(2)

0x1470: Stack[-1] = 0
0x1471: PushEmpty(object, object)
0x1472: Push((int) 240)
0x1473: Push((int) 1)
0x1474: Push((int) 519745)
0x1475: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1476: Pop(3)
0x1477: PushEmpty(bool, object, int)
0x1478: Stack[-2] = Stack[-4]
0x1479: Stack[-1] = (int) 238
0x147a: Call2 0x1498

0x147b: Pop(3)
0x147c: Return(); Pop(2)

0x147d: Stack[-1] = 0
0x147e: PushEmpty(object, object)
0x147f: Push((int) 290)
0x1480: Push((int) 1)
0x1481: Push((int) 521461)
0x1482: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1483: Pop(3)
0x1484: PushEmpty(bool, object, int)
0x1485: Stack[-2] = Stack[-4]
0x1486: Stack[-1] = (int) 284
0x1487: Call2 0x1498

0x1488: Pop(3)
0x1489: Return(); Pop(2)

0x148a: Stack[-1] = 0
0x148b: PushEmpty(object, object)
0x148c: @ GetDiaryRoot(Stack[-1])
0x148d: Pop(0)
0x148e: Pop(0); Push((bool) Stack[-1] == 0)
0x148f: IF (Stack[-1] == 0) GOTO 0x1495; Pop(1)

0x1490: Push("Can't retrieve diary root")
0x1491: @ Trace(Stack[-1])
0x1492: Pop(1)
0x1493: Stack[-3] = (bool) 0
0x1494: Return(); Pop(2)

0x1495: Stack[-3] = Stack[-1]
0x1496: Return(); Pop(2)

0x1497: Stack[-1] = 0
0x1498: PushEmpty(object, object, int, object, object, int)
0x1499: PushEmpty(object)
0x149a: Call2 0x148b

0x149b: Stack[-4] = Stack[-1]
0x149c: Pop(1)
0x149d: @@ Find(Stack[-7], Stack[-2])
0x149e: Pop(0)
0x149f: Pop(0); Push((bool) Stack[-2] == 0)
0x14a0: IF (Stack[-1] == 0) GOTO 0x14a7; Pop(1)

0x14a1: Push("Can't find diary parent with id: ")
0x14a2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x14a3: @ Trace(Stack[-1])
0x14a4: Pop(1)
0x14a5: Stack[-9] = (bool) 0
0x14a6: Return(); Pop(6)

0x14a7: @@ AddChild(Stack[-8])
0x14a8: Pop(0)
0x14a9: Push((int) 7)
0x14aa: @ SendWorldWndMessage(Stack[-1])
0x14ab: Pop(1)
0x14ac: @@ GetCategory(Stack[-1])
0x14ad: Pop(0)
0x14ae: @ SetDiarySection(Stack[-1])
0x14af: Pop(0)
0x14b0: Stack[-9] = (bool) 0
0x14b1: Return(); Pop(6)

0x14b2: Stack[-2] = 0
0x14b3: Stack[-3] = 0
0x14b4: PushEmpty(object, object, object, object)
0x14b5: @ GetMainOutdoorScene(Stack[-2])
0x14b6: Pop(0)
0x14b7: Pop(0); Push((bool) Stack[-2] == 0)
0x14b8: IF (Stack[-1] == 0) GOTO 0x14bf; Pop(1)

0x14b9: Push("Can't find main outdoor scene")
0x14ba: @ Trace(Stack[-1])
0x14bb: Pop(1)
0x14bc: Stack[-1] = 0
0x14bd: Stack[-5] = Stack[-1]
0x14be: Return(); Pop(4)

0x14bf: @@ GetMap(Stack[-1])
0x14c0: Pop(0)
0x14c1: Stack[-5] = Stack[-1]
0x14c2: Return(); Pop(4)

0x14c3: Stack[-1] = 0
0x14c4: Stack[-2] = 0
0x14c5: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x14c6: @ GetMainOutdoorScene(Stack[-2])
0x14c7: Pop(0)
0x14c8: Pop(0); Push((bool) Stack[-2] == 0)
0x14c9: IF (Stack[-1] == 0) GOTO 0x14ce; Pop(1)

0x14ca: Push("Can't find main outdoor scene")
0x14cb: @ Trace(Stack[-1])
0x14cc: Pop(1)
0x14cd: Return(); Pop(8)

0x14ce: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x14cf: Pop(0)
0x14d0: Pop(0); Push((bool) Stack[-1] == 0)
0x14d1: IF (Stack[-1] == 0) GOTO 0x14d8; Pop(1)

0x14d2: Push("Warning: outdoor scene locator ")
0x14d3: Pop(1); Push(Stack[-1] + Stack[-11]);
0x14d4: Push(" doesnt exist")
0x14d5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x14d6: @ Trace(Stack[-1])
0x14d7: Pop(1)
0x14d8: @@ GetMap(Stack[-11])
0x14d9: Pop(0)
0x14da: Pop(0); Push((bool) Stack[-11] == 0)
0x14db: IF (Stack[-1] == 0) GOTO 0x14e0; Pop(1)

0x14dc: Push("Can't find map")
0x14dd: @ Trace(Stack[-1])
0x14de: Pop(1)
0x14df: Return(); Pop(8)

0x14e0: Push(CvectorIndex(Stack[-4], 0))
0x14e1: Push(CvectorIndex(Stack[-5], 2))
0x14e2: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x14e3: Pop(2)
0x14e4: Return(); Pop(8)

0x14e5: Stack[-2] = 0
0x14e6: PushEmpty(int, int)
0x14e7: Push("branch")
0x14e8: @ GetVariable(Stack[-1], Stack[-2])
0x14e9: Pop(1)
0x14ea: Push((int) 0)
0x14eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14ec: IF (Stack[-1] == 0) GOTO 0x14f0; Pop(1)

0x14ed: Stack[-3] = (int) 1
0x14ee: Return(); Pop(2)

0x14ef: GOTO 0x14f5

0x14f0: Push((int) 1)
0x14f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14f2: IF (Stack[-1] == 0) GOTO 0x14f5; Pop(1)

0x14f3: Stack[-3] = (int) 2
0x14f4: Return(); Pop(2)

0x14f5: Stack[-3] = (int) 3
0x14f6: Return(); Pop(2)

0x14f7: PushEmpty()
0x14f8: Push(GlobalVars[1])
0x14f9: Pop(1); Push((bool) Stack[-1] == 0)
0x14fa: IF (Stack[-1] == 0) GOTO 0x1504; Pop(1)

0x14fb: PushEmpty(int, object)
0x14fc: Stack[-1] = Stack[-3]
0x14fd: Push(-2, 1); TaskCall(8)
0x14fe: Call2 0x838

0x14ff: Pop(-2, 1); TaskReturn
0x1500: Pop(2)
0x1501: Push(GlobalVars[1])
0x1502: Stack[-1] = (bool) 1
0x1503: GlobalVars[1] = Stack[-1]; Pop(1)
0x1504: PushEmpty(bool, int)
0x1505: Stack[-1] = (int) 2
0x1506: Call2 0x1280

0x1507: Pop(1)
0x1508: IF (Stack[-1] == 0) GOTO 0x1510; Pop(1)

0x1509: PushEmpty(int, object)
0x150a: Stack[-1] = Stack[-3]
0x150b: Push(-2, 1); TaskCall(6)
0x150c: Call2 0x493

0x150d: Pop(-2, 1); TaskReturn
0x150e: Pop(2)
0x150f: Return(); Pop(0)

0x1510: PushEmpty(bool, int)
0x1511: Stack[-1] = (int) 3
0x1512: Call2 0x1280

0x1513: Pop(1)
0x1514: IF (Stack[-1] == 0) GOTO 0x151c; Pop(1)

0x1515: PushEmpty(int, object)
0x1516: Stack[-1] = Stack[-3]
0x1517: Push(-2, 1); TaskCall(4)
0x1518: Call2 0x308

0x1519: Pop(-2, 1); TaskReturn
0x151a: Pop(2)
0x151b: Return(); Pop(0)

0x151c: PushEmpty(bool, int)
0x151d: Stack[-1] = (int) 5
0x151e: Call2 0x1280

0x151f: Pop(1)
0x1520: IF (Stack[-1] == 0) GOTO 0x1528; Pop(1)

0x1521: PushEmpty(int, object)
0x1522: Stack[-1] = Stack[-3]
0x1523: Push(-2, 1); TaskCall(2)
0x1524: Call2 0x103

0x1525: Pop(-2, 1); TaskReturn
0x1526: Pop(2)
0x1527: Return(); Pop(0)

0x1528: PushEmpty(bool, int)
0x1529: Stack[-1] = (int) 8
0x152a: Call2 0x1280

0x152b: Pop(1)
0x152c: IF (Stack[-1] == 0) GOTO 0x1534; Pop(1)

0x152d: PushEmpty(int, object)
0x152e: Stack[-1] = Stack[-3]
0x152f: Push(-2, 1); TaskCall(10)
0x1530: Call2 0x91a

0x1531: Pop(-2, 1); TaskReturn
0x1532: Pop(2)
0x1533: Return(); Pop(0)

0x1534: PushEmpty(bool, int)
0x1535: Stack[-1] = (int) 10
0x1536: Call2 0x1280

0x1537: Pop(1)
0x1538: IF (Stack[-1] == 0) GOTO 0x1540; Pop(1)

0x1539: PushEmpty(int, object)
0x153a: Stack[-1] = Stack[-3]
0x153b: Push(-2, 1); TaskCall(12)
0x153c: Call2 0xb9d

0x153d: Pop(-2, 1); TaskReturn
0x153e: Pop(2)
0x153f: Return(); Pop(0)

0x1540: PushEmpty(bool, int)
0x1541: Stack[-1] = (int) 11
0x1542: Call2 0x1280

0x1543: Pop(1)
0x1544: IF (Stack[-1] == 0) GOTO 0x154c; Pop(1)

0x1545: PushEmpty(int, object)
0x1546: Stack[-1] = Stack[-3]
0x1547: Push(-2, 1); TaskCall(14)
0x1548: Call2 0xd0f

0x1549: Pop(-2, 1); TaskReturn
0x154a: Pop(2)
0x154b: Return(); Pop(0)

0x154c: PushEmpty(bool)
0x154d: Stack[-1] = (bool) 0
0x154e: PushEmpty(bool, int)
0x154f: Stack[-1] = (int) 12
0x1550: Call2 0x1280

0x1551: Pop(1)
0x1552: IF (Stack[-1] == 0) GOTO 0x1557; Pop(1)

0x1553: Push(GlobalVars[2])
0x1554: Pop(1); Push((bool) Stack[-1] == 0)
0x1555: IF (Stack[-1] == 0) GOTO 0x1557; Pop(1)

0x1556: Stack[-1] = (bool) 1
0x1557: IF (Stack[-1] == 0) GOTO 0x1562; Pop(1)

0x1558: PushEmpty(int, object)
0x1559: Stack[-1] = Stack[-3]
0x155a: Push(-2, 1); TaskCall(0)
0x155b: Call2 0x0

0x155c: Pop(-2, 1); TaskReturn
0x155d: Pop(2)
0x155e: Push(GlobalVars[2])
0x155f: Stack[-1] = (bool) 1
0x1560: GlobalVars[2] = Stack[-1]; Pop(1)
0x1561: Return(); Pop(0)

0x1562: PushEmpty(int, object)
0x1563: Stack[-1] = Stack[-3]
0x1564: Push(-2, 1); TaskCall(16)
0x1565: Call2 0xf18

0x1566: Pop(-2, 1); TaskReturn
0x1567: Pop(2)
0x1568: Return(); Pop(0)

