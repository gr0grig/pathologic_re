GlobalVarCount = 3
	G_VAR_0 object 
	G_VAR_1 bool 
	G_VAR_2 bool 

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
	Strict
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
	ui/NPC_Alexandr.png
	ui/NPC_Alexandr_b.png
	b2q01
	b2q01AlexandrGotoOspina
	pt_map_ospina
	AddMark
	oob2Alexandr1
	key is given
	b2q01_key
	ShowMap
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
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x4dc
RunTask = 8

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1c2 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3e7 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4b2 Vars = (int, int)
	GTASK_8 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x528 Vars = (int)
		EVENT_6 Op = 0x54e Vars = ()
		EVENT_5 Op = 0x55d Vars = ()
		EVENT_45 Op = 0x56a Vars = (bool)
		EVENT_0 Op = 0x576 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x5ff

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x782

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x780

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x784

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x786

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x842

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
0x31: Call2 0x713

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x654

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
0x48: Call2 0x643

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
0x5b: Push((int) 535294)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 535295)
0x61: Push((int) 36973)
0x62: Push((int) 36972)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 535302)
0x66: Push((int) -1)
0x67: Push((int) 36980)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 535303)
0x6b: Push((int) -1)
0x6c: Push((int) 36981)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0x788

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x6de

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
0x92: Call2 0x788

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
0xa2: Call2 0x6ee

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x70c

0xab: Pop(0)
0xac: Push((int) 36971)
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xaf: PushEmpty(string)
0xb0: Stack[-1] = "Neutral"
0xb1: Call2 0x90

0xb2: Pop(1)
0xb3: Push((int) 535294)
0xb4: @@ SetMessage(Stack[-1])
0xb5: Pop(1)
0xb6: @@ ClearReplies()
0xb7: Pop(0)
0xb8: Push((int) 535295)
0xb9: Push((int) 36973)
0xba: Push((int) 36972)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Push((int) 535302)
0xbe: Push((int) -1)
0xbf: Push((int) 36980)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: Push((int) 535303)
0xc3: Push((int) -1)
0xc4: Push((int) 36981)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Return(); Pop(0)

0xc8: Push((int) 36973)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0x90

0xce: Pop(1)
0xcf: Push((int) 535296)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 535297)
0xd5: Push((int) 36975)
0xd6: Push((int) 36974)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 535301)
0xda: Push((int) 36975)
0xdb: Push((int) 36978)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 36975)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call2 0x90

0xe5: Pop(1)
0xe6: Push((int) 535298)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 535299)
0xec: Push((int) -1)
0xed: Push((int) 36976)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 535300)
0xf1: Push((int) -1)
0xf2: Push((int) 36977)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf7: PushEmpty(bool)
0xf8: Call2 0x788

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
0x108: Call2 0x5ff

0x109: Pop(2)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-10] = (int) -2
0x10d: Return(); Pop(8)

0x10e: @ CreateDialog(Stack[-4])
0x10f: Pop(0)
0x110: PushEmpty(int)
0x111: Call2 0x782

0x112: Pop(0)
0x113: @@ SetNPCName(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(int)
0x116: Call2 0x780

0x117: Pop(0)
0x118: @@ SetNPCDescription(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(string)
0x11b: Call2 0x784

0x11c: Pop(0)
0x11d: @@ SetPhoto(Stack[-1])
0x11e: Pop(1)
0x11f: PushEmpty(string)
0x120: Call2 0x786

0x121: Pop(0)
0x122: @@ SetPhoto2(Stack[-1])
0x123: Pop(1)
0x124: PushEmpty(int)
0x125: Call2 0x842

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
0x134: Call2 0x713

0x135: Stack[-2] = Stack[-1]
0x136: Pop(1)
0x137: Call2 0x654

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
0x14b: Call2 0x643

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
0x159: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x15a: PushEmpty(bool, object)
0x15b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Call2 0x7c2

0x15d: Pop(1)
0x15e: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x15f: PushEmpty(string)
0x160: Stack[-1] = "Neutral"
0x161: Call2 0x1ac

0x162: Pop(1)
0x163: Push((int) 518239)
0x164: @@ SetMessage(Stack[-1])
0x165: Pop(1)
0x166: @@ ClearReplies()
0x167: Pop(0)
0x168: Push((int) 518240)
0x169: Push((int) 20533)
0x16a: Push((int) 19349)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: Push((int) 519398)
0x16e: Push((int) 20561)
0x16f: Push((int) 20560)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: GOTO 0x18e

0x173: PushEmpty(string)
0x174: Stack[-1] = "Neutral"
0x175: Call2 0x1ac

0x176: Pop(1)
0x177: Push((int) 518241)
0x178: @@ SetMessage(Stack[-1])
0x179: Pop(1)
0x17a: @@ ClearReplies()
0x17b: Pop(0)
0x17c: PushEmpty(bool, object)
0x17d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17e: Call2 0x7ce

0x17f: Pop(1)
0x180: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x181: Push((int) 519376)
0x182: Push((int) 20538)
0x183: Push((int) 20537)
0x184: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x185: Pop(3)
0x186: Push((int) 518242)
0x187: Push((int) -1)
0x188: Push((int) 19351)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: GOTO 0x18e

0x18c: Return(); Pop(0)

0x18d: GOTO 0x158

0x18e: PushEmpty(bool)
0x18f: Call2 0x788

0x190: Pop(0)
0x191: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x192: @ lshWaitForAnimEnd()
0x193: Pop(0)
0x194: Push( Stack[3 + Tasks[-1].StackPointer] )
0x195: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x196: GOTO 0x19c

0x197: PushEmpty(string)
0x198: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x199: Call2 0x6de

0x19a: Pop(1)
0x19b: GOTO 0x192

0x19c: GOTO 0x1ab

0x19d: Push("all")
0x19e: Push("idle")
0x19f: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a0: Pop(2)
0x1a1: @ WaitForAnimEnd()
0x1a2: Pop(0)
0x1a3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: GOTO 0x1ab

0x1a6: Push("all")
0x1a7: Push("idle")
0x1a8: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a9: Pop(2)
0x1aa: GOTO 0x1a1

0x1ab: Return(); Pop(0)

0x1ac: PushEmpty()
0x1ad: PushEmpty(bool)
0x1ae: Call2 0x788

0x1af: Pop(0)
0x1b0: Pop(1); Push((bool) Stack[-1] == 0)
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b2: Return(); Pop(0)

0x1b3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b5: Return(); Pop(0)

0x1b6: PushEmpty(string, bool)
0x1b7: Stack[-2] = Stack[-3]
0x1b8: Push("")
0x1b9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bb: Stack[-1] = (bool) 0
0x1bc: GOTO 0x1be

0x1bd: Stack[-1] = (bool) 1
0x1be: Call2 0x6ee

0x1bf: Pop(2)
0x1c0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1c1: Return(); Pop(0)

0x1c2: PushEmpty()
0x1c3: Push((int) 1)
0x1c4: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x1c5: PushEmpty()
0x1c6: Call2 0x70c

0x1c7: Pop(0)
0x1c8: Push((int) 20555)
0x1c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1cb: PushEmpty(object, object)
0x1cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ce: Call2 0x78a

0x1cf: Pop(2)
0x1d0: PushEmpty(object, object)
0x1d1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d3: Call2 0x7b2

0x1d4: Pop(2)
0x1d5: PushEmpty(object, object)
0x1d6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d8: Call2 0x7a7

0x1d9: Pop(2)
0x1da: Push((int) 20574)
0x1db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1dd: PushEmpty(object, object)
0x1de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e0: Call2 0x78a

0x1e1: Pop(2)
0x1e2: PushEmpty(object, object)
0x1e3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e5: Call2 0x7b2

0x1e6: Pop(2)
0x1e7: PushEmpty(object, object)
0x1e8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ea: Call2 0x7a7

0x1eb: Pop(2)
0x1ec: Push((int) 20537)
0x1ed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ef: PushEmpty(object, object)
0x1f0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f2: Call2 0x7a1

0x1f3: Pop(2)
0x1f4: Push((int) 19348)
0x1f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x1f7: PushEmpty(bool, object)
0x1f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f9: Call2 0x7c2

0x1fa: Pop(1)
0x1fb: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x1fc: PushEmpty(string)
0x1fd: Stack[-1] = "Neutral"
0x1fe: Call2 0x1ac

0x1ff: Pop(1)
0x200: Push((int) 518239)
0x201: @@ SetMessage(Stack[-1])
0x202: Pop(1)
0x203: @@ ClearReplies()
0x204: Pop(0)
0x205: Push((int) 518240)
0x206: Push((int) 20533)
0x207: Push((int) 19349)
0x208: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x209: Pop(3)
0x20a: Push((int) 519398)
0x20b: Push((int) 20561)
0x20c: Push((int) 20560)
0x20d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20e: Pop(3)
0x20f: Return(); Pop(0)

0x210: PushEmpty(string)
0x211: Stack[-1] = "Neutral"
0x212: Call2 0x1ac

0x213: Pop(1)
0x214: Push((int) 518241)
0x215: @@ SetMessage(Stack[-1])
0x216: Pop(1)
0x217: @@ ClearReplies()
0x218: Pop(0)
0x219: PushEmpty(bool, object)
0x21a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21b: Call2 0x7ce

0x21c: Pop(1)
0x21d: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x21e: Push((int) 519376)
0x21f: Push((int) 20538)
0x220: Push((int) 20537)
0x221: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x222: Pop(3)
0x223: Push((int) 518242)
0x224: Push((int) -1)
0x225: Push((int) 19351)
0x226: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x227: Pop(3)
0x228: Return(); Pop(0)

0x229: Push((int) 20544)
0x22a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22b: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22c: Push((int) 20546)
0x22d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22e: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x22f: PushEmpty(string)
0x230: Stack[-1] = "Neutral"
0x231: Call2 0x1ac

0x232: Pop(1)
0x233: Push((int) 519385)
0x234: @@ SetMessage(Stack[-1])
0x235: Pop(1)
0x236: @@ ClearReplies()
0x237: Pop(0)
0x238: Push((int) 519387)
0x239: Push((int) 20549)
0x23a: Push((int) 20548)
0x23b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23c: Pop(3)
0x23d: Push((int) 519386)
0x23e: Push((int) -1)
0x23f: Push((int) 20547)
0x240: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x241: Pop(3)
0x242: Return(); Pop(0)

0x243: Push((int) 20549)
0x244: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x246: PushEmpty(string)
0x247: Stack[-1] = "Neutral"
0x248: Call2 0x1ac

0x249: Pop(1)
0x24a: Push((int) 519388)
0x24b: @@ SetMessage(Stack[-1])
0x24c: Pop(1)
0x24d: @@ ClearReplies()
0x24e: Pop(0)
0x24f: Push((int) 519389)
0x250: Push((int) -1)
0x251: Push((int) 20550)
0x252: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x253: Pop(3)
0x254: Push((int) 519390)
0x255: Push((int) -1)
0x256: Push((int) 20551)
0x257: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x258: Pop(3)
0x259: Return(); Pop(0)

0x25a: Push((int) 20538)
0x25b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25c: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x25d: PushEmpty(string)
0x25e: Stack[-1] = "Neutral"
0x25f: Call2 0x1ac

0x260: Pop(1)
0x261: Push((int) 519377)
0x262: @@ SetMessage(Stack[-1])
0x263: Pop(1)
0x264: @@ ClearReplies()
0x265: Pop(0)
0x266: Push((int) 519378)
0x267: Push((int) 20540)
0x268: Push((int) 20539)
0x269: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26a: Pop(3)
0x26b: Return(); Pop(0)

0x26c: Push((int) 20540)
0x26d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x26f: PushEmpty(string)
0x270: Stack[-1] = "Neutral"
0x271: Call2 0x1ac

0x272: Pop(1)
0x273: Push((int) 519379)
0x274: @@ SetMessage(Stack[-1])
0x275: Pop(1)
0x276: @@ ClearReplies()
0x277: Pop(0)
0x278: Push((int) 519380)
0x279: Push((int) -1)
0x27a: Push((int) 20541)
0x27b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27c: Pop(3)
0x27d: Push((int) 519381)
0x27e: Push((int) -1)
0x27f: Push((int) 20542)
0x280: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x281: Pop(3)
0x282: Return(); Pop(0)

0x283: Push((int) 20561)
0x284: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x285: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x286: PushEmpty(string)
0x287: Stack[-1] = "Neutral"
0x288: Call2 0x1ac

0x289: Pop(1)
0x28a: Push((int) 519399)
0x28b: @@ SetMessage(Stack[-1])
0x28c: Pop(1)
0x28d: @@ ClearReplies()
0x28e: Pop(0)
0x28f: Push((int) 519400)
0x290: Push((int) 20563)
0x291: Push((int) 20562)
0x292: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x293: Pop(3)
0x294: Return(); Pop(0)

0x295: Push((int) 20563)
0x296: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x298: PushEmpty(string)
0x299: Stack[-1] = "Neutral"
0x29a: Call2 0x1ac

0x29b: Pop(1)
0x29c: Push((int) 519401)
0x29d: @@ SetMessage(Stack[-1])
0x29e: Pop(1)
0x29f: @@ ClearReplies()
0x2a0: Pop(0)
0x2a1: Push((int) 519402)
0x2a2: Push((int) 20565)
0x2a3: Push((int) 20564)
0x2a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a5: Pop(3)
0x2a6: Return(); Pop(0)

0x2a7: Push((int) 20565)
0x2a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2aa: PushEmpty(string)
0x2ab: Stack[-1] = "Neutral"
0x2ac: Call2 0x1ac

0x2ad: Pop(1)
0x2ae: Push((int) 519403)
0x2af: @@ SetMessage(Stack[-1])
0x2b0: Pop(1)
0x2b1: @@ ClearReplies()
0x2b2: Pop(0)
0x2b3: Push((int) 519404)
0x2b4: Push((int) 20533)
0x2b5: Push((int) 20566)
0x2b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b7: Pop(3)
0x2b8: Return(); Pop(0)

0x2b9: Push((int) 20533)
0x2ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2bc: PushEmpty(string)
0x2bd: Stack[-1] = "Neutral"
0x2be: Call2 0x1ac

0x2bf: Pop(1)
0x2c0: Push((int) 519372)
0x2c1: @@ SetMessage(Stack[-1])
0x2c2: Pop(1)
0x2c3: @@ ClearReplies()
0x2c4: Pop(0)
0x2c5: Push((int) 519373)
0x2c6: Push((int) 20535)
0x2c7: Push((int) 20534)
0x2c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c9: Pop(3)
0x2ca: Push((int) 519395)
0x2cb: Push((int) 20557)
0x2cc: Push((int) 20556)
0x2cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ce: Pop(3)
0x2cf: Return(); Pop(0)

0x2d0: Push((int) 20557)
0x2d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2d3: PushEmpty(string)
0x2d4: Stack[-1] = "Neutral"
0x2d5: Call2 0x1ac

0x2d6: Pop(1)
0x2d7: Push((int) 519396)
0x2d8: @@ SetMessage(Stack[-1])
0x2d9: Pop(1)
0x2da: @@ ClearReplies()
0x2db: Pop(0)
0x2dc: Push((int) 519397)
0x2dd: Push((int) 20552)
0x2de: Push((int) 20558)
0x2df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e0: Pop(3)
0x2e1: Return(); Pop(0)

0x2e2: Push((int) 20535)
0x2e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2e5: PushEmpty(string)
0x2e6: Stack[-1] = "Neutral"
0x2e7: Call2 0x1ac

0x2e8: Pop(1)
0x2e9: Push((int) 519374)
0x2ea: @@ SetMessage(Stack[-1])
0x2eb: Pop(1)
0x2ec: @@ ClearReplies()
0x2ed: Pop(0)
0x2ee: Push((int) 519375)
0x2ef: Push((int) 20552)
0x2f0: Push((int) 20536)
0x2f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f2: Pop(3)
0x2f3: Push((int) 519406)
0x2f4: Push((int) 20571)
0x2f5: Push((int) 20570)
0x2f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f7: Pop(3)
0x2f8: Return(); Pop(0)

0x2f9: Push((int) 20571)
0x2fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fb: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x2fc: PushEmpty(string)
0x2fd: Stack[-1] = "Neutral"
0x2fe: Call2 0x1ac

0x2ff: Pop(1)
0x300: Push((int) 519407)
0x301: @@ SetMessage(Stack[-1])
0x302: Pop(1)
0x303: @@ ClearReplies()
0x304: Pop(0)
0x305: Push((int) 519408)
0x306: Push((int) 20557)
0x307: Push((int) 20572)
0x308: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x309: Pop(3)
0x30a: Return(); Pop(0)

0x30b: Push((int) 20552)
0x30c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30d: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x30e: PushEmpty(string)
0x30f: Stack[-1] = "Neutral"
0x310: Call2 0x1ac

0x311: Pop(1)
0x312: Push((int) 519391)
0x313: @@ SetMessage(Stack[-1])
0x314: Pop(1)
0x315: @@ ClearReplies()
0x316: Pop(0)
0x317: Push((int) 519392)
0x318: Push((int) 20554)
0x319: Push((int) 20553)
0x31a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31b: Pop(3)
0x31c: Push((int) 519405)
0x31d: Push((int) 20554)
0x31e: Push((int) 20568)
0x31f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x320: Pop(3)
0x321: Return(); Pop(0)

0x322: Push((int) 20554)
0x323: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x325: PushEmpty(string)
0x326: Stack[-1] = "Strict"
0x327: Call2 0x1ac

0x328: Pop(1)
0x329: Push((int) 519393)
0x32a: @@ SetMessage(Stack[-1])
0x32b: Pop(1)
0x32c: @@ ClearReplies()
0x32d: Pop(0)
0x32e: Push((int) 519394)
0x32f: Push((int) -1)
0x330: Push((int) 20555)
0x331: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x332: Pop(3)
0x333: Push((int) 519409)
0x334: Push((int) -1)
0x335: Push((int) 20574)
0x336: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x337: Pop(3)
0x338: Return(); Pop(0)

0x339: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x33a: PushEmpty(bool)
0x33b: Call2 0x788

0x33c: Pop(0)
0x33d: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33e: @ lshStopAnimation()
0x33f: Pop(0)
0x340: GOTO 0x343

0x341: @ StopAnimation()
0x342: Pop(0)
0x343: Return(); Pop(0)

0x344: GOTO 0x1c3

0x345: Return(); Pop(0)

0x346: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x347: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x348: PushEmpty(bool, object, float)
0x349: Stack[-2] = Stack[-12]
0x34a: Stack[-1] = (float) 70.0
0x34b: Call2 0x5ff

0x34c: Pop(2)
0x34d: Pop(1); Push((bool) Stack[-1] == 0)
0x34e: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34f: Stack[-10] = (int) -2
0x350: Return(); Pop(8)

0x351: @ CreateDialog(Stack[-4])
0x352: Pop(0)
0x353: PushEmpty(int)
0x354: Call2 0x782

0x355: Pop(0)
0x356: @@ SetNPCName(Stack[-1])
0x357: Pop(1)
0x358: PushEmpty(int)
0x359: Call2 0x780

0x35a: Pop(0)
0x35b: @@ SetNPCDescription(Stack[-1])
0x35c: Pop(1)
0x35d: PushEmpty(string)
0x35e: Call2 0x784

0x35f: Pop(0)
0x360: @@ SetPhoto(Stack[-1])
0x361: Pop(1)
0x362: PushEmpty(string)
0x363: Call2 0x786

0x364: Pop(0)
0x365: @@ SetPhoto2(Stack[-1])
0x366: Pop(1)
0x367: PushEmpty(int)
0x368: Call2 0x842

0x369: Pop(0)
0x36a: @@ SetPlayerName(Stack[-1])
0x36b: Pop(1)
0x36c: Stack[-2] = (int) -1
0x36d: @ IsOverrideActive(Stack[-3])
0x36e: Pop(0)
0x36f: Push(Stack[-3])
0x370: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x371: Stack[-10] = (int) -2
0x372: Return(); Pop(8)

0x373: @ DoDialog(Stack[-4])
0x374: Pop(0)
0x375: PushEmpty(bool, object)
0x376: PushEmpty(object)
0x377: Call2 0x713

0x378: Stack[-2] = Stack[-1]
0x379: Pop(1)
0x37a: Call2 0x654

0x37b: Pop(2)
0x37c: PushEmpty(object, object)
0x37d: Stack[-2] = Stack[-11]
0x37e: Stack[-1] = Stack[-6]
0x37f: Push(-2, 4); TaskCall(5)
0x380: Call2 0x397

0x381: Pop(-2, 4); TaskReturn
0x382: Pop(2)
0x383: @@ IsDialogEnd(Stack[-1])
0x384: Pop(0)
0x385: Pop(0); Push((bool) Stack[-1] == 0)
0x386: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x387: @ sync()
0x388: Pop(0)
0x389: @@ IsDialogEnd(Stack[-1])
0x38a: Pop(0)
0x38b: GOTO 0x385

0x38c: PushEmpty(object)
0x38d: Stack[-1] = Stack[-10]
0x38e: Call2 0x643

0x38f: Pop(1)
0x390: @ StopDialog(Stack[-4])
0x391: Pop(0)
0x392: @@ GetReturnValue(Stack[-2])
0x393: Pop(0)
0x394: Stack[-10] = Stack[-2]
0x395: Return(); Pop(8)

0x396: Stack[-4] = 0
0x397: PushEmpty()
0x398: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x399: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x39a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x39b: Push((int) 1)
0x39c: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x39d: PushEmpty(string)
0x39e: Stack[-1] = "Strict"
0x39f: Call2 0x3d1

0x3a0: Pop(1)
0x3a1: Push((int) 520670)
0x3a2: @@ SetMessage(Stack[-1])
0x3a3: Pop(1)
0x3a4: @@ ClearReplies()
0x3a5: Pop(0)
0x3a6: Push((int) 520671)
0x3a7: Push((int) -1)
0x3a8: Push((int) 21878)
0x3a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3aa: Pop(3)
0x3ab: Push((int) 527796)
0x3ac: Push((int) -1)
0x3ad: Push((int) 29129)
0x3ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3af: Pop(3)
0x3b0: GOTO 0x3b3

0x3b1: Return(); Pop(0)

0x3b2: GOTO 0x39b

0x3b3: PushEmpty(bool)
0x3b4: Call2 0x788

0x3b5: Pop(0)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3b7: @ lshWaitForAnimEnd()
0x3b8: Pop(0)
0x3b9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3bb: GOTO 0x3c1

0x3bc: PushEmpty(string)
0x3bd: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3be: Call2 0x6de

0x3bf: Pop(1)
0x3c0: GOTO 0x3b7

0x3c1: GOTO 0x3d0

0x3c2: Push("all")
0x3c3: Push("idle")
0x3c4: @ PlayAnimation(Stack[-2], Stack[-1])
0x3c5: Pop(2)
0x3c6: @ WaitForAnimEnd()
0x3c7: Pop(0)
0x3c8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3ca: GOTO 0x3d0

0x3cb: Push("all")
0x3cc: Push("idle")
0x3cd: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ce: Pop(2)
0x3cf: GOTO 0x3c6

0x3d0: Return(); Pop(0)

0x3d1: PushEmpty()
0x3d2: PushEmpty(bool)
0x3d3: Call2 0x788

0x3d4: Pop(0)
0x3d5: Pop(1); Push((bool) Stack[-1] == 0)
0x3d6: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d7: Return(); Pop(0)

0x3d8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3d9: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3da: Return(); Pop(0)

0x3db: PushEmpty(string, bool)
0x3dc: Stack[-2] = Stack[-3]
0x3dd: Push("")
0x3de: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3df: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3e0: Stack[-1] = (bool) 0
0x3e1: GOTO 0x3e3

0x3e2: Stack[-1] = (bool) 1
0x3e3: Call2 0x6ee

0x3e4: Pop(2)
0x3e5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3e6: Return(); Pop(0)

0x3e7: PushEmpty()
0x3e8: Push((int) 1)
0x3e9: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x3ea: PushEmpty()
0x3eb: Call2 0x70c

0x3ec: Pop(0)
0x3ed: Push((int) 21877)
0x3ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ef: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3f0: PushEmpty(string)
0x3f1: Stack[-1] = "Strict"
0x3f2: Call2 0x3d1

0x3f3: Pop(1)
0x3f4: Push((int) 520670)
0x3f5: @@ SetMessage(Stack[-1])
0x3f6: Pop(1)
0x3f7: @@ ClearReplies()
0x3f8: Pop(0)
0x3f9: Push((int) 520671)
0x3fa: Push((int) -1)
0x3fb: Push((int) 21878)
0x3fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fd: Pop(3)
0x3fe: Push((int) 527796)
0x3ff: Push((int) -1)
0x400: Push((int) 29129)
0x401: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x402: Pop(3)
0x403: Return(); Pop(0)

0x404: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x405: PushEmpty(bool)
0x406: Call2 0x788

0x407: Pop(0)
0x408: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x409: @ lshStopAnimation()
0x40a: Pop(0)
0x40b: GOTO 0x40e

0x40c: @ StopAnimation()
0x40d: Pop(0)
0x40e: Return(); Pop(0)

0x40f: GOTO 0x3e8

0x410: Return(); Pop(0)

0x411: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x412: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x413: PushEmpty(bool, object, float)
0x414: Stack[-2] = Stack[-12]
0x415: Stack[-1] = (float) 70.0
0x416: Call2 0x5ff

0x417: Pop(2)
0x418: Pop(1); Push((bool) Stack[-1] == 0)
0x419: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x41a: Stack[-10] = (int) -2
0x41b: Return(); Pop(8)

0x41c: @ CreateDialog(Stack[-4])
0x41d: Pop(0)
0x41e: PushEmpty(int)
0x41f: Call2 0x782

0x420: Pop(0)
0x421: @@ SetNPCName(Stack[-1])
0x422: Pop(1)
0x423: PushEmpty(int)
0x424: Call2 0x780

0x425: Pop(0)
0x426: @@ SetNPCDescription(Stack[-1])
0x427: Pop(1)
0x428: PushEmpty(string)
0x429: Call2 0x784

0x42a: Pop(0)
0x42b: @@ SetPhoto(Stack[-1])
0x42c: Pop(1)
0x42d: PushEmpty(string)
0x42e: Call2 0x786

0x42f: Pop(0)
0x430: @@ SetPhoto2(Stack[-1])
0x431: Pop(1)
0x432: PushEmpty(int)
0x433: Call2 0x842

0x434: Pop(0)
0x435: @@ SetPlayerName(Stack[-1])
0x436: Pop(1)
0x437: Stack[-2] = (int) -1
0x438: @ IsOverrideActive(Stack[-3])
0x439: Pop(0)
0x43a: Push(Stack[-3])
0x43b: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43c: Stack[-10] = (int) -2
0x43d: Return(); Pop(8)

0x43e: @ DoDialog(Stack[-4])
0x43f: Pop(0)
0x440: PushEmpty(bool, object)
0x441: PushEmpty(object)
0x442: Call2 0x713

0x443: Stack[-2] = Stack[-1]
0x444: Pop(1)
0x445: Call2 0x654

0x446: Pop(2)
0x447: PushEmpty(object, object)
0x448: Stack[-2] = Stack[-11]
0x449: Stack[-1] = Stack[-6]
0x44a: Push(-2, 4); TaskCall(7)
0x44b: Call2 0x462

0x44c: Pop(-2, 4); TaskReturn
0x44d: Pop(2)
0x44e: @@ IsDialogEnd(Stack[-1])
0x44f: Pop(0)
0x450: Pop(0); Push((bool) Stack[-1] == 0)
0x451: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x452: @ sync()
0x453: Pop(0)
0x454: @@ IsDialogEnd(Stack[-1])
0x455: Pop(0)
0x456: GOTO 0x450

0x457: PushEmpty(object)
0x458: Stack[-1] = Stack[-10]
0x459: Call2 0x643

0x45a: Pop(1)
0x45b: @ StopDialog(Stack[-4])
0x45c: Pop(0)
0x45d: @@ GetReturnValue(Stack[-2])
0x45e: Pop(0)
0x45f: Stack[-10] = Stack[-2]
0x460: Return(); Pop(8)

0x461: Stack[-4] = 0
0x462: PushEmpty()
0x463: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x464: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x465: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x466: Push((int) 1)
0x467: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x468: PushEmpty(string)
0x469: Stack[-1] = "Neutral"
0x46a: Call2 0x49c

0x46b: Pop(1)
0x46c: Push((int) 540554)
0x46d: @@ SetMessage(Stack[-1])
0x46e: Pop(1)
0x46f: @@ ClearReplies()
0x470: Pop(0)
0x471: Push((int) 540555)
0x472: Push((int) -1)
0x473: Push((int) 42564)
0x474: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x475: Pop(3)
0x476: Push((int) 540794)
0x477: Push((int) -1)
0x478: Push((int) 42843)
0x479: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47a: Pop(3)
0x47b: GOTO 0x47e

0x47c: Return(); Pop(0)

0x47d: GOTO 0x466

0x47e: PushEmpty(bool)
0x47f: Call2 0x788

0x480: Pop(0)
0x481: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x482: @ lshWaitForAnimEnd()
0x483: Pop(0)
0x484: Push( Stack[3 + Tasks[-1].StackPointer] )
0x485: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x486: GOTO 0x48c

0x487: PushEmpty(string)
0x488: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x489: Call2 0x6de

0x48a: Pop(1)
0x48b: GOTO 0x482

0x48c: GOTO 0x49b

0x48d: Push("all")
0x48e: Push("idle")
0x48f: @ PlayAnimation(Stack[-2], Stack[-1])
0x490: Pop(2)
0x491: @ WaitForAnimEnd()
0x492: Pop(0)
0x493: Push( Stack[3 + Tasks[-1].StackPointer] )
0x494: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x495: GOTO 0x49b

0x496: Push("all")
0x497: Push("idle")
0x498: @ PlayAnimation(Stack[-2], Stack[-1])
0x499: Pop(2)
0x49a: GOTO 0x491

0x49b: Return(); Pop(0)

0x49c: PushEmpty()
0x49d: PushEmpty(bool)
0x49e: Call2 0x788

0x49f: Pop(0)
0x4a0: Pop(1); Push((bool) Stack[-1] == 0)
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x4a2: Return(); Pop(0)

0x4a3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a5: Return(); Pop(0)

0x4a6: PushEmpty(string, bool)
0x4a7: Stack[-2] = Stack[-3]
0x4a8: Push("")
0x4a9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4aa: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4ab: Stack[-1] = (bool) 0
0x4ac: GOTO 0x4ae

0x4ad: Stack[-1] = (bool) 1
0x4ae: Call2 0x6ee

0x4af: Pop(2)
0x4b0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4b1: Return(); Pop(0)

0x4b2: PushEmpty()
0x4b3: Push((int) 1)
0x4b4: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4b5: PushEmpty()
0x4b6: Call2 0x70c

0x4b7: Pop(0)
0x4b8: Push((int) 42563)
0x4b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4bb: PushEmpty(string)
0x4bc: Stack[-1] = "Neutral"
0x4bd: Call2 0x49c

0x4be: Pop(1)
0x4bf: Push((int) 540554)
0x4c0: @@ SetMessage(Stack[-1])
0x4c1: Pop(1)
0x4c2: @@ ClearReplies()
0x4c3: Pop(0)
0x4c4: Push((int) 540555)
0x4c5: Push((int) -1)
0x4c6: Push((int) 42564)
0x4c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c8: Pop(3)
0x4c9: Push((int) 540794)
0x4ca: Push((int) -1)
0x4cb: Push((int) 42843)
0x4cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cd: Pop(3)
0x4ce: Return(); Pop(0)

0x4cf: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4d0: PushEmpty(bool)
0x4d1: Call2 0x788

0x4d2: Pop(0)
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d4: @ lshStopAnimation()
0x4d5: Pop(0)
0x4d6: GOTO 0x4d9

0x4d7: @ StopAnimation()
0x4d8: Pop(0)
0x4d9: Return(); Pop(0)

0x4da: GOTO 0x4b3

0x4db: Return(); Pop(0)

0x4dc: Push(GlobalVars[1])
0x4dd: Stack[-1] = (bool) 0
0x4de: GlobalVars[1] = Stack[-1]; Pop(1)
0x4df: PushEmpty()
0x4e0: Call2 0x4e3

0x4e1: Pop(0)
0x4e2: Return(); Pop(0)

0x4e3: PushEmpty(bool)
0x4e4: Call2 0x5fa

0x4e5: Pop(0)
0x4e6: Pop(1); Push((bool) Stack[-1] == 0)
0x4e7: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e8: @ Hold()
0x4e9: Pop(0)
0x4ea: @ GetDirection(Stack[-0])
0x4eb: Pop(0)
0x4ec: PushEmpty()
0x4ed: Call2 0x593

0x4ee: Pop(0)
0x4ef: GOTO 0x4ec

0x4f0: Return(); Pop(0)

0x4f1: PushEmpty(object, object)
0x4f2: Push("player")
0x4f3: @ FindActor(Stack[-2], Stack[-1])
0x4f4: Pop(1)
0x4f5: Pop(0); Push((bool) Stack[-1] == 0)
0x4f6: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f7: Stack[-3] = (bool) 0
0x4f8: Return(); Pop(2)

0x4f9: PushEmpty(bool, object)
0x4fa: Stack[-1] = Stack[-3]
0x4fb: Call2 0x5f1

0x4fc: Stack[-5] = Stack[-2]
0x4fd: Pop(2)
0x4fe: Return(); Pop(2)

0x4ff: Stack[-1] = 0
0x500: Push(CvectorIndex(Stack[-0], 0))
0x501: Push(CvectorIndex(Stack[-0], 2))
0x502: @ RotateAsync(Stack[-2], Stack[-1])
0x503: Pop(2)
0x504: Return(); Pop(0)

0x505: PushEmpty(object, bool, object, bool)
0x506: Push("player")
0x507: @ FindActor(Stack[-3], Stack[-1])
0x508: Pop(1)
0x509: Pop(0); Push((bool) Stack[-2] == 0)
0x50a: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50b: Stack[-5] = (bool) 0
0x50c: Return(); Pop(4)

0x50d: PushEmpty(float, object)
0x50e: Stack[-1] = Stack[-4]
0x50f: Call2 0x5df

0x510: Pop(1)
0x511: Push((float)90000.0)
0x512: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x513: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x514: Stack[-5] = (bool) 0
0x515: Return(); Pop(4)

0x516: @ CanSee(Stack[-1], Stack[-2])
0x517: Pop(0)
0x518: Stack[-5] = Stack[-1]
0x519: Return(); Pop(4)

0x51a: Stack[-2] = 0
0x51b: PushEmpty(float, float)
0x51c: Push((int) 8)
0x51d: Push((int) 16)
0x51e: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x51f: Pop(2)
0x520: Push((int) 10)
0x521: @ SetTimer(Stack[-1], Stack[-2])
0x522: Pop(1)
0x523: Return(); Pop(2)

0x524: Push((int) 10)
0x525: @ KillTimer(Stack[-1])
0x526: Pop(1)
0x527: Return(); Pop(0)

0x528: PushEmpty()
0x529: Push((int) 10)
0x52a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52b: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x52c: PushEmpty()
0x52d: Call2 0x524

0x52e: Pop(0)
0x52f: PushEmpty(bool)
0x530: Stack[-1] = (bool) 0
0x531: PushEmpty(bool)
0x532: Call2 0x5fa

0x533: Pop(0)
0x534: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x535: PushEmpty(bool)
0x536: Call2 0x505

0x537: Pop(0)
0x538: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x539: Stack[-1] = (bool) 1
0x53a: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x53b: PushEmpty(bool)
0x53c: Call2 0x4f1

0x53d: Pop(0)
0x53e: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x53f: PushEmpty(bool, object)
0x540: PushEmpty(object)
0x541: Call2 0x713

0x542: Stack[-2] = Stack[-1]
0x543: Pop(1)
0x544: Call2 0x68e

0x545: Pop(2)
0x546: GOTO 0x54d

0x547: PushEmpty()
0x548: Call2 0x500

0x549: Pop(0)
0x54a: PushEmpty()
0x54b: Call2 0x51b

0x54c: Pop(0)
0x54d: Return(); Pop(0)

0x54e: PushEmpty()
0x54f: Call2 0x5da

0x550: Pop(0)
0x551: PushEmpty()
0x552: Call2 0x524

0x553: Pop(0)
0x554: @ lshStopSpeech()
0x555: Pop(0)
0x556: @ lshStopAnimation()
0x557: Pop(0)
0x558: @ StopAsync()
0x559: Pop(0)
0x55a: @ Hold()
0x55b: Pop(0)
0x55c: Return(); Pop(0)

0x55d: @ StopGroup0()
0x55e: Pop(0)
0x55f: PushEmpty()
0x560: Call2 0x524

0x561: Pop(0)
0x562: PushEmpty(string)
0x563: Stack[-1] = "Neutral"
0x564: Call2 0x6de

0x565: Pop(1)
0x566: PushEmpty()
0x567: Call2 0x51b

0x568: Pop(0)
0x569: Return(); Pop(0)

0x56a: PushEmpty()
0x56b: Push(Stack[-1])
0x56c: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56d: PushEmpty()
0x56e: Call2 0x51b

0x56f: Pop(0)
0x570: GOTO 0x575

0x571: PushEmpty(string)
0x572: Stack[-1] = "Neutral"
0x573: Call2 0x6de

0x574: Pop(1)
0x575: Return(); Pop(0)

0x576: PushEmpty(bool, bool)
0x577: @ IsOverrideActive(Stack[-1])
0x578: Pop(0)
0x579: Pop(0); Push((bool) Stack[-1] == 0)
0x57a: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x57b: EventDisable(0)
0x57c: PushEmpty()
0x57d: Call2 0x5da

0x57e: Pop(0)
0x57f: PushEmpty(bool, object)
0x580: Stack[-1] = Stack[-5]
0x581: Call2 0x5f1

0x582: Pop(2)
0x583: EventEnable(0)
0x584: PushEmpty(object)
0x585: Stack[-1] = Stack[-4]
0x586: Call2 0x853

0x587: Pop(1)
0x588: PushEmpty(string)
0x589: Stack[-1] = "Neutral"
0x58a: Call2 0x6de

0x58b: Pop(1)
0x58c: PushEmpty()
0x58d: Call2 0x524

0x58e: Pop(0)
0x58f: PushEmpty()
0x590: Call2 0x51b

0x591: Pop(0)
0x592: Return(); Pop(2)

0x593: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x594: @ WaitForAnimEnd()
0x595: Pop(0)
0x596: PushEmpty(bool)
0x597: Call2 0x5fa

0x598: Pop(0)
0x599: Pop(1); Push((bool) Stack[-1] == 0)
0x59a: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x59b: Return(); Pop(12)

0x59c: PushEmpty(int)
0x59d: Call2 0x76f

0x59e: Stack[-7] = Stack[-1]
0x59f: Pop(1)
0x5a0: Stack[-5] = (int) 0
0x5a1: PushEmpty(bool)
0x5a2: Stack[-1] = (bool) 0
0x5a3: Push((int) 5)
0x5a4: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x5a6: PushEmpty(bool)
0x5a7: Call2 0x5fa

0x5a8: Pop(0)
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x5aa: Stack[-1] = (bool) 1
0x5ab: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5ac: Pop(0); Push((bool) Stack[-6] == 0)
0x5ad: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5ae: Push((int) 3)
0x5af: @ Sleep(Stack[-1], Stack[-5])
0x5b0: Pop(1)
0x5b1: Pop(0); Push((bool) Stack[-4] == 0)
0x5b2: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b3: GOTO 0x5d5

0x5b4: GOTO 0x5ca

0x5b5: @ irand(Stack[-3], Stack[-6])
0x5b6: Pop(0)
0x5b7: Push((int) 5)
0x5b8: @ irand(Stack[-3], Stack[-1])
0x5b9: Pop(1)
0x5ba: Push((int) 0)
0x5bb: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5be; Pop(1)

0x5bd: Stack[-3] = (int) 0
0x5be: Push("all")
0x5bf: PushEmpty(string, int)
0x5c0: Stack[-1] = Stack[-6]
0x5c1: Call2 0x768

0x5c2: Pop(1)
0x5c3: @ PlayAnimation(Stack[-2], Stack[-1])
0x5c4: Pop(2)
0x5c5: @ WaitForAnimEnd(Stack[-1])
0x5c6: Pop(0)
0x5c7: Pop(0); Push((bool) Stack[-1] == 0)
0x5c8: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c9: GOTO 0x5d5

0x5ca: PushEmpty(bool)
0x5cb: Call2 0x5d8

0x5cc: Pop(0)
0x5cd: Pop(1); Push((bool) Stack[-1] == 0)
0x5ce: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5cf: GOTO 0x5d5

0x5d0: @ ResetAAS()
0x5d1: Pop(0)
0x5d2: Push((int) 1)
0x5d3: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x5d4: GOTO 0x5a1

0x5d5: @ ResetAAS()
0x5d6: Pop(0)
0x5d7: Return(); Pop(12)

0x5d8: Stack[-1] = (bool) 1
0x5d9: Return(); Pop(0)

0x5da: @ StopAnimation()
0x5db: Pop(0)
0x5dc: @ StopGroup0()
0x5dd: Pop(0)
0x5de: Return(); Pop(0)

0x5df: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5e0: @ GetPosition(Stack[-3])
0x5e1: Pop(0)
0x5e2: @@ GetPosition(Stack[-2])
0x5e3: Pop(0)
0x5e4: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x5e5: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x5e6: Return(); Pop(6)

0x5e7: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x5e8: @ GetPosition(Stack[-3])
0x5e9: Pop(0)
0x5ea: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x5eb: Push(CvectorIndex(Stack[-2], 0))
0x5ec: Push(CvectorIndex(Stack[-3], 2))
0x5ed: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x5ee: Pop(2)
0x5ef: Stack[-8] = Stack[-1]
0x5f0: Return(); Pop(6)

0x5f1: PushEmpty(cvector, cvector)
0x5f2: @@ GetPosition(Stack[-1])
0x5f3: Pop(0)
0x5f4: PushEmpty(bool, cvector)
0x5f5: Stack[-1] = Stack[-3]
0x5f6: Call2 0x5e7

0x5f7: Stack[-6] = Stack[-2]
0x5f8: Pop(2)
0x5f9: Return(); Pop(2)

0x5fa: PushEmpty(bool, bool)
0x5fb: @ IsLoaded(Stack[-1])
0x5fc: Pop(0)
0x5fd: Stack[-3] = Stack[-1]
0x5fe: Return(); Pop(2)

0x5ff: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x600: @@ GetPosition(Stack[-8])
0x601: Pop(0)
0x602: @@ GetEyesHeight(Stack[-9])
0x603: Pop(0)
0x604: Push(CvectorIndex(Stack[-8], 1))
0x605: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x606: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x607: @ GetPosition(Stack[-7])
0x608: Pop(0)
0x609: @ GetEyesHeight(Stack[-9])
0x60a: Pop(0)
0x60b: Push(CvectorIndex(Stack[-7], 1))
0x60c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x60d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x60e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x60f: Push(CvectorIndex(Stack[-6], 1))
0x610: Stack[-1] = (int) 0
0x611: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x612: Pop(0); Push(Stack[-6] | Stack[-6]);
0x613: Pop(1); Push(Sqrt(Stack[-1]))
0x614: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x615: Stack[-5] = -Stack[-6]; Pop(0);
0x616: Pop(0); Push(Stack[-6] * Stack[-19]);
0x617: PushEmpty(cvector, cvector)
0x618: Push(CVector(0.0, 1.0, 0.0))
0x619: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x61a: Call2 0x719

0x61b: Pop(1)
0x61c: Push((int) 25)
0x61d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x61e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x61f: Push(CVector(0.0, 10.0, 0.0))
0x620: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x621: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x622: @ IsOverrideActive(Stack[-2])
0x623: Pop(0)
0x624: Push(Stack[-2])
0x625: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x626: Stack[-21] = (bool) 0
0x627: Return(); Pop(18)

0x628: @ StopWorld()
0x629: Pop(0)
0x62a: @ CameraTransit(Stack[-3], Stack[-5])
0x62b: Pop(0)
0x62c: Push(CvectorIndex(Stack[-4], 0))
0x62d: Push(CvectorIndex(Stack[-5], 2))
0x62e: @ Rotate(Stack[-2], Stack[-1])
0x62f: Pop(2)
0x630: PushEmpty(bool)
0x631: Call2 0x788

0x632: Pop(0)
0x633: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x634: GOTO 0x63d

0x635: Push("head")
0x636: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x637: Pop(1)
0x638: Push(Stack[-1])
0x639: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x63a: Push("head")
0x63b: @ LookAsyncCamera(Stack[-1])
0x63c: Pop(1)
0x63d: @ CameraWaitForPlayFinish()
0x63e: Pop(0)
0x63f: @ ResumeWorld()
0x640: Pop(0)
0x641: Stack[-21] = (bool) 1
0x642: Return(); Pop(18)

0x643: PushEmpty(bool, bool)
0x644: @ CameraSwitchToNormal()
0x645: Pop(0)
0x646: PushEmpty(bool)
0x647: Call2 0x788

0x648: Pop(0)
0x649: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x64a: GOTO 0x653

0x64b: Push("head")
0x64c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x64d: Pop(1)
0x64e: Push(Stack[-1])
0x64f: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x650: Push("head")
0x651: @ UnlookAsync(Stack[-1])
0x652: Pop(1)
0x653: Return(); Pop(2)

0x654: PushEmpty(int, int, int, int)
0x655: Push("voice_common")
0x656: @ GetVariable(Stack[-1], Stack[-3])
0x657: Pop(1)
0x658: Push(Stack[-2])
0x659: IF (Stack[-1] == 0) GOTO 0x67a; Pop(1)

0x65a: PushEmpty(bool, object)
0x65b: Stack[-1] = Stack[-7]
0x65c: Call2 0x68e

0x65d: Pop(1)
0x65e: Pop(1); Push((bool) Stack[-1] == 0)
0x65f: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x660: PushEmpty(bool, object)
0x661: Stack[-1] = Stack[-7]
0x662: Call2 0x6b3

0x663: Pop(1)
0x664: Pop(1); Push((bool) Stack[-1] == 0)
0x665: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x666: Stack[-6] = (bool) 0
0x667: Return(); Pop(4)

0x668: Push((int) 2)
0x669: @ irand(Stack[-2], Stack[-1])
0x66a: Pop(1)
0x66b: Push(Stack[-1])
0x66c: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x66d: Push("voice_common")
0x66e: Push((int) 1)
0x66f: Pop(1); Push(Stack[-4] + Stack[-1]);
0x670: Push((int) 3)
0x671: Pop(2); Push(Stack[-2] % Stack[-1]);
0x672: @ SetVariable(Stack[-2], Stack[-1])
0x673: Pop(2)
0x674: GOTO 0x679

0x675: Push("voice_common")
0x676: Push((int) 0)
0x677: @ SetVariable(Stack[-2], Stack[-1])
0x678: Pop(2)
0x679: GOTO 0x68c

0x67a: PushEmpty(bool, object)
0x67b: Stack[-1] = Stack[-7]
0x67c: Call2 0x6b3

0x67d: Pop(1)
0x67e: Pop(1); Push((bool) Stack[-1] == 0)
0x67f: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x680: PushEmpty(bool, object)
0x681: Stack[-1] = Stack[-7]
0x682: Call2 0x68e

0x683: Pop(1)
0x684: Pop(1); Push((bool) Stack[-1] == 0)
0x685: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x686: Stack[-6] = (bool) 0
0x687: Return(); Pop(4)

0x688: Push("voice_common")
0x689: Push((int) 1)
0x68a: @ SetVariable(Stack[-2], Stack[-1])
0x68b: Pop(2)
0x68c: Stack[-6] = (bool) 1
0x68d: Return(); Pop(4)

0x68e: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x68f: Stack[-5] = "c"
0x690: Stack[-4] = (int) 0
0x691: Push((int) 1)
0x692: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x693: Push((int) 1)
0x694: Pop(1); Push(Stack[-5] + Stack[-1]);
0x695: Pop(1); Push(Stack[-6] + Stack[-1]);
0x696: @@ HasProperty(Stack[-1], Stack[-4])
0x697: Pop(1)
0x698: Pop(0); Push((bool) Stack[-3] == 0)
0x699: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x69a: GOTO 0x69e

0x69b: Push((int) 1)
0x69c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x69d: GOTO 0x691

0x69e: Pop(0); Push((bool) Stack[-4] == 0)
0x69f: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x6a0: Stack[-12] = (bool) 0
0x6a1: Return(); Pop(10)

0x6a2: Stack[-2] = (int) 0
0x6a3: Push((int) 1)
0x6a4: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x6a5: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x6a6: @ irand(Stack[-2], Stack[-4])
0x6a7: Pop(0)
0x6a8: Push((int) 1)
0x6a9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6aa: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6ab: @@ GetProperty(Stack[-1], Stack[-2])
0x6ac: Pop(1)
0x6ad: PushEmpty(bool, string)
0x6ae: Stack[-1] = Stack[-3]
0x6af: Call2 0x6fd

0x6b0: Stack[-14] = Stack[-2]
0x6b1: Pop(2)
0x6b2: Return(); Pop(10)

0x6b3: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x6b4: Push("d")
0x6b5: PushEmpty(int)
0x6b6: Call2 0x759

0x6b7: Pop(0)
0x6b8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6b9: Push("m")
0x6ba: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x6bb: Stack[-4] = (int) 0
0x6bc: Push((int) 1)
0x6bd: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6be: Push((int) 1)
0x6bf: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6c0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6c1: @@ HasProperty(Stack[-1], Stack[-4])
0x6c2: Pop(1)
0x6c3: Pop(0); Push((bool) Stack[-3] == 0)
0x6c4: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6c5: GOTO 0x6c9

0x6c6: Push((int) 1)
0x6c7: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x6c8: GOTO 0x6bc

0x6c9: Pop(0); Push((bool) Stack[-4] == 0)
0x6ca: IF (Stack[-1] == 0) GOTO 0x6cd; Pop(1)

0x6cb: Stack[-12] = (bool) 0
0x6cc: Return(); Pop(10)

0x6cd: Stack[-2] = (int) 0
0x6ce: Push((int) 1)
0x6cf: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6d1: @ irand(Stack[-2], Stack[-4])
0x6d2: Pop(0)
0x6d3: Push((int) 1)
0x6d4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6d5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6d6: @@ GetProperty(Stack[-1], Stack[-2])
0x6d7: Pop(1)
0x6d8: PushEmpty(bool, string)
0x6d9: Stack[-1] = Stack[-3]
0x6da: Call2 0x6fd

0x6db: Stack[-14] = Stack[-2]
0x6dc: Pop(2)
0x6dd: Return(); Pop(10)

0x6de: PushEmpty(bool, float, float, bool, float, float)
0x6df: @ lshHasAnimation(Stack[-3], Stack[-7])
0x6e0: Pop(0)
0x6e1: Push(Stack[-3])
0x6e2: IF (Stack[-1] == 0) GOTO 0x6e9; Pop(1)

0x6e3: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x6e4: Pop(0)
0x6e5: Push((bool) 0)
0x6e6: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6e7: Pop(1)
0x6e8: GOTO 0x6ed

0x6e9: Push("Can't find lsh animation : ")
0x6ea: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6eb: @ Trace(Stack[-1])
0x6ec: Pop(1)
0x6ed: Return(); Pop(6)

0x6ee: PushEmpty(bool, float, float, bool, float, float)
0x6ef: @ lshHasAnimation(Stack[-3], Stack[-8])
0x6f0: Pop(0)
0x6f1: Push(Stack[-3])
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f3: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x6f4: Pop(0)
0x6f5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x6f6: Pop(0)
0x6f7: GOTO 0x6fc

0x6f8: Push("Can't find lsh animation : ")
0x6f9: Pop(1); Push(Stack[-1] + Stack[-9]);
0x6fa: @ Trace(Stack[-1])
0x6fb: Pop(1)
0x6fc: Return(); Pop(6)

0x6fd: PushEmpty(bool, bool)
0x6fe: PushEmpty(bool)
0x6ff: Call2 0x788

0x700: Pop(0)
0x701: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x702: @ lshHasSpeech(Stack[-1], Stack[-3])
0x703: Pop(0)
0x704: Push(Stack[-1])
0x705: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x706: @ lshPlaySpeech(Stack[-3])
0x707: Pop(0)
0x708: Stack[-4] = (bool) 1
0x709: Return(); Pop(2)

0x70a: Stack[-4] = (bool) 0
0x70b: Return(); Pop(2)

0x70c: PushEmpty(bool)
0x70d: Call2 0x788

0x70e: Pop(0)
0x70f: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x710: @ lshStopSpeech()
0x711: Pop(0)
0x712: Return(); Pop(0)

0x713: PushEmpty(object, object)
0x714: @ self(Stack[-1])
0x715: Pop(0)
0x716: Stack[-3] = Stack[-1]
0x717: Return(); Pop(2)

0x718: Stack[-1] = 0
0x719: PushEmpty(float, float)
0x71a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x71b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x71c: Push((float)0.0)
0x71d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x71e: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x71f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x720: Return(); Pop(2)

0x721: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x722: Return(); Pop(2)

0x723: PushEmpty(int, int)
0x724: @ GetVariable(Stack[-3], Stack[-1])
0x725: Pop(0)
0x726: Stack[-4] = Stack[-1]
0x727: Return(); Pop(2)

0x728: PushEmpty(object, object)
0x729: @ CreateIntVector(Stack[-1])
0x72a: Pop(0)
0x72b: @@ add(Stack[-4])
0x72c: Pop(0)
0x72d: @@ add(Stack[-3])
0x72e: Pop(0)
0x72f: Push((int) 3)
0x730: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x731: Pop(1)
0x732: Return(); Pop(2)

0x733: Stack[-1] = 0
0x734: PushEmpty(int, int, bool, int, int, bool)
0x735: @@ GetItemID(Stack[-3])
0x736: Pop(0)
0x737: Push("Category")
0x738: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x739: Pop(1)
0x73a: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x73b: Pop(0)
0x73c: Pop(0); Push((bool) Stack[-1] == 0)
0x73d: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x73e: @@ DropItems(Stack[-8], Stack[-7])
0x73f: Pop(0)
0x740: GOTO 0x746

0x741: PushEmpty(int, int)
0x742: Stack[-2] = Stack[-5]
0x743: Stack[-1] = Stack[-9]
0x744: Call2 0x728

0x745: Pop(2)
0x746: Return(); Pop(6)

0x747: PushEmpty(object, object)
0x748: @ CreateInvItem(Stack[-1])
0x749: Pop(0)
0x74a: @@ SetItemName(Stack[-4])
0x74b: Pop(0)
0x74c: PushEmpty(object, object, int)
0x74d: Stack[-3] = Stack[-8]
0x74e: Stack[-2] = Stack[-4]
0x74f: Stack[-1] = Stack[-6]
0x750: Call2 0x734

0x751: Pop(3)
0x752: Return(); Pop(2)

0x753: Stack[-1] = 0
0x754: PushEmpty(float, float)
0x755: @ GetGameTime(Stack[-1])
0x756: Pop(0)
0x757: Stack[-3] = Stack[-1]
0x758: Return(); Pop(2)

0x759: PushEmpty(float, float)
0x75a: @ GetGameTime(Stack[-1])
0x75b: Pop(0)
0x75c: Push((int) 1)
0x75d: PushEmpty(int)
0x75e: Push((int) 24)
0x75f: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x760: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x761: Return(); Pop(2)

0x762: PushEmpty()
0x763: PushEmpty(int)
0x764: Call2 0x759

0x765: Pop(0)
0x766: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x767: Return(); Pop(0)

0x768: PushEmpty(string, string)
0x769: Stack[-1] = "idle"
0x76a: Push(Stack[-3])
0x76b: IF (Stack[-1] == 0) GOTO 0x76d; Pop(1)

0x76c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x76d: Stack[-4] = Stack[-1]
0x76e: Return(); Pop(2)

0x76f: PushEmpty(int, bool, int, bool)
0x770: Stack[-2] = (int) 0
0x771: Push("all")
0x772: PushEmpty(string, int)
0x773: Stack[-1] = Stack[-5]
0x774: Call2 0x768

0x775: Pop(1)
0x776: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x777: Pop(2)
0x778: Pop(0); Push((bool) Stack[-1] == 0)
0x779: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x77a: GOTO 0x77e

0x77b: Push((int) 1)
0x77c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x77d: GOTO 0x771

0x77e: Stack[-5] = Stack[-2]
0x77f: Return(); Pop(4)

0x780: Stack[-1] = (int) 515528
0x781: Return(); Pop(0)

0x782: Stack[-1] = (int) 502854
0x783: Return(); Pop(0)

0x784: Stack[-1] = "ui/NPC_Alexandr.png"
0x785: Return(); Pop(0)

0x786: Stack[-1] = "ui/NPC_Alexandr_b.png"
0x787: Return(); Pop(0)

0x788: Stack[-1] = (bool) 1
0x789: Return(); Pop(0)

0x78a: PushEmpty(object, object)
0x78b: Push("b2q01")
0x78c: Push((int) 2)
0x78d: @ SetVariable(Stack[-2], Stack[-1])
0x78e: Pop(2)
0x78f: PushEmpty(object)
0x790: Call2 0x810

0x791: Stack[-2] = Stack[-1]
0x792: Pop(1)
0x793: Push("b2q01AlexandrGotoOspina")
0x794: Push("pt_map_ospina")
0x795: Push((int) 1)
0x796: Push((int) 520459)
0x797: PushEmpty(float)
0x798: Call2 0x754

0x799: Pop(0)
0x79a: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x79b: Pop(5)
0x79c: PushEmpty()
0x79d: Call2 0x7da

0x79e: Pop(0)
0x79f: Return(); Pop(2)

0x7a0: Stack[-1] = 0
0x7a1: PushEmpty()
0x7a2: Push("oob2Alexandr1")
0x7a3: Push((int) 1)
0x7a4: @ SetVariable(Stack[-2], Stack[-1])
0x7a5: Pop(2)
0x7a6: Return(); Pop(0)

0x7a7: PushEmpty()
0x7a8: Push("key is given")
0x7a9: @ Trace(Stack[-1])
0x7aa: Pop(1)
0x7ab: PushEmpty(object, string, int)
0x7ac: Stack[-3] = Stack[-5]
0x7ad: Stack[-2] = "b2q01_key"
0x7ae: Stack[-1] = (int) 1
0x7af: Call2 0x747

0x7b0: Pop(3)
0x7b1: Return(); Pop(0)

0x7b2: PushEmpty()
0x7b3: PushEmpty(object, string, float)
0x7b4: PushEmpty(object)
0x7b5: Call2 0x810

0x7b6: Stack[-4] = Stack[-1]
0x7b7: Pop(1)
0x7b8: Stack[-2] = "pt_map_ospina"
0x7b9: Stack[-1] = (int) 2
0x7ba: Call2 0x821

0x7bb: Pop(3)
0x7bc: PushEmpty(object)
0x7bd: Call2 0x810

0x7be: Pop(0)
0x7bf: @@ ShowMap(Stack[-1])
0x7c0: Pop(1)
0x7c1: Return(); Pop(0)

0x7c2: PushEmpty()
0x7c3: PushEmpty(int, string)
0x7c4: Stack[-1] = "b2q01"
0x7c5: Call2 0x723

0x7c6: Pop(1)
0x7c7: Push((int) 1)
0x7c8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7c9: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7ca: Stack[-2] = (bool) 1
0x7cb: Return(); Pop(0)

0x7cc: Stack[-2] = (bool) 0
0x7cd: Return(); Pop(0)

0x7ce: PushEmpty()
0x7cf: PushEmpty(int, string)
0x7d0: Stack[-1] = "oob2Alexandr1"
0x7d1: Call2 0x723

0x7d2: Pop(1)
0x7d3: Push((int) 0)
0x7d4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7d5: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7d6: Stack[-2] = (bool) 1
0x7d7: Return(); Pop(0)

0x7d8: Stack[-2] = (bool) 0
0x7d9: Return(); Pop(0)

0x7da: PushEmpty(object, object)
0x7db: Push((int) 247)
0x7dc: Push((int) 1)
0x7dd: Push((int) 520468)
0x7de: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7df: Pop(3)
0x7e0: PushEmpty(bool, object, int)
0x7e1: Stack[-2] = Stack[-4]
0x7e2: Stack[-1] = (int) 245
0x7e3: Call2 0x7f4

0x7e4: Pop(3)
0x7e5: Return(); Pop(2)

0x7e6: Stack[-1] = 0
0x7e7: PushEmpty(object, object)
0x7e8: @ GetDiaryRoot(Stack[-1])
0x7e9: Pop(0)
0x7ea: Pop(0); Push((bool) Stack[-1] == 0)
0x7eb: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7ec: Push("Can't retrieve diary root")
0x7ed: @ Trace(Stack[-1])
0x7ee: Pop(1)
0x7ef: Stack[-3] = (bool) 0
0x7f0: Return(); Pop(2)

0x7f1: Stack[-3] = Stack[-1]
0x7f2: Return(); Pop(2)

0x7f3: Stack[-1] = 0
0x7f4: PushEmpty(object, object, int, object, object, int)
0x7f5: PushEmpty(object)
0x7f6: Call2 0x7e7

0x7f7: Stack[-4] = Stack[-1]
0x7f8: Pop(1)
0x7f9: @@ Find(Stack[-7], Stack[-2])
0x7fa: Pop(0)
0x7fb: Pop(0); Push((bool) Stack[-2] == 0)
0x7fc: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x7fd: Push("Can't find diary parent with id: ")
0x7fe: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7ff: @ Trace(Stack[-1])
0x800: Pop(1)
0x801: Stack[-9] = (bool) 0
0x802: Return(); Pop(6)

0x803: @@ AddChild(Stack[-8])
0x804: Pop(0)
0x805: Push((int) 7)
0x806: @ SendWorldWndMessage(Stack[-1])
0x807: Pop(1)
0x808: @@ GetCategory(Stack[-1])
0x809: Pop(0)
0x80a: @ SetDiarySection(Stack[-1])
0x80b: Pop(0)
0x80c: Stack[-9] = (bool) 0
0x80d: Return(); Pop(6)

0x80e: Stack[-2] = 0
0x80f: Stack[-3] = 0
0x810: PushEmpty(object, object, object, object)
0x811: @ GetMainOutdoorScene(Stack[-2])
0x812: Pop(0)
0x813: Pop(0); Push((bool) Stack[-2] == 0)
0x814: IF (Stack[-1] == 0) GOTO 0x81b; Pop(1)

0x815: Push("Can't find main outdoor scene")
0x816: @ Trace(Stack[-1])
0x817: Pop(1)
0x818: Stack[-1] = 0
0x819: Stack[-5] = Stack[-1]
0x81a: Return(); Pop(4)

0x81b: @@ GetMap(Stack[-1])
0x81c: Pop(0)
0x81d: Stack[-5] = Stack[-1]
0x81e: Return(); Pop(4)

0x81f: Stack[-1] = 0
0x820: Stack[-2] = 0
0x821: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x822: @ GetMainOutdoorScene(Stack[-2])
0x823: Pop(0)
0x824: Pop(0); Push((bool) Stack[-2] == 0)
0x825: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x826: Push("Can't find main outdoor scene")
0x827: @ Trace(Stack[-1])
0x828: Pop(1)
0x829: Return(); Pop(8)

0x82a: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x82b: Pop(0)
0x82c: Pop(0); Push((bool) Stack[-1] == 0)
0x82d: IF (Stack[-1] == 0) GOTO 0x834; Pop(1)

0x82e: Push("Warning: outdoor scene locator ")
0x82f: Pop(1); Push(Stack[-1] + Stack[-11]);
0x830: Push(" doesnt exist")
0x831: Pop(2); Push(Stack[-2] + Stack[-1]);
0x832: @ Trace(Stack[-1])
0x833: Pop(1)
0x834: @@ GetMap(Stack[-11])
0x835: Pop(0)
0x836: Pop(0); Push((bool) Stack[-11] == 0)
0x837: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x838: Push("Can't find map")
0x839: @ Trace(Stack[-1])
0x83a: Pop(1)
0x83b: Return(); Pop(8)

0x83c: Push(CvectorIndex(Stack[-4], 0))
0x83d: Push(CvectorIndex(Stack[-5], 2))
0x83e: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x83f: Pop(2)
0x840: Return(); Pop(8)

0x841: Stack[-2] = 0
0x842: PushEmpty(int, int)
0x843: Push("branch")
0x844: @ GetVariable(Stack[-1], Stack[-2])
0x845: Pop(1)
0x846: Push((int) 0)
0x847: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x848: IF (Stack[-1] == 0) GOTO 0x84c; Pop(1)

0x849: Stack[-3] = (int) 1
0x84a: Return(); Pop(2)

0x84b: GOTO 0x851

0x84c: Push((int) 1)
0x84d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x84e: IF (Stack[-1] == 0) GOTO 0x851; Pop(1)

0x84f: Stack[-3] = (int) 2
0x850: Return(); Pop(2)

0x851: Stack[-3] = (int) 3
0x852: Return(); Pop(2)

0x853: PushEmpty()
0x854: Push(GlobalVars[1])
0x855: Pop(1); Push((bool) Stack[-1] == 0)
0x856: IF (Stack[-1] == 0) GOTO 0x860; Pop(1)

0x857: PushEmpty(int, object)
0x858: Stack[-1] = Stack[-3]
0x859: Push(-2, 1); TaskCall(4)
0x85a: Call2 0x346

0x85b: Pop(-2, 1); TaskReturn
0x85c: Pop(2)
0x85d: Push(GlobalVars[1])
0x85e: Stack[-1] = (bool) 1
0x85f: GlobalVars[1] = Stack[-1]; Pop(1)
0x860: PushEmpty(bool, int)
0x861: Stack[-1] = (int) 2
0x862: Call2 0x762

0x863: Pop(1)
0x864: IF (Stack[-1] == 0) GOTO 0x86c; Pop(1)

0x865: PushEmpty(int, object)
0x866: Stack[-1] = Stack[-3]
0x867: Push(-2, 1); TaskCall(2)
0x868: Call2 0x103

0x869: Pop(-2, 1); TaskReturn
0x86a: Pop(2)
0x86b: Return(); Pop(0)

0x86c: PushEmpty(bool)
0x86d: Stack[-1] = (bool) 0
0x86e: PushEmpty(bool, int)
0x86f: Stack[-1] = (int) 12
0x870: Call2 0x762

0x871: Pop(1)
0x872: IF (Stack[-1] == 0) GOTO 0x877; Pop(1)

0x873: Push(GlobalVars[2])
0x874: Pop(1); Push((bool) Stack[-1] == 0)
0x875: IF (Stack[-1] == 0) GOTO 0x877; Pop(1)

0x876: Stack[-1] = (bool) 1
0x877: IF (Stack[-1] == 0) GOTO 0x882; Pop(1)

0x878: PushEmpty(int, object)
0x879: Stack[-1] = Stack[-3]
0x87a: Push(-2, 1); TaskCall(0)
0x87b: Call2 0x0

0x87c: Pop(-2, 1); TaskReturn
0x87d: Pop(2)
0x87e: Push(GlobalVars[2])
0x87f: Stack[-1] = (bool) 1
0x880: GlobalVars[2] = Stack[-1]; Pop(1)
0x881: Return(); Pop(0)

0x882: PushEmpty(int, object)
0x883: Stack[-1] = Stack[-3]
0x884: Push(-2, 1); TaskCall(6)
0x885: Call2 0x411

0x886: Pop(-2, 1); TaskReturn
0x887: Pop(2)
0x888: Return(); Pop(0)

