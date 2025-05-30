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
	all
	idle
	Mysterious
	Neutral
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
	quest_d11_06
	completed
	d11q06
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x1f3
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1f7 Vars = (string)
		EVENT_6 Op = 0x20b Vars = ()
		EVENT_5 Op = 0x218 Vars = ()
		EVENT_7 Op = 0x261 Vars = (int)
		EVENT_45 Op = 0x2a3 Vars = (bool)
		EVENT_0 Op = 0x2af Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x338

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4ed

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4eb

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x4ef

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x4f1

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4da

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
0x31: Call2 0x44c

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x38d

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
0x48: Call2 0x37c

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
0x58: Stack[-1] = "Staring"
0x59: Call2 0x90

0x5a: Pop(1)
0x5b: Push((int) 534532)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x498

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 539632)
0x66: Push((int) 41601)
0x67: Push((int) 41578)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 534533)
0x6b: Push((int) -1)
0x6c: Push((int) 36174)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0x4f3

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x417

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
0x92: Call2 0x4f3

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
0xa2: Call2 0x427

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x445

0xab: Pop(0)
0xac: Push((int) 36172)
0xad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xaf: PushEmpty(object, object)
0xb0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2: Call2 0x48e

0xb3: Pop(2)
0xb4: Push((int) 41620)
0xb5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: PushEmpty(object, object)
0xb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba: Call2 0x48e

0xbb: Pop(2)
0xbc: Push((int) 36173)
0xbd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xbf: PushEmpty(string)
0xc0: Stack[-1] = "Staring"
0xc1: Call2 0x90

0xc2: Pop(1)
0xc3: Push((int) 534532)
0xc4: @@ SetMessage(Stack[-1])
0xc5: Pop(1)
0xc6: @@ ClearReplies()
0xc7: Pop(0)
0xc8: PushEmpty(bool, object)
0xc9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xca: Call2 0x498

0xcb: Pop(1)
0xcc: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcd: Push((int) 539632)
0xce: Push((int) 41601)
0xcf: Push((int) 41578)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: Push((int) 534533)
0xd3: Push((int) -1)
0xd4: Push((int) 36174)
0xd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6: Pop(3)
0xd7: Return(); Pop(0)

0xd8: Push((int) 41601)
0xd9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xdb: PushEmpty(string)
0xdc: Stack[-1] = "Staring"
0xdd: Call2 0x90

0xde: Pop(1)
0xdf: Push((int) 539655)
0xe0: @@ SetMessage(Stack[-1])
0xe1: Pop(1)
0xe2: @@ ClearReplies()
0xe3: Pop(0)
0xe4: Push((int) 539656)
0xe5: Push((int) 41603)
0xe6: Push((int) 41602)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Push((int) 539669)
0xea: Push((int) 41607)
0xeb: Push((int) 41615)
0xec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: Push((int) 41603)
0xf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Mysterious"
0xf4: Call2 0x90

0xf5: Pop(1)
0xf6: Push((int) 539657)
0xf7: @@ SetMessage(Stack[-1])
0xf8: Pop(1)
0xf9: @@ ClearReplies()
0xfa: Pop(0)
0xfb: Push((int) 539658)
0xfc: Push((int) 41605)
0xfd: Push((int) 41604)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Return(); Pop(0)

0x101: Push((int) 41605)
0x102: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x104: PushEmpty(string)
0x105: Stack[-1] = "Mysterious"
0x106: Call2 0x90

0x107: Pop(1)
0x108: Push((int) 539659)
0x109: @@ SetMessage(Stack[-1])
0x10a: Pop(1)
0x10b: @@ ClearReplies()
0x10c: Pop(0)
0x10d: Push((int) 539660)
0x10e: Push((int) 41607)
0x10f: Push((int) 41606)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Push((int) 539670)
0x113: Push((int) 41607)
0x114: Push((int) 41616)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: Push((int) 41607)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Neutral"
0x11d: Call2 0x90

0x11e: Pop(1)
0x11f: Push((int) 539661)
0x120: @@ SetMessage(Stack[-1])
0x121: Pop(1)
0x122: @@ ClearReplies()
0x123: Pop(0)
0x124: Push((int) 539662)
0x125: Push((int) 41609)
0x126: Push((int) 41608)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Return(); Pop(0)

0x12a: Push((int) 41609)
0x12b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x12d: PushEmpty(string)
0x12e: Stack[-1] = "Neutral"
0x12f: Call2 0x90

0x130: Pop(1)
0x131: Push((int) 539663)
0x132: @@ SetMessage(Stack[-1])
0x133: Pop(1)
0x134: @@ ClearReplies()
0x135: Pop(0)
0x136: Push((int) 539664)
0x137: Push((int) 41579)
0x138: Push((int) 41610)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Return(); Pop(0)

0x13c: Push((int) 41579)
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Neutral"
0x141: Call2 0x90

0x142: Pop(1)
0x143: Push((int) 539633)
0x144: @@ SetMessage(Stack[-1])
0x145: Pop(1)
0x146: @@ ClearReplies()
0x147: Pop(0)
0x148: Push((int) 539634)
0x149: Push((int) 41581)
0x14a: Push((int) 41580)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Push((int) 539675)
0x14e: Push((int) 41623)
0x14f: Push((int) 41622)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: Push((int) 41623)
0x154: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x156: PushEmpty(string)
0x157: Stack[-1] = "Neutral"
0x158: Call2 0x90

0x159: Pop(1)
0x15a: Push((int) 539676)
0x15b: @@ SetMessage(Stack[-1])
0x15c: Pop(1)
0x15d: @@ ClearReplies()
0x15e: Pop(0)
0x15f: Push((int) 539677)
0x160: Push((int) 41612)
0x161: Push((int) 41624)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Return(); Pop(0)

0x165: Push((int) 41581)
0x166: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x168: PushEmpty(string)
0x169: Stack[-1] = "Neutral"
0x16a: Call2 0x90

0x16b: Pop(1)
0x16c: Push((int) 539635)
0x16d: @@ SetMessage(Stack[-1])
0x16e: Pop(1)
0x16f: @@ ClearReplies()
0x170: Pop(0)
0x171: Push((int) 539665)
0x172: Push((int) 41612)
0x173: Push((int) 41611)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: Return(); Pop(0)

0x177: Push((int) 41612)
0x178: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x17a: PushEmpty(string)
0x17b: Stack[-1] = "Neutral"
0x17c: Call2 0x90

0x17d: Pop(1)
0x17e: Push((int) 539666)
0x17f: @@ SetMessage(Stack[-1])
0x180: Pop(1)
0x181: @@ ClearReplies()
0x182: Pop(0)
0x183: Push((int) 539667)
0x184: Push((int) 41614)
0x185: Push((int) 41613)
0x186: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x187: Pop(3)
0x188: Return(); Pop(0)

0x189: Push((int) 41627)
0x18a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x18c: Push((int) 41629)
0x18d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x18f: PushEmpty(string)
0x190: Stack[-1] = "Neutral"
0x191: Call2 0x90

0x192: Pop(1)
0x193: Push((int) 539681)
0x194: @@ SetMessage(Stack[-1])
0x195: Pop(1)
0x196: @@ ClearReplies()
0x197: Pop(0)
0x198: Push((int) 539683)
0x199: Push((int) 41634)
0x19a: Push((int) 41632)
0x19b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19c: Pop(3)
0x19d: Return(); Pop(0)

0x19e: Push((int) 41634)
0x19f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1a1: PushEmpty(string)
0x1a2: Stack[-1] = "Neutral"
0x1a3: Call2 0x90

0x1a4: Pop(1)
0x1a5: Push((int) 539684)
0x1a6: @@ SetMessage(Stack[-1])
0x1a7: Pop(1)
0x1a8: @@ ClearReplies()
0x1a9: Pop(0)
0x1aa: Push((int) 539685)
0x1ab: Push((int) 41619)
0x1ac: Push((int) 41635)
0x1ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ae: Pop(3)
0x1af: Push((int) 539686)
0x1b0: Push((int) 41619)
0x1b1: Push((int) 41636)
0x1b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b3: Pop(3)
0x1b4: Return(); Pop(0)

0x1b5: Push((int) 41614)
0x1b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1b8: PushEmpty(string)
0x1b9: Stack[-1] = "Mysterious"
0x1ba: Call2 0x90

0x1bb: Pop(1)
0x1bc: Push((int) 539668)
0x1bd: @@ SetMessage(Stack[-1])
0x1be: Pop(1)
0x1bf: @@ ClearReplies()
0x1c0: Pop(0)
0x1c1: Push((int) 539672)
0x1c2: Push((int) 41619)
0x1c3: Push((int) 41618)
0x1c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c5: Pop(3)
0x1c6: Return(); Pop(0)

0x1c7: Push((int) 41619)
0x1c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1ca: PushEmpty(string)
0x1cb: Stack[-1] = "Mysterious"
0x1cc: Call2 0x90

0x1cd: Pop(1)
0x1ce: Push((int) 539673)
0x1cf: @@ SetMessage(Stack[-1])
0x1d0: Pop(1)
0x1d1: @@ ClearReplies()
0x1d2: Pop(0)
0x1d3: Push((int) 534531)
0x1d4: Push((int) -1)
0x1d5: Push((int) 36172)
0x1d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d7: Pop(3)
0x1d8: Push((int) 539674)
0x1d9: Push((int) -1)
0x1da: Push((int) 41620)
0x1db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dc: Pop(3)
0x1dd: Return(); Pop(0)

0x1de: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1df: PushEmpty(bool)
0x1e0: Call2 0x4f3

0x1e1: Pop(0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e3: @ lshStopAnimation()
0x1e4: Pop(0)
0x1e5: GOTO 0x1e8

0x1e6: @ StopAnimation()
0x1e7: Pop(0)
0x1e8: Return(); Pop(0)

0x1e9: GOTO 0xa7

0x1ea: Return(); Pop(0)

0x1eb: PushEmpty()
0x1ec: PushEmpty(int, object)
0x1ed: Stack[-1] = Stack[-3]
0x1ee: Push(-2, 1); TaskCall(0)
0x1ef: Call2 0x0

0x1f0: Pop(-2, 1); TaskReturn
0x1f1: Pop(2)
0x1f2: Return(); Pop(0)

0x1f3: PushEmpty()
0x1f4: Call2 0x21c

0x1f5: Pop(0)
0x1f6: Return(); Pop(0)

0x1f7: PushEmpty(bool, bool)
0x1f8: Push("cleanup")
0x1f9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1fb: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1fc: @ IsLoaded(Stack[-1])
0x1fd: Pop(0)
0x1fe: Pop(0); Push((bool) Stack[-1] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x200: PushEmpty(object)
0x201: Call2 0x44c

0x202: Pop(0)
0x203: @ RemoveActor(Stack[-1])
0x204: Pop(1)
0x205: GOTO 0x20a

0x206: Push("restore")
0x207: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x209: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x20a: Return(); Pop(2)

0x20b: Push( Stack[1 + Tasks[-1].StackPointer] )
0x20c: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x20d: PushEmpty(object)
0x20e: Call2 0x44c

0x20f: Pop(0)
0x210: @ RemoveActor(Stack[-1])
0x211: Pop(1)
0x212: @ Hold()
0x213: Pop(0)
0x214: PushEmpty()
0x215: Call2 0x287

0x216: Pop(0)
0x217: Return(); Pop(0)

0x218: PushEmpty()
0x219: Call2 0x296

0x21a: Pop(0)
0x21b: Return(); Pop(0)

0x21c: PushEmpty(bool)
0x21d: Call2 0x333

0x21e: Pop(0)
0x21f: Pop(1); Push((bool) Stack[-1] == 0)
0x220: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x221: @ Hold()
0x222: Pop(0)
0x223: @ GetDirection(Stack[-0])
0x224: Pop(0)
0x225: PushEmpty()
0x226: Call2 0x2cc

0x227: Pop(0)
0x228: GOTO 0x225

0x229: Return(); Pop(0)

0x22a: PushEmpty(object, object)
0x22b: Push("player")
0x22c: @ FindActor(Stack[-2], Stack[-1])
0x22d: Pop(1)
0x22e: Pop(0); Push((bool) Stack[-1] == 0)
0x22f: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x230: Stack[-3] = (bool) 0
0x231: Return(); Pop(2)

0x232: PushEmpty(bool, object)
0x233: Stack[-1] = Stack[-3]
0x234: Call2 0x32a

0x235: Stack[-5] = Stack[-2]
0x236: Pop(2)
0x237: Return(); Pop(2)

0x238: Stack[-1] = 0
0x239: Push(CvectorIndex(Stack[-0], 0))
0x23a: Push(CvectorIndex(Stack[-0], 2))
0x23b: @ RotateAsync(Stack[-2], Stack[-1])
0x23c: Pop(2)
0x23d: Return(); Pop(0)

0x23e: PushEmpty(object, bool, object, bool)
0x23f: Push("player")
0x240: @ FindActor(Stack[-3], Stack[-1])
0x241: Pop(1)
0x242: Pop(0); Push((bool) Stack[-2] == 0)
0x243: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x244: Stack[-5] = (bool) 0
0x245: Return(); Pop(4)

0x246: PushEmpty(float, object)
0x247: Stack[-1] = Stack[-4]
0x248: Call2 0x318

0x249: Pop(1)
0x24a: Push((float)90000.0)
0x24b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24d: Stack[-5] = (bool) 0
0x24e: Return(); Pop(4)

0x24f: @ CanSee(Stack[-1], Stack[-2])
0x250: Pop(0)
0x251: Stack[-5] = Stack[-1]
0x252: Return(); Pop(4)

0x253: Stack[-2] = 0
0x254: PushEmpty(float, float)
0x255: Push((int) 8)
0x256: Push((int) 16)
0x257: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x258: Pop(2)
0x259: Push((int) 10)
0x25a: @ SetTimer(Stack[-1], Stack[-2])
0x25b: Pop(1)
0x25c: Return(); Pop(2)

0x25d: Push((int) 10)
0x25e: @ KillTimer(Stack[-1])
0x25f: Pop(1)
0x260: Return(); Pop(0)

0x261: PushEmpty()
0x262: Push((int) 10)
0x263: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x265: PushEmpty()
0x266: Call2 0x25d

0x267: Pop(0)
0x268: PushEmpty(bool)
0x269: Stack[-1] = (bool) 0
0x26a: PushEmpty(bool)
0x26b: Call2 0x333

0x26c: Pop(0)
0x26d: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x26e: PushEmpty(bool)
0x26f: Call2 0x23e

0x270: Pop(0)
0x271: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x272: Stack[-1] = (bool) 1
0x273: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x274: PushEmpty(bool)
0x275: Call2 0x22a

0x276: Pop(0)
0x277: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x278: PushEmpty(bool, object)
0x279: PushEmpty(object)
0x27a: Call2 0x44c

0x27b: Stack[-2] = Stack[-1]
0x27c: Pop(1)
0x27d: Call2 0x3c7

0x27e: Pop(2)
0x27f: GOTO 0x286

0x280: PushEmpty()
0x281: Call2 0x239

0x282: Pop(0)
0x283: PushEmpty()
0x284: Call2 0x254

0x285: Pop(0)
0x286: Return(); Pop(0)

0x287: PushEmpty()
0x288: Call2 0x313

0x289: Pop(0)
0x28a: PushEmpty()
0x28b: Call2 0x25d

0x28c: Pop(0)
0x28d: @ lshStopSpeech()
0x28e: Pop(0)
0x28f: @ lshStopAnimation()
0x290: Pop(0)
0x291: @ StopAsync()
0x292: Pop(0)
0x293: @ Hold()
0x294: Pop(0)
0x295: Return(); Pop(0)

0x296: @ StopGroup0()
0x297: Pop(0)
0x298: PushEmpty()
0x299: Call2 0x25d

0x29a: Pop(0)
0x29b: PushEmpty(string)
0x29c: Stack[-1] = "Neutral"
0x29d: Call2 0x417

0x29e: Pop(1)
0x29f: PushEmpty()
0x2a0: Call2 0x254

0x2a1: Pop(0)
0x2a2: Return(); Pop(0)

0x2a3: PushEmpty()
0x2a4: Push(Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a6: PushEmpty()
0x2a7: Call2 0x254

0x2a8: Pop(0)
0x2a9: GOTO 0x2ae

0x2aa: PushEmpty(string)
0x2ab: Stack[-1] = "Neutral"
0x2ac: Call2 0x417

0x2ad: Pop(1)
0x2ae: Return(); Pop(0)

0x2af: PushEmpty(bool, bool)
0x2b0: @ IsOverrideActive(Stack[-1])
0x2b1: Pop(0)
0x2b2: Pop(0); Push((bool) Stack[-1] == 0)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2b4: EventDisable(0)
0x2b5: PushEmpty()
0x2b6: Call2 0x313

0x2b7: Pop(0)
0x2b8: PushEmpty(bool, object)
0x2b9: Stack[-1] = Stack[-5]
0x2ba: Call2 0x32a

0x2bb: Pop(2)
0x2bc: EventEnable(0)
0x2bd: PushEmpty(object)
0x2be: Stack[-1] = Stack[-4]
0x2bf: Call2 0x1eb

0x2c0: Pop(1)
0x2c1: PushEmpty(string)
0x2c2: Stack[-1] = "Neutral"
0x2c3: Call2 0x417

0x2c4: Pop(1)
0x2c5: PushEmpty()
0x2c6: Call2 0x25d

0x2c7: Pop(0)
0x2c8: PushEmpty()
0x2c9: Call2 0x254

0x2ca: Pop(0)
0x2cb: Return(); Pop(2)

0x2cc: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x2cd: @ WaitForAnimEnd()
0x2ce: Pop(0)
0x2cf: PushEmpty(bool)
0x2d0: Call2 0x333

0x2d1: Pop(0)
0x2d2: Pop(1); Push((bool) Stack[-1] == 0)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d4: Return(); Pop(12)

0x2d5: PushEmpty(int)
0x2d6: Call2 0x47d

0x2d7: Stack[-7] = Stack[-1]
0x2d8: Pop(1)
0x2d9: Stack[-5] = (int) 0
0x2da: PushEmpty(bool)
0x2db: Stack[-1] = (bool) 0
0x2dc: Push((int) 5)
0x2dd: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2df: PushEmpty(bool)
0x2e0: Call2 0x333

0x2e1: Pop(0)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e3: Stack[-1] = (bool) 1
0x2e4: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x2e5: Pop(0); Push((bool) Stack[-6] == 0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2e7: Push((int) 3)
0x2e8: @ Sleep(Stack[-1], Stack[-5])
0x2e9: Pop(1)
0x2ea: Pop(0); Push((bool) Stack[-4] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2ec: GOTO 0x30e

0x2ed: GOTO 0x303

0x2ee: @ irand(Stack[-3], Stack[-6])
0x2ef: Pop(0)
0x2f0: Push((int) 5)
0x2f1: @ irand(Stack[-3], Stack[-1])
0x2f2: Pop(1)
0x2f3: Push((int) 0)
0x2f4: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f6: Stack[-3] = (int) 0
0x2f7: Push("all")
0x2f8: PushEmpty(string, int)
0x2f9: Stack[-1] = Stack[-6]
0x2fa: Call2 0x476

0x2fb: Pop(1)
0x2fc: @ PlayAnimation(Stack[-2], Stack[-1])
0x2fd: Pop(2)
0x2fe: @ WaitForAnimEnd(Stack[-1])
0x2ff: Pop(0)
0x300: Pop(0); Push((bool) Stack[-1] == 0)
0x301: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x302: GOTO 0x30e

0x303: PushEmpty(bool)
0x304: Call2 0x311

0x305: Pop(0)
0x306: Pop(1); Push((bool) Stack[-1] == 0)
0x307: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x308: GOTO 0x30e

0x309: @ ResetAAS()
0x30a: Pop(0)
0x30b: Push((int) 1)
0x30c: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x30d: GOTO 0x2da

0x30e: @ ResetAAS()
0x30f: Pop(0)
0x310: Return(); Pop(12)

0x311: Stack[-1] = (bool) 1
0x312: Return(); Pop(0)

0x313: @ StopAnimation()
0x314: Pop(0)
0x315: @ StopGroup0()
0x316: Pop(0)
0x317: Return(); Pop(0)

0x318: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x319: @ GetPosition(Stack[-3])
0x31a: Pop(0)
0x31b: @@ GetPosition(Stack[-2])
0x31c: Pop(0)
0x31d: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x31e: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x31f: Return(); Pop(6)

0x320: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x321: @ GetPosition(Stack[-3])
0x322: Pop(0)
0x323: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x324: Push(CvectorIndex(Stack[-2], 0))
0x325: Push(CvectorIndex(Stack[-3], 2))
0x326: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x327: Pop(2)
0x328: Stack[-8] = Stack[-1]
0x329: Return(); Pop(6)

0x32a: PushEmpty(cvector, cvector)
0x32b: @@ GetPosition(Stack[-1])
0x32c: Pop(0)
0x32d: PushEmpty(bool, cvector)
0x32e: Stack[-1] = Stack[-3]
0x32f: Call2 0x320

0x330: Stack[-6] = Stack[-2]
0x331: Pop(2)
0x332: Return(); Pop(2)

0x333: PushEmpty(bool, bool)
0x334: @ IsLoaded(Stack[-1])
0x335: Pop(0)
0x336: Stack[-3] = Stack[-1]
0x337: Return(); Pop(2)

0x338: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x339: @@ GetPosition(Stack[-8])
0x33a: Pop(0)
0x33b: @@ GetEyesHeight(Stack[-9])
0x33c: Pop(0)
0x33d: Push(CvectorIndex(Stack[-8], 1))
0x33e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x33f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x340: @ GetPosition(Stack[-7])
0x341: Pop(0)
0x342: @ GetEyesHeight(Stack[-9])
0x343: Pop(0)
0x344: Push(CvectorIndex(Stack[-7], 1))
0x345: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x346: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x347: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x348: Push(CvectorIndex(Stack[-6], 1))
0x349: Stack[-1] = (int) 0
0x34a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x34b: Pop(0); Push(Stack[-6] | Stack[-6]);
0x34c: Pop(1); Push(Sqrt(Stack[-1]))
0x34d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x34e: Stack[-5] = -Stack[-6]; Pop(0);
0x34f: Pop(0); Push(Stack[-6] * Stack[-19]);
0x350: PushEmpty(cvector, cvector)
0x351: Push(CVector(0.0, 1.0, 0.0))
0x352: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x353: Call2 0x452

0x354: Pop(1)
0x355: Push((int) 25)
0x356: Pop(2); Push(Stack[-2] * Stack[-1]);
0x357: Pop(2); Push(Stack[-2] + Stack[-1]);
0x358: Push(CVector(0.0, 10.0, 0.0))
0x359: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x35a: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x35b: @ IsOverrideActive(Stack[-2])
0x35c: Pop(0)
0x35d: Push(Stack[-2])
0x35e: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x35f: Stack[-21] = (bool) 0
0x360: Return(); Pop(18)

0x361: @ StopWorld()
0x362: Pop(0)
0x363: @ CameraTransit(Stack[-3], Stack[-5])
0x364: Pop(0)
0x365: Push(CvectorIndex(Stack[-4], 0))
0x366: Push(CvectorIndex(Stack[-5], 2))
0x367: @ Rotate(Stack[-2], Stack[-1])
0x368: Pop(2)
0x369: PushEmpty(bool)
0x36a: Call2 0x4f3

0x36b: Pop(0)
0x36c: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36d: GOTO 0x376

0x36e: Push("head")
0x36f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x370: Pop(1)
0x371: Push(Stack[-1])
0x372: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x373: Push("head")
0x374: @ LookAsyncCamera(Stack[-1])
0x375: Pop(1)
0x376: @ CameraWaitForPlayFinish()
0x377: Pop(0)
0x378: @ ResumeWorld()
0x379: Pop(0)
0x37a: Stack[-21] = (bool) 1
0x37b: Return(); Pop(18)

0x37c: PushEmpty(bool, bool)
0x37d: @ CameraSwitchToNormal()
0x37e: Pop(0)
0x37f: PushEmpty(bool)
0x380: Call2 0x4f3

0x381: Pop(0)
0x382: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x383: GOTO 0x38c

0x384: Push("head")
0x385: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x386: Pop(1)
0x387: Push(Stack[-1])
0x388: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x389: Push("head")
0x38a: @ UnlookAsync(Stack[-1])
0x38b: Pop(1)
0x38c: Return(); Pop(2)

0x38d: PushEmpty(int, int, int, int)
0x38e: Push("voice_common")
0x38f: @ GetVariable(Stack[-1], Stack[-3])
0x390: Pop(1)
0x391: Push(Stack[-2])
0x392: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x393: PushEmpty(bool, object)
0x394: Stack[-1] = Stack[-7]
0x395: Call2 0x3c7

0x396: Pop(1)
0x397: Pop(1); Push((bool) Stack[-1] == 0)
0x398: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x399: PushEmpty(bool, object)
0x39a: Stack[-1] = Stack[-7]
0x39b: Call2 0x3ec

0x39c: Pop(1)
0x39d: Pop(1); Push((bool) Stack[-1] == 0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39f: Stack[-6] = (bool) 0
0x3a0: Return(); Pop(4)

0x3a1: Push((int) 2)
0x3a2: @ irand(Stack[-2], Stack[-1])
0x3a3: Pop(1)
0x3a4: Push(Stack[-1])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3a6: Push("voice_common")
0x3a7: Push((int) 1)
0x3a8: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3a9: Push((int) 3)
0x3aa: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3ab: @ SetVariable(Stack[-2], Stack[-1])
0x3ac: Pop(2)
0x3ad: GOTO 0x3b2

0x3ae: Push("voice_common")
0x3af: Push((int) 0)
0x3b0: @ SetVariable(Stack[-2], Stack[-1])
0x3b1: Pop(2)
0x3b2: GOTO 0x3c5

0x3b3: PushEmpty(bool, object)
0x3b4: Stack[-1] = Stack[-7]
0x3b5: Call2 0x3ec

0x3b6: Pop(1)
0x3b7: Pop(1); Push((bool) Stack[-1] == 0)
0x3b8: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3b9: PushEmpty(bool, object)
0x3ba: Stack[-1] = Stack[-7]
0x3bb: Call2 0x3c7

0x3bc: Pop(1)
0x3bd: Pop(1); Push((bool) Stack[-1] == 0)
0x3be: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3bf: Stack[-6] = (bool) 0
0x3c0: Return(); Pop(4)

0x3c1: Push("voice_common")
0x3c2: Push((int) 1)
0x3c3: @ SetVariable(Stack[-2], Stack[-1])
0x3c4: Pop(2)
0x3c5: Stack[-6] = (bool) 1
0x3c6: Return(); Pop(4)

0x3c7: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3c8: Stack[-5] = "c"
0x3c9: Stack[-4] = (int) 0
0x3ca: Push((int) 1)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3cc: Push((int) 1)
0x3cd: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3ce: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3cf: @@ HasProperty(Stack[-1], Stack[-4])
0x3d0: Pop(1)
0x3d1: Pop(0); Push((bool) Stack[-3] == 0)
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d3: GOTO 0x3d7

0x3d4: Push((int) 1)
0x3d5: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3d6: GOTO 0x3ca

0x3d7: Pop(0); Push((bool) Stack[-4] == 0)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3d9: Stack[-12] = (bool) 0
0x3da: Return(); Pop(10)

0x3db: Stack[-2] = (int) 0
0x3dc: Push((int) 1)
0x3dd: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3de: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3df: @ irand(Stack[-2], Stack[-4])
0x3e0: Pop(0)
0x3e1: Push((int) 1)
0x3e2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3e3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3e4: @@ GetProperty(Stack[-1], Stack[-2])
0x3e5: Pop(1)
0x3e6: PushEmpty(bool, string)
0x3e7: Stack[-1] = Stack[-3]
0x3e8: Call2 0x436

0x3e9: Stack[-14] = Stack[-2]
0x3ea: Pop(2)
0x3eb: Return(); Pop(10)

0x3ec: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3ed: Push("d")
0x3ee: PushEmpty(int)
0x3ef: Call2 0x46d

0x3f0: Pop(0)
0x3f1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f2: Push("m")
0x3f3: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3f4: Stack[-4] = (int) 0
0x3f5: Push((int) 1)
0x3f6: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3f7: Push((int) 1)
0x3f8: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3f9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3fa: @@ HasProperty(Stack[-1], Stack[-4])
0x3fb: Pop(1)
0x3fc: Pop(0); Push((bool) Stack[-3] == 0)
0x3fd: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fe: GOTO 0x402

0x3ff: Push((int) 1)
0x400: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x401: GOTO 0x3f5

0x402: Pop(0); Push((bool) Stack[-4] == 0)
0x403: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x404: Stack[-12] = (bool) 0
0x405: Return(); Pop(10)

0x406: Stack[-2] = (int) 0
0x407: Push((int) 1)
0x408: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x409: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x40a: @ irand(Stack[-2], Stack[-4])
0x40b: Pop(0)
0x40c: Push((int) 1)
0x40d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x40e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x40f: @@ GetProperty(Stack[-1], Stack[-2])
0x410: Pop(1)
0x411: PushEmpty(bool, string)
0x412: Stack[-1] = Stack[-3]
0x413: Call2 0x436

0x414: Stack[-14] = Stack[-2]
0x415: Pop(2)
0x416: Return(); Pop(10)

0x417: PushEmpty(bool, float, float, bool, float, float)
0x418: @ lshHasAnimation(Stack[-3], Stack[-7])
0x419: Pop(0)
0x41a: Push(Stack[-3])
0x41b: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x41c: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x41d: Pop(0)
0x41e: Push((bool) 0)
0x41f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x420: Pop(1)
0x421: GOTO 0x426

0x422: Push("Can't find lsh animation : ")
0x423: Pop(1); Push(Stack[-1] + Stack[-8]);
0x424: @ Trace(Stack[-1])
0x425: Pop(1)
0x426: Return(); Pop(6)

0x427: PushEmpty(bool, float, float, bool, float, float)
0x428: @ lshHasAnimation(Stack[-3], Stack[-8])
0x429: Pop(0)
0x42a: Push(Stack[-3])
0x42b: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x42d: Pop(0)
0x42e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x42f: Pop(0)
0x430: GOTO 0x435

0x431: Push("Can't find lsh animation : ")
0x432: Pop(1); Push(Stack[-1] + Stack[-9]);
0x433: @ Trace(Stack[-1])
0x434: Pop(1)
0x435: Return(); Pop(6)

0x436: PushEmpty(bool, bool)
0x437: PushEmpty(bool)
0x438: Call2 0x4f3

0x439: Pop(0)
0x43a: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x43b: @ lshHasSpeech(Stack[-1], Stack[-3])
0x43c: Pop(0)
0x43d: Push(Stack[-1])
0x43e: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x43f: @ lshPlaySpeech(Stack[-3])
0x440: Pop(0)
0x441: Stack[-4] = (bool) 1
0x442: Return(); Pop(2)

0x443: Stack[-4] = (bool) 0
0x444: Return(); Pop(2)

0x445: PushEmpty(bool)
0x446: Call2 0x4f3

0x447: Pop(0)
0x448: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x449: @ lshStopSpeech()
0x44a: Pop(0)
0x44b: Return(); Pop(0)

0x44c: PushEmpty(object, object)
0x44d: @ self(Stack[-1])
0x44e: Pop(0)
0x44f: Stack[-3] = Stack[-1]
0x450: Return(); Pop(2)

0x451: Stack[-1] = 0
0x452: PushEmpty(float, float)
0x453: Pop(0); Push(Stack[-3] | Stack[-3]);
0x454: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x455: Push((float)0.0)
0x456: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x457: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x458: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x459: Return(); Pop(2)

0x45a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x45b: Return(); Pop(2)

0x45c: PushEmpty(int, int)
0x45d: @ GetVariable(Stack[-3], Stack[-1])
0x45e: Pop(0)
0x45f: Stack[-4] = Stack[-1]
0x460: Return(); Pop(2)

0x461: PushEmpty(object, object)
0x462: @ FindActor(Stack[-1], Stack[-4])
0x463: Pop(0)
0x464: Pop(0); Push((bool) Stack[-1] == 0)
0x465: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x466: Stack[-5] = (bool) 0
0x467: Return(); Pop(2)

0x468: @ Trigger(Stack[-1], Stack[-3])
0x469: Pop(0)
0x46a: Stack[-5] = (bool) 1
0x46b: Return(); Pop(2)

0x46c: Stack[-1] = 0
0x46d: PushEmpty(float, float)
0x46e: @ GetGameTime(Stack[-1])
0x46f: Pop(0)
0x470: Push((int) 1)
0x471: PushEmpty(int)
0x472: Push((int) 24)
0x473: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x474: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x475: Return(); Pop(2)

0x476: PushEmpty(string, string)
0x477: Stack[-1] = "idle"
0x478: Push(Stack[-3])
0x479: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x47a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x47b: Stack[-4] = Stack[-1]
0x47c: Return(); Pop(2)

0x47d: PushEmpty(int, bool, int, bool)
0x47e: Stack[-2] = (int) 0
0x47f: Push("all")
0x480: PushEmpty(string, int)
0x481: Stack[-1] = Stack[-5]
0x482: Call2 0x476

0x483: Pop(1)
0x484: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x485: Pop(2)
0x486: Pop(0); Push((bool) Stack[-1] == 0)
0x487: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x488: GOTO 0x48c

0x489: Push((int) 1)
0x48a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x48b: GOTO 0x47f

0x48c: Stack[-5] = Stack[-2]
0x48d: Return(); Pop(4)

0x48e: PushEmpty()
0x48f: PushEmpty()
0x490: Call2 0x4a4

0x491: Pop(0)
0x492: PushEmpty(bool, string, string)
0x493: Stack[-2] = "quest_d11_06"
0x494: Stack[-1] = "completed"
0x495: Call2 0x461

0x496: Pop(3)
0x497: Return(); Pop(0)

0x498: PushEmpty()
0x499: PushEmpty(int, string)
0x49a: Stack[-1] = "d11q06"
0x49b: Call2 0x45c

0x49c: Pop(1)
0x49d: Push((int) 3)
0x49e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x49f: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x4a0: Stack[-2] = (bool) 1
0x4a1: Return(); Pop(0)

0x4a2: Stack[-2] = (bool) 0
0x4a3: Return(); Pop(0)

0x4a4: PushEmpty(object, object)
0x4a5: Push((int) 692)
0x4a6: Push((int) 2)
0x4a7: Push((int) 534540)
0x4a8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4a9: Pop(3)
0x4aa: PushEmpty(bool, object, int)
0x4ab: Stack[-2] = Stack[-4]
0x4ac: Stack[-1] = (int) 686
0x4ad: Call2 0x4be

0x4ae: Pop(3)
0x4af: Return(); Pop(2)

0x4b0: Stack[-1] = 0
0x4b1: PushEmpty(object, object)
0x4b2: @ GetDiaryRoot(Stack[-1])
0x4b3: Pop(0)
0x4b4: Pop(0); Push((bool) Stack[-1] == 0)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b6: Push("Can't retrieve diary root")
0x4b7: @ Trace(Stack[-1])
0x4b8: Pop(1)
0x4b9: Stack[-3] = (bool) 0
0x4ba: Return(); Pop(2)

0x4bb: Stack[-3] = Stack[-1]
0x4bc: Return(); Pop(2)

0x4bd: Stack[-1] = 0
0x4be: PushEmpty(object, object, int, object, object, int)
0x4bf: PushEmpty(object)
0x4c0: Call2 0x4b1

0x4c1: Stack[-4] = Stack[-1]
0x4c2: Pop(1)
0x4c3: @@ Find(Stack[-7], Stack[-2])
0x4c4: Pop(0)
0x4c5: Pop(0); Push((bool) Stack[-2] == 0)
0x4c6: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4c7: Push("Can't find diary parent with id: ")
0x4c8: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4c9: @ Trace(Stack[-1])
0x4ca: Pop(1)
0x4cb: Stack[-9] = (bool) 0
0x4cc: Return(); Pop(6)

0x4cd: @@ AddChild(Stack[-8])
0x4ce: Pop(0)
0x4cf: Push((int) 7)
0x4d0: @ SendWorldWndMessage(Stack[-1])
0x4d1: Pop(1)
0x4d2: @@ GetCategory(Stack[-1])
0x4d3: Pop(0)
0x4d4: @ SetDiarySection(Stack[-1])
0x4d5: Pop(0)
0x4d6: Stack[-9] = (bool) 0
0x4d7: Return(); Pop(6)

0x4d8: Stack[-2] = 0
0x4d9: Stack[-3] = 0
0x4da: PushEmpty(int, int)
0x4db: Push("branch")
0x4dc: @ GetVariable(Stack[-1], Stack[-2])
0x4dd: Pop(1)
0x4de: Push((int) 0)
0x4df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e1: Stack[-3] = (int) 1
0x4e2: Return(); Pop(2)

0x4e3: GOTO 0x4e9

0x4e4: Push((int) 1)
0x4e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e7: Stack[-3] = (int) 2
0x4e8: Return(); Pop(2)

0x4e9: Stack[-3] = (int) 3
0x4ea: Return(); Pop(2)

0x4eb: Stack[-1] = (int) 515543
0x4ec: Return(); Pop(0)

0x4ed: Stack[-1] = (int) 502868
0x4ee: Return(); Pop(0)

0x4ef: Stack[-1] = "ui/NPC_Maria.png"
0x4f0: Return(); Pop(0)

0x4f1: Stack[-1] = "ui/NPC_Maria_b.png"
0x4f2: Return(); Pop(0)

0x4f3: Stack[-1] = (bool) 1
0x4f4: Return(); Pop(0)

