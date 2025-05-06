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
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png
	k10q01
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

RunOp = 0xf2
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0xfc Vars = (object)
		EVENT_7 Op = 0x131 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1b9

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x250

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x24e

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x252

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x254

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x27c

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
0x41: Call2 0x1fd

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
0x54: Push((int) 526959)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x270

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 526960)
0x5f: Push((int) 29409)
0x60: Push((int) 28252)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 526963)
0x64: Push((int) -1)
0x65: Push((int) 28255)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x256

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x20e

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
0x8b: Call2 0x256

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
0x9b: Call2 0x21e

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x238

0xa4: Pop(0)
0xa5: Push((int) 28251)
0xa6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xa8: PushEmpty(string)
0xa9: Stack[-1] = "Neutral"
0xaa: Call2 0x89

0xab: Pop(1)
0xac: Push((int) 526959)
0xad: @@ SetMessage(Stack[-1])
0xae: Pop(1)
0xaf: @@ ClearReplies()
0xb0: Pop(0)
0xb1: PushEmpty(bool, object)
0xb2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb3: Call2 0x270

0xb4: Pop(1)
0xb5: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb6: Push((int) 526960)
0xb7: Push((int) 29409)
0xb8: Push((int) 28252)
0xb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba: Pop(3)
0xbb: Push((int) 526963)
0xbc: Push((int) -1)
0xbd: Push((int) 28255)
0xbe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf: Pop(3)
0xc0: Return(); Pop(0)

0xc1: Push((int) 29409)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc4: PushEmpty(string)
0xc5: Stack[-1] = "Neutral"
0xc6: Call2 0x89

0xc7: Pop(1)
0xc8: Push((int) 528067)
0xc9: @@ SetMessage(Stack[-1])
0xca: Pop(1)
0xcb: @@ ClearReplies()
0xcc: Pop(0)
0xcd: Push((int) 528068)
0xce: Push((int) 28253)
0xcf: Push((int) 29410)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: Return(); Pop(0)

0xd3: Push((int) 28253)
0xd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xd6: PushEmpty(string)
0xd7: Stack[-1] = "Neutral"
0xd8: Call2 0x89

0xd9: Pop(1)
0xda: Push((int) 526961)
0xdb: @@ SetMessage(Stack[-1])
0xdc: Pop(1)
0xdd: @@ ClearReplies()
0xde: Pop(0)
0xdf: Push((int) 526962)
0xe0: Push((int) -1)
0xe1: Push((int) 28254)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Return(); Pop(0)

0xe5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe6: PushEmpty(bool)
0xe7: Call2 0x256

0xe8: Pop(0)
0xe9: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xea: @ lshStopAnimation()
0xeb: Pop(0)
0xec: GOTO 0xef

0xed: @ StopAnimation()
0xee: Pop(0)
0xef: Return(); Pop(0)

0xf0: GOTO 0xa0

0xf1: Return(); Pop(0)

0xf2: PushEmpty(float, float)
0xf3: Stack[-2] = (int) 300
0xf4: Stack[-1] = (int) 100
0xf5: Call2 0x107

0xf6: Pop(2)
0xf7: Push((int) 3)
0xf8: @ Sleep(Stack[-1])
0xf9: Pop(1)
0xfa: GOTO 0xf2

0xfb: Return(); Pop(0)

0xfc: PushEmpty()
0xfd: PushEmpty()
0xfe: Call2 0x148

0xff: Pop(0)
0x100: PushEmpty(int, object)
0x101: Stack[-1] = Stack[-3]
0x102: Push(-2, 1); TaskCall(0)
0x103: Call2 0x0

0x104: Pop(-2, 1); TaskReturn
0x105: Pop(2)
0x106: Return(); Pop(0)

0x107: PushEmpty()
0x108: PushEmpty(bool)
0x109: Call2 0x1b4

0x10a: Pop(0)
0x10b: Pop(1); Push((bool) Stack[-1] == 0)
0x10c: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10d: Return(); Pop(0)

0x10e: Push("player")
0x10f: @ FindActor(Stack[-4], Stack[-1])
0x110: Pop(1)
0x111: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x112: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x113: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x114: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x115: Push((int) 10)
0x116: Push((float)1.0)
0x117: @ SetTimer(Stack[-2], Stack[-1])
0x118: Pop(2)
0x119: PushEmpty()
0x11a: Call2 0x156

0x11b: Pop(0)
0x11c: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x11d: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11e: Push((int) 10)
0x11f: @ KillTimer(Stack[-1])
0x120: Pop(1)
0x121: Return(); Pop(0)

0x122: PushEmpty(float, float)
0x123: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x124: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x125: Stack[-3] = (bool) 0
0x126: Return(); Pop(2)

0x127: PushEmpty(float, object)
0x128: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x129: Call2 0x1ac

0x12a: Pop(1)
0x12b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x12c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x12d: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12e: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x12f: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x130: Return(); Pop(2)

0x131: PushEmpty()
0x132: Push((int) 10)
0x133: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x135: PushEmpty(bool)
0x136: Call2 0x122

0x137: Pop(0)
0x138: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x139: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x13a: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13b: PushEmpty(object)
0x13c: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x13d: Call2 0x22d

0x13e: Pop(1)
0x13f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x140: GOTO 0x147

0x141: Push( Stack[2 + Tasks[-1].StackPointer] )
0x142: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x143: Push("head")
0x144: @ UnlookAsync(Stack[-1])
0x145: Pop(1)
0x146: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x147: Return(); Pop(0)

0x148: PushEmpty()
0x149: Call2 0x1a7

0x14a: Pop(0)
0x14b: Push((int) 10)
0x14c: @ KillTimer(Stack[-1])
0x14d: Pop(1)
0x14e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x14f: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x150: Push("head")
0x151: @ UnlookAsync(Stack[-1])
0x152: Pop(1)
0x153: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x154: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x155: Return(); Pop(0)

0x156: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x157: @ WaitForAnimEnd()
0x158: Pop(0)
0x159: PushEmpty(bool)
0x15a: Call2 0x1b4

0x15b: Pop(0)
0x15c: Pop(1); Push((bool) Stack[-1] == 0)
0x15d: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15e: Return(); Pop(14)

0x15f: PushEmpty(int)
0x160: Call2 0x25f

0x161: Stack[-8] = Stack[-1]
0x162: Pop(1)
0x163: Stack[-6] = (int) 0
0x164: PushEmpty(bool)
0x165: Stack[-1] = (bool) 0
0x166: Push((int) 5)
0x167: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x169: PushEmpty(bool)
0x16a: Call2 0x1b4

0x16b: Pop(0)
0x16c: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16d: Stack[-1] = (bool) 1
0x16e: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x16f: Push((int) 3)
0x170: @ irand(Stack[-6], Stack[-1])
0x171: Pop(1)
0x172: Push((int) 0)
0x173: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x175: Push(Stack[-7])
0x176: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x177: @ irand(Stack[-4], Stack[-7])
0x178: Pop(0)
0x179: Push("all")
0x17a: PushEmpty(string, int)
0x17b: Stack[-1] = Stack[-7]
0x17c: Call2 0x258

0x17d: Pop(1)
0x17e: @ PlayAnimation(Stack[-2], Stack[-1])
0x17f: Pop(2)
0x180: @ WaitForAnimEnd(Stack[-3])
0x181: Pop(0)
0x182: Pop(0); Push((bool) Stack[-3] == 0)
0x183: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x184: GOTO 0x1a2

0x185: GOTO 0x197

0x186: Push((int) 1)
0x187: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x189: Push((int) 4)
0x18a: @ rand(Stack[-3], Stack[-1])
0x18b: Pop(1)
0x18c: Push((int) 1)
0x18d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x18e: @ Sleep(Stack[-1], Stack[-2])
0x18f: Pop(1)
0x190: Pop(0); Push((bool) Stack[-1] == 0)
0x191: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x192: GOTO 0x1a2

0x193: GOTO 0x197

0x194: Push(Stack[-6])
0x195: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x196: GOTO 0x1a2

0x197: PushEmpty(bool)
0x198: Call2 0x1a5

0x199: Pop(0)
0x19a: Pop(1); Push((bool) Stack[-1] == 0)
0x19b: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19c: GOTO 0x1a2

0x19d: @ ResetAAS()
0x19e: Pop(0)
0x19f: Push((int) 1)
0x1a0: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1a1: GOTO 0x164

0x1a2: @ ResetAAS()
0x1a3: Pop(0)
0x1a4: Return(); Pop(14)

0x1a5: Stack[-1] = (bool) 1
0x1a6: Return(); Pop(0)

0x1a7: @ StopAnimation()
0x1a8: Pop(0)
0x1a9: @ StopGroup0()
0x1aa: Pop(0)
0x1ab: Return(); Pop(0)

0x1ac: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1ad: @ GetPosition(Stack[-3])
0x1ae: Pop(0)
0x1af: @@ GetPosition(Stack[-2])
0x1b0: Pop(0)
0x1b1: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1b2: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1b3: Return(); Pop(6)

0x1b4: PushEmpty(bool, bool)
0x1b5: @ IsLoaded(Stack[-1])
0x1b6: Pop(0)
0x1b7: Stack[-3] = Stack[-1]
0x1b8: Return(); Pop(2)

0x1b9: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1ba: @@ GetPosition(Stack[-8])
0x1bb: Pop(0)
0x1bc: @@ GetEyesHeight(Stack[-9])
0x1bd: Pop(0)
0x1be: Push(CvectorIndex(Stack[-8], 1))
0x1bf: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1c0: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1c1: @ GetPosition(Stack[-7])
0x1c2: Pop(0)
0x1c3: @ GetEyesHeight(Stack[-9])
0x1c4: Pop(0)
0x1c5: Push(CvectorIndex(Stack[-7], 1))
0x1c6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1c7: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1c8: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1c9: Push(CvectorIndex(Stack[-6], 1))
0x1ca: Stack[-1] = (int) 0
0x1cb: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1cc: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1cd: Pop(1); Push(Sqrt(Stack[-1]))
0x1ce: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1cf: Stack[-5] = -Stack[-6]; Pop(0);
0x1d0: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1d1: PushEmpty(cvector, cvector)
0x1d2: Push(CVector(0.0, 1.0, 0.0))
0x1d3: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1d4: Call2 0x23f

0x1d5: Pop(1)
0x1d6: Push((int) 25)
0x1d7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1d8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1d9: Push(CVector(0.0, 10.0, 0.0))
0x1da: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1db: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1dc: @ IsOverrideActive(Stack[-2])
0x1dd: Pop(0)
0x1de: Push(Stack[-2])
0x1df: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e0: Stack[-21] = (bool) 0
0x1e1: Return(); Pop(18)

0x1e2: @ StopWorld()
0x1e3: Pop(0)
0x1e4: @ CameraTransit(Stack[-3], Stack[-5])
0x1e5: Pop(0)
0x1e6: Push(CvectorIndex(Stack[-4], 0))
0x1e7: Push(CvectorIndex(Stack[-5], 2))
0x1e8: @ Rotate(Stack[-2], Stack[-1])
0x1e9: Pop(2)
0x1ea: PushEmpty(bool)
0x1eb: Call2 0x256

0x1ec: Pop(0)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ee: GOTO 0x1f7

0x1ef: Push("head")
0x1f0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1f1: Pop(1)
0x1f2: Push(Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f4: Push("head")
0x1f5: @ LookAsyncCamera(Stack[-1])
0x1f6: Pop(1)
0x1f7: @ CameraWaitForPlayFinish()
0x1f8: Pop(0)
0x1f9: @ ResumeWorld()
0x1fa: Pop(0)
0x1fb: Stack[-21] = (bool) 1
0x1fc: Return(); Pop(18)

0x1fd: PushEmpty(bool, bool)
0x1fe: @ CameraSwitchToNormal()
0x1ff: Pop(0)
0x200: PushEmpty(bool)
0x201: Call2 0x256

0x202: Pop(0)
0x203: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x204: GOTO 0x20d

0x205: Push("head")
0x206: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x207: Pop(1)
0x208: Push(Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20a: Push("head")
0x20b: @ UnlookAsync(Stack[-1])
0x20c: Pop(1)
0x20d: Return(); Pop(2)

0x20e: PushEmpty(bool, float, float, bool, float, float)
0x20f: @ lshHasAnimation(Stack[-3], Stack[-7])
0x210: Pop(0)
0x211: Push(Stack[-3])
0x212: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x213: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x214: Pop(0)
0x215: Push((bool) 0)
0x216: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x217: Pop(1)
0x218: GOTO 0x21d

0x219: Push("Can't find lsh animation : ")
0x21a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x21b: @ Trace(Stack[-1])
0x21c: Pop(1)
0x21d: Return(); Pop(6)

0x21e: PushEmpty(bool, float, float, bool, float, float)
0x21f: @ lshHasAnimation(Stack[-3], Stack[-8])
0x220: Pop(0)
0x221: Push(Stack[-3])
0x222: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x223: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x224: Pop(0)
0x225: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x226: Pop(0)
0x227: GOTO 0x22c

0x228: Push("Can't find lsh animation : ")
0x229: Pop(1); Push(Stack[-1] + Stack[-9]);
0x22a: @ Trace(Stack[-1])
0x22b: Pop(1)
0x22c: Return(); Pop(6)

0x22d: PushEmpty(float, cvector, float, cvector)
0x22e: @@ GetEyesHeight(Stack[-2])
0x22f: Pop(0)
0x230: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x231: Push(CvectorIndex(Stack[-1], 1))
0x232: Stack[-1] = Stack[-3]
0x233: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x234: Push("head")
0x235: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x236: Pop(1)
0x237: Return(); Pop(4)

0x238: PushEmpty(bool)
0x239: Call2 0x256

0x23a: Pop(0)
0x23b: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23c: @ lshStopSpeech()
0x23d: Pop(0)
0x23e: Return(); Pop(0)

0x23f: PushEmpty(float, float)
0x240: Pop(0); Push(Stack[-3] | Stack[-3]);
0x241: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x242: Push((float)0.0)
0x243: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x244: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x245: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x246: Return(); Pop(2)

0x247: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x248: Return(); Pop(2)

0x249: PushEmpty(int, int)
0x24a: @ GetVariable(Stack[-3], Stack[-1])
0x24b: Pop(0)
0x24c: Stack[-4] = Stack[-1]
0x24d: Return(); Pop(2)

0x24e: Stack[-1] = (int) 527721
0x24f: Return(); Pop(0)

0x250: Stack[-1] = (int) 527720
0x251: Return(); Pop(0)

0x252: Stack[-1] = "ui/NPC_Citizen1.png"
0x253: Return(); Pop(0)

0x254: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x255: Return(); Pop(0)

0x256: Stack[-1] = (bool) 0
0x257: Return(); Pop(0)

0x258: PushEmpty(string, string)
0x259: Stack[-1] = "idle"
0x25a: Push(Stack[-3])
0x25b: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x25d: Stack[-4] = Stack[-1]
0x25e: Return(); Pop(2)

0x25f: PushEmpty(int, bool, int, bool)
0x260: Stack[-2] = (int) 0
0x261: Push("all")
0x262: PushEmpty(string, int)
0x263: Stack[-1] = Stack[-5]
0x264: Call2 0x258

0x265: Pop(1)
0x266: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x267: Pop(2)
0x268: Pop(0); Push((bool) Stack[-1] == 0)
0x269: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x26a: GOTO 0x26e

0x26b: Push((int) 1)
0x26c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x26d: GOTO 0x261

0x26e: Stack[-5] = Stack[-2]
0x26f: Return(); Pop(4)

0x270: PushEmpty()
0x271: PushEmpty(int, string)
0x272: Stack[-1] = "k10q01"
0x273: Call2 0x249

0x274: Pop(1)
0x275: Push((int) 2)
0x276: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x278: Stack[-2] = (bool) 1
0x279: Return(); Pop(0)

0x27a: Stack[-2] = (bool) 0
0x27b: Return(); Pop(0)

0x27c: PushEmpty(int, int)
0x27d: Push("branch")
0x27e: @ GetVariable(Stack[-1], Stack[-2])
0x27f: Pop(1)
0x280: Push((int) 0)
0x281: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x282: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x283: Stack[-3] = (int) 1
0x284: Return(); Pop(2)

0x285: GOTO 0x28b

0x286: Push((int) 1)
0x287: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x289: Stack[-3] = (int) 2
0x28a: Return(); Pop(2)

0x28b: Stack[-3] = (int) 3
0x28c: Return(); Pop(2)

