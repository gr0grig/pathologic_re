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
0xe: Call2 0x2ff

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2fd

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x301

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x303

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2ec

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
0x31: Call2 0x2c2

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x203

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
0x48: Call2 0x1f1

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
0x59: Call2 0x2e0

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
0x88: Call2 0x305

0x89: Pop(0)
0x8a: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8b: @ lshWaitForAnimEnd()
0x8c: Pop(0)
0x8d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: GOTO 0x95

0x90: PushEmpty(string)
0x91: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x92: Call2 0x28d

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
0xa7: Call2 0x305

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
0xb7: Call2 0x29d

0xb8: Pop(2)
0xb9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: Push((int) 1)
0xbd: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0xbe: PushEmpty()
0xbf: Call2 0x2bb

0xc0: Pop(0)
0xc1: Push((int) 41142)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xc4: PushEmpty(bool, object)
0xc5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Call2 0x2e0

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
0x167: Call2 0x305

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
0x190: Call2 0x2c2

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
0x1a5: Call2 0x2c2

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
0x1c7: Call2 0x2c8

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
0x1d7: Push((bool) 1)
0x1d8: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1d9: Pop(1)
0x1da: Push(CvectorIndex(Stack[-4], 0))
0x1db: Push(CvectorIndex(Stack[-5], 2))
0x1dc: @ Rotate(Stack[-2], Stack[-1])
0x1dd: Pop(2)
0x1de: PushEmpty(bool)
0x1df: Call2 0x305

0x1e0: Pop(0)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e2: GOTO 0x1eb

0x1e3: Push("head")
0x1e4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1e5: Pop(1)
0x1e6: Push(Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e8: Push("head")
0x1e9: @ LookAsyncCamera(Stack[-1])
0x1ea: Pop(1)
0x1eb: @ CameraWaitForPlayFinish()
0x1ec: Pop(0)
0x1ed: @ ResumeWorld()
0x1ee: Pop(0)
0x1ef: Stack[-21] = (bool) 1
0x1f0: Return(); Pop(18)

0x1f1: PushEmpty(bool, bool)
0x1f2: Push((bool) 1)
0x1f3: @ CameraSwitchToNormal(Stack[-1])
0x1f4: Pop(1)
0x1f5: PushEmpty(bool)
0x1f6: Call2 0x305

0x1f7: Pop(0)
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f9: GOTO 0x202

0x1fa: Push("head")
0x1fb: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1fc: Pop(1)
0x1fd: Push(Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1ff: Push("head")
0x200: @ UnlookAsync(Stack[-1])
0x201: Pop(1)
0x202: Return(); Pop(2)

0x203: PushEmpty(int, int, int, int)
0x204: Push("voice_common")
0x205: @ GetVariable(Stack[-1], Stack[-3])
0x206: Pop(1)
0x207: Push(Stack[-2])
0x208: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x209: PushEmpty(bool, object)
0x20a: Stack[-1] = Stack[-7]
0x20b: Call2 0x23d

0x20c: Pop(1)
0x20d: Pop(1); Push((bool) Stack[-1] == 0)
0x20e: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x20f: PushEmpty(bool, object)
0x210: Stack[-1] = Stack[-7]
0x211: Call2 0x262

0x212: Pop(1)
0x213: Pop(1); Push((bool) Stack[-1] == 0)
0x214: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x215: Stack[-6] = (bool) 0
0x216: Return(); Pop(4)

0x217: Push((int) 2)
0x218: @ irand(Stack[-2], Stack[-1])
0x219: Pop(1)
0x21a: Push(Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x21c: Push("voice_common")
0x21d: Push((int) 1)
0x21e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x21f: Push((int) 3)
0x220: Pop(2); Push(Stack[-2] % Stack[-1]);
0x221: @ SetVariable(Stack[-2], Stack[-1])
0x222: Pop(2)
0x223: GOTO 0x228

0x224: Push("voice_common")
0x225: Push((int) 0)
0x226: @ SetVariable(Stack[-2], Stack[-1])
0x227: Pop(2)
0x228: GOTO 0x23b

0x229: PushEmpty(bool, object)
0x22a: Stack[-1] = Stack[-7]
0x22b: Call2 0x262

0x22c: Pop(1)
0x22d: Pop(1); Push((bool) Stack[-1] == 0)
0x22e: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x22f: PushEmpty(bool, object)
0x230: Stack[-1] = Stack[-7]
0x231: Call2 0x23d

0x232: Pop(1)
0x233: Pop(1); Push((bool) Stack[-1] == 0)
0x234: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x235: Stack[-6] = (bool) 0
0x236: Return(); Pop(4)

0x237: Push("voice_common")
0x238: Push((int) 1)
0x239: @ SetVariable(Stack[-2], Stack[-1])
0x23a: Pop(2)
0x23b: Stack[-6] = (bool) 1
0x23c: Return(); Pop(4)

0x23d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x23e: Stack[-5] = "c"
0x23f: Stack[-4] = (int) 0
0x240: Push((int) 1)
0x241: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x242: Push((int) 1)
0x243: Pop(1); Push(Stack[-5] + Stack[-1]);
0x244: Pop(1); Push(Stack[-6] + Stack[-1]);
0x245: @@ HasProperty(Stack[-1], Stack[-4])
0x246: Pop(1)
0x247: Pop(0); Push((bool) Stack[-3] == 0)
0x248: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x249: GOTO 0x24d

0x24a: Push((int) 1)
0x24b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x24c: GOTO 0x240

0x24d: Pop(0); Push((bool) Stack[-4] == 0)
0x24e: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24f: Stack[-12] = (bool) 0
0x250: Return(); Pop(10)

0x251: Stack[-2] = (int) 0
0x252: Push((int) 1)
0x253: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x255: @ irand(Stack[-2], Stack[-4])
0x256: Pop(0)
0x257: Push((int) 1)
0x258: Pop(1); Push(Stack[-3] + Stack[-1]);
0x259: Pop(1); Push(Stack[-6] + Stack[-1]);
0x25a: @@ GetProperty(Stack[-1], Stack[-2])
0x25b: Pop(1)
0x25c: PushEmpty(bool, string)
0x25d: Stack[-1] = Stack[-3]
0x25e: Call2 0x2ac

0x25f: Stack[-14] = Stack[-2]
0x260: Pop(2)
0x261: Return(); Pop(10)

0x262: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x263: Push("d")
0x264: PushEmpty(int)
0x265: Call2 0x2d7

0x266: Pop(0)
0x267: Pop(2); Push(Stack[-2] + Stack[-1]);
0x268: Push("m")
0x269: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x26a: Stack[-4] = (int) 0
0x26b: Push((int) 1)
0x26c: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x26d: Push((int) 1)
0x26e: Pop(1); Push(Stack[-5] + Stack[-1]);
0x26f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x270: @@ HasProperty(Stack[-1], Stack[-4])
0x271: Pop(1)
0x272: Pop(0); Push((bool) Stack[-3] == 0)
0x273: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x274: GOTO 0x278

0x275: Push((int) 1)
0x276: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x277: GOTO 0x26b

0x278: Pop(0); Push((bool) Stack[-4] == 0)
0x279: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27a: Stack[-12] = (bool) 0
0x27b: Return(); Pop(10)

0x27c: Stack[-2] = (int) 0
0x27d: Push((int) 1)
0x27e: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x27f: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x280: @ irand(Stack[-2], Stack[-4])
0x281: Pop(0)
0x282: Push((int) 1)
0x283: Pop(1); Push(Stack[-3] + Stack[-1]);
0x284: Pop(1); Push(Stack[-6] + Stack[-1]);
0x285: @@ GetProperty(Stack[-1], Stack[-2])
0x286: Pop(1)
0x287: PushEmpty(bool, string)
0x288: Stack[-1] = Stack[-3]
0x289: Call2 0x2ac

0x28a: Stack[-14] = Stack[-2]
0x28b: Pop(2)
0x28c: Return(); Pop(10)

0x28d: PushEmpty(bool, float, float, bool, float, float)
0x28e: @ lshHasAnimation(Stack[-3], Stack[-7])
0x28f: Pop(0)
0x290: Push(Stack[-3])
0x291: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x292: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x293: Pop(0)
0x294: Push((bool) 0)
0x295: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x296: Pop(1)
0x297: GOTO 0x29c

0x298: Push("Can't find lsh animation : ")
0x299: Pop(1); Push(Stack[-1] + Stack[-8]);
0x29a: @ Trace(Stack[-1])
0x29b: Pop(1)
0x29c: Return(); Pop(6)

0x29d: PushEmpty(bool, float, float, bool, float, float)
0x29e: @ lshHasAnimation(Stack[-3], Stack[-8])
0x29f: Pop(0)
0x2a0: Push(Stack[-3])
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a2: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2a3: Pop(0)
0x2a4: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2a5: Pop(0)
0x2a6: GOTO 0x2ab

0x2a7: Push("Can't find lsh animation : ")
0x2a8: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2a9: @ Trace(Stack[-1])
0x2aa: Pop(1)
0x2ab: Return(); Pop(6)

0x2ac: PushEmpty(bool, bool)
0x2ad: PushEmpty(bool)
0x2ae: Call2 0x305

0x2af: Pop(0)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b1: @ lshHasSpeech(Stack[-1], Stack[-3])
0x2b2: Pop(0)
0x2b3: Push(Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b5: @ lshPlaySpeech(Stack[-3])
0x2b6: Pop(0)
0x2b7: Stack[-4] = (bool) 1
0x2b8: Return(); Pop(2)

0x2b9: Stack[-4] = (bool) 0
0x2ba: Return(); Pop(2)

0x2bb: PushEmpty(bool)
0x2bc: Call2 0x305

0x2bd: Pop(0)
0x2be: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2bf: @ lshStopSpeech()
0x2c0: Pop(0)
0x2c1: Return(); Pop(0)

0x2c2: PushEmpty(object, object)
0x2c3: @ self(Stack[-1])
0x2c4: Pop(0)
0x2c5: Stack[-3] = Stack[-1]
0x2c6: Return(); Pop(2)

0x2c7: Stack[-1] = 0
0x2c8: PushEmpty(float, float)
0x2c9: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2ca: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2cb: Push((float)0.0)
0x2cc: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2ce: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2cf: Return(); Pop(2)

0x2d0: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2d1: Return(); Pop(2)

0x2d2: PushEmpty(int, int)
0x2d3: @ GetVariable(Stack[-3], Stack[-1])
0x2d4: Pop(0)
0x2d5: Stack[-4] = Stack[-1]
0x2d6: Return(); Pop(2)

0x2d7: PushEmpty(float, float)
0x2d8: @ GetGameTime(Stack[-1])
0x2d9: Pop(0)
0x2da: Push((int) 1)
0x2db: PushEmpty(int)
0x2dc: Push((int) 24)
0x2dd: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x2de: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x2df: Return(); Pop(2)

0x2e0: PushEmpty()
0x2e1: PushEmpty(int, string)
0x2e2: Stack[-1] = "game_final"
0x2e3: Call2 0x2d2

0x2e4: Pop(1)
0x2e5: Push((int) 0)
0x2e6: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x2e7: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e8: Stack[-2] = (bool) 1
0x2e9: Return(); Pop(0)

0x2ea: Stack[-2] = (bool) 0
0x2eb: Return(); Pop(0)

0x2ec: PushEmpty(int, int)
0x2ed: Push("branch")
0x2ee: @ GetVariable(Stack[-1], Stack[-2])
0x2ef: Pop(1)
0x2f0: Push((int) 0)
0x2f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f3: Stack[-3] = (int) 1
0x2f4: Return(); Pop(2)

0x2f5: GOTO 0x2fb

0x2f6: Push((int) 1)
0x2f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2f9: Stack[-3] = (int) 2
0x2fa: Return(); Pop(2)

0x2fb: Stack[-3] = (int) 3
0x2fc: Return(); Pop(2)

0x2fd: Stack[-1] = (int) 515527
0x2fe: Return(); Pop(0)

0x2ff: Stack[-1] = (int) 513334
0x300: Return(); Pop(0)

0x301: Stack[-1] = "ui/NPC_Aglaja.png"
0x302: Return(); Pop(0)

0x303: Stack[-1] = "ui/NPC_Aglaja_b.png"
0x304: Return(); Pop(0)

0x305: Stack[-1] = (bool) 1
0x306: Return(); Pop(0)

