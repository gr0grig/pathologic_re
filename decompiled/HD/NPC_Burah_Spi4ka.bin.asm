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
	Azart
	SetMessage
	ClearReplies
	AddReply
	Secret
	all
	idle
	Serious
	Neutral
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
	.bin
	ui/NPC_Spi4ka.png
	ui/NPC_Spi4ka_b.png
	quest_b4_02
	place_boy
	oob4Spi4ka1
	oob4Spi4ka2
	b10q04Spi4kaTalk
	b4Spi4kaVisit
	oob12Spi4ka1
	b4q02
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	mt_spi4ka

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
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x63b
RunTask = 10

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xdc Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2c7 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3bb Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4d8 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x611 Vars = (int, int)
	GTASK_10 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x684 Vars = (int)
		EVENT_6 Op = 0x6aa Vars = ()
		EVENT_5 Op = 0x6b9 Vars = ()
		EVENT_45 Op = 0x6c6 Vars = (bool)
		EVENT_0 Op = 0x6d2 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x75b

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x8c6

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x8c4

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x8c8

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x8ca

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x998

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
0x31: Call2 0x871

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x7b2

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
0x48: Call2 0x7a0

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
0x56: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x918

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x8df

0x60: Pop(2)
0x61: PushEmpty(object, object)
0x62: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x63: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x64: Call2 0x8f4

0x65: Pop(2)
0x66: PushEmpty(string)
0x67: Stack[-1] = "Azart"
0x68: Call2 0xc6

0x69: Pop(1)
0x6a: Push((int) 518568)
0x6b: @@ SetMessage(Stack[-1])
0x6c: Pop(1)
0x6d: @@ ClearReplies()
0x6e: Pop(0)
0x6f: Push((int) 518572)
0x70: Push((int) 20064)
0x71: Push((int) 19682)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: Push((int) 518950)
0x75: Push((int) 20062)
0x76: Push((int) 20061)
0x77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78: Pop(3)
0x79: GOTO 0xa8

0x7a: PushEmpty(string)
0x7b: Stack[-1] = "Secret"
0x7c: Call2 0xc6

0x7d: Pop(1)
0x7e: Push((int) 518573)
0x7f: @@ SetMessage(Stack[-1])
0x80: Pop(1)
0x81: @@ ClearReplies()
0x82: Pop(0)
0x83: PushEmpty(bool, object)
0x84: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85: Call2 0x924

0x86: Pop(1)
0x87: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x88: Push((int) 518574)
0x89: Push((int) 19688)
0x8a: Push((int) 19684)
0x8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c: Pop(3)
0x8d: PushEmpty(bool)
0x8e: Stack[-1] = (bool) 0
0x8f: PushEmpty(bool, object)
0x90: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91: Call2 0x930

0x92: Pop(1)
0x93: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x94: PushEmpty(bool, object)
0x95: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x96: Call2 0x93c

0x97: Pop(1)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Stack[-1] = (bool) 1
0x9a: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9b: Push((int) 518586)
0x9c: Push((int) 19694)
0x9d: Push((int) 19693)
0x9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f: Pop(3)
0xa0: Push((int) 518575)
0xa1: Push((int) -1)
0xa2: Push((int) 19685)
0xa3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4: Pop(3)
0xa5: GOTO 0xa8

0xa6: Return(); Pop(0)

0xa7: GOTO 0x55

0xa8: PushEmpty(bool)
0xa9: Call2 0x8cc

0xaa: Pop(0)
0xab: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xac: @ lshWaitForAnimEnd()
0xad: Pop(0)
0xae: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: GOTO 0xb6

0xb1: PushEmpty(string)
0xb2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb3: Call2 0x83c

0xb4: Pop(1)
0xb5: GOTO 0xac

0xb6: GOTO 0xc5

0xb7: Push("all")
0xb8: Push("idle")
0xb9: @ PlayAnimation(Stack[-2], Stack[-1])
0xba: Pop(2)
0xbb: @ WaitForAnimEnd()
0xbc: Pop(0)
0xbd: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: GOTO 0xc5

0xc0: Push("all")
0xc1: Push("idle")
0xc2: @ PlayAnimation(Stack[-2], Stack[-1])
0xc3: Pop(2)
0xc4: GOTO 0xbb

0xc5: Return(); Pop(0)

0xc6: PushEmpty()
0xc7: PushEmpty(bool)
0xc8: Call2 0x8cc

0xc9: Pop(0)
0xca: Pop(1); Push((bool) Stack[-1] == 0)
0xcb: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xcc: Return(); Pop(0)

0xcd: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xce: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcf: Return(); Pop(0)

0xd0: PushEmpty(string, bool)
0xd1: Stack[-2] = Stack[-3]
0xd2: Push("")
0xd3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd5: Stack[-1] = (bool) 0
0xd6: GOTO 0xd8

0xd7: Stack[-1] = (bool) 1
0xd8: Call2 0x84c

0xd9: Pop(2)
0xda: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xdb: Return(); Pop(0)

0xdc: PushEmpty()
0xdd: Push((int) 1)
0xde: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0xdf: PushEmpty()
0xe0: Call2 0x86a

0xe1: Pop(0)
0xe2: Push((int) 19687)
0xe3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe5: PushEmpty(object, object)
0xe6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe8: Call2 0x8ce

0xe9: Pop(2)
0xea: Push((int) 19689)
0xeb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xed: PushEmpty(object, object)
0xee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0: Call2 0x8ce

0xf1: Pop(2)
0xf2: Push((int) 19693)
0xf3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf5: PushEmpty(object, object)
0xf6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf8: Call2 0x8e5

0xf9: Pop(2)
0xfa: Push((int) 19678)
0xfb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0xfd: PushEmpty(bool, object)
0xfe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xff: Call2 0x918

0x100: Pop(1)
0x101: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x102: PushEmpty(object, object)
0x103: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x104: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x105: Call2 0x8df

0x106: Pop(2)
0x107: PushEmpty(object, object)
0x108: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x109: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10a: Call2 0x8f4

0x10b: Pop(2)
0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Azart"
0x10e: Call2 0xc6

0x10f: Pop(1)
0x110: Push((int) 518568)
0x111: @@ SetMessage(Stack[-1])
0x112: Pop(1)
0x113: @@ ClearReplies()
0x114: Pop(0)
0x115: Push((int) 518572)
0x116: Push((int) 20064)
0x117: Push((int) 19682)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: Push((int) 518950)
0x11b: Push((int) 20062)
0x11c: Push((int) 20061)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: PushEmpty(string)
0x121: Stack[-1] = "Secret"
0x122: Call2 0xc6

0x123: Pop(1)
0x124: Push((int) 518573)
0x125: @@ SetMessage(Stack[-1])
0x126: Pop(1)
0x127: @@ ClearReplies()
0x128: Pop(0)
0x129: PushEmpty(bool, object)
0x12a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12b: Call2 0x924

0x12c: Pop(1)
0x12d: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x12e: Push((int) 518574)
0x12f: Push((int) 19688)
0x130: Push((int) 19684)
0x131: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132: Pop(3)
0x133: PushEmpty(bool)
0x134: Stack[-1] = (bool) 0
0x135: PushEmpty(bool, object)
0x136: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x137: Call2 0x930

0x138: Pop(1)
0x139: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13a: PushEmpty(bool, object)
0x13b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13c: Call2 0x93c

0x13d: Pop(1)
0x13e: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13f: Stack[-1] = (bool) 1
0x140: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x141: Push((int) 518586)
0x142: Push((int) 19694)
0x143: Push((int) 19693)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Push((int) 518575)
0x147: Push((int) -1)
0x148: Push((int) 19685)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: Push((int) 19694)
0x14d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14e: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x14f: PushEmpty(string)
0x150: Stack[-1] = "Secret"
0x151: Call2 0xc6

0x152: Pop(1)
0x153: Push((int) 518587)
0x154: @@ SetMessage(Stack[-1])
0x155: Pop(1)
0x156: @@ ClearReplies()
0x157: Pop(0)
0x158: Push((int) 518588)
0x159: Push((int) 20052)
0x15a: Push((int) 19695)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Push((int) 518942)
0x15e: Push((int) 20054)
0x15f: Push((int) 20053)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: Push((int) 20054)
0x164: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x166: PushEmpty(string)
0x167: Stack[-1] = "Serious"
0x168: Call2 0xc6

0x169: Pop(1)
0x16a: Push((int) 518943)
0x16b: @@ SetMessage(Stack[-1])
0x16c: Pop(1)
0x16d: @@ ClearReplies()
0x16e: Pop(0)
0x16f: Push((int) 518944)
0x170: Push((int) 20057)
0x171: Push((int) 20055)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Push((int) 518945)
0x175: Push((int) -1)
0x176: Push((int) 20056)
0x177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x178: Pop(3)
0x179: Return(); Pop(0)

0x17a: Push((int) 20057)
0x17b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x17d: PushEmpty(string)
0x17e: Stack[-1] = "Serious"
0x17f: Call2 0xc6

0x180: Pop(1)
0x181: Push((int) 518946)
0x182: @@ SetMessage(Stack[-1])
0x183: Pop(1)
0x184: @@ ClearReplies()
0x185: Pop(0)
0x186: Push((int) 518947)
0x187: Push((int) -1)
0x188: Push((int) 20058)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Push((int) 518948)
0x18c: Push((int) -1)
0x18d: Push((int) 20059)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: Return(); Pop(0)

0x191: Push((int) 20052)
0x192: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Secret"
0x196: Call2 0xc6

0x197: Pop(1)
0x198: Push((int) 518941)
0x199: @@ SetMessage(Stack[-1])
0x19a: Pop(1)
0x19b: @@ ClearReplies()
0x19c: Pop(0)
0x19d: Push((int) 518949)
0x19e: Push((int) -1)
0x19f: Push((int) 20060)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: Return(); Pop(0)

0x1a3: Push((int) 19688)
0x1a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1a6: PushEmpty(string)
0x1a7: Stack[-1] = "Serious"
0x1a8: Call2 0xc6

0x1a9: Pop(1)
0x1aa: Push((int) 518581)
0x1ab: @@ SetMessage(Stack[-1])
0x1ac: Pop(1)
0x1ad: @@ ClearReplies()
0x1ae: Pop(0)
0x1af: Push((int) 518582)
0x1b0: Push((int) -1)
0x1b1: Push((int) 19689)
0x1b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b3: Pop(3)
0x1b4: Return(); Pop(0)

0x1b5: Push((int) 20062)
0x1b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1b8: PushEmpty(string)
0x1b9: Stack[-1] = "Azart"
0x1ba: Call2 0xc6

0x1bb: Pop(1)
0x1bc: Push((int) 518951)
0x1bd: @@ SetMessage(Stack[-1])
0x1be: Pop(1)
0x1bf: @@ ClearReplies()
0x1c0: Pop(0)
0x1c1: Push((int) 518952)
0x1c2: Push((int) 20069)
0x1c3: Push((int) 20063)
0x1c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c5: Pop(3)
0x1c6: Return(); Pop(0)

0x1c7: Push((int) 20064)
0x1c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1ca: PushEmpty(string)
0x1cb: Stack[-1] = "Secret"
0x1cc: Call2 0xc6

0x1cd: Pop(1)
0x1ce: Push((int) 518953)
0x1cf: @@ SetMessage(Stack[-1])
0x1d0: Pop(1)
0x1d1: @@ ClearReplies()
0x1d2: Pop(0)
0x1d3: Push((int) 518954)
0x1d4: Push((int) 20066)
0x1d5: Push((int) 20065)
0x1d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d7: Pop(3)
0x1d8: Return(); Pop(0)

0x1d9: Push((int) 20066)
0x1da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1dc: PushEmpty(string)
0x1dd: Stack[-1] = "Azart"
0x1de: Call2 0xc6

0x1df: Pop(1)
0x1e0: Push((int) 518955)
0x1e1: @@ SetMessage(Stack[-1])
0x1e2: Pop(1)
0x1e3: @@ ClearReplies()
0x1e4: Pop(0)
0x1e5: Push((int) 518956)
0x1e6: Push((int) 20069)
0x1e7: Push((int) 20067)
0x1e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e9: Pop(3)
0x1ea: Push((int) 518957)
0x1eb: Push((int) -1)
0x1ec: Push((int) 20068)
0x1ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ee: Pop(3)
0x1ef: Return(); Pop(0)

0x1f0: Push((int) 20069)
0x1f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1f3: PushEmpty(string)
0x1f4: Stack[-1] = "Secret"
0x1f5: Call2 0xc6

0x1f6: Pop(1)
0x1f7: Push((int) 518958)
0x1f8: @@ SetMessage(Stack[-1])
0x1f9: Pop(1)
0x1fa: @@ ClearReplies()
0x1fb: Pop(0)
0x1fc: Push((int) 518959)
0x1fd: Push((int) 19686)
0x1fe: Push((int) 20071)
0x1ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x200: Pop(3)
0x201: Push((int) 518960)
0x202: Push((int) -1)
0x203: Push((int) 20072)
0x204: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x205: Pop(3)
0x206: Return(); Pop(0)

0x207: Push((int) 19686)
0x208: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x20a: PushEmpty(string)
0x20b: Stack[-1] = "Secret"
0x20c: Call2 0xc6

0x20d: Pop(1)
0x20e: Push((int) 518579)
0x20f: @@ SetMessage(Stack[-1])
0x210: Pop(1)
0x211: @@ ClearReplies()
0x212: Pop(0)
0x213: Push((int) 518580)
0x214: Push((int) -1)
0x215: Push((int) 19687)
0x216: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x217: Pop(3)
0x218: Return(); Pop(0)

0x219: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x21a: PushEmpty(bool)
0x21b: Call2 0x8cc

0x21c: Pop(0)
0x21d: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x21e: @ lshStopAnimation()
0x21f: Pop(0)
0x220: GOTO 0x223

0x221: @ StopAnimation()
0x222: Pop(0)
0x223: Return(); Pop(0)

0x224: GOTO 0xdd

0x225: Return(); Pop(0)

0x226: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x227: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x228: PushEmpty(bool, object, float)
0x229: Stack[-2] = Stack[-12]
0x22a: Stack[-1] = (float) 70.0
0x22b: Call2 0x75b

0x22c: Pop(2)
0x22d: Pop(1); Push((bool) Stack[-1] == 0)
0x22e: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22f: Stack[-10] = (int) -2
0x230: Return(); Pop(8)

0x231: @ CreateDialog(Stack[-4])
0x232: Pop(0)
0x233: PushEmpty(int)
0x234: Call2 0x8c6

0x235: Pop(0)
0x236: @@ SetNPCName(Stack[-1])
0x237: Pop(1)
0x238: PushEmpty(int)
0x239: Call2 0x8c4

0x23a: Pop(0)
0x23b: @@ SetNPCDescription(Stack[-1])
0x23c: Pop(1)
0x23d: PushEmpty(string)
0x23e: Call2 0x8c8

0x23f: Pop(0)
0x240: @@ SetPhoto(Stack[-1])
0x241: Pop(1)
0x242: PushEmpty(string)
0x243: Call2 0x8ca

0x244: Pop(0)
0x245: @@ SetPhoto2(Stack[-1])
0x246: Pop(1)
0x247: PushEmpty(int)
0x248: Call2 0x998

0x249: Pop(0)
0x24a: @@ SetPlayerName(Stack[-1])
0x24b: Pop(1)
0x24c: Stack[-2] = (int) -1
0x24d: @ IsOverrideActive(Stack[-3])
0x24e: Pop(0)
0x24f: Push(Stack[-3])
0x250: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x251: Stack[-10] = (int) -2
0x252: Return(); Pop(8)

0x253: @ DoDialog(Stack[-4])
0x254: Pop(0)
0x255: PushEmpty(bool, object)
0x256: PushEmpty(object)
0x257: Call2 0x871

0x258: Stack[-2] = Stack[-1]
0x259: Pop(1)
0x25a: Call2 0x7b2

0x25b: Pop(2)
0x25c: PushEmpty(object, object)
0x25d: Stack[-2] = Stack[-11]
0x25e: Stack[-1] = Stack[-6]
0x25f: Push(-2, 4); TaskCall(3)
0x260: Call2 0x277

0x261: Pop(-2, 4); TaskReturn
0x262: Pop(2)
0x263: @@ IsDialogEnd(Stack[-1])
0x264: Pop(0)
0x265: Pop(0); Push((bool) Stack[-1] == 0)
0x266: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x267: @ sync()
0x268: Pop(0)
0x269: @@ IsDialogEnd(Stack[-1])
0x26a: Pop(0)
0x26b: GOTO 0x265

0x26c: PushEmpty(object)
0x26d: Stack[-1] = Stack[-10]
0x26e: Call2 0x7a0

0x26f: Pop(1)
0x270: @ StopDialog(Stack[-4])
0x271: Pop(0)
0x272: @@ GetReturnValue(Stack[-2])
0x273: Pop(0)
0x274: Stack[-10] = Stack[-2]
0x275: Return(); Pop(8)

0x276: Stack[-4] = 0
0x277: PushEmpty()
0x278: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x279: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x27a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x27b: Push((int) 1)
0x27c: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x27d: PushEmpty(string)
0x27e: Stack[-1] = "Neutral"
0x27f: Call2 0x2b1

0x280: Pop(1)
0x281: Push((int) 520803)
0x282: @@ SetMessage(Stack[-1])
0x283: Pop(1)
0x284: @@ ClearReplies()
0x285: Pop(0)
0x286: Push((int) 520804)
0x287: Push((int) 29221)
0x288: Push((int) 22021)
0x289: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28a: Pop(3)
0x28b: Push((int) 527876)
0x28c: Push((int) 29224)
0x28d: Push((int) 29223)
0x28e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28f: Pop(3)
0x290: GOTO 0x293

0x291: Return(); Pop(0)

0x292: GOTO 0x27b

0x293: PushEmpty(bool)
0x294: Call2 0x8cc

0x295: Pop(0)
0x296: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x297: @ lshWaitForAnimEnd()
0x298: Pop(0)
0x299: Push( Stack[3 + Tasks[-1].StackPointer] )
0x29a: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29b: GOTO 0x2a1

0x29c: PushEmpty(string)
0x29d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x29e: Call2 0x83c

0x29f: Pop(1)
0x2a0: GOTO 0x297

0x2a1: GOTO 0x2b0

0x2a2: Push("all")
0x2a3: Push("idle")
0x2a4: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a5: Pop(2)
0x2a6: @ WaitForAnimEnd()
0x2a7: Pop(0)
0x2a8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: GOTO 0x2b0

0x2ab: Push("all")
0x2ac: Push("idle")
0x2ad: @ PlayAnimation(Stack[-2], Stack[-1])
0x2ae: Pop(2)
0x2af: GOTO 0x2a6

0x2b0: Return(); Pop(0)

0x2b1: PushEmpty()
0x2b2: PushEmpty(bool)
0x2b3: Call2 0x8cc

0x2b4: Pop(0)
0x2b5: Pop(1); Push((bool) Stack[-1] == 0)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b7: Return(); Pop(0)

0x2b8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ba: Return(); Pop(0)

0x2bb: PushEmpty(string, bool)
0x2bc: Stack[-2] = Stack[-3]
0x2bd: Push("")
0x2be: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c0: Stack[-1] = (bool) 0
0x2c1: GOTO 0x2c3

0x2c2: Stack[-1] = (bool) 1
0x2c3: Call2 0x84c

0x2c4: Pop(2)
0x2c5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2c6: Return(); Pop(0)

0x2c7: PushEmpty()
0x2c8: Push((int) 1)
0x2c9: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x2ca: PushEmpty()
0x2cb: Call2 0x86a

0x2cc: Pop(0)
0x2cd: Push((int) 22020)
0x2ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2cf: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2d0: PushEmpty(string)
0x2d1: Stack[-1] = "Neutral"
0x2d2: Call2 0x2b1

0x2d3: Pop(1)
0x2d4: Push((int) 520803)
0x2d5: @@ SetMessage(Stack[-1])
0x2d6: Pop(1)
0x2d7: @@ ClearReplies()
0x2d8: Pop(0)
0x2d9: Push((int) 520804)
0x2da: Push((int) 29221)
0x2db: Push((int) 22021)
0x2dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2dd: Pop(3)
0x2de: Push((int) 527876)
0x2df: Push((int) 29224)
0x2e0: Push((int) 29223)
0x2e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e2: Pop(3)
0x2e3: Return(); Pop(0)

0x2e4: Push((int) 29224)
0x2e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2e7: PushEmpty(string)
0x2e8: Stack[-1] = "Neutral"
0x2e9: Call2 0x2b1

0x2ea: Pop(1)
0x2eb: Push((int) 527877)
0x2ec: @@ SetMessage(Stack[-1])
0x2ed: Pop(1)
0x2ee: @@ ClearReplies()
0x2ef: Pop(0)
0x2f0: Push((int) 527878)
0x2f1: Push((int) -1)
0x2f2: Push((int) 29225)
0x2f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f4: Pop(3)
0x2f5: Return(); Pop(0)

0x2f6: Push((int) 29221)
0x2f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f8: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x2f9: PushEmpty(string)
0x2fa: Stack[-1] = "Neutral"
0x2fb: Call2 0x2b1

0x2fc: Pop(1)
0x2fd: Push((int) 527874)
0x2fe: @@ SetMessage(Stack[-1])
0x2ff: Pop(1)
0x300: @@ ClearReplies()
0x301: Pop(0)
0x302: Push((int) 527875)
0x303: Push((int) -1)
0x304: Push((int) 29222)
0x305: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x306: Pop(3)
0x307: Return(); Pop(0)

0x308: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x309: PushEmpty(bool)
0x30a: Call2 0x8cc

0x30b: Pop(0)
0x30c: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30d: @ lshStopAnimation()
0x30e: Pop(0)
0x30f: GOTO 0x312

0x310: @ StopAnimation()
0x311: Pop(0)
0x312: Return(); Pop(0)

0x313: GOTO 0x2c8

0x314: Return(); Pop(0)

0x315: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x316: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x317: PushEmpty(bool, object, float)
0x318: Stack[-2] = Stack[-12]
0x319: Stack[-1] = (float) 70.0
0x31a: Call2 0x75b

0x31b: Pop(2)
0x31c: Pop(1); Push((bool) Stack[-1] == 0)
0x31d: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31e: Stack[-10] = (int) -2
0x31f: Return(); Pop(8)

0x320: @ CreateDialog(Stack[-4])
0x321: Pop(0)
0x322: PushEmpty(int)
0x323: Call2 0x8c6

0x324: Pop(0)
0x325: @@ SetNPCName(Stack[-1])
0x326: Pop(1)
0x327: PushEmpty(int)
0x328: Call2 0x8c4

0x329: Pop(0)
0x32a: @@ SetNPCDescription(Stack[-1])
0x32b: Pop(1)
0x32c: PushEmpty(string)
0x32d: Call2 0x8c8

0x32e: Pop(0)
0x32f: @@ SetPhoto(Stack[-1])
0x330: Pop(1)
0x331: PushEmpty(string)
0x332: Call2 0x8ca

0x333: Pop(0)
0x334: @@ SetPhoto2(Stack[-1])
0x335: Pop(1)
0x336: PushEmpty(int)
0x337: Call2 0x998

0x338: Pop(0)
0x339: @@ SetPlayerName(Stack[-1])
0x33a: Pop(1)
0x33b: Stack[-2] = (int) -1
0x33c: @ IsOverrideActive(Stack[-3])
0x33d: Pop(0)
0x33e: Push(Stack[-3])
0x33f: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x340: Stack[-10] = (int) -2
0x341: Return(); Pop(8)

0x342: @ DoDialog(Stack[-4])
0x343: Pop(0)
0x344: PushEmpty(bool, object)
0x345: PushEmpty(object)
0x346: Call2 0x871

0x347: Stack[-2] = Stack[-1]
0x348: Pop(1)
0x349: Call2 0x7b2

0x34a: Pop(2)
0x34b: PushEmpty(object, object)
0x34c: Stack[-2] = Stack[-11]
0x34d: Stack[-1] = Stack[-6]
0x34e: Push(-2, 4); TaskCall(5)
0x34f: Call2 0x366

0x350: Pop(-2, 4); TaskReturn
0x351: Pop(2)
0x352: @@ IsDialogEnd(Stack[-1])
0x353: Pop(0)
0x354: Pop(0); Push((bool) Stack[-1] == 0)
0x355: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x356: @ sync()
0x357: Pop(0)
0x358: @@ IsDialogEnd(Stack[-1])
0x359: Pop(0)
0x35a: GOTO 0x354

0x35b: PushEmpty(object)
0x35c: Stack[-1] = Stack[-10]
0x35d: Call2 0x7a0

0x35e: Pop(1)
0x35f: @ StopDialog(Stack[-4])
0x360: Pop(0)
0x361: @@ GetReturnValue(Stack[-2])
0x362: Pop(0)
0x363: Stack[-10] = Stack[-2]
0x364: Return(); Pop(8)

0x365: Stack[-4] = 0
0x366: PushEmpty()
0x367: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x368: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x369: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x36a: Push((int) 1)
0x36b: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x36c: PushEmpty(string)
0x36d: Stack[-1] = "Serious"
0x36e: Call2 0x3a5

0x36f: Pop(1)
0x370: Push((int) 530479)
0x371: @@ SetMessage(Stack[-1])
0x372: Pop(1)
0x373: @@ ClearReplies()
0x374: Pop(0)
0x375: PushEmpty(bool, object)
0x376: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x377: Call2 0x900

0x378: Pop(1)
0x379: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37a: Push((int) 530480)
0x37b: Push((int) 32848)
0x37c: Push((int) 31846)
0x37d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37e: Pop(3)
0x37f: Push((int) 530481)
0x380: Push((int) -1)
0x381: Push((int) 31847)
0x382: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x383: Pop(3)
0x384: GOTO 0x387

0x385: Return(); Pop(0)

0x386: GOTO 0x36a

0x387: PushEmpty(bool)
0x388: Call2 0x8cc

0x389: Pop(0)
0x38a: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x38b: @ lshWaitForAnimEnd()
0x38c: Pop(0)
0x38d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x38e: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38f: GOTO 0x395

0x390: PushEmpty(string)
0x391: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x392: Call2 0x83c

0x393: Pop(1)
0x394: GOTO 0x38b

0x395: GOTO 0x3a4

0x396: Push("all")
0x397: Push("idle")
0x398: @ PlayAnimation(Stack[-2], Stack[-1])
0x399: Pop(2)
0x39a: @ WaitForAnimEnd()
0x39b: Pop(0)
0x39c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x39d: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39e: GOTO 0x3a4

0x39f: Push("all")
0x3a0: Push("idle")
0x3a1: @ PlayAnimation(Stack[-2], Stack[-1])
0x3a2: Pop(2)
0x3a3: GOTO 0x39a

0x3a4: Return(); Pop(0)

0x3a5: PushEmpty()
0x3a6: PushEmpty(bool)
0x3a7: Call2 0x8cc

0x3a8: Pop(0)
0x3a9: Pop(1); Push((bool) Stack[-1] == 0)
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3ab: Return(); Pop(0)

0x3ac: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3ad: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ae: Return(); Pop(0)

0x3af: PushEmpty(string, bool)
0x3b0: Stack[-2] = Stack[-3]
0x3b1: Push("")
0x3b2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b4: Stack[-1] = (bool) 0
0x3b5: GOTO 0x3b7

0x3b6: Stack[-1] = (bool) 1
0x3b7: Call2 0x84c

0x3b8: Pop(2)
0x3b9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3ba: Return(); Pop(0)

0x3bb: PushEmpty()
0x3bc: Push((int) 1)
0x3bd: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x3be: PushEmpty()
0x3bf: Call2 0x86a

0x3c0: Pop(0)
0x3c1: Push((int) 31849)
0x3c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c4: PushEmpty(object, object)
0x3c5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3c7: Call2 0x8eb

0x3c8: Pop(2)
0x3c9: Push((int) 31845)
0x3ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3cc: PushEmpty(string)
0x3cd: Stack[-1] = "Serious"
0x3ce: Call2 0x3a5

0x3cf: Pop(1)
0x3d0: Push((int) 530479)
0x3d1: @@ SetMessage(Stack[-1])
0x3d2: Pop(1)
0x3d3: @@ ClearReplies()
0x3d4: Pop(0)
0x3d5: PushEmpty(bool, object)
0x3d6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d7: Call2 0x900

0x3d8: Pop(1)
0x3d9: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3da: Push((int) 530480)
0x3db: Push((int) 32848)
0x3dc: Push((int) 31846)
0x3dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3de: Pop(3)
0x3df: Push((int) 530481)
0x3e0: Push((int) -1)
0x3e1: Push((int) 31847)
0x3e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e3: Pop(3)
0x3e4: Return(); Pop(0)

0x3e5: Push((int) 32848)
0x3e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e7: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3e8: PushEmpty(string)
0x3e9: Stack[-1] = "Azart"
0x3ea: Call2 0x3a5

0x3eb: Pop(1)
0x3ec: Push((int) 531491)
0x3ed: @@ SetMessage(Stack[-1])
0x3ee: Pop(1)
0x3ef: @@ ClearReplies()
0x3f0: Pop(0)
0x3f1: Push((int) 531493)
0x3f2: Push((int) 31848)
0x3f3: Push((int) 32850)
0x3f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f5: Pop(3)
0x3f6: Push((int) 531492)
0x3f7: Push((int) 31848)
0x3f8: Push((int) 32849)
0x3f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fa: Pop(3)
0x3fb: Return(); Pop(0)

0x3fc: Push((int) 31848)
0x3fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fe: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x3ff: PushEmpty(string)
0x400: Stack[-1] = "Azart"
0x401: Call2 0x3a5

0x402: Pop(1)
0x403: Push((int) 530482)
0x404: @@ SetMessage(Stack[-1])
0x405: Pop(1)
0x406: @@ ClearReplies()
0x407: Pop(0)
0x408: Push((int) 531494)
0x409: Push((int) 32853)
0x40a: Push((int) 32852)
0x40b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40c: Pop(3)
0x40d: Return(); Pop(0)

0x40e: Push((int) 32853)
0x40f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x411: PushEmpty(string)
0x412: Stack[-1] = "Azart"
0x413: Call2 0x3a5

0x414: Pop(1)
0x415: Push((int) 531495)
0x416: @@ SetMessage(Stack[-1])
0x417: Pop(1)
0x418: @@ ClearReplies()
0x419: Pop(0)
0x41a: Push((int) 530483)
0x41b: Push((int) -1)
0x41c: Push((int) 31849)
0x41d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41e: Pop(3)
0x41f: Return(); Pop(0)

0x420: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x421: PushEmpty(bool)
0x422: Call2 0x8cc

0x423: Pop(0)
0x424: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x425: @ lshStopAnimation()
0x426: Pop(0)
0x427: GOTO 0x42a

0x428: @ StopAnimation()
0x429: Pop(0)
0x42a: Return(); Pop(0)

0x42b: GOTO 0x3bc

0x42c: Return(); Pop(0)

0x42d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x42e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x42f: PushEmpty(bool, object, float)
0x430: Stack[-2] = Stack[-12]
0x431: Stack[-1] = (float) 70.0
0x432: Call2 0x75b

0x433: Pop(2)
0x434: Pop(1); Push((bool) Stack[-1] == 0)
0x435: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x436: Stack[-10] = (int) -2
0x437: Return(); Pop(8)

0x438: @ CreateDialog(Stack[-4])
0x439: Pop(0)
0x43a: PushEmpty(int)
0x43b: Call2 0x8c6

0x43c: Pop(0)
0x43d: @@ SetNPCName(Stack[-1])
0x43e: Pop(1)
0x43f: PushEmpty(int)
0x440: Call2 0x8c4

0x441: Pop(0)
0x442: @@ SetNPCDescription(Stack[-1])
0x443: Pop(1)
0x444: PushEmpty(string)
0x445: Call2 0x8c8

0x446: Pop(0)
0x447: @@ SetPhoto(Stack[-1])
0x448: Pop(1)
0x449: PushEmpty(string)
0x44a: Call2 0x8ca

0x44b: Pop(0)
0x44c: @@ SetPhoto2(Stack[-1])
0x44d: Pop(1)
0x44e: PushEmpty(int)
0x44f: Call2 0x998

0x450: Pop(0)
0x451: @@ SetPlayerName(Stack[-1])
0x452: Pop(1)
0x453: Stack[-2] = (int) -1
0x454: @ IsOverrideActive(Stack[-3])
0x455: Pop(0)
0x456: Push(Stack[-3])
0x457: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x458: Stack[-10] = (int) -2
0x459: Return(); Pop(8)

0x45a: @ DoDialog(Stack[-4])
0x45b: Pop(0)
0x45c: PushEmpty(bool, object)
0x45d: PushEmpty(object)
0x45e: Call2 0x871

0x45f: Stack[-2] = Stack[-1]
0x460: Pop(1)
0x461: Call2 0x7b2

0x462: Pop(2)
0x463: PushEmpty(object, object)
0x464: Stack[-2] = Stack[-11]
0x465: Stack[-1] = Stack[-6]
0x466: Push(-2, 4); TaskCall(7)
0x467: Call2 0x47e

0x468: Pop(-2, 4); TaskReturn
0x469: Pop(2)
0x46a: @@ IsDialogEnd(Stack[-1])
0x46b: Pop(0)
0x46c: Pop(0); Push((bool) Stack[-1] == 0)
0x46d: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x46e: @ sync()
0x46f: Pop(0)
0x470: @@ IsDialogEnd(Stack[-1])
0x471: Pop(0)
0x472: GOTO 0x46c

0x473: PushEmpty(object)
0x474: Stack[-1] = Stack[-10]
0x475: Call2 0x7a0

0x476: Pop(1)
0x477: @ StopDialog(Stack[-4])
0x478: Pop(0)
0x479: @@ GetReturnValue(Stack[-2])
0x47a: Pop(0)
0x47b: Stack[-10] = Stack[-2]
0x47c: Return(); Pop(8)

0x47d: Stack[-4] = 0
0x47e: PushEmpty()
0x47f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x480: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x481: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x482: Push((int) 1)
0x483: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x484: PushEmpty(string)
0x485: Stack[-1] = "Secret"
0x486: Call2 0x4c2

0x487: Pop(1)
0x488: Push((int) 535248)
0x489: @@ SetMessage(Stack[-1])
0x48a: Pop(1)
0x48b: @@ ClearReplies()
0x48c: Pop(0)
0x48d: PushEmpty(bool, object)
0x48e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x48f: Call2 0x90c

0x490: Pop(1)
0x491: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x492: Push((int) 535249)
0x493: Push((int) 37070)
0x494: Push((int) 36924)
0x495: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x496: Pop(3)
0x497: Push((int) 535387)
0x498: Push((int) -1)
0x499: Push((int) 37072)
0x49a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49b: Pop(3)
0x49c: Push((int) 535388)
0x49d: Push((int) -1)
0x49e: Push((int) 37073)
0x49f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a0: Pop(3)
0x4a1: GOTO 0x4a4

0x4a2: Return(); Pop(0)

0x4a3: GOTO 0x482

0x4a4: PushEmpty(bool)
0x4a5: Call2 0x8cc

0x4a6: Pop(0)
0x4a7: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4a8: @ lshWaitForAnimEnd()
0x4a9: Pop(0)
0x4aa: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4ab: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4ac: GOTO 0x4b2

0x4ad: PushEmpty(string)
0x4ae: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4af: Call2 0x83c

0x4b0: Pop(1)
0x4b1: GOTO 0x4a8

0x4b2: GOTO 0x4c1

0x4b3: Push("all")
0x4b4: Push("idle")
0x4b5: @ PlayAnimation(Stack[-2], Stack[-1])
0x4b6: Pop(2)
0x4b7: @ WaitForAnimEnd()
0x4b8: Pop(0)
0x4b9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4ba: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4bb: GOTO 0x4c1

0x4bc: Push("all")
0x4bd: Push("idle")
0x4be: @ PlayAnimation(Stack[-2], Stack[-1])
0x4bf: Pop(2)
0x4c0: GOTO 0x4b7

0x4c1: Return(); Pop(0)

0x4c2: PushEmpty()
0x4c3: PushEmpty(bool)
0x4c4: Call2 0x8cc

0x4c5: Pop(0)
0x4c6: Pop(1); Push((bool) Stack[-1] == 0)
0x4c7: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c8: Return(); Pop(0)

0x4c9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4ca: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4cb: Return(); Pop(0)

0x4cc: PushEmpty(string, bool)
0x4cd: Stack[-2] = Stack[-3]
0x4ce: Push("")
0x4cf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4d1: Stack[-1] = (bool) 0
0x4d2: GOTO 0x4d4

0x4d3: Stack[-1] = (bool) 1
0x4d4: Call2 0x84c

0x4d5: Pop(2)
0x4d6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4d7: Return(); Pop(0)

0x4d8: PushEmpty()
0x4d9: Push((int) 1)
0x4da: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x4db: PushEmpty()
0x4dc: Call2 0x86a

0x4dd: Pop(0)
0x4de: Push((int) 36924)
0x4df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4e1: PushEmpty(object, object)
0x4e2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e4: Call2 0x8fa

0x4e5: Pop(2)
0x4e6: Push((int) 36923)
0x4e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e8: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x4e9: PushEmpty(string)
0x4ea: Stack[-1] = "Secret"
0x4eb: Call2 0x4c2

0x4ec: Pop(1)
0x4ed: Push((int) 535248)
0x4ee: @@ SetMessage(Stack[-1])
0x4ef: Pop(1)
0x4f0: @@ ClearReplies()
0x4f1: Pop(0)
0x4f2: PushEmpty(bool, object)
0x4f3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f4: Call2 0x90c

0x4f5: Pop(1)
0x4f6: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4f7: Push((int) 535249)
0x4f8: Push((int) 37070)
0x4f9: Push((int) 36924)
0x4fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fb: Pop(3)
0x4fc: Push((int) 535387)
0x4fd: Push((int) -1)
0x4fe: Push((int) 37072)
0x4ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x500: Pop(3)
0x501: Push((int) 535388)
0x502: Push((int) -1)
0x503: Push((int) 37073)
0x504: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x505: Pop(3)
0x506: Return(); Pop(0)

0x507: Push((int) 37070)
0x508: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x509: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x50a: PushEmpty(string)
0x50b: Stack[-1] = "Serious"
0x50c: Call2 0x4c2

0x50d: Pop(1)
0x50e: Push((int) 535385)
0x50f: @@ SetMessage(Stack[-1])
0x510: Pop(1)
0x511: @@ ClearReplies()
0x512: Pop(0)
0x513: Push((int) 535386)
0x514: Push((int) 37074)
0x515: Push((int) 37071)
0x516: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x517: Pop(3)
0x518: Return(); Pop(0)

0x519: Push((int) 37074)
0x51a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51b: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x51c: PushEmpty(string)
0x51d: Stack[-1] = "Serious"
0x51e: Call2 0x4c2

0x51f: Pop(1)
0x520: Push((int) 535389)
0x521: @@ SetMessage(Stack[-1])
0x522: Pop(1)
0x523: @@ ClearReplies()
0x524: Pop(0)
0x525: Push((int) 535390)
0x526: Push((int) 37076)
0x527: Push((int) 37075)
0x528: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x529: Pop(3)
0x52a: Push((int) 535393)
0x52b: Push((int) -1)
0x52c: Push((int) 37078)
0x52d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52e: Pop(3)
0x52f: Return(); Pop(0)

0x530: Push((int) 37076)
0x531: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x532: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x533: PushEmpty(string)
0x534: Stack[-1] = "Azart"
0x535: Call2 0x4c2

0x536: Pop(1)
0x537: Push((int) 535391)
0x538: @@ SetMessage(Stack[-1])
0x539: Pop(1)
0x53a: @@ ClearReplies()
0x53b: Pop(0)
0x53c: Push((int) 535392)
0x53d: Push((int) 37079)
0x53e: Push((int) 37077)
0x53f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x540: Pop(3)
0x541: Push((int) 535396)
0x542: Push((int) -1)
0x543: Push((int) 37081)
0x544: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x545: Pop(3)
0x546: Push((int) 535397)
0x547: Push((int) -1)
0x548: Push((int) 37082)
0x549: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54a: Pop(3)
0x54b: Return(); Pop(0)

0x54c: Push((int) 37079)
0x54d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54e: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x54f: PushEmpty(string)
0x550: Stack[-1] = "Serious"
0x551: Call2 0x4c2

0x552: Pop(1)
0x553: Push((int) 535394)
0x554: @@ SetMessage(Stack[-1])
0x555: Pop(1)
0x556: @@ ClearReplies()
0x557: Pop(0)
0x558: Push((int) 535395)
0x559: Push((int) -1)
0x55a: Push((int) 37080)
0x55b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55c: Pop(3)
0x55d: Push((int) 535398)
0x55e: Push((int) -1)
0x55f: Push((int) 37083)
0x560: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x561: Pop(3)
0x562: Return(); Pop(0)

0x563: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x564: PushEmpty(bool)
0x565: Call2 0x8cc

0x566: Pop(0)
0x567: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x568: @ lshStopAnimation()
0x569: Pop(0)
0x56a: GOTO 0x56d

0x56b: @ StopAnimation()
0x56c: Pop(0)
0x56d: Return(); Pop(0)

0x56e: GOTO 0x4d9

0x56f: Return(); Pop(0)

0x570: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x571: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x572: PushEmpty(bool, object, float)
0x573: Stack[-2] = Stack[-12]
0x574: Stack[-1] = (float) 70.0
0x575: Call2 0x75b

0x576: Pop(2)
0x577: Pop(1); Push((bool) Stack[-1] == 0)
0x578: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x579: Stack[-10] = (int) -2
0x57a: Return(); Pop(8)

0x57b: @ CreateDialog(Stack[-4])
0x57c: Pop(0)
0x57d: PushEmpty(int)
0x57e: Call2 0x8c6

0x57f: Pop(0)
0x580: @@ SetNPCName(Stack[-1])
0x581: Pop(1)
0x582: PushEmpty(int)
0x583: Call2 0x8c4

0x584: Pop(0)
0x585: @@ SetNPCDescription(Stack[-1])
0x586: Pop(1)
0x587: PushEmpty(string)
0x588: Call2 0x8c8

0x589: Pop(0)
0x58a: @@ SetPhoto(Stack[-1])
0x58b: Pop(1)
0x58c: PushEmpty(string)
0x58d: Call2 0x8ca

0x58e: Pop(0)
0x58f: @@ SetPhoto2(Stack[-1])
0x590: Pop(1)
0x591: PushEmpty(int)
0x592: Call2 0x998

0x593: Pop(0)
0x594: @@ SetPlayerName(Stack[-1])
0x595: Pop(1)
0x596: Stack[-2] = (int) -1
0x597: @ IsOverrideActive(Stack[-3])
0x598: Pop(0)
0x599: Push(Stack[-3])
0x59a: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x59b: Stack[-10] = (int) -2
0x59c: Return(); Pop(8)

0x59d: @ DoDialog(Stack[-4])
0x59e: Pop(0)
0x59f: PushEmpty(bool, object)
0x5a0: PushEmpty(object)
0x5a1: Call2 0x871

0x5a2: Stack[-2] = Stack[-1]
0x5a3: Pop(1)
0x5a4: Call2 0x7b2

0x5a5: Pop(2)
0x5a6: PushEmpty(object, object)
0x5a7: Stack[-2] = Stack[-11]
0x5a8: Stack[-1] = Stack[-6]
0x5a9: Push(-2, 4); TaskCall(9)
0x5aa: Call2 0x5c1

0x5ab: Pop(-2, 4); TaskReturn
0x5ac: Pop(2)
0x5ad: @@ IsDialogEnd(Stack[-1])
0x5ae: Pop(0)
0x5af: Pop(0); Push((bool) Stack[-1] == 0)
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b1: @ sync()
0x5b2: Pop(0)
0x5b3: @@ IsDialogEnd(Stack[-1])
0x5b4: Pop(0)
0x5b5: GOTO 0x5af

0x5b6: PushEmpty(object)
0x5b7: Stack[-1] = Stack[-10]
0x5b8: Call2 0x7a0

0x5b9: Pop(1)
0x5ba: @ StopDialog(Stack[-4])
0x5bb: Pop(0)
0x5bc: @@ GetReturnValue(Stack[-2])
0x5bd: Pop(0)
0x5be: Stack[-10] = Stack[-2]
0x5bf: Return(); Pop(8)

0x5c0: Stack[-4] = 0
0x5c1: PushEmpty()
0x5c2: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5c3: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5c4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5c5: Push((int) 1)
0x5c6: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5c7: PushEmpty(string)
0x5c8: Stack[-1] = "Neutral"
0x5c9: Call2 0x5fb

0x5ca: Pop(1)
0x5cb: Push((int) 540554)
0x5cc: @@ SetMessage(Stack[-1])
0x5cd: Pop(1)
0x5ce: @@ ClearReplies()
0x5cf: Pop(0)
0x5d0: Push((int) 540555)
0x5d1: Push((int) -1)
0x5d2: Push((int) 42564)
0x5d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d4: Pop(3)
0x5d5: Push((int) 540794)
0x5d6: Push((int) -1)
0x5d7: Push((int) 42843)
0x5d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d9: Pop(3)
0x5da: GOTO 0x5dd

0x5db: Return(); Pop(0)

0x5dc: GOTO 0x5c5

0x5dd: PushEmpty(bool)
0x5de: Call2 0x8cc

0x5df: Pop(0)
0x5e0: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5e1: @ lshWaitForAnimEnd()
0x5e2: Pop(0)
0x5e3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5e4: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e5: GOTO 0x5eb

0x5e6: PushEmpty(string)
0x5e7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5e8: Call2 0x83c

0x5e9: Pop(1)
0x5ea: GOTO 0x5e1

0x5eb: GOTO 0x5fa

0x5ec: Push("all")
0x5ed: Push("idle")
0x5ee: @ PlayAnimation(Stack[-2], Stack[-1])
0x5ef: Pop(2)
0x5f0: @ WaitForAnimEnd()
0x5f1: Pop(0)
0x5f2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5f4: GOTO 0x5fa

0x5f5: Push("all")
0x5f6: Push("idle")
0x5f7: @ PlayAnimation(Stack[-2], Stack[-1])
0x5f8: Pop(2)
0x5f9: GOTO 0x5f0

0x5fa: Return(); Pop(0)

0x5fb: PushEmpty()
0x5fc: PushEmpty(bool)
0x5fd: Call2 0x8cc

0x5fe: Pop(0)
0x5ff: Pop(1); Push((bool) Stack[-1] == 0)
0x600: IF (Stack[-1] == 0) GOTO 0x602; Pop(1)

0x601: Return(); Pop(0)

0x602: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x603: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x604: Return(); Pop(0)

0x605: PushEmpty(string, bool)
0x606: Stack[-2] = Stack[-3]
0x607: Push("")
0x608: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x609: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x60a: Stack[-1] = (bool) 0
0x60b: GOTO 0x60d

0x60c: Stack[-1] = (bool) 1
0x60d: Call2 0x84c

0x60e: Pop(2)
0x60f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x610: Return(); Pop(0)

0x611: PushEmpty()
0x612: Push((int) 1)
0x613: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x614: PushEmpty()
0x615: Call2 0x86a

0x616: Pop(0)
0x617: Push((int) 42563)
0x618: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x619: IF (Stack[-1] == 0) GOTO 0x62e; Pop(1)

0x61a: PushEmpty(string)
0x61b: Stack[-1] = "Neutral"
0x61c: Call2 0x5fb

0x61d: Pop(1)
0x61e: Push((int) 540554)
0x61f: @@ SetMessage(Stack[-1])
0x620: Pop(1)
0x621: @@ ClearReplies()
0x622: Pop(0)
0x623: Push((int) 540555)
0x624: Push((int) -1)
0x625: Push((int) 42564)
0x626: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x627: Pop(3)
0x628: Push((int) 540794)
0x629: Push((int) -1)
0x62a: Push((int) 42843)
0x62b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62c: Pop(3)
0x62d: Return(); Pop(0)

0x62e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x62f: PushEmpty(bool)
0x630: Call2 0x8cc

0x631: Pop(0)
0x632: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x633: @ lshStopAnimation()
0x634: Pop(0)
0x635: GOTO 0x638

0x636: @ StopAnimation()
0x637: Pop(0)
0x638: Return(); Pop(0)

0x639: GOTO 0x612

0x63a: Return(); Pop(0)

0x63b: PushEmpty()
0x63c: Call2 0x63f

0x63d: Pop(0)
0x63e: Return(); Pop(0)

0x63f: PushEmpty(bool)
0x640: Call2 0x756

0x641: Pop(0)
0x642: Pop(1); Push((bool) Stack[-1] == 0)
0x643: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x644: @ Hold()
0x645: Pop(0)
0x646: @ GetDirection(Stack[-0])
0x647: Pop(0)
0x648: PushEmpty()
0x649: Call2 0x6ef

0x64a: Pop(0)
0x64b: GOTO 0x648

0x64c: Return(); Pop(0)

0x64d: PushEmpty(object, object)
0x64e: Push("player")
0x64f: @ FindActor(Stack[-2], Stack[-1])
0x650: Pop(1)
0x651: Pop(0); Push((bool) Stack[-1] == 0)
0x652: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x653: Stack[-3] = (bool) 0
0x654: Return(); Pop(2)

0x655: PushEmpty(bool, object)
0x656: Stack[-1] = Stack[-3]
0x657: Call2 0x74d

0x658: Stack[-5] = Stack[-2]
0x659: Pop(2)
0x65a: Return(); Pop(2)

0x65b: Stack[-1] = 0
0x65c: Push(CvectorIndex(Stack[-0], 0))
0x65d: Push(CvectorIndex(Stack[-0], 2))
0x65e: @ RotateAsync(Stack[-2], Stack[-1])
0x65f: Pop(2)
0x660: Return(); Pop(0)

0x661: PushEmpty(object, bool, object, bool)
0x662: Push("player")
0x663: @ FindActor(Stack[-3], Stack[-1])
0x664: Pop(1)
0x665: Pop(0); Push((bool) Stack[-2] == 0)
0x666: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x667: Stack[-5] = (bool) 0
0x668: Return(); Pop(4)

0x669: PushEmpty(float, object)
0x66a: Stack[-1] = Stack[-4]
0x66b: Call2 0x73b

0x66c: Pop(1)
0x66d: Push((float)90000.0)
0x66e: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x66f: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x670: Stack[-5] = (bool) 0
0x671: Return(); Pop(4)

0x672: @ CanSee(Stack[-1], Stack[-2])
0x673: Pop(0)
0x674: Stack[-5] = Stack[-1]
0x675: Return(); Pop(4)

0x676: Stack[-2] = 0
0x677: PushEmpty(float, float)
0x678: Push((int) 8)
0x679: Push((int) 16)
0x67a: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x67b: Pop(2)
0x67c: Push((int) 10)
0x67d: @ SetTimer(Stack[-1], Stack[-2])
0x67e: Pop(1)
0x67f: Return(); Pop(2)

0x680: Push((int) 10)
0x681: @ KillTimer(Stack[-1])
0x682: Pop(1)
0x683: Return(); Pop(0)

0x684: PushEmpty()
0x685: Push((int) 10)
0x686: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x687: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x688: PushEmpty()
0x689: Call2 0x680

0x68a: Pop(0)
0x68b: PushEmpty(bool)
0x68c: Stack[-1] = (bool) 0
0x68d: PushEmpty(bool)
0x68e: Call2 0x756

0x68f: Pop(0)
0x690: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x691: PushEmpty(bool)
0x692: Call2 0x661

0x693: Pop(0)
0x694: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x695: Stack[-1] = (bool) 1
0x696: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x697: PushEmpty(bool)
0x698: Call2 0x64d

0x699: Pop(0)
0x69a: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x69b: PushEmpty(bool, object)
0x69c: PushEmpty(object)
0x69d: Call2 0x871

0x69e: Stack[-2] = Stack[-1]
0x69f: Pop(1)
0x6a0: Call2 0x7ec

0x6a1: Pop(2)
0x6a2: GOTO 0x6a9

0x6a3: PushEmpty()
0x6a4: Call2 0x65c

0x6a5: Pop(0)
0x6a6: PushEmpty()
0x6a7: Call2 0x677

0x6a8: Pop(0)
0x6a9: Return(); Pop(0)

0x6aa: PushEmpty()
0x6ab: Call2 0x736

0x6ac: Pop(0)
0x6ad: PushEmpty()
0x6ae: Call2 0x680

0x6af: Pop(0)
0x6b0: @ lshStopSpeech()
0x6b1: Pop(0)
0x6b2: @ lshStopAnimation()
0x6b3: Pop(0)
0x6b4: @ StopAsync()
0x6b5: Pop(0)
0x6b6: @ Hold()
0x6b7: Pop(0)
0x6b8: Return(); Pop(0)

0x6b9: @ StopGroup0()
0x6ba: Pop(0)
0x6bb: PushEmpty()
0x6bc: Call2 0x680

0x6bd: Pop(0)
0x6be: PushEmpty(string)
0x6bf: Stack[-1] = "Neutral"
0x6c0: Call2 0x83c

0x6c1: Pop(1)
0x6c2: PushEmpty()
0x6c3: Call2 0x677

0x6c4: Pop(0)
0x6c5: Return(); Pop(0)

0x6c6: PushEmpty()
0x6c7: Push(Stack[-1])
0x6c8: IF (Stack[-1] == 0) GOTO 0x6cd; Pop(1)

0x6c9: PushEmpty()
0x6ca: Call2 0x677

0x6cb: Pop(0)
0x6cc: GOTO 0x6d1

0x6cd: PushEmpty(string)
0x6ce: Stack[-1] = "Neutral"
0x6cf: Call2 0x83c

0x6d0: Pop(1)
0x6d1: Return(); Pop(0)

0x6d2: PushEmpty(bool, bool)
0x6d3: @ IsOverrideActive(Stack[-1])
0x6d4: Pop(0)
0x6d5: Pop(0); Push((bool) Stack[-1] == 0)
0x6d6: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6d7: EventDisable(0)
0x6d8: PushEmpty()
0x6d9: Call2 0x736

0x6da: Pop(0)
0x6db: PushEmpty(bool, object)
0x6dc: Stack[-1] = Stack[-5]
0x6dd: Call2 0x74d

0x6de: Pop(2)
0x6df: EventEnable(0)
0x6e0: PushEmpty(object)
0x6e1: Stack[-1] = Stack[-4]
0x6e2: Call2 0x9ba

0x6e3: Pop(1)
0x6e4: PushEmpty(string)
0x6e5: Stack[-1] = "Neutral"
0x6e6: Call2 0x83c

0x6e7: Pop(1)
0x6e8: PushEmpty()
0x6e9: Call2 0x680

0x6ea: Pop(0)
0x6eb: PushEmpty()
0x6ec: Call2 0x677

0x6ed: Pop(0)
0x6ee: Return(); Pop(2)

0x6ef: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x6f0: @ WaitForAnimEnd()
0x6f1: Pop(0)
0x6f2: PushEmpty(bool)
0x6f3: Call2 0x756

0x6f4: Pop(0)
0x6f5: Pop(1); Push((bool) Stack[-1] == 0)
0x6f6: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f7: Return(); Pop(12)

0x6f8: PushEmpty(int)
0x6f9: Call2 0x8b3

0x6fa: Stack[-7] = Stack[-1]
0x6fb: Pop(1)
0x6fc: Stack[-5] = (int) 0
0x6fd: PushEmpty(bool)
0x6fe: Stack[-1] = (bool) 0
0x6ff: Push((int) 5)
0x700: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x701: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x702: PushEmpty(bool)
0x703: Call2 0x756

0x704: Pop(0)
0x705: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x706: Stack[-1] = (bool) 1
0x707: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x708: Pop(0); Push((bool) Stack[-6] == 0)
0x709: IF (Stack[-1] == 0) GOTO 0x711; Pop(1)

0x70a: Push((int) 3)
0x70b: @ Sleep(Stack[-1], Stack[-5])
0x70c: Pop(1)
0x70d: Pop(0); Push((bool) Stack[-4] == 0)
0x70e: IF (Stack[-1] == 0) GOTO 0x710; Pop(1)

0x70f: GOTO 0x731

0x710: GOTO 0x726

0x711: @ irand(Stack[-3], Stack[-6])
0x712: Pop(0)
0x713: Push((int) 5)
0x714: @ irand(Stack[-3], Stack[-1])
0x715: Pop(1)
0x716: Push((int) 0)
0x717: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x718: IF (Stack[-1] == 0) GOTO 0x71a; Pop(1)

0x719: Stack[-3] = (int) 0
0x71a: Push("all")
0x71b: PushEmpty(string, int)
0x71c: Stack[-1] = Stack[-6]
0x71d: Call2 0x8ac

0x71e: Pop(1)
0x71f: @ PlayAnimation(Stack[-2], Stack[-1])
0x720: Pop(2)
0x721: @ WaitForAnimEnd(Stack[-1])
0x722: Pop(0)
0x723: Pop(0); Push((bool) Stack[-1] == 0)
0x724: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x725: GOTO 0x731

0x726: PushEmpty(bool)
0x727: Call2 0x734

0x728: Pop(0)
0x729: Pop(1); Push((bool) Stack[-1] == 0)
0x72a: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x72b: GOTO 0x731

0x72c: @ ResetAAS()
0x72d: Pop(0)
0x72e: Push((int) 1)
0x72f: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x730: GOTO 0x6fd

0x731: @ ResetAAS()
0x732: Pop(0)
0x733: Return(); Pop(12)

0x734: Stack[-1] = (bool) 1
0x735: Return(); Pop(0)

0x736: @ StopAnimation()
0x737: Pop(0)
0x738: @ StopGroup0()
0x739: Pop(0)
0x73a: Return(); Pop(0)

0x73b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x73c: @ GetPosition(Stack[-3])
0x73d: Pop(0)
0x73e: @@ GetPosition(Stack[-2])
0x73f: Pop(0)
0x740: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x741: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x742: Return(); Pop(6)

0x743: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x744: @ GetPosition(Stack[-3])
0x745: Pop(0)
0x746: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x747: Push(CvectorIndex(Stack[-2], 0))
0x748: Push(CvectorIndex(Stack[-3], 2))
0x749: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x74a: Pop(2)
0x74b: Stack[-8] = Stack[-1]
0x74c: Return(); Pop(6)

0x74d: PushEmpty(cvector, cvector)
0x74e: @@ GetPosition(Stack[-1])
0x74f: Pop(0)
0x750: PushEmpty(bool, cvector)
0x751: Stack[-1] = Stack[-3]
0x752: Call2 0x743

0x753: Stack[-6] = Stack[-2]
0x754: Pop(2)
0x755: Return(); Pop(2)

0x756: PushEmpty(bool, bool)
0x757: @ IsLoaded(Stack[-1])
0x758: Pop(0)
0x759: Stack[-3] = Stack[-1]
0x75a: Return(); Pop(2)

0x75b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x75c: @@ GetPosition(Stack[-8])
0x75d: Pop(0)
0x75e: @@ GetEyesHeight(Stack[-9])
0x75f: Pop(0)
0x760: Push(CvectorIndex(Stack[-8], 1))
0x761: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x762: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x763: @ GetPosition(Stack[-7])
0x764: Pop(0)
0x765: @ GetEyesHeight(Stack[-9])
0x766: Pop(0)
0x767: Push(CvectorIndex(Stack[-7], 1))
0x768: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x769: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x76a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x76b: Push(CvectorIndex(Stack[-6], 1))
0x76c: Stack[-1] = (int) 0
0x76d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x76e: Pop(0); Push(Stack[-6] | Stack[-6]);
0x76f: Pop(1); Push(Sqrt(Stack[-1]))
0x770: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x771: Stack[-5] = -Stack[-6]; Pop(0);
0x772: Pop(0); Push(Stack[-6] * Stack[-19]);
0x773: PushEmpty(cvector, cvector)
0x774: Push(CVector(0.0, 1.0, 0.0))
0x775: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x776: Call2 0x877

0x777: Pop(1)
0x778: Push((int) 25)
0x779: Pop(2); Push(Stack[-2] * Stack[-1]);
0x77a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x77b: Push(CVector(0.0, 10.0, 0.0))
0x77c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x77d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x77e: @ IsOverrideActive(Stack[-2])
0x77f: Pop(0)
0x780: Push(Stack[-2])
0x781: IF (Stack[-1] == 0) GOTO 0x784; Pop(1)

0x782: Stack[-21] = (bool) 0
0x783: Return(); Pop(18)

0x784: @ StopWorld()
0x785: Pop(0)
0x786: Push((bool) 1)
0x787: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x788: Pop(1)
0x789: Push(CvectorIndex(Stack[-4], 0))
0x78a: Push(CvectorIndex(Stack[-5], 2))
0x78b: @ Rotate(Stack[-2], Stack[-1])
0x78c: Pop(2)
0x78d: PushEmpty(bool)
0x78e: Call2 0x8cc

0x78f: Pop(0)
0x790: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x791: GOTO 0x79a

0x792: Push("head")
0x793: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x794: Pop(1)
0x795: Push(Stack[-1])
0x796: IF (Stack[-1] == 0) GOTO 0x79a; Pop(1)

0x797: Push("head")
0x798: @ LookAsyncCamera(Stack[-1])
0x799: Pop(1)
0x79a: @ CameraWaitForPlayFinish()
0x79b: Pop(0)
0x79c: @ ResumeWorld()
0x79d: Pop(0)
0x79e: Stack[-21] = (bool) 1
0x79f: Return(); Pop(18)

0x7a0: PushEmpty(bool, bool)
0x7a1: Push((bool) 1)
0x7a2: @ CameraSwitchToNormal(Stack[-1])
0x7a3: Pop(1)
0x7a4: PushEmpty(bool)
0x7a5: Call2 0x8cc

0x7a6: Pop(0)
0x7a7: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a8: GOTO 0x7b1

0x7a9: Push("head")
0x7aa: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7ab: Pop(1)
0x7ac: Push(Stack[-1])
0x7ad: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x7ae: Push("head")
0x7af: @ UnlookAsync(Stack[-1])
0x7b0: Pop(1)
0x7b1: Return(); Pop(2)

0x7b2: PushEmpty(int, int, int, int)
0x7b3: Push("voice_common")
0x7b4: @ GetVariable(Stack[-1], Stack[-3])
0x7b5: Pop(1)
0x7b6: Push(Stack[-2])
0x7b7: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7b8: PushEmpty(bool, object)
0x7b9: Stack[-1] = Stack[-7]
0x7ba: Call2 0x7ec

0x7bb: Pop(1)
0x7bc: Pop(1); Push((bool) Stack[-1] == 0)
0x7bd: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7be: PushEmpty(bool, object)
0x7bf: Stack[-1] = Stack[-7]
0x7c0: Call2 0x811

0x7c1: Pop(1)
0x7c2: Pop(1); Push((bool) Stack[-1] == 0)
0x7c3: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c4: Stack[-6] = (bool) 0
0x7c5: Return(); Pop(4)

0x7c6: Push((int) 2)
0x7c7: @ irand(Stack[-2], Stack[-1])
0x7c8: Pop(1)
0x7c9: Push(Stack[-1])
0x7ca: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7cb: Push("voice_common")
0x7cc: Push((int) 1)
0x7cd: Pop(1); Push(Stack[-4] + Stack[-1]);
0x7ce: Push((int) 3)
0x7cf: Pop(2); Push(Stack[-2] % Stack[-1]);
0x7d0: @ SetVariable(Stack[-2], Stack[-1])
0x7d1: Pop(2)
0x7d2: GOTO 0x7d7

0x7d3: Push("voice_common")
0x7d4: Push((int) 0)
0x7d5: @ SetVariable(Stack[-2], Stack[-1])
0x7d6: Pop(2)
0x7d7: GOTO 0x7ea

0x7d8: PushEmpty(bool, object)
0x7d9: Stack[-1] = Stack[-7]
0x7da: Call2 0x811

0x7db: Pop(1)
0x7dc: Pop(1); Push((bool) Stack[-1] == 0)
0x7dd: IF (Stack[-1] == 0) GOTO 0x7e6; Pop(1)

0x7de: PushEmpty(bool, object)
0x7df: Stack[-1] = Stack[-7]
0x7e0: Call2 0x7ec

0x7e1: Pop(1)
0x7e2: Pop(1); Push((bool) Stack[-1] == 0)
0x7e3: IF (Stack[-1] == 0) GOTO 0x7e6; Pop(1)

0x7e4: Stack[-6] = (bool) 0
0x7e5: Return(); Pop(4)

0x7e6: Push("voice_common")
0x7e7: Push((int) 1)
0x7e8: @ SetVariable(Stack[-2], Stack[-1])
0x7e9: Pop(2)
0x7ea: Stack[-6] = (bool) 1
0x7eb: Return(); Pop(4)

0x7ec: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x7ed: Stack[-5] = "c"
0x7ee: Stack[-4] = (int) 0
0x7ef: Push((int) 1)
0x7f0: IF (Stack[-1] == 0) GOTO 0x7fc; Pop(1)

0x7f1: Push((int) 1)
0x7f2: Pop(1); Push(Stack[-5] + Stack[-1]);
0x7f3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7f4: @@ HasProperty(Stack[-1], Stack[-4])
0x7f5: Pop(1)
0x7f6: Pop(0); Push((bool) Stack[-3] == 0)
0x7f7: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7f8: GOTO 0x7fc

0x7f9: Push((int) 1)
0x7fa: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x7fb: GOTO 0x7ef

0x7fc: Pop(0); Push((bool) Stack[-4] == 0)
0x7fd: IF (Stack[-1] == 0) GOTO 0x800; Pop(1)

0x7fe: Stack[-12] = (bool) 0
0x7ff: Return(); Pop(10)

0x800: Stack[-2] = (int) 0
0x801: Push((int) 1)
0x802: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x803: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x804: @ irand(Stack[-2], Stack[-4])
0x805: Pop(0)
0x806: Push((int) 1)
0x807: Pop(1); Push(Stack[-3] + Stack[-1]);
0x808: Pop(1); Push(Stack[-6] + Stack[-1]);
0x809: @@ GetProperty(Stack[-1], Stack[-2])
0x80a: Pop(1)
0x80b: PushEmpty(bool, string)
0x80c: Stack[-1] = Stack[-3]
0x80d: Call2 0x85b

0x80e: Stack[-14] = Stack[-2]
0x80f: Pop(2)
0x810: Return(); Pop(10)

0x811: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x812: Push("d")
0x813: PushEmpty(int)
0x814: Call2 0x89d

0x815: Pop(0)
0x816: Pop(2); Push(Stack[-2] + Stack[-1]);
0x817: Push("m")
0x818: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x819: Stack[-4] = (int) 0
0x81a: Push((int) 1)
0x81b: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x81c: Push((int) 1)
0x81d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x81e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x81f: @@ HasProperty(Stack[-1], Stack[-4])
0x820: Pop(1)
0x821: Pop(0); Push((bool) Stack[-3] == 0)
0x822: IF (Stack[-1] == 0) GOTO 0x824; Pop(1)

0x823: GOTO 0x827

0x824: Push((int) 1)
0x825: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x826: GOTO 0x81a

0x827: Pop(0); Push((bool) Stack[-4] == 0)
0x828: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x829: Stack[-12] = (bool) 0
0x82a: Return(); Pop(10)

0x82b: Stack[-2] = (int) 0
0x82c: Push((int) 1)
0x82d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x82e: IF (Stack[-1] == 0) GOTO 0x831; Pop(1)

0x82f: @ irand(Stack[-2], Stack[-4])
0x830: Pop(0)
0x831: Push((int) 1)
0x832: Pop(1); Push(Stack[-3] + Stack[-1]);
0x833: Pop(1); Push(Stack[-6] + Stack[-1]);
0x834: @@ GetProperty(Stack[-1], Stack[-2])
0x835: Pop(1)
0x836: PushEmpty(bool, string)
0x837: Stack[-1] = Stack[-3]
0x838: Call2 0x85b

0x839: Stack[-14] = Stack[-2]
0x83a: Pop(2)
0x83b: Return(); Pop(10)

0x83c: PushEmpty(bool, float, float, bool, float, float)
0x83d: @ lshHasAnimation(Stack[-3], Stack[-7])
0x83e: Pop(0)
0x83f: Push(Stack[-3])
0x840: IF (Stack[-1] == 0) GOTO 0x847; Pop(1)

0x841: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x842: Pop(0)
0x843: Push((bool) 0)
0x844: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x845: Pop(1)
0x846: GOTO 0x84b

0x847: Push("Can't find lsh animation : ")
0x848: Pop(1); Push(Stack[-1] + Stack[-8]);
0x849: @ Trace(Stack[-1])
0x84a: Pop(1)
0x84b: Return(); Pop(6)

0x84c: PushEmpty(bool, float, float, bool, float, float)
0x84d: @ lshHasAnimation(Stack[-3], Stack[-8])
0x84e: Pop(0)
0x84f: Push(Stack[-3])
0x850: IF (Stack[-1] == 0) GOTO 0x856; Pop(1)

0x851: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x852: Pop(0)
0x853: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x854: Pop(0)
0x855: GOTO 0x85a

0x856: Push("Can't find lsh animation : ")
0x857: Pop(1); Push(Stack[-1] + Stack[-9]);
0x858: @ Trace(Stack[-1])
0x859: Pop(1)
0x85a: Return(); Pop(6)

0x85b: PushEmpty(bool, bool)
0x85c: PushEmpty(bool)
0x85d: Call2 0x8cc

0x85e: Pop(0)
0x85f: IF (Stack[-1] == 0) GOTO 0x868; Pop(1)

0x860: @ lshHasSpeech(Stack[-1], Stack[-3])
0x861: Pop(0)
0x862: Push(Stack[-1])
0x863: IF (Stack[-1] == 0) GOTO 0x868; Pop(1)

0x864: @ lshPlaySpeech(Stack[-3])
0x865: Pop(0)
0x866: Stack[-4] = (bool) 1
0x867: Return(); Pop(2)

0x868: Stack[-4] = (bool) 0
0x869: Return(); Pop(2)

0x86a: PushEmpty(bool)
0x86b: Call2 0x8cc

0x86c: Pop(0)
0x86d: IF (Stack[-1] == 0) GOTO 0x870; Pop(1)

0x86e: @ lshStopSpeech()
0x86f: Pop(0)
0x870: Return(); Pop(0)

0x871: PushEmpty(object, object)
0x872: @ self(Stack[-1])
0x873: Pop(0)
0x874: Stack[-3] = Stack[-1]
0x875: Return(); Pop(2)

0x876: Stack[-1] = 0
0x877: PushEmpty(float, float)
0x878: Pop(0); Push(Stack[-3] | Stack[-3]);
0x879: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x87a: Push((float)0.0)
0x87b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x87c: IF (Stack[-1] == 0) GOTO 0x87f; Pop(1)

0x87d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x87e: Return(); Pop(2)

0x87f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x880: Return(); Pop(2)

0x881: PushEmpty(int, int)
0x882: @ GetVariable(Stack[-3], Stack[-1])
0x883: Pop(0)
0x884: Stack[-4] = Stack[-1]
0x885: Return(); Pop(2)

0x886: PushEmpty(object, object, object, object)
0x887: @ GetMainOutdoorScene(Stack[-2])
0x888: Pop(0)
0x889: Push(".bin")
0x88a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x88b: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x88c: Pop(1)
0x88d: Stack[-6] = Stack[-1]
0x88e: Return(); Pop(4)

0x88f: Stack[-1] = 0
0x890: Stack[-2] = 0
0x891: PushEmpty(object, object)
0x892: @ FindActor(Stack[-1], Stack[-4])
0x893: Pop(0)
0x894: Pop(0); Push((bool) Stack[-1] == 0)
0x895: IF (Stack[-1] == 0) GOTO 0x898; Pop(1)

0x896: Stack[-5] = (bool) 0
0x897: Return(); Pop(2)

0x898: @ Trigger(Stack[-1], Stack[-3])
0x899: Pop(0)
0x89a: Stack[-5] = (bool) 1
0x89b: Return(); Pop(2)

0x89c: Stack[-1] = 0
0x89d: PushEmpty(float, float)
0x89e: @ GetGameTime(Stack[-1])
0x89f: Pop(0)
0x8a0: Push((int) 1)
0x8a1: PushEmpty(int)
0x8a2: Push((int) 24)
0x8a3: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x8a4: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x8a5: Return(); Pop(2)

0x8a6: PushEmpty()
0x8a7: PushEmpty(int)
0x8a8: Call2 0x89d

0x8a9: Pop(0)
0x8aa: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x8ab: Return(); Pop(0)

0x8ac: PushEmpty(string, string)
0x8ad: Stack[-1] = "idle"
0x8ae: Push(Stack[-3])
0x8af: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8b0: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x8b1: Stack[-4] = Stack[-1]
0x8b2: Return(); Pop(2)

0x8b3: PushEmpty(int, bool, int, bool)
0x8b4: Stack[-2] = (int) 0
0x8b5: Push("all")
0x8b6: PushEmpty(string, int)
0x8b7: Stack[-1] = Stack[-5]
0x8b8: Call2 0x8ac

0x8b9: Pop(1)
0x8ba: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8bb: Pop(2)
0x8bc: Pop(0); Push((bool) Stack[-1] == 0)
0x8bd: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x8be: GOTO 0x8c2

0x8bf: Push((int) 1)
0x8c0: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x8c1: GOTO 0x8b5

0x8c2: Stack[-5] = Stack[-2]
0x8c3: Return(); Pop(4)

0x8c4: Stack[-1] = (int) 515552
0x8c5: Return(); Pop(0)

0x8c6: Stack[-1] = (int) 502877
0x8c7: Return(); Pop(0)

0x8c8: Stack[-1] = "ui/NPC_Spi4ka.png"
0x8c9: Return(); Pop(0)

0x8ca: Stack[-1] = "ui/NPC_Spi4ka_b.png"
0x8cb: Return(); Pop(0)

0x8cc: Stack[-1] = (bool) 1
0x8cd: Return(); Pop(0)

0x8ce: PushEmpty()
0x8cf: PushEmpty()
0x8d0: Call2 0x955

0x8d1: Pop(0)
0x8d2: PushEmpty()
0x8d3: Call2 0x962

0x8d4: Pop(0)
0x8d5: PushEmpty(object, string)
0x8d6: Stack[-1] = "quest_b4_02"
0x8d7: Call2 0x886

0x8d8: Pop(2)
0x8d9: PushEmpty(bool, string, string)
0x8da: Stack[-2] = "quest_b4_02"
0x8db: Stack[-1] = "place_boy"
0x8dc: Call2 0x891

0x8dd: Pop(3)
0x8de: Return(); Pop(0)

0x8df: PushEmpty()
0x8e0: Push("oob4Spi4ka1")
0x8e1: Push((int) 1)
0x8e2: @ SetVariable(Stack[-2], Stack[-1])
0x8e3: Pop(2)
0x8e4: Return(); Pop(0)

0x8e5: PushEmpty()
0x8e6: Push("oob4Spi4ka2")
0x8e7: Push((int) 1)
0x8e8: @ SetVariable(Stack[-2], Stack[-1])
0x8e9: Pop(2)
0x8ea: Return(); Pop(0)

0x8eb: PushEmpty()
0x8ec: Push("b10q04Spi4kaTalk")
0x8ed: Push((int) 9)
0x8ee: @ SetVariable(Stack[-2], Stack[-1])
0x8ef: Pop(2)
0x8f0: PushEmpty()
0x8f1: Call2 0x948

0x8f2: Pop(0)
0x8f3: Return(); Pop(0)

0x8f4: PushEmpty()
0x8f5: Push("b4Spi4kaVisit")
0x8f6: Push((int) 1)
0x8f7: @ SetVariable(Stack[-2], Stack[-1])
0x8f8: Pop(2)
0x8f9: Return(); Pop(0)

0x8fa: PushEmpty()
0x8fb: Push("oob12Spi4ka1")
0x8fc: Push((int) 1)
0x8fd: @ SetVariable(Stack[-2], Stack[-1])
0x8fe: Pop(2)
0x8ff: Return(); Pop(0)

0x900: PushEmpty()
0x901: PushEmpty(int, string)
0x902: Stack[-1] = "b10q04Spi4kaTalk"
0x903: Call2 0x881

0x904: Pop(1)
0x905: Push((int) 1)
0x906: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x907: IF (Stack[-1] == 0) GOTO 0x90a; Pop(1)

0x908: Stack[-2] = (bool) 1
0x909: Return(); Pop(0)

0x90a: Stack[-2] = (bool) 0
0x90b: Return(); Pop(0)

0x90c: PushEmpty()
0x90d: PushEmpty(int, string)
0x90e: Stack[-1] = "oob12Spi4ka1"
0x90f: Call2 0x881

0x910: Pop(1)
0x911: Push((int) 0)
0x912: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x913: IF (Stack[-1] == 0) GOTO 0x916; Pop(1)

0x914: Stack[-2] = (bool) 1
0x915: Return(); Pop(0)

0x916: Stack[-2] = (bool) 0
0x917: Return(); Pop(0)

0x918: PushEmpty()
0x919: PushEmpty(int, string)
0x91a: Stack[-1] = "oob4Spi4ka1"
0x91b: Call2 0x881

0x91c: Pop(1)
0x91d: Push((int) 0)
0x91e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x91f: IF (Stack[-1] == 0) GOTO 0x922; Pop(1)

0x920: Stack[-2] = (bool) 1
0x921: Return(); Pop(0)

0x922: Stack[-2] = (bool) 0
0x923: Return(); Pop(0)

0x924: PushEmpty()
0x925: PushEmpty(int, string)
0x926: Stack[-1] = "b4q02"
0x927: Call2 0x881

0x928: Pop(1)
0x929: Push((int) 0)
0x92a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x92b: IF (Stack[-1] == 0) GOTO 0x92e; Pop(1)

0x92c: Stack[-2] = (bool) 1
0x92d: Return(); Pop(0)

0x92e: Stack[-2] = (bool) 0
0x92f: Return(); Pop(0)

0x930: PushEmpty()
0x931: PushEmpty(int, string)
0x932: Stack[-1] = "oob4Spi4ka2"
0x933: Call2 0x881

0x934: Pop(1)
0x935: Push((int) 0)
0x936: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x937: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x938: Stack[-2] = (bool) 1
0x939: Return(); Pop(0)

0x93a: Stack[-2] = (bool) 0
0x93b: Return(); Pop(0)

0x93c: PushEmpty()
0x93d: PushEmpty(int, string)
0x93e: Stack[-1] = "b4q02"
0x93f: Call2 0x881

0x940: Pop(1)
0x941: Push((int) 1000)
0x942: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x943: IF (Stack[-1] == 0) GOTO 0x946; Pop(1)

0x944: Stack[-2] = (bool) 1
0x945: Return(); Pop(0)

0x946: Stack[-2] = (bool) 0
0x947: Return(); Pop(0)

0x948: PushEmpty(object, object)
0x949: Push((int) 557)
0x94a: Push((int) 2)
0x94b: Push((int) 530536)
0x94c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x94d: Pop(3)
0x94e: PushEmpty(bool, object, int)
0x94f: Stack[-2] = Stack[-4]
0x950: Stack[-1] = (int) 548
0x951: Call2 0x97c

0x952: Pop(3)
0x953: Return(); Pop(2)

0x954: Stack[-1] = 0
0x955: PushEmpty(object, object)
0x956: Push((int) 213)
0x957: Push((int) 2)
0x958: Push((int) 518576)
0x959: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x95a: Pop(3)
0x95b: PushEmpty(bool, object, int)
0x95c: Stack[-2] = Stack[-4]
0x95d: Stack[-1] = (int) -1
0x95e: Call2 0x97c

0x95f: Pop(3)
0x960: Return(); Pop(2)

0x961: Stack[-1] = 0
0x962: PushEmpty(object, object)
0x963: Push((int) 214)
0x964: Push((int) 2)
0x965: Push((int) 518577)
0x966: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x967: Pop(3)
0x968: PushEmpty(bool, object, int)
0x969: Stack[-2] = Stack[-4]
0x96a: Stack[-1] = (int) 213
0x96b: Call2 0x97c

0x96c: Pop(3)
0x96d: Return(); Pop(2)

0x96e: Stack[-1] = 0
0x96f: PushEmpty(object, object)
0x970: @ GetDiaryRoot(Stack[-1])
0x971: Pop(0)
0x972: Pop(0); Push((bool) Stack[-1] == 0)
0x973: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x974: Push("Can't retrieve diary root")
0x975: @ Trace(Stack[-1])
0x976: Pop(1)
0x977: Stack[-3] = (bool) 0
0x978: Return(); Pop(2)

0x979: Stack[-3] = Stack[-1]
0x97a: Return(); Pop(2)

0x97b: Stack[-1] = 0
0x97c: PushEmpty(object, object, int, object, object, int)
0x97d: PushEmpty(object)
0x97e: Call2 0x96f

0x97f: Stack[-4] = Stack[-1]
0x980: Pop(1)
0x981: @@ Find(Stack[-7], Stack[-2])
0x982: Pop(0)
0x983: Pop(0); Push((bool) Stack[-2] == 0)
0x984: IF (Stack[-1] == 0) GOTO 0x98b; Pop(1)

0x985: Push("Can't find diary parent with id: ")
0x986: Pop(1); Push(Stack[-1] + Stack[-8]);
0x987: @ Trace(Stack[-1])
0x988: Pop(1)
0x989: Stack[-9] = (bool) 0
0x98a: Return(); Pop(6)

0x98b: @@ AddChild(Stack[-8])
0x98c: Pop(0)
0x98d: Push((int) 7)
0x98e: @ SendWorldWndMessage(Stack[-1])
0x98f: Pop(1)
0x990: @@ GetCategory(Stack[-1])
0x991: Pop(0)
0x992: @ SetDiarySection(Stack[-1])
0x993: Pop(0)
0x994: Stack[-9] = (bool) 0
0x995: Return(); Pop(6)

0x996: Stack[-2] = 0
0x997: Stack[-3] = 0
0x998: PushEmpty(int, int)
0x999: Push("branch")
0x99a: @ GetVariable(Stack[-1], Stack[-2])
0x99b: Pop(1)
0x99c: Push((int) 0)
0x99d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x99e: IF (Stack[-1] == 0) GOTO 0x9a2; Pop(1)

0x99f: Stack[-3] = (int) 1
0x9a0: Return(); Pop(2)

0x9a1: GOTO 0x9a7

0x9a2: Push((int) 1)
0x9a3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9a4: IF (Stack[-1] == 0) GOTO 0x9a7; Pop(1)

0x9a5: Stack[-3] = (int) 2
0x9a6: Return(); Pop(2)

0x9a7: Stack[-3] = (int) 3
0x9a8: Return(); Pop(2)

0x9a9: PushEmpty(int, int)
0x9aa: Push("mt_spi4ka")
0x9ab: @ GetVariable(Stack[-1], Stack[-2])
0x9ac: Pop(1)
0x9ad: Pop(0); Push((bool) Stack[-1] == 0)
0x9ae: IF (Stack[-1] == 0) GOTO 0x9b9; Pop(1)

0x9af: PushEmpty(int, object)
0x9b0: Stack[-1] = Stack[-5]
0x9b1: Push(-2, 1); TaskCall(2)
0x9b2: Call2 0x226

0x9b3: Pop(-2, 1); TaskReturn
0x9b4: Pop(2)
0x9b5: Push("mt_spi4ka")
0x9b6: Push((int) 1)
0x9b7: @ SetVariable(Stack[-2], Stack[-1])
0x9b8: Pop(2)
0x9b9: Return(); Pop(2)

0x9ba: PushEmpty()
0x9bb: PushEmpty(object)
0x9bc: Stack[-1] = Stack[-2]
0x9bd: Call2 0x9a9

0x9be: Pop(1)
0x9bf: PushEmpty(bool, int)
0x9c0: Stack[-1] = (int) 4
0x9c1: Call2 0x8a6

0x9c2: Pop(1)
0x9c3: IF (Stack[-1] == 0) GOTO 0x9cb; Pop(1)

0x9c4: PushEmpty(int, object)
0x9c5: Stack[-1] = Stack[-3]
0x9c6: Push(-2, 1); TaskCall(0)
0x9c7: Call2 0x0

0x9c8: Pop(-2, 1); TaskReturn
0x9c9: Pop(2)
0x9ca: Return(); Pop(0)

0x9cb: PushEmpty(bool, int)
0x9cc: Stack[-1] = (int) 10
0x9cd: Call2 0x8a6

0x9ce: Pop(1)
0x9cf: IF (Stack[-1] == 0) GOTO 0x9d7; Pop(1)

0x9d0: PushEmpty(int, object)
0x9d1: Stack[-1] = Stack[-3]
0x9d2: Push(-2, 1); TaskCall(4)
0x9d3: Call2 0x315

0x9d4: Pop(-2, 1); TaskReturn
0x9d5: Pop(2)
0x9d6: Return(); Pop(0)

0x9d7: PushEmpty(bool, int)
0x9d8: Stack[-1] = (int) 12
0x9d9: Call2 0x8a6

0x9da: Pop(1)
0x9db: IF (Stack[-1] == 0) GOTO 0x9e3; Pop(1)

0x9dc: PushEmpty(int, object)
0x9dd: Stack[-1] = Stack[-3]
0x9de: Push(-2, 1); TaskCall(6)
0x9df: Call2 0x42d

0x9e0: Pop(-2, 1); TaskReturn
0x9e1: Pop(2)
0x9e2: Return(); Pop(0)

0x9e3: PushEmpty(int, object)
0x9e4: Stack[-1] = Stack[-3]
0x9e5: Push(-2, 1); TaskCall(8)
0x9e6: Call2 0x570

0x9e7: Pop(-2, 1); TaskReturn
0x9e8: Pop(2)
0x9e9: Return(); Pop(0)

