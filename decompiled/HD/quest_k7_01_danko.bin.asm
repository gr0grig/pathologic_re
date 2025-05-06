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
	Smile
	Menace
	Sorrow
	cleanup
	restore
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
	HasItem
	reputation
	k7q01CorpseMark
	k7q01BirdmaskGotoCorpse
	pt_d7q02_corpse
	AddMark
	quest_k7_01
	place_corpse
	ook7DankoTheater1
	k7q01
	bird_mask
	RemoveItemByType
	ook7DankoTheater2
	k7q02DankoGotoGatherer
	pt_gatherer3
	quest_k7_02
	completed
	ShowMap
	playsound
	givemoney
	giveitem
	money 5000 is given
	Samopal is given
	Samopal
	SetItemName
	durability
	k7q02
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
	ui/NPC_Bakalavr.png
	ui/NPC_Bakalavr_b.png

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
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateInvItem (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)

RunOp = 0x35f
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf9 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x363 Vars = (string)
		EVENT_6 Op = 0x377 Vars = ()
		EVENT_5 Op = 0x384 Vars = ()
		EVENT_7 Op = 0x3cd Vars = (int)
		EVENT_45 Op = 0x40f Vars = (bool)
		EVENT_0 Op = 0x41b Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x4cd

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x82e

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x82c

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x830

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x832

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x81b

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
0x31: Call2 0x5e3

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x524

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
0x48: Call2 0x512

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
0x59: Call2 0x768

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x6e0

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Neutral"
0x63: Call2 0xe3

0x64: Pop(1)
0x65: Push((int) 526351)
0x66: @@ SetMessage(Stack[-1])
0x67: Pop(1)
0x68: @@ ClearReplies()
0x69: Pop(0)
0x6a: Push((int) 526352)
0x6b: Push((int) 27638)
0x6c: Push((int) 27637)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 528648)
0x70: Push((int) 27638)
0x71: Push((int) 30055)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0xc5

0x75: PushEmpty(string)
0x76: Stack[-1] = "Neutral"
0x77: Call2 0xe3

0x78: Pop(1)
0x79: Push((int) 526160)
0x7a: @@ SetMessage(Stack[-1])
0x7b: Pop(1)
0x7c: @@ ClearReplies()
0x7d: Pop(0)
0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 0
0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call2 0x745

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x85: PushEmpty(bool, object)
0x86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87: Call2 0x75c

0x88: Pop(1)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Stack[-1] = (bool) 1
0x8b: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8c: Push((int) 526161)
0x8d: Push((int) 27441)
0x8e: Push((int) 27440)
0x8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90: Pop(3)
0x91: PushEmpty(bool)
0x92: Stack[-1] = (bool) 0
0x93: PushEmpty(bool, object)
0x94: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x95: Call2 0x745

0x96: Pop(1)
0x97: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x98: PushEmpty(bool, object)
0x99: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a: Call2 0x751

0x9b: Pop(1)
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: Stack[-1] = (bool) 1
0x9e: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x9f: Push((int) 526165)
0xa0: Push((int) 30046)
0xa1: Push((int) 27444)
0xa2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3: Pop(3)
0xa4: PushEmpty(bool, object)
0xa5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa6: Call2 0x774

0xa7: Pop(1)
0xa8: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa9: Push((int) 526356)
0xaa: Push((int) 27642)
0xab: Push((int) 27641)
0xac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad: Pop(3)
0xae: PushEmpty(bool, object)
0xaf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb0: Call2 0x780

0xb1: Pop(1)
0xb2: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb3: Push((int) 526365)
0xb4: Push((int) 27651)
0xb5: Push((int) 27650)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 526166)
0xb9: Push((int) -1)
0xba: Push((int) 27445)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Push((int) 528636)
0xbe: Push((int) -1)
0xbf: Push((int) 30041)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: GOTO 0xc5

0xc3: Return(); Pop(0)

0xc4: GOTO 0x55

0xc5: PushEmpty(bool)
0xc6: Call2 0x834

0xc7: Pop(0)
0xc8: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xc9: @ lshWaitForAnimEnd()
0xca: Pop(0)
0xcb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcc: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcd: GOTO 0xd3

0xce: PushEmpty(string)
0xcf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd0: Call2 0x5ae

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
0xe5: Call2 0x834

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
0xf5: Call2 0x5be

0xf6: Pop(2)
0xf7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf8: Return(); Pop(0)

0xf9: PushEmpty()
0xfa: Push((int) 1)
0xfb: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0xfc: PushEmpty()
0xfd: Call2 0x5dc

0xfe: Pop(0)
0xff: Push((int) 27639)
0x100: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x102: PushEmpty(object, object)
0x103: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x104: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x105: Call2 0x6e6

0x106: Pop(2)
0x107: PushEmpty(object, object)
0x108: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x109: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10a: Call2 0x730

0x10b: Pop(2)
0x10c: PushEmpty(object, object)
0x10d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10f: Call2 0x720

0x110: Pop(2)
0x111: PushEmpty(object, object)
0x112: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x113: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x114: Call2 0x70a

0x115: Pop(2)
0x116: Push((int) 27440)
0x117: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x119: PushEmpty(object, object)
0x11a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11c: Call2 0x6cd

0x11d: Pop(2)
0x11e: Push((int) 27442)
0x11f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x121: PushEmpty(object, object)
0x122: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x123: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x124: Call2 0x6ad

0x125: Pop(2)
0x126: Push((int) 27451)
0x127: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x129: PushEmpty(object, object)
0x12a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12c: Call2 0x6d3

0x12d: Pop(2)
0x12e: Push((int) 27643)
0x12f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x131: PushEmpty(object, object)
0x132: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x133: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x134: Call2 0x6e6

0x135: Pop(2)
0x136: PushEmpty(object, object)
0x137: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x138: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x139: Call2 0x720

0x13a: Pop(2)
0x13b: PushEmpty(object, object)
0x13c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13e: Call2 0x730

0x13f: Pop(2)
0x140: PushEmpty(object, object)
0x141: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x142: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x143: Call2 0x70a

0x144: Pop(2)
0x145: Push((int) 27652)
0x146: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x148: PushEmpty(object, object)
0x149: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14b: Call2 0x700

0x14c: Pop(2)
0x14d: PushEmpty(object, object)
0x14e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x150: Call2 0x726

0x151: Pop(2)
0x152: PushEmpty(object, object)
0x153: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x154: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x155: Call2 0x71a

0x156: Pop(2)
0x157: Push((int) 43156)
0x158: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x15a: PushEmpty(object, object)
0x15b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15d: Call2 0x700

0x15e: Pop(2)
0x15f: PushEmpty(object, object)
0x160: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x161: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x162: Call2 0x6a6

0x163: Pop(2)
0x164: Push((int) 27636)
0x165: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x166: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x169: Call2 0x768

0x16a: Pop(1)
0x16b: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x16c: PushEmpty(object, object)
0x16d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x16e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16f: Call2 0x6e0

0x170: Pop(2)
0x171: PushEmpty(string)
0x172: Stack[-1] = "Neutral"
0x173: Call2 0xe3

0x174: Pop(1)
0x175: Push((int) 526351)
0x176: @@ SetMessage(Stack[-1])
0x177: Pop(1)
0x178: @@ ClearReplies()
0x179: Pop(0)
0x17a: Push((int) 526352)
0x17b: Push((int) 27638)
0x17c: Push((int) 27637)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: Push((int) 528648)
0x180: Push((int) 27638)
0x181: Push((int) 30055)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: Return(); Pop(0)

0x185: PushEmpty(string)
0x186: Stack[-1] = "Neutral"
0x187: Call2 0xe3

0x188: Pop(1)
0x189: Push((int) 526160)
0x18a: @@ SetMessage(Stack[-1])
0x18b: Pop(1)
0x18c: @@ ClearReplies()
0x18d: Pop(0)
0x18e: PushEmpty(bool)
0x18f: Stack[-1] = (bool) 0
0x190: PushEmpty(bool, object)
0x191: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x192: Call2 0x745

0x193: Pop(1)
0x194: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x195: PushEmpty(bool, object)
0x196: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x197: Call2 0x75c

0x198: Pop(1)
0x199: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x19a: Stack[-1] = (bool) 1
0x19b: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19c: Push((int) 526161)
0x19d: Push((int) 27441)
0x19e: Push((int) 27440)
0x19f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a0: Pop(3)
0x1a1: PushEmpty(bool)
0x1a2: Stack[-1] = (bool) 0
0x1a3: PushEmpty(bool, object)
0x1a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a5: Call2 0x745

0x1a6: Pop(1)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1a8: PushEmpty(bool, object)
0x1a9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1aa: Call2 0x751

0x1ab: Pop(1)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ad: Stack[-1] = (bool) 1
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1af: Push((int) 526165)
0x1b0: Push((int) 30046)
0x1b1: Push((int) 27444)
0x1b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b3: Pop(3)
0x1b4: PushEmpty(bool, object)
0x1b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b6: Call2 0x774

0x1b7: Pop(1)
0x1b8: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1b9: Push((int) 526356)
0x1ba: Push((int) 27642)
0x1bb: Push((int) 27641)
0x1bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bd: Pop(3)
0x1be: PushEmpty(bool, object)
0x1bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c0: Call2 0x780

0x1c1: Pop(1)
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c3: Push((int) 526365)
0x1c4: Push((int) 27651)
0x1c5: Push((int) 27650)
0x1c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c7: Pop(3)
0x1c8: Push((int) 526166)
0x1c9: Push((int) -1)
0x1ca: Push((int) 27445)
0x1cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cc: Pop(3)
0x1cd: Push((int) 528636)
0x1ce: Push((int) -1)
0x1cf: Push((int) 30041)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: Return(); Pop(0)

0x1d3: Push((int) 27651)
0x1d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1d6: PushEmpty(string)
0x1d7: Stack[-1] = "Neutral"
0x1d8: Call2 0xe3

0x1d9: Pop(1)
0x1da: Push((int) 526366)
0x1db: @@ SetMessage(Stack[-1])
0x1dc: Pop(1)
0x1dd: @@ ClearReplies()
0x1de: Pop(0)
0x1df: Push((int) 528637)
0x1e0: Push((int) 30043)
0x1e1: Push((int) 30042)
0x1e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e3: Pop(3)
0x1e4: Return(); Pop(0)

0x1e5: Push((int) 30043)
0x1e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1e8: PushEmpty(string)
0x1e9: Stack[-1] = "Neutral"
0x1ea: Call2 0xe3

0x1eb: Pop(1)
0x1ec: Push((int) 528638)
0x1ed: @@ SetMessage(Stack[-1])
0x1ee: Pop(1)
0x1ef: @@ ClearReplies()
0x1f0: Pop(0)
0x1f1: Push((int) 528639)
0x1f2: Push((int) 30045)
0x1f3: Push((int) 30044)
0x1f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f5: Pop(3)
0x1f6: Return(); Pop(0)

0x1f7: Push((int) 30045)
0x1f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f9: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x1fa: PushEmpty(string)
0x1fb: Stack[-1] = "Untrust"
0x1fc: Call2 0xe3

0x1fd: Pop(1)
0x1fe: Push((int) 528640)
0x1ff: @@ SetMessage(Stack[-1])
0x200: Pop(1)
0x201: @@ ClearReplies()
0x202: Pop(0)
0x203: Push((int) 526367)
0x204: Push((int) -1)
0x205: Push((int) 27652)
0x206: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x207: Pop(3)
0x208: Push((int) 541054)
0x209: Push((int) -1)
0x20a: Push((int) 43156)
0x20b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20c: Pop(3)
0x20d: Return(); Pop(0)

0x20e: Push((int) 27642)
0x20f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x211: PushEmpty(string)
0x212: Stack[-1] = "Smile"
0x213: Call2 0xe3

0x214: Pop(1)
0x215: Push((int) 526357)
0x216: @@ SetMessage(Stack[-1])
0x217: Pop(1)
0x218: @@ ClearReplies()
0x219: Pop(0)
0x21a: Push((int) 526358)
0x21b: Push((int) -1)
0x21c: Push((int) 27643)
0x21d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21e: Pop(3)
0x21f: Return(); Pop(0)

0x220: Push((int) 30046)
0x221: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x223: PushEmpty(string)
0x224: Stack[-1] = "Untrust"
0x225: Call2 0xe3

0x226: Pop(1)
0x227: Push((int) 528641)
0x228: @@ SetMessage(Stack[-1])
0x229: Pop(1)
0x22a: @@ ClearReplies()
0x22b: Pop(0)
0x22c: Push((int) 528642)
0x22d: Push((int) 30049)
0x22e: Push((int) 30047)
0x22f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x230: Pop(3)
0x231: Push((int) 528643)
0x232: Push((int) 30049)
0x233: Push((int) 30048)
0x234: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x235: Pop(3)
0x236: Return(); Pop(0)

0x237: Push((int) 30049)
0x238: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x23a: PushEmpty(string)
0x23b: Stack[-1] = "Neutral"
0x23c: Call2 0xe3

0x23d: Pop(1)
0x23e: Push((int) 528644)
0x23f: @@ SetMessage(Stack[-1])
0x240: Pop(1)
0x241: @@ ClearReplies()
0x242: Pop(0)
0x243: Push((int) 528645)
0x244: Push((int) 30052)
0x245: Push((int) 30050)
0x246: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x247: Pop(3)
0x248: Return(); Pop(0)

0x249: Push((int) 30052)
0x24a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24b: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x24c: PushEmpty(string)
0x24d: Stack[-1] = "Neutral"
0x24e: Call2 0xe3

0x24f: Pop(1)
0x250: Push((int) 528646)
0x251: @@ SetMessage(Stack[-1])
0x252: Pop(1)
0x253: @@ ClearReplies()
0x254: Pop(0)
0x255: Push((int) 528647)
0x256: Push((int) 27447)
0x257: Push((int) 30054)
0x258: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x259: Pop(3)
0x25a: Push((int) 541055)
0x25b: Push((int) 30070)
0x25c: Push((int) 43157)
0x25d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25e: Pop(3)
0x25f: Return(); Pop(0)

0x260: Push((int) 27447)
0x261: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x262: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x263: PushEmpty(string)
0x264: Stack[-1] = "Menace"
0x265: Call2 0xe3

0x266: Pop(1)
0x267: Push((int) 526168)
0x268: @@ SetMessage(Stack[-1])
0x269: Pop(1)
0x26a: @@ ClearReplies()
0x26b: Pop(0)
0x26c: Push((int) 528657)
0x26d: Push((int) 30068)
0x26e: Push((int) 30067)
0x26f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x270: Pop(3)
0x271: Return(); Pop(0)

0x272: Push((int) 30068)
0x273: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x274: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x275: PushEmpty(string)
0x276: Stack[-1] = "Menace"
0x277: Call2 0xe3

0x278: Pop(1)
0x279: Push((int) 528658)
0x27a: @@ SetMessage(Stack[-1])
0x27b: Pop(1)
0x27c: @@ ClearReplies()
0x27d: Pop(0)
0x27e: Push((int) 528659)
0x27f: Push((int) 30070)
0x280: Push((int) 30069)
0x281: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x282: Pop(3)
0x283: Return(); Pop(0)

0x284: Push((int) 30070)
0x285: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x286: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x287: PushEmpty(string)
0x288: Stack[-1] = "Untrust"
0x289: Call2 0xe3

0x28a: Pop(1)
0x28b: Push((int) 528660)
0x28c: @@ SetMessage(Stack[-1])
0x28d: Pop(1)
0x28e: @@ ClearReplies()
0x28f: Pop(0)
0x290: Push((int) 526169)
0x291: Push((int) 27450)
0x292: Push((int) 27448)
0x293: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x294: Pop(3)
0x295: Push((int) 528661)
0x296: Push((int) 30072)
0x297: Push((int) 30071)
0x298: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x299: Pop(3)
0x29a: Return(); Pop(0)

0x29b: Push((int) 30072)
0x29c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x29e: PushEmpty(string)
0x29f: Stack[-1] = "Untrust"
0x2a0: Call2 0xe3

0x2a1: Pop(1)
0x2a2: Push((int) 528662)
0x2a3: @@ SetMessage(Stack[-1])
0x2a4: Pop(1)
0x2a5: @@ ClearReplies()
0x2a6: Pop(0)
0x2a7: Push((int) 528663)
0x2a8: Push((int) 27450)
0x2a9: Push((int) 30073)
0x2aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ab: Pop(3)
0x2ac: Return(); Pop(0)

0x2ad: Push((int) 27450)
0x2ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2af: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2b0: PushEmpty(string)
0x2b1: Stack[-1] = "Neutral"
0x2b2: Call2 0xe3

0x2b3: Pop(1)
0x2b4: Push((int) 526170)
0x2b5: @@ SetMessage(Stack[-1])
0x2b6: Pop(1)
0x2b7: @@ ClearReplies()
0x2b8: Pop(0)
0x2b9: Push((int) 526171)
0x2ba: Push((int) -1)
0x2bb: Push((int) 27451)
0x2bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bd: Pop(3)
0x2be: Return(); Pop(0)

0x2bf: Push((int) 27441)
0x2c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2c2: PushEmpty(string)
0x2c3: Stack[-1] = "Sorrow"
0x2c4: Call2 0xe3

0x2c5: Pop(1)
0x2c6: Push((int) 526162)
0x2c7: @@ SetMessage(Stack[-1])
0x2c8: Pop(1)
0x2c9: @@ ClearReplies()
0x2ca: Pop(0)
0x2cb: PushEmpty(bool, object)
0x2cc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2cd: Call2 0x751

0x2ce: Pop(1)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d0: Push((int) 526167)
0x2d1: Push((int) 30046)
0x2d2: Push((int) 27446)
0x2d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d4: Pop(3)
0x2d5: PushEmpty(bool, object)
0x2d6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d7: Call2 0x751

0x2d8: Pop(1)
0x2d9: Pop(1); Push((bool) Stack[-1] == 0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2db: Push((int) 541052)
0x2dc: Push((int) 43155)
0x2dd: Push((int) 43154)
0x2de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2df: Pop(3)
0x2e0: Return(); Pop(0)

0x2e1: Push((int) 43155)
0x2e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2e4: PushEmpty(string)
0x2e5: Stack[-1] = "Untrust"
0x2e6: Call2 0xe3

0x2e7: Pop(1)
0x2e8: Push((int) 541053)
0x2e9: @@ SetMessage(Stack[-1])
0x2ea: Pop(1)
0x2eb: @@ ClearReplies()
0x2ec: Pop(0)
0x2ed: Push((int) 526163)
0x2ee: Push((int) -1)
0x2ef: Push((int) 27442)
0x2f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f1: Pop(3)
0x2f2: Return(); Pop(0)

0x2f3: Push((int) 27638)
0x2f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x2f6: PushEmpty(string)
0x2f7: Stack[-1] = "Untrust"
0x2f8: Call2 0xe3

0x2f9: Pop(1)
0x2fa: Push((int) 526353)
0x2fb: @@ SetMessage(Stack[-1])
0x2fc: Pop(1)
0x2fd: @@ ClearReplies()
0x2fe: Pop(0)
0x2ff: Push((int) 528654)
0x300: Push((int) 30064)
0x301: Push((int) 30063)
0x302: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x303: Pop(3)
0x304: Push((int) 528656)
0x305: Push((int) 30064)
0x306: Push((int) 30065)
0x307: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x308: Pop(3)
0x309: Return(); Pop(0)

0x30a: Push((int) 30064)
0x30b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x30d: PushEmpty(string)
0x30e: Stack[-1] = "Untrust"
0x30f: Call2 0xe3

0x310: Pop(1)
0x311: Push((int) 528655)
0x312: @@ SetMessage(Stack[-1])
0x313: Pop(1)
0x314: @@ ClearReplies()
0x315: Pop(0)
0x316: Push((int) 528650)
0x317: Push((int) 30060)
0x318: Push((int) 30057)
0x319: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31a: Pop(3)
0x31b: Push((int) 528651)
0x31c: Push((int) 30056)
0x31d: Push((int) 30058)
0x31e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31f: Pop(3)
0x320: Return(); Pop(0)

0x321: Push((int) 30056)
0x322: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x323: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x324: PushEmpty(string)
0x325: Stack[-1] = "Neutral"
0x326: Call2 0xe3

0x327: Pop(1)
0x328: Push((int) 528649)
0x329: @@ SetMessage(Stack[-1])
0x32a: Pop(1)
0x32b: @@ ClearReplies()
0x32c: Pop(0)
0x32d: Push((int) 528653)
0x32e: Push((int) 30060)
0x32f: Push((int) 30061)
0x330: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x331: Pop(3)
0x332: Return(); Pop(0)

0x333: Push((int) 30060)
0x334: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x335: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x336: PushEmpty(string)
0x337: Stack[-1] = "Menace"
0x338: Call2 0xe3

0x339: Pop(1)
0x33a: Push((int) 528652)
0x33b: @@ SetMessage(Stack[-1])
0x33c: Pop(1)
0x33d: @@ ClearReplies()
0x33e: Pop(0)
0x33f: Push((int) 526354)
0x340: Push((int) -1)
0x341: Push((int) 27639)
0x342: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x343: Pop(3)
0x344: Push((int) 526355)
0x345: Push((int) -1)
0x346: Push((int) 27640)
0x347: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x348: Pop(3)
0x349: Return(); Pop(0)

0x34a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x34b: PushEmpty(bool)
0x34c: Call2 0x834

0x34d: Pop(0)
0x34e: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x34f: @ lshStopAnimation()
0x350: Pop(0)
0x351: GOTO 0x354

0x352: @ StopAnimation()
0x353: Pop(0)
0x354: Return(); Pop(0)

0x355: GOTO 0xfa

0x356: Return(); Pop(0)

0x357: PushEmpty()
0x358: PushEmpty(int, object)
0x359: Stack[-1] = Stack[-3]
0x35a: Push(-2, 1); TaskCall(0)
0x35b: Call2 0x0

0x35c: Pop(-2, 1); TaskReturn
0x35d: Pop(2)
0x35e: Return(); Pop(0)

0x35f: PushEmpty()
0x360: Call2 0x388

0x361: Pop(0)
0x362: Return(); Pop(0)

0x363: PushEmpty(bool, bool)
0x364: Push("cleanup")
0x365: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x366: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x367: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x368: @ IsLoaded(Stack[-1])
0x369: Pop(0)
0x36a: Pop(0); Push((bool) Stack[-1] == 0)
0x36b: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36c: PushEmpty(object)
0x36d: Call2 0x5e3

0x36e: Pop(0)
0x36f: @ RemoveActor(Stack[-1])
0x370: Pop(1)
0x371: GOTO 0x376

0x372: Push("restore")
0x373: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x375: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x376: Return(); Pop(2)

0x377: Push( Stack[1 + Tasks[-1].StackPointer] )
0x378: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x379: PushEmpty(object)
0x37a: Call2 0x5e3

0x37b: Pop(0)
0x37c: @ RemoveActor(Stack[-1])
0x37d: Pop(1)
0x37e: @ Hold()
0x37f: Pop(0)
0x380: PushEmpty()
0x381: Call2 0x3f3

0x382: Pop(0)
0x383: Return(); Pop(0)

0x384: PushEmpty()
0x385: Call2 0x402

0x386: Pop(0)
0x387: Return(); Pop(0)

0x388: PushEmpty(bool)
0x389: Call2 0x4c8

0x38a: Pop(0)
0x38b: Pop(1); Push((bool) Stack[-1] == 0)
0x38c: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38d: @ Hold()
0x38e: Pop(0)
0x38f: @ GetDirection(Stack[-0])
0x390: Pop(0)
0x391: PushEmpty()
0x392: Call2 0x438

0x393: Pop(0)
0x394: GOTO 0x391

0x395: Return(); Pop(0)

0x396: PushEmpty(object, object)
0x397: Push("player")
0x398: @ FindActor(Stack[-2], Stack[-1])
0x399: Pop(1)
0x39a: Pop(0); Push((bool) Stack[-1] == 0)
0x39b: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39c: Stack[-3] = (bool) 0
0x39d: Return(); Pop(2)

0x39e: PushEmpty(bool, object)
0x39f: Stack[-1] = Stack[-3]
0x3a0: Call2 0x4bf

0x3a1: Stack[-5] = Stack[-2]
0x3a2: Pop(2)
0x3a3: Return(); Pop(2)

0x3a4: Stack[-1] = 0
0x3a5: Push(CvectorIndex(Stack[-0], 0))
0x3a6: Push(CvectorIndex(Stack[-0], 2))
0x3a7: @ RotateAsync(Stack[-2], Stack[-1])
0x3a8: Pop(2)
0x3a9: Return(); Pop(0)

0x3aa: PushEmpty(object, bool, object, bool)
0x3ab: Push("player")
0x3ac: @ FindActor(Stack[-3], Stack[-1])
0x3ad: Pop(1)
0x3ae: Pop(0); Push((bool) Stack[-2] == 0)
0x3af: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b0: Stack[-5] = (bool) 0
0x3b1: Return(); Pop(4)

0x3b2: PushEmpty(float, object)
0x3b3: Stack[-1] = Stack[-4]
0x3b4: Call2 0x484

0x3b5: Pop(1)
0x3b6: Push((float)90000.0)
0x3b7: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x3b8: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b9: Stack[-5] = (bool) 0
0x3ba: Return(); Pop(4)

0x3bb: @ CanSee(Stack[-1], Stack[-2])
0x3bc: Pop(0)
0x3bd: Stack[-5] = Stack[-1]
0x3be: Return(); Pop(4)

0x3bf: Stack[-2] = 0
0x3c0: PushEmpty(float, float)
0x3c1: Push((int) 8)
0x3c2: Push((int) 16)
0x3c3: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x3c4: Pop(2)
0x3c5: Push((int) 10)
0x3c6: @ SetTimer(Stack[-1], Stack[-2])
0x3c7: Pop(1)
0x3c8: Return(); Pop(2)

0x3c9: Push((int) 10)
0x3ca: @ KillTimer(Stack[-1])
0x3cb: Pop(1)
0x3cc: Return(); Pop(0)

0x3cd: PushEmpty()
0x3ce: Push((int) 10)
0x3cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3d1: PushEmpty()
0x3d2: Call2 0x3c9

0x3d3: Pop(0)
0x3d4: PushEmpty(bool)
0x3d5: Stack[-1] = (bool) 0
0x3d6: PushEmpty(bool)
0x3d7: Call2 0x4c8

0x3d8: Pop(0)
0x3d9: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3da: PushEmpty(bool)
0x3db: Call2 0x3aa

0x3dc: Pop(0)
0x3dd: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3de: Stack[-1] = (bool) 1
0x3df: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3e0: PushEmpty(bool)
0x3e1: Call2 0x396

0x3e2: Pop(0)
0x3e3: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e4: PushEmpty(bool, object)
0x3e5: PushEmpty(object)
0x3e6: Call2 0x5e3

0x3e7: Stack[-2] = Stack[-1]
0x3e8: Pop(1)
0x3e9: Call2 0x55e

0x3ea: Pop(2)
0x3eb: GOTO 0x3f2

0x3ec: PushEmpty()
0x3ed: Call2 0x3a5

0x3ee: Pop(0)
0x3ef: PushEmpty()
0x3f0: Call2 0x3c0

0x3f1: Pop(0)
0x3f2: Return(); Pop(0)

0x3f3: PushEmpty()
0x3f4: Call2 0x47f

0x3f5: Pop(0)
0x3f6: PushEmpty()
0x3f7: Call2 0x3c9

0x3f8: Pop(0)
0x3f9: @ lshStopSpeech()
0x3fa: Pop(0)
0x3fb: @ lshStopAnimation()
0x3fc: Pop(0)
0x3fd: @ StopAsync()
0x3fe: Pop(0)
0x3ff: @ Hold()
0x400: Pop(0)
0x401: Return(); Pop(0)

0x402: @ StopGroup0()
0x403: Pop(0)
0x404: PushEmpty()
0x405: Call2 0x3c9

0x406: Pop(0)
0x407: PushEmpty(string)
0x408: Stack[-1] = "Neutral"
0x409: Call2 0x5ae

0x40a: Pop(1)
0x40b: PushEmpty()
0x40c: Call2 0x3c0

0x40d: Pop(0)
0x40e: Return(); Pop(0)

0x40f: PushEmpty()
0x410: Push(Stack[-1])
0x411: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x412: PushEmpty()
0x413: Call2 0x3c0

0x414: Pop(0)
0x415: GOTO 0x41a

0x416: PushEmpty(string)
0x417: Stack[-1] = "Neutral"
0x418: Call2 0x5ae

0x419: Pop(1)
0x41a: Return(); Pop(0)

0x41b: PushEmpty(bool, bool)
0x41c: @ IsOverrideActive(Stack[-1])
0x41d: Pop(0)
0x41e: Pop(0); Push((bool) Stack[-1] == 0)
0x41f: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x420: EventDisable(0)
0x421: PushEmpty()
0x422: Call2 0x47f

0x423: Pop(0)
0x424: PushEmpty(bool, object)
0x425: Stack[-1] = Stack[-5]
0x426: Call2 0x4bf

0x427: Pop(2)
0x428: EventEnable(0)
0x429: PushEmpty(object)
0x42a: Stack[-1] = Stack[-4]
0x42b: Call2 0x357

0x42c: Pop(1)
0x42d: PushEmpty(string)
0x42e: Stack[-1] = "Neutral"
0x42f: Call2 0x5ae

0x430: Pop(1)
0x431: PushEmpty()
0x432: Call2 0x3c9

0x433: Pop(0)
0x434: PushEmpty()
0x435: Call2 0x3c0

0x436: Pop(0)
0x437: Return(); Pop(2)

0x438: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x439: @ WaitForAnimEnd()
0x43a: Pop(0)
0x43b: PushEmpty(bool)
0x43c: Call2 0x4c8

0x43d: Pop(0)
0x43e: Pop(1); Push((bool) Stack[-1] == 0)
0x43f: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x440: Return(); Pop(12)

0x441: PushEmpty(int)
0x442: Call2 0x695

0x443: Stack[-7] = Stack[-1]
0x444: Pop(1)
0x445: Stack[-5] = (int) 0
0x446: PushEmpty(bool)
0x447: Stack[-1] = (bool) 0
0x448: Push((int) 5)
0x449: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x44a: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44b: PushEmpty(bool)
0x44c: Call2 0x4c8

0x44d: Pop(0)
0x44e: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44f: Stack[-1] = (bool) 1
0x450: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x451: Pop(0); Push((bool) Stack[-6] == 0)
0x452: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x453: Push((int) 3)
0x454: @ Sleep(Stack[-1], Stack[-5])
0x455: Pop(1)
0x456: Pop(0); Push((bool) Stack[-4] == 0)
0x457: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x458: GOTO 0x47a

0x459: GOTO 0x46f

0x45a: @ irand(Stack[-3], Stack[-6])
0x45b: Pop(0)
0x45c: Push((int) 5)
0x45d: @ irand(Stack[-3], Stack[-1])
0x45e: Pop(1)
0x45f: Push((int) 0)
0x460: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x461: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x462: Stack[-3] = (int) 0
0x463: Push("all")
0x464: PushEmpty(string, int)
0x465: Stack[-1] = Stack[-6]
0x466: Call2 0x68e

0x467: Pop(1)
0x468: @ PlayAnimation(Stack[-2], Stack[-1])
0x469: Pop(2)
0x46a: @ WaitForAnimEnd(Stack[-1])
0x46b: Pop(0)
0x46c: Pop(0); Push((bool) Stack[-1] == 0)
0x46d: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46e: GOTO 0x47a

0x46f: PushEmpty(bool)
0x470: Call2 0x47d

0x471: Pop(0)
0x472: Pop(1); Push((bool) Stack[-1] == 0)
0x473: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x474: GOTO 0x47a

0x475: @ ResetAAS()
0x476: Pop(0)
0x477: Push((int) 1)
0x478: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x479: GOTO 0x446

0x47a: @ ResetAAS()
0x47b: Pop(0)
0x47c: Return(); Pop(12)

0x47d: Stack[-1] = (bool) 1
0x47e: Return(); Pop(0)

0x47f: @ StopAnimation()
0x480: Pop(0)
0x481: @ StopGroup0()
0x482: Pop(0)
0x483: Return(); Pop(0)

0x484: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x485: @ GetPosition(Stack[-3])
0x486: Pop(0)
0x487: @@ GetPosition(Stack[-2])
0x488: Pop(0)
0x489: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x48a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x48b: Return(); Pop(6)

0x48c: PushEmpty(bool, bool)
0x48d: Push("HasProperty")
0x48e: Push((int) 2)
0x48f: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x490: Pop(1); Push((bool) Stack[-1] == 0)
0x491: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x492: Stack[-5] = (bool) 0
0x493: Return(); Pop(2)

0x494: @@ HasProperty(Stack[-3], Stack[-1])
0x495: Pop(0)
0x496: Stack[-5] = Stack[-1]
0x497: Return(); Pop(2)

0x498: PushEmpty(float, float)
0x499: PushEmpty(bool, object, string)
0x49a: Stack[-2] = Stack[-10]
0x49b: Stack[-1] = Stack[-9]
0x49c: Call2 0x48c

0x49d: Pop(2)
0x49e: Pop(1); Push((bool) Stack[-1] == 0)
0x49f: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x4a0: Stack[-8] = (bool) 0
0x4a1: Return(); Pop(2)

0x4a2: @@ GetProperty(Stack[-6], Stack[-1])
0x4a3: Pop(0)
0x4a4: PushEmpty(float, float, float, float)
0x4a5: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x4a6: Stack[-2] = Stack[-8]
0x4a7: Stack[-1] = Stack[-7]
0x4a8: Call2 0x5f3

0x4a9: Pop(3)
0x4aa: @@ SetProperty(Stack[-7], Stack[-1])
0x4ab: Pop(1)
0x4ac: Stack[-8] = (bool) 1
0x4ad: Return(); Pop(2)

0x4ae: PushEmpty(int, int)
0x4af: @@ GetProperty(Stack[-4], Stack[-1])
0x4b0: Pop(0)
0x4b1: Pop(0); Push(Stack[-1] + Stack[-3]);
0x4b2: @@ SetProperty(Stack[-5], Stack[-1])
0x4b3: Pop(1)
0x4b4: Return(); Pop(2)

0x4b5: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x4b6: @ GetPosition(Stack[-3])
0x4b7: Pop(0)
0x4b8: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x4b9: Push(CvectorIndex(Stack[-2], 0))
0x4ba: Push(CvectorIndex(Stack[-3], 2))
0x4bb: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x4bc: Pop(2)
0x4bd: Stack[-8] = Stack[-1]
0x4be: Return(); Pop(6)

0x4bf: PushEmpty(cvector, cvector)
0x4c0: @@ GetPosition(Stack[-1])
0x4c1: Pop(0)
0x4c2: PushEmpty(bool, cvector)
0x4c3: Stack[-1] = Stack[-3]
0x4c4: Call2 0x4b5

0x4c5: Stack[-6] = Stack[-2]
0x4c6: Pop(2)
0x4c7: Return(); Pop(2)

0x4c8: PushEmpty(bool, bool)
0x4c9: @ IsLoaded(Stack[-1])
0x4ca: Pop(0)
0x4cb: Stack[-3] = Stack[-1]
0x4cc: Return(); Pop(2)

0x4cd: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x4ce: @@ GetPosition(Stack[-8])
0x4cf: Pop(0)
0x4d0: @@ GetEyesHeight(Stack[-9])
0x4d1: Pop(0)
0x4d2: Push(CvectorIndex(Stack[-8], 1))
0x4d3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x4d4: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x4d5: @ GetPosition(Stack[-7])
0x4d6: Pop(0)
0x4d7: @ GetEyesHeight(Stack[-9])
0x4d8: Pop(0)
0x4d9: Push(CvectorIndex(Stack[-7], 1))
0x4da: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x4db: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x4dc: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x4dd: Push(CvectorIndex(Stack[-6], 1))
0x4de: Stack[-1] = (int) 0
0x4df: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x4e0: Pop(0); Push(Stack[-6] | Stack[-6]);
0x4e1: Pop(1); Push(Sqrt(Stack[-1]))
0x4e2: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x4e3: Stack[-5] = -Stack[-6]; Pop(0);
0x4e4: Pop(0); Push(Stack[-6] * Stack[-19]);
0x4e5: PushEmpty(cvector, cvector)
0x4e6: Push(CVector(0.0, 1.0, 0.0))
0x4e7: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x4e8: Call2 0x5e9

0x4e9: Pop(1)
0x4ea: Push((int) 25)
0x4eb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4ec: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4ed: Push(CVector(0.0, 10.0, 0.0))
0x4ee: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x4ef: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x4f0: @ IsOverrideActive(Stack[-2])
0x4f1: Pop(0)
0x4f2: Push(Stack[-2])
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f4: Stack[-21] = (bool) 0
0x4f5: Return(); Pop(18)

0x4f6: @ StopWorld()
0x4f7: Pop(0)
0x4f8: Push((bool) 1)
0x4f9: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x4fa: Pop(1)
0x4fb: Push(CvectorIndex(Stack[-4], 0))
0x4fc: Push(CvectorIndex(Stack[-5], 2))
0x4fd: @ Rotate(Stack[-2], Stack[-1])
0x4fe: Pop(2)
0x4ff: PushEmpty(bool)
0x500: Call2 0x834

0x501: Pop(0)
0x502: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x503: GOTO 0x50c

0x504: Push("head")
0x505: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x506: Pop(1)
0x507: Push(Stack[-1])
0x508: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x509: Push("head")
0x50a: @ LookAsyncCamera(Stack[-1])
0x50b: Pop(1)
0x50c: @ CameraWaitForPlayFinish()
0x50d: Pop(0)
0x50e: @ ResumeWorld()
0x50f: Pop(0)
0x510: Stack[-21] = (bool) 1
0x511: Return(); Pop(18)

0x512: PushEmpty(bool, bool)
0x513: Push((bool) 1)
0x514: @ CameraSwitchToNormal(Stack[-1])
0x515: Pop(1)
0x516: PushEmpty(bool)
0x517: Call2 0x834

0x518: Pop(0)
0x519: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x51a: GOTO 0x523

0x51b: Push("head")
0x51c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x51d: Pop(1)
0x51e: Push(Stack[-1])
0x51f: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x520: Push("head")
0x521: @ UnlookAsync(Stack[-1])
0x522: Pop(1)
0x523: Return(); Pop(2)

0x524: PushEmpty(int, int, int, int)
0x525: Push("voice_common")
0x526: @ GetVariable(Stack[-1], Stack[-3])
0x527: Pop(1)
0x528: Push(Stack[-2])
0x529: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x52a: PushEmpty(bool, object)
0x52b: Stack[-1] = Stack[-7]
0x52c: Call2 0x55e

0x52d: Pop(1)
0x52e: Pop(1); Push((bool) Stack[-1] == 0)
0x52f: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x530: PushEmpty(bool, object)
0x531: Stack[-1] = Stack[-7]
0x532: Call2 0x583

0x533: Pop(1)
0x534: Pop(1); Push((bool) Stack[-1] == 0)
0x535: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x536: Stack[-6] = (bool) 0
0x537: Return(); Pop(4)

0x538: Push((int) 2)
0x539: @ irand(Stack[-2], Stack[-1])
0x53a: Pop(1)
0x53b: Push(Stack[-1])
0x53c: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x53d: Push("voice_common")
0x53e: Push((int) 1)
0x53f: Pop(1); Push(Stack[-4] + Stack[-1]);
0x540: Push((int) 3)
0x541: Pop(2); Push(Stack[-2] % Stack[-1]);
0x542: @ SetVariable(Stack[-2], Stack[-1])
0x543: Pop(2)
0x544: GOTO 0x549

0x545: Push("voice_common")
0x546: Push((int) 0)
0x547: @ SetVariable(Stack[-2], Stack[-1])
0x548: Pop(2)
0x549: GOTO 0x55c

0x54a: PushEmpty(bool, object)
0x54b: Stack[-1] = Stack[-7]
0x54c: Call2 0x583

0x54d: Pop(1)
0x54e: Pop(1); Push((bool) Stack[-1] == 0)
0x54f: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x550: PushEmpty(bool, object)
0x551: Stack[-1] = Stack[-7]
0x552: Call2 0x55e

0x553: Pop(1)
0x554: Pop(1); Push((bool) Stack[-1] == 0)
0x555: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x556: Stack[-6] = (bool) 0
0x557: Return(); Pop(4)

0x558: Push("voice_common")
0x559: Push((int) 1)
0x55a: @ SetVariable(Stack[-2], Stack[-1])
0x55b: Pop(2)
0x55c: Stack[-6] = (bool) 1
0x55d: Return(); Pop(4)

0x55e: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x55f: Stack[-5] = "c"
0x560: Stack[-4] = (int) 0
0x561: Push((int) 1)
0x562: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x563: Push((int) 1)
0x564: Pop(1); Push(Stack[-5] + Stack[-1]);
0x565: Pop(1); Push(Stack[-6] + Stack[-1]);
0x566: @@ HasProperty(Stack[-1], Stack[-4])
0x567: Pop(1)
0x568: Pop(0); Push((bool) Stack[-3] == 0)
0x569: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x56a: GOTO 0x56e

0x56b: Push((int) 1)
0x56c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x56d: GOTO 0x561

0x56e: Pop(0); Push((bool) Stack[-4] == 0)
0x56f: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x570: Stack[-12] = (bool) 0
0x571: Return(); Pop(10)

0x572: Stack[-2] = (int) 0
0x573: Push((int) 1)
0x574: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x575: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x576: @ irand(Stack[-2], Stack[-4])
0x577: Pop(0)
0x578: Push((int) 1)
0x579: Pop(1); Push(Stack[-3] + Stack[-1]);
0x57a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x57b: @@ GetProperty(Stack[-1], Stack[-2])
0x57c: Pop(1)
0x57d: PushEmpty(bool, string)
0x57e: Stack[-1] = Stack[-3]
0x57f: Call2 0x5cd

0x580: Stack[-14] = Stack[-2]
0x581: Pop(2)
0x582: Return(); Pop(10)

0x583: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x584: Push("d")
0x585: PushEmpty(int)
0x586: Call2 0x685

0x587: Pop(0)
0x588: Pop(2); Push(Stack[-2] + Stack[-1]);
0x589: Push("m")
0x58a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x58b: Stack[-4] = (int) 0
0x58c: Push((int) 1)
0x58d: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x58e: Push((int) 1)
0x58f: Pop(1); Push(Stack[-5] + Stack[-1]);
0x590: Pop(1); Push(Stack[-6] + Stack[-1]);
0x591: @@ HasProperty(Stack[-1], Stack[-4])
0x592: Pop(1)
0x593: Pop(0); Push((bool) Stack[-3] == 0)
0x594: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x595: GOTO 0x599

0x596: Push((int) 1)
0x597: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x598: GOTO 0x58c

0x599: Pop(0); Push((bool) Stack[-4] == 0)
0x59a: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x59b: Stack[-12] = (bool) 0
0x59c: Return(); Pop(10)

0x59d: Stack[-2] = (int) 0
0x59e: Push((int) 1)
0x59f: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x5a1: @ irand(Stack[-2], Stack[-4])
0x5a2: Pop(0)
0x5a3: Push((int) 1)
0x5a4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5a5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5a6: @@ GetProperty(Stack[-1], Stack[-2])
0x5a7: Pop(1)
0x5a8: PushEmpty(bool, string)
0x5a9: Stack[-1] = Stack[-3]
0x5aa: Call2 0x5cd

0x5ab: Stack[-14] = Stack[-2]
0x5ac: Pop(2)
0x5ad: Return(); Pop(10)

0x5ae: PushEmpty(bool, float, float, bool, float, float)
0x5af: @ lshHasAnimation(Stack[-3], Stack[-7])
0x5b0: Pop(0)
0x5b1: Push(Stack[-3])
0x5b2: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b3: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x5b4: Pop(0)
0x5b5: Push((bool) 0)
0x5b6: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5b7: Pop(1)
0x5b8: GOTO 0x5bd

0x5b9: Push("Can't find lsh animation : ")
0x5ba: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5bb: @ Trace(Stack[-1])
0x5bc: Pop(1)
0x5bd: Return(); Pop(6)

0x5be: PushEmpty(bool, float, float, bool, float, float)
0x5bf: @ lshHasAnimation(Stack[-3], Stack[-8])
0x5c0: Pop(0)
0x5c1: Push(Stack[-3])
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c3: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x5c4: Pop(0)
0x5c5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x5c6: Pop(0)
0x5c7: GOTO 0x5cc

0x5c8: Push("Can't find lsh animation : ")
0x5c9: Pop(1); Push(Stack[-1] + Stack[-9]);
0x5ca: @ Trace(Stack[-1])
0x5cb: Pop(1)
0x5cc: Return(); Pop(6)

0x5cd: PushEmpty(bool, bool)
0x5ce: PushEmpty(bool)
0x5cf: Call2 0x834

0x5d0: Pop(0)
0x5d1: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d2: @ lshHasSpeech(Stack[-1], Stack[-3])
0x5d3: Pop(0)
0x5d4: Push(Stack[-1])
0x5d5: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d6: @ lshPlaySpeech(Stack[-3])
0x5d7: Pop(0)
0x5d8: Stack[-4] = (bool) 1
0x5d9: Return(); Pop(2)

0x5da: Stack[-4] = (bool) 0
0x5db: Return(); Pop(2)

0x5dc: PushEmpty(bool)
0x5dd: Call2 0x834

0x5de: Pop(0)
0x5df: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5e0: @ lshStopSpeech()
0x5e1: Pop(0)
0x5e2: Return(); Pop(0)

0x5e3: PushEmpty(object, object)
0x5e4: @ self(Stack[-1])
0x5e5: Pop(0)
0x5e6: Stack[-3] = Stack[-1]
0x5e7: Return(); Pop(2)

0x5e8: Stack[-1] = 0
0x5e9: PushEmpty(float, float)
0x5ea: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5eb: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5ec: Push((float)0.0)
0x5ed: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5ee: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5ef: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5f0: Return(); Pop(2)

0x5f1: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5f2: Return(); Pop(2)

0x5f3: PushEmpty()
0x5f4: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5f5: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5f6: Stack[-4] = Stack[-2]
0x5f7: Return(); Pop(0)

0x5f8: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5f9: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5fa: Stack[-4] = Stack[-1]
0x5fb: Return(); Pop(0)

0x5fc: Stack[-4] = Stack[-3]
0x5fd: Return(); Pop(0)

0x5fe: PushEmpty(int, int)
0x5ff: @ GetVariable(Stack[-3], Stack[-1])
0x600: Pop(0)
0x601: Stack[-4] = Stack[-1]
0x602: Return(); Pop(2)

0x603: PushEmpty(object, object, object, object)
0x604: @ GetMainOutdoorScene(Stack[-2])
0x605: Pop(0)
0x606: Push(".bin")
0x607: Pop(1); Push(Stack[-6] + Stack[-1]);
0x608: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x609: Pop(1)
0x60a: Stack[-6] = Stack[-1]
0x60b: Return(); Pop(4)

0x60c: Stack[-1] = 0
0x60d: Stack[-2] = 0
0x60e: PushEmpty(object, object)
0x60f: @ CreateIntVector(Stack[-1])
0x610: Pop(0)
0x611: @@ add(Stack[-4])
0x612: Pop(0)
0x613: @@ add(Stack[-3])
0x614: Pop(0)
0x615: Push((int) 3)
0x616: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x617: Pop(1)
0x618: Return(); Pop(2)

0x619: Stack[-1] = 0
0x61a: PushEmpty(int, int)
0x61b: PushEmpty(object, string, int)
0x61c: Stack[-3] = Stack[-7]
0x61d: Stack[-2] = "money"
0x61e: Stack[-1] = Stack[-6]
0x61f: Call2 0x4ae

0x620: Pop(3)
0x621: Push((int) 0)
0x622: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x623: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x624: Push("Money")
0x625: @ GetInvItemByName(Stack[-2], Stack[-1])
0x626: Pop(1)
0x627: PushEmpty(int, int)
0x628: Stack[-2] = Stack[-3]
0x629: Stack[-1] = Stack[-5]
0x62a: Call2 0x60e

0x62b: Pop(2)
0x62c: Return(); Pop(2)

0x62d: PushEmpty(int, int, bool, int, int, bool)
0x62e: @@ GetItemID(Stack[-3])
0x62f: Pop(0)
0x630: Push("Category")
0x631: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x632: Pop(1)
0x633: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x634: Pop(0)
0x635: Pop(0); Push((bool) Stack[-1] == 0)
0x636: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x637: @@ DropItems(Stack[-8], Stack[-7])
0x638: Pop(0)
0x639: GOTO 0x63f

0x63a: PushEmpty(int, int)
0x63b: Stack[-2] = Stack[-5]
0x63c: Stack[-1] = Stack[-9]
0x63d: Call2 0x60e

0x63e: Pop(2)
0x63f: Return(); Pop(6)

0x640: PushEmpty(int, bool, int, bool)
0x641: @ GetInvItemByName(Stack[-2], Stack[-5])
0x642: Pop(0)
0x643: @@ HasItem(Stack[-2], Stack[-1])
0x644: Pop(0)
0x645: Stack[-7] = Stack[-1]
0x646: Return(); Pop(4)

0x647: PushEmpty()
0x648: Pop(0); Push((bool) Stack[-2] == 0)
0x649: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x64a: Stack[-3] = (bool) 0
0x64b: Return(); Pop(0)

0x64c: Push((int) 0)
0x64d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x64e: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x64f: Push((int) 8)
0x650: @ SendWorldWndMessage(Stack[-1])
0x651: Pop(1)
0x652: GOTO 0x65c

0x653: Push((int) 0)
0x654: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x655: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x656: Push((int) 9)
0x657: @ SendWorldWndMessage(Stack[-1])
0x658: Pop(1)
0x659: GOTO 0x65c

0x65a: Stack[-3] = (bool) 0
0x65b: Return(); Pop(0)

0x65c: PushEmpty(float)
0x65d: Stack[-1] = Stack[-2]
0x65e: Call2 0x66a

0x65f: Pop(1)
0x660: PushEmpty(bool, object, string, float, float, float)
0x661: Stack[-5] = Stack[-8]
0x662: Stack[-4] = "reputation"
0x663: Stack[-3] = Stack[-7]
0x664: Stack[-2] = (int) 0
0x665: Stack[-1] = (int) 1
0x666: Call2 0x498

0x667: Pop(6)
0x668: Stack[-3] = (bool) 1
0x669: Return(); Pop(0)

0x66a: PushEmpty(object, object)
0x66b: @ CreateFloatVector(Stack[-1])
0x66c: Pop(0)
0x66d: @@ add(Stack[-3])
0x66e: Pop(0)
0x66f: Push((int) 16)
0x670: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x671: Pop(1)
0x672: Return(); Pop(2)

0x673: Stack[-1] = 0
0x674: PushEmpty(object, object)
0x675: @ FindActor(Stack[-1], Stack[-4])
0x676: Pop(0)
0x677: Pop(0); Push((bool) Stack[-1] == 0)
0x678: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x679: Stack[-5] = (bool) 0
0x67a: Return(); Pop(2)

0x67b: @ Trigger(Stack[-1], Stack[-3])
0x67c: Pop(0)
0x67d: Stack[-5] = (bool) 1
0x67e: Return(); Pop(2)

0x67f: Stack[-1] = 0
0x680: PushEmpty(float, float)
0x681: @ GetGameTime(Stack[-1])
0x682: Pop(0)
0x683: Stack[-3] = Stack[-1]
0x684: Return(); Pop(2)

0x685: PushEmpty(float, float)
0x686: @ GetGameTime(Stack[-1])
0x687: Pop(0)
0x688: Push((int) 1)
0x689: PushEmpty(int)
0x68a: Push((int) 24)
0x68b: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x68c: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x68d: Return(); Pop(2)

0x68e: PushEmpty(string, string)
0x68f: Stack[-1] = "idle"
0x690: Push(Stack[-3])
0x691: IF (Stack[-1] == 0) GOTO 0x693; Pop(1)

0x692: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x693: Stack[-4] = Stack[-1]
0x694: Return(); Pop(2)

0x695: PushEmpty(int, bool, int, bool)
0x696: Stack[-2] = (int) 0
0x697: Push("all")
0x698: PushEmpty(string, int)
0x699: Stack[-1] = Stack[-5]
0x69a: Call2 0x68e

0x69b: Pop(1)
0x69c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x69d: Pop(2)
0x69e: Pop(0); Push((bool) Stack[-1] == 0)
0x69f: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x6a0: GOTO 0x6a4

0x6a1: Push((int) 1)
0x6a2: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x6a3: GOTO 0x697

0x6a4: Stack[-5] = Stack[-2]
0x6a5: Return(); Pop(4)

0x6a6: PushEmpty()
0x6a7: PushEmpty(bool, object, float)
0x6a8: Stack[-2] = Stack[-5]
0x6a9: Stack[-1] = (float) 0.05
0x6aa: Call2 0x647

0x6ab: Pop(3)
0x6ac: Return(); Pop(0)

0x6ad: PushEmpty(object, object)
0x6ae: PushEmpty(int, string)
0x6af: Stack[-1] = "k7q01CorpseMark"
0x6b0: Call2 0x5fe

0x6b1: Pop(1)
0x6b2: Push((int) 0)
0x6b3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6b4: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6b5: Push("k7q01CorpseMark")
0x6b6: Push((int) 1)
0x6b7: @ SetVariable(Stack[-2], Stack[-1])
0x6b8: Pop(2)
0x6b9: PushEmpty(object)
0x6ba: Call2 0x7e9

0x6bb: Stack[-2] = Stack[-1]
0x6bc: Pop(1)
0x6bd: Push("k7q01BirdmaskGotoCorpse")
0x6be: Push("pt_d7q02_corpse")
0x6bf: Push((int) 3)
0x6c0: Push((int) 526214)
0x6c1: PushEmpty(float)
0x6c2: Call2 0x680

0x6c3: Pop(0)
0x6c4: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6c5: Pop(5)
0x6c6: PushEmpty(bool, string, string)
0x6c7: Stack[-2] = "quest_k7_01"
0x6c8: Stack[-1] = "place_corpse"
0x6c9: Call2 0x674

0x6ca: Pop(3)
0x6cb: Stack[-1] = 0
0x6cc: Return(); Pop(2)

0x6cd: PushEmpty()
0x6ce: Push("ook7DankoTheater1")
0x6cf: Push((int) 1)
0x6d0: @ SetVariable(Stack[-2], Stack[-1])
0x6d1: Pop(2)
0x6d2: Return(); Pop(0)

0x6d3: PushEmpty(int, int)
0x6d4: Push("k7q01")
0x6d5: Push((int) 3)
0x6d6: @ SetVariable(Stack[-2], Stack[-1])
0x6d7: Pop(2)
0x6d8: PushEmpty()
0x6d9: Call2 0x78c

0x6da: Pop(0)
0x6db: Push("bird_mask")
0x6dc: Push((int) 1)
0x6dd: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x6de: Pop(2)
0x6df: Return(); Pop(2)

0x6e0: PushEmpty()
0x6e1: Push("ook7DankoTheater2")
0x6e2: Push((int) 1)
0x6e3: @ SetVariable(Stack[-2], Stack[-1])
0x6e4: Pop(2)
0x6e5: Return(); Pop(0)

0x6e6: PushEmpty(object, object)
0x6e7: PushEmpty(object)
0x6e8: Call2 0x7e9

0x6e9: Stack[-2] = Stack[-1]
0x6ea: Pop(1)
0x6eb: Push("k7q02DankoGotoGatherer")
0x6ec: Push("pt_gatherer3")
0x6ed: Push((int) 0)
0x6ee: Push((int) 526372)
0x6ef: PushEmpty(float)
0x6f0: Call2 0x680

0x6f1: Pop(0)
0x6f2: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6f3: Pop(5)
0x6f4: PushEmpty()
0x6f5: Call2 0x799

0x6f6: Pop(0)
0x6f7: PushEmpty()
0x6f8: Call2 0x7b3

0x6f9: Pop(0)
0x6fa: PushEmpty(object, string)
0x6fb: Stack[-1] = "quest_k7_02"
0x6fc: Call2 0x603

0x6fd: Pop(2)
0x6fe: Return(); Pop(2)

0x6ff: Stack[-1] = 0
0x700: PushEmpty()
0x701: PushEmpty()
0x702: Call2 0x7a6

0x703: Pop(0)
0x704: PushEmpty(bool, string, string)
0x705: Stack[-2] = "quest_k7_02"
0x706: Stack[-1] = "completed"
0x707: Call2 0x674

0x708: Pop(3)
0x709: Return(); Pop(0)

0x70a: PushEmpty()
0x70b: PushEmpty(object, string, float)
0x70c: PushEmpty(object)
0x70d: Call2 0x7e9

0x70e: Stack[-4] = Stack[-1]
0x70f: Pop(1)
0x710: Stack[-2] = "pt_gatherer3"
0x711: Stack[-1] = (int) 2
0x712: Call2 0x7fa

0x713: Pop(3)
0x714: PushEmpty(object)
0x715: Call2 0x7e9

0x716: Pop(0)
0x717: @@ ShowMap(Stack[-1])
0x718: Pop(1)
0x719: Return(); Pop(0)

0x71a: PushEmpty()
0x71b: Push("playsound")
0x71c: Push("givemoney")
0x71d: @ TriggerWorld(Stack[-2], Stack[-1])
0x71e: Pop(2)
0x71f: Return(); Pop(0)

0x720: PushEmpty()
0x721: Push("playsound")
0x722: Push("giveitem")
0x723: @ TriggerWorld(Stack[-2], Stack[-1])
0x724: Pop(2)
0x725: Return(); Pop(0)

0x726: PushEmpty()
0x727: Push("money 5000 is given")
0x728: @ Trace(Stack[-1])
0x729: Pop(1)
0x72a: PushEmpty(object, int)
0x72b: Stack[-2] = Stack[-4]
0x72c: Stack[-1] = (int) 5000
0x72d: Call2 0x61a

0x72e: Pop(2)
0x72f: Return(); Pop(0)

0x730: PushEmpty(object, object)
0x731: Push("Samopal is given")
0x732: @ Trace(Stack[-1])
0x733: Pop(1)
0x734: @ CreateInvItem(Stack[-1])
0x735: Pop(0)
0x736: Push("Samopal")
0x737: @@ SetItemName(Stack[-1])
0x738: Pop(1)
0x739: Push("durability")
0x73a: Push((int) 30)
0x73b: @@ SetProperty(Stack[-2], Stack[-1])
0x73c: Pop(2)
0x73d: PushEmpty(object, object, int)
0x73e: Stack[-3] = Stack[-7]
0x73f: Stack[-2] = Stack[-4]
0x740: Stack[-1] = (int) 1
0x741: Call2 0x62d

0x742: Pop(3)
0x743: Return(); Pop(2)

0x744: Stack[-1] = 0
0x745: PushEmpty()
0x746: PushEmpty(int, string)
0x747: Stack[-1] = "k7q01"
0x748: Call2 0x5fe

0x749: Pop(1)
0x74a: Push((int) 2)
0x74b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x74c: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x74d: Stack[-2] = (bool) 1
0x74e: Return(); Pop(0)

0x74f: Stack[-2] = (bool) 0
0x750: Return(); Pop(0)

0x751: PushEmpty()
0x752: PushEmpty(bool, object, string)
0x753: Stack[-2] = Stack[-4]
0x754: Stack[-1] = "bird_mask"
0x755: Call2 0x640

0x756: Pop(2)
0x757: IF (Stack[-1] == 0) GOTO 0x75a; Pop(1)

0x758: Stack[-2] = (bool) 1
0x759: Return(); Pop(0)

0x75a: Stack[-2] = (bool) 0
0x75b: Return(); Pop(0)

0x75c: PushEmpty()
0x75d: PushEmpty(int, string)
0x75e: Stack[-1] = "ook7DankoTheater1"
0x75f: Call2 0x5fe

0x760: Pop(1)
0x761: Push((int) 0)
0x762: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x763: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x764: Stack[-2] = (bool) 1
0x765: Return(); Pop(0)

0x766: Stack[-2] = (bool) 0
0x767: Return(); Pop(0)

0x768: PushEmpty()
0x769: PushEmpty(int, string)
0x76a: Stack[-1] = "ook7DankoTheater2"
0x76b: Call2 0x5fe

0x76c: Pop(1)
0x76d: Push((int) 0)
0x76e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x76f: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x770: Stack[-2] = (bool) 1
0x771: Return(); Pop(0)

0x772: Stack[-2] = (bool) 0
0x773: Return(); Pop(0)

0x774: PushEmpty()
0x775: PushEmpty(int, string)
0x776: Stack[-1] = "k7q02"
0x777: Call2 0x5fe

0x778: Pop(1)
0x779: Push((int) 0)
0x77a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x77b: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x77c: Stack[-2] = (bool) 1
0x77d: Return(); Pop(0)

0x77e: Stack[-2] = (bool) 0
0x77f: Return(); Pop(0)

0x780: PushEmpty()
0x781: PushEmpty(int, string)
0x782: Stack[-1] = "k7q02"
0x783: Call2 0x5fe

0x784: Pop(1)
0x785: Push((int) 2)
0x786: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x787: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x788: Stack[-2] = (bool) 1
0x789: Return(); Pop(0)

0x78a: Stack[-2] = (bool) 0
0x78b: Return(); Pop(0)

0x78c: PushEmpty(object, object)
0x78d: Push((int) 420)
0x78e: Push((int) 1)
0x78f: Push((int) 526219)
0x790: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x791: Pop(3)
0x792: PushEmpty(bool, object, int)
0x793: Stack[-2] = Stack[-4]
0x794: Stack[-1] = (int) 416
0x795: Call2 0x7cd

0x796: Pop(3)
0x797: Return(); Pop(2)

0x798: Stack[-1] = 0
0x799: PushEmpty(object, object)
0x79a: Push((int) 430)
0x79b: Push((int) 2)
0x79c: Push((int) 526368)
0x79d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x79e: Pop(3)
0x79f: PushEmpty(bool, object, int)
0x7a0: Stack[-2] = Stack[-4]
0x7a1: Stack[-1] = (int) -1
0x7a2: Call2 0x7cd

0x7a3: Pop(3)
0x7a4: Return(); Pop(2)

0x7a5: Stack[-1] = 0
0x7a6: PushEmpty(object, object)
0x7a7: Push((int) 433)
0x7a8: Push((int) 2)
0x7a9: Push((int) 526371)
0x7aa: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7ab: Pop(3)
0x7ac: PushEmpty(bool, object, int)
0x7ad: Stack[-2] = Stack[-4]
0x7ae: Stack[-1] = (int) 430
0x7af: Call2 0x7cd

0x7b0: Pop(3)
0x7b1: Return(); Pop(2)

0x7b2: Stack[-1] = 0
0x7b3: PushEmpty(object, object)
0x7b4: Push((int) 431)
0x7b5: Push((int) 2)
0x7b6: Push((int) 526369)
0x7b7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7b8: Pop(3)
0x7b9: PushEmpty(bool, object, int)
0x7ba: Stack[-2] = Stack[-4]
0x7bb: Stack[-1] = (int) 430
0x7bc: Call2 0x7cd

0x7bd: Pop(3)
0x7be: Return(); Pop(2)

0x7bf: Stack[-1] = 0
0x7c0: PushEmpty(object, object)
0x7c1: @ GetDiaryRoot(Stack[-1])
0x7c2: Pop(0)
0x7c3: Pop(0); Push((bool) Stack[-1] == 0)
0x7c4: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7c5: Push("Can't retrieve diary root")
0x7c6: @ Trace(Stack[-1])
0x7c7: Pop(1)
0x7c8: Stack[-3] = (bool) 0
0x7c9: Return(); Pop(2)

0x7ca: Stack[-3] = Stack[-1]
0x7cb: Return(); Pop(2)

0x7cc: Stack[-1] = 0
0x7cd: PushEmpty(object, object, int, object, object, int)
0x7ce: PushEmpty(object)
0x7cf: Call2 0x7c0

0x7d0: Stack[-4] = Stack[-1]
0x7d1: Pop(1)
0x7d2: @@ Find(Stack[-7], Stack[-2])
0x7d3: Pop(0)
0x7d4: Pop(0); Push((bool) Stack[-2] == 0)
0x7d5: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7d6: Push("Can't find diary parent with id: ")
0x7d7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7d8: @ Trace(Stack[-1])
0x7d9: Pop(1)
0x7da: Stack[-9] = (bool) 0
0x7db: Return(); Pop(6)

0x7dc: @@ AddChild(Stack[-8])
0x7dd: Pop(0)
0x7de: Push((int) 7)
0x7df: @ SendWorldWndMessage(Stack[-1])
0x7e0: Pop(1)
0x7e1: @@ GetCategory(Stack[-1])
0x7e2: Pop(0)
0x7e3: @ SetDiarySection(Stack[-1])
0x7e4: Pop(0)
0x7e5: Stack[-9] = (bool) 0
0x7e6: Return(); Pop(6)

0x7e7: Stack[-2] = 0
0x7e8: Stack[-3] = 0
0x7e9: PushEmpty(object, object, object, object)
0x7ea: @ GetMainOutdoorScene(Stack[-2])
0x7eb: Pop(0)
0x7ec: Pop(0); Push((bool) Stack[-2] == 0)
0x7ed: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7ee: Push("Can't find main outdoor scene")
0x7ef: @ Trace(Stack[-1])
0x7f0: Pop(1)
0x7f1: Stack[-1] = 0
0x7f2: Stack[-5] = Stack[-1]
0x7f3: Return(); Pop(4)

0x7f4: @@ GetMap(Stack[-1])
0x7f5: Pop(0)
0x7f6: Stack[-5] = Stack[-1]
0x7f7: Return(); Pop(4)

0x7f8: Stack[-1] = 0
0x7f9: Stack[-2] = 0
0x7fa: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x7fb: @ GetMainOutdoorScene(Stack[-2])
0x7fc: Pop(0)
0x7fd: Pop(0); Push((bool) Stack[-2] == 0)
0x7fe: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x7ff: Push("Can't find main outdoor scene")
0x800: @ Trace(Stack[-1])
0x801: Pop(1)
0x802: Return(); Pop(8)

0x803: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x804: Pop(0)
0x805: Pop(0); Push((bool) Stack[-1] == 0)
0x806: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x807: Push("Warning: outdoor scene locator ")
0x808: Pop(1); Push(Stack[-1] + Stack[-11]);
0x809: Push(" doesnt exist")
0x80a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x80b: @ Trace(Stack[-1])
0x80c: Pop(1)
0x80d: @@ GetMap(Stack[-11])
0x80e: Pop(0)
0x80f: Pop(0); Push((bool) Stack[-11] == 0)
0x810: IF (Stack[-1] == 0) GOTO 0x815; Pop(1)

0x811: Push("Can't find map")
0x812: @ Trace(Stack[-1])
0x813: Pop(1)
0x814: Return(); Pop(8)

0x815: Push(CvectorIndex(Stack[-4], 0))
0x816: Push(CvectorIndex(Stack[-5], 2))
0x817: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x818: Pop(2)
0x819: Return(); Pop(8)

0x81a: Stack[-2] = 0
0x81b: PushEmpty(int, int)
0x81c: Push("branch")
0x81d: @ GetVariable(Stack[-1], Stack[-2])
0x81e: Pop(1)
0x81f: Push((int) 0)
0x820: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x821: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x822: Stack[-3] = (int) 1
0x823: Return(); Pop(2)

0x824: GOTO 0x82a

0x825: Push((int) 1)
0x826: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x827: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x828: Stack[-3] = (int) 2
0x829: Return(); Pop(2)

0x82a: Stack[-3] = (int) 3
0x82b: Return(); Pop(2)

0x82c: Stack[-1] = (int) 515573
0x82d: Return(); Pop(0)

0x82e: Stack[-1] = (int) 504032
0x82f: Return(); Pop(0)

0x830: Stack[-1] = "ui/NPC_Bakalavr.png"
0x831: Return(); Pop(0)

0x832: Stack[-1] = "ui/NPC_Bakalavr_b.png"
0x833: Return(); Pop(0)

0x834: Stack[-1] = (bool) 1
0x835: Return(); Pop(0)

