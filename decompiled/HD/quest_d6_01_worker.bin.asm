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
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png
	ood6Worker1
	branch

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
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x11b
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x127 Vars = (object)
		EVENT_7 Op = 0x15c Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1e4

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x295

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x293

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x297

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x299

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2af

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
0x41: Call2 0x229

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
0x4f: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x89

0x53: Pop(1)
0x54: Push((int) 503950)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x2a3

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 503951)
0x5f: Push((int) 4304)
0x60: Push((int) 4302)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 503952)
0x64: Push((int) -1)
0x65: Push((int) 4303)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x29b

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x23b

0x77: Pop(1)
0x78: GOTO 0x6f

0x79: GOTO 0x88

0x7a: Push("all")
0x7b: Push("idle")
0x7c: @ PlayAnimation(Stack[-2], Stack[-1])
0x7d: Pop(2)
0x7e: @ WaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: Push("all")
0x84: Push("idle")
0x85: @ PlayAnimation(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: GOTO 0x7e

0x88: Return(); Pop(0)

0x89: PushEmpty()
0x8a: PushEmpty(bool)
0x8b: Call2 0x29b

0x8c: Pop(0)
0x8d: Pop(1); Push((bool) Stack[-1] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Return(); Pop(0)

0x90: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Return(); Pop(0)

0x93: PushEmpty(string, bool)
0x94: Stack[-2] = Stack[-3]
0x95: Push("")
0x96: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x98: Stack[-1] = (bool) 0
0x99: GOTO 0x9b

0x9a: Stack[-1] = (bool) 1
0x9b: Call2 0x24b

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x265

0xa4: Pop(0)
0xa5: Push((int) 4302)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x29d

0xac: Pop(2)
0xad: Push((int) 4301)
0xae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xb0: PushEmpty(string)
0xb1: Stack[-1] = "Neutral"
0xb2: Call2 0x89

0xb3: Pop(1)
0xb4: Push((int) 503950)
0xb5: @@ SetMessage(Stack[-1])
0xb6: Pop(1)
0xb7: @@ ClearReplies()
0xb8: Pop(0)
0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x2a3

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 503951)
0xbf: Push((int) 4304)
0xc0: Push((int) 4302)
0xc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2: Pop(3)
0xc3: Push((int) 503952)
0xc4: Push((int) -1)
0xc5: Push((int) 4303)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Push((int) 4304)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call2 0x89

0xcf: Pop(1)
0xd0: Push((int) 503953)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: Push((int) 503954)
0xd6: Push((int) 4306)
0xd7: Push((int) 4305)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Push((int) 503957)
0xdb: Push((int) 4309)
0xdc: Push((int) 4308)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Return(); Pop(0)

0xe0: Push((int) 4309)
0xe1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xe3: PushEmpty(string)
0xe4: Stack[-1] = "Neutral"
0xe5: Call2 0x89

0xe6: Pop(1)
0xe7: Push((int) 503958)
0xe8: @@ SetMessage(Stack[-1])
0xe9: Pop(1)
0xea: @@ ClearReplies()
0xeb: Pop(0)
0xec: Push((int) 503959)
0xed: Push((int) -1)
0xee: Push((int) 4310)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Push((int) 503960)
0xf2: Push((int) 4306)
0xf3: Push((int) 4311)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Return(); Pop(0)

0xf7: Push((int) 4306)
0xf8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0xfa: PushEmpty(string)
0xfb: Stack[-1] = "Neutral"
0xfc: Call2 0x89

0xfd: Pop(1)
0xfe: Push((int) 503955)
0xff: @@ SetMessage(Stack[-1])
0x100: Pop(1)
0x101: @@ ClearReplies()
0x102: Pop(0)
0x103: Push((int) 503956)
0x104: Push((int) -1)
0x105: Push((int) 4307)
0x106: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107: Pop(3)
0x108: Push((int) 503961)
0x109: Push((int) -1)
0x10a: Push((int) 4313)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Return(); Pop(0)

0x10e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x10f: PushEmpty(bool)
0x110: Call2 0x29b

0x111: Pop(0)
0x112: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x113: @ lshStopAnimation()
0x114: Pop(0)
0x115: GOTO 0x118

0x116: @ StopAnimation()
0x117: Pop(0)
0x118: Return(); Pop(0)

0x119: GOTO 0xa0

0x11a: Return(); Pop(0)

0x11b: Push((bool) 1)
0x11c: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x11d: Push((int) 1)
0x11e: @ Sleep(Stack[-1])
0x11f: Pop(1)
0x120: PushEmpty(float, float)
0x121: Stack[-2] = (int) 300
0x122: Stack[-1] = (int) 100
0x123: Call2 0x132

0x124: Pop(2)
0x125: GOTO 0x11b

0x126: Return(); Pop(0)

0x127: PushEmpty()
0x128: PushEmpty()
0x129: Call2 0x173

0x12a: Pop(0)
0x12b: PushEmpty(int, object)
0x12c: Stack[-1] = Stack[-3]
0x12d: Push(-2, 1); TaskCall(0)
0x12e: Call2 0x0

0x12f: Pop(-2, 1); TaskReturn
0x130: Pop(2)
0x131: Return(); Pop(0)

0x132: PushEmpty()
0x133: PushEmpty(bool)
0x134: Call2 0x1df

0x135: Pop(0)
0x136: Pop(1); Push((bool) Stack[-1] == 0)
0x137: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x138: Return(); Pop(0)

0x139: Push("player")
0x13a: @ FindActor(Stack[-4], Stack[-1])
0x13b: Pop(1)
0x13c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x13d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x13e: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x13f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x140: Push((int) 10)
0x141: Push((float)1.0)
0x142: @ SetTimer(Stack[-2], Stack[-1])
0x143: Pop(2)
0x144: PushEmpty()
0x145: Call2 0x181

0x146: Pop(0)
0x147: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x148: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x149: Push((int) 10)
0x14a: @ KillTimer(Stack[-1])
0x14b: Pop(1)
0x14c: Return(); Pop(0)

0x14d: PushEmpty(float, float)
0x14e: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x14f: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x150: Stack[-3] = (bool) 0
0x151: Return(); Pop(2)

0x152: PushEmpty(float, object)
0x153: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x154: Call2 0x1d7

0x155: Pop(1)
0x156: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x157: Push( Stack[2 + Tasks[-1].StackPointer] )
0x158: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x159: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x15a: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x15b: Return(); Pop(2)

0x15c: PushEmpty()
0x15d: Push((int) 10)
0x15e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x160: PushEmpty(bool)
0x161: Call2 0x14d

0x162: Pop(0)
0x163: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x164: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x165: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x166: PushEmpty(object)
0x167: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x168: Call2 0x25a

0x169: Pop(1)
0x16a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x16b: GOTO 0x172

0x16c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x16d: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16e: Push("head")
0x16f: @ UnlookAsync(Stack[-1])
0x170: Pop(1)
0x171: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x172: Return(); Pop(0)

0x173: PushEmpty()
0x174: Call2 0x1d2

0x175: Pop(0)
0x176: Push((int) 10)
0x177: @ KillTimer(Stack[-1])
0x178: Pop(1)
0x179: Push( Stack[2 + Tasks[-1].StackPointer] )
0x17a: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17b: Push("head")
0x17c: @ UnlookAsync(Stack[-1])
0x17d: Pop(1)
0x17e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x17f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x180: Return(); Pop(0)

0x181: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x182: @ WaitForAnimEnd()
0x183: Pop(0)
0x184: PushEmpty(bool)
0x185: Call2 0x1df

0x186: Pop(0)
0x187: Pop(1); Push((bool) Stack[-1] == 0)
0x188: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x189: Return(); Pop(14)

0x18a: PushEmpty(int)
0x18b: Call2 0x282

0x18c: Stack[-8] = Stack[-1]
0x18d: Pop(1)
0x18e: Stack[-6] = (int) 0
0x18f: PushEmpty(bool)
0x190: Stack[-1] = (bool) 0
0x191: Push((int) 5)
0x192: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x194: PushEmpty(bool)
0x195: Call2 0x1df

0x196: Pop(0)
0x197: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x198: Stack[-1] = (bool) 1
0x199: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x19a: Push((int) 3)
0x19b: @ irand(Stack[-6], Stack[-1])
0x19c: Pop(1)
0x19d: Push((int) 0)
0x19e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1a0: Push(Stack[-7])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1a2: @ irand(Stack[-4], Stack[-7])
0x1a3: Pop(0)
0x1a4: Push("all")
0x1a5: PushEmpty(string, int)
0x1a6: Stack[-1] = Stack[-7]
0x1a7: Call2 0x27b

0x1a8: Pop(1)
0x1a9: @ PlayAnimation(Stack[-2], Stack[-1])
0x1aa: Pop(2)
0x1ab: @ WaitForAnimEnd(Stack[-3])
0x1ac: Pop(0)
0x1ad: Pop(0); Push((bool) Stack[-3] == 0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1af: GOTO 0x1cd

0x1b0: GOTO 0x1c2

0x1b1: Push((int) 1)
0x1b2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1b4: Push((int) 4)
0x1b5: @ rand(Stack[-3], Stack[-1])
0x1b6: Pop(1)
0x1b7: Push((int) 1)
0x1b8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1b9: @ Sleep(Stack[-1], Stack[-2])
0x1ba: Pop(1)
0x1bb: Pop(0); Push((bool) Stack[-1] == 0)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bd: GOTO 0x1cd

0x1be: GOTO 0x1c2

0x1bf: Push(Stack[-6])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1c1: GOTO 0x1cd

0x1c2: PushEmpty(bool)
0x1c3: Call2 0x1d0

0x1c4: Pop(0)
0x1c5: Pop(1); Push((bool) Stack[-1] == 0)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c7: GOTO 0x1cd

0x1c8: @ ResetAAS()
0x1c9: Pop(0)
0x1ca: Push((int) 1)
0x1cb: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1cc: GOTO 0x18f

0x1cd: @ ResetAAS()
0x1ce: Pop(0)
0x1cf: Return(); Pop(14)

0x1d0: Stack[-1] = (bool) 1
0x1d1: Return(); Pop(0)

0x1d2: @ StopAnimation()
0x1d3: Pop(0)
0x1d4: @ StopGroup0()
0x1d5: Pop(0)
0x1d6: Return(); Pop(0)

0x1d7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1d8: @ GetPosition(Stack[-3])
0x1d9: Pop(0)
0x1da: @@ GetPosition(Stack[-2])
0x1db: Pop(0)
0x1dc: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1dd: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1de: Return(); Pop(6)

0x1df: PushEmpty(bool, bool)
0x1e0: @ IsLoaded(Stack[-1])
0x1e1: Pop(0)
0x1e2: Stack[-3] = Stack[-1]
0x1e3: Return(); Pop(2)

0x1e4: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1e5: @@ GetPosition(Stack[-8])
0x1e6: Pop(0)
0x1e7: @@ GetEyesHeight(Stack[-9])
0x1e8: Pop(0)
0x1e9: Push(CvectorIndex(Stack[-8], 1))
0x1ea: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1eb: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1ec: @ GetPosition(Stack[-7])
0x1ed: Pop(0)
0x1ee: @ GetEyesHeight(Stack[-9])
0x1ef: Pop(0)
0x1f0: Push(CvectorIndex(Stack[-7], 1))
0x1f1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1f2: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1f3: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1f4: Push(CvectorIndex(Stack[-6], 1))
0x1f5: Stack[-1] = (int) 0
0x1f6: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1f7: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1f8: Pop(1); Push(Sqrt(Stack[-1]))
0x1f9: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1fa: Stack[-5] = -Stack[-6]; Pop(0);
0x1fb: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1fc: PushEmpty(cvector, cvector)
0x1fd: Push(CVector(0.0, 1.0, 0.0))
0x1fe: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1ff: Call2 0x26c

0x200: Pop(1)
0x201: Push((int) 25)
0x202: Pop(2); Push(Stack[-2] * Stack[-1]);
0x203: Pop(2); Push(Stack[-2] + Stack[-1]);
0x204: Push(CVector(0.0, 10.0, 0.0))
0x205: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x206: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x207: @ IsOverrideActive(Stack[-2])
0x208: Pop(0)
0x209: Push(Stack[-2])
0x20a: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20b: Stack[-21] = (bool) 0
0x20c: Return(); Pop(18)

0x20d: @ StopWorld()
0x20e: Pop(0)
0x20f: Push((bool) 1)
0x210: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x211: Pop(1)
0x212: Push(CvectorIndex(Stack[-4], 0))
0x213: Push(CvectorIndex(Stack[-5], 2))
0x214: @ Rotate(Stack[-2], Stack[-1])
0x215: Pop(2)
0x216: PushEmpty(bool)
0x217: Call2 0x29b

0x218: Pop(0)
0x219: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x21a: GOTO 0x223

0x21b: Push("head")
0x21c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x21d: Pop(1)
0x21e: Push(Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x220: Push("head")
0x221: @ LookAsyncCamera(Stack[-1])
0x222: Pop(1)
0x223: @ CameraWaitForPlayFinish()
0x224: Pop(0)
0x225: @ ResumeWorld()
0x226: Pop(0)
0x227: Stack[-21] = (bool) 1
0x228: Return(); Pop(18)

0x229: PushEmpty(bool, bool)
0x22a: Push((bool) 1)
0x22b: @ CameraSwitchToNormal(Stack[-1])
0x22c: Pop(1)
0x22d: PushEmpty(bool)
0x22e: Call2 0x29b

0x22f: Pop(0)
0x230: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x231: GOTO 0x23a

0x232: Push("head")
0x233: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x234: Pop(1)
0x235: Push(Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x237: Push("head")
0x238: @ UnlookAsync(Stack[-1])
0x239: Pop(1)
0x23a: Return(); Pop(2)

0x23b: PushEmpty(bool, float, float, bool, float, float)
0x23c: @ lshHasAnimation(Stack[-3], Stack[-7])
0x23d: Pop(0)
0x23e: Push(Stack[-3])
0x23f: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x240: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x241: Pop(0)
0x242: Push((bool) 0)
0x243: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x244: Pop(1)
0x245: GOTO 0x24a

0x246: Push("Can't find lsh animation : ")
0x247: Pop(1); Push(Stack[-1] + Stack[-8]);
0x248: @ Trace(Stack[-1])
0x249: Pop(1)
0x24a: Return(); Pop(6)

0x24b: PushEmpty(bool, float, float, bool, float, float)
0x24c: @ lshHasAnimation(Stack[-3], Stack[-8])
0x24d: Pop(0)
0x24e: Push(Stack[-3])
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x251: Pop(0)
0x252: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x253: Pop(0)
0x254: GOTO 0x259

0x255: Push("Can't find lsh animation : ")
0x256: Pop(1); Push(Stack[-1] + Stack[-9]);
0x257: @ Trace(Stack[-1])
0x258: Pop(1)
0x259: Return(); Pop(6)

0x25a: PushEmpty(float, cvector, float, cvector)
0x25b: @@ GetEyesHeight(Stack[-2])
0x25c: Pop(0)
0x25d: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x25e: Push(CvectorIndex(Stack[-1], 1))
0x25f: Stack[-1] = Stack[-3]
0x260: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x261: Push("head")
0x262: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x263: Pop(1)
0x264: Return(); Pop(4)

0x265: PushEmpty(bool)
0x266: Call2 0x29b

0x267: Pop(0)
0x268: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x269: @ lshStopSpeech()
0x26a: Pop(0)
0x26b: Return(); Pop(0)

0x26c: PushEmpty(float, float)
0x26d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x26e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x26f: Push((float)0.0)
0x270: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x271: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x272: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x273: Return(); Pop(2)

0x274: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x275: Return(); Pop(2)

0x276: PushEmpty(int, int)
0x277: @ GetVariable(Stack[-3], Stack[-1])
0x278: Pop(0)
0x279: Stack[-4] = Stack[-1]
0x27a: Return(); Pop(2)

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
0x287: Call2 0x27b

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

0x293: Stack[-1] = (int) 515568
0x294: Return(); Pop(0)

0x295: Stack[-1] = (int) 503353
0x296: Return(); Pop(0)

0x297: Stack[-1] = "ui/NPC_Citizen1.png"
0x298: Return(); Pop(0)

0x299: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x29a: Return(); Pop(0)

0x29b: Stack[-1] = (bool) 0
0x29c: Return(); Pop(0)

0x29d: PushEmpty()
0x29e: Push("ood6Worker1")
0x29f: Push((int) 1)
0x2a0: @ SetVariable(Stack[-2], Stack[-1])
0x2a1: Pop(2)
0x2a2: Return(); Pop(0)

0x2a3: PushEmpty()
0x2a4: PushEmpty(int, string)
0x2a5: Stack[-1] = "ood6Worker1"
0x2a6: Call2 0x276

0x2a7: Pop(1)
0x2a8: Push((int) 0)
0x2a9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ab: Stack[-2] = (bool) 1
0x2ac: Return(); Pop(0)

0x2ad: Stack[-2] = (bool) 0
0x2ae: Return(); Pop(0)

0x2af: PushEmpty(int, int)
0x2b0: Push("branch")
0x2b1: @ GetVariable(Stack[-1], Stack[-2])
0x2b2: Pop(1)
0x2b3: Push((int) 0)
0x2b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b6: Stack[-3] = (int) 1
0x2b7: Return(); Pop(2)

0x2b8: GOTO 0x2be

0x2b9: Push((int) 1)
0x2ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bc: Stack[-3] = (int) 2
0x2bd: Return(); Pop(2)

0x2be: Stack[-3] = (int) 3
0x2bf: Return(); Pop(2)

