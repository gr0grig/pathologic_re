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
	branch
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

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
	HasAnimation (3 args)
	GetVariable (2 args)

RunOp = 0xfc
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x106 Vars = (object)
		EVENT_7 Op = 0x13b Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1c3

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x27e

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x27c

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x280

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x282

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x26b

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
0x41: Call2 0x207

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
0x54: Push((int) 510591)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 510592)
0x5a: Push((int) 11685)
0x5b: Push((int) 11684)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 510599)
0x5f: Push((int) 11685)
0x60: Push((int) 11692)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 510600)
0x64: Push((int) -1)
0x65: Push((int) 11694)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x284

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x218

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
0x8b: Call2 0x284

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
0x9b: Call2 0x228

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x242

0xa4: Pop(0)
0xa5: Push((int) 11683)
0xa6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xa8: PushEmpty(string)
0xa9: Stack[-1] = "Neutral"
0xaa: Call2 0x89

0xab: Pop(1)
0xac: Push((int) 510591)
0xad: @@ SetMessage(Stack[-1])
0xae: Pop(1)
0xaf: @@ ClearReplies()
0xb0: Pop(0)
0xb1: Push((int) 510592)
0xb2: Push((int) 11685)
0xb3: Push((int) 11684)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Push((int) 510599)
0xb7: Push((int) 11685)
0xb8: Push((int) 11692)
0xb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba: Pop(3)
0xbb: Push((int) 510600)
0xbc: Push((int) -1)
0xbd: Push((int) 11694)
0xbe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf: Pop(3)
0xc0: Return(); Pop(0)

0xc1: Push((int) 11685)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xc4: PushEmpty(string)
0xc5: Stack[-1] = "Neutral"
0xc6: Call2 0x89

0xc7: Pop(1)
0xc8: Push((int) 510593)
0xc9: @@ SetMessage(Stack[-1])
0xca: Pop(1)
0xcb: @@ ClearReplies()
0xcc: Pop(0)
0xcd: Push((int) 510594)
0xce: Push((int) 11687)
0xcf: Push((int) 11686)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: Push((int) 510598)
0xd3: Push((int) 11687)
0xd4: Push((int) 11690)
0xd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6: Pop(3)
0xd7: Return(); Pop(0)

0xd8: Push((int) 11687)
0xd9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xdb: PushEmpty(string)
0xdc: Stack[-1] = "Neutral"
0xdd: Call2 0x89

0xde: Pop(1)
0xdf: Push((int) 510595)
0xe0: @@ SetMessage(Stack[-1])
0xe1: Pop(1)
0xe2: @@ ClearReplies()
0xe3: Pop(0)
0xe4: Push((int) 510596)
0xe5: Push((int) -1)
0xe6: Push((int) 11688)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Push((int) 510597)
0xea: Push((int) -1)
0xeb: Push((int) 11689)
0xec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf0: PushEmpty(bool)
0xf1: Call2 0x284

0xf2: Pop(0)
0xf3: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf4: @ lshStopAnimation()
0xf5: Pop(0)
0xf6: GOTO 0xf9

0xf7: @ StopAnimation()
0xf8: Pop(0)
0xf9: Return(); Pop(0)

0xfa: GOTO 0xa0

0xfb: Return(); Pop(0)

0xfc: Push((int) 1)
0xfd: @ Sleep(Stack[-1])
0xfe: Pop(1)
0xff: PushEmpty(float, float)
0x100: Stack[-2] = (int) 300
0x101: Stack[-1] = (int) 100
0x102: Call2 0x111

0x103: Pop(2)
0x104: GOTO 0xfc

0x105: Return(); Pop(0)

0x106: PushEmpty()
0x107: PushEmpty()
0x108: Call2 0x152

0x109: Pop(0)
0x10a: PushEmpty(int, object)
0x10b: Stack[-1] = Stack[-3]
0x10c: Push(-2, 1); TaskCall(0)
0x10d: Call2 0x0

0x10e: Pop(-2, 1); TaskReturn
0x10f: Pop(2)
0x110: Return(); Pop(0)

0x111: PushEmpty()
0x112: PushEmpty(bool)
0x113: Call2 0x1be

0x114: Pop(0)
0x115: Pop(1); Push((bool) Stack[-1] == 0)
0x116: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x117: Return(); Pop(0)

0x118: Push("player")
0x119: @ FindActor(Stack[-4], Stack[-1])
0x11a: Pop(1)
0x11b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x11c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x11d: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x11e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x11f: Push((int) 10)
0x120: Push((float)1.0)
0x121: @ SetTimer(Stack[-2], Stack[-1])
0x122: Pop(2)
0x123: PushEmpty()
0x124: Call2 0x160

0x125: Pop(0)
0x126: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x127: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x128: Push((int) 10)
0x129: @ KillTimer(Stack[-1])
0x12a: Pop(1)
0x12b: Return(); Pop(0)

0x12c: PushEmpty(float, float)
0x12d: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x12e: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12f: Stack[-3] = (bool) 0
0x130: Return(); Pop(2)

0x131: PushEmpty(float, object)
0x132: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x133: Call2 0x1b6

0x134: Pop(1)
0x135: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x136: Push( Stack[2 + Tasks[-1].StackPointer] )
0x137: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x138: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x139: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x13a: Return(); Pop(2)

0x13b: PushEmpty()
0x13c: Push((int) 10)
0x13d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x13f: PushEmpty(bool)
0x140: Call2 0x12c

0x141: Pop(0)
0x142: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x143: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x144: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x145: PushEmpty(object)
0x146: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x147: Call2 0x237

0x148: Pop(1)
0x149: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x14a: GOTO 0x151

0x14b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x14c: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14d: Push("head")
0x14e: @ UnlookAsync(Stack[-1])
0x14f: Pop(1)
0x150: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x151: Return(); Pop(0)

0x152: PushEmpty()
0x153: Call2 0x1b1

0x154: Pop(0)
0x155: Push((int) 10)
0x156: @ KillTimer(Stack[-1])
0x157: Pop(1)
0x158: Push( Stack[2 + Tasks[-1].StackPointer] )
0x159: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15a: Push("head")
0x15b: @ UnlookAsync(Stack[-1])
0x15c: Pop(1)
0x15d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x15e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x15f: Return(); Pop(0)

0x160: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x161: @ WaitForAnimEnd()
0x162: Pop(0)
0x163: PushEmpty(bool)
0x164: Call2 0x1be

0x165: Pop(0)
0x166: Pop(1); Push((bool) Stack[-1] == 0)
0x167: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x168: Return(); Pop(14)

0x169: PushEmpty(int)
0x16a: Call2 0x25a

0x16b: Stack[-8] = Stack[-1]
0x16c: Pop(1)
0x16d: Stack[-6] = (int) 0
0x16e: PushEmpty(bool)
0x16f: Stack[-1] = (bool) 0
0x170: Push((int) 5)
0x171: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x173: PushEmpty(bool)
0x174: Call2 0x1be

0x175: Pop(0)
0x176: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x177: Stack[-1] = (bool) 1
0x178: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x179: Push((int) 3)
0x17a: @ irand(Stack[-6], Stack[-1])
0x17b: Pop(1)
0x17c: Push((int) 0)
0x17d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x17f: Push(Stack[-7])
0x180: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x181: @ irand(Stack[-4], Stack[-7])
0x182: Pop(0)
0x183: Push("all")
0x184: PushEmpty(string, int)
0x185: Stack[-1] = Stack[-7]
0x186: Call2 0x253

0x187: Pop(1)
0x188: @ PlayAnimation(Stack[-2], Stack[-1])
0x189: Pop(2)
0x18a: @ WaitForAnimEnd(Stack[-3])
0x18b: Pop(0)
0x18c: Pop(0); Push((bool) Stack[-3] == 0)
0x18d: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18e: GOTO 0x1ac

0x18f: GOTO 0x1a1

0x190: Push((int) 1)
0x191: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x193: Push((int) 4)
0x194: @ rand(Stack[-3], Stack[-1])
0x195: Pop(1)
0x196: Push((int) 1)
0x197: Pop(1); Push(Stack[-3] + Stack[-1]);
0x198: @ Sleep(Stack[-1], Stack[-2])
0x199: Pop(1)
0x19a: Pop(0); Push((bool) Stack[-1] == 0)
0x19b: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19c: GOTO 0x1ac

0x19d: GOTO 0x1a1

0x19e: Push(Stack[-6])
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: GOTO 0x1ac

0x1a1: PushEmpty(bool)
0x1a2: Call2 0x1af

0x1a3: Pop(0)
0x1a4: Pop(1); Push((bool) Stack[-1] == 0)
0x1a5: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a6: GOTO 0x1ac

0x1a7: @ ResetAAS()
0x1a8: Pop(0)
0x1a9: Push((int) 1)
0x1aa: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1ab: GOTO 0x16e

0x1ac: @ ResetAAS()
0x1ad: Pop(0)
0x1ae: Return(); Pop(14)

0x1af: Stack[-1] = (bool) 1
0x1b0: Return(); Pop(0)

0x1b1: @ StopAnimation()
0x1b2: Pop(0)
0x1b3: @ StopGroup0()
0x1b4: Pop(0)
0x1b5: Return(); Pop(0)

0x1b6: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1b7: @ GetPosition(Stack[-3])
0x1b8: Pop(0)
0x1b9: @@ GetPosition(Stack[-2])
0x1ba: Pop(0)
0x1bb: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1bc: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1bd: Return(); Pop(6)

0x1be: PushEmpty(bool, bool)
0x1bf: @ IsLoaded(Stack[-1])
0x1c0: Pop(0)
0x1c1: Stack[-3] = Stack[-1]
0x1c2: Return(); Pop(2)

0x1c3: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1c4: @@ GetPosition(Stack[-8])
0x1c5: Pop(0)
0x1c6: @@ GetEyesHeight(Stack[-9])
0x1c7: Pop(0)
0x1c8: Push(CvectorIndex(Stack[-8], 1))
0x1c9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1ca: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1cb: @ GetPosition(Stack[-7])
0x1cc: Pop(0)
0x1cd: @ GetEyesHeight(Stack[-9])
0x1ce: Pop(0)
0x1cf: Push(CvectorIndex(Stack[-7], 1))
0x1d0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1d1: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1d2: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1d3: Push(CvectorIndex(Stack[-6], 1))
0x1d4: Stack[-1] = (int) 0
0x1d5: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1d6: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1d7: Pop(1); Push(Sqrt(Stack[-1]))
0x1d8: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1d9: Stack[-5] = -Stack[-6]; Pop(0);
0x1da: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1db: PushEmpty(cvector, cvector)
0x1dc: Push(CVector(0.0, 1.0, 0.0))
0x1dd: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1de: Call2 0x249

0x1df: Pop(1)
0x1e0: Push((int) 25)
0x1e1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1e2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e3: Push(CVector(0.0, 10.0, 0.0))
0x1e4: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1e5: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1e6: @ IsOverrideActive(Stack[-2])
0x1e7: Pop(0)
0x1e8: Push(Stack[-2])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1ea: Stack[-21] = (bool) 0
0x1eb: Return(); Pop(18)

0x1ec: @ StopWorld()
0x1ed: Pop(0)
0x1ee: @ CameraTransit(Stack[-3], Stack[-5])
0x1ef: Pop(0)
0x1f0: Push(CvectorIndex(Stack[-4], 0))
0x1f1: Push(CvectorIndex(Stack[-5], 2))
0x1f2: @ Rotate(Stack[-2], Stack[-1])
0x1f3: Pop(2)
0x1f4: PushEmpty(bool)
0x1f5: Call2 0x284

0x1f6: Pop(0)
0x1f7: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f8: GOTO 0x201

0x1f9: Push("head")
0x1fa: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1fb: Pop(1)
0x1fc: Push(Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fe: Push("head")
0x1ff: @ LookAsyncCamera(Stack[-1])
0x200: Pop(1)
0x201: @ CameraWaitForPlayFinish()
0x202: Pop(0)
0x203: @ ResumeWorld()
0x204: Pop(0)
0x205: Stack[-21] = (bool) 1
0x206: Return(); Pop(18)

0x207: PushEmpty(bool, bool)
0x208: @ CameraSwitchToNormal()
0x209: Pop(0)
0x20a: PushEmpty(bool)
0x20b: Call2 0x284

0x20c: Pop(0)
0x20d: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20e: GOTO 0x217

0x20f: Push("head")
0x210: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x211: Pop(1)
0x212: Push(Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x214: Push("head")
0x215: @ UnlookAsync(Stack[-1])
0x216: Pop(1)
0x217: Return(); Pop(2)

0x218: PushEmpty(bool, float, float, bool, float, float)
0x219: @ lshHasAnimation(Stack[-3], Stack[-7])
0x21a: Pop(0)
0x21b: Push(Stack[-3])
0x21c: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x21d: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x21e: Pop(0)
0x21f: Push((bool) 0)
0x220: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x221: Pop(1)
0x222: GOTO 0x227

0x223: Push("Can't find lsh animation : ")
0x224: Pop(1); Push(Stack[-1] + Stack[-8]);
0x225: @ Trace(Stack[-1])
0x226: Pop(1)
0x227: Return(); Pop(6)

0x228: PushEmpty(bool, float, float, bool, float, float)
0x229: @ lshHasAnimation(Stack[-3], Stack[-8])
0x22a: Pop(0)
0x22b: Push(Stack[-3])
0x22c: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22d: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x22e: Pop(0)
0x22f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x230: Pop(0)
0x231: GOTO 0x236

0x232: Push("Can't find lsh animation : ")
0x233: Pop(1); Push(Stack[-1] + Stack[-9]);
0x234: @ Trace(Stack[-1])
0x235: Pop(1)
0x236: Return(); Pop(6)

0x237: PushEmpty(float, cvector, float, cvector)
0x238: @@ GetEyesHeight(Stack[-2])
0x239: Pop(0)
0x23a: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x23b: Push(CvectorIndex(Stack[-1], 1))
0x23c: Stack[-1] = Stack[-3]
0x23d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x23e: Push("head")
0x23f: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x240: Pop(1)
0x241: Return(); Pop(4)

0x242: PushEmpty(bool)
0x243: Call2 0x284

0x244: Pop(0)
0x245: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x246: @ lshStopSpeech()
0x247: Pop(0)
0x248: Return(); Pop(0)

0x249: PushEmpty(float, float)
0x24a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x24b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x24c: Push((float)0.0)
0x24d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x250: Return(); Pop(2)

0x251: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x252: Return(); Pop(2)

0x253: PushEmpty(string, string)
0x254: Stack[-1] = "idle"
0x255: Push(Stack[-3])
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x258: Stack[-4] = Stack[-1]
0x259: Return(); Pop(2)

0x25a: PushEmpty(int, bool, int, bool)
0x25b: Stack[-2] = (int) 0
0x25c: Push("all")
0x25d: PushEmpty(string, int)
0x25e: Stack[-1] = Stack[-5]
0x25f: Call2 0x253

0x260: Pop(1)
0x261: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x262: Pop(2)
0x263: Pop(0); Push((bool) Stack[-1] == 0)
0x264: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x265: GOTO 0x269

0x266: Push((int) 1)
0x267: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x268: GOTO 0x25c

0x269: Stack[-5] = Stack[-2]
0x26a: Return(); Pop(4)

0x26b: PushEmpty(int, int)
0x26c: Push("branch")
0x26d: @ GetVariable(Stack[-1], Stack[-2])
0x26e: Pop(1)
0x26f: Push((int) 0)
0x270: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x271: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x272: Stack[-3] = (int) 1
0x273: Return(); Pop(2)

0x274: GOTO 0x27a

0x275: Push((int) 1)
0x276: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x278: Stack[-3] = (int) 2
0x279: Return(); Pop(2)

0x27a: Stack[-3] = (int) 3
0x27b: Return(); Pop(2)

0x27c: Stack[-1] = (int) 515556
0x27d: Return(); Pop(0)

0x27e: Stack[-1] = (int) 503341
0x27f: Return(); Pop(0)

0x280: Stack[-1] = "ui/NPC_Citizen3.png"
0x281: Return(); Pop(0)

0x282: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x283: Return(); Pop(0)

0x284: Stack[-1] = (bool) 0
0x285: Return(); Pop(0)

