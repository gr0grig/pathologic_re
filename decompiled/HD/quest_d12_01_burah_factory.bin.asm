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
0xe: Call2 0x57f

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x57d

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x581

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x583

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x511

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
0x31: Call2 0x439

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x37a

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
0x48: Call2 0x368

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
0x5b: Call2 0x4b0

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x498

0x61: Pop(1)
0x62: Pop(1); Push((bool) Stack[-1] == 0)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x66: PushEmpty(object, object)
0x67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69: Call2 0x457

0x6a: Pop(2)
0x6b: PushEmpty(object, object)
0x6c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e: Call2 0x476

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
0x87: Call2 0x476

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
0x98: Call2 0x4a4

0x99: Pop(1)
0x9a: Pop(1); Push((bool) Stack[-1] == 0)
0x9b: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9c: PushEmpty(bool, object)
0x9d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e: Call2 0x482

0x9f: Pop(1)
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Stack[-1] = (bool) 1
0xa2: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa3: PushEmpty(bool, object)
0xa4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Call2 0x498

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
0xb4: Call2 0x48c

0xb5: Pop(1)
0xb6: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb7: PushEmpty(bool, object)
0xb8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Call2 0x4bc

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
0xcc: Call2 0x585

0xcd: Pop(0)
0xce: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xcf: @ lshWaitForAnimEnd()
0xd0: Pop(0)
0xd1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: GOTO 0xd9

0xd4: PushEmpty(string)
0xd5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd6: Call2 0x404

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
0xeb: Call2 0x585

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
0xfb: Call2 0x414

0xfc: Pop(2)
0xfd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xfe: Return(); Pop(0)

0xff: PushEmpty()
0x100: Push((int) 1)
0x101: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x102: PushEmpty()
0x103: Call2 0x432

0x104: Pop(0)
0x105: Push((int) 37261)
0x106: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x466

0x10c: Pop(2)
0x10d: Push((int) 37264)
0x10e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x110: PushEmpty(object, object)
0x111: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x112: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x113: Call2 0x45d

0x114: Pop(2)
0x115: Push((int) 37320)
0x116: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11b: Call2 0x45d

0x11c: Pop(2)
0x11d: Push((int) 42338)
0x11e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x120: PushEmpty(object, object)
0x121: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x122: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x123: Call2 0x47c

0x124: Pop(2)
0x125: Push((int) 37250)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x128: PushEmpty(bool)
0x129: Stack[-1] = (bool) 0
0x12a: PushEmpty(bool, object)
0x12b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Call2 0x4b0

0x12d: Pop(1)
0x12e: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x12f: PushEmpty(bool, object)
0x130: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x131: Call2 0x498

0x132: Pop(1)
0x133: Pop(1); Push((bool) Stack[-1] == 0)
0x134: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x135: Stack[-1] = (bool) 1
0x136: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x137: PushEmpty(object, object)
0x138: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x139: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13a: Call2 0x457

0x13b: Pop(2)
0x13c: PushEmpty(object, object)
0x13d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13f: Call2 0x476

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
0x158: Call2 0x476

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
0x169: Call2 0x4a4

0x16a: Pop(1)
0x16b: Pop(1); Push((bool) Stack[-1] == 0)
0x16c: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16d: PushEmpty(bool, object)
0x16e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16f: Call2 0x482

0x170: Pop(1)
0x171: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x172: Stack[-1] = (bool) 1
0x173: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x174: PushEmpty(bool, object)
0x175: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x176: Call2 0x498

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
0x185: Call2 0x48c

0x186: Pop(1)
0x187: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x188: PushEmpty(bool, object)
0x189: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18a: Call2 0x4bc

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
0x295: Call2 0x482

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
0x2af: Call2 0x482

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
0x2da: Call2 0x585

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
0x307: Call2 0x439

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
0x31c: Call2 0x439

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
0x33e: Call2 0x43f

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
0x34e: Push((bool) 1)
0x34f: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x350: Pop(1)
0x351: Push(CvectorIndex(Stack[-4], 0))
0x352: Push(CvectorIndex(Stack[-5], 2))
0x353: @ Rotate(Stack[-2], Stack[-1])
0x354: Pop(2)
0x355: PushEmpty(bool)
0x356: Call2 0x585

0x357: Pop(0)
0x358: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x359: GOTO 0x362

0x35a: Push("head")
0x35b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x35c: Pop(1)
0x35d: Push(Stack[-1])
0x35e: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x35f: Push("head")
0x360: @ LookAsyncCamera(Stack[-1])
0x361: Pop(1)
0x362: @ CameraWaitForPlayFinish()
0x363: Pop(0)
0x364: @ ResumeWorld()
0x365: Pop(0)
0x366: Stack[-21] = (bool) 1
0x367: Return(); Pop(18)

0x368: PushEmpty(bool, bool)
0x369: Push((bool) 1)
0x36a: @ CameraSwitchToNormal(Stack[-1])
0x36b: Pop(1)
0x36c: PushEmpty(bool)
0x36d: Call2 0x585

0x36e: Pop(0)
0x36f: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x370: GOTO 0x379

0x371: Push("head")
0x372: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x373: Pop(1)
0x374: Push(Stack[-1])
0x375: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x376: Push("head")
0x377: @ UnlookAsync(Stack[-1])
0x378: Pop(1)
0x379: Return(); Pop(2)

0x37a: PushEmpty(int, int, int, int)
0x37b: Push("voice_common")
0x37c: @ GetVariable(Stack[-1], Stack[-3])
0x37d: Pop(1)
0x37e: Push(Stack[-2])
0x37f: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x380: PushEmpty(bool, object)
0x381: Stack[-1] = Stack[-7]
0x382: Call2 0x3b4

0x383: Pop(1)
0x384: Pop(1); Push((bool) Stack[-1] == 0)
0x385: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x386: PushEmpty(bool, object)
0x387: Stack[-1] = Stack[-7]
0x388: Call2 0x3d9

0x389: Pop(1)
0x38a: Pop(1); Push((bool) Stack[-1] == 0)
0x38b: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38c: Stack[-6] = (bool) 0
0x38d: Return(); Pop(4)

0x38e: Push((int) 2)
0x38f: @ irand(Stack[-2], Stack[-1])
0x390: Pop(1)
0x391: Push(Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x393: Push("voice_common")
0x394: Push((int) 1)
0x395: Pop(1); Push(Stack[-4] + Stack[-1]);
0x396: Push((int) 3)
0x397: Pop(2); Push(Stack[-2] % Stack[-1]);
0x398: @ SetVariable(Stack[-2], Stack[-1])
0x399: Pop(2)
0x39a: GOTO 0x39f

0x39b: Push("voice_common")
0x39c: Push((int) 0)
0x39d: @ SetVariable(Stack[-2], Stack[-1])
0x39e: Pop(2)
0x39f: GOTO 0x3b2

0x3a0: PushEmpty(bool, object)
0x3a1: Stack[-1] = Stack[-7]
0x3a2: Call2 0x3d9

0x3a3: Pop(1)
0x3a4: Pop(1); Push((bool) Stack[-1] == 0)
0x3a5: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3a6: PushEmpty(bool, object)
0x3a7: Stack[-1] = Stack[-7]
0x3a8: Call2 0x3b4

0x3a9: Pop(1)
0x3aa: Pop(1); Push((bool) Stack[-1] == 0)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3ac: Stack[-6] = (bool) 0
0x3ad: Return(); Pop(4)

0x3ae: Push("voice_common")
0x3af: Push((int) 1)
0x3b0: @ SetVariable(Stack[-2], Stack[-1])
0x3b1: Pop(2)
0x3b2: Stack[-6] = (bool) 1
0x3b3: Return(); Pop(4)

0x3b4: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3b5: Stack[-5] = "c"
0x3b6: Stack[-4] = (int) 0
0x3b7: Push((int) 1)
0x3b8: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3b9: Push((int) 1)
0x3ba: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3bb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3bc: @@ HasProperty(Stack[-1], Stack[-4])
0x3bd: Pop(1)
0x3be: Pop(0); Push((bool) Stack[-3] == 0)
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3c0: GOTO 0x3c4

0x3c1: Push((int) 1)
0x3c2: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3c3: GOTO 0x3b7

0x3c4: Pop(0); Push((bool) Stack[-4] == 0)
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c6: Stack[-12] = (bool) 0
0x3c7: Return(); Pop(10)

0x3c8: Stack[-2] = (int) 0
0x3c9: Push((int) 1)
0x3ca: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cc: @ irand(Stack[-2], Stack[-4])
0x3cd: Pop(0)
0x3ce: Push((int) 1)
0x3cf: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3d0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3d1: @@ GetProperty(Stack[-1], Stack[-2])
0x3d2: Pop(1)
0x3d3: PushEmpty(bool, string)
0x3d4: Stack[-1] = Stack[-3]
0x3d5: Call2 0x423

0x3d6: Stack[-14] = Stack[-2]
0x3d7: Pop(2)
0x3d8: Return(); Pop(10)

0x3d9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3da: Push("d")
0x3db: PushEmpty(int)
0x3dc: Call2 0x44e

0x3dd: Pop(0)
0x3de: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3df: Push("m")
0x3e0: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3e1: Stack[-4] = (int) 0
0x3e2: Push((int) 1)
0x3e3: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3e4: Push((int) 1)
0x3e5: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3e6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3e7: @@ HasProperty(Stack[-1], Stack[-4])
0x3e8: Pop(1)
0x3e9: Pop(0); Push((bool) Stack[-3] == 0)
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3eb: GOTO 0x3ef

0x3ec: Push((int) 1)
0x3ed: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3ee: GOTO 0x3e2

0x3ef: Pop(0); Push((bool) Stack[-4] == 0)
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f1: Stack[-12] = (bool) 0
0x3f2: Return(); Pop(10)

0x3f3: Stack[-2] = (int) 0
0x3f4: Push((int) 1)
0x3f5: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3f6: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f7: @ irand(Stack[-2], Stack[-4])
0x3f8: Pop(0)
0x3f9: Push((int) 1)
0x3fa: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3fb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3fc: @@ GetProperty(Stack[-1], Stack[-2])
0x3fd: Pop(1)
0x3fe: PushEmpty(bool, string)
0x3ff: Stack[-1] = Stack[-3]
0x400: Call2 0x423

0x401: Stack[-14] = Stack[-2]
0x402: Pop(2)
0x403: Return(); Pop(10)

0x404: PushEmpty(bool, float, float, bool, float, float)
0x405: @ lshHasAnimation(Stack[-3], Stack[-7])
0x406: Pop(0)
0x407: Push(Stack[-3])
0x408: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x409: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x40a: Pop(0)
0x40b: Push((bool) 0)
0x40c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x40d: Pop(1)
0x40e: GOTO 0x413

0x40f: Push("Can't find lsh animation : ")
0x410: Pop(1); Push(Stack[-1] + Stack[-8]);
0x411: @ Trace(Stack[-1])
0x412: Pop(1)
0x413: Return(); Pop(6)

0x414: PushEmpty(bool, float, float, bool, float, float)
0x415: @ lshHasAnimation(Stack[-3], Stack[-8])
0x416: Pop(0)
0x417: Push(Stack[-3])
0x418: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x419: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x41a: Pop(0)
0x41b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x41c: Pop(0)
0x41d: GOTO 0x422

0x41e: Push("Can't find lsh animation : ")
0x41f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x420: @ Trace(Stack[-1])
0x421: Pop(1)
0x422: Return(); Pop(6)

0x423: PushEmpty(bool, bool)
0x424: PushEmpty(bool)
0x425: Call2 0x585

0x426: Pop(0)
0x427: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x428: @ lshHasSpeech(Stack[-1], Stack[-3])
0x429: Pop(0)
0x42a: Push(Stack[-1])
0x42b: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42c: @ lshPlaySpeech(Stack[-3])
0x42d: Pop(0)
0x42e: Stack[-4] = (bool) 1
0x42f: Return(); Pop(2)

0x430: Stack[-4] = (bool) 0
0x431: Return(); Pop(2)

0x432: PushEmpty(bool)
0x433: Call2 0x585

0x434: Pop(0)
0x435: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x436: @ lshStopSpeech()
0x437: Pop(0)
0x438: Return(); Pop(0)

0x439: PushEmpty(object, object)
0x43a: @ self(Stack[-1])
0x43b: Pop(0)
0x43c: Stack[-3] = Stack[-1]
0x43d: Return(); Pop(2)

0x43e: Stack[-1] = 0
0x43f: PushEmpty(float, float)
0x440: Pop(0); Push(Stack[-3] | Stack[-3]);
0x441: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x442: Push((float)0.0)
0x443: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x444: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x445: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x446: Return(); Pop(2)

0x447: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x448: Return(); Pop(2)

0x449: PushEmpty(int, int)
0x44a: @ GetVariable(Stack[-3], Stack[-1])
0x44b: Pop(0)
0x44c: Stack[-4] = Stack[-1]
0x44d: Return(); Pop(2)

0x44e: PushEmpty(float, float)
0x44f: @ GetGameTime(Stack[-1])
0x450: Pop(0)
0x451: Push((int) 1)
0x452: PushEmpty(int)
0x453: Push((int) 24)
0x454: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x455: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x456: Return(); Pop(2)

0x457: PushEmpty()
0x458: Push("ood12BurahFactory1")
0x459: Push((int) 1)
0x45a: @ SetVariable(Stack[-2], Stack[-1])
0x45b: Pop(2)
0x45c: Return(); Pop(0)

0x45d: PushEmpty()
0x45e: Push("d12q01BurahInSobor")
0x45f: Push((int) 1)
0x460: @ SetVariable(Stack[-2], Stack[-1])
0x461: Pop(2)
0x462: PushEmpty()
0x463: Call2 0x4ce

0x464: Pop(0)
0x465: Return(); Pop(0)

0x466: PushEmpty()
0x467: PushEmpty(int, string)
0x468: Stack[-1] = "d12q01_Burah"
0x469: Call2 0x449

0x46a: Pop(1)
0x46b: Push((int) 0)
0x46c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x46d: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x46e: Push("d12q01_Burah")
0x46f: Push((int) 1)
0x470: @ SetVariable(Stack[-2], Stack[-1])
0x471: Pop(2)
0x472: PushEmpty()
0x473: Call2 0x4db

0x474: Pop(0)
0x475: Return(); Pop(0)

0x476: PushEmpty()
0x477: Push("d12q01BurahVisit")
0x478: Push((int) 1)
0x479: @ SetVariable(Stack[-2], Stack[-1])
0x47a: Pop(2)
0x47b: Return(); Pop(0)

0x47c: PushEmpty()
0x47d: Push("ood12BurahFactory2")
0x47e: Push((int) 1)
0x47f: @ SetVariable(Stack[-2], Stack[-1])
0x480: Pop(2)
0x481: Return(); Pop(0)

0x482: PushEmpty()
0x483: PushEmpty(bool, object)
0x484: Stack[-1] = Stack[-3]
0x485: Call2 0x4c8

0x486: Pop(1)
0x487: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x488: Stack[-2] = (bool) 1
0x489: Return(); Pop(0)

0x48a: Stack[-2] = (bool) 0
0x48b: Return(); Pop(0)

0x48c: PushEmpty()
0x48d: PushEmpty(int, string)
0x48e: Stack[-1] = "b12q01ChildsAreVisited"
0x48f: Call2 0x449

0x490: Pop(1)
0x491: Push((int) 0)
0x492: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x493: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x494: Stack[-2] = (bool) 1
0x495: Return(); Pop(0)

0x496: Stack[-2] = (bool) 0
0x497: Return(); Pop(0)

0x498: PushEmpty()
0x499: PushEmpty(int, string)
0x49a: Stack[-1] = "game_final"
0x49b: Call2 0x449

0x49c: Pop(1)
0x49d: Push((int) 0)
0x49e: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x49f: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x4a0: Stack[-2] = (bool) 1
0x4a1: Return(); Pop(0)

0x4a2: Stack[-2] = (bool) 0
0x4a3: Return(); Pop(0)

0x4a4: PushEmpty()
0x4a5: PushEmpty(int, string)
0x4a6: Stack[-1] = "d12q01BurahInSobor"
0x4a7: Call2 0x449

0x4a8: Pop(1)
0x4a9: Push((int) 0)
0x4aa: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x4ab: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4ac: Stack[-2] = (bool) 1
0x4ad: Return(); Pop(0)

0x4ae: Stack[-2] = (bool) 0
0x4af: Return(); Pop(0)

0x4b0: PushEmpty()
0x4b1: PushEmpty(int, string)
0x4b2: Stack[-1] = "ood12BurahFactory1"
0x4b3: Call2 0x449

0x4b4: Pop(1)
0x4b5: Push((int) 0)
0x4b6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b8: Stack[-2] = (bool) 1
0x4b9: Return(); Pop(0)

0x4ba: Stack[-2] = (bool) 0
0x4bb: Return(); Pop(0)

0x4bc: PushEmpty()
0x4bd: PushEmpty(int, string)
0x4be: Stack[-1] = "ood12BurahFactory2"
0x4bf: Call2 0x449

0x4c0: Pop(1)
0x4c1: Push((int) 0)
0x4c2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c4: Stack[-2] = (bool) 1
0x4c5: Return(); Pop(0)

0x4c6: Stack[-2] = (bool) 0
0x4c7: Return(); Pop(0)

0x4c8: PushEmpty()
0x4c9: PushEmpty(bool)
0x4ca: Call2 0x557

0x4cb: Stack[-3] = Stack[-1]
0x4cc: Pop(1)
0x4cd: Return(); Pop(0)

0x4ce: PushEmpty(object, object)
0x4cf: Push((int) 700)
0x4d0: Push((int) 1)
0x4d1: Push((int) 535683)
0x4d2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4d3: Pop(3)
0x4d4: PushEmpty(bool, object, int)
0x4d5: Stack[-2] = Stack[-4]
0x4d6: Stack[-1] = (int) 699
0x4d7: Call2 0x4f5

0x4d8: Pop(3)
0x4d9: Return(); Pop(2)

0x4da: Stack[-1] = 0
0x4db: PushEmpty(object, object)
0x4dc: Push((int) 706)
0x4dd: Push((int) 1)
0x4de: Push((int) 535689)
0x4df: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4e0: Pop(3)
0x4e1: PushEmpty(bool, object, int)
0x4e2: Stack[-2] = Stack[-4]
0x4e3: Stack[-1] = (int) 699
0x4e4: Call2 0x4f5

0x4e5: Pop(3)
0x4e6: Return(); Pop(2)

0x4e7: Stack[-1] = 0
0x4e8: PushEmpty(object, object)
0x4e9: @ GetDiaryRoot(Stack[-1])
0x4ea: Pop(0)
0x4eb: Pop(0); Push((bool) Stack[-1] == 0)
0x4ec: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4ed: Push("Can't retrieve diary root")
0x4ee: @ Trace(Stack[-1])
0x4ef: Pop(1)
0x4f0: Stack[-3] = (bool) 0
0x4f1: Return(); Pop(2)

0x4f2: Stack[-3] = Stack[-1]
0x4f3: Return(); Pop(2)

0x4f4: Stack[-1] = 0
0x4f5: PushEmpty(object, object, int, object, object, int)
0x4f6: PushEmpty(object)
0x4f7: Call2 0x4e8

0x4f8: Stack[-4] = Stack[-1]
0x4f9: Pop(1)
0x4fa: @@ Find(Stack[-7], Stack[-2])
0x4fb: Pop(0)
0x4fc: Pop(0); Push((bool) Stack[-2] == 0)
0x4fd: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x4fe: Push("Can't find diary parent with id: ")
0x4ff: Pop(1); Push(Stack[-1] + Stack[-8]);
0x500: @ Trace(Stack[-1])
0x501: Pop(1)
0x502: Stack[-9] = (bool) 0
0x503: Return(); Pop(6)

0x504: @@ AddChild(Stack[-8])
0x505: Pop(0)
0x506: Push((int) 7)
0x507: @ SendWorldWndMessage(Stack[-1])
0x508: Pop(1)
0x509: @@ GetCategory(Stack[-1])
0x50a: Pop(0)
0x50b: @ SetDiarySection(Stack[-1])
0x50c: Pop(0)
0x50d: Stack[-9] = (bool) 0
0x50e: Return(); Pop(6)

0x50f: Stack[-2] = 0
0x510: Stack[-3] = 0
0x511: PushEmpty(int, int)
0x512: Push("branch")
0x513: @ GetVariable(Stack[-1], Stack[-2])
0x514: Pop(1)
0x515: Push((int) 0)
0x516: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x517: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x518: Stack[-3] = (int) 1
0x519: Return(); Pop(2)

0x51a: GOTO 0x520

0x51b: Push((int) 1)
0x51c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x51d: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51e: Stack[-3] = (int) 2
0x51f: Return(); Pop(2)

0x520: Stack[-3] = (int) 3
0x521: Return(); Pop(2)

0x522: PushEmpty()
0x523: Push((int) 18)
0x524: @@ add(Stack[-1])
0x525: Pop(1)
0x526: Push((int) 24)
0x527: @@ add(Stack[-1])
0x528: Pop(1)
0x529: Push((int) 20)
0x52a: @@ add(Stack[-1])
0x52b: Pop(1)
0x52c: Push((int) 14)
0x52d: @@ add(Stack[-1])
0x52e: Pop(1)
0x52f: Push((bool) 0)
0x530: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x531: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x532: Push((int) 10)
0x533: @@ add(Stack[-1])
0x534: Pop(1)
0x535: Push((int) 17)
0x536: @@ add(Stack[-1])
0x537: Pop(1)
0x538: Push((int) 8)
0x539: @@ add(Stack[-1])
0x53a: Pop(1)
0x53b: GOTO 0x542

0x53c: Push((int) 1)
0x53d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x53e: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x53f: Push((int) 10)
0x540: @@ add(Stack[-1])
0x541: Pop(1)
0x542: Return(); Pop(0)

0x543: PushEmpty(int, int)
0x544: Push("vol_")
0x545: Pop(1); Push(Stack[-1] + Stack[-4]);
0x546: @ GetVariable(Stack[-1], Stack[-2])
0x547: Pop(1)
0x548: Push((int) 4)
0x549: Pop(1); Push(Stack[-2] & Stack[-1]);
0x54a: Push((int) 0)
0x54b: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x54c: Return(); Pop(2)

0x54d: PushEmpty(int, int)
0x54e: Push("vol_")
0x54f: Pop(1); Push(Stack[-1] + Stack[-4]);
0x550: @ GetVariable(Stack[-1], Stack[-2])
0x551: Pop(1)
0x552: Push((int) 16)
0x553: Pop(1); Push(Stack[-2] & Stack[-1]);
0x554: Push((int) 0)
0x555: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x556: Return(); Pop(2)

0x557: PushEmpty(object, int, int, int, object, int, int, int)
0x558: @ CreateIntVector(Stack[-4])
0x559: Pop(0)
0x55a: PushEmpty(object, bool, int)
0x55b: Stack[-3] = Stack[-7]
0x55c: Stack[-2] = (bool) 0
0x55d: Stack[-1] = (int) -1
0x55e: Call2 0x522

0x55f: Pop(3)
0x560: @@ size(Stack[-3])
0x561: Pop(0)
0x562: Stack[-2] = (int) 0
0x563: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x564: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x565: @@ get(Stack[-1], Stack[-2])
0x566: Pop(0)
0x567: PushEmpty(bool)
0x568: Stack[-1] = (bool) 1
0x569: PushEmpty(bool, int)
0x56a: Stack[-1] = Stack[-4]
0x56b: Call2 0x54d

0x56c: Pop(1)
0x56d: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x56e: PushEmpty(bool, int)
0x56f: Stack[-1] = Stack[-4]
0x570: Call2 0x543

0x571: Pop(1)
0x572: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x573: Stack[-1] = (bool) 0
0x574: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x575: Stack[-9] = (bool) 0
0x576: Return(); Pop(8)

0x577: Push((int) 1)
0x578: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x579: GOTO 0x563

0x57a: Stack[-9] = (bool) 1
0x57b: Return(); Pop(8)

0x57c: Stack[-4] = 0
0x57d: Stack[-1] = (int) 515592
0x57e: Return(); Pop(0)

0x57f: Stack[-1] = (int) 511961
0x580: Return(); Pop(0)

0x581: Stack[-1] = "ui/NPC_Burah.png"
0x582: Return(); Pop(0)

0x583: Stack[-1] = "ui/NPC_Burah_b.png"
0x584: Return(); Pop(0)

0x585: Stack[-1] = (bool) 1
0x586: Return(); Pop(0)

