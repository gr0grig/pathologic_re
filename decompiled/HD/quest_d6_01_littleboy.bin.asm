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
	ood6Littleboy1
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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0xed
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0xf9 Vars = (object)
		EVENT_7 Op = 0x12e Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1b6

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x267

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x265

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x269

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x26b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x281

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
0x41: Call2 0x1fb

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
0x54: Push((int) 504011)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x275

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 504012)
0x5f: Push((int) 4369)
0x60: Push((int) 4367)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 504013)
0x64: Push((int) -1)
0x65: Push((int) 4368)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x26d

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x20d

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
0x8b: Call2 0x26d

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
0x9b: Call2 0x21d

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x237

0xa4: Pop(0)
0xa5: Push((int) 4367)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x26f

0xac: Pop(2)
0xad: Push((int) 4366)
0xae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xb0: PushEmpty(string)
0xb1: Stack[-1] = "Neutral"
0xb2: Call2 0x89

0xb3: Pop(1)
0xb4: Push((int) 504011)
0xb5: @@ SetMessage(Stack[-1])
0xb6: Pop(1)
0xb7: @@ ClearReplies()
0xb8: Pop(0)
0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x275

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 504012)
0xbf: Push((int) 4369)
0xc0: Push((int) 4367)
0xc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2: Pop(3)
0xc3: Push((int) 504013)
0xc4: Push((int) -1)
0xc5: Push((int) 4368)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Push((int) 4369)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call2 0x89

0xcf: Pop(1)
0xd0: Push((int) 504014)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: Push((int) 504015)
0xd6: Push((int) -1)
0xd7: Push((int) 4370)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Push((int) 504016)
0xdb: Push((int) -1)
0xdc: Push((int) 4371)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Return(); Pop(0)

0xe0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe1: PushEmpty(bool)
0xe2: Call2 0x26d

0xe3: Pop(0)
0xe4: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe5: @ lshStopAnimation()
0xe6: Pop(0)
0xe7: GOTO 0xea

0xe8: @ StopAnimation()
0xe9: Pop(0)
0xea: Return(); Pop(0)

0xeb: GOTO 0xa0

0xec: Return(); Pop(0)

0xed: Push((bool) 1)
0xee: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xef: Push((int) 1)
0xf0: @ Sleep(Stack[-1])
0xf1: Pop(1)
0xf2: PushEmpty(float, float)
0xf3: Stack[-2] = (int) 300
0xf4: Stack[-1] = (int) 100
0xf5: Call2 0x104

0xf6: Pop(2)
0xf7: GOTO 0xed

0xf8: Return(); Pop(0)

0xf9: PushEmpty()
0xfa: PushEmpty()
0xfb: Call2 0x145

0xfc: Pop(0)
0xfd: PushEmpty(int, object)
0xfe: Stack[-1] = Stack[-3]
0xff: Push(-2, 1); TaskCall(0)
0x100: Call2 0x0

0x101: Pop(-2, 1); TaskReturn
0x102: Pop(2)
0x103: Return(); Pop(0)

0x104: PushEmpty()
0x105: PushEmpty(bool)
0x106: Call2 0x1b1

0x107: Pop(0)
0x108: Pop(1); Push((bool) Stack[-1] == 0)
0x109: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x10a: Return(); Pop(0)

0x10b: Push("player")
0x10c: @ FindActor(Stack[-4], Stack[-1])
0x10d: Pop(1)
0x10e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x10f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x110: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x111: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x112: Push((int) 10)
0x113: Push((float)1.0)
0x114: @ SetTimer(Stack[-2], Stack[-1])
0x115: Pop(2)
0x116: PushEmpty()
0x117: Call2 0x153

0x118: Pop(0)
0x119: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x11a: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x11b: Push((int) 10)
0x11c: @ KillTimer(Stack[-1])
0x11d: Pop(1)
0x11e: Return(); Pop(0)

0x11f: PushEmpty(float, float)
0x120: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x121: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x122: Stack[-3] = (bool) 0
0x123: Return(); Pop(2)

0x124: PushEmpty(float, object)
0x125: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x126: Call2 0x1a9

0x127: Pop(1)
0x128: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x129: Push( Stack[2 + Tasks[-1].StackPointer] )
0x12a: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x12b: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x12c: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x12d: Return(); Pop(2)

0x12e: PushEmpty()
0x12f: Push((int) 10)
0x130: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x132: PushEmpty(bool)
0x133: Call2 0x11f

0x134: Pop(0)
0x135: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x136: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x137: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x138: PushEmpty(object)
0x139: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x13a: Call2 0x22c

0x13b: Pop(1)
0x13c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x13d: GOTO 0x144

0x13e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x13f: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x140: Push("head")
0x141: @ UnlookAsync(Stack[-1])
0x142: Pop(1)
0x143: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x144: Return(); Pop(0)

0x145: PushEmpty()
0x146: Call2 0x1a4

0x147: Pop(0)
0x148: Push((int) 10)
0x149: @ KillTimer(Stack[-1])
0x14a: Pop(1)
0x14b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x14c: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14d: Push("head")
0x14e: @ UnlookAsync(Stack[-1])
0x14f: Pop(1)
0x150: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x151: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x152: Return(); Pop(0)

0x153: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x154: @ WaitForAnimEnd()
0x155: Pop(0)
0x156: PushEmpty(bool)
0x157: Call2 0x1b1

0x158: Pop(0)
0x159: Pop(1); Push((bool) Stack[-1] == 0)
0x15a: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x15b: Return(); Pop(14)

0x15c: PushEmpty(int)
0x15d: Call2 0x254

0x15e: Stack[-8] = Stack[-1]
0x15f: Pop(1)
0x160: Stack[-6] = (int) 0
0x161: PushEmpty(bool)
0x162: Stack[-1] = (bool) 0
0x163: Push((int) 5)
0x164: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x166: PushEmpty(bool)
0x167: Call2 0x1b1

0x168: Pop(0)
0x169: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x16a: Stack[-1] = (bool) 1
0x16b: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x16c: Push((int) 3)
0x16d: @ irand(Stack[-6], Stack[-1])
0x16e: Pop(1)
0x16f: Push((int) 0)
0x170: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x172: Push(Stack[-7])
0x173: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x174: @ irand(Stack[-4], Stack[-7])
0x175: Pop(0)
0x176: Push("all")
0x177: PushEmpty(string, int)
0x178: Stack[-1] = Stack[-7]
0x179: Call2 0x24d

0x17a: Pop(1)
0x17b: @ PlayAnimation(Stack[-2], Stack[-1])
0x17c: Pop(2)
0x17d: @ WaitForAnimEnd(Stack[-3])
0x17e: Pop(0)
0x17f: Pop(0); Push((bool) Stack[-3] == 0)
0x180: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x181: GOTO 0x19f

0x182: GOTO 0x194

0x183: Push((int) 1)
0x184: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x186: Push((int) 4)
0x187: @ rand(Stack[-3], Stack[-1])
0x188: Pop(1)
0x189: Push((int) 1)
0x18a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x18b: @ Sleep(Stack[-1], Stack[-2])
0x18c: Pop(1)
0x18d: Pop(0); Push((bool) Stack[-1] == 0)
0x18e: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18f: GOTO 0x19f

0x190: GOTO 0x194

0x191: Push(Stack[-6])
0x192: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x193: GOTO 0x19f

0x194: PushEmpty(bool)
0x195: Call2 0x1a2

0x196: Pop(0)
0x197: Pop(1); Push((bool) Stack[-1] == 0)
0x198: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x199: GOTO 0x19f

0x19a: @ ResetAAS()
0x19b: Pop(0)
0x19c: Push((int) 1)
0x19d: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x19e: GOTO 0x161

0x19f: @ ResetAAS()
0x1a0: Pop(0)
0x1a1: Return(); Pop(14)

0x1a2: Stack[-1] = (bool) 1
0x1a3: Return(); Pop(0)

0x1a4: @ StopAnimation()
0x1a5: Pop(0)
0x1a6: @ StopGroup0()
0x1a7: Pop(0)
0x1a8: Return(); Pop(0)

0x1a9: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1aa: @ GetPosition(Stack[-3])
0x1ab: Pop(0)
0x1ac: @@ GetPosition(Stack[-2])
0x1ad: Pop(0)
0x1ae: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1af: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1b0: Return(); Pop(6)

0x1b1: PushEmpty(bool, bool)
0x1b2: @ IsLoaded(Stack[-1])
0x1b3: Pop(0)
0x1b4: Stack[-3] = Stack[-1]
0x1b5: Return(); Pop(2)

0x1b6: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1b7: @@ GetPosition(Stack[-8])
0x1b8: Pop(0)
0x1b9: @@ GetEyesHeight(Stack[-9])
0x1ba: Pop(0)
0x1bb: Push(CvectorIndex(Stack[-8], 1))
0x1bc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1bd: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1be: @ GetPosition(Stack[-7])
0x1bf: Pop(0)
0x1c0: @ GetEyesHeight(Stack[-9])
0x1c1: Pop(0)
0x1c2: Push(CvectorIndex(Stack[-7], 1))
0x1c3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1c4: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1c5: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1c6: Push(CvectorIndex(Stack[-6], 1))
0x1c7: Stack[-1] = (int) 0
0x1c8: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1c9: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1ca: Pop(1); Push(Sqrt(Stack[-1]))
0x1cb: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1cc: Stack[-5] = -Stack[-6]; Pop(0);
0x1cd: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1ce: PushEmpty(cvector, cvector)
0x1cf: Push(CVector(0.0, 1.0, 0.0))
0x1d0: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1d1: Call2 0x23e

0x1d2: Pop(1)
0x1d3: Push((int) 25)
0x1d4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1d5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1d6: Push(CVector(0.0, 10.0, 0.0))
0x1d7: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1d8: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1d9: @ IsOverrideActive(Stack[-2])
0x1da: Pop(0)
0x1db: Push(Stack[-2])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1dd: Stack[-21] = (bool) 0
0x1de: Return(); Pop(18)

0x1df: @ StopWorld()
0x1e0: Pop(0)
0x1e1: Push((bool) 1)
0x1e2: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1e3: Pop(1)
0x1e4: Push(CvectorIndex(Stack[-4], 0))
0x1e5: Push(CvectorIndex(Stack[-5], 2))
0x1e6: @ Rotate(Stack[-2], Stack[-1])
0x1e7: Pop(2)
0x1e8: PushEmpty(bool)
0x1e9: Call2 0x26d

0x1ea: Pop(0)
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ec: GOTO 0x1f5

0x1ed: Push("head")
0x1ee: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1ef: Pop(1)
0x1f0: Push(Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f2: Push("head")
0x1f3: @ LookAsyncCamera(Stack[-1])
0x1f4: Pop(1)
0x1f5: @ CameraWaitForPlayFinish()
0x1f6: Pop(0)
0x1f7: @ ResumeWorld()
0x1f8: Pop(0)
0x1f9: Stack[-21] = (bool) 1
0x1fa: Return(); Pop(18)

0x1fb: PushEmpty(bool, bool)
0x1fc: Push((bool) 1)
0x1fd: @ CameraSwitchToNormal(Stack[-1])
0x1fe: Pop(1)
0x1ff: PushEmpty(bool)
0x200: Call2 0x26d

0x201: Pop(0)
0x202: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x203: GOTO 0x20c

0x204: Push("head")
0x205: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x206: Pop(1)
0x207: Push(Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x209: Push("head")
0x20a: @ UnlookAsync(Stack[-1])
0x20b: Pop(1)
0x20c: Return(); Pop(2)

0x20d: PushEmpty(bool, float, float, bool, float, float)
0x20e: @ lshHasAnimation(Stack[-3], Stack[-7])
0x20f: Pop(0)
0x210: Push(Stack[-3])
0x211: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x212: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x213: Pop(0)
0x214: Push((bool) 0)
0x215: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x216: Pop(1)
0x217: GOTO 0x21c

0x218: Push("Can't find lsh animation : ")
0x219: Pop(1); Push(Stack[-1] + Stack[-8]);
0x21a: @ Trace(Stack[-1])
0x21b: Pop(1)
0x21c: Return(); Pop(6)

0x21d: PushEmpty(bool, float, float, bool, float, float)
0x21e: @ lshHasAnimation(Stack[-3], Stack[-8])
0x21f: Pop(0)
0x220: Push(Stack[-3])
0x221: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x222: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x223: Pop(0)
0x224: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x225: Pop(0)
0x226: GOTO 0x22b

0x227: Push("Can't find lsh animation : ")
0x228: Pop(1); Push(Stack[-1] + Stack[-9]);
0x229: @ Trace(Stack[-1])
0x22a: Pop(1)
0x22b: Return(); Pop(6)

0x22c: PushEmpty(float, cvector, float, cvector)
0x22d: @@ GetEyesHeight(Stack[-2])
0x22e: Pop(0)
0x22f: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x230: Push(CvectorIndex(Stack[-1], 1))
0x231: Stack[-1] = Stack[-3]
0x232: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x233: Push("head")
0x234: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x235: Pop(1)
0x236: Return(); Pop(4)

0x237: PushEmpty(bool)
0x238: Call2 0x26d

0x239: Pop(0)
0x23a: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23b: @ lshStopSpeech()
0x23c: Pop(0)
0x23d: Return(); Pop(0)

0x23e: PushEmpty(float, float)
0x23f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x240: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x241: Push((float)0.0)
0x242: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x243: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x244: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x245: Return(); Pop(2)

0x246: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x247: Return(); Pop(2)

0x248: PushEmpty(int, int)
0x249: @ GetVariable(Stack[-3], Stack[-1])
0x24a: Pop(0)
0x24b: Stack[-4] = Stack[-1]
0x24c: Return(); Pop(2)

0x24d: PushEmpty(string, string)
0x24e: Stack[-1] = "idle"
0x24f: Push(Stack[-3])
0x250: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x251: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x252: Stack[-4] = Stack[-1]
0x253: Return(); Pop(2)

0x254: PushEmpty(int, bool, int, bool)
0x255: Stack[-2] = (int) 0
0x256: Push("all")
0x257: PushEmpty(string, int)
0x258: Stack[-1] = Stack[-5]
0x259: Call2 0x24d

0x25a: Pop(1)
0x25b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x25c: Pop(2)
0x25d: Pop(0); Push((bool) Stack[-1] == 0)
0x25e: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25f: GOTO 0x263

0x260: Push((int) 1)
0x261: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x262: GOTO 0x256

0x263: Stack[-5] = Stack[-2]
0x264: Return(); Pop(4)

0x265: Stack[-1] = (int) 515560
0x266: Return(); Pop(0)

0x267: Stack[-1] = (int) 503345
0x268: Return(); Pop(0)

0x269: Stack[-1] = "ui/NPC_Citizen3.png"
0x26a: Return(); Pop(0)

0x26b: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x26c: Return(); Pop(0)

0x26d: Stack[-1] = (bool) 0
0x26e: Return(); Pop(0)

0x26f: PushEmpty()
0x270: Push("ood6Littleboy1")
0x271: Push((int) 1)
0x272: @ SetVariable(Stack[-2], Stack[-1])
0x273: Pop(2)
0x274: Return(); Pop(0)

0x275: PushEmpty()
0x276: PushEmpty(int, string)
0x277: Stack[-1] = "ood6Littleboy1"
0x278: Call2 0x248

0x279: Pop(1)
0x27a: Push((int) 0)
0x27b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27d: Stack[-2] = (bool) 1
0x27e: Return(); Pop(0)

0x27f: Stack[-2] = (bool) 0
0x280: Return(); Pop(0)

0x281: PushEmpty(int, int)
0x282: Push("branch")
0x283: @ GetVariable(Stack[-1], Stack[-2])
0x284: Pop(1)
0x285: Push((int) 0)
0x286: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x288: Stack[-3] = (int) 1
0x289: Return(); Pop(2)

0x28a: GOTO 0x290

0x28b: Push((int) 1)
0x28c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28e: Stack[-3] = (int) 2
0x28f: Return(); Pop(2)

0x290: Stack[-3] = (int) 3
0x291: Return(); Pop(2)

