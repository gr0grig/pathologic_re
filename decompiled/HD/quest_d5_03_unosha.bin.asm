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
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x13c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x133 Vars = (object)
		EVENT_26 Op = 0x165 Vars = (string)
		EVENT_5 Op = 0x16d Vars = ()
		EVENT_6 Op = 0x172 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1df

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2ae

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2ac

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2b0

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2b2

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x29b

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
0x41: Call2 0x224

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
0x4f: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x28f

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x98

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
0x63: Push((int) 511808)
0x64: Push((int) 13019)
0x65: Push((int) 13018)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x7a

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0x98

0x6c: Pop(1)
0x6d: Push((int) 512549)
0x6e: @@ SetMessage(Stack[-1])
0x6f: Pop(1)
0x70: @@ ClearReplies()
0x71: Pop(0)
0x72: Push((int) 512550)
0x73: Push((int) -1)
0x74: Push((int) 13719)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x4e

0x7a: PushEmpty(bool)
0x7b: Call2 0x2b4

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x236

0x86: Pop(1)
0x87: GOTO 0x7e

0x88: GOTO 0x97

0x89: Push("all")
0x8a: Push("idle")
0x8b: @ PlayAnimation(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: @ WaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: Push("all")
0x93: Push("idle")
0x94: @ PlayAnimation(Stack[-2], Stack[-1])
0x95: Pop(2)
0x96: GOTO 0x8d

0x97: Return(); Pop(0)

0x98: PushEmpty()
0x99: PushEmpty(bool)
0x9a: Call2 0x2b4

0x9b: Pop(0)
0x9c: Pop(1); Push((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Return(); Pop(0)

0xa2: PushEmpty(string, bool)
0xa3: Stack[-2] = Stack[-3]
0xa4: Push("")
0xa5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa7: Stack[-1] = (bool) 0
0xa8: GOTO 0xaa

0xa9: Stack[-1] = (bool) 1
0xaa: Call2 0x246

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x255

0xb3: Pop(0)
0xb4: Push((int) 13016)
0xb5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: PushEmpty(object, object)
0xb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba: Call2 0x289

0xbb: Pop(2)
0xbc: Push((int) 13017)
0xbd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbf: PushEmpty(object, object)
0xc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2: Call2 0x289

0xc3: Pop(2)
0xc4: Push((int) 13013)
0xc5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xc7: PushEmpty(bool, object)
0xc8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Call2 0x28f

0xca: Pop(1)
0xcb: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call2 0x98

0xcf: Pop(1)
0xd0: Push((int) 511803)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: Push((int) 511804)
0xd6: Push((int) 13015)
0xd7: Push((int) 13014)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Push((int) 511808)
0xdb: Push((int) 13019)
0xdc: Push((int) 13018)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Return(); Pop(0)

0xe0: PushEmpty(string)
0xe1: Stack[-1] = "Neutral"
0xe2: Call2 0x98

0xe3: Pop(1)
0xe4: Push((int) 512549)
0xe5: @@ SetMessage(Stack[-1])
0xe6: Pop(1)
0xe7: @@ ClearReplies()
0xe8: Pop(0)
0xe9: Push((int) 512550)
0xea: Push((int) -1)
0xeb: Push((int) 13719)
0xec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: Push((int) 13019)
0xf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Neutral"
0xf4: Call2 0x98

0xf5: Pop(1)
0xf6: Push((int) 511809)
0xf7: @@ SetMessage(Stack[-1])
0xf8: Pop(1)
0xf9: @@ ClearReplies()
0xfa: Pop(0)
0xfb: Push((int) 511810)
0xfc: Push((int) 13015)
0xfd: Push((int) 13020)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Push((int) 511811)
0x101: Push((int) 13015)
0x102: Push((int) 13022)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: Return(); Pop(0)

0x106: Push((int) 13015)
0x107: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Neutral"
0x10b: Call2 0x98

0x10c: Pop(1)
0x10d: Push((int) 511805)
0x10e: @@ SetMessage(Stack[-1])
0x10f: Pop(1)
0x110: @@ ClearReplies()
0x111: Pop(0)
0x112: Push((int) 511806)
0x113: Push((int) -1)
0x114: Push((int) 13016)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Push((int) 511807)
0x118: Push((int) -1)
0x119: Push((int) 13017)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: Return(); Pop(0)

0x11d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x11e: PushEmpty(bool)
0x11f: Call2 0x2b4

0x120: Pop(0)
0x121: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x122: @ lshStopAnimation()
0x123: Pop(0)
0x124: GOTO 0x127

0x125: @ StopAnimation()
0x126: Pop(0)
0x127: Return(); Pop(0)

0x128: GOTO 0xaf

0x129: Return(); Pop(0)

0x12a: PushEmpty()
0x12b: PushEmpty(int, object)
0x12c: Stack[-1] = Stack[-3]
0x12d: Push(-2, 1); TaskCall(0)
0x12e: Call2 0x0

0x12f: Pop(-2, 1); TaskReturn
0x130: Stack[-4] = Stack[-2]
0x131: Pop(2)
0x132: Return(); Pop(0)

0x133: PushEmpty()
0x134: PushEmpty()
0x135: Call2 0x1d5

0x136: Pop(0)
0x137: PushEmpty(int, object)
0x138: Stack[-1] = Stack[-3]
0x139: Call2 0x12a

0x13a: Pop(2)
0x13b: Return(); Pop(0)

0x13c: PushEmpty(float, float)
0x13d: PushEmpty(bool)
0x13e: Call2 0x1da

0x13f: Pop(0)
0x140: Pop(1); Push((bool) Stack[-1] == 0)
0x141: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x142: @ Hold()
0x143: Pop(0)
0x144: GOTO 0x13d

0x145: Push((int) 3)
0x146: @ rand(Stack[-2], Stack[-1])
0x147: Pop(1)
0x148: Push((int) 3)
0x149: Pop(1); Push(Stack[-2] + Stack[-1]);
0x14a: @ Sleep(Stack[-1])
0x14b: Pop(1)
0x14c: PushEmpty()
0x14d: Call2 0x184

0x14e: Pop(0)
0x14f: GOTO 0x13d

0x150: Return(); Pop(2)

0x151: PushEmpty(bool, bool)
0x152: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x153: @ IsLoaded(Stack[-1])
0x154: Pop(0)
0x155: PushEmpty(bool)
0x156: Stack[-1] = (bool) 0
0x157: Pop(0); Push((bool) Stack[-2] == 0)
0x158: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x159: PushEmpty(bool)
0x15a: Call2 0x182

0x15b: Pop(0)
0x15c: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15d: Stack[-1] = (bool) 1
0x15e: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x15f: PushEmpty(object)
0x160: Call2 0x25c

0x161: Pop(0)
0x162: @ RemoveActor(Stack[-1])
0x163: Pop(1)
0x164: Return(); Pop(2)

0x165: PushEmpty()
0x166: Push("cleanup")
0x167: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x169: PushEmpty()
0x16a: Call2 0x151

0x16b: Pop(0)
0x16c: Return(); Pop(0)

0x16d: @ StopGroup0()
0x16e: Pop(0)
0x16f: @ sync()
0x170: Pop(0)
0x171: Return(); Pop(0)

0x172: PushEmpty(bool)
0x173: Stack[-1] = (bool) 0
0x174: Push( Stack[0 + Tasks[-1].StackPointer] )
0x175: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x176: PushEmpty(bool)
0x177: Call2 0x182

0x178: Pop(0)
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: Stack[-1] = (bool) 1
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: PushEmpty(object)
0x17d: Call2 0x25c

0x17e: Pop(0)
0x17f: @ RemoveActor(Stack[-1])
0x180: Pop(1)
0x181: Return(); Pop(0)

0x182: Stack[-1] = (bool) 1
0x183: Return(); Pop(0)

0x184: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x185: @ WaitForAnimEnd()
0x186: Pop(0)
0x187: PushEmpty(bool)
0x188: Call2 0x1da

0x189: Pop(0)
0x18a: Pop(1); Push((bool) Stack[-1] == 0)
0x18b: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18c: Return(); Pop(14)

0x18d: PushEmpty(int)
0x18e: Call2 0x278

0x18f: Stack[-8] = Stack[-1]
0x190: Pop(1)
0x191: Stack[-6] = (int) 0
0x192: PushEmpty(bool)
0x193: Stack[-1] = (bool) 0
0x194: Push((int) 5)
0x195: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x196: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x197: PushEmpty(bool)
0x198: Call2 0x1da

0x199: Pop(0)
0x19a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19b: Stack[-1] = (bool) 1
0x19c: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x19d: Push((int) 3)
0x19e: @ irand(Stack[-6], Stack[-1])
0x19f: Pop(1)
0x1a0: Push((int) 0)
0x1a1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1a3: Push(Stack[-7])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1a5: @ irand(Stack[-4], Stack[-7])
0x1a6: Pop(0)
0x1a7: Push("all")
0x1a8: PushEmpty(string, int)
0x1a9: Stack[-1] = Stack[-7]
0x1aa: Call2 0x271

0x1ab: Pop(1)
0x1ac: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ad: Pop(2)
0x1ae: @ WaitForAnimEnd(Stack[-3])
0x1af: Pop(0)
0x1b0: Pop(0); Push((bool) Stack[-3] == 0)
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b2: GOTO 0x1d0

0x1b3: GOTO 0x1c5

0x1b4: Push((int) 1)
0x1b5: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1b7: Push((int) 4)
0x1b8: @ rand(Stack[-3], Stack[-1])
0x1b9: Pop(1)
0x1ba: Push((int) 1)
0x1bb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1bc: @ Sleep(Stack[-1], Stack[-2])
0x1bd: Pop(1)
0x1be: Pop(0); Push((bool) Stack[-1] == 0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: GOTO 0x1d0

0x1c1: GOTO 0x1c5

0x1c2: Push(Stack[-6])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: GOTO 0x1d0

0x1c5: PushEmpty(bool)
0x1c6: Call2 0x1d3

0x1c7: Pop(0)
0x1c8: Pop(1); Push((bool) Stack[-1] == 0)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1ca: GOTO 0x1d0

0x1cb: @ ResetAAS()
0x1cc: Pop(0)
0x1cd: Push((int) 1)
0x1ce: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1cf: GOTO 0x192

0x1d0: @ ResetAAS()
0x1d1: Pop(0)
0x1d2: Return(); Pop(14)

0x1d3: Stack[-1] = (bool) 1
0x1d4: Return(); Pop(0)

0x1d5: @ StopAnimation()
0x1d6: Pop(0)
0x1d7: @ StopGroup0()
0x1d8: Pop(0)
0x1d9: Return(); Pop(0)

0x1da: PushEmpty(bool, bool)
0x1db: @ IsLoaded(Stack[-1])
0x1dc: Pop(0)
0x1dd: Stack[-3] = Stack[-1]
0x1de: Return(); Pop(2)

0x1df: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1e0: @@ GetPosition(Stack[-8])
0x1e1: Pop(0)
0x1e2: @@ GetEyesHeight(Stack[-9])
0x1e3: Pop(0)
0x1e4: Push(CvectorIndex(Stack[-8], 1))
0x1e5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1e6: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1e7: @ GetPosition(Stack[-7])
0x1e8: Pop(0)
0x1e9: @ GetEyesHeight(Stack[-9])
0x1ea: Pop(0)
0x1eb: Push(CvectorIndex(Stack[-7], 1))
0x1ec: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1ed: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1ee: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1ef: Push(CvectorIndex(Stack[-6], 1))
0x1f0: Stack[-1] = (int) 0
0x1f1: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1f2: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1f3: Pop(1); Push(Sqrt(Stack[-1]))
0x1f4: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1f5: Stack[-5] = -Stack[-6]; Pop(0);
0x1f6: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1f7: PushEmpty(cvector, cvector)
0x1f8: Push(CVector(0.0, 1.0, 0.0))
0x1f9: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1fa: Call2 0x262

0x1fb: Pop(1)
0x1fc: Push((int) 25)
0x1fd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1fe: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ff: Push(CVector(0.0, 10.0, 0.0))
0x200: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x201: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x202: @ IsOverrideActive(Stack[-2])
0x203: Pop(0)
0x204: Push(Stack[-2])
0x205: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x206: Stack[-21] = (bool) 0
0x207: Return(); Pop(18)

0x208: @ StopWorld()
0x209: Pop(0)
0x20a: Push((bool) 1)
0x20b: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x20c: Pop(1)
0x20d: Push(CvectorIndex(Stack[-4], 0))
0x20e: Push(CvectorIndex(Stack[-5], 2))
0x20f: @ Rotate(Stack[-2], Stack[-1])
0x210: Pop(2)
0x211: PushEmpty(bool)
0x212: Call2 0x2b4

0x213: Pop(0)
0x214: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x215: GOTO 0x21e

0x216: Push("head")
0x217: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x218: Pop(1)
0x219: Push(Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21b: Push("head")
0x21c: @ LookAsyncCamera(Stack[-1])
0x21d: Pop(1)
0x21e: @ CameraWaitForPlayFinish()
0x21f: Pop(0)
0x220: @ ResumeWorld()
0x221: Pop(0)
0x222: Stack[-21] = (bool) 1
0x223: Return(); Pop(18)

0x224: PushEmpty(bool, bool)
0x225: Push((bool) 1)
0x226: @ CameraSwitchToNormal(Stack[-1])
0x227: Pop(1)
0x228: PushEmpty(bool)
0x229: Call2 0x2b4

0x22a: Pop(0)
0x22b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22c: GOTO 0x235

0x22d: Push("head")
0x22e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x22f: Pop(1)
0x230: Push(Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x232: Push("head")
0x233: @ UnlookAsync(Stack[-1])
0x234: Pop(1)
0x235: Return(); Pop(2)

0x236: PushEmpty(bool, float, float, bool, float, float)
0x237: @ lshHasAnimation(Stack[-3], Stack[-7])
0x238: Pop(0)
0x239: Push(Stack[-3])
0x23a: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23b: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x23c: Pop(0)
0x23d: Push((bool) 0)
0x23e: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x23f: Pop(1)
0x240: GOTO 0x245

0x241: Push("Can't find lsh animation : ")
0x242: Pop(1); Push(Stack[-1] + Stack[-8]);
0x243: @ Trace(Stack[-1])
0x244: Pop(1)
0x245: Return(); Pop(6)

0x246: PushEmpty(bool, float, float, bool, float, float)
0x247: @ lshHasAnimation(Stack[-3], Stack[-8])
0x248: Pop(0)
0x249: Push(Stack[-3])
0x24a: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24b: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x24c: Pop(0)
0x24d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x24e: Pop(0)
0x24f: GOTO 0x254

0x250: Push("Can't find lsh animation : ")
0x251: Pop(1); Push(Stack[-1] + Stack[-9]);
0x252: @ Trace(Stack[-1])
0x253: Pop(1)
0x254: Return(); Pop(6)

0x255: PushEmpty(bool)
0x256: Call2 0x2b4

0x257: Pop(0)
0x258: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x259: @ lshStopSpeech()
0x25a: Pop(0)
0x25b: Return(); Pop(0)

0x25c: PushEmpty(object, object)
0x25d: @ self(Stack[-1])
0x25e: Pop(0)
0x25f: Stack[-3] = Stack[-1]
0x260: Return(); Pop(2)

0x261: Stack[-1] = 0
0x262: PushEmpty(float, float)
0x263: Pop(0); Push(Stack[-3] | Stack[-3]);
0x264: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x265: Push((float)0.0)
0x266: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x268: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x269: Return(); Pop(2)

0x26a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x26b: Return(); Pop(2)

0x26c: PushEmpty(int, int)
0x26d: @ GetVariable(Stack[-3], Stack[-1])
0x26e: Pop(0)
0x26f: Stack[-4] = Stack[-1]
0x270: Return(); Pop(2)

0x271: PushEmpty(string, string)
0x272: Stack[-1] = "idle"
0x273: Push(Stack[-3])
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x276: Stack[-4] = Stack[-1]
0x277: Return(); Pop(2)

0x278: PushEmpty(int, bool, int, bool)
0x279: Stack[-2] = (int) 0
0x27a: Push("all")
0x27b: PushEmpty(string, int)
0x27c: Stack[-1] = Stack[-5]
0x27d: Call2 0x271

0x27e: Pop(1)
0x27f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x280: Pop(2)
0x281: Pop(0); Push((bool) Stack[-1] == 0)
0x282: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x283: GOTO 0x287

0x284: Push((int) 1)
0x285: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x286: GOTO 0x27a

0x287: Stack[-5] = Stack[-2]
0x288: Return(); Pop(4)

0x289: PushEmpty()
0x28a: Push("ood5Prisoner1")
0x28b: Push((int) 1)
0x28c: @ SetVariable(Stack[-2], Stack[-1])
0x28d: Pop(2)
0x28e: Return(); Pop(0)

0x28f: PushEmpty()
0x290: PushEmpty(int, string)
0x291: Stack[-1] = "ood5Prisoner1"
0x292: Call2 0x26c

0x293: Pop(1)
0x294: Push((int) 0)
0x295: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x296: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x297: Stack[-2] = (bool) 1
0x298: Return(); Pop(0)

0x299: Stack[-2] = (bool) 0
0x29a: Return(); Pop(0)

0x29b: PushEmpty(int, int)
0x29c: Push("branch")
0x29d: @ GetVariable(Stack[-1], Stack[-2])
0x29e: Pop(1)
0x29f: Push((int) 0)
0x2a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a2: Stack[-3] = (int) 1
0x2a3: Return(); Pop(2)

0x2a4: GOTO 0x2aa

0x2a5: Push((int) 1)
0x2a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a8: Stack[-3] = (int) 2
0x2a9: Return(); Pop(2)

0x2aa: Stack[-3] = (int) 3
0x2ab: Return(); Pop(2)

0x2ac: Stack[-1] = (int) 515564
0x2ad: Return(); Pop(0)

0x2ae: Stack[-1] = (int) 503349
0x2af: Return(); Pop(0)

0x2b0: Stack[-1] = "ui/NPC_Citizen2.png"
0x2b1: Return(); Pop(0)

0x2b2: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x2b3: Return(); Pop(0)

0x2b4: Stack[-1] = (bool) 0
0x2b5: Return(); Pop(0)

