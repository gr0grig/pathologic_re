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
	Untrust
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
	ui/NPC_Petr.png
	ui/NPC_Petr_b.png
	oob2Petr1
	branch
	mt_petr
	d12_petr

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
	GetGameTime (1 args)
	HasAnimation (3 args)

RunOp = 0x3f1
RunTask = 8

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x188 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2c9 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3c7 Vars = (int, int)
	GTASK_8 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x43a Vars = (int)
		EVENT_6 Op = 0x460 Vars = ()
		EVENT_5 Op = 0x46f Vars = ()
		EVENT_45 Op = 0x47c Vars = (bool)
		EVENT_0 Op = 0x488 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x511

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x665

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x663

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x667

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x669

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x67f

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
0x31: Call2 0x627

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x568

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
0x48: Call2 0x556

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
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x8b

0x5a: Pop(1)
0x5b: Push((int) 518045)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 518046)
0x61: Push((int) 32123)
0x62: Push((int) 19179)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 530814)
0x66: Push((int) 32123)
0x67: Push((int) 32122)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0x66b

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x5f2

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
0x8d: Call2 0x66b

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
0x9d: Call2 0x602

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x620

0xa6: Pop(0)
0xa7: Push((int) 19178)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 518045)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 518046)
0xb4: Push((int) 32123)
0xb5: Push((int) 19179)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 530814)
0xb9: Push((int) 32123)
0xba: Push((int) 32122)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 32123)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Neutral"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 530815)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 530816)
0xcb: Push((int) -1)
0xcc: Push((int) 32125)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 530817)
0xd0: Push((int) -1)
0xd1: Push((int) 32126)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd6: PushEmpty(bool)
0xd7: Call2 0x66b

0xd8: Pop(0)
0xd9: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xda: @ lshStopAnimation()
0xdb: Pop(0)
0xdc: GOTO 0xdf

0xdd: @ StopAnimation()
0xde: Pop(0)
0xdf: Return(); Pop(0)

0xe0: GOTO 0xa2

0xe1: Return(); Pop(0)

0xe2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe4: PushEmpty(bool, object, float)
0xe5: Stack[-2] = Stack[-12]
0xe6: Stack[-1] = (float) 70.0
0xe7: Call2 0x511

0xe8: Pop(2)
0xe9: Pop(1); Push((bool) Stack[-1] == 0)
0xea: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xeb: Stack[-10] = (int) -2
0xec: Return(); Pop(8)

0xed: @ CreateDialog(Stack[-4])
0xee: Pop(0)
0xef: PushEmpty(int)
0xf0: Call2 0x665

0xf1: Pop(0)
0xf2: @@ SetNPCName(Stack[-1])
0xf3: Pop(1)
0xf4: PushEmpty(int)
0xf5: Call2 0x663

0xf6: Pop(0)
0xf7: @@ SetNPCDescription(Stack[-1])
0xf8: Pop(1)
0xf9: PushEmpty(string)
0xfa: Call2 0x667

0xfb: Pop(0)
0xfc: @@ SetPhoto(Stack[-1])
0xfd: Pop(1)
0xfe: PushEmpty(string)
0xff: Call2 0x669

0x100: Pop(0)
0x101: @@ SetPhoto2(Stack[-1])
0x102: Pop(1)
0x103: PushEmpty(int)
0x104: Call2 0x67f

0x105: Pop(0)
0x106: @@ SetPlayerName(Stack[-1])
0x107: Pop(1)
0x108: Stack[-2] = (int) -1
0x109: @ IsOverrideActive(Stack[-3])
0x10a: Pop(0)
0x10b: Push(Stack[-3])
0x10c: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10d: Stack[-10] = (int) -2
0x10e: Return(); Pop(8)

0x10f: @ DoDialog(Stack[-4])
0x110: Pop(0)
0x111: PushEmpty(bool, object)
0x112: PushEmpty(object)
0x113: Call2 0x627

0x114: Stack[-2] = Stack[-1]
0x115: Pop(1)
0x116: Call2 0x568

0x117: Pop(2)
0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[-11]
0x11a: Stack[-1] = Stack[-6]
0x11b: Push(-2, 4); TaskCall(3)
0x11c: Call2 0x133

0x11d: Pop(-2, 4); TaskReturn
0x11e: Pop(2)
0x11f: @@ IsDialogEnd(Stack[-1])
0x120: Pop(0)
0x121: Pop(0); Push((bool) Stack[-1] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x123: @ sync()
0x124: Pop(0)
0x125: @@ IsDialogEnd(Stack[-1])
0x126: Pop(0)
0x127: GOTO 0x121

0x128: PushEmpty(object)
0x129: Stack[-1] = Stack[-10]
0x12a: Call2 0x556

0x12b: Pop(1)
0x12c: @ StopDialog(Stack[-4])
0x12d: Pop(0)
0x12e: @@ GetReturnValue(Stack[-2])
0x12f: Pop(0)
0x130: Stack[-10] = Stack[-2]
0x131: Return(); Pop(8)

0x132: Stack[-4] = 0
0x133: PushEmpty()
0x134: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x135: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x136: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x137: Push((int) 1)
0x138: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral"
0x13b: Call2 0x172

0x13c: Pop(1)
0x13d: Push((int) 518209)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: PushEmpty(bool, object)
0x143: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x144: Call2 0x673

0x145: Pop(1)
0x146: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x147: Push((int) 519429)
0x148: Push((int) 20597)
0x149: Push((int) 20596)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: Push((int) 518211)
0x14d: Push((int) -1)
0x14e: Push((int) 19324)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: GOTO 0x154

0x152: Return(); Pop(0)

0x153: GOTO 0x137

0x154: PushEmpty(bool)
0x155: Call2 0x66b

0x156: Pop(0)
0x157: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x158: @ lshWaitForAnimEnd()
0x159: Pop(0)
0x15a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x15b: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15c: GOTO 0x162

0x15d: PushEmpty(string)
0x15e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x15f: Call2 0x5f2

0x160: Pop(1)
0x161: GOTO 0x158

0x162: GOTO 0x171

0x163: Push("all")
0x164: Push("idle")
0x165: @ PlayAnimation(Stack[-2], Stack[-1])
0x166: Pop(2)
0x167: @ WaitForAnimEnd()
0x168: Pop(0)
0x169: Push( Stack[3 + Tasks[-1].StackPointer] )
0x16a: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x16b: GOTO 0x171

0x16c: Push("all")
0x16d: Push("idle")
0x16e: @ PlayAnimation(Stack[-2], Stack[-1])
0x16f: Pop(2)
0x170: GOTO 0x167

0x171: Return(); Pop(0)

0x172: PushEmpty()
0x173: PushEmpty(bool)
0x174: Call2 0x66b

0x175: Pop(0)
0x176: Pop(1); Push((bool) Stack[-1] == 0)
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: Return(); Pop(0)

0x179: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x17a: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x17b: Return(); Pop(0)

0x17c: PushEmpty(string, bool)
0x17d: Stack[-2] = Stack[-3]
0x17e: Push("")
0x17f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x181: Stack[-1] = (bool) 0
0x182: GOTO 0x184

0x183: Stack[-1] = (bool) 1
0x184: Call2 0x602

0x185: Pop(2)
0x186: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x187: Return(); Pop(0)

0x188: PushEmpty()
0x189: Push((int) 1)
0x18a: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x18b: PushEmpty()
0x18c: Call2 0x620

0x18d: Pop(0)
0x18e: Push((int) 20596)
0x18f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x191: PushEmpty(object, object)
0x192: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x193: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x194: Call2 0x66d

0x195: Pop(2)
0x196: Push((int) 19322)
0x197: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x199: PushEmpty(string)
0x19a: Stack[-1] = "Neutral"
0x19b: Call2 0x172

0x19c: Pop(1)
0x19d: Push((int) 518209)
0x19e: @@ SetMessage(Stack[-1])
0x19f: Pop(1)
0x1a0: @@ ClearReplies()
0x1a1: Pop(0)
0x1a2: PushEmpty(bool, object)
0x1a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a4: Call2 0x673

0x1a5: Pop(1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a7: Push((int) 519429)
0x1a8: Push((int) 20597)
0x1a9: Push((int) 20596)
0x1aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ab: Pop(3)
0x1ac: Push((int) 518211)
0x1ad: Push((int) -1)
0x1ae: Push((int) 19324)
0x1af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b0: Pop(3)
0x1b1: Return(); Pop(0)

0x1b2: Push((int) 20597)
0x1b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1b5: PushEmpty(string)
0x1b6: Stack[-1] = "Neutral"
0x1b7: Call2 0x172

0x1b8: Pop(1)
0x1b9: Push((int) 519430)
0x1ba: @@ SetMessage(Stack[-1])
0x1bb: Pop(1)
0x1bc: @@ ClearReplies()
0x1bd: Pop(0)
0x1be: Push((int) 519431)
0x1bf: Push((int) 20599)
0x1c0: Push((int) 20598)
0x1c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c2: Pop(3)
0x1c3: Push((int) 519438)
0x1c4: Push((int) -1)
0x1c5: Push((int) 20605)
0x1c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c7: Pop(3)
0x1c8: Return(); Pop(0)

0x1c9: Push((int) 20599)
0x1ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1cc: PushEmpty(string)
0x1cd: Stack[-1] = "Untrust"
0x1ce: Call2 0x172

0x1cf: Pop(1)
0x1d0: Push((int) 519432)
0x1d1: @@ SetMessage(Stack[-1])
0x1d2: Pop(1)
0x1d3: @@ ClearReplies()
0x1d4: Pop(0)
0x1d5: Push((int) 519433)
0x1d6: Push((int) 20601)
0x1d7: Push((int) 20600)
0x1d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d9: Pop(3)
0x1da: Push((int) 519439)
0x1db: Push((int) 20607)
0x1dc: Push((int) 20606)
0x1dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1de: Pop(3)
0x1df: Return(); Pop(0)

0x1e0: Push((int) 20607)
0x1e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1e3: PushEmpty(string)
0x1e4: Stack[-1] = "Neutral"
0x1e5: Call2 0x172

0x1e6: Pop(1)
0x1e7: Push((int) 519440)
0x1e8: @@ SetMessage(Stack[-1])
0x1e9: Pop(1)
0x1ea: @@ ClearReplies()
0x1eb: Pop(0)
0x1ec: Push((int) 519441)
0x1ed: Push((int) 20601)
0x1ee: Push((int) 20608)
0x1ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f0: Pop(3)
0x1f1: Return(); Pop(0)

0x1f2: Push((int) 20601)
0x1f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1f5: PushEmpty(string)
0x1f6: Stack[-1] = "Untrust"
0x1f7: Call2 0x172

0x1f8: Pop(1)
0x1f9: Push((int) 519434)
0x1fa: @@ SetMessage(Stack[-1])
0x1fb: Pop(1)
0x1fc: @@ ClearReplies()
0x1fd: Pop(0)
0x1fe: Push((int) 519435)
0x1ff: Push((int) 20603)
0x200: Push((int) 20602)
0x201: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x202: Pop(3)
0x203: Return(); Pop(0)

0x204: Push((int) 20603)
0x205: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x206: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x207: PushEmpty(string)
0x208: Stack[-1] = "Untrust"
0x209: Call2 0x172

0x20a: Pop(1)
0x20b: Push((int) 519436)
0x20c: @@ SetMessage(Stack[-1])
0x20d: Pop(1)
0x20e: @@ ClearReplies()
0x20f: Pop(0)
0x210: Push((int) 519437)
0x211: Push((int) -1)
0x212: Push((int) 20604)
0x213: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x214: Pop(3)
0x215: Return(); Pop(0)

0x216: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x217: PushEmpty(bool)
0x218: Call2 0x66b

0x219: Pop(0)
0x21a: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21b: @ lshStopAnimation()
0x21c: Pop(0)
0x21d: GOTO 0x220

0x21e: @ StopAnimation()
0x21f: Pop(0)
0x220: Return(); Pop(0)

0x221: GOTO 0x189

0x222: Return(); Pop(0)

0x223: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x224: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x225: PushEmpty(bool, object, float)
0x226: Stack[-2] = Stack[-12]
0x227: Stack[-1] = (float) 70.0
0x228: Call2 0x511

0x229: Pop(2)
0x22a: Pop(1); Push((bool) Stack[-1] == 0)
0x22b: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22c: Stack[-10] = (int) -2
0x22d: Return(); Pop(8)

0x22e: @ CreateDialog(Stack[-4])
0x22f: Pop(0)
0x230: PushEmpty(int)
0x231: Call2 0x665

0x232: Pop(0)
0x233: @@ SetNPCName(Stack[-1])
0x234: Pop(1)
0x235: PushEmpty(int)
0x236: Call2 0x663

0x237: Pop(0)
0x238: @@ SetNPCDescription(Stack[-1])
0x239: Pop(1)
0x23a: PushEmpty(string)
0x23b: Call2 0x667

0x23c: Pop(0)
0x23d: @@ SetPhoto(Stack[-1])
0x23e: Pop(1)
0x23f: PushEmpty(string)
0x240: Call2 0x669

0x241: Pop(0)
0x242: @@ SetPhoto2(Stack[-1])
0x243: Pop(1)
0x244: PushEmpty(int)
0x245: Call2 0x67f

0x246: Pop(0)
0x247: @@ SetPlayerName(Stack[-1])
0x248: Pop(1)
0x249: Stack[-2] = (int) -1
0x24a: @ IsOverrideActive(Stack[-3])
0x24b: Pop(0)
0x24c: Push(Stack[-3])
0x24d: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24e: Stack[-10] = (int) -2
0x24f: Return(); Pop(8)

0x250: @ DoDialog(Stack[-4])
0x251: Pop(0)
0x252: PushEmpty(bool, object)
0x253: PushEmpty(object)
0x254: Call2 0x627

0x255: Stack[-2] = Stack[-1]
0x256: Pop(1)
0x257: Call2 0x568

0x258: Pop(2)
0x259: PushEmpty(object, object)
0x25a: Stack[-2] = Stack[-11]
0x25b: Stack[-1] = Stack[-6]
0x25c: Push(-2, 4); TaskCall(5)
0x25d: Call2 0x274

0x25e: Pop(-2, 4); TaskReturn
0x25f: Pop(2)
0x260: @@ IsDialogEnd(Stack[-1])
0x261: Pop(0)
0x262: Pop(0); Push((bool) Stack[-1] == 0)
0x263: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x264: @ sync()
0x265: Pop(0)
0x266: @@ IsDialogEnd(Stack[-1])
0x267: Pop(0)
0x268: GOTO 0x262

0x269: PushEmpty(object)
0x26a: Stack[-1] = Stack[-10]
0x26b: Call2 0x556

0x26c: Pop(1)
0x26d: @ StopDialog(Stack[-4])
0x26e: Pop(0)
0x26f: @@ GetReturnValue(Stack[-2])
0x270: Pop(0)
0x271: Stack[-10] = Stack[-2]
0x272: Return(); Pop(8)

0x273: Stack[-4] = 0
0x274: PushEmpty()
0x275: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x276: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x277: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x278: Push((int) 1)
0x279: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x27a: PushEmpty(string)
0x27b: Stack[-1] = "Neutral"
0x27c: Call2 0x2b3

0x27d: Pop(1)
0x27e: Push((int) 535231)
0x27f: @@ SetMessage(Stack[-1])
0x280: Pop(1)
0x281: @@ ClearReplies()
0x282: Pop(0)
0x283: Push((int) 535232)
0x284: Push((int) 36953)
0x285: Push((int) 36907)
0x286: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x287: Pop(3)
0x288: Push((int) 535233)
0x289: Push((int) -1)
0x28a: Push((int) 36908)
0x28b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28c: Pop(3)
0x28d: Push((int) 535280)
0x28e: Push((int) -1)
0x28f: Push((int) 36956)
0x290: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x291: Pop(3)
0x292: GOTO 0x295

0x293: Return(); Pop(0)

0x294: GOTO 0x278

0x295: PushEmpty(bool)
0x296: Call2 0x66b

0x297: Pop(0)
0x298: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x299: @ lshWaitForAnimEnd()
0x29a: Pop(0)
0x29b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x29c: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29d: GOTO 0x2a3

0x29e: PushEmpty(string)
0x29f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2a0: Call2 0x5f2

0x2a1: Pop(1)
0x2a2: GOTO 0x299

0x2a3: GOTO 0x2b2

0x2a4: Push("all")
0x2a5: Push("idle")
0x2a6: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a7: Pop(2)
0x2a8: @ WaitForAnimEnd()
0x2a9: Pop(0)
0x2aa: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: GOTO 0x2b2

0x2ad: Push("all")
0x2ae: Push("idle")
0x2af: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b0: Pop(2)
0x2b1: GOTO 0x2a8

0x2b2: Return(); Pop(0)

0x2b3: PushEmpty()
0x2b4: PushEmpty(bool)
0x2b5: Call2 0x66b

0x2b6: Pop(0)
0x2b7: Pop(1); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: Return(); Pop(0)

0x2ba: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2bc: Return(); Pop(0)

0x2bd: PushEmpty(string, bool)
0x2be: Stack[-2] = Stack[-3]
0x2bf: Push("")
0x2c0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c2: Stack[-1] = (bool) 0
0x2c3: GOTO 0x2c5

0x2c4: Stack[-1] = (bool) 1
0x2c5: Call2 0x602

0x2c6: Pop(2)
0x2c7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2c8: Return(); Pop(0)

0x2c9: PushEmpty()
0x2ca: Push((int) 1)
0x2cb: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x2cc: PushEmpty()
0x2cd: Call2 0x620

0x2ce: Pop(0)
0x2cf: Push((int) 36906)
0x2d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2d2: PushEmpty(string)
0x2d3: Stack[-1] = "Neutral"
0x2d4: Call2 0x2b3

0x2d5: Pop(1)
0x2d6: Push((int) 535231)
0x2d7: @@ SetMessage(Stack[-1])
0x2d8: Pop(1)
0x2d9: @@ ClearReplies()
0x2da: Pop(0)
0x2db: Push((int) 535232)
0x2dc: Push((int) 36953)
0x2dd: Push((int) 36907)
0x2de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2df: Pop(3)
0x2e0: Push((int) 535233)
0x2e1: Push((int) -1)
0x2e2: Push((int) 36908)
0x2e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e4: Pop(3)
0x2e5: Push((int) 535280)
0x2e6: Push((int) -1)
0x2e7: Push((int) 36956)
0x2e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e9: Pop(3)
0x2ea: Return(); Pop(0)

0x2eb: Push((int) 36953)
0x2ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ed: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x2ee: PushEmpty(string)
0x2ef: Stack[-1] = "Neutral"
0x2f0: Call2 0x2b3

0x2f1: Pop(1)
0x2f2: Push((int) 535277)
0x2f3: @@ SetMessage(Stack[-1])
0x2f4: Pop(1)
0x2f5: @@ ClearReplies()
0x2f6: Pop(0)
0x2f7: Push((int) 535278)
0x2f8: Push((int) 36957)
0x2f9: Push((int) 36954)
0x2fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fb: Pop(3)
0x2fc: Push((int) 535279)
0x2fd: Push((int) 36957)
0x2fe: Push((int) 36955)
0x2ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x300: Pop(3)
0x301: Return(); Pop(0)

0x302: Push((int) 36957)
0x303: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x305: PushEmpty(string)
0x306: Stack[-1] = "Neutral"
0x307: Call2 0x2b3

0x308: Pop(1)
0x309: Push((int) 535281)
0x30a: @@ SetMessage(Stack[-1])
0x30b: Pop(1)
0x30c: @@ ClearReplies()
0x30d: Pop(0)
0x30e: Push((int) 535282)
0x30f: Push((int) -1)
0x310: Push((int) 36958)
0x311: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x312: Pop(3)
0x313: Push((int) 535283)
0x314: Push((int) -1)
0x315: Push((int) 36959)
0x316: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x317: Pop(3)
0x318: Return(); Pop(0)

0x319: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x31a: PushEmpty(bool)
0x31b: Call2 0x66b

0x31c: Pop(0)
0x31d: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31e: @ lshStopAnimation()
0x31f: Pop(0)
0x320: GOTO 0x323

0x321: @ StopAnimation()
0x322: Pop(0)
0x323: Return(); Pop(0)

0x324: GOTO 0x2ca

0x325: Return(); Pop(0)

0x326: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x327: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x328: PushEmpty(bool, object, float)
0x329: Stack[-2] = Stack[-12]
0x32a: Stack[-1] = (float) 70.0
0x32b: Call2 0x511

0x32c: Pop(2)
0x32d: Pop(1); Push((bool) Stack[-1] == 0)
0x32e: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32f: Stack[-10] = (int) -2
0x330: Return(); Pop(8)

0x331: @ CreateDialog(Stack[-4])
0x332: Pop(0)
0x333: PushEmpty(int)
0x334: Call2 0x665

0x335: Pop(0)
0x336: @@ SetNPCName(Stack[-1])
0x337: Pop(1)
0x338: PushEmpty(int)
0x339: Call2 0x663

0x33a: Pop(0)
0x33b: @@ SetNPCDescription(Stack[-1])
0x33c: Pop(1)
0x33d: PushEmpty(string)
0x33e: Call2 0x667

0x33f: Pop(0)
0x340: @@ SetPhoto(Stack[-1])
0x341: Pop(1)
0x342: PushEmpty(string)
0x343: Call2 0x669

0x344: Pop(0)
0x345: @@ SetPhoto2(Stack[-1])
0x346: Pop(1)
0x347: PushEmpty(int)
0x348: Call2 0x67f

0x349: Pop(0)
0x34a: @@ SetPlayerName(Stack[-1])
0x34b: Pop(1)
0x34c: Stack[-2] = (int) -1
0x34d: @ IsOverrideActive(Stack[-3])
0x34e: Pop(0)
0x34f: Push(Stack[-3])
0x350: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x351: Stack[-10] = (int) -2
0x352: Return(); Pop(8)

0x353: @ DoDialog(Stack[-4])
0x354: Pop(0)
0x355: PushEmpty(bool, object)
0x356: PushEmpty(object)
0x357: Call2 0x627

0x358: Stack[-2] = Stack[-1]
0x359: Pop(1)
0x35a: Call2 0x568

0x35b: Pop(2)
0x35c: PushEmpty(object, object)
0x35d: Stack[-2] = Stack[-11]
0x35e: Stack[-1] = Stack[-6]
0x35f: Push(-2, 4); TaskCall(7)
0x360: Call2 0x377

0x361: Pop(-2, 4); TaskReturn
0x362: Pop(2)
0x363: @@ IsDialogEnd(Stack[-1])
0x364: Pop(0)
0x365: Pop(0); Push((bool) Stack[-1] == 0)
0x366: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x367: @ sync()
0x368: Pop(0)
0x369: @@ IsDialogEnd(Stack[-1])
0x36a: Pop(0)
0x36b: GOTO 0x365

0x36c: PushEmpty(object)
0x36d: Stack[-1] = Stack[-10]
0x36e: Call2 0x556

0x36f: Pop(1)
0x370: @ StopDialog(Stack[-4])
0x371: Pop(0)
0x372: @@ GetReturnValue(Stack[-2])
0x373: Pop(0)
0x374: Stack[-10] = Stack[-2]
0x375: Return(); Pop(8)

0x376: Stack[-4] = 0
0x377: PushEmpty()
0x378: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x379: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x37a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x37b: Push((int) 1)
0x37c: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x37d: PushEmpty(string)
0x37e: Stack[-1] = "Neutral"
0x37f: Call2 0x3b1

0x380: Pop(1)
0x381: Push((int) 540554)
0x382: @@ SetMessage(Stack[-1])
0x383: Pop(1)
0x384: @@ ClearReplies()
0x385: Pop(0)
0x386: Push((int) 540555)
0x387: Push((int) -1)
0x388: Push((int) 42564)
0x389: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38a: Pop(3)
0x38b: Push((int) 540794)
0x38c: Push((int) -1)
0x38d: Push((int) 42843)
0x38e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38f: Pop(3)
0x390: GOTO 0x393

0x391: Return(); Pop(0)

0x392: GOTO 0x37b

0x393: PushEmpty(bool)
0x394: Call2 0x66b

0x395: Pop(0)
0x396: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x397: @ lshWaitForAnimEnd()
0x398: Pop(0)
0x399: Push( Stack[3 + Tasks[-1].StackPointer] )
0x39a: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x39b: GOTO 0x3a1

0x39c: PushEmpty(string)
0x39d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x39e: Call2 0x5f2

0x39f: Pop(1)
0x3a0: GOTO 0x397

0x3a1: GOTO 0x3b0

0x3a2: Push("all")
0x3a3: Push("idle")
0x3a4: @ PlayAnimation(Stack[-2], Stack[-1])
0x3a5: Pop(2)
0x3a6: @ WaitForAnimEnd()
0x3a7: Pop(0)
0x3a8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3aa: GOTO 0x3b0

0x3ab: Push("all")
0x3ac: Push("idle")
0x3ad: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ae: Pop(2)
0x3af: GOTO 0x3a6

0x3b0: Return(); Pop(0)

0x3b1: PushEmpty()
0x3b2: PushEmpty(bool)
0x3b3: Call2 0x66b

0x3b4: Pop(0)
0x3b5: Pop(1); Push((bool) Stack[-1] == 0)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b7: Return(); Pop(0)

0x3b8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3ba: Return(); Pop(0)

0x3bb: PushEmpty(string, bool)
0x3bc: Stack[-2] = Stack[-3]
0x3bd: Push("")
0x3be: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c0: Stack[-1] = (bool) 0
0x3c1: GOTO 0x3c3

0x3c2: Stack[-1] = (bool) 1
0x3c3: Call2 0x602

0x3c4: Pop(2)
0x3c5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3c6: Return(); Pop(0)

0x3c7: PushEmpty()
0x3c8: Push((int) 1)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ca: PushEmpty()
0x3cb: Call2 0x620

0x3cc: Pop(0)
0x3cd: Push((int) 42563)
0x3ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3d0: PushEmpty(string)
0x3d1: Stack[-1] = "Neutral"
0x3d2: Call2 0x3b1

0x3d3: Pop(1)
0x3d4: Push((int) 540554)
0x3d5: @@ SetMessage(Stack[-1])
0x3d6: Pop(1)
0x3d7: @@ ClearReplies()
0x3d8: Pop(0)
0x3d9: Push((int) 540555)
0x3da: Push((int) -1)
0x3db: Push((int) 42564)
0x3dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dd: Pop(3)
0x3de: Push((int) 540794)
0x3df: Push((int) -1)
0x3e0: Push((int) 42843)
0x3e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e2: Pop(3)
0x3e3: Return(); Pop(0)

0x3e4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3e5: PushEmpty(bool)
0x3e6: Call2 0x66b

0x3e7: Pop(0)
0x3e8: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3e9: @ lshStopAnimation()
0x3ea: Pop(0)
0x3eb: GOTO 0x3ee

0x3ec: @ StopAnimation()
0x3ed: Pop(0)
0x3ee: Return(); Pop(0)

0x3ef: GOTO 0x3c8

0x3f0: Return(); Pop(0)

0x3f1: PushEmpty()
0x3f2: Call2 0x3f5

0x3f3: Pop(0)
0x3f4: Return(); Pop(0)

0x3f5: PushEmpty(bool)
0x3f6: Call2 0x50c

0x3f7: Pop(0)
0x3f8: Pop(1); Push((bool) Stack[-1] == 0)
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: @ Hold()
0x3fb: Pop(0)
0x3fc: @ GetDirection(Stack[-0])
0x3fd: Pop(0)
0x3fe: PushEmpty()
0x3ff: Call2 0x4a5

0x400: Pop(0)
0x401: GOTO 0x3fe

0x402: Return(); Pop(0)

0x403: PushEmpty(object, object)
0x404: Push("player")
0x405: @ FindActor(Stack[-2], Stack[-1])
0x406: Pop(1)
0x407: Pop(0); Push((bool) Stack[-1] == 0)
0x408: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x409: Stack[-3] = (bool) 0
0x40a: Return(); Pop(2)

0x40b: PushEmpty(bool, object)
0x40c: Stack[-1] = Stack[-3]
0x40d: Call2 0x503

0x40e: Stack[-5] = Stack[-2]
0x40f: Pop(2)
0x410: Return(); Pop(2)

0x411: Stack[-1] = 0
0x412: Push(CvectorIndex(Stack[-0], 0))
0x413: Push(CvectorIndex(Stack[-0], 2))
0x414: @ RotateAsync(Stack[-2], Stack[-1])
0x415: Pop(2)
0x416: Return(); Pop(0)

0x417: PushEmpty(object, bool, object, bool)
0x418: Push("player")
0x419: @ FindActor(Stack[-3], Stack[-1])
0x41a: Pop(1)
0x41b: Pop(0); Push((bool) Stack[-2] == 0)
0x41c: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41d: Stack[-5] = (bool) 0
0x41e: Return(); Pop(4)

0x41f: PushEmpty(float, object)
0x420: Stack[-1] = Stack[-4]
0x421: Call2 0x4f1

0x422: Pop(1)
0x423: Push((float)90000.0)
0x424: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x425: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x426: Stack[-5] = (bool) 0
0x427: Return(); Pop(4)

0x428: @ CanSee(Stack[-1], Stack[-2])
0x429: Pop(0)
0x42a: Stack[-5] = Stack[-1]
0x42b: Return(); Pop(4)

0x42c: Stack[-2] = 0
0x42d: PushEmpty(float, float)
0x42e: Push((int) 8)
0x42f: Push((int) 16)
0x430: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x431: Pop(2)
0x432: Push((int) 10)
0x433: @ SetTimer(Stack[-1], Stack[-2])
0x434: Pop(1)
0x435: Return(); Pop(2)

0x436: Push((int) 10)
0x437: @ KillTimer(Stack[-1])
0x438: Pop(1)
0x439: Return(); Pop(0)

0x43a: PushEmpty()
0x43b: Push((int) 10)
0x43c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x43d: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x43e: PushEmpty()
0x43f: Call2 0x436

0x440: Pop(0)
0x441: PushEmpty(bool)
0x442: Stack[-1] = (bool) 0
0x443: PushEmpty(bool)
0x444: Call2 0x50c

0x445: Pop(0)
0x446: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x447: PushEmpty(bool)
0x448: Call2 0x417

0x449: Pop(0)
0x44a: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x44b: Stack[-1] = (bool) 1
0x44c: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x44d: PushEmpty(bool)
0x44e: Call2 0x403

0x44f: Pop(0)
0x450: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x451: PushEmpty(bool, object)
0x452: PushEmpty(object)
0x453: Call2 0x627

0x454: Stack[-2] = Stack[-1]
0x455: Pop(1)
0x456: Call2 0x5a2

0x457: Pop(2)
0x458: GOTO 0x45f

0x459: PushEmpty()
0x45a: Call2 0x412

0x45b: Pop(0)
0x45c: PushEmpty()
0x45d: Call2 0x42d

0x45e: Pop(0)
0x45f: Return(); Pop(0)

0x460: PushEmpty()
0x461: Call2 0x4ec

0x462: Pop(0)
0x463: PushEmpty()
0x464: Call2 0x436

0x465: Pop(0)
0x466: @ lshStopSpeech()
0x467: Pop(0)
0x468: @ lshStopAnimation()
0x469: Pop(0)
0x46a: @ StopAsync()
0x46b: Pop(0)
0x46c: @ Hold()
0x46d: Pop(0)
0x46e: Return(); Pop(0)

0x46f: @ StopGroup0()
0x470: Pop(0)
0x471: PushEmpty()
0x472: Call2 0x436

0x473: Pop(0)
0x474: PushEmpty(string)
0x475: Stack[-1] = "Neutral"
0x476: Call2 0x5f2

0x477: Pop(1)
0x478: PushEmpty()
0x479: Call2 0x42d

0x47a: Pop(0)
0x47b: Return(); Pop(0)

0x47c: PushEmpty()
0x47d: Push(Stack[-1])
0x47e: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x47f: PushEmpty()
0x480: Call2 0x42d

0x481: Pop(0)
0x482: GOTO 0x487

0x483: PushEmpty(string)
0x484: Stack[-1] = "Neutral"
0x485: Call2 0x5f2

0x486: Pop(1)
0x487: Return(); Pop(0)

0x488: PushEmpty(bool, bool)
0x489: @ IsOverrideActive(Stack[-1])
0x48a: Pop(0)
0x48b: Pop(0); Push((bool) Stack[-1] == 0)
0x48c: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x48d: EventDisable(0)
0x48e: PushEmpty()
0x48f: Call2 0x4ec

0x490: Pop(0)
0x491: PushEmpty(bool, object)
0x492: Stack[-1] = Stack[-5]
0x493: Call2 0x503

0x494: Pop(2)
0x495: EventEnable(0)
0x496: PushEmpty(object)
0x497: Stack[-1] = Stack[-4]
0x498: Call2 0x690

0x499: Pop(1)
0x49a: PushEmpty(string)
0x49b: Stack[-1] = "Neutral"
0x49c: Call2 0x5f2

0x49d: Pop(1)
0x49e: PushEmpty()
0x49f: Call2 0x436

0x4a0: Pop(0)
0x4a1: PushEmpty()
0x4a2: Call2 0x42d

0x4a3: Pop(0)
0x4a4: Return(); Pop(2)

0x4a5: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x4a6: @ WaitForAnimEnd()
0x4a7: Pop(0)
0x4a8: PushEmpty(bool)
0x4a9: Call2 0x50c

0x4aa: Pop(0)
0x4ab: Pop(1); Push((bool) Stack[-1] == 0)
0x4ac: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4ad: Return(); Pop(12)

0x4ae: PushEmpty(int)
0x4af: Call2 0x652

0x4b0: Stack[-7] = Stack[-1]
0x4b1: Pop(1)
0x4b2: Stack[-5] = (int) 0
0x4b3: PushEmpty(bool)
0x4b4: Stack[-1] = (bool) 0
0x4b5: Push((int) 5)
0x4b6: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4b8: PushEmpty(bool)
0x4b9: Call2 0x50c

0x4ba: Pop(0)
0x4bb: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4bc: Stack[-1] = (bool) 1
0x4bd: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4be: Pop(0); Push((bool) Stack[-6] == 0)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c0: Push((int) 3)
0x4c1: @ Sleep(Stack[-1], Stack[-5])
0x4c2: Pop(1)
0x4c3: Pop(0); Push((bool) Stack[-4] == 0)
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c5: GOTO 0x4e7

0x4c6: GOTO 0x4dc

0x4c7: @ irand(Stack[-3], Stack[-6])
0x4c8: Pop(0)
0x4c9: Push((int) 5)
0x4ca: @ irand(Stack[-3], Stack[-1])
0x4cb: Pop(1)
0x4cc: Push((int) 0)
0x4cd: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4cf: Stack[-3] = (int) 0
0x4d0: Push("all")
0x4d1: PushEmpty(string, int)
0x4d2: Stack[-1] = Stack[-6]
0x4d3: Call2 0x64b

0x4d4: Pop(1)
0x4d5: @ PlayAnimation(Stack[-2], Stack[-1])
0x4d6: Pop(2)
0x4d7: @ WaitForAnimEnd(Stack[-1])
0x4d8: Pop(0)
0x4d9: Pop(0); Push((bool) Stack[-1] == 0)
0x4da: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4db: GOTO 0x4e7

0x4dc: PushEmpty(bool)
0x4dd: Call2 0x4ea

0x4de: Pop(0)
0x4df: Pop(1); Push((bool) Stack[-1] == 0)
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4e1: GOTO 0x4e7

0x4e2: @ ResetAAS()
0x4e3: Pop(0)
0x4e4: Push((int) 1)
0x4e5: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x4e6: GOTO 0x4b3

0x4e7: @ ResetAAS()
0x4e8: Pop(0)
0x4e9: Return(); Pop(12)

0x4ea: Stack[-1] = (bool) 1
0x4eb: Return(); Pop(0)

0x4ec: @ StopAnimation()
0x4ed: Pop(0)
0x4ee: @ StopGroup0()
0x4ef: Pop(0)
0x4f0: Return(); Pop(0)

0x4f1: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4f2: @ GetPosition(Stack[-3])
0x4f3: Pop(0)
0x4f4: @@ GetPosition(Stack[-2])
0x4f5: Pop(0)
0x4f6: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x4f7: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x4f8: Return(); Pop(6)

0x4f9: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x4fa: @ GetPosition(Stack[-3])
0x4fb: Pop(0)
0x4fc: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x4fd: Push(CvectorIndex(Stack[-2], 0))
0x4fe: Push(CvectorIndex(Stack[-3], 2))
0x4ff: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x500: Pop(2)
0x501: Stack[-8] = Stack[-1]
0x502: Return(); Pop(6)

0x503: PushEmpty(cvector, cvector)
0x504: @@ GetPosition(Stack[-1])
0x505: Pop(0)
0x506: PushEmpty(bool, cvector)
0x507: Stack[-1] = Stack[-3]
0x508: Call2 0x4f9

0x509: Stack[-6] = Stack[-2]
0x50a: Pop(2)
0x50b: Return(); Pop(2)

0x50c: PushEmpty(bool, bool)
0x50d: @ IsLoaded(Stack[-1])
0x50e: Pop(0)
0x50f: Stack[-3] = Stack[-1]
0x510: Return(); Pop(2)

0x511: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x512: @@ GetPosition(Stack[-8])
0x513: Pop(0)
0x514: @@ GetEyesHeight(Stack[-9])
0x515: Pop(0)
0x516: Push(CvectorIndex(Stack[-8], 1))
0x517: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x518: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x519: @ GetPosition(Stack[-7])
0x51a: Pop(0)
0x51b: @ GetEyesHeight(Stack[-9])
0x51c: Pop(0)
0x51d: Push(CvectorIndex(Stack[-7], 1))
0x51e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x51f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x520: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x521: Push(CvectorIndex(Stack[-6], 1))
0x522: Stack[-1] = (int) 0
0x523: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x524: Pop(0); Push(Stack[-6] | Stack[-6]);
0x525: Pop(1); Push(Sqrt(Stack[-1]))
0x526: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x527: Stack[-5] = -Stack[-6]; Pop(0);
0x528: Pop(0); Push(Stack[-6] * Stack[-19]);
0x529: PushEmpty(cvector, cvector)
0x52a: Push(CVector(0.0, 1.0, 0.0))
0x52b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x52c: Call2 0x62d

0x52d: Pop(1)
0x52e: Push((int) 25)
0x52f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x530: Pop(2); Push(Stack[-2] + Stack[-1]);
0x531: Push(CVector(0.0, 10.0, 0.0))
0x532: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x533: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x534: @ IsOverrideActive(Stack[-2])
0x535: Pop(0)
0x536: Push(Stack[-2])
0x537: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x538: Stack[-21] = (bool) 0
0x539: Return(); Pop(18)

0x53a: @ StopWorld()
0x53b: Pop(0)
0x53c: Push((bool) 1)
0x53d: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x53e: Pop(1)
0x53f: Push(CvectorIndex(Stack[-4], 0))
0x540: Push(CvectorIndex(Stack[-5], 2))
0x541: @ Rotate(Stack[-2], Stack[-1])
0x542: Pop(2)
0x543: PushEmpty(bool)
0x544: Call2 0x66b

0x545: Pop(0)
0x546: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x547: GOTO 0x550

0x548: Push("head")
0x549: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x54a: Pop(1)
0x54b: Push(Stack[-1])
0x54c: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54d: Push("head")
0x54e: @ LookAsyncCamera(Stack[-1])
0x54f: Pop(1)
0x550: @ CameraWaitForPlayFinish()
0x551: Pop(0)
0x552: @ ResumeWorld()
0x553: Pop(0)
0x554: Stack[-21] = (bool) 1
0x555: Return(); Pop(18)

0x556: PushEmpty(bool, bool)
0x557: Push((bool) 1)
0x558: @ CameraSwitchToNormal(Stack[-1])
0x559: Pop(1)
0x55a: PushEmpty(bool)
0x55b: Call2 0x66b

0x55c: Pop(0)
0x55d: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55e: GOTO 0x567

0x55f: Push("head")
0x560: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x561: Pop(1)
0x562: Push(Stack[-1])
0x563: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x564: Push("head")
0x565: @ UnlookAsync(Stack[-1])
0x566: Pop(1)
0x567: Return(); Pop(2)

0x568: PushEmpty(int, int, int, int)
0x569: Push("voice_common")
0x56a: @ GetVariable(Stack[-1], Stack[-3])
0x56b: Pop(1)
0x56c: Push(Stack[-2])
0x56d: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x56e: PushEmpty(bool, object)
0x56f: Stack[-1] = Stack[-7]
0x570: Call2 0x5a2

0x571: Pop(1)
0x572: Pop(1); Push((bool) Stack[-1] == 0)
0x573: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x574: PushEmpty(bool, object)
0x575: Stack[-1] = Stack[-7]
0x576: Call2 0x5c7

0x577: Pop(1)
0x578: Pop(1); Push((bool) Stack[-1] == 0)
0x579: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x57a: Stack[-6] = (bool) 0
0x57b: Return(); Pop(4)

0x57c: Push((int) 2)
0x57d: @ irand(Stack[-2], Stack[-1])
0x57e: Pop(1)
0x57f: Push(Stack[-1])
0x580: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x581: Push("voice_common")
0x582: Push((int) 1)
0x583: Pop(1); Push(Stack[-4] + Stack[-1]);
0x584: Push((int) 3)
0x585: Pop(2); Push(Stack[-2] % Stack[-1]);
0x586: @ SetVariable(Stack[-2], Stack[-1])
0x587: Pop(2)
0x588: GOTO 0x58d

0x589: Push("voice_common")
0x58a: Push((int) 0)
0x58b: @ SetVariable(Stack[-2], Stack[-1])
0x58c: Pop(2)
0x58d: GOTO 0x5a0

0x58e: PushEmpty(bool, object)
0x58f: Stack[-1] = Stack[-7]
0x590: Call2 0x5c7

0x591: Pop(1)
0x592: Pop(1); Push((bool) Stack[-1] == 0)
0x593: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x594: PushEmpty(bool, object)
0x595: Stack[-1] = Stack[-7]
0x596: Call2 0x5a2

0x597: Pop(1)
0x598: Pop(1); Push((bool) Stack[-1] == 0)
0x599: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x59a: Stack[-6] = (bool) 0
0x59b: Return(); Pop(4)

0x59c: Push("voice_common")
0x59d: Push((int) 1)
0x59e: @ SetVariable(Stack[-2], Stack[-1])
0x59f: Pop(2)
0x5a0: Stack[-6] = (bool) 1
0x5a1: Return(); Pop(4)

0x5a2: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5a3: Stack[-5] = "c"
0x5a4: Stack[-4] = (int) 0
0x5a5: Push((int) 1)
0x5a6: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5a7: Push((int) 1)
0x5a8: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5a9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5aa: @@ HasProperty(Stack[-1], Stack[-4])
0x5ab: Pop(1)
0x5ac: Pop(0); Push((bool) Stack[-3] == 0)
0x5ad: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5ae: GOTO 0x5b2

0x5af: Push((int) 1)
0x5b0: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5b1: GOTO 0x5a5

0x5b2: Pop(0); Push((bool) Stack[-4] == 0)
0x5b3: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b4: Stack[-12] = (bool) 0
0x5b5: Return(); Pop(10)

0x5b6: Stack[-2] = (int) 0
0x5b7: Push((int) 1)
0x5b8: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5b9: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5ba: @ irand(Stack[-2], Stack[-4])
0x5bb: Pop(0)
0x5bc: Push((int) 1)
0x5bd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5be: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5bf: @@ GetProperty(Stack[-1], Stack[-2])
0x5c0: Pop(1)
0x5c1: PushEmpty(bool, string)
0x5c2: Stack[-1] = Stack[-3]
0x5c3: Call2 0x611

0x5c4: Stack[-14] = Stack[-2]
0x5c5: Pop(2)
0x5c6: Return(); Pop(10)

0x5c7: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5c8: Push("d")
0x5c9: PushEmpty(int)
0x5ca: Call2 0x63c

0x5cb: Pop(0)
0x5cc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5cd: Push("m")
0x5ce: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5cf: Stack[-4] = (int) 0
0x5d0: Push((int) 1)
0x5d1: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5d2: Push((int) 1)
0x5d3: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5d4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5d5: @@ HasProperty(Stack[-1], Stack[-4])
0x5d6: Pop(1)
0x5d7: Pop(0); Push((bool) Stack[-3] == 0)
0x5d8: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d9: GOTO 0x5dd

0x5da: Push((int) 1)
0x5db: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5dc: GOTO 0x5d0

0x5dd: Pop(0); Push((bool) Stack[-4] == 0)
0x5de: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5df: Stack[-12] = (bool) 0
0x5e0: Return(); Pop(10)

0x5e1: Stack[-2] = (int) 0
0x5e2: Push((int) 1)
0x5e3: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5e4: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5e5: @ irand(Stack[-2], Stack[-4])
0x5e6: Pop(0)
0x5e7: Push((int) 1)
0x5e8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5e9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5ea: @@ GetProperty(Stack[-1], Stack[-2])
0x5eb: Pop(1)
0x5ec: PushEmpty(bool, string)
0x5ed: Stack[-1] = Stack[-3]
0x5ee: Call2 0x611

0x5ef: Stack[-14] = Stack[-2]
0x5f0: Pop(2)
0x5f1: Return(); Pop(10)

0x5f2: PushEmpty(bool, float, float, bool, float, float)
0x5f3: @ lshHasAnimation(Stack[-3], Stack[-7])
0x5f4: Pop(0)
0x5f5: Push(Stack[-3])
0x5f6: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5f7: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x5f8: Pop(0)
0x5f9: Push((bool) 0)
0x5fa: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5fb: Pop(1)
0x5fc: GOTO 0x601

0x5fd: Push("Can't find lsh animation : ")
0x5fe: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5ff: @ Trace(Stack[-1])
0x600: Pop(1)
0x601: Return(); Pop(6)

0x602: PushEmpty(bool, float, float, bool, float, float)
0x603: @ lshHasAnimation(Stack[-3], Stack[-8])
0x604: Pop(0)
0x605: Push(Stack[-3])
0x606: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x607: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x608: Pop(0)
0x609: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x60a: Pop(0)
0x60b: GOTO 0x610

0x60c: Push("Can't find lsh animation : ")
0x60d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x60e: @ Trace(Stack[-1])
0x60f: Pop(1)
0x610: Return(); Pop(6)

0x611: PushEmpty(bool, bool)
0x612: PushEmpty(bool)
0x613: Call2 0x66b

0x614: Pop(0)
0x615: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x616: @ lshHasSpeech(Stack[-1], Stack[-3])
0x617: Pop(0)
0x618: Push(Stack[-1])
0x619: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x61a: @ lshPlaySpeech(Stack[-3])
0x61b: Pop(0)
0x61c: Stack[-4] = (bool) 1
0x61d: Return(); Pop(2)

0x61e: Stack[-4] = (bool) 0
0x61f: Return(); Pop(2)

0x620: PushEmpty(bool)
0x621: Call2 0x66b

0x622: Pop(0)
0x623: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x624: @ lshStopSpeech()
0x625: Pop(0)
0x626: Return(); Pop(0)

0x627: PushEmpty(object, object)
0x628: @ self(Stack[-1])
0x629: Pop(0)
0x62a: Stack[-3] = Stack[-1]
0x62b: Return(); Pop(2)

0x62c: Stack[-1] = 0
0x62d: PushEmpty(float, float)
0x62e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x62f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x630: Push((float)0.0)
0x631: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x632: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x633: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x634: Return(); Pop(2)

0x635: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x636: Return(); Pop(2)

0x637: PushEmpty(int, int)
0x638: @ GetVariable(Stack[-3], Stack[-1])
0x639: Pop(0)
0x63a: Stack[-4] = Stack[-1]
0x63b: Return(); Pop(2)

0x63c: PushEmpty(float, float)
0x63d: @ GetGameTime(Stack[-1])
0x63e: Pop(0)
0x63f: Push((int) 1)
0x640: PushEmpty(int)
0x641: Push((int) 24)
0x642: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x643: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x644: Return(); Pop(2)

0x645: PushEmpty()
0x646: PushEmpty(int)
0x647: Call2 0x63c

0x648: Pop(0)
0x649: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x64a: Return(); Pop(0)

0x64b: PushEmpty(string, string)
0x64c: Stack[-1] = "idle"
0x64d: Push(Stack[-3])
0x64e: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x650: Stack[-4] = Stack[-1]
0x651: Return(); Pop(2)

0x652: PushEmpty(int, bool, int, bool)
0x653: Stack[-2] = (int) 0
0x654: Push("all")
0x655: PushEmpty(string, int)
0x656: Stack[-1] = Stack[-5]
0x657: Call2 0x64b

0x658: Pop(1)
0x659: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x65a: Pop(2)
0x65b: Pop(0); Push((bool) Stack[-1] == 0)
0x65c: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x65d: GOTO 0x661

0x65e: Push((int) 1)
0x65f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x660: GOTO 0x654

0x661: Stack[-5] = Stack[-2]
0x662: Return(); Pop(4)

0x663: Stack[-1] = (int) 515550
0x664: Return(); Pop(0)

0x665: Stack[-1] = (int) 502875
0x666: Return(); Pop(0)

0x667: Stack[-1] = "ui/NPC_Petr.png"
0x668: Return(); Pop(0)

0x669: Stack[-1] = "ui/NPC_Petr_b.png"
0x66a: Return(); Pop(0)

0x66b: Stack[-1] = (bool) 1
0x66c: Return(); Pop(0)

0x66d: PushEmpty()
0x66e: Push("oob2Petr1")
0x66f: Push((int) 1)
0x670: @ SetVariable(Stack[-2], Stack[-1])
0x671: Pop(2)
0x672: Return(); Pop(0)

0x673: PushEmpty()
0x674: PushEmpty(int, string)
0x675: Stack[-1] = "oob2Petr1"
0x676: Call2 0x637

0x677: Pop(1)
0x678: Push((int) 0)
0x679: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x67a: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x67b: Stack[-2] = (bool) 1
0x67c: Return(); Pop(0)

0x67d: Stack[-2] = (bool) 0
0x67e: Return(); Pop(0)

0x67f: PushEmpty(int, int)
0x680: Push("branch")
0x681: @ GetVariable(Stack[-1], Stack[-2])
0x682: Pop(1)
0x683: Push((int) 0)
0x684: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x685: IF (Stack[-1] == 0) GOTO 0x689; Pop(1)

0x686: Stack[-3] = (int) 1
0x687: Return(); Pop(2)

0x688: GOTO 0x68e

0x689: Push((int) 1)
0x68a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x68b: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x68c: Stack[-3] = (int) 2
0x68d: Return(); Pop(2)

0x68e: Stack[-3] = (int) 3
0x68f: Return(); Pop(2)

0x690: PushEmpty(int, int, int, int)
0x691: Push("mt_petr")
0x692: @ GetVariable(Stack[-1], Stack[-3])
0x693: Pop(1)
0x694: Pop(0); Push((bool) Stack[-2] == 0)
0x695: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x696: PushEmpty(int, object)
0x697: Stack[-1] = Stack[-7]
0x698: Push(-2, 1); TaskCall(0)
0x699: Call2 0x0

0x69a: Pop(-2, 1); TaskReturn
0x69b: Pop(2)
0x69c: Push("mt_petr")
0x69d: Push((int) 1)
0x69e: @ SetVariable(Stack[-2], Stack[-1])
0x69f: Pop(2)
0x6a0: PushEmpty(bool, int)
0x6a1: Stack[-1] = (int) 2
0x6a2: Call2 0x645

0x6a3: Pop(1)
0x6a4: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x6a5: PushEmpty(int, object)
0x6a6: Stack[-1] = Stack[-7]
0x6a7: Push(-2, 1); TaskCall(2)
0x6a8: Call2 0xe2

0x6a9: Pop(-2, 1); TaskReturn
0x6aa: Pop(2)
0x6ab: Return(); Pop(4)

0x6ac: Push("d12_petr")
0x6ad: @ GetVariable(Stack[-1], Stack[-2])
0x6ae: Pop(1)
0x6af: PushEmpty(bool)
0x6b0: Stack[-1] = (bool) 0
0x6b1: PushEmpty(bool, int)
0x6b2: Stack[-1] = (int) 12
0x6b3: Call2 0x645

0x6b4: Pop(1)
0x6b5: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x6b6: Push(Stack[-2])
0x6b7: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x6b8: Stack[-1] = (bool) 1
0x6b9: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6ba: PushEmpty(int, object)
0x6bb: Stack[-1] = Stack[-7]
0x6bc: Push(-2, 1); TaskCall(4)
0x6bd: Call2 0x223

0x6be: Pop(-2, 1); TaskReturn
0x6bf: Pop(2)
0x6c0: Push("d12_petr")
0x6c1: Push((int) 1)
0x6c2: @ SetVariable(Stack[-2], Stack[-1])
0x6c3: Pop(2)
0x6c4: Return(); Pop(4)

0x6c5: PushEmpty(int, object)
0x6c6: Stack[-1] = Stack[-7]
0x6c7: Push(-2, 1); TaskCall(6)
0x6c8: Call2 0x326

0x6c9: Pop(-2, 1); TaskReturn
0x6ca: Pop(2)
0x6cb: Return(); Pop(4)

