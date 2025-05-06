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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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

RunOp = 0x42a
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xda Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x422 Vars = (object)
		EVENT_26 Op = 0x42e Vars = (string)
		EVENT_6 Op = 0x44a Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x45c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x703

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x701

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x705

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x707

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x6f0

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
0x31: Call2 0x572

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x4b3

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
0x48: Call2 0x4a1

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
0x64: Call2 0x61e

0x65: Pop(1)
0x66: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x67: PushEmpty(bool, object)
0x68: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69: Call2 0x636

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
0x77: Call2 0x642

0x78: Pop(1)
0x79: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0x64e

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
0x8a: Call2 0x658

0x8b: Pop(1)
0x8c: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8d: PushEmpty(bool, object)
0x8e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f: Call2 0x664

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
0xa7: Call2 0x709

0xa8: Pop(0)
0xa9: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xaa: @ lshWaitForAnimEnd()
0xab: Pop(0)
0xac: Push( Stack[3 + Tasks[-1].StackPointer] )
0xad: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xae: GOTO 0xb4

0xaf: PushEmpty(string)
0xb0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb1: Call2 0x53d

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
0xc6: Call2 0x709

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
0xd6: Call2 0x54d

0xd7: Pop(2)
0xd8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd9: Return(); Pop(0)

0xda: PushEmpty()
0xdb: Push((int) 1)
0xdc: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0xdd: PushEmpty()
0xde: Call2 0x56b

0xdf: Pop(0)
0xe0: Push((int) 14055)
0xe1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe3: PushEmpty(object, object)
0xe4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe6: Call2 0x5f7

0xe7: Pop(2)
0xe8: Push((int) 14078)
0xe9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xeb: PushEmpty(object, object)
0xec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xee: Call2 0x5fd

0xef: Pop(2)
0xf0: Push((int) 40843)
0xf1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf3: PushEmpty(object, object)
0xf4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf6: Call2 0x5fd

0xf7: Pop(2)
0xf8: Push((int) 40845)
0xf9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xfb: PushEmpty(object, object)
0xfc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfe: Call2 0x606

0xff: Pop(2)
0x100: PushEmpty(object, object)
0x101: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x102: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x103: Call2 0x5e0

0x104: Pop(2)
0x105: PushEmpty(object, object)
0x106: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x107: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x108: Call2 0x5f1

0x109: Pop(2)
0x10a: PushEmpty(object, object)
0x10b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10d: Call2 0x5c8

0x10e: Pop(2)
0x10f: Push((int) 41504)
0x110: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x112: PushEmpty(object, object)
0x113: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x114: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x115: Call2 0x606

0x116: Pop(2)
0x117: PushEmpty(object, object)
0x118: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x119: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11a: Call2 0x5d8

0x11b: Pop(2)
0x11c: PushEmpty(object, object)
0x11d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11f: Call2 0x5e0

0x120: Pop(2)
0x121: PushEmpty(object, object)
0x122: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x123: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x124: Call2 0x5f1

0x125: Pop(2)
0x126: PushEmpty(object, object)
0x127: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x128: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x129: Call2 0x5c8

0x12a: Pop(2)
0x12b: Push((int) 16589)
0x12c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x12e: PushEmpty(object, object)
0x12f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x130: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x131: Call2 0x606

0x132: Pop(2)
0x133: PushEmpty(object, object)
0x134: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x135: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x136: Call2 0x5e0

0x137: Pop(2)
0x138: PushEmpty(object, object)
0x139: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13b: Call2 0x5f1

0x13c: Pop(2)
0x13d: PushEmpty(object, object)
0x13e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x140: Call2 0x5c8

0x141: Pop(2)
0x142: Push((int) 40844)
0x143: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x144: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x145: PushEmpty(object, object)
0x146: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x147: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x148: Call2 0x606

0x149: Pop(2)
0x14a: PushEmpty(object, object)
0x14b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14d: Call2 0x5e0

0x14e: Pop(2)
0x14f: PushEmpty(object, object)
0x150: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x151: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x152: Call2 0x5f1

0x153: Pop(2)
0x154: PushEmpty(object, object)
0x155: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x156: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x157: Call2 0x5c8

0x158: Pop(2)
0x159: Push((int) 14081)
0x15a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15c: PushEmpty(object, object)
0x15d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15f: Call2 0x618

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
0x171: Call2 0x61e

0x172: Pop(1)
0x173: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x174: PushEmpty(bool, object)
0x175: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x176: Call2 0x636

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
0x184: Call2 0x642

0x185: Pop(1)
0x186: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x187: PushEmpty(bool, object)
0x188: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x189: Call2 0x64e

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
0x197: Call2 0x658

0x198: Pop(1)
0x199: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19a: PushEmpty(bool, object)
0x19b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19c: Call2 0x664

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
0x29b: Call2 0x62a

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
0x321: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

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
0x330: Push((int) 539548)
0x331: Push((int) 41483)
0x332: Push((int) 41482)
0x333: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x334: Pop(3)
0x335: Return(); Pop(0)

0x336: Push((int) 41483)
0x337: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x339: PushEmpty(string)
0x33a: Stack[-1] = "Neutral"
0x33b: Call2 0xc4

0x33c: Pop(1)
0x33d: Push((int) 539549)
0x33e: @@ SetMessage(Stack[-1])
0x33f: Pop(1)
0x340: @@ ClearReplies()
0x341: Pop(0)
0x342: Push((int) 539550)
0x343: Push((int) 41467)
0x344: Push((int) 41484)
0x345: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x346: Pop(3)
0x347: Push((int) 539551)
0x348: Push((int) 41467)
0x349: Push((int) 41485)
0x34a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34b: Pop(3)
0x34c: Return(); Pop(0)

0x34d: Push((int) 41467)
0x34e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34f: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x350: PushEmpty(string)
0x351: Stack[-1] = "Neutral"
0x352: Call2 0xc4

0x353: Pop(1)
0x354: Push((int) 539535)
0x355: @@ SetMessage(Stack[-1])
0x356: Pop(1)
0x357: @@ ClearReplies()
0x358: Pop(0)
0x359: Push((int) 539536)
0x35a: Push((int) 41469)
0x35b: Push((int) 41468)
0x35c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35d: Pop(3)
0x35e: Return(); Pop(0)

0x35f: Push((int) 41469)
0x360: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x361: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x362: PushEmpty(string)
0x363: Stack[-1] = "Neutral"
0x364: Call2 0xc4

0x365: Pop(1)
0x366: Push((int) 539537)
0x367: @@ SetMessage(Stack[-1])
0x368: Pop(1)
0x369: @@ ClearReplies()
0x36a: Pop(0)
0x36b: Push((int) 539538)
0x36c: Push((int) 41471)
0x36d: Push((int) 41470)
0x36e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36f: Pop(3)
0x370: Push((int) 539552)
0x371: Push((int) 41471)
0x372: Push((int) 41488)
0x373: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x374: Pop(3)
0x375: Return(); Pop(0)

0x376: Push((int) 41471)
0x377: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x378: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x379: PushEmpty(string)
0x37a: Stack[-1] = "Neutral"
0x37b: Call2 0xc4

0x37c: Pop(1)
0x37d: Push((int) 539539)
0x37e: @@ SetMessage(Stack[-1])
0x37f: Pop(1)
0x380: @@ ClearReplies()
0x381: Pop(0)
0x382: Push((int) 539540)
0x383: Push((int) 41473)
0x384: Push((int) 41472)
0x385: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x386: Pop(3)
0x387: Return(); Pop(0)

0x388: Push((int) 41473)
0x389: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x38b: PushEmpty(string)
0x38c: Stack[-1] = "Neutral"
0x38d: Call2 0xc4

0x38e: Pop(1)
0x38f: Push((int) 539541)
0x390: @@ SetMessage(Stack[-1])
0x391: Pop(1)
0x392: @@ ClearReplies()
0x393: Pop(0)
0x394: Push((int) 539585)
0x395: Push((int) 41531)
0x396: Push((int) 41530)
0x397: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x398: Pop(3)
0x399: Return(); Pop(0)

0x39a: Push((int) 41531)
0x39b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39c: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x39d: PushEmpty(string)
0x39e: Stack[-1] = "Neutral"
0x39f: Call2 0xc4

0x3a0: Pop(1)
0x3a1: Push((int) 539586)
0x3a2: @@ SetMessage(Stack[-1])
0x3a3: Pop(1)
0x3a4: @@ ClearReplies()
0x3a5: Pop(0)
0x3a6: Push((int) 512856)
0x3a7: Push((int) 14058)
0x3a8: Push((int) 14057)
0x3a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3aa: Pop(3)
0x3ab: Push((int) 539553)
0x3ac: Push((int) 41491)
0x3ad: Push((int) 41490)
0x3ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3af: Pop(3)
0x3b0: Return(); Pop(0)

0x3b1: Push((int) 41491)
0x3b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3b4: PushEmpty(string)
0x3b5: Stack[-1] = "Neutral"
0x3b6: Call2 0xc4

0x3b7: Pop(1)
0x3b8: Push((int) 539554)
0x3b9: @@ SetMessage(Stack[-1])
0x3ba: Pop(1)
0x3bb: @@ ClearReplies()
0x3bc: Pop(0)
0x3bd: Push((int) 539555)
0x3be: Push((int) 41493)
0x3bf: Push((int) 41492)
0x3c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c1: Pop(3)
0x3c2: Push((int) 539557)
0x3c3: Push((int) 41493)
0x3c4: Push((int) 41494)
0x3c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c6: Pop(3)
0x3c7: Return(); Pop(0)

0x3c8: Push((int) 41493)
0x3c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ca: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3cb: PushEmpty(string)
0x3cc: Stack[-1] = "Neutral"
0x3cd: Call2 0xc4

0x3ce: Pop(1)
0x3cf: Push((int) 539556)
0x3d0: @@ SetMessage(Stack[-1])
0x3d1: Pop(1)
0x3d2: @@ ClearReplies()
0x3d3: Pop(0)
0x3d4: Push((int) 539558)
0x3d5: Push((int) 14058)
0x3d6: Push((int) 41496)
0x3d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d8: Pop(3)
0x3d9: Return(); Pop(0)

0x3da: Push((int) 14058)
0x3db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3dd: PushEmpty(string)
0x3de: Stack[-1] = "Neutral"
0x3df: Call2 0xc4

0x3e0: Pop(1)
0x3e1: Push((int) 512857)
0x3e2: @@ SetMessage(Stack[-1])
0x3e3: Pop(1)
0x3e4: @@ ClearReplies()
0x3e5: Pop(0)
0x3e6: Push((int) 512859)
0x3e7: Push((int) 14077)
0x3e8: Push((int) 14060)
0x3e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ea: Pop(3)
0x3eb: Return(); Pop(0)

0x3ec: Push((int) 14077)
0x3ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ee: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x3ef: PushEmpty(string)
0x3f0: Stack[-1] = "Neutral"
0x3f1: Call2 0xc4

0x3f2: Pop(1)
0x3f3: Push((int) 512875)
0x3f4: @@ SetMessage(Stack[-1])
0x3f5: Pop(1)
0x3f6: @@ ClearReplies()
0x3f7: Pop(0)
0x3f8: Push((int) 512876)
0x3f9: Push((int) -1)
0x3fa: Push((int) 14078)
0x3fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fc: Pop(3)
0x3fd: Push((int) 538893)
0x3fe: Push((int) 40839)
0x3ff: Push((int) 40838)
0x400: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x401: Pop(3)
0x402: Return(); Pop(0)

0x403: Push((int) 40839)
0x404: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x405: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x406: PushEmpty(string)
0x407: Stack[-1] = "Neutral"
0x408: Call2 0xc4

0x409: Pop(1)
0x40a: Push((int) 538894)
0x40b: @@ SetMessage(Stack[-1])
0x40c: Pop(1)
0x40d: @@ ClearReplies()
0x40e: Pop(0)
0x40f: Push((int) 538896)
0x410: Push((int) -1)
0x411: Push((int) 40843)
0x412: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x413: Pop(3)
0x414: Return(); Pop(0)

0x415: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x416: PushEmpty(bool)
0x417: Call2 0x709

0x418: Pop(0)
0x419: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41a: @ lshStopAnimation()
0x41b: Pop(0)
0x41c: GOTO 0x41f

0x41d: @ StopAnimation()
0x41e: Pop(0)
0x41f: Return(); Pop(0)

0x420: GOTO 0xdb

0x421: Return(); Pop(0)

0x422: PushEmpty()
0x423: PushEmpty(int, object)
0x424: Stack[-1] = Stack[-3]
0x425: Push(-2, 1); TaskCall(0)
0x426: Call2 0x0

0x427: Pop(-2, 1); TaskReturn
0x428: Pop(2)
0x429: Return(); Pop(0)

0x42a: @ Hold()
0x42b: Pop(0)
0x42c: GOTO 0x42a

0x42d: Return(); Pop(0)

0x42e: PushEmpty(bool, bool)
0x42f: Push("cleanup")
0x430: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x431: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x432: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x433: @ IsLoaded(Stack[-1])
0x434: Pop(0)
0x435: PushEmpty(bool)
0x436: Stack[-1] = (bool) 0
0x437: Pop(0); Push((bool) Stack[-2] == 0)
0x438: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x439: PushEmpty(bool)
0x43a: Call2 0x45a

0x43b: Pop(0)
0x43c: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43d: Stack[-1] = (bool) 1
0x43e: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x43f: PushEmpty(object)
0x440: Call2 0x572

0x441: Pop(0)
0x442: @ RemoveActor(Stack[-1])
0x443: Pop(1)
0x444: GOTO 0x449

0x445: Push("restore")
0x446: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x447: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x448: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x449: Return(); Pop(2)

0x44a: PushEmpty(bool)
0x44b: Stack[-1] = (bool) 0
0x44c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x44d: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x44e: PushEmpty(bool)
0x44f: Call2 0x45a

0x450: Pop(0)
0x451: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x452: Stack[-1] = (bool) 1
0x453: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x454: PushEmpty(object)
0x455: Call2 0x572

0x456: Pop(0)
0x457: @ RemoveActor(Stack[-1])
0x458: Pop(1)
0x459: Return(); Pop(0)

0x45a: Stack[-1] = (bool) 1
0x45b: Return(); Pop(0)

0x45c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x45d: @@ GetPosition(Stack[-8])
0x45e: Pop(0)
0x45f: @@ GetEyesHeight(Stack[-9])
0x460: Pop(0)
0x461: Push(CvectorIndex(Stack[-8], 1))
0x462: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x463: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x464: @ GetPosition(Stack[-7])
0x465: Pop(0)
0x466: @ GetEyesHeight(Stack[-9])
0x467: Pop(0)
0x468: Push(CvectorIndex(Stack[-7], 1))
0x469: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x46a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x46b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x46c: Push(CvectorIndex(Stack[-6], 1))
0x46d: Stack[-1] = (int) 0
0x46e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x46f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x470: Pop(1); Push(Sqrt(Stack[-1]))
0x471: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x472: Stack[-5] = -Stack[-6]; Pop(0);
0x473: Pop(0); Push(Stack[-6] * Stack[-19]);
0x474: PushEmpty(cvector, cvector)
0x475: Push(CVector(0.0, 1.0, 0.0))
0x476: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x477: Call2 0x578

0x478: Pop(1)
0x479: Push((int) 25)
0x47a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x47b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x47c: Push(CVector(0.0, 10.0, 0.0))
0x47d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x47e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x47f: @ IsOverrideActive(Stack[-2])
0x480: Pop(0)
0x481: Push(Stack[-2])
0x482: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x483: Stack[-21] = (bool) 0
0x484: Return(); Pop(18)

0x485: @ StopWorld()
0x486: Pop(0)
0x487: Push((bool) 1)
0x488: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x489: Pop(1)
0x48a: Push(CvectorIndex(Stack[-4], 0))
0x48b: Push(CvectorIndex(Stack[-5], 2))
0x48c: @ Rotate(Stack[-2], Stack[-1])
0x48d: Pop(2)
0x48e: PushEmpty(bool)
0x48f: Call2 0x709

0x490: Pop(0)
0x491: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x492: GOTO 0x49b

0x493: Push("head")
0x494: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x495: Pop(1)
0x496: Push(Stack[-1])
0x497: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x498: Push("head")
0x499: @ LookAsyncCamera(Stack[-1])
0x49a: Pop(1)
0x49b: @ CameraWaitForPlayFinish()
0x49c: Pop(0)
0x49d: @ ResumeWorld()
0x49e: Pop(0)
0x49f: Stack[-21] = (bool) 1
0x4a0: Return(); Pop(18)

0x4a1: PushEmpty(bool, bool)
0x4a2: Push((bool) 1)
0x4a3: @ CameraSwitchToNormal(Stack[-1])
0x4a4: Pop(1)
0x4a5: PushEmpty(bool)
0x4a6: Call2 0x709

0x4a7: Pop(0)
0x4a8: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a9: GOTO 0x4b2

0x4aa: Push("head")
0x4ab: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4ac: Pop(1)
0x4ad: Push(Stack[-1])
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4af: Push("head")
0x4b0: @ UnlookAsync(Stack[-1])
0x4b1: Pop(1)
0x4b2: Return(); Pop(2)

0x4b3: PushEmpty(int, int, int, int)
0x4b4: Push("voice_common")
0x4b5: @ GetVariable(Stack[-1], Stack[-3])
0x4b6: Pop(1)
0x4b7: Push(Stack[-2])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4b9: PushEmpty(bool, object)
0x4ba: Stack[-1] = Stack[-7]
0x4bb: Call2 0x4ed

0x4bc: Pop(1)
0x4bd: Pop(1); Push((bool) Stack[-1] == 0)
0x4be: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4bf: PushEmpty(bool, object)
0x4c0: Stack[-1] = Stack[-7]
0x4c1: Call2 0x512

0x4c2: Pop(1)
0x4c3: Pop(1); Push((bool) Stack[-1] == 0)
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c5: Stack[-6] = (bool) 0
0x4c6: Return(); Pop(4)

0x4c7: Push((int) 2)
0x4c8: @ irand(Stack[-2], Stack[-1])
0x4c9: Pop(1)
0x4ca: Push(Stack[-1])
0x4cb: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4cc: Push("voice_common")
0x4cd: Push((int) 1)
0x4ce: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4cf: Push((int) 3)
0x4d0: Pop(2); Push(Stack[-2] % Stack[-1]);
0x4d1: @ SetVariable(Stack[-2], Stack[-1])
0x4d2: Pop(2)
0x4d3: GOTO 0x4d8

0x4d4: Push("voice_common")
0x4d5: Push((int) 0)
0x4d6: @ SetVariable(Stack[-2], Stack[-1])
0x4d7: Pop(2)
0x4d8: GOTO 0x4eb

0x4d9: PushEmpty(bool, object)
0x4da: Stack[-1] = Stack[-7]
0x4db: Call2 0x512

0x4dc: Pop(1)
0x4dd: Pop(1); Push((bool) Stack[-1] == 0)
0x4de: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4df: PushEmpty(bool, object)
0x4e0: Stack[-1] = Stack[-7]
0x4e1: Call2 0x4ed

0x4e2: Pop(1)
0x4e3: Pop(1); Push((bool) Stack[-1] == 0)
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e5: Stack[-6] = (bool) 0
0x4e6: Return(); Pop(4)

0x4e7: Push("voice_common")
0x4e8: Push((int) 1)
0x4e9: @ SetVariable(Stack[-2], Stack[-1])
0x4ea: Pop(2)
0x4eb: Stack[-6] = (bool) 1
0x4ec: Return(); Pop(4)

0x4ed: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4ee: Stack[-5] = "c"
0x4ef: Stack[-4] = (int) 0
0x4f0: Push((int) 1)
0x4f1: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4f2: Push((int) 1)
0x4f3: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4f4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4f5: @@ HasProperty(Stack[-1], Stack[-4])
0x4f6: Pop(1)
0x4f7: Pop(0); Push((bool) Stack[-3] == 0)
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f9: GOTO 0x4fd

0x4fa: Push((int) 1)
0x4fb: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4fc: GOTO 0x4f0

0x4fd: Pop(0); Push((bool) Stack[-4] == 0)
0x4fe: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4ff: Stack[-12] = (bool) 0
0x500: Return(); Pop(10)

0x501: Stack[-2] = (int) 0
0x502: Push((int) 1)
0x503: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x504: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x505: @ irand(Stack[-2], Stack[-4])
0x506: Pop(0)
0x507: Push((int) 1)
0x508: Pop(1); Push(Stack[-3] + Stack[-1]);
0x509: Pop(1); Push(Stack[-6] + Stack[-1]);
0x50a: @@ GetProperty(Stack[-1], Stack[-2])
0x50b: Pop(1)
0x50c: PushEmpty(bool, string)
0x50d: Stack[-1] = Stack[-3]
0x50e: Call2 0x55c

0x50f: Stack[-14] = Stack[-2]
0x510: Pop(2)
0x511: Return(); Pop(10)

0x512: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x513: Push("d")
0x514: PushEmpty(int)
0x515: Call2 0x5bf

0x516: Pop(0)
0x517: Pop(2); Push(Stack[-2] + Stack[-1]);
0x518: Push("m")
0x519: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x51a: Stack[-4] = (int) 0
0x51b: Push((int) 1)
0x51c: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x51d: Push((int) 1)
0x51e: Pop(1); Push(Stack[-5] + Stack[-1]);
0x51f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x520: @@ HasProperty(Stack[-1], Stack[-4])
0x521: Pop(1)
0x522: Pop(0); Push((bool) Stack[-3] == 0)
0x523: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x524: GOTO 0x528

0x525: Push((int) 1)
0x526: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x527: GOTO 0x51b

0x528: Pop(0); Push((bool) Stack[-4] == 0)
0x529: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x52a: Stack[-12] = (bool) 0
0x52b: Return(); Pop(10)

0x52c: Stack[-2] = (int) 0
0x52d: Push((int) 1)
0x52e: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x52f: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x530: @ irand(Stack[-2], Stack[-4])
0x531: Pop(0)
0x532: Push((int) 1)
0x533: Pop(1); Push(Stack[-3] + Stack[-1]);
0x534: Pop(1); Push(Stack[-6] + Stack[-1]);
0x535: @@ GetProperty(Stack[-1], Stack[-2])
0x536: Pop(1)
0x537: PushEmpty(bool, string)
0x538: Stack[-1] = Stack[-3]
0x539: Call2 0x55c

0x53a: Stack[-14] = Stack[-2]
0x53b: Pop(2)
0x53c: Return(); Pop(10)

0x53d: PushEmpty(bool, float, float, bool, float, float)
0x53e: @ lshHasAnimation(Stack[-3], Stack[-7])
0x53f: Pop(0)
0x540: Push(Stack[-3])
0x541: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x542: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x543: Pop(0)
0x544: Push((bool) 0)
0x545: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x546: Pop(1)
0x547: GOTO 0x54c

0x548: Push("Can't find lsh animation : ")
0x549: Pop(1); Push(Stack[-1] + Stack[-8]);
0x54a: @ Trace(Stack[-1])
0x54b: Pop(1)
0x54c: Return(); Pop(6)

0x54d: PushEmpty(bool, float, float, bool, float, float)
0x54e: @ lshHasAnimation(Stack[-3], Stack[-8])
0x54f: Pop(0)
0x550: Push(Stack[-3])
0x551: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x552: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x553: Pop(0)
0x554: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x555: Pop(0)
0x556: GOTO 0x55b

0x557: Push("Can't find lsh animation : ")
0x558: Pop(1); Push(Stack[-1] + Stack[-9]);
0x559: @ Trace(Stack[-1])
0x55a: Pop(1)
0x55b: Return(); Pop(6)

0x55c: PushEmpty(bool, bool)
0x55d: PushEmpty(bool)
0x55e: Call2 0x709

0x55f: Pop(0)
0x560: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x561: @ lshHasSpeech(Stack[-1], Stack[-3])
0x562: Pop(0)
0x563: Push(Stack[-1])
0x564: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x565: @ lshPlaySpeech(Stack[-3])
0x566: Pop(0)
0x567: Stack[-4] = (bool) 1
0x568: Return(); Pop(2)

0x569: Stack[-4] = (bool) 0
0x56a: Return(); Pop(2)

0x56b: PushEmpty(bool)
0x56c: Call2 0x709

0x56d: Pop(0)
0x56e: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56f: @ lshStopSpeech()
0x570: Pop(0)
0x571: Return(); Pop(0)

0x572: PushEmpty(object, object)
0x573: @ self(Stack[-1])
0x574: Pop(0)
0x575: Stack[-3] = Stack[-1]
0x576: Return(); Pop(2)

0x577: Stack[-1] = 0
0x578: PushEmpty(float, float)
0x579: Pop(0); Push(Stack[-3] | Stack[-3]);
0x57a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x57b: Push((float)0.0)
0x57c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x57d: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x57f: Return(); Pop(2)

0x580: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x581: Return(); Pop(2)

0x582: PushEmpty(int, int)
0x583: @ GetVariable(Stack[-3], Stack[-1])
0x584: Pop(0)
0x585: Stack[-4] = Stack[-1]
0x586: Return(); Pop(2)

0x587: PushEmpty(object, object)
0x588: @ CreateIntVector(Stack[-1])
0x589: Pop(0)
0x58a: @@ add(Stack[-4])
0x58b: Pop(0)
0x58c: @@ add(Stack[-3])
0x58d: Pop(0)
0x58e: Push((int) 3)
0x58f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x590: Pop(1)
0x591: Return(); Pop(2)

0x592: Stack[-1] = 0
0x593: PushEmpty(int, int, bool, int, int, bool)
0x594: @@ GetItemID(Stack[-3])
0x595: Pop(0)
0x596: Push("Category")
0x597: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x598: Pop(1)
0x599: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x59a: Pop(0)
0x59b: Pop(0); Push((bool) Stack[-1] == 0)
0x59c: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59d: @@ DropItems(Stack[-8], Stack[-7])
0x59e: Pop(0)
0x59f: GOTO 0x5a5

0x5a0: PushEmpty(int, int)
0x5a1: Stack[-2] = Stack[-5]
0x5a2: Stack[-1] = Stack[-9]
0x5a3: Call2 0x587

0x5a4: Pop(2)
0x5a5: Return(); Pop(6)

0x5a6: PushEmpty(object, object)
0x5a7: @ CreateInvItem(Stack[-1])
0x5a8: Pop(0)
0x5a9: @@ SetItemName(Stack[-4])
0x5aa: Pop(0)
0x5ab: PushEmpty(object, object, int)
0x5ac: Stack[-3] = Stack[-8]
0x5ad: Stack[-2] = Stack[-4]
0x5ae: Stack[-1] = Stack[-6]
0x5af: Call2 0x593

0x5b0: Pop(3)
0x5b1: Return(); Pop(2)

0x5b2: Stack[-1] = 0
0x5b3: PushEmpty(object, object)
0x5b4: @ FindActor(Stack[-1], Stack[-5])
0x5b5: Pop(0)
0x5b6: Pop(0); Push((bool) Stack[-1] == 0)
0x5b7: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5b8: Stack[-6] = (bool) 0
0x5b9: Return(); Pop(2)

0x5ba: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x5bb: Pop(0)
0x5bc: Stack[-6] = (bool) 1
0x5bd: Return(); Pop(2)

0x5be: Stack[-1] = 0
0x5bf: PushEmpty(float, float)
0x5c0: @ GetGameTime(Stack[-1])
0x5c1: Pop(0)
0x5c2: Push((int) 1)
0x5c3: PushEmpty(int)
0x5c4: Push((int) 24)
0x5c5: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x5c6: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5c7: Return(); Pop(2)

0x5c8: PushEmpty()
0x5c9: PushEmpty(object, string, float)
0x5ca: PushEmpty(object)
0x5cb: Call2 0x6be

0x5cc: Stack[-4] = Stack[-1]
0x5cd: Pop(1)
0x5ce: Stack[-2] = "pt_map_aglaja"
0x5cf: Stack[-1] = (int) 2
0x5d0: Call2 0x6cf

0x5d1: Pop(3)
0x5d2: PushEmpty(object)
0x5d3: Call2 0x6be

0x5d4: Pop(0)
0x5d5: @@ ShowMap(Stack[-1])
0x5d6: Pop(1)
0x5d7: Return(); Pop(0)

0x5d8: PushEmpty()
0x5d9: PushEmpty(bool, string, string, string)
0x5da: Stack[-3] = "volonteers_danko"
0x5db: Stack[-2] = "disease"
0x5dc: Stack[-1] = "petr"
0x5dd: Call2 0x5b3

0x5de: Pop(4)
0x5df: Return(); Pop(0)

0x5e0: PushEmpty()
0x5e1: PushEmpty(int, string)
0x5e2: Stack[-1] = "map_chertez_state"
0x5e3: Call2 0x582

0x5e4: Pop(1)
0x5e5: Push((int) 4)
0x5e6: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x5e7: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5e8: Push("map_chertez_state")
0x5e9: Push((int) 4)
0x5ea: @ SetVariable(Stack[-2], Stack[-1])
0x5eb: Pop(2)
0x5ec: Push("map_chertez_force")
0x5ed: Push((int) 1)
0x5ee: @ SetVariable(Stack[-2], Stack[-1])
0x5ef: Pop(2)
0x5f0: Return(); Pop(0)

0x5f1: PushEmpty(int, int)
0x5f2: Push("tvirin")
0x5f3: Push((int) 5)
0x5f4: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x5f5: Pop(2)
0x5f6: Return(); Pop(2)

0x5f7: PushEmpty()
0x5f8: Push("ood10Petr1")
0x5f9: Push((int) 1)
0x5fa: @ SetVariable(Stack[-2], Stack[-1])
0x5fb: Pop(2)
0x5fc: Return(); Pop(0)

0x5fd: PushEmpty()
0x5fe: Push("d10q01")
0x5ff: Push((int) 2)
0x600: @ SetVariable(Stack[-2], Stack[-1])
0x601: Pop(2)
0x602: PushEmpty()
0x603: Call2 0x67b

0x604: Pop(0)
0x605: Return(); Pop(0)

0x606: PushEmpty()
0x607: Push("d10q01")
0x608: Push((int) 3)
0x609: @ SetVariable(Stack[-2], Stack[-1])
0x60a: Pop(2)
0x60b: PushEmpty()
0x60c: Call2 0x688

0x60d: Pop(0)
0x60e: Push("blueprint is given")
0x60f: @ Trace(Stack[-1])
0x610: Pop(1)
0x611: PushEmpty(object, string, int)
0x612: Stack[-3] = Stack[-5]
0x613: Stack[-2] = "d10q01_blueprint"
0x614: Stack[-1] = (int) 1
0x615: Call2 0x5a6

0x616: Pop(3)
0x617: Return(); Pop(0)

0x618: PushEmpty()
0x619: Push("ood10Petr3")
0x61a: Push((int) 1)
0x61b: @ SetVariable(Stack[-2], Stack[-1])
0x61c: Pop(2)
0x61d: Return(); Pop(0)

0x61e: PushEmpty()
0x61f: PushEmpty(int, string)
0x620: Stack[-1] = "ood10Petr1"
0x621: Call2 0x582

0x622: Pop(1)
0x623: Push((int) 0)
0x624: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x625: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x626: Stack[-2] = (bool) 1
0x627: Return(); Pop(0)

0x628: Stack[-2] = (bool) 0
0x629: Return(); Pop(0)

0x62a: PushEmpty()
0x62b: PushEmpty(int, string)
0x62c: Stack[-1] = "d10q01MariaSavePetr"
0x62d: Call2 0x582

0x62e: Pop(1)
0x62f: Push((int) 1)
0x630: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x631: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x632: Stack[-2] = (bool) 1
0x633: Return(); Pop(0)

0x634: Stack[-2] = (bool) 0
0x635: Return(); Pop(0)

0x636: PushEmpty()
0x637: PushEmpty(int, string)
0x638: Stack[-1] = "d10q01"
0x639: Call2 0x582

0x63a: Pop(1)
0x63b: Push((int) 1)
0x63c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x63d: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x63e: Stack[-2] = (bool) 1
0x63f: Return(); Pop(0)

0x640: Stack[-2] = (bool) 0
0x641: Return(); Pop(0)

0x642: PushEmpty()
0x643: PushEmpty(int, string)
0x644: Stack[-1] = "d10q01"
0x645: Call2 0x582

0x646: Pop(1)
0x647: Push((int) 2)
0x648: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x649: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x64a: Stack[-2] = (bool) 1
0x64b: Return(); Pop(0)

0x64c: Stack[-2] = (bool) 0
0x64d: Return(); Pop(0)

0x64e: PushEmpty()
0x64f: PushEmpty(bool, object)
0x650: Stack[-1] = Stack[-3]
0x651: Call2 0x670

0x652: Pop(1)
0x653: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x654: Stack[-2] = (bool) 1
0x655: Return(); Pop(0)

0x656: Stack[-2] = (bool) 0
0x657: Return(); Pop(0)

0x658: PushEmpty()
0x659: PushEmpty(int, string)
0x65a: Stack[-1] = "d10q01"
0x65b: Call2 0x582

0x65c: Pop(1)
0x65d: Push((int) 3)
0x65e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x65f: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x660: Stack[-2] = (bool) 1
0x661: Return(); Pop(0)

0x662: Stack[-2] = (bool) 0
0x663: Return(); Pop(0)

0x664: PushEmpty()
0x665: PushEmpty(int, string)
0x666: Stack[-1] = "ood10Petr3"
0x667: Call2 0x582

0x668: Pop(1)
0x669: Push((int) 0)
0x66a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x66b: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x66c: Stack[-2] = (bool) 1
0x66d: Return(); Pop(0)

0x66e: Stack[-2] = (bool) 0
0x66f: Return(); Pop(0)

0x670: PushEmpty(int, int)
0x671: Push("tvirin")
0x672: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0x673: Pop(1)
0x674: Push((int) 5)
0x675: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x676: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x677: Stack[-4] = (bool) 1
0x678: Return(); Pop(2)

0x679: Stack[-4] = (bool) 0
0x67a: Return(); Pop(2)

0x67b: PushEmpty(object, object)
0x67c: Push((int) 189)
0x67d: Push((int) 1)
0x67e: Push((int) 515474)
0x67f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x680: Pop(3)
0x681: PushEmpty(bool, object, int)
0x682: Stack[-2] = Stack[-4]
0x683: Stack[-1] = (int) 186
0x684: Call2 0x6a2

0x685: Pop(3)
0x686: Return(); Pop(2)

0x687: Stack[-1] = 0
0x688: PushEmpty(object, object)
0x689: Push((int) 190)
0x68a: Push((int) 1)
0x68b: Push((int) 515475)
0x68c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x68d: Pop(3)
0x68e: PushEmpty(bool, object, int)
0x68f: Stack[-2] = Stack[-4]
0x690: Stack[-1] = (int) 186
0x691: Call2 0x6a2

0x692: Pop(3)
0x693: Return(); Pop(2)

0x694: Stack[-1] = 0
0x695: PushEmpty(object, object)
0x696: @ GetDiaryRoot(Stack[-1])
0x697: Pop(0)
0x698: Pop(0); Push((bool) Stack[-1] == 0)
0x699: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69a: Push("Can't retrieve diary root")
0x69b: @ Trace(Stack[-1])
0x69c: Pop(1)
0x69d: Stack[-3] = (bool) 0
0x69e: Return(); Pop(2)

0x69f: Stack[-3] = Stack[-1]
0x6a0: Return(); Pop(2)

0x6a1: Stack[-1] = 0
0x6a2: PushEmpty(object, object, int, object, object, int)
0x6a3: PushEmpty(object)
0x6a4: Call2 0x695

0x6a5: Stack[-4] = Stack[-1]
0x6a6: Pop(1)
0x6a7: @@ Find(Stack[-7], Stack[-2])
0x6a8: Pop(0)
0x6a9: Pop(0); Push((bool) Stack[-2] == 0)
0x6aa: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x6ab: Push("Can't find diary parent with id: ")
0x6ac: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6ad: @ Trace(Stack[-1])
0x6ae: Pop(1)
0x6af: Stack[-9] = (bool) 0
0x6b0: Return(); Pop(6)

0x6b1: @@ AddChild(Stack[-8])
0x6b2: Pop(0)
0x6b3: Push((int) 7)
0x6b4: @ SendWorldWndMessage(Stack[-1])
0x6b5: Pop(1)
0x6b6: @@ GetCategory(Stack[-1])
0x6b7: Pop(0)
0x6b8: @ SetDiarySection(Stack[-1])
0x6b9: Pop(0)
0x6ba: Stack[-9] = (bool) 0
0x6bb: Return(); Pop(6)

0x6bc: Stack[-2] = 0
0x6bd: Stack[-3] = 0
0x6be: PushEmpty(object, object, object, object)
0x6bf: @ GetMainOutdoorScene(Stack[-2])
0x6c0: Pop(0)
0x6c1: Pop(0); Push((bool) Stack[-2] == 0)
0x6c2: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c3: Push("Can't find main outdoor scene")
0x6c4: @ Trace(Stack[-1])
0x6c5: Pop(1)
0x6c6: Stack[-1] = 0
0x6c7: Stack[-5] = Stack[-1]
0x6c8: Return(); Pop(4)

0x6c9: @@ GetMap(Stack[-1])
0x6ca: Pop(0)
0x6cb: Stack[-5] = Stack[-1]
0x6cc: Return(); Pop(4)

0x6cd: Stack[-1] = 0
0x6ce: Stack[-2] = 0
0x6cf: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x6d0: @ GetMainOutdoorScene(Stack[-2])
0x6d1: Pop(0)
0x6d2: Pop(0); Push((bool) Stack[-2] == 0)
0x6d3: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6d4: Push("Can't find main outdoor scene")
0x6d5: @ Trace(Stack[-1])
0x6d6: Pop(1)
0x6d7: Return(); Pop(8)

0x6d8: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x6d9: Pop(0)
0x6da: Pop(0); Push((bool) Stack[-1] == 0)
0x6db: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6dc: Push("Warning: outdoor scene locator ")
0x6dd: Pop(1); Push(Stack[-1] + Stack[-11]);
0x6de: Push(" doesnt exist")
0x6df: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6e0: @ Trace(Stack[-1])
0x6e1: Pop(1)
0x6e2: @@ GetMap(Stack[-11])
0x6e3: Pop(0)
0x6e4: Pop(0); Push((bool) Stack[-11] == 0)
0x6e5: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e6: Push("Can't find map")
0x6e7: @ Trace(Stack[-1])
0x6e8: Pop(1)
0x6e9: Return(); Pop(8)

0x6ea: Push(CvectorIndex(Stack[-4], 0))
0x6eb: Push(CvectorIndex(Stack[-5], 2))
0x6ec: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x6ed: Pop(2)
0x6ee: Return(); Pop(8)

0x6ef: Stack[-2] = 0
0x6f0: PushEmpty(int, int)
0x6f1: Push("branch")
0x6f2: @ GetVariable(Stack[-1], Stack[-2])
0x6f3: Pop(1)
0x6f4: Push((int) 0)
0x6f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6f6: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6f7: Stack[-3] = (int) 1
0x6f8: Return(); Pop(2)

0x6f9: GOTO 0x6ff

0x6fa: Push((int) 1)
0x6fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6fc: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6fd: Stack[-3] = (int) 2
0x6fe: Return(); Pop(2)

0x6ff: Stack[-3] = (int) 3
0x700: Return(); Pop(2)

0x701: Stack[-1] = (int) 539028
0x702: Return(); Pop(0)

0x703: Stack[-1] = (int) 539027
0x704: Return(); Pop(0)

0x705: Stack[-1] = "ui/NPC_Petr.png"
0x706: Return(); Pop(0)

0x707: Stack[-1] = "ui/NPC_Petr_b.png"
0x708: Return(); Pop(0)

0x709: Stack[-1] = (bool) 0
0x70a: Return(); Pop(0)

