GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

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
	ui/NPC_Mishka.png
	ui/NPC_Mishka_b.png
	branch

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

RunOp = 0x2b0
RunTask = 6

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x188 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x286 Vars = (int, int)
	GTASK_6 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x2fc Vars = (int)
		EVENT_6 Op = 0x322 Vars = ()
		EVENT_5 Op = 0x331 Vars = ()
		EVENT_45 Op = 0x33e Vars = (bool)
		EVENT_0 Op = 0x34a Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x3d3

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x520

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x51e

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x522

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x524

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x528

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
0x31: Call2 0x4e7

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x428

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
0x48: Call2 0x417

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
0x5b: Push((int) 525510)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 525511)
0x61: Push((int) -1)
0x62: Push((int) 26867)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 529288)
0x66: Push((int) 30743)
0x67: Push((int) 30742)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0x526

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x4b2

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
0x8d: Call2 0x526

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
0x9d: Call2 0x4c2

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x4e0

0xa6: Pop(0)
0xa7: Push((int) 26866)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 525510)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 525511)
0xb4: Push((int) -1)
0xb5: Push((int) 26867)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 529288)
0xb9: Push((int) 30743)
0xba: Push((int) 30742)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 30743)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Neutral"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 529289)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 529290)
0xcb: Push((int) -1)
0xcc: Push((int) 30744)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 529291)
0xd0: Push((int) -1)
0xd1: Push((int) 30745)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd6: PushEmpty(bool)
0xd7: Call2 0x526

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
0xe7: Call2 0x3d3

0xe8: Pop(2)
0xe9: Pop(1); Push((bool) Stack[-1] == 0)
0xea: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xeb: Stack[-10] = (int) -2
0xec: Return(); Pop(8)

0xed: @ CreateDialog(Stack[-4])
0xee: Pop(0)
0xef: PushEmpty(int)
0xf0: Call2 0x520

0xf1: Pop(0)
0xf2: @@ SetNPCName(Stack[-1])
0xf3: Pop(1)
0xf4: PushEmpty(int)
0xf5: Call2 0x51e

0xf6: Pop(0)
0xf7: @@ SetNPCDescription(Stack[-1])
0xf8: Pop(1)
0xf9: PushEmpty(string)
0xfa: Call2 0x522

0xfb: Pop(0)
0xfc: @@ SetPhoto(Stack[-1])
0xfd: Pop(1)
0xfe: PushEmpty(string)
0xff: Call2 0x524

0x100: Pop(0)
0x101: @@ SetPhoto2(Stack[-1])
0x102: Pop(1)
0x103: PushEmpty(int)
0x104: Call2 0x528

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
0x113: Call2 0x4e7

0x114: Stack[-2] = Stack[-1]
0x115: Pop(1)
0x116: Call2 0x428

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
0x12a: Call2 0x417

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
0x13d: Push((int) 535284)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: Push((int) 535285)
0x143: Push((int) 36962)
0x144: Push((int) 36961)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Push((int) 535292)
0x148: Push((int) -1)
0x149: Push((int) 36968)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: Push((int) 535293)
0x14d: Push((int) -1)
0x14e: Push((int) 36969)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: GOTO 0x154

0x152: Return(); Pop(0)

0x153: GOTO 0x137

0x154: PushEmpty(bool)
0x155: Call2 0x526

0x156: Pop(0)
0x157: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x158: @ lshWaitForAnimEnd()
0x159: Pop(0)
0x15a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x15b: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15c: GOTO 0x162

0x15d: PushEmpty(string)
0x15e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x15f: Call2 0x4b2

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
0x174: Call2 0x526

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
0x184: Call2 0x4c2

0x185: Pop(2)
0x186: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x187: Return(); Pop(0)

0x188: PushEmpty()
0x189: Push((int) 1)
0x18a: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x18b: PushEmpty()
0x18c: Call2 0x4e0

0x18d: Pop(0)
0x18e: Push((int) 36960)
0x18f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x191: PushEmpty(string)
0x192: Stack[-1] = "Neutral"
0x193: Call2 0x172

0x194: Pop(1)
0x195: Push((int) 535284)
0x196: @@ SetMessage(Stack[-1])
0x197: Pop(1)
0x198: @@ ClearReplies()
0x199: Pop(0)
0x19a: Push((int) 535285)
0x19b: Push((int) 36962)
0x19c: Push((int) 36961)
0x19d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19e: Pop(3)
0x19f: Push((int) 535292)
0x1a0: Push((int) -1)
0x1a1: Push((int) 36968)
0x1a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a3: Pop(3)
0x1a4: Push((int) 535293)
0x1a5: Push((int) -1)
0x1a6: Push((int) 36969)
0x1a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a8: Pop(3)
0x1a9: Return(); Pop(0)

0x1aa: Push((int) 36962)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Neutral"
0x1af: Call2 0x172

0x1b0: Pop(1)
0x1b1: Push((int) 535286)
0x1b2: @@ SetMessage(Stack[-1])
0x1b3: Pop(1)
0x1b4: @@ ClearReplies()
0x1b5: Pop(0)
0x1b6: Push((int) 535287)
0x1b7: Push((int) 36964)
0x1b8: Push((int) 36963)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Push((int) 535291)
0x1bc: Push((int) -1)
0x1bd: Push((int) 36967)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Return(); Pop(0)

0x1c1: Push((int) 36964)
0x1c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1c4: PushEmpty(string)
0x1c5: Stack[-1] = "Neutral"
0x1c6: Call2 0x172

0x1c7: Pop(1)
0x1c8: Push((int) 535288)
0x1c9: @@ SetMessage(Stack[-1])
0x1ca: Pop(1)
0x1cb: @@ ClearReplies()
0x1cc: Pop(0)
0x1cd: Push((int) 535289)
0x1ce: Push((int) -1)
0x1cf: Push((int) 36965)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: Push((int) 535290)
0x1d3: Push((int) -1)
0x1d4: Push((int) 36966)
0x1d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d6: Pop(3)
0x1d7: Return(); Pop(0)

0x1d8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d9: PushEmpty(bool)
0x1da: Call2 0x526

0x1db: Pop(0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1dd: @ lshStopAnimation()
0x1de: Pop(0)
0x1df: GOTO 0x1e2

0x1e0: @ StopAnimation()
0x1e1: Pop(0)
0x1e2: Return(); Pop(0)

0x1e3: GOTO 0x189

0x1e4: Return(); Pop(0)

0x1e5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1e6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1e7: PushEmpty(bool, object, float)
0x1e8: Stack[-2] = Stack[-12]
0x1e9: Stack[-1] = (float) 70.0
0x1ea: Call2 0x3d3

0x1eb: Pop(2)
0x1ec: Pop(1); Push((bool) Stack[-1] == 0)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ee: Stack[-10] = (int) -2
0x1ef: Return(); Pop(8)

0x1f0: @ CreateDialog(Stack[-4])
0x1f1: Pop(0)
0x1f2: PushEmpty(int)
0x1f3: Call2 0x520

0x1f4: Pop(0)
0x1f5: @@ SetNPCName(Stack[-1])
0x1f6: Pop(1)
0x1f7: PushEmpty(int)
0x1f8: Call2 0x51e

0x1f9: Pop(0)
0x1fa: @@ SetNPCDescription(Stack[-1])
0x1fb: Pop(1)
0x1fc: PushEmpty(string)
0x1fd: Call2 0x522

0x1fe: Pop(0)
0x1ff: @@ SetPhoto(Stack[-1])
0x200: Pop(1)
0x201: PushEmpty(string)
0x202: Call2 0x524

0x203: Pop(0)
0x204: @@ SetPhoto2(Stack[-1])
0x205: Pop(1)
0x206: PushEmpty(int)
0x207: Call2 0x528

0x208: Pop(0)
0x209: @@ SetPlayerName(Stack[-1])
0x20a: Pop(1)
0x20b: Stack[-2] = (int) -1
0x20c: @ IsOverrideActive(Stack[-3])
0x20d: Pop(0)
0x20e: Push(Stack[-3])
0x20f: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x210: Stack[-10] = (int) -2
0x211: Return(); Pop(8)

0x212: @ DoDialog(Stack[-4])
0x213: Pop(0)
0x214: PushEmpty(bool, object)
0x215: PushEmpty(object)
0x216: Call2 0x4e7

0x217: Stack[-2] = Stack[-1]
0x218: Pop(1)
0x219: Call2 0x428

0x21a: Pop(2)
0x21b: PushEmpty(object, object)
0x21c: Stack[-2] = Stack[-11]
0x21d: Stack[-1] = Stack[-6]
0x21e: Push(-2, 4); TaskCall(5)
0x21f: Call2 0x236

0x220: Pop(-2, 4); TaskReturn
0x221: Pop(2)
0x222: @@ IsDialogEnd(Stack[-1])
0x223: Pop(0)
0x224: Pop(0); Push((bool) Stack[-1] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x226: @ sync()
0x227: Pop(0)
0x228: @@ IsDialogEnd(Stack[-1])
0x229: Pop(0)
0x22a: GOTO 0x224

0x22b: PushEmpty(object)
0x22c: Stack[-1] = Stack[-10]
0x22d: Call2 0x417

0x22e: Pop(1)
0x22f: @ StopDialog(Stack[-4])
0x230: Pop(0)
0x231: @@ GetReturnValue(Stack[-2])
0x232: Pop(0)
0x233: Stack[-10] = Stack[-2]
0x234: Return(); Pop(8)

0x235: Stack[-4] = 0
0x236: PushEmpty()
0x237: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x238: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x239: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x23a: Push((int) 1)
0x23b: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x23c: PushEmpty(string)
0x23d: Stack[-1] = "Neutral"
0x23e: Call2 0x270

0x23f: Pop(1)
0x240: Push((int) 540539)
0x241: @@ SetMessage(Stack[-1])
0x242: Pop(1)
0x243: @@ ClearReplies()
0x244: Pop(0)
0x245: Push((int) 540540)
0x246: Push((int) -1)
0x247: Push((int) 42549)
0x248: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x249: Pop(3)
0x24a: Push((int) 540799)
0x24b: Push((int) -1)
0x24c: Push((int) 42848)
0x24d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24e: Pop(3)
0x24f: GOTO 0x252

0x250: Return(); Pop(0)

0x251: GOTO 0x23a

0x252: PushEmpty(bool)
0x253: Call2 0x526

0x254: Pop(0)
0x255: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x256: @ lshWaitForAnimEnd()
0x257: Pop(0)
0x258: Push( Stack[3 + Tasks[-1].StackPointer] )
0x259: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x25a: GOTO 0x260

0x25b: PushEmpty(string)
0x25c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x25d: Call2 0x4b2

0x25e: Pop(1)
0x25f: GOTO 0x256

0x260: GOTO 0x26f

0x261: Push("all")
0x262: Push("idle")
0x263: @ PlayAnimation(Stack[-2], Stack[-1])
0x264: Pop(2)
0x265: @ WaitForAnimEnd()
0x266: Pop(0)
0x267: Push( Stack[3 + Tasks[-1].StackPointer] )
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: GOTO 0x26f

0x26a: Push("all")
0x26b: Push("idle")
0x26c: @ PlayAnimation(Stack[-2], Stack[-1])
0x26d: Pop(2)
0x26e: GOTO 0x265

0x26f: Return(); Pop(0)

0x270: PushEmpty()
0x271: PushEmpty(bool)
0x272: Call2 0x526

0x273: Pop(0)
0x274: Pop(1); Push((bool) Stack[-1] == 0)
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: Return(); Pop(0)

0x277: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x278: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x279: Return(); Pop(0)

0x27a: PushEmpty(string, bool)
0x27b: Stack[-2] = Stack[-3]
0x27c: Push("")
0x27d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27f: Stack[-1] = (bool) 0
0x280: GOTO 0x282

0x281: Stack[-1] = (bool) 1
0x282: Call2 0x4c2

0x283: Pop(2)
0x284: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x285: Return(); Pop(0)

0x286: PushEmpty()
0x287: Push((int) 1)
0x288: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x289: PushEmpty()
0x28a: Call2 0x4e0

0x28b: Pop(0)
0x28c: Push((int) 42548)
0x28d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x28f: PushEmpty(string)
0x290: Stack[-1] = "Neutral"
0x291: Call2 0x270

0x292: Pop(1)
0x293: Push((int) 540539)
0x294: @@ SetMessage(Stack[-1])
0x295: Pop(1)
0x296: @@ ClearReplies()
0x297: Pop(0)
0x298: Push((int) 540540)
0x299: Push((int) -1)
0x29a: Push((int) 42549)
0x29b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29c: Pop(3)
0x29d: Push((int) 540799)
0x29e: Push((int) -1)
0x29f: Push((int) 42848)
0x2a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a1: Pop(3)
0x2a2: Return(); Pop(0)

0x2a3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2a4: PushEmpty(bool)
0x2a5: Call2 0x526

0x2a6: Pop(0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a8: @ lshStopAnimation()
0x2a9: Pop(0)
0x2aa: GOTO 0x2ad

0x2ab: @ StopAnimation()
0x2ac: Pop(0)
0x2ad: Return(); Pop(0)

0x2ae: GOTO 0x287

0x2af: Return(); Pop(0)

0x2b0: Push(GlobalVars[1])
0x2b1: Stack[-1] = (bool) 0
0x2b2: GlobalVars[1] = Stack[-1]; Pop(1)
0x2b3: PushEmpty()
0x2b4: Call2 0x2b7

0x2b5: Pop(0)
0x2b6: Return(); Pop(0)

0x2b7: PushEmpty(bool)
0x2b8: Call2 0x3ce

0x2b9: Pop(0)
0x2ba: Pop(1); Push((bool) Stack[-1] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bc: @ Hold()
0x2bd: Pop(0)
0x2be: @ GetDirection(Stack[-0])
0x2bf: Pop(0)
0x2c0: PushEmpty()
0x2c1: Call2 0x367

0x2c2: Pop(0)
0x2c3: GOTO 0x2c0

0x2c4: Return(); Pop(0)

0x2c5: PushEmpty(object, object)
0x2c6: Push("player")
0x2c7: @ FindActor(Stack[-2], Stack[-1])
0x2c8: Pop(1)
0x2c9: Pop(0); Push((bool) Stack[-1] == 0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cb: Stack[-3] = (bool) 0
0x2cc: Return(); Pop(2)

0x2cd: PushEmpty(bool, object)
0x2ce: Stack[-1] = Stack[-3]
0x2cf: Call2 0x3c5

0x2d0: Stack[-5] = Stack[-2]
0x2d1: Pop(2)
0x2d2: Return(); Pop(2)

0x2d3: Stack[-1] = 0
0x2d4: Push(CvectorIndex(Stack[-0], 0))
0x2d5: Push(CvectorIndex(Stack[-0], 2))
0x2d6: @ RotateAsync(Stack[-2], Stack[-1])
0x2d7: Pop(2)
0x2d8: Return(); Pop(0)

0x2d9: PushEmpty(object, bool, object, bool)
0x2da: Push("player")
0x2db: @ FindActor(Stack[-3], Stack[-1])
0x2dc: Pop(1)
0x2dd: Pop(0); Push((bool) Stack[-2] == 0)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2df: Stack[-5] = (bool) 0
0x2e0: Return(); Pop(4)

0x2e1: PushEmpty(float, object)
0x2e2: Stack[-1] = Stack[-4]
0x2e3: Call2 0x3b3

0x2e4: Pop(1)
0x2e5: Push((float)90000.0)
0x2e6: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2e7: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e8: Stack[-5] = (bool) 0
0x2e9: Return(); Pop(4)

0x2ea: @ CanSee(Stack[-1], Stack[-2])
0x2eb: Pop(0)
0x2ec: Stack[-5] = Stack[-1]
0x2ed: Return(); Pop(4)

0x2ee: Stack[-2] = 0
0x2ef: PushEmpty(float, float)
0x2f0: Push((int) 8)
0x2f1: Push((int) 16)
0x2f2: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x2f3: Pop(2)
0x2f4: Push((int) 10)
0x2f5: @ SetTimer(Stack[-1], Stack[-2])
0x2f6: Pop(1)
0x2f7: Return(); Pop(2)

0x2f8: Push((int) 10)
0x2f9: @ KillTimer(Stack[-1])
0x2fa: Pop(1)
0x2fb: Return(); Pop(0)

0x2fc: PushEmpty()
0x2fd: Push((int) 10)
0x2fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x300: PushEmpty()
0x301: Call2 0x2f8

0x302: Pop(0)
0x303: PushEmpty(bool)
0x304: Stack[-1] = (bool) 0
0x305: PushEmpty(bool)
0x306: Call2 0x3ce

0x307: Pop(0)
0x308: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x309: PushEmpty(bool)
0x30a: Call2 0x2d9

0x30b: Pop(0)
0x30c: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30d: Stack[-1] = (bool) 1
0x30e: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x30f: PushEmpty(bool)
0x310: Call2 0x2c5

0x311: Pop(0)
0x312: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x313: PushEmpty(bool, object)
0x314: PushEmpty(object)
0x315: Call2 0x4e7

0x316: Stack[-2] = Stack[-1]
0x317: Pop(1)
0x318: Call2 0x462

0x319: Pop(2)
0x31a: GOTO 0x321

0x31b: PushEmpty()
0x31c: Call2 0x2d4

0x31d: Pop(0)
0x31e: PushEmpty()
0x31f: Call2 0x2ef

0x320: Pop(0)
0x321: Return(); Pop(0)

0x322: PushEmpty()
0x323: Call2 0x3ae

0x324: Pop(0)
0x325: PushEmpty()
0x326: Call2 0x2f8

0x327: Pop(0)
0x328: @ lshStopSpeech()
0x329: Pop(0)
0x32a: @ lshStopAnimation()
0x32b: Pop(0)
0x32c: @ StopAsync()
0x32d: Pop(0)
0x32e: @ Hold()
0x32f: Pop(0)
0x330: Return(); Pop(0)

0x331: @ StopGroup0()
0x332: Pop(0)
0x333: PushEmpty()
0x334: Call2 0x2f8

0x335: Pop(0)
0x336: PushEmpty(string)
0x337: Stack[-1] = "Neutral"
0x338: Call2 0x4b2

0x339: Pop(1)
0x33a: PushEmpty()
0x33b: Call2 0x2ef

0x33c: Pop(0)
0x33d: Return(); Pop(0)

0x33e: PushEmpty()
0x33f: Push(Stack[-1])
0x340: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x341: PushEmpty()
0x342: Call2 0x2ef

0x343: Pop(0)
0x344: GOTO 0x349

0x345: PushEmpty(string)
0x346: Stack[-1] = "Neutral"
0x347: Call2 0x4b2

0x348: Pop(1)
0x349: Return(); Pop(0)

0x34a: PushEmpty(bool, bool)
0x34b: @ IsOverrideActive(Stack[-1])
0x34c: Pop(0)
0x34d: Pop(0); Push((bool) Stack[-1] == 0)
0x34e: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x34f: EventDisable(0)
0x350: PushEmpty()
0x351: Call2 0x3ae

0x352: Pop(0)
0x353: PushEmpty(bool, object)
0x354: Stack[-1] = Stack[-5]
0x355: Call2 0x3c5

0x356: Pop(2)
0x357: EventEnable(0)
0x358: PushEmpty(object)
0x359: Stack[-1] = Stack[-4]
0x35a: Call2 0x539

0x35b: Pop(1)
0x35c: PushEmpty(string)
0x35d: Stack[-1] = "Neutral"
0x35e: Call2 0x4b2

0x35f: Pop(1)
0x360: PushEmpty()
0x361: Call2 0x2f8

0x362: Pop(0)
0x363: PushEmpty()
0x364: Call2 0x2ef

0x365: Pop(0)
0x366: Return(); Pop(2)

0x367: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x368: @ WaitForAnimEnd()
0x369: Pop(0)
0x36a: PushEmpty(bool)
0x36b: Call2 0x3ce

0x36c: Pop(0)
0x36d: Pop(1); Push((bool) Stack[-1] == 0)
0x36e: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36f: Return(); Pop(12)

0x370: PushEmpty(int)
0x371: Call2 0x50d

0x372: Stack[-7] = Stack[-1]
0x373: Pop(1)
0x374: Stack[-5] = (int) 0
0x375: PushEmpty(bool)
0x376: Stack[-1] = (bool) 0
0x377: Push((int) 5)
0x378: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37a: PushEmpty(bool)
0x37b: Call2 0x3ce

0x37c: Pop(0)
0x37d: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37e: Stack[-1] = (bool) 1
0x37f: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x380: Pop(0); Push((bool) Stack[-6] == 0)
0x381: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x382: Push((int) 3)
0x383: @ Sleep(Stack[-1], Stack[-5])
0x384: Pop(1)
0x385: Pop(0); Push((bool) Stack[-4] == 0)
0x386: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x387: GOTO 0x3a9

0x388: GOTO 0x39e

0x389: @ irand(Stack[-3], Stack[-6])
0x38a: Pop(0)
0x38b: Push((int) 5)
0x38c: @ irand(Stack[-3], Stack[-1])
0x38d: Pop(1)
0x38e: Push((int) 0)
0x38f: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x390: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x391: Stack[-3] = (int) 0
0x392: Push("all")
0x393: PushEmpty(string, int)
0x394: Stack[-1] = Stack[-6]
0x395: Call2 0x506

0x396: Pop(1)
0x397: @ PlayAnimation(Stack[-2], Stack[-1])
0x398: Pop(2)
0x399: @ WaitForAnimEnd(Stack[-1])
0x39a: Pop(0)
0x39b: Pop(0); Push((bool) Stack[-1] == 0)
0x39c: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39d: GOTO 0x3a9

0x39e: PushEmpty(bool)
0x39f: Call2 0x3ac

0x3a0: Pop(0)
0x3a1: Pop(1); Push((bool) Stack[-1] == 0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a3: GOTO 0x3a9

0x3a4: @ ResetAAS()
0x3a5: Pop(0)
0x3a6: Push((int) 1)
0x3a7: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3a8: GOTO 0x375

0x3a9: @ ResetAAS()
0x3aa: Pop(0)
0x3ab: Return(); Pop(12)

0x3ac: Stack[-1] = (bool) 1
0x3ad: Return(); Pop(0)

0x3ae: @ StopAnimation()
0x3af: Pop(0)
0x3b0: @ StopGroup0()
0x3b1: Pop(0)
0x3b2: Return(); Pop(0)

0x3b3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3b4: @ GetPosition(Stack[-3])
0x3b5: Pop(0)
0x3b6: @@ GetPosition(Stack[-2])
0x3b7: Pop(0)
0x3b8: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3b9: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3ba: Return(); Pop(6)

0x3bb: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x3bc: @ GetPosition(Stack[-3])
0x3bd: Pop(0)
0x3be: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x3bf: Push(CvectorIndex(Stack[-2], 0))
0x3c0: Push(CvectorIndex(Stack[-3], 2))
0x3c1: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x3c2: Pop(2)
0x3c3: Stack[-8] = Stack[-1]
0x3c4: Return(); Pop(6)

0x3c5: PushEmpty(cvector, cvector)
0x3c6: @@ GetPosition(Stack[-1])
0x3c7: Pop(0)
0x3c8: PushEmpty(bool, cvector)
0x3c9: Stack[-1] = Stack[-3]
0x3ca: Call2 0x3bb

0x3cb: Stack[-6] = Stack[-2]
0x3cc: Pop(2)
0x3cd: Return(); Pop(2)

0x3ce: PushEmpty(bool, bool)
0x3cf: @ IsLoaded(Stack[-1])
0x3d0: Pop(0)
0x3d1: Stack[-3] = Stack[-1]
0x3d2: Return(); Pop(2)

0x3d3: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3d4: @@ GetPosition(Stack[-8])
0x3d5: Pop(0)
0x3d6: @@ GetEyesHeight(Stack[-9])
0x3d7: Pop(0)
0x3d8: Push(CvectorIndex(Stack[-8], 1))
0x3d9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3da: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3db: @ GetPosition(Stack[-7])
0x3dc: Pop(0)
0x3dd: @ GetEyesHeight(Stack[-9])
0x3de: Pop(0)
0x3df: Push(CvectorIndex(Stack[-7], 1))
0x3e0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3e1: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3e2: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3e3: Push(CvectorIndex(Stack[-6], 1))
0x3e4: Stack[-1] = (int) 0
0x3e5: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3e6: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3e7: Pop(1); Push(Sqrt(Stack[-1]))
0x3e8: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3e9: Stack[-5] = -Stack[-6]; Pop(0);
0x3ea: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3eb: PushEmpty(cvector, cvector)
0x3ec: Push(CVector(0.0, 1.0, 0.0))
0x3ed: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3ee: Call2 0x4ed

0x3ef: Pop(1)
0x3f0: Push((int) 25)
0x3f1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3f2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f3: Push(CVector(0.0, 10.0, 0.0))
0x3f4: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3f5: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3f6: @ IsOverrideActive(Stack[-2])
0x3f7: Pop(0)
0x3f8: Push(Stack[-2])
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: Stack[-21] = (bool) 0
0x3fb: Return(); Pop(18)

0x3fc: @ StopWorld()
0x3fd: Pop(0)
0x3fe: @ CameraTransit(Stack[-3], Stack[-5])
0x3ff: Pop(0)
0x400: Push(CvectorIndex(Stack[-4], 0))
0x401: Push(CvectorIndex(Stack[-5], 2))
0x402: @ Rotate(Stack[-2], Stack[-1])
0x403: Pop(2)
0x404: PushEmpty(bool)
0x405: Call2 0x526

0x406: Pop(0)
0x407: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x408: GOTO 0x411

0x409: Push("head")
0x40a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x40b: Pop(1)
0x40c: Push(Stack[-1])
0x40d: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40e: Push("head")
0x40f: @ LookAsyncCamera(Stack[-1])
0x410: Pop(1)
0x411: @ CameraWaitForPlayFinish()
0x412: Pop(0)
0x413: @ ResumeWorld()
0x414: Pop(0)
0x415: Stack[-21] = (bool) 1
0x416: Return(); Pop(18)

0x417: PushEmpty(bool, bool)
0x418: @ CameraSwitchToNormal()
0x419: Pop(0)
0x41a: PushEmpty(bool)
0x41b: Call2 0x526

0x41c: Pop(0)
0x41d: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41e: GOTO 0x427

0x41f: Push("head")
0x420: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x421: Pop(1)
0x422: Push(Stack[-1])
0x423: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x424: Push("head")
0x425: @ UnlookAsync(Stack[-1])
0x426: Pop(1)
0x427: Return(); Pop(2)

0x428: PushEmpty(int, int, int, int)
0x429: Push("voice_common")
0x42a: @ GetVariable(Stack[-1], Stack[-3])
0x42b: Pop(1)
0x42c: Push(Stack[-2])
0x42d: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x42e: PushEmpty(bool, object)
0x42f: Stack[-1] = Stack[-7]
0x430: Call2 0x462

0x431: Pop(1)
0x432: Pop(1); Push((bool) Stack[-1] == 0)
0x433: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x434: PushEmpty(bool, object)
0x435: Stack[-1] = Stack[-7]
0x436: Call2 0x487

0x437: Pop(1)
0x438: Pop(1); Push((bool) Stack[-1] == 0)
0x439: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x43a: Stack[-6] = (bool) 0
0x43b: Return(); Pop(4)

0x43c: Push((int) 2)
0x43d: @ irand(Stack[-2], Stack[-1])
0x43e: Pop(1)
0x43f: Push(Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x441: Push("voice_common")
0x442: Push((int) 1)
0x443: Pop(1); Push(Stack[-4] + Stack[-1]);
0x444: Push((int) 3)
0x445: Pop(2); Push(Stack[-2] % Stack[-1]);
0x446: @ SetVariable(Stack[-2], Stack[-1])
0x447: Pop(2)
0x448: GOTO 0x44d

0x449: Push("voice_common")
0x44a: Push((int) 0)
0x44b: @ SetVariable(Stack[-2], Stack[-1])
0x44c: Pop(2)
0x44d: GOTO 0x460

0x44e: PushEmpty(bool, object)
0x44f: Stack[-1] = Stack[-7]
0x450: Call2 0x487

0x451: Pop(1)
0x452: Pop(1); Push((bool) Stack[-1] == 0)
0x453: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x454: PushEmpty(bool, object)
0x455: Stack[-1] = Stack[-7]
0x456: Call2 0x462

0x457: Pop(1)
0x458: Pop(1); Push((bool) Stack[-1] == 0)
0x459: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45a: Stack[-6] = (bool) 0
0x45b: Return(); Pop(4)

0x45c: Push("voice_common")
0x45d: Push((int) 1)
0x45e: @ SetVariable(Stack[-2], Stack[-1])
0x45f: Pop(2)
0x460: Stack[-6] = (bool) 1
0x461: Return(); Pop(4)

0x462: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x463: Stack[-5] = "c"
0x464: Stack[-4] = (int) 0
0x465: Push((int) 1)
0x466: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x467: Push((int) 1)
0x468: Pop(1); Push(Stack[-5] + Stack[-1]);
0x469: Pop(1); Push(Stack[-6] + Stack[-1]);
0x46a: @@ HasProperty(Stack[-1], Stack[-4])
0x46b: Pop(1)
0x46c: Pop(0); Push((bool) Stack[-3] == 0)
0x46d: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46e: GOTO 0x472

0x46f: Push((int) 1)
0x470: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x471: GOTO 0x465

0x472: Pop(0); Push((bool) Stack[-4] == 0)
0x473: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x474: Stack[-12] = (bool) 0
0x475: Return(); Pop(10)

0x476: Stack[-2] = (int) 0
0x477: Push((int) 1)
0x478: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x479: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47a: @ irand(Stack[-2], Stack[-4])
0x47b: Pop(0)
0x47c: Push((int) 1)
0x47d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x47e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x47f: @@ GetProperty(Stack[-1], Stack[-2])
0x480: Pop(1)
0x481: PushEmpty(bool, string)
0x482: Stack[-1] = Stack[-3]
0x483: Call2 0x4d1

0x484: Stack[-14] = Stack[-2]
0x485: Pop(2)
0x486: Return(); Pop(10)

0x487: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x488: Push("d")
0x489: PushEmpty(int)
0x48a: Call2 0x4f7

0x48b: Pop(0)
0x48c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x48d: Push("m")
0x48e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x48f: Stack[-4] = (int) 0
0x490: Push((int) 1)
0x491: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x492: Push((int) 1)
0x493: Pop(1); Push(Stack[-5] + Stack[-1]);
0x494: Pop(1); Push(Stack[-6] + Stack[-1]);
0x495: @@ HasProperty(Stack[-1], Stack[-4])
0x496: Pop(1)
0x497: Pop(0); Push((bool) Stack[-3] == 0)
0x498: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x499: GOTO 0x49d

0x49a: Push((int) 1)
0x49b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x49c: GOTO 0x490

0x49d: Pop(0); Push((bool) Stack[-4] == 0)
0x49e: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x49f: Stack[-12] = (bool) 0
0x4a0: Return(); Pop(10)

0x4a1: Stack[-2] = (int) 0
0x4a2: Push((int) 1)
0x4a3: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a5: @ irand(Stack[-2], Stack[-4])
0x4a6: Pop(0)
0x4a7: Push((int) 1)
0x4a8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4a9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4aa: @@ GetProperty(Stack[-1], Stack[-2])
0x4ab: Pop(1)
0x4ac: PushEmpty(bool, string)
0x4ad: Stack[-1] = Stack[-3]
0x4ae: Call2 0x4d1

0x4af: Stack[-14] = Stack[-2]
0x4b0: Pop(2)
0x4b1: Return(); Pop(10)

0x4b2: PushEmpty(bool, float, float, bool, float, float)
0x4b3: @ lshHasAnimation(Stack[-3], Stack[-7])
0x4b4: Pop(0)
0x4b5: Push(Stack[-3])
0x4b6: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4b7: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x4b8: Pop(0)
0x4b9: Push((bool) 0)
0x4ba: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4bb: Pop(1)
0x4bc: GOTO 0x4c1

0x4bd: Push("Can't find lsh animation : ")
0x4be: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4bf: @ Trace(Stack[-1])
0x4c0: Pop(1)
0x4c1: Return(); Pop(6)

0x4c2: PushEmpty(bool, float, float, bool, float, float)
0x4c3: @ lshHasAnimation(Stack[-3], Stack[-8])
0x4c4: Pop(0)
0x4c5: Push(Stack[-3])
0x4c6: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4c7: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x4c8: Pop(0)
0x4c9: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x4ca: Pop(0)
0x4cb: GOTO 0x4d0

0x4cc: Push("Can't find lsh animation : ")
0x4cd: Pop(1); Push(Stack[-1] + Stack[-9]);
0x4ce: @ Trace(Stack[-1])
0x4cf: Pop(1)
0x4d0: Return(); Pop(6)

0x4d1: PushEmpty(bool, bool)
0x4d2: PushEmpty(bool)
0x4d3: Call2 0x526

0x4d4: Pop(0)
0x4d5: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4d6: @ lshHasSpeech(Stack[-1], Stack[-3])
0x4d7: Pop(0)
0x4d8: Push(Stack[-1])
0x4d9: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4da: @ lshPlaySpeech(Stack[-3])
0x4db: Pop(0)
0x4dc: Stack[-4] = (bool) 1
0x4dd: Return(); Pop(2)

0x4de: Stack[-4] = (bool) 0
0x4df: Return(); Pop(2)

0x4e0: PushEmpty(bool)
0x4e1: Call2 0x526

0x4e2: Pop(0)
0x4e3: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4e4: @ lshStopSpeech()
0x4e5: Pop(0)
0x4e6: Return(); Pop(0)

0x4e7: PushEmpty(object, object)
0x4e8: @ self(Stack[-1])
0x4e9: Pop(0)
0x4ea: Stack[-3] = Stack[-1]
0x4eb: Return(); Pop(2)

0x4ec: Stack[-1] = 0
0x4ed: PushEmpty(float, float)
0x4ee: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4ef: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4f0: Push((float)0.0)
0x4f1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4f2: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f3: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x4f4: Return(); Pop(2)

0x4f5: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4f6: Return(); Pop(2)

0x4f7: PushEmpty(float, float)
0x4f8: @ GetGameTime(Stack[-1])
0x4f9: Pop(0)
0x4fa: Push((int) 1)
0x4fb: PushEmpty(int)
0x4fc: Push((int) 24)
0x4fd: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x4fe: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x4ff: Return(); Pop(2)

0x500: PushEmpty()
0x501: PushEmpty(int)
0x502: Call2 0x4f7

0x503: Pop(0)
0x504: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x505: Return(); Pop(0)

0x506: PushEmpty(string, string)
0x507: Stack[-1] = "idle"
0x508: Push(Stack[-3])
0x509: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x50a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x50b: Stack[-4] = Stack[-1]
0x50c: Return(); Pop(2)

0x50d: PushEmpty(int, bool, int, bool)
0x50e: Stack[-2] = (int) 0
0x50f: Push("all")
0x510: PushEmpty(string, int)
0x511: Stack[-1] = Stack[-5]
0x512: Call2 0x506

0x513: Pop(1)
0x514: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x515: Pop(2)
0x516: Pop(0); Push((bool) Stack[-1] == 0)
0x517: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x518: GOTO 0x51c

0x519: Push((int) 1)
0x51a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x51b: GOTO 0x50f

0x51c: Stack[-5] = Stack[-2]
0x51d: Return(); Pop(4)

0x51e: Stack[-1] = (int) 515546
0x51f: Return(); Pop(0)

0x520: Stack[-1] = (int) 502871
0x521: Return(); Pop(0)

0x522: Stack[-1] = "ui/NPC_Mishka.png"
0x523: Return(); Pop(0)

0x524: Stack[-1] = "ui/NPC_Mishka_b.png"
0x525: Return(); Pop(0)

0x526: Stack[-1] = (bool) 1
0x527: Return(); Pop(0)

0x528: PushEmpty(int, int)
0x529: Push("branch")
0x52a: @ GetVariable(Stack[-1], Stack[-2])
0x52b: Pop(1)
0x52c: Push((int) 0)
0x52d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52e: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x52f: Stack[-3] = (int) 1
0x530: Return(); Pop(2)

0x531: GOTO 0x537

0x532: Push((int) 1)
0x533: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x534: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x535: Stack[-3] = (int) 2
0x536: Return(); Pop(2)

0x537: Stack[-3] = (int) 3
0x538: Return(); Pop(2)

0x539: PushEmpty()
0x53a: Push(GlobalVars[1])
0x53b: Pop(1); Push((bool) Stack[-1] == 0)
0x53c: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x53d: PushEmpty(int, object)
0x53e: Stack[-1] = Stack[-3]
0x53f: Push(-2, 1); TaskCall(0)
0x540: Call2 0x0

0x541: Pop(-2, 1); TaskReturn
0x542: Pop(2)
0x543: Push(GlobalVars[1])
0x544: Stack[-1] = (bool) 1
0x545: GlobalVars[1] = Stack[-1]; Pop(1)
0x546: PushEmpty(bool, int)
0x547: Stack[-1] = (int) 12
0x548: Call2 0x500

0x549: Pop(1)
0x54a: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x54b: PushEmpty(int, object)
0x54c: Stack[-1] = Stack[-3]
0x54d: Push(-2, 1); TaskCall(2)
0x54e: Call2 0xe2

0x54f: Pop(-2, 1); TaskReturn
0x550: Pop(2)
0x551: Return(); Pop(0)

0x552: PushEmpty(int, object)
0x553: Stack[-1] = Stack[-3]
0x554: Push(-2, 1); TaskCall(4)
0x555: Call2 0x1e5

0x556: Pop(-2, 1); TaskReturn
0x557: Pop(2)
0x558: Return(); Pop(0)

