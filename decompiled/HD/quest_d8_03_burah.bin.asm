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
	Smile
	Sorrow
	Agression
	cleanup
	restore
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
	playsound
	giveitem
	ood8Burah2
	ood8Burah3
	d8q03
	quest_d8_03
	completed
	burah gives blood
	d8q03_blood
	burah gives serum
	burah_serum
	ood8Burah1
	d8q04
	d8BurahLetter
	microscope_d8q03_blood
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Burah.png
	ui/NPC_Burah_b.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
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

RunOp = 0x42a
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xee Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x42e Vars = (string)
		EVENT_6 Op = 0x442 Vars = ()
		EVENT_5 Op = 0x44f Vars = ()
		EVENT_7 Op = 0x498 Vars = (int)
		EVENT_45 Op = 0x4da Vars = (bool)
		EVENT_0 Op = 0x4e6 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x56f

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x810

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x80e

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x812

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x814

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x7fd

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
0x31: Call2 0x685

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x5c6

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
0x48: Call2 0x5b4

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
0x56: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0xd8

0x5a: Pop(1)
0x5b: Push((int) 513423)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x770

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 513424)
0x66: Push((int) 14661)
0x67: Push((int) 14660)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: PushEmpty(bool)
0x6b: Stack[-1] = (bool) 0
0x6c: PushEmpty(bool, object)
0x6d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e: Call2 0x77c

0x6f: Pop(1)
0x70: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x71: PushEmpty(bool, object)
0x72: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73: Call2 0x788

0x74: Pop(1)
0x75: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x76: Stack[-1] = (bool) 1
0x77: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x78: Push((int) 513447)
0x79: Push((int) 37690)
0x7a: Push((int) 14683)
0x7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c: Pop(3)
0x7d: PushEmpty(bool, object)
0x7e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f: Call2 0x794

0x80: Pop(1)
0x81: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x82: Push((int) 513433)
0x83: Push((int) 14670)
0x84: Push((int) 14669)
0x85: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86: Pop(3)
0x87: PushEmpty(bool)
0x88: Stack[-1] = (bool) 0
0x89: PushEmpty(bool, object)
0x8a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b: Call2 0x740

0x8c: Pop(1)
0x8d: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8e: PushEmpty(bool, object)
0x8f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90: Call2 0x74c

0x91: Pop(1)
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: Stack[-1] = (bool) 1
0x94: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x95: Push((int) 535977)
0x96: Push((int) 37706)
0x97: Push((int) 37705)
0x98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99: Pop(3)
0x9a: PushEmpty(bool)
0x9b: Stack[-1] = (bool) 0
0x9c: PushEmpty(bool, object)
0x9d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e: Call2 0x758

0x9f: Pop(1)
0xa0: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa1: PushEmpty(bool, object)
0xa2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa3: Call2 0x764

0xa4: Pop(1)
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Stack[-1] = (bool) 1
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: Push((int) 538666)
0xa9: Push((int) 40565)
0xaa: Push((int) 40564)
0xab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac: Pop(3)
0xad: Push((int) 513460)
0xae: Push((int) -1)
0xaf: Push((int) 14697)
0xb0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1: Pop(3)
0xb2: Push((int) 535944)
0xb3: Push((int) -1)
0xb4: Push((int) 37665)
0xb5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb6: Pop(3)
0xb7: GOTO 0xba

0xb8: Return(); Pop(0)

0xb9: GOTO 0x55

0xba: PushEmpty(bool)
0xbb: Call2 0x816

0xbc: Pop(0)
0xbd: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xbe: @ lshWaitForAnimEnd()
0xbf: Pop(0)
0xc0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc1: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc2: GOTO 0xc8

0xc3: PushEmpty(string)
0xc4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc5: Call2 0x650

0xc6: Pop(1)
0xc7: GOTO 0xbe

0xc8: GOTO 0xd7

0xc9: Push("all")
0xca: Push("idle")
0xcb: @ PlayAnimation(Stack[-2], Stack[-1])
0xcc: Pop(2)
0xcd: @ WaitForAnimEnd()
0xce: Pop(0)
0xcf: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd0: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd1: GOTO 0xd7

0xd2: Push("all")
0xd3: Push("idle")
0xd4: @ PlayAnimation(Stack[-2], Stack[-1])
0xd5: Pop(2)
0xd6: GOTO 0xcd

0xd7: Return(); Pop(0)

0xd8: PushEmpty()
0xd9: PushEmpty(bool)
0xda: Call2 0x816

0xdb: Pop(0)
0xdc: Pop(1); Push((bool) Stack[-1] == 0)
0xdd: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xde: Return(); Pop(0)

0xdf: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe0: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xe1: Return(); Pop(0)

0xe2: PushEmpty(string, bool)
0xe3: Stack[-2] = Stack[-3]
0xe4: Push("")
0xe5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe7: Stack[-1] = (bool) 0
0xe8: GOTO 0xea

0xe9: Stack[-1] = (bool) 1
0xea: Call2 0x660

0xeb: Pop(2)
0xec: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xed: Return(); Pop(0)

0xee: PushEmpty()
0xef: Push((int) 1)
0xf0: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0xf1: PushEmpty()
0xf2: Call2 0x67e

0xf3: Pop(0)
0xf4: Push((int) 14668)
0xf5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf7: PushEmpty(object, object)
0xf8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfa: Call2 0x705

0xfb: Pop(2)
0xfc: PushEmpty(object, object)
0xfd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xff: Call2 0x71b

0x100: Pop(2)
0x101: PushEmpty(object, object)
0x102: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x103: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x104: Call2 0x6f3

0x105: Pop(2)
0x106: Push((int) 14696)
0x107: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x109: PushEmpty(object, object)
0x10a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10c: Call2 0x72f

0x10d: Pop(2)
0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call2 0x6f3

0x112: Pop(2)
0x113: PushEmpty(object, object)
0x114: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x115: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x116: Call2 0x711

0x117: Pop(2)
0x118: Push((int) 14692)
0x119: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11b: PushEmpty(object, object)
0x11c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11e: Call2 0x726

0x11f: Pop(2)
0x120: Push((int) 37696)
0x121: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x123: PushEmpty(object, object)
0x124: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x125: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x126: Call2 0x726

0x127: Pop(2)
0x128: Push((int) 14669)
0x129: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12b: PushEmpty(object, object)
0x12c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12e: Call2 0x73a

0x12f: Pop(2)
0x130: Push((int) 37705)
0x131: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x133: PushEmpty(object, object)
0x134: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x135: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x136: Call2 0x6f9

0x137: Pop(2)
0x138: Push((int) 40564)
0x139: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13b: PushEmpty(object, object)
0x13c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13e: Call2 0x6ff

0x13f: Pop(2)
0x140: Push((int) 14659)
0x141: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Neutral"
0x145: Call2 0xd8

0x146: Pop(1)
0x147: Push((int) 513423)
0x148: @@ SetMessage(Stack[-1])
0x149: Pop(1)
0x14a: @@ ClearReplies()
0x14b: Pop(0)
0x14c: PushEmpty(bool, object)
0x14d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14e: Call2 0x770

0x14f: Pop(1)
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: Push((int) 513424)
0x152: Push((int) 14661)
0x153: Push((int) 14660)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: PushEmpty(bool)
0x157: Stack[-1] = (bool) 0
0x158: PushEmpty(bool, object)
0x159: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15a: Call2 0x77c

0x15b: Pop(1)
0x15c: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x15d: PushEmpty(bool, object)
0x15e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15f: Call2 0x788

0x160: Pop(1)
0x161: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x162: Stack[-1] = (bool) 1
0x163: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x164: Push((int) 513447)
0x165: Push((int) 37690)
0x166: Push((int) 14683)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: PushEmpty(bool, object)
0x16a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16b: Call2 0x794

0x16c: Pop(1)
0x16d: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16e: Push((int) 513433)
0x16f: Push((int) 14670)
0x170: Push((int) 14669)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: PushEmpty(bool)
0x174: Stack[-1] = (bool) 0
0x175: PushEmpty(bool, object)
0x176: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x177: Call2 0x740

0x178: Pop(1)
0x179: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17a: PushEmpty(bool, object)
0x17b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17c: Call2 0x74c

0x17d: Pop(1)
0x17e: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17f: Stack[-1] = (bool) 1
0x180: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x181: Push((int) 535977)
0x182: Push((int) 37706)
0x183: Push((int) 37705)
0x184: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x185: Pop(3)
0x186: PushEmpty(bool)
0x187: Stack[-1] = (bool) 0
0x188: PushEmpty(bool, object)
0x189: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18a: Call2 0x758

0x18b: Pop(1)
0x18c: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18d: PushEmpty(bool, object)
0x18e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18f: Call2 0x764

0x190: Pop(1)
0x191: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x192: Stack[-1] = (bool) 1
0x193: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x194: Push((int) 538666)
0x195: Push((int) 40565)
0x196: Push((int) 40564)
0x197: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x198: Pop(3)
0x199: Push((int) 513460)
0x19a: Push((int) -1)
0x19b: Push((int) 14697)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: Push((int) 535944)
0x19f: Push((int) -1)
0x1a0: Push((int) 37665)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 40565)
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = "Doubt"
0x1a9: Call2 0xd8

0x1aa: Pop(1)
0x1ab: Push((int) 538667)
0x1ac: @@ SetMessage(Stack[-1])
0x1ad: Pop(1)
0x1ae: @@ ClearReplies()
0x1af: Pop(0)
0x1b0: Push((int) 538668)
0x1b1: Push((int) 40568)
0x1b2: Push((int) 40566)
0x1b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4: Pop(3)
0x1b5: Push((int) 538669)
0x1b6: Push((int) -1)
0x1b7: Push((int) 40567)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: Return(); Pop(0)

0x1bb: Push((int) 40568)
0x1bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1be: PushEmpty(string)
0x1bf: Stack[-1] = "Smile"
0x1c0: Call2 0xd8

0x1c1: Pop(1)
0x1c2: Push((int) 538670)
0x1c3: @@ SetMessage(Stack[-1])
0x1c4: Pop(1)
0x1c5: @@ ClearReplies()
0x1c6: Pop(0)
0x1c7: Push((int) 538671)
0x1c8: Push((int) 40570)
0x1c9: Push((int) 40569)
0x1ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cb: Pop(3)
0x1cc: Push((int) 538675)
0x1cd: Push((int) -1)
0x1ce: Push((int) 40573)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: Return(); Pop(0)

0x1d2: Push((int) 40570)
0x1d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1d5: PushEmpty(string)
0x1d6: Stack[-1] = "Sorrow"
0x1d7: Call2 0xd8

0x1d8: Pop(1)
0x1d9: Push((int) 538672)
0x1da: @@ SetMessage(Stack[-1])
0x1db: Pop(1)
0x1dc: @@ ClearReplies()
0x1dd: Pop(0)
0x1de: Push((int) 538673)
0x1df: Push((int) 40574)
0x1e0: Push((int) 40571)
0x1e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e2: Pop(3)
0x1e3: Push((int) 538674)
0x1e4: Push((int) -1)
0x1e5: Push((int) 40572)
0x1e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e7: Pop(3)
0x1e8: Return(); Pop(0)

0x1e9: Push((int) 40574)
0x1ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ec: PushEmpty(string)
0x1ed: Stack[-1] = "Sorrow"
0x1ee: Call2 0xd8

0x1ef: Pop(1)
0x1f0: Push((int) 538676)
0x1f1: @@ SetMessage(Stack[-1])
0x1f2: Pop(1)
0x1f3: @@ ClearReplies()
0x1f4: Pop(0)
0x1f5: Push((int) 538677)
0x1f6: Push((int) -1)
0x1f7: Push((int) 40575)
0x1f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f9: Pop(3)
0x1fa: Push((int) 538678)
0x1fb: Push((int) -1)
0x1fc: Push((int) 40576)
0x1fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fe: Pop(3)
0x1ff: Return(); Pop(0)

0x200: Push((int) 37706)
0x201: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x203: PushEmpty(string)
0x204: Stack[-1] = "Agression"
0x205: Call2 0xd8

0x206: Pop(1)
0x207: Push((int) 535978)
0x208: @@ SetMessage(Stack[-1])
0x209: Pop(1)
0x20a: @@ ClearReplies()
0x20b: Pop(0)
0x20c: Push((int) 535979)
0x20d: Push((int) -1)
0x20e: Push((int) 37707)
0x20f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x210: Pop(3)
0x211: Push((int) 535980)
0x212: Push((int) 37709)
0x213: Push((int) 37708)
0x214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x215: Pop(3)
0x216: Return(); Pop(0)

0x217: Push((int) 37709)
0x218: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x21a: PushEmpty(string)
0x21b: Stack[-1] = "Agression"
0x21c: Call2 0xd8

0x21d: Pop(1)
0x21e: Push((int) 535981)
0x21f: @@ SetMessage(Stack[-1])
0x220: Pop(1)
0x221: @@ ClearReplies()
0x222: Pop(0)
0x223: Push((int) 535982)
0x224: Push((int) 37711)
0x225: Push((int) 37710)
0x226: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x227: Pop(3)
0x228: Return(); Pop(0)

0x229: Push((int) 37711)
0x22a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22b: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x22c: PushEmpty(string)
0x22d: Stack[-1] = "Sorrow"
0x22e: Call2 0xd8

0x22f: Pop(1)
0x230: Push((int) 535983)
0x231: @@ SetMessage(Stack[-1])
0x232: Pop(1)
0x233: @@ ClearReplies()
0x234: Pop(0)
0x235: Push((int) 535984)
0x236: Push((int) -1)
0x237: Push((int) 37712)
0x238: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x239: Pop(3)
0x23a: Push((int) 535985)
0x23b: Push((int) -1)
0x23c: Push((int) 37713)
0x23d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23e: Pop(3)
0x23f: Return(); Pop(0)

0x240: Push((int) 14670)
0x241: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x243: PushEmpty(string)
0x244: Stack[-1] = "Neutral"
0x245: Call2 0xd8

0x246: Pop(1)
0x247: Push((int) 513434)
0x248: @@ SetMessage(Stack[-1])
0x249: Pop(1)
0x24a: @@ ClearReplies()
0x24b: Pop(0)
0x24c: Push((int) 513435)
0x24d: Push((int) 14672)
0x24e: Push((int) 14671)
0x24f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x250: Pop(3)
0x251: Push((int) 535970)
0x252: Push((int) -1)
0x253: Push((int) 37697)
0x254: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x255: Pop(3)
0x256: Return(); Pop(0)

0x257: Push((int) 14672)
0x258: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x259: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x25a: PushEmpty(string)
0x25b: Stack[-1] = "Doubt"
0x25c: Call2 0xd8

0x25d: Pop(1)
0x25e: Push((int) 513436)
0x25f: @@ SetMessage(Stack[-1])
0x260: Pop(1)
0x261: @@ ClearReplies()
0x262: Pop(0)
0x263: Push((int) 513437)
0x264: Push((int) 14674)
0x265: Push((int) 14673)
0x266: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x267: Pop(3)
0x268: Push((int) 535971)
0x269: Push((int) 37699)
0x26a: Push((int) 37698)
0x26b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26c: Pop(3)
0x26d: Return(); Pop(0)

0x26e: Push((int) 37699)
0x26f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x271: PushEmpty(string)
0x272: Stack[-1] = "Sorrow"
0x273: Call2 0xd8

0x274: Pop(1)
0x275: Push((int) 535972)
0x276: @@ SetMessage(Stack[-1])
0x277: Pop(1)
0x278: @@ ClearReplies()
0x279: Pop(0)
0x27a: Push((int) 535973)
0x27b: Push((int) 37701)
0x27c: Push((int) 37700)
0x27d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27e: Pop(3)
0x27f: Return(); Pop(0)

0x280: Push((int) 37701)
0x281: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x282: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x283: PushEmpty(string)
0x284: Stack[-1] = "Sorrow"
0x285: Call2 0xd8

0x286: Pop(1)
0x287: Push((int) 535974)
0x288: @@ SetMessage(Stack[-1])
0x289: Pop(1)
0x28a: @@ ClearReplies()
0x28b: Pop(0)
0x28c: Push((int) 535975)
0x28d: Push((int) 14674)
0x28e: Push((int) 37702)
0x28f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x290: Pop(3)
0x291: Return(); Pop(0)

0x292: Push((int) 14674)
0x293: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x294: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x295: PushEmpty(string)
0x296: Stack[-1] = "Agression"
0x297: Call2 0xd8

0x298: Pop(1)
0x299: Push((int) 513438)
0x29a: @@ SetMessage(Stack[-1])
0x29b: Pop(1)
0x29c: @@ ClearReplies()
0x29d: Pop(0)
0x29e: Push((int) 513494)
0x29f: Push((int) 14736)
0x2a0: Push((int) 14735)
0x2a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a2: Pop(3)
0x2a3: Push((int) 513491)
0x2a4: Push((int) 14732)
0x2a5: Push((int) 14731)
0x2a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a7: Pop(3)
0x2a8: Return(); Pop(0)

0x2a9: Push((int) 14732)
0x2aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ac: PushEmpty(string)
0x2ad: Stack[-1] = "Neutral"
0x2ae: Call2 0xd8

0x2af: Pop(1)
0x2b0: Push((int) 513492)
0x2b1: @@ SetMessage(Stack[-1])
0x2b2: Pop(1)
0x2b3: @@ ClearReplies()
0x2b4: Pop(0)
0x2b5: Push((int) 513493)
0x2b6: Push((int) 14678)
0x2b7: Push((int) 14733)
0x2b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b9: Pop(3)
0x2ba: Return(); Pop(0)

0x2bb: Push((int) 14736)
0x2bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2be: PushEmpty(string)
0x2bf: Stack[-1] = "Agression"
0x2c0: Call2 0xd8

0x2c1: Pop(1)
0x2c2: Push((int) 513495)
0x2c3: @@ SetMessage(Stack[-1])
0x2c4: Pop(1)
0x2c5: @@ ClearReplies()
0x2c6: Pop(0)
0x2c7: Push((int) 513439)
0x2c8: Push((int) 14676)
0x2c9: Push((int) 14675)
0x2ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cb: Pop(3)
0x2cc: Push((int) 535976)
0x2cd: Push((int) -1)
0x2ce: Push((int) 37704)
0x2cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d0: Pop(3)
0x2d1: Return(); Pop(0)

0x2d2: Push((int) 14676)
0x2d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2d5: PushEmpty(string)
0x2d6: Stack[-1] = "Doubt"
0x2d7: Call2 0xd8

0x2d8: Pop(1)
0x2d9: Push((int) 513440)
0x2da: @@ SetMessage(Stack[-1])
0x2db: Pop(1)
0x2dc: @@ ClearReplies()
0x2dd: Pop(0)
0x2de: Push((int) 513441)
0x2df: Push((int) 14678)
0x2e0: Push((int) 14677)
0x2e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e2: Pop(3)
0x2e3: Return(); Pop(0)

0x2e4: Push((int) 14678)
0x2e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2e7: PushEmpty(string)
0x2e8: Stack[-1] = "Neutral"
0x2e9: Call2 0xd8

0x2ea: Pop(1)
0x2eb: Push((int) 513442)
0x2ec: @@ SetMessage(Stack[-1])
0x2ed: Pop(1)
0x2ee: @@ ClearReplies()
0x2ef: Pop(0)
0x2f0: Push((int) 513444)
0x2f1: Push((int) 14681)
0x2f2: Push((int) 14680)
0x2f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f4: Pop(3)
0x2f5: Return(); Pop(0)

0x2f6: Push((int) 14681)
0x2f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f8: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x2f9: PushEmpty(string)
0x2fa: Stack[-1] = "Neutral"
0x2fb: Call2 0xd8

0x2fc: Pop(1)
0x2fd: Push((int) 513445)
0x2fe: @@ SetMessage(Stack[-1])
0x2ff: Pop(1)
0x300: @@ ClearReplies()
0x301: Pop(0)
0x302: Push((int) 513446)
0x303: Push((int) -1)
0x304: Push((int) 14682)
0x305: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x306: Pop(3)
0x307: Return(); Pop(0)

0x308: Push((int) 37690)
0x309: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x30b: PushEmpty(string)
0x30c: Stack[-1] = "Neutral"
0x30d: Call2 0xd8

0x30e: Pop(1)
0x30f: Push((int) 535964)
0x310: @@ SetMessage(Stack[-1])
0x311: Pop(1)
0x312: @@ ClearReplies()
0x313: Pop(0)
0x314: Push((int) 535965)
0x315: Push((int) 14684)
0x316: Push((int) 37691)
0x317: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x318: Pop(3)
0x319: Push((int) 535966)
0x31a: Push((int) 37693)
0x31b: Push((int) 37692)
0x31c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31d: Pop(3)
0x31e: Return(); Pop(0)

0x31f: Push((int) 37693)
0x320: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x322: PushEmpty(string)
0x323: Stack[-1] = "Sorrow"
0x324: Call2 0xd8

0x325: Pop(1)
0x326: Push((int) 535967)
0x327: @@ SetMessage(Stack[-1])
0x328: Pop(1)
0x329: @@ ClearReplies()
0x32a: Pop(0)
0x32b: Push((int) 535968)
0x32c: Push((int) 14684)
0x32d: Push((int) 37694)
0x32e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32f: Pop(3)
0x330: Push((int) 535969)
0x331: Push((int) -1)
0x332: Push((int) 37696)
0x333: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x334: Pop(3)
0x335: Return(); Pop(0)

0x336: Push((int) 14684)
0x337: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x339: PushEmpty(string)
0x33a: Stack[-1] = "Smile"
0x33b: Call2 0xd8

0x33c: Pop(1)
0x33d: Push((int) 513448)
0x33e: @@ SetMessage(Stack[-1])
0x33f: Pop(1)
0x340: @@ ClearReplies()
0x341: Pop(0)
0x342: Push((int) 513449)
0x343: Push((int) 14686)
0x344: Push((int) 14685)
0x345: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x346: Pop(3)
0x347: Push((int) 513451)
0x348: Push((int) 14688)
0x349: Push((int) 14687)
0x34a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34b: Pop(3)
0x34c: Return(); Pop(0)

0x34d: Push((int) 14688)
0x34e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34f: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x350: PushEmpty(string)
0x351: Stack[-1] = "Neutral"
0x352: Call2 0xd8

0x353: Pop(1)
0x354: Push((int) 513452)
0x355: @@ SetMessage(Stack[-1])
0x356: Pop(1)
0x357: @@ ClearReplies()
0x358: Pop(0)
0x359: Push((int) 513453)
0x35a: Push((int) 14690)
0x35b: Push((int) 14689)
0x35c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35d: Pop(3)
0x35e: Return(); Pop(0)

0x35f: Push((int) 14690)
0x360: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x361: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x362: PushEmpty(string)
0x363: Stack[-1] = "Agression"
0x364: Call2 0xd8

0x365: Pop(1)
0x366: Push((int) 513454)
0x367: @@ SetMessage(Stack[-1])
0x368: Pop(1)
0x369: @@ ClearReplies()
0x36a: Pop(0)
0x36b: Push((int) 513455)
0x36c: Push((int) 14694)
0x36d: Push((int) 14691)
0x36e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36f: Pop(3)
0x370: Push((int) 513456)
0x371: Push((int) -1)
0x372: Push((int) 14692)
0x373: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x374: Pop(3)
0x375: Return(); Pop(0)

0x376: Push((int) 14686)
0x377: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x378: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x379: PushEmpty(string)
0x37a: Stack[-1] = "Neutral"
0x37b: Call2 0xd8

0x37c: Pop(1)
0x37d: Push((int) 513450)
0x37e: @@ SetMessage(Stack[-1])
0x37f: Pop(1)
0x380: @@ ClearReplies()
0x381: Pop(0)
0x382: Push((int) 513457)
0x383: Push((int) 14694)
0x384: Push((int) 14693)
0x385: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x386: Pop(3)
0x387: Return(); Pop(0)

0x388: Push((int) 14694)
0x389: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x38b: PushEmpty(string)
0x38c: Stack[-1] = "Smile"
0x38d: Call2 0xd8

0x38e: Pop(1)
0x38f: Push((int) 513458)
0x390: @@ SetMessage(Stack[-1])
0x391: Pop(1)
0x392: @@ ClearReplies()
0x393: Pop(0)
0x394: Push((int) 513459)
0x395: Push((int) -1)
0x396: Push((int) 14696)
0x397: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x398: Pop(3)
0x399: Return(); Pop(0)

0x39a: Push((int) 14661)
0x39b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39c: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x39d: PushEmpty(string)
0x39e: Stack[-1] = "Smile"
0x39f: Call2 0xd8

0x3a0: Pop(1)
0x3a1: Push((int) 513425)
0x3a2: @@ SetMessage(Stack[-1])
0x3a3: Pop(1)
0x3a4: @@ ClearReplies()
0x3a5: Pop(0)
0x3a6: Push((int) 513426)
0x3a7: Push((int) 14663)
0x3a8: Push((int) 14662)
0x3a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3aa: Pop(3)
0x3ab: Return(); Pop(0)

0x3ac: Push((int) 14663)
0x3ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3af: PushEmpty(string)
0x3b0: Stack[-1] = "Sorrow"
0x3b1: Call2 0xd8

0x3b2: Pop(1)
0x3b3: Push((int) 513427)
0x3b4: @@ SetMessage(Stack[-1])
0x3b5: Pop(1)
0x3b6: @@ ClearReplies()
0x3b7: Pop(0)
0x3b8: Push((int) 535957)
0x3b9: Push((int) 37683)
0x3ba: Push((int) 37682)
0x3bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bc: Pop(3)
0x3bd: Return(); Pop(0)

0x3be: Push((int) 37683)
0x3bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3c1: PushEmpty(string)
0x3c2: Stack[-1] = "Sorrow"
0x3c3: Call2 0xd8

0x3c4: Pop(1)
0x3c5: Push((int) 535958)
0x3c6: @@ SetMessage(Stack[-1])
0x3c7: Pop(1)
0x3c8: @@ ClearReplies()
0x3c9: Pop(0)
0x3ca: Push((int) 513428)
0x3cb: Push((int) 14665)
0x3cc: Push((int) 14664)
0x3cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ce: Pop(3)
0x3cf: Push((int) 535959)
0x3d0: Push((int) 37685)
0x3d1: Push((int) 37684)
0x3d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d3: Pop(3)
0x3d4: Return(); Pop(0)

0x3d5: Push((int) 37685)
0x3d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3d8: PushEmpty(string)
0x3d9: Stack[-1] = "Neutral"
0x3da: Call2 0xd8

0x3db: Pop(1)
0x3dc: Push((int) 535960)
0x3dd: @@ SetMessage(Stack[-1])
0x3de: Pop(1)
0x3df: @@ ClearReplies()
0x3e0: Pop(0)
0x3e1: Push((int) 535962)
0x3e2: Push((int) 14665)
0x3e3: Push((int) 37687)
0x3e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e5: Pop(3)
0x3e6: Push((int) 535963)
0x3e7: Push((int) -1)
0x3e8: Push((int) 37689)
0x3e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ea: Pop(3)
0x3eb: Return(); Pop(0)

0x3ec: Push((int) 14665)
0x3ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ee: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x3ef: PushEmpty(string)
0x3f0: Stack[-1] = "Neutral"
0x3f1: Call2 0xd8

0x3f2: Pop(1)
0x3f3: Push((int) 513429)
0x3f4: @@ SetMessage(Stack[-1])
0x3f5: Pop(1)
0x3f6: @@ ClearReplies()
0x3f7: Pop(0)
0x3f8: Push((int) 513430)
0x3f9: Push((int) 14667)
0x3fa: Push((int) 14666)
0x3fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fc: Pop(3)
0x3fd: Push((int) 535961)
0x3fe: Push((int) -1)
0x3ff: Push((int) 37686)
0x400: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x401: Pop(3)
0x402: Return(); Pop(0)

0x403: Push((int) 14667)
0x404: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x405: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x406: PushEmpty(string)
0x407: Stack[-1] = "Neutral"
0x408: Call2 0xd8

0x409: Pop(1)
0x40a: Push((int) 513431)
0x40b: @@ SetMessage(Stack[-1])
0x40c: Pop(1)
0x40d: @@ ClearReplies()
0x40e: Pop(0)
0x40f: Push((int) 513432)
0x410: Push((int) -1)
0x411: Push((int) 14668)
0x412: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x413: Pop(3)
0x414: Return(); Pop(0)

0x415: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x416: PushEmpty(bool)
0x417: Call2 0x816

0x418: Pop(0)
0x419: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41a: @ lshStopAnimation()
0x41b: Pop(0)
0x41c: GOTO 0x41f

0x41d: @ StopAnimation()
0x41e: Pop(0)
0x41f: Return(); Pop(0)

0x420: GOTO 0xef

0x421: Return(); Pop(0)

0x422: PushEmpty()
0x423: PushEmpty(int, object)
0x424: Stack[-1] = Stack[-3]
0x425: Push(-2, 1); TaskCall(0)
0x426: Call2 0x0

0x427: Pop(-2, 1); TaskReturn
0x428: Pop(2)
0x429: Return(); Pop(0)

0x42a: PushEmpty()
0x42b: Call2 0x453

0x42c: Pop(0)
0x42d: Return(); Pop(0)

0x42e: PushEmpty(bool, bool)
0x42f: Push("cleanup")
0x430: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x431: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x432: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x433: @ IsLoaded(Stack[-1])
0x434: Pop(0)
0x435: Pop(0); Push((bool) Stack[-1] == 0)
0x436: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x437: PushEmpty(object)
0x438: Call2 0x685

0x439: Pop(0)
0x43a: @ RemoveActor(Stack[-1])
0x43b: Pop(1)
0x43c: GOTO 0x441

0x43d: Push("restore")
0x43e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x43f: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x440: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x441: Return(); Pop(2)

0x442: Push( Stack[1 + Tasks[-1].StackPointer] )
0x443: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x444: PushEmpty(object)
0x445: Call2 0x685

0x446: Pop(0)
0x447: @ RemoveActor(Stack[-1])
0x448: Pop(1)
0x449: @ Hold()
0x44a: Pop(0)
0x44b: PushEmpty()
0x44c: Call2 0x4be

0x44d: Pop(0)
0x44e: Return(); Pop(0)

0x44f: PushEmpty()
0x450: Call2 0x4cd

0x451: Pop(0)
0x452: Return(); Pop(0)

0x453: PushEmpty(bool)
0x454: Call2 0x56a

0x455: Pop(0)
0x456: Pop(1); Push((bool) Stack[-1] == 0)
0x457: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x458: @ Hold()
0x459: Pop(0)
0x45a: @ GetDirection(Stack[-0])
0x45b: Pop(0)
0x45c: PushEmpty()
0x45d: Call2 0x503

0x45e: Pop(0)
0x45f: GOTO 0x45c

0x460: Return(); Pop(0)

0x461: PushEmpty(object, object)
0x462: Push("player")
0x463: @ FindActor(Stack[-2], Stack[-1])
0x464: Pop(1)
0x465: Pop(0); Push((bool) Stack[-1] == 0)
0x466: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x467: Stack[-3] = (bool) 0
0x468: Return(); Pop(2)

0x469: PushEmpty(bool, object)
0x46a: Stack[-1] = Stack[-3]
0x46b: Call2 0x561

0x46c: Stack[-5] = Stack[-2]
0x46d: Pop(2)
0x46e: Return(); Pop(2)

0x46f: Stack[-1] = 0
0x470: Push(CvectorIndex(Stack[-0], 0))
0x471: Push(CvectorIndex(Stack[-0], 2))
0x472: @ RotateAsync(Stack[-2], Stack[-1])
0x473: Pop(2)
0x474: Return(); Pop(0)

0x475: PushEmpty(object, bool, object, bool)
0x476: Push("player")
0x477: @ FindActor(Stack[-3], Stack[-1])
0x478: Pop(1)
0x479: Pop(0); Push((bool) Stack[-2] == 0)
0x47a: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x47b: Stack[-5] = (bool) 0
0x47c: Return(); Pop(4)

0x47d: PushEmpty(float, object)
0x47e: Stack[-1] = Stack[-4]
0x47f: Call2 0x54f

0x480: Pop(1)
0x481: Push((float)90000.0)
0x482: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x483: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x484: Stack[-5] = (bool) 0
0x485: Return(); Pop(4)

0x486: @ CanSee(Stack[-1], Stack[-2])
0x487: Pop(0)
0x488: Stack[-5] = Stack[-1]
0x489: Return(); Pop(4)

0x48a: Stack[-2] = 0
0x48b: PushEmpty(float, float)
0x48c: Push((int) 8)
0x48d: Push((int) 16)
0x48e: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x48f: Pop(2)
0x490: Push((int) 10)
0x491: @ SetTimer(Stack[-1], Stack[-2])
0x492: Pop(1)
0x493: Return(); Pop(2)

0x494: Push((int) 10)
0x495: @ KillTimer(Stack[-1])
0x496: Pop(1)
0x497: Return(); Pop(0)

0x498: PushEmpty()
0x499: Push((int) 10)
0x49a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x49b: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x49c: PushEmpty()
0x49d: Call2 0x494

0x49e: Pop(0)
0x49f: PushEmpty(bool)
0x4a0: Stack[-1] = (bool) 0
0x4a1: PushEmpty(bool)
0x4a2: Call2 0x56a

0x4a3: Pop(0)
0x4a4: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a5: PushEmpty(bool)
0x4a6: Call2 0x475

0x4a7: Pop(0)
0x4a8: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a9: Stack[-1] = (bool) 1
0x4aa: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4ab: PushEmpty(bool)
0x4ac: Call2 0x461

0x4ad: Pop(0)
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4af: PushEmpty(bool, object)
0x4b0: PushEmpty(object)
0x4b1: Call2 0x685

0x4b2: Stack[-2] = Stack[-1]
0x4b3: Pop(1)
0x4b4: Call2 0x600

0x4b5: Pop(2)
0x4b6: GOTO 0x4bd

0x4b7: PushEmpty()
0x4b8: Call2 0x470

0x4b9: Pop(0)
0x4ba: PushEmpty()
0x4bb: Call2 0x48b

0x4bc: Pop(0)
0x4bd: Return(); Pop(0)

0x4be: PushEmpty()
0x4bf: Call2 0x54a

0x4c0: Pop(0)
0x4c1: PushEmpty()
0x4c2: Call2 0x494

0x4c3: Pop(0)
0x4c4: @ lshStopSpeech()
0x4c5: Pop(0)
0x4c6: @ lshStopAnimation()
0x4c7: Pop(0)
0x4c8: @ StopAsync()
0x4c9: Pop(0)
0x4ca: @ Hold()
0x4cb: Pop(0)
0x4cc: Return(); Pop(0)

0x4cd: @ StopGroup0()
0x4ce: Pop(0)
0x4cf: PushEmpty()
0x4d0: Call2 0x494

0x4d1: Pop(0)
0x4d2: PushEmpty(string)
0x4d3: Stack[-1] = "Neutral"
0x4d4: Call2 0x650

0x4d5: Pop(1)
0x4d6: PushEmpty()
0x4d7: Call2 0x48b

0x4d8: Pop(0)
0x4d9: Return(); Pop(0)

0x4da: PushEmpty()
0x4db: Push(Stack[-1])
0x4dc: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4dd: PushEmpty()
0x4de: Call2 0x48b

0x4df: Pop(0)
0x4e0: GOTO 0x4e5

0x4e1: PushEmpty(string)
0x4e2: Stack[-1] = "Neutral"
0x4e3: Call2 0x650

0x4e4: Pop(1)
0x4e5: Return(); Pop(0)

0x4e6: PushEmpty(bool, bool)
0x4e7: @ IsOverrideActive(Stack[-1])
0x4e8: Pop(0)
0x4e9: Pop(0); Push((bool) Stack[-1] == 0)
0x4ea: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4eb: EventDisable(0)
0x4ec: PushEmpty()
0x4ed: Call2 0x54a

0x4ee: Pop(0)
0x4ef: PushEmpty(bool, object)
0x4f0: Stack[-1] = Stack[-5]
0x4f1: Call2 0x561

0x4f2: Pop(2)
0x4f3: EventEnable(0)
0x4f4: PushEmpty(object)
0x4f5: Stack[-1] = Stack[-4]
0x4f6: Call2 0x422

0x4f7: Pop(1)
0x4f8: PushEmpty(string)
0x4f9: Stack[-1] = "Neutral"
0x4fa: Call2 0x650

0x4fb: Pop(1)
0x4fc: PushEmpty()
0x4fd: Call2 0x494

0x4fe: Pop(0)
0x4ff: PushEmpty()
0x500: Call2 0x48b

0x501: Pop(0)
0x502: Return(); Pop(2)

0x503: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x504: @ WaitForAnimEnd()
0x505: Pop(0)
0x506: PushEmpty(bool)
0x507: Call2 0x56a

0x508: Pop(0)
0x509: Pop(1); Push((bool) Stack[-1] == 0)
0x50a: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x50b: Return(); Pop(12)

0x50c: PushEmpty(int)
0x50d: Call2 0x6e2

0x50e: Stack[-7] = Stack[-1]
0x50f: Pop(1)
0x510: Stack[-5] = (int) 0
0x511: PushEmpty(bool)
0x512: Stack[-1] = (bool) 0
0x513: Push((int) 5)
0x514: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x515: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x516: PushEmpty(bool)
0x517: Call2 0x56a

0x518: Pop(0)
0x519: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x51a: Stack[-1] = (bool) 1
0x51b: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x51c: Pop(0); Push((bool) Stack[-6] == 0)
0x51d: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x51e: Push((int) 3)
0x51f: @ Sleep(Stack[-1], Stack[-5])
0x520: Pop(1)
0x521: Pop(0); Push((bool) Stack[-4] == 0)
0x522: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x523: GOTO 0x545

0x524: GOTO 0x53a

0x525: @ irand(Stack[-3], Stack[-6])
0x526: Pop(0)
0x527: Push((int) 5)
0x528: @ irand(Stack[-3], Stack[-1])
0x529: Pop(1)
0x52a: Push((int) 0)
0x52b: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x52c: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52d: Stack[-3] = (int) 0
0x52e: Push("all")
0x52f: PushEmpty(string, int)
0x530: Stack[-1] = Stack[-6]
0x531: Call2 0x6db

0x532: Pop(1)
0x533: @ PlayAnimation(Stack[-2], Stack[-1])
0x534: Pop(2)
0x535: @ WaitForAnimEnd(Stack[-1])
0x536: Pop(0)
0x537: Pop(0); Push((bool) Stack[-1] == 0)
0x538: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x539: GOTO 0x545

0x53a: PushEmpty(bool)
0x53b: Call2 0x548

0x53c: Pop(0)
0x53d: Pop(1); Push((bool) Stack[-1] == 0)
0x53e: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53f: GOTO 0x545

0x540: @ ResetAAS()
0x541: Pop(0)
0x542: Push((int) 1)
0x543: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x544: GOTO 0x511

0x545: @ ResetAAS()
0x546: Pop(0)
0x547: Return(); Pop(12)

0x548: Stack[-1] = (bool) 1
0x549: Return(); Pop(0)

0x54a: @ StopAnimation()
0x54b: Pop(0)
0x54c: @ StopGroup0()
0x54d: Pop(0)
0x54e: Return(); Pop(0)

0x54f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x550: @ GetPosition(Stack[-3])
0x551: Pop(0)
0x552: @@ GetPosition(Stack[-2])
0x553: Pop(0)
0x554: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x555: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x556: Return(); Pop(6)

0x557: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x558: @ GetPosition(Stack[-3])
0x559: Pop(0)
0x55a: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x55b: Push(CvectorIndex(Stack[-2], 0))
0x55c: Push(CvectorIndex(Stack[-3], 2))
0x55d: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x55e: Pop(2)
0x55f: Stack[-8] = Stack[-1]
0x560: Return(); Pop(6)

0x561: PushEmpty(cvector, cvector)
0x562: @@ GetPosition(Stack[-1])
0x563: Pop(0)
0x564: PushEmpty(bool, cvector)
0x565: Stack[-1] = Stack[-3]
0x566: Call2 0x557

0x567: Stack[-6] = Stack[-2]
0x568: Pop(2)
0x569: Return(); Pop(2)

0x56a: PushEmpty(bool, bool)
0x56b: @ IsLoaded(Stack[-1])
0x56c: Pop(0)
0x56d: Stack[-3] = Stack[-1]
0x56e: Return(); Pop(2)

0x56f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x570: @@ GetPosition(Stack[-8])
0x571: Pop(0)
0x572: @@ GetEyesHeight(Stack[-9])
0x573: Pop(0)
0x574: Push(CvectorIndex(Stack[-8], 1))
0x575: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x576: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x577: @ GetPosition(Stack[-7])
0x578: Pop(0)
0x579: @ GetEyesHeight(Stack[-9])
0x57a: Pop(0)
0x57b: Push(CvectorIndex(Stack[-7], 1))
0x57c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x57d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x57e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x57f: Push(CvectorIndex(Stack[-6], 1))
0x580: Stack[-1] = (int) 0
0x581: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x582: Pop(0); Push(Stack[-6] | Stack[-6]);
0x583: Pop(1); Push(Sqrt(Stack[-1]))
0x584: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x585: Stack[-5] = -Stack[-6]; Pop(0);
0x586: Pop(0); Push(Stack[-6] * Stack[-19]);
0x587: PushEmpty(cvector, cvector)
0x588: Push(CVector(0.0, 1.0, 0.0))
0x589: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x58a: Call2 0x68b

0x58b: Pop(1)
0x58c: Push((int) 25)
0x58d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x58e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x58f: Push(CVector(0.0, 10.0, 0.0))
0x590: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x591: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x592: @ IsOverrideActive(Stack[-2])
0x593: Pop(0)
0x594: Push(Stack[-2])
0x595: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x596: Stack[-21] = (bool) 0
0x597: Return(); Pop(18)

0x598: @ StopWorld()
0x599: Pop(0)
0x59a: Push((bool) 1)
0x59b: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x59c: Pop(1)
0x59d: Push(CvectorIndex(Stack[-4], 0))
0x59e: Push(CvectorIndex(Stack[-5], 2))
0x59f: @ Rotate(Stack[-2], Stack[-1])
0x5a0: Pop(2)
0x5a1: PushEmpty(bool)
0x5a2: Call2 0x816

0x5a3: Pop(0)
0x5a4: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a5: GOTO 0x5ae

0x5a6: Push("head")
0x5a7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x5a8: Pop(1)
0x5a9: Push(Stack[-1])
0x5aa: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5ab: Push("head")
0x5ac: @ LookAsyncCamera(Stack[-1])
0x5ad: Pop(1)
0x5ae: @ CameraWaitForPlayFinish()
0x5af: Pop(0)
0x5b0: @ ResumeWorld()
0x5b1: Pop(0)
0x5b2: Stack[-21] = (bool) 1
0x5b3: Return(); Pop(18)

0x5b4: PushEmpty(bool, bool)
0x5b5: Push((bool) 1)
0x5b6: @ CameraSwitchToNormal(Stack[-1])
0x5b7: Pop(1)
0x5b8: PushEmpty(bool)
0x5b9: Call2 0x816

0x5ba: Pop(0)
0x5bb: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5bc: GOTO 0x5c5

0x5bd: Push("head")
0x5be: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x5bf: Pop(1)
0x5c0: Push(Stack[-1])
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5c2: Push("head")
0x5c3: @ UnlookAsync(Stack[-1])
0x5c4: Pop(1)
0x5c5: Return(); Pop(2)

0x5c6: PushEmpty(int, int, int, int)
0x5c7: Push("voice_common")
0x5c8: @ GetVariable(Stack[-1], Stack[-3])
0x5c9: Pop(1)
0x5ca: Push(Stack[-2])
0x5cb: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5cc: PushEmpty(bool, object)
0x5cd: Stack[-1] = Stack[-7]
0x5ce: Call2 0x600

0x5cf: Pop(1)
0x5d0: Pop(1); Push((bool) Stack[-1] == 0)
0x5d1: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d2: PushEmpty(bool, object)
0x5d3: Stack[-1] = Stack[-7]
0x5d4: Call2 0x625

0x5d5: Pop(1)
0x5d6: Pop(1); Push((bool) Stack[-1] == 0)
0x5d7: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d8: Stack[-6] = (bool) 0
0x5d9: Return(); Pop(4)

0x5da: Push((int) 2)
0x5db: @ irand(Stack[-2], Stack[-1])
0x5dc: Pop(1)
0x5dd: Push(Stack[-1])
0x5de: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5df: Push("voice_common")
0x5e0: Push((int) 1)
0x5e1: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5e2: Push((int) 3)
0x5e3: Pop(2); Push(Stack[-2] % Stack[-1]);
0x5e4: @ SetVariable(Stack[-2], Stack[-1])
0x5e5: Pop(2)
0x5e6: GOTO 0x5eb

0x5e7: Push("voice_common")
0x5e8: Push((int) 0)
0x5e9: @ SetVariable(Stack[-2], Stack[-1])
0x5ea: Pop(2)
0x5eb: GOTO 0x5fe

0x5ec: PushEmpty(bool, object)
0x5ed: Stack[-1] = Stack[-7]
0x5ee: Call2 0x625

0x5ef: Pop(1)
0x5f0: Pop(1); Push((bool) Stack[-1] == 0)
0x5f1: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f2: PushEmpty(bool, object)
0x5f3: Stack[-1] = Stack[-7]
0x5f4: Call2 0x600

0x5f5: Pop(1)
0x5f6: Pop(1); Push((bool) Stack[-1] == 0)
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f8: Stack[-6] = (bool) 0
0x5f9: Return(); Pop(4)

0x5fa: Push("voice_common")
0x5fb: Push((int) 1)
0x5fc: @ SetVariable(Stack[-2], Stack[-1])
0x5fd: Pop(2)
0x5fe: Stack[-6] = (bool) 1
0x5ff: Return(); Pop(4)

0x600: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x601: Stack[-5] = "c"
0x602: Stack[-4] = (int) 0
0x603: Push((int) 1)
0x604: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x605: Push((int) 1)
0x606: Pop(1); Push(Stack[-5] + Stack[-1]);
0x607: Pop(1); Push(Stack[-6] + Stack[-1]);
0x608: @@ HasProperty(Stack[-1], Stack[-4])
0x609: Pop(1)
0x60a: Pop(0); Push((bool) Stack[-3] == 0)
0x60b: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x60c: GOTO 0x610

0x60d: Push((int) 1)
0x60e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x60f: GOTO 0x603

0x610: Pop(0); Push((bool) Stack[-4] == 0)
0x611: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x612: Stack[-12] = (bool) 0
0x613: Return(); Pop(10)

0x614: Stack[-2] = (int) 0
0x615: Push((int) 1)
0x616: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x617: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x618: @ irand(Stack[-2], Stack[-4])
0x619: Pop(0)
0x61a: Push((int) 1)
0x61b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x61c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x61d: @@ GetProperty(Stack[-1], Stack[-2])
0x61e: Pop(1)
0x61f: PushEmpty(bool, string)
0x620: Stack[-1] = Stack[-3]
0x621: Call2 0x66f

0x622: Stack[-14] = Stack[-2]
0x623: Pop(2)
0x624: Return(); Pop(10)

0x625: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x626: Push("d")
0x627: PushEmpty(int)
0x628: Call2 0x6d2

0x629: Pop(0)
0x62a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x62b: Push("m")
0x62c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x62d: Stack[-4] = (int) 0
0x62e: Push((int) 1)
0x62f: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x630: Push((int) 1)
0x631: Pop(1); Push(Stack[-5] + Stack[-1]);
0x632: Pop(1); Push(Stack[-6] + Stack[-1]);
0x633: @@ HasProperty(Stack[-1], Stack[-4])
0x634: Pop(1)
0x635: Pop(0); Push((bool) Stack[-3] == 0)
0x636: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x637: GOTO 0x63b

0x638: Push((int) 1)
0x639: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x63a: GOTO 0x62e

0x63b: Pop(0); Push((bool) Stack[-4] == 0)
0x63c: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63d: Stack[-12] = (bool) 0
0x63e: Return(); Pop(10)

0x63f: Stack[-2] = (int) 0
0x640: Push((int) 1)
0x641: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x642: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x643: @ irand(Stack[-2], Stack[-4])
0x644: Pop(0)
0x645: Push((int) 1)
0x646: Pop(1); Push(Stack[-3] + Stack[-1]);
0x647: Pop(1); Push(Stack[-6] + Stack[-1]);
0x648: @@ GetProperty(Stack[-1], Stack[-2])
0x649: Pop(1)
0x64a: PushEmpty(bool, string)
0x64b: Stack[-1] = Stack[-3]
0x64c: Call2 0x66f

0x64d: Stack[-14] = Stack[-2]
0x64e: Pop(2)
0x64f: Return(); Pop(10)

0x650: PushEmpty(bool, float, float, bool, float, float)
0x651: @ lshHasAnimation(Stack[-3], Stack[-7])
0x652: Pop(0)
0x653: Push(Stack[-3])
0x654: IF (Stack[-1] == 0) GOTO 0x65b; Pop(1)

0x655: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x656: Pop(0)
0x657: Push((bool) 0)
0x658: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x659: Pop(1)
0x65a: GOTO 0x65f

0x65b: Push("Can't find lsh animation : ")
0x65c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x65d: @ Trace(Stack[-1])
0x65e: Pop(1)
0x65f: Return(); Pop(6)

0x660: PushEmpty(bool, float, float, bool, float, float)
0x661: @ lshHasAnimation(Stack[-3], Stack[-8])
0x662: Pop(0)
0x663: Push(Stack[-3])
0x664: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x665: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x666: Pop(0)
0x667: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x668: Pop(0)
0x669: GOTO 0x66e

0x66a: Push("Can't find lsh animation : ")
0x66b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x66c: @ Trace(Stack[-1])
0x66d: Pop(1)
0x66e: Return(); Pop(6)

0x66f: PushEmpty(bool, bool)
0x670: PushEmpty(bool)
0x671: Call2 0x816

0x672: Pop(0)
0x673: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x674: @ lshHasSpeech(Stack[-1], Stack[-3])
0x675: Pop(0)
0x676: Push(Stack[-1])
0x677: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x678: @ lshPlaySpeech(Stack[-3])
0x679: Pop(0)
0x67a: Stack[-4] = (bool) 1
0x67b: Return(); Pop(2)

0x67c: Stack[-4] = (bool) 0
0x67d: Return(); Pop(2)

0x67e: PushEmpty(bool)
0x67f: Call2 0x816

0x680: Pop(0)
0x681: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x682: @ lshStopSpeech()
0x683: Pop(0)
0x684: Return(); Pop(0)

0x685: PushEmpty(object, object)
0x686: @ self(Stack[-1])
0x687: Pop(0)
0x688: Stack[-3] = Stack[-1]
0x689: Return(); Pop(2)

0x68a: Stack[-1] = 0
0x68b: PushEmpty(float, float)
0x68c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x68d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x68e: Push((float)0.0)
0x68f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x690: IF (Stack[-1] == 0) GOTO 0x693; Pop(1)

0x691: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x692: Return(); Pop(2)

0x693: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x694: Return(); Pop(2)

0x695: PushEmpty(int, int)
0x696: @ GetVariable(Stack[-3], Stack[-1])
0x697: Pop(0)
0x698: Stack[-4] = Stack[-1]
0x699: Return(); Pop(2)

0x69a: PushEmpty(object, object)
0x69b: @ CreateIntVector(Stack[-1])
0x69c: Pop(0)
0x69d: @@ add(Stack[-4])
0x69e: Pop(0)
0x69f: @@ add(Stack[-3])
0x6a0: Pop(0)
0x6a1: Push((int) 3)
0x6a2: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6a3: Pop(1)
0x6a4: Return(); Pop(2)

0x6a5: Stack[-1] = 0
0x6a6: PushEmpty(int, int, bool, int, int, bool)
0x6a7: @@ GetItemID(Stack[-3])
0x6a8: Pop(0)
0x6a9: Push("Category")
0x6aa: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x6ab: Pop(1)
0x6ac: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x6ad: Pop(0)
0x6ae: Pop(0); Push((bool) Stack[-1] == 0)
0x6af: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6b0: @@ DropItems(Stack[-8], Stack[-7])
0x6b1: Pop(0)
0x6b2: GOTO 0x6b8

0x6b3: PushEmpty(int, int)
0x6b4: Stack[-2] = Stack[-5]
0x6b5: Stack[-1] = Stack[-9]
0x6b6: Call2 0x69a

0x6b7: Pop(2)
0x6b8: Return(); Pop(6)

0x6b9: PushEmpty(object, object)
0x6ba: @ CreateInvItem(Stack[-1])
0x6bb: Pop(0)
0x6bc: @@ SetItemName(Stack[-4])
0x6bd: Pop(0)
0x6be: PushEmpty(object, object, int)
0x6bf: Stack[-3] = Stack[-8]
0x6c0: Stack[-2] = Stack[-4]
0x6c1: Stack[-1] = Stack[-6]
0x6c2: Call2 0x6a6

0x6c3: Pop(3)
0x6c4: Return(); Pop(2)

0x6c5: Stack[-1] = 0
0x6c6: PushEmpty(object, object)
0x6c7: @ FindActor(Stack[-1], Stack[-4])
0x6c8: Pop(0)
0x6c9: Pop(0); Push((bool) Stack[-1] == 0)
0x6ca: IF (Stack[-1] == 0) GOTO 0x6cd; Pop(1)

0x6cb: Stack[-5] = (bool) 0
0x6cc: Return(); Pop(2)

0x6cd: @ Trigger(Stack[-1], Stack[-3])
0x6ce: Pop(0)
0x6cf: Stack[-5] = (bool) 1
0x6d0: Return(); Pop(2)

0x6d1: Stack[-1] = 0
0x6d2: PushEmpty(float, float)
0x6d3: @ GetGameTime(Stack[-1])
0x6d4: Pop(0)
0x6d5: Push((int) 1)
0x6d6: PushEmpty(int)
0x6d7: Push((int) 24)
0x6d8: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x6d9: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x6da: Return(); Pop(2)

0x6db: PushEmpty(string, string)
0x6dc: Stack[-1] = "idle"
0x6dd: Push(Stack[-3])
0x6de: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6df: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x6e0: Stack[-4] = Stack[-1]
0x6e1: Return(); Pop(2)

0x6e2: PushEmpty(int, bool, int, bool)
0x6e3: Stack[-2] = (int) 0
0x6e4: Push("all")
0x6e5: PushEmpty(string, int)
0x6e6: Stack[-1] = Stack[-5]
0x6e7: Call2 0x6db

0x6e8: Pop(1)
0x6e9: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6ea: Pop(2)
0x6eb: Pop(0); Push((bool) Stack[-1] == 0)
0x6ec: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6ed: GOTO 0x6f1

0x6ee: Push((int) 1)
0x6ef: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x6f0: GOTO 0x6e4

0x6f1: Stack[-5] = Stack[-2]
0x6f2: Return(); Pop(4)

0x6f3: PushEmpty()
0x6f4: Push("playsound")
0x6f5: Push("giveitem")
0x6f6: @ TriggerWorld(Stack[-2], Stack[-1])
0x6f7: Pop(2)
0x6f8: Return(); Pop(0)

0x6f9: PushEmpty()
0x6fa: Push("ood8Burah2")
0x6fb: Push((int) 1)
0x6fc: @ SetVariable(Stack[-2], Stack[-1])
0x6fd: Pop(2)
0x6fe: Return(); Pop(0)

0x6ff: PushEmpty()
0x700: Push("ood8Burah3")
0x701: Push((int) 1)
0x702: @ SetVariable(Stack[-2], Stack[-1])
0x703: Pop(2)
0x704: Return(); Pop(0)

0x705: PushEmpty()
0x706: Push("d8q03")
0x707: Push((int) 1)
0x708: @ SetVariable(Stack[-2], Stack[-1])
0x709: Pop(2)
0x70a: PushEmpty()
0x70b: Call2 0x7a0

0x70c: Pop(0)
0x70d: PushEmpty()
0x70e: Call2 0x7ad

0x70f: Pop(0)
0x710: Return(); Pop(0)

0x711: PushEmpty()
0x712: PushEmpty()
0x713: Call2 0x7ba

0x714: Pop(0)
0x715: PushEmpty(bool, string, string)
0x716: Stack[-2] = "quest_d8_03"
0x717: Stack[-1] = "completed"
0x718: Call2 0x6c6

0x719: Pop(3)
0x71a: Return(); Pop(0)

0x71b: PushEmpty()
0x71c: Push("burah gives blood")
0x71d: @ Trace(Stack[-1])
0x71e: Pop(1)
0x71f: PushEmpty(object, string, int)
0x720: Stack[-3] = Stack[-5]
0x721: Stack[-2] = "d8q03_blood"
0x722: Stack[-1] = (int) 1
0x723: Call2 0x6b9

0x724: Pop(3)
0x725: Return(); Pop(0)

0x726: PushEmpty()
0x727: Push("d8q03")
0x728: Push((int) -1)
0x729: @ SetVariable(Stack[-2], Stack[-1])
0x72a: Pop(2)
0x72b: PushEmpty()
0x72c: Call2 0x7c7

0x72d: Pop(0)
0x72e: Return(); Pop(0)

0x72f: PushEmpty()
0x730: Push("burah gives serum")
0x731: @ Trace(Stack[-1])
0x732: Pop(1)
0x733: PushEmpty(object, string, int)
0x734: Stack[-3] = Stack[-5]
0x735: Stack[-2] = "burah_serum"
0x736: Stack[-1] = (int) 1
0x737: Call2 0x6b9

0x738: Pop(3)
0x739: Return(); Pop(0)

0x73a: PushEmpty()
0x73b: Push("ood8Burah1")
0x73c: Push((int) 1)
0x73d: @ SetVariable(Stack[-2], Stack[-1])
0x73e: Pop(2)
0x73f: Return(); Pop(0)

0x740: PushEmpty()
0x741: PushEmpty(int, string)
0x742: Stack[-1] = "d8q04"
0x743: Call2 0x695

0x744: Pop(1)
0x745: Push((int) 1)
0x746: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x747: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x748: Stack[-2] = (bool) 1
0x749: Return(); Pop(0)

0x74a: Stack[-2] = (bool) 0
0x74b: Return(); Pop(0)

0x74c: PushEmpty()
0x74d: PushEmpty(int, string)
0x74e: Stack[-1] = "ood8Burah2"
0x74f: Call2 0x695

0x750: Pop(1)
0x751: Push((int) 0)
0x752: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x753: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x754: Stack[-2] = (bool) 1
0x755: Return(); Pop(0)

0x756: Stack[-2] = (bool) 0
0x757: Return(); Pop(0)

0x758: PushEmpty()
0x759: PushEmpty(int, string)
0x75a: Stack[-1] = "d8BurahLetter"
0x75b: Call2 0x695

0x75c: Pop(1)
0x75d: Push((int) 0)
0x75e: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x75f: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x760: Stack[-2] = (bool) 1
0x761: Return(); Pop(0)

0x762: Stack[-2] = (bool) 0
0x763: Return(); Pop(0)

0x764: PushEmpty()
0x765: PushEmpty(int, string)
0x766: Stack[-1] = "ood8Burah3"
0x767: Call2 0x695

0x768: Pop(1)
0x769: Push((int) 0)
0x76a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x76b: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x76c: Stack[-2] = (bool) 1
0x76d: Return(); Pop(0)

0x76e: Stack[-2] = (bool) 0
0x76f: Return(); Pop(0)

0x770: PushEmpty()
0x771: PushEmpty(int, string)
0x772: Stack[-1] = "d8q03"
0x773: Call2 0x695

0x774: Pop(1)
0x775: Push((int) 0)
0x776: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x777: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x778: Stack[-2] = (bool) 1
0x779: Return(); Pop(0)

0x77a: Stack[-2] = (bool) 0
0x77b: Return(); Pop(0)

0x77c: PushEmpty()
0x77d: PushEmpty(int, string)
0x77e: Stack[-1] = "microscope_d8q03_blood"
0x77f: Call2 0x695

0x780: Pop(1)
0x781: Push((int) 1)
0x782: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x783: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x784: Stack[-2] = (bool) 1
0x785: Return(); Pop(0)

0x786: Stack[-2] = (bool) 0
0x787: Return(); Pop(0)

0x788: PushEmpty()
0x789: PushEmpty(int, string)
0x78a: Stack[-1] = "d8q03"
0x78b: Call2 0x695

0x78c: Pop(1)
0x78d: Push((int) 1)
0x78e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x78f: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x790: Stack[-2] = (bool) 1
0x791: Return(); Pop(0)

0x792: Stack[-2] = (bool) 0
0x793: Return(); Pop(0)

0x794: PushEmpty()
0x795: PushEmpty(int, string)
0x796: Stack[-1] = "ood8Burah1"
0x797: Call2 0x695

0x798: Pop(1)
0x799: Push((int) 0)
0x79a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x79b: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x79c: Stack[-2] = (bool) 1
0x79d: Return(); Pop(0)

0x79e: Stack[-2] = (bool) 0
0x79f: Return(); Pop(0)

0x7a0: PushEmpty(object, object)
0x7a1: Push((int) 124)
0x7a2: Push((int) 2)
0x7a3: Push((int) 513763)
0x7a4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7a5: Pop(3)
0x7a6: PushEmpty(bool, object, int)
0x7a7: Stack[-2] = Stack[-4]
0x7a8: Stack[-1] = (int) -1
0x7a9: Call2 0x7e1

0x7aa: Pop(3)
0x7ab: Return(); Pop(2)

0x7ac: Stack[-1] = 0
0x7ad: PushEmpty(object, object)
0x7ae: Push((int) 770)
0x7af: Push((int) 2)
0x7b0: Push((int) 540199)
0x7b1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7b2: Pop(3)
0x7b3: PushEmpty(bool, object, int)
0x7b4: Stack[-2] = Stack[-4]
0x7b5: Stack[-1] = (int) 124
0x7b6: Call2 0x7e1

0x7b7: Pop(3)
0x7b8: Return(); Pop(2)

0x7b9: Stack[-1] = 0
0x7ba: PushEmpty(object, object)
0x7bb: Push((int) 125)
0x7bc: Push((int) 2)
0x7bd: Push((int) 513764)
0x7be: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7bf: Pop(3)
0x7c0: PushEmpty(bool, object, int)
0x7c1: Stack[-2] = Stack[-4]
0x7c2: Stack[-1] = (int) 124
0x7c3: Call2 0x7e1

0x7c4: Pop(3)
0x7c5: Return(); Pop(2)

0x7c6: Stack[-1] = 0
0x7c7: PushEmpty(object, object)
0x7c8: Push((int) 126)
0x7c9: Push((int) 2)
0x7ca: Push((int) 513765)
0x7cb: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7cc: Pop(3)
0x7cd: PushEmpty(bool, object, int)
0x7ce: Stack[-2] = Stack[-4]
0x7cf: Stack[-1] = (int) 124
0x7d0: Call2 0x7e1

0x7d1: Pop(3)
0x7d2: Return(); Pop(2)

0x7d3: Stack[-1] = 0
0x7d4: PushEmpty(object, object)
0x7d5: @ GetDiaryRoot(Stack[-1])
0x7d6: Pop(0)
0x7d7: Pop(0); Push((bool) Stack[-1] == 0)
0x7d8: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7d9: Push("Can't retrieve diary root")
0x7da: @ Trace(Stack[-1])
0x7db: Pop(1)
0x7dc: Stack[-3] = (bool) 0
0x7dd: Return(); Pop(2)

0x7de: Stack[-3] = Stack[-1]
0x7df: Return(); Pop(2)

0x7e0: Stack[-1] = 0
0x7e1: PushEmpty(object, object, int, object, object, int)
0x7e2: PushEmpty(object)
0x7e3: Call2 0x7d4

0x7e4: Stack[-4] = Stack[-1]
0x7e5: Pop(1)
0x7e6: @@ Find(Stack[-7], Stack[-2])
0x7e7: Pop(0)
0x7e8: Pop(0); Push((bool) Stack[-2] == 0)
0x7e9: IF (Stack[-1] == 0) GOTO 0x7f0; Pop(1)

0x7ea: Push("Can't find diary parent with id: ")
0x7eb: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7ec: @ Trace(Stack[-1])
0x7ed: Pop(1)
0x7ee: Stack[-9] = (bool) 0
0x7ef: Return(); Pop(6)

0x7f0: @@ AddChild(Stack[-8])
0x7f1: Pop(0)
0x7f2: Push((int) 7)
0x7f3: @ SendWorldWndMessage(Stack[-1])
0x7f4: Pop(1)
0x7f5: @@ GetCategory(Stack[-1])
0x7f6: Pop(0)
0x7f7: @ SetDiarySection(Stack[-1])
0x7f8: Pop(0)
0x7f9: Stack[-9] = (bool) 0
0x7fa: Return(); Pop(6)

0x7fb: Stack[-2] = 0
0x7fc: Stack[-3] = 0
0x7fd: PushEmpty(int, int)
0x7fe: Push("branch")
0x7ff: @ GetVariable(Stack[-1], Stack[-2])
0x800: Pop(1)
0x801: Push((int) 0)
0x802: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x803: IF (Stack[-1] == 0) GOTO 0x807; Pop(1)

0x804: Stack[-3] = (int) 1
0x805: Return(); Pop(2)

0x806: GOTO 0x80c

0x807: Push((int) 1)
0x808: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x809: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x80a: Stack[-3] = (int) 2
0x80b: Return(); Pop(2)

0x80c: Stack[-3] = (int) 3
0x80d: Return(); Pop(2)

0x80e: Stack[-1] = (int) 515592
0x80f: Return(); Pop(0)

0x810: Stack[-1] = (int) 511961
0x811: Return(); Pop(0)

0x812: Stack[-1] = "ui/NPC_Burah.png"
0x813: Return(); Pop(0)

0x814: Stack[-1] = "ui/NPC_Burah_b.png"
0x815: Return(); Pop(0)

0x816: Stack[-1] = (bool) 1
0x817: Return(); Pop(0)

