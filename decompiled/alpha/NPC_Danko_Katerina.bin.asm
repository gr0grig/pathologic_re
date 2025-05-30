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
	HasItem
	RemoveItemByType
	No
	ui/NPC_Black.png
	ood1Katerina1
	ood1Katerina2
	ood1Katerina3
	KnowKaterina
	quest_d1_04
	ood1Katerina4
	d1q04KaterinaGotoMishka
	FindMark
	Remove
	d1q04Spi4kaGotoPowderHouse
	d1q04MishkaGotoSpi4ka
	completed
	powder
	playsound
	giveitem
	failed
	KnowZemlja
	KnowZastroiki
	pt_map_mishka
	AddMark
	ShowMap
	ood1Katerina5
	ood1Katerina6
	ood1Katerina7
	ood1Katerina8
	ood1Katerina9
	ood1Katerina10
	pt_map_lara
	KnowRubin
	d5q01
	d5q01KaterinaGotoLara
	d1q01KaterinaUHave1day
	ood6Katerina1
	ood6Katerina2
	d6q01
	d6q01KaterinaGotoLaska
	pt_map_laska
	d6q01KaterinagotoLaskaSelf
	pt_map_katerina
	quest_d6_01
	saburov_klara_remove
	ood6Katerina3
	KnowMishka
	ood3Katerina1
	drapery is given
	drapery
	ood4Katerina1
	d1q01
	d1q04
	d3q01
	d6q01KnowKillerIsKlara
	KnowGeorg
	KnowLaska
	KnowMaria
	KnowOspina
	KnowKapella
	KnowPredictions
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
	GetInvItemByName (2 args)
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
		EVENT_11 Op = 0x20c Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x572 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa74 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbc1 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xdf0 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xee3 Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x1461

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0xfc0

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
0x15: Call 0x1001

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
0x26: Call 0x1465

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0xfb4

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0xfc5

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0x1088

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0x108a

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x13e0

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
0x67: Call 0xffd

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
0x79: Call 0x10a0

0x7a: Pop(2)
0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral"
0x7d: Call 0xb4

0x7e: Pop(1)
0x7f: Push((int) 295)
0x80: @@ SetMessage(Stack[-1])
0x81: Pop(1)
0x82: @@ ClearReplies()
0x83: Pop(0)
0x84: Push((int) 296)
0x85: Push((int) 350)
0x86: Push((int) 347)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: Push((int) 297)
0x8a: Push((int) 350)
0x8b: Push((int) 348)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: Push((int) 298)
0x8f: Push((int) 350)
0x90: Push((int) 349)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: GOTO 0x96

0x94: Return(); Pop(0)

0x95: GOTO 0x74

0x96: PushEmpty(bool)
0x97: Call 0x108c

0x98: Pop(0)
0x99: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9a: @ lshWaitForAnimEnd()
0x9b: Pop(0)
0x9c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xa4

0x9f: PushEmpty(string)
0xa0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa1: Call 0x1001

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
0xb6: Call 0x108c

0xb7: Pop(0)
0xb8: Pop(1); Push((bool) Stack[-1] == 0)
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: Return(); Pop(0)

0xbb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Return(); Pop(0)

0xbe: PushEmpty(string)
0xbf: Stack[-1] = Stack[-2]
0xc0: Call 0x1001

0xc1: Pop(1)
0xc2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: Push((int) 1)
0xc6: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0xc7: PushEmpty()
0xc8: Call 0x1013

0xc9: Pop(0)
0xca: Push((int) 346)
0xcb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call 0x10a0

0xd1: Pop(2)
0xd2: PushEmpty(string)
0xd3: Stack[-1] = "Neutral"
0xd4: Call 0xb4

0xd5: Pop(1)
0xd6: Push((int) 295)
0xd7: @@ SetMessage(Stack[-1])
0xd8: Pop(1)
0xd9: @@ ClearReplies()
0xda: Pop(0)
0xdb: Push((int) 296)
0xdc: Push((int) 350)
0xdd: Push((int) 347)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: Push((int) 297)
0xe1: Push((int) 350)
0xe2: Push((int) 348)
0xe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: Push((int) 298)
0xe6: Push((int) 350)
0xe7: Push((int) 349)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Return(); Pop(0)

0xeb: Push((int) 350)
0xec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xee: PushEmpty(string)
0xef: Stack[-1] = "Neutral"
0xf0: Call 0xb4

0xf1: Pop(1)
0xf2: Push((int) 299)
0xf3: @@ SetMessage(Stack[-1])
0xf4: Pop(1)
0xf5: @@ ClearReplies()
0xf6: Pop(0)
0xf7: Push((int) 300)
0xf8: Push((int) 355)
0xf9: Push((int) 351)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Push((int) 301)
0xfd: Push((int) 358)
0xfe: Push((int) 352)
0xff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100: Pop(3)
0x101: Return(); Pop(0)

0x102: Push((int) 358)
0x103: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x105: PushEmpty(string)
0x106: Stack[-1] = "Neutral"
0x107: Call 0xb4

0x108: Pop(1)
0x109: Push((int) 305)
0x10a: @@ SetMessage(Stack[-1])
0x10b: Pop(1)
0x10c: @@ ClearReplies()
0x10d: Pop(0)
0x10e: Push((int) 306)
0x10f: Push((int) -1)
0x110: Push((int) 359)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Push((int) 307)
0x114: Push((int) -1)
0x115: Push((int) 360)
0x116: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117: Pop(3)
0x118: Return(); Pop(0)

0x119: Push((int) 355)
0x11a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x11c: PushEmpty(string)
0x11d: Stack[-1] = "Neutral"
0x11e: Call 0xb4

0x11f: Pop(1)
0x120: Push((int) 302)
0x121: @@ SetMessage(Stack[-1])
0x122: Pop(1)
0x123: @@ ClearReplies()
0x124: Pop(0)
0x125: Push((int) 304)
0x126: Push((int) -1)
0x127: Push((int) 357)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: Push((int) 303)
0x12b: Push((int) -1)
0x12c: Push((int) 356)
0x12d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(3)
0x12f: Return(); Pop(0)

0x130: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x131: PushEmpty(bool)
0x132: Call 0x108c

0x133: Pop(0)
0x134: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x135: @ lshStopAnimation()
0x136: Pop(0)
0x137: GOTO 0x13a

0x138: @ StopAnimation()
0x139: Pop(0)
0x13a: Return(); Pop(0)

0x13b: GOTO 0xc5

0x13c: Return(); Pop(0)

0x13d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x13e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x13f: PushEmpty(bool, object)
0x140: Stack[-1] = Stack[-11]
0x141: Call 0xfc5

0x142: Pop(1)
0x143: Pop(1); Push((bool) Stack[-1] == 0)
0x144: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x145: Stack[-10] = (int) -2
0x146: Return(); Pop(8)

0x147: @ CreateDialog(Stack[-4])
0x148: Pop(0)
0x149: PushEmpty(int)
0x14a: Call 0x1088

0x14b: Pop(0)
0x14c: @@ SetNPCName(Stack[-1])
0x14d: Pop(1)
0x14e: PushEmpty(string)
0x14f: Call 0x108a

0x150: Pop(0)
0x151: @@ SetPhoto(Stack[-1])
0x152: Pop(1)
0x153: PushEmpty(int)
0x154: Call 0x13e0

0x155: Pop(0)
0x156: @@ SetPlayerName(Stack[-1])
0x157: Pop(1)
0x158: Stack[-2] = (int) -1
0x159: @ IsOverrideActive(Stack[-3])
0x15a: Pop(0)
0x15b: Push(Stack[-3])
0x15c: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15d: Stack[-10] = (int) -2
0x15e: Return(); Pop(8)

0x15f: @ DoDialog(Stack[-4])
0x160: Pop(0)
0x161: PushEmpty(object, object)
0x162: Stack[-2] = Stack[-11]
0x163: Stack[-1] = Stack[-6]
0x164: Push(-2, 4); TaskCall(5)
0x165: Call 0x17c

0x166: Pop(-2, 4); TaskReturn
0x167: Pop(2)
0x168: @@ IsDialogEnd(Stack[-1])
0x169: Pop(0)
0x16a: Pop(0); Push((bool) Stack[-1] == 0)
0x16b: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16c: @ sync()
0x16d: Pop(0)
0x16e: @@ IsDialogEnd(Stack[-1])
0x16f: Pop(0)
0x170: GOTO 0x16a

0x171: PushEmpty(object)
0x172: Stack[-1] = Stack[-10]
0x173: Call 0xffd

0x174: Pop(1)
0x175: @ StopDialog(Stack[-4])
0x176: Pop(0)
0x177: @@ GetReturnValue(Stack[-2])
0x178: Pop(0)
0x179: Stack[-10] = Stack[-2]
0x17a: Return(); Pop(8)

0x17b: Stack[-4] = 0
0x17c: PushEmpty()
0x17d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x17e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x17f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x180: Push((int) 1)
0x181: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x182: PushEmpty(string)
0x183: Stack[-1] = "Neutral"
0x184: Call 0x1fc

0x185: Pop(1)
0x186: Push((int) 12770)
0x187: @@ SetMessage(Stack[-1])
0x188: Pop(1)
0x189: @@ ClearReplies()
0x18a: Pop(0)
0x18b: PushEmpty(bool)
0x18c: Stack[-1] = (bool) 0
0x18d: PushEmpty(bool, object)
0x18e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18f: Call 0x12d4

0x190: Pop(1)
0x191: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x192: PushEmpty(bool, object)
0x193: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x194: Call 0x12bc

0x195: Pop(1)
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: Stack[-1] = (bool) 1
0x198: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x199: Push((int) 12771)
0x19a: Push((int) 3726)
0x19b: Push((int) 13970)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: PushEmpty(bool)
0x19f: Stack[-1] = (bool) 0
0x1a0: PushEmpty(bool, object)
0x1a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a2: Call 0x12e0

0x1a3: Pop(1)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a5: PushEmpty(bool, object)
0x1a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a7: Call 0x12c8

0x1a8: Pop(1)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1aa: Stack[-1] = (bool) 1
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1ac: Push((int) 12772)
0x1ad: Push((int) 13972)
0x1ae: Push((int) 13971)
0x1af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b0: Pop(3)
0x1b1: PushEmpty(bool)
0x1b2: Stack[-1] = (bool) 1
0x1b3: PushEmpty(bool)
0x1b4: Stack[-1] = (bool) 0
0x1b5: PushEmpty(bool, object)
0x1b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b7: Call 0x12ec

0x1b8: Pop(1)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1ba: PushEmpty(bool, object)
0x1bb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bc: Call 0x1304

0x1bd: Pop(1)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bf: Stack[-1] = (bool) 1
0x1c0: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1c1: PushEmpty(bool)
0x1c2: Stack[-1] = (bool) 0
0x1c3: PushEmpty(bool, object)
0x1c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c5: Call 0x12f8

0x1c6: Pop(1)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c8: PushEmpty(bool, object)
0x1c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ca: Call 0x1304

0x1cb: Pop(1)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cd: Stack[-1] = (bool) 1
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cf: Stack[-1] = (bool) 0
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d1: Push((int) 12791)
0x1d2: Push((int) 13991)
0x1d3: Push((int) 13990)
0x1d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d5: Pop(3)
0x1d6: Push((int) 12790)
0x1d7: Push((int) -1)
0x1d8: Push((int) 13989)
0x1d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1da: Pop(3)
0x1db: GOTO 0x1de

0x1dc: Return(); Pop(0)

0x1dd: GOTO 0x180

0x1de: PushEmpty(bool)
0x1df: Call 0x108c

0x1e0: Pop(0)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e2: @ lshWaitForAnimEnd()
0x1e3: Pop(0)
0x1e4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e6: GOTO 0x1ec

0x1e7: PushEmpty(string)
0x1e8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1e9: Call 0x1001

0x1ea: Pop(1)
0x1eb: GOTO 0x1e2

0x1ec: GOTO 0x1fb

0x1ed: Push("all")
0x1ee: Push("idle")
0x1ef: @ PlayAnimation(Stack[-2], Stack[-1])
0x1f0: Pop(2)
0x1f1: @ WaitForAnimEnd()
0x1f2: Pop(0)
0x1f3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f5: GOTO 0x1fb

0x1f6: Push("all")
0x1f7: Push("idle")
0x1f8: @ PlayAnimation(Stack[-2], Stack[-1])
0x1f9: Pop(2)
0x1fa: GOTO 0x1f1

0x1fb: Return(); Pop(0)

0x1fc: PushEmpty()
0x1fd: PushEmpty(bool)
0x1fe: Call 0x108c

0x1ff: Pop(0)
0x200: Pop(1); Push((bool) Stack[-1] == 0)
0x201: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x202: Return(); Pop(0)

0x203: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x204: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x205: Return(); Pop(0)

0x206: PushEmpty(string)
0x207: Stack[-1] = Stack[-2]
0x208: Call 0x1001

0x209: Pop(1)
0x20a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x20b: Return(); Pop(0)

0x20c: PushEmpty()
0x20d: Push((int) 1)
0x20e: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x20f: PushEmpty()
0x210: Call 0x1013

0x211: Pop(0)
0x212: Push((int) 3742)
0x213: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x215: PushEmpty(object, object)
0x216: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x217: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x218: Call 0x11ab

0x219: Pop(2)
0x21a: Push((int) 3745)
0x21b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21d: PushEmpty(object, object)
0x21e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x21f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x220: Call 0x11ab

0x221: Pop(2)
0x222: Push((int) 3746)
0x223: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x224: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x225: PushEmpty(object, object)
0x226: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x227: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x228: Call 0x11ab

0x229: Pop(2)
0x22a: Push((int) 3740)
0x22b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22d: PushEmpty(object, object)
0x22e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x22f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x230: Call 0x11ab

0x231: Pop(2)
0x232: Push((int) 13984)
0x233: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x234: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x235: PushEmpty(object, object)
0x236: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x237: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x238: Call 0x11b1

0x239: Pop(2)
0x23a: PushEmpty(object, object)
0x23b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x23c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23d: Call 0x11b7

0x23e: Pop(2)
0x23f: Push((int) 13988)
0x240: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x242: PushEmpty(object, object)
0x243: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x244: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x245: Call 0x11b1

0x246: Pop(2)
0x247: PushEmpty(object, object)
0x248: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x249: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24a: Call 0x11b7

0x24b: Pop(2)
0x24c: Push((int) 13990)
0x24d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x24f: PushEmpty(object, object)
0x250: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x251: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x252: Call 0x11dc

0x253: Pop(2)
0x254: Push((int) 13969)
0x255: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x257: PushEmpty(string)
0x258: Stack[-1] = "Neutral"
0x259: Call 0x1fc

0x25a: Pop(1)
0x25b: Push((int) 12770)
0x25c: @@ SetMessage(Stack[-1])
0x25d: Pop(1)
0x25e: @@ ClearReplies()
0x25f: Pop(0)
0x260: PushEmpty(bool)
0x261: Stack[-1] = (bool) 0
0x262: PushEmpty(bool, object)
0x263: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x264: Call 0x12d4

0x265: Pop(1)
0x266: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x267: PushEmpty(bool, object)
0x268: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x269: Call 0x12bc

0x26a: Pop(1)
0x26b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26c: Stack[-1] = (bool) 1
0x26d: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x26e: Push((int) 12771)
0x26f: Push((int) 3726)
0x270: Push((int) 13970)
0x271: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x272: Pop(3)
0x273: PushEmpty(bool)
0x274: Stack[-1] = (bool) 0
0x275: PushEmpty(bool, object)
0x276: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x277: Call 0x12e0

0x278: Pop(1)
0x279: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27a: PushEmpty(bool, object)
0x27b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27c: Call 0x12c8

0x27d: Pop(1)
0x27e: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27f: Stack[-1] = (bool) 1
0x280: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x281: Push((int) 12772)
0x282: Push((int) 13972)
0x283: Push((int) 13971)
0x284: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x285: Pop(3)
0x286: PushEmpty(bool)
0x287: Stack[-1] = (bool) 1
0x288: PushEmpty(bool)
0x289: Stack[-1] = (bool) 0
0x28a: PushEmpty(bool, object)
0x28b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28c: Call 0x12ec

0x28d: Pop(1)
0x28e: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x28f: PushEmpty(bool, object)
0x290: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x291: Call 0x1304

0x292: Pop(1)
0x293: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x294: Stack[-1] = (bool) 1
0x295: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x296: PushEmpty(bool)
0x297: Stack[-1] = (bool) 0
0x298: PushEmpty(bool, object)
0x299: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29a: Call 0x12f8

0x29b: Pop(1)
0x29c: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x29d: PushEmpty(bool, object)
0x29e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29f: Call 0x1304

0x2a0: Pop(1)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a2: Stack[-1] = (bool) 1
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a4: Stack[-1] = (bool) 0
0x2a5: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a6: Push((int) 12791)
0x2a7: Push((int) 13991)
0x2a8: Push((int) 13990)
0x2a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2aa: Pop(3)
0x2ab: Push((int) 12790)
0x2ac: Push((int) -1)
0x2ad: Push((int) 13989)
0x2ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2af: Pop(3)
0x2b0: Return(); Pop(0)

0x2b1: Push((int) 13991)
0x2b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b3: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2b4: PushEmpty(string)
0x2b5: Stack[-1] = "Neutral"
0x2b6: Call 0x1fc

0x2b7: Pop(1)
0x2b8: Push((int) 12792)
0x2b9: @@ SetMessage(Stack[-1])
0x2ba: Pop(1)
0x2bb: @@ ClearReplies()
0x2bc: Pop(0)
0x2bd: Push((int) 12793)
0x2be: Push((int) 13993)
0x2bf: Push((int) 13992)
0x2c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c1: Pop(3)
0x2c2: Return(); Pop(0)

0x2c3: Push((int) 13993)
0x2c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c5: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2c6: PushEmpty(string)
0x2c7: Stack[-1] = "Neutral"
0x2c8: Call 0x1fc

0x2c9: Pop(1)
0x2ca: Push((int) 12794)
0x2cb: @@ SetMessage(Stack[-1])
0x2cc: Pop(1)
0x2cd: @@ ClearReplies()
0x2ce: Pop(0)
0x2cf: Push((int) 12795)
0x2d0: Push((int) -1)
0x2d1: Push((int) 13994)
0x2d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d3: Pop(3)
0x2d4: Push((int) 12798)
0x2d5: Push((int) -1)
0x2d6: Push((int) 13997)
0x2d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d8: Pop(3)
0x2d9: Return(); Pop(0)

0x2da: Push((int) 13972)
0x2db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2dd: PushEmpty(string)
0x2de: Stack[-1] = "Neutral"
0x2df: Call 0x1fc

0x2e0: Pop(1)
0x2e1: Push((int) 12773)
0x2e2: @@ SetMessage(Stack[-1])
0x2e3: Pop(1)
0x2e4: @@ ClearReplies()
0x2e5: Pop(0)
0x2e6: Push((int) 12774)
0x2e7: Push((int) 13974)
0x2e8: Push((int) 13973)
0x2e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ea: Pop(3)
0x2eb: Return(); Pop(0)

0x2ec: Push((int) 13974)
0x2ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2ef: PushEmpty(string)
0x2f0: Stack[-1] = "Neutral"
0x2f1: Call 0x1fc

0x2f2: Pop(1)
0x2f3: Push((int) 12775)
0x2f4: @@ SetMessage(Stack[-1])
0x2f5: Pop(1)
0x2f6: @@ ClearReplies()
0x2f7: Pop(0)
0x2f8: Push((int) 12776)
0x2f9: Push((int) 13976)
0x2fa: Push((int) 13975)
0x2fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fc: Pop(3)
0x2fd: Return(); Pop(0)

0x2fe: Push((int) 13976)
0x2ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x301: PushEmpty(string)
0x302: Stack[-1] = "Neutral"
0x303: Call 0x1fc

0x304: Pop(1)
0x305: Push((int) 12777)
0x306: @@ SetMessage(Stack[-1])
0x307: Pop(1)
0x308: @@ ClearReplies()
0x309: Pop(0)
0x30a: Push((int) 12779)
0x30b: Push((int) 13980)
0x30c: Push((int) 13978)
0x30d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30e: Pop(3)
0x30f: Push((int) 12778)
0x310: Push((int) 13979)
0x311: Push((int) 13977)
0x312: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x313: Pop(3)
0x314: Return(); Pop(0)

0x315: Push((int) 13979)
0x316: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x318: PushEmpty(string)
0x319: Stack[-1] = "Neutral"
0x31a: Call 0x1fc

0x31b: Pop(1)
0x31c: Push((int) 12780)
0x31d: @@ SetMessage(Stack[-1])
0x31e: Pop(1)
0x31f: @@ ClearReplies()
0x320: Pop(0)
0x321: Push((int) 13020)
0x322: Push((int) 13983)
0x323: Push((int) 14226)
0x324: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x325: Pop(3)
0x326: Return(); Pop(0)

0x327: Push((int) 13980)
0x328: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x329: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x32a: PushEmpty(string)
0x32b: Stack[-1] = "Neutral"
0x32c: Call 0x1fc

0x32d: Pop(1)
0x32e: Push((int) 12781)
0x32f: @@ SetMessage(Stack[-1])
0x330: Pop(1)
0x331: @@ ClearReplies()
0x332: Pop(0)
0x333: Push((int) 12782)
0x334: Push((int) 13983)
0x335: Push((int) 13981)
0x336: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x337: Pop(3)
0x338: Return(); Pop(0)

0x339: Push((int) 13983)
0x33a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x33c: PushEmpty(string)
0x33d: Stack[-1] = "Neutral"
0x33e: Call 0x1fc

0x33f: Pop(1)
0x340: Push((int) 12784)
0x341: @@ SetMessage(Stack[-1])
0x342: Pop(1)
0x343: @@ ClearReplies()
0x344: Pop(0)
0x345: Push((int) 12785)
0x346: Push((int) -1)
0x347: Push((int) 13984)
0x348: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x349: Pop(3)
0x34a: Push((int) 12783)
0x34b: Push((int) 13985)
0x34c: Push((int) 13982)
0x34d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34e: Pop(3)
0x34f: Return(); Pop(0)

0x350: Push((int) 13985)
0x351: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x353: PushEmpty(string)
0x354: Stack[-1] = "Neutral"
0x355: Call 0x1fc

0x356: Pop(1)
0x357: Push((int) 12786)
0x358: @@ SetMessage(Stack[-1])
0x359: Pop(1)
0x35a: @@ ClearReplies()
0x35b: Pop(0)
0x35c: Push((int) 12787)
0x35d: Push((int) 13987)
0x35e: Push((int) 13986)
0x35f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x360: Pop(3)
0x361: Return(); Pop(0)

0x362: Push((int) 13987)
0x363: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x365: PushEmpty(string)
0x366: Stack[-1] = "Neutral"
0x367: Call 0x1fc

0x368: Pop(1)
0x369: Push((int) 12788)
0x36a: @@ SetMessage(Stack[-1])
0x36b: Pop(1)
0x36c: @@ ClearReplies()
0x36d: Pop(0)
0x36e: Push((int) 12789)
0x36f: Push((int) -1)
0x370: Push((int) 13988)
0x371: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x372: Pop(3)
0x373: Return(); Pop(0)

0x374: Push((int) 3726)
0x375: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x376: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x377: PushEmpty(string)
0x378: Stack[-1] = "Neutral"
0x379: Call 0x1fc

0x37a: Pop(1)
0x37b: Push((int) 3459)
0x37c: @@ SetMessage(Stack[-1])
0x37d: Pop(1)
0x37e: @@ ClearReplies()
0x37f: Pop(0)
0x380: Push((int) 3460)
0x381: Push((int) 3729)
0x382: Push((int) 3727)
0x383: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x384: Pop(3)
0x385: Push((int) 3461)
0x386: Push((int) 3730)
0x387: Push((int) 3728)
0x388: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x389: Pop(3)
0x38a: Return(); Pop(0)

0x38b: Push((int) 3730)
0x38c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x38e: PushEmpty(string)
0x38f: Stack[-1] = "Neutral"
0x390: Call 0x1fc

0x391: Pop(1)
0x392: Push((int) 3463)
0x393: @@ SetMessage(Stack[-1])
0x394: Pop(1)
0x395: @@ ClearReplies()
0x396: Pop(0)
0x397: Push((int) 3464)
0x398: Push((int) 3729)
0x399: Push((int) 3731)
0x39a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39b: Pop(3)
0x39c: Push((int) 3465)
0x39d: Push((int) 3734)
0x39e: Push((int) 3733)
0x39f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a0: Pop(3)
0x3a1: Return(); Pop(0)

0x3a2: Push((int) 3734)
0x3a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3a5: PushEmpty(string)
0x3a6: Stack[-1] = "Neutral"
0x3a7: Call 0x1fc

0x3a8: Pop(1)
0x3a9: Push((int) 3466)
0x3aa: @@ SetMessage(Stack[-1])
0x3ab: Pop(1)
0x3ac: @@ ClearReplies()
0x3ad: Pop(0)
0x3ae: Push((int) 3467)
0x3af: Push((int) 3729)
0x3b0: Push((int) 3735)
0x3b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b2: Pop(3)
0x3b3: Push((int) 3468)
0x3b4: Push((int) 3729)
0x3b5: Push((int) 3736)
0x3b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b7: Pop(3)
0x3b8: Return(); Pop(0)

0x3b9: Push((int) 3729)
0x3ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3bc: PushEmpty(string)
0x3bd: Stack[-1] = "Neutral"
0x3be: Call 0x1fc

0x3bf: Pop(1)
0x3c0: Push((int) 3462)
0x3c1: @@ SetMessage(Stack[-1])
0x3c2: Pop(1)
0x3c3: @@ ClearReplies()
0x3c4: Pop(0)
0x3c5: Push((int) 3469)
0x3c6: Push((int) 3741)
0x3c7: Push((int) 3739)
0x3c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c9: Pop(3)
0x3ca: Push((int) 3470)
0x3cb: Push((int) -1)
0x3cc: Push((int) 3740)
0x3cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ce: Pop(3)
0x3cf: Return(); Pop(0)

0x3d0: Push((int) 3741)
0x3d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d2: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3d3: PushEmpty(string)
0x3d4: Stack[-1] = "Neutral"
0x3d5: Call 0x1fc

0x3d6: Pop(1)
0x3d7: Push((int) 3471)
0x3d8: @@ SetMessage(Stack[-1])
0x3d9: Pop(1)
0x3da: @@ ClearReplies()
0x3db: Pop(0)
0x3dc: Push((int) 3472)
0x3dd: Push((int) -1)
0x3de: Push((int) 3742)
0x3df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e0: Pop(3)
0x3e1: Push((int) 3473)
0x3e2: Push((int) 3744)
0x3e3: Push((int) 3743)
0x3e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e5: Pop(3)
0x3e6: Return(); Pop(0)

0x3e7: Push((int) 3744)
0x3e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e9: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3ea: PushEmpty(string)
0x3eb: Stack[-1] = "Neutral"
0x3ec: Call 0x1fc

0x3ed: Pop(1)
0x3ee: Push((int) 3474)
0x3ef: @@ SetMessage(Stack[-1])
0x3f0: Pop(1)
0x3f1: @@ ClearReplies()
0x3f2: Pop(0)
0x3f3: Push((int) 3475)
0x3f4: Push((int) -1)
0x3f5: Push((int) 3745)
0x3f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f7: Pop(3)
0x3f8: Push((int) 3476)
0x3f9: Push((int) -1)
0x3fa: Push((int) 3746)
0x3fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fc: Pop(3)
0x3fd: Return(); Pop(0)

0x3fe: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3ff: PushEmpty(bool)
0x400: Call 0x108c

0x401: Pop(0)
0x402: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x403: @ lshStopAnimation()
0x404: Pop(0)
0x405: GOTO 0x408

0x406: @ StopAnimation()
0x407: Pop(0)
0x408: Return(); Pop(0)

0x409: GOTO 0x20d

0x40a: Return(); Pop(0)

0x40b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x40c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x40d: PushEmpty(bool, object)
0x40e: Stack[-1] = Stack[-11]
0x40f: Call 0xfc5

0x410: Pop(1)
0x411: Pop(1); Push((bool) Stack[-1] == 0)
0x412: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x413: Stack[-10] = (int) -2
0x414: Return(); Pop(8)

0x415: @ CreateDialog(Stack[-4])
0x416: Pop(0)
0x417: PushEmpty(int)
0x418: Call 0x1088

0x419: Pop(0)
0x41a: @@ SetNPCName(Stack[-1])
0x41b: Pop(1)
0x41c: PushEmpty(string)
0x41d: Call 0x108a

0x41e: Pop(0)
0x41f: @@ SetPhoto(Stack[-1])
0x420: Pop(1)
0x421: PushEmpty(int)
0x422: Call 0x13e0

0x423: Pop(0)
0x424: @@ SetPlayerName(Stack[-1])
0x425: Pop(1)
0x426: Stack[-2] = (int) -1
0x427: @ IsOverrideActive(Stack[-3])
0x428: Pop(0)
0x429: Push(Stack[-3])
0x42a: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42b: Stack[-10] = (int) -2
0x42c: Return(); Pop(8)

0x42d: @ DoDialog(Stack[-4])
0x42e: Pop(0)
0x42f: PushEmpty(object, object)
0x430: Stack[-2] = Stack[-11]
0x431: Stack[-1] = Stack[-6]
0x432: Push(-2, 4); TaskCall(7)
0x433: Call 0x44a

0x434: Pop(-2, 4); TaskReturn
0x435: Pop(2)
0x436: @@ IsDialogEnd(Stack[-1])
0x437: Pop(0)
0x438: Pop(0); Push((bool) Stack[-1] == 0)
0x439: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43a: @ sync()
0x43b: Pop(0)
0x43c: @@ IsDialogEnd(Stack[-1])
0x43d: Pop(0)
0x43e: GOTO 0x438

0x43f: PushEmpty(object)
0x440: Stack[-1] = Stack[-10]
0x441: Call 0xffd

0x442: Pop(1)
0x443: @ StopDialog(Stack[-4])
0x444: Pop(0)
0x445: @@ GetReturnValue(Stack[-2])
0x446: Pop(0)
0x447: Stack[-10] = Stack[-2]
0x448: Return(); Pop(8)

0x449: Stack[-4] = 0
0x44a: PushEmpty()
0x44b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x44c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x44d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x44e: Push((int) 1)
0x44f: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x450: PushEmpty(bool)
0x451: Stack[-1] = (bool) 0
0x452: PushEmpty(bool, object)
0x453: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x454: Call 0x11ff

0x455: Pop(1)
0x456: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x457: PushEmpty(bool, object)
0x458: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x459: Call 0x1223

0x45a: Pop(1)
0x45b: Pop(1); Push((bool) Stack[-1] == 0)
0x45c: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x45d: Stack[-1] = (bool) 1
0x45e: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x45f: PushEmpty(string)
0x460: Stack[-1] = "Neutral"
0x461: Call 0x562

0x462: Pop(1)
0x463: Push((int) 5491)
0x464: @@ SetMessage(Stack[-1])
0x465: Pop(1)
0x466: @@ ClearReplies()
0x467: Pop(0)
0x468: Push((int) 5492)
0x469: Push((int) 6052)
0x46a: Push((int) 6051)
0x46b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46c: Pop(3)
0x46d: Push((int) 5505)
0x46e: Push((int) 6052)
0x46f: Push((int) 6066)
0x470: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x471: Pop(3)
0x472: GOTO 0x544

0x473: PushEmpty(bool, object)
0x474: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x475: Call 0x120b

0x476: Pop(1)
0x477: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x478: PushEmpty(string)
0x479: Stack[-1] = "Neutral"
0x47a: Call 0x562

0x47b: Pop(1)
0x47c: Push((int) 5486)
0x47d: @@ SetMessage(Stack[-1])
0x47e: Pop(1)
0x47f: @@ ClearReplies()
0x480: Pop(0)
0x481: Push((int) 5522)
0x482: Push((int) 6719)
0x483: Push((int) 6086)
0x484: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x485: Pop(3)
0x486: Push((int) 6083)
0x487: Push((int) 6719)
0x488: Push((int) 6713)
0x489: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48a: Pop(3)
0x48b: Push((int) 5488)
0x48c: Push((int) 6714)
0x48d: Push((int) 6047)
0x48e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48f: Pop(3)
0x490: GOTO 0x544

0x491: PushEmpty(string)
0x492: Stack[-1] = "Neutral"
0x493: Call 0x562

0x494: Pop(1)
0x495: Push((int) 5521)
0x496: @@ SetMessage(Stack[-1])
0x497: Pop(1)
0x498: @@ ClearReplies()
0x499: Pop(0)
0x49a: PushEmpty(bool)
0x49b: Stack[-1] = (bool) 0
0x49c: PushEmpty(bool, object)
0x49d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x49e: Call 0x1217

0x49f: Pop(1)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a1: PushEmpty(bool, object)
0x4a2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a3: Call 0x1364

0x4a4: Pop(1)
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a6: Stack[-1] = (bool) 1
0x4a7: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4a8: Push((int) 9151)
0x4a9: Push((int) 6068)
0x4aa: Push((int) 10032)
0x4ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ac: Pop(3)
0x4ad: PushEmpty(bool)
0x4ae: Stack[-1] = (bool) 0
0x4af: PushEmpty(bool)
0x4b0: Stack[-1] = (bool) 0
0x4b1: PushEmpty(bool, object)
0x4b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b3: Call 0x123b

0x4b4: Pop(1)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4b6: PushEmpty(bool, object)
0x4b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b8: Call 0x122f

0x4b9: Pop(1)
0x4ba: Pop(1); Push((bool) Stack[-1] == 0)
0x4bb: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4bc: Stack[-1] = (bool) 1
0x4bd: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4be: PushEmpty(bool, object)
0x4bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c0: Call 0x1247

0x4c1: Pop(1)
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c3: Stack[-1] = (bool) 1
0x4c4: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c5: Push((int) 6292)
0x4c6: Push((int) 6945)
0x4c7: Push((int) 6944)
0x4c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c9: Pop(3)
0x4ca: PushEmpty(bool)
0x4cb: Stack[-1] = (bool) 0
0x4cc: PushEmpty(bool, object)
0x4cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ce: Call 0x122f

0x4cf: Pop(1)
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d1: PushEmpty(bool, object)
0x4d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d3: Call 0x125c

0x4d4: Pop(1)
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d6: Stack[-1] = (bool) 1
0x4d7: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4d8: Push((int) 6111)
0x4d9: Push((int) 10029)
0x4da: Push((int) 6748)
0x4db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4dc: Pop(3)
0x4dd: PushEmpty(bool)
0x4de: Stack[-1] = (bool) 0
0x4df: PushEmpty(bool, object)
0x4e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e1: Call 0x134c

0x4e2: Pop(1)
0x4e3: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e4: PushEmpty(bool, object)
0x4e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e6: Call 0x1268

0x4e7: Pop(1)
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e9: Stack[-1] = (bool) 1
0x4ea: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4eb: Push((int) 8011)
0x4ec: Push((int) 8851)
0x4ed: Push((int) 8834)
0x4ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ef: Pop(3)
0x4f0: PushEmpty(bool)
0x4f1: Stack[-1] = (bool) 0
0x4f2: PushEmpty(bool, object)
0x4f3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f4: Call 0x1328

0x4f5: Pop(1)
0x4f6: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4f7: PushEmpty(bool, object)
0x4f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f9: Call 0x1274

0x4fa: Pop(1)
0x4fb: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4fc: Stack[-1] = (bool) 1
0x4fd: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x4fe: Push((int) 8012)
0x4ff: Push((int) 8852)
0x500: Push((int) 8835)
0x501: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x502: Pop(3)
0x503: PushEmpty(bool)
0x504: Stack[-1] = (bool) 0
0x505: PushEmpty(bool, object)
0x506: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x507: Call 0x1358

0x508: Pop(1)
0x509: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50a: PushEmpty(bool, object)
0x50b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x50c: Call 0x1280

0x50d: Pop(1)
0x50e: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50f: Stack[-1] = (bool) 1
0x510: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x511: Push((int) 8023)
0x512: Push((int) 8856)
0x513: Push((int) 8846)
0x514: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x515: Pop(3)
0x516: PushEmpty(bool)
0x517: Stack[-1] = (bool) 0
0x518: PushEmpty(bool, object)
0x519: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x51a: Call 0x131c

0x51b: Pop(1)
0x51c: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x51d: PushEmpty(bool, object)
0x51e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x51f: Call 0x128c

0x520: Pop(1)
0x521: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x522: Stack[-1] = (bool) 1
0x523: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x524: Push((int) 8024)
0x525: Push((int) 8855)
0x526: Push((int) 8847)
0x527: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x528: Pop(3)
0x529: PushEmpty(bool)
0x52a: Stack[-1] = (bool) 0
0x52b: PushEmpty(bool, object)
0x52c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52d: Call 0x1310

0x52e: Pop(1)
0x52f: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x530: PushEmpty(bool, object)
0x531: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x532: Call 0x1298

0x533: Pop(1)
0x534: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x535: Stack[-1] = (bool) 1
0x536: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x537: Push((int) 8030)
0x538: Push((int) 8854)
0x539: Push((int) 8853)
0x53a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53b: Pop(3)
0x53c: Push((int) 8716)
0x53d: Push((int) -1)
0x53e: Push((int) 9553)
0x53f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x540: Pop(3)
0x541: GOTO 0x544

0x542: Return(); Pop(0)

0x543: GOTO 0x44e

0x544: PushEmpty(bool)
0x545: Call 0x108c

0x546: Pop(0)
0x547: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x548: @ lshWaitForAnimEnd()
0x549: Pop(0)
0x54a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x54b: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x54c: GOTO 0x552

0x54d: PushEmpty(string)
0x54e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x54f: Call 0x1001

0x550: Pop(1)
0x551: GOTO 0x548

0x552: GOTO 0x561

0x553: Push("all")
0x554: Push("idle")
0x555: @ PlayAnimation(Stack[-2], Stack[-1])
0x556: Pop(2)
0x557: @ WaitForAnimEnd()
0x558: Pop(0)
0x559: Push( Stack[3 + Tasks[-1].StackPointer] )
0x55a: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x55b: GOTO 0x561

0x55c: Push("all")
0x55d: Push("idle")
0x55e: @ PlayAnimation(Stack[-2], Stack[-1])
0x55f: Pop(2)
0x560: GOTO 0x557

0x561: Return(); Pop(0)

0x562: PushEmpty()
0x563: PushEmpty(bool)
0x564: Call 0x108c

0x565: Pop(0)
0x566: Pop(1); Push((bool) Stack[-1] == 0)
0x567: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x568: Return(); Pop(0)

0x569: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x56a: IF (Stack[-1] == 0) GOTO 0x56c; Pop(1)

0x56b: Return(); Pop(0)

0x56c: PushEmpty(string)
0x56d: Stack[-1] = Stack[-2]
0x56e: Call 0x1001

0x56f: Pop(1)
0x570: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x571: Return(); Pop(0)

0x572: PushEmpty()
0x573: Push((int) 1)
0x574: IF (Stack[-1] == 0) GOTO 0x9cc; Pop(1)

0x575: PushEmpty()
0x576: Call 0x1013

0x577: Pop(0)
0x578: Push((int) 6059)
0x579: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x57a: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x57b: PushEmpty(object, object)
0x57c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x57e: Call 0x108e

0x57f: Pop(2)
0x580: PushEmpty(object, object)
0x581: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x582: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x583: Call 0x11a2

0x584: Pop(2)
0x585: Push((int) 6060)
0x586: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x587: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x588: PushEmpty(object, object)
0x589: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x58a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58b: Call 0x108e

0x58c: Pop(2)
0x58d: PushEmpty(object, object)
0x58e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x58f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x590: Call 0x11a2

0x591: Pop(2)
0x592: Push((int) 6061)
0x593: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x594: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x595: PushEmpty(object, object)
0x596: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x597: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x598: Call 0x108e

0x599: Pop(2)
0x59a: PushEmpty(object, object)
0x59b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x59c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x59d: Call 0x11a2

0x59e: Pop(2)
0x59f: Push((int) 6089)
0x5a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a1: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5a2: PushEmpty(object, object)
0x5a3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a5: Call 0x108e

0x5a6: Pop(2)
0x5a7: PushEmpty(object, object)
0x5a8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5a9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5aa: Call 0x11a2

0x5ab: Pop(2)
0x5ac: Push((int) 6746)
0x5ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ae: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5af: PushEmpty(object, object)
0x5b0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5b1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5b2: Call 0x1094

0x5b3: Pop(2)
0x5b4: PushEmpty(object, object)
0x5b5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5b6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5b7: Call 0x10a6

0x5b8: Pop(2)
0x5b9: PushEmpty(object, object)
0x5ba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5bc: Call 0x1131

0x5bd: Pop(2)
0x5be: PushEmpty(object, object)
0x5bf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c1: Call 0x1141

0x5c2: Pop(2)
0x5c3: Push((int) 6747)
0x5c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c5: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5c6: PushEmpty(object, object)
0x5c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c9: Call 0x1094

0x5ca: Pop(2)
0x5cb: PushEmpty(object, object)
0x5cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ce: Call 0x10a6

0x5cf: Pop(2)
0x5d0: PushEmpty(object, object)
0x5d1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d3: Call 0x1131

0x5d4: Pop(2)
0x5d5: Push((int) 6744)
0x5d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d7: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5d8: PushEmpty(object, object)
0x5d9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5db: Call 0x1094

0x5dc: Pop(2)
0x5dd: Push((int) 6073)
0x5de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5df: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5e0: PushEmpty(object, object)
0x5e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5e3: Call 0x109a

0x5e4: Pop(2)
0x5e5: Push((int) 6074)
0x5e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e7: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5e8: PushEmpty(object, object)
0x5e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5eb: Call 0x109a

0x5ec: Pop(2)
0x5ed: Push((int) 6075)
0x5ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5f0: PushEmpty(object, object)
0x5f1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f3: Call 0x109a

0x5f4: Pop(2)
0x5f5: Push((int) 6084)
0x5f6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5f8: PushEmpty(object, object)
0x5f9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5fa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5fb: Call 0x109a

0x5fc: Pop(2)
0x5fd: Push((int) 6048)
0x5fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ff: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x600: PushEmpty(object, object)
0x601: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x602: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x603: Call 0x10b8

0x604: Pop(2)
0x605: PushEmpty(object, object)
0x606: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x607: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x608: Call 0x10b2

0x609: Pop(2)
0x60a: Push((int) 6946)
0x60b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x60c: IF (Stack[-1] == 0) GOTO 0x617; Pop(1)

0x60d: PushEmpty(object, object)
0x60e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x60f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x610: Call 0x10f4

0x611: Pop(2)
0x612: PushEmpty(object, object)
0x613: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x614: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x615: Call 0x10b2

0x616: Pop(2)
0x617: Push((int) 10030)
0x618: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x619: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x61a: PushEmpty(object, object)
0x61b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x61c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x61d: Call 0x1131

0x61e: Pop(2)
0x61f: PushEmpty(object, object)
0x620: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x621: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x622: Call 0x10a6

0x623: Pop(2)
0x624: PushEmpty(object, object)
0x625: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x626: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x627: Call 0x1151

0x628: Pop(2)
0x629: Push((int) 10031)
0x62a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x62b: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x62c: PushEmpty(object, object)
0x62d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x62e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x62f: Call 0x1131

0x630: Pop(2)
0x631: PushEmpty(object, object)
0x632: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x633: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x634: Call 0x1141

0x635: Pop(2)
0x636: PushEmpty(object, object)
0x637: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x638: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x639: Call 0x10a6

0x63a: Pop(2)
0x63b: PushEmpty(object, object)
0x63c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x63d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x63e: Call 0x1151

0x63f: Pop(2)
0x640: Push((int) 9548)
0x641: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x642: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x643: PushEmpty(object, object)
0x644: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x645: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x646: Call 0x1157

0x647: Pop(2)
0x648: Push((int) 9549)
0x649: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x64a: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64b: PushEmpty(object, object)
0x64c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x64d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x64e: Call 0x115d

0x64f: Pop(2)
0x650: Push((int) 9550)
0x651: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x652: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x653: PushEmpty(object, object)
0x654: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x655: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x656: Call 0x1163

0x657: Pop(2)
0x658: Push((int) 9551)
0x659: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x65a: IF (Stack[-1] == 0) GOTO 0x660; Pop(1)

0x65b: PushEmpty(object, object)
0x65c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x65d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x65e: Call 0x1169

0x65f: Pop(2)
0x660: Push((int) 9552)
0x661: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x662: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x663: PushEmpty(object, object)
0x664: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x665: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x666: Call 0x116f

0x667: Pop(2)
0x668: Push((int) 6050)
0x669: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x66a: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x66b: PushEmpty(bool)
0x66c: Stack[-1] = (bool) 0
0x66d: PushEmpty(bool, object)
0x66e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66f: Call 0x11ff

0x670: Pop(1)
0x671: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x672: PushEmpty(bool, object)
0x673: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x674: Call 0x1223

0x675: Pop(1)
0x676: Pop(1); Push((bool) Stack[-1] == 0)
0x677: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x678: Stack[-1] = (bool) 1
0x679: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x67a: PushEmpty(string)
0x67b: Stack[-1] = "Neutral"
0x67c: Call 0x562

0x67d: Pop(1)
0x67e: Push((int) 5491)
0x67f: @@ SetMessage(Stack[-1])
0x680: Pop(1)
0x681: @@ ClearReplies()
0x682: Pop(0)
0x683: Push((int) 5492)
0x684: Push((int) 6052)
0x685: Push((int) 6051)
0x686: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x687: Pop(3)
0x688: Push((int) 5505)
0x689: Push((int) 6052)
0x68a: Push((int) 6066)
0x68b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68c: Pop(3)
0x68d: Return(); Pop(0)

0x68e: PushEmpty(bool, object)
0x68f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x690: Call 0x120b

0x691: Pop(1)
0x692: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x693: PushEmpty(string)
0x694: Stack[-1] = "Neutral"
0x695: Call 0x562

0x696: Pop(1)
0x697: Push((int) 5486)
0x698: @@ SetMessage(Stack[-1])
0x699: Pop(1)
0x69a: @@ ClearReplies()
0x69b: Pop(0)
0x69c: Push((int) 5522)
0x69d: Push((int) 6719)
0x69e: Push((int) 6086)
0x69f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a0: Pop(3)
0x6a1: Push((int) 6083)
0x6a2: Push((int) 6719)
0x6a3: Push((int) 6713)
0x6a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a5: Pop(3)
0x6a6: Push((int) 5488)
0x6a7: Push((int) 6714)
0x6a8: Push((int) 6047)
0x6a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6aa: Pop(3)
0x6ab: Return(); Pop(0)

0x6ac: PushEmpty(string)
0x6ad: Stack[-1] = "Neutral"
0x6ae: Call 0x562

0x6af: Pop(1)
0x6b0: Push((int) 5521)
0x6b1: @@ SetMessage(Stack[-1])
0x6b2: Pop(1)
0x6b3: @@ ClearReplies()
0x6b4: Pop(0)
0x6b5: PushEmpty(bool)
0x6b6: Stack[-1] = (bool) 0
0x6b7: PushEmpty(bool, object)
0x6b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b9: Call 0x1217

0x6ba: Pop(1)
0x6bb: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6bc: PushEmpty(bool, object)
0x6bd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6be: Call 0x1364

0x6bf: Pop(1)
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6c1: Stack[-1] = (bool) 1
0x6c2: IF (Stack[-1] == 0) GOTO 0x6c8; Pop(1)

0x6c3: Push((int) 9151)
0x6c4: Push((int) 6068)
0x6c5: Push((int) 10032)
0x6c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c7: Pop(3)
0x6c8: PushEmpty(bool)
0x6c9: Stack[-1] = (bool) 0
0x6ca: PushEmpty(bool)
0x6cb: Stack[-1] = (bool) 0
0x6cc: PushEmpty(bool, object)
0x6cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6ce: Call 0x123b

0x6cf: Pop(1)
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6d1: PushEmpty(bool, object)
0x6d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d3: Call 0x122f

0x6d4: Pop(1)
0x6d5: Pop(1); Push((bool) Stack[-1] == 0)
0x6d6: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6d7: Stack[-1] = (bool) 1
0x6d8: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6d9: PushEmpty(bool, object)
0x6da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6db: Call 0x1247

0x6dc: Pop(1)
0x6dd: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6de: Stack[-1] = (bool) 1
0x6df: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6e0: Push((int) 6292)
0x6e1: Push((int) 6945)
0x6e2: Push((int) 6944)
0x6e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e4: Pop(3)
0x6e5: PushEmpty(bool)
0x6e6: Stack[-1] = (bool) 0
0x6e7: PushEmpty(bool, object)
0x6e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e9: Call 0x122f

0x6ea: Pop(1)
0x6eb: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6ec: PushEmpty(bool, object)
0x6ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6ee: Call 0x125c

0x6ef: Pop(1)
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6f1: Stack[-1] = (bool) 1
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f3: Push((int) 6111)
0x6f4: Push((int) 10029)
0x6f5: Push((int) 6748)
0x6f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f7: Pop(3)
0x6f8: PushEmpty(bool)
0x6f9: Stack[-1] = (bool) 0
0x6fa: PushEmpty(bool, object)
0x6fb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6fc: Call 0x134c

0x6fd: Pop(1)
0x6fe: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x6ff: PushEmpty(bool, object)
0x700: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x701: Call 0x1268

0x702: Pop(1)
0x703: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x704: Stack[-1] = (bool) 1
0x705: IF (Stack[-1] == 0) GOTO 0x70b; Pop(1)

0x706: Push((int) 8011)
0x707: Push((int) 8851)
0x708: Push((int) 8834)
0x709: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70a: Pop(3)
0x70b: PushEmpty(bool)
0x70c: Stack[-1] = (bool) 0
0x70d: PushEmpty(bool, object)
0x70e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x70f: Call 0x1328

0x710: Pop(1)
0x711: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x712: PushEmpty(bool, object)
0x713: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x714: Call 0x1274

0x715: Pop(1)
0x716: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x717: Stack[-1] = (bool) 1
0x718: IF (Stack[-1] == 0) GOTO 0x71e; Pop(1)

0x719: Push((int) 8012)
0x71a: Push((int) 8852)
0x71b: Push((int) 8835)
0x71c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71d: Pop(3)
0x71e: PushEmpty(bool)
0x71f: Stack[-1] = (bool) 0
0x720: PushEmpty(bool, object)
0x721: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x722: Call 0x1358

0x723: Pop(1)
0x724: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x725: PushEmpty(bool, object)
0x726: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x727: Call 0x1280

0x728: Pop(1)
0x729: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x72a: Stack[-1] = (bool) 1
0x72b: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x72c: Push((int) 8023)
0x72d: Push((int) 8856)
0x72e: Push((int) 8846)
0x72f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x730: Pop(3)
0x731: PushEmpty(bool)
0x732: Stack[-1] = (bool) 0
0x733: PushEmpty(bool, object)
0x734: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x735: Call 0x131c

0x736: Pop(1)
0x737: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x738: PushEmpty(bool, object)
0x739: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73a: Call 0x128c

0x73b: Pop(1)
0x73c: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x73d: Stack[-1] = (bool) 1
0x73e: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x73f: Push((int) 8024)
0x740: Push((int) 8855)
0x741: Push((int) 8847)
0x742: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x743: Pop(3)
0x744: PushEmpty(bool)
0x745: Stack[-1] = (bool) 0
0x746: PushEmpty(bool, object)
0x747: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x748: Call 0x1310

0x749: Pop(1)
0x74a: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x74b: PushEmpty(bool, object)
0x74c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74d: Call 0x1298

0x74e: Pop(1)
0x74f: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x750: Stack[-1] = (bool) 1
0x751: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x752: Push((int) 8030)
0x753: Push((int) 8854)
0x754: Push((int) 8853)
0x755: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x756: Pop(3)
0x757: Push((int) 8716)
0x758: Push((int) -1)
0x759: Push((int) 9553)
0x75a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75b: Pop(3)
0x75c: Return(); Pop(0)

0x75d: Push((int) 8854)
0x75e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x75f: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x760: PushEmpty(string)
0x761: Stack[-1] = "Neutral"
0x762: Call 0x562

0x763: Pop(1)
0x764: Push((int) 8031)
0x765: @@ SetMessage(Stack[-1])
0x766: Pop(1)
0x767: @@ ClearReplies()
0x768: Pop(0)
0x769: Push((int) 8715)
0x76a: Push((int) -1)
0x76b: Push((int) 9552)
0x76c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76d: Pop(3)
0x76e: Return(); Pop(0)

0x76f: Push((int) 8855)
0x770: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x771: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x772: PushEmpty(string)
0x773: Stack[-1] = "Neutral"
0x774: Call 0x562

0x775: Pop(1)
0x776: Push((int) 8032)
0x777: @@ SetMessage(Stack[-1])
0x778: Pop(1)
0x779: @@ ClearReplies()
0x77a: Pop(0)
0x77b: Push((int) 8714)
0x77c: Push((int) -1)
0x77d: Push((int) 9551)
0x77e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77f: Pop(3)
0x780: Return(); Pop(0)

0x781: Push((int) 8856)
0x782: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x783: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x784: PushEmpty(string)
0x785: Stack[-1] = "Neutral"
0x786: Call 0x562

0x787: Pop(1)
0x788: Push((int) 8033)
0x789: @@ SetMessage(Stack[-1])
0x78a: Pop(1)
0x78b: @@ ClearReplies()
0x78c: Pop(0)
0x78d: Push((int) 8713)
0x78e: Push((int) -1)
0x78f: Push((int) 9550)
0x790: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x791: Pop(3)
0x792: Return(); Pop(0)

0x793: Push((int) 8852)
0x794: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x795: IF (Stack[-1] == 0) GOTO 0x7a5; Pop(1)

0x796: PushEmpty(string)
0x797: Stack[-1] = "Neutral"
0x798: Call 0x562

0x799: Pop(1)
0x79a: Push((int) 8029)
0x79b: @@ SetMessage(Stack[-1])
0x79c: Pop(1)
0x79d: @@ ClearReplies()
0x79e: Pop(0)
0x79f: Push((int) 8712)
0x7a0: Push((int) -1)
0x7a1: Push((int) 9549)
0x7a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a3: Pop(3)
0x7a4: Return(); Pop(0)

0x7a5: Push((int) 8851)
0x7a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a7: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7a8: PushEmpty(string)
0x7a9: Stack[-1] = "Neutral"
0x7aa: Call 0x562

0x7ab: Pop(1)
0x7ac: Push((int) 8028)
0x7ad: @@ SetMessage(Stack[-1])
0x7ae: Pop(1)
0x7af: @@ ClearReplies()
0x7b0: Pop(0)
0x7b1: Push((int) 8711)
0x7b2: Push((int) -1)
0x7b3: Push((int) 9548)
0x7b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b5: Pop(3)
0x7b6: Return(); Pop(0)

0x7b7: Push((int) 10029)
0x7b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b9: IF (Stack[-1] == 0) GOTO 0x7ce; Pop(1)

0x7ba: PushEmpty(string)
0x7bb: Stack[-1] = "Neutral"
0x7bc: Call 0x562

0x7bd: Pop(1)
0x7be: Push((int) 9148)
0x7bf: @@ SetMessage(Stack[-1])
0x7c0: Pop(1)
0x7c1: @@ ClearReplies()
0x7c2: Pop(0)
0x7c3: Push((int) 9149)
0x7c4: Push((int) -1)
0x7c5: Push((int) 10030)
0x7c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c7: Pop(3)
0x7c8: Push((int) 9150)
0x7c9: Push((int) -1)
0x7ca: Push((int) 10031)
0x7cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cc: Pop(3)
0x7cd: Return(); Pop(0)

0x7ce: Push((int) 6945)
0x7cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d0: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7d1: PushEmpty(string)
0x7d2: Stack[-1] = "Neutral"
0x7d3: Call 0x562

0x7d4: Pop(1)
0x7d5: Push((int) 6293)
0x7d6: @@ SetMessage(Stack[-1])
0x7d7: Pop(1)
0x7d8: @@ ClearReplies()
0x7d9: Pop(0)
0x7da: Push((int) 5489)
0x7db: Push((int) -1)
0x7dc: Push((int) 6048)
0x7dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7de: Pop(3)
0x7df: Push((int) 6294)
0x7e0: Push((int) -1)
0x7e1: Push((int) 6946)
0x7e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e3: Pop(3)
0x7e4: Return(); Pop(0)

0x7e5: Push((int) 6068)
0x7e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e7: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7e8: PushEmpty(string)
0x7e9: Stack[-1] = "Neutral"
0x7ea: Call 0x562

0x7eb: Pop(1)
0x7ec: Push((int) 5506)
0x7ed: @@ SetMessage(Stack[-1])
0x7ee: Pop(1)
0x7ef: @@ ClearReplies()
0x7f0: Pop(0)
0x7f1: PushEmpty(bool, object)
0x7f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f3: Call 0x1364

0x7f4: Pop(1)
0x7f5: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7f6: Push((int) 5507)
0x7f7: Push((int) 6070)
0x7f8: Push((int) 6069)
0x7f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fa: Pop(3)
0x7fb: Push((int) 5520)
0x7fc: Push((int) -1)
0x7fd: Push((int) 6084)
0x7fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ff: Pop(3)
0x800: Return(); Pop(0)

0x801: Push((int) 6070)
0x802: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x803: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x804: PushEmpty(string)
0x805: Stack[-1] = "Neutral"
0x806: Call 0x562

0x807: Pop(1)
0x808: Push((int) 5508)
0x809: @@ SetMessage(Stack[-1])
0x80a: Pop(1)
0x80b: @@ ClearReplies()
0x80c: Pop(0)
0x80d: Push((int) 5509)
0x80e: Push((int) 6072)
0x80f: Push((int) 6071)
0x810: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x811: Pop(3)
0x812: Push((int) 5514)
0x813: Push((int) 6077)
0x814: Push((int) 6076)
0x815: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x816: Pop(3)
0x817: Return(); Pop(0)

0x818: Push((int) 6077)
0x819: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81a: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x81b: PushEmpty(string)
0x81c: Stack[-1] = "Neutral"
0x81d: Call 0x562

0x81e: Pop(1)
0x81f: Push((int) 5515)
0x820: @@ SetMessage(Stack[-1])
0x821: Pop(1)
0x822: @@ ClearReplies()
0x823: Pop(0)
0x824: Push((int) 5516)
0x825: Push((int) 6079)
0x826: Push((int) 6078)
0x827: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x828: Pop(3)
0x829: Return(); Pop(0)

0x82a: Push((int) 6079)
0x82b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82c: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x82d: PushEmpty(string)
0x82e: Stack[-1] = "Neutral"
0x82f: Call 0x562

0x830: Pop(1)
0x831: Push((int) 5517)
0x832: @@ SetMessage(Stack[-1])
0x833: Pop(1)
0x834: @@ ClearReplies()
0x835: Pop(0)
0x836: Push((int) 5518)
0x837: Push((int) 6072)
0x838: Push((int) 6080)
0x839: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83a: Pop(3)
0x83b: Push((int) 5519)
0x83c: Push((int) 6072)
0x83d: Push((int) 6082)
0x83e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83f: Pop(3)
0x840: Return(); Pop(0)

0x841: Push((int) 6072)
0x842: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x843: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x844: PushEmpty(string)
0x845: Stack[-1] = "Neutral"
0x846: Call 0x562

0x847: Pop(1)
0x848: Push((int) 5510)
0x849: @@ SetMessage(Stack[-1])
0x84a: Pop(1)
0x84b: @@ ClearReplies()
0x84c: Pop(0)
0x84d: Push((int) 5511)
0x84e: Push((int) -1)
0x84f: Push((int) 6073)
0x850: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x851: Pop(3)
0x852: Push((int) 5512)
0x853: Push((int) -1)
0x854: Push((int) 6074)
0x855: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x856: Pop(3)
0x857: Push((int) 5513)
0x858: Push((int) -1)
0x859: Push((int) 6075)
0x85a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85b: Pop(3)
0x85c: Return(); Pop(0)

0x85d: Push((int) 6714)
0x85e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x85f: IF (Stack[-1] == 0) GOTO 0x874; Pop(1)

0x860: PushEmpty(string)
0x861: Stack[-1] = "Neutral"
0x862: Call 0x562

0x863: Pop(1)
0x864: Push((int) 6084)
0x865: @@ SetMessage(Stack[-1])
0x866: Pop(1)
0x867: @@ ClearReplies()
0x868: Pop(0)
0x869: Push((int) 6085)
0x86a: Push((int) 6717)
0x86b: Push((int) 6715)
0x86c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86d: Pop(3)
0x86e: Push((int) 6086)
0x86f: Push((int) 6719)
0x870: Push((int) 6716)
0x871: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x872: Pop(3)
0x873: Return(); Pop(0)

0x874: Push((int) 6717)
0x875: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x876: IF (Stack[-1] == 0) GOTO 0x886; Pop(1)

0x877: PushEmpty(string)
0x878: Stack[-1] = "Neutral"
0x879: Call 0x562

0x87a: Pop(1)
0x87b: Push((int) 6087)
0x87c: @@ SetMessage(Stack[-1])
0x87d: Pop(1)
0x87e: @@ ClearReplies()
0x87f: Pop(0)
0x880: Push((int) 6088)
0x881: Push((int) 6719)
0x882: Push((int) 6718)
0x883: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x884: Pop(3)
0x885: Return(); Pop(0)

0x886: Push((int) 6719)
0x887: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x888: IF (Stack[-1] == 0) GOTO 0x89d; Pop(1)

0x889: PushEmpty(string)
0x88a: Stack[-1] = "Neutral"
0x88b: Call 0x562

0x88c: Pop(1)
0x88d: Push((int) 6089)
0x88e: @@ SetMessage(Stack[-1])
0x88f: Pop(1)
0x890: @@ ClearReplies()
0x891: Pop(0)
0x892: Push((int) 6090)
0x893: Push((int) 6725)
0x894: Push((int) 6720)
0x895: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x896: Pop(3)
0x897: Push((int) 6091)
0x898: Push((int) 6725)
0x899: Push((int) 6721)
0x89a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89b: Pop(3)
0x89c: Return(); Pop(0)

0x89d: Push((int) 6725)
0x89e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x89f: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8a0: PushEmpty(object, object)
0x8a1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8a2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8a3: Call 0x112b

0x8a4: Pop(2)
0x8a5: PushEmpty(object, object)
0x8a6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8a7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8a8: Call 0x1125

0x8a9: Pop(2)
0x8aa: PushEmpty(string)
0x8ab: Stack[-1] = "Neutral"
0x8ac: Call 0x562

0x8ad: Pop(1)
0x8ae: Push((int) 6092)
0x8af: @@ SetMessage(Stack[-1])
0x8b0: Pop(1)
0x8b1: @@ ClearReplies()
0x8b2: Pop(0)
0x8b3: Push((int) 6095)
0x8b4: Push((int) 6730)
0x8b5: Push((int) 6729)
0x8b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b7: Pop(3)
0x8b8: Push((int) 6093)
0x8b9: Push((int) 6728)
0x8ba: Push((int) 6727)
0x8bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bc: Pop(3)
0x8bd: Return(); Pop(0)

0x8be: Push((int) 6728)
0x8bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c0: IF (Stack[-1] == 0) GOTO 0x8da; Pop(1)

0x8c1: PushEmpty(object, object)
0x8c2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8c3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8c4: Call 0x112b

0x8c5: Pop(2)
0x8c6: PushEmpty(string)
0x8c7: Stack[-1] = "Neutral"
0x8c8: Call 0x562

0x8c9: Pop(1)
0x8ca: Push((int) 6094)
0x8cb: @@ SetMessage(Stack[-1])
0x8cc: Pop(1)
0x8cd: @@ ClearReplies()
0x8ce: Pop(0)
0x8cf: Push((int) 6097)
0x8d0: Push((int) 6732)
0x8d1: Push((int) 6731)
0x8d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d3: Pop(3)
0x8d4: Push((int) 6102)
0x8d5: Push((int) 6730)
0x8d6: Push((int) 6736)
0x8d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d8: Pop(3)
0x8d9: Return(); Pop(0)

0x8da: Push((int) 6732)
0x8db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8dc: IF (Stack[-1] == 0) GOTO 0x8f6; Pop(1)

0x8dd: PushEmpty(object, object)
0x8de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8e0: Call 0x1185

0x8e1: Pop(2)
0x8e2: PushEmpty(string)
0x8e3: Stack[-1] = "Neutral"
0x8e4: Call 0x562

0x8e5: Pop(1)
0x8e6: Push((int) 6098)
0x8e7: @@ SetMessage(Stack[-1])
0x8e8: Pop(1)
0x8e9: @@ ClearReplies()
0x8ea: Pop(0)
0x8eb: Push((int) 6099)
0x8ec: Push((int) 6734)
0x8ed: Push((int) 6733)
0x8ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ef: Pop(3)
0x8f0: Push((int) 6103)
0x8f1: Push((int) 6730)
0x8f2: Push((int) 6738)
0x8f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f4: Pop(3)
0x8f5: Return(); Pop(0)

0x8f6: Push((int) 6734)
0x8f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f8: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x8f9: PushEmpty(string)
0x8fa: Stack[-1] = "Neutral"
0x8fb: Call 0x562

0x8fc: Pop(1)
0x8fd: Push((int) 6100)
0x8fe: @@ SetMessage(Stack[-1])
0x8ff: Pop(1)
0x900: @@ ClearReplies()
0x901: Pop(0)
0x902: Push((int) 6101)
0x903: Push((int) 6730)
0x904: Push((int) 6735)
0x905: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x906: Pop(3)
0x907: Return(); Pop(0)

0x908: Push((int) 6730)
0x909: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x90a: IF (Stack[-1] == 0) GOTO 0x91f; Pop(1)

0x90b: PushEmpty(string)
0x90c: Stack[-1] = "Neutral"
0x90d: Call 0x562

0x90e: Pop(1)
0x90f: Push((int) 6096)
0x910: @@ SetMessage(Stack[-1])
0x911: Pop(1)
0x912: @@ ClearReplies()
0x913: Pop(0)
0x914: Push((int) 6104)
0x915: Push((int) 6745)
0x916: Push((int) 6741)
0x917: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x918: Pop(3)
0x919: Push((int) 6105)
0x91a: Push((int) 6743)
0x91b: Push((int) 6742)
0x91c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91d: Pop(3)
0x91e: Return(); Pop(0)

0x91f: Push((int) 6743)
0x920: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x921: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x922: PushEmpty(string)
0x923: Stack[-1] = "Neutral"
0x924: Call 0x562

0x925: Pop(1)
0x926: Push((int) 6106)
0x927: @@ SetMessage(Stack[-1])
0x928: Pop(1)
0x929: @@ ClearReplies()
0x92a: Pop(0)
0x92b: Push((int) 6107)
0x92c: Push((int) -1)
0x92d: Push((int) 6744)
0x92e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92f: Pop(3)
0x930: Return(); Pop(0)

0x931: Push((int) 6745)
0x932: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x933: IF (Stack[-1] == 0) GOTO 0x94d; Pop(1)

0x934: PushEmpty(object, object)
0x935: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x936: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x937: Call 0x11e2

0x938: Pop(2)
0x939: PushEmpty(string)
0x93a: Stack[-1] = "Neutral"
0x93b: Call 0x562

0x93c: Pop(1)
0x93d: Push((int) 6108)
0x93e: @@ SetMessage(Stack[-1])
0x93f: Pop(1)
0x940: @@ ClearReplies()
0x941: Pop(0)
0x942: Push((int) 6109)
0x943: Push((int) -1)
0x944: Push((int) 6746)
0x945: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x946: Pop(3)
0x947: Push((int) 6110)
0x948: Push((int) -1)
0x949: Push((int) 6747)
0x94a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94b: Pop(3)
0x94c: Return(); Pop(0)

0x94d: Push((int) 6052)
0x94e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x94f: IF (Stack[-1] == 0) GOTO 0x969; Pop(1)

0x950: PushEmpty(string)
0x951: Stack[-1] = "Neutral"
0x952: Call 0x562

0x953: Pop(1)
0x954: Push((int) 5493)
0x955: @@ SetMessage(Stack[-1])
0x956: Pop(1)
0x957: @@ ClearReplies()
0x958: Pop(0)
0x959: Push((int) 5494)
0x95a: Push((int) 6054)
0x95b: Push((int) 6053)
0x95c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95d: Pop(3)
0x95e: Push((int) 5504)
0x95f: Push((int) 6054)
0x960: Push((int) 6064)
0x961: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x962: Pop(3)
0x963: Push((int) 5523)
0x964: Push((int) 6088)
0x965: Push((int) 6087)
0x966: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x967: Pop(3)
0x968: Return(); Pop(0)

0x969: Push((int) 6088)
0x96a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x96b: IF (Stack[-1] == 0) GOTO 0x97b; Pop(1)

0x96c: PushEmpty(string)
0x96d: Stack[-1] = "Neutral"
0x96e: Call 0x562

0x96f: Pop(1)
0x970: Push((int) 5524)
0x971: @@ SetMessage(Stack[-1])
0x972: Pop(1)
0x973: @@ ClearReplies()
0x974: Pop(0)
0x975: Push((int) 5525)
0x976: Push((int) -1)
0x977: Push((int) 6089)
0x978: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x979: Pop(3)
0x97a: Return(); Pop(0)

0x97b: Push((int) 6054)
0x97c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x97d: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x97e: PushEmpty(string)
0x97f: Stack[-1] = "Neutral"
0x980: Call 0x562

0x981: Pop(1)
0x982: Push((int) 5495)
0x983: @@ SetMessage(Stack[-1])
0x984: Pop(1)
0x985: @@ ClearReplies()
0x986: Pop(0)
0x987: Push((int) 5496)
0x988: Push((int) 6056)
0x989: Push((int) 6055)
0x98a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98b: Pop(3)
0x98c: Push((int) 5503)
0x98d: Push((int) 6058)
0x98e: Push((int) 6062)
0x98f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x990: Pop(3)
0x991: Return(); Pop(0)

0x992: Push((int) 6056)
0x993: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x994: IF (Stack[-1] == 0) GOTO 0x9a9; Pop(1)

0x995: PushEmpty(string)
0x996: Stack[-1] = "Neutral"
0x997: Call 0x562

0x998: Pop(1)
0x999: Push((int) 5497)
0x99a: @@ SetMessage(Stack[-1])
0x99b: Pop(1)
0x99c: @@ ClearReplies()
0x99d: Pop(0)
0x99e: Push((int) 5498)
0x99f: Push((int) 6058)
0x9a0: Push((int) 6057)
0x9a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a2: Pop(3)
0x9a3: Push((int) 5502)
0x9a4: Push((int) -1)
0x9a5: Push((int) 6061)
0x9a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a7: Pop(3)
0x9a8: Return(); Pop(0)

0x9a9: Push((int) 6058)
0x9aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ab: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9ac: PushEmpty(string)
0x9ad: Stack[-1] = "Neutral"
0x9ae: Call 0x562

0x9af: Pop(1)
0x9b0: Push((int) 5499)
0x9b1: @@ SetMessage(Stack[-1])
0x9b2: Pop(1)
0x9b3: @@ ClearReplies()
0x9b4: Pop(0)
0x9b5: Push((int) 5500)
0x9b6: Push((int) -1)
0x9b7: Push((int) 6059)
0x9b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b9: Pop(3)
0x9ba: Push((int) 5501)
0x9bb: Push((int) -1)
0x9bc: Push((int) 6060)
0x9bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9be: Pop(3)
0x9bf: Return(); Pop(0)

0x9c0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x9c1: PushEmpty(bool)
0x9c2: Call 0x108c

0x9c3: Pop(0)
0x9c4: IF (Stack[-1] == 0) GOTO 0x9c8; Pop(1)

0x9c5: @ lshStopAnimation()
0x9c6: Pop(0)
0x9c7: GOTO 0x9ca

0x9c8: @ StopAnimation()
0x9c9: Pop(0)
0x9ca: Return(); Pop(0)

0x9cb: GOTO 0x573

0x9cc: Return(); Pop(0)

0x9cd: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x9ce: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x9cf: PushEmpty(bool, object)
0x9d0: Stack[-1] = Stack[-11]
0x9d1: Call 0xfc5

0x9d2: Pop(1)
0x9d3: Pop(1); Push((bool) Stack[-1] == 0)
0x9d4: IF (Stack[-1] == 0) GOTO 0x9d7; Pop(1)

0x9d5: Stack[-10] = (int) -2
0x9d6: Return(); Pop(8)

0x9d7: @ CreateDialog(Stack[-4])
0x9d8: Pop(0)
0x9d9: PushEmpty(int)
0x9da: Call 0x1088

0x9db: Pop(0)
0x9dc: @@ SetNPCName(Stack[-1])
0x9dd: Pop(1)
0x9de: PushEmpty(string)
0x9df: Call 0x108a

0x9e0: Pop(0)
0x9e1: @@ SetPhoto(Stack[-1])
0x9e2: Pop(1)
0x9e3: PushEmpty(int)
0x9e4: Call 0x13e0

0x9e5: Pop(0)
0x9e6: @@ SetPlayerName(Stack[-1])
0x9e7: Pop(1)
0x9e8: Stack[-2] = (int) -1
0x9e9: @ IsOverrideActive(Stack[-3])
0x9ea: Pop(0)
0x9eb: Push(Stack[-3])
0x9ec: IF (Stack[-1] == 0) GOTO 0x9ef; Pop(1)

0x9ed: Stack[-10] = (int) -2
0x9ee: Return(); Pop(8)

0x9ef: @ DoDialog(Stack[-4])
0x9f0: Pop(0)
0x9f1: PushEmpty(object, object)
0x9f2: Stack[-2] = Stack[-11]
0x9f3: Stack[-1] = Stack[-6]
0x9f4: Push(-2, 4); TaskCall(9)
0x9f5: Call 0xa0c

0x9f6: Pop(-2, 4); TaskReturn
0x9f7: Pop(2)
0x9f8: @@ IsDialogEnd(Stack[-1])
0x9f9: Pop(0)
0x9fa: Pop(0); Push((bool) Stack[-1] == 0)
0x9fb: IF (Stack[-1] == 0) GOTO 0xa01; Pop(1)

0x9fc: @ sync()
0x9fd: Pop(0)
0x9fe: @@ IsDialogEnd(Stack[-1])
0x9ff: Pop(0)
0xa00: GOTO 0x9fa

0xa01: PushEmpty(object)
0xa02: Stack[-1] = Stack[-10]
0xa03: Call 0xffd

0xa04: Pop(1)
0xa05: @ StopDialog(Stack[-4])
0xa06: Pop(0)
0xa07: @@ GetReturnValue(Stack[-2])
0xa08: Pop(0)
0xa09: Stack[-10] = Stack[-2]
0xa0a: Return(); Pop(8)

0xa0b: Stack[-4] = 0
0xa0c: PushEmpty()
0xa0d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xa0e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xa0f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa10: Push((int) 1)
0xa11: IF (Stack[-1] == 0) GOTO 0xa46; Pop(1)

0xa12: PushEmpty(string)
0xa13: Stack[-1] = "Neutral"
0xa14: Call 0xa64

0xa15: Pop(1)
0xa16: Push((int) 9330)
0xa17: @@ SetMessage(Stack[-1])
0xa18: Pop(1)
0xa19: @@ ClearReplies()
0xa1a: Pop(0)
0xa1b: Push((int) 9331)
0xa1c: Push((int) 10248)
0xa1d: Push((int) 10247)
0xa1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1f: Pop(3)
0xa20: Push((int) 9340)
0xa21: Push((int) 10248)
0xa22: Push((int) 10258)
0xa23: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa24: Pop(3)
0xa25: Push((int) 9341)
0xa26: Push((int) 10248)
0xa27: Push((int) 10260)
0xa28: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa29: Pop(3)
0xa2a: GOTO 0xa46

0xa2b: PushEmpty(string)
0xa2c: Stack[-1] = "Neutral"
0xa2d: Call 0xa64

0xa2e: Pop(1)
0xa2f: Push((int) 9323)
0xa30: @@ SetMessage(Stack[-1])
0xa31: Pop(1)
0xa32: @@ ClearReplies()
0xa33: Pop(0)
0xa34: Push((int) 9324)
0xa35: Push((int) 10239)
0xa36: Push((int) 10238)
0xa37: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa38: Pop(3)
0xa39: Push((int) 9328)
0xa3a: Push((int) 10239)
0xa3b: Push((int) 10242)
0xa3c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3d: Pop(3)
0xa3e: Push((int) 9329)
0xa3f: Push((int) 10239)
0xa40: Push((int) 10244)
0xa41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa42: Pop(3)
0xa43: GOTO 0xa46

0xa44: Return(); Pop(0)

0xa45: GOTO 0xa10

0xa46: PushEmpty(bool)
0xa47: Call 0x108c

0xa48: Pop(0)
0xa49: IF (Stack[-1] == 0) GOTO 0xa55; Pop(1)

0xa4a: @ lshWaitForAnimEnd()
0xa4b: Pop(0)
0xa4c: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa4d: IF (Stack[-1] == 0) GOTO 0xa4f; Pop(1)

0xa4e: GOTO 0xa54

0xa4f: PushEmpty(string)
0xa50: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa51: Call 0x1001

0xa52: Pop(1)
0xa53: GOTO 0xa4a

0xa54: GOTO 0xa63

0xa55: Push("all")
0xa56: Push("idle")
0xa57: @ PlayAnimation(Stack[-2], Stack[-1])
0xa58: Pop(2)
0xa59: @ WaitForAnimEnd()
0xa5a: Pop(0)
0xa5b: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa5c: IF (Stack[-1] == 0) GOTO 0xa5e; Pop(1)

0xa5d: GOTO 0xa63

0xa5e: Push("all")
0xa5f: Push("idle")
0xa60: @ PlayAnimation(Stack[-2], Stack[-1])
0xa61: Pop(2)
0xa62: GOTO 0xa59

0xa63: Return(); Pop(0)

0xa64: PushEmpty()
0xa65: PushEmpty(bool)
0xa66: Call 0x108c

0xa67: Pop(0)
0xa68: Pop(1); Push((bool) Stack[-1] == 0)
0xa69: IF (Stack[-1] == 0) GOTO 0xa6b; Pop(1)

0xa6a: Return(); Pop(0)

0xa6b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa6c: IF (Stack[-1] == 0) GOTO 0xa6e; Pop(1)

0xa6d: Return(); Pop(0)

0xa6e: PushEmpty(string)
0xa6f: Stack[-1] = Stack[-2]
0xa70: Call 0x1001

0xa71: Pop(1)
0xa72: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa73: Return(); Pop(0)

0xa74: PushEmpty()
0xa75: Push((int) 1)
0xa76: IF (Stack[-1] == 0) GOTO 0xb0a; Pop(1)

0xa77: PushEmpty()
0xa78: Call 0x1013

0xa79: Pop(0)
0xa7a: Push((int) 10246)
0xa7b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa7c: IF (Stack[-1] == 0) GOTO 0xaaf; Pop(1)

0xa7d: PushEmpty(string)
0xa7e: Stack[-1] = "Neutral"
0xa7f: Call 0xa64

0xa80: Pop(1)
0xa81: Push((int) 9330)
0xa82: @@ SetMessage(Stack[-1])
0xa83: Pop(1)
0xa84: @@ ClearReplies()
0xa85: Pop(0)
0xa86: Push((int) 9331)
0xa87: Push((int) 10248)
0xa88: Push((int) 10247)
0xa89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8a: Pop(3)
0xa8b: Push((int) 9340)
0xa8c: Push((int) 10248)
0xa8d: Push((int) 10258)
0xa8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8f: Pop(3)
0xa90: Push((int) 9341)
0xa91: Push((int) 10248)
0xa92: Push((int) 10260)
0xa93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa94: Pop(3)
0xa95: Return(); Pop(0)

0xa96: PushEmpty(string)
0xa97: Stack[-1] = "Neutral"
0xa98: Call 0xa64

0xa99: Pop(1)
0xa9a: Push((int) 9323)
0xa9b: @@ SetMessage(Stack[-1])
0xa9c: Pop(1)
0xa9d: @@ ClearReplies()
0xa9e: Pop(0)
0xa9f: Push((int) 9324)
0xaa0: Push((int) 10239)
0xaa1: Push((int) 10238)
0xaa2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa3: Pop(3)
0xaa4: Push((int) 9328)
0xaa5: Push((int) 10239)
0xaa6: Push((int) 10242)
0xaa7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa8: Pop(3)
0xaa9: Push((int) 9329)
0xaaa: Push((int) 10239)
0xaab: Push((int) 10244)
0xaac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaad: Pop(3)
0xaae: Return(); Pop(0)

0xaaf: Push((int) 10239)
0xab0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xab1: IF (Stack[-1] == 0) GOTO 0xac6; Pop(1)

0xab2: PushEmpty(string)
0xab3: Stack[-1] = "Neutral"
0xab4: Call 0xa64

0xab5: Pop(1)
0xab6: Push((int) 9325)
0xab7: @@ SetMessage(Stack[-1])
0xab8: Pop(1)
0xab9: @@ ClearReplies()
0xaba: Pop(0)
0xabb: Push((int) 9326)
0xabc: Push((int) -1)
0xabd: Push((int) 10240)
0xabe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xabf: Pop(3)
0xac0: Push((int) 9327)
0xac1: Push((int) -1)
0xac2: Push((int) 10241)
0xac3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac4: Pop(3)
0xac5: Return(); Pop(0)

0xac6: Push((int) 10248)
0xac7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac8: IF (Stack[-1] == 0) GOTO 0xae2; Pop(1)

0xac9: PushEmpty(string)
0xaca: Stack[-1] = "Neutral"
0xacb: Call 0xa64

0xacc: Pop(1)
0xacd: Push((int) 9332)
0xace: @@ SetMessage(Stack[-1])
0xacf: Pop(1)
0xad0: @@ ClearReplies()
0xad1: Pop(0)
0xad2: Push((int) 9333)
0xad3: Push((int) 10250)
0xad4: Push((int) 10249)
0xad5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad6: Pop(3)
0xad7: Push((int) 9338)
0xad8: Push((int) 10250)
0xad9: Push((int) 10254)
0xada: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xadb: Pop(3)
0xadc: Push((int) 9339)
0xadd: Push((int) 10250)
0xade: Push((int) 10256)
0xadf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae0: Pop(3)
0xae1: Return(); Pop(0)

0xae2: Push((int) 10250)
0xae3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae4: IF (Stack[-1] == 0) GOTO 0xafe; Pop(1)

0xae5: PushEmpty(string)
0xae6: Stack[-1] = "Neutral"
0xae7: Call 0xa64

0xae8: Pop(1)
0xae9: Push((int) 9334)
0xaea: @@ SetMessage(Stack[-1])
0xaeb: Pop(1)
0xaec: @@ ClearReplies()
0xaed: Pop(0)
0xaee: Push((int) 9335)
0xaef: Push((int) -1)
0xaf0: Push((int) 10251)
0xaf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf2: Pop(3)
0xaf3: Push((int) 9336)
0xaf4: Push((int) -1)
0xaf5: Push((int) 10252)
0xaf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf7: Pop(3)
0xaf8: Push((int) 9337)
0xaf9: Push((int) -1)
0xafa: Push((int) 10253)
0xafb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xafc: Pop(3)
0xafd: Return(); Pop(0)

0xafe: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xaff: PushEmpty(bool)
0xb00: Call 0x108c

0xb01: Pop(0)
0xb02: IF (Stack[-1] == 0) GOTO 0xb06; Pop(1)

0xb03: @ lshStopAnimation()
0xb04: Pop(0)
0xb05: GOTO 0xb08

0xb06: @ StopAnimation()
0xb07: Pop(0)
0xb08: Return(); Pop(0)

0xb09: GOTO 0xa75

0xb0a: Return(); Pop(0)

0xb0b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xb0c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xb0d: PushEmpty(bool, object)
0xb0e: Stack[-1] = Stack[-11]
0xb0f: Call 0xfc5

0xb10: Pop(1)
0xb11: Pop(1); Push((bool) Stack[-1] == 0)
0xb12: IF (Stack[-1] == 0) GOTO 0xb15; Pop(1)

0xb13: Stack[-10] = (int) -2
0xb14: Return(); Pop(8)

0xb15: @ CreateDialog(Stack[-4])
0xb16: Pop(0)
0xb17: PushEmpty(int)
0xb18: Call 0x1088

0xb19: Pop(0)
0xb1a: @@ SetNPCName(Stack[-1])
0xb1b: Pop(1)
0xb1c: PushEmpty(string)
0xb1d: Call 0x108a

0xb1e: Pop(0)
0xb1f: @@ SetPhoto(Stack[-1])
0xb20: Pop(1)
0xb21: PushEmpty(int)
0xb22: Call 0x13e0

0xb23: Pop(0)
0xb24: @@ SetPlayerName(Stack[-1])
0xb25: Pop(1)
0xb26: Stack[-2] = (int) -1
0xb27: @ IsOverrideActive(Stack[-3])
0xb28: Pop(0)
0xb29: Push(Stack[-3])
0xb2a: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb2b: Stack[-10] = (int) -2
0xb2c: Return(); Pop(8)

0xb2d: @ DoDialog(Stack[-4])
0xb2e: Pop(0)
0xb2f: PushEmpty(object, object)
0xb30: Stack[-2] = Stack[-11]
0xb31: Stack[-1] = Stack[-6]
0xb32: Push(-2, 4); TaskCall(11)
0xb33: Call 0xb4a

0xb34: Pop(-2, 4); TaskReturn
0xb35: Pop(2)
0xb36: @@ IsDialogEnd(Stack[-1])
0xb37: Pop(0)
0xb38: Pop(0); Push((bool) Stack[-1] == 0)
0xb39: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb3a: @ sync()
0xb3b: Pop(0)
0xb3c: @@ IsDialogEnd(Stack[-1])
0xb3d: Pop(0)
0xb3e: GOTO 0xb38

0xb3f: PushEmpty(object)
0xb40: Stack[-1] = Stack[-10]
0xb41: Call 0xffd

0xb42: Pop(1)
0xb43: @ StopDialog(Stack[-4])
0xb44: Pop(0)
0xb45: @@ GetReturnValue(Stack[-2])
0xb46: Pop(0)
0xb47: Stack[-10] = Stack[-2]
0xb48: Return(); Pop(8)

0xb49: Stack[-4] = 0
0xb4a: PushEmpty()
0xb4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xb4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xb4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xb4e: Push((int) 1)
0xb4f: IF (Stack[-1] == 0) GOTO 0xb93; Pop(1)

0xb50: PushEmpty(bool)
0xb51: Stack[-1] = (bool) 0
0xb52: PushEmpty(bool, object)
0xb53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb54: Call 0x1334

0xb55: Pop(1)
0xb56: IF (Stack[-1] == 0) GOTO 0xb5e; Pop(1)

0xb57: PushEmpty(bool, object)
0xb58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb59: Call 0x12a4

0xb5a: Pop(1)
0xb5b: Pop(1); Push((bool) Stack[-1] == 0)
0xb5c: IF (Stack[-1] == 0) GOTO 0xb5e; Pop(1)

0xb5d: Stack[-1] = (bool) 1
0xb5e: IF (Stack[-1] == 0) GOTO 0xb78; Pop(1)

0xb5f: PushEmpty(object, object)
0xb60: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb61: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb62: Call 0x11e8

0xb63: Pop(2)
0xb64: PushEmpty(string)
0xb65: Stack[-1] = "Neutral"
0xb66: Call 0xbb1

0xb67: Pop(1)
0xb68: Push((int) 9926)
0xb69: @@ SetMessage(Stack[-1])
0xb6a: Pop(1)
0xb6b: @@ ClearReplies()
0xb6c: Pop(0)
0xb6d: Push((int) 9927)
0xb6e: Push((int) 10938)
0xb6f: Push((int) 10937)
0xb70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb71: Pop(3)
0xb72: Push((int) 9940)
0xb73: Push((int) 10954)
0xb74: Push((int) 10953)
0xb75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb76: Pop(3)
0xb77: GOTO 0xb93

0xb78: PushEmpty(bool, object)
0xb79: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb7a: Call 0x1252

0xb7b: Pop(1)
0xb7c: IF (Stack[-1] == 0) GOTO 0xb91; Pop(1)

0xb7d: PushEmpty(string)
0xb7e: Stack[-1] = "Neutral"
0xb7f: Call 0xbb1

0xb80: Pop(1)
0xb81: Push((int) 10178)
0xb82: @@ SetMessage(Stack[-1])
0xb83: Pop(1)
0xb84: @@ ClearReplies()
0xb85: Pop(0)
0xb86: Push((int) 10186)
0xb87: Push((int) 11233)
0xb88: Push((int) 11232)
0xb89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8a: Pop(3)
0xb8b: Push((int) 10464)
0xb8c: Push((int) 11233)
0xb8d: Push((int) 11537)
0xb8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8f: Pop(3)
0xb90: GOTO 0xb93

0xb91: Return(); Pop(0)

0xb92: GOTO 0xb4e

0xb93: PushEmpty(bool)
0xb94: Call 0x108c

0xb95: Pop(0)
0xb96: IF (Stack[-1] == 0) GOTO 0xba2; Pop(1)

0xb97: @ lshWaitForAnimEnd()
0xb98: Pop(0)
0xb99: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb9a: IF (Stack[-1] == 0) GOTO 0xb9c; Pop(1)

0xb9b: GOTO 0xba1

0xb9c: PushEmpty(string)
0xb9d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb9e: Call 0x1001

0xb9f: Pop(1)
0xba0: GOTO 0xb97

0xba1: GOTO 0xbb0

0xba2: Push("all")
0xba3: Push("idle")
0xba4: @ PlayAnimation(Stack[-2], Stack[-1])
0xba5: Pop(2)
0xba6: @ WaitForAnimEnd()
0xba7: Pop(0)
0xba8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xba9: IF (Stack[-1] == 0) GOTO 0xbab; Pop(1)

0xbaa: GOTO 0xbb0

0xbab: Push("all")
0xbac: Push("idle")
0xbad: @ PlayAnimation(Stack[-2], Stack[-1])
0xbae: Pop(2)
0xbaf: GOTO 0xba6

0xbb0: Return(); Pop(0)

0xbb1: PushEmpty()
0xbb2: PushEmpty(bool)
0xbb3: Call 0x108c

0xbb4: Pop(0)
0xbb5: Pop(1); Push((bool) Stack[-1] == 0)
0xbb6: IF (Stack[-1] == 0) GOTO 0xbb8; Pop(1)

0xbb7: Return(); Pop(0)

0xbb8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbb9: IF (Stack[-1] == 0) GOTO 0xbbb; Pop(1)

0xbba: Return(); Pop(0)

0xbbb: PushEmpty(string)
0xbbc: Stack[-1] = Stack[-2]
0xbbd: Call 0x1001

0xbbe: Pop(1)
0xbbf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbc0: Return(); Pop(0)

0xbc1: PushEmpty()
0xbc2: Push((int) 1)
0xbc3: IF (Stack[-1] == 0) GOTO 0xd61; Pop(1)

0xbc4: PushEmpty()
0xbc5: Call 0x1013

0xbc6: Pop(0)
0xbc7: Push((int) 10945)
0xbc8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbc9: IF (Stack[-1] == 0) GOTO 0xbd4; Pop(1)

0xbca: PushEmpty(object, object)
0xbcb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbcc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbcd: Call 0x11ee

0xbce: Pop(2)
0xbcf: PushEmpty(object, object)
0xbd0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbd1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd2: Call 0x10ee

0xbd3: Pop(2)
0xbd4: Push((int) 10946)
0xbd5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbd6: IF (Stack[-1] == 0) GOTO 0xbe1; Pop(1)

0xbd7: PushEmpty(object, object)
0xbd8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbd9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbda: Call 0x11ee

0xbdb: Pop(2)
0xbdc: PushEmpty(object, object)
0xbdd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbdf: Call 0x10ee

0xbe0: Pop(2)
0xbe1: Push((int) 10936)
0xbe2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe3: IF (Stack[-1] == 0) GOTO 0xc25; Pop(1)

0xbe4: PushEmpty(bool)
0xbe5: Stack[-1] = (bool) 0
0xbe6: PushEmpty(bool, object)
0xbe7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbe8: Call 0x1334

0xbe9: Pop(1)
0xbea: IF (Stack[-1] == 0) GOTO 0xbf2; Pop(1)

0xbeb: PushEmpty(bool, object)
0xbec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbed: Call 0x12a4

0xbee: Pop(1)
0xbef: Pop(1); Push((bool) Stack[-1] == 0)
0xbf0: IF (Stack[-1] == 0) GOTO 0xbf2; Pop(1)

0xbf1: Stack[-1] = (bool) 1
0xbf2: IF (Stack[-1] == 0) GOTO 0xc0c; Pop(1)

0xbf3: PushEmpty(object, object)
0xbf4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbf5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf6: Call 0x11e8

0xbf7: Pop(2)
0xbf8: PushEmpty(string)
0xbf9: Stack[-1] = "Neutral"
0xbfa: Call 0xbb1

0xbfb: Pop(1)
0xbfc: Push((int) 9926)
0xbfd: @@ SetMessage(Stack[-1])
0xbfe: Pop(1)
0xbff: @@ ClearReplies()
0xc00: Pop(0)
0xc01: Push((int) 9927)
0xc02: Push((int) 10938)
0xc03: Push((int) 10937)
0xc04: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc05: Pop(3)
0xc06: Push((int) 9940)
0xc07: Push((int) 10954)
0xc08: Push((int) 10953)
0xc09: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0a: Pop(3)
0xc0b: Return(); Pop(0)

0xc0c: PushEmpty(bool, object)
0xc0d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc0e: Call 0x1252

0xc0f: Pop(1)
0xc10: IF (Stack[-1] == 0) GOTO 0xc25; Pop(1)

0xc11: PushEmpty(string)
0xc12: Stack[-1] = "Neutral"
0xc13: Call 0xbb1

0xc14: Pop(1)
0xc15: Push((int) 10178)
0xc16: @@ SetMessage(Stack[-1])
0xc17: Pop(1)
0xc18: @@ ClearReplies()
0xc19: Pop(0)
0xc1a: Push((int) 10186)
0xc1b: Push((int) 11233)
0xc1c: Push((int) 11232)
0xc1d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1e: Pop(3)
0xc1f: Push((int) 10464)
0xc20: Push((int) 11233)
0xc21: Push((int) 11537)
0xc22: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc23: Pop(3)
0xc24: Return(); Pop(0)

0xc25: Push((int) 11233)
0xc26: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc27: IF (Stack[-1] == 0) GOTO 0xc3c; Pop(1)

0xc28: PushEmpty(string)
0xc29: Stack[-1] = "Neutral"
0xc2a: Call 0xbb1

0xc2b: Pop(1)
0xc2c: Push((int) 10187)
0xc2d: @@ SetMessage(Stack[-1])
0xc2e: Pop(1)
0xc2f: @@ ClearReplies()
0xc30: Pop(0)
0xc31: Push((int) 10179)
0xc32: Push((int) 11226)
0xc33: Push((int) 11225)
0xc34: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc35: Pop(3)
0xc36: Push((int) 10463)
0xc37: Push((int) 11226)
0xc38: Push((int) 11536)
0xc39: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3a: Pop(3)
0xc3b: Return(); Pop(0)

0xc3c: Push((int) 11226)
0xc3d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3e: IF (Stack[-1] == 0) GOTO 0xc53; Pop(1)

0xc3f: PushEmpty(string)
0xc40: Stack[-1] = "Neutral"
0xc41: Call 0xbb1

0xc42: Pop(1)
0xc43: Push((int) 10180)
0xc44: @@ SetMessage(Stack[-1])
0xc45: Pop(1)
0xc46: @@ ClearReplies()
0xc47: Pop(0)
0xc48: Push((int) 10465)
0xc49: Push((int) 11541)
0xc4a: Push((int) 11540)
0xc4b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4c: Pop(3)
0xc4d: Push((int) 10470)
0xc4e: Push((int) 11228)
0xc4f: Push((int) 11547)
0xc50: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc51: Pop(3)
0xc52: Return(); Pop(0)

0xc53: Push((int) 11541)
0xc54: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc55: IF (Stack[-1] == 0) GOTO 0xc6f; Pop(1)

0xc56: PushEmpty(string)
0xc57: Stack[-1] = "Neutral"
0xc58: Call 0xbb1

0xc59: Pop(1)
0xc5a: Push((int) 10466)
0xc5b: @@ SetMessage(Stack[-1])
0xc5c: Pop(1)
0xc5d: @@ ClearReplies()
0xc5e: Pop(0)
0xc5f: Push((int) 10181)
0xc60: Push((int) 11228)
0xc61: Push((int) 11227)
0xc62: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc63: Pop(3)
0xc64: Push((int) 10467)
0xc65: Push((int) 11228)
0xc66: Push((int) 11542)
0xc67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc68: Pop(3)
0xc69: Push((int) 10468)
0xc6a: Push((int) 11228)
0xc6b: Push((int) 11543)
0xc6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6d: Pop(3)
0xc6e: Return(); Pop(0)

0xc6f: Push((int) 11228)
0xc70: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc71: IF (Stack[-1] == 0) GOTO 0xc81; Pop(1)

0xc72: PushEmpty(string)
0xc73: Stack[-1] = "Neutral"
0xc74: Call 0xbb1

0xc75: Pop(1)
0xc76: Push((int) 10182)
0xc77: @@ SetMessage(Stack[-1])
0xc78: Pop(1)
0xc79: @@ ClearReplies()
0xc7a: Pop(0)
0xc7b: Push((int) 10183)
0xc7c: Push((int) 11230)
0xc7d: Push((int) 11229)
0xc7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7f: Pop(3)
0xc80: Return(); Pop(0)

0xc81: Push((int) 11230)
0xc82: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc83: IF (Stack[-1] == 0) GOTO 0xc98; Pop(1)

0xc84: PushEmpty(string)
0xc85: Stack[-1] = "Neutral"
0xc86: Call 0xbb1

0xc87: Pop(1)
0xc88: Push((int) 10184)
0xc89: @@ SetMessage(Stack[-1])
0xc8a: Pop(1)
0xc8b: @@ ClearReplies()
0xc8c: Pop(0)
0xc8d: Push((int) 10185)
0xc8e: Push((int) 11234)
0xc8f: Push((int) 11231)
0xc90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc91: Pop(3)
0xc92: Push((int) 10469)
0xc93: Push((int) -1)
0xc94: Push((int) 11546)
0xc95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc96: Pop(3)
0xc97: Return(); Pop(0)

0xc98: Push((int) 11234)
0xc99: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc9a: IF (Stack[-1] == 0) GOTO 0xcb4; Pop(1)

0xc9b: PushEmpty(string)
0xc9c: Stack[-1] = "Neutral"
0xc9d: Call 0xbb1

0xc9e: Pop(1)
0xc9f: Push((int) 10188)
0xca0: @@ SetMessage(Stack[-1])
0xca1: Pop(1)
0xca2: @@ ClearReplies()
0xca3: Pop(0)
0xca4: Push((int) 10189)
0xca5: Push((int) -1)
0xca6: Push((int) 11235)
0xca7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca8: Pop(3)
0xca9: Push((int) 10471)
0xcaa: Push((int) -1)
0xcab: Push((int) 11549)
0xcac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcad: Pop(3)
0xcae: Push((int) 10472)
0xcaf: Push((int) -1)
0xcb0: Push((int) 11550)
0xcb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb2: Pop(3)
0xcb3: Return(); Pop(0)

0xcb4: Push((int) 10954)
0xcb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb6: IF (Stack[-1] == 0) GOTO 0xccb; Pop(1)

0xcb7: PushEmpty(string)
0xcb8: Stack[-1] = "Neutral"
0xcb9: Call 0xbb1

0xcba: Pop(1)
0xcbb: Push((int) 9941)
0xcbc: @@ SetMessage(Stack[-1])
0xcbd: Pop(1)
0xcbe: @@ ClearReplies()
0xcbf: Pop(0)
0xcc0: Push((int) 9942)
0xcc1: Push((int) 10956)
0xcc2: Push((int) 10955)
0xcc3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc4: Pop(3)
0xcc5: Push((int) 9949)
0xcc6: Push((int) 10938)
0xcc7: Push((int) 10965)
0xcc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc9: Pop(3)
0xcca: Return(); Pop(0)

0xccb: Push((int) 10956)
0xccc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xccd: IF (Stack[-1] == 0) GOTO 0xce2; Pop(1)

0xcce: PushEmpty(string)
0xccf: Stack[-1] = "Neutral"
0xcd0: Call 0xbb1

0xcd1: Pop(1)
0xcd2: Push((int) 9943)
0xcd3: @@ SetMessage(Stack[-1])
0xcd4: Pop(1)
0xcd5: @@ ClearReplies()
0xcd6: Pop(0)
0xcd7: Push((int) 9944)
0xcd8: Push((int) 10958)
0xcd9: Push((int) 10957)
0xcda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcdb: Pop(3)
0xcdc: Push((int) 9948)
0xcdd: Push((int) 10938)
0xcde: Push((int) 10963)
0xcdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce0: Pop(3)
0xce1: Return(); Pop(0)

0xce2: Push((int) 10958)
0xce3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce4: IF (Stack[-1] == 0) GOTO 0xcf9; Pop(1)

0xce5: PushEmpty(string)
0xce6: Stack[-1] = "Neutral"
0xce7: Call 0xbb1

0xce8: Pop(1)
0xce9: Push((int) 9945)
0xcea: @@ SetMessage(Stack[-1])
0xceb: Pop(1)
0xcec: @@ ClearReplies()
0xced: Pop(0)
0xcee: Push((int) 9946)
0xcef: Push((int) 10938)
0xcf0: Push((int) 10959)
0xcf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf2: Pop(3)
0xcf3: Push((int) 9947)
0xcf4: Push((int) 10938)
0xcf5: Push((int) 10961)
0xcf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf7: Pop(3)
0xcf8: Return(); Pop(0)

0xcf9: Push((int) 10938)
0xcfa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcfb: IF (Stack[-1] == 0) GOTO 0xd10; Pop(1)

0xcfc: PushEmpty(string)
0xcfd: Stack[-1] = "Neutral"
0xcfe: Call 0xbb1

0xcff: Pop(1)
0xd00: Push((int) 9928)
0xd01: @@ SetMessage(Stack[-1])
0xd02: Pop(1)
0xd03: @@ ClearReplies()
0xd04: Pop(0)
0xd05: Push((int) 9929)
0xd06: Push((int) 10940)
0xd07: Push((int) 10939)
0xd08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd09: Pop(3)
0xd0a: Push((int) 9939)
0xd0b: Push((int) 10942)
0xd0c: Push((int) 10951)
0xd0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0e: Pop(3)
0xd0f: Return(); Pop(0)

0xd10: Push((int) 10940)
0xd11: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd12: IF (Stack[-1] == 0) GOTO 0xd27; Pop(1)

0xd13: PushEmpty(string)
0xd14: Stack[-1] = "Neutral"
0xd15: Call 0xbb1

0xd16: Pop(1)
0xd17: Push((int) 9930)
0xd18: @@ SetMessage(Stack[-1])
0xd19: Pop(1)
0xd1a: @@ ClearReplies()
0xd1b: Pop(0)
0xd1c: Push((int) 9931)
0xd1d: Push((int) 10942)
0xd1e: Push((int) 10941)
0xd1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd20: Pop(3)
0xd21: Push((int) 9938)
0xd22: Push((int) 10942)
0xd23: Push((int) 10949)
0xd24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd25: Pop(3)
0xd26: Return(); Pop(0)

0xd27: Push((int) 10942)
0xd28: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd29: IF (Stack[-1] == 0) GOTO 0xd3e; Pop(1)

0xd2a: PushEmpty(string)
0xd2b: Stack[-1] = "Neutral"
0xd2c: Call 0xbb1

0xd2d: Pop(1)
0xd2e: Push((int) 9932)
0xd2f: @@ SetMessage(Stack[-1])
0xd30: Pop(1)
0xd31: @@ ClearReplies()
0xd32: Pop(0)
0xd33: Push((int) 9933)
0xd34: Push((int) 10944)
0xd35: Push((int) 10943)
0xd36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd37: Pop(3)
0xd38: Push((int) 9937)
0xd39: Push((int) 10944)
0xd3a: Push((int) 10947)
0xd3b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3c: Pop(3)
0xd3d: Return(); Pop(0)

0xd3e: Push((int) 10944)
0xd3f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd40: IF (Stack[-1] == 0) GOTO 0xd55; Pop(1)

0xd41: PushEmpty(string)
0xd42: Stack[-1] = "Neutral"
0xd43: Call 0xbb1

0xd44: Pop(1)
0xd45: Push((int) 9934)
0xd46: @@ SetMessage(Stack[-1])
0xd47: Pop(1)
0xd48: @@ ClearReplies()
0xd49: Pop(0)
0xd4a: Push((int) 9935)
0xd4b: Push((int) -1)
0xd4c: Push((int) 10945)
0xd4d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4e: Pop(3)
0xd4f: Push((int) 9936)
0xd50: Push((int) -1)
0xd51: Push((int) 10946)
0xd52: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd53: Pop(3)
0xd54: Return(); Pop(0)

0xd55: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd56: PushEmpty(bool)
0xd57: Call 0x108c

0xd58: Pop(0)
0xd59: IF (Stack[-1] == 0) GOTO 0xd5d; Pop(1)

0xd5a: @ lshStopAnimation()
0xd5b: Pop(0)
0xd5c: GOTO 0xd5f

0xd5d: @ StopAnimation()
0xd5e: Pop(0)
0xd5f: Return(); Pop(0)

0xd60: GOTO 0xbc2

0xd61: Return(); Pop(0)

0xd62: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xd63: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xd64: PushEmpty(bool, object)
0xd65: Stack[-1] = Stack[-11]
0xd66: Call 0xfc5

0xd67: Pop(1)
0xd68: Pop(1); Push((bool) Stack[-1] == 0)
0xd69: IF (Stack[-1] == 0) GOTO 0xd6c; Pop(1)

0xd6a: Stack[-10] = (int) -2
0xd6b: Return(); Pop(8)

0xd6c: @ CreateDialog(Stack[-4])
0xd6d: Pop(0)
0xd6e: PushEmpty(int)
0xd6f: Call 0x1088

0xd70: Pop(0)
0xd71: @@ SetNPCName(Stack[-1])
0xd72: Pop(1)
0xd73: PushEmpty(string)
0xd74: Call 0x108a

0xd75: Pop(0)
0xd76: @@ SetPhoto(Stack[-1])
0xd77: Pop(1)
0xd78: PushEmpty(int)
0xd79: Call 0x13e0

0xd7a: Pop(0)
0xd7b: @@ SetPlayerName(Stack[-1])
0xd7c: Pop(1)
0xd7d: Stack[-2] = (int) -1
0xd7e: @ IsOverrideActive(Stack[-3])
0xd7f: Pop(0)
0xd80: Push(Stack[-3])
0xd81: IF (Stack[-1] == 0) GOTO 0xd84; Pop(1)

0xd82: Stack[-10] = (int) -2
0xd83: Return(); Pop(8)

0xd84: @ DoDialog(Stack[-4])
0xd85: Pop(0)
0xd86: PushEmpty(object, object)
0xd87: Stack[-2] = Stack[-11]
0xd88: Stack[-1] = Stack[-6]
0xd89: Push(-2, 4); TaskCall(13)
0xd8a: Call 0xda1

0xd8b: Pop(-2, 4); TaskReturn
0xd8c: Pop(2)
0xd8d: @@ IsDialogEnd(Stack[-1])
0xd8e: Pop(0)
0xd8f: Pop(0); Push((bool) Stack[-1] == 0)
0xd90: IF (Stack[-1] == 0) GOTO 0xd96; Pop(1)

0xd91: @ sync()
0xd92: Pop(0)
0xd93: @@ IsDialogEnd(Stack[-1])
0xd94: Pop(0)
0xd95: GOTO 0xd8f

0xd96: PushEmpty(object)
0xd97: Stack[-1] = Stack[-10]
0xd98: Call 0xffd

0xd99: Pop(1)
0xd9a: @ StopDialog(Stack[-4])
0xd9b: Pop(0)
0xd9c: @@ GetReturnValue(Stack[-2])
0xd9d: Pop(0)
0xd9e: Stack[-10] = Stack[-2]
0xd9f: Return(); Pop(8)

0xda0: Stack[-4] = 0
0xda1: PushEmpty()
0xda2: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xda3: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xda4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xda5: Push((int) 1)
0xda6: IF (Stack[-1] == 0) GOTO 0xdc2; Pop(1)

0xda7: PushEmpty(string)
0xda8: Stack[-1] = "Neutral"
0xda9: Call 0xde0

0xdaa: Pop(1)
0xdab: Push((int) 11203)
0xdac: @@ SetMessage(Stack[-1])
0xdad: Pop(1)
0xdae: @@ ClearReplies()
0xdaf: Pop(0)
0xdb0: PushEmpty(bool, object)
0xdb1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdb2: Call 0x1340

0xdb3: Pop(1)
0xdb4: IF (Stack[-1] == 0) GOTO 0xdba; Pop(1)

0xdb5: Push((int) 11204)
0xdb6: Push((int) 12393)
0xdb7: Push((int) 12392)
0xdb8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb9: Pop(3)
0xdba: Push((int) 15336)
0xdbb: Push((int) -1)
0xdbc: Push((int) 16559)
0xdbd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdbe: Pop(3)
0xdbf: GOTO 0xdc2

0xdc0: Return(); Pop(0)

0xdc1: GOTO 0xda5

0xdc2: PushEmpty(bool)
0xdc3: Call 0x108c

0xdc4: Pop(0)
0xdc5: IF (Stack[-1] == 0) GOTO 0xdd1; Pop(1)

0xdc6: @ lshWaitForAnimEnd()
0xdc7: Pop(0)
0xdc8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdc9: IF (Stack[-1] == 0) GOTO 0xdcb; Pop(1)

0xdca: GOTO 0xdd0

0xdcb: PushEmpty(string)
0xdcc: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xdcd: Call 0x1001

0xdce: Pop(1)
0xdcf: GOTO 0xdc6

0xdd0: GOTO 0xddf

0xdd1: Push("all")
0xdd2: Push("idle")
0xdd3: @ PlayAnimation(Stack[-2], Stack[-1])
0xdd4: Pop(2)
0xdd5: @ WaitForAnimEnd()
0xdd6: Pop(0)
0xdd7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdd8: IF (Stack[-1] == 0) GOTO 0xdda; Pop(1)

0xdd9: GOTO 0xddf

0xdda: Push("all")
0xddb: Push("idle")
0xddc: @ PlayAnimation(Stack[-2], Stack[-1])
0xddd: Pop(2)
0xdde: GOTO 0xdd5

0xddf: Return(); Pop(0)

0xde0: PushEmpty()
0xde1: PushEmpty(bool)
0xde2: Call 0x108c

0xde3: Pop(0)
0xde4: Pop(1); Push((bool) Stack[-1] == 0)
0xde5: IF (Stack[-1] == 0) GOTO 0xde7; Pop(1)

0xde6: Return(); Pop(0)

0xde7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xde8: IF (Stack[-1] == 0) GOTO 0xdea; Pop(1)

0xde9: Return(); Pop(0)

0xdea: PushEmpty(string)
0xdeb: Stack[-1] = Stack[-2]
0xdec: Call 0x1001

0xded: Pop(1)
0xdee: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xdef: Return(); Pop(0)

0xdf0: PushEmpty()
0xdf1: Push((int) 1)
0xdf2: IF (Stack[-1] == 0) GOTO 0xe4f; Pop(1)

0xdf3: PushEmpty()
0xdf4: Call 0x1013

0xdf5: Pop(0)
0xdf6: Push((int) 12392)
0xdf7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdf8: IF (Stack[-1] == 0) GOTO 0xdfe; Pop(1)

0xdf9: PushEmpty(object, object)
0xdfa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdfb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdfc: Call 0x11f9

0xdfd: Pop(2)
0xdfe: Push((int) 12391)
0xdff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe00: IF (Stack[-1] == 0) GOTO 0xe1a; Pop(1)

0xe01: PushEmpty(string)
0xe02: Stack[-1] = "Neutral"
0xe03: Call 0xde0

0xe04: Pop(1)
0xe05: Push((int) 11203)
0xe06: @@ SetMessage(Stack[-1])
0xe07: Pop(1)
0xe08: @@ ClearReplies()
0xe09: Pop(0)
0xe0a: PushEmpty(bool, object)
0xe0b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe0c: Call 0x1340

0xe0d: Pop(1)
0xe0e: IF (Stack[-1] == 0) GOTO 0xe14; Pop(1)

0xe0f: Push((int) 11204)
0xe10: Push((int) 12393)
0xe11: Push((int) 12392)
0xe12: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe13: Pop(3)
0xe14: Push((int) 15336)
0xe15: Push((int) -1)
0xe16: Push((int) 16559)
0xe17: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe18: Pop(3)
0xe19: Return(); Pop(0)

0xe1a: Push((int) 12393)
0xe1b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1c: IF (Stack[-1] == 0) GOTO 0xe2c; Pop(1)

0xe1d: PushEmpty(string)
0xe1e: Stack[-1] = "Neutral"
0xe1f: Call 0xde0

0xe20: Pop(1)
0xe21: Push((int) 11205)
0xe22: @@ SetMessage(Stack[-1])
0xe23: Pop(1)
0xe24: @@ ClearReplies()
0xe25: Pop(0)
0xe26: Push((int) 11206)
0xe27: Push((int) 12395)
0xe28: Push((int) 12394)
0xe29: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2a: Pop(3)
0xe2b: Return(); Pop(0)

0xe2c: Push((int) 12395)
0xe2d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2e: IF (Stack[-1] == 0) GOTO 0xe43; Pop(1)

0xe2f: PushEmpty(string)
0xe30: Stack[-1] = "Neutral"
0xe31: Call 0xde0

0xe32: Pop(1)
0xe33: Push((int) 11207)
0xe34: @@ SetMessage(Stack[-1])
0xe35: Pop(1)
0xe36: @@ ClearReplies()
0xe37: Pop(0)
0xe38: Push((int) 11208)
0xe39: Push((int) -1)
0xe3a: Push((int) 12396)
0xe3b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3c: Pop(3)
0xe3d: Push((int) 11209)
0xe3e: Push((int) -1)
0xe3f: Push((int) 12397)
0xe40: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe41: Pop(3)
0xe42: Return(); Pop(0)

0xe43: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe44: PushEmpty(bool)
0xe45: Call 0x108c

0xe46: Pop(0)
0xe47: IF (Stack[-1] == 0) GOTO 0xe4b; Pop(1)

0xe48: @ lshStopAnimation()
0xe49: Pop(0)
0xe4a: GOTO 0xe4d

0xe4b: @ StopAnimation()
0xe4c: Pop(0)
0xe4d: Return(); Pop(0)

0xe4e: GOTO 0xdf1

0xe4f: Return(); Pop(0)

0xe50: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe51: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe52: PushEmpty(bool, object)
0xe53: Stack[-1] = Stack[-11]
0xe54: Call 0xfc5

0xe55: Pop(1)
0xe56: Pop(1); Push((bool) Stack[-1] == 0)
0xe57: IF (Stack[-1] == 0) GOTO 0xe5a; Pop(1)

0xe58: Stack[-10] = (int) -2
0xe59: Return(); Pop(8)

0xe5a: @ CreateDialog(Stack[-4])
0xe5b: Pop(0)
0xe5c: PushEmpty(int)
0xe5d: Call 0x1088

0xe5e: Pop(0)
0xe5f: @@ SetNPCName(Stack[-1])
0xe60: Pop(1)
0xe61: PushEmpty(string)
0xe62: Call 0x108a

0xe63: Pop(0)
0xe64: @@ SetPhoto(Stack[-1])
0xe65: Pop(1)
0xe66: PushEmpty(int)
0xe67: Call 0x13e0

0xe68: Pop(0)
0xe69: @@ SetPlayerName(Stack[-1])
0xe6a: Pop(1)
0xe6b: Stack[-2] = (int) -1
0xe6c: @ IsOverrideActive(Stack[-3])
0xe6d: Pop(0)
0xe6e: Push(Stack[-3])
0xe6f: IF (Stack[-1] == 0) GOTO 0xe72; Pop(1)

0xe70: Stack[-10] = (int) -2
0xe71: Return(); Pop(8)

0xe72: @ DoDialog(Stack[-4])
0xe73: Pop(0)
0xe74: PushEmpty(object, object)
0xe75: Stack[-2] = Stack[-11]
0xe76: Stack[-1] = Stack[-6]
0xe77: Push(-2, 4); TaskCall(15)
0xe78: Call 0xe8f

0xe79: Pop(-2, 4); TaskReturn
0xe7a: Pop(2)
0xe7b: @@ IsDialogEnd(Stack[-1])
0xe7c: Pop(0)
0xe7d: Pop(0); Push((bool) Stack[-1] == 0)
0xe7e: IF (Stack[-1] == 0) GOTO 0xe84; Pop(1)

0xe7f: @ sync()
0xe80: Pop(0)
0xe81: @@ IsDialogEnd(Stack[-1])
0xe82: Pop(0)
0xe83: GOTO 0xe7d

0xe84: PushEmpty(object)
0xe85: Stack[-1] = Stack[-10]
0xe86: Call 0xffd

0xe87: Pop(1)
0xe88: @ StopDialog(Stack[-4])
0xe89: Pop(0)
0xe8a: @@ GetReturnValue(Stack[-2])
0xe8b: Pop(0)
0xe8c: Stack[-10] = Stack[-2]
0xe8d: Return(); Pop(8)

0xe8e: Stack[-4] = 0
0xe8f: PushEmpty()
0xe90: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xe91: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xe92: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xe93: Push((int) 1)
0xe94: IF (Stack[-1] == 0) GOTO 0xeb5; Pop(1)

0xe95: PushEmpty(string)
0xe96: Stack[-1] = "Neutral"
0xe97: Call 0xed3

0xe98: Pop(1)
0xe99: Push((int) 11641)
0xe9a: @@ SetMessage(Stack[-1])
0xe9b: Pop(1)
0xe9c: @@ ClearReplies()
0xe9d: Pop(0)
0xe9e: PushEmpty(bool, object)
0xe9f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xea0: Call 0x12b0

0xea1: Pop(1)
0xea2: IF (Stack[-1] == 0) GOTO 0xea8; Pop(1)

0xea3: Push((int) 11642)
0xea4: Push((int) 12842)
0xea5: Push((int) 12841)
0xea6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea7: Pop(3)
0xea8: Push((int) 11651)
0xea9: Push((int) 12851)
0xeaa: Push((int) 12850)
0xeab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeac: Pop(3)
0xead: Push((int) 11660)
0xeae: Push((int) -1)
0xeaf: Push((int) 12859)
0xeb0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb1: Pop(3)
0xeb2: GOTO 0xeb5

0xeb3: Return(); Pop(0)

0xeb4: GOTO 0xe93

0xeb5: PushEmpty(bool)
0xeb6: Call 0x108c

0xeb7: Pop(0)
0xeb8: IF (Stack[-1] == 0) GOTO 0xec4; Pop(1)

0xeb9: @ lshWaitForAnimEnd()
0xeba: Pop(0)
0xebb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xebc: IF (Stack[-1] == 0) GOTO 0xebe; Pop(1)

0xebd: GOTO 0xec3

0xebe: PushEmpty(string)
0xebf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xec0: Call 0x1001

0xec1: Pop(1)
0xec2: GOTO 0xeb9

0xec3: GOTO 0xed2

0xec4: Push("all")
0xec5: Push("idle")
0xec6: @ PlayAnimation(Stack[-2], Stack[-1])
0xec7: Pop(2)
0xec8: @ WaitForAnimEnd()
0xec9: Pop(0)
0xeca: Push( Stack[3 + Tasks[-1].StackPointer] )
0xecb: IF (Stack[-1] == 0) GOTO 0xecd; Pop(1)

0xecc: GOTO 0xed2

0xecd: Push("all")
0xece: Push("idle")
0xecf: @ PlayAnimation(Stack[-2], Stack[-1])
0xed0: Pop(2)
0xed1: GOTO 0xec8

0xed2: Return(); Pop(0)

0xed3: PushEmpty()
0xed4: PushEmpty(bool)
0xed5: Call 0x108c

0xed6: Pop(0)
0xed7: Pop(1); Push((bool) Stack[-1] == 0)
0xed8: IF (Stack[-1] == 0) GOTO 0xeda; Pop(1)

0xed9: Return(); Pop(0)

0xeda: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xedb: IF (Stack[-1] == 0) GOTO 0xedd; Pop(1)

0xedc: Return(); Pop(0)

0xedd: PushEmpty(string)
0xede: Stack[-1] = Stack[-2]
0xedf: Call 0x1001

0xee0: Pop(1)
0xee1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xee2: Return(); Pop(0)

0xee3: PushEmpty()
0xee4: Push((int) 1)
0xee5: IF (Stack[-1] == 0) GOTO 0xfb3; Pop(1)

0xee6: PushEmpty()
0xee7: Call 0x1013

0xee8: Pop(0)
0xee9: Push((int) 12849)
0xeea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xeeb: IF (Stack[-1] == 0) GOTO 0xef6; Pop(1)

0xeec: PushEmpty(object, object)
0xeed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeef: Call 0x118b

0xef0: Pop(2)
0xef1: PushEmpty(object, object)
0xef2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xef4: Call 0x1175

0xef5: Pop(2)
0xef6: Push((int) 12840)
0xef7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xef8: IF (Stack[-1] == 0) GOTO 0xf17; Pop(1)

0xef9: PushEmpty(string)
0xefa: Stack[-1] = "Neutral"
0xefb: Call 0xed3

0xefc: Pop(1)
0xefd: Push((int) 11641)
0xefe: @@ SetMessage(Stack[-1])
0xeff: Pop(1)
0xf00: @@ ClearReplies()
0xf01: Pop(0)
0xf02: PushEmpty(bool, object)
0xf03: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf04: Call 0x12b0

0xf05: Pop(1)
0xf06: IF (Stack[-1] == 0) GOTO 0xf0c; Pop(1)

0xf07: Push((int) 11642)
0xf08: Push((int) 12842)
0xf09: Push((int) 12841)
0xf0a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0b: Pop(3)
0xf0c: Push((int) 11651)
0xf0d: Push((int) 12851)
0xf0e: Push((int) 12850)
0xf0f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf10: Pop(3)
0xf11: Push((int) 11660)
0xf12: Push((int) -1)
0xf13: Push((int) 12859)
0xf14: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf15: Pop(3)
0xf16: Return(); Pop(0)

0xf17: Push((int) 12851)
0xf18: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf19: IF (Stack[-1] == 0) GOTO 0xf29; Pop(1)

0xf1a: PushEmpty(string)
0xf1b: Stack[-1] = "Neutral"
0xf1c: Call 0xed3

0xf1d: Pop(1)
0xf1e: Push((int) 11652)
0xf1f: @@ SetMessage(Stack[-1])
0xf20: Pop(1)
0xf21: @@ ClearReplies()
0xf22: Pop(0)
0xf23: Push((int) 11653)
0xf24: Push((int) 12853)
0xf25: Push((int) 12852)
0xf26: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf27: Pop(3)
0xf28: Return(); Pop(0)

0xf29: Push((int) 12853)
0xf2a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf2b: IF (Stack[-1] == 0) GOTO 0xf3b; Pop(1)

0xf2c: PushEmpty(string)
0xf2d: Stack[-1] = "Neutral"
0xf2e: Call 0xed3

0xf2f: Pop(1)
0xf30: Push((int) 11654)
0xf31: @@ SetMessage(Stack[-1])
0xf32: Pop(1)
0xf33: @@ ClearReplies()
0xf34: Pop(0)
0xf35: Push((int) 11655)
0xf36: Push((int) 12855)
0xf37: Push((int) 12854)
0xf38: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf39: Pop(3)
0xf3a: Return(); Pop(0)

0xf3b: Push((int) 12855)
0xf3c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf3d: IF (Stack[-1] == 0) GOTO 0xf4d; Pop(1)

0xf3e: PushEmpty(string)
0xf3f: Stack[-1] = "Neutral"
0xf40: Call 0xed3

0xf41: Pop(1)
0xf42: Push((int) 11656)
0xf43: @@ SetMessage(Stack[-1])
0xf44: Pop(1)
0xf45: @@ ClearReplies()
0xf46: Pop(0)
0xf47: Push((int) 11657)
0xf48: Push((int) 12857)
0xf49: Push((int) 12856)
0xf4a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4b: Pop(3)
0xf4c: Return(); Pop(0)

0xf4d: Push((int) 12857)
0xf4e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf4f: IF (Stack[-1] == 0) GOTO 0xf5f; Pop(1)

0xf50: PushEmpty(string)
0xf51: Stack[-1] = "Neutral"
0xf52: Call 0xed3

0xf53: Pop(1)
0xf54: Push((int) 11658)
0xf55: @@ SetMessage(Stack[-1])
0xf56: Pop(1)
0xf57: @@ ClearReplies()
0xf58: Pop(0)
0xf59: Push((int) 11659)
0xf5a: Push((int) -1)
0xf5b: Push((int) 12858)
0xf5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5d: Pop(3)
0xf5e: Return(); Pop(0)

0xf5f: Push((int) 12842)
0xf60: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf61: IF (Stack[-1] == 0) GOTO 0xf71; Pop(1)

0xf62: PushEmpty(string)
0xf63: Stack[-1] = "Neutral"
0xf64: Call 0xed3

0xf65: Pop(1)
0xf66: Push((int) 11643)
0xf67: @@ SetMessage(Stack[-1])
0xf68: Pop(1)
0xf69: @@ ClearReplies()
0xf6a: Pop(0)
0xf6b: Push((int) 11644)
0xf6c: Push((int) 12844)
0xf6d: Push((int) 12843)
0xf6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6f: Pop(3)
0xf70: Return(); Pop(0)

0xf71: Push((int) 12844)
0xf72: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf73: IF (Stack[-1] == 0) GOTO 0xf83; Pop(1)

0xf74: PushEmpty(string)
0xf75: Stack[-1] = "Neutral"
0xf76: Call 0xed3

0xf77: Pop(1)
0xf78: Push((int) 11645)
0xf79: @@ SetMessage(Stack[-1])
0xf7a: Pop(1)
0xf7b: @@ ClearReplies()
0xf7c: Pop(0)
0xf7d: Push((int) 11646)
0xf7e: Push((int) 12846)
0xf7f: Push((int) 12845)
0xf80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf81: Pop(3)
0xf82: Return(); Pop(0)

0xf83: Push((int) 12846)
0xf84: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf85: IF (Stack[-1] == 0) GOTO 0xf95; Pop(1)

0xf86: PushEmpty(string)
0xf87: Stack[-1] = "Neutral"
0xf88: Call 0xed3

0xf89: Pop(1)
0xf8a: Push((int) 11647)
0xf8b: @@ SetMessage(Stack[-1])
0xf8c: Pop(1)
0xf8d: @@ ClearReplies()
0xf8e: Pop(0)
0xf8f: Push((int) 11648)
0xf90: Push((int) 12848)
0xf91: Push((int) 12847)
0xf92: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf93: Pop(3)
0xf94: Return(); Pop(0)

0xf95: Push((int) 12848)
0xf96: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf97: IF (Stack[-1] == 0) GOTO 0xfa7; Pop(1)

0xf98: PushEmpty(string)
0xf99: Stack[-1] = "Neutral"
0xf9a: Call 0xed3

0xf9b: Pop(1)
0xf9c: Push((int) 11649)
0xf9d: @@ SetMessage(Stack[-1])
0xf9e: Pop(1)
0xf9f: @@ ClearReplies()
0xfa0: Pop(0)
0xfa1: Push((int) 11650)
0xfa2: Push((int) -1)
0xfa3: Push((int) 12849)
0xfa4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa5: Pop(3)
0xfa6: Return(); Pop(0)

0xfa7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xfa8: PushEmpty(bool)
0xfa9: Call 0x108c

0xfaa: Pop(0)
0xfab: IF (Stack[-1] == 0) GOTO 0xfaf; Pop(1)

0xfac: @ lshStopAnimation()
0xfad: Pop(0)
0xfae: GOTO 0xfb1

0xfaf: @ StopAnimation()
0xfb0: Pop(0)
0xfb1: Return(); Pop(0)

0xfb2: GOTO 0xee4

0xfb3: Return(); Pop(0)

0xfb4: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0xfb5: @@ GetPosition(Stack[-4])
0xfb6: Pop(0)
0xfb7: @ GetPosition(Stack[-3])
0xfb8: Pop(0)
0xfb9: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0xfba: Push(CvectorIndex(Stack[-2], 0))
0xfbb: Push(CvectorIndex(Stack[-3], 2))
0xfbc: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xfbd: Pop(2)
0xfbe: Stack[-10] = Stack[-1]
0xfbf: Return(); Pop(8)

0xfc0: PushEmpty(bool, bool)
0xfc1: @ IsLoaded(Stack[-1])
0xfc2: Pop(0)
0xfc3: Stack[-3] = Stack[-1]
0xfc4: Return(); Pop(2)

0xfc5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0xfc6: @@ GetPosition(Stack[-7])
0xfc7: Pop(0)
0xfc8: @@ GetEyesHeight(Stack[-8])
0xfc9: Pop(0)
0xfca: Push(CvectorIndex(Stack[-7], 1))
0xfcb: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xfcc: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xfcd: @ GetPosition(Stack[-6])
0xfce: Pop(0)
0xfcf: @ GetEyesHeight(Stack[-8])
0xfd0: Pop(0)
0xfd1: Push(CvectorIndex(Stack[-6], 1))
0xfd2: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xfd3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xfd4: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0xfd5: Push(CvectorIndex(Stack[-5], 1))
0xfd6: Stack[-1] = (int) 0
0xfd7: CvectorIndex(Stack[-6], 1) = Stack[-1];
0xfd8: Pop(0); Push(Stack[-5] | Stack[-5]);
0xfd9: Pop(1); Push(Sqrt(Stack[-1]))
0xfda: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0xfdb: Stack[-4] = -Stack[-5]; Pop(0);
0xfdc: Push((int) 70)
0xfdd: Pop(1); Push(Stack[-6] * Stack[-1]);
0xfde: PushEmpty(cvector, cvector)
0xfdf: Push(CVector(0.0, 1.0, 0.0))
0xfe0: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0xfe1: Call 0x101a

0xfe2: Pop(1)
0xfe3: Push((int) 25)
0xfe4: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfe5: Pop(2); Push(Stack[-2] + Stack[-1]);
0xfe6: Push(CVector(0.0, 10.0, 0.0))
0xfe7: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0xfe8: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0xfe9: @ IsOverrideActive(Stack[-1])
0xfea: Pop(0)
0xfeb: Push(Stack[-1])
0xfec: IF (Stack[-1] == 0) GOTO 0xfef; Pop(1)

0xfed: Stack[-18] = (bool) 0
0xfee: Return(); Pop(16)

0xfef: @ StopWorld()
0xff0: Pop(0)
0xff1: @ CameraTransit(Stack[-2], Stack[-4])
0xff2: Pop(0)
0xff3: Push(CvectorIndex(Stack[-3], 0))
0xff4: Push(CvectorIndex(Stack[-4], 2))
0xff5: @ Rotate(Stack[-2], Stack[-1])
0xff6: Pop(2)
0xff7: @ CameraWaitForPlayFinish()
0xff8: Pop(0)
0xff9: @ ResumeWorld()
0xffa: Pop(0)
0xffb: Stack[-18] = (bool) 1
0xffc: Return(); Pop(16)

0xffd: PushEmpty()
0xffe: @ CameraSwitchToNormal()
0xfff: Pop(0)
0x1000: Return(); Pop(0)

0x1001: PushEmpty(float, float, float, float)
0x1002: Push("playing ")
0x1003: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1004: @ Trace(Stack[-1])
0x1005: Pop(1)
0x1006: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x1007: Pop(0)
0x1008: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x1009: Pop(0)
0x100a: Push("start: ")
0x100b: Pop(1); Push(Stack[-1] + Stack[-3]);
0x100c: @ Trace(Stack[-1])
0x100d: Pop(1)
0x100e: Push("end: ")
0x100f: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1010: @ Trace(Stack[-1])
0x1011: Pop(1)
0x1012: Return(); Pop(4)

0x1013: PushEmpty(bool)
0x1014: Call 0x108c

0x1015: Pop(0)
0x1016: IF (Stack[-1] == 0) GOTO 0x1019; Pop(1)

0x1017: @ lshStopSpeech()
0x1018: Pop(0)
0x1019: Return(); Pop(0)

0x101a: PushEmpty(float, float)
0x101b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x101c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x101d: Push((float)0.0)
0x101e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x101f: IF (Stack[-1] == 0) GOTO 0x1022; Pop(1)

0x1020: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1021: Return(); Pop(2)

0x1022: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1023: Return(); Pop(2)

0x1024: PushEmpty(int, int)
0x1025: @ GetVariable(Stack[-3], Stack[-1])
0x1026: Pop(0)
0x1027: Stack[-4] = Stack[-1]
0x1028: Return(); Pop(2)

0x1029: PushEmpty(object, object, object, object)
0x102a: @ GetMainOutdoorScene(Stack[-2])
0x102b: Pop(0)
0x102c: Push(".bin")
0x102d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x102e: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x102f: Pop(1)
0x1030: Stack[-6] = Stack[-1]
0x1031: Return(); Pop(4)

0x1032: Stack[-1] = 0
0x1033: Stack[-2] = 0
0x1034: PushEmpty(int, int, bool, int, int, bool)
0x1035: @@ GetItemID(Stack[-3])
0x1036: Pop(0)
0x1037: Push("Category")
0x1038: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x1039: Pop(1)
0x103a: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x103b: Pop(0)
0x103c: Pop(0); Push((bool) Stack[-1] == 0)
0x103d: IF (Stack[-1] == 0) GOTO 0x1040; Pop(1)

0x103e: @@ DropItems(Stack[-8], Stack[-7])
0x103f: Pop(0)
0x1040: Return(); Pop(6)

0x1041: PushEmpty(object, object)
0x1042: @ CreateInvItem(Stack[-1])
0x1043: Pop(0)
0x1044: @@ SetItemName(Stack[-4])
0x1045: Pop(0)
0x1046: PushEmpty(object, object, int)
0x1047: Stack[-3] = Stack[-8]
0x1048: Stack[-2] = Stack[-4]
0x1049: Stack[-1] = Stack[-6]
0x104a: Call 0x1034

0x104b: Pop(3)
0x104c: Return(); Pop(2)

0x104d: Stack[-1] = 0
0x104e: PushEmpty(int, bool, int, bool)
0x104f: @ GetInvItemByName(Stack[-2], Stack[-5])
0x1050: Pop(0)
0x1051: @@ HasItem(Stack[-2], Stack[-1])
0x1052: Pop(0)
0x1053: Stack[-7] = Stack[-1]
0x1054: Return(); Pop(4)

0x1055: PushEmpty(int, int, bool, int, int, bool)
0x1056: @ GetInvItemByName(Stack[-3], Stack[-7])
0x1057: Pop(0)
0x1058: Push("Category")
0x1059: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x105a: Pop(1)
0x105b: @@ RemoveItemByType(Stack[-1], Stack[-3], Stack[-2])
0x105c: Pop(0)
0x105d: Stack[-9] = Stack[-1]
0x105e: Return(); Pop(6)

0x105f: PushEmpty(object, object)
0x1060: @ FindActor(Stack[-1], Stack[-4])
0x1061: Pop(0)
0x1062: Pop(0); Push((bool) Stack[-1] == 0)
0x1063: IF (Stack[-1] == 0) GOTO 0x1066; Pop(1)

0x1064: Stack[-5] = (bool) 0
0x1065: Return(); Pop(2)

0x1066: @ Trigger(Stack[-1], Stack[-3])
0x1067: Pop(0)
0x1068: Stack[-5] = (bool) 1
0x1069: Return(); Pop(2)

0x106a: Stack[-1] = 0
0x106b: PushEmpty(float, float)
0x106c: @ GetGameTime(Stack[-1])
0x106d: Pop(0)
0x106e: Stack[-3] = Stack[-1]
0x106f: Return(); Pop(2)

0x1070: PushEmpty(float, float)
0x1071: @ GetGameTime(Stack[-1])
0x1072: Pop(0)
0x1073: Push((int) 1)
0x1074: PushEmpty(int)
0x1075: Push((int) 24)
0x1076: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1077: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1078: Return(); Pop(2)

0x1079: PushEmpty()
0x107a: PushEmpty(int)
0x107b: Call 0x1070

0x107c: Pop(0)
0x107d: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x107e: Return(); Pop(0)

0x107f: PushEmpty(bool, bool)
0x1080: PushEmpty(string)
0x1081: Stack[-1] = "No"
0x1082: Call 0x1001

0x1083: Pop(1)
0x1084: @ lshWaitForAnimEnd(Stack[-1])
0x1085: Pop(0)
0x1086: Stack[-3] = Stack[-1]
0x1087: Return(); Pop(2)

0x1088: Stack[-1] = (int) 2864
0x1089: Return(); Pop(0)

0x108a: Stack[-1] = "ui/NPC_Black.png"
0x108b: Return(); Pop(0)

0x108c: Stack[-1] = (bool) 1
0x108d: Return(); Pop(0)

0x108e: PushEmpty()
0x108f: Push("ood1Katerina1")
0x1090: Push((int) 1)
0x1091: @ SetVariable(Stack[-2], Stack[-1])
0x1092: Pop(2)
0x1093: Return(); Pop(0)

0x1094: PushEmpty()
0x1095: Push("ood1Katerina2")
0x1096: Push((int) 1)
0x1097: @ SetVariable(Stack[-2], Stack[-1])
0x1098: Pop(2)
0x1099: Return(); Pop(0)

0x109a: PushEmpty()
0x109b: Push("ood1Katerina3")
0x109c: Push((int) 1)
0x109d: @ SetVariable(Stack[-2], Stack[-1])
0x109e: Pop(2)
0x109f: Return(); Pop(0)

0x10a0: PushEmpty()
0x10a1: Push("KnowKaterina")
0x10a2: Push((int) 1)
0x10a3: @ SetVariable(Stack[-2], Stack[-1])
0x10a4: Pop(2)
0x10a5: Return(); Pop(0)

0x10a6: PushEmpty()
0x10a7: PushEmpty()
0x10a8: Call 0x1401

0x10a9: Pop(0)
0x10aa: PushEmpty()
0x10ab: Call 0x1431

0x10ac: Pop(0)
0x10ad: PushEmpty(object, string)
0x10ae: Stack[-1] = "quest_d1_04"
0x10af: Call 0x1029

0x10b0: Pop(2)
0x10b1: Return(); Pop(0)

0x10b2: PushEmpty()
0x10b3: Push("ood1Katerina4")
0x10b4: Push((int) 1)
0x10b5: @ SetVariable(Stack[-2], Stack[-1])
0x10b6: Pop(2)
0x10b7: Return(); Pop(0)

0x10b8: PushEmpty(object, object, object, object)
0x10b9: PushEmpty(object)
0x10ba: Call 0x13ae

0x10bb: Stack[-3] = Stack[-1]
0x10bc: Pop(1)
0x10bd: Push("d1q04KaterinaGotoMishka")
0x10be: @@ FindMark(Stack[-2], Stack[-1])
0x10bf: Pop(1)
0x10c0: Push(Stack[-1])
0x10c1: IF (Stack[-1] == 0) GOTO 0x10c4; Pop(1)

0x10c2: @@ Remove()
0x10c3: Pop(0)
0x10c4: Push("d1q04Spi4kaGotoPowderHouse")
0x10c5: @@ FindMark(Stack[-2], Stack[-1])
0x10c6: Pop(1)
0x10c7: Push(Stack[-1])
0x10c8: IF (Stack[-1] == 0) GOTO 0x10cb; Pop(1)

0x10c9: @@ Remove()
0x10ca: Pop(0)
0x10cb: Push("d1q04MishkaGotoSpi4ka")
0x10cc: @@ FindMark(Stack[-2], Stack[-1])
0x10cd: Pop(1)
0x10ce: Push(Stack[-1])
0x10cf: IF (Stack[-1] == 0) GOTO 0x10d2; Pop(1)

0x10d0: @@ Remove()
0x10d1: Pop(0)
0x10d2: PushEmpty()
0x10d3: Call 0x1411

0x10d4: Pop(0)
0x10d5: PushEmpty(bool, int)
0x10d6: Stack[-1] = (int) 44
0x10d7: Call 0x139d

0x10d8: Pop(2)
0x10d9: PushEmpty(bool, int)
0x10da: Stack[-1] = (int) 45
0x10db: Call 0x139d

0x10dc: Pop(2)
0x10dd: PushEmpty(bool, int)
0x10de: Stack[-1] = (int) 46
0x10df: Call 0x139d

0x10e0: Pop(2)
0x10e1: PushEmpty(bool, string, string)
0x10e2: Stack[-2] = "quest_d1_04"
0x10e3: Stack[-1] = "completed"
0x10e4: Call 0x105f

0x10e5: Pop(3)
0x10e6: PushEmpty(bool, object, string)
0x10e7: Stack[-2] = Stack[-9]
0x10e8: Stack[-1] = "powder"
0x10e9: Call 0x1055

0x10ea: Pop(3)
0x10eb: Return(); Pop(4)

0x10ec: Stack[-1] = 0
0x10ed: Stack[-2] = 0
0x10ee: PushEmpty()
0x10ef: Push("playsound")
0x10f0: Push("giveitem")
0x10f1: @ TriggerWorld(Stack[-2], Stack[-1])
0x10f2: Pop(2)
0x10f3: Return(); Pop(0)

0x10f4: PushEmpty(object, object, object, object)
0x10f5: PushEmpty(object)
0x10f6: Call 0x13ae

0x10f7: Stack[-3] = Stack[-1]
0x10f8: Pop(1)
0x10f9: Push("d1q04KaterinaGotoMishka")
0x10fa: @@ FindMark(Stack[-2], Stack[-1])
0x10fb: Pop(1)
0x10fc: Push(Stack[-1])
0x10fd: IF (Stack[-1] == 0) GOTO 0x1100; Pop(1)

0x10fe: @@ Remove()
0x10ff: Pop(0)
0x1100: Push("d1q04MishkaGotoSpi4ka")
0x1101: @@ FindMark(Stack[-2], Stack[-1])
0x1102: Pop(1)
0x1103: Push(Stack[-1])
0x1104: IF (Stack[-1] == 0) GOTO 0x1107; Pop(1)

0x1105: @@ Remove()
0x1106: Pop(0)
0x1107: Push("d1q04Spi4kaGotoPowderHouse")
0x1108: @@ FindMark(Stack[-2], Stack[-1])
0x1109: Pop(1)
0x110a: Push(Stack[-1])
0x110b: IF (Stack[-1] == 0) GOTO 0x110e; Pop(1)

0x110c: @@ Remove()
0x110d: Pop(0)
0x110e: PushEmpty()
0x110f: Call 0x1421

0x1110: Pop(0)
0x1111: PushEmpty(bool, int)
0x1112: Stack[-1] = (int) 44
0x1113: Call 0x139d

0x1114: Pop(2)
0x1115: PushEmpty(bool, int)
0x1116: Stack[-1] = (int) 45
0x1117: Call 0x139d

0x1118: Pop(2)
0x1119: PushEmpty(bool, int)
0x111a: Stack[-1] = (int) 46
0x111b: Call 0x139d

0x111c: Pop(2)
0x111d: PushEmpty(bool, string, string)
0x111e: Stack[-2] = "quest_d1_04"
0x111f: Stack[-1] = "failed"
0x1120: Call 0x105f

0x1121: Pop(3)
0x1122: Return(); Pop(4)

0x1123: Stack[-1] = 0
0x1124: Stack[-2] = 0
0x1125: PushEmpty()
0x1126: Push("KnowZemlja")
0x1127: Push((int) 1)
0x1128: @ SetVariable(Stack[-2], Stack[-1])
0x1129: Pop(2)
0x112a: Return(); Pop(0)

0x112b: PushEmpty()
0x112c: Push("KnowZastroiki")
0x112d: Push((int) 1)
0x112e: @ SetVariable(Stack[-2], Stack[-1])
0x112f: Pop(2)
0x1130: Return(); Pop(0)

0x1131: PushEmpty(object, object)
0x1132: PushEmpty(object)
0x1133: Call 0x13ae

0x1134: Stack[-2] = Stack[-1]
0x1135: Pop(1)
0x1136: Push("d1q04KaterinaGotoMishka")
0x1137: Push("pt_map_mishka")
0x1138: Push((int) 0)
0x1139: Push((int) 8643)
0x113a: PushEmpty(float)
0x113b: Call 0x106b

0x113c: Pop(0)
0x113d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x113e: Pop(5)
0x113f: Return(); Pop(2)

0x1140: Stack[-1] = 0
0x1141: PushEmpty()
0x1142: PushEmpty(object, string, float)
0x1143: PushEmpty(object)
0x1144: Call 0x13ae

0x1145: Stack[-4] = Stack[-1]
0x1146: Pop(1)
0x1147: Stack[-2] = "pt_map_mishka"
0x1148: Stack[-1] = (int) 2
0x1149: Call 0x13bf

0x114a: Pop(3)
0x114b: PushEmpty(object)
0x114c: Call 0x13ae

0x114d: Pop(0)
0x114e: @@ ShowMap(Stack[-1])
0x114f: Pop(1)
0x1150: Return(); Pop(0)

0x1151: PushEmpty()
0x1152: Push("ood1Katerina5")
0x1153: Push((int) 1)
0x1154: @ SetVariable(Stack[-2], Stack[-1])
0x1155: Pop(2)
0x1156: Return(); Pop(0)

0x1157: PushEmpty()
0x1158: Push("ood1Katerina6")
0x1159: Push((int) 1)
0x115a: @ SetVariable(Stack[-2], Stack[-1])
0x115b: Pop(2)
0x115c: Return(); Pop(0)

0x115d: PushEmpty()
0x115e: Push("ood1Katerina7")
0x115f: Push((int) 1)
0x1160: @ SetVariable(Stack[-2], Stack[-1])
0x1161: Pop(2)
0x1162: Return(); Pop(0)

0x1163: PushEmpty()
0x1164: Push("ood1Katerina8")
0x1165: Push((int) 1)
0x1166: @ SetVariable(Stack[-2], Stack[-1])
0x1167: Pop(2)
0x1168: Return(); Pop(0)

0x1169: PushEmpty()
0x116a: Push("ood1Katerina9")
0x116b: Push((int) 1)
0x116c: @ SetVariable(Stack[-2], Stack[-1])
0x116d: Pop(2)
0x116e: Return(); Pop(0)

0x116f: PushEmpty()
0x1170: Push("ood1Katerina10")
0x1171: Push((int) 1)
0x1172: @ SetVariable(Stack[-2], Stack[-1])
0x1173: Pop(2)
0x1174: Return(); Pop(0)

0x1175: PushEmpty()
0x1176: PushEmpty(object, string, float)
0x1177: PushEmpty(object)
0x1178: Call 0x13ae

0x1179: Stack[-4] = Stack[-1]
0x117a: Pop(1)
0x117b: Stack[-2] = "pt_map_lara"
0x117c: Stack[-1] = (int) 2
0x117d: Call 0x13bf

0x117e: Pop(3)
0x117f: PushEmpty(object)
0x1180: Call 0x13ae

0x1181: Pop(0)
0x1182: @@ ShowMap(Stack[-1])
0x1183: Pop(1)
0x1184: Return(); Pop(0)

0x1185: PushEmpty()
0x1186: Push("KnowRubin")
0x1187: Push((int) 1)
0x1188: @ SetVariable(Stack[-2], Stack[-1])
0x1189: Pop(2)
0x118a: Return(); Pop(0)

0x118b: PushEmpty(object, object)
0x118c: Push("d5q01")
0x118d: Push((int) 4)
0x118e: @ SetVariable(Stack[-2], Stack[-1])
0x118f: Pop(2)
0x1190: PushEmpty(object)
0x1191: Call 0x13ae

0x1192: Stack[-2] = Stack[-1]
0x1193: Pop(1)
0x1194: Push("d5q01KaterinaGotoLara")
0x1195: Push("pt_map_lara")
0x1196: Push((int) 1)
0x1197: Push((int) 11959)
0x1198: PushEmpty(float)
0x1199: Call 0x106b

0x119a: Pop(0)
0x119b: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x119c: Pop(5)
0x119d: PushEmpty()
0x119e: Call 0x1441

0x119f: Pop(0)
0x11a0: Return(); Pop(2)

0x11a1: Stack[-1] = 0
0x11a2: PushEmpty()
0x11a3: Push("d1q01KaterinaUHave1day")
0x11a4: Push((int) 1)
0x11a5: @ SetVariable(Stack[-2], Stack[-1])
0x11a6: Pop(2)
0x11a7: PushEmpty()
0x11a8: Call 0x13f1

0x11a9: Pop(0)
0x11aa: Return(); Pop(0)

0x11ab: PushEmpty()
0x11ac: Push("ood6Katerina1")
0x11ad: Push((int) 1)
0x11ae: @ SetVariable(Stack[-2], Stack[-1])
0x11af: Pop(2)
0x11b0: Return(); Pop(0)

0x11b1: PushEmpty()
0x11b2: Push("ood6Katerina2")
0x11b3: Push((int) 1)
0x11b4: @ SetVariable(Stack[-2], Stack[-1])
0x11b5: Pop(2)
0x11b6: Return(); Pop(0)

0x11b7: PushEmpty(object, object)
0x11b8: Push("d6q01")
0x11b9: Push((int) 2)
0x11ba: @ SetVariable(Stack[-2], Stack[-1])
0x11bb: Pop(2)
0x11bc: PushEmpty(object)
0x11bd: Call 0x13ae

0x11be: Stack[-2] = Stack[-1]
0x11bf: Pop(1)
0x11c0: Push("d6q01KaterinaGotoLaska")
0x11c1: Push("pt_map_laska")
0x11c2: Push((int) 1)
0x11c3: Push((int) 15398)
0x11c4: PushEmpty(float)
0x11c5: Call 0x106b

0x11c6: Pop(0)
0x11c7: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11c8: Pop(5)
0x11c9: Push("d6q01KaterinagotoLaskaSelf")
0x11ca: Push("pt_map_katerina")
0x11cb: Push((int) 1)
0x11cc: Push((int) 15399)
0x11cd: PushEmpty(float)
0x11ce: Call 0x106b

0x11cf: Pop(0)
0x11d0: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11d1: Pop(5)
0x11d2: PushEmpty()
0x11d3: Call 0x1451

0x11d4: Pop(0)
0x11d5: PushEmpty(bool, string, string)
0x11d6: Stack[-2] = "quest_d6_01"
0x11d7: Stack[-1] = "saburov_klara_remove"
0x11d8: Call 0x105f

0x11d9: Pop(3)
0x11da: Return(); Pop(2)

0x11db: Stack[-1] = 0
0x11dc: PushEmpty()
0x11dd: Push("ood6Katerina3")
0x11de: Push((int) 1)
0x11df: @ SetVariable(Stack[-2], Stack[-1])
0x11e0: Pop(2)
0x11e1: Return(); Pop(0)

0x11e2: PushEmpty()
0x11e3: Push("KnowMishka")
0x11e4: Push((int) 1)
0x11e5: @ SetVariable(Stack[-2], Stack[-1])
0x11e6: Pop(2)
0x11e7: Return(); Pop(0)

0x11e8: PushEmpty()
0x11e9: Push("ood3Katerina1")
0x11ea: Push((int) 1)
0x11eb: @ SetVariable(Stack[-2], Stack[-1])
0x11ec: Pop(2)
0x11ed: Return(); Pop(0)

0x11ee: PushEmpty()
0x11ef: Push("drapery is given")
0x11f0: @ Trace(Stack[-1])
0x11f1: Pop(1)
0x11f2: PushEmpty(object, string, int)
0x11f3: Stack[-3] = Stack[-5]
0x11f4: Stack[-2] = "drapery"
0x11f5: Stack[-1] = (int) 1
0x11f6: Call 0x1041

0x11f7: Pop(3)
0x11f8: Return(); Pop(0)

0x11f9: PushEmpty()
0x11fa: Push("ood4Katerina1")
0x11fb: Push((int) 1)
0x11fc: @ SetVariable(Stack[-2], Stack[-1])
0x11fd: Pop(2)
0x11fe: Return(); Pop(0)

0x11ff: PushEmpty()
0x1200: PushEmpty(int, string)
0x1201: Stack[-1] = "ood1Katerina1"
0x1202: Call 0x1024

0x1203: Pop(1)
0x1204: Push((int) 0)
0x1205: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1206: IF (Stack[-1] == 0) GOTO 0x1209; Pop(1)

0x1207: Stack[-2] = (bool) 1
0x1208: Return(); Pop(0)

0x1209: Stack[-2] = (bool) 0
0x120a: Return(); Pop(0)

0x120b: PushEmpty()
0x120c: PushEmpty(int, string)
0x120d: Stack[-1] = "ood1Katerina2"
0x120e: Call 0x1024

0x120f: Pop(1)
0x1210: Push((int) 0)
0x1211: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1212: IF (Stack[-1] == 0) GOTO 0x1215; Pop(1)

0x1213: Stack[-2] = (bool) 1
0x1214: Return(); Pop(0)

0x1215: Stack[-2] = (bool) 0
0x1216: Return(); Pop(0)

0x1217: PushEmpty()
0x1218: PushEmpty(int, string)
0x1219: Stack[-1] = "ood1Katerina3"
0x121a: Call 0x1024

0x121b: Pop(1)
0x121c: Push((int) 0)
0x121d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x121e: IF (Stack[-1] == 0) GOTO 0x1221; Pop(1)

0x121f: Stack[-2] = (bool) 1
0x1220: Return(); Pop(0)

0x1221: Stack[-2] = (bool) 0
0x1222: Return(); Pop(0)

0x1223: PushEmpty()
0x1224: PushEmpty(int, string)
0x1225: Stack[-1] = "d1q01"
0x1226: Call 0x1024

0x1227: Pop(1)
0x1228: Push((int) 0)
0x1229: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x122a: IF (Stack[-1] == 0) GOTO 0x122d; Pop(1)

0x122b: Stack[-2] = (bool) 1
0x122c: Return(); Pop(0)

0x122d: Stack[-2] = (bool) 0
0x122e: Return(); Pop(0)

0x122f: PushEmpty()
0x1230: PushEmpty(int, string)
0x1231: Stack[-1] = "d1q04"
0x1232: Call 0x1024

0x1233: Pop(1)
0x1234: Push((int) 0)
0x1235: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1236: IF (Stack[-1] == 0) GOTO 0x1239; Pop(1)

0x1237: Stack[-2] = (bool) 1
0x1238: Return(); Pop(0)

0x1239: Stack[-2] = (bool) 0
0x123a: Return(); Pop(0)

0x123b: PushEmpty()
0x123c: PushEmpty(int, string)
0x123d: Stack[-1] = "ood1Katerina4"
0x123e: Call 0x1024

0x123f: Pop(1)
0x1240: Push((int) 0)
0x1241: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1242: IF (Stack[-1] == 0) GOTO 0x1245; Pop(1)

0x1243: Stack[-2] = (bool) 1
0x1244: Return(); Pop(0)

0x1245: Stack[-2] = (bool) 0
0x1246: Return(); Pop(0)

0x1247: PushEmpty()
0x1248: PushEmpty(bool, object, string)
0x1249: Stack[-2] = Stack[-4]
0x124a: Stack[-1] = "powder"
0x124b: Call 0x104e

0x124c: Pop(2)
0x124d: IF (Stack[-1] == 0) GOTO 0x1250; Pop(1)

0x124e: Stack[-2] = (bool) 1
0x124f: Return(); Pop(0)

0x1250: Stack[-2] = (bool) 0
0x1251: Return(); Pop(0)

0x1252: PushEmpty()
0x1253: PushEmpty(bool, object)
0x1254: Stack[-1] = Stack[-3]
0x1255: Call 0x1370

0x1256: Pop(1)
0x1257: IF (Stack[-1] == 0) GOTO 0x125a; Pop(1)

0x1258: Stack[-2] = (bool) 1
0x1259: Return(); Pop(0)

0x125a: Stack[-2] = (bool) 0
0x125b: Return(); Pop(0)

0x125c: PushEmpty()
0x125d: PushEmpty(int, string)
0x125e: Stack[-1] = "ood1Katerina5"
0x125f: Call 0x1024

0x1260: Pop(1)
0x1261: Push((int) 0)
0x1262: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1263: IF (Stack[-1] == 0) GOTO 0x1266; Pop(1)

0x1264: Stack[-2] = (bool) 1
0x1265: Return(); Pop(0)

0x1266: Stack[-2] = (bool) 0
0x1267: Return(); Pop(0)

0x1268: PushEmpty()
0x1269: PushEmpty(int, string)
0x126a: Stack[-1] = "ood1Katerina6"
0x126b: Call 0x1024

0x126c: Pop(1)
0x126d: Push((int) 0)
0x126e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x126f: IF (Stack[-1] == 0) GOTO 0x1272; Pop(1)

0x1270: Stack[-2] = (bool) 1
0x1271: Return(); Pop(0)

0x1272: Stack[-2] = (bool) 0
0x1273: Return(); Pop(0)

0x1274: PushEmpty()
0x1275: PushEmpty(int, string)
0x1276: Stack[-1] = "ood1Katerina7"
0x1277: Call 0x1024

0x1278: Pop(1)
0x1279: Push((int) 0)
0x127a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x127b: IF (Stack[-1] == 0) GOTO 0x127e; Pop(1)

0x127c: Stack[-2] = (bool) 1
0x127d: Return(); Pop(0)

0x127e: Stack[-2] = (bool) 0
0x127f: Return(); Pop(0)

0x1280: PushEmpty()
0x1281: PushEmpty(int, string)
0x1282: Stack[-1] = "ood1Katerina8"
0x1283: Call 0x1024

0x1284: Pop(1)
0x1285: Push((int) 0)
0x1286: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1287: IF (Stack[-1] == 0) GOTO 0x128a; Pop(1)

0x1288: Stack[-2] = (bool) 1
0x1289: Return(); Pop(0)

0x128a: Stack[-2] = (bool) 0
0x128b: Return(); Pop(0)

0x128c: PushEmpty()
0x128d: PushEmpty(int, string)
0x128e: Stack[-1] = "ood1Katerina9"
0x128f: Call 0x1024

0x1290: Pop(1)
0x1291: Push((int) 0)
0x1292: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1293: IF (Stack[-1] == 0) GOTO 0x1296; Pop(1)

0x1294: Stack[-2] = (bool) 1
0x1295: Return(); Pop(0)

0x1296: Stack[-2] = (bool) 0
0x1297: Return(); Pop(0)

0x1298: PushEmpty()
0x1299: PushEmpty(int, string)
0x129a: Stack[-1] = "ood1Katerina10"
0x129b: Call 0x1024

0x129c: Pop(1)
0x129d: Push((int) 0)
0x129e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x129f: IF (Stack[-1] == 0) GOTO 0x12a2; Pop(1)

0x12a0: Stack[-2] = (bool) 1
0x12a1: Return(); Pop(0)

0x12a2: Stack[-2] = (bool) 0
0x12a3: Return(); Pop(0)

0x12a4: PushEmpty()
0x12a5: PushEmpty(int, string)
0x12a6: Stack[-1] = "d3q01"
0x12a7: Call 0x1024

0x12a8: Pop(1)
0x12a9: Push((int) 0)
0x12aa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12ab: IF (Stack[-1] == 0) GOTO 0x12ae; Pop(1)

0x12ac: Stack[-2] = (bool) 1
0x12ad: Return(); Pop(0)

0x12ae: Stack[-2] = (bool) 0
0x12af: Return(); Pop(0)

0x12b0: PushEmpty()
0x12b1: PushEmpty(int, string)
0x12b2: Stack[-1] = "d5q01"
0x12b3: Call 0x1024

0x12b4: Pop(1)
0x12b5: Push((int) 3)
0x12b6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12b7: IF (Stack[-1] == 0) GOTO 0x12ba; Pop(1)

0x12b8: Stack[-2] = (bool) 1
0x12b9: Return(); Pop(0)

0x12ba: Stack[-2] = (bool) 0
0x12bb: Return(); Pop(0)

0x12bc: PushEmpty()
0x12bd: PushEmpty(int, string)
0x12be: Stack[-1] = "d6q01"
0x12bf: Call 0x1024

0x12c0: Pop(1)
0x12c1: Push((int) 1)
0x12c2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12c3: IF (Stack[-1] == 0) GOTO 0x12c6; Pop(1)

0x12c4: Stack[-2] = (bool) 1
0x12c5: Return(); Pop(0)

0x12c6: Stack[-2] = (bool) 0
0x12c7: Return(); Pop(0)

0x12c8: PushEmpty()
0x12c9: PushEmpty(int, string)
0x12ca: Stack[-1] = "d6q01KnowKillerIsKlara"
0x12cb: Call 0x1024

0x12cc: Pop(1)
0x12cd: Push((int) 1)
0x12ce: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12cf: IF (Stack[-1] == 0) GOTO 0x12d2; Pop(1)

0x12d0: Stack[-2] = (bool) 1
0x12d1: Return(); Pop(0)

0x12d2: Stack[-2] = (bool) 0
0x12d3: Return(); Pop(0)

0x12d4: PushEmpty()
0x12d5: PushEmpty(int, string)
0x12d6: Stack[-1] = "ood6Katerina1"
0x12d7: Call 0x1024

0x12d8: Pop(1)
0x12d9: Push((int) 0)
0x12da: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12db: IF (Stack[-1] == 0) GOTO 0x12de; Pop(1)

0x12dc: Stack[-2] = (bool) 1
0x12dd: Return(); Pop(0)

0x12de: Stack[-2] = (bool) 0
0x12df: Return(); Pop(0)

0x12e0: PushEmpty()
0x12e1: PushEmpty(int, string)
0x12e2: Stack[-1] = "ood6Katerina2"
0x12e3: Call 0x1024

0x12e4: Pop(1)
0x12e5: Push((int) 0)
0x12e6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12e7: IF (Stack[-1] == 0) GOTO 0x12ea; Pop(1)

0x12e8: Stack[-2] = (bool) 1
0x12e9: Return(); Pop(0)

0x12ea: Stack[-2] = (bool) 0
0x12eb: Return(); Pop(0)

0x12ec: PushEmpty()
0x12ed: PushEmpty(int, string)
0x12ee: Stack[-1] = "d6q01"
0x12ef: Call 0x1024

0x12f0: Pop(1)
0x12f1: Push((int) 4)
0x12f2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12f3: IF (Stack[-1] == 0) GOTO 0x12f6; Pop(1)

0x12f4: Stack[-2] = (bool) 1
0x12f5: Return(); Pop(0)

0x12f6: Stack[-2] = (bool) 0
0x12f7: Return(); Pop(0)

0x12f8: PushEmpty()
0x12f9: PushEmpty(int, string)
0x12fa: Stack[-1] = "d6q01"
0x12fb: Call 0x1024

0x12fc: Pop(1)
0x12fd: Push((int) 3)
0x12fe: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12ff: IF (Stack[-1] == 0) GOTO 0x1302; Pop(1)

0x1300: Stack[-2] = (bool) 1
0x1301: Return(); Pop(0)

0x1302: Stack[-2] = (bool) 0
0x1303: Return(); Pop(0)

0x1304: PushEmpty()
0x1305: PushEmpty(int, string)
0x1306: Stack[-1] = "ood6Katerina3"
0x1307: Call 0x1024

0x1308: Pop(1)
0x1309: Push((int) 0)
0x130a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x130b: IF (Stack[-1] == 0) GOTO 0x130e; Pop(1)

0x130c: Stack[-2] = (bool) 1
0x130d: Return(); Pop(0)

0x130e: Stack[-2] = (bool) 0
0x130f: Return(); Pop(0)

0x1310: PushEmpty()
0x1311: PushEmpty(int, string)
0x1312: Stack[-1] = "KnowGeorg"
0x1313: Call 0x1024

0x1314: Pop(1)
0x1315: Push((int) 1)
0x1316: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1317: IF (Stack[-1] == 0) GOTO 0x131a; Pop(1)

0x1318: Stack[-2] = (bool) 1
0x1319: Return(); Pop(0)

0x131a: Stack[-2] = (bool) 0
0x131b: Return(); Pop(0)

0x131c: PushEmpty()
0x131d: PushEmpty(int, string)
0x131e: Stack[-1] = "KnowLaska"
0x131f: Call 0x1024

0x1320: Pop(1)
0x1321: Push((int) 1)
0x1322: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1323: IF (Stack[-1] == 0) GOTO 0x1326; Pop(1)

0x1324: Stack[-2] = (bool) 1
0x1325: Return(); Pop(0)

0x1326: Stack[-2] = (bool) 0
0x1327: Return(); Pop(0)

0x1328: PushEmpty()
0x1329: PushEmpty(int, string)
0x132a: Stack[-1] = "KnowMaria"
0x132b: Call 0x1024

0x132c: Pop(1)
0x132d: Push((int) 1)
0x132e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x132f: IF (Stack[-1] == 0) GOTO 0x1332; Pop(1)

0x1330: Stack[-2] = (bool) 1
0x1331: Return(); Pop(0)

0x1332: Stack[-2] = (bool) 0
0x1333: Return(); Pop(0)

0x1334: PushEmpty()
0x1335: PushEmpty(int, string)
0x1336: Stack[-1] = "ood3Katerina1"
0x1337: Call 0x1024

0x1338: Pop(1)
0x1339: Push((int) 0)
0x133a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x133b: IF (Stack[-1] == 0) GOTO 0x133e; Pop(1)

0x133c: Stack[-2] = (bool) 1
0x133d: Return(); Pop(0)

0x133e: Stack[-2] = (bool) 0
0x133f: Return(); Pop(0)

0x1340: PushEmpty()
0x1341: PushEmpty(int, string)
0x1342: Stack[-1] = "ood4Katerina1"
0x1343: Call 0x1024

0x1344: Pop(1)
0x1345: Push((int) 0)
0x1346: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1347: IF (Stack[-1] == 0) GOTO 0x134a; Pop(1)

0x1348: Stack[-2] = (bool) 1
0x1349: Return(); Pop(0)

0x134a: Stack[-2] = (bool) 0
0x134b: Return(); Pop(0)

0x134c: PushEmpty()
0x134d: PushEmpty(int, string)
0x134e: Stack[-1] = "KnowOspina"
0x134f: Call 0x1024

0x1350: Pop(1)
0x1351: Push((int) 1)
0x1352: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1353: IF (Stack[-1] == 0) GOTO 0x1356; Pop(1)

0x1354: Stack[-2] = (bool) 1
0x1355: Return(); Pop(0)

0x1356: Stack[-2] = (bool) 0
0x1357: Return(); Pop(0)

0x1358: PushEmpty()
0x1359: PushEmpty(int, string)
0x135a: Stack[-1] = "KnowKapella"
0x135b: Call 0x1024

0x135c: Pop(1)
0x135d: Push((int) 1)
0x135e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x135f: IF (Stack[-1] == 0) GOTO 0x1362; Pop(1)

0x1360: Stack[-2] = (bool) 1
0x1361: Return(); Pop(0)

0x1362: Stack[-2] = (bool) 0
0x1363: Return(); Pop(0)

0x1364: PushEmpty()
0x1365: PushEmpty(int, string)
0x1366: Stack[-1] = "KnowPredictions"
0x1367: Call 0x1024

0x1368: Pop(1)
0x1369: Push((int) 1)
0x136a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x136b: IF (Stack[-1] == 0) GOTO 0x136e; Pop(1)

0x136c: Stack[-2] = (bool) 1
0x136d: Return(); Pop(0)

0x136e: Stack[-2] = (bool) 0
0x136f: Return(); Pop(0)

0x1370: PushEmpty()
0x1371: Stack[-2] = (bool) 0
0x1372: Return(); Pop(0)

0x1373: PushEmpty(object, object)
0x1374: @ GetDiaryRoot(Stack[-1])
0x1375: Pop(0)
0x1376: Pop(0); Push((bool) Stack[-1] == 0)
0x1377: IF (Stack[-1] == 0) GOTO 0x137d; Pop(1)

0x1378: Push("Can't retrieve diary root")
0x1379: @ Trace(Stack[-1])
0x137a: Pop(1)
0x137b: Stack[-3] = (bool) 0
0x137c: Return(); Pop(2)

0x137d: Stack[-3] = Stack[-1]
0x137e: Return(); Pop(2)

0x137f: Stack[-1] = 0
0x1380: PushEmpty(object, object, int, object, object, int)
0x1381: PushEmpty(object)
0x1382: Call 0x1373

0x1383: Stack[-4] = Stack[-1]
0x1384: Pop(1)
0x1385: @@ Find(Stack[-7], Stack[-2])
0x1386: Pop(0)
0x1387: Pop(0); Push((bool) Stack[-2] == 0)
0x1388: IF (Stack[-1] == 0) GOTO 0x138f; Pop(1)

0x1389: Push("Can't find diary parent with id: ")
0x138a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x138b: @ Trace(Stack[-1])
0x138c: Pop(1)
0x138d: Stack[-9] = (bool) 0
0x138e: Return(); Pop(6)

0x138f: @@ AddChild(Stack[-8])
0x1390: Pop(0)
0x1391: Push("player_diary")
0x1392: Push((int) 1)
0x1393: @ SetVariable(Stack[-2], Stack[-1])
0x1394: Pop(2)
0x1395: @@ GetCategory(Stack[-1])
0x1396: Pop(0)
0x1397: @ SetDiarySection(Stack[-1])
0x1398: Pop(0)
0x1399: Stack[-9] = (bool) 0
0x139a: Return(); Pop(6)

0x139b: Stack[-2] = 0
0x139c: Stack[-3] = 0
0x139d: PushEmpty(object, object, object, object)
0x139e: PushEmpty(object)
0x139f: Call 0x1373

0x13a0: Stack[-3] = Stack[-1]
0x13a1: Pop(1)
0x13a2: @@ Find(Stack[-5], Stack[-1])
0x13a3: Pop(0)
0x13a4: Pop(0); Push((bool) Stack[-1] == 0)
0x13a5: IF (Stack[-1] == 0) GOTO 0x13a8; Pop(1)

0x13a6: Stack[-6] = (bool) 0
0x13a7: Return(); Pop(4)

0x13a8: @@ Remove()
0x13a9: Pop(0)
0x13aa: Stack[-6] = (bool) 1
0x13ab: Return(); Pop(4)

0x13ac: Stack[-1] = 0
0x13ad: Stack[-2] = 0
0x13ae: PushEmpty(object, object, object, object)
0x13af: @ GetMainOutdoorScene(Stack[-2])
0x13b0: Pop(0)
0x13b1: Pop(0); Push((bool) Stack[-2] == 0)
0x13b2: IF (Stack[-1] == 0) GOTO 0x13b9; Pop(1)

0x13b3: Push("Can't find main outdoor scene")
0x13b4: @ Trace(Stack[-1])
0x13b5: Pop(1)
0x13b6: Stack[-1] = 0
0x13b7: Stack[-5] = Stack[-1]
0x13b8: Return(); Pop(4)

0x13b9: @@ GetMap(Stack[-1])
0x13ba: Pop(0)
0x13bb: Stack[-5] = Stack[-1]
0x13bc: Return(); Pop(4)

0x13bd: Stack[-1] = 0
0x13be: Stack[-2] = 0
0x13bf: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x13c0: @ GetMainOutdoorScene(Stack[-2])
0x13c1: Pop(0)
0x13c2: Pop(0); Push((bool) Stack[-2] == 0)
0x13c3: IF (Stack[-1] == 0) GOTO 0x13c8; Pop(1)

0x13c4: Push("Can't find main outdoor scene")
0x13c5: @ Trace(Stack[-1])
0x13c6: Pop(1)
0x13c7: Return(); Pop(8)

0x13c8: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x13c9: Pop(0)
0x13ca: Pop(0); Push((bool) Stack[-1] == 0)
0x13cb: IF (Stack[-1] == 0) GOTO 0x13d2; Pop(1)

0x13cc: Push("Warning: outdoor scene locator ")
0x13cd: Pop(1); Push(Stack[-1] + Stack[-11]);
0x13ce: Push(" doesnt exist")
0x13cf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x13d0: @ Trace(Stack[-1])
0x13d1: Pop(1)
0x13d2: @@ GetMap(Stack[-11])
0x13d3: Pop(0)
0x13d4: Pop(0); Push((bool) Stack[-11] == 0)
0x13d5: IF (Stack[-1] == 0) GOTO 0x13da; Pop(1)

0x13d6: Push("Can't find map")
0x13d7: @ Trace(Stack[-1])
0x13d8: Pop(1)
0x13d9: Return(); Pop(8)

0x13da: Push(CvectorIndex(Stack[-4], 0))
0x13db: Push(CvectorIndex(Stack[-5], 2))
0x13dc: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x13dd: Pop(2)
0x13de: Return(); Pop(8)

0x13df: Stack[-2] = 0
0x13e0: PushEmpty(int, int)
0x13e1: Push("player")
0x13e2: @ GetVariable(Stack[-1], Stack[-2])
0x13e3: Pop(1)
0x13e4: Push((int) 0)
0x13e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13e6: IF (Stack[-1] == 0) GOTO 0x13ea; Pop(1)

0x13e7: Stack[-3] = (int) 200001
0x13e8: Return(); Pop(2)

0x13e9: GOTO 0x13ef

0x13ea: Push((int) 1)
0x13eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13ec: IF (Stack[-1] == 0) GOTO 0x13ef; Pop(1)

0x13ed: Stack[-3] = (int) 200002
0x13ee: Return(); Pop(2)

0x13ef: Stack[-3] = (int) 200003
0x13f0: Return(); Pop(2)

0x13f1: PushEmpty(object, object)
0x13f2: Push("Adding diary entry")
0x13f3: @ Trace(Stack[-1])
0x13f4: Pop(1)
0x13f5: Push((int) 32)
0x13f6: Push((int) 1)
0x13f7: Push((int) 12114)
0x13f8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13f9: Pop(3)
0x13fa: PushEmpty(bool, object, int)
0x13fb: Stack[-2] = Stack[-4]
0x13fc: Stack[-1] = (int) 2
0x13fd: Call 0x1380

0x13fe: Pop(3)
0x13ff: Return(); Pop(2)

0x1400: Stack[-1] = 0
0x1401: PushEmpty(object, object)
0x1402: Push("Adding diary entry")
0x1403: @ Trace(Stack[-1])
0x1404: Pop(1)
0x1405: Push((int) 43)
0x1406: Push((int) 2)
0x1407: Push((int) 12125)
0x1408: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1409: Pop(3)
0x140a: PushEmpty(bool, object, int)
0x140b: Stack[-2] = Stack[-4]
0x140c: Stack[-1] = (int) -1
0x140d: Call 0x1380

0x140e: Pop(3)
0x140f: Return(); Pop(2)

0x1410: Stack[-1] = 0
0x1411: PushEmpty(object, object)
0x1412: Push("Adding diary entry")
0x1413: @ Trace(Stack[-1])
0x1414: Pop(1)
0x1415: Push((int) 47)
0x1416: Push((int) 2)
0x1417: Push((int) 12129)
0x1418: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1419: Pop(3)
0x141a: PushEmpty(bool, object, int)
0x141b: Stack[-2] = Stack[-4]
0x141c: Stack[-1] = (int) 43
0x141d: Call 0x1380

0x141e: Pop(3)
0x141f: Return(); Pop(2)

0x1420: Stack[-1] = 0
0x1421: PushEmpty(object, object)
0x1422: Push("Adding diary entry")
0x1423: @ Trace(Stack[-1])
0x1424: Pop(1)
0x1425: Push((int) 48)
0x1426: Push((int) 2)
0x1427: Push((int) 12130)
0x1428: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1429: Pop(3)
0x142a: PushEmpty(bool, object, int)
0x142b: Stack[-2] = Stack[-4]
0x142c: Stack[-1] = (int) 43
0x142d: Call 0x1380

0x142e: Pop(3)
0x142f: Return(); Pop(2)

0x1430: Stack[-1] = 0
0x1431: PushEmpty(object, object)
0x1432: Push("Adding diary entry")
0x1433: @ Trace(Stack[-1])
0x1434: Pop(1)
0x1435: Push((int) 44)
0x1436: Push((int) 2)
0x1437: Push((int) 12126)
0x1438: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1439: Pop(3)
0x143a: PushEmpty(bool, object, int)
0x143b: Stack[-2] = Stack[-4]
0x143c: Stack[-1] = (int) 43
0x143d: Call 0x1380

0x143e: Pop(3)
0x143f: Return(); Pop(2)

0x1440: Stack[-1] = 0
0x1441: PushEmpty(object, object)
0x1442: Push("Adding diary entry")
0x1443: @ Trace(Stack[-1])
0x1444: Pop(1)
0x1445: Push((int) 142)
0x1446: Push((int) 1)
0x1447: Push((int) 15342)
0x1448: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1449: Pop(3)
0x144a: PushEmpty(bool, object, int)
0x144b: Stack[-2] = Stack[-4]
0x144c: Stack[-1] = (int) 139
0x144d: Call 0x1380

0x144e: Pop(3)
0x144f: Return(); Pop(2)

0x1450: Stack[-1] = 0
0x1451: PushEmpty(object, object)
0x1452: Push("Adding diary entry")
0x1453: @ Trace(Stack[-1])
0x1454: Pop(1)
0x1455: Push((int) 123)
0x1456: Push((int) 1)
0x1457: Push((int) 13746)
0x1458: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1459: Pop(3)
0x145a: PushEmpty(bool, object, int)
0x145b: Stack[-2] = Stack[-4]
0x145c: Stack[-1] = (int) 111
0x145d: Call 0x1380

0x145e: Pop(3)
0x145f: Return(); Pop(2)

0x1460: Stack[-1] = 0
0x1461: Push(GlobalVars[1])
0x1462: Stack[-1] = (bool) 0
0x1463: GlobalVars[1] = Stack[-1]; Pop(1)
0x1464: Return(); Pop(0)

0x1465: PushEmpty()
0x1466: Push(GlobalVars[1])
0x1467: Pop(1); Push((bool) Stack[-1] == 0)
0x1468: IF (Stack[-1] == 0) GOTO 0x1472; Pop(1)

0x1469: PushEmpty(int, object)
0x146a: Stack[-1] = Stack[-3]
0x146b: Push(-2, 1); TaskCall(2)
0x146c: Call 0x31

0x146d: Pop(-2, 1); TaskReturn
0x146e: Pop(2)
0x146f: Push(GlobalVars[1])
0x1470: Stack[-1] = (bool) 1
0x1471: GlobalVars[1] = Stack[-1]; Pop(1)
0x1472: PushEmpty(bool, int)
0x1473: Stack[-1] = (int) 1
0x1474: Call 0x1079

0x1475: Pop(1)
0x1476: IF (Stack[-1] == 0) GOTO 0x147e; Pop(1)

0x1477: PushEmpty(int, object)
0x1478: Stack[-1] = Stack[-3]
0x1479: Push(-2, 1); TaskCall(6)
0x147a: Call 0x40b

0x147b: Pop(-2, 1); TaskReturn
0x147c: Pop(2)
0x147d: Return(); Pop(0)

0x147e: PushEmpty(bool, int)
0x147f: Stack[-1] = (int) 2
0x1480: Call 0x1079

0x1481: Pop(1)
0x1482: IF (Stack[-1] == 0) GOTO 0x148a; Pop(1)

0x1483: PushEmpty(int, object)
0x1484: Stack[-1] = Stack[-3]
0x1485: Push(-2, 1); TaskCall(8)
0x1486: Call 0x9cd

0x1487: Pop(-2, 1); TaskReturn
0x1488: Pop(2)
0x1489: Return(); Pop(0)

0x148a: PushEmpty(bool, int)
0x148b: Stack[-1] = (int) 3
0x148c: Call 0x1079

0x148d: Pop(1)
0x148e: IF (Stack[-1] == 0) GOTO 0x1496; Pop(1)

0x148f: PushEmpty(int, object)
0x1490: Stack[-1] = Stack[-3]
0x1491: Push(-2, 1); TaskCall(10)
0x1492: Call 0xb0b

0x1493: Pop(-2, 1); TaskReturn
0x1494: Pop(2)
0x1495: Return(); Pop(0)

0x1496: PushEmpty(bool, int)
0x1497: Stack[-1] = (int) 4
0x1498: Call 0x1079

0x1499: Pop(1)
0x149a: IF (Stack[-1] == 0) GOTO 0x14a2; Pop(1)

0x149b: PushEmpty(int, object)
0x149c: Stack[-1] = Stack[-3]
0x149d: Push(-2, 1); TaskCall(12)
0x149e: Call 0xd62

0x149f: Pop(-2, 1); TaskReturn
0x14a0: Pop(2)
0x14a1: Return(); Pop(0)

0x14a2: PushEmpty(bool, int)
0x14a3: Stack[-1] = (int) 5
0x14a4: Call 0x1079

0x14a5: Pop(1)
0x14a6: IF (Stack[-1] == 0) GOTO 0x14ae; Pop(1)

0x14a7: PushEmpty(int, object)
0x14a8: Stack[-1] = Stack[-3]
0x14a9: Push(-2, 1); TaskCall(14)
0x14aa: Call 0xe50

0x14ab: Pop(-2, 1); TaskReturn
0x14ac: Pop(2)
0x14ad: Return(); Pop(0)

0x14ae: PushEmpty(bool, int)
0x14af: Stack[-1] = (int) 6
0x14b0: Call 0x1079

0x14b1: Pop(1)
0x14b2: IF (Stack[-1] == 0) GOTO 0x14ba; Pop(1)

0x14b3: PushEmpty(int, object)
0x14b4: Stack[-1] = Stack[-3]
0x14b5: Push(-2, 1); TaskCall(4)
0x14b6: Call 0x13d

0x14b7: Pop(-2, 1); TaskReturn
0x14b8: Pop(2)
0x14b9: Return(); Pop(0)

0x14ba: PushEmpty(bool)
0x14bb: Call 0x107f

0x14bc: Pop(1)
0x14bd: Return(); Pop(0)

