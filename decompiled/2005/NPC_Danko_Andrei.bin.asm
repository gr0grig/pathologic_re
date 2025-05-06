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
	What
	Smile
	Grin
	Untrust
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
	add
	money
	Money
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	ui/NPC_Andrei.png
	ui/NPC_Andrei_b.png
	pt_map_aglaja
	ShowMap
	money1000 is given
	playsound
	givemoney
	giveitem
	ood2Andrei1
	ood2Andrei2
	ood2Andrei3
	ood2Andrei4
	ood2Andrei5
	KnowAgo
	map_chertez_state
	map_chertez_force
	d2q02
	d2q02AndreiGotoPetr
	pt_map_petr
	AddMark
	d2q02AndreiGotoGrif
	pt_map_grif
	quest_d2_02
	put_patrol
	tvirin is given
	tvirin
	KnowAndrei
	ood11Andrei1
	d11q01
	blueprint is given
	d11q01_blueprint
	ood11Andrei2
	ood11Andrei3
	ood3Andrei1
	ood10Andrei1
	d3q01
	d10q01SoldierTalk
	KnowGrif
	d10q01
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
	mt_andrei

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
	GetMainOutdoorScene (1 args)

RunOp = 0x136a
RunTask = 18

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x16a Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x289 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x438 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8af Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc15 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd9a Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xfa9 Vars = (int, int)
	GTASK_16 Vars = (object) Params = 2
	GTASK_17 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1340 Vars = (int, int)
	GTASK_18 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x13b3 Vars = (int)
		EVENT_6 Op = 0x13d9 Vars = ()
		EVENT_5 Op = 0x13e8 Vars = ()
		EVENT_45 Op = 0x13f5 Vars = (bool)
		EVENT_0 Op = 0x1401 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1491

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1646

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x1644

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1648

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x164a

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x18f6

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
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x14d5

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x84

0x53: Pop(1)
0x54: Push((int) 532762)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 532763)
0x5a: Push((int) -1)
0x5b: Push((int) 34234)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 533665)
0x5f: Push((int) -1)
0x60: Push((int) 35197)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x164c

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x1570

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all")
0x76: Push("idle")
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all")
0x7f: Push("idle")
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0x164c

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-2] = Stack[-3]
0x90: Push("")
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x1580

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x159e

0x9f: Pop(0)
0xa0: Push((int) 34233)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 532762)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 532763)
0xad: Push((int) -1)
0xae: Push((int) 34234)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 533665)
0xb2: Push((int) -1)
0xb3: Push((int) 35197)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb8: PushEmpty(bool)
0xb9: Call2 0x164c

0xba: Pop(0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbc: @ lshStopAnimation()
0xbd: Pop(0)
0xbe: GOTO 0xc1

0xbf: @ StopAnimation()
0xc0: Pop(0)
0xc1: Return(); Pop(0)

0xc2: GOTO 0x9b

0xc3: Return(); Pop(0)

0xc4: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xc5: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xc6: PushEmpty(bool, object, float)
0xc7: Stack[-2] = Stack[-12]
0xc8: Stack[-1] = (float) 70.0
0xc9: Call2 0x1491

0xca: Pop(2)
0xcb: Pop(1); Push((bool) Stack[-1] == 0)
0xcc: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xcd: Stack[-10] = (int) -2
0xce: Return(); Pop(8)

0xcf: @ CreateDialog(Stack[-4])
0xd0: Pop(0)
0xd1: PushEmpty(int)
0xd2: Call2 0x1646

0xd3: Pop(0)
0xd4: @@ SetNPCName(Stack[-1])
0xd5: Pop(1)
0xd6: PushEmpty(int)
0xd7: Call2 0x1644

0xd8: Pop(0)
0xd9: @@ SetNPCDescription(Stack[-1])
0xda: Pop(1)
0xdb: PushEmpty(string)
0xdc: Call2 0x1648

0xdd: Pop(0)
0xde: @@ SetPhoto(Stack[-1])
0xdf: Pop(1)
0xe0: PushEmpty(string)
0xe1: Call2 0x164a

0xe2: Pop(0)
0xe3: @@ SetPhoto2(Stack[-1])
0xe4: Pop(1)
0xe5: PushEmpty(int)
0xe6: Call2 0x18f6

0xe7: Pop(0)
0xe8: @@ SetPlayerName(Stack[-1])
0xe9: Pop(1)
0xea: Stack[-2] = (int) -1
0xeb: @ IsOverrideActive(Stack[-3])
0xec: Pop(0)
0xed: Push(Stack[-3])
0xee: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xef: Stack[-10] = (int) -2
0xf0: Return(); Pop(8)

0xf1: @ DoDialog(Stack[-4])
0xf2: Pop(0)
0xf3: PushEmpty(bool, object)
0xf4: PushEmpty(object)
0xf5: Call2 0x15a5

0xf6: Stack[-2] = Stack[-1]
0xf7: Pop(1)
0xf8: Call2 0x14e6

0xf9: Pop(2)
0xfa: PushEmpty(object, object)
0xfb: Stack[-2] = Stack[-11]
0xfc: Stack[-1] = Stack[-6]
0xfd: Push(-2, 4); TaskCall(3)
0xfe: Call2 0x115

0xff: Pop(-2, 4); TaskReturn
0x100: Pop(2)
0x101: @@ IsDialogEnd(Stack[-1])
0x102: Pop(0)
0x103: Pop(0); Push((bool) Stack[-1] == 0)
0x104: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x105: @ sync()
0x106: Pop(0)
0x107: @@ IsDialogEnd(Stack[-1])
0x108: Pop(0)
0x109: GOTO 0x103

0x10a: PushEmpty(object)
0x10b: Stack[-1] = Stack[-10]
0x10c: Call2 0x14d5

0x10d: Pop(1)
0x10e: @ StopDialog(Stack[-4])
0x10f: Pop(0)
0x110: @@ GetReturnValue(Stack[-2])
0x111: Pop(0)
0x112: Stack[-10] = Stack[-2]
0x113: Return(); Pop(8)

0x114: Stack[-4] = 0
0x115: PushEmpty()
0x116: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x117: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x118: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x119: Push((int) 1)
0x11a: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "What"
0x11d: Call2 0x154

0x11e: Pop(1)
0x11f: Push((int) 535668)
0x120: @@ SetMessage(Stack[-1])
0x121: Pop(1)
0x122: @@ ClearReplies()
0x123: Pop(0)
0x124: Push((int) 535669)
0x125: Push((int) 42112)
0x126: Push((int) 37355)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Push((int) 540002)
0x12a: Push((int) -1)
0x12b: Push((int) 41973)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Push((int) 540201)
0x12f: Push((int) -1)
0x130: Push((int) 42179)
0x131: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132: Pop(3)
0x133: GOTO 0x136

0x134: Return(); Pop(0)

0x135: GOTO 0x119

0x136: PushEmpty(bool)
0x137: Call2 0x164c

0x138: Pop(0)
0x139: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x13a: @ lshWaitForAnimEnd()
0x13b: Pop(0)
0x13c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x13d: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13e: GOTO 0x144

0x13f: PushEmpty(string)
0x140: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x141: Call2 0x1570

0x142: Pop(1)
0x143: GOTO 0x13a

0x144: GOTO 0x153

0x145: Push("all")
0x146: Push("idle")
0x147: @ PlayAnimation(Stack[-2], Stack[-1])
0x148: Pop(2)
0x149: @ WaitForAnimEnd()
0x14a: Pop(0)
0x14b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x14c: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x14d: GOTO 0x153

0x14e: Push("all")
0x14f: Push("idle")
0x150: @ PlayAnimation(Stack[-2], Stack[-1])
0x151: Pop(2)
0x152: GOTO 0x149

0x153: Return(); Pop(0)

0x154: PushEmpty()
0x155: PushEmpty(bool)
0x156: Call2 0x164c

0x157: Pop(0)
0x158: Pop(1); Push((bool) Stack[-1] == 0)
0x159: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x15a: Return(); Pop(0)

0x15b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x15c: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15d: Return(); Pop(0)

0x15e: PushEmpty(string, bool)
0x15f: Stack[-2] = Stack[-3]
0x160: Push("")
0x161: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x163: Stack[-1] = (bool) 0
0x164: GOTO 0x166

0x165: Stack[-1] = (bool) 1
0x166: Call2 0x1580

0x167: Pop(2)
0x168: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x169: Return(); Pop(0)

0x16a: PushEmpty()
0x16b: Push((int) 1)
0x16c: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x16d: PushEmpty()
0x16e: Call2 0x159e

0x16f: Pop(0)
0x170: Push((int) 37354)
0x171: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x173: PushEmpty(string)
0x174: Stack[-1] = "What"
0x175: Call2 0x154

0x176: Pop(1)
0x177: Push((int) 535668)
0x178: @@ SetMessage(Stack[-1])
0x179: Pop(1)
0x17a: @@ ClearReplies()
0x17b: Pop(0)
0x17c: Push((int) 535669)
0x17d: Push((int) 42112)
0x17e: Push((int) 37355)
0x17f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x180: Pop(3)
0x181: Push((int) 540002)
0x182: Push((int) -1)
0x183: Push((int) 41973)
0x184: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x185: Pop(3)
0x186: Push((int) 540201)
0x187: Push((int) -1)
0x188: Push((int) 42179)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Return(); Pop(0)

0x18c: Push((int) 42112)
0x18d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x18f: PushEmpty(string)
0x190: Stack[-1] = "What"
0x191: Call2 0x154

0x192: Pop(1)
0x193: Push((int) 540140)
0x194: @@ SetMessage(Stack[-1])
0x195: Pop(1)
0x196: @@ ClearReplies()
0x197: Pop(0)
0x198: Push((int) 540203)
0x199: Push((int) 42182)
0x19a: Push((int) 42181)
0x19b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19c: Pop(3)
0x19d: Push((int) 540211)
0x19e: Push((int) 42191)
0x19f: Push((int) 42189)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: Return(); Pop(0)

0x1a3: Push((int) 42182)
0x1a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1a6: PushEmpty(string)
0x1a7: Stack[-1] = "What"
0x1a8: Call2 0x154

0x1a9: Pop(1)
0x1aa: Push((int) 540204)
0x1ab: @@ SetMessage(Stack[-1])
0x1ac: Pop(1)
0x1ad: @@ ClearReplies()
0x1ae: Pop(0)
0x1af: Push((int) 540210)
0x1b0: Push((int) 42191)
0x1b1: Push((int) 42188)
0x1b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b3: Pop(3)
0x1b4: Push((int) 540212)
0x1b5: Push((int) 42191)
0x1b6: Push((int) 42190)
0x1b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b8: Pop(3)
0x1b9: Return(); Pop(0)

0x1ba: Push((int) 42191)
0x1bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1bd: PushEmpty(string)
0x1be: Stack[-1] = "What"
0x1bf: Call2 0x154

0x1c0: Pop(1)
0x1c1: Push((int) 540213)
0x1c2: @@ SetMessage(Stack[-1])
0x1c3: Pop(1)
0x1c4: @@ ClearReplies()
0x1c5: Pop(0)
0x1c6: Push((int) 540214)
0x1c7: Push((int) -1)
0x1c8: Push((int) 42194)
0x1c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ca: Pop(3)
0x1cb: Push((int) 540215)
0x1cc: Push((int) -1)
0x1cd: Push((int) 42195)
0x1ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cf: Pop(3)
0x1d0: Return(); Pop(0)

0x1d1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d2: PushEmpty(bool)
0x1d3: Call2 0x164c

0x1d4: Pop(0)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d6: @ lshStopAnimation()
0x1d7: Pop(0)
0x1d8: GOTO 0x1db

0x1d9: @ StopAnimation()
0x1da: Pop(0)
0x1db: Return(); Pop(0)

0x1dc: GOTO 0x16b

0x1dd: Return(); Pop(0)

0x1de: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1df: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1e0: PushEmpty(bool, object, float)
0x1e1: Stack[-2] = Stack[-12]
0x1e2: Stack[-1] = (float) 70.0
0x1e3: Call2 0x1491

0x1e4: Pop(2)
0x1e5: Pop(1); Push((bool) Stack[-1] == 0)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e7: Stack[-10] = (int) -2
0x1e8: Return(); Pop(8)

0x1e9: @ CreateDialog(Stack[-4])
0x1ea: Pop(0)
0x1eb: PushEmpty(int)
0x1ec: Call2 0x1646

0x1ed: Pop(0)
0x1ee: @@ SetNPCName(Stack[-1])
0x1ef: Pop(1)
0x1f0: PushEmpty(int)
0x1f1: Call2 0x1644

0x1f2: Pop(0)
0x1f3: @@ SetNPCDescription(Stack[-1])
0x1f4: Pop(1)
0x1f5: PushEmpty(string)
0x1f6: Call2 0x1648

0x1f7: Pop(0)
0x1f8: @@ SetPhoto(Stack[-1])
0x1f9: Pop(1)
0x1fa: PushEmpty(string)
0x1fb: Call2 0x164a

0x1fc: Pop(0)
0x1fd: @@ SetPhoto2(Stack[-1])
0x1fe: Pop(1)
0x1ff: PushEmpty(int)
0x200: Call2 0x18f6

0x201: Pop(0)
0x202: @@ SetPlayerName(Stack[-1])
0x203: Pop(1)
0x204: Stack[-2] = (int) -1
0x205: @ IsOverrideActive(Stack[-3])
0x206: Pop(0)
0x207: Push(Stack[-3])
0x208: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x209: Stack[-10] = (int) -2
0x20a: Return(); Pop(8)

0x20b: @ DoDialog(Stack[-4])
0x20c: Pop(0)
0x20d: PushEmpty(bool, object)
0x20e: PushEmpty(object)
0x20f: Call2 0x15a5

0x210: Stack[-2] = Stack[-1]
0x211: Pop(1)
0x212: Call2 0x14e6

0x213: Pop(2)
0x214: PushEmpty(object, object)
0x215: Stack[-2] = Stack[-11]
0x216: Stack[-1] = Stack[-6]
0x217: Push(-2, 4); TaskCall(5)
0x218: Call2 0x22f

0x219: Pop(-2, 4); TaskReturn
0x21a: Pop(2)
0x21b: @@ IsDialogEnd(Stack[-1])
0x21c: Pop(0)
0x21d: Pop(0); Push((bool) Stack[-1] == 0)
0x21e: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x21f: @ sync()
0x220: Pop(0)
0x221: @@ IsDialogEnd(Stack[-1])
0x222: Pop(0)
0x223: GOTO 0x21d

0x224: PushEmpty(object)
0x225: Stack[-1] = Stack[-10]
0x226: Call2 0x14d5

0x227: Pop(1)
0x228: @ StopDialog(Stack[-4])
0x229: Pop(0)
0x22a: @@ GetReturnValue(Stack[-2])
0x22b: Pop(0)
0x22c: Stack[-10] = Stack[-2]
0x22d: Return(); Pop(8)

0x22e: Stack[-4] = 0
0x22f: PushEmpty()
0x230: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x231: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x232: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x233: Push((int) 1)
0x234: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x235: PushEmpty(object, object)
0x236: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x237: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x238: Call2 0x1700

0x239: Pop(2)
0x23a: PushEmpty(string)
0x23b: Stack[-1] = "Neutral"
0x23c: Call2 0x273

0x23d: Pop(1)
0x23e: Push((int) 500187)
0x23f: @@ SetMessage(Stack[-1])
0x240: Pop(1)
0x241: @@ ClearReplies()
0x242: Pop(0)
0x243: Push((int) 500190)
0x244: Push((int) 228)
0x245: Push((int) 227)
0x246: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x247: Pop(3)
0x248: Push((int) 533667)
0x249: Push((int) 35200)
0x24a: Push((int) 35199)
0x24b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24c: Pop(3)
0x24d: Push((int) 500188)
0x24e: Push((int) 226)
0x24f: Push((int) 225)
0x250: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x251: Pop(3)
0x252: GOTO 0x255

0x253: Return(); Pop(0)

0x254: GOTO 0x233

0x255: PushEmpty(bool)
0x256: Call2 0x164c

0x257: Pop(0)
0x258: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x259: @ lshWaitForAnimEnd()
0x25a: Pop(0)
0x25b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x25c: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25d: GOTO 0x263

0x25e: PushEmpty(string)
0x25f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x260: Call2 0x1570

0x261: Pop(1)
0x262: GOTO 0x259

0x263: GOTO 0x272

0x264: Push("all")
0x265: Push("idle")
0x266: @ PlayAnimation(Stack[-2], Stack[-1])
0x267: Pop(2)
0x268: @ WaitForAnimEnd()
0x269: Pop(0)
0x26a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x26b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26c: GOTO 0x272

0x26d: Push("all")
0x26e: Push("idle")
0x26f: @ PlayAnimation(Stack[-2], Stack[-1])
0x270: Pop(2)
0x271: GOTO 0x268

0x272: Return(); Pop(0)

0x273: PushEmpty()
0x274: PushEmpty(bool)
0x275: Call2 0x164c

0x276: Pop(0)
0x277: Pop(1); Push((bool) Stack[-1] == 0)
0x278: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x279: Return(); Pop(0)

0x27a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x27b: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27c: Return(); Pop(0)

0x27d: PushEmpty(string, bool)
0x27e: Stack[-2] = Stack[-3]
0x27f: Push("")
0x280: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x282: Stack[-1] = (bool) 0
0x283: GOTO 0x285

0x284: Stack[-1] = (bool) 1
0x285: Call2 0x1580

0x286: Pop(2)
0x287: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x288: Return(); Pop(0)

0x289: PushEmpty()
0x28a: Push((int) 1)
0x28b: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x28c: PushEmpty()
0x28d: Call2 0x159e

0x28e: Pop(0)
0x28f: Push((int) 224)
0x290: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x292: PushEmpty(object, object)
0x293: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x294: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x295: Call2 0x1700

0x296: Pop(2)
0x297: PushEmpty(string)
0x298: Stack[-1] = "Neutral"
0x299: Call2 0x273

0x29a: Pop(1)
0x29b: Push((int) 500187)
0x29c: @@ SetMessage(Stack[-1])
0x29d: Pop(1)
0x29e: @@ ClearReplies()
0x29f: Pop(0)
0x2a0: Push((int) 500190)
0x2a1: Push((int) 228)
0x2a2: Push((int) 227)
0x2a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a4: Pop(3)
0x2a5: Push((int) 533667)
0x2a6: Push((int) 35200)
0x2a7: Push((int) 35199)
0x2a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a9: Pop(3)
0x2aa: Push((int) 500188)
0x2ab: Push((int) 226)
0x2ac: Push((int) 225)
0x2ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ae: Pop(3)
0x2af: Return(); Pop(0)

0x2b0: Push((int) 226)
0x2b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2b3: PushEmpty(string)
0x2b4: Stack[-1] = "What"
0x2b5: Call2 0x273

0x2b6: Pop(1)
0x2b7: Push((int) 500189)
0x2b8: @@ SetMessage(Stack[-1])
0x2b9: Pop(1)
0x2ba: @@ ClearReplies()
0x2bb: Pop(0)
0x2bc: Push((int) 500192)
0x2bd: Push((int) 233)
0x2be: Push((int) 229)
0x2bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c0: Pop(3)
0x2c1: Push((int) 500193)
0x2c2: Push((int) -1)
0x2c3: Push((int) 230)
0x2c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c5: Pop(3)
0x2c6: Return(); Pop(0)

0x2c7: Push((int) 233)
0x2c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2ca: PushEmpty(string)
0x2cb: Stack[-1] = "Smile"
0x2cc: Call2 0x273

0x2cd: Pop(1)
0x2ce: Push((int) 500196)
0x2cf: @@ SetMessage(Stack[-1])
0x2d0: Pop(1)
0x2d1: @@ ClearReplies()
0x2d2: Pop(0)
0x2d3: Push((int) 500203)
0x2d4: Push((int) -1)
0x2d5: Push((int) 241)
0x2d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d7: Pop(3)
0x2d8: Return(); Pop(0)

0x2d9: Push((int) 35200)
0x2da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2dc: PushEmpty(string)
0x2dd: Stack[-1] = "What"
0x2de: Call2 0x273

0x2df: Pop(1)
0x2e0: Push((int) 533668)
0x2e1: @@ SetMessage(Stack[-1])
0x2e2: Pop(1)
0x2e3: @@ ClearReplies()
0x2e4: Pop(0)
0x2e5: Push((int) 533669)
0x2e6: Push((int) 228)
0x2e7: Push((int) 35201)
0x2e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e9: Pop(3)
0x2ea: Push((int) 533670)
0x2eb: Push((int) 228)
0x2ec: Push((int) 35202)
0x2ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ee: Pop(3)
0x2ef: Return(); Pop(0)

0x2f0: Push((int) 228)
0x2f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x2f3: PushEmpty(string)
0x2f4: Stack[-1] = "What"
0x2f5: Call2 0x273

0x2f6: Pop(1)
0x2f7: Push((int) 500191)
0x2f8: @@ SetMessage(Stack[-1])
0x2f9: Pop(1)
0x2fa: @@ ClearReplies()
0x2fb: Pop(0)
0x2fc: Push((int) 500197)
0x2fd: Push((int) 236)
0x2fe: Push((int) 234)
0x2ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x300: Pop(3)
0x301: Push((int) 500198)
0x302: Push((int) 9260)
0x303: Push((int) 235)
0x304: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x305: Pop(3)
0x306: Return(); Pop(0)

0x307: Push((int) 9260)
0x308: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x30a: PushEmpty(string)
0x30b: Stack[-1] = "Smile"
0x30c: Call2 0x273

0x30d: Pop(1)
0x30e: Push((int) 508437)
0x30f: @@ SetMessage(Stack[-1])
0x310: Pop(1)
0x311: @@ ClearReplies()
0x312: Pop(0)
0x313: Push((int) 508438)
0x314: Push((int) -1)
0x315: Push((int) 9261)
0x316: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x317: Pop(3)
0x318: Push((int) 533671)
0x319: Push((int) 233)
0x31a: Push((int) 35205)
0x31b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31c: Pop(3)
0x31d: Return(); Pop(0)

0x31e: Push((int) 236)
0x31f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x321: PushEmpty(string)
0x322: Stack[-1] = "Smile"
0x323: Call2 0x273

0x324: Pop(1)
0x325: Push((int) 500199)
0x326: @@ SetMessage(Stack[-1])
0x327: Pop(1)
0x328: @@ ClearReplies()
0x329: Pop(0)
0x32a: Push((int) 500200)
0x32b: Push((int) 233)
0x32c: Push((int) 237)
0x32d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32e: Pop(3)
0x32f: Return(); Pop(0)

0x330: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x331: PushEmpty(bool)
0x332: Call2 0x164c

0x333: Pop(0)
0x334: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x335: @ lshStopAnimation()
0x336: Pop(0)
0x337: GOTO 0x33a

0x338: @ StopAnimation()
0x339: Pop(0)
0x33a: Return(); Pop(0)

0x33b: GOTO 0x28a

0x33c: Return(); Pop(0)

0x33d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x33e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33f: PushEmpty(bool, object, float)
0x340: Stack[-2] = Stack[-12]
0x341: Stack[-1] = (float) 70.0
0x342: Call2 0x1491

0x343: Pop(2)
0x344: Pop(1); Push((bool) Stack[-1] == 0)
0x345: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x346: Stack[-10] = (int) -2
0x347: Return(); Pop(8)

0x348: @ CreateDialog(Stack[-4])
0x349: Pop(0)
0x34a: PushEmpty(int)
0x34b: Call2 0x1646

0x34c: Pop(0)
0x34d: @@ SetNPCName(Stack[-1])
0x34e: Pop(1)
0x34f: PushEmpty(int)
0x350: Call2 0x1644

0x351: Pop(0)
0x352: @@ SetNPCDescription(Stack[-1])
0x353: Pop(1)
0x354: PushEmpty(string)
0x355: Call2 0x1648

0x356: Pop(0)
0x357: @@ SetPhoto(Stack[-1])
0x358: Pop(1)
0x359: PushEmpty(string)
0x35a: Call2 0x164a

0x35b: Pop(0)
0x35c: @@ SetPhoto2(Stack[-1])
0x35d: Pop(1)
0x35e: PushEmpty(int)
0x35f: Call2 0x18f6

0x360: Pop(0)
0x361: @@ SetPlayerName(Stack[-1])
0x362: Pop(1)
0x363: Stack[-2] = (int) -1
0x364: @ IsOverrideActive(Stack[-3])
0x365: Pop(0)
0x366: Push(Stack[-3])
0x367: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x368: Stack[-10] = (int) -2
0x369: Return(); Pop(8)

0x36a: @ DoDialog(Stack[-4])
0x36b: Pop(0)
0x36c: PushEmpty(bool, object)
0x36d: PushEmpty(object)
0x36e: Call2 0x15a5

0x36f: Stack[-2] = Stack[-1]
0x370: Pop(1)
0x371: Call2 0x14e6

0x372: Pop(2)
0x373: PushEmpty(object, object)
0x374: Stack[-2] = Stack[-11]
0x375: Stack[-1] = Stack[-6]
0x376: Push(-2, 4); TaskCall(7)
0x377: Call2 0x38e

0x378: Pop(-2, 4); TaskReturn
0x379: Pop(2)
0x37a: @@ IsDialogEnd(Stack[-1])
0x37b: Pop(0)
0x37c: Pop(0); Push((bool) Stack[-1] == 0)
0x37d: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x37e: @ sync()
0x37f: Pop(0)
0x380: @@ IsDialogEnd(Stack[-1])
0x381: Pop(0)
0x382: GOTO 0x37c

0x383: PushEmpty(object)
0x384: Stack[-1] = Stack[-10]
0x385: Call2 0x14d5

0x386: Pop(1)
0x387: @ StopDialog(Stack[-4])
0x388: Pop(0)
0x389: @@ GetReturnValue(Stack[-2])
0x38a: Pop(0)
0x38b: Stack[-10] = Stack[-2]
0x38c: Return(); Pop(8)

0x38d: Stack[-4] = 0
0x38e: PushEmpty()
0x38f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x390: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x391: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x392: Push((int) 1)
0x393: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x394: PushEmpty(string)
0x395: Stack[-1] = "Neutral"
0x396: Call2 0x422

0x397: Pop(1)
0x398: Push((int) 506864)
0x399: @@ SetMessage(Stack[-1])
0x39a: Pop(1)
0x39b: @@ ClearReplies()
0x39c: Pop(0)
0x39d: PushEmpty(bool)
0x39e: Stack[-1] = (bool) 0
0x39f: PushEmpty(bool, object)
0x3a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a1: Call2 0x1777

0x3a2: Pop(1)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a4: PushEmpty(bool, object)
0x3a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a6: Call2 0x17bf

0x3a7: Pop(1)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a9: Stack[-1] = (bool) 1
0x3aa: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ab: Push((int) 506865)
0x3ac: Push((int) 7572)
0x3ad: Push((int) 7571)
0x3ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3af: Pop(3)
0x3b0: PushEmpty(bool)
0x3b1: Stack[-1] = (bool) 0
0x3b2: PushEmpty(bool, object)
0x3b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b4: Call2 0x1783

0x3b5: Pop(1)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3b7: PushEmpty(bool, object)
0x3b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b9: Call2 0x17cb

0x3ba: Pop(1)
0x3bb: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bc: Stack[-1] = (bool) 1
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3be: Push((int) 506868)
0x3bf: Push((int) 7575)
0x3c0: Push((int) 7574)
0x3c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c2: Pop(3)
0x3c3: PushEmpty(bool)
0x3c4: Stack[-1] = (bool) 0
0x3c5: PushEmpty(bool, object)
0x3c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c7: Call2 0x178f

0x3c8: Pop(1)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3ca: PushEmpty(bool, object)
0x3cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3cc: Call2 0x17d7

0x3cd: Pop(1)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3cf: Stack[-1] = (bool) 1
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d1: Push((int) 506870)
0x3d2: Push((int) 7577)
0x3d3: Push((int) 7576)
0x3d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d5: Pop(3)
0x3d6: PushEmpty(bool)
0x3d7: Stack[-1] = (bool) 0
0x3d8: PushEmpty(bool, object)
0x3d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3da: Call2 0x179b

0x3db: Pop(1)
0x3dc: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3dd: PushEmpty(bool, object)
0x3de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3df: Call2 0x17e3

0x3e0: Pop(1)
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e2: Stack[-1] = (bool) 1
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e4: Push((int) 506874)
0x3e5: Push((int) 7581)
0x3e6: Push((int) 7580)
0x3e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e8: Pop(3)
0x3e9: PushEmpty(bool)
0x3ea: Stack[-1] = (bool) 0
0x3eb: PushEmpty(bool, object)
0x3ec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ed: Call2 0x17a7

0x3ee: Pop(1)
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f0: PushEmpty(bool, object)
0x3f1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f2: Call2 0x17b3

0x3f3: Pop(1)
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f5: Stack[-1] = (bool) 1
0x3f6: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3f7: Push((int) 506872)
0x3f8: Push((int) 7579)
0x3f9: Push((int) 7578)
0x3fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fb: Pop(3)
0x3fc: Push((int) 507531)
0x3fd: Push((int) -1)
0x3fe: Push((int) 8313)
0x3ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x400: Pop(3)
0x401: GOTO 0x404

0x402: Return(); Pop(0)

0x403: GOTO 0x392

0x404: PushEmpty(bool)
0x405: Call2 0x164c

0x406: Pop(0)
0x407: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x408: @ lshWaitForAnimEnd()
0x409: Pop(0)
0x40a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x40b: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40c: GOTO 0x412

0x40d: PushEmpty(string)
0x40e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x40f: Call2 0x1570

0x410: Pop(1)
0x411: GOTO 0x408

0x412: GOTO 0x421

0x413: Push("all")
0x414: Push("idle")
0x415: @ PlayAnimation(Stack[-2], Stack[-1])
0x416: Pop(2)
0x417: @ WaitForAnimEnd()
0x418: Pop(0)
0x419: Push( Stack[3 + Tasks[-1].StackPointer] )
0x41a: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x41b: GOTO 0x421

0x41c: Push("all")
0x41d: Push("idle")
0x41e: @ PlayAnimation(Stack[-2], Stack[-1])
0x41f: Pop(2)
0x420: GOTO 0x417

0x421: Return(); Pop(0)

0x422: PushEmpty()
0x423: PushEmpty(bool)
0x424: Call2 0x164c

0x425: Pop(0)
0x426: Pop(1); Push((bool) Stack[-1] == 0)
0x427: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x428: Return(); Pop(0)

0x429: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x42a: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x42b: Return(); Pop(0)

0x42c: PushEmpty(string, bool)
0x42d: Stack[-2] = Stack[-3]
0x42e: Push("")
0x42f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x430: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x431: Stack[-1] = (bool) 0
0x432: GOTO 0x434

0x433: Stack[-1] = (bool) 1
0x434: Call2 0x1580

0x435: Pop(2)
0x436: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x437: Return(); Pop(0)

0x438: PushEmpty()
0x439: Push((int) 1)
0x43a: IF (Stack[-1] == 0) GOTO 0x7fa; Pop(1)

0x43b: PushEmpty()
0x43c: Call2 0x159e

0x43d: Pop(0)
0x43e: Push((int) 7899)
0x43f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x441: PushEmpty(object, object)
0x442: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x443: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x444: Call2 0x1674

0x445: Pop(2)
0x446: PushEmpty(object, object)
0x447: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x448: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x449: Call2 0x16a9

0x44a: Pop(2)
0x44b: PushEmpty(object, object)
0x44c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x44d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x44e: Call2 0x172a

0x44f: Pop(2)
0x450: Push((int) 7900)
0x451: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x453: PushEmpty(object, object)
0x454: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x455: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x456: Call2 0x1674

0x457: Pop(2)
0x458: PushEmpty(object, object)
0x459: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x45a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x45b: Call2 0x16a9

0x45c: Pop(2)
0x45d: Push((int) 7913)
0x45e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x45f: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x460: PushEmpty(object, object)
0x461: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x462: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x463: Call2 0x1674

0x464: Pop(2)
0x465: Push((int) 7909)
0x466: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x467: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x468: PushEmpty(object, object)
0x469: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x46a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x46b: Call2 0x1674

0x46c: Pop(2)
0x46d: Push((int) 7918)
0x46e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46f: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x470: PushEmpty(object, object)
0x471: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x472: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x473: Call2 0x167a

0x474: Pop(2)
0x475: Push((int) 7919)
0x476: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x477: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x478: PushEmpty(object, object)
0x479: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x47a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x47b: Call2 0x167a

0x47c: Pop(2)
0x47d: Push((int) 7942)
0x47e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47f: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x480: PushEmpty(object, object)
0x481: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x482: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x483: Call2 0x1680

0x484: Pop(2)
0x485: PushEmpty(object, object)
0x486: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x487: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x488: Call2 0x16c0

0x489: Pop(2)
0x48a: PushEmpty(object, object)
0x48b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x48c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x48d: Call2 0x16e5

0x48e: Pop(2)
0x48f: PushEmpty(object, object)
0x490: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x491: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x492: Call2 0x165e

0x493: Pop(2)
0x494: PushEmpty(object, object)
0x495: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x496: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x497: Call2 0x1668

0x498: Pop(2)
0x499: Push((int) 7947)
0x49a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x49b: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x49c: PushEmpty(object, object)
0x49d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x49e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x49f: Call2 0x1680

0x4a0: Pop(2)
0x4a1: PushEmpty(object, object)
0x4a2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a4: Call2 0x16c0

0x4a5: Pop(2)
0x4a6: PushEmpty(object, object)
0x4a7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a9: Call2 0x16e5

0x4aa: Pop(2)
0x4ab: PushEmpty(object, object)
0x4ac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ae: Call2 0x165e

0x4af: Pop(2)
0x4b0: PushEmpty(object, object)
0x4b1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b3: Call2 0x1668

0x4b4: Pop(2)
0x4b5: Push((int) 7948)
0x4b6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4b8: PushEmpty(object, object)
0x4b9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4bb: Call2 0x1686

0x4bc: Pop(2)
0x4bd: PushEmpty(object, object)
0x4be: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c0: Call2 0x16d7

0x4c1: Pop(2)
0x4c2: Push((int) 7949)
0x4c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4c5: PushEmpty(object, object)
0x4c6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c8: Call2 0x1686

0x4c9: Pop(2)
0x4ca: PushEmpty(object, object)
0x4cb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4cc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4cd: Call2 0x16d7

0x4ce: Pop(2)
0x4cf: Push((int) 7950)
0x4d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d2: PushEmpty(object, object)
0x4d3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4d4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d5: Call2 0x168c

0x4d6: Pop(2)
0x4d7: Push((int) 7570)
0x4d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d9: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x4da: PushEmpty(string)
0x4db: Stack[-1] = "Neutral"
0x4dc: Call2 0x422

0x4dd: Pop(1)
0x4de: Push((int) 506864)
0x4df: @@ SetMessage(Stack[-1])
0x4e0: Pop(1)
0x4e1: @@ ClearReplies()
0x4e2: Pop(0)
0x4e3: PushEmpty(bool)
0x4e4: Stack[-1] = (bool) 0
0x4e5: PushEmpty(bool, object)
0x4e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e7: Call2 0x1777

0x4e8: Pop(1)
0x4e9: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4ea: PushEmpty(bool, object)
0x4eb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ec: Call2 0x17bf

0x4ed: Pop(1)
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4ef: Stack[-1] = (bool) 1
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f1: Push((int) 506865)
0x4f2: Push((int) 7572)
0x4f3: Push((int) 7571)
0x4f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f5: Pop(3)
0x4f6: PushEmpty(bool)
0x4f7: Stack[-1] = (bool) 0
0x4f8: PushEmpty(bool, object)
0x4f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4fa: Call2 0x1783

0x4fb: Pop(1)
0x4fc: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x4fd: PushEmpty(bool, object)
0x4fe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ff: Call2 0x17cb

0x500: Pop(1)
0x501: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x502: Stack[-1] = (bool) 1
0x503: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x504: Push((int) 506868)
0x505: Push((int) 7575)
0x506: Push((int) 7574)
0x507: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x508: Pop(3)
0x509: PushEmpty(bool)
0x50a: Stack[-1] = (bool) 0
0x50b: PushEmpty(bool, object)
0x50c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x50d: Call2 0x178f

0x50e: Pop(1)
0x50f: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x510: PushEmpty(bool, object)
0x511: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x512: Call2 0x17d7

0x513: Pop(1)
0x514: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x515: Stack[-1] = (bool) 1
0x516: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x517: Push((int) 506870)
0x518: Push((int) 7577)
0x519: Push((int) 7576)
0x51a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51b: Pop(3)
0x51c: PushEmpty(bool)
0x51d: Stack[-1] = (bool) 0
0x51e: PushEmpty(bool, object)
0x51f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x520: Call2 0x179b

0x521: Pop(1)
0x522: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x523: PushEmpty(bool, object)
0x524: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x525: Call2 0x17e3

0x526: Pop(1)
0x527: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x528: Stack[-1] = (bool) 1
0x529: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x52a: Push((int) 506874)
0x52b: Push((int) 7581)
0x52c: Push((int) 7580)
0x52d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52e: Pop(3)
0x52f: PushEmpty(bool)
0x530: Stack[-1] = (bool) 0
0x531: PushEmpty(bool, object)
0x532: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x533: Call2 0x17a7

0x534: Pop(1)
0x535: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x536: PushEmpty(bool, object)
0x537: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x538: Call2 0x17b3

0x539: Pop(1)
0x53a: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x53b: Stack[-1] = (bool) 1
0x53c: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x53d: Push((int) 506872)
0x53e: Push((int) 7579)
0x53f: Push((int) 7578)
0x540: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x541: Pop(3)
0x542: Push((int) 507531)
0x543: Push((int) -1)
0x544: Push((int) 8313)
0x545: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x546: Pop(3)
0x547: Return(); Pop(0)

0x548: Push((int) 26389)
0x549: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54a: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x54b: Push((int) 26402)
0x54c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54d: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x54e: PushEmpty(string)
0x54f: Stack[-1] = "Smile"
0x550: Call2 0x422

0x551: Pop(1)
0x552: Push((int) 525049)
0x553: @@ SetMessage(Stack[-1])
0x554: Pop(1)
0x555: @@ ClearReplies()
0x556: Pop(0)
0x557: Push((int) 525050)
0x558: Push((int) 26391)
0x559: Push((int) 26403)
0x55a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55b: Pop(3)
0x55c: Return(); Pop(0)

0x55d: Push((int) 26391)
0x55e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x55f: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x560: PushEmpty(string)
0x561: Stack[-1] = "Smile"
0x562: Call2 0x422

0x563: Pop(1)
0x564: Push((int) 525038)
0x565: @@ SetMessage(Stack[-1])
0x566: Pop(1)
0x567: @@ ClearReplies()
0x568: Pop(0)
0x569: Push((int) 525039)
0x56a: Push((int) 26393)
0x56b: Push((int) 26392)
0x56c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56d: Pop(3)
0x56e: Push((int) 525042)
0x56f: Push((int) 26396)
0x570: Push((int) 26395)
0x571: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x572: Pop(3)
0x573: Return(); Pop(0)

0x574: Push((int) 26396)
0x575: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x576: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x577: PushEmpty(string)
0x578: Stack[-1] = "Neutral"
0x579: Call2 0x422

0x57a: Pop(1)
0x57b: Push((int) 525043)
0x57c: @@ SetMessage(Stack[-1])
0x57d: Pop(1)
0x57e: @@ ClearReplies()
0x57f: Pop(0)
0x580: Push((int) 525044)
0x581: Push((int) 26398)
0x582: Push((int) 26397)
0x583: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x584: Pop(3)
0x585: Push((int) 525047)
0x586: Push((int) -1)
0x587: Push((int) 26400)
0x588: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x589: Pop(3)
0x58a: Return(); Pop(0)

0x58b: Push((int) 26398)
0x58c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58d: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x58e: PushEmpty(string)
0x58f: Stack[-1] = "Neutral"
0x590: Call2 0x422

0x591: Pop(1)
0x592: Push((int) 525045)
0x593: @@ SetMessage(Stack[-1])
0x594: Pop(1)
0x595: @@ ClearReplies()
0x596: Pop(0)
0x597: Push((int) 525046)
0x598: Push((int) -1)
0x599: Push((int) 26399)
0x59a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59b: Pop(3)
0x59c: Return(); Pop(0)

0x59d: Push((int) 26393)
0x59e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59f: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5a0: PushEmpty(string)
0x5a1: Stack[-1] = "Smile"
0x5a2: Call2 0x422

0x5a3: Pop(1)
0x5a4: Push((int) 525040)
0x5a5: @@ SetMessage(Stack[-1])
0x5a6: Pop(1)
0x5a7: @@ ClearReplies()
0x5a8: Pop(0)
0x5a9: Push((int) 525041)
0x5aa: Push((int) -1)
0x5ab: Push((int) 26394)
0x5ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ad: Pop(3)
0x5ae: Return(); Pop(0)

0x5af: Push((int) 10095)
0x5b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b1: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5b2: Push((int) 10111)
0x5b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b4: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5b5: PushEmpty(string)
0x5b6: Stack[-1] = "Grin"
0x5b7: Call2 0x422

0x5b8: Pop(1)
0x5b9: Push((int) 509217)
0x5ba: @@ SetMessage(Stack[-1])
0x5bb: Pop(1)
0x5bc: @@ ClearReplies()
0x5bd: Pop(0)
0x5be: Push((int) 509218)
0x5bf: Push((int) 10097)
0x5c0: Push((int) 10112)
0x5c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c2: Pop(3)
0x5c3: Return(); Pop(0)

0x5c4: Push((int) 10097)
0x5c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c6: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5c7: PushEmpty(string)
0x5c8: Stack[-1] = "Grin"
0x5c9: Call2 0x422

0x5ca: Pop(1)
0x5cb: Push((int) 509205)
0x5cc: @@ SetMessage(Stack[-1])
0x5cd: Pop(1)
0x5ce: @@ ClearReplies()
0x5cf: Pop(0)
0x5d0: Push((int) 509206)
0x5d1: Push((int) 10099)
0x5d2: Push((int) 10098)
0x5d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d4: Pop(3)
0x5d5: Push((int) 509210)
0x5d6: Push((int) 10103)
0x5d7: Push((int) 10102)
0x5d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d9: Pop(3)
0x5da: Return(); Pop(0)

0x5db: Push((int) 10103)
0x5dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5dd: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5de: PushEmpty(string)
0x5df: Stack[-1] = "Smile"
0x5e0: Call2 0x422

0x5e1: Pop(1)
0x5e2: Push((int) 509211)
0x5e3: @@ SetMessage(Stack[-1])
0x5e4: Pop(1)
0x5e5: @@ ClearReplies()
0x5e6: Pop(0)
0x5e7: Push((int) 509212)
0x5e8: Push((int) 10105)
0x5e9: Push((int) 10104)
0x5ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5eb: Pop(3)
0x5ec: Push((int) 509215)
0x5ed: Push((int) 10099)
0x5ee: Push((int) 10108)
0x5ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f0: Pop(3)
0x5f1: Return(); Pop(0)

0x5f2: Push((int) 10105)
0x5f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f4: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x5f5: PushEmpty(string)
0x5f6: Stack[-1] = "Neutral"
0x5f7: Call2 0x422

0x5f8: Pop(1)
0x5f9: Push((int) 509213)
0x5fa: @@ SetMessage(Stack[-1])
0x5fb: Pop(1)
0x5fc: @@ ClearReplies()
0x5fd: Pop(0)
0x5fe: Push((int) 509214)
0x5ff: Push((int) 10099)
0x600: Push((int) 10106)
0x601: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x602: Pop(3)
0x603: Return(); Pop(0)

0x604: Push((int) 10099)
0x605: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x606: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x607: PushEmpty(string)
0x608: Stack[-1] = "Grin"
0x609: Call2 0x422

0x60a: Pop(1)
0x60b: Push((int) 509207)
0x60c: @@ SetMessage(Stack[-1])
0x60d: Pop(1)
0x60e: @@ ClearReplies()
0x60f: Pop(0)
0x610: Push((int) 509208)
0x611: Push((int) -1)
0x612: Push((int) 10100)
0x613: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x614: Pop(3)
0x615: Push((int) 509209)
0x616: Push((int) -1)
0x617: Push((int) 10101)
0x618: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x619: Pop(3)
0x61a: Return(); Pop(0)

0x61b: Push((int) 7579)
0x61c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61d: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x61e: PushEmpty(string)
0x61f: Stack[-1] = "Neutral"
0x620: Call2 0x422

0x621: Pop(1)
0x622: Push((int) 506873)
0x623: @@ SetMessage(Stack[-1])
0x624: Pop(1)
0x625: @@ ClearReplies()
0x626: Pop(0)
0x627: Push((int) 507214)
0x628: Push((int) -1)
0x629: Push((int) 7950)
0x62a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62b: Pop(3)
0x62c: Return(); Pop(0)

0x62d: Push((int) 7581)
0x62e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62f: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x630: PushEmpty(string)
0x631: Stack[-1] = "Neutral"
0x632: Call2 0x422

0x633: Pop(1)
0x634: Push((int) 506875)
0x635: @@ SetMessage(Stack[-1])
0x636: Pop(1)
0x637: @@ ClearReplies()
0x638: Pop(0)
0x639: Push((int) 507212)
0x63a: Push((int) -1)
0x63b: Push((int) 7948)
0x63c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63d: Pop(3)
0x63e: Push((int) 507213)
0x63f: Push((int) -1)
0x640: Push((int) 7949)
0x641: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x642: Pop(3)
0x643: Return(); Pop(0)

0x644: Push((int) 7577)
0x645: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x646: IF (Stack[-1] == 0) GOTO 0x660; Pop(1)

0x647: PushEmpty(string)
0x648: Stack[-1] = "Untrust"
0x649: Call2 0x422

0x64a: Pop(1)
0x64b: Push((int) 506871)
0x64c: @@ SetMessage(Stack[-1])
0x64d: Pop(1)
0x64e: @@ ClearReplies()
0x64f: Pop(0)
0x650: Push((int) 507192)
0x651: Push((int) 7926)
0x652: Push((int) 7924)
0x653: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x654: Pop(3)
0x655: Push((int) 507193)
0x656: Push((int) 7926)
0x657: Push((int) 7925)
0x658: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x659: Pop(3)
0x65a: Push((int) 507195)
0x65b: Push((int) 7928)
0x65c: Push((int) 7927)
0x65d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65e: Pop(3)
0x65f: Return(); Pop(0)

0x660: Push((int) 7928)
0x661: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x662: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x663: PushEmpty(string)
0x664: Stack[-1] = "Neutral"
0x665: Call2 0x422

0x666: Pop(1)
0x667: Push((int) 507196)
0x668: @@ SetMessage(Stack[-1])
0x669: Pop(1)
0x66a: @@ ClearReplies()
0x66b: Pop(0)
0x66c: Push((int) 507197)
0x66d: Push((int) 7926)
0x66e: Push((int) 7929)
0x66f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x670: Pop(3)
0x671: Return(); Pop(0)

0x672: Push((int) 7926)
0x673: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x674: IF (Stack[-1] == 0) GOTO 0x694; Pop(1)

0x675: PushEmpty(string)
0x676: Stack[-1] = "Untrust"
0x677: Call2 0x422

0x678: Pop(1)
0x679: Push((int) 507194)
0x67a: @@ SetMessage(Stack[-1])
0x67b: Pop(1)
0x67c: @@ ClearReplies()
0x67d: Pop(0)
0x67e: PushEmpty(bool, object)
0x67f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x680: Call2 0x17ef

0x681: Pop(1)
0x682: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x683: Push((int) 507198)
0x684: Push((int) 7932)
0x685: Push((int) 7931)
0x686: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x687: Pop(3)
0x688: PushEmpty(bool, object)
0x689: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68a: Call2 0x17ef

0x68b: Pop(1)
0x68c: Pop(1); Push((bool) Stack[-1] == 0)
0x68d: IF (Stack[-1] == 0) GOTO 0x693; Pop(1)

0x68e: Push((int) 507200)
0x68f: Push((int) 7935)
0x690: Push((int) 7934)
0x691: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x692: Pop(3)
0x693: Return(); Pop(0)

0x694: Push((int) 7935)
0x695: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x696: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x697: PushEmpty(string)
0x698: Stack[-1] = "Neutral"
0x699: Call2 0x422

0x69a: Pop(1)
0x69b: Push((int) 507201)
0x69c: @@ SetMessage(Stack[-1])
0x69d: Pop(1)
0x69e: @@ ClearReplies()
0x69f: Pop(0)
0x6a0: Push((int) 507202)
0x6a1: Push((int) 7932)
0x6a2: Push((int) 7936)
0x6a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a4: Pop(3)
0x6a5: Return(); Pop(0)

0x6a6: Push((int) 7932)
0x6a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a8: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6a9: PushEmpty(string)
0x6aa: Stack[-1] = "Untrust"
0x6ab: Call2 0x422

0x6ac: Pop(1)
0x6ad: Push((int) 507199)
0x6ae: @@ SetMessage(Stack[-1])
0x6af: Pop(1)
0x6b0: @@ ClearReplies()
0x6b1: Pop(0)
0x6b2: Push((int) 507203)
0x6b3: Push((int) 7939)
0x6b4: Push((int) 7938)
0x6b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b6: Pop(3)
0x6b7: Push((int) 507208)
0x6b8: Push((int) 7944)
0x6b9: Push((int) 7943)
0x6ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bb: Pop(3)
0x6bc: Return(); Pop(0)

0x6bd: Push((int) 7944)
0x6be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6bf: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6c0: PushEmpty(string)
0x6c1: Stack[-1] = "Neutral"
0x6c2: Call2 0x422

0x6c3: Pop(1)
0x6c4: Push((int) 507209)
0x6c5: @@ SetMessage(Stack[-1])
0x6c6: Pop(1)
0x6c7: @@ ClearReplies()
0x6c8: Pop(0)
0x6c9: Push((int) 507210)
0x6ca: Push((int) 7939)
0x6cb: Push((int) 7945)
0x6cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cd: Pop(3)
0x6ce: Return(); Pop(0)

0x6cf: Push((int) 7939)
0x6d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d1: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6d2: PushEmpty(string)
0x6d3: Stack[-1] = "Neutral"
0x6d4: Call2 0x422

0x6d5: Pop(1)
0x6d6: Push((int) 507204)
0x6d7: @@ SetMessage(Stack[-1])
0x6d8: Pop(1)
0x6d9: @@ ClearReplies()
0x6da: Pop(0)
0x6db: Push((int) 507205)
0x6dc: Push((int) 7941)
0x6dd: Push((int) 7940)
0x6de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6df: Pop(3)
0x6e0: Push((int) 507211)
0x6e1: Push((int) -1)
0x6e2: Push((int) 7947)
0x6e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e4: Pop(3)
0x6e5: Return(); Pop(0)

0x6e6: Push((int) 7941)
0x6e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e8: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6e9: PushEmpty(string)
0x6ea: Stack[-1] = "Neutral"
0x6eb: Call2 0x422

0x6ec: Pop(1)
0x6ed: Push((int) 507206)
0x6ee: @@ SetMessage(Stack[-1])
0x6ef: Pop(1)
0x6f0: @@ ClearReplies()
0x6f1: Pop(0)
0x6f2: Push((int) 507207)
0x6f3: Push((int) -1)
0x6f4: Push((int) 7942)
0x6f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f6: Pop(3)
0x6f7: Return(); Pop(0)

0x6f8: Push((int) 7575)
0x6f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6fa: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x6fb: PushEmpty(object, object)
0x6fc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6fd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6fe: Call2 0x1692

0x6ff: Pop(2)
0x700: PushEmpty(string)
0x701: Stack[-1] = "What"
0x702: Call2 0x422

0x703: Pop(1)
0x704: Push((int) 506869)
0x705: @@ SetMessage(Stack[-1])
0x706: Pop(1)
0x707: @@ ClearReplies()
0x708: Pop(0)
0x709: Push((int) 507183)
0x70a: Push((int) 7915)
0x70b: Push((int) 7914)
0x70c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70d: Pop(3)
0x70e: Return(); Pop(0)

0x70f: Push((int) 7915)
0x710: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x711: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x712: PushEmpty(string)
0x713: Stack[-1] = "What"
0x714: Call2 0x422

0x715: Pop(1)
0x716: Push((int) 507184)
0x717: @@ SetMessage(Stack[-1])
0x718: Pop(1)
0x719: @@ ClearReplies()
0x71a: Pop(0)
0x71b: Push((int) 507185)
0x71c: Push((int) 7917)
0x71d: Push((int) 7916)
0x71e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71f: Pop(3)
0x720: Push((int) 507189)
0x721: Push((int) 7921)
0x722: Push((int) 7920)
0x723: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x724: Pop(3)
0x725: Return(); Pop(0)

0x726: Push((int) 7921)
0x727: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x728: IF (Stack[-1] == 0) GOTO 0x738; Pop(1)

0x729: PushEmpty(string)
0x72a: Stack[-1] = "Neutral"
0x72b: Call2 0x422

0x72c: Pop(1)
0x72d: Push((int) 507190)
0x72e: @@ SetMessage(Stack[-1])
0x72f: Pop(1)
0x730: @@ ClearReplies()
0x731: Pop(0)
0x732: Push((int) 507191)
0x733: Push((int) 7917)
0x734: Push((int) 7922)
0x735: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x736: Pop(3)
0x737: Return(); Pop(0)

0x738: Push((int) 7917)
0x739: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73a: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x73b: PushEmpty(string)
0x73c: Stack[-1] = "Neutral"
0x73d: Call2 0x422

0x73e: Pop(1)
0x73f: Push((int) 507186)
0x740: @@ SetMessage(Stack[-1])
0x741: Pop(1)
0x742: @@ ClearReplies()
0x743: Pop(0)
0x744: Push((int) 507187)
0x745: Push((int) -1)
0x746: Push((int) 7918)
0x747: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x748: Pop(3)
0x749: Push((int) 507188)
0x74a: Push((int) -1)
0x74b: Push((int) 7919)
0x74c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74d: Pop(3)
0x74e: Return(); Pop(0)

0x74f: Push((int) 7572)
0x750: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x751: IF (Stack[-1] == 0) GOTO 0x761; Pop(1)

0x752: PushEmpty(string)
0x753: Stack[-1] = "Neutral"
0x754: Call2 0x422

0x755: Pop(1)
0x756: Push((int) 506866)
0x757: @@ SetMessage(Stack[-1])
0x758: Pop(1)
0x759: @@ ClearReplies()
0x75a: Pop(0)
0x75b: Push((int) 506867)
0x75c: Push((int) 7894)
0x75d: Push((int) 7573)
0x75e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75f: Pop(3)
0x760: Return(); Pop(0)

0x761: Push((int) 7901)
0x762: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x763: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x764: Push((int) 7903)
0x765: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x766: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x767: PushEmpty(string)
0x768: Stack[-1] = "Grin"
0x769: Call2 0x422

0x76a: Pop(1)
0x76b: Push((int) 507174)
0x76c: @@ SetMessage(Stack[-1])
0x76d: Pop(1)
0x76e: @@ ClearReplies()
0x76f: Pop(0)
0x770: Push((int) 507175)
0x771: Push((int) 7896)
0x772: Push((int) 7904)
0x773: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x774: Pop(3)
0x775: Push((int) 533672)
0x776: Push((int) 7896)
0x777: Push((int) 35207)
0x778: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x779: Pop(3)
0x77a: Return(); Pop(0)

0x77b: Push((int) 7894)
0x77c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x77d: IF (Stack[-1] == 0) GOTO 0x797; Pop(1)

0x77e: PushEmpty(object, object)
0x77f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x780: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x781: Call2 0x1692

0x782: Pop(2)
0x783: PushEmpty(string)
0x784: Stack[-1] = "What"
0x785: Call2 0x422

0x786: Pop(1)
0x787: Push((int) 507165)
0x788: @@ SetMessage(Stack[-1])
0x789: Pop(1)
0x78a: @@ ClearReplies()
0x78b: Pop(0)
0x78c: Push((int) 507166)
0x78d: Push((int) 7896)
0x78e: Push((int) 7895)
0x78f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x790: Pop(3)
0x791: Push((int) 507176)
0x792: Push((int) 7907)
0x793: Push((int) 7906)
0x794: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x795: Pop(3)
0x796: Return(); Pop(0)

0x797: Push((int) 7907)
0x798: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x799: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x79a: PushEmpty(string)
0x79b: Stack[-1] = "Smile"
0x79c: Call2 0x422

0x79d: Pop(1)
0x79e: Push((int) 507177)
0x79f: @@ SetMessage(Stack[-1])
0x7a0: Pop(1)
0x7a1: @@ ClearReplies()
0x7a2: Pop(0)
0x7a3: Push((int) 507178)
0x7a4: Push((int) 7910)
0x7a5: Push((int) 7908)
0x7a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a7: Pop(3)
0x7a8: Push((int) 507179)
0x7a9: Push((int) -1)
0x7aa: Push((int) 7909)
0x7ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ac: Pop(3)
0x7ad: Return(); Pop(0)

0x7ae: Push((int) 7910)
0x7af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b0: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7b1: PushEmpty(string)
0x7b2: Stack[-1] = "What"
0x7b3: Call2 0x422

0x7b4: Pop(1)
0x7b5: Push((int) 507180)
0x7b6: @@ SetMessage(Stack[-1])
0x7b7: Pop(1)
0x7b8: @@ ClearReplies()
0x7b9: Pop(0)
0x7ba: Push((int) 507181)
0x7bb: Push((int) 7896)
0x7bc: Push((int) 7911)
0x7bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7be: Pop(3)
0x7bf: Push((int) 507182)
0x7c0: Push((int) -1)
0x7c1: Push((int) 7913)
0x7c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c3: Pop(3)
0x7c4: Return(); Pop(0)

0x7c5: Push((int) 7896)
0x7c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c7: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7c8: PushEmpty(string)
0x7c9: Stack[-1] = "What"
0x7ca: Call2 0x422

0x7cb: Pop(1)
0x7cc: Push((int) 507167)
0x7cd: @@ SetMessage(Stack[-1])
0x7ce: Pop(1)
0x7cf: @@ ClearReplies()
0x7d0: Pop(0)
0x7d1: Push((int) 507168)
0x7d2: Push((int) 7898)
0x7d3: Push((int) 7897)
0x7d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d5: Pop(3)
0x7d6: Return(); Pop(0)

0x7d7: Push((int) 7898)
0x7d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d9: IF (Stack[-1] == 0) GOTO 0x7ee; Pop(1)

0x7da: PushEmpty(string)
0x7db: Stack[-1] = "Neutral"
0x7dc: Call2 0x422

0x7dd: Pop(1)
0x7de: Push((int) 507169)
0x7df: @@ SetMessage(Stack[-1])
0x7e0: Pop(1)
0x7e1: @@ ClearReplies()
0x7e2: Pop(0)
0x7e3: Push((int) 507170)
0x7e4: Push((int) -1)
0x7e5: Push((int) 7899)
0x7e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e7: Pop(3)
0x7e8: Push((int) 507171)
0x7e9: Push((int) -1)
0x7ea: Push((int) 7900)
0x7eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ec: Pop(3)
0x7ed: Return(); Pop(0)

0x7ee: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7ef: PushEmpty(bool)
0x7f0: Call2 0x164c

0x7f1: Pop(0)
0x7f2: IF (Stack[-1] == 0) GOTO 0x7f6; Pop(1)

0x7f3: @ lshStopAnimation()
0x7f4: Pop(0)
0x7f5: GOTO 0x7f8

0x7f6: @ StopAnimation()
0x7f7: Pop(0)
0x7f8: Return(); Pop(0)

0x7f9: GOTO 0x439

0x7fa: Return(); Pop(0)

0x7fb: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x7fc: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x7fd: PushEmpty(bool, object, float)
0x7fe: Stack[-2] = Stack[-12]
0x7ff: Stack[-1] = (float) 70.0
0x800: Call2 0x1491

0x801: Pop(2)
0x802: Pop(1); Push((bool) Stack[-1] == 0)
0x803: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x804: Stack[-10] = (int) -2
0x805: Return(); Pop(8)

0x806: @ CreateDialog(Stack[-4])
0x807: Pop(0)
0x808: PushEmpty(int)
0x809: Call2 0x1646

0x80a: Pop(0)
0x80b: @@ SetNPCName(Stack[-1])
0x80c: Pop(1)
0x80d: PushEmpty(int)
0x80e: Call2 0x1644

0x80f: Pop(0)
0x810: @@ SetNPCDescription(Stack[-1])
0x811: Pop(1)
0x812: PushEmpty(string)
0x813: Call2 0x1648

0x814: Pop(0)
0x815: @@ SetPhoto(Stack[-1])
0x816: Pop(1)
0x817: PushEmpty(string)
0x818: Call2 0x164a

0x819: Pop(0)
0x81a: @@ SetPhoto2(Stack[-1])
0x81b: Pop(1)
0x81c: PushEmpty(int)
0x81d: Call2 0x18f6

0x81e: Pop(0)
0x81f: @@ SetPlayerName(Stack[-1])
0x820: Pop(1)
0x821: Stack[-2] = (int) -1
0x822: @ IsOverrideActive(Stack[-3])
0x823: Pop(0)
0x824: Push(Stack[-3])
0x825: IF (Stack[-1] == 0) GOTO 0x828; Pop(1)

0x826: Stack[-10] = (int) -2
0x827: Return(); Pop(8)

0x828: @ DoDialog(Stack[-4])
0x829: Pop(0)
0x82a: PushEmpty(bool, object)
0x82b: PushEmpty(object)
0x82c: Call2 0x15a5

0x82d: Stack[-2] = Stack[-1]
0x82e: Pop(1)
0x82f: Call2 0x14e6

0x830: Pop(2)
0x831: PushEmpty(object, object)
0x832: Stack[-2] = Stack[-11]
0x833: Stack[-1] = Stack[-6]
0x834: Push(-2, 4); TaskCall(9)
0x835: Call2 0x84c

0x836: Pop(-2, 4); TaskReturn
0x837: Pop(2)
0x838: @@ IsDialogEnd(Stack[-1])
0x839: Pop(0)
0x83a: Pop(0); Push((bool) Stack[-1] == 0)
0x83b: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x83c: @ sync()
0x83d: Pop(0)
0x83e: @@ IsDialogEnd(Stack[-1])
0x83f: Pop(0)
0x840: GOTO 0x83a

0x841: PushEmpty(object)
0x842: Stack[-1] = Stack[-10]
0x843: Call2 0x14d5

0x844: Pop(1)
0x845: @ StopDialog(Stack[-4])
0x846: Pop(0)
0x847: @@ GetReturnValue(Stack[-2])
0x848: Pop(0)
0x849: Stack[-10] = Stack[-2]
0x84a: Return(); Pop(8)

0x84b: Stack[-4] = 0
0x84c: PushEmpty()
0x84d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x84e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x84f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x850: Push((int) 1)
0x851: IF (Stack[-1] == 0) GOTO 0x87b; Pop(1)

0x852: PushEmpty(string)
0x853: Stack[-1] = "Neutral"
0x854: Call2 0x899

0x855: Pop(1)
0x856: Push((int) 509762)
0x857: @@ SetMessage(Stack[-1])
0x858: Pop(1)
0x859: @@ ClearReplies()
0x85a: Pop(0)
0x85b: PushEmpty(bool)
0x85c: Stack[-1] = (bool) 0
0x85d: PushEmpty(bool, object)
0x85e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85f: Call2 0x1837

0x860: Pop(1)
0x861: IF (Stack[-1] == 0) GOTO 0x868; Pop(1)

0x862: PushEmpty(bool, object)
0x863: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x864: Call2 0x1746

0x865: Pop(1)
0x866: IF (Stack[-1] == 0) GOTO 0x868; Pop(1)

0x867: Stack[-1] = (bool) 1
0x868: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x869: Push((int) 509763)
0x86a: Push((int) 10732)
0x86b: Push((int) 10753)
0x86c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86d: Pop(3)
0x86e: Push((int) 533793)
0x86f: Push((int) -1)
0x870: Push((int) 35337)
0x871: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x872: Pop(3)
0x873: Push((int) 535105)
0x874: Push((int) -1)
0x875: Push((int) 36761)
0x876: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x877: Pop(3)
0x878: GOTO 0x87b

0x879: Return(); Pop(0)

0x87a: GOTO 0x850

0x87b: PushEmpty(bool)
0x87c: Call2 0x164c

0x87d: Pop(0)
0x87e: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x87f: @ lshWaitForAnimEnd()
0x880: Pop(0)
0x881: Push( Stack[3 + Tasks[-1].StackPointer] )
0x882: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x883: GOTO 0x889

0x884: PushEmpty(string)
0x885: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x886: Call2 0x1570

0x887: Pop(1)
0x888: GOTO 0x87f

0x889: GOTO 0x898

0x88a: Push("all")
0x88b: Push("idle")
0x88c: @ PlayAnimation(Stack[-2], Stack[-1])
0x88d: Pop(2)
0x88e: @ WaitForAnimEnd()
0x88f: Pop(0)
0x890: Push( Stack[3 + Tasks[-1].StackPointer] )
0x891: IF (Stack[-1] == 0) GOTO 0x893; Pop(1)

0x892: GOTO 0x898

0x893: Push("all")
0x894: Push("idle")
0x895: @ PlayAnimation(Stack[-2], Stack[-1])
0x896: Pop(2)
0x897: GOTO 0x88e

0x898: Return(); Pop(0)

0x899: PushEmpty()
0x89a: PushEmpty(bool)
0x89b: Call2 0x164c

0x89c: Pop(0)
0x89d: Pop(1); Push((bool) Stack[-1] == 0)
0x89e: IF (Stack[-1] == 0) GOTO 0x8a0; Pop(1)

0x89f: Return(); Pop(0)

0x8a0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8a1: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x8a2: Return(); Pop(0)

0x8a3: PushEmpty(string, bool)
0x8a4: Stack[-2] = Stack[-3]
0x8a5: Push("")
0x8a6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8a7: IF (Stack[-1] == 0) GOTO 0x8aa; Pop(1)

0x8a8: Stack[-1] = (bool) 0
0x8a9: GOTO 0x8ab

0x8aa: Stack[-1] = (bool) 1
0x8ab: Call2 0x1580

0x8ac: Pop(2)
0x8ad: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8ae: Return(); Pop(0)

0x8af: PushEmpty()
0x8b0: Push((int) 1)
0x8b1: IF (Stack[-1] == 0) GOTO 0xb73; Pop(1)

0x8b2: PushEmpty()
0x8b3: Call2 0x159e

0x8b4: Pop(0)
0x8b5: Push((int) 10753)
0x8b6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8b7: IF (Stack[-1] == 0) GOTO 0x8bd; Pop(1)

0x8b8: PushEmpty(object, object)
0x8b9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8ba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8bb: Call2 0x173a

0x8bc: Pop(2)
0x8bd: Push((int) 10740)
0x8be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8bf: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c0: PushEmpty(object, object)
0x8c1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8c3: Call2 0x16f5

0x8c4: Pop(2)
0x8c5: PushEmpty(object, object)
0x8c6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8c8: Call2 0x166e

0x8c9: Pop(2)
0x8ca: Push((int) 10752)
0x8cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8cc: IF (Stack[-1] == 0) GOTO 0x8f4; Pop(1)

0x8cd: PushEmpty(string)
0x8ce: Stack[-1] = "Neutral"
0x8cf: Call2 0x899

0x8d0: Pop(1)
0x8d1: Push((int) 509762)
0x8d2: @@ SetMessage(Stack[-1])
0x8d3: Pop(1)
0x8d4: @@ ClearReplies()
0x8d5: Pop(0)
0x8d6: PushEmpty(bool)
0x8d7: Stack[-1] = (bool) 0
0x8d8: PushEmpty(bool, object)
0x8d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8da: Call2 0x1837

0x8db: Pop(1)
0x8dc: IF (Stack[-1] == 0) GOTO 0x8e3; Pop(1)

0x8dd: PushEmpty(bool, object)
0x8de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8df: Call2 0x1746

0x8e0: Pop(1)
0x8e1: IF (Stack[-1] == 0) GOTO 0x8e3; Pop(1)

0x8e2: Stack[-1] = (bool) 1
0x8e3: IF (Stack[-1] == 0) GOTO 0x8e9; Pop(1)

0x8e4: Push((int) 509763)
0x8e5: Push((int) 10732)
0x8e6: Push((int) 10753)
0x8e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e8: Pop(3)
0x8e9: Push((int) 533793)
0x8ea: Push((int) -1)
0x8eb: Push((int) 35337)
0x8ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ed: Pop(3)
0x8ee: Push((int) 535105)
0x8ef: Push((int) -1)
0x8f0: Push((int) 36761)
0x8f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f2: Pop(3)
0x8f3: Return(); Pop(0)

0x8f4: Push((int) 35327)
0x8f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f6: IF (Stack[-1] == 0) GOTO 0x8f7; Pop(1)

0x8f7: Push((int) 35329)
0x8f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f9: IF (Stack[-1] == 0) GOTO 0x913; Pop(1)

0x8fa: PushEmpty(string)
0x8fb: Stack[-1] = "What"
0x8fc: Call2 0x899

0x8fd: Pop(1)
0x8fe: Push((int) 533785)
0x8ff: @@ SetMessage(Stack[-1])
0x900: Pop(1)
0x901: @@ ClearReplies()
0x902: Pop(0)
0x903: Push((int) 533786)
0x904: Push((int) -1)
0x905: Push((int) 35330)
0x906: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x907: Pop(3)
0x908: Push((int) 533787)
0x909: Push((int) 35332)
0x90a: Push((int) 35331)
0x90b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90c: Pop(3)
0x90d: Push((int) 533790)
0x90e: Push((int) 35335)
0x90f: Push((int) 35334)
0x910: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x911: Pop(3)
0x912: Return(); Pop(0)

0x913: Push((int) 35335)
0x914: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x915: IF (Stack[-1] == 0) GOTO 0x925; Pop(1)

0x916: PushEmpty(string)
0x917: Stack[-1] = "Neutral"
0x918: Call2 0x899

0x919: Pop(1)
0x91a: Push((int) 533791)
0x91b: @@ SetMessage(Stack[-1])
0x91c: Pop(1)
0x91d: @@ ClearReplies()
0x91e: Pop(0)
0x91f: Push((int) 533792)
0x920: Push((int) -1)
0x921: Push((int) 35336)
0x922: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x923: Pop(3)
0x924: Return(); Pop(0)

0x925: Push((int) 35332)
0x926: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x927: IF (Stack[-1] == 0) GOTO 0x937; Pop(1)

0x928: PushEmpty(string)
0x929: Stack[-1] = "Neutral"
0x92a: Call2 0x899

0x92b: Pop(1)
0x92c: Push((int) 533788)
0x92d: @@ SetMessage(Stack[-1])
0x92e: Pop(1)
0x92f: @@ ClearReplies()
0x930: Pop(0)
0x931: Push((int) 533789)
0x932: Push((int) -1)
0x933: Push((int) 35333)
0x934: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x935: Pop(3)
0x936: Return(); Pop(0)

0x937: Push((int) 35305)
0x938: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x939: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x93a: Push((int) 35315)
0x93b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93c: IF (Stack[-1] == 0) GOTO 0x951; Pop(1)

0x93d: PushEmpty(string)
0x93e: Stack[-1] = "Grin"
0x93f: Call2 0x899

0x940: Pop(1)
0x941: Push((int) 533773)
0x942: @@ SetMessage(Stack[-1])
0x943: Pop(1)
0x944: @@ ClearReplies()
0x945: Pop(0)
0x946: Push((int) 533774)
0x947: Push((int) 35317)
0x948: Push((int) 35316)
0x949: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94a: Pop(3)
0x94b: Push((int) 533778)
0x94c: Push((int) 35323)
0x94d: Push((int) 35322)
0x94e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94f: Pop(3)
0x950: Return(); Pop(0)

0x951: Push((int) 35323)
0x952: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x953: IF (Stack[-1] == 0) GOTO 0x968; Pop(1)

0x954: PushEmpty(string)
0x955: Stack[-1] = "Grin"
0x956: Call2 0x899

0x957: Pop(1)
0x958: Push((int) 533779)
0x959: @@ SetMessage(Stack[-1])
0x95a: Pop(1)
0x95b: @@ ClearReplies()
0x95c: Pop(0)
0x95d: Push((int) 533780)
0x95e: Push((int) -1)
0x95f: Push((int) 35324)
0x960: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x961: Pop(3)
0x962: Push((int) 533781)
0x963: Push((int) -1)
0x964: Push((int) 35325)
0x965: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x966: Pop(3)
0x967: Return(); Pop(0)

0x968: Push((int) 35317)
0x969: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x96a: IF (Stack[-1] == 0) GOTO 0x97f; Pop(1)

0x96b: PushEmpty(string)
0x96c: Stack[-1] = "Grin"
0x96d: Call2 0x899

0x96e: Pop(1)
0x96f: Push((int) 533775)
0x970: @@ SetMessage(Stack[-1])
0x971: Pop(1)
0x972: @@ ClearReplies()
0x973: Pop(0)
0x974: Push((int) 533776)
0x975: Push((int) 35309)
0x976: Push((int) 35318)
0x977: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x978: Pop(3)
0x979: Push((int) 533777)
0x97a: Push((int) 35309)
0x97b: Push((int) 35320)
0x97c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97d: Pop(3)
0x97e: Return(); Pop(0)

0x97f: Push((int) 35307)
0x980: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x981: IF (Stack[-1] == 0) GOTO 0x991; Pop(1)

0x982: PushEmpty(string)
0x983: Stack[-1] = "Grin"
0x984: Call2 0x899

0x985: Pop(1)
0x986: Push((int) 533765)
0x987: @@ SetMessage(Stack[-1])
0x988: Pop(1)
0x989: @@ ClearReplies()
0x98a: Pop(0)
0x98b: Push((int) 533766)
0x98c: Push((int) 35309)
0x98d: Push((int) 35308)
0x98e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98f: Pop(3)
0x990: Return(); Pop(0)

0x991: Push((int) 35309)
0x992: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x993: IF (Stack[-1] == 0) GOTO 0x9a3; Pop(1)

0x994: PushEmpty(string)
0x995: Stack[-1] = "Grin"
0x996: Call2 0x899

0x997: Pop(1)
0x998: Push((int) 533767)
0x999: @@ SetMessage(Stack[-1])
0x99a: Pop(1)
0x99b: @@ ClearReplies()
0x99c: Pop(0)
0x99d: Push((int) 533768)
0x99e: Push((int) 35311)
0x99f: Push((int) 35310)
0x9a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a1: Pop(3)
0x9a2: Return(); Pop(0)

0x9a3: Push((int) 35311)
0x9a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9a5: IF (Stack[-1] == 0) GOTO 0x9ba; Pop(1)

0x9a6: PushEmpty(string)
0x9a7: Stack[-1] = "Neutral"
0x9a8: Call2 0x899

0x9a9: Pop(1)
0x9aa: Push((int) 533769)
0x9ab: @@ SetMessage(Stack[-1])
0x9ac: Pop(1)
0x9ad: @@ ClearReplies()
0x9ae: Pop(0)
0x9af: Push((int) 533770)
0x9b0: Push((int) -1)
0x9b1: Push((int) 35312)
0x9b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b3: Pop(3)
0x9b4: Push((int) 533771)
0x9b5: Push((int) -1)
0x9b6: Push((int) 35313)
0x9b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b8: Pop(3)
0x9b9: Return(); Pop(0)

0x9ba: Push((int) 35291)
0x9bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9bc: IF (Stack[-1] == 0) GOTO 0x9bd; Pop(1)

0x9bd: Push((int) 35293)
0x9be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9bf: IF (Stack[-1] == 0) GOTO 0x9d4; Pop(1)

0x9c0: PushEmpty(string)
0x9c1: Stack[-1] = "What"
0x9c2: Call2 0x899

0x9c3: Pop(1)
0x9c4: Push((int) 533753)
0x9c5: @@ SetMessage(Stack[-1])
0x9c6: Pop(1)
0x9c7: @@ ClearReplies()
0x9c8: Pop(0)
0x9c9: Push((int) 533754)
0x9ca: Push((int) 35295)
0x9cb: Push((int) 35294)
0x9cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9cd: Pop(3)
0x9ce: Push((int) 533760)
0x9cf: Push((int) 35297)
0x9d0: Push((int) 35300)
0x9d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d2: Pop(3)
0x9d3: Return(); Pop(0)

0x9d4: Push((int) 35295)
0x9d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9d6: IF (Stack[-1] == 0) GOTO 0x9e6; Pop(1)

0x9d7: PushEmpty(string)
0x9d8: Stack[-1] = "What"
0x9d9: Call2 0x899

0x9da: Pop(1)
0x9db: Push((int) 533755)
0x9dc: @@ SetMessage(Stack[-1])
0x9dd: Pop(1)
0x9de: @@ ClearReplies()
0x9df: Pop(0)
0x9e0: Push((int) 533756)
0x9e1: Push((int) 35297)
0x9e2: Push((int) 35296)
0x9e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e4: Pop(3)
0x9e5: Return(); Pop(0)

0x9e6: Push((int) 35297)
0x9e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e8: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9e9: PushEmpty(string)
0x9ea: Stack[-1] = "What"
0x9eb: Call2 0x899

0x9ec: Pop(1)
0x9ed: Push((int) 533757)
0x9ee: @@ SetMessage(Stack[-1])
0x9ef: Pop(1)
0x9f0: @@ ClearReplies()
0x9f1: Pop(0)
0x9f2: Push((int) 533758)
0x9f3: Push((int) -1)
0x9f4: Push((int) 35298)
0x9f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f6: Pop(3)
0x9f7: Push((int) 533759)
0x9f8: Push((int) -1)
0x9f9: Push((int) 35299)
0x9fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fb: Pop(3)
0x9fc: Return(); Pop(0)

0x9fd: Push((int) 35275)
0x9fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ff: IF (Stack[-1] == 0) GOTO 0xa00; Pop(1)

0xa00: Push((int) 35277)
0xa01: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa02: IF (Stack[-1] == 0) GOTO 0xa17; Pop(1)

0xa03: PushEmpty(string)
0xa04: Stack[-1] = "Untrust"
0xa05: Call2 0x899

0xa06: Pop(1)
0xa07: Push((int) 533737)
0xa08: @@ SetMessage(Stack[-1])
0xa09: Pop(1)
0xa0a: @@ ClearReplies()
0xa0b: Pop(0)
0xa0c: Push((int) 533738)
0xa0d: Push((int) 35279)
0xa0e: Push((int) 35278)
0xa0f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa10: Pop(3)
0xa11: Push((int) 533747)
0xa12: Push((int) 35288)
0xa13: Push((int) 35287)
0xa14: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa15: Pop(3)
0xa16: Return(); Pop(0)

0xa17: Push((int) 35288)
0xa18: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa19: IF (Stack[-1] == 0) GOTO 0xa29; Pop(1)

0xa1a: PushEmpty(string)
0xa1b: Stack[-1] = "Untrust"
0xa1c: Call2 0x899

0xa1d: Pop(1)
0xa1e: Push((int) 533748)
0xa1f: @@ SetMessage(Stack[-1])
0xa20: Pop(1)
0xa21: @@ ClearReplies()
0xa22: Pop(0)
0xa23: Push((int) 533749)
0xa24: Push((int) -1)
0xa25: Push((int) 35289)
0xa26: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa27: Pop(3)
0xa28: Return(); Pop(0)

0xa29: Push((int) 35279)
0xa2a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2b: IF (Stack[-1] == 0) GOTO 0xa40; Pop(1)

0xa2c: PushEmpty(string)
0xa2d: Stack[-1] = "Untrust"
0xa2e: Call2 0x899

0xa2f: Pop(1)
0xa30: Push((int) 533739)
0xa31: @@ SetMessage(Stack[-1])
0xa32: Pop(1)
0xa33: @@ ClearReplies()
0xa34: Pop(0)
0xa35: Push((int) 533740)
0xa36: Push((int) 35281)
0xa37: Push((int) 35280)
0xa38: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa39: Pop(3)
0xa3a: Push((int) 533746)
0xa3b: Push((int) -1)
0xa3c: Push((int) 35286)
0xa3d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3e: Pop(3)
0xa3f: Return(); Pop(0)

0xa40: Push((int) 35281)
0xa41: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa42: IF (Stack[-1] == 0) GOTO 0xa57; Pop(1)

0xa43: PushEmpty(string)
0xa44: Stack[-1] = "What"
0xa45: Call2 0x899

0xa46: Pop(1)
0xa47: Push((int) 533741)
0xa48: @@ SetMessage(Stack[-1])
0xa49: Pop(1)
0xa4a: @@ ClearReplies()
0xa4b: Pop(0)
0xa4c: Push((int) 533742)
0xa4d: Push((int) 35283)
0xa4e: Push((int) 35282)
0xa4f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa50: Pop(3)
0xa51: Push((int) 533745)
0xa52: Push((int) -1)
0xa53: Push((int) 35285)
0xa54: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa55: Pop(3)
0xa56: Return(); Pop(0)

0xa57: Push((int) 35283)
0xa58: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa59: IF (Stack[-1] == 0) GOTO 0xa6e; Pop(1)

0xa5a: PushEmpty(string)
0xa5b: Stack[-1] = "What"
0xa5c: Call2 0x899

0xa5d: Pop(1)
0xa5e: Push((int) 533743)
0xa5f: @@ SetMessage(Stack[-1])
0xa60: Pop(1)
0xa61: @@ ClearReplies()
0xa62: Pop(0)
0xa63: Push((int) 533744)
0xa64: Push((int) -1)
0xa65: Push((int) 35284)
0xa66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa67: Pop(3)
0xa68: Push((int) 535141)
0xa69: Push((int) -1)
0xa6a: Push((int) 36802)
0xa6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6c: Pop(3)
0xa6d: Return(); Pop(0)

0xa6e: Push((int) 35249)
0xa6f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa70: IF (Stack[-1] == 0) GOTO 0xa71; Pop(1)

0xa71: Push((int) 35257)
0xa72: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa73: IF (Stack[-1] == 0) GOTO 0xa83; Pop(1)

0xa74: PushEmpty(string)
0xa75: Stack[-1] = "What"
0xa76: Call2 0x899

0xa77: Pop(1)
0xa78: Push((int) 533718)
0xa79: @@ SetMessage(Stack[-1])
0xa7a: Pop(1)
0xa7b: @@ ClearReplies()
0xa7c: Pop(0)
0xa7d: Push((int) 533719)
0xa7e: Push((int) 35259)
0xa7f: Push((int) 35258)
0xa80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa81: Pop(3)
0xa82: Return(); Pop(0)

0xa83: Push((int) 35259)
0xa84: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa85: IF (Stack[-1] == 0) GOTO 0xa9a; Pop(1)

0xa86: PushEmpty(string)
0xa87: Stack[-1] = "What"
0xa88: Call2 0x899

0xa89: Pop(1)
0xa8a: Push((int) 533720)
0xa8b: @@ SetMessage(Stack[-1])
0xa8c: Pop(1)
0xa8d: @@ ClearReplies()
0xa8e: Pop(0)
0xa8f: Push((int) 533721)
0xa90: Push((int) 35261)
0xa91: Push((int) 35260)
0xa92: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa93: Pop(3)
0xa94: Push((int) 535106)
0xa95: Push((int) -1)
0xa96: Push((int) 36762)
0xa97: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa98: Pop(3)
0xa99: Return(); Pop(0)

0xa9a: Push((int) 35261)
0xa9b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9c: IF (Stack[-1] == 0) GOTO 0xaac; Pop(1)

0xa9d: PushEmpty(string)
0xa9e: Stack[-1] = "What"
0xa9f: Call2 0x899

0xaa0: Pop(1)
0xaa1: Push((int) 533722)
0xaa2: @@ SetMessage(Stack[-1])
0xaa3: Pop(1)
0xaa4: @@ ClearReplies()
0xaa5: Pop(0)
0xaa6: Push((int) 533723)
0xaa7: Push((int) -1)
0xaa8: Push((int) 35262)
0xaa9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaaa: Pop(3)
0xaab: Return(); Pop(0)

0xaac: Push((int) 35251)
0xaad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaae: IF (Stack[-1] == 0) GOTO 0xac3; Pop(1)

0xaaf: PushEmpty(string)
0xab0: Stack[-1] = "What"
0xab1: Call2 0x899

0xab2: Pop(1)
0xab3: Push((int) 533712)
0xab4: @@ SetMessage(Stack[-1])
0xab5: Pop(1)
0xab6: @@ ClearReplies()
0xab7: Pop(0)
0xab8: Push((int) 533713)
0xab9: Push((int) -1)
0xaba: Push((int) 35252)
0xabb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xabc: Pop(3)
0xabd: Push((int) 533714)
0xabe: Push((int) 35254)
0xabf: Push((int) 35253)
0xac0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac1: Pop(3)
0xac2: Return(); Pop(0)

0xac3: Push((int) 35254)
0xac4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac5: IF (Stack[-1] == 0) GOTO 0xad5; Pop(1)

0xac6: PushEmpty(string)
0xac7: Stack[-1] = "What"
0xac8: Call2 0x899

0xac9: Pop(1)
0xaca: Push((int) 533715)
0xacb: @@ SetMessage(Stack[-1])
0xacc: Pop(1)
0xacd: @@ ClearReplies()
0xace: Pop(0)
0xacf: Push((int) 533716)
0xad0: Push((int) -1)
0xad1: Push((int) 35255)
0xad2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad3: Pop(3)
0xad4: Return(); Pop(0)

0xad5: Push((int) 10754)
0xad6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad7: IF (Stack[-1] == 0) GOTO 0xad8; Pop(1)

0xad8: Push((int) 10756)
0xad9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xada: IF (Stack[-1] == 0) GOTO 0xaef; Pop(1)

0xadb: PushEmpty(string)
0xadc: Stack[-1] = "Neutral"
0xadd: Call2 0x899

0xade: Pop(1)
0xadf: Push((int) 509766)
0xae0: @@ SetMessage(Stack[-1])
0xae1: Pop(1)
0xae2: @@ ClearReplies()
0xae3: Pop(0)
0xae4: Push((int) 509767)
0xae5: Push((int) -1)
0xae6: Push((int) 10757)
0xae7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae8: Pop(3)
0xae9: Push((int) 509768)
0xaea: Push((int) -1)
0xaeb: Push((int) 10758)
0xaec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaed: Pop(3)
0xaee: Return(); Pop(0)

0xaef: Push((int) 10732)
0xaf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf1: IF (Stack[-1] == 0) GOTO 0xb0b; Pop(1)

0xaf2: PushEmpty(string)
0xaf3: Stack[-1] = "Smile"
0xaf4: Call2 0x899

0xaf5: Pop(1)
0xaf6: Push((int) 509746)
0xaf7: @@ SetMessage(Stack[-1])
0xaf8: Pop(1)
0xaf9: @@ ClearReplies()
0xafa: Pop(0)
0xafb: Push((int) 509747)
0xafc: Push((int) 10734)
0xafd: Push((int) 10733)
0xafe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaff: Pop(3)
0xb00: Push((int) 509757)
0xb01: Push((int) 10734)
0xb02: Push((int) 10744)
0xb03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb04: Pop(3)
0xb05: Push((int) 509758)
0xb06: Push((int) 10747)
0xb07: Push((int) 10746)
0xb08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb09: Pop(3)
0xb0a: Return(); Pop(0)

0xb0b: Push((int) 10747)
0xb0c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb0d: IF (Stack[-1] == 0) GOTO 0xb22; Pop(1)

0xb0e: PushEmpty(string)
0xb0f: Stack[-1] = "Smile"
0xb10: Call2 0x899

0xb11: Pop(1)
0xb12: Push((int) 509759)
0xb13: @@ SetMessage(Stack[-1])
0xb14: Pop(1)
0xb15: @@ ClearReplies()
0xb16: Pop(0)
0xb17: Push((int) 509760)
0xb18: Push((int) 10734)
0xb19: Push((int) 10748)
0xb1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1b: Pop(3)
0xb1c: Push((int) 509761)
0xb1d: Push((int) 10734)
0xb1e: Push((int) 10750)
0xb1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb20: Pop(3)
0xb21: Return(); Pop(0)

0xb22: Push((int) 10734)
0xb23: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb24: IF (Stack[-1] == 0) GOTO 0xb39; Pop(1)

0xb25: PushEmpty(string)
0xb26: Stack[-1] = "What"
0xb27: Call2 0x899

0xb28: Pop(1)
0xb29: Push((int) 509748)
0xb2a: @@ SetMessage(Stack[-1])
0xb2b: Pop(1)
0xb2c: @@ ClearReplies()
0xb2d: Pop(0)
0xb2e: Push((int) 509749)
0xb2f: Push((int) 10736)
0xb30: Push((int) 10735)
0xb31: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb32: Pop(3)
0xb33: Push((int) 509756)
0xb34: Push((int) -1)
0xb35: Push((int) 10743)
0xb36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb37: Pop(3)
0xb38: Return(); Pop(0)

0xb39: Push((int) 10736)
0xb3a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb3b: IF (Stack[-1] == 0) GOTO 0xb50; Pop(1)

0xb3c: PushEmpty(string)
0xb3d: Stack[-1] = "What"
0xb3e: Call2 0x899

0xb3f: Pop(1)
0xb40: Push((int) 509750)
0xb41: @@ SetMessage(Stack[-1])
0xb42: Pop(1)
0xb43: @@ ClearReplies()
0xb44: Pop(0)
0xb45: Push((int) 509751)
0xb46: Push((int) 10738)
0xb47: Push((int) 10737)
0xb48: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb49: Pop(3)
0xb4a: Push((int) 509755)
0xb4b: Push((int) 10738)
0xb4c: Push((int) 10741)
0xb4d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb4e: Pop(3)
0xb4f: Return(); Pop(0)

0xb50: Push((int) 10738)
0xb51: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb52: IF (Stack[-1] == 0) GOTO 0xb67; Pop(1)

0xb53: PushEmpty(string)
0xb54: Stack[-1] = "Grin"
0xb55: Call2 0x899

0xb56: Pop(1)
0xb57: Push((int) 509752)
0xb58: @@ SetMessage(Stack[-1])
0xb59: Pop(1)
0xb5a: @@ ClearReplies()
0xb5b: Pop(0)
0xb5c: Push((int) 509753)
0xb5d: Push((int) -1)
0xb5e: Push((int) 10739)
0xb5f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb60: Pop(3)
0xb61: Push((int) 509754)
0xb62: Push((int) -1)
0xb63: Push((int) 10740)
0xb64: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb65: Pop(3)
0xb66: Return(); Pop(0)

0xb67: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb68: PushEmpty(bool)
0xb69: Call2 0x164c

0xb6a: Pop(0)
0xb6b: IF (Stack[-1] == 0) GOTO 0xb6f; Pop(1)

0xb6c: @ lshStopAnimation()
0xb6d: Pop(0)
0xb6e: GOTO 0xb71

0xb6f: @ StopAnimation()
0xb70: Pop(0)
0xb71: Return(); Pop(0)

0xb72: GOTO 0x8b0

0xb73: Return(); Pop(0)

0xb74: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xb75: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xb76: PushEmpty(bool, object, float)
0xb77: Stack[-2] = Stack[-12]
0xb78: Stack[-1] = (float) 70.0
0xb79: Call2 0x1491

0xb7a: Pop(2)
0xb7b: Pop(1); Push((bool) Stack[-1] == 0)
0xb7c: IF (Stack[-1] == 0) GOTO 0xb7f; Pop(1)

0xb7d: Stack[-10] = (int) -2
0xb7e: Return(); Pop(8)

0xb7f: @ CreateDialog(Stack[-4])
0xb80: Pop(0)
0xb81: PushEmpty(int)
0xb82: Call2 0x1646

0xb83: Pop(0)
0xb84: @@ SetNPCName(Stack[-1])
0xb85: Pop(1)
0xb86: PushEmpty(int)
0xb87: Call2 0x1644

0xb88: Pop(0)
0xb89: @@ SetNPCDescription(Stack[-1])
0xb8a: Pop(1)
0xb8b: PushEmpty(string)
0xb8c: Call2 0x1648

0xb8d: Pop(0)
0xb8e: @@ SetPhoto(Stack[-1])
0xb8f: Pop(1)
0xb90: PushEmpty(string)
0xb91: Call2 0x164a

0xb92: Pop(0)
0xb93: @@ SetPhoto2(Stack[-1])
0xb94: Pop(1)
0xb95: PushEmpty(int)
0xb96: Call2 0x18f6

0xb97: Pop(0)
0xb98: @@ SetPlayerName(Stack[-1])
0xb99: Pop(1)
0xb9a: Stack[-2] = (int) -1
0xb9b: @ IsOverrideActive(Stack[-3])
0xb9c: Pop(0)
0xb9d: Push(Stack[-3])
0xb9e: IF (Stack[-1] == 0) GOTO 0xba1; Pop(1)

0xb9f: Stack[-10] = (int) -2
0xba0: Return(); Pop(8)

0xba1: @ DoDialog(Stack[-4])
0xba2: Pop(0)
0xba3: PushEmpty(bool, object)
0xba4: PushEmpty(object)
0xba5: Call2 0x15a5

0xba6: Stack[-2] = Stack[-1]
0xba7: Pop(1)
0xba8: Call2 0x14e6

0xba9: Pop(2)
0xbaa: PushEmpty(object, object)
0xbab: Stack[-2] = Stack[-11]
0xbac: Stack[-1] = Stack[-6]
0xbad: Push(-2, 4); TaskCall(11)
0xbae: Call2 0xbc5

0xbaf: Pop(-2, 4); TaskReturn
0xbb0: Pop(2)
0xbb1: @@ IsDialogEnd(Stack[-1])
0xbb2: Pop(0)
0xbb3: Pop(0); Push((bool) Stack[-1] == 0)
0xbb4: IF (Stack[-1] == 0) GOTO 0xbba; Pop(1)

0xbb5: @ sync()
0xbb6: Pop(0)
0xbb7: @@ IsDialogEnd(Stack[-1])
0xbb8: Pop(0)
0xbb9: GOTO 0xbb3

0xbba: PushEmpty(object)
0xbbb: Stack[-1] = Stack[-10]
0xbbc: Call2 0x14d5

0xbbd: Pop(1)
0xbbe: @ StopDialog(Stack[-4])
0xbbf: Pop(0)
0xbc0: @@ GetReturnValue(Stack[-2])
0xbc1: Pop(0)
0xbc2: Stack[-10] = Stack[-2]
0xbc3: Return(); Pop(8)

0xbc4: Stack[-4] = 0
0xbc5: PushEmpty()
0xbc6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xbc7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xbc8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xbc9: Push((int) 1)
0xbca: IF (Stack[-1] == 0) GOTO 0xbe1; Pop(1)

0xbcb: PushEmpty(string)
0xbcc: Stack[-1] = "Neutral"
0xbcd: Call2 0xbff

0xbce: Pop(1)
0xbcf: Push((int) 513720)
0xbd0: @@ SetMessage(Stack[-1])
0xbd1: Pop(1)
0xbd2: @@ ClearReplies()
0xbd3: Pop(0)
0xbd4: Push((int) 513722)
0xbd5: Push((int) -1)
0xbd6: Push((int) 14988)
0xbd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd8: Pop(3)
0xbd9: Push((int) 536132)
0xbda: Push((int) -1)
0xbdb: Push((int) 37891)
0xbdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbdd: Pop(3)
0xbde: GOTO 0xbe1

0xbdf: Return(); Pop(0)

0xbe0: GOTO 0xbc9

0xbe1: PushEmpty(bool)
0xbe2: Call2 0x164c

0xbe3: Pop(0)
0xbe4: IF (Stack[-1] == 0) GOTO 0xbf0; Pop(1)

0xbe5: @ lshWaitForAnimEnd()
0xbe6: Pop(0)
0xbe7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbe8: IF (Stack[-1] == 0) GOTO 0xbea; Pop(1)

0xbe9: GOTO 0xbef

0xbea: PushEmpty(string)
0xbeb: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbec: Call2 0x1570

0xbed: Pop(1)
0xbee: GOTO 0xbe5

0xbef: GOTO 0xbfe

0xbf0: Push("all")
0xbf1: Push("idle")
0xbf2: @ PlayAnimation(Stack[-2], Stack[-1])
0xbf3: Pop(2)
0xbf4: @ WaitForAnimEnd()
0xbf5: Pop(0)
0xbf6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbf7: IF (Stack[-1] == 0) GOTO 0xbf9; Pop(1)

0xbf8: GOTO 0xbfe

0xbf9: Push("all")
0xbfa: Push("idle")
0xbfb: @ PlayAnimation(Stack[-2], Stack[-1])
0xbfc: Pop(2)
0xbfd: GOTO 0xbf4

0xbfe: Return(); Pop(0)

0xbff: PushEmpty()
0xc00: PushEmpty(bool)
0xc01: Call2 0x164c

0xc02: Pop(0)
0xc03: Pop(1); Push((bool) Stack[-1] == 0)
0xc04: IF (Stack[-1] == 0) GOTO 0xc06; Pop(1)

0xc05: Return(); Pop(0)

0xc06: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc07: IF (Stack[-1] == 0) GOTO 0xc09; Pop(1)

0xc08: Return(); Pop(0)

0xc09: PushEmpty(string, bool)
0xc0a: Stack[-2] = Stack[-3]
0xc0b: Push("")
0xc0c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc0d: IF (Stack[-1] == 0) GOTO 0xc10; Pop(1)

0xc0e: Stack[-1] = (bool) 0
0xc0f: GOTO 0xc11

0xc10: Stack[-1] = (bool) 1
0xc11: Call2 0x1580

0xc12: Pop(2)
0xc13: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc14: Return(); Pop(0)

0xc15: PushEmpty()
0xc16: Push((int) 1)
0xc17: IF (Stack[-1] == 0) GOTO 0xcc6; Pop(1)

0xc18: PushEmpty()
0xc19: Call2 0x159e

0xc1a: Pop(0)
0xc1b: Push((int) 14986)
0xc1c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1d: IF (Stack[-1] == 0) GOTO 0xc32; Pop(1)

0xc1e: PushEmpty(string)
0xc1f: Stack[-1] = "Neutral"
0xc20: Call2 0xbff

0xc21: Pop(1)
0xc22: Push((int) 513720)
0xc23: @@ SetMessage(Stack[-1])
0xc24: Pop(1)
0xc25: @@ ClearReplies()
0xc26: Pop(0)
0xc27: Push((int) 513722)
0xc28: Push((int) -1)
0xc29: Push((int) 14988)
0xc2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2b: Pop(3)
0xc2c: Push((int) 536132)
0xc2d: Push((int) -1)
0xc2e: Push((int) 37891)
0xc2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc30: Pop(3)
0xc31: Return(); Pop(0)

0xc32: Push((int) 13787)
0xc33: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc34: IF (Stack[-1] == 0) GOTO 0xc35; Pop(1)

0xc35: Push((int) 13812)
0xc36: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc37: IF (Stack[-1] == 0) GOTO 0xc47; Pop(1)

0xc38: PushEmpty(string)
0xc39: Stack[-1] = "Neutral"
0xc3a: Call2 0xbff

0xc3b: Pop(1)
0xc3c: Push((int) 512633)
0xc3d: @@ SetMessage(Stack[-1])
0xc3e: Pop(1)
0xc3f: @@ ClearReplies()
0xc40: Pop(0)
0xc41: Push((int) 512634)
0xc42: Push((int) 13791)
0xc43: Push((int) 13813)
0xc44: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc45: Pop(3)
0xc46: Return(); Pop(0)

0xc47: Push((int) 13789)
0xc48: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc49: IF (Stack[-1] == 0) GOTO 0xc5e; Pop(1)

0xc4a: PushEmpty(string)
0xc4b: Stack[-1] = "Neutral"
0xc4c: Call2 0xbff

0xc4d: Pop(1)
0xc4e: Push((int) 512615)
0xc4f: @@ SetMessage(Stack[-1])
0xc50: Pop(1)
0xc51: @@ ClearReplies()
0xc52: Pop(0)
0xc53: Push((int) 512616)
0xc54: Push((int) 13791)
0xc55: Push((int) 13790)
0xc56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc57: Pop(3)
0xc58: Push((int) 512623)
0xc59: Push((int) 13800)
0xc5a: Push((int) 13799)
0xc5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc5c: Pop(3)
0xc5d: Return(); Pop(0)

0xc5e: Push((int) 13800)
0xc5f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc60: IF (Stack[-1] == 0) GOTO 0xc75; Pop(1)

0xc61: PushEmpty(string)
0xc62: Stack[-1] = "Grin"
0xc63: Call2 0xbff

0xc64: Pop(1)
0xc65: Push((int) 512624)
0xc66: @@ SetMessage(Stack[-1])
0xc67: Pop(1)
0xc68: @@ ClearReplies()
0xc69: Pop(0)
0xc6a: Push((int) 512625)
0xc6b: Push((int) 13802)
0xc6c: Push((int) 13801)
0xc6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6e: Pop(3)
0xc6f: Push((int) 512629)
0xc70: Push((int) 13802)
0xc71: Push((int) 13805)
0xc72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc73: Pop(3)
0xc74: Return(); Pop(0)

0xc75: Push((int) 13802)
0xc76: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc77: IF (Stack[-1] == 0) GOTO 0xc8c; Pop(1)

0xc78: PushEmpty(string)
0xc79: Stack[-1] = "Untrust"
0xc7a: Call2 0xbff

0xc7b: Pop(1)
0xc7c: Push((int) 512626)
0xc7d: @@ SetMessage(Stack[-1])
0xc7e: Pop(1)
0xc7f: @@ ClearReplies()
0xc80: Pop(0)
0xc81: Push((int) 512627)
0xc82: Push((int) -1)
0xc83: Push((int) 13803)
0xc84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc85: Pop(3)
0xc86: Push((int) 512628)
0xc87: Push((int) -1)
0xc88: Push((int) 13804)
0xc89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8a: Pop(3)
0xc8b: Return(); Pop(0)

0xc8c: Push((int) 13791)
0xc8d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8e: IF (Stack[-1] == 0) GOTO 0xca3; Pop(1)

0xc8f: PushEmpty(string)
0xc90: Stack[-1] = "Smile"
0xc91: Call2 0xbff

0xc92: Pop(1)
0xc93: Push((int) 512617)
0xc94: @@ SetMessage(Stack[-1])
0xc95: Pop(1)
0xc96: @@ ClearReplies()
0xc97: Pop(0)
0xc98: Push((int) 512618)
0xc99: Push((int) 13793)
0xc9a: Push((int) 13792)
0xc9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9c: Pop(3)
0xc9d: Push((int) 512622)
0xc9e: Push((int) 13802)
0xc9f: Push((int) 13797)
0xca0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca1: Pop(3)
0xca2: Return(); Pop(0)

0xca3: Push((int) 13793)
0xca4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca5: IF (Stack[-1] == 0) GOTO 0xcba; Pop(1)

0xca6: PushEmpty(string)
0xca7: Stack[-1] = "Smile"
0xca8: Call2 0xbff

0xca9: Pop(1)
0xcaa: Push((int) 512619)
0xcab: @@ SetMessage(Stack[-1])
0xcac: Pop(1)
0xcad: @@ ClearReplies()
0xcae: Pop(0)
0xcaf: Push((int) 512621)
0xcb0: Push((int) 13802)
0xcb1: Push((int) 13795)
0xcb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb3: Pop(3)
0xcb4: Push((int) 512620)
0xcb5: Push((int) -1)
0xcb6: Push((int) 13794)
0xcb7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb8: Pop(3)
0xcb9: Return(); Pop(0)

0xcba: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xcbb: PushEmpty(bool)
0xcbc: Call2 0x164c

0xcbd: Pop(0)
0xcbe: IF (Stack[-1] == 0) GOTO 0xcc2; Pop(1)

0xcbf: @ lshStopAnimation()
0xcc0: Pop(0)
0xcc1: GOTO 0xcc4

0xcc2: @ StopAnimation()
0xcc3: Pop(0)
0xcc4: Return(); Pop(0)

0xcc5: GOTO 0xc16

0xcc6: Return(); Pop(0)

0xcc7: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xcc8: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xcc9: PushEmpty(bool, object, float)
0xcca: Stack[-2] = Stack[-12]
0xccb: Stack[-1] = (float) 70.0
0xccc: Call2 0x1491

0xccd: Pop(2)
0xcce: Pop(1); Push((bool) Stack[-1] == 0)
0xccf: IF (Stack[-1] == 0) GOTO 0xcd2; Pop(1)

0xcd0: Stack[-10] = (int) -2
0xcd1: Return(); Pop(8)

0xcd2: @ CreateDialog(Stack[-4])
0xcd3: Pop(0)
0xcd4: PushEmpty(int)
0xcd5: Call2 0x1646

0xcd6: Pop(0)
0xcd7: @@ SetNPCName(Stack[-1])
0xcd8: Pop(1)
0xcd9: PushEmpty(int)
0xcda: Call2 0x1644

0xcdb: Pop(0)
0xcdc: @@ SetNPCDescription(Stack[-1])
0xcdd: Pop(1)
0xcde: PushEmpty(string)
0xcdf: Call2 0x1648

0xce0: Pop(0)
0xce1: @@ SetPhoto(Stack[-1])
0xce2: Pop(1)
0xce3: PushEmpty(string)
0xce4: Call2 0x164a

0xce5: Pop(0)
0xce6: @@ SetPhoto2(Stack[-1])
0xce7: Pop(1)
0xce8: PushEmpty(int)
0xce9: Call2 0x18f6

0xcea: Pop(0)
0xceb: @@ SetPlayerName(Stack[-1])
0xcec: Pop(1)
0xced: Stack[-2] = (int) -1
0xcee: @ IsOverrideActive(Stack[-3])
0xcef: Pop(0)
0xcf0: Push(Stack[-3])
0xcf1: IF (Stack[-1] == 0) GOTO 0xcf4; Pop(1)

0xcf2: Stack[-10] = (int) -2
0xcf3: Return(); Pop(8)

0xcf4: @ DoDialog(Stack[-4])
0xcf5: Pop(0)
0xcf6: PushEmpty(bool, object)
0xcf7: PushEmpty(object)
0xcf8: Call2 0x15a5

0xcf9: Stack[-2] = Stack[-1]
0xcfa: Pop(1)
0xcfb: Call2 0x14e6

0xcfc: Pop(2)
0xcfd: PushEmpty(object, object)
0xcfe: Stack[-2] = Stack[-11]
0xcff: Stack[-1] = Stack[-6]
0xd00: Push(-2, 4); TaskCall(13)
0xd01: Call2 0xd18

0xd02: Pop(-2, 4); TaskReturn
0xd03: Pop(2)
0xd04: @@ IsDialogEnd(Stack[-1])
0xd05: Pop(0)
0xd06: Pop(0); Push((bool) Stack[-1] == 0)
0xd07: IF (Stack[-1] == 0) GOTO 0xd0d; Pop(1)

0xd08: @ sync()
0xd09: Pop(0)
0xd0a: @@ IsDialogEnd(Stack[-1])
0xd0b: Pop(0)
0xd0c: GOTO 0xd06

0xd0d: PushEmpty(object)
0xd0e: Stack[-1] = Stack[-10]
0xd0f: Call2 0x14d5

0xd10: Pop(1)
0xd11: @ StopDialog(Stack[-4])
0xd12: Pop(0)
0xd13: @@ GetReturnValue(Stack[-2])
0xd14: Pop(0)
0xd15: Stack[-10] = Stack[-2]
0xd16: Return(); Pop(8)

0xd17: Stack[-4] = 0
0xd18: PushEmpty()
0xd19: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xd1a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xd1b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xd1c: Push((int) 1)
0xd1d: IF (Stack[-1] == 0) GOTO 0xd66; Pop(1)

0xd1e: PushEmpty(bool)
0xd1f: Stack[-1] = (bool) 0
0xd20: PushEmpty(bool)
0xd21: Stack[-1] = (bool) 0
0xd22: PushEmpty(bool, object)
0xd23: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd24: Call2 0x1843

0xd25: Pop(1)
0xd26: Pop(1); Push((bool) Stack[-1] == 0)
0xd27: IF (Stack[-1] == 0) GOTO 0xd2f; Pop(1)

0xd28: PushEmpty(bool, object)
0xd29: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd2a: Call2 0x184f

0xd2b: Pop(1)
0xd2c: Pop(1); Push((bool) Stack[-1] == 0)
0xd2d: IF (Stack[-1] == 0) GOTO 0xd2f; Pop(1)

0xd2e: Stack[-1] = (bool) 1
0xd2f: IF (Stack[-1] == 0) GOTO 0xd36; Pop(1)

0xd30: PushEmpty(bool, object)
0xd31: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd32: Call2 0x185b

0xd33: Pop(1)
0xd34: IF (Stack[-1] == 0) GOTO 0xd36; Pop(1)

0xd35: Stack[-1] = (bool) 1
0xd36: IF (Stack[-1] == 0) GOTO 0xd50; Pop(1)

0xd37: PushEmpty(object, object)
0xd38: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd39: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3a: Call2 0x1740

0xd3b: Pop(2)
0xd3c: PushEmpty(string)
0xd3d: Stack[-1] = "Smile"
0xd3e: Call2 0xd84

0xd3f: Pop(1)
0xd40: Push((int) 512960)
0xd41: @@ SetMessage(Stack[-1])
0xd42: Pop(1)
0xd43: @@ ClearReplies()
0xd44: Pop(0)
0xd45: Push((int) 512961)
0xd46: Push((int) 41443)
0xd47: Push((int) 14166)
0xd48: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd49: Pop(3)
0xd4a: Push((int) 539510)
0xd4b: Push((int) 41440)
0xd4c: Push((int) 41439)
0xd4d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4e: Pop(3)
0xd4f: GOTO 0xd66

0xd50: PushEmpty(string)
0xd51: Stack[-1] = "Neutral"
0xd52: Call2 0xd84

0xd53: Pop(1)
0xd54: Push((int) 512966)
0xd55: @@ SetMessage(Stack[-1])
0xd56: Pop(1)
0xd57: @@ ClearReplies()
0xd58: Pop(0)
0xd59: Push((int) 512967)
0xd5a: Push((int) -1)
0xd5b: Push((int) 14172)
0xd5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5d: Pop(3)
0xd5e: Push((int) 539509)
0xd5f: Push((int) -1)
0xd60: Push((int) 41438)
0xd61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd62: Pop(3)
0xd63: GOTO 0xd66

0xd64: Return(); Pop(0)

0xd65: GOTO 0xd1c

0xd66: PushEmpty(bool)
0xd67: Call2 0x164c

0xd68: Pop(0)
0xd69: IF (Stack[-1] == 0) GOTO 0xd75; Pop(1)

0xd6a: @ lshWaitForAnimEnd()
0xd6b: Pop(0)
0xd6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd6d: IF (Stack[-1] == 0) GOTO 0xd6f; Pop(1)

0xd6e: GOTO 0xd74

0xd6f: PushEmpty(string)
0xd70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd71: Call2 0x1570

0xd72: Pop(1)
0xd73: GOTO 0xd6a

0xd74: GOTO 0xd83

0xd75: Push("all")
0xd76: Push("idle")
0xd77: @ PlayAnimation(Stack[-2], Stack[-1])
0xd78: Pop(2)
0xd79: @ WaitForAnimEnd()
0xd7a: Pop(0)
0xd7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd7c: IF (Stack[-1] == 0) GOTO 0xd7e; Pop(1)

0xd7d: GOTO 0xd83

0xd7e: Push("all")
0xd7f: Push("idle")
0xd80: @ PlayAnimation(Stack[-2], Stack[-1])
0xd81: Pop(2)
0xd82: GOTO 0xd79

0xd83: Return(); Pop(0)

0xd84: PushEmpty()
0xd85: PushEmpty(bool)
0xd86: Call2 0x164c

0xd87: Pop(0)
0xd88: Pop(1); Push((bool) Stack[-1] == 0)
0xd89: IF (Stack[-1] == 0) GOTO 0xd8b; Pop(1)

0xd8a: Return(); Pop(0)

0xd8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd8c: IF (Stack[-1] == 0) GOTO 0xd8e; Pop(1)

0xd8d: Return(); Pop(0)

0xd8e: PushEmpty(string, bool)
0xd8f: Stack[-2] = Stack[-3]
0xd90: Push("")
0xd91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd92: IF (Stack[-1] == 0) GOTO 0xd95; Pop(1)

0xd93: Stack[-1] = (bool) 0
0xd94: GOTO 0xd96

0xd95: Stack[-1] = (bool) 1
0xd96: Call2 0x1580

0xd97: Pop(2)
0xd98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd99: Return(); Pop(0)

0xd9a: PushEmpty()
0xd9b: Push((int) 1)
0xd9c: IF (Stack[-1] == 0) GOTO 0xebf; Pop(1)

0xd9d: PushEmpty()
0xd9e: Call2 0x159e

0xd9f: Pop(0)
0xda0: Push((int) 14165)
0xda1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda2: IF (Stack[-1] == 0) GOTO 0xde9; Pop(1)

0xda3: PushEmpty(bool)
0xda4: Stack[-1] = (bool) 0
0xda5: PushEmpty(bool)
0xda6: Stack[-1] = (bool) 0
0xda7: PushEmpty(bool, object)
0xda8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xda9: Call2 0x1843

0xdaa: Pop(1)
0xdab: Pop(1); Push((bool) Stack[-1] == 0)
0xdac: IF (Stack[-1] == 0) GOTO 0xdb4; Pop(1)

0xdad: PushEmpty(bool, object)
0xdae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdaf: Call2 0x184f

0xdb0: Pop(1)
0xdb1: Pop(1); Push((bool) Stack[-1] == 0)
0xdb2: IF (Stack[-1] == 0) GOTO 0xdb4; Pop(1)

0xdb3: Stack[-1] = (bool) 1
0xdb4: IF (Stack[-1] == 0) GOTO 0xdbb; Pop(1)

0xdb5: PushEmpty(bool, object)
0xdb6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdb7: Call2 0x185b

0xdb8: Pop(1)
0xdb9: IF (Stack[-1] == 0) GOTO 0xdbb; Pop(1)

0xdba: Stack[-1] = (bool) 1
0xdbb: IF (Stack[-1] == 0) GOTO 0xdd5; Pop(1)

0xdbc: PushEmpty(object, object)
0xdbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdbf: Call2 0x1740

0xdc0: Pop(2)
0xdc1: PushEmpty(string)
0xdc2: Stack[-1] = "Smile"
0xdc3: Call2 0xd84

0xdc4: Pop(1)
0xdc5: Push((int) 512960)
0xdc6: @@ SetMessage(Stack[-1])
0xdc7: Pop(1)
0xdc8: @@ ClearReplies()
0xdc9: Pop(0)
0xdca: Push((int) 512961)
0xdcb: Push((int) 41443)
0xdcc: Push((int) 14166)
0xdcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdce: Pop(3)
0xdcf: Push((int) 539510)
0xdd0: Push((int) 41440)
0xdd1: Push((int) 41439)
0xdd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd3: Pop(3)
0xdd4: Return(); Pop(0)

0xdd5: PushEmpty(string)
0xdd6: Stack[-1] = "Neutral"
0xdd7: Call2 0xd84

0xdd8: Pop(1)
0xdd9: Push((int) 512966)
0xdda: @@ SetMessage(Stack[-1])
0xddb: Pop(1)
0xddc: @@ ClearReplies()
0xddd: Pop(0)
0xdde: Push((int) 512967)
0xddf: Push((int) -1)
0xde0: Push((int) 14172)
0xde1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde2: Pop(3)
0xde3: Push((int) 539509)
0xde4: Push((int) -1)
0xde5: Push((int) 41438)
0xde6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde7: Pop(3)
0xde8: Return(); Pop(0)

0xde9: Push((int) 41440)
0xdea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdeb: IF (Stack[-1] == 0) GOTO 0xe05; Pop(1)

0xdec: PushEmpty(string)
0xded: Stack[-1] = "Neutral"
0xdee: Call2 0xd84

0xdef: Pop(1)
0xdf0: Push((int) 539511)
0xdf1: @@ SetMessage(Stack[-1])
0xdf2: Pop(1)
0xdf3: @@ ClearReplies()
0xdf4: Pop(0)
0xdf5: PushEmpty(bool, object)
0xdf6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdf7: Call2 0x176b

0xdf8: Pop(1)
0xdf9: IF (Stack[-1] == 0) GOTO 0xdff; Pop(1)

0xdfa: Push((int) 539512)
0xdfb: Push((int) 41828)
0xdfc: Push((int) 41441)
0xdfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdfe: Pop(3)
0xdff: Push((int) 539513)
0xe00: Push((int) 14169)
0xe01: Push((int) 41442)
0xe02: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe03: Pop(3)
0xe04: Return(); Pop(0)

0xe05: Push((int) 41828)
0xe06: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe07: IF (Stack[-1] == 0) GOTO 0xe17; Pop(1)

0xe08: PushEmpty(string)
0xe09: Stack[-1] = "Neutral"
0xe0a: Call2 0xd84

0xe0b: Pop(1)
0xe0c: Push((int) 539874)
0xe0d: @@ SetMessage(Stack[-1])
0xe0e: Pop(1)
0xe0f: @@ ClearReplies()
0xe10: Pop(0)
0xe11: Push((int) 539875)
0xe12: Push((int) 41446)
0xe13: Push((int) 41829)
0xe14: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe15: Pop(3)
0xe16: Return(); Pop(0)

0xe17: Push((int) 41443)
0xe18: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe19: IF (Stack[-1] == 0) GOTO 0xe2e; Pop(1)

0xe1a: PushEmpty(string)
0xe1b: Stack[-1] = "Smile"
0xe1c: Call2 0xd84

0xe1d: Pop(1)
0xe1e: Push((int) 539514)
0xe1f: @@ SetMessage(Stack[-1])
0xe20: Pop(1)
0xe21: @@ ClearReplies()
0xe22: Pop(0)
0xe23: Push((int) 512963)
0xe24: Push((int) 14169)
0xe25: Push((int) 14168)
0xe26: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe27: Pop(3)
0xe28: Push((int) 539527)
0xe29: Push((int) 41444)
0xe2a: Push((int) 41458)
0xe2b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2c: Pop(3)
0xe2d: Return(); Pop(0)

0xe2e: Push((int) 14169)
0xe2f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe30: IF (Stack[-1] == 0) GOTO 0xe40; Pop(1)

0xe31: PushEmpty(string)
0xe32: Stack[-1] = "What"
0xe33: Call2 0xd84

0xe34: Pop(1)
0xe35: Push((int) 512964)
0xe36: @@ SetMessage(Stack[-1])
0xe37: Pop(1)
0xe38: @@ ClearReplies()
0xe39: Pop(0)
0xe3a: Push((int) 512965)
0xe3b: Push((int) 41444)
0xe3c: Push((int) 14170)
0xe3d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3e: Pop(3)
0xe3f: Return(); Pop(0)

0xe40: Push((int) 41444)
0xe41: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe42: IF (Stack[-1] == 0) GOTO 0xe5c; Pop(1)

0xe43: PushEmpty(string)
0xe44: Stack[-1] = "What"
0xe45: Call2 0xd84

0xe46: Pop(1)
0xe47: Push((int) 539515)
0xe48: @@ SetMessage(Stack[-1])
0xe49: Pop(1)
0xe4a: @@ ClearReplies()
0xe4b: Pop(0)
0xe4c: Push((int) 539516)
0xe4d: Push((int) 41446)
0xe4e: Push((int) 41445)
0xe4f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe50: Pop(3)
0xe51: Push((int) 539876)
0xe52: Push((int) -1)
0xe53: Push((int) 41830)
0xe54: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe55: Pop(3)
0xe56: Push((int) 539877)
0xe57: Push((int) -1)
0xe58: Push((int) 41831)
0xe59: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5a: Pop(3)
0xe5b: Return(); Pop(0)

0xe5c: Push((int) 41446)
0xe5d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe5e: IF (Stack[-1] == 0) GOTO 0xe73; Pop(1)

0xe5f: PushEmpty(string)
0xe60: Stack[-1] = "What"
0xe61: Call2 0xd84

0xe62: Pop(1)
0xe63: Push((int) 539517)
0xe64: @@ SetMessage(Stack[-1])
0xe65: Pop(1)
0xe66: @@ ClearReplies()
0xe67: Pop(0)
0xe68: Push((int) 539518)
0xe69: Push((int) 41449)
0xe6a: Push((int) 41447)
0xe6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6c: Pop(3)
0xe6d: Push((int) 539519)
0xe6e: Push((int) 41452)
0xe6f: Push((int) 41448)
0xe70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe71: Pop(3)
0xe72: Return(); Pop(0)

0xe73: Push((int) 41449)
0xe74: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe75: IF (Stack[-1] == 0) GOTO 0xe8a; Pop(1)

0xe76: PushEmpty(string)
0xe77: Stack[-1] = "What"
0xe78: Call2 0xd84

0xe79: Pop(1)
0xe7a: Push((int) 539520)
0xe7b: @@ SetMessage(Stack[-1])
0xe7c: Pop(1)
0xe7d: @@ ClearReplies()
0xe7e: Pop(0)
0xe7f: Push((int) 539521)
0xe80: Push((int) 41452)
0xe81: Push((int) 41450)
0xe82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe83: Pop(3)
0xe84: Push((int) 539522)
0xe85: Push((int) 41452)
0xe86: Push((int) 41451)
0xe87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe88: Pop(3)
0xe89: Return(); Pop(0)

0xe8a: Push((int) 41452)
0xe8b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe8c: IF (Stack[-1] == 0) GOTO 0xea1; Pop(1)

0xe8d: PushEmpty(string)
0xe8e: Stack[-1] = "What"
0xe8f: Call2 0xd84

0xe90: Pop(1)
0xe91: Push((int) 539523)
0xe92: @@ SetMessage(Stack[-1])
0xe93: Pop(1)
0xe94: @@ ClearReplies()
0xe95: Pop(0)
0xe96: Push((int) 539524)
0xe97: Push((int) -1)
0xe98: Push((int) 41454)
0xe99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9a: Pop(3)
0xe9b: Push((int) 539872)
0xe9c: Push((int) 41827)
0xe9d: Push((int) 41826)
0xe9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9f: Pop(3)
0xea0: Return(); Pop(0)

0xea1: Push((int) 41827)
0xea2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xea3: IF (Stack[-1] == 0) GOTO 0xeb3; Pop(1)

0xea4: PushEmpty(string)
0xea5: Stack[-1] = "Neutral"
0xea6: Call2 0xd84

0xea7: Pop(1)
0xea8: Push((int) 539873)
0xea9: @@ SetMessage(Stack[-1])
0xeaa: Pop(1)
0xeab: @@ ClearReplies()
0xeac: Pop(0)
0xead: Push((int) 539525)
0xeae: Push((int) -1)
0xeaf: Push((int) 41455)
0xeb0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb1: Pop(3)
0xeb2: Return(); Pop(0)

0xeb3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xeb4: PushEmpty(bool)
0xeb5: Call2 0x164c

0xeb6: Pop(0)
0xeb7: IF (Stack[-1] == 0) GOTO 0xebb; Pop(1)

0xeb8: @ lshStopAnimation()
0xeb9: Pop(0)
0xeba: GOTO 0xebd

0xebb: @ StopAnimation()
0xebc: Pop(0)
0xebd: Return(); Pop(0)

0xebe: GOTO 0xd9b

0xebf: Return(); Pop(0)

0xec0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xec1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xec2: PushEmpty(bool, object, float)
0xec3: Stack[-2] = Stack[-12]
0xec4: Stack[-1] = (float) 70.0
0xec5: Call2 0x1491

0xec6: Pop(2)
0xec7: Pop(1); Push((bool) Stack[-1] == 0)
0xec8: IF (Stack[-1] == 0) GOTO 0xecb; Pop(1)

0xec9: Stack[-10] = (int) -2
0xeca: Return(); Pop(8)

0xecb: @ CreateDialog(Stack[-4])
0xecc: Pop(0)
0xecd: PushEmpty(int)
0xece: Call2 0x1646

0xecf: Pop(0)
0xed0: @@ SetNPCName(Stack[-1])
0xed1: Pop(1)
0xed2: PushEmpty(int)
0xed3: Call2 0x1644

0xed4: Pop(0)
0xed5: @@ SetNPCDescription(Stack[-1])
0xed6: Pop(1)
0xed7: PushEmpty(string)
0xed8: Call2 0x1648

0xed9: Pop(0)
0xeda: @@ SetPhoto(Stack[-1])
0xedb: Pop(1)
0xedc: PushEmpty(string)
0xedd: Call2 0x164a

0xede: Pop(0)
0xedf: @@ SetPhoto2(Stack[-1])
0xee0: Pop(1)
0xee1: PushEmpty(int)
0xee2: Call2 0x18f6

0xee3: Pop(0)
0xee4: @@ SetPlayerName(Stack[-1])
0xee5: Pop(1)
0xee6: Stack[-2] = (int) -1
0xee7: @ IsOverrideActive(Stack[-3])
0xee8: Pop(0)
0xee9: Push(Stack[-3])
0xeea: IF (Stack[-1] == 0) GOTO 0xeed; Pop(1)

0xeeb: Stack[-10] = (int) -2
0xeec: Return(); Pop(8)

0xeed: @ DoDialog(Stack[-4])
0xeee: Pop(0)
0xeef: PushEmpty(bool, object)
0xef0: PushEmpty(object)
0xef1: Call2 0x15a5

0xef2: Stack[-2] = Stack[-1]
0xef3: Pop(1)
0xef4: Call2 0x14e6

0xef5: Pop(2)
0xef6: PushEmpty(object, object)
0xef7: Stack[-2] = Stack[-11]
0xef8: Stack[-1] = Stack[-6]
0xef9: Push(-2, 4); TaskCall(15)
0xefa: Call2 0xf11

0xefb: Pop(-2, 4); TaskReturn
0xefc: Pop(2)
0xefd: @@ IsDialogEnd(Stack[-1])
0xefe: Pop(0)
0xeff: Pop(0); Push((bool) Stack[-1] == 0)
0xf00: IF (Stack[-1] == 0) GOTO 0xf06; Pop(1)

0xf01: @ sync()
0xf02: Pop(0)
0xf03: @@ IsDialogEnd(Stack[-1])
0xf04: Pop(0)
0xf05: GOTO 0xeff

0xf06: PushEmpty(object)
0xf07: Stack[-1] = Stack[-10]
0xf08: Call2 0x14d5

0xf09: Pop(1)
0xf0a: @ StopDialog(Stack[-4])
0xf0b: Pop(0)
0xf0c: @@ GetReturnValue(Stack[-2])
0xf0d: Pop(0)
0xf0e: Stack[-10] = Stack[-2]
0xf0f: Return(); Pop(8)

0xf10: Stack[-4] = 0
0xf11: PushEmpty()
0xf12: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xf13: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xf14: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xf15: Push((int) 1)
0xf16: IF (Stack[-1] == 0) GOTO 0xf75; Pop(1)

0xf17: PushEmpty(bool)
0xf18: Stack[-1] = (bool) 0
0xf19: PushEmpty(bool, object)
0xf1a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf1b: Call2 0x17fb

0xf1c: Pop(1)
0xf1d: IF (Stack[-1] == 0) GOTO 0xf24; Pop(1)

0xf1e: PushEmpty(bool, object)
0xf1f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf20: Call2 0x1807

0xf21: Pop(1)
0xf22: IF (Stack[-1] == 0) GOTO 0xf24; Pop(1)

0xf23: Stack[-1] = (bool) 1
0xf24: IF (Stack[-1] == 0) GOTO 0xf3e; Pop(1)

0xf25: PushEmpty(object, object)
0xf26: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf27: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf28: Call2 0x1706

0xf29: Pop(2)
0xf2a: PushEmpty(string)
0xf2b: Stack[-1] = "What"
0xf2c: Call2 0xf93

0xf2d: Pop(1)
0xf2e: Push((int) 514241)
0xf2f: @@ SetMessage(Stack[-1])
0xf30: Pop(1)
0xf31: @@ ClearReplies()
0xf32: Pop(0)
0xf33: Push((int) 539735)
0xf34: Push((int) 41875)
0xf35: Push((int) 41699)
0xf36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf37: Pop(3)
0xf38: Push((int) 514242)
0xf39: Push((int) 15461)
0xf3a: Push((int) 15460)
0xf3b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3c: Pop(3)
0xf3d: GOTO 0xf75

0xf3e: PushEmpty(string)
0xf3f: Stack[-1] = "Neutral"
0xf40: Call2 0xf93

0xf41: Pop(1)
0xf42: Push((int) 514258)
0xf43: @@ SetMessage(Stack[-1])
0xf44: Pop(1)
0xf45: @@ ClearReplies()
0xf46: Pop(0)
0xf47: PushEmpty(bool)
0xf48: Stack[-1] = (bool) 0
0xf49: PushEmpty(bool, object)
0xf4a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf4b: Call2 0x1813

0xf4c: Pop(1)
0xf4d: IF (Stack[-1] == 0) GOTO 0xf54; Pop(1)

0xf4e: PushEmpty(bool, object)
0xf4f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf50: Call2 0x181f

0xf51: Pop(1)
0xf52: IF (Stack[-1] == 0) GOTO 0xf54; Pop(1)

0xf53: Stack[-1] = (bool) 1
0xf54: IF (Stack[-1] == 0) GOTO 0xf5a; Pop(1)

0xf55: Push((int) 514259)
0xf56: Push((int) 15479)
0xf57: Push((int) 15478)
0xf58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf59: Pop(3)
0xf5a: PushEmpty(bool)
0xf5b: Stack[-1] = (bool) 0
0xf5c: PushEmpty(bool, object)
0xf5d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf5e: Call2 0x182b

0xf5f: Pop(1)
0xf60: IF (Stack[-1] == 0) GOTO 0xf67; Pop(1)

0xf61: PushEmpty(bool, object)
0xf62: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf63: Call2 0x1813

0xf64: Pop(1)
0xf65: IF (Stack[-1] == 0) GOTO 0xf67; Pop(1)

0xf66: Stack[-1] = (bool) 1
0xf67: IF (Stack[-1] == 0) GOTO 0xf6d; Pop(1)

0xf68: Push((int) 539636)
0xf69: Push((int) 41583)
0xf6a: Push((int) 41582)
0xf6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6c: Pop(3)
0xf6d: Push((int) 514278)
0xf6e: Push((int) -1)
0xf6f: Push((int) 15498)
0xf70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf71: Pop(3)
0xf72: GOTO 0xf75

0xf73: Return(); Pop(0)

0xf74: GOTO 0xf15

0xf75: PushEmpty(bool)
0xf76: Call2 0x164c

0xf77: Pop(0)
0xf78: IF (Stack[-1] == 0) GOTO 0xf84; Pop(1)

0xf79: @ lshWaitForAnimEnd()
0xf7a: Pop(0)
0xf7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf7c: IF (Stack[-1] == 0) GOTO 0xf7e; Pop(1)

0xf7d: GOTO 0xf83

0xf7e: PushEmpty(string)
0xf7f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xf80: Call2 0x1570

0xf81: Pop(1)
0xf82: GOTO 0xf79

0xf83: GOTO 0xf92

0xf84: Push("all")
0xf85: Push("idle")
0xf86: @ PlayAnimation(Stack[-2], Stack[-1])
0xf87: Pop(2)
0xf88: @ WaitForAnimEnd()
0xf89: Pop(0)
0xf8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf8b: IF (Stack[-1] == 0) GOTO 0xf8d; Pop(1)

0xf8c: GOTO 0xf92

0xf8d: Push("all")
0xf8e: Push("idle")
0xf8f: @ PlayAnimation(Stack[-2], Stack[-1])
0xf90: Pop(2)
0xf91: GOTO 0xf88

0xf92: Return(); Pop(0)

0xf93: PushEmpty()
0xf94: PushEmpty(bool)
0xf95: Call2 0x164c

0xf96: Pop(0)
0xf97: Pop(1); Push((bool) Stack[-1] == 0)
0xf98: IF (Stack[-1] == 0) GOTO 0xf9a; Pop(1)

0xf99: Return(); Pop(0)

0xf9a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf9b: IF (Stack[-1] == 0) GOTO 0xf9d; Pop(1)

0xf9c: Return(); Pop(0)

0xf9d: PushEmpty(string, bool)
0xf9e: Stack[-2] = Stack[-3]
0xf9f: Push("")
0xfa0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xfa1: IF (Stack[-1] == 0) GOTO 0xfa4; Pop(1)

0xfa2: Stack[-1] = (bool) 0
0xfa3: GOTO 0xfa5

0xfa4: Stack[-1] = (bool) 1
0xfa5: Call2 0x1580

0xfa6: Pop(2)
0xfa7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xfa8: Return(); Pop(0)

0xfa9: PushEmpty()
0xfaa: Push((int) 1)
0xfab: IF (Stack[-1] == 0) GOTO 0x129e; Pop(1)

0xfac: PushEmpty()
0xfad: Call2 0x159e

0xfae: Pop(0)
0xfaf: Push((int) 15743)
0xfb0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfb1: IF (Stack[-1] == 0) GOTO 0xfc6; Pop(1)

0xfb2: PushEmpty(object, object)
0xfb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfb5: Call2 0x170c

0xfb6: Pop(2)
0xfb7: PushEmpty(object, object)
0xfb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfba: Call2 0x1698

0xfbb: Pop(2)
0xfbc: PushEmpty(object, object)
0xfbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfbf: Call2 0x166e

0xfc0: Pop(2)
0xfc1: PushEmpty(object, object)
0xfc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfc4: Call2 0x164e

0xfc5: Pop(2)
0xfc6: Push((int) 41888)
0xfc7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfc8: IF (Stack[-1] == 0) GOTO 0xfdd; Pop(1)

0xfc9: PushEmpty(object, object)
0xfca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfcc: Call2 0x170c

0xfcd: Pop(2)
0xfce: PushEmpty(object, object)
0xfcf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfd0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd1: Call2 0x1698

0xfd2: Pop(2)
0xfd3: PushEmpty(object, object)
0xfd4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfd5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd6: Call2 0x166e

0xfd7: Pop(2)
0xfd8: PushEmpty(object, object)
0xfd9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfda: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfdb: Call2 0x164e

0xfdc: Pop(2)
0xfdd: Push((int) 41885)
0xfde: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfdf: IF (Stack[-1] == 0) GOTO 0xfe5; Pop(1)

0xfe0: PushEmpty(object, object)
0xfe1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfe2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfe3: Call2 0x170c

0xfe4: Pop(2)
0xfe5: Push((int) 15478)
0xfe6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfe7: IF (Stack[-1] == 0) GOTO 0xfed; Pop(1)

0xfe8: PushEmpty(object, object)
0xfe9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfeb: Call2 0x171e

0xfec: Pop(2)
0xfed: Push((int) 41582)
0xfee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfef: IF (Stack[-1] == 0) GOTO 0xff5; Pop(1)

0xff0: PushEmpty(object, object)
0xff1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xff2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xff3: Call2 0x1724

0xff4: Pop(2)
0xff5: Push((int) 15459)
0xff6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff7: IF (Stack[-1] == 0) GOTO 0x1054; Pop(1)

0xff8: PushEmpty(bool)
0xff9: Stack[-1] = (bool) 0
0xffa: PushEmpty(bool, object)
0xffb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xffc: Call2 0x17fb

0xffd: Pop(1)
0xffe: IF (Stack[-1] == 0) GOTO 0x1005; Pop(1)

0xfff: PushEmpty(bool, object)
0x1000: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1001: Call2 0x1807

0x1002: Pop(1)
0x1003: IF (Stack[-1] == 0) GOTO 0x1005; Pop(1)

0x1004: Stack[-1] = (bool) 1
0x1005: IF (Stack[-1] == 0) GOTO 0x101f; Pop(1)

0x1006: PushEmpty(object, object)
0x1007: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1008: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1009: Call2 0x1706

0x100a: Pop(2)
0x100b: PushEmpty(string)
0x100c: Stack[-1] = "What"
0x100d: Call2 0xf93

0x100e: Pop(1)
0x100f: Push((int) 514241)
0x1010: @@ SetMessage(Stack[-1])
0x1011: Pop(1)
0x1012: @@ ClearReplies()
0x1013: Pop(0)
0x1014: Push((int) 539735)
0x1015: Push((int) 41875)
0x1016: Push((int) 41699)
0x1017: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1018: Pop(3)
0x1019: Push((int) 514242)
0x101a: Push((int) 15461)
0x101b: Push((int) 15460)
0x101c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101d: Pop(3)
0x101e: Return(); Pop(0)

0x101f: PushEmpty(string)
0x1020: Stack[-1] = "Neutral"
0x1021: Call2 0xf93

0x1022: Pop(1)
0x1023: Push((int) 514258)
0x1024: @@ SetMessage(Stack[-1])
0x1025: Pop(1)
0x1026: @@ ClearReplies()
0x1027: Pop(0)
0x1028: PushEmpty(bool)
0x1029: Stack[-1] = (bool) 0
0x102a: PushEmpty(bool, object)
0x102b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x102c: Call2 0x1813

0x102d: Pop(1)
0x102e: IF (Stack[-1] == 0) GOTO 0x1035; Pop(1)

0x102f: PushEmpty(bool, object)
0x1030: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1031: Call2 0x181f

0x1032: Pop(1)
0x1033: IF (Stack[-1] == 0) GOTO 0x1035; Pop(1)

0x1034: Stack[-1] = (bool) 1
0x1035: IF (Stack[-1] == 0) GOTO 0x103b; Pop(1)

0x1036: Push((int) 514259)
0x1037: Push((int) 15479)
0x1038: Push((int) 15478)
0x1039: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103a: Pop(3)
0x103b: PushEmpty(bool)
0x103c: Stack[-1] = (bool) 0
0x103d: PushEmpty(bool, object)
0x103e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x103f: Call2 0x182b

0x1040: Pop(1)
0x1041: IF (Stack[-1] == 0) GOTO 0x1048; Pop(1)

0x1042: PushEmpty(bool, object)
0x1043: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1044: Call2 0x1813

0x1045: Pop(1)
0x1046: IF (Stack[-1] == 0) GOTO 0x1048; Pop(1)

0x1047: Stack[-1] = (bool) 1
0x1048: IF (Stack[-1] == 0) GOTO 0x104e; Pop(1)

0x1049: Push((int) 539636)
0x104a: Push((int) 41583)
0x104b: Push((int) 41582)
0x104c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104d: Pop(3)
0x104e: Push((int) 514278)
0x104f: Push((int) -1)
0x1050: Push((int) 15498)
0x1051: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1052: Pop(3)
0x1053: Return(); Pop(0)

0x1054: Push((int) 41583)
0x1055: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1056: IF (Stack[-1] == 0) GOTO 0x106b; Pop(1)

0x1057: PushEmpty(string)
0x1058: Stack[-1] = "What"
0x1059: Call2 0xf93

0x105a: Pop(1)
0x105b: Push((int) 539637)
0x105c: @@ SetMessage(Stack[-1])
0x105d: Pop(1)
0x105e: @@ ClearReplies()
0x105f: Pop(0)
0x1060: Push((int) 539638)
0x1061: Push((int) 41585)
0x1062: Push((int) 41584)
0x1063: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1064: Pop(3)
0x1065: Push((int) 541851)
0x1066: Push((int) 41589)
0x1067: Push((int) 44072)
0x1068: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1069: Pop(3)
0x106a: Return(); Pop(0)

0x106b: Push((int) 41585)
0x106c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x106d: IF (Stack[-1] == 0) GOTO 0x1082; Pop(1)

0x106e: PushEmpty(string)
0x106f: Stack[-1] = "Smile"
0x1070: Call2 0xf93

0x1071: Pop(1)
0x1072: Push((int) 539639)
0x1073: @@ SetMessage(Stack[-1])
0x1074: Pop(1)
0x1075: @@ ClearReplies()
0x1076: Pop(0)
0x1077: Push((int) 539640)
0x1078: Push((int) 41587)
0x1079: Push((int) 41586)
0x107a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107b: Pop(3)
0x107c: Push((int) 541852)
0x107d: Push((int) 41589)
0x107e: Push((int) 44074)
0x107f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1080: Pop(3)
0x1081: Return(); Pop(0)

0x1082: Push((int) 41587)
0x1083: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1084: IF (Stack[-1] == 0) GOTO 0x1099; Pop(1)

0x1085: PushEmpty(string)
0x1086: Stack[-1] = "Smile"
0x1087: Call2 0xf93

0x1088: Pop(1)
0x1089: Push((int) 539641)
0x108a: @@ SetMessage(Stack[-1])
0x108b: Pop(1)
0x108c: @@ ClearReplies()
0x108d: Pop(0)
0x108e: Push((int) 539642)
0x108f: Push((int) 41589)
0x1090: Push((int) 41588)
0x1091: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1092: Pop(3)
0x1093: Push((int) 541853)
0x1094: Push((int) 41593)
0x1095: Push((int) 44076)
0x1096: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1097: Pop(3)
0x1098: Return(); Pop(0)

0x1099: Push((int) 41589)
0x109a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x109b: IF (Stack[-1] == 0) GOTO 0x10ab; Pop(1)

0x109c: PushEmpty(string)
0x109d: Stack[-1] = "What"
0x109e: Call2 0xf93

0x109f: Pop(1)
0x10a0: Push((int) 539643)
0x10a1: @@ SetMessage(Stack[-1])
0x10a2: Pop(1)
0x10a3: @@ ClearReplies()
0x10a4: Pop(0)
0x10a5: Push((int) 539644)
0x10a6: Push((int) 41591)
0x10a7: Push((int) 41590)
0x10a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a9: Pop(3)
0x10aa: Return(); Pop(0)

0x10ab: Push((int) 41591)
0x10ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10ad: IF (Stack[-1] == 0) GOTO 0x10c2; Pop(1)

0x10ae: PushEmpty(string)
0x10af: Stack[-1] = "Neutral"
0x10b0: Call2 0xf93

0x10b1: Pop(1)
0x10b2: Push((int) 539645)
0x10b3: @@ SetMessage(Stack[-1])
0x10b4: Pop(1)
0x10b5: @@ ClearReplies()
0x10b6: Pop(0)
0x10b7: Push((int) 539646)
0x10b8: Push((int) 41593)
0x10b9: Push((int) 41592)
0x10ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10bb: Pop(3)
0x10bc: Push((int) 542037)
0x10bd: Push((int) 44316)
0x10be: Push((int) 44315)
0x10bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c0: Pop(3)
0x10c1: Return(); Pop(0)

0x10c2: Push((int) 44316)
0x10c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c4: IF (Stack[-1] == 0) GOTO 0x10d4; Pop(1)

0x10c5: PushEmpty(string)
0x10c6: Stack[-1] = "Neutral"
0x10c7: Call2 0xf93

0x10c8: Pop(1)
0x10c9: Push((int) 542038)
0x10ca: @@ SetMessage(Stack[-1])
0x10cb: Pop(1)
0x10cc: @@ ClearReplies()
0x10cd: Pop(0)
0x10ce: Push((int) 542039)
0x10cf: Push((int) 41593)
0x10d0: Push((int) 44317)
0x10d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d2: Pop(3)
0x10d3: Return(); Pop(0)

0x10d4: Push((int) 41593)
0x10d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10d6: IF (Stack[-1] == 0) GOTO 0x10e6; Pop(1)

0x10d7: PushEmpty(string)
0x10d8: Stack[-1] = "Smile"
0x10d9: Call2 0xf93

0x10da: Pop(1)
0x10db: Push((int) 539647)
0x10dc: @@ SetMessage(Stack[-1])
0x10dd: Pop(1)
0x10de: @@ ClearReplies()
0x10df: Pop(0)
0x10e0: Push((int) 539648)
0x10e1: Push((int) 41595)
0x10e2: Push((int) 41594)
0x10e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e4: Pop(3)
0x10e5: Return(); Pop(0)

0x10e6: Push((int) 41595)
0x10e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e8: IF (Stack[-1] == 0) GOTO 0x10f8; Pop(1)

0x10e9: PushEmpty(string)
0x10ea: Stack[-1] = "Smile"
0x10eb: Call2 0xf93

0x10ec: Pop(1)
0x10ed: Push((int) 539649)
0x10ee: @@ SetMessage(Stack[-1])
0x10ef: Pop(1)
0x10f0: @@ ClearReplies()
0x10f1: Pop(0)
0x10f2: Push((int) 539650)
0x10f3: Push((int) 41597)
0x10f4: Push((int) 41596)
0x10f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f6: Pop(3)
0x10f7: Return(); Pop(0)

0x10f8: Push((int) 41597)
0x10f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10fa: IF (Stack[-1] == 0) GOTO 0x1114; Pop(1)

0x10fb: PushEmpty(string)
0x10fc: Stack[-1] = "Smile"
0x10fd: Call2 0xf93

0x10fe: Pop(1)
0x10ff: Push((int) 539651)
0x1100: @@ SetMessage(Stack[-1])
0x1101: Pop(1)
0x1102: @@ ClearReplies()
0x1103: Pop(0)
0x1104: Push((int) 539652)
0x1105: Push((int) -1)
0x1106: Push((int) 41598)
0x1107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1108: Pop(3)
0x1109: Push((int) 539653)
0x110a: Push((int) -1)
0x110b: Push((int) 41599)
0x110c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110d: Pop(3)
0x110e: Push((int) 539654)
0x110f: Push((int) -1)
0x1110: Push((int) 41600)
0x1111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1112: Pop(3)
0x1113: Return(); Pop(0)

0x1114: Push((int) 15479)
0x1115: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1116: IF (Stack[-1] == 0) GOTO 0x1126; Pop(1)

0x1117: PushEmpty(string)
0x1118: Stack[-1] = "What"
0x1119: Call2 0xf93

0x111a: Pop(1)
0x111b: Push((int) 514260)
0x111c: @@ SetMessage(Stack[-1])
0x111d: Pop(1)
0x111e: @@ ClearReplies()
0x111f: Pop(0)
0x1120: Push((int) 514261)
0x1121: Push((int) 15481)
0x1122: Push((int) 15480)
0x1123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1124: Pop(3)
0x1125: Return(); Pop(0)

0x1126: Push((int) 15481)
0x1127: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1128: IF (Stack[-1] == 0) GOTO 0x113d; Pop(1)

0x1129: PushEmpty(string)
0x112a: Stack[-1] = "What"
0x112b: Call2 0xf93

0x112c: Pop(1)
0x112d: Push((int) 514262)
0x112e: @@ SetMessage(Stack[-1])
0x112f: Pop(1)
0x1130: @@ ClearReplies()
0x1131: Pop(0)
0x1132: Push((int) 514263)
0x1133: Push((int) 15483)
0x1134: Push((int) 15482)
0x1135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1136: Pop(3)
0x1137: Push((int) 514268)
0x1138: Push((int) 15488)
0x1139: Push((int) 15487)
0x113a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113b: Pop(3)
0x113c: Return(); Pop(0)

0x113d: Push((int) 15488)
0x113e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x113f: IF (Stack[-1] == 0) GOTO 0x114f; Pop(1)

0x1140: PushEmpty(string)
0x1141: Stack[-1] = "What"
0x1142: Call2 0xf93

0x1143: Pop(1)
0x1144: Push((int) 514269)
0x1145: @@ SetMessage(Stack[-1])
0x1146: Pop(1)
0x1147: @@ ClearReplies()
0x1148: Pop(0)
0x1149: Push((int) 514270)
0x114a: Push((int) -1)
0x114b: Push((int) 15489)
0x114c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114d: Pop(3)
0x114e: Return(); Pop(0)

0x114f: Push((int) 15483)
0x1150: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1151: IF (Stack[-1] == 0) GOTO 0x1161; Pop(1)

0x1152: PushEmpty(string)
0x1153: Stack[-1] = "What"
0x1154: Call2 0xf93

0x1155: Pop(1)
0x1156: Push((int) 514264)
0x1157: @@ SetMessage(Stack[-1])
0x1158: Pop(1)
0x1159: @@ ClearReplies()
0x115a: Pop(0)
0x115b: Push((int) 514265)
0x115c: Push((int) 15485)
0x115d: Push((int) 15484)
0x115e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115f: Pop(3)
0x1160: Return(); Pop(0)

0x1161: Push((int) 15485)
0x1162: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1163: IF (Stack[-1] == 0) GOTO 0x1178; Pop(1)

0x1164: PushEmpty(string)
0x1165: Stack[-1] = "What"
0x1166: Call2 0xf93

0x1167: Pop(1)
0x1168: Push((int) 514266)
0x1169: @@ SetMessage(Stack[-1])
0x116a: Pop(1)
0x116b: @@ ClearReplies()
0x116c: Pop(0)
0x116d: Push((int) 514267)
0x116e: Push((int) -1)
0x116f: Push((int) 15486)
0x1170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1171: Pop(3)
0x1172: Push((int) 543001)
0x1173: Push((int) -1)
0x1174: Push((int) 45450)
0x1175: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1176: Pop(3)
0x1177: Return(); Pop(0)

0x1178: Push((int) 41875)
0x1179: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x117a: IF (Stack[-1] == 0) GOTO 0x118f; Pop(1)

0x117b: PushEmpty(string)
0x117c: Stack[-1] = "What"
0x117d: Call2 0xf93

0x117e: Pop(1)
0x117f: Push((int) 539914)
0x1180: @@ SetMessage(Stack[-1])
0x1181: Pop(1)
0x1182: @@ ClearReplies()
0x1183: Pop(0)
0x1184: Push((int) 539915)
0x1185: Push((int) 15467)
0x1186: Push((int) 41876)
0x1187: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1188: Pop(3)
0x1189: Push((int) 539916)
0x118a: Push((int) 15461)
0x118b: Push((int) 41877)
0x118c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118d: Pop(3)
0x118e: Return(); Pop(0)

0x118f: Push((int) 15461)
0x1190: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1191: IF (Stack[-1] == 0) GOTO 0x11a1; Pop(1)

0x1192: PushEmpty(string)
0x1193: Stack[-1] = "Neutral"
0x1194: Call2 0xf93

0x1195: Pop(1)
0x1196: Push((int) 514243)
0x1197: @@ SetMessage(Stack[-1])
0x1198: Pop(1)
0x1199: @@ ClearReplies()
0x119a: Pop(0)
0x119b: Push((int) 539908)
0x119c: Push((int) 41870)
0x119d: Push((int) 41869)
0x119e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119f: Pop(3)
0x11a0: Return(); Pop(0)

0x11a1: Push((int) 41870)
0x11a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a3: IF (Stack[-1] == 0) GOTO 0x11b3; Pop(1)

0x11a4: PushEmpty(string)
0x11a5: Stack[-1] = "Neutral"
0x11a6: Call2 0xf93

0x11a7: Pop(1)
0x11a8: Push((int) 539909)
0x11a9: @@ SetMessage(Stack[-1])
0x11aa: Pop(1)
0x11ab: @@ ClearReplies()
0x11ac: Pop(0)
0x11ad: Push((int) 539910)
0x11ae: Push((int) 41872)
0x11af: Push((int) 41871)
0x11b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b1: Pop(3)
0x11b2: Return(); Pop(0)

0x11b3: Push((int) 41872)
0x11b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b5: IF (Stack[-1] == 0) GOTO 0x11c5; Pop(1)

0x11b6: PushEmpty(string)
0x11b7: Stack[-1] = "Neutral"
0x11b8: Call2 0xf93

0x11b9: Pop(1)
0x11ba: Push((int) 539911)
0x11bb: @@ SetMessage(Stack[-1])
0x11bc: Pop(1)
0x11bd: @@ ClearReplies()
0x11be: Pop(0)
0x11bf: Push((int) 539912)
0x11c0: Push((int) 41874)
0x11c1: Push((int) 41873)
0x11c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c3: Pop(3)
0x11c4: Return(); Pop(0)

0x11c5: Push((int) 41874)
0x11c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c7: IF (Stack[-1] == 0) GOTO 0x11d7; Pop(1)

0x11c8: PushEmpty(string)
0x11c9: Stack[-1] = "Neutral"
0x11ca: Call2 0xf93

0x11cb: Pop(1)
0x11cc: Push((int) 539913)
0x11cd: @@ SetMessage(Stack[-1])
0x11ce: Pop(1)
0x11cf: @@ ClearReplies()
0x11d0: Pop(0)
0x11d1: Push((int) 539917)
0x11d2: Push((int) 41880)
0x11d3: Push((int) 41879)
0x11d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d5: Pop(3)
0x11d6: Return(); Pop(0)

0x11d7: Push((int) 41880)
0x11d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d9: IF (Stack[-1] == 0) GOTO 0x11e9; Pop(1)

0x11da: PushEmpty(string)
0x11db: Stack[-1] = "Smile"
0x11dc: Call2 0xf93

0x11dd: Pop(1)
0x11de: Push((int) 539918)
0x11df: @@ SetMessage(Stack[-1])
0x11e0: Pop(1)
0x11e1: @@ ClearReplies()
0x11e2: Pop(0)
0x11e3: Push((int) 539919)
0x11e4: Push((int) 41882)
0x11e5: Push((int) 41881)
0x11e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e7: Pop(3)
0x11e8: Return(); Pop(0)

0x11e9: Push((int) 41882)
0x11ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11eb: IF (Stack[-1] == 0) GOTO 0x11fb; Pop(1)

0x11ec: PushEmpty(string)
0x11ed: Stack[-1] = "Smile"
0x11ee: Call2 0xf93

0x11ef: Pop(1)
0x11f0: Push((int) 539920)
0x11f1: @@ SetMessage(Stack[-1])
0x11f2: Pop(1)
0x11f3: @@ ClearReplies()
0x11f4: Pop(0)
0x11f5: Push((int) 539921)
0x11f6: Push((int) 41884)
0x11f7: Push((int) 41883)
0x11f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f9: Pop(3)
0x11fa: Return(); Pop(0)

0x11fb: Push((int) 41884)
0x11fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11fd: IF (Stack[-1] == 0) GOTO 0x120d; Pop(1)

0x11fe: PushEmpty(string)
0x11ff: Stack[-1] = "What"
0x1200: Call2 0xf93

0x1201: Pop(1)
0x1202: Push((int) 539922)
0x1203: @@ SetMessage(Stack[-1])
0x1204: Pop(1)
0x1205: @@ ClearReplies()
0x1206: Pop(0)
0x1207: Push((int) 539923)
0x1208: Push((int) -1)
0x1209: Push((int) 41885)
0x120a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x120b: Pop(3)
0x120c: Return(); Pop(0)

0x120d: Push((int) 15467)
0x120e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x120f: IF (Stack[-1] == 0) GOTO 0x1224; Pop(1)

0x1210: PushEmpty(string)
0x1211: Stack[-1] = "What"
0x1212: Call2 0xf93

0x1213: Pop(1)
0x1214: Push((int) 514249)
0x1215: @@ SetMessage(Stack[-1])
0x1216: Pop(1)
0x1217: @@ ClearReplies()
0x1218: Pop(0)
0x1219: Push((int) 514250)
0x121a: Push((int) 15469)
0x121b: Push((int) 15468)
0x121c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121d: Pop(3)
0x121e: Push((int) 514508)
0x121f: Push((int) 15742)
0x1220: Push((int) 15746)
0x1221: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1222: Pop(3)
0x1223: Return(); Pop(0)

0x1224: Push((int) 15469)
0x1225: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1226: IF (Stack[-1] == 0) GOTO 0x123b; Pop(1)

0x1227: PushEmpty(string)
0x1228: Stack[-1] = "What"
0x1229: Call2 0xf93

0x122a: Pop(1)
0x122b: Push((int) 514251)
0x122c: @@ SetMessage(Stack[-1])
0x122d: Pop(1)
0x122e: @@ ClearReplies()
0x122f: Pop(0)
0x1230: Push((int) 514252)
0x1231: Push((int) 15471)
0x1232: Push((int) 15470)
0x1233: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1234: Pop(3)
0x1235: Push((int) 514506)
0x1236: Push((int) 15748)
0x1237: Push((int) 15744)
0x1238: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1239: Pop(3)
0x123a: Return(); Pop(0)

0x123b: Push((int) 15748)
0x123c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123d: IF (Stack[-1] == 0) GOTO 0x1252; Pop(1)

0x123e: PushEmpty(string)
0x123f: Stack[-1] = "Grin"
0x1240: Call2 0xf93

0x1241: Pop(1)
0x1242: Push((int) 514509)
0x1243: @@ SetMessage(Stack[-1])
0x1244: Pop(1)
0x1245: @@ ClearReplies()
0x1246: Pop(0)
0x1247: Push((int) 514511)
0x1248: Push((int) 15751)
0x1249: Push((int) 15750)
0x124a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124b: Pop(3)
0x124c: Push((int) 514510)
0x124d: Push((int) -1)
0x124e: Push((int) 15749)
0x124f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1250: Pop(3)
0x1251: Return(); Pop(0)

0x1252: Push((int) 15751)
0x1253: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1254: IF (Stack[-1] == 0) GOTO 0x1269; Pop(1)

0x1255: PushEmpty(string)
0x1256: Stack[-1] = "Grin"
0x1257: Call2 0xf93

0x1258: Pop(1)
0x1259: Push((int) 514512)
0x125a: @@ SetMessage(Stack[-1])
0x125b: Pop(1)
0x125c: @@ ClearReplies()
0x125d: Pop(0)
0x125e: Push((int) 514513)
0x125f: Push((int) -1)
0x1260: Push((int) 15752)
0x1261: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1262: Pop(3)
0x1263: Push((int) 539924)
0x1264: Push((int) 15742)
0x1265: Push((int) 41886)
0x1266: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1267: Pop(3)
0x1268: Return(); Pop(0)

0x1269: Push((int) 15471)
0x126a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126b: IF (Stack[-1] == 0) GOTO 0x127b; Pop(1)

0x126c: PushEmpty(string)
0x126d: Stack[-1] = "What"
0x126e: Call2 0xf93

0x126f: Pop(1)
0x1270: Push((int) 514253)
0x1271: @@ SetMessage(Stack[-1])
0x1272: Pop(1)
0x1273: @@ ClearReplies()
0x1274: Pop(0)
0x1275: Push((int) 514254)
0x1276: Push((int) 15742)
0x1277: Push((int) 15472)
0x1278: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1279: Pop(3)
0x127a: Return(); Pop(0)

0x127b: Push((int) 15742)
0x127c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127d: IF (Stack[-1] == 0) GOTO 0x1292; Pop(1)

0x127e: PushEmpty(string)
0x127f: Stack[-1] = "What"
0x1280: Call2 0xf93

0x1281: Pop(1)
0x1282: Push((int) 514504)
0x1283: @@ SetMessage(Stack[-1])
0x1284: Pop(1)
0x1285: @@ ClearReplies()
0x1286: Pop(0)
0x1287: Push((int) 514505)
0x1288: Push((int) -1)
0x1289: Push((int) 15743)
0x128a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128b: Pop(3)
0x128c: Push((int) 539925)
0x128d: Push((int) -1)
0x128e: Push((int) 41888)
0x128f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1290: Pop(3)
0x1291: Return(); Pop(0)

0x1292: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1293: PushEmpty(bool)
0x1294: Call2 0x164c

0x1295: Pop(0)
0x1296: IF (Stack[-1] == 0) GOTO 0x129a; Pop(1)

0x1297: @ lshStopAnimation()
0x1298: Pop(0)
0x1299: GOTO 0x129c

0x129a: @ StopAnimation()
0x129b: Pop(0)
0x129c: Return(); Pop(0)

0x129d: GOTO 0xfaa

0x129e: Return(); Pop(0)

0x129f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x12a0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x12a1: PushEmpty(bool, object, float)
0x12a2: Stack[-2] = Stack[-12]
0x12a3: Stack[-1] = (float) 70.0
0x12a4: Call2 0x1491

0x12a5: Pop(2)
0x12a6: Pop(1); Push((bool) Stack[-1] == 0)
0x12a7: IF (Stack[-1] == 0) GOTO 0x12aa; Pop(1)

0x12a8: Stack[-10] = (int) -2
0x12a9: Return(); Pop(8)

0x12aa: @ CreateDialog(Stack[-4])
0x12ab: Pop(0)
0x12ac: PushEmpty(int)
0x12ad: Call2 0x1646

0x12ae: Pop(0)
0x12af: @@ SetNPCName(Stack[-1])
0x12b0: Pop(1)
0x12b1: PushEmpty(int)
0x12b2: Call2 0x1644

0x12b3: Pop(0)
0x12b4: @@ SetNPCDescription(Stack[-1])
0x12b5: Pop(1)
0x12b6: PushEmpty(string)
0x12b7: Call2 0x1648

0x12b8: Pop(0)
0x12b9: @@ SetPhoto(Stack[-1])
0x12ba: Pop(1)
0x12bb: PushEmpty(string)
0x12bc: Call2 0x164a

0x12bd: Pop(0)
0x12be: @@ SetPhoto2(Stack[-1])
0x12bf: Pop(1)
0x12c0: PushEmpty(int)
0x12c1: Call2 0x18f6

0x12c2: Pop(0)
0x12c3: @@ SetPlayerName(Stack[-1])
0x12c4: Pop(1)
0x12c5: Stack[-2] = (int) -1
0x12c6: @ IsOverrideActive(Stack[-3])
0x12c7: Pop(0)
0x12c8: Push(Stack[-3])
0x12c9: IF (Stack[-1] == 0) GOTO 0x12cc; Pop(1)

0x12ca: Stack[-10] = (int) -2
0x12cb: Return(); Pop(8)

0x12cc: @ DoDialog(Stack[-4])
0x12cd: Pop(0)
0x12ce: PushEmpty(bool, object)
0x12cf: PushEmpty(object)
0x12d0: Call2 0x15a5

0x12d1: Stack[-2] = Stack[-1]
0x12d2: Pop(1)
0x12d3: Call2 0x14e6

0x12d4: Pop(2)
0x12d5: PushEmpty(object, object)
0x12d6: Stack[-2] = Stack[-11]
0x12d7: Stack[-1] = Stack[-6]
0x12d8: Push(-2, 4); TaskCall(17)
0x12d9: Call2 0x12f0

0x12da: Pop(-2, 4); TaskReturn
0x12db: Pop(2)
0x12dc: @@ IsDialogEnd(Stack[-1])
0x12dd: Pop(0)
0x12de: Pop(0); Push((bool) Stack[-1] == 0)
0x12df: IF (Stack[-1] == 0) GOTO 0x12e5; Pop(1)

0x12e0: @ sync()
0x12e1: Pop(0)
0x12e2: @@ IsDialogEnd(Stack[-1])
0x12e3: Pop(0)
0x12e4: GOTO 0x12de

0x12e5: PushEmpty(object)
0x12e6: Stack[-1] = Stack[-10]
0x12e7: Call2 0x14d5

0x12e8: Pop(1)
0x12e9: @ StopDialog(Stack[-4])
0x12ea: Pop(0)
0x12eb: @@ GetReturnValue(Stack[-2])
0x12ec: Pop(0)
0x12ed: Stack[-10] = Stack[-2]
0x12ee: Return(); Pop(8)

0x12ef: Stack[-4] = 0
0x12f0: PushEmpty()
0x12f1: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x12f2: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x12f3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x12f4: Push((int) 1)
0x12f5: IF (Stack[-1] == 0) GOTO 0x130c; Pop(1)

0x12f6: PushEmpty(string)
0x12f7: Stack[-1] = "Neutral"
0x12f8: Call2 0x132a

0x12f9: Pop(1)
0x12fa: Push((int) 540542)
0x12fb: @@ SetMessage(Stack[-1])
0x12fc: Pop(1)
0x12fd: @@ ClearReplies()
0x12fe: Pop(0)
0x12ff: Push((int) 540543)
0x1300: Push((int) -1)
0x1301: Push((int) 42552)
0x1302: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1303: Pop(3)
0x1304: Push((int) 540796)
0x1305: Push((int) -1)
0x1306: Push((int) 42845)
0x1307: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1308: Pop(3)
0x1309: GOTO 0x130c

0x130a: Return(); Pop(0)

0x130b: GOTO 0x12f4

0x130c: PushEmpty(bool)
0x130d: Call2 0x164c

0x130e: Pop(0)
0x130f: IF (Stack[-1] == 0) GOTO 0x131b; Pop(1)

0x1310: @ lshWaitForAnimEnd()
0x1311: Pop(0)
0x1312: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1313: IF (Stack[-1] == 0) GOTO 0x1315; Pop(1)

0x1314: GOTO 0x131a

0x1315: PushEmpty(string)
0x1316: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1317: Call2 0x1570

0x1318: Pop(1)
0x1319: GOTO 0x1310

0x131a: GOTO 0x1329

0x131b: Push("all")
0x131c: Push("idle")
0x131d: @ PlayAnimation(Stack[-2], Stack[-1])
0x131e: Pop(2)
0x131f: @ WaitForAnimEnd()
0x1320: Pop(0)
0x1321: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1322: IF (Stack[-1] == 0) GOTO 0x1324; Pop(1)

0x1323: GOTO 0x1329

0x1324: Push("all")
0x1325: Push("idle")
0x1326: @ PlayAnimation(Stack[-2], Stack[-1])
0x1327: Pop(2)
0x1328: GOTO 0x131f

0x1329: Return(); Pop(0)

0x132a: PushEmpty()
0x132b: PushEmpty(bool)
0x132c: Call2 0x164c

0x132d: Pop(0)
0x132e: Pop(1); Push((bool) Stack[-1] == 0)
0x132f: IF (Stack[-1] == 0) GOTO 0x1331; Pop(1)

0x1330: Return(); Pop(0)

0x1331: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1332: IF (Stack[-1] == 0) GOTO 0x1334; Pop(1)

0x1333: Return(); Pop(0)

0x1334: PushEmpty(string, bool)
0x1335: Stack[-2] = Stack[-3]
0x1336: Push("")
0x1337: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1338: IF (Stack[-1] == 0) GOTO 0x133b; Pop(1)

0x1339: Stack[-1] = (bool) 0
0x133a: GOTO 0x133c

0x133b: Stack[-1] = (bool) 1
0x133c: Call2 0x1580

0x133d: Pop(2)
0x133e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x133f: Return(); Pop(0)

0x1340: PushEmpty()
0x1341: Push((int) 1)
0x1342: IF (Stack[-1] == 0) GOTO 0x1369; Pop(1)

0x1343: PushEmpty()
0x1344: Call2 0x159e

0x1345: Pop(0)
0x1346: Push((int) 42551)
0x1347: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1348: IF (Stack[-1] == 0) GOTO 0x135d; Pop(1)

0x1349: PushEmpty(string)
0x134a: Stack[-1] = "Neutral"
0x134b: Call2 0x132a

0x134c: Pop(1)
0x134d: Push((int) 540542)
0x134e: @@ SetMessage(Stack[-1])
0x134f: Pop(1)
0x1350: @@ ClearReplies()
0x1351: Pop(0)
0x1352: Push((int) 540543)
0x1353: Push((int) -1)
0x1354: Push((int) 42552)
0x1355: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1356: Pop(3)
0x1357: Push((int) 540796)
0x1358: Push((int) -1)
0x1359: Push((int) 42845)
0x135a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135b: Pop(3)
0x135c: Return(); Pop(0)

0x135d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x135e: PushEmpty(bool)
0x135f: Call2 0x164c

0x1360: Pop(0)
0x1361: IF (Stack[-1] == 0) GOTO 0x1365; Pop(1)

0x1362: @ lshStopAnimation()
0x1363: Pop(0)
0x1364: GOTO 0x1367

0x1365: @ StopAnimation()
0x1366: Pop(0)
0x1367: Return(); Pop(0)

0x1368: GOTO 0x1341

0x1369: Return(); Pop(0)

0x136a: PushEmpty()
0x136b: Call2 0x136e

0x136c: Pop(0)
0x136d: Return(); Pop(0)

0x136e: PushEmpty(bool)
0x136f: Call2 0x148c

0x1370: Pop(0)
0x1371: Pop(1); Push((bool) Stack[-1] == 0)
0x1372: IF (Stack[-1] == 0) GOTO 0x1375; Pop(1)

0x1373: @ Hold()
0x1374: Pop(0)
0x1375: @ GetDirection(Stack[-0])
0x1376: Pop(0)
0x1377: PushEmpty()
0x1378: Call2 0x141e

0x1379: Pop(0)
0x137a: GOTO 0x1377

0x137b: Return(); Pop(0)

0x137c: PushEmpty(object, object)
0x137d: Push("player")
0x137e: @ FindActor(Stack[-2], Stack[-1])
0x137f: Pop(1)
0x1380: Pop(0); Push((bool) Stack[-1] == 0)
0x1381: IF (Stack[-1] == 0) GOTO 0x1384; Pop(1)

0x1382: Stack[-3] = (bool) 0
0x1383: Return(); Pop(2)

0x1384: PushEmpty(bool, object)
0x1385: Stack[-1] = Stack[-3]
0x1386: Call2 0x1483

0x1387: Stack[-5] = Stack[-2]
0x1388: Pop(2)
0x1389: Return(); Pop(2)

0x138a: Stack[-1] = 0
0x138b: Push(CvectorIndex(Stack[-0], 0))
0x138c: Push(CvectorIndex(Stack[-0], 2))
0x138d: @ RotateAsync(Stack[-2], Stack[-1])
0x138e: Pop(2)
0x138f: Return(); Pop(0)

0x1390: PushEmpty(object, bool, object, bool)
0x1391: Push("player")
0x1392: @ FindActor(Stack[-3], Stack[-1])
0x1393: Pop(1)
0x1394: Pop(0); Push((bool) Stack[-2] == 0)
0x1395: IF (Stack[-1] == 0) GOTO 0x1398; Pop(1)

0x1396: Stack[-5] = (bool) 0
0x1397: Return(); Pop(4)

0x1398: PushEmpty(float, object)
0x1399: Stack[-1] = Stack[-4]
0x139a: Call2 0x146a

0x139b: Pop(1)
0x139c: Push((float)90000.0)
0x139d: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x139e: IF (Stack[-1] == 0) GOTO 0x13a1; Pop(1)

0x139f: Stack[-5] = (bool) 0
0x13a0: Return(); Pop(4)

0x13a1: @ CanSee(Stack[-1], Stack[-2])
0x13a2: Pop(0)
0x13a3: Stack[-5] = Stack[-1]
0x13a4: Return(); Pop(4)

0x13a5: Stack[-2] = 0
0x13a6: PushEmpty(float, float)
0x13a7: Push((int) 8)
0x13a8: Push((int) 16)
0x13a9: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x13aa: Pop(2)
0x13ab: Push((int) 10)
0x13ac: @ SetTimer(Stack[-1], Stack[-2])
0x13ad: Pop(1)
0x13ae: Return(); Pop(2)

0x13af: Push((int) 10)
0x13b0: @ KillTimer(Stack[-1])
0x13b1: Pop(1)
0x13b2: Return(); Pop(0)

0x13b3: PushEmpty()
0x13b4: Push((int) 10)
0x13b5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13b6: IF (Stack[-1] == 0) GOTO 0x13d8; Pop(1)

0x13b7: PushEmpty()
0x13b8: Call2 0x13af

0x13b9: Pop(0)
0x13ba: PushEmpty(bool)
0x13bb: Stack[-1] = (bool) 0
0x13bc: PushEmpty(bool)
0x13bd: Call2 0x148c

0x13be: Pop(0)
0x13bf: IF (Stack[-1] == 0) GOTO 0x13c5; Pop(1)

0x13c0: PushEmpty(bool)
0x13c1: Call2 0x1390

0x13c2: Pop(0)
0x13c3: IF (Stack[-1] == 0) GOTO 0x13c5; Pop(1)

0x13c4: Stack[-1] = (bool) 1
0x13c5: IF (Stack[-1] == 0) GOTO 0x13d2; Pop(1)

0x13c6: PushEmpty(bool)
0x13c7: Call2 0x137c

0x13c8: Pop(0)
0x13c9: IF (Stack[-1] == 0) GOTO 0x13d1; Pop(1)

0x13ca: PushEmpty(bool, object)
0x13cb: PushEmpty(object)
0x13cc: Call2 0x15a5

0x13cd: Stack[-2] = Stack[-1]
0x13ce: Pop(1)
0x13cf: Call2 0x1520

0x13d0: Pop(2)
0x13d1: GOTO 0x13d8

0x13d2: PushEmpty()
0x13d3: Call2 0x138b

0x13d4: Pop(0)
0x13d5: PushEmpty()
0x13d6: Call2 0x13a6

0x13d7: Pop(0)
0x13d8: Return(); Pop(0)

0x13d9: PushEmpty()
0x13da: Call2 0x1465

0x13db: Pop(0)
0x13dc: PushEmpty()
0x13dd: Call2 0x13af

0x13de: Pop(0)
0x13df: @ lshStopSpeech()
0x13e0: Pop(0)
0x13e1: @ lshStopAnimation()
0x13e2: Pop(0)
0x13e3: @ StopAsync()
0x13e4: Pop(0)
0x13e5: @ Hold()
0x13e6: Pop(0)
0x13e7: Return(); Pop(0)

0x13e8: @ StopGroup0()
0x13e9: Pop(0)
0x13ea: PushEmpty()
0x13eb: Call2 0x13af

0x13ec: Pop(0)
0x13ed: PushEmpty(string)
0x13ee: Stack[-1] = "Neutral"
0x13ef: Call2 0x1570

0x13f0: Pop(1)
0x13f1: PushEmpty()
0x13f2: Call2 0x13a6

0x13f3: Pop(0)
0x13f4: Return(); Pop(0)

0x13f5: PushEmpty()
0x13f6: Push(Stack[-1])
0x13f7: IF (Stack[-1] == 0) GOTO 0x13fc; Pop(1)

0x13f8: PushEmpty()
0x13f9: Call2 0x13a6

0x13fa: Pop(0)
0x13fb: GOTO 0x1400

0x13fc: PushEmpty(string)
0x13fd: Stack[-1] = "Neutral"
0x13fe: Call2 0x1570

0x13ff: Pop(1)
0x1400: Return(); Pop(0)

0x1401: PushEmpty(bool, bool)
0x1402: @ IsOverrideActive(Stack[-1])
0x1403: Pop(0)
0x1404: Pop(0); Push((bool) Stack[-1] == 0)
0x1405: IF (Stack[-1] == 0) GOTO 0x141d; Pop(1)

0x1406: EventDisable(0)
0x1407: PushEmpty()
0x1408: Call2 0x1465

0x1409: Pop(0)
0x140a: PushEmpty(bool, object)
0x140b: Stack[-1] = Stack[-5]
0x140c: Call2 0x1483

0x140d: Pop(2)
0x140e: EventEnable(0)
0x140f: PushEmpty(object)
0x1410: Stack[-1] = Stack[-4]
0x1411: Call2 0x1907

0x1412: Pop(1)
0x1413: PushEmpty(string)
0x1414: Stack[-1] = "Neutral"
0x1415: Call2 0x1570

0x1416: Pop(1)
0x1417: PushEmpty()
0x1418: Call2 0x13af

0x1419: Pop(0)
0x141a: PushEmpty()
0x141b: Call2 0x13a6

0x141c: Pop(0)
0x141d: Return(); Pop(2)

0x141e: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x141f: @ WaitForAnimEnd()
0x1420: Pop(0)
0x1421: PushEmpty(bool)
0x1422: Call2 0x148c

0x1423: Pop(0)
0x1424: Pop(1); Push((bool) Stack[-1] == 0)
0x1425: IF (Stack[-1] == 0) GOTO 0x1427; Pop(1)

0x1426: Return(); Pop(12)

0x1427: PushEmpty(int)
0x1428: Call2 0x1633

0x1429: Stack[-7] = Stack[-1]
0x142a: Pop(1)
0x142b: Stack[-5] = (int) 0
0x142c: PushEmpty(bool)
0x142d: Stack[-1] = (bool) 0
0x142e: Push((int) 5)
0x142f: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x1430: IF (Stack[-1] == 0) GOTO 0x1436; Pop(1)

0x1431: PushEmpty(bool)
0x1432: Call2 0x148c

0x1433: Pop(0)
0x1434: IF (Stack[-1] == 0) GOTO 0x1436; Pop(1)

0x1435: Stack[-1] = (bool) 1
0x1436: IF (Stack[-1] == 0) GOTO 0x1460; Pop(1)

0x1437: Pop(0); Push((bool) Stack[-6] == 0)
0x1438: IF (Stack[-1] == 0) GOTO 0x1440; Pop(1)

0x1439: Push((int) 3)
0x143a: @ Sleep(Stack[-1], Stack[-5])
0x143b: Pop(1)
0x143c: Pop(0); Push((bool) Stack[-4] == 0)
0x143d: IF (Stack[-1] == 0) GOTO 0x143f; Pop(1)

0x143e: GOTO 0x1460

0x143f: GOTO 0x1455

0x1440: @ irand(Stack[-3], Stack[-6])
0x1441: Pop(0)
0x1442: Push((int) 5)
0x1443: @ irand(Stack[-3], Stack[-1])
0x1444: Pop(1)
0x1445: Push((int) 0)
0x1446: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x1447: IF (Stack[-1] == 0) GOTO 0x1449; Pop(1)

0x1448: Stack[-3] = (int) 0
0x1449: Push("all")
0x144a: PushEmpty(string, int)
0x144b: Stack[-1] = Stack[-6]
0x144c: Call2 0x162c

0x144d: Pop(1)
0x144e: @ PlayAnimation(Stack[-2], Stack[-1])
0x144f: Pop(2)
0x1450: @ WaitForAnimEnd(Stack[-1])
0x1451: Pop(0)
0x1452: Pop(0); Push((bool) Stack[-1] == 0)
0x1453: IF (Stack[-1] == 0) GOTO 0x1455; Pop(1)

0x1454: GOTO 0x1460

0x1455: PushEmpty(bool)
0x1456: Call2 0x1463

0x1457: Pop(0)
0x1458: Pop(1); Push((bool) Stack[-1] == 0)
0x1459: IF (Stack[-1] == 0) GOTO 0x145b; Pop(1)

0x145a: GOTO 0x1460

0x145b: @ ResetAAS()
0x145c: Pop(0)
0x145d: Push((int) 1)
0x145e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x145f: GOTO 0x142c

0x1460: @ ResetAAS()
0x1461: Pop(0)
0x1462: Return(); Pop(12)

0x1463: Stack[-1] = (bool) 1
0x1464: Return(); Pop(0)

0x1465: @ StopAnimation()
0x1466: Pop(0)
0x1467: @ StopGroup0()
0x1468: Pop(0)
0x1469: Return(); Pop(0)

0x146a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x146b: @ GetPosition(Stack[-3])
0x146c: Pop(0)
0x146d: @@ GetPosition(Stack[-2])
0x146e: Pop(0)
0x146f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1470: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1471: Return(); Pop(6)

0x1472: PushEmpty(int, int)
0x1473: @@ GetProperty(Stack[-4], Stack[-1])
0x1474: Pop(0)
0x1475: Pop(0); Push(Stack[-1] + Stack[-3]);
0x1476: @@ SetProperty(Stack[-5], Stack[-1])
0x1477: Pop(1)
0x1478: Return(); Pop(2)

0x1479: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x147a: @ GetPosition(Stack[-3])
0x147b: Pop(0)
0x147c: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x147d: Push(CvectorIndex(Stack[-2], 0))
0x147e: Push(CvectorIndex(Stack[-3], 2))
0x147f: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x1480: Pop(2)
0x1481: Stack[-8] = Stack[-1]
0x1482: Return(); Pop(6)

0x1483: PushEmpty(cvector, cvector)
0x1484: @@ GetPosition(Stack[-1])
0x1485: Pop(0)
0x1486: PushEmpty(bool, cvector)
0x1487: Stack[-1] = Stack[-3]
0x1488: Call2 0x1479

0x1489: Stack[-6] = Stack[-2]
0x148a: Pop(2)
0x148b: Return(); Pop(2)

0x148c: PushEmpty(bool, bool)
0x148d: @ IsLoaded(Stack[-1])
0x148e: Pop(0)
0x148f: Stack[-3] = Stack[-1]
0x1490: Return(); Pop(2)

0x1491: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1492: @@ GetPosition(Stack[-8])
0x1493: Pop(0)
0x1494: @@ GetEyesHeight(Stack[-9])
0x1495: Pop(0)
0x1496: Push(CvectorIndex(Stack[-8], 1))
0x1497: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1498: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1499: @ GetPosition(Stack[-7])
0x149a: Pop(0)
0x149b: @ GetEyesHeight(Stack[-9])
0x149c: Pop(0)
0x149d: Push(CvectorIndex(Stack[-7], 1))
0x149e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x149f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x14a0: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x14a1: Push(CvectorIndex(Stack[-6], 1))
0x14a2: Stack[-1] = (int) 0
0x14a3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x14a4: Pop(0); Push(Stack[-6] | Stack[-6]);
0x14a5: Pop(1); Push(Sqrt(Stack[-1]))
0x14a6: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x14a7: Stack[-5] = -Stack[-6]; Pop(0);
0x14a8: Pop(0); Push(Stack[-6] * Stack[-19]);
0x14a9: PushEmpty(cvector, cvector)
0x14aa: Push(CVector(0.0, 1.0, 0.0))
0x14ab: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x14ac: Call2 0x15ab

0x14ad: Pop(1)
0x14ae: Push((int) 25)
0x14af: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14b0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x14b1: Push(CVector(0.0, 10.0, 0.0))
0x14b2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x14b3: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x14b4: @ IsOverrideActive(Stack[-2])
0x14b5: Pop(0)
0x14b6: Push(Stack[-2])
0x14b7: IF (Stack[-1] == 0) GOTO 0x14ba; Pop(1)

0x14b8: Stack[-21] = (bool) 0
0x14b9: Return(); Pop(18)

0x14ba: @ StopWorld()
0x14bb: Pop(0)
0x14bc: @ CameraTransit(Stack[-3], Stack[-5])
0x14bd: Pop(0)
0x14be: Push(CvectorIndex(Stack[-4], 0))
0x14bf: Push(CvectorIndex(Stack[-5], 2))
0x14c0: @ Rotate(Stack[-2], Stack[-1])
0x14c1: Pop(2)
0x14c2: PushEmpty(bool)
0x14c3: Call2 0x164c

0x14c4: Pop(0)
0x14c5: IF (Stack[-1] == 0) GOTO 0x14c7; Pop(1)

0x14c6: GOTO 0x14cf

0x14c7: Push("head")
0x14c8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x14c9: Pop(1)
0x14ca: Push(Stack[-1])
0x14cb: IF (Stack[-1] == 0) GOTO 0x14cf; Pop(1)

0x14cc: Push("head")
0x14cd: @ LookAsyncCamera(Stack[-1])
0x14ce: Pop(1)
0x14cf: @ CameraWaitForPlayFinish()
0x14d0: Pop(0)
0x14d1: @ ResumeWorld()
0x14d2: Pop(0)
0x14d3: Stack[-21] = (bool) 1
0x14d4: Return(); Pop(18)

0x14d5: PushEmpty(bool, bool)
0x14d6: @ CameraSwitchToNormal()
0x14d7: Pop(0)
0x14d8: PushEmpty(bool)
0x14d9: Call2 0x164c

0x14da: Pop(0)
0x14db: IF (Stack[-1] == 0) GOTO 0x14dd; Pop(1)

0x14dc: GOTO 0x14e5

0x14dd: Push("head")
0x14de: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x14df: Pop(1)
0x14e0: Push(Stack[-1])
0x14e1: IF (Stack[-1] == 0) GOTO 0x14e5; Pop(1)

0x14e2: Push("head")
0x14e3: @ UnlookAsync(Stack[-1])
0x14e4: Pop(1)
0x14e5: Return(); Pop(2)

0x14e6: PushEmpty(int, int, int, int)
0x14e7: Push("voice_common")
0x14e8: @ GetVariable(Stack[-1], Stack[-3])
0x14e9: Pop(1)
0x14ea: Push(Stack[-2])
0x14eb: IF (Stack[-1] == 0) GOTO 0x150c; Pop(1)

0x14ec: PushEmpty(bool, object)
0x14ed: Stack[-1] = Stack[-7]
0x14ee: Call2 0x1520

0x14ef: Pop(1)
0x14f0: Pop(1); Push((bool) Stack[-1] == 0)
0x14f1: IF (Stack[-1] == 0) GOTO 0x14fa; Pop(1)

0x14f2: PushEmpty(bool, object)
0x14f3: Stack[-1] = Stack[-7]
0x14f4: Call2 0x1545

0x14f5: Pop(1)
0x14f6: Pop(1); Push((bool) Stack[-1] == 0)
0x14f7: IF (Stack[-1] == 0) GOTO 0x14fa; Pop(1)

0x14f8: Stack[-6] = (bool) 0
0x14f9: Return(); Pop(4)

0x14fa: Push((int) 2)
0x14fb: @ irand(Stack[-2], Stack[-1])
0x14fc: Pop(1)
0x14fd: Push(Stack[-1])
0x14fe: IF (Stack[-1] == 0) GOTO 0x1507; Pop(1)

0x14ff: Push("voice_common")
0x1500: Push((int) 1)
0x1501: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1502: Push((int) 3)
0x1503: Pop(2); Push(Stack[-2] % Stack[-1]);
0x1504: @ SetVariable(Stack[-2], Stack[-1])
0x1505: Pop(2)
0x1506: GOTO 0x150b

0x1507: Push("voice_common")
0x1508: Push((int) 0)
0x1509: @ SetVariable(Stack[-2], Stack[-1])
0x150a: Pop(2)
0x150b: GOTO 0x151e

0x150c: PushEmpty(bool, object)
0x150d: Stack[-1] = Stack[-7]
0x150e: Call2 0x1545

0x150f: Pop(1)
0x1510: Pop(1); Push((bool) Stack[-1] == 0)
0x1511: IF (Stack[-1] == 0) GOTO 0x151a; Pop(1)

0x1512: PushEmpty(bool, object)
0x1513: Stack[-1] = Stack[-7]
0x1514: Call2 0x1520

0x1515: Pop(1)
0x1516: Pop(1); Push((bool) Stack[-1] == 0)
0x1517: IF (Stack[-1] == 0) GOTO 0x151a; Pop(1)

0x1518: Stack[-6] = (bool) 0
0x1519: Return(); Pop(4)

0x151a: Push("voice_common")
0x151b: Push((int) 1)
0x151c: @ SetVariable(Stack[-2], Stack[-1])
0x151d: Pop(2)
0x151e: Stack[-6] = (bool) 1
0x151f: Return(); Pop(4)

0x1520: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1521: Stack[-5] = "c"
0x1522: Stack[-4] = (int) 0
0x1523: Push((int) 1)
0x1524: IF (Stack[-1] == 0) GOTO 0x1530; Pop(1)

0x1525: Push((int) 1)
0x1526: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1527: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1528: @@ HasProperty(Stack[-1], Stack[-4])
0x1529: Pop(1)
0x152a: Pop(0); Push((bool) Stack[-3] == 0)
0x152b: IF (Stack[-1] == 0) GOTO 0x152d; Pop(1)

0x152c: GOTO 0x1530

0x152d: Push((int) 1)
0x152e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x152f: GOTO 0x1523

0x1530: Pop(0); Push((bool) Stack[-4] == 0)
0x1531: IF (Stack[-1] == 0) GOTO 0x1534; Pop(1)

0x1532: Stack[-12] = (bool) 0
0x1533: Return(); Pop(10)

0x1534: Stack[-2] = (int) 0
0x1535: Push((int) 1)
0x1536: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1537: IF (Stack[-1] == 0) GOTO 0x153a; Pop(1)

0x1538: @ irand(Stack[-2], Stack[-4])
0x1539: Pop(0)
0x153a: Push((int) 1)
0x153b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x153c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x153d: @@ GetProperty(Stack[-1], Stack[-2])
0x153e: Pop(1)
0x153f: PushEmpty(bool, string)
0x1540: Stack[-1] = Stack[-3]
0x1541: Call2 0x158f

0x1542: Stack[-14] = Stack[-2]
0x1543: Pop(2)
0x1544: Return(); Pop(10)

0x1545: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1546: Push("d")
0x1547: PushEmpty(int)
0x1548: Call2 0x160a

0x1549: Pop(0)
0x154a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x154b: Push("m")
0x154c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x154d: Stack[-4] = (int) 0
0x154e: Push((int) 1)
0x154f: IF (Stack[-1] == 0) GOTO 0x155b; Pop(1)

0x1550: Push((int) 1)
0x1551: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1552: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1553: @@ HasProperty(Stack[-1], Stack[-4])
0x1554: Pop(1)
0x1555: Pop(0); Push((bool) Stack[-3] == 0)
0x1556: IF (Stack[-1] == 0) GOTO 0x1558; Pop(1)

0x1557: GOTO 0x155b

0x1558: Push((int) 1)
0x1559: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x155a: GOTO 0x154e

0x155b: Pop(0); Push((bool) Stack[-4] == 0)
0x155c: IF (Stack[-1] == 0) GOTO 0x155f; Pop(1)

0x155d: Stack[-12] = (bool) 0
0x155e: Return(); Pop(10)

0x155f: Stack[-2] = (int) 0
0x1560: Push((int) 1)
0x1561: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1562: IF (Stack[-1] == 0) GOTO 0x1565; Pop(1)

0x1563: @ irand(Stack[-2], Stack[-4])
0x1564: Pop(0)
0x1565: Push((int) 1)
0x1566: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1567: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1568: @@ GetProperty(Stack[-1], Stack[-2])
0x1569: Pop(1)
0x156a: PushEmpty(bool, string)
0x156b: Stack[-1] = Stack[-3]
0x156c: Call2 0x158f

0x156d: Stack[-14] = Stack[-2]
0x156e: Pop(2)
0x156f: Return(); Pop(10)

0x1570: PushEmpty(bool, float, float, bool, float, float)
0x1571: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1572: Pop(0)
0x1573: Push(Stack[-3])
0x1574: IF (Stack[-1] == 0) GOTO 0x157b; Pop(1)

0x1575: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1576: Pop(0)
0x1577: Push((bool) 0)
0x1578: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1579: Pop(1)
0x157a: GOTO 0x157f

0x157b: Push("Can't find lsh animation : ")
0x157c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x157d: @ Trace(Stack[-1])
0x157e: Pop(1)
0x157f: Return(); Pop(6)

0x1580: PushEmpty(bool, float, float, bool, float, float)
0x1581: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1582: Pop(0)
0x1583: Push(Stack[-3])
0x1584: IF (Stack[-1] == 0) GOTO 0x158a; Pop(1)

0x1585: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1586: Pop(0)
0x1587: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1588: Pop(0)
0x1589: GOTO 0x158e

0x158a: Push("Can't find lsh animation : ")
0x158b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x158c: @ Trace(Stack[-1])
0x158d: Pop(1)
0x158e: Return(); Pop(6)

0x158f: PushEmpty(bool, bool)
0x1590: PushEmpty(bool)
0x1591: Call2 0x164c

0x1592: Pop(0)
0x1593: IF (Stack[-1] == 0) GOTO 0x159c; Pop(1)

0x1594: @ lshHasSpeech(Stack[-1], Stack[-3])
0x1595: Pop(0)
0x1596: Push(Stack[-1])
0x1597: IF (Stack[-1] == 0) GOTO 0x159c; Pop(1)

0x1598: @ lshPlaySpeech(Stack[-3])
0x1599: Pop(0)
0x159a: Stack[-4] = (bool) 1
0x159b: Return(); Pop(2)

0x159c: Stack[-4] = (bool) 0
0x159d: Return(); Pop(2)

0x159e: PushEmpty(bool)
0x159f: Call2 0x164c

0x15a0: Pop(0)
0x15a1: IF (Stack[-1] == 0) GOTO 0x15a4; Pop(1)

0x15a2: @ lshStopSpeech()
0x15a3: Pop(0)
0x15a4: Return(); Pop(0)

0x15a5: PushEmpty(object, object)
0x15a6: @ self(Stack[-1])
0x15a7: Pop(0)
0x15a8: Stack[-3] = Stack[-1]
0x15a9: Return(); Pop(2)

0x15aa: Stack[-1] = 0
0x15ab: PushEmpty(float, float)
0x15ac: Pop(0); Push(Stack[-3] | Stack[-3]);
0x15ad: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x15ae: Push((float)0.0)
0x15af: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x15b0: IF (Stack[-1] == 0) GOTO 0x15b3; Pop(1)

0x15b1: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x15b2: Return(); Pop(2)

0x15b3: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x15b4: Return(); Pop(2)

0x15b5: PushEmpty(int, int)
0x15b6: @ GetVariable(Stack[-3], Stack[-1])
0x15b7: Pop(0)
0x15b8: Stack[-4] = Stack[-1]
0x15b9: Return(); Pop(2)

0x15ba: PushEmpty(object, object)
0x15bb: @ CreateIntVector(Stack[-1])
0x15bc: Pop(0)
0x15bd: @@ add(Stack[-4])
0x15be: Pop(0)
0x15bf: @@ add(Stack[-3])
0x15c0: Pop(0)
0x15c1: Push((int) 3)
0x15c2: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x15c3: Pop(1)
0x15c4: Return(); Pop(2)

0x15c5: Stack[-1] = 0
0x15c6: PushEmpty(int, int)
0x15c7: PushEmpty(object, string, int)
0x15c8: Stack[-3] = Stack[-7]
0x15c9: Stack[-2] = "money"
0x15ca: Stack[-1] = Stack[-6]
0x15cb: Call2 0x1472

0x15cc: Pop(3)
0x15cd: Push((int) 0)
0x15ce: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x15cf: IF (Stack[-1] == 0) GOTO 0x15d8; Pop(1)

0x15d0: Push("Money")
0x15d1: @ GetInvItemByName(Stack[-2], Stack[-1])
0x15d2: Pop(1)
0x15d3: PushEmpty(int, int)
0x15d4: Stack[-2] = Stack[-3]
0x15d5: Stack[-1] = Stack[-5]
0x15d6: Call2 0x15ba

0x15d7: Pop(2)
0x15d8: Return(); Pop(2)

0x15d9: PushEmpty(int, int, bool, int, int, bool)
0x15da: @@ GetItemID(Stack[-3])
0x15db: Pop(0)
0x15dc: Push("Category")
0x15dd: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x15de: Pop(1)
0x15df: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x15e0: Pop(0)
0x15e1: Pop(0); Push((bool) Stack[-1] == 0)
0x15e2: IF (Stack[-1] == 0) GOTO 0x15e6; Pop(1)

0x15e3: @@ DropItems(Stack[-8], Stack[-7])
0x15e4: Pop(0)
0x15e5: GOTO 0x15eb

0x15e6: PushEmpty(int, int)
0x15e7: Stack[-2] = Stack[-5]
0x15e8: Stack[-1] = Stack[-9]
0x15e9: Call2 0x15ba

0x15ea: Pop(2)
0x15eb: Return(); Pop(6)

0x15ec: PushEmpty(object, object)
0x15ed: @ CreateInvItem(Stack[-1])
0x15ee: Pop(0)
0x15ef: @@ SetItemName(Stack[-4])
0x15f0: Pop(0)
0x15f1: PushEmpty(object, object, int)
0x15f2: Stack[-3] = Stack[-8]
0x15f3: Stack[-2] = Stack[-4]
0x15f4: Stack[-1] = Stack[-6]
0x15f5: Call2 0x15d9

0x15f6: Pop(3)
0x15f7: Return(); Pop(2)

0x15f8: Stack[-1] = 0
0x15f9: PushEmpty(object, object)
0x15fa: @ FindActor(Stack[-1], Stack[-4])
0x15fb: Pop(0)
0x15fc: Pop(0); Push((bool) Stack[-1] == 0)
0x15fd: IF (Stack[-1] == 0) GOTO 0x1600; Pop(1)

0x15fe: Stack[-5] = (bool) 0
0x15ff: Return(); Pop(2)

0x1600: @ Trigger(Stack[-1], Stack[-3])
0x1601: Pop(0)
0x1602: Stack[-5] = (bool) 1
0x1603: Return(); Pop(2)

0x1604: Stack[-1] = 0
0x1605: PushEmpty(float, float)
0x1606: @ GetGameTime(Stack[-1])
0x1607: Pop(0)
0x1608: Stack[-3] = Stack[-1]
0x1609: Return(); Pop(2)

0x160a: PushEmpty(float, float)
0x160b: @ GetGameTime(Stack[-1])
0x160c: Pop(0)
0x160d: Push((int) 1)
0x160e: PushEmpty(int)
0x160f: Push((int) 24)
0x1610: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1611: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1612: Return(); Pop(2)

0x1613: PushEmpty()
0x1614: PushEmpty(int)
0x1615: Call2 0x160a

0x1616: Pop(0)
0x1617: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x1618: Return(); Pop(0)

0x1619: PushEmpty(float, int, int, float, int, int)
0x161a: @ GetGameTime(Stack[-3])
0x161b: Pop(0)
0x161c: Push((int) 1)
0x161d: PushEmpty(int)
0x161e: Push((int) 24)
0x161f: Stack[-2] = Stack[-6] / Stack[-1]; Pop(1);
0x1620: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x1621: Pop(0); Push((bool) Stack[-2] != Stack[-7])
0x1622: IF (Stack[-1] == 0) GOTO 0x1625; Pop(1)

0x1623: Stack[-8] = (bool) 0
0x1624: Return(); Pop(6)

0x1625: PushEmpty(int)
0x1626: Stack[-1] = Stack[-4]
0x1627: Push((int) 24)
0x1628: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0x1629: Push((int) 7)
0x162a: Stack[-9] = Stack[-2] < Stack[-1]; Pop(1);
0x162b: Return(); Pop(6)

0x162c: PushEmpty(string, string)
0x162d: Stack[-1] = "idle"
0x162e: Push(Stack[-3])
0x162f: IF (Stack[-1] == 0) GOTO 0x1631; Pop(1)

0x1630: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1631: Stack[-4] = Stack[-1]
0x1632: Return(); Pop(2)

0x1633: PushEmpty(int, bool, int, bool)
0x1634: Stack[-2] = (int) 0
0x1635: Push("all")
0x1636: PushEmpty(string, int)
0x1637: Stack[-1] = Stack[-5]
0x1638: Call2 0x162c

0x1639: Pop(1)
0x163a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x163b: Pop(2)
0x163c: Pop(0); Push((bool) Stack[-1] == 0)
0x163d: IF (Stack[-1] == 0) GOTO 0x163f; Pop(1)

0x163e: GOTO 0x1642

0x163f: Push((int) 1)
0x1640: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1641: GOTO 0x1635

0x1642: Stack[-5] = Stack[-2]
0x1643: Return(); Pop(4)

0x1644: Stack[-1] = (int) 515529
0x1645: Return(); Pop(0)

0x1646: Stack[-1] = (int) 502855
0x1647: Return(); Pop(0)

0x1648: Stack[-1] = "ui/NPC_Andrei.png"
0x1649: Return(); Pop(0)

0x164a: Stack[-1] = "ui/NPC_Andrei_b.png"
0x164b: Return(); Pop(0)

0x164c: Stack[-1] = (bool) 1
0x164d: Return(); Pop(0)

0x164e: PushEmpty()
0x164f: PushEmpty(object, string, float)
0x1650: PushEmpty(object)
0x1651: Call2 0x18c4

0x1652: Stack[-4] = Stack[-1]
0x1653: Pop(1)
0x1654: Stack[-2] = "pt_map_aglaja"
0x1655: Stack[-1] = (int) 2
0x1656: Call2 0x18d5

0x1657: Pop(3)
0x1658: PushEmpty(object)
0x1659: Call2 0x18c4

0x165a: Pop(0)
0x165b: @@ ShowMap(Stack[-1])
0x165c: Pop(1)
0x165d: Return(); Pop(0)

0x165e: PushEmpty()
0x165f: Push("money1000 is given")
0x1660: @ Trace(Stack[-1])
0x1661: Pop(1)
0x1662: PushEmpty(object, int)
0x1663: Stack[-2] = Stack[-4]
0x1664: Stack[-1] = (int) 1000
0x1665: Call2 0x15c6

0x1666: Pop(2)
0x1667: Return(); Pop(0)

0x1668: PushEmpty()
0x1669: Push("playsound")
0x166a: Push("givemoney")
0x166b: @ TriggerWorld(Stack[-2], Stack[-1])
0x166c: Pop(2)
0x166d: Return(); Pop(0)

0x166e: PushEmpty()
0x166f: Push("playsound")
0x1670: Push("giveitem")
0x1671: @ TriggerWorld(Stack[-2], Stack[-1])
0x1672: Pop(2)
0x1673: Return(); Pop(0)

0x1674: PushEmpty()
0x1675: Push("ood2Andrei1")
0x1676: Push((int) 1)
0x1677: @ SetVariable(Stack[-2], Stack[-1])
0x1678: Pop(2)
0x1679: Return(); Pop(0)

0x167a: PushEmpty()
0x167b: Push("ood2Andrei2")
0x167c: Push((int) 1)
0x167d: @ SetVariable(Stack[-2], Stack[-1])
0x167e: Pop(2)
0x167f: Return(); Pop(0)

0x1680: PushEmpty()
0x1681: Push("ood2Andrei3")
0x1682: Push((int) 1)
0x1683: @ SetVariable(Stack[-2], Stack[-1])
0x1684: Pop(2)
0x1685: Return(); Pop(0)

0x1686: PushEmpty()
0x1687: Push("ood2Andrei4")
0x1688: Push((int) 1)
0x1689: @ SetVariable(Stack[-2], Stack[-1])
0x168a: Pop(2)
0x168b: Return(); Pop(0)

0x168c: PushEmpty()
0x168d: Push("ood2Andrei5")
0x168e: Push((int) 1)
0x168f: @ SetVariable(Stack[-2], Stack[-1])
0x1690: Pop(2)
0x1691: Return(); Pop(0)

0x1692: PushEmpty()
0x1693: Push("KnowAgo")
0x1694: Push((int) 1)
0x1695: @ SetVariable(Stack[-2], Stack[-1])
0x1696: Pop(2)
0x1697: Return(); Pop(0)

0x1698: PushEmpty()
0x1699: PushEmpty(int, string)
0x169a: Stack[-1] = "map_chertez_state"
0x169b: Call2 0x15b5

0x169c: Pop(1)
0x169d: Push((int) 6)
0x169e: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x169f: IF (Stack[-1] == 0) GOTO 0x16a8; Pop(1)

0x16a0: Push("map_chertez_state")
0x16a1: Push((int) 6)
0x16a2: @ SetVariable(Stack[-2], Stack[-1])
0x16a3: Pop(2)
0x16a4: Push("map_chertez_force")
0x16a5: Push((int) 1)
0x16a6: @ SetVariable(Stack[-2], Stack[-1])
0x16a7: Pop(2)
0x16a8: Return(); Pop(0)

0x16a9: PushEmpty(object, object)
0x16aa: Push("d2q02")
0x16ab: Push((int) 2)
0x16ac: @ SetVariable(Stack[-2], Stack[-1])
0x16ad: Pop(2)
0x16ae: PushEmpty(object)
0x16af: Call2 0x18c4

0x16b0: Stack[-2] = Stack[-1]
0x16b1: Pop(1)
0x16b2: Push("d2q02AndreiGotoPetr")
0x16b3: Push("pt_map_petr")
0x16b4: Push((int) 0)
0x16b5: Push((int) 515273)
0x16b6: PushEmpty(float)
0x16b7: Call2 0x1605

0x16b8: Pop(0)
0x16b9: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16ba: Pop(5)
0x16bb: PushEmpty()
0x16bc: Call2 0x1881

0x16bd: Pop(0)
0x16be: Return(); Pop(2)

0x16bf: Stack[-1] = 0
0x16c0: PushEmpty(object, object)
0x16c1: Push("d2q02")
0x16c2: Push((int) 6)
0x16c3: @ SetVariable(Stack[-2], Stack[-1])
0x16c4: Pop(2)
0x16c5: PushEmpty(object)
0x16c6: Call2 0x18c4

0x16c7: Stack[-2] = Stack[-1]
0x16c8: Pop(1)
0x16c9: Push("d2q02AndreiGotoGrif")
0x16ca: Push("pt_map_grif")
0x16cb: Push((int) 0)
0x16cc: Push((int) 515277)
0x16cd: PushEmpty(float)
0x16ce: Call2 0x1605

0x16cf: Pop(0)
0x16d0: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16d1: Pop(5)
0x16d2: PushEmpty()
0x16d3: Call2 0x1874

0x16d4: Pop(0)
0x16d5: Return(); Pop(2)

0x16d6: Stack[-1] = 0
0x16d7: PushEmpty()
0x16d8: Push("d2q02")
0x16d9: Push((int) 8)
0x16da: @ SetVariable(Stack[-2], Stack[-1])
0x16db: Pop(2)
0x16dc: PushEmpty()
0x16dd: Call2 0x188e

0x16de: Pop(0)
0x16df: PushEmpty(bool, string, string)
0x16e0: Stack[-2] = "quest_d2_02"
0x16e1: Stack[-1] = "put_patrol"
0x16e2: Call2 0x15f9

0x16e3: Pop(3)
0x16e4: Return(); Pop(0)

0x16e5: PushEmpty()
0x16e6: PushEmpty(object, string, float)
0x16e7: PushEmpty(object)
0x16e8: Call2 0x18c4

0x16e9: Stack[-4] = Stack[-1]
0x16ea: Pop(1)
0x16eb: Stack[-2] = "pt_map_grif"
0x16ec: Stack[-1] = (int) 2
0x16ed: Call2 0x18d5

0x16ee: Pop(3)
0x16ef: PushEmpty(object)
0x16f0: Call2 0x18c4

0x16f1: Pop(0)
0x16f2: @@ ShowMap(Stack[-1])
0x16f3: Pop(1)
0x16f4: Return(); Pop(0)

0x16f5: PushEmpty()
0x16f6: Push("tvirin is given")
0x16f7: @ Trace(Stack[-1])
0x16f8: Pop(1)
0x16f9: PushEmpty(object, string, int)
0x16fa: Stack[-3] = Stack[-5]
0x16fb: Stack[-2] = "tvirin"
0x16fc: Stack[-1] = (int) 1
0x16fd: Call2 0x15ec

0x16fe: Pop(3)
0x16ff: Return(); Pop(0)

0x1700: PushEmpty()
0x1701: Push("KnowAndrei")
0x1702: Push((int) 1)
0x1703: @ SetVariable(Stack[-2], Stack[-1])
0x1704: Pop(2)
0x1705: Return(); Pop(0)

0x1706: PushEmpty()
0x1707: Push("ood11Andrei1")
0x1708: Push((int) 1)
0x1709: @ SetVariable(Stack[-2], Stack[-1])
0x170a: Pop(2)
0x170b: Return(); Pop(0)

0x170c: PushEmpty()
0x170d: Push("d11q01")
0x170e: Push((int) 4)
0x170f: @ SetVariable(Stack[-2], Stack[-1])
0x1710: Pop(2)
0x1711: PushEmpty()
0x1712: Call2 0x1867

0x1713: Pop(0)
0x1714: Push("blueprint is given")
0x1715: @ Trace(Stack[-1])
0x1716: Pop(1)
0x1717: PushEmpty(object, string, int)
0x1718: Stack[-3] = Stack[-5]
0x1719: Stack[-2] = "d11q01_blueprint"
0x171a: Stack[-1] = (int) 1
0x171b: Call2 0x15ec

0x171c: Pop(3)
0x171d: Return(); Pop(0)

0x171e: PushEmpty()
0x171f: Push("ood11Andrei2")
0x1720: Push((int) 1)
0x1721: @ SetVariable(Stack[-2], Stack[-1])
0x1722: Pop(2)
0x1723: Return(); Pop(0)

0x1724: PushEmpty()
0x1725: Push("ood11Andrei3")
0x1726: Push((int) 1)
0x1727: @ SetVariable(Stack[-2], Stack[-1])
0x1728: Pop(2)
0x1729: Return(); Pop(0)

0x172a: PushEmpty()
0x172b: PushEmpty(object, string, float)
0x172c: PushEmpty(object)
0x172d: Call2 0x18c4

0x172e: Stack[-4] = Stack[-1]
0x172f: Pop(1)
0x1730: Stack[-2] = "pt_map_petr"
0x1731: Stack[-1] = (int) 2
0x1732: Call2 0x18d5

0x1733: Pop(3)
0x1734: PushEmpty(object)
0x1735: Call2 0x18c4

0x1736: Pop(0)
0x1737: @@ ShowMap(Stack[-1])
0x1738: Pop(1)
0x1739: Return(); Pop(0)

0x173a: PushEmpty()
0x173b: Push("ood3Andrei1")
0x173c: Push((int) 1)
0x173d: @ SetVariable(Stack[-2], Stack[-1])
0x173e: Pop(2)
0x173f: Return(); Pop(0)

0x1740: PushEmpty()
0x1741: Push("ood10Andrei1")
0x1742: Push((int) 1)
0x1743: @ SetVariable(Stack[-2], Stack[-1])
0x1744: Pop(2)
0x1745: Return(); Pop(0)

0x1746: PushEmpty()
0x1747: PushEmpty(bool)
0x1748: Stack[-1] = (bool) 0
0x1749: PushEmpty(bool)
0x174a: Stack[-1] = (bool) 0
0x174b: PushEmpty(int, string)
0x174c: Stack[-1] = "d3q01"
0x174d: Call2 0x15b5

0x174e: Pop(1)
0x174f: Push((int) 0)
0x1750: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1751: Pop(1); Push((bool) Stack[-1] == 0)
0x1752: IF (Stack[-1] == 0) GOTO 0x175c; Pop(1)

0x1753: PushEmpty(int, string)
0x1754: Stack[-1] = "d3q01"
0x1755: Call2 0x15b5

0x1756: Pop(1)
0x1757: Push((int) 1000)
0x1758: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1759: Pop(1); Push((bool) Stack[-1] == 0)
0x175a: IF (Stack[-1] == 0) GOTO 0x175c; Pop(1)

0x175b: Stack[-1] = (bool) 1
0x175c: IF (Stack[-1] == 0) GOTO 0x1766; Pop(1)

0x175d: PushEmpty(int, string)
0x175e: Stack[-1] = "d3q01"
0x175f: Call2 0x15b5

0x1760: Pop(1)
0x1761: Push((int) -1)
0x1762: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1763: Pop(1); Push((bool) Stack[-1] == 0)
0x1764: IF (Stack[-1] == 0) GOTO 0x1766; Pop(1)

0x1765: Stack[-1] = (bool) 1
0x1766: IF (Stack[-1] == 0) GOTO 0x1769; Pop(1)

0x1767: Stack[-2] = (bool) 1
0x1768: Return(); Pop(0)

0x1769: Stack[-2] = (bool) 0
0x176a: Return(); Pop(0)

0x176b: PushEmpty()
0x176c: PushEmpty(int, string)
0x176d: Stack[-1] = "d10q01SoldierTalk"
0x176e: Call2 0x15b5

0x176f: Pop(1)
0x1770: Push((int) 0)
0x1771: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1772: IF (Stack[-1] == 0) GOTO 0x1775; Pop(1)

0x1773: Stack[-2] = (bool) 1
0x1774: Return(); Pop(0)

0x1775: Stack[-2] = (bool) 0
0x1776: Return(); Pop(0)

0x1777: PushEmpty()
0x1778: PushEmpty(int, string)
0x1779: Stack[-1] = "ood2Andrei1"
0x177a: Call2 0x15b5

0x177b: Pop(1)
0x177c: Push((int) 0)
0x177d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x177e: IF (Stack[-1] == 0) GOTO 0x1781; Pop(1)

0x177f: Stack[-2] = (bool) 1
0x1780: Return(); Pop(0)

0x1781: Stack[-2] = (bool) 0
0x1782: Return(); Pop(0)

0x1783: PushEmpty()
0x1784: PushEmpty(int, string)
0x1785: Stack[-1] = "ood2Andrei2"
0x1786: Call2 0x15b5

0x1787: Pop(1)
0x1788: Push((int) 0)
0x1789: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x178a: IF (Stack[-1] == 0) GOTO 0x178d; Pop(1)

0x178b: Stack[-2] = (bool) 1
0x178c: Return(); Pop(0)

0x178d: Stack[-2] = (bool) 0
0x178e: Return(); Pop(0)

0x178f: PushEmpty()
0x1790: PushEmpty(int, string)
0x1791: Stack[-1] = "ood2Andrei3"
0x1792: Call2 0x15b5

0x1793: Pop(1)
0x1794: Push((int) 0)
0x1795: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1796: IF (Stack[-1] == 0) GOTO 0x1799; Pop(1)

0x1797: Stack[-2] = (bool) 1
0x1798: Return(); Pop(0)

0x1799: Stack[-2] = (bool) 0
0x179a: Return(); Pop(0)

0x179b: PushEmpty()
0x179c: PushEmpty(int, string)
0x179d: Stack[-1] = "ood2Andrei4"
0x179e: Call2 0x15b5

0x179f: Pop(1)
0x17a0: Push((int) 0)
0x17a1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17a2: IF (Stack[-1] == 0) GOTO 0x17a5; Pop(1)

0x17a3: Stack[-2] = (bool) 1
0x17a4: Return(); Pop(0)

0x17a5: Stack[-2] = (bool) 0
0x17a6: Return(); Pop(0)

0x17a7: PushEmpty()
0x17a8: PushEmpty(int, string)
0x17a9: Stack[-1] = "ood2Andrei5"
0x17aa: Call2 0x15b5

0x17ab: Pop(1)
0x17ac: Push((int) 0)
0x17ad: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17ae: IF (Stack[-1] == 0) GOTO 0x17b1; Pop(1)

0x17af: Stack[-2] = (bool) 1
0x17b0: Return(); Pop(0)

0x17b1: Stack[-2] = (bool) 0
0x17b2: Return(); Pop(0)

0x17b3: PushEmpty()
0x17b4: PushEmpty(int, string)
0x17b5: Stack[-1] = "d2q02"
0x17b6: Call2 0x15b5

0x17b7: Pop(1)
0x17b8: Push((int) 1000)
0x17b9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17ba: IF (Stack[-1] == 0) GOTO 0x17bd; Pop(1)

0x17bb: Stack[-2] = (bool) 1
0x17bc: Return(); Pop(0)

0x17bd: Stack[-2] = (bool) 0
0x17be: Return(); Pop(0)

0x17bf: PushEmpty()
0x17c0: PushEmpty(int, string)
0x17c1: Stack[-1] = "d2q02"
0x17c2: Call2 0x15b5

0x17c3: Pop(1)
0x17c4: Push((int) 1)
0x17c5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17c6: IF (Stack[-1] == 0) GOTO 0x17c9; Pop(1)

0x17c7: Stack[-2] = (bool) 1
0x17c8: Return(); Pop(0)

0x17c9: Stack[-2] = (bool) 0
0x17ca: Return(); Pop(0)

0x17cb: PushEmpty()
0x17cc: PushEmpty(int, string)
0x17cd: Stack[-1] = "d2q02"
0x17ce: Call2 0x15b5

0x17cf: Pop(1)
0x17d0: Push((int) 3)
0x17d1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17d2: IF (Stack[-1] == 0) GOTO 0x17d5; Pop(1)

0x17d3: Stack[-2] = (bool) 1
0x17d4: Return(); Pop(0)

0x17d5: Stack[-2] = (bool) 0
0x17d6: Return(); Pop(0)

0x17d7: PushEmpty()
0x17d8: PushEmpty(int, string)
0x17d9: Stack[-1] = "d2q02"
0x17da: Call2 0x15b5

0x17db: Pop(1)
0x17dc: Push((int) 5)
0x17dd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17de: IF (Stack[-1] == 0) GOTO 0x17e1; Pop(1)

0x17df: Stack[-2] = (bool) 1
0x17e0: Return(); Pop(0)

0x17e1: Stack[-2] = (bool) 0
0x17e2: Return(); Pop(0)

0x17e3: PushEmpty()
0x17e4: PushEmpty(int, string)
0x17e5: Stack[-1] = "d2q02"
0x17e6: Call2 0x15b5

0x17e7: Pop(1)
0x17e8: Push((int) 7)
0x17e9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17ea: IF (Stack[-1] == 0) GOTO 0x17ed; Pop(1)

0x17eb: Stack[-2] = (bool) 1
0x17ec: Return(); Pop(0)

0x17ed: Stack[-2] = (bool) 0
0x17ee: Return(); Pop(0)

0x17ef: PushEmpty()
0x17f0: PushEmpty(int, string)
0x17f1: Stack[-1] = "KnowGrif"
0x17f2: Call2 0x15b5

0x17f3: Pop(1)
0x17f4: Push((int) 1)
0x17f5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17f6: IF (Stack[-1] == 0) GOTO 0x17f9; Pop(1)

0x17f7: Stack[-2] = (bool) 1
0x17f8: Return(); Pop(0)

0x17f9: Stack[-2] = (bool) 0
0x17fa: Return(); Pop(0)

0x17fb: PushEmpty()
0x17fc: PushEmpty(int, string)
0x17fd: Stack[-1] = "d11q01"
0x17fe: Call2 0x15b5

0x17ff: Pop(1)
0x1800: Push((int) 3)
0x1801: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1802: IF (Stack[-1] == 0) GOTO 0x1805; Pop(1)

0x1803: Stack[-2] = (bool) 1
0x1804: Return(); Pop(0)

0x1805: Stack[-2] = (bool) 0
0x1806: Return(); Pop(0)

0x1807: PushEmpty()
0x1808: PushEmpty(int, string)
0x1809: Stack[-1] = "ood11Andrei1"
0x180a: Call2 0x15b5

0x180b: Pop(1)
0x180c: Push((int) 0)
0x180d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x180e: IF (Stack[-1] == 0) GOTO 0x1811; Pop(1)

0x180f: Stack[-2] = (bool) 1
0x1810: Return(); Pop(0)

0x1811: Stack[-2] = (bool) 0
0x1812: Return(); Pop(0)

0x1813: PushEmpty()
0x1814: PushEmpty(int, string)
0x1815: Stack[-1] = "d11q01"
0x1816: Call2 0x15b5

0x1817: Pop(1)
0x1818: Push((int) 4)
0x1819: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x181a: IF (Stack[-1] == 0) GOTO 0x181d; Pop(1)

0x181b: Stack[-2] = (bool) 1
0x181c: Return(); Pop(0)

0x181d: Stack[-2] = (bool) 0
0x181e: Return(); Pop(0)

0x181f: PushEmpty()
0x1820: PushEmpty(int, string)
0x1821: Stack[-1] = "ood11Andrei2"
0x1822: Call2 0x15b5

0x1823: Pop(1)
0x1824: Push((int) 0)
0x1825: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1826: IF (Stack[-1] == 0) GOTO 0x1829; Pop(1)

0x1827: Stack[-2] = (bool) 1
0x1828: Return(); Pop(0)

0x1829: Stack[-2] = (bool) 0
0x182a: Return(); Pop(0)

0x182b: PushEmpty()
0x182c: PushEmpty(int, string)
0x182d: Stack[-1] = "ood11Andrei3"
0x182e: Call2 0x15b5

0x182f: Pop(1)
0x1830: Push((int) 0)
0x1831: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1832: IF (Stack[-1] == 0) GOTO 0x1835; Pop(1)

0x1833: Stack[-2] = (bool) 1
0x1834: Return(); Pop(0)

0x1835: Stack[-2] = (bool) 0
0x1836: Return(); Pop(0)

0x1837: PushEmpty()
0x1838: PushEmpty(int, string)
0x1839: Stack[-1] = "ood3Andrei1"
0x183a: Call2 0x15b5

0x183b: Pop(1)
0x183c: Push((int) 0)
0x183d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x183e: IF (Stack[-1] == 0) GOTO 0x1841; Pop(1)

0x183f: Stack[-2] = (bool) 1
0x1840: Return(); Pop(0)

0x1841: Stack[-2] = (bool) 0
0x1842: Return(); Pop(0)

0x1843: PushEmpty()
0x1844: PushEmpty(int, string)
0x1845: Stack[-1] = "d10q01"
0x1846: Call2 0x15b5

0x1847: Pop(1)
0x1848: Push((int) 0)
0x1849: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x184a: IF (Stack[-1] == 0) GOTO 0x184d; Pop(1)

0x184b: Stack[-2] = (bool) 1
0x184c: Return(); Pop(0)

0x184d: Stack[-2] = (bool) 0
0x184e: Return(); Pop(0)

0x184f: PushEmpty()
0x1850: PushEmpty(int, string)
0x1851: Stack[-1] = "d10q01"
0x1852: Call2 0x15b5

0x1853: Pop(1)
0x1854: Push((int) 1000)
0x1855: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1856: IF (Stack[-1] == 0) GOTO 0x1859; Pop(1)

0x1857: Stack[-2] = (bool) 1
0x1858: Return(); Pop(0)

0x1859: Stack[-2] = (bool) 0
0x185a: Return(); Pop(0)

0x185b: PushEmpty()
0x185c: PushEmpty(int, string)
0x185d: Stack[-1] = "ood10Andrei1"
0x185e: Call2 0x15b5

0x185f: Pop(1)
0x1860: Push((int) 0)
0x1861: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1862: IF (Stack[-1] == 0) GOTO 0x1865; Pop(1)

0x1863: Stack[-2] = (bool) 1
0x1864: Return(); Pop(0)

0x1865: Stack[-2] = (bool) 0
0x1866: Return(); Pop(0)

0x1867: PushEmpty(object, object)
0x1868: Push((int) 195)
0x1869: Push((int) 1)
0x186a: Push((int) 515480)
0x186b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x186c: Pop(3)
0x186d: PushEmpty(bool, object, int)
0x186e: Stack[-2] = Stack[-4]
0x186f: Stack[-1] = (int) 192
0x1870: Call2 0x18a8

0x1871: Pop(3)
0x1872: Return(); Pop(2)

0x1873: Stack[-1] = 0
0x1874: PushEmpty(object, object)
0x1875: Push((int) 59)
0x1876: Push((int) 2)
0x1877: Push((int) 512141)
0x1878: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1879: Pop(3)
0x187a: PushEmpty(bool, object, int)
0x187b: Stack[-2] = Stack[-4]
0x187c: Stack[-1] = (int) 11
0x187d: Call2 0x18a8

0x187e: Pop(3)
0x187f: Return(); Pop(2)

0x1880: Stack[-1] = 0
0x1881: PushEmpty(object, object)
0x1882: Push((int) 58)
0x1883: Push((int) 2)
0x1884: Push((int) 512140)
0x1885: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1886: Pop(3)
0x1887: PushEmpty(bool, object, int)
0x1888: Stack[-2] = Stack[-4]
0x1889: Stack[-1] = (int) 11
0x188a: Call2 0x18a8

0x188b: Pop(3)
0x188c: Return(); Pop(2)

0x188d: Stack[-1] = 0
0x188e: PushEmpty(object, object)
0x188f: Push((int) 60)
0x1890: Push((int) 2)
0x1891: Push((int) 512142)
0x1892: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1893: Pop(3)
0x1894: PushEmpty(bool, object, int)
0x1895: Stack[-2] = Stack[-4]
0x1896: Stack[-1] = (int) 11
0x1897: Call2 0x18a8

0x1898: Pop(3)
0x1899: Return(); Pop(2)

0x189a: Stack[-1] = 0
0x189b: PushEmpty(object, object)
0x189c: @ GetDiaryRoot(Stack[-1])
0x189d: Pop(0)
0x189e: Pop(0); Push((bool) Stack[-1] == 0)
0x189f: IF (Stack[-1] == 0) GOTO 0x18a5; Pop(1)

0x18a0: Push("Can't retrieve diary root")
0x18a1: @ Trace(Stack[-1])
0x18a2: Pop(1)
0x18a3: Stack[-3] = (bool) 0
0x18a4: Return(); Pop(2)

0x18a5: Stack[-3] = Stack[-1]
0x18a6: Return(); Pop(2)

0x18a7: Stack[-1] = 0
0x18a8: PushEmpty(object, object, int, object, object, int)
0x18a9: PushEmpty(object)
0x18aa: Call2 0x189b

0x18ab: Stack[-4] = Stack[-1]
0x18ac: Pop(1)
0x18ad: @@ Find(Stack[-7], Stack[-2])
0x18ae: Pop(0)
0x18af: Pop(0); Push((bool) Stack[-2] == 0)
0x18b0: IF (Stack[-1] == 0) GOTO 0x18b7; Pop(1)

0x18b1: Push("Can't find diary parent with id: ")
0x18b2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x18b3: @ Trace(Stack[-1])
0x18b4: Pop(1)
0x18b5: Stack[-9] = (bool) 0
0x18b6: Return(); Pop(6)

0x18b7: @@ AddChild(Stack[-8])
0x18b8: Pop(0)
0x18b9: Push((int) 7)
0x18ba: @ SendWorldWndMessage(Stack[-1])
0x18bb: Pop(1)
0x18bc: @@ GetCategory(Stack[-1])
0x18bd: Pop(0)
0x18be: @ SetDiarySection(Stack[-1])
0x18bf: Pop(0)
0x18c0: Stack[-9] = (bool) 0
0x18c1: Return(); Pop(6)

0x18c2: Stack[-2] = 0
0x18c3: Stack[-3] = 0
0x18c4: PushEmpty(object, object, object, object)
0x18c5: @ GetMainOutdoorScene(Stack[-2])
0x18c6: Pop(0)
0x18c7: Pop(0); Push((bool) Stack[-2] == 0)
0x18c8: IF (Stack[-1] == 0) GOTO 0x18cf; Pop(1)

0x18c9: Push("Can't find main outdoor scene")
0x18ca: @ Trace(Stack[-1])
0x18cb: Pop(1)
0x18cc: Stack[-1] = 0
0x18cd: Stack[-5] = Stack[-1]
0x18ce: Return(); Pop(4)

0x18cf: @@ GetMap(Stack[-1])
0x18d0: Pop(0)
0x18d1: Stack[-5] = Stack[-1]
0x18d2: Return(); Pop(4)

0x18d3: Stack[-1] = 0
0x18d4: Stack[-2] = 0
0x18d5: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x18d6: @ GetMainOutdoorScene(Stack[-2])
0x18d7: Pop(0)
0x18d8: Pop(0); Push((bool) Stack[-2] == 0)
0x18d9: IF (Stack[-1] == 0) GOTO 0x18de; Pop(1)

0x18da: Push("Can't find main outdoor scene")
0x18db: @ Trace(Stack[-1])
0x18dc: Pop(1)
0x18dd: Return(); Pop(8)

0x18de: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x18df: Pop(0)
0x18e0: Pop(0); Push((bool) Stack[-1] == 0)
0x18e1: IF (Stack[-1] == 0) GOTO 0x18e8; Pop(1)

0x18e2: Push("Warning: outdoor scene locator ")
0x18e3: Pop(1); Push(Stack[-1] + Stack[-11]);
0x18e4: Push(" doesnt exist")
0x18e5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x18e6: @ Trace(Stack[-1])
0x18e7: Pop(1)
0x18e8: @@ GetMap(Stack[-11])
0x18e9: Pop(0)
0x18ea: Pop(0); Push((bool) Stack[-11] == 0)
0x18eb: IF (Stack[-1] == 0) GOTO 0x18f0; Pop(1)

0x18ec: Push("Can't find map")
0x18ed: @ Trace(Stack[-1])
0x18ee: Pop(1)
0x18ef: Return(); Pop(8)

0x18f0: Push(CvectorIndex(Stack[-4], 0))
0x18f1: Push(CvectorIndex(Stack[-5], 2))
0x18f2: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x18f3: Pop(2)
0x18f4: Return(); Pop(8)

0x18f5: Stack[-2] = 0
0x18f6: PushEmpty(int, int)
0x18f7: Push("branch")
0x18f8: @ GetVariable(Stack[-1], Stack[-2])
0x18f9: Pop(1)
0x18fa: Push((int) 0)
0x18fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18fc: IF (Stack[-1] == 0) GOTO 0x1900; Pop(1)

0x18fd: Stack[-3] = (int) 1
0x18fe: Return(); Pop(2)

0x18ff: GOTO 0x1905

0x1900: Push((int) 1)
0x1901: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1902: IF (Stack[-1] == 0) GOTO 0x1905; Pop(1)

0x1903: Stack[-3] = (int) 2
0x1904: Return(); Pop(2)

0x1905: Stack[-3] = (int) 3
0x1906: Return(); Pop(2)

0x1907: PushEmpty(int, int)
0x1908: Push("mt_andrei")
0x1909: @ GetVariable(Stack[-1], Stack[-2])
0x190a: Pop(1)
0x190b: Pop(0); Push((bool) Stack[-1] == 0)
0x190c: IF (Stack[-1] == 0) GOTO 0x1917; Pop(1)

0x190d: PushEmpty(int, object)
0x190e: Stack[-1] = Stack[-5]
0x190f: Push(-2, 1); TaskCall(4)
0x1910: Call2 0x1de

0x1911: Pop(-2, 1); TaskReturn
0x1912: Pop(2)
0x1913: Push("mt_andrei")
0x1914: Push((int) 1)
0x1915: @ SetVariable(Stack[-2], Stack[-1])
0x1916: Pop(2)
0x1917: PushEmpty(bool, int)
0x1918: Stack[-1] = (int) 2
0x1919: Call2 0x1619

0x191a: Pop(1)
0x191b: IF (Stack[-1] == 0) GOTO 0x1923; Pop(1)

0x191c: PushEmpty(int, object)
0x191d: Stack[-1] = Stack[-5]
0x191e: Push(-2, 1); TaskCall(0)
0x191f: Call2 0x0

0x1920: Pop(-2, 1); TaskReturn
0x1921: Pop(2)
0x1922: Return(); Pop(2)

0x1923: PushEmpty(bool, int)
0x1924: Stack[-1] = (int) 2
0x1925: Call2 0x1613

0x1926: Pop(1)
0x1927: IF (Stack[-1] == 0) GOTO 0x192f; Pop(1)

0x1928: PushEmpty(int, object)
0x1929: Stack[-1] = Stack[-5]
0x192a: Push(-2, 1); TaskCall(6)
0x192b: Call2 0x33d

0x192c: Pop(-2, 1); TaskReturn
0x192d: Pop(2)
0x192e: Return(); Pop(2)

0x192f: PushEmpty(bool, int)
0x1930: Stack[-1] = (int) 3
0x1931: Call2 0x1613

0x1932: Pop(1)
0x1933: IF (Stack[-1] == 0) GOTO 0x193b; Pop(1)

0x1934: PushEmpty(int, object)
0x1935: Stack[-1] = Stack[-5]
0x1936: Push(-2, 1); TaskCall(8)
0x1937: Call2 0x7fb

0x1938: Pop(-2, 1); TaskReturn
0x1939: Pop(2)
0x193a: Return(); Pop(2)

0x193b: PushEmpty(bool, int)
0x193c: Stack[-1] = (int) 6
0x193d: Call2 0x1613

0x193e: Pop(1)
0x193f: IF (Stack[-1] == 0) GOTO 0x1947; Pop(1)

0x1940: PushEmpty(int, object)
0x1941: Stack[-1] = Stack[-5]
0x1942: Push(-2, 1); TaskCall(10)
0x1943: Call2 0xb74

0x1944: Pop(-2, 1); TaskReturn
0x1945: Pop(2)
0x1946: Return(); Pop(2)

0x1947: PushEmpty(bool, int)
0x1948: Stack[-1] = (int) 10
0x1949: Call2 0x1613

0x194a: Pop(1)
0x194b: IF (Stack[-1] == 0) GOTO 0x1953; Pop(1)

0x194c: PushEmpty(int, object)
0x194d: Stack[-1] = Stack[-5]
0x194e: Push(-2, 1); TaskCall(12)
0x194f: Call2 0xcc7

0x1950: Pop(-2, 1); TaskReturn
0x1951: Pop(2)
0x1952: Return(); Pop(2)

0x1953: PushEmpty(bool, int)
0x1954: Stack[-1] = (int) 11
0x1955: Call2 0x1613

0x1956: Pop(1)
0x1957: IF (Stack[-1] == 0) GOTO 0x195f; Pop(1)

0x1958: PushEmpty(int, object)
0x1959: Stack[-1] = Stack[-5]
0x195a: Push(-2, 1); TaskCall(14)
0x195b: Call2 0xec0

0x195c: Pop(-2, 1); TaskReturn
0x195d: Pop(2)
0x195e: Return(); Pop(2)

0x195f: PushEmpty(bool, int)
0x1960: Stack[-1] = (int) 12
0x1961: Call2 0x1613

0x1962: Pop(1)
0x1963: IF (Stack[-1] == 0) GOTO 0x196b; Pop(1)

0x1964: PushEmpty(int, object)
0x1965: Stack[-1] = Stack[-5]
0x1966: Push(-2, 1); TaskCall(2)
0x1967: Call2 0xc4

0x1968: Pop(-2, 1); TaskReturn
0x1969: Pop(2)
0x196a: Return(); Pop(2)

0x196b: PushEmpty(int, object)
0x196c: Stack[-1] = Stack[-5]
0x196d: Push(-2, 1); TaskCall(16)
0x196e: Call2 0x129f

0x196f: Pop(-2, 1); TaskReturn
0x1970: Pop(2)
0x1971: Return(); Pop(2)

