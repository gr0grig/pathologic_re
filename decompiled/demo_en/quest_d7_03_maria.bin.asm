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
	Rage
	SetMessage
	ClearReplies
	AddReply
	Angry
	all
	idle
	Staring
	cleanup
	restore
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ood7MariaPetr1
	branch
	ui/NPC_Maria.png
	ui/NPC_Maria_b.png

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
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	irand (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetGameTime (1 args)

RunOp = 0x161
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbf Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x159 Vars = (object)
		EVENT_26 Op = 0x165 Vars = (string)
		EVENT_6 Op = 0x181 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x193

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2ea

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2e8

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2ec

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2ee

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2d7

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
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x2a7

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x1e8

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x1d7

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x2cb

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x2c5

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Rage"
0x63: Call2 0xa9

0x64: Pop(1)
0x65: Push((int) 533260)
0x66: @@ SetMessage(Stack[-1])
0x67: Pop(1)
0x68: @@ ClearReplies()
0x69: Pop(0)
0x6a: Push((int) 533261)
0x6b: Push((int) 34776)
0x6c: Push((int) 34775)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 535781)
0x70: Push((int) 34776)
0x71: Push((int) 37465)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x8b

0x75: PushEmpty(string)
0x76: Stack[-1] = "Angry"
0x77: Call2 0xa9

0x78: Pop(1)
0x79: Push((int) 533258)
0x7a: @@ SetMessage(Stack[-1])
0x7b: Pop(1)
0x7c: @@ ClearReplies()
0x7d: Pop(0)
0x7e: Push((int) 533259)
0x7f: Push((int) -1)
0x80: Push((int) 34773)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: Push((int) 535778)
0x84: Push((int) -1)
0x85: Push((int) 37462)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: GOTO 0x8b

0x89: Return(); Pop(0)

0x8a: GOTO 0x55

0x8b: PushEmpty(bool)
0x8c: Call2 0x2f0

0x8d: Pop(0)
0x8e: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x8f: @ lshWaitForAnimEnd()
0x90: Pop(0)
0x91: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: GOTO 0x99

0x94: PushEmpty(string)
0x95: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x96: Call2 0x272

0x97: Pop(1)
0x98: GOTO 0x8f

0x99: GOTO 0xa8

0x9a: Push("all")
0x9b: Push("idle")
0x9c: @ PlayAnimation(Stack[-2], Stack[-1])
0x9d: Pop(2)
0x9e: @ WaitForAnimEnd()
0x9f: Pop(0)
0xa0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa1: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa2: GOTO 0xa8

0xa3: Push("all")
0xa4: Push("idle")
0xa5: @ PlayAnimation(Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: GOTO 0x9e

0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: PushEmpty(bool)
0xab: Call2 0x2f0

0xac: Pop(0)
0xad: Pop(1); Push((bool) Stack[-1] == 0)
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: Return(); Pop(0)

0xb0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: Return(); Pop(0)

0xb3: PushEmpty(string, bool)
0xb4: Stack[-2] = Stack[-3]
0xb5: Push("")
0xb6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb8: Stack[-1] = (bool) 0
0xb9: GOTO 0xbb

0xba: Stack[-1] = (bool) 1
0xbb: Call2 0x282

0xbc: Pop(2)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0xc2: PushEmpty()
0xc3: Call2 0x2a0

0xc4: Pop(0)
0xc5: Push((int) 34774)
0xc6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xc8: PushEmpty(bool, object)
0xc9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xca: Call2 0x2cb

0xcb: Pop(1)
0xcc: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call2 0x2c5

0xd1: Pop(2)
0xd2: PushEmpty(string)
0xd3: Stack[-1] = "Rage"
0xd4: Call2 0xa9

0xd5: Pop(1)
0xd6: Push((int) 533260)
0xd7: @@ SetMessage(Stack[-1])
0xd8: Pop(1)
0xd9: @@ ClearReplies()
0xda: Pop(0)
0xdb: Push((int) 533261)
0xdc: Push((int) 34776)
0xdd: Push((int) 34775)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: Push((int) 535781)
0xe1: Push((int) 34776)
0xe2: Push((int) 37465)
0xe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: Return(); Pop(0)

0xe6: PushEmpty(string)
0xe7: Stack[-1] = "Angry"
0xe8: Call2 0xa9

0xe9: Pop(1)
0xea: Push((int) 533258)
0xeb: @@ SetMessage(Stack[-1])
0xec: Pop(1)
0xed: @@ ClearReplies()
0xee: Pop(0)
0xef: Push((int) 533259)
0xf0: Push((int) -1)
0xf1: Push((int) 34773)
0xf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3: Pop(3)
0xf4: Push((int) 535778)
0xf5: Push((int) -1)
0xf6: Push((int) 37462)
0xf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8: Pop(3)
0xf9: Return(); Pop(0)

0xfa: Push((int) 34776)
0xfb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0xfd: PushEmpty(string)
0xfe: Stack[-1] = "Angry"
0xff: Call2 0xa9

0x100: Pop(1)
0x101: Push((int) 533262)
0x102: @@ SetMessage(Stack[-1])
0x103: Pop(1)
0x104: @@ ClearReplies()
0x105: Pop(0)
0x106: Push((int) 533263)
0x107: Push((int) 37460)
0x108: Push((int) 34777)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Push((int) 535782)
0x10c: Push((int) 37467)
0x10d: Push((int) 37466)
0x10e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f: Pop(3)
0x110: Return(); Pop(0)

0x111: Push((int) 37467)
0x112: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x114: PushEmpty(string)
0x115: Stack[-1] = "Angry"
0x116: Call2 0xa9

0x117: Pop(1)
0x118: Push((int) 535783)
0x119: @@ SetMessage(Stack[-1])
0x11a: Pop(1)
0x11b: @@ ClearReplies()
0x11c: Pop(0)
0x11d: Push((int) 535784)
0x11e: Push((int) 37463)
0x11f: Push((int) 37468)
0x120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: Return(); Pop(0)

0x123: Push((int) 37460)
0x124: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x125: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x126: PushEmpty(string)
0x127: Stack[-1] = "Angry"
0x128: Call2 0xa9

0x129: Pop(1)
0x12a: Push((int) 535776)
0x12b: @@ SetMessage(Stack[-1])
0x12c: Pop(1)
0x12d: @@ ClearReplies()
0x12e: Pop(0)
0x12f: Push((int) 535777)
0x130: Push((int) 37463)
0x131: Push((int) 37461)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: Push((int) 37463)
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Staring"
0x13a: Call2 0xa9

0x13b: Pop(1)
0x13c: Push((int) 535779)
0x13d: @@ SetMessage(Stack[-1])
0x13e: Pop(1)
0x13f: @@ ClearReplies()
0x140: Pop(0)
0x141: Push((int) 535780)
0x142: Push((int) -1)
0x143: Push((int) 37464)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Push((int) 535785)
0x147: Push((int) -1)
0x148: Push((int) 37469)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x14d: PushEmpty(bool)
0x14e: Call2 0x2f0

0x14f: Pop(0)
0x150: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x151: @ lshStopAnimation()
0x152: Pop(0)
0x153: GOTO 0x156

0x154: @ StopAnimation()
0x155: Pop(0)
0x156: Return(); Pop(0)

0x157: GOTO 0xc0

0x158: Return(); Pop(0)

0x159: PushEmpty()
0x15a: PushEmpty(int, object)
0x15b: Stack[-1] = Stack[-3]
0x15c: Push(-2, 1); TaskCall(0)
0x15d: Call2 0x0

0x15e: Pop(-2, 1); TaskReturn
0x15f: Pop(2)
0x160: Return(); Pop(0)

0x161: @ Hold()
0x162: Pop(0)
0x163: GOTO 0x161

0x164: Return(); Pop(0)

0x165: PushEmpty(bool, bool)
0x166: Push("cleanup")
0x167: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x169: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x16a: @ IsLoaded(Stack[-1])
0x16b: Pop(0)
0x16c: PushEmpty(bool)
0x16d: Stack[-1] = (bool) 0
0x16e: Pop(0); Push((bool) Stack[-2] == 0)
0x16f: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x170: PushEmpty(bool)
0x171: Call2 0x191

0x172: Pop(0)
0x173: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x174: Stack[-1] = (bool) 1
0x175: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x176: PushEmpty(object)
0x177: Call2 0x2a7

0x178: Pop(0)
0x179: @ RemoveActor(Stack[-1])
0x17a: Pop(1)
0x17b: GOTO 0x180

0x17c: Push("restore")
0x17d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x180: Return(); Pop(2)

0x181: PushEmpty(bool)
0x182: Stack[-1] = (bool) 0
0x183: Push( Stack[0 + Tasks[-1].StackPointer] )
0x184: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x185: PushEmpty(bool)
0x186: Call2 0x191

0x187: Pop(0)
0x188: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x189: Stack[-1] = (bool) 1
0x18a: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18b: PushEmpty(object)
0x18c: Call2 0x2a7

0x18d: Pop(0)
0x18e: @ RemoveActor(Stack[-1])
0x18f: Pop(1)
0x190: Return(); Pop(0)

0x191: Stack[-1] = (bool) 1
0x192: Return(); Pop(0)

0x193: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x194: @@ GetPosition(Stack[-8])
0x195: Pop(0)
0x196: @@ GetEyesHeight(Stack[-9])
0x197: Pop(0)
0x198: Push(CvectorIndex(Stack[-8], 1))
0x199: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x19a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x19b: @ GetPosition(Stack[-7])
0x19c: Pop(0)
0x19d: @ GetEyesHeight(Stack[-9])
0x19e: Pop(0)
0x19f: Push(CvectorIndex(Stack[-7], 1))
0x1a0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1a1: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1a2: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1a3: Push(CvectorIndex(Stack[-6], 1))
0x1a4: Stack[-1] = (int) 0
0x1a5: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1a6: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1a7: Pop(1); Push(Sqrt(Stack[-1]))
0x1a8: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1a9: Stack[-5] = -Stack[-6]; Pop(0);
0x1aa: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1ab: PushEmpty(cvector, cvector)
0x1ac: Push(CVector(0.0, 1.0, 0.0))
0x1ad: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1ae: Call2 0x2ad

0x1af: Pop(1)
0x1b0: Push((int) 25)
0x1b1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1b2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1b3: Push(CVector(0.0, 10.0, 0.0))
0x1b4: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1b5: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1b6: @ IsOverrideActive(Stack[-2])
0x1b7: Pop(0)
0x1b8: Push(Stack[-2])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1ba: Stack[-21] = (bool) 0
0x1bb: Return(); Pop(18)

0x1bc: @ StopWorld()
0x1bd: Pop(0)
0x1be: @ CameraTransit(Stack[-3], Stack[-5])
0x1bf: Pop(0)
0x1c0: Push(CvectorIndex(Stack[-4], 0))
0x1c1: Push(CvectorIndex(Stack[-5], 2))
0x1c2: @ Rotate(Stack[-2], Stack[-1])
0x1c3: Pop(2)
0x1c4: PushEmpty(bool)
0x1c5: Call2 0x2f0

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
0x1d8: @ CameraSwitchToNormal()
0x1d9: Pop(0)
0x1da: PushEmpty(bool)
0x1db: Call2 0x2f0

0x1dc: Pop(0)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1de: GOTO 0x1e7

0x1df: Push("head")
0x1e0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1e1: Pop(1)
0x1e2: Push(Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e4: Push("head")
0x1e5: @ UnlookAsync(Stack[-1])
0x1e6: Pop(1)
0x1e7: Return(); Pop(2)

0x1e8: PushEmpty(int, int, int, int)
0x1e9: Push("voice_common")
0x1ea: @ GetVariable(Stack[-1], Stack[-3])
0x1eb: Pop(1)
0x1ec: Push(Stack[-2])
0x1ed: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x1ee: PushEmpty(bool, object)
0x1ef: Stack[-1] = Stack[-7]
0x1f0: Call2 0x222

0x1f1: Pop(1)
0x1f2: Pop(1); Push((bool) Stack[-1] == 0)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f4: PushEmpty(bool, object)
0x1f5: Stack[-1] = Stack[-7]
0x1f6: Call2 0x247

0x1f7: Pop(1)
0x1f8: Pop(1); Push((bool) Stack[-1] == 0)
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fa: Stack[-6] = (bool) 0
0x1fb: Return(); Pop(4)

0x1fc: Push((int) 2)
0x1fd: @ irand(Stack[-2], Stack[-1])
0x1fe: Pop(1)
0x1ff: Push(Stack[-1])
0x200: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x201: Push("voice_common")
0x202: Push((int) 1)
0x203: Pop(1); Push(Stack[-4] + Stack[-1]);
0x204: Push((int) 3)
0x205: Pop(2); Push(Stack[-2] % Stack[-1]);
0x206: @ SetVariable(Stack[-2], Stack[-1])
0x207: Pop(2)
0x208: GOTO 0x20d

0x209: Push("voice_common")
0x20a: Push((int) 0)
0x20b: @ SetVariable(Stack[-2], Stack[-1])
0x20c: Pop(2)
0x20d: GOTO 0x220

0x20e: PushEmpty(bool, object)
0x20f: Stack[-1] = Stack[-7]
0x210: Call2 0x247

0x211: Pop(1)
0x212: Pop(1); Push((bool) Stack[-1] == 0)
0x213: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x214: PushEmpty(bool, object)
0x215: Stack[-1] = Stack[-7]
0x216: Call2 0x222

0x217: Pop(1)
0x218: Pop(1); Push((bool) Stack[-1] == 0)
0x219: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x21a: Stack[-6] = (bool) 0
0x21b: Return(); Pop(4)

0x21c: Push("voice_common")
0x21d: Push((int) 1)
0x21e: @ SetVariable(Stack[-2], Stack[-1])
0x21f: Pop(2)
0x220: Stack[-6] = (bool) 1
0x221: Return(); Pop(4)

0x222: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x223: Stack[-5] = "c"
0x224: Stack[-4] = (int) 0
0x225: Push((int) 1)
0x226: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x227: Push((int) 1)
0x228: Pop(1); Push(Stack[-5] + Stack[-1]);
0x229: Pop(1); Push(Stack[-6] + Stack[-1]);
0x22a: @@ HasProperty(Stack[-1], Stack[-4])
0x22b: Pop(1)
0x22c: Pop(0); Push((bool) Stack[-3] == 0)
0x22d: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22e: GOTO 0x232

0x22f: Push((int) 1)
0x230: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x231: GOTO 0x225

0x232: Pop(0); Push((bool) Stack[-4] == 0)
0x233: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x234: Stack[-12] = (bool) 0
0x235: Return(); Pop(10)

0x236: Stack[-2] = (int) 0
0x237: Push((int) 1)
0x238: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23a: @ irand(Stack[-2], Stack[-4])
0x23b: Pop(0)
0x23c: Push((int) 1)
0x23d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x23e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x23f: @@ GetProperty(Stack[-1], Stack[-2])
0x240: Pop(1)
0x241: PushEmpty(bool, string)
0x242: Stack[-1] = Stack[-3]
0x243: Call2 0x291

0x244: Stack[-14] = Stack[-2]
0x245: Pop(2)
0x246: Return(); Pop(10)

0x247: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x248: Push("d")
0x249: PushEmpty(int)
0x24a: Call2 0x2bc

0x24b: Pop(0)
0x24c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x24d: Push("m")
0x24e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x24f: Stack[-4] = (int) 0
0x250: Push((int) 1)
0x251: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x252: Push((int) 1)
0x253: Pop(1); Push(Stack[-5] + Stack[-1]);
0x254: Pop(1); Push(Stack[-6] + Stack[-1]);
0x255: @@ HasProperty(Stack[-1], Stack[-4])
0x256: Pop(1)
0x257: Pop(0); Push((bool) Stack[-3] == 0)
0x258: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x259: GOTO 0x25d

0x25a: Push((int) 1)
0x25b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x25c: GOTO 0x250

0x25d: Pop(0); Push((bool) Stack[-4] == 0)
0x25e: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25f: Stack[-12] = (bool) 0
0x260: Return(); Pop(10)

0x261: Stack[-2] = (int) 0
0x262: Push((int) 1)
0x263: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x265: @ irand(Stack[-2], Stack[-4])
0x266: Pop(0)
0x267: Push((int) 1)
0x268: Pop(1); Push(Stack[-3] + Stack[-1]);
0x269: Pop(1); Push(Stack[-6] + Stack[-1]);
0x26a: @@ GetProperty(Stack[-1], Stack[-2])
0x26b: Pop(1)
0x26c: PushEmpty(bool, string)
0x26d: Stack[-1] = Stack[-3]
0x26e: Call2 0x291

0x26f: Stack[-14] = Stack[-2]
0x270: Pop(2)
0x271: Return(); Pop(10)

0x272: PushEmpty(bool, float, float, bool, float, float)
0x273: @ lshHasAnimation(Stack[-3], Stack[-7])
0x274: Pop(0)
0x275: Push(Stack[-3])
0x276: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x277: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x278: Pop(0)
0x279: Push((bool) 0)
0x27a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x27b: Pop(1)
0x27c: GOTO 0x281

0x27d: Push("Can't find lsh animation : ")
0x27e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x27f: @ Trace(Stack[-1])
0x280: Pop(1)
0x281: Return(); Pop(6)

0x282: PushEmpty(bool, float, float, bool, float, float)
0x283: @ lshHasAnimation(Stack[-3], Stack[-8])
0x284: Pop(0)
0x285: Push(Stack[-3])
0x286: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x287: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x288: Pop(0)
0x289: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x28a: Pop(0)
0x28b: GOTO 0x290

0x28c: Push("Can't find lsh animation : ")
0x28d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x28e: @ Trace(Stack[-1])
0x28f: Pop(1)
0x290: Return(); Pop(6)

0x291: PushEmpty(bool, bool)
0x292: PushEmpty(bool)
0x293: Call2 0x2f0

0x294: Pop(0)
0x295: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x296: @ lshHasSpeech(Stack[-1], Stack[-3])
0x297: Pop(0)
0x298: Push(Stack[-1])
0x299: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29a: @ lshPlaySpeech(Stack[-3])
0x29b: Pop(0)
0x29c: Stack[-4] = (bool) 1
0x29d: Return(); Pop(2)

0x29e: Stack[-4] = (bool) 0
0x29f: Return(); Pop(2)

0x2a0: PushEmpty(bool)
0x2a1: Call2 0x2f0

0x2a2: Pop(0)
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a4: @ lshStopSpeech()
0x2a5: Pop(0)
0x2a6: Return(); Pop(0)

0x2a7: PushEmpty(object, object)
0x2a8: @ self(Stack[-1])
0x2a9: Pop(0)
0x2aa: Stack[-3] = Stack[-1]
0x2ab: Return(); Pop(2)

0x2ac: Stack[-1] = 0
0x2ad: PushEmpty(float, float)
0x2ae: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2af: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2b0: Push((float)0.0)
0x2b1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b3: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2b4: Return(); Pop(2)

0x2b5: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2b6: Return(); Pop(2)

0x2b7: PushEmpty(int, int)
0x2b8: @ GetVariable(Stack[-3], Stack[-1])
0x2b9: Pop(0)
0x2ba: Stack[-4] = Stack[-1]
0x2bb: Return(); Pop(2)

0x2bc: PushEmpty(float, float)
0x2bd: @ GetGameTime(Stack[-1])
0x2be: Pop(0)
0x2bf: Push((int) 1)
0x2c0: PushEmpty(int)
0x2c1: Push((int) 24)
0x2c2: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x2c3: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x2c4: Return(); Pop(2)

0x2c5: PushEmpty()
0x2c6: Push("ood7MariaPetr1")
0x2c7: Push((int) 1)
0x2c8: @ SetVariable(Stack[-2], Stack[-1])
0x2c9: Pop(2)
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty()
0x2cc: PushEmpty(int, string)
0x2cd: Stack[-1] = "ood7MariaPetr1"
0x2ce: Call2 0x2b7

0x2cf: Pop(1)
0x2d0: Push((int) 0)
0x2d1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d3: Stack[-2] = (bool) 1
0x2d4: Return(); Pop(0)

0x2d5: Stack[-2] = (bool) 0
0x2d6: Return(); Pop(0)

0x2d7: PushEmpty(int, int)
0x2d8: Push("branch")
0x2d9: @ GetVariable(Stack[-1], Stack[-2])
0x2da: Pop(1)
0x2db: Push((int) 0)
0x2dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2de: Stack[-3] = (int) 1
0x2df: Return(); Pop(2)

0x2e0: GOTO 0x2e6

0x2e1: Push((int) 1)
0x2e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e4: Stack[-3] = (int) 2
0x2e5: Return(); Pop(2)

0x2e6: Stack[-3] = (int) 3
0x2e7: Return(); Pop(2)

0x2e8: Stack[-1] = (int) 515543
0x2e9: Return(); Pop(0)

0x2ea: Stack[-1] = (int) 502868
0x2eb: Return(); Pop(0)

0x2ec: Stack[-1] = "ui/NPC_Maria.png"
0x2ed: Return(); Pop(0)

0x2ee: Stack[-1] = "ui/NPC_Maria_b.png"
0x2ef: Return(); Pop(0)

0x2f0: Stack[-1] = (bool) 1
0x2f1: Return(); Pop(0)

