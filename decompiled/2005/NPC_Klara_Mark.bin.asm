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
	Rage
	SetMessage
	ClearReplies
	AddReply
	all
	idle
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
	ui/NPC_Mark.png
	ui/NPC_Mark_b.png
	branch
	mt_mark

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
	GetGameTime (1 args)
	HasAnimation (3 args)

RunOp = 0x2c7
RunTask = 6

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x19f Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x29d Vars = (int, int)
	GTASK_6 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x310 Vars = (int)
		EVENT_6 Op = 0x336 Vars = ()
		EVENT_5 Op = 0x345 Vars = ()
		EVENT_45 Op = 0x352 Vars = (bool)
		EVENT_0 Op = 0x35e Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x3e7

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x534

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x532

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x536

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x538

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x53c

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
0x31: Call2 0x4fb

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x43c

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
0x48: Call2 0x42b

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
0x56: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Rage"
0x59: Call2 0x8b

0x5a: Pop(1)
0x5b: Push((int) 525504)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 525505)
0x61: Push((int) 30769)
0x62: Push((int) 26861)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 541845)
0x66: Push((int) 44064)
0x67: Push((int) 44063)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0x53a

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x4c6

0x79: Pop(1)
0x7a: GOTO 0x71

0x7b: GOTO 0x8a

0x7c: Push("all")
0x7d: Push("idle")
0x7e: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: @ WaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: Push("all")
0x86: Push("idle")
0x87: @ PlayAnimation(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: GOTO 0x80

0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: PushEmpty(bool)
0x8d: Call2 0x53a

0x8e: Pop(0)
0x8f: Pop(1); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Return(); Pop(0)

0x92: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: PushEmpty(string, bool)
0x96: Stack[-2] = Stack[-3]
0x97: Push("")
0x98: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: GOTO 0x9d

0x9c: Stack[-1] = (bool) 1
0x9d: Call2 0x4d6

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x4f4

0xa6: Pop(0)
0xa7: Push((int) 26860)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Rage"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 525504)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 525505)
0xb4: Push((int) 30769)
0xb5: Push((int) 26861)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 541845)
0xb9: Push((int) 44064)
0xba: Push((int) 44063)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 44064)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Rage"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 541846)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 541847)
0xcb: Push((int) 30769)
0xcc: Push((int) 44065)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 541848)
0xd0: Push((int) 30769)
0xd1: Push((int) 44066)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Push((int) 30769)
0xd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Rage"
0xda: Call2 0x8b

0xdb: Pop(1)
0xdc: Push((int) 529315)
0xdd: @@ SetMessage(Stack[-1])
0xde: Pop(1)
0xdf: @@ ClearReplies()
0xe0: Pop(0)
0xe1: Push((int) 529316)
0xe2: Push((int) -1)
0xe3: Push((int) 30770)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Push((int) 529317)
0xe7: Push((int) -1)
0xe8: Push((int) 30771)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xed: PushEmpty(bool)
0xee: Call2 0x53a

0xef: Pop(0)
0xf0: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf1: @ lshStopAnimation()
0xf2: Pop(0)
0xf3: GOTO 0xf6

0xf4: @ StopAnimation()
0xf5: Pop(0)
0xf6: Return(); Pop(0)

0xf7: GOTO 0xa2

0xf8: Return(); Pop(0)

0xf9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xfa: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xfb: PushEmpty(bool, object, float)
0xfc: Stack[-2] = Stack[-12]
0xfd: Stack[-1] = (float) 70.0
0xfe: Call2 0x3e7

0xff: Pop(2)
0x100: Pop(1); Push((bool) Stack[-1] == 0)
0x101: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x102: Stack[-10] = (int) -2
0x103: Return(); Pop(8)

0x104: @ CreateDialog(Stack[-4])
0x105: Pop(0)
0x106: PushEmpty(int)
0x107: Call2 0x534

0x108: Pop(0)
0x109: @@ SetNPCName(Stack[-1])
0x10a: Pop(1)
0x10b: PushEmpty(int)
0x10c: Call2 0x532

0x10d: Pop(0)
0x10e: @@ SetNPCDescription(Stack[-1])
0x10f: Pop(1)
0x110: PushEmpty(string)
0x111: Call2 0x536

0x112: Pop(0)
0x113: @@ SetPhoto(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(string)
0x116: Call2 0x538

0x117: Pop(0)
0x118: @@ SetPhoto2(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(int)
0x11b: Call2 0x53c

0x11c: Pop(0)
0x11d: @@ SetPlayerName(Stack[-1])
0x11e: Pop(1)
0x11f: Stack[-2] = (int) -1
0x120: @ IsOverrideActive(Stack[-3])
0x121: Pop(0)
0x122: Push(Stack[-3])
0x123: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x124: Stack[-10] = (int) -2
0x125: Return(); Pop(8)

0x126: @ DoDialog(Stack[-4])
0x127: Pop(0)
0x128: PushEmpty(bool, object)
0x129: PushEmpty(object)
0x12a: Call2 0x4fb

0x12b: Stack[-2] = Stack[-1]
0x12c: Pop(1)
0x12d: Call2 0x43c

0x12e: Pop(2)
0x12f: PushEmpty(object, object)
0x130: Stack[-2] = Stack[-11]
0x131: Stack[-1] = Stack[-6]
0x132: Push(-2, 4); TaskCall(3)
0x133: Call2 0x14a

0x134: Pop(-2, 4); TaskReturn
0x135: Pop(2)
0x136: @@ IsDialogEnd(Stack[-1])
0x137: Pop(0)
0x138: Pop(0); Push((bool) Stack[-1] == 0)
0x139: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13a: @ sync()
0x13b: Pop(0)
0x13c: @@ IsDialogEnd(Stack[-1])
0x13d: Pop(0)
0x13e: GOTO 0x138

0x13f: PushEmpty(object)
0x140: Stack[-1] = Stack[-10]
0x141: Call2 0x42b

0x142: Pop(1)
0x143: @ StopDialog(Stack[-4])
0x144: Pop(0)
0x145: @@ GetReturnValue(Stack[-2])
0x146: Pop(0)
0x147: Stack[-10] = Stack[-2]
0x148: Return(); Pop(8)

0x149: Stack[-4] = 0
0x14a: PushEmpty()
0x14b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x14c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x14d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x14e: Push((int) 1)
0x14f: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral"
0x152: Call2 0x189

0x153: Pop(1)
0x154: Push((int) 535231)
0x155: @@ SetMessage(Stack[-1])
0x156: Pop(1)
0x157: @@ ClearReplies()
0x158: Pop(0)
0x159: Push((int) 535232)
0x15a: Push((int) 36953)
0x15b: Push((int) 36907)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: Push((int) 535233)
0x15f: Push((int) -1)
0x160: Push((int) 36908)
0x161: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x162: Pop(3)
0x163: Push((int) 535280)
0x164: Push((int) -1)
0x165: Push((int) 36956)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: GOTO 0x16b

0x169: Return(); Pop(0)

0x16a: GOTO 0x14e

0x16b: PushEmpty(bool)
0x16c: Call2 0x53a

0x16d: Pop(0)
0x16e: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x16f: @ lshWaitForAnimEnd()
0x170: Pop(0)
0x171: Push( Stack[3 + Tasks[-1].StackPointer] )
0x172: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x173: GOTO 0x179

0x174: PushEmpty(string)
0x175: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x176: Call2 0x4c6

0x177: Pop(1)
0x178: GOTO 0x16f

0x179: GOTO 0x188

0x17a: Push("all")
0x17b: Push("idle")
0x17c: @ PlayAnimation(Stack[-2], Stack[-1])
0x17d: Pop(2)
0x17e: @ WaitForAnimEnd()
0x17f: Pop(0)
0x180: Push( Stack[3 + Tasks[-1].StackPointer] )
0x181: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x182: GOTO 0x188

0x183: Push("all")
0x184: Push("idle")
0x185: @ PlayAnimation(Stack[-2], Stack[-1])
0x186: Pop(2)
0x187: GOTO 0x17e

0x188: Return(); Pop(0)

0x189: PushEmpty()
0x18a: PushEmpty(bool)
0x18b: Call2 0x53a

0x18c: Pop(0)
0x18d: Pop(1); Push((bool) Stack[-1] == 0)
0x18e: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18f: Return(); Pop(0)

0x190: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x191: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x192: Return(); Pop(0)

0x193: PushEmpty(string, bool)
0x194: Stack[-2] = Stack[-3]
0x195: Push("")
0x196: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x197: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x198: Stack[-1] = (bool) 0
0x199: GOTO 0x19b

0x19a: Stack[-1] = (bool) 1
0x19b: Call2 0x4d6

0x19c: Pop(2)
0x19d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x19e: Return(); Pop(0)

0x19f: PushEmpty()
0x1a0: Push((int) 1)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1a2: PushEmpty()
0x1a3: Call2 0x4f4

0x1a4: Pop(0)
0x1a5: Push((int) 36906)
0x1a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1a8: PushEmpty(string)
0x1a9: Stack[-1] = "Neutral"
0x1aa: Call2 0x189

0x1ab: Pop(1)
0x1ac: Push((int) 535231)
0x1ad: @@ SetMessage(Stack[-1])
0x1ae: Pop(1)
0x1af: @@ ClearReplies()
0x1b0: Pop(0)
0x1b1: Push((int) 535232)
0x1b2: Push((int) 36953)
0x1b3: Push((int) 36907)
0x1b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b5: Pop(3)
0x1b6: Push((int) 535233)
0x1b7: Push((int) -1)
0x1b8: Push((int) 36908)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Push((int) 535280)
0x1bc: Push((int) -1)
0x1bd: Push((int) 36956)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Return(); Pop(0)

0x1c1: Push((int) 36953)
0x1c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1c4: PushEmpty(string)
0x1c5: Stack[-1] = "Neutral"
0x1c6: Call2 0x189

0x1c7: Pop(1)
0x1c8: Push((int) 535277)
0x1c9: @@ SetMessage(Stack[-1])
0x1ca: Pop(1)
0x1cb: @@ ClearReplies()
0x1cc: Pop(0)
0x1cd: Push((int) 535278)
0x1ce: Push((int) 36957)
0x1cf: Push((int) 36954)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: Push((int) 535279)
0x1d3: Push((int) 36957)
0x1d4: Push((int) 36955)
0x1d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d6: Pop(3)
0x1d7: Return(); Pop(0)

0x1d8: Push((int) 36957)
0x1d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1db: PushEmpty(string)
0x1dc: Stack[-1] = "Neutral"
0x1dd: Call2 0x189

0x1de: Pop(1)
0x1df: Push((int) 535281)
0x1e0: @@ SetMessage(Stack[-1])
0x1e1: Pop(1)
0x1e2: @@ ClearReplies()
0x1e3: Pop(0)
0x1e4: Push((int) 535282)
0x1e5: Push((int) -1)
0x1e6: Push((int) 36958)
0x1e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e8: Pop(3)
0x1e9: Push((int) 535283)
0x1ea: Push((int) -1)
0x1eb: Push((int) 36959)
0x1ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ed: Pop(3)
0x1ee: Return(); Pop(0)

0x1ef: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f0: PushEmpty(bool)
0x1f1: Call2 0x53a

0x1f2: Pop(0)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f4: @ lshStopAnimation()
0x1f5: Pop(0)
0x1f6: GOTO 0x1f9

0x1f7: @ StopAnimation()
0x1f8: Pop(0)
0x1f9: Return(); Pop(0)

0x1fa: GOTO 0x1a0

0x1fb: Return(); Pop(0)

0x1fc: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1fd: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1fe: PushEmpty(bool, object, float)
0x1ff: Stack[-2] = Stack[-12]
0x200: Stack[-1] = (float) 70.0
0x201: Call2 0x3e7

0x202: Pop(2)
0x203: Pop(1); Push((bool) Stack[-1] == 0)
0x204: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x205: Stack[-10] = (int) -2
0x206: Return(); Pop(8)

0x207: @ CreateDialog(Stack[-4])
0x208: Pop(0)
0x209: PushEmpty(int)
0x20a: Call2 0x534

0x20b: Pop(0)
0x20c: @@ SetNPCName(Stack[-1])
0x20d: Pop(1)
0x20e: PushEmpty(int)
0x20f: Call2 0x532

0x210: Pop(0)
0x211: @@ SetNPCDescription(Stack[-1])
0x212: Pop(1)
0x213: PushEmpty(string)
0x214: Call2 0x536

0x215: Pop(0)
0x216: @@ SetPhoto(Stack[-1])
0x217: Pop(1)
0x218: PushEmpty(string)
0x219: Call2 0x538

0x21a: Pop(0)
0x21b: @@ SetPhoto2(Stack[-1])
0x21c: Pop(1)
0x21d: PushEmpty(int)
0x21e: Call2 0x53c

0x21f: Pop(0)
0x220: @@ SetPlayerName(Stack[-1])
0x221: Pop(1)
0x222: Stack[-2] = (int) -1
0x223: @ IsOverrideActive(Stack[-3])
0x224: Pop(0)
0x225: Push(Stack[-3])
0x226: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x227: Stack[-10] = (int) -2
0x228: Return(); Pop(8)

0x229: @ DoDialog(Stack[-4])
0x22a: Pop(0)
0x22b: PushEmpty(bool, object)
0x22c: PushEmpty(object)
0x22d: Call2 0x4fb

0x22e: Stack[-2] = Stack[-1]
0x22f: Pop(1)
0x230: Call2 0x43c

0x231: Pop(2)
0x232: PushEmpty(object, object)
0x233: Stack[-2] = Stack[-11]
0x234: Stack[-1] = Stack[-6]
0x235: Push(-2, 4); TaskCall(5)
0x236: Call2 0x24d

0x237: Pop(-2, 4); TaskReturn
0x238: Pop(2)
0x239: @@ IsDialogEnd(Stack[-1])
0x23a: Pop(0)
0x23b: Pop(0); Push((bool) Stack[-1] == 0)
0x23c: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x23d: @ sync()
0x23e: Pop(0)
0x23f: @@ IsDialogEnd(Stack[-1])
0x240: Pop(0)
0x241: GOTO 0x23b

0x242: PushEmpty(object)
0x243: Stack[-1] = Stack[-10]
0x244: Call2 0x42b

0x245: Pop(1)
0x246: @ StopDialog(Stack[-4])
0x247: Pop(0)
0x248: @@ GetReturnValue(Stack[-2])
0x249: Pop(0)
0x24a: Stack[-10] = Stack[-2]
0x24b: Return(); Pop(8)

0x24c: Stack[-4] = 0
0x24d: PushEmpty()
0x24e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x24f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x250: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x251: Push((int) 1)
0x252: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x253: PushEmpty(string)
0x254: Stack[-1] = "Neutral"
0x255: Call2 0x287

0x256: Pop(1)
0x257: Push((int) 540545)
0x258: @@ SetMessage(Stack[-1])
0x259: Pop(1)
0x25a: @@ ClearReplies()
0x25b: Pop(0)
0x25c: Push((int) 540546)
0x25d: Push((int) -1)
0x25e: Push((int) 42555)
0x25f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x260: Pop(3)
0x261: Push((int) 540798)
0x262: Push((int) -1)
0x263: Push((int) 42847)
0x264: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x265: Pop(3)
0x266: GOTO 0x269

0x267: Return(); Pop(0)

0x268: GOTO 0x251

0x269: PushEmpty(bool)
0x26a: Call2 0x53a

0x26b: Pop(0)
0x26c: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x26d: @ lshWaitForAnimEnd()
0x26e: Pop(0)
0x26f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x270: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x271: GOTO 0x277

0x272: PushEmpty(string)
0x273: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x274: Call2 0x4c6

0x275: Pop(1)
0x276: GOTO 0x26d

0x277: GOTO 0x286

0x278: Push("all")
0x279: Push("idle")
0x27a: @ PlayAnimation(Stack[-2], Stack[-1])
0x27b: Pop(2)
0x27c: @ WaitForAnimEnd()
0x27d: Pop(0)
0x27e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x27f: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x280: GOTO 0x286

0x281: Push("all")
0x282: Push("idle")
0x283: @ PlayAnimation(Stack[-2], Stack[-1])
0x284: Pop(2)
0x285: GOTO 0x27c

0x286: Return(); Pop(0)

0x287: PushEmpty()
0x288: PushEmpty(bool)
0x289: Call2 0x53a

0x28a: Pop(0)
0x28b: Pop(1); Push((bool) Stack[-1] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28d: Return(); Pop(0)

0x28e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x28f: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x290: Return(); Pop(0)

0x291: PushEmpty(string, bool)
0x292: Stack[-2] = Stack[-3]
0x293: Push("")
0x294: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x295: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x296: Stack[-1] = (bool) 0
0x297: GOTO 0x299

0x298: Stack[-1] = (bool) 1
0x299: Call2 0x4d6

0x29a: Pop(2)
0x29b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x29c: Return(); Pop(0)

0x29d: PushEmpty()
0x29e: Push((int) 1)
0x29f: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2a0: PushEmpty()
0x2a1: Call2 0x4f4

0x2a2: Pop(0)
0x2a3: Push((int) 42554)
0x2a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2a6: PushEmpty(string)
0x2a7: Stack[-1] = "Neutral"
0x2a8: Call2 0x287

0x2a9: Pop(1)
0x2aa: Push((int) 540545)
0x2ab: @@ SetMessage(Stack[-1])
0x2ac: Pop(1)
0x2ad: @@ ClearReplies()
0x2ae: Pop(0)
0x2af: Push((int) 540546)
0x2b0: Push((int) -1)
0x2b1: Push((int) 42555)
0x2b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b3: Pop(3)
0x2b4: Push((int) 540798)
0x2b5: Push((int) -1)
0x2b6: Push((int) 42847)
0x2b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b8: Pop(3)
0x2b9: Return(); Pop(0)

0x2ba: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2bb: PushEmpty(bool)
0x2bc: Call2 0x53a

0x2bd: Pop(0)
0x2be: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2bf: @ lshStopAnimation()
0x2c0: Pop(0)
0x2c1: GOTO 0x2c4

0x2c2: @ StopAnimation()
0x2c3: Pop(0)
0x2c4: Return(); Pop(0)

0x2c5: GOTO 0x29e

0x2c6: Return(); Pop(0)

0x2c7: PushEmpty()
0x2c8: Call2 0x2cb

0x2c9: Pop(0)
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(bool)
0x2cc: Call2 0x3e2

0x2cd: Pop(0)
0x2ce: Pop(1); Push((bool) Stack[-1] == 0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d0: @ Hold()
0x2d1: Pop(0)
0x2d2: @ GetDirection(Stack[-0])
0x2d3: Pop(0)
0x2d4: PushEmpty()
0x2d5: Call2 0x37b

0x2d6: Pop(0)
0x2d7: GOTO 0x2d4

0x2d8: Return(); Pop(0)

0x2d9: PushEmpty(object, object)
0x2da: Push("player")
0x2db: @ FindActor(Stack[-2], Stack[-1])
0x2dc: Pop(1)
0x2dd: Pop(0); Push((bool) Stack[-1] == 0)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2df: Stack[-3] = (bool) 0
0x2e0: Return(); Pop(2)

0x2e1: PushEmpty(bool, object)
0x2e2: Stack[-1] = Stack[-3]
0x2e3: Call2 0x3d9

0x2e4: Stack[-5] = Stack[-2]
0x2e5: Pop(2)
0x2e6: Return(); Pop(2)

0x2e7: Stack[-1] = 0
0x2e8: Push(CvectorIndex(Stack[-0], 0))
0x2e9: Push(CvectorIndex(Stack[-0], 2))
0x2ea: @ RotateAsync(Stack[-2], Stack[-1])
0x2eb: Pop(2)
0x2ec: Return(); Pop(0)

0x2ed: PushEmpty(object, bool, object, bool)
0x2ee: Push("player")
0x2ef: @ FindActor(Stack[-3], Stack[-1])
0x2f0: Pop(1)
0x2f1: Pop(0); Push((bool) Stack[-2] == 0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f3: Stack[-5] = (bool) 0
0x2f4: Return(); Pop(4)

0x2f5: PushEmpty(float, object)
0x2f6: Stack[-1] = Stack[-4]
0x2f7: Call2 0x3c7

0x2f8: Pop(1)
0x2f9: Push((float)90000.0)
0x2fa: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fc: Stack[-5] = (bool) 0
0x2fd: Return(); Pop(4)

0x2fe: @ CanSee(Stack[-1], Stack[-2])
0x2ff: Pop(0)
0x300: Stack[-5] = Stack[-1]
0x301: Return(); Pop(4)

0x302: Stack[-2] = 0
0x303: PushEmpty(float, float)
0x304: Push((int) 8)
0x305: Push((int) 16)
0x306: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x307: Pop(2)
0x308: Push((int) 10)
0x309: @ SetTimer(Stack[-1], Stack[-2])
0x30a: Pop(1)
0x30b: Return(); Pop(2)

0x30c: Push((int) 10)
0x30d: @ KillTimer(Stack[-1])
0x30e: Pop(1)
0x30f: Return(); Pop(0)

0x310: PushEmpty()
0x311: Push((int) 10)
0x312: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x313: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x314: PushEmpty()
0x315: Call2 0x30c

0x316: Pop(0)
0x317: PushEmpty(bool)
0x318: Stack[-1] = (bool) 0
0x319: PushEmpty(bool)
0x31a: Call2 0x3e2

0x31b: Pop(0)
0x31c: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31d: PushEmpty(bool)
0x31e: Call2 0x2ed

0x31f: Pop(0)
0x320: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x321: Stack[-1] = (bool) 1
0x322: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x323: PushEmpty(bool)
0x324: Call2 0x2d9

0x325: Pop(0)
0x326: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x327: PushEmpty(bool, object)
0x328: PushEmpty(object)
0x329: Call2 0x4fb

0x32a: Stack[-2] = Stack[-1]
0x32b: Pop(1)
0x32c: Call2 0x476

0x32d: Pop(2)
0x32e: GOTO 0x335

0x32f: PushEmpty()
0x330: Call2 0x2e8

0x331: Pop(0)
0x332: PushEmpty()
0x333: Call2 0x303

0x334: Pop(0)
0x335: Return(); Pop(0)

0x336: PushEmpty()
0x337: Call2 0x3c2

0x338: Pop(0)
0x339: PushEmpty()
0x33a: Call2 0x30c

0x33b: Pop(0)
0x33c: @ lshStopSpeech()
0x33d: Pop(0)
0x33e: @ lshStopAnimation()
0x33f: Pop(0)
0x340: @ StopAsync()
0x341: Pop(0)
0x342: @ Hold()
0x343: Pop(0)
0x344: Return(); Pop(0)

0x345: @ StopGroup0()
0x346: Pop(0)
0x347: PushEmpty()
0x348: Call2 0x30c

0x349: Pop(0)
0x34a: PushEmpty(string)
0x34b: Stack[-1] = "Neutral"
0x34c: Call2 0x4c6

0x34d: Pop(1)
0x34e: PushEmpty()
0x34f: Call2 0x303

0x350: Pop(0)
0x351: Return(); Pop(0)

0x352: PushEmpty()
0x353: Push(Stack[-1])
0x354: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x355: PushEmpty()
0x356: Call2 0x303

0x357: Pop(0)
0x358: GOTO 0x35d

0x359: PushEmpty(string)
0x35a: Stack[-1] = "Neutral"
0x35b: Call2 0x4c6

0x35c: Pop(1)
0x35d: Return(); Pop(0)

0x35e: PushEmpty(bool, bool)
0x35f: @ IsOverrideActive(Stack[-1])
0x360: Pop(0)
0x361: Pop(0); Push((bool) Stack[-1] == 0)
0x362: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x363: EventDisable(0)
0x364: PushEmpty()
0x365: Call2 0x3c2

0x366: Pop(0)
0x367: PushEmpty(bool, object)
0x368: Stack[-1] = Stack[-5]
0x369: Call2 0x3d9

0x36a: Pop(2)
0x36b: EventEnable(0)
0x36c: PushEmpty(object)
0x36d: Stack[-1] = Stack[-4]
0x36e: Call2 0x54d

0x36f: Pop(1)
0x370: PushEmpty(string)
0x371: Stack[-1] = "Neutral"
0x372: Call2 0x4c6

0x373: Pop(1)
0x374: PushEmpty()
0x375: Call2 0x30c

0x376: Pop(0)
0x377: PushEmpty()
0x378: Call2 0x303

0x379: Pop(0)
0x37a: Return(); Pop(2)

0x37b: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x37c: @ WaitForAnimEnd()
0x37d: Pop(0)
0x37e: PushEmpty(bool)
0x37f: Call2 0x3e2

0x380: Pop(0)
0x381: Pop(1); Push((bool) Stack[-1] == 0)
0x382: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x383: Return(); Pop(12)

0x384: PushEmpty(int)
0x385: Call2 0x521

0x386: Stack[-7] = Stack[-1]
0x387: Pop(1)
0x388: Stack[-5] = (int) 0
0x389: PushEmpty(bool)
0x38a: Stack[-1] = (bool) 0
0x38b: Push((int) 5)
0x38c: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x38e: PushEmpty(bool)
0x38f: Call2 0x3e2

0x390: Pop(0)
0x391: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x392: Stack[-1] = (bool) 1
0x393: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x394: Pop(0); Push((bool) Stack[-6] == 0)
0x395: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x396: Push((int) 3)
0x397: @ Sleep(Stack[-1], Stack[-5])
0x398: Pop(1)
0x399: Pop(0); Push((bool) Stack[-4] == 0)
0x39a: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x39b: GOTO 0x3bd

0x39c: GOTO 0x3b2

0x39d: @ irand(Stack[-3], Stack[-6])
0x39e: Pop(0)
0x39f: Push((int) 5)
0x3a0: @ irand(Stack[-3], Stack[-1])
0x3a1: Pop(1)
0x3a2: Push((int) 0)
0x3a3: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a5: Stack[-3] = (int) 0
0x3a6: Push("all")
0x3a7: PushEmpty(string, int)
0x3a8: Stack[-1] = Stack[-6]
0x3a9: Call2 0x51a

0x3aa: Pop(1)
0x3ab: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ac: Pop(2)
0x3ad: @ WaitForAnimEnd(Stack[-1])
0x3ae: Pop(0)
0x3af: Pop(0); Push((bool) Stack[-1] == 0)
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b1: GOTO 0x3bd

0x3b2: PushEmpty(bool)
0x3b3: Call2 0x3c0

0x3b4: Pop(0)
0x3b5: Pop(1); Push((bool) Stack[-1] == 0)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b7: GOTO 0x3bd

0x3b8: @ ResetAAS()
0x3b9: Pop(0)
0x3ba: Push((int) 1)
0x3bb: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3bc: GOTO 0x389

0x3bd: @ ResetAAS()
0x3be: Pop(0)
0x3bf: Return(); Pop(12)

0x3c0: Stack[-1] = (bool) 1
0x3c1: Return(); Pop(0)

0x3c2: @ StopAnimation()
0x3c3: Pop(0)
0x3c4: @ StopGroup0()
0x3c5: Pop(0)
0x3c6: Return(); Pop(0)

0x3c7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3c8: @ GetPosition(Stack[-3])
0x3c9: Pop(0)
0x3ca: @@ GetPosition(Stack[-2])
0x3cb: Pop(0)
0x3cc: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3cd: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3ce: Return(); Pop(6)

0x3cf: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x3d0: @ GetPosition(Stack[-3])
0x3d1: Pop(0)
0x3d2: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x3d3: Push(CvectorIndex(Stack[-2], 0))
0x3d4: Push(CvectorIndex(Stack[-3], 2))
0x3d5: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x3d6: Pop(2)
0x3d7: Stack[-8] = Stack[-1]
0x3d8: Return(); Pop(6)

0x3d9: PushEmpty(cvector, cvector)
0x3da: @@ GetPosition(Stack[-1])
0x3db: Pop(0)
0x3dc: PushEmpty(bool, cvector)
0x3dd: Stack[-1] = Stack[-3]
0x3de: Call2 0x3cf

0x3df: Stack[-6] = Stack[-2]
0x3e0: Pop(2)
0x3e1: Return(); Pop(2)

0x3e2: PushEmpty(bool, bool)
0x3e3: @ IsLoaded(Stack[-1])
0x3e4: Pop(0)
0x3e5: Stack[-3] = Stack[-1]
0x3e6: Return(); Pop(2)

0x3e7: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3e8: @@ GetPosition(Stack[-8])
0x3e9: Pop(0)
0x3ea: @@ GetEyesHeight(Stack[-9])
0x3eb: Pop(0)
0x3ec: Push(CvectorIndex(Stack[-8], 1))
0x3ed: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3ee: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3ef: @ GetPosition(Stack[-7])
0x3f0: Pop(0)
0x3f1: @ GetEyesHeight(Stack[-9])
0x3f2: Pop(0)
0x3f3: Push(CvectorIndex(Stack[-7], 1))
0x3f4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3f5: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3f6: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3f7: Push(CvectorIndex(Stack[-6], 1))
0x3f8: Stack[-1] = (int) 0
0x3f9: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3fa: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3fb: Pop(1); Push(Sqrt(Stack[-1]))
0x3fc: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3fd: Stack[-5] = -Stack[-6]; Pop(0);
0x3fe: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3ff: PushEmpty(cvector, cvector)
0x400: Push(CVector(0.0, 1.0, 0.0))
0x401: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x402: Call2 0x501

0x403: Pop(1)
0x404: Push((int) 25)
0x405: Pop(2); Push(Stack[-2] * Stack[-1]);
0x406: Pop(2); Push(Stack[-2] + Stack[-1]);
0x407: Push(CVector(0.0, 10.0, 0.0))
0x408: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x409: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x40a: @ IsOverrideActive(Stack[-2])
0x40b: Pop(0)
0x40c: Push(Stack[-2])
0x40d: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40e: Stack[-21] = (bool) 0
0x40f: Return(); Pop(18)

0x410: @ StopWorld()
0x411: Pop(0)
0x412: @ CameraTransit(Stack[-3], Stack[-5])
0x413: Pop(0)
0x414: Push(CvectorIndex(Stack[-4], 0))
0x415: Push(CvectorIndex(Stack[-5], 2))
0x416: @ Rotate(Stack[-2], Stack[-1])
0x417: Pop(2)
0x418: PushEmpty(bool)
0x419: Call2 0x53a

0x41a: Pop(0)
0x41b: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41c: GOTO 0x425

0x41d: Push("head")
0x41e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x41f: Pop(1)
0x420: Push(Stack[-1])
0x421: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x422: Push("head")
0x423: @ LookAsyncCamera(Stack[-1])
0x424: Pop(1)
0x425: @ CameraWaitForPlayFinish()
0x426: Pop(0)
0x427: @ ResumeWorld()
0x428: Pop(0)
0x429: Stack[-21] = (bool) 1
0x42a: Return(); Pop(18)

0x42b: PushEmpty(bool, bool)
0x42c: @ CameraSwitchToNormal()
0x42d: Pop(0)
0x42e: PushEmpty(bool)
0x42f: Call2 0x53a

0x430: Pop(0)
0x431: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x432: GOTO 0x43b

0x433: Push("head")
0x434: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x435: Pop(1)
0x436: Push(Stack[-1])
0x437: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x438: Push("head")
0x439: @ UnlookAsync(Stack[-1])
0x43a: Pop(1)
0x43b: Return(); Pop(2)

0x43c: PushEmpty(int, int, int, int)
0x43d: Push("voice_common")
0x43e: @ GetVariable(Stack[-1], Stack[-3])
0x43f: Pop(1)
0x440: Push(Stack[-2])
0x441: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x442: PushEmpty(bool, object)
0x443: Stack[-1] = Stack[-7]
0x444: Call2 0x476

0x445: Pop(1)
0x446: Pop(1); Push((bool) Stack[-1] == 0)
0x447: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x448: PushEmpty(bool, object)
0x449: Stack[-1] = Stack[-7]
0x44a: Call2 0x49b

0x44b: Pop(1)
0x44c: Pop(1); Push((bool) Stack[-1] == 0)
0x44d: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44e: Stack[-6] = (bool) 0
0x44f: Return(); Pop(4)

0x450: Push((int) 2)
0x451: @ irand(Stack[-2], Stack[-1])
0x452: Pop(1)
0x453: Push(Stack[-1])
0x454: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x455: Push("voice_common")
0x456: Push((int) 1)
0x457: Pop(1); Push(Stack[-4] + Stack[-1]);
0x458: Push((int) 3)
0x459: Pop(2); Push(Stack[-2] % Stack[-1]);
0x45a: @ SetVariable(Stack[-2], Stack[-1])
0x45b: Pop(2)
0x45c: GOTO 0x461

0x45d: Push("voice_common")
0x45e: Push((int) 0)
0x45f: @ SetVariable(Stack[-2], Stack[-1])
0x460: Pop(2)
0x461: GOTO 0x474

0x462: PushEmpty(bool, object)
0x463: Stack[-1] = Stack[-7]
0x464: Call2 0x49b

0x465: Pop(1)
0x466: Pop(1); Push((bool) Stack[-1] == 0)
0x467: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x468: PushEmpty(bool, object)
0x469: Stack[-1] = Stack[-7]
0x46a: Call2 0x476

0x46b: Pop(1)
0x46c: Pop(1); Push((bool) Stack[-1] == 0)
0x46d: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46e: Stack[-6] = (bool) 0
0x46f: Return(); Pop(4)

0x470: Push("voice_common")
0x471: Push((int) 1)
0x472: @ SetVariable(Stack[-2], Stack[-1])
0x473: Pop(2)
0x474: Stack[-6] = (bool) 1
0x475: Return(); Pop(4)

0x476: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x477: Stack[-5] = "c"
0x478: Stack[-4] = (int) 0
0x479: Push((int) 1)
0x47a: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x47b: Push((int) 1)
0x47c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x47d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x47e: @@ HasProperty(Stack[-1], Stack[-4])
0x47f: Pop(1)
0x480: Pop(0); Push((bool) Stack[-3] == 0)
0x481: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x482: GOTO 0x486

0x483: Push((int) 1)
0x484: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x485: GOTO 0x479

0x486: Pop(0); Push((bool) Stack[-4] == 0)
0x487: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x488: Stack[-12] = (bool) 0
0x489: Return(); Pop(10)

0x48a: Stack[-2] = (int) 0
0x48b: Push((int) 1)
0x48c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x48d: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48e: @ irand(Stack[-2], Stack[-4])
0x48f: Pop(0)
0x490: Push((int) 1)
0x491: Pop(1); Push(Stack[-3] + Stack[-1]);
0x492: Pop(1); Push(Stack[-6] + Stack[-1]);
0x493: @@ GetProperty(Stack[-1], Stack[-2])
0x494: Pop(1)
0x495: PushEmpty(bool, string)
0x496: Stack[-1] = Stack[-3]
0x497: Call2 0x4e5

0x498: Stack[-14] = Stack[-2]
0x499: Pop(2)
0x49a: Return(); Pop(10)

0x49b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x49c: Push("d")
0x49d: PushEmpty(int)
0x49e: Call2 0x50b

0x49f: Pop(0)
0x4a0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4a1: Push("m")
0x4a2: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4a3: Stack[-4] = (int) 0
0x4a4: Push((int) 1)
0x4a5: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4a6: Push((int) 1)
0x4a7: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4a8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4a9: @@ HasProperty(Stack[-1], Stack[-4])
0x4aa: Pop(1)
0x4ab: Pop(0); Push((bool) Stack[-3] == 0)
0x4ac: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4ad: GOTO 0x4b1

0x4ae: Push((int) 1)
0x4af: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4b0: GOTO 0x4a4

0x4b1: Pop(0); Push((bool) Stack[-4] == 0)
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b3: Stack[-12] = (bool) 0
0x4b4: Return(); Pop(10)

0x4b5: Stack[-2] = (int) 0
0x4b6: Push((int) 1)
0x4b7: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b9: @ irand(Stack[-2], Stack[-4])
0x4ba: Pop(0)
0x4bb: Push((int) 1)
0x4bc: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4bd: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4be: @@ GetProperty(Stack[-1], Stack[-2])
0x4bf: Pop(1)
0x4c0: PushEmpty(bool, string)
0x4c1: Stack[-1] = Stack[-3]
0x4c2: Call2 0x4e5

0x4c3: Stack[-14] = Stack[-2]
0x4c4: Pop(2)
0x4c5: Return(); Pop(10)

0x4c6: PushEmpty(bool, float, float, bool, float, float)
0x4c7: @ lshHasAnimation(Stack[-3], Stack[-7])
0x4c8: Pop(0)
0x4c9: Push(Stack[-3])
0x4ca: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4cb: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x4cc: Pop(0)
0x4cd: Push((bool) 0)
0x4ce: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4cf: Pop(1)
0x4d0: GOTO 0x4d5

0x4d1: Push("Can't find lsh animation : ")
0x4d2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4d3: @ Trace(Stack[-1])
0x4d4: Pop(1)
0x4d5: Return(); Pop(6)

0x4d6: PushEmpty(bool, float, float, bool, float, float)
0x4d7: @ lshHasAnimation(Stack[-3], Stack[-8])
0x4d8: Pop(0)
0x4d9: Push(Stack[-3])
0x4da: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4db: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x4dc: Pop(0)
0x4dd: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x4de: Pop(0)
0x4df: GOTO 0x4e4

0x4e0: Push("Can't find lsh animation : ")
0x4e1: Pop(1); Push(Stack[-1] + Stack[-9]);
0x4e2: @ Trace(Stack[-1])
0x4e3: Pop(1)
0x4e4: Return(); Pop(6)

0x4e5: PushEmpty(bool, bool)
0x4e6: PushEmpty(bool)
0x4e7: Call2 0x53a

0x4e8: Pop(0)
0x4e9: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4ea: @ lshHasSpeech(Stack[-1], Stack[-3])
0x4eb: Pop(0)
0x4ec: Push(Stack[-1])
0x4ed: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4ee: @ lshPlaySpeech(Stack[-3])
0x4ef: Pop(0)
0x4f0: Stack[-4] = (bool) 1
0x4f1: Return(); Pop(2)

0x4f2: Stack[-4] = (bool) 0
0x4f3: Return(); Pop(2)

0x4f4: PushEmpty(bool)
0x4f5: Call2 0x53a

0x4f6: Pop(0)
0x4f7: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f8: @ lshStopSpeech()
0x4f9: Pop(0)
0x4fa: Return(); Pop(0)

0x4fb: PushEmpty(object, object)
0x4fc: @ self(Stack[-1])
0x4fd: Pop(0)
0x4fe: Stack[-3] = Stack[-1]
0x4ff: Return(); Pop(2)

0x500: Stack[-1] = 0
0x501: PushEmpty(float, float)
0x502: Pop(0); Push(Stack[-3] | Stack[-3]);
0x503: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x504: Push((float)0.0)
0x505: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x506: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x507: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x508: Return(); Pop(2)

0x509: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x50a: Return(); Pop(2)

0x50b: PushEmpty(float, float)
0x50c: @ GetGameTime(Stack[-1])
0x50d: Pop(0)
0x50e: Push((int) 1)
0x50f: PushEmpty(int)
0x510: Push((int) 24)
0x511: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x512: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x513: Return(); Pop(2)

0x514: PushEmpty()
0x515: PushEmpty(int)
0x516: Call2 0x50b

0x517: Pop(0)
0x518: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x519: Return(); Pop(0)

0x51a: PushEmpty(string, string)
0x51b: Stack[-1] = "idle"
0x51c: Push(Stack[-3])
0x51d: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x51f: Stack[-4] = Stack[-1]
0x520: Return(); Pop(2)

0x521: PushEmpty(int, bool, int, bool)
0x522: Stack[-2] = (int) 0
0x523: Push("all")
0x524: PushEmpty(string, int)
0x525: Stack[-1] = Stack[-5]
0x526: Call2 0x51a

0x527: Pop(1)
0x528: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x529: Pop(2)
0x52a: Pop(0); Push((bool) Stack[-1] == 0)
0x52b: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x52c: GOTO 0x530

0x52d: Push((int) 1)
0x52e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x52f: GOTO 0x523

0x530: Stack[-5] = Stack[-2]
0x531: Return(); Pop(4)

0x532: Stack[-1] = (int) 515544
0x533: Return(); Pop(0)

0x534: Stack[-1] = (int) 502869
0x535: Return(); Pop(0)

0x536: Stack[-1] = "ui/NPC_Mark.png"
0x537: Return(); Pop(0)

0x538: Stack[-1] = "ui/NPC_Mark_b.png"
0x539: Return(); Pop(0)

0x53a: Stack[-1] = (bool) 1
0x53b: Return(); Pop(0)

0x53c: PushEmpty(int, int)
0x53d: Push("branch")
0x53e: @ GetVariable(Stack[-1], Stack[-2])
0x53f: Pop(1)
0x540: Push((int) 0)
0x541: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x542: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x543: Stack[-3] = (int) 1
0x544: Return(); Pop(2)

0x545: GOTO 0x54b

0x546: Push((int) 1)
0x547: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x548: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x549: Stack[-3] = (int) 2
0x54a: Return(); Pop(2)

0x54b: Stack[-3] = (int) 3
0x54c: Return(); Pop(2)

0x54d: PushEmpty(int, int)
0x54e: Push("mt_mark")
0x54f: @ GetVariable(Stack[-1], Stack[-2])
0x550: Pop(1)
0x551: Pop(0); Push((bool) Stack[-1] == 0)
0x552: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x553: PushEmpty(int, object)
0x554: Stack[-1] = Stack[-5]
0x555: Push(-2, 1); TaskCall(0)
0x556: Call2 0x0

0x557: Pop(-2, 1); TaskReturn
0x558: Pop(2)
0x559: Push("mt_mark")
0x55a: Push((int) 1)
0x55b: @ SetVariable(Stack[-2], Stack[-1])
0x55c: Pop(2)
0x55d: PushEmpty(bool, int)
0x55e: Stack[-1] = (int) 12
0x55f: Call2 0x514

0x560: Pop(1)
0x561: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x562: PushEmpty(int, object)
0x563: Stack[-1] = Stack[-5]
0x564: Push(-2, 1); TaskCall(2)
0x565: Call2 0xf9

0x566: Pop(-2, 1); TaskReturn
0x567: Pop(2)
0x568: Return(); Pop(2)

0x569: PushEmpty(int, object)
0x56a: Stack[-1] = Stack[-5]
0x56b: Push(-2, 1); TaskCall(4)
0x56c: Call2 0x1fc

0x56d: Pop(-2, 1); TaskReturn
0x56e: Pop(2)
0x56f: Return(); Pop(2)

