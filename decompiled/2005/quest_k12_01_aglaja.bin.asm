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
	Isee
	Confusion
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
	game_final
	branch
	ui/NPC_Aglaja.png
	ui/NPC_Aglaja_b.png

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

RunOp = 0x172
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbb Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x176 Vars = (object)
		EVENT_26 Op = 0x17e Vars = (string)
		EVENT_6 Op = 0x19a Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1ac

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2fd

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2fb

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2ff

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x301

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2ea

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
0x31: Call2 0x2c0

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x201

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
0x48: Call2 0x1f0

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
0x56: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x2de

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x5d: PushEmpty(string)
0x5e: Stack[-1] = "Neutral"
0x5f: Call2 0xa5

0x60: Pop(1)
0x61: Push((int) 539199)
0x62: @@ SetMessage(Stack[-1])
0x63: Pop(1)
0x64: @@ ClearReplies()
0x65: Pop(0)
0x66: Push((int) 540975)
0x67: Push((int) 43646)
0x68: Push((int) 43065)
0x69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a: Pop(3)
0x6b: Push((int) 539200)
0x6c: Push((int) 43646)
0x6d: Push((int) 41143)
0x6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(3)
0x70: GOTO 0x87

0x71: PushEmpty(string)
0x72: Stack[-1] = "Neutral"
0x73: Call2 0xa5

0x74: Pop(1)
0x75: Push((int) 539201)
0x76: @@ SetMessage(Stack[-1])
0x77: Pop(1)
0x78: @@ ClearReplies()
0x79: Pop(0)
0x7a: Push((int) 539202)
0x7b: Push((int) -1)
0x7c: Push((int) 41145)
0x7d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e: Pop(3)
0x7f: Push((int) 540976)
0x80: Push((int) -1)
0x81: Push((int) 43066)
0x82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83: Pop(3)
0x84: GOTO 0x87

0x85: Return(); Pop(0)

0x86: GOTO 0x55

0x87: PushEmpty(bool)
0x88: Call2 0x303

0x89: Pop(0)
0x8a: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8b: @ lshWaitForAnimEnd()
0x8c: Pop(0)
0x8d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: GOTO 0x95

0x90: PushEmpty(string)
0x91: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x92: Call2 0x28b

0x93: Pop(1)
0x94: GOTO 0x8b

0x95: GOTO 0xa4

0x96: Push("all")
0x97: Push("idle")
0x98: @ PlayAnimation(Stack[-2], Stack[-1])
0x99: Pop(2)
0x9a: @ WaitForAnimEnd()
0x9b: Pop(0)
0x9c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xa4

0x9f: Push("all")
0xa0: Push("idle")
0xa1: @ PlayAnimation(Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: GOTO 0x9a

0xa4: Return(); Pop(0)

0xa5: PushEmpty()
0xa6: PushEmpty(bool)
0xa7: Call2 0x303

0xa8: Pop(0)
0xa9: Pop(1); Push((bool) Stack[-1] == 0)
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xad: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xae: Return(); Pop(0)

0xaf: PushEmpty(string, bool)
0xb0: Stack[-2] = Stack[-3]
0xb1: Push("")
0xb2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb4: Stack[-1] = (bool) 0
0xb5: GOTO 0xb7

0xb6: Stack[-1] = (bool) 1
0xb7: Call2 0x29b

0xb8: Pop(2)
0xb9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: Push((int) 1)
0xbd: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0xbe: PushEmpty()
0xbf: Call2 0x2b9

0xc0: Pop(0)
0xc1: Push((int) 41142)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xc4: PushEmpty(bool, object)
0xc5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Call2 0x2de

0xc7: Pop(1)
0xc8: Pop(1); Push((bool) Stack[-1] == 0)
0xc9: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xca: PushEmpty(string)
0xcb: Stack[-1] = "Neutral"
0xcc: Call2 0xa5

0xcd: Pop(1)
0xce: Push((int) 539199)
0xcf: @@ SetMessage(Stack[-1])
0xd0: Pop(1)
0xd1: @@ ClearReplies()
0xd2: Pop(0)
0xd3: Push((int) 540975)
0xd4: Push((int) 43646)
0xd5: Push((int) 43065)
0xd6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7: Pop(3)
0xd8: Push((int) 539200)
0xd9: Push((int) 43646)
0xda: Push((int) 41143)
0xdb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc: Pop(3)
0xdd: Return(); Pop(0)

0xde: PushEmpty(string)
0xdf: Stack[-1] = "Neutral"
0xe0: Call2 0xa5

0xe1: Pop(1)
0xe2: Push((int) 539201)
0xe3: @@ SetMessage(Stack[-1])
0xe4: Pop(1)
0xe5: @@ ClearReplies()
0xe6: Pop(0)
0xe7: Push((int) 539202)
0xe8: Push((int) -1)
0xe9: Push((int) 41145)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: Push((int) 540976)
0xed: Push((int) -1)
0xee: Push((int) 43066)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Return(); Pop(0)

0xf2: Push((int) 43646)
0xf3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xf5: PushEmpty(string)
0xf6: Stack[-1] = "Neutral"
0xf7: Call2 0xa5

0xf8: Pop(1)
0xf9: Push((int) 541486)
0xfa: @@ SetMessage(Stack[-1])
0xfb: Pop(1)
0xfc: @@ ClearReplies()
0xfd: Pop(0)
0xfe: Push((int) 541487)
0xff: Push((int) 43653)
0x100: Push((int) 43647)
0x101: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102: Pop(3)
0x103: Push((int) 541488)
0x104: Push((int) 43649)
0x105: Push((int) 43648)
0x106: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107: Pop(3)
0x108: Return(); Pop(0)

0x109: Push((int) 43649)
0x10a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Isee"
0x10e: Call2 0xa5

0x10f: Pop(1)
0x110: Push((int) 541489)
0x111: @@ SetMessage(Stack[-1])
0x112: Pop(1)
0x113: @@ ClearReplies()
0x114: Pop(0)
0x115: Push((int) 541490)
0x116: Push((int) 45215)
0x117: Push((int) 43650)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: Push((int) 541491)
0x11b: Push((int) 43653)
0x11c: Push((int) 43651)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Push((int) 43653)
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Confusion"
0x125: Call2 0xa5

0x126: Pop(1)
0x127: Push((int) 541492)
0x128: @@ SetMessage(Stack[-1])
0x129: Pop(1)
0x12a: @@ ClearReplies()
0x12b: Pop(0)
0x12c: Push((int) 541493)
0x12d: Push((int) 43657)
0x12e: Push((int) 43655)
0x12f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x130: Pop(3)
0x131: Push((int) 541494)
0x132: Push((int) 45215)
0x133: Push((int) 43656)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Push((int) 43657)
0x138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x13a: PushEmpty(string)
0x13b: Stack[-1] = "Confusion"
0x13c: Call2 0xa5

0x13d: Pop(1)
0x13e: Push((int) 541495)
0x13f: @@ SetMessage(Stack[-1])
0x140: Pop(1)
0x141: @@ ClearReplies()
0x142: Pop(0)
0x143: Push((int) 541496)
0x144: Push((int) 45215)
0x145: Push((int) 43658)
0x146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x147: Pop(3)
0x148: Push((int) 541497)
0x149: Push((int) 45215)
0x14a: Push((int) 43659)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Return(); Pop(0)

0x14e: Push((int) 45215)
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x151: PushEmpty(string)
0x152: Stack[-1] = "Neutral"
0x153: Call2 0xa5

0x154: Pop(1)
0x155: Push((int) 542795)
0x156: @@ SetMessage(Stack[-1])
0x157: Pop(1)
0x158: @@ ClearReplies()
0x159: Pop(0)
0x15a: Push((int) 542797)
0x15b: Push((int) -1)
0x15c: Push((int) 45220)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Push((int) 542796)
0x160: Push((int) -1)
0x161: Push((int) 45219)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Return(); Pop(0)

0x165: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x166: PushEmpty(bool)
0x167: Call2 0x303

0x168: Pop(0)
0x169: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16a: @ lshStopAnimation()
0x16b: Pop(0)
0x16c: GOTO 0x16f

0x16d: @ StopAnimation()
0x16e: Pop(0)
0x16f: Return(); Pop(0)

0x170: GOTO 0xbc

0x171: Return(); Pop(0)

0x172: @ Hold()
0x173: Pop(0)
0x174: GOTO 0x172

0x175: Return(); Pop(0)

0x176: PushEmpty()
0x177: PushEmpty(int, object)
0x178: Stack[-1] = Stack[-3]
0x179: Push(-2, 1); TaskCall(0)
0x17a: Call2 0x0

0x17b: Pop(-2, 1); TaskReturn
0x17c: Pop(2)
0x17d: Return(); Pop(0)

0x17e: PushEmpty(bool, bool)
0x17f: Push("cleanup")
0x180: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x182: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x183: @ IsLoaded(Stack[-1])
0x184: Pop(0)
0x185: PushEmpty(bool)
0x186: Stack[-1] = (bool) 0
0x187: Pop(0); Push((bool) Stack[-2] == 0)
0x188: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x189: PushEmpty(bool)
0x18a: Call2 0x1aa

0x18b: Pop(0)
0x18c: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18d: Stack[-1] = (bool) 1
0x18e: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18f: PushEmpty(object)
0x190: Call2 0x2c0

0x191: Pop(0)
0x192: @ RemoveActor(Stack[-1])
0x193: Pop(1)
0x194: GOTO 0x199

0x195: Push("restore")
0x196: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x197: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x198: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x199: Return(); Pop(2)

0x19a: PushEmpty(bool)
0x19b: Stack[-1] = (bool) 0
0x19c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x19d: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x19e: PushEmpty(bool)
0x19f: Call2 0x1aa

0x1a0: Pop(0)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a2: Stack[-1] = (bool) 1
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a4: PushEmpty(object)
0x1a5: Call2 0x2c0

0x1a6: Pop(0)
0x1a7: @ RemoveActor(Stack[-1])
0x1a8: Pop(1)
0x1a9: Return(); Pop(0)

0x1aa: Stack[-1] = (bool) 1
0x1ab: Return(); Pop(0)

0x1ac: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1ad: @@ GetPosition(Stack[-8])
0x1ae: Pop(0)
0x1af: @@ GetEyesHeight(Stack[-9])
0x1b0: Pop(0)
0x1b1: Push(CvectorIndex(Stack[-8], 1))
0x1b2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1b3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1b4: @ GetPosition(Stack[-7])
0x1b5: Pop(0)
0x1b6: @ GetEyesHeight(Stack[-9])
0x1b7: Pop(0)
0x1b8: Push(CvectorIndex(Stack[-7], 1))
0x1b9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1ba: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1bb: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1bc: Push(CvectorIndex(Stack[-6], 1))
0x1bd: Stack[-1] = (int) 0
0x1be: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1bf: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1c0: Pop(1); Push(Sqrt(Stack[-1]))
0x1c1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1c2: Stack[-5] = -Stack[-6]; Pop(0);
0x1c3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1c4: PushEmpty(cvector, cvector)
0x1c5: Push(CVector(0.0, 1.0, 0.0))
0x1c6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1c7: Call2 0x2c6

0x1c8: Pop(1)
0x1c9: Push((int) 25)
0x1ca: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1cb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1cc: Push(CVector(0.0, 10.0, 0.0))
0x1cd: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1ce: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1cf: @ IsOverrideActive(Stack[-2])
0x1d0: Pop(0)
0x1d1: Push(Stack[-2])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d3: Stack[-21] = (bool) 0
0x1d4: Return(); Pop(18)

0x1d5: @ StopWorld()
0x1d6: Pop(0)
0x1d7: @ CameraTransit(Stack[-3], Stack[-5])
0x1d8: Pop(0)
0x1d9: Push(CvectorIndex(Stack[-4], 0))
0x1da: Push(CvectorIndex(Stack[-5], 2))
0x1db: @ Rotate(Stack[-2], Stack[-1])
0x1dc: Pop(2)
0x1dd: PushEmpty(bool)
0x1de: Call2 0x303

0x1df: Pop(0)
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e1: GOTO 0x1ea

0x1e2: Push("head")
0x1e3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1e4: Pop(1)
0x1e5: Push(Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e7: Push("head")
0x1e8: @ LookAsyncCamera(Stack[-1])
0x1e9: Pop(1)
0x1ea: @ CameraWaitForPlayFinish()
0x1eb: Pop(0)
0x1ec: @ ResumeWorld()
0x1ed: Pop(0)
0x1ee: Stack[-21] = (bool) 1
0x1ef: Return(); Pop(18)

0x1f0: PushEmpty(bool, bool)
0x1f1: @ CameraSwitchToNormal()
0x1f2: Pop(0)
0x1f3: PushEmpty(bool)
0x1f4: Call2 0x303

0x1f5: Pop(0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f7: GOTO 0x200

0x1f8: Push("head")
0x1f9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1fa: Pop(1)
0x1fb: Push(Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fd: Push("head")
0x1fe: @ UnlookAsync(Stack[-1])
0x1ff: Pop(1)
0x200: Return(); Pop(2)

0x201: PushEmpty(int, int, int, int)
0x202: Push("voice_common")
0x203: @ GetVariable(Stack[-1], Stack[-3])
0x204: Pop(1)
0x205: Push(Stack[-2])
0x206: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x207: PushEmpty(bool, object)
0x208: Stack[-1] = Stack[-7]
0x209: Call2 0x23b

0x20a: Pop(1)
0x20b: Pop(1); Push((bool) Stack[-1] == 0)
0x20c: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x20d: PushEmpty(bool, object)
0x20e: Stack[-1] = Stack[-7]
0x20f: Call2 0x260

0x210: Pop(1)
0x211: Pop(1); Push((bool) Stack[-1] == 0)
0x212: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x213: Stack[-6] = (bool) 0
0x214: Return(); Pop(4)

0x215: Push((int) 2)
0x216: @ irand(Stack[-2], Stack[-1])
0x217: Pop(1)
0x218: Push(Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21a: Push("voice_common")
0x21b: Push((int) 1)
0x21c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x21d: Push((int) 3)
0x21e: Pop(2); Push(Stack[-2] % Stack[-1]);
0x21f: @ SetVariable(Stack[-2], Stack[-1])
0x220: Pop(2)
0x221: GOTO 0x226

0x222: Push("voice_common")
0x223: Push((int) 0)
0x224: @ SetVariable(Stack[-2], Stack[-1])
0x225: Pop(2)
0x226: GOTO 0x239

0x227: PushEmpty(bool, object)
0x228: Stack[-1] = Stack[-7]
0x229: Call2 0x260

0x22a: Pop(1)
0x22b: Pop(1); Push((bool) Stack[-1] == 0)
0x22c: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x22d: PushEmpty(bool, object)
0x22e: Stack[-1] = Stack[-7]
0x22f: Call2 0x23b

0x230: Pop(1)
0x231: Pop(1); Push((bool) Stack[-1] == 0)
0x232: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x233: Stack[-6] = (bool) 0
0x234: Return(); Pop(4)

0x235: Push("voice_common")
0x236: Push((int) 1)
0x237: @ SetVariable(Stack[-2], Stack[-1])
0x238: Pop(2)
0x239: Stack[-6] = (bool) 1
0x23a: Return(); Pop(4)

0x23b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x23c: Stack[-5] = "c"
0x23d: Stack[-4] = (int) 0
0x23e: Push((int) 1)
0x23f: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x240: Push((int) 1)
0x241: Pop(1); Push(Stack[-5] + Stack[-1]);
0x242: Pop(1); Push(Stack[-6] + Stack[-1]);
0x243: @@ HasProperty(Stack[-1], Stack[-4])
0x244: Pop(1)
0x245: Pop(0); Push((bool) Stack[-3] == 0)
0x246: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x247: GOTO 0x24b

0x248: Push((int) 1)
0x249: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x24a: GOTO 0x23e

0x24b: Pop(0); Push((bool) Stack[-4] == 0)
0x24c: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24d: Stack[-12] = (bool) 0
0x24e: Return(); Pop(10)

0x24f: Stack[-2] = (int) 0
0x250: Push((int) 1)
0x251: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x253: @ irand(Stack[-2], Stack[-4])
0x254: Pop(0)
0x255: Push((int) 1)
0x256: Pop(1); Push(Stack[-3] + Stack[-1]);
0x257: Pop(1); Push(Stack[-6] + Stack[-1]);
0x258: @@ GetProperty(Stack[-1], Stack[-2])
0x259: Pop(1)
0x25a: PushEmpty(bool, string)
0x25b: Stack[-1] = Stack[-3]
0x25c: Call2 0x2aa

0x25d: Stack[-14] = Stack[-2]
0x25e: Pop(2)
0x25f: Return(); Pop(10)

0x260: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x261: Push("d")
0x262: PushEmpty(int)
0x263: Call2 0x2d5

0x264: Pop(0)
0x265: Pop(2); Push(Stack[-2] + Stack[-1]);
0x266: Push("m")
0x267: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x268: Stack[-4] = (int) 0
0x269: Push((int) 1)
0x26a: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x26b: Push((int) 1)
0x26c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x26d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x26e: @@ HasProperty(Stack[-1], Stack[-4])
0x26f: Pop(1)
0x270: Pop(0); Push((bool) Stack[-3] == 0)
0x271: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x272: GOTO 0x276

0x273: Push((int) 1)
0x274: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x275: GOTO 0x269

0x276: Pop(0); Push((bool) Stack[-4] == 0)
0x277: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x278: Stack[-12] = (bool) 0
0x279: Return(); Pop(10)

0x27a: Stack[-2] = (int) 0
0x27b: Push((int) 1)
0x27c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x27d: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27e: @ irand(Stack[-2], Stack[-4])
0x27f: Pop(0)
0x280: Push((int) 1)
0x281: Pop(1); Push(Stack[-3] + Stack[-1]);
0x282: Pop(1); Push(Stack[-6] + Stack[-1]);
0x283: @@ GetProperty(Stack[-1], Stack[-2])
0x284: Pop(1)
0x285: PushEmpty(bool, string)
0x286: Stack[-1] = Stack[-3]
0x287: Call2 0x2aa

0x288: Stack[-14] = Stack[-2]
0x289: Pop(2)
0x28a: Return(); Pop(10)

0x28b: PushEmpty(bool, float, float, bool, float, float)
0x28c: @ lshHasAnimation(Stack[-3], Stack[-7])
0x28d: Pop(0)
0x28e: Push(Stack[-3])
0x28f: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x290: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x291: Pop(0)
0x292: Push((bool) 0)
0x293: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x294: Pop(1)
0x295: GOTO 0x29a

0x296: Push("Can't find lsh animation : ")
0x297: Pop(1); Push(Stack[-1] + Stack[-8]);
0x298: @ Trace(Stack[-1])
0x299: Pop(1)
0x29a: Return(); Pop(6)

0x29b: PushEmpty(bool, float, float, bool, float, float)
0x29c: @ lshHasAnimation(Stack[-3], Stack[-8])
0x29d: Pop(0)
0x29e: Push(Stack[-3])
0x29f: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a0: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2a1: Pop(0)
0x2a2: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2a3: Pop(0)
0x2a4: GOTO 0x2a9

0x2a5: Push("Can't find lsh animation : ")
0x2a6: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2a7: @ Trace(Stack[-1])
0x2a8: Pop(1)
0x2a9: Return(); Pop(6)

0x2aa: PushEmpty(bool, bool)
0x2ab: PushEmpty(bool)
0x2ac: Call2 0x303

0x2ad: Pop(0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2af: @ lshHasSpeech(Stack[-1], Stack[-3])
0x2b0: Pop(0)
0x2b1: Push(Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b3: @ lshPlaySpeech(Stack[-3])
0x2b4: Pop(0)
0x2b5: Stack[-4] = (bool) 1
0x2b6: Return(); Pop(2)

0x2b7: Stack[-4] = (bool) 0
0x2b8: Return(); Pop(2)

0x2b9: PushEmpty(bool)
0x2ba: Call2 0x303

0x2bb: Pop(0)
0x2bc: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2bd: @ lshStopSpeech()
0x2be: Pop(0)
0x2bf: Return(); Pop(0)

0x2c0: PushEmpty(object, object)
0x2c1: @ self(Stack[-1])
0x2c2: Pop(0)
0x2c3: Stack[-3] = Stack[-1]
0x2c4: Return(); Pop(2)

0x2c5: Stack[-1] = 0
0x2c6: PushEmpty(float, float)
0x2c7: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2c8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2c9: Push((float)0.0)
0x2ca: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cc: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2cd: Return(); Pop(2)

0x2ce: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2cf: Return(); Pop(2)

0x2d0: PushEmpty(int, int)
0x2d1: @ GetVariable(Stack[-3], Stack[-1])
0x2d2: Pop(0)
0x2d3: Stack[-4] = Stack[-1]
0x2d4: Return(); Pop(2)

0x2d5: PushEmpty(float, float)
0x2d6: @ GetGameTime(Stack[-1])
0x2d7: Pop(0)
0x2d8: Push((int) 1)
0x2d9: PushEmpty(int)
0x2da: Push((int) 24)
0x2db: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x2dc: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x2dd: Return(); Pop(2)

0x2de: PushEmpty()
0x2df: PushEmpty(int, string)
0x2e0: Stack[-1] = "game_final"
0x2e1: Call2 0x2d0

0x2e2: Pop(1)
0x2e3: Push((int) 0)
0x2e4: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e6: Stack[-2] = (bool) 1
0x2e7: Return(); Pop(0)

0x2e8: Stack[-2] = (bool) 0
0x2e9: Return(); Pop(0)

0x2ea: PushEmpty(int, int)
0x2eb: Push("branch")
0x2ec: @ GetVariable(Stack[-1], Stack[-2])
0x2ed: Pop(1)
0x2ee: Push((int) 0)
0x2ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f1: Stack[-3] = (int) 1
0x2f2: Return(); Pop(2)

0x2f3: GOTO 0x2f9

0x2f4: Push((int) 1)
0x2f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f7: Stack[-3] = (int) 2
0x2f8: Return(); Pop(2)

0x2f9: Stack[-3] = (int) 3
0x2fa: Return(); Pop(2)

0x2fb: Stack[-1] = (int) 515527
0x2fc: Return(); Pop(0)

0x2fd: Stack[-1] = (int) 513334
0x2fe: Return(); Pop(0)

0x2ff: Stack[-1] = "ui/NPC_Aglaja.png"
0x300: Return(); Pop(0)

0x301: Stack[-1] = "ui/NPC_Aglaja_b.png"
0x302: Return(); Pop(0)

0x303: Stack[-1] = (bool) 1
0x304: Return(); Pop(0)

