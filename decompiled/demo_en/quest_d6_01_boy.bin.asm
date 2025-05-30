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
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png
	ood6Boy1
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
	Sleep (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x114
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x120 Vars = (object)
		EVENT_7 Op = 0x155 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1dd

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x28c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x28a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x28e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x290

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2a6

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
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x221

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x89

0x53: Pop(1)
0x54: Push((int) 503989)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x29a

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 503991)
0x5f: Push((int) 38108)
0x60: Push((int) 4344)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 536326)
0x64: Push((int) -1)
0x65: Push((int) 38107)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x292

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x232

0x77: Pop(1)
0x78: GOTO 0x6f

0x79: GOTO 0x88

0x7a: Push("all")
0x7b: Push("idle")
0x7c: @ PlayAnimation(Stack[-2], Stack[-1])
0x7d: Pop(2)
0x7e: @ WaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: Push("all")
0x84: Push("idle")
0x85: @ PlayAnimation(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: GOTO 0x7e

0x88: Return(); Pop(0)

0x89: PushEmpty()
0x8a: PushEmpty(bool)
0x8b: Call2 0x292

0x8c: Pop(0)
0x8d: Pop(1); Push((bool) Stack[-1] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Return(); Pop(0)

0x90: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Return(); Pop(0)

0x93: PushEmpty(string, bool)
0x94: Stack[-2] = Stack[-3]
0x95: Push("")
0x96: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x98: Stack[-1] = (bool) 0
0x99: GOTO 0x9b

0x9a: Stack[-1] = (bool) 1
0x9b: Call2 0x242

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x25c

0xa4: Pop(0)
0xa5: Push((int) 4344)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x294

0xac: Pop(2)
0xad: Push((int) 4342)
0xae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xb0: PushEmpty(string)
0xb1: Stack[-1] = "Neutral"
0xb2: Call2 0x89

0xb3: Pop(1)
0xb4: Push((int) 503989)
0xb5: @@ SetMessage(Stack[-1])
0xb6: Pop(1)
0xb7: @@ ClearReplies()
0xb8: Pop(0)
0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x29a

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 503991)
0xbf: Push((int) 38108)
0xc0: Push((int) 4344)
0xc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2: Pop(3)
0xc3: Push((int) 536326)
0xc4: Push((int) -1)
0xc5: Push((int) 38107)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Push((int) 38108)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call2 0x89

0xcf: Pop(1)
0xd0: Push((int) 536327)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: Push((int) 536328)
0xd6: Push((int) 4345)
0xd7: Push((int) 38109)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Return(); Pop(0)

0xdb: Push((int) 4350)
0xdc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xde: Push((int) 4345)
0xdf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xe1: PushEmpty(string)
0xe2: Stack[-1] = "Neutral"
0xe3: Call2 0x89

0xe4: Pop(1)
0xe5: Push((int) 503992)
0xe6: @@ SetMessage(Stack[-1])
0xe7: Pop(1)
0xe8: @@ ClearReplies()
0xe9: Pop(0)
0xea: Push((int) 503993)
0xeb: Push((int) 4347)
0xec: Push((int) 4346)
0xed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee: Pop(3)
0xef: Return(); Pop(0)

0xf0: Push((int) 4347)
0xf1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xf3: PushEmpty(string)
0xf4: Stack[-1] = "Neutral"
0xf5: Call2 0x89

0xf6: Pop(1)
0xf7: Push((int) 503994)
0xf8: @@ SetMessage(Stack[-1])
0xf9: Pop(1)
0xfa: @@ ClearReplies()
0xfb: Pop(0)
0xfc: Push((int) 503995)
0xfd: Push((int) -1)
0xfe: Push((int) 4348)
0xff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100: Pop(3)
0x101: Push((int) 503996)
0x102: Push((int) -1)
0x103: Push((int) 4349)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Return(); Pop(0)

0x107: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x108: PushEmpty(bool)
0x109: Call2 0x292

0x10a: Pop(0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10c: @ lshStopAnimation()
0x10d: Pop(0)
0x10e: GOTO 0x111

0x10f: @ StopAnimation()
0x110: Pop(0)
0x111: Return(); Pop(0)

0x112: GOTO 0xa0

0x113: Return(); Pop(0)

0x114: Push((bool) 1)
0x115: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x116: Push((int) 1)
0x117: @ Sleep(Stack[-1])
0x118: Pop(1)
0x119: PushEmpty(float, float)
0x11a: Stack[-2] = (int) 300
0x11b: Stack[-1] = (int) 100
0x11c: Call2 0x12b

0x11d: Pop(2)
0x11e: GOTO 0x114

0x11f: Return(); Pop(0)

0x120: PushEmpty()
0x121: PushEmpty()
0x122: Call2 0x16c

0x123: Pop(0)
0x124: PushEmpty(int, object)
0x125: Stack[-1] = Stack[-3]
0x126: Push(-2, 1); TaskCall(0)
0x127: Call2 0x0

0x128: Pop(-2, 1); TaskReturn
0x129: Pop(2)
0x12a: Return(); Pop(0)

0x12b: PushEmpty()
0x12c: PushEmpty(bool)
0x12d: Call2 0x1d8

0x12e: Pop(0)
0x12f: Pop(1); Push((bool) Stack[-1] == 0)
0x130: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x131: Return(); Pop(0)

0x132: Push("player")
0x133: @ FindActor(Stack[-4], Stack[-1])
0x134: Pop(1)
0x135: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x136: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x137: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x138: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x139: Push((int) 10)
0x13a: Push((float)1.0)
0x13b: @ SetTimer(Stack[-2], Stack[-1])
0x13c: Pop(2)
0x13d: PushEmpty()
0x13e: Call2 0x17a

0x13f: Pop(0)
0x140: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x141: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x142: Push((int) 10)
0x143: @ KillTimer(Stack[-1])
0x144: Pop(1)
0x145: Return(); Pop(0)

0x146: PushEmpty(float, float)
0x147: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x148: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x149: Stack[-3] = (bool) 0
0x14a: Return(); Pop(2)

0x14b: PushEmpty(float, object)
0x14c: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x14d: Call2 0x1d0

0x14e: Pop(1)
0x14f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x150: Push( Stack[2 + Tasks[-1].StackPointer] )
0x151: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x152: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x153: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x154: Return(); Pop(2)

0x155: PushEmpty()
0x156: Push((int) 10)
0x157: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x158: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x159: PushEmpty(bool)
0x15a: Call2 0x146

0x15b: Pop(0)
0x15c: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x15d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x15e: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x15f: PushEmpty(object)
0x160: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x161: Call2 0x251

0x162: Pop(1)
0x163: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x164: GOTO 0x16b

0x165: Push( Stack[2 + Tasks[-1].StackPointer] )
0x166: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x167: Push("head")
0x168: @ UnlookAsync(Stack[-1])
0x169: Pop(1)
0x16a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x16b: Return(); Pop(0)

0x16c: PushEmpty()
0x16d: Call2 0x1cb

0x16e: Pop(0)
0x16f: Push((int) 10)
0x170: @ KillTimer(Stack[-1])
0x171: Pop(1)
0x172: Push( Stack[2 + Tasks[-1].StackPointer] )
0x173: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x174: Push("head")
0x175: @ UnlookAsync(Stack[-1])
0x176: Pop(1)
0x177: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x178: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x179: Return(); Pop(0)

0x17a: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x17b: @ WaitForAnimEnd()
0x17c: Pop(0)
0x17d: PushEmpty(bool)
0x17e: Call2 0x1d8

0x17f: Pop(0)
0x180: Pop(1); Push((bool) Stack[-1] == 0)
0x181: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x182: Return(); Pop(14)

0x183: PushEmpty(int)
0x184: Call2 0x279

0x185: Stack[-8] = Stack[-1]
0x186: Pop(1)
0x187: Stack[-6] = (int) 0
0x188: PushEmpty(bool)
0x189: Stack[-1] = (bool) 0
0x18a: Push((int) 5)
0x18b: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18d: PushEmpty(bool)
0x18e: Call2 0x1d8

0x18f: Pop(0)
0x190: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x191: Stack[-1] = (bool) 1
0x192: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x193: Push((int) 3)
0x194: @ irand(Stack[-6], Stack[-1])
0x195: Pop(1)
0x196: Push((int) 0)
0x197: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x199: Push(Stack[-7])
0x19a: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x19b: @ irand(Stack[-4], Stack[-7])
0x19c: Pop(0)
0x19d: Push("all")
0x19e: PushEmpty(string, int)
0x19f: Stack[-1] = Stack[-7]
0x1a0: Call2 0x272

0x1a1: Pop(1)
0x1a2: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a3: Pop(2)
0x1a4: @ WaitForAnimEnd(Stack[-3])
0x1a5: Pop(0)
0x1a6: Pop(0); Push((bool) Stack[-3] == 0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a8: GOTO 0x1c6

0x1a9: GOTO 0x1bb

0x1aa: Push((int) 1)
0x1ab: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1ad: Push((int) 4)
0x1ae: @ rand(Stack[-3], Stack[-1])
0x1af: Pop(1)
0x1b0: Push((int) 1)
0x1b1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1b2: @ Sleep(Stack[-1], Stack[-2])
0x1b3: Pop(1)
0x1b4: Pop(0); Push((bool) Stack[-1] == 0)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b6: GOTO 0x1c6

0x1b7: GOTO 0x1bb

0x1b8: Push(Stack[-6])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ba: GOTO 0x1c6

0x1bb: PushEmpty(bool)
0x1bc: Call2 0x1c9

0x1bd: Pop(0)
0x1be: Pop(1); Push((bool) Stack[-1] == 0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: GOTO 0x1c6

0x1c1: @ ResetAAS()
0x1c2: Pop(0)
0x1c3: Push((int) 1)
0x1c4: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1c5: GOTO 0x188

0x1c6: @ ResetAAS()
0x1c7: Pop(0)
0x1c8: Return(); Pop(14)

0x1c9: Stack[-1] = (bool) 1
0x1ca: Return(); Pop(0)

0x1cb: @ StopAnimation()
0x1cc: Pop(0)
0x1cd: @ StopGroup0()
0x1ce: Pop(0)
0x1cf: Return(); Pop(0)

0x1d0: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1d1: @ GetPosition(Stack[-3])
0x1d2: Pop(0)
0x1d3: @@ GetPosition(Stack[-2])
0x1d4: Pop(0)
0x1d5: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1d6: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1d7: Return(); Pop(6)

0x1d8: PushEmpty(bool, bool)
0x1d9: @ IsLoaded(Stack[-1])
0x1da: Pop(0)
0x1db: Stack[-3] = Stack[-1]
0x1dc: Return(); Pop(2)

0x1dd: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1de: @@ GetPosition(Stack[-8])
0x1df: Pop(0)
0x1e0: @@ GetEyesHeight(Stack[-9])
0x1e1: Pop(0)
0x1e2: Push(CvectorIndex(Stack[-8], 1))
0x1e3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1e4: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1e5: @ GetPosition(Stack[-7])
0x1e6: Pop(0)
0x1e7: @ GetEyesHeight(Stack[-9])
0x1e8: Pop(0)
0x1e9: Push(CvectorIndex(Stack[-7], 1))
0x1ea: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1eb: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1ec: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1ed: Push(CvectorIndex(Stack[-6], 1))
0x1ee: Stack[-1] = (int) 0
0x1ef: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1f0: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1f1: Pop(1); Push(Sqrt(Stack[-1]))
0x1f2: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1f3: Stack[-5] = -Stack[-6]; Pop(0);
0x1f4: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1f5: PushEmpty(cvector, cvector)
0x1f6: Push(CVector(0.0, 1.0, 0.0))
0x1f7: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1f8: Call2 0x263

0x1f9: Pop(1)
0x1fa: Push((int) 25)
0x1fb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1fc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1fd: Push(CVector(0.0, 10.0, 0.0))
0x1fe: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1ff: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x200: @ IsOverrideActive(Stack[-2])
0x201: Pop(0)
0x202: Push(Stack[-2])
0x203: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x204: Stack[-21] = (bool) 0
0x205: Return(); Pop(18)

0x206: @ StopWorld()
0x207: Pop(0)
0x208: @ CameraTransit(Stack[-3], Stack[-5])
0x209: Pop(0)
0x20a: Push(CvectorIndex(Stack[-4], 0))
0x20b: Push(CvectorIndex(Stack[-5], 2))
0x20c: @ Rotate(Stack[-2], Stack[-1])
0x20d: Pop(2)
0x20e: PushEmpty(bool)
0x20f: Call2 0x292

0x210: Pop(0)
0x211: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x212: GOTO 0x21b

0x213: Push("head")
0x214: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x215: Pop(1)
0x216: Push(Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x218: Push("head")
0x219: @ LookAsyncCamera(Stack[-1])
0x21a: Pop(1)
0x21b: @ CameraWaitForPlayFinish()
0x21c: Pop(0)
0x21d: @ ResumeWorld()
0x21e: Pop(0)
0x21f: Stack[-21] = (bool) 1
0x220: Return(); Pop(18)

0x221: PushEmpty(bool, bool)
0x222: @ CameraSwitchToNormal()
0x223: Pop(0)
0x224: PushEmpty(bool)
0x225: Call2 0x292

0x226: Pop(0)
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: GOTO 0x231

0x229: Push("head")
0x22a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x22b: Pop(1)
0x22c: Push(Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22e: Push("head")
0x22f: @ UnlookAsync(Stack[-1])
0x230: Pop(1)
0x231: Return(); Pop(2)

0x232: PushEmpty(bool, float, float, bool, float, float)
0x233: @ lshHasAnimation(Stack[-3], Stack[-7])
0x234: Pop(0)
0x235: Push(Stack[-3])
0x236: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x237: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x238: Pop(0)
0x239: Push((bool) 0)
0x23a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x23b: Pop(1)
0x23c: GOTO 0x241

0x23d: Push("Can't find lsh animation : ")
0x23e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x23f: @ Trace(Stack[-1])
0x240: Pop(1)
0x241: Return(); Pop(6)

0x242: PushEmpty(bool, float, float, bool, float, float)
0x243: @ lshHasAnimation(Stack[-3], Stack[-8])
0x244: Pop(0)
0x245: Push(Stack[-3])
0x246: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x247: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x248: Pop(0)
0x249: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x24a: Pop(0)
0x24b: GOTO 0x250

0x24c: Push("Can't find lsh animation : ")
0x24d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x24e: @ Trace(Stack[-1])
0x24f: Pop(1)
0x250: Return(); Pop(6)

0x251: PushEmpty(float, cvector, float, cvector)
0x252: @@ GetEyesHeight(Stack[-2])
0x253: Pop(0)
0x254: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x255: Push(CvectorIndex(Stack[-1], 1))
0x256: Stack[-1] = Stack[-3]
0x257: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x258: Push("head")
0x259: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x25a: Pop(1)
0x25b: Return(); Pop(4)

0x25c: PushEmpty(bool)
0x25d: Call2 0x292

0x25e: Pop(0)
0x25f: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x260: @ lshStopSpeech()
0x261: Pop(0)
0x262: Return(); Pop(0)

0x263: PushEmpty(float, float)
0x264: Pop(0); Push(Stack[-3] | Stack[-3]);
0x265: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x266: Push((float)0.0)
0x267: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x268: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x269: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x26a: Return(); Pop(2)

0x26b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x26c: Return(); Pop(2)

0x26d: PushEmpty(int, int)
0x26e: @ GetVariable(Stack[-3], Stack[-1])
0x26f: Pop(0)
0x270: Stack[-4] = Stack[-1]
0x271: Return(); Pop(2)

0x272: PushEmpty(string, string)
0x273: Stack[-1] = "idle"
0x274: Push(Stack[-3])
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x277: Stack[-4] = Stack[-1]
0x278: Return(); Pop(2)

0x279: PushEmpty(int, bool, int, bool)
0x27a: Stack[-2] = (int) 0
0x27b: Push("all")
0x27c: PushEmpty(string, int)
0x27d: Stack[-1] = Stack[-5]
0x27e: Call2 0x272

0x27f: Pop(1)
0x280: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x281: Pop(2)
0x282: Pop(0); Push((bool) Stack[-1] == 0)
0x283: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x284: GOTO 0x288

0x285: Push((int) 1)
0x286: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x287: GOTO 0x27b

0x288: Stack[-5] = Stack[-2]
0x289: Return(); Pop(4)

0x28a: Stack[-1] = (int) 515558
0x28b: Return(); Pop(0)

0x28c: Stack[-1] = (int) 503343
0x28d: Return(); Pop(0)

0x28e: Stack[-1] = "ui/NPC_Citizen3.png"
0x28f: Return(); Pop(0)

0x290: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x291: Return(); Pop(0)

0x292: Stack[-1] = (bool) 0
0x293: Return(); Pop(0)

0x294: PushEmpty()
0x295: Push("ood6Boy1")
0x296: Push((int) 1)
0x297: @ SetVariable(Stack[-2], Stack[-1])
0x298: Pop(2)
0x299: Return(); Pop(0)

0x29a: PushEmpty()
0x29b: PushEmpty(int, string)
0x29c: Stack[-1] = "ood6Boy1"
0x29d: Call2 0x26d

0x29e: Pop(1)
0x29f: Push((int) 0)
0x2a0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a2: Stack[-2] = (bool) 1
0x2a3: Return(); Pop(0)

0x2a4: Stack[-2] = (bool) 0
0x2a5: Return(); Pop(0)

0x2a6: PushEmpty(int, int)
0x2a7: Push("branch")
0x2a8: @ GetVariable(Stack[-1], Stack[-2])
0x2a9: Pop(1)
0x2aa: Push((int) 0)
0x2ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2ad: Stack[-3] = (int) 1
0x2ae: Return(); Pop(2)

0x2af: GOTO 0x2b5

0x2b0: Push((int) 1)
0x2b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b3: Stack[-3] = (int) 2
0x2b4: Return(); Pop(2)

0x2b5: Stack[-3] = (int) 3
0x2b6: Return(); Pop(2)

