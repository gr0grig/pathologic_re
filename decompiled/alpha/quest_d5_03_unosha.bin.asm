GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetPhoto
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
	playing 
	start: 
	end: 
	ood5Prisoner1
	player
	ui/NPC_None.png

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
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x12b
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9d Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x122 Vars = (object)
		EVENT_26 Op = 0x13b Vars = (string)
		EVENT_5 Op = 0x152 Vars = ()
		EVENT_6 Op = 0x157 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x1b8

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x25d

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x25f

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x24c

0x18: Pop(0)
0x19: @@ SetPlayerName(Stack[-1])
0x1a: Pop(1)
0x1b: Stack[-2] = (int) -1
0x1c: @ IsOverrideActive(Stack[-3])
0x1d: Pop(0)
0x1e: Push(Stack[-3])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-10] = (int) -2
0x21: Return(); Pop(8)

0x22: @ DoDialog(Stack[-4])
0x23: Pop(0)
0x24: PushEmpty(object, object)
0x25: Stack[-2] = Stack[-11]
0x26: Stack[-1] = Stack[-6]
0x27: Push(-2, 4); TaskCall(1)
0x28: Call 0x3f

0x29: Pop(-2, 4); TaskReturn
0x2a: Pop(2)
0x2b: @@ IsDialogEnd(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: @ sync()
0x30: Pop(0)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: GOTO 0x2d

0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-10]
0x36: Call 0x1f0

0x37: Pop(1)
0x38: @ StopDialog(Stack[-4])
0x39: Pop(0)
0x3a: @@ GetReturnValue(Stack[-2])
0x3b: Pop(0)
0x3c: Stack[-10] = Stack[-2]
0x3d: Return(); Pop(8)

0x3e: Stack[-4] = 0
0x3f: PushEmpty()
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Push((int) 1)
0x44: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x45: PushEmpty(bool, object)
0x46: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47: Call 0x240

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x4a: PushEmpty(string)
0x4b: Stack[-1] = "Neutral"
0x4c: Call 0x8d

0x4d: Pop(1)
0x4e: Push((int) 11803)
0x4f: @@ SetMessage(Stack[-1])
0x50: Pop(1)
0x51: @@ ClearReplies()
0x52: Pop(0)
0x53: Push((int) 11804)
0x54: Push((int) 13015)
0x55: Push((int) 13014)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: Push((int) 11808)
0x59: Push((int) 13019)
0x5a: Push((int) 13018)
0x5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c: Pop(3)
0x5d: GOTO 0x6f

0x5e: PushEmpty(string)
0x5f: Stack[-1] = "Neutral"
0x60: Call 0x8d

0x61: Pop(1)
0x62: Push((int) 12549)
0x63: @@ SetMessage(Stack[-1])
0x64: Pop(1)
0x65: @@ ClearReplies()
0x66: Pop(0)
0x67: Push((int) 12550)
0x68: Push((int) -1)
0x69: Push((int) 13719)
0x6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(3)
0x6c: GOTO 0x6f

0x6d: Return(); Pop(0)

0x6e: GOTO 0x43

0x6f: PushEmpty(bool)
0x70: Call 0x261

0x71: Pop(0)
0x72: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x73: @ lshWaitForAnimEnd()
0x74: Pop(0)
0x75: Push( Stack[3 + Tasks[-1].StackPointer] )
0x76: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x77: GOTO 0x7d

0x78: PushEmpty(string)
0x79: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7a: Call 0x1f4

0x7b: Pop(1)
0x7c: GOTO 0x73

0x7d: GOTO 0x8c

0x7e: Push("all")
0x7f: Push("idle")
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: @ WaitForAnimEnd()
0x83: Pop(0)
0x84: Push( Stack[3 + Tasks[-1].StackPointer] )
0x85: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x86: GOTO 0x8c

0x87: Push("all")
0x88: Push("idle")
0x89: @ PlayAnimation(Stack[-2], Stack[-1])
0x8a: Pop(2)
0x8b: GOTO 0x82

0x8c: Return(); Pop(0)

0x8d: PushEmpty()
0x8e: PushEmpty(bool)
0x8f: Call 0x261

0x90: Pop(0)
0x91: Pop(1); Push((bool) Stack[-1] == 0)
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: Return(); Pop(0)

0x94: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Return(); Pop(0)

0x97: PushEmpty(string)
0x98: Stack[-1] = Stack[-2]
0x99: Call 0x1f4

0x9a: Pop(1)
0x9b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: Push((int) 1)
0x9f: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0xa0: PushEmpty()
0xa1: Call 0x206

0xa2: Pop(0)
0xa3: Push((int) 13016)
0xa4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa6: PushEmpty(object, object)
0xa7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa9: Call 0x23a

0xaa: Pop(2)
0xab: Push((int) 13017)
0xac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xad: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xae: PushEmpty(object, object)
0xaf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb1: Call 0x23a

0xb2: Pop(2)
0xb3: Push((int) 13013)
0xb4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xb6: PushEmpty(bool, object)
0xb7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb8: Call 0x240

0xb9: Pop(1)
0xba: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xbb: PushEmpty(string)
0xbc: Stack[-1] = "Neutral"
0xbd: Call 0x8d

0xbe: Pop(1)
0xbf: Push((int) 11803)
0xc0: @@ SetMessage(Stack[-1])
0xc1: Pop(1)
0xc2: @@ ClearReplies()
0xc3: Pop(0)
0xc4: Push((int) 11804)
0xc5: Push((int) 13015)
0xc6: Push((int) 13014)
0xc7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8: Pop(3)
0xc9: Push((int) 11808)
0xca: Push((int) 13019)
0xcb: Push((int) 13018)
0xcc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd: Pop(3)
0xce: Return(); Pop(0)

0xcf: PushEmpty(string)
0xd0: Stack[-1] = "Neutral"
0xd1: Call 0x8d

0xd2: Pop(1)
0xd3: Push((int) 12549)
0xd4: @@ SetMessage(Stack[-1])
0xd5: Pop(1)
0xd6: @@ ClearReplies()
0xd7: Pop(0)
0xd8: Push((int) 12550)
0xd9: Push((int) -1)
0xda: Push((int) 13719)
0xdb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc: Pop(3)
0xdd: Return(); Pop(0)

0xde: Push((int) 13019)
0xdf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xe1: PushEmpty(string)
0xe2: Stack[-1] = "Neutral"
0xe3: Call 0x8d

0xe4: Pop(1)
0xe5: Push((int) 11809)
0xe6: @@ SetMessage(Stack[-1])
0xe7: Pop(1)
0xe8: @@ ClearReplies()
0xe9: Pop(0)
0xea: Push((int) 11810)
0xeb: Push((int) 13015)
0xec: Push((int) 13020)
0xed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee: Pop(3)
0xef: Push((int) 11811)
0xf0: Push((int) 13015)
0xf1: Push((int) 13022)
0xf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3: Pop(3)
0xf4: Return(); Pop(0)

0xf5: Push((int) 13015)
0xf6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xf8: PushEmpty(string)
0xf9: Stack[-1] = "Neutral"
0xfa: Call 0x8d

0xfb: Pop(1)
0xfc: Push((int) 11805)
0xfd: @@ SetMessage(Stack[-1])
0xfe: Pop(1)
0xff: @@ ClearReplies()
0x100: Pop(0)
0x101: Push((int) 11806)
0x102: Push((int) -1)
0x103: Push((int) 13016)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Push((int) 11807)
0x107: Push((int) -1)
0x108: Push((int) 13017)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Return(); Pop(0)

0x10c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x10d: PushEmpty(bool)
0x10e: Call 0x261

0x10f: Pop(0)
0x110: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x111: @ lshStopAnimation()
0x112: Pop(0)
0x113: GOTO 0x116

0x114: @ StopAnimation()
0x115: Pop(0)
0x116: Return(); Pop(0)

0x117: GOTO 0x9e

0x118: Return(); Pop(0)

0x119: PushEmpty()
0x11a: PushEmpty(int, object)
0x11b: Stack[-1] = Stack[-3]
0x11c: Push(-2, 1); TaskCall(0)
0x11d: Call 0x0

0x11e: Pop(-2, 1); TaskReturn
0x11f: Stack[-4] = Stack[-2]
0x120: Pop(2)
0x121: Return(); Pop(0)

0x122: PushEmpty()
0x123: PushEmpty()
0x124: Call 0x1ae

0x125: Pop(0)
0x126: PushEmpty(int, object)
0x127: Stack[-1] = Stack[-3]
0x128: Call 0x119

0x129: Pop(2)
0x12a: Return(); Pop(0)

0x12b: PushEmpty(bool)
0x12c: Call 0x1b3

0x12d: Pop(0)
0x12e: Pop(1); Push((bool) Stack[-1] == 0)
0x12f: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x130: @ Hold()
0x131: Pop(0)
0x132: GOTO 0x12b

0x133: Push((int) 3)
0x134: @ Sleep(Stack[-1])
0x135: Pop(1)
0x136: PushEmpty()
0x137: Call 0x169

0x138: Pop(0)
0x139: GOTO 0x12b

0x13a: Return(); Pop(0)

0x13b: PushEmpty(bool, bool)
0x13c: Push("cleanup")
0x13d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x13f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x140: @ IsLoaded(Stack[-1])
0x141: Pop(0)
0x142: PushEmpty(bool)
0x143: Stack[-1] = (bool) 0
0x144: Pop(0); Push((bool) Stack[-2] == 0)
0x145: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x146: PushEmpty(bool)
0x147: Call 0x167

0x148: Pop(0)
0x149: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x14a: Stack[-1] = (bool) 1
0x14b: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14c: PushEmpty(object)
0x14d: Call 0x20d

0x14e: Pop(0)
0x14f: @ RemoveActor(Stack[-1])
0x150: Pop(1)
0x151: Return(); Pop(2)

0x152: @ StopGroup0()
0x153: Pop(0)
0x154: @ sync()
0x155: Pop(0)
0x156: Return(); Pop(0)

0x157: PushEmpty(bool)
0x158: Stack[-1] = (bool) 0
0x159: Push( Stack[0 + Tasks[-1].StackPointer] )
0x15a: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15b: PushEmpty(bool)
0x15c: Call 0x167

0x15d: Pop(0)
0x15e: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15f: Stack[-1] = (bool) 1
0x160: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x161: PushEmpty(object)
0x162: Call 0x20d

0x163: Pop(0)
0x164: @ RemoveActor(Stack[-1])
0x165: Pop(1)
0x166: Return(); Pop(0)

0x167: Stack[-1] = (bool) 1
0x168: Return(); Pop(0)

0x169: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x16a: @ WaitForAnimEnd()
0x16b: Pop(0)
0x16c: PushEmpty(bool)
0x16d: Call 0x1b3

0x16e: Pop(0)
0x16f: Pop(1); Push((bool) Stack[-1] == 0)
0x170: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x171: Return(); Pop(14)

0x172: PushEmpty(int)
0x173: Call 0x229

0x174: Stack[-8] = Stack[-1]
0x175: Pop(1)
0x176: Stack[-6] = (int) 0
0x177: PushEmpty(bool)
0x178: Stack[-1] = (bool) 0
0x179: Push((int) 5)
0x17a: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: PushEmpty(bool)
0x17d: Call 0x1b3

0x17e: Pop(0)
0x17f: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x180: Stack[-1] = (bool) 1
0x181: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

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
0x18f: Call 0x222

0x190: Pop(1)
0x191: @ PlayAnimation(Stack[-2], Stack[-1])
0x192: Pop(2)
0x193: @ WaitForAnimEnd(Stack[-3])
0x194: Pop(0)
0x195: Pop(0); Push((bool) Stack[-3] == 0)
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: GOTO 0x1ad

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

0x1a5: GOTO 0x1ad

0x1a6: GOTO 0x1aa

0x1a7: Push(Stack[-6])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: GOTO 0x1ad

0x1aa: Push((int) 1)
0x1ab: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1ac: GOTO 0x177

0x1ad: Return(); Pop(14)

0x1ae: @ StopAnimation()
0x1af: Pop(0)
0x1b0: @ StopGroup0()
0x1b1: Pop(0)
0x1b2: Return(); Pop(0)

0x1b3: PushEmpty(bool, bool)
0x1b4: @ IsLoaded(Stack[-1])
0x1b5: Pop(0)
0x1b6: Stack[-3] = Stack[-1]
0x1b7: Return(); Pop(2)

0x1b8: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1b9: @@ GetPosition(Stack[-7])
0x1ba: Pop(0)
0x1bb: @@ GetEyesHeight(Stack[-8])
0x1bc: Pop(0)
0x1bd: Push(CvectorIndex(Stack[-7], 1))
0x1be: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1bf: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1c0: @ GetPosition(Stack[-6])
0x1c1: Pop(0)
0x1c2: @ GetEyesHeight(Stack[-8])
0x1c3: Pop(0)
0x1c4: Push(CvectorIndex(Stack[-6], 1))
0x1c5: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1c6: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1c7: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1c8: Push(CvectorIndex(Stack[-5], 1))
0x1c9: Stack[-1] = (int) 0
0x1ca: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1cb: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1cc: Pop(1); Push(Sqrt(Stack[-1]))
0x1cd: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1ce: Stack[-4] = -Stack[-5]; Pop(0);
0x1cf: Push((int) 70)
0x1d0: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1d1: PushEmpty(cvector, cvector)
0x1d2: Push(CVector(0.0, 1.0, 0.0))
0x1d3: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x1d4: Call 0x213

0x1d5: Pop(1)
0x1d6: Push((int) 25)
0x1d7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1d8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1d9: Push(CVector(0.0, 10.0, 0.0))
0x1da: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1db: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1dc: @ IsOverrideActive(Stack[-1])
0x1dd: Pop(0)
0x1de: Push(Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e0: Stack[-18] = (bool) 0
0x1e1: Return(); Pop(16)

0x1e2: @ StopWorld()
0x1e3: Pop(0)
0x1e4: @ CameraTransit(Stack[-2], Stack[-4])
0x1e5: Pop(0)
0x1e6: Push(CvectorIndex(Stack[-3], 0))
0x1e7: Push(CvectorIndex(Stack[-4], 2))
0x1e8: @ Rotate(Stack[-2], Stack[-1])
0x1e9: Pop(2)
0x1ea: @ CameraWaitForPlayFinish()
0x1eb: Pop(0)
0x1ec: @ ResumeWorld()
0x1ed: Pop(0)
0x1ee: Stack[-18] = (bool) 1
0x1ef: Return(); Pop(16)

0x1f0: PushEmpty()
0x1f1: @ CameraSwitchToNormal()
0x1f2: Pop(0)
0x1f3: Return(); Pop(0)

0x1f4: PushEmpty(float, float, float, float)
0x1f5: Push("playing ")
0x1f6: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1f7: @ Trace(Stack[-1])
0x1f8: Pop(1)
0x1f9: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x1fa: Pop(0)
0x1fb: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x1fc: Pop(0)
0x1fd: Push("start: ")
0x1fe: Pop(1); Push(Stack[-1] + Stack[-3]);
0x1ff: @ Trace(Stack[-1])
0x200: Pop(1)
0x201: Push("end: ")
0x202: Pop(1); Push(Stack[-1] + Stack[-2]);
0x203: @ Trace(Stack[-1])
0x204: Pop(1)
0x205: Return(); Pop(4)

0x206: PushEmpty(bool)
0x207: Call 0x261

0x208: Pop(0)
0x209: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20a: @ lshStopSpeech()
0x20b: Pop(0)
0x20c: Return(); Pop(0)

0x20d: PushEmpty(object, object)
0x20e: @ self(Stack[-1])
0x20f: Pop(0)
0x210: Stack[-3] = Stack[-1]
0x211: Return(); Pop(2)

0x212: Stack[-1] = 0
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

0x21d: PushEmpty(int, int)
0x21e: @ GetVariable(Stack[-3], Stack[-1])
0x21f: Pop(0)
0x220: Stack[-4] = Stack[-1]
0x221: Return(); Pop(2)

0x222: PushEmpty(string, string)
0x223: Stack[-1] = "idle"
0x224: Push(Stack[-3])
0x225: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x226: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x227: Stack[-4] = Stack[-1]
0x228: Return(); Pop(2)

0x229: PushEmpty(int, bool, int, bool)
0x22a: Stack[-2] = (int) 0
0x22b: Push("all")
0x22c: PushEmpty(string, int)
0x22d: Stack[-1] = Stack[-5]
0x22e: Call 0x222

0x22f: Pop(1)
0x230: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(2)
0x232: Pop(0); Push((bool) Stack[-1] == 0)
0x233: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x234: GOTO 0x238

0x235: Push((int) 1)
0x236: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x237: GOTO 0x22b

0x238: Stack[-5] = Stack[-2]
0x239: Return(); Pop(4)

0x23a: PushEmpty()
0x23b: Push("ood5Prisoner1")
0x23c: Push((int) 1)
0x23d: @ SetVariable(Stack[-2], Stack[-1])
0x23e: Pop(2)
0x23f: Return(); Pop(0)

0x240: PushEmpty()
0x241: PushEmpty(int, string)
0x242: Stack[-1] = "ood5Prisoner1"
0x243: Call 0x21d

0x244: Pop(1)
0x245: Push((int) 0)
0x246: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x247: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x248: Stack[-2] = (bool) 1
0x249: Return(); Pop(0)

0x24a: Stack[-2] = (bool) 0
0x24b: Return(); Pop(0)

0x24c: PushEmpty(int, int)
0x24d: Push("player")
0x24e: @ GetVariable(Stack[-1], Stack[-2])
0x24f: Pop(1)
0x250: Push((int) 0)
0x251: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x253: Stack[-3] = (int) 200001
0x254: Return(); Pop(2)

0x255: GOTO 0x25b

0x256: Push((int) 1)
0x257: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x259: Stack[-3] = (int) 200002
0x25a: Return(); Pop(2)

0x25b: Stack[-3] = (int) 200003
0x25c: Return(); Pop(2)

0x25d: Stack[-1] = (int) 3349
0x25e: Return(); Pop(0)

0x25f: Stack[-1] = "ui/NPC_None.png"
0x260: Return(); Pop(0)

0x261: Stack[-1] = (bool) 0
0x262: Return(); Pop(0)

