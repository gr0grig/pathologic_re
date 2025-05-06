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
	Doubt
	Untrust
	Agression
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
	ui/NPC_Block.png
	ui/NPC_Block_b.png
	playsound
	giveitem
	ood9Block3
	d9q02
	quest_d9_02
	init_soldiers
	d9LaraIsSaved
	quest_d10_03
	place_sanitars
	completed
	ood12Block1
	d11RotaTalk
	d9TalkToPolkovodec
	ood9Block1
	Rifle is given
	Rifle
	durability
	SetProperty
	ood11Block1
	ood11Block2
	ood11Block3
	rifle ammo10 is given
	rifle_ammo
	ood9Block2
	d8q01
	d10q03
	d9q01
	d11q02
	d11q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0xb16
RunTask = 10

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x270 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x44d Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x81f Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xaec Vars = (int, int)
	GTASK_10 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xb5f Vars = (int)
		EVENT_6 Op = 0xb85 Vars = ()
		EVENT_5 Op = 0xb94 Vars = ()
		EVENT_45 Op = 0xba1 Vars = (bool)
		EVENT_0 Op = 0xbad Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xc36

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xdc8

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xdc6

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xdca

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xdcc

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xf4f

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
0x31: Call2 0xd4a

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xc8b

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
0x48: Call2 0xc7a

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
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x95

0x5a: Pop(1)
0x5b: Push((int) 534152)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0xe7d

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 534153)
0x66: Push((int) 38340)
0x67: Push((int) 35740)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 534154)
0x6b: Push((int) -1)
0x6c: Push((int) 35741)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 536532)
0x70: Push((int) -1)
0x71: Push((int) 38339)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x77

0x75: Return(); Pop(0)

0x76: GOTO 0x55

0x77: PushEmpty(bool)
0x78: Call2 0xdce

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @ lshWaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: PushEmpty(string)
0x81: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x82: Call2 0xd15

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
0x97: Call2 0xdce

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
0xa7: Call2 0xd25

0xa8: Pop(2)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0xae: PushEmpty()
0xaf: Call2 0xd43

0xb0: Pop(0)
0xb1: Push((int) 35743)
0xb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0xdf0

0xb8: Pop(2)
0xb9: Push((int) 38363)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0xdf0

0xc0: Pop(2)
0xc1: Push((int) 35739)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xc4: PushEmpty(string)
0xc5: Stack[-1] = "Neutral"
0xc6: Call2 0x95

0xc7: Pop(1)
0xc8: Push((int) 534152)
0xc9: @@ SetMessage(Stack[-1])
0xca: Pop(1)
0xcb: @@ ClearReplies()
0xcc: Pop(0)
0xcd: PushEmpty(bool, object)
0xce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Call2 0xe7d

0xd0: Pop(1)
0xd1: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd2: Push((int) 534153)
0xd3: Push((int) 38340)
0xd4: Push((int) 35740)
0xd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6: Pop(3)
0xd7: Push((int) 534154)
0xd8: Push((int) -1)
0xd9: Push((int) 35741)
0xda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb: Pop(3)
0xdc: Push((int) 536532)
0xdd: Push((int) -1)
0xde: Push((int) 38339)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Push((int) 38340)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Neutral"
0xe7: Call2 0x95

0xe8: Pop(1)
0xe9: Push((int) 536533)
0xea: @@ SetMessage(Stack[-1])
0xeb: Pop(1)
0xec: @@ ClearReplies()
0xed: Pop(0)
0xee: Push((int) 536534)
0xef: Push((int) 38342)
0xf0: Push((int) 38341)
0xf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2: Pop(3)
0xf3: Push((int) 536539)
0xf4: Push((int) 38347)
0xf5: Push((int) 38346)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: Push((int) 38347)
0xfa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0xfc: PushEmpty(string)
0xfd: Stack[-1] = "Doubt"
0xfe: Call2 0x95

0xff: Pop(1)
0x100: Push((int) 536540)
0x101: @@ SetMessage(Stack[-1])
0x102: Pop(1)
0x103: @@ ClearReplies()
0x104: Pop(0)
0x105: Push((int) 536541)
0x106: Push((int) 38351)
0x107: Push((int) 38348)
0x108: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109: Pop(3)
0x10a: Push((int) 536542)
0x10b: Push((int) -1)
0x10c: Push((int) 38349)
0x10d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e: Pop(3)
0x10f: Return(); Pop(0)

0x110: Push((int) 38342)
0x111: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x113: PushEmpty(string)
0x114: Stack[-1] = "Neutral"
0x115: Call2 0x95

0x116: Pop(1)
0x117: Push((int) 536535)
0x118: @@ SetMessage(Stack[-1])
0x119: Pop(1)
0x11a: @@ ClearReplies()
0x11b: Pop(0)
0x11c: Push((int) 536536)
0x11d: Push((int) 38344)
0x11e: Push((int) 38343)
0x11f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x120: Pop(3)
0x121: Push((int) 536543)
0x122: Push((int) 38351)
0x123: Push((int) 38350)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: Return(); Pop(0)

0x127: Push((int) 38344)
0x128: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x12a: PushEmpty(string)
0x12b: Stack[-1] = "Neutral"
0x12c: Call2 0x95

0x12d: Pop(1)
0x12e: Push((int) 536537)
0x12f: @@ SetMessage(Stack[-1])
0x130: Pop(1)
0x131: @@ ClearReplies()
0x132: Pop(0)
0x133: Push((int) 536538)
0x134: Push((int) 38351)
0x135: Push((int) 38345)
0x136: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x137: Pop(3)
0x138: Return(); Pop(0)

0x139: Push((int) 38351)
0x13a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x13c: PushEmpty(string)
0x13d: Stack[-1] = "Neutral"
0x13e: Call2 0x95

0x13f: Pop(1)
0x140: Push((int) 536544)
0x141: @@ SetMessage(Stack[-1])
0x142: Pop(1)
0x143: @@ ClearReplies()
0x144: Pop(0)
0x145: Push((int) 536545)
0x146: Push((int) 38359)
0x147: Push((int) 38352)
0x148: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x149: Pop(3)
0x14a: Push((int) 536546)
0x14b: Push((int) 38358)
0x14c: Push((int) 38355)
0x14d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e: Pop(3)
0x14f: Return(); Pop(0)

0x150: Push((int) 38358)
0x151: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x153: PushEmpty(string)
0x154: Stack[-1] = "Neutral"
0x155: Call2 0x95

0x156: Pop(1)
0x157: Push((int) 536548)
0x158: @@ SetMessage(Stack[-1])
0x159: Pop(1)
0x15a: @@ ClearReplies()
0x15b: Pop(0)
0x15c: Push((int) 536550)
0x15d: Push((int) 35742)
0x15e: Push((int) 38360)
0x15f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x160: Pop(3)
0x161: Return(); Pop(0)

0x162: Push((int) 38359)
0x163: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x165: PushEmpty(string)
0x166: Stack[-1] = "Neutral"
0x167: Call2 0x95

0x168: Pop(1)
0x169: Push((int) 536549)
0x16a: @@ SetMessage(Stack[-1])
0x16b: Pop(1)
0x16c: @@ ClearReplies()
0x16d: Pop(0)
0x16e: Push((int) 536551)
0x16f: Push((int) 35742)
0x170: Push((int) 38361)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: Return(); Pop(0)

0x174: Push((int) 35742)
0x175: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x177: PushEmpty(string)
0x178: Stack[-1] = "Doubt"
0x179: Call2 0x95

0x17a: Pop(1)
0x17b: Push((int) 534155)
0x17c: @@ SetMessage(Stack[-1])
0x17d: Pop(1)
0x17e: @@ ClearReplies()
0x17f: Pop(0)
0x180: Push((int) 534156)
0x181: Push((int) -1)
0x182: Push((int) 35743)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Push((int) 536552)
0x186: Push((int) -1)
0x187: Push((int) 38363)
0x188: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x189: Pop(3)
0x18a: Return(); Pop(0)

0x18b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x18c: PushEmpty(bool)
0x18d: Call2 0xdce

0x18e: Pop(0)
0x18f: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x190: @ lshStopAnimation()
0x191: Pop(0)
0x192: GOTO 0x195

0x193: @ StopAnimation()
0x194: Pop(0)
0x195: Return(); Pop(0)

0x196: GOTO 0xac

0x197: Return(); Pop(0)

0x198: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x199: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x19a: PushEmpty(bool, object, float)
0x19b: Stack[-2] = Stack[-12]
0x19c: Stack[-1] = (float) 70.0
0x19d: Call2 0xc36

0x19e: Pop(2)
0x19f: Pop(1); Push((bool) Stack[-1] == 0)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a1: Stack[-10] = (int) -2
0x1a2: Return(); Pop(8)

0x1a3: @ CreateDialog(Stack[-4])
0x1a4: Pop(0)
0x1a5: PushEmpty(int)
0x1a6: Call2 0xdc8

0x1a7: Pop(0)
0x1a8: @@ SetNPCName(Stack[-1])
0x1a9: Pop(1)
0x1aa: PushEmpty(int)
0x1ab: Call2 0xdc6

0x1ac: Pop(0)
0x1ad: @@ SetNPCDescription(Stack[-1])
0x1ae: Pop(1)
0x1af: PushEmpty(string)
0x1b0: Call2 0xdca

0x1b1: Pop(0)
0x1b2: @@ SetPhoto(Stack[-1])
0x1b3: Pop(1)
0x1b4: PushEmpty(string)
0x1b5: Call2 0xdcc

0x1b6: Pop(0)
0x1b7: @@ SetPhoto2(Stack[-1])
0x1b8: Pop(1)
0x1b9: PushEmpty(int)
0x1ba: Call2 0xf4f

0x1bb: Pop(0)
0x1bc: @@ SetPlayerName(Stack[-1])
0x1bd: Pop(1)
0x1be: Stack[-2] = (int) -1
0x1bf: @ IsOverrideActive(Stack[-3])
0x1c0: Pop(0)
0x1c1: Push(Stack[-3])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c3: Stack[-10] = (int) -2
0x1c4: Return(); Pop(8)

0x1c5: @ DoDialog(Stack[-4])
0x1c6: Pop(0)
0x1c7: PushEmpty(bool, object)
0x1c8: PushEmpty(object)
0x1c9: Call2 0xd4a

0x1ca: Stack[-2] = Stack[-1]
0x1cb: Pop(1)
0x1cc: Call2 0xc8b

0x1cd: Pop(2)
0x1ce: PushEmpty(object, object)
0x1cf: Stack[-2] = Stack[-11]
0x1d0: Stack[-1] = Stack[-6]
0x1d1: Push(-2, 4); TaskCall(3)
0x1d2: Call2 0x1e9

0x1d3: Pop(-2, 4); TaskReturn
0x1d4: Pop(2)
0x1d5: @@ IsDialogEnd(Stack[-1])
0x1d6: Pop(0)
0x1d7: Pop(0); Push((bool) Stack[-1] == 0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1d9: @ sync()
0x1da: Pop(0)
0x1db: @@ IsDialogEnd(Stack[-1])
0x1dc: Pop(0)
0x1dd: GOTO 0x1d7

0x1de: PushEmpty(object)
0x1df: Stack[-1] = Stack[-10]
0x1e0: Call2 0xc7a

0x1e1: Pop(1)
0x1e2: @ StopDialog(Stack[-4])
0x1e3: Pop(0)
0x1e4: @@ GetReturnValue(Stack[-2])
0x1e5: Pop(0)
0x1e6: Stack[-10] = Stack[-2]
0x1e7: Return(); Pop(8)

0x1e8: Stack[-4] = 0
0x1e9: PushEmpty()
0x1ea: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1eb: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1ec: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1ed: Push((int) 1)
0x1ee: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x1ef: PushEmpty(bool)
0x1f0: Stack[-1] = (bool) 0
0x1f1: PushEmpty(bool, object)
0x1f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f3: Call2 0xe89

0x1f4: Pop(1)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f6: PushEmpty(bool, object)
0x1f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f8: Call2 0xe4f

0x1f9: Pop(1)
0x1fa: Pop(1); Push((bool) Stack[-1] == 0)
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fc: Stack[-1] = (bool) 1
0x1fd: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x1fe: PushEmpty(object, object)
0x1ff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x200: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x201: Call2 0xdff

0x202: Pop(2)
0x203: PushEmpty(string)
0x204: Stack[-1] = "Neutral"
0x205: Call2 0x25a

0x206: Pop(1)
0x207: Push((int) 535510)
0x208: @@ SetMessage(Stack[-1])
0x209: Pop(1)
0x20a: @@ ClearReplies()
0x20b: Pop(0)
0x20c: Push((int) 535511)
0x20d: Push((int) 37194)
0x20e: Push((int) 37193)
0x20f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x210: Pop(3)
0x211: GOTO 0x23c

0x212: PushEmpty(bool, object)
0x213: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x214: Call2 0xe4f

0x215: Pop(1)
0x216: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x217: PushEmpty(string)
0x218: Stack[-1] = "Neutral"
0x219: Call2 0x25a

0x21a: Pop(1)
0x21b: Push((int) 535528)
0x21c: @@ SetMessage(Stack[-1])
0x21d: Pop(1)
0x21e: @@ ClearReplies()
0x21f: Pop(0)
0x220: Push((int) 535529)
0x221: Push((int) -1)
0x222: Push((int) 37212)
0x223: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x224: Pop(3)
0x225: Push((int) 535530)
0x226: Push((int) -1)
0x227: Push((int) 37213)
0x228: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x229: Pop(3)
0x22a: GOTO 0x23c

0x22b: PushEmpty(string)
0x22c: Stack[-1] = "Neutral"
0x22d: Call2 0x25a

0x22e: Pop(1)
0x22f: Push((int) 535531)
0x230: @@ SetMessage(Stack[-1])
0x231: Pop(1)
0x232: @@ ClearReplies()
0x233: Pop(0)
0x234: Push((int) 535539)
0x235: Push((int) -1)
0x236: Push((int) 37222)
0x237: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x238: Pop(3)
0x239: GOTO 0x23c

0x23a: Return(); Pop(0)

0x23b: GOTO 0x1ed

0x23c: PushEmpty(bool)
0x23d: Call2 0xdce

0x23e: Pop(0)
0x23f: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x240: @ lshWaitForAnimEnd()
0x241: Pop(0)
0x242: Push( Stack[3 + Tasks[-1].StackPointer] )
0x243: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x244: GOTO 0x24a

0x245: PushEmpty(string)
0x246: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x247: Call2 0xd15

0x248: Pop(1)
0x249: GOTO 0x240

0x24a: GOTO 0x259

0x24b: Push("all")
0x24c: Push("idle")
0x24d: @ PlayAnimation(Stack[-2], Stack[-1])
0x24e: Pop(2)
0x24f: @ WaitForAnimEnd()
0x250: Pop(0)
0x251: Push( Stack[3 + Tasks[-1].StackPointer] )
0x252: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x253: GOTO 0x259

0x254: Push("all")
0x255: Push("idle")
0x256: @ PlayAnimation(Stack[-2], Stack[-1])
0x257: Pop(2)
0x258: GOTO 0x24f

0x259: Return(); Pop(0)

0x25a: PushEmpty()
0x25b: PushEmpty(bool)
0x25c: Call2 0xdce

0x25d: Pop(0)
0x25e: Pop(1); Push((bool) Stack[-1] == 0)
0x25f: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x260: Return(); Pop(0)

0x261: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x262: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x263: Return(); Pop(0)

0x264: PushEmpty(string, bool)
0x265: Stack[-2] = Stack[-3]
0x266: Push("")
0x267: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x268: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x269: Stack[-1] = (bool) 0
0x26a: GOTO 0x26c

0x26b: Stack[-1] = (bool) 1
0x26c: Call2 0xd25

0x26d: Pop(2)
0x26e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x26f: Return(); Pop(0)

0x270: PushEmpty()
0x271: Push((int) 1)
0x272: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x273: PushEmpty()
0x274: Call2 0xd43

0x275: Pop(0)
0x276: Push((int) 37192)
0x277: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x278: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x279: PushEmpty(bool)
0x27a: Stack[-1] = (bool) 0
0x27b: PushEmpty(bool, object)
0x27c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27d: Call2 0xe89

0x27e: Pop(1)
0x27f: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x280: PushEmpty(bool, object)
0x281: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x282: Call2 0xe4f

0x283: Pop(1)
0x284: Pop(1); Push((bool) Stack[-1] == 0)
0x285: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x286: Stack[-1] = (bool) 1
0x287: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x288: PushEmpty(object, object)
0x289: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x28a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28b: Call2 0xdff

0x28c: Pop(2)
0x28d: PushEmpty(string)
0x28e: Stack[-1] = "Neutral"
0x28f: Call2 0x25a

0x290: Pop(1)
0x291: Push((int) 535510)
0x292: @@ SetMessage(Stack[-1])
0x293: Pop(1)
0x294: @@ ClearReplies()
0x295: Pop(0)
0x296: Push((int) 535511)
0x297: Push((int) 37194)
0x298: Push((int) 37193)
0x299: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29a: Pop(3)
0x29b: Return(); Pop(0)

0x29c: PushEmpty(bool, object)
0x29d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29e: Call2 0xe4f

0x29f: Pop(1)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2a1: PushEmpty(string)
0x2a2: Stack[-1] = "Neutral"
0x2a3: Call2 0x25a

0x2a4: Pop(1)
0x2a5: Push((int) 535528)
0x2a6: @@ SetMessage(Stack[-1])
0x2a7: Pop(1)
0x2a8: @@ ClearReplies()
0x2a9: Pop(0)
0x2aa: Push((int) 535529)
0x2ab: Push((int) -1)
0x2ac: Push((int) 37212)
0x2ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ae: Pop(3)
0x2af: Push((int) 535530)
0x2b0: Push((int) -1)
0x2b1: Push((int) 37213)
0x2b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b3: Pop(3)
0x2b4: Return(); Pop(0)

0x2b5: PushEmpty(string)
0x2b6: Stack[-1] = "Neutral"
0x2b7: Call2 0x25a

0x2b8: Pop(1)
0x2b9: Push((int) 535531)
0x2ba: @@ SetMessage(Stack[-1])
0x2bb: Pop(1)
0x2bc: @@ ClearReplies()
0x2bd: Pop(0)
0x2be: Push((int) 535539)
0x2bf: Push((int) -1)
0x2c0: Push((int) 37222)
0x2c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c2: Pop(3)
0x2c3: Return(); Pop(0)

0x2c4: Push((int) 37194)
0x2c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2c7: PushEmpty(string)
0x2c8: Stack[-1] = "Neutral"
0x2c9: Call2 0x25a

0x2ca: Pop(1)
0x2cb: Push((int) 535512)
0x2cc: @@ SetMessage(Stack[-1])
0x2cd: Pop(1)
0x2ce: @@ ClearReplies()
0x2cf: Pop(0)
0x2d0: Push((int) 535513)
0x2d1: Push((int) 37196)
0x2d2: Push((int) 37195)
0x2d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d4: Pop(3)
0x2d5: Push((int) 535525)
0x2d6: Push((int) 37208)
0x2d7: Push((int) 37207)
0x2d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d9: Pop(3)
0x2da: Return(); Pop(0)

0x2db: Push((int) 37208)
0x2dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2de: PushEmpty(string)
0x2df: Stack[-1] = "Neutral"
0x2e0: Call2 0x25a

0x2e1: Pop(1)
0x2e2: Push((int) 535526)
0x2e3: @@ SetMessage(Stack[-1])
0x2e4: Pop(1)
0x2e5: @@ ClearReplies()
0x2e6: Pop(0)
0x2e7: Push((int) 535527)
0x2e8: Push((int) 37196)
0x2e9: Push((int) 37209)
0x2ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2eb: Pop(3)
0x2ec: Push((int) 539998)
0x2ed: Push((int) 41968)
0x2ee: Push((int) 41967)
0x2ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f0: Pop(3)
0x2f1: Return(); Pop(0)

0x2f2: Push((int) 41968)
0x2f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f4: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x2f5: PushEmpty(string)
0x2f6: Stack[-1] = "Doubt"
0x2f7: Call2 0x25a

0x2f8: Pop(1)
0x2f9: Push((int) 539999)
0x2fa: @@ SetMessage(Stack[-1])
0x2fb: Pop(1)
0x2fc: @@ ClearReplies()
0x2fd: Pop(0)
0x2fe: Push((int) 540000)
0x2ff: Push((int) 37196)
0x300: Push((int) 41969)
0x301: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x302: Pop(3)
0x303: Push((int) 540001)
0x304: Push((int) 37196)
0x305: Push((int) 41970)
0x306: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x307: Pop(3)
0x308: Return(); Pop(0)

0x309: Push((int) 37196)
0x30a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30b: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x30c: PushEmpty(string)
0x30d: Stack[-1] = "Neutral"
0x30e: Call2 0x25a

0x30f: Pop(1)
0x310: Push((int) 535514)
0x311: @@ SetMessage(Stack[-1])
0x312: Pop(1)
0x313: @@ ClearReplies()
0x314: Pop(0)
0x315: Push((int) 535515)
0x316: Push((int) 37198)
0x317: Push((int) 37197)
0x318: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x319: Pop(3)
0x31a: Push((int) 535524)
0x31b: Push((int) -1)
0x31c: Push((int) 37206)
0x31d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31e: Pop(3)
0x31f: Return(); Pop(0)

0x320: Push((int) 37198)
0x321: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x323: PushEmpty(string)
0x324: Stack[-1] = "Neutral"
0x325: Call2 0x25a

0x326: Pop(1)
0x327: Push((int) 535516)
0x328: @@ SetMessage(Stack[-1])
0x329: Pop(1)
0x32a: @@ ClearReplies()
0x32b: Pop(0)
0x32c: Push((int) 535517)
0x32d: Push((int) 37200)
0x32e: Push((int) 37199)
0x32f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x330: Pop(3)
0x331: Push((int) 535523)
0x332: Push((int) -1)
0x333: Push((int) 37205)
0x334: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x335: Pop(3)
0x336: Return(); Pop(0)

0x337: Push((int) 37200)
0x338: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x33a: PushEmpty(string)
0x33b: Stack[-1] = "Neutral"
0x33c: Call2 0x25a

0x33d: Pop(1)
0x33e: Push((int) 535518)
0x33f: @@ SetMessage(Stack[-1])
0x340: Pop(1)
0x341: @@ ClearReplies()
0x342: Pop(0)
0x343: Push((int) 535519)
0x344: Push((int) 37202)
0x345: Push((int) 37201)
0x346: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x347: Pop(3)
0x348: Push((int) 542998)
0x349: Push((int) -1)
0x34a: Push((int) 45446)
0x34b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34c: Pop(3)
0x34d: Return(); Pop(0)

0x34e: Push((int) 37202)
0x34f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x350: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x351: PushEmpty(string)
0x352: Stack[-1] = "Neutral"
0x353: Call2 0x25a

0x354: Pop(1)
0x355: Push((int) 535520)
0x356: @@ SetMessage(Stack[-1])
0x357: Pop(1)
0x358: @@ ClearReplies()
0x359: Pop(0)
0x35a: Push((int) 535521)
0x35b: Push((int) -1)
0x35c: Push((int) 37203)
0x35d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35e: Pop(3)
0x35f: Push((int) 535522)
0x360: Push((int) -1)
0x361: Push((int) 37204)
0x362: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x363: Pop(3)
0x364: Return(); Pop(0)

0x365: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x366: PushEmpty(bool)
0x367: Call2 0xdce

0x368: Pop(0)
0x369: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36a: @ lshStopAnimation()
0x36b: Pop(0)
0x36c: GOTO 0x36f

0x36d: @ StopAnimation()
0x36e: Pop(0)
0x36f: Return(); Pop(0)

0x370: GOTO 0x271

0x371: Return(); Pop(0)

0x372: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x373: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x374: PushEmpty(bool, object, float)
0x375: Stack[-2] = Stack[-12]
0x376: Stack[-1] = (float) 70.0
0x377: Call2 0xc36

0x378: Pop(2)
0x379: Pop(1); Push((bool) Stack[-1] == 0)
0x37a: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x37b: Stack[-10] = (int) -2
0x37c: Return(); Pop(8)

0x37d: @ CreateDialog(Stack[-4])
0x37e: Pop(0)
0x37f: PushEmpty(int)
0x380: Call2 0xdc8

0x381: Pop(0)
0x382: @@ SetNPCName(Stack[-1])
0x383: Pop(1)
0x384: PushEmpty(int)
0x385: Call2 0xdc6

0x386: Pop(0)
0x387: @@ SetNPCDescription(Stack[-1])
0x388: Pop(1)
0x389: PushEmpty(string)
0x38a: Call2 0xdca

0x38b: Pop(0)
0x38c: @@ SetPhoto(Stack[-1])
0x38d: Pop(1)
0x38e: PushEmpty(string)
0x38f: Call2 0xdcc

0x390: Pop(0)
0x391: @@ SetPhoto2(Stack[-1])
0x392: Pop(1)
0x393: PushEmpty(int)
0x394: Call2 0xf4f

0x395: Pop(0)
0x396: @@ SetPlayerName(Stack[-1])
0x397: Pop(1)
0x398: Stack[-2] = (int) -1
0x399: @ IsOverrideActive(Stack[-3])
0x39a: Pop(0)
0x39b: Push(Stack[-3])
0x39c: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39d: Stack[-10] = (int) -2
0x39e: Return(); Pop(8)

0x39f: @ DoDialog(Stack[-4])
0x3a0: Pop(0)
0x3a1: PushEmpty(bool, object)
0x3a2: PushEmpty(object)
0x3a3: Call2 0xd4a

0x3a4: Stack[-2] = Stack[-1]
0x3a5: Pop(1)
0x3a6: Call2 0xc8b

0x3a7: Pop(2)
0x3a8: PushEmpty(object, object)
0x3a9: Stack[-2] = Stack[-11]
0x3aa: Stack[-1] = Stack[-6]
0x3ab: Push(-2, 4); TaskCall(5)
0x3ac: Call2 0x3c3

0x3ad: Pop(-2, 4); TaskReturn
0x3ae: Pop(2)
0x3af: @@ IsDialogEnd(Stack[-1])
0x3b0: Pop(0)
0x3b1: Pop(0); Push((bool) Stack[-1] == 0)
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b3: @ sync()
0x3b4: Pop(0)
0x3b5: @@ IsDialogEnd(Stack[-1])
0x3b6: Pop(0)
0x3b7: GOTO 0x3b1

0x3b8: PushEmpty(object)
0x3b9: Stack[-1] = Stack[-10]
0x3ba: Call2 0xc7a

0x3bb: Pop(1)
0x3bc: @ StopDialog(Stack[-4])
0x3bd: Pop(0)
0x3be: @@ GetReturnValue(Stack[-2])
0x3bf: Pop(0)
0x3c0: Stack[-10] = Stack[-2]
0x3c1: Return(); Pop(8)

0x3c2: Stack[-4] = 0
0x3c3: PushEmpty()
0x3c4: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3c5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3c6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3c7: Push((int) 1)
0x3c8: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x3c9: PushEmpty(object, object)
0x3ca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3cb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3cc: Call2 0xe0b

0x3cd: Pop(2)
0x3ce: PushEmpty(string)
0x3cf: Stack[-1] = "Neutral"
0x3d0: Call2 0x437

0x3d1: Pop(1)
0x3d2: Push((int) 513882)
0x3d3: @@ SetMessage(Stack[-1])
0x3d4: Pop(1)
0x3d5: @@ ClearReplies()
0x3d6: Pop(0)
0x3d7: PushEmpty(bool)
0x3d8: Stack[-1] = (bool) 0
0x3d9: PushEmpty(bool, object)
0x3da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3db: Call2 0xe59

0x3dc: Pop(1)
0x3dd: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3de: PushEmpty(bool, object)
0x3df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e0: Call2 0xe65

0x3e1: Pop(1)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e3: Stack[-1] = (bool) 1
0x3e4: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e5: Push((int) 513883)
0x3e6: Push((int) 15111)
0x3e7: Push((int) 15110)
0x3e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e9: Pop(3)
0x3ea: PushEmpty(bool)
0x3eb: Stack[-1] = (bool) 0
0x3ec: PushEmpty(bool, object)
0x3ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ee: Call2 0xe95

0x3ef: Pop(1)
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f1: PushEmpty(bool, object)
0x3f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f3: Call2 0xea1

0x3f4: Pop(1)
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f6: Stack[-1] = (bool) 1
0x3f7: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3f8: Push((int) 513906)
0x3f9: Push((int) 15138)
0x3fa: Push((int) 15137)
0x3fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fc: Pop(3)
0x3fd: PushEmpty(bool, object)
0x3fe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ff: Call2 0xef5

0x400: Pop(1)
0x401: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x402: Push((int) 513924)
0x403: Push((int) 15156)
0x404: Push((int) 15155)
0x405: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x406: Pop(3)
0x407: PushEmpty(bool, object)
0x408: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x409: Call2 0xe71

0x40a: Pop(1)
0x40b: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40c: Push((int) 533537)
0x40d: Push((int) 35070)
0x40e: Push((int) 35069)
0x40f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x410: Pop(3)
0x411: Push((int) 513947)
0x412: Push((int) -1)
0x413: Push((int) 15182)
0x414: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x415: Pop(3)
0x416: GOTO 0x419

0x417: Return(); Pop(0)

0x418: GOTO 0x3c7

0x419: PushEmpty(bool)
0x41a: Call2 0xdce

0x41b: Pop(0)
0x41c: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x41d: @ lshWaitForAnimEnd()
0x41e: Pop(0)
0x41f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x420: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x421: GOTO 0x427

0x422: PushEmpty(string)
0x423: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x424: Call2 0xd15

0x425: Pop(1)
0x426: GOTO 0x41d

0x427: GOTO 0x436

0x428: Push("all")
0x429: Push("idle")
0x42a: @ PlayAnimation(Stack[-2], Stack[-1])
0x42b: Pop(2)
0x42c: @ WaitForAnimEnd()
0x42d: Pop(0)
0x42e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x42f: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x430: GOTO 0x436

0x431: Push("all")
0x432: Push("idle")
0x433: @ PlayAnimation(Stack[-2], Stack[-1])
0x434: Pop(2)
0x435: GOTO 0x42c

0x436: Return(); Pop(0)

0x437: PushEmpty()
0x438: PushEmpty(bool)
0x439: Call2 0xdce

0x43a: Pop(0)
0x43b: Pop(1); Push((bool) Stack[-1] == 0)
0x43c: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43d: Return(); Pop(0)

0x43e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x43f: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x440: Return(); Pop(0)

0x441: PushEmpty(string, bool)
0x442: Stack[-2] = Stack[-3]
0x443: Push("")
0x444: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x445: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x446: Stack[-1] = (bool) 0
0x447: GOTO 0x449

0x448: Stack[-1] = (bool) 1
0x449: Call2 0xd25

0x44a: Pop(2)
0x44b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x44c: Return(); Pop(0)

0x44d: PushEmpty()
0x44e: Push((int) 1)
0x44f: IF (Stack[-1] == 0) GOTO 0x749; Pop(1)

0x450: PushEmpty()
0x451: Call2 0xd43

0x452: Pop(0)
0x453: Push((int) 15110)
0x454: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x455: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x456: PushEmpty(object, object)
0x457: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x458: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x459: Call2 0xdd6

0x45a: Pop(2)
0x45b: Push((int) 15137)
0x45c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x45d: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x45e: PushEmpty(object, object)
0x45f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x460: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x461: Call2 0xe11

0x462: Pop(2)
0x463: Push((int) 15149)
0x464: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x466: PushEmpty(object, object)
0x467: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x468: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x469: Call2 0xe17

0x46a: Pop(2)
0x46b: PushEmpty(object, object)
0x46c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x46d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x46e: Call2 0xdd0

0x46f: Pop(2)
0x470: PushEmpty(object, object)
0x471: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x472: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x473: Call2 0xe3e

0x474: Pop(2)
0x475: Push((int) 15150)
0x476: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x477: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x478: PushEmpty(object, object)
0x479: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x47a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x47b: Call2 0xe17

0x47c: Pop(2)
0x47d: PushEmpty(object, object)
0x47e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x47f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x480: Call2 0xdd0

0x481: Pop(2)
0x482: PushEmpty(object, object)
0x483: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x484: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x485: Call2 0xe3e

0x486: Pop(2)
0x487: Push((int) 15155)
0x488: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x489: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48a: PushEmpty(object, object)
0x48b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x48c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x48d: Call2 0xe49

0x48e: Pop(2)
0x48f: Push((int) 35071)
0x490: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x491: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x492: PushEmpty(object, object)
0x493: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x494: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x495: Call2 0xddc

0x496: Pop(2)
0x497: PushEmpty(object, object)
0x498: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x499: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x49a: Call2 0xdea

0x49b: Pop(2)
0x49c: Push((int) 15109)
0x49d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49e: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x49f: PushEmpty(object, object)
0x4a0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a2: Call2 0xe0b

0x4a3: Pop(2)
0x4a4: PushEmpty(string)
0x4a5: Stack[-1] = "Neutral"
0x4a6: Call2 0x437

0x4a7: Pop(1)
0x4a8: Push((int) 513882)
0x4a9: @@ SetMessage(Stack[-1])
0x4aa: Pop(1)
0x4ab: @@ ClearReplies()
0x4ac: Pop(0)
0x4ad: PushEmpty(bool)
0x4ae: Stack[-1] = (bool) 0
0x4af: PushEmpty(bool, object)
0x4b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b1: Call2 0xe59

0x4b2: Pop(1)
0x4b3: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b4: PushEmpty(bool, object)
0x4b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b6: Call2 0xe65

0x4b7: Pop(1)
0x4b8: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b9: Stack[-1] = (bool) 1
0x4ba: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4bb: Push((int) 513883)
0x4bc: Push((int) 15111)
0x4bd: Push((int) 15110)
0x4be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bf: Pop(3)
0x4c0: PushEmpty(bool)
0x4c1: Stack[-1] = (bool) 0
0x4c2: PushEmpty(bool, object)
0x4c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c4: Call2 0xe95

0x4c5: Pop(1)
0x4c6: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4c7: PushEmpty(bool, object)
0x4c8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c9: Call2 0xea1

0x4ca: Pop(1)
0x4cb: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4cc: Stack[-1] = (bool) 1
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4ce: Push((int) 513906)
0x4cf: Push((int) 15138)
0x4d0: Push((int) 15137)
0x4d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d2: Pop(3)
0x4d3: PushEmpty(bool, object)
0x4d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d5: Call2 0xef5

0x4d6: Pop(1)
0x4d7: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4d8: Push((int) 513924)
0x4d9: Push((int) 15156)
0x4da: Push((int) 15155)
0x4db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4dc: Pop(3)
0x4dd: PushEmpty(bool, object)
0x4de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4df: Call2 0xe71

0x4e0: Pop(1)
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e2: Push((int) 533537)
0x4e3: Push((int) 35070)
0x4e4: Push((int) 35069)
0x4e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e6: Pop(3)
0x4e7: Push((int) 513947)
0x4e8: Push((int) -1)
0x4e9: Push((int) 15182)
0x4ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4eb: Pop(3)
0x4ec: Return(); Pop(0)

0x4ed: Push((int) 35070)
0x4ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ef: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x4f0: PushEmpty(string)
0x4f1: Stack[-1] = "Neutral"
0x4f2: Call2 0x437

0x4f3: Pop(1)
0x4f4: Push((int) 533538)
0x4f5: @@ SetMessage(Stack[-1])
0x4f6: Pop(1)
0x4f7: @@ ClearReplies()
0x4f8: Pop(0)
0x4f9: Push((int) 536553)
0x4fa: Push((int) 38366)
0x4fb: Push((int) 38365)
0x4fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fd: Pop(3)
0x4fe: Push((int) 536557)
0x4ff: Push((int) -1)
0x500: Push((int) 38369)
0x501: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x502: Pop(3)
0x503: Return(); Pop(0)

0x504: Push((int) 38366)
0x505: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x506: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x507: PushEmpty(string)
0x508: Stack[-1] = "Neutral"
0x509: Call2 0x437

0x50a: Pop(1)
0x50b: Push((int) 536554)
0x50c: @@ SetMessage(Stack[-1])
0x50d: Pop(1)
0x50e: @@ ClearReplies()
0x50f: Pop(0)
0x510: Push((int) 536555)
0x511: Push((int) 38368)
0x512: Push((int) 38367)
0x513: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x514: Pop(3)
0x515: Push((int) 536558)
0x516: Push((int) 38368)
0x517: Push((int) 38370)
0x518: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x519: Pop(3)
0x51a: Return(); Pop(0)

0x51b: Push((int) 38368)
0x51c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51d: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x51e: PushEmpty(string)
0x51f: Stack[-1] = "Neutral"
0x520: Call2 0x437

0x521: Pop(1)
0x522: Push((int) 536556)
0x523: @@ SetMessage(Stack[-1])
0x524: Pop(1)
0x525: @@ ClearReplies()
0x526: Pop(0)
0x527: Push((int) 536559)
0x528: Push((int) 38372)
0x529: Push((int) 38371)
0x52a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52b: Pop(3)
0x52c: Return(); Pop(0)

0x52d: Push((int) 38372)
0x52e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52f: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x530: PushEmpty(string)
0x531: Stack[-1] = "Neutral"
0x532: Call2 0x437

0x533: Pop(1)
0x534: Push((int) 536560)
0x535: @@ SetMessage(Stack[-1])
0x536: Pop(1)
0x537: @@ ClearReplies()
0x538: Pop(0)
0x539: Push((int) 533539)
0x53a: Push((int) -1)
0x53b: Push((int) 35071)
0x53c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53d: Pop(3)
0x53e: Return(); Pop(0)

0x53f: Push((int) 15156)
0x540: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x541: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x542: PushEmpty(string)
0x543: Stack[-1] = "Neutral"
0x544: Call2 0x437

0x545: Pop(1)
0x546: Push((int) 513925)
0x547: @@ SetMessage(Stack[-1])
0x548: Pop(1)
0x549: @@ ClearReplies()
0x54a: Pop(0)
0x54b: Push((int) 513926)
0x54c: Push((int) 15158)
0x54d: Push((int) 15157)
0x54e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54f: Pop(3)
0x550: Push((int) 513946)
0x551: Push((int) 15158)
0x552: Push((int) 15180)
0x553: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x554: Pop(3)
0x555: Return(); Pop(0)

0x556: Push((int) 15158)
0x557: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x558: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x559: PushEmpty(string)
0x55a: Stack[-1] = "Untrust"
0x55b: Call2 0x437

0x55c: Pop(1)
0x55d: Push((int) 513927)
0x55e: @@ SetMessage(Stack[-1])
0x55f: Pop(1)
0x560: @@ ClearReplies()
0x561: Pop(0)
0x562: Push((int) 513928)
0x563: Push((int) 15160)
0x564: Push((int) 15159)
0x565: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x566: Pop(3)
0x567: Push((int) 513945)
0x568: Push((int) 15160)
0x569: Push((int) 15178)
0x56a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56b: Pop(3)
0x56c: Return(); Pop(0)

0x56d: Push((int) 15160)
0x56e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56f: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x570: PushEmpty(string)
0x571: Stack[-1] = "Untrust"
0x572: Call2 0x437

0x573: Pop(1)
0x574: Push((int) 513929)
0x575: @@ SetMessage(Stack[-1])
0x576: Pop(1)
0x577: @@ ClearReplies()
0x578: Pop(0)
0x579: Push((int) 513930)
0x57a: Push((int) 15162)
0x57b: Push((int) 15161)
0x57c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57d: Pop(3)
0x57e: Push((int) 513944)
0x57f: Push((int) 15162)
0x580: Push((int) 15176)
0x581: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x582: Pop(3)
0x583: Return(); Pop(0)

0x584: Push((int) 15162)
0x585: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x586: IF (Stack[-1] == 0) GOTO 0x59b; Pop(1)

0x587: PushEmpty(string)
0x588: Stack[-1] = "Neutral"
0x589: Call2 0x437

0x58a: Pop(1)
0x58b: Push((int) 513931)
0x58c: @@ SetMessage(Stack[-1])
0x58d: Pop(1)
0x58e: @@ ClearReplies()
0x58f: Pop(0)
0x590: Push((int) 513932)
0x591: Push((int) 15164)
0x592: Push((int) 15163)
0x593: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x594: Pop(3)
0x595: Push((int) 513941)
0x596: Push((int) 15173)
0x597: Push((int) 15172)
0x598: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x599: Pop(3)
0x59a: Return(); Pop(0)

0x59b: Push((int) 15173)
0x59c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59d: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x59e: PushEmpty(string)
0x59f: Stack[-1] = "Neutral"
0x5a0: Call2 0x437

0x5a1: Pop(1)
0x5a2: Push((int) 513942)
0x5a3: @@ SetMessage(Stack[-1])
0x5a4: Pop(1)
0x5a5: @@ ClearReplies()
0x5a6: Pop(0)
0x5a7: Push((int) 513943)
0x5a8: Push((int) 15166)
0x5a9: Push((int) 15174)
0x5aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ab: Pop(3)
0x5ac: Return(); Pop(0)

0x5ad: Push((int) 15164)
0x5ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5af: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5b0: PushEmpty(string)
0x5b1: Stack[-1] = "Neutral"
0x5b2: Call2 0x437

0x5b3: Pop(1)
0x5b4: Push((int) 513933)
0x5b5: @@ SetMessage(Stack[-1])
0x5b6: Pop(1)
0x5b7: @@ ClearReplies()
0x5b8: Pop(0)
0x5b9: Push((int) 513934)
0x5ba: Push((int) 15166)
0x5bb: Push((int) 15165)
0x5bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bd: Pop(3)
0x5be: Return(); Pop(0)

0x5bf: Push((int) 15166)
0x5c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c1: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x5c2: PushEmpty(string)
0x5c3: Stack[-1] = "Untrust"
0x5c4: Call2 0x437

0x5c5: Pop(1)
0x5c6: Push((int) 513935)
0x5c7: @@ SetMessage(Stack[-1])
0x5c8: Pop(1)
0x5c9: @@ ClearReplies()
0x5ca: Pop(0)
0x5cb: Push((int) 513936)
0x5cc: Push((int) 15168)
0x5cd: Push((int) 15167)
0x5ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cf: Pop(3)
0x5d0: Return(); Pop(0)

0x5d1: Push((int) 15168)
0x5d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d3: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5d4: PushEmpty(string)
0x5d5: Stack[-1] = "Neutral"
0x5d6: Call2 0x437

0x5d7: Pop(1)
0x5d8: Push((int) 513937)
0x5d9: @@ SetMessage(Stack[-1])
0x5da: Pop(1)
0x5db: @@ ClearReplies()
0x5dc: Pop(0)
0x5dd: Push((int) 513938)
0x5de: Push((int) 15170)
0x5df: Push((int) 15169)
0x5e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e1: Pop(3)
0x5e2: Return(); Pop(0)

0x5e3: Push((int) 15170)
0x5e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e5: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5e6: PushEmpty(string)
0x5e7: Stack[-1] = "Neutral"
0x5e8: Call2 0x437

0x5e9: Pop(1)
0x5ea: Push((int) 513939)
0x5eb: @@ SetMessage(Stack[-1])
0x5ec: Pop(1)
0x5ed: @@ ClearReplies()
0x5ee: Pop(0)
0x5ef: Push((int) 513940)
0x5f0: Push((int) -1)
0x5f1: Push((int) 15171)
0x5f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f3: Pop(3)
0x5f4: Return(); Pop(0)

0x5f5: Push((int) 15138)
0x5f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f7: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x5f8: PushEmpty(string)
0x5f9: Stack[-1] = "Untrust"
0x5fa: Call2 0x437

0x5fb: Pop(1)
0x5fc: Push((int) 513907)
0x5fd: @@ SetMessage(Stack[-1])
0x5fe: Pop(1)
0x5ff: @@ ClearReplies()
0x600: Pop(0)
0x601: Push((int) 513908)
0x602: Push((int) 15140)
0x603: Push((int) 15139)
0x604: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x605: Pop(3)
0x606: Return(); Pop(0)

0x607: Push((int) 15140)
0x608: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x609: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x60a: PushEmpty(string)
0x60b: Stack[-1] = "Untrust"
0x60c: Call2 0x437

0x60d: Pop(1)
0x60e: Push((int) 513909)
0x60f: @@ SetMessage(Stack[-1])
0x610: Pop(1)
0x611: @@ ClearReplies()
0x612: Pop(0)
0x613: Push((int) 513910)
0x614: Push((int) 15142)
0x615: Push((int) 15141)
0x616: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x617: Pop(3)
0x618: Return(); Pop(0)

0x619: Push((int) 15142)
0x61a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61b: IF (Stack[-1] == 0) GOTO 0x630; Pop(1)

0x61c: PushEmpty(string)
0x61d: Stack[-1] = "Neutral"
0x61e: Call2 0x437

0x61f: Pop(1)
0x620: Push((int) 513911)
0x621: @@ SetMessage(Stack[-1])
0x622: Pop(1)
0x623: @@ ClearReplies()
0x624: Pop(0)
0x625: Push((int) 513912)
0x626: Push((int) 15144)
0x627: Push((int) 15143)
0x628: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x629: Pop(3)
0x62a: Push((int) 513920)
0x62b: Push((int) 15152)
0x62c: Push((int) 15151)
0x62d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62e: Pop(3)
0x62f: Return(); Pop(0)

0x630: Push((int) 15152)
0x631: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x632: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x633: PushEmpty(string)
0x634: Stack[-1] = "Neutral"
0x635: Call2 0x437

0x636: Pop(1)
0x637: Push((int) 513921)
0x638: @@ SetMessage(Stack[-1])
0x639: Pop(1)
0x63a: @@ ClearReplies()
0x63b: Pop(0)
0x63c: Push((int) 513922)
0x63d: Push((int) 15154)
0x63e: Push((int) 15153)
0x63f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x640: Pop(3)
0x641: Return(); Pop(0)

0x642: Push((int) 15154)
0x643: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x644: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x645: PushEmpty(string)
0x646: Stack[-1] = "Neutral"
0x647: Call2 0x437

0x648: Pop(1)
0x649: Push((int) 513923)
0x64a: @@ SetMessage(Stack[-1])
0x64b: Pop(1)
0x64c: @@ ClearReplies()
0x64d: Pop(0)
0x64e: Push((int) 514067)
0x64f: Push((int) -1)
0x650: Push((int) 15304)
0x651: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x652: Pop(3)
0x653: Return(); Pop(0)

0x654: Push((int) 15144)
0x655: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x656: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x657: PushEmpty(string)
0x658: Stack[-1] = "Neutral"
0x659: Call2 0x437

0x65a: Pop(1)
0x65b: Push((int) 513913)
0x65c: @@ SetMessage(Stack[-1])
0x65d: Pop(1)
0x65e: @@ ClearReplies()
0x65f: Pop(0)
0x660: Push((int) 513914)
0x661: Push((int) 15146)
0x662: Push((int) 15145)
0x663: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x664: Pop(3)
0x665: Push((int) 513919)
0x666: Push((int) -1)
0x667: Push((int) 15150)
0x668: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x669: Pop(3)
0x66a: Return(); Pop(0)

0x66b: Push((int) 15146)
0x66c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x66d: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x66e: PushEmpty(string)
0x66f: Stack[-1] = "Neutral"
0x670: Call2 0x437

0x671: Pop(1)
0x672: Push((int) 513915)
0x673: @@ SetMessage(Stack[-1])
0x674: Pop(1)
0x675: @@ ClearReplies()
0x676: Pop(0)
0x677: Push((int) 513916)
0x678: Push((int) 15148)
0x679: Push((int) 15147)
0x67a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67b: Pop(3)
0x67c: Return(); Pop(0)

0x67d: Push((int) 15148)
0x67e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x67f: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x680: PushEmpty(string)
0x681: Stack[-1] = "Neutral"
0x682: Call2 0x437

0x683: Pop(1)
0x684: Push((int) 513917)
0x685: @@ SetMessage(Stack[-1])
0x686: Pop(1)
0x687: @@ ClearReplies()
0x688: Pop(0)
0x689: Push((int) 513918)
0x68a: Push((int) -1)
0x68b: Push((int) 15149)
0x68c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68d: Pop(3)
0x68e: Return(); Pop(0)

0x68f: Push((int) 15111)
0x690: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x691: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x692: PushEmpty(string)
0x693: Stack[-1] = "Neutral"
0x694: Call2 0x437

0x695: Pop(1)
0x696: Push((int) 513884)
0x697: @@ SetMessage(Stack[-1])
0x698: Pop(1)
0x699: @@ ClearReplies()
0x69a: Pop(0)
0x69b: Push((int) 513885)
0x69c: Push((int) 15113)
0x69d: Push((int) 15112)
0x69e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69f: Pop(3)
0x6a0: Push((int) 513905)
0x6a1: Push((int) 15113)
0x6a2: Push((int) 15135)
0x6a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a4: Pop(3)
0x6a5: Return(); Pop(0)

0x6a6: Push((int) 15113)
0x6a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a8: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6a9: PushEmpty(string)
0x6aa: Stack[-1] = "Neutral"
0x6ab: Call2 0x437

0x6ac: Pop(1)
0x6ad: Push((int) 513886)
0x6ae: @@ SetMessage(Stack[-1])
0x6af: Pop(1)
0x6b0: @@ ClearReplies()
0x6b1: Pop(0)
0x6b2: Push((int) 513887)
0x6b3: Push((int) 15115)
0x6b4: Push((int) 15114)
0x6b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b6: Pop(3)
0x6b7: Push((int) 513899)
0x6b8: Push((int) 15128)
0x6b9: Push((int) 15127)
0x6ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bb: Pop(3)
0x6bc: Return(); Pop(0)

0x6bd: Push((int) 15128)
0x6be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6bf: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6c0: PushEmpty(string)
0x6c1: Stack[-1] = "Doubt"
0x6c2: Call2 0x437

0x6c3: Pop(1)
0x6c4: Push((int) 513900)
0x6c5: @@ SetMessage(Stack[-1])
0x6c6: Pop(1)
0x6c7: @@ ClearReplies()
0x6c8: Pop(0)
0x6c9: Push((int) 513901)
0x6ca: Push((int) 15130)
0x6cb: Push((int) 15129)
0x6cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cd: Pop(3)
0x6ce: Push((int) 513904)
0x6cf: Push((int) 15115)
0x6d0: Push((int) 15133)
0x6d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d2: Pop(3)
0x6d3: Return(); Pop(0)

0x6d4: Push((int) 15130)
0x6d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d6: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6d7: PushEmpty(string)
0x6d8: Stack[-1] = "Neutral"
0x6d9: Call2 0x437

0x6da: Pop(1)
0x6db: Push((int) 513902)
0x6dc: @@ SetMessage(Stack[-1])
0x6dd: Pop(1)
0x6de: @@ ClearReplies()
0x6df: Pop(0)
0x6e0: Push((int) 513903)
0x6e1: Push((int) 15121)
0x6e2: Push((int) 15131)
0x6e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e4: Pop(3)
0x6e5: Return(); Pop(0)

0x6e6: Push((int) 15115)
0x6e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e8: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6e9: PushEmpty(string)
0x6ea: Stack[-1] = "Neutral"
0x6eb: Call2 0x437

0x6ec: Pop(1)
0x6ed: Push((int) 513888)
0x6ee: @@ SetMessage(Stack[-1])
0x6ef: Pop(1)
0x6f0: @@ ClearReplies()
0x6f1: Pop(0)
0x6f2: Push((int) 513889)
0x6f3: Push((int) 15117)
0x6f4: Push((int) 15116)
0x6f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f6: Pop(3)
0x6f7: Push((int) 513898)
0x6f8: Push((int) 15117)
0x6f9: Push((int) 15125)
0x6fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fb: Pop(3)
0x6fc: Return(); Pop(0)

0x6fd: Push((int) 15117)
0x6fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ff: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x700: PushEmpty(string)
0x701: Stack[-1] = "Neutral"
0x702: Call2 0x437

0x703: Pop(1)
0x704: Push((int) 513890)
0x705: @@ SetMessage(Stack[-1])
0x706: Pop(1)
0x707: @@ ClearReplies()
0x708: Pop(0)
0x709: Push((int) 513891)
0x70a: Push((int) 15119)
0x70b: Push((int) 15118)
0x70c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70d: Pop(3)
0x70e: Push((int) 513897)
0x70f: Push((int) 15121)
0x710: Push((int) 15124)
0x711: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x712: Pop(3)
0x713: Return(); Pop(0)

0x714: Push((int) 15119)
0x715: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x716: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x717: PushEmpty(string)
0x718: Stack[-1] = "Neutral"
0x719: Call2 0x437

0x71a: Pop(1)
0x71b: Push((int) 513892)
0x71c: @@ SetMessage(Stack[-1])
0x71d: Pop(1)
0x71e: @@ ClearReplies()
0x71f: Pop(0)
0x720: Push((int) 513893)
0x721: Push((int) 15121)
0x722: Push((int) 15120)
0x723: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x724: Pop(3)
0x725: Return(); Pop(0)

0x726: Push((int) 15121)
0x727: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x728: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x729: PushEmpty(string)
0x72a: Stack[-1] = "Neutral"
0x72b: Call2 0x437

0x72c: Pop(1)
0x72d: Push((int) 513894)
0x72e: @@ SetMessage(Stack[-1])
0x72f: Pop(1)
0x730: @@ ClearReplies()
0x731: Pop(0)
0x732: Push((int) 513895)
0x733: Push((int) -1)
0x734: Push((int) 15122)
0x735: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x736: Pop(3)
0x737: Push((int) 513896)
0x738: Push((int) -1)
0x739: Push((int) 15123)
0x73a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73b: Pop(3)
0x73c: Return(); Pop(0)

0x73d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x73e: PushEmpty(bool)
0x73f: Call2 0xdce

0x740: Pop(0)
0x741: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x742: @ lshStopAnimation()
0x743: Pop(0)
0x744: GOTO 0x747

0x745: @ StopAnimation()
0x746: Pop(0)
0x747: Return(); Pop(0)

0x748: GOTO 0x44e

0x749: Return(); Pop(0)

0x74a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x74b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x74c: PushEmpty(bool, object, float)
0x74d: Stack[-2] = Stack[-12]
0x74e: Stack[-1] = (float) 70.0
0x74f: Call2 0xc36

0x750: Pop(2)
0x751: Pop(1); Push((bool) Stack[-1] == 0)
0x752: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x753: Stack[-10] = (int) -2
0x754: Return(); Pop(8)

0x755: @ CreateDialog(Stack[-4])
0x756: Pop(0)
0x757: PushEmpty(int)
0x758: Call2 0xdc8

0x759: Pop(0)
0x75a: @@ SetNPCName(Stack[-1])
0x75b: Pop(1)
0x75c: PushEmpty(int)
0x75d: Call2 0xdc6

0x75e: Pop(0)
0x75f: @@ SetNPCDescription(Stack[-1])
0x760: Pop(1)
0x761: PushEmpty(string)
0x762: Call2 0xdca

0x763: Pop(0)
0x764: @@ SetPhoto(Stack[-1])
0x765: Pop(1)
0x766: PushEmpty(string)
0x767: Call2 0xdcc

0x768: Pop(0)
0x769: @@ SetPhoto2(Stack[-1])
0x76a: Pop(1)
0x76b: PushEmpty(int)
0x76c: Call2 0xf4f

0x76d: Pop(0)
0x76e: @@ SetPlayerName(Stack[-1])
0x76f: Pop(1)
0x770: Stack[-2] = (int) -1
0x771: @ IsOverrideActive(Stack[-3])
0x772: Pop(0)
0x773: Push(Stack[-3])
0x774: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x775: Stack[-10] = (int) -2
0x776: Return(); Pop(8)

0x777: @ DoDialog(Stack[-4])
0x778: Pop(0)
0x779: PushEmpty(bool, object)
0x77a: PushEmpty(object)
0x77b: Call2 0xd4a

0x77c: Stack[-2] = Stack[-1]
0x77d: Pop(1)
0x77e: Call2 0xc8b

0x77f: Pop(2)
0x780: PushEmpty(object, object)
0x781: Stack[-2] = Stack[-11]
0x782: Stack[-1] = Stack[-6]
0x783: Push(-2, 4); TaskCall(7)
0x784: Call2 0x79b

0x785: Pop(-2, 4); TaskReturn
0x786: Pop(2)
0x787: @@ IsDialogEnd(Stack[-1])
0x788: Pop(0)
0x789: Pop(0); Push((bool) Stack[-1] == 0)
0x78a: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78b: @ sync()
0x78c: Pop(0)
0x78d: @@ IsDialogEnd(Stack[-1])
0x78e: Pop(0)
0x78f: GOTO 0x789

0x790: PushEmpty(object)
0x791: Stack[-1] = Stack[-10]
0x792: Call2 0xc7a

0x793: Pop(1)
0x794: @ StopDialog(Stack[-4])
0x795: Pop(0)
0x796: @@ GetReturnValue(Stack[-2])
0x797: Pop(0)
0x798: Stack[-10] = Stack[-2]
0x799: Return(); Pop(8)

0x79a: Stack[-4] = 0
0x79b: PushEmpty()
0x79c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x79d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x79e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x79f: Push((int) 1)
0x7a0: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7a1: PushEmpty(string)
0x7a2: Stack[-1] = "Neutral"
0x7a3: Call2 0x809

0x7a4: Pop(1)
0x7a5: Push((int) 514280)
0x7a6: @@ SetMessage(Stack[-1])
0x7a7: Pop(1)
0x7a8: @@ ClearReplies()
0x7a9: Pop(0)
0x7aa: PushEmpty(bool)
0x7ab: Stack[-1] = (bool) 0
0x7ac: PushEmpty(bool, object)
0x7ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ae: Call2 0xeb9

0x7af: Pop(1)
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7b1: PushEmpty(bool, object)
0x7b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b3: Call2 0xec5

0x7b4: Pop(1)
0x7b5: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7b6: Stack[-1] = (bool) 1
0x7b7: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7b8: Push((int) 514281)
0x7b9: Push((int) 15502)
0x7ba: Push((int) 15501)
0x7bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bc: Pop(3)
0x7bd: PushEmpty(bool)
0x7be: Stack[-1] = (bool) 0
0x7bf: PushEmpty(bool, object)
0x7c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c1: Call2 0xed1

0x7c2: Pop(1)
0x7c3: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7c4: PushEmpty(bool, object)
0x7c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c6: Call2 0xedd

0x7c7: Pop(1)
0x7c8: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7c9: Stack[-1] = (bool) 1
0x7ca: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7cb: Push((int) 514306)
0x7cc: Push((int) 15529)
0x7cd: Push((int) 15528)
0x7ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cf: Pop(3)
0x7d0: PushEmpty(bool)
0x7d1: Stack[-1] = (bool) 0
0x7d2: PushEmpty(bool, object)
0x7d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d4: Call2 0xead

0x7d5: Pop(1)
0x7d6: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7d7: PushEmpty(bool, object)
0x7d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d9: Call2 0xee9

0x7da: Pop(1)
0x7db: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7dc: Stack[-1] = (bool) 1
0x7dd: IF (Stack[-1] == 0) GOTO 0x7e3; Pop(1)

0x7de: Push((int) 514317)
0x7df: Push((int) 15540)
0x7e0: Push((int) 15539)
0x7e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e2: Pop(3)
0x7e3: Push((int) 514324)
0x7e4: Push((int) -1)
0x7e5: Push((int) 15546)
0x7e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e7: Pop(3)
0x7e8: GOTO 0x7eb

0x7e9: Return(); Pop(0)

0x7ea: GOTO 0x79f

0x7eb: PushEmpty(bool)
0x7ec: Call2 0xdce

0x7ed: Pop(0)
0x7ee: IF (Stack[-1] == 0) GOTO 0x7fa; Pop(1)

0x7ef: @ lshWaitForAnimEnd()
0x7f0: Pop(0)
0x7f1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7f2: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7f3: GOTO 0x7f9

0x7f4: PushEmpty(string)
0x7f5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7f6: Call2 0xd15

0x7f7: Pop(1)
0x7f8: GOTO 0x7ef

0x7f9: GOTO 0x808

0x7fa: Push("all")
0x7fb: Push("idle")
0x7fc: @ PlayAnimation(Stack[-2], Stack[-1])
0x7fd: Pop(2)
0x7fe: @ WaitForAnimEnd()
0x7ff: Pop(0)
0x800: Push( Stack[3 + Tasks[-1].StackPointer] )
0x801: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x802: GOTO 0x808

0x803: Push("all")
0x804: Push("idle")
0x805: @ PlayAnimation(Stack[-2], Stack[-1])
0x806: Pop(2)
0x807: GOTO 0x7fe

0x808: Return(); Pop(0)

0x809: PushEmpty()
0x80a: PushEmpty(bool)
0x80b: Call2 0xdce

0x80c: Pop(0)
0x80d: Pop(1); Push((bool) Stack[-1] == 0)
0x80e: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x80f: Return(); Pop(0)

0x810: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x811: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x812: Return(); Pop(0)

0x813: PushEmpty(string, bool)
0x814: Stack[-2] = Stack[-3]
0x815: Push("")
0x816: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x817: IF (Stack[-1] == 0) GOTO 0x81a; Pop(1)

0x818: Stack[-1] = (bool) 0
0x819: GOTO 0x81b

0x81a: Stack[-1] = (bool) 1
0x81b: Call2 0xd25

0x81c: Pop(2)
0x81d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x81e: Return(); Pop(0)

0x81f: PushEmpty()
0x820: Push((int) 1)
0x821: IF (Stack[-1] == 0) GOTO 0xa4a; Pop(1)

0x822: PushEmpty()
0x823: Call2 0xd43

0x824: Pop(0)
0x825: Push((int) 15501)
0x826: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x827: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x828: PushEmpty(object, object)
0x829: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x82a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x82b: Call2 0xe2c

0x82c: Pop(2)
0x82d: Push((int) 15528)
0x82e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x82f: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x830: PushEmpty(object, object)
0x831: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x832: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x833: Call2 0xe32

0x834: Pop(2)
0x835: PushEmpty(object, object)
0x836: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x837: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x838: Call2 0xe05

0x839: Pop(2)
0x83a: Push((int) 15539)
0x83b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x83c: IF (Stack[-1] == 0) GOTO 0x842; Pop(1)

0x83d: PushEmpty(object, object)
0x83e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x83f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x840: Call2 0xe38

0x841: Pop(2)
0x842: Push((int) 15500)
0x843: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x844: IF (Stack[-1] == 0) GOTO 0x88d; Pop(1)

0x845: PushEmpty(string)
0x846: Stack[-1] = "Neutral"
0x847: Call2 0x809

0x848: Pop(1)
0x849: Push((int) 514280)
0x84a: @@ SetMessage(Stack[-1])
0x84b: Pop(1)
0x84c: @@ ClearReplies()
0x84d: Pop(0)
0x84e: PushEmpty(bool)
0x84f: Stack[-1] = (bool) 0
0x850: PushEmpty(bool, object)
0x851: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x852: Call2 0xeb9

0x853: Pop(1)
0x854: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x855: PushEmpty(bool, object)
0x856: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x857: Call2 0xec5

0x858: Pop(1)
0x859: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x85a: Stack[-1] = (bool) 1
0x85b: IF (Stack[-1] == 0) GOTO 0x861; Pop(1)

0x85c: Push((int) 514281)
0x85d: Push((int) 15502)
0x85e: Push((int) 15501)
0x85f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x860: Pop(3)
0x861: PushEmpty(bool)
0x862: Stack[-1] = (bool) 0
0x863: PushEmpty(bool, object)
0x864: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x865: Call2 0xed1

0x866: Pop(1)
0x867: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x868: PushEmpty(bool, object)
0x869: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86a: Call2 0xedd

0x86b: Pop(1)
0x86c: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x86d: Stack[-1] = (bool) 1
0x86e: IF (Stack[-1] == 0) GOTO 0x874; Pop(1)

0x86f: Push((int) 514306)
0x870: Push((int) 15529)
0x871: Push((int) 15528)
0x872: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x873: Pop(3)
0x874: PushEmpty(bool)
0x875: Stack[-1] = (bool) 0
0x876: PushEmpty(bool, object)
0x877: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x878: Call2 0xead

0x879: Pop(1)
0x87a: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x87b: PushEmpty(bool, object)
0x87c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87d: Call2 0xee9

0x87e: Pop(1)
0x87f: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x880: Stack[-1] = (bool) 1
0x881: IF (Stack[-1] == 0) GOTO 0x887; Pop(1)

0x882: Push((int) 514317)
0x883: Push((int) 15540)
0x884: Push((int) 15539)
0x885: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x886: Pop(3)
0x887: Push((int) 514324)
0x888: Push((int) -1)
0x889: Push((int) 15546)
0x88a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88b: Pop(3)
0x88c: Return(); Pop(0)

0x88d: Push((int) 15540)
0x88e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x88f: IF (Stack[-1] == 0) GOTO 0x8a4; Pop(1)

0x890: PushEmpty(string)
0x891: Stack[-1] = "Neutral"
0x892: Call2 0x809

0x893: Pop(1)
0x894: Push((int) 514318)
0x895: @@ SetMessage(Stack[-1])
0x896: Pop(1)
0x897: @@ ClearReplies()
0x898: Pop(0)
0x899: Push((int) 514319)
0x89a: Push((int) 15542)
0x89b: Push((int) 15541)
0x89c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89d: Pop(3)
0x89e: Push((int) 539610)
0x89f: Push((int) 41557)
0x8a0: Push((int) 41556)
0x8a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a2: Pop(3)
0x8a3: Return(); Pop(0)

0x8a4: Push((int) 41557)
0x8a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a6: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8a7: PushEmpty(string)
0x8a8: Stack[-1] = "Neutral"
0x8a9: Call2 0x809

0x8aa: Pop(1)
0x8ab: Push((int) 539611)
0x8ac: @@ SetMessage(Stack[-1])
0x8ad: Pop(1)
0x8ae: @@ ClearReplies()
0x8af: Pop(0)
0x8b0: Push((int) 539729)
0x8b1: Push((int) 15542)
0x8b2: Push((int) 41692)
0x8b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b4: Pop(3)
0x8b5: Return(); Pop(0)

0x8b6: Push((int) 15542)
0x8b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b8: IF (Stack[-1] == 0) GOTO 0x8c8; Pop(1)

0x8b9: PushEmpty(string)
0x8ba: Stack[-1] = "Doubt"
0x8bb: Call2 0x809

0x8bc: Pop(1)
0x8bd: Push((int) 514320)
0x8be: @@ SetMessage(Stack[-1])
0x8bf: Pop(1)
0x8c0: @@ ClearReplies()
0x8c1: Pop(0)
0x8c2: Push((int) 514321)
0x8c3: Push((int) 15544)
0x8c4: Push((int) 15543)
0x8c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c6: Pop(3)
0x8c7: Return(); Pop(0)

0x8c8: Push((int) 15544)
0x8c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ca: IF (Stack[-1] == 0) GOTO 0x8df; Pop(1)

0x8cb: PushEmpty(string)
0x8cc: Stack[-1] = "Doubt"
0x8cd: Call2 0x809

0x8ce: Pop(1)
0x8cf: Push((int) 514322)
0x8d0: @@ SetMessage(Stack[-1])
0x8d1: Pop(1)
0x8d2: @@ ClearReplies()
0x8d3: Pop(0)
0x8d4: Push((int) 514323)
0x8d5: Push((int) 41695)
0x8d6: Push((int) 15545)
0x8d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d8: Pop(3)
0x8d9: Push((int) 539730)
0x8da: Push((int) -1)
0x8db: Push((int) 41694)
0x8dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8dd: Pop(3)
0x8de: Return(); Pop(0)

0x8df: Push((int) 41695)
0x8e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e1: IF (Stack[-1] == 0) GOTO 0x8f6; Pop(1)

0x8e2: PushEmpty(string)
0x8e3: Stack[-1] = "Neutral"
0x8e4: Call2 0x809

0x8e5: Pop(1)
0x8e6: Push((int) 539731)
0x8e7: @@ SetMessage(Stack[-1])
0x8e8: Pop(1)
0x8e9: @@ ClearReplies()
0x8ea: Pop(0)
0x8eb: Push((int) 539732)
0x8ec: Push((int) -1)
0x8ed: Push((int) 41696)
0x8ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ef: Pop(3)
0x8f0: Push((int) 539733)
0x8f1: Push((int) -1)
0x8f2: Push((int) 41697)
0x8f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f4: Pop(3)
0x8f5: Return(); Pop(0)

0x8f6: Push((int) 15529)
0x8f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f8: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x8f9: PushEmpty(string)
0x8fa: Stack[-1] = "Neutral"
0x8fb: Call2 0x809

0x8fc: Pop(1)
0x8fd: Push((int) 514307)
0x8fe: @@ SetMessage(Stack[-1])
0x8ff: Pop(1)
0x900: @@ ClearReplies()
0x901: Pop(0)
0x902: Push((int) 514308)
0x903: Push((int) 15531)
0x904: Push((int) 15530)
0x905: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x906: Pop(3)
0x907: Return(); Pop(0)

0x908: Push((int) 15531)
0x909: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x90a: IF (Stack[-1] == 0) GOTO 0x91a; Pop(1)

0x90b: PushEmpty(string)
0x90c: Stack[-1] = "Agression"
0x90d: Call2 0x809

0x90e: Pop(1)
0x90f: Push((int) 514309)
0x910: @@ SetMessage(Stack[-1])
0x911: Pop(1)
0x912: @@ ClearReplies()
0x913: Pop(0)
0x914: Push((int) 514310)
0x915: Push((int) 15533)
0x916: Push((int) 15532)
0x917: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x918: Pop(3)
0x919: Return(); Pop(0)

0x91a: Push((int) 15533)
0x91b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91c: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x91d: PushEmpty(string)
0x91e: Stack[-1] = "Agression"
0x91f: Call2 0x809

0x920: Pop(1)
0x921: Push((int) 514311)
0x922: @@ SetMessage(Stack[-1])
0x923: Pop(1)
0x924: @@ ClearReplies()
0x925: Pop(0)
0x926: Push((int) 514312)
0x927: Push((int) 15535)
0x928: Push((int) 15534)
0x929: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92a: Pop(3)
0x92b: Push((int) 539728)
0x92c: Push((int) -1)
0x92d: Push((int) 41691)
0x92e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92f: Pop(3)
0x930: Return(); Pop(0)

0x931: Push((int) 15535)
0x932: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x933: IF (Stack[-1] == 0) GOTO 0x943; Pop(1)

0x934: PushEmpty(string)
0x935: Stack[-1] = "Agression"
0x936: Call2 0x809

0x937: Pop(1)
0x938: Push((int) 514313)
0x939: @@ SetMessage(Stack[-1])
0x93a: Pop(1)
0x93b: @@ ClearReplies()
0x93c: Pop(0)
0x93d: Push((int) 514314)
0x93e: Push((int) 15537)
0x93f: Push((int) 15536)
0x940: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x941: Pop(3)
0x942: Return(); Pop(0)

0x943: Push((int) 15537)
0x944: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x945: IF (Stack[-1] == 0) GOTO 0x95a; Pop(1)

0x946: PushEmpty(string)
0x947: Stack[-1] = "Agression"
0x948: Call2 0x809

0x949: Pop(1)
0x94a: Push((int) 514315)
0x94b: @@ SetMessage(Stack[-1])
0x94c: Pop(1)
0x94d: @@ ClearReplies()
0x94e: Pop(0)
0x94f: Push((int) 514316)
0x950: Push((int) -1)
0x951: Push((int) 15538)
0x952: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x953: Pop(3)
0x954: Push((int) 539727)
0x955: Push((int) -1)
0x956: Push((int) 41690)
0x957: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x958: Pop(3)
0x959: Return(); Pop(0)

0x95a: Push((int) 15502)
0x95b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x95c: IF (Stack[-1] == 0) GOTO 0x971; Pop(1)

0x95d: PushEmpty(string)
0x95e: Stack[-1] = "Untrust"
0x95f: Call2 0x809

0x960: Pop(1)
0x961: Push((int) 514282)
0x962: @@ SetMessage(Stack[-1])
0x963: Pop(1)
0x964: @@ ClearReplies()
0x965: Pop(0)
0x966: Push((int) 514283)
0x967: Push((int) 15504)
0x968: Push((int) 15503)
0x969: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96a: Pop(3)
0x96b: Push((int) 539903)
0x96c: Push((int) 41864)
0x96d: Push((int) 41863)
0x96e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96f: Pop(3)
0x970: Return(); Pop(0)

0x971: Push((int) 41864)
0x972: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x973: IF (Stack[-1] == 0) GOTO 0x983; Pop(1)

0x974: PushEmpty(string)
0x975: Stack[-1] = "Neutral"
0x976: Call2 0x809

0x977: Pop(1)
0x978: Push((int) 539904)
0x979: @@ SetMessage(Stack[-1])
0x97a: Pop(1)
0x97b: @@ ClearReplies()
0x97c: Pop(0)
0x97d: Push((int) 539905)
0x97e: Push((int) 15504)
0x97f: Push((int) 41865)
0x980: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x981: Pop(3)
0x982: Return(); Pop(0)

0x983: Push((int) 15504)
0x984: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x985: IF (Stack[-1] == 0) GOTO 0x99a; Pop(1)

0x986: PushEmpty(string)
0x987: Stack[-1] = "Untrust"
0x988: Call2 0x809

0x989: Pop(1)
0x98a: Push((int) 514284)
0x98b: @@ SetMessage(Stack[-1])
0x98c: Pop(1)
0x98d: @@ ClearReplies()
0x98e: Pop(0)
0x98f: Push((int) 514285)
0x990: Push((int) 15506)
0x991: Push((int) 15505)
0x992: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x993: Pop(3)
0x994: Push((int) 514290)
0x995: Push((int) 15511)
0x996: Push((int) 15510)
0x997: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x998: Pop(3)
0x999: Return(); Pop(0)

0x99a: Push((int) 15511)
0x99b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x99c: IF (Stack[-1] == 0) GOTO 0x9b1; Pop(1)

0x99d: PushEmpty(string)
0x99e: Stack[-1] = "Neutral"
0x99f: Call2 0x809

0x9a0: Pop(1)
0x9a1: Push((int) 514291)
0x9a2: @@ SetMessage(Stack[-1])
0x9a3: Pop(1)
0x9a4: @@ ClearReplies()
0x9a5: Pop(0)
0x9a6: Push((int) 514292)
0x9a7: Push((int) 15513)
0x9a8: Push((int) 15512)
0x9a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9aa: Pop(3)
0x9ab: Push((int) 514299)
0x9ac: Push((int) 15520)
0x9ad: Push((int) 15519)
0x9ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9af: Pop(3)
0x9b0: Return(); Pop(0)

0x9b1: Push((int) 15520)
0x9b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b3: IF (Stack[-1] == 0) GOTO 0x9c8; Pop(1)

0x9b4: PushEmpty(string)
0x9b5: Stack[-1] = "Untrust"
0x9b6: Call2 0x809

0x9b7: Pop(1)
0x9b8: Push((int) 514300)
0x9b9: @@ SetMessage(Stack[-1])
0x9ba: Pop(1)
0x9bb: @@ ClearReplies()
0x9bc: Pop(0)
0x9bd: Push((int) 514301)
0x9be: Push((int) 15513)
0x9bf: Push((int) 15521)
0x9c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c1: Pop(3)
0x9c2: Push((int) 514302)
0x9c3: Push((int) 15524)
0x9c4: Push((int) 15523)
0x9c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c6: Pop(3)
0x9c7: Return(); Pop(0)

0x9c8: Push((int) 15524)
0x9c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ca: IF (Stack[-1] == 0) GOTO 0x9df; Pop(1)

0x9cb: PushEmpty(string)
0x9cc: Stack[-1] = "Neutral"
0x9cd: Call2 0x809

0x9ce: Pop(1)
0x9cf: Push((int) 514303)
0x9d0: @@ SetMessage(Stack[-1])
0x9d1: Pop(1)
0x9d2: @@ ClearReplies()
0x9d3: Pop(0)
0x9d4: Push((int) 514304)
0x9d5: Push((int) 15513)
0x9d6: Push((int) 15525)
0x9d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d8: Pop(3)
0x9d9: Push((int) 514305)
0x9da: Push((int) -1)
0x9db: Push((int) 15527)
0x9dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9dd: Pop(3)
0x9de: Return(); Pop(0)

0x9df: Push((int) 15513)
0x9e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e1: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9e2: PushEmpty(string)
0x9e3: Stack[-1] = "Untrust"
0x9e4: Call2 0x809

0x9e5: Pop(1)
0x9e6: Push((int) 514293)
0x9e7: @@ SetMessage(Stack[-1])
0x9e8: Pop(1)
0x9e9: @@ ClearReplies()
0x9ea: Pop(0)
0x9eb: Push((int) 514294)
0x9ec: Push((int) 15515)
0x9ed: Push((int) 15514)
0x9ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ef: Pop(3)
0x9f0: Return(); Pop(0)

0x9f1: Push((int) 15515)
0x9f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f3: IF (Stack[-1] == 0) GOTO 0xa03; Pop(1)

0x9f4: PushEmpty(string)
0x9f5: Stack[-1] = "Neutral"
0x9f6: Call2 0x809

0x9f7: Pop(1)
0x9f8: Push((int) 514295)
0x9f9: @@ SetMessage(Stack[-1])
0x9fa: Pop(1)
0x9fb: @@ ClearReplies()
0x9fc: Pop(0)
0x9fd: Push((int) 514296)
0x9fe: Push((int) 15517)
0x9ff: Push((int) 15516)
0xa00: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa01: Pop(3)
0xa02: Return(); Pop(0)

0xa03: Push((int) 15517)
0xa04: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa05: IF (Stack[-1] == 0) GOTO 0xa15; Pop(1)

0xa06: PushEmpty(string)
0xa07: Stack[-1] = "Neutral"
0xa08: Call2 0x809

0xa09: Pop(1)
0xa0a: Push((int) 514297)
0xa0b: @@ SetMessage(Stack[-1])
0xa0c: Pop(1)
0xa0d: @@ ClearReplies()
0xa0e: Pop(0)
0xa0f: Push((int) 514298)
0xa10: Push((int) -1)
0xa11: Push((int) 15518)
0xa12: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa13: Pop(3)
0xa14: Return(); Pop(0)

0xa15: Push((int) 15506)
0xa16: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa17: IF (Stack[-1] == 0) GOTO 0xa27; Pop(1)

0xa18: PushEmpty(string)
0xa19: Stack[-1] = "Neutral"
0xa1a: Call2 0x809

0xa1b: Pop(1)
0xa1c: Push((int) 514286)
0xa1d: @@ SetMessage(Stack[-1])
0xa1e: Pop(1)
0xa1f: @@ ClearReplies()
0xa20: Pop(0)
0xa21: Push((int) 514287)
0xa22: Push((int) 15508)
0xa23: Push((int) 15507)
0xa24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa25: Pop(3)
0xa26: Return(); Pop(0)

0xa27: Push((int) 15508)
0xa28: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa29: IF (Stack[-1] == 0) GOTO 0xa3e; Pop(1)

0xa2a: PushEmpty(string)
0xa2b: Stack[-1] = "Neutral"
0xa2c: Call2 0x809

0xa2d: Pop(1)
0xa2e: Push((int) 514288)
0xa2f: @@ SetMessage(Stack[-1])
0xa30: Pop(1)
0xa31: @@ ClearReplies()
0xa32: Pop(0)
0xa33: Push((int) 514289)
0xa34: Push((int) -1)
0xa35: Push((int) 15509)
0xa36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa37: Pop(3)
0xa38: Push((int) 539734)
0xa39: Push((int) -1)
0xa3a: Push((int) 41698)
0xa3b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3c: Pop(3)
0xa3d: Return(); Pop(0)

0xa3e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa3f: PushEmpty(bool)
0xa40: Call2 0xdce

0xa41: Pop(0)
0xa42: IF (Stack[-1] == 0) GOTO 0xa46; Pop(1)

0xa43: @ lshStopAnimation()
0xa44: Pop(0)
0xa45: GOTO 0xa48

0xa46: @ StopAnimation()
0xa47: Pop(0)
0xa48: Return(); Pop(0)

0xa49: GOTO 0x820

0xa4a: Return(); Pop(0)

0xa4b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xa4c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa4d: PushEmpty(bool, object, float)
0xa4e: Stack[-2] = Stack[-12]
0xa4f: Stack[-1] = (float) 70.0
0xa50: Call2 0xc36

0xa51: Pop(2)
0xa52: Pop(1); Push((bool) Stack[-1] == 0)
0xa53: IF (Stack[-1] == 0) GOTO 0xa56; Pop(1)

0xa54: Stack[-10] = (int) -2
0xa55: Return(); Pop(8)

0xa56: @ CreateDialog(Stack[-4])
0xa57: Pop(0)
0xa58: PushEmpty(int)
0xa59: Call2 0xdc8

0xa5a: Pop(0)
0xa5b: @@ SetNPCName(Stack[-1])
0xa5c: Pop(1)
0xa5d: PushEmpty(int)
0xa5e: Call2 0xdc6

0xa5f: Pop(0)
0xa60: @@ SetNPCDescription(Stack[-1])
0xa61: Pop(1)
0xa62: PushEmpty(string)
0xa63: Call2 0xdca

0xa64: Pop(0)
0xa65: @@ SetPhoto(Stack[-1])
0xa66: Pop(1)
0xa67: PushEmpty(string)
0xa68: Call2 0xdcc

0xa69: Pop(0)
0xa6a: @@ SetPhoto2(Stack[-1])
0xa6b: Pop(1)
0xa6c: PushEmpty(int)
0xa6d: Call2 0xf4f

0xa6e: Pop(0)
0xa6f: @@ SetPlayerName(Stack[-1])
0xa70: Pop(1)
0xa71: Stack[-2] = (int) -1
0xa72: @ IsOverrideActive(Stack[-3])
0xa73: Pop(0)
0xa74: Push(Stack[-3])
0xa75: IF (Stack[-1] == 0) GOTO 0xa78; Pop(1)

0xa76: Stack[-10] = (int) -2
0xa77: Return(); Pop(8)

0xa78: @ DoDialog(Stack[-4])
0xa79: Pop(0)
0xa7a: PushEmpty(bool, object)
0xa7b: PushEmpty(object)
0xa7c: Call2 0xd4a

0xa7d: Stack[-2] = Stack[-1]
0xa7e: Pop(1)
0xa7f: Call2 0xc8b

0xa80: Pop(2)
0xa81: PushEmpty(object, object)
0xa82: Stack[-2] = Stack[-11]
0xa83: Stack[-1] = Stack[-6]
0xa84: Push(-2, 4); TaskCall(9)
0xa85: Call2 0xa9c

0xa86: Pop(-2, 4); TaskReturn
0xa87: Pop(2)
0xa88: @@ IsDialogEnd(Stack[-1])
0xa89: Pop(0)
0xa8a: Pop(0); Push((bool) Stack[-1] == 0)
0xa8b: IF (Stack[-1] == 0) GOTO 0xa91; Pop(1)

0xa8c: @ sync()
0xa8d: Pop(0)
0xa8e: @@ IsDialogEnd(Stack[-1])
0xa8f: Pop(0)
0xa90: GOTO 0xa8a

0xa91: PushEmpty(object)
0xa92: Stack[-1] = Stack[-10]
0xa93: Call2 0xc7a

0xa94: Pop(1)
0xa95: @ StopDialog(Stack[-4])
0xa96: Pop(0)
0xa97: @@ GetReturnValue(Stack[-2])
0xa98: Pop(0)
0xa99: Stack[-10] = Stack[-2]
0xa9a: Return(); Pop(8)

0xa9b: Stack[-4] = 0
0xa9c: PushEmpty()
0xa9d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xa9e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xa9f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xaa0: Push((int) 1)
0xaa1: IF (Stack[-1] == 0) GOTO 0xab8; Pop(1)

0xaa2: PushEmpty(string)
0xaa3: Stack[-1] = "Neutral"
0xaa4: Call2 0xad6

0xaa5: Pop(1)
0xaa6: Push((int) 540542)
0xaa7: @@ SetMessage(Stack[-1])
0xaa8: Pop(1)
0xaa9: @@ ClearReplies()
0xaaa: Pop(0)
0xaab: Push((int) 540543)
0xaac: Push((int) -1)
0xaad: Push((int) 42552)
0xaae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaaf: Pop(3)
0xab0: Push((int) 540796)
0xab1: Push((int) -1)
0xab2: Push((int) 42845)
0xab3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab4: Pop(3)
0xab5: GOTO 0xab8

0xab6: Return(); Pop(0)

0xab7: GOTO 0xaa0

0xab8: PushEmpty(bool)
0xab9: Call2 0xdce

0xaba: Pop(0)
0xabb: IF (Stack[-1] == 0) GOTO 0xac7; Pop(1)

0xabc: @ lshWaitForAnimEnd()
0xabd: Pop(0)
0xabe: Push( Stack[3 + Tasks[-1].StackPointer] )
0xabf: IF (Stack[-1] == 0) GOTO 0xac1; Pop(1)

0xac0: GOTO 0xac6

0xac1: PushEmpty(string)
0xac2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xac3: Call2 0xd15

0xac4: Pop(1)
0xac5: GOTO 0xabc

0xac6: GOTO 0xad5

0xac7: Push("all")
0xac8: Push("idle")
0xac9: @ PlayAnimation(Stack[-2], Stack[-1])
0xaca: Pop(2)
0xacb: @ WaitForAnimEnd()
0xacc: Pop(0)
0xacd: Push( Stack[3 + Tasks[-1].StackPointer] )
0xace: IF (Stack[-1] == 0) GOTO 0xad0; Pop(1)

0xacf: GOTO 0xad5

0xad0: Push("all")
0xad1: Push("idle")
0xad2: @ PlayAnimation(Stack[-2], Stack[-1])
0xad3: Pop(2)
0xad4: GOTO 0xacb

0xad5: Return(); Pop(0)

0xad6: PushEmpty()
0xad7: PushEmpty(bool)
0xad8: Call2 0xdce

0xad9: Pop(0)
0xada: Pop(1); Push((bool) Stack[-1] == 0)
0xadb: IF (Stack[-1] == 0) GOTO 0xadd; Pop(1)

0xadc: Return(); Pop(0)

0xadd: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xade: IF (Stack[-1] == 0) GOTO 0xae0; Pop(1)

0xadf: Return(); Pop(0)

0xae0: PushEmpty(string, bool)
0xae1: Stack[-2] = Stack[-3]
0xae2: Push("")
0xae3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xae4: IF (Stack[-1] == 0) GOTO 0xae7; Pop(1)

0xae5: Stack[-1] = (bool) 0
0xae6: GOTO 0xae8

0xae7: Stack[-1] = (bool) 1
0xae8: Call2 0xd25

0xae9: Pop(2)
0xaea: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaeb: Return(); Pop(0)

0xaec: PushEmpty()
0xaed: Push((int) 1)
0xaee: IF (Stack[-1] == 0) GOTO 0xb15; Pop(1)

0xaef: PushEmpty()
0xaf0: Call2 0xd43

0xaf1: Pop(0)
0xaf2: Push((int) 42551)
0xaf3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf4: IF (Stack[-1] == 0) GOTO 0xb09; Pop(1)

0xaf5: PushEmpty(string)
0xaf6: Stack[-1] = "Neutral"
0xaf7: Call2 0xad6

0xaf8: Pop(1)
0xaf9: Push((int) 540542)
0xafa: @@ SetMessage(Stack[-1])
0xafb: Pop(1)
0xafc: @@ ClearReplies()
0xafd: Pop(0)
0xafe: Push((int) 540543)
0xaff: Push((int) -1)
0xb00: Push((int) 42552)
0xb01: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb02: Pop(3)
0xb03: Push((int) 540796)
0xb04: Push((int) -1)
0xb05: Push((int) 42845)
0xb06: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb07: Pop(3)
0xb08: Return(); Pop(0)

0xb09: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb0a: PushEmpty(bool)
0xb0b: Call2 0xdce

0xb0c: Pop(0)
0xb0d: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xb0e: @ lshStopAnimation()
0xb0f: Pop(0)
0xb10: GOTO 0xb13

0xb11: @ StopAnimation()
0xb12: Pop(0)
0xb13: Return(); Pop(0)

0xb14: GOTO 0xaed

0xb15: Return(); Pop(0)

0xb16: PushEmpty()
0xb17: Call2 0xb1a

0xb18: Pop(0)
0xb19: Return(); Pop(0)

0xb1a: PushEmpty(bool)
0xb1b: Call2 0xc31

0xb1c: Pop(0)
0xb1d: Pop(1); Push((bool) Stack[-1] == 0)
0xb1e: IF (Stack[-1] == 0) GOTO 0xb21; Pop(1)

0xb1f: @ Hold()
0xb20: Pop(0)
0xb21: @ GetDirection(Stack[-0])
0xb22: Pop(0)
0xb23: PushEmpty()
0xb24: Call2 0xbca

0xb25: Pop(0)
0xb26: GOTO 0xb23

0xb27: Return(); Pop(0)

0xb28: PushEmpty(object, object)
0xb29: Push("player")
0xb2a: @ FindActor(Stack[-2], Stack[-1])
0xb2b: Pop(1)
0xb2c: Pop(0); Push((bool) Stack[-1] == 0)
0xb2d: IF (Stack[-1] == 0) GOTO 0xb30; Pop(1)

0xb2e: Stack[-3] = (bool) 0
0xb2f: Return(); Pop(2)

0xb30: PushEmpty(bool, object)
0xb31: Stack[-1] = Stack[-3]
0xb32: Call2 0xc28

0xb33: Stack[-5] = Stack[-2]
0xb34: Pop(2)
0xb35: Return(); Pop(2)

0xb36: Stack[-1] = 0
0xb37: Push(CvectorIndex(Stack[-0], 0))
0xb38: Push(CvectorIndex(Stack[-0], 2))
0xb39: @ RotateAsync(Stack[-2], Stack[-1])
0xb3a: Pop(2)
0xb3b: Return(); Pop(0)

0xb3c: PushEmpty(object, bool, object, bool)
0xb3d: Push("player")
0xb3e: @ FindActor(Stack[-3], Stack[-1])
0xb3f: Pop(1)
0xb40: Pop(0); Push((bool) Stack[-2] == 0)
0xb41: IF (Stack[-1] == 0) GOTO 0xb44; Pop(1)

0xb42: Stack[-5] = (bool) 0
0xb43: Return(); Pop(4)

0xb44: PushEmpty(float, object)
0xb45: Stack[-1] = Stack[-4]
0xb46: Call2 0xc16

0xb47: Pop(1)
0xb48: Push((float)90000.0)
0xb49: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xb4a: IF (Stack[-1] == 0) GOTO 0xb4d; Pop(1)

0xb4b: Stack[-5] = (bool) 0
0xb4c: Return(); Pop(4)

0xb4d: @ CanSee(Stack[-1], Stack[-2])
0xb4e: Pop(0)
0xb4f: Stack[-5] = Stack[-1]
0xb50: Return(); Pop(4)

0xb51: Stack[-2] = 0
0xb52: PushEmpty(float, float)
0xb53: Push((int) 8)
0xb54: Push((int) 16)
0xb55: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xb56: Pop(2)
0xb57: Push((int) 10)
0xb58: @ SetTimer(Stack[-1], Stack[-2])
0xb59: Pop(1)
0xb5a: Return(); Pop(2)

0xb5b: Push((int) 10)
0xb5c: @ KillTimer(Stack[-1])
0xb5d: Pop(1)
0xb5e: Return(); Pop(0)

0xb5f: PushEmpty()
0xb60: Push((int) 10)
0xb61: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb62: IF (Stack[-1] == 0) GOTO 0xb84; Pop(1)

0xb63: PushEmpty()
0xb64: Call2 0xb5b

0xb65: Pop(0)
0xb66: PushEmpty(bool)
0xb67: Stack[-1] = (bool) 0
0xb68: PushEmpty(bool)
0xb69: Call2 0xc31

0xb6a: Pop(0)
0xb6b: IF (Stack[-1] == 0) GOTO 0xb71; Pop(1)

0xb6c: PushEmpty(bool)
0xb6d: Call2 0xb3c

0xb6e: Pop(0)
0xb6f: IF (Stack[-1] == 0) GOTO 0xb71; Pop(1)

0xb70: Stack[-1] = (bool) 1
0xb71: IF (Stack[-1] == 0) GOTO 0xb7e; Pop(1)

0xb72: PushEmpty(bool)
0xb73: Call2 0xb28

0xb74: Pop(0)
0xb75: IF (Stack[-1] == 0) GOTO 0xb7d; Pop(1)

0xb76: PushEmpty(bool, object)
0xb77: PushEmpty(object)
0xb78: Call2 0xd4a

0xb79: Stack[-2] = Stack[-1]
0xb7a: Pop(1)
0xb7b: Call2 0xcc5

0xb7c: Pop(2)
0xb7d: GOTO 0xb84

0xb7e: PushEmpty()
0xb7f: Call2 0xb37

0xb80: Pop(0)
0xb81: PushEmpty()
0xb82: Call2 0xb52

0xb83: Pop(0)
0xb84: Return(); Pop(0)

0xb85: PushEmpty()
0xb86: Call2 0xc11

0xb87: Pop(0)
0xb88: PushEmpty()
0xb89: Call2 0xb5b

0xb8a: Pop(0)
0xb8b: @ lshStopSpeech()
0xb8c: Pop(0)
0xb8d: @ lshStopAnimation()
0xb8e: Pop(0)
0xb8f: @ StopAsync()
0xb90: Pop(0)
0xb91: @ Hold()
0xb92: Pop(0)
0xb93: Return(); Pop(0)

0xb94: @ StopGroup0()
0xb95: Pop(0)
0xb96: PushEmpty()
0xb97: Call2 0xb5b

0xb98: Pop(0)
0xb99: PushEmpty(string)
0xb9a: Stack[-1] = "Neutral"
0xb9b: Call2 0xd15

0xb9c: Pop(1)
0xb9d: PushEmpty()
0xb9e: Call2 0xb52

0xb9f: Pop(0)
0xba0: Return(); Pop(0)

0xba1: PushEmpty()
0xba2: Push(Stack[-1])
0xba3: IF (Stack[-1] == 0) GOTO 0xba8; Pop(1)

0xba4: PushEmpty()
0xba5: Call2 0xb52

0xba6: Pop(0)
0xba7: GOTO 0xbac

0xba8: PushEmpty(string)
0xba9: Stack[-1] = "Neutral"
0xbaa: Call2 0xd15

0xbab: Pop(1)
0xbac: Return(); Pop(0)

0xbad: PushEmpty(bool, bool)
0xbae: @ IsOverrideActive(Stack[-1])
0xbaf: Pop(0)
0xbb0: Pop(0); Push((bool) Stack[-1] == 0)
0xbb1: IF (Stack[-1] == 0) GOTO 0xbc9; Pop(1)

0xbb2: EventDisable(0)
0xbb3: PushEmpty()
0xbb4: Call2 0xc11

0xbb5: Pop(0)
0xbb6: PushEmpty(bool, object)
0xbb7: Stack[-1] = Stack[-5]
0xbb8: Call2 0xc28

0xbb9: Pop(2)
0xbba: EventEnable(0)
0xbbb: PushEmpty(object)
0xbbc: Stack[-1] = Stack[-4]
0xbbd: Call2 0xf60

0xbbe: Pop(1)
0xbbf: PushEmpty(string)
0xbc0: Stack[-1] = "Neutral"
0xbc1: Call2 0xd15

0xbc2: Pop(1)
0xbc3: PushEmpty()
0xbc4: Call2 0xb5b

0xbc5: Pop(0)
0xbc6: PushEmpty()
0xbc7: Call2 0xb52

0xbc8: Pop(0)
0xbc9: Return(); Pop(2)

0xbca: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xbcb: @ WaitForAnimEnd()
0xbcc: Pop(0)
0xbcd: PushEmpty(bool)
0xbce: Call2 0xc31

0xbcf: Pop(0)
0xbd0: Pop(1); Push((bool) Stack[-1] == 0)
0xbd1: IF (Stack[-1] == 0) GOTO 0xbd3; Pop(1)

0xbd2: Return(); Pop(12)

0xbd3: PushEmpty(int)
0xbd4: Call2 0xdb5

0xbd5: Stack[-7] = Stack[-1]
0xbd6: Pop(1)
0xbd7: Stack[-5] = (int) 0
0xbd8: PushEmpty(bool)
0xbd9: Stack[-1] = (bool) 0
0xbda: Push((int) 5)
0xbdb: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xbdc: IF (Stack[-1] == 0) GOTO 0xbe2; Pop(1)

0xbdd: PushEmpty(bool)
0xbde: Call2 0xc31

0xbdf: Pop(0)
0xbe0: IF (Stack[-1] == 0) GOTO 0xbe2; Pop(1)

0xbe1: Stack[-1] = (bool) 1
0xbe2: IF (Stack[-1] == 0) GOTO 0xc0c; Pop(1)

0xbe3: Pop(0); Push((bool) Stack[-6] == 0)
0xbe4: IF (Stack[-1] == 0) GOTO 0xbec; Pop(1)

0xbe5: Push((int) 3)
0xbe6: @ Sleep(Stack[-1], Stack[-5])
0xbe7: Pop(1)
0xbe8: Pop(0); Push((bool) Stack[-4] == 0)
0xbe9: IF (Stack[-1] == 0) GOTO 0xbeb; Pop(1)

0xbea: GOTO 0xc0c

0xbeb: GOTO 0xc01

0xbec: @ irand(Stack[-3], Stack[-6])
0xbed: Pop(0)
0xbee: Push((int) 5)
0xbef: @ irand(Stack[-3], Stack[-1])
0xbf0: Pop(1)
0xbf1: Push((int) 0)
0xbf2: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xbf3: IF (Stack[-1] == 0) GOTO 0xbf5; Pop(1)

0xbf4: Stack[-3] = (int) 0
0xbf5: Push("all")
0xbf6: PushEmpty(string, int)
0xbf7: Stack[-1] = Stack[-6]
0xbf8: Call2 0xdae

0xbf9: Pop(1)
0xbfa: @ PlayAnimation(Stack[-2], Stack[-1])
0xbfb: Pop(2)
0xbfc: @ WaitForAnimEnd(Stack[-1])
0xbfd: Pop(0)
0xbfe: Pop(0); Push((bool) Stack[-1] == 0)
0xbff: IF (Stack[-1] == 0) GOTO 0xc01; Pop(1)

0xc00: GOTO 0xc0c

0xc01: PushEmpty(bool)
0xc02: Call2 0xc0f

0xc03: Pop(0)
0xc04: Pop(1); Push((bool) Stack[-1] == 0)
0xc05: IF (Stack[-1] == 0) GOTO 0xc07; Pop(1)

0xc06: GOTO 0xc0c

0xc07: @ ResetAAS()
0xc08: Pop(0)
0xc09: Push((int) 1)
0xc0a: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xc0b: GOTO 0xbd8

0xc0c: @ ResetAAS()
0xc0d: Pop(0)
0xc0e: Return(); Pop(12)

0xc0f: Stack[-1] = (bool) 1
0xc10: Return(); Pop(0)

0xc11: @ StopAnimation()
0xc12: Pop(0)
0xc13: @ StopGroup0()
0xc14: Pop(0)
0xc15: Return(); Pop(0)

0xc16: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xc17: @ GetPosition(Stack[-3])
0xc18: Pop(0)
0xc19: @@ GetPosition(Stack[-2])
0xc1a: Pop(0)
0xc1b: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xc1c: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xc1d: Return(); Pop(6)

0xc1e: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xc1f: @ GetPosition(Stack[-3])
0xc20: Pop(0)
0xc21: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xc22: Push(CvectorIndex(Stack[-2], 0))
0xc23: Push(CvectorIndex(Stack[-3], 2))
0xc24: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xc25: Pop(2)
0xc26: Stack[-8] = Stack[-1]
0xc27: Return(); Pop(6)

0xc28: PushEmpty(cvector, cvector)
0xc29: @@ GetPosition(Stack[-1])
0xc2a: Pop(0)
0xc2b: PushEmpty(bool, cvector)
0xc2c: Stack[-1] = Stack[-3]
0xc2d: Call2 0xc1e

0xc2e: Stack[-6] = Stack[-2]
0xc2f: Pop(2)
0xc30: Return(); Pop(2)

0xc31: PushEmpty(bool, bool)
0xc32: @ IsLoaded(Stack[-1])
0xc33: Pop(0)
0xc34: Stack[-3] = Stack[-1]
0xc35: Return(); Pop(2)

0xc36: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xc37: @@ GetPosition(Stack[-8])
0xc38: Pop(0)
0xc39: @@ GetEyesHeight(Stack[-9])
0xc3a: Pop(0)
0xc3b: Push(CvectorIndex(Stack[-8], 1))
0xc3c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xc3d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xc3e: @ GetPosition(Stack[-7])
0xc3f: Pop(0)
0xc40: @ GetEyesHeight(Stack[-9])
0xc41: Pop(0)
0xc42: Push(CvectorIndex(Stack[-7], 1))
0xc43: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xc44: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xc45: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xc46: Push(CvectorIndex(Stack[-6], 1))
0xc47: Stack[-1] = (int) 0
0xc48: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xc49: Pop(0); Push(Stack[-6] | Stack[-6]);
0xc4a: Pop(1); Push(Sqrt(Stack[-1]))
0xc4b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xc4c: Stack[-5] = -Stack[-6]; Pop(0);
0xc4d: Pop(0); Push(Stack[-6] * Stack[-19]);
0xc4e: PushEmpty(cvector, cvector)
0xc4f: Push(CVector(0.0, 1.0, 0.0))
0xc50: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xc51: Call2 0xd50

0xc52: Pop(1)
0xc53: Push((int) 25)
0xc54: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc55: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc56: Push(CVector(0.0, 10.0, 0.0))
0xc57: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xc58: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xc59: @ IsOverrideActive(Stack[-2])
0xc5a: Pop(0)
0xc5b: Push(Stack[-2])
0xc5c: IF (Stack[-1] == 0) GOTO 0xc5f; Pop(1)

0xc5d: Stack[-21] = (bool) 0
0xc5e: Return(); Pop(18)

0xc5f: @ StopWorld()
0xc60: Pop(0)
0xc61: @ CameraTransit(Stack[-3], Stack[-5])
0xc62: Pop(0)
0xc63: Push(CvectorIndex(Stack[-4], 0))
0xc64: Push(CvectorIndex(Stack[-5], 2))
0xc65: @ Rotate(Stack[-2], Stack[-1])
0xc66: Pop(2)
0xc67: PushEmpty(bool)
0xc68: Call2 0xdce

0xc69: Pop(0)
0xc6a: IF (Stack[-1] == 0) GOTO 0xc6c; Pop(1)

0xc6b: GOTO 0xc74

0xc6c: Push("head")
0xc6d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc6e: Pop(1)
0xc6f: Push(Stack[-1])
0xc70: IF (Stack[-1] == 0) GOTO 0xc74; Pop(1)

0xc71: Push("head")
0xc72: @ LookAsyncCamera(Stack[-1])
0xc73: Pop(1)
0xc74: @ CameraWaitForPlayFinish()
0xc75: Pop(0)
0xc76: @ ResumeWorld()
0xc77: Pop(0)
0xc78: Stack[-21] = (bool) 1
0xc79: Return(); Pop(18)

0xc7a: PushEmpty(bool, bool)
0xc7b: @ CameraSwitchToNormal()
0xc7c: Pop(0)
0xc7d: PushEmpty(bool)
0xc7e: Call2 0xdce

0xc7f: Pop(0)
0xc80: IF (Stack[-1] == 0) GOTO 0xc82; Pop(1)

0xc81: GOTO 0xc8a

0xc82: Push("head")
0xc83: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc84: Pop(1)
0xc85: Push(Stack[-1])
0xc86: IF (Stack[-1] == 0) GOTO 0xc8a; Pop(1)

0xc87: Push("head")
0xc88: @ UnlookAsync(Stack[-1])
0xc89: Pop(1)
0xc8a: Return(); Pop(2)

0xc8b: PushEmpty(int, int, int, int)
0xc8c: Push("voice_common")
0xc8d: @ GetVariable(Stack[-1], Stack[-3])
0xc8e: Pop(1)
0xc8f: Push(Stack[-2])
0xc90: IF (Stack[-1] == 0) GOTO 0xcb1; Pop(1)

0xc91: PushEmpty(bool, object)
0xc92: Stack[-1] = Stack[-7]
0xc93: Call2 0xcc5

0xc94: Pop(1)
0xc95: Pop(1); Push((bool) Stack[-1] == 0)
0xc96: IF (Stack[-1] == 0) GOTO 0xc9f; Pop(1)

0xc97: PushEmpty(bool, object)
0xc98: Stack[-1] = Stack[-7]
0xc99: Call2 0xcea

0xc9a: Pop(1)
0xc9b: Pop(1); Push((bool) Stack[-1] == 0)
0xc9c: IF (Stack[-1] == 0) GOTO 0xc9f; Pop(1)

0xc9d: Stack[-6] = (bool) 0
0xc9e: Return(); Pop(4)

0xc9f: Push((int) 2)
0xca0: @ irand(Stack[-2], Stack[-1])
0xca1: Pop(1)
0xca2: Push(Stack[-1])
0xca3: IF (Stack[-1] == 0) GOTO 0xcac; Pop(1)

0xca4: Push("voice_common")
0xca5: Push((int) 1)
0xca6: Pop(1); Push(Stack[-4] + Stack[-1]);
0xca7: Push((int) 3)
0xca8: Pop(2); Push(Stack[-2] % Stack[-1]);
0xca9: @ SetVariable(Stack[-2], Stack[-1])
0xcaa: Pop(2)
0xcab: GOTO 0xcb0

0xcac: Push("voice_common")
0xcad: Push((int) 0)
0xcae: @ SetVariable(Stack[-2], Stack[-1])
0xcaf: Pop(2)
0xcb0: GOTO 0xcc3

0xcb1: PushEmpty(bool, object)
0xcb2: Stack[-1] = Stack[-7]
0xcb3: Call2 0xcea

0xcb4: Pop(1)
0xcb5: Pop(1); Push((bool) Stack[-1] == 0)
0xcb6: IF (Stack[-1] == 0) GOTO 0xcbf; Pop(1)

0xcb7: PushEmpty(bool, object)
0xcb8: Stack[-1] = Stack[-7]
0xcb9: Call2 0xcc5

0xcba: Pop(1)
0xcbb: Pop(1); Push((bool) Stack[-1] == 0)
0xcbc: IF (Stack[-1] == 0) GOTO 0xcbf; Pop(1)

0xcbd: Stack[-6] = (bool) 0
0xcbe: Return(); Pop(4)

0xcbf: Push("voice_common")
0xcc0: Push((int) 1)
0xcc1: @ SetVariable(Stack[-2], Stack[-1])
0xcc2: Pop(2)
0xcc3: Stack[-6] = (bool) 1
0xcc4: Return(); Pop(4)

0xcc5: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xcc6: Stack[-5] = "c"
0xcc7: Stack[-4] = (int) 0
0xcc8: Push((int) 1)
0xcc9: IF (Stack[-1] == 0) GOTO 0xcd5; Pop(1)

0xcca: Push((int) 1)
0xccb: Pop(1); Push(Stack[-5] + Stack[-1]);
0xccc: Pop(1); Push(Stack[-6] + Stack[-1]);
0xccd: @@ HasProperty(Stack[-1], Stack[-4])
0xcce: Pop(1)
0xccf: Pop(0); Push((bool) Stack[-3] == 0)
0xcd0: IF (Stack[-1] == 0) GOTO 0xcd2; Pop(1)

0xcd1: GOTO 0xcd5

0xcd2: Push((int) 1)
0xcd3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xcd4: GOTO 0xcc8

0xcd5: Pop(0); Push((bool) Stack[-4] == 0)
0xcd6: IF (Stack[-1] == 0) GOTO 0xcd9; Pop(1)

0xcd7: Stack[-12] = (bool) 0
0xcd8: Return(); Pop(10)

0xcd9: Stack[-2] = (int) 0
0xcda: Push((int) 1)
0xcdb: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xcdc: IF (Stack[-1] == 0) GOTO 0xcdf; Pop(1)

0xcdd: @ irand(Stack[-2], Stack[-4])
0xcde: Pop(0)
0xcdf: Push((int) 1)
0xce0: Pop(1); Push(Stack[-3] + Stack[-1]);
0xce1: Pop(1); Push(Stack[-6] + Stack[-1]);
0xce2: @@ GetProperty(Stack[-1], Stack[-2])
0xce3: Pop(1)
0xce4: PushEmpty(bool, string)
0xce5: Stack[-1] = Stack[-3]
0xce6: Call2 0xd34

0xce7: Stack[-14] = Stack[-2]
0xce8: Pop(2)
0xce9: Return(); Pop(10)

0xcea: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xceb: Push("d")
0xcec: PushEmpty(int)
0xced: Call2 0xd97

0xcee: Pop(0)
0xcef: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcf0: Push("m")
0xcf1: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xcf2: Stack[-4] = (int) 0
0xcf3: Push((int) 1)
0xcf4: IF (Stack[-1] == 0) GOTO 0xd00; Pop(1)

0xcf5: Push((int) 1)
0xcf6: Pop(1); Push(Stack[-5] + Stack[-1]);
0xcf7: Pop(1); Push(Stack[-6] + Stack[-1]);
0xcf8: @@ HasProperty(Stack[-1], Stack[-4])
0xcf9: Pop(1)
0xcfa: Pop(0); Push((bool) Stack[-3] == 0)
0xcfb: IF (Stack[-1] == 0) GOTO 0xcfd; Pop(1)

0xcfc: GOTO 0xd00

0xcfd: Push((int) 1)
0xcfe: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xcff: GOTO 0xcf3

0xd00: Pop(0); Push((bool) Stack[-4] == 0)
0xd01: IF (Stack[-1] == 0) GOTO 0xd04; Pop(1)

0xd02: Stack[-12] = (bool) 0
0xd03: Return(); Pop(10)

0xd04: Stack[-2] = (int) 0
0xd05: Push((int) 1)
0xd06: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xd07: IF (Stack[-1] == 0) GOTO 0xd0a; Pop(1)

0xd08: @ irand(Stack[-2], Stack[-4])
0xd09: Pop(0)
0xd0a: Push((int) 1)
0xd0b: Pop(1); Push(Stack[-3] + Stack[-1]);
0xd0c: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd0d: @@ GetProperty(Stack[-1], Stack[-2])
0xd0e: Pop(1)
0xd0f: PushEmpty(bool, string)
0xd10: Stack[-1] = Stack[-3]
0xd11: Call2 0xd34

0xd12: Stack[-14] = Stack[-2]
0xd13: Pop(2)
0xd14: Return(); Pop(10)

0xd15: PushEmpty(bool, float, float, bool, float, float)
0xd16: @ lshHasAnimation(Stack[-3], Stack[-7])
0xd17: Pop(0)
0xd18: Push(Stack[-3])
0xd19: IF (Stack[-1] == 0) GOTO 0xd20; Pop(1)

0xd1a: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xd1b: Pop(0)
0xd1c: Push((bool) 0)
0xd1d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xd1e: Pop(1)
0xd1f: GOTO 0xd24

0xd20: Push("Can't find lsh animation : ")
0xd21: Pop(1); Push(Stack[-1] + Stack[-8]);
0xd22: @ Trace(Stack[-1])
0xd23: Pop(1)
0xd24: Return(); Pop(6)

0xd25: PushEmpty(bool, float, float, bool, float, float)
0xd26: @ lshHasAnimation(Stack[-3], Stack[-8])
0xd27: Pop(0)
0xd28: Push(Stack[-3])
0xd29: IF (Stack[-1] == 0) GOTO 0xd2f; Pop(1)

0xd2a: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xd2b: Pop(0)
0xd2c: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xd2d: Pop(0)
0xd2e: GOTO 0xd33

0xd2f: Push("Can't find lsh animation : ")
0xd30: Pop(1); Push(Stack[-1] + Stack[-9]);
0xd31: @ Trace(Stack[-1])
0xd32: Pop(1)
0xd33: Return(); Pop(6)

0xd34: PushEmpty(bool, bool)
0xd35: PushEmpty(bool)
0xd36: Call2 0xdce

0xd37: Pop(0)
0xd38: IF (Stack[-1] == 0) GOTO 0xd41; Pop(1)

0xd39: @ lshHasSpeech(Stack[-1], Stack[-3])
0xd3a: Pop(0)
0xd3b: Push(Stack[-1])
0xd3c: IF (Stack[-1] == 0) GOTO 0xd41; Pop(1)

0xd3d: @ lshPlaySpeech(Stack[-3])
0xd3e: Pop(0)
0xd3f: Stack[-4] = (bool) 1
0xd40: Return(); Pop(2)

0xd41: Stack[-4] = (bool) 0
0xd42: Return(); Pop(2)

0xd43: PushEmpty(bool)
0xd44: Call2 0xdce

0xd45: Pop(0)
0xd46: IF (Stack[-1] == 0) GOTO 0xd49; Pop(1)

0xd47: @ lshStopSpeech()
0xd48: Pop(0)
0xd49: Return(); Pop(0)

0xd4a: PushEmpty(object, object)
0xd4b: @ self(Stack[-1])
0xd4c: Pop(0)
0xd4d: Stack[-3] = Stack[-1]
0xd4e: Return(); Pop(2)

0xd4f: Stack[-1] = 0
0xd50: PushEmpty(float, float)
0xd51: Pop(0); Push(Stack[-3] | Stack[-3]);
0xd52: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xd53: Push((float)0.0)
0xd54: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xd55: IF (Stack[-1] == 0) GOTO 0xd58; Pop(1)

0xd56: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xd57: Return(); Pop(2)

0xd58: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xd59: Return(); Pop(2)

0xd5a: PushEmpty(int, int)
0xd5b: @ GetVariable(Stack[-3], Stack[-1])
0xd5c: Pop(0)
0xd5d: Stack[-4] = Stack[-1]
0xd5e: Return(); Pop(2)

0xd5f: PushEmpty(object, object)
0xd60: @ CreateIntVector(Stack[-1])
0xd61: Pop(0)
0xd62: @@ add(Stack[-4])
0xd63: Pop(0)
0xd64: @@ add(Stack[-3])
0xd65: Pop(0)
0xd66: Push((int) 3)
0xd67: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xd68: Pop(1)
0xd69: Return(); Pop(2)

0xd6a: Stack[-1] = 0
0xd6b: PushEmpty(int, int, bool, int, int, bool)
0xd6c: @@ GetItemID(Stack[-3])
0xd6d: Pop(0)
0xd6e: Push("Category")
0xd6f: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xd70: Pop(1)
0xd71: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xd72: Pop(0)
0xd73: Pop(0); Push((bool) Stack[-1] == 0)
0xd74: IF (Stack[-1] == 0) GOTO 0xd78; Pop(1)

0xd75: @@ DropItems(Stack[-8], Stack[-7])
0xd76: Pop(0)
0xd77: GOTO 0xd7d

0xd78: PushEmpty(int, int)
0xd79: Stack[-2] = Stack[-5]
0xd7a: Stack[-1] = Stack[-9]
0xd7b: Call2 0xd5f

0xd7c: Pop(2)
0xd7d: Return(); Pop(6)

0xd7e: PushEmpty(object, object)
0xd7f: @ CreateInvItem(Stack[-1])
0xd80: Pop(0)
0xd81: @@ SetItemName(Stack[-4])
0xd82: Pop(0)
0xd83: PushEmpty(object, object, int)
0xd84: Stack[-3] = Stack[-8]
0xd85: Stack[-2] = Stack[-4]
0xd86: Stack[-1] = Stack[-6]
0xd87: Call2 0xd6b

0xd88: Pop(3)
0xd89: Return(); Pop(2)

0xd8a: Stack[-1] = 0
0xd8b: PushEmpty(object, object)
0xd8c: @ FindActor(Stack[-1], Stack[-4])
0xd8d: Pop(0)
0xd8e: Pop(0); Push((bool) Stack[-1] == 0)
0xd8f: IF (Stack[-1] == 0) GOTO 0xd92; Pop(1)

0xd90: Stack[-5] = (bool) 0
0xd91: Return(); Pop(2)

0xd92: @ Trigger(Stack[-1], Stack[-3])
0xd93: Pop(0)
0xd94: Stack[-5] = (bool) 1
0xd95: Return(); Pop(2)

0xd96: Stack[-1] = 0
0xd97: PushEmpty(float, float)
0xd98: @ GetGameTime(Stack[-1])
0xd99: Pop(0)
0xd9a: Push((int) 1)
0xd9b: PushEmpty(int)
0xd9c: Push((int) 24)
0xd9d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xd9e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xd9f: Return(); Pop(2)

0xda0: PushEmpty(float, float)
0xda1: @ GetGameTime(Stack[-1])
0xda2: Pop(0)
0xda3: PushEmpty(int)
0xda4: Stack[-1] = Stack[-2]
0xda5: Push((int) 24)
0xda6: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xda7: Return(); Pop(2)

0xda8: PushEmpty()
0xda9: PushEmpty(int)
0xdaa: Call2 0xd97

0xdab: Pop(0)
0xdac: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xdad: Return(); Pop(0)

0xdae: PushEmpty(string, string)
0xdaf: Stack[-1] = "idle"
0xdb0: Push(Stack[-3])
0xdb1: IF (Stack[-1] == 0) GOTO 0xdb3; Pop(1)

0xdb2: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xdb3: Stack[-4] = Stack[-1]
0xdb4: Return(); Pop(2)

0xdb5: PushEmpty(int, bool, int, bool)
0xdb6: Stack[-2] = (int) 0
0xdb7: Push("all")
0xdb8: PushEmpty(string, int)
0xdb9: Stack[-1] = Stack[-5]
0xdba: Call2 0xdae

0xdbb: Pop(1)
0xdbc: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xdbd: Pop(2)
0xdbe: Pop(0); Push((bool) Stack[-1] == 0)
0xdbf: IF (Stack[-1] == 0) GOTO 0xdc1; Pop(1)

0xdc0: GOTO 0xdc4

0xdc1: Push((int) 1)
0xdc2: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xdc3: GOTO 0xdb7

0xdc4: Stack[-5] = Stack[-2]
0xdc5: Return(); Pop(4)

0xdc6: Stack[-1] = (int) 515532
0xdc7: Return(); Pop(0)

0xdc8: Stack[-1] = (int) 514840
0xdc9: Return(); Pop(0)

0xdca: Stack[-1] = "ui/NPC_Block.png"
0xdcb: Return(); Pop(0)

0xdcc: Stack[-1] = "ui/NPC_Block_b.png"
0xdcd: Return(); Pop(0)

0xdce: Stack[-1] = (bool) 1
0xdcf: Return(); Pop(0)

0xdd0: PushEmpty()
0xdd1: Push("playsound")
0xdd2: Push("giveitem")
0xdd3: @ TriggerWorld(Stack[-2], Stack[-1])
0xdd4: Pop(2)
0xdd5: Return(); Pop(0)

0xdd6: PushEmpty()
0xdd7: Push("ood9Block3")
0xdd8: Push((int) 1)
0xdd9: @ SetVariable(Stack[-2], Stack[-1])
0xdda: Pop(2)
0xddb: Return(); Pop(0)

0xddc: PushEmpty()
0xddd: Push("d9q02")
0xdde: Push((int) 2)
0xddf: @ SetVariable(Stack[-2], Stack[-1])
0xde0: Pop(2)
0xde1: PushEmpty()
0xde2: Call2 0xf19

0xde3: Pop(0)
0xde4: PushEmpty(bool, string, string)
0xde5: Stack[-2] = "quest_d9_02"
0xde6: Stack[-1] = "init_soldiers"
0xde7: Call2 0xd8b

0xde8: Pop(3)
0xde9: Return(); Pop(0)

0xdea: PushEmpty()
0xdeb: Push("d9LaraIsSaved")
0xdec: Push((int) 1)
0xded: @ SetVariable(Stack[-2], Stack[-1])
0xdee: Pop(2)
0xdef: Return(); Pop(0)

0xdf0: PushEmpty()
0xdf1: PushEmpty()
0xdf2: Call2 0xf0c

0xdf3: Pop(0)
0xdf4: PushEmpty(bool, string, string)
0xdf5: Stack[-2] = "quest_d10_03"
0xdf6: Stack[-1] = "place_sanitars"
0xdf7: Call2 0xd8b

0xdf8: Pop(3)
0xdf9: PushEmpty(bool, string, string)
0xdfa: Stack[-2] = "quest_d10_03"
0xdfb: Stack[-1] = "completed"
0xdfc: Call2 0xd8b

0xdfd: Pop(3)
0xdfe: Return(); Pop(0)

0xdff: PushEmpty()
0xe00: Push("ood12Block1")
0xe01: Push((int) 1)
0xe02: @ SetVariable(Stack[-2], Stack[-1])
0xe03: Pop(2)
0xe04: Return(); Pop(0)

0xe05: PushEmpty()
0xe06: Push("d11RotaTalk")
0xe07: Push((int) 1)
0xe08: @ SetVariable(Stack[-2], Stack[-1])
0xe09: Pop(2)
0xe0a: Return(); Pop(0)

0xe0b: PushEmpty()
0xe0c: Push("d9TalkToPolkovodec")
0xe0d: Push((int) 1)
0xe0e: @ SetVariable(Stack[-2], Stack[-1])
0xe0f: Pop(2)
0xe10: Return(); Pop(0)

0xe11: PushEmpty()
0xe12: Push("ood9Block1")
0xe13: Push((int) 1)
0xe14: @ SetVariable(Stack[-2], Stack[-1])
0xe15: Pop(2)
0xe16: Return(); Pop(0)

0xe17: PushEmpty(object, object)
0xe18: Push("Rifle is given")
0xe19: @ Trace(Stack[-1])
0xe1a: Pop(1)
0xe1b: @ CreateInvItem(Stack[-1])
0xe1c: Pop(0)
0xe1d: Push("Rifle")
0xe1e: @@ SetItemName(Stack[-1])
0xe1f: Pop(1)
0xe20: Push("durability")
0xe21: Push((int) 100)
0xe22: @@ SetProperty(Stack[-2], Stack[-1])
0xe23: Pop(2)
0xe24: PushEmpty(object, object, int)
0xe25: Stack[-3] = Stack[-7]
0xe26: Stack[-2] = Stack[-4]
0xe27: Stack[-1] = (int) 1
0xe28: Call2 0xd6b

0xe29: Pop(3)
0xe2a: Return(); Pop(2)

0xe2b: Stack[-1] = 0
0xe2c: PushEmpty()
0xe2d: Push("ood11Block1")
0xe2e: Push((int) 1)
0xe2f: @ SetVariable(Stack[-2], Stack[-1])
0xe30: Pop(2)
0xe31: Return(); Pop(0)

0xe32: PushEmpty()
0xe33: Push("ood11Block2")
0xe34: Push((int) 1)
0xe35: @ SetVariable(Stack[-2], Stack[-1])
0xe36: Pop(2)
0xe37: Return(); Pop(0)

0xe38: PushEmpty()
0xe39: Push("ood11Block3")
0xe3a: Push((int) 1)
0xe3b: @ SetVariable(Stack[-2], Stack[-1])
0xe3c: Pop(2)
0xe3d: Return(); Pop(0)

0xe3e: PushEmpty()
0xe3f: Push("rifle ammo10 is given")
0xe40: @ Trace(Stack[-1])
0xe41: Pop(1)
0xe42: PushEmpty(object, string, int)
0xe43: Stack[-3] = Stack[-5]
0xe44: Stack[-2] = "rifle_ammo"
0xe45: Stack[-1] = (int) 10
0xe46: Call2 0xd7e

0xe47: Pop(3)
0xe48: Return(); Pop(0)

0xe49: PushEmpty()
0xe4a: Push("ood9Block2")
0xe4b: Push((int) 1)
0xe4c: @ SetVariable(Stack[-2], Stack[-1])
0xe4d: Pop(2)
0xe4e: Return(); Pop(0)

0xe4f: PushEmpty()
0xe50: PushEmpty(bool, object)
0xe51: Stack[-1] = Stack[-3]
0xe52: Call2 0xf01

0xe53: Pop(1)
0xe54: IF (Stack[-1] == 0) GOTO 0xe57; Pop(1)

0xe55: Stack[-2] = (bool) 1
0xe56: Return(); Pop(0)

0xe57: Stack[-2] = (bool) 0
0xe58: Return(); Pop(0)

0xe59: PushEmpty()
0xe5a: PushEmpty(int, string)
0xe5b: Stack[-1] = "d8q01"
0xe5c: Call2 0xd5a

0xe5d: Pop(1)
0xe5e: Push((int) 1000)
0xe5f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe60: IF (Stack[-1] == 0) GOTO 0xe63; Pop(1)

0xe61: Stack[-2] = (bool) 1
0xe62: Return(); Pop(0)

0xe63: Stack[-2] = (bool) 0
0xe64: Return(); Pop(0)

0xe65: PushEmpty()
0xe66: PushEmpty(int, string)
0xe67: Stack[-1] = "ood9Block3"
0xe68: Call2 0xd5a

0xe69: Pop(1)
0xe6a: Push((int) 0)
0xe6b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe6c: IF (Stack[-1] == 0) GOTO 0xe6f; Pop(1)

0xe6d: Stack[-2] = (bool) 1
0xe6e: Return(); Pop(0)

0xe6f: Stack[-2] = (bool) 0
0xe70: Return(); Pop(0)

0xe71: PushEmpty()
0xe72: PushEmpty(int, string)
0xe73: Stack[-1] = "d9q02"
0xe74: Call2 0xd5a

0xe75: Pop(1)
0xe76: Push((int) 1)
0xe77: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe78: IF (Stack[-1] == 0) GOTO 0xe7b; Pop(1)

0xe79: Stack[-2] = (bool) 1
0xe7a: Return(); Pop(0)

0xe7b: Stack[-2] = (bool) 0
0xe7c: Return(); Pop(0)

0xe7d: PushEmpty()
0xe7e: PushEmpty(int, string)
0xe7f: Stack[-1] = "d10q03"
0xe80: Call2 0xd5a

0xe81: Pop(1)
0xe82: Push((int) 3)
0xe83: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe84: IF (Stack[-1] == 0) GOTO 0xe87; Pop(1)

0xe85: Stack[-2] = (bool) 1
0xe86: Return(); Pop(0)

0xe87: Stack[-2] = (bool) 0
0xe88: Return(); Pop(0)

0xe89: PushEmpty()
0xe8a: PushEmpty(int, string)
0xe8b: Stack[-1] = "ood12Block1"
0xe8c: Call2 0xd5a

0xe8d: Pop(1)
0xe8e: Push((int) 0)
0xe8f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe90: IF (Stack[-1] == 0) GOTO 0xe93; Pop(1)

0xe91: Stack[-2] = (bool) 1
0xe92: Return(); Pop(0)

0xe93: Stack[-2] = (bool) 0
0xe94: Return(); Pop(0)

0xe95: PushEmpty()
0xe96: PushEmpty(int, string)
0xe97: Stack[-1] = "d9q01"
0xe98: Call2 0xd5a

0xe99: Pop(1)
0xe9a: Push((int) 2)
0xe9b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe9c: IF (Stack[-1] == 0) GOTO 0xe9f; Pop(1)

0xe9d: Stack[-2] = (bool) 1
0xe9e: Return(); Pop(0)

0xe9f: Stack[-2] = (bool) 0
0xea0: Return(); Pop(0)

0xea1: PushEmpty()
0xea2: PushEmpty(int, string)
0xea3: Stack[-1] = "ood9Block1"
0xea4: Call2 0xd5a

0xea5: Pop(1)
0xea6: Push((int) 0)
0xea7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xea8: IF (Stack[-1] == 0) GOTO 0xeab; Pop(1)

0xea9: Stack[-2] = (bool) 1
0xeaa: Return(); Pop(0)

0xeab: Stack[-2] = (bool) 0
0xeac: Return(); Pop(0)

0xead: PushEmpty()
0xeae: PushEmpty(int, string)
0xeaf: Stack[-1] = "d11q02"
0xeb0: Call2 0xd5a

0xeb1: Pop(1)
0xeb2: Push((int) 1)
0xeb3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xeb4: IF (Stack[-1] == 0) GOTO 0xeb7; Pop(1)

0xeb5: Stack[-2] = (bool) 1
0xeb6: Return(); Pop(0)

0xeb7: Stack[-2] = (bool) 0
0xeb8: Return(); Pop(0)

0xeb9: PushEmpty()
0xeba: PushEmpty(int, string)
0xebb: Stack[-1] = "d11q01"
0xebc: Call2 0xd5a

0xebd: Pop(1)
0xebe: Push((int) 2)
0xebf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xec0: IF (Stack[-1] == 0) GOTO 0xec3; Pop(1)

0xec1: Stack[-2] = (bool) 1
0xec2: Return(); Pop(0)

0xec3: Stack[-2] = (bool) 0
0xec4: Return(); Pop(0)

0xec5: PushEmpty()
0xec6: PushEmpty(int, string)
0xec7: Stack[-1] = "ood11Block1"
0xec8: Call2 0xd5a

0xec9: Pop(1)
0xeca: Push((int) 0)
0xecb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xecc: IF (Stack[-1] == 0) GOTO 0xecf; Pop(1)

0xecd: Stack[-2] = (bool) 1
0xece: Return(); Pop(0)

0xecf: Stack[-2] = (bool) 0
0xed0: Return(); Pop(0)

0xed1: PushEmpty()
0xed2: PushEmpty(int, string)
0xed3: Stack[-1] = "d11q01"
0xed4: Call2 0xd5a

0xed5: Pop(1)
0xed6: Push((int) 3)
0xed7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xed8: IF (Stack[-1] == 0) GOTO 0xedb; Pop(1)

0xed9: Stack[-2] = (bool) 1
0xeda: Return(); Pop(0)

0xedb: Stack[-2] = (bool) 0
0xedc: Return(); Pop(0)

0xedd: PushEmpty()
0xede: PushEmpty(int, string)
0xedf: Stack[-1] = "ood11Block2"
0xee0: Call2 0xd5a

0xee1: Pop(1)
0xee2: Push((int) 0)
0xee3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xee4: IF (Stack[-1] == 0) GOTO 0xee7; Pop(1)

0xee5: Stack[-2] = (bool) 1
0xee6: Return(); Pop(0)

0xee7: Stack[-2] = (bool) 0
0xee8: Return(); Pop(0)

0xee9: PushEmpty()
0xeea: PushEmpty(int, string)
0xeeb: Stack[-1] = "ood11Block3"
0xeec: Call2 0xd5a

0xeed: Pop(1)
0xeee: Push((int) 0)
0xeef: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xef0: IF (Stack[-1] == 0) GOTO 0xef3; Pop(1)

0xef1: Stack[-2] = (bool) 1
0xef2: Return(); Pop(0)

0xef3: Stack[-2] = (bool) 0
0xef4: Return(); Pop(0)

0xef5: PushEmpty()
0xef6: PushEmpty(int, string)
0xef7: Stack[-1] = "ood9Block2"
0xef8: Call2 0xd5a

0xef9: Pop(1)
0xefa: Push((int) 0)
0xefb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xefc: IF (Stack[-1] == 0) GOTO 0xeff; Pop(1)

0xefd: Stack[-2] = (bool) 1
0xefe: Return(); Pop(0)

0xeff: Stack[-2] = (bool) 0
0xf00: Return(); Pop(0)

0xf01: PushEmpty()
0xf02: PushEmpty(int)
0xf03: Call2 0xda0

0xf04: Pop(0)
0xf05: Push((int) 19)
0xf06: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xf07: IF (Stack[-1] == 0) GOTO 0xf0a; Pop(1)

0xf08: Stack[-2] = (bool) 1
0xf09: Return(); Pop(0)

0xf0a: Stack[-2] = (bool) 0
0xf0b: Return(); Pop(0)

0xf0c: PushEmpty(object, object)
0xf0d: Push((int) 676)
0xf0e: Push((int) 2)
0xf0f: Push((int) 534161)
0xf10: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf11: Pop(3)
0xf12: PushEmpty(bool, object, int)
0xf13: Stack[-2] = Stack[-4]
0xf14: Stack[-1] = (int) 672
0xf15: Call2 0xf33

0xf16: Pop(3)
0xf17: Return(); Pop(2)

0xf18: Stack[-1] = 0
0xf19: PushEmpty(object, object)
0xf1a: Push((int) 657)
0xf1b: Push((int) 2)
0xf1c: Push((int) 533575)
0xf1d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf1e: Pop(3)
0xf1f: PushEmpty(bool, object, int)
0xf20: Stack[-2] = Stack[-4]
0xf21: Stack[-1] = (int) 655
0xf22: Call2 0xf33

0xf23: Pop(3)
0xf24: Return(); Pop(2)

0xf25: Stack[-1] = 0
0xf26: PushEmpty(object, object)
0xf27: @ GetDiaryRoot(Stack[-1])
0xf28: Pop(0)
0xf29: Pop(0); Push((bool) Stack[-1] == 0)
0xf2a: IF (Stack[-1] == 0) GOTO 0xf30; Pop(1)

0xf2b: Push("Can't retrieve diary root")
0xf2c: @ Trace(Stack[-1])
0xf2d: Pop(1)
0xf2e: Stack[-3] = (bool) 0
0xf2f: Return(); Pop(2)

0xf30: Stack[-3] = Stack[-1]
0xf31: Return(); Pop(2)

0xf32: Stack[-1] = 0
0xf33: PushEmpty(object, object, int, object, object, int)
0xf34: PushEmpty(object)
0xf35: Call2 0xf26

0xf36: Stack[-4] = Stack[-1]
0xf37: Pop(1)
0xf38: @@ Find(Stack[-7], Stack[-2])
0xf39: Pop(0)
0xf3a: Pop(0); Push((bool) Stack[-2] == 0)
0xf3b: IF (Stack[-1] == 0) GOTO 0xf42; Pop(1)

0xf3c: Push("Can't find diary parent with id: ")
0xf3d: Pop(1); Push(Stack[-1] + Stack[-8]);
0xf3e: @ Trace(Stack[-1])
0xf3f: Pop(1)
0xf40: Stack[-9] = (bool) 0
0xf41: Return(); Pop(6)

0xf42: @@ AddChild(Stack[-8])
0xf43: Pop(0)
0xf44: Push((int) 7)
0xf45: @ SendWorldWndMessage(Stack[-1])
0xf46: Pop(1)
0xf47: @@ GetCategory(Stack[-1])
0xf48: Pop(0)
0xf49: @ SetDiarySection(Stack[-1])
0xf4a: Pop(0)
0xf4b: Stack[-9] = (bool) 0
0xf4c: Return(); Pop(6)

0xf4d: Stack[-2] = 0
0xf4e: Stack[-3] = 0
0xf4f: PushEmpty(int, int)
0xf50: Push("branch")
0xf51: @ GetVariable(Stack[-1], Stack[-2])
0xf52: Pop(1)
0xf53: Push((int) 0)
0xf54: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf55: IF (Stack[-1] == 0) GOTO 0xf59; Pop(1)

0xf56: Stack[-3] = (int) 1
0xf57: Return(); Pop(2)

0xf58: GOTO 0xf5e

0xf59: Push((int) 1)
0xf5a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf5b: IF (Stack[-1] == 0) GOTO 0xf5e; Pop(1)

0xf5c: Stack[-3] = (int) 2
0xf5d: Return(); Pop(2)

0xf5e: Stack[-3] = (int) 3
0xf5f: Return(); Pop(2)

0xf60: PushEmpty()
0xf61: PushEmpty(bool, int)
0xf62: Stack[-1] = (int) 9
0xf63: Call2 0xda8

0xf64: Pop(1)
0xf65: IF (Stack[-1] == 0) GOTO 0xf6d; Pop(1)

0xf66: PushEmpty(int, object)
0xf67: Stack[-1] = Stack[-3]
0xf68: Push(-2, 1); TaskCall(4)
0xf69: Call2 0x372

0xf6a: Pop(-2, 1); TaskReturn
0xf6b: Pop(2)
0xf6c: Return(); Pop(0)

0xf6d: PushEmpty(bool, int)
0xf6e: Stack[-1] = (int) 10
0xf6f: Call2 0xda8

0xf70: Pop(1)
0xf71: IF (Stack[-1] == 0) GOTO 0xf79; Pop(1)

0xf72: PushEmpty(int, object)
0xf73: Stack[-1] = Stack[-3]
0xf74: Push(-2, 1); TaskCall(0)
0xf75: Call2 0x0

0xf76: Pop(-2, 1); TaskReturn
0xf77: Pop(2)
0xf78: Return(); Pop(0)

0xf79: PushEmpty(bool, int)
0xf7a: Stack[-1] = (int) 11
0xf7b: Call2 0xda8

0xf7c: Pop(1)
0xf7d: IF (Stack[-1] == 0) GOTO 0xf85; Pop(1)

0xf7e: PushEmpty(int, object)
0xf7f: Stack[-1] = Stack[-3]
0xf80: Push(-2, 1); TaskCall(6)
0xf81: Call2 0x74a

0xf82: Pop(-2, 1); TaskReturn
0xf83: Pop(2)
0xf84: Return(); Pop(0)

0xf85: PushEmpty(bool, int)
0xf86: Stack[-1] = (int) 12
0xf87: Call2 0xda8

0xf88: Pop(1)
0xf89: IF (Stack[-1] == 0) GOTO 0xf91; Pop(1)

0xf8a: PushEmpty(int, object)
0xf8b: Stack[-1] = Stack[-3]
0xf8c: Push(-2, 1); TaskCall(2)
0xf8d: Call2 0x198

0xf8e: Pop(-2, 1); TaskReturn
0xf8f: Pop(2)
0xf90: Return(); Pop(0)

0xf91: PushEmpty(int, object)
0xf92: Stack[-1] = Stack[-3]
0xf93: Push(-2, 1); TaskCall(8)
0xf94: Call2 0xa4b

0xf95: Pop(-2, 1); TaskReturn
0xf96: Pop(2)
0xf97: Return(); Pop(0)

