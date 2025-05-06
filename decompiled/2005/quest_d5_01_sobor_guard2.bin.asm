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

RunOp = 0x10e
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x118 Vars = (object)
		EVENT_7 Op = 0x14d Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1d5

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x290

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x28e

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x292

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x294

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x27d

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
0x41: Call2 0x219

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
0x54: Push((int) 536339)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 536340)
0x5a: Push((int) 38123)
0x5b: Push((int) 38122)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 536351)
0x5f: Push((int) -1)
0x60: Push((int) 38133)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x296

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x22a

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
0x86: Call2 0x296

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
0x96: Call2 0x23a

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x254

0x9f: Pop(0)
0xa0: Push((int) 38121)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 536339)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 536340)
0xad: Push((int) 38123)
0xae: Push((int) 38122)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 536351)
0xb2: Push((int) -1)
0xb3: Push((int) 38133)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Push((int) 38123)
0xb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral"
0xbc: Call2 0x84

0xbd: Pop(1)
0xbe: Push((int) 536341)
0xbf: @@ SetMessage(Stack[-1])
0xc0: Pop(1)
0xc1: @@ ClearReplies()
0xc2: Pop(0)
0xc3: Push((int) 536342)
0xc4: Push((int) 38125)
0xc5: Push((int) 38124)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Push((int) 536350)
0xc9: Push((int) -1)
0xca: Push((int) 38132)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: Return(); Pop(0)

0xce: Push((int) 38125)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xd1: PushEmpty(string)
0xd2: Stack[-1] = "Neutral"
0xd3: Call2 0x84

0xd4: Pop(1)
0xd5: Push((int) 536343)
0xd6: @@ SetMessage(Stack[-1])
0xd7: Pop(1)
0xd8: @@ ClearReplies()
0xd9: Pop(0)
0xda: Push((int) 536344)
0xdb: Push((int) -1)
0xdc: Push((int) 38126)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Push((int) 536345)
0xe0: Push((int) -1)
0xe1: Push((int) 38127)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Push((int) 536346)
0xe5: Push((int) 38129)
0xe6: Push((int) 38128)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Return(); Pop(0)

0xea: Push((int) 38129)
0xeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral"
0xef: Call2 0x84

0xf0: Pop(1)
0xf1: Push((int) 536347)
0xf2: @@ SetMessage(Stack[-1])
0xf3: Pop(1)
0xf4: @@ ClearReplies()
0xf5: Pop(0)
0xf6: Push((int) 536348)
0xf7: Push((int) -1)
0xf8: Push((int) 38130)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Push((int) 536349)
0xfc: Push((int) -1)
0xfd: Push((int) 38131)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Return(); Pop(0)

0x101: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x102: PushEmpty(bool)
0x103: Call2 0x296

0x104: Pop(0)
0x105: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x106: @ lshStopAnimation()
0x107: Pop(0)
0x108: GOTO 0x10b

0x109: @ StopAnimation()
0x10a: Pop(0)
0x10b: Return(); Pop(0)

0x10c: GOTO 0x9b

0x10d: Return(); Pop(0)

0x10e: Push((int) 1)
0x10f: @ Sleep(Stack[-1])
0x110: Pop(1)
0x111: PushEmpty(float, float)
0x112: Stack[-2] = (int) 300
0x113: Stack[-1] = (int) 100
0x114: Call2 0x123

0x115: Pop(2)
0x116: GOTO 0x10e

0x117: Return(); Pop(0)

0x118: PushEmpty()
0x119: PushEmpty()
0x11a: Call2 0x164

0x11b: Pop(0)
0x11c: PushEmpty(int, object)
0x11d: Stack[-1] = Stack[-3]
0x11e: Push(-2, 1); TaskCall(0)
0x11f: Call2 0x0

0x120: Pop(-2, 1); TaskReturn
0x121: Pop(2)
0x122: Return(); Pop(0)

0x123: PushEmpty()
0x124: PushEmpty(bool)
0x125: Call2 0x1d0

0x126: Pop(0)
0x127: Pop(1); Push((bool) Stack[-1] == 0)
0x128: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x129: Return(); Pop(0)

0x12a: Push("player")
0x12b: @ FindActor(Stack[-4], Stack[-1])
0x12c: Pop(1)
0x12d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x12e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x12f: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x130: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x131: Push((int) 10)
0x132: Push((float)1.0)
0x133: @ SetTimer(Stack[-2], Stack[-1])
0x134: Pop(2)
0x135: PushEmpty()
0x136: Call2 0x172

0x137: Pop(0)
0x138: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x139: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x13a: Push((int) 10)
0x13b: @ KillTimer(Stack[-1])
0x13c: Pop(1)
0x13d: Return(); Pop(0)

0x13e: PushEmpty(float, float)
0x13f: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x140: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x141: Stack[-3] = (bool) 0
0x142: Return(); Pop(2)

0x143: PushEmpty(float, object)
0x144: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x145: Call2 0x1c8

0x146: Pop(1)
0x147: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x148: Push( Stack[2 + Tasks[-1].StackPointer] )
0x149: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x14a: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x14b: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x14c: Return(); Pop(2)

0x14d: PushEmpty()
0x14e: Push((int) 10)
0x14f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x151: PushEmpty(bool)
0x152: Call2 0x13e

0x153: Pop(0)
0x154: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x155: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x156: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x157: PushEmpty(object)
0x158: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x159: Call2 0x249

0x15a: Pop(1)
0x15b: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x15c: GOTO 0x163

0x15d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x15e: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x15f: Push("head")
0x160: @ UnlookAsync(Stack[-1])
0x161: Pop(1)
0x162: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x163: Return(); Pop(0)

0x164: PushEmpty()
0x165: Call2 0x1c3

0x166: Pop(0)
0x167: Push((int) 10)
0x168: @ KillTimer(Stack[-1])
0x169: Pop(1)
0x16a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x16b: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16c: Push("head")
0x16d: @ UnlookAsync(Stack[-1])
0x16e: Pop(1)
0x16f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x170: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x171: Return(); Pop(0)

0x172: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x173: @ WaitForAnimEnd()
0x174: Pop(0)
0x175: PushEmpty(bool)
0x176: Call2 0x1d0

0x177: Pop(0)
0x178: Pop(1); Push((bool) Stack[-1] == 0)
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: Return(); Pop(14)

0x17b: PushEmpty(int)
0x17c: Call2 0x26c

0x17d: Stack[-8] = Stack[-1]
0x17e: Pop(1)
0x17f: Stack[-6] = (int) 0
0x180: PushEmpty(bool)
0x181: Stack[-1] = (bool) 0
0x182: Push((int) 5)
0x183: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x184: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x185: PushEmpty(bool)
0x186: Call2 0x1d0

0x187: Pop(0)
0x188: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x189: Stack[-1] = (bool) 1
0x18a: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x18b: Push((int) 3)
0x18c: @ irand(Stack[-6], Stack[-1])
0x18d: Pop(1)
0x18e: Push((int) 0)
0x18f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x191: Push(Stack[-7])
0x192: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x193: @ irand(Stack[-4], Stack[-7])
0x194: Pop(0)
0x195: Push("all")
0x196: PushEmpty(string, int)
0x197: Stack[-1] = Stack[-7]
0x198: Call2 0x265

0x199: Pop(1)
0x19a: @ PlayAnimation(Stack[-2], Stack[-1])
0x19b: Pop(2)
0x19c: @ WaitForAnimEnd(Stack[-3])
0x19d: Pop(0)
0x19e: Pop(0); Push((bool) Stack[-3] == 0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: GOTO 0x1be

0x1a1: GOTO 0x1b3

0x1a2: Push((int) 1)
0x1a3: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1a5: Push((int) 4)
0x1a6: @ rand(Stack[-3], Stack[-1])
0x1a7: Pop(1)
0x1a8: Push((int) 1)
0x1a9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1aa: @ Sleep(Stack[-1], Stack[-2])
0x1ab: Pop(1)
0x1ac: Pop(0); Push((bool) Stack[-1] == 0)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ae: GOTO 0x1be

0x1af: GOTO 0x1b3

0x1b0: Push(Stack[-6])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b2: GOTO 0x1be

0x1b3: PushEmpty(bool)
0x1b4: Call2 0x1c1

0x1b5: Pop(0)
0x1b6: Pop(1); Push((bool) Stack[-1] == 0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: GOTO 0x1be

0x1b9: @ ResetAAS()
0x1ba: Pop(0)
0x1bb: Push((int) 1)
0x1bc: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1bd: GOTO 0x180

0x1be: @ ResetAAS()
0x1bf: Pop(0)
0x1c0: Return(); Pop(14)

0x1c1: Stack[-1] = (bool) 1
0x1c2: Return(); Pop(0)

0x1c3: @ StopAnimation()
0x1c4: Pop(0)
0x1c5: @ StopGroup0()
0x1c6: Pop(0)
0x1c7: Return(); Pop(0)

0x1c8: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1c9: @ GetPosition(Stack[-3])
0x1ca: Pop(0)
0x1cb: @@ GetPosition(Stack[-2])
0x1cc: Pop(0)
0x1cd: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1ce: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1cf: Return(); Pop(6)

0x1d0: PushEmpty(bool, bool)
0x1d1: @ IsLoaded(Stack[-1])
0x1d2: Pop(0)
0x1d3: Stack[-3] = Stack[-1]
0x1d4: Return(); Pop(2)

0x1d5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1d6: @@ GetPosition(Stack[-8])
0x1d7: Pop(0)
0x1d8: @@ GetEyesHeight(Stack[-9])
0x1d9: Pop(0)
0x1da: Push(CvectorIndex(Stack[-8], 1))
0x1db: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1dc: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1dd: @ GetPosition(Stack[-7])
0x1de: Pop(0)
0x1df: @ GetEyesHeight(Stack[-9])
0x1e0: Pop(0)
0x1e1: Push(CvectorIndex(Stack[-7], 1))
0x1e2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1e3: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1e4: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1e5: Push(CvectorIndex(Stack[-6], 1))
0x1e6: Stack[-1] = (int) 0
0x1e7: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1e8: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1e9: Pop(1); Push(Sqrt(Stack[-1]))
0x1ea: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1eb: Stack[-5] = -Stack[-6]; Pop(0);
0x1ec: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1ed: PushEmpty(cvector, cvector)
0x1ee: Push(CVector(0.0, 1.0, 0.0))
0x1ef: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1f0: Call2 0x25b

0x1f1: Pop(1)
0x1f2: Push((int) 25)
0x1f3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1f4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1f5: Push(CVector(0.0, 10.0, 0.0))
0x1f6: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1f7: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1f8: @ IsOverrideActive(Stack[-2])
0x1f9: Pop(0)
0x1fa: Push(Stack[-2])
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fc: Stack[-21] = (bool) 0
0x1fd: Return(); Pop(18)

0x1fe: @ StopWorld()
0x1ff: Pop(0)
0x200: @ CameraTransit(Stack[-3], Stack[-5])
0x201: Pop(0)
0x202: Push(CvectorIndex(Stack[-4], 0))
0x203: Push(CvectorIndex(Stack[-5], 2))
0x204: @ Rotate(Stack[-2], Stack[-1])
0x205: Pop(2)
0x206: PushEmpty(bool)
0x207: Call2 0x296

0x208: Pop(0)
0x209: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x20a: GOTO 0x213

0x20b: Push("head")
0x20c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x20d: Pop(1)
0x20e: Push(Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x210: Push("head")
0x211: @ LookAsyncCamera(Stack[-1])
0x212: Pop(1)
0x213: @ CameraWaitForPlayFinish()
0x214: Pop(0)
0x215: @ ResumeWorld()
0x216: Pop(0)
0x217: Stack[-21] = (bool) 1
0x218: Return(); Pop(18)

0x219: PushEmpty(bool, bool)
0x21a: @ CameraSwitchToNormal()
0x21b: Pop(0)
0x21c: PushEmpty(bool)
0x21d: Call2 0x296

0x21e: Pop(0)
0x21f: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x220: GOTO 0x229

0x221: Push("head")
0x222: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x223: Pop(1)
0x224: Push(Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x226: Push("head")
0x227: @ UnlookAsync(Stack[-1])
0x228: Pop(1)
0x229: Return(); Pop(2)

0x22a: PushEmpty(bool, float, float, bool, float, float)
0x22b: @ lshHasAnimation(Stack[-3], Stack[-7])
0x22c: Pop(0)
0x22d: Push(Stack[-3])
0x22e: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x22f: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x230: Pop(0)
0x231: Push((bool) 0)
0x232: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x233: Pop(1)
0x234: GOTO 0x239

0x235: Push("Can't find lsh animation : ")
0x236: Pop(1); Push(Stack[-1] + Stack[-8]);
0x237: @ Trace(Stack[-1])
0x238: Pop(1)
0x239: Return(); Pop(6)

0x23a: PushEmpty(bool, float, float, bool, float, float)
0x23b: @ lshHasAnimation(Stack[-3], Stack[-8])
0x23c: Pop(0)
0x23d: Push(Stack[-3])
0x23e: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23f: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x240: Pop(0)
0x241: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x242: Pop(0)
0x243: GOTO 0x248

0x244: Push("Can't find lsh animation : ")
0x245: Pop(1); Push(Stack[-1] + Stack[-9]);
0x246: @ Trace(Stack[-1])
0x247: Pop(1)
0x248: Return(); Pop(6)

0x249: PushEmpty(float, cvector, float, cvector)
0x24a: @@ GetEyesHeight(Stack[-2])
0x24b: Pop(0)
0x24c: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x24d: Push(CvectorIndex(Stack[-1], 1))
0x24e: Stack[-1] = Stack[-3]
0x24f: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x250: Push("head")
0x251: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x252: Pop(1)
0x253: Return(); Pop(4)

0x254: PushEmpty(bool)
0x255: Call2 0x296

0x256: Pop(0)
0x257: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x258: @ lshStopSpeech()
0x259: Pop(0)
0x25a: Return(); Pop(0)

0x25b: PushEmpty(float, float)
0x25c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x25d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x25e: Push((float)0.0)
0x25f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x260: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x261: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x262: Return(); Pop(2)

0x263: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x264: Return(); Pop(2)

0x265: PushEmpty(string, string)
0x266: Stack[-1] = "idle"
0x267: Push(Stack[-3])
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x26a: Stack[-4] = Stack[-1]
0x26b: Return(); Pop(2)

0x26c: PushEmpty(int, bool, int, bool)
0x26d: Stack[-2] = (int) 0
0x26e: Push("all")
0x26f: PushEmpty(string, int)
0x270: Stack[-1] = Stack[-5]
0x271: Call2 0x265

0x272: Pop(1)
0x273: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x274: Pop(2)
0x275: Pop(0); Push((bool) Stack[-1] == 0)
0x276: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x277: GOTO 0x27b

0x278: Push((int) 1)
0x279: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x27a: GOTO 0x26e

0x27b: Stack[-5] = Stack[-2]
0x27c: Return(); Pop(4)

0x27d: PushEmpty(int, int)
0x27e: Push("branch")
0x27f: @ GetVariable(Stack[-1], Stack[-2])
0x280: Pop(1)
0x281: Push((int) 0)
0x282: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x283: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x284: Stack[-3] = (int) 1
0x285: Return(); Pop(2)

0x286: GOTO 0x28c

0x287: Push((int) 1)
0x288: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28a: Stack[-3] = (int) 2
0x28b: Return(); Pop(2)

0x28c: Stack[-3] = (int) 3
0x28d: Return(); Pop(2)

0x28e: Stack[-1] = (int) 515556
0x28f: Return(); Pop(0)

0x290: Stack[-1] = (int) 503341
0x291: Return(); Pop(0)

0x292: Stack[-1] = "ui/NPC_Citizen3.png"
0x293: Return(); Pop(0)

0x294: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x295: Return(); Pop(0)

0x296: Stack[-1] = (bool) 0
0x297: Return(); Pop(0)

