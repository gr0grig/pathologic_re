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
	restore
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	ood11Burah1
	player
	ui/NPC_Burah.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
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

RunOp = 0x19c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9d Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x194 Vars = (object)
		EVENT_26 Op = 0x1a0 Vars = (string)
		EVENT_6 Op = 0x1bc Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x1ce

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x25b

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x25d

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x24a

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
0x36: Call 0x206

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
0x47: Call 0x23e

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x4a: PushEmpty(object, object)
0x4b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d: Call 0x238

0x4e: Pop(2)
0x4f: PushEmpty(string)
0x50: Stack[-1] = "Neutral"
0x51: Call 0x8d

0x52: Pop(1)
0x53: Push((int) 14326)
0x54: @@ SetMessage(Stack[-1])
0x55: Pop(1)
0x56: @@ ClearReplies()
0x57: Pop(0)
0x58: Push((int) 14327)
0x59: Push((int) 15550)
0x5a: Push((int) 15549)
0x5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c: Pop(3)
0x5d: GOTO 0x6f

0x5e: PushEmpty(string)
0x5f: Stack[-1] = "Neutral"
0x60: Call 0x8d

0x61: Pop(1)
0x62: Push((int) 14532)
0x63: @@ SetMessage(Stack[-1])
0x64: Pop(1)
0x65: @@ ClearReplies()
0x66: Pop(0)
0x67: Push((int) 14533)
0x68: Push((int) -1)
0x69: Push((int) 15764)
0x6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(3)
0x6c: GOTO 0x6f

0x6d: Return(); Pop(0)

0x6e: GOTO 0x43

0x6f: PushEmpty(bool)
0x70: Call 0x25f

0x71: Pop(0)
0x72: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x73: @ lshWaitForAnimEnd()
0x74: Pop(0)
0x75: Push( Stack[3 + Tasks[-1].StackPointer] )
0x76: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x77: GOTO 0x7d

0x78: PushEmpty(string)
0x79: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7a: Call 0x20a

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
0x8f: Call 0x25f

0x90: Pop(0)
0x91: Pop(1); Push((bool) Stack[-1] == 0)
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: Return(); Pop(0)

0x94: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Return(); Pop(0)

0x97: PushEmpty(string)
0x98: Stack[-1] = Stack[-2]
0x99: Call 0x20a

0x9a: Pop(1)
0x9b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: Push((int) 1)
0x9f: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0xa0: PushEmpty()
0xa1: Call 0x21c

0xa2: Pop(0)
0xa3: Push((int) 15548)
0xa4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xa6: PushEmpty(bool, object)
0xa7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa8: Call 0x23e

0xa9: Pop(1)
0xaa: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xab: PushEmpty(object, object)
0xac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xae: Call 0x238

0xaf: Pop(2)
0xb0: PushEmpty(string)
0xb1: Stack[-1] = "Neutral"
0xb2: Call 0x8d

0xb3: Pop(1)
0xb4: Push((int) 14326)
0xb5: @@ SetMessage(Stack[-1])
0xb6: Pop(1)
0xb7: @@ ClearReplies()
0xb8: Pop(0)
0xb9: Push((int) 14327)
0xba: Push((int) 15550)
0xbb: Push((int) 15549)
0xbc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd: Pop(3)
0xbe: Return(); Pop(0)

0xbf: PushEmpty(string)
0xc0: Stack[-1] = "Neutral"
0xc1: Call 0x8d

0xc2: Pop(1)
0xc3: Push((int) 14532)
0xc4: @@ SetMessage(Stack[-1])
0xc5: Pop(1)
0xc6: @@ ClearReplies()
0xc7: Pop(0)
0xc8: Push((int) 14533)
0xc9: Push((int) -1)
0xca: Push((int) 15764)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: Return(); Pop(0)

0xce: Push((int) 15550)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xd1: PushEmpty(string)
0xd2: Stack[-1] = "Neutral"
0xd3: Call 0x8d

0xd4: Pop(1)
0xd5: Push((int) 14328)
0xd6: @@ SetMessage(Stack[-1])
0xd7: Pop(1)
0xd8: @@ ClearReplies()
0xd9: Pop(0)
0xda: Push((int) 14329)
0xdb: Push((int) 15552)
0xdc: Push((int) 15551)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Return(); Pop(0)

0xe0: Push((int) 15552)
0xe1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xe3: PushEmpty(string)
0xe4: Stack[-1] = "Neutral"
0xe5: Call 0x8d

0xe6: Pop(1)
0xe7: Push((int) 14330)
0xe8: @@ SetMessage(Stack[-1])
0xe9: Pop(1)
0xea: @@ ClearReplies()
0xeb: Pop(0)
0xec: Push((int) 14331)
0xed: Push((int) 15554)
0xee: Push((int) 15553)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Push((int) 14344)
0xf2: Push((int) 15567)
0xf3: Push((int) 15566)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Return(); Pop(0)

0xf7: Push((int) 15567)
0xf8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xfa: PushEmpty(string)
0xfb: Stack[-1] = "Neutral"
0xfc: Call 0x8d

0xfd: Pop(1)
0xfe: Push((int) 14345)
0xff: @@ SetMessage(Stack[-1])
0x100: Pop(1)
0x101: @@ ClearReplies()
0x102: Pop(0)
0x103: Push((int) 14346)
0x104: Push((int) 15569)
0x105: Push((int) 15568)
0x106: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107: Pop(3)
0x108: Return(); Pop(0)

0x109: Push((int) 15569)
0x10a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Neutral"
0x10e: Call 0x8d

0x10f: Pop(1)
0x110: Push((int) 14347)
0x111: @@ SetMessage(Stack[-1])
0x112: Pop(1)
0x113: @@ ClearReplies()
0x114: Pop(0)
0x115: Push((int) 14348)
0x116: Push((int) 15554)
0x117: Push((int) 15570)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: Return(); Pop(0)

0x11b: Push((int) 15554)
0x11c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x11e: PushEmpty(string)
0x11f: Stack[-1] = "Neutral"
0x120: Call 0x8d

0x121: Pop(1)
0x122: Push((int) 14332)
0x123: @@ SetMessage(Stack[-1])
0x124: Pop(1)
0x125: @@ ClearReplies()
0x126: Pop(0)
0x127: Push((int) 14333)
0x128: Push((int) 15556)
0x129: Push((int) 15555)
0x12a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b: Pop(3)
0x12c: Return(); Pop(0)

0x12d: Push((int) 15556)
0x12e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x130: PushEmpty(string)
0x131: Stack[-1] = "Neutral"
0x132: Call 0x8d

0x133: Pop(1)
0x134: Push((int) 14334)
0x135: @@ SetMessage(Stack[-1])
0x136: Pop(1)
0x137: @@ ClearReplies()
0x138: Pop(0)
0x139: Push((int) 14335)
0x13a: Push((int) 15558)
0x13b: Push((int) 15557)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: Return(); Pop(0)

0x13f: Push((int) 15558)
0x140: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x142: PushEmpty(string)
0x143: Stack[-1] = "Neutral"
0x144: Call 0x8d

0x145: Pop(1)
0x146: Push((int) 14336)
0x147: @@ SetMessage(Stack[-1])
0x148: Pop(1)
0x149: @@ ClearReplies()
0x14a: Pop(0)
0x14b: Push((int) 14337)
0x14c: Push((int) 15560)
0x14d: Push((int) 15559)
0x14e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f: Pop(3)
0x150: Return(); Pop(0)

0x151: Push((int) 15560)
0x152: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x154: PushEmpty(string)
0x155: Stack[-1] = "Neutral"
0x156: Call 0x8d

0x157: Pop(1)
0x158: Push((int) 14338)
0x159: @@ SetMessage(Stack[-1])
0x15a: Pop(1)
0x15b: @@ ClearReplies()
0x15c: Pop(0)
0x15d: Push((int) 14339)
0x15e: Push((int) 15562)
0x15f: Push((int) 15561)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: Push((int) 15562)
0x164: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x166: PushEmpty(string)
0x167: Stack[-1] = "Neutral"
0x168: Call 0x8d

0x169: Pop(1)
0x16a: Push((int) 14340)
0x16b: @@ SetMessage(Stack[-1])
0x16c: Pop(1)
0x16d: @@ ClearReplies()
0x16e: Pop(0)
0x16f: Push((int) 14341)
0x170: Push((int) 15564)
0x171: Push((int) 15563)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Return(); Pop(0)

0x175: Push((int) 15564)
0x176: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x178: PushEmpty(string)
0x179: Stack[-1] = "Neutral"
0x17a: Call 0x8d

0x17b: Pop(1)
0x17c: Push((int) 14342)
0x17d: @@ SetMessage(Stack[-1])
0x17e: Pop(1)
0x17f: @@ ClearReplies()
0x180: Pop(0)
0x181: Push((int) 14343)
0x182: Push((int) -1)
0x183: Push((int) 15565)
0x184: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x185: Pop(3)
0x186: Return(); Pop(0)

0x187: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x188: PushEmpty(bool)
0x189: Call 0x25f

0x18a: Pop(0)
0x18b: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18c: @ lshStopAnimation()
0x18d: Pop(0)
0x18e: GOTO 0x191

0x18f: @ StopAnimation()
0x190: Pop(0)
0x191: Return(); Pop(0)

0x192: GOTO 0x9e

0x193: Return(); Pop(0)

0x194: PushEmpty()
0x195: PushEmpty(int, object)
0x196: Stack[-1] = Stack[-3]
0x197: Push(-2, 1); TaskCall(0)
0x198: Call 0x0

0x199: Pop(-2, 1); TaskReturn
0x19a: Pop(2)
0x19b: Return(); Pop(0)

0x19c: @ Hold()
0x19d: Pop(0)
0x19e: GOTO 0x19c

0x19f: Return(); Pop(0)

0x1a0: PushEmpty(bool, bool)
0x1a1: Push("cleanup")
0x1a2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1a4: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1a5: @ IsLoaded(Stack[-1])
0x1a6: Pop(0)
0x1a7: PushEmpty(bool)
0x1a8: Stack[-1] = (bool) 0
0x1a9: Pop(0); Push((bool) Stack[-2] == 0)
0x1aa: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ab: PushEmpty(bool)
0x1ac: Call 0x1cc

0x1ad: Pop(0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1af: Stack[-1] = (bool) 1
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b1: PushEmpty(object)
0x1b2: Call 0x223

0x1b3: Pop(0)
0x1b4: @ RemoveActor(Stack[-1])
0x1b5: Pop(1)
0x1b6: GOTO 0x1bb

0x1b7: Push("restore")
0x1b8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ba: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1bb: Return(); Pop(2)

0x1bc: PushEmpty(bool)
0x1bd: Stack[-1] = (bool) 0
0x1be: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c0: PushEmpty(bool)
0x1c1: Call 0x1cc

0x1c2: Pop(0)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: Stack[-1] = (bool) 1
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c6: PushEmpty(object)
0x1c7: Call 0x223

0x1c8: Pop(0)
0x1c9: @ RemoveActor(Stack[-1])
0x1ca: Pop(1)
0x1cb: Return(); Pop(0)

0x1cc: Stack[-1] = (bool) 1
0x1cd: Return(); Pop(0)

0x1ce: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1cf: @@ GetPosition(Stack[-7])
0x1d0: Pop(0)
0x1d1: @@ GetEyesHeight(Stack[-8])
0x1d2: Pop(0)
0x1d3: Push(CvectorIndex(Stack[-7], 1))
0x1d4: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1d5: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1d6: @ GetPosition(Stack[-6])
0x1d7: Pop(0)
0x1d8: @ GetEyesHeight(Stack[-8])
0x1d9: Pop(0)
0x1da: Push(CvectorIndex(Stack[-6], 1))
0x1db: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1dc: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1dd: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1de: Push(CvectorIndex(Stack[-5], 1))
0x1df: Stack[-1] = (int) 0
0x1e0: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1e1: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1e2: Pop(1); Push(Sqrt(Stack[-1]))
0x1e3: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1e4: Stack[-4] = -Stack[-5]; Pop(0);
0x1e5: Push((int) 70)
0x1e6: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1e7: PushEmpty(cvector, cvector)
0x1e8: Push(CVector(0.0, 1.0, 0.0))
0x1e9: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x1ea: Call 0x229

0x1eb: Pop(1)
0x1ec: Push((int) 25)
0x1ed: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1ee: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ef: Push(CVector(0.0, 10.0, 0.0))
0x1f0: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1f1: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1f2: @ IsOverrideActive(Stack[-1])
0x1f3: Pop(0)
0x1f4: Push(Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f6: Stack[-18] = (bool) 0
0x1f7: Return(); Pop(16)

0x1f8: @ StopWorld()
0x1f9: Pop(0)
0x1fa: @ CameraTransit(Stack[-2], Stack[-4])
0x1fb: Pop(0)
0x1fc: Push(CvectorIndex(Stack[-3], 0))
0x1fd: Push(CvectorIndex(Stack[-4], 2))
0x1fe: @ Rotate(Stack[-2], Stack[-1])
0x1ff: Pop(2)
0x200: @ CameraWaitForPlayFinish()
0x201: Pop(0)
0x202: @ ResumeWorld()
0x203: Pop(0)
0x204: Stack[-18] = (bool) 1
0x205: Return(); Pop(16)

0x206: PushEmpty()
0x207: @ CameraSwitchToNormal()
0x208: Pop(0)
0x209: Return(); Pop(0)

0x20a: PushEmpty(float, float, float, float)
0x20b: Push("playing ")
0x20c: Pop(1); Push(Stack[-1] + Stack[-6]);
0x20d: @ Trace(Stack[-1])
0x20e: Pop(1)
0x20f: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x210: Pop(0)
0x211: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x212: Pop(0)
0x213: Push("start: ")
0x214: Pop(1); Push(Stack[-1] + Stack[-3]);
0x215: @ Trace(Stack[-1])
0x216: Pop(1)
0x217: Push("end: ")
0x218: Pop(1); Push(Stack[-1] + Stack[-2]);
0x219: @ Trace(Stack[-1])
0x21a: Pop(1)
0x21b: Return(); Pop(4)

0x21c: PushEmpty(bool)
0x21d: Call 0x25f

0x21e: Pop(0)
0x21f: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x220: @ lshStopSpeech()
0x221: Pop(0)
0x222: Return(); Pop(0)

0x223: PushEmpty(object, object)
0x224: @ self(Stack[-1])
0x225: Pop(0)
0x226: Stack[-3] = Stack[-1]
0x227: Return(); Pop(2)

0x228: Stack[-1] = 0
0x229: PushEmpty(float, float)
0x22a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x22b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x22c: Push((float)0.0)
0x22d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x22e: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x230: Return(); Pop(2)

0x231: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x232: Return(); Pop(2)

0x233: PushEmpty(int, int)
0x234: @ GetVariable(Stack[-3], Stack[-1])
0x235: Pop(0)
0x236: Stack[-4] = Stack[-1]
0x237: Return(); Pop(2)

0x238: PushEmpty()
0x239: Push("ood11Burah1")
0x23a: Push((int) 1)
0x23b: @ SetVariable(Stack[-2], Stack[-1])
0x23c: Pop(2)
0x23d: Return(); Pop(0)

0x23e: PushEmpty()
0x23f: PushEmpty(int, string)
0x240: Stack[-1] = "ood11Burah1"
0x241: Call 0x233

0x242: Pop(1)
0x243: Push((int) 0)
0x244: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x246: Stack[-2] = (bool) 1
0x247: Return(); Pop(0)

0x248: Stack[-2] = (bool) 0
0x249: Return(); Pop(0)

0x24a: PushEmpty(int, int)
0x24b: Push("player")
0x24c: @ GetVariable(Stack[-1], Stack[-2])
0x24d: Pop(1)
0x24e: Push((int) 0)
0x24f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x250: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x251: Stack[-3] = (int) 200001
0x252: Return(); Pop(2)

0x253: GOTO 0x259

0x254: Push((int) 1)
0x255: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x257: Stack[-3] = (int) 200002
0x258: Return(); Pop(2)

0x259: Stack[-3] = (int) 200003
0x25a: Return(); Pop(2)

0x25b: Stack[-1] = (int) 11961
0x25c: Return(); Pop(0)

0x25d: Stack[-1] = "ui/NPC_Burah.png"
0x25e: Return(); Pop(0)

0x25f: Stack[-1] = (bool) 1
0x260: Return(); Pop(0)

