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
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Autizm
	Disturbance
	Pain
	Welldie
	player
	GetPosition
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	reputation
	ui/NPC_Laska.png
	ui/NPC_Laska_b.png
	lockpick1time is given
	lockpick
	uses
	playsound
	giveitem
	ood2Laska1
	ood2Laska2
	ood11Laska1
	bandage is given
	bandage
	tourniquet is given
	tourniquet
	powder is given
	powder
	ood6Laska1
	d6q01
	d6q01LaskaGotoAlbinos
	pt_d6q03_albinos
	AddMark
	quest_d6_01
	albinos_klara
	eva_klara
	KnowLaska
	ood3Laska1
	Knife is given
	Knife
	durability
	d6q03AlbinosKilled
	d11q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	branch
	mt_laska

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
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x9b3
RunTask = 14

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1c5 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x41b Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x55b Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x70f Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x820 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x989 Vars = (int, int)
	GTASK_14 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x9fc Vars = (int)
		EVENT_6 Op = 0xa22 Vars = ()
		EVENT_5 Op = 0xa31 Vars = ()
		EVENT_45 Op = 0xa3e Vars = (bool)
		EVENT_0 Op = 0xa4a Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xaf5

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xcbe

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xcbc

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xcc0

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xcc2

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xe10

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
0x31: Call2 0xc0b

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xb4c

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
0x48: Call2 0xb3a

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

0x57: PushEmpty(object, object)
0x58: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x59: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a: Call2 0xd48

0x5b: Pop(2)
0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral"
0x5e: Call2 0x90

0x5f: Pop(1)
0x60: Push((int) 500370)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 500371)
0x66: Push((int) 432)
0x67: Push((int) 430)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 500372)
0x6b: Push((int) 437)
0x6c: Push((int) 431)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0xcc4

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0xbd6

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
0x92: Call2 0xcc4

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
0xa2: Call2 0xbe6

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0xc04

0xab: Pop(0)
0xac: Push((int) 429)
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xaf: PushEmpty(object, object)
0xb0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2: Call2 0xd48

0xb3: Pop(2)
0xb4: PushEmpty(string)
0xb5: Stack[-1] = "Neutral"
0xb6: Call2 0x90

0xb7: Pop(1)
0xb8: Push((int) 500370)
0xb9: @@ SetMessage(Stack[-1])
0xba: Pop(1)
0xbb: @@ ClearReplies()
0xbc: Pop(0)
0xbd: Push((int) 500371)
0xbe: Push((int) 432)
0xbf: Push((int) 430)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: Push((int) 500372)
0xc3: Push((int) 437)
0xc4: Push((int) 431)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Return(); Pop(0)

0xc8: Push((int) 437)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0x90

0xce: Pop(1)
0xcf: Push((int) 500377)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 500378)
0xd5: Push((int) 432)
0xd6: Push((int) 438)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Return(); Pop(0)

0xda: Push((int) 432)
0xdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xdd: PushEmpty(string)
0xde: Stack[-1] = "Neutral"
0xdf: Call2 0x90

0xe0: Pop(1)
0xe1: Push((int) 500373)
0xe2: @@ SetMessage(Stack[-1])
0xe3: Pop(1)
0xe4: @@ ClearReplies()
0xe5: Pop(0)
0xe6: Push((int) 500374)
0xe7: Push((int) 435)
0xe8: Push((int) 433)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Push((int) 500375)
0xec: Push((int) 435)
0xed: Push((int) 434)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Return(); Pop(0)

0xf1: Push((int) 435)
0xf2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xf4: PushEmpty(string)
0xf5: Stack[-1] = "Neutral"
0xf6: Call2 0x90

0xf7: Pop(1)
0xf8: Push((int) 500376)
0xf9: @@ SetMessage(Stack[-1])
0xfa: Pop(1)
0xfb: @@ ClearReplies()
0xfc: Pop(0)
0xfd: Push((int) 500381)
0xfe: Push((int) -1)
0xff: Push((int) 442)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Push((int) 500379)
0x103: Push((int) -1)
0x104: Push((int) 440)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: Return(); Pop(0)

0x108: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x109: PushEmpty(bool)
0x10a: Call2 0xcc4

0x10b: Pop(0)
0x10c: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10d: @ lshStopAnimation()
0x10e: Pop(0)
0x10f: GOTO 0x112

0x110: @ StopAnimation()
0x111: Pop(0)
0x112: Return(); Pop(0)

0x113: GOTO 0xa7

0x114: Return(); Pop(0)

0x115: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x116: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x117: PushEmpty(bool, object, float)
0x118: Stack[-2] = Stack[-12]
0x119: Stack[-1] = (float) 70.0
0x11a: Call2 0xaf5

0x11b: Pop(2)
0x11c: Pop(1); Push((bool) Stack[-1] == 0)
0x11d: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11e: Stack[-10] = (int) -2
0x11f: Return(); Pop(8)

0x120: @ CreateDialog(Stack[-4])
0x121: Pop(0)
0x122: PushEmpty(int)
0x123: Call2 0xcbe

0x124: Pop(0)
0x125: @@ SetNPCName(Stack[-1])
0x126: Pop(1)
0x127: PushEmpty(int)
0x128: Call2 0xcbc

0x129: Pop(0)
0x12a: @@ SetNPCDescription(Stack[-1])
0x12b: Pop(1)
0x12c: PushEmpty(string)
0x12d: Call2 0xcc0

0x12e: Pop(0)
0x12f: @@ SetPhoto(Stack[-1])
0x130: Pop(1)
0x131: PushEmpty(string)
0x132: Call2 0xcc2

0x133: Pop(0)
0x134: @@ SetPhoto2(Stack[-1])
0x135: Pop(1)
0x136: PushEmpty(int)
0x137: Call2 0xe10

0x138: Pop(0)
0x139: @@ SetPlayerName(Stack[-1])
0x13a: Pop(1)
0x13b: Stack[-2] = (int) -1
0x13c: @ IsOverrideActive(Stack[-3])
0x13d: Pop(0)
0x13e: Push(Stack[-3])
0x13f: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x140: Stack[-10] = (int) -2
0x141: Return(); Pop(8)

0x142: @ DoDialog(Stack[-4])
0x143: Pop(0)
0x144: PushEmpty(bool, object)
0x145: PushEmpty(object)
0x146: Call2 0xc0b

0x147: Stack[-2] = Stack[-1]
0x148: Pop(1)
0x149: Call2 0xb4c

0x14a: Pop(2)
0x14b: PushEmpty(object, object)
0x14c: Stack[-2] = Stack[-11]
0x14d: Stack[-1] = Stack[-6]
0x14e: Push(-2, 4); TaskCall(3)
0x14f: Call2 0x166

0x150: Pop(-2, 4); TaskReturn
0x151: Pop(2)
0x152: @@ IsDialogEnd(Stack[-1])
0x153: Pop(0)
0x154: Pop(0); Push((bool) Stack[-1] == 0)
0x155: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x156: @ sync()
0x157: Pop(0)
0x158: @@ IsDialogEnd(Stack[-1])
0x159: Pop(0)
0x15a: GOTO 0x154

0x15b: PushEmpty(object)
0x15c: Stack[-1] = Stack[-10]
0x15d: Call2 0xb3a

0x15e: Pop(1)
0x15f: @ StopDialog(Stack[-4])
0x160: Pop(0)
0x161: @@ GetReturnValue(Stack[-2])
0x162: Pop(0)
0x163: Stack[-10] = Stack[-2]
0x164: Return(); Pop(8)

0x165: Stack[-4] = 0
0x166: PushEmpty()
0x167: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x168: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x169: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x16a: Push((int) 1)
0x16b: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Neutral"
0x16e: Call2 0x1af

0x16f: Pop(1)
0x170: Push((int) 509473)
0x171: @@ SetMessage(Stack[-1])
0x172: Pop(1)
0x173: @@ ClearReplies()
0x174: Pop(0)
0x175: PushEmpty(bool, object)
0x176: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x177: Call2 0xd69

0x178: Pop(1)
0x179: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17a: Push((int) 533914)
0x17b: Push((int) 35474)
0x17c: Push((int) 35473)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: PushEmpty(bool, object)
0x180: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x181: Call2 0xd75

0x182: Pop(1)
0x183: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x184: Push((int) 509474)
0x185: Push((int) 10417)
0x186: Push((int) 10416)
0x187: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x188: Pop(3)
0x189: Push((int) 509487)
0x18a: Push((int) -1)
0x18b: Push((int) 10429)
0x18c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18d: Pop(3)
0x18e: GOTO 0x191

0x18f: Return(); Pop(0)

0x190: GOTO 0x16a

0x191: PushEmpty(bool)
0x192: Call2 0xcc4

0x193: Pop(0)
0x194: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x195: @ lshWaitForAnimEnd()
0x196: Pop(0)
0x197: Push( Stack[3 + Tasks[-1].StackPointer] )
0x198: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x199: GOTO 0x19f

0x19a: PushEmpty(string)
0x19b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x19c: Call2 0xbd6

0x19d: Pop(1)
0x19e: GOTO 0x195

0x19f: GOTO 0x1ae

0x1a0: Push("all")
0x1a1: Push("idle")
0x1a2: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a3: Pop(2)
0x1a4: @ WaitForAnimEnd()
0x1a5: Pop(0)
0x1a6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a7: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a8: GOTO 0x1ae

0x1a9: Push("all")
0x1aa: Push("idle")
0x1ab: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ac: Pop(2)
0x1ad: GOTO 0x1a4

0x1ae: Return(); Pop(0)

0x1af: PushEmpty()
0x1b0: PushEmpty(bool)
0x1b1: Call2 0xcc4

0x1b2: Pop(0)
0x1b3: Pop(1); Push((bool) Stack[-1] == 0)
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b5: Return(); Pop(0)

0x1b6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: Return(); Pop(0)

0x1b9: PushEmpty(string, bool)
0x1ba: Stack[-2] = Stack[-3]
0x1bb: Push("")
0x1bc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1be: Stack[-1] = (bool) 0
0x1bf: GOTO 0x1c1

0x1c0: Stack[-1] = (bool) 1
0x1c1: Call2 0xbe6

0x1c2: Pop(2)
0x1c3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1c4: Return(); Pop(0)

0x1c5: PushEmpty()
0x1c6: Push((int) 1)
0x1c7: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x1c8: PushEmpty()
0x1c9: Call2 0xc04

0x1ca: Pop(0)
0x1cb: Push((int) 35473)
0x1cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1ce: PushEmpty(object, object)
0x1cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d1: Call2 0xce1

0x1d2: Pop(2)
0x1d3: Push((int) 35486)
0x1d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d6: PushEmpty(object, object)
0x1d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d9: Call2 0xcc6

0x1da: Pop(2)
0x1db: Push((int) 35487)
0x1dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1de: PushEmpty(object, object)
0x1df: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e1: Call2 0xcc6

0x1e2: Pop(2)
0x1e3: Push((int) 10416)
0x1e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e6: PushEmpty(object, object)
0x1e7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e9: Call2 0xce7

0x1ea: Pop(2)
0x1eb: Push((int) 10415)
0x1ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x1ee: PushEmpty(string)
0x1ef: Stack[-1] = "Neutral"
0x1f0: Call2 0x1af

0x1f1: Pop(1)
0x1f2: Push((int) 509473)
0x1f3: @@ SetMessage(Stack[-1])
0x1f4: Pop(1)
0x1f5: @@ ClearReplies()
0x1f6: Pop(0)
0x1f7: PushEmpty(bool, object)
0x1f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f9: Call2 0xd69

0x1fa: Pop(1)
0x1fb: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fc: Push((int) 533914)
0x1fd: Push((int) 35474)
0x1fe: Push((int) 35473)
0x1ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x200: Pop(3)
0x201: PushEmpty(bool, object)
0x202: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x203: Call2 0xd75

0x204: Pop(1)
0x205: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x206: Push((int) 509474)
0x207: Push((int) 10417)
0x208: Push((int) 10416)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: Push((int) 509487)
0x20c: Push((int) -1)
0x20d: Push((int) 10429)
0x20e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20f: Pop(3)
0x210: Return(); Pop(0)

0x211: Push((int) 10417)
0x212: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x214: PushEmpty(string)
0x215: Stack[-1] = "Autizm"
0x216: Call2 0x1af

0x217: Pop(1)
0x218: Push((int) 509475)
0x219: @@ SetMessage(Stack[-1])
0x21a: Pop(1)
0x21b: @@ ClearReplies()
0x21c: Pop(0)
0x21d: Push((int) 509476)
0x21e: Push((int) 10419)
0x21f: Push((int) 10418)
0x220: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x221: Pop(3)
0x222: Push((int) 509481)
0x223: Push((int) 10424)
0x224: Push((int) 10423)
0x225: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x226: Pop(3)
0x227: Return(); Pop(0)

0x228: Push((int) 10424)
0x229: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x22b: PushEmpty(string)
0x22c: Stack[-1] = "Autizm"
0x22d: Call2 0x1af

0x22e: Pop(1)
0x22f: Push((int) 509482)
0x230: @@ SetMessage(Stack[-1])
0x231: Pop(1)
0x232: @@ ClearReplies()
0x233: Pop(0)
0x234: Push((int) 509483)
0x235: Push((int) 10426)
0x236: Push((int) 10425)
0x237: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x238: Pop(3)
0x239: Return(); Pop(0)

0x23a: Push((int) 10426)
0x23b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x23d: PushEmpty(string)
0x23e: Stack[-1] = "Autizm"
0x23f: Call2 0x1af

0x240: Pop(1)
0x241: Push((int) 509484)
0x242: @@ SetMessage(Stack[-1])
0x243: Pop(1)
0x244: @@ ClearReplies()
0x245: Pop(0)
0x246: Push((int) 509485)
0x247: Push((int) -1)
0x248: Push((int) 10427)
0x249: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24a: Pop(3)
0x24b: Push((int) 509486)
0x24c: Push((int) -1)
0x24d: Push((int) 10428)
0x24e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24f: Pop(3)
0x250: Return(); Pop(0)

0x251: Push((int) 10419)
0x252: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x253: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x254: PushEmpty(string)
0x255: Stack[-1] = "Autizm"
0x256: Call2 0x1af

0x257: Pop(1)
0x258: Push((int) 509477)
0x259: @@ SetMessage(Stack[-1])
0x25a: Pop(1)
0x25b: @@ ClearReplies()
0x25c: Pop(0)
0x25d: Push((int) 509478)
0x25e: Push((int) -1)
0x25f: Push((int) 10420)
0x260: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x261: Pop(3)
0x262: Push((int) 509479)
0x263: Push((int) -1)
0x264: Push((int) 10421)
0x265: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x266: Pop(3)
0x267: Push((int) 509480)
0x268: Push((int) -1)
0x269: Push((int) 10422)
0x26a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26b: Pop(3)
0x26c: Return(); Pop(0)

0x26d: Push((int) 35474)
0x26e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x270: PushEmpty(string)
0x271: Stack[-1] = "Disturbance"
0x272: Call2 0x1af

0x273: Pop(1)
0x274: Push((int) 533915)
0x275: @@ SetMessage(Stack[-1])
0x276: Pop(1)
0x277: @@ ClearReplies()
0x278: Pop(0)
0x279: Push((int) 533916)
0x27a: Push((int) 35476)
0x27b: Push((int) 35475)
0x27c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27d: Pop(3)
0x27e: Push((int) 533923)
0x27f: Push((int) 35483)
0x280: Push((int) 35482)
0x281: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x282: Pop(3)
0x283: Return(); Pop(0)

0x284: Push((int) 35483)
0x285: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x286: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x287: PushEmpty(string)
0x288: Stack[-1] = "Disturbance"
0x289: Call2 0x1af

0x28a: Pop(1)
0x28b: Push((int) 533924)
0x28c: @@ SetMessage(Stack[-1])
0x28d: Pop(1)
0x28e: @@ ClearReplies()
0x28f: Pop(0)
0x290: Push((int) 533925)
0x291: Push((int) 35478)
0x292: Push((int) 35484)
0x293: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x294: Pop(3)
0x295: Return(); Pop(0)

0x296: Push((int) 35476)
0x297: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x299: PushEmpty(string)
0x29a: Stack[-1] = "Disturbance"
0x29b: Call2 0x1af

0x29c: Pop(1)
0x29d: Push((int) 533917)
0x29e: @@ SetMessage(Stack[-1])
0x29f: Pop(1)
0x2a0: @@ ClearReplies()
0x2a1: Pop(0)
0x2a2: Push((int) 533918)
0x2a3: Push((int) 35478)
0x2a4: Push((int) 35477)
0x2a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a6: Pop(3)
0x2a7: Push((int) 533936)
0x2a8: Push((int) 35499)
0x2a9: Push((int) 35498)
0x2aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ab: Pop(3)
0x2ac: Return(); Pop(0)

0x2ad: Push((int) 35499)
0x2ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2af: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2b0: PushEmpty(string)
0x2b1: Stack[-1] = "Disturbance"
0x2b2: Call2 0x1af

0x2b3: Pop(1)
0x2b4: Push((int) 533937)
0x2b5: @@ SetMessage(Stack[-1])
0x2b6: Pop(1)
0x2b7: @@ ClearReplies()
0x2b8: Pop(0)
0x2b9: Push((int) 533939)
0x2ba: Push((int) 35504)
0x2bb: Push((int) 35501)
0x2bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bd: Pop(3)
0x2be: Push((int) 533938)
0x2bf: Push((int) 35478)
0x2c0: Push((int) 35500)
0x2c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c2: Pop(3)
0x2c3: Return(); Pop(0)

0x2c4: Push((int) 35504)
0x2c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2c7: PushEmpty(string)
0x2c8: Stack[-1] = "Disturbance"
0x2c9: Call2 0x1af

0x2ca: Pop(1)
0x2cb: Push((int) 533940)
0x2cc: @@ SetMessage(Stack[-1])
0x2cd: Pop(1)
0x2ce: @@ ClearReplies()
0x2cf: Pop(0)
0x2d0: Push((int) 533941)
0x2d1: Push((int) 35506)
0x2d2: Push((int) 35505)
0x2d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d4: Pop(3)
0x2d5: Return(); Pop(0)

0x2d6: Push((int) 35506)
0x2d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2d9: PushEmpty(string)
0x2da: Stack[-1] = "Pain"
0x2db: Call2 0x1af

0x2dc: Pop(1)
0x2dd: Push((int) 533942)
0x2de: @@ SetMessage(Stack[-1])
0x2df: Pop(1)
0x2e0: @@ ClearReplies()
0x2e1: Pop(0)
0x2e2: Push((int) 533943)
0x2e3: Push((int) 35508)
0x2e4: Push((int) 35507)
0x2e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e6: Pop(3)
0x2e7: Push((int) 533948)
0x2e8: Push((int) 35510)
0x2e9: Push((int) 35512)
0x2ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2eb: Pop(3)
0x2ec: Return(); Pop(0)

0x2ed: Push((int) 35510)
0x2ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2f0: PushEmpty(string)
0x2f1: Stack[-1] = "Pain"
0x2f2: Call2 0x1af

0x2f3: Pop(1)
0x2f4: Push((int) 533946)
0x2f5: @@ SetMessage(Stack[-1])
0x2f6: Pop(1)
0x2f7: @@ ClearReplies()
0x2f8: Pop(0)
0x2f9: Push((int) 533947)
0x2fa: Push((int) -1)
0x2fb: Push((int) 35511)
0x2fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fd: Pop(3)
0x2fe: Return(); Pop(0)

0x2ff: Push((int) 35508)
0x300: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x301: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x302: PushEmpty(string)
0x303: Stack[-1] = "Pain"
0x304: Call2 0x1af

0x305: Pop(1)
0x306: Push((int) 533944)
0x307: @@ SetMessage(Stack[-1])
0x308: Pop(1)
0x309: @@ ClearReplies()
0x30a: Pop(0)
0x30b: Push((int) 533945)
0x30c: Push((int) -1)
0x30d: Push((int) 35509)
0x30e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30f: Pop(3)
0x310: Return(); Pop(0)

0x311: Push((int) 35478)
0x312: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x313: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x314: PushEmpty(string)
0x315: Stack[-1] = "Disturbance"
0x316: Call2 0x1af

0x317: Pop(1)
0x318: Push((int) 533919)
0x319: @@ SetMessage(Stack[-1])
0x31a: Pop(1)
0x31b: @@ ClearReplies()
0x31c: Pop(0)
0x31d: Push((int) 533922)
0x31e: Push((int) 35485)
0x31f: Push((int) 35481)
0x320: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x321: Pop(3)
0x322: Push((int) 533930)
0x323: Push((int) 35490)
0x324: Push((int) 35489)
0x325: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x326: Pop(3)
0x327: Return(); Pop(0)

0x328: Push((int) 35490)
0x329: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x32b: PushEmpty(string)
0x32c: Stack[-1] = "Welldie"
0x32d: Call2 0x1af

0x32e: Pop(1)
0x32f: Push((int) 533931)
0x330: @@ SetMessage(Stack[-1])
0x331: Pop(1)
0x332: @@ ClearReplies()
0x333: Pop(0)
0x334: Push((int) 533932)
0x335: Push((int) 35493)
0x336: Push((int) 35491)
0x337: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x338: Pop(3)
0x339: Push((int) 533934)
0x33a: Push((int) 35485)
0x33b: Push((int) 35494)
0x33c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33d: Pop(3)
0x33e: Return(); Pop(0)

0x33f: Push((int) 35493)
0x340: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x342: PushEmpty(string)
0x343: Stack[-1] = "Welldie"
0x344: Call2 0x1af

0x345: Pop(1)
0x346: Push((int) 533933)
0x347: @@ SetMessage(Stack[-1])
0x348: Pop(1)
0x349: @@ ClearReplies()
0x34a: Pop(0)
0x34b: Push((int) 533935)
0x34c: Push((int) 35485)
0x34d: Push((int) 35495)
0x34e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34f: Pop(3)
0x350: Return(); Pop(0)

0x351: Push((int) 35485)
0x352: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x354: PushEmpty(string)
0x355: Stack[-1] = "Neutral"
0x356: Call2 0x1af

0x357: Pop(1)
0x358: Push((int) 533926)
0x359: @@ SetMessage(Stack[-1])
0x35a: Pop(1)
0x35b: @@ ClearReplies()
0x35c: Pop(0)
0x35d: Push((int) 533927)
0x35e: Push((int) -1)
0x35f: Push((int) 35486)
0x360: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x361: Pop(3)
0x362: Push((int) 533928)
0x363: Push((int) -1)
0x364: Push((int) 35487)
0x365: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x366: Pop(3)
0x367: Return(); Pop(0)

0x368: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x369: PushEmpty(bool)
0x36a: Call2 0xcc4

0x36b: Pop(0)
0x36c: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36d: @ lshStopAnimation()
0x36e: Pop(0)
0x36f: GOTO 0x372

0x370: @ StopAnimation()
0x371: Pop(0)
0x372: Return(); Pop(0)

0x373: GOTO 0x1c6

0x374: Return(); Pop(0)

0x375: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x376: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x377: PushEmpty(bool, object, float)
0x378: Stack[-2] = Stack[-12]
0x379: Stack[-1] = (float) 70.0
0x37a: Call2 0xaf5

0x37b: Pop(2)
0x37c: Pop(1); Push((bool) Stack[-1] == 0)
0x37d: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37e: Stack[-10] = (int) -2
0x37f: Return(); Pop(8)

0x380: @ CreateDialog(Stack[-4])
0x381: Pop(0)
0x382: PushEmpty(int)
0x383: Call2 0xcbe

0x384: Pop(0)
0x385: @@ SetNPCName(Stack[-1])
0x386: Pop(1)
0x387: PushEmpty(int)
0x388: Call2 0xcbc

0x389: Pop(0)
0x38a: @@ SetNPCDescription(Stack[-1])
0x38b: Pop(1)
0x38c: PushEmpty(string)
0x38d: Call2 0xcc0

0x38e: Pop(0)
0x38f: @@ SetPhoto(Stack[-1])
0x390: Pop(1)
0x391: PushEmpty(string)
0x392: Call2 0xcc2

0x393: Pop(0)
0x394: @@ SetPhoto2(Stack[-1])
0x395: Pop(1)
0x396: PushEmpty(int)
0x397: Call2 0xe10

0x398: Pop(0)
0x399: @@ SetPlayerName(Stack[-1])
0x39a: Pop(1)
0x39b: Stack[-2] = (int) -1
0x39c: @ IsOverrideActive(Stack[-3])
0x39d: Pop(0)
0x39e: Push(Stack[-3])
0x39f: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x3a0: Stack[-10] = (int) -2
0x3a1: Return(); Pop(8)

0x3a2: @ DoDialog(Stack[-4])
0x3a3: Pop(0)
0x3a4: PushEmpty(bool, object)
0x3a5: PushEmpty(object)
0x3a6: Call2 0xc0b

0x3a7: Stack[-2] = Stack[-1]
0x3a8: Pop(1)
0x3a9: Call2 0xb4c

0x3aa: Pop(2)
0x3ab: PushEmpty(object, object)
0x3ac: Stack[-2] = Stack[-11]
0x3ad: Stack[-1] = Stack[-6]
0x3ae: Push(-2, 4); TaskCall(5)
0x3af: Call2 0x3c6

0x3b0: Pop(-2, 4); TaskReturn
0x3b1: Pop(2)
0x3b2: @@ IsDialogEnd(Stack[-1])
0x3b3: Pop(0)
0x3b4: Pop(0); Push((bool) Stack[-1] == 0)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b6: @ sync()
0x3b7: Pop(0)
0x3b8: @@ IsDialogEnd(Stack[-1])
0x3b9: Pop(0)
0x3ba: GOTO 0x3b4

0x3bb: PushEmpty(object)
0x3bc: Stack[-1] = Stack[-10]
0x3bd: Call2 0xb3a

0x3be: Pop(1)
0x3bf: @ StopDialog(Stack[-4])
0x3c0: Pop(0)
0x3c1: @@ GetReturnValue(Stack[-2])
0x3c2: Pop(0)
0x3c3: Stack[-10] = Stack[-2]
0x3c4: Return(); Pop(8)

0x3c5: Stack[-4] = 0
0x3c6: PushEmpty()
0x3c7: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3c8: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3c9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3ca: Push((int) 1)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3cc: PushEmpty(string)
0x3cd: Stack[-1] = "Pain"
0x3ce: Call2 0x405

0x3cf: Pop(1)
0x3d0: Push((int) 509951)
0x3d1: @@ SetMessage(Stack[-1])
0x3d2: Pop(1)
0x3d3: @@ ClearReplies()
0x3d4: Pop(0)
0x3d5: PushEmpty(bool, object)
0x3d6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d7: Call2 0xdbd

0x3d8: Pop(1)
0x3d9: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3da: Push((int) 509961)
0x3db: Push((int) 10970)
0x3dc: Push((int) 10978)
0x3dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3de: Pop(3)
0x3df: Push((int) 509952)
0x3e0: Push((int) -1)
0x3e1: Push((int) 10969)
0x3e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e3: Pop(3)
0x3e4: GOTO 0x3e7

0x3e5: Return(); Pop(0)

0x3e6: GOTO 0x3ca

0x3e7: PushEmpty(bool)
0x3e8: Call2 0xcc4

0x3e9: Pop(0)
0x3ea: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3eb: @ lshWaitForAnimEnd()
0x3ec: Pop(0)
0x3ed: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ef: GOTO 0x3f5

0x3f0: PushEmpty(string)
0x3f1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3f2: Call2 0xbd6

0x3f3: Pop(1)
0x3f4: GOTO 0x3eb

0x3f5: GOTO 0x404

0x3f6: Push("all")
0x3f7: Push("idle")
0x3f8: @ PlayAnimation(Stack[-2], Stack[-1])
0x3f9: Pop(2)
0x3fa: @ WaitForAnimEnd()
0x3fb: Pop(0)
0x3fc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3fd: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fe: GOTO 0x404

0x3ff: Push("all")
0x400: Push("idle")
0x401: @ PlayAnimation(Stack[-2], Stack[-1])
0x402: Pop(2)
0x403: GOTO 0x3fa

0x404: Return(); Pop(0)

0x405: PushEmpty()
0x406: PushEmpty(bool)
0x407: Call2 0xcc4

0x408: Pop(0)
0x409: Pop(1); Push((bool) Stack[-1] == 0)
0x40a: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x40b: Return(); Pop(0)

0x40c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x40d: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40e: Return(); Pop(0)

0x40f: PushEmpty(string, bool)
0x410: Stack[-2] = Stack[-3]
0x411: Push("")
0x412: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x413: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x414: Stack[-1] = (bool) 0
0x415: GOTO 0x417

0x416: Stack[-1] = (bool) 1
0x417: Call2 0xbe6

0x418: Pop(2)
0x419: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x41a: Return(); Pop(0)

0x41b: PushEmpty()
0x41c: Push((int) 1)
0x41d: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x41e: PushEmpty()
0x41f: Call2 0xc04

0x420: Pop(0)
0x421: Push((int) 10978)
0x422: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x423: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x424: PushEmpty(object, object)
0x425: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x426: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x427: Call2 0xd4e

0x428: Pop(2)
0x429: Push((int) 10976)
0x42a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x42b: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x42c: PushEmpty(object, object)
0x42d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x42e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x42f: Call2 0xd09

0x430: Pop(2)
0x431: PushEmpty(object, object)
0x432: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x433: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x434: Call2 0xcdb

0x435: Pop(2)
0x436: Push((int) 10977)
0x437: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x438: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x439: PushEmpty(object, object)
0x43a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x43b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x43c: Call2 0xd14

0x43d: Pop(2)
0x43e: Push((int) 10968)
0x43f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x441: PushEmpty(string)
0x442: Stack[-1] = "Pain"
0x443: Call2 0x405

0x444: Pop(1)
0x445: Push((int) 509951)
0x446: @@ SetMessage(Stack[-1])
0x447: Pop(1)
0x448: @@ ClearReplies()
0x449: Pop(0)
0x44a: PushEmpty(bool, object)
0x44b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x44c: Call2 0xdbd

0x44d: Pop(1)
0x44e: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x44f: Push((int) 509961)
0x450: Push((int) 10970)
0x451: Push((int) 10978)
0x452: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x453: Pop(3)
0x454: Push((int) 509952)
0x455: Push((int) -1)
0x456: Push((int) 10969)
0x457: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x458: Pop(3)
0x459: Return(); Pop(0)

0x45a: Push((int) 10970)
0x45b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45c: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x45d: PushEmpty(string)
0x45e: Stack[-1] = "Pain"
0x45f: Call2 0x405

0x460: Pop(1)
0x461: Push((int) 509953)
0x462: @@ SetMessage(Stack[-1])
0x463: Pop(1)
0x464: @@ ClearReplies()
0x465: Pop(0)
0x466: Push((int) 509954)
0x467: Push((int) -1)
0x468: Push((int) 10971)
0x469: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46a: Pop(3)
0x46b: Push((int) 509955)
0x46c: Push((int) 10973)
0x46d: Push((int) 10972)
0x46e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46f: Pop(3)
0x470: Return(); Pop(0)

0x471: Push((int) 10973)
0x472: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x473: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x474: PushEmpty(string)
0x475: Stack[-1] = "Pain"
0x476: Call2 0x405

0x477: Pop(1)
0x478: Push((int) 509956)
0x479: @@ SetMessage(Stack[-1])
0x47a: Pop(1)
0x47b: @@ ClearReplies()
0x47c: Pop(0)
0x47d: Push((int) 509957)
0x47e: Push((int) 10975)
0x47f: Push((int) 10974)
0x480: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x481: Pop(3)
0x482: Push((int) 534181)
0x483: Push((int) -1)
0x484: Push((int) 35764)
0x485: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x486: Pop(3)
0x487: Return(); Pop(0)

0x488: Push((int) 10975)
0x489: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48a: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x48b: PushEmpty(string)
0x48c: Stack[-1] = "Welldie"
0x48d: Call2 0x405

0x48e: Pop(1)
0x48f: Push((int) 509958)
0x490: @@ SetMessage(Stack[-1])
0x491: Pop(1)
0x492: @@ ClearReplies()
0x493: Pop(0)
0x494: Push((int) 509959)
0x495: Push((int) -1)
0x496: Push((int) 10976)
0x497: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x498: Pop(3)
0x499: Push((int) 509960)
0x49a: Push((int) -1)
0x49b: Push((int) 10977)
0x49c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49d: Pop(3)
0x49e: Return(); Pop(0)

0x49f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4a0: PushEmpty(bool)
0x4a1: Call2 0xcc4

0x4a2: Pop(0)
0x4a3: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a4: @ lshStopAnimation()
0x4a5: Pop(0)
0x4a6: GOTO 0x4a9

0x4a7: @ StopAnimation()
0x4a8: Pop(0)
0x4a9: Return(); Pop(0)

0x4aa: GOTO 0x41c

0x4ab: Return(); Pop(0)

0x4ac: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4ad: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4ae: PushEmpty(bool, object, float)
0x4af: Stack[-2] = Stack[-12]
0x4b0: Stack[-1] = (float) 70.0
0x4b1: Call2 0xaf5

0x4b2: Pop(2)
0x4b3: Pop(1); Push((bool) Stack[-1] == 0)
0x4b4: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b5: Stack[-10] = (int) -2
0x4b6: Return(); Pop(8)

0x4b7: @ CreateDialog(Stack[-4])
0x4b8: Pop(0)
0x4b9: PushEmpty(int)
0x4ba: Call2 0xcbe

0x4bb: Pop(0)
0x4bc: @@ SetNPCName(Stack[-1])
0x4bd: Pop(1)
0x4be: PushEmpty(int)
0x4bf: Call2 0xcbc

0x4c0: Pop(0)
0x4c1: @@ SetNPCDescription(Stack[-1])
0x4c2: Pop(1)
0x4c3: PushEmpty(string)
0x4c4: Call2 0xcc0

0x4c5: Pop(0)
0x4c6: @@ SetPhoto(Stack[-1])
0x4c7: Pop(1)
0x4c8: PushEmpty(string)
0x4c9: Call2 0xcc2

0x4ca: Pop(0)
0x4cb: @@ SetPhoto2(Stack[-1])
0x4cc: Pop(1)
0x4cd: PushEmpty(int)
0x4ce: Call2 0xe10

0x4cf: Pop(0)
0x4d0: @@ SetPlayerName(Stack[-1])
0x4d1: Pop(1)
0x4d2: Stack[-2] = (int) -1
0x4d3: @ IsOverrideActive(Stack[-3])
0x4d4: Pop(0)
0x4d5: Push(Stack[-3])
0x4d6: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d7: Stack[-10] = (int) -2
0x4d8: Return(); Pop(8)

0x4d9: @ DoDialog(Stack[-4])
0x4da: Pop(0)
0x4db: PushEmpty(bool, object)
0x4dc: PushEmpty(object)
0x4dd: Call2 0xc0b

0x4de: Stack[-2] = Stack[-1]
0x4df: Pop(1)
0x4e0: Call2 0xb4c

0x4e1: Pop(2)
0x4e2: PushEmpty(object, object)
0x4e3: Stack[-2] = Stack[-11]
0x4e4: Stack[-1] = Stack[-6]
0x4e5: Push(-2, 4); TaskCall(7)
0x4e6: Call2 0x4fd

0x4e7: Pop(-2, 4); TaskReturn
0x4e8: Pop(2)
0x4e9: @@ IsDialogEnd(Stack[-1])
0x4ea: Pop(0)
0x4eb: Pop(0); Push((bool) Stack[-1] == 0)
0x4ec: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4ed: @ sync()
0x4ee: Pop(0)
0x4ef: @@ IsDialogEnd(Stack[-1])
0x4f0: Pop(0)
0x4f1: GOTO 0x4eb

0x4f2: PushEmpty(object)
0x4f3: Stack[-1] = Stack[-10]
0x4f4: Call2 0xb3a

0x4f5: Pop(1)
0x4f6: @ StopDialog(Stack[-4])
0x4f7: Pop(0)
0x4f8: @@ GetReturnValue(Stack[-2])
0x4f9: Pop(0)
0x4fa: Stack[-10] = Stack[-2]
0x4fb: Return(); Pop(8)

0x4fc: Stack[-4] = 0
0x4fd: PushEmpty()
0x4fe: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4ff: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x500: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x501: Push((int) 1)
0x502: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x503: PushEmpty(string)
0x504: Stack[-1] = "Neutral"
0x505: Call2 0x545

0x506: Pop(1)
0x507: Push((int) 512815)
0x508: @@ SetMessage(Stack[-1])
0x509: Pop(1)
0x50a: @@ ClearReplies()
0x50b: Pop(0)
0x50c: PushEmpty(bool)
0x50d: Stack[-1] = (bool) 0
0x50e: PushEmpty(bool, object)
0x50f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x510: Call2 0xd99

0x511: Pop(1)
0x512: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x513: PushEmpty(bool, object)
0x514: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x515: Call2 0xda5

0x516: Pop(1)
0x517: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x518: Stack[-1] = (bool) 1
0x519: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51a: Push((int) 512816)
0x51b: Push((int) 14017)
0x51c: Push((int) 14016)
0x51d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51e: Pop(3)
0x51f: Push((int) 512828)
0x520: Push((int) -1)
0x521: Push((int) 14028)
0x522: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x523: Pop(3)
0x524: GOTO 0x527

0x525: Return(); Pop(0)

0x526: GOTO 0x501

0x527: PushEmpty(bool)
0x528: Call2 0xcc4

0x529: Pop(0)
0x52a: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x52b: @ lshWaitForAnimEnd()
0x52c: Pop(0)
0x52d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x52e: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x52f: GOTO 0x535

0x530: PushEmpty(string)
0x531: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x532: Call2 0xbd6

0x533: Pop(1)
0x534: GOTO 0x52b

0x535: GOTO 0x544

0x536: Push("all")
0x537: Push("idle")
0x538: @ PlayAnimation(Stack[-2], Stack[-1])
0x539: Pop(2)
0x53a: @ WaitForAnimEnd()
0x53b: Pop(0)
0x53c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x53d: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53e: GOTO 0x544

0x53f: Push("all")
0x540: Push("idle")
0x541: @ PlayAnimation(Stack[-2], Stack[-1])
0x542: Pop(2)
0x543: GOTO 0x53a

0x544: Return(); Pop(0)

0x545: PushEmpty()
0x546: PushEmpty(bool)
0x547: Call2 0xcc4

0x548: Pop(0)
0x549: Pop(1); Push((bool) Stack[-1] == 0)
0x54a: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x54b: Return(); Pop(0)

0x54c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x54d: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54e: Return(); Pop(0)

0x54f: PushEmpty(string, bool)
0x550: Stack[-2] = Stack[-3]
0x551: Push("")
0x552: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x553: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x554: Stack[-1] = (bool) 0
0x555: GOTO 0x557

0x556: Stack[-1] = (bool) 1
0x557: Call2 0xbe6

0x558: Pop(2)
0x559: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x55a: Return(); Pop(0)

0x55b: PushEmpty()
0x55c: Push((int) 1)
0x55d: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x55e: PushEmpty()
0x55f: Call2 0xc04

0x560: Pop(0)
0x561: Push((int) 14233)
0x562: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x563: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x564: PushEmpty(object, object)
0x565: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x566: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x567: Call2 0xd1b

0x568: Pop(2)
0x569: PushEmpty(object, object)
0x56a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x56b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x56c: Call2 0xd3d

0x56d: Pop(2)
0x56e: Push((int) 14234)
0x56f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x570: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x571: PushEmpty(object, object)
0x572: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x573: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x574: Call2 0xd1b

0x575: Pop(2)
0x576: PushEmpty(object, object)
0x577: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x578: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x579: Call2 0xd3d

0x57a: Pop(2)
0x57b: Push((int) 14027)
0x57c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x57d: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x57e: PushEmpty(object, object)
0x57f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x580: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x581: Call2 0xd1b

0x582: Pop(2)
0x583: PushEmpty(object, object)
0x584: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x585: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x586: Call2 0xd21

0x587: Pop(2)
0x588: Push((int) 14026)
0x589: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x58a: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x58b: PushEmpty(object, object)
0x58c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x58d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58e: Call2 0xd1b

0x58f: Pop(2)
0x590: PushEmpty(object, object)
0x591: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x592: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x593: Call2 0xd21

0x594: Pop(2)
0x595: Push((int) 14015)
0x596: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x597: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x598: PushEmpty(string)
0x599: Stack[-1] = "Neutral"
0x59a: Call2 0x545

0x59b: Pop(1)
0x59c: Push((int) 512815)
0x59d: @@ SetMessage(Stack[-1])
0x59e: Pop(1)
0x59f: @@ ClearReplies()
0x5a0: Pop(0)
0x5a1: PushEmpty(bool)
0x5a2: Stack[-1] = (bool) 0
0x5a3: PushEmpty(bool, object)
0x5a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a5: Call2 0xd99

0x5a6: Pop(1)
0x5a7: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5a8: PushEmpty(bool, object)
0x5a9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5aa: Call2 0xda5

0x5ab: Pop(1)
0x5ac: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5ad: Stack[-1] = (bool) 1
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5af: Push((int) 512816)
0x5b0: Push((int) 14017)
0x5b1: Push((int) 14016)
0x5b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b3: Pop(3)
0x5b4: Push((int) 512828)
0x5b5: Push((int) -1)
0x5b6: Push((int) 14028)
0x5b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b8: Pop(3)
0x5b9: Return(); Pop(0)

0x5ba: Push((int) 14017)
0x5bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5bd: PushEmpty(bool, object)
0x5be: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5bf: Call2 0xd8d

0x5c0: Pop(1)
0x5c1: Pop(1); Push((bool) Stack[-1] == 0)
0x5c2: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5c3: PushEmpty(string)
0x5c4: Stack[-1] = "Disturbance"
0x5c5: Call2 0x545

0x5c6: Pop(1)
0x5c7: Push((int) 512817)
0x5c8: @@ SetMessage(Stack[-1])
0x5c9: Pop(1)
0x5ca: @@ ClearReplies()
0x5cb: Pop(0)
0x5cc: Push((int) 513022)
0x5cd: Push((int) 14230)
0x5ce: Push((int) 14229)
0x5cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d0: Pop(3)
0x5d1: Return(); Pop(0)

0x5d2: PushEmpty(bool, object)
0x5d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d4: Call2 0xd8d

0x5d5: Pop(1)
0x5d6: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5d7: PushEmpty(string)
0x5d8: Stack[-1] = "Welldie"
0x5d9: Call2 0x545

0x5da: Pop(1)
0x5db: Push((int) 513021)
0x5dc: @@ SetMessage(Stack[-1])
0x5dd: Pop(1)
0x5de: @@ ClearReplies()
0x5df: Pop(0)
0x5e0: Push((int) 512818)
0x5e1: Push((int) 14019)
0x5e2: Push((int) 14018)
0x5e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e4: Pop(3)
0x5e5: Return(); Pop(0)

0x5e6: Push((int) 14019)
0x5e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e8: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5e9: PushEmpty(string)
0x5ea: Stack[-1] = "Welldie"
0x5eb: Call2 0x545

0x5ec: Pop(1)
0x5ed: Push((int) 512819)
0x5ee: @@ SetMessage(Stack[-1])
0x5ef: Pop(1)
0x5f0: @@ ClearReplies()
0x5f1: Pop(0)
0x5f2: Push((int) 512820)
0x5f3: Push((int) 14021)
0x5f4: Push((int) 14020)
0x5f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f6: Pop(3)
0x5f7: Return(); Pop(0)

0x5f8: Push((int) 14021)
0x5f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5fa: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x5fb: PushEmpty(string)
0x5fc: Stack[-1] = "Neutral"
0x5fd: Call2 0x545

0x5fe: Pop(1)
0x5ff: Push((int) 512821)
0x600: @@ SetMessage(Stack[-1])
0x601: Pop(1)
0x602: @@ ClearReplies()
0x603: Pop(0)
0x604: Push((int) 512822)
0x605: Push((int) 14023)
0x606: Push((int) 14022)
0x607: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x608: Pop(3)
0x609: Return(); Pop(0)

0x60a: Push((int) 14023)
0x60b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x60c: IF (Stack[-1] == 0) GOTO 0x621; Pop(1)

0x60d: PushEmpty(string)
0x60e: Stack[-1] = "Autizm"
0x60f: Call2 0x545

0x610: Pop(1)
0x611: Push((int) 512823)
0x612: @@ SetMessage(Stack[-1])
0x613: Pop(1)
0x614: @@ ClearReplies()
0x615: Pop(0)
0x616: Push((int) 512824)
0x617: Push((int) 14025)
0x618: Push((int) 14024)
0x619: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61a: Pop(3)
0x61b: Push((int) 512826)
0x61c: Push((int) -1)
0x61d: Push((int) 14026)
0x61e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61f: Pop(3)
0x620: Return(); Pop(0)

0x621: Push((int) 14025)
0x622: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x623: IF (Stack[-1] == 0) GOTO 0x633; Pop(1)

0x624: PushEmpty(string)
0x625: Stack[-1] = "Autizm"
0x626: Call2 0x545

0x627: Pop(1)
0x628: Push((int) 512825)
0x629: @@ SetMessage(Stack[-1])
0x62a: Pop(1)
0x62b: @@ ClearReplies()
0x62c: Pop(0)
0x62d: Push((int) 512827)
0x62e: Push((int) -1)
0x62f: Push((int) 14027)
0x630: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x631: Pop(3)
0x632: Return(); Pop(0)

0x633: Push((int) 14230)
0x634: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x635: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x636: PushEmpty(string)
0x637: Stack[-1] = "Disturbance"
0x638: Call2 0x545

0x639: Pop(1)
0x63a: Push((int) 513023)
0x63b: @@ SetMessage(Stack[-1])
0x63c: Pop(1)
0x63d: @@ ClearReplies()
0x63e: Pop(0)
0x63f: Push((int) 513024)
0x640: Push((int) 14232)
0x641: Push((int) 14231)
0x642: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x643: Pop(3)
0x644: Push((int) 513027)
0x645: Push((int) -1)
0x646: Push((int) 14234)
0x647: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x648: Pop(3)
0x649: Return(); Pop(0)

0x64a: Push((int) 14232)
0x64b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x64c: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x64d: PushEmpty(string)
0x64e: Stack[-1] = "Autizm"
0x64f: Call2 0x545

0x650: Pop(1)
0x651: Push((int) 513025)
0x652: @@ SetMessage(Stack[-1])
0x653: Pop(1)
0x654: @@ ClearReplies()
0x655: Pop(0)
0x656: Push((int) 513026)
0x657: Push((int) -1)
0x658: Push((int) 14233)
0x659: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65a: Pop(3)
0x65b: Return(); Pop(0)

0x65c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x65d: PushEmpty(bool)
0x65e: Call2 0xcc4

0x65f: Pop(0)
0x660: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x661: @ lshStopAnimation()
0x662: Pop(0)
0x663: GOTO 0x666

0x664: @ StopAnimation()
0x665: Pop(0)
0x666: Return(); Pop(0)

0x667: GOTO 0x55c

0x668: Return(); Pop(0)

0x669: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x66a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x66b: PushEmpty(bool, object, float)
0x66c: Stack[-2] = Stack[-12]
0x66d: Stack[-1] = (float) 70.0
0x66e: Call2 0xaf5

0x66f: Pop(2)
0x670: Pop(1); Push((bool) Stack[-1] == 0)
0x671: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x672: Stack[-10] = (int) -2
0x673: Return(); Pop(8)

0x674: @ CreateDialog(Stack[-4])
0x675: Pop(0)
0x676: PushEmpty(int)
0x677: Call2 0xcbe

0x678: Pop(0)
0x679: @@ SetNPCName(Stack[-1])
0x67a: Pop(1)
0x67b: PushEmpty(int)
0x67c: Call2 0xcbc

0x67d: Pop(0)
0x67e: @@ SetNPCDescription(Stack[-1])
0x67f: Pop(1)
0x680: PushEmpty(string)
0x681: Call2 0xcc0

0x682: Pop(0)
0x683: @@ SetPhoto(Stack[-1])
0x684: Pop(1)
0x685: PushEmpty(string)
0x686: Call2 0xcc2

0x687: Pop(0)
0x688: @@ SetPhoto2(Stack[-1])
0x689: Pop(1)
0x68a: PushEmpty(int)
0x68b: Call2 0xe10

0x68c: Pop(0)
0x68d: @@ SetPlayerName(Stack[-1])
0x68e: Pop(1)
0x68f: Stack[-2] = (int) -1
0x690: @ IsOverrideActive(Stack[-3])
0x691: Pop(0)
0x692: Push(Stack[-3])
0x693: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x694: Stack[-10] = (int) -2
0x695: Return(); Pop(8)

0x696: @ DoDialog(Stack[-4])
0x697: Pop(0)
0x698: PushEmpty(bool, object)
0x699: PushEmpty(object)
0x69a: Call2 0xc0b

0x69b: Stack[-2] = Stack[-1]
0x69c: Pop(1)
0x69d: Call2 0xb4c

0x69e: Pop(2)
0x69f: PushEmpty(object, object)
0x6a0: Stack[-2] = Stack[-11]
0x6a1: Stack[-1] = Stack[-6]
0x6a2: Push(-2, 4); TaskCall(9)
0x6a3: Call2 0x6ba

0x6a4: Pop(-2, 4); TaskReturn
0x6a5: Pop(2)
0x6a6: @@ IsDialogEnd(Stack[-1])
0x6a7: Pop(0)
0x6a8: Pop(0); Push((bool) Stack[-1] == 0)
0x6a9: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x6aa: @ sync()
0x6ab: Pop(0)
0x6ac: @@ IsDialogEnd(Stack[-1])
0x6ad: Pop(0)
0x6ae: GOTO 0x6a8

0x6af: PushEmpty(object)
0x6b0: Stack[-1] = Stack[-10]
0x6b1: Call2 0xb3a

0x6b2: Pop(1)
0x6b3: @ StopDialog(Stack[-4])
0x6b4: Pop(0)
0x6b5: @@ GetReturnValue(Stack[-2])
0x6b6: Pop(0)
0x6b7: Stack[-10] = Stack[-2]
0x6b8: Return(); Pop(8)

0x6b9: Stack[-4] = 0
0x6ba: PushEmpty()
0x6bb: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x6bc: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x6bd: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6be: Push((int) 1)
0x6bf: IF (Stack[-1] == 0) GOTO 0x6db; Pop(1)

0x6c0: PushEmpty(string)
0x6c1: Stack[-1] = "Neutral"
0x6c2: Call2 0x6f9

0x6c3: Pop(1)
0x6c4: Push((int) 535284)
0x6c5: @@ SetMessage(Stack[-1])
0x6c6: Pop(1)
0x6c7: @@ ClearReplies()
0x6c8: Pop(0)
0x6c9: Push((int) 535285)
0x6ca: Push((int) 36962)
0x6cb: Push((int) 36961)
0x6cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cd: Pop(3)
0x6ce: Push((int) 535292)
0x6cf: Push((int) -1)
0x6d0: Push((int) 36968)
0x6d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d2: Pop(3)
0x6d3: Push((int) 535293)
0x6d4: Push((int) -1)
0x6d5: Push((int) 36969)
0x6d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d7: Pop(3)
0x6d8: GOTO 0x6db

0x6d9: Return(); Pop(0)

0x6da: GOTO 0x6be

0x6db: PushEmpty(bool)
0x6dc: Call2 0xcc4

0x6dd: Pop(0)
0x6de: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6df: @ lshWaitForAnimEnd()
0x6e0: Pop(0)
0x6e1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6e2: IF (Stack[-1] == 0) GOTO 0x6e4; Pop(1)

0x6e3: GOTO 0x6e9

0x6e4: PushEmpty(string)
0x6e5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6e6: Call2 0xbd6

0x6e7: Pop(1)
0x6e8: GOTO 0x6df

0x6e9: GOTO 0x6f8

0x6ea: Push("all")
0x6eb: Push("idle")
0x6ec: @ PlayAnimation(Stack[-2], Stack[-1])
0x6ed: Pop(2)
0x6ee: @ WaitForAnimEnd()
0x6ef: Pop(0)
0x6f0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6f2: GOTO 0x6f8

0x6f3: Push("all")
0x6f4: Push("idle")
0x6f5: @ PlayAnimation(Stack[-2], Stack[-1])
0x6f6: Pop(2)
0x6f7: GOTO 0x6ee

0x6f8: Return(); Pop(0)

0x6f9: PushEmpty()
0x6fa: PushEmpty(bool)
0x6fb: Call2 0xcc4

0x6fc: Pop(0)
0x6fd: Pop(1); Push((bool) Stack[-1] == 0)
0x6fe: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6ff: Return(); Pop(0)

0x700: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x701: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x702: Return(); Pop(0)

0x703: PushEmpty(string, bool)
0x704: Stack[-2] = Stack[-3]
0x705: Push("")
0x706: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x707: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x708: Stack[-1] = (bool) 0
0x709: GOTO 0x70b

0x70a: Stack[-1] = (bool) 1
0x70b: Call2 0xbe6

0x70c: Pop(2)
0x70d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x70e: Return(); Pop(0)

0x70f: PushEmpty()
0x710: Push((int) 1)
0x711: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x712: PushEmpty()
0x713: Call2 0xc04

0x714: Pop(0)
0x715: Push((int) 36960)
0x716: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x717: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x718: PushEmpty(string)
0x719: Stack[-1] = "Neutral"
0x71a: Call2 0x6f9

0x71b: Pop(1)
0x71c: Push((int) 535284)
0x71d: @@ SetMessage(Stack[-1])
0x71e: Pop(1)
0x71f: @@ ClearReplies()
0x720: Pop(0)
0x721: Push((int) 535285)
0x722: Push((int) 36962)
0x723: Push((int) 36961)
0x724: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x725: Pop(3)
0x726: Push((int) 535292)
0x727: Push((int) -1)
0x728: Push((int) 36968)
0x729: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72a: Pop(3)
0x72b: Push((int) 535293)
0x72c: Push((int) -1)
0x72d: Push((int) 36969)
0x72e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72f: Pop(3)
0x730: Return(); Pop(0)

0x731: Push((int) 36962)
0x732: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x733: IF (Stack[-1] == 0) GOTO 0x748; Pop(1)

0x734: PushEmpty(string)
0x735: Stack[-1] = "Neutral"
0x736: Call2 0x6f9

0x737: Pop(1)
0x738: Push((int) 535286)
0x739: @@ SetMessage(Stack[-1])
0x73a: Pop(1)
0x73b: @@ ClearReplies()
0x73c: Pop(0)
0x73d: Push((int) 535287)
0x73e: Push((int) 36964)
0x73f: Push((int) 36963)
0x740: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x741: Pop(3)
0x742: Push((int) 535291)
0x743: Push((int) -1)
0x744: Push((int) 36967)
0x745: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x746: Pop(3)
0x747: Return(); Pop(0)

0x748: Push((int) 36964)
0x749: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x74a: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x74b: PushEmpty(string)
0x74c: Stack[-1] = "Neutral"
0x74d: Call2 0x6f9

0x74e: Pop(1)
0x74f: Push((int) 535288)
0x750: @@ SetMessage(Stack[-1])
0x751: Pop(1)
0x752: @@ ClearReplies()
0x753: Pop(0)
0x754: Push((int) 535289)
0x755: Push((int) -1)
0x756: Push((int) 36965)
0x757: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x758: Pop(3)
0x759: Push((int) 535290)
0x75a: Push((int) -1)
0x75b: Push((int) 36966)
0x75c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75d: Pop(3)
0x75e: Return(); Pop(0)

0x75f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x760: PushEmpty(bool)
0x761: Call2 0xcc4

0x762: Pop(0)
0x763: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x764: @ lshStopAnimation()
0x765: Pop(0)
0x766: GOTO 0x769

0x767: @ StopAnimation()
0x768: Pop(0)
0x769: Return(); Pop(0)

0x76a: GOTO 0x710

0x76b: Return(); Pop(0)

0x76c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x76d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x76e: PushEmpty(bool, object, float)
0x76f: Stack[-2] = Stack[-12]
0x770: Stack[-1] = (float) 70.0
0x771: Call2 0xaf5

0x772: Pop(2)
0x773: Pop(1); Push((bool) Stack[-1] == 0)
0x774: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x775: Stack[-10] = (int) -2
0x776: Return(); Pop(8)

0x777: @ CreateDialog(Stack[-4])
0x778: Pop(0)
0x779: PushEmpty(int)
0x77a: Call2 0xcbe

0x77b: Pop(0)
0x77c: @@ SetNPCName(Stack[-1])
0x77d: Pop(1)
0x77e: PushEmpty(int)
0x77f: Call2 0xcbc

0x780: Pop(0)
0x781: @@ SetNPCDescription(Stack[-1])
0x782: Pop(1)
0x783: PushEmpty(string)
0x784: Call2 0xcc0

0x785: Pop(0)
0x786: @@ SetPhoto(Stack[-1])
0x787: Pop(1)
0x788: PushEmpty(string)
0x789: Call2 0xcc2

0x78a: Pop(0)
0x78b: @@ SetPhoto2(Stack[-1])
0x78c: Pop(1)
0x78d: PushEmpty(int)
0x78e: Call2 0xe10

0x78f: Pop(0)
0x790: @@ SetPlayerName(Stack[-1])
0x791: Pop(1)
0x792: Stack[-2] = (int) -1
0x793: @ IsOverrideActive(Stack[-3])
0x794: Pop(0)
0x795: Push(Stack[-3])
0x796: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x797: Stack[-10] = (int) -2
0x798: Return(); Pop(8)

0x799: @ DoDialog(Stack[-4])
0x79a: Pop(0)
0x79b: PushEmpty(bool, object)
0x79c: PushEmpty(object)
0x79d: Call2 0xc0b

0x79e: Stack[-2] = Stack[-1]
0x79f: Pop(1)
0x7a0: Call2 0xb4c

0x7a1: Pop(2)
0x7a2: PushEmpty(object, object)
0x7a3: Stack[-2] = Stack[-11]
0x7a4: Stack[-1] = Stack[-6]
0x7a5: Push(-2, 4); TaskCall(11)
0x7a6: Call2 0x7bd

0x7a7: Pop(-2, 4); TaskReturn
0x7a8: Pop(2)
0x7a9: @@ IsDialogEnd(Stack[-1])
0x7aa: Pop(0)
0x7ab: Pop(0); Push((bool) Stack[-1] == 0)
0x7ac: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7ad: @ sync()
0x7ae: Pop(0)
0x7af: @@ IsDialogEnd(Stack[-1])
0x7b0: Pop(0)
0x7b1: GOTO 0x7ab

0x7b2: PushEmpty(object)
0x7b3: Stack[-1] = Stack[-10]
0x7b4: Call2 0xb3a

0x7b5: Pop(1)
0x7b6: @ StopDialog(Stack[-4])
0x7b7: Pop(0)
0x7b8: @@ GetReturnValue(Stack[-2])
0x7b9: Pop(0)
0x7ba: Stack[-10] = Stack[-2]
0x7bb: Return(); Pop(8)

0x7bc: Stack[-4] = 0
0x7bd: PushEmpty()
0x7be: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7bf: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x7c0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7c1: Push((int) 1)
0x7c2: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7c3: PushEmpty(string)
0x7c4: Stack[-1] = "Pain"
0x7c5: Call2 0x80a

0x7c6: Pop(1)
0x7c7: Push((int) 540043)
0x7c8: @@ SetMessage(Stack[-1])
0x7c9: Pop(1)
0x7ca: @@ ClearReplies()
0x7cb: Pop(0)
0x7cc: PushEmpty(bool)
0x7cd: Stack[-1] = (bool) 0
0x7ce: PushEmpty(bool, object)
0x7cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d0: Call2 0xdb1

0x7d1: Pop(1)
0x7d2: IF (Stack[-1] == 0) GOTO 0x7d9; Pop(1)

0x7d3: PushEmpty(bool, object)
0x7d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d5: Call2 0xd81

0x7d6: Pop(1)
0x7d7: IF (Stack[-1] == 0) GOTO 0x7d9; Pop(1)

0x7d8: Stack[-1] = (bool) 1
0x7d9: IF (Stack[-1] == 0) GOTO 0x7df; Pop(1)

0x7da: Push((int) 540045)
0x7db: Push((int) 42013)
0x7dc: Push((int) 42012)
0x7dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7de: Pop(3)
0x7df: Push((int) 540044)
0x7e0: Push((int) -1)
0x7e1: Push((int) 42011)
0x7e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e3: Pop(3)
0x7e4: Push((int) 540060)
0x7e5: Push((int) -1)
0x7e6: Push((int) 42029)
0x7e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e8: Pop(3)
0x7e9: GOTO 0x7ec

0x7ea: Return(); Pop(0)

0x7eb: GOTO 0x7c1

0x7ec: PushEmpty(bool)
0x7ed: Call2 0xcc4

0x7ee: Pop(0)
0x7ef: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7f0: @ lshWaitForAnimEnd()
0x7f1: Pop(0)
0x7f2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7f3: IF (Stack[-1] == 0) GOTO 0x7f5; Pop(1)

0x7f4: GOTO 0x7fa

0x7f5: PushEmpty(string)
0x7f6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7f7: Call2 0xbd6

0x7f8: Pop(1)
0x7f9: GOTO 0x7f0

0x7fa: GOTO 0x809

0x7fb: Push("all")
0x7fc: Push("idle")
0x7fd: @ PlayAnimation(Stack[-2], Stack[-1])
0x7fe: Pop(2)
0x7ff: @ WaitForAnimEnd()
0x800: Pop(0)
0x801: Push( Stack[3 + Tasks[-1].StackPointer] )
0x802: IF (Stack[-1] == 0) GOTO 0x804; Pop(1)

0x803: GOTO 0x809

0x804: Push("all")
0x805: Push("idle")
0x806: @ PlayAnimation(Stack[-2], Stack[-1])
0x807: Pop(2)
0x808: GOTO 0x7ff

0x809: Return(); Pop(0)

0x80a: PushEmpty()
0x80b: PushEmpty(bool)
0x80c: Call2 0xcc4

0x80d: Pop(0)
0x80e: Pop(1); Push((bool) Stack[-1] == 0)
0x80f: IF (Stack[-1] == 0) GOTO 0x811; Pop(1)

0x810: Return(); Pop(0)

0x811: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x812: IF (Stack[-1] == 0) GOTO 0x814; Pop(1)

0x813: Return(); Pop(0)

0x814: PushEmpty(string, bool)
0x815: Stack[-2] = Stack[-3]
0x816: Push("")
0x817: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x818: IF (Stack[-1] == 0) GOTO 0x81b; Pop(1)

0x819: Stack[-1] = (bool) 0
0x81a: GOTO 0x81c

0x81b: Stack[-1] = (bool) 1
0x81c: Call2 0xbe6

0x81d: Pop(2)
0x81e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x81f: Return(); Pop(0)

0x820: PushEmpty()
0x821: Push((int) 1)
0x822: IF (Stack[-1] == 0) GOTO 0x8e7; Pop(1)

0x823: PushEmpty()
0x824: Call2 0xc04

0x825: Pop(0)
0x826: Push((int) 42012)
0x827: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x828: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x829: PushEmpty(object, object)
0x82a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x82b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x82c: Call2 0xced

0x82d: Pop(2)
0x82e: Push((int) 42025)
0x82f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x830: IF (Stack[-1] == 0) GOTO 0x836; Pop(1)

0x831: PushEmpty(object, object)
0x832: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x833: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x834: Call2 0xd54

0x835: Pop(2)
0x836: Push((int) 42026)
0x837: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x838: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x839: PushEmpty(object, object)
0x83a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x83b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x83c: Call2 0xd54

0x83d: Pop(2)
0x83e: PushEmpty(object, object)
0x83f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x840: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x841: Call2 0xcfe

0x842: Pop(2)
0x843: PushEmpty(object, object)
0x844: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x845: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x846: Call2 0xcf3

0x847: Pop(2)
0x848: Push((int) 42010)
0x849: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x84a: IF (Stack[-1] == 0) GOTO 0x872; Pop(1)

0x84b: PushEmpty(string)
0x84c: Stack[-1] = "Pain"
0x84d: Call2 0x80a

0x84e: Pop(1)
0x84f: Push((int) 540043)
0x850: @@ SetMessage(Stack[-1])
0x851: Pop(1)
0x852: @@ ClearReplies()
0x853: Pop(0)
0x854: PushEmpty(bool)
0x855: Stack[-1] = (bool) 0
0x856: PushEmpty(bool, object)
0x857: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x858: Call2 0xdb1

0x859: Pop(1)
0x85a: IF (Stack[-1] == 0) GOTO 0x861; Pop(1)

0x85b: PushEmpty(bool, object)
0x85c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85d: Call2 0xd81

0x85e: Pop(1)
0x85f: IF (Stack[-1] == 0) GOTO 0x861; Pop(1)

0x860: Stack[-1] = (bool) 1
0x861: IF (Stack[-1] == 0) GOTO 0x867; Pop(1)

0x862: Push((int) 540045)
0x863: Push((int) 42013)
0x864: Push((int) 42012)
0x865: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x866: Pop(3)
0x867: Push((int) 540044)
0x868: Push((int) -1)
0x869: Push((int) 42011)
0x86a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86b: Pop(3)
0x86c: Push((int) 540060)
0x86d: Push((int) -1)
0x86e: Push((int) 42029)
0x86f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x870: Pop(3)
0x871: Return(); Pop(0)

0x872: Push((int) 42013)
0x873: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x874: IF (Stack[-1] == 0) GOTO 0x889; Pop(1)

0x875: PushEmpty(string)
0x876: Stack[-1] = "Pain"
0x877: Call2 0x80a

0x878: Pop(1)
0x879: Push((int) 540046)
0x87a: @@ SetMessage(Stack[-1])
0x87b: Pop(1)
0x87c: @@ ClearReplies()
0x87d: Pop(0)
0x87e: Push((int) 540047)
0x87f: Push((int) 42015)
0x880: Push((int) 42014)
0x881: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x882: Pop(3)
0x883: Push((int) 540052)
0x884: Push((int) 42024)
0x885: Push((int) 42019)
0x886: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x887: Pop(3)
0x888: Return(); Pop(0)

0x889: Push((int) 42015)
0x88a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x88b: IF (Stack[-1] == 0) GOTO 0x89b; Pop(1)

0x88c: PushEmpty(string)
0x88d: Stack[-1] = "Pain"
0x88e: Call2 0x80a

0x88f: Pop(1)
0x890: Push((int) 540048)
0x891: @@ SetMessage(Stack[-1])
0x892: Pop(1)
0x893: @@ ClearReplies()
0x894: Pop(0)
0x895: Push((int) 540049)
0x896: Push((int) 42017)
0x897: Push((int) 42016)
0x898: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x899: Pop(3)
0x89a: Return(); Pop(0)

0x89b: Push((int) 42017)
0x89c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x89d: IF (Stack[-1] == 0) GOTO 0x8b2; Pop(1)

0x89e: PushEmpty(string)
0x89f: Stack[-1] = "Welldie"
0x8a0: Call2 0x80a

0x8a1: Pop(1)
0x8a2: Push((int) 540050)
0x8a3: @@ SetMessage(Stack[-1])
0x8a4: Pop(1)
0x8a5: @@ ClearReplies()
0x8a6: Pop(0)
0x8a7: Push((int) 540051)
0x8a8: Push((int) 42020)
0x8a9: Push((int) 42018)
0x8aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ab: Pop(3)
0x8ac: Push((int) 540056)
0x8ad: Push((int) 42024)
0x8ae: Push((int) 42023)
0x8af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b0: Pop(3)
0x8b1: Return(); Pop(0)

0x8b2: Push((int) 42020)
0x8b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b4: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8b5: PushEmpty(string)
0x8b6: Stack[-1] = "Pain"
0x8b7: Call2 0x80a

0x8b8: Pop(1)
0x8b9: Push((int) 540053)
0x8ba: @@ SetMessage(Stack[-1])
0x8bb: Pop(1)
0x8bc: @@ ClearReplies()
0x8bd: Pop(0)
0x8be: Push((int) 540054)
0x8bf: Push((int) 42024)
0x8c0: Push((int) 42021)
0x8c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c2: Pop(3)
0x8c3: Return(); Pop(0)

0x8c4: Push((int) 42024)
0x8c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c6: IF (Stack[-1] == 0) GOTO 0x8db; Pop(1)

0x8c7: PushEmpty(string)
0x8c8: Stack[-1] = "Neutral"
0x8c9: Call2 0x80a

0x8ca: Pop(1)
0x8cb: Push((int) 540057)
0x8cc: @@ SetMessage(Stack[-1])
0x8cd: Pop(1)
0x8ce: @@ ClearReplies()
0x8cf: Pop(0)
0x8d0: Push((int) 540058)
0x8d1: Push((int) -1)
0x8d2: Push((int) 42025)
0x8d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d4: Pop(3)
0x8d5: Push((int) 540059)
0x8d6: Push((int) -1)
0x8d7: Push((int) 42026)
0x8d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d9: Pop(3)
0x8da: Return(); Pop(0)

0x8db: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x8dc: PushEmpty(bool)
0x8dd: Call2 0xcc4

0x8de: Pop(0)
0x8df: IF (Stack[-1] == 0) GOTO 0x8e3; Pop(1)

0x8e0: @ lshStopAnimation()
0x8e1: Pop(0)
0x8e2: GOTO 0x8e5

0x8e3: @ StopAnimation()
0x8e4: Pop(0)
0x8e5: Return(); Pop(0)

0x8e6: GOTO 0x821

0x8e7: Return(); Pop(0)

0x8e8: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x8e9: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x8ea: PushEmpty(bool, object, float)
0x8eb: Stack[-2] = Stack[-12]
0x8ec: Stack[-1] = (float) 70.0
0x8ed: Call2 0xaf5

0x8ee: Pop(2)
0x8ef: Pop(1); Push((bool) Stack[-1] == 0)
0x8f0: IF (Stack[-1] == 0) GOTO 0x8f3; Pop(1)

0x8f1: Stack[-10] = (int) -2
0x8f2: Return(); Pop(8)

0x8f3: @ CreateDialog(Stack[-4])
0x8f4: Pop(0)
0x8f5: PushEmpty(int)
0x8f6: Call2 0xcbe

0x8f7: Pop(0)
0x8f8: @@ SetNPCName(Stack[-1])
0x8f9: Pop(1)
0x8fa: PushEmpty(int)
0x8fb: Call2 0xcbc

0x8fc: Pop(0)
0x8fd: @@ SetNPCDescription(Stack[-1])
0x8fe: Pop(1)
0x8ff: PushEmpty(string)
0x900: Call2 0xcc0

0x901: Pop(0)
0x902: @@ SetPhoto(Stack[-1])
0x903: Pop(1)
0x904: PushEmpty(string)
0x905: Call2 0xcc2

0x906: Pop(0)
0x907: @@ SetPhoto2(Stack[-1])
0x908: Pop(1)
0x909: PushEmpty(int)
0x90a: Call2 0xe10

0x90b: Pop(0)
0x90c: @@ SetPlayerName(Stack[-1])
0x90d: Pop(1)
0x90e: Stack[-2] = (int) -1
0x90f: @ IsOverrideActive(Stack[-3])
0x910: Pop(0)
0x911: Push(Stack[-3])
0x912: IF (Stack[-1] == 0) GOTO 0x915; Pop(1)

0x913: Stack[-10] = (int) -2
0x914: Return(); Pop(8)

0x915: @ DoDialog(Stack[-4])
0x916: Pop(0)
0x917: PushEmpty(bool, object)
0x918: PushEmpty(object)
0x919: Call2 0xc0b

0x91a: Stack[-2] = Stack[-1]
0x91b: Pop(1)
0x91c: Call2 0xb4c

0x91d: Pop(2)
0x91e: PushEmpty(object, object)
0x91f: Stack[-2] = Stack[-11]
0x920: Stack[-1] = Stack[-6]
0x921: Push(-2, 4); TaskCall(13)
0x922: Call2 0x939

0x923: Pop(-2, 4); TaskReturn
0x924: Pop(2)
0x925: @@ IsDialogEnd(Stack[-1])
0x926: Pop(0)
0x927: Pop(0); Push((bool) Stack[-1] == 0)
0x928: IF (Stack[-1] == 0) GOTO 0x92e; Pop(1)

0x929: @ sync()
0x92a: Pop(0)
0x92b: @@ IsDialogEnd(Stack[-1])
0x92c: Pop(0)
0x92d: GOTO 0x927

0x92e: PushEmpty(object)
0x92f: Stack[-1] = Stack[-10]
0x930: Call2 0xb3a

0x931: Pop(1)
0x932: @ StopDialog(Stack[-4])
0x933: Pop(0)
0x934: @@ GetReturnValue(Stack[-2])
0x935: Pop(0)
0x936: Stack[-10] = Stack[-2]
0x937: Return(); Pop(8)

0x938: Stack[-4] = 0
0x939: PushEmpty()
0x93a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x93b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x93c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x93d: Push((int) 1)
0x93e: IF (Stack[-1] == 0) GOTO 0x955; Pop(1)

0x93f: PushEmpty(string)
0x940: Stack[-1] = "Neutral"
0x941: Call2 0x973

0x942: Pop(1)
0x943: Push((int) 540548)
0x944: @@ SetMessage(Stack[-1])
0x945: Pop(1)
0x946: @@ ClearReplies()
0x947: Pop(0)
0x948: Push((int) 540549)
0x949: Push((int) -1)
0x94a: Push((int) 42558)
0x94b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94c: Pop(3)
0x94d: Push((int) 540797)
0x94e: Push((int) -1)
0x94f: Push((int) 42846)
0x950: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x951: Pop(3)
0x952: GOTO 0x955

0x953: Return(); Pop(0)

0x954: GOTO 0x93d

0x955: PushEmpty(bool)
0x956: Call2 0xcc4

0x957: Pop(0)
0x958: IF (Stack[-1] == 0) GOTO 0x964; Pop(1)

0x959: @ lshWaitForAnimEnd()
0x95a: Pop(0)
0x95b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95c: IF (Stack[-1] == 0) GOTO 0x95e; Pop(1)

0x95d: GOTO 0x963

0x95e: PushEmpty(string)
0x95f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x960: Call2 0xbd6

0x961: Pop(1)
0x962: GOTO 0x959

0x963: GOTO 0x972

0x964: Push("all")
0x965: Push("idle")
0x966: @ PlayAnimation(Stack[-2], Stack[-1])
0x967: Pop(2)
0x968: @ WaitForAnimEnd()
0x969: Pop(0)
0x96a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x96b: IF (Stack[-1] == 0) GOTO 0x96d; Pop(1)

0x96c: GOTO 0x972

0x96d: Push("all")
0x96e: Push("idle")
0x96f: @ PlayAnimation(Stack[-2], Stack[-1])
0x970: Pop(2)
0x971: GOTO 0x968

0x972: Return(); Pop(0)

0x973: PushEmpty()
0x974: PushEmpty(bool)
0x975: Call2 0xcc4

0x976: Pop(0)
0x977: Pop(1); Push((bool) Stack[-1] == 0)
0x978: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x979: Return(); Pop(0)

0x97a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x97b: IF (Stack[-1] == 0) GOTO 0x97d; Pop(1)

0x97c: Return(); Pop(0)

0x97d: PushEmpty(string, bool)
0x97e: Stack[-2] = Stack[-3]
0x97f: Push("")
0x980: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x981: IF (Stack[-1] == 0) GOTO 0x984; Pop(1)

0x982: Stack[-1] = (bool) 0
0x983: GOTO 0x985

0x984: Stack[-1] = (bool) 1
0x985: Call2 0xbe6

0x986: Pop(2)
0x987: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x988: Return(); Pop(0)

0x989: PushEmpty()
0x98a: Push((int) 1)
0x98b: IF (Stack[-1] == 0) GOTO 0x9b2; Pop(1)

0x98c: PushEmpty()
0x98d: Call2 0xc04

0x98e: Pop(0)
0x98f: Push((int) 42557)
0x990: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x991: IF (Stack[-1] == 0) GOTO 0x9a6; Pop(1)

0x992: PushEmpty(string)
0x993: Stack[-1] = "Neutral"
0x994: Call2 0x973

0x995: Pop(1)
0x996: Push((int) 540548)
0x997: @@ SetMessage(Stack[-1])
0x998: Pop(1)
0x999: @@ ClearReplies()
0x99a: Pop(0)
0x99b: Push((int) 540549)
0x99c: Push((int) -1)
0x99d: Push((int) 42558)
0x99e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99f: Pop(3)
0x9a0: Push((int) 540797)
0x9a1: Push((int) -1)
0x9a2: Push((int) 42846)
0x9a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a4: Pop(3)
0x9a5: Return(); Pop(0)

0x9a6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x9a7: PushEmpty(bool)
0x9a8: Call2 0xcc4

0x9a9: Pop(0)
0x9aa: IF (Stack[-1] == 0) GOTO 0x9ae; Pop(1)

0x9ab: @ lshStopAnimation()
0x9ac: Pop(0)
0x9ad: GOTO 0x9b0

0x9ae: @ StopAnimation()
0x9af: Pop(0)
0x9b0: Return(); Pop(0)

0x9b1: GOTO 0x98a

0x9b2: Return(); Pop(0)

0x9b3: PushEmpty()
0x9b4: Call2 0x9b7

0x9b5: Pop(0)
0x9b6: Return(); Pop(0)

0x9b7: PushEmpty(bool)
0x9b8: Call2 0xaf0

0x9b9: Pop(0)
0x9ba: Pop(1); Push((bool) Stack[-1] == 0)
0x9bb: IF (Stack[-1] == 0) GOTO 0x9be; Pop(1)

0x9bc: @ Hold()
0x9bd: Pop(0)
0x9be: @ GetDirection(Stack[-0])
0x9bf: Pop(0)
0x9c0: PushEmpty()
0x9c1: Call2 0xa67

0x9c2: Pop(0)
0x9c3: GOTO 0x9c0

0x9c4: Return(); Pop(0)

0x9c5: PushEmpty(object, object)
0x9c6: Push("player")
0x9c7: @ FindActor(Stack[-2], Stack[-1])
0x9c8: Pop(1)
0x9c9: Pop(0); Push((bool) Stack[-1] == 0)
0x9ca: IF (Stack[-1] == 0) GOTO 0x9cd; Pop(1)

0x9cb: Stack[-3] = (bool) 0
0x9cc: Return(); Pop(2)

0x9cd: PushEmpty(bool, object)
0x9ce: Stack[-1] = Stack[-3]
0x9cf: Call2 0xae7

0x9d0: Stack[-5] = Stack[-2]
0x9d1: Pop(2)
0x9d2: Return(); Pop(2)

0x9d3: Stack[-1] = 0
0x9d4: Push(CvectorIndex(Stack[-0], 0))
0x9d5: Push(CvectorIndex(Stack[-0], 2))
0x9d6: @ RotateAsync(Stack[-2], Stack[-1])
0x9d7: Pop(2)
0x9d8: Return(); Pop(0)

0x9d9: PushEmpty(object, bool, object, bool)
0x9da: Push("player")
0x9db: @ FindActor(Stack[-3], Stack[-1])
0x9dc: Pop(1)
0x9dd: Pop(0); Push((bool) Stack[-2] == 0)
0x9de: IF (Stack[-1] == 0) GOTO 0x9e1; Pop(1)

0x9df: Stack[-5] = (bool) 0
0x9e0: Return(); Pop(4)

0x9e1: PushEmpty(float, object)
0x9e2: Stack[-1] = Stack[-4]
0x9e3: Call2 0xab3

0x9e4: Pop(1)
0x9e5: Push((float)90000.0)
0x9e6: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x9e7: IF (Stack[-1] == 0) GOTO 0x9ea; Pop(1)

0x9e8: Stack[-5] = (bool) 0
0x9e9: Return(); Pop(4)

0x9ea: @ CanSee(Stack[-1], Stack[-2])
0x9eb: Pop(0)
0x9ec: Stack[-5] = Stack[-1]
0x9ed: Return(); Pop(4)

0x9ee: Stack[-2] = 0
0x9ef: PushEmpty(float, float)
0x9f0: Push((int) 8)
0x9f1: Push((int) 16)
0x9f2: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x9f3: Pop(2)
0x9f4: Push((int) 10)
0x9f5: @ SetTimer(Stack[-1], Stack[-2])
0x9f6: Pop(1)
0x9f7: Return(); Pop(2)

0x9f8: Push((int) 10)
0x9f9: @ KillTimer(Stack[-1])
0x9fa: Pop(1)
0x9fb: Return(); Pop(0)

0x9fc: PushEmpty()
0x9fd: Push((int) 10)
0x9fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9ff: IF (Stack[-1] == 0) GOTO 0xa21; Pop(1)

0xa00: PushEmpty()
0xa01: Call2 0x9f8

0xa02: Pop(0)
0xa03: PushEmpty(bool)
0xa04: Stack[-1] = (bool) 0
0xa05: PushEmpty(bool)
0xa06: Call2 0xaf0

0xa07: Pop(0)
0xa08: IF (Stack[-1] == 0) GOTO 0xa0e; Pop(1)

0xa09: PushEmpty(bool)
0xa0a: Call2 0x9d9

0xa0b: Pop(0)
0xa0c: IF (Stack[-1] == 0) GOTO 0xa0e; Pop(1)

0xa0d: Stack[-1] = (bool) 1
0xa0e: IF (Stack[-1] == 0) GOTO 0xa1b; Pop(1)

0xa0f: PushEmpty(bool)
0xa10: Call2 0x9c5

0xa11: Pop(0)
0xa12: IF (Stack[-1] == 0) GOTO 0xa1a; Pop(1)

0xa13: PushEmpty(bool, object)
0xa14: PushEmpty(object)
0xa15: Call2 0xc0b

0xa16: Stack[-2] = Stack[-1]
0xa17: Pop(1)
0xa18: Call2 0xb86

0xa19: Pop(2)
0xa1a: GOTO 0xa21

0xa1b: PushEmpty()
0xa1c: Call2 0x9d4

0xa1d: Pop(0)
0xa1e: PushEmpty()
0xa1f: Call2 0x9ef

0xa20: Pop(0)
0xa21: Return(); Pop(0)

0xa22: PushEmpty()
0xa23: Call2 0xaae

0xa24: Pop(0)
0xa25: PushEmpty()
0xa26: Call2 0x9f8

0xa27: Pop(0)
0xa28: @ lshStopSpeech()
0xa29: Pop(0)
0xa2a: @ lshStopAnimation()
0xa2b: Pop(0)
0xa2c: @ StopAsync()
0xa2d: Pop(0)
0xa2e: @ Hold()
0xa2f: Pop(0)
0xa30: Return(); Pop(0)

0xa31: @ StopGroup0()
0xa32: Pop(0)
0xa33: PushEmpty()
0xa34: Call2 0x9f8

0xa35: Pop(0)
0xa36: PushEmpty(string)
0xa37: Stack[-1] = "Neutral"
0xa38: Call2 0xbd6

0xa39: Pop(1)
0xa3a: PushEmpty()
0xa3b: Call2 0x9ef

0xa3c: Pop(0)
0xa3d: Return(); Pop(0)

0xa3e: PushEmpty()
0xa3f: Push(Stack[-1])
0xa40: IF (Stack[-1] == 0) GOTO 0xa45; Pop(1)

0xa41: PushEmpty()
0xa42: Call2 0x9ef

0xa43: Pop(0)
0xa44: GOTO 0xa49

0xa45: PushEmpty(string)
0xa46: Stack[-1] = "Neutral"
0xa47: Call2 0xbd6

0xa48: Pop(1)
0xa49: Return(); Pop(0)

0xa4a: PushEmpty(bool, bool)
0xa4b: @ IsOverrideActive(Stack[-1])
0xa4c: Pop(0)
0xa4d: Pop(0); Push((bool) Stack[-1] == 0)
0xa4e: IF (Stack[-1] == 0) GOTO 0xa66; Pop(1)

0xa4f: EventDisable(0)
0xa50: PushEmpty()
0xa51: Call2 0xaae

0xa52: Pop(0)
0xa53: PushEmpty(bool, object)
0xa54: Stack[-1] = Stack[-5]
0xa55: Call2 0xae7

0xa56: Pop(2)
0xa57: EventEnable(0)
0xa58: PushEmpty(object)
0xa59: Stack[-1] = Stack[-4]
0xa5a: Call2 0xe21

0xa5b: Pop(1)
0xa5c: PushEmpty(string)
0xa5d: Stack[-1] = "Neutral"
0xa5e: Call2 0xbd6

0xa5f: Pop(1)
0xa60: PushEmpty()
0xa61: Call2 0x9f8

0xa62: Pop(0)
0xa63: PushEmpty()
0xa64: Call2 0x9ef

0xa65: Pop(0)
0xa66: Return(); Pop(2)

0xa67: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xa68: @ WaitForAnimEnd()
0xa69: Pop(0)
0xa6a: PushEmpty(bool)
0xa6b: Call2 0xaf0

0xa6c: Pop(0)
0xa6d: Pop(1); Push((bool) Stack[-1] == 0)
0xa6e: IF (Stack[-1] == 0) GOTO 0xa70; Pop(1)

0xa6f: Return(); Pop(12)

0xa70: PushEmpty(int)
0xa71: Call2 0xcab

0xa72: Stack[-7] = Stack[-1]
0xa73: Pop(1)
0xa74: Stack[-5] = (int) 0
0xa75: PushEmpty(bool)
0xa76: Stack[-1] = (bool) 0
0xa77: Push((int) 5)
0xa78: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xa79: IF (Stack[-1] == 0) GOTO 0xa7f; Pop(1)

0xa7a: PushEmpty(bool)
0xa7b: Call2 0xaf0

0xa7c: Pop(0)
0xa7d: IF (Stack[-1] == 0) GOTO 0xa7f; Pop(1)

0xa7e: Stack[-1] = (bool) 1
0xa7f: IF (Stack[-1] == 0) GOTO 0xaa9; Pop(1)

0xa80: Pop(0); Push((bool) Stack[-6] == 0)
0xa81: IF (Stack[-1] == 0) GOTO 0xa89; Pop(1)

0xa82: Push((int) 3)
0xa83: @ Sleep(Stack[-1], Stack[-5])
0xa84: Pop(1)
0xa85: Pop(0); Push((bool) Stack[-4] == 0)
0xa86: IF (Stack[-1] == 0) GOTO 0xa88; Pop(1)

0xa87: GOTO 0xaa9

0xa88: GOTO 0xa9e

0xa89: @ irand(Stack[-3], Stack[-6])
0xa8a: Pop(0)
0xa8b: Push((int) 5)
0xa8c: @ irand(Stack[-3], Stack[-1])
0xa8d: Pop(1)
0xa8e: Push((int) 0)
0xa8f: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xa90: IF (Stack[-1] == 0) GOTO 0xa92; Pop(1)

0xa91: Stack[-3] = (int) 0
0xa92: Push("all")
0xa93: PushEmpty(string, int)
0xa94: Stack[-1] = Stack[-6]
0xa95: Call2 0xca4

0xa96: Pop(1)
0xa97: @ PlayAnimation(Stack[-2], Stack[-1])
0xa98: Pop(2)
0xa99: @ WaitForAnimEnd(Stack[-1])
0xa9a: Pop(0)
0xa9b: Pop(0); Push((bool) Stack[-1] == 0)
0xa9c: IF (Stack[-1] == 0) GOTO 0xa9e; Pop(1)

0xa9d: GOTO 0xaa9

0xa9e: PushEmpty(bool)
0xa9f: Call2 0xaac

0xaa0: Pop(0)
0xaa1: Pop(1); Push((bool) Stack[-1] == 0)
0xaa2: IF (Stack[-1] == 0) GOTO 0xaa4; Pop(1)

0xaa3: GOTO 0xaa9

0xaa4: @ ResetAAS()
0xaa5: Pop(0)
0xaa6: Push((int) 1)
0xaa7: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xaa8: GOTO 0xa75

0xaa9: @ ResetAAS()
0xaaa: Pop(0)
0xaab: Return(); Pop(12)

0xaac: Stack[-1] = (bool) 1
0xaad: Return(); Pop(0)

0xaae: @ StopAnimation()
0xaaf: Pop(0)
0xab0: @ StopGroup0()
0xab1: Pop(0)
0xab2: Return(); Pop(0)

0xab3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xab4: @ GetPosition(Stack[-3])
0xab5: Pop(0)
0xab6: @@ GetPosition(Stack[-2])
0xab7: Pop(0)
0xab8: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xab9: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xaba: Return(); Pop(6)

0xabb: PushEmpty(bool, bool)
0xabc: Push("HasProperty")
0xabd: Push((int) 2)
0xabe: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xabf: Pop(1); Push((bool) Stack[-1] == 0)
0xac0: IF (Stack[-1] == 0) GOTO 0xac3; Pop(1)

0xac1: Stack[-5] = (bool) 0
0xac2: Return(); Pop(2)

0xac3: @@ HasProperty(Stack[-3], Stack[-1])
0xac4: Pop(0)
0xac5: Stack[-5] = Stack[-1]
0xac6: Return(); Pop(2)

0xac7: PushEmpty(float, float)
0xac8: PushEmpty(bool, object, string)
0xac9: Stack[-2] = Stack[-10]
0xaca: Stack[-1] = Stack[-9]
0xacb: Call2 0xabb

0xacc: Pop(2)
0xacd: Pop(1); Push((bool) Stack[-1] == 0)
0xace: IF (Stack[-1] == 0) GOTO 0xad1; Pop(1)

0xacf: Stack[-8] = (bool) 0
0xad0: Return(); Pop(2)

0xad1: @@ GetProperty(Stack[-6], Stack[-1])
0xad2: Pop(0)
0xad3: PushEmpty(float, float, float, float)
0xad4: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xad5: Stack[-2] = Stack[-8]
0xad6: Stack[-1] = Stack[-7]
0xad7: Call2 0xc1b

0xad8: Pop(3)
0xad9: @@ SetProperty(Stack[-7], Stack[-1])
0xada: Pop(1)
0xadb: Stack[-8] = (bool) 1
0xadc: Return(); Pop(2)

0xadd: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xade: @ GetPosition(Stack[-3])
0xadf: Pop(0)
0xae0: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xae1: Push(CvectorIndex(Stack[-2], 0))
0xae2: Push(CvectorIndex(Stack[-3], 2))
0xae3: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xae4: Pop(2)
0xae5: Stack[-8] = Stack[-1]
0xae6: Return(); Pop(6)

0xae7: PushEmpty(cvector, cvector)
0xae8: @@ GetPosition(Stack[-1])
0xae9: Pop(0)
0xaea: PushEmpty(bool, cvector)
0xaeb: Stack[-1] = Stack[-3]
0xaec: Call2 0xadd

0xaed: Stack[-6] = Stack[-2]
0xaee: Pop(2)
0xaef: Return(); Pop(2)

0xaf0: PushEmpty(bool, bool)
0xaf1: @ IsLoaded(Stack[-1])
0xaf2: Pop(0)
0xaf3: Stack[-3] = Stack[-1]
0xaf4: Return(); Pop(2)

0xaf5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xaf6: @@ GetPosition(Stack[-8])
0xaf7: Pop(0)
0xaf8: @@ GetEyesHeight(Stack[-9])
0xaf9: Pop(0)
0xafa: Push(CvectorIndex(Stack[-8], 1))
0xafb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xafc: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xafd: @ GetPosition(Stack[-7])
0xafe: Pop(0)
0xaff: @ GetEyesHeight(Stack[-9])
0xb00: Pop(0)
0xb01: Push(CvectorIndex(Stack[-7], 1))
0xb02: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xb03: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xb04: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xb05: Push(CvectorIndex(Stack[-6], 1))
0xb06: Stack[-1] = (int) 0
0xb07: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xb08: Pop(0); Push(Stack[-6] | Stack[-6]);
0xb09: Pop(1); Push(Sqrt(Stack[-1]))
0xb0a: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xb0b: Stack[-5] = -Stack[-6]; Pop(0);
0xb0c: Pop(0); Push(Stack[-6] * Stack[-19]);
0xb0d: PushEmpty(cvector, cvector)
0xb0e: Push(CVector(0.0, 1.0, 0.0))
0xb0f: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xb10: Call2 0xc11

0xb11: Pop(1)
0xb12: Push((int) 25)
0xb13: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb14: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb15: Push(CVector(0.0, 10.0, 0.0))
0xb16: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xb17: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xb18: @ IsOverrideActive(Stack[-2])
0xb19: Pop(0)
0xb1a: Push(Stack[-2])
0xb1b: IF (Stack[-1] == 0) GOTO 0xb1e; Pop(1)

0xb1c: Stack[-21] = (bool) 0
0xb1d: Return(); Pop(18)

0xb1e: @ StopWorld()
0xb1f: Pop(0)
0xb20: Push((bool) 1)
0xb21: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xb22: Pop(1)
0xb23: Push(CvectorIndex(Stack[-4], 0))
0xb24: Push(CvectorIndex(Stack[-5], 2))
0xb25: @ Rotate(Stack[-2], Stack[-1])
0xb26: Pop(2)
0xb27: PushEmpty(bool)
0xb28: Call2 0xcc4

0xb29: Pop(0)
0xb2a: IF (Stack[-1] == 0) GOTO 0xb2c; Pop(1)

0xb2b: GOTO 0xb34

0xb2c: Push("head")
0xb2d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xb2e: Pop(1)
0xb2f: Push(Stack[-1])
0xb30: IF (Stack[-1] == 0) GOTO 0xb34; Pop(1)

0xb31: Push("head")
0xb32: @ LookAsyncCamera(Stack[-1])
0xb33: Pop(1)
0xb34: @ CameraWaitForPlayFinish()
0xb35: Pop(0)
0xb36: @ ResumeWorld()
0xb37: Pop(0)
0xb38: Stack[-21] = (bool) 1
0xb39: Return(); Pop(18)

0xb3a: PushEmpty(bool, bool)
0xb3b: Push((bool) 1)
0xb3c: @ CameraSwitchToNormal(Stack[-1])
0xb3d: Pop(1)
0xb3e: PushEmpty(bool)
0xb3f: Call2 0xcc4

0xb40: Pop(0)
0xb41: IF (Stack[-1] == 0) GOTO 0xb43; Pop(1)

0xb42: GOTO 0xb4b

0xb43: Push("head")
0xb44: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xb45: Pop(1)
0xb46: Push(Stack[-1])
0xb47: IF (Stack[-1] == 0) GOTO 0xb4b; Pop(1)

0xb48: Push("head")
0xb49: @ UnlookAsync(Stack[-1])
0xb4a: Pop(1)
0xb4b: Return(); Pop(2)

0xb4c: PushEmpty(int, int, int, int)
0xb4d: Push("voice_common")
0xb4e: @ GetVariable(Stack[-1], Stack[-3])
0xb4f: Pop(1)
0xb50: Push(Stack[-2])
0xb51: IF (Stack[-1] == 0) GOTO 0xb72; Pop(1)

0xb52: PushEmpty(bool, object)
0xb53: Stack[-1] = Stack[-7]
0xb54: Call2 0xb86

0xb55: Pop(1)
0xb56: Pop(1); Push((bool) Stack[-1] == 0)
0xb57: IF (Stack[-1] == 0) GOTO 0xb60; Pop(1)

0xb58: PushEmpty(bool, object)
0xb59: Stack[-1] = Stack[-7]
0xb5a: Call2 0xbab

0xb5b: Pop(1)
0xb5c: Pop(1); Push((bool) Stack[-1] == 0)
0xb5d: IF (Stack[-1] == 0) GOTO 0xb60; Pop(1)

0xb5e: Stack[-6] = (bool) 0
0xb5f: Return(); Pop(4)

0xb60: Push((int) 2)
0xb61: @ irand(Stack[-2], Stack[-1])
0xb62: Pop(1)
0xb63: Push(Stack[-1])
0xb64: IF (Stack[-1] == 0) GOTO 0xb6d; Pop(1)

0xb65: Push("voice_common")
0xb66: Push((int) 1)
0xb67: Pop(1); Push(Stack[-4] + Stack[-1]);
0xb68: Push((int) 3)
0xb69: Pop(2); Push(Stack[-2] % Stack[-1]);
0xb6a: @ SetVariable(Stack[-2], Stack[-1])
0xb6b: Pop(2)
0xb6c: GOTO 0xb71

0xb6d: Push("voice_common")
0xb6e: Push((int) 0)
0xb6f: @ SetVariable(Stack[-2], Stack[-1])
0xb70: Pop(2)
0xb71: GOTO 0xb84

0xb72: PushEmpty(bool, object)
0xb73: Stack[-1] = Stack[-7]
0xb74: Call2 0xbab

0xb75: Pop(1)
0xb76: Pop(1); Push((bool) Stack[-1] == 0)
0xb77: IF (Stack[-1] == 0) GOTO 0xb80; Pop(1)

0xb78: PushEmpty(bool, object)
0xb79: Stack[-1] = Stack[-7]
0xb7a: Call2 0xb86

0xb7b: Pop(1)
0xb7c: Pop(1); Push((bool) Stack[-1] == 0)
0xb7d: IF (Stack[-1] == 0) GOTO 0xb80; Pop(1)

0xb7e: Stack[-6] = (bool) 0
0xb7f: Return(); Pop(4)

0xb80: Push("voice_common")
0xb81: Push((int) 1)
0xb82: @ SetVariable(Stack[-2], Stack[-1])
0xb83: Pop(2)
0xb84: Stack[-6] = (bool) 1
0xb85: Return(); Pop(4)

0xb86: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xb87: Stack[-5] = "c"
0xb88: Stack[-4] = (int) 0
0xb89: Push((int) 1)
0xb8a: IF (Stack[-1] == 0) GOTO 0xb96; Pop(1)

0xb8b: Push((int) 1)
0xb8c: Pop(1); Push(Stack[-5] + Stack[-1]);
0xb8d: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb8e: @@ HasProperty(Stack[-1], Stack[-4])
0xb8f: Pop(1)
0xb90: Pop(0); Push((bool) Stack[-3] == 0)
0xb91: IF (Stack[-1] == 0) GOTO 0xb93; Pop(1)

0xb92: GOTO 0xb96

0xb93: Push((int) 1)
0xb94: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xb95: GOTO 0xb89

0xb96: Pop(0); Push((bool) Stack[-4] == 0)
0xb97: IF (Stack[-1] == 0) GOTO 0xb9a; Pop(1)

0xb98: Stack[-12] = (bool) 0
0xb99: Return(); Pop(10)

0xb9a: Stack[-2] = (int) 0
0xb9b: Push((int) 1)
0xb9c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xb9d: IF (Stack[-1] == 0) GOTO 0xba0; Pop(1)

0xb9e: @ irand(Stack[-2], Stack[-4])
0xb9f: Pop(0)
0xba0: Push((int) 1)
0xba1: Pop(1); Push(Stack[-3] + Stack[-1]);
0xba2: Pop(1); Push(Stack[-6] + Stack[-1]);
0xba3: @@ GetProperty(Stack[-1], Stack[-2])
0xba4: Pop(1)
0xba5: PushEmpty(bool, string)
0xba6: Stack[-1] = Stack[-3]
0xba7: Call2 0xbf5

0xba8: Stack[-14] = Stack[-2]
0xba9: Pop(2)
0xbaa: Return(); Pop(10)

0xbab: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xbac: Push("d")
0xbad: PushEmpty(int)
0xbae: Call2 0xc95

0xbaf: Pop(0)
0xbb0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbb1: Push("m")
0xbb2: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xbb3: Stack[-4] = (int) 0
0xbb4: Push((int) 1)
0xbb5: IF (Stack[-1] == 0) GOTO 0xbc1; Pop(1)

0xbb6: Push((int) 1)
0xbb7: Pop(1); Push(Stack[-5] + Stack[-1]);
0xbb8: Pop(1); Push(Stack[-6] + Stack[-1]);
0xbb9: @@ HasProperty(Stack[-1], Stack[-4])
0xbba: Pop(1)
0xbbb: Pop(0); Push((bool) Stack[-3] == 0)
0xbbc: IF (Stack[-1] == 0) GOTO 0xbbe; Pop(1)

0xbbd: GOTO 0xbc1

0xbbe: Push((int) 1)
0xbbf: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xbc0: GOTO 0xbb4

0xbc1: Pop(0); Push((bool) Stack[-4] == 0)
0xbc2: IF (Stack[-1] == 0) GOTO 0xbc5; Pop(1)

0xbc3: Stack[-12] = (bool) 0
0xbc4: Return(); Pop(10)

0xbc5: Stack[-2] = (int) 0
0xbc6: Push((int) 1)
0xbc7: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xbc8: IF (Stack[-1] == 0) GOTO 0xbcb; Pop(1)

0xbc9: @ irand(Stack[-2], Stack[-4])
0xbca: Pop(0)
0xbcb: Push((int) 1)
0xbcc: Pop(1); Push(Stack[-3] + Stack[-1]);
0xbcd: Pop(1); Push(Stack[-6] + Stack[-1]);
0xbce: @@ GetProperty(Stack[-1], Stack[-2])
0xbcf: Pop(1)
0xbd0: PushEmpty(bool, string)
0xbd1: Stack[-1] = Stack[-3]
0xbd2: Call2 0xbf5

0xbd3: Stack[-14] = Stack[-2]
0xbd4: Pop(2)
0xbd5: Return(); Pop(10)

0xbd6: PushEmpty(bool, float, float, bool, float, float)
0xbd7: @ lshHasAnimation(Stack[-3], Stack[-7])
0xbd8: Pop(0)
0xbd9: Push(Stack[-3])
0xbda: IF (Stack[-1] == 0) GOTO 0xbe1; Pop(1)

0xbdb: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xbdc: Pop(0)
0xbdd: Push((bool) 0)
0xbde: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xbdf: Pop(1)
0xbe0: GOTO 0xbe5

0xbe1: Push("Can't find lsh animation : ")
0xbe2: Pop(1); Push(Stack[-1] + Stack[-8]);
0xbe3: @ Trace(Stack[-1])
0xbe4: Pop(1)
0xbe5: Return(); Pop(6)

0xbe6: PushEmpty(bool, float, float, bool, float, float)
0xbe7: @ lshHasAnimation(Stack[-3], Stack[-8])
0xbe8: Pop(0)
0xbe9: Push(Stack[-3])
0xbea: IF (Stack[-1] == 0) GOTO 0xbf0; Pop(1)

0xbeb: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xbec: Pop(0)
0xbed: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xbee: Pop(0)
0xbef: GOTO 0xbf4

0xbf0: Push("Can't find lsh animation : ")
0xbf1: Pop(1); Push(Stack[-1] + Stack[-9]);
0xbf2: @ Trace(Stack[-1])
0xbf3: Pop(1)
0xbf4: Return(); Pop(6)

0xbf5: PushEmpty(bool, bool)
0xbf6: PushEmpty(bool)
0xbf7: Call2 0xcc4

0xbf8: Pop(0)
0xbf9: IF (Stack[-1] == 0) GOTO 0xc02; Pop(1)

0xbfa: @ lshHasSpeech(Stack[-1], Stack[-3])
0xbfb: Pop(0)
0xbfc: Push(Stack[-1])
0xbfd: IF (Stack[-1] == 0) GOTO 0xc02; Pop(1)

0xbfe: @ lshPlaySpeech(Stack[-3])
0xbff: Pop(0)
0xc00: Stack[-4] = (bool) 1
0xc01: Return(); Pop(2)

0xc02: Stack[-4] = (bool) 0
0xc03: Return(); Pop(2)

0xc04: PushEmpty(bool)
0xc05: Call2 0xcc4

0xc06: Pop(0)
0xc07: IF (Stack[-1] == 0) GOTO 0xc0a; Pop(1)

0xc08: @ lshStopSpeech()
0xc09: Pop(0)
0xc0a: Return(); Pop(0)

0xc0b: PushEmpty(object, object)
0xc0c: @ self(Stack[-1])
0xc0d: Pop(0)
0xc0e: Stack[-3] = Stack[-1]
0xc0f: Return(); Pop(2)

0xc10: Stack[-1] = 0
0xc11: PushEmpty(float, float)
0xc12: Pop(0); Push(Stack[-3] | Stack[-3]);
0xc13: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xc14: Push((float)0.0)
0xc15: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc16: IF (Stack[-1] == 0) GOTO 0xc19; Pop(1)

0xc17: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xc18: Return(); Pop(2)

0xc19: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xc1a: Return(); Pop(2)

0xc1b: PushEmpty()
0xc1c: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xc1d: IF (Stack[-1] == 0) GOTO 0xc20; Pop(1)

0xc1e: Stack[-4] = Stack[-2]
0xc1f: Return(); Pop(0)

0xc20: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xc21: IF (Stack[-1] == 0) GOTO 0xc24; Pop(1)

0xc22: Stack[-4] = Stack[-1]
0xc23: Return(); Pop(0)

0xc24: Stack[-4] = Stack[-3]
0xc25: Return(); Pop(0)

0xc26: PushEmpty(int, int)
0xc27: @ GetVariable(Stack[-3], Stack[-1])
0xc28: Pop(0)
0xc29: Stack[-4] = Stack[-1]
0xc2a: Return(); Pop(2)

0xc2b: PushEmpty(object, object)
0xc2c: @ CreateIntVector(Stack[-1])
0xc2d: Pop(0)
0xc2e: @@ add(Stack[-4])
0xc2f: Pop(0)
0xc30: @@ add(Stack[-3])
0xc31: Pop(0)
0xc32: Push((int) 3)
0xc33: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xc34: Pop(1)
0xc35: Return(); Pop(2)

0xc36: Stack[-1] = 0
0xc37: PushEmpty(int, int, bool, int, int, bool)
0xc38: @@ GetItemID(Stack[-3])
0xc39: Pop(0)
0xc3a: Push("Category")
0xc3b: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xc3c: Pop(1)
0xc3d: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xc3e: Pop(0)
0xc3f: Pop(0); Push((bool) Stack[-1] == 0)
0xc40: IF (Stack[-1] == 0) GOTO 0xc44; Pop(1)

0xc41: @@ DropItems(Stack[-8], Stack[-7])
0xc42: Pop(0)
0xc43: GOTO 0xc49

0xc44: PushEmpty(int, int)
0xc45: Stack[-2] = Stack[-5]
0xc46: Stack[-1] = Stack[-9]
0xc47: Call2 0xc2b

0xc48: Pop(2)
0xc49: Return(); Pop(6)

0xc4a: PushEmpty(object, object)
0xc4b: @ CreateInvItem(Stack[-1])
0xc4c: Pop(0)
0xc4d: @@ SetItemName(Stack[-4])
0xc4e: Pop(0)
0xc4f: PushEmpty(object, object, int)
0xc50: Stack[-3] = Stack[-8]
0xc51: Stack[-2] = Stack[-4]
0xc52: Stack[-1] = Stack[-6]
0xc53: Call2 0xc37

0xc54: Pop(3)
0xc55: Return(); Pop(2)

0xc56: Stack[-1] = 0
0xc57: PushEmpty()
0xc58: Pop(0); Push((bool) Stack[-2] == 0)
0xc59: IF (Stack[-1] == 0) GOTO 0xc5c; Pop(1)

0xc5a: Stack[-3] = (bool) 0
0xc5b: Return(); Pop(0)

0xc5c: Push((int) 0)
0xc5d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc5e: IF (Stack[-1] == 0) GOTO 0xc63; Pop(1)

0xc5f: Push((int) 8)
0xc60: @ SendWorldWndMessage(Stack[-1])
0xc61: Pop(1)
0xc62: GOTO 0xc6c

0xc63: Push((int) 0)
0xc64: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc65: IF (Stack[-1] == 0) GOTO 0xc6a; Pop(1)

0xc66: Push((int) 9)
0xc67: @ SendWorldWndMessage(Stack[-1])
0xc68: Pop(1)
0xc69: GOTO 0xc6c

0xc6a: Stack[-3] = (bool) 0
0xc6b: Return(); Pop(0)

0xc6c: PushEmpty(float)
0xc6d: Stack[-1] = Stack[-2]
0xc6e: Call2 0xc7a

0xc6f: Pop(1)
0xc70: PushEmpty(bool, object, string, float, float, float)
0xc71: Stack[-5] = Stack[-8]
0xc72: Stack[-4] = "reputation"
0xc73: Stack[-3] = Stack[-7]
0xc74: Stack[-2] = (int) 0
0xc75: Stack[-1] = (int) 1
0xc76: Call2 0xac7

0xc77: Pop(6)
0xc78: Stack[-3] = (bool) 1
0xc79: Return(); Pop(0)

0xc7a: PushEmpty(object, object)
0xc7b: @ CreateFloatVector(Stack[-1])
0xc7c: Pop(0)
0xc7d: @@ add(Stack[-3])
0xc7e: Pop(0)
0xc7f: Push((int) 16)
0xc80: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xc81: Pop(1)
0xc82: Return(); Pop(2)

0xc83: Stack[-1] = 0
0xc84: PushEmpty(object, object)
0xc85: @ FindActor(Stack[-1], Stack[-4])
0xc86: Pop(0)
0xc87: Pop(0); Push((bool) Stack[-1] == 0)
0xc88: IF (Stack[-1] == 0) GOTO 0xc8b; Pop(1)

0xc89: Stack[-5] = (bool) 0
0xc8a: Return(); Pop(2)

0xc8b: @ Trigger(Stack[-1], Stack[-3])
0xc8c: Pop(0)
0xc8d: Stack[-5] = (bool) 1
0xc8e: Return(); Pop(2)

0xc8f: Stack[-1] = 0
0xc90: PushEmpty(float, float)
0xc91: @ GetGameTime(Stack[-1])
0xc92: Pop(0)
0xc93: Stack[-3] = Stack[-1]
0xc94: Return(); Pop(2)

0xc95: PushEmpty(float, float)
0xc96: @ GetGameTime(Stack[-1])
0xc97: Pop(0)
0xc98: Push((int) 1)
0xc99: PushEmpty(int)
0xc9a: Push((int) 24)
0xc9b: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xc9c: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xc9d: Return(); Pop(2)

0xc9e: PushEmpty()
0xc9f: PushEmpty(int)
0xca0: Call2 0xc95

0xca1: Pop(0)
0xca2: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xca3: Return(); Pop(0)

0xca4: PushEmpty(string, string)
0xca5: Stack[-1] = "idle"
0xca6: Push(Stack[-3])
0xca7: IF (Stack[-1] == 0) GOTO 0xca9; Pop(1)

0xca8: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xca9: Stack[-4] = Stack[-1]
0xcaa: Return(); Pop(2)

0xcab: PushEmpty(int, bool, int, bool)
0xcac: Stack[-2] = (int) 0
0xcad: Push("all")
0xcae: PushEmpty(string, int)
0xcaf: Stack[-1] = Stack[-5]
0xcb0: Call2 0xca4

0xcb1: Pop(1)
0xcb2: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xcb3: Pop(2)
0xcb4: Pop(0); Push((bool) Stack[-1] == 0)
0xcb5: IF (Stack[-1] == 0) GOTO 0xcb7; Pop(1)

0xcb6: GOTO 0xcba

0xcb7: Push((int) 1)
0xcb8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xcb9: GOTO 0xcad

0xcba: Stack[-5] = Stack[-2]
0xcbb: Return(); Pop(4)

0xcbc: Stack[-1] = (int) 515542
0xcbd: Return(); Pop(0)

0xcbe: Stack[-1] = (int) 502867
0xcbf: Return(); Pop(0)

0xcc0: Stack[-1] = "ui/NPC_Laska.png"
0xcc1: Return(); Pop(0)

0xcc2: Stack[-1] = "ui/NPC_Laska_b.png"
0xcc3: Return(); Pop(0)

0xcc4: Stack[-1] = (bool) 1
0xcc5: Return(); Pop(0)

0xcc6: PushEmpty(object, object)
0xcc7: Push("lockpick1time is given")
0xcc8: @ Trace(Stack[-1])
0xcc9: Pop(1)
0xcca: @ CreateInvItem(Stack[-1])
0xccb: Pop(0)
0xccc: Push("lockpick")
0xccd: @@ SetItemName(Stack[-1])
0xcce: Pop(1)
0xccf: Push("uses")
0xcd0: Push((int) 1)
0xcd1: @@ SetProperty(Stack[-2], Stack[-1])
0xcd2: Pop(2)
0xcd3: PushEmpty(object, object, int)
0xcd4: Stack[-3] = Stack[-7]
0xcd5: Stack[-2] = Stack[-4]
0xcd6: Stack[-1] = (int) 1
0xcd7: Call2 0xc37

0xcd8: Pop(3)
0xcd9: Return(); Pop(2)

0xcda: Stack[-1] = 0
0xcdb: PushEmpty()
0xcdc: Push("playsound")
0xcdd: Push("giveitem")
0xcde: @ TriggerWorld(Stack[-2], Stack[-1])
0xcdf: Pop(2)
0xce0: Return(); Pop(0)

0xce1: PushEmpty()
0xce2: Push("ood2Laska1")
0xce3: Push((int) 1)
0xce4: @ SetVariable(Stack[-2], Stack[-1])
0xce5: Pop(2)
0xce6: Return(); Pop(0)

0xce7: PushEmpty()
0xce8: Push("ood2Laska2")
0xce9: Push((int) 1)
0xcea: @ SetVariable(Stack[-2], Stack[-1])
0xceb: Pop(2)
0xcec: Return(); Pop(0)

0xced: PushEmpty()
0xcee: Push("ood11Laska1")
0xcef: Push((int) 1)
0xcf0: @ SetVariable(Stack[-2], Stack[-1])
0xcf1: Pop(2)
0xcf2: Return(); Pop(0)

0xcf3: PushEmpty()
0xcf4: Push("bandage is given")
0xcf5: @ Trace(Stack[-1])
0xcf6: Pop(1)
0xcf7: PushEmpty(object, string, int)
0xcf8: Stack[-3] = Stack[-5]
0xcf9: Stack[-2] = "bandage"
0xcfa: Stack[-1] = (int) 1
0xcfb: Call2 0xc4a

0xcfc: Pop(3)
0xcfd: Return(); Pop(0)

0xcfe: PushEmpty()
0xcff: Push("tourniquet is given")
0xd00: @ Trace(Stack[-1])
0xd01: Pop(1)
0xd02: PushEmpty(object, string, int)
0xd03: Stack[-3] = Stack[-5]
0xd04: Stack[-2] = "tourniquet"
0xd05: Stack[-1] = (int) 1
0xd06: Call2 0xc4a

0xd07: Pop(3)
0xd08: Return(); Pop(0)

0xd09: PushEmpty()
0xd0a: Push("powder is given")
0xd0b: @ Trace(Stack[-1])
0xd0c: Pop(1)
0xd0d: PushEmpty(object, string, int)
0xd0e: Stack[-3] = Stack[-5]
0xd0f: Stack[-2] = "powder"
0xd10: Stack[-1] = (int) 1
0xd11: Call2 0xc4a

0xd12: Pop(3)
0xd13: Return(); Pop(0)

0xd14: PushEmpty()
0xd15: PushEmpty(bool, object, float)
0xd16: Stack[-2] = Stack[-5]
0xd17: Stack[-1] = (float) 0.3
0xd18: Call2 0xc57

0xd19: Pop(3)
0xd1a: Return(); Pop(0)

0xd1b: PushEmpty()
0xd1c: Push("ood6Laska1")
0xd1d: Push((int) 1)
0xd1e: @ SetVariable(Stack[-2], Stack[-1])
0xd1f: Pop(2)
0xd20: Return(); Pop(0)

0xd21: PushEmpty(object, object)
0xd22: Push("d6q01")
0xd23: Push((int) 3)
0xd24: @ SetVariable(Stack[-2], Stack[-1])
0xd25: Pop(2)
0xd26: PushEmpty(object)
0xd27: Call2 0xdff

0xd28: Stack[-2] = Stack[-1]
0xd29: Pop(1)
0xd2a: Push("d6q01LaskaGotoAlbinos")
0xd2b: Push("pt_d6q03_albinos")
0xd2c: Push((int) 1)
0xd2d: Push((int) 515400)
0xd2e: PushEmpty(float)
0xd2f: Call2 0xc90

0xd30: Pop(0)
0xd31: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd32: Pop(5)
0xd33: PushEmpty()
0xd34: Call2 0xdc9

0xd35: Pop(0)
0xd36: PushEmpty(bool, string, string)
0xd37: Stack[-2] = "quest_d6_01"
0xd38: Stack[-1] = "albinos_klara"
0xd39: Call2 0xc84

0xd3a: Pop(3)
0xd3b: Return(); Pop(2)

0xd3c: Stack[-1] = 0
0xd3d: PushEmpty()
0xd3e: Push("d6q01")
0xd3f: Push((int) 4)
0xd40: @ SetVariable(Stack[-2], Stack[-1])
0xd41: Pop(2)
0xd42: PushEmpty(bool, string, string)
0xd43: Stack[-2] = "quest_d6_01"
0xd44: Stack[-1] = "eva_klara"
0xd45: Call2 0xc84

0xd46: Pop(3)
0xd47: Return(); Pop(0)

0xd48: PushEmpty()
0xd49: Push("KnowLaska")
0xd4a: Push((int) 1)
0xd4b: @ SetVariable(Stack[-2], Stack[-1])
0xd4c: Pop(2)
0xd4d: Return(); Pop(0)

0xd4e: PushEmpty()
0xd4f: Push("ood3Laska1")
0xd50: Push((int) 1)
0xd51: @ SetVariable(Stack[-2], Stack[-1])
0xd52: Pop(2)
0xd53: Return(); Pop(0)

0xd54: PushEmpty(object, object)
0xd55: Push("Knife is given")
0xd56: @ Trace(Stack[-1])
0xd57: Pop(1)
0xd58: @ CreateInvItem(Stack[-1])
0xd59: Pop(0)
0xd5a: Push("Knife")
0xd5b: @@ SetItemName(Stack[-1])
0xd5c: Pop(1)
0xd5d: Push("durability")
0xd5e: Push((int) 100)
0xd5f: @@ SetProperty(Stack[-2], Stack[-1])
0xd60: Pop(2)
0xd61: PushEmpty(object, object, int)
0xd62: Stack[-3] = Stack[-7]
0xd63: Stack[-2] = Stack[-4]
0xd64: Stack[-1] = (int) 1
0xd65: Call2 0xc37

0xd66: Pop(3)
0xd67: Return(); Pop(2)

0xd68: Stack[-1] = 0
0xd69: PushEmpty()
0xd6a: PushEmpty(int, string)
0xd6b: Stack[-1] = "ood2Laska1"
0xd6c: Call2 0xc26

0xd6d: Pop(1)
0xd6e: Push((int) 0)
0xd6f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd70: IF (Stack[-1] == 0) GOTO 0xd73; Pop(1)

0xd71: Stack[-2] = (bool) 1
0xd72: Return(); Pop(0)

0xd73: Stack[-2] = (bool) 0
0xd74: Return(); Pop(0)

0xd75: PushEmpty()
0xd76: PushEmpty(int, string)
0xd77: Stack[-1] = "ood2Laska2"
0xd78: Call2 0xc26

0xd79: Pop(1)
0xd7a: Push((int) 0)
0xd7b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd7c: IF (Stack[-1] == 0) GOTO 0xd7f; Pop(1)

0xd7d: Stack[-2] = (bool) 1
0xd7e: Return(); Pop(0)

0xd7f: Stack[-2] = (bool) 0
0xd80: Return(); Pop(0)

0xd81: PushEmpty()
0xd82: PushEmpty(int, string)
0xd83: Stack[-1] = "ood11Laska1"
0xd84: Call2 0xc26

0xd85: Pop(1)
0xd86: Push((int) 0)
0xd87: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd88: IF (Stack[-1] == 0) GOTO 0xd8b; Pop(1)

0xd89: Stack[-2] = (bool) 1
0xd8a: Return(); Pop(0)

0xd8b: Stack[-2] = (bool) 0
0xd8c: Return(); Pop(0)

0xd8d: PushEmpty()
0xd8e: PushEmpty(int, string)
0xd8f: Stack[-1] = "d6q03AlbinosKilled"
0xd90: Call2 0xc26

0xd91: Pop(1)
0xd92: Push((int) 1)
0xd93: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd94: IF (Stack[-1] == 0) GOTO 0xd97; Pop(1)

0xd95: Stack[-2] = (bool) 1
0xd96: Return(); Pop(0)

0xd97: Stack[-2] = (bool) 0
0xd98: Return(); Pop(0)

0xd99: PushEmpty()
0xd9a: PushEmpty(int, string)
0xd9b: Stack[-1] = "d6q01"
0xd9c: Call2 0xc26

0xd9d: Pop(1)
0xd9e: Push((int) 2)
0xd9f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xda0: IF (Stack[-1] == 0) GOTO 0xda3; Pop(1)

0xda1: Stack[-2] = (bool) 1
0xda2: Return(); Pop(0)

0xda3: Stack[-2] = (bool) 0
0xda4: Return(); Pop(0)

0xda5: PushEmpty()
0xda6: PushEmpty(int, string)
0xda7: Stack[-1] = "ood6Laska1"
0xda8: Call2 0xc26

0xda9: Pop(1)
0xdaa: Push((int) 0)
0xdab: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdac: IF (Stack[-1] == 0) GOTO 0xdaf; Pop(1)

0xdad: Stack[-2] = (bool) 1
0xdae: Return(); Pop(0)

0xdaf: Stack[-2] = (bool) 0
0xdb0: Return(); Pop(0)

0xdb1: PushEmpty()
0xdb2: PushEmpty(int, string)
0xdb3: Stack[-1] = "d11q01"
0xdb4: Call2 0xc26

0xdb5: Pop(1)
0xdb6: Push((int) 3)
0xdb7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdb8: IF (Stack[-1] == 0) GOTO 0xdbb; Pop(1)

0xdb9: Stack[-2] = (bool) 1
0xdba: Return(); Pop(0)

0xdbb: Stack[-2] = (bool) 0
0xdbc: Return(); Pop(0)

0xdbd: PushEmpty()
0xdbe: PushEmpty(int, string)
0xdbf: Stack[-1] = "ood3Laska1"
0xdc0: Call2 0xc26

0xdc1: Pop(1)
0xdc2: Push((int) 0)
0xdc3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdc4: IF (Stack[-1] == 0) GOTO 0xdc7; Pop(1)

0xdc5: Stack[-2] = (bool) 1
0xdc6: Return(); Pop(0)

0xdc7: Stack[-2] = (bool) 0
0xdc8: Return(); Pop(0)

0xdc9: PushEmpty(object, object)
0xdca: Push((int) 117)
0xdcb: Push((int) 1)
0xdcc: Push((int) 513740)
0xdcd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xdce: Pop(3)
0xdcf: PushEmpty(bool, object, int)
0xdd0: Stack[-2] = Stack[-4]
0xdd1: Stack[-1] = (int) 111
0xdd2: Call2 0xde3

0xdd3: Pop(3)
0xdd4: Return(); Pop(2)

0xdd5: Stack[-1] = 0
0xdd6: PushEmpty(object, object)
0xdd7: @ GetDiaryRoot(Stack[-1])
0xdd8: Pop(0)
0xdd9: Pop(0); Push((bool) Stack[-1] == 0)
0xdda: IF (Stack[-1] == 0) GOTO 0xde0; Pop(1)

0xddb: Push("Can't retrieve diary root")
0xddc: @ Trace(Stack[-1])
0xddd: Pop(1)
0xdde: Stack[-3] = (bool) 0
0xddf: Return(); Pop(2)

0xde0: Stack[-3] = Stack[-1]
0xde1: Return(); Pop(2)

0xde2: Stack[-1] = 0
0xde3: PushEmpty(object, object, int, object, object, int)
0xde4: PushEmpty(object)
0xde5: Call2 0xdd6

0xde6: Stack[-4] = Stack[-1]
0xde7: Pop(1)
0xde8: @@ Find(Stack[-7], Stack[-2])
0xde9: Pop(0)
0xdea: Pop(0); Push((bool) Stack[-2] == 0)
0xdeb: IF (Stack[-1] == 0) GOTO 0xdf2; Pop(1)

0xdec: Push("Can't find diary parent with id: ")
0xded: Pop(1); Push(Stack[-1] + Stack[-8]);
0xdee: @ Trace(Stack[-1])
0xdef: Pop(1)
0xdf0: Stack[-9] = (bool) 0
0xdf1: Return(); Pop(6)

0xdf2: @@ AddChild(Stack[-8])
0xdf3: Pop(0)
0xdf4: Push((int) 7)
0xdf5: @ SendWorldWndMessage(Stack[-1])
0xdf6: Pop(1)
0xdf7: @@ GetCategory(Stack[-1])
0xdf8: Pop(0)
0xdf9: @ SetDiarySection(Stack[-1])
0xdfa: Pop(0)
0xdfb: Stack[-9] = (bool) 0
0xdfc: Return(); Pop(6)

0xdfd: Stack[-2] = 0
0xdfe: Stack[-3] = 0
0xdff: PushEmpty(object, object, object, object)
0xe00: @ GetMainOutdoorScene(Stack[-2])
0xe01: Pop(0)
0xe02: Pop(0); Push((bool) Stack[-2] == 0)
0xe03: IF (Stack[-1] == 0) GOTO 0xe0a; Pop(1)

0xe04: Push("Can't find main outdoor scene")
0xe05: @ Trace(Stack[-1])
0xe06: Pop(1)
0xe07: Stack[-1] = 0
0xe08: Stack[-5] = Stack[-1]
0xe09: Return(); Pop(4)

0xe0a: @@ GetMap(Stack[-1])
0xe0b: Pop(0)
0xe0c: Stack[-5] = Stack[-1]
0xe0d: Return(); Pop(4)

0xe0e: Stack[-1] = 0
0xe0f: Stack[-2] = 0
0xe10: PushEmpty(int, int)
0xe11: Push("branch")
0xe12: @ GetVariable(Stack[-1], Stack[-2])
0xe13: Pop(1)
0xe14: Push((int) 0)
0xe15: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe16: IF (Stack[-1] == 0) GOTO 0xe1a; Pop(1)

0xe17: Stack[-3] = (int) 1
0xe18: Return(); Pop(2)

0xe19: GOTO 0xe1f

0xe1a: Push((int) 1)
0xe1b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe1c: IF (Stack[-1] == 0) GOTO 0xe1f; Pop(1)

0xe1d: Stack[-3] = (int) 2
0xe1e: Return(); Pop(2)

0xe1f: Stack[-3] = (int) 3
0xe20: Return(); Pop(2)

0xe21: PushEmpty(int, int)
0xe22: Push("mt_laska")
0xe23: @ GetVariable(Stack[-1], Stack[-2])
0xe24: Pop(1)
0xe25: Pop(0); Push((bool) Stack[-1] == 0)
0xe26: IF (Stack[-1] == 0) GOTO 0xe31; Pop(1)

0xe27: PushEmpty(int, object)
0xe28: Stack[-1] = Stack[-5]
0xe29: Push(-2, 1); TaskCall(0)
0xe2a: Call2 0x0

0xe2b: Pop(-2, 1); TaskReturn
0xe2c: Pop(2)
0xe2d: Push("mt_laska")
0xe2e: Push((int) 1)
0xe2f: @ SetVariable(Stack[-2], Stack[-1])
0xe30: Pop(2)
0xe31: PushEmpty(bool, int)
0xe32: Stack[-1] = (int) 2
0xe33: Call2 0xc9e

0xe34: Pop(1)
0xe35: IF (Stack[-1] == 0) GOTO 0xe3d; Pop(1)

0xe36: PushEmpty(int, object)
0xe37: Stack[-1] = Stack[-5]
0xe38: Push(-2, 1); TaskCall(2)
0xe39: Call2 0x115

0xe3a: Pop(-2, 1); TaskReturn
0xe3b: Pop(2)
0xe3c: Return(); Pop(2)

0xe3d: PushEmpty(bool, int)
0xe3e: Stack[-1] = (int) 3
0xe3f: Call2 0xc9e

0xe40: Pop(1)
0xe41: IF (Stack[-1] == 0) GOTO 0xe49; Pop(1)

0xe42: PushEmpty(int, object)
0xe43: Stack[-1] = Stack[-5]
0xe44: Push(-2, 1); TaskCall(4)
0xe45: Call2 0x375

0xe46: Pop(-2, 1); TaskReturn
0xe47: Pop(2)
0xe48: Return(); Pop(2)

0xe49: PushEmpty(bool, int)
0xe4a: Stack[-1] = (int) 6
0xe4b: Call2 0xc9e

0xe4c: Pop(1)
0xe4d: IF (Stack[-1] == 0) GOTO 0xe55; Pop(1)

0xe4e: PushEmpty(int, object)
0xe4f: Stack[-1] = Stack[-5]
0xe50: Push(-2, 1); TaskCall(6)
0xe51: Call2 0x4ac

0xe52: Pop(-2, 1); TaskReturn
0xe53: Pop(2)
0xe54: Return(); Pop(2)

0xe55: PushEmpty(bool, int)
0xe56: Stack[-1] = (int) 11
0xe57: Call2 0xc9e

0xe58: Pop(1)
0xe59: IF (Stack[-1] == 0) GOTO 0xe61; Pop(1)

0xe5a: PushEmpty(int, object)
0xe5b: Stack[-1] = Stack[-5]
0xe5c: Push(-2, 1); TaskCall(10)
0xe5d: Call2 0x76c

0xe5e: Pop(-2, 1); TaskReturn
0xe5f: Pop(2)
0xe60: Return(); Pop(2)

0xe61: PushEmpty(bool, int)
0xe62: Stack[-1] = (int) 12
0xe63: Call2 0xc9e

0xe64: Pop(1)
0xe65: IF (Stack[-1] == 0) GOTO 0xe6d; Pop(1)

0xe66: PushEmpty(int, object)
0xe67: Stack[-1] = Stack[-5]
0xe68: Push(-2, 1); TaskCall(8)
0xe69: Call2 0x669

0xe6a: Pop(-2, 1); TaskReturn
0xe6b: Pop(2)
0xe6c: Return(); Pop(2)

0xe6d: PushEmpty(int, object)
0xe6e: Stack[-1] = Stack[-5]
0xe6f: Push(-2, 1); TaskCall(12)
0xe70: Call2 0x8e8

0xe71: Pop(-2, 1); TaskReturn
0xe72: Pop(2)
0xe73: Return(); Pop(2)

