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
	Sorrow
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	Agression
	Doubt
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
	ook3BurahIndoor1
	k3q04
	k3q04Promise
	grass combination (good) is given
	grass_combination
	SetItemName
	im_inc
	SetProperty
	hl_inc
	tr_inc
	grass combination (bad) is given
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
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateInvItem (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x15d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xba Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x161 Vars = (string)
		EVENT_6 Op = 0x175 Vars = ()
		EVENT_5 Op = 0x182 Vars = ()
		EVENT_7 Op = 0x1cb Vars = (int)
		EVENT_45 Op = 0x20d Vars = (bool)
		EVENT_0 Op = 0x219 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2a2

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4b6

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4b4

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x4b8

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x4ba

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4a3

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
0x31: Call2 0x3b6

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x2f7

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
0x48: Call2 0x2e6

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
0x56: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x461

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x40b

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Sorrow"
0x63: Call2 0xa4

0x64: Pop(1)
0x65: Push((int) 525635)
0x66: @@ SetMessage(Stack[-1])
0x67: Pop(1)
0x68: @@ ClearReplies()
0x69: Pop(0)
0x6a: Push((int) 529332)
0x6b: Push((int) 30788)
0x6c: Push((int) 30787)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x86

0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral"
0x72: Call2 0xa4

0x73: Pop(1)
0x74: Push((int) 525638)
0x75: @@ SetMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ ClearReplies()
0x78: Pop(0)
0x79: Push((int) 525639)
0x7a: Push((int) -1)
0x7b: Push((int) 26981)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: Push((int) 529336)
0x7f: Push((int) -1)
0x80: Push((int) 30791)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: GOTO 0x86

0x84: Return(); Pop(0)

0x85: GOTO 0x55

0x86: PushEmpty(bool)
0x87: Call2 0x4bc

0x88: Pop(0)
0x89: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8a: @ lshWaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: PushEmpty(string)
0x90: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x91: Call2 0x381

0x92: Pop(1)
0x93: GOTO 0x8a

0x94: GOTO 0xa3

0x95: Push("all")
0x96: Push("idle")
0x97: @ PlayAnimation(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: @ WaitForAnimEnd()
0x9a: Pop(0)
0x9b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: GOTO 0xa3

0x9e: Push("all")
0x9f: Push("idle")
0xa0: @ PlayAnimation(Stack[-2], Stack[-1])
0xa1: Pop(2)
0xa2: GOTO 0x99

0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: PushEmpty(bool)
0xa6: Call2 0x4bc

0xa7: Pop(0)
0xa8: Pop(1); Push((bool) Stack[-1] == 0)
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: Return(); Pop(0)

0xab: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Return(); Pop(0)

0xae: PushEmpty(string, bool)
0xaf: Stack[-2] = Stack[-3]
0xb0: Push("")
0xb1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb3: Stack[-1] = (bool) 0
0xb4: GOTO 0xb6

0xb5: Stack[-1] = (bool) 1
0xb6: Call2 0x391

0xb7: Pop(2)
0xb8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: Push((int) 1)
0xbc: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0xbd: PushEmpty()
0xbe: Call2 0x3af

0xbf: Pop(0)
0xc0: Push((int) 26978)
0xc1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call2 0x41a

0xc7: Pop(2)
0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x427

0xcc: Pop(2)
0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call2 0x444

0xd1: Pop(2)
0xd2: Push((int) 26979)
0xd3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x411

0xd9: Pop(2)
0xda: Push((int) 26977)
0xdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xdd: PushEmpty(bool, object)
0xde: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Call2 0x461

0xe0: Pop(1)
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(object, object)
0xe3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5: Call2 0x40b

0xe6: Pop(2)
0xe7: PushEmpty(string)
0xe8: Stack[-1] = "Sorrow"
0xe9: Call2 0xa4

0xea: Pop(1)
0xeb: Push((int) 525635)
0xec: @@ SetMessage(Stack[-1])
0xed: Pop(1)
0xee: @@ ClearReplies()
0xef: Pop(0)
0xf0: Push((int) 529332)
0xf1: Push((int) 30788)
0xf2: Push((int) 30787)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Neutral"
0xf8: Call2 0xa4

0xf9: Pop(1)
0xfa: Push((int) 525638)
0xfb: @@ SetMessage(Stack[-1])
0xfc: Pop(1)
0xfd: @@ ClearReplies()
0xfe: Pop(0)
0xff: Push((int) 525639)
0x100: Push((int) -1)
0x101: Push((int) 26981)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Push((int) 529336)
0x105: Push((int) -1)
0x106: Push((int) 30791)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Push((int) 42695)
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x10d: Push((int) 30788)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x110: PushEmpty(string)
0x111: Stack[-1] = "Agression"
0x112: Call2 0xa4

0x113: Pop(1)
0x114: Push((int) 529333)
0x115: @@ SetMessage(Stack[-1])
0x116: Pop(1)
0x117: @@ ClearReplies()
0x118: Pop(0)
0x119: Push((int) 540668)
0x11a: Push((int) 42699)
0x11b: Push((int) 42698)
0x11c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(3)
0x11e: Return(); Pop(0)

0x11f: Push((int) 42699)
0x120: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Agression"
0x124: Call2 0xa4

0x125: Pop(1)
0x126: Push((int) 540669)
0x127: @@ SetMessage(Stack[-1])
0x128: Pop(1)
0x129: @@ ClearReplies()
0x12a: Pop(0)
0x12b: Push((int) 529334)
0x12c: Push((int) 30790)
0x12d: Push((int) 30789)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Return(); Pop(0)

0x131: Push((int) 30790)
0x132: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x134: PushEmpty(string)
0x135: Stack[-1] = "Doubt"
0x136: Call2 0xa4

0x137: Pop(1)
0x138: Push((int) 529335)
0x139: @@ SetMessage(Stack[-1])
0x13a: Pop(1)
0x13b: @@ ClearReplies()
0x13c: Pop(0)
0x13d: Push((int) 525636)
0x13e: Push((int) -1)
0x13f: Push((int) 26978)
0x140: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(3)
0x142: Push((int) 525637)
0x143: Push((int) -1)
0x144: Push((int) 26979)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x149: PushEmpty(bool)
0x14a: Call2 0x4bc

0x14b: Pop(0)
0x14c: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14d: @ lshStopAnimation()
0x14e: Pop(0)
0x14f: GOTO 0x152

0x150: @ StopAnimation()
0x151: Pop(0)
0x152: Return(); Pop(0)

0x153: GOTO 0xbb

0x154: Return(); Pop(0)

0x155: PushEmpty()
0x156: PushEmpty(int, object)
0x157: Stack[-1] = Stack[-3]
0x158: Push(-2, 1); TaskCall(0)
0x159: Call2 0x0

0x15a: Pop(-2, 1); TaskReturn
0x15b: Pop(2)
0x15c: Return(); Pop(0)

0x15d: PushEmpty()
0x15e: Call2 0x186

0x15f: Pop(0)
0x160: Return(); Pop(0)

0x161: PushEmpty(bool, bool)
0x162: Push("cleanup")
0x163: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x165: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x166: @ IsLoaded(Stack[-1])
0x167: Pop(0)
0x168: Pop(0); Push((bool) Stack[-1] == 0)
0x169: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16a: PushEmpty(object)
0x16b: Call2 0x3b6

0x16c: Pop(0)
0x16d: @ RemoveActor(Stack[-1])
0x16e: Pop(1)
0x16f: GOTO 0x174

0x170: Push("restore")
0x171: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x173: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x174: Return(); Pop(2)

0x175: Push( Stack[1 + Tasks[-1].StackPointer] )
0x176: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x177: PushEmpty(object)
0x178: Call2 0x3b6

0x179: Pop(0)
0x17a: @ RemoveActor(Stack[-1])
0x17b: Pop(1)
0x17c: @ Hold()
0x17d: Pop(0)
0x17e: PushEmpty()
0x17f: Call2 0x1f1

0x180: Pop(0)
0x181: Return(); Pop(0)

0x182: PushEmpty()
0x183: Call2 0x200

0x184: Pop(0)
0x185: Return(); Pop(0)

0x186: PushEmpty(bool)
0x187: Call2 0x29d

0x188: Pop(0)
0x189: Pop(1); Push((bool) Stack[-1] == 0)
0x18a: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18b: @ Hold()
0x18c: Pop(0)
0x18d: @ GetDirection(Stack[-0])
0x18e: Pop(0)
0x18f: PushEmpty()
0x190: Call2 0x236

0x191: Pop(0)
0x192: GOTO 0x18f

0x193: Return(); Pop(0)

0x194: PushEmpty(object, object)
0x195: Push("player")
0x196: @ FindActor(Stack[-2], Stack[-1])
0x197: Pop(1)
0x198: Pop(0); Push((bool) Stack[-1] == 0)
0x199: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19a: Stack[-3] = (bool) 0
0x19b: Return(); Pop(2)

0x19c: PushEmpty(bool, object)
0x19d: Stack[-1] = Stack[-3]
0x19e: Call2 0x294

0x19f: Stack[-5] = Stack[-2]
0x1a0: Pop(2)
0x1a1: Return(); Pop(2)

0x1a2: Stack[-1] = 0
0x1a3: Push(CvectorIndex(Stack[-0], 0))
0x1a4: Push(CvectorIndex(Stack[-0], 2))
0x1a5: @ RotateAsync(Stack[-2], Stack[-1])
0x1a6: Pop(2)
0x1a7: Return(); Pop(0)

0x1a8: PushEmpty(object, bool, object, bool)
0x1a9: Push("player")
0x1aa: @ FindActor(Stack[-3], Stack[-1])
0x1ab: Pop(1)
0x1ac: Pop(0); Push((bool) Stack[-2] == 0)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ae: Stack[-5] = (bool) 0
0x1af: Return(); Pop(4)

0x1b0: PushEmpty(float, object)
0x1b1: Stack[-1] = Stack[-4]
0x1b2: Call2 0x282

0x1b3: Pop(1)
0x1b4: Push((float)90000.0)
0x1b5: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b7: Stack[-5] = (bool) 0
0x1b8: Return(); Pop(4)

0x1b9: @ CanSee(Stack[-1], Stack[-2])
0x1ba: Pop(0)
0x1bb: Stack[-5] = Stack[-1]
0x1bc: Return(); Pop(4)

0x1bd: Stack[-2] = 0
0x1be: PushEmpty(float, float)
0x1bf: Push((int) 8)
0x1c0: Push((int) 16)
0x1c1: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1c2: Pop(2)
0x1c3: Push((int) 10)
0x1c4: @ SetTimer(Stack[-1], Stack[-2])
0x1c5: Pop(1)
0x1c6: Return(); Pop(2)

0x1c7: Push((int) 10)
0x1c8: @ KillTimer(Stack[-1])
0x1c9: Pop(1)
0x1ca: Return(); Pop(0)

0x1cb: PushEmpty()
0x1cc: Push((int) 10)
0x1cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1cf: PushEmpty()
0x1d0: Call2 0x1c7

0x1d1: Pop(0)
0x1d2: PushEmpty(bool)
0x1d3: Stack[-1] = (bool) 0
0x1d4: PushEmpty(bool)
0x1d5: Call2 0x29d

0x1d6: Pop(0)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d8: PushEmpty(bool)
0x1d9: Call2 0x1a8

0x1da: Pop(0)
0x1db: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1dc: Stack[-1] = (bool) 1
0x1dd: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1de: PushEmpty(bool)
0x1df: Call2 0x194

0x1e0: Pop(0)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e2: PushEmpty(bool, object)
0x1e3: PushEmpty(object)
0x1e4: Call2 0x3b6

0x1e5: Stack[-2] = Stack[-1]
0x1e6: Pop(1)
0x1e7: Call2 0x331

0x1e8: Pop(2)
0x1e9: GOTO 0x1f0

0x1ea: PushEmpty()
0x1eb: Call2 0x1a3

0x1ec: Pop(0)
0x1ed: PushEmpty()
0x1ee: Call2 0x1be

0x1ef: Pop(0)
0x1f0: Return(); Pop(0)

0x1f1: PushEmpty()
0x1f2: Call2 0x27d

0x1f3: Pop(0)
0x1f4: PushEmpty()
0x1f5: Call2 0x1c7

0x1f6: Pop(0)
0x1f7: @ lshStopSpeech()
0x1f8: Pop(0)
0x1f9: @ lshStopAnimation()
0x1fa: Pop(0)
0x1fb: @ StopAsync()
0x1fc: Pop(0)
0x1fd: @ Hold()
0x1fe: Pop(0)
0x1ff: Return(); Pop(0)

0x200: @ StopGroup0()
0x201: Pop(0)
0x202: PushEmpty()
0x203: Call2 0x1c7

0x204: Pop(0)
0x205: PushEmpty(string)
0x206: Stack[-1] = "Neutral"
0x207: Call2 0x381

0x208: Pop(1)
0x209: PushEmpty()
0x20a: Call2 0x1be

0x20b: Pop(0)
0x20c: Return(); Pop(0)

0x20d: PushEmpty()
0x20e: Push(Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x210: PushEmpty()
0x211: Call2 0x1be

0x212: Pop(0)
0x213: GOTO 0x218

0x214: PushEmpty(string)
0x215: Stack[-1] = "Neutral"
0x216: Call2 0x381

0x217: Pop(1)
0x218: Return(); Pop(0)

0x219: PushEmpty(bool, bool)
0x21a: @ IsOverrideActive(Stack[-1])
0x21b: Pop(0)
0x21c: Pop(0); Push((bool) Stack[-1] == 0)
0x21d: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x21e: EventDisable(0)
0x21f: PushEmpty()
0x220: Call2 0x27d

0x221: Pop(0)
0x222: PushEmpty(bool, object)
0x223: Stack[-1] = Stack[-5]
0x224: Call2 0x294

0x225: Pop(2)
0x226: EventEnable(0)
0x227: PushEmpty(object)
0x228: Stack[-1] = Stack[-4]
0x229: Call2 0x155

0x22a: Pop(1)
0x22b: PushEmpty(string)
0x22c: Stack[-1] = "Neutral"
0x22d: Call2 0x381

0x22e: Pop(1)
0x22f: PushEmpty()
0x230: Call2 0x1c7

0x231: Pop(0)
0x232: PushEmpty()
0x233: Call2 0x1be

0x234: Pop(0)
0x235: Return(); Pop(2)

0x236: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x237: @ WaitForAnimEnd()
0x238: Pop(0)
0x239: PushEmpty(bool)
0x23a: Call2 0x29d

0x23b: Pop(0)
0x23c: Pop(1); Push((bool) Stack[-1] == 0)
0x23d: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23e: Return(); Pop(12)

0x23f: PushEmpty(int)
0x240: Call2 0x3fa

0x241: Stack[-7] = Stack[-1]
0x242: Pop(1)
0x243: Stack[-5] = (int) 0
0x244: PushEmpty(bool)
0x245: Stack[-1] = (bool) 0
0x246: Push((int) 5)
0x247: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x248: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x249: PushEmpty(bool)
0x24a: Call2 0x29d

0x24b: Pop(0)
0x24c: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24d: Stack[-1] = (bool) 1
0x24e: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x24f: Pop(0); Push((bool) Stack[-6] == 0)
0x250: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x251: Push((int) 3)
0x252: @ Sleep(Stack[-1], Stack[-5])
0x253: Pop(1)
0x254: Pop(0); Push((bool) Stack[-4] == 0)
0x255: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x256: GOTO 0x278

0x257: GOTO 0x26d

0x258: @ irand(Stack[-3], Stack[-6])
0x259: Pop(0)
0x25a: Push((int) 5)
0x25b: @ irand(Stack[-3], Stack[-1])
0x25c: Pop(1)
0x25d: Push((int) 0)
0x25e: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x260: Stack[-3] = (int) 0
0x261: Push("all")
0x262: PushEmpty(string, int)
0x263: Stack[-1] = Stack[-6]
0x264: Call2 0x3f3

0x265: Pop(1)
0x266: @ PlayAnimation(Stack[-2], Stack[-1])
0x267: Pop(2)
0x268: @ WaitForAnimEnd(Stack[-1])
0x269: Pop(0)
0x26a: Pop(0); Push((bool) Stack[-1] == 0)
0x26b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26c: GOTO 0x278

0x26d: PushEmpty(bool)
0x26e: Call2 0x27b

0x26f: Pop(0)
0x270: Pop(1); Push((bool) Stack[-1] == 0)
0x271: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x272: GOTO 0x278

0x273: @ ResetAAS()
0x274: Pop(0)
0x275: Push((int) 1)
0x276: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x277: GOTO 0x244

0x278: @ ResetAAS()
0x279: Pop(0)
0x27a: Return(); Pop(12)

0x27b: Stack[-1] = (bool) 1
0x27c: Return(); Pop(0)

0x27d: @ StopAnimation()
0x27e: Pop(0)
0x27f: @ StopGroup0()
0x280: Pop(0)
0x281: Return(); Pop(0)

0x282: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x283: @ GetPosition(Stack[-3])
0x284: Pop(0)
0x285: @@ GetPosition(Stack[-2])
0x286: Pop(0)
0x287: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x288: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x289: Return(); Pop(6)

0x28a: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x28b: @ GetPosition(Stack[-3])
0x28c: Pop(0)
0x28d: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x28e: Push(CvectorIndex(Stack[-2], 0))
0x28f: Push(CvectorIndex(Stack[-3], 2))
0x290: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x291: Pop(2)
0x292: Stack[-8] = Stack[-1]
0x293: Return(); Pop(6)

0x294: PushEmpty(cvector, cvector)
0x295: @@ GetPosition(Stack[-1])
0x296: Pop(0)
0x297: PushEmpty(bool, cvector)
0x298: Stack[-1] = Stack[-3]
0x299: Call2 0x28a

0x29a: Stack[-6] = Stack[-2]
0x29b: Pop(2)
0x29c: Return(); Pop(2)

0x29d: PushEmpty(bool, bool)
0x29e: @ IsLoaded(Stack[-1])
0x29f: Pop(0)
0x2a0: Stack[-3] = Stack[-1]
0x2a1: Return(); Pop(2)

0x2a2: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2a3: @@ GetPosition(Stack[-8])
0x2a4: Pop(0)
0x2a5: @@ GetEyesHeight(Stack[-9])
0x2a6: Pop(0)
0x2a7: Push(CvectorIndex(Stack[-8], 1))
0x2a8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a9: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2aa: @ GetPosition(Stack[-7])
0x2ab: Pop(0)
0x2ac: @ GetEyesHeight(Stack[-9])
0x2ad: Pop(0)
0x2ae: Push(CvectorIndex(Stack[-7], 1))
0x2af: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2b1: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2b2: Push(CvectorIndex(Stack[-6], 1))
0x2b3: Stack[-1] = (int) 0
0x2b4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2b5: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2b6: Pop(1); Push(Sqrt(Stack[-1]))
0x2b7: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2b8: Stack[-5] = -Stack[-6]; Pop(0);
0x2b9: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2ba: PushEmpty(cvector, cvector)
0x2bb: Push(CVector(0.0, 1.0, 0.0))
0x2bc: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2bd: Call2 0x3bc

0x2be: Pop(1)
0x2bf: Push((int) 25)
0x2c0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2c1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c2: Push(CVector(0.0, 10.0, 0.0))
0x2c3: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2c4: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2c5: @ IsOverrideActive(Stack[-2])
0x2c6: Pop(0)
0x2c7: Push(Stack[-2])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c9: Stack[-21] = (bool) 0
0x2ca: Return(); Pop(18)

0x2cb: @ StopWorld()
0x2cc: Pop(0)
0x2cd: @ CameraTransit(Stack[-3], Stack[-5])
0x2ce: Pop(0)
0x2cf: Push(CvectorIndex(Stack[-4], 0))
0x2d0: Push(CvectorIndex(Stack[-5], 2))
0x2d1: @ Rotate(Stack[-2], Stack[-1])
0x2d2: Pop(2)
0x2d3: PushEmpty(bool)
0x2d4: Call2 0x4bc

0x2d5: Pop(0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: GOTO 0x2e0

0x2d8: Push("head")
0x2d9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2da: Pop(1)
0x2db: Push(Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2dd: Push("head")
0x2de: @ LookAsyncCamera(Stack[-1])
0x2df: Pop(1)
0x2e0: @ CameraWaitForPlayFinish()
0x2e1: Pop(0)
0x2e2: @ ResumeWorld()
0x2e3: Pop(0)
0x2e4: Stack[-21] = (bool) 1
0x2e5: Return(); Pop(18)

0x2e6: PushEmpty(bool, bool)
0x2e7: @ CameraSwitchToNormal()
0x2e8: Pop(0)
0x2e9: PushEmpty(bool)
0x2ea: Call2 0x4bc

0x2eb: Pop(0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ed: GOTO 0x2f6

0x2ee: Push("head")
0x2ef: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f0: Pop(1)
0x2f1: Push(Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f3: Push("head")
0x2f4: @ UnlookAsync(Stack[-1])
0x2f5: Pop(1)
0x2f6: Return(); Pop(2)

0x2f7: PushEmpty(int, int, int, int)
0x2f8: Push("voice_common")
0x2f9: @ GetVariable(Stack[-1], Stack[-3])
0x2fa: Pop(1)
0x2fb: Push(Stack[-2])
0x2fc: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x2fd: PushEmpty(bool, object)
0x2fe: Stack[-1] = Stack[-7]
0x2ff: Call2 0x331

0x300: Pop(1)
0x301: Pop(1); Push((bool) Stack[-1] == 0)
0x302: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x303: PushEmpty(bool, object)
0x304: Stack[-1] = Stack[-7]
0x305: Call2 0x356

0x306: Pop(1)
0x307: Pop(1); Push((bool) Stack[-1] == 0)
0x308: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x309: Stack[-6] = (bool) 0
0x30a: Return(); Pop(4)

0x30b: Push((int) 2)
0x30c: @ irand(Stack[-2], Stack[-1])
0x30d: Pop(1)
0x30e: Push(Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x310: Push("voice_common")
0x311: Push((int) 1)
0x312: Pop(1); Push(Stack[-4] + Stack[-1]);
0x313: Push((int) 3)
0x314: Pop(2); Push(Stack[-2] % Stack[-1]);
0x315: @ SetVariable(Stack[-2], Stack[-1])
0x316: Pop(2)
0x317: GOTO 0x31c

0x318: Push("voice_common")
0x319: Push((int) 0)
0x31a: @ SetVariable(Stack[-2], Stack[-1])
0x31b: Pop(2)
0x31c: GOTO 0x32f

0x31d: PushEmpty(bool, object)
0x31e: Stack[-1] = Stack[-7]
0x31f: Call2 0x356

0x320: Pop(1)
0x321: Pop(1); Push((bool) Stack[-1] == 0)
0x322: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x323: PushEmpty(bool, object)
0x324: Stack[-1] = Stack[-7]
0x325: Call2 0x331

0x326: Pop(1)
0x327: Pop(1); Push((bool) Stack[-1] == 0)
0x328: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x329: Stack[-6] = (bool) 0
0x32a: Return(); Pop(4)

0x32b: Push("voice_common")
0x32c: Push((int) 1)
0x32d: @ SetVariable(Stack[-2], Stack[-1])
0x32e: Pop(2)
0x32f: Stack[-6] = (bool) 1
0x330: Return(); Pop(4)

0x331: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x332: Stack[-5] = "c"
0x333: Stack[-4] = (int) 0
0x334: Push((int) 1)
0x335: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x336: Push((int) 1)
0x337: Pop(1); Push(Stack[-5] + Stack[-1]);
0x338: Pop(1); Push(Stack[-6] + Stack[-1]);
0x339: @@ HasProperty(Stack[-1], Stack[-4])
0x33a: Pop(1)
0x33b: Pop(0); Push((bool) Stack[-3] == 0)
0x33c: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33d: GOTO 0x341

0x33e: Push((int) 1)
0x33f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x340: GOTO 0x334

0x341: Pop(0); Push((bool) Stack[-4] == 0)
0x342: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x343: Stack[-12] = (bool) 0
0x344: Return(); Pop(10)

0x345: Stack[-2] = (int) 0
0x346: Push((int) 1)
0x347: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x348: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x349: @ irand(Stack[-2], Stack[-4])
0x34a: Pop(0)
0x34b: Push((int) 1)
0x34c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x34d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x34e: @@ GetProperty(Stack[-1], Stack[-2])
0x34f: Pop(1)
0x350: PushEmpty(bool, string)
0x351: Stack[-1] = Stack[-3]
0x352: Call2 0x3a0

0x353: Stack[-14] = Stack[-2]
0x354: Pop(2)
0x355: Return(); Pop(10)

0x356: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x357: Push("d")
0x358: PushEmpty(int)
0x359: Call2 0x3ea

0x35a: Pop(0)
0x35b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x35c: Push("m")
0x35d: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x35e: Stack[-4] = (int) 0
0x35f: Push((int) 1)
0x360: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x361: Push((int) 1)
0x362: Pop(1); Push(Stack[-5] + Stack[-1]);
0x363: Pop(1); Push(Stack[-6] + Stack[-1]);
0x364: @@ HasProperty(Stack[-1], Stack[-4])
0x365: Pop(1)
0x366: Pop(0); Push((bool) Stack[-3] == 0)
0x367: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x368: GOTO 0x36c

0x369: Push((int) 1)
0x36a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x36b: GOTO 0x35f

0x36c: Pop(0); Push((bool) Stack[-4] == 0)
0x36d: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36e: Stack[-12] = (bool) 0
0x36f: Return(); Pop(10)

0x370: Stack[-2] = (int) 0
0x371: Push((int) 1)
0x372: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x374: @ irand(Stack[-2], Stack[-4])
0x375: Pop(0)
0x376: Push((int) 1)
0x377: Pop(1); Push(Stack[-3] + Stack[-1]);
0x378: Pop(1); Push(Stack[-6] + Stack[-1]);
0x379: @@ GetProperty(Stack[-1], Stack[-2])
0x37a: Pop(1)
0x37b: PushEmpty(bool, string)
0x37c: Stack[-1] = Stack[-3]
0x37d: Call2 0x3a0

0x37e: Stack[-14] = Stack[-2]
0x37f: Pop(2)
0x380: Return(); Pop(10)

0x381: PushEmpty(bool, float, float, bool, float, float)
0x382: @ lshHasAnimation(Stack[-3], Stack[-7])
0x383: Pop(0)
0x384: Push(Stack[-3])
0x385: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x386: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x387: Pop(0)
0x388: Push((bool) 0)
0x389: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x38a: Pop(1)
0x38b: GOTO 0x390

0x38c: Push("Can't find lsh animation : ")
0x38d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x38e: @ Trace(Stack[-1])
0x38f: Pop(1)
0x390: Return(); Pop(6)

0x391: PushEmpty(bool, float, float, bool, float, float)
0x392: @ lshHasAnimation(Stack[-3], Stack[-8])
0x393: Pop(0)
0x394: Push(Stack[-3])
0x395: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x396: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x397: Pop(0)
0x398: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x399: Pop(0)
0x39a: GOTO 0x39f

0x39b: Push("Can't find lsh animation : ")
0x39c: Pop(1); Push(Stack[-1] + Stack[-9]);
0x39d: @ Trace(Stack[-1])
0x39e: Pop(1)
0x39f: Return(); Pop(6)

0x3a0: PushEmpty(bool, bool)
0x3a1: PushEmpty(bool)
0x3a2: Call2 0x4bc

0x3a3: Pop(0)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3a5: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3a6: Pop(0)
0x3a7: Push(Stack[-1])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3a9: @ lshPlaySpeech(Stack[-3])
0x3aa: Pop(0)
0x3ab: Stack[-4] = (bool) 1
0x3ac: Return(); Pop(2)

0x3ad: Stack[-4] = (bool) 0
0x3ae: Return(); Pop(2)

0x3af: PushEmpty(bool)
0x3b0: Call2 0x4bc

0x3b1: Pop(0)
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b3: @ lshStopSpeech()
0x3b4: Pop(0)
0x3b5: Return(); Pop(0)

0x3b6: PushEmpty(object, object)
0x3b7: @ self(Stack[-1])
0x3b8: Pop(0)
0x3b9: Stack[-3] = Stack[-1]
0x3ba: Return(); Pop(2)

0x3bb: Stack[-1] = 0
0x3bc: PushEmpty(float, float)
0x3bd: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3be: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3bf: Push((float)0.0)
0x3c0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c2: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3c3: Return(); Pop(2)

0x3c4: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3c5: Return(); Pop(2)

0x3c6: PushEmpty(int, int)
0x3c7: @ GetVariable(Stack[-3], Stack[-1])
0x3c8: Pop(0)
0x3c9: Stack[-4] = Stack[-1]
0x3ca: Return(); Pop(2)

0x3cb: PushEmpty(object, object)
0x3cc: @ CreateIntVector(Stack[-1])
0x3cd: Pop(0)
0x3ce: @@ add(Stack[-4])
0x3cf: Pop(0)
0x3d0: @@ add(Stack[-3])
0x3d1: Pop(0)
0x3d2: Push((int) 3)
0x3d3: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x3d4: Pop(1)
0x3d5: Return(); Pop(2)

0x3d6: Stack[-1] = 0
0x3d7: PushEmpty(int, int, bool, int, int, bool)
0x3d8: @@ GetItemID(Stack[-3])
0x3d9: Pop(0)
0x3da: Push("Category")
0x3db: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x3dc: Pop(1)
0x3dd: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x3de: Pop(0)
0x3df: Pop(0); Push((bool) Stack[-1] == 0)
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e1: @@ DropItems(Stack[-8], Stack[-7])
0x3e2: Pop(0)
0x3e3: GOTO 0x3e9

0x3e4: PushEmpty(int, int)
0x3e5: Stack[-2] = Stack[-5]
0x3e6: Stack[-1] = Stack[-9]
0x3e7: Call2 0x3cb

0x3e8: Pop(2)
0x3e9: Return(); Pop(6)

0x3ea: PushEmpty(float, float)
0x3eb: @ GetGameTime(Stack[-1])
0x3ec: Pop(0)
0x3ed: Push((int) 1)
0x3ee: PushEmpty(int)
0x3ef: Push((int) 24)
0x3f0: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3f1: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3f2: Return(); Pop(2)

0x3f3: PushEmpty(string, string)
0x3f4: Stack[-1] = "idle"
0x3f5: Push(Stack[-3])
0x3f6: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f7: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3f8: Stack[-4] = Stack[-1]
0x3f9: Return(); Pop(2)

0x3fa: PushEmpty(int, bool, int, bool)
0x3fb: Stack[-2] = (int) 0
0x3fc: Push("all")
0x3fd: PushEmpty(string, int)
0x3fe: Stack[-1] = Stack[-5]
0x3ff: Call2 0x3f3

0x400: Pop(1)
0x401: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x402: Pop(2)
0x403: Pop(0); Push((bool) Stack[-1] == 0)
0x404: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x405: GOTO 0x409

0x406: Push((int) 1)
0x407: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x408: GOTO 0x3fc

0x409: Stack[-5] = Stack[-2]
0x40a: Return(); Pop(4)

0x40b: PushEmpty()
0x40c: Push("ook3BurahIndoor1")
0x40d: Push((int) 1)
0x40e: @ SetVariable(Stack[-2], Stack[-1])
0x40f: Pop(2)
0x410: Return(); Pop(0)

0x411: PushEmpty()
0x412: Push("k3q04")
0x413: Push((int) 3)
0x414: @ SetVariable(Stack[-2], Stack[-1])
0x415: Pop(2)
0x416: PushEmpty()
0x417: Call2 0x46d

0x418: Pop(0)
0x419: Return(); Pop(0)

0x41a: PushEmpty()
0x41b: Push("k3q04")
0x41c: Push((int) 3)
0x41d: @ SetVariable(Stack[-2], Stack[-1])
0x41e: Pop(2)
0x41f: Push("k3q04Promise")
0x420: Push((int) 1)
0x421: @ SetVariable(Stack[-2], Stack[-1])
0x422: Pop(2)
0x423: PushEmpty()
0x424: Call2 0x46d

0x425: Pop(0)
0x426: Return(); Pop(0)

0x427: PushEmpty(object, object)
0x428: Push("grass combination (good) is given")
0x429: @ Trace(Stack[-1])
0x42a: Pop(1)
0x42b: @ CreateInvItem(Stack[-1])
0x42c: Pop(0)
0x42d: Push("grass_combination")
0x42e: @@ SetItemName(Stack[-1])
0x42f: Pop(1)
0x430: Push("im_inc")
0x431: Push((float)0.4)
0x432: @@ SetProperty(Stack[-2], Stack[-1])
0x433: Pop(2)
0x434: Push("hl_inc")
0x435: Push((float)-0.01)
0x436: @@ SetProperty(Stack[-2], Stack[-1])
0x437: Pop(2)
0x438: Push("tr_inc")
0x439: Push((float)0.03)
0x43a: @@ SetProperty(Stack[-2], Stack[-1])
0x43b: Pop(2)
0x43c: PushEmpty(object, object, int)
0x43d: Stack[-3] = Stack[-7]
0x43e: Stack[-2] = Stack[-4]
0x43f: Stack[-1] = (int) 1
0x440: Call2 0x3d7

0x441: Pop(3)
0x442: Return(); Pop(2)

0x443: Stack[-1] = 0
0x444: PushEmpty(object, object)
0x445: Push("grass combination (bad) is given")
0x446: @ Trace(Stack[-1])
0x447: Pop(1)
0x448: @ CreateInvItem(Stack[-1])
0x449: Pop(0)
0x44a: Push("grass_combination")
0x44b: @@ SetItemName(Stack[-1])
0x44c: Pop(1)
0x44d: Push("im_inc")
0x44e: Push((float)0.2)
0x44f: @@ SetProperty(Stack[-2], Stack[-1])
0x450: Pop(2)
0x451: Push("hl_inc")
0x452: Push((float)-0.08)
0x453: @@ SetProperty(Stack[-2], Stack[-1])
0x454: Pop(2)
0x455: Push("tr_inc")
0x456: Push((float)0.12)
0x457: @@ SetProperty(Stack[-2], Stack[-1])
0x458: Pop(2)
0x459: PushEmpty(object, object, int)
0x45a: Stack[-3] = Stack[-7]
0x45b: Stack[-2] = Stack[-4]
0x45c: Stack[-1] = (int) 1
0x45d: Call2 0x3d7

0x45e: Pop(3)
0x45f: Return(); Pop(2)

0x460: Stack[-1] = 0
0x461: PushEmpty()
0x462: PushEmpty(int, string)
0x463: Stack[-1] = "ook3BurahIndoor1"
0x464: Call2 0x3c6

0x465: Pop(1)
0x466: Push((int) 0)
0x467: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x468: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x469: Stack[-2] = (bool) 1
0x46a: Return(); Pop(0)

0x46b: Stack[-2] = (bool) 0
0x46c: Return(); Pop(0)

0x46d: PushEmpty(object, object)
0x46e: Push((int) 357)
0x46f: Push((int) 2)
0x470: Push((int) 525657)
0x471: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x472: Pop(3)
0x473: PushEmpty(bool, object, int)
0x474: Stack[-2] = Stack[-4]
0x475: Stack[-1] = (int) 354
0x476: Call2 0x487

0x477: Pop(3)
0x478: Return(); Pop(2)

0x479: Stack[-1] = 0
0x47a: PushEmpty(object, object)
0x47b: @ GetDiaryRoot(Stack[-1])
0x47c: Pop(0)
0x47d: Pop(0); Push((bool) Stack[-1] == 0)
0x47e: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x47f: Push("Can't retrieve diary root")
0x480: @ Trace(Stack[-1])
0x481: Pop(1)
0x482: Stack[-3] = (bool) 0
0x483: Return(); Pop(2)

0x484: Stack[-3] = Stack[-1]
0x485: Return(); Pop(2)

0x486: Stack[-1] = 0
0x487: PushEmpty(object, object, int, object, object, int)
0x488: PushEmpty(object)
0x489: Call2 0x47a

0x48a: Stack[-4] = Stack[-1]
0x48b: Pop(1)
0x48c: @@ Find(Stack[-7], Stack[-2])
0x48d: Pop(0)
0x48e: Pop(0); Push((bool) Stack[-2] == 0)
0x48f: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x490: Push("Can't find diary parent with id: ")
0x491: Pop(1); Push(Stack[-1] + Stack[-8]);
0x492: @ Trace(Stack[-1])
0x493: Pop(1)
0x494: Stack[-9] = (bool) 0
0x495: Return(); Pop(6)

0x496: @@ AddChild(Stack[-8])
0x497: Pop(0)
0x498: Push((int) 7)
0x499: @ SendWorldWndMessage(Stack[-1])
0x49a: Pop(1)
0x49b: @@ GetCategory(Stack[-1])
0x49c: Pop(0)
0x49d: @ SetDiarySection(Stack[-1])
0x49e: Pop(0)
0x49f: Stack[-9] = (bool) 0
0x4a0: Return(); Pop(6)

0x4a1: Stack[-2] = 0
0x4a2: Stack[-3] = 0
0x4a3: PushEmpty(int, int)
0x4a4: Push("branch")
0x4a5: @ GetVariable(Stack[-1], Stack[-2])
0x4a6: Pop(1)
0x4a7: Push((int) 0)
0x4a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4aa: Stack[-3] = (int) 1
0x4ab: Return(); Pop(2)

0x4ac: GOTO 0x4b2

0x4ad: Push((int) 1)
0x4ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4af: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4b0: Stack[-3] = (int) 2
0x4b1: Return(); Pop(2)

0x4b2: Stack[-3] = (int) 3
0x4b3: Return(); Pop(2)

0x4b4: Stack[-1] = (int) 515592
0x4b5: Return(); Pop(0)

0x4b6: Stack[-1] = (int) 511961
0x4b7: Return(); Pop(0)

0x4b8: Stack[-1] = "ui/NPC_Burah.png"
0x4b9: Return(); Pop(0)

0x4ba: Stack[-1] = "ui/NPC_Burah_b.png"
0x4bb: Return(); Pop(0)

0x4bc: Stack[-1] = (bool) 1
0x4bd: Return(); Pop(0)

