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
	cleanup
	GetPosition
	GetEyesHeight
	head
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
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetPosition (1 args)
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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	HasAnimation (3 args)
	GetVariable (2 args)

RunOp = 0xcf
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0xc4 Vars = (object)
		EVENT_26 Op = 0xf8 Vars = (string)
		EVENT_5 Op = 0x100 Vars = ()
		EVENT_6 Op = 0x105 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x172

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x228

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x226

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x22a

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x22c

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x215

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
0x41: Call2 0x1b6

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
0x54: Push((int) 521002)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 521003)
0x5a: Push((int) -1)
0x5b: Push((int) 22216)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 528489)
0x5f: Push((int) -1)
0x60: Push((int) 29878)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x22e

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x1c7

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
0x86: Call2 0x22e

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
0x96: Call2 0x1d7

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x1e6

0x9f: Pop(0)
0xa0: Push((int) 22215)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 521002)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 521003)
0xad: Push((int) -1)
0xae: Push((int) 22216)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 528489)
0xb2: Push((int) -1)
0xb3: Push((int) 29878)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb8: PushEmpty(bool)
0xb9: Call2 0x22e

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

0xc4: PushEmpty()
0xc5: PushEmpty()
0xc6: Call2 0x168

0xc7: Pop(0)
0xc8: PushEmpty(int, object)
0xc9: Stack[-1] = Stack[-3]
0xca: Push(-2, 1); TaskCall(0)
0xcb: Call2 0x0

0xcc: Pop(-2, 1); TaskReturn
0xcd: Pop(2)
0xce: Return(); Pop(0)

0xcf: PushEmpty(float, float)
0xd0: PushEmpty(bool)
0xd1: Call2 0x16d

0xd2: Pop(0)
0xd3: Pop(1); Push((bool) Stack[-1] == 0)
0xd4: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd5: @ Hold()
0xd6: Pop(0)
0xd7: GOTO 0xd0

0xd8: Push((int) 3)
0xd9: @ rand(Stack[-2], Stack[-1])
0xda: Pop(1)
0xdb: Push((int) 3)
0xdc: Pop(1); Push(Stack[-2] + Stack[-1]);
0xdd: @ Sleep(Stack[-1])
0xde: Pop(1)
0xdf: PushEmpty()
0xe0: Call2 0x117

0xe1: Pop(0)
0xe2: GOTO 0xd0

0xe3: Return(); Pop(2)

0xe4: PushEmpty(bool, bool)
0xe5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xe6: @ IsLoaded(Stack[-1])
0xe7: Pop(0)
0xe8: PushEmpty(bool)
0xe9: Stack[-1] = (bool) 0
0xea: Pop(0); Push((bool) Stack[-2] == 0)
0xeb: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xec: PushEmpty(bool)
0xed: Call2 0x115

0xee: Pop(0)
0xef: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xf0: Stack[-1] = (bool) 1
0xf1: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf2: PushEmpty(object)
0xf3: Call2 0x1ed

0xf4: Pop(0)
0xf5: @ RemoveActor(Stack[-1])
0xf6: Pop(1)
0xf7: Return(); Pop(2)

0xf8: PushEmpty()
0xf9: Push("cleanup")
0xfa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfc: PushEmpty()
0xfd: Call2 0xe4

0xfe: Pop(0)
0xff: Return(); Pop(0)

0x100: @ StopGroup0()
0x101: Pop(0)
0x102: @ sync()
0x103: Pop(0)
0x104: Return(); Pop(0)

0x105: PushEmpty(bool)
0x106: Stack[-1] = (bool) 0
0x107: Push( Stack[0 + Tasks[-1].StackPointer] )
0x108: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x109: PushEmpty(bool)
0x10a: Call2 0x115

0x10b: Pop(0)
0x10c: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10d: Stack[-1] = (bool) 1
0x10e: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x10f: PushEmpty(object)
0x110: Call2 0x1ed

0x111: Pop(0)
0x112: @ RemoveActor(Stack[-1])
0x113: Pop(1)
0x114: Return(); Pop(0)

0x115: Stack[-1] = (bool) 1
0x116: Return(); Pop(0)

0x117: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x118: @ WaitForAnimEnd()
0x119: Pop(0)
0x11a: PushEmpty(bool)
0x11b: Call2 0x16d

0x11c: Pop(0)
0x11d: Pop(1); Push((bool) Stack[-1] == 0)
0x11e: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11f: Return(); Pop(14)

0x120: PushEmpty(int)
0x121: Call2 0x204

0x122: Stack[-8] = Stack[-1]
0x123: Pop(1)
0x124: Stack[-6] = (int) 0
0x125: PushEmpty(bool)
0x126: Stack[-1] = (bool) 0
0x127: Push((int) 5)
0x128: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12a: PushEmpty(bool)
0x12b: Call2 0x16d

0x12c: Pop(0)
0x12d: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12e: Stack[-1] = (bool) 1
0x12f: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x130: Push((int) 3)
0x131: @ irand(Stack[-6], Stack[-1])
0x132: Pop(1)
0x133: Push((int) 0)
0x134: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x136: Push(Stack[-7])
0x137: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x138: @ irand(Stack[-4], Stack[-7])
0x139: Pop(0)
0x13a: Push("all")
0x13b: PushEmpty(string, int)
0x13c: Stack[-1] = Stack[-7]
0x13d: Call2 0x1fd

0x13e: Pop(1)
0x13f: @ PlayAnimation(Stack[-2], Stack[-1])
0x140: Pop(2)
0x141: @ WaitForAnimEnd(Stack[-3])
0x142: Pop(0)
0x143: Pop(0); Push((bool) Stack[-3] == 0)
0x144: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x145: GOTO 0x163

0x146: GOTO 0x158

0x147: Push((int) 1)
0x148: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x14a: Push((int) 4)
0x14b: @ rand(Stack[-3], Stack[-1])
0x14c: Pop(1)
0x14d: Push((int) 1)
0x14e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x14f: @ Sleep(Stack[-1], Stack[-2])
0x150: Pop(1)
0x151: Pop(0); Push((bool) Stack[-1] == 0)
0x152: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x153: GOTO 0x163

0x154: GOTO 0x158

0x155: Push(Stack[-6])
0x156: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x157: GOTO 0x163

0x158: PushEmpty(bool)
0x159: Call2 0x166

0x15a: Pop(0)
0x15b: Pop(1); Push((bool) Stack[-1] == 0)
0x15c: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15d: GOTO 0x163

0x15e: @ ResetAAS()
0x15f: Pop(0)
0x160: Push((int) 1)
0x161: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x162: GOTO 0x125

0x163: @ ResetAAS()
0x164: Pop(0)
0x165: Return(); Pop(14)

0x166: Stack[-1] = (bool) 1
0x167: Return(); Pop(0)

0x168: @ StopAnimation()
0x169: Pop(0)
0x16a: @ StopGroup0()
0x16b: Pop(0)
0x16c: Return(); Pop(0)

0x16d: PushEmpty(bool, bool)
0x16e: @ IsLoaded(Stack[-1])
0x16f: Pop(0)
0x170: Stack[-3] = Stack[-1]
0x171: Return(); Pop(2)

0x172: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x173: @@ GetPosition(Stack[-8])
0x174: Pop(0)
0x175: @@ GetEyesHeight(Stack[-9])
0x176: Pop(0)
0x177: Push(CvectorIndex(Stack[-8], 1))
0x178: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x179: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x17a: @ GetPosition(Stack[-7])
0x17b: Pop(0)
0x17c: @ GetEyesHeight(Stack[-9])
0x17d: Pop(0)
0x17e: Push(CvectorIndex(Stack[-7], 1))
0x17f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x180: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x181: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x182: Push(CvectorIndex(Stack[-6], 1))
0x183: Stack[-1] = (int) 0
0x184: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x185: Pop(0); Push(Stack[-6] | Stack[-6]);
0x186: Pop(1); Push(Sqrt(Stack[-1]))
0x187: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x188: Stack[-5] = -Stack[-6]; Pop(0);
0x189: Pop(0); Push(Stack[-6] * Stack[-19]);
0x18a: PushEmpty(cvector, cvector)
0x18b: Push(CVector(0.0, 1.0, 0.0))
0x18c: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x18d: Call2 0x1f3

0x18e: Pop(1)
0x18f: Push((int) 25)
0x190: Pop(2); Push(Stack[-2] * Stack[-1]);
0x191: Pop(2); Push(Stack[-2] + Stack[-1]);
0x192: Push(CVector(0.0, 10.0, 0.0))
0x193: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x194: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x195: @ IsOverrideActive(Stack[-2])
0x196: Pop(0)
0x197: Push(Stack[-2])
0x198: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x199: Stack[-21] = (bool) 0
0x19a: Return(); Pop(18)

0x19b: @ StopWorld()
0x19c: Pop(0)
0x19d: @ CameraTransit(Stack[-3], Stack[-5])
0x19e: Pop(0)
0x19f: Push(CvectorIndex(Stack[-4], 0))
0x1a0: Push(CvectorIndex(Stack[-5], 2))
0x1a1: @ Rotate(Stack[-2], Stack[-1])
0x1a2: Pop(2)
0x1a3: PushEmpty(bool)
0x1a4: Call2 0x22e

0x1a5: Pop(0)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a7: GOTO 0x1b0

0x1a8: Push("head")
0x1a9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1aa: Pop(1)
0x1ab: Push(Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ad: Push("head")
0x1ae: @ LookAsyncCamera(Stack[-1])
0x1af: Pop(1)
0x1b0: @ CameraWaitForPlayFinish()
0x1b1: Pop(0)
0x1b2: @ ResumeWorld()
0x1b3: Pop(0)
0x1b4: Stack[-21] = (bool) 1
0x1b5: Return(); Pop(18)

0x1b6: PushEmpty(bool, bool)
0x1b7: @ CameraSwitchToNormal()
0x1b8: Pop(0)
0x1b9: PushEmpty(bool)
0x1ba: Call2 0x22e

0x1bb: Pop(0)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bd: GOTO 0x1c6

0x1be: Push("head")
0x1bf: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1c0: Pop(1)
0x1c1: Push(Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c3: Push("head")
0x1c4: @ UnlookAsync(Stack[-1])
0x1c5: Pop(1)
0x1c6: Return(); Pop(2)

0x1c7: PushEmpty(bool, float, float, bool, float, float)
0x1c8: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1c9: Pop(0)
0x1ca: Push(Stack[-3])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cc: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1cd: Pop(0)
0x1ce: Push((bool) 0)
0x1cf: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(1)
0x1d1: GOTO 0x1d6

0x1d2: Push("Can't find lsh animation : ")
0x1d3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1d4: @ Trace(Stack[-1])
0x1d5: Pop(1)
0x1d6: Return(); Pop(6)

0x1d7: PushEmpty(bool, float, float, bool, float, float)
0x1d8: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1d9: Pop(0)
0x1da: Push(Stack[-3])
0x1db: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1dc: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1dd: Pop(0)
0x1de: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1df: Pop(0)
0x1e0: GOTO 0x1e5

0x1e1: Push("Can't find lsh animation : ")
0x1e2: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1e3: @ Trace(Stack[-1])
0x1e4: Pop(1)
0x1e5: Return(); Pop(6)

0x1e6: PushEmpty(bool)
0x1e7: Call2 0x22e

0x1e8: Pop(0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1ea: @ lshStopSpeech()
0x1eb: Pop(0)
0x1ec: Return(); Pop(0)

0x1ed: PushEmpty(object, object)
0x1ee: @ self(Stack[-1])
0x1ef: Pop(0)
0x1f0: Stack[-3] = Stack[-1]
0x1f1: Return(); Pop(2)

0x1f2: Stack[-1] = 0
0x1f3: PushEmpty(float, float)
0x1f4: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1f5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1f6: Push((float)0.0)
0x1f7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f9: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1fa: Return(); Pop(2)

0x1fb: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1fc: Return(); Pop(2)

0x1fd: PushEmpty(string, string)
0x1fe: Stack[-1] = "idle"
0x1ff: Push(Stack[-3])
0x200: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x201: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x202: Stack[-4] = Stack[-1]
0x203: Return(); Pop(2)

0x204: PushEmpty(int, bool, int, bool)
0x205: Stack[-2] = (int) 0
0x206: Push("all")
0x207: PushEmpty(string, int)
0x208: Stack[-1] = Stack[-5]
0x209: Call2 0x1fd

0x20a: Pop(1)
0x20b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x20c: Pop(2)
0x20d: Pop(0); Push((bool) Stack[-1] == 0)
0x20e: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20f: GOTO 0x213

0x210: Push((int) 1)
0x211: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x212: GOTO 0x206

0x213: Stack[-5] = Stack[-2]
0x214: Return(); Pop(4)

0x215: PushEmpty(int, int)
0x216: Push("branch")
0x217: @ GetVariable(Stack[-1], Stack[-2])
0x218: Pop(1)
0x219: Push((int) 0)
0x21a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21c: Stack[-3] = (int) 1
0x21d: Return(); Pop(2)

0x21e: GOTO 0x224

0x21f: Push((int) 1)
0x220: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x222: Stack[-3] = (int) 2
0x223: Return(); Pop(2)

0x224: Stack[-3] = (int) 3
0x225: Return(); Pop(2)

0x226: Stack[-1] = (int) 515556
0x227: Return(); Pop(0)

0x228: Stack[-1] = (int) 503341
0x229: Return(); Pop(0)

0x22a: Stack[-1] = "ui/NPC_Citizen3.png"
0x22b: Return(); Pop(0)

0x22c: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x22d: Return(); Pop(0)

0x22e: Stack[-1] = (bool) 0
0x22f: Return(); Pop(0)

