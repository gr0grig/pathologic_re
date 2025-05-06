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
	ood5Whitemask1
	ood5Whitemask2
	branch
	ui/NPC_wmask.png
	ui/NPC_wmask_b.png

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
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x1bc
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa9 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x1c6 Vars = (object)
		EVENT_7 Op = 0x1fb Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x283

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x367

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x365

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x369

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x36b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x354

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
0x41: Call2 0x2c7

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
0x4f: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x93

0x53: Pop(1)
0x54: Push((int) 502916)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x33c

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 502917)
0x5f: Push((int) 3252)
0x60: Push((int) 3243)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: PushEmpty(bool, object)
0x64: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x65: Call2 0x348

0x66: Pop(1)
0x67: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x68: Push((int) 502918)
0x69: Push((int) 3245)
0x6a: Push((int) 3244)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: Push((int) 536324)
0x6e: Push((int) -1)
0x6f: Push((int) 38104)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: GOTO 0x75

0x73: Return(); Pop(0)

0x74: GOTO 0x4e

0x75: PushEmpty(bool)
0x76: Call2 0x36d

0x77: Pop(0)
0x78: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x79: @ lshWaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: PushEmpty(string)
0x7f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x80: Call2 0x2d8

0x81: Pop(1)
0x82: GOTO 0x79

0x83: GOTO 0x92

0x84: Push("all")
0x85: Push("idle")
0x86: @ PlayAnimation(Stack[-2], Stack[-1])
0x87: Pop(2)
0x88: @ WaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: Push("all")
0x8e: Push("idle")
0x8f: @ PlayAnimation(Stack[-2], Stack[-1])
0x90: Pop(2)
0x91: GOTO 0x88

0x92: Return(); Pop(0)

0x93: PushEmpty()
0x94: PushEmpty(bool)
0x95: Call2 0x36d

0x96: Pop(0)
0x97: Pop(1); Push((bool) Stack[-1] == 0)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(0)

0x9a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: Return(); Pop(0)

0x9d: PushEmpty(string, bool)
0x9e: Stack[-2] = Stack[-3]
0x9f: Push("")
0xa0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa1: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa2: Stack[-1] = (bool) 0
0xa3: GOTO 0xa5

0xa4: Stack[-1] = (bool) 1
0xa5: Call2 0x2e8

0xa6: Pop(2)
0xa7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: Push((int) 1)
0xab: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0xac: PushEmpty()
0xad: Call2 0x302

0xae: Pop(0)
0xaf: Push((int) 3243)
0xb0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb2: PushEmpty(object, object)
0xb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5: Call2 0x330

0xb6: Pop(2)
0xb7: Push((int) 3244)
0xb8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xba: PushEmpty(object, object)
0xbb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd: Call2 0x336

0xbe: Pop(2)
0xbf: Push((int) 3242)
0xc0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xc2: PushEmpty(string)
0xc3: Stack[-1] = "Neutral"
0xc4: Call2 0x93

0xc5: Pop(1)
0xc6: Push((int) 502916)
0xc7: @@ SetMessage(Stack[-1])
0xc8: Pop(1)
0xc9: @@ ClearReplies()
0xca: Pop(0)
0xcb: PushEmpty(bool, object)
0xcc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Call2 0x33c

0xce: Pop(1)
0xcf: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd0: Push((int) 502917)
0xd1: Push((int) 3252)
0xd2: Push((int) 3243)
0xd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4: Pop(3)
0xd5: PushEmpty(bool, object)
0xd6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Call2 0x348

0xd8: Pop(1)
0xd9: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xda: Push((int) 502918)
0xdb: Push((int) 3245)
0xdc: Push((int) 3244)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Push((int) 536324)
0xe0: Push((int) -1)
0xe1: Push((int) 38104)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Return(); Pop(0)

0xe5: Push((int) 3245)
0xe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral"
0xea: Call2 0x93

0xeb: Pop(1)
0xec: Push((int) 502919)
0xed: @@ SetMessage(Stack[-1])
0xee: Pop(1)
0xef: @@ ClearReplies()
0xf0: Pop(0)
0xf1: Push((int) 502920)
0xf2: Push((int) 3247)
0xf3: Push((int) 3246)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Push((int) 502922)
0xf7: Push((int) 3249)
0xf8: Push((int) 3248)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Push((int) 3249)
0xfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Neutral"
0x101: Call2 0x93

0x102: Pop(1)
0x103: Push((int) 502923)
0x104: @@ SetMessage(Stack[-1])
0x105: Pop(1)
0x106: @@ ClearReplies()
0x107: Pop(0)
0x108: Push((int) 502924)
0x109: Push((int) -1)
0x10a: Push((int) 3250)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Push((int) 502925)
0x10e: Push((int) -1)
0x10f: Push((int) 3251)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Push((int) 3247)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x116: PushEmpty(string)
0x117: Stack[-1] = "Neutral"
0x118: Call2 0x93

0x119: Pop(1)
0x11a: Push((int) 502921)
0x11b: @@ SetMessage(Stack[-1])
0x11c: Pop(1)
0x11d: @@ ClearReplies()
0x11e: Pop(0)
0x11f: Push((int) 515526)
0x120: Push((int) -1)
0x121: Push((int) 16622)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Return(); Pop(0)

0x125: Push((int) 3252)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x128: PushEmpty(string)
0x129: Stack[-1] = "Neutral"
0x12a: Call2 0x93

0x12b: Pop(1)
0x12c: Push((int) 502926)
0x12d: @@ SetMessage(Stack[-1])
0x12e: Pop(1)
0x12f: @@ ClearReplies()
0x130: Pop(0)
0x131: Push((int) 502927)
0x132: Push((int) 3258)
0x133: Push((int) 3253)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Push((int) 502928)
0x137: Push((int) 3255)
0x138: Push((int) 3254)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Return(); Pop(0)

0x13c: Push((int) 3255)
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Neutral"
0x141: Call2 0x93

0x142: Pop(1)
0x143: Push((int) 502929)
0x144: @@ SetMessage(Stack[-1])
0x145: Pop(1)
0x146: @@ ClearReplies()
0x147: Pop(0)
0x148: Push((int) 502931)
0x149: Push((int) 3258)
0x14a: Push((int) 3257)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Push((int) 502930)
0x14e: Push((int) -1)
0x14f: Push((int) 3256)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: Push((int) 3258)
0x154: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x156: PushEmpty(string)
0x157: Stack[-1] = "Neutral"
0x158: Call2 0x93

0x159: Pop(1)
0x15a: Push((int) 502932)
0x15b: @@ SetMessage(Stack[-1])
0x15c: Pop(1)
0x15d: @@ ClearReplies()
0x15e: Pop(0)
0x15f: Push((int) 502938)
0x160: Push((int) 3265)
0x161: Push((int) 3264)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Push((int) 502934)
0x165: Push((int) 3261)
0x166: Push((int) 3260)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Push((int) 502933)
0x16a: Push((int) -1)
0x16b: Push((int) 3259)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Return(); Pop(0)

0x16f: Push((int) 3261)
0x170: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x172: PushEmpty(string)
0x173: Stack[-1] = "Neutral"
0x174: Call2 0x93

0x175: Pop(1)
0x176: Push((int) 502935)
0x177: @@ SetMessage(Stack[-1])
0x178: Pop(1)
0x179: @@ ClearReplies()
0x17a: Pop(0)
0x17b: Push((int) 502936)
0x17c: Push((int) -1)
0x17d: Push((int) 3262)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Push((int) 502937)
0x181: Push((int) -1)
0x182: Push((int) 3263)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Return(); Pop(0)

0x186: Push((int) 3265)
0x187: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x189: PushEmpty(string)
0x18a: Stack[-1] = "Neutral"
0x18b: Call2 0x93

0x18c: Pop(1)
0x18d: Push((int) 502939)
0x18e: @@ SetMessage(Stack[-1])
0x18f: Pop(1)
0x190: @@ ClearReplies()
0x191: Pop(0)
0x192: Push((int) 502940)
0x193: Push((int) 3261)
0x194: Push((int) 3266)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Push((int) 502941)
0x198: Push((int) 3269)
0x199: Push((int) 3267)
0x19a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19b: Pop(3)
0x19c: Return(); Pop(0)

0x19d: Push((int) 3269)
0x19e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a0: PushEmpty(string)
0x1a1: Stack[-1] = "Neutral"
0x1a2: Call2 0x93

0x1a3: Pop(1)
0x1a4: Push((int) 502942)
0x1a5: @@ SetMessage(Stack[-1])
0x1a6: Pop(1)
0x1a7: @@ ClearReplies()
0x1a8: Pop(0)
0x1a9: Push((int) 502943)
0x1aa: Push((int) -1)
0x1ab: Push((int) 3270)
0x1ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ad: Pop(3)
0x1ae: Return(); Pop(0)

0x1af: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1b0: PushEmpty(bool)
0x1b1: Call2 0x36d

0x1b2: Pop(0)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b4: @ lshStopAnimation()
0x1b5: Pop(0)
0x1b6: GOTO 0x1b9

0x1b7: @ StopAnimation()
0x1b8: Pop(0)
0x1b9: Return(); Pop(0)

0x1ba: GOTO 0xaa

0x1bb: Return(); Pop(0)

0x1bc: Push((int) 1)
0x1bd: @ Sleep(Stack[-1])
0x1be: Pop(1)
0x1bf: PushEmpty(float, float)
0x1c0: Stack[-2] = (int) 300
0x1c1: Stack[-1] = (int) 100
0x1c2: Call2 0x1d1

0x1c3: Pop(2)
0x1c4: GOTO 0x1bc

0x1c5: Return(); Pop(0)

0x1c6: PushEmpty()
0x1c7: PushEmpty()
0x1c8: Call2 0x212

0x1c9: Pop(0)
0x1ca: PushEmpty(int, object)
0x1cb: Stack[-1] = Stack[-3]
0x1cc: Push(-2, 1); TaskCall(0)
0x1cd: Call2 0x0

0x1ce: Pop(-2, 1); TaskReturn
0x1cf: Pop(2)
0x1d0: Return(); Pop(0)

0x1d1: PushEmpty()
0x1d2: PushEmpty(bool)
0x1d3: Call2 0x27e

0x1d4: Pop(0)
0x1d5: Pop(1); Push((bool) Stack[-1] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d7: Return(); Pop(0)

0x1d8: Push("player")
0x1d9: @ FindActor(Stack[-4], Stack[-1])
0x1da: Pop(1)
0x1db: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1dc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1dd: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1de: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1df: Push((int) 10)
0x1e0: Push((float)1.0)
0x1e1: @ SetTimer(Stack[-2], Stack[-1])
0x1e2: Pop(2)
0x1e3: PushEmpty()
0x1e4: Call2 0x220

0x1e5: Pop(0)
0x1e6: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e8: Push((int) 10)
0x1e9: @ KillTimer(Stack[-1])
0x1ea: Pop(1)
0x1eb: Return(); Pop(0)

0x1ec: PushEmpty(float, float)
0x1ed: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ef: Stack[-3] = (bool) 0
0x1f0: Return(); Pop(2)

0x1f1: PushEmpty(float, object)
0x1f2: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1f3: Call2 0x276

0x1f4: Pop(1)
0x1f5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1f6: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1f7: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f8: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1f9: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1fa: Return(); Pop(2)

0x1fb: PushEmpty()
0x1fc: Push((int) 10)
0x1fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x1ff: PushEmpty(bool)
0x200: Call2 0x1ec

0x201: Pop(0)
0x202: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x203: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x204: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x205: PushEmpty(object)
0x206: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x207: Call2 0x2f7

0x208: Pop(1)
0x209: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x20a: GOTO 0x211

0x20b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x20c: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20d: Push("head")
0x20e: @ UnlookAsync(Stack[-1])
0x20f: Pop(1)
0x210: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x211: Return(); Pop(0)

0x212: PushEmpty()
0x213: Call2 0x271

0x214: Pop(0)
0x215: Push((int) 10)
0x216: @ KillTimer(Stack[-1])
0x217: Pop(1)
0x218: Push( Stack[2 + Tasks[-1].StackPointer] )
0x219: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21a: Push("head")
0x21b: @ UnlookAsync(Stack[-1])
0x21c: Pop(1)
0x21d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x21e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x21f: Return(); Pop(0)

0x220: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x221: @ WaitForAnimEnd()
0x222: Pop(0)
0x223: PushEmpty(bool)
0x224: Call2 0x27e

0x225: Pop(0)
0x226: Pop(1); Push((bool) Stack[-1] == 0)
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: Return(); Pop(14)

0x229: PushEmpty(int)
0x22a: Call2 0x31f

0x22b: Stack[-8] = Stack[-1]
0x22c: Pop(1)
0x22d: Stack[-6] = (int) 0
0x22e: PushEmpty(bool)
0x22f: Stack[-1] = (bool) 0
0x230: Push((int) 5)
0x231: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x232: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x233: PushEmpty(bool)
0x234: Call2 0x27e

0x235: Pop(0)
0x236: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x237: Stack[-1] = (bool) 1
0x238: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x239: Push((int) 3)
0x23a: @ irand(Stack[-6], Stack[-1])
0x23b: Pop(1)
0x23c: Push((int) 0)
0x23d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x23f: Push(Stack[-7])
0x240: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x241: @ irand(Stack[-4], Stack[-7])
0x242: Pop(0)
0x243: Push("all")
0x244: PushEmpty(string, int)
0x245: Stack[-1] = Stack[-7]
0x246: Call2 0x318

0x247: Pop(1)
0x248: @ PlayAnimation(Stack[-2], Stack[-1])
0x249: Pop(2)
0x24a: @ WaitForAnimEnd(Stack[-3])
0x24b: Pop(0)
0x24c: Pop(0); Push((bool) Stack[-3] == 0)
0x24d: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24e: GOTO 0x26c

0x24f: GOTO 0x261

0x250: Push((int) 1)
0x251: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x253: Push((int) 4)
0x254: @ rand(Stack[-3], Stack[-1])
0x255: Pop(1)
0x256: Push((int) 1)
0x257: Pop(1); Push(Stack[-3] + Stack[-1]);
0x258: @ Sleep(Stack[-1], Stack[-2])
0x259: Pop(1)
0x25a: Pop(0); Push((bool) Stack[-1] == 0)
0x25b: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25c: GOTO 0x26c

0x25d: GOTO 0x261

0x25e: Push(Stack[-6])
0x25f: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x260: GOTO 0x26c

0x261: PushEmpty(bool)
0x262: Call2 0x26f

0x263: Pop(0)
0x264: Pop(1); Push((bool) Stack[-1] == 0)
0x265: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x266: GOTO 0x26c

0x267: @ ResetAAS()
0x268: Pop(0)
0x269: Push((int) 1)
0x26a: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x26b: GOTO 0x22e

0x26c: @ ResetAAS()
0x26d: Pop(0)
0x26e: Return(); Pop(14)

0x26f: Stack[-1] = (bool) 1
0x270: Return(); Pop(0)

0x271: @ StopAnimation()
0x272: Pop(0)
0x273: @ StopGroup0()
0x274: Pop(0)
0x275: Return(); Pop(0)

0x276: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x277: @ GetPosition(Stack[-3])
0x278: Pop(0)
0x279: @@ GetPosition(Stack[-2])
0x27a: Pop(0)
0x27b: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x27c: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x27d: Return(); Pop(6)

0x27e: PushEmpty(bool, bool)
0x27f: @ IsLoaded(Stack[-1])
0x280: Pop(0)
0x281: Stack[-3] = Stack[-1]
0x282: Return(); Pop(2)

0x283: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x284: @@ GetPosition(Stack[-8])
0x285: Pop(0)
0x286: @@ GetEyesHeight(Stack[-9])
0x287: Pop(0)
0x288: Push(CvectorIndex(Stack[-8], 1))
0x289: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x28a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x28b: @ GetPosition(Stack[-7])
0x28c: Pop(0)
0x28d: @ GetEyesHeight(Stack[-9])
0x28e: Pop(0)
0x28f: Push(CvectorIndex(Stack[-7], 1))
0x290: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x291: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x292: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x293: Push(CvectorIndex(Stack[-6], 1))
0x294: Stack[-1] = (int) 0
0x295: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x296: Pop(0); Push(Stack[-6] | Stack[-6]);
0x297: Pop(1); Push(Sqrt(Stack[-1]))
0x298: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x299: Stack[-5] = -Stack[-6]; Pop(0);
0x29a: Pop(0); Push(Stack[-6] * Stack[-19]);
0x29b: PushEmpty(cvector, cvector)
0x29c: Push(CVector(0.0, 1.0, 0.0))
0x29d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x29e: Call2 0x309

0x29f: Pop(1)
0x2a0: Push((int) 25)
0x2a1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2a2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2a3: Push(CVector(0.0, 10.0, 0.0))
0x2a4: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2a5: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2a6: @ IsOverrideActive(Stack[-2])
0x2a7: Pop(0)
0x2a8: Push(Stack[-2])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2aa: Stack[-21] = (bool) 0
0x2ab: Return(); Pop(18)

0x2ac: @ StopWorld()
0x2ad: Pop(0)
0x2ae: @ CameraTransit(Stack[-3], Stack[-5])
0x2af: Pop(0)
0x2b0: Push(CvectorIndex(Stack[-4], 0))
0x2b1: Push(CvectorIndex(Stack[-5], 2))
0x2b2: @ Rotate(Stack[-2], Stack[-1])
0x2b3: Pop(2)
0x2b4: PushEmpty(bool)
0x2b5: Call2 0x36d

0x2b6: Pop(0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b8: GOTO 0x2c1

0x2b9: Push("head")
0x2ba: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2bb: Pop(1)
0x2bc: Push(Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2be: Push("head")
0x2bf: @ LookAsyncCamera(Stack[-1])
0x2c0: Pop(1)
0x2c1: @ CameraWaitForPlayFinish()
0x2c2: Pop(0)
0x2c3: @ ResumeWorld()
0x2c4: Pop(0)
0x2c5: Stack[-21] = (bool) 1
0x2c6: Return(); Pop(18)

0x2c7: PushEmpty(bool, bool)
0x2c8: @ CameraSwitchToNormal()
0x2c9: Pop(0)
0x2ca: PushEmpty(bool)
0x2cb: Call2 0x36d

0x2cc: Pop(0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ce: GOTO 0x2d7

0x2cf: Push("head")
0x2d0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2d1: Pop(1)
0x2d2: Push(Stack[-1])
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d4: Push("head")
0x2d5: @ UnlookAsync(Stack[-1])
0x2d6: Pop(1)
0x2d7: Return(); Pop(2)

0x2d8: PushEmpty(bool, float, float, bool, float, float)
0x2d9: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2da: Pop(0)
0x2db: Push(Stack[-3])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2dd: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2de: Pop(0)
0x2df: Push((bool) 0)
0x2e0: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2e1: Pop(1)
0x2e2: GOTO 0x2e7

0x2e3: Push("Can't find lsh animation : ")
0x2e4: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2e5: @ Trace(Stack[-1])
0x2e6: Pop(1)
0x2e7: Return(); Pop(6)

0x2e8: PushEmpty(bool, float, float, bool, float, float)
0x2e9: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2ea: Pop(0)
0x2eb: Push(Stack[-3])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ed: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2ee: Pop(0)
0x2ef: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2f0: Pop(0)
0x2f1: GOTO 0x2f6

0x2f2: Push("Can't find lsh animation : ")
0x2f3: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2f4: @ Trace(Stack[-1])
0x2f5: Pop(1)
0x2f6: Return(); Pop(6)

0x2f7: PushEmpty(float, cvector, float, cvector)
0x2f8: @@ GetEyesHeight(Stack[-2])
0x2f9: Pop(0)
0x2fa: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2fb: Push(CvectorIndex(Stack[-1], 1))
0x2fc: Stack[-1] = Stack[-3]
0x2fd: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2fe: Push("head")
0x2ff: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x300: Pop(1)
0x301: Return(); Pop(4)

0x302: PushEmpty(bool)
0x303: Call2 0x36d

0x304: Pop(0)
0x305: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x306: @ lshStopSpeech()
0x307: Pop(0)
0x308: Return(); Pop(0)

0x309: PushEmpty(float, float)
0x30a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x30b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x30c: Push((float)0.0)
0x30d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x30f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x310: Return(); Pop(2)

0x311: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x312: Return(); Pop(2)

0x313: PushEmpty(int, int)
0x314: @ GetVariable(Stack[-3], Stack[-1])
0x315: Pop(0)
0x316: Stack[-4] = Stack[-1]
0x317: Return(); Pop(2)

0x318: PushEmpty(string, string)
0x319: Stack[-1] = "idle"
0x31a: Push(Stack[-3])
0x31b: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x31d: Stack[-4] = Stack[-1]
0x31e: Return(); Pop(2)

0x31f: PushEmpty(int, bool, int, bool)
0x320: Stack[-2] = (int) 0
0x321: Push("all")
0x322: PushEmpty(string, int)
0x323: Stack[-1] = Stack[-5]
0x324: Call2 0x318

0x325: Pop(1)
0x326: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x327: Pop(2)
0x328: Pop(0); Push((bool) Stack[-1] == 0)
0x329: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x32a: GOTO 0x32e

0x32b: Push((int) 1)
0x32c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x32d: GOTO 0x321

0x32e: Stack[-5] = Stack[-2]
0x32f: Return(); Pop(4)

0x330: PushEmpty()
0x331: Push("ood5Whitemask1")
0x332: Push((int) 1)
0x333: @ SetVariable(Stack[-2], Stack[-1])
0x334: Pop(2)
0x335: Return(); Pop(0)

0x336: PushEmpty()
0x337: Push("ood5Whitemask2")
0x338: Push((int) 1)
0x339: @ SetVariable(Stack[-2], Stack[-1])
0x33a: Pop(2)
0x33b: Return(); Pop(0)

0x33c: PushEmpty()
0x33d: PushEmpty(int, string)
0x33e: Stack[-1] = "ood5Whitemask1"
0x33f: Call2 0x313

0x340: Pop(1)
0x341: Push((int) 0)
0x342: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x344: Stack[-2] = (bool) 1
0x345: Return(); Pop(0)

0x346: Stack[-2] = (bool) 0
0x347: Return(); Pop(0)

0x348: PushEmpty()
0x349: PushEmpty(int, string)
0x34a: Stack[-1] = "ood5Whitemask2"
0x34b: Call2 0x313

0x34c: Pop(1)
0x34d: Push((int) 0)
0x34e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x34f: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x350: Stack[-2] = (bool) 1
0x351: Return(); Pop(0)

0x352: Stack[-2] = (bool) 0
0x353: Return(); Pop(0)

0x354: PushEmpty(int, int)
0x355: Push("branch")
0x356: @ GetVariable(Stack[-1], Stack[-2])
0x357: Pop(1)
0x358: Push((int) 0)
0x359: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35a: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x35b: Stack[-3] = (int) 1
0x35c: Return(); Pop(2)

0x35d: GOTO 0x363

0x35e: Push((int) 1)
0x35f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x360: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x361: Stack[-3] = (int) 2
0x362: Return(); Pop(2)

0x363: Stack[-3] = (int) 3
0x364: Return(); Pop(2)

0x365: Stack[-1] = (int) 515569
0x366: Return(); Pop(0)

0x367: Stack[-1] = (int) 503354
0x368: Return(); Pop(0)

0x369: Stack[-1] = "ui/NPC_wmask.png"
0x36a: Return(); Pop(0)

0x36b: Stack[-1] = "ui/NPC_wmask_b.png"
0x36c: Return(); Pop(0)

0x36d: Stack[-1] = (bool) 0
0x36e: Return(); Pop(0)

