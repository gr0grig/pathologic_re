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
	Sorrow
	Smile
	Doubt
	cleanup
	restore
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
	SetItemName
	HasItem
	pt_map_burah_home
	ShowMap
	k7q01CorpseMark
	k7q01BirdmaskGotoCorpse
	pt_d7q02_corpse
	AddMark
	quest_k7_01
	place_corpse
	ook7Burah1
	k7q01
	bird_balahon
	RemoveItemByType
	k7q03BurahGotoFather
	quest_k7_03
	place_family
	ook7Burah2
	tvirin 5 is given
	tvirin
	completed
	money2000 is given
	playsound
	givemoney
	giveitem
	k7q03
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
	CreateInvItem (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x355
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf9 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x359 Vars = (string)
		EVENT_6 Op = 0x36d Vars = ()
		EVENT_5 Op = 0x37a Vars = ()
		EVENT_7 Op = 0x3c3 Vars = (int)
		EVENT_45 Op = 0x405 Vars = (bool)
		EVENT_0 Op = 0x411 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x4a1

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x7c9

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x7c7

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x7cb

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x7cd

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x7b6

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
0x31: Call2 0x5b5

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x4f6

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
0x48: Call2 0x4e5

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
0x56: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x70f

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x6af

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Neutral"
0x63: Call2 0xe3

0x64: Pop(1)
0x65: Push((int) 526373)
0x66: @@ SetMessage(Stack[-1])
0x67: Pop(1)
0x68: @@ ClearReplies()
0x69: Pop(0)
0x6a: Push((int) 526374)
0x6b: Push((int) 27655)
0x6c: Push((int) 27654)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 528676)
0x70: Push((int) 27655)
0x71: Push((int) 30089)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0xc5

0x75: PushEmpty(string)
0x76: Stack[-1] = "Neutral"
0x77: Call2 0xe3

0x78: Pop(1)
0x79: Push((int) 526173)
0x7a: @@ SetMessage(Stack[-1])
0x7b: Pop(1)
0x7c: @@ ClearReplies()
0x7d: Pop(0)
0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 0
0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call2 0x6eb

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x85: PushEmpty(bool, object)
0x86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87: Call2 0x6f7

0x88: Pop(1)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Stack[-1] = (bool) 1
0x8b: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8c: Push((int) 526174)
0x8d: Push((int) 27455)
0x8e: Push((int) 27454)
0x8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90: Pop(3)
0x91: PushEmpty(bool)
0x92: Stack[-1] = (bool) 0
0x93: PushEmpty(bool, object)
0x94: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x95: Call2 0x6eb

0x96: Pop(1)
0x97: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x98: PushEmpty(bool, object)
0x99: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a: Call2 0x6e0

0x9b: Pop(1)
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: Stack[-1] = (bool) 1
0x9e: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x9f: Push((int) 526178)
0xa0: Push((int) 27459)
0xa1: Push((int) 27458)
0xa2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3: Pop(3)
0xa4: PushEmpty(bool, object)
0xa5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa6: Call2 0x703

0xa7: Pop(1)
0xa8: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa9: Push((int) 526378)
0xaa: Push((int) 27659)
0xab: Push((int) 27658)
0xac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad: Pop(3)
0xae: PushEmpty(bool, object)
0xaf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb0: Call2 0x71b

0xb1: Pop(1)
0xb2: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb3: Push((int) 526387)
0xb4: Push((int) 44876)
0xb5: Push((int) 27667)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 526181)
0xb9: Push((int) -1)
0xba: Push((int) 27461)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Push((int) 528675)
0xbe: Push((int) -1)
0xbf: Push((int) 30088)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: GOTO 0xc5

0xc3: Return(); Pop(0)

0xc4: GOTO 0x55

0xc5: PushEmpty(bool)
0xc6: Call2 0x7cf

0xc7: Pop(0)
0xc8: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xc9: @ lshWaitForAnimEnd()
0xca: Pop(0)
0xcb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcc: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcd: GOTO 0xd3

0xce: PushEmpty(string)
0xcf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd0: Call2 0x580

0xd1: Pop(1)
0xd2: GOTO 0xc9

0xd3: GOTO 0xe2

0xd4: Push("all")
0xd5: Push("idle")
0xd6: @ PlayAnimation(Stack[-2], Stack[-1])
0xd7: Pop(2)
0xd8: @ WaitForAnimEnd()
0xd9: Pop(0)
0xda: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdb: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xdc: GOTO 0xe2

0xdd: Push("all")
0xde: Push("idle")
0xdf: @ PlayAnimation(Stack[-2], Stack[-1])
0xe0: Pop(2)
0xe1: GOTO 0xd8

0xe2: Return(); Pop(0)

0xe3: PushEmpty()
0xe4: PushEmpty(bool)
0xe5: Call2 0x7cf

0xe6: Pop(0)
0xe7: Pop(1); Push((bool) Stack[-1] == 0)
0xe8: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe9: Return(); Pop(0)

0xea: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xeb: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xec: Return(); Pop(0)

0xed: PushEmpty(string, bool)
0xee: Stack[-2] = Stack[-3]
0xef: Push("")
0xf0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf2: Stack[-1] = (bool) 0
0xf3: GOTO 0xf5

0xf4: Stack[-1] = (bool) 1
0xf5: Call2 0x590

0xf6: Pop(2)
0xf7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf8: Return(); Pop(0)

0xf9: PushEmpty()
0xfa: Push((int) 1)
0xfb: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0xfc: PushEmpty()
0xfd: Call2 0x5ae

0xfe: Pop(0)
0xff: Push((int) 27656)
0x100: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x102: PushEmpty(object, object)
0x103: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x104: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x105: Call2 0x690

0x106: Pop(2)
0x107: PushEmpty(object, object)
0x108: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x109: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10a: Call2 0x6da

0x10b: Pop(2)
0x10c: PushEmpty(object, object)
0x10d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10f: Call2 0x6b5

0x110: Pop(2)
0x111: PushEmpty(object, object)
0x112: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x113: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x114: Call2 0x64d

0x115: Pop(2)
0x116: Push((int) 27454)
0x117: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x119: PushEmpty(object, object)
0x11a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11c: Call2 0x67d

0x11d: Pop(2)
0x11e: Push((int) 27456)
0x11f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x121: PushEmpty(object, object)
0x122: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x123: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x124: Call2 0x65d

0x125: Pop(2)
0x126: Push((int) 27460)
0x127: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x129: PushEmpty(object, object)
0x12a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12c: Call2 0x683

0x12d: Pop(2)
0x12e: Push((int) 27660)
0x12f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x131: PushEmpty(object, object)
0x132: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x133: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x134: Call2 0x690

0x135: Pop(2)
0x136: PushEmpty(object, object)
0x137: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x138: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x139: Call2 0x6b5

0x13a: Pop(2)
0x13b: PushEmpty(object, object)
0x13c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13e: Call2 0x6da

0x13f: Pop(2)
0x140: PushEmpty(object, object)
0x141: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x142: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x143: Call2 0x64d

0x144: Pop(2)
0x145: Push((int) 27669)
0x146: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x148: PushEmpty(object, object)
0x149: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14b: Call2 0x6c0

0x14c: Pop(2)
0x14d: PushEmpty(object, object)
0x14e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x150: Call2 0x6ca

0x151: Pop(2)
0x152: PushEmpty(object, object)
0x153: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x154: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x155: Call2 0x6d4

0x156: Pop(2)
0x157: Push((int) 44880)
0x158: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15a: PushEmpty(object, object)
0x15b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15d: Call2 0x6c0

0x15e: Pop(2)
0x15f: Push((int) 27653)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x162: PushEmpty(bool, object)
0x163: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x164: Call2 0x70f

0x165: Pop(1)
0x166: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x167: PushEmpty(object, object)
0x168: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x169: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16a: Call2 0x6af

0x16b: Pop(2)
0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Neutral"
0x16e: Call2 0xe3

0x16f: Pop(1)
0x170: Push((int) 526373)
0x171: @@ SetMessage(Stack[-1])
0x172: Pop(1)
0x173: @@ ClearReplies()
0x174: Pop(0)
0x175: Push((int) 526374)
0x176: Push((int) 27655)
0x177: Push((int) 27654)
0x178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: Push((int) 528676)
0x17b: Push((int) 27655)
0x17c: Push((int) 30089)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: Return(); Pop(0)

0x180: PushEmpty(string)
0x181: Stack[-1] = "Neutral"
0x182: Call2 0xe3

0x183: Pop(1)
0x184: Push((int) 526173)
0x185: @@ SetMessage(Stack[-1])
0x186: Pop(1)
0x187: @@ ClearReplies()
0x188: Pop(0)
0x189: PushEmpty(bool)
0x18a: Stack[-1] = (bool) 0
0x18b: PushEmpty(bool, object)
0x18c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18d: Call2 0x6eb

0x18e: Pop(1)
0x18f: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x190: PushEmpty(bool, object)
0x191: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x192: Call2 0x6f7

0x193: Pop(1)
0x194: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x195: Stack[-1] = (bool) 1
0x196: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x197: Push((int) 526174)
0x198: Push((int) 27455)
0x199: Push((int) 27454)
0x19a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19b: Pop(3)
0x19c: PushEmpty(bool)
0x19d: Stack[-1] = (bool) 0
0x19e: PushEmpty(bool, object)
0x19f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a0: Call2 0x6eb

0x1a1: Pop(1)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a3: PushEmpty(bool, object)
0x1a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a5: Call2 0x6e0

0x1a6: Pop(1)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a8: Stack[-1] = (bool) 1
0x1a9: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1aa: Push((int) 526178)
0x1ab: Push((int) 27459)
0x1ac: Push((int) 27458)
0x1ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ae: Pop(3)
0x1af: PushEmpty(bool, object)
0x1b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b1: Call2 0x703

0x1b2: Pop(1)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b4: Push((int) 526378)
0x1b5: Push((int) 27659)
0x1b6: Push((int) 27658)
0x1b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b8: Pop(3)
0x1b9: PushEmpty(bool, object)
0x1ba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bb: Call2 0x71b

0x1bc: Pop(1)
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1be: Push((int) 526387)
0x1bf: Push((int) 44876)
0x1c0: Push((int) 27667)
0x1c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c2: Pop(3)
0x1c3: Push((int) 526181)
0x1c4: Push((int) -1)
0x1c5: Push((int) 27461)
0x1c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c7: Pop(3)
0x1c8: Push((int) 528675)
0x1c9: Push((int) -1)
0x1ca: Push((int) 30088)
0x1cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: Push((int) 44876)
0x1cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = "Sorrow"
0x1d3: Call2 0xe3

0x1d4: Pop(1)
0x1d5: Push((int) 542490)
0x1d6: @@ SetMessage(Stack[-1])
0x1d7: Pop(1)
0x1d8: @@ ClearReplies()
0x1d9: Pop(0)
0x1da: Push((int) 542491)
0x1db: Push((int) 27668)
0x1dc: Push((int) 44877)
0x1dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1de: Pop(3)
0x1df: Push((int) 542492)
0x1e0: Push((int) 27668)
0x1e1: Push((int) 44878)
0x1e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e3: Pop(3)
0x1e4: Return(); Pop(0)

0x1e5: Push((int) 27668)
0x1e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1e8: PushEmpty(string)
0x1e9: Stack[-1] = "Smile"
0x1ea: Call2 0xe3

0x1eb: Pop(1)
0x1ec: Push((int) 526388)
0x1ed: @@ SetMessage(Stack[-1])
0x1ee: Pop(1)
0x1ef: @@ ClearReplies()
0x1f0: Pop(0)
0x1f1: Push((int) 526389)
0x1f2: Push((int) -1)
0x1f3: Push((int) 27669)
0x1f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f5: Pop(3)
0x1f6: Push((int) 542493)
0x1f7: Push((int) -1)
0x1f8: Push((int) 44880)
0x1f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fa: Pop(3)
0x1fb: Return(); Pop(0)

0x1fc: Push((int) 27659)
0x1fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x1ff: PushEmpty(string)
0x200: Stack[-1] = "Neutral"
0x201: Call2 0xe3

0x202: Pop(1)
0x203: Push((int) 526379)
0x204: @@ SetMessage(Stack[-1])
0x205: Pop(1)
0x206: @@ ClearReplies()
0x207: Pop(0)
0x208: Push((int) 526380)
0x209: Push((int) -1)
0x20a: Push((int) 27660)
0x20b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20c: Pop(3)
0x20d: Return(); Pop(0)

0x20e: Push((int) 27459)
0x20f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x211: PushEmpty(string)
0x212: Stack[-1] = "Neutral"
0x213: Call2 0xe3

0x214: Pop(1)
0x215: Push((int) 526179)
0x216: @@ SetMessage(Stack[-1])
0x217: Pop(1)
0x218: @@ ClearReplies()
0x219: Pop(0)
0x21a: Push((int) 528687)
0x21b: Push((int) 30103)
0x21c: Push((int) 30102)
0x21d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21e: Pop(3)
0x21f: Return(); Pop(0)

0x220: Push((int) 30103)
0x221: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x223: PushEmpty(string)
0x224: Stack[-1] = "Doubt"
0x225: Call2 0xe3

0x226: Pop(1)
0x227: Push((int) 528688)
0x228: @@ SetMessage(Stack[-1])
0x229: Pop(1)
0x22a: @@ ClearReplies()
0x22b: Pop(0)
0x22c: Push((int) 528689)
0x22d: Push((int) 30105)
0x22e: Push((int) 30104)
0x22f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x230: Pop(3)
0x231: Return(); Pop(0)

0x232: Push((int) 30105)
0x233: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x234: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x235: PushEmpty(string)
0x236: Stack[-1] = "Sorrow"
0x237: Call2 0xe3

0x238: Pop(1)
0x239: Push((int) 528690)
0x23a: @@ SetMessage(Stack[-1])
0x23b: Pop(1)
0x23c: @@ ClearReplies()
0x23d: Pop(0)
0x23e: Push((int) 528691)
0x23f: Push((int) 30107)
0x240: Push((int) 30106)
0x241: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x242: Pop(3)
0x243: Push((int) 528697)
0x244: Push((int) 30113)
0x245: Push((int) 30112)
0x246: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x247: Pop(3)
0x248: Return(); Pop(0)

0x249: Push((int) 30113)
0x24a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24b: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x24c: PushEmpty(string)
0x24d: Stack[-1] = "Neutral"
0x24e: Call2 0xe3

0x24f: Pop(1)
0x250: Push((int) 528698)
0x251: @@ SetMessage(Stack[-1])
0x252: Pop(1)
0x253: @@ ClearReplies()
0x254: Pop(0)
0x255: Push((int) 528699)
0x256: Push((int) 30107)
0x257: Push((int) 30114)
0x258: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x259: Pop(3)
0x25a: Return(); Pop(0)

0x25b: Push((int) 30107)
0x25c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x25e: PushEmpty(string)
0x25f: Stack[-1] = "Neutral"
0x260: Call2 0xe3

0x261: Pop(1)
0x262: Push((int) 528692)
0x263: @@ SetMessage(Stack[-1])
0x264: Pop(1)
0x265: @@ ClearReplies()
0x266: Pop(0)
0x267: Push((int) 528693)
0x268: Push((int) 30109)
0x269: Push((int) 30108)
0x26a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26b: Pop(3)
0x26c: Return(); Pop(0)

0x26d: Push((int) 30109)
0x26e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x270: PushEmpty(string)
0x271: Stack[-1] = "Doubt"
0x272: Call2 0xe3

0x273: Pop(1)
0x274: Push((int) 528694)
0x275: @@ SetMessage(Stack[-1])
0x276: Pop(1)
0x277: @@ ClearReplies()
0x278: Pop(0)
0x279: Push((int) 528702)
0x27a: Push((int) 30118)
0x27b: Push((int) 30117)
0x27c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27d: Pop(3)
0x27e: Push((int) 528700)
0x27f: Push((int) 30116)
0x280: Push((int) 30115)
0x281: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x282: Pop(3)
0x283: Return(); Pop(0)

0x284: Push((int) 30116)
0x285: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x286: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x287: PushEmpty(string)
0x288: Stack[-1] = "Neutral"
0x289: Call2 0xe3

0x28a: Pop(1)
0x28b: Push((int) 528701)
0x28c: @@ SetMessage(Stack[-1])
0x28d: Pop(1)
0x28e: @@ ClearReplies()
0x28f: Pop(0)
0x290: Push((int) 528704)
0x291: Push((int) 30118)
0x292: Push((int) 30119)
0x293: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x294: Pop(3)
0x295: Return(); Pop(0)

0x296: Push((int) 30118)
0x297: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x299: PushEmpty(string)
0x29a: Stack[-1] = "Doubt"
0x29b: Call2 0xe3

0x29c: Pop(1)
0x29d: Push((int) 528703)
0x29e: @@ SetMessage(Stack[-1])
0x29f: Pop(1)
0x2a0: @@ ClearReplies()
0x2a1: Pop(0)
0x2a2: Push((int) 528695)
0x2a3: Push((int) 30111)
0x2a4: Push((int) 30110)
0x2a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a6: Pop(3)
0x2a7: Return(); Pop(0)

0x2a8: Push((int) 30111)
0x2a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2ab: PushEmpty(string)
0x2ac: Stack[-1] = "Doubt"
0x2ad: Call2 0xe3

0x2ae: Pop(1)
0x2af: Push((int) 528696)
0x2b0: @@ SetMessage(Stack[-1])
0x2b1: Pop(1)
0x2b2: @@ ClearReplies()
0x2b3: Pop(0)
0x2b4: Push((int) 526180)
0x2b5: Push((int) -1)
0x2b6: Push((int) 27460)
0x2b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b8: Pop(3)
0x2b9: Return(); Pop(0)

0x2ba: Push((int) 27455)
0x2bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2bd: PushEmpty(string)
0x2be: Stack[-1] = "Sorrow"
0x2bf: Call2 0xe3

0x2c0: Pop(1)
0x2c1: Push((int) 526175)
0x2c2: @@ SetMessage(Stack[-1])
0x2c3: Pop(1)
0x2c4: @@ ClearReplies()
0x2c5: Pop(0)
0x2c6: Push((int) 528685)
0x2c7: Push((int) 30101)
0x2c8: Push((int) 30100)
0x2c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ca: Pop(3)
0x2cb: Return(); Pop(0)

0x2cc: Push((int) 30101)
0x2cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2cf: PushEmpty(string)
0x2d0: Stack[-1] = "Sorrow"
0x2d1: Call2 0xe3

0x2d2: Pop(1)
0x2d3: Push((int) 528686)
0x2d4: @@ SetMessage(Stack[-1])
0x2d5: Pop(1)
0x2d6: @@ ClearReplies()
0x2d7: Pop(0)
0x2d8: PushEmpty(bool, object)
0x2d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2da: Call2 0x6e0

0x2db: Pop(1)
0x2dc: Pop(1); Push((bool) Stack[-1] == 0)
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2de: Push((int) 526176)
0x2df: Push((int) -1)
0x2e0: Push((int) 27456)
0x2e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e2: Pop(3)
0x2e3: PushEmpty(bool, object)
0x2e4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e5: Call2 0x6e0

0x2e6: Pop(1)
0x2e7: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2e8: Push((int) 526177)
0x2e9: Push((int) 27459)
0x2ea: Push((int) 27457)
0x2eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ec: Pop(3)
0x2ed: Return(); Pop(0)

0x2ee: Push((int) 27655)
0x2ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2f1: PushEmpty(string)
0x2f2: Stack[-1] = "Neutral"
0x2f3: Call2 0xe3

0x2f4: Pop(1)
0x2f5: Push((int) 526375)
0x2f6: @@ SetMessage(Stack[-1])
0x2f7: Pop(1)
0x2f8: @@ ClearReplies()
0x2f9: Pop(0)
0x2fa: Push((int) 528677)
0x2fb: Push((int) 30092)
0x2fc: Push((int) 30091)
0x2fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fe: Pop(3)
0x2ff: Return(); Pop(0)

0x300: Push((int) 30092)
0x301: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x303: PushEmpty(string)
0x304: Stack[-1] = "Doubt"
0x305: Call2 0xe3

0x306: Pop(1)
0x307: Push((int) 528678)
0x308: @@ SetMessage(Stack[-1])
0x309: Pop(1)
0x30a: @@ ClearReplies()
0x30b: Pop(0)
0x30c: Push((int) 528679)
0x30d: Push((int) 30094)
0x30e: Push((int) 30093)
0x30f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x310: Pop(3)
0x311: Push((int) 528681)
0x312: Push((int) 30094)
0x313: Push((int) 30095)
0x314: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x315: Pop(3)
0x316: Return(); Pop(0)

0x317: Push((int) 30094)
0x318: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x31a: PushEmpty(string)
0x31b: Stack[-1] = "Doubt"
0x31c: Call2 0xe3

0x31d: Pop(1)
0x31e: Push((int) 528680)
0x31f: @@ SetMessage(Stack[-1])
0x320: Pop(1)
0x321: @@ ClearReplies()
0x322: Pop(0)
0x323: Push((int) 528682)
0x324: Push((int) 30098)
0x325: Push((int) 30097)
0x326: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x327: Pop(3)
0x328: Return(); Pop(0)

0x329: Push((int) 30098)
0x32a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x32c: PushEmpty(string)
0x32d: Stack[-1] = "Neutral"
0x32e: Call2 0xe3

0x32f: Pop(1)
0x330: Push((int) 528683)
0x331: @@ SetMessage(Stack[-1])
0x332: Pop(1)
0x333: @@ ClearReplies()
0x334: Pop(0)
0x335: Push((int) 526376)
0x336: Push((int) -1)
0x337: Push((int) 27656)
0x338: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x339: Pop(3)
0x33a: Push((int) 526377)
0x33b: Push((int) -1)
0x33c: Push((int) 27657)
0x33d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33e: Pop(3)
0x33f: Return(); Pop(0)

0x340: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x341: PushEmpty(bool)
0x342: Call2 0x7cf

0x343: Pop(0)
0x344: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x345: @ lshStopAnimation()
0x346: Pop(0)
0x347: GOTO 0x34a

0x348: @ StopAnimation()
0x349: Pop(0)
0x34a: Return(); Pop(0)

0x34b: GOTO 0xfa

0x34c: Return(); Pop(0)

0x34d: PushEmpty()
0x34e: PushEmpty(int, object)
0x34f: Stack[-1] = Stack[-3]
0x350: Push(-2, 1); TaskCall(0)
0x351: Call2 0x0

0x352: Pop(-2, 1); TaskReturn
0x353: Pop(2)
0x354: Return(); Pop(0)

0x355: PushEmpty()
0x356: Call2 0x37e

0x357: Pop(0)
0x358: Return(); Pop(0)

0x359: PushEmpty(bool, bool)
0x35a: Push("cleanup")
0x35b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x35d: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x35e: @ IsLoaded(Stack[-1])
0x35f: Pop(0)
0x360: Pop(0); Push((bool) Stack[-1] == 0)
0x361: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x362: PushEmpty(object)
0x363: Call2 0x5b5

0x364: Pop(0)
0x365: @ RemoveActor(Stack[-1])
0x366: Pop(1)
0x367: GOTO 0x36c

0x368: Push("restore")
0x369: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36b: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x36c: Return(); Pop(2)

0x36d: Push( Stack[1 + Tasks[-1].StackPointer] )
0x36e: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x36f: PushEmpty(object)
0x370: Call2 0x5b5

0x371: Pop(0)
0x372: @ RemoveActor(Stack[-1])
0x373: Pop(1)
0x374: @ Hold()
0x375: Pop(0)
0x376: PushEmpty()
0x377: Call2 0x3e9

0x378: Pop(0)
0x379: Return(); Pop(0)

0x37a: PushEmpty()
0x37b: Call2 0x3f8

0x37c: Pop(0)
0x37d: Return(); Pop(0)

0x37e: PushEmpty(bool)
0x37f: Call2 0x49c

0x380: Pop(0)
0x381: Pop(1); Push((bool) Stack[-1] == 0)
0x382: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x383: @ Hold()
0x384: Pop(0)
0x385: @ GetDirection(Stack[-0])
0x386: Pop(0)
0x387: PushEmpty()
0x388: Call2 0x42e

0x389: Pop(0)
0x38a: GOTO 0x387

0x38b: Return(); Pop(0)

0x38c: PushEmpty(object, object)
0x38d: Push("player")
0x38e: @ FindActor(Stack[-2], Stack[-1])
0x38f: Pop(1)
0x390: Pop(0); Push((bool) Stack[-1] == 0)
0x391: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x392: Stack[-3] = (bool) 0
0x393: Return(); Pop(2)

0x394: PushEmpty(bool, object)
0x395: Stack[-1] = Stack[-3]
0x396: Call2 0x493

0x397: Stack[-5] = Stack[-2]
0x398: Pop(2)
0x399: Return(); Pop(2)

0x39a: Stack[-1] = 0
0x39b: Push(CvectorIndex(Stack[-0], 0))
0x39c: Push(CvectorIndex(Stack[-0], 2))
0x39d: @ RotateAsync(Stack[-2], Stack[-1])
0x39e: Pop(2)
0x39f: Return(); Pop(0)

0x3a0: PushEmpty(object, bool, object, bool)
0x3a1: Push("player")
0x3a2: @ FindActor(Stack[-3], Stack[-1])
0x3a3: Pop(1)
0x3a4: Pop(0); Push((bool) Stack[-2] == 0)
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a6: Stack[-5] = (bool) 0
0x3a7: Return(); Pop(4)

0x3a8: PushEmpty(float, object)
0x3a9: Stack[-1] = Stack[-4]
0x3aa: Call2 0x47a

0x3ab: Pop(1)
0x3ac: Push((float)90000.0)
0x3ad: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3af: Stack[-5] = (bool) 0
0x3b0: Return(); Pop(4)

0x3b1: @ CanSee(Stack[-1], Stack[-2])
0x3b2: Pop(0)
0x3b3: Stack[-5] = Stack[-1]
0x3b4: Return(); Pop(4)

0x3b5: Stack[-2] = 0
0x3b6: PushEmpty(float, float)
0x3b7: Push((int) 8)
0x3b8: Push((int) 16)
0x3b9: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x3ba: Pop(2)
0x3bb: Push((int) 10)
0x3bc: @ SetTimer(Stack[-1], Stack[-2])
0x3bd: Pop(1)
0x3be: Return(); Pop(2)

0x3bf: Push((int) 10)
0x3c0: @ KillTimer(Stack[-1])
0x3c1: Pop(1)
0x3c2: Return(); Pop(0)

0x3c3: PushEmpty()
0x3c4: Push((int) 10)
0x3c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3c7: PushEmpty()
0x3c8: Call2 0x3bf

0x3c9: Pop(0)
0x3ca: PushEmpty(bool)
0x3cb: Stack[-1] = (bool) 0
0x3cc: PushEmpty(bool)
0x3cd: Call2 0x49c

0x3ce: Pop(0)
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d0: PushEmpty(bool)
0x3d1: Call2 0x3a0

0x3d2: Pop(0)
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d4: Stack[-1] = (bool) 1
0x3d5: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3d6: PushEmpty(bool)
0x3d7: Call2 0x38c

0x3d8: Pop(0)
0x3d9: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3da: PushEmpty(bool, object)
0x3db: PushEmpty(object)
0x3dc: Call2 0x5b5

0x3dd: Stack[-2] = Stack[-1]
0x3de: Pop(1)
0x3df: Call2 0x530

0x3e0: Pop(2)
0x3e1: GOTO 0x3e8

0x3e2: PushEmpty()
0x3e3: Call2 0x39b

0x3e4: Pop(0)
0x3e5: PushEmpty()
0x3e6: Call2 0x3b6

0x3e7: Pop(0)
0x3e8: Return(); Pop(0)

0x3e9: PushEmpty()
0x3ea: Call2 0x475

0x3eb: Pop(0)
0x3ec: PushEmpty()
0x3ed: Call2 0x3bf

0x3ee: Pop(0)
0x3ef: @ lshStopSpeech()
0x3f0: Pop(0)
0x3f1: @ lshStopAnimation()
0x3f2: Pop(0)
0x3f3: @ StopAsync()
0x3f4: Pop(0)
0x3f5: @ Hold()
0x3f6: Pop(0)
0x3f7: Return(); Pop(0)

0x3f8: @ StopGroup0()
0x3f9: Pop(0)
0x3fa: PushEmpty()
0x3fb: Call2 0x3bf

0x3fc: Pop(0)
0x3fd: PushEmpty(string)
0x3fe: Stack[-1] = "Neutral"
0x3ff: Call2 0x580

0x400: Pop(1)
0x401: PushEmpty()
0x402: Call2 0x3b6

0x403: Pop(0)
0x404: Return(); Pop(0)

0x405: PushEmpty()
0x406: Push(Stack[-1])
0x407: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x408: PushEmpty()
0x409: Call2 0x3b6

0x40a: Pop(0)
0x40b: GOTO 0x410

0x40c: PushEmpty(string)
0x40d: Stack[-1] = "Neutral"
0x40e: Call2 0x580

0x40f: Pop(1)
0x410: Return(); Pop(0)

0x411: PushEmpty(bool, bool)
0x412: @ IsOverrideActive(Stack[-1])
0x413: Pop(0)
0x414: Pop(0); Push((bool) Stack[-1] == 0)
0x415: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x416: EventDisable(0)
0x417: PushEmpty()
0x418: Call2 0x475

0x419: Pop(0)
0x41a: PushEmpty(bool, object)
0x41b: Stack[-1] = Stack[-5]
0x41c: Call2 0x493

0x41d: Pop(2)
0x41e: EventEnable(0)
0x41f: PushEmpty(object)
0x420: Stack[-1] = Stack[-4]
0x421: Call2 0x34d

0x422: Pop(1)
0x423: PushEmpty(string)
0x424: Stack[-1] = "Neutral"
0x425: Call2 0x580

0x426: Pop(1)
0x427: PushEmpty()
0x428: Call2 0x3bf

0x429: Pop(0)
0x42a: PushEmpty()
0x42b: Call2 0x3b6

0x42c: Pop(0)
0x42d: Return(); Pop(2)

0x42e: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x42f: @ WaitForAnimEnd()
0x430: Pop(0)
0x431: PushEmpty(bool)
0x432: Call2 0x49c

0x433: Pop(0)
0x434: Pop(1); Push((bool) Stack[-1] == 0)
0x435: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x436: Return(); Pop(12)

0x437: PushEmpty(int)
0x438: Call2 0x63c

0x439: Stack[-7] = Stack[-1]
0x43a: Pop(1)
0x43b: Stack[-5] = (int) 0
0x43c: PushEmpty(bool)
0x43d: Stack[-1] = (bool) 0
0x43e: Push((int) 5)
0x43f: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x441: PushEmpty(bool)
0x442: Call2 0x49c

0x443: Pop(0)
0x444: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x445: Stack[-1] = (bool) 1
0x446: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x447: Pop(0); Push((bool) Stack[-6] == 0)
0x448: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x449: Push((int) 3)
0x44a: @ Sleep(Stack[-1], Stack[-5])
0x44b: Pop(1)
0x44c: Pop(0); Push((bool) Stack[-4] == 0)
0x44d: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44e: GOTO 0x470

0x44f: GOTO 0x465

0x450: @ irand(Stack[-3], Stack[-6])
0x451: Pop(0)
0x452: Push((int) 5)
0x453: @ irand(Stack[-3], Stack[-1])
0x454: Pop(1)
0x455: Push((int) 0)
0x456: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x457: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x458: Stack[-3] = (int) 0
0x459: Push("all")
0x45a: PushEmpty(string, int)
0x45b: Stack[-1] = Stack[-6]
0x45c: Call2 0x635

0x45d: Pop(1)
0x45e: @ PlayAnimation(Stack[-2], Stack[-1])
0x45f: Pop(2)
0x460: @ WaitForAnimEnd(Stack[-1])
0x461: Pop(0)
0x462: Pop(0); Push((bool) Stack[-1] == 0)
0x463: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x464: GOTO 0x470

0x465: PushEmpty(bool)
0x466: Call2 0x473

0x467: Pop(0)
0x468: Pop(1); Push((bool) Stack[-1] == 0)
0x469: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x46a: GOTO 0x470

0x46b: @ ResetAAS()
0x46c: Pop(0)
0x46d: Push((int) 1)
0x46e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x46f: GOTO 0x43c

0x470: @ ResetAAS()
0x471: Pop(0)
0x472: Return(); Pop(12)

0x473: Stack[-1] = (bool) 1
0x474: Return(); Pop(0)

0x475: @ StopAnimation()
0x476: Pop(0)
0x477: @ StopGroup0()
0x478: Pop(0)
0x479: Return(); Pop(0)

0x47a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x47b: @ GetPosition(Stack[-3])
0x47c: Pop(0)
0x47d: @@ GetPosition(Stack[-2])
0x47e: Pop(0)
0x47f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x480: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x481: Return(); Pop(6)

0x482: PushEmpty(int, int)
0x483: @@ GetProperty(Stack[-4], Stack[-1])
0x484: Pop(0)
0x485: Pop(0); Push(Stack[-1] + Stack[-3]);
0x486: @@ SetProperty(Stack[-5], Stack[-1])
0x487: Pop(1)
0x488: Return(); Pop(2)

0x489: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x48a: @ GetPosition(Stack[-3])
0x48b: Pop(0)
0x48c: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x48d: Push(CvectorIndex(Stack[-2], 0))
0x48e: Push(CvectorIndex(Stack[-3], 2))
0x48f: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x490: Pop(2)
0x491: Stack[-8] = Stack[-1]
0x492: Return(); Pop(6)

0x493: PushEmpty(cvector, cvector)
0x494: @@ GetPosition(Stack[-1])
0x495: Pop(0)
0x496: PushEmpty(bool, cvector)
0x497: Stack[-1] = Stack[-3]
0x498: Call2 0x489

0x499: Stack[-6] = Stack[-2]
0x49a: Pop(2)
0x49b: Return(); Pop(2)

0x49c: PushEmpty(bool, bool)
0x49d: @ IsLoaded(Stack[-1])
0x49e: Pop(0)
0x49f: Stack[-3] = Stack[-1]
0x4a0: Return(); Pop(2)

0x4a1: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x4a2: @@ GetPosition(Stack[-8])
0x4a3: Pop(0)
0x4a4: @@ GetEyesHeight(Stack[-9])
0x4a5: Pop(0)
0x4a6: Push(CvectorIndex(Stack[-8], 1))
0x4a7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x4a8: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x4a9: @ GetPosition(Stack[-7])
0x4aa: Pop(0)
0x4ab: @ GetEyesHeight(Stack[-9])
0x4ac: Pop(0)
0x4ad: Push(CvectorIndex(Stack[-7], 1))
0x4ae: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x4af: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x4b0: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x4b1: Push(CvectorIndex(Stack[-6], 1))
0x4b2: Stack[-1] = (int) 0
0x4b3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x4b4: Pop(0); Push(Stack[-6] | Stack[-6]);
0x4b5: Pop(1); Push(Sqrt(Stack[-1]))
0x4b6: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x4b7: Stack[-5] = -Stack[-6]; Pop(0);
0x4b8: Pop(0); Push(Stack[-6] * Stack[-19]);
0x4b9: PushEmpty(cvector, cvector)
0x4ba: Push(CVector(0.0, 1.0, 0.0))
0x4bb: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x4bc: Call2 0x5bb

0x4bd: Pop(1)
0x4be: Push((int) 25)
0x4bf: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4c0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4c1: Push(CVector(0.0, 10.0, 0.0))
0x4c2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x4c3: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x4c4: @ IsOverrideActive(Stack[-2])
0x4c5: Pop(0)
0x4c6: Push(Stack[-2])
0x4c7: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c8: Stack[-21] = (bool) 0
0x4c9: Return(); Pop(18)

0x4ca: @ StopWorld()
0x4cb: Pop(0)
0x4cc: @ CameraTransit(Stack[-3], Stack[-5])
0x4cd: Pop(0)
0x4ce: Push(CvectorIndex(Stack[-4], 0))
0x4cf: Push(CvectorIndex(Stack[-5], 2))
0x4d0: @ Rotate(Stack[-2], Stack[-1])
0x4d1: Pop(2)
0x4d2: PushEmpty(bool)
0x4d3: Call2 0x7cf

0x4d4: Pop(0)
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d6: GOTO 0x4df

0x4d7: Push("head")
0x4d8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4d9: Pop(1)
0x4da: Push(Stack[-1])
0x4db: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4dc: Push("head")
0x4dd: @ LookAsyncCamera(Stack[-1])
0x4de: Pop(1)
0x4df: @ CameraWaitForPlayFinish()
0x4e0: Pop(0)
0x4e1: @ ResumeWorld()
0x4e2: Pop(0)
0x4e3: Stack[-21] = (bool) 1
0x4e4: Return(); Pop(18)

0x4e5: PushEmpty(bool, bool)
0x4e6: @ CameraSwitchToNormal()
0x4e7: Pop(0)
0x4e8: PushEmpty(bool)
0x4e9: Call2 0x7cf

0x4ea: Pop(0)
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4ec: GOTO 0x4f5

0x4ed: Push("head")
0x4ee: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4ef: Pop(1)
0x4f0: Push(Stack[-1])
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f2: Push("head")
0x4f3: @ UnlookAsync(Stack[-1])
0x4f4: Pop(1)
0x4f5: Return(); Pop(2)

0x4f6: PushEmpty(int, int, int, int)
0x4f7: Push("voice_common")
0x4f8: @ GetVariable(Stack[-1], Stack[-3])
0x4f9: Pop(1)
0x4fa: Push(Stack[-2])
0x4fb: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x4fc: PushEmpty(bool, object)
0x4fd: Stack[-1] = Stack[-7]
0x4fe: Call2 0x530

0x4ff: Pop(1)
0x500: Pop(1); Push((bool) Stack[-1] == 0)
0x501: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x502: PushEmpty(bool, object)
0x503: Stack[-1] = Stack[-7]
0x504: Call2 0x555

0x505: Pop(1)
0x506: Pop(1); Push((bool) Stack[-1] == 0)
0x507: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x508: Stack[-6] = (bool) 0
0x509: Return(); Pop(4)

0x50a: Push((int) 2)
0x50b: @ irand(Stack[-2], Stack[-1])
0x50c: Pop(1)
0x50d: Push(Stack[-1])
0x50e: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x50f: Push("voice_common")
0x510: Push((int) 1)
0x511: Pop(1); Push(Stack[-4] + Stack[-1]);
0x512: Push((int) 3)
0x513: Pop(2); Push(Stack[-2] % Stack[-1]);
0x514: @ SetVariable(Stack[-2], Stack[-1])
0x515: Pop(2)
0x516: GOTO 0x51b

0x517: Push("voice_common")
0x518: Push((int) 0)
0x519: @ SetVariable(Stack[-2], Stack[-1])
0x51a: Pop(2)
0x51b: GOTO 0x52e

0x51c: PushEmpty(bool, object)
0x51d: Stack[-1] = Stack[-7]
0x51e: Call2 0x555

0x51f: Pop(1)
0x520: Pop(1); Push((bool) Stack[-1] == 0)
0x521: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x522: PushEmpty(bool, object)
0x523: Stack[-1] = Stack[-7]
0x524: Call2 0x530

0x525: Pop(1)
0x526: Pop(1); Push((bool) Stack[-1] == 0)
0x527: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x528: Stack[-6] = (bool) 0
0x529: Return(); Pop(4)

0x52a: Push("voice_common")
0x52b: Push((int) 1)
0x52c: @ SetVariable(Stack[-2], Stack[-1])
0x52d: Pop(2)
0x52e: Stack[-6] = (bool) 1
0x52f: Return(); Pop(4)

0x530: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x531: Stack[-5] = "c"
0x532: Stack[-4] = (int) 0
0x533: Push((int) 1)
0x534: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x535: Push((int) 1)
0x536: Pop(1); Push(Stack[-5] + Stack[-1]);
0x537: Pop(1); Push(Stack[-6] + Stack[-1]);
0x538: @@ HasProperty(Stack[-1], Stack[-4])
0x539: Pop(1)
0x53a: Pop(0); Push((bool) Stack[-3] == 0)
0x53b: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x53c: GOTO 0x540

0x53d: Push((int) 1)
0x53e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x53f: GOTO 0x533

0x540: Pop(0); Push((bool) Stack[-4] == 0)
0x541: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x542: Stack[-12] = (bool) 0
0x543: Return(); Pop(10)

0x544: Stack[-2] = (int) 0
0x545: Push((int) 1)
0x546: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x547: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x548: @ irand(Stack[-2], Stack[-4])
0x549: Pop(0)
0x54a: Push((int) 1)
0x54b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x54c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x54d: @@ GetProperty(Stack[-1], Stack[-2])
0x54e: Pop(1)
0x54f: PushEmpty(bool, string)
0x550: Stack[-1] = Stack[-3]
0x551: Call2 0x59f

0x552: Stack[-14] = Stack[-2]
0x553: Pop(2)
0x554: Return(); Pop(10)

0x555: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x556: Push("d")
0x557: PushEmpty(int)
0x558: Call2 0x62c

0x559: Pop(0)
0x55a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x55b: Push("m")
0x55c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x55d: Stack[-4] = (int) 0
0x55e: Push((int) 1)
0x55f: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x560: Push((int) 1)
0x561: Pop(1); Push(Stack[-5] + Stack[-1]);
0x562: Pop(1); Push(Stack[-6] + Stack[-1]);
0x563: @@ HasProperty(Stack[-1], Stack[-4])
0x564: Pop(1)
0x565: Pop(0); Push((bool) Stack[-3] == 0)
0x566: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x567: GOTO 0x56b

0x568: Push((int) 1)
0x569: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x56a: GOTO 0x55e

0x56b: Pop(0); Push((bool) Stack[-4] == 0)
0x56c: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x56d: Stack[-12] = (bool) 0
0x56e: Return(); Pop(10)

0x56f: Stack[-2] = (int) 0
0x570: Push((int) 1)
0x571: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x572: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x573: @ irand(Stack[-2], Stack[-4])
0x574: Pop(0)
0x575: Push((int) 1)
0x576: Pop(1); Push(Stack[-3] + Stack[-1]);
0x577: Pop(1); Push(Stack[-6] + Stack[-1]);
0x578: @@ GetProperty(Stack[-1], Stack[-2])
0x579: Pop(1)
0x57a: PushEmpty(bool, string)
0x57b: Stack[-1] = Stack[-3]
0x57c: Call2 0x59f

0x57d: Stack[-14] = Stack[-2]
0x57e: Pop(2)
0x57f: Return(); Pop(10)

0x580: PushEmpty(bool, float, float, bool, float, float)
0x581: @ lshHasAnimation(Stack[-3], Stack[-7])
0x582: Pop(0)
0x583: Push(Stack[-3])
0x584: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x585: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x586: Pop(0)
0x587: Push((bool) 0)
0x588: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x589: Pop(1)
0x58a: GOTO 0x58f

0x58b: Push("Can't find lsh animation : ")
0x58c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x58d: @ Trace(Stack[-1])
0x58e: Pop(1)
0x58f: Return(); Pop(6)

0x590: PushEmpty(bool, float, float, bool, float, float)
0x591: @ lshHasAnimation(Stack[-3], Stack[-8])
0x592: Pop(0)
0x593: Push(Stack[-3])
0x594: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x595: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x596: Pop(0)
0x597: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x598: Pop(0)
0x599: GOTO 0x59e

0x59a: Push("Can't find lsh animation : ")
0x59b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x59c: @ Trace(Stack[-1])
0x59d: Pop(1)
0x59e: Return(); Pop(6)

0x59f: PushEmpty(bool, bool)
0x5a0: PushEmpty(bool)
0x5a1: Call2 0x7cf

0x5a2: Pop(0)
0x5a3: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5a4: @ lshHasSpeech(Stack[-1], Stack[-3])
0x5a5: Pop(0)
0x5a6: Push(Stack[-1])
0x5a7: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5a8: @ lshPlaySpeech(Stack[-3])
0x5a9: Pop(0)
0x5aa: Stack[-4] = (bool) 1
0x5ab: Return(); Pop(2)

0x5ac: Stack[-4] = (bool) 0
0x5ad: Return(); Pop(2)

0x5ae: PushEmpty(bool)
0x5af: Call2 0x7cf

0x5b0: Pop(0)
0x5b1: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b2: @ lshStopSpeech()
0x5b3: Pop(0)
0x5b4: Return(); Pop(0)

0x5b5: PushEmpty(object, object)
0x5b6: @ self(Stack[-1])
0x5b7: Pop(0)
0x5b8: Stack[-3] = Stack[-1]
0x5b9: Return(); Pop(2)

0x5ba: Stack[-1] = 0
0x5bb: PushEmpty(float, float)
0x5bc: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5bd: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5be: Push((float)0.0)
0x5bf: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5c0: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5c1: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5c2: Return(); Pop(2)

0x5c3: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5c4: Return(); Pop(2)

0x5c5: PushEmpty(int, int)
0x5c6: @ GetVariable(Stack[-3], Stack[-1])
0x5c7: Pop(0)
0x5c8: Stack[-4] = Stack[-1]
0x5c9: Return(); Pop(2)

0x5ca: PushEmpty(object, object, object, object)
0x5cb: @ GetMainOutdoorScene(Stack[-2])
0x5cc: Pop(0)
0x5cd: Push(".bin")
0x5ce: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5cf: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x5d0: Pop(1)
0x5d1: Stack[-6] = Stack[-1]
0x5d2: Return(); Pop(4)

0x5d3: Stack[-1] = 0
0x5d4: Stack[-2] = 0
0x5d5: PushEmpty(object, object)
0x5d6: @ CreateIntVector(Stack[-1])
0x5d7: Pop(0)
0x5d8: @@ add(Stack[-4])
0x5d9: Pop(0)
0x5da: @@ add(Stack[-3])
0x5db: Pop(0)
0x5dc: Push((int) 3)
0x5dd: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5de: Pop(1)
0x5df: Return(); Pop(2)

0x5e0: Stack[-1] = 0
0x5e1: PushEmpty(int, int)
0x5e2: PushEmpty(object, string, int)
0x5e3: Stack[-3] = Stack[-7]
0x5e4: Stack[-2] = "money"
0x5e5: Stack[-1] = Stack[-6]
0x5e6: Call2 0x482

0x5e7: Pop(3)
0x5e8: Push((int) 0)
0x5e9: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x5ea: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5eb: Push("Money")
0x5ec: @ GetInvItemByName(Stack[-2], Stack[-1])
0x5ed: Pop(1)
0x5ee: PushEmpty(int, int)
0x5ef: Stack[-2] = Stack[-3]
0x5f0: Stack[-1] = Stack[-5]
0x5f1: Call2 0x5d5

0x5f2: Pop(2)
0x5f3: Return(); Pop(2)

0x5f4: PushEmpty(int, int, bool, int, int, bool)
0x5f5: @@ GetItemID(Stack[-3])
0x5f6: Pop(0)
0x5f7: Push("Category")
0x5f8: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x5f9: Pop(1)
0x5fa: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x5fb: Pop(0)
0x5fc: Pop(0); Push((bool) Stack[-1] == 0)
0x5fd: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5fe: @@ DropItems(Stack[-8], Stack[-7])
0x5ff: Pop(0)
0x600: GOTO 0x606

0x601: PushEmpty(int, int)
0x602: Stack[-2] = Stack[-5]
0x603: Stack[-1] = Stack[-9]
0x604: Call2 0x5d5

0x605: Pop(2)
0x606: Return(); Pop(6)

0x607: PushEmpty(object, object)
0x608: @ CreateInvItem(Stack[-1])
0x609: Pop(0)
0x60a: @@ SetItemName(Stack[-4])
0x60b: Pop(0)
0x60c: PushEmpty(object, object, int)
0x60d: Stack[-3] = Stack[-8]
0x60e: Stack[-2] = Stack[-4]
0x60f: Stack[-1] = Stack[-6]
0x610: Call2 0x5f4

0x611: Pop(3)
0x612: Return(); Pop(2)

0x613: Stack[-1] = 0
0x614: PushEmpty(int, bool, int, bool)
0x615: @ GetInvItemByName(Stack[-2], Stack[-5])
0x616: Pop(0)
0x617: @@ HasItem(Stack[-2], Stack[-1])
0x618: Pop(0)
0x619: Stack[-7] = Stack[-1]
0x61a: Return(); Pop(4)

0x61b: PushEmpty(object, object)
0x61c: @ FindActor(Stack[-1], Stack[-4])
0x61d: Pop(0)
0x61e: Pop(0); Push((bool) Stack[-1] == 0)
0x61f: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x620: Stack[-5] = (bool) 0
0x621: Return(); Pop(2)

0x622: @ Trigger(Stack[-1], Stack[-3])
0x623: Pop(0)
0x624: Stack[-5] = (bool) 1
0x625: Return(); Pop(2)

0x626: Stack[-1] = 0
0x627: PushEmpty(float, float)
0x628: @ GetGameTime(Stack[-1])
0x629: Pop(0)
0x62a: Stack[-3] = Stack[-1]
0x62b: Return(); Pop(2)

0x62c: PushEmpty(float, float)
0x62d: @ GetGameTime(Stack[-1])
0x62e: Pop(0)
0x62f: Push((int) 1)
0x630: PushEmpty(int)
0x631: Push((int) 24)
0x632: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x633: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x634: Return(); Pop(2)

0x635: PushEmpty(string, string)
0x636: Stack[-1] = "idle"
0x637: Push(Stack[-3])
0x638: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x639: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x63a: Stack[-4] = Stack[-1]
0x63b: Return(); Pop(2)

0x63c: PushEmpty(int, bool, int, bool)
0x63d: Stack[-2] = (int) 0
0x63e: Push("all")
0x63f: PushEmpty(string, int)
0x640: Stack[-1] = Stack[-5]
0x641: Call2 0x635

0x642: Pop(1)
0x643: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x644: Pop(2)
0x645: Pop(0); Push((bool) Stack[-1] == 0)
0x646: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x647: GOTO 0x64b

0x648: Push((int) 1)
0x649: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x64a: GOTO 0x63e

0x64b: Stack[-5] = Stack[-2]
0x64c: Return(); Pop(4)

0x64d: PushEmpty()
0x64e: PushEmpty(object, string, float)
0x64f: PushEmpty(object)
0x650: Call2 0x784

0x651: Stack[-4] = Stack[-1]
0x652: Pop(1)
0x653: Stack[-2] = "pt_map_burah_home"
0x654: Stack[-1] = (int) 2
0x655: Call2 0x795

0x656: Pop(3)
0x657: PushEmpty(object)
0x658: Call2 0x784

0x659: Pop(0)
0x65a: @@ ShowMap(Stack[-1])
0x65b: Pop(1)
0x65c: Return(); Pop(0)

0x65d: PushEmpty(object, object)
0x65e: PushEmpty(int, string)
0x65f: Stack[-1] = "k7q01CorpseMark"
0x660: Call2 0x5c5

0x661: Pop(1)
0x662: Push((int) 0)
0x663: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x664: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x665: Push("k7q01CorpseMark")
0x666: Push((int) 1)
0x667: @ SetVariable(Stack[-2], Stack[-1])
0x668: Pop(2)
0x669: PushEmpty(object)
0x66a: Call2 0x784

0x66b: Stack[-2] = Stack[-1]
0x66c: Pop(1)
0x66d: Push("k7q01BirdmaskGotoCorpse")
0x66e: Push("pt_d7q02_corpse")
0x66f: Push((int) 3)
0x670: Push((int) 526214)
0x671: PushEmpty(float)
0x672: Call2 0x627

0x673: Pop(0)
0x674: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x675: Pop(5)
0x676: PushEmpty(bool, string, string)
0x677: Stack[-2] = "quest_k7_01"
0x678: Stack[-1] = "place_corpse"
0x679: Call2 0x61b

0x67a: Pop(3)
0x67b: Stack[-1] = 0
0x67c: Return(); Pop(2)

0x67d: PushEmpty()
0x67e: Push("ook7Burah1")
0x67f: Push((int) 1)
0x680: @ SetVariable(Stack[-2], Stack[-1])
0x681: Pop(2)
0x682: Return(); Pop(0)

0x683: PushEmpty(int, int)
0x684: Push("k7q01")
0x685: Push((int) 4)
0x686: @ SetVariable(Stack[-2], Stack[-1])
0x687: Pop(2)
0x688: PushEmpty()
0x689: Call2 0x727

0x68a: Pop(0)
0x68b: Push("bird_balahon")
0x68c: Push((int) 1)
0x68d: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x68e: Pop(2)
0x68f: Return(); Pop(2)

0x690: PushEmpty(object, object)
0x691: PushEmpty(object)
0x692: Call2 0x784

0x693: Stack[-2] = Stack[-1]
0x694: Pop(1)
0x695: Push("k7q03BurahGotoFather")
0x696: Push("pt_map_burah_home")
0x697: Push((int) 0)
0x698: Push((int) 526394)
0x699: PushEmpty(float)
0x69a: Call2 0x627

0x69b: Pop(0)
0x69c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x69d: Pop(5)
0x69e: PushEmpty()
0x69f: Call2 0x734

0x6a0: Pop(0)
0x6a1: PushEmpty()
0x6a2: Call2 0x741

0x6a3: Pop(0)
0x6a4: PushEmpty(object, string)
0x6a5: Stack[-1] = "quest_k7_03"
0x6a6: Call2 0x5ca

0x6a7: Pop(2)
0x6a8: PushEmpty(bool, string, string)
0x6a9: Stack[-2] = "quest_k7_03"
0x6aa: Stack[-1] = "place_family"
0x6ab: Call2 0x61b

0x6ac: Pop(3)
0x6ad: Return(); Pop(2)

0x6ae: Stack[-1] = 0
0x6af: PushEmpty()
0x6b0: Push("ook7Burah2")
0x6b1: Push((int) 1)
0x6b2: @ SetVariable(Stack[-2], Stack[-1])
0x6b3: Pop(2)
0x6b4: Return(); Pop(0)

0x6b5: PushEmpty()
0x6b6: Push("tvirin 5 is given")
0x6b7: @ Trace(Stack[-1])
0x6b8: Pop(1)
0x6b9: PushEmpty(object, string, int)
0x6ba: Stack[-3] = Stack[-5]
0x6bb: Stack[-2] = "tvirin"
0x6bc: Stack[-1] = (int) 5
0x6bd: Call2 0x607

0x6be: Pop(3)
0x6bf: Return(); Pop(0)

0x6c0: PushEmpty()
0x6c1: PushEmpty()
0x6c2: Call2 0x74e

0x6c3: Pop(0)
0x6c4: PushEmpty(bool, string, string)
0x6c5: Stack[-2] = "quest_k7_03"
0x6c6: Stack[-1] = "completed"
0x6c7: Call2 0x61b

0x6c8: Pop(3)
0x6c9: Return(); Pop(0)

0x6ca: PushEmpty()
0x6cb: Push("money2000 is given")
0x6cc: @ Trace(Stack[-1])
0x6cd: Pop(1)
0x6ce: PushEmpty(object, int)
0x6cf: Stack[-2] = Stack[-4]
0x6d0: Stack[-1] = (int) 2000
0x6d1: Call2 0x5e1

0x6d2: Pop(2)
0x6d3: Return(); Pop(0)

0x6d4: PushEmpty()
0x6d5: Push("playsound")
0x6d6: Push("givemoney")
0x6d7: @ TriggerWorld(Stack[-2], Stack[-1])
0x6d8: Pop(2)
0x6d9: Return(); Pop(0)

0x6da: PushEmpty()
0x6db: Push("playsound")
0x6dc: Push("giveitem")
0x6dd: @ TriggerWorld(Stack[-2], Stack[-1])
0x6de: Pop(2)
0x6df: Return(); Pop(0)

0x6e0: PushEmpty()
0x6e1: PushEmpty(bool, object, string)
0x6e2: Stack[-2] = Stack[-4]
0x6e3: Stack[-1] = "bird_balahon"
0x6e4: Call2 0x614

0x6e5: Pop(2)
0x6e6: IF (Stack[-1] == 0) GOTO 0x6e9; Pop(1)

0x6e7: Stack[-2] = (bool) 1
0x6e8: Return(); Pop(0)

0x6e9: Stack[-2] = (bool) 0
0x6ea: Return(); Pop(0)

0x6eb: PushEmpty()
0x6ec: PushEmpty(int, string)
0x6ed: Stack[-1] = "k7q01"
0x6ee: Call2 0x5c5

0x6ef: Pop(1)
0x6f0: Push((int) 3)
0x6f1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f5; Pop(1)

0x6f3: Stack[-2] = (bool) 1
0x6f4: Return(); Pop(0)

0x6f5: Stack[-2] = (bool) 0
0x6f6: Return(); Pop(0)

0x6f7: PushEmpty()
0x6f8: PushEmpty(int, string)
0x6f9: Stack[-1] = "ook7Burah1"
0x6fa: Call2 0x5c5

0x6fb: Pop(1)
0x6fc: Push((int) 0)
0x6fd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6fe: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x6ff: Stack[-2] = (bool) 1
0x700: Return(); Pop(0)

0x701: Stack[-2] = (bool) 0
0x702: Return(); Pop(0)

0x703: PushEmpty()
0x704: PushEmpty(int, string)
0x705: Stack[-1] = "k7q03"
0x706: Call2 0x5c5

0x707: Pop(1)
0x708: Push((int) 0)
0x709: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x70a: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x70b: Stack[-2] = (bool) 1
0x70c: Return(); Pop(0)

0x70d: Stack[-2] = (bool) 0
0x70e: Return(); Pop(0)

0x70f: PushEmpty()
0x710: PushEmpty(int, string)
0x711: Stack[-1] = "ook7Burah2"
0x712: Call2 0x5c5

0x713: Pop(1)
0x714: Push((int) 0)
0x715: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x716: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x717: Stack[-2] = (bool) 1
0x718: Return(); Pop(0)

0x719: Stack[-2] = (bool) 0
0x71a: Return(); Pop(0)

0x71b: PushEmpty()
0x71c: PushEmpty(int, string)
0x71d: Stack[-1] = "k7q03"
0x71e: Call2 0x5c5

0x71f: Pop(1)
0x720: Push((int) 2)
0x721: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x722: IF (Stack[-1] == 0) GOTO 0x725; Pop(1)

0x723: Stack[-2] = (bool) 1
0x724: Return(); Pop(0)

0x725: Stack[-2] = (bool) 0
0x726: Return(); Pop(0)

0x727: PushEmpty(object, object)
0x728: Push((int) 422)
0x729: Push((int) 1)
0x72a: Push((int) 526221)
0x72b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x72c: Pop(3)
0x72d: PushEmpty(bool, object, int)
0x72e: Stack[-2] = Stack[-4]
0x72f: Stack[-1] = (int) 416
0x730: Call2 0x768

0x731: Pop(3)
0x732: Return(); Pop(2)

0x733: Stack[-1] = 0
0x734: PushEmpty(object, object)
0x735: Push((int) 434)
0x736: Push((int) 2)
0x737: Push((int) 526390)
0x738: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x739: Pop(3)
0x73a: PushEmpty(bool, object, int)
0x73b: Stack[-2] = Stack[-4]
0x73c: Stack[-1] = (int) -1
0x73d: Call2 0x768

0x73e: Pop(3)
0x73f: Return(); Pop(2)

0x740: Stack[-1] = 0
0x741: PushEmpty(object, object)
0x742: Push((int) 435)
0x743: Push((int) 2)
0x744: Push((int) 526391)
0x745: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x746: Pop(3)
0x747: PushEmpty(bool, object, int)
0x748: Stack[-2] = Stack[-4]
0x749: Stack[-1] = (int) 434
0x74a: Call2 0x768

0x74b: Pop(3)
0x74c: Return(); Pop(2)

0x74d: Stack[-1] = 0
0x74e: PushEmpty(object, object)
0x74f: Push((int) 437)
0x750: Push((int) 2)
0x751: Push((int) 526393)
0x752: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x753: Pop(3)
0x754: PushEmpty(bool, object, int)
0x755: Stack[-2] = Stack[-4]
0x756: Stack[-1] = (int) 434
0x757: Call2 0x768

0x758: Pop(3)
0x759: Return(); Pop(2)

0x75a: Stack[-1] = 0
0x75b: PushEmpty(object, object)
0x75c: @ GetDiaryRoot(Stack[-1])
0x75d: Pop(0)
0x75e: Pop(0); Push((bool) Stack[-1] == 0)
0x75f: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x760: Push("Can't retrieve diary root")
0x761: @ Trace(Stack[-1])
0x762: Pop(1)
0x763: Stack[-3] = (bool) 0
0x764: Return(); Pop(2)

0x765: Stack[-3] = Stack[-1]
0x766: Return(); Pop(2)

0x767: Stack[-1] = 0
0x768: PushEmpty(object, object, int, object, object, int)
0x769: PushEmpty(object)
0x76a: Call2 0x75b

0x76b: Stack[-4] = Stack[-1]
0x76c: Pop(1)
0x76d: @@ Find(Stack[-7], Stack[-2])
0x76e: Pop(0)
0x76f: Pop(0); Push((bool) Stack[-2] == 0)
0x770: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x771: Push("Can't find diary parent with id: ")
0x772: Pop(1); Push(Stack[-1] + Stack[-8]);
0x773: @ Trace(Stack[-1])
0x774: Pop(1)
0x775: Stack[-9] = (bool) 0
0x776: Return(); Pop(6)

0x777: @@ AddChild(Stack[-8])
0x778: Pop(0)
0x779: Push((int) 7)
0x77a: @ SendWorldWndMessage(Stack[-1])
0x77b: Pop(1)
0x77c: @@ GetCategory(Stack[-1])
0x77d: Pop(0)
0x77e: @ SetDiarySection(Stack[-1])
0x77f: Pop(0)
0x780: Stack[-9] = (bool) 0
0x781: Return(); Pop(6)

0x782: Stack[-2] = 0
0x783: Stack[-3] = 0
0x784: PushEmpty(object, object, object, object)
0x785: @ GetMainOutdoorScene(Stack[-2])
0x786: Pop(0)
0x787: Pop(0); Push((bool) Stack[-2] == 0)
0x788: IF (Stack[-1] == 0) GOTO 0x78f; Pop(1)

0x789: Push("Can't find main outdoor scene")
0x78a: @ Trace(Stack[-1])
0x78b: Pop(1)
0x78c: Stack[-1] = 0
0x78d: Stack[-5] = Stack[-1]
0x78e: Return(); Pop(4)

0x78f: @@ GetMap(Stack[-1])
0x790: Pop(0)
0x791: Stack[-5] = Stack[-1]
0x792: Return(); Pop(4)

0x793: Stack[-1] = 0
0x794: Stack[-2] = 0
0x795: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x796: @ GetMainOutdoorScene(Stack[-2])
0x797: Pop(0)
0x798: Pop(0); Push((bool) Stack[-2] == 0)
0x799: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x79a: Push("Can't find main outdoor scene")
0x79b: @ Trace(Stack[-1])
0x79c: Pop(1)
0x79d: Return(); Pop(8)

0x79e: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x79f: Pop(0)
0x7a0: Pop(0); Push((bool) Stack[-1] == 0)
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a2: Push("Warning: outdoor scene locator ")
0x7a3: Pop(1); Push(Stack[-1] + Stack[-11]);
0x7a4: Push(" doesnt exist")
0x7a5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7a6: @ Trace(Stack[-1])
0x7a7: Pop(1)
0x7a8: @@ GetMap(Stack[-11])
0x7a9: Pop(0)
0x7aa: Pop(0); Push((bool) Stack[-11] == 0)
0x7ab: IF (Stack[-1] == 0) GOTO 0x7b0; Pop(1)

0x7ac: Push("Can't find map")
0x7ad: @ Trace(Stack[-1])
0x7ae: Pop(1)
0x7af: Return(); Pop(8)

0x7b0: Push(CvectorIndex(Stack[-4], 0))
0x7b1: Push(CvectorIndex(Stack[-5], 2))
0x7b2: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x7b3: Pop(2)
0x7b4: Return(); Pop(8)

0x7b5: Stack[-2] = 0
0x7b6: PushEmpty(int, int)
0x7b7: Push("branch")
0x7b8: @ GetVariable(Stack[-1], Stack[-2])
0x7b9: Pop(1)
0x7ba: Push((int) 0)
0x7bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7bc: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x7bd: Stack[-3] = (int) 1
0x7be: Return(); Pop(2)

0x7bf: GOTO 0x7c5

0x7c0: Push((int) 1)
0x7c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c2: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7c3: Stack[-3] = (int) 2
0x7c4: Return(); Pop(2)

0x7c5: Stack[-3] = (int) 3
0x7c6: Return(); Pop(2)

0x7c7: Stack[-1] = (int) 515592
0x7c8: Return(); Pop(0)

0x7c9: Stack[-1] = (int) 511961
0x7ca: Return(); Pop(0)

0x7cb: Stack[-1] = "ui/NPC_Burah.png"
0x7cc: Return(); Pop(0)

0x7cd: Stack[-1] = "ui/NPC_Burah_b.png"
0x7ce: Return(); Pop(0)

0x7cf: Stack[-1] = (bool) 1
0x7d0: Return(); Pop(0)

