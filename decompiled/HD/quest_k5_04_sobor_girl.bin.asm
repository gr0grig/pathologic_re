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
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png

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
	HasAnimation (3 args)
	GetVariable (2 args)

RunOp = 0xc4
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0xce Vars = (object)
		EVENT_7 Op = 0x103 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x18b

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x248

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x246

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x24a

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x24c

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x235

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
0x41: Call2 0x1d0

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
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x84

0x53: Pop(1)
0x54: Push((int) 539452)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 540736)
0x5a: Push((int) -1)
0x5b: Push((int) 42774)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 539453)
0x5f: Push((int) -1)
0x60: Push((int) 41384)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x24e

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x1e2

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all")
0x76: Push("idle")
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all")
0x7f: Push("idle")
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0x24e

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-2] = Stack[-3]
0x90: Push("")
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x1f2

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x20c

0x9f: Pop(0)
0xa0: Push((int) 41383)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 539452)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 540736)
0xad: Push((int) -1)
0xae: Push((int) 42774)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 539453)
0xb2: Push((int) -1)
0xb3: Push((int) 41384)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb8: PushEmpty(bool)
0xb9: Call2 0x24e

0xba: Pop(0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbc: @ lshStopAnimation()
0xbd: Pop(0)
0xbe: GOTO 0xc1

0xbf: @ StopAnimation()
0xc0: Pop(0)
0xc1: Return(); Pop(0)

0xc2: GOTO 0x9b

0xc3: Return(); Pop(0)

0xc4: Push((int) 1)
0xc5: @ Sleep(Stack[-1])
0xc6: Pop(1)
0xc7: PushEmpty(float, float)
0xc8: Stack[-2] = (int) 300
0xc9: Stack[-1] = (int) 100
0xca: Call2 0xd9

0xcb: Pop(2)
0xcc: GOTO 0xc4

0xcd: Return(); Pop(0)

0xce: PushEmpty()
0xcf: PushEmpty()
0xd0: Call2 0x11a

0xd1: Pop(0)
0xd2: PushEmpty(int, object)
0xd3: Stack[-1] = Stack[-3]
0xd4: Push(-2, 1); TaskCall(0)
0xd5: Call2 0x0

0xd6: Pop(-2, 1); TaskReturn
0xd7: Pop(2)
0xd8: Return(); Pop(0)

0xd9: PushEmpty()
0xda: PushEmpty(bool)
0xdb: Call2 0x186

0xdc: Pop(0)
0xdd: Pop(1); Push((bool) Stack[-1] == 0)
0xde: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdf: Return(); Pop(0)

0xe0: Push("player")
0xe1: @ FindActor(Stack[-4], Stack[-1])
0xe2: Pop(1)
0xe3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xe4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xe5: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0xe6: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0xe7: Push((int) 10)
0xe8: Push((float)1.0)
0xe9: @ SetTimer(Stack[-2], Stack[-1])
0xea: Pop(2)
0xeb: PushEmpty()
0xec: Call2 0x128

0xed: Pop(0)
0xee: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xef: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf0: Push((int) 10)
0xf1: @ KillTimer(Stack[-1])
0xf2: Pop(1)
0xf3: Return(); Pop(0)

0xf4: PushEmpty(float, float)
0xf5: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0xf6: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf7: Stack[-3] = (bool) 0
0xf8: Return(); Pop(2)

0xf9: PushEmpty(float, object)
0xfa: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0xfb: Call2 0x17e

0xfc: Pop(1)
0xfd: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xfe: Push( Stack[2 + Tasks[-1].StackPointer] )
0xff: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0x100: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x101: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x102: Return(); Pop(2)

0x103: PushEmpty()
0x104: Push((int) 10)
0x105: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x107: PushEmpty(bool)
0x108: Call2 0xf4

0x109: Pop(0)
0x10a: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10b: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x10c: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10d: PushEmpty(object)
0x10e: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x10f: Call2 0x201

0x110: Pop(1)
0x111: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x112: GOTO 0x119

0x113: Push( Stack[2 + Tasks[-1].StackPointer] )
0x114: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x115: Push("head")
0x116: @ UnlookAsync(Stack[-1])
0x117: Pop(1)
0x118: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x119: Return(); Pop(0)

0x11a: PushEmpty()
0x11b: Call2 0x179

0x11c: Pop(0)
0x11d: Push((int) 10)
0x11e: @ KillTimer(Stack[-1])
0x11f: Pop(1)
0x120: Push( Stack[2 + Tasks[-1].StackPointer] )
0x121: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x122: Push("head")
0x123: @ UnlookAsync(Stack[-1])
0x124: Pop(1)
0x125: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x126: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x127: Return(); Pop(0)

0x128: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x129: @ WaitForAnimEnd()
0x12a: Pop(0)
0x12b: PushEmpty(bool)
0x12c: Call2 0x186

0x12d: Pop(0)
0x12e: Pop(1); Push((bool) Stack[-1] == 0)
0x12f: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x130: Return(); Pop(14)

0x131: PushEmpty(int)
0x132: Call2 0x224

0x133: Stack[-8] = Stack[-1]
0x134: Pop(1)
0x135: Stack[-6] = (int) 0
0x136: PushEmpty(bool)
0x137: Stack[-1] = (bool) 0
0x138: Push((int) 5)
0x139: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13b: PushEmpty(bool)
0x13c: Call2 0x186

0x13d: Pop(0)
0x13e: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13f: Stack[-1] = (bool) 1
0x140: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x141: Push((int) 3)
0x142: @ irand(Stack[-6], Stack[-1])
0x143: Pop(1)
0x144: Push((int) 0)
0x145: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x147: Push(Stack[-7])
0x148: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x149: @ irand(Stack[-4], Stack[-7])
0x14a: Pop(0)
0x14b: Push("all")
0x14c: PushEmpty(string, int)
0x14d: Stack[-1] = Stack[-7]
0x14e: Call2 0x21d

0x14f: Pop(1)
0x150: @ PlayAnimation(Stack[-2], Stack[-1])
0x151: Pop(2)
0x152: @ WaitForAnimEnd(Stack[-3])
0x153: Pop(0)
0x154: Pop(0); Push((bool) Stack[-3] == 0)
0x155: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x156: GOTO 0x174

0x157: GOTO 0x169

0x158: Push((int) 1)
0x159: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x15b: Push((int) 4)
0x15c: @ rand(Stack[-3], Stack[-1])
0x15d: Pop(1)
0x15e: Push((int) 1)
0x15f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x160: @ Sleep(Stack[-1], Stack[-2])
0x161: Pop(1)
0x162: Pop(0); Push((bool) Stack[-1] == 0)
0x163: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x164: GOTO 0x174

0x165: GOTO 0x169

0x166: Push(Stack[-6])
0x167: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x168: GOTO 0x174

0x169: PushEmpty(bool)
0x16a: Call2 0x177

0x16b: Pop(0)
0x16c: Pop(1); Push((bool) Stack[-1] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: GOTO 0x174

0x16f: @ ResetAAS()
0x170: Pop(0)
0x171: Push((int) 1)
0x172: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x173: GOTO 0x136

0x174: @ ResetAAS()
0x175: Pop(0)
0x176: Return(); Pop(14)

0x177: Stack[-1] = (bool) 1
0x178: Return(); Pop(0)

0x179: @ StopAnimation()
0x17a: Pop(0)
0x17b: @ StopGroup0()
0x17c: Pop(0)
0x17d: Return(); Pop(0)

0x17e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x17f: @ GetPosition(Stack[-3])
0x180: Pop(0)
0x181: @@ GetPosition(Stack[-2])
0x182: Pop(0)
0x183: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x184: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x185: Return(); Pop(6)

0x186: PushEmpty(bool, bool)
0x187: @ IsLoaded(Stack[-1])
0x188: Pop(0)
0x189: Stack[-3] = Stack[-1]
0x18a: Return(); Pop(2)

0x18b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x18c: @@ GetPosition(Stack[-8])
0x18d: Pop(0)
0x18e: @@ GetEyesHeight(Stack[-9])
0x18f: Pop(0)
0x190: Push(CvectorIndex(Stack[-8], 1))
0x191: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x192: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x193: @ GetPosition(Stack[-7])
0x194: Pop(0)
0x195: @ GetEyesHeight(Stack[-9])
0x196: Pop(0)
0x197: Push(CvectorIndex(Stack[-7], 1))
0x198: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x199: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x19a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x19b: Push(CvectorIndex(Stack[-6], 1))
0x19c: Stack[-1] = (int) 0
0x19d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x19e: Pop(0); Push(Stack[-6] | Stack[-6]);
0x19f: Pop(1); Push(Sqrt(Stack[-1]))
0x1a0: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1a1: Stack[-5] = -Stack[-6]; Pop(0);
0x1a2: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1a3: PushEmpty(cvector, cvector)
0x1a4: Push(CVector(0.0, 1.0, 0.0))
0x1a5: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1a6: Call2 0x213

0x1a7: Pop(1)
0x1a8: Push((int) 25)
0x1a9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1aa: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ab: Push(CVector(0.0, 10.0, 0.0))
0x1ac: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1ad: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1ae: @ IsOverrideActive(Stack[-2])
0x1af: Pop(0)
0x1b0: Push(Stack[-2])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b2: Stack[-21] = (bool) 0
0x1b3: Return(); Pop(18)

0x1b4: @ StopWorld()
0x1b5: Pop(0)
0x1b6: Push((bool) 1)
0x1b7: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1b8: Pop(1)
0x1b9: Push(CvectorIndex(Stack[-4], 0))
0x1ba: Push(CvectorIndex(Stack[-5], 2))
0x1bb: @ Rotate(Stack[-2], Stack[-1])
0x1bc: Pop(2)
0x1bd: PushEmpty(bool)
0x1be: Call2 0x24e

0x1bf: Pop(0)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1c1: GOTO 0x1ca

0x1c2: Push("head")
0x1c3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1c4: Pop(1)
0x1c5: Push(Stack[-1])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c7: Push("head")
0x1c8: @ LookAsyncCamera(Stack[-1])
0x1c9: Pop(1)
0x1ca: @ CameraWaitForPlayFinish()
0x1cb: Pop(0)
0x1cc: @ ResumeWorld()
0x1cd: Pop(0)
0x1ce: Stack[-21] = (bool) 1
0x1cf: Return(); Pop(18)

0x1d0: PushEmpty(bool, bool)
0x1d1: Push((bool) 1)
0x1d2: @ CameraSwitchToNormal(Stack[-1])
0x1d3: Pop(1)
0x1d4: PushEmpty(bool)
0x1d5: Call2 0x24e

0x1d6: Pop(0)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d8: GOTO 0x1e1

0x1d9: Push("head")
0x1da: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1db: Pop(1)
0x1dc: Push(Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1de: Push("head")
0x1df: @ UnlookAsync(Stack[-1])
0x1e0: Pop(1)
0x1e1: Return(); Pop(2)

0x1e2: PushEmpty(bool, float, float, bool, float, float)
0x1e3: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1e4: Pop(0)
0x1e5: Push(Stack[-3])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e7: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1e8: Pop(0)
0x1e9: Push((bool) 0)
0x1ea: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1eb: Pop(1)
0x1ec: GOTO 0x1f1

0x1ed: Push("Can't find lsh animation : ")
0x1ee: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1ef: @ Trace(Stack[-1])
0x1f0: Pop(1)
0x1f1: Return(); Pop(6)

0x1f2: PushEmpty(bool, float, float, bool, float, float)
0x1f3: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1f4: Pop(0)
0x1f5: Push(Stack[-3])
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f7: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1f8: Pop(0)
0x1f9: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1fa: Pop(0)
0x1fb: GOTO 0x200

0x1fc: Push("Can't find lsh animation : ")
0x1fd: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1fe: @ Trace(Stack[-1])
0x1ff: Pop(1)
0x200: Return(); Pop(6)

0x201: PushEmpty(float, cvector, float, cvector)
0x202: @@ GetEyesHeight(Stack[-2])
0x203: Pop(0)
0x204: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x205: Push(CvectorIndex(Stack[-1], 1))
0x206: Stack[-1] = Stack[-3]
0x207: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x208: Push("head")
0x209: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x20a: Pop(1)
0x20b: Return(); Pop(4)

0x20c: PushEmpty(bool)
0x20d: Call2 0x24e

0x20e: Pop(0)
0x20f: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x210: @ lshStopSpeech()
0x211: Pop(0)
0x212: Return(); Pop(0)

0x213: PushEmpty(float, float)
0x214: Pop(0); Push(Stack[-3] | Stack[-3]);
0x215: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x216: Push((float)0.0)
0x217: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x219: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x21a: Return(); Pop(2)

0x21b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x21c: Return(); Pop(2)

0x21d: PushEmpty(string, string)
0x21e: Stack[-1] = "idle"
0x21f: Push(Stack[-3])
0x220: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x221: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x222: Stack[-4] = Stack[-1]
0x223: Return(); Pop(2)

0x224: PushEmpty(int, bool, int, bool)
0x225: Stack[-2] = (int) 0
0x226: Push("all")
0x227: PushEmpty(string, int)
0x228: Stack[-1] = Stack[-5]
0x229: Call2 0x21d

0x22a: Pop(1)
0x22b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x22c: Pop(2)
0x22d: Pop(0); Push((bool) Stack[-1] == 0)
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: GOTO 0x233

0x230: Push((int) 1)
0x231: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x232: GOTO 0x226

0x233: Stack[-5] = Stack[-2]
0x234: Return(); Pop(4)

0x235: PushEmpty(int, int)
0x236: Push("branch")
0x237: @ GetVariable(Stack[-1], Stack[-2])
0x238: Pop(1)
0x239: Push((int) 0)
0x23a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23c: Stack[-3] = (int) 1
0x23d: Return(); Pop(2)

0x23e: GOTO 0x244

0x23f: Push((int) 1)
0x240: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x242: Stack[-3] = (int) 2
0x243: Return(); Pop(2)

0x244: Stack[-3] = (int) 3
0x245: Return(); Pop(2)

0x246: Stack[-1] = (int) 515559
0x247: Return(); Pop(0)

0x248: Stack[-1] = (int) 503344
0x249: Return(); Pop(0)

0x24a: Stack[-1] = "ui/NPC_Citizen1.png"
0x24b: Return(); Pop(0)

0x24c: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x24d: Return(); Pop(0)

0x24e: Stack[-1] = (bool) 0
0x24f: Return(); Pop(0)

