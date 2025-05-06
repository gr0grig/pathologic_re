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
	Saveyouall
	SetMessage
	ClearReplies
	AddReply
	idle
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
	ood3Klara1
	branch
	ui/NPC_Klara.png
	ui/NPC_Klara_b.png

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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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

RunOp = 0x134
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x12c Vars = (object)
		EVENT_26 Op = 0x138 Vars = (string)
		EVENT_6 Op = 0x154 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x166

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2bf

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2bd

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2c1

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2c3

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2ac

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
0x31: Call2 0x27c

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x1bd

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
0x48: Call2 0x1ab

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
0x56: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Saveyouall"
0x59: Call2 0x95

0x5a: Pop(1)
0x5b: Push((int) 510202)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x2a0

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 534060)
0x66: Push((int) 11250)
0x67: Push((int) 35646)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 510203)
0x6b: Push((int) -1)
0x6c: Push((int) 11249)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 536145)
0x70: Push((int) -1)
0x71: Push((int) 37905)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x77

0x75: Return(); Pop(0)

0x76: GOTO 0x55

0x77: PushEmpty(bool)
0x78: Call2 0x2c5

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @ lshWaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: PushEmpty(string)
0x81: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x82: Call2 0x247

0x83: Pop(1)
0x84: GOTO 0x7b

0x85: GOTO 0x94

0x86: Push("all")
0x87: Push("idle")
0x88: @ PlayAnimation(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: @ WaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: Push("all")
0x90: Push("idle")
0x91: @ PlayAnimation(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: GOTO 0x8a

0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: PushEmpty(bool)
0x97: Call2 0x2c5

0x98: Pop(0)
0x99: Pop(1); Push((bool) Stack[-1] == 0)
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Return(); Pop(0)

0x9c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: PushEmpty(string, bool)
0xa0: Stack[-2] = Stack[-3]
0xa1: Push("")
0xa2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa4: Stack[-1] = (bool) 0
0xa5: GOTO 0xa7

0xa6: Stack[-1] = (bool) 1
0xa7: Call2 0x257

0xa8: Pop(2)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0xae: PushEmpty()
0xaf: Call2 0x275

0xb0: Pop(0)
0xb1: Push((int) 35646)
0xb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0x29a

0xb8: Pop(2)
0xb9: Push((int) 11248)
0xba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xbc: PushEmpty(string)
0xbd: Stack[-1] = "Saveyouall"
0xbe: Call2 0x95

0xbf: Pop(1)
0xc0: Push((int) 510202)
0xc1: @@ SetMessage(Stack[-1])
0xc2: Pop(1)
0xc3: @@ ClearReplies()
0xc4: Pop(0)
0xc5: PushEmpty(bool, object)
0xc6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc7: Call2 0x2a0

0xc8: Pop(1)
0xc9: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xca: Push((int) 534060)
0xcb: Push((int) 11250)
0xcc: Push((int) 35646)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 510203)
0xd0: Push((int) -1)
0xd1: Push((int) 11249)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Push((int) 536145)
0xd5: Push((int) -1)
0xd6: Push((int) 37905)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Return(); Pop(0)

0xda: Push((int) 11250)
0xdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xdd: PushEmpty(string)
0xde: Stack[-1] = "Saveyouall"
0xdf: Call2 0x95

0xe0: Pop(1)
0xe1: Push((int) 510204)
0xe2: @@ SetMessage(Stack[-1])
0xe3: Pop(1)
0xe4: @@ ClearReplies()
0xe5: Pop(0)
0xe6: Push((int) 534061)
0xe7: Push((int) 35649)
0xe8: Push((int) 35648)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Push((int) 534063)
0xec: Push((int) 35649)
0xed: Push((int) 35650)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Return(); Pop(0)

0xf1: Push((int) 35649)
0xf2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xf4: PushEmpty(string)
0xf5: Stack[-1] = "Saveyouall"
0xf6: Call2 0x95

0xf7: Pop(1)
0xf8: Push((int) 534062)
0xf9: @@ SetMessage(Stack[-1])
0xfa: Pop(1)
0xfb: @@ ClearReplies()
0xfc: Pop(0)
0xfd: Push((int) 510205)
0xfe: Push((int) 11252)
0xff: Push((int) 11251)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Push((int) 534064)
0x103: Push((int) -1)
0x104: Push((int) 35652)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: Return(); Pop(0)

0x108: Push((int) 11252)
0x109: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x10b: PushEmpty(string)
0x10c: Stack[-1] = "Saveyouall"
0x10d: Call2 0x95

0x10e: Pop(1)
0x10f: Push((int) 510206)
0x110: @@ SetMessage(Stack[-1])
0x111: Pop(1)
0x112: @@ ClearReplies()
0x113: Pop(0)
0x114: Push((int) 510207)
0x115: Push((int) -1)
0x116: Push((int) 11253)
0x117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: Push((int) 534065)
0x11a: Push((int) -1)
0x11b: Push((int) 35653)
0x11c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(3)
0x11e: Return(); Pop(0)

0x11f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x120: PushEmpty(bool)
0x121: Call2 0x2c5

0x122: Pop(0)
0x123: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x124: @ lshStopAnimation()
0x125: Pop(0)
0x126: GOTO 0x129

0x127: @ StopAnimation()
0x128: Pop(0)
0x129: Return(); Pop(0)

0x12a: GOTO 0xac

0x12b: Return(); Pop(0)

0x12c: PushEmpty()
0x12d: PushEmpty(int, object)
0x12e: Stack[-1] = Stack[-3]
0x12f: Push(-2, 1); TaskCall(0)
0x130: Call2 0x0

0x131: Pop(-2, 1); TaskReturn
0x132: Pop(2)
0x133: Return(); Pop(0)

0x134: @ Hold()
0x135: Pop(0)
0x136: GOTO 0x134

0x137: Return(); Pop(0)

0x138: PushEmpty(bool, bool)
0x139: Push("cleanup")
0x13a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x13c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x13d: @ IsLoaded(Stack[-1])
0x13e: Pop(0)
0x13f: PushEmpty(bool)
0x140: Stack[-1] = (bool) 0
0x141: Pop(0); Push((bool) Stack[-2] == 0)
0x142: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x143: PushEmpty(bool)
0x144: Call2 0x164

0x145: Pop(0)
0x146: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x147: Stack[-1] = (bool) 1
0x148: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x149: PushEmpty(object)
0x14a: Call2 0x27c

0x14b: Pop(0)
0x14c: @ RemoveActor(Stack[-1])
0x14d: Pop(1)
0x14e: GOTO 0x153

0x14f: Push("restore")
0x150: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x152: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x153: Return(); Pop(2)

0x154: PushEmpty(bool)
0x155: Stack[-1] = (bool) 0
0x156: Push( Stack[0 + Tasks[-1].StackPointer] )
0x157: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x158: PushEmpty(bool)
0x159: Call2 0x164

0x15a: Pop(0)
0x15b: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15c: Stack[-1] = (bool) 1
0x15d: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x15e: PushEmpty(object)
0x15f: Call2 0x27c

0x160: Pop(0)
0x161: @ RemoveActor(Stack[-1])
0x162: Pop(1)
0x163: Return(); Pop(0)

0x164: Stack[-1] = (bool) 1
0x165: Return(); Pop(0)

0x166: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x167: @@ GetPosition(Stack[-8])
0x168: Pop(0)
0x169: @@ GetEyesHeight(Stack[-9])
0x16a: Pop(0)
0x16b: Push(CvectorIndex(Stack[-8], 1))
0x16c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x16d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x16e: @ GetPosition(Stack[-7])
0x16f: Pop(0)
0x170: @ GetEyesHeight(Stack[-9])
0x171: Pop(0)
0x172: Push(CvectorIndex(Stack[-7], 1))
0x173: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x174: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x175: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x176: Push(CvectorIndex(Stack[-6], 1))
0x177: Stack[-1] = (int) 0
0x178: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x179: Pop(0); Push(Stack[-6] | Stack[-6]);
0x17a: Pop(1); Push(Sqrt(Stack[-1]))
0x17b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x17c: Stack[-5] = -Stack[-6]; Pop(0);
0x17d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x17e: PushEmpty(cvector, cvector)
0x17f: Push(CVector(0.0, 1.0, 0.0))
0x180: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x181: Call2 0x282

0x182: Pop(1)
0x183: Push((int) 25)
0x184: Pop(2); Push(Stack[-2] * Stack[-1]);
0x185: Pop(2); Push(Stack[-2] + Stack[-1]);
0x186: Push(CVector(0.0, 10.0, 0.0))
0x187: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x188: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x189: @ IsOverrideActive(Stack[-2])
0x18a: Pop(0)
0x18b: Push(Stack[-2])
0x18c: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18d: Stack[-21] = (bool) 0
0x18e: Return(); Pop(18)

0x18f: @ StopWorld()
0x190: Pop(0)
0x191: Push((bool) 1)
0x192: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x193: Pop(1)
0x194: Push(CvectorIndex(Stack[-4], 0))
0x195: Push(CvectorIndex(Stack[-5], 2))
0x196: @ Rotate(Stack[-2], Stack[-1])
0x197: Pop(2)
0x198: PushEmpty(bool)
0x199: Call2 0x2c5

0x19a: Pop(0)
0x19b: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19c: GOTO 0x1a5

0x19d: Push("head")
0x19e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x19f: Pop(1)
0x1a0: Push(Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a2: Push("head")
0x1a3: @ LookAsyncCamera(Stack[-1])
0x1a4: Pop(1)
0x1a5: @ CameraWaitForPlayFinish()
0x1a6: Pop(0)
0x1a7: @ ResumeWorld()
0x1a8: Pop(0)
0x1a9: Stack[-21] = (bool) 1
0x1aa: Return(); Pop(18)

0x1ab: PushEmpty(bool, bool)
0x1ac: Push((bool) 1)
0x1ad: @ CameraSwitchToNormal(Stack[-1])
0x1ae: Pop(1)
0x1af: PushEmpty(bool)
0x1b0: Call2 0x2c5

0x1b1: Pop(0)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b3: GOTO 0x1bc

0x1b4: Push("head")
0x1b5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1b6: Pop(1)
0x1b7: Push(Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b9: Push("head")
0x1ba: @ UnlookAsync(Stack[-1])
0x1bb: Pop(1)
0x1bc: Return(); Pop(2)

0x1bd: PushEmpty(int, int, int, int)
0x1be: Push("voice_common")
0x1bf: @ GetVariable(Stack[-1], Stack[-3])
0x1c0: Pop(1)
0x1c1: Push(Stack[-2])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1c3: PushEmpty(bool, object)
0x1c4: Stack[-1] = Stack[-7]
0x1c5: Call2 0x1f7

0x1c6: Pop(1)
0x1c7: Pop(1); Push((bool) Stack[-1] == 0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1c9: PushEmpty(bool, object)
0x1ca: Stack[-1] = Stack[-7]
0x1cb: Call2 0x21c

0x1cc: Pop(1)
0x1cd: Pop(1); Push((bool) Stack[-1] == 0)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cf: Stack[-6] = (bool) 0
0x1d0: Return(); Pop(4)

0x1d1: Push((int) 2)
0x1d2: @ irand(Stack[-2], Stack[-1])
0x1d3: Pop(1)
0x1d4: Push(Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1d6: Push("voice_common")
0x1d7: Push((int) 1)
0x1d8: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1d9: Push((int) 3)
0x1da: Pop(2); Push(Stack[-2] % Stack[-1]);
0x1db: @ SetVariable(Stack[-2], Stack[-1])
0x1dc: Pop(2)
0x1dd: GOTO 0x1e2

0x1de: Push("voice_common")
0x1df: Push((int) 0)
0x1e0: @ SetVariable(Stack[-2], Stack[-1])
0x1e1: Pop(2)
0x1e2: GOTO 0x1f5

0x1e3: PushEmpty(bool, object)
0x1e4: Stack[-1] = Stack[-7]
0x1e5: Call2 0x21c

0x1e6: Pop(1)
0x1e7: Pop(1); Push((bool) Stack[-1] == 0)
0x1e8: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1e9: PushEmpty(bool, object)
0x1ea: Stack[-1] = Stack[-7]
0x1eb: Call2 0x1f7

0x1ec: Pop(1)
0x1ed: Pop(1); Push((bool) Stack[-1] == 0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ef: Stack[-6] = (bool) 0
0x1f0: Return(); Pop(4)

0x1f1: Push("voice_common")
0x1f2: Push((int) 1)
0x1f3: @ SetVariable(Stack[-2], Stack[-1])
0x1f4: Pop(2)
0x1f5: Stack[-6] = (bool) 1
0x1f6: Return(); Pop(4)

0x1f7: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1f8: Stack[-5] = "c"
0x1f9: Stack[-4] = (int) 0
0x1fa: Push((int) 1)
0x1fb: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1fc: Push((int) 1)
0x1fd: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1fe: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1ff: @@ HasProperty(Stack[-1], Stack[-4])
0x200: Pop(1)
0x201: Pop(0); Push((bool) Stack[-3] == 0)
0x202: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x203: GOTO 0x207

0x204: Push((int) 1)
0x205: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x206: GOTO 0x1fa

0x207: Pop(0); Push((bool) Stack[-4] == 0)
0x208: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x209: Stack[-12] = (bool) 0
0x20a: Return(); Pop(10)

0x20b: Stack[-2] = (int) 0
0x20c: Push((int) 1)
0x20d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20f: @ irand(Stack[-2], Stack[-4])
0x210: Pop(0)
0x211: Push((int) 1)
0x212: Pop(1); Push(Stack[-3] + Stack[-1]);
0x213: Pop(1); Push(Stack[-6] + Stack[-1]);
0x214: @@ GetProperty(Stack[-1], Stack[-2])
0x215: Pop(1)
0x216: PushEmpty(bool, string)
0x217: Stack[-1] = Stack[-3]
0x218: Call2 0x266

0x219: Stack[-14] = Stack[-2]
0x21a: Pop(2)
0x21b: Return(); Pop(10)

0x21c: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x21d: Push("d")
0x21e: PushEmpty(int)
0x21f: Call2 0x291

0x220: Pop(0)
0x221: Pop(2); Push(Stack[-2] + Stack[-1]);
0x222: Push("m")
0x223: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
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
0x243: Call2 0x266

0x244: Stack[-14] = Stack[-2]
0x245: Pop(2)
0x246: Return(); Pop(10)

0x247: PushEmpty(bool, float, float, bool, float, float)
0x248: @ lshHasAnimation(Stack[-3], Stack[-7])
0x249: Pop(0)
0x24a: Push(Stack[-3])
0x24b: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x24c: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x24d: Pop(0)
0x24e: Push((bool) 0)
0x24f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x250: Pop(1)
0x251: GOTO 0x256

0x252: Push("Can't find lsh animation : ")
0x253: Pop(1); Push(Stack[-1] + Stack[-8]);
0x254: @ Trace(Stack[-1])
0x255: Pop(1)
0x256: Return(); Pop(6)

0x257: PushEmpty(bool, float, float, bool, float, float)
0x258: @ lshHasAnimation(Stack[-3], Stack[-8])
0x259: Pop(0)
0x25a: Push(Stack[-3])
0x25b: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x25d: Pop(0)
0x25e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x25f: Pop(0)
0x260: GOTO 0x265

0x261: Push("Can't find lsh animation : ")
0x262: Pop(1); Push(Stack[-1] + Stack[-9]);
0x263: @ Trace(Stack[-1])
0x264: Pop(1)
0x265: Return(); Pop(6)

0x266: PushEmpty(bool, bool)
0x267: PushEmpty(bool)
0x268: Call2 0x2c5

0x269: Pop(0)
0x26a: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x26b: @ lshHasSpeech(Stack[-1], Stack[-3])
0x26c: Pop(0)
0x26d: Push(Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x26f: @ lshPlaySpeech(Stack[-3])
0x270: Pop(0)
0x271: Stack[-4] = (bool) 1
0x272: Return(); Pop(2)

0x273: Stack[-4] = (bool) 0
0x274: Return(); Pop(2)

0x275: PushEmpty(bool)
0x276: Call2 0x2c5

0x277: Pop(0)
0x278: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x279: @ lshStopSpeech()
0x27a: Pop(0)
0x27b: Return(); Pop(0)

0x27c: PushEmpty(object, object)
0x27d: @ self(Stack[-1])
0x27e: Pop(0)
0x27f: Stack[-3] = Stack[-1]
0x280: Return(); Pop(2)

0x281: Stack[-1] = 0
0x282: PushEmpty(float, float)
0x283: Pop(0); Push(Stack[-3] | Stack[-3]);
0x284: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x285: Push((float)0.0)
0x286: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x288: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x289: Return(); Pop(2)

0x28a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x28b: Return(); Pop(2)

0x28c: PushEmpty(int, int)
0x28d: @ GetVariable(Stack[-3], Stack[-1])
0x28e: Pop(0)
0x28f: Stack[-4] = Stack[-1]
0x290: Return(); Pop(2)

0x291: PushEmpty(float, float)
0x292: @ GetGameTime(Stack[-1])
0x293: Pop(0)
0x294: Push((int) 1)
0x295: PushEmpty(int)
0x296: Push((int) 24)
0x297: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x298: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x299: Return(); Pop(2)

0x29a: PushEmpty()
0x29b: Push("ood3Klara1")
0x29c: Push((int) 1)
0x29d: @ SetVariable(Stack[-2], Stack[-1])
0x29e: Pop(2)
0x29f: Return(); Pop(0)

0x2a0: PushEmpty()
0x2a1: PushEmpty(int, string)
0x2a2: Stack[-1] = "ood3Klara1"
0x2a3: Call2 0x28c

0x2a4: Pop(1)
0x2a5: Push((int) 0)
0x2a6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a8: Stack[-2] = (bool) 1
0x2a9: Return(); Pop(0)

0x2aa: Stack[-2] = (bool) 0
0x2ab: Return(); Pop(0)

0x2ac: PushEmpty(int, int)
0x2ad: Push("branch")
0x2ae: @ GetVariable(Stack[-1], Stack[-2])
0x2af: Pop(1)
0x2b0: Push((int) 0)
0x2b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b3: Stack[-3] = (int) 1
0x2b4: Return(); Pop(2)

0x2b5: GOTO 0x2bb

0x2b6: Push((int) 1)
0x2b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b8: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b9: Stack[-3] = (int) 2
0x2ba: Return(); Pop(2)

0x2bb: Stack[-3] = (int) 3
0x2bc: Return(); Pop(2)

0x2bd: Stack[-1] = (int) 515540
0x2be: Return(); Pop(0)

0x2bf: Stack[-1] = (int) 502865
0x2c0: Return(); Pop(0)

0x2c1: Stack[-1] = "ui/NPC_Klara.png"
0x2c2: Return(); Pop(0)

0x2c3: Stack[-1] = "ui/NPC_Klara_b.png"
0x2c4: Return(); Pop(0)

0x2c5: Stack[-1] = (bool) 1
0x2c6: Return(); Pop(0)

