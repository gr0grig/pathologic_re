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
	Serious
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Azart
	Secret
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
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x622
RunTask = 10

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1c3 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x332 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x509 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5f8 Vars = (int, int)
	GTASK_10 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x66b Vars = (int)
		EVENT_6 Op = 0x691 Vars = ()
		EVENT_5 Op = 0x6a0 Vars = ()
		EVENT_45 Op = 0x6ad Vars = (bool)
		EVENT_0 Op = 0x6b9 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x742

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x8ab

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x8a9

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x8ad

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x8af

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x97d

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
0x31: Call2 0x856

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x797

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
0x48: Call2 0x786

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
0x58: Stack[-1] = "Serious"
0x59: Call2 0x90

0x5a: Pop(1)
0x5b: Push((int) 530479)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x8e5

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 530480)
0x66: Push((int) 32848)
0x67: Push((int) 31846)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 530481)
0x6b: Push((int) -1)
0x6c: Push((int) 31847)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0x8b1

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x821

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
0x92: Call2 0x8b1

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
0xa2: Call2 0x831

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x84f

0xab: Pop(0)
0xac: Push((int) 31849)
0xad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xaf: PushEmpty(object, object)
0xb0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2: Call2 0x8d0

0xb3: Pop(2)
0xb4: Push((int) 31845)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Serious"
0xb9: Call2 0x90

0xba: Pop(1)
0xbb: Push((int) 530479)
0xbc: @@ SetMessage(Stack[-1])
0xbd: Pop(1)
0xbe: @@ ClearReplies()
0xbf: Pop(0)
0xc0: PushEmpty(bool, object)
0xc1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc2: Call2 0x8e5

0xc3: Pop(1)
0xc4: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc5: Push((int) 530480)
0xc6: Push((int) 32848)
0xc7: Push((int) 31846)
0xc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9: Pop(3)
0xca: Push((int) 530481)
0xcb: Push((int) -1)
0xcc: Push((int) 31847)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Return(); Pop(0)

0xd0: Push((int) 32848)
0xd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Azart"
0xd5: Call2 0x90

0xd6: Pop(1)
0xd7: Push((int) 531491)
0xd8: @@ SetMessage(Stack[-1])
0xd9: Pop(1)
0xda: @@ ClearReplies()
0xdb: Pop(0)
0xdc: Push((int) 531493)
0xdd: Push((int) 31848)
0xde: Push((int) 32850)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Push((int) 531492)
0xe2: Push((int) 31848)
0xe3: Push((int) 32849)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Return(); Pop(0)

0xe7: Push((int) 31848)
0xe8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xea: PushEmpty(string)
0xeb: Stack[-1] = "Azart"
0xec: Call2 0x90

0xed: Pop(1)
0xee: Push((int) 530482)
0xef: @@ SetMessage(Stack[-1])
0xf0: Pop(1)
0xf1: @@ ClearReplies()
0xf2: Pop(0)
0xf3: Push((int) 531494)
0xf4: Push((int) 32853)
0xf5: Push((int) 32852)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: Push((int) 32853)
0xfa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xfc: PushEmpty(string)
0xfd: Stack[-1] = "Azart"
0xfe: Call2 0x90

0xff: Pop(1)
0x100: Push((int) 531495)
0x101: @@ SetMessage(Stack[-1])
0x102: Pop(1)
0x103: @@ ClearReplies()
0x104: Pop(0)
0x105: Push((int) 530483)
0x106: Push((int) -1)
0x107: Push((int) 31849)
0x108: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109: Pop(3)
0x10a: Return(); Pop(0)

0x10b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x10c: PushEmpty(bool)
0x10d: Call2 0x8b1

0x10e: Pop(0)
0x10f: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x110: @ lshStopAnimation()
0x111: Pop(0)
0x112: GOTO 0x115

0x113: @ StopAnimation()
0x114: Pop(0)
0x115: Return(); Pop(0)

0x116: GOTO 0xa7

0x117: Return(); Pop(0)

0x118: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x119: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x11a: PushEmpty(bool, object, float)
0x11b: Stack[-2] = Stack[-12]
0x11c: Stack[-1] = (float) 70.0
0x11d: Call2 0x742

0x11e: Pop(2)
0x11f: Pop(1); Push((bool) Stack[-1] == 0)
0x120: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x121: Stack[-10] = (int) -2
0x122: Return(); Pop(8)

0x123: @ CreateDialog(Stack[-4])
0x124: Pop(0)
0x125: PushEmpty(int)
0x126: Call2 0x8ab

0x127: Pop(0)
0x128: @@ SetNPCName(Stack[-1])
0x129: Pop(1)
0x12a: PushEmpty(int)
0x12b: Call2 0x8a9

0x12c: Pop(0)
0x12d: @@ SetNPCDescription(Stack[-1])
0x12e: Pop(1)
0x12f: PushEmpty(string)
0x130: Call2 0x8ad

0x131: Pop(0)
0x132: @@ SetPhoto(Stack[-1])
0x133: Pop(1)
0x134: PushEmpty(string)
0x135: Call2 0x8af

0x136: Pop(0)
0x137: @@ SetPhoto2(Stack[-1])
0x138: Pop(1)
0x139: PushEmpty(int)
0x13a: Call2 0x97d

0x13b: Pop(0)
0x13c: @@ SetPlayerName(Stack[-1])
0x13d: Pop(1)
0x13e: Stack[-2] = (int) -1
0x13f: @ IsOverrideActive(Stack[-3])
0x140: Pop(0)
0x141: Push(Stack[-3])
0x142: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x143: Stack[-10] = (int) -2
0x144: Return(); Pop(8)

0x145: @ DoDialog(Stack[-4])
0x146: Pop(0)
0x147: PushEmpty(bool, object)
0x148: PushEmpty(object)
0x149: Call2 0x856

0x14a: Stack[-2] = Stack[-1]
0x14b: Pop(1)
0x14c: Call2 0x797

0x14d: Pop(2)
0x14e: PushEmpty(object, object)
0x14f: Stack[-2] = Stack[-11]
0x150: Stack[-1] = Stack[-6]
0x151: Push(-2, 4); TaskCall(3)
0x152: Call2 0x169

0x153: Pop(-2, 4); TaskReturn
0x154: Pop(2)
0x155: @@ IsDialogEnd(Stack[-1])
0x156: Pop(0)
0x157: Pop(0); Push((bool) Stack[-1] == 0)
0x158: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x159: @ sync()
0x15a: Pop(0)
0x15b: @@ IsDialogEnd(Stack[-1])
0x15c: Pop(0)
0x15d: GOTO 0x157

0x15e: PushEmpty(object)
0x15f: Stack[-1] = Stack[-10]
0x160: Call2 0x786

0x161: Pop(1)
0x162: @ StopDialog(Stack[-4])
0x163: Pop(0)
0x164: @@ GetReturnValue(Stack[-2])
0x165: Pop(0)
0x166: Stack[-10] = Stack[-2]
0x167: Return(); Pop(8)

0x168: Stack[-4] = 0
0x169: PushEmpty()
0x16a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x16b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x16c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x16d: Push((int) 1)
0x16e: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x16f: PushEmpty(string)
0x170: Stack[-1] = "Secret"
0x171: Call2 0x1ad

0x172: Pop(1)
0x173: Push((int) 535248)
0x174: @@ SetMessage(Stack[-1])
0x175: Pop(1)
0x176: @@ ClearReplies()
0x177: Pop(0)
0x178: PushEmpty(bool, object)
0x179: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17a: Call2 0x8f1

0x17b: Pop(1)
0x17c: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x17d: Push((int) 535249)
0x17e: Push((int) 37070)
0x17f: Push((int) 36924)
0x180: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x181: Pop(3)
0x182: Push((int) 535387)
0x183: Push((int) -1)
0x184: Push((int) 37072)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Push((int) 535388)
0x188: Push((int) -1)
0x189: Push((int) 37073)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: GOTO 0x18f

0x18d: Return(); Pop(0)

0x18e: GOTO 0x16d

0x18f: PushEmpty(bool)
0x190: Call2 0x8b1

0x191: Pop(0)
0x192: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x193: @ lshWaitForAnimEnd()
0x194: Pop(0)
0x195: Push( Stack[3 + Tasks[-1].StackPointer] )
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: GOTO 0x19d

0x198: PushEmpty(string)
0x199: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x19a: Call2 0x821

0x19b: Pop(1)
0x19c: GOTO 0x193

0x19d: GOTO 0x1ac

0x19e: Push("all")
0x19f: Push("idle")
0x1a0: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a1: Pop(2)
0x1a2: @ WaitForAnimEnd()
0x1a3: Pop(0)
0x1a4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a5: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a6: GOTO 0x1ac

0x1a7: Push("all")
0x1a8: Push("idle")
0x1a9: @ PlayAnimation(Stack[-2], Stack[-1])
0x1aa: Pop(2)
0x1ab: GOTO 0x1a2

0x1ac: Return(); Pop(0)

0x1ad: PushEmpty()
0x1ae: PushEmpty(bool)
0x1af: Call2 0x8b1

0x1b0: Pop(0)
0x1b1: Pop(1); Push((bool) Stack[-1] == 0)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b3: Return(); Pop(0)

0x1b4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b6: Return(); Pop(0)

0x1b7: PushEmpty(string, bool)
0x1b8: Stack[-2] = Stack[-3]
0x1b9: Push("")
0x1ba: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bc: Stack[-1] = (bool) 0
0x1bd: GOTO 0x1bf

0x1be: Stack[-1] = (bool) 1
0x1bf: Call2 0x831

0x1c0: Pop(2)
0x1c1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1c2: Return(); Pop(0)

0x1c3: PushEmpty()
0x1c4: Push((int) 1)
0x1c5: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x1c6: PushEmpty()
0x1c7: Call2 0x84f

0x1c8: Pop(0)
0x1c9: Push((int) 36924)
0x1ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cc: PushEmpty(object, object)
0x1cd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1cf: Call2 0x8df

0x1d0: Pop(2)
0x1d1: Push((int) 36923)
0x1d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1d4: PushEmpty(string)
0x1d5: Stack[-1] = "Secret"
0x1d6: Call2 0x1ad

0x1d7: Pop(1)
0x1d8: Push((int) 535248)
0x1d9: @@ SetMessage(Stack[-1])
0x1da: Pop(1)
0x1db: @@ ClearReplies()
0x1dc: Pop(0)
0x1dd: PushEmpty(bool, object)
0x1de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1df: Call2 0x8f1

0x1e0: Pop(1)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e2: Push((int) 535249)
0x1e3: Push((int) 37070)
0x1e4: Push((int) 36924)
0x1e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e6: Pop(3)
0x1e7: Push((int) 535387)
0x1e8: Push((int) -1)
0x1e9: Push((int) 37072)
0x1ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1eb: Pop(3)
0x1ec: Push((int) 535388)
0x1ed: Push((int) -1)
0x1ee: Push((int) 37073)
0x1ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f0: Pop(3)
0x1f1: Return(); Pop(0)

0x1f2: Push((int) 37070)
0x1f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1f5: PushEmpty(string)
0x1f6: Stack[-1] = "Serious"
0x1f7: Call2 0x1ad

0x1f8: Pop(1)
0x1f9: Push((int) 535385)
0x1fa: @@ SetMessage(Stack[-1])
0x1fb: Pop(1)
0x1fc: @@ ClearReplies()
0x1fd: Pop(0)
0x1fe: Push((int) 535386)
0x1ff: Push((int) 37074)
0x200: Push((int) 37071)
0x201: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x202: Pop(3)
0x203: Return(); Pop(0)

0x204: Push((int) 37074)
0x205: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x206: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x207: PushEmpty(string)
0x208: Stack[-1] = "Serious"
0x209: Call2 0x1ad

0x20a: Pop(1)
0x20b: Push((int) 535389)
0x20c: @@ SetMessage(Stack[-1])
0x20d: Pop(1)
0x20e: @@ ClearReplies()
0x20f: Pop(0)
0x210: Push((int) 535390)
0x211: Push((int) 37076)
0x212: Push((int) 37075)
0x213: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x214: Pop(3)
0x215: Push((int) 535393)
0x216: Push((int) -1)
0x217: Push((int) 37078)
0x218: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x219: Pop(3)
0x21a: Return(); Pop(0)

0x21b: Push((int) 37076)
0x21c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21d: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x21e: PushEmpty(string)
0x21f: Stack[-1] = "Azart"
0x220: Call2 0x1ad

0x221: Pop(1)
0x222: Push((int) 535391)
0x223: @@ SetMessage(Stack[-1])
0x224: Pop(1)
0x225: @@ ClearReplies()
0x226: Pop(0)
0x227: Push((int) 535392)
0x228: Push((int) 37079)
0x229: Push((int) 37077)
0x22a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22b: Pop(3)
0x22c: Push((int) 535396)
0x22d: Push((int) -1)
0x22e: Push((int) 37081)
0x22f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x230: Pop(3)
0x231: Push((int) 535397)
0x232: Push((int) -1)
0x233: Push((int) 37082)
0x234: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x235: Pop(3)
0x236: Return(); Pop(0)

0x237: Push((int) 37079)
0x238: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x23a: PushEmpty(string)
0x23b: Stack[-1] = "Serious"
0x23c: Call2 0x1ad

0x23d: Pop(1)
0x23e: Push((int) 535394)
0x23f: @@ SetMessage(Stack[-1])
0x240: Pop(1)
0x241: @@ ClearReplies()
0x242: Pop(0)
0x243: Push((int) 535395)
0x244: Push((int) -1)
0x245: Push((int) 37080)
0x246: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x247: Pop(3)
0x248: Push((int) 535398)
0x249: Push((int) -1)
0x24a: Push((int) 37083)
0x24b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24c: Pop(3)
0x24d: Return(); Pop(0)

0x24e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x24f: PushEmpty(bool)
0x250: Call2 0x8b1

0x251: Pop(0)
0x252: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x253: @ lshStopAnimation()
0x254: Pop(0)
0x255: GOTO 0x258

0x256: @ StopAnimation()
0x257: Pop(0)
0x258: Return(); Pop(0)

0x259: GOTO 0x1c4

0x25a: Return(); Pop(0)

0x25b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x25c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x25d: PushEmpty(bool, object, float)
0x25e: Stack[-2] = Stack[-12]
0x25f: Stack[-1] = (float) 70.0
0x260: Call2 0x742

0x261: Pop(2)
0x262: Pop(1); Push((bool) Stack[-1] == 0)
0x263: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x264: Stack[-10] = (int) -2
0x265: Return(); Pop(8)

0x266: @ CreateDialog(Stack[-4])
0x267: Pop(0)
0x268: PushEmpty(int)
0x269: Call2 0x8ab

0x26a: Pop(0)
0x26b: @@ SetNPCName(Stack[-1])
0x26c: Pop(1)
0x26d: PushEmpty(int)
0x26e: Call2 0x8a9

0x26f: Pop(0)
0x270: @@ SetNPCDescription(Stack[-1])
0x271: Pop(1)
0x272: PushEmpty(string)
0x273: Call2 0x8ad

0x274: Pop(0)
0x275: @@ SetPhoto(Stack[-1])
0x276: Pop(1)
0x277: PushEmpty(string)
0x278: Call2 0x8af

0x279: Pop(0)
0x27a: @@ SetPhoto2(Stack[-1])
0x27b: Pop(1)
0x27c: PushEmpty(int)
0x27d: Call2 0x97d

0x27e: Pop(0)
0x27f: @@ SetPlayerName(Stack[-1])
0x280: Pop(1)
0x281: Stack[-2] = (int) -1
0x282: @ IsOverrideActive(Stack[-3])
0x283: Pop(0)
0x284: Push(Stack[-3])
0x285: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x286: Stack[-10] = (int) -2
0x287: Return(); Pop(8)

0x288: @ DoDialog(Stack[-4])
0x289: Pop(0)
0x28a: PushEmpty(bool, object)
0x28b: PushEmpty(object)
0x28c: Call2 0x856

0x28d: Stack[-2] = Stack[-1]
0x28e: Pop(1)
0x28f: Call2 0x797

0x290: Pop(2)
0x291: PushEmpty(object, object)
0x292: Stack[-2] = Stack[-11]
0x293: Stack[-1] = Stack[-6]
0x294: Push(-2, 4); TaskCall(5)
0x295: Call2 0x2ac

0x296: Pop(-2, 4); TaskReturn
0x297: Pop(2)
0x298: @@ IsDialogEnd(Stack[-1])
0x299: Pop(0)
0x29a: Pop(0); Push((bool) Stack[-1] == 0)
0x29b: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29c: @ sync()
0x29d: Pop(0)
0x29e: @@ IsDialogEnd(Stack[-1])
0x29f: Pop(0)
0x2a0: GOTO 0x29a

0x2a1: PushEmpty(object)
0x2a2: Stack[-1] = Stack[-10]
0x2a3: Call2 0x786

0x2a4: Pop(1)
0x2a5: @ StopDialog(Stack[-4])
0x2a6: Pop(0)
0x2a7: @@ GetReturnValue(Stack[-2])
0x2a8: Pop(0)
0x2a9: Stack[-10] = Stack[-2]
0x2aa: Return(); Pop(8)

0x2ab: Stack[-4] = 0
0x2ac: PushEmpty()
0x2ad: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2ae: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2af: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2b0: Push((int) 1)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2b2: PushEmpty(bool, object)
0x2b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b4: Call2 0x8fd

0x2b5: Pop(1)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2b7: PushEmpty(object, object)
0x2b8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ba: Call2 0x8c4

0x2bb: Pop(2)
0x2bc: PushEmpty(object, object)
0x2bd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2be: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2bf: Call2 0x8d9

0x2c0: Pop(2)
0x2c1: PushEmpty(string)
0x2c2: Stack[-1] = "Azart"
0x2c3: Call2 0x31c

0x2c4: Pop(1)
0x2c5: Push((int) 518568)
0x2c6: @@ SetMessage(Stack[-1])
0x2c7: Pop(1)
0x2c8: @@ ClearReplies()
0x2c9: Pop(0)
0x2ca: Push((int) 518572)
0x2cb: Push((int) 20064)
0x2cc: Push((int) 19682)
0x2cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ce: Pop(3)
0x2cf: GOTO 0x2fe

0x2d0: PushEmpty(string)
0x2d1: Stack[-1] = "Secret"
0x2d2: Call2 0x31c

0x2d3: Pop(1)
0x2d4: Push((int) 518573)
0x2d5: @@ SetMessage(Stack[-1])
0x2d6: Pop(1)
0x2d7: @@ ClearReplies()
0x2d8: Pop(0)
0x2d9: PushEmpty(bool, object)
0x2da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2db: Call2 0x909

0x2dc: Pop(1)
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2de: Push((int) 518574)
0x2df: Push((int) 19688)
0x2e0: Push((int) 19684)
0x2e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e2: Pop(3)
0x2e3: PushEmpty(bool)
0x2e4: Stack[-1] = (bool) 0
0x2e5: PushEmpty(bool, object)
0x2e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e7: Call2 0x915

0x2e8: Pop(1)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ea: PushEmpty(bool, object)
0x2eb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ec: Call2 0x921

0x2ed: Pop(1)
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ef: Stack[-1] = (bool) 1
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f1: Push((int) 518586)
0x2f2: Push((int) 19694)
0x2f3: Push((int) 19693)
0x2f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f5: Pop(3)
0x2f6: Push((int) 518575)
0x2f7: Push((int) -1)
0x2f8: Push((int) 19685)
0x2f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fa: Pop(3)
0x2fb: GOTO 0x2fe

0x2fc: Return(); Pop(0)

0x2fd: GOTO 0x2b0

0x2fe: PushEmpty(bool)
0x2ff: Call2 0x8b1

0x300: Pop(0)
0x301: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x302: @ lshWaitForAnimEnd()
0x303: Pop(0)
0x304: Push( Stack[3 + Tasks[-1].StackPointer] )
0x305: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x306: GOTO 0x30c

0x307: PushEmpty(string)
0x308: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x309: Call2 0x821

0x30a: Pop(1)
0x30b: GOTO 0x302

0x30c: GOTO 0x31b

0x30d: Push("all")
0x30e: Push("idle")
0x30f: @ PlayAnimation(Stack[-2], Stack[-1])
0x310: Pop(2)
0x311: @ WaitForAnimEnd()
0x312: Pop(0)
0x313: Push( Stack[3 + Tasks[-1].StackPointer] )
0x314: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x315: GOTO 0x31b

0x316: Push("all")
0x317: Push("idle")
0x318: @ PlayAnimation(Stack[-2], Stack[-1])
0x319: Pop(2)
0x31a: GOTO 0x311

0x31b: Return(); Pop(0)

0x31c: PushEmpty()
0x31d: PushEmpty(bool)
0x31e: Call2 0x8b1

0x31f: Pop(0)
0x320: Pop(1); Push((bool) Stack[-1] == 0)
0x321: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x322: Return(); Pop(0)

0x323: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x324: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x325: Return(); Pop(0)

0x326: PushEmpty(string, bool)
0x327: Stack[-2] = Stack[-3]
0x328: Push("")
0x329: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32b: Stack[-1] = (bool) 0
0x32c: GOTO 0x32e

0x32d: Stack[-1] = (bool) 1
0x32e: Call2 0x831

0x32f: Pop(2)
0x330: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x331: Return(); Pop(0)

0x332: PushEmpty()
0x333: Push((int) 1)
0x334: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x335: PushEmpty()
0x336: Call2 0x84f

0x337: Pop(0)
0x338: Push((int) 19687)
0x339: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x33a: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33b: PushEmpty(object, object)
0x33c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x33d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33e: Call2 0x8b3

0x33f: Pop(2)
0x340: Push((int) 19689)
0x341: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x342: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x343: PushEmpty(object, object)
0x344: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x345: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x346: Call2 0x8b3

0x347: Pop(2)
0x348: Push((int) 19693)
0x349: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34a: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34b: PushEmpty(object, object)
0x34c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x34d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34e: Call2 0x8ca

0x34f: Pop(2)
0x350: Push((int) 19678)
0x351: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x353: PushEmpty(bool, object)
0x354: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x355: Call2 0x8fd

0x356: Pop(1)
0x357: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x358: PushEmpty(object, object)
0x359: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x35a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35b: Call2 0x8c4

0x35c: Pop(2)
0x35d: PushEmpty(object, object)
0x35e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x35f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x360: Call2 0x8d9

0x361: Pop(2)
0x362: PushEmpty(string)
0x363: Stack[-1] = "Azart"
0x364: Call2 0x31c

0x365: Pop(1)
0x366: Push((int) 518568)
0x367: @@ SetMessage(Stack[-1])
0x368: Pop(1)
0x369: @@ ClearReplies()
0x36a: Pop(0)
0x36b: Push((int) 518572)
0x36c: Push((int) 20064)
0x36d: Push((int) 19682)
0x36e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36f: Pop(3)
0x370: Return(); Pop(0)

0x371: PushEmpty(string)
0x372: Stack[-1] = "Secret"
0x373: Call2 0x31c

0x374: Pop(1)
0x375: Push((int) 518573)
0x376: @@ SetMessage(Stack[-1])
0x377: Pop(1)
0x378: @@ ClearReplies()
0x379: Pop(0)
0x37a: PushEmpty(bool, object)
0x37b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37c: Call2 0x909

0x37d: Pop(1)
0x37e: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x37f: Push((int) 518574)
0x380: Push((int) 19688)
0x381: Push((int) 19684)
0x382: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x383: Pop(3)
0x384: PushEmpty(bool)
0x385: Stack[-1] = (bool) 0
0x386: PushEmpty(bool, object)
0x387: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x388: Call2 0x915

0x389: Pop(1)
0x38a: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38b: PushEmpty(bool, object)
0x38c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x38d: Call2 0x921

0x38e: Pop(1)
0x38f: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x390: Stack[-1] = (bool) 1
0x391: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x392: Push((int) 518586)
0x393: Push((int) 19694)
0x394: Push((int) 19693)
0x395: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x396: Pop(3)
0x397: Push((int) 518575)
0x398: Push((int) -1)
0x399: Push((int) 19685)
0x39a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39b: Pop(3)
0x39c: Return(); Pop(0)

0x39d: Push((int) 19694)
0x39e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39f: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3a0: PushEmpty(string)
0x3a1: Stack[-1] = "Secret"
0x3a2: Call2 0x31c

0x3a3: Pop(1)
0x3a4: Push((int) 518587)
0x3a5: @@ SetMessage(Stack[-1])
0x3a6: Pop(1)
0x3a7: @@ ClearReplies()
0x3a8: Pop(0)
0x3a9: Push((int) 518588)
0x3aa: Push((int) 20052)
0x3ab: Push((int) 19695)
0x3ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ad: Pop(3)
0x3ae: Push((int) 518942)
0x3af: Push((int) 20054)
0x3b0: Push((int) 20053)
0x3b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b2: Pop(3)
0x3b3: Return(); Pop(0)

0x3b4: Push((int) 20054)
0x3b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b6: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3b7: PushEmpty(string)
0x3b8: Stack[-1] = "Serious"
0x3b9: Call2 0x31c

0x3ba: Pop(1)
0x3bb: Push((int) 518943)
0x3bc: @@ SetMessage(Stack[-1])
0x3bd: Pop(1)
0x3be: @@ ClearReplies()
0x3bf: Pop(0)
0x3c0: Push((int) 518944)
0x3c1: Push((int) 20057)
0x3c2: Push((int) 20055)
0x3c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c4: Pop(3)
0x3c5: Push((int) 518945)
0x3c6: Push((int) -1)
0x3c7: Push((int) 20056)
0x3c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c9: Pop(3)
0x3ca: Return(); Pop(0)

0x3cb: Push((int) 20057)
0x3cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3ce: PushEmpty(string)
0x3cf: Stack[-1] = "Serious"
0x3d0: Call2 0x31c

0x3d1: Pop(1)
0x3d2: Push((int) 518946)
0x3d3: @@ SetMessage(Stack[-1])
0x3d4: Pop(1)
0x3d5: @@ ClearReplies()
0x3d6: Pop(0)
0x3d7: Push((int) 518947)
0x3d8: Push((int) -1)
0x3d9: Push((int) 20058)
0x3da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3db: Pop(3)
0x3dc: Push((int) 518948)
0x3dd: Push((int) -1)
0x3de: Push((int) 20059)
0x3df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e0: Pop(3)
0x3e1: Return(); Pop(0)

0x3e2: Push((int) 20052)
0x3e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e4: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3e5: PushEmpty(string)
0x3e6: Stack[-1] = "Secret"
0x3e7: Call2 0x31c

0x3e8: Pop(1)
0x3e9: Push((int) 518941)
0x3ea: @@ SetMessage(Stack[-1])
0x3eb: Pop(1)
0x3ec: @@ ClearReplies()
0x3ed: Pop(0)
0x3ee: Push((int) 518949)
0x3ef: Push((int) -1)
0x3f0: Push((int) 20060)
0x3f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f2: Pop(3)
0x3f3: Return(); Pop(0)

0x3f4: Push((int) 19688)
0x3f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f6: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x3f7: PushEmpty(string)
0x3f8: Stack[-1] = "Serious"
0x3f9: Call2 0x31c

0x3fa: Pop(1)
0x3fb: Push((int) 518581)
0x3fc: @@ SetMessage(Stack[-1])
0x3fd: Pop(1)
0x3fe: @@ ClearReplies()
0x3ff: Pop(0)
0x400: Push((int) 518582)
0x401: Push((int) -1)
0x402: Push((int) 19689)
0x403: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x404: Pop(3)
0x405: Return(); Pop(0)

0x406: Push((int) 20062)
0x407: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x408: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x409: Push((int) 20064)
0x40a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40b: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x40c: PushEmpty(string)
0x40d: Stack[-1] = "Secret"
0x40e: Call2 0x31c

0x40f: Pop(1)
0x410: Push((int) 518953)
0x411: @@ SetMessage(Stack[-1])
0x412: Pop(1)
0x413: @@ ClearReplies()
0x414: Pop(0)
0x415: Push((int) 518954)
0x416: Push((int) 20066)
0x417: Push((int) 20065)
0x418: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x419: Pop(3)
0x41a: Return(); Pop(0)

0x41b: Push((int) 20066)
0x41c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x41e: PushEmpty(string)
0x41f: Stack[-1] = "Azart"
0x420: Call2 0x31c

0x421: Pop(1)
0x422: Push((int) 518955)
0x423: @@ SetMessage(Stack[-1])
0x424: Pop(1)
0x425: @@ ClearReplies()
0x426: Pop(0)
0x427: Push((int) 518956)
0x428: Push((int) 20069)
0x429: Push((int) 20067)
0x42a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42b: Pop(3)
0x42c: Push((int) 518957)
0x42d: Push((int) -1)
0x42e: Push((int) 20068)
0x42f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x430: Pop(3)
0x431: Return(); Pop(0)

0x432: Push((int) 20069)
0x433: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x434: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x435: PushEmpty(string)
0x436: Stack[-1] = "Secret"
0x437: Call2 0x31c

0x438: Pop(1)
0x439: Push((int) 518958)
0x43a: @@ SetMessage(Stack[-1])
0x43b: Pop(1)
0x43c: @@ ClearReplies()
0x43d: Pop(0)
0x43e: Push((int) 518959)
0x43f: Push((int) 19686)
0x440: Push((int) 20071)
0x441: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x442: Pop(3)
0x443: Push((int) 518960)
0x444: Push((int) -1)
0x445: Push((int) 20072)
0x446: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x447: Pop(3)
0x448: Return(); Pop(0)

0x449: Push((int) 19686)
0x44a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44b: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x44c: PushEmpty(string)
0x44d: Stack[-1] = "Secret"
0x44e: Call2 0x31c

0x44f: Pop(1)
0x450: Push((int) 518579)
0x451: @@ SetMessage(Stack[-1])
0x452: Pop(1)
0x453: @@ ClearReplies()
0x454: Pop(0)
0x455: Push((int) 518580)
0x456: Push((int) -1)
0x457: Push((int) 19687)
0x458: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x459: Pop(3)
0x45a: Return(); Pop(0)

0x45b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x45c: PushEmpty(bool)
0x45d: Call2 0x8b1

0x45e: Pop(0)
0x45f: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x460: @ lshStopAnimation()
0x461: Pop(0)
0x462: GOTO 0x465

0x463: @ StopAnimation()
0x464: Pop(0)
0x465: Return(); Pop(0)

0x466: GOTO 0x333

0x467: Return(); Pop(0)

0x468: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x469: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x46a: PushEmpty(bool, object, float)
0x46b: Stack[-2] = Stack[-12]
0x46c: Stack[-1] = (float) 70.0
0x46d: Call2 0x742

0x46e: Pop(2)
0x46f: Pop(1); Push((bool) Stack[-1] == 0)
0x470: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x471: Stack[-10] = (int) -2
0x472: Return(); Pop(8)

0x473: @ CreateDialog(Stack[-4])
0x474: Pop(0)
0x475: PushEmpty(int)
0x476: Call2 0x8ab

0x477: Pop(0)
0x478: @@ SetNPCName(Stack[-1])
0x479: Pop(1)
0x47a: PushEmpty(int)
0x47b: Call2 0x8a9

0x47c: Pop(0)
0x47d: @@ SetNPCDescription(Stack[-1])
0x47e: Pop(1)
0x47f: PushEmpty(string)
0x480: Call2 0x8ad

0x481: Pop(0)
0x482: @@ SetPhoto(Stack[-1])
0x483: Pop(1)
0x484: PushEmpty(string)
0x485: Call2 0x8af

0x486: Pop(0)
0x487: @@ SetPhoto2(Stack[-1])
0x488: Pop(1)
0x489: PushEmpty(int)
0x48a: Call2 0x97d

0x48b: Pop(0)
0x48c: @@ SetPlayerName(Stack[-1])
0x48d: Pop(1)
0x48e: Stack[-2] = (int) -1
0x48f: @ IsOverrideActive(Stack[-3])
0x490: Pop(0)
0x491: Push(Stack[-3])
0x492: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x493: Stack[-10] = (int) -2
0x494: Return(); Pop(8)

0x495: @ DoDialog(Stack[-4])
0x496: Pop(0)
0x497: PushEmpty(bool, object)
0x498: PushEmpty(object)
0x499: Call2 0x856

0x49a: Stack[-2] = Stack[-1]
0x49b: Pop(1)
0x49c: Call2 0x797

0x49d: Pop(2)
0x49e: PushEmpty(object, object)
0x49f: Stack[-2] = Stack[-11]
0x4a0: Stack[-1] = Stack[-6]
0x4a1: Push(-2, 4); TaskCall(7)
0x4a2: Call2 0x4b9

0x4a3: Pop(-2, 4); TaskReturn
0x4a4: Pop(2)
0x4a5: @@ IsDialogEnd(Stack[-1])
0x4a6: Pop(0)
0x4a7: Pop(0); Push((bool) Stack[-1] == 0)
0x4a8: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4a9: @ sync()
0x4aa: Pop(0)
0x4ab: @@ IsDialogEnd(Stack[-1])
0x4ac: Pop(0)
0x4ad: GOTO 0x4a7

0x4ae: PushEmpty(object)
0x4af: Stack[-1] = Stack[-10]
0x4b0: Call2 0x786

0x4b1: Pop(1)
0x4b2: @ StopDialog(Stack[-4])
0x4b3: Pop(0)
0x4b4: @@ GetReturnValue(Stack[-2])
0x4b5: Pop(0)
0x4b6: Stack[-10] = Stack[-2]
0x4b7: Return(); Pop(8)

0x4b8: Stack[-4] = 0
0x4b9: PushEmpty()
0x4ba: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4bb: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4bc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4bd: Push((int) 1)
0x4be: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4bf: PushEmpty(string)
0x4c0: Stack[-1] = "Neutral"
0x4c1: Call2 0x4f3

0x4c2: Pop(1)
0x4c3: Push((int) 520803)
0x4c4: @@ SetMessage(Stack[-1])
0x4c5: Pop(1)
0x4c6: @@ ClearReplies()
0x4c7: Pop(0)
0x4c8: Push((int) 520804)
0x4c9: Push((int) 29221)
0x4ca: Push((int) 22021)
0x4cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cc: Pop(3)
0x4cd: Push((int) 527876)
0x4ce: Push((int) 29224)
0x4cf: Push((int) 29223)
0x4d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d1: Pop(3)
0x4d2: GOTO 0x4d5

0x4d3: Return(); Pop(0)

0x4d4: GOTO 0x4bd

0x4d5: PushEmpty(bool)
0x4d6: Call2 0x8b1

0x4d7: Pop(0)
0x4d8: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4d9: @ lshWaitForAnimEnd()
0x4da: Pop(0)
0x4db: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4dc: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dd: GOTO 0x4e3

0x4de: PushEmpty(string)
0x4df: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4e0: Call2 0x821

0x4e1: Pop(1)
0x4e2: GOTO 0x4d9

0x4e3: GOTO 0x4f2

0x4e4: Push("all")
0x4e5: Push("idle")
0x4e6: @ PlayAnimation(Stack[-2], Stack[-1])
0x4e7: Pop(2)
0x4e8: @ WaitForAnimEnd()
0x4e9: Pop(0)
0x4ea: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4ec: GOTO 0x4f2

0x4ed: Push("all")
0x4ee: Push("idle")
0x4ef: @ PlayAnimation(Stack[-2], Stack[-1])
0x4f0: Pop(2)
0x4f1: GOTO 0x4e8

0x4f2: Return(); Pop(0)

0x4f3: PushEmpty()
0x4f4: PushEmpty(bool)
0x4f5: Call2 0x8b1

0x4f6: Pop(0)
0x4f7: Pop(1); Push((bool) Stack[-1] == 0)
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f9: Return(); Pop(0)

0x4fa: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4fb: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4fc: Return(); Pop(0)

0x4fd: PushEmpty(string, bool)
0x4fe: Stack[-2] = Stack[-3]
0x4ff: Push("")
0x500: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x501: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x502: Stack[-1] = (bool) 0
0x503: GOTO 0x505

0x504: Stack[-1] = (bool) 1
0x505: Call2 0x831

0x506: Pop(2)
0x507: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x508: Return(); Pop(0)

0x509: PushEmpty()
0x50a: Push((int) 1)
0x50b: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x50c: PushEmpty()
0x50d: Call2 0x84f

0x50e: Pop(0)
0x50f: Push((int) 22020)
0x510: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x511: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x512: PushEmpty(string)
0x513: Stack[-1] = "Neutral"
0x514: Call2 0x4f3

0x515: Pop(1)
0x516: Push((int) 520803)
0x517: @@ SetMessage(Stack[-1])
0x518: Pop(1)
0x519: @@ ClearReplies()
0x51a: Pop(0)
0x51b: Push((int) 520804)
0x51c: Push((int) 29221)
0x51d: Push((int) 22021)
0x51e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51f: Pop(3)
0x520: Push((int) 527876)
0x521: Push((int) 29224)
0x522: Push((int) 29223)
0x523: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x524: Pop(3)
0x525: Return(); Pop(0)

0x526: Push((int) 29224)
0x527: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x528: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x529: PushEmpty(string)
0x52a: Stack[-1] = "Neutral"
0x52b: Call2 0x4f3

0x52c: Pop(1)
0x52d: Push((int) 527877)
0x52e: @@ SetMessage(Stack[-1])
0x52f: Pop(1)
0x530: @@ ClearReplies()
0x531: Pop(0)
0x532: Push((int) 527878)
0x533: Push((int) -1)
0x534: Push((int) 29225)
0x535: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x536: Pop(3)
0x537: Return(); Pop(0)

0x538: Push((int) 29221)
0x539: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53a: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x53b: PushEmpty(string)
0x53c: Stack[-1] = "Neutral"
0x53d: Call2 0x4f3

0x53e: Pop(1)
0x53f: Push((int) 527874)
0x540: @@ SetMessage(Stack[-1])
0x541: Pop(1)
0x542: @@ ClearReplies()
0x543: Pop(0)
0x544: Push((int) 527875)
0x545: Push((int) -1)
0x546: Push((int) 29222)
0x547: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x548: Pop(3)
0x549: Return(); Pop(0)

0x54a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x54b: PushEmpty(bool)
0x54c: Call2 0x8b1

0x54d: Pop(0)
0x54e: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x54f: @ lshStopAnimation()
0x550: Pop(0)
0x551: GOTO 0x554

0x552: @ StopAnimation()
0x553: Pop(0)
0x554: Return(); Pop(0)

0x555: GOTO 0x50a

0x556: Return(); Pop(0)

0x557: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x558: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x559: PushEmpty(bool, object, float)
0x55a: Stack[-2] = Stack[-12]
0x55b: Stack[-1] = (float) 70.0
0x55c: Call2 0x742

0x55d: Pop(2)
0x55e: Pop(1); Push((bool) Stack[-1] == 0)
0x55f: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x560: Stack[-10] = (int) -2
0x561: Return(); Pop(8)

0x562: @ CreateDialog(Stack[-4])
0x563: Pop(0)
0x564: PushEmpty(int)
0x565: Call2 0x8ab

0x566: Pop(0)
0x567: @@ SetNPCName(Stack[-1])
0x568: Pop(1)
0x569: PushEmpty(int)
0x56a: Call2 0x8a9

0x56b: Pop(0)
0x56c: @@ SetNPCDescription(Stack[-1])
0x56d: Pop(1)
0x56e: PushEmpty(string)
0x56f: Call2 0x8ad

0x570: Pop(0)
0x571: @@ SetPhoto(Stack[-1])
0x572: Pop(1)
0x573: PushEmpty(string)
0x574: Call2 0x8af

0x575: Pop(0)
0x576: @@ SetPhoto2(Stack[-1])
0x577: Pop(1)
0x578: PushEmpty(int)
0x579: Call2 0x97d

0x57a: Pop(0)
0x57b: @@ SetPlayerName(Stack[-1])
0x57c: Pop(1)
0x57d: Stack[-2] = (int) -1
0x57e: @ IsOverrideActive(Stack[-3])
0x57f: Pop(0)
0x580: Push(Stack[-3])
0x581: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x582: Stack[-10] = (int) -2
0x583: Return(); Pop(8)

0x584: @ DoDialog(Stack[-4])
0x585: Pop(0)
0x586: PushEmpty(bool, object)
0x587: PushEmpty(object)
0x588: Call2 0x856

0x589: Stack[-2] = Stack[-1]
0x58a: Pop(1)
0x58b: Call2 0x797

0x58c: Pop(2)
0x58d: PushEmpty(object, object)
0x58e: Stack[-2] = Stack[-11]
0x58f: Stack[-1] = Stack[-6]
0x590: Push(-2, 4); TaskCall(9)
0x591: Call2 0x5a8

0x592: Pop(-2, 4); TaskReturn
0x593: Pop(2)
0x594: @@ IsDialogEnd(Stack[-1])
0x595: Pop(0)
0x596: Pop(0); Push((bool) Stack[-1] == 0)
0x597: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x598: @ sync()
0x599: Pop(0)
0x59a: @@ IsDialogEnd(Stack[-1])
0x59b: Pop(0)
0x59c: GOTO 0x596

0x59d: PushEmpty(object)
0x59e: Stack[-1] = Stack[-10]
0x59f: Call2 0x786

0x5a0: Pop(1)
0x5a1: @ StopDialog(Stack[-4])
0x5a2: Pop(0)
0x5a3: @@ GetReturnValue(Stack[-2])
0x5a4: Pop(0)
0x5a5: Stack[-10] = Stack[-2]
0x5a6: Return(); Pop(8)

0x5a7: Stack[-4] = 0
0x5a8: PushEmpty()
0x5a9: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5aa: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5ab: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5ac: Push((int) 1)
0x5ad: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5ae: PushEmpty(string)
0x5af: Stack[-1] = "Neutral"
0x5b0: Call2 0x5e2

0x5b1: Pop(1)
0x5b2: Push((int) 540554)
0x5b3: @@ SetMessage(Stack[-1])
0x5b4: Pop(1)
0x5b5: @@ ClearReplies()
0x5b6: Pop(0)
0x5b7: Push((int) 540555)
0x5b8: Push((int) -1)
0x5b9: Push((int) 42564)
0x5ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bb: Pop(3)
0x5bc: Push((int) 540794)
0x5bd: Push((int) -1)
0x5be: Push((int) 42843)
0x5bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c0: Pop(3)
0x5c1: GOTO 0x5c4

0x5c2: Return(); Pop(0)

0x5c3: GOTO 0x5ac

0x5c4: PushEmpty(bool)
0x5c5: Call2 0x8b1

0x5c6: Pop(0)
0x5c7: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5c8: @ lshWaitForAnimEnd()
0x5c9: Pop(0)
0x5ca: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5cb: IF (Stack[-1] == 0) GOTO 0x5cd; Pop(1)

0x5cc: GOTO 0x5d2

0x5cd: PushEmpty(string)
0x5ce: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5cf: Call2 0x821

0x5d0: Pop(1)
0x5d1: GOTO 0x5c8

0x5d2: GOTO 0x5e1

0x5d3: Push("all")
0x5d4: Push("idle")
0x5d5: @ PlayAnimation(Stack[-2], Stack[-1])
0x5d6: Pop(2)
0x5d7: @ WaitForAnimEnd()
0x5d8: Pop(0)
0x5d9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5da: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5db: GOTO 0x5e1

0x5dc: Push("all")
0x5dd: Push("idle")
0x5de: @ PlayAnimation(Stack[-2], Stack[-1])
0x5df: Pop(2)
0x5e0: GOTO 0x5d7

0x5e1: Return(); Pop(0)

0x5e2: PushEmpty()
0x5e3: PushEmpty(bool)
0x5e4: Call2 0x8b1

0x5e5: Pop(0)
0x5e6: Pop(1); Push((bool) Stack[-1] == 0)
0x5e7: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e8: Return(); Pop(0)

0x5e9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5ea: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5eb: Return(); Pop(0)

0x5ec: PushEmpty(string, bool)
0x5ed: Stack[-2] = Stack[-3]
0x5ee: Push("")
0x5ef: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5f0: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5f1: Stack[-1] = (bool) 0
0x5f2: GOTO 0x5f4

0x5f3: Stack[-1] = (bool) 1
0x5f4: Call2 0x831

0x5f5: Pop(2)
0x5f6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5f7: Return(); Pop(0)

0x5f8: PushEmpty()
0x5f9: Push((int) 1)
0x5fa: IF (Stack[-1] == 0) GOTO 0x621; Pop(1)

0x5fb: PushEmpty()
0x5fc: Call2 0x84f

0x5fd: Pop(0)
0x5fe: Push((int) 42563)
0x5ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x600: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x601: PushEmpty(string)
0x602: Stack[-1] = "Neutral"
0x603: Call2 0x5e2

0x604: Pop(1)
0x605: Push((int) 540554)
0x606: @@ SetMessage(Stack[-1])
0x607: Pop(1)
0x608: @@ ClearReplies()
0x609: Pop(0)
0x60a: Push((int) 540555)
0x60b: Push((int) -1)
0x60c: Push((int) 42564)
0x60d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60e: Pop(3)
0x60f: Push((int) 540794)
0x610: Push((int) -1)
0x611: Push((int) 42843)
0x612: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x613: Pop(3)
0x614: Return(); Pop(0)

0x615: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x616: PushEmpty(bool)
0x617: Call2 0x8b1

0x618: Pop(0)
0x619: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x61a: @ lshStopAnimation()
0x61b: Pop(0)
0x61c: GOTO 0x61f

0x61d: @ StopAnimation()
0x61e: Pop(0)
0x61f: Return(); Pop(0)

0x620: GOTO 0x5f9

0x621: Return(); Pop(0)

0x622: PushEmpty()
0x623: Call2 0x626

0x624: Pop(0)
0x625: Return(); Pop(0)

0x626: PushEmpty(bool)
0x627: Call2 0x73d

0x628: Pop(0)
0x629: Pop(1); Push((bool) Stack[-1] == 0)
0x62a: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x62b: @ Hold()
0x62c: Pop(0)
0x62d: @ GetDirection(Stack[-0])
0x62e: Pop(0)
0x62f: PushEmpty()
0x630: Call2 0x6d6

0x631: Pop(0)
0x632: GOTO 0x62f

0x633: Return(); Pop(0)

0x634: PushEmpty(object, object)
0x635: Push("player")
0x636: @ FindActor(Stack[-2], Stack[-1])
0x637: Pop(1)
0x638: Pop(0); Push((bool) Stack[-1] == 0)
0x639: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x63a: Stack[-3] = (bool) 0
0x63b: Return(); Pop(2)

0x63c: PushEmpty(bool, object)
0x63d: Stack[-1] = Stack[-3]
0x63e: Call2 0x734

0x63f: Stack[-5] = Stack[-2]
0x640: Pop(2)
0x641: Return(); Pop(2)

0x642: Stack[-1] = 0
0x643: Push(CvectorIndex(Stack[-0], 0))
0x644: Push(CvectorIndex(Stack[-0], 2))
0x645: @ RotateAsync(Stack[-2], Stack[-1])
0x646: Pop(2)
0x647: Return(); Pop(0)

0x648: PushEmpty(object, bool, object, bool)
0x649: Push("player")
0x64a: @ FindActor(Stack[-3], Stack[-1])
0x64b: Pop(1)
0x64c: Pop(0); Push((bool) Stack[-2] == 0)
0x64d: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64e: Stack[-5] = (bool) 0
0x64f: Return(); Pop(4)

0x650: PushEmpty(float, object)
0x651: Stack[-1] = Stack[-4]
0x652: Call2 0x722

0x653: Pop(1)
0x654: Push((float)90000.0)
0x655: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x656: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x657: Stack[-5] = (bool) 0
0x658: Return(); Pop(4)

0x659: @ CanSee(Stack[-1], Stack[-2])
0x65a: Pop(0)
0x65b: Stack[-5] = Stack[-1]
0x65c: Return(); Pop(4)

0x65d: Stack[-2] = 0
0x65e: PushEmpty(float, float)
0x65f: Push((int) 8)
0x660: Push((int) 16)
0x661: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x662: Pop(2)
0x663: Push((int) 10)
0x664: @ SetTimer(Stack[-1], Stack[-2])
0x665: Pop(1)
0x666: Return(); Pop(2)

0x667: Push((int) 10)
0x668: @ KillTimer(Stack[-1])
0x669: Pop(1)
0x66a: Return(); Pop(0)

0x66b: PushEmpty()
0x66c: Push((int) 10)
0x66d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x66e: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x66f: PushEmpty()
0x670: Call2 0x667

0x671: Pop(0)
0x672: PushEmpty(bool)
0x673: Stack[-1] = (bool) 0
0x674: PushEmpty(bool)
0x675: Call2 0x73d

0x676: Pop(0)
0x677: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x678: PushEmpty(bool)
0x679: Call2 0x648

0x67a: Pop(0)
0x67b: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x67c: Stack[-1] = (bool) 1
0x67d: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x67e: PushEmpty(bool)
0x67f: Call2 0x634

0x680: Pop(0)
0x681: IF (Stack[-1] == 0) GOTO 0x689; Pop(1)

0x682: PushEmpty(bool, object)
0x683: PushEmpty(object)
0x684: Call2 0x856

0x685: Stack[-2] = Stack[-1]
0x686: Pop(1)
0x687: Call2 0x7d1

0x688: Pop(2)
0x689: GOTO 0x690

0x68a: PushEmpty()
0x68b: Call2 0x643

0x68c: Pop(0)
0x68d: PushEmpty()
0x68e: Call2 0x65e

0x68f: Pop(0)
0x690: Return(); Pop(0)

0x691: PushEmpty()
0x692: Call2 0x71d

0x693: Pop(0)
0x694: PushEmpty()
0x695: Call2 0x667

0x696: Pop(0)
0x697: @ lshStopSpeech()
0x698: Pop(0)
0x699: @ lshStopAnimation()
0x69a: Pop(0)
0x69b: @ StopAsync()
0x69c: Pop(0)
0x69d: @ Hold()
0x69e: Pop(0)
0x69f: Return(); Pop(0)

0x6a0: @ StopGroup0()
0x6a1: Pop(0)
0x6a2: PushEmpty()
0x6a3: Call2 0x667

0x6a4: Pop(0)
0x6a5: PushEmpty(string)
0x6a6: Stack[-1] = "Neutral"
0x6a7: Call2 0x821

0x6a8: Pop(1)
0x6a9: PushEmpty()
0x6aa: Call2 0x65e

0x6ab: Pop(0)
0x6ac: Return(); Pop(0)

0x6ad: PushEmpty()
0x6ae: Push(Stack[-1])
0x6af: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x6b0: PushEmpty()
0x6b1: Call2 0x65e

0x6b2: Pop(0)
0x6b3: GOTO 0x6b8

0x6b4: PushEmpty(string)
0x6b5: Stack[-1] = "Neutral"
0x6b6: Call2 0x821

0x6b7: Pop(1)
0x6b8: Return(); Pop(0)

0x6b9: PushEmpty(bool, bool)
0x6ba: @ IsOverrideActive(Stack[-1])
0x6bb: Pop(0)
0x6bc: Pop(0); Push((bool) Stack[-1] == 0)
0x6bd: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6be: EventDisable(0)
0x6bf: PushEmpty()
0x6c0: Call2 0x71d

0x6c1: Pop(0)
0x6c2: PushEmpty(bool, object)
0x6c3: Stack[-1] = Stack[-5]
0x6c4: Call2 0x734

0x6c5: Pop(2)
0x6c6: EventEnable(0)
0x6c7: PushEmpty(object)
0x6c8: Stack[-1] = Stack[-4]
0x6c9: Call2 0x99f

0x6ca: Pop(1)
0x6cb: PushEmpty(string)
0x6cc: Stack[-1] = "Neutral"
0x6cd: Call2 0x821

0x6ce: Pop(1)
0x6cf: PushEmpty()
0x6d0: Call2 0x667

0x6d1: Pop(0)
0x6d2: PushEmpty()
0x6d3: Call2 0x65e

0x6d4: Pop(0)
0x6d5: Return(); Pop(2)

0x6d6: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x6d7: @ WaitForAnimEnd()
0x6d8: Pop(0)
0x6d9: PushEmpty(bool)
0x6da: Call2 0x73d

0x6db: Pop(0)
0x6dc: Pop(1); Push((bool) Stack[-1] == 0)
0x6dd: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6de: Return(); Pop(12)

0x6df: PushEmpty(int)
0x6e0: Call2 0x898

0x6e1: Stack[-7] = Stack[-1]
0x6e2: Pop(1)
0x6e3: Stack[-5] = (int) 0
0x6e4: PushEmpty(bool)
0x6e5: Stack[-1] = (bool) 0
0x6e6: Push((int) 5)
0x6e7: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6e8: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6e9: PushEmpty(bool)
0x6ea: Call2 0x73d

0x6eb: Pop(0)
0x6ec: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6ed: Stack[-1] = (bool) 1
0x6ee: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x6ef: Pop(0); Push((bool) Stack[-6] == 0)
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f1: Push((int) 3)
0x6f2: @ Sleep(Stack[-1], Stack[-5])
0x6f3: Pop(1)
0x6f4: Pop(0); Push((bool) Stack[-4] == 0)
0x6f5: IF (Stack[-1] == 0) GOTO 0x6f7; Pop(1)

0x6f6: GOTO 0x718

0x6f7: GOTO 0x70d

0x6f8: @ irand(Stack[-3], Stack[-6])
0x6f9: Pop(0)
0x6fa: Push((int) 5)
0x6fb: @ irand(Stack[-3], Stack[-1])
0x6fc: Pop(1)
0x6fd: Push((int) 0)
0x6fe: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x6ff: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x700: Stack[-3] = (int) 0
0x701: Push("all")
0x702: PushEmpty(string, int)
0x703: Stack[-1] = Stack[-6]
0x704: Call2 0x891

0x705: Pop(1)
0x706: @ PlayAnimation(Stack[-2], Stack[-1])
0x707: Pop(2)
0x708: @ WaitForAnimEnd(Stack[-1])
0x709: Pop(0)
0x70a: Pop(0); Push((bool) Stack[-1] == 0)
0x70b: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x70c: GOTO 0x718

0x70d: PushEmpty(bool)
0x70e: Call2 0x71b

0x70f: Pop(0)
0x710: Pop(1); Push((bool) Stack[-1] == 0)
0x711: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x712: GOTO 0x718

0x713: @ ResetAAS()
0x714: Pop(0)
0x715: Push((int) 1)
0x716: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x717: GOTO 0x6e4

0x718: @ ResetAAS()
0x719: Pop(0)
0x71a: Return(); Pop(12)

0x71b: Stack[-1] = (bool) 1
0x71c: Return(); Pop(0)

0x71d: @ StopAnimation()
0x71e: Pop(0)
0x71f: @ StopGroup0()
0x720: Pop(0)
0x721: Return(); Pop(0)

0x722: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x723: @ GetPosition(Stack[-3])
0x724: Pop(0)
0x725: @@ GetPosition(Stack[-2])
0x726: Pop(0)
0x727: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x728: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x729: Return(); Pop(6)

0x72a: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x72b: @ GetPosition(Stack[-3])
0x72c: Pop(0)
0x72d: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x72e: Push(CvectorIndex(Stack[-2], 0))
0x72f: Push(CvectorIndex(Stack[-3], 2))
0x730: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x731: Pop(2)
0x732: Stack[-8] = Stack[-1]
0x733: Return(); Pop(6)

0x734: PushEmpty(cvector, cvector)
0x735: @@ GetPosition(Stack[-1])
0x736: Pop(0)
0x737: PushEmpty(bool, cvector)
0x738: Stack[-1] = Stack[-3]
0x739: Call2 0x72a

0x73a: Stack[-6] = Stack[-2]
0x73b: Pop(2)
0x73c: Return(); Pop(2)

0x73d: PushEmpty(bool, bool)
0x73e: @ IsLoaded(Stack[-1])
0x73f: Pop(0)
0x740: Stack[-3] = Stack[-1]
0x741: Return(); Pop(2)

0x742: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x743: @@ GetPosition(Stack[-8])
0x744: Pop(0)
0x745: @@ GetEyesHeight(Stack[-9])
0x746: Pop(0)
0x747: Push(CvectorIndex(Stack[-8], 1))
0x748: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x749: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x74a: @ GetPosition(Stack[-7])
0x74b: Pop(0)
0x74c: @ GetEyesHeight(Stack[-9])
0x74d: Pop(0)
0x74e: Push(CvectorIndex(Stack[-7], 1))
0x74f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x750: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x751: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x752: Push(CvectorIndex(Stack[-6], 1))
0x753: Stack[-1] = (int) 0
0x754: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x755: Pop(0); Push(Stack[-6] | Stack[-6]);
0x756: Pop(1); Push(Sqrt(Stack[-1]))
0x757: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x758: Stack[-5] = -Stack[-6]; Pop(0);
0x759: Pop(0); Push(Stack[-6] * Stack[-19]);
0x75a: PushEmpty(cvector, cvector)
0x75b: Push(CVector(0.0, 1.0, 0.0))
0x75c: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x75d: Call2 0x85c

0x75e: Pop(1)
0x75f: Push((int) 25)
0x760: Pop(2); Push(Stack[-2] * Stack[-1]);
0x761: Pop(2); Push(Stack[-2] + Stack[-1]);
0x762: Push(CVector(0.0, 10.0, 0.0))
0x763: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x764: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x765: @ IsOverrideActive(Stack[-2])
0x766: Pop(0)
0x767: Push(Stack[-2])
0x768: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x769: Stack[-21] = (bool) 0
0x76a: Return(); Pop(18)

0x76b: @ StopWorld()
0x76c: Pop(0)
0x76d: @ CameraTransit(Stack[-3], Stack[-5])
0x76e: Pop(0)
0x76f: Push(CvectorIndex(Stack[-4], 0))
0x770: Push(CvectorIndex(Stack[-5], 2))
0x771: @ Rotate(Stack[-2], Stack[-1])
0x772: Pop(2)
0x773: PushEmpty(bool)
0x774: Call2 0x8b1

0x775: Pop(0)
0x776: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x777: GOTO 0x780

0x778: Push("head")
0x779: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x77a: Pop(1)
0x77b: Push(Stack[-1])
0x77c: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x77d: Push("head")
0x77e: @ LookAsyncCamera(Stack[-1])
0x77f: Pop(1)
0x780: @ CameraWaitForPlayFinish()
0x781: Pop(0)
0x782: @ ResumeWorld()
0x783: Pop(0)
0x784: Stack[-21] = (bool) 1
0x785: Return(); Pop(18)

0x786: PushEmpty(bool, bool)
0x787: @ CameraSwitchToNormal()
0x788: Pop(0)
0x789: PushEmpty(bool)
0x78a: Call2 0x8b1

0x78b: Pop(0)
0x78c: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x78d: GOTO 0x796

0x78e: Push("head")
0x78f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x790: Pop(1)
0x791: Push(Stack[-1])
0x792: IF (Stack[-1] == 0) GOTO 0x796; Pop(1)

0x793: Push("head")
0x794: @ UnlookAsync(Stack[-1])
0x795: Pop(1)
0x796: Return(); Pop(2)

0x797: PushEmpty(int, int, int, int)
0x798: Push("voice_common")
0x799: @ GetVariable(Stack[-1], Stack[-3])
0x79a: Pop(1)
0x79b: Push(Stack[-2])
0x79c: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x79d: PushEmpty(bool, object)
0x79e: Stack[-1] = Stack[-7]
0x79f: Call2 0x7d1

0x7a0: Pop(1)
0x7a1: Pop(1); Push((bool) Stack[-1] == 0)
0x7a2: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7a3: PushEmpty(bool, object)
0x7a4: Stack[-1] = Stack[-7]
0x7a5: Call2 0x7f6

0x7a6: Pop(1)
0x7a7: Pop(1); Push((bool) Stack[-1] == 0)
0x7a8: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7a9: Stack[-6] = (bool) 0
0x7aa: Return(); Pop(4)

0x7ab: Push((int) 2)
0x7ac: @ irand(Stack[-2], Stack[-1])
0x7ad: Pop(1)
0x7ae: Push(Stack[-1])
0x7af: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b0: Push("voice_common")
0x7b1: Push((int) 1)
0x7b2: Pop(1); Push(Stack[-4] + Stack[-1]);
0x7b3: Push((int) 3)
0x7b4: Pop(2); Push(Stack[-2] % Stack[-1]);
0x7b5: @ SetVariable(Stack[-2], Stack[-1])
0x7b6: Pop(2)
0x7b7: GOTO 0x7bc

0x7b8: Push("voice_common")
0x7b9: Push((int) 0)
0x7ba: @ SetVariable(Stack[-2], Stack[-1])
0x7bb: Pop(2)
0x7bc: GOTO 0x7cf

0x7bd: PushEmpty(bool, object)
0x7be: Stack[-1] = Stack[-7]
0x7bf: Call2 0x7f6

0x7c0: Pop(1)
0x7c1: Pop(1); Push((bool) Stack[-1] == 0)
0x7c2: IF (Stack[-1] == 0) GOTO 0x7cb; Pop(1)

0x7c3: PushEmpty(bool, object)
0x7c4: Stack[-1] = Stack[-7]
0x7c5: Call2 0x7d1

0x7c6: Pop(1)
0x7c7: Pop(1); Push((bool) Stack[-1] == 0)
0x7c8: IF (Stack[-1] == 0) GOTO 0x7cb; Pop(1)

0x7c9: Stack[-6] = (bool) 0
0x7ca: Return(); Pop(4)

0x7cb: Push("voice_common")
0x7cc: Push((int) 1)
0x7cd: @ SetVariable(Stack[-2], Stack[-1])
0x7ce: Pop(2)
0x7cf: Stack[-6] = (bool) 1
0x7d0: Return(); Pop(4)

0x7d1: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x7d2: Stack[-5] = "c"
0x7d3: Stack[-4] = (int) 0
0x7d4: Push((int) 1)
0x7d5: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7d6: Push((int) 1)
0x7d7: Pop(1); Push(Stack[-5] + Stack[-1]);
0x7d8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7d9: @@ HasProperty(Stack[-1], Stack[-4])
0x7da: Pop(1)
0x7db: Pop(0); Push((bool) Stack[-3] == 0)
0x7dc: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7dd: GOTO 0x7e1

0x7de: Push((int) 1)
0x7df: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x7e0: GOTO 0x7d4

0x7e1: Pop(0); Push((bool) Stack[-4] == 0)
0x7e2: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7e3: Stack[-12] = (bool) 0
0x7e4: Return(); Pop(10)

0x7e5: Stack[-2] = (int) 0
0x7e6: Push((int) 1)
0x7e7: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x7e8: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7e9: @ irand(Stack[-2], Stack[-4])
0x7ea: Pop(0)
0x7eb: Push((int) 1)
0x7ec: Pop(1); Push(Stack[-3] + Stack[-1]);
0x7ed: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7ee: @@ GetProperty(Stack[-1], Stack[-2])
0x7ef: Pop(1)
0x7f0: PushEmpty(bool, string)
0x7f1: Stack[-1] = Stack[-3]
0x7f2: Call2 0x840

0x7f3: Stack[-14] = Stack[-2]
0x7f4: Pop(2)
0x7f5: Return(); Pop(10)

0x7f6: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x7f7: Push("d")
0x7f8: PushEmpty(int)
0x7f9: Call2 0x882

0x7fa: Pop(0)
0x7fb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7fc: Push("m")
0x7fd: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x7fe: Stack[-4] = (int) 0
0x7ff: Push((int) 1)
0x800: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x801: Push((int) 1)
0x802: Pop(1); Push(Stack[-5] + Stack[-1]);
0x803: Pop(1); Push(Stack[-6] + Stack[-1]);
0x804: @@ HasProperty(Stack[-1], Stack[-4])
0x805: Pop(1)
0x806: Pop(0); Push((bool) Stack[-3] == 0)
0x807: IF (Stack[-1] == 0) GOTO 0x809; Pop(1)

0x808: GOTO 0x80c

0x809: Push((int) 1)
0x80a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x80b: GOTO 0x7ff

0x80c: Pop(0); Push((bool) Stack[-4] == 0)
0x80d: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x80e: Stack[-12] = (bool) 0
0x80f: Return(); Pop(10)

0x810: Stack[-2] = (int) 0
0x811: Push((int) 1)
0x812: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x813: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x814: @ irand(Stack[-2], Stack[-4])
0x815: Pop(0)
0x816: Push((int) 1)
0x817: Pop(1); Push(Stack[-3] + Stack[-1]);
0x818: Pop(1); Push(Stack[-6] + Stack[-1]);
0x819: @@ GetProperty(Stack[-1], Stack[-2])
0x81a: Pop(1)
0x81b: PushEmpty(bool, string)
0x81c: Stack[-1] = Stack[-3]
0x81d: Call2 0x840

0x81e: Stack[-14] = Stack[-2]
0x81f: Pop(2)
0x820: Return(); Pop(10)

0x821: PushEmpty(bool, float, float, bool, float, float)
0x822: @ lshHasAnimation(Stack[-3], Stack[-7])
0x823: Pop(0)
0x824: Push(Stack[-3])
0x825: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x826: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x827: Pop(0)
0x828: Push((bool) 0)
0x829: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x82a: Pop(1)
0x82b: GOTO 0x830

0x82c: Push("Can't find lsh animation : ")
0x82d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x82e: @ Trace(Stack[-1])
0x82f: Pop(1)
0x830: Return(); Pop(6)

0x831: PushEmpty(bool, float, float, bool, float, float)
0x832: @ lshHasAnimation(Stack[-3], Stack[-8])
0x833: Pop(0)
0x834: Push(Stack[-3])
0x835: IF (Stack[-1] == 0) GOTO 0x83b; Pop(1)

0x836: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x837: Pop(0)
0x838: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x839: Pop(0)
0x83a: GOTO 0x83f

0x83b: Push("Can't find lsh animation : ")
0x83c: Pop(1); Push(Stack[-1] + Stack[-9]);
0x83d: @ Trace(Stack[-1])
0x83e: Pop(1)
0x83f: Return(); Pop(6)

0x840: PushEmpty(bool, bool)
0x841: PushEmpty(bool)
0x842: Call2 0x8b1

0x843: Pop(0)
0x844: IF (Stack[-1] == 0) GOTO 0x84d; Pop(1)

0x845: @ lshHasSpeech(Stack[-1], Stack[-3])
0x846: Pop(0)
0x847: Push(Stack[-1])
0x848: IF (Stack[-1] == 0) GOTO 0x84d; Pop(1)

0x849: @ lshPlaySpeech(Stack[-3])
0x84a: Pop(0)
0x84b: Stack[-4] = (bool) 1
0x84c: Return(); Pop(2)

0x84d: Stack[-4] = (bool) 0
0x84e: Return(); Pop(2)

0x84f: PushEmpty(bool)
0x850: Call2 0x8b1

0x851: Pop(0)
0x852: IF (Stack[-1] == 0) GOTO 0x855; Pop(1)

0x853: @ lshStopSpeech()
0x854: Pop(0)
0x855: Return(); Pop(0)

0x856: PushEmpty(object, object)
0x857: @ self(Stack[-1])
0x858: Pop(0)
0x859: Stack[-3] = Stack[-1]
0x85a: Return(); Pop(2)

0x85b: Stack[-1] = 0
0x85c: PushEmpty(float, float)
0x85d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x85e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x85f: Push((float)0.0)
0x860: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x861: IF (Stack[-1] == 0) GOTO 0x864; Pop(1)

0x862: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x863: Return(); Pop(2)

0x864: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x865: Return(); Pop(2)

0x866: PushEmpty(int, int)
0x867: @ GetVariable(Stack[-3], Stack[-1])
0x868: Pop(0)
0x869: Stack[-4] = Stack[-1]
0x86a: Return(); Pop(2)

0x86b: PushEmpty(object, object, object, object)
0x86c: @ GetMainOutdoorScene(Stack[-2])
0x86d: Pop(0)
0x86e: Push(".bin")
0x86f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x870: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x871: Pop(1)
0x872: Stack[-6] = Stack[-1]
0x873: Return(); Pop(4)

0x874: Stack[-1] = 0
0x875: Stack[-2] = 0
0x876: PushEmpty(object, object)
0x877: @ FindActor(Stack[-1], Stack[-4])
0x878: Pop(0)
0x879: Pop(0); Push((bool) Stack[-1] == 0)
0x87a: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x87b: Stack[-5] = (bool) 0
0x87c: Return(); Pop(2)

0x87d: @ Trigger(Stack[-1], Stack[-3])
0x87e: Pop(0)
0x87f: Stack[-5] = (bool) 1
0x880: Return(); Pop(2)

0x881: Stack[-1] = 0
0x882: PushEmpty(float, float)
0x883: @ GetGameTime(Stack[-1])
0x884: Pop(0)
0x885: Push((int) 1)
0x886: PushEmpty(int)
0x887: Push((int) 24)
0x888: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x889: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x88a: Return(); Pop(2)

0x88b: PushEmpty()
0x88c: PushEmpty(int)
0x88d: Call2 0x882

0x88e: Pop(0)
0x88f: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x890: Return(); Pop(0)

0x891: PushEmpty(string, string)
0x892: Stack[-1] = "idle"
0x893: Push(Stack[-3])
0x894: IF (Stack[-1] == 0) GOTO 0x896; Pop(1)

0x895: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x896: Stack[-4] = Stack[-1]
0x897: Return(); Pop(2)

0x898: PushEmpty(int, bool, int, bool)
0x899: Stack[-2] = (int) 0
0x89a: Push("all")
0x89b: PushEmpty(string, int)
0x89c: Stack[-1] = Stack[-5]
0x89d: Call2 0x891

0x89e: Pop(1)
0x89f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8a0: Pop(2)
0x8a1: Pop(0); Push((bool) Stack[-1] == 0)
0x8a2: IF (Stack[-1] == 0) GOTO 0x8a4; Pop(1)

0x8a3: GOTO 0x8a7

0x8a4: Push((int) 1)
0x8a5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x8a6: GOTO 0x89a

0x8a7: Stack[-5] = Stack[-2]
0x8a8: Return(); Pop(4)

0x8a9: Stack[-1] = (int) 515552
0x8aa: Return(); Pop(0)

0x8ab: Stack[-1] = (int) 502877
0x8ac: Return(); Pop(0)

0x8ad: Stack[-1] = "ui/NPC_Spi4ka.png"
0x8ae: Return(); Pop(0)

0x8af: Stack[-1] = "ui/NPC_Spi4ka_b.png"
0x8b0: Return(); Pop(0)

0x8b1: Stack[-1] = (bool) 1
0x8b2: Return(); Pop(0)

0x8b3: PushEmpty()
0x8b4: PushEmpty()
0x8b5: Call2 0x93a

0x8b6: Pop(0)
0x8b7: PushEmpty()
0x8b8: Call2 0x947

0x8b9: Pop(0)
0x8ba: PushEmpty(object, string)
0x8bb: Stack[-1] = "quest_b4_02"
0x8bc: Call2 0x86b

0x8bd: Pop(2)
0x8be: PushEmpty(bool, string, string)
0x8bf: Stack[-2] = "quest_b4_02"
0x8c0: Stack[-1] = "place_boy"
0x8c1: Call2 0x876

0x8c2: Pop(3)
0x8c3: Return(); Pop(0)

0x8c4: PushEmpty()
0x8c5: Push("oob4Spi4ka1")
0x8c6: Push((int) 1)
0x8c7: @ SetVariable(Stack[-2], Stack[-1])
0x8c8: Pop(2)
0x8c9: Return(); Pop(0)

0x8ca: PushEmpty()
0x8cb: Push("oob4Spi4ka2")
0x8cc: Push((int) 1)
0x8cd: @ SetVariable(Stack[-2], Stack[-1])
0x8ce: Pop(2)
0x8cf: Return(); Pop(0)

0x8d0: PushEmpty()
0x8d1: Push("b10q04Spi4kaTalk")
0x8d2: Push((int) 9)
0x8d3: @ SetVariable(Stack[-2], Stack[-1])
0x8d4: Pop(2)
0x8d5: PushEmpty()
0x8d6: Call2 0x92d

0x8d7: Pop(0)
0x8d8: Return(); Pop(0)

0x8d9: PushEmpty()
0x8da: Push("b4Spi4kaVisit")
0x8db: Push((int) 1)
0x8dc: @ SetVariable(Stack[-2], Stack[-1])
0x8dd: Pop(2)
0x8de: Return(); Pop(0)

0x8df: PushEmpty()
0x8e0: Push("oob12Spi4ka1")
0x8e1: Push((int) 1)
0x8e2: @ SetVariable(Stack[-2], Stack[-1])
0x8e3: Pop(2)
0x8e4: Return(); Pop(0)

0x8e5: PushEmpty()
0x8e6: PushEmpty(int, string)
0x8e7: Stack[-1] = "b10q04Spi4kaTalk"
0x8e8: Call2 0x866

0x8e9: Pop(1)
0x8ea: Push((int) 1)
0x8eb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8ec: IF (Stack[-1] == 0) GOTO 0x8ef; Pop(1)

0x8ed: Stack[-2] = (bool) 1
0x8ee: Return(); Pop(0)

0x8ef: Stack[-2] = (bool) 0
0x8f0: Return(); Pop(0)

0x8f1: PushEmpty()
0x8f2: PushEmpty(int, string)
0x8f3: Stack[-1] = "oob12Spi4ka1"
0x8f4: Call2 0x866

0x8f5: Pop(1)
0x8f6: Push((int) 0)
0x8f7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8f8: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8f9: Stack[-2] = (bool) 1
0x8fa: Return(); Pop(0)

0x8fb: Stack[-2] = (bool) 0
0x8fc: Return(); Pop(0)

0x8fd: PushEmpty()
0x8fe: PushEmpty(int, string)
0x8ff: Stack[-1] = "oob4Spi4ka1"
0x900: Call2 0x866

0x901: Pop(1)
0x902: Push((int) 0)
0x903: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x904: IF (Stack[-1] == 0) GOTO 0x907; Pop(1)

0x905: Stack[-2] = (bool) 1
0x906: Return(); Pop(0)

0x907: Stack[-2] = (bool) 0
0x908: Return(); Pop(0)

0x909: PushEmpty()
0x90a: PushEmpty(int, string)
0x90b: Stack[-1] = "b4q02"
0x90c: Call2 0x866

0x90d: Pop(1)
0x90e: Push((int) 0)
0x90f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x910: IF (Stack[-1] == 0) GOTO 0x913; Pop(1)

0x911: Stack[-2] = (bool) 1
0x912: Return(); Pop(0)

0x913: Stack[-2] = (bool) 0
0x914: Return(); Pop(0)

0x915: PushEmpty()
0x916: PushEmpty(int, string)
0x917: Stack[-1] = "oob4Spi4ka2"
0x918: Call2 0x866

0x919: Pop(1)
0x91a: Push((int) 0)
0x91b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x91c: IF (Stack[-1] == 0) GOTO 0x91f; Pop(1)

0x91d: Stack[-2] = (bool) 1
0x91e: Return(); Pop(0)

0x91f: Stack[-2] = (bool) 0
0x920: Return(); Pop(0)

0x921: PushEmpty()
0x922: PushEmpty(int, string)
0x923: Stack[-1] = "b4q02"
0x924: Call2 0x866

0x925: Pop(1)
0x926: Push((int) 1000)
0x927: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x928: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x929: Stack[-2] = (bool) 1
0x92a: Return(); Pop(0)

0x92b: Stack[-2] = (bool) 0
0x92c: Return(); Pop(0)

0x92d: PushEmpty(object, object)
0x92e: Push((int) 557)
0x92f: Push((int) 2)
0x930: Push((int) 530536)
0x931: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x932: Pop(3)
0x933: PushEmpty(bool, object, int)
0x934: Stack[-2] = Stack[-4]
0x935: Stack[-1] = (int) 548
0x936: Call2 0x961

0x937: Pop(3)
0x938: Return(); Pop(2)

0x939: Stack[-1] = 0
0x93a: PushEmpty(object, object)
0x93b: Push((int) 213)
0x93c: Push((int) 2)
0x93d: Push((int) 518576)
0x93e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x93f: Pop(3)
0x940: PushEmpty(bool, object, int)
0x941: Stack[-2] = Stack[-4]
0x942: Stack[-1] = (int) -1
0x943: Call2 0x961

0x944: Pop(3)
0x945: Return(); Pop(2)

0x946: Stack[-1] = 0
0x947: PushEmpty(object, object)
0x948: Push((int) 214)
0x949: Push((int) 2)
0x94a: Push((int) 518577)
0x94b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x94c: Pop(3)
0x94d: PushEmpty(bool, object, int)
0x94e: Stack[-2] = Stack[-4]
0x94f: Stack[-1] = (int) 213
0x950: Call2 0x961

0x951: Pop(3)
0x952: Return(); Pop(2)

0x953: Stack[-1] = 0
0x954: PushEmpty(object, object)
0x955: @ GetDiaryRoot(Stack[-1])
0x956: Pop(0)
0x957: Pop(0); Push((bool) Stack[-1] == 0)
0x958: IF (Stack[-1] == 0) GOTO 0x95e; Pop(1)

0x959: Push("Can't retrieve diary root")
0x95a: @ Trace(Stack[-1])
0x95b: Pop(1)
0x95c: Stack[-3] = (bool) 0
0x95d: Return(); Pop(2)

0x95e: Stack[-3] = Stack[-1]
0x95f: Return(); Pop(2)

0x960: Stack[-1] = 0
0x961: PushEmpty(object, object, int, object, object, int)
0x962: PushEmpty(object)
0x963: Call2 0x954

0x964: Stack[-4] = Stack[-1]
0x965: Pop(1)
0x966: @@ Find(Stack[-7], Stack[-2])
0x967: Pop(0)
0x968: Pop(0); Push((bool) Stack[-2] == 0)
0x969: IF (Stack[-1] == 0) GOTO 0x970; Pop(1)

0x96a: Push("Can't find diary parent with id: ")
0x96b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x96c: @ Trace(Stack[-1])
0x96d: Pop(1)
0x96e: Stack[-9] = (bool) 0
0x96f: Return(); Pop(6)

0x970: @@ AddChild(Stack[-8])
0x971: Pop(0)
0x972: Push((int) 7)
0x973: @ SendWorldWndMessage(Stack[-1])
0x974: Pop(1)
0x975: @@ GetCategory(Stack[-1])
0x976: Pop(0)
0x977: @ SetDiarySection(Stack[-1])
0x978: Pop(0)
0x979: Stack[-9] = (bool) 0
0x97a: Return(); Pop(6)

0x97b: Stack[-2] = 0
0x97c: Stack[-3] = 0
0x97d: PushEmpty(int, int)
0x97e: Push("branch")
0x97f: @ GetVariable(Stack[-1], Stack[-2])
0x980: Pop(1)
0x981: Push((int) 0)
0x982: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x983: IF (Stack[-1] == 0) GOTO 0x987; Pop(1)

0x984: Stack[-3] = (int) 1
0x985: Return(); Pop(2)

0x986: GOTO 0x98c

0x987: Push((int) 1)
0x988: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x989: IF (Stack[-1] == 0) GOTO 0x98c; Pop(1)

0x98a: Stack[-3] = (int) 2
0x98b: Return(); Pop(2)

0x98c: Stack[-3] = (int) 3
0x98d: Return(); Pop(2)

0x98e: PushEmpty(int, int)
0x98f: Push("mt_spi4ka")
0x990: @ GetVariable(Stack[-1], Stack[-2])
0x991: Pop(1)
0x992: Pop(0); Push((bool) Stack[-1] == 0)
0x993: IF (Stack[-1] == 0) GOTO 0x99e; Pop(1)

0x994: PushEmpty(int, object)
0x995: Stack[-1] = Stack[-5]
0x996: Push(-2, 1); TaskCall(6)
0x997: Call2 0x468

0x998: Pop(-2, 1); TaskReturn
0x999: Pop(2)
0x99a: Push("mt_spi4ka")
0x99b: Push((int) 1)
0x99c: @ SetVariable(Stack[-2], Stack[-1])
0x99d: Pop(2)
0x99e: Return(); Pop(2)

0x99f: PushEmpty()
0x9a0: PushEmpty(object)
0x9a1: Stack[-1] = Stack[-2]
0x9a2: Call2 0x98e

0x9a3: Pop(1)
0x9a4: PushEmpty(bool, int)
0x9a5: Stack[-1] = (int) 4
0x9a6: Call2 0x88b

0x9a7: Pop(1)
0x9a8: IF (Stack[-1] == 0) GOTO 0x9b0; Pop(1)

0x9a9: PushEmpty(int, object)
0x9aa: Stack[-1] = Stack[-3]
0x9ab: Push(-2, 1); TaskCall(4)
0x9ac: Call2 0x25b

0x9ad: Pop(-2, 1); TaskReturn
0x9ae: Pop(2)
0x9af: Return(); Pop(0)

0x9b0: PushEmpty(bool, int)
0x9b1: Stack[-1] = (int) 10
0x9b2: Call2 0x88b

0x9b3: Pop(1)
0x9b4: IF (Stack[-1] == 0) GOTO 0x9bc; Pop(1)

0x9b5: PushEmpty(int, object)
0x9b6: Stack[-1] = Stack[-3]
0x9b7: Push(-2, 1); TaskCall(0)
0x9b8: Call2 0x0

0x9b9: Pop(-2, 1); TaskReturn
0x9ba: Pop(2)
0x9bb: Return(); Pop(0)

0x9bc: PushEmpty(bool, int)
0x9bd: Stack[-1] = (int) 12
0x9be: Call2 0x88b

0x9bf: Pop(1)
0x9c0: IF (Stack[-1] == 0) GOTO 0x9c8; Pop(1)

0x9c1: PushEmpty(int, object)
0x9c2: Stack[-1] = Stack[-3]
0x9c3: Push(-2, 1); TaskCall(2)
0x9c4: Call2 0x118

0x9c5: Pop(-2, 1); TaskReturn
0x9c6: Pop(2)
0x9c7: Return(); Pop(0)

0x9c8: PushEmpty(int, object)
0x9c9: Stack[-1] = Stack[-3]
0x9ca: Push(-2, 1); TaskCall(8)
0x9cb: Call2 0x557

0x9cc: Pop(-2, 1); TaskReturn
0x9cd: Pop(2)
0x9ce: Return(); Pop(0)

