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
	d1q01wmask
	d1q01bmask
	quest_d1_01
	remove_masks
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png
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
	GetVariable (2 args)
	SetVariable (2 args)
	Sleep (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	IsLoaded (1 args)
	GetPosition (1 args)
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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	FindActor (2 args)
	Trigger (2 args)
	HasAnimation (3 args)

RunOp = 0x14c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x151 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x1d0

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x27d

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x27b

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x27f

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x281

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x285

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
0x41: Call2 0x215

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
0x54: Push((int) 524883)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 524884)
0x5a: Push((int) 26209)
0x5b: Push((int) 26208)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 524898)
0x5f: Push((int) 26224)
0x60: Push((int) 26223)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x283

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x227

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
0x86: Call2 0x283

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
0x96: Call2 0x237

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x246

0x9f: Pop(0)
0xa0: Push((int) 26207)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 524883)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 524884)
0xad: Push((int) 26209)
0xae: Push((int) 26208)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 524898)
0xb2: Push((int) 26224)
0xb3: Push((int) 26223)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Push((int) 26224)
0xb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral"
0xbc: Call2 0x84

0xbd: Pop(1)
0xbe: Push((int) 524899)
0xbf: @@ SetMessage(Stack[-1])
0xc0: Pop(1)
0xc1: @@ ClearReplies()
0xc2: Pop(0)
0xc3: Push((int) 524900)
0xc4: Push((int) 26226)
0xc5: Push((int) 26225)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Push((int) 26226)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call2 0x84

0xcf: Pop(1)
0xd0: Push((int) 524901)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: Push((int) 524902)
0xd6: Push((int) 26209)
0xd7: Push((int) 26227)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Return(); Pop(0)

0xdb: Push((int) 26209)
0xdc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xde: PushEmpty(string)
0xdf: Stack[-1] = "Neutral"
0xe0: Call2 0x84

0xe1: Pop(1)
0xe2: Push((int) 524885)
0xe3: @@ SetMessage(Stack[-1])
0xe4: Pop(1)
0xe5: @@ ClearReplies()
0xe6: Pop(0)
0xe7: Push((int) 524886)
0xe8: Push((int) 26211)
0xe9: Push((int) 26210)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: Push((int) 524893)
0xed: Push((int) 26218)
0xee: Push((int) 26217)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Return(); Pop(0)

0xf2: Push((int) 26218)
0xf3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xf5: PushEmpty(string)
0xf6: Stack[-1] = "Neutral"
0xf7: Call2 0x84

0xf8: Pop(1)
0xf9: Push((int) 524894)
0xfa: @@ SetMessage(Stack[-1])
0xfb: Pop(1)
0xfc: @@ ClearReplies()
0xfd: Pop(0)
0xfe: Push((int) 524895)
0xff: Push((int) 26211)
0x100: Push((int) 26219)
0x101: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102: Pop(3)
0x103: Return(); Pop(0)

0x104: Push((int) 26211)
0x105: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x107: PushEmpty(string)
0x108: Stack[-1] = "Neutral"
0x109: Call2 0x84

0x10a: Pop(1)
0x10b: Push((int) 524887)
0x10c: @@ SetMessage(Stack[-1])
0x10d: Pop(1)
0x10e: @@ ClearReplies()
0x10f: Pop(0)
0x110: Push((int) 524888)
0x111: Push((int) 26213)
0x112: Push((int) 26212)
0x113: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114: Pop(3)
0x115: Return(); Pop(0)

0x116: Push((int) 26213)
0x117: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x119: PushEmpty(string)
0x11a: Stack[-1] = "Neutral"
0x11b: Call2 0x84

0x11c: Pop(1)
0x11d: Push((int) 524889)
0x11e: @@ SetMessage(Stack[-1])
0x11f: Pop(1)
0x120: @@ ClearReplies()
0x121: Pop(0)
0x122: Push((int) 524890)
0x123: Push((int) 26215)
0x124: Push((int) 26214)
0x125: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126: Pop(3)
0x127: Return(); Pop(0)

0x128: Push((int) 26215)
0x129: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x12b: PushEmpty(string)
0x12c: Stack[-1] = "Neutral"
0x12d: Call2 0x84

0x12e: Pop(1)
0x12f: Push((int) 524891)
0x130: @@ SetMessage(Stack[-1])
0x131: Pop(1)
0x132: @@ ClearReplies()
0x133: Pop(0)
0x134: Push((int) 524892)
0x135: Push((int) -1)
0x136: Push((int) 26216)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: Push((int) 524897)
0x13a: Push((int) -1)
0x13b: Push((int) 26222)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: Return(); Pop(0)

0x13f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x140: PushEmpty(bool)
0x141: Call2 0x283

0x142: Pop(0)
0x143: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x144: @ lshStopAnimation()
0x145: Pop(0)
0x146: GOTO 0x149

0x147: @ StopAnimation()
0x148: Pop(0)
0x149: Return(); Pop(0)

0x14a: GOTO 0x9b

0x14b: Return(); Pop(0)

0x14c: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x14d: PushEmpty()
0x14e: Call2 0x16d

0x14f: Pop(0)
0x150: Return(); Pop(0)

0x151: PushEmpty(int, int)
0x152: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x153: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x154: PushEmpty()
0x155: Call2 0x1c6

0x156: Pop(0)
0x157: PushEmpty(int, object)
0x158: Stack[-1] = Stack[-5]
0x159: Push(-2, 1); TaskCall(0)
0x15a: Call2 0x0

0x15b: Pop(-2, 1); TaskReturn
0x15c: Pop(2)
0x15d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x15e: Push("d1q01wmask")
0x15f: @ GetVariable(Stack[-1], Stack[-2])
0x160: Pop(1)
0x161: Push("d1q01bmask")
0x162: Push((int) 1)
0x163: @ SetVariable(Stack[-2], Stack[-1])
0x164: Pop(2)
0x165: Push(Stack[-1])
0x166: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x167: PushEmpty(bool, string, string)
0x168: Stack[-2] = "quest_d1_01"
0x169: Stack[-1] = "remove_masks"
0x16a: Call2 0x257

0x16b: Pop(3)
0x16c: Return(); Pop(2)

0x16d: PushEmpty()
0x16e: Call2 0x175

0x16f: Pop(0)
0x170: Push((int) 3)
0x171: @ Sleep(Stack[-1])
0x172: Pop(1)
0x173: GOTO 0x16d

0x174: Return(); Pop(0)

0x175: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x176: @ WaitForAnimEnd()
0x177: Pop(0)
0x178: PushEmpty(bool)
0x179: Call2 0x1cb

0x17a: Pop(0)
0x17b: Pop(1); Push((bool) Stack[-1] == 0)
0x17c: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17d: Return(); Pop(14)

0x17e: PushEmpty(int)
0x17f: Call2 0x26a

0x180: Stack[-8] = Stack[-1]
0x181: Pop(1)
0x182: Stack[-6] = (int) 0
0x183: PushEmpty(bool)
0x184: Stack[-1] = (bool) 0
0x185: Push((int) 5)
0x186: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x188: PushEmpty(bool)
0x189: Call2 0x1cb

0x18a: Pop(0)
0x18b: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18c: Stack[-1] = (bool) 1
0x18d: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x18e: Push((int) 3)
0x18f: @ irand(Stack[-6], Stack[-1])
0x190: Pop(1)
0x191: Push((int) 0)
0x192: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x194: Push(Stack[-7])
0x195: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x196: @ irand(Stack[-4], Stack[-7])
0x197: Pop(0)
0x198: Push("all")
0x199: PushEmpty(string, int)
0x19a: Stack[-1] = Stack[-7]
0x19b: Call2 0x263

0x19c: Pop(1)
0x19d: @ PlayAnimation(Stack[-2], Stack[-1])
0x19e: Pop(2)
0x19f: @ WaitForAnimEnd(Stack[-3])
0x1a0: Pop(0)
0x1a1: Pop(0); Push((bool) Stack[-3] == 0)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a3: GOTO 0x1c1

0x1a4: GOTO 0x1b6

0x1a5: Push((int) 1)
0x1a6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1a8: Push((int) 4)
0x1a9: @ rand(Stack[-3], Stack[-1])
0x1aa: Pop(1)
0x1ab: Push((int) 1)
0x1ac: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1ad: @ Sleep(Stack[-1], Stack[-2])
0x1ae: Pop(1)
0x1af: Pop(0); Push((bool) Stack[-1] == 0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: GOTO 0x1c1

0x1b2: GOTO 0x1b6

0x1b3: Push(Stack[-6])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b5: GOTO 0x1c1

0x1b6: PushEmpty(bool)
0x1b7: Call2 0x1c4

0x1b8: Pop(0)
0x1b9: Pop(1); Push((bool) Stack[-1] == 0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1bb: GOTO 0x1c1

0x1bc: @ ResetAAS()
0x1bd: Pop(0)
0x1be: Push((int) 1)
0x1bf: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1c0: GOTO 0x183

0x1c1: @ ResetAAS()
0x1c2: Pop(0)
0x1c3: Return(); Pop(14)

0x1c4: Stack[-1] = (bool) 1
0x1c5: Return(); Pop(0)

0x1c6: @ StopAnimation()
0x1c7: Pop(0)
0x1c8: @ StopGroup0()
0x1c9: Pop(0)
0x1ca: Return(); Pop(0)

0x1cb: PushEmpty(bool, bool)
0x1cc: @ IsLoaded(Stack[-1])
0x1cd: Pop(0)
0x1ce: Stack[-3] = Stack[-1]
0x1cf: Return(); Pop(2)

0x1d0: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1d1: @@ GetPosition(Stack[-8])
0x1d2: Pop(0)
0x1d3: @@ GetEyesHeight(Stack[-9])
0x1d4: Pop(0)
0x1d5: Push(CvectorIndex(Stack[-8], 1))
0x1d6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1d7: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1d8: @ GetPosition(Stack[-7])
0x1d9: Pop(0)
0x1da: @ GetEyesHeight(Stack[-9])
0x1db: Pop(0)
0x1dc: Push(CvectorIndex(Stack[-7], 1))
0x1dd: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1de: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1df: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1e0: Push(CvectorIndex(Stack[-6], 1))
0x1e1: Stack[-1] = (int) 0
0x1e2: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1e3: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1e4: Pop(1); Push(Sqrt(Stack[-1]))
0x1e5: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1e6: Stack[-5] = -Stack[-6]; Pop(0);
0x1e7: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1e8: PushEmpty(cvector, cvector)
0x1e9: Push(CVector(0.0, 1.0, 0.0))
0x1ea: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1eb: Call2 0x24d

0x1ec: Pop(1)
0x1ed: Push((int) 25)
0x1ee: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1ef: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1f0: Push(CVector(0.0, 10.0, 0.0))
0x1f1: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1f2: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1f3: @ IsOverrideActive(Stack[-2])
0x1f4: Pop(0)
0x1f5: Push(Stack[-2])
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f7: Stack[-21] = (bool) 0
0x1f8: Return(); Pop(18)

0x1f9: @ StopWorld()
0x1fa: Pop(0)
0x1fb: Push((bool) 1)
0x1fc: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1fd: Pop(1)
0x1fe: Push(CvectorIndex(Stack[-4], 0))
0x1ff: Push(CvectorIndex(Stack[-5], 2))
0x200: @ Rotate(Stack[-2], Stack[-1])
0x201: Pop(2)
0x202: PushEmpty(bool)
0x203: Call2 0x283

0x204: Pop(0)
0x205: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x206: GOTO 0x20f

0x207: Push("head")
0x208: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x209: Pop(1)
0x20a: Push(Stack[-1])
0x20b: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20c: Push("head")
0x20d: @ LookAsyncCamera(Stack[-1])
0x20e: Pop(1)
0x20f: @ CameraWaitForPlayFinish()
0x210: Pop(0)
0x211: @ ResumeWorld()
0x212: Pop(0)
0x213: Stack[-21] = (bool) 1
0x214: Return(); Pop(18)

0x215: PushEmpty(bool, bool)
0x216: Push((bool) 1)
0x217: @ CameraSwitchToNormal(Stack[-1])
0x218: Pop(1)
0x219: PushEmpty(bool)
0x21a: Call2 0x283

0x21b: Pop(0)
0x21c: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21d: GOTO 0x226

0x21e: Push("head")
0x21f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x220: Pop(1)
0x221: Push(Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x223: Push("head")
0x224: @ UnlookAsync(Stack[-1])
0x225: Pop(1)
0x226: Return(); Pop(2)

0x227: PushEmpty(bool, float, float, bool, float, float)
0x228: @ lshHasAnimation(Stack[-3], Stack[-7])
0x229: Pop(0)
0x22a: Push(Stack[-3])
0x22b: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22c: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x22d: Pop(0)
0x22e: Push((bool) 0)
0x22f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x230: Pop(1)
0x231: GOTO 0x236

0x232: Push("Can't find lsh animation : ")
0x233: Pop(1); Push(Stack[-1] + Stack[-8]);
0x234: @ Trace(Stack[-1])
0x235: Pop(1)
0x236: Return(); Pop(6)

0x237: PushEmpty(bool, float, float, bool, float, float)
0x238: @ lshHasAnimation(Stack[-3], Stack[-8])
0x239: Pop(0)
0x23a: Push(Stack[-3])
0x23b: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x23d: Pop(0)
0x23e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x23f: Pop(0)
0x240: GOTO 0x245

0x241: Push("Can't find lsh animation : ")
0x242: Pop(1); Push(Stack[-1] + Stack[-9]);
0x243: @ Trace(Stack[-1])
0x244: Pop(1)
0x245: Return(); Pop(6)

0x246: PushEmpty(bool)
0x247: Call2 0x283

0x248: Pop(0)
0x249: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x24a: @ lshStopSpeech()
0x24b: Pop(0)
0x24c: Return(); Pop(0)

0x24d: PushEmpty(float, float)
0x24e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x24f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x250: Push((float)0.0)
0x251: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x253: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x254: Return(); Pop(2)

0x255: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x256: Return(); Pop(2)

0x257: PushEmpty(object, object)
0x258: @ FindActor(Stack[-1], Stack[-4])
0x259: Pop(0)
0x25a: Pop(0); Push((bool) Stack[-1] == 0)
0x25b: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25c: Stack[-5] = (bool) 0
0x25d: Return(); Pop(2)

0x25e: @ Trigger(Stack[-1], Stack[-3])
0x25f: Pop(0)
0x260: Stack[-5] = (bool) 1
0x261: Return(); Pop(2)

0x262: Stack[-1] = 0
0x263: PushEmpty(string, string)
0x264: Stack[-1] = "idle"
0x265: Push(Stack[-3])
0x266: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x267: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x268: Stack[-4] = Stack[-1]
0x269: Return(); Pop(2)

0x26a: PushEmpty(int, bool, int, bool)
0x26b: Stack[-2] = (int) 0
0x26c: Push("all")
0x26d: PushEmpty(string, int)
0x26e: Stack[-1] = Stack[-5]
0x26f: Call2 0x263

0x270: Pop(1)
0x271: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x272: Pop(2)
0x273: Pop(0); Push((bool) Stack[-1] == 0)
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: GOTO 0x279

0x276: Push((int) 1)
0x277: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x278: GOTO 0x26c

0x279: Stack[-5] = Stack[-2]
0x27a: Return(); Pop(4)

0x27b: Stack[-1] = (int) 515571
0x27c: Return(); Pop(0)

0x27d: Stack[-1] = (int) 504029
0x27e: Return(); Pop(0)

0x27f: Stack[-1] = "ui/NPC_bmask.png"
0x280: Return(); Pop(0)

0x281: Stack[-1] = "ui/NPC_bmask_b.png"
0x282: Return(); Pop(0)

0x283: Stack[-1] = (bool) 0
0x284: Return(); Pop(0)

0x285: PushEmpty(int, int)
0x286: Push("branch")
0x287: @ GetVariable(Stack[-1], Stack[-2])
0x288: Pop(1)
0x289: Push((int) 0)
0x28a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x28b: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28c: Stack[-3] = (int) 1
0x28d: Return(); Pop(2)

0x28e: GOTO 0x294

0x28f: Push((int) 1)
0x290: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x292: Stack[-3] = (int) 2
0x293: Return(); Pop(2)

0x294: Stack[-3] = (int) 3
0x295: Return(); Pop(2)

