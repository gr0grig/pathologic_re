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
	Disappointment
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	No
	ui/NPC_Ospina.png
	ood1Ospina1
	ood1Ospina2
	ood1Ospina3
	d1q03KapellaGotoOspina
	FindMark
	Remove
	d1q03MladVladGotoOspina
	quest_d1_03
	kapella_finish
	ood1Ospina4
	ood1Ospina5
	ood1Ospina6
	ood3Ospina1
	ood3Ospina2
	ood3Ospina3
	d3q01
	d3q01OspinaGotoBigVlad
	pt_map_bigvlad
	AddMark
	d3q01OspinaGotoBigVladSelf
	pt_map_ospina
	ood3Ospina4
	d3q01OspinaButchersWillHelpSelf
	quest_d3_01
	place_butchers
	ShowMap
	pt_map_lara
	d4q01_subquest
	d4q01OspinaGotoLara
	ood4Ospina1
	ood4Ospina2
	ood6Ospina1
	ood6Ospina2
	d8q01MladVladIsBad
	ood8Ospina1
	ood8Ospina2
	ospina blood is given
	d6q01_ospina_blood
	playsound
	giveitem
	d6q01OspinaVolonteer
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
	completed
	KnowOspina
	d1q01FirstGeorgVisit
	d1q03
	d6q01
	d8q01
	microscope_d6q01_ospina_blood
	KnowBigVlad
	KnowKaterina
	KnowLaska
	KnowMladVlad
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
	GetMainOutdoorScene (1 args)
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
		EVENT_11 Op = 0x20d Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x52e Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa29 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd43 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe66 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x105b Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x16ed

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0x1257

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
0x15: Call 0x1298

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
0x26: Call 0x16f1

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x124b

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0x125c

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0x1303

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0x1305

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x168c

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
0x67: Call 0x1294

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
0x79: Call 0x14a5

0x7a: Pop(2)
0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral"
0x7d: Call 0xb4

0x7e: Pop(1)
0x7f: Push((int) 309)
0x80: @@ SetMessage(Stack[-1])
0x81: Pop(1)
0x82: @@ ClearReplies()
0x83: Pop(0)
0x84: Push((int) 311)
0x85: Push((int) 370)
0x86: Push((int) 364)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: Push((int) 312)
0x8a: Push((int) 366)
0x8b: Push((int) 365)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: Push((int) 310)
0x8f: Push((int) 369)
0x90: Push((int) 363)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: GOTO 0x96

0x94: Return(); Pop(0)

0x95: GOTO 0x74

0x96: PushEmpty(bool)
0x97: Call 0x1307

0x98: Pop(0)
0x99: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9a: @ lshWaitForAnimEnd()
0x9b: Pop(0)
0x9c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xa4

0x9f: PushEmpty(string)
0xa0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa1: Call 0x1298

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
0xb6: Call 0x1307

0xb7: Pop(0)
0xb8: Pop(1); Push((bool) Stack[-1] == 0)
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: Return(); Pop(0)

0xbb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Return(); Pop(0)

0xbe: PushEmpty(string)
0xbf: Stack[-1] = Stack[-2]
0xc0: Call 0x1298

0xc1: Pop(1)
0xc2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: Push((int) 1)
0xc6: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0xc7: PushEmpty()
0xc8: Call 0x12aa

0xc9: Pop(0)
0xca: Push((int) 362)
0xcb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call 0x14a5

0xd1: Pop(2)
0xd2: PushEmpty(string)
0xd3: Stack[-1] = "Neutral"
0xd4: Call 0xb4

0xd5: Pop(1)
0xd6: Push((int) 309)
0xd7: @@ SetMessage(Stack[-1])
0xd8: Pop(1)
0xd9: @@ ClearReplies()
0xda: Pop(0)
0xdb: Push((int) 311)
0xdc: Push((int) 370)
0xdd: Push((int) 364)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: Push((int) 312)
0xe1: Push((int) 366)
0xe2: Push((int) 365)
0xe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: Push((int) 310)
0xe6: Push((int) 369)
0xe7: Push((int) 363)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Return(); Pop(0)

0xeb: Push((int) 369)
0xec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xee: PushEmpty(string)
0xef: Stack[-1] = "Neutral"
0xf0: Call 0xb4

0xf1: Pop(1)
0xf2: Push((int) 316)
0xf3: @@ SetMessage(Stack[-1])
0xf4: Pop(1)
0xf5: @@ ClearReplies()
0xf6: Pop(0)
0xf7: Push((int) 6268)
0xf8: Push((int) -1)
0xf9: Push((int) 6938)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Return(); Pop(0)

0xfd: Push((int) 366)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral"
0x102: Call 0xb4

0x103: Pop(1)
0x104: Push((int) 313)
0x105: @@ SetMessage(Stack[-1])
0x106: Pop(1)
0x107: @@ ClearReplies()
0x108: Pop(0)
0x109: Push((int) 314)
0x10a: Push((int) 370)
0x10b: Push((int) 367)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: Push((int) 315)
0x10f: Push((int) 370)
0x110: Push((int) 368)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Return(); Pop(0)

0x114: Push((int) 370)
0x115: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x117: PushEmpty(string)
0x118: Stack[-1] = "Neutral"
0x119: Call 0xb4

0x11a: Pop(1)
0x11b: Push((int) 317)
0x11c: @@ SetMessage(Stack[-1])
0x11d: Pop(1)
0x11e: @@ ClearReplies()
0x11f: Pop(0)
0x120: Push((int) 319)
0x121: Push((int) 374)
0x122: Push((int) 372)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Push((int) 318)
0x126: Push((int) 374)
0x127: Push((int) 371)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: Return(); Pop(0)

0x12b: Push((int) 374)
0x12c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x12e: PushEmpty(string)
0x12f: Stack[-1] = "Neutral"
0x130: Call 0xb4

0x131: Pop(1)
0x132: Push((int) 320)
0x133: @@ SetMessage(Stack[-1])
0x134: Pop(1)
0x135: @@ ClearReplies()
0x136: Pop(0)
0x137: Push((int) 322)
0x138: Push((int) -1)
0x139: Push((int) 376)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: Push((int) 323)
0x13d: Push((int) -1)
0x13e: Push((int) 377)
0x13f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x140: Pop(3)
0x141: Return(); Pop(0)

0x142: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x143: PushEmpty(bool)
0x144: Call 0x1307

0x145: Pop(0)
0x146: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x147: @ lshStopAnimation()
0x148: Pop(0)
0x149: GOTO 0x14c

0x14a: @ StopAnimation()
0x14b: Pop(0)
0x14c: Return(); Pop(0)

0x14d: GOTO 0xc5

0x14e: Return(); Pop(0)

0x14f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x150: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x151: PushEmpty(bool, object)
0x152: Stack[-1] = Stack[-11]
0x153: Call 0x125c

0x154: Pop(1)
0x155: Pop(1); Push((bool) Stack[-1] == 0)
0x156: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x157: Stack[-10] = (int) -2
0x158: Return(); Pop(8)

0x159: @ CreateDialog(Stack[-4])
0x15a: Pop(0)
0x15b: PushEmpty(int)
0x15c: Call 0x1303

0x15d: Pop(0)
0x15e: @@ SetNPCName(Stack[-1])
0x15f: Pop(1)
0x160: PushEmpty(string)
0x161: Call 0x1305

0x162: Pop(0)
0x163: @@ SetPhoto(Stack[-1])
0x164: Pop(1)
0x165: PushEmpty(int)
0x166: Call 0x168c

0x167: Pop(0)
0x168: @@ SetPlayerName(Stack[-1])
0x169: Pop(1)
0x16a: Stack[-2] = (int) -1
0x16b: @ IsOverrideActive(Stack[-3])
0x16c: Pop(0)
0x16d: Push(Stack[-3])
0x16e: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16f: Stack[-10] = (int) -2
0x170: Return(); Pop(8)

0x171: @ DoDialog(Stack[-4])
0x172: Pop(0)
0x173: PushEmpty(object, object)
0x174: Stack[-2] = Stack[-11]
0x175: Stack[-1] = Stack[-6]
0x176: Push(-2, 4); TaskCall(5)
0x177: Call 0x18e

0x178: Pop(-2, 4); TaskReturn
0x179: Pop(2)
0x17a: @@ IsDialogEnd(Stack[-1])
0x17b: Pop(0)
0x17c: Pop(0); Push((bool) Stack[-1] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x17e: @ sync()
0x17f: Pop(0)
0x180: @@ IsDialogEnd(Stack[-1])
0x181: Pop(0)
0x182: GOTO 0x17c

0x183: PushEmpty(object)
0x184: Stack[-1] = Stack[-10]
0x185: Call 0x1294

0x186: Pop(1)
0x187: @ StopDialog(Stack[-4])
0x188: Pop(0)
0x189: @@ GetReturnValue(Stack[-2])
0x18a: Pop(0)
0x18b: Stack[-10] = Stack[-2]
0x18c: Return(); Pop(8)

0x18d: Stack[-4] = 0
0x18e: PushEmpty()
0x18f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x190: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x191: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x192: Push((int) 1)
0x193: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Neutral"
0x196: Call 0x1fd

0x197: Pop(1)
0x198: Push((int) 12729)
0x199: @@ SetMessage(Stack[-1])
0x19a: Pop(1)
0x19b: @@ ClearReplies()
0x19c: Pop(0)
0x19d: PushEmpty(bool)
0x19e: Stack[-1] = (bool) 0
0x19f: PushEmpty(bool, object)
0x1a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a1: Call 0x158f

0x1a2: Pop(1)
0x1a3: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a4: PushEmpty(bool, object)
0x1a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a6: Call 0x1583

0x1a7: Pop(1)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: Stack[-1] = (bool) 1
0x1aa: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ab: Push((int) 12731)
0x1ac: Push((int) 3851)
0x1ad: Push((int) 13924)
0x1ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1af: Pop(3)
0x1b0: PushEmpty(bool)
0x1b1: Stack[-1] = (bool) 0
0x1b2: PushEmpty(bool)
0x1b3: Stack[-1] = (bool) 0
0x1b4: PushEmpty(bool)
0x1b5: Stack[-1] = (bool) 0
0x1b6: PushEmpty(bool, object)
0x1b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b8: Call 0x159b

0x1b9: Pop(1)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bb: PushEmpty(bool, object)
0x1bc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bd: Call 0x15cb

0x1be: Pop(1)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: Stack[-1] = (bool) 1
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c2: PushEmpty(bool, object)
0x1c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c4: Call 0x15d7

0x1c5: Pop(1)
0x1c6: Pop(1); Push((bool) Stack[-1] == 0)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c8: Stack[-1] = (bool) 1
0x1c9: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1ca: PushEmpty(bool, object)
0x1cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cc: Call 0x15e3

0x1cd: Pop(1)
0x1ce: Pop(1); Push((bool) Stack[-1] == 0)
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1d0: Stack[-1] = (bool) 1
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d2: Push((int) 12730)
0x1d3: Push((int) 11927)
0x1d4: Push((int) 13923)
0x1d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d6: Pop(3)
0x1d7: Push((int) 12732)
0x1d8: Push((int) -1)
0x1d9: Push((int) 13926)
0x1da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1db: Pop(3)
0x1dc: GOTO 0x1df

0x1dd: Return(); Pop(0)

0x1de: GOTO 0x192

0x1df: PushEmpty(bool)
0x1e0: Call 0x1307

0x1e1: Pop(0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e3: @ lshWaitForAnimEnd()
0x1e4: Pop(0)
0x1e5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e7: GOTO 0x1ed

0x1e8: PushEmpty(string)
0x1e9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1ea: Call 0x1298

0x1eb: Pop(1)
0x1ec: GOTO 0x1e3

0x1ed: GOTO 0x1fc

0x1ee: Push("all")
0x1ef: Push("idle")
0x1f0: @ PlayAnimation(Stack[-2], Stack[-1])
0x1f1: Pop(2)
0x1f2: @ WaitForAnimEnd()
0x1f3: Pop(0)
0x1f4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: GOTO 0x1fc

0x1f7: Push("all")
0x1f8: Push("idle")
0x1f9: @ PlayAnimation(Stack[-2], Stack[-1])
0x1fa: Pop(2)
0x1fb: GOTO 0x1f2

0x1fc: Return(); Pop(0)

0x1fd: PushEmpty()
0x1fe: PushEmpty(bool)
0x1ff: Call 0x1307

0x200: Pop(0)
0x201: Pop(1); Push((bool) Stack[-1] == 0)
0x202: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x203: Return(); Pop(0)

0x204: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x205: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x206: Return(); Pop(0)

0x207: PushEmpty(string)
0x208: Stack[-1] = Stack[-2]
0x209: Call 0x1298

0x20a: Pop(1)
0x20b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x20c: Return(); Pop(0)

0x20d: PushEmpty()
0x20e: Push((int) 1)
0x20f: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x210: PushEmpty()
0x211: Call 0x12aa

0x212: Pop(0)
0x213: Push((int) 3869)
0x214: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x216: PushEmpty(object, object)
0x217: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x218: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x219: Call 0x13e2

0x21a: Pop(2)
0x21b: PushEmpty(object, object)
0x21c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x21d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x21e: Call 0x1411

0x21f: Pop(2)
0x220: PushEmpty(object, object)
0x221: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x222: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x223: Call 0x1403

0x224: Pop(2)
0x225: Push((int) 3872)
0x226: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x228: PushEmpty(object, object)
0x229: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x22a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22b: Call 0x13e2

0x22c: Pop(2)
0x22d: PushEmpty(object, object)
0x22e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x22f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x230: Call 0x1411

0x231: Pop(2)
0x232: PushEmpty(object, object)
0x233: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x234: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x235: Call 0x1403

0x236: Pop(2)
0x237: Push((int) 3870)
0x238: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x23a: PushEmpty(object, object)
0x23b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x23c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23d: Call 0x13e2

0x23e: Pop(2)
0x23f: PushEmpty(object, object)
0x240: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x241: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x242: Call 0x1403

0x243: Pop(2)
0x244: PushEmpty(object, object)
0x245: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x246: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x247: Call 0x1411

0x248: Pop(2)
0x249: Push((int) 3860)
0x24a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24b: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x24c: PushEmpty(object, object)
0x24d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x24e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24f: Call 0x13e2

0x250: Pop(2)
0x251: PushEmpty(object, object)
0x252: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x253: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x254: Call 0x1411

0x255: Pop(2)
0x256: PushEmpty(object, object)
0x257: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x258: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x259: Call 0x1403

0x25a: Pop(2)
0x25b: Push((int) 3856)
0x25c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x25e: PushEmpty(object, object)
0x25f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x260: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x261: Call 0x13e2

0x262: Pop(2)
0x263: Push((int) 3857)
0x264: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x266: PushEmpty(object, object)
0x267: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x268: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x269: Call 0x13e2

0x26a: Pop(2)
0x26b: PushEmpty(object, object)
0x26c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x26d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26e: Call 0x1403

0x26f: Pop(2)
0x270: PushEmpty(object, object)
0x271: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x272: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x273: Call 0x1411

0x274: Pop(2)
0x275: Push((int) 13923)
0x276: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x278: PushEmpty(object, object)
0x279: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27b: Call 0x13e8

0x27c: Pop(2)
0x27d: Push((int) 11938)
0x27e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27f: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x280: PushEmpty(object, object)
0x281: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x282: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x283: Call 0x1417

0x284: Pop(2)
0x285: Push((int) 11939)
0x286: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x288: PushEmpty(object, object)
0x289: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x28a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28b: Call 0x1417

0x28c: Pop(2)
0x28d: Push((int) 13922)
0x28e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28f: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x290: PushEmpty(string)
0x291: Stack[-1] = "Neutral"
0x292: Call 0x1fd

0x293: Pop(1)
0x294: Push((int) 12729)
0x295: @@ SetMessage(Stack[-1])
0x296: Pop(1)
0x297: @@ ClearReplies()
0x298: Pop(0)
0x299: PushEmpty(bool)
0x29a: Stack[-1] = (bool) 0
0x29b: PushEmpty(bool, object)
0x29c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29d: Call 0x158f

0x29e: Pop(1)
0x29f: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a0: PushEmpty(bool, object)
0x2a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a2: Call 0x1583

0x2a3: Pop(1)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a5: Stack[-1] = (bool) 1
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a7: Push((int) 12731)
0x2a8: Push((int) 3851)
0x2a9: Push((int) 13924)
0x2aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ab: Pop(3)
0x2ac: PushEmpty(bool)
0x2ad: Stack[-1] = (bool) 0
0x2ae: PushEmpty(bool)
0x2af: Stack[-1] = (bool) 0
0x2b0: PushEmpty(bool)
0x2b1: Stack[-1] = (bool) 0
0x2b2: PushEmpty(bool, object)
0x2b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b4: Call 0x159b

0x2b5: Pop(1)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2b7: PushEmpty(bool, object)
0x2b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b9: Call 0x15cb

0x2ba: Pop(1)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2bc: Stack[-1] = (bool) 1
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2be: PushEmpty(bool, object)
0x2bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c0: Call 0x15d7

0x2c1: Pop(1)
0x2c2: Pop(1); Push((bool) Stack[-1] == 0)
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c4: Stack[-1] = (bool) 1
0x2c5: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2c6: PushEmpty(bool, object)
0x2c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c8: Call 0x15e3

0x2c9: Pop(1)
0x2ca: Pop(1); Push((bool) Stack[-1] == 0)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cc: Stack[-1] = (bool) 1
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2ce: Push((int) 12730)
0x2cf: Push((int) 11927)
0x2d0: Push((int) 13923)
0x2d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d2: Pop(3)
0x2d3: Push((int) 12732)
0x2d4: Push((int) -1)
0x2d5: Push((int) 13926)
0x2d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d7: Pop(3)
0x2d8: Return(); Pop(0)

0x2d9: Push((int) 11927)
0x2da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2dc: PushEmpty(string)
0x2dd: Stack[-1] = "Neutral"
0x2de: Call 0x1fd

0x2df: Pop(1)
0x2e0: Push((int) 10791)
0x2e1: @@ SetMessage(Stack[-1])
0x2e2: Pop(1)
0x2e3: @@ ClearReplies()
0x2e4: Pop(0)
0x2e5: Push((int) 10792)
0x2e6: Push((int) 11929)
0x2e7: Push((int) 11928)
0x2e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e9: Pop(3)
0x2ea: Push((int) 10810)
0x2eb: Push((int) 11929)
0x2ec: Push((int) 11950)
0x2ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ee: Pop(3)
0x2ef: Return(); Pop(0)

0x2f0: Push((int) 11929)
0x2f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x2f3: PushEmpty(string)
0x2f4: Stack[-1] = "Neutral"
0x2f5: Call 0x1fd

0x2f6: Pop(1)
0x2f7: Push((int) 10793)
0x2f8: @@ SetMessage(Stack[-1])
0x2f9: Pop(1)
0x2fa: @@ ClearReplies()
0x2fb: Pop(0)
0x2fc: Push((int) 10794)
0x2fd: Push((int) 11931)
0x2fe: Push((int) 11930)
0x2ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x300: Pop(3)
0x301: Push((int) 10808)
0x302: Push((int) 11931)
0x303: Push((int) 11946)
0x304: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x305: Pop(3)
0x306: Push((int) 10809)
0x307: Push((int) 11931)
0x308: Push((int) 11948)
0x309: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30a: Pop(3)
0x30b: Return(); Pop(0)

0x30c: Push((int) 11931)
0x30d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x30f: PushEmpty(string)
0x310: Stack[-1] = "Neutral"
0x311: Call 0x1fd

0x312: Pop(1)
0x313: Push((int) 10795)
0x314: @@ SetMessage(Stack[-1])
0x315: Pop(1)
0x316: @@ ClearReplies()
0x317: Pop(0)
0x318: Push((int) 10796)
0x319: Push((int) 11933)
0x31a: Push((int) 11932)
0x31b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31c: Pop(3)
0x31d: Push((int) 10807)
0x31e: Push((int) 11933)
0x31f: Push((int) 11945)
0x320: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x321: Pop(3)
0x322: Return(); Pop(0)

0x323: Push((int) 11933)
0x324: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x326: PushEmpty(string)
0x327: Stack[-1] = "Neutral"
0x328: Call 0x1fd

0x329: Pop(1)
0x32a: Push((int) 10797)
0x32b: @@ SetMessage(Stack[-1])
0x32c: Pop(1)
0x32d: @@ ClearReplies()
0x32e: Pop(0)
0x32f: Push((int) 10798)
0x330: Push((int) 11935)
0x331: Push((int) 11934)
0x332: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x333: Pop(3)
0x334: Push((int) 10806)
0x335: Push((int) 11937)
0x336: Push((int) 11943)
0x337: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x338: Pop(3)
0x339: Return(); Pop(0)

0x33a: Push((int) 11935)
0x33b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33c: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x33d: PushEmpty(string)
0x33e: Stack[-1] = "Disappointment"
0x33f: Call 0x1fd

0x340: Pop(1)
0x341: Push((int) 10799)
0x342: @@ SetMessage(Stack[-1])
0x343: Pop(1)
0x344: @@ ClearReplies()
0x345: Pop(0)
0x346: Push((int) 10800)
0x347: Push((int) 11937)
0x348: Push((int) 11936)
0x349: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34a: Pop(3)
0x34b: Push((int) 10805)
0x34c: Push((int) 11937)
0x34d: Push((int) 11941)
0x34e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34f: Pop(3)
0x350: Return(); Pop(0)

0x351: Push((int) 11937)
0x352: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x354: PushEmpty(string)
0x355: Stack[-1] = "Neutral"
0x356: Call 0x1fd

0x357: Pop(1)
0x358: Push((int) 10801)
0x359: @@ SetMessage(Stack[-1])
0x35a: Pop(1)
0x35b: @@ ClearReplies()
0x35c: Pop(0)
0x35d: Push((int) 10802)
0x35e: Push((int) -1)
0x35f: Push((int) 11938)
0x360: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x361: Pop(3)
0x362: Push((int) 10803)
0x363: Push((int) -1)
0x364: Push((int) 11939)
0x365: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x366: Pop(3)
0x367: Push((int) 10804)
0x368: Push((int) -1)
0x369: Push((int) 11940)
0x36a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36b: Pop(3)
0x36c: Return(); Pop(0)

0x36d: Push((int) 3851)
0x36e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x370: PushEmpty(string)
0x371: Stack[-1] = "Neutral"
0x372: Call 0x1fd

0x373: Pop(1)
0x374: Push((int) 3562)
0x375: @@ SetMessage(Stack[-1])
0x376: Pop(1)
0x377: @@ ClearReplies()
0x378: Pop(0)
0x379: Push((int) 3563)
0x37a: Push((int) 3858)
0x37b: Push((int) 3852)
0x37c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37d: Pop(3)
0x37e: Push((int) 3564)
0x37f: Push((int) 3858)
0x380: Push((int) 3853)
0x381: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x382: Pop(3)
0x383: Push((int) 3565)
0x384: Push((int) 3855)
0x385: Push((int) 3854)
0x386: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x387: Pop(3)
0x388: Return(); Pop(0)

0x389: Push((int) 3855)
0x38a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x38c: PushEmpty(string)
0x38d: Stack[-1] = "Neutral"
0x38e: Call 0x1fd

0x38f: Pop(1)
0x390: Push((int) 3566)
0x391: @@ SetMessage(Stack[-1])
0x392: Pop(1)
0x393: @@ ClearReplies()
0x394: Pop(0)
0x395: Push((int) 3567)
0x396: Push((int) -1)
0x397: Push((int) 3856)
0x398: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x399: Pop(3)
0x39a: Push((int) 3568)
0x39b: Push((int) -1)
0x39c: Push((int) 3857)
0x39d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39e: Pop(3)
0x39f: Return(); Pop(0)

0x3a0: Push((int) 3858)
0x3a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a2: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3a3: PushEmpty(string)
0x3a4: Stack[-1] = "Neutral"
0x3a5: Call 0x1fd

0x3a6: Pop(1)
0x3a7: Push((int) 3569)
0x3a8: @@ SetMessage(Stack[-1])
0x3a9: Pop(1)
0x3aa: @@ ClearReplies()
0x3ab: Pop(0)
0x3ac: Push((int) 3571)
0x3ad: Push((int) 3862)
0x3ae: Push((int) 3861)
0x3af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b0: Pop(3)
0x3b1: Push((int) 3582)
0x3b2: Push((int) 3874)
0x3b3: Push((int) 3873)
0x3b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b5: Pop(3)
0x3b6: Push((int) 3570)
0x3b7: Push((int) -1)
0x3b8: Push((int) 3860)
0x3b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ba: Pop(3)
0x3bb: Return(); Pop(0)

0x3bc: Push((int) 3874)
0x3bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3be: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3bf: PushEmpty(string)
0x3c0: Stack[-1] = "Neutral"
0x3c1: Call 0x1fd

0x3c2: Pop(1)
0x3c3: Push((int) 3583)
0x3c4: @@ SetMessage(Stack[-1])
0x3c5: Pop(1)
0x3c6: @@ ClearReplies()
0x3c7: Pop(0)
0x3c8: Push((int) 3584)
0x3c9: Push((int) 3867)
0x3ca: Push((int) 3875)
0x3cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cc: Pop(3)
0x3cd: Return(); Pop(0)

0x3ce: Push((int) 3862)
0x3cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3d1: PushEmpty(string)
0x3d2: Stack[-1] = "Neutral"
0x3d3: Call 0x1fd

0x3d4: Pop(1)
0x3d5: Push((int) 3572)
0x3d6: @@ SetMessage(Stack[-1])
0x3d7: Pop(1)
0x3d8: @@ ClearReplies()
0x3d9: Pop(0)
0x3da: Push((int) 3573)
0x3db: Push((int) 3864)
0x3dc: Push((int) 3863)
0x3dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3de: Pop(3)
0x3df: Push((int) 3576)
0x3e0: Push((int) 3867)
0x3e1: Push((int) 3866)
0x3e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e3: Pop(3)
0x3e4: Return(); Pop(0)

0x3e5: Push((int) 3864)
0x3e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e7: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3e8: PushEmpty(string)
0x3e9: Stack[-1] = "Neutral"
0x3ea: Call 0x1fd

0x3eb: Pop(1)
0x3ec: Push((int) 3574)
0x3ed: @@ SetMessage(Stack[-1])
0x3ee: Pop(1)
0x3ef: @@ ClearReplies()
0x3f0: Pop(0)
0x3f1: Push((int) 3575)
0x3f2: Push((int) 3867)
0x3f3: Push((int) 3865)
0x3f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f5: Pop(3)
0x3f6: Push((int) 3579)
0x3f7: Push((int) -1)
0x3f8: Push((int) 3870)
0x3f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fa: Pop(3)
0x3fb: Return(); Pop(0)

0x3fc: Push((int) 3867)
0x3fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fe: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x3ff: PushEmpty(string)
0x400: Stack[-1] = "Neutral"
0x401: Call 0x1fd

0x402: Pop(1)
0x403: Push((int) 3577)
0x404: @@ SetMessage(Stack[-1])
0x405: Pop(1)
0x406: @@ ClearReplies()
0x407: Pop(0)
0x408: Push((int) 3578)
0x409: Push((int) -1)
0x40a: Push((int) 3869)
0x40b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40c: Pop(3)
0x40d: Push((int) 3581)
0x40e: Push((int) -1)
0x40f: Push((int) 3872)
0x410: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x411: Pop(3)
0x412: Return(); Pop(0)

0x413: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x414: PushEmpty(bool)
0x415: Call 0x1307

0x416: Pop(0)
0x417: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x418: @ lshStopAnimation()
0x419: Pop(0)
0x41a: GOTO 0x41d

0x41b: @ StopAnimation()
0x41c: Pop(0)
0x41d: Return(); Pop(0)

0x41e: GOTO 0x20e

0x41f: Return(); Pop(0)

0x420: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x421: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x422: PushEmpty(bool, object)
0x423: Stack[-1] = Stack[-11]
0x424: Call 0x125c

0x425: Pop(1)
0x426: Pop(1); Push((bool) Stack[-1] == 0)
0x427: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x428: Stack[-10] = (int) -2
0x429: Return(); Pop(8)

0x42a: @ CreateDialog(Stack[-4])
0x42b: Pop(0)
0x42c: PushEmpty(int)
0x42d: Call 0x1303

0x42e: Pop(0)
0x42f: @@ SetNPCName(Stack[-1])
0x430: Pop(1)
0x431: PushEmpty(string)
0x432: Call 0x1305

0x433: Pop(0)
0x434: @@ SetPhoto(Stack[-1])
0x435: Pop(1)
0x436: PushEmpty(int)
0x437: Call 0x168c

0x438: Pop(0)
0x439: @@ SetPlayerName(Stack[-1])
0x43a: Pop(1)
0x43b: Stack[-2] = (int) -1
0x43c: @ IsOverrideActive(Stack[-3])
0x43d: Pop(0)
0x43e: Push(Stack[-3])
0x43f: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x440: Stack[-10] = (int) -2
0x441: Return(); Pop(8)

0x442: @ DoDialog(Stack[-4])
0x443: Pop(0)
0x444: PushEmpty(object, object)
0x445: Stack[-2] = Stack[-11]
0x446: Stack[-1] = Stack[-6]
0x447: Push(-2, 4); TaskCall(7)
0x448: Call 0x45f

0x449: Pop(-2, 4); TaskReturn
0x44a: Pop(2)
0x44b: @@ IsDialogEnd(Stack[-1])
0x44c: Pop(0)
0x44d: Pop(0); Push((bool) Stack[-1] == 0)
0x44e: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x44f: @ sync()
0x450: Pop(0)
0x451: @@ IsDialogEnd(Stack[-1])
0x452: Pop(0)
0x453: GOTO 0x44d

0x454: PushEmpty(object)
0x455: Stack[-1] = Stack[-10]
0x456: Call 0x1294

0x457: Pop(1)
0x458: @ StopDialog(Stack[-4])
0x459: Pop(0)
0x45a: @@ GetReturnValue(Stack[-2])
0x45b: Pop(0)
0x45c: Stack[-10] = Stack[-2]
0x45d: Return(); Pop(8)

0x45e: Stack[-4] = 0
0x45f: PushEmpty()
0x460: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x461: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x462: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x463: Push((int) 1)
0x464: IF (Stack[-1] == 0) GOTO 0x500; Pop(1)

0x465: PushEmpty(bool)
0x466: Stack[-1] = (bool) 0
0x467: PushEmpty(bool, object)
0x468: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x469: Call 0x14ab

0x46a: Pop(1)
0x46b: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x46c: PushEmpty(bool, object)
0x46d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x46e: Call 0x14db

0x46f: Pop(1)
0x470: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x471: Stack[-1] = (bool) 1
0x472: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x473: PushEmpty(string)
0x474: Stack[-1] = "Neutral"
0x475: Call 0x51e

0x476: Pop(1)
0x477: Push((int) 5721)
0x478: @@ SetMessage(Stack[-1])
0x479: Pop(1)
0x47a: @@ ClearReplies()
0x47b: Pop(0)
0x47c: Push((int) 5722)
0x47d: Push((int) 6334)
0x47e: Push((int) 6306)
0x47f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x480: Pop(3)
0x481: Push((int) 6003)
0x482: Push((int) 6615)
0x483: Push((int) 6614)
0x484: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x485: Pop(3)
0x486: GOTO 0x500

0x487: PushEmpty(string)
0x488: Stack[-1] = "Neutral"
0x489: Call 0x51e

0x48a: Pop(1)
0x48b: Push((int) 8287)
0x48c: @@ SetMessage(Stack[-1])
0x48d: Pop(1)
0x48e: @@ ClearReplies()
0x48f: Pop(0)
0x490: PushEmpty(bool)
0x491: Stack[-1] = (bool) 0
0x492: PushEmpty(bool, object)
0x493: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x494: Call 0x14b7

0x495: Pop(1)
0x496: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x497: PushEmpty(bool, object)
0x498: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x499: Call 0x14cf

0x49a: Pop(1)
0x49b: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x49c: Stack[-1] = (bool) 1
0x49d: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x49e: Push((int) 8288)
0x49f: Push((int) 6307)
0x4a0: Push((int) 9111)
0x4a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a2: Pop(3)
0x4a3: PushEmpty(bool, object)
0x4a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a5: Call 0x14c3

0x4a6: Pop(1)
0x4a7: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4a8: Push((int) 8291)
0x4a9: Push((int) 6322)
0x4aa: Push((int) 9114)
0x4ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ac: Pop(3)
0x4ad: PushEmpty(bool)
0x4ae: Stack[-1] = (bool) 0
0x4af: PushEmpty(bool, object)
0x4b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b1: Call 0x15fb

0x4b2: Pop(1)
0x4b3: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b4: PushEmpty(bool, object)
0x4b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b6: Call 0x14e7

0x4b7: Pop(1)
0x4b8: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b9: Stack[-1] = (bool) 1
0x4ba: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4bb: Push((int) 8299)
0x4bc: Push((int) 9137)
0x4bd: Push((int) 9122)
0x4be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bf: Pop(3)
0x4c0: PushEmpty(bool)
0x4c1: Stack[-1] = (bool) 1
0x4c2: PushEmpty(bool)
0x4c3: Stack[-1] = (bool) 0
0x4c4: PushEmpty(bool, object)
0x4c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c6: Call 0x1613

0x4c7: Pop(1)
0x4c8: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4c9: PushEmpty(bool, object)
0x4ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4cb: Call 0x14f3

0x4cc: Pop(1)
0x4cd: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4ce: Stack[-1] = (bool) 1
0x4cf: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4d0: PushEmpty(bool)
0x4d1: Stack[-1] = (bool) 0
0x4d2: PushEmpty(bool, object)
0x4d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d4: Call 0x15ef

0x4d5: Pop(1)
0x4d6: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4d7: PushEmpty(bool, object)
0x4d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d9: Call 0x14f3

0x4da: Pop(1)
0x4db: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4dc: Stack[-1] = (bool) 1
0x4dd: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4de: Stack[-1] = (bool) 0
0x4df: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e0: Push((int) 8302)
0x4e1: Push((int) 9457)
0x4e2: Push((int) 9125)
0x4e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e4: Pop(3)
0x4e5: PushEmpty(bool)
0x4e6: Stack[-1] = (bool) 0
0x4e7: PushEmpty(bool, object)
0x4e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e9: Call 0x1607

0x4ea: Pop(1)
0x4eb: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4ec: PushEmpty(bool, object)
0x4ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ee: Call 0x14ff

0x4ef: Pop(1)
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4f1: Stack[-1] = (bool) 1
0x4f2: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f3: Push((int) 8310)
0x4f4: Push((int) 9140)
0x4f5: Push((int) 9133)
0x4f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f7: Pop(3)
0x4f8: Push((int) 8723)
0x4f9: Push((int) -1)
0x4fa: Push((int) 9560)
0x4fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fc: Pop(3)
0x4fd: GOTO 0x500

0x4fe: Return(); Pop(0)

0x4ff: GOTO 0x463

0x500: PushEmpty(bool)
0x501: Call 0x1307

0x502: Pop(0)
0x503: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x504: @ lshWaitForAnimEnd()
0x505: Pop(0)
0x506: Push( Stack[3 + Tasks[-1].StackPointer] )
0x507: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x508: GOTO 0x50e

0x509: PushEmpty(string)
0x50a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x50b: Call 0x1298

0x50c: Pop(1)
0x50d: GOTO 0x504

0x50e: GOTO 0x51d

0x50f: Push("all")
0x510: Push("idle")
0x511: @ PlayAnimation(Stack[-2], Stack[-1])
0x512: Pop(2)
0x513: @ WaitForAnimEnd()
0x514: Pop(0)
0x515: Push( Stack[3 + Tasks[-1].StackPointer] )
0x516: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x517: GOTO 0x51d

0x518: Push("all")
0x519: Push("idle")
0x51a: @ PlayAnimation(Stack[-2], Stack[-1])
0x51b: Pop(2)
0x51c: GOTO 0x513

0x51d: Return(); Pop(0)

0x51e: PushEmpty()
0x51f: PushEmpty(bool)
0x520: Call 0x1307

0x521: Pop(0)
0x522: Pop(1); Push((bool) Stack[-1] == 0)
0x523: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x524: Return(); Pop(0)

0x525: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x526: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x527: Return(); Pop(0)

0x528: PushEmpty(string)
0x529: Stack[-1] = Stack[-2]
0x52a: Call 0x1298

0x52b: Pop(1)
0x52c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x52d: Return(); Pop(0)

0x52e: PushEmpty()
0x52f: Push((int) 1)
0x530: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x531: PushEmpty()
0x532: Call 0x12aa

0x533: Pop(0)
0x534: Push((int) 6645)
0x535: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x536: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x537: PushEmpty(object, object)
0x538: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x539: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53a: Call 0x1309

0x53b: Pop(2)
0x53c: Push((int) 6653)
0x53d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x53e: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x53f: PushEmpty(object, object)
0x540: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x541: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x542: Call 0x1309

0x543: Pop(2)
0x544: PushEmpty(object, object)
0x545: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x546: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x547: Call 0x131b

0x548: Pop(2)
0x549: Push((int) 6312)
0x54a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x54b: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x54c: PushEmpty(object, object)
0x54d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x54e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x54f: Call 0x130f

0x550: Pop(2)
0x551: Push((int) 6313)
0x552: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x553: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x554: PushEmpty(object, object)
0x555: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x556: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x557: Call 0x130f

0x558: Pop(2)
0x559: Push((int) 6314)
0x55a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x55b: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x55c: PushEmpty(object, object)
0x55d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x55e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x55f: Call 0x130f

0x560: Pop(2)
0x561: Push((int) 6319)
0x562: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x563: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x564: PushEmpty(object, object)
0x565: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x566: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x567: Call 0x130f

0x568: Pop(2)
0x569: Push((int) 6320)
0x56a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x56b: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56c: PushEmpty(object, object)
0x56d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x56e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x56f: Call 0x130f

0x570: Pop(2)
0x571: Push((int) 6321)
0x572: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x573: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x574: PushEmpty(object, object)
0x575: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x576: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x577: Call 0x130f

0x578: Pop(2)
0x579: Push((int) 6327)
0x57a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x57b: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x57c: PushEmpty(object, object)
0x57d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x57f: Call 0x1315

0x580: Pop(2)
0x581: Push((int) 6328)
0x582: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x583: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x584: PushEmpty(object, object)
0x585: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x586: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x587: Call 0x1315

0x588: Pop(2)
0x589: Push((int) 6329)
0x58a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x58b: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x58c: PushEmpty(object, object)
0x58d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x58e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58f: Call 0x1315

0x590: Pop(2)
0x591: Push((int) 6332)
0x592: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x593: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x594: PushEmpty(object, object)
0x595: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x596: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x597: Call 0x1315

0x598: Pop(2)
0x599: Push((int) 6333)
0x59a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x59b: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x59c: PushEmpty(object, object)
0x59d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x59e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x59f: Call 0x1315

0x5a0: Pop(2)
0x5a1: Push((int) 9456)
0x5a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a3: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a4: PushEmpty(object, object)
0x5a5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5a6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a7: Call 0x1336

0x5a8: Pop(2)
0x5a9: Push((int) 9453)
0x5aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ab: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5ac: PushEmpty(object, object)
0x5ad: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ae: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5af: Call 0x1336

0x5b0: Pop(2)
0x5b1: Push((int) 9469)
0x5b2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b3: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b4: PushEmpty(object, object)
0x5b5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5b6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5b7: Call 0x133c

0x5b8: Pop(2)
0x5b9: Push((int) 9466)
0x5ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5bb: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bc: PushEmpty(object, object)
0x5bd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5be: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5bf: Call 0x133c

0x5c0: Pop(2)
0x5c1: Push((int) 9474)
0x5c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c3: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c4: PushEmpty(object, object)
0x5c5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c7: Call 0x1342

0x5c8: Pop(2)
0x5c9: Push((int) 6305)
0x5ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5cb: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x5cc: PushEmpty(bool)
0x5cd: Stack[-1] = (bool) 0
0x5ce: PushEmpty(bool, object)
0x5cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d0: Call 0x14ab

0x5d1: Pop(1)
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d3: PushEmpty(bool, object)
0x5d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d5: Call 0x14db

0x5d6: Pop(1)
0x5d7: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d8: Stack[-1] = (bool) 1
0x5d9: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5da: PushEmpty(string)
0x5db: Stack[-1] = "Neutral"
0x5dc: Call 0x51e

0x5dd: Pop(1)
0x5de: Push((int) 5721)
0x5df: @@ SetMessage(Stack[-1])
0x5e0: Pop(1)
0x5e1: @@ ClearReplies()
0x5e2: Pop(0)
0x5e3: Push((int) 5722)
0x5e4: Push((int) 6334)
0x5e5: Push((int) 6306)
0x5e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e7: Pop(3)
0x5e8: Push((int) 6003)
0x5e9: Push((int) 6615)
0x5ea: Push((int) 6614)
0x5eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ec: Pop(3)
0x5ed: Return(); Pop(0)

0x5ee: PushEmpty(string)
0x5ef: Stack[-1] = "Neutral"
0x5f0: Call 0x51e

0x5f1: Pop(1)
0x5f2: Push((int) 8287)
0x5f3: @@ SetMessage(Stack[-1])
0x5f4: Pop(1)
0x5f5: @@ ClearReplies()
0x5f6: Pop(0)
0x5f7: PushEmpty(bool)
0x5f8: Stack[-1] = (bool) 0
0x5f9: PushEmpty(bool, object)
0x5fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5fb: Call 0x14b7

0x5fc: Pop(1)
0x5fd: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x5fe: PushEmpty(bool, object)
0x5ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x600: Call 0x14cf

0x601: Pop(1)
0x602: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x603: Stack[-1] = (bool) 1
0x604: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x605: Push((int) 8288)
0x606: Push((int) 6307)
0x607: Push((int) 9111)
0x608: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x609: Pop(3)
0x60a: PushEmpty(bool, object)
0x60b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60c: Call 0x14c3

0x60d: Pop(1)
0x60e: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x60f: Push((int) 8291)
0x610: Push((int) 6322)
0x611: Push((int) 9114)
0x612: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x613: Pop(3)
0x614: PushEmpty(bool)
0x615: Stack[-1] = (bool) 0
0x616: PushEmpty(bool, object)
0x617: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x618: Call 0x15fb

0x619: Pop(1)
0x61a: IF (Stack[-1] == 0) GOTO 0x621; Pop(1)

0x61b: PushEmpty(bool, object)
0x61c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61d: Call 0x14e7

0x61e: Pop(1)
0x61f: IF (Stack[-1] == 0) GOTO 0x621; Pop(1)

0x620: Stack[-1] = (bool) 1
0x621: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x622: Push((int) 8299)
0x623: Push((int) 9137)
0x624: Push((int) 9122)
0x625: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x626: Pop(3)
0x627: PushEmpty(bool)
0x628: Stack[-1] = (bool) 1
0x629: PushEmpty(bool)
0x62a: Stack[-1] = (bool) 0
0x62b: PushEmpty(bool, object)
0x62c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62d: Call 0x1613

0x62e: Pop(1)
0x62f: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x630: PushEmpty(bool, object)
0x631: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x632: Call 0x14f3

0x633: Pop(1)
0x634: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x635: Stack[-1] = (bool) 1
0x636: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x637: PushEmpty(bool)
0x638: Stack[-1] = (bool) 0
0x639: PushEmpty(bool, object)
0x63a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x63b: Call 0x15ef

0x63c: Pop(1)
0x63d: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x63e: PushEmpty(bool, object)
0x63f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x640: Call 0x14f3

0x641: Pop(1)
0x642: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x643: Stack[-1] = (bool) 1
0x644: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x645: Stack[-1] = (bool) 0
0x646: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x647: Push((int) 8302)
0x648: Push((int) 9457)
0x649: Push((int) 9125)
0x64a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64b: Pop(3)
0x64c: PushEmpty(bool)
0x64d: Stack[-1] = (bool) 0
0x64e: PushEmpty(bool, object)
0x64f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x650: Call 0x1607

0x651: Pop(1)
0x652: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x653: PushEmpty(bool, object)
0x654: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x655: Call 0x14ff

0x656: Pop(1)
0x657: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x658: Stack[-1] = (bool) 1
0x659: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65a: Push((int) 8310)
0x65b: Push((int) 9140)
0x65c: Push((int) 9133)
0x65d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65e: Pop(3)
0x65f: Push((int) 8723)
0x660: Push((int) -1)
0x661: Push((int) 9560)
0x662: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x663: Pop(3)
0x664: Return(); Pop(0)

0x665: Push((int) 9140)
0x666: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x667: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x668: PushEmpty(string)
0x669: Stack[-1] = "Neutral"
0x66a: Call 0x51e

0x66b: Pop(1)
0x66c: Push((int) 8317)
0x66d: @@ SetMessage(Stack[-1])
0x66e: Pop(1)
0x66f: @@ ClearReplies()
0x670: Pop(0)
0x671: Push((int) 8623)
0x672: Push((int) 9471)
0x673: Push((int) 9470)
0x674: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x675: Pop(3)
0x676: Return(); Pop(0)

0x677: Push((int) 9471)
0x678: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x679: IF (Stack[-1] == 0) GOTO 0x689; Pop(1)

0x67a: PushEmpty(string)
0x67b: Stack[-1] = "Neutral"
0x67c: Call 0x51e

0x67d: Pop(1)
0x67e: Push((int) 8624)
0x67f: @@ SetMessage(Stack[-1])
0x680: Pop(1)
0x681: @@ ClearReplies()
0x682: Pop(0)
0x683: Push((int) 8625)
0x684: Push((int) 9473)
0x685: Push((int) 9472)
0x686: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x687: Pop(3)
0x688: Return(); Pop(0)

0x689: Push((int) 9473)
0x68a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x68b: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x68c: PushEmpty(string)
0x68d: Stack[-1] = "Neutral"
0x68e: Call 0x51e

0x68f: Pop(1)
0x690: Push((int) 8626)
0x691: @@ SetMessage(Stack[-1])
0x692: Pop(1)
0x693: @@ ClearReplies()
0x694: Pop(0)
0x695: Push((int) 8627)
0x696: Push((int) -1)
0x697: Push((int) 9474)
0x698: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x699: Pop(3)
0x69a: Return(); Pop(0)

0x69b: Push((int) 9457)
0x69c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69d: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x69e: PushEmpty(string)
0x69f: Stack[-1] = "Neutral"
0x6a0: Call 0x51e

0x6a1: Pop(1)
0x6a2: Push((int) 8610)
0x6a3: @@ SetMessage(Stack[-1])
0x6a4: Pop(1)
0x6a5: @@ ClearReplies()
0x6a6: Pop(0)
0x6a7: PushEmpty(bool, object)
0x6a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a9: Call 0x15ef

0x6aa: Pop(1)
0x6ab: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x6ac: Push((int) 8611)
0x6ad: Push((int) 9462)
0x6ae: Push((int) 9458)
0x6af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b0: Pop(3)
0x6b1: PushEmpty(bool, object)
0x6b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b3: Call 0x1613

0x6b4: Pop(1)
0x6b5: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6b6: Push((int) 8612)
0x6b7: Push((int) 9460)
0x6b8: Push((int) 9459)
0x6b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ba: Pop(3)
0x6bb: Return(); Pop(0)

0x6bc: Push((int) 9460)
0x6bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6be: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6bf: PushEmpty(string)
0x6c0: Stack[-1] = "Neutral"
0x6c1: Call 0x51e

0x6c2: Pop(1)
0x6c3: Push((int) 8613)
0x6c4: @@ SetMessage(Stack[-1])
0x6c5: Pop(1)
0x6c6: @@ ClearReplies()
0x6c7: Pop(0)
0x6c8: Push((int) 8614)
0x6c9: Push((int) 9139)
0x6ca: Push((int) 9461)
0x6cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cc: Pop(3)
0x6cd: Return(); Pop(0)

0x6ce: Push((int) 9139)
0x6cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d0: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6d1: PushEmpty(string)
0x6d2: Stack[-1] = "Neutral"
0x6d3: Call 0x51e

0x6d4: Pop(1)
0x6d5: Push((int) 8316)
0x6d6: @@ SetMessage(Stack[-1])
0x6d7: Pop(1)
0x6d8: @@ ClearReplies()
0x6d9: Pop(0)
0x6da: Push((int) 8617)
0x6db: Push((int) 9465)
0x6dc: Push((int) 9464)
0x6dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6de: Pop(3)
0x6df: Return(); Pop(0)

0x6e0: Push((int) 9465)
0x6e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e2: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6e3: PushEmpty(string)
0x6e4: Stack[-1] = "Neutral"
0x6e5: Call 0x51e

0x6e6: Pop(1)
0x6e7: Push((int) 8618)
0x6e8: @@ SetMessage(Stack[-1])
0x6e9: Pop(1)
0x6ea: @@ ClearReplies()
0x6eb: Pop(0)
0x6ec: Push((int) 8619)
0x6ed: Push((int) -1)
0x6ee: Push((int) 9466)
0x6ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f0: Pop(3)
0x6f1: Return(); Pop(0)

0x6f2: Push((int) 9462)
0x6f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f4: IF (Stack[-1] == 0) GOTO 0x704; Pop(1)

0x6f5: PushEmpty(string)
0x6f6: Stack[-1] = "Neutral"
0x6f7: Call 0x51e

0x6f8: Pop(1)
0x6f9: Push((int) 8615)
0x6fa: @@ SetMessage(Stack[-1])
0x6fb: Pop(1)
0x6fc: @@ ClearReplies()
0x6fd: Pop(0)
0x6fe: Push((int) 8616)
0x6ff: Push((int) 9138)
0x700: Push((int) 9463)
0x701: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x702: Pop(3)
0x703: Return(); Pop(0)

0x704: Push((int) 9138)
0x705: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x706: IF (Stack[-1] == 0) GOTO 0x716; Pop(1)

0x707: PushEmpty(string)
0x708: Stack[-1] = "Neutral"
0x709: Call 0x51e

0x70a: Pop(1)
0x70b: Push((int) 8315)
0x70c: @@ SetMessage(Stack[-1])
0x70d: Pop(1)
0x70e: @@ ClearReplies()
0x70f: Pop(0)
0x710: Push((int) 8620)
0x711: Push((int) 9468)
0x712: Push((int) 9467)
0x713: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x714: Pop(3)
0x715: Return(); Pop(0)

0x716: Push((int) 9468)
0x717: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x718: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x719: PushEmpty(string)
0x71a: Stack[-1] = "Neutral"
0x71b: Call 0x51e

0x71c: Pop(1)
0x71d: Push((int) 8621)
0x71e: @@ SetMessage(Stack[-1])
0x71f: Pop(1)
0x720: @@ ClearReplies()
0x721: Pop(0)
0x722: Push((int) 8622)
0x723: Push((int) -1)
0x724: Push((int) 9469)
0x725: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x726: Pop(3)
0x727: Return(); Pop(0)

0x728: Push((int) 9137)
0x729: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x72a: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x72b: PushEmpty(string)
0x72c: Stack[-1] = "Neutral"
0x72d: Call 0x51e

0x72e: Pop(1)
0x72f: Push((int) 8314)
0x730: @@ SetMessage(Stack[-1])
0x731: Pop(1)
0x732: @@ ClearReplies()
0x733: Pop(0)
0x734: Push((int) 8604)
0x735: Push((int) 9452)
0x736: Push((int) 9451)
0x737: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x738: Pop(3)
0x739: Return(); Pop(0)

0x73a: Push((int) 9452)
0x73b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73c: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x73d: PushEmpty(string)
0x73e: Stack[-1] = "Neutral"
0x73f: Call 0x51e

0x740: Pop(1)
0x741: Push((int) 8605)
0x742: @@ SetMessage(Stack[-1])
0x743: Pop(1)
0x744: @@ ClearReplies()
0x745: Pop(0)
0x746: Push((int) 8607)
0x747: Push((int) 9455)
0x748: Push((int) 9454)
0x749: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74a: Pop(3)
0x74b: Push((int) 8606)
0x74c: Push((int) -1)
0x74d: Push((int) 9453)
0x74e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74f: Pop(3)
0x750: Return(); Pop(0)

0x751: Push((int) 9455)
0x752: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x753: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x754: PushEmpty(string)
0x755: Stack[-1] = "Neutral"
0x756: Call 0x51e

0x757: Pop(1)
0x758: Push((int) 8608)
0x759: @@ SetMessage(Stack[-1])
0x75a: Pop(1)
0x75b: @@ ClearReplies()
0x75c: Pop(0)
0x75d: Push((int) 8609)
0x75e: Push((int) -1)
0x75f: Push((int) 9456)
0x760: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x761: Pop(3)
0x762: Return(); Pop(0)

0x763: Push((int) 6322)
0x764: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x765: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x766: PushEmpty(string)
0x767: Stack[-1] = "Neutral"
0x768: Call 0x51e

0x769: Pop(1)
0x76a: Push((int) 5737)
0x76b: @@ SetMessage(Stack[-1])
0x76c: Pop(1)
0x76d: @@ ClearReplies()
0x76e: Pop(0)
0x76f: Push((int) 5738)
0x770: Push((int) 6324)
0x771: Push((int) 6323)
0x772: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x773: Pop(3)
0x774: Push((int) 5745)
0x775: Push((int) 6331)
0x776: Push((int) 6330)
0x777: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x778: Pop(3)
0x779: Return(); Pop(0)

0x77a: Push((int) 6331)
0x77b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x77c: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x77d: PushEmpty(string)
0x77e: Stack[-1] = "Neutral"
0x77f: Call 0x51e

0x780: Pop(1)
0x781: Push((int) 5746)
0x782: @@ SetMessage(Stack[-1])
0x783: Pop(1)
0x784: @@ ClearReplies()
0x785: Pop(0)
0x786: Push((int) 5747)
0x787: Push((int) -1)
0x788: Push((int) 6332)
0x789: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78a: Pop(3)
0x78b: Push((int) 5748)
0x78c: Push((int) -1)
0x78d: Push((int) 6333)
0x78e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78f: Pop(3)
0x790: Return(); Pop(0)

0x791: Push((int) 6324)
0x792: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x793: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x794: PushEmpty(string)
0x795: Stack[-1] = "Neutral"
0x796: Call 0x51e

0x797: Pop(1)
0x798: Push((int) 5739)
0x799: @@ SetMessage(Stack[-1])
0x79a: Pop(1)
0x79b: @@ ClearReplies()
0x79c: Pop(0)
0x79d: Push((int) 5740)
0x79e: Push((int) 6326)
0x79f: Push((int) 6325)
0x7a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a1: Pop(3)
0x7a2: Push((int) 5744)
0x7a3: Push((int) -1)
0x7a4: Push((int) 6329)
0x7a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a6: Pop(3)
0x7a7: Return(); Pop(0)

0x7a8: Push((int) 6326)
0x7a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7aa: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x7ab: PushEmpty(string)
0x7ac: Stack[-1] = "Neutral"
0x7ad: Call 0x51e

0x7ae: Pop(1)
0x7af: Push((int) 5741)
0x7b0: @@ SetMessage(Stack[-1])
0x7b1: Pop(1)
0x7b2: @@ ClearReplies()
0x7b3: Pop(0)
0x7b4: Push((int) 5742)
0x7b5: Push((int) -1)
0x7b6: Push((int) 6327)
0x7b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b8: Pop(3)
0x7b9: Push((int) 5743)
0x7ba: Push((int) -1)
0x7bb: Push((int) 6328)
0x7bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bd: Pop(3)
0x7be: Return(); Pop(0)

0x7bf: Push((int) 6307)
0x7c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c1: IF (Stack[-1] == 0) GOTO 0x7db; Pop(1)

0x7c2: PushEmpty(string)
0x7c3: Stack[-1] = "Neutral"
0x7c4: Call 0x51e

0x7c5: Pop(1)
0x7c6: Push((int) 5723)
0x7c7: @@ SetMessage(Stack[-1])
0x7c8: Pop(1)
0x7c9: @@ ClearReplies()
0x7ca: Pop(0)
0x7cb: Push((int) 5724)
0x7cc: Push((int) 6309)
0x7cd: Push((int) 6308)
0x7ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cf: Pop(3)
0x7d0: Push((int) 5732)
0x7d1: Push((int) 6318)
0x7d2: Push((int) 6317)
0x7d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d4: Pop(3)
0x7d5: Push((int) 5736)
0x7d6: Push((int) -1)
0x7d7: Push((int) 6321)
0x7d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d9: Pop(3)
0x7da: Return(); Pop(0)

0x7db: Push((int) 6318)
0x7dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7dd: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7de: PushEmpty(string)
0x7df: Stack[-1] = "Neutral"
0x7e0: Call 0x51e

0x7e1: Pop(1)
0x7e2: Push((int) 5733)
0x7e3: @@ SetMessage(Stack[-1])
0x7e4: Pop(1)
0x7e5: @@ ClearReplies()
0x7e6: Pop(0)
0x7e7: Push((int) 5734)
0x7e8: Push((int) -1)
0x7e9: Push((int) 6319)
0x7ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7eb: Pop(3)
0x7ec: Push((int) 5735)
0x7ed: Push((int) -1)
0x7ee: Push((int) 6320)
0x7ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f0: Pop(3)
0x7f1: Return(); Pop(0)

0x7f2: Push((int) 6309)
0x7f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f4: IF (Stack[-1] == 0) GOTO 0x80e; Pop(1)

0x7f5: PushEmpty(string)
0x7f6: Stack[-1] = "Neutral"
0x7f7: Call 0x51e

0x7f8: Pop(1)
0x7f9: Push((int) 5725)
0x7fa: @@ SetMessage(Stack[-1])
0x7fb: Pop(1)
0x7fc: @@ ClearReplies()
0x7fd: Pop(0)
0x7fe: Push((int) 5726)
0x7ff: Push((int) 6311)
0x800: Push((int) 6310)
0x801: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x802: Pop(3)
0x803: Push((int) 5730)
0x804: Push((int) -1)
0x805: Push((int) 6314)
0x806: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x807: Pop(3)
0x808: Push((int) 5731)
0x809: Push((int) 6311)
0x80a: Push((int) 6315)
0x80b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80c: Pop(3)
0x80d: Return(); Pop(0)

0x80e: Push((int) 6311)
0x80f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x810: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x811: PushEmpty(string)
0x812: Stack[-1] = "Neutral"
0x813: Call 0x51e

0x814: Pop(1)
0x815: Push((int) 5727)
0x816: @@ SetMessage(Stack[-1])
0x817: Pop(1)
0x818: @@ ClearReplies()
0x819: Pop(0)
0x81a: Push((int) 5728)
0x81b: Push((int) -1)
0x81c: Push((int) 6312)
0x81d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81e: Pop(3)
0x81f: Push((int) 5729)
0x820: Push((int) -1)
0x821: Push((int) 6313)
0x822: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x823: Pop(3)
0x824: Return(); Pop(0)

0x825: Push((int) 6615)
0x826: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x827: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x828: PushEmpty(string)
0x829: Stack[-1] = "Neutral"
0x82a: Call 0x51e

0x82b: Pop(1)
0x82c: Push((int) 6004)
0x82d: @@ SetMessage(Stack[-1])
0x82e: Pop(1)
0x82f: @@ ClearReplies()
0x830: Pop(0)
0x831: Push((int) 6005)
0x832: Push((int) 6618)
0x833: Push((int) 6616)
0x834: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x835: Pop(3)
0x836: Push((int) 6006)
0x837: Push((int) 6625)
0x838: Push((int) 6617)
0x839: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83a: Pop(3)
0x83b: Return(); Pop(0)

0x83c: Push((int) 6618)
0x83d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x83e: IF (Stack[-1] == 0) GOTO 0x853; Pop(1)

0x83f: PushEmpty(string)
0x840: Stack[-1] = "Neutral"
0x841: Call 0x51e

0x842: Pop(1)
0x843: Push((int) 6007)
0x844: @@ SetMessage(Stack[-1])
0x845: Pop(1)
0x846: @@ ClearReplies()
0x847: Pop(0)
0x848: Push((int) 6011)
0x849: Push((int) 6625)
0x84a: Push((int) 6622)
0x84b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84c: Pop(3)
0x84d: Push((int) 6015)
0x84e: Push((int) 6625)
0x84f: Push((int) 6628)
0x850: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x851: Pop(3)
0x852: Return(); Pop(0)

0x853: Push((int) 6334)
0x854: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x855: IF (Stack[-1] == 0) GOTO 0x86a; Pop(1)

0x856: PushEmpty(string)
0x857: Stack[-1] = "Neutral"
0x858: Call 0x51e

0x859: Pop(1)
0x85a: Push((int) 5749)
0x85b: @@ SetMessage(Stack[-1])
0x85c: Pop(1)
0x85d: @@ ClearReplies()
0x85e: Pop(0)
0x85f: Push((int) 6008)
0x860: Push((int) 6621)
0x861: Push((int) 6619)
0x862: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x863: Pop(3)
0x864: Push((int) 6009)
0x865: Push((int) 6621)
0x866: Push((int) 6620)
0x867: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x868: Pop(3)
0x869: Return(); Pop(0)

0x86a: Push((int) 6621)
0x86b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x86c: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x86d: PushEmpty(string)
0x86e: Stack[-1] = "Neutral"
0x86f: Call 0x51e

0x870: Pop(1)
0x871: Push((int) 6010)
0x872: @@ SetMessage(Stack[-1])
0x873: Pop(1)
0x874: @@ ClearReplies()
0x875: Pop(0)
0x876: Push((int) 6016)
0x877: Push((int) 6632)
0x878: Push((int) 6631)
0x879: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87a: Pop(3)
0x87b: Push((int) 6013)
0x87c: Push((int) 6625)
0x87d: Push((int) 6624)
0x87e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87f: Pop(3)
0x880: Return(); Pop(0)

0x881: Push((int) 6625)
0x882: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x883: IF (Stack[-1] == 0) GOTO 0x893; Pop(1)

0x884: PushEmpty(string)
0x885: Stack[-1] = "Neutral"
0x886: Call 0x51e

0x887: Pop(1)
0x888: Push((int) 6014)
0x889: @@ SetMessage(Stack[-1])
0x88a: Pop(1)
0x88b: @@ ClearReplies()
0x88c: Pop(0)
0x88d: Push((int) 6018)
0x88e: Push((int) 6632)
0x88f: Push((int) 6633)
0x890: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x891: Pop(3)
0x892: Return(); Pop(0)

0x893: Push((int) 6632)
0x894: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x895: IF (Stack[-1] == 0) GOTO 0x8af; Pop(1)

0x896: PushEmpty(string)
0x897: Stack[-1] = "Neutral"
0x898: Call 0x51e

0x899: Pop(1)
0x89a: Push((int) 6017)
0x89b: @@ SetMessage(Stack[-1])
0x89c: Pop(1)
0x89d: @@ ClearReplies()
0x89e: Pop(0)
0x89f: Push((int) 6019)
0x8a0: Push((int) 6636)
0x8a1: Push((int) 6634)
0x8a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a3: Pop(3)
0x8a4: Push((int) 6020)
0x8a5: Push((int) 6637)
0x8a6: Push((int) 6635)
0x8a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a8: Pop(3)
0x8a9: Push((int) 6039)
0x8aa: Push((int) 6661)
0x8ab: Push((int) 6660)
0x8ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ad: Pop(3)
0x8ae: Return(); Pop(0)

0x8af: Push((int) 6661)
0x8b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b1: IF (Stack[-1] == 0) GOTO 0x8c1; Pop(1)

0x8b2: PushEmpty(string)
0x8b3: Stack[-1] = "Neutral"
0x8b4: Call 0x51e

0x8b5: Pop(1)
0x8b6: Push((int) 6040)
0x8b7: @@ SetMessage(Stack[-1])
0x8b8: Pop(1)
0x8b9: @@ ClearReplies()
0x8ba: Pop(0)
0x8bb: Push((int) 6041)
0x8bc: Push((int) 6636)
0x8bd: Push((int) 6662)
0x8be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bf: Pop(3)
0x8c0: Return(); Pop(0)

0x8c1: Push((int) 6637)
0x8c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c3: IF (Stack[-1] == 0) GOTO 0x8dd; Pop(1)

0x8c4: PushEmpty(string)
0x8c5: Stack[-1] = "Neutral"
0x8c6: Call 0x51e

0x8c7: Pop(1)
0x8c8: Push((int) 6022)
0x8c9: @@ SetMessage(Stack[-1])
0x8ca: Pop(1)
0x8cb: @@ ClearReplies()
0x8cc: Pop(0)
0x8cd: Push((int) 6023)
0x8ce: Push((int) 6641)
0x8cf: Push((int) 6638)
0x8d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d1: Pop(3)
0x8d2: Push((int) 6027)
0x8d3: Push((int) 6652)
0x8d4: Push((int) 6642)
0x8d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d6: Pop(3)
0x8d7: Push((int) 6029)
0x8d8: Push((int) 6647)
0x8d9: Push((int) 6646)
0x8da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8db: Pop(3)
0x8dc: Return(); Pop(0)

0x8dd: Push((int) 6647)
0x8de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8df: IF (Stack[-1] == 0) GOTO 0x8f4; Pop(1)

0x8e0: PushEmpty(string)
0x8e1: Stack[-1] = "Neutral"
0x8e2: Call 0x51e

0x8e3: Pop(1)
0x8e4: Push((int) 6030)
0x8e5: @@ SetMessage(Stack[-1])
0x8e6: Pop(1)
0x8e7: @@ ClearReplies()
0x8e8: Pop(0)
0x8e9: Push((int) 6031)
0x8ea: Push((int) 6652)
0x8eb: Push((int) 6648)
0x8ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ed: Pop(3)
0x8ee: Push((int) 6032)
0x8ef: Push((int) 6650)
0x8f0: Push((int) 6649)
0x8f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f2: Pop(3)
0x8f3: Return(); Pop(0)

0x8f4: Push((int) 6650)
0x8f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f6: IF (Stack[-1] == 0) GOTO 0x90b; Pop(1)

0x8f7: PushEmpty(string)
0x8f8: Stack[-1] = "Neutral"
0x8f9: Call 0x51e

0x8fa: Pop(1)
0x8fb: Push((int) 6033)
0x8fc: @@ SetMessage(Stack[-1])
0x8fd: Pop(1)
0x8fe: @@ ClearReplies()
0x8ff: Pop(0)
0x900: Push((int) 6034)
0x901: Push((int) 6652)
0x902: Push((int) 6651)
0x903: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x904: Pop(3)
0x905: Push((int) 6037)
0x906: Push((int) 6641)
0x907: Push((int) 6655)
0x908: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x909: Pop(3)
0x90a: Return(); Pop(0)

0x90b: Push((int) 6652)
0x90c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x90d: IF (Stack[-1] == 0) GOTO 0x922; Pop(1)

0x90e: PushEmpty(string)
0x90f: Stack[-1] = "Neutral"
0x910: Call 0x51e

0x911: Pop(1)
0x912: Push((int) 6035)
0x913: @@ SetMessage(Stack[-1])
0x914: Pop(1)
0x915: @@ ClearReplies()
0x916: Pop(0)
0x917: Push((int) 6036)
0x918: Push((int) -1)
0x919: Push((int) 6653)
0x91a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91b: Pop(3)
0x91c: Push((int) 6038)
0x91d: Push((int) 6641)
0x91e: Push((int) 6656)
0x91f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x920: Pop(3)
0x921: Return(); Pop(0)

0x922: Push((int) 6636)
0x923: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x924: IF (Stack[-1] == 0) GOTO 0x939; Pop(1)

0x925: PushEmpty(string)
0x926: Stack[-1] = "Neutral"
0x927: Call 0x51e

0x928: Pop(1)
0x929: Push((int) 6021)
0x92a: @@ SetMessage(Stack[-1])
0x92b: Pop(1)
0x92c: @@ ClearReplies()
0x92d: Pop(0)
0x92e: Push((int) 6024)
0x92f: Push((int) 6641)
0x930: Push((int) 6639)
0x931: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x932: Pop(3)
0x933: Push((int) 6025)
0x934: Push((int) 6641)
0x935: Push((int) 6640)
0x936: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x937: Pop(3)
0x938: Return(); Pop(0)

0x939: Push((int) 6641)
0x93a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93b: IF (Stack[-1] == 0) GOTO 0x94b; Pop(1)

0x93c: PushEmpty(string)
0x93d: Stack[-1] = "Neutral"
0x93e: Call 0x51e

0x93f: Pop(1)
0x940: Push((int) 6026)
0x941: @@ SetMessage(Stack[-1])
0x942: Pop(1)
0x943: @@ ClearReplies()
0x944: Pop(0)
0x945: Push((int) 6028)
0x946: Push((int) -1)
0x947: Push((int) 6645)
0x948: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x949: Pop(3)
0x94a: Return(); Pop(0)

0x94b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x94c: PushEmpty(bool)
0x94d: Call 0x1307

0x94e: Pop(0)
0x94f: IF (Stack[-1] == 0) GOTO 0x953; Pop(1)

0x950: @ lshStopAnimation()
0x951: Pop(0)
0x952: GOTO 0x955

0x953: @ StopAnimation()
0x954: Pop(0)
0x955: Return(); Pop(0)

0x956: GOTO 0x52f

0x957: Return(); Pop(0)

0x958: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x959: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x95a: PushEmpty(bool, object)
0x95b: Stack[-1] = Stack[-11]
0x95c: Call 0x125c

0x95d: Pop(1)
0x95e: Pop(1); Push((bool) Stack[-1] == 0)
0x95f: IF (Stack[-1] == 0) GOTO 0x962; Pop(1)

0x960: Stack[-10] = (int) -2
0x961: Return(); Pop(8)

0x962: @ CreateDialog(Stack[-4])
0x963: Pop(0)
0x964: PushEmpty(int)
0x965: Call 0x1303

0x966: Pop(0)
0x967: @@ SetNPCName(Stack[-1])
0x968: Pop(1)
0x969: PushEmpty(string)
0x96a: Call 0x1305

0x96b: Pop(0)
0x96c: @@ SetPhoto(Stack[-1])
0x96d: Pop(1)
0x96e: PushEmpty(int)
0x96f: Call 0x168c

0x970: Pop(0)
0x971: @@ SetPlayerName(Stack[-1])
0x972: Pop(1)
0x973: Stack[-2] = (int) -1
0x974: @ IsOverrideActive(Stack[-3])
0x975: Pop(0)
0x976: Push(Stack[-3])
0x977: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x978: Stack[-10] = (int) -2
0x979: Return(); Pop(8)

0x97a: @ DoDialog(Stack[-4])
0x97b: Pop(0)
0x97c: PushEmpty(object, object)
0x97d: Stack[-2] = Stack[-11]
0x97e: Stack[-1] = Stack[-6]
0x97f: Push(-2, 4); TaskCall(9)
0x980: Call 0x997

0x981: Pop(-2, 4); TaskReturn
0x982: Pop(2)
0x983: @@ IsDialogEnd(Stack[-1])
0x984: Pop(0)
0x985: Pop(0); Push((bool) Stack[-1] == 0)
0x986: IF (Stack[-1] == 0) GOTO 0x98c; Pop(1)

0x987: @ sync()
0x988: Pop(0)
0x989: @@ IsDialogEnd(Stack[-1])
0x98a: Pop(0)
0x98b: GOTO 0x985

0x98c: PushEmpty(object)
0x98d: Stack[-1] = Stack[-10]
0x98e: Call 0x1294

0x98f: Pop(1)
0x990: @ StopDialog(Stack[-4])
0x991: Pop(0)
0x992: @@ GetReturnValue(Stack[-2])
0x993: Pop(0)
0x994: Stack[-10] = Stack[-2]
0x995: Return(); Pop(8)

0x996: Stack[-4] = 0
0x997: PushEmpty()
0x998: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x999: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x99a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x99b: Push((int) 1)
0x99c: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x99d: PushEmpty(string)
0x99e: Stack[-1] = "Neutral"
0x99f: Call 0xa19

0x9a0: Pop(1)
0x9a1: Push((int) 8869)
0x9a2: @@ SetMessage(Stack[-1])
0x9a3: Pop(1)
0x9a4: @@ ClearReplies()
0x9a5: Pop(0)
0x9a6: PushEmpty(bool)
0x9a7: Stack[-1] = (bool) 0
0x9a8: PushEmpty(bool, object)
0x9a9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9aa: Call 0x1517

0x9ab: Pop(1)
0x9ac: IF (Stack[-1] == 0) GOTO 0x9b3; Pop(1)

0x9ad: PushEmpty(bool, object)
0x9ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9af: Call 0x153b

0x9b0: Pop(1)
0x9b1: IF (Stack[-1] == 0) GOTO 0x9b3; Pop(1)

0x9b2: Stack[-1] = (bool) 1
0x9b3: IF (Stack[-1] == 0) GOTO 0x9b9; Pop(1)

0x9b4: Push((int) 8889)
0x9b5: Push((int) 9751)
0x9b6: Push((int) 9750)
0x9b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b8: Pop(3)
0x9b9: PushEmpty(bool)
0x9ba: Stack[-1] = (bool) 0
0x9bb: PushEmpty(bool)
0x9bc: Stack[-1] = (bool) 0
0x9bd: PushEmpty(bool, object)
0x9be: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9bf: Call 0x152f

0x9c0: Pop(1)
0x9c1: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c2: PushEmpty(bool, object)
0x9c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c4: Call 0x1517

0x9c5: Pop(1)
0x9c6: Pop(1); Push((bool) Stack[-1] == 0)
0x9c7: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c8: Stack[-1] = (bool) 1
0x9c9: IF (Stack[-1] == 0) GOTO 0x9d0; Pop(1)

0x9ca: PushEmpty(bool, object)
0x9cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9cc: Call 0x153b

0x9cd: Pop(1)
0x9ce: IF (Stack[-1] == 0) GOTO 0x9d0; Pop(1)

0x9cf: Stack[-1] = (bool) 1
0x9d0: IF (Stack[-1] == 0) GOTO 0x9d6; Pop(1)

0x9d1: Push((int) 11136)
0x9d2: Push((int) 12326)
0x9d3: Push((int) 12325)
0x9d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d5: Pop(3)
0x9d6: PushEmpty(bool, object)
0x9d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9d8: Call 0x150b

0x9d9: Pop(1)
0x9da: IF (Stack[-1] == 0) GOTO 0x9e0; Pop(1)

0x9db: Push((int) 8888)
0x9dc: Push((int) 9729)
0x9dd: Push((int) 9749)
0x9de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9df: Pop(3)
0x9e0: PushEmpty(bool)
0x9e1: Stack[-1] = (bool) 0
0x9e2: PushEmpty(bool, object)
0x9e3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e4: Call 0x1523

0x9e5: Pop(1)
0x9e6: IF (Stack[-1] == 0) GOTO 0x9ed; Pop(1)

0x9e7: PushEmpty(bool, object)
0x9e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e9: Call 0x1547

0x9ea: Pop(1)
0x9eb: IF (Stack[-1] == 0) GOTO 0x9ed; Pop(1)

0x9ec: Stack[-1] = (bool) 1
0x9ed: IF (Stack[-1] == 0) GOTO 0x9f3; Pop(1)

0x9ee: Push((int) 8908)
0x9ef: Push((int) 9772)
0x9f0: Push((int) 9771)
0x9f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f2: Pop(3)
0x9f3: Push((int) 11134)
0x9f4: Push((int) -1)
0x9f5: Push((int) 12323)
0x9f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f7: Pop(3)
0x9f8: GOTO 0x9fb

0x9f9: Return(); Pop(0)

0x9fa: GOTO 0x99b

0x9fb: PushEmpty(bool)
0x9fc: Call 0x1307

0x9fd: Pop(0)
0x9fe: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0x9ff: @ lshWaitForAnimEnd()
0xa00: Pop(0)
0xa01: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa02: IF (Stack[-1] == 0) GOTO 0xa04; Pop(1)

0xa03: GOTO 0xa09

0xa04: PushEmpty(string)
0xa05: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa06: Call 0x1298

0xa07: Pop(1)
0xa08: GOTO 0x9ff

0xa09: GOTO 0xa18

0xa0a: Push("all")
0xa0b: Push("idle")
0xa0c: @ PlayAnimation(Stack[-2], Stack[-1])
0xa0d: Pop(2)
0xa0e: @ WaitForAnimEnd()
0xa0f: Pop(0)
0xa10: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa11: IF (Stack[-1] == 0) GOTO 0xa13; Pop(1)

0xa12: GOTO 0xa18

0xa13: Push("all")
0xa14: Push("idle")
0xa15: @ PlayAnimation(Stack[-2], Stack[-1])
0xa16: Pop(2)
0xa17: GOTO 0xa0e

0xa18: Return(); Pop(0)

0xa19: PushEmpty()
0xa1a: PushEmpty(bool)
0xa1b: Call 0x1307

0xa1c: Pop(0)
0xa1d: Pop(1); Push((bool) Stack[-1] == 0)
0xa1e: IF (Stack[-1] == 0) GOTO 0xa20; Pop(1)

0xa1f: Return(); Pop(0)

0xa20: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa21: IF (Stack[-1] == 0) GOTO 0xa23; Pop(1)

0xa22: Return(); Pop(0)

0xa23: PushEmpty(string)
0xa24: Stack[-1] = Stack[-2]
0xa25: Call 0x1298

0xa26: Pop(1)
0xa27: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa28: Return(); Pop(0)

0xa29: PushEmpty()
0xa2a: Push((int) 1)
0xa2b: IF (Stack[-1] == 0) GOTO 0xcb9; Pop(1)

0xa2c: PushEmpty()
0xa2d: Call 0x12aa

0xa2e: Pop(0)
0xa2f: Push((int) 9768)
0xa30: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa31: IF (Stack[-1] == 0) GOTO 0xa41; Pop(1)

0xa32: PushEmpty(object, object)
0xa33: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa34: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa35: Call 0x135a

0xa36: Pop(2)
0xa37: PushEmpty(object, object)
0xa38: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa39: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa3a: Call 0x134e

0xa3b: Pop(2)
0xa3c: PushEmpty(object, object)
0xa3d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa3e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa3f: Call 0x139c

0xa40: Pop(2)
0xa41: Push((int) 9769)
0xa42: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa43: IF (Stack[-1] == 0) GOTO 0xa49; Pop(1)

0xa44: PushEmpty(object, object)
0xa45: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa46: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa47: Call 0x134e

0xa48: Pop(2)
0xa49: Push((int) 9760)
0xa4a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa4b: IF (Stack[-1] == 0) GOTO 0xa51; Pop(1)

0xa4c: PushEmpty(object, object)
0xa4d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa4e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa4f: Call 0x134e

0xa50: Pop(2)
0xa51: Push((int) 9762)
0xa52: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa53: IF (Stack[-1] == 0) GOTO 0xa59; Pop(1)

0xa54: PushEmpty(object, object)
0xa55: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa56: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa57: Call 0x134e

0xa58: Pop(2)
0xa59: Push((int) 12327)
0xa5a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa5b: IF (Stack[-1] == 0) GOTO 0xa6b; Pop(1)

0xa5c: PushEmpty(object, object)
0xa5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa5f: Call 0x135a

0xa60: Pop(2)
0xa61: PushEmpty(object, object)
0xa62: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa63: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa64: Call 0x137a

0xa65: Pop(2)
0xa66: PushEmpty(object, object)
0xa67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa69: Call 0x139c

0xa6a: Pop(2)
0xa6b: Push((int) 9736)
0xa6c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa6d: IF (Stack[-1] == 0) GOTO 0xa73; Pop(1)

0xa6e: PushEmpty(object, object)
0xa6f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa70: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa71: Call 0x1348

0xa72: Pop(2)
0xa73: Push((int) 9737)
0xa74: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa75: IF (Stack[-1] == 0) GOTO 0xa7b; Pop(1)

0xa76: PushEmpty(object, object)
0xa77: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa78: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa79: Call 0x1348

0xa7a: Pop(2)
0xa7b: Push((int) 9738)
0xa7c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7d: IF (Stack[-1] == 0) GOTO 0xa83; Pop(1)

0xa7e: PushEmpty(object, object)
0xa7f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa80: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa81: Call 0x1348

0xa82: Pop(2)
0xa83: Push((int) 9745)
0xa84: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa85: IF (Stack[-1] == 0) GOTO 0xa8b; Pop(1)

0xa86: PushEmpty(object, object)
0xa87: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa88: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa89: Call 0x1348

0xa8a: Pop(2)
0xa8b: Push((int) 9746)
0xa8c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa8d: IF (Stack[-1] == 0) GOTO 0xa93; Pop(1)

0xa8e: PushEmpty(object, object)
0xa8f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa90: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa91: Call 0x1348

0xa92: Pop(2)
0xa93: Push((int) 9788)
0xa94: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa95: IF (Stack[-1] == 0) GOTO 0xaa0; Pop(1)

0xa96: PushEmpty(object, object)
0xa97: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa98: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa99: Call 0x1354

0xa9a: Pop(2)
0xa9b: PushEmpty(object, object)
0xa9c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa9d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa9e: Call 0x1380

0xa9f: Pop(2)
0xaa0: Push((int) 9789)
0xaa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaa2: IF (Stack[-1] == 0) GOTO 0xaad; Pop(1)

0xaa3: PushEmpty(object, object)
0xaa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaa6: Call 0x1354

0xaa7: Pop(2)
0xaa8: PushEmpty(object, object)
0xaa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaab: Call 0x1380

0xaac: Pop(2)
0xaad: Push((int) 9728)
0xaae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaaf: IF (Stack[-1] == 0) GOTO 0xb0c; Pop(1)

0xab0: PushEmpty(string)
0xab1: Stack[-1] = "Neutral"
0xab2: Call 0xa19

0xab3: Pop(1)
0xab4: Push((int) 8869)
0xab5: @@ SetMessage(Stack[-1])
0xab6: Pop(1)
0xab7: @@ ClearReplies()
0xab8: Pop(0)
0xab9: PushEmpty(bool)
0xaba: Stack[-1] = (bool) 0
0xabb: PushEmpty(bool, object)
0xabc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xabd: Call 0x1517

0xabe: Pop(1)
0xabf: IF (Stack[-1] == 0) GOTO 0xac6; Pop(1)

0xac0: PushEmpty(bool, object)
0xac1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xac2: Call 0x153b

0xac3: Pop(1)
0xac4: IF (Stack[-1] == 0) GOTO 0xac6; Pop(1)

0xac5: Stack[-1] = (bool) 1
0xac6: IF (Stack[-1] == 0) GOTO 0xacc; Pop(1)

0xac7: Push((int) 8889)
0xac8: Push((int) 9751)
0xac9: Push((int) 9750)
0xaca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xacb: Pop(3)
0xacc: PushEmpty(bool)
0xacd: Stack[-1] = (bool) 0
0xace: PushEmpty(bool)
0xacf: Stack[-1] = (bool) 0
0xad0: PushEmpty(bool, object)
0xad1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xad2: Call 0x152f

0xad3: Pop(1)
0xad4: IF (Stack[-1] == 0) GOTO 0xadc; Pop(1)

0xad5: PushEmpty(bool, object)
0xad6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xad7: Call 0x1517

0xad8: Pop(1)
0xad9: Pop(1); Push((bool) Stack[-1] == 0)
0xada: IF (Stack[-1] == 0) GOTO 0xadc; Pop(1)

0xadb: Stack[-1] = (bool) 1
0xadc: IF (Stack[-1] == 0) GOTO 0xae3; Pop(1)

0xadd: PushEmpty(bool, object)
0xade: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xadf: Call 0x153b

0xae0: Pop(1)
0xae1: IF (Stack[-1] == 0) GOTO 0xae3; Pop(1)

0xae2: Stack[-1] = (bool) 1
0xae3: IF (Stack[-1] == 0) GOTO 0xae9; Pop(1)

0xae4: Push((int) 11136)
0xae5: Push((int) 12326)
0xae6: Push((int) 12325)
0xae7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae8: Pop(3)
0xae9: PushEmpty(bool, object)
0xaea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaeb: Call 0x150b

0xaec: Pop(1)
0xaed: IF (Stack[-1] == 0) GOTO 0xaf3; Pop(1)

0xaee: Push((int) 8888)
0xaef: Push((int) 9729)
0xaf0: Push((int) 9749)
0xaf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf2: Pop(3)
0xaf3: PushEmpty(bool)
0xaf4: Stack[-1] = (bool) 0
0xaf5: PushEmpty(bool, object)
0xaf6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaf7: Call 0x1523

0xaf8: Pop(1)
0xaf9: IF (Stack[-1] == 0) GOTO 0xb00; Pop(1)

0xafa: PushEmpty(bool, object)
0xafb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xafc: Call 0x1547

0xafd: Pop(1)
0xafe: IF (Stack[-1] == 0) GOTO 0xb00; Pop(1)

0xaff: Stack[-1] = (bool) 1
0xb00: IF (Stack[-1] == 0) GOTO 0xb06; Pop(1)

0xb01: Push((int) 8908)
0xb02: Push((int) 9772)
0xb03: Push((int) 9771)
0xb04: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb05: Pop(3)
0xb06: Push((int) 11134)
0xb07: Push((int) -1)
0xb08: Push((int) 12323)
0xb09: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0a: Pop(3)
0xb0b: Return(); Pop(0)

0xb0c: Push((int) 9772)
0xb0d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb0e: IF (Stack[-1] == 0) GOTO 0xb28; Pop(1)

0xb0f: PushEmpty(string)
0xb10: Stack[-1] = "Neutral"
0xb11: Call 0xa19

0xb12: Pop(1)
0xb13: Push((int) 8909)
0xb14: @@ SetMessage(Stack[-1])
0xb15: Pop(1)
0xb16: @@ ClearReplies()
0xb17: Pop(0)
0xb18: Push((int) 8913)
0xb19: Push((int) 9778)
0xb1a: Push((int) 9777)
0xb1b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1c: Pop(3)
0xb1d: Push((int) 8910)
0xb1e: Push((int) 9775)
0xb1f: Push((int) 9773)
0xb20: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb21: Pop(3)
0xb22: Push((int) 8911)
0xb23: Push((int) 9775)
0xb24: Push((int) 9774)
0xb25: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb26: Pop(3)
0xb27: Return(); Pop(0)

0xb28: Push((int) 9775)
0xb29: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb2a: IF (Stack[-1] == 0) GOTO 0xb3a; Pop(1)

0xb2b: PushEmpty(string)
0xb2c: Stack[-1] = "Neutral"
0xb2d: Call 0xa19

0xb2e: Pop(1)
0xb2f: Push((int) 8912)
0xb30: @@ SetMessage(Stack[-1])
0xb31: Pop(1)
0xb32: @@ ClearReplies()
0xb33: Pop(0)
0xb34: Push((int) 8915)
0xb35: Push((int) -1)
0xb36: Push((int) 9779)
0xb37: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb38: Pop(3)
0xb39: Return(); Pop(0)

0xb3a: Push((int) 9778)
0xb3b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb3c: IF (Stack[-1] == 0) GOTO 0xb51; Pop(1)

0xb3d: PushEmpty(string)
0xb3e: Stack[-1] = "Neutral"
0xb3f: Call 0xa19

0xb40: Pop(1)
0xb41: Push((int) 8914)
0xb42: @@ SetMessage(Stack[-1])
0xb43: Pop(1)
0xb44: @@ ClearReplies()
0xb45: Pop(0)
0xb46: Push((int) 8916)
0xb47: Push((int) 9781)
0xb48: Push((int) 9780)
0xb49: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb4a: Pop(3)
0xb4b: Push((int) 8918)
0xb4c: Push((int) 9783)
0xb4d: Push((int) 9782)
0xb4e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb4f: Pop(3)
0xb50: Return(); Pop(0)

0xb51: Push((int) 9783)
0xb52: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb53: IF (Stack[-1] == 0) GOTO 0xb63; Pop(1)

0xb54: PushEmpty(string)
0xb55: Stack[-1] = "Neutral"
0xb56: Call 0xa19

0xb57: Pop(1)
0xb58: Push((int) 8919)
0xb59: @@ SetMessage(Stack[-1])
0xb5a: Pop(1)
0xb5b: @@ ClearReplies()
0xb5c: Pop(0)
0xb5d: Push((int) 8920)
0xb5e: Push((int) 9786)
0xb5f: Push((int) 9784)
0xb60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb61: Pop(3)
0xb62: Return(); Pop(0)

0xb63: Push((int) 9781)
0xb64: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb65: IF (Stack[-1] == 0) GOTO 0xb75; Pop(1)

0xb66: PushEmpty(string)
0xb67: Stack[-1] = "Neutral"
0xb68: Call 0xa19

0xb69: Pop(1)
0xb6a: Push((int) 8917)
0xb6b: @@ SetMessage(Stack[-1])
0xb6c: Pop(1)
0xb6d: @@ ClearReplies()
0xb6e: Pop(0)
0xb6f: Push((int) 8921)
0xb70: Push((int) 9786)
0xb71: Push((int) 9785)
0xb72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb73: Pop(3)
0xb74: Return(); Pop(0)

0xb75: Push((int) 9786)
0xb76: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb77: IF (Stack[-1] == 0) GOTO 0xb8c; Pop(1)

0xb78: PushEmpty(string)
0xb79: Stack[-1] = "Neutral"
0xb7a: Call 0xa19

0xb7b: Pop(1)
0xb7c: Push((int) 8922)
0xb7d: @@ SetMessage(Stack[-1])
0xb7e: Pop(1)
0xb7f: @@ ClearReplies()
0xb80: Pop(0)
0xb81: Push((int) 8923)
0xb82: Push((int) -1)
0xb83: Push((int) 9788)
0xb84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb85: Pop(3)
0xb86: Push((int) 8924)
0xb87: Push((int) -1)
0xb88: Push((int) 9789)
0xb89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8a: Pop(3)
0xb8b: Return(); Pop(0)

0xb8c: Push((int) 9729)
0xb8d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb8e: IF (Stack[-1] == 0) GOTO 0xba3; Pop(1)

0xb8f: PushEmpty(string)
0xb90: Stack[-1] = "Neutral"
0xb91: Call 0xa19

0xb92: Pop(1)
0xb93: Push((int) 8870)
0xb94: @@ SetMessage(Stack[-1])
0xb95: Pop(1)
0xb96: @@ ClearReplies()
0xb97: Pop(0)
0xb98: Push((int) 8871)
0xb99: Push((int) 9731)
0xb9a: Push((int) 9730)
0xb9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9c: Pop(3)
0xb9d: Push((int) 8887)
0xb9e: Push((int) 9731)
0xb9f: Push((int) 9747)
0xba0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba1: Pop(3)
0xba2: Return(); Pop(0)

0xba3: Push((int) 9731)
0xba4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xba5: IF (Stack[-1] == 0) GOTO 0xbba; Pop(1)

0xba6: PushEmpty(string)
0xba7: Stack[-1] = "Neutral"
0xba8: Call 0xa19

0xba9: Pop(1)
0xbaa: Push((int) 8872)
0xbab: @@ SetMessage(Stack[-1])
0xbac: Pop(1)
0xbad: @@ ClearReplies()
0xbae: Pop(0)
0xbaf: Push((int) 8873)
0xbb0: Push((int) 9733)
0xbb1: Push((int) 9732)
0xbb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb3: Pop(3)
0xbb4: Push((int) 8880)
0xbb5: Push((int) 9740)
0xbb6: Push((int) 9739)
0xbb7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb8: Pop(3)
0xbb9: Return(); Pop(0)

0xbba: Push((int) 9740)
0xbbb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbbc: IF (Stack[-1] == 0) GOTO 0xbd1; Pop(1)

0xbbd: PushEmpty(string)
0xbbe: Stack[-1] = "Neutral"
0xbbf: Call 0xa19

0xbc0: Pop(1)
0xbc1: Push((int) 8881)
0xbc2: @@ SetMessage(Stack[-1])
0xbc3: Pop(1)
0xbc4: @@ ClearReplies()
0xbc5: Pop(0)
0xbc6: Push((int) 8882)
0xbc7: Push((int) 9733)
0xbc8: Push((int) 9741)
0xbc9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbca: Pop(3)
0xbcb: Push((int) 8883)
0xbcc: Push((int) 9744)
0xbcd: Push((int) 9743)
0xbce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbcf: Pop(3)
0xbd0: Return(); Pop(0)

0xbd1: Push((int) 9744)
0xbd2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbd3: IF (Stack[-1] == 0) GOTO 0xbe8; Pop(1)

0xbd4: PushEmpty(string)
0xbd5: Stack[-1] = "Neutral"
0xbd6: Call 0xa19

0xbd7: Pop(1)
0xbd8: Push((int) 8884)
0xbd9: @@ SetMessage(Stack[-1])
0xbda: Pop(1)
0xbdb: @@ ClearReplies()
0xbdc: Pop(0)
0xbdd: Push((int) 8885)
0xbde: Push((int) -1)
0xbdf: Push((int) 9745)
0xbe0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe1: Pop(3)
0xbe2: Push((int) 8886)
0xbe3: Push((int) -1)
0xbe4: Push((int) 9746)
0xbe5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe6: Pop(3)
0xbe7: Return(); Pop(0)

0xbe8: Push((int) 9733)
0xbe9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbea: IF (Stack[-1] == 0) GOTO 0xbff; Pop(1)

0xbeb: PushEmpty(string)
0xbec: Stack[-1] = "Neutral"
0xbed: Call 0xa19

0xbee: Pop(1)
0xbef: Push((int) 8874)
0xbf0: @@ SetMessage(Stack[-1])
0xbf1: Pop(1)
0xbf2: @@ ClearReplies()
0xbf3: Pop(0)
0xbf4: Push((int) 8875)
0xbf5: Push((int) 9735)
0xbf6: Push((int) 9734)
0xbf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf8: Pop(3)
0xbf9: Push((int) 8879)
0xbfa: Push((int) -1)
0xbfb: Push((int) 9738)
0xbfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbfd: Pop(3)
0xbfe: Return(); Pop(0)

0xbff: Push((int) 9735)
0xc00: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc01: IF (Stack[-1] == 0) GOTO 0xc16; Pop(1)

0xc02: PushEmpty(string)
0xc03: Stack[-1] = "Neutral"
0xc04: Call 0xa19

0xc05: Pop(1)
0xc06: Push((int) 8876)
0xc07: @@ SetMessage(Stack[-1])
0xc08: Pop(1)
0xc09: @@ ClearReplies()
0xc0a: Pop(0)
0xc0b: Push((int) 8877)
0xc0c: Push((int) -1)
0xc0d: Push((int) 9736)
0xc0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0f: Pop(3)
0xc10: Push((int) 8878)
0xc11: Push((int) -1)
0xc12: Push((int) 9737)
0xc13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc14: Pop(3)
0xc15: Return(); Pop(0)

0xc16: Push((int) 12326)
0xc17: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc18: IF (Stack[-1] == 0) GOTO 0xc28; Pop(1)

0xc19: PushEmpty(string)
0xc1a: Stack[-1] = "Neutral"
0xc1b: Call 0xa19

0xc1c: Pop(1)
0xc1d: Push((int) 11137)
0xc1e: @@ SetMessage(Stack[-1])
0xc1f: Pop(1)
0xc20: @@ ClearReplies()
0xc21: Pop(0)
0xc22: Push((int) 11138)
0xc23: Push((int) -1)
0xc24: Push((int) 12327)
0xc25: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc26: Pop(3)
0xc27: Return(); Pop(0)

0xc28: Push((int) 9751)
0xc29: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc2a: IF (Stack[-1] == 0) GOTO 0xc3f; Pop(1)

0xc2b: PushEmpty(string)
0xc2c: Stack[-1] = "Neutral"
0xc2d: Call 0xa19

0xc2e: Pop(1)
0xc2f: Push((int) 8890)
0xc30: @@ SetMessage(Stack[-1])
0xc31: Pop(1)
0xc32: @@ ClearReplies()
0xc33: Pop(0)
0xc34: Push((int) 8891)
0xc35: Push((int) 9753)
0xc36: Push((int) 9752)
0xc37: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc38: Pop(3)
0xc39: Push((int) 8893)
0xc3a: Push((int) 9759)
0xc3b: Push((int) 9754)
0xc3c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3d: Pop(3)
0xc3e: Return(); Pop(0)

0xc3f: Push((int) 9759)
0xc40: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc41: IF (Stack[-1] == 0) GOTO 0xc56; Pop(1)

0xc42: PushEmpty(string)
0xc43: Stack[-1] = "Neutral"
0xc44: Call 0xa19

0xc45: Pop(1)
0xc46: Push((int) 8898)
0xc47: @@ SetMessage(Stack[-1])
0xc48: Pop(1)
0xc49: @@ ClearReplies()
0xc4a: Pop(0)
0xc4b: Push((int) 8899)
0xc4c: Push((int) -1)
0xc4d: Push((int) 9760)
0xc4e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4f: Pop(3)
0xc50: Push((int) 8900)
0xc51: Push((int) -1)
0xc52: Push((int) 9762)
0xc53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc54: Pop(3)
0xc55: Return(); Pop(0)

0xc56: Push((int) 9753)
0xc57: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc58: IF (Stack[-1] == 0) GOTO 0xc68; Pop(1)

0xc59: PushEmpty(string)
0xc5a: Stack[-1] = "Neutral"
0xc5b: Call 0xa19

0xc5c: Pop(1)
0xc5d: Push((int) 8892)
0xc5e: @@ SetMessage(Stack[-1])
0xc5f: Pop(1)
0xc60: @@ ClearReplies()
0xc61: Pop(0)
0xc62: Push((int) 8894)
0xc63: Push((int) 9756)
0xc64: Push((int) 9755)
0xc65: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc66: Pop(3)
0xc67: Return(); Pop(0)

0xc68: Push((int) 9756)
0xc69: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6a: IF (Stack[-1] == 0) GOTO 0xc7f; Pop(1)

0xc6b: PushEmpty(string)
0xc6c: Stack[-1] = "Neutral"
0xc6d: Call 0xa19

0xc6e: Pop(1)
0xc6f: Push((int) 8895)
0xc70: @@ SetMessage(Stack[-1])
0xc71: Pop(1)
0xc72: @@ ClearReplies()
0xc73: Pop(0)
0xc74: Push((int) 8896)
0xc75: Push((int) 9763)
0xc76: Push((int) 9757)
0xc77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc78: Pop(3)
0xc79: Push((int) 8897)
0xc7a: Push((int) 9759)
0xc7b: Push((int) 9758)
0xc7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7d: Pop(3)
0xc7e: Return(); Pop(0)

0xc7f: Push((int) 9763)
0xc80: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc81: IF (Stack[-1] == 0) GOTO 0xc96; Pop(1)

0xc82: PushEmpty(string)
0xc83: Stack[-1] = "Neutral"
0xc84: Call 0xa19

0xc85: Pop(1)
0xc86: Push((int) 8901)
0xc87: @@ SetMessage(Stack[-1])
0xc88: Pop(1)
0xc89: @@ ClearReplies()
0xc8a: Pop(0)
0xc8b: Push((int) 8902)
0xc8c: Push((int) 9766)
0xc8d: Push((int) 9764)
0xc8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8f: Pop(3)
0xc90: Push((int) 8903)
0xc91: Push((int) 9766)
0xc92: Push((int) 9765)
0xc93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc94: Pop(3)
0xc95: Return(); Pop(0)

0xc96: Push((int) 9766)
0xc97: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc98: IF (Stack[-1] == 0) GOTO 0xcad; Pop(1)

0xc99: PushEmpty(string)
0xc9a: Stack[-1] = "Neutral"
0xc9b: Call 0xa19

0xc9c: Pop(1)
0xc9d: Push((int) 8904)
0xc9e: @@ SetMessage(Stack[-1])
0xc9f: Pop(1)
0xca0: @@ ClearReplies()
0xca1: Pop(0)
0xca2: Push((int) 8905)
0xca3: Push((int) -1)
0xca4: Push((int) 9768)
0xca5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca6: Pop(3)
0xca7: Push((int) 8906)
0xca8: Push((int) -1)
0xca9: Push((int) 9769)
0xcaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcab: Pop(3)
0xcac: Return(); Pop(0)

0xcad: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xcae: PushEmpty(bool)
0xcaf: Call 0x1307

0xcb0: Pop(0)
0xcb1: IF (Stack[-1] == 0) GOTO 0xcb5; Pop(1)

0xcb2: @ lshStopAnimation()
0xcb3: Pop(0)
0xcb4: GOTO 0xcb7

0xcb5: @ StopAnimation()
0xcb6: Pop(0)
0xcb7: Return(); Pop(0)

0xcb8: GOTO 0xa2a

0xcb9: Return(); Pop(0)

0xcba: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xcbb: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xcbc: PushEmpty(bool, object)
0xcbd: Stack[-1] = Stack[-11]
0xcbe: Call 0x125c

0xcbf: Pop(1)
0xcc0: Pop(1); Push((bool) Stack[-1] == 0)
0xcc1: IF (Stack[-1] == 0) GOTO 0xcc4; Pop(1)

0xcc2: Stack[-10] = (int) -2
0xcc3: Return(); Pop(8)

0xcc4: @ CreateDialog(Stack[-4])
0xcc5: Pop(0)
0xcc6: PushEmpty(int)
0xcc7: Call 0x1303

0xcc8: Pop(0)
0xcc9: @@ SetNPCName(Stack[-1])
0xcca: Pop(1)
0xccb: PushEmpty(string)
0xccc: Call 0x1305

0xccd: Pop(0)
0xcce: @@ SetPhoto(Stack[-1])
0xccf: Pop(1)
0xcd0: PushEmpty(int)
0xcd1: Call 0x168c

0xcd2: Pop(0)
0xcd3: @@ SetPlayerName(Stack[-1])
0xcd4: Pop(1)
0xcd5: Stack[-2] = (int) -1
0xcd6: @ IsOverrideActive(Stack[-3])
0xcd7: Pop(0)
0xcd8: Push(Stack[-3])
0xcd9: IF (Stack[-1] == 0) GOTO 0xcdc; Pop(1)

0xcda: Stack[-10] = (int) -2
0xcdb: Return(); Pop(8)

0xcdc: @ DoDialog(Stack[-4])
0xcdd: Pop(0)
0xcde: PushEmpty(object, object)
0xcdf: Stack[-2] = Stack[-11]
0xce0: Stack[-1] = Stack[-6]
0xce1: Push(-2, 4); TaskCall(11)
0xce2: Call 0xcf9

0xce3: Pop(-2, 4); TaskReturn
0xce4: Pop(2)
0xce5: @@ IsDialogEnd(Stack[-1])
0xce6: Pop(0)
0xce7: Pop(0); Push((bool) Stack[-1] == 0)
0xce8: IF (Stack[-1] == 0) GOTO 0xcee; Pop(1)

0xce9: @ sync()
0xcea: Pop(0)
0xceb: @@ IsDialogEnd(Stack[-1])
0xcec: Pop(0)
0xced: GOTO 0xce7

0xcee: PushEmpty(object)
0xcef: Stack[-1] = Stack[-10]
0xcf0: Call 0x1294

0xcf1: Pop(1)
0xcf2: @ StopDialog(Stack[-4])
0xcf3: Pop(0)
0xcf4: @@ GetReturnValue(Stack[-2])
0xcf5: Pop(0)
0xcf6: Stack[-10] = Stack[-2]
0xcf7: Return(); Pop(8)

0xcf8: Stack[-4] = 0
0xcf9: PushEmpty()
0xcfa: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xcfb: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xcfc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xcfd: Push((int) 1)
0xcfe: IF (Stack[-1] == 0) GOTO 0xd15; Pop(1)

0xcff: PushEmpty(string)
0xd00: Stack[-1] = "Neutral"
0xd01: Call 0xd33

0xd02: Pop(1)
0xd03: Push((int) 9394)
0xd04: @@ SetMessage(Stack[-1])
0xd05: Pop(1)
0xd06: @@ ClearReplies()
0xd07: Pop(0)
0xd08: Push((int) 9395)
0xd09: Push((int) 10324)
0xd0a: Push((int) 10323)
0xd0b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0c: Pop(3)
0xd0d: Push((int) 9407)
0xd0e: Push((int) 10328)
0xd0f: Push((int) 10335)
0xd10: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd11: Pop(3)
0xd12: GOTO 0xd15

0xd13: Return(); Pop(0)

0xd14: GOTO 0xcfd

0xd15: PushEmpty(bool)
0xd16: Call 0x1307

0xd17: Pop(0)
0xd18: IF (Stack[-1] == 0) GOTO 0xd24; Pop(1)

0xd19: @ lshWaitForAnimEnd()
0xd1a: Pop(0)
0xd1b: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd1c: IF (Stack[-1] == 0) GOTO 0xd1e; Pop(1)

0xd1d: GOTO 0xd23

0xd1e: PushEmpty(string)
0xd1f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd20: Call 0x1298

0xd21: Pop(1)
0xd22: GOTO 0xd19

0xd23: GOTO 0xd32

0xd24: Push("all")
0xd25: Push("idle")
0xd26: @ PlayAnimation(Stack[-2], Stack[-1])
0xd27: Pop(2)
0xd28: @ WaitForAnimEnd()
0xd29: Pop(0)
0xd2a: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd2b: IF (Stack[-1] == 0) GOTO 0xd2d; Pop(1)

0xd2c: GOTO 0xd32

0xd2d: Push("all")
0xd2e: Push("idle")
0xd2f: @ PlayAnimation(Stack[-2], Stack[-1])
0xd30: Pop(2)
0xd31: GOTO 0xd28

0xd32: Return(); Pop(0)

0xd33: PushEmpty()
0xd34: PushEmpty(bool)
0xd35: Call 0x1307

0xd36: Pop(0)
0xd37: Pop(1); Push((bool) Stack[-1] == 0)
0xd38: IF (Stack[-1] == 0) GOTO 0xd3a; Pop(1)

0xd39: Return(); Pop(0)

0xd3a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd3b: IF (Stack[-1] == 0) GOTO 0xd3d; Pop(1)

0xd3c: Return(); Pop(0)

0xd3d: PushEmpty(string)
0xd3e: Stack[-1] = Stack[-2]
0xd3f: Call 0x1298

0xd40: Pop(1)
0xd41: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd42: Return(); Pop(0)

0xd43: PushEmpty()
0xd44: Push((int) 1)
0xd45: IF (Stack[-1] == 0) GOTO 0xdbb; Pop(1)

0xd46: PushEmpty()
0xd47: Call 0x12aa

0xd48: Pop(0)
0xd49: Push((int) 10322)
0xd4a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd4b: IF (Stack[-1] == 0) GOTO 0xd60; Pop(1)

0xd4c: PushEmpty(string)
0xd4d: Stack[-1] = "Neutral"
0xd4e: Call 0xd33

0xd4f: Pop(1)
0xd50: Push((int) 9394)
0xd51: @@ SetMessage(Stack[-1])
0xd52: Pop(1)
0xd53: @@ ClearReplies()
0xd54: Pop(0)
0xd55: Push((int) 9395)
0xd56: Push((int) 10324)
0xd57: Push((int) 10323)
0xd58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd59: Pop(3)
0xd5a: Push((int) 9407)
0xd5b: Push((int) 10328)
0xd5c: Push((int) 10335)
0xd5d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5e: Pop(3)
0xd5f: Return(); Pop(0)

0xd60: Push((int) 10324)
0xd61: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd62: IF (Stack[-1] == 0) GOTO 0xd7c; Pop(1)

0xd63: PushEmpty(string)
0xd64: Stack[-1] = "Neutral"
0xd65: Call 0xd33

0xd66: Pop(1)
0xd67: Push((int) 9396)
0xd68: @@ SetMessage(Stack[-1])
0xd69: Pop(1)
0xd6a: @@ ClearReplies()
0xd6b: Pop(0)
0xd6c: Push((int) 9397)
0xd6d: Push((int) 10326)
0xd6e: Push((int) 10325)
0xd6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd70: Pop(3)
0xd71: Push((int) 9405)
0xd72: Push((int) -1)
0xd73: Push((int) 10333)
0xd74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd75: Pop(3)
0xd76: Push((int) 9406)
0xd77: Push((int) -1)
0xd78: Push((int) 10334)
0xd79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7a: Pop(3)
0xd7b: Return(); Pop(0)

0xd7c: Push((int) 10326)
0xd7d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7e: IF (Stack[-1] == 0) GOTO 0xd98; Pop(1)

0xd7f: PushEmpty(string)
0xd80: Stack[-1] = "Neutral"
0xd81: Call 0xd33

0xd82: Pop(1)
0xd83: Push((int) 9398)
0xd84: @@ SetMessage(Stack[-1])
0xd85: Pop(1)
0xd86: @@ ClearReplies()
0xd87: Pop(0)
0xd88: Push((int) 9399)
0xd89: Push((int) 10328)
0xd8a: Push((int) 10327)
0xd8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8c: Pop(3)
0xd8d: Push((int) 9403)
0xd8e: Push((int) -1)
0xd8f: Push((int) 10331)
0xd90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd91: Pop(3)
0xd92: Push((int) 9404)
0xd93: Push((int) -1)
0xd94: Push((int) 10332)
0xd95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd96: Pop(3)
0xd97: Return(); Pop(0)

0xd98: Push((int) 10328)
0xd99: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd9a: IF (Stack[-1] == 0) GOTO 0xdaf; Pop(1)

0xd9b: PushEmpty(string)
0xd9c: Stack[-1] = "Neutral"
0xd9d: Call 0xd33

0xd9e: Pop(1)
0xd9f: Push((int) 9400)
0xda0: @@ SetMessage(Stack[-1])
0xda1: Pop(1)
0xda2: @@ ClearReplies()
0xda3: Pop(0)
0xda4: Push((int) 9401)
0xda5: Push((int) -1)
0xda6: Push((int) 10329)
0xda7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda8: Pop(3)
0xda9: Push((int) 9402)
0xdaa: Push((int) -1)
0xdab: Push((int) 10330)
0xdac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdad: Pop(3)
0xdae: Return(); Pop(0)

0xdaf: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xdb0: PushEmpty(bool)
0xdb1: Call 0x1307

0xdb2: Pop(0)
0xdb3: IF (Stack[-1] == 0) GOTO 0xdb7; Pop(1)

0xdb4: @ lshStopAnimation()
0xdb5: Pop(0)
0xdb6: GOTO 0xdb9

0xdb7: @ StopAnimation()
0xdb8: Pop(0)
0xdb9: Return(); Pop(0)

0xdba: GOTO 0xd44

0xdbb: Return(); Pop(0)

0xdbc: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xdbd: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xdbe: PushEmpty(bool, object)
0xdbf: Stack[-1] = Stack[-11]
0xdc0: Call 0x125c

0xdc1: Pop(1)
0xdc2: Pop(1); Push((bool) Stack[-1] == 0)
0xdc3: IF (Stack[-1] == 0) GOTO 0xdc6; Pop(1)

0xdc4: Stack[-10] = (int) -2
0xdc5: Return(); Pop(8)

0xdc6: @ CreateDialog(Stack[-4])
0xdc7: Pop(0)
0xdc8: PushEmpty(int)
0xdc9: Call 0x1303

0xdca: Pop(0)
0xdcb: @@ SetNPCName(Stack[-1])
0xdcc: Pop(1)
0xdcd: PushEmpty(string)
0xdce: Call 0x1305

0xdcf: Pop(0)
0xdd0: @@ SetPhoto(Stack[-1])
0xdd1: Pop(1)
0xdd2: PushEmpty(int)
0xdd3: Call 0x168c

0xdd4: Pop(0)
0xdd5: @@ SetPlayerName(Stack[-1])
0xdd6: Pop(1)
0xdd7: Stack[-2] = (int) -1
0xdd8: @ IsOverrideActive(Stack[-3])
0xdd9: Pop(0)
0xdda: Push(Stack[-3])
0xddb: IF (Stack[-1] == 0) GOTO 0xdde; Pop(1)

0xddc: Stack[-10] = (int) -2
0xddd: Return(); Pop(8)

0xdde: @ DoDialog(Stack[-4])
0xddf: Pop(0)
0xde0: PushEmpty(object, object)
0xde1: Stack[-2] = Stack[-11]
0xde2: Stack[-1] = Stack[-6]
0xde3: Push(-2, 4); TaskCall(13)
0xde4: Call 0xdfb

0xde5: Pop(-2, 4); TaskReturn
0xde6: Pop(2)
0xde7: @@ IsDialogEnd(Stack[-1])
0xde8: Pop(0)
0xde9: Pop(0); Push((bool) Stack[-1] == 0)
0xdea: IF (Stack[-1] == 0) GOTO 0xdf0; Pop(1)

0xdeb: @ sync()
0xdec: Pop(0)
0xded: @@ IsDialogEnd(Stack[-1])
0xdee: Pop(0)
0xdef: GOTO 0xde9

0xdf0: PushEmpty(object)
0xdf1: Stack[-1] = Stack[-10]
0xdf2: Call 0x1294

0xdf3: Pop(1)
0xdf4: @ StopDialog(Stack[-4])
0xdf5: Pop(0)
0xdf6: @@ GetReturnValue(Stack[-2])
0xdf7: Pop(0)
0xdf8: Stack[-10] = Stack[-2]
0xdf9: Return(); Pop(8)

0xdfa: Stack[-4] = 0
0xdfb: PushEmpty()
0xdfc: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xdfd: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xdfe: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xdff: Push((int) 1)
0xe00: IF (Stack[-1] == 0) GOTO 0xe38; Pop(1)

0xe01: PushEmpty(string)
0xe02: Stack[-1] = "Neutral"
0xe03: Call 0xe56

0xe04: Pop(1)
0xe05: Push((int) 11065)
0xe06: @@ SetMessage(Stack[-1])
0xe07: Pop(1)
0xe08: @@ ClearReplies()
0xe09: Pop(0)
0xe0a: PushEmpty(bool)
0xe0b: Stack[-1] = (bool) 0
0xe0c: PushEmpty(bool, object)
0xe0d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe0e: Call 0x155f

0xe0f: Pop(1)
0xe10: IF (Stack[-1] == 0) GOTO 0xe17; Pop(1)

0xe11: PushEmpty(bool, object)
0xe12: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe13: Call 0x1553

0xe14: Pop(1)
0xe15: IF (Stack[-1] == 0) GOTO 0xe17; Pop(1)

0xe16: Stack[-1] = (bool) 1
0xe17: IF (Stack[-1] == 0) GOTO 0xe1d; Pop(1)

0xe18: Push((int) 11066)
0xe19: Push((int) 12248)
0xe1a: Push((int) 12247)
0xe1b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1c: Pop(3)
0xe1d: PushEmpty(bool)
0xe1e: Stack[-1] = (bool) 0
0xe1f: PushEmpty(bool, object)
0xe20: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe21: Call 0x1577

0xe22: Pop(1)
0xe23: IF (Stack[-1] == 0) GOTO 0xe2a; Pop(1)

0xe24: PushEmpty(bool, object)
0xe25: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe26: Call 0x156b

0xe27: Pop(1)
0xe28: IF (Stack[-1] == 0) GOTO 0xe2a; Pop(1)

0xe29: Stack[-1] = (bool) 1
0xe2a: IF (Stack[-1] == 0) GOTO 0xe30; Pop(1)

0xe2b: Push((int) 11079)
0xe2c: Push((int) 12268)
0xe2d: Push((int) 12263)
0xe2e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2f: Pop(3)
0xe30: Push((int) 11505)
0xe31: Push((int) -1)
0xe32: Push((int) 12707)
0xe33: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe34: Pop(3)
0xe35: GOTO 0xe38

0xe36: Return(); Pop(0)

0xe37: GOTO 0xdff

0xe38: PushEmpty(bool)
0xe39: Call 0x1307

0xe3a: Pop(0)
0xe3b: IF (Stack[-1] == 0) GOTO 0xe47; Pop(1)

0xe3c: @ lshWaitForAnimEnd()
0xe3d: Pop(0)
0xe3e: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe3f: IF (Stack[-1] == 0) GOTO 0xe41; Pop(1)

0xe40: GOTO 0xe46

0xe41: PushEmpty(string)
0xe42: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe43: Call 0x1298

0xe44: Pop(1)
0xe45: GOTO 0xe3c

0xe46: GOTO 0xe55

0xe47: Push("all")
0xe48: Push("idle")
0xe49: @ PlayAnimation(Stack[-2], Stack[-1])
0xe4a: Pop(2)
0xe4b: @ WaitForAnimEnd()
0xe4c: Pop(0)
0xe4d: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe4e: IF (Stack[-1] == 0) GOTO 0xe50; Pop(1)

0xe4f: GOTO 0xe55

0xe50: Push("all")
0xe51: Push("idle")
0xe52: @ PlayAnimation(Stack[-2], Stack[-1])
0xe53: Pop(2)
0xe54: GOTO 0xe4b

0xe55: Return(); Pop(0)

0xe56: PushEmpty()
0xe57: PushEmpty(bool)
0xe58: Call 0x1307

0xe59: Pop(0)
0xe5a: Pop(1); Push((bool) Stack[-1] == 0)
0xe5b: IF (Stack[-1] == 0) GOTO 0xe5d; Pop(1)

0xe5c: Return(); Pop(0)

0xe5d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe5e: IF (Stack[-1] == 0) GOTO 0xe60; Pop(1)

0xe5f: Return(); Pop(0)

0xe60: PushEmpty(string)
0xe61: Stack[-1] = Stack[-2]
0xe62: Call 0x1298

0xe63: Pop(1)
0xe64: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe65: Return(); Pop(0)

0xe66: PushEmpty()
0xe67: Push((int) 1)
0xe68: IF (Stack[-1] == 0) GOTO 0xfb8; Pop(1)

0xe69: PushEmpty()
0xe6a: Call 0x12aa

0xe6b: Pop(0)
0xe6c: Push((int) 12266)
0xe6d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe6e: IF (Stack[-1] == 0) GOTO 0xe7e; Pop(1)

0xe6f: PushEmpty(object, object)
0xe70: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe71: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe72: Call 0x13d0

0xe73: Pop(2)
0xe74: PushEmpty(object, object)
0xe75: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe76: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe77: Call 0x13bc

0xe78: Pop(2)
0xe79: PushEmpty(object, object)
0xe7a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe7b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe7c: Call 0x13ac

0xe7d: Pop(2)
0xe7e: Push((int) 12267)
0xe7f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe80: IF (Stack[-1] == 0) GOTO 0xe90; Pop(1)

0xe81: PushEmpty(object, object)
0xe82: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe83: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe84: Call 0x13d0

0xe85: Pop(2)
0xe86: PushEmpty(object, object)
0xe87: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe88: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe89: Call 0x13bc

0xe8a: Pop(2)
0xe8b: PushEmpty(object, object)
0xe8c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe8d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe8e: Call 0x13ac

0xe8f: Pop(2)
0xe90: Push((int) 12281)
0xe91: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe92: IF (Stack[-1] == 0) GOTO 0xe9d; Pop(1)

0xe93: PushEmpty(object, object)
0xe94: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe95: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe96: Call 0x13dc

0xe97: Pop(2)
0xe98: PushEmpty(object, object)
0xe99: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe9a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe9b: Call 0x13d6

0xe9c: Pop(2)
0xe9d: Push((int) 12246)
0xe9e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9f: IF (Stack[-1] == 0) GOTO 0xed5; Pop(1)

0xea0: PushEmpty(string)
0xea1: Stack[-1] = "Neutral"
0xea2: Call 0xe56

0xea3: Pop(1)
0xea4: Push((int) 11065)
0xea5: @@ SetMessage(Stack[-1])
0xea6: Pop(1)
0xea7: @@ ClearReplies()
0xea8: Pop(0)
0xea9: PushEmpty(bool)
0xeaa: Stack[-1] = (bool) 0
0xeab: PushEmpty(bool, object)
0xeac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xead: Call 0x155f

0xeae: Pop(1)
0xeaf: IF (Stack[-1] == 0) GOTO 0xeb6; Pop(1)

0xeb0: PushEmpty(bool, object)
0xeb1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xeb2: Call 0x1553

0xeb3: Pop(1)
0xeb4: IF (Stack[-1] == 0) GOTO 0xeb6; Pop(1)

0xeb5: Stack[-1] = (bool) 1
0xeb6: IF (Stack[-1] == 0) GOTO 0xebc; Pop(1)

0xeb7: Push((int) 11066)
0xeb8: Push((int) 12248)
0xeb9: Push((int) 12247)
0xeba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xebb: Pop(3)
0xebc: PushEmpty(bool)
0xebd: Stack[-1] = (bool) 0
0xebe: PushEmpty(bool, object)
0xebf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xec0: Call 0x1577

0xec1: Pop(1)
0xec2: IF (Stack[-1] == 0) GOTO 0xec9; Pop(1)

0xec3: PushEmpty(bool, object)
0xec4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xec5: Call 0x156b

0xec6: Pop(1)
0xec7: IF (Stack[-1] == 0) GOTO 0xec9; Pop(1)

0xec8: Stack[-1] = (bool) 1
0xec9: IF (Stack[-1] == 0) GOTO 0xecf; Pop(1)

0xeca: Push((int) 11079)
0xecb: Push((int) 12268)
0xecc: Push((int) 12263)
0xecd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xece: Pop(3)
0xecf: Push((int) 11505)
0xed0: Push((int) -1)
0xed1: Push((int) 12707)
0xed2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed3: Pop(3)
0xed4: Return(); Pop(0)

0xed5: Push((int) 12268)
0xed6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed7: IF (Stack[-1] == 0) GOTO 0xeec; Pop(1)

0xed8: PushEmpty(string)
0xed9: Stack[-1] = "Neutral"
0xeda: Call 0xe56

0xedb: Pop(1)
0xedc: Push((int) 11083)
0xedd: @@ SetMessage(Stack[-1])
0xede: Pop(1)
0xedf: @@ ClearReplies()
0xee0: Pop(0)
0xee1: Push((int) 11084)
0xee2: Push((int) 12271)
0xee3: Push((int) 12269)
0xee4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee5: Pop(3)
0xee6: Push((int) 11085)
0xee7: Push((int) 12272)
0xee8: Push((int) 12270)
0xee9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeea: Pop(3)
0xeeb: Return(); Pop(0)

0xeec: Push((int) 12272)
0xeed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeee: IF (Stack[-1] == 0) GOTO 0xefe; Pop(1)

0xeef: PushEmpty(string)
0xef0: Stack[-1] = "Neutral"
0xef1: Call 0xe56

0xef2: Pop(1)
0xef3: Push((int) 11087)
0xef4: @@ SetMessage(Stack[-1])
0xef5: Pop(1)
0xef6: @@ ClearReplies()
0xef7: Pop(0)
0xef8: Push((int) 11088)
0xef9: Push((int) 12275)
0xefa: Push((int) 12273)
0xefb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xefc: Pop(3)
0xefd: Return(); Pop(0)

0xefe: Push((int) 12271)
0xeff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf00: IF (Stack[-1] == 0) GOTO 0xf10; Pop(1)

0xf01: PushEmpty(string)
0xf02: Stack[-1] = "Neutral"
0xf03: Call 0xe56

0xf04: Pop(1)
0xf05: Push((int) 11086)
0xf06: @@ SetMessage(Stack[-1])
0xf07: Pop(1)
0xf08: @@ ClearReplies()
0xf09: Pop(0)
0xf0a: Push((int) 11089)
0xf0b: Push((int) 12275)
0xf0c: Push((int) 12274)
0xf0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0e: Pop(3)
0xf0f: Return(); Pop(0)

0xf10: Push((int) 12275)
0xf11: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf12: IF (Stack[-1] == 0) GOTO 0xf27; Pop(1)

0xf13: PushEmpty(string)
0xf14: Stack[-1] = "Neutral"
0xf15: Call 0xe56

0xf16: Pop(1)
0xf17: Push((int) 11090)
0xf18: @@ SetMessage(Stack[-1])
0xf19: Pop(1)
0xf1a: @@ ClearReplies()
0xf1b: Pop(0)
0xf1c: Push((int) 11091)
0xf1d: Push((int) 12279)
0xf1e: Push((int) 12276)
0xf1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf20: Pop(3)
0xf21: Push((int) 11092)
0xf22: Push((int) 12279)
0xf23: Push((int) 12277)
0xf24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf25: Pop(3)
0xf26: Return(); Pop(0)

0xf27: Push((int) 12279)
0xf28: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf29: IF (Stack[-1] == 0) GOTO 0xf39; Pop(1)

0xf2a: PushEmpty(string)
0xf2b: Stack[-1] = "Neutral"
0xf2c: Call 0xe56

0xf2d: Pop(1)
0xf2e: Push((int) 11093)
0xf2f: @@ SetMessage(Stack[-1])
0xf30: Pop(1)
0xf31: @@ ClearReplies()
0xf32: Pop(0)
0xf33: Push((int) 11094)
0xf34: Push((int) -1)
0xf35: Push((int) 12281)
0xf36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf37: Pop(3)
0xf38: Return(); Pop(0)

0xf39: Push((int) 12248)
0xf3a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf3b: IF (Stack[-1] == 0) GOTO 0xf50; Pop(1)

0xf3c: PushEmpty(string)
0xf3d: Stack[-1] = "Neutral"
0xf3e: Call 0xe56

0xf3f: Pop(1)
0xf40: Push((int) 11067)
0xf41: @@ SetMessage(Stack[-1])
0xf42: Pop(1)
0xf43: @@ ClearReplies()
0xf44: Pop(0)
0xf45: Push((int) 11068)
0xf46: Push((int) 12250)
0xf47: Push((int) 12249)
0xf48: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf49: Pop(3)
0xf4a: Push((int) 11073)
0xf4b: Push((int) 12255)
0xf4c: Push((int) 12254)
0xf4d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4e: Pop(3)
0xf4f: Return(); Pop(0)

0xf50: Push((int) 12250)
0xf51: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf52: IF (Stack[-1] == 0) GOTO 0xf6c; Pop(1)

0xf53: PushEmpty(string)
0xf54: Stack[-1] = "Neutral"
0xf55: Call 0xe56

0xf56: Pop(1)
0xf57: Push((int) 11069)
0xf58: @@ SetMessage(Stack[-1])
0xf59: Pop(1)
0xf5a: @@ ClearReplies()
0xf5b: Pop(0)
0xf5c: Push((int) 11070)
0xf5d: Push((int) 12257)
0xf5e: Push((int) 12251)
0xf5f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf60: Pop(3)
0xf61: Push((int) 11071)
0xf62: Push((int) 12257)
0xf63: Push((int) 12252)
0xf64: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf65: Pop(3)
0xf66: Push((int) 11072)
0xf67: Push((int) 12255)
0xf68: Push((int) 12253)
0xf69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6a: Pop(3)
0xf6b: Return(); Pop(0)

0xf6c: Push((int) 12255)
0xf6d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6e: IF (Stack[-1] == 0) GOTO 0xf7e; Pop(1)

0xf6f: PushEmpty(string)
0xf70: Stack[-1] = "Neutral"
0xf71: Call 0xe56

0xf72: Pop(1)
0xf73: Push((int) 11074)
0xf74: @@ SetMessage(Stack[-1])
0xf75: Pop(1)
0xf76: @@ ClearReplies()
0xf77: Pop(0)
0xf78: Push((int) 11075)
0xf79: Push((int) 12257)
0xf7a: Push((int) 12256)
0xf7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7c: Pop(3)
0xf7d: Return(); Pop(0)

0xf7e: Push((int) 12257)
0xf7f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf80: IF (Stack[-1] == 0) GOTO 0xf95; Pop(1)

0xf81: PushEmpty(string)
0xf82: Stack[-1] = "Neutral"
0xf83: Call 0xe56

0xf84: Pop(1)
0xf85: Push((int) 11076)
0xf86: @@ SetMessage(Stack[-1])
0xf87: Pop(1)
0xf88: @@ ClearReplies()
0xf89: Pop(0)
0xf8a: Push((int) 11077)
0xf8b: Push((int) 12264)
0xf8c: Push((int) 12261)
0xf8d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8e: Pop(3)
0xf8f: Push((int) 11078)
0xf90: Push((int) 12264)
0xf91: Push((int) 12262)
0xf92: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf93: Pop(3)
0xf94: Return(); Pop(0)

0xf95: Push((int) 12264)
0xf96: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf97: IF (Stack[-1] == 0) GOTO 0xfac; Pop(1)

0xf98: PushEmpty(string)
0xf99: Stack[-1] = "Neutral"
0xf9a: Call 0xe56

0xf9b: Pop(1)
0xf9c: Push((int) 11080)
0xf9d: @@ SetMessage(Stack[-1])
0xf9e: Pop(1)
0xf9f: @@ ClearReplies()
0xfa0: Pop(0)
0xfa1: Push((int) 11081)
0xfa2: Push((int) -1)
0xfa3: Push((int) 12266)
0xfa4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa5: Pop(3)
0xfa6: Push((int) 11082)
0xfa7: Push((int) -1)
0xfa8: Push((int) 12267)
0xfa9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfaa: Pop(3)
0xfab: Return(); Pop(0)

0xfac: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xfad: PushEmpty(bool)
0xfae: Call 0x1307

0xfaf: Pop(0)
0xfb0: IF (Stack[-1] == 0) GOTO 0xfb4; Pop(1)

0xfb1: @ lshStopAnimation()
0xfb2: Pop(0)
0xfb3: GOTO 0xfb6

0xfb4: @ StopAnimation()
0xfb5: Pop(0)
0xfb6: Return(); Pop(0)

0xfb7: GOTO 0xe67

0xfb8: Return(); Pop(0)

0xfb9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xfba: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xfbb: PushEmpty(bool, object)
0xfbc: Stack[-1] = Stack[-11]
0xfbd: Call 0x125c

0xfbe: Pop(1)
0xfbf: Pop(1); Push((bool) Stack[-1] == 0)
0xfc0: IF (Stack[-1] == 0) GOTO 0xfc3; Pop(1)

0xfc1: Stack[-10] = (int) -2
0xfc2: Return(); Pop(8)

0xfc3: @ CreateDialog(Stack[-4])
0xfc4: Pop(0)
0xfc5: PushEmpty(int)
0xfc6: Call 0x1303

0xfc7: Pop(0)
0xfc8: @@ SetNPCName(Stack[-1])
0xfc9: Pop(1)
0xfca: PushEmpty(string)
0xfcb: Call 0x1305

0xfcc: Pop(0)
0xfcd: @@ SetPhoto(Stack[-1])
0xfce: Pop(1)
0xfcf: PushEmpty(int)
0xfd0: Call 0x168c

0xfd1: Pop(0)
0xfd2: @@ SetPlayerName(Stack[-1])
0xfd3: Pop(1)
0xfd4: Stack[-2] = (int) -1
0xfd5: @ IsOverrideActive(Stack[-3])
0xfd6: Pop(0)
0xfd7: Push(Stack[-3])
0xfd8: IF (Stack[-1] == 0) GOTO 0xfdb; Pop(1)

0xfd9: Stack[-10] = (int) -2
0xfda: Return(); Pop(8)

0xfdb: @ DoDialog(Stack[-4])
0xfdc: Pop(0)
0xfdd: PushEmpty(object, object)
0xfde: Stack[-2] = Stack[-11]
0xfdf: Stack[-1] = Stack[-6]
0xfe0: Push(-2, 4); TaskCall(15)
0xfe1: Call 0xff8

0xfe2: Pop(-2, 4); TaskReturn
0xfe3: Pop(2)
0xfe4: @@ IsDialogEnd(Stack[-1])
0xfe5: Pop(0)
0xfe6: Pop(0); Push((bool) Stack[-1] == 0)
0xfe7: IF (Stack[-1] == 0) GOTO 0xfed; Pop(1)

0xfe8: @ sync()
0xfe9: Pop(0)
0xfea: @@ IsDialogEnd(Stack[-1])
0xfeb: Pop(0)
0xfec: GOTO 0xfe6

0xfed: PushEmpty(object)
0xfee: Stack[-1] = Stack[-10]
0xfef: Call 0x1294

0xff0: Pop(1)
0xff1: @ StopDialog(Stack[-4])
0xff2: Pop(0)
0xff3: @@ GetReturnValue(Stack[-2])
0xff4: Pop(0)
0xff5: Stack[-10] = Stack[-2]
0xff6: Return(); Pop(8)

0xff7: Stack[-4] = 0
0xff8: PushEmpty()
0xff9: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xffa: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xffb: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xffc: Push((int) 1)
0xffd: IF (Stack[-1] == 0) GOTO 0x102d; Pop(1)

0xffe: PushEmpty(string)
0xfff: Stack[-1] = "Neutral"
0x1000: Call 0x104b

0x1001: Pop(1)
0x1002: Push((int) 12374)
0x1003: @@ SetMessage(Stack[-1])
0x1004: Pop(1)
0x1005: @@ ClearReplies()
0x1006: Pop(0)
0x1007: PushEmpty(bool)
0x1008: Stack[-1] = (bool) 0
0x1009: PushEmpty(bool, object)
0x100a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x100b: Call 0x15a7

0x100c: Pop(1)
0x100d: Pop(1); Push((bool) Stack[-1] == 0)
0x100e: IF (Stack[-1] == 0) GOTO 0x1015; Pop(1)

0x100f: PushEmpty(bool, object)
0x1010: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1011: Call 0x15bf

0x1012: Pop(1)
0x1013: IF (Stack[-1] == 0) GOTO 0x1015; Pop(1)

0x1014: Stack[-1] = (bool) 1
0x1015: IF (Stack[-1] == 0) GOTO 0x101b; Pop(1)

0x1016: Push((int) 13641)
0x1017: Push((int) 14898)
0x1018: Push((int) 14897)
0x1019: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101a: Pop(3)
0x101b: PushEmpty(bool, object)
0x101c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x101d: Call 0x15b3

0x101e: Pop(1)
0x101f: IF (Stack[-1] == 0) GOTO 0x1025; Pop(1)

0x1020: Push((int) 12375)
0x1021: Push((int) 13536)
0x1022: Push((int) 13535)
0x1023: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1024: Pop(3)
0x1025: Push((int) 13658)
0x1026: Push((int) -1)
0x1027: Push((int) 14916)
0x1028: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1029: Pop(3)
0x102a: GOTO 0x102d

0x102b: Return(); Pop(0)

0x102c: GOTO 0xffc

0x102d: PushEmpty(bool)
0x102e: Call 0x1307

0x102f: Pop(0)
0x1030: IF (Stack[-1] == 0) GOTO 0x103c; Pop(1)

0x1031: @ lshWaitForAnimEnd()
0x1032: Pop(0)
0x1033: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1034: IF (Stack[-1] == 0) GOTO 0x1036; Pop(1)

0x1035: GOTO 0x103b

0x1036: PushEmpty(string)
0x1037: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1038: Call 0x1298

0x1039: Pop(1)
0x103a: GOTO 0x1031

0x103b: GOTO 0x104a

0x103c: Push("all")
0x103d: Push("idle")
0x103e: @ PlayAnimation(Stack[-2], Stack[-1])
0x103f: Pop(2)
0x1040: @ WaitForAnimEnd()
0x1041: Pop(0)
0x1042: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1043: IF (Stack[-1] == 0) GOTO 0x1045; Pop(1)

0x1044: GOTO 0x104a

0x1045: Push("all")
0x1046: Push("idle")
0x1047: @ PlayAnimation(Stack[-2], Stack[-1])
0x1048: Pop(2)
0x1049: GOTO 0x1040

0x104a: Return(); Pop(0)

0x104b: PushEmpty()
0x104c: PushEmpty(bool)
0x104d: Call 0x1307

0x104e: Pop(0)
0x104f: Pop(1); Push((bool) Stack[-1] == 0)
0x1050: IF (Stack[-1] == 0) GOTO 0x1052; Pop(1)

0x1051: Return(); Pop(0)

0x1052: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1053: IF (Stack[-1] == 0) GOTO 0x1055; Pop(1)

0x1054: Return(); Pop(0)

0x1055: PushEmpty(string)
0x1056: Stack[-1] = Stack[-2]
0x1057: Call 0x1298

0x1058: Pop(1)
0x1059: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x105a: Return(); Pop(0)

0x105b: PushEmpty()
0x105c: Push((int) 1)
0x105d: IF (Stack[-1] == 0) GOTO 0x124a; Pop(1)

0x105e: PushEmpty()
0x105f: Call 0x12aa

0x1060: Pop(0)
0x1061: Push((int) 14897)
0x1062: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1063: IF (Stack[-1] == 0) GOTO 0x1069; Pop(1)

0x1064: PushEmpty(object, object)
0x1065: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1066: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1067: Call 0x13fd

0x1068: Pop(2)
0x1069: Push((int) 14911)
0x106a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x106b: IF (Stack[-1] == 0) GOTO 0x1071; Pop(1)

0x106c: PushEmpty(object, object)
0x106d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x106e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x106f: Call 0x13ee

0x1070: Pop(2)
0x1071: Push((int) 13535)
0x1072: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1073: IF (Stack[-1] == 0) GOTO 0x1079; Pop(1)

0x1074: PushEmpty(object, object)
0x1075: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1076: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1077: Call 0x13f7

0x1078: Pop(2)
0x1079: Push((int) 13534)
0x107a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x107b: IF (Stack[-1] == 0) GOTO 0x10a9; Pop(1)

0x107c: PushEmpty(string)
0x107d: Stack[-1] = "Neutral"
0x107e: Call 0x104b

0x107f: Pop(1)
0x1080: Push((int) 12374)
0x1081: @@ SetMessage(Stack[-1])
0x1082: Pop(1)
0x1083: @@ ClearReplies()
0x1084: Pop(0)
0x1085: PushEmpty(bool)
0x1086: Stack[-1] = (bool) 0
0x1087: PushEmpty(bool, object)
0x1088: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1089: Call 0x15a7

0x108a: Pop(1)
0x108b: Pop(1); Push((bool) Stack[-1] == 0)
0x108c: IF (Stack[-1] == 0) GOTO 0x1093; Pop(1)

0x108d: PushEmpty(bool, object)
0x108e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x108f: Call 0x15bf

0x1090: Pop(1)
0x1091: IF (Stack[-1] == 0) GOTO 0x1093; Pop(1)

0x1092: Stack[-1] = (bool) 1
0x1093: IF (Stack[-1] == 0) GOTO 0x1099; Pop(1)

0x1094: Push((int) 13641)
0x1095: Push((int) 14898)
0x1096: Push((int) 14897)
0x1097: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1098: Pop(3)
0x1099: PushEmpty(bool, object)
0x109a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x109b: Call 0x15b3

0x109c: Pop(1)
0x109d: IF (Stack[-1] == 0) GOTO 0x10a3; Pop(1)

0x109e: Push((int) 12375)
0x109f: Push((int) 13536)
0x10a0: Push((int) 13535)
0x10a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a2: Pop(3)
0x10a3: Push((int) 13658)
0x10a4: Push((int) -1)
0x10a5: Push((int) 14916)
0x10a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a7: Pop(3)
0x10a8: Return(); Pop(0)

0x10a9: Push((int) 13536)
0x10aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10ab: IF (Stack[-1] == 0) GOTO 0x10c0; Pop(1)

0x10ac: PushEmpty(string)
0x10ad: Stack[-1] = "Neutral"
0x10ae: Call 0x104b

0x10af: Pop(1)
0x10b0: Push((int) 12376)
0x10b1: @@ SetMessage(Stack[-1])
0x10b2: Pop(1)
0x10b3: @@ ClearReplies()
0x10b4: Pop(0)
0x10b5: Push((int) 12378)
0x10b6: Push((int) 13544)
0x10b7: Push((int) 13538)
0x10b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b9: Pop(3)
0x10ba: Push((int) 12377)
0x10bb: Push((int) 13539)
0x10bc: Push((int) 13537)
0x10bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10be: Pop(3)
0x10bf: Return(); Pop(0)

0x10c0: Push((int) 13539)
0x10c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c2: IF (Stack[-1] == 0) GOTO 0x10d2; Pop(1)

0x10c3: PushEmpty(string)
0x10c4: Stack[-1] = "Neutral"
0x10c5: Call 0x104b

0x10c6: Pop(1)
0x10c7: Push((int) 12379)
0x10c8: @@ SetMessage(Stack[-1])
0x10c9: Pop(1)
0x10ca: @@ ClearReplies()
0x10cb: Pop(0)
0x10cc: Push((int) 12380)
0x10cd: Push((int) 13541)
0x10ce: Push((int) 13540)
0x10cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d0: Pop(3)
0x10d1: Return(); Pop(0)

0x10d2: Push((int) 13541)
0x10d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10d4: IF (Stack[-1] == 0) GOTO 0x10e9; Pop(1)

0x10d5: PushEmpty(string)
0x10d6: Stack[-1] = "Neutral"
0x10d7: Call 0x104b

0x10d8: Pop(1)
0x10d9: Push((int) 12381)
0x10da: @@ SetMessage(Stack[-1])
0x10db: Pop(1)
0x10dc: @@ ClearReplies()
0x10dd: Pop(0)
0x10de: Push((int) 12382)
0x10df: Push((int) -1)
0x10e0: Push((int) 13542)
0x10e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e2: Pop(3)
0x10e3: Push((int) 12383)
0x10e4: Push((int) -1)
0x10e5: Push((int) 13543)
0x10e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e7: Pop(3)
0x10e8: Return(); Pop(0)

0x10e9: Push((int) 13544)
0x10ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10eb: IF (Stack[-1] == 0) GOTO 0x1100; Pop(1)

0x10ec: PushEmpty(string)
0x10ed: Stack[-1] = "Neutral"
0x10ee: Call 0x104b

0x10ef: Pop(1)
0x10f0: Push((int) 12384)
0x10f1: @@ SetMessage(Stack[-1])
0x10f2: Pop(1)
0x10f3: @@ ClearReplies()
0x10f4: Pop(0)
0x10f5: Push((int) 12385)
0x10f6: Push((int) 13552)
0x10f7: Push((int) 13545)
0x10f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f9: Pop(3)
0x10fa: Push((int) 12386)
0x10fb: Push((int) 13547)
0x10fc: Push((int) 13546)
0x10fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10fe: Pop(3)
0x10ff: Return(); Pop(0)

0x1100: Push((int) 13547)
0x1101: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1102: IF (Stack[-1] == 0) GOTO 0x1117; Pop(1)

0x1103: PushEmpty(string)
0x1104: Stack[-1] = "Neutral"
0x1105: Call 0x104b

0x1106: Pop(1)
0x1107: Push((int) 12387)
0x1108: @@ SetMessage(Stack[-1])
0x1109: Pop(1)
0x110a: @@ ClearReplies()
0x110b: Pop(0)
0x110c: Push((int) 12388)
0x110d: Push((int) 13550)
0x110e: Push((int) 13548)
0x110f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1110: Pop(3)
0x1111: Push((int) 12389)
0x1112: Push((int) 13550)
0x1113: Push((int) 13549)
0x1114: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1115: Pop(3)
0x1116: Return(); Pop(0)

0x1117: Push((int) 13550)
0x1118: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1119: IF (Stack[-1] == 0) GOTO 0x1129; Pop(1)

0x111a: PushEmpty(string)
0x111b: Stack[-1] = "Neutral"
0x111c: Call 0x104b

0x111d: Pop(1)
0x111e: Push((int) 12390)
0x111f: @@ SetMessage(Stack[-1])
0x1120: Pop(1)
0x1121: @@ ClearReplies()
0x1122: Pop(0)
0x1123: Push((int) 12391)
0x1124: Push((int) -1)
0x1125: Push((int) 13551)
0x1126: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1127: Pop(3)
0x1128: Return(); Pop(0)

0x1129: Push((int) 13552)
0x112a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x112b: IF (Stack[-1] == 0) GOTO 0x1145; Pop(1)

0x112c: PushEmpty(string)
0x112d: Stack[-1] = "Neutral"
0x112e: Call 0x104b

0x112f: Pop(1)
0x1130: Push((int) 12392)
0x1131: @@ SetMessage(Stack[-1])
0x1132: Pop(1)
0x1133: @@ ClearReplies()
0x1134: Pop(0)
0x1135: Push((int) 12393)
0x1136: Push((int) 13559)
0x1137: Push((int) 13554)
0x1138: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1139: Pop(3)
0x113a: Push((int) 12394)
0x113b: Push((int) 13557)
0x113c: Push((int) 13555)
0x113d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113e: Pop(3)
0x113f: Push((int) 12395)
0x1140: Push((int) 13558)
0x1141: Push((int) 13556)
0x1142: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1143: Pop(3)
0x1144: Return(); Pop(0)

0x1145: Push((int) 13558)
0x1146: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1147: IF (Stack[-1] == 0) GOTO 0x1157; Pop(1)

0x1148: PushEmpty(string)
0x1149: Stack[-1] = "Neutral"
0x114a: Call 0x104b

0x114b: Pop(1)
0x114c: Push((int) 12397)
0x114d: @@ SetMessage(Stack[-1])
0x114e: Pop(1)
0x114f: @@ ClearReplies()
0x1150: Pop(0)
0x1151: Push((int) 12403)
0x1152: Push((int) 13565)
0x1153: Push((int) 13564)
0x1154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1155: Pop(3)
0x1156: Return(); Pop(0)

0x1157: Push((int) 13557)
0x1158: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1159: IF (Stack[-1] == 0) GOTO 0x1169; Pop(1)

0x115a: PushEmpty(string)
0x115b: Stack[-1] = "Neutral"
0x115c: Call 0x104b

0x115d: Pop(1)
0x115e: Push((int) 12396)
0x115f: @@ SetMessage(Stack[-1])
0x1160: Pop(1)
0x1161: @@ ClearReplies()
0x1162: Pop(0)
0x1163: Push((int) 12402)
0x1164: Push((int) 13565)
0x1165: Push((int) 13563)
0x1166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1167: Pop(3)
0x1168: Return(); Pop(0)

0x1169: Push((int) 13559)
0x116a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116b: IF (Stack[-1] == 0) GOTO 0x117b; Pop(1)

0x116c: PushEmpty(string)
0x116d: Stack[-1] = "Neutral"
0x116e: Call 0x104b

0x116f: Pop(1)
0x1170: Push((int) 12398)
0x1171: @@ SetMessage(Stack[-1])
0x1172: Pop(1)
0x1173: @@ ClearReplies()
0x1174: Pop(0)
0x1175: Push((int) 12399)
0x1176: Push((int) 13561)
0x1177: Push((int) 13560)
0x1178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1179: Pop(3)
0x117a: Return(); Pop(0)

0x117b: Push((int) 13561)
0x117c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x117d: IF (Stack[-1] == 0) GOTO 0x118d; Pop(1)

0x117e: PushEmpty(string)
0x117f: Stack[-1] = "Neutral"
0x1180: Call 0x104b

0x1181: Pop(1)
0x1182: Push((int) 12400)
0x1183: @@ SetMessage(Stack[-1])
0x1184: Pop(1)
0x1185: @@ ClearReplies()
0x1186: Pop(0)
0x1187: Push((int) 12401)
0x1188: Push((int) 13565)
0x1189: Push((int) 13562)
0x118a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118b: Pop(3)
0x118c: Return(); Pop(0)

0x118d: Push((int) 13565)
0x118e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x118f: IF (Stack[-1] == 0) GOTO 0x11a4; Pop(1)

0x1190: PushEmpty(string)
0x1191: Stack[-1] = "Neutral"
0x1192: Call 0x104b

0x1193: Pop(1)
0x1194: Push((int) 12404)
0x1195: @@ SetMessage(Stack[-1])
0x1196: Pop(1)
0x1197: @@ ClearReplies()
0x1198: Pop(0)
0x1199: Push((int) 12405)
0x119a: Push((int) 13570)
0x119b: Push((int) 13568)
0x119c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119d: Pop(3)
0x119e: Push((int) 12406)
0x119f: Push((int) 13570)
0x11a0: Push((int) 13569)
0x11a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a2: Pop(3)
0x11a3: Return(); Pop(0)

0x11a4: Push((int) 13570)
0x11a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a6: IF (Stack[-1] == 0) GOTO 0x11b6; Pop(1)

0x11a7: PushEmpty(string)
0x11a8: Stack[-1] = "Neutral"
0x11a9: Call 0x104b

0x11aa: Pop(1)
0x11ab: Push((int) 12407)
0x11ac: @@ SetMessage(Stack[-1])
0x11ad: Pop(1)
0x11ae: @@ ClearReplies()
0x11af: Pop(0)
0x11b0: Push((int) 12408)
0x11b1: Push((int) -1)
0x11b2: Push((int) 13572)
0x11b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b4: Pop(3)
0x11b5: Return(); Pop(0)

0x11b6: Push((int) 14898)
0x11b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b8: IF (Stack[-1] == 0) GOTO 0x11c8; Pop(1)

0x11b9: PushEmpty(string)
0x11ba: Stack[-1] = "Neutral"
0x11bb: Call 0x104b

0x11bc: Pop(1)
0x11bd: Push((int) 13642)
0x11be: @@ SetMessage(Stack[-1])
0x11bf: Pop(1)
0x11c0: @@ ClearReplies()
0x11c1: Pop(0)
0x11c2: Push((int) 13643)
0x11c3: Push((int) 14900)
0x11c4: Push((int) 14899)
0x11c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c6: Pop(3)
0x11c7: Return(); Pop(0)

0x11c8: Push((int) 14900)
0x11c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11ca: IF (Stack[-1] == 0) GOTO 0x11da; Pop(1)

0x11cb: PushEmpty(string)
0x11cc: Stack[-1] = "Neutral"
0x11cd: Call 0x104b

0x11ce: Pop(1)
0x11cf: Push((int) 13644)
0x11d0: @@ SetMessage(Stack[-1])
0x11d1: Pop(1)
0x11d2: @@ ClearReplies()
0x11d3: Pop(0)
0x11d4: Push((int) 13645)
0x11d5: Push((int) 14902)
0x11d6: Push((int) 14901)
0x11d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d8: Pop(3)
0x11d9: Return(); Pop(0)

0x11da: Push((int) 14902)
0x11db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11dc: IF (Stack[-1] == 0) GOTO 0x11f1; Pop(1)

0x11dd: PushEmpty(string)
0x11de: Stack[-1] = "Neutral"
0x11df: Call 0x104b

0x11e0: Pop(1)
0x11e1: Push((int) 13646)
0x11e2: @@ SetMessage(Stack[-1])
0x11e3: Pop(1)
0x11e4: @@ ClearReplies()
0x11e5: Pop(0)
0x11e6: Push((int) 13647)
0x11e7: Push((int) 14904)
0x11e8: Push((int) 14903)
0x11e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11ea: Pop(3)
0x11eb: Push((int) 13649)
0x11ec: Push((int) 14906)
0x11ed: Push((int) 14905)
0x11ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11ef: Pop(3)
0x11f0: Return(); Pop(0)

0x11f1: Push((int) 14906)
0x11f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f3: IF (Stack[-1] == 0) GOTO 0x1203; Pop(1)

0x11f4: PushEmpty(string)
0x11f5: Stack[-1] = "Neutral"
0x11f6: Call 0x104b

0x11f7: Pop(1)
0x11f8: Push((int) 13650)
0x11f9: @@ SetMessage(Stack[-1])
0x11fa: Pop(1)
0x11fb: @@ ClearReplies()
0x11fc: Pop(0)
0x11fd: Push((int) 13652)
0x11fe: Push((int) 14907)
0x11ff: Push((int) 14908)
0x1200: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1201: Pop(3)
0x1202: Return(); Pop(0)

0x1203: Push((int) 14904)
0x1204: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1205: IF (Stack[-1] == 0) GOTO 0x121a; Pop(1)

0x1206: PushEmpty(string)
0x1207: Stack[-1] = "Neutral"
0x1208: Call 0x104b

0x1209: Pop(1)
0x120a: Push((int) 13648)
0x120b: @@ SetMessage(Stack[-1])
0x120c: Pop(1)
0x120d: @@ ClearReplies()
0x120e: Pop(0)
0x120f: Push((int) 13651)
0x1210: Push((int) 14909)
0x1211: Push((int) 14907)
0x1212: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1213: Pop(3)
0x1214: Push((int) 13655)
0x1215: Push((int) 14913)
0x1216: Push((int) 14912)
0x1217: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1218: Pop(3)
0x1219: Return(); Pop(0)

0x121a: Push((int) 14913)
0x121b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x121c: IF (Stack[-1] == 0) GOTO 0x122c; Pop(1)

0x121d: PushEmpty(string)
0x121e: Stack[-1] = "Neutral"
0x121f: Call 0x104b

0x1220: Pop(1)
0x1221: Push((int) 13656)
0x1222: @@ SetMessage(Stack[-1])
0x1223: Pop(1)
0x1224: @@ ClearReplies()
0x1225: Pop(0)
0x1226: Push((int) 13657)
0x1227: Push((int) 14909)
0x1228: Push((int) 14914)
0x1229: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122a: Pop(3)
0x122b: Return(); Pop(0)

0x122c: Push((int) 14909)
0x122d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122e: IF (Stack[-1] == 0) GOTO 0x123e; Pop(1)

0x122f: PushEmpty(string)
0x1230: Stack[-1] = "Neutral"
0x1231: Call 0x104b

0x1232: Pop(1)
0x1233: Push((int) 13653)
0x1234: @@ SetMessage(Stack[-1])
0x1235: Pop(1)
0x1236: @@ ClearReplies()
0x1237: Pop(0)
0x1238: Push((int) 13654)
0x1239: Push((int) -1)
0x123a: Push((int) 14911)
0x123b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123c: Pop(3)
0x123d: Return(); Pop(0)

0x123e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x123f: PushEmpty(bool)
0x1240: Call 0x1307

0x1241: Pop(0)
0x1242: IF (Stack[-1] == 0) GOTO 0x1246; Pop(1)

0x1243: @ lshStopAnimation()
0x1244: Pop(0)
0x1245: GOTO 0x1248

0x1246: @ StopAnimation()
0x1247: Pop(0)
0x1248: Return(); Pop(0)

0x1249: GOTO 0x105c

0x124a: Return(); Pop(0)

0x124b: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x124c: @@ GetPosition(Stack[-4])
0x124d: Pop(0)
0x124e: @ GetPosition(Stack[-3])
0x124f: Pop(0)
0x1250: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x1251: Push(CvectorIndex(Stack[-2], 0))
0x1252: Push(CvectorIndex(Stack[-3], 2))
0x1253: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x1254: Pop(2)
0x1255: Stack[-10] = Stack[-1]
0x1256: Return(); Pop(8)

0x1257: PushEmpty(bool, bool)
0x1258: @ IsLoaded(Stack[-1])
0x1259: Pop(0)
0x125a: Stack[-3] = Stack[-1]
0x125b: Return(); Pop(2)

0x125c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x125d: @@ GetPosition(Stack[-7])
0x125e: Pop(0)
0x125f: @@ GetEyesHeight(Stack[-8])
0x1260: Pop(0)
0x1261: Push(CvectorIndex(Stack[-7], 1))
0x1262: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1263: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1264: @ GetPosition(Stack[-6])
0x1265: Pop(0)
0x1266: @ GetEyesHeight(Stack[-8])
0x1267: Pop(0)
0x1268: Push(CvectorIndex(Stack[-6], 1))
0x1269: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x126a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x126b: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x126c: Push(CvectorIndex(Stack[-5], 1))
0x126d: Stack[-1] = (int) 0
0x126e: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x126f: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1270: Pop(1); Push(Sqrt(Stack[-1]))
0x1271: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1272: Stack[-4] = -Stack[-5]; Pop(0);
0x1273: Push((int) 70)
0x1274: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1275: PushEmpty(cvector, cvector)
0x1276: Push(CVector(0.0, 1.0, 0.0))
0x1277: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x1278: Call 0x12b1

0x1279: Pop(1)
0x127a: Push((int) 25)
0x127b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x127c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x127d: Push(CVector(0.0, 10.0, 0.0))
0x127e: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x127f: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1280: @ IsOverrideActive(Stack[-1])
0x1281: Pop(0)
0x1282: Push(Stack[-1])
0x1283: IF (Stack[-1] == 0) GOTO 0x1286; Pop(1)

0x1284: Stack[-18] = (bool) 0
0x1285: Return(); Pop(16)

0x1286: @ StopWorld()
0x1287: Pop(0)
0x1288: @ CameraTransit(Stack[-2], Stack[-4])
0x1289: Pop(0)
0x128a: Push(CvectorIndex(Stack[-3], 0))
0x128b: Push(CvectorIndex(Stack[-4], 2))
0x128c: @ Rotate(Stack[-2], Stack[-1])
0x128d: Pop(2)
0x128e: @ CameraWaitForPlayFinish()
0x128f: Pop(0)
0x1290: @ ResumeWorld()
0x1291: Pop(0)
0x1292: Stack[-18] = (bool) 1
0x1293: Return(); Pop(16)

0x1294: PushEmpty()
0x1295: @ CameraSwitchToNormal()
0x1296: Pop(0)
0x1297: Return(); Pop(0)

0x1298: PushEmpty(float, float, float, float)
0x1299: Push("playing ")
0x129a: Pop(1); Push(Stack[-1] + Stack[-6]);
0x129b: @ Trace(Stack[-1])
0x129c: Pop(1)
0x129d: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x129e: Pop(0)
0x129f: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x12a0: Pop(0)
0x12a1: Push("start: ")
0x12a2: Pop(1); Push(Stack[-1] + Stack[-3]);
0x12a3: @ Trace(Stack[-1])
0x12a4: Pop(1)
0x12a5: Push("end: ")
0x12a6: Pop(1); Push(Stack[-1] + Stack[-2]);
0x12a7: @ Trace(Stack[-1])
0x12a8: Pop(1)
0x12a9: Return(); Pop(4)

0x12aa: PushEmpty(bool)
0x12ab: Call 0x1307

0x12ac: Pop(0)
0x12ad: IF (Stack[-1] == 0) GOTO 0x12b0; Pop(1)

0x12ae: @ lshStopSpeech()
0x12af: Pop(0)
0x12b0: Return(); Pop(0)

0x12b1: PushEmpty(float, float)
0x12b2: Pop(0); Push(Stack[-3] | Stack[-3]);
0x12b3: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x12b4: Push((float)0.0)
0x12b5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x12b6: IF (Stack[-1] == 0) GOTO 0x12b9; Pop(1)

0x12b7: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x12b8: Return(); Pop(2)

0x12b9: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x12ba: Return(); Pop(2)

0x12bb: PushEmpty(int, int)
0x12bc: @ GetVariable(Stack[-3], Stack[-1])
0x12bd: Pop(0)
0x12be: Stack[-4] = Stack[-1]
0x12bf: Return(); Pop(2)

0x12c0: PushEmpty(int, int, bool, int, int, bool)
0x12c1: @@ GetItemID(Stack[-3])
0x12c2: Pop(0)
0x12c3: Push("Category")
0x12c4: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x12c5: Pop(1)
0x12c6: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x12c7: Pop(0)
0x12c8: Pop(0); Push((bool) Stack[-1] == 0)
0x12c9: IF (Stack[-1] == 0) GOTO 0x12cc; Pop(1)

0x12ca: @@ DropItems(Stack[-8], Stack[-7])
0x12cb: Pop(0)
0x12cc: Return(); Pop(6)

0x12cd: PushEmpty(object, object)
0x12ce: @ CreateInvItem(Stack[-1])
0x12cf: Pop(0)
0x12d0: @@ SetItemName(Stack[-4])
0x12d1: Pop(0)
0x12d2: PushEmpty(object, object, int)
0x12d3: Stack[-3] = Stack[-8]
0x12d4: Stack[-2] = Stack[-4]
0x12d5: Stack[-1] = Stack[-6]
0x12d6: Call 0x12c0

0x12d7: Pop(3)
0x12d8: Return(); Pop(2)

0x12d9: Stack[-1] = 0
0x12da: PushEmpty(object, object)
0x12db: @ FindActor(Stack[-1], Stack[-4])
0x12dc: Pop(0)
0x12dd: Pop(0); Push((bool) Stack[-1] == 0)
0x12de: IF (Stack[-1] == 0) GOTO 0x12e1; Pop(1)

0x12df: Stack[-5] = (bool) 0
0x12e0: Return(); Pop(2)

0x12e1: @ Trigger(Stack[-1], Stack[-3])
0x12e2: Pop(0)
0x12e3: Stack[-5] = (bool) 1
0x12e4: Return(); Pop(2)

0x12e5: Stack[-1] = 0
0x12e6: PushEmpty(float, float)
0x12e7: @ GetGameTime(Stack[-1])
0x12e8: Pop(0)
0x12e9: Stack[-3] = Stack[-1]
0x12ea: Return(); Pop(2)

0x12eb: PushEmpty(float, float)
0x12ec: @ GetGameTime(Stack[-1])
0x12ed: Pop(0)
0x12ee: Push((int) 1)
0x12ef: PushEmpty(int)
0x12f0: Push((int) 24)
0x12f1: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x12f2: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x12f3: Return(); Pop(2)

0x12f4: PushEmpty()
0x12f5: PushEmpty(int)
0x12f6: Call 0x12eb

0x12f7: Pop(0)
0x12f8: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x12f9: Return(); Pop(0)

0x12fa: PushEmpty(bool, bool)
0x12fb: PushEmpty(string)
0x12fc: Stack[-1] = "No"
0x12fd: Call 0x1298

0x12fe: Pop(1)
0x12ff: @ lshWaitForAnimEnd(Stack[-1])
0x1300: Pop(0)
0x1301: Stack[-3] = Stack[-1]
0x1302: Return(); Pop(2)

0x1303: Stack[-1] = (int) 2874
0x1304: Return(); Pop(0)

0x1305: Stack[-1] = "ui/NPC_Ospina.png"
0x1306: Return(); Pop(0)

0x1307: Stack[-1] = (bool) 1
0x1308: Return(); Pop(0)

0x1309: PushEmpty()
0x130a: Push("ood1Ospina1")
0x130b: Push((int) 1)
0x130c: @ SetVariable(Stack[-2], Stack[-1])
0x130d: Pop(2)
0x130e: Return(); Pop(0)

0x130f: PushEmpty()
0x1310: Push("ood1Ospina2")
0x1311: Push((int) 1)
0x1312: @ SetVariable(Stack[-2], Stack[-1])
0x1313: Pop(2)
0x1314: Return(); Pop(0)

0x1315: PushEmpty()
0x1316: Push("ood1Ospina3")
0x1317: Push((int) 1)
0x1318: @ SetVariable(Stack[-2], Stack[-1])
0x1319: Pop(2)
0x131a: Return(); Pop(0)

0x131b: PushEmpty(object, object, object, object)
0x131c: PushEmpty(object)
0x131d: Call 0x165a

0x131e: Stack[-3] = Stack[-1]
0x131f: Pop(1)
0x1320: Push("d1q03KapellaGotoOspina")
0x1321: @@ FindMark(Stack[-2], Stack[-1])
0x1322: Pop(1)
0x1323: Push(Stack[-1])
0x1324: IF (Stack[-1] == 0) GOTO 0x1327; Pop(1)

0x1325: @@ Remove()
0x1326: Pop(0)
0x1327: Push("d1q03MladVladGotoOspina")
0x1328: @@ FindMark(Stack[-2], Stack[-1])
0x1329: Pop(1)
0x132a: Push(Stack[-1])
0x132b: IF (Stack[-1] == 0) GOTO 0x132e; Pop(1)

0x132c: @@ Remove()
0x132d: Pop(0)
0x132e: PushEmpty(bool, string, string)
0x132f: Stack[-2] = "quest_d1_03"
0x1330: Stack[-1] = "kapella_finish"
0x1331: Call 0x12da

0x1332: Pop(3)
0x1333: Return(); Pop(4)

0x1334: Stack[-1] = 0
0x1335: Stack[-2] = 0
0x1336: PushEmpty()
0x1337: Push("ood1Ospina4")
0x1338: Push((int) 1)
0x1339: @ SetVariable(Stack[-2], Stack[-1])
0x133a: Pop(2)
0x133b: Return(); Pop(0)

0x133c: PushEmpty()
0x133d: Push("ood1Ospina5")
0x133e: Push((int) 1)
0x133f: @ SetVariable(Stack[-2], Stack[-1])
0x1340: Pop(2)
0x1341: Return(); Pop(0)

0x1342: PushEmpty()
0x1343: Push("ood1Ospina6")
0x1344: Push((int) 1)
0x1345: @ SetVariable(Stack[-2], Stack[-1])
0x1346: Pop(2)
0x1347: Return(); Pop(0)

0x1348: PushEmpty()
0x1349: Push("ood3Ospina1")
0x134a: Push((int) 1)
0x134b: @ SetVariable(Stack[-2], Stack[-1])
0x134c: Pop(2)
0x134d: Return(); Pop(0)

0x134e: PushEmpty()
0x134f: Push("ood3Ospina2")
0x1350: Push((int) 1)
0x1351: @ SetVariable(Stack[-2], Stack[-1])
0x1352: Pop(2)
0x1353: Return(); Pop(0)

0x1354: PushEmpty()
0x1355: Push("ood3Ospina3")
0x1356: Push((int) 1)
0x1357: @ SetVariable(Stack[-2], Stack[-1])
0x1358: Pop(2)
0x1359: Return(); Pop(0)

0x135a: PushEmpty(object, object)
0x135b: Push("d3q01")
0x135c: Push((int) 3)
0x135d: @ SetVariable(Stack[-2], Stack[-1])
0x135e: Pop(2)
0x135f: PushEmpty(object)
0x1360: Call 0x165a

0x1361: Stack[-2] = Stack[-1]
0x1362: Pop(1)
0x1363: Push("d3q01OspinaGotoBigVlad")
0x1364: Push("pt_map_bigvlad")
0x1365: Push((int) 1)
0x1366: Push((int) 11152)
0x1367: PushEmpty(float)
0x1368: Call 0x12e6

0x1369: Pop(0)
0x136a: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x136b: Pop(5)
0x136c: Push("d3q01OspinaGotoBigVladSelf")
0x136d: Push("pt_map_ospina")
0x136e: Push((int) 1)
0x136f: Push((int) 15296)
0x1370: PushEmpty(float)
0x1371: Call 0x12e6

0x1372: Pop(0)
0x1373: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1374: Pop(5)
0x1375: PushEmpty()
0x1376: Call 0x16ad

0x1377: Pop(0)
0x1378: Return(); Pop(2)

0x1379: Stack[-1] = 0
0x137a: PushEmpty()
0x137b: Push("ood3Ospina4")
0x137c: Push((int) 1)
0x137d: @ SetVariable(Stack[-2], Stack[-1])
0x137e: Pop(2)
0x137f: Return(); Pop(0)

0x1380: PushEmpty(object, object)
0x1381: Push("d3q01")
0x1382: Push((int) 7)
0x1383: @ SetVariable(Stack[-2], Stack[-1])
0x1384: Pop(2)
0x1385: PushEmpty(object)
0x1386: Call 0x165a

0x1387: Stack[-2] = Stack[-1]
0x1388: Pop(1)
0x1389: Push("d3q01OspinaButchersWillHelpSelf")
0x138a: Push("pt_map_ospina")
0x138b: Push((int) 1)
0x138c: Push((int) 15301)
0x138d: PushEmpty(float)
0x138e: Call 0x12e6

0x138f: Pop(0)
0x1390: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1391: Pop(5)
0x1392: PushEmpty()
0x1393: Call 0x169d

0x1394: Pop(0)
0x1395: PushEmpty(bool, string, string)
0x1396: Stack[-2] = "quest_d3_01"
0x1397: Stack[-1] = "place_butchers"
0x1398: Call 0x12da

0x1399: Pop(3)
0x139a: Return(); Pop(2)

0x139b: Stack[-1] = 0
0x139c: PushEmpty()
0x139d: PushEmpty(object, string, float)
0x139e: PushEmpty(object)
0x139f: Call 0x165a

0x13a0: Stack[-4] = Stack[-1]
0x13a1: Pop(1)
0x13a2: Stack[-2] = "pt_map_bigvlad"
0x13a3: Stack[-1] = (int) 2
0x13a4: Call 0x166b

0x13a5: Pop(3)
0x13a6: PushEmpty(object)
0x13a7: Call 0x165a

0x13a8: Pop(0)
0x13a9: @@ ShowMap(Stack[-1])
0x13aa: Pop(1)
0x13ab: Return(); Pop(0)

0x13ac: PushEmpty()
0x13ad: PushEmpty(object, string, float)
0x13ae: PushEmpty(object)
0x13af: Call 0x165a

0x13b0: Stack[-4] = Stack[-1]
0x13b1: Pop(1)
0x13b2: Stack[-2] = "pt_map_lara"
0x13b3: Stack[-1] = (int) 2
0x13b4: Call 0x166b

0x13b5: Pop(3)
0x13b6: PushEmpty(object)
0x13b7: Call 0x165a

0x13b8: Pop(0)
0x13b9: @@ ShowMap(Stack[-1])
0x13ba: Pop(1)
0x13bb: Return(); Pop(0)

0x13bc: PushEmpty(object, object)
0x13bd: Push("d4q01_subquest")
0x13be: Push((int) 2)
0x13bf: @ SetVariable(Stack[-2], Stack[-1])
0x13c0: Pop(2)
0x13c1: PushEmpty(object)
0x13c2: Call 0x165a

0x13c3: Stack[-2] = Stack[-1]
0x13c4: Pop(1)
0x13c5: Push("d4q01OspinaGotoLara")
0x13c6: Push("pt_map_lara")
0x13c7: Push((int) 1)
0x13c8: Push((int) 11504)
0x13c9: PushEmpty(float)
0x13ca: Call 0x12e6

0x13cb: Pop(0)
0x13cc: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13cd: Pop(5)
0x13ce: Return(); Pop(2)

0x13cf: Stack[-1] = 0
0x13d0: PushEmpty()
0x13d1: Push("ood4Ospina1")
0x13d2: Push((int) 1)
0x13d3: @ SetVariable(Stack[-2], Stack[-1])
0x13d4: Pop(2)
0x13d5: Return(); Pop(0)

0x13d6: PushEmpty()
0x13d7: Push("d4q01_subquest")
0x13d8: Push((int) 1000)
0x13d9: @ SetVariable(Stack[-2], Stack[-1])
0x13da: Pop(2)
0x13db: Return(); Pop(0)

0x13dc: PushEmpty()
0x13dd: Push("ood4Ospina2")
0x13de: Push((int) 1)
0x13df: @ SetVariable(Stack[-2], Stack[-1])
0x13e0: Pop(2)
0x13e1: Return(); Pop(0)

0x13e2: PushEmpty()
0x13e3: Push("ood6Ospina1")
0x13e4: Push((int) 1)
0x13e5: @ SetVariable(Stack[-2], Stack[-1])
0x13e6: Pop(2)
0x13e7: Return(); Pop(0)

0x13e8: PushEmpty()
0x13e9: Push("ood6Ospina2")
0x13ea: Push((int) 1)
0x13eb: @ SetVariable(Stack[-2], Stack[-1])
0x13ec: Pop(2)
0x13ed: Return(); Pop(0)

0x13ee: PushEmpty()
0x13ef: Push("d8q01MladVladIsBad")
0x13f0: Push((int) 1)
0x13f1: @ SetVariable(Stack[-2], Stack[-1])
0x13f2: Pop(2)
0x13f3: PushEmpty()
0x13f4: Call 0x16dd

0x13f5: Pop(0)
0x13f6: Return(); Pop(0)

0x13f7: PushEmpty()
0x13f8: Push("ood8Ospina1")
0x13f9: Push((int) 1)
0x13fa: @ SetVariable(Stack[-2], Stack[-1])
0x13fb: Pop(2)
0x13fc: Return(); Pop(0)

0x13fd: PushEmpty()
0x13fe: Push("ood8Ospina2")
0x13ff: Push((int) 1)
0x1400: @ SetVariable(Stack[-2], Stack[-1])
0x1401: Pop(2)
0x1402: Return(); Pop(0)

0x1403: PushEmpty()
0x1404: PushEmpty()
0x1405: Call 0x16bd

0x1406: Pop(0)
0x1407: Push("ospina blood is given")
0x1408: @ Trace(Stack[-1])
0x1409: Pop(1)
0x140a: PushEmpty(object, string, int)
0x140b: Stack[-3] = Stack[-5]
0x140c: Stack[-2] = "d6q01_ospina_blood"
0x140d: Stack[-1] = (int) 1
0x140e: Call 0x12cd

0x140f: Pop(3)
0x1410: Return(); Pop(0)

0x1411: PushEmpty()
0x1412: Push("playsound")
0x1413: Push("giveitem")
0x1414: @ TriggerWorld(Stack[-2], Stack[-1])
0x1415: Pop(2)
0x1416: Return(); Pop(0)

0x1417: PushEmpty(object, object, object, object)
0x1418: Push("d6q01OspinaVolonteer")
0x1419: Push((int) 1)
0x141a: @ SetVariable(Stack[-2], Stack[-1])
0x141b: Pop(2)
0x141c: PushEmpty(object)
0x141d: Call 0x165a

0x141e: Stack[-3] = Stack[-1]
0x141f: Pop(1)
0x1420: Push("d6q01AlexandrGotoJulia")
0x1421: @@ FindMark(Stack[-2], Stack[-1])
0x1422: Pop(1)
0x1423: Push(Stack[-1])
0x1424: IF (Stack[-1] == 0) GOTO 0x1427; Pop(1)

0x1425: @@ Remove()
0x1426: Pop(0)
0x1427: Push("d6q01AlexandrGotoKaterina")
0x1428: @@ FindMark(Stack[-2], Stack[-1])
0x1429: Pop(1)
0x142a: Push(Stack[-1])
0x142b: IF (Stack[-1] == 0) GOTO 0x142e; Pop(1)

0x142c: @@ Remove()
0x142d: Pop(0)
0x142e: Push("d6q01AlexandrGotoLara")
0x142f: @@ FindMark(Stack[-2], Stack[-1])
0x1430: Pop(1)
0x1431: Push(Stack[-1])
0x1432: IF (Stack[-1] == 0) GOTO 0x1435; Pop(1)

0x1433: @@ Remove()
0x1434: Pop(0)
0x1435: Push("d6q01AlexangrGotoJulLaraSelf")
0x1436: @@ FindMark(Stack[-2], Stack[-1])
0x1437: Pop(1)
0x1438: Push(Stack[-1])
0x1439: IF (Stack[-1] == 0) GOTO 0x143c; Pop(1)

0x143a: @@ Remove()
0x143b: Pop(0)
0x143c: Push("d6q01BigVladGotoAnna")
0x143d: @@ FindMark(Stack[-2], Stack[-1])
0x143e: Pop(1)
0x143f: Push(Stack[-1])
0x1440: IF (Stack[-1] == 0) GOTO 0x1443; Pop(1)

0x1441: @@ Remove()
0x1442: Pop(0)
0x1443: Push("d6q01BigVladGotoAnnaOspinaSelf")
0x1444: @@ FindMark(Stack[-2], Stack[-1])
0x1445: Pop(1)
0x1446: Push(Stack[-1])
0x1447: IF (Stack[-1] == 0) GOTO 0x144a; Pop(1)

0x1448: @@ Remove()
0x1449: Pop(0)
0x144a: Push("d6q01BigVladGotoOspina")
0x144b: @@ FindMark(Stack[-2], Stack[-1])
0x144c: Pop(1)
0x144d: Push(Stack[-1])
0x144e: IF (Stack[-1] == 0) GOTO 0x1451; Pop(1)

0x144f: @@ Remove()
0x1450: Pop(0)
0x1451: Push("d6q01KaterinaGotoLaska")
0x1452: @@ FindMark(Stack[-2], Stack[-1])
0x1453: Pop(1)
0x1454: Push(Stack[-1])
0x1455: IF (Stack[-1] == 0) GOTO 0x1458; Pop(1)

0x1456: @@ Remove()
0x1457: Pop(0)
0x1458: Push("d6q01KaterinagotoLaskaSelf")
0x1459: @@ FindMark(Stack[-2], Stack[-1])
0x145a: Pop(1)
0x145b: Push(Stack[-1])
0x145c: IF (Stack[-1] == 0) GOTO 0x145f; Pop(1)

0x145d: @@ Remove()
0x145e: Pop(0)
0x145f: Push("d6q01KillerIsKlara")
0x1460: @@ FindMark(Stack[-2], Stack[-1])
0x1461: Pop(1)
0x1462: Push(Stack[-1])
0x1463: IF (Stack[-1] == 0) GOTO 0x1466; Pop(1)

0x1464: @@ Remove()
0x1465: Pop(0)
0x1466: Push("d6q01LaskaGotoAlbinos")
0x1467: @@ FindMark(Stack[-2], Stack[-1])
0x1468: Pop(1)
0x1469: Push(Stack[-1])
0x146a: IF (Stack[-1] == 0) GOTO 0x146d; Pop(1)

0x146b: @@ Remove()
0x146c: Pop(0)
0x146d: Push("d6q01ViktorGotoAlexandr")
0x146e: @@ FindMark(Stack[-2], Stack[-1])
0x146f: Pop(1)
0x1470: Push(Stack[-1])
0x1471: IF (Stack[-1] == 0) GOTO 0x1474; Pop(1)

0x1472: @@ Remove()
0x1473: Pop(0)
0x1474: Push("d6q01ViktorGotoAlxBigSelf")
0x1475: @@ FindMark(Stack[-2], Stack[-1])
0x1476: Pop(1)
0x1477: Push(Stack[-1])
0x1478: IF (Stack[-1] == 0) GOTO 0x147b; Pop(1)

0x1479: @@ Remove()
0x147a: Pop(0)
0x147b: Push("d6q01ViktorGotoBigVlad")
0x147c: @@ FindMark(Stack[-2], Stack[-1])
0x147d: Pop(1)
0x147e: Push(Stack[-1])
0x147f: IF (Stack[-1] == 0) GOTO 0x1482; Pop(1)

0x1480: @@ Remove()
0x1481: Pop(0)
0x1482: PushEmpty()
0x1483: Call 0x16cd

0x1484: Pop(0)
0x1485: PushEmpty(bool, int)
0x1486: Stack[-1] = (int) 112
0x1487: Call 0x1649

0x1488: Pop(2)
0x1489: PushEmpty(bool, int)
0x148a: Stack[-1] = (int) 113
0x148b: Call 0x1649

0x148c: Pop(2)
0x148d: PushEmpty(bool, int)
0x148e: Stack[-1] = (int) 114
0x148f: Call 0x1649

0x1490: Pop(2)
0x1491: PushEmpty(bool, int)
0x1492: Stack[-1] = (int) 115
0x1493: Call 0x1649

0x1494: Pop(2)
0x1495: PushEmpty(bool, int)
0x1496: Stack[-1] = (int) 116
0x1497: Call 0x1649

0x1498: Pop(2)
0x1499: PushEmpty(bool, int)
0x149a: Stack[-1] = (int) 117
0x149b: Call 0x1649

0x149c: Pop(2)
0x149d: PushEmpty(bool, string, string)
0x149e: Stack[-2] = "quest_d6_01"
0x149f: Stack[-1] = "completed"
0x14a0: Call 0x12da

0x14a1: Pop(3)
0x14a2: Return(); Pop(4)

0x14a3: Stack[-1] = 0
0x14a4: Stack[-2] = 0
0x14a5: PushEmpty()
0x14a6: Push("KnowOspina")
0x14a7: Push((int) 1)
0x14a8: @ SetVariable(Stack[-2], Stack[-1])
0x14a9: Pop(2)
0x14aa: Return(); Pop(0)

0x14ab: PushEmpty()
0x14ac: PushEmpty(int, string)
0x14ad: Stack[-1] = "ood1Ospina1"
0x14ae: Call 0x12bb

0x14af: Pop(1)
0x14b0: Push((int) 0)
0x14b1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14b2: IF (Stack[-1] == 0) GOTO 0x14b5; Pop(1)

0x14b3: Stack[-2] = (bool) 1
0x14b4: Return(); Pop(0)

0x14b5: Stack[-2] = (bool) 0
0x14b6: Return(); Pop(0)

0x14b7: PushEmpty()
0x14b8: PushEmpty(int, string)
0x14b9: Stack[-1] = "ood1Ospina2"
0x14ba: Call 0x12bb

0x14bb: Pop(1)
0x14bc: Push((int) 0)
0x14bd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14be: IF (Stack[-1] == 0) GOTO 0x14c1; Pop(1)

0x14bf: Stack[-2] = (bool) 1
0x14c0: Return(); Pop(0)

0x14c1: Stack[-2] = (bool) 0
0x14c2: Return(); Pop(0)

0x14c3: PushEmpty()
0x14c4: PushEmpty(int, string)
0x14c5: Stack[-1] = "ood1Ospina3"
0x14c6: Call 0x12bb

0x14c7: Pop(1)
0x14c8: Push((int) 0)
0x14c9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14ca: IF (Stack[-1] == 0) GOTO 0x14cd; Pop(1)

0x14cb: Stack[-2] = (bool) 1
0x14cc: Return(); Pop(0)

0x14cd: Stack[-2] = (bool) 0
0x14ce: Return(); Pop(0)

0x14cf: PushEmpty()
0x14d0: PushEmpty(int, string)
0x14d1: Stack[-1] = "d1q01FirstGeorgVisit"
0x14d2: Call 0x12bb

0x14d3: Pop(1)
0x14d4: Push((int) 1)
0x14d5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14d6: IF (Stack[-1] == 0) GOTO 0x14d9; Pop(1)

0x14d7: Stack[-2] = (bool) 1
0x14d8: Return(); Pop(0)

0x14d9: Stack[-2] = (bool) 0
0x14da: Return(); Pop(0)

0x14db: PushEmpty()
0x14dc: PushEmpty(int, string)
0x14dd: Stack[-1] = "d1q03"
0x14de: Call 0x12bb

0x14df: Pop(1)
0x14e0: Push((int) 1)
0x14e1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14e2: IF (Stack[-1] == 0) GOTO 0x14e5; Pop(1)

0x14e3: Stack[-2] = (bool) 1
0x14e4: Return(); Pop(0)

0x14e5: Stack[-2] = (bool) 0
0x14e6: Return(); Pop(0)

0x14e7: PushEmpty()
0x14e8: PushEmpty(int, string)
0x14e9: Stack[-1] = "ood1Ospina4"
0x14ea: Call 0x12bb

0x14eb: Pop(1)
0x14ec: Push((int) 0)
0x14ed: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14ee: IF (Stack[-1] == 0) GOTO 0x14f1; Pop(1)

0x14ef: Stack[-2] = (bool) 1
0x14f0: Return(); Pop(0)

0x14f1: Stack[-2] = (bool) 0
0x14f2: Return(); Pop(0)

0x14f3: PushEmpty()
0x14f4: PushEmpty(int, string)
0x14f5: Stack[-1] = "ood1Ospina5"
0x14f6: Call 0x12bb

0x14f7: Pop(1)
0x14f8: Push((int) 0)
0x14f9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14fa: IF (Stack[-1] == 0) GOTO 0x14fd; Pop(1)

0x14fb: Stack[-2] = (bool) 1
0x14fc: Return(); Pop(0)

0x14fd: Stack[-2] = (bool) 0
0x14fe: Return(); Pop(0)

0x14ff: PushEmpty()
0x1500: PushEmpty(int, string)
0x1501: Stack[-1] = "ood1Ospina6"
0x1502: Call 0x12bb

0x1503: Pop(1)
0x1504: Push((int) 0)
0x1505: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1506: IF (Stack[-1] == 0) GOTO 0x1509; Pop(1)

0x1507: Stack[-2] = (bool) 1
0x1508: Return(); Pop(0)

0x1509: Stack[-2] = (bool) 0
0x150a: Return(); Pop(0)

0x150b: PushEmpty()
0x150c: PushEmpty(int, string)
0x150d: Stack[-1] = "ood3Ospina1"
0x150e: Call 0x12bb

0x150f: Pop(1)
0x1510: Push((int) 0)
0x1511: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1512: IF (Stack[-1] == 0) GOTO 0x1515; Pop(1)

0x1513: Stack[-2] = (bool) 1
0x1514: Return(); Pop(0)

0x1515: Stack[-2] = (bool) 0
0x1516: Return(); Pop(0)

0x1517: PushEmpty()
0x1518: PushEmpty(int, string)
0x1519: Stack[-1] = "ood3Ospina2"
0x151a: Call 0x12bb

0x151b: Pop(1)
0x151c: Push((int) 0)
0x151d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x151e: IF (Stack[-1] == 0) GOTO 0x1521; Pop(1)

0x151f: Stack[-2] = (bool) 1
0x1520: Return(); Pop(0)

0x1521: Stack[-2] = (bool) 0
0x1522: Return(); Pop(0)

0x1523: PushEmpty()
0x1524: PushEmpty(int, string)
0x1525: Stack[-1] = "ood3Ospina3"
0x1526: Call 0x12bb

0x1527: Pop(1)
0x1528: Push((int) 0)
0x1529: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x152a: IF (Stack[-1] == 0) GOTO 0x152d; Pop(1)

0x152b: Stack[-2] = (bool) 1
0x152c: Return(); Pop(0)

0x152d: Stack[-2] = (bool) 0
0x152e: Return(); Pop(0)

0x152f: PushEmpty()
0x1530: PushEmpty(int, string)
0x1531: Stack[-1] = "ood3Ospina4"
0x1532: Call 0x12bb

0x1533: Pop(1)
0x1534: Push((int) 0)
0x1535: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1536: IF (Stack[-1] == 0) GOTO 0x1539; Pop(1)

0x1537: Stack[-2] = (bool) 1
0x1538: Return(); Pop(0)

0x1539: Stack[-2] = (bool) 0
0x153a: Return(); Pop(0)

0x153b: PushEmpty()
0x153c: PushEmpty(int, string)
0x153d: Stack[-1] = "d3q01"
0x153e: Call 0x12bb

0x153f: Pop(1)
0x1540: Push((int) 2)
0x1541: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1542: IF (Stack[-1] == 0) GOTO 0x1545; Pop(1)

0x1543: Stack[-2] = (bool) 1
0x1544: Return(); Pop(0)

0x1545: Stack[-2] = (bool) 0
0x1546: Return(); Pop(0)

0x1547: PushEmpty()
0x1548: PushEmpty(int, string)
0x1549: Stack[-1] = "d3q01"
0x154a: Call 0x12bb

0x154b: Pop(1)
0x154c: Push((int) 6)
0x154d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x154e: IF (Stack[-1] == 0) GOTO 0x1551; Pop(1)

0x154f: Stack[-2] = (bool) 1
0x1550: Return(); Pop(0)

0x1551: Stack[-2] = (bool) 0
0x1552: Return(); Pop(0)

0x1553: PushEmpty()
0x1554: PushEmpty(int, string)
0x1555: Stack[-1] = "d4q01_subquest"
0x1556: Call 0x12bb

0x1557: Pop(1)
0x1558: Push((int) 1)
0x1559: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x155a: IF (Stack[-1] == 0) GOTO 0x155d; Pop(1)

0x155b: Stack[-2] = (bool) 1
0x155c: Return(); Pop(0)

0x155d: Stack[-2] = (bool) 0
0x155e: Return(); Pop(0)

0x155f: PushEmpty()
0x1560: PushEmpty(int, string)
0x1561: Stack[-1] = "ood4Ospina1"
0x1562: Call 0x12bb

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
0x156d: Stack[-1] = "d4q01_subquest"
0x156e: Call 0x12bb

0x156f: Pop(1)
0x1570: Push((int) 3)
0x1571: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1572: IF (Stack[-1] == 0) GOTO 0x1575; Pop(1)

0x1573: Stack[-2] = (bool) 1
0x1574: Return(); Pop(0)

0x1575: Stack[-2] = (bool) 0
0x1576: Return(); Pop(0)

0x1577: PushEmpty()
0x1578: PushEmpty(int, string)
0x1579: Stack[-1] = "ood4Ospina2"
0x157a: Call 0x12bb

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
0x1585: Stack[-1] = "d6q01"
0x1586: Call 0x12bb

0x1587: Pop(1)
0x1588: Push((int) 1)
0x1589: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x158a: IF (Stack[-1] == 0) GOTO 0x158d; Pop(1)

0x158b: Stack[-2] = (bool) 1
0x158c: Return(); Pop(0)

0x158d: Stack[-2] = (bool) 0
0x158e: Return(); Pop(0)

0x158f: PushEmpty()
0x1590: PushEmpty(int, string)
0x1591: Stack[-1] = "ood6Ospina1"
0x1592: Call 0x12bb

0x1593: Pop(1)
0x1594: Push((int) 0)
0x1595: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1596: IF (Stack[-1] == 0) GOTO 0x1599; Pop(1)

0x1597: Stack[-2] = (bool) 1
0x1598: Return(); Pop(0)

0x1599: Stack[-2] = (bool) 0
0x159a: Return(); Pop(0)

0x159b: PushEmpty()
0x159c: PushEmpty(int, string)
0x159d: Stack[-1] = "ood6Ospina2"
0x159e: Call 0x12bb

0x159f: Pop(1)
0x15a0: Push((int) 0)
0x15a1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15a2: IF (Stack[-1] == 0) GOTO 0x15a5; Pop(1)

0x15a3: Stack[-2] = (bool) 1
0x15a4: Return(); Pop(0)

0x15a5: Stack[-2] = (bool) 0
0x15a6: Return(); Pop(0)

0x15a7: PushEmpty()
0x15a8: PushEmpty(int, string)
0x15a9: Stack[-1] = "d8q01"
0x15aa: Call 0x12bb

0x15ab: Pop(1)
0x15ac: Push((int) 0)
0x15ad: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15ae: IF (Stack[-1] == 0) GOTO 0x15b1; Pop(1)

0x15af: Stack[-2] = (bool) 1
0x15b0: Return(); Pop(0)

0x15b1: Stack[-2] = (bool) 0
0x15b2: Return(); Pop(0)

0x15b3: PushEmpty()
0x15b4: PushEmpty(int, string)
0x15b5: Stack[-1] = "ood8Ospina1"
0x15b6: Call 0x12bb

0x15b7: Pop(1)
0x15b8: Push((int) 0)
0x15b9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15ba: IF (Stack[-1] == 0) GOTO 0x15bd; Pop(1)

0x15bb: Stack[-2] = (bool) 1
0x15bc: Return(); Pop(0)

0x15bd: Stack[-2] = (bool) 0
0x15be: Return(); Pop(0)

0x15bf: PushEmpty()
0x15c0: PushEmpty(int, string)
0x15c1: Stack[-1] = "ood8Ospina2"
0x15c2: Call 0x12bb

0x15c3: Pop(1)
0x15c4: Push((int) 0)
0x15c5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15c6: IF (Stack[-1] == 0) GOTO 0x15c9; Pop(1)

0x15c7: Stack[-2] = (bool) 1
0x15c8: Return(); Pop(0)

0x15c9: Stack[-2] = (bool) 0
0x15ca: Return(); Pop(0)

0x15cb: PushEmpty()
0x15cc: PushEmpty(int, string)
0x15cd: Stack[-1] = "microscope_d6q01_ospina_blood"
0x15ce: Call 0x12bb

0x15cf: Pop(1)
0x15d0: Push((int) 0)
0x15d1: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x15d2: IF (Stack[-1] == 0) GOTO 0x15d5; Pop(1)

0x15d3: Stack[-2] = (bool) 1
0x15d4: Return(); Pop(0)

0x15d5: Stack[-2] = (bool) 0
0x15d6: Return(); Pop(0)

0x15d7: PushEmpty()
0x15d8: PushEmpty(int, string)
0x15d9: Stack[-1] = "d6q01"
0x15da: Call 0x12bb

0x15db: Pop(1)
0x15dc: Push((int) 1000)
0x15dd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15de: IF (Stack[-1] == 0) GOTO 0x15e1; Pop(1)

0x15df: Stack[-2] = (bool) 1
0x15e0: Return(); Pop(0)

0x15e1: Stack[-2] = (bool) 0
0x15e2: Return(); Pop(0)

0x15e3: PushEmpty()
0x15e4: PushEmpty(int, string)
0x15e5: Stack[-1] = "d6q01"
0x15e6: Call 0x12bb

0x15e7: Pop(1)
0x15e8: Push((int) -1)
0x15e9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15ea: IF (Stack[-1] == 0) GOTO 0x15ed; Pop(1)

0x15eb: Stack[-2] = (bool) 1
0x15ec: Return(); Pop(0)

0x15ed: Stack[-2] = (bool) 0
0x15ee: Return(); Pop(0)

0x15ef: PushEmpty()
0x15f0: PushEmpty(int, string)
0x15f1: Stack[-1] = "KnowBigVlad"
0x15f2: Call 0x12bb

0x15f3: Pop(1)
0x15f4: Push((int) 1)
0x15f5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15f6: IF (Stack[-1] == 0) GOTO 0x15f9; Pop(1)

0x15f7: Stack[-2] = (bool) 1
0x15f8: Return(); Pop(0)

0x15f9: Stack[-2] = (bool) 0
0x15fa: Return(); Pop(0)

0x15fb: PushEmpty()
0x15fc: PushEmpty(int, string)
0x15fd: Stack[-1] = "KnowKaterina"
0x15fe: Call 0x12bb

0x15ff: Pop(1)
0x1600: Push((int) 1)
0x1601: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1602: IF (Stack[-1] == 0) GOTO 0x1605; Pop(1)

0x1603: Stack[-2] = (bool) 1
0x1604: Return(); Pop(0)

0x1605: Stack[-2] = (bool) 0
0x1606: Return(); Pop(0)

0x1607: PushEmpty()
0x1608: PushEmpty(int, string)
0x1609: Stack[-1] = "KnowLaska"
0x160a: Call 0x12bb

0x160b: Pop(1)
0x160c: Push((int) 1)
0x160d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x160e: IF (Stack[-1] == 0) GOTO 0x1611; Pop(1)

0x160f: Stack[-2] = (bool) 1
0x1610: Return(); Pop(0)

0x1611: Stack[-2] = (bool) 0
0x1612: Return(); Pop(0)

0x1613: PushEmpty()
0x1614: PushEmpty(int, string)
0x1615: Stack[-1] = "KnowMladVlad"
0x1616: Call 0x12bb

0x1617: Pop(1)
0x1618: Push((int) 1)
0x1619: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x161a: IF (Stack[-1] == 0) GOTO 0x161d; Pop(1)

0x161b: Stack[-2] = (bool) 1
0x161c: Return(); Pop(0)

0x161d: Stack[-2] = (bool) 0
0x161e: Return(); Pop(0)

0x161f: PushEmpty(object, object)
0x1620: @ GetDiaryRoot(Stack[-1])
0x1621: Pop(0)
0x1622: Pop(0); Push((bool) Stack[-1] == 0)
0x1623: IF (Stack[-1] == 0) GOTO 0x1629; Pop(1)

0x1624: Push("Can't retrieve diary root")
0x1625: @ Trace(Stack[-1])
0x1626: Pop(1)
0x1627: Stack[-3] = (bool) 0
0x1628: Return(); Pop(2)

0x1629: Stack[-3] = Stack[-1]
0x162a: Return(); Pop(2)

0x162b: Stack[-1] = 0
0x162c: PushEmpty(object, object, int, object, object, int)
0x162d: PushEmpty(object)
0x162e: Call 0x161f

0x162f: Stack[-4] = Stack[-1]
0x1630: Pop(1)
0x1631: @@ Find(Stack[-7], Stack[-2])
0x1632: Pop(0)
0x1633: Pop(0); Push((bool) Stack[-2] == 0)
0x1634: IF (Stack[-1] == 0) GOTO 0x163b; Pop(1)

0x1635: Push("Can't find diary parent with id: ")
0x1636: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1637: @ Trace(Stack[-1])
0x1638: Pop(1)
0x1639: Stack[-9] = (bool) 0
0x163a: Return(); Pop(6)

0x163b: @@ AddChild(Stack[-8])
0x163c: Pop(0)
0x163d: Push("player_diary")
0x163e: Push((int) 1)
0x163f: @ SetVariable(Stack[-2], Stack[-1])
0x1640: Pop(2)
0x1641: @@ GetCategory(Stack[-1])
0x1642: Pop(0)
0x1643: @ SetDiarySection(Stack[-1])
0x1644: Pop(0)
0x1645: Stack[-9] = (bool) 0
0x1646: Return(); Pop(6)

0x1647: Stack[-2] = 0
0x1648: Stack[-3] = 0
0x1649: PushEmpty(object, object, object, object)
0x164a: PushEmpty(object)
0x164b: Call 0x161f

0x164c: Stack[-3] = Stack[-1]
0x164d: Pop(1)
0x164e: @@ Find(Stack[-5], Stack[-1])
0x164f: Pop(0)
0x1650: Pop(0); Push((bool) Stack[-1] == 0)
0x1651: IF (Stack[-1] == 0) GOTO 0x1654; Pop(1)

0x1652: Stack[-6] = (bool) 0
0x1653: Return(); Pop(4)

0x1654: @@ Remove()
0x1655: Pop(0)
0x1656: Stack[-6] = (bool) 1
0x1657: Return(); Pop(4)

0x1658: Stack[-1] = 0
0x1659: Stack[-2] = 0
0x165a: PushEmpty(object, object, object, object)
0x165b: @ GetMainOutdoorScene(Stack[-2])
0x165c: Pop(0)
0x165d: Pop(0); Push((bool) Stack[-2] == 0)
0x165e: IF (Stack[-1] == 0) GOTO 0x1665; Pop(1)

0x165f: Push("Can't find main outdoor scene")
0x1660: @ Trace(Stack[-1])
0x1661: Pop(1)
0x1662: Stack[-1] = 0
0x1663: Stack[-5] = Stack[-1]
0x1664: Return(); Pop(4)

0x1665: @@ GetMap(Stack[-1])
0x1666: Pop(0)
0x1667: Stack[-5] = Stack[-1]
0x1668: Return(); Pop(4)

0x1669: Stack[-1] = 0
0x166a: Stack[-2] = 0
0x166b: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x166c: @ GetMainOutdoorScene(Stack[-2])
0x166d: Pop(0)
0x166e: Pop(0); Push((bool) Stack[-2] == 0)
0x166f: IF (Stack[-1] == 0) GOTO 0x1674; Pop(1)

0x1670: Push("Can't find main outdoor scene")
0x1671: @ Trace(Stack[-1])
0x1672: Pop(1)
0x1673: Return(); Pop(8)

0x1674: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x1675: Pop(0)
0x1676: Pop(0); Push((bool) Stack[-1] == 0)
0x1677: IF (Stack[-1] == 0) GOTO 0x167e; Pop(1)

0x1678: Push("Warning: outdoor scene locator ")
0x1679: Pop(1); Push(Stack[-1] + Stack[-11]);
0x167a: Push(" doesnt exist")
0x167b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x167c: @ Trace(Stack[-1])
0x167d: Pop(1)
0x167e: @@ GetMap(Stack[-11])
0x167f: Pop(0)
0x1680: Pop(0); Push((bool) Stack[-11] == 0)
0x1681: IF (Stack[-1] == 0) GOTO 0x1686; Pop(1)

0x1682: Push("Can't find map")
0x1683: @ Trace(Stack[-1])
0x1684: Pop(1)
0x1685: Return(); Pop(8)

0x1686: Push(CvectorIndex(Stack[-4], 0))
0x1687: Push(CvectorIndex(Stack[-5], 2))
0x1688: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x1689: Pop(2)
0x168a: Return(); Pop(8)

0x168b: Stack[-2] = 0
0x168c: PushEmpty(int, int)
0x168d: Push("player")
0x168e: @ GetVariable(Stack[-1], Stack[-2])
0x168f: Pop(1)
0x1690: Push((int) 0)
0x1691: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1692: IF (Stack[-1] == 0) GOTO 0x1696; Pop(1)

0x1693: Stack[-3] = (int) 200001
0x1694: Return(); Pop(2)

0x1695: GOTO 0x169b

0x1696: Push((int) 1)
0x1697: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1698: IF (Stack[-1] == 0) GOTO 0x169b; Pop(1)

0x1699: Stack[-3] = (int) 200002
0x169a: Return(); Pop(2)

0x169b: Stack[-3] = (int) 200003
0x169c: Return(); Pop(2)

0x169d: PushEmpty(object, object)
0x169e: Push("Adding diary entry")
0x169f: @ Trace(Stack[-1])
0x16a0: Pop(1)
0x16a1: Push((int) 71)
0x16a2: Push((int) 1)
0x16a3: Push((int) 12153)
0x16a4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16a5: Pop(3)
0x16a6: PushEmpty(bool, object, int)
0x16a7: Stack[-2] = Stack[-4]
0x16a8: Stack[-1] = (int) 25
0x16a9: Call 0x162c

0x16aa: Pop(3)
0x16ab: Return(); Pop(2)

0x16ac: Stack[-1] = 0
0x16ad: PushEmpty(object, object)
0x16ae: Push("Adding diary entry")
0x16af: @ Trace(Stack[-1])
0x16b0: Pop(1)
0x16b1: Push((int) 70)
0x16b2: Push((int) 1)
0x16b3: Push((int) 12152)
0x16b4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16b5: Pop(3)
0x16b6: PushEmpty(bool, object, int)
0x16b7: Stack[-2] = Stack[-4]
0x16b8: Stack[-1] = (int) 25
0x16b9: Call 0x162c

0x16ba: Pop(3)
0x16bb: Return(); Pop(2)

0x16bc: Stack[-1] = 0
0x16bd: PushEmpty(object, object)
0x16be: Push("Adding diary entry")
0x16bf: @ Trace(Stack[-1])
0x16c0: Pop(1)
0x16c1: Push((int) 162)
0x16c2: Push((int) 1)
0x16c3: Push((int) 15395)
0x16c4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16c5: Pop(3)
0x16c6: PushEmpty(bool, object, int)
0x16c7: Stack[-2] = Stack[-4]
0x16c8: Stack[-1] = (int) 111
0x16c9: Call 0x162c

0x16ca: Pop(3)
0x16cb: Return(); Pop(2)

0x16cc: Stack[-1] = 0
0x16cd: PushEmpty(object, object)
0x16ce: Push("Adding diary entry")
0x16cf: @ Trace(Stack[-1])
0x16d0: Pop(1)
0x16d1: Push((int) 121)
0x16d2: Push((int) 1)
0x16d3: Push((int) 13744)
0x16d4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16d5: Pop(3)
0x16d6: PushEmpty(bool, object, int)
0x16d7: Stack[-2] = Stack[-4]
0x16d8: Stack[-1] = (int) 111
0x16d9: Call 0x162c

0x16da: Pop(3)
0x16db: Return(); Pop(2)

0x16dc: Stack[-1] = 0
0x16dd: PushEmpty(object, object)
0x16de: Push("Adding diary entry")
0x16df: @ Trace(Stack[-1])
0x16e0: Pop(1)
0x16e1: Push((int) 178)
0x16e2: Push((int) 1)
0x16e3: Push((int) 15437)
0x16e4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16e5: Pop(3)
0x16e6: PushEmpty(bool, object, int)
0x16e7: Stack[-2] = Stack[-4]
0x16e8: Stack[-1] = (int) 175
0x16e9: Call 0x162c

0x16ea: Pop(3)
0x16eb: Return(); Pop(2)

0x16ec: Stack[-1] = 0
0x16ed: Push(GlobalVars[1])
0x16ee: Stack[-1] = (bool) 0
0x16ef: GlobalVars[1] = Stack[-1]; Pop(1)
0x16f0: Return(); Pop(0)

0x16f1: PushEmpty()
0x16f2: Push(GlobalVars[1])
0x16f3: Pop(1); Push((bool) Stack[-1] == 0)
0x16f4: IF (Stack[-1] == 0) GOTO 0x16fe; Pop(1)

0x16f5: PushEmpty(int, object)
0x16f6: Stack[-1] = Stack[-3]
0x16f7: Push(-2, 1); TaskCall(2)
0x16f8: Call 0x31

0x16f9: Pop(-2, 1); TaskReturn
0x16fa: Pop(2)
0x16fb: Push(GlobalVars[1])
0x16fc: Stack[-1] = (bool) 1
0x16fd: GlobalVars[1] = Stack[-1]; Pop(1)
0x16fe: PushEmpty(bool, int)
0x16ff: Stack[-1] = (int) 1
0x1700: Call 0x12f4

0x1701: Pop(1)
0x1702: IF (Stack[-1] == 0) GOTO 0x170a; Pop(1)

0x1703: PushEmpty(int, object)
0x1704: Stack[-1] = Stack[-3]
0x1705: Push(-2, 1); TaskCall(6)
0x1706: Call 0x420

0x1707: Pop(-2, 1); TaskReturn
0x1708: Pop(2)
0x1709: Return(); Pop(0)

0x170a: PushEmpty(bool, int)
0x170b: Stack[-1] = (int) 2
0x170c: Call 0x12f4

0x170d: Pop(1)
0x170e: IF (Stack[-1] == 0) GOTO 0x1716; Pop(1)

0x170f: PushEmpty(int, object)
0x1710: Stack[-1] = Stack[-3]
0x1711: Push(-2, 1); TaskCall(10)
0x1712: Call 0xcba

0x1713: Pop(-2, 1); TaskReturn
0x1714: Pop(2)
0x1715: Return(); Pop(0)

0x1716: PushEmpty(bool, int)
0x1717: Stack[-1] = (int) 3
0x1718: Call 0x12f4

0x1719: Pop(1)
0x171a: IF (Stack[-1] == 0) GOTO 0x1722; Pop(1)

0x171b: PushEmpty(int, object)
0x171c: Stack[-1] = Stack[-3]
0x171d: Push(-2, 1); TaskCall(8)
0x171e: Call 0x958

0x171f: Pop(-2, 1); TaskReturn
0x1720: Pop(2)
0x1721: Return(); Pop(0)

0x1722: PushEmpty(bool, int)
0x1723: Stack[-1] = (int) 4
0x1724: Call 0x12f4

0x1725: Pop(1)
0x1726: IF (Stack[-1] == 0) GOTO 0x172e; Pop(1)

0x1727: PushEmpty(int, object)
0x1728: Stack[-1] = Stack[-3]
0x1729: Push(-2, 1); TaskCall(12)
0x172a: Call 0xdbc

0x172b: Pop(-2, 1); TaskReturn
0x172c: Pop(2)
0x172d: Return(); Pop(0)

0x172e: PushEmpty(bool, int)
0x172f: Stack[-1] = (int) 6
0x1730: Call 0x12f4

0x1731: Pop(1)
0x1732: IF (Stack[-1] == 0) GOTO 0x173a; Pop(1)

0x1733: PushEmpty(int, object)
0x1734: Stack[-1] = Stack[-3]
0x1735: Push(-2, 1); TaskCall(4)
0x1736: Call 0x14f

0x1737: Pop(-2, 1); TaskReturn
0x1738: Pop(2)
0x1739: Return(); Pop(0)

0x173a: PushEmpty(bool, int)
0x173b: Stack[-1] = (int) 8
0x173c: Call 0x12f4

0x173d: Pop(1)
0x173e: IF (Stack[-1] == 0) GOTO 0x1746; Pop(1)

0x173f: PushEmpty(int, object)
0x1740: Stack[-1] = Stack[-3]
0x1741: Push(-2, 1); TaskCall(14)
0x1742: Call 0xfb9

0x1743: Pop(-2, 1); TaskReturn
0x1744: Pop(2)
0x1745: Return(); Pop(0)

0x1746: PushEmpty(bool)
0x1747: Call 0x12fa

0x1748: Pop(1)
0x1749: Return(); Pop(0)

