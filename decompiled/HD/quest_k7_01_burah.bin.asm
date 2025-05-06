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
0xe: Call2 0x7cb

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x7c9

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x7cd

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x7cf

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x7b8

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
0x31: Call2 0x5b7

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x4f8

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
0x48: Call2 0x4e6

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
0x59: Call2 0x711

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x6b1

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
0x82: Call2 0x6ed

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x85: PushEmpty(bool, object)
0x86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87: Call2 0x6f9

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
0x95: Call2 0x6ed

0x96: Pop(1)
0x97: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x98: PushEmpty(bool, object)
0x99: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a: Call2 0x6e2

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
0xa6: Call2 0x705

0xa7: Pop(1)
0xa8: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa9: Push((int) 526378)
0xaa: Push((int) 27659)
0xab: Push((int) 27658)
0xac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad: Pop(3)
0xae: PushEmpty(bool, object)
0xaf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb0: Call2 0x71d

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
0xc6: Call2 0x7d1

0xc7: Pop(0)
0xc8: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xc9: @ lshWaitForAnimEnd()
0xca: Pop(0)
0xcb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcc: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcd: GOTO 0xd3

0xce: PushEmpty(string)
0xcf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd0: Call2 0x582

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
0xe5: Call2 0x7d1

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
0xf5: Call2 0x592

0xf6: Pop(2)
0xf7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf8: Return(); Pop(0)

0xf9: PushEmpty()
0xfa: Push((int) 1)
0xfb: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0xfc: PushEmpty()
0xfd: Call2 0x5b0

0xfe: Pop(0)
0xff: Push((int) 27656)
0x100: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x102: PushEmpty(object, object)
0x103: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x104: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x105: Call2 0x692

0x106: Pop(2)
0x107: PushEmpty(object, object)
0x108: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x109: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10a: Call2 0x6dc

0x10b: Pop(2)
0x10c: PushEmpty(object, object)
0x10d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10f: Call2 0x6b7

0x110: Pop(2)
0x111: PushEmpty(object, object)
0x112: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x113: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x114: Call2 0x64f

0x115: Pop(2)
0x116: Push((int) 27454)
0x117: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x119: PushEmpty(object, object)
0x11a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11c: Call2 0x67f

0x11d: Pop(2)
0x11e: Push((int) 27456)
0x11f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x121: PushEmpty(object, object)
0x122: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x123: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x124: Call2 0x65f

0x125: Pop(2)
0x126: Push((int) 27460)
0x127: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x129: PushEmpty(object, object)
0x12a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12c: Call2 0x685

0x12d: Pop(2)
0x12e: Push((int) 27660)
0x12f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x131: PushEmpty(object, object)
0x132: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x133: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x134: Call2 0x692

0x135: Pop(2)
0x136: PushEmpty(object, object)
0x137: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x138: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x139: Call2 0x6b7

0x13a: Pop(2)
0x13b: PushEmpty(object, object)
0x13c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13e: Call2 0x6dc

0x13f: Pop(2)
0x140: PushEmpty(object, object)
0x141: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x142: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x143: Call2 0x64f

0x144: Pop(2)
0x145: Push((int) 27669)
0x146: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x148: PushEmpty(object, object)
0x149: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14b: Call2 0x6c2

0x14c: Pop(2)
0x14d: PushEmpty(object, object)
0x14e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x150: Call2 0x6cc

0x151: Pop(2)
0x152: PushEmpty(object, object)
0x153: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x154: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x155: Call2 0x6d6

0x156: Pop(2)
0x157: Push((int) 44880)
0x158: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15a: PushEmpty(object, object)
0x15b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15d: Call2 0x6c2

0x15e: Pop(2)
0x15f: Push((int) 27653)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x162: PushEmpty(bool, object)
0x163: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x164: Call2 0x711

0x165: Pop(1)
0x166: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x167: PushEmpty(object, object)
0x168: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x169: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16a: Call2 0x6b1

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
0x18d: Call2 0x6ed

0x18e: Pop(1)
0x18f: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x190: PushEmpty(bool, object)
0x191: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x192: Call2 0x6f9

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
0x1a0: Call2 0x6ed

0x1a1: Pop(1)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a3: PushEmpty(bool, object)
0x1a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a5: Call2 0x6e2

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
0x1b1: Call2 0x705

0x1b2: Pop(1)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b4: Push((int) 526378)
0x1b5: Push((int) 27659)
0x1b6: Push((int) 27658)
0x1b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b8: Pop(3)
0x1b9: PushEmpty(bool, object)
0x1ba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bb: Call2 0x71d

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
0x2da: Call2 0x6e2

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
0x2e5: Call2 0x6e2

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
0x342: Call2 0x7d1

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
0x363: Call2 0x5b7

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
0x370: Call2 0x5b7

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
0x3dc: Call2 0x5b7

0x3dd: Stack[-2] = Stack[-1]
0x3de: Pop(1)
0x3df: Call2 0x532

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
0x3ff: Call2 0x582

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
0x40e: Call2 0x582

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
0x425: Call2 0x582

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
0x438: Call2 0x63e

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
0x45c: Call2 0x637

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
0x4bc: Call2 0x5bd

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
0x4cc: Push((bool) 1)
0x4cd: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x4ce: Pop(1)
0x4cf: Push(CvectorIndex(Stack[-4], 0))
0x4d0: Push(CvectorIndex(Stack[-5], 2))
0x4d1: @ Rotate(Stack[-2], Stack[-1])
0x4d2: Pop(2)
0x4d3: PushEmpty(bool)
0x4d4: Call2 0x7d1

0x4d5: Pop(0)
0x4d6: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d7: GOTO 0x4e0

0x4d8: Push("head")
0x4d9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4da: Pop(1)
0x4db: Push(Stack[-1])
0x4dc: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4dd: Push("head")
0x4de: @ LookAsyncCamera(Stack[-1])
0x4df: Pop(1)
0x4e0: @ CameraWaitForPlayFinish()
0x4e1: Pop(0)
0x4e2: @ ResumeWorld()
0x4e3: Pop(0)
0x4e4: Stack[-21] = (bool) 1
0x4e5: Return(); Pop(18)

0x4e6: PushEmpty(bool, bool)
0x4e7: Push((bool) 1)
0x4e8: @ CameraSwitchToNormal(Stack[-1])
0x4e9: Pop(1)
0x4ea: PushEmpty(bool)
0x4eb: Call2 0x7d1

0x4ec: Pop(0)
0x4ed: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ee: GOTO 0x4f7

0x4ef: Push("head")
0x4f0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4f1: Pop(1)
0x4f2: Push(Stack[-1])
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4f4: Push("head")
0x4f5: @ UnlookAsync(Stack[-1])
0x4f6: Pop(1)
0x4f7: Return(); Pop(2)

0x4f8: PushEmpty(int, int, int, int)
0x4f9: Push("voice_common")
0x4fa: @ GetVariable(Stack[-1], Stack[-3])
0x4fb: Pop(1)
0x4fc: Push(Stack[-2])
0x4fd: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x4fe: PushEmpty(bool, object)
0x4ff: Stack[-1] = Stack[-7]
0x500: Call2 0x532

0x501: Pop(1)
0x502: Pop(1); Push((bool) Stack[-1] == 0)
0x503: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x504: PushEmpty(bool, object)
0x505: Stack[-1] = Stack[-7]
0x506: Call2 0x557

0x507: Pop(1)
0x508: Pop(1); Push((bool) Stack[-1] == 0)
0x509: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x50a: Stack[-6] = (bool) 0
0x50b: Return(); Pop(4)

0x50c: Push((int) 2)
0x50d: @ irand(Stack[-2], Stack[-1])
0x50e: Pop(1)
0x50f: Push(Stack[-1])
0x510: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x511: Push("voice_common")
0x512: Push((int) 1)
0x513: Pop(1); Push(Stack[-4] + Stack[-1]);
0x514: Push((int) 3)
0x515: Pop(2); Push(Stack[-2] % Stack[-1]);
0x516: @ SetVariable(Stack[-2], Stack[-1])
0x517: Pop(2)
0x518: GOTO 0x51d

0x519: Push("voice_common")
0x51a: Push((int) 0)
0x51b: @ SetVariable(Stack[-2], Stack[-1])
0x51c: Pop(2)
0x51d: GOTO 0x530

0x51e: PushEmpty(bool, object)
0x51f: Stack[-1] = Stack[-7]
0x520: Call2 0x557

0x521: Pop(1)
0x522: Pop(1); Push((bool) Stack[-1] == 0)
0x523: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x524: PushEmpty(bool, object)
0x525: Stack[-1] = Stack[-7]
0x526: Call2 0x532

0x527: Pop(1)
0x528: Pop(1); Push((bool) Stack[-1] == 0)
0x529: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x52a: Stack[-6] = (bool) 0
0x52b: Return(); Pop(4)

0x52c: Push("voice_common")
0x52d: Push((int) 1)
0x52e: @ SetVariable(Stack[-2], Stack[-1])
0x52f: Pop(2)
0x530: Stack[-6] = (bool) 1
0x531: Return(); Pop(4)

0x532: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x533: Stack[-5] = "c"
0x534: Stack[-4] = (int) 0
0x535: Push((int) 1)
0x536: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x537: Push((int) 1)
0x538: Pop(1); Push(Stack[-5] + Stack[-1]);
0x539: Pop(1); Push(Stack[-6] + Stack[-1]);
0x53a: @@ HasProperty(Stack[-1], Stack[-4])
0x53b: Pop(1)
0x53c: Pop(0); Push((bool) Stack[-3] == 0)
0x53d: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53e: GOTO 0x542

0x53f: Push((int) 1)
0x540: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x541: GOTO 0x535

0x542: Pop(0); Push((bool) Stack[-4] == 0)
0x543: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x544: Stack[-12] = (bool) 0
0x545: Return(); Pop(10)

0x546: Stack[-2] = (int) 0
0x547: Push((int) 1)
0x548: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x549: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x54a: @ irand(Stack[-2], Stack[-4])
0x54b: Pop(0)
0x54c: Push((int) 1)
0x54d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x54e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x54f: @@ GetProperty(Stack[-1], Stack[-2])
0x550: Pop(1)
0x551: PushEmpty(bool, string)
0x552: Stack[-1] = Stack[-3]
0x553: Call2 0x5a1

0x554: Stack[-14] = Stack[-2]
0x555: Pop(2)
0x556: Return(); Pop(10)

0x557: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x558: Push("d")
0x559: PushEmpty(int)
0x55a: Call2 0x62e

0x55b: Pop(0)
0x55c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x55d: Push("m")
0x55e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x55f: Stack[-4] = (int) 0
0x560: Push((int) 1)
0x561: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x562: Push((int) 1)
0x563: Pop(1); Push(Stack[-5] + Stack[-1]);
0x564: Pop(1); Push(Stack[-6] + Stack[-1]);
0x565: @@ HasProperty(Stack[-1], Stack[-4])
0x566: Pop(1)
0x567: Pop(0); Push((bool) Stack[-3] == 0)
0x568: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x569: GOTO 0x56d

0x56a: Push((int) 1)
0x56b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x56c: GOTO 0x560

0x56d: Pop(0); Push((bool) Stack[-4] == 0)
0x56e: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56f: Stack[-12] = (bool) 0
0x570: Return(); Pop(10)

0x571: Stack[-2] = (int) 0
0x572: Push((int) 1)
0x573: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x574: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x575: @ irand(Stack[-2], Stack[-4])
0x576: Pop(0)
0x577: Push((int) 1)
0x578: Pop(1); Push(Stack[-3] + Stack[-1]);
0x579: Pop(1); Push(Stack[-6] + Stack[-1]);
0x57a: @@ GetProperty(Stack[-1], Stack[-2])
0x57b: Pop(1)
0x57c: PushEmpty(bool, string)
0x57d: Stack[-1] = Stack[-3]
0x57e: Call2 0x5a1

0x57f: Stack[-14] = Stack[-2]
0x580: Pop(2)
0x581: Return(); Pop(10)

0x582: PushEmpty(bool, float, float, bool, float, float)
0x583: @ lshHasAnimation(Stack[-3], Stack[-7])
0x584: Pop(0)
0x585: Push(Stack[-3])
0x586: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x587: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x588: Pop(0)
0x589: Push((bool) 0)
0x58a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x58b: Pop(1)
0x58c: GOTO 0x591

0x58d: Push("Can't find lsh animation : ")
0x58e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x58f: @ Trace(Stack[-1])
0x590: Pop(1)
0x591: Return(); Pop(6)

0x592: PushEmpty(bool, float, float, bool, float, float)
0x593: @ lshHasAnimation(Stack[-3], Stack[-8])
0x594: Pop(0)
0x595: Push(Stack[-3])
0x596: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x597: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x598: Pop(0)
0x599: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x59a: Pop(0)
0x59b: GOTO 0x5a0

0x59c: Push("Can't find lsh animation : ")
0x59d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x59e: @ Trace(Stack[-1])
0x59f: Pop(1)
0x5a0: Return(); Pop(6)

0x5a1: PushEmpty(bool, bool)
0x5a2: PushEmpty(bool)
0x5a3: Call2 0x7d1

0x5a4: Pop(0)
0x5a5: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5a6: @ lshHasSpeech(Stack[-1], Stack[-3])
0x5a7: Pop(0)
0x5a8: Push(Stack[-1])
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5aa: @ lshPlaySpeech(Stack[-3])
0x5ab: Pop(0)
0x5ac: Stack[-4] = (bool) 1
0x5ad: Return(); Pop(2)

0x5ae: Stack[-4] = (bool) 0
0x5af: Return(); Pop(2)

0x5b0: PushEmpty(bool)
0x5b1: Call2 0x7d1

0x5b2: Pop(0)
0x5b3: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b4: @ lshStopSpeech()
0x5b5: Pop(0)
0x5b6: Return(); Pop(0)

0x5b7: PushEmpty(object, object)
0x5b8: @ self(Stack[-1])
0x5b9: Pop(0)
0x5ba: Stack[-3] = Stack[-1]
0x5bb: Return(); Pop(2)

0x5bc: Stack[-1] = 0
0x5bd: PushEmpty(float, float)
0x5be: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5bf: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5c0: Push((float)0.0)
0x5c1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5c3: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5c4: Return(); Pop(2)

0x5c5: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5c6: Return(); Pop(2)

0x5c7: PushEmpty(int, int)
0x5c8: @ GetVariable(Stack[-3], Stack[-1])
0x5c9: Pop(0)
0x5ca: Stack[-4] = Stack[-1]
0x5cb: Return(); Pop(2)

0x5cc: PushEmpty(object, object, object, object)
0x5cd: @ GetMainOutdoorScene(Stack[-2])
0x5ce: Pop(0)
0x5cf: Push(".bin")
0x5d0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5d1: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x5d2: Pop(1)
0x5d3: Stack[-6] = Stack[-1]
0x5d4: Return(); Pop(4)

0x5d5: Stack[-1] = 0
0x5d6: Stack[-2] = 0
0x5d7: PushEmpty(object, object)
0x5d8: @ CreateIntVector(Stack[-1])
0x5d9: Pop(0)
0x5da: @@ add(Stack[-4])
0x5db: Pop(0)
0x5dc: @@ add(Stack[-3])
0x5dd: Pop(0)
0x5de: Push((int) 3)
0x5df: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5e0: Pop(1)
0x5e1: Return(); Pop(2)

0x5e2: Stack[-1] = 0
0x5e3: PushEmpty(int, int)
0x5e4: PushEmpty(object, string, int)
0x5e5: Stack[-3] = Stack[-7]
0x5e6: Stack[-2] = "money"
0x5e7: Stack[-1] = Stack[-6]
0x5e8: Call2 0x482

0x5e9: Pop(3)
0x5ea: Push((int) 0)
0x5eb: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x5ec: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5ed: Push("Money")
0x5ee: @ GetInvItemByName(Stack[-2], Stack[-1])
0x5ef: Pop(1)
0x5f0: PushEmpty(int, int)
0x5f1: Stack[-2] = Stack[-3]
0x5f2: Stack[-1] = Stack[-5]
0x5f3: Call2 0x5d7

0x5f4: Pop(2)
0x5f5: Return(); Pop(2)

0x5f6: PushEmpty(int, int, bool, int, int, bool)
0x5f7: @@ GetItemID(Stack[-3])
0x5f8: Pop(0)
0x5f9: Push("Category")
0x5fa: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x5fb: Pop(1)
0x5fc: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x5fd: Pop(0)
0x5fe: Pop(0); Push((bool) Stack[-1] == 0)
0x5ff: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x600: @@ DropItems(Stack[-8], Stack[-7])
0x601: Pop(0)
0x602: GOTO 0x608

0x603: PushEmpty(int, int)
0x604: Stack[-2] = Stack[-5]
0x605: Stack[-1] = Stack[-9]
0x606: Call2 0x5d7

0x607: Pop(2)
0x608: Return(); Pop(6)

0x609: PushEmpty(object, object)
0x60a: @ CreateInvItem(Stack[-1])
0x60b: Pop(0)
0x60c: @@ SetItemName(Stack[-4])
0x60d: Pop(0)
0x60e: PushEmpty(object, object, int)
0x60f: Stack[-3] = Stack[-8]
0x610: Stack[-2] = Stack[-4]
0x611: Stack[-1] = Stack[-6]
0x612: Call2 0x5f6

0x613: Pop(3)
0x614: Return(); Pop(2)

0x615: Stack[-1] = 0
0x616: PushEmpty(int, bool, int, bool)
0x617: @ GetInvItemByName(Stack[-2], Stack[-5])
0x618: Pop(0)
0x619: @@ HasItem(Stack[-2], Stack[-1])
0x61a: Pop(0)
0x61b: Stack[-7] = Stack[-1]
0x61c: Return(); Pop(4)

0x61d: PushEmpty(object, object)
0x61e: @ FindActor(Stack[-1], Stack[-4])
0x61f: Pop(0)
0x620: Pop(0); Push((bool) Stack[-1] == 0)
0x621: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x622: Stack[-5] = (bool) 0
0x623: Return(); Pop(2)

0x624: @ Trigger(Stack[-1], Stack[-3])
0x625: Pop(0)
0x626: Stack[-5] = (bool) 1
0x627: Return(); Pop(2)

0x628: Stack[-1] = 0
0x629: PushEmpty(float, float)
0x62a: @ GetGameTime(Stack[-1])
0x62b: Pop(0)
0x62c: Stack[-3] = Stack[-1]
0x62d: Return(); Pop(2)

0x62e: PushEmpty(float, float)
0x62f: @ GetGameTime(Stack[-1])
0x630: Pop(0)
0x631: Push((int) 1)
0x632: PushEmpty(int)
0x633: Push((int) 24)
0x634: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x635: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x636: Return(); Pop(2)

0x637: PushEmpty(string, string)
0x638: Stack[-1] = "idle"
0x639: Push(Stack[-3])
0x63a: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x63b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x63c: Stack[-4] = Stack[-1]
0x63d: Return(); Pop(2)

0x63e: PushEmpty(int, bool, int, bool)
0x63f: Stack[-2] = (int) 0
0x640: Push("all")
0x641: PushEmpty(string, int)
0x642: Stack[-1] = Stack[-5]
0x643: Call2 0x637

0x644: Pop(1)
0x645: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x646: Pop(2)
0x647: Pop(0); Push((bool) Stack[-1] == 0)
0x648: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x649: GOTO 0x64d

0x64a: Push((int) 1)
0x64b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x64c: GOTO 0x640

0x64d: Stack[-5] = Stack[-2]
0x64e: Return(); Pop(4)

0x64f: PushEmpty()
0x650: PushEmpty(object, string, float)
0x651: PushEmpty(object)
0x652: Call2 0x786

0x653: Stack[-4] = Stack[-1]
0x654: Pop(1)
0x655: Stack[-2] = "pt_map_burah_home"
0x656: Stack[-1] = (int) 2
0x657: Call2 0x797

0x658: Pop(3)
0x659: PushEmpty(object)
0x65a: Call2 0x786

0x65b: Pop(0)
0x65c: @@ ShowMap(Stack[-1])
0x65d: Pop(1)
0x65e: Return(); Pop(0)

0x65f: PushEmpty(object, object)
0x660: PushEmpty(int, string)
0x661: Stack[-1] = "k7q01CorpseMark"
0x662: Call2 0x5c7

0x663: Pop(1)
0x664: Push((int) 0)
0x665: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x666: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x667: Push("k7q01CorpseMark")
0x668: Push((int) 1)
0x669: @ SetVariable(Stack[-2], Stack[-1])
0x66a: Pop(2)
0x66b: PushEmpty(object)
0x66c: Call2 0x786

0x66d: Stack[-2] = Stack[-1]
0x66e: Pop(1)
0x66f: Push("k7q01BirdmaskGotoCorpse")
0x670: Push("pt_d7q02_corpse")
0x671: Push((int) 3)
0x672: Push((int) 526214)
0x673: PushEmpty(float)
0x674: Call2 0x629

0x675: Pop(0)
0x676: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x677: Pop(5)
0x678: PushEmpty(bool, string, string)
0x679: Stack[-2] = "quest_k7_01"
0x67a: Stack[-1] = "place_corpse"
0x67b: Call2 0x61d

0x67c: Pop(3)
0x67d: Stack[-1] = 0
0x67e: Return(); Pop(2)

0x67f: PushEmpty()
0x680: Push("ook7Burah1")
0x681: Push((int) 1)
0x682: @ SetVariable(Stack[-2], Stack[-1])
0x683: Pop(2)
0x684: Return(); Pop(0)

0x685: PushEmpty(int, int)
0x686: Push("k7q01")
0x687: Push((int) 4)
0x688: @ SetVariable(Stack[-2], Stack[-1])
0x689: Pop(2)
0x68a: PushEmpty()
0x68b: Call2 0x729

0x68c: Pop(0)
0x68d: Push("bird_balahon")
0x68e: Push((int) 1)
0x68f: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x690: Pop(2)
0x691: Return(); Pop(2)

0x692: PushEmpty(object, object)
0x693: PushEmpty(object)
0x694: Call2 0x786

0x695: Stack[-2] = Stack[-1]
0x696: Pop(1)
0x697: Push("k7q03BurahGotoFather")
0x698: Push("pt_map_burah_home")
0x699: Push((int) 0)
0x69a: Push((int) 526394)
0x69b: PushEmpty(float)
0x69c: Call2 0x629

0x69d: Pop(0)
0x69e: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x69f: Pop(5)
0x6a0: PushEmpty()
0x6a1: Call2 0x736

0x6a2: Pop(0)
0x6a3: PushEmpty()
0x6a4: Call2 0x743

0x6a5: Pop(0)
0x6a6: PushEmpty(object, string)
0x6a7: Stack[-1] = "quest_k7_03"
0x6a8: Call2 0x5cc

0x6a9: Pop(2)
0x6aa: PushEmpty(bool, string, string)
0x6ab: Stack[-2] = "quest_k7_03"
0x6ac: Stack[-1] = "place_family"
0x6ad: Call2 0x61d

0x6ae: Pop(3)
0x6af: Return(); Pop(2)

0x6b0: Stack[-1] = 0
0x6b1: PushEmpty()
0x6b2: Push("ook7Burah2")
0x6b3: Push((int) 1)
0x6b4: @ SetVariable(Stack[-2], Stack[-1])
0x6b5: Pop(2)
0x6b6: Return(); Pop(0)

0x6b7: PushEmpty()
0x6b8: Push("tvirin 5 is given")
0x6b9: @ Trace(Stack[-1])
0x6ba: Pop(1)
0x6bb: PushEmpty(object, string, int)
0x6bc: Stack[-3] = Stack[-5]
0x6bd: Stack[-2] = "tvirin"
0x6be: Stack[-1] = (int) 5
0x6bf: Call2 0x609

0x6c0: Pop(3)
0x6c1: Return(); Pop(0)

0x6c2: PushEmpty()
0x6c3: PushEmpty()
0x6c4: Call2 0x750

0x6c5: Pop(0)
0x6c6: PushEmpty(bool, string, string)
0x6c7: Stack[-2] = "quest_k7_03"
0x6c8: Stack[-1] = "completed"
0x6c9: Call2 0x61d

0x6ca: Pop(3)
0x6cb: Return(); Pop(0)

0x6cc: PushEmpty()
0x6cd: Push("money2000 is given")
0x6ce: @ Trace(Stack[-1])
0x6cf: Pop(1)
0x6d0: PushEmpty(object, int)
0x6d1: Stack[-2] = Stack[-4]
0x6d2: Stack[-1] = (int) 2000
0x6d3: Call2 0x5e3

0x6d4: Pop(2)
0x6d5: Return(); Pop(0)

0x6d6: PushEmpty()
0x6d7: Push("playsound")
0x6d8: Push("givemoney")
0x6d9: @ TriggerWorld(Stack[-2], Stack[-1])
0x6da: Pop(2)
0x6db: Return(); Pop(0)

0x6dc: PushEmpty()
0x6dd: Push("playsound")
0x6de: Push("giveitem")
0x6df: @ TriggerWorld(Stack[-2], Stack[-1])
0x6e0: Pop(2)
0x6e1: Return(); Pop(0)

0x6e2: PushEmpty()
0x6e3: PushEmpty(bool, object, string)
0x6e4: Stack[-2] = Stack[-4]
0x6e5: Stack[-1] = "bird_balahon"
0x6e6: Call2 0x616

0x6e7: Pop(2)
0x6e8: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6e9: Stack[-2] = (bool) 1
0x6ea: Return(); Pop(0)

0x6eb: Stack[-2] = (bool) 0
0x6ec: Return(); Pop(0)

0x6ed: PushEmpty()
0x6ee: PushEmpty(int, string)
0x6ef: Stack[-1] = "k7q01"
0x6f0: Call2 0x5c7

0x6f1: Pop(1)
0x6f2: Push((int) 3)
0x6f3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6f4: IF (Stack[-1] == 0) GOTO 0x6f7; Pop(1)

0x6f5: Stack[-2] = (bool) 1
0x6f6: Return(); Pop(0)

0x6f7: Stack[-2] = (bool) 0
0x6f8: Return(); Pop(0)

0x6f9: PushEmpty()
0x6fa: PushEmpty(int, string)
0x6fb: Stack[-1] = "ook7Burah1"
0x6fc: Call2 0x5c7

0x6fd: Pop(1)
0x6fe: Push((int) 0)
0x6ff: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x700: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x701: Stack[-2] = (bool) 1
0x702: Return(); Pop(0)

0x703: Stack[-2] = (bool) 0
0x704: Return(); Pop(0)

0x705: PushEmpty()
0x706: PushEmpty(int, string)
0x707: Stack[-1] = "k7q03"
0x708: Call2 0x5c7

0x709: Pop(1)
0x70a: Push((int) 0)
0x70b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x70c: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x70d: Stack[-2] = (bool) 1
0x70e: Return(); Pop(0)

0x70f: Stack[-2] = (bool) 0
0x710: Return(); Pop(0)

0x711: PushEmpty()
0x712: PushEmpty(int, string)
0x713: Stack[-1] = "ook7Burah2"
0x714: Call2 0x5c7

0x715: Pop(1)
0x716: Push((int) 0)
0x717: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x718: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x719: Stack[-2] = (bool) 1
0x71a: Return(); Pop(0)

0x71b: Stack[-2] = (bool) 0
0x71c: Return(); Pop(0)

0x71d: PushEmpty()
0x71e: PushEmpty(int, string)
0x71f: Stack[-1] = "k7q03"
0x720: Call2 0x5c7

0x721: Pop(1)
0x722: Push((int) 2)
0x723: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x724: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x725: Stack[-2] = (bool) 1
0x726: Return(); Pop(0)

0x727: Stack[-2] = (bool) 0
0x728: Return(); Pop(0)

0x729: PushEmpty(object, object)
0x72a: Push((int) 422)
0x72b: Push((int) 1)
0x72c: Push((int) 526221)
0x72d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x72e: Pop(3)
0x72f: PushEmpty(bool, object, int)
0x730: Stack[-2] = Stack[-4]
0x731: Stack[-1] = (int) 416
0x732: Call2 0x76a

0x733: Pop(3)
0x734: Return(); Pop(2)

0x735: Stack[-1] = 0
0x736: PushEmpty(object, object)
0x737: Push((int) 434)
0x738: Push((int) 2)
0x739: Push((int) 526390)
0x73a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x73b: Pop(3)
0x73c: PushEmpty(bool, object, int)
0x73d: Stack[-2] = Stack[-4]
0x73e: Stack[-1] = (int) -1
0x73f: Call2 0x76a

0x740: Pop(3)
0x741: Return(); Pop(2)

0x742: Stack[-1] = 0
0x743: PushEmpty(object, object)
0x744: Push((int) 435)
0x745: Push((int) 2)
0x746: Push((int) 526391)
0x747: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x748: Pop(3)
0x749: PushEmpty(bool, object, int)
0x74a: Stack[-2] = Stack[-4]
0x74b: Stack[-1] = (int) 434
0x74c: Call2 0x76a

0x74d: Pop(3)
0x74e: Return(); Pop(2)

0x74f: Stack[-1] = 0
0x750: PushEmpty(object, object)
0x751: Push((int) 437)
0x752: Push((int) 2)
0x753: Push((int) 526393)
0x754: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x755: Pop(3)
0x756: PushEmpty(bool, object, int)
0x757: Stack[-2] = Stack[-4]
0x758: Stack[-1] = (int) 434
0x759: Call2 0x76a

0x75a: Pop(3)
0x75b: Return(); Pop(2)

0x75c: Stack[-1] = 0
0x75d: PushEmpty(object, object)
0x75e: @ GetDiaryRoot(Stack[-1])
0x75f: Pop(0)
0x760: Pop(0); Push((bool) Stack[-1] == 0)
0x761: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x762: Push("Can't retrieve diary root")
0x763: @ Trace(Stack[-1])
0x764: Pop(1)
0x765: Stack[-3] = (bool) 0
0x766: Return(); Pop(2)

0x767: Stack[-3] = Stack[-1]
0x768: Return(); Pop(2)

0x769: Stack[-1] = 0
0x76a: PushEmpty(object, object, int, object, object, int)
0x76b: PushEmpty(object)
0x76c: Call2 0x75d

0x76d: Stack[-4] = Stack[-1]
0x76e: Pop(1)
0x76f: @@ Find(Stack[-7], Stack[-2])
0x770: Pop(0)
0x771: Pop(0); Push((bool) Stack[-2] == 0)
0x772: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x773: Push("Can't find diary parent with id: ")
0x774: Pop(1); Push(Stack[-1] + Stack[-8]);
0x775: @ Trace(Stack[-1])
0x776: Pop(1)
0x777: Stack[-9] = (bool) 0
0x778: Return(); Pop(6)

0x779: @@ AddChild(Stack[-8])
0x77a: Pop(0)
0x77b: Push((int) 7)
0x77c: @ SendWorldWndMessage(Stack[-1])
0x77d: Pop(1)
0x77e: @@ GetCategory(Stack[-1])
0x77f: Pop(0)
0x780: @ SetDiarySection(Stack[-1])
0x781: Pop(0)
0x782: Stack[-9] = (bool) 0
0x783: Return(); Pop(6)

0x784: Stack[-2] = 0
0x785: Stack[-3] = 0
0x786: PushEmpty(object, object, object, object)
0x787: @ GetMainOutdoorScene(Stack[-2])
0x788: Pop(0)
0x789: Pop(0); Push((bool) Stack[-2] == 0)
0x78a: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x78b: Push("Can't find main outdoor scene")
0x78c: @ Trace(Stack[-1])
0x78d: Pop(1)
0x78e: Stack[-1] = 0
0x78f: Stack[-5] = Stack[-1]
0x790: Return(); Pop(4)

0x791: @@ GetMap(Stack[-1])
0x792: Pop(0)
0x793: Stack[-5] = Stack[-1]
0x794: Return(); Pop(4)

0x795: Stack[-1] = 0
0x796: Stack[-2] = 0
0x797: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x798: @ GetMainOutdoorScene(Stack[-2])
0x799: Pop(0)
0x79a: Pop(0); Push((bool) Stack[-2] == 0)
0x79b: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x79c: Push("Can't find main outdoor scene")
0x79d: @ Trace(Stack[-1])
0x79e: Pop(1)
0x79f: Return(); Pop(8)

0x7a0: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x7a1: Pop(0)
0x7a2: Pop(0); Push((bool) Stack[-1] == 0)
0x7a3: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7a4: Push("Warning: outdoor scene locator ")
0x7a5: Pop(1); Push(Stack[-1] + Stack[-11]);
0x7a6: Push(" doesnt exist")
0x7a7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7a8: @ Trace(Stack[-1])
0x7a9: Pop(1)
0x7aa: @@ GetMap(Stack[-11])
0x7ab: Pop(0)
0x7ac: Pop(0); Push((bool) Stack[-11] == 0)
0x7ad: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7ae: Push("Can't find map")
0x7af: @ Trace(Stack[-1])
0x7b0: Pop(1)
0x7b1: Return(); Pop(8)

0x7b2: Push(CvectorIndex(Stack[-4], 0))
0x7b3: Push(CvectorIndex(Stack[-5], 2))
0x7b4: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x7b5: Pop(2)
0x7b6: Return(); Pop(8)

0x7b7: Stack[-2] = 0
0x7b8: PushEmpty(int, int)
0x7b9: Push("branch")
0x7ba: @ GetVariable(Stack[-1], Stack[-2])
0x7bb: Pop(1)
0x7bc: Push((int) 0)
0x7bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7be: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7bf: Stack[-3] = (int) 1
0x7c0: Return(); Pop(2)

0x7c1: GOTO 0x7c7

0x7c2: Push((int) 1)
0x7c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c4: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7c5: Stack[-3] = (int) 2
0x7c6: Return(); Pop(2)

0x7c7: Stack[-3] = (int) 3
0x7c8: Return(); Pop(2)

0x7c9: Stack[-1] = (int) 515592
0x7ca: Return(); Pop(0)

0x7cb: Stack[-1] = (int) 511961
0x7cc: Return(); Pop(0)

0x7cd: Stack[-1] = "ui/NPC_Burah.png"
0x7ce: Return(); Pop(0)

0x7cf: Stack[-1] = "ui/NPC_Burah_b.png"
0x7d0: Return(); Pop(0)

0x7d1: Stack[-1] = (bool) 1
0x7d2: Return(); Pop(0)

