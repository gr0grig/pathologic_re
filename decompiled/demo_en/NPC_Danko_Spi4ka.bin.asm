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
	ood2Spi4ka1
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

RunOp = 0xacb
RunTask = 12

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1ae Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2e9 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x585 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x812 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xaa1 Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xb17 Vars = (int)
		EVENT_6 Op = 0xb3d Vars = ()
		EVENT_5 Op = 0xb4c Vars = ()
		EVENT_45 Op = 0xb59 Vars = (bool)
		EVENT_0 Op = 0xb65 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xbf5

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xd98

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xd96

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xd9a

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xd9c

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xf6e

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
0x31: Call2 0xd09

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xc4a

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
0x48: Call2 0xc39

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
0x5b: Push((int) 535284)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 535285)
0x61: Push((int) 36962)
0x62: Push((int) 36961)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 535292)
0x66: Push((int) -1)
0x67: Push((int) 36968)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 535293)
0x6b: Push((int) -1)
0x6c: Push((int) 36969)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0xd9e

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0xcd4

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
0x92: Call2 0xd9e

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
0xa2: Call2 0xce4

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0xd02

0xab: Pop(0)
0xac: Push((int) 36960)
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xaf: PushEmpty(string)
0xb0: Stack[-1] = "Neutral"
0xb1: Call2 0x90

0xb2: Pop(1)
0xb3: Push((int) 535284)
0xb4: @@ SetMessage(Stack[-1])
0xb5: Pop(1)
0xb6: @@ ClearReplies()
0xb7: Pop(0)
0xb8: Push((int) 535285)
0xb9: Push((int) 36962)
0xba: Push((int) 36961)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Push((int) 535292)
0xbe: Push((int) -1)
0xbf: Push((int) 36968)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: Push((int) 535293)
0xc3: Push((int) -1)
0xc4: Push((int) 36969)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Return(); Pop(0)

0xc8: Push((int) 36962)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0x90

0xce: Pop(1)
0xcf: Push((int) 535286)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 535287)
0xd5: Push((int) 36964)
0xd6: Push((int) 36963)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 535291)
0xda: Push((int) -1)
0xdb: Push((int) 36967)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 36964)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call2 0x90

0xe5: Pop(1)
0xe6: Push((int) 535288)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 535289)
0xec: Push((int) -1)
0xed: Push((int) 36965)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 535290)
0xf1: Push((int) -1)
0xf2: Push((int) 36966)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf7: PushEmpty(bool)
0xf8: Call2 0xd9e

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
0x108: Call2 0xbf5

0x109: Pop(2)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-10] = (int) -2
0x10d: Return(); Pop(8)

0x10e: @ CreateDialog(Stack[-4])
0x10f: Pop(0)
0x110: PushEmpty(int)
0x111: Call2 0xd98

0x112: Pop(0)
0x113: @@ SetNPCName(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(int)
0x116: Call2 0xd96

0x117: Pop(0)
0x118: @@ SetNPCDescription(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(string)
0x11b: Call2 0xd9a

0x11c: Pop(0)
0x11d: @@ SetPhoto(Stack[-1])
0x11e: Pop(1)
0x11f: PushEmpty(string)
0x120: Call2 0xd9c

0x121: Pop(0)
0x122: @@ SetPhoto2(Stack[-1])
0x123: Pop(1)
0x124: PushEmpty(int)
0x125: Call2 0xf6e

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
0x134: Call2 0xd09

0x135: Stack[-2] = Stack[-1]
0x136: Pop(1)
0x137: Call2 0xc4a

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
0x14b: Call2 0xc39

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
0x159: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x15a: PushEmpty(object, object)
0x15b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15d: Call2 0xe1b

0x15e: Pop(2)
0x15f: PushEmpty(string)
0x160: Stack[-1] = "Neutral"
0x161: Call2 0x198

0x162: Pop(1)
0x163: Push((int) 500356)
0x164: @@ SetMessage(Stack[-1])
0x165: Pop(1)
0x166: @@ ClearReplies()
0x167: Pop(0)
0x168: Push((int) 500357)
0x169: Push((int) 417)
0x16a: Push((int) 414)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: Push((int) 500358)
0x16e: Push((int) 418)
0x16f: Push((int) 415)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: Push((int) 500359)
0x173: Push((int) -1)
0x174: Push((int) 416)
0x175: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x176: Pop(3)
0x177: GOTO 0x17a

0x178: Return(); Pop(0)

0x179: GOTO 0x158

0x17a: PushEmpty(bool)
0x17b: Call2 0xd9e

0x17c: Pop(0)
0x17d: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x17e: @ lshWaitForAnimEnd()
0x17f: Pop(0)
0x180: Push( Stack[3 + Tasks[-1].StackPointer] )
0x181: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x182: GOTO 0x188

0x183: PushEmpty(string)
0x184: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x185: Call2 0xcd4

0x186: Pop(1)
0x187: GOTO 0x17e

0x188: GOTO 0x197

0x189: Push("all")
0x18a: Push("idle")
0x18b: @ PlayAnimation(Stack[-2], Stack[-1])
0x18c: Pop(2)
0x18d: @ WaitForAnimEnd()
0x18e: Pop(0)
0x18f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x190: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x191: GOTO 0x197

0x192: Push("all")
0x193: Push("idle")
0x194: @ PlayAnimation(Stack[-2], Stack[-1])
0x195: Pop(2)
0x196: GOTO 0x18d

0x197: Return(); Pop(0)

0x198: PushEmpty()
0x199: PushEmpty(bool)
0x19a: Call2 0xd9e

0x19b: Pop(0)
0x19c: Pop(1); Push((bool) Stack[-1] == 0)
0x19d: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19e: Return(); Pop(0)

0x19f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a1: Return(); Pop(0)

0x1a2: PushEmpty(string, bool)
0x1a3: Stack[-2] = Stack[-3]
0x1a4: Push("")
0x1a5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a7: Stack[-1] = (bool) 0
0x1a8: GOTO 0x1aa

0x1a9: Stack[-1] = (bool) 1
0x1aa: Call2 0xce4

0x1ab: Pop(2)
0x1ac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1ad: Return(); Pop(0)

0x1ae: PushEmpty()
0x1af: Push((int) 1)
0x1b0: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x1b1: PushEmpty()
0x1b2: Call2 0xd02

0x1b3: Pop(0)
0x1b4: Push((int) 413)
0x1b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1b7: PushEmpty(object, object)
0x1b8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ba: Call2 0xe1b

0x1bb: Pop(2)
0x1bc: PushEmpty(string)
0x1bd: Stack[-1] = "Neutral"
0x1be: Call2 0x198

0x1bf: Pop(1)
0x1c0: Push((int) 500356)
0x1c1: @@ SetMessage(Stack[-1])
0x1c2: Pop(1)
0x1c3: @@ ClearReplies()
0x1c4: Pop(0)
0x1c5: Push((int) 500357)
0x1c6: Push((int) 417)
0x1c7: Push((int) 414)
0x1c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c9: Pop(3)
0x1ca: Push((int) 500358)
0x1cb: Push((int) 418)
0x1cc: Push((int) 415)
0x1cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ce: Pop(3)
0x1cf: Push((int) 500359)
0x1d0: Push((int) -1)
0x1d1: Push((int) 416)
0x1d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d3: Pop(3)
0x1d4: Return(); Pop(0)

0x1d5: Push((int) 418)
0x1d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1d8: PushEmpty(string)
0x1d9: Stack[-1] = "Neutral"
0x1da: Call2 0x198

0x1db: Pop(1)
0x1dc: Push((int) 500361)
0x1dd: @@ SetMessage(Stack[-1])
0x1de: Pop(1)
0x1df: @@ ClearReplies()
0x1e0: Pop(0)
0x1e1: Push((int) 500362)
0x1e2: Push((int) 417)
0x1e3: Push((int) 419)
0x1e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e5: Pop(3)
0x1e6: Push((int) 500363)
0x1e7: Push((int) -1)
0x1e8: Push((int) 420)
0x1e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ea: Pop(3)
0x1eb: Return(); Pop(0)

0x1ec: Push((int) 417)
0x1ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1ef: PushEmpty(string)
0x1f0: Stack[-1] = "Neutral"
0x1f1: Call2 0x198

0x1f2: Pop(1)
0x1f3: Push((int) 500360)
0x1f4: @@ SetMessage(Stack[-1])
0x1f5: Pop(1)
0x1f6: @@ ClearReplies()
0x1f7: Pop(0)
0x1f8: Push((int) 500364)
0x1f9: Push((int) 425)
0x1fa: Push((int) 423)
0x1fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fc: Pop(3)
0x1fd: Push((int) 500365)
0x1fe: Push((int) 425)
0x1ff: Push((int) 424)
0x200: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x201: Pop(3)
0x202: Return(); Pop(0)

0x203: Push((int) 425)
0x204: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x206: PushEmpty(string)
0x207: Stack[-1] = "Neutral"
0x208: Call2 0x198

0x209: Pop(1)
0x20a: Push((int) 500366)
0x20b: @@ SetMessage(Stack[-1])
0x20c: Pop(1)
0x20d: @@ ClearReplies()
0x20e: Pop(0)
0x20f: Push((int) 500367)
0x210: Push((int) -1)
0x211: Push((int) 426)
0x212: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x213: Pop(3)
0x214: Push((int) 500368)
0x215: Push((int) -1)
0x216: Push((int) 427)
0x217: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x218: Pop(3)
0x219: Return(); Pop(0)

0x21a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x21b: PushEmpty(bool)
0x21c: Call2 0xd9e

0x21d: Pop(0)
0x21e: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21f: @ lshStopAnimation()
0x220: Pop(0)
0x221: GOTO 0x224

0x222: @ StopAnimation()
0x223: Pop(0)
0x224: Return(); Pop(0)

0x225: GOTO 0x1af

0x226: Return(); Pop(0)

0x227: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x228: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x229: PushEmpty(bool, object, float)
0x22a: Stack[-2] = Stack[-12]
0x22b: Stack[-1] = (float) 70.0
0x22c: Call2 0xbf5

0x22d: Pop(2)
0x22e: Pop(1); Push((bool) Stack[-1] == 0)
0x22f: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x230: Stack[-10] = (int) -2
0x231: Return(); Pop(8)

0x232: @ CreateDialog(Stack[-4])
0x233: Pop(0)
0x234: PushEmpty(int)
0x235: Call2 0xd98

0x236: Pop(0)
0x237: @@ SetNPCName(Stack[-1])
0x238: Pop(1)
0x239: PushEmpty(int)
0x23a: Call2 0xd96

0x23b: Pop(0)
0x23c: @@ SetNPCDescription(Stack[-1])
0x23d: Pop(1)
0x23e: PushEmpty(string)
0x23f: Call2 0xd9a

0x240: Pop(0)
0x241: @@ SetPhoto(Stack[-1])
0x242: Pop(1)
0x243: PushEmpty(string)
0x244: Call2 0xd9c

0x245: Pop(0)
0x246: @@ SetPhoto2(Stack[-1])
0x247: Pop(1)
0x248: PushEmpty(int)
0x249: Call2 0xf6e

0x24a: Pop(0)
0x24b: @@ SetPlayerName(Stack[-1])
0x24c: Pop(1)
0x24d: Stack[-2] = (int) -1
0x24e: @ IsOverrideActive(Stack[-3])
0x24f: Pop(0)
0x250: Push(Stack[-3])
0x251: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x252: Stack[-10] = (int) -2
0x253: Return(); Pop(8)

0x254: @ DoDialog(Stack[-4])
0x255: Pop(0)
0x256: PushEmpty(bool, object)
0x257: PushEmpty(object)
0x258: Call2 0xd09

0x259: Stack[-2] = Stack[-1]
0x25a: Pop(1)
0x25b: Call2 0xc4a

0x25c: Pop(2)
0x25d: PushEmpty(object, object)
0x25e: Stack[-2] = Stack[-11]
0x25f: Stack[-1] = Stack[-6]
0x260: Push(-2, 4); TaskCall(5)
0x261: Call2 0x278

0x262: Pop(-2, 4); TaskReturn
0x263: Pop(2)
0x264: @@ IsDialogEnd(Stack[-1])
0x265: Pop(0)
0x266: Pop(0); Push((bool) Stack[-1] == 0)
0x267: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x268: @ sync()
0x269: Pop(0)
0x26a: @@ IsDialogEnd(Stack[-1])
0x26b: Pop(0)
0x26c: GOTO 0x266

0x26d: PushEmpty(object)
0x26e: Stack[-1] = Stack[-10]
0x26f: Call2 0xc39

0x270: Pop(1)
0x271: @ StopDialog(Stack[-4])
0x272: Pop(0)
0x273: @@ GetReturnValue(Stack[-2])
0x274: Pop(0)
0x275: Stack[-10] = Stack[-2]
0x276: Return(); Pop(8)

0x277: Stack[-4] = 0
0x278: PushEmpty()
0x279: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x27a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x27b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x27c: Push((int) 1)
0x27d: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x27e: PushEmpty(string)
0x27f: Stack[-1] = "Serious"
0x280: Call2 0x2d3

0x281: Pop(1)
0x282: Push((int) 506715)
0x283: @@ SetMessage(Stack[-1])
0x284: Pop(1)
0x285: @@ ClearReplies()
0x286: Pop(0)
0x287: PushEmpty(bool)
0x288: Stack[-1] = (bool) 0
0x289: PushEmpty(bool, object)
0x28a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28b: Call2 0xe2b

0x28c: Pop(1)
0x28d: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x28e: PushEmpty(bool, object)
0x28f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x290: Call2 0xe37

0x291: Pop(1)
0x292: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x293: Stack[-1] = (bool) 1
0x294: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x295: Push((int) 507429)
0x296: Push((int) 7355)
0x297: Push((int) 8200)
0x298: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x299: Pop(3)
0x29a: PushEmpty(bool)
0x29b: Stack[-1] = (bool) 0
0x29c: PushEmpty(bool, object)
0x29d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29e: Call2 0xeb7

0x29f: Pop(1)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a1: PushEmpty(bool, object)
0x2a2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a3: Call2 0xec3

0x2a4: Pop(1)
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a6: Stack[-1] = (bool) 1
0x2a7: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a8: Push((int) 514516)
0x2a9: Push((int) 15756)
0x2aa: Push((int) 15755)
0x2ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ac: Pop(3)
0x2ad: Push((int) 507534)
0x2ae: Push((int) -1)
0x2af: Push((int) 8316)
0x2b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b1: Pop(3)
0x2b2: GOTO 0x2b5

0x2b3: Return(); Pop(0)

0x2b4: GOTO 0x27c

0x2b5: PushEmpty(bool)
0x2b6: Call2 0xd9e

0x2b7: Pop(0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2b9: @ lshWaitForAnimEnd()
0x2ba: Pop(0)
0x2bb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2bc: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bd: GOTO 0x2c3

0x2be: PushEmpty(string)
0x2bf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2c0: Call2 0xcd4

0x2c1: Pop(1)
0x2c2: GOTO 0x2b9

0x2c3: GOTO 0x2d2

0x2c4: Push("all")
0x2c5: Push("idle")
0x2c6: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c7: Pop(2)
0x2c8: @ WaitForAnimEnd()
0x2c9: Pop(0)
0x2ca: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2cb: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cc: GOTO 0x2d2

0x2cd: Push("all")
0x2ce: Push("idle")
0x2cf: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d0: Pop(2)
0x2d1: GOTO 0x2c8

0x2d2: Return(); Pop(0)

0x2d3: PushEmpty()
0x2d4: PushEmpty(bool)
0x2d5: Call2 0xd9e

0x2d6: Pop(0)
0x2d7: Pop(1); Push((bool) Stack[-1] == 0)
0x2d8: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d9: Return(); Pop(0)

0x2da: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2db: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2dc: Return(); Pop(0)

0x2dd: PushEmpty(string, bool)
0x2de: Stack[-2] = Stack[-3]
0x2df: Push("")
0x2e0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e2: Stack[-1] = (bool) 0
0x2e3: GOTO 0x2e5

0x2e4: Stack[-1] = (bool) 1
0x2e5: Call2 0xce4

0x2e6: Pop(2)
0x2e7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2e8: Return(); Pop(0)

0x2e9: PushEmpty()
0x2ea: Push((int) 1)
0x2eb: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x2ec: PushEmpty()
0x2ed: Call2 0xd02

0x2ee: Pop(0)
0x2ef: Push((int) 7358)
0x2f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f2: PushEmpty(object, object)
0x2f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f5: Call2 0xdbf

0x2f6: Pop(2)
0x2f7: PushEmpty(object, object)
0x2f8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fa: Call2 0xdc5

0x2fb: Pop(2)
0x2fc: Push((int) 7363)
0x2fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2fe: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x2ff: PushEmpty(object, object)
0x300: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x301: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x302: Call2 0xdbf

0x303: Pop(2)
0x304: PushEmpty(object, object)
0x305: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x306: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x307: Call2 0xdc5

0x308: Pop(2)
0x309: Push((int) 15755)
0x30a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30b: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x30c: PushEmpty(object, object)
0x30d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x30e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30f: Call2 0xe15

0x310: Pop(2)
0x311: Push((int) 7402)
0x312: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x313: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x314: PushEmpty(string)
0x315: Stack[-1] = "Serious"
0x316: Call2 0x2d3

0x317: Pop(1)
0x318: Push((int) 506715)
0x319: @@ SetMessage(Stack[-1])
0x31a: Pop(1)
0x31b: @@ ClearReplies()
0x31c: Pop(0)
0x31d: PushEmpty(bool)
0x31e: Stack[-1] = (bool) 0
0x31f: PushEmpty(bool, object)
0x320: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x321: Call2 0xe2b

0x322: Pop(1)
0x323: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x324: PushEmpty(bool, object)
0x325: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x326: Call2 0xe37

0x327: Pop(1)
0x328: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x329: Stack[-1] = (bool) 1
0x32a: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32b: Push((int) 507429)
0x32c: Push((int) 7355)
0x32d: Push((int) 8200)
0x32e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32f: Pop(3)
0x330: PushEmpty(bool)
0x331: Stack[-1] = (bool) 0
0x332: PushEmpty(bool, object)
0x333: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x334: Call2 0xeb7

0x335: Pop(1)
0x336: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x337: PushEmpty(bool, object)
0x338: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x339: Call2 0xec3

0x33a: Pop(1)
0x33b: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33c: Stack[-1] = (bool) 1
0x33d: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x33e: Push((int) 514516)
0x33f: Push((int) 15756)
0x340: Push((int) 15755)
0x341: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x342: Pop(3)
0x343: Push((int) 507534)
0x344: Push((int) -1)
0x345: Push((int) 8316)
0x346: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x347: Pop(3)
0x348: Return(); Pop(0)

0x349: Push((int) 10460)
0x34a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34b: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x34c: Push((int) 10462)
0x34d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34e: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x34f: PushEmpty(string)
0x350: Stack[-1] = "Serious"
0x351: Call2 0x2d3

0x352: Pop(1)
0x353: Push((int) 509519)
0x354: @@ SetMessage(Stack[-1])
0x355: Pop(1)
0x356: @@ ClearReplies()
0x357: Pop(0)
0x358: Push((int) 509520)
0x359: Push((int) 10464)
0x35a: Push((int) 10463)
0x35b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35c: Pop(3)
0x35d: Push((int) 509530)
0x35e: Push((int) 10466)
0x35f: Push((int) 10474)
0x360: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x361: Pop(3)
0x362: Return(); Pop(0)

0x363: Push((int) 10464)
0x364: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x366: PushEmpty(string)
0x367: Stack[-1] = "Neutral"
0x368: Call2 0x2d3

0x369: Pop(1)
0x36a: Push((int) 509521)
0x36b: @@ SetMessage(Stack[-1])
0x36c: Pop(1)
0x36d: @@ ClearReplies()
0x36e: Pop(0)
0x36f: Push((int) 509522)
0x370: Push((int) 10466)
0x371: Push((int) 10465)
0x372: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x373: Pop(3)
0x374: Push((int) 509529)
0x375: Push((int) 10466)
0x376: Push((int) 10472)
0x377: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x378: Pop(3)
0x379: Return(); Pop(0)

0x37a: Push((int) 10466)
0x37b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37c: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x37d: PushEmpty(string)
0x37e: Stack[-1] = "Fear"
0x37f: Call2 0x2d3

0x380: Pop(1)
0x381: Push((int) 509523)
0x382: @@ SetMessage(Stack[-1])
0x383: Pop(1)
0x384: @@ ClearReplies()
0x385: Pop(0)
0x386: Push((int) 509524)
0x387: Push((int) 10468)
0x388: Push((int) 10467)
0x389: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38a: Pop(3)
0x38b: Push((int) 509528)
0x38c: Push((int) -1)
0x38d: Push((int) 10471)
0x38e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38f: Pop(3)
0x390: Return(); Pop(0)

0x391: Push((int) 10468)
0x392: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x394: PushEmpty(string)
0x395: Stack[-1] = "Secret"
0x396: Call2 0x2d3

0x397: Pop(1)
0x398: Push((int) 509525)
0x399: @@ SetMessage(Stack[-1])
0x39a: Pop(1)
0x39b: @@ ClearReplies()
0x39c: Pop(0)
0x39d: Push((int) 509526)
0x39e: Push((int) -1)
0x39f: Push((int) 10469)
0x3a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a1: Pop(3)
0x3a2: Push((int) 509527)
0x3a3: Push((int) -1)
0x3a4: Push((int) 10470)
0x3a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a6: Pop(3)
0x3a7: Return(); Pop(0)

0x3a8: Push((int) 15756)
0x3a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3ab: PushEmpty(string)
0x3ac: Stack[-1] = "Neutral"
0x3ad: Call2 0x2d3

0x3ae: Pop(1)
0x3af: Push((int) 514517)
0x3b0: @@ SetMessage(Stack[-1])
0x3b1: Pop(1)
0x3b2: @@ ClearReplies()
0x3b3: Pop(0)
0x3b4: Push((int) 514518)
0x3b5: Push((int) -1)
0x3b6: Push((int) 15757)
0x3b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b8: Pop(3)
0x3b9: Return(); Pop(0)

0x3ba: Push((int) 7385)
0x3bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bd: Push((int) 7387)
0x3be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3c0: PushEmpty(string)
0x3c1: Stack[-1] = "Azart"
0x3c2: Call2 0x2d3

0x3c3: Pop(1)
0x3c4: Push((int) 506701)
0x3c5: @@ SetMessage(Stack[-1])
0x3c6: Pop(1)
0x3c7: @@ ClearReplies()
0x3c8: Pop(0)
0x3c9: Push((int) 506702)
0x3ca: Push((int) 7389)
0x3cb: Push((int) 7388)
0x3cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cd: Pop(3)
0x3ce: Push((int) 506712)
0x3cf: Push((int) -1)
0x3d0: Push((int) 7398)
0x3d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d2: Pop(3)
0x3d3: Return(); Pop(0)

0x3d4: Push((int) 7389)
0x3d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3d7: PushEmpty(string)
0x3d8: Stack[-1] = "Secret"
0x3d9: Call2 0x2d3

0x3da: Pop(1)
0x3db: Push((int) 506703)
0x3dc: @@ SetMessage(Stack[-1])
0x3dd: Pop(1)
0x3de: @@ ClearReplies()
0x3df: Pop(0)
0x3e0: Push((int) 506704)
0x3e1: Push((int) 7391)
0x3e2: Push((int) 7390)
0x3e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e4: Pop(3)
0x3e5: Push((int) 506711)
0x3e6: Push((int) -1)
0x3e7: Push((int) 7397)
0x3e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e9: Pop(3)
0x3ea: Return(); Pop(0)

0x3eb: Push((int) 7391)
0x3ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3ee: PushEmpty(string)
0x3ef: Stack[-1] = "Secret"
0x3f0: Call2 0x2d3

0x3f1: Pop(1)
0x3f2: Push((int) 506705)
0x3f3: @@ SetMessage(Stack[-1])
0x3f4: Pop(1)
0x3f5: @@ ClearReplies()
0x3f6: Pop(0)
0x3f7: Push((int) 506706)
0x3f8: Push((int) 7393)
0x3f9: Push((int) 7392)
0x3fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fb: Pop(3)
0x3fc: Push((int) 506710)
0x3fd: Push((int) -1)
0x3fe: Push((int) 7396)
0x3ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x400: Pop(3)
0x401: Return(); Pop(0)

0x402: Push((int) 7393)
0x403: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x404: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x405: PushEmpty(string)
0x406: Stack[-1] = "Secret"
0x407: Call2 0x2d3

0x408: Pop(1)
0x409: Push((int) 506707)
0x40a: @@ SetMessage(Stack[-1])
0x40b: Pop(1)
0x40c: @@ ClearReplies()
0x40d: Pop(0)
0x40e: Push((int) 506708)
0x40f: Push((int) -1)
0x410: Push((int) 7394)
0x411: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x412: Pop(3)
0x413: Push((int) 506709)
0x414: Push((int) -1)
0x415: Push((int) 7395)
0x416: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x417: Pop(3)
0x418: Return(); Pop(0)

0x419: Push((int) 7355)
0x41a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41b: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x41c: PushEmpty(string)
0x41d: Stack[-1] = "Fear"
0x41e: Call2 0x2d3

0x41f: Pop(1)
0x420: Push((int) 506674)
0x421: @@ SetMessage(Stack[-1])
0x422: Pop(1)
0x423: @@ ClearReplies()
0x424: Pop(0)
0x425: Push((int) 506675)
0x426: Push((int) 7357)
0x427: Push((int) 7356)
0x428: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x429: Pop(3)
0x42a: Return(); Pop(0)

0x42b: Push((int) 7373)
0x42c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42d: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42e: Push((int) 7377)
0x42f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x430: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x431: PushEmpty(string)
0x432: Stack[-1] = "Azart"
0x433: Call2 0x2d3

0x434: Pop(1)
0x435: Push((int) 506693)
0x436: @@ SetMessage(Stack[-1])
0x437: Pop(1)
0x438: @@ ClearReplies()
0x439: Pop(0)
0x43a: Push((int) 506694)
0x43b: Push((int) 7362)
0x43c: Push((int) 7378)
0x43d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43e: Pop(3)
0x43f: Push((int) 506695)
0x440: Push((int) 7381)
0x441: Push((int) 7380)
0x442: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x443: Pop(3)
0x444: Return(); Pop(0)

0x445: Push((int) 7381)
0x446: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x447: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x448: PushEmpty(string)
0x449: Stack[-1] = "Azart"
0x44a: Call2 0x2d3

0x44b: Pop(1)
0x44c: Push((int) 506696)
0x44d: @@ SetMessage(Stack[-1])
0x44e: Pop(1)
0x44f: @@ ClearReplies()
0x450: Pop(0)
0x451: Push((int) 506697)
0x452: Push((int) -1)
0x453: Push((int) 7382)
0x454: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x455: Pop(3)
0x456: Push((int) 506698)
0x457: Push((int) 7362)
0x458: Push((int) 7383)
0x459: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45a: Pop(3)
0x45b: Return(); Pop(0)

0x45c: Push((int) 7357)
0x45d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45e: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x45f: PushEmpty(string)
0x460: Stack[-1] = "Fear"
0x461: Call2 0x2d3

0x462: Pop(1)
0x463: Push((int) 506676)
0x464: @@ SetMessage(Stack[-1])
0x465: Pop(1)
0x466: @@ ClearReplies()
0x467: Pop(0)
0x468: Push((int) 533950)
0x469: Push((int) 35515)
0x46a: Push((int) 35514)
0x46b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46c: Pop(3)
0x46d: Return(); Pop(0)

0x46e: Push((int) 35515)
0x46f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x470: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x471: PushEmpty(string)
0x472: Stack[-1] = "Fear"
0x473: Call2 0x2d3

0x474: Pop(1)
0x475: Push((int) 533951)
0x476: @@ SetMessage(Stack[-1])
0x477: Pop(1)
0x478: @@ ClearReplies()
0x479: Pop(0)
0x47a: Push((int) 506677)
0x47b: Push((int) -1)
0x47c: Push((int) 7358)
0x47d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47e: Pop(3)
0x47f: Push((int) 506678)
0x480: Push((int) 7360)
0x481: Push((int) 7359)
0x482: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x483: Pop(3)
0x484: Return(); Pop(0)

0x485: Push((int) 7360)
0x486: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x487: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x488: PushEmpty(string)
0x489: Stack[-1] = "Fear"
0x48a: Call2 0x2d3

0x48b: Pop(1)
0x48c: Push((int) 506679)
0x48d: @@ SetMessage(Stack[-1])
0x48e: Pop(1)
0x48f: @@ ClearReplies()
0x490: Pop(0)
0x491: Push((int) 506680)
0x492: Push((int) 7362)
0x493: Push((int) 7361)
0x494: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x495: Pop(3)
0x496: Push((int) 506683)
0x497: Push((int) 7365)
0x498: Push((int) 7364)
0x499: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49a: Pop(3)
0x49b: Push((int) 506686)
0x49c: Push((int) 7369)
0x49d: Push((int) 7368)
0x49e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49f: Pop(3)
0x4a0: Return(); Pop(0)

0x4a1: Push((int) 7369)
0x4a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a3: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4a4: PushEmpty(string)
0x4a5: Stack[-1] = "Fear"
0x4a6: Call2 0x2d3

0x4a7: Pop(1)
0x4a8: Push((int) 506687)
0x4a9: @@ SetMessage(Stack[-1])
0x4aa: Pop(1)
0x4ab: @@ ClearReplies()
0x4ac: Pop(0)
0x4ad: Push((int) 506688)
0x4ae: Push((int) 7362)
0x4af: Push((int) 7370)
0x4b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b1: Pop(3)
0x4b2: Return(); Pop(0)

0x4b3: Push((int) 7365)
0x4b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4b6: PushEmpty(string)
0x4b7: Stack[-1] = "Serious"
0x4b8: Call2 0x2d3

0x4b9: Pop(1)
0x4ba: Push((int) 506684)
0x4bb: @@ SetMessage(Stack[-1])
0x4bc: Pop(1)
0x4bd: @@ ClearReplies()
0x4be: Pop(0)
0x4bf: Push((int) 506685)
0x4c0: Push((int) 7362)
0x4c1: Push((int) 7366)
0x4c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c3: Pop(3)
0x4c4: Return(); Pop(0)

0x4c5: Push((int) 7362)
0x4c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c7: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4c8: PushEmpty(string)
0x4c9: Stack[-1] = "Secret"
0x4ca: Call2 0x2d3

0x4cb: Pop(1)
0x4cc: Push((int) 506681)
0x4cd: @@ SetMessage(Stack[-1])
0x4ce: Pop(1)
0x4cf: @@ ClearReplies()
0x4d0: Pop(0)
0x4d1: Push((int) 506682)
0x4d2: Push((int) -1)
0x4d3: Push((int) 7363)
0x4d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d5: Pop(3)
0x4d6: Return(); Pop(0)

0x4d7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4d8: PushEmpty(bool)
0x4d9: Call2 0xd9e

0x4da: Pop(0)
0x4db: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4dc: @ lshStopAnimation()
0x4dd: Pop(0)
0x4de: GOTO 0x4e1

0x4df: @ StopAnimation()
0x4e0: Pop(0)
0x4e1: Return(); Pop(0)

0x4e2: GOTO 0x2ea

0x4e3: Return(); Pop(0)

0x4e4: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4e5: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4e6: PushEmpty(bool, object, float)
0x4e7: Stack[-2] = Stack[-12]
0x4e8: Stack[-1] = (float) 70.0
0x4e9: Call2 0xbf5

0x4ea: Pop(2)
0x4eb: Pop(1); Push((bool) Stack[-1] == 0)
0x4ec: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ed: Stack[-10] = (int) -2
0x4ee: Return(); Pop(8)

0x4ef: @ CreateDialog(Stack[-4])
0x4f0: Pop(0)
0x4f1: PushEmpty(int)
0x4f2: Call2 0xd98

0x4f3: Pop(0)
0x4f4: @@ SetNPCName(Stack[-1])
0x4f5: Pop(1)
0x4f6: PushEmpty(int)
0x4f7: Call2 0xd96

0x4f8: Pop(0)
0x4f9: @@ SetNPCDescription(Stack[-1])
0x4fa: Pop(1)
0x4fb: PushEmpty(string)
0x4fc: Call2 0xd9a

0x4fd: Pop(0)
0x4fe: @@ SetPhoto(Stack[-1])
0x4ff: Pop(1)
0x500: PushEmpty(string)
0x501: Call2 0xd9c

0x502: Pop(0)
0x503: @@ SetPhoto2(Stack[-1])
0x504: Pop(1)
0x505: PushEmpty(int)
0x506: Call2 0xf6e

0x507: Pop(0)
0x508: @@ SetPlayerName(Stack[-1])
0x509: Pop(1)
0x50a: Stack[-2] = (int) -1
0x50b: @ IsOverrideActive(Stack[-3])
0x50c: Pop(0)
0x50d: Push(Stack[-3])
0x50e: IF (Stack[-1] == 0) GOTO 0x511; Pop(1)

0x50f: Stack[-10] = (int) -2
0x510: Return(); Pop(8)

0x511: @ DoDialog(Stack[-4])
0x512: Pop(0)
0x513: PushEmpty(bool, object)
0x514: PushEmpty(object)
0x515: Call2 0xd09

0x516: Stack[-2] = Stack[-1]
0x517: Pop(1)
0x518: Call2 0xc4a

0x519: Pop(2)
0x51a: PushEmpty(object, object)
0x51b: Stack[-2] = Stack[-11]
0x51c: Stack[-1] = Stack[-6]
0x51d: Push(-2, 4); TaskCall(7)
0x51e: Call2 0x535

0x51f: Pop(-2, 4); TaskReturn
0x520: Pop(2)
0x521: @@ IsDialogEnd(Stack[-1])
0x522: Pop(0)
0x523: Pop(0); Push((bool) Stack[-1] == 0)
0x524: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x525: @ sync()
0x526: Pop(0)
0x527: @@ IsDialogEnd(Stack[-1])
0x528: Pop(0)
0x529: GOTO 0x523

0x52a: PushEmpty(object)
0x52b: Stack[-1] = Stack[-10]
0x52c: Call2 0xc39

0x52d: Pop(1)
0x52e: @ StopDialog(Stack[-4])
0x52f: Pop(0)
0x530: @@ GetReturnValue(Stack[-2])
0x531: Pop(0)
0x532: Stack[-10] = Stack[-2]
0x533: Return(); Pop(8)

0x534: Stack[-4] = 0
0x535: PushEmpty()
0x536: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x537: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x538: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x539: Push((int) 1)
0x53a: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x53b: PushEmpty(string)
0x53c: Stack[-1] = "Neutral"
0x53d: Call2 0x56f

0x53e: Pop(1)
0x53f: Push((int) 510886)
0x540: @@ SetMessage(Stack[-1])
0x541: Pop(1)
0x542: @@ ClearReplies()
0x543: Pop(0)
0x544: Push((int) 510888)
0x545: Push((int) 12037)
0x546: Push((int) 12036)
0x547: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x548: Pop(3)
0x549: Push((int) 534267)
0x54a: Push((int) -1)
0x54b: Push((int) 35855)
0x54c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54d: Pop(3)
0x54e: GOTO 0x551

0x54f: Return(); Pop(0)

0x550: GOTO 0x539

0x551: PushEmpty(bool)
0x552: Call2 0xd9e

0x553: Pop(0)
0x554: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x555: @ lshWaitForAnimEnd()
0x556: Pop(0)
0x557: Push( Stack[3 + Tasks[-1].StackPointer] )
0x558: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x559: GOTO 0x55f

0x55a: PushEmpty(string)
0x55b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x55c: Call2 0xcd4

0x55d: Pop(1)
0x55e: GOTO 0x555

0x55f: GOTO 0x56e

0x560: Push("all")
0x561: Push("idle")
0x562: @ PlayAnimation(Stack[-2], Stack[-1])
0x563: Pop(2)
0x564: @ WaitForAnimEnd()
0x565: Pop(0)
0x566: Push( Stack[3 + Tasks[-1].StackPointer] )
0x567: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x568: GOTO 0x56e

0x569: Push("all")
0x56a: Push("idle")
0x56b: @ PlayAnimation(Stack[-2], Stack[-1])
0x56c: Pop(2)
0x56d: GOTO 0x564

0x56e: Return(); Pop(0)

0x56f: PushEmpty()
0x570: PushEmpty(bool)
0x571: Call2 0xd9e

0x572: Pop(0)
0x573: Pop(1); Push((bool) Stack[-1] == 0)
0x574: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x575: Return(); Pop(0)

0x576: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x577: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x578: Return(); Pop(0)

0x579: PushEmpty(string, bool)
0x57a: Stack[-2] = Stack[-3]
0x57b: Push("")
0x57c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x57d: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57e: Stack[-1] = (bool) 0
0x57f: GOTO 0x581

0x580: Stack[-1] = (bool) 1
0x581: Call2 0xce4

0x582: Pop(2)
0x583: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x584: Return(); Pop(0)

0x585: PushEmpty()
0x586: Push((int) 1)
0x587: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x588: PushEmpty()
0x589: Call2 0xd02

0x58a: Pop(0)
0x58b: Push((int) 12045)
0x58c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x58d: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x58e: PushEmpty(object, object)
0x58f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x590: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x591: Call2 0xdb5

0x592: Pop(2)
0x593: PushEmpty(object, object)
0x594: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x595: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x596: Call2 0xda0

0x597: Pop(2)
0x598: PushEmpty(object, object)
0x599: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x59a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x59b: Call2 0xdce

0x59c: Pop(2)
0x59d: Push((int) 12050)
0x59e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x59f: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5a0: PushEmpty(object, object)
0x5a1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5a2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a3: Call2 0xdb5

0x5a4: Pop(2)
0x5a5: PushEmpty(object, object)
0x5a6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5a7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a8: Call2 0xda0

0x5a9: Pop(2)
0x5aa: PushEmpty(object, object)
0x5ab: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ad: Call2 0xdce

0x5ae: Pop(2)
0x5af: Push((int) 12034)
0x5b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b1: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5b2: PushEmpty(string)
0x5b3: Stack[-1] = "Neutral"
0x5b4: Call2 0x56f

0x5b5: Pop(1)
0x5b6: Push((int) 510886)
0x5b7: @@ SetMessage(Stack[-1])
0x5b8: Pop(1)
0x5b9: @@ ClearReplies()
0x5ba: Pop(0)
0x5bb: Push((int) 510888)
0x5bc: Push((int) 12037)
0x5bd: Push((int) 12036)
0x5be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bf: Pop(3)
0x5c0: Push((int) 534267)
0x5c1: Push((int) -1)
0x5c2: Push((int) 35855)
0x5c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c4: Pop(3)
0x5c5: Return(); Pop(0)

0x5c6: Push((int) 35872)
0x5c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c8: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c9: Push((int) 35874)
0x5ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5cb: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5cc: PushEmpty(string)
0x5cd: Stack[-1] = "Azart"
0x5ce: Call2 0x56f

0x5cf: Pop(1)
0x5d0: Push((int) 534282)
0x5d1: @@ SetMessage(Stack[-1])
0x5d2: Pop(1)
0x5d3: @@ ClearReplies()
0x5d4: Pop(0)
0x5d5: Push((int) 534283)
0x5d6: Push((int) 35876)
0x5d7: Push((int) 35875)
0x5d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d9: Pop(3)
0x5da: Return(); Pop(0)

0x5db: Push((int) 35876)
0x5dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5dd: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5de: PushEmpty(string)
0x5df: Stack[-1] = "Secret"
0x5e0: Call2 0x56f

0x5e1: Pop(1)
0x5e2: Push((int) 534284)
0x5e3: @@ SetMessage(Stack[-1])
0x5e4: Pop(1)
0x5e5: @@ ClearReplies()
0x5e6: Pop(0)
0x5e7: Push((int) 534285)
0x5e8: Push((int) 35878)
0x5e9: Push((int) 35877)
0x5ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5eb: Pop(3)
0x5ec: Return(); Pop(0)

0x5ed: Push((int) 35878)
0x5ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ef: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5f0: PushEmpty(string)
0x5f1: Stack[-1] = "Secret"
0x5f2: Call2 0x56f

0x5f3: Pop(1)
0x5f4: Push((int) 534286)
0x5f5: @@ SetMessage(Stack[-1])
0x5f6: Pop(1)
0x5f7: @@ ClearReplies()
0x5f8: Pop(0)
0x5f9: Push((int) 534287)
0x5fa: Push((int) -1)
0x5fb: Push((int) 35879)
0x5fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fd: Pop(3)
0x5fe: Return(); Pop(0)

0x5ff: Push((int) 12037)
0x600: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x601: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x602: PushEmpty(string)
0x603: Stack[-1] = "Secret"
0x604: Call2 0x56f

0x605: Pop(1)
0x606: Push((int) 510889)
0x607: @@ SetMessage(Stack[-1])
0x608: Pop(1)
0x609: @@ ClearReplies()
0x60a: Pop(0)
0x60b: Push((int) 510890)
0x60c: Push((int) 12039)
0x60d: Push((int) 12038)
0x60e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60f: Pop(3)
0x610: Push((int) 510892)
0x611: Push((int) 12042)
0x612: Push((int) 12040)
0x613: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x614: Pop(3)
0x615: Return(); Pop(0)

0x616: Push((int) 12042)
0x617: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x618: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x619: PushEmpty(string)
0x61a: Stack[-1] = "Neutral"
0x61b: Call2 0x56f

0x61c: Pop(1)
0x61d: Push((int) 510894)
0x61e: @@ SetMessage(Stack[-1])
0x61f: Pop(1)
0x620: @@ ClearReplies()
0x621: Pop(0)
0x622: Push((int) 510895)
0x623: Push((int) -1)
0x624: Push((int) 12043)
0x625: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x626: Pop(3)
0x627: Return(); Pop(0)

0x628: Push((int) 12039)
0x629: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62a: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x62b: PushEmpty(string)
0x62c: Stack[-1] = "Secret"
0x62d: Call2 0x56f

0x62e: Pop(1)
0x62f: Push((int) 510891)
0x630: @@ SetMessage(Stack[-1])
0x631: Pop(1)
0x632: @@ ClearReplies()
0x633: Pop(0)
0x634: Push((int) 510893)
0x635: Push((int) 12044)
0x636: Push((int) 12041)
0x637: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x638: Pop(3)
0x639: Return(); Pop(0)

0x63a: Push((int) 12044)
0x63b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x63c: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x63d: PushEmpty(string)
0x63e: Stack[-1] = "Neutral"
0x63f: Call2 0x56f

0x640: Pop(1)
0x641: Push((int) 510896)
0x642: @@ SetMessage(Stack[-1])
0x643: Pop(1)
0x644: @@ ClearReplies()
0x645: Pop(0)
0x646: PushEmpty(bool, object)
0x647: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x648: Call2 0xe21

0x649: Pop(1)
0x64a: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64b: Push((int) 510897)
0x64c: Push((int) -1)
0x64d: Push((int) 12045)
0x64e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64f: Pop(3)
0x650: Push((int) 510898)
0x651: Push((int) 12047)
0x652: Push((int) 12046)
0x653: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x654: Pop(3)
0x655: Return(); Pop(0)

0x656: Push((int) 12047)
0x657: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x658: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x659: PushEmpty(string)
0x65a: Stack[-1] = "Neutral"
0x65b: Call2 0x56f

0x65c: Pop(1)
0x65d: Push((int) 510899)
0x65e: @@ SetMessage(Stack[-1])
0x65f: Pop(1)
0x660: @@ ClearReplies()
0x661: Pop(0)
0x662: Push((int) 510900)
0x663: Push((int) -1)
0x664: Push((int) 12048)
0x665: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x666: Pop(3)
0x667: PushEmpty(bool, object)
0x668: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x669: Call2 0xe21

0x66a: Pop(1)
0x66b: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x66c: Push((int) 510902)
0x66d: Push((int) -1)
0x66e: Push((int) 12050)
0x66f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x670: Pop(3)
0x671: Return(); Pop(0)

0x672: Push((int) 11068)
0x673: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x674: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x675: Push((int) 11083)
0x676: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x677: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x678: PushEmpty(string)
0x679: Stack[-1] = "Neutral"
0x67a: Call2 0x56f

0x67b: Pop(1)
0x67c: Push((int) 510059)
0x67d: @@ SetMessage(Stack[-1])
0x67e: Pop(1)
0x67f: @@ ClearReplies()
0x680: Pop(0)
0x681: Push((int) 510060)
0x682: Push((int) 11072)
0x683: Push((int) 11084)
0x684: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x685: Pop(3)
0x686: Push((int) 510061)
0x687: Push((int) 11072)
0x688: Push((int) 11086)
0x689: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68a: Pop(3)
0x68b: Return(); Pop(0)

0x68c: Push((int) 11070)
0x68d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x68e: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x68f: PushEmpty(string)
0x690: Stack[-1] = "Azart"
0x691: Call2 0x56f

0x692: Pop(1)
0x693: Push((int) 510046)
0x694: @@ SetMessage(Stack[-1])
0x695: Pop(1)
0x696: @@ ClearReplies()
0x697: Pop(0)
0x698: Push((int) 510047)
0x699: Push((int) 11072)
0x69a: Push((int) 11071)
0x69b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69c: Pop(3)
0x69d: Push((int) 510057)
0x69e: Push((int) -1)
0x69f: Push((int) 11081)
0x6a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a1: Pop(3)
0x6a2: Return(); Pop(0)

0x6a3: Push((int) 11072)
0x6a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a5: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x6a6: PushEmpty(string)
0x6a7: Stack[-1] = "Secret"
0x6a8: Call2 0x56f

0x6a9: Pop(1)
0x6aa: Push((int) 510048)
0x6ab: @@ SetMessage(Stack[-1])
0x6ac: Pop(1)
0x6ad: @@ ClearReplies()
0x6ae: Pop(0)
0x6af: Push((int) 510049)
0x6b0: Push((int) 11074)
0x6b1: Push((int) 11073)
0x6b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b3: Pop(3)
0x6b4: Push((int) 510052)
0x6b5: Push((int) 11077)
0x6b6: Push((int) 11076)
0x6b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b8: Pop(3)
0x6b9: Push((int) 510056)
0x6ba: Push((int) -1)
0x6bb: Push((int) 11080)
0x6bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bd: Pop(3)
0x6be: Return(); Pop(0)

0x6bf: Push((int) 11077)
0x6c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c1: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6c2: PushEmpty(string)
0x6c3: Stack[-1] = "Serious"
0x6c4: Call2 0x56f

0x6c5: Pop(1)
0x6c6: Push((int) 510053)
0x6c7: @@ SetMessage(Stack[-1])
0x6c8: Pop(1)
0x6c9: @@ ClearReplies()
0x6ca: Pop(0)
0x6cb: Push((int) 510054)
0x6cc: Push((int) -1)
0x6cd: Push((int) 11078)
0x6ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cf: Pop(3)
0x6d0: Push((int) 510055)
0x6d1: Push((int) -1)
0x6d2: Push((int) 11079)
0x6d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d4: Pop(3)
0x6d5: Return(); Pop(0)

0x6d6: Push((int) 11074)
0x6d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d8: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6d9: PushEmpty(string)
0x6da: Stack[-1] = "Neutral"
0x6db: Call2 0x56f

0x6dc: Pop(1)
0x6dd: Push((int) 510050)
0x6de: @@ SetMessage(Stack[-1])
0x6df: Pop(1)
0x6e0: @@ ClearReplies()
0x6e1: Pop(0)
0x6e2: Push((int) 510051)
0x6e3: Push((int) -1)
0x6e4: Push((int) 11075)
0x6e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e6: Pop(3)
0x6e7: Return(); Pop(0)

0x6e8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6e9: PushEmpty(bool)
0x6ea: Call2 0xd9e

0x6eb: Pop(0)
0x6ec: IF (Stack[-1] == 0) GOTO 0x6f0; Pop(1)

0x6ed: @ lshStopAnimation()
0x6ee: Pop(0)
0x6ef: GOTO 0x6f2

0x6f0: @ StopAnimation()
0x6f1: Pop(0)
0x6f2: Return(); Pop(0)

0x6f3: GOTO 0x586

0x6f4: Return(); Pop(0)

0x6f5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6f6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6f7: PushEmpty(bool, object, float)
0x6f8: Stack[-2] = Stack[-12]
0x6f9: Stack[-1] = (float) 70.0
0x6fa: Call2 0xbf5

0x6fb: Pop(2)
0x6fc: Pop(1); Push((bool) Stack[-1] == 0)
0x6fd: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6fe: Stack[-10] = (int) -2
0x6ff: Return(); Pop(8)

0x700: @ CreateDialog(Stack[-4])
0x701: Pop(0)
0x702: PushEmpty(int)
0x703: Call2 0xd98

0x704: Pop(0)
0x705: @@ SetNPCName(Stack[-1])
0x706: Pop(1)
0x707: PushEmpty(int)
0x708: Call2 0xd96

0x709: Pop(0)
0x70a: @@ SetNPCDescription(Stack[-1])
0x70b: Pop(1)
0x70c: PushEmpty(string)
0x70d: Call2 0xd9a

0x70e: Pop(0)
0x70f: @@ SetPhoto(Stack[-1])
0x710: Pop(1)
0x711: PushEmpty(string)
0x712: Call2 0xd9c

0x713: Pop(0)
0x714: @@ SetPhoto2(Stack[-1])
0x715: Pop(1)
0x716: PushEmpty(int)
0x717: Call2 0xf6e

0x718: Pop(0)
0x719: @@ SetPlayerName(Stack[-1])
0x71a: Pop(1)
0x71b: Stack[-2] = (int) -1
0x71c: @ IsOverrideActive(Stack[-3])
0x71d: Pop(0)
0x71e: Push(Stack[-3])
0x71f: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x720: Stack[-10] = (int) -2
0x721: Return(); Pop(8)

0x722: @ DoDialog(Stack[-4])
0x723: Pop(0)
0x724: PushEmpty(bool, object)
0x725: PushEmpty(object)
0x726: Call2 0xd09

0x727: Stack[-2] = Stack[-1]
0x728: Pop(1)
0x729: Call2 0xc4a

0x72a: Pop(2)
0x72b: PushEmpty(object, object)
0x72c: Stack[-2] = Stack[-11]
0x72d: Stack[-1] = Stack[-6]
0x72e: Push(-2, 4); TaskCall(9)
0x72f: Call2 0x746

0x730: Pop(-2, 4); TaskReturn
0x731: Pop(2)
0x732: @@ IsDialogEnd(Stack[-1])
0x733: Pop(0)
0x734: Pop(0); Push((bool) Stack[-1] == 0)
0x735: IF (Stack[-1] == 0) GOTO 0x73b; Pop(1)

0x736: @ sync()
0x737: Pop(0)
0x738: @@ IsDialogEnd(Stack[-1])
0x739: Pop(0)
0x73a: GOTO 0x734

0x73b: PushEmpty(object)
0x73c: Stack[-1] = Stack[-10]
0x73d: Call2 0xc39

0x73e: Pop(1)
0x73f: @ StopDialog(Stack[-4])
0x740: Pop(0)
0x741: @@ GetReturnValue(Stack[-2])
0x742: Pop(0)
0x743: Stack[-10] = Stack[-2]
0x744: Return(); Pop(8)

0x745: Stack[-4] = 0
0x746: PushEmpty()
0x747: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x748: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x749: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x74a: Push((int) 1)
0x74b: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x74c: PushEmpty(bool, object)
0x74d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74e: Call2 0xe57

0x74f: Pop(1)
0x750: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x751: PushEmpty(string)
0x752: Stack[-1] = "Azart"
0x753: Call2 0x7fc

0x754: Pop(1)
0x755: Push((int) 512040)
0x756: @@ SetMessage(Stack[-1])
0x757: Pop(1)
0x758: @@ ClearReplies()
0x759: Pop(0)
0x75a: Push((int) 512041)
0x75b: Push((int) 13262)
0x75c: Push((int) 13259)
0x75d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75e: Pop(3)
0x75f: Push((int) 512042)
0x760: Push((int) 13261)
0x761: Push((int) 13260)
0x762: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x763: Pop(3)
0x764: GOTO 0x7de

0x765: PushEmpty(string)
0x766: Stack[-1] = "Neutral"
0x767: Call2 0x7fc

0x768: Pop(1)
0x769: Push((int) 512052)
0x76a: @@ SetMessage(Stack[-1])
0x76b: Pop(1)
0x76c: @@ ClearReplies()
0x76d: Pop(0)
0x76e: PushEmpty(bool)
0x76f: Stack[-1] = (bool) 1
0x770: PushEmpty(bool)
0x771: Stack[-1] = (bool) 0
0x772: PushEmpty(bool, object)
0x773: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x774: Call2 0xe43

0x775: Pop(1)
0x776: IF (Stack[-1] == 0) GOTO 0x77d; Pop(1)

0x777: PushEmpty(bool, object)
0x778: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x779: Call2 0xe63

0x77a: Pop(1)
0x77b: IF (Stack[-1] == 0) GOTO 0x77d; Pop(1)

0x77c: Stack[-1] = (bool) 1
0x77d: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x77e: PushEmpty(bool)
0x77f: Stack[-1] = (bool) 0
0x780: PushEmpty(bool, object)
0x781: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x782: Call2 0xe4d

0x783: Pop(1)
0x784: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x785: PushEmpty(bool, object)
0x786: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x787: Call2 0xe63

0x788: Pop(1)
0x789: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x78a: Stack[-1] = (bool) 1
0x78b: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x78c: Stack[-1] = (bool) 0
0x78d: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x78e: Push((int) 512066)
0x78f: Push((int) 13289)
0x790: Push((int) 13287)
0x791: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x792: Pop(3)
0x793: PushEmpty(bool)
0x794: Stack[-1] = (bool) 0
0x795: PushEmpty(bool, object)
0x796: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x797: Call2 0xe7b

0x798: Pop(1)
0x799: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x79a: PushEmpty(bool, object)
0x79b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79c: Call2 0xe87

0x79d: Pop(1)
0x79e: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x79f: Stack[-1] = (bool) 1
0x7a0: IF (Stack[-1] == 0) GOTO 0x7a6; Pop(1)

0x7a1: Push((int) 512543)
0x7a2: Push((int) 13713)
0x7a3: Push((int) 13712)
0x7a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a5: Pop(3)
0x7a6: PushEmpty(bool)
0x7a7: Stack[-1] = (bool) 0
0x7a8: PushEmpty(bool)
0x7a9: Stack[-1] = (bool) 0
0x7aa: PushEmpty(bool, object)
0x7ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ac: Call2 0xe6f

0x7ad: Pop(1)
0x7ae: IF (Stack[-1] == 0) GOTO 0x7b5; Pop(1)

0x7af: PushEmpty(bool, object)
0x7b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b1: Call2 0xe93

0x7b2: Pop(1)
0x7b3: IF (Stack[-1] == 0) GOTO 0x7b5; Pop(1)

0x7b4: Stack[-1] = (bool) 1
0x7b5: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7b6: PushEmpty(bool, object)
0x7b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b8: Call2 0xe7b

0x7b9: Pop(1)
0x7ba: Pop(1); Push((bool) Stack[-1] == 0)
0x7bb: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7bc: Stack[-1] = (bool) 1
0x7bd: IF (Stack[-1] == 0) GOTO 0x7c3; Pop(1)

0x7be: Push((int) 512546)
0x7bf: Push((int) 13716)
0x7c0: Push((int) 13715)
0x7c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c2: Pop(3)
0x7c3: PushEmpty(bool)
0x7c4: Stack[-1] = (bool) 0
0x7c5: PushEmpty(bool, object)
0x7c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c7: Call2 0xeab

0x7c8: Pop(1)
0x7c9: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7ca: PushEmpty(bool, object)
0x7cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7cc: Call2 0xe9f

0x7cd: Pop(1)
0x7ce: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7cf: Stack[-1] = (bool) 1
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d1: Push((int) 512053)
0x7d2: Push((int) 13274)
0x7d3: Push((int) 13273)
0x7d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d5: Pop(3)
0x7d6: Push((int) 512060)
0x7d7: Push((int) -1)
0x7d8: Push((int) 13280)
0x7d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7da: Pop(3)
0x7db: GOTO 0x7de

0x7dc: Return(); Pop(0)

0x7dd: GOTO 0x74a

0x7de: PushEmpty(bool)
0x7df: Call2 0xd9e

0x7e0: Pop(0)
0x7e1: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7e2: @ lshWaitForAnimEnd()
0x7e3: Pop(0)
0x7e4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e5: IF (Stack[-1] == 0) GOTO 0x7e7; Pop(1)

0x7e6: GOTO 0x7ec

0x7e7: PushEmpty(string)
0x7e8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7e9: Call2 0xcd4

0x7ea: Pop(1)
0x7eb: GOTO 0x7e2

0x7ec: GOTO 0x7fb

0x7ed: Push("all")
0x7ee: Push("idle")
0x7ef: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f0: Pop(2)
0x7f1: @ WaitForAnimEnd()
0x7f2: Pop(0)
0x7f3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7f4: IF (Stack[-1] == 0) GOTO 0x7f6; Pop(1)

0x7f5: GOTO 0x7fb

0x7f6: Push("all")
0x7f7: Push("idle")
0x7f8: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f9: Pop(2)
0x7fa: GOTO 0x7f1

0x7fb: Return(); Pop(0)

0x7fc: PushEmpty()
0x7fd: PushEmpty(bool)
0x7fe: Call2 0xd9e

0x7ff: Pop(0)
0x800: Pop(1); Push((bool) Stack[-1] == 0)
0x801: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x802: Return(); Pop(0)

0x803: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x804: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x805: Return(); Pop(0)

0x806: PushEmpty(string, bool)
0x807: Stack[-2] = Stack[-3]
0x808: Push("")
0x809: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x80a: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x80b: Stack[-1] = (bool) 0
0x80c: GOTO 0x80e

0x80d: Stack[-1] = (bool) 1
0x80e: Call2 0xce4

0x80f: Pop(2)
0x810: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x811: Return(); Pop(0)

0x812: PushEmpty()
0x813: Push((int) 1)
0x814: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x815: PushEmpty()
0x816: Call2 0xd02

0x817: Pop(0)
0x818: Push((int) 13271)
0x819: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x81a: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x81b: PushEmpty(object, object)
0x81c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x81d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x81e: Call2 0xdd4

0x81f: Pop(2)
0x820: PushEmpty(object, object)
0x821: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x822: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x823: Call2 0xdda

0x824: Pop(2)
0x825: Push((int) 13288)
0x826: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x827: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x828: PushEmpty(object, object)
0x829: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x82a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x82b: Call2 0xdd4

0x82c: Pop(2)
0x82d: Push((int) 13290)
0x82e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x82f: IF (Stack[-1] == 0) GOTO 0x835; Pop(1)

0x830: PushEmpty(object, object)
0x831: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x832: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x833: Call2 0xdda

0x834: Pop(2)
0x835: Push((int) 13714)
0x836: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x837: IF (Stack[-1] == 0) GOTO 0x842; Pop(1)

0x838: PushEmpty(object, object)
0x839: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x83a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x83b: Call2 0xdef

0x83c: Pop(2)
0x83d: PushEmpty(object, object)
0x83e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x83f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x840: Call2 0xdf5

0x841: Pop(2)
0x842: Push((int) 13715)
0x843: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x844: IF (Stack[-1] == 0) GOTO 0x84a; Pop(1)

0x845: PushEmpty(object, object)
0x846: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x847: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x848: Call2 0xe09

0x849: Pop(2)
0x84a: Push((int) 13717)
0x84b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x84c: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x84d: PushEmpty(object, object)
0x84e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x84f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x850: Call2 0xdff

0x851: Pop(2)
0x852: Push((int) 37900)
0x853: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x854: IF (Stack[-1] == 0) GOTO 0x85a; Pop(1)

0x855: PushEmpty(object, object)
0x856: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x857: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x858: Call2 0xdff

0x859: Pop(2)
0x85a: Push((int) 13273)
0x85b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x85c: IF (Stack[-1] == 0) GOTO 0x862; Pop(1)

0x85d: PushEmpty(object, object)
0x85e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x85f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x860: Call2 0xe0f

0x861: Pop(2)
0x862: Push((int) 13258)
0x863: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x864: IF (Stack[-1] == 0) GOTO 0x8f5; Pop(1)

0x865: PushEmpty(bool, object)
0x866: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x867: Call2 0xe57

0x868: Pop(1)
0x869: IF (Stack[-1] == 0) GOTO 0x87e; Pop(1)

0x86a: PushEmpty(string)
0x86b: Stack[-1] = "Azart"
0x86c: Call2 0x7fc

0x86d: Pop(1)
0x86e: Push((int) 512040)
0x86f: @@ SetMessage(Stack[-1])
0x870: Pop(1)
0x871: @@ ClearReplies()
0x872: Pop(0)
0x873: Push((int) 512041)
0x874: Push((int) 13262)
0x875: Push((int) 13259)
0x876: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x877: Pop(3)
0x878: Push((int) 512042)
0x879: Push((int) 13261)
0x87a: Push((int) 13260)
0x87b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87c: Pop(3)
0x87d: Return(); Pop(0)

0x87e: PushEmpty(string)
0x87f: Stack[-1] = "Neutral"
0x880: Call2 0x7fc

0x881: Pop(1)
0x882: Push((int) 512052)
0x883: @@ SetMessage(Stack[-1])
0x884: Pop(1)
0x885: @@ ClearReplies()
0x886: Pop(0)
0x887: PushEmpty(bool)
0x888: Stack[-1] = (bool) 1
0x889: PushEmpty(bool)
0x88a: Stack[-1] = (bool) 0
0x88b: PushEmpty(bool, object)
0x88c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x88d: Call2 0xe43

0x88e: Pop(1)
0x88f: IF (Stack[-1] == 0) GOTO 0x896; Pop(1)

0x890: PushEmpty(bool, object)
0x891: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x892: Call2 0xe63

0x893: Pop(1)
0x894: IF (Stack[-1] == 0) GOTO 0x896; Pop(1)

0x895: Stack[-1] = (bool) 1
0x896: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x897: PushEmpty(bool)
0x898: Stack[-1] = (bool) 0
0x899: PushEmpty(bool, object)
0x89a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x89b: Call2 0xe4d

0x89c: Pop(1)
0x89d: IF (Stack[-1] == 0) GOTO 0x8a4; Pop(1)

0x89e: PushEmpty(bool, object)
0x89f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a0: Call2 0xe63

0x8a1: Pop(1)
0x8a2: IF (Stack[-1] == 0) GOTO 0x8a4; Pop(1)

0x8a3: Stack[-1] = (bool) 1
0x8a4: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x8a5: Stack[-1] = (bool) 0
0x8a6: IF (Stack[-1] == 0) GOTO 0x8ac; Pop(1)

0x8a7: Push((int) 512066)
0x8a8: Push((int) 13289)
0x8a9: Push((int) 13287)
0x8aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ab: Pop(3)
0x8ac: PushEmpty(bool)
0x8ad: Stack[-1] = (bool) 0
0x8ae: PushEmpty(bool, object)
0x8af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b0: Call2 0xe7b

0x8b1: Pop(1)
0x8b2: IF (Stack[-1] == 0) GOTO 0x8b9; Pop(1)

0x8b3: PushEmpty(bool, object)
0x8b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b5: Call2 0xe87

0x8b6: Pop(1)
0x8b7: IF (Stack[-1] == 0) GOTO 0x8b9; Pop(1)

0x8b8: Stack[-1] = (bool) 1
0x8b9: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x8ba: Push((int) 512543)
0x8bb: Push((int) 13713)
0x8bc: Push((int) 13712)
0x8bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8be: Pop(3)
0x8bf: PushEmpty(bool)
0x8c0: Stack[-1] = (bool) 0
0x8c1: PushEmpty(bool)
0x8c2: Stack[-1] = (bool) 0
0x8c3: PushEmpty(bool, object)
0x8c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c5: Call2 0xe6f

0x8c6: Pop(1)
0x8c7: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8c8: PushEmpty(bool, object)
0x8c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8ca: Call2 0xe93

0x8cb: Pop(1)
0x8cc: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8cd: Stack[-1] = (bool) 1
0x8ce: IF (Stack[-1] == 0) GOTO 0x8d6; Pop(1)

0x8cf: PushEmpty(bool, object)
0x8d0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d1: Call2 0xe7b

0x8d2: Pop(1)
0x8d3: Pop(1); Push((bool) Stack[-1] == 0)
0x8d4: IF (Stack[-1] == 0) GOTO 0x8d6; Pop(1)

0x8d5: Stack[-1] = (bool) 1
0x8d6: IF (Stack[-1] == 0) GOTO 0x8dc; Pop(1)

0x8d7: Push((int) 512546)
0x8d8: Push((int) 13716)
0x8d9: Push((int) 13715)
0x8da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8db: Pop(3)
0x8dc: PushEmpty(bool)
0x8dd: Stack[-1] = (bool) 0
0x8de: PushEmpty(bool, object)
0x8df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e0: Call2 0xeab

0x8e1: Pop(1)
0x8e2: IF (Stack[-1] == 0) GOTO 0x8e9; Pop(1)

0x8e3: PushEmpty(bool, object)
0x8e4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e5: Call2 0xe9f

0x8e6: Pop(1)
0x8e7: IF (Stack[-1] == 0) GOTO 0x8e9; Pop(1)

0x8e8: Stack[-1] = (bool) 1
0x8e9: IF (Stack[-1] == 0) GOTO 0x8ef; Pop(1)

0x8ea: Push((int) 512053)
0x8eb: Push((int) 13274)
0x8ec: Push((int) 13273)
0x8ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ee: Pop(3)
0x8ef: Push((int) 512060)
0x8f0: Push((int) -1)
0x8f1: Push((int) 13280)
0x8f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f3: Pop(3)
0x8f4: Return(); Pop(0)

0x8f5: Push((int) 13274)
0x8f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f7: IF (Stack[-1] == 0) GOTO 0x907; Pop(1)

0x8f8: PushEmpty(string)
0x8f9: Stack[-1] = "Azart"
0x8fa: Call2 0x7fc

0x8fb: Pop(1)
0x8fc: Push((int) 512054)
0x8fd: @@ SetMessage(Stack[-1])
0x8fe: Pop(1)
0x8ff: @@ ClearReplies()
0x900: Pop(0)
0x901: Push((int) 512055)
0x902: Push((int) 13276)
0x903: Push((int) 13275)
0x904: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x905: Pop(3)
0x906: Return(); Pop(0)

0x907: Push((int) 13276)
0x908: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x909: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x90a: PushEmpty(string)
0x90b: Stack[-1] = "Fear"
0x90c: Call2 0x7fc

0x90d: Pop(1)
0x90e: Push((int) 512056)
0x90f: @@ SetMessage(Stack[-1])
0x910: Pop(1)
0x911: @@ ClearReplies()
0x912: Pop(0)
0x913: Push((int) 512057)
0x914: Push((int) 13278)
0x915: Push((int) 13277)
0x916: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x917: Pop(3)
0x918: Push((int) 512061)
0x919: Push((int) 13282)
0x91a: Push((int) 13281)
0x91b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91c: Pop(3)
0x91d: Return(); Pop(0)

0x91e: Push((int) 13282)
0x91f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x920: IF (Stack[-1] == 0) GOTO 0x930; Pop(1)

0x921: PushEmpty(string)
0x922: Stack[-1] = "Azart"
0x923: Call2 0x7fc

0x924: Pop(1)
0x925: Push((int) 512062)
0x926: @@ SetMessage(Stack[-1])
0x927: Pop(1)
0x928: @@ ClearReplies()
0x929: Pop(0)
0x92a: Push((int) 512063)
0x92b: Push((int) 13284)
0x92c: Push((int) 13283)
0x92d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92e: Pop(3)
0x92f: Return(); Pop(0)

0x930: Push((int) 13284)
0x931: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x932: IF (Stack[-1] == 0) GOTO 0x942; Pop(1)

0x933: PushEmpty(string)
0x934: Stack[-1] = "Serious"
0x935: Call2 0x7fc

0x936: Pop(1)
0x937: Push((int) 512064)
0x938: @@ SetMessage(Stack[-1])
0x939: Pop(1)
0x93a: @@ ClearReplies()
0x93b: Pop(0)
0x93c: Push((int) 512065)
0x93d: Push((int) 13278)
0x93e: Push((int) 13285)
0x93f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x940: Pop(3)
0x941: Return(); Pop(0)

0x942: Push((int) 13278)
0x943: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x944: IF (Stack[-1] == 0) GOTO 0x954; Pop(1)

0x945: PushEmpty(string)
0x946: Stack[-1] = "Fear"
0x947: Call2 0x7fc

0x948: Pop(1)
0x949: Push((int) 512058)
0x94a: @@ SetMessage(Stack[-1])
0x94b: Pop(1)
0x94c: @@ ClearReplies()
0x94d: Pop(0)
0x94e: Push((int) 512059)
0x94f: Push((int) -1)
0x950: Push((int) 13279)
0x951: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x952: Pop(3)
0x953: Return(); Pop(0)

0x954: Push((int) 13716)
0x955: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x956: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x957: PushEmpty(string)
0x958: Stack[-1] = "Azart"
0x959: Call2 0x7fc

0x95a: Pop(1)
0x95b: Push((int) 512547)
0x95c: @@ SetMessage(Stack[-1])
0x95d: Pop(1)
0x95e: @@ ClearReplies()
0x95f: Pop(0)
0x960: Push((int) 536139)
0x961: Push((int) 37899)
0x962: Push((int) 37898)
0x963: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x964: Pop(3)
0x965: Return(); Pop(0)

0x966: Push((int) 37899)
0x967: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x968: IF (Stack[-1] == 0) GOTO 0x97d; Pop(1)

0x969: PushEmpty(string)
0x96a: Stack[-1] = "Azart"
0x96b: Call2 0x7fc

0x96c: Pop(1)
0x96d: Push((int) 536140)
0x96e: @@ SetMessage(Stack[-1])
0x96f: Pop(1)
0x970: @@ ClearReplies()
0x971: Pop(0)
0x972: Push((int) 512548)
0x973: Push((int) -1)
0x974: Push((int) 13717)
0x975: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x976: Pop(3)
0x977: Push((int) 536141)
0x978: Push((int) -1)
0x979: Push((int) 37900)
0x97a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97b: Pop(3)
0x97c: Return(); Pop(0)

0x97d: Push((int) 13713)
0x97e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x97f: IF (Stack[-1] == 0) GOTO 0x98f; Pop(1)

0x980: PushEmpty(string)
0x981: Stack[-1] = "Serious"
0x982: Call2 0x7fc

0x983: Pop(1)
0x984: Push((int) 512544)
0x985: @@ SetMessage(Stack[-1])
0x986: Pop(1)
0x987: @@ ClearReplies()
0x988: Pop(0)
0x989: Push((int) 512545)
0x98a: Push((int) -1)
0x98b: Push((int) 13714)
0x98c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98d: Pop(3)
0x98e: Return(); Pop(0)

0x98f: Push((int) 13289)
0x990: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x991: IF (Stack[-1] == 0) GOTO 0x9a1; Pop(1)

0x992: PushEmpty(string)
0x993: Stack[-1] = "Fear"
0x994: Call2 0x7fc

0x995: Pop(1)
0x996: Push((int) 512068)
0x997: @@ SetMessage(Stack[-1])
0x998: Pop(1)
0x999: @@ ClearReplies()
0x99a: Pop(0)
0x99b: Push((int) 512069)
0x99c: Push((int) -1)
0x99d: Push((int) 13290)
0x99e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99f: Pop(3)
0x9a0: Return(); Pop(0)

0x9a1: Push((int) 13261)
0x9a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9a3: IF (Stack[-1] == 0) GOTO 0x9b3; Pop(1)

0x9a4: PushEmpty(string)
0x9a5: Stack[-1] = "Fear"
0x9a6: Call2 0x7fc

0x9a7: Pop(1)
0x9a8: Push((int) 512043)
0x9a9: @@ SetMessage(Stack[-1])
0x9aa: Pop(1)
0x9ab: @@ ClearReplies()
0x9ac: Pop(0)
0x9ad: Push((int) 512048)
0x9ae: Push((int) 13268)
0x9af: Push((int) 13267)
0x9b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b1: Pop(3)
0x9b2: Return(); Pop(0)

0x9b3: Push((int) 13268)
0x9b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b5: IF (Stack[-1] == 0) GOTO 0x9c5; Pop(1)

0x9b6: PushEmpty(string)
0x9b7: Stack[-1] = "Fear"
0x9b8: Call2 0x7fc

0x9b9: Pop(1)
0x9ba: Push((int) 512049)
0x9bb: @@ SetMessage(Stack[-1])
0x9bc: Pop(1)
0x9bd: @@ ClearReplies()
0x9be: Pop(0)
0x9bf: Push((int) 512050)
0x9c0: Push((int) 13264)
0x9c1: Push((int) 13269)
0x9c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c3: Pop(3)
0x9c4: Return(); Pop(0)

0x9c5: Push((int) 13262)
0x9c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9c7: IF (Stack[-1] == 0) GOTO 0x9dc; Pop(1)

0x9c8: PushEmpty(string)
0x9c9: Stack[-1] = "Azart"
0x9ca: Call2 0x7fc

0x9cb: Pop(1)
0x9cc: Push((int) 512044)
0x9cd: @@ SetMessage(Stack[-1])
0x9ce: Pop(1)
0x9cf: @@ ClearReplies()
0x9d0: Pop(0)
0x9d1: Push((int) 512045)
0x9d2: Push((int) 13264)
0x9d3: Push((int) 13263)
0x9d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d5: Pop(3)
0x9d6: Push((int) 512047)
0x9d7: Push((int) 13261)
0x9d8: Push((int) 13265)
0x9d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9da: Pop(3)
0x9db: Return(); Pop(0)

0x9dc: Push((int) 13264)
0x9dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9de: IF (Stack[-1] == 0) GOTO 0x9f3; Pop(1)

0x9df: PushEmpty(string)
0x9e0: Stack[-1] = "Fear"
0x9e1: Call2 0x7fc

0x9e2: Pop(1)
0x9e3: Push((int) 512046)
0x9e4: @@ SetMessage(Stack[-1])
0x9e5: Pop(1)
0x9e6: @@ ClearReplies()
0x9e7: Pop(0)
0x9e8: Push((int) 512051)
0x9e9: Push((int) -1)
0x9ea: Push((int) 13271)
0x9eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ec: Pop(3)
0x9ed: Push((int) 512067)
0x9ee: Push((int) -1)
0x9ef: Push((int) 13288)
0x9f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f1: Pop(3)
0x9f2: Return(); Pop(0)

0x9f3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x9f4: PushEmpty(bool)
0x9f5: Call2 0xd9e

0x9f6: Pop(0)
0x9f7: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9f8: @ lshStopAnimation()
0x9f9: Pop(0)
0x9fa: GOTO 0x9fd

0x9fb: @ StopAnimation()
0x9fc: Pop(0)
0x9fd: Return(); Pop(0)

0x9fe: GOTO 0x813

0x9ff: Return(); Pop(0)

0xa00: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xa01: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa02: PushEmpty(bool, object, float)
0xa03: Stack[-2] = Stack[-12]
0xa04: Stack[-1] = (float) 70.0
0xa05: Call2 0xbf5

0xa06: Pop(2)
0xa07: Pop(1); Push((bool) Stack[-1] == 0)
0xa08: IF (Stack[-1] == 0) GOTO 0xa0b; Pop(1)

0xa09: Stack[-10] = (int) -2
0xa0a: Return(); Pop(8)

0xa0b: @ CreateDialog(Stack[-4])
0xa0c: Pop(0)
0xa0d: PushEmpty(int)
0xa0e: Call2 0xd98

0xa0f: Pop(0)
0xa10: @@ SetNPCName(Stack[-1])
0xa11: Pop(1)
0xa12: PushEmpty(int)
0xa13: Call2 0xd96

0xa14: Pop(0)
0xa15: @@ SetNPCDescription(Stack[-1])
0xa16: Pop(1)
0xa17: PushEmpty(string)
0xa18: Call2 0xd9a

0xa19: Pop(0)
0xa1a: @@ SetPhoto(Stack[-1])
0xa1b: Pop(1)
0xa1c: PushEmpty(string)
0xa1d: Call2 0xd9c

0xa1e: Pop(0)
0xa1f: @@ SetPhoto2(Stack[-1])
0xa20: Pop(1)
0xa21: PushEmpty(int)
0xa22: Call2 0xf6e

0xa23: Pop(0)
0xa24: @@ SetPlayerName(Stack[-1])
0xa25: Pop(1)
0xa26: Stack[-2] = (int) -1
0xa27: @ IsOverrideActive(Stack[-3])
0xa28: Pop(0)
0xa29: Push(Stack[-3])
0xa2a: IF (Stack[-1] == 0) GOTO 0xa2d; Pop(1)

0xa2b: Stack[-10] = (int) -2
0xa2c: Return(); Pop(8)

0xa2d: @ DoDialog(Stack[-4])
0xa2e: Pop(0)
0xa2f: PushEmpty(bool, object)
0xa30: PushEmpty(object)
0xa31: Call2 0xd09

0xa32: Stack[-2] = Stack[-1]
0xa33: Pop(1)
0xa34: Call2 0xc4a

0xa35: Pop(2)
0xa36: PushEmpty(object, object)
0xa37: Stack[-2] = Stack[-11]
0xa38: Stack[-1] = Stack[-6]
0xa39: Push(-2, 4); TaskCall(11)
0xa3a: Call2 0xa51

0xa3b: Pop(-2, 4); TaskReturn
0xa3c: Pop(2)
0xa3d: @@ IsDialogEnd(Stack[-1])
0xa3e: Pop(0)
0xa3f: Pop(0); Push((bool) Stack[-1] == 0)
0xa40: IF (Stack[-1] == 0) GOTO 0xa46; Pop(1)

0xa41: @ sync()
0xa42: Pop(0)
0xa43: @@ IsDialogEnd(Stack[-1])
0xa44: Pop(0)
0xa45: GOTO 0xa3f

0xa46: PushEmpty(object)
0xa47: Stack[-1] = Stack[-10]
0xa48: Call2 0xc39

0xa49: Pop(1)
0xa4a: @ StopDialog(Stack[-4])
0xa4b: Pop(0)
0xa4c: @@ GetReturnValue(Stack[-2])
0xa4d: Pop(0)
0xa4e: Stack[-10] = Stack[-2]
0xa4f: Return(); Pop(8)

0xa50: Stack[-4] = 0
0xa51: PushEmpty()
0xa52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xa53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xa54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa55: Push((int) 1)
0xa56: IF (Stack[-1] == 0) GOTO 0xa6d; Pop(1)

0xa57: PushEmpty(string)
0xa58: Stack[-1] = "Neutral"
0xa59: Call2 0xa8b

0xa5a: Pop(1)
0xa5b: Push((int) 540542)
0xa5c: @@ SetMessage(Stack[-1])
0xa5d: Pop(1)
0xa5e: @@ ClearReplies()
0xa5f: Pop(0)
0xa60: Push((int) 540543)
0xa61: Push((int) -1)
0xa62: Push((int) 42552)
0xa63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa64: Pop(3)
0xa65: Push((int) 540796)
0xa66: Push((int) -1)
0xa67: Push((int) 42845)
0xa68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa69: Pop(3)
0xa6a: GOTO 0xa6d

0xa6b: Return(); Pop(0)

0xa6c: GOTO 0xa55

0xa6d: PushEmpty(bool)
0xa6e: Call2 0xd9e

0xa6f: Pop(0)
0xa70: IF (Stack[-1] == 0) GOTO 0xa7c; Pop(1)

0xa71: @ lshWaitForAnimEnd()
0xa72: Pop(0)
0xa73: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa74: IF (Stack[-1] == 0) GOTO 0xa76; Pop(1)

0xa75: GOTO 0xa7b

0xa76: PushEmpty(string)
0xa77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa78: Call2 0xcd4

0xa79: Pop(1)
0xa7a: GOTO 0xa71

0xa7b: GOTO 0xa8a

0xa7c: Push("all")
0xa7d: Push("idle")
0xa7e: @ PlayAnimation(Stack[-2], Stack[-1])
0xa7f: Pop(2)
0xa80: @ WaitForAnimEnd()
0xa81: Pop(0)
0xa82: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa83: IF (Stack[-1] == 0) GOTO 0xa85; Pop(1)

0xa84: GOTO 0xa8a

0xa85: Push("all")
0xa86: Push("idle")
0xa87: @ PlayAnimation(Stack[-2], Stack[-1])
0xa88: Pop(2)
0xa89: GOTO 0xa80

0xa8a: Return(); Pop(0)

0xa8b: PushEmpty()
0xa8c: PushEmpty(bool)
0xa8d: Call2 0xd9e

0xa8e: Pop(0)
0xa8f: Pop(1); Push((bool) Stack[-1] == 0)
0xa90: IF (Stack[-1] == 0) GOTO 0xa92; Pop(1)

0xa91: Return(); Pop(0)

0xa92: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa93: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa94: Return(); Pop(0)

0xa95: PushEmpty(string, bool)
0xa96: Stack[-2] = Stack[-3]
0xa97: Push("")
0xa98: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa99: IF (Stack[-1] == 0) GOTO 0xa9c; Pop(1)

0xa9a: Stack[-1] = (bool) 0
0xa9b: GOTO 0xa9d

0xa9c: Stack[-1] = (bool) 1
0xa9d: Call2 0xce4

0xa9e: Pop(2)
0xa9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa0: Return(); Pop(0)

0xaa1: PushEmpty()
0xaa2: Push((int) 1)
0xaa3: IF (Stack[-1] == 0) GOTO 0xaca; Pop(1)

0xaa4: PushEmpty()
0xaa5: Call2 0xd02

0xaa6: Pop(0)
0xaa7: Push((int) 42551)
0xaa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa9: IF (Stack[-1] == 0) GOTO 0xabe; Pop(1)

0xaaa: PushEmpty(string)
0xaab: Stack[-1] = "Neutral"
0xaac: Call2 0xa8b

0xaad: Pop(1)
0xaae: Push((int) 540542)
0xaaf: @@ SetMessage(Stack[-1])
0xab0: Pop(1)
0xab1: @@ ClearReplies()
0xab2: Pop(0)
0xab3: Push((int) 540543)
0xab4: Push((int) -1)
0xab5: Push((int) 42552)
0xab6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab7: Pop(3)
0xab8: Push((int) 540796)
0xab9: Push((int) -1)
0xaba: Push((int) 42845)
0xabb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xabc: Pop(3)
0xabd: Return(); Pop(0)

0xabe: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xabf: PushEmpty(bool)
0xac0: Call2 0xd9e

0xac1: Pop(0)
0xac2: IF (Stack[-1] == 0) GOTO 0xac6; Pop(1)

0xac3: @ lshStopAnimation()
0xac4: Pop(0)
0xac5: GOTO 0xac8

0xac6: @ StopAnimation()
0xac7: Pop(0)
0xac8: Return(); Pop(0)

0xac9: GOTO 0xaa2

0xaca: Return(); Pop(0)

0xacb: Push(GlobalVars[1])
0xacc: Stack[-1] = (bool) 0
0xacd: GlobalVars[1] = Stack[-1]; Pop(1)
0xace: PushEmpty()
0xacf: Call2 0xad2

0xad0: Pop(0)
0xad1: Return(); Pop(0)

0xad2: PushEmpty(bool)
0xad3: Call2 0xbf0

0xad4: Pop(0)
0xad5: Pop(1); Push((bool) Stack[-1] == 0)
0xad6: IF (Stack[-1] == 0) GOTO 0xad9; Pop(1)

0xad7: @ Hold()
0xad8: Pop(0)
0xad9: @ GetDirection(Stack[-0])
0xada: Pop(0)
0xadb: PushEmpty()
0xadc: Call2 0xb82

0xadd: Pop(0)
0xade: GOTO 0xadb

0xadf: Return(); Pop(0)

0xae0: PushEmpty(object, object)
0xae1: Push("player")
0xae2: @ FindActor(Stack[-2], Stack[-1])
0xae3: Pop(1)
0xae4: Pop(0); Push((bool) Stack[-1] == 0)
0xae5: IF (Stack[-1] == 0) GOTO 0xae8; Pop(1)

0xae6: Stack[-3] = (bool) 0
0xae7: Return(); Pop(2)

0xae8: PushEmpty(bool, object)
0xae9: Stack[-1] = Stack[-3]
0xaea: Call2 0xbe7

0xaeb: Stack[-5] = Stack[-2]
0xaec: Pop(2)
0xaed: Return(); Pop(2)

0xaee: Stack[-1] = 0
0xaef: Push(CvectorIndex(Stack[-0], 0))
0xaf0: Push(CvectorIndex(Stack[-0], 2))
0xaf1: @ RotateAsync(Stack[-2], Stack[-1])
0xaf2: Pop(2)
0xaf3: Return(); Pop(0)

0xaf4: PushEmpty(object, bool, object, bool)
0xaf5: Push("player")
0xaf6: @ FindActor(Stack[-3], Stack[-1])
0xaf7: Pop(1)
0xaf8: Pop(0); Push((bool) Stack[-2] == 0)
0xaf9: IF (Stack[-1] == 0) GOTO 0xafc; Pop(1)

0xafa: Stack[-5] = (bool) 0
0xafb: Return(); Pop(4)

0xafc: PushEmpty(float, object)
0xafd: Stack[-1] = Stack[-4]
0xafe: Call2 0xbce

0xaff: Pop(1)
0xb00: Push((float)90000.0)
0xb01: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xb02: IF (Stack[-1] == 0) GOTO 0xb05; Pop(1)

0xb03: Stack[-5] = (bool) 0
0xb04: Return(); Pop(4)

0xb05: @ CanSee(Stack[-1], Stack[-2])
0xb06: Pop(0)
0xb07: Stack[-5] = Stack[-1]
0xb08: Return(); Pop(4)

0xb09: Stack[-2] = 0
0xb0a: PushEmpty(float, float)
0xb0b: Push((int) 8)
0xb0c: Push((int) 16)
0xb0d: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xb0e: Pop(2)
0xb0f: Push((int) 10)
0xb10: @ SetTimer(Stack[-1], Stack[-2])
0xb11: Pop(1)
0xb12: Return(); Pop(2)

0xb13: Push((int) 10)
0xb14: @ KillTimer(Stack[-1])
0xb15: Pop(1)
0xb16: Return(); Pop(0)

0xb17: PushEmpty()
0xb18: Push((int) 10)
0xb19: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb1a: IF (Stack[-1] == 0) GOTO 0xb3c; Pop(1)

0xb1b: PushEmpty()
0xb1c: Call2 0xb13

0xb1d: Pop(0)
0xb1e: PushEmpty(bool)
0xb1f: Stack[-1] = (bool) 0
0xb20: PushEmpty(bool)
0xb21: Call2 0xbf0

0xb22: Pop(0)
0xb23: IF (Stack[-1] == 0) GOTO 0xb29; Pop(1)

0xb24: PushEmpty(bool)
0xb25: Call2 0xaf4

0xb26: Pop(0)
0xb27: IF (Stack[-1] == 0) GOTO 0xb29; Pop(1)

0xb28: Stack[-1] = (bool) 1
0xb29: IF (Stack[-1] == 0) GOTO 0xb36; Pop(1)

0xb2a: PushEmpty(bool)
0xb2b: Call2 0xae0

0xb2c: Pop(0)
0xb2d: IF (Stack[-1] == 0) GOTO 0xb35; Pop(1)

0xb2e: PushEmpty(bool, object)
0xb2f: PushEmpty(object)
0xb30: Call2 0xd09

0xb31: Stack[-2] = Stack[-1]
0xb32: Pop(1)
0xb33: Call2 0xc84

0xb34: Pop(2)
0xb35: GOTO 0xb3c

0xb36: PushEmpty()
0xb37: Call2 0xaef

0xb38: Pop(0)
0xb39: PushEmpty()
0xb3a: Call2 0xb0a

0xb3b: Pop(0)
0xb3c: Return(); Pop(0)

0xb3d: PushEmpty()
0xb3e: Call2 0xbc9

0xb3f: Pop(0)
0xb40: PushEmpty()
0xb41: Call2 0xb13

0xb42: Pop(0)
0xb43: @ lshStopSpeech()
0xb44: Pop(0)
0xb45: @ lshStopAnimation()
0xb46: Pop(0)
0xb47: @ StopAsync()
0xb48: Pop(0)
0xb49: @ Hold()
0xb4a: Pop(0)
0xb4b: Return(); Pop(0)

0xb4c: @ StopGroup0()
0xb4d: Pop(0)
0xb4e: PushEmpty()
0xb4f: Call2 0xb13

0xb50: Pop(0)
0xb51: PushEmpty(string)
0xb52: Stack[-1] = "Neutral"
0xb53: Call2 0xcd4

0xb54: Pop(1)
0xb55: PushEmpty()
0xb56: Call2 0xb0a

0xb57: Pop(0)
0xb58: Return(); Pop(0)

0xb59: PushEmpty()
0xb5a: Push(Stack[-1])
0xb5b: IF (Stack[-1] == 0) GOTO 0xb60; Pop(1)

0xb5c: PushEmpty()
0xb5d: Call2 0xb0a

0xb5e: Pop(0)
0xb5f: GOTO 0xb64

0xb60: PushEmpty(string)
0xb61: Stack[-1] = "Neutral"
0xb62: Call2 0xcd4

0xb63: Pop(1)
0xb64: Return(); Pop(0)

0xb65: PushEmpty(bool, bool)
0xb66: @ IsOverrideActive(Stack[-1])
0xb67: Pop(0)
0xb68: Pop(0); Push((bool) Stack[-1] == 0)
0xb69: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0xb6a: EventDisable(0)
0xb6b: PushEmpty()
0xb6c: Call2 0xbc9

0xb6d: Pop(0)
0xb6e: PushEmpty(bool, object)
0xb6f: Stack[-1] = Stack[-5]
0xb70: Call2 0xbe7

0xb71: Pop(2)
0xb72: EventEnable(0)
0xb73: PushEmpty(object)
0xb74: Stack[-1] = Stack[-4]
0xb75: Call2 0xf7f

0xb76: Pop(1)
0xb77: PushEmpty(string)
0xb78: Stack[-1] = "Neutral"
0xb79: Call2 0xcd4

0xb7a: Pop(1)
0xb7b: PushEmpty()
0xb7c: Call2 0xb13

0xb7d: Pop(0)
0xb7e: PushEmpty()
0xb7f: Call2 0xb0a

0xb80: Pop(0)
0xb81: Return(); Pop(2)

0xb82: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xb83: @ WaitForAnimEnd()
0xb84: Pop(0)
0xb85: PushEmpty(bool)
0xb86: Call2 0xbf0

0xb87: Pop(0)
0xb88: Pop(1); Push((bool) Stack[-1] == 0)
0xb89: IF (Stack[-1] == 0) GOTO 0xb8b; Pop(1)

0xb8a: Return(); Pop(12)

0xb8b: PushEmpty(int)
0xb8c: Call2 0xd85

0xb8d: Stack[-7] = Stack[-1]
0xb8e: Pop(1)
0xb8f: Stack[-5] = (int) 0
0xb90: PushEmpty(bool)
0xb91: Stack[-1] = (bool) 0
0xb92: Push((int) 5)
0xb93: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xb94: IF (Stack[-1] == 0) GOTO 0xb9a; Pop(1)

0xb95: PushEmpty(bool)
0xb96: Call2 0xbf0

0xb97: Pop(0)
0xb98: IF (Stack[-1] == 0) GOTO 0xb9a; Pop(1)

0xb99: Stack[-1] = (bool) 1
0xb9a: IF (Stack[-1] == 0) GOTO 0xbc4; Pop(1)

0xb9b: Pop(0); Push((bool) Stack[-6] == 0)
0xb9c: IF (Stack[-1] == 0) GOTO 0xba4; Pop(1)

0xb9d: Push((int) 3)
0xb9e: @ Sleep(Stack[-1], Stack[-5])
0xb9f: Pop(1)
0xba0: Pop(0); Push((bool) Stack[-4] == 0)
0xba1: IF (Stack[-1] == 0) GOTO 0xba3; Pop(1)

0xba2: GOTO 0xbc4

0xba3: GOTO 0xbb9

0xba4: @ irand(Stack[-3], Stack[-6])
0xba5: Pop(0)
0xba6: Push((int) 5)
0xba7: @ irand(Stack[-3], Stack[-1])
0xba8: Pop(1)
0xba9: Push((int) 0)
0xbaa: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xbab: IF (Stack[-1] == 0) GOTO 0xbad; Pop(1)

0xbac: Stack[-3] = (int) 0
0xbad: Push("all")
0xbae: PushEmpty(string, int)
0xbaf: Stack[-1] = Stack[-6]
0xbb0: Call2 0xd7e

0xbb1: Pop(1)
0xbb2: @ PlayAnimation(Stack[-2], Stack[-1])
0xbb3: Pop(2)
0xbb4: @ WaitForAnimEnd(Stack[-1])
0xbb5: Pop(0)
0xbb6: Pop(0); Push((bool) Stack[-1] == 0)
0xbb7: IF (Stack[-1] == 0) GOTO 0xbb9; Pop(1)

0xbb8: GOTO 0xbc4

0xbb9: PushEmpty(bool)
0xbba: Call2 0xbc7

0xbbb: Pop(0)
0xbbc: Pop(1); Push((bool) Stack[-1] == 0)
0xbbd: IF (Stack[-1] == 0) GOTO 0xbbf; Pop(1)

0xbbe: GOTO 0xbc4

0xbbf: @ ResetAAS()
0xbc0: Pop(0)
0xbc1: Push((int) 1)
0xbc2: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xbc3: GOTO 0xb90

0xbc4: @ ResetAAS()
0xbc5: Pop(0)
0xbc6: Return(); Pop(12)

0xbc7: Stack[-1] = (bool) 1
0xbc8: Return(); Pop(0)

0xbc9: @ StopAnimation()
0xbca: Pop(0)
0xbcb: @ StopGroup0()
0xbcc: Pop(0)
0xbcd: Return(); Pop(0)

0xbce: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xbcf: @ GetPosition(Stack[-3])
0xbd0: Pop(0)
0xbd1: @@ GetPosition(Stack[-2])
0xbd2: Pop(0)
0xbd3: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xbd4: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xbd5: Return(); Pop(6)

0xbd6: PushEmpty(int, int)
0xbd7: @@ GetProperty(Stack[-4], Stack[-1])
0xbd8: Pop(0)
0xbd9: Pop(0); Push(Stack[-1] + Stack[-3]);
0xbda: @@ SetProperty(Stack[-5], Stack[-1])
0xbdb: Pop(1)
0xbdc: Return(); Pop(2)

0xbdd: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xbde: @ GetPosition(Stack[-3])
0xbdf: Pop(0)
0xbe0: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xbe1: Push(CvectorIndex(Stack[-2], 0))
0xbe2: Push(CvectorIndex(Stack[-3], 2))
0xbe3: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xbe4: Pop(2)
0xbe5: Stack[-8] = Stack[-1]
0xbe6: Return(); Pop(6)

0xbe7: PushEmpty(cvector, cvector)
0xbe8: @@ GetPosition(Stack[-1])
0xbe9: Pop(0)
0xbea: PushEmpty(bool, cvector)
0xbeb: Stack[-1] = Stack[-3]
0xbec: Call2 0xbdd

0xbed: Stack[-6] = Stack[-2]
0xbee: Pop(2)
0xbef: Return(); Pop(2)

0xbf0: PushEmpty(bool, bool)
0xbf1: @ IsLoaded(Stack[-1])
0xbf2: Pop(0)
0xbf3: Stack[-3] = Stack[-1]
0xbf4: Return(); Pop(2)

0xbf5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xbf6: @@ GetPosition(Stack[-8])
0xbf7: Pop(0)
0xbf8: @@ GetEyesHeight(Stack[-9])
0xbf9: Pop(0)
0xbfa: Push(CvectorIndex(Stack[-8], 1))
0xbfb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xbfc: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xbfd: @ GetPosition(Stack[-7])
0xbfe: Pop(0)
0xbff: @ GetEyesHeight(Stack[-9])
0xc00: Pop(0)
0xc01: Push(CvectorIndex(Stack[-7], 1))
0xc02: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xc03: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xc04: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xc05: Push(CvectorIndex(Stack[-6], 1))
0xc06: Stack[-1] = (int) 0
0xc07: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xc08: Pop(0); Push(Stack[-6] | Stack[-6]);
0xc09: Pop(1); Push(Sqrt(Stack[-1]))
0xc0a: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xc0b: Stack[-5] = -Stack[-6]; Pop(0);
0xc0c: Pop(0); Push(Stack[-6] * Stack[-19]);
0xc0d: PushEmpty(cvector, cvector)
0xc0e: Push(CVector(0.0, 1.0, 0.0))
0xc0f: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xc10: Call2 0xd0f

0xc11: Pop(1)
0xc12: Push((int) 25)
0xc13: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc14: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc15: Push(CVector(0.0, 10.0, 0.0))
0xc16: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xc17: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xc18: @ IsOverrideActive(Stack[-2])
0xc19: Pop(0)
0xc1a: Push(Stack[-2])
0xc1b: IF (Stack[-1] == 0) GOTO 0xc1e; Pop(1)

0xc1c: Stack[-21] = (bool) 0
0xc1d: Return(); Pop(18)

0xc1e: @ StopWorld()
0xc1f: Pop(0)
0xc20: @ CameraTransit(Stack[-3], Stack[-5])
0xc21: Pop(0)
0xc22: Push(CvectorIndex(Stack[-4], 0))
0xc23: Push(CvectorIndex(Stack[-5], 2))
0xc24: @ Rotate(Stack[-2], Stack[-1])
0xc25: Pop(2)
0xc26: PushEmpty(bool)
0xc27: Call2 0xd9e

0xc28: Pop(0)
0xc29: IF (Stack[-1] == 0) GOTO 0xc2b; Pop(1)

0xc2a: GOTO 0xc33

0xc2b: Push("head")
0xc2c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc2d: Pop(1)
0xc2e: Push(Stack[-1])
0xc2f: IF (Stack[-1] == 0) GOTO 0xc33; Pop(1)

0xc30: Push("head")
0xc31: @ LookAsyncCamera(Stack[-1])
0xc32: Pop(1)
0xc33: @ CameraWaitForPlayFinish()
0xc34: Pop(0)
0xc35: @ ResumeWorld()
0xc36: Pop(0)
0xc37: Stack[-21] = (bool) 1
0xc38: Return(); Pop(18)

0xc39: PushEmpty(bool, bool)
0xc3a: @ CameraSwitchToNormal()
0xc3b: Pop(0)
0xc3c: PushEmpty(bool)
0xc3d: Call2 0xd9e

0xc3e: Pop(0)
0xc3f: IF (Stack[-1] == 0) GOTO 0xc41; Pop(1)

0xc40: GOTO 0xc49

0xc41: Push("head")
0xc42: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc43: Pop(1)
0xc44: Push(Stack[-1])
0xc45: IF (Stack[-1] == 0) GOTO 0xc49; Pop(1)

0xc46: Push("head")
0xc47: @ UnlookAsync(Stack[-1])
0xc48: Pop(1)
0xc49: Return(); Pop(2)

0xc4a: PushEmpty(int, int, int, int)
0xc4b: Push("voice_common")
0xc4c: @ GetVariable(Stack[-1], Stack[-3])
0xc4d: Pop(1)
0xc4e: Push(Stack[-2])
0xc4f: IF (Stack[-1] == 0) GOTO 0xc70; Pop(1)

0xc50: PushEmpty(bool, object)
0xc51: Stack[-1] = Stack[-7]
0xc52: Call2 0xc84

0xc53: Pop(1)
0xc54: Pop(1); Push((bool) Stack[-1] == 0)
0xc55: IF (Stack[-1] == 0) GOTO 0xc5e; Pop(1)

0xc56: PushEmpty(bool, object)
0xc57: Stack[-1] = Stack[-7]
0xc58: Call2 0xca9

0xc59: Pop(1)
0xc5a: Pop(1); Push((bool) Stack[-1] == 0)
0xc5b: IF (Stack[-1] == 0) GOTO 0xc5e; Pop(1)

0xc5c: Stack[-6] = (bool) 0
0xc5d: Return(); Pop(4)

0xc5e: Push((int) 2)
0xc5f: @ irand(Stack[-2], Stack[-1])
0xc60: Pop(1)
0xc61: Push(Stack[-1])
0xc62: IF (Stack[-1] == 0) GOTO 0xc6b; Pop(1)

0xc63: Push("voice_common")
0xc64: Push((int) 1)
0xc65: Pop(1); Push(Stack[-4] + Stack[-1]);
0xc66: Push((int) 3)
0xc67: Pop(2); Push(Stack[-2] % Stack[-1]);
0xc68: @ SetVariable(Stack[-2], Stack[-1])
0xc69: Pop(2)
0xc6a: GOTO 0xc6f

0xc6b: Push("voice_common")
0xc6c: Push((int) 0)
0xc6d: @ SetVariable(Stack[-2], Stack[-1])
0xc6e: Pop(2)
0xc6f: GOTO 0xc82

0xc70: PushEmpty(bool, object)
0xc71: Stack[-1] = Stack[-7]
0xc72: Call2 0xca9

0xc73: Pop(1)
0xc74: Pop(1); Push((bool) Stack[-1] == 0)
0xc75: IF (Stack[-1] == 0) GOTO 0xc7e; Pop(1)

0xc76: PushEmpty(bool, object)
0xc77: Stack[-1] = Stack[-7]
0xc78: Call2 0xc84

0xc79: Pop(1)
0xc7a: Pop(1); Push((bool) Stack[-1] == 0)
0xc7b: IF (Stack[-1] == 0) GOTO 0xc7e; Pop(1)

0xc7c: Stack[-6] = (bool) 0
0xc7d: Return(); Pop(4)

0xc7e: Push("voice_common")
0xc7f: Push((int) 1)
0xc80: @ SetVariable(Stack[-2], Stack[-1])
0xc81: Pop(2)
0xc82: Stack[-6] = (bool) 1
0xc83: Return(); Pop(4)

0xc84: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xc85: Stack[-5] = "c"
0xc86: Stack[-4] = (int) 0
0xc87: Push((int) 1)
0xc88: IF (Stack[-1] == 0) GOTO 0xc94; Pop(1)

0xc89: Push((int) 1)
0xc8a: Pop(1); Push(Stack[-5] + Stack[-1]);
0xc8b: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc8c: @@ HasProperty(Stack[-1], Stack[-4])
0xc8d: Pop(1)
0xc8e: Pop(0); Push((bool) Stack[-3] == 0)
0xc8f: IF (Stack[-1] == 0) GOTO 0xc91; Pop(1)

0xc90: GOTO 0xc94

0xc91: Push((int) 1)
0xc92: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xc93: GOTO 0xc87

0xc94: Pop(0); Push((bool) Stack[-4] == 0)
0xc95: IF (Stack[-1] == 0) GOTO 0xc98; Pop(1)

0xc96: Stack[-12] = (bool) 0
0xc97: Return(); Pop(10)

0xc98: Stack[-2] = (int) 0
0xc99: Push((int) 1)
0xc9a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xc9b: IF (Stack[-1] == 0) GOTO 0xc9e; Pop(1)

0xc9c: @ irand(Stack[-2], Stack[-4])
0xc9d: Pop(0)
0xc9e: Push((int) 1)
0xc9f: Pop(1); Push(Stack[-3] + Stack[-1]);
0xca0: Pop(1); Push(Stack[-6] + Stack[-1]);
0xca1: @@ GetProperty(Stack[-1], Stack[-2])
0xca2: Pop(1)
0xca3: PushEmpty(bool, string)
0xca4: Stack[-1] = Stack[-3]
0xca5: Call2 0xcf3

0xca6: Stack[-14] = Stack[-2]
0xca7: Pop(2)
0xca8: Return(); Pop(10)

0xca9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xcaa: Push("d")
0xcab: PushEmpty(int)
0xcac: Call2 0xd67

0xcad: Pop(0)
0xcae: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcaf: Push("m")
0xcb0: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xcb1: Stack[-4] = (int) 0
0xcb2: Push((int) 1)
0xcb3: IF (Stack[-1] == 0) GOTO 0xcbf; Pop(1)

0xcb4: Push((int) 1)
0xcb5: Pop(1); Push(Stack[-5] + Stack[-1]);
0xcb6: Pop(1); Push(Stack[-6] + Stack[-1]);
0xcb7: @@ HasProperty(Stack[-1], Stack[-4])
0xcb8: Pop(1)
0xcb9: Pop(0); Push((bool) Stack[-3] == 0)
0xcba: IF (Stack[-1] == 0) GOTO 0xcbc; Pop(1)

0xcbb: GOTO 0xcbf

0xcbc: Push((int) 1)
0xcbd: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xcbe: GOTO 0xcb2

0xcbf: Pop(0); Push((bool) Stack[-4] == 0)
0xcc0: IF (Stack[-1] == 0) GOTO 0xcc3; Pop(1)

0xcc1: Stack[-12] = (bool) 0
0xcc2: Return(); Pop(10)

0xcc3: Stack[-2] = (int) 0
0xcc4: Push((int) 1)
0xcc5: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xcc6: IF (Stack[-1] == 0) GOTO 0xcc9; Pop(1)

0xcc7: @ irand(Stack[-2], Stack[-4])
0xcc8: Pop(0)
0xcc9: Push((int) 1)
0xcca: Pop(1); Push(Stack[-3] + Stack[-1]);
0xccb: Pop(1); Push(Stack[-6] + Stack[-1]);
0xccc: @@ GetProperty(Stack[-1], Stack[-2])
0xccd: Pop(1)
0xcce: PushEmpty(bool, string)
0xccf: Stack[-1] = Stack[-3]
0xcd0: Call2 0xcf3

0xcd1: Stack[-14] = Stack[-2]
0xcd2: Pop(2)
0xcd3: Return(); Pop(10)

0xcd4: PushEmpty(bool, float, float, bool, float, float)
0xcd5: @ lshHasAnimation(Stack[-3], Stack[-7])
0xcd6: Pop(0)
0xcd7: Push(Stack[-3])
0xcd8: IF (Stack[-1] == 0) GOTO 0xcdf; Pop(1)

0xcd9: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xcda: Pop(0)
0xcdb: Push((bool) 0)
0xcdc: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xcdd: Pop(1)
0xcde: GOTO 0xce3

0xcdf: Push("Can't find lsh animation : ")
0xce0: Pop(1); Push(Stack[-1] + Stack[-8]);
0xce1: @ Trace(Stack[-1])
0xce2: Pop(1)
0xce3: Return(); Pop(6)

0xce4: PushEmpty(bool, float, float, bool, float, float)
0xce5: @ lshHasAnimation(Stack[-3], Stack[-8])
0xce6: Pop(0)
0xce7: Push(Stack[-3])
0xce8: IF (Stack[-1] == 0) GOTO 0xcee; Pop(1)

0xce9: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xcea: Pop(0)
0xceb: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xcec: Pop(0)
0xced: GOTO 0xcf2

0xcee: Push("Can't find lsh animation : ")
0xcef: Pop(1); Push(Stack[-1] + Stack[-9]);
0xcf0: @ Trace(Stack[-1])
0xcf1: Pop(1)
0xcf2: Return(); Pop(6)

0xcf3: PushEmpty(bool, bool)
0xcf4: PushEmpty(bool)
0xcf5: Call2 0xd9e

0xcf6: Pop(0)
0xcf7: IF (Stack[-1] == 0) GOTO 0xd00; Pop(1)

0xcf8: @ lshHasSpeech(Stack[-1], Stack[-3])
0xcf9: Pop(0)
0xcfa: Push(Stack[-1])
0xcfb: IF (Stack[-1] == 0) GOTO 0xd00; Pop(1)

0xcfc: @ lshPlaySpeech(Stack[-3])
0xcfd: Pop(0)
0xcfe: Stack[-4] = (bool) 1
0xcff: Return(); Pop(2)

0xd00: Stack[-4] = (bool) 0
0xd01: Return(); Pop(2)

0xd02: PushEmpty(bool)
0xd03: Call2 0xd9e

0xd04: Pop(0)
0xd05: IF (Stack[-1] == 0) GOTO 0xd08; Pop(1)

0xd06: @ lshStopSpeech()
0xd07: Pop(0)
0xd08: Return(); Pop(0)

0xd09: PushEmpty(object, object)
0xd0a: @ self(Stack[-1])
0xd0b: Pop(0)
0xd0c: Stack[-3] = Stack[-1]
0xd0d: Return(); Pop(2)

0xd0e: Stack[-1] = 0
0xd0f: PushEmpty(float, float)
0xd10: Pop(0); Push(Stack[-3] | Stack[-3]);
0xd11: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xd12: Push((float)0.0)
0xd13: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xd14: IF (Stack[-1] == 0) GOTO 0xd17; Pop(1)

0xd15: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xd16: Return(); Pop(2)

0xd17: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xd18: Return(); Pop(2)

0xd19: PushEmpty(int, int)
0xd1a: @ GetVariable(Stack[-3], Stack[-1])
0xd1b: Pop(0)
0xd1c: Stack[-4] = Stack[-1]
0xd1d: Return(); Pop(2)

0xd1e: PushEmpty(object, object, object, object)
0xd1f: @ GetMainOutdoorScene(Stack[-2])
0xd20: Pop(0)
0xd21: Push(".bin")
0xd22: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd23: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xd24: Pop(1)
0xd25: Stack[-6] = Stack[-1]
0xd26: Return(); Pop(4)

0xd27: Stack[-1] = 0
0xd28: Stack[-2] = 0
0xd29: PushEmpty(object, object)
0xd2a: @ CreateIntVector(Stack[-1])
0xd2b: Pop(0)
0xd2c: @@ add(Stack[-4])
0xd2d: Pop(0)
0xd2e: @@ add(Stack[-3])
0xd2f: Pop(0)
0xd30: Push((int) 3)
0xd31: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xd32: Pop(1)
0xd33: Return(); Pop(2)

0xd34: Stack[-1] = 0
0xd35: PushEmpty(int, int)
0xd36: PushEmpty(object, string, int)
0xd37: Stack[-3] = Stack[-7]
0xd38: Stack[-2] = "money"
0xd39: Stack[-1] = Stack[-6]
0xd3a: Call2 0xbd6

0xd3b: Pop(3)
0xd3c: Push((int) 0)
0xd3d: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xd3e: IF (Stack[-1] == 0) GOTO 0xd47; Pop(1)

0xd3f: Push("Money")
0xd40: @ GetInvItemByName(Stack[-2], Stack[-1])
0xd41: Pop(1)
0xd42: PushEmpty(int, int)
0xd43: Stack[-2] = Stack[-3]
0xd44: Stack[-1] = Stack[-5]
0xd45: Call2 0xd29

0xd46: Pop(2)
0xd47: Return(); Pop(2)

0xd48: PushEmpty(int, int, bool, int, int, bool)
0xd49: @@ GetItemID(Stack[-3])
0xd4a: Pop(0)
0xd4b: Push("Category")
0xd4c: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xd4d: Pop(1)
0xd4e: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xd4f: Pop(0)
0xd50: Pop(0); Push((bool) Stack[-1] == 0)
0xd51: IF (Stack[-1] == 0) GOTO 0xd55; Pop(1)

0xd52: @@ DropItems(Stack[-8], Stack[-7])
0xd53: Pop(0)
0xd54: GOTO 0xd5a

0xd55: PushEmpty(int, int)
0xd56: Stack[-2] = Stack[-5]
0xd57: Stack[-1] = Stack[-9]
0xd58: Call2 0xd29

0xd59: Pop(2)
0xd5a: Return(); Pop(6)

0xd5b: PushEmpty(object, object)
0xd5c: @ FindActor(Stack[-1], Stack[-4])
0xd5d: Pop(0)
0xd5e: Pop(0); Push((bool) Stack[-1] == 0)
0xd5f: IF (Stack[-1] == 0) GOTO 0xd62; Pop(1)

0xd60: Stack[-5] = (bool) 0
0xd61: Return(); Pop(2)

0xd62: @ Trigger(Stack[-1], Stack[-3])
0xd63: Pop(0)
0xd64: Stack[-5] = (bool) 1
0xd65: Return(); Pop(2)

0xd66: Stack[-1] = 0
0xd67: PushEmpty(float, float)
0xd68: @ GetGameTime(Stack[-1])
0xd69: Pop(0)
0xd6a: Push((int) 1)
0xd6b: PushEmpty(int)
0xd6c: Push((int) 24)
0xd6d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xd6e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xd6f: Return(); Pop(2)

0xd70: PushEmpty(float, float)
0xd71: @ GetGameTime(Stack[-1])
0xd72: Pop(0)
0xd73: PushEmpty(int)
0xd74: Stack[-1] = Stack[-2]
0xd75: Push((int) 24)
0xd76: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xd77: Return(); Pop(2)

0xd78: PushEmpty()
0xd79: PushEmpty(int)
0xd7a: Call2 0xd67

0xd7b: Pop(0)
0xd7c: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xd7d: Return(); Pop(0)

0xd7e: PushEmpty(string, string)
0xd7f: Stack[-1] = "idle"
0xd80: Push(Stack[-3])
0xd81: IF (Stack[-1] == 0) GOTO 0xd83; Pop(1)

0xd82: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xd83: Stack[-4] = Stack[-1]
0xd84: Return(); Pop(2)

0xd85: PushEmpty(int, bool, int, bool)
0xd86: Stack[-2] = (int) 0
0xd87: Push("all")
0xd88: PushEmpty(string, int)
0xd89: Stack[-1] = Stack[-5]
0xd8a: Call2 0xd7e

0xd8b: Pop(1)
0xd8c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xd8d: Pop(2)
0xd8e: Pop(0); Push((bool) Stack[-1] == 0)
0xd8f: IF (Stack[-1] == 0) GOTO 0xd91; Pop(1)

0xd90: GOTO 0xd94

0xd91: Push((int) 1)
0xd92: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xd93: GOTO 0xd87

0xd94: Stack[-5] = Stack[-2]
0xd95: Return(); Pop(4)

0xd96: Stack[-1] = (int) 515552
0xd97: Return(); Pop(0)

0xd98: Stack[-1] = (int) 502877
0xd99: Return(); Pop(0)

0xd9a: Stack[-1] = "ui/NPC_Spi4ka.png"
0xd9b: Return(); Pop(0)

0xd9c: Stack[-1] = "ui/NPC_Spi4ka_b.png"
0xd9d: Return(); Pop(0)

0xd9e: Stack[-1] = (bool) 1
0xd9f: Return(); Pop(0)

0xda0: PushEmpty(object, object)
0xda1: Push("lockpick1time is given")
0xda2: @ Trace(Stack[-1])
0xda3: Pop(1)
0xda4: @ CreateInvItem(Stack[-1])
0xda5: Pop(0)
0xda6: Push("lockpick")
0xda7: @@ SetItemName(Stack[-1])
0xda8: Pop(1)
0xda9: Push("uses")
0xdaa: Push((int) 1)
0xdab: @@ SetProperty(Stack[-2], Stack[-1])
0xdac: Pop(2)
0xdad: PushEmpty(object, object, int)
0xdae: Stack[-3] = Stack[-7]
0xdaf: Stack[-2] = Stack[-4]
0xdb0: Stack[-1] = (int) 1
0xdb1: Call2 0xd48

0xdb2: Pop(3)
0xdb3: Return(); Pop(2)

0xdb4: Stack[-1] = 0
0xdb5: PushEmpty()
0xdb6: Push("money 2000 removed")
0xdb7: @ Trace(Stack[-1])
0xdb8: Pop(1)
0xdb9: PushEmpty(object, int)
0xdba: Stack[-2] = Stack[-4]
0xdbb: Stack[-1] = (int) -2000
0xdbc: Call2 0xd35

0xdbd: Pop(2)
0xdbe: Return(); Pop(0)

0xdbf: PushEmpty()
0xdc0: Push("ood2Spi4ka1")
0xdc1: Push((int) 1)
0xdc2: @ SetVariable(Stack[-2], Stack[-1])
0xdc3: Pop(2)
0xdc4: Return(); Pop(0)

0xdc5: PushEmpty()
0xdc6: Push("d2q01")
0xdc7: Push((int) 4)
0xdc8: @ SetVariable(Stack[-2], Stack[-1])
0xdc9: Pop(2)
0xdca: PushEmpty()
0xdcb: Call2 0xf04

0xdcc: Pop(0)
0xdcd: Return(); Pop(0)

0xdce: PushEmpty()
0xdcf: Push("playsound")
0xdd0: Push("givemoney")
0xdd1: @ TriggerWorld(Stack[-2], Stack[-1])
0xdd2: Pop(2)
0xdd3: Return(); Pop(0)

0xdd4: PushEmpty()
0xdd5: Push("ood6Spi4ka1")
0xdd6: Push((int) 1)
0xdd7: @ SetVariable(Stack[-2], Stack[-1])
0xdd8: Pop(2)
0xdd9: Return(); Pop(0)

0xdda: PushEmpty()
0xddb: Push("d6q03")
0xddc: Push((int) 1)
0xddd: @ SetVariable(Stack[-2], Stack[-1])
0xdde: Pop(2)
0xddf: PushEmpty()
0xde0: Call2 0xf11

0xde1: Pop(0)
0xde2: PushEmpty()
0xde3: Call2 0xf38

0xde4: Pop(0)
0xde5: PushEmpty(object, string)
0xde6: Stack[-1] = "quest_d6_03"
0xde7: Call2 0xd1e

0xde8: Pop(2)
0xde9: PushEmpty(bool, string, string)
0xdea: Stack[-2] = "quest_d6_03"
0xdeb: Stack[-1] = "place_albinos"
0xdec: Call2 0xd5b

0xded: Pop(3)
0xdee: Return(); Pop(0)

0xdef: PushEmpty()
0xdf0: Push("ood6Spi4ka2")
0xdf1: Push((int) 1)
0xdf2: @ SetVariable(Stack[-2], Stack[-1])
0xdf3: Pop(2)
0xdf4: Return(); Pop(0)

0xdf5: PushEmpty()
0xdf6: PushEmpty()
0xdf7: Call2 0xf1e

0xdf8: Pop(0)
0xdf9: PushEmpty(bool, string, string)
0xdfa: Stack[-2] = "quest_d6_03"
0xdfb: Stack[-1] = "completed"
0xdfc: Call2 0xd5b

0xdfd: Pop(3)
0xdfe: Return(); Pop(0)

0xdff: PushEmpty()
0xe00: PushEmpty()
0xe01: Call2 0xf2b

0xe02: Pop(0)
0xe03: PushEmpty(bool, string, string)
0xe04: Stack[-2] = "quest_d6_03"
0xe05: Stack[-1] = "failed"
0xe06: Call2 0xd5b

0xe07: Pop(3)
0xe08: Return(); Pop(0)

0xe09: PushEmpty()
0xe0a: Push("ood6Spi4ka3")
0xe0b: Push((int) 1)
0xe0c: @ SetVariable(Stack[-2], Stack[-1])
0xe0d: Pop(2)
0xe0e: Return(); Pop(0)

0xe0f: PushEmpty()
0xe10: Push("ood6Spi4ka4")
0xe11: Push((int) 1)
0xe12: @ SetVariable(Stack[-2], Stack[-1])
0xe13: Pop(2)
0xe14: Return(); Pop(0)

0xe15: PushEmpty()
0xe16: Push("ood2Spi4ka3")
0xe17: Push((int) 1)
0xe18: @ SetVariable(Stack[-2], Stack[-1])
0xe19: Pop(2)
0xe1a: Return(); Pop(0)

0xe1b: PushEmpty()
0xe1c: Push("KnowSpi4ka")
0xe1d: Push((int) 1)
0xe1e: @ SetVariable(Stack[-2], Stack[-1])
0xe1f: Pop(2)
0xe20: Return(); Pop(0)

0xe21: PushEmpty()
0xe22: PushEmpty(bool, object)
0xe23: Stack[-1] = Stack[-3]
0xe24: Call2 0xecf

0xe25: Pop(1)
0xe26: IF (Stack[-1] == 0) GOTO 0xe29; Pop(1)

0xe27: Stack[-2] = (bool) 1
0xe28: Return(); Pop(0)

0xe29: Stack[-2] = (bool) 0
0xe2a: Return(); Pop(0)

0xe2b: PushEmpty()
0xe2c: PushEmpty(int, string)
0xe2d: Stack[-1] = "ood2Spi4ka1"
0xe2e: Call2 0xd19

0xe2f: Pop(1)
0xe30: Push((int) 0)
0xe31: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe32: IF (Stack[-1] == 0) GOTO 0xe35; Pop(1)

0xe33: Stack[-2] = (bool) 1
0xe34: Return(); Pop(0)

0xe35: Stack[-2] = (bool) 0
0xe36: Return(); Pop(0)

0xe37: PushEmpty()
0xe38: PushEmpty(int, string)
0xe39: Stack[-1] = "d2q01"
0xe3a: Call2 0xd19

0xe3b: Pop(1)
0xe3c: Push((int) 3)
0xe3d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe3e: IF (Stack[-1] == 0) GOTO 0xe41; Pop(1)

0xe3f: Stack[-2] = (bool) 1
0xe40: Return(); Pop(0)

0xe41: Stack[-2] = (bool) 0
0xe42: Return(); Pop(0)

0xe43: PushEmpty()
0xe44: PushEmpty(bool, object)
0xe45: Stack[-1] = Stack[-3]
0xe46: Call2 0xeda

0xe47: Pop(1)
0xe48: IF (Stack[-1] == 0) GOTO 0xe4b; Pop(1)

0xe49: Stack[-2] = (bool) 1
0xe4a: Return(); Pop(0)

0xe4b: Stack[-2] = (bool) 0
0xe4c: Return(); Pop(0)

0xe4d: PushEmpty()
0xe4e: PushEmpty(bool, object)
0xe4f: Stack[-1] = Stack[-3]
0xe50: Call2 0xeef

0xe51: Pop(1)
0xe52: IF (Stack[-1] == 0) GOTO 0xe55; Pop(1)

0xe53: Stack[-2] = (bool) 1
0xe54: Return(); Pop(0)

0xe55: Stack[-2] = (bool) 0
0xe56: Return(); Pop(0)

0xe57: PushEmpty()
0xe58: PushEmpty(int, string)
0xe59: Stack[-1] = "ood6Spi4ka1"
0xe5a: Call2 0xd19

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
0xe65: Stack[-1] = "d6q03"
0xe66: Call2 0xd19

0xe67: Pop(1)
0xe68: Push((int) 0)
0xe69: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe6a: IF (Stack[-1] == 0) GOTO 0xe6d; Pop(1)

0xe6b: Stack[-2] = (bool) 1
0xe6c: Return(); Pop(0)

0xe6d: Stack[-2] = (bool) 0
0xe6e: Return(); Pop(0)

0xe6f: PushEmpty()
0xe70: PushEmpty(int, string)
0xe71: Stack[-1] = "d6q03"
0xe72: Call2 0xd19

0xe73: Pop(1)
0xe74: Push((int) 2)
0xe75: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe76: IF (Stack[-1] == 0) GOTO 0xe79; Pop(1)

0xe77: Stack[-2] = (bool) 1
0xe78: Return(); Pop(0)

0xe79: Stack[-2] = (bool) 0
0xe7a: Return(); Pop(0)

0xe7b: PushEmpty()
0xe7c: PushEmpty(int, string)
0xe7d: Stack[-1] = "d6q03AlbinosKilled"
0xe7e: Call2 0xd19

0xe7f: Pop(1)
0xe80: Push((int) 1)
0xe81: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe82: IF (Stack[-1] == 0) GOTO 0xe85; Pop(1)

0xe83: Stack[-2] = (bool) 1
0xe84: Return(); Pop(0)

0xe85: Stack[-2] = (bool) 0
0xe86: Return(); Pop(0)

0xe87: PushEmpty()
0xe88: PushEmpty(int, string)
0xe89: Stack[-1] = "ood6Spi4ka2"
0xe8a: Call2 0xd19

0xe8b: Pop(1)
0xe8c: Push((int) 0)
0xe8d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe8e: IF (Stack[-1] == 0) GOTO 0xe91; Pop(1)

0xe8f: Stack[-2] = (bool) 1
0xe90: Return(); Pop(0)

0xe91: Stack[-2] = (bool) 0
0xe92: Return(); Pop(0)

0xe93: PushEmpty()
0xe94: PushEmpty(int, string)
0xe95: Stack[-1] = "ood6Spi4ka3"
0xe96: Call2 0xd19

0xe97: Pop(1)
0xe98: Push((int) 0)
0xe99: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe9a: IF (Stack[-1] == 0) GOTO 0xe9d; Pop(1)

0xe9b: Stack[-2] = (bool) 1
0xe9c: Return(); Pop(0)

0xe9d: Stack[-2] = (bool) 0
0xe9e: Return(); Pop(0)

0xe9f: PushEmpty()
0xea0: PushEmpty(int, string)
0xea1: Stack[-1] = "d6q01"
0xea2: Call2 0xd19

0xea3: Pop(1)
0xea4: Push((int) 4)
0xea5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xea6: IF (Stack[-1] == 0) GOTO 0xea9; Pop(1)

0xea7: Stack[-2] = (bool) 1
0xea8: Return(); Pop(0)

0xea9: Stack[-2] = (bool) 0
0xeaa: Return(); Pop(0)

0xeab: PushEmpty()
0xeac: PushEmpty(int, string)
0xead: Stack[-1] = "ood6Spi4ka4"
0xeae: Call2 0xd19

0xeaf: Pop(1)
0xeb0: Push((int) 0)
0xeb1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xeb2: IF (Stack[-1] == 0) GOTO 0xeb5; Pop(1)

0xeb3: Stack[-2] = (bool) 1
0xeb4: Return(); Pop(0)

0xeb5: Stack[-2] = (bool) 0
0xeb6: Return(); Pop(0)

0xeb7: PushEmpty()
0xeb8: PushEmpty(int, string)
0xeb9: Stack[-1] = "d2q01"
0xeba: Call2 0xd19

0xebb: Pop(1)
0xebc: Push((int) 5)
0xebd: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xebe: IF (Stack[-1] == 0) GOTO 0xec1; Pop(1)

0xebf: Stack[-2] = (bool) 1
0xec0: Return(); Pop(0)

0xec1: Stack[-2] = (bool) 0
0xec2: Return(); Pop(0)

0xec3: PushEmpty()
0xec4: PushEmpty(int, string)
0xec5: Stack[-1] = "ood2Spi4ka3"
0xec6: Call2 0xd19

0xec7: Pop(1)
0xec8: Push((int) 0)
0xec9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xeca: IF (Stack[-1] == 0) GOTO 0xecd; Pop(1)

0xecb: Stack[-2] = (bool) 1
0xecc: Return(); Pop(0)

0xecd: Stack[-2] = (bool) 0
0xece: Return(); Pop(0)

0xecf: PushEmpty(float, float)
0xed0: Push("money")
0xed1: @@ GetProperty(Stack[-1], Stack[-2])
0xed2: Pop(1)
0xed3: Push((int) 2000)
0xed4: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xed5: IF (Stack[-1] == 0) GOTO 0xed8; Pop(1)

0xed6: Stack[-4] = (bool) 1
0xed7: Return(); Pop(2)

0xed8: Stack[-4] = (bool) 0
0xed9: Return(); Pop(2)

0xeda: PushEmpty()
0xedb: PushEmpty(bool)
0xedc: Stack[-1] = (bool) 0
0xedd: PushEmpty(int)
0xede: Call2 0xd70

0xedf: Pop(0)
0xee0: Push((int) 0)
0xee1: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xee2: IF (Stack[-1] == 0) GOTO 0xeea; Pop(1)

0xee3: PushEmpty(int)
0xee4: Call2 0xd70

0xee5: Pop(0)
0xee6: Push((int) 6)
0xee7: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xee8: IF (Stack[-1] == 0) GOTO 0xeea; Pop(1)

0xee9: Stack[-1] = (bool) 1
0xeea: IF (Stack[-1] == 0) GOTO 0xeed; Pop(1)

0xeeb: Stack[-2] = (bool) 1
0xeec: Return(); Pop(0)

0xeed: Stack[-2] = (bool) 0
0xeee: Return(); Pop(0)

0xeef: PushEmpty()
0xef0: PushEmpty(bool)
0xef1: Stack[-1] = (bool) 0
0xef2: PushEmpty(int)
0xef3: Call2 0xd70

0xef4: Pop(0)
0xef5: Push((int) 6)
0xef6: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xef7: IF (Stack[-1] == 0) GOTO 0xeff; Pop(1)

0xef8: PushEmpty(int)
0xef9: Call2 0xd70

0xefa: Pop(0)
0xefb: Push((int) 12)
0xefc: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xefd: IF (Stack[-1] == 0) GOTO 0xeff; Pop(1)

0xefe: Stack[-1] = (bool) 1
0xeff: IF (Stack[-1] == 0) GOTO 0xf02; Pop(1)

0xf00: Stack[-2] = (bool) 1
0xf01: Return(); Pop(0)

0xf02: Stack[-2] = (bool) 0
0xf03: Return(); Pop(0)

0xf04: PushEmpty(object, object)
0xf05: Push((int) 53)
0xf06: Push((int) 1)
0xf07: Push((int) 512135)
0xf08: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf09: Pop(3)
0xf0a: PushEmpty(bool, object, int)
0xf0b: Stack[-2] = Stack[-4]
0xf0c: Stack[-1] = (int) 10
0xf0d: Call2 0xf52

0xf0e: Pop(3)
0xf0f: Return(); Pop(2)

0xf10: Stack[-1] = 0
0xf11: PushEmpty(object, object)
0xf12: Push((int) 107)
0xf13: Push((int) 2)
0xf14: Push((int) 513730)
0xf15: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf16: Pop(3)
0xf17: PushEmpty(bool, object, int)
0xf18: Stack[-2] = Stack[-4]
0xf19: Stack[-1] = (int) -1
0xf1a: Call2 0xf52

0xf1b: Pop(3)
0xf1c: Return(); Pop(2)

0xf1d: Stack[-1] = 0
0xf1e: PushEmpty(object, object)
0xf1f: Push((int) 109)
0xf20: Push((int) 2)
0xf21: Push((int) 513732)
0xf22: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf23: Pop(3)
0xf24: PushEmpty(bool, object, int)
0xf25: Stack[-2] = Stack[-4]
0xf26: Stack[-1] = (int) 107
0xf27: Call2 0xf52

0xf28: Pop(3)
0xf29: Return(); Pop(2)

0xf2a: Stack[-1] = 0
0xf2b: PushEmpty(object, object)
0xf2c: Push((int) 110)
0xf2d: Push((int) 2)
0xf2e: Push((int) 513733)
0xf2f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf30: Pop(3)
0xf31: PushEmpty(bool, object, int)
0xf32: Stack[-2] = Stack[-4]
0xf33: Stack[-1] = (int) 107
0xf34: Call2 0xf52

0xf35: Pop(3)
0xf36: Return(); Pop(2)

0xf37: Stack[-1] = 0
0xf38: PushEmpty(object, object)
0xf39: Push((int) 158)
0xf3a: Push((int) 2)
0xf3b: Push((int) 515376)
0xf3c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf3d: Pop(3)
0xf3e: PushEmpty(bool, object, int)
0xf3f: Stack[-2] = Stack[-4]
0xf40: Stack[-1] = (int) 107
0xf41: Call2 0xf52

0xf42: Pop(3)
0xf43: Return(); Pop(2)

0xf44: Stack[-1] = 0
0xf45: PushEmpty(object, object)
0xf46: @ GetDiaryRoot(Stack[-1])
0xf47: Pop(0)
0xf48: Pop(0); Push((bool) Stack[-1] == 0)
0xf49: IF (Stack[-1] == 0) GOTO 0xf4f; Pop(1)

0xf4a: Push("Can't retrieve diary root")
0xf4b: @ Trace(Stack[-1])
0xf4c: Pop(1)
0xf4d: Stack[-3] = (bool) 0
0xf4e: Return(); Pop(2)

0xf4f: Stack[-3] = Stack[-1]
0xf50: Return(); Pop(2)

0xf51: Stack[-1] = 0
0xf52: PushEmpty(object, object, int, object, object, int)
0xf53: PushEmpty(object)
0xf54: Call2 0xf45

0xf55: Stack[-4] = Stack[-1]
0xf56: Pop(1)
0xf57: @@ Find(Stack[-7], Stack[-2])
0xf58: Pop(0)
0xf59: Pop(0); Push((bool) Stack[-2] == 0)
0xf5a: IF (Stack[-1] == 0) GOTO 0xf61; Pop(1)

0xf5b: Push("Can't find diary parent with id: ")
0xf5c: Pop(1); Push(Stack[-1] + Stack[-8]);
0xf5d: @ Trace(Stack[-1])
0xf5e: Pop(1)
0xf5f: Stack[-9] = (bool) 0
0xf60: Return(); Pop(6)

0xf61: @@ AddChild(Stack[-8])
0xf62: Pop(0)
0xf63: Push((int) 7)
0xf64: @ SendWorldWndMessage(Stack[-1])
0xf65: Pop(1)
0xf66: @@ GetCategory(Stack[-1])
0xf67: Pop(0)
0xf68: @ SetDiarySection(Stack[-1])
0xf69: Pop(0)
0xf6a: Stack[-9] = (bool) 0
0xf6b: Return(); Pop(6)

0xf6c: Stack[-2] = 0
0xf6d: Stack[-3] = 0
0xf6e: PushEmpty(int, int)
0xf6f: Push("branch")
0xf70: @ GetVariable(Stack[-1], Stack[-2])
0xf71: Pop(1)
0xf72: Push((int) 0)
0xf73: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf74: IF (Stack[-1] == 0) GOTO 0xf78; Pop(1)

0xf75: Stack[-3] = (int) 1
0xf76: Return(); Pop(2)

0xf77: GOTO 0xf7d

0xf78: Push((int) 1)
0xf79: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf7a: IF (Stack[-1] == 0) GOTO 0xf7d; Pop(1)

0xf7b: Stack[-3] = (int) 2
0xf7c: Return(); Pop(2)

0xf7d: Stack[-3] = (int) 3
0xf7e: Return(); Pop(2)

0xf7f: PushEmpty(int, int)
0xf80: Push("mt_spi4ka")
0xf81: @ GetVariable(Stack[-1], Stack[-2])
0xf82: Pop(1)
0xf83: Pop(0); Push((bool) Stack[-1] == 0)
0xf84: IF (Stack[-1] == 0) GOTO 0xf8f; Pop(1)

0xf85: PushEmpty(int, object)
0xf86: Stack[-1] = Stack[-5]
0xf87: Push(-2, 1); TaskCall(2)
0xf88: Call2 0x103

0xf89: Pop(-2, 1); TaskReturn
0xf8a: Pop(2)
0xf8b: Push("mt_spi4ka")
0xf8c: Push((int) 1)
0xf8d: @ SetVariable(Stack[-2], Stack[-1])
0xf8e: Pop(2)
0xf8f: PushEmpty(bool, int)
0xf90: Stack[-1] = (int) 2
0xf91: Call2 0xd78

0xf92: Pop(1)
0xf93: IF (Stack[-1] == 0) GOTO 0xf9b; Pop(1)

0xf94: PushEmpty(int, object)
0xf95: Stack[-1] = Stack[-5]
0xf96: Push(-2, 1); TaskCall(4)
0xf97: Call2 0x227

0xf98: Pop(-2, 1); TaskReturn
0xf99: Pop(2)
0xf9a: Return(); Pop(2)

0xf9b: PushEmpty(bool, int)
0xf9c: Stack[-1] = (int) 4
0xf9d: Call2 0xd78

0xf9e: Pop(1)
0xf9f: IF (Stack[-1] == 0) GOTO 0xfa7; Pop(1)

0xfa0: PushEmpty(int, object)
0xfa1: Stack[-1] = Stack[-5]
0xfa2: Push(-2, 1); TaskCall(6)
0xfa3: Call2 0x4e4

0xfa4: Pop(-2, 1); TaskReturn
0xfa5: Pop(2)
0xfa6: Return(); Pop(2)

0xfa7: PushEmpty(bool, int)
0xfa8: Stack[-1] = (int) 6
0xfa9: Call2 0xd78

0xfaa: Pop(1)
0xfab: IF (Stack[-1] == 0) GOTO 0xfb3; Pop(1)

0xfac: PushEmpty(int, object)
0xfad: Stack[-1] = Stack[-5]
0xfae: Push(-2, 1); TaskCall(8)
0xfaf: Call2 0x6f5

0xfb0: Pop(-2, 1); TaskReturn
0xfb1: Pop(2)
0xfb2: Return(); Pop(2)

0xfb3: PushEmpty(bool, int)
0xfb4: Stack[-1] = (int) 12
0xfb5: Call2 0xd78

0xfb6: Pop(1)
0xfb7: IF (Stack[-1] == 0) GOTO 0xfbf; Pop(1)

0xfb8: PushEmpty(int, object)
0xfb9: Stack[-1] = Stack[-5]
0xfba: Push(-2, 1); TaskCall(0)
0xfbb: Call2 0x0

0xfbc: Pop(-2, 1); TaskReturn
0xfbd: Pop(2)
0xfbe: Return(); Pop(2)

0xfbf: PushEmpty(int, object)
0xfc0: Stack[-1] = Stack[-5]
0xfc1: Push(-2, 1); TaskCall(10)
0xfc2: Call2 0xa00

0xfc3: Pop(-2, 1); TaskReturn
0xfc4: Pop(2)
0xfc5: Return(); Pop(2)

