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
	No
	ui/NPC_Spi4ka.png
	ood1Spi4ka1
	ood1Spi4ka2
	ood1Spi4ka3
	lockpick1time is given
	lockpick
	SetItemName
	uses
	SetProperty
	playsound
	giveitem
	d1q04KaterinaGotoMishka
	FindMark
	Remove
	d1q04MishkaGotoSpi4ka
	d1q04Spi4kaGotoPowderHouse
	quest_d1_04
	failed
	KnowShabnak
	ood2Spi4ka1
	ood2Spi4ka2
	KnowAlbinos
	KnowZemlja
	d2q01
	quest_d2_01
	woman
	ood1Spi4ka4
	ood1Spi4ka5
	mapmark
	pt_map_powderhouse
	AddMark
	ood6Spi4ka1
	d6q03
	quest_d6_03
	place_albinos
	ood6Spi4ka2
	completed
	ood6Spi4ka3
	ood6Spi4ka4
	ood2Spi4ka3
	KnowSpi4ka
	ShowMap
	KnowTermitnik
	d1q01FirstGeorgVisit
	d1q04
	d6q03AlbinosKilled
	d6q01
	KnowMishka
	KnowOspina
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
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	lshWaitForAnimEnd (1 args)
	SetVariable (2 args)
	CreateInvItem (1 args)
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
		EVENT_11 Op = 0x232 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5f4 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x982 Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0xfb3

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0xb75

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
0x15: Call 0xbb6

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
0x26: Call 0xfb7

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0xb69

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0xb7a

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0xc27

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0xc29

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0xf32

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
0x67: Call 0xbb2

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
0x79: Call 0xd23

0x7a: Pop(2)
0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral"
0x7d: Call 0xb4

0x7e: Pop(1)
0x7f: Push((int) 356)
0x80: @@ SetMessage(Stack[-1])
0x81: Pop(1)
0x82: @@ ClearReplies()
0x83: Pop(0)
0x84: Push((int) 357)
0x85: Push((int) 417)
0x86: Push((int) 414)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: Push((int) 358)
0x8a: Push((int) 418)
0x8b: Push((int) 415)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: Push((int) 359)
0x8f: Push((int) -1)
0x90: Push((int) 416)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: GOTO 0x96

0x94: Return(); Pop(0)

0x95: GOTO 0x74

0x96: PushEmpty(bool)
0x97: Call 0xc2b

0x98: Pop(0)
0x99: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9a: @ lshWaitForAnimEnd()
0x9b: Pop(0)
0x9c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xa4

0x9f: PushEmpty(string)
0xa0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa1: Call 0xbb6

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
0xb6: Call 0xc2b

0xb7: Pop(0)
0xb8: Pop(1); Push((bool) Stack[-1] == 0)
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: Return(); Pop(0)

0xbb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Return(); Pop(0)

0xbe: PushEmpty(string)
0xbf: Stack[-1] = Stack[-2]
0xc0: Call 0xbb6

0xc1: Pop(1)
0xc2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: Push((int) 1)
0xc6: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0xc7: PushEmpty()
0xc8: Call 0xbc8

0xc9: Pop(0)
0xca: Push((int) 413)
0xcb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call 0xd23

0xd1: Pop(2)
0xd2: PushEmpty(string)
0xd3: Stack[-1] = "Neutral"
0xd4: Call 0xb4

0xd5: Pop(1)
0xd6: Push((int) 356)
0xd7: @@ SetMessage(Stack[-1])
0xd8: Pop(1)
0xd9: @@ ClearReplies()
0xda: Pop(0)
0xdb: Push((int) 357)
0xdc: Push((int) 417)
0xdd: Push((int) 414)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: Push((int) 358)
0xe1: Push((int) 418)
0xe2: Push((int) 415)
0xe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: Push((int) 359)
0xe6: Push((int) -1)
0xe7: Push((int) 416)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Return(); Pop(0)

0xeb: Push((int) 418)
0xec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xee: PushEmpty(string)
0xef: Stack[-1] = "Neutral"
0xf0: Call 0xb4

0xf1: Pop(1)
0xf2: Push((int) 361)
0xf3: @@ SetMessage(Stack[-1])
0xf4: Pop(1)
0xf5: @@ ClearReplies()
0xf6: Pop(0)
0xf7: Push((int) 362)
0xf8: Push((int) 417)
0xf9: Push((int) 419)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Push((int) 363)
0xfd: Push((int) 417)
0xfe: Push((int) 420)
0xff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100: Pop(3)
0x101: Return(); Pop(0)

0x102: Push((int) 417)
0x103: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x105: PushEmpty(string)
0x106: Stack[-1] = "Neutral"
0x107: Call 0xb4

0x108: Pop(1)
0x109: Push((int) 360)
0x10a: @@ SetMessage(Stack[-1])
0x10b: Pop(1)
0x10c: @@ ClearReplies()
0x10d: Pop(0)
0x10e: Push((int) 364)
0x10f: Push((int) 425)
0x110: Push((int) 423)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Push((int) 365)
0x114: Push((int) 425)
0x115: Push((int) 424)
0x116: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117: Pop(3)
0x118: Return(); Pop(0)

0x119: Push((int) 425)
0x11a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x11c: PushEmpty(string)
0x11d: Stack[-1] = "Neutral"
0x11e: Call 0xb4

0x11f: Pop(1)
0x120: Push((int) 366)
0x121: @@ SetMessage(Stack[-1])
0x122: Pop(1)
0x123: @@ ClearReplies()
0x124: Pop(0)
0x125: Push((int) 367)
0x126: Push((int) -1)
0x127: Push((int) 426)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: Push((int) 368)
0x12b: Push((int) -1)
0x12c: Push((int) 427)
0x12d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(3)
0x12f: Return(); Pop(0)

0x130: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x131: PushEmpty(bool)
0x132: Call 0xc2b

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
0x141: Call 0xb7a

0x142: Pop(1)
0x143: Pop(1); Push((bool) Stack[-1] == 0)
0x144: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x145: Stack[-10] = (int) -2
0x146: Return(); Pop(8)

0x147: @ CreateDialog(Stack[-4])
0x148: Pop(0)
0x149: PushEmpty(int)
0x14a: Call 0xc27

0x14b: Pop(0)
0x14c: @@ SetNPCName(Stack[-1])
0x14d: Pop(1)
0x14e: PushEmpty(string)
0x14f: Call 0xc29

0x150: Pop(0)
0x151: @@ SetPhoto(Stack[-1])
0x152: Pop(1)
0x153: PushEmpty(int)
0x154: Call 0xf32

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
0x173: Call 0xbb2

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
0x181: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x182: PushEmpty(string)
0x183: Stack[-1] = "Neutral"
0x184: Call 0x222

0x185: Pop(1)
0x186: Push((int) 5851)
0x187: @@ SetMessage(Stack[-1])
0x188: Pop(1)
0x189: @@ ClearReplies()
0x18a: Pop(0)
0x18b: PushEmpty(bool)
0x18c: Stack[-1] = (bool) 0
0x18d: PushEmpty(bool, object)
0x18e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18f: Call 0xd4b

0x190: Pop(1)
0x191: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x192: PushEmpty(bool, object)
0x193: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x194: Call 0xd57

0x195: Pop(1)
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: Stack[-1] = (bool) 1
0x198: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x199: Push((int) 5852)
0x19a: Push((int) 6464)
0x19b: Push((int) 6443)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: PushEmpty(bool)
0x19f: Stack[-1] = (bool) 0
0x1a0: PushEmpty(bool, object)
0x1a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a2: Call 0xd63

0x1a3: Pop(1)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a5: PushEmpty(bool, object)
0x1a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a7: Call 0xd3f

0x1a8: Pop(1)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1aa: Stack[-1] = (bool) 1
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1ac: Push((int) 8356)
0x1ad: Push((int) 6444)
0x1ae: Push((int) 9179)
0x1af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b0: Pop(3)
0x1b1: PushEmpty(bool)
0x1b2: Stack[-1] = (bool) 1
0x1b3: PushEmpty(bool)
0x1b4: Stack[-1] = (bool) 0
0x1b5: PushEmpty(bool, object)
0x1b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b7: Call 0xdc3

0x1b8: Pop(1)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1ba: PushEmpty(bool, object)
0x1bb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bc: Call 0xd6f

0x1bd: Pop(1)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bf: Stack[-1] = (bool) 1
0x1c0: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1c1: PushEmpty(bool)
0x1c2: Stack[-1] = (bool) 0
0x1c3: PushEmpty(bool, object)
0x1c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c5: Call 0xde1

0x1c6: Pop(1)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c8: PushEmpty(bool, object)
0x1c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ca: Call 0xd6f

0x1cb: Pop(1)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cd: Stack[-1] = (bool) 1
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cf: Stack[-1] = (bool) 0
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d1: Push((int) 8357)
0x1d2: Push((int) 6453)
0x1d3: Push((int) 9180)
0x1d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d5: Pop(3)
0x1d6: PushEmpty(bool)
0x1d7: Stack[-1] = (bool) 0
0x1d8: PushEmpty(bool, object)
0x1d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1da: Call 0xe6f

0x1db: Pop(1)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1dd: PushEmpty(bool, object)
0x1de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1df: Call 0xdab

0x1e0: Pop(1)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e2: Stack[-1] = (bool) 1
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e4: Push((int) 8365)
0x1e5: Push((int) 9205)
0x1e6: Push((int) 9188)
0x1e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e8: Pop(3)
0x1e9: PushEmpty(bool)
0x1ea: Stack[-1] = (bool) 0
0x1eb: PushEmpty(bool, object)
0x1ec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ed: Call 0xe63

0x1ee: Pop(1)
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f0: PushEmpty(bool, object)
0x1f1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f2: Call 0xdb7

0x1f3: Pop(1)
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f5: Stack[-1] = (bool) 1
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f7: Push((int) 8379)
0x1f8: Push((int) 9378)
0x1f9: Push((int) 9202)
0x1fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fb: Pop(3)
0x1fc: Push((int) 8520)
0x1fd: Push((int) -1)
0x1fe: Push((int) 9362)
0x1ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x200: Pop(3)
0x201: GOTO 0x204

0x202: Return(); Pop(0)

0x203: GOTO 0x180

0x204: PushEmpty(bool)
0x205: Call 0xc2b

0x206: Pop(0)
0x207: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x208: @ lshWaitForAnimEnd()
0x209: Pop(0)
0x20a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x20b: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20c: GOTO 0x212

0x20d: PushEmpty(string)
0x20e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x20f: Call 0xbb6

0x210: Pop(1)
0x211: GOTO 0x208

0x212: GOTO 0x221

0x213: Push("all")
0x214: Push("idle")
0x215: @ PlayAnimation(Stack[-2], Stack[-1])
0x216: Pop(2)
0x217: @ WaitForAnimEnd()
0x218: Pop(0)
0x219: Push( Stack[3 + Tasks[-1].StackPointer] )
0x21a: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x21b: GOTO 0x221

0x21c: Push("all")
0x21d: Push("idle")
0x21e: @ PlayAnimation(Stack[-2], Stack[-1])
0x21f: Pop(2)
0x220: GOTO 0x217

0x221: Return(); Pop(0)

0x222: PushEmpty()
0x223: PushEmpty(bool)
0x224: Call 0xc2b

0x225: Pop(0)
0x226: Pop(1); Push((bool) Stack[-1] == 0)
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: Return(); Pop(0)

0x229: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: Return(); Pop(0)

0x22c: PushEmpty(string)
0x22d: Stack[-1] = Stack[-2]
0x22e: Call 0xbb6

0x22f: Pop(1)
0x230: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x231: Return(); Pop(0)

0x232: PushEmpty()
0x233: Push((int) 1)
0x234: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x235: PushEmpty()
0x236: Call 0xbc8

0x237: Pop(0)
0x238: Push((int) 6801)
0x239: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x23b: PushEmpty(object, object)
0x23c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x23d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23e: Call 0xc2d

0x23f: Pop(2)
0x240: PushEmpty(object, object)
0x241: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x242: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x243: Call 0xc3f

0x244: Pop(2)
0x245: PushEmpty(object, object)
0x246: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x247: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x248: Call 0xc54

0x249: Pop(2)
0x24a: PushEmpty(object, object)
0x24b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x24c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24d: Call 0xcc9

0x24e: Pop(2)
0x24f: PushEmpty(object, object)
0x250: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x251: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x252: Call 0xcc3

0x253: Pop(2)
0x254: PushEmpty(object, object)
0x255: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x256: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x257: Call 0xd29

0x258: Pop(2)
0x259: Push((int) 6802)
0x25a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25b: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x25c: PushEmpty(object, object)
0x25d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x25e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25f: Call 0xc2d

0x260: Pop(2)
0x261: PushEmpty(object, object)
0x262: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x263: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x264: Call 0xc5a

0x265: Pop(2)
0x266: Push((int) 6800)
0x267: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x268: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x269: PushEmpty(object, object)
0x26a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x26b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26c: Call 0xc2d

0x26d: Pop(2)
0x26e: PushEmpty(object, object)
0x26f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x270: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x271: Call 0xc5a

0x272: Pop(2)
0x273: Push((int) 6449)
0x274: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x276: PushEmpty(object, object)
0x277: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x278: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x279: Call 0xc33

0x27a: Pop(2)
0x27b: Push((int) 6450)
0x27c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27d: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x27e: PushEmpty(object, object)
0x27f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x280: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x281: Call 0xc33

0x282: Pop(2)
0x283: Push((int) 6451)
0x284: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x285: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x286: PushEmpty(object, object)
0x287: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x288: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x289: Call 0xc33

0x28a: Pop(2)
0x28b: Push((int) 6452)
0x28c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x28e: PushEmpty(object, object)
0x28f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x290: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x291: Call 0xc33

0x292: Pop(2)
0x293: Push((int) 9365)
0x294: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x295: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x296: PushEmpty(object, object)
0x297: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x298: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x299: Call 0xc33

0x29a: Pop(2)
0x29b: Push((int) 6456)
0x29c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x29e: PushEmpty(object, object)
0x29f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a1: Call 0xc39

0x2a2: Pop(2)
0x2a3: Push((int) 6457)
0x2a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a6: PushEmpty(object, object)
0x2a7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a9: Call 0xc39

0x2aa: Pop(2)
0x2ab: Push((int) 6463)
0x2ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2ae: PushEmpty(object, object)
0x2af: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b1: Call 0xc39

0x2b2: Pop(2)
0x2b3: Push((int) 6458)
0x2b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b5: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b6: PushEmpty(object, object)
0x2b7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b9: Call 0xc39

0x2ba: Pop(2)
0x2bb: Push((int) 9372)
0x2bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2be: PushEmpty(object, object)
0x2bf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c1: Call 0xcb7

0x2c2: Pop(2)
0x2c3: Push((int) 9373)
0x2c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c5: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c6: PushEmpty(object, object)
0x2c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c9: Call 0xcb7

0x2ca: Pop(2)
0x2cb: Push((int) 9381)
0x2cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2ce: PushEmpty(object, object)
0x2cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d1: Call 0xcbd

0x2d2: Pop(2)
0x2d3: Push((int) 6442)
0x2d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d5: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x2d6: PushEmpty(string)
0x2d7: Stack[-1] = "Neutral"
0x2d8: Call 0x222

0x2d9: Pop(1)
0x2da: Push((int) 5851)
0x2db: @@ SetMessage(Stack[-1])
0x2dc: Pop(1)
0x2dd: @@ ClearReplies()
0x2de: Pop(0)
0x2df: PushEmpty(bool)
0x2e0: Stack[-1] = (bool) 0
0x2e1: PushEmpty(bool, object)
0x2e2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e3: Call 0xd4b

0x2e4: Pop(1)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e6: PushEmpty(bool, object)
0x2e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e8: Call 0xd57

0x2e9: Pop(1)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2eb: Stack[-1] = (bool) 1
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ed: Push((int) 5852)
0x2ee: Push((int) 6464)
0x2ef: Push((int) 6443)
0x2f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f1: Pop(3)
0x2f2: PushEmpty(bool)
0x2f3: Stack[-1] = (bool) 0
0x2f4: PushEmpty(bool, object)
0x2f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f6: Call 0xd63

0x2f7: Pop(1)
0x2f8: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2f9: PushEmpty(bool, object)
0x2fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2fb: Call 0xd3f

0x2fc: Pop(1)
0x2fd: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fe: Stack[-1] = (bool) 1
0x2ff: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x300: Push((int) 8356)
0x301: Push((int) 6444)
0x302: Push((int) 9179)
0x303: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x304: Pop(3)
0x305: PushEmpty(bool)
0x306: Stack[-1] = (bool) 1
0x307: PushEmpty(bool)
0x308: Stack[-1] = (bool) 0
0x309: PushEmpty(bool, object)
0x30a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30b: Call 0xdc3

0x30c: Pop(1)
0x30d: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30e: PushEmpty(bool, object)
0x30f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x310: Call 0xd6f

0x311: Pop(1)
0x312: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x313: Stack[-1] = (bool) 1
0x314: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x315: PushEmpty(bool)
0x316: Stack[-1] = (bool) 0
0x317: PushEmpty(bool, object)
0x318: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x319: Call 0xde1

0x31a: Pop(1)
0x31b: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31c: PushEmpty(bool, object)
0x31d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x31e: Call 0xd6f

0x31f: Pop(1)
0x320: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x321: Stack[-1] = (bool) 1
0x322: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x323: Stack[-1] = (bool) 0
0x324: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x325: Push((int) 8357)
0x326: Push((int) 6453)
0x327: Push((int) 9180)
0x328: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x329: Pop(3)
0x32a: PushEmpty(bool)
0x32b: Stack[-1] = (bool) 0
0x32c: PushEmpty(bool, object)
0x32d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32e: Call 0xe6f

0x32f: Pop(1)
0x330: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x331: PushEmpty(bool, object)
0x332: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x333: Call 0xdab

0x334: Pop(1)
0x335: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x336: Stack[-1] = (bool) 1
0x337: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x338: Push((int) 8365)
0x339: Push((int) 9205)
0x33a: Push((int) 9188)
0x33b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33c: Pop(3)
0x33d: PushEmpty(bool)
0x33e: Stack[-1] = (bool) 0
0x33f: PushEmpty(bool, object)
0x340: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x341: Call 0xe63

0x342: Pop(1)
0x343: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x344: PushEmpty(bool, object)
0x345: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x346: Call 0xdb7

0x347: Pop(1)
0x348: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x349: Stack[-1] = (bool) 1
0x34a: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34b: Push((int) 8379)
0x34c: Push((int) 9378)
0x34d: Push((int) 9202)
0x34e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34f: Pop(3)
0x350: Push((int) 8520)
0x351: Push((int) -1)
0x352: Push((int) 9362)
0x353: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x354: Pop(3)
0x355: Return(); Pop(0)

0x356: Push((int) 9378)
0x357: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x359: PushEmpty(string)
0x35a: Stack[-1] = "Neutral"
0x35b: Call 0x222

0x35c: Pop(1)
0x35d: Push((int) 8535)
0x35e: @@ SetMessage(Stack[-1])
0x35f: Pop(1)
0x360: @@ ClearReplies()
0x361: Pop(0)
0x362: Push((int) 8536)
0x363: Push((int) 9206)
0x364: Push((int) 9379)
0x365: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x366: Pop(3)
0x367: Return(); Pop(0)

0x368: Push((int) 9206)
0x369: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x36b: PushEmpty(string)
0x36c: Stack[-1] = "Neutral"
0x36d: Call 0x222

0x36e: Pop(1)
0x36f: Push((int) 8383)
0x370: @@ SetMessage(Stack[-1])
0x371: Pop(1)
0x372: @@ ClearReplies()
0x373: Pop(0)
0x374: Push((int) 8538)
0x375: Push((int) -1)
0x376: Push((int) 9381)
0x377: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x378: Pop(3)
0x379: Return(); Pop(0)

0x37a: Push((int) 9205)
0x37b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37c: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x37d: PushEmpty(string)
0x37e: Stack[-1] = "Neutral"
0x37f: Call 0x222

0x380: Pop(1)
0x381: Push((int) 8382)
0x382: @@ SetMessage(Stack[-1])
0x383: Pop(1)
0x384: @@ ClearReplies()
0x385: Pop(0)
0x386: Push((int) 8524)
0x387: Push((int) 9367)
0x388: Push((int) 9366)
0x389: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38a: Pop(3)
0x38b: Return(); Pop(0)

0x38c: Push((int) 9367)
0x38d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38e: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x38f: PushEmpty(string)
0x390: Stack[-1] = "Neutral"
0x391: Call 0x222

0x392: Pop(1)
0x393: Push((int) 8525)
0x394: @@ SetMessage(Stack[-1])
0x395: Pop(1)
0x396: @@ ClearReplies()
0x397: Pop(0)
0x398: Push((int) 8526)
0x399: Push((int) 9369)
0x39a: Push((int) 9368)
0x39b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39c: Pop(3)
0x39d: PushEmpty(bool, object)
0x39e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x39f: Call 0xe63

0x3a0: Pop(1)
0x3a1: Pop(1); Push((bool) Stack[-1] == 0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a3: Push((int) 8532)
0x3a4: Push((int) 9375)
0x3a5: Push((int) 9374)
0x3a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a7: Pop(3)
0x3a8: Return(); Pop(0)

0x3a9: Push((int) 9375)
0x3aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3ac: PushEmpty(string)
0x3ad: Stack[-1] = "Neutral"
0x3ae: Call 0x222

0x3af: Pop(1)
0x3b0: Push((int) 8533)
0x3b1: @@ SetMessage(Stack[-1])
0x3b2: Pop(1)
0x3b3: @@ ClearReplies()
0x3b4: Pop(0)
0x3b5: Push((int) 8534)
0x3b6: Push((int) 9369)
0x3b7: Push((int) 9376)
0x3b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b9: Pop(3)
0x3ba: Return(); Pop(0)

0x3bb: Push((int) 9369)
0x3bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3be: PushEmpty(string)
0x3bf: Stack[-1] = "Neutral"
0x3c0: Call 0x222

0x3c1: Pop(1)
0x3c2: Push((int) 8527)
0x3c3: @@ SetMessage(Stack[-1])
0x3c4: Pop(1)
0x3c5: @@ ClearReplies()
0x3c6: Pop(0)
0x3c7: Push((int) 8528)
0x3c8: Push((int) 9371)
0x3c9: Push((int) 9370)
0x3ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cb: Pop(3)
0x3cc: Return(); Pop(0)

0x3cd: Push((int) 9371)
0x3ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3d0: PushEmpty(string)
0x3d1: Stack[-1] = "Neutral"
0x3d2: Call 0x222

0x3d3: Pop(1)
0x3d4: Push((int) 8529)
0x3d5: @@ SetMessage(Stack[-1])
0x3d6: Pop(1)
0x3d7: @@ ClearReplies()
0x3d8: Pop(0)
0x3d9: Push((int) 8530)
0x3da: Push((int) -1)
0x3db: Push((int) 9372)
0x3dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dd: Pop(3)
0x3de: Push((int) 8531)
0x3df: Push((int) -1)
0x3e0: Push((int) 9373)
0x3e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e2: Pop(3)
0x3e3: Return(); Pop(0)

0x3e4: Push((int) 6453)
0x3e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3e7: PushEmpty(string)
0x3e8: Stack[-1] = "Neutral"
0x3e9: Call 0x222

0x3ea: Pop(1)
0x3eb: Push((int) 5862)
0x3ec: @@ SetMessage(Stack[-1])
0x3ed: Pop(1)
0x3ee: @@ ClearReplies()
0x3ef: Pop(0)
0x3f0: Push((int) 5863)
0x3f1: Push((int) 6455)
0x3f2: Push((int) 6454)
0x3f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f4: Pop(3)
0x3f5: Push((int) 5868)
0x3f6: Push((int) 6460)
0x3f7: Push((int) 6459)
0x3f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f9: Pop(3)
0x3fa: Push((int) 5867)
0x3fb: Push((int) -1)
0x3fc: Push((int) 6458)
0x3fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fe: Pop(3)
0x3ff: Return(); Pop(0)

0x400: Push((int) 6460)
0x401: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x403: PushEmpty(string)
0x404: Stack[-1] = "Neutral"
0x405: Call 0x222

0x406: Pop(1)
0x407: Push((int) 5869)
0x408: @@ SetMessage(Stack[-1])
0x409: Pop(1)
0x40a: @@ ClearReplies()
0x40b: Pop(0)
0x40c: Push((int) 5870)
0x40d: Push((int) 6455)
0x40e: Push((int) 6461)
0x40f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x410: Pop(3)
0x411: Push((int) 5871)
0x412: Push((int) -1)
0x413: Push((int) 6463)
0x414: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x415: Pop(3)
0x416: Return(); Pop(0)

0x417: Push((int) 6455)
0x418: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x419: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x41a: PushEmpty(string)
0x41b: Stack[-1] = "Neutral"
0x41c: Call 0x222

0x41d: Pop(1)
0x41e: Push((int) 5864)
0x41f: @@ SetMessage(Stack[-1])
0x420: Pop(1)
0x421: @@ ClearReplies()
0x422: Pop(0)
0x423: Push((int) 5865)
0x424: Push((int) -1)
0x425: Push((int) 6456)
0x426: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x427: Pop(3)
0x428: Push((int) 5866)
0x429: Push((int) -1)
0x42a: Push((int) 6457)
0x42b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42c: Pop(3)
0x42d: Return(); Pop(0)

0x42e: Push((int) 6444)
0x42f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x430: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x431: PushEmpty(string)
0x432: Stack[-1] = "Neutral"
0x433: Call 0x222

0x434: Pop(1)
0x435: Push((int) 5853)
0x436: @@ SetMessage(Stack[-1])
0x437: Pop(1)
0x438: @@ ClearReplies()
0x439: Pop(0)
0x43a: Push((int) 5854)
0x43b: Push((int) 6446)
0x43c: Push((int) 6445)
0x43d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43e: Pop(3)
0x43f: Push((int) 5861)
0x440: Push((int) -1)
0x441: Push((int) 6452)
0x442: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x443: Pop(3)
0x444: PushEmpty(bool, object)
0x445: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x446: Call 0xd7b

0x447: Pop(1)
0x448: Pop(1); Push((bool) Stack[-1] == 0)
0x449: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44a: Push((int) 8521)
0x44b: Push((int) 9364)
0x44c: Push((int) 9363)
0x44d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44e: Pop(3)
0x44f: Return(); Pop(0)

0x450: Push((int) 9364)
0x451: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x453: PushEmpty(object, object)
0x454: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x455: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x456: Call 0xc8b

0x457: Pop(2)
0x458: PushEmpty(string)
0x459: Stack[-1] = "Neutral"
0x45a: Call 0x222

0x45b: Pop(1)
0x45c: Push((int) 8522)
0x45d: @@ SetMessage(Stack[-1])
0x45e: Pop(1)
0x45f: @@ ClearReplies()
0x460: Pop(0)
0x461: Push((int) 8523)
0x462: Push((int) -1)
0x463: Push((int) 9365)
0x464: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x465: Pop(3)
0x466: Return(); Pop(0)

0x467: Push((int) 6446)
0x468: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x469: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x46a: PushEmpty(string)
0x46b: Stack[-1] = "Neutral"
0x46c: Call 0x222

0x46d: Pop(1)
0x46e: Push((int) 5855)
0x46f: @@ SetMessage(Stack[-1])
0x470: Pop(1)
0x471: @@ ClearReplies()
0x472: Pop(0)
0x473: Push((int) 5856)
0x474: Push((int) 6448)
0x475: Push((int) 6447)
0x476: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x477: Pop(3)
0x478: Push((int) 5860)
0x479: Push((int) -1)
0x47a: Push((int) 6451)
0x47b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47c: Pop(3)
0x47d: Return(); Pop(0)

0x47e: Push((int) 6448)
0x47f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x480: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x481: PushEmpty(object, object)
0x482: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x483: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x484: Call 0xd39

0x485: Pop(2)
0x486: PushEmpty(object, object)
0x487: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x488: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x489: Call 0xca3

0x48a: Pop(2)
0x48b: PushEmpty(string)
0x48c: Stack[-1] = "Neutral"
0x48d: Call 0x222

0x48e: Pop(1)
0x48f: Push((int) 5857)
0x490: @@ SetMessage(Stack[-1])
0x491: Pop(1)
0x492: @@ ClearReplies()
0x493: Pop(0)
0x494: Push((int) 5858)
0x495: Push((int) -1)
0x496: Push((int) 6449)
0x497: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x498: Pop(3)
0x499: Push((int) 5859)
0x49a: Push((int) -1)
0x49b: Push((int) 6450)
0x49c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49d: Pop(3)
0x49e: Return(); Pop(0)

0x49f: Push((int) 6464)
0x4a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a1: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4a2: PushEmpty(string)
0x4a3: Stack[-1] = "Neutral"
0x4a4: Call 0x222

0x4a5: Pop(1)
0x4a6: Push((int) 5872)
0x4a7: @@ SetMessage(Stack[-1])
0x4a8: Pop(1)
0x4a9: @@ ClearReplies()
0x4aa: Pop(0)
0x4ab: Push((int) 6141)
0x4ac: Push((int) 6786)
0x4ad: Push((int) 6785)
0x4ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4af: Pop(3)
0x4b0: Push((int) 6140)
0x4b1: Push((int) 6786)
0x4b2: Push((int) 6784)
0x4b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b4: Pop(3)
0x4b5: Return(); Pop(0)

0x4b6: Push((int) 6786)
0x4b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4b9: PushEmpty(string)
0x4ba: Stack[-1] = "Neutral"
0x4bb: Call 0x222

0x4bc: Pop(1)
0x4bd: Push((int) 6142)
0x4be: @@ SetMessage(Stack[-1])
0x4bf: Pop(1)
0x4c0: @@ ClearReplies()
0x4c1: Pop(0)
0x4c2: Push((int) 6143)
0x4c3: Push((int) 6790)
0x4c4: Push((int) 6788)
0x4c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c6: Pop(3)
0x4c7: Push((int) 6144)
0x4c8: Push((int) 6790)
0x4c9: Push((int) 6789)
0x4ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cb: Pop(3)
0x4cc: Return(); Pop(0)

0x4cd: Push((int) 6790)
0x4ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4cf: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4d0: PushEmpty(string)
0x4d1: Stack[-1] = "Neutral"
0x4d2: Call 0x222

0x4d3: Pop(1)
0x4d4: Push((int) 6145)
0x4d5: @@ SetMessage(Stack[-1])
0x4d6: Pop(1)
0x4d7: @@ ClearReplies()
0x4d8: Pop(0)
0x4d9: Push((int) 6146)
0x4da: Push((int) 6794)
0x4db: Push((int) 6792)
0x4dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4dd: Pop(3)
0x4de: Push((int) 6147)
0x4df: Push((int) 6794)
0x4e0: Push((int) 6793)
0x4e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e2: Pop(3)
0x4e3: Return(); Pop(0)

0x4e4: Push((int) 6794)
0x4e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4e7: PushEmpty(string)
0x4e8: Stack[-1] = "Neutral"
0x4e9: Call 0x222

0x4ea: Pop(1)
0x4eb: Push((int) 6148)
0x4ec: @@ SetMessage(Stack[-1])
0x4ed: Pop(1)
0x4ee: @@ ClearReplies()
0x4ef: Pop(0)
0x4f0: Push((int) 6149)
0x4f1: Push((int) 6797)
0x4f2: Push((int) 6796)
0x4f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f4: Pop(3)
0x4f5: Return(); Pop(0)

0x4f6: Push((int) 6797)
0x4f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f8: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x4f9: PushEmpty(string)
0x4fa: Stack[-1] = "Neutral"
0x4fb: Call 0x222

0x4fc: Pop(1)
0x4fd: Push((int) 6150)
0x4fe: @@ SetMessage(Stack[-1])
0x4ff: Pop(1)
0x500: @@ ClearReplies()
0x501: Pop(0)
0x502: Push((int) 6151)
0x503: Push((int) 6799)
0x504: Push((int) 6798)
0x505: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x506: Pop(3)
0x507: Push((int) 6153)
0x508: Push((int) -1)
0x509: Push((int) 6800)
0x50a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50b: Pop(3)
0x50c: Return(); Pop(0)

0x50d: Push((int) 6799)
0x50e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50f: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x510: PushEmpty(string)
0x511: Stack[-1] = "Neutral"
0x512: Call 0x222

0x513: Pop(1)
0x514: Push((int) 6152)
0x515: @@ SetMessage(Stack[-1])
0x516: Pop(1)
0x517: @@ ClearReplies()
0x518: Pop(0)
0x519: Push((int) 6154)
0x51a: Push((int) -1)
0x51b: Push((int) 6801)
0x51c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51d: Pop(3)
0x51e: Push((int) 6155)
0x51f: Push((int) -1)
0x520: Push((int) 6802)
0x521: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x522: Pop(3)
0x523: Return(); Pop(0)

0x524: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x525: PushEmpty(bool)
0x526: Call 0xc2b

0x527: Pop(0)
0x528: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x529: @ lshStopAnimation()
0x52a: Pop(0)
0x52b: GOTO 0x52e

0x52c: @ StopAnimation()
0x52d: Pop(0)
0x52e: Return(); Pop(0)

0x52f: GOTO 0x233

0x530: Return(); Pop(0)

0x531: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x532: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x533: PushEmpty(bool, object)
0x534: Stack[-1] = Stack[-11]
0x535: Call 0xb7a

0x536: Pop(1)
0x537: Pop(1); Push((bool) Stack[-1] == 0)
0x538: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x539: Stack[-10] = (int) -2
0x53a: Return(); Pop(8)

0x53b: @ CreateDialog(Stack[-4])
0x53c: Pop(0)
0x53d: PushEmpty(int)
0x53e: Call 0xc27

0x53f: Pop(0)
0x540: @@ SetNPCName(Stack[-1])
0x541: Pop(1)
0x542: PushEmpty(string)
0x543: Call 0xc29

0x544: Pop(0)
0x545: @@ SetPhoto(Stack[-1])
0x546: Pop(1)
0x547: PushEmpty(int)
0x548: Call 0xf32

0x549: Pop(0)
0x54a: @@ SetPlayerName(Stack[-1])
0x54b: Pop(1)
0x54c: Stack[-2] = (int) -1
0x54d: @ IsOverrideActive(Stack[-3])
0x54e: Pop(0)
0x54f: Push(Stack[-3])
0x550: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x551: Stack[-10] = (int) -2
0x552: Return(); Pop(8)

0x553: @ DoDialog(Stack[-4])
0x554: Pop(0)
0x555: PushEmpty(object, object)
0x556: Stack[-2] = Stack[-11]
0x557: Stack[-1] = Stack[-6]
0x558: Push(-2, 4); TaskCall(7)
0x559: Call 0x570

0x55a: Pop(-2, 4); TaskReturn
0x55b: Pop(2)
0x55c: @@ IsDialogEnd(Stack[-1])
0x55d: Pop(0)
0x55e: Pop(0); Push((bool) Stack[-1] == 0)
0x55f: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x560: @ sync()
0x561: Pop(0)
0x562: @@ IsDialogEnd(Stack[-1])
0x563: Pop(0)
0x564: GOTO 0x55e

0x565: PushEmpty(object)
0x566: Stack[-1] = Stack[-10]
0x567: Call 0xbb2

0x568: Pop(1)
0x569: @ StopDialog(Stack[-4])
0x56a: Pop(0)
0x56b: @@ GetReturnValue(Stack[-2])
0x56c: Pop(0)
0x56d: Stack[-10] = Stack[-2]
0x56e: Return(); Pop(8)

0x56f: Stack[-4] = 0
0x570: PushEmpty()
0x571: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x572: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x573: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x574: Push((int) 1)
0x575: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x576: PushEmpty(string)
0x577: Stack[-1] = "Neutral"
0x578: Call 0x5e4

0x579: Pop(1)
0x57a: Push((int) 6715)
0x57b: @@ SetMessage(Stack[-1])
0x57c: Pop(1)
0x57d: @@ ClearReplies()
0x57e: Pop(0)
0x57f: PushEmpty(bool)
0x580: Stack[-1] = (bool) 0
0x581: PushEmpty(bool, object)
0x582: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x583: Call 0xd87

0x584: Pop(1)
0x585: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x586: PushEmpty(bool, object)
0x587: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x588: Call 0xd9f

0x589: Pop(1)
0x58a: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x58b: Stack[-1] = (bool) 1
0x58c: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x58d: Push((int) 7429)
0x58e: Push((int) 7355)
0x58f: Push((int) 8200)
0x590: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x591: Pop(3)
0x592: PushEmpty(bool, object)
0x593: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x594: Call 0xd93

0x595: Pop(1)
0x596: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x597: Push((int) 6716)
0x598: Push((int) 7385)
0x599: Push((int) 7403)
0x59a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59b: Pop(3)
0x59c: PushEmpty(bool)
0x59d: Stack[-1] = (bool) 0
0x59e: PushEmpty(bool, object)
0x59f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a0: Call 0xe4b

0x5a1: Pop(1)
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a3: PushEmpty(bool, object)
0x5a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a5: Call 0xe57

0x5a6: Pop(1)
0x5a7: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a8: Stack[-1] = (bool) 1
0x5a9: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5aa: Push((int) 14516)
0x5ab: Push((int) 15756)
0x5ac: Push((int) 15755)
0x5ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ae: Pop(3)
0x5af: Push((int) 7534)
0x5b0: Push((int) -1)
0x5b1: Push((int) 8316)
0x5b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b3: Pop(3)
0x5b4: GOTO 0x5c6

0x5b5: PushEmpty(string)
0x5b6: Stack[-1] = "Neutral"
0x5b7: Call 0x5e4

0x5b8: Pop(1)
0x5b9: Push((int) 9517)
0x5ba: @@ SetMessage(Stack[-1])
0x5bb: Pop(1)
0x5bc: @@ ClearReplies()
0x5bd: Pop(0)
0x5be: Push((int) 9518)
0x5bf: Push((int) 10462)
0x5c0: Push((int) 10461)
0x5c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c2: Pop(3)
0x5c3: GOTO 0x5c6

0x5c4: Return(); Pop(0)

0x5c5: GOTO 0x574

0x5c6: PushEmpty(bool)
0x5c7: Call 0xc2b

0x5c8: Pop(0)
0x5c9: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5ca: @ lshWaitForAnimEnd()
0x5cb: Pop(0)
0x5cc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5cd: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5ce: GOTO 0x5d4

0x5cf: PushEmpty(string)
0x5d0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5d1: Call 0xbb6

0x5d2: Pop(1)
0x5d3: GOTO 0x5ca

0x5d4: GOTO 0x5e3

0x5d5: Push("all")
0x5d6: Push("idle")
0x5d7: @ PlayAnimation(Stack[-2], Stack[-1])
0x5d8: Pop(2)
0x5d9: @ WaitForAnimEnd()
0x5da: Pop(0)
0x5db: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5dc: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5dd: GOTO 0x5e3

0x5de: Push("all")
0x5df: Push("idle")
0x5e0: @ PlayAnimation(Stack[-2], Stack[-1])
0x5e1: Pop(2)
0x5e2: GOTO 0x5d9

0x5e3: Return(); Pop(0)

0x5e4: PushEmpty()
0x5e5: PushEmpty(bool)
0x5e6: Call 0xc2b

0x5e7: Pop(0)
0x5e8: Pop(1); Push((bool) Stack[-1] == 0)
0x5e9: IF (Stack[-1] == 0) GOTO 0x5eb; Pop(1)

0x5ea: Return(); Pop(0)

0x5eb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5ec: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5ed: Return(); Pop(0)

0x5ee: PushEmpty(string)
0x5ef: Stack[-1] = Stack[-2]
0x5f0: Call 0xbb6

0x5f1: Pop(1)
0x5f2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5f3: Return(); Pop(0)

0x5f4: PushEmpty()
0x5f5: Push((int) 1)
0x5f6: IF (Stack[-1] == 0) GOTO 0x861; Pop(1)

0x5f7: PushEmpty()
0x5f8: Call 0xbc8

0x5f9: Pop(0)
0x5fa: Push((int) 7358)
0x5fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5fc: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x5fd: PushEmpty(object, object)
0x5fe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x600: Call 0xc91

0x601: Pop(2)
0x602: PushEmpty(object, object)
0x603: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x604: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x605: Call 0xca9

0x606: Pop(2)
0x607: Push((int) 7363)
0x608: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x609: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x60a: PushEmpty(object, object)
0x60b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x60c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x60d: Call 0xc91

0x60e: Pop(2)
0x60f: PushEmpty(object, object)
0x610: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x611: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x612: Call 0xca9

0x613: Pop(2)
0x614: Push((int) 7382)
0x615: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x616: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x617: PushEmpty(object, object)
0x618: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x619: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x61a: Call 0xc91

0x61b: Pop(2)
0x61c: Push((int) 7394)
0x61d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x61e: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x61f: PushEmpty(object, object)
0x620: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x621: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x622: Call 0xc97

0x623: Pop(2)
0x624: Push((int) 7395)
0x625: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x626: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x627: PushEmpty(object, object)
0x628: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x629: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x62a: Call 0xc97

0x62b: Pop(2)
0x62c: Push((int) 7396)
0x62d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x62e: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x62f: PushEmpty(object, object)
0x630: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x631: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x632: Call 0xc97

0x633: Pop(2)
0x634: Push((int) 7397)
0x635: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x636: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x637: PushEmpty(object, object)
0x638: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x639: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x63a: Call 0xc97

0x63b: Pop(2)
0x63c: Push((int) 7398)
0x63d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x63e: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x63f: PushEmpty(object, object)
0x640: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x641: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x642: Call 0xc97

0x643: Pop(2)
0x644: Push((int) 7399)
0x645: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x646: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x647: PushEmpty(object, object)
0x648: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x649: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x64a: Call 0xc97

0x64b: Pop(2)
0x64c: Push((int) 15755)
0x64d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x64e: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x64f: PushEmpty(object, object)
0x650: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x651: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x652: Call 0xd1d

0x653: Pop(2)
0x654: Push((int) 7402)
0x655: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x656: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x657: PushEmpty(string)
0x658: Stack[-1] = "Neutral"
0x659: Call 0x5e4

0x65a: Pop(1)
0x65b: Push((int) 6715)
0x65c: @@ SetMessage(Stack[-1])
0x65d: Pop(1)
0x65e: @@ ClearReplies()
0x65f: Pop(0)
0x660: PushEmpty(bool)
0x661: Stack[-1] = (bool) 0
0x662: PushEmpty(bool, object)
0x663: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x664: Call 0xd87

0x665: Pop(1)
0x666: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x667: PushEmpty(bool, object)
0x668: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x669: Call 0xd9f

0x66a: Pop(1)
0x66b: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x66c: Stack[-1] = (bool) 1
0x66d: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x66e: Push((int) 7429)
0x66f: Push((int) 7355)
0x670: Push((int) 8200)
0x671: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x672: Pop(3)
0x673: PushEmpty(bool, object)
0x674: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x675: Call 0xd93

0x676: Pop(1)
0x677: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x678: Push((int) 6716)
0x679: Push((int) 7385)
0x67a: Push((int) 7403)
0x67b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67c: Pop(3)
0x67d: PushEmpty(bool)
0x67e: Stack[-1] = (bool) 0
0x67f: PushEmpty(bool, object)
0x680: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x681: Call 0xe4b

0x682: Pop(1)
0x683: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x684: PushEmpty(bool, object)
0x685: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x686: Call 0xe57

0x687: Pop(1)
0x688: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x689: Stack[-1] = (bool) 1
0x68a: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x68b: Push((int) 14516)
0x68c: Push((int) 15756)
0x68d: Push((int) 15755)
0x68e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68f: Pop(3)
0x690: Push((int) 7534)
0x691: Push((int) -1)
0x692: Push((int) 8316)
0x693: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x694: Pop(3)
0x695: Return(); Pop(0)

0x696: PushEmpty(string)
0x697: Stack[-1] = "Neutral"
0x698: Call 0x5e4

0x699: Pop(1)
0x69a: Push((int) 9517)
0x69b: @@ SetMessage(Stack[-1])
0x69c: Pop(1)
0x69d: @@ ClearReplies()
0x69e: Pop(0)
0x69f: Push((int) 9518)
0x6a0: Push((int) 10462)
0x6a1: Push((int) 10461)
0x6a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a3: Pop(3)
0x6a4: Return(); Pop(0)

0x6a5: Push((int) 10462)
0x6a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a7: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6a8: PushEmpty(string)
0x6a9: Stack[-1] = "Neutral"
0x6aa: Call 0x5e4

0x6ab: Pop(1)
0x6ac: Push((int) 9519)
0x6ad: @@ SetMessage(Stack[-1])
0x6ae: Pop(1)
0x6af: @@ ClearReplies()
0x6b0: Pop(0)
0x6b1: Push((int) 9520)
0x6b2: Push((int) 10464)
0x6b3: Push((int) 10463)
0x6b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b5: Pop(3)
0x6b6: Push((int) 9530)
0x6b7: Push((int) 10466)
0x6b8: Push((int) 10474)
0x6b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ba: Pop(3)
0x6bb: Return(); Pop(0)

0x6bc: Push((int) 10464)
0x6bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6be: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6bf: PushEmpty(string)
0x6c0: Stack[-1] = "Neutral"
0x6c1: Call 0x5e4

0x6c2: Pop(1)
0x6c3: Push((int) 9521)
0x6c4: @@ SetMessage(Stack[-1])
0x6c5: Pop(1)
0x6c6: @@ ClearReplies()
0x6c7: Pop(0)
0x6c8: Push((int) 9522)
0x6c9: Push((int) 10466)
0x6ca: Push((int) 10465)
0x6cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cc: Pop(3)
0x6cd: Push((int) 9529)
0x6ce: Push((int) 10466)
0x6cf: Push((int) 10472)
0x6d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d1: Pop(3)
0x6d2: Return(); Pop(0)

0x6d3: Push((int) 10466)
0x6d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d5: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6d6: PushEmpty(string)
0x6d7: Stack[-1] = "Neutral"
0x6d8: Call 0x5e4

0x6d9: Pop(1)
0x6da: Push((int) 9523)
0x6db: @@ SetMessage(Stack[-1])
0x6dc: Pop(1)
0x6dd: @@ ClearReplies()
0x6de: Pop(0)
0x6df: Push((int) 9524)
0x6e0: Push((int) 10468)
0x6e1: Push((int) 10467)
0x6e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e3: Pop(3)
0x6e4: Push((int) 9528)
0x6e5: Push((int) -1)
0x6e6: Push((int) 10471)
0x6e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e8: Pop(3)
0x6e9: Return(); Pop(0)

0x6ea: Push((int) 10468)
0x6eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ec: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x6ed: PushEmpty(string)
0x6ee: Stack[-1] = "Neutral"
0x6ef: Call 0x5e4

0x6f0: Pop(1)
0x6f1: Push((int) 9525)
0x6f2: @@ SetMessage(Stack[-1])
0x6f3: Pop(1)
0x6f4: @@ ClearReplies()
0x6f5: Pop(0)
0x6f6: Push((int) 9526)
0x6f7: Push((int) -1)
0x6f8: Push((int) 10469)
0x6f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fa: Pop(3)
0x6fb: Push((int) 9527)
0x6fc: Push((int) -1)
0x6fd: Push((int) 10470)
0x6fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ff: Pop(3)
0x700: Return(); Pop(0)

0x701: Push((int) 15756)
0x702: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x703: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x704: PushEmpty(string)
0x705: Stack[-1] = "Neutral"
0x706: Call 0x5e4

0x707: Pop(1)
0x708: Push((int) 14517)
0x709: @@ SetMessage(Stack[-1])
0x70a: Pop(1)
0x70b: @@ ClearReplies()
0x70c: Pop(0)
0x70d: Push((int) 14518)
0x70e: Push((int) -1)
0x70f: Push((int) 15757)
0x710: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x711: Pop(3)
0x712: Return(); Pop(0)

0x713: Push((int) 7385)
0x714: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x715: IF (Stack[-1] == 0) GOTO 0x72f; Pop(1)

0x716: PushEmpty(string)
0x717: Stack[-1] = "Neutral"
0x718: Call 0x5e4

0x719: Pop(1)
0x71a: Push((int) 6699)
0x71b: @@ SetMessage(Stack[-1])
0x71c: Pop(1)
0x71d: @@ ClearReplies()
0x71e: Pop(0)
0x71f: Push((int) 6700)
0x720: Push((int) 7387)
0x721: Push((int) 7386)
0x722: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x723: Pop(3)
0x724: Push((int) 6714)
0x725: Push((int) 7387)
0x726: Push((int) 7400)
0x727: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x728: Pop(3)
0x729: Push((int) 6713)
0x72a: Push((int) -1)
0x72b: Push((int) 7399)
0x72c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72d: Pop(3)
0x72e: Return(); Pop(0)

0x72f: Push((int) 7387)
0x730: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x731: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x732: PushEmpty(string)
0x733: Stack[-1] = "Neutral"
0x734: Call 0x5e4

0x735: Pop(1)
0x736: Push((int) 6701)
0x737: @@ SetMessage(Stack[-1])
0x738: Pop(1)
0x739: @@ ClearReplies()
0x73a: Pop(0)
0x73b: Push((int) 6702)
0x73c: Push((int) 7389)
0x73d: Push((int) 7388)
0x73e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73f: Pop(3)
0x740: Push((int) 6712)
0x741: Push((int) -1)
0x742: Push((int) 7398)
0x743: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x744: Pop(3)
0x745: Return(); Pop(0)

0x746: Push((int) 7389)
0x747: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x748: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x749: PushEmpty(object, object)
0x74a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x74b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x74c: Call 0xc9d

0x74d: Pop(2)
0x74e: PushEmpty(string)
0x74f: Stack[-1] = "Neutral"
0x750: Call 0x5e4

0x751: Pop(1)
0x752: Push((int) 6703)
0x753: @@ SetMessage(Stack[-1])
0x754: Pop(1)
0x755: @@ ClearReplies()
0x756: Pop(0)
0x757: Push((int) 6704)
0x758: Push((int) 7391)
0x759: Push((int) 7390)
0x75a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75b: Pop(3)
0x75c: Push((int) 6711)
0x75d: Push((int) -1)
0x75e: Push((int) 7397)
0x75f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x760: Pop(3)
0x761: Return(); Pop(0)

0x762: Push((int) 7391)
0x763: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x764: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x765: PushEmpty(string)
0x766: Stack[-1] = "Neutral"
0x767: Call 0x5e4

0x768: Pop(1)
0x769: Push((int) 6705)
0x76a: @@ SetMessage(Stack[-1])
0x76b: Pop(1)
0x76c: @@ ClearReplies()
0x76d: Pop(0)
0x76e: Push((int) 6706)
0x76f: Push((int) 7393)
0x770: Push((int) 7392)
0x771: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x772: Pop(3)
0x773: Push((int) 6710)
0x774: Push((int) -1)
0x775: Push((int) 7396)
0x776: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x777: Pop(3)
0x778: Return(); Pop(0)

0x779: Push((int) 7393)
0x77a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x77b: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x77c: PushEmpty(string)
0x77d: Stack[-1] = "Neutral"
0x77e: Call 0x5e4

0x77f: Pop(1)
0x780: Push((int) 6707)
0x781: @@ SetMessage(Stack[-1])
0x782: Pop(1)
0x783: @@ ClearReplies()
0x784: Pop(0)
0x785: Push((int) 6708)
0x786: Push((int) -1)
0x787: Push((int) 7394)
0x788: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x789: Pop(3)
0x78a: Push((int) 6709)
0x78b: Push((int) -1)
0x78c: Push((int) 7395)
0x78d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78e: Pop(3)
0x78f: Return(); Pop(0)

0x790: Push((int) 7355)
0x791: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x792: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x793: PushEmpty(string)
0x794: Stack[-1] = "Neutral"
0x795: Call 0x5e4

0x796: Pop(1)
0x797: Push((int) 6674)
0x798: @@ SetMessage(Stack[-1])
0x799: Pop(1)
0x79a: @@ ClearReplies()
0x79b: Pop(0)
0x79c: Push((int) 6675)
0x79d: Push((int) 7357)
0x79e: Push((int) 7356)
0x79f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a0: Pop(3)
0x7a1: Push((int) 6689)
0x7a2: Push((int) 7373)
0x7a3: Push((int) 7372)
0x7a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a5: Pop(3)
0x7a6: Return(); Pop(0)

0x7a7: Push((int) 7373)
0x7a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a9: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7aa: PushEmpty(string)
0x7ab: Stack[-1] = "Neutral"
0x7ac: Call 0x5e4

0x7ad: Pop(1)
0x7ae: Push((int) 6690)
0x7af: @@ SetMessage(Stack[-1])
0x7b0: Pop(1)
0x7b1: @@ ClearReplies()
0x7b2: Pop(0)
0x7b3: Push((int) 6691)
0x7b4: Push((int) 7357)
0x7b5: Push((int) 7374)
0x7b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b7: Pop(3)
0x7b8: Push((int) 6692)
0x7b9: Push((int) 7377)
0x7ba: Push((int) 7376)
0x7bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bc: Pop(3)
0x7bd: Return(); Pop(0)

0x7be: Push((int) 7377)
0x7bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c0: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7c1: PushEmpty(string)
0x7c2: Stack[-1] = "Neutral"
0x7c3: Call 0x5e4

0x7c4: Pop(1)
0x7c5: Push((int) 6693)
0x7c6: @@ SetMessage(Stack[-1])
0x7c7: Pop(1)
0x7c8: @@ ClearReplies()
0x7c9: Pop(0)
0x7ca: Push((int) 6694)
0x7cb: Push((int) 7362)
0x7cc: Push((int) 7378)
0x7cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ce: Pop(3)
0x7cf: Push((int) 6695)
0x7d0: Push((int) 7381)
0x7d1: Push((int) 7380)
0x7d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d3: Pop(3)
0x7d4: Return(); Pop(0)

0x7d5: Push((int) 7381)
0x7d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d7: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7d8: PushEmpty(string)
0x7d9: Stack[-1] = "Neutral"
0x7da: Call 0x5e4

0x7db: Pop(1)
0x7dc: Push((int) 6696)
0x7dd: @@ SetMessage(Stack[-1])
0x7de: Pop(1)
0x7df: @@ ClearReplies()
0x7e0: Pop(0)
0x7e1: Push((int) 6697)
0x7e2: Push((int) -1)
0x7e3: Push((int) 7382)
0x7e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e5: Pop(3)
0x7e6: Push((int) 6698)
0x7e7: Push((int) 7362)
0x7e8: Push((int) 7383)
0x7e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ea: Pop(3)
0x7eb: Return(); Pop(0)

0x7ec: Push((int) 7357)
0x7ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ee: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x7ef: PushEmpty(string)
0x7f0: Stack[-1] = "Neutral"
0x7f1: Call 0x5e4

0x7f2: Pop(1)
0x7f3: Push((int) 6676)
0x7f4: @@ SetMessage(Stack[-1])
0x7f5: Pop(1)
0x7f6: @@ ClearReplies()
0x7f7: Pop(0)
0x7f8: Push((int) 6677)
0x7f9: Push((int) -1)
0x7fa: Push((int) 7358)
0x7fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fc: Pop(3)
0x7fd: Push((int) 6678)
0x7fe: Push((int) 7360)
0x7ff: Push((int) 7359)
0x800: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x801: Pop(3)
0x802: Return(); Pop(0)

0x803: Push((int) 7360)
0x804: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x805: IF (Stack[-1] == 0) GOTO 0x81f; Pop(1)

0x806: PushEmpty(string)
0x807: Stack[-1] = "Neutral"
0x808: Call 0x5e4

0x809: Pop(1)
0x80a: Push((int) 6679)
0x80b: @@ SetMessage(Stack[-1])
0x80c: Pop(1)
0x80d: @@ ClearReplies()
0x80e: Pop(0)
0x80f: Push((int) 6680)
0x810: Push((int) 7362)
0x811: Push((int) 7361)
0x812: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x813: Pop(3)
0x814: Push((int) 6683)
0x815: Push((int) 7365)
0x816: Push((int) 7364)
0x817: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x818: Pop(3)
0x819: Push((int) 6686)
0x81a: Push((int) 7369)
0x81b: Push((int) 7368)
0x81c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81d: Pop(3)
0x81e: Return(); Pop(0)

0x81f: Push((int) 7369)
0x820: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x821: IF (Stack[-1] == 0) GOTO 0x831; Pop(1)

0x822: PushEmpty(string)
0x823: Stack[-1] = "Neutral"
0x824: Call 0x5e4

0x825: Pop(1)
0x826: Push((int) 6687)
0x827: @@ SetMessage(Stack[-1])
0x828: Pop(1)
0x829: @@ ClearReplies()
0x82a: Pop(0)
0x82b: Push((int) 6688)
0x82c: Push((int) 7362)
0x82d: Push((int) 7370)
0x82e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82f: Pop(3)
0x830: Return(); Pop(0)

0x831: Push((int) 7365)
0x832: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x833: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x834: PushEmpty(string)
0x835: Stack[-1] = "Neutral"
0x836: Call 0x5e4

0x837: Pop(1)
0x838: Push((int) 6684)
0x839: @@ SetMessage(Stack[-1])
0x83a: Pop(1)
0x83b: @@ ClearReplies()
0x83c: Pop(0)
0x83d: Push((int) 6685)
0x83e: Push((int) 7362)
0x83f: Push((int) 7366)
0x840: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x841: Pop(3)
0x842: Return(); Pop(0)

0x843: Push((int) 7362)
0x844: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x845: IF (Stack[-1] == 0) GOTO 0x855; Pop(1)

0x846: PushEmpty(string)
0x847: Stack[-1] = "Neutral"
0x848: Call 0x5e4

0x849: Pop(1)
0x84a: Push((int) 6681)
0x84b: @@ SetMessage(Stack[-1])
0x84c: Pop(1)
0x84d: @@ ClearReplies()
0x84e: Pop(0)
0x84f: Push((int) 6682)
0x850: Push((int) -1)
0x851: Push((int) 7363)
0x852: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x853: Pop(3)
0x854: Return(); Pop(0)

0x855: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x856: PushEmpty(bool)
0x857: Call 0xc2b

0x858: Pop(0)
0x859: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x85a: @ lshStopAnimation()
0x85b: Pop(0)
0x85c: GOTO 0x85f

0x85d: @ StopAnimation()
0x85e: Pop(0)
0x85f: Return(); Pop(0)

0x860: GOTO 0x5f5

0x861: Return(); Pop(0)

0x862: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x863: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x864: PushEmpty(bool, object)
0x865: Stack[-1] = Stack[-11]
0x866: Call 0xb7a

0x867: Pop(1)
0x868: Pop(1); Push((bool) Stack[-1] == 0)
0x869: IF (Stack[-1] == 0) GOTO 0x86c; Pop(1)

0x86a: Stack[-10] = (int) -2
0x86b: Return(); Pop(8)

0x86c: @ CreateDialog(Stack[-4])
0x86d: Pop(0)
0x86e: PushEmpty(int)
0x86f: Call 0xc27

0x870: Pop(0)
0x871: @@ SetNPCName(Stack[-1])
0x872: Pop(1)
0x873: PushEmpty(string)
0x874: Call 0xc29

0x875: Pop(0)
0x876: @@ SetPhoto(Stack[-1])
0x877: Pop(1)
0x878: PushEmpty(int)
0x879: Call 0xf32

0x87a: Pop(0)
0x87b: @@ SetPlayerName(Stack[-1])
0x87c: Pop(1)
0x87d: Stack[-2] = (int) -1
0x87e: @ IsOverrideActive(Stack[-3])
0x87f: Pop(0)
0x880: Push(Stack[-3])
0x881: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x882: Stack[-10] = (int) -2
0x883: Return(); Pop(8)

0x884: @ DoDialog(Stack[-4])
0x885: Pop(0)
0x886: PushEmpty(object, object)
0x887: Stack[-2] = Stack[-11]
0x888: Stack[-1] = Stack[-6]
0x889: Push(-2, 4); TaskCall(9)
0x88a: Call 0x8a1

0x88b: Pop(-2, 4); TaskReturn
0x88c: Pop(2)
0x88d: @@ IsDialogEnd(Stack[-1])
0x88e: Pop(0)
0x88f: Pop(0); Push((bool) Stack[-1] == 0)
0x890: IF (Stack[-1] == 0) GOTO 0x896; Pop(1)

0x891: @ sync()
0x892: Pop(0)
0x893: @@ IsDialogEnd(Stack[-1])
0x894: Pop(0)
0x895: GOTO 0x88f

0x896: PushEmpty(object)
0x897: Stack[-1] = Stack[-10]
0x898: Call 0xbb2

0x899: Pop(1)
0x89a: @ StopDialog(Stack[-4])
0x89b: Pop(0)
0x89c: @@ GetReturnValue(Stack[-2])
0x89d: Pop(0)
0x89e: Stack[-10] = Stack[-2]
0x89f: Return(); Pop(8)

0x8a0: Stack[-4] = 0
0x8a1: PushEmpty()
0x8a2: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x8a3: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x8a4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8a5: Push((int) 1)
0x8a6: IF (Stack[-1] == 0) GOTO 0x954; Pop(1)

0x8a7: PushEmpty(bool)
0x8a8: Stack[-1] = (bool) 1
0x8a9: PushEmpty(bool)
0x8aa: Stack[-1] = (bool) 0
0x8ab: PushEmpty(bool, object)
0x8ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8ad: Call 0xdcd

0x8ae: Pop(1)
0x8af: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8b0: PushEmpty(bool, object)
0x8b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b2: Call 0xdeb

0x8b3: Pop(1)
0x8b4: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8b5: Stack[-1] = (bool) 1
0x8b6: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x8b7: PushEmpty(bool)
0x8b8: Stack[-1] = (bool) 0
0x8b9: PushEmpty(bool, object)
0x8ba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8bb: Call 0xdd7

0x8bc: Pop(1)
0x8bd: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8be: PushEmpty(bool, object)
0x8bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c0: Call 0xdeb

0x8c1: Pop(1)
0x8c2: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8c3: Stack[-1] = (bool) 1
0x8c4: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x8c5: Stack[-1] = (bool) 0
0x8c6: IF (Stack[-1] == 0) GOTO 0x8db; Pop(1)

0x8c7: PushEmpty(string)
0x8c8: Stack[-1] = "Neutral"
0x8c9: Call 0x972

0x8ca: Pop(1)
0x8cb: Push((int) 12040)
0x8cc: @@ SetMessage(Stack[-1])
0x8cd: Pop(1)
0x8ce: @@ ClearReplies()
0x8cf: Pop(0)
0x8d0: Push((int) 12041)
0x8d1: Push((int) 13262)
0x8d2: Push((int) 13259)
0x8d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d4: Pop(3)
0x8d5: Push((int) 12042)
0x8d6: Push((int) 13261)
0x8d7: Push((int) 13260)
0x8d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d9: Pop(3)
0x8da: GOTO 0x954

0x8db: PushEmpty(string)
0x8dc: Stack[-1] = "Neutral"
0x8dd: Call 0x972

0x8de: Pop(1)
0x8df: Push((int) 12052)
0x8e0: @@ SetMessage(Stack[-1])
0x8e1: Pop(1)
0x8e2: @@ ClearReplies()
0x8e3: Pop(0)
0x8e4: PushEmpty(bool)
0x8e5: Stack[-1] = (bool) 1
0x8e6: PushEmpty(bool)
0x8e7: Stack[-1] = (bool) 0
0x8e8: PushEmpty(bool, object)
0x8e9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8ea: Call 0xdcd

0x8eb: Pop(1)
0x8ec: IF (Stack[-1] == 0) GOTO 0x8f3; Pop(1)

0x8ed: PushEmpty(bool, object)
0x8ee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8ef: Call 0xdf7

0x8f0: Pop(1)
0x8f1: IF (Stack[-1] == 0) GOTO 0x8f3; Pop(1)

0x8f2: Stack[-1] = (bool) 1
0x8f3: IF (Stack[-1] == 0) GOTO 0x903; Pop(1)

0x8f4: PushEmpty(bool)
0x8f5: Stack[-1] = (bool) 0
0x8f6: PushEmpty(bool, object)
0x8f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f8: Call 0xdd7

0x8f9: Pop(1)
0x8fa: IF (Stack[-1] == 0) GOTO 0x901; Pop(1)

0x8fb: PushEmpty(bool, object)
0x8fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8fd: Call 0xdf7

0x8fe: Pop(1)
0x8ff: IF (Stack[-1] == 0) GOTO 0x901; Pop(1)

0x900: Stack[-1] = (bool) 1
0x901: IF (Stack[-1] == 0) GOTO 0x903; Pop(1)

0x902: Stack[-1] = (bool) 0
0x903: IF (Stack[-1] == 0) GOTO 0x909; Pop(1)

0x904: Push((int) 12066)
0x905: Push((int) 13289)
0x906: Push((int) 13287)
0x907: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x908: Pop(3)
0x909: PushEmpty(bool)
0x90a: Stack[-1] = (bool) 0
0x90b: PushEmpty(bool, object)
0x90c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90d: Call 0xe0f

0x90e: Pop(1)
0x90f: IF (Stack[-1] == 0) GOTO 0x916; Pop(1)

0x910: PushEmpty(bool, object)
0x911: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x912: Call 0xe1b

0x913: Pop(1)
0x914: IF (Stack[-1] == 0) GOTO 0x916; Pop(1)

0x915: Stack[-1] = (bool) 1
0x916: IF (Stack[-1] == 0) GOTO 0x91c; Pop(1)

0x917: Push((int) 12543)
0x918: Push((int) 13713)
0x919: Push((int) 13712)
0x91a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91b: Pop(3)
0x91c: PushEmpty(bool)
0x91d: Stack[-1] = (bool) 0
0x91e: PushEmpty(bool)
0x91f: Stack[-1] = (bool) 0
0x920: PushEmpty(bool, object)
0x921: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x922: Call 0xe03

0x923: Pop(1)
0x924: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x925: PushEmpty(bool, object)
0x926: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x927: Call 0xe27

0x928: Pop(1)
0x929: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x92a: Stack[-1] = (bool) 1
0x92b: IF (Stack[-1] == 0) GOTO 0x933; Pop(1)

0x92c: PushEmpty(bool, object)
0x92d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x92e: Call 0xe0f

0x92f: Pop(1)
0x930: Pop(1); Push((bool) Stack[-1] == 0)
0x931: IF (Stack[-1] == 0) GOTO 0x933; Pop(1)

0x932: Stack[-1] = (bool) 1
0x933: IF (Stack[-1] == 0) GOTO 0x939; Pop(1)

0x934: Push((int) 12546)
0x935: Push((int) 13716)
0x936: Push((int) 13715)
0x937: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x938: Pop(3)
0x939: PushEmpty(bool)
0x93a: Stack[-1] = (bool) 0
0x93b: PushEmpty(bool, object)
0x93c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x93d: Call 0xe3f

0x93e: Pop(1)
0x93f: IF (Stack[-1] == 0) GOTO 0x946; Pop(1)

0x940: PushEmpty(bool, object)
0x941: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x942: Call 0xe33

0x943: Pop(1)
0x944: IF (Stack[-1] == 0) GOTO 0x946; Pop(1)

0x945: Stack[-1] = (bool) 1
0x946: IF (Stack[-1] == 0) GOTO 0x94c; Pop(1)

0x947: Push((int) 12053)
0x948: Push((int) 13274)
0x949: Push((int) 13273)
0x94a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94b: Pop(3)
0x94c: Push((int) 12060)
0x94d: Push((int) -1)
0x94e: Push((int) 13280)
0x94f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x950: Pop(3)
0x951: GOTO 0x954

0x952: Return(); Pop(0)

0x953: GOTO 0x8a5

0x954: PushEmpty(bool)
0x955: Call 0xc2b

0x956: Pop(0)
0x957: IF (Stack[-1] == 0) GOTO 0x963; Pop(1)

0x958: @ lshWaitForAnimEnd()
0x959: Pop(0)
0x95a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95b: IF (Stack[-1] == 0) GOTO 0x95d; Pop(1)

0x95c: GOTO 0x962

0x95d: PushEmpty(string)
0x95e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x95f: Call 0xbb6

0x960: Pop(1)
0x961: GOTO 0x958

0x962: GOTO 0x971

0x963: Push("all")
0x964: Push("idle")
0x965: @ PlayAnimation(Stack[-2], Stack[-1])
0x966: Pop(2)
0x967: @ WaitForAnimEnd()
0x968: Pop(0)
0x969: Push( Stack[3 + Tasks[-1].StackPointer] )
0x96a: IF (Stack[-1] == 0) GOTO 0x96c; Pop(1)

0x96b: GOTO 0x971

0x96c: Push("all")
0x96d: Push("idle")
0x96e: @ PlayAnimation(Stack[-2], Stack[-1])
0x96f: Pop(2)
0x970: GOTO 0x967

0x971: Return(); Pop(0)

0x972: PushEmpty()
0x973: PushEmpty(bool)
0x974: Call 0xc2b

0x975: Pop(0)
0x976: Pop(1); Push((bool) Stack[-1] == 0)
0x977: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x978: Return(); Pop(0)

0x979: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x97a: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x97b: Return(); Pop(0)

0x97c: PushEmpty(string)
0x97d: Stack[-1] = Stack[-2]
0x97e: Call 0xbb6

0x97f: Pop(1)
0x980: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x981: Return(); Pop(0)

0x982: PushEmpty()
0x983: Push((int) 1)
0x984: IF (Stack[-1] == 0) GOTO 0xb68; Pop(1)

0x985: PushEmpty()
0x986: Call 0xbc8

0x987: Pop(0)
0x988: Push((int) 13271)
0x989: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x98a: IF (Stack[-1] == 0) GOTO 0x995; Pop(1)

0x98b: PushEmpty(object, object)
0x98c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x98d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x98e: Call 0xcdc

0x98f: Pop(2)
0x990: PushEmpty(object, object)
0x991: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x992: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x993: Call 0xce2

0x994: Pop(2)
0x995: Push((int) 13288)
0x996: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x997: IF (Stack[-1] == 0) GOTO 0x99d; Pop(1)

0x998: PushEmpty(object, object)
0x999: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x99a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x99b: Call 0xcdc

0x99c: Pop(2)
0x99d: Push((int) 13290)
0x99e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x99f: IF (Stack[-1] == 0) GOTO 0x9a5; Pop(1)

0x9a0: PushEmpty(object, object)
0x9a1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9a2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9a3: Call 0xce2

0x9a4: Pop(2)
0x9a5: Push((int) 13714)
0x9a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9a7: IF (Stack[-1] == 0) GOTO 0x9b2; Pop(1)

0x9a8: PushEmpty(object, object)
0x9a9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9aa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9ab: Call 0xcf7

0x9ac: Pop(2)
0x9ad: PushEmpty(object, object)
0x9ae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9af: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9b0: Call 0xcfd

0x9b1: Pop(2)
0x9b2: Push((int) 13717)
0x9b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9b4: IF (Stack[-1] == 0) GOTO 0x9bf; Pop(1)

0x9b5: PushEmpty(object, object)
0x9b6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9b8: Call 0xd07

0x9b9: Pop(2)
0x9ba: PushEmpty(object, object)
0x9bb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9bd: Call 0xd11

0x9be: Pop(2)
0x9bf: Push((int) 13273)
0x9c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9c1: IF (Stack[-1] == 0) GOTO 0x9c7; Pop(1)

0x9c2: PushEmpty(object, object)
0x9c3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9c4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9c5: Call 0xd17

0x9c6: Pop(2)
0x9c7: Push((int) 13258)
0x9c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9c9: IF (Stack[-1] == 0) GOTO 0xa75; Pop(1)

0x9ca: PushEmpty(bool)
0x9cb: Stack[-1] = (bool) 1
0x9cc: PushEmpty(bool)
0x9cd: Stack[-1] = (bool) 0
0x9ce: PushEmpty(bool, object)
0x9cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9d0: Call 0xdcd

0x9d1: Pop(1)
0x9d2: IF (Stack[-1] == 0) GOTO 0x9d9; Pop(1)

0x9d3: PushEmpty(bool, object)
0x9d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9d5: Call 0xdeb

0x9d6: Pop(1)
0x9d7: IF (Stack[-1] == 0) GOTO 0x9d9; Pop(1)

0x9d8: Stack[-1] = (bool) 1
0x9d9: IF (Stack[-1] == 0) GOTO 0x9e9; Pop(1)

0x9da: PushEmpty(bool)
0x9db: Stack[-1] = (bool) 0
0x9dc: PushEmpty(bool, object)
0x9dd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9de: Call 0xdd7

0x9df: Pop(1)
0x9e0: IF (Stack[-1] == 0) GOTO 0x9e7; Pop(1)

0x9e1: PushEmpty(bool, object)
0x9e2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e3: Call 0xdeb

0x9e4: Pop(1)
0x9e5: IF (Stack[-1] == 0) GOTO 0x9e7; Pop(1)

0x9e6: Stack[-1] = (bool) 1
0x9e7: IF (Stack[-1] == 0) GOTO 0x9e9; Pop(1)

0x9e8: Stack[-1] = (bool) 0
0x9e9: IF (Stack[-1] == 0) GOTO 0x9fe; Pop(1)

0x9ea: PushEmpty(string)
0x9eb: Stack[-1] = "Neutral"
0x9ec: Call 0x972

0x9ed: Pop(1)
0x9ee: Push((int) 12040)
0x9ef: @@ SetMessage(Stack[-1])
0x9f0: Pop(1)
0x9f1: @@ ClearReplies()
0x9f2: Pop(0)
0x9f3: Push((int) 12041)
0x9f4: Push((int) 13262)
0x9f5: Push((int) 13259)
0x9f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f7: Pop(3)
0x9f8: Push((int) 12042)
0x9f9: Push((int) 13261)
0x9fa: Push((int) 13260)
0x9fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fc: Pop(3)
0x9fd: Return(); Pop(0)

0x9fe: PushEmpty(string)
0x9ff: Stack[-1] = "Neutral"
0xa00: Call 0x972

0xa01: Pop(1)
0xa02: Push((int) 12052)
0xa03: @@ SetMessage(Stack[-1])
0xa04: Pop(1)
0xa05: @@ ClearReplies()
0xa06: Pop(0)
0xa07: PushEmpty(bool)
0xa08: Stack[-1] = (bool) 1
0xa09: PushEmpty(bool)
0xa0a: Stack[-1] = (bool) 0
0xa0b: PushEmpty(bool, object)
0xa0c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0d: Call 0xdcd

0xa0e: Pop(1)
0xa0f: IF (Stack[-1] == 0) GOTO 0xa16; Pop(1)

0xa10: PushEmpty(bool, object)
0xa11: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa12: Call 0xdf7

0xa13: Pop(1)
0xa14: IF (Stack[-1] == 0) GOTO 0xa16; Pop(1)

0xa15: Stack[-1] = (bool) 1
0xa16: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa17: PushEmpty(bool)
0xa18: Stack[-1] = (bool) 0
0xa19: PushEmpty(bool, object)
0xa1a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1b: Call 0xdd7

0xa1c: Pop(1)
0xa1d: IF (Stack[-1] == 0) GOTO 0xa24; Pop(1)

0xa1e: PushEmpty(bool, object)
0xa1f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa20: Call 0xdf7

0xa21: Pop(1)
0xa22: IF (Stack[-1] == 0) GOTO 0xa24; Pop(1)

0xa23: Stack[-1] = (bool) 1
0xa24: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa25: Stack[-1] = (bool) 0
0xa26: IF (Stack[-1] == 0) GOTO 0xa2c; Pop(1)

0xa27: Push((int) 12066)
0xa28: Push((int) 13289)
0xa29: Push((int) 13287)
0xa2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2b: Pop(3)
0xa2c: PushEmpty(bool)
0xa2d: Stack[-1] = (bool) 0
0xa2e: PushEmpty(bool, object)
0xa2f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa30: Call 0xe0f

0xa31: Pop(1)
0xa32: IF (Stack[-1] == 0) GOTO 0xa39; Pop(1)

0xa33: PushEmpty(bool, object)
0xa34: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa35: Call 0xe1b

0xa36: Pop(1)
0xa37: IF (Stack[-1] == 0) GOTO 0xa39; Pop(1)

0xa38: Stack[-1] = (bool) 1
0xa39: IF (Stack[-1] == 0) GOTO 0xa3f; Pop(1)

0xa3a: Push((int) 12543)
0xa3b: Push((int) 13713)
0xa3c: Push((int) 13712)
0xa3d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3e: Pop(3)
0xa3f: PushEmpty(bool)
0xa40: Stack[-1] = (bool) 0
0xa41: PushEmpty(bool)
0xa42: Stack[-1] = (bool) 0
0xa43: PushEmpty(bool, object)
0xa44: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa45: Call 0xe03

0xa46: Pop(1)
0xa47: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa48: PushEmpty(bool, object)
0xa49: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4a: Call 0xe27

0xa4b: Pop(1)
0xa4c: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa4d: Stack[-1] = (bool) 1
0xa4e: IF (Stack[-1] == 0) GOTO 0xa56; Pop(1)

0xa4f: PushEmpty(bool, object)
0xa50: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa51: Call 0xe0f

0xa52: Pop(1)
0xa53: Pop(1); Push((bool) Stack[-1] == 0)
0xa54: IF (Stack[-1] == 0) GOTO 0xa56; Pop(1)

0xa55: Stack[-1] = (bool) 1
0xa56: IF (Stack[-1] == 0) GOTO 0xa5c; Pop(1)

0xa57: Push((int) 12546)
0xa58: Push((int) 13716)
0xa59: Push((int) 13715)
0xa5a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5b: Pop(3)
0xa5c: PushEmpty(bool)
0xa5d: Stack[-1] = (bool) 0
0xa5e: PushEmpty(bool, object)
0xa5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa60: Call 0xe3f

0xa61: Pop(1)
0xa62: IF (Stack[-1] == 0) GOTO 0xa69; Pop(1)

0xa63: PushEmpty(bool, object)
0xa64: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa65: Call 0xe33

0xa66: Pop(1)
0xa67: IF (Stack[-1] == 0) GOTO 0xa69; Pop(1)

0xa68: Stack[-1] = (bool) 1
0xa69: IF (Stack[-1] == 0) GOTO 0xa6f; Pop(1)

0xa6a: Push((int) 12053)
0xa6b: Push((int) 13274)
0xa6c: Push((int) 13273)
0xa6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6e: Pop(3)
0xa6f: Push((int) 12060)
0xa70: Push((int) -1)
0xa71: Push((int) 13280)
0xa72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa73: Pop(3)
0xa74: Return(); Pop(0)

0xa75: Push((int) 13274)
0xa76: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa77: IF (Stack[-1] == 0) GOTO 0xa87; Pop(1)

0xa78: PushEmpty(string)
0xa79: Stack[-1] = "Neutral"
0xa7a: Call 0x972

0xa7b: Pop(1)
0xa7c: Push((int) 12054)
0xa7d: @@ SetMessage(Stack[-1])
0xa7e: Pop(1)
0xa7f: @@ ClearReplies()
0xa80: Pop(0)
0xa81: Push((int) 12055)
0xa82: Push((int) 13276)
0xa83: Push((int) 13275)
0xa84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa85: Pop(3)
0xa86: Return(); Pop(0)

0xa87: Push((int) 13276)
0xa88: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa89: IF (Stack[-1] == 0) GOTO 0xa9e; Pop(1)

0xa8a: PushEmpty(string)
0xa8b: Stack[-1] = "Neutral"
0xa8c: Call 0x972

0xa8d: Pop(1)
0xa8e: Push((int) 12056)
0xa8f: @@ SetMessage(Stack[-1])
0xa90: Pop(1)
0xa91: @@ ClearReplies()
0xa92: Pop(0)
0xa93: Push((int) 12057)
0xa94: Push((int) 13278)
0xa95: Push((int) 13277)
0xa96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa97: Pop(3)
0xa98: Push((int) 12061)
0xa99: Push((int) 13282)
0xa9a: Push((int) 13281)
0xa9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9c: Pop(3)
0xa9d: Return(); Pop(0)

0xa9e: Push((int) 13282)
0xa9f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa0: IF (Stack[-1] == 0) GOTO 0xab0; Pop(1)

0xaa1: PushEmpty(string)
0xaa2: Stack[-1] = "Neutral"
0xaa3: Call 0x972

0xaa4: Pop(1)
0xaa5: Push((int) 12062)
0xaa6: @@ SetMessage(Stack[-1])
0xaa7: Pop(1)
0xaa8: @@ ClearReplies()
0xaa9: Pop(0)
0xaaa: Push((int) 12063)
0xaab: Push((int) 13284)
0xaac: Push((int) 13283)
0xaad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaae: Pop(3)
0xaaf: Return(); Pop(0)

0xab0: Push((int) 13284)
0xab1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xab2: IF (Stack[-1] == 0) GOTO 0xac2; Pop(1)

0xab3: PushEmpty(string)
0xab4: Stack[-1] = "Neutral"
0xab5: Call 0x972

0xab6: Pop(1)
0xab7: Push((int) 12064)
0xab8: @@ SetMessage(Stack[-1])
0xab9: Pop(1)
0xaba: @@ ClearReplies()
0xabb: Pop(0)
0xabc: Push((int) 12065)
0xabd: Push((int) 13278)
0xabe: Push((int) 13285)
0xabf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac0: Pop(3)
0xac1: Return(); Pop(0)

0xac2: Push((int) 13278)
0xac3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac4: IF (Stack[-1] == 0) GOTO 0xad4; Pop(1)

0xac5: PushEmpty(string)
0xac6: Stack[-1] = "Neutral"
0xac7: Call 0x972

0xac8: Pop(1)
0xac9: Push((int) 12058)
0xaca: @@ SetMessage(Stack[-1])
0xacb: Pop(1)
0xacc: @@ ClearReplies()
0xacd: Pop(0)
0xace: Push((int) 12059)
0xacf: Push((int) -1)
0xad0: Push((int) 13279)
0xad1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad2: Pop(3)
0xad3: Return(); Pop(0)

0xad4: Push((int) 13716)
0xad5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad6: IF (Stack[-1] == 0) GOTO 0xae6; Pop(1)

0xad7: PushEmpty(string)
0xad8: Stack[-1] = "Neutral"
0xad9: Call 0x972

0xada: Pop(1)
0xadb: Push((int) 12547)
0xadc: @@ SetMessage(Stack[-1])
0xadd: Pop(1)
0xade: @@ ClearReplies()
0xadf: Pop(0)
0xae0: Push((int) 12548)
0xae1: Push((int) -1)
0xae2: Push((int) 13717)
0xae3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae4: Pop(3)
0xae5: Return(); Pop(0)

0xae6: Push((int) 13713)
0xae7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae8: IF (Stack[-1] == 0) GOTO 0xaf8; Pop(1)

0xae9: PushEmpty(string)
0xaea: Stack[-1] = "Neutral"
0xaeb: Call 0x972

0xaec: Pop(1)
0xaed: Push((int) 12544)
0xaee: @@ SetMessage(Stack[-1])
0xaef: Pop(1)
0xaf0: @@ ClearReplies()
0xaf1: Pop(0)
0xaf2: Push((int) 12545)
0xaf3: Push((int) -1)
0xaf4: Push((int) 13714)
0xaf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf6: Pop(3)
0xaf7: Return(); Pop(0)

0xaf8: Push((int) 13289)
0xaf9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xafa: IF (Stack[-1] == 0) GOTO 0xb0a; Pop(1)

0xafb: PushEmpty(string)
0xafc: Stack[-1] = "Neutral"
0xafd: Call 0x972

0xafe: Pop(1)
0xaff: Push((int) 12068)
0xb00: @@ SetMessage(Stack[-1])
0xb01: Pop(1)
0xb02: @@ ClearReplies()
0xb03: Pop(0)
0xb04: Push((int) 12069)
0xb05: Push((int) -1)
0xb06: Push((int) 13290)
0xb07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb08: Pop(3)
0xb09: Return(); Pop(0)

0xb0a: Push((int) 13261)
0xb0b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb0c: IF (Stack[-1] == 0) GOTO 0xb1c; Pop(1)

0xb0d: PushEmpty(string)
0xb0e: Stack[-1] = "Neutral"
0xb0f: Call 0x972

0xb10: Pop(1)
0xb11: Push((int) 12043)
0xb12: @@ SetMessage(Stack[-1])
0xb13: Pop(1)
0xb14: @@ ClearReplies()
0xb15: Pop(0)
0xb16: Push((int) 12048)
0xb17: Push((int) 13268)
0xb18: Push((int) 13267)
0xb19: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1a: Pop(3)
0xb1b: Return(); Pop(0)

0xb1c: Push((int) 13268)
0xb1d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb1e: IF (Stack[-1] == 0) GOTO 0xb2e; Pop(1)

0xb1f: PushEmpty(string)
0xb20: Stack[-1] = "Neutral"
0xb21: Call 0x972

0xb22: Pop(1)
0xb23: Push((int) 12049)
0xb24: @@ SetMessage(Stack[-1])
0xb25: Pop(1)
0xb26: @@ ClearReplies()
0xb27: Pop(0)
0xb28: Push((int) 12050)
0xb29: Push((int) 13264)
0xb2a: Push((int) 13269)
0xb2b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2c: Pop(3)
0xb2d: Return(); Pop(0)

0xb2e: Push((int) 13262)
0xb2f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb30: IF (Stack[-1] == 0) GOTO 0xb45; Pop(1)

0xb31: PushEmpty(string)
0xb32: Stack[-1] = "Neutral"
0xb33: Call 0x972

0xb34: Pop(1)
0xb35: Push((int) 12044)
0xb36: @@ SetMessage(Stack[-1])
0xb37: Pop(1)
0xb38: @@ ClearReplies()
0xb39: Pop(0)
0xb3a: Push((int) 12045)
0xb3b: Push((int) 13264)
0xb3c: Push((int) 13263)
0xb3d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb3e: Pop(3)
0xb3f: Push((int) 12047)
0xb40: Push((int) 13261)
0xb41: Push((int) 13265)
0xb42: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb43: Pop(3)
0xb44: Return(); Pop(0)

0xb45: Push((int) 13264)
0xb46: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb47: IF (Stack[-1] == 0) GOTO 0xb5c; Pop(1)

0xb48: PushEmpty(string)
0xb49: Stack[-1] = "Neutral"
0xb4a: Call 0x972

0xb4b: Pop(1)
0xb4c: Push((int) 12046)
0xb4d: @@ SetMessage(Stack[-1])
0xb4e: Pop(1)
0xb4f: @@ ClearReplies()
0xb50: Pop(0)
0xb51: Push((int) 12051)
0xb52: Push((int) -1)
0xb53: Push((int) 13271)
0xb54: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb55: Pop(3)
0xb56: Push((int) 12067)
0xb57: Push((int) -1)
0xb58: Push((int) 13288)
0xb59: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5a: Pop(3)
0xb5b: Return(); Pop(0)

0xb5c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb5d: PushEmpty(bool)
0xb5e: Call 0xc2b

0xb5f: Pop(0)
0xb60: IF (Stack[-1] == 0) GOTO 0xb64; Pop(1)

0xb61: @ lshStopAnimation()
0xb62: Pop(0)
0xb63: GOTO 0xb66

0xb64: @ StopAnimation()
0xb65: Pop(0)
0xb66: Return(); Pop(0)

0xb67: GOTO 0x983

0xb68: Return(); Pop(0)

0xb69: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0xb6a: @@ GetPosition(Stack[-4])
0xb6b: Pop(0)
0xb6c: @ GetPosition(Stack[-3])
0xb6d: Pop(0)
0xb6e: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0xb6f: Push(CvectorIndex(Stack[-2], 0))
0xb70: Push(CvectorIndex(Stack[-3], 2))
0xb71: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xb72: Pop(2)
0xb73: Stack[-10] = Stack[-1]
0xb74: Return(); Pop(8)

0xb75: PushEmpty(bool, bool)
0xb76: @ IsLoaded(Stack[-1])
0xb77: Pop(0)
0xb78: Stack[-3] = Stack[-1]
0xb79: Return(); Pop(2)

0xb7a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0xb7b: @@ GetPosition(Stack[-7])
0xb7c: Pop(0)
0xb7d: @@ GetEyesHeight(Stack[-8])
0xb7e: Pop(0)
0xb7f: Push(CvectorIndex(Stack[-7], 1))
0xb80: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xb81: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xb82: @ GetPosition(Stack[-6])
0xb83: Pop(0)
0xb84: @ GetEyesHeight(Stack[-8])
0xb85: Pop(0)
0xb86: Push(CvectorIndex(Stack[-6], 1))
0xb87: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xb88: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xb89: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0xb8a: Push(CvectorIndex(Stack[-5], 1))
0xb8b: Stack[-1] = (int) 0
0xb8c: CvectorIndex(Stack[-6], 1) = Stack[-1];
0xb8d: Pop(0); Push(Stack[-5] | Stack[-5]);
0xb8e: Pop(1); Push(Sqrt(Stack[-1]))
0xb8f: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0xb90: Stack[-4] = -Stack[-5]; Pop(0);
0xb91: Push((int) 70)
0xb92: Pop(1); Push(Stack[-6] * Stack[-1]);
0xb93: PushEmpty(cvector, cvector)
0xb94: Push(CVector(0.0, 1.0, 0.0))
0xb95: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0xb96: Call 0xbcf

0xb97: Pop(1)
0xb98: Push((int) 25)
0xb99: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb9a: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb9b: Push(CVector(0.0, 10.0, 0.0))
0xb9c: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0xb9d: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0xb9e: @ IsOverrideActive(Stack[-1])
0xb9f: Pop(0)
0xba0: Push(Stack[-1])
0xba1: IF (Stack[-1] == 0) GOTO 0xba4; Pop(1)

0xba2: Stack[-18] = (bool) 0
0xba3: Return(); Pop(16)

0xba4: @ StopWorld()
0xba5: Pop(0)
0xba6: @ CameraTransit(Stack[-2], Stack[-4])
0xba7: Pop(0)
0xba8: Push(CvectorIndex(Stack[-3], 0))
0xba9: Push(CvectorIndex(Stack[-4], 2))
0xbaa: @ Rotate(Stack[-2], Stack[-1])
0xbab: Pop(2)
0xbac: @ CameraWaitForPlayFinish()
0xbad: Pop(0)
0xbae: @ ResumeWorld()
0xbaf: Pop(0)
0xbb0: Stack[-18] = (bool) 1
0xbb1: Return(); Pop(16)

0xbb2: PushEmpty()
0xbb3: @ CameraSwitchToNormal()
0xbb4: Pop(0)
0xbb5: Return(); Pop(0)

0xbb6: PushEmpty(float, float, float, float)
0xbb7: Push("playing ")
0xbb8: Pop(1); Push(Stack[-1] + Stack[-6]);
0xbb9: @ Trace(Stack[-1])
0xbba: Pop(1)
0xbbb: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0xbbc: Pop(0)
0xbbd: @ lshPlayAnimation(Stack[-2], Stack[-1])
0xbbe: Pop(0)
0xbbf: Push("start: ")
0xbc0: Pop(1); Push(Stack[-1] + Stack[-3]);
0xbc1: @ Trace(Stack[-1])
0xbc2: Pop(1)
0xbc3: Push("end: ")
0xbc4: Pop(1); Push(Stack[-1] + Stack[-2]);
0xbc5: @ Trace(Stack[-1])
0xbc6: Pop(1)
0xbc7: Return(); Pop(4)

0xbc8: PushEmpty(bool)
0xbc9: Call 0xc2b

0xbca: Pop(0)
0xbcb: IF (Stack[-1] == 0) GOTO 0xbce; Pop(1)

0xbcc: @ lshStopSpeech()
0xbcd: Pop(0)
0xbce: Return(); Pop(0)

0xbcf: PushEmpty(float, float)
0xbd0: Pop(0); Push(Stack[-3] | Stack[-3]);
0xbd1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xbd2: Push((float)0.0)
0xbd3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xbd4: IF (Stack[-1] == 0) GOTO 0xbd7; Pop(1)

0xbd5: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xbd6: Return(); Pop(2)

0xbd7: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xbd8: Return(); Pop(2)

0xbd9: PushEmpty(int, int)
0xbda: @ GetVariable(Stack[-3], Stack[-1])
0xbdb: Pop(0)
0xbdc: Stack[-4] = Stack[-1]
0xbdd: Return(); Pop(2)

0xbde: PushEmpty(object, object, object, object)
0xbdf: @ GetMainOutdoorScene(Stack[-2])
0xbe0: Pop(0)
0xbe1: Push(".bin")
0xbe2: Pop(1); Push(Stack[-6] + Stack[-1]);
0xbe3: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xbe4: Pop(1)
0xbe5: Stack[-6] = Stack[-1]
0xbe6: Return(); Pop(4)

0xbe7: Stack[-1] = 0
0xbe8: Stack[-2] = 0
0xbe9: PushEmpty(int, int, bool, int, int, bool)
0xbea: @@ GetItemID(Stack[-3])
0xbeb: Pop(0)
0xbec: Push("Category")
0xbed: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xbee: Pop(1)
0xbef: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xbf0: Pop(0)
0xbf1: Pop(0); Push((bool) Stack[-1] == 0)
0xbf2: IF (Stack[-1] == 0) GOTO 0xbf5; Pop(1)

0xbf3: @@ DropItems(Stack[-8], Stack[-7])
0xbf4: Pop(0)
0xbf5: Return(); Pop(6)

0xbf6: PushEmpty(object, object)
0xbf7: @ FindActor(Stack[-1], Stack[-4])
0xbf8: Pop(0)
0xbf9: Pop(0); Push((bool) Stack[-1] == 0)
0xbfa: IF (Stack[-1] == 0) GOTO 0xbfd; Pop(1)

0xbfb: Stack[-5] = (bool) 0
0xbfc: Return(); Pop(2)

0xbfd: @ Trigger(Stack[-1], Stack[-3])
0xbfe: Pop(0)
0xbff: Stack[-5] = (bool) 1
0xc00: Return(); Pop(2)

0xc01: Stack[-1] = 0
0xc02: PushEmpty(float, float)
0xc03: @ GetGameTime(Stack[-1])
0xc04: Pop(0)
0xc05: Stack[-3] = Stack[-1]
0xc06: Return(); Pop(2)

0xc07: PushEmpty(float, float)
0xc08: @ GetGameTime(Stack[-1])
0xc09: Pop(0)
0xc0a: Push((int) 1)
0xc0b: PushEmpty(int)
0xc0c: Push((int) 24)
0xc0d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xc0e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xc0f: Return(); Pop(2)

0xc10: PushEmpty(float, float)
0xc11: @ GetGameTime(Stack[-1])
0xc12: Pop(0)
0xc13: PushEmpty(int)
0xc14: Stack[-1] = Stack[-2]
0xc15: Push((int) 24)
0xc16: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xc17: Return(); Pop(2)

0xc18: PushEmpty()
0xc19: PushEmpty(int)
0xc1a: Call 0xc07

0xc1b: Pop(0)
0xc1c: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xc1d: Return(); Pop(0)

0xc1e: PushEmpty(bool, bool)
0xc1f: PushEmpty(string)
0xc20: Stack[-1] = "No"
0xc21: Call 0xbb6

0xc22: Pop(1)
0xc23: @ lshWaitForAnimEnd(Stack[-1])
0xc24: Pop(0)
0xc25: Stack[-3] = Stack[-1]
0xc26: Return(); Pop(2)

0xc27: Stack[-1] = (int) 2877
0xc28: Return(); Pop(0)

0xc29: Stack[-1] = "ui/NPC_Spi4ka.png"
0xc2a: Return(); Pop(0)

0xc2b: Stack[-1] = (bool) 1
0xc2c: Return(); Pop(0)

0xc2d: PushEmpty()
0xc2e: Push("ood1Spi4ka1")
0xc2f: Push((int) 1)
0xc30: @ SetVariable(Stack[-2], Stack[-1])
0xc31: Pop(2)
0xc32: Return(); Pop(0)

0xc33: PushEmpty()
0xc34: Push("ood1Spi4ka2")
0xc35: Push((int) 1)
0xc36: @ SetVariable(Stack[-2], Stack[-1])
0xc37: Pop(2)
0xc38: Return(); Pop(0)

0xc39: PushEmpty()
0xc3a: Push("ood1Spi4ka3")
0xc3b: Push((int) 1)
0xc3c: @ SetVariable(Stack[-2], Stack[-1])
0xc3d: Pop(2)
0xc3e: Return(); Pop(0)

0xc3f: PushEmpty(object, object)
0xc40: Push("lockpick1time is given")
0xc41: @ Trace(Stack[-1])
0xc42: Pop(1)
0xc43: @ CreateInvItem(Stack[-1])
0xc44: Pop(0)
0xc45: Push("lockpick")
0xc46: @@ SetItemName(Stack[-1])
0xc47: Pop(1)
0xc48: Push("uses")
0xc49: Push((int) 1)
0xc4a: @@ SetProperty(Stack[-2], Stack[-1])
0xc4b: Pop(2)
0xc4c: PushEmpty(object, object, int)
0xc4d: Stack[-3] = Stack[-7]
0xc4e: Stack[-2] = Stack[-4]
0xc4f: Stack[-1] = (int) 1
0xc50: Call 0xbe9

0xc51: Pop(3)
0xc52: Return(); Pop(2)

0xc53: Stack[-1] = 0
0xc54: PushEmpty()
0xc55: Push("playsound")
0xc56: Push("giveitem")
0xc57: @ TriggerWorld(Stack[-2], Stack[-1])
0xc58: Pop(2)
0xc59: Return(); Pop(0)

0xc5a: PushEmpty(object, object, object, object)
0xc5b: PushEmpty(object)
0xc5c: Call 0xf00

0xc5d: Stack[-3] = Stack[-1]
0xc5e: Pop(1)
0xc5f: Push("d1q04KaterinaGotoMishka")
0xc60: @@ FindMark(Stack[-2], Stack[-1])
0xc61: Pop(1)
0xc62: Push(Stack[-1])
0xc63: IF (Stack[-1] == 0) GOTO 0xc66; Pop(1)

0xc64: @@ Remove()
0xc65: Pop(0)
0xc66: Push("d1q04MishkaGotoSpi4ka")
0xc67: @@ FindMark(Stack[-2], Stack[-1])
0xc68: Pop(1)
0xc69: Push(Stack[-1])
0xc6a: IF (Stack[-1] == 0) GOTO 0xc6d; Pop(1)

0xc6b: @@ Remove()
0xc6c: Pop(0)
0xc6d: Push("d1q04Spi4kaGotoPowderHouse")
0xc6e: @@ FindMark(Stack[-2], Stack[-1])
0xc6f: Pop(1)
0xc70: Push(Stack[-1])
0xc71: IF (Stack[-1] == 0) GOTO 0xc74; Pop(1)

0xc72: @@ Remove()
0xc73: Pop(0)
0xc74: PushEmpty()
0xc75: Call 0xf43

0xc76: Pop(0)
0xc77: PushEmpty(bool, int)
0xc78: Stack[-1] = (int) 44
0xc79: Call 0xeef

0xc7a: Pop(2)
0xc7b: PushEmpty(bool, int)
0xc7c: Stack[-1] = (int) 45
0xc7d: Call 0xeef

0xc7e: Pop(2)
0xc7f: PushEmpty(bool, int)
0xc80: Stack[-1] = (int) 46
0xc81: Call 0xeef

0xc82: Pop(2)
0xc83: PushEmpty(bool, string, string)
0xc84: Stack[-2] = "quest_d1_04"
0xc85: Stack[-1] = "failed"
0xc86: Call 0xbf6

0xc87: Pop(3)
0xc88: Return(); Pop(4)

0xc89: Stack[-1] = 0
0xc8a: Stack[-2] = 0
0xc8b: PushEmpty()
0xc8c: Push("KnowShabnak")
0xc8d: Push((int) 1)
0xc8e: @ SetVariable(Stack[-2], Stack[-1])
0xc8f: Pop(2)
0xc90: Return(); Pop(0)

0xc91: PushEmpty()
0xc92: Push("ood2Spi4ka1")
0xc93: Push((int) 1)
0xc94: @ SetVariable(Stack[-2], Stack[-1])
0xc95: Pop(2)
0xc96: Return(); Pop(0)

0xc97: PushEmpty()
0xc98: Push("ood2Spi4ka2")
0xc99: Push((int) 1)
0xc9a: @ SetVariable(Stack[-2], Stack[-1])
0xc9b: Pop(2)
0xc9c: Return(); Pop(0)

0xc9d: PushEmpty()
0xc9e: Push("KnowAlbinos")
0xc9f: Push((int) 1)
0xca0: @ SetVariable(Stack[-2], Stack[-1])
0xca1: Pop(2)
0xca2: Return(); Pop(0)

0xca3: PushEmpty()
0xca4: Push("KnowZemlja")
0xca5: Push((int) 1)
0xca6: @ SetVariable(Stack[-2], Stack[-1])
0xca7: Pop(2)
0xca8: Return(); Pop(0)

0xca9: PushEmpty()
0xcaa: Push("d2q01")
0xcab: Push((int) 4)
0xcac: @ SetVariable(Stack[-2], Stack[-1])
0xcad: Pop(2)
0xcae: PushEmpty()
0xcaf: Call 0xf63

0xcb0: Pop(0)
0xcb1: PushEmpty(bool, string, string)
0xcb2: Stack[-2] = "quest_d2_01"
0xcb3: Stack[-1] = "woman"
0xcb4: Call 0xbf6

0xcb5: Pop(3)
0xcb6: Return(); Pop(0)

0xcb7: PushEmpty()
0xcb8: Push("ood1Spi4ka4")
0xcb9: Push((int) 1)
0xcba: @ SetVariable(Stack[-2], Stack[-1])
0xcbb: Pop(2)
0xcbc: Return(); Pop(0)

0xcbd: PushEmpty()
0xcbe: Push("ood1Spi4ka5")
0xcbf: Push((int) 1)
0xcc0: @ SetVariable(Stack[-2], Stack[-1])
0xcc1: Pop(2)
0xcc2: Return(); Pop(0)

0xcc3: PushEmpty()
0xcc4: Push("playsound")
0xcc5: Push("mapmark")
0xcc6: @ TriggerWorld(Stack[-2], Stack[-1])
0xcc7: Pop(2)
0xcc8: Return(); Pop(0)

0xcc9: PushEmpty(object, object)
0xcca: PushEmpty(object)
0xccb: Call 0xf00

0xccc: Stack[-2] = Stack[-1]
0xccd: Pop(1)
0xcce: Push("d1q04Spi4kaGotoPowderHouse")
0xccf: Push("pt_map_powderhouse")
0xcd0: Push((int) 0)
0xcd1: Push((int) 8645)
0xcd2: PushEmpty(float)
0xcd3: Call 0xc02

0xcd4: Pop(0)
0xcd5: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcd6: Pop(5)
0xcd7: PushEmpty()
0xcd8: Call 0xf53

0xcd9: Pop(0)
0xcda: Return(); Pop(2)

0xcdb: Stack[-1] = 0
0xcdc: PushEmpty()
0xcdd: Push("ood6Spi4ka1")
0xcde: Push((int) 1)
0xcdf: @ SetVariable(Stack[-2], Stack[-1])
0xce0: Pop(2)
0xce1: Return(); Pop(0)

0xce2: PushEmpty()
0xce3: Push("d6q03")
0xce4: Push((int) 1)
0xce5: @ SetVariable(Stack[-2], Stack[-1])
0xce6: Pop(2)
0xce7: PushEmpty()
0xce8: Call 0xf73

0xce9: Pop(0)
0xcea: PushEmpty()
0xceb: Call 0xfa3

0xcec: Pop(0)
0xced: PushEmpty(object, string)
0xcee: Stack[-1] = "quest_d6_03"
0xcef: Call 0xbde

0xcf0: Pop(2)
0xcf1: PushEmpty(bool, string, string)
0xcf2: Stack[-2] = "quest_d6_03"
0xcf3: Stack[-1] = "place_albinos"
0xcf4: Call 0xbf6

0xcf5: Pop(3)
0xcf6: Return(); Pop(0)

0xcf7: PushEmpty()
0xcf8: Push("ood6Spi4ka2")
0xcf9: Push((int) 1)
0xcfa: @ SetVariable(Stack[-2], Stack[-1])
0xcfb: Pop(2)
0xcfc: Return(); Pop(0)

0xcfd: PushEmpty()
0xcfe: PushEmpty()
0xcff: Call 0xf83

0xd00: Pop(0)
0xd01: PushEmpty(bool, string, string)
0xd02: Stack[-2] = "quest_d6_03"
0xd03: Stack[-1] = "completed"
0xd04: Call 0xbf6

0xd05: Pop(3)
0xd06: Return(); Pop(0)

0xd07: PushEmpty()
0xd08: PushEmpty()
0xd09: Call 0xf93

0xd0a: Pop(0)
0xd0b: PushEmpty(bool, string, string)
0xd0c: Stack[-2] = "quest_d6_03"
0xd0d: Stack[-1] = "failed"
0xd0e: Call 0xbf6

0xd0f: Pop(3)
0xd10: Return(); Pop(0)

0xd11: PushEmpty()
0xd12: Push("ood6Spi4ka3")
0xd13: Push((int) 1)
0xd14: @ SetVariable(Stack[-2], Stack[-1])
0xd15: Pop(2)
0xd16: Return(); Pop(0)

0xd17: PushEmpty()
0xd18: Push("ood6Spi4ka4")
0xd19: Push((int) 1)
0xd1a: @ SetVariable(Stack[-2], Stack[-1])
0xd1b: Pop(2)
0xd1c: Return(); Pop(0)

0xd1d: PushEmpty()
0xd1e: Push("ood2Spi4ka3")
0xd1f: Push((int) 1)
0xd20: @ SetVariable(Stack[-2], Stack[-1])
0xd21: Pop(2)
0xd22: Return(); Pop(0)

0xd23: PushEmpty()
0xd24: Push("KnowSpi4ka")
0xd25: Push((int) 1)
0xd26: @ SetVariable(Stack[-2], Stack[-1])
0xd27: Pop(2)
0xd28: Return(); Pop(0)

0xd29: PushEmpty()
0xd2a: PushEmpty(object, string, float)
0xd2b: PushEmpty(object)
0xd2c: Call 0xf00

0xd2d: Stack[-4] = Stack[-1]
0xd2e: Pop(1)
0xd2f: Stack[-2] = "pt_map_powderhouse"
0xd30: Stack[-1] = (int) 2
0xd31: Call 0xf11

0xd32: Pop(3)
0xd33: PushEmpty(object)
0xd34: Call 0xf00

0xd35: Pop(0)
0xd36: @@ ShowMap(Stack[-1])
0xd37: Pop(1)
0xd38: Return(); Pop(0)

0xd39: PushEmpty()
0xd3a: Push("KnowTermitnik")
0xd3b: Push((int) 1)
0xd3c: @ SetVariable(Stack[-2], Stack[-1])
0xd3d: Pop(2)
0xd3e: Return(); Pop(0)

0xd3f: PushEmpty()
0xd40: PushEmpty(int, string)
0xd41: Stack[-1] = "d1q01FirstGeorgVisit"
0xd42: Call 0xbd9

0xd43: Pop(1)
0xd44: Push((int) 1)
0xd45: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd46: IF (Stack[-1] == 0) GOTO 0xd49; Pop(1)

0xd47: Stack[-2] = (bool) 1
0xd48: Return(); Pop(0)

0xd49: Stack[-2] = (bool) 0
0xd4a: Return(); Pop(0)

0xd4b: PushEmpty()
0xd4c: PushEmpty(int, string)
0xd4d: Stack[-1] = "d1q04"
0xd4e: Call 0xbd9

0xd4f: Pop(1)
0xd50: Push((int) 2)
0xd51: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd52: IF (Stack[-1] == 0) GOTO 0xd55; Pop(1)

0xd53: Stack[-2] = (bool) 1
0xd54: Return(); Pop(0)

0xd55: Stack[-2] = (bool) 0
0xd56: Return(); Pop(0)

0xd57: PushEmpty()
0xd58: PushEmpty(int, string)
0xd59: Stack[-1] = "ood1Spi4ka1"
0xd5a: Call 0xbd9

0xd5b: Pop(1)
0xd5c: Push((int) 0)
0xd5d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd5e: IF (Stack[-1] == 0) GOTO 0xd61; Pop(1)

0xd5f: Stack[-2] = (bool) 1
0xd60: Return(); Pop(0)

0xd61: Stack[-2] = (bool) 0
0xd62: Return(); Pop(0)

0xd63: PushEmpty()
0xd64: PushEmpty(int, string)
0xd65: Stack[-1] = "ood1Spi4ka2"
0xd66: Call 0xbd9

0xd67: Pop(1)
0xd68: Push((int) 0)
0xd69: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd6a: IF (Stack[-1] == 0) GOTO 0xd6d; Pop(1)

0xd6b: Stack[-2] = (bool) 1
0xd6c: Return(); Pop(0)

0xd6d: Stack[-2] = (bool) 0
0xd6e: Return(); Pop(0)

0xd6f: PushEmpty()
0xd70: PushEmpty(int, string)
0xd71: Stack[-1] = "ood1Spi4ka3"
0xd72: Call 0xbd9

0xd73: Pop(1)
0xd74: Push((int) 0)
0xd75: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd76: IF (Stack[-1] == 0) GOTO 0xd79; Pop(1)

0xd77: Stack[-2] = (bool) 1
0xd78: Return(); Pop(0)

0xd79: Stack[-2] = (bool) 0
0xd7a: Return(); Pop(0)

0xd7b: PushEmpty()
0xd7c: PushEmpty(int, string)
0xd7d: Stack[-1] = "KnowShabnak"
0xd7e: Call 0xbd9

0xd7f: Pop(1)
0xd80: Push((int) 1)
0xd81: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd82: IF (Stack[-1] == 0) GOTO 0xd85; Pop(1)

0xd83: Stack[-2] = (bool) 1
0xd84: Return(); Pop(0)

0xd85: Stack[-2] = (bool) 0
0xd86: Return(); Pop(0)

0xd87: PushEmpty()
0xd88: PushEmpty(int, string)
0xd89: Stack[-1] = "ood2Spi4ka1"
0xd8a: Call 0xbd9

0xd8b: Pop(1)
0xd8c: Push((int) 0)
0xd8d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd8e: IF (Stack[-1] == 0) GOTO 0xd91; Pop(1)

0xd8f: Stack[-2] = (bool) 1
0xd90: Return(); Pop(0)

0xd91: Stack[-2] = (bool) 0
0xd92: Return(); Pop(0)

0xd93: PushEmpty()
0xd94: PushEmpty(int, string)
0xd95: Stack[-1] = "ood2Spi4ka2"
0xd96: Call 0xbd9

0xd97: Pop(1)
0xd98: Push((int) 0)
0xd99: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd9a: IF (Stack[-1] == 0) GOTO 0xd9d; Pop(1)

0xd9b: Stack[-2] = (bool) 1
0xd9c: Return(); Pop(0)

0xd9d: Stack[-2] = (bool) 0
0xd9e: Return(); Pop(0)

0xd9f: PushEmpty()
0xda0: PushEmpty(int, string)
0xda1: Stack[-1] = "d2q01"
0xda2: Call 0xbd9

0xda3: Pop(1)
0xda4: Push((int) 3)
0xda5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xda6: IF (Stack[-1] == 0) GOTO 0xda9; Pop(1)

0xda7: Stack[-2] = (bool) 1
0xda8: Return(); Pop(0)

0xda9: Stack[-2] = (bool) 0
0xdaa: Return(); Pop(0)

0xdab: PushEmpty()
0xdac: PushEmpty(int, string)
0xdad: Stack[-1] = "ood1Spi4ka4"
0xdae: Call 0xbd9

0xdaf: Pop(1)
0xdb0: Push((int) 0)
0xdb1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdb2: IF (Stack[-1] == 0) GOTO 0xdb5; Pop(1)

0xdb3: Stack[-2] = (bool) 1
0xdb4: Return(); Pop(0)

0xdb5: Stack[-2] = (bool) 0
0xdb6: Return(); Pop(0)

0xdb7: PushEmpty()
0xdb8: PushEmpty(int, string)
0xdb9: Stack[-1] = "ood1Spi4ka5"
0xdba: Call 0xbd9

0xdbb: Pop(1)
0xdbc: Push((int) 0)
0xdbd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdbe: IF (Stack[-1] == 0) GOTO 0xdc1; Pop(1)

0xdbf: Stack[-2] = (bool) 1
0xdc0: Return(); Pop(0)

0xdc1: Stack[-2] = (bool) 0
0xdc2: Return(); Pop(0)

0xdc3: PushEmpty()
0xdc4: PushEmpty(bool, object)
0xdc5: Stack[-1] = Stack[-3]
0xdc6: Call 0xe7b

0xdc7: Pop(1)
0xdc8: IF (Stack[-1] == 0) GOTO 0xdcb; Pop(1)

0xdc9: Stack[-2] = (bool) 1
0xdca: Return(); Pop(0)

0xdcb: Stack[-2] = (bool) 0
0xdcc: Return(); Pop(0)

0xdcd: PushEmpty()
0xdce: PushEmpty(bool, object)
0xdcf: Stack[-1] = Stack[-3]
0xdd0: Call 0xe86

0xdd1: Pop(1)
0xdd2: IF (Stack[-1] == 0) GOTO 0xdd5; Pop(1)

0xdd3: Stack[-2] = (bool) 1
0xdd4: Return(); Pop(0)

0xdd5: Stack[-2] = (bool) 0
0xdd6: Return(); Pop(0)

0xdd7: PushEmpty()
0xdd8: PushEmpty(bool, object)
0xdd9: Stack[-1] = Stack[-3]
0xdda: Call 0xe9b

0xddb: Pop(1)
0xddc: IF (Stack[-1] == 0) GOTO 0xddf; Pop(1)

0xddd: Stack[-2] = (bool) 1
0xdde: Return(); Pop(0)

0xddf: Stack[-2] = (bool) 0
0xde0: Return(); Pop(0)

0xde1: PushEmpty()
0xde2: PushEmpty(bool, object)
0xde3: Stack[-1] = Stack[-3]
0xde4: Call 0xeb0

0xde5: Pop(1)
0xde6: IF (Stack[-1] == 0) GOTO 0xde9; Pop(1)

0xde7: Stack[-2] = (bool) 1
0xde8: Return(); Pop(0)

0xde9: Stack[-2] = (bool) 0
0xdea: Return(); Pop(0)

0xdeb: PushEmpty()
0xdec: PushEmpty(int, string)
0xded: Stack[-1] = "ood6Spi4ka1"
0xdee: Call 0xbd9

0xdef: Pop(1)
0xdf0: Push((int) 0)
0xdf1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdf2: IF (Stack[-1] == 0) GOTO 0xdf5; Pop(1)

0xdf3: Stack[-2] = (bool) 1
0xdf4: Return(); Pop(0)

0xdf5: Stack[-2] = (bool) 0
0xdf6: Return(); Pop(0)

0xdf7: PushEmpty()
0xdf8: PushEmpty(int, string)
0xdf9: Stack[-1] = "d6q03"
0xdfa: Call 0xbd9

0xdfb: Pop(1)
0xdfc: Push((int) 0)
0xdfd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdfe: IF (Stack[-1] == 0) GOTO 0xe01; Pop(1)

0xdff: Stack[-2] = (bool) 1
0xe00: Return(); Pop(0)

0xe01: Stack[-2] = (bool) 0
0xe02: Return(); Pop(0)

0xe03: PushEmpty()
0xe04: PushEmpty(int, string)
0xe05: Stack[-1] = "d6q03"
0xe06: Call 0xbd9

0xe07: Pop(1)
0xe08: Push((int) 2)
0xe09: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe0a: IF (Stack[-1] == 0) GOTO 0xe0d; Pop(1)

0xe0b: Stack[-2] = (bool) 1
0xe0c: Return(); Pop(0)

0xe0d: Stack[-2] = (bool) 0
0xe0e: Return(); Pop(0)

0xe0f: PushEmpty()
0xe10: PushEmpty(int, string)
0xe11: Stack[-1] = "d6q03AlbinosKilled"
0xe12: Call 0xbd9

0xe13: Pop(1)
0xe14: Push((int) 1)
0xe15: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe16: IF (Stack[-1] == 0) GOTO 0xe19; Pop(1)

0xe17: Stack[-2] = (bool) 1
0xe18: Return(); Pop(0)

0xe19: Stack[-2] = (bool) 0
0xe1a: Return(); Pop(0)

0xe1b: PushEmpty()
0xe1c: PushEmpty(int, string)
0xe1d: Stack[-1] = "ood6Spi4ka2"
0xe1e: Call 0xbd9

0xe1f: Pop(1)
0xe20: Push((int) 0)
0xe21: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe22: IF (Stack[-1] == 0) GOTO 0xe25; Pop(1)

0xe23: Stack[-2] = (bool) 1
0xe24: Return(); Pop(0)

0xe25: Stack[-2] = (bool) 0
0xe26: Return(); Pop(0)

0xe27: PushEmpty()
0xe28: PushEmpty(int, string)
0xe29: Stack[-1] = "ood6Spi4ka3"
0xe2a: Call 0xbd9

0xe2b: Pop(1)
0xe2c: Push((int) 0)
0xe2d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe2e: IF (Stack[-1] == 0) GOTO 0xe31; Pop(1)

0xe2f: Stack[-2] = (bool) 1
0xe30: Return(); Pop(0)

0xe31: Stack[-2] = (bool) 0
0xe32: Return(); Pop(0)

0xe33: PushEmpty()
0xe34: PushEmpty(int, string)
0xe35: Stack[-1] = "d6q01"
0xe36: Call 0xbd9

0xe37: Pop(1)
0xe38: Push((int) 4)
0xe39: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe3a: IF (Stack[-1] == 0) GOTO 0xe3d; Pop(1)

0xe3b: Stack[-2] = (bool) 1
0xe3c: Return(); Pop(0)

0xe3d: Stack[-2] = (bool) 0
0xe3e: Return(); Pop(0)

0xe3f: PushEmpty()
0xe40: PushEmpty(int, string)
0xe41: Stack[-1] = "ood6Spi4ka4"
0xe42: Call 0xbd9

0xe43: Pop(1)
0xe44: Push((int) 0)
0xe45: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe46: IF (Stack[-1] == 0) GOTO 0xe49; Pop(1)

0xe47: Stack[-2] = (bool) 1
0xe48: Return(); Pop(0)

0xe49: Stack[-2] = (bool) 0
0xe4a: Return(); Pop(0)

0xe4b: PushEmpty()
0xe4c: PushEmpty(int, string)
0xe4d: Stack[-1] = "d2q01"
0xe4e: Call 0xbd9

0xe4f: Pop(1)
0xe50: Push((int) 5)
0xe51: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xe52: IF (Stack[-1] == 0) GOTO 0xe55; Pop(1)

0xe53: Stack[-2] = (bool) 1
0xe54: Return(); Pop(0)

0xe55: Stack[-2] = (bool) 0
0xe56: Return(); Pop(0)

0xe57: PushEmpty()
0xe58: PushEmpty(int, string)
0xe59: Stack[-1] = "ood2Spi4ka3"
0xe5a: Call 0xbd9

0xe5b: Pop(1)
0xe5c: Push((int) 0)
0xe5d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe5e: IF (Stack[-1] == 0) GOTO 0xe61; Pop(1)

0xe5f: Stack[-2] = (bool) 1
0xe60: Return(); Pop(0)

0xe61: Stack[-2] = (bool) 0
0xe62: Return(); Pop(0)

0xe63: PushEmpty()
0xe64: PushEmpty(int, string)
0xe65: Stack[-1] = "KnowMishka"
0xe66: Call 0xbd9

0xe67: Pop(1)
0xe68: Push((int) 1)
0xe69: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe6a: IF (Stack[-1] == 0) GOTO 0xe6d; Pop(1)

0xe6b: Stack[-2] = (bool) 1
0xe6c: Return(); Pop(0)

0xe6d: Stack[-2] = (bool) 0
0xe6e: Return(); Pop(0)

0xe6f: PushEmpty()
0xe70: PushEmpty(int, string)
0xe71: Stack[-1] = "KnowOspina"
0xe72: Call 0xbd9

0xe73: Pop(1)
0xe74: Push((int) 1)
0xe75: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe76: IF (Stack[-1] == 0) GOTO 0xe79; Pop(1)

0xe77: Stack[-2] = (bool) 1
0xe78: Return(); Pop(0)

0xe79: Stack[-2] = (bool) 0
0xe7a: Return(); Pop(0)

0xe7b: PushEmpty()
0xe7c: PushEmpty(int)
0xe7d: Call 0xc10

0xe7e: Pop(0)
0xe7f: Push((int) 18)
0xe80: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xe81: IF (Stack[-1] == 0) GOTO 0xe84; Pop(1)

0xe82: Stack[-2] = (bool) 1
0xe83: Return(); Pop(0)

0xe84: Stack[-2] = (bool) 0
0xe85: Return(); Pop(0)

0xe86: PushEmpty()
0xe87: PushEmpty(bool)
0xe88: Stack[-1] = (bool) 0
0xe89: PushEmpty(int)
0xe8a: Call 0xc10

0xe8b: Pop(0)
0xe8c: Push((int) 0)
0xe8d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xe8e: IF (Stack[-1] == 0) GOTO 0xe96; Pop(1)

0xe8f: PushEmpty(int)
0xe90: Call 0xc10

0xe91: Pop(0)
0xe92: Push((int) 6)
0xe93: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xe94: IF (Stack[-1] == 0) GOTO 0xe96; Pop(1)

0xe95: Stack[-1] = (bool) 1
0xe96: IF (Stack[-1] == 0) GOTO 0xe99; Pop(1)

0xe97: Stack[-2] = (bool) 1
0xe98: Return(); Pop(0)

0xe99: Stack[-2] = (bool) 0
0xe9a: Return(); Pop(0)

0xe9b: PushEmpty()
0xe9c: PushEmpty(bool)
0xe9d: Stack[-1] = (bool) 0
0xe9e: PushEmpty(int)
0xe9f: Call 0xc10

0xea0: Pop(0)
0xea1: Push((int) 6)
0xea2: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xea3: IF (Stack[-1] == 0) GOTO 0xeab; Pop(1)

0xea4: PushEmpty(int)
0xea5: Call 0xc10

0xea6: Pop(0)
0xea7: Push((int) 12)
0xea8: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xea9: IF (Stack[-1] == 0) GOTO 0xeab; Pop(1)

0xeaa: Stack[-1] = (bool) 1
0xeab: IF (Stack[-1] == 0) GOTO 0xeae; Pop(1)

0xeac: Stack[-2] = (bool) 1
0xead: Return(); Pop(0)

0xeae: Stack[-2] = (bool) 0
0xeaf: Return(); Pop(0)

0xeb0: PushEmpty()
0xeb1: PushEmpty(bool)
0xeb2: Stack[-1] = (bool) 0
0xeb3: PushEmpty(int)
0xeb4: Call 0xc10

0xeb5: Pop(0)
0xeb6: Push((int) 12)
0xeb7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xeb8: IF (Stack[-1] == 0) GOTO 0xec0; Pop(1)

0xeb9: PushEmpty(int)
0xeba: Call 0xc10

0xebb: Pop(0)
0xebc: Push((int) 18)
0xebd: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xebe: IF (Stack[-1] == 0) GOTO 0xec0; Pop(1)

0xebf: Stack[-1] = (bool) 1
0xec0: IF (Stack[-1] == 0) GOTO 0xec3; Pop(1)

0xec1: Stack[-2] = (bool) 1
0xec2: Return(); Pop(0)

0xec3: Stack[-2] = (bool) 0
0xec4: Return(); Pop(0)

0xec5: PushEmpty(object, object)
0xec6: @ GetDiaryRoot(Stack[-1])
0xec7: Pop(0)
0xec8: Pop(0); Push((bool) Stack[-1] == 0)
0xec9: IF (Stack[-1] == 0) GOTO 0xecf; Pop(1)

0xeca: Push("Can't retrieve diary root")
0xecb: @ Trace(Stack[-1])
0xecc: Pop(1)
0xecd: Stack[-3] = (bool) 0
0xece: Return(); Pop(2)

0xecf: Stack[-3] = Stack[-1]
0xed0: Return(); Pop(2)

0xed1: Stack[-1] = 0
0xed2: PushEmpty(object, object, int, object, object, int)
0xed3: PushEmpty(object)
0xed4: Call 0xec5

0xed5: Stack[-4] = Stack[-1]
0xed6: Pop(1)
0xed7: @@ Find(Stack[-7], Stack[-2])
0xed8: Pop(0)
0xed9: Pop(0); Push((bool) Stack[-2] == 0)
0xeda: IF (Stack[-1] == 0) GOTO 0xee1; Pop(1)

0xedb: Push("Can't find diary parent with id: ")
0xedc: Pop(1); Push(Stack[-1] + Stack[-8]);
0xedd: @ Trace(Stack[-1])
0xede: Pop(1)
0xedf: Stack[-9] = (bool) 0
0xee0: Return(); Pop(6)

0xee1: @@ AddChild(Stack[-8])
0xee2: Pop(0)
0xee3: Push("player_diary")
0xee4: Push((int) 1)
0xee5: @ SetVariable(Stack[-2], Stack[-1])
0xee6: Pop(2)
0xee7: @@ GetCategory(Stack[-1])
0xee8: Pop(0)
0xee9: @ SetDiarySection(Stack[-1])
0xeea: Pop(0)
0xeeb: Stack[-9] = (bool) 0
0xeec: Return(); Pop(6)

0xeed: Stack[-2] = 0
0xeee: Stack[-3] = 0
0xeef: PushEmpty(object, object, object, object)
0xef0: PushEmpty(object)
0xef1: Call 0xec5

0xef2: Stack[-3] = Stack[-1]
0xef3: Pop(1)
0xef4: @@ Find(Stack[-5], Stack[-1])
0xef5: Pop(0)
0xef6: Pop(0); Push((bool) Stack[-1] == 0)
0xef7: IF (Stack[-1] == 0) GOTO 0xefa; Pop(1)

0xef8: Stack[-6] = (bool) 0
0xef9: Return(); Pop(4)

0xefa: @@ Remove()
0xefb: Pop(0)
0xefc: Stack[-6] = (bool) 1
0xefd: Return(); Pop(4)

0xefe: Stack[-1] = 0
0xeff: Stack[-2] = 0
0xf00: PushEmpty(object, object, object, object)
0xf01: @ GetMainOutdoorScene(Stack[-2])
0xf02: Pop(0)
0xf03: Pop(0); Push((bool) Stack[-2] == 0)
0xf04: IF (Stack[-1] == 0) GOTO 0xf0b; Pop(1)

0xf05: Push("Can't find main outdoor scene")
0xf06: @ Trace(Stack[-1])
0xf07: Pop(1)
0xf08: Stack[-1] = 0
0xf09: Stack[-5] = Stack[-1]
0xf0a: Return(); Pop(4)

0xf0b: @@ GetMap(Stack[-1])
0xf0c: Pop(0)
0xf0d: Stack[-5] = Stack[-1]
0xf0e: Return(); Pop(4)

0xf0f: Stack[-1] = 0
0xf10: Stack[-2] = 0
0xf11: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xf12: @ GetMainOutdoorScene(Stack[-2])
0xf13: Pop(0)
0xf14: Pop(0); Push((bool) Stack[-2] == 0)
0xf15: IF (Stack[-1] == 0) GOTO 0xf1a; Pop(1)

0xf16: Push("Can't find main outdoor scene")
0xf17: @ Trace(Stack[-1])
0xf18: Pop(1)
0xf19: Return(); Pop(8)

0xf1a: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xf1b: Pop(0)
0xf1c: Pop(0); Push((bool) Stack[-1] == 0)
0xf1d: IF (Stack[-1] == 0) GOTO 0xf24; Pop(1)

0xf1e: Push("Warning: outdoor scene locator ")
0xf1f: Pop(1); Push(Stack[-1] + Stack[-11]);
0xf20: Push(" doesnt exist")
0xf21: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf22: @ Trace(Stack[-1])
0xf23: Pop(1)
0xf24: @@ GetMap(Stack[-11])
0xf25: Pop(0)
0xf26: Pop(0); Push((bool) Stack[-11] == 0)
0xf27: IF (Stack[-1] == 0) GOTO 0xf2c; Pop(1)

0xf28: Push("Can't find map")
0xf29: @ Trace(Stack[-1])
0xf2a: Pop(1)
0xf2b: Return(); Pop(8)

0xf2c: Push(CvectorIndex(Stack[-4], 0))
0xf2d: Push(CvectorIndex(Stack[-5], 2))
0xf2e: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xf2f: Pop(2)
0xf30: Return(); Pop(8)

0xf31: Stack[-2] = 0
0xf32: PushEmpty(int, int)
0xf33: Push("player")
0xf34: @ GetVariable(Stack[-1], Stack[-2])
0xf35: Pop(1)
0xf36: Push((int) 0)
0xf37: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf38: IF (Stack[-1] == 0) GOTO 0xf3c; Pop(1)

0xf39: Stack[-3] = (int) 200001
0xf3a: Return(); Pop(2)

0xf3b: GOTO 0xf41

0xf3c: Push((int) 1)
0xf3d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf3e: IF (Stack[-1] == 0) GOTO 0xf41; Pop(1)

0xf3f: Stack[-3] = (int) 200002
0xf40: Return(); Pop(2)

0xf41: Stack[-3] = (int) 200003
0xf42: Return(); Pop(2)

0xf43: PushEmpty(object, object)
0xf44: Push("Adding diary entry")
0xf45: @ Trace(Stack[-1])
0xf46: Pop(1)
0xf47: Push((int) 48)
0xf48: Push((int) 2)
0xf49: Push((int) 12130)
0xf4a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf4b: Pop(3)
0xf4c: PushEmpty(bool, object, int)
0xf4d: Stack[-2] = Stack[-4]
0xf4e: Stack[-1] = (int) 43
0xf4f: Call 0xed2

0xf50: Pop(3)
0xf51: Return(); Pop(2)

0xf52: Stack[-1] = 0
0xf53: PushEmpty(object, object)
0xf54: Push("Adding diary entry")
0xf55: @ Trace(Stack[-1])
0xf56: Pop(1)
0xf57: Push((int) 46)
0xf58: Push((int) 2)
0xf59: Push((int) 12128)
0xf5a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf5b: Pop(3)
0xf5c: PushEmpty(bool, object, int)
0xf5d: Stack[-2] = Stack[-4]
0xf5e: Stack[-1] = (int) 43
0xf5f: Call 0xed2

0xf60: Pop(3)
0xf61: Return(); Pop(2)

0xf62: Stack[-1] = 0
0xf63: PushEmpty(object, object)
0xf64: Push("Adding diary entry")
0xf65: @ Trace(Stack[-1])
0xf66: Pop(1)
0xf67: Push((int) 53)
0xf68: Push((int) 1)
0xf69: Push((int) 12135)
0xf6a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf6b: Pop(3)
0xf6c: PushEmpty(bool, object, int)
0xf6d: Stack[-2] = Stack[-4]
0xf6e: Stack[-1] = (int) 10
0xf6f: Call 0xed2

0xf70: Pop(3)
0xf71: Return(); Pop(2)

0xf72: Stack[-1] = 0
0xf73: PushEmpty(object, object)
0xf74: Push("Adding diary entry")
0xf75: @ Trace(Stack[-1])
0xf76: Pop(1)
0xf77: Push((int) 107)
0xf78: Push((int) 2)
0xf79: Push((int) 13730)
0xf7a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf7b: Pop(3)
0xf7c: PushEmpty(bool, object, int)
0xf7d: Stack[-2] = Stack[-4]
0xf7e: Stack[-1] = (int) -1
0xf7f: Call 0xed2

0xf80: Pop(3)
0xf81: Return(); Pop(2)

0xf82: Stack[-1] = 0
0xf83: PushEmpty(object, object)
0xf84: Push("Adding diary entry")
0xf85: @ Trace(Stack[-1])
0xf86: Pop(1)
0xf87: Push((int) 109)
0xf88: Push((int) 2)
0xf89: Push((int) 13732)
0xf8a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf8b: Pop(3)
0xf8c: PushEmpty(bool, object, int)
0xf8d: Stack[-2] = Stack[-4]
0xf8e: Stack[-1] = (int) 107
0xf8f: Call 0xed2

0xf90: Pop(3)
0xf91: Return(); Pop(2)

0xf92: Stack[-1] = 0
0xf93: PushEmpty(object, object)
0xf94: Push("Adding diary entry")
0xf95: @ Trace(Stack[-1])
0xf96: Pop(1)
0xf97: Push((int) 110)
0xf98: Push((int) 2)
0xf99: Push((int) 13733)
0xf9a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf9b: Pop(3)
0xf9c: PushEmpty(bool, object, int)
0xf9d: Stack[-2] = Stack[-4]
0xf9e: Stack[-1] = (int) 107
0xf9f: Call 0xed2

0xfa0: Pop(3)
0xfa1: Return(); Pop(2)

0xfa2: Stack[-1] = 0
0xfa3: PushEmpty(object, object)
0xfa4: Push("Adding diary entry")
0xfa5: @ Trace(Stack[-1])
0xfa6: Pop(1)
0xfa7: Push((int) 158)
0xfa8: Push((int) 2)
0xfa9: Push((int) 15376)
0xfaa: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfab: Pop(3)
0xfac: PushEmpty(bool, object, int)
0xfad: Stack[-2] = Stack[-4]
0xfae: Stack[-1] = (int) 107
0xfaf: Call 0xed2

0xfb0: Pop(3)
0xfb1: Return(); Pop(2)

0xfb2: Stack[-1] = 0
0xfb3: Push(GlobalVars[1])
0xfb4: Stack[-1] = (bool) 0
0xfb5: GlobalVars[1] = Stack[-1]; Pop(1)
0xfb6: Return(); Pop(0)

0xfb7: PushEmpty()
0xfb8: Push(GlobalVars[1])
0xfb9: Pop(1); Push((bool) Stack[-1] == 0)
0xfba: IF (Stack[-1] == 0) GOTO 0xfc4; Pop(1)

0xfbb: PushEmpty(int, object)
0xfbc: Stack[-1] = Stack[-3]
0xfbd: Push(-2, 1); TaskCall(2)
0xfbe: Call 0x31

0xfbf: Pop(-2, 1); TaskReturn
0xfc0: Pop(2)
0xfc1: Push(GlobalVars[1])
0xfc2: Stack[-1] = (bool) 1
0xfc3: GlobalVars[1] = Stack[-1]; Pop(1)
0xfc4: PushEmpty(bool, int)
0xfc5: Stack[-1] = (int) 1
0xfc6: Call 0xc18

0xfc7: Pop(1)
0xfc8: IF (Stack[-1] == 0) GOTO 0xfd0; Pop(1)

0xfc9: PushEmpty(int, object)
0xfca: Stack[-1] = Stack[-3]
0xfcb: Push(-2, 1); TaskCall(4)
0xfcc: Call 0x13d

0xfcd: Pop(-2, 1); TaskReturn
0xfce: Pop(2)
0xfcf: Return(); Pop(0)

0xfd0: PushEmpty(bool, int)
0xfd1: Stack[-1] = (int) 2
0xfd2: Call 0xc18

0xfd3: Pop(1)
0xfd4: IF (Stack[-1] == 0) GOTO 0xfdc; Pop(1)

0xfd5: PushEmpty(int, object)
0xfd6: Stack[-1] = Stack[-3]
0xfd7: Push(-2, 1); TaskCall(6)
0xfd8: Call 0x531

0xfd9: Pop(-2, 1); TaskReturn
0xfda: Pop(2)
0xfdb: Return(); Pop(0)

0xfdc: PushEmpty(bool, int)
0xfdd: Stack[-1] = (int) 6
0xfde: Call 0xc18

0xfdf: Pop(1)
0xfe0: IF (Stack[-1] == 0) GOTO 0xfe8; Pop(1)

0xfe1: PushEmpty(int, object)
0xfe2: Stack[-1] = Stack[-3]
0xfe3: Push(-2, 1); TaskCall(8)
0xfe4: Call 0x862

0xfe5: Pop(-2, 1); TaskReturn
0xfe6: Pop(2)
0xfe7: Return(); Pop(0)

0xfe8: PushEmpty(bool)
0xfe9: Call 0xc1e

0xfea: Pop(1)
0xfeb: Return(); Pop(0)

