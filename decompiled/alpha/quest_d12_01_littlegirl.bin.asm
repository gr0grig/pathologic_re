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
	ood12Littlegirl1
	d12q01DankoKnowHeIsToy
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
	SetVariable (2 args)
	HasAnimation (3 args)

RunOp = 0x14f
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x144 Vars = (object)
		EVENT_26 Op = 0x15f Vars = (string)
		EVENT_5 Op = 0x176 Vars = ()
		EVENT_6 Op = 0x17b Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x1dc

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x275

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x277

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x264

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
0x36: Call 0x214

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
0x44: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x45: PushEmpty(bool)
0x46: Stack[-1] = (bool) 0
0x47: PushEmpty(bool, object)
0x48: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x49: Call 0x24c

0x4a: Pop(1)
0x4b: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4c: PushEmpty(bool, object)
0x4d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e: Call 0x258

0x4f: Pop(1)
0x50: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x51: Stack[-1] = (bool) 1
0x52: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x53: PushEmpty(object, object)
0x54: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x55: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x56: Call 0x246

0x57: Pop(2)
0x58: PushEmpty(string)
0x59: Stack[-1] = "Neutral"
0x5a: Call 0x91

0x5b: Pop(1)
0x5c: Push((int) 15005)
0x5d: @@ SetMessage(Stack[-1])
0x5e: Pop(1)
0x5f: @@ ClearReplies()
0x60: Pop(0)
0x61: Push((int) 15006)
0x62: Push((int) 16265)
0x63: Push((int) 16264)
0x64: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65: Pop(3)
0x66: Push((int) 15017)
0x67: Push((int) -1)
0x68: Push((int) 16276)
0x69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a: Pop(3)
0x6b: Push((int) 15018)
0x6c: Push((int) 16278)
0x6d: Push((int) 16277)
0x6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(3)
0x70: GOTO 0x73

0x71: Return(); Pop(0)

0x72: GOTO 0x43

0x73: PushEmpty(bool)
0x74: Call 0x279

0x75: Pop(0)
0x76: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x77: @ lshWaitForAnimEnd()
0x78: Pop(0)
0x79: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7a: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x7b: GOTO 0x81

0x7c: PushEmpty(string)
0x7d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7e: Call 0x218

0x7f: Pop(1)
0x80: GOTO 0x77

0x81: GOTO 0x90

0x82: Push("all")
0x83: Push("idle")
0x84: @ PlayAnimation(Stack[-2], Stack[-1])
0x85: Pop(2)
0x86: @ WaitForAnimEnd()
0x87: Pop(0)
0x88: Push( Stack[3 + Tasks[-1].StackPointer] )
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: GOTO 0x90

0x8b: Push("all")
0x8c: Push("idle")
0x8d: @ PlayAnimation(Stack[-2], Stack[-1])
0x8e: Pop(2)
0x8f: GOTO 0x86

0x90: Return(); Pop(0)

0x91: PushEmpty()
0x92: PushEmpty(bool)
0x93: Call 0x279

0x94: Pop(0)
0x95: Pop(1); Push((bool) Stack[-1] == 0)
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Return(); Pop(0)

0x98: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x99: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x9a: Return(); Pop(0)

0x9b: PushEmpty(string)
0x9c: Stack[-1] = Stack[-2]
0x9d: Call 0x218

0x9e: Pop(1)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0xa4: PushEmpty()
0xa5: Call 0x22a

0xa6: Pop(0)
0xa7: Push((int) 16263)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xaa: PushEmpty(bool)
0xab: Stack[-1] = (bool) 0
0xac: PushEmpty(bool, object)
0xad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xae: Call 0x24c

0xaf: Pop(1)
0xb0: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb1: PushEmpty(bool, object)
0xb2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb3: Call 0x258

0xb4: Pop(1)
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: Stack[-1] = (bool) 1
0xb7: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xb8: PushEmpty(object, object)
0xb9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbb: Call 0x246

0xbc: Pop(2)
0xbd: PushEmpty(string)
0xbe: Stack[-1] = "Neutral"
0xbf: Call 0x91

0xc0: Pop(1)
0xc1: Push((int) 15005)
0xc2: @@ SetMessage(Stack[-1])
0xc3: Pop(1)
0xc4: @@ ClearReplies()
0xc5: Pop(0)
0xc6: Push((int) 15006)
0xc7: Push((int) 16265)
0xc8: Push((int) 16264)
0xc9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca: Pop(3)
0xcb: Push((int) 15017)
0xcc: Push((int) -1)
0xcd: Push((int) 16276)
0xce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf: Pop(3)
0xd0: Push((int) 15018)
0xd1: Push((int) 16278)
0xd2: Push((int) 16277)
0xd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4: Pop(3)
0xd5: Return(); Pop(0)

0xd6: Push((int) 16278)
0xd7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xd9: PushEmpty(string)
0xda: Stack[-1] = "Neutral"
0xdb: Call 0x91

0xdc: Pop(1)
0xdd: Push((int) 15019)
0xde: @@ SetMessage(Stack[-1])
0xdf: Pop(1)
0xe0: @@ ClearReplies()
0xe1: Pop(0)
0xe2: Push((int) 15020)
0xe3: Push((int) -1)
0xe4: Push((int) 16279)
0xe5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6: Pop(3)
0xe7: Push((int) 15021)
0xe8: Push((int) -1)
0xe9: Push((int) 16280)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: Return(); Pop(0)

0xed: Push((int) 16265)
0xee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf0: PushEmpty(string)
0xf1: Stack[-1] = "Neutral"
0xf2: Call 0x91

0xf3: Pop(1)
0xf4: Push((int) 15007)
0xf5: @@ SetMessage(Stack[-1])
0xf6: Pop(1)
0xf7: @@ ClearReplies()
0xf8: Pop(0)
0xf9: Push((int) 15008)
0xfa: Push((int) 16267)
0xfb: Push((int) 16266)
0xfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd: Pop(3)
0xfe: Return(); Pop(0)

0xff: Push((int) 16267)
0x100: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x102: PushEmpty(string)
0x103: Stack[-1] = "Neutral"
0x104: Call 0x91

0x105: Pop(1)
0x106: Push((int) 15009)
0x107: @@ SetMessage(Stack[-1])
0x108: Pop(1)
0x109: @@ ClearReplies()
0x10a: Pop(0)
0x10b: Push((int) 15010)
0x10c: Push((int) -1)
0x10d: Push((int) 16268)
0x10e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f: Pop(3)
0x110: Push((int) 15011)
0x111: Push((int) -1)
0x112: Push((int) 16269)
0x113: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114: Pop(3)
0x115: Push((int) 15012)
0x116: Push((int) 16271)
0x117: Push((int) 16270)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: Push((int) 15016)
0x11b: Push((int) 16271)
0x11c: Push((int) 16274)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Push((int) 16271)
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Neutral"
0x125: Call 0x91

0x126: Pop(1)
0x127: Push((int) 15013)
0x128: @@ SetMessage(Stack[-1])
0x129: Pop(1)
0x12a: @@ ClearReplies()
0x12b: Pop(0)
0x12c: Push((int) 15014)
0x12d: Push((int) -1)
0x12e: Push((int) 16272)
0x12f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x130: Pop(3)
0x131: Push((int) 15015)
0x132: Push((int) -1)
0x133: Push((int) 16273)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x138: PushEmpty(bool)
0x139: Call 0x279

0x13a: Pop(0)
0x13b: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13c: @ lshStopAnimation()
0x13d: Pop(0)
0x13e: GOTO 0x141

0x13f: @ StopAnimation()
0x140: Pop(0)
0x141: Return(); Pop(0)

0x142: GOTO 0xa2

0x143: Return(); Pop(0)

0x144: PushEmpty()
0x145: PushEmpty()
0x146: Call 0x1d2

0x147: Pop(0)
0x148: PushEmpty(int, object)
0x149: Stack[-1] = Stack[-3]
0x14a: Push(-2, 1); TaskCall(0)
0x14b: Call 0x0

0x14c: Pop(-2, 1); TaskReturn
0x14d: Pop(2)
0x14e: Return(); Pop(0)

0x14f: PushEmpty(bool)
0x150: Call 0x1d7

0x151: Pop(0)
0x152: Pop(1); Push((bool) Stack[-1] == 0)
0x153: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x154: @ Hold()
0x155: Pop(0)
0x156: GOTO 0x14f

0x157: Push((int) 3)
0x158: @ Sleep(Stack[-1])
0x159: Pop(1)
0x15a: PushEmpty()
0x15b: Call 0x18d

0x15c: Pop(0)
0x15d: GOTO 0x14f

0x15e: Return(); Pop(0)

0x15f: PushEmpty(bool, bool)
0x160: Push("cleanup")
0x161: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x163: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x164: @ IsLoaded(Stack[-1])
0x165: Pop(0)
0x166: PushEmpty(bool)
0x167: Stack[-1] = (bool) 0
0x168: Pop(0); Push((bool) Stack[-2] == 0)
0x169: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16a: PushEmpty(bool)
0x16b: Call 0x18b

0x16c: Pop(0)
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: Stack[-1] = (bool) 1
0x16f: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x170: PushEmpty(object)
0x171: Call 0x231

0x172: Pop(0)
0x173: @ RemoveActor(Stack[-1])
0x174: Pop(1)
0x175: Return(); Pop(2)

0x176: @ StopGroup0()
0x177: Pop(0)
0x178: @ sync()
0x179: Pop(0)
0x17a: Return(); Pop(0)

0x17b: PushEmpty(bool)
0x17c: Stack[-1] = (bool) 0
0x17d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x17e: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x17f: PushEmpty(bool)
0x180: Call 0x18b

0x181: Pop(0)
0x182: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x183: Stack[-1] = (bool) 1
0x184: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x185: PushEmpty(object)
0x186: Call 0x231

0x187: Pop(0)
0x188: @ RemoveActor(Stack[-1])
0x189: Pop(1)
0x18a: Return(); Pop(0)

0x18b: Stack[-1] = (bool) 1
0x18c: Return(); Pop(0)

0x18d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x18e: @ WaitForAnimEnd()
0x18f: Pop(0)
0x190: PushEmpty(bool)
0x191: Call 0x1d7

0x192: Pop(0)
0x193: Pop(1); Push((bool) Stack[-1] == 0)
0x194: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x195: Return(); Pop(14)

0x196: PushEmpty(int)
0x197: Call 0x282

0x198: Stack[-8] = Stack[-1]
0x199: Pop(1)
0x19a: Stack[-6] = (int) 0
0x19b: PushEmpty(bool)
0x19c: Stack[-1] = (bool) 0
0x19d: Push((int) 5)
0x19e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a0: PushEmpty(bool)
0x1a1: Call 0x1d7

0x1a2: Pop(0)
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: Stack[-1] = (bool) 1
0x1a5: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1a6: Push((int) 3)
0x1a7: @ irand(Stack[-6], Stack[-1])
0x1a8: Pop(1)
0x1a9: Push((int) 0)
0x1aa: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1ac: Push(Stack[-7])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1ae: @ irand(Stack[-4], Stack[-7])
0x1af: Pop(0)
0x1b0: Push("all")
0x1b1: PushEmpty(string, int)
0x1b2: Stack[-1] = Stack[-7]
0x1b3: Call 0x27b

0x1b4: Pop(1)
0x1b5: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b6: Pop(2)
0x1b7: @ WaitForAnimEnd(Stack[-3])
0x1b8: Pop(0)
0x1b9: Pop(0); Push((bool) Stack[-3] == 0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1bb: GOTO 0x1d1

0x1bc: GOTO 0x1ce

0x1bd: Push((int) 1)
0x1be: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c0: Push((int) 4)
0x1c1: @ rand(Stack[-3], Stack[-1])
0x1c2: Pop(1)
0x1c3: Push((int) 1)
0x1c4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1c5: @ Sleep(Stack[-1], Stack[-2])
0x1c6: Pop(1)
0x1c7: Pop(0); Push((bool) Stack[-1] == 0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c9: GOTO 0x1d1

0x1ca: GOTO 0x1ce

0x1cb: Push(Stack[-6])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cd: GOTO 0x1d1

0x1ce: Push((int) 1)
0x1cf: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1d0: GOTO 0x19b

0x1d1: Return(); Pop(14)

0x1d2: @ StopAnimation()
0x1d3: Pop(0)
0x1d4: @ StopGroup0()
0x1d5: Pop(0)
0x1d6: Return(); Pop(0)

0x1d7: PushEmpty(bool, bool)
0x1d8: @ IsLoaded(Stack[-1])
0x1d9: Pop(0)
0x1da: Stack[-3] = Stack[-1]
0x1db: Return(); Pop(2)

0x1dc: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1dd: @@ GetPosition(Stack[-7])
0x1de: Pop(0)
0x1df: @@ GetEyesHeight(Stack[-8])
0x1e0: Pop(0)
0x1e1: Push(CvectorIndex(Stack[-7], 1))
0x1e2: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1e3: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1e4: @ GetPosition(Stack[-6])
0x1e5: Pop(0)
0x1e6: @ GetEyesHeight(Stack[-8])
0x1e7: Pop(0)
0x1e8: Push(CvectorIndex(Stack[-6], 1))
0x1e9: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1ea: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1eb: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1ec: Push(CvectorIndex(Stack[-5], 1))
0x1ed: Stack[-1] = (int) 0
0x1ee: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1ef: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1f0: Pop(1); Push(Sqrt(Stack[-1]))
0x1f1: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1f2: Stack[-4] = -Stack[-5]; Pop(0);
0x1f3: Push((int) 70)
0x1f4: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1f5: PushEmpty(cvector, cvector)
0x1f6: Push(CVector(0.0, 1.0, 0.0))
0x1f7: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x1f8: Call 0x237

0x1f9: Pop(1)
0x1fa: Push((int) 25)
0x1fb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1fc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1fd: Push(CVector(0.0, 10.0, 0.0))
0x1fe: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1ff: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x200: @ IsOverrideActive(Stack[-1])
0x201: Pop(0)
0x202: Push(Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x204: Stack[-18] = (bool) 0
0x205: Return(); Pop(16)

0x206: @ StopWorld()
0x207: Pop(0)
0x208: @ CameraTransit(Stack[-2], Stack[-4])
0x209: Pop(0)
0x20a: Push(CvectorIndex(Stack[-3], 0))
0x20b: Push(CvectorIndex(Stack[-4], 2))
0x20c: @ Rotate(Stack[-2], Stack[-1])
0x20d: Pop(2)
0x20e: @ CameraWaitForPlayFinish()
0x20f: Pop(0)
0x210: @ ResumeWorld()
0x211: Pop(0)
0x212: Stack[-18] = (bool) 1
0x213: Return(); Pop(16)

0x214: PushEmpty()
0x215: @ CameraSwitchToNormal()
0x216: Pop(0)
0x217: Return(); Pop(0)

0x218: PushEmpty(float, float, float, float)
0x219: Push("playing ")
0x21a: Pop(1); Push(Stack[-1] + Stack[-6]);
0x21b: @ Trace(Stack[-1])
0x21c: Pop(1)
0x21d: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x21e: Pop(0)
0x21f: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x220: Pop(0)
0x221: Push("start: ")
0x222: Pop(1); Push(Stack[-1] + Stack[-3]);
0x223: @ Trace(Stack[-1])
0x224: Pop(1)
0x225: Push("end: ")
0x226: Pop(1); Push(Stack[-1] + Stack[-2]);
0x227: @ Trace(Stack[-1])
0x228: Pop(1)
0x229: Return(); Pop(4)

0x22a: PushEmpty(bool)
0x22b: Call 0x279

0x22c: Pop(0)
0x22d: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22e: @ lshStopSpeech()
0x22f: Pop(0)
0x230: Return(); Pop(0)

0x231: PushEmpty(object, object)
0x232: @ self(Stack[-1])
0x233: Pop(0)
0x234: Stack[-3] = Stack[-1]
0x235: Return(); Pop(2)

0x236: Stack[-1] = 0
0x237: PushEmpty(float, float)
0x238: Pop(0); Push(Stack[-3] | Stack[-3]);
0x239: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x23a: Push((float)0.0)
0x23b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x23e: Return(); Pop(2)

0x23f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x240: Return(); Pop(2)

0x241: PushEmpty(int, int)
0x242: @ GetVariable(Stack[-3], Stack[-1])
0x243: Pop(0)
0x244: Stack[-4] = Stack[-1]
0x245: Return(); Pop(2)

0x246: PushEmpty()
0x247: Push("ood12Littlegirl1")
0x248: Push((int) 1)
0x249: @ SetVariable(Stack[-2], Stack[-1])
0x24a: Pop(2)
0x24b: Return(); Pop(0)

0x24c: PushEmpty()
0x24d: PushEmpty(int, string)
0x24e: Stack[-1] = "d12q01DankoKnowHeIsToy"
0x24f: Call 0x241

0x250: Pop(1)
0x251: Push((int) 0)
0x252: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x253: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x254: Stack[-2] = (bool) 1
0x255: Return(); Pop(0)

0x256: Stack[-2] = (bool) 0
0x257: Return(); Pop(0)

0x258: PushEmpty()
0x259: PushEmpty(int, string)
0x25a: Stack[-1] = "ood12Littlegirl1"
0x25b: Call 0x241

0x25c: Pop(1)
0x25d: Push((int) 0)
0x25e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x260: Stack[-2] = (bool) 1
0x261: Return(); Pop(0)

0x262: Stack[-2] = (bool) 0
0x263: Return(); Pop(0)

0x264: PushEmpty(int, int)
0x265: Push("player")
0x266: @ GetVariable(Stack[-1], Stack[-2])
0x267: Pop(1)
0x268: Push((int) 0)
0x269: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26a: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26b: Stack[-3] = (int) 200001
0x26c: Return(); Pop(2)

0x26d: GOTO 0x273

0x26e: Push((int) 1)
0x26f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x271: Stack[-3] = (int) 200002
0x272: Return(); Pop(2)

0x273: Stack[-3] = (int) 200003
0x274: Return(); Pop(2)

0x275: Stack[-1] = (int) 3346
0x276: Return(); Pop(0)

0x277: Stack[-1] = "ui/NPC_None.png"
0x278: Return(); Pop(0)

0x279: Stack[-1] = (bool) 0
0x27a: Return(); Pop(0)

0x27b: PushEmpty(string, string)
0x27c: Stack[-1] = "idle"
0x27d: Push(Stack[-3])
0x27e: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x280: Stack[-4] = Stack[-1]
0x281: Return(); Pop(2)

0x282: PushEmpty(int, bool, int, bool)
0x283: Stack[-2] = (int) 0
0x284: Push("all")
0x285: PushEmpty(string, int)
0x286: Stack[-1] = Stack[-5]
0x287: Call 0x27b

0x288: Pop(1)
0x289: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x28a: Pop(2)
0x28b: Pop(0); Push((bool) Stack[-1] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28d: GOTO 0x291

0x28e: Push((int) 1)
0x28f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x290: GOTO 0x284

0x291: Stack[-5] = Stack[-2]
0x292: Return(); Pop(4)

