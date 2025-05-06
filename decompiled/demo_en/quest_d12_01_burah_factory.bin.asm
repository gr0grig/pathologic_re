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
	Smile
	Doubt
	Sorrow
	Agression
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
	ood12BurahFactory1
	d12q01BurahInSobor
	d12q01_Burah
	d12q01BurahVisit
	ood12BurahFactory2
	b12q01ChildsAreVisited
	game_final
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	add
	vol_
	size
	get
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
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	CreateIntVector (1 args)

RunOp = 0x2e5
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xff Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x2e9 Vars = (object)
		EVENT_26 Op = 0x2f5 Vars = (string)
		EVENT_6 Op = 0x311 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x323

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x57d

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x57b

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x57f

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x581

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x50f

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
0x31: Call2 0x437

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x378

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
0x48: Call2 0x367

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
0x56: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x4ae

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x496

0x61: Pop(1)
0x62: Pop(1); Push((bool) Stack[-1] == 0)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x66: PushEmpty(object, object)
0x67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69: Call2 0x455

0x6a: Pop(2)
0x6b: PushEmpty(object, object)
0x6c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e: Call2 0x474

0x6f: Pop(2)
0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral"
0x72: Call2 0xe9

0x73: Pop(1)
0x74: Push((int) 535567)
0x75: @@ SetMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ ClearReplies()
0x78: Pop(0)
0x79: Push((int) 535568)
0x7a: Push((int) 37252)
0x7b: Push((int) 37251)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: Push((int) 535587)
0x7f: Push((int) 42035)
0x80: Push((int) 37272)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: GOTO 0xcb

0x84: PushEmpty(object, object)
0x85: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x86: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x87: Call2 0x474

0x88: Pop(2)
0x89: PushEmpty(string)
0x8a: Stack[-1] = "Neutral"
0x8b: Call2 0xe9

0x8c: Pop(1)
0x8d: Push((int) 535630)
0x8e: @@ SetMessage(Stack[-1])
0x8f: Pop(1)
0x90: @@ ClearReplies()
0x91: Pop(0)
0x92: PushEmpty(bool)
0x93: Stack[-1] = (bool) 0
0x94: PushEmpty(bool)
0x95: Stack[-1] = (bool) 0
0x96: PushEmpty(bool, object)
0x97: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x98: Call2 0x4a2

0x99: Pop(1)
0x9a: Pop(1); Push((bool) Stack[-1] == 0)
0x9b: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9c: PushEmpty(bool, object)
0x9d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e: Call2 0x480

0x9f: Pop(1)
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Stack[-1] = (bool) 1
0xa2: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa3: PushEmpty(bool, object)
0xa4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Call2 0x496

0xa6: Pop(1)
0xa7: Pop(1); Push((bool) Stack[-1] == 0)
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: Stack[-1] = (bool) 1
0xaa: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xab: Push((int) 535631)
0xac: Push((int) 37319)
0xad: Push((int) 37317)
0xae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf: Pop(3)
0xb0: PushEmpty(bool)
0xb1: Stack[-1] = (bool) 0
0xb2: PushEmpty(bool, object)
0xb3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Call2 0x48a

0xb5: Pop(1)
0xb6: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb7: PushEmpty(bool, object)
0xb8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Call2 0x4ba

0xba: Pop(1)
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: Stack[-1] = (bool) 1
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 540355)
0xbf: Push((int) 42339)
0xc0: Push((int) 42338)
0xc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2: Pop(3)
0xc3: Push((int) 535632)
0xc4: Push((int) -1)
0xc5: Push((int) 37318)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: GOTO 0xcb

0xc9: Return(); Pop(0)

0xca: GOTO 0x55

0xcb: PushEmpty(bool)
0xcc: Call2 0x583

0xcd: Pop(0)
0xce: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xcf: @ lshWaitForAnimEnd()
0xd0: Pop(0)
0xd1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: GOTO 0xd9

0xd4: PushEmpty(string)
0xd5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd6: Call2 0x402

0xd7: Pop(1)
0xd8: GOTO 0xcf

0xd9: GOTO 0xe8

0xda: Push("all")
0xdb: Push("idle")
0xdc: @ PlayAnimation(Stack[-2], Stack[-1])
0xdd: Pop(2)
0xde: @ WaitForAnimEnd()
0xdf: Pop(0)
0xe0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe1: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe2: GOTO 0xe8

0xe3: Push("all")
0xe4: Push("idle")
0xe5: @ PlayAnimation(Stack[-2], Stack[-1])
0xe6: Pop(2)
0xe7: GOTO 0xde

0xe8: Return(); Pop(0)

0xe9: PushEmpty()
0xea: PushEmpty(bool)
0xeb: Call2 0x583

0xec: Pop(0)
0xed: Pop(1); Push((bool) Stack[-1] == 0)
0xee: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xef: Return(); Pop(0)

0xf0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf1: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf2: Return(); Pop(0)

0xf3: PushEmpty(string, bool)
0xf4: Stack[-2] = Stack[-3]
0xf5: Push("")
0xf6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf8: Stack[-1] = (bool) 0
0xf9: GOTO 0xfb

0xfa: Stack[-1] = (bool) 1
0xfb: Call2 0x412

0xfc: Pop(2)
0xfd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xfe: Return(); Pop(0)

0xff: PushEmpty()
0x100: Push((int) 1)
0x101: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x102: PushEmpty()
0x103: Call2 0x430

0x104: Pop(0)
0x105: Push((int) 37261)
0x106: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x464

0x10c: Pop(2)
0x10d: Push((int) 37264)
0x10e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x110: PushEmpty(object, object)
0x111: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x112: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x113: Call2 0x45b

0x114: Pop(2)
0x115: Push((int) 37320)
0x116: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11b: Call2 0x45b

0x11c: Pop(2)
0x11d: Push((int) 42338)
0x11e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x120: PushEmpty(object, object)
0x121: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x122: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x123: Call2 0x47a

0x124: Pop(2)
0x125: Push((int) 37250)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x128: PushEmpty(bool)
0x129: Stack[-1] = (bool) 0
0x12a: PushEmpty(bool, object)
0x12b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Call2 0x4ae

0x12d: Pop(1)
0x12e: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x12f: PushEmpty(bool, object)
0x130: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x131: Call2 0x496

0x132: Pop(1)
0x133: Pop(1); Push((bool) Stack[-1] == 0)
0x134: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x135: Stack[-1] = (bool) 1
0x136: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x137: PushEmpty(object, object)
0x138: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x139: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13a: Call2 0x455

0x13b: Pop(2)
0x13c: PushEmpty(object, object)
0x13d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13f: Call2 0x474

0x140: Pop(2)
0x141: PushEmpty(string)
0x142: Stack[-1] = "Neutral"
0x143: Call2 0xe9

0x144: Pop(1)
0x145: Push((int) 535567)
0x146: @@ SetMessage(Stack[-1])
0x147: Pop(1)
0x148: @@ ClearReplies()
0x149: Pop(0)
0x14a: Push((int) 535568)
0x14b: Push((int) 37252)
0x14c: Push((int) 37251)
0x14d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e: Pop(3)
0x14f: Push((int) 535587)
0x150: Push((int) 42035)
0x151: Push((int) 37272)
0x152: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x153: Pop(3)
0x154: Return(); Pop(0)

0x155: PushEmpty(object, object)
0x156: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x157: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x158: Call2 0x474

0x159: Pop(2)
0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Neutral"
0x15c: Call2 0xe9

0x15d: Pop(1)
0x15e: Push((int) 535630)
0x15f: @@ SetMessage(Stack[-1])
0x160: Pop(1)
0x161: @@ ClearReplies()
0x162: Pop(0)
0x163: PushEmpty(bool)
0x164: Stack[-1] = (bool) 0
0x165: PushEmpty(bool)
0x166: Stack[-1] = (bool) 0
0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x169: Call2 0x4a2

0x16a: Pop(1)
0x16b: Pop(1); Push((bool) Stack[-1] == 0)
0x16c: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16d: PushEmpty(bool, object)
0x16e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16f: Call2 0x480

0x170: Pop(1)
0x171: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x172: Stack[-1] = (bool) 1
0x173: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x174: PushEmpty(bool, object)
0x175: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x176: Call2 0x496

0x177: Pop(1)
0x178: Pop(1); Push((bool) Stack[-1] == 0)
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: Stack[-1] = (bool) 1
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: Push((int) 535631)
0x17d: Push((int) 37319)
0x17e: Push((int) 37317)
0x17f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x180: Pop(3)
0x181: PushEmpty(bool)
0x182: Stack[-1] = (bool) 0
0x183: PushEmpty(bool, object)
0x184: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x185: Call2 0x48a

0x186: Pop(1)
0x187: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x188: PushEmpty(bool, object)
0x189: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18a: Call2 0x4ba

0x18b: Pop(1)
0x18c: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18d: Stack[-1] = (bool) 1
0x18e: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18f: Push((int) 540355)
0x190: Push((int) 42339)
0x191: Push((int) 42338)
0x192: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x193: Pop(3)
0x194: Push((int) 535632)
0x195: Push((int) -1)
0x196: Push((int) 37318)
0x197: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x198: Pop(3)
0x199: Return(); Pop(0)

0x19a: Push((int) 42339)
0x19b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x19d: PushEmpty(string)
0x19e: Stack[-1] = "Smile"
0x19f: Call2 0xe9

0x1a0: Pop(1)
0x1a1: Push((int) 540356)
0x1a2: @@ SetMessage(Stack[-1])
0x1a3: Pop(1)
0x1a4: @@ ClearReplies()
0x1a5: Pop(0)
0x1a6: Push((int) 540357)
0x1a7: Push((int) 42341)
0x1a8: Push((int) 42340)
0x1a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1aa: Pop(3)
0x1ab: Return(); Pop(0)

0x1ac: Push((int) 42341)
0x1ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1af: PushEmpty(string)
0x1b0: Stack[-1] = "Smile"
0x1b1: Call2 0xe9

0x1b2: Pop(1)
0x1b3: Push((int) 540358)
0x1b4: @@ SetMessage(Stack[-1])
0x1b5: Pop(1)
0x1b6: @@ ClearReplies()
0x1b7: Pop(0)
0x1b8: Push((int) 540359)
0x1b9: Push((int) 42343)
0x1ba: Push((int) 42342)
0x1bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bc: Pop(3)
0x1bd: Return(); Pop(0)

0x1be: Push((int) 42343)
0x1bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1c1: PushEmpty(string)
0x1c2: Stack[-1] = "Smile"
0x1c3: Call2 0xe9

0x1c4: Pop(1)
0x1c5: Push((int) 540360)
0x1c6: @@ SetMessage(Stack[-1])
0x1c7: Pop(1)
0x1c8: @@ ClearReplies()
0x1c9: Pop(0)
0x1ca: Push((int) 540361)
0x1cb: Push((int) 42345)
0x1cc: Push((int) 42344)
0x1cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ce: Pop(3)
0x1cf: Return(); Pop(0)

0x1d0: Push((int) 42345)
0x1d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1d3: PushEmpty(string)
0x1d4: Stack[-1] = "Smile"
0x1d5: Call2 0xe9

0x1d6: Pop(1)
0x1d7: Push((int) 540362)
0x1d8: @@ SetMessage(Stack[-1])
0x1d9: Pop(1)
0x1da: @@ ClearReplies()
0x1db: Pop(0)
0x1dc: Push((int) 540363)
0x1dd: Push((int) 42347)
0x1de: Push((int) 42346)
0x1df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e0: Pop(3)
0x1e1: Push((int) 540366)
0x1e2: Push((int) -1)
0x1e3: Push((int) 42349)
0x1e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e5: Pop(3)
0x1e6: Return(); Pop(0)

0x1e7: Push((int) 42347)
0x1e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1ea: PushEmpty(string)
0x1eb: Stack[-1] = "Smile"
0x1ec: Call2 0xe9

0x1ed: Pop(1)
0x1ee: Push((int) 540364)
0x1ef: @@ SetMessage(Stack[-1])
0x1f0: Pop(1)
0x1f1: @@ ClearReplies()
0x1f2: Pop(0)
0x1f3: Push((int) 540365)
0x1f4: Push((int) -1)
0x1f5: Push((int) 42348)
0x1f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f7: Pop(3)
0x1f8: Push((int) 540367)
0x1f9: Push((int) -1)
0x1fa: Push((int) 42350)
0x1fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fc: Pop(3)
0x1fd: Return(); Pop(0)

0x1fe: Push((int) 37319)
0x1ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x200: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x201: PushEmpty(string)
0x202: Stack[-1] = "Neutral"
0x203: Call2 0xe9

0x204: Pop(1)
0x205: Push((int) 535633)
0x206: @@ SetMessage(Stack[-1])
0x207: Pop(1)
0x208: @@ ClearReplies()
0x209: Pop(0)
0x20a: Push((int) 535634)
0x20b: Push((int) -1)
0x20c: Push((int) 37320)
0x20d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20e: Pop(3)
0x20f: Return(); Pop(0)

0x210: Push((int) 37252)
0x211: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x213: PushEmpty(string)
0x214: Stack[-1] = "Doubt"
0x215: Call2 0xe9

0x216: Pop(1)
0x217: Push((int) 535569)
0x218: @@ SetMessage(Stack[-1])
0x219: Pop(1)
0x21a: @@ ClearReplies()
0x21b: Pop(0)
0x21c: Push((int) 535570)
0x21d: Push((int) 42035)
0x21e: Push((int) 37253)
0x21f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x220: Pop(3)
0x221: Push((int) 540085)
0x222: Push((int) 42050)
0x223: Push((int) 42049)
0x224: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x225: Pop(3)
0x226: Return(); Pop(0)

0x227: Push((int) 42050)
0x228: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x229: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x22a: PushEmpty(string)
0x22b: Stack[-1] = "Neutral"
0x22c: Call2 0xe9

0x22d: Pop(1)
0x22e: Push((int) 540086)
0x22f: @@ SetMessage(Stack[-1])
0x230: Pop(1)
0x231: @@ ClearReplies()
0x232: Pop(0)
0x233: Push((int) 540087)
0x234: Push((int) 42035)
0x235: Push((int) 42051)
0x236: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x237: Pop(3)
0x238: Push((int) 540090)
0x239: Push((int) 42055)
0x23a: Push((int) 42056)
0x23b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23c: Pop(3)
0x23d: Return(); Pop(0)

0x23e: Push((int) 42035)
0x23f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x241: PushEmpty(string)
0x242: Stack[-1] = "Doubt"
0x243: Call2 0xe9

0x244: Pop(1)
0x245: Push((int) 540072)
0x246: @@ SetMessage(Stack[-1])
0x247: Pop(1)
0x248: @@ ClearReplies()
0x249: Pop(0)
0x24a: Push((int) 540073)
0x24b: Push((int) 42037)
0x24c: Push((int) 42036)
0x24d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24e: Pop(3)
0x24f: Push((int) 540084)
0x250: Push((int) 42039)
0x251: Push((int) 42047)
0x252: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x253: Pop(3)
0x254: Return(); Pop(0)

0x255: Push((int) 42037)
0x256: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x258: PushEmpty(string)
0x259: Stack[-1] = "Doubt"
0x25a: Call2 0xe9

0x25b: Pop(1)
0x25c: Push((int) 540074)
0x25d: @@ SetMessage(Stack[-1])
0x25e: Pop(1)
0x25f: @@ ClearReplies()
0x260: Pop(0)
0x261: Push((int) 540088)
0x262: Push((int) 42055)
0x263: Push((int) 42054)
0x264: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x265: Pop(3)
0x266: Return(); Pop(0)

0x267: Push((int) 42055)
0x268: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x26a: PushEmpty(string)
0x26b: Stack[-1] = "Sorrow"
0x26c: Call2 0xe9

0x26d: Pop(1)
0x26e: Push((int) 540089)
0x26f: @@ SetMessage(Stack[-1])
0x270: Pop(1)
0x271: @@ ClearReplies()
0x272: Pop(0)
0x273: Push((int) 540075)
0x274: Push((int) 42039)
0x275: Push((int) 42038)
0x276: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x277: Pop(3)
0x278: Push((int) 541860)
0x279: Push((int) 37260)
0x27a: Push((int) 44086)
0x27b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27c: Pop(3)
0x27d: Return(); Pop(0)

0x27e: Push((int) 42039)
0x27f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x281: PushEmpty(string)
0x282: Stack[-1] = "Neutral"
0x283: Call2 0xe9

0x284: Pop(1)
0x285: Push((int) 540076)
0x286: @@ SetMessage(Stack[-1])
0x287: Pop(1)
0x288: @@ ClearReplies()
0x289: Pop(0)
0x28a: Push((int) 540077)
0x28b: Push((int) 37260)
0x28c: Push((int) 42040)
0x28d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28e: Pop(3)
0x28f: Return(); Pop(0)

0x290: Push((int) 37260)
0x291: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x293: PushEmpty(bool, object)
0x294: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x295: Call2 0x480

0x296: Pop(1)
0x297: Pop(1); Push((bool) Stack[-1] == 0)
0x298: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x299: PushEmpty(string)
0x29a: Stack[-1] = "Agression"
0x29b: Call2 0xe9

0x29c: Pop(1)
0x29d: Push((int) 535577)
0x29e: @@ SetMessage(Stack[-1])
0x29f: Pop(1)
0x2a0: @@ ClearReplies()
0x2a1: Pop(0)
0x2a2: Push((int) 540353)
0x2a3: Push((int) 42337)
0x2a4: Push((int) 42336)
0x2a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a6: Pop(3)
0x2a7: Push((int) 535579)
0x2a8: Push((int) -1)
0x2a9: Push((int) 37262)
0x2aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ab: Pop(3)
0x2ac: Return(); Pop(0)

0x2ad: PushEmpty(bool, object)
0x2ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2af: Call2 0x480

0x2b0: Pop(1)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2b2: PushEmpty(string)
0x2b3: Stack[-1] = "Neutral"
0x2b4: Call2 0xe9

0x2b5: Pop(1)
0x2b6: Push((int) 535580)
0x2b7: @@ SetMessage(Stack[-1])
0x2b8: Pop(1)
0x2b9: @@ ClearReplies()
0x2ba: Pop(0)
0x2bb: Push((int) 535581)
0x2bc: Push((int) -1)
0x2bd: Push((int) 37264)
0x2be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bf: Pop(3)
0x2c0: Push((int) 535582)
0x2c1: Push((int) -1)
0x2c2: Push((int) 37265)
0x2c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c4: Pop(3)
0x2c5: Return(); Pop(0)

0x2c6: Push((int) 42337)
0x2c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2c9: PushEmpty(string)
0x2ca: Stack[-1] = "Neutral"
0x2cb: Call2 0xe9

0x2cc: Pop(1)
0x2cd: Push((int) 540354)
0x2ce: @@ SetMessage(Stack[-1])
0x2cf: Pop(1)
0x2d0: @@ ClearReplies()
0x2d1: Pop(0)
0x2d2: Push((int) 535578)
0x2d3: Push((int) -1)
0x2d4: Push((int) 37261)
0x2d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d6: Pop(3)
0x2d7: Return(); Pop(0)

0x2d8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2d9: PushEmpty(bool)
0x2da: Call2 0x583

0x2db: Pop(0)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2dd: @ lshStopAnimation()
0x2de: Pop(0)
0x2df: GOTO 0x2e2

0x2e0: @ StopAnimation()
0x2e1: Pop(0)
0x2e2: Return(); Pop(0)

0x2e3: GOTO 0x100

0x2e4: Return(); Pop(0)

0x2e5: PushEmpty()
0x2e6: Call2 0x2f1

0x2e7: Pop(0)
0x2e8: Return(); Pop(0)

0x2e9: PushEmpty()
0x2ea: PushEmpty(int, object)
0x2eb: Stack[-1] = Stack[-3]
0x2ec: Push(-2, 1); TaskCall(0)
0x2ed: Call2 0x0

0x2ee: Pop(-2, 1); TaskReturn
0x2ef: Pop(2)
0x2f0: Return(); Pop(0)

0x2f1: @ Hold()
0x2f2: Pop(0)
0x2f3: GOTO 0x2f1

0x2f4: Return(); Pop(0)

0x2f5: PushEmpty(bool, bool)
0x2f6: Push("cleanup")
0x2f7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2f8: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x2f9: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2fa: @ IsLoaded(Stack[-1])
0x2fb: Pop(0)
0x2fc: PushEmpty(bool)
0x2fd: Stack[-1] = (bool) 0
0x2fe: Pop(0); Push((bool) Stack[-2] == 0)
0x2ff: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x300: PushEmpty(bool)
0x301: Call2 0x321

0x302: Pop(0)
0x303: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x304: Stack[-1] = (bool) 1
0x305: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x306: PushEmpty(object)
0x307: Call2 0x437

0x308: Pop(0)
0x309: @ RemoveActor(Stack[-1])
0x30a: Pop(1)
0x30b: GOTO 0x310

0x30c: Push("restore")
0x30d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x310: Return(); Pop(2)

0x311: PushEmpty(bool)
0x312: Stack[-1] = (bool) 0
0x313: Push( Stack[0 + Tasks[-1].StackPointer] )
0x314: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x315: PushEmpty(bool)
0x316: Call2 0x321

0x317: Pop(0)
0x318: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x319: Stack[-1] = (bool) 1
0x31a: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31b: PushEmpty(object)
0x31c: Call2 0x437

0x31d: Pop(0)
0x31e: @ RemoveActor(Stack[-1])
0x31f: Pop(1)
0x320: Return(); Pop(0)

0x321: Stack[-1] = (bool) 1
0x322: Return(); Pop(0)

0x323: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x324: @@ GetPosition(Stack[-8])
0x325: Pop(0)
0x326: @@ GetEyesHeight(Stack[-9])
0x327: Pop(0)
0x328: Push(CvectorIndex(Stack[-8], 1))
0x329: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x32a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x32b: @ GetPosition(Stack[-7])
0x32c: Pop(0)
0x32d: @ GetEyesHeight(Stack[-9])
0x32e: Pop(0)
0x32f: Push(CvectorIndex(Stack[-7], 1))
0x330: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x331: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x332: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x333: Push(CvectorIndex(Stack[-6], 1))
0x334: Stack[-1] = (int) 0
0x335: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x336: Pop(0); Push(Stack[-6] | Stack[-6]);
0x337: Pop(1); Push(Sqrt(Stack[-1]))
0x338: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x339: Stack[-5] = -Stack[-6]; Pop(0);
0x33a: Pop(0); Push(Stack[-6] * Stack[-19]);
0x33b: PushEmpty(cvector, cvector)
0x33c: Push(CVector(0.0, 1.0, 0.0))
0x33d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x33e: Call2 0x43d

0x33f: Pop(1)
0x340: Push((int) 25)
0x341: Pop(2); Push(Stack[-2] * Stack[-1]);
0x342: Pop(2); Push(Stack[-2] + Stack[-1]);
0x343: Push(CVector(0.0, 10.0, 0.0))
0x344: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x345: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x346: @ IsOverrideActive(Stack[-2])
0x347: Pop(0)
0x348: Push(Stack[-2])
0x349: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x34a: Stack[-21] = (bool) 0
0x34b: Return(); Pop(18)

0x34c: @ StopWorld()
0x34d: Pop(0)
0x34e: @ CameraTransit(Stack[-3], Stack[-5])
0x34f: Pop(0)
0x350: Push(CvectorIndex(Stack[-4], 0))
0x351: Push(CvectorIndex(Stack[-5], 2))
0x352: @ Rotate(Stack[-2], Stack[-1])
0x353: Pop(2)
0x354: PushEmpty(bool)
0x355: Call2 0x583

0x356: Pop(0)
0x357: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x358: GOTO 0x361

0x359: Push("head")
0x35a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x35b: Pop(1)
0x35c: Push(Stack[-1])
0x35d: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x35e: Push("head")
0x35f: @ LookAsyncCamera(Stack[-1])
0x360: Pop(1)
0x361: @ CameraWaitForPlayFinish()
0x362: Pop(0)
0x363: @ ResumeWorld()
0x364: Pop(0)
0x365: Stack[-21] = (bool) 1
0x366: Return(); Pop(18)

0x367: PushEmpty(bool, bool)
0x368: @ CameraSwitchToNormal()
0x369: Pop(0)
0x36a: PushEmpty(bool)
0x36b: Call2 0x583

0x36c: Pop(0)
0x36d: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36e: GOTO 0x377

0x36f: Push("head")
0x370: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x371: Pop(1)
0x372: Push(Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x374: Push("head")
0x375: @ UnlookAsync(Stack[-1])
0x376: Pop(1)
0x377: Return(); Pop(2)

0x378: PushEmpty(int, int, int, int)
0x379: Push("voice_common")
0x37a: @ GetVariable(Stack[-1], Stack[-3])
0x37b: Pop(1)
0x37c: Push(Stack[-2])
0x37d: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x37e: PushEmpty(bool, object)
0x37f: Stack[-1] = Stack[-7]
0x380: Call2 0x3b2

0x381: Pop(1)
0x382: Pop(1); Push((bool) Stack[-1] == 0)
0x383: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x384: PushEmpty(bool, object)
0x385: Stack[-1] = Stack[-7]
0x386: Call2 0x3d7

0x387: Pop(1)
0x388: Pop(1); Push((bool) Stack[-1] == 0)
0x389: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38a: Stack[-6] = (bool) 0
0x38b: Return(); Pop(4)

0x38c: Push((int) 2)
0x38d: @ irand(Stack[-2], Stack[-1])
0x38e: Pop(1)
0x38f: Push(Stack[-1])
0x390: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x391: Push("voice_common")
0x392: Push((int) 1)
0x393: Pop(1); Push(Stack[-4] + Stack[-1]);
0x394: Push((int) 3)
0x395: Pop(2); Push(Stack[-2] % Stack[-1]);
0x396: @ SetVariable(Stack[-2], Stack[-1])
0x397: Pop(2)
0x398: GOTO 0x39d

0x399: Push("voice_common")
0x39a: Push((int) 0)
0x39b: @ SetVariable(Stack[-2], Stack[-1])
0x39c: Pop(2)
0x39d: GOTO 0x3b0

0x39e: PushEmpty(bool, object)
0x39f: Stack[-1] = Stack[-7]
0x3a0: Call2 0x3d7

0x3a1: Pop(1)
0x3a2: Pop(1); Push((bool) Stack[-1] == 0)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3a4: PushEmpty(bool, object)
0x3a5: Stack[-1] = Stack[-7]
0x3a6: Call2 0x3b2

0x3a7: Pop(1)
0x3a8: Pop(1); Push((bool) Stack[-1] == 0)
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3aa: Stack[-6] = (bool) 0
0x3ab: Return(); Pop(4)

0x3ac: Push("voice_common")
0x3ad: Push((int) 1)
0x3ae: @ SetVariable(Stack[-2], Stack[-1])
0x3af: Pop(2)
0x3b0: Stack[-6] = (bool) 1
0x3b1: Return(); Pop(4)

0x3b2: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3b3: Stack[-5] = "c"
0x3b4: Stack[-4] = (int) 0
0x3b5: Push((int) 1)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3b7: Push((int) 1)
0x3b8: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3b9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3ba: @@ HasProperty(Stack[-1], Stack[-4])
0x3bb: Pop(1)
0x3bc: Pop(0); Push((bool) Stack[-3] == 0)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3be: GOTO 0x3c2

0x3bf: Push((int) 1)
0x3c0: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3c1: GOTO 0x3b5

0x3c2: Pop(0); Push((bool) Stack[-4] == 0)
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c4: Stack[-12] = (bool) 0
0x3c5: Return(); Pop(10)

0x3c6: Stack[-2] = (int) 0
0x3c7: Push((int) 1)
0x3c8: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3ca: @ irand(Stack[-2], Stack[-4])
0x3cb: Pop(0)
0x3cc: Push((int) 1)
0x3cd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3ce: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3cf: @@ GetProperty(Stack[-1], Stack[-2])
0x3d0: Pop(1)
0x3d1: PushEmpty(bool, string)
0x3d2: Stack[-1] = Stack[-3]
0x3d3: Call2 0x421

0x3d4: Stack[-14] = Stack[-2]
0x3d5: Pop(2)
0x3d6: Return(); Pop(10)

0x3d7: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3d8: Push("d")
0x3d9: PushEmpty(int)
0x3da: Call2 0x44c

0x3db: Pop(0)
0x3dc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3dd: Push("m")
0x3de: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3df: Stack[-4] = (int) 0
0x3e0: Push((int) 1)
0x3e1: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3e2: Push((int) 1)
0x3e3: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3e4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3e5: @@ HasProperty(Stack[-1], Stack[-4])
0x3e6: Pop(1)
0x3e7: Pop(0); Push((bool) Stack[-3] == 0)
0x3e8: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e9: GOTO 0x3ed

0x3ea: Push((int) 1)
0x3eb: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3ec: GOTO 0x3e0

0x3ed: Pop(0); Push((bool) Stack[-4] == 0)
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ef: Stack[-12] = (bool) 0
0x3f0: Return(); Pop(10)

0x3f1: Stack[-2] = (int) 0
0x3f2: Push((int) 1)
0x3f3: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f5: @ irand(Stack[-2], Stack[-4])
0x3f6: Pop(0)
0x3f7: Push((int) 1)
0x3f8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3f9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3fa: @@ GetProperty(Stack[-1], Stack[-2])
0x3fb: Pop(1)
0x3fc: PushEmpty(bool, string)
0x3fd: Stack[-1] = Stack[-3]
0x3fe: Call2 0x421

0x3ff: Stack[-14] = Stack[-2]
0x400: Pop(2)
0x401: Return(); Pop(10)

0x402: PushEmpty(bool, float, float, bool, float, float)
0x403: @ lshHasAnimation(Stack[-3], Stack[-7])
0x404: Pop(0)
0x405: Push(Stack[-3])
0x406: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x407: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x408: Pop(0)
0x409: Push((bool) 0)
0x40a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x40b: Pop(1)
0x40c: GOTO 0x411

0x40d: Push("Can't find lsh animation : ")
0x40e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x40f: @ Trace(Stack[-1])
0x410: Pop(1)
0x411: Return(); Pop(6)

0x412: PushEmpty(bool, float, float, bool, float, float)
0x413: @ lshHasAnimation(Stack[-3], Stack[-8])
0x414: Pop(0)
0x415: Push(Stack[-3])
0x416: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x417: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x418: Pop(0)
0x419: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x41a: Pop(0)
0x41b: GOTO 0x420

0x41c: Push("Can't find lsh animation : ")
0x41d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x41e: @ Trace(Stack[-1])
0x41f: Pop(1)
0x420: Return(); Pop(6)

0x421: PushEmpty(bool, bool)
0x422: PushEmpty(bool)
0x423: Call2 0x583

0x424: Pop(0)
0x425: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x426: @ lshHasSpeech(Stack[-1], Stack[-3])
0x427: Pop(0)
0x428: Push(Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42a: @ lshPlaySpeech(Stack[-3])
0x42b: Pop(0)
0x42c: Stack[-4] = (bool) 1
0x42d: Return(); Pop(2)

0x42e: Stack[-4] = (bool) 0
0x42f: Return(); Pop(2)

0x430: PushEmpty(bool)
0x431: Call2 0x583

0x432: Pop(0)
0x433: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x434: @ lshStopSpeech()
0x435: Pop(0)
0x436: Return(); Pop(0)

0x437: PushEmpty(object, object)
0x438: @ self(Stack[-1])
0x439: Pop(0)
0x43a: Stack[-3] = Stack[-1]
0x43b: Return(); Pop(2)

0x43c: Stack[-1] = 0
0x43d: PushEmpty(float, float)
0x43e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x43f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x440: Push((float)0.0)
0x441: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x442: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x443: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x444: Return(); Pop(2)

0x445: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x446: Return(); Pop(2)

0x447: PushEmpty(int, int)
0x448: @ GetVariable(Stack[-3], Stack[-1])
0x449: Pop(0)
0x44a: Stack[-4] = Stack[-1]
0x44b: Return(); Pop(2)

0x44c: PushEmpty(float, float)
0x44d: @ GetGameTime(Stack[-1])
0x44e: Pop(0)
0x44f: Push((int) 1)
0x450: PushEmpty(int)
0x451: Push((int) 24)
0x452: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x453: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x454: Return(); Pop(2)

0x455: PushEmpty()
0x456: Push("ood12BurahFactory1")
0x457: Push((int) 1)
0x458: @ SetVariable(Stack[-2], Stack[-1])
0x459: Pop(2)
0x45a: Return(); Pop(0)

0x45b: PushEmpty()
0x45c: Push("d12q01BurahInSobor")
0x45d: Push((int) 1)
0x45e: @ SetVariable(Stack[-2], Stack[-1])
0x45f: Pop(2)
0x460: PushEmpty()
0x461: Call2 0x4cc

0x462: Pop(0)
0x463: Return(); Pop(0)

0x464: PushEmpty()
0x465: PushEmpty(int, string)
0x466: Stack[-1] = "d12q01_Burah"
0x467: Call2 0x447

0x468: Pop(1)
0x469: Push((int) 0)
0x46a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x46b: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x46c: Push("d12q01_Burah")
0x46d: Push((int) 1)
0x46e: @ SetVariable(Stack[-2], Stack[-1])
0x46f: Pop(2)
0x470: PushEmpty()
0x471: Call2 0x4d9

0x472: Pop(0)
0x473: Return(); Pop(0)

0x474: PushEmpty()
0x475: Push("d12q01BurahVisit")
0x476: Push((int) 1)
0x477: @ SetVariable(Stack[-2], Stack[-1])
0x478: Pop(2)
0x479: Return(); Pop(0)

0x47a: PushEmpty()
0x47b: Push("ood12BurahFactory2")
0x47c: Push((int) 1)
0x47d: @ SetVariable(Stack[-2], Stack[-1])
0x47e: Pop(2)
0x47f: Return(); Pop(0)

0x480: PushEmpty()
0x481: PushEmpty(bool, object)
0x482: Stack[-1] = Stack[-3]
0x483: Call2 0x4c6

0x484: Pop(1)
0x485: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x486: Stack[-2] = (bool) 1
0x487: Return(); Pop(0)

0x488: Stack[-2] = (bool) 0
0x489: Return(); Pop(0)

0x48a: PushEmpty()
0x48b: PushEmpty(int, string)
0x48c: Stack[-1] = "b12q01ChildsAreVisited"
0x48d: Call2 0x447

0x48e: Pop(1)
0x48f: Push((int) 0)
0x490: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x491: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x492: Stack[-2] = (bool) 1
0x493: Return(); Pop(0)

0x494: Stack[-2] = (bool) 0
0x495: Return(); Pop(0)

0x496: PushEmpty()
0x497: PushEmpty(int, string)
0x498: Stack[-1] = "game_final"
0x499: Call2 0x447

0x49a: Pop(1)
0x49b: Push((int) 0)
0x49c: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x49d: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49e: Stack[-2] = (bool) 1
0x49f: Return(); Pop(0)

0x4a0: Stack[-2] = (bool) 0
0x4a1: Return(); Pop(0)

0x4a2: PushEmpty()
0x4a3: PushEmpty(int, string)
0x4a4: Stack[-1] = "d12q01BurahInSobor"
0x4a5: Call2 0x447

0x4a6: Pop(1)
0x4a7: Push((int) 0)
0x4a8: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4aa: Stack[-2] = (bool) 1
0x4ab: Return(); Pop(0)

0x4ac: Stack[-2] = (bool) 0
0x4ad: Return(); Pop(0)

0x4ae: PushEmpty()
0x4af: PushEmpty(int, string)
0x4b0: Stack[-1] = "ood12BurahFactory1"
0x4b1: Call2 0x447

0x4b2: Pop(1)
0x4b3: Push((int) 0)
0x4b4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b6: Stack[-2] = (bool) 1
0x4b7: Return(); Pop(0)

0x4b8: Stack[-2] = (bool) 0
0x4b9: Return(); Pop(0)

0x4ba: PushEmpty()
0x4bb: PushEmpty(int, string)
0x4bc: Stack[-1] = "ood12BurahFactory2"
0x4bd: Call2 0x447

0x4be: Pop(1)
0x4bf: Push((int) 0)
0x4c0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c2: Stack[-2] = (bool) 1
0x4c3: Return(); Pop(0)

0x4c4: Stack[-2] = (bool) 0
0x4c5: Return(); Pop(0)

0x4c6: PushEmpty()
0x4c7: PushEmpty(bool)
0x4c8: Call2 0x555

0x4c9: Stack[-3] = Stack[-1]
0x4ca: Pop(1)
0x4cb: Return(); Pop(0)

0x4cc: PushEmpty(object, object)
0x4cd: Push((int) 700)
0x4ce: Push((int) 1)
0x4cf: Push((int) 535683)
0x4d0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4d1: Pop(3)
0x4d2: PushEmpty(bool, object, int)
0x4d3: Stack[-2] = Stack[-4]
0x4d4: Stack[-1] = (int) 699
0x4d5: Call2 0x4f3

0x4d6: Pop(3)
0x4d7: Return(); Pop(2)

0x4d8: Stack[-1] = 0
0x4d9: PushEmpty(object, object)
0x4da: Push((int) 706)
0x4db: Push((int) 1)
0x4dc: Push((int) 535689)
0x4dd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4de: Pop(3)
0x4df: PushEmpty(bool, object, int)
0x4e0: Stack[-2] = Stack[-4]
0x4e1: Stack[-1] = (int) 699
0x4e2: Call2 0x4f3

0x4e3: Pop(3)
0x4e4: Return(); Pop(2)

0x4e5: Stack[-1] = 0
0x4e6: PushEmpty(object, object)
0x4e7: @ GetDiaryRoot(Stack[-1])
0x4e8: Pop(0)
0x4e9: Pop(0); Push((bool) Stack[-1] == 0)
0x4ea: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4eb: Push("Can't retrieve diary root")
0x4ec: @ Trace(Stack[-1])
0x4ed: Pop(1)
0x4ee: Stack[-3] = (bool) 0
0x4ef: Return(); Pop(2)

0x4f0: Stack[-3] = Stack[-1]
0x4f1: Return(); Pop(2)

0x4f2: Stack[-1] = 0
0x4f3: PushEmpty(object, object, int, object, object, int)
0x4f4: PushEmpty(object)
0x4f5: Call2 0x4e6

0x4f6: Stack[-4] = Stack[-1]
0x4f7: Pop(1)
0x4f8: @@ Find(Stack[-7], Stack[-2])
0x4f9: Pop(0)
0x4fa: Pop(0); Push((bool) Stack[-2] == 0)
0x4fb: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4fc: Push("Can't find diary parent with id: ")
0x4fd: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4fe: @ Trace(Stack[-1])
0x4ff: Pop(1)
0x500: Stack[-9] = (bool) 0
0x501: Return(); Pop(6)

0x502: @@ AddChild(Stack[-8])
0x503: Pop(0)
0x504: Push((int) 7)
0x505: @ SendWorldWndMessage(Stack[-1])
0x506: Pop(1)
0x507: @@ GetCategory(Stack[-1])
0x508: Pop(0)
0x509: @ SetDiarySection(Stack[-1])
0x50a: Pop(0)
0x50b: Stack[-9] = (bool) 0
0x50c: Return(); Pop(6)

0x50d: Stack[-2] = 0
0x50e: Stack[-3] = 0
0x50f: PushEmpty(int, int)
0x510: Push("branch")
0x511: @ GetVariable(Stack[-1], Stack[-2])
0x512: Pop(1)
0x513: Push((int) 0)
0x514: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x515: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x516: Stack[-3] = (int) 1
0x517: Return(); Pop(2)

0x518: GOTO 0x51e

0x519: Push((int) 1)
0x51a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x51b: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x51c: Stack[-3] = (int) 2
0x51d: Return(); Pop(2)

0x51e: Stack[-3] = (int) 3
0x51f: Return(); Pop(2)

0x520: PushEmpty()
0x521: Push((int) 18)
0x522: @@ add(Stack[-1])
0x523: Pop(1)
0x524: Push((int) 24)
0x525: @@ add(Stack[-1])
0x526: Pop(1)
0x527: Push((int) 20)
0x528: @@ add(Stack[-1])
0x529: Pop(1)
0x52a: Push((int) 14)
0x52b: @@ add(Stack[-1])
0x52c: Pop(1)
0x52d: Push((bool) 0)
0x52e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52f: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x530: Push((int) 10)
0x531: @@ add(Stack[-1])
0x532: Pop(1)
0x533: Push((int) 17)
0x534: @@ add(Stack[-1])
0x535: Pop(1)
0x536: Push((int) 8)
0x537: @@ add(Stack[-1])
0x538: Pop(1)
0x539: GOTO 0x540

0x53a: Push((int) 1)
0x53b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x53c: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53d: Push((int) 10)
0x53e: @@ add(Stack[-1])
0x53f: Pop(1)
0x540: Return(); Pop(0)

0x541: PushEmpty(int, int)
0x542: Push("vol_")
0x543: Pop(1); Push(Stack[-1] + Stack[-4]);
0x544: @ GetVariable(Stack[-1], Stack[-2])
0x545: Pop(1)
0x546: Push((int) 4)
0x547: Pop(1); Push(Stack[-2] & Stack[-1]);
0x548: Push((int) 0)
0x549: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x54a: Return(); Pop(2)

0x54b: PushEmpty(int, int)
0x54c: Push("vol_")
0x54d: Pop(1); Push(Stack[-1] + Stack[-4]);
0x54e: @ GetVariable(Stack[-1], Stack[-2])
0x54f: Pop(1)
0x550: Push((int) 16)
0x551: Pop(1); Push(Stack[-2] & Stack[-1]);
0x552: Push((int) 0)
0x553: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x554: Return(); Pop(2)

0x555: PushEmpty(object, int, int, int, object, int, int, int)
0x556: @ CreateIntVector(Stack[-4])
0x557: Pop(0)
0x558: PushEmpty(object, bool, int)
0x559: Stack[-3] = Stack[-7]
0x55a: Stack[-2] = (bool) 0
0x55b: Stack[-1] = (int) -1
0x55c: Call2 0x520

0x55d: Pop(3)
0x55e: @@ size(Stack[-3])
0x55f: Pop(0)
0x560: Stack[-2] = (int) 0
0x561: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x562: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x563: @@ get(Stack[-1], Stack[-2])
0x564: Pop(0)
0x565: PushEmpty(bool)
0x566: Stack[-1] = (bool) 1
0x567: PushEmpty(bool, int)
0x568: Stack[-1] = Stack[-4]
0x569: Call2 0x54b

0x56a: Pop(1)
0x56b: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x56c: PushEmpty(bool, int)
0x56d: Stack[-1] = Stack[-4]
0x56e: Call2 0x541

0x56f: Pop(1)
0x570: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x571: Stack[-1] = (bool) 0
0x572: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x573: Stack[-9] = (bool) 0
0x574: Return(); Pop(8)

0x575: Push((int) 1)
0x576: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x577: GOTO 0x561

0x578: Stack[-9] = (bool) 1
0x579: Return(); Pop(8)

0x57a: Stack[-4] = 0
0x57b: Stack[-1] = (int) 515592
0x57c: Return(); Pop(0)

0x57d: Stack[-1] = (int) 511961
0x57e: Return(); Pop(0)

0x57f: Stack[-1] = "ui/NPC_Burah.png"
0x580: Return(); Pop(0)

0x581: Stack[-1] = "ui/NPC_Burah_b.png"
0x582: Return(); Pop(0)

0x583: Stack[-1] = (bool) 1
0x584: Return(); Pop(0)

