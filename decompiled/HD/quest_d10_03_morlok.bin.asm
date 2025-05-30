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
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	branch
	ui/NPC_Morlok.png
	ui/NPC_Morlok_b.png

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
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
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
	self (1 args)
	HasAnimation (3 args)
	GetVariable (2 args)

RunOp = 0xc4
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0xca Vars = (object)
		EVENT_26 Op = 0xfb Vars = (string)
		EVENT_6 Op = 0x103 Vars = ()
		EVENT_7 Op = 0x144 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 110.0
0x5: Call2 0x1cc

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x28f

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x28d

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x291

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x293

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
0x41: Call2 0x211

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
0x54: Push((int) 534134)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 534135)
0x5a: Push((int) -1)
0x5b: Push((int) 35722)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 534444)
0x5f: Push((int) -1)
0x60: Push((int) 36077)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x295

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x223

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
0x86: Call2 0x295

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
0x96: Call2 0x233

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x24d

0x9f: Pop(0)
0xa0: Push((int) 35721)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 534134)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 534135)
0xad: Push((int) -1)
0xae: Push((int) 35722)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 534444)
0xb2: Push((int) -1)
0xb3: Push((int) 36077)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb8: PushEmpty(bool)
0xb9: Call2 0x295

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

0xc4: PushEmpty(float, float)
0xc5: Stack[-2] = (int) 300
0xc6: Stack[-1] = (int) 100
0xc7: Call2 0xd5

0xc8: Pop(2)
0xc9: Return(); Pop(0)

0xca: PushEmpty()
0xcb: PushEmpty()
0xcc: Call2 0x15b

0xcd: Pop(0)
0xce: PushEmpty(int, object)
0xcf: Stack[-1] = Stack[-3]
0xd0: Push(-2, 1); TaskCall(0)
0xd1: Call2 0x0

0xd2: Pop(-2, 1); TaskReturn
0xd3: Pop(2)
0xd4: Return(); Pop(0)

0xd5: PushEmpty(float, bool, float, bool)
0xd6: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0xd7: Push((int) 3)
0xd8: @ rand(Stack[-3], Stack[-1])
0xd9: Pop(1)
0xda: Push((int) 3)
0xdb: Pop(1); Push(Stack[-3] + Stack[-1]);
0xdc: @ Sleep(Stack[-1], Stack[-2])
0xdd: Pop(1)
0xde: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0xdf: PushEmpty(float, float)
0xe0: Stack[-2] = Stack[-8]
0xe1: Stack[-1] = Stack[-7]
0xe2: Call2 0x11a

0xe3: Pop(2)
0xe4: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0xe5: GOTO 0xd7

0xe6: Return(); Pop(4)

0xe7: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0xe8: PushEmpty(bool)
0xe9: Stack[-1] = (bool) 0
0xea: PushEmpty(bool)
0xeb: Call2 0x1c7

0xec: Pop(0)
0xed: Pop(1); Push((bool) Stack[-1] == 0)
0xee: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xef: PushEmpty(bool)
0xf0: Call2 0x118

0xf1: Pop(0)
0xf2: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf3: Stack[-1] = (bool) 1
0xf4: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf5: PushEmpty(object)
0xf6: Call2 0x254

0xf7: Pop(0)
0xf8: @ RemoveActor(Stack[-1])
0xf9: Pop(1)
0xfa: Return(); Pop(0)

0xfb: PushEmpty()
0xfc: Push("cleanup")
0xfd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xff: PushEmpty()
0x100: Call2 0xe7

0x101: Pop(0)
0x102: Return(); Pop(0)

0x103: Push( Stack[6 + Tasks[-1].StackPointer] )
0x104: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x105: PushEmpty()
0x106: Call2 0x15b

0x107: Pop(0)
0x108: PushEmpty(bool)
0x109: Stack[-1] = (bool) 0
0x10a: Push( Stack[5 + Tasks[-1].StackPointer] )
0x10b: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10c: PushEmpty(bool)
0x10d: Call2 0x118

0x10e: Pop(0)
0x10f: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x110: Stack[-1] = (bool) 1
0x111: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x112: PushEmpty(object)
0x113: Call2 0x254

0x114: Pop(0)
0x115: @ RemoveActor(Stack[-1])
0x116: Pop(1)
0x117: Return(); Pop(0)

0x118: Stack[-1] = (bool) 1
0x119: Return(); Pop(0)

0x11a: PushEmpty()
0x11b: PushEmpty(bool)
0x11c: Call2 0x1c7

0x11d: Pop(0)
0x11e: Pop(1); Push((bool) Stack[-1] == 0)
0x11f: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x120: Return(); Pop(0)

0x121: Push("player")
0x122: @ FindActor(Stack[-4], Stack[-1])
0x123: Pop(1)
0x124: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x125: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x126: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x127: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x128: Push((int) 10)
0x129: Push((float)1.0)
0x12a: @ SetTimer(Stack[-2], Stack[-1])
0x12b: Pop(2)
0x12c: PushEmpty()
0x12d: Call2 0x169

0x12e: Pop(0)
0x12f: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x130: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x131: Push((int) 10)
0x132: @ KillTimer(Stack[-1])
0x133: Pop(1)
0x134: Return(); Pop(0)

0x135: PushEmpty(float, float)
0x136: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x137: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x138: Stack[-3] = (bool) 0
0x139: Return(); Pop(2)

0x13a: PushEmpty(float, object)
0x13b: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x13c: Call2 0x1bf

0x13d: Pop(1)
0x13e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x13f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x140: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x141: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x142: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x143: Return(); Pop(2)

0x144: PushEmpty()
0x145: Push((int) 10)
0x146: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x148: PushEmpty(bool)
0x149: Call2 0x135

0x14a: Pop(0)
0x14b: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x14c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x14d: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14e: PushEmpty(object)
0x14f: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x150: Call2 0x242

0x151: Pop(1)
0x152: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x153: GOTO 0x15a

0x154: Push( Stack[2 + Tasks[-1].StackPointer] )
0x155: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x156: Push("head")
0x157: @ UnlookAsync(Stack[-1])
0x158: Pop(1)
0x159: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x15a: Return(); Pop(0)

0x15b: PushEmpty()
0x15c: Call2 0x1ba

0x15d: Pop(0)
0x15e: Push((int) 10)
0x15f: @ KillTimer(Stack[-1])
0x160: Pop(1)
0x161: Push( Stack[2 + Tasks[-1].StackPointer] )
0x162: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x163: Push("head")
0x164: @ UnlookAsync(Stack[-1])
0x165: Pop(1)
0x166: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x167: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x168: Return(); Pop(0)

0x169: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x16a: @ WaitForAnimEnd()
0x16b: Pop(0)
0x16c: PushEmpty(bool)
0x16d: Call2 0x1c7

0x16e: Pop(0)
0x16f: Pop(1); Push((bool) Stack[-1] == 0)
0x170: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x171: Return(); Pop(14)

0x172: PushEmpty(int)
0x173: Call2 0x26b

0x174: Stack[-8] = Stack[-1]
0x175: Pop(1)
0x176: Stack[-6] = (int) 0
0x177: PushEmpty(bool)
0x178: Stack[-1] = (bool) 0
0x179: Push((int) 5)
0x17a: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: PushEmpty(bool)
0x17d: Call2 0x1c7

0x17e: Pop(0)
0x17f: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x180: Stack[-1] = (bool) 1
0x181: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x182: Push((int) 3)
0x183: @ irand(Stack[-6], Stack[-1])
0x184: Pop(1)
0x185: Push((int) 0)
0x186: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x188: Push(Stack[-7])
0x189: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x18a: @ irand(Stack[-4], Stack[-7])
0x18b: Pop(0)
0x18c: Push("all")
0x18d: PushEmpty(string, int)
0x18e: Stack[-1] = Stack[-7]
0x18f: Call2 0x264

0x190: Pop(1)
0x191: @ PlayAnimation(Stack[-2], Stack[-1])
0x192: Pop(2)
0x193: @ WaitForAnimEnd(Stack[-3])
0x194: Pop(0)
0x195: Pop(0); Push((bool) Stack[-3] == 0)
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: GOTO 0x1b5

0x198: GOTO 0x1aa

0x199: Push((int) 1)
0x19a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x19c: Push((int) 4)
0x19d: @ rand(Stack[-3], Stack[-1])
0x19e: Pop(1)
0x19f: Push((int) 1)
0x1a0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1a1: @ Sleep(Stack[-1], Stack[-2])
0x1a2: Pop(1)
0x1a3: Pop(0); Push((bool) Stack[-1] == 0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: GOTO 0x1b5

0x1a6: GOTO 0x1aa

0x1a7: Push(Stack[-6])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: GOTO 0x1b5

0x1aa: PushEmpty(bool)
0x1ab: Call2 0x1b8

0x1ac: Pop(0)
0x1ad: Pop(1); Push((bool) Stack[-1] == 0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1af: GOTO 0x1b5

0x1b0: @ ResetAAS()
0x1b1: Pop(0)
0x1b2: Push((int) 1)
0x1b3: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1b4: GOTO 0x177

0x1b5: @ ResetAAS()
0x1b6: Pop(0)
0x1b7: Return(); Pop(14)

0x1b8: Stack[-1] = (bool) 1
0x1b9: Return(); Pop(0)

0x1ba: @ StopAnimation()
0x1bb: Pop(0)
0x1bc: @ StopGroup0()
0x1bd: Pop(0)
0x1be: Return(); Pop(0)

0x1bf: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1c0: @ GetPosition(Stack[-3])
0x1c1: Pop(0)
0x1c2: @@ GetPosition(Stack[-2])
0x1c3: Pop(0)
0x1c4: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1c5: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1c6: Return(); Pop(6)

0x1c7: PushEmpty(bool, bool)
0x1c8: @ IsLoaded(Stack[-1])
0x1c9: Pop(0)
0x1ca: Stack[-3] = Stack[-1]
0x1cb: Return(); Pop(2)

0x1cc: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1cd: @@ GetPosition(Stack[-8])
0x1ce: Pop(0)
0x1cf: @@ GetEyesHeight(Stack[-9])
0x1d0: Pop(0)
0x1d1: Push(CvectorIndex(Stack[-8], 1))
0x1d2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1d3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1d4: @ GetPosition(Stack[-7])
0x1d5: Pop(0)
0x1d6: @ GetEyesHeight(Stack[-9])
0x1d7: Pop(0)
0x1d8: Push(CvectorIndex(Stack[-7], 1))
0x1d9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1da: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1db: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1dc: Push(CvectorIndex(Stack[-6], 1))
0x1dd: Stack[-1] = (int) 0
0x1de: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1df: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1e0: Pop(1); Push(Sqrt(Stack[-1]))
0x1e1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1e2: Stack[-5] = -Stack[-6]; Pop(0);
0x1e3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1e4: PushEmpty(cvector, cvector)
0x1e5: Push(CVector(0.0, 1.0, 0.0))
0x1e6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1e7: Call2 0x25a

0x1e8: Pop(1)
0x1e9: Push((int) 25)
0x1ea: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1eb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ec: Push(CVector(0.0, 10.0, 0.0))
0x1ed: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1ee: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1ef: @ IsOverrideActive(Stack[-2])
0x1f0: Pop(0)
0x1f1: Push(Stack[-2])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f3: Stack[-21] = (bool) 0
0x1f4: Return(); Pop(18)

0x1f5: @ StopWorld()
0x1f6: Pop(0)
0x1f7: Push((bool) 1)
0x1f8: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1f9: Pop(1)
0x1fa: Push(CvectorIndex(Stack[-4], 0))
0x1fb: Push(CvectorIndex(Stack[-5], 2))
0x1fc: @ Rotate(Stack[-2], Stack[-1])
0x1fd: Pop(2)
0x1fe: PushEmpty(bool)
0x1ff: Call2 0x295

0x200: Pop(0)
0x201: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x202: GOTO 0x20b

0x203: Push("head")
0x204: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x205: Pop(1)
0x206: Push(Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x208: Push("head")
0x209: @ LookAsyncCamera(Stack[-1])
0x20a: Pop(1)
0x20b: @ CameraWaitForPlayFinish()
0x20c: Pop(0)
0x20d: @ ResumeWorld()
0x20e: Pop(0)
0x20f: Stack[-21] = (bool) 1
0x210: Return(); Pop(18)

0x211: PushEmpty(bool, bool)
0x212: Push((bool) 1)
0x213: @ CameraSwitchToNormal(Stack[-1])
0x214: Pop(1)
0x215: PushEmpty(bool)
0x216: Call2 0x295

0x217: Pop(0)
0x218: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x219: GOTO 0x222

0x21a: Push("head")
0x21b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x21c: Pop(1)
0x21d: Push(Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21f: Push("head")
0x220: @ UnlookAsync(Stack[-1])
0x221: Pop(1)
0x222: Return(); Pop(2)

0x223: PushEmpty(bool, float, float, bool, float, float)
0x224: @ lshHasAnimation(Stack[-3], Stack[-7])
0x225: Pop(0)
0x226: Push(Stack[-3])
0x227: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x228: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x229: Pop(0)
0x22a: Push((bool) 0)
0x22b: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x22c: Pop(1)
0x22d: GOTO 0x232

0x22e: Push("Can't find lsh animation : ")
0x22f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x230: @ Trace(Stack[-1])
0x231: Pop(1)
0x232: Return(); Pop(6)

0x233: PushEmpty(bool, float, float, bool, float, float)
0x234: @ lshHasAnimation(Stack[-3], Stack[-8])
0x235: Pop(0)
0x236: Push(Stack[-3])
0x237: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x238: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x239: Pop(0)
0x23a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x23b: Pop(0)
0x23c: GOTO 0x241

0x23d: Push("Can't find lsh animation : ")
0x23e: Pop(1); Push(Stack[-1] + Stack[-9]);
0x23f: @ Trace(Stack[-1])
0x240: Pop(1)
0x241: Return(); Pop(6)

0x242: PushEmpty(float, cvector, float, cvector)
0x243: @@ GetEyesHeight(Stack[-2])
0x244: Pop(0)
0x245: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x246: Push(CvectorIndex(Stack[-1], 1))
0x247: Stack[-1] = Stack[-3]
0x248: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x249: Push("head")
0x24a: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x24b: Pop(1)
0x24c: Return(); Pop(4)

0x24d: PushEmpty(bool)
0x24e: Call2 0x295

0x24f: Pop(0)
0x250: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x251: @ lshStopSpeech()
0x252: Pop(0)
0x253: Return(); Pop(0)

0x254: PushEmpty(object, object)
0x255: @ self(Stack[-1])
0x256: Pop(0)
0x257: Stack[-3] = Stack[-1]
0x258: Return(); Pop(2)

0x259: Stack[-1] = 0
0x25a: PushEmpty(float, float)
0x25b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x25c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x25d: Push((float)0.0)
0x25e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x260: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x261: Return(); Pop(2)

0x262: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x263: Return(); Pop(2)

0x264: PushEmpty(string, string)
0x265: Stack[-1] = "idle"
0x266: Push(Stack[-3])
0x267: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x268: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x269: Stack[-4] = Stack[-1]
0x26a: Return(); Pop(2)

0x26b: PushEmpty(int, bool, int, bool)
0x26c: Stack[-2] = (int) 0
0x26d: Push("all")
0x26e: PushEmpty(string, int)
0x26f: Stack[-1] = Stack[-5]
0x270: Call2 0x264

0x271: Pop(1)
0x272: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x273: Pop(2)
0x274: Pop(0); Push((bool) Stack[-1] == 0)
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: GOTO 0x27a

0x277: Push((int) 1)
0x278: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x279: GOTO 0x26d

0x27a: Stack[-5] = Stack[-2]
0x27b: Return(); Pop(4)

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

0x28d: Stack[-1] = (int) 521048
0x28e: Return(); Pop(0)

0x28f: Stack[-1] = (int) 521047
0x290: Return(); Pop(0)

0x291: Stack[-1] = "ui/NPC_Morlok.png"
0x292: Return(); Pop(0)

0x293: Stack[-1] = "ui/NPC_Morlok_b.png"
0x294: Return(); Pop(0)

0x295: Stack[-1] = (bool) 0
0x296: Return(); Pop(0)

