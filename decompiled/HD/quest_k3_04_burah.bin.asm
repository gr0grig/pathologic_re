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
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateInvItem (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x17b
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbf Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x17f Vars = (string)
		EVENT_6 Op = 0x193 Vars = ()
		EVENT_5 Op = 0x1a0 Vars = ()
		EVENT_7 Op = 0x1e9 Vars = (int)
		EVENT_45 Op = 0x22b Vars = (bool)
		EVENT_0 Op = 0x237 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2c0

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4d6

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4d4

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x4d8

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x4da

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4c3

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
0x31: Call2 0x3d6

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x317

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
0x48: Call2 0x305

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
0x56: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x481

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x42b

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Sorrow"
0x63: Call2 0xa9

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
0x6f: Push((int) 540664)
0x70: Push((int) 42695)
0x71: Push((int) 42694)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x8b

0x75: PushEmpty(string)
0x76: Stack[-1] = "Neutral"
0x77: Call2 0xa9

0x78: Pop(1)
0x79: Push((int) 525638)
0x7a: @@ SetMessage(Stack[-1])
0x7b: Pop(1)
0x7c: @@ ClearReplies()
0x7d: Pop(0)
0x7e: Push((int) 525639)
0x7f: Push((int) -1)
0x80: Push((int) 26981)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: Push((int) 529336)
0x84: Push((int) -1)
0x85: Push((int) 30791)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: GOTO 0x8b

0x89: Return(); Pop(0)

0x8a: GOTO 0x55

0x8b: PushEmpty(bool)
0x8c: Call2 0x4dc

0x8d: Pop(0)
0x8e: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x8f: @ lshWaitForAnimEnd()
0x90: Pop(0)
0x91: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: GOTO 0x99

0x94: PushEmpty(string)
0x95: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x96: Call2 0x3a1

0x97: Pop(1)
0x98: GOTO 0x8f

0x99: GOTO 0xa8

0x9a: Push("all")
0x9b: Push("idle")
0x9c: @ PlayAnimation(Stack[-2], Stack[-1])
0x9d: Pop(2)
0x9e: @ WaitForAnimEnd()
0x9f: Pop(0)
0xa0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa1: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa2: GOTO 0xa8

0xa3: Push("all")
0xa4: Push("idle")
0xa5: @ PlayAnimation(Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: GOTO 0x9e

0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: PushEmpty(bool)
0xab: Call2 0x4dc

0xac: Pop(0)
0xad: Pop(1); Push((bool) Stack[-1] == 0)
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: Return(); Pop(0)

0xb0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: Return(); Pop(0)

0xb3: PushEmpty(string, bool)
0xb4: Stack[-2] = Stack[-3]
0xb5: Push("")
0xb6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb8: Stack[-1] = (bool) 0
0xb9: GOTO 0xbb

0xba: Stack[-1] = (bool) 1
0xbb: Call2 0x3b1

0xbc: Pop(2)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0xc2: PushEmpty()
0xc3: Call2 0x3cf

0xc4: Pop(0)
0xc5: Push((int) 26978)
0xc6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x43a

0xcc: Pop(2)
0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call2 0x447

0xd1: Pop(2)
0xd2: PushEmpty(object, object)
0xd3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd5: Call2 0x464

0xd6: Pop(2)
0xd7: Push((int) 26979)
0xd8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd9: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xda: PushEmpty(object, object)
0xdb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdd: Call2 0x431

0xde: Pop(2)
0xdf: Push((int) 26977)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0xe2: PushEmpty(bool, object)
0xe3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Call2 0x481

0xe5: Pop(1)
0xe6: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xe7: PushEmpty(object, object)
0xe8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xea: Call2 0x42b

0xeb: Pop(2)
0xec: PushEmpty(string)
0xed: Stack[-1] = "Sorrow"
0xee: Call2 0xa9

0xef: Pop(1)
0xf0: Push((int) 525635)
0xf1: @@ SetMessage(Stack[-1])
0xf2: Pop(1)
0xf3: @@ ClearReplies()
0xf4: Pop(0)
0xf5: Push((int) 529332)
0xf6: Push((int) 30788)
0xf7: Push((int) 30787)
0xf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9: Pop(3)
0xfa: Push((int) 540664)
0xfb: Push((int) 42695)
0xfc: Push((int) 42694)
0xfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe: Pop(3)
0xff: Return(); Pop(0)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral"
0x102: Call2 0xa9

0x103: Pop(1)
0x104: Push((int) 525638)
0x105: @@ SetMessage(Stack[-1])
0x106: Pop(1)
0x107: @@ ClearReplies()
0x108: Pop(0)
0x109: Push((int) 525639)
0x10a: Push((int) -1)
0x10b: Push((int) 26981)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: Push((int) 529336)
0x10f: Push((int) -1)
0x110: Push((int) 30791)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Return(); Pop(0)

0x114: Push((int) 42695)
0x115: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x117: PushEmpty(string)
0x118: Stack[-1] = "Sorrow"
0x119: Call2 0xa9

0x11a: Pop(1)
0x11b: Push((int) 540665)
0x11c: @@ SetMessage(Stack[-1])
0x11d: Pop(1)
0x11e: @@ ClearReplies()
0x11f: Pop(0)
0x120: Push((int) 540666)
0x121: Push((int) 30788)
0x122: Push((int) 42696)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Push((int) 540667)
0x126: Push((int) 30790)
0x127: Push((int) 42697)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: Return(); Pop(0)

0x12b: Push((int) 30788)
0x12c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x12e: PushEmpty(string)
0x12f: Stack[-1] = "Agression"
0x130: Call2 0xa9

0x131: Pop(1)
0x132: Push((int) 529333)
0x133: @@ SetMessage(Stack[-1])
0x134: Pop(1)
0x135: @@ ClearReplies()
0x136: Pop(0)
0x137: Push((int) 540668)
0x138: Push((int) 42699)
0x139: Push((int) 42698)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: Return(); Pop(0)

0x13d: Push((int) 42699)
0x13e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13f: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x140: PushEmpty(string)
0x141: Stack[-1] = "Agression"
0x142: Call2 0xa9

0x143: Pop(1)
0x144: Push((int) 540669)
0x145: @@ SetMessage(Stack[-1])
0x146: Pop(1)
0x147: @@ ClearReplies()
0x148: Pop(0)
0x149: Push((int) 529334)
0x14a: Push((int) 30790)
0x14b: Push((int) 30789)
0x14c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14d: Pop(3)
0x14e: Return(); Pop(0)

0x14f: Push((int) 30790)
0x150: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x152: PushEmpty(string)
0x153: Stack[-1] = "Doubt"
0x154: Call2 0xa9

0x155: Pop(1)
0x156: Push((int) 529335)
0x157: @@ SetMessage(Stack[-1])
0x158: Pop(1)
0x159: @@ ClearReplies()
0x15a: Pop(0)
0x15b: Push((int) 525636)
0x15c: Push((int) -1)
0x15d: Push((int) 26978)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: Push((int) 525637)
0x161: Push((int) -1)
0x162: Push((int) 26979)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: Return(); Pop(0)

0x166: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x167: PushEmpty(bool)
0x168: Call2 0x4dc

0x169: Pop(0)
0x16a: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16b: @ lshStopAnimation()
0x16c: Pop(0)
0x16d: GOTO 0x170

0x16e: @ StopAnimation()
0x16f: Pop(0)
0x170: Return(); Pop(0)

0x171: GOTO 0xc0

0x172: Return(); Pop(0)

0x173: PushEmpty()
0x174: PushEmpty(int, object)
0x175: Stack[-1] = Stack[-3]
0x176: Push(-2, 1); TaskCall(0)
0x177: Call2 0x0

0x178: Pop(-2, 1); TaskReturn
0x179: Pop(2)
0x17a: Return(); Pop(0)

0x17b: PushEmpty()
0x17c: Call2 0x1a4

0x17d: Pop(0)
0x17e: Return(); Pop(0)

0x17f: PushEmpty(bool, bool)
0x180: Push("cleanup")
0x181: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x183: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x184: @ IsLoaded(Stack[-1])
0x185: Pop(0)
0x186: Pop(0); Push((bool) Stack[-1] == 0)
0x187: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x188: PushEmpty(object)
0x189: Call2 0x3d6

0x18a: Pop(0)
0x18b: @ RemoveActor(Stack[-1])
0x18c: Pop(1)
0x18d: GOTO 0x192

0x18e: Push("restore")
0x18f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x191: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x192: Return(); Pop(2)

0x193: Push( Stack[1 + Tasks[-1].StackPointer] )
0x194: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x195: PushEmpty(object)
0x196: Call2 0x3d6

0x197: Pop(0)
0x198: @ RemoveActor(Stack[-1])
0x199: Pop(1)
0x19a: @ Hold()
0x19b: Pop(0)
0x19c: PushEmpty()
0x19d: Call2 0x20f

0x19e: Pop(0)
0x19f: Return(); Pop(0)

0x1a0: PushEmpty()
0x1a1: Call2 0x21e

0x1a2: Pop(0)
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty(bool)
0x1a5: Call2 0x2bb

0x1a6: Pop(0)
0x1a7: Pop(1); Push((bool) Stack[-1] == 0)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a9: @ Hold()
0x1aa: Pop(0)
0x1ab: @ GetDirection(Stack[-0])
0x1ac: Pop(0)
0x1ad: PushEmpty()
0x1ae: Call2 0x254

0x1af: Pop(0)
0x1b0: GOTO 0x1ad

0x1b1: Return(); Pop(0)

0x1b2: PushEmpty(object, object)
0x1b3: Push("player")
0x1b4: @ FindActor(Stack[-2], Stack[-1])
0x1b5: Pop(1)
0x1b6: Pop(0); Push((bool) Stack[-1] == 0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b8: Stack[-3] = (bool) 0
0x1b9: Return(); Pop(2)

0x1ba: PushEmpty(bool, object)
0x1bb: Stack[-1] = Stack[-3]
0x1bc: Call2 0x2b2

0x1bd: Stack[-5] = Stack[-2]
0x1be: Pop(2)
0x1bf: Return(); Pop(2)

0x1c0: Stack[-1] = 0
0x1c1: Push(CvectorIndex(Stack[-0], 0))
0x1c2: Push(CvectorIndex(Stack[-0], 2))
0x1c3: @ RotateAsync(Stack[-2], Stack[-1])
0x1c4: Pop(2)
0x1c5: Return(); Pop(0)

0x1c6: PushEmpty(object, bool, object, bool)
0x1c7: Push("player")
0x1c8: @ FindActor(Stack[-3], Stack[-1])
0x1c9: Pop(1)
0x1ca: Pop(0); Push((bool) Stack[-2] == 0)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cc: Stack[-5] = (bool) 0
0x1cd: Return(); Pop(4)

0x1ce: PushEmpty(float, object)
0x1cf: Stack[-1] = Stack[-4]
0x1d0: Call2 0x2a0

0x1d1: Pop(1)
0x1d2: Push((float)90000.0)
0x1d3: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d5: Stack[-5] = (bool) 0
0x1d6: Return(); Pop(4)

0x1d7: @ CanSee(Stack[-1], Stack[-2])
0x1d8: Pop(0)
0x1d9: Stack[-5] = Stack[-1]
0x1da: Return(); Pop(4)

0x1db: Stack[-2] = 0
0x1dc: PushEmpty(float, float)
0x1dd: Push((int) 8)
0x1de: Push((int) 16)
0x1df: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1e0: Pop(2)
0x1e1: Push((int) 10)
0x1e2: @ SetTimer(Stack[-1], Stack[-2])
0x1e3: Pop(1)
0x1e4: Return(); Pop(2)

0x1e5: Push((int) 10)
0x1e6: @ KillTimer(Stack[-1])
0x1e7: Pop(1)
0x1e8: Return(); Pop(0)

0x1e9: PushEmpty()
0x1ea: Push((int) 10)
0x1eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x1ed: PushEmpty()
0x1ee: Call2 0x1e5

0x1ef: Pop(0)
0x1f0: PushEmpty(bool)
0x1f1: Stack[-1] = (bool) 0
0x1f2: PushEmpty(bool)
0x1f3: Call2 0x2bb

0x1f4: Pop(0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f6: PushEmpty(bool)
0x1f7: Call2 0x1c6

0x1f8: Pop(0)
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1fa: Stack[-1] = (bool) 1
0x1fb: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1fc: PushEmpty(bool)
0x1fd: Call2 0x1b2

0x1fe: Pop(0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x200: PushEmpty(bool, object)
0x201: PushEmpty(object)
0x202: Call2 0x3d6

0x203: Stack[-2] = Stack[-1]
0x204: Pop(1)
0x205: Call2 0x351

0x206: Pop(2)
0x207: GOTO 0x20e

0x208: PushEmpty()
0x209: Call2 0x1c1

0x20a: Pop(0)
0x20b: PushEmpty()
0x20c: Call2 0x1dc

0x20d: Pop(0)
0x20e: Return(); Pop(0)

0x20f: PushEmpty()
0x210: Call2 0x29b

0x211: Pop(0)
0x212: PushEmpty()
0x213: Call2 0x1e5

0x214: Pop(0)
0x215: @ lshStopSpeech()
0x216: Pop(0)
0x217: @ lshStopAnimation()
0x218: Pop(0)
0x219: @ StopAsync()
0x21a: Pop(0)
0x21b: @ Hold()
0x21c: Pop(0)
0x21d: Return(); Pop(0)

0x21e: @ StopGroup0()
0x21f: Pop(0)
0x220: PushEmpty()
0x221: Call2 0x1e5

0x222: Pop(0)
0x223: PushEmpty(string)
0x224: Stack[-1] = "Neutral"
0x225: Call2 0x3a1

0x226: Pop(1)
0x227: PushEmpty()
0x228: Call2 0x1dc

0x229: Pop(0)
0x22a: Return(); Pop(0)

0x22b: PushEmpty()
0x22c: Push(Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22e: PushEmpty()
0x22f: Call2 0x1dc

0x230: Pop(0)
0x231: GOTO 0x236

0x232: PushEmpty(string)
0x233: Stack[-1] = "Neutral"
0x234: Call2 0x3a1

0x235: Pop(1)
0x236: Return(); Pop(0)

0x237: PushEmpty(bool, bool)
0x238: @ IsOverrideActive(Stack[-1])
0x239: Pop(0)
0x23a: Pop(0); Push((bool) Stack[-1] == 0)
0x23b: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x23c: EventDisable(0)
0x23d: PushEmpty()
0x23e: Call2 0x29b

0x23f: Pop(0)
0x240: PushEmpty(bool, object)
0x241: Stack[-1] = Stack[-5]
0x242: Call2 0x2b2

0x243: Pop(2)
0x244: EventEnable(0)
0x245: PushEmpty(object)
0x246: Stack[-1] = Stack[-4]
0x247: Call2 0x173

0x248: Pop(1)
0x249: PushEmpty(string)
0x24a: Stack[-1] = "Neutral"
0x24b: Call2 0x3a1

0x24c: Pop(1)
0x24d: PushEmpty()
0x24e: Call2 0x1e5

0x24f: Pop(0)
0x250: PushEmpty()
0x251: Call2 0x1dc

0x252: Pop(0)
0x253: Return(); Pop(2)

0x254: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x255: @ WaitForAnimEnd()
0x256: Pop(0)
0x257: PushEmpty(bool)
0x258: Call2 0x2bb

0x259: Pop(0)
0x25a: Pop(1); Push((bool) Stack[-1] == 0)
0x25b: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25c: Return(); Pop(12)

0x25d: PushEmpty(int)
0x25e: Call2 0x41a

0x25f: Stack[-7] = Stack[-1]
0x260: Pop(1)
0x261: Stack[-5] = (int) 0
0x262: PushEmpty(bool)
0x263: Stack[-1] = (bool) 0
0x264: Push((int) 5)
0x265: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x266: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x267: PushEmpty(bool)
0x268: Call2 0x2bb

0x269: Pop(0)
0x26a: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26b: Stack[-1] = (bool) 1
0x26c: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x26d: Pop(0); Push((bool) Stack[-6] == 0)
0x26e: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x26f: Push((int) 3)
0x270: @ Sleep(Stack[-1], Stack[-5])
0x271: Pop(1)
0x272: Pop(0); Push((bool) Stack[-4] == 0)
0x273: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x274: GOTO 0x296

0x275: GOTO 0x28b

0x276: @ irand(Stack[-3], Stack[-6])
0x277: Pop(0)
0x278: Push((int) 5)
0x279: @ irand(Stack[-3], Stack[-1])
0x27a: Pop(1)
0x27b: Push((int) 0)
0x27c: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x27d: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27e: Stack[-3] = (int) 0
0x27f: Push("all")
0x280: PushEmpty(string, int)
0x281: Stack[-1] = Stack[-6]
0x282: Call2 0x413

0x283: Pop(1)
0x284: @ PlayAnimation(Stack[-2], Stack[-1])
0x285: Pop(2)
0x286: @ WaitForAnimEnd(Stack[-1])
0x287: Pop(0)
0x288: Pop(0); Push((bool) Stack[-1] == 0)
0x289: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x28a: GOTO 0x296

0x28b: PushEmpty(bool)
0x28c: Call2 0x299

0x28d: Pop(0)
0x28e: Pop(1); Push((bool) Stack[-1] == 0)
0x28f: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x290: GOTO 0x296

0x291: @ ResetAAS()
0x292: Pop(0)
0x293: Push((int) 1)
0x294: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x295: GOTO 0x262

0x296: @ ResetAAS()
0x297: Pop(0)
0x298: Return(); Pop(12)

0x299: Stack[-1] = (bool) 1
0x29a: Return(); Pop(0)

0x29b: @ StopAnimation()
0x29c: Pop(0)
0x29d: @ StopGroup0()
0x29e: Pop(0)
0x29f: Return(); Pop(0)

0x2a0: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2a1: @ GetPosition(Stack[-3])
0x2a2: Pop(0)
0x2a3: @@ GetPosition(Stack[-2])
0x2a4: Pop(0)
0x2a5: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2a6: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2a7: Return(); Pop(6)

0x2a8: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2a9: @ GetPosition(Stack[-3])
0x2aa: Pop(0)
0x2ab: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2ac: Push(CvectorIndex(Stack[-2], 0))
0x2ad: Push(CvectorIndex(Stack[-3], 2))
0x2ae: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2af: Pop(2)
0x2b0: Stack[-8] = Stack[-1]
0x2b1: Return(); Pop(6)

0x2b2: PushEmpty(cvector, cvector)
0x2b3: @@ GetPosition(Stack[-1])
0x2b4: Pop(0)
0x2b5: PushEmpty(bool, cvector)
0x2b6: Stack[-1] = Stack[-3]
0x2b7: Call2 0x2a8

0x2b8: Stack[-6] = Stack[-2]
0x2b9: Pop(2)
0x2ba: Return(); Pop(2)

0x2bb: PushEmpty(bool, bool)
0x2bc: @ IsLoaded(Stack[-1])
0x2bd: Pop(0)
0x2be: Stack[-3] = Stack[-1]
0x2bf: Return(); Pop(2)

0x2c0: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2c1: @@ GetPosition(Stack[-8])
0x2c2: Pop(0)
0x2c3: @@ GetEyesHeight(Stack[-9])
0x2c4: Pop(0)
0x2c5: Push(CvectorIndex(Stack[-8], 1))
0x2c6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2c7: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2c8: @ GetPosition(Stack[-7])
0x2c9: Pop(0)
0x2ca: @ GetEyesHeight(Stack[-9])
0x2cb: Pop(0)
0x2cc: Push(CvectorIndex(Stack[-7], 1))
0x2cd: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2ce: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2cf: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2d0: Push(CvectorIndex(Stack[-6], 1))
0x2d1: Stack[-1] = (int) 0
0x2d2: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2d3: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2d4: Pop(1); Push(Sqrt(Stack[-1]))
0x2d5: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2d6: Stack[-5] = -Stack[-6]; Pop(0);
0x2d7: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2d8: PushEmpty(cvector, cvector)
0x2d9: Push(CVector(0.0, 1.0, 0.0))
0x2da: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2db: Call2 0x3dc

0x2dc: Pop(1)
0x2dd: Push((int) 25)
0x2de: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2df: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2e0: Push(CVector(0.0, 10.0, 0.0))
0x2e1: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2e2: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2e3: @ IsOverrideActive(Stack[-2])
0x2e4: Pop(0)
0x2e5: Push(Stack[-2])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e7: Stack[-21] = (bool) 0
0x2e8: Return(); Pop(18)

0x2e9: @ StopWorld()
0x2ea: Pop(0)
0x2eb: Push((bool) 1)
0x2ec: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2ed: Pop(1)
0x2ee: Push(CvectorIndex(Stack[-4], 0))
0x2ef: Push(CvectorIndex(Stack[-5], 2))
0x2f0: @ Rotate(Stack[-2], Stack[-1])
0x2f1: Pop(2)
0x2f2: PushEmpty(bool)
0x2f3: Call2 0x4dc

0x2f4: Pop(0)
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f6: GOTO 0x2ff

0x2f7: Push("head")
0x2f8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f9: Pop(1)
0x2fa: Push(Stack[-1])
0x2fb: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fc: Push("head")
0x2fd: @ LookAsyncCamera(Stack[-1])
0x2fe: Pop(1)
0x2ff: @ CameraWaitForPlayFinish()
0x300: Pop(0)
0x301: @ ResumeWorld()
0x302: Pop(0)
0x303: Stack[-21] = (bool) 1
0x304: Return(); Pop(18)

0x305: PushEmpty(bool, bool)
0x306: Push((bool) 1)
0x307: @ CameraSwitchToNormal(Stack[-1])
0x308: Pop(1)
0x309: PushEmpty(bool)
0x30a: Call2 0x4dc

0x30b: Pop(0)
0x30c: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30d: GOTO 0x316

0x30e: Push("head")
0x30f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x310: Pop(1)
0x311: Push(Stack[-1])
0x312: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x313: Push("head")
0x314: @ UnlookAsync(Stack[-1])
0x315: Pop(1)
0x316: Return(); Pop(2)

0x317: PushEmpty(int, int, int, int)
0x318: Push("voice_common")
0x319: @ GetVariable(Stack[-1], Stack[-3])
0x31a: Pop(1)
0x31b: Push(Stack[-2])
0x31c: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x31d: PushEmpty(bool, object)
0x31e: Stack[-1] = Stack[-7]
0x31f: Call2 0x351

0x320: Pop(1)
0x321: Pop(1); Push((bool) Stack[-1] == 0)
0x322: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x323: PushEmpty(bool, object)
0x324: Stack[-1] = Stack[-7]
0x325: Call2 0x376

0x326: Pop(1)
0x327: Pop(1); Push((bool) Stack[-1] == 0)
0x328: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x329: Stack[-6] = (bool) 0
0x32a: Return(); Pop(4)

0x32b: Push((int) 2)
0x32c: @ irand(Stack[-2], Stack[-1])
0x32d: Pop(1)
0x32e: Push(Stack[-1])
0x32f: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x330: Push("voice_common")
0x331: Push((int) 1)
0x332: Pop(1); Push(Stack[-4] + Stack[-1]);
0x333: Push((int) 3)
0x334: Pop(2); Push(Stack[-2] % Stack[-1]);
0x335: @ SetVariable(Stack[-2], Stack[-1])
0x336: Pop(2)
0x337: GOTO 0x33c

0x338: Push("voice_common")
0x339: Push((int) 0)
0x33a: @ SetVariable(Stack[-2], Stack[-1])
0x33b: Pop(2)
0x33c: GOTO 0x34f

0x33d: PushEmpty(bool, object)
0x33e: Stack[-1] = Stack[-7]
0x33f: Call2 0x376

0x340: Pop(1)
0x341: Pop(1); Push((bool) Stack[-1] == 0)
0x342: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x343: PushEmpty(bool, object)
0x344: Stack[-1] = Stack[-7]
0x345: Call2 0x351

0x346: Pop(1)
0x347: Pop(1); Push((bool) Stack[-1] == 0)
0x348: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x349: Stack[-6] = (bool) 0
0x34a: Return(); Pop(4)

0x34b: Push("voice_common")
0x34c: Push((int) 1)
0x34d: @ SetVariable(Stack[-2], Stack[-1])
0x34e: Pop(2)
0x34f: Stack[-6] = (bool) 1
0x350: Return(); Pop(4)

0x351: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x352: Stack[-5] = "c"
0x353: Stack[-4] = (int) 0
0x354: Push((int) 1)
0x355: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x356: Push((int) 1)
0x357: Pop(1); Push(Stack[-5] + Stack[-1]);
0x358: Pop(1); Push(Stack[-6] + Stack[-1]);
0x359: @@ HasProperty(Stack[-1], Stack[-4])
0x35a: Pop(1)
0x35b: Pop(0); Push((bool) Stack[-3] == 0)
0x35c: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x35d: GOTO 0x361

0x35e: Push((int) 1)
0x35f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x360: GOTO 0x354

0x361: Pop(0); Push((bool) Stack[-4] == 0)
0x362: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x363: Stack[-12] = (bool) 0
0x364: Return(); Pop(10)

0x365: Stack[-2] = (int) 0
0x366: Push((int) 1)
0x367: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x368: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x369: @ irand(Stack[-2], Stack[-4])
0x36a: Pop(0)
0x36b: Push((int) 1)
0x36c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x36d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x36e: @@ GetProperty(Stack[-1], Stack[-2])
0x36f: Pop(1)
0x370: PushEmpty(bool, string)
0x371: Stack[-1] = Stack[-3]
0x372: Call2 0x3c0

0x373: Stack[-14] = Stack[-2]
0x374: Pop(2)
0x375: Return(); Pop(10)

0x376: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x377: Push("d")
0x378: PushEmpty(int)
0x379: Call2 0x40a

0x37a: Pop(0)
0x37b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x37c: Push("m")
0x37d: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x37e: Stack[-4] = (int) 0
0x37f: Push((int) 1)
0x380: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x381: Push((int) 1)
0x382: Pop(1); Push(Stack[-5] + Stack[-1]);
0x383: Pop(1); Push(Stack[-6] + Stack[-1]);
0x384: @@ HasProperty(Stack[-1], Stack[-4])
0x385: Pop(1)
0x386: Pop(0); Push((bool) Stack[-3] == 0)
0x387: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x388: GOTO 0x38c

0x389: Push((int) 1)
0x38a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x38b: GOTO 0x37f

0x38c: Pop(0); Push((bool) Stack[-4] == 0)
0x38d: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38e: Stack[-12] = (bool) 0
0x38f: Return(); Pop(10)

0x390: Stack[-2] = (int) 0
0x391: Push((int) 1)
0x392: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x394: @ irand(Stack[-2], Stack[-4])
0x395: Pop(0)
0x396: Push((int) 1)
0x397: Pop(1); Push(Stack[-3] + Stack[-1]);
0x398: Pop(1); Push(Stack[-6] + Stack[-1]);
0x399: @@ GetProperty(Stack[-1], Stack[-2])
0x39a: Pop(1)
0x39b: PushEmpty(bool, string)
0x39c: Stack[-1] = Stack[-3]
0x39d: Call2 0x3c0

0x39e: Stack[-14] = Stack[-2]
0x39f: Pop(2)
0x3a0: Return(); Pop(10)

0x3a1: PushEmpty(bool, float, float, bool, float, float)
0x3a2: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3a3: Pop(0)
0x3a4: Push(Stack[-3])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3a6: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3a7: Pop(0)
0x3a8: Push((bool) 0)
0x3a9: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3aa: Pop(1)
0x3ab: GOTO 0x3b0

0x3ac: Push("Can't find lsh animation : ")
0x3ad: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3ae: @ Trace(Stack[-1])
0x3af: Pop(1)
0x3b0: Return(); Pop(6)

0x3b1: PushEmpty(bool, float, float, bool, float, float)
0x3b2: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3b3: Pop(0)
0x3b4: Push(Stack[-3])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b6: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3b7: Pop(0)
0x3b8: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3b9: Pop(0)
0x3ba: GOTO 0x3bf

0x3bb: Push("Can't find lsh animation : ")
0x3bc: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3bd: @ Trace(Stack[-1])
0x3be: Pop(1)
0x3bf: Return(); Pop(6)

0x3c0: PushEmpty(bool, bool)
0x3c1: PushEmpty(bool)
0x3c2: Call2 0x4dc

0x3c3: Pop(0)
0x3c4: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3c5: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3c6: Pop(0)
0x3c7: Push(Stack[-1])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3c9: @ lshPlaySpeech(Stack[-3])
0x3ca: Pop(0)
0x3cb: Stack[-4] = (bool) 1
0x3cc: Return(); Pop(2)

0x3cd: Stack[-4] = (bool) 0
0x3ce: Return(); Pop(2)

0x3cf: PushEmpty(bool)
0x3d0: Call2 0x4dc

0x3d1: Pop(0)
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d3: @ lshStopSpeech()
0x3d4: Pop(0)
0x3d5: Return(); Pop(0)

0x3d6: PushEmpty(object, object)
0x3d7: @ self(Stack[-1])
0x3d8: Pop(0)
0x3d9: Stack[-3] = Stack[-1]
0x3da: Return(); Pop(2)

0x3db: Stack[-1] = 0
0x3dc: PushEmpty(float, float)
0x3dd: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3de: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3df: Push((float)0.0)
0x3e0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e2: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3e3: Return(); Pop(2)

0x3e4: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3e5: Return(); Pop(2)

0x3e6: PushEmpty(int, int)
0x3e7: @ GetVariable(Stack[-3], Stack[-1])
0x3e8: Pop(0)
0x3e9: Stack[-4] = Stack[-1]
0x3ea: Return(); Pop(2)

0x3eb: PushEmpty(object, object)
0x3ec: @ CreateIntVector(Stack[-1])
0x3ed: Pop(0)
0x3ee: @@ add(Stack[-4])
0x3ef: Pop(0)
0x3f0: @@ add(Stack[-3])
0x3f1: Pop(0)
0x3f2: Push((int) 3)
0x3f3: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x3f4: Pop(1)
0x3f5: Return(); Pop(2)

0x3f6: Stack[-1] = 0
0x3f7: PushEmpty(int, int, bool, int, int, bool)
0x3f8: @@ GetItemID(Stack[-3])
0x3f9: Pop(0)
0x3fa: Push("Category")
0x3fb: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x3fc: Pop(1)
0x3fd: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x3fe: Pop(0)
0x3ff: Pop(0); Push((bool) Stack[-1] == 0)
0x400: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x401: @@ DropItems(Stack[-8], Stack[-7])
0x402: Pop(0)
0x403: GOTO 0x409

0x404: PushEmpty(int, int)
0x405: Stack[-2] = Stack[-5]
0x406: Stack[-1] = Stack[-9]
0x407: Call2 0x3eb

0x408: Pop(2)
0x409: Return(); Pop(6)

0x40a: PushEmpty(float, float)
0x40b: @ GetGameTime(Stack[-1])
0x40c: Pop(0)
0x40d: Push((int) 1)
0x40e: PushEmpty(int)
0x40f: Push((int) 24)
0x410: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x411: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x412: Return(); Pop(2)

0x413: PushEmpty(string, string)
0x414: Stack[-1] = "idle"
0x415: Push(Stack[-3])
0x416: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x417: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x418: Stack[-4] = Stack[-1]
0x419: Return(); Pop(2)

0x41a: PushEmpty(int, bool, int, bool)
0x41b: Stack[-2] = (int) 0
0x41c: Push("all")
0x41d: PushEmpty(string, int)
0x41e: Stack[-1] = Stack[-5]
0x41f: Call2 0x413

0x420: Pop(1)
0x421: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x422: Pop(2)
0x423: Pop(0); Push((bool) Stack[-1] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x425: GOTO 0x429

0x426: Push((int) 1)
0x427: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x428: GOTO 0x41c

0x429: Stack[-5] = Stack[-2]
0x42a: Return(); Pop(4)

0x42b: PushEmpty()
0x42c: Push("ook3BurahIndoor1")
0x42d: Push((int) 1)
0x42e: @ SetVariable(Stack[-2], Stack[-1])
0x42f: Pop(2)
0x430: Return(); Pop(0)

0x431: PushEmpty()
0x432: Push("k3q04")
0x433: Push((int) 3)
0x434: @ SetVariable(Stack[-2], Stack[-1])
0x435: Pop(2)
0x436: PushEmpty()
0x437: Call2 0x48d

0x438: Pop(0)
0x439: Return(); Pop(0)

0x43a: PushEmpty()
0x43b: Push("k3q04")
0x43c: Push((int) 3)
0x43d: @ SetVariable(Stack[-2], Stack[-1])
0x43e: Pop(2)
0x43f: Push("k3q04Promise")
0x440: Push((int) 1)
0x441: @ SetVariable(Stack[-2], Stack[-1])
0x442: Pop(2)
0x443: PushEmpty()
0x444: Call2 0x48d

0x445: Pop(0)
0x446: Return(); Pop(0)

0x447: PushEmpty(object, object)
0x448: Push("grass combination (good) is given")
0x449: @ Trace(Stack[-1])
0x44a: Pop(1)
0x44b: @ CreateInvItem(Stack[-1])
0x44c: Pop(0)
0x44d: Push("grass_combination")
0x44e: @@ SetItemName(Stack[-1])
0x44f: Pop(1)
0x450: Push("im_inc")
0x451: Push((float)0.4)
0x452: @@ SetProperty(Stack[-2], Stack[-1])
0x453: Pop(2)
0x454: Push("hl_inc")
0x455: Push((float)-0.01)
0x456: @@ SetProperty(Stack[-2], Stack[-1])
0x457: Pop(2)
0x458: Push("tr_inc")
0x459: Push((float)0.03)
0x45a: @@ SetProperty(Stack[-2], Stack[-1])
0x45b: Pop(2)
0x45c: PushEmpty(object, object, int)
0x45d: Stack[-3] = Stack[-7]
0x45e: Stack[-2] = Stack[-4]
0x45f: Stack[-1] = (int) 1
0x460: Call2 0x3f7

0x461: Pop(3)
0x462: Return(); Pop(2)

0x463: Stack[-1] = 0
0x464: PushEmpty(object, object)
0x465: Push("grass combination (bad) is given")
0x466: @ Trace(Stack[-1])
0x467: Pop(1)
0x468: @ CreateInvItem(Stack[-1])
0x469: Pop(0)
0x46a: Push("grass_combination")
0x46b: @@ SetItemName(Stack[-1])
0x46c: Pop(1)
0x46d: Push("im_inc")
0x46e: Push((float)0.2)
0x46f: @@ SetProperty(Stack[-2], Stack[-1])
0x470: Pop(2)
0x471: Push("hl_inc")
0x472: Push((float)-0.08)
0x473: @@ SetProperty(Stack[-2], Stack[-1])
0x474: Pop(2)
0x475: Push("tr_inc")
0x476: Push((float)0.12)
0x477: @@ SetProperty(Stack[-2], Stack[-1])
0x478: Pop(2)
0x479: PushEmpty(object, object, int)
0x47a: Stack[-3] = Stack[-7]
0x47b: Stack[-2] = Stack[-4]
0x47c: Stack[-1] = (int) 1
0x47d: Call2 0x3f7

0x47e: Pop(3)
0x47f: Return(); Pop(2)

0x480: Stack[-1] = 0
0x481: PushEmpty()
0x482: PushEmpty(int, string)
0x483: Stack[-1] = "ook3BurahIndoor1"
0x484: Call2 0x3e6

0x485: Pop(1)
0x486: Push((int) 0)
0x487: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x488: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x489: Stack[-2] = (bool) 1
0x48a: Return(); Pop(0)

0x48b: Stack[-2] = (bool) 0
0x48c: Return(); Pop(0)

0x48d: PushEmpty(object, object)
0x48e: Push((int) 357)
0x48f: Push((int) 2)
0x490: Push((int) 525657)
0x491: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x492: Pop(3)
0x493: PushEmpty(bool, object, int)
0x494: Stack[-2] = Stack[-4]
0x495: Stack[-1] = (int) 354
0x496: Call2 0x4a7

0x497: Pop(3)
0x498: Return(); Pop(2)

0x499: Stack[-1] = 0
0x49a: PushEmpty(object, object)
0x49b: @ GetDiaryRoot(Stack[-1])
0x49c: Pop(0)
0x49d: Pop(0); Push((bool) Stack[-1] == 0)
0x49e: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x49f: Push("Can't retrieve diary root")
0x4a0: @ Trace(Stack[-1])
0x4a1: Pop(1)
0x4a2: Stack[-3] = (bool) 0
0x4a3: Return(); Pop(2)

0x4a4: Stack[-3] = Stack[-1]
0x4a5: Return(); Pop(2)

0x4a6: Stack[-1] = 0
0x4a7: PushEmpty(object, object, int, object, object, int)
0x4a8: PushEmpty(object)
0x4a9: Call2 0x49a

0x4aa: Stack[-4] = Stack[-1]
0x4ab: Pop(1)
0x4ac: @@ Find(Stack[-7], Stack[-2])
0x4ad: Pop(0)
0x4ae: Pop(0); Push((bool) Stack[-2] == 0)
0x4af: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b0: Push("Can't find diary parent with id: ")
0x4b1: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4b2: @ Trace(Stack[-1])
0x4b3: Pop(1)
0x4b4: Stack[-9] = (bool) 0
0x4b5: Return(); Pop(6)

0x4b6: @@ AddChild(Stack[-8])
0x4b7: Pop(0)
0x4b8: Push((int) 7)
0x4b9: @ SendWorldWndMessage(Stack[-1])
0x4ba: Pop(1)
0x4bb: @@ GetCategory(Stack[-1])
0x4bc: Pop(0)
0x4bd: @ SetDiarySection(Stack[-1])
0x4be: Pop(0)
0x4bf: Stack[-9] = (bool) 0
0x4c0: Return(); Pop(6)

0x4c1: Stack[-2] = 0
0x4c2: Stack[-3] = 0
0x4c3: PushEmpty(int, int)
0x4c4: Push("branch")
0x4c5: @ GetVariable(Stack[-1], Stack[-2])
0x4c6: Pop(1)
0x4c7: Push((int) 0)
0x4c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4ca: Stack[-3] = (int) 1
0x4cb: Return(); Pop(2)

0x4cc: GOTO 0x4d2

0x4cd: Push((int) 1)
0x4ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4d0: Stack[-3] = (int) 2
0x4d1: Return(); Pop(2)

0x4d2: Stack[-3] = (int) 3
0x4d3: Return(); Pop(2)

0x4d4: Stack[-1] = (int) 515592
0x4d5: Return(); Pop(0)

0x4d6: Stack[-1] = (int) 511961
0x4d7: Return(); Pop(0)

0x4d8: Stack[-1] = "ui/NPC_Burah.png"
0x4d9: Return(); Pop(0)

0x4da: Stack[-1] = "ui/NPC_Burah_b.png"
0x4db: Return(); Pop(0)

0x4dc: Stack[-1] = (bool) 1
0x4dd: Return(); Pop(0)

