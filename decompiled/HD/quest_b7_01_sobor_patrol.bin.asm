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
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png

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
	self (1 args)
	HasAnimation (3 args)
	GetVariable (2 args)

RunOp = 0xf8
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0xed Vars = (object)
		EVENT_26 Op = 0x121 Vars = (string)
		EVENT_5 Op = 0x129 Vars = ()
		EVENT_6 Op = 0x12e Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x19b

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x253

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x251

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x255

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x257

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x240

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
0x41: Call2 0x1e0

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
0x54: Push((int) 520981)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 528480)
0x5a: Push((int) 29869)
0x5b: Push((int) 29868)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 528478)
0x5f: Push((int) 29867)
0x60: Push((int) 29866)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x259

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x1f2

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
0x86: Call2 0x259

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
0x96: Call2 0x202

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x211

0x9f: Pop(0)
0xa0: Push((int) 22194)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 520981)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 528480)
0xad: Push((int) 29869)
0xae: Push((int) 29868)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 528478)
0xb2: Push((int) 29867)
0xb3: Push((int) 29866)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Push((int) 29867)
0xb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral"
0xbc: Call2 0x84

0xbd: Pop(1)
0xbe: Push((int) 528479)
0xbf: @@ SetMessage(Stack[-1])
0xc0: Pop(1)
0xc1: @@ ClearReplies()
0xc2: Pop(0)
0xc3: Push((int) 520982)
0xc4: Push((int) -1)
0xc5: Push((int) 22195)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Push((int) 524075)
0xc9: Push((int) -1)
0xca: Push((int) 25374)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: Return(); Pop(0)

0xce: Push((int) 29869)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xd1: PushEmpty(string)
0xd2: Stack[-1] = "Neutral"
0xd3: Call2 0x84

0xd4: Pop(1)
0xd5: Push((int) 528481)
0xd6: @@ SetMessage(Stack[-1])
0xd7: Pop(1)
0xd8: @@ ClearReplies()
0xd9: Pop(0)
0xda: Push((int) 528482)
0xdb: Push((int) 29867)
0xdc: Push((int) 29870)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Return(); Pop(0)

0xe0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe1: PushEmpty(bool)
0xe2: Call2 0x259

0xe3: Pop(0)
0xe4: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe5: @ lshStopAnimation()
0xe6: Pop(0)
0xe7: GOTO 0xea

0xe8: @ StopAnimation()
0xe9: Pop(0)
0xea: Return(); Pop(0)

0xeb: GOTO 0x9b

0xec: Return(); Pop(0)

0xed: PushEmpty()
0xee: PushEmpty()
0xef: Call2 0x191

0xf0: Pop(0)
0xf1: PushEmpty(int, object)
0xf2: Stack[-1] = Stack[-3]
0xf3: Push(-2, 1); TaskCall(0)
0xf4: Call2 0x0

0xf5: Pop(-2, 1); TaskReturn
0xf6: Pop(2)
0xf7: Return(); Pop(0)

0xf8: PushEmpty(float, float)
0xf9: PushEmpty(bool)
0xfa: Call2 0x196

0xfb: Pop(0)
0xfc: Pop(1); Push((bool) Stack[-1] == 0)
0xfd: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xfe: @ Hold()
0xff: Pop(0)
0x100: GOTO 0xf9

0x101: Push((int) 3)
0x102: @ rand(Stack[-2], Stack[-1])
0x103: Pop(1)
0x104: Push((int) 3)
0x105: Pop(1); Push(Stack[-2] + Stack[-1]);
0x106: @ Sleep(Stack[-1])
0x107: Pop(1)
0x108: PushEmpty()
0x109: Call2 0x140

0x10a: Pop(0)
0x10b: GOTO 0xf9

0x10c: Return(); Pop(2)

0x10d: PushEmpty(bool, bool)
0x10e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x10f: @ IsLoaded(Stack[-1])
0x110: Pop(0)
0x111: PushEmpty(bool)
0x112: Stack[-1] = (bool) 0
0x113: Pop(0); Push((bool) Stack[-2] == 0)
0x114: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x115: PushEmpty(bool)
0x116: Call2 0x13e

0x117: Pop(0)
0x118: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x119: Stack[-1] = (bool) 1
0x11a: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11b: PushEmpty(object)
0x11c: Call2 0x218

0x11d: Pop(0)
0x11e: @ RemoveActor(Stack[-1])
0x11f: Pop(1)
0x120: Return(); Pop(2)

0x121: PushEmpty()
0x122: Push("cleanup")
0x123: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x125: PushEmpty()
0x126: Call2 0x10d

0x127: Pop(0)
0x128: Return(); Pop(0)

0x129: @ StopGroup0()
0x12a: Pop(0)
0x12b: @ sync()
0x12c: Pop(0)
0x12d: Return(); Pop(0)

0x12e: PushEmpty(bool)
0x12f: Stack[-1] = (bool) 0
0x130: Push( Stack[0 + Tasks[-1].StackPointer] )
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: PushEmpty(bool)
0x133: Call2 0x13e

0x134: Pop(0)
0x135: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x136: Stack[-1] = (bool) 1
0x137: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x138: PushEmpty(object)
0x139: Call2 0x218

0x13a: Pop(0)
0x13b: @ RemoveActor(Stack[-1])
0x13c: Pop(1)
0x13d: Return(); Pop(0)

0x13e: Stack[-1] = (bool) 1
0x13f: Return(); Pop(0)

0x140: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x141: @ WaitForAnimEnd()
0x142: Pop(0)
0x143: PushEmpty(bool)
0x144: Call2 0x196

0x145: Pop(0)
0x146: Pop(1); Push((bool) Stack[-1] == 0)
0x147: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x148: Return(); Pop(14)

0x149: PushEmpty(int)
0x14a: Call2 0x22f

0x14b: Stack[-8] = Stack[-1]
0x14c: Pop(1)
0x14d: Stack[-6] = (int) 0
0x14e: PushEmpty(bool)
0x14f: Stack[-1] = (bool) 0
0x150: Push((int) 5)
0x151: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x153: PushEmpty(bool)
0x154: Call2 0x196

0x155: Pop(0)
0x156: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x157: Stack[-1] = (bool) 1
0x158: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x159: Push((int) 3)
0x15a: @ irand(Stack[-6], Stack[-1])
0x15b: Pop(1)
0x15c: Push((int) 0)
0x15d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x15f: Push(Stack[-7])
0x160: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x161: @ irand(Stack[-4], Stack[-7])
0x162: Pop(0)
0x163: Push("all")
0x164: PushEmpty(string, int)
0x165: Stack[-1] = Stack[-7]
0x166: Call2 0x228

0x167: Pop(1)
0x168: @ PlayAnimation(Stack[-2], Stack[-1])
0x169: Pop(2)
0x16a: @ WaitForAnimEnd(Stack[-3])
0x16b: Pop(0)
0x16c: Pop(0); Push((bool) Stack[-3] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: GOTO 0x18c

0x16f: GOTO 0x181

0x170: Push((int) 1)
0x171: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x173: Push((int) 4)
0x174: @ rand(Stack[-3], Stack[-1])
0x175: Pop(1)
0x176: Push((int) 1)
0x177: Pop(1); Push(Stack[-3] + Stack[-1]);
0x178: @ Sleep(Stack[-1], Stack[-2])
0x179: Pop(1)
0x17a: Pop(0); Push((bool) Stack[-1] == 0)
0x17b: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17c: GOTO 0x18c

0x17d: GOTO 0x181

0x17e: Push(Stack[-6])
0x17f: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x180: GOTO 0x18c

0x181: PushEmpty(bool)
0x182: Call2 0x18f

0x183: Pop(0)
0x184: Pop(1); Push((bool) Stack[-1] == 0)
0x185: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x186: GOTO 0x18c

0x187: @ ResetAAS()
0x188: Pop(0)
0x189: Push((int) 1)
0x18a: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x18b: GOTO 0x14e

0x18c: @ ResetAAS()
0x18d: Pop(0)
0x18e: Return(); Pop(14)

0x18f: Stack[-1] = (bool) 1
0x190: Return(); Pop(0)

0x191: @ StopAnimation()
0x192: Pop(0)
0x193: @ StopGroup0()
0x194: Pop(0)
0x195: Return(); Pop(0)

0x196: PushEmpty(bool, bool)
0x197: @ IsLoaded(Stack[-1])
0x198: Pop(0)
0x199: Stack[-3] = Stack[-1]
0x19a: Return(); Pop(2)

0x19b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x19c: @@ GetPosition(Stack[-8])
0x19d: Pop(0)
0x19e: @@ GetEyesHeight(Stack[-9])
0x19f: Pop(0)
0x1a0: Push(CvectorIndex(Stack[-8], 1))
0x1a1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1a2: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1a3: @ GetPosition(Stack[-7])
0x1a4: Pop(0)
0x1a5: @ GetEyesHeight(Stack[-9])
0x1a6: Pop(0)
0x1a7: Push(CvectorIndex(Stack[-7], 1))
0x1a8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1a9: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1aa: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1ab: Push(CvectorIndex(Stack[-6], 1))
0x1ac: Stack[-1] = (int) 0
0x1ad: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1ae: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1af: Pop(1); Push(Sqrt(Stack[-1]))
0x1b0: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1b1: Stack[-5] = -Stack[-6]; Pop(0);
0x1b2: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1b3: PushEmpty(cvector, cvector)
0x1b4: Push(CVector(0.0, 1.0, 0.0))
0x1b5: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1b6: Call2 0x21e

0x1b7: Pop(1)
0x1b8: Push((int) 25)
0x1b9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1ba: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1bb: Push(CVector(0.0, 10.0, 0.0))
0x1bc: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1bd: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1be: @ IsOverrideActive(Stack[-2])
0x1bf: Pop(0)
0x1c0: Push(Stack[-2])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c2: Stack[-21] = (bool) 0
0x1c3: Return(); Pop(18)

0x1c4: @ StopWorld()
0x1c5: Pop(0)
0x1c6: Push((bool) 1)
0x1c7: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1c8: Pop(1)
0x1c9: Push(CvectorIndex(Stack[-4], 0))
0x1ca: Push(CvectorIndex(Stack[-5], 2))
0x1cb: @ Rotate(Stack[-2], Stack[-1])
0x1cc: Pop(2)
0x1cd: PushEmpty(bool)
0x1ce: Call2 0x259

0x1cf: Pop(0)
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d1: GOTO 0x1da

0x1d2: Push("head")
0x1d3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1d4: Pop(1)
0x1d5: Push(Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d7: Push("head")
0x1d8: @ LookAsyncCamera(Stack[-1])
0x1d9: Pop(1)
0x1da: @ CameraWaitForPlayFinish()
0x1db: Pop(0)
0x1dc: @ ResumeWorld()
0x1dd: Pop(0)
0x1de: Stack[-21] = (bool) 1
0x1df: Return(); Pop(18)

0x1e0: PushEmpty(bool, bool)
0x1e1: Push((bool) 1)
0x1e2: @ CameraSwitchToNormal(Stack[-1])
0x1e3: Pop(1)
0x1e4: PushEmpty(bool)
0x1e5: Call2 0x259

0x1e6: Pop(0)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e8: GOTO 0x1f1

0x1e9: Push("head")
0x1ea: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1eb: Pop(1)
0x1ec: Push(Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ee: Push("head")
0x1ef: @ UnlookAsync(Stack[-1])
0x1f0: Pop(1)
0x1f1: Return(); Pop(2)

0x1f2: PushEmpty(bool, float, float, bool, float, float)
0x1f3: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1f4: Pop(0)
0x1f5: Push(Stack[-3])
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f7: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1f8: Pop(0)
0x1f9: Push((bool) 0)
0x1fa: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1fb: Pop(1)
0x1fc: GOTO 0x201

0x1fd: Push("Can't find lsh animation : ")
0x1fe: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1ff: @ Trace(Stack[-1])
0x200: Pop(1)
0x201: Return(); Pop(6)

0x202: PushEmpty(bool, float, float, bool, float, float)
0x203: @ lshHasAnimation(Stack[-3], Stack[-8])
0x204: Pop(0)
0x205: Push(Stack[-3])
0x206: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x207: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x208: Pop(0)
0x209: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x20a: Pop(0)
0x20b: GOTO 0x210

0x20c: Push("Can't find lsh animation : ")
0x20d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x20e: @ Trace(Stack[-1])
0x20f: Pop(1)
0x210: Return(); Pop(6)

0x211: PushEmpty(bool)
0x212: Call2 0x259

0x213: Pop(0)
0x214: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x215: @ lshStopSpeech()
0x216: Pop(0)
0x217: Return(); Pop(0)

0x218: PushEmpty(object, object)
0x219: @ self(Stack[-1])
0x21a: Pop(0)
0x21b: Stack[-3] = Stack[-1]
0x21c: Return(); Pop(2)

0x21d: Stack[-1] = 0
0x21e: PushEmpty(float, float)
0x21f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x220: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x221: Push((float)0.0)
0x222: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x224: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x225: Return(); Pop(2)

0x226: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x227: Return(); Pop(2)

0x228: PushEmpty(string, string)
0x229: Stack[-1] = "idle"
0x22a: Push(Stack[-3])
0x22b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x22d: Stack[-4] = Stack[-1]
0x22e: Return(); Pop(2)

0x22f: PushEmpty(int, bool, int, bool)
0x230: Stack[-2] = (int) 0
0x231: Push("all")
0x232: PushEmpty(string, int)
0x233: Stack[-1] = Stack[-5]
0x234: Call2 0x228

0x235: Pop(1)
0x236: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x237: Pop(2)
0x238: Pop(0); Push((bool) Stack[-1] == 0)
0x239: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x23a: GOTO 0x23e

0x23b: Push((int) 1)
0x23c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x23d: GOTO 0x231

0x23e: Stack[-5] = Stack[-2]
0x23f: Return(); Pop(4)

0x240: PushEmpty(int, int)
0x241: Push("branch")
0x242: @ GetVariable(Stack[-1], Stack[-2])
0x243: Pop(1)
0x244: Push((int) 0)
0x245: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x247: Stack[-3] = (int) 1
0x248: Return(); Pop(2)

0x249: GOTO 0x24f

0x24a: Push((int) 1)
0x24b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24d: Stack[-3] = (int) 2
0x24e: Return(); Pop(2)

0x24f: Stack[-3] = (int) 3
0x250: Return(); Pop(2)

0x251: Stack[-1] = (int) 515572
0x252: Return(); Pop(0)

0x253: Stack[-1] = (int) 504031
0x254: Return(); Pop(0)

0x255: Stack[-1] = "ui/NPC_Citizen2.png"
0x256: Return(); Pop(0)

0x257: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x258: Return(); Pop(0)

0x259: Stack[-1] = (bool) 0
0x25a: Return(); Pop(0)

