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
	cleanup
	restore
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
	pt_map_aglaja
	ShowMap
	volonteers_danko
	disease
	petr
	map_chertez_state
	map_chertez_force
	tvirin
	RemoveItemByType
	ood10Petr1
	d10q01
	blueprint is given
	d10q01_blueprint
	ood10Petr3
	d10q01MariaSavePetr
	GetItemCountOfType
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
	ui/NPC_Petr.png
	ui/NPC_Petr_b.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPosition (1 args)
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
	irand (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (3 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x411
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xda Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x409 Vars = (object)
		EVENT_26 Op = 0x415 Vars = (string)
		EVENT_6 Op = 0x431 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x443

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x6e8

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x6e6

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x6ea

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x6ec

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x6d5

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
0x31: Call2 0x557

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x498

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
0x48: Call2 0x487

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
0x56: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0xc4

0x5a: Pop(1)
0x5b: Push((int) 512871)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool)
0x61: Stack[-1] = (bool) 0
0x62: PushEmpty(bool, object)
0x63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64: Call2 0x603

0x65: Pop(1)
0x66: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x67: PushEmpty(bool, object)
0x68: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69: Call2 0x61b

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6c: Stack[-1] = (bool) 1
0x6d: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6e: Push((int) 512854)
0x6f: Push((int) 14056)
0x70: Push((int) 14055)
0x71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72: Pop(3)
0x73: PushEmpty(bool)
0x74: Stack[-1] = (bool) 0
0x75: PushEmpty(bool, object)
0x76: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77: Call2 0x627

0x78: Pop(1)
0x79: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0x633

0x7d: Pop(1)
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: Stack[-1] = (bool) 1
0x80: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x81: Push((int) 515468)
0x82: Push((int) 16586)
0x83: Push((int) 16585)
0x84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85: Pop(3)
0x86: PushEmpty(bool)
0x87: Stack[-1] = (bool) 0
0x88: PushEmpty(bool, object)
0x89: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a: Call2 0x63d

0x8b: Pop(1)
0x8c: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8d: PushEmpty(bool, object)
0x8e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f: Call2 0x649

0x90: Pop(1)
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Stack[-1] = (bool) 1
0x93: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x94: Push((int) 512879)
0x95: Push((int) 41846)
0x96: Push((int) 14081)
0x97: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98: Pop(3)
0x99: Push((int) 512890)
0x9a: Push((int) -1)
0x9b: Push((int) 14092)
0x9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d: Pop(3)
0x9e: Push((int) 538887)
0x9f: Push((int) -1)
0xa0: Push((int) 40831)
0xa1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2: Pop(3)
0xa3: GOTO 0xa6

0xa4: Return(); Pop(0)

0xa5: GOTO 0x55

0xa6: PushEmpty(bool)
0xa7: Call2 0x6ee

0xa8: Pop(0)
0xa9: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xaa: @ lshWaitForAnimEnd()
0xab: Pop(0)
0xac: Push( Stack[3 + Tasks[-1].StackPointer] )
0xad: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xae: GOTO 0xb4

0xaf: PushEmpty(string)
0xb0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb1: Call2 0x522

0xb2: Pop(1)
0xb3: GOTO 0xaa

0xb4: GOTO 0xc3

0xb5: Push("all")
0xb6: Push("idle")
0xb7: @ PlayAnimation(Stack[-2], Stack[-1])
0xb8: Pop(2)
0xb9: @ WaitForAnimEnd()
0xba: Pop(0)
0xbb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: GOTO 0xc3

0xbe: Push("all")
0xbf: Push("idle")
0xc0: @ PlayAnimation(Stack[-2], Stack[-1])
0xc1: Pop(2)
0xc2: GOTO 0xb9

0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: PushEmpty(bool)
0xc6: Call2 0x6ee

0xc7: Pop(0)
0xc8: Pop(1); Push((bool) Stack[-1] == 0)
0xc9: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xca: Return(); Pop(0)

0xcb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xcc: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcd: Return(); Pop(0)

0xce: PushEmpty(string, bool)
0xcf: Stack[-2] = Stack[-3]
0xd0: Push("")
0xd1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd3: Stack[-1] = (bool) 0
0xd4: GOTO 0xd6

0xd5: Stack[-1] = (bool) 1
0xd6: Call2 0x532

0xd7: Pop(2)
0xd8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd9: Return(); Pop(0)

0xda: PushEmpty()
0xdb: Push((int) 1)
0xdc: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0xdd: PushEmpty()
0xde: Call2 0x550

0xdf: Pop(0)
0xe0: Push((int) 14055)
0xe1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe3: PushEmpty(object, object)
0xe4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe6: Call2 0x5dc

0xe7: Pop(2)
0xe8: Push((int) 14078)
0xe9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xeb: PushEmpty(object, object)
0xec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xee: Call2 0x5e2

0xef: Pop(2)
0xf0: Push((int) 40843)
0xf1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf3: PushEmpty(object, object)
0xf4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf6: Call2 0x5e2

0xf7: Pop(2)
0xf8: Push((int) 40845)
0xf9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xfb: PushEmpty(object, object)
0xfc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfe: Call2 0x5eb

0xff: Pop(2)
0x100: PushEmpty(object, object)
0x101: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x102: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x103: Call2 0x5c5

0x104: Pop(2)
0x105: PushEmpty(object, object)
0x106: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x107: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x108: Call2 0x5d6

0x109: Pop(2)
0x10a: PushEmpty(object, object)
0x10b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10d: Call2 0x5ad

0x10e: Pop(2)
0x10f: Push((int) 41504)
0x110: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x112: PushEmpty(object, object)
0x113: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x114: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x115: Call2 0x5eb

0x116: Pop(2)
0x117: PushEmpty(object, object)
0x118: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x119: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11a: Call2 0x5bd

0x11b: Pop(2)
0x11c: PushEmpty(object, object)
0x11d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11f: Call2 0x5c5

0x120: Pop(2)
0x121: PushEmpty(object, object)
0x122: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x123: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x124: Call2 0x5d6

0x125: Pop(2)
0x126: PushEmpty(object, object)
0x127: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x128: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x129: Call2 0x5ad

0x12a: Pop(2)
0x12b: Push((int) 16589)
0x12c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x12e: PushEmpty(object, object)
0x12f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x130: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x131: Call2 0x5eb

0x132: Pop(2)
0x133: PushEmpty(object, object)
0x134: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x135: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x136: Call2 0x5c5

0x137: Pop(2)
0x138: PushEmpty(object, object)
0x139: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13b: Call2 0x5d6

0x13c: Pop(2)
0x13d: PushEmpty(object, object)
0x13e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x140: Call2 0x5ad

0x141: Pop(2)
0x142: Push((int) 40844)
0x143: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x144: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x145: PushEmpty(object, object)
0x146: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x147: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x148: Call2 0x5eb

0x149: Pop(2)
0x14a: PushEmpty(object, object)
0x14b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14d: Call2 0x5c5

0x14e: Pop(2)
0x14f: PushEmpty(object, object)
0x150: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x151: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x152: Call2 0x5d6

0x153: Pop(2)
0x154: PushEmpty(object, object)
0x155: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x156: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x157: Call2 0x5ad

0x158: Pop(2)
0x159: Push((int) 14081)
0x15a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15c: PushEmpty(object, object)
0x15d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15f: Call2 0x5fd

0x160: Pop(2)
0x161: Push((int) 14073)
0x162: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x164: PushEmpty(string)
0x165: Stack[-1] = "Neutral"
0x166: Call2 0xc4

0x167: Pop(1)
0x168: Push((int) 512871)
0x169: @@ SetMessage(Stack[-1])
0x16a: Pop(1)
0x16b: @@ ClearReplies()
0x16c: Pop(0)
0x16d: PushEmpty(bool)
0x16e: Stack[-1] = (bool) 0
0x16f: PushEmpty(bool, object)
0x170: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x171: Call2 0x603

0x172: Pop(1)
0x173: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x174: PushEmpty(bool, object)
0x175: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x176: Call2 0x61b

0x177: Pop(1)
0x178: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x179: Stack[-1] = (bool) 1
0x17a: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17b: Push((int) 512854)
0x17c: Push((int) 14056)
0x17d: Push((int) 14055)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: PushEmpty(bool)
0x181: Stack[-1] = (bool) 0
0x182: PushEmpty(bool, object)
0x183: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x184: Call2 0x627

0x185: Pop(1)
0x186: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x187: PushEmpty(bool, object)
0x188: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x189: Call2 0x633

0x18a: Pop(1)
0x18b: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18c: Stack[-1] = (bool) 1
0x18d: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18e: Push((int) 515468)
0x18f: Push((int) 16586)
0x190: Push((int) 16585)
0x191: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x192: Pop(3)
0x193: PushEmpty(bool)
0x194: Stack[-1] = (bool) 0
0x195: PushEmpty(bool, object)
0x196: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x197: Call2 0x63d

0x198: Pop(1)
0x199: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19a: PushEmpty(bool, object)
0x19b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19c: Call2 0x649

0x19d: Pop(1)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19f: Stack[-1] = (bool) 1
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a1: Push((int) 512879)
0x1a2: Push((int) 41846)
0x1a3: Push((int) 14081)
0x1a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a5: Pop(3)
0x1a6: Push((int) 512890)
0x1a7: Push((int) -1)
0x1a8: Push((int) 14092)
0x1a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1aa: Pop(3)
0x1ab: Push((int) 538887)
0x1ac: Push((int) -1)
0x1ad: Push((int) 40831)
0x1ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1af: Pop(3)
0x1b0: Return(); Pop(0)

0x1b1: Push((int) 41846)
0x1b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1b4: PushEmpty(string)
0x1b5: Stack[-1] = "Neutral"
0x1b6: Call2 0xc4

0x1b7: Pop(1)
0x1b8: Push((int) 539888)
0x1b9: @@ SetMessage(Stack[-1])
0x1ba: Pop(1)
0x1bb: @@ ClearReplies()
0x1bc: Pop(0)
0x1bd: Push((int) 539889)
0x1be: Push((int) 41848)
0x1bf: Push((int) 41847)
0x1c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c1: Pop(3)
0x1c2: Push((int) 539892)
0x1c3: Push((int) 41848)
0x1c4: Push((int) 41850)
0x1c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c6: Pop(3)
0x1c7: Return(); Pop(0)

0x1c8: Push((int) 41848)
0x1c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1cb: PushEmpty(string)
0x1cc: Stack[-1] = "Neutral"
0x1cd: Call2 0xc4

0x1ce: Pop(1)
0x1cf: Push((int) 539890)
0x1d0: @@ SetMessage(Stack[-1])
0x1d1: Pop(1)
0x1d2: @@ ClearReplies()
0x1d3: Pop(0)
0x1d4: Push((int) 539894)
0x1d5: Push((int) 41854)
0x1d6: Push((int) 41853)
0x1d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d8: Pop(3)
0x1d9: Push((int) 539893)
0x1da: Push((int) 41856)
0x1db: Push((int) 41852)
0x1dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dd: Pop(3)
0x1de: Return(); Pop(0)

0x1df: Push((int) 41856)
0x1e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1e2: PushEmpty(string)
0x1e3: Stack[-1] = "Neutral"
0x1e4: Call2 0xc4

0x1e5: Pop(1)
0x1e6: Push((int) 539897)
0x1e7: @@ SetMessage(Stack[-1])
0x1e8: Pop(1)
0x1e9: @@ ClearReplies()
0x1ea: Pop(0)
0x1eb: Push((int) 539898)
0x1ec: Push((int) 41854)
0x1ed: Push((int) 41857)
0x1ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ef: Pop(3)
0x1f0: Return(); Pop(0)

0x1f1: Push((int) 41854)
0x1f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1f4: PushEmpty(string)
0x1f5: Stack[-1] = "Neutral"
0x1f6: Call2 0xc4

0x1f7: Pop(1)
0x1f8: Push((int) 539895)
0x1f9: @@ SetMessage(Stack[-1])
0x1fa: Pop(1)
0x1fb: @@ ClearReplies()
0x1fc: Pop(0)
0x1fd: Push((int) 539891)
0x1fe: Push((int) 14082)
0x1ff: Push((int) 41849)
0x200: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x201: Pop(3)
0x202: Push((int) 539896)
0x203: Push((int) -1)
0x204: Push((int) 41855)
0x205: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x206: Pop(3)
0x207: Return(); Pop(0)

0x208: Push((int) 14082)
0x209: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x20b: PushEmpty(string)
0x20c: Stack[-1] = "Neutral"
0x20d: Call2 0xc4

0x20e: Pop(1)
0x20f: Push((int) 512880)
0x210: @@ SetMessage(Stack[-1])
0x211: Pop(1)
0x212: @@ ClearReplies()
0x213: Pop(0)
0x214: Push((int) 512881)
0x215: Push((int) 14084)
0x216: Push((int) 14083)
0x217: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x218: Pop(3)
0x219: Push((int) 539568)
0x21a: Push((int) 14086)
0x21b: Push((int) 41507)
0x21c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21d: Pop(3)
0x21e: Return(); Pop(0)

0x21f: Push((int) 14084)
0x220: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x222: PushEmpty(string)
0x223: Stack[-1] = "Neutral"
0x224: Call2 0xc4

0x225: Pop(1)
0x226: Push((int) 512882)
0x227: @@ SetMessage(Stack[-1])
0x228: Pop(1)
0x229: @@ ClearReplies()
0x22a: Pop(0)
0x22b: Push((int) 512883)
0x22c: Push((int) 14086)
0x22d: Push((int) 14085)
0x22e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22f: Pop(3)
0x230: Return(); Pop(0)

0x231: Push((int) 14086)
0x232: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x233: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x234: PushEmpty(string)
0x235: Stack[-1] = "Neutral"
0x236: Call2 0xc4

0x237: Pop(1)
0x238: Push((int) 512884)
0x239: @@ SetMessage(Stack[-1])
0x23a: Pop(1)
0x23b: @@ ClearReplies()
0x23c: Pop(0)
0x23d: Push((int) 512885)
0x23e: Push((int) 14088)
0x23f: Push((int) 14087)
0x240: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x241: Pop(3)
0x242: Push((int) 539569)
0x243: Push((int) 14090)
0x244: Push((int) 41509)
0x245: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x246: Pop(3)
0x247: Return(); Pop(0)

0x248: Push((int) 14088)
0x249: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x24b: PushEmpty(string)
0x24c: Stack[-1] = "Neutral"
0x24d: Call2 0xc4

0x24e: Pop(1)
0x24f: Push((int) 512886)
0x250: @@ SetMessage(Stack[-1])
0x251: Pop(1)
0x252: @@ ClearReplies()
0x253: Pop(0)
0x254: Push((int) 512887)
0x255: Push((int) 14090)
0x256: Push((int) 14089)
0x257: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x258: Pop(3)
0x259: Return(); Pop(0)

0x25a: Push((int) 14090)
0x25b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25c: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x25d: PushEmpty(string)
0x25e: Stack[-1] = "Neutral"
0x25f: Call2 0xc4

0x260: Pop(1)
0x261: Push((int) 512888)
0x262: @@ SetMessage(Stack[-1])
0x263: Pop(1)
0x264: @@ ClearReplies()
0x265: Pop(0)
0x266: Push((int) 512889)
0x267: Push((int) -1)
0x268: Push((int) 14091)
0x269: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26a: Pop(3)
0x26b: Push((int) 539570)
0x26c: Push((int) -1)
0x26d: Push((int) 41511)
0x26e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26f: Pop(3)
0x270: Return(); Pop(0)

0x271: Push((int) 16586)
0x272: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x273: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x274: PushEmpty(string)
0x275: Stack[-1] = "Neutral"
0x276: Call2 0xc4

0x277: Pop(1)
0x278: Push((int) 515469)
0x279: @@ SetMessage(Stack[-1])
0x27a: Pop(1)
0x27b: @@ ClearReplies()
0x27c: Pop(0)
0x27d: Push((int) 512858)
0x27e: Push((int) 14061)
0x27f: Push((int) 14059)
0x280: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x281: Pop(3)
0x282: Push((int) 538897)
0x283: Push((int) -1)
0x284: Push((int) 40844)
0x285: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x286: Pop(3)
0x287: Return(); Pop(0)

0x288: Push((int) 14061)
0x289: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28a: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x28b: PushEmpty(string)
0x28c: Stack[-1] = "Neutral"
0x28d: Call2 0xc4

0x28e: Pop(1)
0x28f: Push((int) 512860)
0x290: @@ SetMessage(Stack[-1])
0x291: Pop(1)
0x292: @@ ClearReplies()
0x293: Pop(0)
0x294: Push((int) 512861)
0x295: Push((int) 14063)
0x296: Push((int) 14062)
0x297: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x298: Pop(3)
0x299: PushEmpty(bool, object)
0x29a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29b: Call2 0x60f

0x29c: Pop(1)
0x29d: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x29e: Push((int) 539559)
0x29f: Push((int) 41502)
0x2a0: Push((int) 41498)
0x2a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a2: Pop(3)
0x2a3: Return(); Pop(0)

0x2a4: Push((int) 41502)
0x2a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2a7: PushEmpty(string)
0x2a8: Stack[-1] = "Neutral"
0x2a9: Call2 0xc4

0x2aa: Pop(1)
0x2ab: Push((int) 539563)
0x2ac: @@ SetMessage(Stack[-1])
0x2ad: Pop(1)
0x2ae: @@ ClearReplies()
0x2af: Pop(0)
0x2b0: Push((int) 539564)
0x2b1: Push((int) 14070)
0x2b2: Push((int) 41503)
0x2b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b4: Pop(3)
0x2b5: Return(); Pop(0)

0x2b6: Push((int) 14070)
0x2b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b8: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2b9: PushEmpty(string)
0x2ba: Stack[-1] = "Neutral"
0x2bb: Call2 0xc4

0x2bc: Pop(1)
0x2bd: Push((int) 512869)
0x2be: @@ SetMessage(Stack[-1])
0x2bf: Pop(1)
0x2c0: @@ ClearReplies()
0x2c1: Pop(0)
0x2c2: Push((int) 515472)
0x2c3: Push((int) -1)
0x2c4: Push((int) 16589)
0x2c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c6: Pop(3)
0x2c7: Return(); Pop(0)

0x2c8: Push((int) 14063)
0x2c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2cb: PushEmpty(string)
0x2cc: Stack[-1] = "Neutral"
0x2cd: Call2 0xc4

0x2ce: Pop(1)
0x2cf: Push((int) 512862)
0x2d0: @@ SetMessage(Stack[-1])
0x2d1: Pop(1)
0x2d2: @@ ClearReplies()
0x2d3: Pop(0)
0x2d4: Push((int) 512865)
0x2d5: Push((int) 14067)
0x2d6: Push((int) 14066)
0x2d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d8: Pop(3)
0x2d9: Return(); Pop(0)

0x2da: Push((int) 14067)
0x2db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2dd: PushEmpty(string)
0x2de: Stack[-1] = "Neutral"
0x2df: Call2 0xc4

0x2e0: Pop(1)
0x2e1: Push((int) 512866)
0x2e2: @@ SetMessage(Stack[-1])
0x2e3: Pop(1)
0x2e4: @@ ClearReplies()
0x2e5: Pop(0)
0x2e6: Push((int) 538898)
0x2e7: Push((int) -1)
0x2e8: Push((int) 40845)
0x2e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ea: Pop(3)
0x2eb: Push((int) 539565)
0x2ec: Push((int) -1)
0x2ed: Push((int) 41504)
0x2ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ef: Pop(3)
0x2f0: Return(); Pop(0)

0x2f1: Push((int) 14056)
0x2f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f3: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x2f4: PushEmpty(string)
0x2f5: Stack[-1] = "Neutral"
0x2f6: Call2 0xc4

0x2f7: Pop(1)
0x2f8: Push((int) 512855)
0x2f9: @@ SetMessage(Stack[-1])
0x2fa: Pop(1)
0x2fb: @@ ClearReplies()
0x2fc: Pop(0)
0x2fd: Push((int) 539530)
0x2fe: Push((int) 41463)
0x2ff: Push((int) 41462)
0x300: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x301: Pop(3)
0x302: Push((int) 539546)
0x303: Push((int) 41463)
0x304: Push((int) 41478)
0x305: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x306: Pop(3)
0x307: Return(); Pop(0)

0x308: Push((int) 41463)
0x309: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x30b: PushEmpty(string)
0x30c: Stack[-1] = "Neutral"
0x30d: Call2 0xc4

0x30e: Pop(1)
0x30f: Push((int) 539531)
0x310: @@ SetMessage(Stack[-1])
0x311: Pop(1)
0x312: @@ ClearReplies()
0x313: Pop(0)
0x314: Push((int) 539532)
0x315: Push((int) 41465)
0x316: Push((int) 41464)
0x317: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x318: Pop(3)
0x319: Push((int) 539547)
0x31a: Push((int) 41465)
0x31b: Push((int) 41480)
0x31c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31d: Pop(3)
0x31e: Return(); Pop(0)

0x31f: Push((int) 41465)
0x320: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x322: PushEmpty(string)
0x323: Stack[-1] = "Neutral"
0x324: Call2 0xc4

0x325: Pop(1)
0x326: Push((int) 539533)
0x327: @@ SetMessage(Stack[-1])
0x328: Pop(1)
0x329: @@ ClearReplies()
0x32a: Pop(0)
0x32b: Push((int) 539534)
0x32c: Push((int) 41467)
0x32d: Push((int) 41466)
0x32e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32f: Pop(3)
0x330: Return(); Pop(0)

0x331: Push((int) 41483)
0x332: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x333: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x334: Push((int) 41467)
0x335: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x336: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x337: PushEmpty(string)
0x338: Stack[-1] = "Neutral"
0x339: Call2 0xc4

0x33a: Pop(1)
0x33b: Push((int) 539535)
0x33c: @@ SetMessage(Stack[-1])
0x33d: Pop(1)
0x33e: @@ ClearReplies()
0x33f: Pop(0)
0x340: Push((int) 539536)
0x341: Push((int) 41469)
0x342: Push((int) 41468)
0x343: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x344: Pop(3)
0x345: Return(); Pop(0)

0x346: Push((int) 41469)
0x347: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x348: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x349: PushEmpty(string)
0x34a: Stack[-1] = "Neutral"
0x34b: Call2 0xc4

0x34c: Pop(1)
0x34d: Push((int) 539537)
0x34e: @@ SetMessage(Stack[-1])
0x34f: Pop(1)
0x350: @@ ClearReplies()
0x351: Pop(0)
0x352: Push((int) 539538)
0x353: Push((int) 41471)
0x354: Push((int) 41470)
0x355: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x356: Pop(3)
0x357: Push((int) 539552)
0x358: Push((int) 41471)
0x359: Push((int) 41488)
0x35a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35b: Pop(3)
0x35c: Return(); Pop(0)

0x35d: Push((int) 41471)
0x35e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35f: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x360: PushEmpty(string)
0x361: Stack[-1] = "Neutral"
0x362: Call2 0xc4

0x363: Pop(1)
0x364: Push((int) 539539)
0x365: @@ SetMessage(Stack[-1])
0x366: Pop(1)
0x367: @@ ClearReplies()
0x368: Pop(0)
0x369: Push((int) 539540)
0x36a: Push((int) 41473)
0x36b: Push((int) 41472)
0x36c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36d: Pop(3)
0x36e: Return(); Pop(0)

0x36f: Push((int) 41473)
0x370: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x372: PushEmpty(string)
0x373: Stack[-1] = "Neutral"
0x374: Call2 0xc4

0x375: Pop(1)
0x376: Push((int) 539541)
0x377: @@ SetMessage(Stack[-1])
0x378: Pop(1)
0x379: @@ ClearReplies()
0x37a: Pop(0)
0x37b: Push((int) 539585)
0x37c: Push((int) 41531)
0x37d: Push((int) 41530)
0x37e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37f: Pop(3)
0x380: Return(); Pop(0)

0x381: Push((int) 41531)
0x382: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x384: PushEmpty(string)
0x385: Stack[-1] = "Neutral"
0x386: Call2 0xc4

0x387: Pop(1)
0x388: Push((int) 539586)
0x389: @@ SetMessage(Stack[-1])
0x38a: Pop(1)
0x38b: @@ ClearReplies()
0x38c: Pop(0)
0x38d: Push((int) 512856)
0x38e: Push((int) 14058)
0x38f: Push((int) 14057)
0x390: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x391: Pop(3)
0x392: Push((int) 539553)
0x393: Push((int) 41491)
0x394: Push((int) 41490)
0x395: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x396: Pop(3)
0x397: Return(); Pop(0)

0x398: Push((int) 41491)
0x399: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39a: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x39b: PushEmpty(string)
0x39c: Stack[-1] = "Neutral"
0x39d: Call2 0xc4

0x39e: Pop(1)
0x39f: Push((int) 539554)
0x3a0: @@ SetMessage(Stack[-1])
0x3a1: Pop(1)
0x3a2: @@ ClearReplies()
0x3a3: Pop(0)
0x3a4: Push((int) 539555)
0x3a5: Push((int) 41493)
0x3a6: Push((int) 41492)
0x3a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a8: Pop(3)
0x3a9: Push((int) 539557)
0x3aa: Push((int) 41493)
0x3ab: Push((int) 41494)
0x3ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ad: Pop(3)
0x3ae: Return(); Pop(0)

0x3af: Push((int) 41493)
0x3b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3b2: PushEmpty(string)
0x3b3: Stack[-1] = "Neutral"
0x3b4: Call2 0xc4

0x3b5: Pop(1)
0x3b6: Push((int) 539556)
0x3b7: @@ SetMessage(Stack[-1])
0x3b8: Pop(1)
0x3b9: @@ ClearReplies()
0x3ba: Pop(0)
0x3bb: Push((int) 539558)
0x3bc: Push((int) 14058)
0x3bd: Push((int) 41496)
0x3be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bf: Pop(3)
0x3c0: Return(); Pop(0)

0x3c1: Push((int) 14058)
0x3c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c3: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3c4: PushEmpty(string)
0x3c5: Stack[-1] = "Neutral"
0x3c6: Call2 0xc4

0x3c7: Pop(1)
0x3c8: Push((int) 512857)
0x3c9: @@ SetMessage(Stack[-1])
0x3ca: Pop(1)
0x3cb: @@ ClearReplies()
0x3cc: Pop(0)
0x3cd: Push((int) 512859)
0x3ce: Push((int) 14077)
0x3cf: Push((int) 14060)
0x3d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d1: Pop(3)
0x3d2: Return(); Pop(0)

0x3d3: Push((int) 14077)
0x3d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3d6: PushEmpty(string)
0x3d7: Stack[-1] = "Neutral"
0x3d8: Call2 0xc4

0x3d9: Pop(1)
0x3da: Push((int) 512875)
0x3db: @@ SetMessage(Stack[-1])
0x3dc: Pop(1)
0x3dd: @@ ClearReplies()
0x3de: Pop(0)
0x3df: Push((int) 512876)
0x3e0: Push((int) -1)
0x3e1: Push((int) 14078)
0x3e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e3: Pop(3)
0x3e4: Push((int) 538893)
0x3e5: Push((int) 40839)
0x3e6: Push((int) 40838)
0x3e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e8: Pop(3)
0x3e9: Return(); Pop(0)

0x3ea: Push((int) 40839)
0x3eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ec: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3ed: PushEmpty(string)
0x3ee: Stack[-1] = "Neutral"
0x3ef: Call2 0xc4

0x3f0: Pop(1)
0x3f1: Push((int) 538894)
0x3f2: @@ SetMessage(Stack[-1])
0x3f3: Pop(1)
0x3f4: @@ ClearReplies()
0x3f5: Pop(0)
0x3f6: Push((int) 538896)
0x3f7: Push((int) -1)
0x3f8: Push((int) 40843)
0x3f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fa: Pop(3)
0x3fb: Return(); Pop(0)

0x3fc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3fd: PushEmpty(bool)
0x3fe: Call2 0x6ee

0x3ff: Pop(0)
0x400: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x401: @ lshStopAnimation()
0x402: Pop(0)
0x403: GOTO 0x406

0x404: @ StopAnimation()
0x405: Pop(0)
0x406: Return(); Pop(0)

0x407: GOTO 0xdb

0x408: Return(); Pop(0)

0x409: PushEmpty()
0x40a: PushEmpty(int, object)
0x40b: Stack[-1] = Stack[-3]
0x40c: Push(-2, 1); TaskCall(0)
0x40d: Call2 0x0

0x40e: Pop(-2, 1); TaskReturn
0x40f: Pop(2)
0x410: Return(); Pop(0)

0x411: @ Hold()
0x412: Pop(0)
0x413: GOTO 0x411

0x414: Return(); Pop(0)

0x415: PushEmpty(bool, bool)
0x416: Push("cleanup")
0x417: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x418: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x419: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x41a: @ IsLoaded(Stack[-1])
0x41b: Pop(0)
0x41c: PushEmpty(bool)
0x41d: Stack[-1] = (bool) 0
0x41e: Pop(0); Push((bool) Stack[-2] == 0)
0x41f: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x420: PushEmpty(bool)
0x421: Call2 0x441

0x422: Pop(0)
0x423: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x424: Stack[-1] = (bool) 1
0x425: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x426: PushEmpty(object)
0x427: Call2 0x557

0x428: Pop(0)
0x429: @ RemoveActor(Stack[-1])
0x42a: Pop(1)
0x42b: GOTO 0x430

0x42c: Push("restore")
0x42d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x42e: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x430: Return(); Pop(2)

0x431: PushEmpty(bool)
0x432: Stack[-1] = (bool) 0
0x433: Push( Stack[0 + Tasks[-1].StackPointer] )
0x434: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x435: PushEmpty(bool)
0x436: Call2 0x441

0x437: Pop(0)
0x438: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x439: Stack[-1] = (bool) 1
0x43a: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43b: PushEmpty(object)
0x43c: Call2 0x557

0x43d: Pop(0)
0x43e: @ RemoveActor(Stack[-1])
0x43f: Pop(1)
0x440: Return(); Pop(0)

0x441: Stack[-1] = (bool) 1
0x442: Return(); Pop(0)

0x443: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x444: @@ GetPosition(Stack[-8])
0x445: Pop(0)
0x446: @@ GetEyesHeight(Stack[-9])
0x447: Pop(0)
0x448: Push(CvectorIndex(Stack[-8], 1))
0x449: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x44a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x44b: @ GetPosition(Stack[-7])
0x44c: Pop(0)
0x44d: @ GetEyesHeight(Stack[-9])
0x44e: Pop(0)
0x44f: Push(CvectorIndex(Stack[-7], 1))
0x450: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x451: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x452: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x453: Push(CvectorIndex(Stack[-6], 1))
0x454: Stack[-1] = (int) 0
0x455: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x456: Pop(0); Push(Stack[-6] | Stack[-6]);
0x457: Pop(1); Push(Sqrt(Stack[-1]))
0x458: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x459: Stack[-5] = -Stack[-6]; Pop(0);
0x45a: Pop(0); Push(Stack[-6] * Stack[-19]);
0x45b: PushEmpty(cvector, cvector)
0x45c: Push(CVector(0.0, 1.0, 0.0))
0x45d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x45e: Call2 0x55d

0x45f: Pop(1)
0x460: Push((int) 25)
0x461: Pop(2); Push(Stack[-2] * Stack[-1]);
0x462: Pop(2); Push(Stack[-2] + Stack[-1]);
0x463: Push(CVector(0.0, 10.0, 0.0))
0x464: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x465: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x466: @ IsOverrideActive(Stack[-2])
0x467: Pop(0)
0x468: Push(Stack[-2])
0x469: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x46a: Stack[-21] = (bool) 0
0x46b: Return(); Pop(18)

0x46c: @ StopWorld()
0x46d: Pop(0)
0x46e: @ CameraTransit(Stack[-3], Stack[-5])
0x46f: Pop(0)
0x470: Push(CvectorIndex(Stack[-4], 0))
0x471: Push(CvectorIndex(Stack[-5], 2))
0x472: @ Rotate(Stack[-2], Stack[-1])
0x473: Pop(2)
0x474: PushEmpty(bool)
0x475: Call2 0x6ee

0x476: Pop(0)
0x477: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x478: GOTO 0x481

0x479: Push("head")
0x47a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x47b: Pop(1)
0x47c: Push(Stack[-1])
0x47d: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47e: Push("head")
0x47f: @ LookAsyncCamera(Stack[-1])
0x480: Pop(1)
0x481: @ CameraWaitForPlayFinish()
0x482: Pop(0)
0x483: @ ResumeWorld()
0x484: Pop(0)
0x485: Stack[-21] = (bool) 1
0x486: Return(); Pop(18)

0x487: PushEmpty(bool, bool)
0x488: @ CameraSwitchToNormal()
0x489: Pop(0)
0x48a: PushEmpty(bool)
0x48b: Call2 0x6ee

0x48c: Pop(0)
0x48d: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48e: GOTO 0x497

0x48f: Push("head")
0x490: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x491: Pop(1)
0x492: Push(Stack[-1])
0x493: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x494: Push("head")
0x495: @ UnlookAsync(Stack[-1])
0x496: Pop(1)
0x497: Return(); Pop(2)

0x498: PushEmpty(int, int, int, int)
0x499: Push("voice_common")
0x49a: @ GetVariable(Stack[-1], Stack[-3])
0x49b: Pop(1)
0x49c: Push(Stack[-2])
0x49d: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x49e: PushEmpty(bool, object)
0x49f: Stack[-1] = Stack[-7]
0x4a0: Call2 0x4d2

0x4a1: Pop(1)
0x4a2: Pop(1); Push((bool) Stack[-1] == 0)
0x4a3: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4a4: PushEmpty(bool, object)
0x4a5: Stack[-1] = Stack[-7]
0x4a6: Call2 0x4f7

0x4a7: Pop(1)
0x4a8: Pop(1); Push((bool) Stack[-1] == 0)
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4aa: Stack[-6] = (bool) 0
0x4ab: Return(); Pop(4)

0x4ac: Push((int) 2)
0x4ad: @ irand(Stack[-2], Stack[-1])
0x4ae: Pop(1)
0x4af: Push(Stack[-1])
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b1: Push("voice_common")
0x4b2: Push((int) 1)
0x4b3: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4b4: Push((int) 3)
0x4b5: Pop(2); Push(Stack[-2] % Stack[-1]);
0x4b6: @ SetVariable(Stack[-2], Stack[-1])
0x4b7: Pop(2)
0x4b8: GOTO 0x4bd

0x4b9: Push("voice_common")
0x4ba: Push((int) 0)
0x4bb: @ SetVariable(Stack[-2], Stack[-1])
0x4bc: Pop(2)
0x4bd: GOTO 0x4d0

0x4be: PushEmpty(bool, object)
0x4bf: Stack[-1] = Stack[-7]
0x4c0: Call2 0x4f7

0x4c1: Pop(1)
0x4c2: Pop(1); Push((bool) Stack[-1] == 0)
0x4c3: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4c4: PushEmpty(bool, object)
0x4c5: Stack[-1] = Stack[-7]
0x4c6: Call2 0x4d2

0x4c7: Pop(1)
0x4c8: Pop(1); Push((bool) Stack[-1] == 0)
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4ca: Stack[-6] = (bool) 0
0x4cb: Return(); Pop(4)

0x4cc: Push("voice_common")
0x4cd: Push((int) 1)
0x4ce: @ SetVariable(Stack[-2], Stack[-1])
0x4cf: Pop(2)
0x4d0: Stack[-6] = (bool) 1
0x4d1: Return(); Pop(4)

0x4d2: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4d3: Stack[-5] = "c"
0x4d4: Stack[-4] = (int) 0
0x4d5: Push((int) 1)
0x4d6: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4d7: Push((int) 1)
0x4d8: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4d9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4da: @@ HasProperty(Stack[-1], Stack[-4])
0x4db: Pop(1)
0x4dc: Pop(0); Push((bool) Stack[-3] == 0)
0x4dd: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4de: GOTO 0x4e2

0x4df: Push((int) 1)
0x4e0: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4e1: GOTO 0x4d5

0x4e2: Pop(0); Push((bool) Stack[-4] == 0)
0x4e3: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4e4: Stack[-12] = (bool) 0
0x4e5: Return(); Pop(10)

0x4e6: Stack[-2] = (int) 0
0x4e7: Push((int) 1)
0x4e8: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4e9: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4ea: @ irand(Stack[-2], Stack[-4])
0x4eb: Pop(0)
0x4ec: Push((int) 1)
0x4ed: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4ee: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4ef: @@ GetProperty(Stack[-1], Stack[-2])
0x4f0: Pop(1)
0x4f1: PushEmpty(bool, string)
0x4f2: Stack[-1] = Stack[-3]
0x4f3: Call2 0x541

0x4f4: Stack[-14] = Stack[-2]
0x4f5: Pop(2)
0x4f6: Return(); Pop(10)

0x4f7: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4f8: Push("d")
0x4f9: PushEmpty(int)
0x4fa: Call2 0x5a4

0x4fb: Pop(0)
0x4fc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4fd: Push("m")
0x4fe: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4ff: Stack[-4] = (int) 0
0x500: Push((int) 1)
0x501: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x502: Push((int) 1)
0x503: Pop(1); Push(Stack[-5] + Stack[-1]);
0x504: Pop(1); Push(Stack[-6] + Stack[-1]);
0x505: @@ HasProperty(Stack[-1], Stack[-4])
0x506: Pop(1)
0x507: Pop(0); Push((bool) Stack[-3] == 0)
0x508: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x509: GOTO 0x50d

0x50a: Push((int) 1)
0x50b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x50c: GOTO 0x500

0x50d: Pop(0); Push((bool) Stack[-4] == 0)
0x50e: IF (Stack[-1] == 0) GOTO 0x511; Pop(1)

0x50f: Stack[-12] = (bool) 0
0x510: Return(); Pop(10)

0x511: Stack[-2] = (int) 0
0x512: Push((int) 1)
0x513: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x514: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x515: @ irand(Stack[-2], Stack[-4])
0x516: Pop(0)
0x517: Push((int) 1)
0x518: Pop(1); Push(Stack[-3] + Stack[-1]);
0x519: Pop(1); Push(Stack[-6] + Stack[-1]);
0x51a: @@ GetProperty(Stack[-1], Stack[-2])
0x51b: Pop(1)
0x51c: PushEmpty(bool, string)
0x51d: Stack[-1] = Stack[-3]
0x51e: Call2 0x541

0x51f: Stack[-14] = Stack[-2]
0x520: Pop(2)
0x521: Return(); Pop(10)

0x522: PushEmpty(bool, float, float, bool, float, float)
0x523: @ lshHasAnimation(Stack[-3], Stack[-7])
0x524: Pop(0)
0x525: Push(Stack[-3])
0x526: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x527: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x528: Pop(0)
0x529: Push((bool) 0)
0x52a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x52b: Pop(1)
0x52c: GOTO 0x531

0x52d: Push("Can't find lsh animation : ")
0x52e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x52f: @ Trace(Stack[-1])
0x530: Pop(1)
0x531: Return(); Pop(6)

0x532: PushEmpty(bool, float, float, bool, float, float)
0x533: @ lshHasAnimation(Stack[-3], Stack[-8])
0x534: Pop(0)
0x535: Push(Stack[-3])
0x536: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x537: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x538: Pop(0)
0x539: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x53a: Pop(0)
0x53b: GOTO 0x540

0x53c: Push("Can't find lsh animation : ")
0x53d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x53e: @ Trace(Stack[-1])
0x53f: Pop(1)
0x540: Return(); Pop(6)

0x541: PushEmpty(bool, bool)
0x542: PushEmpty(bool)
0x543: Call2 0x6ee

0x544: Pop(0)
0x545: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x546: @ lshHasSpeech(Stack[-1], Stack[-3])
0x547: Pop(0)
0x548: Push(Stack[-1])
0x549: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x54a: @ lshPlaySpeech(Stack[-3])
0x54b: Pop(0)
0x54c: Stack[-4] = (bool) 1
0x54d: Return(); Pop(2)

0x54e: Stack[-4] = (bool) 0
0x54f: Return(); Pop(2)

0x550: PushEmpty(bool)
0x551: Call2 0x6ee

0x552: Pop(0)
0x553: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x554: @ lshStopSpeech()
0x555: Pop(0)
0x556: Return(); Pop(0)

0x557: PushEmpty(object, object)
0x558: @ self(Stack[-1])
0x559: Pop(0)
0x55a: Stack[-3] = Stack[-1]
0x55b: Return(); Pop(2)

0x55c: Stack[-1] = 0
0x55d: PushEmpty(float, float)
0x55e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x55f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x560: Push((float)0.0)
0x561: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x562: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x563: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x564: Return(); Pop(2)

0x565: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x566: Return(); Pop(2)

0x567: PushEmpty(int, int)
0x568: @ GetVariable(Stack[-3], Stack[-1])
0x569: Pop(0)
0x56a: Stack[-4] = Stack[-1]
0x56b: Return(); Pop(2)

0x56c: PushEmpty(object, object)
0x56d: @ CreateIntVector(Stack[-1])
0x56e: Pop(0)
0x56f: @@ add(Stack[-4])
0x570: Pop(0)
0x571: @@ add(Stack[-3])
0x572: Pop(0)
0x573: Push((int) 3)
0x574: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x575: Pop(1)
0x576: Return(); Pop(2)

0x577: Stack[-1] = 0
0x578: PushEmpty(int, int, bool, int, int, bool)
0x579: @@ GetItemID(Stack[-3])
0x57a: Pop(0)
0x57b: Push("Category")
0x57c: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x57d: Pop(1)
0x57e: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x57f: Pop(0)
0x580: Pop(0); Push((bool) Stack[-1] == 0)
0x581: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x582: @@ DropItems(Stack[-8], Stack[-7])
0x583: Pop(0)
0x584: GOTO 0x58a

0x585: PushEmpty(int, int)
0x586: Stack[-2] = Stack[-5]
0x587: Stack[-1] = Stack[-9]
0x588: Call2 0x56c

0x589: Pop(2)
0x58a: Return(); Pop(6)

0x58b: PushEmpty(object, object)
0x58c: @ CreateInvItem(Stack[-1])
0x58d: Pop(0)
0x58e: @@ SetItemName(Stack[-4])
0x58f: Pop(0)
0x590: PushEmpty(object, object, int)
0x591: Stack[-3] = Stack[-8]
0x592: Stack[-2] = Stack[-4]
0x593: Stack[-1] = Stack[-6]
0x594: Call2 0x578

0x595: Pop(3)
0x596: Return(); Pop(2)

0x597: Stack[-1] = 0
0x598: PushEmpty(object, object)
0x599: @ FindActor(Stack[-1], Stack[-5])
0x59a: Pop(0)
0x59b: Pop(0); Push((bool) Stack[-1] == 0)
0x59c: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x59d: Stack[-6] = (bool) 0
0x59e: Return(); Pop(2)

0x59f: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x5a0: Pop(0)
0x5a1: Stack[-6] = (bool) 1
0x5a2: Return(); Pop(2)

0x5a3: Stack[-1] = 0
0x5a4: PushEmpty(float, float)
0x5a5: @ GetGameTime(Stack[-1])
0x5a6: Pop(0)
0x5a7: Push((int) 1)
0x5a8: PushEmpty(int)
0x5a9: Push((int) 24)
0x5aa: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x5ab: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5ac: Return(); Pop(2)

0x5ad: PushEmpty()
0x5ae: PushEmpty(object, string, float)
0x5af: PushEmpty(object)
0x5b0: Call2 0x6a3

0x5b1: Stack[-4] = Stack[-1]
0x5b2: Pop(1)
0x5b3: Stack[-2] = "pt_map_aglaja"
0x5b4: Stack[-1] = (int) 2
0x5b5: Call2 0x6b4

0x5b6: Pop(3)
0x5b7: PushEmpty(object)
0x5b8: Call2 0x6a3

0x5b9: Pop(0)
0x5ba: @@ ShowMap(Stack[-1])
0x5bb: Pop(1)
0x5bc: Return(); Pop(0)

0x5bd: PushEmpty()
0x5be: PushEmpty(bool, string, string, string)
0x5bf: Stack[-3] = "volonteers_danko"
0x5c0: Stack[-2] = "disease"
0x5c1: Stack[-1] = "petr"
0x5c2: Call2 0x598

0x5c3: Pop(4)
0x5c4: Return(); Pop(0)

0x5c5: PushEmpty()
0x5c6: PushEmpty(int, string)
0x5c7: Stack[-1] = "map_chertez_state"
0x5c8: Call2 0x567

0x5c9: Pop(1)
0x5ca: Push((int) 4)
0x5cb: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x5cc: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5cd: Push("map_chertez_state")
0x5ce: Push((int) 4)
0x5cf: @ SetVariable(Stack[-2], Stack[-1])
0x5d0: Pop(2)
0x5d1: Push("map_chertez_force")
0x5d2: Push((int) 1)
0x5d3: @ SetVariable(Stack[-2], Stack[-1])
0x5d4: Pop(2)
0x5d5: Return(); Pop(0)

0x5d6: PushEmpty(int, int)
0x5d7: Push("tvirin")
0x5d8: Push((int) 5)
0x5d9: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x5da: Pop(2)
0x5db: Return(); Pop(2)

0x5dc: PushEmpty()
0x5dd: Push("ood10Petr1")
0x5de: Push((int) 1)
0x5df: @ SetVariable(Stack[-2], Stack[-1])
0x5e0: Pop(2)
0x5e1: Return(); Pop(0)

0x5e2: PushEmpty()
0x5e3: Push("d10q01")
0x5e4: Push((int) 2)
0x5e5: @ SetVariable(Stack[-2], Stack[-1])
0x5e6: Pop(2)
0x5e7: PushEmpty()
0x5e8: Call2 0x660

0x5e9: Pop(0)
0x5ea: Return(); Pop(0)

0x5eb: PushEmpty()
0x5ec: Push("d10q01")
0x5ed: Push((int) 3)
0x5ee: @ SetVariable(Stack[-2], Stack[-1])
0x5ef: Pop(2)
0x5f0: PushEmpty()
0x5f1: Call2 0x66d

0x5f2: Pop(0)
0x5f3: Push("blueprint is given")
0x5f4: @ Trace(Stack[-1])
0x5f5: Pop(1)
0x5f6: PushEmpty(object, string, int)
0x5f7: Stack[-3] = Stack[-5]
0x5f8: Stack[-2] = "d10q01_blueprint"
0x5f9: Stack[-1] = (int) 1
0x5fa: Call2 0x58b

0x5fb: Pop(3)
0x5fc: Return(); Pop(0)

0x5fd: PushEmpty()
0x5fe: Push("ood10Petr3")
0x5ff: Push((int) 1)
0x600: @ SetVariable(Stack[-2], Stack[-1])
0x601: Pop(2)
0x602: Return(); Pop(0)

0x603: PushEmpty()
0x604: PushEmpty(int, string)
0x605: Stack[-1] = "ood10Petr1"
0x606: Call2 0x567

0x607: Pop(1)
0x608: Push((int) 0)
0x609: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x60a: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x60b: Stack[-2] = (bool) 1
0x60c: Return(); Pop(0)

0x60d: Stack[-2] = (bool) 0
0x60e: Return(); Pop(0)

0x60f: PushEmpty()
0x610: PushEmpty(int, string)
0x611: Stack[-1] = "d10q01MariaSavePetr"
0x612: Call2 0x567

0x613: Pop(1)
0x614: Push((int) 1)
0x615: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x616: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x617: Stack[-2] = (bool) 1
0x618: Return(); Pop(0)

0x619: Stack[-2] = (bool) 0
0x61a: Return(); Pop(0)

0x61b: PushEmpty()
0x61c: PushEmpty(int, string)
0x61d: Stack[-1] = "d10q01"
0x61e: Call2 0x567

0x61f: Pop(1)
0x620: Push((int) 1)
0x621: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x622: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x623: Stack[-2] = (bool) 1
0x624: Return(); Pop(0)

0x625: Stack[-2] = (bool) 0
0x626: Return(); Pop(0)

0x627: PushEmpty()
0x628: PushEmpty(int, string)
0x629: Stack[-1] = "d10q01"
0x62a: Call2 0x567

0x62b: Pop(1)
0x62c: Push((int) 2)
0x62d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x62e: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62f: Stack[-2] = (bool) 1
0x630: Return(); Pop(0)

0x631: Stack[-2] = (bool) 0
0x632: Return(); Pop(0)

0x633: PushEmpty()
0x634: PushEmpty(bool, object)
0x635: Stack[-1] = Stack[-3]
0x636: Call2 0x655

0x637: Pop(1)
0x638: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x639: Stack[-2] = (bool) 1
0x63a: Return(); Pop(0)

0x63b: Stack[-2] = (bool) 0
0x63c: Return(); Pop(0)

0x63d: PushEmpty()
0x63e: PushEmpty(int, string)
0x63f: Stack[-1] = "d10q01"
0x640: Call2 0x567

0x641: Pop(1)
0x642: Push((int) 3)
0x643: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x644: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x645: Stack[-2] = (bool) 1
0x646: Return(); Pop(0)

0x647: Stack[-2] = (bool) 0
0x648: Return(); Pop(0)

0x649: PushEmpty()
0x64a: PushEmpty(int, string)
0x64b: Stack[-1] = "ood10Petr3"
0x64c: Call2 0x567

0x64d: Pop(1)
0x64e: Push((int) 0)
0x64f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x650: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x651: Stack[-2] = (bool) 1
0x652: Return(); Pop(0)

0x653: Stack[-2] = (bool) 0
0x654: Return(); Pop(0)

0x655: PushEmpty(int, int)
0x656: Push("tvirin")
0x657: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x658: Pop(1)
0x659: Push((int) 5)
0x65a: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x65b: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x65c: Stack[-4] = (bool) 1
0x65d: Return(); Pop(2)

0x65e: Stack[-4] = (bool) 0
0x65f: Return(); Pop(2)

0x660: PushEmpty(object, object)
0x661: Push((int) 189)
0x662: Push((int) 1)
0x663: Push((int) 515474)
0x664: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x665: Pop(3)
0x666: PushEmpty(bool, object, int)
0x667: Stack[-2] = Stack[-4]
0x668: Stack[-1] = (int) 186
0x669: Call2 0x687

0x66a: Pop(3)
0x66b: Return(); Pop(2)

0x66c: Stack[-1] = 0
0x66d: PushEmpty(object, object)
0x66e: Push((int) 190)
0x66f: Push((int) 1)
0x670: Push((int) 515475)
0x671: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x672: Pop(3)
0x673: PushEmpty(bool, object, int)
0x674: Stack[-2] = Stack[-4]
0x675: Stack[-1] = (int) 186
0x676: Call2 0x687

0x677: Pop(3)
0x678: Return(); Pop(2)

0x679: Stack[-1] = 0
0x67a: PushEmpty(object, object)
0x67b: @ GetDiaryRoot(Stack[-1])
0x67c: Pop(0)
0x67d: Pop(0); Push((bool) Stack[-1] == 0)
0x67e: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x67f: Push("Can't retrieve diary root")
0x680: @ Trace(Stack[-1])
0x681: Pop(1)
0x682: Stack[-3] = (bool) 0
0x683: Return(); Pop(2)

0x684: Stack[-3] = Stack[-1]
0x685: Return(); Pop(2)

0x686: Stack[-1] = 0
0x687: PushEmpty(object, object, int, object, object, int)
0x688: PushEmpty(object)
0x689: Call2 0x67a

0x68a: Stack[-4] = Stack[-1]
0x68b: Pop(1)
0x68c: @@ Find(Stack[-7], Stack[-2])
0x68d: Pop(0)
0x68e: Pop(0); Push((bool) Stack[-2] == 0)
0x68f: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x690: Push("Can't find diary parent with id: ")
0x691: Pop(1); Push(Stack[-1] + Stack[-8]);
0x692: @ Trace(Stack[-1])
0x693: Pop(1)
0x694: Stack[-9] = (bool) 0
0x695: Return(); Pop(6)

0x696: @@ AddChild(Stack[-8])
0x697: Pop(0)
0x698: Push((int) 7)
0x699: @ SendWorldWndMessage(Stack[-1])
0x69a: Pop(1)
0x69b: @@ GetCategory(Stack[-1])
0x69c: Pop(0)
0x69d: @ SetDiarySection(Stack[-1])
0x69e: Pop(0)
0x69f: Stack[-9] = (bool) 0
0x6a0: Return(); Pop(6)

0x6a1: Stack[-2] = 0
0x6a2: Stack[-3] = 0
0x6a3: PushEmpty(object, object, object, object)
0x6a4: @ GetMainOutdoorScene(Stack[-2])
0x6a5: Pop(0)
0x6a6: Pop(0); Push((bool) Stack[-2] == 0)
0x6a7: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x6a8: Push("Can't find main outdoor scene")
0x6a9: @ Trace(Stack[-1])
0x6aa: Pop(1)
0x6ab: Stack[-1] = 0
0x6ac: Stack[-5] = Stack[-1]
0x6ad: Return(); Pop(4)

0x6ae: @@ GetMap(Stack[-1])
0x6af: Pop(0)
0x6b0: Stack[-5] = Stack[-1]
0x6b1: Return(); Pop(4)

0x6b2: Stack[-1] = 0
0x6b3: Stack[-2] = 0
0x6b4: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x6b5: @ GetMainOutdoorScene(Stack[-2])
0x6b6: Pop(0)
0x6b7: Pop(0); Push((bool) Stack[-2] == 0)
0x6b8: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6b9: Push("Can't find main outdoor scene")
0x6ba: @ Trace(Stack[-1])
0x6bb: Pop(1)
0x6bc: Return(); Pop(8)

0x6bd: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x6be: Pop(0)
0x6bf: Pop(0); Push((bool) Stack[-1] == 0)
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c7; Pop(1)

0x6c1: Push("Warning: outdoor scene locator ")
0x6c2: Pop(1); Push(Stack[-1] + Stack[-11]);
0x6c3: Push(" doesnt exist")
0x6c4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6c5: @ Trace(Stack[-1])
0x6c6: Pop(1)
0x6c7: @@ GetMap(Stack[-11])
0x6c8: Pop(0)
0x6c9: Pop(0); Push((bool) Stack[-11] == 0)
0x6ca: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6cb: Push("Can't find map")
0x6cc: @ Trace(Stack[-1])
0x6cd: Pop(1)
0x6ce: Return(); Pop(8)

0x6cf: Push(CvectorIndex(Stack[-4], 0))
0x6d0: Push(CvectorIndex(Stack[-5], 2))
0x6d1: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x6d2: Pop(2)
0x6d3: Return(); Pop(8)

0x6d4: Stack[-2] = 0
0x6d5: PushEmpty(int, int)
0x6d6: Push("branch")
0x6d7: @ GetVariable(Stack[-1], Stack[-2])
0x6d8: Pop(1)
0x6d9: Push((int) 0)
0x6da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6db: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6dc: Stack[-3] = (int) 1
0x6dd: Return(); Pop(2)

0x6de: GOTO 0x6e4

0x6df: Push((int) 1)
0x6e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6e1: IF (Stack[-1] == 0) GOTO 0x6e4; Pop(1)

0x6e2: Stack[-3] = (int) 2
0x6e3: Return(); Pop(2)

0x6e4: Stack[-3] = (int) 3
0x6e5: Return(); Pop(2)

0x6e6: Stack[-1] = (int) 539028
0x6e7: Return(); Pop(0)

0x6e8: Stack[-1] = (int) 539027
0x6e9: Return(); Pop(0)

0x6ea: Stack[-1] = "ui/NPC_Petr.png"
0x6eb: Return(); Pop(0)

0x6ec: Stack[-1] = "ui/NPC_Petr_b.png"
0x6ed: Return(); Pop(0)

0x6ee: Stack[-1] = (bool) 0
0x6ef: Return(); Pop(0)

