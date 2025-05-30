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

RunOp = 0xe1
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0xd6 Vars = (object)
		EVENT_26 Op = 0x10a Vars = (string)
		EVENT_5 Op = 0x112 Vars = ()
		EVENT_6 Op = 0x117 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x184

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x23c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x23a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x23e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x240

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x229

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
0x41: Call2 0x1c9

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
0x54: Push((int) 520994)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 520995)
0x5a: Push((int) 29851)
0x5b: Push((int) 22208)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 528463)
0x5f: Push((int) -1)
0x60: Push((int) 29850)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x242

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x1db

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
0x86: Call2 0x242

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
0x96: Call2 0x1eb

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x1fa

0x9f: Pop(0)
0xa0: Push((int) 22207)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 520994)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 520995)
0xad: Push((int) 29851)
0xae: Push((int) 22208)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 528463)
0xb2: Push((int) -1)
0xb3: Push((int) 29850)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Push((int) 29851)
0xb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral"
0xbc: Call2 0x84

0xbd: Pop(1)
0xbe: Push((int) 528464)
0xbf: @@ SetMessage(Stack[-1])
0xc0: Pop(1)
0xc1: @@ ClearReplies()
0xc2: Pop(0)
0xc3: Push((int) 528465)
0xc4: Push((int) -1)
0xc5: Push((int) 29852)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xca: PushEmpty(bool)
0xcb: Call2 0x242

0xcc: Pop(0)
0xcd: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xce: @ lshStopAnimation()
0xcf: Pop(0)
0xd0: GOTO 0xd3

0xd1: @ StopAnimation()
0xd2: Pop(0)
0xd3: Return(); Pop(0)

0xd4: GOTO 0x9b

0xd5: Return(); Pop(0)

0xd6: PushEmpty()
0xd7: PushEmpty()
0xd8: Call2 0x17a

0xd9: Pop(0)
0xda: PushEmpty(int, object)
0xdb: Stack[-1] = Stack[-3]
0xdc: Push(-2, 1); TaskCall(0)
0xdd: Call2 0x0

0xde: Pop(-2, 1); TaskReturn
0xdf: Pop(2)
0xe0: Return(); Pop(0)

0xe1: PushEmpty(float, float)
0xe2: PushEmpty(bool)
0xe3: Call2 0x17f

0xe4: Pop(0)
0xe5: Pop(1); Push((bool) Stack[-1] == 0)
0xe6: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe7: @ Hold()
0xe8: Pop(0)
0xe9: GOTO 0xe2

0xea: Push((int) 3)
0xeb: @ rand(Stack[-2], Stack[-1])
0xec: Pop(1)
0xed: Push((int) 3)
0xee: Pop(1); Push(Stack[-2] + Stack[-1]);
0xef: @ Sleep(Stack[-1])
0xf0: Pop(1)
0xf1: PushEmpty()
0xf2: Call2 0x129

0xf3: Pop(0)
0xf4: GOTO 0xe2

0xf5: Return(); Pop(2)

0xf6: PushEmpty(bool, bool)
0xf7: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xf8: @ IsLoaded(Stack[-1])
0xf9: Pop(0)
0xfa: PushEmpty(bool)
0xfb: Stack[-1] = (bool) 0
0xfc: Pop(0); Push((bool) Stack[-2] == 0)
0xfd: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xfe: PushEmpty(bool)
0xff: Call2 0x127

0x100: Pop(0)
0x101: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0x102: Stack[-1] = (bool) 1
0x103: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x104: PushEmpty(object)
0x105: Call2 0x201

0x106: Pop(0)
0x107: @ RemoveActor(Stack[-1])
0x108: Pop(1)
0x109: Return(); Pop(2)

0x10a: PushEmpty()
0x10b: Push("cleanup")
0x10c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10e: PushEmpty()
0x10f: Call2 0xf6

0x110: Pop(0)
0x111: Return(); Pop(0)

0x112: @ StopGroup0()
0x113: Pop(0)
0x114: @ sync()
0x115: Pop(0)
0x116: Return(); Pop(0)

0x117: PushEmpty(bool)
0x118: Stack[-1] = (bool) 0
0x119: Push( Stack[0 + Tasks[-1].StackPointer] )
0x11a: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11b: PushEmpty(bool)
0x11c: Call2 0x127

0x11d: Pop(0)
0x11e: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11f: Stack[-1] = (bool) 1
0x120: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x121: PushEmpty(object)
0x122: Call2 0x201

0x123: Pop(0)
0x124: @ RemoveActor(Stack[-1])
0x125: Pop(1)
0x126: Return(); Pop(0)

0x127: Stack[-1] = (bool) 1
0x128: Return(); Pop(0)

0x129: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x12a: @ WaitForAnimEnd()
0x12b: Pop(0)
0x12c: PushEmpty(bool)
0x12d: Call2 0x17f

0x12e: Pop(0)
0x12f: Pop(1); Push((bool) Stack[-1] == 0)
0x130: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x131: Return(); Pop(14)

0x132: PushEmpty(int)
0x133: Call2 0x218

0x134: Stack[-8] = Stack[-1]
0x135: Pop(1)
0x136: Stack[-6] = (int) 0
0x137: PushEmpty(bool)
0x138: Stack[-1] = (bool) 0
0x139: Push((int) 5)
0x13a: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x13c: PushEmpty(bool)
0x13d: Call2 0x17f

0x13e: Pop(0)
0x13f: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x140: Stack[-1] = (bool) 1
0x141: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x142: Push((int) 3)
0x143: @ irand(Stack[-6], Stack[-1])
0x144: Pop(1)
0x145: Push((int) 0)
0x146: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x148: Push(Stack[-7])
0x149: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x14a: @ irand(Stack[-4], Stack[-7])
0x14b: Pop(0)
0x14c: Push("all")
0x14d: PushEmpty(string, int)
0x14e: Stack[-1] = Stack[-7]
0x14f: Call2 0x211

0x150: Pop(1)
0x151: @ PlayAnimation(Stack[-2], Stack[-1])
0x152: Pop(2)
0x153: @ WaitForAnimEnd(Stack[-3])
0x154: Pop(0)
0x155: Pop(0); Push((bool) Stack[-3] == 0)
0x156: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x157: GOTO 0x175

0x158: GOTO 0x16a

0x159: Push((int) 1)
0x15a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x15c: Push((int) 4)
0x15d: @ rand(Stack[-3], Stack[-1])
0x15e: Pop(1)
0x15f: Push((int) 1)
0x160: Pop(1); Push(Stack[-3] + Stack[-1]);
0x161: @ Sleep(Stack[-1], Stack[-2])
0x162: Pop(1)
0x163: Pop(0); Push((bool) Stack[-1] == 0)
0x164: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x165: GOTO 0x175

0x166: GOTO 0x16a

0x167: Push(Stack[-6])
0x168: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x169: GOTO 0x175

0x16a: PushEmpty(bool)
0x16b: Call2 0x178

0x16c: Pop(0)
0x16d: Pop(1); Push((bool) Stack[-1] == 0)
0x16e: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16f: GOTO 0x175

0x170: @ ResetAAS()
0x171: Pop(0)
0x172: Push((int) 1)
0x173: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x174: GOTO 0x137

0x175: @ ResetAAS()
0x176: Pop(0)
0x177: Return(); Pop(14)

0x178: Stack[-1] = (bool) 1
0x179: Return(); Pop(0)

0x17a: @ StopAnimation()
0x17b: Pop(0)
0x17c: @ StopGroup0()
0x17d: Pop(0)
0x17e: Return(); Pop(0)

0x17f: PushEmpty(bool, bool)
0x180: @ IsLoaded(Stack[-1])
0x181: Pop(0)
0x182: Stack[-3] = Stack[-1]
0x183: Return(); Pop(2)

0x184: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x185: @@ GetPosition(Stack[-8])
0x186: Pop(0)
0x187: @@ GetEyesHeight(Stack[-9])
0x188: Pop(0)
0x189: Push(CvectorIndex(Stack[-8], 1))
0x18a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x18b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x18c: @ GetPosition(Stack[-7])
0x18d: Pop(0)
0x18e: @ GetEyesHeight(Stack[-9])
0x18f: Pop(0)
0x190: Push(CvectorIndex(Stack[-7], 1))
0x191: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x192: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x193: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x194: Push(CvectorIndex(Stack[-6], 1))
0x195: Stack[-1] = (int) 0
0x196: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x197: Pop(0); Push(Stack[-6] | Stack[-6]);
0x198: Pop(1); Push(Sqrt(Stack[-1]))
0x199: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x19a: Stack[-5] = -Stack[-6]; Pop(0);
0x19b: Pop(0); Push(Stack[-6] * Stack[-19]);
0x19c: PushEmpty(cvector, cvector)
0x19d: Push(CVector(0.0, 1.0, 0.0))
0x19e: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x19f: Call2 0x207

0x1a0: Pop(1)
0x1a1: Push((int) 25)
0x1a2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1a3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1a4: Push(CVector(0.0, 10.0, 0.0))
0x1a5: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1a6: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1a7: @ IsOverrideActive(Stack[-2])
0x1a8: Pop(0)
0x1a9: Push(Stack[-2])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1ab: Stack[-21] = (bool) 0
0x1ac: Return(); Pop(18)

0x1ad: @ StopWorld()
0x1ae: Pop(0)
0x1af: Push((bool) 1)
0x1b0: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1b1: Pop(1)
0x1b2: Push(CvectorIndex(Stack[-4], 0))
0x1b3: Push(CvectorIndex(Stack[-5], 2))
0x1b4: @ Rotate(Stack[-2], Stack[-1])
0x1b5: Pop(2)
0x1b6: PushEmpty(bool)
0x1b7: Call2 0x242

0x1b8: Pop(0)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ba: GOTO 0x1c3

0x1bb: Push("head")
0x1bc: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1bd: Pop(1)
0x1be: Push(Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c0: Push("head")
0x1c1: @ LookAsyncCamera(Stack[-1])
0x1c2: Pop(1)
0x1c3: @ CameraWaitForPlayFinish()
0x1c4: Pop(0)
0x1c5: @ ResumeWorld()
0x1c6: Pop(0)
0x1c7: Stack[-21] = (bool) 1
0x1c8: Return(); Pop(18)

0x1c9: PushEmpty(bool, bool)
0x1ca: Push((bool) 1)
0x1cb: @ CameraSwitchToNormal(Stack[-1])
0x1cc: Pop(1)
0x1cd: PushEmpty(bool)
0x1ce: Call2 0x242

0x1cf: Pop(0)
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d1: GOTO 0x1da

0x1d2: Push("head")
0x1d3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1d4: Pop(1)
0x1d5: Push(Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d7: Push("head")
0x1d8: @ UnlookAsync(Stack[-1])
0x1d9: Pop(1)
0x1da: Return(); Pop(2)

0x1db: PushEmpty(bool, float, float, bool, float, float)
0x1dc: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1dd: Pop(0)
0x1de: Push(Stack[-3])
0x1df: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e0: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1e1: Pop(0)
0x1e2: Push((bool) 0)
0x1e3: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1e4: Pop(1)
0x1e5: GOTO 0x1ea

0x1e6: Push("Can't find lsh animation : ")
0x1e7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1e8: @ Trace(Stack[-1])
0x1e9: Pop(1)
0x1ea: Return(); Pop(6)

0x1eb: PushEmpty(bool, float, float, bool, float, float)
0x1ec: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1ed: Pop(0)
0x1ee: Push(Stack[-3])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f0: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1f1: Pop(0)
0x1f2: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1f3: Pop(0)
0x1f4: GOTO 0x1f9

0x1f5: Push("Can't find lsh animation : ")
0x1f6: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1f7: @ Trace(Stack[-1])
0x1f8: Pop(1)
0x1f9: Return(); Pop(6)

0x1fa: PushEmpty(bool)
0x1fb: Call2 0x242

0x1fc: Pop(0)
0x1fd: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fe: @ lshStopSpeech()
0x1ff: Pop(0)
0x200: Return(); Pop(0)

0x201: PushEmpty(object, object)
0x202: @ self(Stack[-1])
0x203: Pop(0)
0x204: Stack[-3] = Stack[-1]
0x205: Return(); Pop(2)

0x206: Stack[-1] = 0
0x207: PushEmpty(float, float)
0x208: Pop(0); Push(Stack[-3] | Stack[-3]);
0x209: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x20a: Push((float)0.0)
0x20b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x20e: Return(); Pop(2)

0x20f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x210: Return(); Pop(2)

0x211: PushEmpty(string, string)
0x212: Stack[-1] = "idle"
0x213: Push(Stack[-3])
0x214: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x215: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x216: Stack[-4] = Stack[-1]
0x217: Return(); Pop(2)

0x218: PushEmpty(int, bool, int, bool)
0x219: Stack[-2] = (int) 0
0x21a: Push("all")
0x21b: PushEmpty(string, int)
0x21c: Stack[-1] = Stack[-5]
0x21d: Call2 0x211

0x21e: Pop(1)
0x21f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x220: Pop(2)
0x221: Pop(0); Push((bool) Stack[-1] == 0)
0x222: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x223: GOTO 0x227

0x224: Push((int) 1)
0x225: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x226: GOTO 0x21a

0x227: Stack[-5] = Stack[-2]
0x228: Return(); Pop(4)

0x229: PushEmpty(int, int)
0x22a: Push("branch")
0x22b: @ GetVariable(Stack[-1], Stack[-2])
0x22c: Pop(1)
0x22d: Push((int) 0)
0x22e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22f: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x230: Stack[-3] = (int) 1
0x231: Return(); Pop(2)

0x232: GOTO 0x238

0x233: Push((int) 1)
0x234: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x235: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x236: Stack[-3] = (int) 2
0x237: Return(); Pop(2)

0x238: Stack[-3] = (int) 3
0x239: Return(); Pop(2)

0x23a: Stack[-1] = (int) 515572
0x23b: Return(); Pop(0)

0x23c: Stack[-1] = (int) 504031
0x23d: Return(); Pop(0)

0x23e: Stack[-1] = "ui/NPC_Citizen2.png"
0x23f: Return(); Pop(0)

0x240: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x241: Return(); Pop(0)

0x242: Stack[-1] = (bool) 0
0x243: Return(); Pop(0)

