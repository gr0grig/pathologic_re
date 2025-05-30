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
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png
	quest_d11_05
	teleport
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
	Trigger (2 args)
	HasAnimation (3 args)
	GetVariable (2 args)

RunOp = 0xcc
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0xd5 Vars = (object)
		EVENT_7 Op = 0x10a Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x192

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x24a

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x248

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x24c

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x24e

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x259

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
0x41: Call2 0x1d7

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
0x54: Push((int) 538795)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 538796)
0x5a: Push((int) -1)
0x5b: Push((int) 40713)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 538805)
0x5f: Push((int) -1)
0x60: Push((int) 40723)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x250

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x1e9

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
0x86: Call2 0x250

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
0x96: Call2 0x1f9

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x213

0x9f: Pop(0)
0xa0: Push((int) 40713)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x252

0xa7: Pop(2)
0xa8: Push((int) 40712)
0xa9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xab: PushEmpty(string)
0xac: Stack[-1] = "Neutral"
0xad: Call2 0x84

0xae: Pop(1)
0xaf: Push((int) 538795)
0xb0: @@ SetMessage(Stack[-1])
0xb1: Pop(1)
0xb2: @@ ClearReplies()
0xb3: Pop(0)
0xb4: Push((int) 538796)
0xb5: Push((int) -1)
0xb6: Push((int) 40713)
0xb7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8: Pop(3)
0xb9: Push((int) 538805)
0xba: Push((int) -1)
0xbb: Push((int) 40723)
0xbc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd: Pop(3)
0xbe: Return(); Pop(0)

0xbf: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc0: PushEmpty(bool)
0xc1: Call2 0x250

0xc2: Pop(0)
0xc3: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc4: @ lshStopAnimation()
0xc5: Pop(0)
0xc6: GOTO 0xc9

0xc7: @ StopAnimation()
0xc8: Pop(0)
0xc9: Return(); Pop(0)

0xca: GOTO 0x9b

0xcb: Return(); Pop(0)

0xcc: Push((bool) 1)
0xcd: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xce: PushEmpty(float, float)
0xcf: Stack[-2] = (int) 300
0xd0: Stack[-1] = (int) 100
0xd1: Call2 0xe0

0xd2: Pop(2)
0xd3: GOTO 0xcc

0xd4: Return(); Pop(0)

0xd5: PushEmpty()
0xd6: PushEmpty()
0xd7: Call2 0x121

0xd8: Pop(0)
0xd9: PushEmpty(int, object)
0xda: Stack[-1] = Stack[-3]
0xdb: Push(-2, 1); TaskCall(0)
0xdc: Call2 0x0

0xdd: Pop(-2, 1); TaskReturn
0xde: Pop(2)
0xdf: Return(); Pop(0)

0xe0: PushEmpty()
0xe1: PushEmpty(bool)
0xe2: Call2 0x18d

0xe3: Pop(0)
0xe4: Pop(1); Push((bool) Stack[-1] == 0)
0xe5: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe6: Return(); Pop(0)

0xe7: Push("player")
0xe8: @ FindActor(Stack[-4], Stack[-1])
0xe9: Pop(1)
0xea: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xeb: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xec: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0xed: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0xee: Push((int) 10)
0xef: Push((float)1.0)
0xf0: @ SetTimer(Stack[-2], Stack[-1])
0xf1: Pop(2)
0xf2: PushEmpty()
0xf3: Call2 0x12f

0xf4: Pop(0)
0xf5: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xf6: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf7: Push((int) 10)
0xf8: @ KillTimer(Stack[-1])
0xf9: Pop(1)
0xfa: Return(); Pop(0)

0xfb: PushEmpty(float, float)
0xfc: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0xfd: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfe: Stack[-3] = (bool) 0
0xff: Return(); Pop(2)

0x100: PushEmpty(float, object)
0x101: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x102: Call2 0x185

0x103: Pop(1)
0x104: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x105: Push( Stack[2 + Tasks[-1].StackPointer] )
0x106: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x107: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x108: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x109: Return(); Pop(2)

0x10a: PushEmpty()
0x10b: Push((int) 10)
0x10c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x10e: PushEmpty(bool)
0x10f: Call2 0xfb

0x110: Pop(0)
0x111: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x112: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x113: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x114: PushEmpty(object)
0x115: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x116: Call2 0x208

0x117: Pop(1)
0x118: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x119: GOTO 0x120

0x11a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x11b: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11c: Push("head")
0x11d: @ UnlookAsync(Stack[-1])
0x11e: Pop(1)
0x11f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x120: Return(); Pop(0)

0x121: PushEmpty()
0x122: Call2 0x180

0x123: Pop(0)
0x124: Push((int) 10)
0x125: @ KillTimer(Stack[-1])
0x126: Pop(1)
0x127: Push( Stack[2 + Tasks[-1].StackPointer] )
0x128: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x129: Push("head")
0x12a: @ UnlookAsync(Stack[-1])
0x12b: Pop(1)
0x12c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x12d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x12e: Return(); Pop(0)

0x12f: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x130: @ WaitForAnimEnd()
0x131: Pop(0)
0x132: PushEmpty(bool)
0x133: Call2 0x18d

0x134: Pop(0)
0x135: Pop(1); Push((bool) Stack[-1] == 0)
0x136: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x137: Return(); Pop(14)

0x138: PushEmpty(int)
0x139: Call2 0x237

0x13a: Stack[-8] = Stack[-1]
0x13b: Pop(1)
0x13c: Stack[-6] = (int) 0
0x13d: PushEmpty(bool)
0x13e: Stack[-1] = (bool) 0
0x13f: Push((int) 5)
0x140: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x142: PushEmpty(bool)
0x143: Call2 0x18d

0x144: Pop(0)
0x145: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x146: Stack[-1] = (bool) 1
0x147: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x148: Push((int) 3)
0x149: @ irand(Stack[-6], Stack[-1])
0x14a: Pop(1)
0x14b: Push((int) 0)
0x14c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x14d: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x14e: Push(Stack[-7])
0x14f: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x150: @ irand(Stack[-4], Stack[-7])
0x151: Pop(0)
0x152: Push("all")
0x153: PushEmpty(string, int)
0x154: Stack[-1] = Stack[-7]
0x155: Call2 0x230

0x156: Pop(1)
0x157: @ PlayAnimation(Stack[-2], Stack[-1])
0x158: Pop(2)
0x159: @ WaitForAnimEnd(Stack[-3])
0x15a: Pop(0)
0x15b: Pop(0); Push((bool) Stack[-3] == 0)
0x15c: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15d: GOTO 0x17b

0x15e: GOTO 0x170

0x15f: Push((int) 1)
0x160: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x162: Push((int) 4)
0x163: @ rand(Stack[-3], Stack[-1])
0x164: Pop(1)
0x165: Push((int) 1)
0x166: Pop(1); Push(Stack[-3] + Stack[-1]);
0x167: @ Sleep(Stack[-1], Stack[-2])
0x168: Pop(1)
0x169: Pop(0); Push((bool) Stack[-1] == 0)
0x16a: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x16b: GOTO 0x17b

0x16c: GOTO 0x170

0x16d: Push(Stack[-6])
0x16e: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16f: GOTO 0x17b

0x170: PushEmpty(bool)
0x171: Call2 0x17e

0x172: Pop(0)
0x173: Pop(1); Push((bool) Stack[-1] == 0)
0x174: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x175: GOTO 0x17b

0x176: @ ResetAAS()
0x177: Pop(0)
0x178: Push((int) 1)
0x179: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x17a: GOTO 0x13d

0x17b: @ ResetAAS()
0x17c: Pop(0)
0x17d: Return(); Pop(14)

0x17e: Stack[-1] = (bool) 1
0x17f: Return(); Pop(0)

0x180: @ StopAnimation()
0x181: Pop(0)
0x182: @ StopGroup0()
0x183: Pop(0)
0x184: Return(); Pop(0)

0x185: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x186: @ GetPosition(Stack[-3])
0x187: Pop(0)
0x188: @@ GetPosition(Stack[-2])
0x189: Pop(0)
0x18a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x18b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x18c: Return(); Pop(6)

0x18d: PushEmpty(bool, bool)
0x18e: @ IsLoaded(Stack[-1])
0x18f: Pop(0)
0x190: Stack[-3] = Stack[-1]
0x191: Return(); Pop(2)

0x192: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x193: @@ GetPosition(Stack[-8])
0x194: Pop(0)
0x195: @@ GetEyesHeight(Stack[-9])
0x196: Pop(0)
0x197: Push(CvectorIndex(Stack[-8], 1))
0x198: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x199: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x19a: @ GetPosition(Stack[-7])
0x19b: Pop(0)
0x19c: @ GetEyesHeight(Stack[-9])
0x19d: Pop(0)
0x19e: Push(CvectorIndex(Stack[-7], 1))
0x19f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1a0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1a1: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1a2: Push(CvectorIndex(Stack[-6], 1))
0x1a3: Stack[-1] = (int) 0
0x1a4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1a5: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1a6: Pop(1); Push(Sqrt(Stack[-1]))
0x1a7: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1a8: Stack[-5] = -Stack[-6]; Pop(0);
0x1a9: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1aa: PushEmpty(cvector, cvector)
0x1ab: Push(CVector(0.0, 1.0, 0.0))
0x1ac: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1ad: Call2 0x21a

0x1ae: Pop(1)
0x1af: Push((int) 25)
0x1b0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1b1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1b2: Push(CVector(0.0, 10.0, 0.0))
0x1b3: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1b4: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1b5: @ IsOverrideActive(Stack[-2])
0x1b6: Pop(0)
0x1b7: Push(Stack[-2])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b9: Stack[-21] = (bool) 0
0x1ba: Return(); Pop(18)

0x1bb: @ StopWorld()
0x1bc: Pop(0)
0x1bd: Push((bool) 1)
0x1be: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1bf: Pop(1)
0x1c0: Push(CvectorIndex(Stack[-4], 0))
0x1c1: Push(CvectorIndex(Stack[-5], 2))
0x1c2: @ Rotate(Stack[-2], Stack[-1])
0x1c3: Pop(2)
0x1c4: PushEmpty(bool)
0x1c5: Call2 0x250

0x1c6: Pop(0)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c8: GOTO 0x1d1

0x1c9: Push("head")
0x1ca: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1cb: Pop(1)
0x1cc: Push(Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1ce: Push("head")
0x1cf: @ LookAsyncCamera(Stack[-1])
0x1d0: Pop(1)
0x1d1: @ CameraWaitForPlayFinish()
0x1d2: Pop(0)
0x1d3: @ ResumeWorld()
0x1d4: Pop(0)
0x1d5: Stack[-21] = (bool) 1
0x1d6: Return(); Pop(18)

0x1d7: PushEmpty(bool, bool)
0x1d8: Push((bool) 1)
0x1d9: @ CameraSwitchToNormal(Stack[-1])
0x1da: Pop(1)
0x1db: PushEmpty(bool)
0x1dc: Call2 0x250

0x1dd: Pop(0)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1df: GOTO 0x1e8

0x1e0: Push("head")
0x1e1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1e2: Pop(1)
0x1e3: Push(Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e5: Push("head")
0x1e6: @ UnlookAsync(Stack[-1])
0x1e7: Pop(1)
0x1e8: Return(); Pop(2)

0x1e9: PushEmpty(bool, float, float, bool, float, float)
0x1ea: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1eb: Pop(0)
0x1ec: Push(Stack[-3])
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ee: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1ef: Pop(0)
0x1f0: Push((bool) 0)
0x1f1: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1f2: Pop(1)
0x1f3: GOTO 0x1f8

0x1f4: Push("Can't find lsh animation : ")
0x1f5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1f6: @ Trace(Stack[-1])
0x1f7: Pop(1)
0x1f8: Return(); Pop(6)

0x1f9: PushEmpty(bool, float, float, bool, float, float)
0x1fa: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1fb: Pop(0)
0x1fc: Push(Stack[-3])
0x1fd: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1fe: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1ff: Pop(0)
0x200: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x201: Pop(0)
0x202: GOTO 0x207

0x203: Push("Can't find lsh animation : ")
0x204: Pop(1); Push(Stack[-1] + Stack[-9]);
0x205: @ Trace(Stack[-1])
0x206: Pop(1)
0x207: Return(); Pop(6)

0x208: PushEmpty(float, cvector, float, cvector)
0x209: @@ GetEyesHeight(Stack[-2])
0x20a: Pop(0)
0x20b: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x20c: Push(CvectorIndex(Stack[-1], 1))
0x20d: Stack[-1] = Stack[-3]
0x20e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x20f: Push("head")
0x210: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x211: Pop(1)
0x212: Return(); Pop(4)

0x213: PushEmpty(bool)
0x214: Call2 0x250

0x215: Pop(0)
0x216: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x217: @ lshStopSpeech()
0x218: Pop(0)
0x219: Return(); Pop(0)

0x21a: PushEmpty(float, float)
0x21b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x21c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x21d: Push((float)0.0)
0x21e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x220: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x221: Return(); Pop(2)

0x222: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x223: Return(); Pop(2)

0x224: PushEmpty(object, object)
0x225: @ FindActor(Stack[-1], Stack[-4])
0x226: Pop(0)
0x227: Pop(0); Push((bool) Stack[-1] == 0)
0x228: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x229: Stack[-5] = (bool) 0
0x22a: Return(); Pop(2)

0x22b: @ Trigger(Stack[-1], Stack[-3])
0x22c: Pop(0)
0x22d: Stack[-5] = (bool) 1
0x22e: Return(); Pop(2)

0x22f: Stack[-1] = 0
0x230: PushEmpty(string, string)
0x231: Stack[-1] = "idle"
0x232: Push(Stack[-3])
0x233: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x234: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x235: Stack[-4] = Stack[-1]
0x236: Return(); Pop(2)

0x237: PushEmpty(int, bool, int, bool)
0x238: Stack[-2] = (int) 0
0x239: Push("all")
0x23a: PushEmpty(string, int)
0x23b: Stack[-1] = Stack[-5]
0x23c: Call2 0x230

0x23d: Pop(1)
0x23e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x23f: Pop(2)
0x240: Pop(0); Push((bool) Stack[-1] == 0)
0x241: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x242: GOTO 0x246

0x243: Push((int) 1)
0x244: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x245: GOTO 0x239

0x246: Stack[-5] = Stack[-2]
0x247: Return(); Pop(4)

0x248: Stack[-1] = (int) 518097
0x249: Return(); Pop(0)

0x24a: Stack[-1] = (int) 518096
0x24b: Return(); Pop(0)

0x24c: Stack[-1] = "ui/NPC_Citizen2.png"
0x24d: Return(); Pop(0)

0x24e: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x24f: Return(); Pop(0)

0x250: Stack[-1] = (bool) 0
0x251: Return(); Pop(0)

0x252: PushEmpty()
0x253: PushEmpty(bool, string, string)
0x254: Stack[-2] = "quest_d11_05"
0x255: Stack[-1] = "teleport"
0x256: Call2 0x224

0x257: Pop(3)
0x258: Return(); Pop(0)

0x259: PushEmpty(int, int)
0x25a: Push("branch")
0x25b: @ GetVariable(Stack[-1], Stack[-2])
0x25c: Pop(1)
0x25d: Push((int) 0)
0x25e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x260: Stack[-3] = (int) 1
0x261: Return(); Pop(2)

0x262: GOTO 0x268

0x263: Push((int) 1)
0x264: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x266: Stack[-3] = (int) 2
0x267: Return(); Pop(2)

0x268: Stack[-3] = (int) 3
0x269: Return(); Pop(2)

