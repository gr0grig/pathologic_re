GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

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
	Serious
	Fear
	Secret
	Azart
	player
	GetPosition
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	m
	Can't find lsh animation : 
	.bin
	add
	money
	Money
	GetItemID
	Category
	AddItem
	DropItems
	ui/NPC_Spi4ka.png
	ui/NPC_Spi4ka_b.png
	lockpick1time is given
	lockpick
	SetItemName
	uses
	money 2000 removed
	ood4Spi4ka1
	ood4Spi4ka3
	ood2Spi4ka4
	ood2Spi4ka1
	ood2Spi4ka2
	d2q01
	playsound
	givemoney
	ood6Spi4ka1
	d6q03
	quest_d6_03
	place_albinos
	ood6Spi4ka2
	completed
	failed
	ood6Spi4ka3
	ood6Spi4ka4
	ood2Spi4ka3
	KnowSpi4ka
	d6q03AlbinosKilled
	d6q01
	d4q03
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	mt_spi4ka

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
	GetInvItemByName (2 args)
	GetInvItemProperty (3 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateInvItem (1 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0xbe1
RunTask = 12

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1fa Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x548 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x825 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab9 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbb7 Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xc2d Vars = (int)
		EVENT_6 Op = 0xc53 Vars = ()
		EVENT_5 Op = 0xc62 Vars = ()
		EVENT_45 Op = 0xc6f Vars = (bool)
		EVENT_0 Op = 0xc7b Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xd0b

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xeb0

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xeae

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xeb2

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xeb4

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x10da

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
0x31: Call2 0xe21

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xd62

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
0x48: Call2 0xd50

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

0x57: PushEmpty(object, object)
0x58: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x59: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a: Call2 0xf4b

0x5b: Pop(2)
0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral"
0x5e: Call2 0x95

0x5f: Pop(1)
0x60: Push((int) 500356)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 500357)
0x66: Push((int) 417)
0x67: Push((int) 414)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 500358)
0x6b: Push((int) 418)
0x6c: Push((int) 415)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 500359)
0x70: Push((int) -1)
0x71: Push((int) 416)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x77

0x75: Return(); Pop(0)

0x76: GOTO 0x55

0x77: PushEmpty(bool)
0x78: Call2 0xeb6

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @ lshWaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: PushEmpty(string)
0x81: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x82: Call2 0xdec

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
0x97: Call2 0xeb6

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
0xa7: Call2 0xdfc

0xa8: Pop(2)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0xae: PushEmpty()
0xaf: Call2 0xe1a

0xb0: Pop(0)
0xb1: Push((int) 413)
0xb2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0xf4b

0xb8: Pop(2)
0xb9: PushEmpty(string)
0xba: Stack[-1] = "Neutral"
0xbb: Call2 0x95

0xbc: Pop(1)
0xbd: Push((int) 500356)
0xbe: @@ SetMessage(Stack[-1])
0xbf: Pop(1)
0xc0: @@ ClearReplies()
0xc1: Pop(0)
0xc2: Push((int) 500357)
0xc3: Push((int) 417)
0xc4: Push((int) 414)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Push((int) 500358)
0xc8: Push((int) 418)
0xc9: Push((int) 415)
0xca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb: Pop(3)
0xcc: Push((int) 500359)
0xcd: Push((int) -1)
0xce: Push((int) 416)
0xcf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0: Pop(3)
0xd1: Return(); Pop(0)

0xd2: Push((int) 418)
0xd3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xd5: PushEmpty(string)
0xd6: Stack[-1] = "Neutral"
0xd7: Call2 0x95

0xd8: Pop(1)
0xd9: Push((int) 500361)
0xda: @@ SetMessage(Stack[-1])
0xdb: Pop(1)
0xdc: @@ ClearReplies()
0xdd: Pop(0)
0xde: Push((int) 500362)
0xdf: Push((int) 417)
0xe0: Push((int) 419)
0xe1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2: Pop(3)
0xe3: Push((int) 500363)
0xe4: Push((int) -1)
0xe5: Push((int) 420)
0xe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7: Pop(3)
0xe8: Return(); Pop(0)

0xe9: Push((int) 417)
0xea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xec: PushEmpty(string)
0xed: Stack[-1] = "Neutral"
0xee: Call2 0x95

0xef: Pop(1)
0xf0: Push((int) 500360)
0xf1: @@ SetMessage(Stack[-1])
0xf2: Pop(1)
0xf3: @@ ClearReplies()
0xf4: Pop(0)
0xf5: Push((int) 500364)
0xf6: Push((int) 425)
0xf7: Push((int) 423)
0xf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9: Pop(3)
0xfa: Push((int) 500365)
0xfb: Push((int) 425)
0xfc: Push((int) 424)
0xfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe: Pop(3)
0xff: Return(); Pop(0)

0x100: Push((int) 425)
0x101: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x103: PushEmpty(string)
0x104: Stack[-1] = "Neutral"
0x105: Call2 0x95

0x106: Pop(1)
0x107: Push((int) 500366)
0x108: @@ SetMessage(Stack[-1])
0x109: Pop(1)
0x10a: @@ ClearReplies()
0x10b: Pop(0)
0x10c: Push((int) 500367)
0x10d: Push((int) -1)
0x10e: Push((int) 426)
0x10f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110: Pop(3)
0x111: Push((int) 500368)
0x112: Push((int) -1)
0x113: Push((int) 427)
0x114: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115: Pop(3)
0x116: Return(); Pop(0)

0x117: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x118: PushEmpty(bool)
0x119: Call2 0xeb6

0x11a: Pop(0)
0x11b: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11c: @ lshStopAnimation()
0x11d: Pop(0)
0x11e: GOTO 0x121

0x11f: @ StopAnimation()
0x120: Pop(0)
0x121: Return(); Pop(0)

0x122: GOTO 0xac

0x123: Return(); Pop(0)

0x124: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x125: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x126: PushEmpty(bool, object, float)
0x127: Stack[-2] = Stack[-12]
0x128: Stack[-1] = (float) 70.0
0x129: Call2 0xd0b

0x12a: Pop(2)
0x12b: Pop(1); Push((bool) Stack[-1] == 0)
0x12c: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12d: Stack[-10] = (int) -2
0x12e: Return(); Pop(8)

0x12f: @ CreateDialog(Stack[-4])
0x130: Pop(0)
0x131: PushEmpty(int)
0x132: Call2 0xeb0

0x133: Pop(0)
0x134: @@ SetNPCName(Stack[-1])
0x135: Pop(1)
0x136: PushEmpty(int)
0x137: Call2 0xeae

0x138: Pop(0)
0x139: @@ SetNPCDescription(Stack[-1])
0x13a: Pop(1)
0x13b: PushEmpty(string)
0x13c: Call2 0xeb2

0x13d: Pop(0)
0x13e: @@ SetPhoto(Stack[-1])
0x13f: Pop(1)
0x140: PushEmpty(string)
0x141: Call2 0xeb4

0x142: Pop(0)
0x143: @@ SetPhoto2(Stack[-1])
0x144: Pop(1)
0x145: PushEmpty(int)
0x146: Call2 0x10da

0x147: Pop(0)
0x148: @@ SetPlayerName(Stack[-1])
0x149: Pop(1)
0x14a: Stack[-2] = (int) -1
0x14b: @ IsOverrideActive(Stack[-3])
0x14c: Pop(0)
0x14d: Push(Stack[-3])
0x14e: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14f: Stack[-10] = (int) -2
0x150: Return(); Pop(8)

0x151: @ DoDialog(Stack[-4])
0x152: Pop(0)
0x153: PushEmpty(bool, object)
0x154: PushEmpty(object)
0x155: Call2 0xe21

0x156: Stack[-2] = Stack[-1]
0x157: Pop(1)
0x158: Call2 0xd62

0x159: Pop(2)
0x15a: PushEmpty(object, object)
0x15b: Stack[-2] = Stack[-11]
0x15c: Stack[-1] = Stack[-6]
0x15d: Push(-2, 4); TaskCall(3)
0x15e: Call2 0x175

0x15f: Pop(-2, 4); TaskReturn
0x160: Pop(2)
0x161: @@ IsDialogEnd(Stack[-1])
0x162: Pop(0)
0x163: Pop(0); Push((bool) Stack[-1] == 0)
0x164: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x165: @ sync()
0x166: Pop(0)
0x167: @@ IsDialogEnd(Stack[-1])
0x168: Pop(0)
0x169: GOTO 0x163

0x16a: PushEmpty(object)
0x16b: Stack[-1] = Stack[-10]
0x16c: Call2 0xd50

0x16d: Pop(1)
0x16e: @ StopDialog(Stack[-4])
0x16f: Pop(0)
0x170: @@ GetReturnValue(Stack[-2])
0x171: Pop(0)
0x172: Stack[-10] = Stack[-2]
0x173: Return(); Pop(8)

0x174: Stack[-4] = 0
0x175: PushEmpty()
0x176: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x177: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x178: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x179: Push((int) 1)
0x17a: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x17b: PushEmpty(string)
0x17c: Stack[-1] = "Serious"
0x17d: Call2 0x1e4

0x17e: Pop(1)
0x17f: Push((int) 506715)
0x180: @@ SetMessage(Stack[-1])
0x181: Pop(1)
0x182: @@ ClearReplies()
0x183: Pop(0)
0x184: PushEmpty(bool)
0x185: Stack[-1] = (bool) 0
0x186: PushEmpty(bool, object)
0x187: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x188: Call2 0xf7f

0x189: Pop(1)
0x18a: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18b: PushEmpty(bool, object)
0x18c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18d: Call2 0xf97

0x18e: Pop(1)
0x18f: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x190: Stack[-1] = (bool) 1
0x191: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x192: Push((int) 507429)
0x193: Push((int) 7355)
0x194: Push((int) 8200)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: PushEmpty(bool, object)
0x198: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x199: Call2 0xf8b

0x19a: Pop(1)
0x19b: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19c: Push((int) 506716)
0x19d: Push((int) 7385)
0x19e: Push((int) 7403)
0x19f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a0: Pop(3)
0x1a1: PushEmpty(bool)
0x1a2: Stack[-1] = (bool) 0
0x1a3: PushEmpty(bool, object)
0x1a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a5: Call2 0x1017

0x1a6: Pop(1)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1a8: PushEmpty(bool, object)
0x1a9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1aa: Call2 0x1023

0x1ab: Pop(1)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ad: Stack[-1] = (bool) 1
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1af: Push((int) 514516)
0x1b0: Push((int) 15756)
0x1b1: Push((int) 15755)
0x1b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b3: Pop(3)
0x1b4: PushEmpty(bool, object)
0x1b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b6: Call2 0xf73

0x1b7: Pop(1)
0x1b8: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1b9: Push((int) 532774)
0x1ba: Push((int) 10460)
0x1bb: Push((int) 34242)
0x1bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bd: Pop(3)
0x1be: Push((int) 507534)
0x1bf: Push((int) -1)
0x1c0: Push((int) 8316)
0x1c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c2: Pop(3)
0x1c3: GOTO 0x1c6

0x1c4: Return(); Pop(0)

0x1c5: GOTO 0x179

0x1c6: PushEmpty(bool)
0x1c7: Call2 0xeb6

0x1c8: Pop(0)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1ca: @ lshWaitForAnimEnd()
0x1cb: Pop(0)
0x1cc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1cd: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1ce: GOTO 0x1d4

0x1cf: PushEmpty(string)
0x1d0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1d1: Call2 0xdec

0x1d2: Pop(1)
0x1d3: GOTO 0x1ca

0x1d4: GOTO 0x1e3

0x1d5: Push("all")
0x1d6: Push("idle")
0x1d7: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d8: Pop(2)
0x1d9: @ WaitForAnimEnd()
0x1da: Pop(0)
0x1db: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1dc: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1dd: GOTO 0x1e3

0x1de: Push("all")
0x1df: Push("idle")
0x1e0: @ PlayAnimation(Stack[-2], Stack[-1])
0x1e1: Pop(2)
0x1e2: GOTO 0x1d9

0x1e3: Return(); Pop(0)

0x1e4: PushEmpty()
0x1e5: PushEmpty(bool)
0x1e6: Call2 0xeb6

0x1e7: Pop(0)
0x1e8: Pop(1); Push((bool) Stack[-1] == 0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1ea: Return(); Pop(0)

0x1eb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: Return(); Pop(0)

0x1ee: PushEmpty(string, bool)
0x1ef: Stack[-2] = Stack[-3]
0x1f0: Push("")
0x1f1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f3: Stack[-1] = (bool) 0
0x1f4: GOTO 0x1f6

0x1f5: Stack[-1] = (bool) 1
0x1f6: Call2 0xdfc

0x1f7: Pop(2)
0x1f8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1f9: Return(); Pop(0)

0x1fa: PushEmpty()
0x1fb: Push((int) 1)
0x1fc: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x1fd: PushEmpty()
0x1fe: Call2 0xe1a

0x1ff: Pop(0)
0x200: Push((int) 7358)
0x201: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x203: PushEmpty(object, object)
0x204: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x205: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x206: Call2 0xee9

0x207: Pop(2)
0x208: PushEmpty(object, object)
0x209: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x20a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x20b: Call2 0xef5

0x20c: Pop(2)
0x20d: Push((int) 7363)
0x20e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x210: PushEmpty(object, object)
0x211: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x212: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x213: Call2 0xee9

0x214: Pop(2)
0x215: PushEmpty(object, object)
0x216: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x217: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x218: Call2 0xef5

0x219: Pop(2)
0x21a: Push((int) 7382)
0x21b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21d: PushEmpty(object, object)
0x21e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x21f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x220: Call2 0xee9

0x221: Pop(2)
0x222: Push((int) 7394)
0x223: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x224: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x225: PushEmpty(object, object)
0x226: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x227: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x228: Call2 0xeef

0x229: Pop(2)
0x22a: Push((int) 7395)
0x22b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22d: PushEmpty(object, object)
0x22e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x22f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x230: Call2 0xeef

0x231: Pop(2)
0x232: Push((int) 7396)
0x233: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x234: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x235: PushEmpty(object, object)
0x236: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x237: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x238: Call2 0xeef

0x239: Pop(2)
0x23a: Push((int) 7397)
0x23b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x23d: PushEmpty(object, object)
0x23e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x23f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x240: Call2 0xeef

0x241: Pop(2)
0x242: Push((int) 7398)
0x243: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x244: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x245: PushEmpty(object, object)
0x246: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x247: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x248: Call2 0xeef

0x249: Pop(2)
0x24a: Push((int) 7399)
0x24b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x24d: PushEmpty(object, object)
0x24e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x24f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x250: Call2 0xeef

0x251: Pop(2)
0x252: Push((int) 15755)
0x253: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x255: PushEmpty(object, object)
0x256: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x257: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x258: Call2 0xf45

0x259: Pop(2)
0x25a: Push((int) 34242)
0x25b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25c: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x25d: PushEmpty(object, object)
0x25e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x25f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x260: Call2 0xee3

0x261: Pop(2)
0x262: Push((int) 7402)
0x263: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x265: PushEmpty(string)
0x266: Stack[-1] = "Serious"
0x267: Call2 0x1e4

0x268: Pop(1)
0x269: Push((int) 506715)
0x26a: @@ SetMessage(Stack[-1])
0x26b: Pop(1)
0x26c: @@ ClearReplies()
0x26d: Pop(0)
0x26e: PushEmpty(bool)
0x26f: Stack[-1] = (bool) 0
0x270: PushEmpty(bool, object)
0x271: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x272: Call2 0xf7f

0x273: Pop(1)
0x274: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x275: PushEmpty(bool, object)
0x276: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x277: Call2 0xf97

0x278: Pop(1)
0x279: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x27a: Stack[-1] = (bool) 1
0x27b: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27c: Push((int) 507429)
0x27d: Push((int) 7355)
0x27e: Push((int) 8200)
0x27f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x280: Pop(3)
0x281: PushEmpty(bool, object)
0x282: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x283: Call2 0xf8b

0x284: Pop(1)
0x285: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x286: Push((int) 506716)
0x287: Push((int) 7385)
0x288: Push((int) 7403)
0x289: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28a: Pop(3)
0x28b: PushEmpty(bool)
0x28c: Stack[-1] = (bool) 0
0x28d: PushEmpty(bool, object)
0x28e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28f: Call2 0x1017

0x290: Pop(1)
0x291: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x292: PushEmpty(bool, object)
0x293: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x294: Call2 0x1023

0x295: Pop(1)
0x296: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x297: Stack[-1] = (bool) 1
0x298: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x299: Push((int) 514516)
0x29a: Push((int) 15756)
0x29b: Push((int) 15755)
0x29c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29d: Pop(3)
0x29e: PushEmpty(bool, object)
0x29f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a0: Call2 0xf73

0x2a1: Pop(1)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a3: Push((int) 532774)
0x2a4: Push((int) 10460)
0x2a5: Push((int) 34242)
0x2a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a7: Pop(3)
0x2a8: Push((int) 507534)
0x2a9: Push((int) -1)
0x2aa: Push((int) 8316)
0x2ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ac: Pop(3)
0x2ad: Return(); Pop(0)

0x2ae: Push((int) 10460)
0x2af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2b1: PushEmpty(string)
0x2b2: Stack[-1] = "Serious"
0x2b3: Call2 0x1e4

0x2b4: Pop(1)
0x2b5: Push((int) 509517)
0x2b6: @@ SetMessage(Stack[-1])
0x2b7: Pop(1)
0x2b8: @@ ClearReplies()
0x2b9: Pop(0)
0x2ba: Push((int) 509518)
0x2bb: Push((int) 10462)
0x2bc: Push((int) 10461)
0x2bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2be: Pop(3)
0x2bf: Return(); Pop(0)

0x2c0: Push((int) 10462)
0x2c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2c3: PushEmpty(string)
0x2c4: Stack[-1] = "Serious"
0x2c5: Call2 0x1e4

0x2c6: Pop(1)
0x2c7: Push((int) 509519)
0x2c8: @@ SetMessage(Stack[-1])
0x2c9: Pop(1)
0x2ca: @@ ClearReplies()
0x2cb: Pop(0)
0x2cc: Push((int) 509520)
0x2cd: Push((int) 10464)
0x2ce: Push((int) 10463)
0x2cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d0: Pop(3)
0x2d1: Push((int) 509530)
0x2d2: Push((int) 10466)
0x2d3: Push((int) 10474)
0x2d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d5: Pop(3)
0x2d6: Return(); Pop(0)

0x2d7: Push((int) 10464)
0x2d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2da: PushEmpty(string)
0x2db: Stack[-1] = "Neutral"
0x2dc: Call2 0x1e4

0x2dd: Pop(1)
0x2de: Push((int) 509521)
0x2df: @@ SetMessage(Stack[-1])
0x2e0: Pop(1)
0x2e1: @@ ClearReplies()
0x2e2: Pop(0)
0x2e3: Push((int) 509522)
0x2e4: Push((int) 10466)
0x2e5: Push((int) 10465)
0x2e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e7: Pop(3)
0x2e8: Push((int) 509529)
0x2e9: Push((int) 10466)
0x2ea: Push((int) 10472)
0x2eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ec: Pop(3)
0x2ed: Return(); Pop(0)

0x2ee: Push((int) 10466)
0x2ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x2f1: PushEmpty(string)
0x2f2: Stack[-1] = "Fear"
0x2f3: Call2 0x1e4

0x2f4: Pop(1)
0x2f5: Push((int) 509523)
0x2f6: @@ SetMessage(Stack[-1])
0x2f7: Pop(1)
0x2f8: @@ ClearReplies()
0x2f9: Pop(0)
0x2fa: Push((int) 509524)
0x2fb: Push((int) 10468)
0x2fc: Push((int) 10467)
0x2fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fe: Pop(3)
0x2ff: Push((int) 509528)
0x300: Push((int) -1)
0x301: Push((int) 10471)
0x302: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x303: Pop(3)
0x304: Return(); Pop(0)

0x305: Push((int) 10468)
0x306: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x308: PushEmpty(string)
0x309: Stack[-1] = "Secret"
0x30a: Call2 0x1e4

0x30b: Pop(1)
0x30c: Push((int) 509525)
0x30d: @@ SetMessage(Stack[-1])
0x30e: Pop(1)
0x30f: @@ ClearReplies()
0x310: Pop(0)
0x311: Push((int) 509526)
0x312: Push((int) -1)
0x313: Push((int) 10469)
0x314: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x315: Pop(3)
0x316: Push((int) 509527)
0x317: Push((int) -1)
0x318: Push((int) 10470)
0x319: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31a: Pop(3)
0x31b: Return(); Pop(0)

0x31c: Push((int) 15756)
0x31d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x31f: PushEmpty(string)
0x320: Stack[-1] = "Neutral"
0x321: Call2 0x1e4

0x322: Pop(1)
0x323: Push((int) 514517)
0x324: @@ SetMessage(Stack[-1])
0x325: Pop(1)
0x326: @@ ClearReplies()
0x327: Pop(0)
0x328: Push((int) 514518)
0x329: Push((int) -1)
0x32a: Push((int) 15757)
0x32b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32c: Pop(3)
0x32d: Return(); Pop(0)

0x32e: Push((int) 7385)
0x32f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x331: PushEmpty(string)
0x332: Stack[-1] = "Azart"
0x333: Call2 0x1e4

0x334: Pop(1)
0x335: Push((int) 506699)
0x336: @@ SetMessage(Stack[-1])
0x337: Pop(1)
0x338: @@ ClearReplies()
0x339: Pop(0)
0x33a: Push((int) 506700)
0x33b: Push((int) 7387)
0x33c: Push((int) 7386)
0x33d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33e: Pop(3)
0x33f: Push((int) 506714)
0x340: Push((int) 7387)
0x341: Push((int) 7400)
0x342: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x343: Pop(3)
0x344: Push((int) 506713)
0x345: Push((int) -1)
0x346: Push((int) 7399)
0x347: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x348: Pop(3)
0x349: Return(); Pop(0)

0x34a: Push((int) 7387)
0x34b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34c: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x34d: PushEmpty(string)
0x34e: Stack[-1] = "Azart"
0x34f: Call2 0x1e4

0x350: Pop(1)
0x351: Push((int) 506701)
0x352: @@ SetMessage(Stack[-1])
0x353: Pop(1)
0x354: @@ ClearReplies()
0x355: Pop(0)
0x356: Push((int) 506702)
0x357: Push((int) 7389)
0x358: Push((int) 7388)
0x359: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35a: Pop(3)
0x35b: Push((int) 506712)
0x35c: Push((int) -1)
0x35d: Push((int) 7398)
0x35e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35f: Pop(3)
0x360: Return(); Pop(0)

0x361: Push((int) 7389)
0x362: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x364: PushEmpty(string)
0x365: Stack[-1] = "Secret"
0x366: Call2 0x1e4

0x367: Pop(1)
0x368: Push((int) 506703)
0x369: @@ SetMessage(Stack[-1])
0x36a: Pop(1)
0x36b: @@ ClearReplies()
0x36c: Pop(0)
0x36d: Push((int) 506704)
0x36e: Push((int) 7391)
0x36f: Push((int) 7390)
0x370: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x371: Pop(3)
0x372: Push((int) 506711)
0x373: Push((int) -1)
0x374: Push((int) 7397)
0x375: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x376: Pop(3)
0x377: Return(); Pop(0)

0x378: Push((int) 7391)
0x379: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37a: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x37b: PushEmpty(string)
0x37c: Stack[-1] = "Secret"
0x37d: Call2 0x1e4

0x37e: Pop(1)
0x37f: Push((int) 506705)
0x380: @@ SetMessage(Stack[-1])
0x381: Pop(1)
0x382: @@ ClearReplies()
0x383: Pop(0)
0x384: Push((int) 506706)
0x385: Push((int) 7393)
0x386: Push((int) 7392)
0x387: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x388: Pop(3)
0x389: Push((int) 506710)
0x38a: Push((int) -1)
0x38b: Push((int) 7396)
0x38c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38d: Pop(3)
0x38e: Return(); Pop(0)

0x38f: Push((int) 7393)
0x390: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x391: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x392: PushEmpty(string)
0x393: Stack[-1] = "Secret"
0x394: Call2 0x1e4

0x395: Pop(1)
0x396: Push((int) 506707)
0x397: @@ SetMessage(Stack[-1])
0x398: Pop(1)
0x399: @@ ClearReplies()
0x39a: Pop(0)
0x39b: Push((int) 506708)
0x39c: Push((int) -1)
0x39d: Push((int) 7394)
0x39e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39f: Pop(3)
0x3a0: Push((int) 506709)
0x3a1: Push((int) -1)
0x3a2: Push((int) 7395)
0x3a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a4: Pop(3)
0x3a5: Return(); Pop(0)

0x3a6: Push((int) 7355)
0x3a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3a9: PushEmpty(string)
0x3aa: Stack[-1] = "Fear"
0x3ab: Call2 0x1e4

0x3ac: Pop(1)
0x3ad: Push((int) 506674)
0x3ae: @@ SetMessage(Stack[-1])
0x3af: Pop(1)
0x3b0: @@ ClearReplies()
0x3b1: Pop(0)
0x3b2: Push((int) 506675)
0x3b3: Push((int) 7357)
0x3b4: Push((int) 7356)
0x3b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b6: Pop(3)
0x3b7: Push((int) 506689)
0x3b8: Push((int) 7373)
0x3b9: Push((int) 7372)
0x3ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bb: Pop(3)
0x3bc: Return(); Pop(0)

0x3bd: Push((int) 7373)
0x3be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3c0: PushEmpty(string)
0x3c1: Stack[-1] = "Secret"
0x3c2: Call2 0x1e4

0x3c3: Pop(1)
0x3c4: Push((int) 506690)
0x3c5: @@ SetMessage(Stack[-1])
0x3c6: Pop(1)
0x3c7: @@ ClearReplies()
0x3c8: Pop(0)
0x3c9: Push((int) 506691)
0x3ca: Push((int) 7357)
0x3cb: Push((int) 7374)
0x3cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cd: Pop(3)
0x3ce: Push((int) 506692)
0x3cf: Push((int) 7377)
0x3d0: Push((int) 7376)
0x3d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d2: Pop(3)
0x3d3: Return(); Pop(0)

0x3d4: Push((int) 7377)
0x3d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3d7: PushEmpty(string)
0x3d8: Stack[-1] = "Azart"
0x3d9: Call2 0x1e4

0x3da: Pop(1)
0x3db: Push((int) 506693)
0x3dc: @@ SetMessage(Stack[-1])
0x3dd: Pop(1)
0x3de: @@ ClearReplies()
0x3df: Pop(0)
0x3e0: Push((int) 506694)
0x3e1: Push((int) 7362)
0x3e2: Push((int) 7378)
0x3e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e4: Pop(3)
0x3e5: Push((int) 506695)
0x3e6: Push((int) 7381)
0x3e7: Push((int) 7380)
0x3e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e9: Pop(3)
0x3ea: Return(); Pop(0)

0x3eb: Push((int) 7381)
0x3ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3ee: PushEmpty(string)
0x3ef: Stack[-1] = "Azart"
0x3f0: Call2 0x1e4

0x3f1: Pop(1)
0x3f2: Push((int) 506696)
0x3f3: @@ SetMessage(Stack[-1])
0x3f4: Pop(1)
0x3f5: @@ ClearReplies()
0x3f6: Pop(0)
0x3f7: Push((int) 506697)
0x3f8: Push((int) -1)
0x3f9: Push((int) 7382)
0x3fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fb: Pop(3)
0x3fc: Push((int) 506698)
0x3fd: Push((int) 7362)
0x3fe: Push((int) 7383)
0x3ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x400: Pop(3)
0x401: Return(); Pop(0)

0x402: Push((int) 7357)
0x403: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x404: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x405: PushEmpty(string)
0x406: Stack[-1] = "Fear"
0x407: Call2 0x1e4

0x408: Pop(1)
0x409: Push((int) 506676)
0x40a: @@ SetMessage(Stack[-1])
0x40b: Pop(1)
0x40c: @@ ClearReplies()
0x40d: Pop(0)
0x40e: Push((int) 533950)
0x40f: Push((int) 35515)
0x410: Push((int) 35514)
0x411: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x412: Pop(3)
0x413: Return(); Pop(0)

0x414: Push((int) 35515)
0x415: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x416: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x417: PushEmpty(string)
0x418: Stack[-1] = "Fear"
0x419: Call2 0x1e4

0x41a: Pop(1)
0x41b: Push((int) 533951)
0x41c: @@ SetMessage(Stack[-1])
0x41d: Pop(1)
0x41e: @@ ClearReplies()
0x41f: Pop(0)
0x420: Push((int) 506677)
0x421: Push((int) -1)
0x422: Push((int) 7358)
0x423: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x424: Pop(3)
0x425: Push((int) 506678)
0x426: Push((int) 7360)
0x427: Push((int) 7359)
0x428: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x429: Pop(3)
0x42a: Return(); Pop(0)

0x42b: Push((int) 7360)
0x42c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42d: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x42e: PushEmpty(string)
0x42f: Stack[-1] = "Fear"
0x430: Call2 0x1e4

0x431: Pop(1)
0x432: Push((int) 506679)
0x433: @@ SetMessage(Stack[-1])
0x434: Pop(1)
0x435: @@ ClearReplies()
0x436: Pop(0)
0x437: Push((int) 506680)
0x438: Push((int) 7362)
0x439: Push((int) 7361)
0x43a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43b: Pop(3)
0x43c: Push((int) 506683)
0x43d: Push((int) 7365)
0x43e: Push((int) 7364)
0x43f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x440: Pop(3)
0x441: Push((int) 506686)
0x442: Push((int) 7369)
0x443: Push((int) 7368)
0x444: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x445: Pop(3)
0x446: Return(); Pop(0)

0x447: Push((int) 7369)
0x448: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x449: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x44a: PushEmpty(string)
0x44b: Stack[-1] = "Fear"
0x44c: Call2 0x1e4

0x44d: Pop(1)
0x44e: Push((int) 506687)
0x44f: @@ SetMessage(Stack[-1])
0x450: Pop(1)
0x451: @@ ClearReplies()
0x452: Pop(0)
0x453: Push((int) 506688)
0x454: Push((int) 7362)
0x455: Push((int) 7370)
0x456: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x457: Pop(3)
0x458: Return(); Pop(0)

0x459: Push((int) 7365)
0x45a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45b: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x45c: PushEmpty(string)
0x45d: Stack[-1] = "Serious"
0x45e: Call2 0x1e4

0x45f: Pop(1)
0x460: Push((int) 506684)
0x461: @@ SetMessage(Stack[-1])
0x462: Pop(1)
0x463: @@ ClearReplies()
0x464: Pop(0)
0x465: Push((int) 506685)
0x466: Push((int) 7362)
0x467: Push((int) 7366)
0x468: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x469: Pop(3)
0x46a: Return(); Pop(0)

0x46b: Push((int) 7362)
0x46c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46d: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x46e: PushEmpty(string)
0x46f: Stack[-1] = "Secret"
0x470: Call2 0x1e4

0x471: Pop(1)
0x472: Push((int) 506681)
0x473: @@ SetMessage(Stack[-1])
0x474: Pop(1)
0x475: @@ ClearReplies()
0x476: Pop(0)
0x477: Push((int) 506682)
0x478: Push((int) -1)
0x479: Push((int) 7363)
0x47a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47b: Pop(3)
0x47c: Return(); Pop(0)

0x47d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x47e: PushEmpty(bool)
0x47f: Call2 0xeb6

0x480: Pop(0)
0x481: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x482: @ lshStopAnimation()
0x483: Pop(0)
0x484: GOTO 0x487

0x485: @ StopAnimation()
0x486: Pop(0)
0x487: Return(); Pop(0)

0x488: GOTO 0x1fb

0x489: Return(); Pop(0)

0x48a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x48b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x48c: PushEmpty(bool, object, float)
0x48d: Stack[-2] = Stack[-12]
0x48e: Stack[-1] = (float) 70.0
0x48f: Call2 0xd0b

0x490: Pop(2)
0x491: Pop(1); Push((bool) Stack[-1] == 0)
0x492: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x493: Stack[-10] = (int) -2
0x494: Return(); Pop(8)

0x495: @ CreateDialog(Stack[-4])
0x496: Pop(0)
0x497: PushEmpty(int)
0x498: Call2 0xeb0

0x499: Pop(0)
0x49a: @@ SetNPCName(Stack[-1])
0x49b: Pop(1)
0x49c: PushEmpty(int)
0x49d: Call2 0xeae

0x49e: Pop(0)
0x49f: @@ SetNPCDescription(Stack[-1])
0x4a0: Pop(1)
0x4a1: PushEmpty(string)
0x4a2: Call2 0xeb2

0x4a3: Pop(0)
0x4a4: @@ SetPhoto(Stack[-1])
0x4a5: Pop(1)
0x4a6: PushEmpty(string)
0x4a7: Call2 0xeb4

0x4a8: Pop(0)
0x4a9: @@ SetPhoto2(Stack[-1])
0x4aa: Pop(1)
0x4ab: PushEmpty(int)
0x4ac: Call2 0x10da

0x4ad: Pop(0)
0x4ae: @@ SetPlayerName(Stack[-1])
0x4af: Pop(1)
0x4b0: Stack[-2] = (int) -1
0x4b1: @ IsOverrideActive(Stack[-3])
0x4b2: Pop(0)
0x4b3: Push(Stack[-3])
0x4b4: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b5: Stack[-10] = (int) -2
0x4b6: Return(); Pop(8)

0x4b7: @ DoDialog(Stack[-4])
0x4b8: Pop(0)
0x4b9: PushEmpty(bool, object)
0x4ba: PushEmpty(object)
0x4bb: Call2 0xe21

0x4bc: Stack[-2] = Stack[-1]
0x4bd: Pop(1)
0x4be: Call2 0xd62

0x4bf: Pop(2)
0x4c0: PushEmpty(object, object)
0x4c1: Stack[-2] = Stack[-11]
0x4c2: Stack[-1] = Stack[-6]
0x4c3: Push(-2, 4); TaskCall(5)
0x4c4: Call2 0x4db

0x4c5: Pop(-2, 4); TaskReturn
0x4c6: Pop(2)
0x4c7: @@ IsDialogEnd(Stack[-1])
0x4c8: Pop(0)
0x4c9: Pop(0); Push((bool) Stack[-1] == 0)
0x4ca: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4cb: @ sync()
0x4cc: Pop(0)
0x4cd: @@ IsDialogEnd(Stack[-1])
0x4ce: Pop(0)
0x4cf: GOTO 0x4c9

0x4d0: PushEmpty(object)
0x4d1: Stack[-1] = Stack[-10]
0x4d2: Call2 0xd50

0x4d3: Pop(1)
0x4d4: @ StopDialog(Stack[-4])
0x4d5: Pop(0)
0x4d6: @@ GetReturnValue(Stack[-2])
0x4d7: Pop(0)
0x4d8: Stack[-10] = Stack[-2]
0x4d9: Return(); Pop(8)

0x4da: Stack[-4] = 0
0x4db: PushEmpty()
0x4dc: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4dd: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4de: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4df: Push((int) 1)
0x4e0: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x4e1: PushEmpty(string)
0x4e2: Stack[-1] = "Neutral"
0x4e3: Call2 0x532

0x4e4: Pop(1)
0x4e5: Push((int) 510886)
0x4e6: @@ SetMessage(Stack[-1])
0x4e7: Pop(1)
0x4e8: @@ ClearReplies()
0x4e9: Pop(0)
0x4ea: PushEmpty(bool, object)
0x4eb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ec: Call2 0xf5b

0x4ed: Pop(1)
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4ef: Push((int) 510887)
0x4f0: Push((int) 11068)
0x4f1: Push((int) 12035)
0x4f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f3: Pop(3)
0x4f4: Push((int) 510888)
0x4f5: Push((int) 12037)
0x4f6: Push((int) 12036)
0x4f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f8: Pop(3)
0x4f9: PushEmpty(bool)
0x4fa: Stack[-1] = (bool) 0
0x4fb: PushEmpty(bool, object)
0x4fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4fd: Call2 0x102f

0x4fe: Pop(1)
0x4ff: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x500: PushEmpty(bool, object)
0x501: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x502: Call2 0xf67

0x503: Pop(1)
0x504: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x505: Stack[-1] = (bool) 1
0x506: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x507: Push((int) 534279)
0x508: Push((int) 35872)
0x509: Push((int) 35871)
0x50a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50b: Pop(3)
0x50c: Push((int) 534267)
0x50d: Push((int) -1)
0x50e: Push((int) 35855)
0x50f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x510: Pop(3)
0x511: GOTO 0x514

0x512: Return(); Pop(0)

0x513: GOTO 0x4df

0x514: PushEmpty(bool)
0x515: Call2 0xeb6

0x516: Pop(0)
0x517: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x518: @ lshWaitForAnimEnd()
0x519: Pop(0)
0x51a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x51b: IF (Stack[-1] == 0) GOTO 0x51d; Pop(1)

0x51c: GOTO 0x522

0x51d: PushEmpty(string)
0x51e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x51f: Call2 0xdec

0x520: Pop(1)
0x521: GOTO 0x518

0x522: GOTO 0x531

0x523: Push("all")
0x524: Push("idle")
0x525: @ PlayAnimation(Stack[-2], Stack[-1])
0x526: Pop(2)
0x527: @ WaitForAnimEnd()
0x528: Pop(0)
0x529: Push( Stack[3 + Tasks[-1].StackPointer] )
0x52a: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x52b: GOTO 0x531

0x52c: Push("all")
0x52d: Push("idle")
0x52e: @ PlayAnimation(Stack[-2], Stack[-1])
0x52f: Pop(2)
0x530: GOTO 0x527

0x531: Return(); Pop(0)

0x532: PushEmpty()
0x533: PushEmpty(bool)
0x534: Call2 0xeb6

0x535: Pop(0)
0x536: Pop(1); Push((bool) Stack[-1] == 0)
0x537: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x538: Return(); Pop(0)

0x539: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x53a: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x53b: Return(); Pop(0)

0x53c: PushEmpty(string, bool)
0x53d: Stack[-2] = Stack[-3]
0x53e: Push("")
0x53f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x540: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x541: Stack[-1] = (bool) 0
0x542: GOTO 0x544

0x543: Stack[-1] = (bool) 1
0x544: Call2 0xdfc

0x545: Pop(2)
0x546: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x547: Return(); Pop(0)

0x548: PushEmpty()
0x549: Push((int) 1)
0x54a: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x54b: PushEmpty()
0x54c: Call2 0xe1a

0x54d: Pop(0)
0x54e: Push((int) 12035)
0x54f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x550: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x551: PushEmpty(object, object)
0x552: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x553: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x554: Call2 0xed7

0x555: Pop(2)
0x556: Push((int) 12045)
0x557: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x558: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x559: PushEmpty(object, object)
0x55a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x55b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x55c: Call2 0xecd

0x55d: Pop(2)
0x55e: PushEmpty(object, object)
0x55f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x560: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x561: Call2 0xeb8

0x562: Pop(2)
0x563: PushEmpty(object, object)
0x564: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x565: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x566: Call2 0xefe

0x567: Pop(2)
0x568: Push((int) 12050)
0x569: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x56a: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x56b: PushEmpty(object, object)
0x56c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x56d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x56e: Call2 0xecd

0x56f: Pop(2)
0x570: PushEmpty(object, object)
0x571: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x572: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x573: Call2 0xeb8

0x574: Pop(2)
0x575: PushEmpty(object, object)
0x576: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x577: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x578: Call2 0xefe

0x579: Pop(2)
0x57a: Push((int) 35871)
0x57b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x57c: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x57d: PushEmpty(object, object)
0x57e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x580: Call2 0xedd

0x581: Pop(2)
0x582: Push((int) 12034)
0x583: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x584: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x585: PushEmpty(string)
0x586: Stack[-1] = "Neutral"
0x587: Call2 0x532

0x588: Pop(1)
0x589: Push((int) 510886)
0x58a: @@ SetMessage(Stack[-1])
0x58b: Pop(1)
0x58c: @@ ClearReplies()
0x58d: Pop(0)
0x58e: PushEmpty(bool, object)
0x58f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x590: Call2 0xf5b

0x591: Pop(1)
0x592: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x593: Push((int) 510887)
0x594: Push((int) 11068)
0x595: Push((int) 12035)
0x596: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x597: Pop(3)
0x598: Push((int) 510888)
0x599: Push((int) 12037)
0x59a: Push((int) 12036)
0x59b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59c: Pop(3)
0x59d: PushEmpty(bool)
0x59e: Stack[-1] = (bool) 0
0x59f: PushEmpty(bool, object)
0x5a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a1: Call2 0x102f

0x5a2: Pop(1)
0x5a3: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x5a4: PushEmpty(bool, object)
0x5a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a6: Call2 0xf67

0x5a7: Pop(1)
0x5a8: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x5a9: Stack[-1] = (bool) 1
0x5aa: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5ab: Push((int) 534279)
0x5ac: Push((int) 35872)
0x5ad: Push((int) 35871)
0x5ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5af: Pop(3)
0x5b0: Push((int) 534267)
0x5b1: Push((int) -1)
0x5b2: Push((int) 35855)
0x5b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b4: Pop(3)
0x5b5: Return(); Pop(0)

0x5b6: Push((int) 35872)
0x5b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b8: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5b9: PushEmpty(string)
0x5ba: Stack[-1] = "Neutral"
0x5bb: Call2 0x532

0x5bc: Pop(1)
0x5bd: Push((int) 534280)
0x5be: @@ SetMessage(Stack[-1])
0x5bf: Pop(1)
0x5c0: @@ ClearReplies()
0x5c1: Pop(0)
0x5c2: Push((int) 534281)
0x5c3: Push((int) 35874)
0x5c4: Push((int) 35873)
0x5c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c6: Pop(3)
0x5c7: Return(); Pop(0)

0x5c8: Push((int) 35874)
0x5c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ca: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5cb: PushEmpty(string)
0x5cc: Stack[-1] = "Azart"
0x5cd: Call2 0x532

0x5ce: Pop(1)
0x5cf: Push((int) 534282)
0x5d0: @@ SetMessage(Stack[-1])
0x5d1: Pop(1)
0x5d2: @@ ClearReplies()
0x5d3: Pop(0)
0x5d4: Push((int) 534283)
0x5d5: Push((int) 35876)
0x5d6: Push((int) 35875)
0x5d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d8: Pop(3)
0x5d9: Return(); Pop(0)

0x5da: Push((int) 35876)
0x5db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5dc: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5dd: PushEmpty(string)
0x5de: Stack[-1] = "Secret"
0x5df: Call2 0x532

0x5e0: Pop(1)
0x5e1: Push((int) 534284)
0x5e2: @@ SetMessage(Stack[-1])
0x5e3: Pop(1)
0x5e4: @@ ClearReplies()
0x5e5: Pop(0)
0x5e6: Push((int) 534285)
0x5e7: Push((int) 35878)
0x5e8: Push((int) 35877)
0x5e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ea: Pop(3)
0x5eb: Return(); Pop(0)

0x5ec: Push((int) 35878)
0x5ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ee: IF (Stack[-1] == 0) GOTO 0x5fe; Pop(1)

0x5ef: PushEmpty(string)
0x5f0: Stack[-1] = "Secret"
0x5f1: Call2 0x532

0x5f2: Pop(1)
0x5f3: Push((int) 534286)
0x5f4: @@ SetMessage(Stack[-1])
0x5f5: Pop(1)
0x5f6: @@ ClearReplies()
0x5f7: Pop(0)
0x5f8: Push((int) 534287)
0x5f9: Push((int) -1)
0x5fa: Push((int) 35879)
0x5fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fc: Pop(3)
0x5fd: Return(); Pop(0)

0x5fe: Push((int) 12037)
0x5ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x600: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x601: PushEmpty(string)
0x602: Stack[-1] = "Secret"
0x603: Call2 0x532

0x604: Pop(1)
0x605: Push((int) 510889)
0x606: @@ SetMessage(Stack[-1])
0x607: Pop(1)
0x608: @@ ClearReplies()
0x609: Pop(0)
0x60a: Push((int) 510890)
0x60b: Push((int) 12039)
0x60c: Push((int) 12038)
0x60d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60e: Pop(3)
0x60f: Push((int) 510892)
0x610: Push((int) 12042)
0x611: Push((int) 12040)
0x612: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x613: Pop(3)
0x614: Return(); Pop(0)

0x615: Push((int) 12042)
0x616: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x617: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x618: PushEmpty(string)
0x619: Stack[-1] = "Neutral"
0x61a: Call2 0x532

0x61b: Pop(1)
0x61c: Push((int) 510894)
0x61d: @@ SetMessage(Stack[-1])
0x61e: Pop(1)
0x61f: @@ ClearReplies()
0x620: Pop(0)
0x621: Push((int) 510895)
0x622: Push((int) -1)
0x623: Push((int) 12043)
0x624: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x625: Pop(3)
0x626: Return(); Pop(0)

0x627: Push((int) 12039)
0x628: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x629: IF (Stack[-1] == 0) GOTO 0x639; Pop(1)

0x62a: PushEmpty(string)
0x62b: Stack[-1] = "Secret"
0x62c: Call2 0x532

0x62d: Pop(1)
0x62e: Push((int) 510891)
0x62f: @@ SetMessage(Stack[-1])
0x630: Pop(1)
0x631: @@ ClearReplies()
0x632: Pop(0)
0x633: Push((int) 510893)
0x634: Push((int) 12044)
0x635: Push((int) 12041)
0x636: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x637: Pop(3)
0x638: Return(); Pop(0)

0x639: Push((int) 12044)
0x63a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x63b: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x63c: PushEmpty(string)
0x63d: Stack[-1] = "Neutral"
0x63e: Call2 0x532

0x63f: Pop(1)
0x640: Push((int) 510896)
0x641: @@ SetMessage(Stack[-1])
0x642: Pop(1)
0x643: @@ ClearReplies()
0x644: Pop(0)
0x645: PushEmpty(bool, object)
0x646: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x647: Call2 0xf51

0x648: Pop(1)
0x649: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x64a: Push((int) 510897)
0x64b: Push((int) -1)
0x64c: Push((int) 12045)
0x64d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64e: Pop(3)
0x64f: Push((int) 510898)
0x650: Push((int) 12047)
0x651: Push((int) 12046)
0x652: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x653: Pop(3)
0x654: Return(); Pop(0)

0x655: Push((int) 12047)
0x656: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x657: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x658: PushEmpty(string)
0x659: Stack[-1] = "Neutral"
0x65a: Call2 0x532

0x65b: Pop(1)
0x65c: Push((int) 510899)
0x65d: @@ SetMessage(Stack[-1])
0x65e: Pop(1)
0x65f: @@ ClearReplies()
0x660: Pop(0)
0x661: Push((int) 510900)
0x662: Push((int) -1)
0x663: Push((int) 12048)
0x664: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x665: Pop(3)
0x666: PushEmpty(bool, object)
0x667: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x668: Call2 0xf51

0x669: Pop(1)
0x66a: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x66b: Push((int) 510902)
0x66c: Push((int) -1)
0x66d: Push((int) 12050)
0x66e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66f: Pop(3)
0x670: Return(); Pop(0)

0x671: Push((int) 11068)
0x672: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x673: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x674: PushEmpty(string)
0x675: Stack[-1] = "Azart"
0x676: Call2 0x532

0x677: Pop(1)
0x678: Push((int) 510044)
0x679: @@ SetMessage(Stack[-1])
0x67a: Pop(1)
0x67b: @@ ClearReplies()
0x67c: Pop(0)
0x67d: Push((int) 510045)
0x67e: Push((int) 11070)
0x67f: Push((int) 11069)
0x680: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x681: Pop(3)
0x682: Push((int) 510058)
0x683: Push((int) 11083)
0x684: Push((int) 11082)
0x685: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x686: Pop(3)
0x687: Return(); Pop(0)

0x688: Push((int) 11083)
0x689: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x68a: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x68b: PushEmpty(string)
0x68c: Stack[-1] = "Neutral"
0x68d: Call2 0x532

0x68e: Pop(1)
0x68f: Push((int) 510059)
0x690: @@ SetMessage(Stack[-1])
0x691: Pop(1)
0x692: @@ ClearReplies()
0x693: Pop(0)
0x694: Push((int) 510060)
0x695: Push((int) 11072)
0x696: Push((int) 11084)
0x697: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x698: Pop(3)
0x699: Push((int) 510061)
0x69a: Push((int) 11072)
0x69b: Push((int) 11086)
0x69c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69d: Pop(3)
0x69e: Return(); Pop(0)

0x69f: Push((int) 11070)
0x6a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a1: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6a2: PushEmpty(string)
0x6a3: Stack[-1] = "Azart"
0x6a4: Call2 0x532

0x6a5: Pop(1)
0x6a6: Push((int) 510046)
0x6a7: @@ SetMessage(Stack[-1])
0x6a8: Pop(1)
0x6a9: @@ ClearReplies()
0x6aa: Pop(0)
0x6ab: Push((int) 510047)
0x6ac: Push((int) 11072)
0x6ad: Push((int) 11071)
0x6ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6af: Pop(3)
0x6b0: Push((int) 510057)
0x6b1: Push((int) -1)
0x6b2: Push((int) 11081)
0x6b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b4: Pop(3)
0x6b5: Return(); Pop(0)

0x6b6: Push((int) 11072)
0x6b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b8: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6b9: PushEmpty(string)
0x6ba: Stack[-1] = "Secret"
0x6bb: Call2 0x532

0x6bc: Pop(1)
0x6bd: Push((int) 510048)
0x6be: @@ SetMessage(Stack[-1])
0x6bf: Pop(1)
0x6c0: @@ ClearReplies()
0x6c1: Pop(0)
0x6c2: Push((int) 510049)
0x6c3: Push((int) 11074)
0x6c4: Push((int) 11073)
0x6c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c6: Pop(3)
0x6c7: Push((int) 510052)
0x6c8: Push((int) 11077)
0x6c9: Push((int) 11076)
0x6ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cb: Pop(3)
0x6cc: Push((int) 510056)
0x6cd: Push((int) -1)
0x6ce: Push((int) 11080)
0x6cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d0: Pop(3)
0x6d1: Return(); Pop(0)

0x6d2: Push((int) 11077)
0x6d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d4: IF (Stack[-1] == 0) GOTO 0x6e9; Pop(1)

0x6d5: PushEmpty(string)
0x6d6: Stack[-1] = "Serious"
0x6d7: Call2 0x532

0x6d8: Pop(1)
0x6d9: Push((int) 510053)
0x6da: @@ SetMessage(Stack[-1])
0x6db: Pop(1)
0x6dc: @@ ClearReplies()
0x6dd: Pop(0)
0x6de: Push((int) 510054)
0x6df: Push((int) -1)
0x6e0: Push((int) 11078)
0x6e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e2: Pop(3)
0x6e3: Push((int) 510055)
0x6e4: Push((int) -1)
0x6e5: Push((int) 11079)
0x6e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e7: Pop(3)
0x6e8: Return(); Pop(0)

0x6e9: Push((int) 11074)
0x6ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6eb: IF (Stack[-1] == 0) GOTO 0x6fb; Pop(1)

0x6ec: PushEmpty(string)
0x6ed: Stack[-1] = "Neutral"
0x6ee: Call2 0x532

0x6ef: Pop(1)
0x6f0: Push((int) 510050)
0x6f1: @@ SetMessage(Stack[-1])
0x6f2: Pop(1)
0x6f3: @@ ClearReplies()
0x6f4: Pop(0)
0x6f5: Push((int) 510051)
0x6f6: Push((int) -1)
0x6f7: Push((int) 11075)
0x6f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f9: Pop(3)
0x6fa: Return(); Pop(0)

0x6fb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6fc: PushEmpty(bool)
0x6fd: Call2 0xeb6

0x6fe: Pop(0)
0x6ff: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x700: @ lshStopAnimation()
0x701: Pop(0)
0x702: GOTO 0x705

0x703: @ StopAnimation()
0x704: Pop(0)
0x705: Return(); Pop(0)

0x706: GOTO 0x549

0x707: Return(); Pop(0)

0x708: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x709: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x70a: PushEmpty(bool, object, float)
0x70b: Stack[-2] = Stack[-12]
0x70c: Stack[-1] = (float) 70.0
0x70d: Call2 0xd0b

0x70e: Pop(2)
0x70f: Pop(1); Push((bool) Stack[-1] == 0)
0x710: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x711: Stack[-10] = (int) -2
0x712: Return(); Pop(8)

0x713: @ CreateDialog(Stack[-4])
0x714: Pop(0)
0x715: PushEmpty(int)
0x716: Call2 0xeb0

0x717: Pop(0)
0x718: @@ SetNPCName(Stack[-1])
0x719: Pop(1)
0x71a: PushEmpty(int)
0x71b: Call2 0xeae

0x71c: Pop(0)
0x71d: @@ SetNPCDescription(Stack[-1])
0x71e: Pop(1)
0x71f: PushEmpty(string)
0x720: Call2 0xeb2

0x721: Pop(0)
0x722: @@ SetPhoto(Stack[-1])
0x723: Pop(1)
0x724: PushEmpty(string)
0x725: Call2 0xeb4

0x726: Pop(0)
0x727: @@ SetPhoto2(Stack[-1])
0x728: Pop(1)
0x729: PushEmpty(int)
0x72a: Call2 0x10da

0x72b: Pop(0)
0x72c: @@ SetPlayerName(Stack[-1])
0x72d: Pop(1)
0x72e: Stack[-2] = (int) -1
0x72f: @ IsOverrideActive(Stack[-3])
0x730: Pop(0)
0x731: Push(Stack[-3])
0x732: IF (Stack[-1] == 0) GOTO 0x735; Pop(1)

0x733: Stack[-10] = (int) -2
0x734: Return(); Pop(8)

0x735: @ DoDialog(Stack[-4])
0x736: Pop(0)
0x737: PushEmpty(bool, object)
0x738: PushEmpty(object)
0x739: Call2 0xe21

0x73a: Stack[-2] = Stack[-1]
0x73b: Pop(1)
0x73c: Call2 0xd62

0x73d: Pop(2)
0x73e: PushEmpty(object, object)
0x73f: Stack[-2] = Stack[-11]
0x740: Stack[-1] = Stack[-6]
0x741: Push(-2, 4); TaskCall(7)
0x742: Call2 0x759

0x743: Pop(-2, 4); TaskReturn
0x744: Pop(2)
0x745: @@ IsDialogEnd(Stack[-1])
0x746: Pop(0)
0x747: Pop(0); Push((bool) Stack[-1] == 0)
0x748: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x749: @ sync()
0x74a: Pop(0)
0x74b: @@ IsDialogEnd(Stack[-1])
0x74c: Pop(0)
0x74d: GOTO 0x747

0x74e: PushEmpty(object)
0x74f: Stack[-1] = Stack[-10]
0x750: Call2 0xd50

0x751: Pop(1)
0x752: @ StopDialog(Stack[-4])
0x753: Pop(0)
0x754: @@ GetReturnValue(Stack[-2])
0x755: Pop(0)
0x756: Stack[-10] = Stack[-2]
0x757: Return(); Pop(8)

0x758: Stack[-4] = 0
0x759: PushEmpty()
0x75a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x75b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x75c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x75d: Push((int) 1)
0x75e: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x75f: PushEmpty(bool, object)
0x760: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x761: Call2 0xfb7

0x762: Pop(1)
0x763: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x764: PushEmpty(string)
0x765: Stack[-1] = "Azart"
0x766: Call2 0x80f

0x767: Pop(1)
0x768: Push((int) 512040)
0x769: @@ SetMessage(Stack[-1])
0x76a: Pop(1)
0x76b: @@ ClearReplies()
0x76c: Pop(0)
0x76d: Push((int) 512041)
0x76e: Push((int) 13262)
0x76f: Push((int) 13259)
0x770: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x771: Pop(3)
0x772: Push((int) 512042)
0x773: Push((int) 13261)
0x774: Push((int) 13260)
0x775: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x776: Pop(3)
0x777: GOTO 0x7f1

0x778: PushEmpty(string)
0x779: Stack[-1] = "Neutral"
0x77a: Call2 0x80f

0x77b: Pop(1)
0x77c: Push((int) 512052)
0x77d: @@ SetMessage(Stack[-1])
0x77e: Pop(1)
0x77f: @@ ClearReplies()
0x780: Pop(0)
0x781: PushEmpty(bool)
0x782: Stack[-1] = (bool) 1
0x783: PushEmpty(bool)
0x784: Stack[-1] = (bool) 0
0x785: PushEmpty(bool, object)
0x786: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x787: Call2 0xfa3

0x788: Pop(1)
0x789: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78a: PushEmpty(bool, object)
0x78b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x78c: Call2 0xfc3

0x78d: Pop(1)
0x78e: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78f: Stack[-1] = (bool) 1
0x790: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x791: PushEmpty(bool)
0x792: Stack[-1] = (bool) 0
0x793: PushEmpty(bool, object)
0x794: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x795: Call2 0xfad

0x796: Pop(1)
0x797: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x798: PushEmpty(bool, object)
0x799: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79a: Call2 0xfc3

0x79b: Pop(1)
0x79c: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x79d: Stack[-1] = (bool) 1
0x79e: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x79f: Stack[-1] = (bool) 0
0x7a0: IF (Stack[-1] == 0) GOTO 0x7a6; Pop(1)

0x7a1: Push((int) 512066)
0x7a2: Push((int) 13289)
0x7a3: Push((int) 13287)
0x7a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a5: Pop(3)
0x7a6: PushEmpty(bool)
0x7a7: Stack[-1] = (bool) 0
0x7a8: PushEmpty(bool, object)
0x7a9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7aa: Call2 0xfdb

0x7ab: Pop(1)
0x7ac: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x7ad: PushEmpty(bool, object)
0x7ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7af: Call2 0xfe7

0x7b0: Pop(1)
0x7b1: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x7b2: Stack[-1] = (bool) 1
0x7b3: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b4: Push((int) 512543)
0x7b5: Push((int) 13713)
0x7b6: Push((int) 13712)
0x7b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b8: Pop(3)
0x7b9: PushEmpty(bool)
0x7ba: Stack[-1] = (bool) 0
0x7bb: PushEmpty(bool)
0x7bc: Stack[-1] = (bool) 0
0x7bd: PushEmpty(bool, object)
0x7be: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7bf: Call2 0xfcf

0x7c0: Pop(1)
0x7c1: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7c2: PushEmpty(bool, object)
0x7c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c4: Call2 0xff3

0x7c5: Pop(1)
0x7c6: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7c7: Stack[-1] = (bool) 1
0x7c8: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7c9: PushEmpty(bool, object)
0x7ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7cb: Call2 0xfdb

0x7cc: Pop(1)
0x7cd: Pop(1); Push((bool) Stack[-1] == 0)
0x7ce: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7cf: Stack[-1] = (bool) 1
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d1: Push((int) 512546)
0x7d2: Push((int) 13716)
0x7d3: Push((int) 13715)
0x7d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d5: Pop(3)
0x7d6: PushEmpty(bool)
0x7d7: Stack[-1] = (bool) 0
0x7d8: PushEmpty(bool, object)
0x7d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7da: Call2 0x100b

0x7db: Pop(1)
0x7dc: IF (Stack[-1] == 0) GOTO 0x7e3; Pop(1)

0x7dd: PushEmpty(bool, object)
0x7de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7df: Call2 0xfff

0x7e0: Pop(1)
0x7e1: IF (Stack[-1] == 0) GOTO 0x7e3; Pop(1)

0x7e2: Stack[-1] = (bool) 1
0x7e3: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x7e4: Push((int) 512053)
0x7e5: Push((int) 13274)
0x7e6: Push((int) 13273)
0x7e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e8: Pop(3)
0x7e9: Push((int) 512060)
0x7ea: Push((int) -1)
0x7eb: Push((int) 13280)
0x7ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ed: Pop(3)
0x7ee: GOTO 0x7f1

0x7ef: Return(); Pop(0)

0x7f0: GOTO 0x75d

0x7f1: PushEmpty(bool)
0x7f2: Call2 0xeb6

0x7f3: Pop(0)
0x7f4: IF (Stack[-1] == 0) GOTO 0x800; Pop(1)

0x7f5: @ lshWaitForAnimEnd()
0x7f6: Pop(0)
0x7f7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7f8: IF (Stack[-1] == 0) GOTO 0x7fa; Pop(1)

0x7f9: GOTO 0x7ff

0x7fa: PushEmpty(string)
0x7fb: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7fc: Call2 0xdec

0x7fd: Pop(1)
0x7fe: GOTO 0x7f5

0x7ff: GOTO 0x80e

0x800: Push("all")
0x801: Push("idle")
0x802: @ PlayAnimation(Stack[-2], Stack[-1])
0x803: Pop(2)
0x804: @ WaitForAnimEnd()
0x805: Pop(0)
0x806: Push( Stack[3 + Tasks[-1].StackPointer] )
0x807: IF (Stack[-1] == 0) GOTO 0x809; Pop(1)

0x808: GOTO 0x80e

0x809: Push("all")
0x80a: Push("idle")
0x80b: @ PlayAnimation(Stack[-2], Stack[-1])
0x80c: Pop(2)
0x80d: GOTO 0x804

0x80e: Return(); Pop(0)

0x80f: PushEmpty()
0x810: PushEmpty(bool)
0x811: Call2 0xeb6

0x812: Pop(0)
0x813: Pop(1); Push((bool) Stack[-1] == 0)
0x814: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x815: Return(); Pop(0)

0x816: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x817: IF (Stack[-1] == 0) GOTO 0x819; Pop(1)

0x818: Return(); Pop(0)

0x819: PushEmpty(string, bool)
0x81a: Stack[-2] = Stack[-3]
0x81b: Push("")
0x81c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x81d: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x81e: Stack[-1] = (bool) 0
0x81f: GOTO 0x821

0x820: Stack[-1] = (bool) 1
0x821: Call2 0xdfc

0x822: Pop(2)
0x823: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x824: Return(); Pop(0)

0x825: PushEmpty()
0x826: Push((int) 1)
0x827: IF (Stack[-1] == 0) GOTO 0xa12; Pop(1)

0x828: PushEmpty()
0x829: Call2 0xe1a

0x82a: Pop(0)
0x82b: Push((int) 13271)
0x82c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x82d: IF (Stack[-1] == 0) GOTO 0x838; Pop(1)

0x82e: PushEmpty(object, object)
0x82f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x830: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x831: Call2 0xf04

0x832: Pop(2)
0x833: PushEmpty(object, object)
0x834: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x835: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x836: Call2 0xf0a

0x837: Pop(2)
0x838: Push((int) 13288)
0x839: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x83a: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x83b: PushEmpty(object, object)
0x83c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x83d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x83e: Call2 0xf04

0x83f: Pop(2)
0x840: Push((int) 13290)
0x841: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x842: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x843: PushEmpty(object, object)
0x844: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x845: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x846: Call2 0xf0a

0x847: Pop(2)
0x848: Push((int) 13714)
0x849: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x84a: IF (Stack[-1] == 0) GOTO 0x855; Pop(1)

0x84b: PushEmpty(object, object)
0x84c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x84d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x84e: Call2 0xf1f

0x84f: Pop(2)
0x850: PushEmpty(object, object)
0x851: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x852: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x853: Call2 0xf25

0x854: Pop(2)
0x855: Push((int) 13715)
0x856: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x857: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x858: PushEmpty(object, object)
0x859: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x85a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x85b: Call2 0xf39

0x85c: Pop(2)
0x85d: Push((int) 13717)
0x85e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x85f: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x860: PushEmpty(object, object)
0x861: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x862: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x863: Call2 0xf2f

0x864: Pop(2)
0x865: Push((int) 37900)
0x866: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x867: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x868: PushEmpty(object, object)
0x869: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x86a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x86b: Call2 0xf2f

0x86c: Pop(2)
0x86d: Push((int) 13273)
0x86e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x86f: IF (Stack[-1] == 0) GOTO 0x875; Pop(1)

0x870: PushEmpty(object, object)
0x871: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x872: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x873: Call2 0xf3f

0x874: Pop(2)
0x875: Push((int) 13258)
0x876: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x877: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x878: PushEmpty(bool, object)
0x879: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87a: Call2 0xfb7

0x87b: Pop(1)
0x87c: IF (Stack[-1] == 0) GOTO 0x891; Pop(1)

0x87d: PushEmpty(string)
0x87e: Stack[-1] = "Azart"
0x87f: Call2 0x80f

0x880: Pop(1)
0x881: Push((int) 512040)
0x882: @@ SetMessage(Stack[-1])
0x883: Pop(1)
0x884: @@ ClearReplies()
0x885: Pop(0)
0x886: Push((int) 512041)
0x887: Push((int) 13262)
0x888: Push((int) 13259)
0x889: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88a: Pop(3)
0x88b: Push((int) 512042)
0x88c: Push((int) 13261)
0x88d: Push((int) 13260)
0x88e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88f: Pop(3)
0x890: Return(); Pop(0)

0x891: PushEmpty(string)
0x892: Stack[-1] = "Neutral"
0x893: Call2 0x80f

0x894: Pop(1)
0x895: Push((int) 512052)
0x896: @@ SetMessage(Stack[-1])
0x897: Pop(1)
0x898: @@ ClearReplies()
0x899: Pop(0)
0x89a: PushEmpty(bool)
0x89b: Stack[-1] = (bool) 1
0x89c: PushEmpty(bool)
0x89d: Stack[-1] = (bool) 0
0x89e: PushEmpty(bool, object)
0x89f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a0: Call2 0xfa3

0x8a1: Pop(1)
0x8a2: IF (Stack[-1] == 0) GOTO 0x8a9; Pop(1)

0x8a3: PushEmpty(bool, object)
0x8a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a5: Call2 0xfc3

0x8a6: Pop(1)
0x8a7: IF (Stack[-1] == 0) GOTO 0x8a9; Pop(1)

0x8a8: Stack[-1] = (bool) 1
0x8a9: IF (Stack[-1] == 0) GOTO 0x8b9; Pop(1)

0x8aa: PushEmpty(bool)
0x8ab: Stack[-1] = (bool) 0
0x8ac: PushEmpty(bool, object)
0x8ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8ae: Call2 0xfad

0x8af: Pop(1)
0x8b0: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8b1: PushEmpty(bool, object)
0x8b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b3: Call2 0xfc3

0x8b4: Pop(1)
0x8b5: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8b6: Stack[-1] = (bool) 1
0x8b7: IF (Stack[-1] == 0) GOTO 0x8b9; Pop(1)

0x8b8: Stack[-1] = (bool) 0
0x8b9: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x8ba: Push((int) 512066)
0x8bb: Push((int) 13289)
0x8bc: Push((int) 13287)
0x8bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8be: Pop(3)
0x8bf: PushEmpty(bool)
0x8c0: Stack[-1] = (bool) 0
0x8c1: PushEmpty(bool, object)
0x8c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c3: Call2 0xfdb

0x8c4: Pop(1)
0x8c5: IF (Stack[-1] == 0) GOTO 0x8cc; Pop(1)

0x8c6: PushEmpty(bool, object)
0x8c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c8: Call2 0xfe7

0x8c9: Pop(1)
0x8ca: IF (Stack[-1] == 0) GOTO 0x8cc; Pop(1)

0x8cb: Stack[-1] = (bool) 1
0x8cc: IF (Stack[-1] == 0) GOTO 0x8d2; Pop(1)

0x8cd: Push((int) 512543)
0x8ce: Push((int) 13713)
0x8cf: Push((int) 13712)
0x8d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d1: Pop(3)
0x8d2: PushEmpty(bool)
0x8d3: Stack[-1] = (bool) 0
0x8d4: PushEmpty(bool)
0x8d5: Stack[-1] = (bool) 0
0x8d6: PushEmpty(bool, object)
0x8d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d8: Call2 0xfcf

0x8d9: Pop(1)
0x8da: IF (Stack[-1] == 0) GOTO 0x8e1; Pop(1)

0x8db: PushEmpty(bool, object)
0x8dc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8dd: Call2 0xff3

0x8de: Pop(1)
0x8df: IF (Stack[-1] == 0) GOTO 0x8e1; Pop(1)

0x8e0: Stack[-1] = (bool) 1
0x8e1: IF (Stack[-1] == 0) GOTO 0x8e9; Pop(1)

0x8e2: PushEmpty(bool, object)
0x8e3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e4: Call2 0xfdb

0x8e5: Pop(1)
0x8e6: Pop(1); Push((bool) Stack[-1] == 0)
0x8e7: IF (Stack[-1] == 0) GOTO 0x8e9; Pop(1)

0x8e8: Stack[-1] = (bool) 1
0x8e9: IF (Stack[-1] == 0) GOTO 0x8ef; Pop(1)

0x8ea: Push((int) 512546)
0x8eb: Push((int) 13716)
0x8ec: Push((int) 13715)
0x8ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ee: Pop(3)
0x8ef: PushEmpty(bool)
0x8f0: Stack[-1] = (bool) 0
0x8f1: PushEmpty(bool, object)
0x8f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f3: Call2 0x100b

0x8f4: Pop(1)
0x8f5: IF (Stack[-1] == 0) GOTO 0x8fc; Pop(1)

0x8f6: PushEmpty(bool, object)
0x8f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f8: Call2 0xfff

0x8f9: Pop(1)
0x8fa: IF (Stack[-1] == 0) GOTO 0x8fc; Pop(1)

0x8fb: Stack[-1] = (bool) 1
0x8fc: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x8fd: Push((int) 512053)
0x8fe: Push((int) 13274)
0x8ff: Push((int) 13273)
0x900: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x901: Pop(3)
0x902: Push((int) 512060)
0x903: Push((int) -1)
0x904: Push((int) 13280)
0x905: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x906: Pop(3)
0x907: Return(); Pop(0)

0x908: Push((int) 13274)
0x909: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x90a: IF (Stack[-1] == 0) GOTO 0x91a; Pop(1)

0x90b: PushEmpty(string)
0x90c: Stack[-1] = "Azart"
0x90d: Call2 0x80f

0x90e: Pop(1)
0x90f: Push((int) 512054)
0x910: @@ SetMessage(Stack[-1])
0x911: Pop(1)
0x912: @@ ClearReplies()
0x913: Pop(0)
0x914: Push((int) 512055)
0x915: Push((int) 13276)
0x916: Push((int) 13275)
0x917: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x918: Pop(3)
0x919: Return(); Pop(0)

0x91a: Push((int) 13276)
0x91b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91c: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x91d: PushEmpty(string)
0x91e: Stack[-1] = "Fear"
0x91f: Call2 0x80f

0x920: Pop(1)
0x921: Push((int) 512056)
0x922: @@ SetMessage(Stack[-1])
0x923: Pop(1)
0x924: @@ ClearReplies()
0x925: Pop(0)
0x926: Push((int) 512057)
0x927: Push((int) 13278)
0x928: Push((int) 13277)
0x929: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92a: Pop(3)
0x92b: Push((int) 512061)
0x92c: Push((int) 13282)
0x92d: Push((int) 13281)
0x92e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92f: Pop(3)
0x930: Return(); Pop(0)

0x931: Push((int) 13282)
0x932: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x933: IF (Stack[-1] == 0) GOTO 0x943; Pop(1)

0x934: PushEmpty(string)
0x935: Stack[-1] = "Azart"
0x936: Call2 0x80f

0x937: Pop(1)
0x938: Push((int) 512062)
0x939: @@ SetMessage(Stack[-1])
0x93a: Pop(1)
0x93b: @@ ClearReplies()
0x93c: Pop(0)
0x93d: Push((int) 512063)
0x93e: Push((int) 13284)
0x93f: Push((int) 13283)
0x940: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x941: Pop(3)
0x942: Return(); Pop(0)

0x943: Push((int) 13284)
0x944: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x945: IF (Stack[-1] == 0) GOTO 0x955; Pop(1)

0x946: PushEmpty(string)
0x947: Stack[-1] = "Serious"
0x948: Call2 0x80f

0x949: Pop(1)
0x94a: Push((int) 512064)
0x94b: @@ SetMessage(Stack[-1])
0x94c: Pop(1)
0x94d: @@ ClearReplies()
0x94e: Pop(0)
0x94f: Push((int) 512065)
0x950: Push((int) 13278)
0x951: Push((int) 13285)
0x952: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x953: Pop(3)
0x954: Return(); Pop(0)

0x955: Push((int) 13278)
0x956: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x957: IF (Stack[-1] == 0) GOTO 0x967; Pop(1)

0x958: PushEmpty(string)
0x959: Stack[-1] = "Fear"
0x95a: Call2 0x80f

0x95b: Pop(1)
0x95c: Push((int) 512058)
0x95d: @@ SetMessage(Stack[-1])
0x95e: Pop(1)
0x95f: @@ ClearReplies()
0x960: Pop(0)
0x961: Push((int) 512059)
0x962: Push((int) -1)
0x963: Push((int) 13279)
0x964: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x965: Pop(3)
0x966: Return(); Pop(0)

0x967: Push((int) 13716)
0x968: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x969: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x96a: PushEmpty(string)
0x96b: Stack[-1] = "Azart"
0x96c: Call2 0x80f

0x96d: Pop(1)
0x96e: Push((int) 512547)
0x96f: @@ SetMessage(Stack[-1])
0x970: Pop(1)
0x971: @@ ClearReplies()
0x972: Pop(0)
0x973: Push((int) 536139)
0x974: Push((int) 37899)
0x975: Push((int) 37898)
0x976: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x977: Pop(3)
0x978: Return(); Pop(0)

0x979: Push((int) 37899)
0x97a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x97b: IF (Stack[-1] == 0) GOTO 0x990; Pop(1)

0x97c: PushEmpty(string)
0x97d: Stack[-1] = "Azart"
0x97e: Call2 0x80f

0x97f: Pop(1)
0x980: Push((int) 536140)
0x981: @@ SetMessage(Stack[-1])
0x982: Pop(1)
0x983: @@ ClearReplies()
0x984: Pop(0)
0x985: Push((int) 512548)
0x986: Push((int) -1)
0x987: Push((int) 13717)
0x988: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x989: Pop(3)
0x98a: Push((int) 536141)
0x98b: Push((int) -1)
0x98c: Push((int) 37900)
0x98d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98e: Pop(3)
0x98f: Return(); Pop(0)

0x990: Push((int) 13713)
0x991: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x992: IF (Stack[-1] == 0) GOTO 0x9a2; Pop(1)

0x993: PushEmpty(string)
0x994: Stack[-1] = "Serious"
0x995: Call2 0x80f

0x996: Pop(1)
0x997: Push((int) 512544)
0x998: @@ SetMessage(Stack[-1])
0x999: Pop(1)
0x99a: @@ ClearReplies()
0x99b: Pop(0)
0x99c: Push((int) 512545)
0x99d: Push((int) -1)
0x99e: Push((int) 13714)
0x99f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a0: Pop(3)
0x9a1: Return(); Pop(0)

0x9a2: Push((int) 13289)
0x9a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9a4: IF (Stack[-1] == 0) GOTO 0x9b4; Pop(1)

0x9a5: PushEmpty(string)
0x9a6: Stack[-1] = "Fear"
0x9a7: Call2 0x80f

0x9a8: Pop(1)
0x9a9: Push((int) 512068)
0x9aa: @@ SetMessage(Stack[-1])
0x9ab: Pop(1)
0x9ac: @@ ClearReplies()
0x9ad: Pop(0)
0x9ae: Push((int) 512069)
0x9af: Push((int) -1)
0x9b0: Push((int) 13290)
0x9b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b2: Pop(3)
0x9b3: Return(); Pop(0)

0x9b4: Push((int) 13261)
0x9b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b6: IF (Stack[-1] == 0) GOTO 0x9c6; Pop(1)

0x9b7: PushEmpty(string)
0x9b8: Stack[-1] = "Fear"
0x9b9: Call2 0x80f

0x9ba: Pop(1)
0x9bb: Push((int) 512043)
0x9bc: @@ SetMessage(Stack[-1])
0x9bd: Pop(1)
0x9be: @@ ClearReplies()
0x9bf: Pop(0)
0x9c0: Push((int) 512048)
0x9c1: Push((int) 13268)
0x9c2: Push((int) 13267)
0x9c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c4: Pop(3)
0x9c5: Return(); Pop(0)

0x9c6: Push((int) 13268)
0x9c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9c8: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9c9: PushEmpty(string)
0x9ca: Stack[-1] = "Fear"
0x9cb: Call2 0x80f

0x9cc: Pop(1)
0x9cd: Push((int) 512049)
0x9ce: @@ SetMessage(Stack[-1])
0x9cf: Pop(1)
0x9d0: @@ ClearReplies()
0x9d1: Pop(0)
0x9d2: Push((int) 512050)
0x9d3: Push((int) 13264)
0x9d4: Push((int) 13269)
0x9d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d6: Pop(3)
0x9d7: Return(); Pop(0)

0x9d8: Push((int) 13262)
0x9d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9da: IF (Stack[-1] == 0) GOTO 0x9ef; Pop(1)

0x9db: PushEmpty(string)
0x9dc: Stack[-1] = "Azart"
0x9dd: Call2 0x80f

0x9de: Pop(1)
0x9df: Push((int) 512044)
0x9e0: @@ SetMessage(Stack[-1])
0x9e1: Pop(1)
0x9e2: @@ ClearReplies()
0x9e3: Pop(0)
0x9e4: Push((int) 512045)
0x9e5: Push((int) 13264)
0x9e6: Push((int) 13263)
0x9e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e8: Pop(3)
0x9e9: Push((int) 512047)
0x9ea: Push((int) 13261)
0x9eb: Push((int) 13265)
0x9ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ed: Pop(3)
0x9ee: Return(); Pop(0)

0x9ef: Push((int) 13264)
0x9f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f1: IF (Stack[-1] == 0) GOTO 0xa06; Pop(1)

0x9f2: PushEmpty(string)
0x9f3: Stack[-1] = "Fear"
0x9f4: Call2 0x80f

0x9f5: Pop(1)
0x9f6: Push((int) 512046)
0x9f7: @@ SetMessage(Stack[-1])
0x9f8: Pop(1)
0x9f9: @@ ClearReplies()
0x9fa: Pop(0)
0x9fb: Push((int) 512051)
0x9fc: Push((int) -1)
0x9fd: Push((int) 13271)
0x9fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ff: Pop(3)
0xa00: Push((int) 512067)
0xa01: Push((int) -1)
0xa02: Push((int) 13288)
0xa03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa04: Pop(3)
0xa05: Return(); Pop(0)

0xa06: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa07: PushEmpty(bool)
0xa08: Call2 0xeb6

0xa09: Pop(0)
0xa0a: IF (Stack[-1] == 0) GOTO 0xa0e; Pop(1)

0xa0b: @ lshStopAnimation()
0xa0c: Pop(0)
0xa0d: GOTO 0xa10

0xa0e: @ StopAnimation()
0xa0f: Pop(0)
0xa10: Return(); Pop(0)

0xa11: GOTO 0x826

0xa12: Return(); Pop(0)

0xa13: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xa14: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa15: PushEmpty(bool, object, float)
0xa16: Stack[-2] = Stack[-12]
0xa17: Stack[-1] = (float) 70.0
0xa18: Call2 0xd0b

0xa19: Pop(2)
0xa1a: Pop(1); Push((bool) Stack[-1] == 0)
0xa1b: IF (Stack[-1] == 0) GOTO 0xa1e; Pop(1)

0xa1c: Stack[-10] = (int) -2
0xa1d: Return(); Pop(8)

0xa1e: @ CreateDialog(Stack[-4])
0xa1f: Pop(0)
0xa20: PushEmpty(int)
0xa21: Call2 0xeb0

0xa22: Pop(0)
0xa23: @@ SetNPCName(Stack[-1])
0xa24: Pop(1)
0xa25: PushEmpty(int)
0xa26: Call2 0xeae

0xa27: Pop(0)
0xa28: @@ SetNPCDescription(Stack[-1])
0xa29: Pop(1)
0xa2a: PushEmpty(string)
0xa2b: Call2 0xeb2

0xa2c: Pop(0)
0xa2d: @@ SetPhoto(Stack[-1])
0xa2e: Pop(1)
0xa2f: PushEmpty(string)
0xa30: Call2 0xeb4

0xa31: Pop(0)
0xa32: @@ SetPhoto2(Stack[-1])
0xa33: Pop(1)
0xa34: PushEmpty(int)
0xa35: Call2 0x10da

0xa36: Pop(0)
0xa37: @@ SetPlayerName(Stack[-1])
0xa38: Pop(1)
0xa39: Stack[-2] = (int) -1
0xa3a: @ IsOverrideActive(Stack[-3])
0xa3b: Pop(0)
0xa3c: Push(Stack[-3])
0xa3d: IF (Stack[-1] == 0) GOTO 0xa40; Pop(1)

0xa3e: Stack[-10] = (int) -2
0xa3f: Return(); Pop(8)

0xa40: @ DoDialog(Stack[-4])
0xa41: Pop(0)
0xa42: PushEmpty(bool, object)
0xa43: PushEmpty(object)
0xa44: Call2 0xe21

0xa45: Stack[-2] = Stack[-1]
0xa46: Pop(1)
0xa47: Call2 0xd62

0xa48: Pop(2)
0xa49: PushEmpty(object, object)
0xa4a: Stack[-2] = Stack[-11]
0xa4b: Stack[-1] = Stack[-6]
0xa4c: Push(-2, 4); TaskCall(9)
0xa4d: Call2 0xa64

0xa4e: Pop(-2, 4); TaskReturn
0xa4f: Pop(2)
0xa50: @@ IsDialogEnd(Stack[-1])
0xa51: Pop(0)
0xa52: Pop(0); Push((bool) Stack[-1] == 0)
0xa53: IF (Stack[-1] == 0) GOTO 0xa59; Pop(1)

0xa54: @ sync()
0xa55: Pop(0)
0xa56: @@ IsDialogEnd(Stack[-1])
0xa57: Pop(0)
0xa58: GOTO 0xa52

0xa59: PushEmpty(object)
0xa5a: Stack[-1] = Stack[-10]
0xa5b: Call2 0xd50

0xa5c: Pop(1)
0xa5d: @ StopDialog(Stack[-4])
0xa5e: Pop(0)
0xa5f: @@ GetReturnValue(Stack[-2])
0xa60: Pop(0)
0xa61: Stack[-10] = Stack[-2]
0xa62: Return(); Pop(8)

0xa63: Stack[-4] = 0
0xa64: PushEmpty()
0xa65: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xa66: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xa67: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa68: Push((int) 1)
0xa69: IF (Stack[-1] == 0) GOTO 0xa85; Pop(1)

0xa6a: PushEmpty(string)
0xa6b: Stack[-1] = "Neutral"
0xa6c: Call2 0xaa3

0xa6d: Pop(1)
0xa6e: Push((int) 535284)
0xa6f: @@ SetMessage(Stack[-1])
0xa70: Pop(1)
0xa71: @@ ClearReplies()
0xa72: Pop(0)
0xa73: Push((int) 535285)
0xa74: Push((int) 36962)
0xa75: Push((int) 36961)
0xa76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa77: Pop(3)
0xa78: Push((int) 535292)
0xa79: Push((int) -1)
0xa7a: Push((int) 36968)
0xa7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7c: Pop(3)
0xa7d: Push((int) 535293)
0xa7e: Push((int) -1)
0xa7f: Push((int) 36969)
0xa80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa81: Pop(3)
0xa82: GOTO 0xa85

0xa83: Return(); Pop(0)

0xa84: GOTO 0xa68

0xa85: PushEmpty(bool)
0xa86: Call2 0xeb6

0xa87: Pop(0)
0xa88: IF (Stack[-1] == 0) GOTO 0xa94; Pop(1)

0xa89: @ lshWaitForAnimEnd()
0xa8a: Pop(0)
0xa8b: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa8c: IF (Stack[-1] == 0) GOTO 0xa8e; Pop(1)

0xa8d: GOTO 0xa93

0xa8e: PushEmpty(string)
0xa8f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa90: Call2 0xdec

0xa91: Pop(1)
0xa92: GOTO 0xa89

0xa93: GOTO 0xaa2

0xa94: Push("all")
0xa95: Push("idle")
0xa96: @ PlayAnimation(Stack[-2], Stack[-1])
0xa97: Pop(2)
0xa98: @ WaitForAnimEnd()
0xa99: Pop(0)
0xa9a: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa9b: IF (Stack[-1] == 0) GOTO 0xa9d; Pop(1)

0xa9c: GOTO 0xaa2

0xa9d: Push("all")
0xa9e: Push("idle")
0xa9f: @ PlayAnimation(Stack[-2], Stack[-1])
0xaa0: Pop(2)
0xaa1: GOTO 0xa98

0xaa2: Return(); Pop(0)

0xaa3: PushEmpty()
0xaa4: PushEmpty(bool)
0xaa5: Call2 0xeb6

0xaa6: Pop(0)
0xaa7: Pop(1); Push((bool) Stack[-1] == 0)
0xaa8: IF (Stack[-1] == 0) GOTO 0xaaa; Pop(1)

0xaa9: Return(); Pop(0)

0xaaa: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaab: IF (Stack[-1] == 0) GOTO 0xaad; Pop(1)

0xaac: Return(); Pop(0)

0xaad: PushEmpty(string, bool)
0xaae: Stack[-2] = Stack[-3]
0xaaf: Push("")
0xab0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab1: IF (Stack[-1] == 0) GOTO 0xab4; Pop(1)

0xab2: Stack[-1] = (bool) 0
0xab3: GOTO 0xab5

0xab4: Stack[-1] = (bool) 1
0xab5: Call2 0xdfc

0xab6: Pop(2)
0xab7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xab8: Return(); Pop(0)

0xab9: PushEmpty()
0xaba: Push((int) 1)
0xabb: IF (Stack[-1] == 0) GOTO 0xb15; Pop(1)

0xabc: PushEmpty()
0xabd: Call2 0xe1a

0xabe: Pop(0)
0xabf: Push((int) 36960)
0xac0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac1: IF (Stack[-1] == 0) GOTO 0xadb; Pop(1)

0xac2: PushEmpty(string)
0xac3: Stack[-1] = "Neutral"
0xac4: Call2 0xaa3

0xac5: Pop(1)
0xac6: Push((int) 535284)
0xac7: @@ SetMessage(Stack[-1])
0xac8: Pop(1)
0xac9: @@ ClearReplies()
0xaca: Pop(0)
0xacb: Push((int) 535285)
0xacc: Push((int) 36962)
0xacd: Push((int) 36961)
0xace: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xacf: Pop(3)
0xad0: Push((int) 535292)
0xad1: Push((int) -1)
0xad2: Push((int) 36968)
0xad3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad4: Pop(3)
0xad5: Push((int) 535293)
0xad6: Push((int) -1)
0xad7: Push((int) 36969)
0xad8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad9: Pop(3)
0xada: Return(); Pop(0)

0xadb: Push((int) 36962)
0xadc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xadd: IF (Stack[-1] == 0) GOTO 0xaf2; Pop(1)

0xade: PushEmpty(string)
0xadf: Stack[-1] = "Neutral"
0xae0: Call2 0xaa3

0xae1: Pop(1)
0xae2: Push((int) 535286)
0xae3: @@ SetMessage(Stack[-1])
0xae4: Pop(1)
0xae5: @@ ClearReplies()
0xae6: Pop(0)
0xae7: Push((int) 535287)
0xae8: Push((int) 36964)
0xae9: Push((int) 36963)
0xaea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaeb: Pop(3)
0xaec: Push((int) 535291)
0xaed: Push((int) -1)
0xaee: Push((int) 36967)
0xaef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf0: Pop(3)
0xaf1: Return(); Pop(0)

0xaf2: Push((int) 36964)
0xaf3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf4: IF (Stack[-1] == 0) GOTO 0xb09; Pop(1)

0xaf5: PushEmpty(string)
0xaf6: Stack[-1] = "Neutral"
0xaf7: Call2 0xaa3

0xaf8: Pop(1)
0xaf9: Push((int) 535288)
0xafa: @@ SetMessage(Stack[-1])
0xafb: Pop(1)
0xafc: @@ ClearReplies()
0xafd: Pop(0)
0xafe: Push((int) 535289)
0xaff: Push((int) -1)
0xb00: Push((int) 36965)
0xb01: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb02: Pop(3)
0xb03: Push((int) 535290)
0xb04: Push((int) -1)
0xb05: Push((int) 36966)
0xb06: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb07: Pop(3)
0xb08: Return(); Pop(0)

0xb09: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb0a: PushEmpty(bool)
0xb0b: Call2 0xeb6

0xb0c: Pop(0)
0xb0d: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xb0e: @ lshStopAnimation()
0xb0f: Pop(0)
0xb10: GOTO 0xb13

0xb11: @ StopAnimation()
0xb12: Pop(0)
0xb13: Return(); Pop(0)

0xb14: GOTO 0xaba

0xb15: Return(); Pop(0)

0xb16: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xb17: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xb18: PushEmpty(bool, object, float)
0xb19: Stack[-2] = Stack[-12]
0xb1a: Stack[-1] = (float) 70.0
0xb1b: Call2 0xd0b

0xb1c: Pop(2)
0xb1d: Pop(1); Push((bool) Stack[-1] == 0)
0xb1e: IF (Stack[-1] == 0) GOTO 0xb21; Pop(1)

0xb1f: Stack[-10] = (int) -2
0xb20: Return(); Pop(8)

0xb21: @ CreateDialog(Stack[-4])
0xb22: Pop(0)
0xb23: PushEmpty(int)
0xb24: Call2 0xeb0

0xb25: Pop(0)
0xb26: @@ SetNPCName(Stack[-1])
0xb27: Pop(1)
0xb28: PushEmpty(int)
0xb29: Call2 0xeae

0xb2a: Pop(0)
0xb2b: @@ SetNPCDescription(Stack[-1])
0xb2c: Pop(1)
0xb2d: PushEmpty(string)
0xb2e: Call2 0xeb2

0xb2f: Pop(0)
0xb30: @@ SetPhoto(Stack[-1])
0xb31: Pop(1)
0xb32: PushEmpty(string)
0xb33: Call2 0xeb4

0xb34: Pop(0)
0xb35: @@ SetPhoto2(Stack[-1])
0xb36: Pop(1)
0xb37: PushEmpty(int)
0xb38: Call2 0x10da

0xb39: Pop(0)
0xb3a: @@ SetPlayerName(Stack[-1])
0xb3b: Pop(1)
0xb3c: Stack[-2] = (int) -1
0xb3d: @ IsOverrideActive(Stack[-3])
0xb3e: Pop(0)
0xb3f: Push(Stack[-3])
0xb40: IF (Stack[-1] == 0) GOTO 0xb43; Pop(1)

0xb41: Stack[-10] = (int) -2
0xb42: Return(); Pop(8)

0xb43: @ DoDialog(Stack[-4])
0xb44: Pop(0)
0xb45: PushEmpty(bool, object)
0xb46: PushEmpty(object)
0xb47: Call2 0xe21

0xb48: Stack[-2] = Stack[-1]
0xb49: Pop(1)
0xb4a: Call2 0xd62

0xb4b: Pop(2)
0xb4c: PushEmpty(object, object)
0xb4d: Stack[-2] = Stack[-11]
0xb4e: Stack[-1] = Stack[-6]
0xb4f: Push(-2, 4); TaskCall(11)
0xb50: Call2 0xb67

0xb51: Pop(-2, 4); TaskReturn
0xb52: Pop(2)
0xb53: @@ IsDialogEnd(Stack[-1])
0xb54: Pop(0)
0xb55: Pop(0); Push((bool) Stack[-1] == 0)
0xb56: IF (Stack[-1] == 0) GOTO 0xb5c; Pop(1)

0xb57: @ sync()
0xb58: Pop(0)
0xb59: @@ IsDialogEnd(Stack[-1])
0xb5a: Pop(0)
0xb5b: GOTO 0xb55

0xb5c: PushEmpty(object)
0xb5d: Stack[-1] = Stack[-10]
0xb5e: Call2 0xd50

0xb5f: Pop(1)
0xb60: @ StopDialog(Stack[-4])
0xb61: Pop(0)
0xb62: @@ GetReturnValue(Stack[-2])
0xb63: Pop(0)
0xb64: Stack[-10] = Stack[-2]
0xb65: Return(); Pop(8)

0xb66: Stack[-4] = 0
0xb67: PushEmpty()
0xb68: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xb69: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xb6a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xb6b: Push((int) 1)
0xb6c: IF (Stack[-1] == 0) GOTO 0xb83; Pop(1)

0xb6d: PushEmpty(string)
0xb6e: Stack[-1] = "Neutral"
0xb6f: Call2 0xba1

0xb70: Pop(1)
0xb71: Push((int) 540542)
0xb72: @@ SetMessage(Stack[-1])
0xb73: Pop(1)
0xb74: @@ ClearReplies()
0xb75: Pop(0)
0xb76: Push((int) 540543)
0xb77: Push((int) -1)
0xb78: Push((int) 42552)
0xb79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7a: Pop(3)
0xb7b: Push((int) 540796)
0xb7c: Push((int) -1)
0xb7d: Push((int) 42845)
0xb7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7f: Pop(3)
0xb80: GOTO 0xb83

0xb81: Return(); Pop(0)

0xb82: GOTO 0xb6b

0xb83: PushEmpty(bool)
0xb84: Call2 0xeb6

0xb85: Pop(0)
0xb86: IF (Stack[-1] == 0) GOTO 0xb92; Pop(1)

0xb87: @ lshWaitForAnimEnd()
0xb88: Pop(0)
0xb89: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb8a: IF (Stack[-1] == 0) GOTO 0xb8c; Pop(1)

0xb8b: GOTO 0xb91

0xb8c: PushEmpty(string)
0xb8d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb8e: Call2 0xdec

0xb8f: Pop(1)
0xb90: GOTO 0xb87

0xb91: GOTO 0xba0

0xb92: Push("all")
0xb93: Push("idle")
0xb94: @ PlayAnimation(Stack[-2], Stack[-1])
0xb95: Pop(2)
0xb96: @ WaitForAnimEnd()
0xb97: Pop(0)
0xb98: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb99: IF (Stack[-1] == 0) GOTO 0xb9b; Pop(1)

0xb9a: GOTO 0xba0

0xb9b: Push("all")
0xb9c: Push("idle")
0xb9d: @ PlayAnimation(Stack[-2], Stack[-1])
0xb9e: Pop(2)
0xb9f: GOTO 0xb96

0xba0: Return(); Pop(0)

0xba1: PushEmpty()
0xba2: PushEmpty(bool)
0xba3: Call2 0xeb6

0xba4: Pop(0)
0xba5: Pop(1); Push((bool) Stack[-1] == 0)
0xba6: IF (Stack[-1] == 0) GOTO 0xba8; Pop(1)

0xba7: Return(); Pop(0)

0xba8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xba9: IF (Stack[-1] == 0) GOTO 0xbab; Pop(1)

0xbaa: Return(); Pop(0)

0xbab: PushEmpty(string, bool)
0xbac: Stack[-2] = Stack[-3]
0xbad: Push("")
0xbae: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbaf: IF (Stack[-1] == 0) GOTO 0xbb2; Pop(1)

0xbb0: Stack[-1] = (bool) 0
0xbb1: GOTO 0xbb3

0xbb2: Stack[-1] = (bool) 1
0xbb3: Call2 0xdfc

0xbb4: Pop(2)
0xbb5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbb6: Return(); Pop(0)

0xbb7: PushEmpty()
0xbb8: Push((int) 1)
0xbb9: IF (Stack[-1] == 0) GOTO 0xbe0; Pop(1)

0xbba: PushEmpty()
0xbbb: Call2 0xe1a

0xbbc: Pop(0)
0xbbd: Push((int) 42551)
0xbbe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbbf: IF (Stack[-1] == 0) GOTO 0xbd4; Pop(1)

0xbc0: PushEmpty(string)
0xbc1: Stack[-1] = "Neutral"
0xbc2: Call2 0xba1

0xbc3: Pop(1)
0xbc4: Push((int) 540542)
0xbc5: @@ SetMessage(Stack[-1])
0xbc6: Pop(1)
0xbc7: @@ ClearReplies()
0xbc8: Pop(0)
0xbc9: Push((int) 540543)
0xbca: Push((int) -1)
0xbcb: Push((int) 42552)
0xbcc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbcd: Pop(3)
0xbce: Push((int) 540796)
0xbcf: Push((int) -1)
0xbd0: Push((int) 42845)
0xbd1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd2: Pop(3)
0xbd3: Return(); Pop(0)

0xbd4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xbd5: PushEmpty(bool)
0xbd6: Call2 0xeb6

0xbd7: Pop(0)
0xbd8: IF (Stack[-1] == 0) GOTO 0xbdc; Pop(1)

0xbd9: @ lshStopAnimation()
0xbda: Pop(0)
0xbdb: GOTO 0xbde

0xbdc: @ StopAnimation()
0xbdd: Pop(0)
0xbde: Return(); Pop(0)

0xbdf: GOTO 0xbb8

0xbe0: Return(); Pop(0)

0xbe1: Push(GlobalVars[1])
0xbe2: Stack[-1] = (bool) 0
0xbe3: GlobalVars[1] = Stack[-1]; Pop(1)
0xbe4: PushEmpty()
0xbe5: Call2 0xbe8

0xbe6: Pop(0)
0xbe7: Return(); Pop(0)

0xbe8: PushEmpty(bool)
0xbe9: Call2 0xd06

0xbea: Pop(0)
0xbeb: Pop(1); Push((bool) Stack[-1] == 0)
0xbec: IF (Stack[-1] == 0) GOTO 0xbef; Pop(1)

0xbed: @ Hold()
0xbee: Pop(0)
0xbef: @ GetDirection(Stack[-0])
0xbf0: Pop(0)
0xbf1: PushEmpty()
0xbf2: Call2 0xc98

0xbf3: Pop(0)
0xbf4: GOTO 0xbf1

0xbf5: Return(); Pop(0)

0xbf6: PushEmpty(object, object)
0xbf7: Push("player")
0xbf8: @ FindActor(Stack[-2], Stack[-1])
0xbf9: Pop(1)
0xbfa: Pop(0); Push((bool) Stack[-1] == 0)
0xbfb: IF (Stack[-1] == 0) GOTO 0xbfe; Pop(1)

0xbfc: Stack[-3] = (bool) 0
0xbfd: Return(); Pop(2)

0xbfe: PushEmpty(bool, object)
0xbff: Stack[-1] = Stack[-3]
0xc00: Call2 0xcfd

0xc01: Stack[-5] = Stack[-2]
0xc02: Pop(2)
0xc03: Return(); Pop(2)

0xc04: Stack[-1] = 0
0xc05: Push(CvectorIndex(Stack[-0], 0))
0xc06: Push(CvectorIndex(Stack[-0], 2))
0xc07: @ RotateAsync(Stack[-2], Stack[-1])
0xc08: Pop(2)
0xc09: Return(); Pop(0)

0xc0a: PushEmpty(object, bool, object, bool)
0xc0b: Push("player")
0xc0c: @ FindActor(Stack[-3], Stack[-1])
0xc0d: Pop(1)
0xc0e: Pop(0); Push((bool) Stack[-2] == 0)
0xc0f: IF (Stack[-1] == 0) GOTO 0xc12; Pop(1)

0xc10: Stack[-5] = (bool) 0
0xc11: Return(); Pop(4)

0xc12: PushEmpty(float, object)
0xc13: Stack[-1] = Stack[-4]
0xc14: Call2 0xce4

0xc15: Pop(1)
0xc16: Push((float)90000.0)
0xc17: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xc18: IF (Stack[-1] == 0) GOTO 0xc1b; Pop(1)

0xc19: Stack[-5] = (bool) 0
0xc1a: Return(); Pop(4)

0xc1b: @ CanSee(Stack[-1], Stack[-2])
0xc1c: Pop(0)
0xc1d: Stack[-5] = Stack[-1]
0xc1e: Return(); Pop(4)

0xc1f: Stack[-2] = 0
0xc20: PushEmpty(float, float)
0xc21: Push((int) 8)
0xc22: Push((int) 16)
0xc23: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xc24: Pop(2)
0xc25: Push((int) 10)
0xc26: @ SetTimer(Stack[-1], Stack[-2])
0xc27: Pop(1)
0xc28: Return(); Pop(2)

0xc29: Push((int) 10)
0xc2a: @ KillTimer(Stack[-1])
0xc2b: Pop(1)
0xc2c: Return(); Pop(0)

0xc2d: PushEmpty()
0xc2e: Push((int) 10)
0xc2f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc30: IF (Stack[-1] == 0) GOTO 0xc52; Pop(1)

0xc31: PushEmpty()
0xc32: Call2 0xc29

0xc33: Pop(0)
0xc34: PushEmpty(bool)
0xc35: Stack[-1] = (bool) 0
0xc36: PushEmpty(bool)
0xc37: Call2 0xd06

0xc38: Pop(0)
0xc39: IF (Stack[-1] == 0) GOTO 0xc3f; Pop(1)

0xc3a: PushEmpty(bool)
0xc3b: Call2 0xc0a

0xc3c: Pop(0)
0xc3d: IF (Stack[-1] == 0) GOTO 0xc3f; Pop(1)

0xc3e: Stack[-1] = (bool) 1
0xc3f: IF (Stack[-1] == 0) GOTO 0xc4c; Pop(1)

0xc40: PushEmpty(bool)
0xc41: Call2 0xbf6

0xc42: Pop(0)
0xc43: IF (Stack[-1] == 0) GOTO 0xc4b; Pop(1)

0xc44: PushEmpty(bool, object)
0xc45: PushEmpty(object)
0xc46: Call2 0xe21

0xc47: Stack[-2] = Stack[-1]
0xc48: Pop(1)
0xc49: Call2 0xd9c

0xc4a: Pop(2)
0xc4b: GOTO 0xc52

0xc4c: PushEmpty()
0xc4d: Call2 0xc05

0xc4e: Pop(0)
0xc4f: PushEmpty()
0xc50: Call2 0xc20

0xc51: Pop(0)
0xc52: Return(); Pop(0)

0xc53: PushEmpty()
0xc54: Call2 0xcdf

0xc55: Pop(0)
0xc56: PushEmpty()
0xc57: Call2 0xc29

0xc58: Pop(0)
0xc59: @ lshStopSpeech()
0xc5a: Pop(0)
0xc5b: @ lshStopAnimation()
0xc5c: Pop(0)
0xc5d: @ StopAsync()
0xc5e: Pop(0)
0xc5f: @ Hold()
0xc60: Pop(0)
0xc61: Return(); Pop(0)

0xc62: @ StopGroup0()
0xc63: Pop(0)
0xc64: PushEmpty()
0xc65: Call2 0xc29

0xc66: Pop(0)
0xc67: PushEmpty(string)
0xc68: Stack[-1] = "Neutral"
0xc69: Call2 0xdec

0xc6a: Pop(1)
0xc6b: PushEmpty()
0xc6c: Call2 0xc20

0xc6d: Pop(0)
0xc6e: Return(); Pop(0)

0xc6f: PushEmpty()
0xc70: Push(Stack[-1])
0xc71: IF (Stack[-1] == 0) GOTO 0xc76; Pop(1)

0xc72: PushEmpty()
0xc73: Call2 0xc20

0xc74: Pop(0)
0xc75: GOTO 0xc7a

0xc76: PushEmpty(string)
0xc77: Stack[-1] = "Neutral"
0xc78: Call2 0xdec

0xc79: Pop(1)
0xc7a: Return(); Pop(0)

0xc7b: PushEmpty(bool, bool)
0xc7c: @ IsOverrideActive(Stack[-1])
0xc7d: Pop(0)
0xc7e: Pop(0); Push((bool) Stack[-1] == 0)
0xc7f: IF (Stack[-1] == 0) GOTO 0xc97; Pop(1)

0xc80: EventDisable(0)
0xc81: PushEmpty()
0xc82: Call2 0xcdf

0xc83: Pop(0)
0xc84: PushEmpty(bool, object)
0xc85: Stack[-1] = Stack[-5]
0xc86: Call2 0xcfd

0xc87: Pop(2)
0xc88: EventEnable(0)
0xc89: PushEmpty(object)
0xc8a: Stack[-1] = Stack[-4]
0xc8b: Call2 0x10eb

0xc8c: Pop(1)
0xc8d: PushEmpty(string)
0xc8e: Stack[-1] = "Neutral"
0xc8f: Call2 0xdec

0xc90: Pop(1)
0xc91: PushEmpty()
0xc92: Call2 0xc29

0xc93: Pop(0)
0xc94: PushEmpty()
0xc95: Call2 0xc20

0xc96: Pop(0)
0xc97: Return(); Pop(2)

0xc98: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xc99: @ WaitForAnimEnd()
0xc9a: Pop(0)
0xc9b: PushEmpty(bool)
0xc9c: Call2 0xd06

0xc9d: Pop(0)
0xc9e: Pop(1); Push((bool) Stack[-1] == 0)
0xc9f: IF (Stack[-1] == 0) GOTO 0xca1; Pop(1)

0xca0: Return(); Pop(12)

0xca1: PushEmpty(int)
0xca2: Call2 0xe9d

0xca3: Stack[-7] = Stack[-1]
0xca4: Pop(1)
0xca5: Stack[-5] = (int) 0
0xca6: PushEmpty(bool)
0xca7: Stack[-1] = (bool) 0
0xca8: Push((int) 5)
0xca9: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xcaa: IF (Stack[-1] == 0) GOTO 0xcb0; Pop(1)

0xcab: PushEmpty(bool)
0xcac: Call2 0xd06

0xcad: Pop(0)
0xcae: IF (Stack[-1] == 0) GOTO 0xcb0; Pop(1)

0xcaf: Stack[-1] = (bool) 1
0xcb0: IF (Stack[-1] == 0) GOTO 0xcda; Pop(1)

0xcb1: Pop(0); Push((bool) Stack[-6] == 0)
0xcb2: IF (Stack[-1] == 0) GOTO 0xcba; Pop(1)

0xcb3: Push((int) 3)
0xcb4: @ Sleep(Stack[-1], Stack[-5])
0xcb5: Pop(1)
0xcb6: Pop(0); Push((bool) Stack[-4] == 0)
0xcb7: IF (Stack[-1] == 0) GOTO 0xcb9; Pop(1)

0xcb8: GOTO 0xcda

0xcb9: GOTO 0xccf

0xcba: @ irand(Stack[-3], Stack[-6])
0xcbb: Pop(0)
0xcbc: Push((int) 5)
0xcbd: @ irand(Stack[-3], Stack[-1])
0xcbe: Pop(1)
0xcbf: Push((int) 0)
0xcc0: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xcc1: IF (Stack[-1] == 0) GOTO 0xcc3; Pop(1)

0xcc2: Stack[-3] = (int) 0
0xcc3: Push("all")
0xcc4: PushEmpty(string, int)
0xcc5: Stack[-1] = Stack[-6]
0xcc6: Call2 0xe96

0xcc7: Pop(1)
0xcc8: @ PlayAnimation(Stack[-2], Stack[-1])
0xcc9: Pop(2)
0xcca: @ WaitForAnimEnd(Stack[-1])
0xccb: Pop(0)
0xccc: Pop(0); Push((bool) Stack[-1] == 0)
0xccd: IF (Stack[-1] == 0) GOTO 0xccf; Pop(1)

0xcce: GOTO 0xcda

0xccf: PushEmpty(bool)
0xcd0: Call2 0xcdd

0xcd1: Pop(0)
0xcd2: Pop(1); Push((bool) Stack[-1] == 0)
0xcd3: IF (Stack[-1] == 0) GOTO 0xcd5; Pop(1)

0xcd4: GOTO 0xcda

0xcd5: @ ResetAAS()
0xcd6: Pop(0)
0xcd7: Push((int) 1)
0xcd8: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xcd9: GOTO 0xca6

0xcda: @ ResetAAS()
0xcdb: Pop(0)
0xcdc: Return(); Pop(12)

0xcdd: Stack[-1] = (bool) 1
0xcde: Return(); Pop(0)

0xcdf: @ StopAnimation()
0xce0: Pop(0)
0xce1: @ StopGroup0()
0xce2: Pop(0)
0xce3: Return(); Pop(0)

0xce4: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xce5: @ GetPosition(Stack[-3])
0xce6: Pop(0)
0xce7: @@ GetPosition(Stack[-2])
0xce8: Pop(0)
0xce9: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xcea: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xceb: Return(); Pop(6)

0xcec: PushEmpty(int, int)
0xced: @@ GetProperty(Stack[-4], Stack[-1])
0xcee: Pop(0)
0xcef: Pop(0); Push(Stack[-1] + Stack[-3]);
0xcf0: @@ SetProperty(Stack[-5], Stack[-1])
0xcf1: Pop(1)
0xcf2: Return(); Pop(2)

0xcf3: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xcf4: @ GetPosition(Stack[-3])
0xcf5: Pop(0)
0xcf6: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xcf7: Push(CvectorIndex(Stack[-2], 0))
0xcf8: Push(CvectorIndex(Stack[-3], 2))
0xcf9: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xcfa: Pop(2)
0xcfb: Stack[-8] = Stack[-1]
0xcfc: Return(); Pop(6)

0xcfd: PushEmpty(cvector, cvector)
0xcfe: @@ GetPosition(Stack[-1])
0xcff: Pop(0)
0xd00: PushEmpty(bool, cvector)
0xd01: Stack[-1] = Stack[-3]
0xd02: Call2 0xcf3

0xd03: Stack[-6] = Stack[-2]
0xd04: Pop(2)
0xd05: Return(); Pop(2)

0xd06: PushEmpty(bool, bool)
0xd07: @ IsLoaded(Stack[-1])
0xd08: Pop(0)
0xd09: Stack[-3] = Stack[-1]
0xd0a: Return(); Pop(2)

0xd0b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xd0c: @@ GetPosition(Stack[-8])
0xd0d: Pop(0)
0xd0e: @@ GetEyesHeight(Stack[-9])
0xd0f: Pop(0)
0xd10: Push(CvectorIndex(Stack[-8], 1))
0xd11: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xd12: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xd13: @ GetPosition(Stack[-7])
0xd14: Pop(0)
0xd15: @ GetEyesHeight(Stack[-9])
0xd16: Pop(0)
0xd17: Push(CvectorIndex(Stack[-7], 1))
0xd18: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xd19: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xd1a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xd1b: Push(CvectorIndex(Stack[-6], 1))
0xd1c: Stack[-1] = (int) 0
0xd1d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xd1e: Pop(0); Push(Stack[-6] | Stack[-6]);
0xd1f: Pop(1); Push(Sqrt(Stack[-1]))
0xd20: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xd21: Stack[-5] = -Stack[-6]; Pop(0);
0xd22: Pop(0); Push(Stack[-6] * Stack[-19]);
0xd23: PushEmpty(cvector, cvector)
0xd24: Push(CVector(0.0, 1.0, 0.0))
0xd25: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xd26: Call2 0xe27

0xd27: Pop(1)
0xd28: Push((int) 25)
0xd29: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd2a: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd2b: Push(CVector(0.0, 10.0, 0.0))
0xd2c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xd2d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xd2e: @ IsOverrideActive(Stack[-2])
0xd2f: Pop(0)
0xd30: Push(Stack[-2])
0xd31: IF (Stack[-1] == 0) GOTO 0xd34; Pop(1)

0xd32: Stack[-21] = (bool) 0
0xd33: Return(); Pop(18)

0xd34: @ StopWorld()
0xd35: Pop(0)
0xd36: Push((bool) 1)
0xd37: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xd38: Pop(1)
0xd39: Push(CvectorIndex(Stack[-4], 0))
0xd3a: Push(CvectorIndex(Stack[-5], 2))
0xd3b: @ Rotate(Stack[-2], Stack[-1])
0xd3c: Pop(2)
0xd3d: PushEmpty(bool)
0xd3e: Call2 0xeb6

0xd3f: Pop(0)
0xd40: IF (Stack[-1] == 0) GOTO 0xd42; Pop(1)

0xd41: GOTO 0xd4a

0xd42: Push("head")
0xd43: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xd44: Pop(1)
0xd45: Push(Stack[-1])
0xd46: IF (Stack[-1] == 0) GOTO 0xd4a; Pop(1)

0xd47: Push("head")
0xd48: @ LookAsyncCamera(Stack[-1])
0xd49: Pop(1)
0xd4a: @ CameraWaitForPlayFinish()
0xd4b: Pop(0)
0xd4c: @ ResumeWorld()
0xd4d: Pop(0)
0xd4e: Stack[-21] = (bool) 1
0xd4f: Return(); Pop(18)

0xd50: PushEmpty(bool, bool)
0xd51: Push((bool) 1)
0xd52: @ CameraSwitchToNormal(Stack[-1])
0xd53: Pop(1)
0xd54: PushEmpty(bool)
0xd55: Call2 0xeb6

0xd56: Pop(0)
0xd57: IF (Stack[-1] == 0) GOTO 0xd59; Pop(1)

0xd58: GOTO 0xd61

0xd59: Push("head")
0xd5a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xd5b: Pop(1)
0xd5c: Push(Stack[-1])
0xd5d: IF (Stack[-1] == 0) GOTO 0xd61; Pop(1)

0xd5e: Push("head")
0xd5f: @ UnlookAsync(Stack[-1])
0xd60: Pop(1)
0xd61: Return(); Pop(2)

0xd62: PushEmpty(int, int, int, int)
0xd63: Push("voice_common")
0xd64: @ GetVariable(Stack[-1], Stack[-3])
0xd65: Pop(1)
0xd66: Push(Stack[-2])
0xd67: IF (Stack[-1] == 0) GOTO 0xd88; Pop(1)

0xd68: PushEmpty(bool, object)
0xd69: Stack[-1] = Stack[-7]
0xd6a: Call2 0xd9c

0xd6b: Pop(1)
0xd6c: Pop(1); Push((bool) Stack[-1] == 0)
0xd6d: IF (Stack[-1] == 0) GOTO 0xd76; Pop(1)

0xd6e: PushEmpty(bool, object)
0xd6f: Stack[-1] = Stack[-7]
0xd70: Call2 0xdc1

0xd71: Pop(1)
0xd72: Pop(1); Push((bool) Stack[-1] == 0)
0xd73: IF (Stack[-1] == 0) GOTO 0xd76; Pop(1)

0xd74: Stack[-6] = (bool) 0
0xd75: Return(); Pop(4)

0xd76: Push((int) 2)
0xd77: @ irand(Stack[-2], Stack[-1])
0xd78: Pop(1)
0xd79: Push(Stack[-1])
0xd7a: IF (Stack[-1] == 0) GOTO 0xd83; Pop(1)

0xd7b: Push("voice_common")
0xd7c: Push((int) 1)
0xd7d: Pop(1); Push(Stack[-4] + Stack[-1]);
0xd7e: Push((int) 3)
0xd7f: Pop(2); Push(Stack[-2] % Stack[-1]);
0xd80: @ SetVariable(Stack[-2], Stack[-1])
0xd81: Pop(2)
0xd82: GOTO 0xd87

0xd83: Push("voice_common")
0xd84: Push((int) 0)
0xd85: @ SetVariable(Stack[-2], Stack[-1])
0xd86: Pop(2)
0xd87: GOTO 0xd9a

0xd88: PushEmpty(bool, object)
0xd89: Stack[-1] = Stack[-7]
0xd8a: Call2 0xdc1

0xd8b: Pop(1)
0xd8c: Pop(1); Push((bool) Stack[-1] == 0)
0xd8d: IF (Stack[-1] == 0) GOTO 0xd96; Pop(1)

0xd8e: PushEmpty(bool, object)
0xd8f: Stack[-1] = Stack[-7]
0xd90: Call2 0xd9c

0xd91: Pop(1)
0xd92: Pop(1); Push((bool) Stack[-1] == 0)
0xd93: IF (Stack[-1] == 0) GOTO 0xd96; Pop(1)

0xd94: Stack[-6] = (bool) 0
0xd95: Return(); Pop(4)

0xd96: Push("voice_common")
0xd97: Push((int) 1)
0xd98: @ SetVariable(Stack[-2], Stack[-1])
0xd99: Pop(2)
0xd9a: Stack[-6] = (bool) 1
0xd9b: Return(); Pop(4)

0xd9c: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xd9d: Stack[-5] = "c"
0xd9e: Stack[-4] = (int) 0
0xd9f: Push((int) 1)
0xda0: IF (Stack[-1] == 0) GOTO 0xdac; Pop(1)

0xda1: Push((int) 1)
0xda2: Pop(1); Push(Stack[-5] + Stack[-1]);
0xda3: Pop(1); Push(Stack[-6] + Stack[-1]);
0xda4: @@ HasProperty(Stack[-1], Stack[-4])
0xda5: Pop(1)
0xda6: Pop(0); Push((bool) Stack[-3] == 0)
0xda7: IF (Stack[-1] == 0) GOTO 0xda9; Pop(1)

0xda8: GOTO 0xdac

0xda9: Push((int) 1)
0xdaa: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xdab: GOTO 0xd9f

0xdac: Pop(0); Push((bool) Stack[-4] == 0)
0xdad: IF (Stack[-1] == 0) GOTO 0xdb0; Pop(1)

0xdae: Stack[-12] = (bool) 0
0xdaf: Return(); Pop(10)

0xdb0: Stack[-2] = (int) 0
0xdb1: Push((int) 1)
0xdb2: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xdb3: IF (Stack[-1] == 0) GOTO 0xdb6; Pop(1)

0xdb4: @ irand(Stack[-2], Stack[-4])
0xdb5: Pop(0)
0xdb6: Push((int) 1)
0xdb7: Pop(1); Push(Stack[-3] + Stack[-1]);
0xdb8: Pop(1); Push(Stack[-6] + Stack[-1]);
0xdb9: @@ GetProperty(Stack[-1], Stack[-2])
0xdba: Pop(1)
0xdbb: PushEmpty(bool, string)
0xdbc: Stack[-1] = Stack[-3]
0xdbd: Call2 0xe0b

0xdbe: Stack[-14] = Stack[-2]
0xdbf: Pop(2)
0xdc0: Return(); Pop(10)

0xdc1: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xdc2: Push("d")
0xdc3: PushEmpty(int)
0xdc4: Call2 0xe7f

0xdc5: Pop(0)
0xdc6: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdc7: Push("m")
0xdc8: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xdc9: Stack[-4] = (int) 0
0xdca: Push((int) 1)
0xdcb: IF (Stack[-1] == 0) GOTO 0xdd7; Pop(1)

0xdcc: Push((int) 1)
0xdcd: Pop(1); Push(Stack[-5] + Stack[-1]);
0xdce: Pop(1); Push(Stack[-6] + Stack[-1]);
0xdcf: @@ HasProperty(Stack[-1], Stack[-4])
0xdd0: Pop(1)
0xdd1: Pop(0); Push((bool) Stack[-3] == 0)
0xdd2: IF (Stack[-1] == 0) GOTO 0xdd4; Pop(1)

0xdd3: GOTO 0xdd7

0xdd4: Push((int) 1)
0xdd5: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xdd6: GOTO 0xdca

0xdd7: Pop(0); Push((bool) Stack[-4] == 0)
0xdd8: IF (Stack[-1] == 0) GOTO 0xddb; Pop(1)

0xdd9: Stack[-12] = (bool) 0
0xdda: Return(); Pop(10)

0xddb: Stack[-2] = (int) 0
0xddc: Push((int) 1)
0xddd: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xdde: IF (Stack[-1] == 0) GOTO 0xde1; Pop(1)

0xddf: @ irand(Stack[-2], Stack[-4])
0xde0: Pop(0)
0xde1: Push((int) 1)
0xde2: Pop(1); Push(Stack[-3] + Stack[-1]);
0xde3: Pop(1); Push(Stack[-6] + Stack[-1]);
0xde4: @@ GetProperty(Stack[-1], Stack[-2])
0xde5: Pop(1)
0xde6: PushEmpty(bool, string)
0xde7: Stack[-1] = Stack[-3]
0xde8: Call2 0xe0b

0xde9: Stack[-14] = Stack[-2]
0xdea: Pop(2)
0xdeb: Return(); Pop(10)

0xdec: PushEmpty(bool, float, float, bool, float, float)
0xded: @ lshHasAnimation(Stack[-3], Stack[-7])
0xdee: Pop(0)
0xdef: Push(Stack[-3])
0xdf0: IF (Stack[-1] == 0) GOTO 0xdf7; Pop(1)

0xdf1: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xdf2: Pop(0)
0xdf3: Push((bool) 0)
0xdf4: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xdf5: Pop(1)
0xdf6: GOTO 0xdfb

0xdf7: Push("Can't find lsh animation : ")
0xdf8: Pop(1); Push(Stack[-1] + Stack[-8]);
0xdf9: @ Trace(Stack[-1])
0xdfa: Pop(1)
0xdfb: Return(); Pop(6)

0xdfc: PushEmpty(bool, float, float, bool, float, float)
0xdfd: @ lshHasAnimation(Stack[-3], Stack[-8])
0xdfe: Pop(0)
0xdff: Push(Stack[-3])
0xe00: IF (Stack[-1] == 0) GOTO 0xe06; Pop(1)

0xe01: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xe02: Pop(0)
0xe03: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xe04: Pop(0)
0xe05: GOTO 0xe0a

0xe06: Push("Can't find lsh animation : ")
0xe07: Pop(1); Push(Stack[-1] + Stack[-9]);
0xe08: @ Trace(Stack[-1])
0xe09: Pop(1)
0xe0a: Return(); Pop(6)

0xe0b: PushEmpty(bool, bool)
0xe0c: PushEmpty(bool)
0xe0d: Call2 0xeb6

0xe0e: Pop(0)
0xe0f: IF (Stack[-1] == 0) GOTO 0xe18; Pop(1)

0xe10: @ lshHasSpeech(Stack[-1], Stack[-3])
0xe11: Pop(0)
0xe12: Push(Stack[-1])
0xe13: IF (Stack[-1] == 0) GOTO 0xe18; Pop(1)

0xe14: @ lshPlaySpeech(Stack[-3])
0xe15: Pop(0)
0xe16: Stack[-4] = (bool) 1
0xe17: Return(); Pop(2)

0xe18: Stack[-4] = (bool) 0
0xe19: Return(); Pop(2)

0xe1a: PushEmpty(bool)
0xe1b: Call2 0xeb6

0xe1c: Pop(0)
0xe1d: IF (Stack[-1] == 0) GOTO 0xe20; Pop(1)

0xe1e: @ lshStopSpeech()
0xe1f: Pop(0)
0xe20: Return(); Pop(0)

0xe21: PushEmpty(object, object)
0xe22: @ self(Stack[-1])
0xe23: Pop(0)
0xe24: Stack[-3] = Stack[-1]
0xe25: Return(); Pop(2)

0xe26: Stack[-1] = 0
0xe27: PushEmpty(float, float)
0xe28: Pop(0); Push(Stack[-3] | Stack[-3]);
0xe29: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xe2a: Push((float)0.0)
0xe2b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xe2c: IF (Stack[-1] == 0) GOTO 0xe2f; Pop(1)

0xe2d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xe2e: Return(); Pop(2)

0xe2f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xe30: Return(); Pop(2)

0xe31: PushEmpty(int, int)
0xe32: @ GetVariable(Stack[-3], Stack[-1])
0xe33: Pop(0)
0xe34: Stack[-4] = Stack[-1]
0xe35: Return(); Pop(2)

0xe36: PushEmpty(object, object, object, object)
0xe37: @ GetMainOutdoorScene(Stack[-2])
0xe38: Pop(0)
0xe39: Push(".bin")
0xe3a: Pop(1); Push(Stack[-6] + Stack[-1]);
0xe3b: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xe3c: Pop(1)
0xe3d: Stack[-6] = Stack[-1]
0xe3e: Return(); Pop(4)

0xe3f: Stack[-1] = 0
0xe40: Stack[-2] = 0
0xe41: PushEmpty(object, object)
0xe42: @ CreateIntVector(Stack[-1])
0xe43: Pop(0)
0xe44: @@ add(Stack[-4])
0xe45: Pop(0)
0xe46: @@ add(Stack[-3])
0xe47: Pop(0)
0xe48: Push((int) 3)
0xe49: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xe4a: Pop(1)
0xe4b: Return(); Pop(2)

0xe4c: Stack[-1] = 0
0xe4d: PushEmpty(int, int)
0xe4e: PushEmpty(object, string, int)
0xe4f: Stack[-3] = Stack[-7]
0xe50: Stack[-2] = "money"
0xe51: Stack[-1] = Stack[-6]
0xe52: Call2 0xcec

0xe53: Pop(3)
0xe54: Push((int) 0)
0xe55: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xe56: IF (Stack[-1] == 0) GOTO 0xe5f; Pop(1)

0xe57: Push("Money")
0xe58: @ GetInvItemByName(Stack[-2], Stack[-1])
0xe59: Pop(1)
0xe5a: PushEmpty(int, int)
0xe5b: Stack[-2] = Stack[-3]
0xe5c: Stack[-1] = Stack[-5]
0xe5d: Call2 0xe41

0xe5e: Pop(2)
0xe5f: Return(); Pop(2)

0xe60: PushEmpty(int, int, bool, int, int, bool)
0xe61: @@ GetItemID(Stack[-3])
0xe62: Pop(0)
0xe63: Push("Category")
0xe64: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xe65: Pop(1)
0xe66: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xe67: Pop(0)
0xe68: Pop(0); Push((bool) Stack[-1] == 0)
0xe69: IF (Stack[-1] == 0) GOTO 0xe6d; Pop(1)

0xe6a: @@ DropItems(Stack[-8], Stack[-7])
0xe6b: Pop(0)
0xe6c: GOTO 0xe72

0xe6d: PushEmpty(int, int)
0xe6e: Stack[-2] = Stack[-5]
0xe6f: Stack[-1] = Stack[-9]
0xe70: Call2 0xe41

0xe71: Pop(2)
0xe72: Return(); Pop(6)

0xe73: PushEmpty(object, object)
0xe74: @ FindActor(Stack[-1], Stack[-4])
0xe75: Pop(0)
0xe76: Pop(0); Push((bool) Stack[-1] == 0)
0xe77: IF (Stack[-1] == 0) GOTO 0xe7a; Pop(1)

0xe78: Stack[-5] = (bool) 0
0xe79: Return(); Pop(2)

0xe7a: @ Trigger(Stack[-1], Stack[-3])
0xe7b: Pop(0)
0xe7c: Stack[-5] = (bool) 1
0xe7d: Return(); Pop(2)

0xe7e: Stack[-1] = 0
0xe7f: PushEmpty(float, float)
0xe80: @ GetGameTime(Stack[-1])
0xe81: Pop(0)
0xe82: Push((int) 1)
0xe83: PushEmpty(int)
0xe84: Push((int) 24)
0xe85: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xe86: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xe87: Return(); Pop(2)

0xe88: PushEmpty(float, float)
0xe89: @ GetGameTime(Stack[-1])
0xe8a: Pop(0)
0xe8b: PushEmpty(int)
0xe8c: Stack[-1] = Stack[-2]
0xe8d: Push((int) 24)
0xe8e: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xe8f: Return(); Pop(2)

0xe90: PushEmpty()
0xe91: PushEmpty(int)
0xe92: Call2 0xe7f

0xe93: Pop(0)
0xe94: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xe95: Return(); Pop(0)

0xe96: PushEmpty(string, string)
0xe97: Stack[-1] = "idle"
0xe98: Push(Stack[-3])
0xe99: IF (Stack[-1] == 0) GOTO 0xe9b; Pop(1)

0xe9a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xe9b: Stack[-4] = Stack[-1]
0xe9c: Return(); Pop(2)

0xe9d: PushEmpty(int, bool, int, bool)
0xe9e: Stack[-2] = (int) 0
0xe9f: Push("all")
0xea0: PushEmpty(string, int)
0xea1: Stack[-1] = Stack[-5]
0xea2: Call2 0xe96

0xea3: Pop(1)
0xea4: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xea5: Pop(2)
0xea6: Pop(0); Push((bool) Stack[-1] == 0)
0xea7: IF (Stack[-1] == 0) GOTO 0xea9; Pop(1)

0xea8: GOTO 0xeac

0xea9: Push((int) 1)
0xeaa: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xeab: GOTO 0xe9f

0xeac: Stack[-5] = Stack[-2]
0xead: Return(); Pop(4)

0xeae: Stack[-1] = (int) 515552
0xeaf: Return(); Pop(0)

0xeb0: Stack[-1] = (int) 502877
0xeb1: Return(); Pop(0)

0xeb2: Stack[-1] = "ui/NPC_Spi4ka.png"
0xeb3: Return(); Pop(0)

0xeb4: Stack[-1] = "ui/NPC_Spi4ka_b.png"
0xeb5: Return(); Pop(0)

0xeb6: Stack[-1] = (bool) 1
0xeb7: Return(); Pop(0)

0xeb8: PushEmpty(object, object)
0xeb9: Push("lockpick1time is given")
0xeba: @ Trace(Stack[-1])
0xebb: Pop(1)
0xebc: @ CreateInvItem(Stack[-1])
0xebd: Pop(0)
0xebe: Push("lockpick")
0xebf: @@ SetItemName(Stack[-1])
0xec0: Pop(1)
0xec1: Push("uses")
0xec2: Push((int) 1)
0xec3: @@ SetProperty(Stack[-2], Stack[-1])
0xec4: Pop(2)
0xec5: PushEmpty(object, object, int)
0xec6: Stack[-3] = Stack[-7]
0xec7: Stack[-2] = Stack[-4]
0xec8: Stack[-1] = (int) 1
0xec9: Call2 0xe60

0xeca: Pop(3)
0xecb: Return(); Pop(2)

0xecc: Stack[-1] = 0
0xecd: PushEmpty()
0xece: Push("money 2000 removed")
0xecf: @ Trace(Stack[-1])
0xed0: Pop(1)
0xed1: PushEmpty(object, int)
0xed2: Stack[-2] = Stack[-4]
0xed3: Stack[-1] = (int) -2000
0xed4: Call2 0xe4d

0xed5: Pop(2)
0xed6: Return(); Pop(0)

0xed7: PushEmpty()
0xed8: Push("ood4Spi4ka1")
0xed9: Push((int) 1)
0xeda: @ SetVariable(Stack[-2], Stack[-1])
0xedb: Pop(2)
0xedc: Return(); Pop(0)

0xedd: PushEmpty()
0xede: Push("ood4Spi4ka3")
0xedf: Push((int) 1)
0xee0: @ SetVariable(Stack[-2], Stack[-1])
0xee1: Pop(2)
0xee2: Return(); Pop(0)

0xee3: PushEmpty()
0xee4: Push("ood2Spi4ka4")
0xee5: Push((int) 1)
0xee6: @ SetVariable(Stack[-2], Stack[-1])
0xee7: Pop(2)
0xee8: Return(); Pop(0)

0xee9: PushEmpty()
0xeea: Push("ood2Spi4ka1")
0xeeb: Push((int) 1)
0xeec: @ SetVariable(Stack[-2], Stack[-1])
0xeed: Pop(2)
0xeee: Return(); Pop(0)

0xeef: PushEmpty()
0xef0: Push("ood2Spi4ka2")
0xef1: Push((int) 1)
0xef2: @ SetVariable(Stack[-2], Stack[-1])
0xef3: Pop(2)
0xef4: Return(); Pop(0)

0xef5: PushEmpty()
0xef6: Push("d2q01")
0xef7: Push((int) 4)
0xef8: @ SetVariable(Stack[-2], Stack[-1])
0xef9: Pop(2)
0xefa: PushEmpty()
0xefb: Call2 0x1070

0xefc: Pop(0)
0xefd: Return(); Pop(0)

0xefe: PushEmpty()
0xeff: Push("playsound")
0xf00: Push("givemoney")
0xf01: @ TriggerWorld(Stack[-2], Stack[-1])
0xf02: Pop(2)
0xf03: Return(); Pop(0)

0xf04: PushEmpty()
0xf05: Push("ood6Spi4ka1")
0xf06: Push((int) 1)
0xf07: @ SetVariable(Stack[-2], Stack[-1])
0xf08: Pop(2)
0xf09: Return(); Pop(0)

0xf0a: PushEmpty()
0xf0b: Push("d6q03")
0xf0c: Push((int) 1)
0xf0d: @ SetVariable(Stack[-2], Stack[-1])
0xf0e: Pop(2)
0xf0f: PushEmpty()
0xf10: Call2 0x107d

0xf11: Pop(0)
0xf12: PushEmpty()
0xf13: Call2 0x10a4

0xf14: Pop(0)
0xf15: PushEmpty(object, string)
0xf16: Stack[-1] = "quest_d6_03"
0xf17: Call2 0xe36

0xf18: Pop(2)
0xf19: PushEmpty(bool, string, string)
0xf1a: Stack[-2] = "quest_d6_03"
0xf1b: Stack[-1] = "place_albinos"
0xf1c: Call2 0xe73

0xf1d: Pop(3)
0xf1e: Return(); Pop(0)

0xf1f: PushEmpty()
0xf20: Push("ood6Spi4ka2")
0xf21: Push((int) 1)
0xf22: @ SetVariable(Stack[-2], Stack[-1])
0xf23: Pop(2)
0xf24: Return(); Pop(0)

0xf25: PushEmpty()
0xf26: PushEmpty()
0xf27: Call2 0x108a

0xf28: Pop(0)
0xf29: PushEmpty(bool, string, string)
0xf2a: Stack[-2] = "quest_d6_03"
0xf2b: Stack[-1] = "completed"
0xf2c: Call2 0xe73

0xf2d: Pop(3)
0xf2e: Return(); Pop(0)

0xf2f: PushEmpty()
0xf30: PushEmpty()
0xf31: Call2 0x1097

0xf32: Pop(0)
0xf33: PushEmpty(bool, string, string)
0xf34: Stack[-2] = "quest_d6_03"
0xf35: Stack[-1] = "failed"
0xf36: Call2 0xe73

0xf37: Pop(3)
0xf38: Return(); Pop(0)

0xf39: PushEmpty()
0xf3a: Push("ood6Spi4ka3")
0xf3b: Push((int) 1)
0xf3c: @ SetVariable(Stack[-2], Stack[-1])
0xf3d: Pop(2)
0xf3e: Return(); Pop(0)

0xf3f: PushEmpty()
0xf40: Push("ood6Spi4ka4")
0xf41: Push((int) 1)
0xf42: @ SetVariable(Stack[-2], Stack[-1])
0xf43: Pop(2)
0xf44: Return(); Pop(0)

0xf45: PushEmpty()
0xf46: Push("ood2Spi4ka3")
0xf47: Push((int) 1)
0xf48: @ SetVariable(Stack[-2], Stack[-1])
0xf49: Pop(2)
0xf4a: Return(); Pop(0)

0xf4b: PushEmpty()
0xf4c: Push("KnowSpi4ka")
0xf4d: Push((int) 1)
0xf4e: @ SetVariable(Stack[-2], Stack[-1])
0xf4f: Pop(2)
0xf50: Return(); Pop(0)

0xf51: PushEmpty()
0xf52: PushEmpty(bool, object)
0xf53: Stack[-1] = Stack[-3]
0xf54: Call2 0x103b

0xf55: Pop(1)
0xf56: IF (Stack[-1] == 0) GOTO 0xf59; Pop(1)

0xf57: Stack[-2] = (bool) 1
0xf58: Return(); Pop(0)

0xf59: Stack[-2] = (bool) 0
0xf5a: Return(); Pop(0)

0xf5b: PushEmpty()
0xf5c: PushEmpty(int, string)
0xf5d: Stack[-1] = "ood4Spi4ka1"
0xf5e: Call2 0xe31

0xf5f: Pop(1)
0xf60: Push((int) 0)
0xf61: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf62: IF (Stack[-1] == 0) GOTO 0xf65; Pop(1)

0xf63: Stack[-2] = (bool) 1
0xf64: Return(); Pop(0)

0xf65: Stack[-2] = (bool) 0
0xf66: Return(); Pop(0)

0xf67: PushEmpty()
0xf68: PushEmpty(int, string)
0xf69: Stack[-1] = "ood4Spi4ka3"
0xf6a: Call2 0xe31

0xf6b: Pop(1)
0xf6c: Push((int) 0)
0xf6d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf6e: IF (Stack[-1] == 0) GOTO 0xf71; Pop(1)

0xf6f: Stack[-2] = (bool) 1
0xf70: Return(); Pop(0)

0xf71: Stack[-2] = (bool) 0
0xf72: Return(); Pop(0)

0xf73: PushEmpty()
0xf74: PushEmpty(int, string)
0xf75: Stack[-1] = "ood2Spi4ka4"
0xf76: Call2 0xe31

0xf77: Pop(1)
0xf78: Push((int) 0)
0xf79: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf7a: IF (Stack[-1] == 0) GOTO 0xf7d; Pop(1)

0xf7b: Stack[-2] = (bool) 1
0xf7c: Return(); Pop(0)

0xf7d: Stack[-2] = (bool) 0
0xf7e: Return(); Pop(0)

0xf7f: PushEmpty()
0xf80: PushEmpty(int, string)
0xf81: Stack[-1] = "ood2Spi4ka1"
0xf82: Call2 0xe31

0xf83: Pop(1)
0xf84: Push((int) 0)
0xf85: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf86: IF (Stack[-1] == 0) GOTO 0xf89; Pop(1)

0xf87: Stack[-2] = (bool) 1
0xf88: Return(); Pop(0)

0xf89: Stack[-2] = (bool) 0
0xf8a: Return(); Pop(0)

0xf8b: PushEmpty()
0xf8c: PushEmpty(int, string)
0xf8d: Stack[-1] = "ood2Spi4ka2"
0xf8e: Call2 0xe31

0xf8f: Pop(1)
0xf90: Push((int) 0)
0xf91: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf92: IF (Stack[-1] == 0) GOTO 0xf95; Pop(1)

0xf93: Stack[-2] = (bool) 1
0xf94: Return(); Pop(0)

0xf95: Stack[-2] = (bool) 0
0xf96: Return(); Pop(0)

0xf97: PushEmpty()
0xf98: PushEmpty(int, string)
0xf99: Stack[-1] = "d2q01"
0xf9a: Call2 0xe31

0xf9b: Pop(1)
0xf9c: Push((int) 3)
0xf9d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf9e: IF (Stack[-1] == 0) GOTO 0xfa1; Pop(1)

0xf9f: Stack[-2] = (bool) 1
0xfa0: Return(); Pop(0)

0xfa1: Stack[-2] = (bool) 0
0xfa2: Return(); Pop(0)

0xfa3: PushEmpty()
0xfa4: PushEmpty(bool, object)
0xfa5: Stack[-1] = Stack[-3]
0xfa6: Call2 0x1046

0xfa7: Pop(1)
0xfa8: IF (Stack[-1] == 0) GOTO 0xfab; Pop(1)

0xfa9: Stack[-2] = (bool) 1
0xfaa: Return(); Pop(0)

0xfab: Stack[-2] = (bool) 0
0xfac: Return(); Pop(0)

0xfad: PushEmpty()
0xfae: PushEmpty(bool, object)
0xfaf: Stack[-1] = Stack[-3]
0xfb0: Call2 0x105b

0xfb1: Pop(1)
0xfb2: IF (Stack[-1] == 0) GOTO 0xfb5; Pop(1)

0xfb3: Stack[-2] = (bool) 1
0xfb4: Return(); Pop(0)

0xfb5: Stack[-2] = (bool) 0
0xfb6: Return(); Pop(0)

0xfb7: PushEmpty()
0xfb8: PushEmpty(int, string)
0xfb9: Stack[-1] = "ood6Spi4ka1"
0xfba: Call2 0xe31

0xfbb: Pop(1)
0xfbc: Push((int) 0)
0xfbd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xfbe: IF (Stack[-1] == 0) GOTO 0xfc1; Pop(1)

0xfbf: Stack[-2] = (bool) 1
0xfc0: Return(); Pop(0)

0xfc1: Stack[-2] = (bool) 0
0xfc2: Return(); Pop(0)

0xfc3: PushEmpty()
0xfc4: PushEmpty(int, string)
0xfc5: Stack[-1] = "d6q03"
0xfc6: Call2 0xe31

0xfc7: Pop(1)
0xfc8: Push((int) 0)
0xfc9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xfca: IF (Stack[-1] == 0) GOTO 0xfcd; Pop(1)

0xfcb: Stack[-2] = (bool) 1
0xfcc: Return(); Pop(0)

0xfcd: Stack[-2] = (bool) 0
0xfce: Return(); Pop(0)

0xfcf: PushEmpty()
0xfd0: PushEmpty(int, string)
0xfd1: Stack[-1] = "d6q03"
0xfd2: Call2 0xe31

0xfd3: Pop(1)
0xfd4: Push((int) 2)
0xfd5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xfd6: IF (Stack[-1] == 0) GOTO 0xfd9; Pop(1)

0xfd7: Stack[-2] = (bool) 1
0xfd8: Return(); Pop(0)

0xfd9: Stack[-2] = (bool) 0
0xfda: Return(); Pop(0)

0xfdb: PushEmpty()
0xfdc: PushEmpty(int, string)
0xfdd: Stack[-1] = "d6q03AlbinosKilled"
0xfde: Call2 0xe31

0xfdf: Pop(1)
0xfe0: Push((int) 1)
0xfe1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xfe2: IF (Stack[-1] == 0) GOTO 0xfe5; Pop(1)

0xfe3: Stack[-2] = (bool) 1
0xfe4: Return(); Pop(0)

0xfe5: Stack[-2] = (bool) 0
0xfe6: Return(); Pop(0)

0xfe7: PushEmpty()
0xfe8: PushEmpty(int, string)
0xfe9: Stack[-1] = "ood6Spi4ka2"
0xfea: Call2 0xe31

0xfeb: Pop(1)
0xfec: Push((int) 0)
0xfed: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xfee: IF (Stack[-1] == 0) GOTO 0xff1; Pop(1)

0xfef: Stack[-2] = (bool) 1
0xff0: Return(); Pop(0)

0xff1: Stack[-2] = (bool) 0
0xff2: Return(); Pop(0)

0xff3: PushEmpty()
0xff4: PushEmpty(int, string)
0xff5: Stack[-1] = "ood6Spi4ka3"
0xff6: Call2 0xe31

0xff7: Pop(1)
0xff8: Push((int) 0)
0xff9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xffa: IF (Stack[-1] == 0) GOTO 0xffd; Pop(1)

0xffb: Stack[-2] = (bool) 1
0xffc: Return(); Pop(0)

0xffd: Stack[-2] = (bool) 0
0xffe: Return(); Pop(0)

0xfff: PushEmpty()
0x1000: PushEmpty(int, string)
0x1001: Stack[-1] = "d6q01"
0x1002: Call2 0xe31

0x1003: Pop(1)
0x1004: Push((int) 4)
0x1005: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1006: IF (Stack[-1] == 0) GOTO 0x1009; Pop(1)

0x1007: Stack[-2] = (bool) 1
0x1008: Return(); Pop(0)

0x1009: Stack[-2] = (bool) 0
0x100a: Return(); Pop(0)

0x100b: PushEmpty()
0x100c: PushEmpty(int, string)
0x100d: Stack[-1] = "ood6Spi4ka4"
0x100e: Call2 0xe31

0x100f: Pop(1)
0x1010: Push((int) 0)
0x1011: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1012: IF (Stack[-1] == 0) GOTO 0x1015; Pop(1)

0x1013: Stack[-2] = (bool) 1
0x1014: Return(); Pop(0)

0x1015: Stack[-2] = (bool) 0
0x1016: Return(); Pop(0)

0x1017: PushEmpty()
0x1018: PushEmpty(int, string)
0x1019: Stack[-1] = "d2q01"
0x101a: Call2 0xe31

0x101b: Pop(1)
0x101c: Push((int) 5)
0x101d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x101e: IF (Stack[-1] == 0) GOTO 0x1021; Pop(1)

0x101f: Stack[-2] = (bool) 1
0x1020: Return(); Pop(0)

0x1021: Stack[-2] = (bool) 0
0x1022: Return(); Pop(0)

0x1023: PushEmpty()
0x1024: PushEmpty(int, string)
0x1025: Stack[-1] = "ood2Spi4ka3"
0x1026: Call2 0xe31

0x1027: Pop(1)
0x1028: Push((int) 0)
0x1029: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x102a: IF (Stack[-1] == 0) GOTO 0x102d; Pop(1)

0x102b: Stack[-2] = (bool) 1
0x102c: Return(); Pop(0)

0x102d: Stack[-2] = (bool) 0
0x102e: Return(); Pop(0)

0x102f: PushEmpty()
0x1030: PushEmpty(int, string)
0x1031: Stack[-1] = "d4q03"
0x1032: Call2 0xe31

0x1033: Pop(1)
0x1034: Push((int) 3)
0x1035: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1036: IF (Stack[-1] == 0) GOTO 0x1039; Pop(1)

0x1037: Stack[-2] = (bool) 1
0x1038: Return(); Pop(0)

0x1039: Stack[-2] = (bool) 0
0x103a: Return(); Pop(0)

0x103b: PushEmpty(float, float)
0x103c: Push("money")
0x103d: @@ GetProperty(Stack[-1], Stack[-2])
0x103e: Pop(1)
0x103f: Push((int) 2000)
0x1040: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1041: IF (Stack[-1] == 0) GOTO 0x1044; Pop(1)

0x1042: Stack[-4] = (bool) 1
0x1043: Return(); Pop(2)

0x1044: Stack[-4] = (bool) 0
0x1045: Return(); Pop(2)

0x1046: PushEmpty()
0x1047: PushEmpty(bool)
0x1048: Stack[-1] = (bool) 0
0x1049: PushEmpty(int)
0x104a: Call2 0xe88

0x104b: Pop(0)
0x104c: Push((int) 0)
0x104d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x104e: IF (Stack[-1] == 0) GOTO 0x1056; Pop(1)

0x104f: PushEmpty(int)
0x1050: Call2 0xe88

0x1051: Pop(0)
0x1052: Push((int) 6)
0x1053: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1054: IF (Stack[-1] == 0) GOTO 0x1056; Pop(1)

0x1055: Stack[-1] = (bool) 1
0x1056: IF (Stack[-1] == 0) GOTO 0x1059; Pop(1)

0x1057: Stack[-2] = (bool) 1
0x1058: Return(); Pop(0)

0x1059: Stack[-2] = (bool) 0
0x105a: Return(); Pop(0)

0x105b: PushEmpty()
0x105c: PushEmpty(bool)
0x105d: Stack[-1] = (bool) 0
0x105e: PushEmpty(int)
0x105f: Call2 0xe88

0x1060: Pop(0)
0x1061: Push((int) 6)
0x1062: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x1063: IF (Stack[-1] == 0) GOTO 0x106b; Pop(1)

0x1064: PushEmpty(int)
0x1065: Call2 0xe88

0x1066: Pop(0)
0x1067: Push((int) 12)
0x1068: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1069: IF (Stack[-1] == 0) GOTO 0x106b; Pop(1)

0x106a: Stack[-1] = (bool) 1
0x106b: IF (Stack[-1] == 0) GOTO 0x106e; Pop(1)

0x106c: Stack[-2] = (bool) 1
0x106d: Return(); Pop(0)

0x106e: Stack[-2] = (bool) 0
0x106f: Return(); Pop(0)

0x1070: PushEmpty(object, object)
0x1071: Push((int) 53)
0x1072: Push((int) 1)
0x1073: Push((int) 512135)
0x1074: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1075: Pop(3)
0x1076: PushEmpty(bool, object, int)
0x1077: Stack[-2] = Stack[-4]
0x1078: Stack[-1] = (int) 10
0x1079: Call2 0x10be

0x107a: Pop(3)
0x107b: Return(); Pop(2)

0x107c: Stack[-1] = 0
0x107d: PushEmpty(object, object)
0x107e: Push((int) 107)
0x107f: Push((int) 2)
0x1080: Push((int) 513730)
0x1081: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1082: Pop(3)
0x1083: PushEmpty(bool, object, int)
0x1084: Stack[-2] = Stack[-4]
0x1085: Stack[-1] = (int) -1
0x1086: Call2 0x10be

0x1087: Pop(3)
0x1088: Return(); Pop(2)

0x1089: Stack[-1] = 0
0x108a: PushEmpty(object, object)
0x108b: Push((int) 109)
0x108c: Push((int) 2)
0x108d: Push((int) 513732)
0x108e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x108f: Pop(3)
0x1090: PushEmpty(bool, object, int)
0x1091: Stack[-2] = Stack[-4]
0x1092: Stack[-1] = (int) 107
0x1093: Call2 0x10be

0x1094: Pop(3)
0x1095: Return(); Pop(2)

0x1096: Stack[-1] = 0
0x1097: PushEmpty(object, object)
0x1098: Push((int) 110)
0x1099: Push((int) 2)
0x109a: Push((int) 513733)
0x109b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x109c: Pop(3)
0x109d: PushEmpty(bool, object, int)
0x109e: Stack[-2] = Stack[-4]
0x109f: Stack[-1] = (int) 107
0x10a0: Call2 0x10be

0x10a1: Pop(3)
0x10a2: Return(); Pop(2)

0x10a3: Stack[-1] = 0
0x10a4: PushEmpty(object, object)
0x10a5: Push((int) 158)
0x10a6: Push((int) 2)
0x10a7: Push((int) 515376)
0x10a8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10a9: Pop(3)
0x10aa: PushEmpty(bool, object, int)
0x10ab: Stack[-2] = Stack[-4]
0x10ac: Stack[-1] = (int) 107
0x10ad: Call2 0x10be

0x10ae: Pop(3)
0x10af: Return(); Pop(2)

0x10b0: Stack[-1] = 0
0x10b1: PushEmpty(object, object)
0x10b2: @ GetDiaryRoot(Stack[-1])
0x10b3: Pop(0)
0x10b4: Pop(0); Push((bool) Stack[-1] == 0)
0x10b5: IF (Stack[-1] == 0) GOTO 0x10bb; Pop(1)

0x10b6: Push("Can't retrieve diary root")
0x10b7: @ Trace(Stack[-1])
0x10b8: Pop(1)
0x10b9: Stack[-3] = (bool) 0
0x10ba: Return(); Pop(2)

0x10bb: Stack[-3] = Stack[-1]
0x10bc: Return(); Pop(2)

0x10bd: Stack[-1] = 0
0x10be: PushEmpty(object, object, int, object, object, int)
0x10bf: PushEmpty(object)
0x10c0: Call2 0x10b1

0x10c1: Stack[-4] = Stack[-1]
0x10c2: Pop(1)
0x10c3: @@ Find(Stack[-7], Stack[-2])
0x10c4: Pop(0)
0x10c5: Pop(0); Push((bool) Stack[-2] == 0)
0x10c6: IF (Stack[-1] == 0) GOTO 0x10cd; Pop(1)

0x10c7: Push("Can't find diary parent with id: ")
0x10c8: Pop(1); Push(Stack[-1] + Stack[-8]);
0x10c9: @ Trace(Stack[-1])
0x10ca: Pop(1)
0x10cb: Stack[-9] = (bool) 0
0x10cc: Return(); Pop(6)

0x10cd: @@ AddChild(Stack[-8])
0x10ce: Pop(0)
0x10cf: Push((int) 7)
0x10d0: @ SendWorldWndMessage(Stack[-1])
0x10d1: Pop(1)
0x10d2: @@ GetCategory(Stack[-1])
0x10d3: Pop(0)
0x10d4: @ SetDiarySection(Stack[-1])
0x10d5: Pop(0)
0x10d6: Stack[-9] = (bool) 0
0x10d7: Return(); Pop(6)

0x10d8: Stack[-2] = 0
0x10d9: Stack[-3] = 0
0x10da: PushEmpty(int, int)
0x10db: Push("branch")
0x10dc: @ GetVariable(Stack[-1], Stack[-2])
0x10dd: Pop(1)
0x10de: Push((int) 0)
0x10df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10e0: IF (Stack[-1] == 0) GOTO 0x10e4; Pop(1)

0x10e1: Stack[-3] = (int) 1
0x10e2: Return(); Pop(2)

0x10e3: GOTO 0x10e9

0x10e4: Push((int) 1)
0x10e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10e6: IF (Stack[-1] == 0) GOTO 0x10e9; Pop(1)

0x10e7: Stack[-3] = (int) 2
0x10e8: Return(); Pop(2)

0x10e9: Stack[-3] = (int) 3
0x10ea: Return(); Pop(2)

0x10eb: PushEmpty(int, int)
0x10ec: Push("mt_spi4ka")
0x10ed: @ GetVariable(Stack[-1], Stack[-2])
0x10ee: Pop(1)
0x10ef: Pop(0); Push((bool) Stack[-1] == 0)
0x10f0: IF (Stack[-1] == 0) GOTO 0x10fb; Pop(1)

0x10f1: PushEmpty(int, object)
0x10f2: Stack[-1] = Stack[-5]
0x10f3: Push(-2, 1); TaskCall(0)
0x10f4: Call2 0x0

0x10f5: Pop(-2, 1); TaskReturn
0x10f6: Pop(2)
0x10f7: Push("mt_spi4ka")
0x10f8: Push((int) 1)
0x10f9: @ SetVariable(Stack[-2], Stack[-1])
0x10fa: Pop(2)
0x10fb: PushEmpty(bool, int)
0x10fc: Stack[-1] = (int) 2
0x10fd: Call2 0xe90

0x10fe: Pop(1)
0x10ff: IF (Stack[-1] == 0) GOTO 0x1107; Pop(1)

0x1100: PushEmpty(int, object)
0x1101: Stack[-1] = Stack[-5]
0x1102: Push(-2, 1); TaskCall(2)
0x1103: Call2 0x124

0x1104: Pop(-2, 1); TaskReturn
0x1105: Pop(2)
0x1106: Return(); Pop(2)

0x1107: PushEmpty(bool, int)
0x1108: Stack[-1] = (int) 4
0x1109: Call2 0xe90

0x110a: Pop(1)
0x110b: IF (Stack[-1] == 0) GOTO 0x1113; Pop(1)

0x110c: PushEmpty(int, object)
0x110d: Stack[-1] = Stack[-5]
0x110e: Push(-2, 1); TaskCall(4)
0x110f: Call2 0x48a

0x1110: Pop(-2, 1); TaskReturn
0x1111: Pop(2)
0x1112: Return(); Pop(2)

0x1113: PushEmpty(bool, int)
0x1114: Stack[-1] = (int) 6
0x1115: Call2 0xe90

0x1116: Pop(1)
0x1117: IF (Stack[-1] == 0) GOTO 0x111f; Pop(1)

0x1118: PushEmpty(int, object)
0x1119: Stack[-1] = Stack[-5]
0x111a: Push(-2, 1); TaskCall(6)
0x111b: Call2 0x708

0x111c: Pop(-2, 1); TaskReturn
0x111d: Pop(2)
0x111e: Return(); Pop(2)

0x111f: PushEmpty(bool, int)
0x1120: Stack[-1] = (int) 12
0x1121: Call2 0xe90

0x1122: Pop(1)
0x1123: IF (Stack[-1] == 0) GOTO 0x112b; Pop(1)

0x1124: PushEmpty(int, object)
0x1125: Stack[-1] = Stack[-5]
0x1126: Push(-2, 1); TaskCall(8)
0x1127: Call2 0xa13

0x1128: Pop(-2, 1); TaskReturn
0x1129: Pop(2)
0x112a: Return(); Pop(2)

0x112b: PushEmpty(int, object)
0x112c: Stack[-1] = Stack[-5]
0x112d: Push(-2, 1); TaskCall(10)
0x112e: Call2 0xb16

0x112f: Pop(-2, 1); TaskReturn
0x1130: Pop(2)
0x1131: Return(); Pop(2)

