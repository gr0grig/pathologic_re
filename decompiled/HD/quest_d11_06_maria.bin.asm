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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x20c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x210 Vars = (string)
		EVENT_6 Op = 0x224 Vars = ()
		EVENT_5 Op = 0x231 Vars = ()
		EVENT_7 Op = 0x27a Vars = (int)
		EVENT_45 Op = 0x2bc Vars = (bool)
		EVENT_0 Op = 0x2c8 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x351

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x508

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x506

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x50a

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x50c

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4f5

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
0x31: Call2 0x467

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x3a8

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
0x48: Call2 0x396

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
0x62: Call2 0x4b3

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
0x73: Call2 0x50e

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x432

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
0x92: Call2 0x50e

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
0xa2: Call2 0x442

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x460

0xab: Pop(0)
0xac: Push((int) 36172)
0xad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xaf: PushEmpty(object, object)
0xb0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2: Call2 0x4a9

0xb3: Pop(2)
0xb4: Push((int) 41620)
0xb5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: PushEmpty(object, object)
0xb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba: Call2 0x4a9

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
0xca: Call2 0x4b3

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
0x179: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

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
0x188: Push((int) 539678)
0x189: Push((int) 41627)
0x18a: Push((int) 41626)
0x18b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18c: Pop(3)
0x18d: Return(); Pop(0)

0x18e: Push((int) 41627)
0x18f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x191: PushEmpty(string)
0x192: Stack[-1] = "Neutral"
0x193: Call2 0x90

0x194: Pop(1)
0x195: Push((int) 539679)
0x196: @@ SetMessage(Stack[-1])
0x197: Pop(1)
0x198: @@ ClearReplies()
0x199: Pop(0)
0x19a: Push((int) 539680)
0x19b: Push((int) 41629)
0x19c: Push((int) 41628)
0x19d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19e: Pop(3)
0x19f: Push((int) 539682)
0x1a0: Push((int) 41614)
0x1a1: Push((int) 41630)
0x1a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a3: Pop(3)
0x1a4: Return(); Pop(0)

0x1a5: Push((int) 41629)
0x1a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1a8: PushEmpty(string)
0x1a9: Stack[-1] = "Neutral"
0x1aa: Call2 0x90

0x1ab: Pop(1)
0x1ac: Push((int) 539681)
0x1ad: @@ SetMessage(Stack[-1])
0x1ae: Pop(1)
0x1af: @@ ClearReplies()
0x1b0: Pop(0)
0x1b1: Push((int) 539683)
0x1b2: Push((int) 41634)
0x1b3: Push((int) 41632)
0x1b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b5: Pop(3)
0x1b6: Return(); Pop(0)

0x1b7: Push((int) 41634)
0x1b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1ba: PushEmpty(string)
0x1bb: Stack[-1] = "Neutral"
0x1bc: Call2 0x90

0x1bd: Pop(1)
0x1be: Push((int) 539684)
0x1bf: @@ SetMessage(Stack[-1])
0x1c0: Pop(1)
0x1c1: @@ ClearReplies()
0x1c2: Pop(0)
0x1c3: Push((int) 539685)
0x1c4: Push((int) 41619)
0x1c5: Push((int) 41635)
0x1c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c7: Pop(3)
0x1c8: Push((int) 539686)
0x1c9: Push((int) 41619)
0x1ca: Push((int) 41636)
0x1cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: Push((int) 41614)
0x1cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = "Mysterious"
0x1d3: Call2 0x90

0x1d4: Pop(1)
0x1d5: Push((int) 539668)
0x1d6: @@ SetMessage(Stack[-1])
0x1d7: Pop(1)
0x1d8: @@ ClearReplies()
0x1d9: Pop(0)
0x1da: Push((int) 539672)
0x1db: Push((int) 41619)
0x1dc: Push((int) 41618)
0x1dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1de: Pop(3)
0x1df: Return(); Pop(0)

0x1e0: Push((int) 41619)
0x1e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1e3: PushEmpty(string)
0x1e4: Stack[-1] = "Mysterious"
0x1e5: Call2 0x90

0x1e6: Pop(1)
0x1e7: Push((int) 539673)
0x1e8: @@ SetMessage(Stack[-1])
0x1e9: Pop(1)
0x1ea: @@ ClearReplies()
0x1eb: Pop(0)
0x1ec: Push((int) 534531)
0x1ed: Push((int) -1)
0x1ee: Push((int) 36172)
0x1ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f0: Pop(3)
0x1f1: Push((int) 539674)
0x1f2: Push((int) -1)
0x1f3: Push((int) 41620)
0x1f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f5: Pop(3)
0x1f6: Return(); Pop(0)

0x1f7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f8: PushEmpty(bool)
0x1f9: Call2 0x50e

0x1fa: Pop(0)
0x1fb: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fc: @ lshStopAnimation()
0x1fd: Pop(0)
0x1fe: GOTO 0x201

0x1ff: @ StopAnimation()
0x200: Pop(0)
0x201: Return(); Pop(0)

0x202: GOTO 0xa7

0x203: Return(); Pop(0)

0x204: PushEmpty()
0x205: PushEmpty(int, object)
0x206: Stack[-1] = Stack[-3]
0x207: Push(-2, 1); TaskCall(0)
0x208: Call2 0x0

0x209: Pop(-2, 1); TaskReturn
0x20a: Pop(2)
0x20b: Return(); Pop(0)

0x20c: PushEmpty()
0x20d: Call2 0x235

0x20e: Pop(0)
0x20f: Return(); Pop(0)

0x210: PushEmpty(bool, bool)
0x211: Push("cleanup")
0x212: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x214: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x215: @ IsLoaded(Stack[-1])
0x216: Pop(0)
0x217: Pop(0); Push((bool) Stack[-1] == 0)
0x218: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x219: PushEmpty(object)
0x21a: Call2 0x467

0x21b: Pop(0)
0x21c: @ RemoveActor(Stack[-1])
0x21d: Pop(1)
0x21e: GOTO 0x223

0x21f: Push("restore")
0x220: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x222: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x223: Return(); Pop(2)

0x224: Push( Stack[1 + Tasks[-1].StackPointer] )
0x225: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x226: PushEmpty(object)
0x227: Call2 0x467

0x228: Pop(0)
0x229: @ RemoveActor(Stack[-1])
0x22a: Pop(1)
0x22b: @ Hold()
0x22c: Pop(0)
0x22d: PushEmpty()
0x22e: Call2 0x2a0

0x22f: Pop(0)
0x230: Return(); Pop(0)

0x231: PushEmpty()
0x232: Call2 0x2af

0x233: Pop(0)
0x234: Return(); Pop(0)

0x235: PushEmpty(bool)
0x236: Call2 0x34c

0x237: Pop(0)
0x238: Pop(1); Push((bool) Stack[-1] == 0)
0x239: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23a: @ Hold()
0x23b: Pop(0)
0x23c: @ GetDirection(Stack[-0])
0x23d: Pop(0)
0x23e: PushEmpty()
0x23f: Call2 0x2e5

0x240: Pop(0)
0x241: GOTO 0x23e

0x242: Return(); Pop(0)

0x243: PushEmpty(object, object)
0x244: Push("player")
0x245: @ FindActor(Stack[-2], Stack[-1])
0x246: Pop(1)
0x247: Pop(0); Push((bool) Stack[-1] == 0)
0x248: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x249: Stack[-3] = (bool) 0
0x24a: Return(); Pop(2)

0x24b: PushEmpty(bool, object)
0x24c: Stack[-1] = Stack[-3]
0x24d: Call2 0x343

0x24e: Stack[-5] = Stack[-2]
0x24f: Pop(2)
0x250: Return(); Pop(2)

0x251: Stack[-1] = 0
0x252: Push(CvectorIndex(Stack[-0], 0))
0x253: Push(CvectorIndex(Stack[-0], 2))
0x254: @ RotateAsync(Stack[-2], Stack[-1])
0x255: Pop(2)
0x256: Return(); Pop(0)

0x257: PushEmpty(object, bool, object, bool)
0x258: Push("player")
0x259: @ FindActor(Stack[-3], Stack[-1])
0x25a: Pop(1)
0x25b: Pop(0); Push((bool) Stack[-2] == 0)
0x25c: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25d: Stack[-5] = (bool) 0
0x25e: Return(); Pop(4)

0x25f: PushEmpty(float, object)
0x260: Stack[-1] = Stack[-4]
0x261: Call2 0x331

0x262: Pop(1)
0x263: Push((float)90000.0)
0x264: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x266: Stack[-5] = (bool) 0
0x267: Return(); Pop(4)

0x268: @ CanSee(Stack[-1], Stack[-2])
0x269: Pop(0)
0x26a: Stack[-5] = Stack[-1]
0x26b: Return(); Pop(4)

0x26c: Stack[-2] = 0
0x26d: PushEmpty(float, float)
0x26e: Push((int) 8)
0x26f: Push((int) 16)
0x270: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x271: Pop(2)
0x272: Push((int) 10)
0x273: @ SetTimer(Stack[-1], Stack[-2])
0x274: Pop(1)
0x275: Return(); Pop(2)

0x276: Push((int) 10)
0x277: @ KillTimer(Stack[-1])
0x278: Pop(1)
0x279: Return(); Pop(0)

0x27a: PushEmpty()
0x27b: Push((int) 10)
0x27c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27d: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x27e: PushEmpty()
0x27f: Call2 0x276

0x280: Pop(0)
0x281: PushEmpty(bool)
0x282: Stack[-1] = (bool) 0
0x283: PushEmpty(bool)
0x284: Call2 0x34c

0x285: Pop(0)
0x286: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x287: PushEmpty(bool)
0x288: Call2 0x257

0x289: Pop(0)
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: Stack[-1] = (bool) 1
0x28c: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x28d: PushEmpty(bool)
0x28e: Call2 0x243

0x28f: Pop(0)
0x290: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x291: PushEmpty(bool, object)
0x292: PushEmpty(object)
0x293: Call2 0x467

0x294: Stack[-2] = Stack[-1]
0x295: Pop(1)
0x296: Call2 0x3e2

0x297: Pop(2)
0x298: GOTO 0x29f

0x299: PushEmpty()
0x29a: Call2 0x252

0x29b: Pop(0)
0x29c: PushEmpty()
0x29d: Call2 0x26d

0x29e: Pop(0)
0x29f: Return(); Pop(0)

0x2a0: PushEmpty()
0x2a1: Call2 0x32c

0x2a2: Pop(0)
0x2a3: PushEmpty()
0x2a4: Call2 0x276

0x2a5: Pop(0)
0x2a6: @ lshStopSpeech()
0x2a7: Pop(0)
0x2a8: @ lshStopAnimation()
0x2a9: Pop(0)
0x2aa: @ StopAsync()
0x2ab: Pop(0)
0x2ac: @ Hold()
0x2ad: Pop(0)
0x2ae: Return(); Pop(0)

0x2af: @ StopGroup0()
0x2b0: Pop(0)
0x2b1: PushEmpty()
0x2b2: Call2 0x276

0x2b3: Pop(0)
0x2b4: PushEmpty(string)
0x2b5: Stack[-1] = "Neutral"
0x2b6: Call2 0x432

0x2b7: Pop(1)
0x2b8: PushEmpty()
0x2b9: Call2 0x26d

0x2ba: Pop(0)
0x2bb: Return(); Pop(0)

0x2bc: PushEmpty()
0x2bd: Push(Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2bf: PushEmpty()
0x2c0: Call2 0x26d

0x2c1: Pop(0)
0x2c2: GOTO 0x2c7

0x2c3: PushEmpty(string)
0x2c4: Stack[-1] = "Neutral"
0x2c5: Call2 0x432

0x2c6: Pop(1)
0x2c7: Return(); Pop(0)

0x2c8: PushEmpty(bool, bool)
0x2c9: @ IsOverrideActive(Stack[-1])
0x2ca: Pop(0)
0x2cb: Pop(0); Push((bool) Stack[-1] == 0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2cd: EventDisable(0)
0x2ce: PushEmpty()
0x2cf: Call2 0x32c

0x2d0: Pop(0)
0x2d1: PushEmpty(bool, object)
0x2d2: Stack[-1] = Stack[-5]
0x2d3: Call2 0x343

0x2d4: Pop(2)
0x2d5: EventEnable(0)
0x2d6: PushEmpty(object)
0x2d7: Stack[-1] = Stack[-4]
0x2d8: Call2 0x204

0x2d9: Pop(1)
0x2da: PushEmpty(string)
0x2db: Stack[-1] = "Neutral"
0x2dc: Call2 0x432

0x2dd: Pop(1)
0x2de: PushEmpty()
0x2df: Call2 0x276

0x2e0: Pop(0)
0x2e1: PushEmpty()
0x2e2: Call2 0x26d

0x2e3: Pop(0)
0x2e4: Return(); Pop(2)

0x2e5: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x2e6: @ WaitForAnimEnd()
0x2e7: Pop(0)
0x2e8: PushEmpty(bool)
0x2e9: Call2 0x34c

0x2ea: Pop(0)
0x2eb: Pop(1); Push((bool) Stack[-1] == 0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ed: Return(); Pop(12)

0x2ee: PushEmpty(int)
0x2ef: Call2 0x498

0x2f0: Stack[-7] = Stack[-1]
0x2f1: Pop(1)
0x2f2: Stack[-5] = (int) 0
0x2f3: PushEmpty(bool)
0x2f4: Stack[-1] = (bool) 0
0x2f5: Push((int) 5)
0x2f6: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f8: PushEmpty(bool)
0x2f9: Call2 0x34c

0x2fa: Pop(0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fc: Stack[-1] = (bool) 1
0x2fd: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x2fe: Pop(0); Push((bool) Stack[-6] == 0)
0x2ff: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x300: Push((int) 3)
0x301: @ Sleep(Stack[-1], Stack[-5])
0x302: Pop(1)
0x303: Pop(0); Push((bool) Stack[-4] == 0)
0x304: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x305: GOTO 0x327

0x306: GOTO 0x31c

0x307: @ irand(Stack[-3], Stack[-6])
0x308: Pop(0)
0x309: Push((int) 5)
0x30a: @ irand(Stack[-3], Stack[-1])
0x30b: Pop(1)
0x30c: Push((int) 0)
0x30d: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30f: Stack[-3] = (int) 0
0x310: Push("all")
0x311: PushEmpty(string, int)
0x312: Stack[-1] = Stack[-6]
0x313: Call2 0x491

0x314: Pop(1)
0x315: @ PlayAnimation(Stack[-2], Stack[-1])
0x316: Pop(2)
0x317: @ WaitForAnimEnd(Stack[-1])
0x318: Pop(0)
0x319: Pop(0); Push((bool) Stack[-1] == 0)
0x31a: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x31b: GOTO 0x327

0x31c: PushEmpty(bool)
0x31d: Call2 0x32a

0x31e: Pop(0)
0x31f: Pop(1); Push((bool) Stack[-1] == 0)
0x320: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x321: GOTO 0x327

0x322: @ ResetAAS()
0x323: Pop(0)
0x324: Push((int) 1)
0x325: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x326: GOTO 0x2f3

0x327: @ ResetAAS()
0x328: Pop(0)
0x329: Return(); Pop(12)

0x32a: Stack[-1] = (bool) 1
0x32b: Return(); Pop(0)

0x32c: @ StopAnimation()
0x32d: Pop(0)
0x32e: @ StopGroup0()
0x32f: Pop(0)
0x330: Return(); Pop(0)

0x331: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x332: @ GetPosition(Stack[-3])
0x333: Pop(0)
0x334: @@ GetPosition(Stack[-2])
0x335: Pop(0)
0x336: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x337: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x338: Return(); Pop(6)

0x339: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x33a: @ GetPosition(Stack[-3])
0x33b: Pop(0)
0x33c: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x33d: Push(CvectorIndex(Stack[-2], 0))
0x33e: Push(CvectorIndex(Stack[-3], 2))
0x33f: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x340: Pop(2)
0x341: Stack[-8] = Stack[-1]
0x342: Return(); Pop(6)

0x343: PushEmpty(cvector, cvector)
0x344: @@ GetPosition(Stack[-1])
0x345: Pop(0)
0x346: PushEmpty(bool, cvector)
0x347: Stack[-1] = Stack[-3]
0x348: Call2 0x339

0x349: Stack[-6] = Stack[-2]
0x34a: Pop(2)
0x34b: Return(); Pop(2)

0x34c: PushEmpty(bool, bool)
0x34d: @ IsLoaded(Stack[-1])
0x34e: Pop(0)
0x34f: Stack[-3] = Stack[-1]
0x350: Return(); Pop(2)

0x351: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x352: @@ GetPosition(Stack[-8])
0x353: Pop(0)
0x354: @@ GetEyesHeight(Stack[-9])
0x355: Pop(0)
0x356: Push(CvectorIndex(Stack[-8], 1))
0x357: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x358: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x359: @ GetPosition(Stack[-7])
0x35a: Pop(0)
0x35b: @ GetEyesHeight(Stack[-9])
0x35c: Pop(0)
0x35d: Push(CvectorIndex(Stack[-7], 1))
0x35e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x35f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x360: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x361: Push(CvectorIndex(Stack[-6], 1))
0x362: Stack[-1] = (int) 0
0x363: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x364: Pop(0); Push(Stack[-6] | Stack[-6]);
0x365: Pop(1); Push(Sqrt(Stack[-1]))
0x366: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x367: Stack[-5] = -Stack[-6]; Pop(0);
0x368: Pop(0); Push(Stack[-6] * Stack[-19]);
0x369: PushEmpty(cvector, cvector)
0x36a: Push(CVector(0.0, 1.0, 0.0))
0x36b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x36c: Call2 0x46d

0x36d: Pop(1)
0x36e: Push((int) 25)
0x36f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x370: Pop(2); Push(Stack[-2] + Stack[-1]);
0x371: Push(CVector(0.0, 10.0, 0.0))
0x372: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x373: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x374: @ IsOverrideActive(Stack[-2])
0x375: Pop(0)
0x376: Push(Stack[-2])
0x377: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x378: Stack[-21] = (bool) 0
0x379: Return(); Pop(18)

0x37a: @ StopWorld()
0x37b: Pop(0)
0x37c: Push((bool) 1)
0x37d: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x37e: Pop(1)
0x37f: Push(CvectorIndex(Stack[-4], 0))
0x380: Push(CvectorIndex(Stack[-5], 2))
0x381: @ Rotate(Stack[-2], Stack[-1])
0x382: Pop(2)
0x383: PushEmpty(bool)
0x384: Call2 0x50e

0x385: Pop(0)
0x386: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x387: GOTO 0x390

0x388: Push("head")
0x389: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x38a: Pop(1)
0x38b: Push(Stack[-1])
0x38c: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38d: Push("head")
0x38e: @ LookAsyncCamera(Stack[-1])
0x38f: Pop(1)
0x390: @ CameraWaitForPlayFinish()
0x391: Pop(0)
0x392: @ ResumeWorld()
0x393: Pop(0)
0x394: Stack[-21] = (bool) 1
0x395: Return(); Pop(18)

0x396: PushEmpty(bool, bool)
0x397: Push((bool) 1)
0x398: @ CameraSwitchToNormal(Stack[-1])
0x399: Pop(1)
0x39a: PushEmpty(bool)
0x39b: Call2 0x50e

0x39c: Pop(0)
0x39d: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39e: GOTO 0x3a7

0x39f: Push("head")
0x3a0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3a1: Pop(1)
0x3a2: Push(Stack[-1])
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a4: Push("head")
0x3a5: @ UnlookAsync(Stack[-1])
0x3a6: Pop(1)
0x3a7: Return(); Pop(2)

0x3a8: PushEmpty(int, int, int, int)
0x3a9: Push("voice_common")
0x3aa: @ GetVariable(Stack[-1], Stack[-3])
0x3ab: Pop(1)
0x3ac: Push(Stack[-2])
0x3ad: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3ae: PushEmpty(bool, object)
0x3af: Stack[-1] = Stack[-7]
0x3b0: Call2 0x3e2

0x3b1: Pop(1)
0x3b2: Pop(1); Push((bool) Stack[-1] == 0)
0x3b3: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3b4: PushEmpty(bool, object)
0x3b5: Stack[-1] = Stack[-7]
0x3b6: Call2 0x407

0x3b7: Pop(1)
0x3b8: Pop(1); Push((bool) Stack[-1] == 0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: Stack[-6] = (bool) 0
0x3bb: Return(); Pop(4)

0x3bc: Push((int) 2)
0x3bd: @ irand(Stack[-2], Stack[-1])
0x3be: Pop(1)
0x3bf: Push(Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c1: Push("voice_common")
0x3c2: Push((int) 1)
0x3c3: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3c4: Push((int) 3)
0x3c5: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3c6: @ SetVariable(Stack[-2], Stack[-1])
0x3c7: Pop(2)
0x3c8: GOTO 0x3cd

0x3c9: Push("voice_common")
0x3ca: Push((int) 0)
0x3cb: @ SetVariable(Stack[-2], Stack[-1])
0x3cc: Pop(2)
0x3cd: GOTO 0x3e0

0x3ce: PushEmpty(bool, object)
0x3cf: Stack[-1] = Stack[-7]
0x3d0: Call2 0x407

0x3d1: Pop(1)
0x3d2: Pop(1); Push((bool) Stack[-1] == 0)
0x3d3: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3d4: PushEmpty(bool, object)
0x3d5: Stack[-1] = Stack[-7]
0x3d6: Call2 0x3e2

0x3d7: Pop(1)
0x3d8: Pop(1); Push((bool) Stack[-1] == 0)
0x3d9: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3da: Stack[-6] = (bool) 0
0x3db: Return(); Pop(4)

0x3dc: Push("voice_common")
0x3dd: Push((int) 1)
0x3de: @ SetVariable(Stack[-2], Stack[-1])
0x3df: Pop(2)
0x3e0: Stack[-6] = (bool) 1
0x3e1: Return(); Pop(4)

0x3e2: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3e3: Stack[-5] = "c"
0x3e4: Stack[-4] = (int) 0
0x3e5: Push((int) 1)
0x3e6: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3e7: Push((int) 1)
0x3e8: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3e9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3ea: @@ HasProperty(Stack[-1], Stack[-4])
0x3eb: Pop(1)
0x3ec: Pop(0); Push((bool) Stack[-3] == 0)
0x3ed: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ee: GOTO 0x3f2

0x3ef: Push((int) 1)
0x3f0: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3f1: GOTO 0x3e5

0x3f2: Pop(0); Push((bool) Stack[-4] == 0)
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f4: Stack[-12] = (bool) 0
0x3f5: Return(); Pop(10)

0x3f6: Stack[-2] = (int) 0
0x3f7: Push((int) 1)
0x3f8: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: @ irand(Stack[-2], Stack[-4])
0x3fb: Pop(0)
0x3fc: Push((int) 1)
0x3fd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3fe: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3ff: @@ GetProperty(Stack[-1], Stack[-2])
0x400: Pop(1)
0x401: PushEmpty(bool, string)
0x402: Stack[-1] = Stack[-3]
0x403: Call2 0x451

0x404: Stack[-14] = Stack[-2]
0x405: Pop(2)
0x406: Return(); Pop(10)

0x407: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x408: Push("d")
0x409: PushEmpty(int)
0x40a: Call2 0x488

0x40b: Pop(0)
0x40c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x40d: Push("m")
0x40e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x40f: Stack[-4] = (int) 0
0x410: Push((int) 1)
0x411: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x412: Push((int) 1)
0x413: Pop(1); Push(Stack[-5] + Stack[-1]);
0x414: Pop(1); Push(Stack[-6] + Stack[-1]);
0x415: @@ HasProperty(Stack[-1], Stack[-4])
0x416: Pop(1)
0x417: Pop(0); Push((bool) Stack[-3] == 0)
0x418: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x419: GOTO 0x41d

0x41a: Push((int) 1)
0x41b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x41c: GOTO 0x410

0x41d: Pop(0); Push((bool) Stack[-4] == 0)
0x41e: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x41f: Stack[-12] = (bool) 0
0x420: Return(); Pop(10)

0x421: Stack[-2] = (int) 0
0x422: Push((int) 1)
0x423: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x424: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x425: @ irand(Stack[-2], Stack[-4])
0x426: Pop(0)
0x427: Push((int) 1)
0x428: Pop(1); Push(Stack[-3] + Stack[-1]);
0x429: Pop(1); Push(Stack[-6] + Stack[-1]);
0x42a: @@ GetProperty(Stack[-1], Stack[-2])
0x42b: Pop(1)
0x42c: PushEmpty(bool, string)
0x42d: Stack[-1] = Stack[-3]
0x42e: Call2 0x451

0x42f: Stack[-14] = Stack[-2]
0x430: Pop(2)
0x431: Return(); Pop(10)

0x432: PushEmpty(bool, float, float, bool, float, float)
0x433: @ lshHasAnimation(Stack[-3], Stack[-7])
0x434: Pop(0)
0x435: Push(Stack[-3])
0x436: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x437: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x438: Pop(0)
0x439: Push((bool) 0)
0x43a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x43b: Pop(1)
0x43c: GOTO 0x441

0x43d: Push("Can't find lsh animation : ")
0x43e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x43f: @ Trace(Stack[-1])
0x440: Pop(1)
0x441: Return(); Pop(6)

0x442: PushEmpty(bool, float, float, bool, float, float)
0x443: @ lshHasAnimation(Stack[-3], Stack[-8])
0x444: Pop(0)
0x445: Push(Stack[-3])
0x446: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x447: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x448: Pop(0)
0x449: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x44a: Pop(0)
0x44b: GOTO 0x450

0x44c: Push("Can't find lsh animation : ")
0x44d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x44e: @ Trace(Stack[-1])
0x44f: Pop(1)
0x450: Return(); Pop(6)

0x451: PushEmpty(bool, bool)
0x452: PushEmpty(bool)
0x453: Call2 0x50e

0x454: Pop(0)
0x455: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x456: @ lshHasSpeech(Stack[-1], Stack[-3])
0x457: Pop(0)
0x458: Push(Stack[-1])
0x459: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x45a: @ lshPlaySpeech(Stack[-3])
0x45b: Pop(0)
0x45c: Stack[-4] = (bool) 1
0x45d: Return(); Pop(2)

0x45e: Stack[-4] = (bool) 0
0x45f: Return(); Pop(2)

0x460: PushEmpty(bool)
0x461: Call2 0x50e

0x462: Pop(0)
0x463: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x464: @ lshStopSpeech()
0x465: Pop(0)
0x466: Return(); Pop(0)

0x467: PushEmpty(object, object)
0x468: @ self(Stack[-1])
0x469: Pop(0)
0x46a: Stack[-3] = Stack[-1]
0x46b: Return(); Pop(2)

0x46c: Stack[-1] = 0
0x46d: PushEmpty(float, float)
0x46e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x46f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x470: Push((float)0.0)
0x471: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x472: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x473: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x474: Return(); Pop(2)

0x475: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x476: Return(); Pop(2)

0x477: PushEmpty(int, int)
0x478: @ GetVariable(Stack[-3], Stack[-1])
0x479: Pop(0)
0x47a: Stack[-4] = Stack[-1]
0x47b: Return(); Pop(2)

0x47c: PushEmpty(object, object)
0x47d: @ FindActor(Stack[-1], Stack[-4])
0x47e: Pop(0)
0x47f: Pop(0); Push((bool) Stack[-1] == 0)
0x480: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x481: Stack[-5] = (bool) 0
0x482: Return(); Pop(2)

0x483: @ Trigger(Stack[-1], Stack[-3])
0x484: Pop(0)
0x485: Stack[-5] = (bool) 1
0x486: Return(); Pop(2)

0x487: Stack[-1] = 0
0x488: PushEmpty(float, float)
0x489: @ GetGameTime(Stack[-1])
0x48a: Pop(0)
0x48b: Push((int) 1)
0x48c: PushEmpty(int)
0x48d: Push((int) 24)
0x48e: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x48f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x490: Return(); Pop(2)

0x491: PushEmpty(string, string)
0x492: Stack[-1] = "idle"
0x493: Push(Stack[-3])
0x494: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x495: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x496: Stack[-4] = Stack[-1]
0x497: Return(); Pop(2)

0x498: PushEmpty(int, bool, int, bool)
0x499: Stack[-2] = (int) 0
0x49a: Push("all")
0x49b: PushEmpty(string, int)
0x49c: Stack[-1] = Stack[-5]
0x49d: Call2 0x491

0x49e: Pop(1)
0x49f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4a0: Pop(2)
0x4a1: Pop(0); Push((bool) Stack[-1] == 0)
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a3: GOTO 0x4a7

0x4a4: Push((int) 1)
0x4a5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4a6: GOTO 0x49a

0x4a7: Stack[-5] = Stack[-2]
0x4a8: Return(); Pop(4)

0x4a9: PushEmpty()
0x4aa: PushEmpty()
0x4ab: Call2 0x4bf

0x4ac: Pop(0)
0x4ad: PushEmpty(bool, string, string)
0x4ae: Stack[-2] = "quest_d11_06"
0x4af: Stack[-1] = "completed"
0x4b0: Call2 0x47c

0x4b1: Pop(3)
0x4b2: Return(); Pop(0)

0x4b3: PushEmpty()
0x4b4: PushEmpty(int, string)
0x4b5: Stack[-1] = "d11q06"
0x4b6: Call2 0x477

0x4b7: Pop(1)
0x4b8: Push((int) 3)
0x4b9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4bb: Stack[-2] = (bool) 1
0x4bc: Return(); Pop(0)

0x4bd: Stack[-2] = (bool) 0
0x4be: Return(); Pop(0)

0x4bf: PushEmpty(object, object)
0x4c0: Push((int) 692)
0x4c1: Push((int) 2)
0x4c2: Push((int) 534540)
0x4c3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4c4: Pop(3)
0x4c5: PushEmpty(bool, object, int)
0x4c6: Stack[-2] = Stack[-4]
0x4c7: Stack[-1] = (int) 686
0x4c8: Call2 0x4d9

0x4c9: Pop(3)
0x4ca: Return(); Pop(2)

0x4cb: Stack[-1] = 0
0x4cc: PushEmpty(object, object)
0x4cd: @ GetDiaryRoot(Stack[-1])
0x4ce: Pop(0)
0x4cf: Pop(0); Push((bool) Stack[-1] == 0)
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d1: Push("Can't retrieve diary root")
0x4d2: @ Trace(Stack[-1])
0x4d3: Pop(1)
0x4d4: Stack[-3] = (bool) 0
0x4d5: Return(); Pop(2)

0x4d6: Stack[-3] = Stack[-1]
0x4d7: Return(); Pop(2)

0x4d8: Stack[-1] = 0
0x4d9: PushEmpty(object, object, int, object, object, int)
0x4da: PushEmpty(object)
0x4db: Call2 0x4cc

0x4dc: Stack[-4] = Stack[-1]
0x4dd: Pop(1)
0x4de: @@ Find(Stack[-7], Stack[-2])
0x4df: Pop(0)
0x4e0: Pop(0); Push((bool) Stack[-2] == 0)
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e2: Push("Can't find diary parent with id: ")
0x4e3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4e4: @ Trace(Stack[-1])
0x4e5: Pop(1)
0x4e6: Stack[-9] = (bool) 0
0x4e7: Return(); Pop(6)

0x4e8: @@ AddChild(Stack[-8])
0x4e9: Pop(0)
0x4ea: Push((int) 7)
0x4eb: @ SendWorldWndMessage(Stack[-1])
0x4ec: Pop(1)
0x4ed: @@ GetCategory(Stack[-1])
0x4ee: Pop(0)
0x4ef: @ SetDiarySection(Stack[-1])
0x4f0: Pop(0)
0x4f1: Stack[-9] = (bool) 0
0x4f2: Return(); Pop(6)

0x4f3: Stack[-2] = 0
0x4f4: Stack[-3] = 0
0x4f5: PushEmpty(int, int)
0x4f6: Push("branch")
0x4f7: @ GetVariable(Stack[-1], Stack[-2])
0x4f8: Pop(1)
0x4f9: Push((int) 0)
0x4fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4fb: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fc: Stack[-3] = (int) 1
0x4fd: Return(); Pop(2)

0x4fe: GOTO 0x504

0x4ff: Push((int) 1)
0x500: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x501: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x502: Stack[-3] = (int) 2
0x503: Return(); Pop(2)

0x504: Stack[-3] = (int) 3
0x505: Return(); Pop(2)

0x506: Stack[-1] = (int) 515543
0x507: Return(); Pop(0)

0x508: Stack[-1] = (int) 502868
0x509: Return(); Pop(0)

0x50a: Stack[-1] = "ui/NPC_Maria.png"
0x50b: Return(); Pop(0)

0x50c: Stack[-1] = "ui/NPC_Maria_b.png"
0x50d: Return(); Pop(0)

0x50e: Stack[-1] = (bool) 1
0x50f: Return(); Pop(0)

