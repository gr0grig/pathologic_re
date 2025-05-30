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
	ood5Prisoner1
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
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x11e
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa9 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x115 Vars = (object)
		EVENT_26 Op = 0x147 Vars = (string)
		EVENT_5 Op = 0x14f Vars = ()
		EVENT_6 Op = 0x154 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1c1

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x28e

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x28c

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x290

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x292

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x27b

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
0x41: Call2 0x205

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
0x4f: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x26f

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x93

0x58: Pop(1)
0x59: Push((int) 511803)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 511804)
0x5f: Push((int) 13015)
0x60: Push((int) 13014)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x75

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral"
0x66: Call2 0x93

0x67: Pop(1)
0x68: Push((int) 512549)
0x69: @@ SetMessage(Stack[-1])
0x6a: Pop(1)
0x6b: @@ ClearReplies()
0x6c: Pop(0)
0x6d: Push((int) 512550)
0x6e: Push((int) -1)
0x6f: Push((int) 13719)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: GOTO 0x75

0x73: Return(); Pop(0)

0x74: GOTO 0x4e

0x75: PushEmpty(bool)
0x76: Call2 0x294

0x77: Pop(0)
0x78: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x79: @ lshWaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: PushEmpty(string)
0x7f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x80: Call2 0x216

0x81: Pop(1)
0x82: GOTO 0x79

0x83: GOTO 0x92

0x84: Push("all")
0x85: Push("idle")
0x86: @ PlayAnimation(Stack[-2], Stack[-1])
0x87: Pop(2)
0x88: @ WaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: Push("all")
0x8e: Push("idle")
0x8f: @ PlayAnimation(Stack[-2], Stack[-1])
0x90: Pop(2)
0x91: GOTO 0x88

0x92: Return(); Pop(0)

0x93: PushEmpty()
0x94: PushEmpty(bool)
0x95: Call2 0x294

0x96: Pop(0)
0x97: Pop(1); Push((bool) Stack[-1] == 0)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(0)

0x9a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: Return(); Pop(0)

0x9d: PushEmpty(string, bool)
0x9e: Stack[-2] = Stack[-3]
0x9f: Push("")
0xa0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa1: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa2: Stack[-1] = (bool) 0
0xa3: GOTO 0xa5

0xa4: Stack[-1] = (bool) 1
0xa5: Call2 0x226

0xa6: Pop(2)
0xa7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: Push((int) 1)
0xab: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xac: PushEmpty()
0xad: Call2 0x235

0xae: Pop(0)
0xaf: Push((int) 13016)
0xb0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb2: PushEmpty(object, object)
0xb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5: Call2 0x269

0xb6: Pop(2)
0xb7: Push((int) 13017)
0xb8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xba: PushEmpty(object, object)
0xbb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd: Call2 0x269

0xbe: Pop(2)
0xbf: Push((int) 13013)
0xc0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xc2: PushEmpty(bool, object)
0xc3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc4: Call2 0x26f

0xc5: Pop(1)
0xc6: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xc7: PushEmpty(string)
0xc8: Stack[-1] = "Neutral"
0xc9: Call2 0x93

0xca: Pop(1)
0xcb: Push((int) 511803)
0xcc: @@ SetMessage(Stack[-1])
0xcd: Pop(1)
0xce: @@ ClearReplies()
0xcf: Pop(0)
0xd0: Push((int) 511804)
0xd1: Push((int) 13015)
0xd2: Push((int) 13014)
0xd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4: Pop(3)
0xd5: Return(); Pop(0)

0xd6: PushEmpty(string)
0xd7: Stack[-1] = "Neutral"
0xd8: Call2 0x93

0xd9: Pop(1)
0xda: Push((int) 512549)
0xdb: @@ SetMessage(Stack[-1])
0xdc: Pop(1)
0xdd: @@ ClearReplies()
0xde: Pop(0)
0xdf: Push((int) 512550)
0xe0: Push((int) -1)
0xe1: Push((int) 13719)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Return(); Pop(0)

0xe5: Push((int) 13019)
0xe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe8: Push((int) 13015)
0xe9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xeb: PushEmpty(string)
0xec: Stack[-1] = "Neutral"
0xed: Call2 0x93

0xee: Pop(1)
0xef: Push((int) 511805)
0xf0: @@ SetMessage(Stack[-1])
0xf1: Pop(1)
0xf2: @@ ClearReplies()
0xf3: Pop(0)
0xf4: Push((int) 511806)
0xf5: Push((int) -1)
0xf6: Push((int) 13016)
0xf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8: Pop(3)
0xf9: Push((int) 511807)
0xfa: Push((int) -1)
0xfb: Push((int) 13017)
0xfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd: Pop(3)
0xfe: Return(); Pop(0)

0xff: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x100: PushEmpty(bool)
0x101: Call2 0x294

0x102: Pop(0)
0x103: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x104: @ lshStopAnimation()
0x105: Pop(0)
0x106: GOTO 0x109

0x107: @ StopAnimation()
0x108: Pop(0)
0x109: Return(); Pop(0)

0x10a: GOTO 0xaa

0x10b: Return(); Pop(0)

0x10c: PushEmpty()
0x10d: PushEmpty(int, object)
0x10e: Stack[-1] = Stack[-3]
0x10f: Push(-2, 1); TaskCall(0)
0x110: Call2 0x0

0x111: Pop(-2, 1); TaskReturn
0x112: Stack[-4] = Stack[-2]
0x113: Pop(2)
0x114: Return(); Pop(0)

0x115: PushEmpty()
0x116: PushEmpty()
0x117: Call2 0x1b7

0x118: Pop(0)
0x119: PushEmpty(int, object)
0x11a: Stack[-1] = Stack[-3]
0x11b: Call2 0x10c

0x11c: Pop(2)
0x11d: Return(); Pop(0)

0x11e: PushEmpty(float, float)
0x11f: PushEmpty(bool)
0x120: Call2 0x1bc

0x121: Pop(0)
0x122: Pop(1); Push((bool) Stack[-1] == 0)
0x123: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x124: @ Hold()
0x125: Pop(0)
0x126: GOTO 0x11f

0x127: Push((int) 3)
0x128: @ rand(Stack[-2], Stack[-1])
0x129: Pop(1)
0x12a: Push((int) 3)
0x12b: Pop(1); Push(Stack[-2] + Stack[-1]);
0x12c: @ Sleep(Stack[-1])
0x12d: Pop(1)
0x12e: PushEmpty()
0x12f: Call2 0x166

0x130: Pop(0)
0x131: GOTO 0x11f

0x132: Return(); Pop(2)

0x133: PushEmpty(bool, bool)
0x134: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x135: @ IsLoaded(Stack[-1])
0x136: Pop(0)
0x137: PushEmpty(bool)
0x138: Stack[-1] = (bool) 0
0x139: Pop(0); Push((bool) Stack[-2] == 0)
0x13a: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13b: PushEmpty(bool)
0x13c: Call2 0x164

0x13d: Pop(0)
0x13e: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13f: Stack[-1] = (bool) 1
0x140: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x141: PushEmpty(object)
0x142: Call2 0x23c

0x143: Pop(0)
0x144: @ RemoveActor(Stack[-1])
0x145: Pop(1)
0x146: Return(); Pop(2)

0x147: PushEmpty()
0x148: Push("cleanup")
0x149: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x14b: PushEmpty()
0x14c: Call2 0x133

0x14d: Pop(0)
0x14e: Return(); Pop(0)

0x14f: @ StopGroup0()
0x150: Pop(0)
0x151: @ sync()
0x152: Pop(0)
0x153: Return(); Pop(0)

0x154: PushEmpty(bool)
0x155: Stack[-1] = (bool) 0
0x156: Push( Stack[0 + Tasks[-1].StackPointer] )
0x157: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x158: PushEmpty(bool)
0x159: Call2 0x164

0x15a: Pop(0)
0x15b: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15c: Stack[-1] = (bool) 1
0x15d: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x15e: PushEmpty(object)
0x15f: Call2 0x23c

0x160: Pop(0)
0x161: @ RemoveActor(Stack[-1])
0x162: Pop(1)
0x163: Return(); Pop(0)

0x164: Stack[-1] = (bool) 1
0x165: Return(); Pop(0)

0x166: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x167: @ WaitForAnimEnd()
0x168: Pop(0)
0x169: PushEmpty(bool)
0x16a: Call2 0x1bc

0x16b: Pop(0)
0x16c: Pop(1); Push((bool) Stack[-1] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: Return(); Pop(14)

0x16f: PushEmpty(int)
0x170: Call2 0x258

0x171: Stack[-8] = Stack[-1]
0x172: Pop(1)
0x173: Stack[-6] = (int) 0
0x174: PushEmpty(bool)
0x175: Stack[-1] = (bool) 0
0x176: Push((int) 5)
0x177: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x179: PushEmpty(bool)
0x17a: Call2 0x1bc

0x17b: Pop(0)
0x17c: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17d: Stack[-1] = (bool) 1
0x17e: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x17f: Push((int) 3)
0x180: @ irand(Stack[-6], Stack[-1])
0x181: Pop(1)
0x182: Push((int) 0)
0x183: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x184: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x185: Push(Stack[-7])
0x186: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x187: @ irand(Stack[-4], Stack[-7])
0x188: Pop(0)
0x189: Push("all")
0x18a: PushEmpty(string, int)
0x18b: Stack[-1] = Stack[-7]
0x18c: Call2 0x251

0x18d: Pop(1)
0x18e: @ PlayAnimation(Stack[-2], Stack[-1])
0x18f: Pop(2)
0x190: @ WaitForAnimEnd(Stack[-3])
0x191: Pop(0)
0x192: Pop(0); Push((bool) Stack[-3] == 0)
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: GOTO 0x1b2

0x195: GOTO 0x1a7

0x196: Push((int) 1)
0x197: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x199: Push((int) 4)
0x19a: @ rand(Stack[-3], Stack[-1])
0x19b: Pop(1)
0x19c: Push((int) 1)
0x19d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x19e: @ Sleep(Stack[-1], Stack[-2])
0x19f: Pop(1)
0x1a0: Pop(0); Push((bool) Stack[-1] == 0)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a2: GOTO 0x1b2

0x1a3: GOTO 0x1a7

0x1a4: Push(Stack[-6])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a6: GOTO 0x1b2

0x1a7: PushEmpty(bool)
0x1a8: Call2 0x1b5

0x1a9: Pop(0)
0x1aa: Pop(1); Push((bool) Stack[-1] == 0)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1ac: GOTO 0x1b2

0x1ad: @ ResetAAS()
0x1ae: Pop(0)
0x1af: Push((int) 1)
0x1b0: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1b1: GOTO 0x174

0x1b2: @ ResetAAS()
0x1b3: Pop(0)
0x1b4: Return(); Pop(14)

0x1b5: Stack[-1] = (bool) 1
0x1b6: Return(); Pop(0)

0x1b7: @ StopAnimation()
0x1b8: Pop(0)
0x1b9: @ StopGroup0()
0x1ba: Pop(0)
0x1bb: Return(); Pop(0)

0x1bc: PushEmpty(bool, bool)
0x1bd: @ IsLoaded(Stack[-1])
0x1be: Pop(0)
0x1bf: Stack[-3] = Stack[-1]
0x1c0: Return(); Pop(2)

0x1c1: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1c2: @@ GetPosition(Stack[-8])
0x1c3: Pop(0)
0x1c4: @@ GetEyesHeight(Stack[-9])
0x1c5: Pop(0)
0x1c6: Push(CvectorIndex(Stack[-8], 1))
0x1c7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1c8: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1c9: @ GetPosition(Stack[-7])
0x1ca: Pop(0)
0x1cb: @ GetEyesHeight(Stack[-9])
0x1cc: Pop(0)
0x1cd: Push(CvectorIndex(Stack[-7], 1))
0x1ce: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1cf: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1d0: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1d1: Push(CvectorIndex(Stack[-6], 1))
0x1d2: Stack[-1] = (int) 0
0x1d3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1d4: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1d5: Pop(1); Push(Sqrt(Stack[-1]))
0x1d6: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1d7: Stack[-5] = -Stack[-6]; Pop(0);
0x1d8: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1d9: PushEmpty(cvector, cvector)
0x1da: Push(CVector(0.0, 1.0, 0.0))
0x1db: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1dc: Call2 0x242

0x1dd: Pop(1)
0x1de: Push((int) 25)
0x1df: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1e0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e1: Push(CVector(0.0, 10.0, 0.0))
0x1e2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1e3: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1e4: @ IsOverrideActive(Stack[-2])
0x1e5: Pop(0)
0x1e6: Push(Stack[-2])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e8: Stack[-21] = (bool) 0
0x1e9: Return(); Pop(18)

0x1ea: @ StopWorld()
0x1eb: Pop(0)
0x1ec: @ CameraTransit(Stack[-3], Stack[-5])
0x1ed: Pop(0)
0x1ee: Push(CvectorIndex(Stack[-4], 0))
0x1ef: Push(CvectorIndex(Stack[-5], 2))
0x1f0: @ Rotate(Stack[-2], Stack[-1])
0x1f1: Pop(2)
0x1f2: PushEmpty(bool)
0x1f3: Call2 0x294

0x1f4: Pop(0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: GOTO 0x1ff

0x1f7: Push("head")
0x1f8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1f9: Pop(1)
0x1fa: Push(Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fc: Push("head")
0x1fd: @ LookAsyncCamera(Stack[-1])
0x1fe: Pop(1)
0x1ff: @ CameraWaitForPlayFinish()
0x200: Pop(0)
0x201: @ ResumeWorld()
0x202: Pop(0)
0x203: Stack[-21] = (bool) 1
0x204: Return(); Pop(18)

0x205: PushEmpty(bool, bool)
0x206: @ CameraSwitchToNormal()
0x207: Pop(0)
0x208: PushEmpty(bool)
0x209: Call2 0x294

0x20a: Pop(0)
0x20b: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20c: GOTO 0x215

0x20d: Push("head")
0x20e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x20f: Pop(1)
0x210: Push(Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x212: Push("head")
0x213: @ UnlookAsync(Stack[-1])
0x214: Pop(1)
0x215: Return(); Pop(2)

0x216: PushEmpty(bool, float, float, bool, float, float)
0x217: @ lshHasAnimation(Stack[-3], Stack[-7])
0x218: Pop(0)
0x219: Push(Stack[-3])
0x21a: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x21b: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x21c: Pop(0)
0x21d: Push((bool) 0)
0x21e: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(1)
0x220: GOTO 0x225

0x221: Push("Can't find lsh animation : ")
0x222: Pop(1); Push(Stack[-1] + Stack[-8]);
0x223: @ Trace(Stack[-1])
0x224: Pop(1)
0x225: Return(); Pop(6)

0x226: PushEmpty(bool, float, float, bool, float, float)
0x227: @ lshHasAnimation(Stack[-3], Stack[-8])
0x228: Pop(0)
0x229: Push(Stack[-3])
0x22a: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22b: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x22c: Pop(0)
0x22d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x22e: Pop(0)
0x22f: GOTO 0x234

0x230: Push("Can't find lsh animation : ")
0x231: Pop(1); Push(Stack[-1] + Stack[-9]);
0x232: @ Trace(Stack[-1])
0x233: Pop(1)
0x234: Return(); Pop(6)

0x235: PushEmpty(bool)
0x236: Call2 0x294

0x237: Pop(0)
0x238: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x239: @ lshStopSpeech()
0x23a: Pop(0)
0x23b: Return(); Pop(0)

0x23c: PushEmpty(object, object)
0x23d: @ self(Stack[-1])
0x23e: Pop(0)
0x23f: Stack[-3] = Stack[-1]
0x240: Return(); Pop(2)

0x241: Stack[-1] = 0
0x242: PushEmpty(float, float)
0x243: Pop(0); Push(Stack[-3] | Stack[-3]);
0x244: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x245: Push((float)0.0)
0x246: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x247: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x248: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x249: Return(); Pop(2)

0x24a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x24b: Return(); Pop(2)

0x24c: PushEmpty(int, int)
0x24d: @ GetVariable(Stack[-3], Stack[-1])
0x24e: Pop(0)
0x24f: Stack[-4] = Stack[-1]
0x250: Return(); Pop(2)

0x251: PushEmpty(string, string)
0x252: Stack[-1] = "idle"
0x253: Push(Stack[-3])
0x254: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x255: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x256: Stack[-4] = Stack[-1]
0x257: Return(); Pop(2)

0x258: PushEmpty(int, bool, int, bool)
0x259: Stack[-2] = (int) 0
0x25a: Push("all")
0x25b: PushEmpty(string, int)
0x25c: Stack[-1] = Stack[-5]
0x25d: Call2 0x251

0x25e: Pop(1)
0x25f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x260: Pop(2)
0x261: Pop(0); Push((bool) Stack[-1] == 0)
0x262: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x263: GOTO 0x267

0x264: Push((int) 1)
0x265: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x266: GOTO 0x25a

0x267: Stack[-5] = Stack[-2]
0x268: Return(); Pop(4)

0x269: PushEmpty()
0x26a: Push("ood5Prisoner1")
0x26b: Push((int) 1)
0x26c: @ SetVariable(Stack[-2], Stack[-1])
0x26d: Pop(2)
0x26e: Return(); Pop(0)

0x26f: PushEmpty()
0x270: PushEmpty(int, string)
0x271: Stack[-1] = "ood5Prisoner1"
0x272: Call2 0x24c

0x273: Pop(1)
0x274: Push((int) 0)
0x275: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x276: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x277: Stack[-2] = (bool) 1
0x278: Return(); Pop(0)

0x279: Stack[-2] = (bool) 0
0x27a: Return(); Pop(0)

0x27b: PushEmpty(int, int)
0x27c: Push("branch")
0x27d: @ GetVariable(Stack[-1], Stack[-2])
0x27e: Pop(1)
0x27f: Push((int) 0)
0x280: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x282: Stack[-3] = (int) 1
0x283: Return(); Pop(2)

0x284: GOTO 0x28a

0x285: Push((int) 1)
0x286: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x288: Stack[-3] = (int) 2
0x289: Return(); Pop(2)

0x28a: Stack[-3] = (int) 3
0x28b: Return(); Pop(2)

0x28c: Stack[-1] = (int) 515568
0x28d: Return(); Pop(0)

0x28e: Stack[-1] = (int) 503353
0x28f: Return(); Pop(0)

0x290: Stack[-1] = "ui/NPC_Citizen1.png"
0x291: Return(); Pop(0)

0x292: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x293: Return(); Pop(0)

0x294: Stack[-1] = (bool) 0
0x295: Return(); Pop(0)

