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
	Staring
	SetMessage
	ClearReplies
	AddReply
	Angry
	Mysterious
	all
	idle
	Neutral
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
	add
	money
	Money
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	playsound
	giveitem
	oob2MariaKabak1
	b2q03_1
	quest_b2_03
	fail
	recipe5 is given
	recipe5
	money 5000 is given
	b2q03
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Maria.png
	ui/NPC_Maria_b.png

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

RunOp = 0x24d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf6 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x251 Vars = (string)
		EVENT_6 Op = 0x265 Vars = ()
		EVENT_5 Op = 0x272 Vars = ()
		EVENT_7 Op = 0x2bb Vars = (int)
		EVENT_45 Op = 0x2fd Vars = (bool)
		EVENT_0 Op = 0x309 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x399

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x5fe

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x5fc

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x600

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x602

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x5eb

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
0x31: Call2 0x4af

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x3f0

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
0x48: Call2 0x3de

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
0x56: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x577

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x56b

0x61: Pop(1)
0x62: Pop(1); Push((bool) Stack[-1] == 0)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x66: PushEmpty(object, object)
0x67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69: Call2 0x536

0x6a: Pop(2)
0x6b: PushEmpty(string)
0x6c: Stack[-1] = "Staring"
0x6d: Call2 0xe0

0x6e: Pop(1)
0x6f: Push((int) 531063)
0x70: @@ SetMessage(Stack[-1])
0x71: Pop(1)
0x72: @@ ClearReplies()
0x73: Pop(0)
0x74: Push((int) 531064)
0x75: Push((int) 32569)
0x76: Push((int) 32389)
0x77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78: Pop(3)
0x79: Push((int) 531269)
0x7a: Push((int) 32569)
0x7b: Push((int) 32581)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: GOTO 0xc2

0x7f: PushEmpty(bool, object)
0x80: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x81: Call2 0x56b

0x82: Pop(1)
0x83: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x84: PushEmpty(string)
0x85: Stack[-1] = "Angry"
0x86: Call2 0xe0

0x87: Pop(1)
0x88: Push((int) 531077)
0x89: @@ SetMessage(Stack[-1])
0x8a: Pop(1)
0x8b: @@ ClearReplies()
0x8c: Pop(0)
0x8d: Push((int) 531078)
0x8e: Push((int) -1)
0x8f: Push((int) 32400)
0x90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91: Pop(3)
0x92: Push((int) 531255)
0x93: Push((int) -1)
0x94: Push((int) 32571)
0x95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96: Pop(3)
0x97: GOTO 0xc2

0x98: PushEmpty(string)
0x99: Stack[-1] = "Mysterious"
0x9a: Call2 0xe0

0x9b: Pop(1)
0x9c: Push((int) 531066)
0x9d: @@ SetMessage(Stack[-1])
0x9e: Pop(1)
0x9f: @@ ClearReplies()
0xa0: Pop(0)
0xa1: PushEmpty(bool, object)
0xa2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa3: Call2 0x583

0xa4: Pop(1)
0xa5: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa6: Push((int) 531067)
0xa7: Push((int) 32395)
0xa8: Push((int) 32392)
0xa9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa: Pop(3)
0xab: PushEmpty(bool, object)
0xac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xad: Call2 0x58f

0xae: Pop(1)
0xaf: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb0: Push((int) 531068)
0xb1: Push((int) 32397)
0xb2: Push((int) 32393)
0xb3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb4: Pop(3)
0xb5: Push((int) 531069)
0xb6: Push((int) -1)
0xb7: Push((int) 32394)
0xb8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9: Pop(3)
0xba: Push((int) 531256)
0xbb: Push((int) -1)
0xbc: Push((int) 32572)
0xbd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe: Pop(3)
0xbf: GOTO 0xc2

0xc0: Return(); Pop(0)

0xc1: GOTO 0x55

0xc2: PushEmpty(bool)
0xc3: Call2 0x604

0xc4: Pop(0)
0xc5: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xc6: @ lshWaitForAnimEnd()
0xc7: Pop(0)
0xc8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc9: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xca: GOTO 0xd0

0xcb: PushEmpty(string)
0xcc: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xcd: Call2 0x47a

0xce: Pop(1)
0xcf: GOTO 0xc6

0xd0: GOTO 0xdf

0xd1: Push("all")
0xd2: Push("idle")
0xd3: @ PlayAnimation(Stack[-2], Stack[-1])
0xd4: Pop(2)
0xd5: @ WaitForAnimEnd()
0xd6: Pop(0)
0xd7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd8: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd9: GOTO 0xdf

0xda: Push("all")
0xdb: Push("idle")
0xdc: @ PlayAnimation(Stack[-2], Stack[-1])
0xdd: Pop(2)
0xde: GOTO 0xd5

0xdf: Return(); Pop(0)

0xe0: PushEmpty()
0xe1: PushEmpty(bool)
0xe2: Call2 0x604

0xe3: Pop(0)
0xe4: Pop(1); Push((bool) Stack[-1] == 0)
0xe5: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe6: Return(); Pop(0)

0xe7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe8: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe9: Return(); Pop(0)

0xea: PushEmpty(string, bool)
0xeb: Stack[-2] = Stack[-3]
0xec: Push("")
0xed: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xef: Stack[-1] = (bool) 0
0xf0: GOTO 0xf2

0xf1: Stack[-1] = (bool) 1
0xf2: Call2 0x48a

0xf3: Pop(2)
0xf4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf5: Return(); Pop(0)

0xf6: PushEmpty()
0xf7: Push((int) 1)
0xf8: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0xf9: PushEmpty()
0xfa: Call2 0x4a8

0xfb: Pop(0)
0xfc: Push((int) 32390)
0xfd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xff: PushEmpty(object, object)
0x100: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x101: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x102: Call2 0x53c

0x103: Pop(2)
0x104: Push((int) 32396)
0x105: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x107: PushEmpty(object, object)
0x108: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x109: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10a: Call2 0x53c

0x10b: Pop(2)
0x10c: Push((int) 32574)
0x10d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x10f: PushEmpty(object, object)
0x110: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x111: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x112: Call2 0x53c

0x113: Pop(2)
0x114: Push((int) 32398)
0x115: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x117: PushEmpty(object, object)
0x118: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x119: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11a: Call2 0x548

0x11b: Pop(2)
0x11c: PushEmpty(object, object)
0x11d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11f: Call2 0x561

0x120: Pop(2)
0x121: PushEmpty(object, object)
0x122: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x123: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x124: Call2 0x556

0x125: Pop(2)
0x126: PushEmpty(object, object)
0x127: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x128: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x129: Call2 0x530

0x12a: Pop(2)
0x12b: Push((int) 32573)
0x12c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x12e: PushEmpty(object, object)
0x12f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x130: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x131: Call2 0x548

0x132: Pop(2)
0x133: PushEmpty(object, object)
0x134: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x135: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x136: Call2 0x561

0x137: Pop(2)
0x138: PushEmpty(object, object)
0x139: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13b: Call2 0x556

0x13c: Pop(2)
0x13d: PushEmpty(object, object)
0x13e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x140: Call2 0x530

0x141: Pop(2)
0x142: Push((int) 32388)
0x143: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x144: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x145: PushEmpty(bool)
0x146: Stack[-1] = (bool) 0
0x147: PushEmpty(bool, object)
0x148: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x149: Call2 0x577

0x14a: Pop(1)
0x14b: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14c: PushEmpty(bool, object)
0x14d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14e: Call2 0x56b

0x14f: Pop(1)
0x150: Pop(1); Push((bool) Stack[-1] == 0)
0x151: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x152: Stack[-1] = (bool) 1
0x153: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x154: PushEmpty(object, object)
0x155: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x156: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x157: Call2 0x536

0x158: Pop(2)
0x159: PushEmpty(string)
0x15a: Stack[-1] = "Staring"
0x15b: Call2 0xe0

0x15c: Pop(1)
0x15d: Push((int) 531063)
0x15e: @@ SetMessage(Stack[-1])
0x15f: Pop(1)
0x160: @@ ClearReplies()
0x161: Pop(0)
0x162: Push((int) 531064)
0x163: Push((int) 32569)
0x164: Push((int) 32389)
0x165: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x166: Pop(3)
0x167: Push((int) 531269)
0x168: Push((int) 32569)
0x169: Push((int) 32581)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: Return(); Pop(0)

0x16d: PushEmpty(bool, object)
0x16e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16f: Call2 0x56b

0x170: Pop(1)
0x171: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x172: PushEmpty(string)
0x173: Stack[-1] = "Angry"
0x174: Call2 0xe0

0x175: Pop(1)
0x176: Push((int) 531077)
0x177: @@ SetMessage(Stack[-1])
0x178: Pop(1)
0x179: @@ ClearReplies()
0x17a: Pop(0)
0x17b: Push((int) 531078)
0x17c: Push((int) -1)
0x17d: Push((int) 32400)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Push((int) 531255)
0x181: Push((int) -1)
0x182: Push((int) 32571)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Return(); Pop(0)

0x186: PushEmpty(string)
0x187: Stack[-1] = "Mysterious"
0x188: Call2 0xe0

0x189: Pop(1)
0x18a: Push((int) 531066)
0x18b: @@ SetMessage(Stack[-1])
0x18c: Pop(1)
0x18d: @@ ClearReplies()
0x18e: Pop(0)
0x18f: PushEmpty(bool, object)
0x190: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x191: Call2 0x583

0x192: Pop(1)
0x193: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x194: Push((int) 531067)
0x195: Push((int) 32395)
0x196: Push((int) 32392)
0x197: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x198: Pop(3)
0x199: PushEmpty(bool, object)
0x19a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19b: Call2 0x58f

0x19c: Pop(1)
0x19d: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x19e: Push((int) 531068)
0x19f: Push((int) 32397)
0x1a0: Push((int) 32393)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Push((int) 531069)
0x1a4: Push((int) -1)
0x1a5: Push((int) 32394)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: Push((int) 531256)
0x1a9: Push((int) -1)
0x1aa: Push((int) 32572)
0x1ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac: Pop(3)
0x1ad: Return(); Pop(0)

0x1ae: Push((int) 32397)
0x1af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1b1: PushEmpty(string)
0x1b2: Stack[-1] = "Staring"
0x1b3: Call2 0xe0

0x1b4: Pop(1)
0x1b5: Push((int) 531072)
0x1b6: @@ SetMessage(Stack[-1])
0x1b7: Pop(1)
0x1b8: @@ ClearReplies()
0x1b9: Pop(0)
0x1ba: Push((int) 531073)
0x1bb: Push((int) -1)
0x1bc: Push((int) 32398)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: Push((int) 531257)
0x1c0: Push((int) -1)
0x1c1: Push((int) 32573)
0x1c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c3: Pop(3)
0x1c4: Return(); Pop(0)

0x1c5: Push((int) 32395)
0x1c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1c8: PushEmpty(string)
0x1c9: Stack[-1] = "Staring"
0x1ca: Call2 0xe0

0x1cb: Pop(1)
0x1cc: Push((int) 531070)
0x1cd: @@ SetMessage(Stack[-1])
0x1ce: Pop(1)
0x1cf: @@ ClearReplies()
0x1d0: Pop(0)
0x1d1: Push((int) 531071)
0x1d2: Push((int) -1)
0x1d3: Push((int) 32396)
0x1d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d5: Pop(3)
0x1d6: Push((int) 531258)
0x1d7: Push((int) -1)
0x1d8: Push((int) 32574)
0x1d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1da: Pop(3)
0x1db: Return(); Pop(0)

0x1dc: Push((int) 32569)
0x1dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1df: PushEmpty(string)
0x1e0: Stack[-1] = "Staring"
0x1e1: Call2 0xe0

0x1e2: Pop(1)
0x1e3: Push((int) 531253)
0x1e4: @@ SetMessage(Stack[-1])
0x1e5: Pop(1)
0x1e6: @@ ClearReplies()
0x1e7: Pop(0)
0x1e8: Push((int) 531254)
0x1e9: Push((int) 32576)
0x1ea: Push((int) 32570)
0x1eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ec: Pop(3)
0x1ed: Push((int) 531270)
0x1ee: Push((int) -1)
0x1ef: Push((int) 32583)
0x1f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f1: Pop(3)
0x1f2: Return(); Pop(0)

0x1f3: Push((int) 32576)
0x1f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x1f6: PushEmpty(string)
0x1f7: Stack[-1] = "Neutral"
0x1f8: Call2 0xe0

0x1f9: Pop(1)
0x1fa: Push((int) 531264)
0x1fb: @@ SetMessage(Stack[-1])
0x1fc: Pop(1)
0x1fd: @@ ClearReplies()
0x1fe: Pop(0)
0x1ff: Push((int) 531265)
0x200: Push((int) 32578)
0x201: Push((int) 32577)
0x202: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x203: Pop(3)
0x204: Push((int) 531271)
0x205: Push((int) -1)
0x206: Push((int) 32584)
0x207: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x208: Pop(3)
0x209: Return(); Pop(0)

0x20a: Push((int) 32578)
0x20b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x20d: PushEmpty(string)
0x20e: Stack[-1] = "Neutral"
0x20f: Call2 0xe0

0x210: Pop(1)
0x211: Push((int) 531266)
0x212: @@ SetMessage(Stack[-1])
0x213: Pop(1)
0x214: @@ ClearReplies()
0x215: Pop(0)
0x216: Push((int) 531267)
0x217: Push((int) 32580)
0x218: Push((int) 32579)
0x219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21a: Pop(3)
0x21b: Push((int) 531272)
0x21c: Push((int) 32580)
0x21d: Push((int) 32585)
0x21e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(3)
0x220: Return(); Pop(0)

0x221: Push((int) 32580)
0x222: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x224: PushEmpty(string)
0x225: Stack[-1] = "Neutral"
0x226: Call2 0xe0

0x227: Pop(1)
0x228: Push((int) 531268)
0x229: @@ SetMessage(Stack[-1])
0x22a: Pop(1)
0x22b: @@ ClearReplies()
0x22c: Pop(0)
0x22d: Push((int) 531065)
0x22e: Push((int) -1)
0x22f: Push((int) 32390)
0x230: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(3)
0x232: Push((int) 531273)
0x233: Push((int) -1)
0x234: Push((int) 32587)
0x235: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x236: Pop(3)
0x237: Return(); Pop(0)

0x238: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x239: PushEmpty(bool)
0x23a: Call2 0x604

0x23b: Pop(0)
0x23c: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23d: @ lshStopAnimation()
0x23e: Pop(0)
0x23f: GOTO 0x242

0x240: @ StopAnimation()
0x241: Pop(0)
0x242: Return(); Pop(0)

0x243: GOTO 0xf7

0x244: Return(); Pop(0)

0x245: PushEmpty()
0x246: PushEmpty(int, object)
0x247: Stack[-1] = Stack[-3]
0x248: Push(-2, 1); TaskCall(0)
0x249: Call2 0x0

0x24a: Pop(-2, 1); TaskReturn
0x24b: Pop(2)
0x24c: Return(); Pop(0)

0x24d: PushEmpty()
0x24e: Call2 0x276

0x24f: Pop(0)
0x250: Return(); Pop(0)

0x251: PushEmpty(bool, bool)
0x252: Push("cleanup")
0x253: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x255: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x256: @ IsLoaded(Stack[-1])
0x257: Pop(0)
0x258: Pop(0); Push((bool) Stack[-1] == 0)
0x259: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25a: PushEmpty(object)
0x25b: Call2 0x4af

0x25c: Pop(0)
0x25d: @ RemoveActor(Stack[-1])
0x25e: Pop(1)
0x25f: GOTO 0x264

0x260: Push("restore")
0x261: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x262: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x263: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x264: Return(); Pop(2)

0x265: Push( Stack[1 + Tasks[-1].StackPointer] )
0x266: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x267: PushEmpty(object)
0x268: Call2 0x4af

0x269: Pop(0)
0x26a: @ RemoveActor(Stack[-1])
0x26b: Pop(1)
0x26c: @ Hold()
0x26d: Pop(0)
0x26e: PushEmpty()
0x26f: Call2 0x2e1

0x270: Pop(0)
0x271: Return(); Pop(0)

0x272: PushEmpty()
0x273: Call2 0x2f0

0x274: Pop(0)
0x275: Return(); Pop(0)

0x276: PushEmpty(bool)
0x277: Call2 0x394

0x278: Pop(0)
0x279: Pop(1); Push((bool) Stack[-1] == 0)
0x27a: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27b: @ Hold()
0x27c: Pop(0)
0x27d: @ GetDirection(Stack[-0])
0x27e: Pop(0)
0x27f: PushEmpty()
0x280: Call2 0x326

0x281: Pop(0)
0x282: GOTO 0x27f

0x283: Return(); Pop(0)

0x284: PushEmpty(object, object)
0x285: Push("player")
0x286: @ FindActor(Stack[-2], Stack[-1])
0x287: Pop(1)
0x288: Pop(0); Push((bool) Stack[-1] == 0)
0x289: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28a: Stack[-3] = (bool) 0
0x28b: Return(); Pop(2)

0x28c: PushEmpty(bool, object)
0x28d: Stack[-1] = Stack[-3]
0x28e: Call2 0x38b

0x28f: Stack[-5] = Stack[-2]
0x290: Pop(2)
0x291: Return(); Pop(2)

0x292: Stack[-1] = 0
0x293: Push(CvectorIndex(Stack[-0], 0))
0x294: Push(CvectorIndex(Stack[-0], 2))
0x295: @ RotateAsync(Stack[-2], Stack[-1])
0x296: Pop(2)
0x297: Return(); Pop(0)

0x298: PushEmpty(object, bool, object, bool)
0x299: Push("player")
0x29a: @ FindActor(Stack[-3], Stack[-1])
0x29b: Pop(1)
0x29c: Pop(0); Push((bool) Stack[-2] == 0)
0x29d: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29e: Stack[-5] = (bool) 0
0x29f: Return(); Pop(4)

0x2a0: PushEmpty(float, object)
0x2a1: Stack[-1] = Stack[-4]
0x2a2: Call2 0x372

0x2a3: Pop(1)
0x2a4: Push((float)90000.0)
0x2a5: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a7: Stack[-5] = (bool) 0
0x2a8: Return(); Pop(4)

0x2a9: @ CanSee(Stack[-1], Stack[-2])
0x2aa: Pop(0)
0x2ab: Stack[-5] = Stack[-1]
0x2ac: Return(); Pop(4)

0x2ad: Stack[-2] = 0
0x2ae: PushEmpty(float, float)
0x2af: Push((int) 8)
0x2b0: Push((int) 16)
0x2b1: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x2b2: Pop(2)
0x2b3: Push((int) 10)
0x2b4: @ SetTimer(Stack[-1], Stack[-2])
0x2b5: Pop(1)
0x2b6: Return(); Pop(2)

0x2b7: Push((int) 10)
0x2b8: @ KillTimer(Stack[-1])
0x2b9: Pop(1)
0x2ba: Return(); Pop(0)

0x2bb: PushEmpty()
0x2bc: Push((int) 10)
0x2bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2bf: PushEmpty()
0x2c0: Call2 0x2b7

0x2c1: Pop(0)
0x2c2: PushEmpty(bool)
0x2c3: Stack[-1] = (bool) 0
0x2c4: PushEmpty(bool)
0x2c5: Call2 0x394

0x2c6: Pop(0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2c8: PushEmpty(bool)
0x2c9: Call2 0x298

0x2ca: Pop(0)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cc: Stack[-1] = (bool) 1
0x2cd: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2ce: PushEmpty(bool)
0x2cf: Call2 0x284

0x2d0: Pop(0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d2: PushEmpty(bool, object)
0x2d3: PushEmpty(object)
0x2d4: Call2 0x4af

0x2d5: Stack[-2] = Stack[-1]
0x2d6: Pop(1)
0x2d7: Call2 0x42a

0x2d8: Pop(2)
0x2d9: GOTO 0x2e0

0x2da: PushEmpty()
0x2db: Call2 0x293

0x2dc: Pop(0)
0x2dd: PushEmpty()
0x2de: Call2 0x2ae

0x2df: Pop(0)
0x2e0: Return(); Pop(0)

0x2e1: PushEmpty()
0x2e2: Call2 0x36d

0x2e3: Pop(0)
0x2e4: PushEmpty()
0x2e5: Call2 0x2b7

0x2e6: Pop(0)
0x2e7: @ lshStopSpeech()
0x2e8: Pop(0)
0x2e9: @ lshStopAnimation()
0x2ea: Pop(0)
0x2eb: @ StopAsync()
0x2ec: Pop(0)
0x2ed: @ Hold()
0x2ee: Pop(0)
0x2ef: Return(); Pop(0)

0x2f0: @ StopGroup0()
0x2f1: Pop(0)
0x2f2: PushEmpty()
0x2f3: Call2 0x2b7

0x2f4: Pop(0)
0x2f5: PushEmpty(string)
0x2f6: Stack[-1] = "Neutral"
0x2f7: Call2 0x47a

0x2f8: Pop(1)
0x2f9: PushEmpty()
0x2fa: Call2 0x2ae

0x2fb: Pop(0)
0x2fc: Return(); Pop(0)

0x2fd: PushEmpty()
0x2fe: Push(Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x300: PushEmpty()
0x301: Call2 0x2ae

0x302: Pop(0)
0x303: GOTO 0x308

0x304: PushEmpty(string)
0x305: Stack[-1] = "Neutral"
0x306: Call2 0x47a

0x307: Pop(1)
0x308: Return(); Pop(0)

0x309: PushEmpty(bool, bool)
0x30a: @ IsOverrideActive(Stack[-1])
0x30b: Pop(0)
0x30c: Pop(0); Push((bool) Stack[-1] == 0)
0x30d: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x30e: EventDisable(0)
0x30f: PushEmpty()
0x310: Call2 0x36d

0x311: Pop(0)
0x312: PushEmpty(bool, object)
0x313: Stack[-1] = Stack[-5]
0x314: Call2 0x38b

0x315: Pop(2)
0x316: EventEnable(0)
0x317: PushEmpty(object)
0x318: Stack[-1] = Stack[-4]
0x319: Call2 0x245

0x31a: Pop(1)
0x31b: PushEmpty(string)
0x31c: Stack[-1] = "Neutral"
0x31d: Call2 0x47a

0x31e: Pop(1)
0x31f: PushEmpty()
0x320: Call2 0x2b7

0x321: Pop(0)
0x322: PushEmpty()
0x323: Call2 0x2ae

0x324: Pop(0)
0x325: Return(); Pop(2)

0x326: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x327: @ WaitForAnimEnd()
0x328: Pop(0)
0x329: PushEmpty(bool)
0x32a: Call2 0x394

0x32b: Pop(0)
0x32c: Pop(1); Push((bool) Stack[-1] == 0)
0x32d: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32e: Return(); Pop(12)

0x32f: PushEmpty(int)
0x330: Call2 0x51f

0x331: Stack[-7] = Stack[-1]
0x332: Pop(1)
0x333: Stack[-5] = (int) 0
0x334: PushEmpty(bool)
0x335: Stack[-1] = (bool) 0
0x336: Push((int) 5)
0x337: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x339: PushEmpty(bool)
0x33a: Call2 0x394

0x33b: Pop(0)
0x33c: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33d: Stack[-1] = (bool) 1
0x33e: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x33f: Pop(0); Push((bool) Stack[-6] == 0)
0x340: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x341: Push((int) 3)
0x342: @ Sleep(Stack[-1], Stack[-5])
0x343: Pop(1)
0x344: Pop(0); Push((bool) Stack[-4] == 0)
0x345: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x346: GOTO 0x368

0x347: GOTO 0x35d

0x348: @ irand(Stack[-3], Stack[-6])
0x349: Pop(0)
0x34a: Push((int) 5)
0x34b: @ irand(Stack[-3], Stack[-1])
0x34c: Pop(1)
0x34d: Push((int) 0)
0x34e: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x34f: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x350: Stack[-3] = (int) 0
0x351: Push("all")
0x352: PushEmpty(string, int)
0x353: Stack[-1] = Stack[-6]
0x354: Call2 0x518

0x355: Pop(1)
0x356: @ PlayAnimation(Stack[-2], Stack[-1])
0x357: Pop(2)
0x358: @ WaitForAnimEnd(Stack[-1])
0x359: Pop(0)
0x35a: Pop(0); Push((bool) Stack[-1] == 0)
0x35b: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x35c: GOTO 0x368

0x35d: PushEmpty(bool)
0x35e: Call2 0x36b

0x35f: Pop(0)
0x360: Pop(1); Push((bool) Stack[-1] == 0)
0x361: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x362: GOTO 0x368

0x363: @ ResetAAS()
0x364: Pop(0)
0x365: Push((int) 1)
0x366: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x367: GOTO 0x334

0x368: @ ResetAAS()
0x369: Pop(0)
0x36a: Return(); Pop(12)

0x36b: Stack[-1] = (bool) 1
0x36c: Return(); Pop(0)

0x36d: @ StopAnimation()
0x36e: Pop(0)
0x36f: @ StopGroup0()
0x370: Pop(0)
0x371: Return(); Pop(0)

0x372: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x373: @ GetPosition(Stack[-3])
0x374: Pop(0)
0x375: @@ GetPosition(Stack[-2])
0x376: Pop(0)
0x377: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x378: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x379: Return(); Pop(6)

0x37a: PushEmpty(int, int)
0x37b: @@ GetProperty(Stack[-4], Stack[-1])
0x37c: Pop(0)
0x37d: Pop(0); Push(Stack[-1] + Stack[-3]);
0x37e: @@ SetProperty(Stack[-5], Stack[-1])
0x37f: Pop(1)
0x380: Return(); Pop(2)

0x381: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x382: @ GetPosition(Stack[-3])
0x383: Pop(0)
0x384: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x385: Push(CvectorIndex(Stack[-2], 0))
0x386: Push(CvectorIndex(Stack[-3], 2))
0x387: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x388: Pop(2)
0x389: Stack[-8] = Stack[-1]
0x38a: Return(); Pop(6)

0x38b: PushEmpty(cvector, cvector)
0x38c: @@ GetPosition(Stack[-1])
0x38d: Pop(0)
0x38e: PushEmpty(bool, cvector)
0x38f: Stack[-1] = Stack[-3]
0x390: Call2 0x381

0x391: Stack[-6] = Stack[-2]
0x392: Pop(2)
0x393: Return(); Pop(2)

0x394: PushEmpty(bool, bool)
0x395: @ IsLoaded(Stack[-1])
0x396: Pop(0)
0x397: Stack[-3] = Stack[-1]
0x398: Return(); Pop(2)

0x399: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x39a: @@ GetPosition(Stack[-8])
0x39b: Pop(0)
0x39c: @@ GetEyesHeight(Stack[-9])
0x39d: Pop(0)
0x39e: Push(CvectorIndex(Stack[-8], 1))
0x39f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3a0: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3a1: @ GetPosition(Stack[-7])
0x3a2: Pop(0)
0x3a3: @ GetEyesHeight(Stack[-9])
0x3a4: Pop(0)
0x3a5: Push(CvectorIndex(Stack[-7], 1))
0x3a6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3a7: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3a8: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3a9: Push(CvectorIndex(Stack[-6], 1))
0x3aa: Stack[-1] = (int) 0
0x3ab: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3ac: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3ad: Pop(1); Push(Sqrt(Stack[-1]))
0x3ae: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3af: Stack[-5] = -Stack[-6]; Pop(0);
0x3b0: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3b1: PushEmpty(cvector, cvector)
0x3b2: Push(CVector(0.0, 1.0, 0.0))
0x3b3: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3b4: Call2 0x4b5

0x3b5: Pop(1)
0x3b6: Push((int) 25)
0x3b7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3b8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3b9: Push(CVector(0.0, 10.0, 0.0))
0x3ba: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3bb: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3bc: @ IsOverrideActive(Stack[-2])
0x3bd: Pop(0)
0x3be: Push(Stack[-2])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c0: Stack[-21] = (bool) 0
0x3c1: Return(); Pop(18)

0x3c2: @ StopWorld()
0x3c3: Pop(0)
0x3c4: Push((bool) 1)
0x3c5: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x3c6: Pop(1)
0x3c7: Push(CvectorIndex(Stack[-4], 0))
0x3c8: Push(CvectorIndex(Stack[-5], 2))
0x3c9: @ Rotate(Stack[-2], Stack[-1])
0x3ca: Pop(2)
0x3cb: PushEmpty(bool)
0x3cc: Call2 0x604

0x3cd: Pop(0)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3cf: GOTO 0x3d8

0x3d0: Push("head")
0x3d1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3d2: Pop(1)
0x3d3: Push(Stack[-1])
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d5: Push("head")
0x3d6: @ LookAsyncCamera(Stack[-1])
0x3d7: Pop(1)
0x3d8: @ CameraWaitForPlayFinish()
0x3d9: Pop(0)
0x3da: @ ResumeWorld()
0x3db: Pop(0)
0x3dc: Stack[-21] = (bool) 1
0x3dd: Return(); Pop(18)

0x3de: PushEmpty(bool, bool)
0x3df: Push((bool) 1)
0x3e0: @ CameraSwitchToNormal(Stack[-1])
0x3e1: Pop(1)
0x3e2: PushEmpty(bool)
0x3e3: Call2 0x604

0x3e4: Pop(0)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e6: GOTO 0x3ef

0x3e7: Push("head")
0x3e8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3e9: Pop(1)
0x3ea: Push(Stack[-1])
0x3eb: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ec: Push("head")
0x3ed: @ UnlookAsync(Stack[-1])
0x3ee: Pop(1)
0x3ef: Return(); Pop(2)

0x3f0: PushEmpty(int, int, int, int)
0x3f1: Push("voice_common")
0x3f2: @ GetVariable(Stack[-1], Stack[-3])
0x3f3: Pop(1)
0x3f4: Push(Stack[-2])
0x3f5: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x3f6: PushEmpty(bool, object)
0x3f7: Stack[-1] = Stack[-7]
0x3f8: Call2 0x42a

0x3f9: Pop(1)
0x3fa: Pop(1); Push((bool) Stack[-1] == 0)
0x3fb: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3fc: PushEmpty(bool, object)
0x3fd: Stack[-1] = Stack[-7]
0x3fe: Call2 0x44f

0x3ff: Pop(1)
0x400: Pop(1); Push((bool) Stack[-1] == 0)
0x401: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x402: Stack[-6] = (bool) 0
0x403: Return(); Pop(4)

0x404: Push((int) 2)
0x405: @ irand(Stack[-2], Stack[-1])
0x406: Pop(1)
0x407: Push(Stack[-1])
0x408: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x409: Push("voice_common")
0x40a: Push((int) 1)
0x40b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x40c: Push((int) 3)
0x40d: Pop(2); Push(Stack[-2] % Stack[-1]);
0x40e: @ SetVariable(Stack[-2], Stack[-1])
0x40f: Pop(2)
0x410: GOTO 0x415

0x411: Push("voice_common")
0x412: Push((int) 0)
0x413: @ SetVariable(Stack[-2], Stack[-1])
0x414: Pop(2)
0x415: GOTO 0x428

0x416: PushEmpty(bool, object)
0x417: Stack[-1] = Stack[-7]
0x418: Call2 0x44f

0x419: Pop(1)
0x41a: Pop(1); Push((bool) Stack[-1] == 0)
0x41b: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x41c: PushEmpty(bool, object)
0x41d: Stack[-1] = Stack[-7]
0x41e: Call2 0x42a

0x41f: Pop(1)
0x420: Pop(1); Push((bool) Stack[-1] == 0)
0x421: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x422: Stack[-6] = (bool) 0
0x423: Return(); Pop(4)

0x424: Push("voice_common")
0x425: Push((int) 1)
0x426: @ SetVariable(Stack[-2], Stack[-1])
0x427: Pop(2)
0x428: Stack[-6] = (bool) 1
0x429: Return(); Pop(4)

0x42a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x42b: Stack[-5] = "c"
0x42c: Stack[-4] = (int) 0
0x42d: Push((int) 1)
0x42e: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x42f: Push((int) 1)
0x430: Pop(1); Push(Stack[-5] + Stack[-1]);
0x431: Pop(1); Push(Stack[-6] + Stack[-1]);
0x432: @@ HasProperty(Stack[-1], Stack[-4])
0x433: Pop(1)
0x434: Pop(0); Push((bool) Stack[-3] == 0)
0x435: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x436: GOTO 0x43a

0x437: Push((int) 1)
0x438: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x439: GOTO 0x42d

0x43a: Pop(0); Push((bool) Stack[-4] == 0)
0x43b: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43c: Stack[-12] = (bool) 0
0x43d: Return(); Pop(10)

0x43e: Stack[-2] = (int) 0
0x43f: Push((int) 1)
0x440: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x441: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x442: @ irand(Stack[-2], Stack[-4])
0x443: Pop(0)
0x444: Push((int) 1)
0x445: Pop(1); Push(Stack[-3] + Stack[-1]);
0x446: Pop(1); Push(Stack[-6] + Stack[-1]);
0x447: @@ GetProperty(Stack[-1], Stack[-2])
0x448: Pop(1)
0x449: PushEmpty(bool, string)
0x44a: Stack[-1] = Stack[-3]
0x44b: Call2 0x499

0x44c: Stack[-14] = Stack[-2]
0x44d: Pop(2)
0x44e: Return(); Pop(10)

0x44f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x450: Push("d")
0x451: PushEmpty(int)
0x452: Call2 0x50f

0x453: Pop(0)
0x454: Pop(2); Push(Stack[-2] + Stack[-1]);
0x455: Push("m")
0x456: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x457: Stack[-4] = (int) 0
0x458: Push((int) 1)
0x459: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x45a: Push((int) 1)
0x45b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x45c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x45d: @@ HasProperty(Stack[-1], Stack[-4])
0x45e: Pop(1)
0x45f: Pop(0); Push((bool) Stack[-3] == 0)
0x460: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x461: GOTO 0x465

0x462: Push((int) 1)
0x463: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x464: GOTO 0x458

0x465: Pop(0); Push((bool) Stack[-4] == 0)
0x466: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x467: Stack[-12] = (bool) 0
0x468: Return(); Pop(10)

0x469: Stack[-2] = (int) 0
0x46a: Push((int) 1)
0x46b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46d: @ irand(Stack[-2], Stack[-4])
0x46e: Pop(0)
0x46f: Push((int) 1)
0x470: Pop(1); Push(Stack[-3] + Stack[-1]);
0x471: Pop(1); Push(Stack[-6] + Stack[-1]);
0x472: @@ GetProperty(Stack[-1], Stack[-2])
0x473: Pop(1)
0x474: PushEmpty(bool, string)
0x475: Stack[-1] = Stack[-3]
0x476: Call2 0x499

0x477: Stack[-14] = Stack[-2]
0x478: Pop(2)
0x479: Return(); Pop(10)

0x47a: PushEmpty(bool, float, float, bool, float, float)
0x47b: @ lshHasAnimation(Stack[-3], Stack[-7])
0x47c: Pop(0)
0x47d: Push(Stack[-3])
0x47e: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x47f: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x480: Pop(0)
0x481: Push((bool) 0)
0x482: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x483: Pop(1)
0x484: GOTO 0x489

0x485: Push("Can't find lsh animation : ")
0x486: Pop(1); Push(Stack[-1] + Stack[-8]);
0x487: @ Trace(Stack[-1])
0x488: Pop(1)
0x489: Return(); Pop(6)

0x48a: PushEmpty(bool, float, float, bool, float, float)
0x48b: @ lshHasAnimation(Stack[-3], Stack[-8])
0x48c: Pop(0)
0x48d: Push(Stack[-3])
0x48e: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x48f: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x490: Pop(0)
0x491: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x492: Pop(0)
0x493: GOTO 0x498

0x494: Push("Can't find lsh animation : ")
0x495: Pop(1); Push(Stack[-1] + Stack[-9]);
0x496: @ Trace(Stack[-1])
0x497: Pop(1)
0x498: Return(); Pop(6)

0x499: PushEmpty(bool, bool)
0x49a: PushEmpty(bool)
0x49b: Call2 0x604

0x49c: Pop(0)
0x49d: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x49e: @ lshHasSpeech(Stack[-1], Stack[-3])
0x49f: Pop(0)
0x4a0: Push(Stack[-1])
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a2: @ lshPlaySpeech(Stack[-3])
0x4a3: Pop(0)
0x4a4: Stack[-4] = (bool) 1
0x4a5: Return(); Pop(2)

0x4a6: Stack[-4] = (bool) 0
0x4a7: Return(); Pop(2)

0x4a8: PushEmpty(bool)
0x4a9: Call2 0x604

0x4aa: Pop(0)
0x4ab: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4ac: @ lshStopSpeech()
0x4ad: Pop(0)
0x4ae: Return(); Pop(0)

0x4af: PushEmpty(object, object)
0x4b0: @ self(Stack[-1])
0x4b1: Pop(0)
0x4b2: Stack[-3] = Stack[-1]
0x4b3: Return(); Pop(2)

0x4b4: Stack[-1] = 0
0x4b5: PushEmpty(float, float)
0x4b6: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4b7: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4b8: Push((float)0.0)
0x4b9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4bb: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x4bc: Return(); Pop(2)

0x4bd: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4be: Return(); Pop(2)

0x4bf: PushEmpty(int, int)
0x4c0: @ GetVariable(Stack[-3], Stack[-1])
0x4c1: Pop(0)
0x4c2: Stack[-4] = Stack[-1]
0x4c3: Return(); Pop(2)

0x4c4: PushEmpty(object, object)
0x4c5: @ CreateIntVector(Stack[-1])
0x4c6: Pop(0)
0x4c7: @@ add(Stack[-4])
0x4c8: Pop(0)
0x4c9: @@ add(Stack[-3])
0x4ca: Pop(0)
0x4cb: Push((int) 3)
0x4cc: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x4cd: Pop(1)
0x4ce: Return(); Pop(2)

0x4cf: Stack[-1] = 0
0x4d0: PushEmpty(int, int)
0x4d1: PushEmpty(object, string, int)
0x4d2: Stack[-3] = Stack[-7]
0x4d3: Stack[-2] = "money"
0x4d4: Stack[-1] = Stack[-6]
0x4d5: Call2 0x37a

0x4d6: Pop(3)
0x4d7: Push((int) 0)
0x4d8: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x4d9: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4da: Push("Money")
0x4db: @ GetInvItemByName(Stack[-2], Stack[-1])
0x4dc: Pop(1)
0x4dd: PushEmpty(int, int)
0x4de: Stack[-2] = Stack[-3]
0x4df: Stack[-1] = Stack[-5]
0x4e0: Call2 0x4c4

0x4e1: Pop(2)
0x4e2: Return(); Pop(2)

0x4e3: PushEmpty(int, int, bool, int, int, bool)
0x4e4: @@ GetItemID(Stack[-3])
0x4e5: Pop(0)
0x4e6: Push("Category")
0x4e7: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x4e8: Pop(1)
0x4e9: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x4ea: Pop(0)
0x4eb: Pop(0); Push((bool) Stack[-1] == 0)
0x4ec: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4ed: @@ DropItems(Stack[-8], Stack[-7])
0x4ee: Pop(0)
0x4ef: GOTO 0x4f5

0x4f0: PushEmpty(int, int)
0x4f1: Stack[-2] = Stack[-5]
0x4f2: Stack[-1] = Stack[-9]
0x4f3: Call2 0x4c4

0x4f4: Pop(2)
0x4f5: Return(); Pop(6)

0x4f6: PushEmpty(object, object)
0x4f7: @ CreateInvItem(Stack[-1])
0x4f8: Pop(0)
0x4f9: @@ SetItemName(Stack[-4])
0x4fa: Pop(0)
0x4fb: PushEmpty(object, object, int)
0x4fc: Stack[-3] = Stack[-8]
0x4fd: Stack[-2] = Stack[-4]
0x4fe: Stack[-1] = Stack[-6]
0x4ff: Call2 0x4e3

0x500: Pop(3)
0x501: Return(); Pop(2)

0x502: Stack[-1] = 0
0x503: PushEmpty(object, object)
0x504: @ FindActor(Stack[-1], Stack[-4])
0x505: Pop(0)
0x506: Pop(0); Push((bool) Stack[-1] == 0)
0x507: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x508: Stack[-5] = (bool) 0
0x509: Return(); Pop(2)

0x50a: @ Trigger(Stack[-1], Stack[-3])
0x50b: Pop(0)
0x50c: Stack[-5] = (bool) 1
0x50d: Return(); Pop(2)

0x50e: Stack[-1] = 0
0x50f: PushEmpty(float, float)
0x510: @ GetGameTime(Stack[-1])
0x511: Pop(0)
0x512: Push((int) 1)
0x513: PushEmpty(int)
0x514: Push((int) 24)
0x515: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x516: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x517: Return(); Pop(2)

0x518: PushEmpty(string, string)
0x519: Stack[-1] = "idle"
0x51a: Push(Stack[-3])
0x51b: IF (Stack[-1] == 0) GOTO 0x51d; Pop(1)

0x51c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x51d: Stack[-4] = Stack[-1]
0x51e: Return(); Pop(2)

0x51f: PushEmpty(int, bool, int, bool)
0x520: Stack[-2] = (int) 0
0x521: Push("all")
0x522: PushEmpty(string, int)
0x523: Stack[-1] = Stack[-5]
0x524: Call2 0x518

0x525: Pop(1)
0x526: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x527: Pop(2)
0x528: Pop(0); Push((bool) Stack[-1] == 0)
0x529: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x52a: GOTO 0x52e

0x52b: Push((int) 1)
0x52c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x52d: GOTO 0x521

0x52e: Stack[-5] = Stack[-2]
0x52f: Return(); Pop(4)

0x530: PushEmpty()
0x531: Push("playsound")
0x532: Push("giveitem")
0x533: @ TriggerWorld(Stack[-2], Stack[-1])
0x534: Pop(2)
0x535: Return(); Pop(0)

0x536: PushEmpty()
0x537: Push("oob2MariaKabak1")
0x538: Push((int) 1)
0x539: @ SetVariable(Stack[-2], Stack[-1])
0x53a: Pop(2)
0x53b: Return(); Pop(0)

0x53c: PushEmpty()
0x53d: Push("b2q03_1")
0x53e: Push((int) 1)
0x53f: @ SetVariable(Stack[-2], Stack[-1])
0x540: Pop(2)
0x541: PushEmpty()
0x542: Call2 0x59b

0x543: Pop(0)
0x544: PushEmpty()
0x545: Call2 0x5b5

0x546: Pop(0)
0x547: Return(); Pop(0)

0x548: PushEmpty()
0x549: Push("b2q03_1")
0x54a: Push((int) 1000)
0x54b: @ SetVariable(Stack[-2], Stack[-1])
0x54c: Pop(2)
0x54d: PushEmpty()
0x54e: Call2 0x5a8

0x54f: Pop(0)
0x550: PushEmpty(bool, string, string)
0x551: Stack[-2] = "quest_b2_03"
0x552: Stack[-1] = "fail"
0x553: Call2 0x503

0x554: Pop(3)
0x555: Return(); Pop(0)

0x556: PushEmpty()
0x557: Push("recipe5 is given")
0x558: @ Trace(Stack[-1])
0x559: Pop(1)
0x55a: PushEmpty(object, string, int)
0x55b: Stack[-3] = Stack[-5]
0x55c: Stack[-2] = "recipe5"
0x55d: Stack[-1] = (int) 1
0x55e: Call2 0x4f6

0x55f: Pop(3)
0x560: Return(); Pop(0)

0x561: PushEmpty()
0x562: Push("money 5000 is given")
0x563: @ Trace(Stack[-1])
0x564: Pop(1)
0x565: PushEmpty(object, int)
0x566: Stack[-2] = Stack[-4]
0x567: Stack[-1] = (int) 5000
0x568: Call2 0x4d0

0x569: Pop(2)
0x56a: Return(); Pop(0)

0x56b: PushEmpty()
0x56c: PushEmpty(int, string)
0x56d: Stack[-1] = "b2q03"
0x56e: Call2 0x4bf

0x56f: Pop(1)
0x570: Push((int) 1000)
0x571: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x572: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x573: Stack[-2] = (bool) 1
0x574: Return(); Pop(0)

0x575: Stack[-2] = (bool) 0
0x576: Return(); Pop(0)

0x577: PushEmpty()
0x578: PushEmpty(int, string)
0x579: Stack[-1] = "oob2MariaKabak1"
0x57a: Call2 0x4bf

0x57b: Pop(1)
0x57c: Push((int) 0)
0x57d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x57e: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x57f: Stack[-2] = (bool) 1
0x580: Return(); Pop(0)

0x581: Stack[-2] = (bool) 0
0x582: Return(); Pop(0)

0x583: PushEmpty()
0x584: PushEmpty(int, string)
0x585: Stack[-1] = "b2q03_1"
0x586: Call2 0x4bf

0x587: Pop(1)
0x588: Push((int) 0)
0x589: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x58a: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x58b: Stack[-2] = (bool) 1
0x58c: Return(); Pop(0)

0x58d: Stack[-2] = (bool) 0
0x58e: Return(); Pop(0)

0x58f: PushEmpty()
0x590: PushEmpty(int, string)
0x591: Stack[-1] = "b2q03_1"
0x592: Call2 0x4bf

0x593: Pop(1)
0x594: Push((int) 2)
0x595: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x596: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x597: Stack[-2] = (bool) 1
0x598: Return(); Pop(0)

0x599: Stack[-2] = (bool) 0
0x59a: Return(); Pop(0)

0x59b: PushEmpty(object, object)
0x59c: Push((int) 588)
0x59d: Push((int) 2)
0x59e: Push((int) 531074)
0x59f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5a0: Pop(3)
0x5a1: PushEmpty(bool, object, int)
0x5a2: Stack[-2] = Stack[-4]
0x5a3: Stack[-1] = (int) -1
0x5a4: Call2 0x5cf

0x5a5: Pop(3)
0x5a6: Return(); Pop(2)

0x5a7: Stack[-1] = 0
0x5a8: PushEmpty(object, object)
0x5a9: Push((int) 590)
0x5aa: Push((int) 2)
0x5ab: Push((int) 531076)
0x5ac: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5ad: Pop(3)
0x5ae: PushEmpty(bool, object, int)
0x5af: Stack[-2] = Stack[-4]
0x5b0: Stack[-1] = (int) 588
0x5b1: Call2 0x5cf

0x5b2: Pop(3)
0x5b3: Return(); Pop(2)

0x5b4: Stack[-1] = 0
0x5b5: PushEmpty(object, object)
0x5b6: Push((int) 589)
0x5b7: Push((int) 2)
0x5b8: Push((int) 531075)
0x5b9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5ba: Pop(3)
0x5bb: PushEmpty(bool, object, int)
0x5bc: Stack[-2] = Stack[-4]
0x5bd: Stack[-1] = (int) 588
0x5be: Call2 0x5cf

0x5bf: Pop(3)
0x5c0: Return(); Pop(2)

0x5c1: Stack[-1] = 0
0x5c2: PushEmpty(object, object)
0x5c3: @ GetDiaryRoot(Stack[-1])
0x5c4: Pop(0)
0x5c5: Pop(0); Push((bool) Stack[-1] == 0)
0x5c6: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5c7: Push("Can't retrieve diary root")
0x5c8: @ Trace(Stack[-1])
0x5c9: Pop(1)
0x5ca: Stack[-3] = (bool) 0
0x5cb: Return(); Pop(2)

0x5cc: Stack[-3] = Stack[-1]
0x5cd: Return(); Pop(2)

0x5ce: Stack[-1] = 0
0x5cf: PushEmpty(object, object, int, object, object, int)
0x5d0: PushEmpty(object)
0x5d1: Call2 0x5c2

0x5d2: Stack[-4] = Stack[-1]
0x5d3: Pop(1)
0x5d4: @@ Find(Stack[-7], Stack[-2])
0x5d5: Pop(0)
0x5d6: Pop(0); Push((bool) Stack[-2] == 0)
0x5d7: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5d8: Push("Can't find diary parent with id: ")
0x5d9: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5da: @ Trace(Stack[-1])
0x5db: Pop(1)
0x5dc: Stack[-9] = (bool) 0
0x5dd: Return(); Pop(6)

0x5de: @@ AddChild(Stack[-8])
0x5df: Pop(0)
0x5e0: Push((int) 7)
0x5e1: @ SendWorldWndMessage(Stack[-1])
0x5e2: Pop(1)
0x5e3: @@ GetCategory(Stack[-1])
0x5e4: Pop(0)
0x5e5: @ SetDiarySection(Stack[-1])
0x5e6: Pop(0)
0x5e7: Stack[-9] = (bool) 0
0x5e8: Return(); Pop(6)

0x5e9: Stack[-2] = 0
0x5ea: Stack[-3] = 0
0x5eb: PushEmpty(int, int)
0x5ec: Push("branch")
0x5ed: @ GetVariable(Stack[-1], Stack[-2])
0x5ee: Pop(1)
0x5ef: Push((int) 0)
0x5f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f1: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5f2: Stack[-3] = (int) 1
0x5f3: Return(); Pop(2)

0x5f4: GOTO 0x5fa

0x5f5: Push((int) 1)
0x5f6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f8: Stack[-3] = (int) 2
0x5f9: Return(); Pop(2)

0x5fa: Stack[-3] = (int) 3
0x5fb: Return(); Pop(2)

0x5fc: Stack[-1] = (int) 515543
0x5fd: Return(); Pop(0)

0x5fe: Stack[-1] = (int) 502868
0x5ff: Return(); Pop(0)

0x600: Stack[-1] = "ui/NPC_Maria.png"
0x601: Return(); Pop(0)

0x602: Stack[-1] = "ui/NPC_Maria_b.png"
0x603: Return(); Pop(0)

0x604: Stack[-1] = (bool) 1
0x605: Return(); Pop(0)

