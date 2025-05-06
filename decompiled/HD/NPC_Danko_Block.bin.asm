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
	Untrust
	Doubt
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
		EVENT_11 Op = 0xdb Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4ad Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x784 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x949 Vars = (int, int)
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
0xe: Call2 0xdca

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xdc8

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xdcc

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xdce

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xf51

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
0x31: Call2 0xd4c

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xc8d

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
0x48: Call2 0xc7b

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
0x56: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0x57: PushEmpty(object, object)
0x58: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x59: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a: Call2 0xe0d

0x5b: Pop(2)
0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral"
0x5e: Call2 0xc5

0x5f: Pop(1)
0x60: Push((int) 513882)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: PushEmpty(bool)
0x66: Stack[-1] = (bool) 0
0x67: PushEmpty(bool, object)
0x68: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69: Call2 0xe5b

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6c: PushEmpty(bool, object)
0x6d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e: Call2 0xe67

0x6f: Pop(1)
0x70: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x71: Stack[-1] = (bool) 1
0x72: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x73: Push((int) 513883)
0x74: Push((int) 15111)
0x75: Push((int) 15110)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: PushEmpty(bool)
0x79: Stack[-1] = (bool) 0
0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0xe97

0x7d: Pop(1)
0x7e: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x7f: PushEmpty(bool, object)
0x80: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x81: Call2 0xea3

0x82: Pop(1)
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: Stack[-1] = (bool) 1
0x85: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x86: Push((int) 513906)
0x87: Push((int) 15138)
0x88: Push((int) 15137)
0x89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a: Pop(3)
0x8b: PushEmpty(bool, object)
0x8c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d: Call2 0xef7

0x8e: Pop(1)
0x8f: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x90: Push((int) 513924)
0x91: Push((int) 15156)
0x92: Push((int) 15155)
0x93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94: Pop(3)
0x95: PushEmpty(bool, object)
0x96: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97: Call2 0xe73

0x98: Pop(1)
0x99: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9a: Push((int) 533537)
0x9b: Push((int) 35070)
0x9c: Push((int) 35069)
0x9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e: Pop(3)
0x9f: Push((int) 513947)
0xa0: Push((int) -1)
0xa1: Push((int) 15182)
0xa2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3: Pop(3)
0xa4: GOTO 0xa7

0xa5: Return(); Pop(0)

0xa6: GOTO 0x55

0xa7: PushEmpty(bool)
0xa8: Call2 0xdd0

0xa9: Pop(0)
0xaa: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xab: @ lshWaitForAnimEnd()
0xac: Pop(0)
0xad: Push( Stack[3 + Tasks[-1].StackPointer] )
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: GOTO 0xb5

0xb0: PushEmpty(string)
0xb1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb2: Call2 0xd17

0xb3: Pop(1)
0xb4: GOTO 0xab

0xb5: GOTO 0xc4

0xb6: Push("all")
0xb7: Push("idle")
0xb8: @ PlayAnimation(Stack[-2], Stack[-1])
0xb9: Pop(2)
0xba: @ WaitForAnimEnd()
0xbb: Pop(0)
0xbc: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbd: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbe: GOTO 0xc4

0xbf: Push("all")
0xc0: Push("idle")
0xc1: @ PlayAnimation(Stack[-2], Stack[-1])
0xc2: Pop(2)
0xc3: GOTO 0xba

0xc4: Return(); Pop(0)

0xc5: PushEmpty()
0xc6: PushEmpty(bool)
0xc7: Call2 0xdd0

0xc8: Pop(0)
0xc9: Pop(1); Push((bool) Stack[-1] == 0)
0xca: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xcb: Return(); Pop(0)

0xcc: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xcd: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xce: Return(); Pop(0)

0xcf: PushEmpty(string, bool)
0xd0: Stack[-2] = Stack[-3]
0xd1: Push("")
0xd2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd4: Stack[-1] = (bool) 0
0xd5: GOTO 0xd7

0xd6: Stack[-1] = (bool) 1
0xd7: Call2 0xd27

0xd8: Pop(2)
0xd9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xda: Return(); Pop(0)

0xdb: PushEmpty()
0xdc: Push((int) 1)
0xdd: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0xde: PushEmpty()
0xdf: Call2 0xd45

0xe0: Pop(0)
0xe1: Push((int) 15110)
0xe2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe4: PushEmpty(object, object)
0xe5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe7: Call2 0xdd8

0xe8: Pop(2)
0xe9: Push((int) 15137)
0xea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xec: PushEmpty(object, object)
0xed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xef: Call2 0xe13

0xf0: Pop(2)
0xf1: Push((int) 15149)
0xf2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xf4: PushEmpty(object, object)
0xf5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf7: Call2 0xe19

0xf8: Pop(2)
0xf9: PushEmpty(object, object)
0xfa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfc: Call2 0xdd2

0xfd: Pop(2)
0xfe: PushEmpty(object, object)
0xff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x100: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101: Call2 0xe40

0x102: Pop(2)
0x103: Push((int) 15150)
0x104: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x106: PushEmpty(object, object)
0x107: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x108: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x109: Call2 0xe19

0x10a: Pop(2)
0x10b: PushEmpty(object, object)
0x10c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10e: Call2 0xdd2

0x10f: Pop(2)
0x110: PushEmpty(object, object)
0x111: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x112: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x113: Call2 0xe40

0x114: Pop(2)
0x115: Push((int) 15155)
0x116: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11b: Call2 0xe4b

0x11c: Pop(2)
0x11d: Push((int) 35071)
0x11e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x120: PushEmpty(object, object)
0x121: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x122: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x123: Call2 0xdde

0x124: Pop(2)
0x125: PushEmpty(object, object)
0x126: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x127: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x128: Call2 0xdec

0x129: Pop(2)
0x12a: Push((int) 15109)
0x12b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x12d: PushEmpty(object, object)
0x12e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x130: Call2 0xe0d

0x131: Pop(2)
0x132: PushEmpty(string)
0x133: Stack[-1] = "Neutral"
0x134: Call2 0xc5

0x135: Pop(1)
0x136: Push((int) 513882)
0x137: @@ SetMessage(Stack[-1])
0x138: Pop(1)
0x139: @@ ClearReplies()
0x13a: Pop(0)
0x13b: PushEmpty(bool)
0x13c: Stack[-1] = (bool) 0
0x13d: PushEmpty(bool, object)
0x13e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13f: Call2 0xe5b

0x140: Pop(1)
0x141: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x142: PushEmpty(bool, object)
0x143: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x144: Call2 0xe67

0x145: Pop(1)
0x146: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x147: Stack[-1] = (bool) 1
0x148: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x149: Push((int) 513883)
0x14a: Push((int) 15111)
0x14b: Push((int) 15110)
0x14c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14d: Pop(3)
0x14e: PushEmpty(bool)
0x14f: Stack[-1] = (bool) 0
0x150: PushEmpty(bool, object)
0x151: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x152: Call2 0xe97

0x153: Pop(1)
0x154: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x155: PushEmpty(bool, object)
0x156: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x157: Call2 0xea3

0x158: Pop(1)
0x159: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x15a: Stack[-1] = (bool) 1
0x15b: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15c: Push((int) 513906)
0x15d: Push((int) 15138)
0x15e: Push((int) 15137)
0x15f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x160: Pop(3)
0x161: PushEmpty(bool, object)
0x162: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x163: Call2 0xef7

0x164: Pop(1)
0x165: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x166: Push((int) 513924)
0x167: Push((int) 15156)
0x168: Push((int) 15155)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: PushEmpty(bool, object)
0x16c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16d: Call2 0xe73

0x16e: Pop(1)
0x16f: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x170: Push((int) 533537)
0x171: Push((int) 35070)
0x172: Push((int) 35069)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: Push((int) 513947)
0x176: Push((int) -1)
0x177: Push((int) 15182)
0x178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: Return(); Pop(0)

0x17b: Push((int) 35070)
0x17c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x17e: PushEmpty(string)
0x17f: Stack[-1] = "Neutral"
0x180: Call2 0xc5

0x181: Pop(1)
0x182: Push((int) 533538)
0x183: @@ SetMessage(Stack[-1])
0x184: Pop(1)
0x185: @@ ClearReplies()
0x186: Pop(0)
0x187: Push((int) 536553)
0x188: Push((int) 38366)
0x189: Push((int) 38365)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: Push((int) 536557)
0x18d: Push((int) -1)
0x18e: Push((int) 38369)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Return(); Pop(0)

0x192: Push((int) 38366)
0x193: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x195: PushEmpty(string)
0x196: Stack[-1] = "Neutral"
0x197: Call2 0xc5

0x198: Pop(1)
0x199: Push((int) 536554)
0x19a: @@ SetMessage(Stack[-1])
0x19b: Pop(1)
0x19c: @@ ClearReplies()
0x19d: Pop(0)
0x19e: Push((int) 536555)
0x19f: Push((int) 38368)
0x1a0: Push((int) 38367)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Push((int) 536558)
0x1a4: Push((int) 38368)
0x1a5: Push((int) 38370)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: Return(); Pop(0)

0x1a9: Push((int) 38368)
0x1aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ac: PushEmpty(string)
0x1ad: Stack[-1] = "Neutral"
0x1ae: Call2 0xc5

0x1af: Pop(1)
0x1b0: Push((int) 536556)
0x1b1: @@ SetMessage(Stack[-1])
0x1b2: Pop(1)
0x1b3: @@ ClearReplies()
0x1b4: Pop(0)
0x1b5: Push((int) 536559)
0x1b6: Push((int) 38372)
0x1b7: Push((int) 38371)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: Return(); Pop(0)

0x1bb: Push((int) 38372)
0x1bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1be: PushEmpty(string)
0x1bf: Stack[-1] = "Neutral"
0x1c0: Call2 0xc5

0x1c1: Pop(1)
0x1c2: Push((int) 536560)
0x1c3: @@ SetMessage(Stack[-1])
0x1c4: Pop(1)
0x1c5: @@ ClearReplies()
0x1c6: Pop(0)
0x1c7: Push((int) 533539)
0x1c8: Push((int) -1)
0x1c9: Push((int) 35071)
0x1ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cb: Pop(3)
0x1cc: Return(); Pop(0)

0x1cd: Push((int) 15156)
0x1ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1d0: PushEmpty(string)
0x1d1: Stack[-1] = "Neutral"
0x1d2: Call2 0xc5

0x1d3: Pop(1)
0x1d4: Push((int) 513925)
0x1d5: @@ SetMessage(Stack[-1])
0x1d6: Pop(1)
0x1d7: @@ ClearReplies()
0x1d8: Pop(0)
0x1d9: Push((int) 513926)
0x1da: Push((int) 15158)
0x1db: Push((int) 15157)
0x1dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dd: Pop(3)
0x1de: Push((int) 513946)
0x1df: Push((int) 15158)
0x1e0: Push((int) 15180)
0x1e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e2: Pop(3)
0x1e3: Return(); Pop(0)

0x1e4: Push((int) 15158)
0x1e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1e7: PushEmpty(string)
0x1e8: Stack[-1] = "Untrust"
0x1e9: Call2 0xc5

0x1ea: Pop(1)
0x1eb: Push((int) 513927)
0x1ec: @@ SetMessage(Stack[-1])
0x1ed: Pop(1)
0x1ee: @@ ClearReplies()
0x1ef: Pop(0)
0x1f0: Push((int) 513928)
0x1f1: Push((int) 15160)
0x1f2: Push((int) 15159)
0x1f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f4: Pop(3)
0x1f5: Push((int) 513945)
0x1f6: Push((int) 15160)
0x1f7: Push((int) 15178)
0x1f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f9: Pop(3)
0x1fa: Return(); Pop(0)

0x1fb: Push((int) 15160)
0x1fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x1fe: PushEmpty(string)
0x1ff: Stack[-1] = "Untrust"
0x200: Call2 0xc5

0x201: Pop(1)
0x202: Push((int) 513929)
0x203: @@ SetMessage(Stack[-1])
0x204: Pop(1)
0x205: @@ ClearReplies()
0x206: Pop(0)
0x207: Push((int) 513930)
0x208: Push((int) 15162)
0x209: Push((int) 15161)
0x20a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20b: Pop(3)
0x20c: Push((int) 513944)
0x20d: Push((int) 15162)
0x20e: Push((int) 15176)
0x20f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x210: Pop(3)
0x211: Return(); Pop(0)

0x212: Push((int) 15162)
0x213: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x215: PushEmpty(string)
0x216: Stack[-1] = "Neutral"
0x217: Call2 0xc5

0x218: Pop(1)
0x219: Push((int) 513931)
0x21a: @@ SetMessage(Stack[-1])
0x21b: Pop(1)
0x21c: @@ ClearReplies()
0x21d: Pop(0)
0x21e: Push((int) 513932)
0x21f: Push((int) 15164)
0x220: Push((int) 15163)
0x221: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x222: Pop(3)
0x223: Push((int) 513941)
0x224: Push((int) 15173)
0x225: Push((int) 15172)
0x226: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x227: Pop(3)
0x228: Return(); Pop(0)

0x229: Push((int) 15173)
0x22a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22b: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x22c: PushEmpty(string)
0x22d: Stack[-1] = "Neutral"
0x22e: Call2 0xc5

0x22f: Pop(1)
0x230: Push((int) 513942)
0x231: @@ SetMessage(Stack[-1])
0x232: Pop(1)
0x233: @@ ClearReplies()
0x234: Pop(0)
0x235: Push((int) 513943)
0x236: Push((int) 15166)
0x237: Push((int) 15174)
0x238: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x239: Pop(3)
0x23a: Return(); Pop(0)

0x23b: Push((int) 15164)
0x23c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x23e: PushEmpty(string)
0x23f: Stack[-1] = "Neutral"
0x240: Call2 0xc5

0x241: Pop(1)
0x242: Push((int) 513933)
0x243: @@ SetMessage(Stack[-1])
0x244: Pop(1)
0x245: @@ ClearReplies()
0x246: Pop(0)
0x247: Push((int) 513934)
0x248: Push((int) 15166)
0x249: Push((int) 15165)
0x24a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24b: Pop(3)
0x24c: Return(); Pop(0)

0x24d: Push((int) 15166)
0x24e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x250: PushEmpty(string)
0x251: Stack[-1] = "Untrust"
0x252: Call2 0xc5

0x253: Pop(1)
0x254: Push((int) 513935)
0x255: @@ SetMessage(Stack[-1])
0x256: Pop(1)
0x257: @@ ClearReplies()
0x258: Pop(0)
0x259: Push((int) 513936)
0x25a: Push((int) 15168)
0x25b: Push((int) 15167)
0x25c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25d: Pop(3)
0x25e: Return(); Pop(0)

0x25f: Push((int) 15168)
0x260: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x262: PushEmpty(string)
0x263: Stack[-1] = "Neutral"
0x264: Call2 0xc5

0x265: Pop(1)
0x266: Push((int) 513937)
0x267: @@ SetMessage(Stack[-1])
0x268: Pop(1)
0x269: @@ ClearReplies()
0x26a: Pop(0)
0x26b: Push((int) 513938)
0x26c: Push((int) 15170)
0x26d: Push((int) 15169)
0x26e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26f: Pop(3)
0x270: Return(); Pop(0)

0x271: Push((int) 15170)
0x272: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x273: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x274: PushEmpty(string)
0x275: Stack[-1] = "Neutral"
0x276: Call2 0xc5

0x277: Pop(1)
0x278: Push((int) 513939)
0x279: @@ SetMessage(Stack[-1])
0x27a: Pop(1)
0x27b: @@ ClearReplies()
0x27c: Pop(0)
0x27d: Push((int) 513940)
0x27e: Push((int) -1)
0x27f: Push((int) 15171)
0x280: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x281: Pop(3)
0x282: Return(); Pop(0)

0x283: Push((int) 15138)
0x284: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x285: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x286: PushEmpty(string)
0x287: Stack[-1] = "Untrust"
0x288: Call2 0xc5

0x289: Pop(1)
0x28a: Push((int) 513907)
0x28b: @@ SetMessage(Stack[-1])
0x28c: Pop(1)
0x28d: @@ ClearReplies()
0x28e: Pop(0)
0x28f: Push((int) 513908)
0x290: Push((int) 15140)
0x291: Push((int) 15139)
0x292: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x293: Pop(3)
0x294: Return(); Pop(0)

0x295: Push((int) 15140)
0x296: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x298: PushEmpty(string)
0x299: Stack[-1] = "Untrust"
0x29a: Call2 0xc5

0x29b: Pop(1)
0x29c: Push((int) 513909)
0x29d: @@ SetMessage(Stack[-1])
0x29e: Pop(1)
0x29f: @@ ClearReplies()
0x2a0: Pop(0)
0x2a1: Push((int) 513910)
0x2a2: Push((int) 15142)
0x2a3: Push((int) 15141)
0x2a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a5: Pop(3)
0x2a6: Return(); Pop(0)

0x2a7: Push((int) 15142)
0x2a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2aa: PushEmpty(string)
0x2ab: Stack[-1] = "Neutral"
0x2ac: Call2 0xc5

0x2ad: Pop(1)
0x2ae: Push((int) 513911)
0x2af: @@ SetMessage(Stack[-1])
0x2b0: Pop(1)
0x2b1: @@ ClearReplies()
0x2b2: Pop(0)
0x2b3: Push((int) 513912)
0x2b4: Push((int) 15144)
0x2b5: Push((int) 15143)
0x2b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b7: Pop(3)
0x2b8: Push((int) 513920)
0x2b9: Push((int) 15152)
0x2ba: Push((int) 15151)
0x2bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bc: Pop(3)
0x2bd: Return(); Pop(0)

0x2be: Push((int) 15152)
0x2bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2c1: PushEmpty(string)
0x2c2: Stack[-1] = "Neutral"
0x2c3: Call2 0xc5

0x2c4: Pop(1)
0x2c5: Push((int) 513921)
0x2c6: @@ SetMessage(Stack[-1])
0x2c7: Pop(1)
0x2c8: @@ ClearReplies()
0x2c9: Pop(0)
0x2ca: Push((int) 513922)
0x2cb: Push((int) 15154)
0x2cc: Push((int) 15153)
0x2cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ce: Pop(3)
0x2cf: Return(); Pop(0)

0x2d0: Push((int) 15154)
0x2d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2d3: PushEmpty(string)
0x2d4: Stack[-1] = "Neutral"
0x2d5: Call2 0xc5

0x2d6: Pop(1)
0x2d7: Push((int) 513923)
0x2d8: @@ SetMessage(Stack[-1])
0x2d9: Pop(1)
0x2da: @@ ClearReplies()
0x2db: Pop(0)
0x2dc: Push((int) 514067)
0x2dd: Push((int) -1)
0x2de: Push((int) 15304)
0x2df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e0: Pop(3)
0x2e1: Return(); Pop(0)

0x2e2: Push((int) 15144)
0x2e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2e5: PushEmpty(string)
0x2e6: Stack[-1] = "Neutral"
0x2e7: Call2 0xc5

0x2e8: Pop(1)
0x2e9: Push((int) 513913)
0x2ea: @@ SetMessage(Stack[-1])
0x2eb: Pop(1)
0x2ec: @@ ClearReplies()
0x2ed: Pop(0)
0x2ee: Push((int) 513914)
0x2ef: Push((int) 15146)
0x2f0: Push((int) 15145)
0x2f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f2: Pop(3)
0x2f3: Push((int) 513919)
0x2f4: Push((int) -1)
0x2f5: Push((int) 15150)
0x2f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f7: Pop(3)
0x2f8: Return(); Pop(0)

0x2f9: Push((int) 15146)
0x2fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fb: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x2fc: PushEmpty(string)
0x2fd: Stack[-1] = "Neutral"
0x2fe: Call2 0xc5

0x2ff: Pop(1)
0x300: Push((int) 513915)
0x301: @@ SetMessage(Stack[-1])
0x302: Pop(1)
0x303: @@ ClearReplies()
0x304: Pop(0)
0x305: Push((int) 513916)
0x306: Push((int) 15148)
0x307: Push((int) 15147)
0x308: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x309: Pop(3)
0x30a: Return(); Pop(0)

0x30b: Push((int) 15148)
0x30c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30d: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x30e: PushEmpty(string)
0x30f: Stack[-1] = "Neutral"
0x310: Call2 0xc5

0x311: Pop(1)
0x312: Push((int) 513917)
0x313: @@ SetMessage(Stack[-1])
0x314: Pop(1)
0x315: @@ ClearReplies()
0x316: Pop(0)
0x317: Push((int) 513918)
0x318: Push((int) -1)
0x319: Push((int) 15149)
0x31a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31b: Pop(3)
0x31c: Return(); Pop(0)

0x31d: Push((int) 15111)
0x31e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31f: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x320: PushEmpty(string)
0x321: Stack[-1] = "Neutral"
0x322: Call2 0xc5

0x323: Pop(1)
0x324: Push((int) 513884)
0x325: @@ SetMessage(Stack[-1])
0x326: Pop(1)
0x327: @@ ClearReplies()
0x328: Pop(0)
0x329: Push((int) 513885)
0x32a: Push((int) 15113)
0x32b: Push((int) 15112)
0x32c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32d: Pop(3)
0x32e: Push((int) 513905)
0x32f: Push((int) 15113)
0x330: Push((int) 15135)
0x331: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x332: Pop(3)
0x333: Return(); Pop(0)

0x334: Push((int) 15113)
0x335: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x336: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x337: PushEmpty(string)
0x338: Stack[-1] = "Neutral"
0x339: Call2 0xc5

0x33a: Pop(1)
0x33b: Push((int) 513886)
0x33c: @@ SetMessage(Stack[-1])
0x33d: Pop(1)
0x33e: @@ ClearReplies()
0x33f: Pop(0)
0x340: Push((int) 513887)
0x341: Push((int) 15115)
0x342: Push((int) 15114)
0x343: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x344: Pop(3)
0x345: Push((int) 513899)
0x346: Push((int) 15128)
0x347: Push((int) 15127)
0x348: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x349: Pop(3)
0x34a: Return(); Pop(0)

0x34b: Push((int) 15128)
0x34c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34d: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x34e: PushEmpty(string)
0x34f: Stack[-1] = "Doubt"
0x350: Call2 0xc5

0x351: Pop(1)
0x352: Push((int) 513900)
0x353: @@ SetMessage(Stack[-1])
0x354: Pop(1)
0x355: @@ ClearReplies()
0x356: Pop(0)
0x357: Push((int) 513901)
0x358: Push((int) 15130)
0x359: Push((int) 15129)
0x35a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35b: Pop(3)
0x35c: Push((int) 513904)
0x35d: Push((int) 15115)
0x35e: Push((int) 15133)
0x35f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x360: Pop(3)
0x361: Return(); Pop(0)

0x362: Push((int) 15130)
0x363: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x365: PushEmpty(string)
0x366: Stack[-1] = "Neutral"
0x367: Call2 0xc5

0x368: Pop(1)
0x369: Push((int) 513902)
0x36a: @@ SetMessage(Stack[-1])
0x36b: Pop(1)
0x36c: @@ ClearReplies()
0x36d: Pop(0)
0x36e: Push((int) 513903)
0x36f: Push((int) 15121)
0x370: Push((int) 15131)
0x371: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x372: Pop(3)
0x373: Return(); Pop(0)

0x374: Push((int) 15115)
0x375: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x376: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x377: PushEmpty(string)
0x378: Stack[-1] = "Neutral"
0x379: Call2 0xc5

0x37a: Pop(1)
0x37b: Push((int) 513888)
0x37c: @@ SetMessage(Stack[-1])
0x37d: Pop(1)
0x37e: @@ ClearReplies()
0x37f: Pop(0)
0x380: Push((int) 513889)
0x381: Push((int) 15117)
0x382: Push((int) 15116)
0x383: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x384: Pop(3)
0x385: Push((int) 513898)
0x386: Push((int) 15117)
0x387: Push((int) 15125)
0x388: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x389: Pop(3)
0x38a: Return(); Pop(0)

0x38b: Push((int) 15117)
0x38c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x38e: PushEmpty(string)
0x38f: Stack[-1] = "Neutral"
0x390: Call2 0xc5

0x391: Pop(1)
0x392: Push((int) 513890)
0x393: @@ SetMessage(Stack[-1])
0x394: Pop(1)
0x395: @@ ClearReplies()
0x396: Pop(0)
0x397: Push((int) 513891)
0x398: Push((int) 15119)
0x399: Push((int) 15118)
0x39a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39b: Pop(3)
0x39c: Push((int) 513897)
0x39d: Push((int) 15121)
0x39e: Push((int) 15124)
0x39f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a0: Pop(3)
0x3a1: Return(); Pop(0)

0x3a2: Push((int) 15119)
0x3a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3a5: PushEmpty(string)
0x3a6: Stack[-1] = "Neutral"
0x3a7: Call2 0xc5

0x3a8: Pop(1)
0x3a9: Push((int) 513892)
0x3aa: @@ SetMessage(Stack[-1])
0x3ab: Pop(1)
0x3ac: @@ ClearReplies()
0x3ad: Pop(0)
0x3ae: Push((int) 513893)
0x3af: Push((int) 15121)
0x3b0: Push((int) 15120)
0x3b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b2: Pop(3)
0x3b3: Return(); Pop(0)

0x3b4: Push((int) 15121)
0x3b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b6: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3b7: PushEmpty(string)
0x3b8: Stack[-1] = "Neutral"
0x3b9: Call2 0xc5

0x3ba: Pop(1)
0x3bb: Push((int) 513894)
0x3bc: @@ SetMessage(Stack[-1])
0x3bd: Pop(1)
0x3be: @@ ClearReplies()
0x3bf: Pop(0)
0x3c0: Push((int) 513895)
0x3c1: Push((int) -1)
0x3c2: Push((int) 15122)
0x3c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c4: Pop(3)
0x3c5: Push((int) 513896)
0x3c6: Push((int) -1)
0x3c7: Push((int) 15123)
0x3c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c9: Pop(3)
0x3ca: Return(); Pop(0)

0x3cb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3cc: PushEmpty(bool)
0x3cd: Call2 0xdd0

0x3ce: Pop(0)
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d0: @ lshStopAnimation()
0x3d1: Pop(0)
0x3d2: GOTO 0x3d5

0x3d3: @ StopAnimation()
0x3d4: Pop(0)
0x3d5: Return(); Pop(0)

0x3d6: GOTO 0xdc

0x3d7: Return(); Pop(0)

0x3d8: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3d9: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3da: PushEmpty(bool, object, float)
0x3db: Stack[-2] = Stack[-12]
0x3dc: Stack[-1] = (float) 70.0
0x3dd: Call2 0xc36

0x3de: Pop(2)
0x3df: Pop(1); Push((bool) Stack[-1] == 0)
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e1: Stack[-10] = (int) -2
0x3e2: Return(); Pop(8)

0x3e3: @ CreateDialog(Stack[-4])
0x3e4: Pop(0)
0x3e5: PushEmpty(int)
0x3e6: Call2 0xdca

0x3e7: Pop(0)
0x3e8: @@ SetNPCName(Stack[-1])
0x3e9: Pop(1)
0x3ea: PushEmpty(int)
0x3eb: Call2 0xdc8

0x3ec: Pop(0)
0x3ed: @@ SetNPCDescription(Stack[-1])
0x3ee: Pop(1)
0x3ef: PushEmpty(string)
0x3f0: Call2 0xdcc

0x3f1: Pop(0)
0x3f2: @@ SetPhoto(Stack[-1])
0x3f3: Pop(1)
0x3f4: PushEmpty(string)
0x3f5: Call2 0xdce

0x3f6: Pop(0)
0x3f7: @@ SetPhoto2(Stack[-1])
0x3f8: Pop(1)
0x3f9: PushEmpty(int)
0x3fa: Call2 0xf51

0x3fb: Pop(0)
0x3fc: @@ SetPlayerName(Stack[-1])
0x3fd: Pop(1)
0x3fe: Stack[-2] = (int) -1
0x3ff: @ IsOverrideActive(Stack[-3])
0x400: Pop(0)
0x401: Push(Stack[-3])
0x402: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x403: Stack[-10] = (int) -2
0x404: Return(); Pop(8)

0x405: @ DoDialog(Stack[-4])
0x406: Pop(0)
0x407: PushEmpty(bool, object)
0x408: PushEmpty(object)
0x409: Call2 0xd4c

0x40a: Stack[-2] = Stack[-1]
0x40b: Pop(1)
0x40c: Call2 0xc8d

0x40d: Pop(2)
0x40e: PushEmpty(object, object)
0x40f: Stack[-2] = Stack[-11]
0x410: Stack[-1] = Stack[-6]
0x411: Push(-2, 4); TaskCall(3)
0x412: Call2 0x429

0x413: Pop(-2, 4); TaskReturn
0x414: Pop(2)
0x415: @@ IsDialogEnd(Stack[-1])
0x416: Pop(0)
0x417: Pop(0); Push((bool) Stack[-1] == 0)
0x418: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x419: @ sync()
0x41a: Pop(0)
0x41b: @@ IsDialogEnd(Stack[-1])
0x41c: Pop(0)
0x41d: GOTO 0x417

0x41e: PushEmpty(object)
0x41f: Stack[-1] = Stack[-10]
0x420: Call2 0xc7b

0x421: Pop(1)
0x422: @ StopDialog(Stack[-4])
0x423: Pop(0)
0x424: @@ GetReturnValue(Stack[-2])
0x425: Pop(0)
0x426: Stack[-10] = Stack[-2]
0x427: Return(); Pop(8)

0x428: Stack[-4] = 0
0x429: PushEmpty()
0x42a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x42b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x42d: Push((int) 1)
0x42e: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x42f: PushEmpty(string)
0x430: Stack[-1] = "Neutral"
0x431: Call2 0x497

0x432: Pop(1)
0x433: Push((int) 514280)
0x434: @@ SetMessage(Stack[-1])
0x435: Pop(1)
0x436: @@ ClearReplies()
0x437: Pop(0)
0x438: PushEmpty(bool)
0x439: Stack[-1] = (bool) 0
0x43a: PushEmpty(bool, object)
0x43b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x43c: Call2 0xebb

0x43d: Pop(1)
0x43e: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x43f: PushEmpty(bool, object)
0x440: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x441: Call2 0xec7

0x442: Pop(1)
0x443: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x444: Stack[-1] = (bool) 1
0x445: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x446: Push((int) 514281)
0x447: Push((int) 15502)
0x448: Push((int) 15501)
0x449: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44a: Pop(3)
0x44b: PushEmpty(bool)
0x44c: Stack[-1] = (bool) 0
0x44d: PushEmpty(bool, object)
0x44e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x44f: Call2 0xed3

0x450: Pop(1)
0x451: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x452: PushEmpty(bool, object)
0x453: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x454: Call2 0xedf

0x455: Pop(1)
0x456: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x457: Stack[-1] = (bool) 1
0x458: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x459: Push((int) 514306)
0x45a: Push((int) 15529)
0x45b: Push((int) 15528)
0x45c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45d: Pop(3)
0x45e: PushEmpty(bool)
0x45f: Stack[-1] = (bool) 0
0x460: PushEmpty(bool, object)
0x461: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x462: Call2 0xeaf

0x463: Pop(1)
0x464: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x465: PushEmpty(bool, object)
0x466: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x467: Call2 0xeeb

0x468: Pop(1)
0x469: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x46a: Stack[-1] = (bool) 1
0x46b: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x46c: Push((int) 514317)
0x46d: Push((int) 15540)
0x46e: Push((int) 15539)
0x46f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x470: Pop(3)
0x471: Push((int) 514324)
0x472: Push((int) -1)
0x473: Push((int) 15546)
0x474: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x475: Pop(3)
0x476: GOTO 0x479

0x477: Return(); Pop(0)

0x478: GOTO 0x42d

0x479: PushEmpty(bool)
0x47a: Call2 0xdd0

0x47b: Pop(0)
0x47c: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x47d: @ lshWaitForAnimEnd()
0x47e: Pop(0)
0x47f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x480: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x481: GOTO 0x487

0x482: PushEmpty(string)
0x483: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x484: Call2 0xd17

0x485: Pop(1)
0x486: GOTO 0x47d

0x487: GOTO 0x496

0x488: Push("all")
0x489: Push("idle")
0x48a: @ PlayAnimation(Stack[-2], Stack[-1])
0x48b: Pop(2)
0x48c: @ WaitForAnimEnd()
0x48d: Pop(0)
0x48e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x48f: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x490: GOTO 0x496

0x491: Push("all")
0x492: Push("idle")
0x493: @ PlayAnimation(Stack[-2], Stack[-1])
0x494: Pop(2)
0x495: GOTO 0x48c

0x496: Return(); Pop(0)

0x497: PushEmpty()
0x498: PushEmpty(bool)
0x499: Call2 0xdd0

0x49a: Pop(0)
0x49b: Pop(1); Push((bool) Stack[-1] == 0)
0x49c: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x49d: Return(); Pop(0)

0x49e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x49f: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x4a0: Return(); Pop(0)

0x4a1: PushEmpty(string, bool)
0x4a2: Stack[-2] = Stack[-3]
0x4a3: Push("")
0x4a4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a6: Stack[-1] = (bool) 0
0x4a7: GOTO 0x4a9

0x4a8: Stack[-1] = (bool) 1
0x4a9: Call2 0xd27

0x4aa: Pop(2)
0x4ab: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4ac: Return(); Pop(0)

0x4ad: PushEmpty()
0x4ae: Push((int) 1)
0x4af: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x4b0: PushEmpty()
0x4b1: Call2 0xd45

0x4b2: Pop(0)
0x4b3: Push((int) 15501)
0x4b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b6: PushEmpty(object, object)
0x4b7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b9: Call2 0xe2e

0x4ba: Pop(2)
0x4bb: Push((int) 15528)
0x4bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4be: PushEmpty(object, object)
0x4bf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c1: Call2 0xe34

0x4c2: Pop(2)
0x4c3: PushEmpty(object, object)
0x4c4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c6: Call2 0xe07

0x4c7: Pop(2)
0x4c8: Push((int) 15539)
0x4c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ca: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4cb: PushEmpty(object, object)
0x4cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ce: Call2 0xe3a

0x4cf: Pop(2)
0x4d0: Push((int) 15500)
0x4d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d2: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x4d3: PushEmpty(string)
0x4d4: Stack[-1] = "Neutral"
0x4d5: Call2 0x497

0x4d6: Pop(1)
0x4d7: Push((int) 514280)
0x4d8: @@ SetMessage(Stack[-1])
0x4d9: Pop(1)
0x4da: @@ ClearReplies()
0x4db: Pop(0)
0x4dc: PushEmpty(bool)
0x4dd: Stack[-1] = (bool) 0
0x4de: PushEmpty(bool, object)
0x4df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e0: Call2 0xebb

0x4e1: Pop(1)
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e3: PushEmpty(bool, object)
0x4e4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e5: Call2 0xec7

0x4e6: Pop(1)
0x4e7: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e8: Stack[-1] = (bool) 1
0x4e9: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ea: Push((int) 514281)
0x4eb: Push((int) 15502)
0x4ec: Push((int) 15501)
0x4ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ee: Pop(3)
0x4ef: PushEmpty(bool)
0x4f0: Stack[-1] = (bool) 0
0x4f1: PushEmpty(bool, object)
0x4f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f3: Call2 0xed3

0x4f4: Pop(1)
0x4f5: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4f6: PushEmpty(bool, object)
0x4f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f8: Call2 0xedf

0x4f9: Pop(1)
0x4fa: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fb: Stack[-1] = (bool) 1
0x4fc: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4fd: Push((int) 514306)
0x4fe: Push((int) 15529)
0x4ff: Push((int) 15528)
0x500: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x501: Pop(3)
0x502: PushEmpty(bool)
0x503: Stack[-1] = (bool) 0
0x504: PushEmpty(bool, object)
0x505: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x506: Call2 0xeaf

0x507: Pop(1)
0x508: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x509: PushEmpty(bool, object)
0x50a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x50b: Call2 0xeeb

0x50c: Pop(1)
0x50d: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x50e: Stack[-1] = (bool) 1
0x50f: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x510: Push((int) 514317)
0x511: Push((int) 15540)
0x512: Push((int) 15539)
0x513: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x514: Pop(3)
0x515: Push((int) 514324)
0x516: Push((int) -1)
0x517: Push((int) 15546)
0x518: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x519: Pop(3)
0x51a: Return(); Pop(0)

0x51b: Push((int) 15540)
0x51c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51d: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x51e: PushEmpty(string)
0x51f: Stack[-1] = "Neutral"
0x520: Call2 0x497

0x521: Pop(1)
0x522: Push((int) 514318)
0x523: @@ SetMessage(Stack[-1])
0x524: Pop(1)
0x525: @@ ClearReplies()
0x526: Pop(0)
0x527: Push((int) 514319)
0x528: Push((int) 15542)
0x529: Push((int) 15541)
0x52a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52b: Pop(3)
0x52c: Push((int) 539610)
0x52d: Push((int) 41557)
0x52e: Push((int) 41556)
0x52f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x530: Pop(3)
0x531: Return(); Pop(0)

0x532: Push((int) 41557)
0x533: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x534: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x535: PushEmpty(string)
0x536: Stack[-1] = "Neutral"
0x537: Call2 0x497

0x538: Pop(1)
0x539: Push((int) 539611)
0x53a: @@ SetMessage(Stack[-1])
0x53b: Pop(1)
0x53c: @@ ClearReplies()
0x53d: Pop(0)
0x53e: Push((int) 539729)
0x53f: Push((int) 15542)
0x540: Push((int) 41692)
0x541: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x542: Pop(3)
0x543: Return(); Pop(0)

0x544: Push((int) 15542)
0x545: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x546: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x547: PushEmpty(string)
0x548: Stack[-1] = "Doubt"
0x549: Call2 0x497

0x54a: Pop(1)
0x54b: Push((int) 514320)
0x54c: @@ SetMessage(Stack[-1])
0x54d: Pop(1)
0x54e: @@ ClearReplies()
0x54f: Pop(0)
0x550: Push((int) 514321)
0x551: Push((int) 15544)
0x552: Push((int) 15543)
0x553: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x554: Pop(3)
0x555: Return(); Pop(0)

0x556: Push((int) 15544)
0x557: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x558: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x559: PushEmpty(string)
0x55a: Stack[-1] = "Doubt"
0x55b: Call2 0x497

0x55c: Pop(1)
0x55d: Push((int) 514322)
0x55e: @@ SetMessage(Stack[-1])
0x55f: Pop(1)
0x560: @@ ClearReplies()
0x561: Pop(0)
0x562: Push((int) 514323)
0x563: Push((int) 41695)
0x564: Push((int) 15545)
0x565: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x566: Pop(3)
0x567: Push((int) 539730)
0x568: Push((int) -1)
0x569: Push((int) 41694)
0x56a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56b: Pop(3)
0x56c: Return(); Pop(0)

0x56d: Push((int) 41695)
0x56e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56f: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x570: PushEmpty(string)
0x571: Stack[-1] = "Neutral"
0x572: Call2 0x497

0x573: Pop(1)
0x574: Push((int) 539731)
0x575: @@ SetMessage(Stack[-1])
0x576: Pop(1)
0x577: @@ ClearReplies()
0x578: Pop(0)
0x579: Push((int) 539732)
0x57a: Push((int) -1)
0x57b: Push((int) 41696)
0x57c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57d: Pop(3)
0x57e: Push((int) 539733)
0x57f: Push((int) -1)
0x580: Push((int) 41697)
0x581: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x582: Pop(3)
0x583: Return(); Pop(0)

0x584: Push((int) 15529)
0x585: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x586: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x587: PushEmpty(string)
0x588: Stack[-1] = "Neutral"
0x589: Call2 0x497

0x58a: Pop(1)
0x58b: Push((int) 514307)
0x58c: @@ SetMessage(Stack[-1])
0x58d: Pop(1)
0x58e: @@ ClearReplies()
0x58f: Pop(0)
0x590: Push((int) 514308)
0x591: Push((int) 15531)
0x592: Push((int) 15530)
0x593: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x594: Pop(3)
0x595: Return(); Pop(0)

0x596: Push((int) 15531)
0x597: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x598: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x599: PushEmpty(string)
0x59a: Stack[-1] = "Agression"
0x59b: Call2 0x497

0x59c: Pop(1)
0x59d: Push((int) 514309)
0x59e: @@ SetMessage(Stack[-1])
0x59f: Pop(1)
0x5a0: @@ ClearReplies()
0x5a1: Pop(0)
0x5a2: Push((int) 514310)
0x5a3: Push((int) 15533)
0x5a4: Push((int) 15532)
0x5a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a6: Pop(3)
0x5a7: Return(); Pop(0)

0x5a8: Push((int) 15533)
0x5a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5aa: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5ab: PushEmpty(string)
0x5ac: Stack[-1] = "Agression"
0x5ad: Call2 0x497

0x5ae: Pop(1)
0x5af: Push((int) 514311)
0x5b0: @@ SetMessage(Stack[-1])
0x5b1: Pop(1)
0x5b2: @@ ClearReplies()
0x5b3: Pop(0)
0x5b4: Push((int) 514312)
0x5b5: Push((int) 15535)
0x5b6: Push((int) 15534)
0x5b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b8: Pop(3)
0x5b9: Push((int) 539728)
0x5ba: Push((int) -1)
0x5bb: Push((int) 41691)
0x5bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bd: Pop(3)
0x5be: Return(); Pop(0)

0x5bf: Push((int) 15535)
0x5c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c1: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x5c2: PushEmpty(string)
0x5c3: Stack[-1] = "Agression"
0x5c4: Call2 0x497

0x5c5: Pop(1)
0x5c6: Push((int) 514313)
0x5c7: @@ SetMessage(Stack[-1])
0x5c8: Pop(1)
0x5c9: @@ ClearReplies()
0x5ca: Pop(0)
0x5cb: Push((int) 514314)
0x5cc: Push((int) 15537)
0x5cd: Push((int) 15536)
0x5ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cf: Pop(3)
0x5d0: Return(); Pop(0)

0x5d1: Push((int) 15537)
0x5d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d3: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5d4: PushEmpty(string)
0x5d5: Stack[-1] = "Agression"
0x5d6: Call2 0x497

0x5d7: Pop(1)
0x5d8: Push((int) 514315)
0x5d9: @@ SetMessage(Stack[-1])
0x5da: Pop(1)
0x5db: @@ ClearReplies()
0x5dc: Pop(0)
0x5dd: Push((int) 514316)
0x5de: Push((int) -1)
0x5df: Push((int) 15538)
0x5e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e1: Pop(3)
0x5e2: Push((int) 539727)
0x5e3: Push((int) -1)
0x5e4: Push((int) 41690)
0x5e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e6: Pop(3)
0x5e7: Return(); Pop(0)

0x5e8: Push((int) 15502)
0x5e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ea: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5eb: PushEmpty(string)
0x5ec: Stack[-1] = "Untrust"
0x5ed: Call2 0x497

0x5ee: Pop(1)
0x5ef: Push((int) 514282)
0x5f0: @@ SetMessage(Stack[-1])
0x5f1: Pop(1)
0x5f2: @@ ClearReplies()
0x5f3: Pop(0)
0x5f4: Push((int) 514283)
0x5f5: Push((int) 15504)
0x5f6: Push((int) 15503)
0x5f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f8: Pop(3)
0x5f9: Push((int) 539903)
0x5fa: Push((int) 41864)
0x5fb: Push((int) 41863)
0x5fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fd: Pop(3)
0x5fe: Return(); Pop(0)

0x5ff: Push((int) 41864)
0x600: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x601: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x602: PushEmpty(string)
0x603: Stack[-1] = "Neutral"
0x604: Call2 0x497

0x605: Pop(1)
0x606: Push((int) 539904)
0x607: @@ SetMessage(Stack[-1])
0x608: Pop(1)
0x609: @@ ClearReplies()
0x60a: Pop(0)
0x60b: Push((int) 539905)
0x60c: Push((int) 15504)
0x60d: Push((int) 41865)
0x60e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60f: Pop(3)
0x610: Return(); Pop(0)

0x611: Push((int) 15504)
0x612: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x613: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x614: PushEmpty(string)
0x615: Stack[-1] = "Untrust"
0x616: Call2 0x497

0x617: Pop(1)
0x618: Push((int) 514284)
0x619: @@ SetMessage(Stack[-1])
0x61a: Pop(1)
0x61b: @@ ClearReplies()
0x61c: Pop(0)
0x61d: Push((int) 514285)
0x61e: Push((int) 15506)
0x61f: Push((int) 15505)
0x620: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x621: Pop(3)
0x622: Push((int) 514290)
0x623: Push((int) 15511)
0x624: Push((int) 15510)
0x625: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x626: Pop(3)
0x627: Return(); Pop(0)

0x628: Push((int) 15511)
0x629: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62a: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x62b: PushEmpty(string)
0x62c: Stack[-1] = "Neutral"
0x62d: Call2 0x497

0x62e: Pop(1)
0x62f: Push((int) 514291)
0x630: @@ SetMessage(Stack[-1])
0x631: Pop(1)
0x632: @@ ClearReplies()
0x633: Pop(0)
0x634: Push((int) 514292)
0x635: Push((int) 15513)
0x636: Push((int) 15512)
0x637: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x638: Pop(3)
0x639: Push((int) 514299)
0x63a: Push((int) 15520)
0x63b: Push((int) 15519)
0x63c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63d: Pop(3)
0x63e: Return(); Pop(0)

0x63f: Push((int) 15520)
0x640: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x641: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x642: PushEmpty(string)
0x643: Stack[-1] = "Untrust"
0x644: Call2 0x497

0x645: Pop(1)
0x646: Push((int) 514300)
0x647: @@ SetMessage(Stack[-1])
0x648: Pop(1)
0x649: @@ ClearReplies()
0x64a: Pop(0)
0x64b: Push((int) 514301)
0x64c: Push((int) 15513)
0x64d: Push((int) 15521)
0x64e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64f: Pop(3)
0x650: Push((int) 514302)
0x651: Push((int) 15524)
0x652: Push((int) 15523)
0x653: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x654: Pop(3)
0x655: Return(); Pop(0)

0x656: Push((int) 15524)
0x657: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x658: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x659: PushEmpty(string)
0x65a: Stack[-1] = "Neutral"
0x65b: Call2 0x497

0x65c: Pop(1)
0x65d: Push((int) 514303)
0x65e: @@ SetMessage(Stack[-1])
0x65f: Pop(1)
0x660: @@ ClearReplies()
0x661: Pop(0)
0x662: Push((int) 514304)
0x663: Push((int) 15513)
0x664: Push((int) 15525)
0x665: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x666: Pop(3)
0x667: Push((int) 514305)
0x668: Push((int) -1)
0x669: Push((int) 15527)
0x66a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66b: Pop(3)
0x66c: Return(); Pop(0)

0x66d: Push((int) 15513)
0x66e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x66f: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x670: PushEmpty(string)
0x671: Stack[-1] = "Untrust"
0x672: Call2 0x497

0x673: Pop(1)
0x674: Push((int) 514293)
0x675: @@ SetMessage(Stack[-1])
0x676: Pop(1)
0x677: @@ ClearReplies()
0x678: Pop(0)
0x679: Push((int) 514294)
0x67a: Push((int) 15515)
0x67b: Push((int) 15514)
0x67c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67d: Pop(3)
0x67e: Return(); Pop(0)

0x67f: Push((int) 15515)
0x680: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x681: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x682: PushEmpty(string)
0x683: Stack[-1] = "Neutral"
0x684: Call2 0x497

0x685: Pop(1)
0x686: Push((int) 514295)
0x687: @@ SetMessage(Stack[-1])
0x688: Pop(1)
0x689: @@ ClearReplies()
0x68a: Pop(0)
0x68b: Push((int) 514296)
0x68c: Push((int) 15517)
0x68d: Push((int) 15516)
0x68e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68f: Pop(3)
0x690: Return(); Pop(0)

0x691: Push((int) 15517)
0x692: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x693: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x694: PushEmpty(string)
0x695: Stack[-1] = "Neutral"
0x696: Call2 0x497

0x697: Pop(1)
0x698: Push((int) 514297)
0x699: @@ SetMessage(Stack[-1])
0x69a: Pop(1)
0x69b: @@ ClearReplies()
0x69c: Pop(0)
0x69d: Push((int) 514298)
0x69e: Push((int) -1)
0x69f: Push((int) 15518)
0x6a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a1: Pop(3)
0x6a2: Return(); Pop(0)

0x6a3: Push((int) 15506)
0x6a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a5: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6a6: PushEmpty(string)
0x6a7: Stack[-1] = "Neutral"
0x6a8: Call2 0x497

0x6a9: Pop(1)
0x6aa: Push((int) 514286)
0x6ab: @@ SetMessage(Stack[-1])
0x6ac: Pop(1)
0x6ad: @@ ClearReplies()
0x6ae: Pop(0)
0x6af: Push((int) 514287)
0x6b0: Push((int) 15508)
0x6b1: Push((int) 15507)
0x6b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b3: Pop(3)
0x6b4: Return(); Pop(0)

0x6b5: Push((int) 15508)
0x6b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b7: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6b8: PushEmpty(string)
0x6b9: Stack[-1] = "Neutral"
0x6ba: Call2 0x497

0x6bb: Pop(1)
0x6bc: Push((int) 514288)
0x6bd: @@ SetMessage(Stack[-1])
0x6be: Pop(1)
0x6bf: @@ ClearReplies()
0x6c0: Pop(0)
0x6c1: Push((int) 514289)
0x6c2: Push((int) -1)
0x6c3: Push((int) 15509)
0x6c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c5: Pop(3)
0x6c6: Push((int) 539734)
0x6c7: Push((int) -1)
0x6c8: Push((int) 41698)
0x6c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ca: Pop(3)
0x6cb: Return(); Pop(0)

0x6cc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6cd: PushEmpty(bool)
0x6ce: Call2 0xdd0

0x6cf: Pop(0)
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6d1: @ lshStopAnimation()
0x6d2: Pop(0)
0x6d3: GOTO 0x6d6

0x6d4: @ StopAnimation()
0x6d5: Pop(0)
0x6d6: Return(); Pop(0)

0x6d7: GOTO 0x4ae

0x6d8: Return(); Pop(0)

0x6d9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6da: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6db: PushEmpty(bool, object, float)
0x6dc: Stack[-2] = Stack[-12]
0x6dd: Stack[-1] = (float) 70.0
0x6de: Call2 0xc36

0x6df: Pop(2)
0x6e0: Pop(1); Push((bool) Stack[-1] == 0)
0x6e1: IF (Stack[-1] == 0) GOTO 0x6e4; Pop(1)

0x6e2: Stack[-10] = (int) -2
0x6e3: Return(); Pop(8)

0x6e4: @ CreateDialog(Stack[-4])
0x6e5: Pop(0)
0x6e6: PushEmpty(int)
0x6e7: Call2 0xdca

0x6e8: Pop(0)
0x6e9: @@ SetNPCName(Stack[-1])
0x6ea: Pop(1)
0x6eb: PushEmpty(int)
0x6ec: Call2 0xdc8

0x6ed: Pop(0)
0x6ee: @@ SetNPCDescription(Stack[-1])
0x6ef: Pop(1)
0x6f0: PushEmpty(string)
0x6f1: Call2 0xdcc

0x6f2: Pop(0)
0x6f3: @@ SetPhoto(Stack[-1])
0x6f4: Pop(1)
0x6f5: PushEmpty(string)
0x6f6: Call2 0xdce

0x6f7: Pop(0)
0x6f8: @@ SetPhoto2(Stack[-1])
0x6f9: Pop(1)
0x6fa: PushEmpty(int)
0x6fb: Call2 0xf51

0x6fc: Pop(0)
0x6fd: @@ SetPlayerName(Stack[-1])
0x6fe: Pop(1)
0x6ff: Stack[-2] = (int) -1
0x700: @ IsOverrideActive(Stack[-3])
0x701: Pop(0)
0x702: Push(Stack[-3])
0x703: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x704: Stack[-10] = (int) -2
0x705: Return(); Pop(8)

0x706: @ DoDialog(Stack[-4])
0x707: Pop(0)
0x708: PushEmpty(bool, object)
0x709: PushEmpty(object)
0x70a: Call2 0xd4c

0x70b: Stack[-2] = Stack[-1]
0x70c: Pop(1)
0x70d: Call2 0xc8d

0x70e: Pop(2)
0x70f: PushEmpty(object, object)
0x710: Stack[-2] = Stack[-11]
0x711: Stack[-1] = Stack[-6]
0x712: Push(-2, 4); TaskCall(5)
0x713: Call2 0x72a

0x714: Pop(-2, 4); TaskReturn
0x715: Pop(2)
0x716: @@ IsDialogEnd(Stack[-1])
0x717: Pop(0)
0x718: Pop(0); Push((bool) Stack[-1] == 0)
0x719: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x71a: @ sync()
0x71b: Pop(0)
0x71c: @@ IsDialogEnd(Stack[-1])
0x71d: Pop(0)
0x71e: GOTO 0x718

0x71f: PushEmpty(object)
0x720: Stack[-1] = Stack[-10]
0x721: Call2 0xc7b

0x722: Pop(1)
0x723: @ StopDialog(Stack[-4])
0x724: Pop(0)
0x725: @@ GetReturnValue(Stack[-2])
0x726: Pop(0)
0x727: Stack[-10] = Stack[-2]
0x728: Return(); Pop(8)

0x729: Stack[-4] = 0
0x72a: PushEmpty()
0x72b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x72c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x72d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x72e: Push((int) 1)
0x72f: IF (Stack[-1] == 0) GOTO 0x750; Pop(1)

0x730: PushEmpty(string)
0x731: Stack[-1] = "Neutral"
0x732: Call2 0x76e

0x733: Pop(1)
0x734: Push((int) 534152)
0x735: @@ SetMessage(Stack[-1])
0x736: Pop(1)
0x737: @@ ClearReplies()
0x738: Pop(0)
0x739: PushEmpty(bool, object)
0x73a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73b: Call2 0xe7f

0x73c: Pop(1)
0x73d: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x73e: Push((int) 534153)
0x73f: Push((int) 38340)
0x740: Push((int) 35740)
0x741: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x742: Pop(3)
0x743: Push((int) 534154)
0x744: Push((int) -1)
0x745: Push((int) 35741)
0x746: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x747: Pop(3)
0x748: Push((int) 536532)
0x749: Push((int) -1)
0x74a: Push((int) 38339)
0x74b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74c: Pop(3)
0x74d: GOTO 0x750

0x74e: Return(); Pop(0)

0x74f: GOTO 0x72e

0x750: PushEmpty(bool)
0x751: Call2 0xdd0

0x752: Pop(0)
0x753: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x754: @ lshWaitForAnimEnd()
0x755: Pop(0)
0x756: Push( Stack[3 + Tasks[-1].StackPointer] )
0x757: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x758: GOTO 0x75e

0x759: PushEmpty(string)
0x75a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x75b: Call2 0xd17

0x75c: Pop(1)
0x75d: GOTO 0x754

0x75e: GOTO 0x76d

0x75f: Push("all")
0x760: Push("idle")
0x761: @ PlayAnimation(Stack[-2], Stack[-1])
0x762: Pop(2)
0x763: @ WaitForAnimEnd()
0x764: Pop(0)
0x765: Push( Stack[3 + Tasks[-1].StackPointer] )
0x766: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x767: GOTO 0x76d

0x768: Push("all")
0x769: Push("idle")
0x76a: @ PlayAnimation(Stack[-2], Stack[-1])
0x76b: Pop(2)
0x76c: GOTO 0x763

0x76d: Return(); Pop(0)

0x76e: PushEmpty()
0x76f: PushEmpty(bool)
0x770: Call2 0xdd0

0x771: Pop(0)
0x772: Pop(1); Push((bool) Stack[-1] == 0)
0x773: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x774: Return(); Pop(0)

0x775: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x776: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x777: Return(); Pop(0)

0x778: PushEmpty(string, bool)
0x779: Stack[-2] = Stack[-3]
0x77a: Push("")
0x77b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x77c: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x77d: Stack[-1] = (bool) 0
0x77e: GOTO 0x780

0x77f: Stack[-1] = (bool) 1
0x780: Call2 0xd27

0x781: Pop(2)
0x782: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x783: Return(); Pop(0)

0x784: PushEmpty()
0x785: Push((int) 1)
0x786: IF (Stack[-1] == 0) GOTO 0x870; Pop(1)

0x787: PushEmpty()
0x788: Call2 0xd45

0x789: Pop(0)
0x78a: Push((int) 35743)
0x78b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x78c: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x78d: PushEmpty(object, object)
0x78e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x78f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x790: Call2 0xdf2

0x791: Pop(2)
0x792: Push((int) 38363)
0x793: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x794: IF (Stack[-1] == 0) GOTO 0x79a; Pop(1)

0x795: PushEmpty(object, object)
0x796: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x797: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x798: Call2 0xdf2

0x799: Pop(2)
0x79a: Push((int) 35739)
0x79b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x79c: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x79d: PushEmpty(string)
0x79e: Stack[-1] = "Neutral"
0x79f: Call2 0x76e

0x7a0: Pop(1)
0x7a1: Push((int) 534152)
0x7a2: @@ SetMessage(Stack[-1])
0x7a3: Pop(1)
0x7a4: @@ ClearReplies()
0x7a5: Pop(0)
0x7a6: PushEmpty(bool, object)
0x7a7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a8: Call2 0xe7f

0x7a9: Pop(1)
0x7aa: IF (Stack[-1] == 0) GOTO 0x7b0; Pop(1)

0x7ab: Push((int) 534153)
0x7ac: Push((int) 38340)
0x7ad: Push((int) 35740)
0x7ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7af: Pop(3)
0x7b0: Push((int) 534154)
0x7b1: Push((int) -1)
0x7b2: Push((int) 35741)
0x7b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b4: Pop(3)
0x7b5: Push((int) 536532)
0x7b6: Push((int) -1)
0x7b7: Push((int) 38339)
0x7b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b9: Pop(3)
0x7ba: Return(); Pop(0)

0x7bb: Push((int) 38340)
0x7bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7bd: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7be: PushEmpty(string)
0x7bf: Stack[-1] = "Neutral"
0x7c0: Call2 0x76e

0x7c1: Pop(1)
0x7c2: Push((int) 536533)
0x7c3: @@ SetMessage(Stack[-1])
0x7c4: Pop(1)
0x7c5: @@ ClearReplies()
0x7c6: Pop(0)
0x7c7: Push((int) 536534)
0x7c8: Push((int) 38342)
0x7c9: Push((int) 38341)
0x7ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cb: Pop(3)
0x7cc: Push((int) 536539)
0x7cd: Push((int) 38347)
0x7ce: Push((int) 38346)
0x7cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d0: Pop(3)
0x7d1: Return(); Pop(0)

0x7d2: Push((int) 38347)
0x7d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d4: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x7d5: PushEmpty(string)
0x7d6: Stack[-1] = "Doubt"
0x7d7: Call2 0x76e

0x7d8: Pop(1)
0x7d9: Push((int) 536540)
0x7da: @@ SetMessage(Stack[-1])
0x7db: Pop(1)
0x7dc: @@ ClearReplies()
0x7dd: Pop(0)
0x7de: Push((int) 536541)
0x7df: Push((int) 38351)
0x7e0: Push((int) 38348)
0x7e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e2: Pop(3)
0x7e3: Push((int) 536542)
0x7e4: Push((int) -1)
0x7e5: Push((int) 38349)
0x7e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e7: Pop(3)
0x7e8: Return(); Pop(0)

0x7e9: Push((int) 38342)
0x7ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7eb: IF (Stack[-1] == 0) GOTO 0x800; Pop(1)

0x7ec: PushEmpty(string)
0x7ed: Stack[-1] = "Neutral"
0x7ee: Call2 0x76e

0x7ef: Pop(1)
0x7f0: Push((int) 536535)
0x7f1: @@ SetMessage(Stack[-1])
0x7f2: Pop(1)
0x7f3: @@ ClearReplies()
0x7f4: Pop(0)
0x7f5: Push((int) 536536)
0x7f6: Push((int) 38344)
0x7f7: Push((int) 38343)
0x7f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f9: Pop(3)
0x7fa: Push((int) 536543)
0x7fb: Push((int) 38351)
0x7fc: Push((int) 38350)
0x7fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fe: Pop(3)
0x7ff: Return(); Pop(0)

0x800: Push((int) 38344)
0x801: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x802: IF (Stack[-1] == 0) GOTO 0x812; Pop(1)

0x803: PushEmpty(string)
0x804: Stack[-1] = "Neutral"
0x805: Call2 0x76e

0x806: Pop(1)
0x807: Push((int) 536537)
0x808: @@ SetMessage(Stack[-1])
0x809: Pop(1)
0x80a: @@ ClearReplies()
0x80b: Pop(0)
0x80c: Push((int) 536538)
0x80d: Push((int) 38351)
0x80e: Push((int) 38345)
0x80f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x810: Pop(3)
0x811: Return(); Pop(0)

0x812: Push((int) 38351)
0x813: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x814: IF (Stack[-1] == 0) GOTO 0x829; Pop(1)

0x815: PushEmpty(string)
0x816: Stack[-1] = "Neutral"
0x817: Call2 0x76e

0x818: Pop(1)
0x819: Push((int) 536544)
0x81a: @@ SetMessage(Stack[-1])
0x81b: Pop(1)
0x81c: @@ ClearReplies()
0x81d: Pop(0)
0x81e: Push((int) 536545)
0x81f: Push((int) 38359)
0x820: Push((int) 38352)
0x821: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x822: Pop(3)
0x823: Push((int) 536546)
0x824: Push((int) 38358)
0x825: Push((int) 38355)
0x826: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x827: Pop(3)
0x828: Return(); Pop(0)

0x829: Push((int) 38358)
0x82a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82b: IF (Stack[-1] == 0) GOTO 0x83b; Pop(1)

0x82c: PushEmpty(string)
0x82d: Stack[-1] = "Neutral"
0x82e: Call2 0x76e

0x82f: Pop(1)
0x830: Push((int) 536548)
0x831: @@ SetMessage(Stack[-1])
0x832: Pop(1)
0x833: @@ ClearReplies()
0x834: Pop(0)
0x835: Push((int) 536550)
0x836: Push((int) 35742)
0x837: Push((int) 38360)
0x838: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x839: Pop(3)
0x83a: Return(); Pop(0)

0x83b: Push((int) 38359)
0x83c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x83d: IF (Stack[-1] == 0) GOTO 0x84d; Pop(1)

0x83e: PushEmpty(string)
0x83f: Stack[-1] = "Neutral"
0x840: Call2 0x76e

0x841: Pop(1)
0x842: Push((int) 536549)
0x843: @@ SetMessage(Stack[-1])
0x844: Pop(1)
0x845: @@ ClearReplies()
0x846: Pop(0)
0x847: Push((int) 536551)
0x848: Push((int) 35742)
0x849: Push((int) 38361)
0x84a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84b: Pop(3)
0x84c: Return(); Pop(0)

0x84d: Push((int) 35742)
0x84e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x84f: IF (Stack[-1] == 0) GOTO 0x864; Pop(1)

0x850: PushEmpty(string)
0x851: Stack[-1] = "Doubt"
0x852: Call2 0x76e

0x853: Pop(1)
0x854: Push((int) 534155)
0x855: @@ SetMessage(Stack[-1])
0x856: Pop(1)
0x857: @@ ClearReplies()
0x858: Pop(0)
0x859: Push((int) 534156)
0x85a: Push((int) -1)
0x85b: Push((int) 35743)
0x85c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85d: Pop(3)
0x85e: Push((int) 536552)
0x85f: Push((int) -1)
0x860: Push((int) 38363)
0x861: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x862: Pop(3)
0x863: Return(); Pop(0)

0x864: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x865: PushEmpty(bool)
0x866: Call2 0xdd0

0x867: Pop(0)
0x868: IF (Stack[-1] == 0) GOTO 0x86c; Pop(1)

0x869: @ lshStopAnimation()
0x86a: Pop(0)
0x86b: GOTO 0x86e

0x86c: @ StopAnimation()
0x86d: Pop(0)
0x86e: Return(); Pop(0)

0x86f: GOTO 0x785

0x870: Return(); Pop(0)

0x871: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x872: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x873: PushEmpty(bool, object, float)
0x874: Stack[-2] = Stack[-12]
0x875: Stack[-1] = (float) 70.0
0x876: Call2 0xc36

0x877: Pop(2)
0x878: Pop(1); Push((bool) Stack[-1] == 0)
0x879: IF (Stack[-1] == 0) GOTO 0x87c; Pop(1)

0x87a: Stack[-10] = (int) -2
0x87b: Return(); Pop(8)

0x87c: @ CreateDialog(Stack[-4])
0x87d: Pop(0)
0x87e: PushEmpty(int)
0x87f: Call2 0xdca

0x880: Pop(0)
0x881: @@ SetNPCName(Stack[-1])
0x882: Pop(1)
0x883: PushEmpty(int)
0x884: Call2 0xdc8

0x885: Pop(0)
0x886: @@ SetNPCDescription(Stack[-1])
0x887: Pop(1)
0x888: PushEmpty(string)
0x889: Call2 0xdcc

0x88a: Pop(0)
0x88b: @@ SetPhoto(Stack[-1])
0x88c: Pop(1)
0x88d: PushEmpty(string)
0x88e: Call2 0xdce

0x88f: Pop(0)
0x890: @@ SetPhoto2(Stack[-1])
0x891: Pop(1)
0x892: PushEmpty(int)
0x893: Call2 0xf51

0x894: Pop(0)
0x895: @@ SetPlayerName(Stack[-1])
0x896: Pop(1)
0x897: Stack[-2] = (int) -1
0x898: @ IsOverrideActive(Stack[-3])
0x899: Pop(0)
0x89a: Push(Stack[-3])
0x89b: IF (Stack[-1] == 0) GOTO 0x89e; Pop(1)

0x89c: Stack[-10] = (int) -2
0x89d: Return(); Pop(8)

0x89e: @ DoDialog(Stack[-4])
0x89f: Pop(0)
0x8a0: PushEmpty(bool, object)
0x8a1: PushEmpty(object)
0x8a2: Call2 0xd4c

0x8a3: Stack[-2] = Stack[-1]
0x8a4: Pop(1)
0x8a5: Call2 0xc8d

0x8a6: Pop(2)
0x8a7: PushEmpty(object, object)
0x8a8: Stack[-2] = Stack[-11]
0x8a9: Stack[-1] = Stack[-6]
0x8aa: Push(-2, 4); TaskCall(7)
0x8ab: Call2 0x8c2

0x8ac: Pop(-2, 4); TaskReturn
0x8ad: Pop(2)
0x8ae: @@ IsDialogEnd(Stack[-1])
0x8af: Pop(0)
0x8b0: Pop(0); Push((bool) Stack[-1] == 0)
0x8b1: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8b2: @ sync()
0x8b3: Pop(0)
0x8b4: @@ IsDialogEnd(Stack[-1])
0x8b5: Pop(0)
0x8b6: GOTO 0x8b0

0x8b7: PushEmpty(object)
0x8b8: Stack[-1] = Stack[-10]
0x8b9: Call2 0xc7b

0x8ba: Pop(1)
0x8bb: @ StopDialog(Stack[-4])
0x8bc: Pop(0)
0x8bd: @@ GetReturnValue(Stack[-2])
0x8be: Pop(0)
0x8bf: Stack[-10] = Stack[-2]
0x8c0: Return(); Pop(8)

0x8c1: Stack[-4] = 0
0x8c2: PushEmpty()
0x8c3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x8c4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x8c5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8c6: Push((int) 1)
0x8c7: IF (Stack[-1] == 0) GOTO 0x915; Pop(1)

0x8c8: PushEmpty(bool)
0x8c9: Stack[-1] = (bool) 0
0x8ca: PushEmpty(bool, object)
0x8cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8cc: Call2 0xe8b

0x8cd: Pop(1)
0x8ce: IF (Stack[-1] == 0) GOTO 0x8d6; Pop(1)

0x8cf: PushEmpty(bool, object)
0x8d0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d1: Call2 0xe51

0x8d2: Pop(1)
0x8d3: Pop(1); Push((bool) Stack[-1] == 0)
0x8d4: IF (Stack[-1] == 0) GOTO 0x8d6; Pop(1)

0x8d5: Stack[-1] = (bool) 1
0x8d6: IF (Stack[-1] == 0) GOTO 0x8eb; Pop(1)

0x8d7: PushEmpty(object, object)
0x8d8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8da: Call2 0xe01

0x8db: Pop(2)
0x8dc: PushEmpty(string)
0x8dd: Stack[-1] = "Neutral"
0x8de: Call2 0x933

0x8df: Pop(1)
0x8e0: Push((int) 535510)
0x8e1: @@ SetMessage(Stack[-1])
0x8e2: Pop(1)
0x8e3: @@ ClearReplies()
0x8e4: Pop(0)
0x8e5: Push((int) 535511)
0x8e6: Push((int) 37194)
0x8e7: Push((int) 37193)
0x8e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e9: Pop(3)
0x8ea: GOTO 0x915

0x8eb: PushEmpty(bool, object)
0x8ec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8ed: Call2 0xe51

0x8ee: Pop(1)
0x8ef: IF (Stack[-1] == 0) GOTO 0x904; Pop(1)

0x8f0: PushEmpty(string)
0x8f1: Stack[-1] = "Neutral"
0x8f2: Call2 0x933

0x8f3: Pop(1)
0x8f4: Push((int) 535528)
0x8f5: @@ SetMessage(Stack[-1])
0x8f6: Pop(1)
0x8f7: @@ ClearReplies()
0x8f8: Pop(0)
0x8f9: Push((int) 535529)
0x8fa: Push((int) -1)
0x8fb: Push((int) 37212)
0x8fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fd: Pop(3)
0x8fe: Push((int) 535530)
0x8ff: Push((int) -1)
0x900: Push((int) 37213)
0x901: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x902: Pop(3)
0x903: GOTO 0x915

0x904: PushEmpty(string)
0x905: Stack[-1] = "Neutral"
0x906: Call2 0x933

0x907: Pop(1)
0x908: Push((int) 535531)
0x909: @@ SetMessage(Stack[-1])
0x90a: Pop(1)
0x90b: @@ ClearReplies()
0x90c: Pop(0)
0x90d: Push((int) 535539)
0x90e: Push((int) -1)
0x90f: Push((int) 37222)
0x910: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x911: Pop(3)
0x912: GOTO 0x915

0x913: Return(); Pop(0)

0x914: GOTO 0x8c6

0x915: PushEmpty(bool)
0x916: Call2 0xdd0

0x917: Pop(0)
0x918: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x919: @ lshWaitForAnimEnd()
0x91a: Pop(0)
0x91b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x91c: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x91d: GOTO 0x923

0x91e: PushEmpty(string)
0x91f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x920: Call2 0xd17

0x921: Pop(1)
0x922: GOTO 0x919

0x923: GOTO 0x932

0x924: Push("all")
0x925: Push("idle")
0x926: @ PlayAnimation(Stack[-2], Stack[-1])
0x927: Pop(2)
0x928: @ WaitForAnimEnd()
0x929: Pop(0)
0x92a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92b: IF (Stack[-1] == 0) GOTO 0x92d; Pop(1)

0x92c: GOTO 0x932

0x92d: Push("all")
0x92e: Push("idle")
0x92f: @ PlayAnimation(Stack[-2], Stack[-1])
0x930: Pop(2)
0x931: GOTO 0x928

0x932: Return(); Pop(0)

0x933: PushEmpty()
0x934: PushEmpty(bool)
0x935: Call2 0xdd0

0x936: Pop(0)
0x937: Pop(1); Push((bool) Stack[-1] == 0)
0x938: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x939: Return(); Pop(0)

0x93a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93b: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x93c: Return(); Pop(0)

0x93d: PushEmpty(string, bool)
0x93e: Stack[-2] = Stack[-3]
0x93f: Push("")
0x940: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x941: IF (Stack[-1] == 0) GOTO 0x944; Pop(1)

0x942: Stack[-1] = (bool) 0
0x943: GOTO 0x945

0x944: Stack[-1] = (bool) 1
0x945: Call2 0xd27

0x946: Pop(2)
0x947: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x948: Return(); Pop(0)

0x949: PushEmpty()
0x94a: Push((int) 1)
0x94b: IF (Stack[-1] == 0) GOTO 0xa4a; Pop(1)

0x94c: PushEmpty()
0x94d: Call2 0xd45

0x94e: Pop(0)
0x94f: Push((int) 37192)
0x950: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x951: IF (Stack[-1] == 0) GOTO 0x99d; Pop(1)

0x952: PushEmpty(bool)
0x953: Stack[-1] = (bool) 0
0x954: PushEmpty(bool, object)
0x955: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x956: Call2 0xe8b

0x957: Pop(1)
0x958: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x959: PushEmpty(bool, object)
0x95a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x95b: Call2 0xe51

0x95c: Pop(1)
0x95d: Pop(1); Push((bool) Stack[-1] == 0)
0x95e: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x95f: Stack[-1] = (bool) 1
0x960: IF (Stack[-1] == 0) GOTO 0x975; Pop(1)

0x961: PushEmpty(object, object)
0x962: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x963: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x964: Call2 0xe01

0x965: Pop(2)
0x966: PushEmpty(string)
0x967: Stack[-1] = "Neutral"
0x968: Call2 0x933

0x969: Pop(1)
0x96a: Push((int) 535510)
0x96b: @@ SetMessage(Stack[-1])
0x96c: Pop(1)
0x96d: @@ ClearReplies()
0x96e: Pop(0)
0x96f: Push((int) 535511)
0x970: Push((int) 37194)
0x971: Push((int) 37193)
0x972: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x973: Pop(3)
0x974: Return(); Pop(0)

0x975: PushEmpty(bool, object)
0x976: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x977: Call2 0xe51

0x978: Pop(1)
0x979: IF (Stack[-1] == 0) GOTO 0x98e; Pop(1)

0x97a: PushEmpty(string)
0x97b: Stack[-1] = "Neutral"
0x97c: Call2 0x933

0x97d: Pop(1)
0x97e: Push((int) 535528)
0x97f: @@ SetMessage(Stack[-1])
0x980: Pop(1)
0x981: @@ ClearReplies()
0x982: Pop(0)
0x983: Push((int) 535529)
0x984: Push((int) -1)
0x985: Push((int) 37212)
0x986: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x987: Pop(3)
0x988: Push((int) 535530)
0x989: Push((int) -1)
0x98a: Push((int) 37213)
0x98b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98c: Pop(3)
0x98d: Return(); Pop(0)

0x98e: PushEmpty(string)
0x98f: Stack[-1] = "Neutral"
0x990: Call2 0x933

0x991: Pop(1)
0x992: Push((int) 535531)
0x993: @@ SetMessage(Stack[-1])
0x994: Pop(1)
0x995: @@ ClearReplies()
0x996: Pop(0)
0x997: Push((int) 535539)
0x998: Push((int) -1)
0x999: Push((int) 37222)
0x99a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99b: Pop(3)
0x99c: Return(); Pop(0)

0x99d: Push((int) 37194)
0x99e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x99f: IF (Stack[-1] == 0) GOTO 0x9b4; Pop(1)

0x9a0: PushEmpty(string)
0x9a1: Stack[-1] = "Neutral"
0x9a2: Call2 0x933

0x9a3: Pop(1)
0x9a4: Push((int) 535512)
0x9a5: @@ SetMessage(Stack[-1])
0x9a6: Pop(1)
0x9a7: @@ ClearReplies()
0x9a8: Pop(0)
0x9a9: Push((int) 535513)
0x9aa: Push((int) 37196)
0x9ab: Push((int) 37195)
0x9ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ad: Pop(3)
0x9ae: Push((int) 535525)
0x9af: Push((int) 37208)
0x9b0: Push((int) 37207)
0x9b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b2: Pop(3)
0x9b3: Return(); Pop(0)

0x9b4: Push((int) 37208)
0x9b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b6: IF (Stack[-1] == 0) GOTO 0x9cb; Pop(1)

0x9b7: PushEmpty(string)
0x9b8: Stack[-1] = "Neutral"
0x9b9: Call2 0x933

0x9ba: Pop(1)
0x9bb: Push((int) 535526)
0x9bc: @@ SetMessage(Stack[-1])
0x9bd: Pop(1)
0x9be: @@ ClearReplies()
0x9bf: Pop(0)
0x9c0: Push((int) 535527)
0x9c1: Push((int) 37196)
0x9c2: Push((int) 37209)
0x9c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c4: Pop(3)
0x9c5: Push((int) 539998)
0x9c6: Push((int) 41968)
0x9c7: Push((int) 41967)
0x9c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c9: Pop(3)
0x9ca: Return(); Pop(0)

0x9cb: Push((int) 41968)
0x9cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9cd: IF (Stack[-1] == 0) GOTO 0x9e2; Pop(1)

0x9ce: PushEmpty(string)
0x9cf: Stack[-1] = "Doubt"
0x9d0: Call2 0x933

0x9d1: Pop(1)
0x9d2: Push((int) 539999)
0x9d3: @@ SetMessage(Stack[-1])
0x9d4: Pop(1)
0x9d5: @@ ClearReplies()
0x9d6: Pop(0)
0x9d7: Push((int) 540000)
0x9d8: Push((int) 37196)
0x9d9: Push((int) 41969)
0x9da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9db: Pop(3)
0x9dc: Push((int) 540001)
0x9dd: Push((int) 37196)
0x9de: Push((int) 41970)
0x9df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e0: Pop(3)
0x9e1: Return(); Pop(0)

0x9e2: Push((int) 37196)
0x9e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e4: IF (Stack[-1] == 0) GOTO 0x9f9; Pop(1)

0x9e5: PushEmpty(string)
0x9e6: Stack[-1] = "Neutral"
0x9e7: Call2 0x933

0x9e8: Pop(1)
0x9e9: Push((int) 535514)
0x9ea: @@ SetMessage(Stack[-1])
0x9eb: Pop(1)
0x9ec: @@ ClearReplies()
0x9ed: Pop(0)
0x9ee: Push((int) 535515)
0x9ef: Push((int) 37198)
0x9f0: Push((int) 37197)
0x9f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f2: Pop(3)
0x9f3: Push((int) 535524)
0x9f4: Push((int) -1)
0x9f5: Push((int) 37206)
0x9f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f7: Pop(3)
0x9f8: Return(); Pop(0)

0x9f9: Push((int) 37198)
0x9fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9fb: IF (Stack[-1] == 0) GOTO 0xa10; Pop(1)

0x9fc: PushEmpty(string)
0x9fd: Stack[-1] = "Neutral"
0x9fe: Call2 0x933

0x9ff: Pop(1)
0xa00: Push((int) 535516)
0xa01: @@ SetMessage(Stack[-1])
0xa02: Pop(1)
0xa03: @@ ClearReplies()
0xa04: Pop(0)
0xa05: Push((int) 535517)
0xa06: Push((int) 37200)
0xa07: Push((int) 37199)
0xa08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa09: Pop(3)
0xa0a: Push((int) 535523)
0xa0b: Push((int) -1)
0xa0c: Push((int) 37205)
0xa0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0e: Pop(3)
0xa0f: Return(); Pop(0)

0xa10: Push((int) 37200)
0xa11: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa12: IF (Stack[-1] == 0) GOTO 0xa27; Pop(1)

0xa13: PushEmpty(string)
0xa14: Stack[-1] = "Neutral"
0xa15: Call2 0x933

0xa16: Pop(1)
0xa17: Push((int) 535518)
0xa18: @@ SetMessage(Stack[-1])
0xa19: Pop(1)
0xa1a: @@ ClearReplies()
0xa1b: Pop(0)
0xa1c: Push((int) 535519)
0xa1d: Push((int) 37202)
0xa1e: Push((int) 37201)
0xa1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa20: Pop(3)
0xa21: Push((int) 542998)
0xa22: Push((int) -1)
0xa23: Push((int) 45446)
0xa24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa25: Pop(3)
0xa26: Return(); Pop(0)

0xa27: Push((int) 37202)
0xa28: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa29: IF (Stack[-1] == 0) GOTO 0xa3e; Pop(1)

0xa2a: PushEmpty(string)
0xa2b: Stack[-1] = "Neutral"
0xa2c: Call2 0x933

0xa2d: Pop(1)
0xa2e: Push((int) 535520)
0xa2f: @@ SetMessage(Stack[-1])
0xa30: Pop(1)
0xa31: @@ ClearReplies()
0xa32: Pop(0)
0xa33: Push((int) 535521)
0xa34: Push((int) -1)
0xa35: Push((int) 37203)
0xa36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa37: Pop(3)
0xa38: Push((int) 535522)
0xa39: Push((int) -1)
0xa3a: Push((int) 37204)
0xa3b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3c: Pop(3)
0xa3d: Return(); Pop(0)

0xa3e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa3f: PushEmpty(bool)
0xa40: Call2 0xdd0

0xa41: Pop(0)
0xa42: IF (Stack[-1] == 0) GOTO 0xa46; Pop(1)

0xa43: @ lshStopAnimation()
0xa44: Pop(0)
0xa45: GOTO 0xa48

0xa46: @ StopAnimation()
0xa47: Pop(0)
0xa48: Return(); Pop(0)

0xa49: GOTO 0x94a

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
0xa59: Call2 0xdca

0xa5a: Pop(0)
0xa5b: @@ SetNPCName(Stack[-1])
0xa5c: Pop(1)
0xa5d: PushEmpty(int)
0xa5e: Call2 0xdc8

0xa5f: Pop(0)
0xa60: @@ SetNPCDescription(Stack[-1])
0xa61: Pop(1)
0xa62: PushEmpty(string)
0xa63: Call2 0xdcc

0xa64: Pop(0)
0xa65: @@ SetPhoto(Stack[-1])
0xa66: Pop(1)
0xa67: PushEmpty(string)
0xa68: Call2 0xdce

0xa69: Pop(0)
0xa6a: @@ SetPhoto2(Stack[-1])
0xa6b: Pop(1)
0xa6c: PushEmpty(int)
0xa6d: Call2 0xf51

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
0xa7c: Call2 0xd4c

0xa7d: Stack[-2] = Stack[-1]
0xa7e: Pop(1)
0xa7f: Call2 0xc8d

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
0xa93: Call2 0xc7b

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
0xab9: Call2 0xdd0

0xaba: Pop(0)
0xabb: IF (Stack[-1] == 0) GOTO 0xac7; Pop(1)

0xabc: @ lshWaitForAnimEnd()
0xabd: Pop(0)
0xabe: Push( Stack[3 + Tasks[-1].StackPointer] )
0xabf: IF (Stack[-1] == 0) GOTO 0xac1; Pop(1)

0xac0: GOTO 0xac6

0xac1: PushEmpty(string)
0xac2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xac3: Call2 0xd17

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
0xad8: Call2 0xdd0

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
0xae8: Call2 0xd27

0xae9: Pop(2)
0xaea: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaeb: Return(); Pop(0)

0xaec: PushEmpty()
0xaed: Push((int) 1)
0xaee: IF (Stack[-1] == 0) GOTO 0xb15; Pop(1)

0xaef: PushEmpty()
0xaf0: Call2 0xd45

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
0xb0b: Call2 0xdd0

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
0xb78: Call2 0xd4c

0xb79: Stack[-2] = Stack[-1]
0xb7a: Pop(1)
0xb7b: Call2 0xcc7

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
0xb9b: Call2 0xd17

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
0xbaa: Call2 0xd17

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
0xbbd: Call2 0xf62

0xbbe: Pop(1)
0xbbf: PushEmpty(string)
0xbc0: Stack[-1] = "Neutral"
0xbc1: Call2 0xd17

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
0xbd4: Call2 0xdb7

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
0xbf8: Call2 0xdb0

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
0xc51: Call2 0xd52

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
0xc61: Push((bool) 1)
0xc62: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xc63: Pop(1)
0xc64: Push(CvectorIndex(Stack[-4], 0))
0xc65: Push(CvectorIndex(Stack[-5], 2))
0xc66: @ Rotate(Stack[-2], Stack[-1])
0xc67: Pop(2)
0xc68: PushEmpty(bool)
0xc69: Call2 0xdd0

0xc6a: Pop(0)
0xc6b: IF (Stack[-1] == 0) GOTO 0xc6d; Pop(1)

0xc6c: GOTO 0xc75

0xc6d: Push("head")
0xc6e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc6f: Pop(1)
0xc70: Push(Stack[-1])
0xc71: IF (Stack[-1] == 0) GOTO 0xc75; Pop(1)

0xc72: Push("head")
0xc73: @ LookAsyncCamera(Stack[-1])
0xc74: Pop(1)
0xc75: @ CameraWaitForPlayFinish()
0xc76: Pop(0)
0xc77: @ ResumeWorld()
0xc78: Pop(0)
0xc79: Stack[-21] = (bool) 1
0xc7a: Return(); Pop(18)

0xc7b: PushEmpty(bool, bool)
0xc7c: Push((bool) 1)
0xc7d: @ CameraSwitchToNormal(Stack[-1])
0xc7e: Pop(1)
0xc7f: PushEmpty(bool)
0xc80: Call2 0xdd0

0xc81: Pop(0)
0xc82: IF (Stack[-1] == 0) GOTO 0xc84; Pop(1)

0xc83: GOTO 0xc8c

0xc84: Push("head")
0xc85: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc86: Pop(1)
0xc87: Push(Stack[-1])
0xc88: IF (Stack[-1] == 0) GOTO 0xc8c; Pop(1)

0xc89: Push("head")
0xc8a: @ UnlookAsync(Stack[-1])
0xc8b: Pop(1)
0xc8c: Return(); Pop(2)

0xc8d: PushEmpty(int, int, int, int)
0xc8e: Push("voice_common")
0xc8f: @ GetVariable(Stack[-1], Stack[-3])
0xc90: Pop(1)
0xc91: Push(Stack[-2])
0xc92: IF (Stack[-1] == 0) GOTO 0xcb3; Pop(1)

0xc93: PushEmpty(bool, object)
0xc94: Stack[-1] = Stack[-7]
0xc95: Call2 0xcc7

0xc96: Pop(1)
0xc97: Pop(1); Push((bool) Stack[-1] == 0)
0xc98: IF (Stack[-1] == 0) GOTO 0xca1; Pop(1)

0xc99: PushEmpty(bool, object)
0xc9a: Stack[-1] = Stack[-7]
0xc9b: Call2 0xcec

0xc9c: Pop(1)
0xc9d: Pop(1); Push((bool) Stack[-1] == 0)
0xc9e: IF (Stack[-1] == 0) GOTO 0xca1; Pop(1)

0xc9f: Stack[-6] = (bool) 0
0xca0: Return(); Pop(4)

0xca1: Push((int) 2)
0xca2: @ irand(Stack[-2], Stack[-1])
0xca3: Pop(1)
0xca4: Push(Stack[-1])
0xca5: IF (Stack[-1] == 0) GOTO 0xcae; Pop(1)

0xca6: Push("voice_common")
0xca7: Push((int) 1)
0xca8: Pop(1); Push(Stack[-4] + Stack[-1]);
0xca9: Push((int) 3)
0xcaa: Pop(2); Push(Stack[-2] % Stack[-1]);
0xcab: @ SetVariable(Stack[-2], Stack[-1])
0xcac: Pop(2)
0xcad: GOTO 0xcb2

0xcae: Push("voice_common")
0xcaf: Push((int) 0)
0xcb0: @ SetVariable(Stack[-2], Stack[-1])
0xcb1: Pop(2)
0xcb2: GOTO 0xcc5

0xcb3: PushEmpty(bool, object)
0xcb4: Stack[-1] = Stack[-7]
0xcb5: Call2 0xcec

0xcb6: Pop(1)
0xcb7: Pop(1); Push((bool) Stack[-1] == 0)
0xcb8: IF (Stack[-1] == 0) GOTO 0xcc1; Pop(1)

0xcb9: PushEmpty(bool, object)
0xcba: Stack[-1] = Stack[-7]
0xcbb: Call2 0xcc7

0xcbc: Pop(1)
0xcbd: Pop(1); Push((bool) Stack[-1] == 0)
0xcbe: IF (Stack[-1] == 0) GOTO 0xcc1; Pop(1)

0xcbf: Stack[-6] = (bool) 0
0xcc0: Return(); Pop(4)

0xcc1: Push("voice_common")
0xcc2: Push((int) 1)
0xcc3: @ SetVariable(Stack[-2], Stack[-1])
0xcc4: Pop(2)
0xcc5: Stack[-6] = (bool) 1
0xcc6: Return(); Pop(4)

0xcc7: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xcc8: Stack[-5] = "c"
0xcc9: Stack[-4] = (int) 0
0xcca: Push((int) 1)
0xccb: IF (Stack[-1] == 0) GOTO 0xcd7; Pop(1)

0xccc: Push((int) 1)
0xccd: Pop(1); Push(Stack[-5] + Stack[-1]);
0xcce: Pop(1); Push(Stack[-6] + Stack[-1]);
0xccf: @@ HasProperty(Stack[-1], Stack[-4])
0xcd0: Pop(1)
0xcd1: Pop(0); Push((bool) Stack[-3] == 0)
0xcd2: IF (Stack[-1] == 0) GOTO 0xcd4; Pop(1)

0xcd3: GOTO 0xcd7

0xcd4: Push((int) 1)
0xcd5: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xcd6: GOTO 0xcca

0xcd7: Pop(0); Push((bool) Stack[-4] == 0)
0xcd8: IF (Stack[-1] == 0) GOTO 0xcdb; Pop(1)

0xcd9: Stack[-12] = (bool) 0
0xcda: Return(); Pop(10)

0xcdb: Stack[-2] = (int) 0
0xcdc: Push((int) 1)
0xcdd: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xcde: IF (Stack[-1] == 0) GOTO 0xce1; Pop(1)

0xcdf: @ irand(Stack[-2], Stack[-4])
0xce0: Pop(0)
0xce1: Push((int) 1)
0xce2: Pop(1); Push(Stack[-3] + Stack[-1]);
0xce3: Pop(1); Push(Stack[-6] + Stack[-1]);
0xce4: @@ GetProperty(Stack[-1], Stack[-2])
0xce5: Pop(1)
0xce6: PushEmpty(bool, string)
0xce7: Stack[-1] = Stack[-3]
0xce8: Call2 0xd36

0xce9: Stack[-14] = Stack[-2]
0xcea: Pop(2)
0xceb: Return(); Pop(10)

0xcec: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xced: Push("d")
0xcee: PushEmpty(int)
0xcef: Call2 0xd99

0xcf0: Pop(0)
0xcf1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcf2: Push("m")
0xcf3: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xcf4: Stack[-4] = (int) 0
0xcf5: Push((int) 1)
0xcf6: IF (Stack[-1] == 0) GOTO 0xd02; Pop(1)

0xcf7: Push((int) 1)
0xcf8: Pop(1); Push(Stack[-5] + Stack[-1]);
0xcf9: Pop(1); Push(Stack[-6] + Stack[-1]);
0xcfa: @@ HasProperty(Stack[-1], Stack[-4])
0xcfb: Pop(1)
0xcfc: Pop(0); Push((bool) Stack[-3] == 0)
0xcfd: IF (Stack[-1] == 0) GOTO 0xcff; Pop(1)

0xcfe: GOTO 0xd02

0xcff: Push((int) 1)
0xd00: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xd01: GOTO 0xcf5

0xd02: Pop(0); Push((bool) Stack[-4] == 0)
0xd03: IF (Stack[-1] == 0) GOTO 0xd06; Pop(1)

0xd04: Stack[-12] = (bool) 0
0xd05: Return(); Pop(10)

0xd06: Stack[-2] = (int) 0
0xd07: Push((int) 1)
0xd08: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xd09: IF (Stack[-1] == 0) GOTO 0xd0c; Pop(1)

0xd0a: @ irand(Stack[-2], Stack[-4])
0xd0b: Pop(0)
0xd0c: Push((int) 1)
0xd0d: Pop(1); Push(Stack[-3] + Stack[-1]);
0xd0e: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd0f: @@ GetProperty(Stack[-1], Stack[-2])
0xd10: Pop(1)
0xd11: PushEmpty(bool, string)
0xd12: Stack[-1] = Stack[-3]
0xd13: Call2 0xd36

0xd14: Stack[-14] = Stack[-2]
0xd15: Pop(2)
0xd16: Return(); Pop(10)

0xd17: PushEmpty(bool, float, float, bool, float, float)
0xd18: @ lshHasAnimation(Stack[-3], Stack[-7])
0xd19: Pop(0)
0xd1a: Push(Stack[-3])
0xd1b: IF (Stack[-1] == 0) GOTO 0xd22; Pop(1)

0xd1c: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xd1d: Pop(0)
0xd1e: Push((bool) 0)
0xd1f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xd20: Pop(1)
0xd21: GOTO 0xd26

0xd22: Push("Can't find lsh animation : ")
0xd23: Pop(1); Push(Stack[-1] + Stack[-8]);
0xd24: @ Trace(Stack[-1])
0xd25: Pop(1)
0xd26: Return(); Pop(6)

0xd27: PushEmpty(bool, float, float, bool, float, float)
0xd28: @ lshHasAnimation(Stack[-3], Stack[-8])
0xd29: Pop(0)
0xd2a: Push(Stack[-3])
0xd2b: IF (Stack[-1] == 0) GOTO 0xd31; Pop(1)

0xd2c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xd2d: Pop(0)
0xd2e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xd2f: Pop(0)
0xd30: GOTO 0xd35

0xd31: Push("Can't find lsh animation : ")
0xd32: Pop(1); Push(Stack[-1] + Stack[-9]);
0xd33: @ Trace(Stack[-1])
0xd34: Pop(1)
0xd35: Return(); Pop(6)

0xd36: PushEmpty(bool, bool)
0xd37: PushEmpty(bool)
0xd38: Call2 0xdd0

0xd39: Pop(0)
0xd3a: IF (Stack[-1] == 0) GOTO 0xd43; Pop(1)

0xd3b: @ lshHasSpeech(Stack[-1], Stack[-3])
0xd3c: Pop(0)
0xd3d: Push(Stack[-1])
0xd3e: IF (Stack[-1] == 0) GOTO 0xd43; Pop(1)

0xd3f: @ lshPlaySpeech(Stack[-3])
0xd40: Pop(0)
0xd41: Stack[-4] = (bool) 1
0xd42: Return(); Pop(2)

0xd43: Stack[-4] = (bool) 0
0xd44: Return(); Pop(2)

0xd45: PushEmpty(bool)
0xd46: Call2 0xdd0

0xd47: Pop(0)
0xd48: IF (Stack[-1] == 0) GOTO 0xd4b; Pop(1)

0xd49: @ lshStopSpeech()
0xd4a: Pop(0)
0xd4b: Return(); Pop(0)

0xd4c: PushEmpty(object, object)
0xd4d: @ self(Stack[-1])
0xd4e: Pop(0)
0xd4f: Stack[-3] = Stack[-1]
0xd50: Return(); Pop(2)

0xd51: Stack[-1] = 0
0xd52: PushEmpty(float, float)
0xd53: Pop(0); Push(Stack[-3] | Stack[-3]);
0xd54: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xd55: Push((float)0.0)
0xd56: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xd57: IF (Stack[-1] == 0) GOTO 0xd5a; Pop(1)

0xd58: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xd59: Return(); Pop(2)

0xd5a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xd5b: Return(); Pop(2)

0xd5c: PushEmpty(int, int)
0xd5d: @ GetVariable(Stack[-3], Stack[-1])
0xd5e: Pop(0)
0xd5f: Stack[-4] = Stack[-1]
0xd60: Return(); Pop(2)

0xd61: PushEmpty(object, object)
0xd62: @ CreateIntVector(Stack[-1])
0xd63: Pop(0)
0xd64: @@ add(Stack[-4])
0xd65: Pop(0)
0xd66: @@ add(Stack[-3])
0xd67: Pop(0)
0xd68: Push((int) 3)
0xd69: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xd6a: Pop(1)
0xd6b: Return(); Pop(2)

0xd6c: Stack[-1] = 0
0xd6d: PushEmpty(int, int, bool, int, int, bool)
0xd6e: @@ GetItemID(Stack[-3])
0xd6f: Pop(0)
0xd70: Push("Category")
0xd71: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xd72: Pop(1)
0xd73: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xd74: Pop(0)
0xd75: Pop(0); Push((bool) Stack[-1] == 0)
0xd76: IF (Stack[-1] == 0) GOTO 0xd7a; Pop(1)

0xd77: @@ DropItems(Stack[-8], Stack[-7])
0xd78: Pop(0)
0xd79: GOTO 0xd7f

0xd7a: PushEmpty(int, int)
0xd7b: Stack[-2] = Stack[-5]
0xd7c: Stack[-1] = Stack[-9]
0xd7d: Call2 0xd61

0xd7e: Pop(2)
0xd7f: Return(); Pop(6)

0xd80: PushEmpty(object, object)
0xd81: @ CreateInvItem(Stack[-1])
0xd82: Pop(0)
0xd83: @@ SetItemName(Stack[-4])
0xd84: Pop(0)
0xd85: PushEmpty(object, object, int)
0xd86: Stack[-3] = Stack[-8]
0xd87: Stack[-2] = Stack[-4]
0xd88: Stack[-1] = Stack[-6]
0xd89: Call2 0xd6d

0xd8a: Pop(3)
0xd8b: Return(); Pop(2)

0xd8c: Stack[-1] = 0
0xd8d: PushEmpty(object, object)
0xd8e: @ FindActor(Stack[-1], Stack[-4])
0xd8f: Pop(0)
0xd90: Pop(0); Push((bool) Stack[-1] == 0)
0xd91: IF (Stack[-1] == 0) GOTO 0xd94; Pop(1)

0xd92: Stack[-5] = (bool) 0
0xd93: Return(); Pop(2)

0xd94: @ Trigger(Stack[-1], Stack[-3])
0xd95: Pop(0)
0xd96: Stack[-5] = (bool) 1
0xd97: Return(); Pop(2)

0xd98: Stack[-1] = 0
0xd99: PushEmpty(float, float)
0xd9a: @ GetGameTime(Stack[-1])
0xd9b: Pop(0)
0xd9c: Push((int) 1)
0xd9d: PushEmpty(int)
0xd9e: Push((int) 24)
0xd9f: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xda0: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xda1: Return(); Pop(2)

0xda2: PushEmpty(float, float)
0xda3: @ GetGameTime(Stack[-1])
0xda4: Pop(0)
0xda5: PushEmpty(int)
0xda6: Stack[-1] = Stack[-2]
0xda7: Push((int) 24)
0xda8: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xda9: Return(); Pop(2)

0xdaa: PushEmpty()
0xdab: PushEmpty(int)
0xdac: Call2 0xd99

0xdad: Pop(0)
0xdae: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xdaf: Return(); Pop(0)

0xdb0: PushEmpty(string, string)
0xdb1: Stack[-1] = "idle"
0xdb2: Push(Stack[-3])
0xdb3: IF (Stack[-1] == 0) GOTO 0xdb5; Pop(1)

0xdb4: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xdb5: Stack[-4] = Stack[-1]
0xdb6: Return(); Pop(2)

0xdb7: PushEmpty(int, bool, int, bool)
0xdb8: Stack[-2] = (int) 0
0xdb9: Push("all")
0xdba: PushEmpty(string, int)
0xdbb: Stack[-1] = Stack[-5]
0xdbc: Call2 0xdb0

0xdbd: Pop(1)
0xdbe: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xdbf: Pop(2)
0xdc0: Pop(0); Push((bool) Stack[-1] == 0)
0xdc1: IF (Stack[-1] == 0) GOTO 0xdc3; Pop(1)

0xdc2: GOTO 0xdc6

0xdc3: Push((int) 1)
0xdc4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xdc5: GOTO 0xdb9

0xdc6: Stack[-5] = Stack[-2]
0xdc7: Return(); Pop(4)

0xdc8: Stack[-1] = (int) 515532
0xdc9: Return(); Pop(0)

0xdca: Stack[-1] = (int) 514840
0xdcb: Return(); Pop(0)

0xdcc: Stack[-1] = "ui/NPC_Block.png"
0xdcd: Return(); Pop(0)

0xdce: Stack[-1] = "ui/NPC_Block_b.png"
0xdcf: Return(); Pop(0)

0xdd0: Stack[-1] = (bool) 1
0xdd1: Return(); Pop(0)

0xdd2: PushEmpty()
0xdd3: Push("playsound")
0xdd4: Push("giveitem")
0xdd5: @ TriggerWorld(Stack[-2], Stack[-1])
0xdd6: Pop(2)
0xdd7: Return(); Pop(0)

0xdd8: PushEmpty()
0xdd9: Push("ood9Block3")
0xdda: Push((int) 1)
0xddb: @ SetVariable(Stack[-2], Stack[-1])
0xddc: Pop(2)
0xddd: Return(); Pop(0)

0xdde: PushEmpty()
0xddf: Push("d9q02")
0xde0: Push((int) 2)
0xde1: @ SetVariable(Stack[-2], Stack[-1])
0xde2: Pop(2)
0xde3: PushEmpty()
0xde4: Call2 0xf1b

0xde5: Pop(0)
0xde6: PushEmpty(bool, string, string)
0xde7: Stack[-2] = "quest_d9_02"
0xde8: Stack[-1] = "init_soldiers"
0xde9: Call2 0xd8d

0xdea: Pop(3)
0xdeb: Return(); Pop(0)

0xdec: PushEmpty()
0xded: Push("d9LaraIsSaved")
0xdee: Push((int) 1)
0xdef: @ SetVariable(Stack[-2], Stack[-1])
0xdf0: Pop(2)
0xdf1: Return(); Pop(0)

0xdf2: PushEmpty()
0xdf3: PushEmpty()
0xdf4: Call2 0xf0e

0xdf5: Pop(0)
0xdf6: PushEmpty(bool, string, string)
0xdf7: Stack[-2] = "quest_d10_03"
0xdf8: Stack[-1] = "place_sanitars"
0xdf9: Call2 0xd8d

0xdfa: Pop(3)
0xdfb: PushEmpty(bool, string, string)
0xdfc: Stack[-2] = "quest_d10_03"
0xdfd: Stack[-1] = "completed"
0xdfe: Call2 0xd8d

0xdff: Pop(3)
0xe00: Return(); Pop(0)

0xe01: PushEmpty()
0xe02: Push("ood12Block1")
0xe03: Push((int) 1)
0xe04: @ SetVariable(Stack[-2], Stack[-1])
0xe05: Pop(2)
0xe06: Return(); Pop(0)

0xe07: PushEmpty()
0xe08: Push("d11RotaTalk")
0xe09: Push((int) 1)
0xe0a: @ SetVariable(Stack[-2], Stack[-1])
0xe0b: Pop(2)
0xe0c: Return(); Pop(0)

0xe0d: PushEmpty()
0xe0e: Push("d9TalkToPolkovodec")
0xe0f: Push((int) 1)
0xe10: @ SetVariable(Stack[-2], Stack[-1])
0xe11: Pop(2)
0xe12: Return(); Pop(0)

0xe13: PushEmpty()
0xe14: Push("ood9Block1")
0xe15: Push((int) 1)
0xe16: @ SetVariable(Stack[-2], Stack[-1])
0xe17: Pop(2)
0xe18: Return(); Pop(0)

0xe19: PushEmpty(object, object)
0xe1a: Push("Rifle is given")
0xe1b: @ Trace(Stack[-1])
0xe1c: Pop(1)
0xe1d: @ CreateInvItem(Stack[-1])
0xe1e: Pop(0)
0xe1f: Push("Rifle")
0xe20: @@ SetItemName(Stack[-1])
0xe21: Pop(1)
0xe22: Push("durability")
0xe23: Push((int) 100)
0xe24: @@ SetProperty(Stack[-2], Stack[-1])
0xe25: Pop(2)
0xe26: PushEmpty(object, object, int)
0xe27: Stack[-3] = Stack[-7]
0xe28: Stack[-2] = Stack[-4]
0xe29: Stack[-1] = (int) 1
0xe2a: Call2 0xd6d

0xe2b: Pop(3)
0xe2c: Return(); Pop(2)

0xe2d: Stack[-1] = 0
0xe2e: PushEmpty()
0xe2f: Push("ood11Block1")
0xe30: Push((int) 1)
0xe31: @ SetVariable(Stack[-2], Stack[-1])
0xe32: Pop(2)
0xe33: Return(); Pop(0)

0xe34: PushEmpty()
0xe35: Push("ood11Block2")
0xe36: Push((int) 1)
0xe37: @ SetVariable(Stack[-2], Stack[-1])
0xe38: Pop(2)
0xe39: Return(); Pop(0)

0xe3a: PushEmpty()
0xe3b: Push("ood11Block3")
0xe3c: Push((int) 1)
0xe3d: @ SetVariable(Stack[-2], Stack[-1])
0xe3e: Pop(2)
0xe3f: Return(); Pop(0)

0xe40: PushEmpty()
0xe41: Push("rifle ammo10 is given")
0xe42: @ Trace(Stack[-1])
0xe43: Pop(1)
0xe44: PushEmpty(object, string, int)
0xe45: Stack[-3] = Stack[-5]
0xe46: Stack[-2] = "rifle_ammo"
0xe47: Stack[-1] = (int) 10
0xe48: Call2 0xd80

0xe49: Pop(3)
0xe4a: Return(); Pop(0)

0xe4b: PushEmpty()
0xe4c: Push("ood9Block2")
0xe4d: Push((int) 1)
0xe4e: @ SetVariable(Stack[-2], Stack[-1])
0xe4f: Pop(2)
0xe50: Return(); Pop(0)

0xe51: PushEmpty()
0xe52: PushEmpty(bool, object)
0xe53: Stack[-1] = Stack[-3]
0xe54: Call2 0xf03

0xe55: Pop(1)
0xe56: IF (Stack[-1] == 0) GOTO 0xe59; Pop(1)

0xe57: Stack[-2] = (bool) 1
0xe58: Return(); Pop(0)

0xe59: Stack[-2] = (bool) 0
0xe5a: Return(); Pop(0)

0xe5b: PushEmpty()
0xe5c: PushEmpty(int, string)
0xe5d: Stack[-1] = "d8q01"
0xe5e: Call2 0xd5c

0xe5f: Pop(1)
0xe60: Push((int) 1000)
0xe61: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe62: IF (Stack[-1] == 0) GOTO 0xe65; Pop(1)

0xe63: Stack[-2] = (bool) 1
0xe64: Return(); Pop(0)

0xe65: Stack[-2] = (bool) 0
0xe66: Return(); Pop(0)

0xe67: PushEmpty()
0xe68: PushEmpty(int, string)
0xe69: Stack[-1] = "ood9Block3"
0xe6a: Call2 0xd5c

0xe6b: Pop(1)
0xe6c: Push((int) 0)
0xe6d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe6e: IF (Stack[-1] == 0) GOTO 0xe71; Pop(1)

0xe6f: Stack[-2] = (bool) 1
0xe70: Return(); Pop(0)

0xe71: Stack[-2] = (bool) 0
0xe72: Return(); Pop(0)

0xe73: PushEmpty()
0xe74: PushEmpty(int, string)
0xe75: Stack[-1] = "d9q02"
0xe76: Call2 0xd5c

0xe77: Pop(1)
0xe78: Push((int) 1)
0xe79: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe7a: IF (Stack[-1] == 0) GOTO 0xe7d; Pop(1)

0xe7b: Stack[-2] = (bool) 1
0xe7c: Return(); Pop(0)

0xe7d: Stack[-2] = (bool) 0
0xe7e: Return(); Pop(0)

0xe7f: PushEmpty()
0xe80: PushEmpty(int, string)
0xe81: Stack[-1] = "d10q03"
0xe82: Call2 0xd5c

0xe83: Pop(1)
0xe84: Push((int) 3)
0xe85: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe86: IF (Stack[-1] == 0) GOTO 0xe89; Pop(1)

0xe87: Stack[-2] = (bool) 1
0xe88: Return(); Pop(0)

0xe89: Stack[-2] = (bool) 0
0xe8a: Return(); Pop(0)

0xe8b: PushEmpty()
0xe8c: PushEmpty(int, string)
0xe8d: Stack[-1] = "ood12Block1"
0xe8e: Call2 0xd5c

0xe8f: Pop(1)
0xe90: Push((int) 0)
0xe91: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe92: IF (Stack[-1] == 0) GOTO 0xe95; Pop(1)

0xe93: Stack[-2] = (bool) 1
0xe94: Return(); Pop(0)

0xe95: Stack[-2] = (bool) 0
0xe96: Return(); Pop(0)

0xe97: PushEmpty()
0xe98: PushEmpty(int, string)
0xe99: Stack[-1] = "d9q01"
0xe9a: Call2 0xd5c

0xe9b: Pop(1)
0xe9c: Push((int) 2)
0xe9d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe9e: IF (Stack[-1] == 0) GOTO 0xea1; Pop(1)

0xe9f: Stack[-2] = (bool) 1
0xea0: Return(); Pop(0)

0xea1: Stack[-2] = (bool) 0
0xea2: Return(); Pop(0)

0xea3: PushEmpty()
0xea4: PushEmpty(int, string)
0xea5: Stack[-1] = "ood9Block1"
0xea6: Call2 0xd5c

0xea7: Pop(1)
0xea8: Push((int) 0)
0xea9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xeaa: IF (Stack[-1] == 0) GOTO 0xead; Pop(1)

0xeab: Stack[-2] = (bool) 1
0xeac: Return(); Pop(0)

0xead: Stack[-2] = (bool) 0
0xeae: Return(); Pop(0)

0xeaf: PushEmpty()
0xeb0: PushEmpty(int, string)
0xeb1: Stack[-1] = "d11q02"
0xeb2: Call2 0xd5c

0xeb3: Pop(1)
0xeb4: Push((int) 1)
0xeb5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xeb6: IF (Stack[-1] == 0) GOTO 0xeb9; Pop(1)

0xeb7: Stack[-2] = (bool) 1
0xeb8: Return(); Pop(0)

0xeb9: Stack[-2] = (bool) 0
0xeba: Return(); Pop(0)

0xebb: PushEmpty()
0xebc: PushEmpty(int, string)
0xebd: Stack[-1] = "d11q01"
0xebe: Call2 0xd5c

0xebf: Pop(1)
0xec0: Push((int) 2)
0xec1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xec2: IF (Stack[-1] == 0) GOTO 0xec5; Pop(1)

0xec3: Stack[-2] = (bool) 1
0xec4: Return(); Pop(0)

0xec5: Stack[-2] = (bool) 0
0xec6: Return(); Pop(0)

0xec7: PushEmpty()
0xec8: PushEmpty(int, string)
0xec9: Stack[-1] = "ood11Block1"
0xeca: Call2 0xd5c

0xecb: Pop(1)
0xecc: Push((int) 0)
0xecd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xece: IF (Stack[-1] == 0) GOTO 0xed1; Pop(1)

0xecf: Stack[-2] = (bool) 1
0xed0: Return(); Pop(0)

0xed1: Stack[-2] = (bool) 0
0xed2: Return(); Pop(0)

0xed3: PushEmpty()
0xed4: PushEmpty(int, string)
0xed5: Stack[-1] = "d11q01"
0xed6: Call2 0xd5c

0xed7: Pop(1)
0xed8: Push((int) 3)
0xed9: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xeda: IF (Stack[-1] == 0) GOTO 0xedd; Pop(1)

0xedb: Stack[-2] = (bool) 1
0xedc: Return(); Pop(0)

0xedd: Stack[-2] = (bool) 0
0xede: Return(); Pop(0)

0xedf: PushEmpty()
0xee0: PushEmpty(int, string)
0xee1: Stack[-1] = "ood11Block2"
0xee2: Call2 0xd5c

0xee3: Pop(1)
0xee4: Push((int) 0)
0xee5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xee6: IF (Stack[-1] == 0) GOTO 0xee9; Pop(1)

0xee7: Stack[-2] = (bool) 1
0xee8: Return(); Pop(0)

0xee9: Stack[-2] = (bool) 0
0xeea: Return(); Pop(0)

0xeeb: PushEmpty()
0xeec: PushEmpty(int, string)
0xeed: Stack[-1] = "ood11Block3"
0xeee: Call2 0xd5c

0xeef: Pop(1)
0xef0: Push((int) 0)
0xef1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xef2: IF (Stack[-1] == 0) GOTO 0xef5; Pop(1)

0xef3: Stack[-2] = (bool) 1
0xef4: Return(); Pop(0)

0xef5: Stack[-2] = (bool) 0
0xef6: Return(); Pop(0)

0xef7: PushEmpty()
0xef8: PushEmpty(int, string)
0xef9: Stack[-1] = "ood9Block2"
0xefa: Call2 0xd5c

0xefb: Pop(1)
0xefc: Push((int) 0)
0xefd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xefe: IF (Stack[-1] == 0) GOTO 0xf01; Pop(1)

0xeff: Stack[-2] = (bool) 1
0xf00: Return(); Pop(0)

0xf01: Stack[-2] = (bool) 0
0xf02: Return(); Pop(0)

0xf03: PushEmpty()
0xf04: PushEmpty(int)
0xf05: Call2 0xda2

0xf06: Pop(0)
0xf07: Push((int) 19)
0xf08: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xf09: IF (Stack[-1] == 0) GOTO 0xf0c; Pop(1)

0xf0a: Stack[-2] = (bool) 1
0xf0b: Return(); Pop(0)

0xf0c: Stack[-2] = (bool) 0
0xf0d: Return(); Pop(0)

0xf0e: PushEmpty(object, object)
0xf0f: Push((int) 676)
0xf10: Push((int) 2)
0xf11: Push((int) 534161)
0xf12: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf13: Pop(3)
0xf14: PushEmpty(bool, object, int)
0xf15: Stack[-2] = Stack[-4]
0xf16: Stack[-1] = (int) 672
0xf17: Call2 0xf35

0xf18: Pop(3)
0xf19: Return(); Pop(2)

0xf1a: Stack[-1] = 0
0xf1b: PushEmpty(object, object)
0xf1c: Push((int) 657)
0xf1d: Push((int) 2)
0xf1e: Push((int) 533575)
0xf1f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf20: Pop(3)
0xf21: PushEmpty(bool, object, int)
0xf22: Stack[-2] = Stack[-4]
0xf23: Stack[-1] = (int) 655
0xf24: Call2 0xf35

0xf25: Pop(3)
0xf26: Return(); Pop(2)

0xf27: Stack[-1] = 0
0xf28: PushEmpty(object, object)
0xf29: @ GetDiaryRoot(Stack[-1])
0xf2a: Pop(0)
0xf2b: Pop(0); Push((bool) Stack[-1] == 0)
0xf2c: IF (Stack[-1] == 0) GOTO 0xf32; Pop(1)

0xf2d: Push("Can't retrieve diary root")
0xf2e: @ Trace(Stack[-1])
0xf2f: Pop(1)
0xf30: Stack[-3] = (bool) 0
0xf31: Return(); Pop(2)

0xf32: Stack[-3] = Stack[-1]
0xf33: Return(); Pop(2)

0xf34: Stack[-1] = 0
0xf35: PushEmpty(object, object, int, object, object, int)
0xf36: PushEmpty(object)
0xf37: Call2 0xf28

0xf38: Stack[-4] = Stack[-1]
0xf39: Pop(1)
0xf3a: @@ Find(Stack[-7], Stack[-2])
0xf3b: Pop(0)
0xf3c: Pop(0); Push((bool) Stack[-2] == 0)
0xf3d: IF (Stack[-1] == 0) GOTO 0xf44; Pop(1)

0xf3e: Push("Can't find diary parent with id: ")
0xf3f: Pop(1); Push(Stack[-1] + Stack[-8]);
0xf40: @ Trace(Stack[-1])
0xf41: Pop(1)
0xf42: Stack[-9] = (bool) 0
0xf43: Return(); Pop(6)

0xf44: @@ AddChild(Stack[-8])
0xf45: Pop(0)
0xf46: Push((int) 7)
0xf47: @ SendWorldWndMessage(Stack[-1])
0xf48: Pop(1)
0xf49: @@ GetCategory(Stack[-1])
0xf4a: Pop(0)
0xf4b: @ SetDiarySection(Stack[-1])
0xf4c: Pop(0)
0xf4d: Stack[-9] = (bool) 0
0xf4e: Return(); Pop(6)

0xf4f: Stack[-2] = 0
0xf50: Stack[-3] = 0
0xf51: PushEmpty(int, int)
0xf52: Push("branch")
0xf53: @ GetVariable(Stack[-1], Stack[-2])
0xf54: Pop(1)
0xf55: Push((int) 0)
0xf56: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf57: IF (Stack[-1] == 0) GOTO 0xf5b; Pop(1)

0xf58: Stack[-3] = (int) 1
0xf59: Return(); Pop(2)

0xf5a: GOTO 0xf60

0xf5b: Push((int) 1)
0xf5c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf5d: IF (Stack[-1] == 0) GOTO 0xf60; Pop(1)

0xf5e: Stack[-3] = (int) 2
0xf5f: Return(); Pop(2)

0xf60: Stack[-3] = (int) 3
0xf61: Return(); Pop(2)

0xf62: PushEmpty()
0xf63: PushEmpty(bool, int)
0xf64: Stack[-1] = (int) 9
0xf65: Call2 0xdaa

0xf66: Pop(1)
0xf67: IF (Stack[-1] == 0) GOTO 0xf6f; Pop(1)

0xf68: PushEmpty(int, object)
0xf69: Stack[-1] = Stack[-3]
0xf6a: Push(-2, 1); TaskCall(0)
0xf6b: Call2 0x0

0xf6c: Pop(-2, 1); TaskReturn
0xf6d: Pop(2)
0xf6e: Return(); Pop(0)

0xf6f: PushEmpty(bool, int)
0xf70: Stack[-1] = (int) 10
0xf71: Call2 0xdaa

0xf72: Pop(1)
0xf73: IF (Stack[-1] == 0) GOTO 0xf7b; Pop(1)

0xf74: PushEmpty(int, object)
0xf75: Stack[-1] = Stack[-3]
0xf76: Push(-2, 1); TaskCall(4)
0xf77: Call2 0x6d9

0xf78: Pop(-2, 1); TaskReturn
0xf79: Pop(2)
0xf7a: Return(); Pop(0)

0xf7b: PushEmpty(bool, int)
0xf7c: Stack[-1] = (int) 11
0xf7d: Call2 0xdaa

0xf7e: Pop(1)
0xf7f: IF (Stack[-1] == 0) GOTO 0xf87; Pop(1)

0xf80: PushEmpty(int, object)
0xf81: Stack[-1] = Stack[-3]
0xf82: Push(-2, 1); TaskCall(2)
0xf83: Call2 0x3d8

0xf84: Pop(-2, 1); TaskReturn
0xf85: Pop(2)
0xf86: Return(); Pop(0)

0xf87: PushEmpty(bool, int)
0xf88: Stack[-1] = (int) 12
0xf89: Call2 0xdaa

0xf8a: Pop(1)
0xf8b: IF (Stack[-1] == 0) GOTO 0xf93; Pop(1)

0xf8c: PushEmpty(int, object)
0xf8d: Stack[-1] = Stack[-3]
0xf8e: Push(-2, 1); TaskCall(6)
0xf8f: Call2 0x871

0xf90: Pop(-2, 1); TaskReturn
0xf91: Pop(2)
0xf92: Return(); Pop(0)

0xf93: PushEmpty(int, object)
0xf94: Stack[-1] = Stack[-3]
0xf95: Push(-2, 1); TaskCall(8)
0xf96: Call2 0xa4b

0xf97: Pop(-2, 1); TaskReturn
0xf98: Pop(2)
0xf99: Return(); Pop(0)

