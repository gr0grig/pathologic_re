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
	ui/NPC_wmask.png
	ui/NPC_wmask_b.png
	quest_k1_01
	remove_whitemask
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
	Trigger (2 args)
	HasAnimation (3 args)
	GetVariable (2 args)

RunOp = 0x19b
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x1a5 Vars = (object)
		EVENT_7 Op = 0x1de Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x266

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x304

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x302

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x306

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x308

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x32b

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
0x41: Call2 0x2aa

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

0x50: PushEmpty(object, object)
0x51: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53: Call2 0x324

0x54: Pop(2)
0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x89

0x58: Pop(1)
0x59: Push((int) 525998)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 525999)
0x5f: Push((int) 27287)
0x60: Push((int) 27286)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 526018)
0x64: Push((int) 27307)
0x65: Push((int) 27306)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x30a

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x2bb

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
0x8b: Call2 0x30a

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
0x9b: Call2 0x2cb

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x2e5

0xa4: Pop(0)
0xa5: Push((int) 27285)
0xa6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x324

0xac: Pop(2)
0xad: PushEmpty(string)
0xae: Stack[-1] = "Neutral"
0xaf: Call2 0x89

0xb0: Pop(1)
0xb1: Push((int) 525998)
0xb2: @@ SetMessage(Stack[-1])
0xb3: Pop(1)
0xb4: @@ ClearReplies()
0xb5: Pop(0)
0xb6: Push((int) 525999)
0xb7: Push((int) 27287)
0xb8: Push((int) 27286)
0xb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba: Pop(3)
0xbb: Push((int) 526018)
0xbc: Push((int) 27307)
0xbd: Push((int) 27306)
0xbe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf: Pop(3)
0xc0: Return(); Pop(0)

0xc1: Push((int) 27307)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc4: PushEmpty(string)
0xc5: Stack[-1] = "Neutral"
0xc6: Call2 0x89

0xc7: Pop(1)
0xc8: Push((int) 526019)
0xc9: @@ SetMessage(Stack[-1])
0xca: Pop(1)
0xcb: @@ ClearReplies()
0xcc: Pop(0)
0xcd: Push((int) 526020)
0xce: Push((int) 27287)
0xcf: Push((int) 27308)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: Return(); Pop(0)

0xd3: Push((int) 27287)
0xd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xd6: PushEmpty(string)
0xd7: Stack[-1] = "Neutral"
0xd8: Call2 0x89

0xd9: Pop(1)
0xda: Push((int) 526000)
0xdb: @@ SetMessage(Stack[-1])
0xdc: Pop(1)
0xdd: @@ ClearReplies()
0xde: Pop(0)
0xdf: Push((int) 526001)
0xe0: Push((int) 27289)
0xe1: Push((int) 27288)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Push((int) 526243)
0xe5: Push((int) -1)
0xe6: Push((int) 27514)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Return(); Pop(0)

0xea: Push((int) 27289)
0xeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral"
0xef: Call2 0x89

0xf0: Pop(1)
0xf1: Push((int) 526002)
0xf2: @@ SetMessage(Stack[-1])
0xf3: Pop(1)
0xf4: @@ ClearReplies()
0xf5: Pop(0)
0xf6: Push((int) 526003)
0xf7: Push((int) 27291)
0xf8: Push((int) 27290)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Push((int) 526244)
0xfc: Push((int) 27291)
0xfd: Push((int) 27515)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Return(); Pop(0)

0x101: Push((int) 27291)
0x102: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x104: PushEmpty(string)
0x105: Stack[-1] = "Neutral"
0x106: Call2 0x89

0x107: Pop(1)
0x108: Push((int) 526004)
0x109: @@ SetMessage(Stack[-1])
0x10a: Pop(1)
0x10b: @@ ClearReplies()
0x10c: Pop(0)
0x10d: Push((int) 526245)
0x10e: Push((int) 27518)
0x10f: Push((int) 27517)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Push((int) 526009)
0x113: Push((int) 27297)
0x114: Push((int) 27296)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: Push((int) 27297)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Neutral"
0x11d: Call2 0x89

0x11e: Pop(1)
0x11f: Push((int) 526010)
0x120: @@ SetMessage(Stack[-1])
0x121: Pop(1)
0x122: @@ ClearReplies()
0x123: Pop(0)
0x124: Push((int) 526249)
0x125: Push((int) 27518)
0x126: Push((int) 27521)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Return(); Pop(0)

0x12a: Push((int) 27518)
0x12b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x12d: PushEmpty(string)
0x12e: Stack[-1] = "Neutral"
0x12f: Call2 0x89

0x130: Pop(1)
0x131: Push((int) 526246)
0x132: @@ SetMessage(Stack[-1])
0x133: Pop(1)
0x134: @@ ClearReplies()
0x135: Pop(0)
0x136: Push((int) 526005)
0x137: Push((int) 27293)
0x138: Push((int) 27292)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Push((int) 541743)
0x13c: Push((int) -1)
0x13d: Push((int) 43940)
0x13e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f: Pop(3)
0x140: Return(); Pop(0)

0x141: Push((int) 27293)
0x142: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x143: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x144: PushEmpty(string)
0x145: Stack[-1] = "Neutral"
0x146: Call2 0x89

0x147: Pop(1)
0x148: Push((int) 526006)
0x149: @@ SetMessage(Stack[-1])
0x14a: Pop(1)
0x14b: @@ ClearReplies()
0x14c: Pop(0)
0x14d: Push((int) 526007)
0x14e: Push((int) 27519)
0x14f: Push((int) 27294)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: Push((int) 27519)
0x154: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x156: PushEmpty(string)
0x157: Stack[-1] = "Neutral"
0x158: Call2 0x89

0x159: Pop(1)
0x15a: Push((int) 526247)
0x15b: @@ SetMessage(Stack[-1])
0x15c: Pop(1)
0x15d: @@ ClearReplies()
0x15e: Pop(0)
0x15f: Push((int) 526248)
0x160: Push((int) 27295)
0x161: Push((int) 27520)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Return(); Pop(0)

0x165: Push((int) 27295)
0x166: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x168: PushEmpty(string)
0x169: Stack[-1] = "Neutral"
0x16a: Call2 0x89

0x16b: Pop(1)
0x16c: Push((int) 526008)
0x16d: @@ SetMessage(Stack[-1])
0x16e: Pop(1)
0x16f: @@ ClearReplies()
0x170: Pop(0)
0x171: Push((int) 526011)
0x172: Push((int) 27512)
0x173: Push((int) 27298)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: Return(); Pop(0)

0x177: Push((int) 27512)
0x178: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x17a: PushEmpty(string)
0x17b: Stack[-1] = "Neutral"
0x17c: Call2 0x89

0x17d: Pop(1)
0x17e: Push((int) 526241)
0x17f: @@ SetMessage(Stack[-1])
0x180: Pop(1)
0x181: @@ ClearReplies()
0x182: Pop(0)
0x183: Push((int) 526242)
0x184: Push((int) -1)
0x185: Push((int) 27513)
0x186: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x187: Pop(3)
0x188: Push((int) 526250)
0x189: Push((int) -1)
0x18a: Push((int) 27523)
0x18b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18c: Pop(3)
0x18d: Return(); Pop(0)

0x18e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x18f: PushEmpty(bool)
0x190: Call2 0x30a

0x191: Pop(0)
0x192: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x193: @ lshStopAnimation()
0x194: Pop(0)
0x195: GOTO 0x198

0x196: @ StopAnimation()
0x197: Pop(0)
0x198: Return(); Pop(0)

0x199: GOTO 0xa0

0x19a: Return(); Pop(0)

0x19b: PushEmpty(float, float)
0x19c: Stack[-2] = (int) 300
0x19d: Stack[-1] = (int) 100
0x19e: Call2 0x1b4

0x19f: Pop(2)
0x1a0: Push((int) 3)
0x1a1: @ Sleep(Stack[-1])
0x1a2: Pop(1)
0x1a3: GOTO 0x19b

0x1a4: Return(); Pop(0)

0x1a5: PushEmpty()
0x1a6: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1a7: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a8: Return(); Pop(0)

0x1a9: PushEmpty()
0x1aa: Call2 0x1f5

0x1ab: Pop(0)
0x1ac: PushEmpty(int, object)
0x1ad: Stack[-1] = Stack[-3]
0x1ae: Push(-2, 1); TaskCall(0)
0x1af: Call2 0x0

0x1b0: Pop(-2, 1); TaskReturn
0x1b1: Pop(2)
0x1b2: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1b3: Return(); Pop(0)

0x1b4: PushEmpty()
0x1b5: PushEmpty(bool)
0x1b6: Call2 0x261

0x1b7: Pop(0)
0x1b8: Pop(1); Push((bool) Stack[-1] == 0)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ba: Return(); Pop(0)

0x1bb: Push("player")
0x1bc: @ FindActor(Stack[-4], Stack[-1])
0x1bd: Pop(1)
0x1be: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1bf: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1c0: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1c1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1c2: Push((int) 10)
0x1c3: Push((float)1.0)
0x1c4: @ SetTimer(Stack[-2], Stack[-1])
0x1c5: Pop(2)
0x1c6: PushEmpty()
0x1c7: Call2 0x203

0x1c8: Pop(0)
0x1c9: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cb: Push((int) 10)
0x1cc: @ KillTimer(Stack[-1])
0x1cd: Pop(1)
0x1ce: Return(); Pop(0)

0x1cf: PushEmpty(float, float)
0x1d0: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d2: Stack[-3] = (bool) 0
0x1d3: Return(); Pop(2)

0x1d4: PushEmpty(float, object)
0x1d5: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1d6: Call2 0x259

0x1d7: Pop(1)
0x1d8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1d9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1da: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1db: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1dc: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1dd: Return(); Pop(2)

0x1de: PushEmpty()
0x1df: Push((int) 10)
0x1e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e2: PushEmpty(bool)
0x1e3: Call2 0x1cf

0x1e4: Pop(0)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e6: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e8: PushEmpty(object)
0x1e9: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1ea: Call2 0x2da

0x1eb: Pop(1)
0x1ec: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1ed: GOTO 0x1f4

0x1ee: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f0: Push("head")
0x1f1: @ UnlookAsync(Stack[-1])
0x1f2: Pop(1)
0x1f3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f4: Return(); Pop(0)

0x1f5: PushEmpty()
0x1f6: Call2 0x254

0x1f7: Pop(0)
0x1f8: Push((int) 10)
0x1f9: @ KillTimer(Stack[-1])
0x1fa: Pop(1)
0x1fb: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1fc: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fd: Push("head")
0x1fe: @ UnlookAsync(Stack[-1])
0x1ff: Pop(1)
0x200: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x201: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x202: Return(); Pop(0)

0x203: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x204: @ WaitForAnimEnd()
0x205: Pop(0)
0x206: PushEmpty(bool)
0x207: Call2 0x261

0x208: Pop(0)
0x209: Pop(1); Push((bool) Stack[-1] == 0)
0x20a: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20b: Return(); Pop(14)

0x20c: PushEmpty(int)
0x20d: Call2 0x313

0x20e: Stack[-8] = Stack[-1]
0x20f: Pop(1)
0x210: Stack[-6] = (int) 0
0x211: PushEmpty(bool)
0x212: Stack[-1] = (bool) 0
0x213: Push((int) 5)
0x214: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x216: PushEmpty(bool)
0x217: Call2 0x261

0x218: Pop(0)
0x219: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x21a: Stack[-1] = (bool) 1
0x21b: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x21c: Push((int) 3)
0x21d: @ irand(Stack[-6], Stack[-1])
0x21e: Pop(1)
0x21f: Push((int) 0)
0x220: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x222: Push(Stack[-7])
0x223: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x224: @ irand(Stack[-4], Stack[-7])
0x225: Pop(0)
0x226: Push("all")
0x227: PushEmpty(string, int)
0x228: Stack[-1] = Stack[-7]
0x229: Call2 0x30c

0x22a: Pop(1)
0x22b: @ PlayAnimation(Stack[-2], Stack[-1])
0x22c: Pop(2)
0x22d: @ WaitForAnimEnd(Stack[-3])
0x22e: Pop(0)
0x22f: Pop(0); Push((bool) Stack[-3] == 0)
0x230: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x231: GOTO 0x24f

0x232: GOTO 0x244

0x233: Push((int) 1)
0x234: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x235: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x236: Push((int) 4)
0x237: @ rand(Stack[-3], Stack[-1])
0x238: Pop(1)
0x239: Push((int) 1)
0x23a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x23b: @ Sleep(Stack[-1], Stack[-2])
0x23c: Pop(1)
0x23d: Pop(0); Push((bool) Stack[-1] == 0)
0x23e: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23f: GOTO 0x24f

0x240: GOTO 0x244

0x241: Push(Stack[-6])
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: GOTO 0x24f

0x244: PushEmpty(bool)
0x245: Call2 0x252

0x246: Pop(0)
0x247: Pop(1); Push((bool) Stack[-1] == 0)
0x248: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x249: GOTO 0x24f

0x24a: @ ResetAAS()
0x24b: Pop(0)
0x24c: Push((int) 1)
0x24d: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x24e: GOTO 0x211

0x24f: @ ResetAAS()
0x250: Pop(0)
0x251: Return(); Pop(14)

0x252: Stack[-1] = (bool) 1
0x253: Return(); Pop(0)

0x254: @ StopAnimation()
0x255: Pop(0)
0x256: @ StopGroup0()
0x257: Pop(0)
0x258: Return(); Pop(0)

0x259: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x25a: @ GetPosition(Stack[-3])
0x25b: Pop(0)
0x25c: @@ GetPosition(Stack[-2])
0x25d: Pop(0)
0x25e: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x25f: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x260: Return(); Pop(6)

0x261: PushEmpty(bool, bool)
0x262: @ IsLoaded(Stack[-1])
0x263: Pop(0)
0x264: Stack[-3] = Stack[-1]
0x265: Return(); Pop(2)

0x266: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x267: @@ GetPosition(Stack[-8])
0x268: Pop(0)
0x269: @@ GetEyesHeight(Stack[-9])
0x26a: Pop(0)
0x26b: Push(CvectorIndex(Stack[-8], 1))
0x26c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x26d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x26e: @ GetPosition(Stack[-7])
0x26f: Pop(0)
0x270: @ GetEyesHeight(Stack[-9])
0x271: Pop(0)
0x272: Push(CvectorIndex(Stack[-7], 1))
0x273: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x274: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x275: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x276: Push(CvectorIndex(Stack[-6], 1))
0x277: Stack[-1] = (int) 0
0x278: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x279: Pop(0); Push(Stack[-6] | Stack[-6]);
0x27a: Pop(1); Push(Sqrt(Stack[-1]))
0x27b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x27c: Stack[-5] = -Stack[-6]; Pop(0);
0x27d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x27e: PushEmpty(cvector, cvector)
0x27f: Push(CVector(0.0, 1.0, 0.0))
0x280: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x281: Call2 0x2ec

0x282: Pop(1)
0x283: Push((int) 25)
0x284: Pop(2); Push(Stack[-2] * Stack[-1]);
0x285: Pop(2); Push(Stack[-2] + Stack[-1]);
0x286: Push(CVector(0.0, 10.0, 0.0))
0x287: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x288: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x289: @ IsOverrideActive(Stack[-2])
0x28a: Pop(0)
0x28b: Push(Stack[-2])
0x28c: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28d: Stack[-21] = (bool) 0
0x28e: Return(); Pop(18)

0x28f: @ StopWorld()
0x290: Pop(0)
0x291: @ CameraTransit(Stack[-3], Stack[-5])
0x292: Pop(0)
0x293: Push(CvectorIndex(Stack[-4], 0))
0x294: Push(CvectorIndex(Stack[-5], 2))
0x295: @ Rotate(Stack[-2], Stack[-1])
0x296: Pop(2)
0x297: PushEmpty(bool)
0x298: Call2 0x30a

0x299: Pop(0)
0x29a: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29b: GOTO 0x2a4

0x29c: Push("head")
0x29d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x29e: Pop(1)
0x29f: Push(Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a1: Push("head")
0x2a2: @ LookAsyncCamera(Stack[-1])
0x2a3: Pop(1)
0x2a4: @ CameraWaitForPlayFinish()
0x2a5: Pop(0)
0x2a6: @ ResumeWorld()
0x2a7: Pop(0)
0x2a8: Stack[-21] = (bool) 1
0x2a9: Return(); Pop(18)

0x2aa: PushEmpty(bool, bool)
0x2ab: @ CameraSwitchToNormal()
0x2ac: Pop(0)
0x2ad: PushEmpty(bool)
0x2ae: Call2 0x30a

0x2af: Pop(0)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: GOTO 0x2ba

0x2b2: Push("head")
0x2b3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2b4: Pop(1)
0x2b5: Push(Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b7: Push("head")
0x2b8: @ UnlookAsync(Stack[-1])
0x2b9: Pop(1)
0x2ba: Return(); Pop(2)

0x2bb: PushEmpty(bool, float, float, bool, float, float)
0x2bc: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2bd: Pop(0)
0x2be: Push(Stack[-3])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c0: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2c1: Pop(0)
0x2c2: Push((bool) 0)
0x2c3: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2c4: Pop(1)
0x2c5: GOTO 0x2ca

0x2c6: Push("Can't find lsh animation : ")
0x2c7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2c8: @ Trace(Stack[-1])
0x2c9: Pop(1)
0x2ca: Return(); Pop(6)

0x2cb: PushEmpty(bool, float, float, bool, float, float)
0x2cc: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2cd: Pop(0)
0x2ce: Push(Stack[-3])
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d0: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2d1: Pop(0)
0x2d2: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2d3: Pop(0)
0x2d4: GOTO 0x2d9

0x2d5: Push("Can't find lsh animation : ")
0x2d6: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2d7: @ Trace(Stack[-1])
0x2d8: Pop(1)
0x2d9: Return(); Pop(6)

0x2da: PushEmpty(float, cvector, float, cvector)
0x2db: @@ GetEyesHeight(Stack[-2])
0x2dc: Pop(0)
0x2dd: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2de: Push(CvectorIndex(Stack[-1], 1))
0x2df: Stack[-1] = Stack[-3]
0x2e0: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2e1: Push("head")
0x2e2: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2e3: Pop(1)
0x2e4: Return(); Pop(4)

0x2e5: PushEmpty(bool)
0x2e6: Call2 0x30a

0x2e7: Pop(0)
0x2e8: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e9: @ lshStopSpeech()
0x2ea: Pop(0)
0x2eb: Return(); Pop(0)

0x2ec: PushEmpty(float, float)
0x2ed: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2ee: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2ef: Push((float)0.0)
0x2f0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f2: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2f3: Return(); Pop(2)

0x2f4: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2f5: Return(); Pop(2)

0x2f6: PushEmpty(object, object)
0x2f7: @ FindActor(Stack[-1], Stack[-4])
0x2f8: Pop(0)
0x2f9: Pop(0); Push((bool) Stack[-1] == 0)
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fb: Stack[-5] = (bool) 0
0x2fc: Return(); Pop(2)

0x2fd: @ Trigger(Stack[-1], Stack[-3])
0x2fe: Pop(0)
0x2ff: Stack[-5] = (bool) 1
0x300: Return(); Pop(2)

0x301: Stack[-1] = 0
0x302: Stack[-1] = (int) 515569
0x303: Return(); Pop(0)

0x304: Stack[-1] = (int) 503354
0x305: Return(); Pop(0)

0x306: Stack[-1] = "ui/NPC_wmask.png"
0x307: Return(); Pop(0)

0x308: Stack[-1] = "ui/NPC_wmask_b.png"
0x309: Return(); Pop(0)

0x30a: Stack[-1] = (bool) 0
0x30b: Return(); Pop(0)

0x30c: PushEmpty(string, string)
0x30d: Stack[-1] = "idle"
0x30e: Push(Stack[-3])
0x30f: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x310: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x311: Stack[-4] = Stack[-1]
0x312: Return(); Pop(2)

0x313: PushEmpty(int, bool, int, bool)
0x314: Stack[-2] = (int) 0
0x315: Push("all")
0x316: PushEmpty(string, int)
0x317: Stack[-1] = Stack[-5]
0x318: Call2 0x30c

0x319: Pop(1)
0x31a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x31b: Pop(2)
0x31c: Pop(0); Push((bool) Stack[-1] == 0)
0x31d: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31e: GOTO 0x322

0x31f: Push((int) 1)
0x320: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x321: GOTO 0x315

0x322: Stack[-5] = Stack[-2]
0x323: Return(); Pop(4)

0x324: PushEmpty()
0x325: PushEmpty(bool, string, string)
0x326: Stack[-2] = "quest_k1_01"
0x327: Stack[-1] = "remove_whitemask"
0x328: Call2 0x2f6

0x329: Pop(3)
0x32a: Return(); Pop(0)

0x32b: PushEmpty(int, int)
0x32c: Push("branch")
0x32d: @ GetVariable(Stack[-1], Stack[-2])
0x32e: Pop(1)
0x32f: Push((int) 0)
0x330: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x331: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x332: Stack[-3] = (int) 1
0x333: Return(); Pop(2)

0x334: GOTO 0x33a

0x335: Push((int) 1)
0x336: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x337: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x338: Stack[-3] = (int) 2
0x339: Return(); Pop(2)

0x33a: Stack[-3] = (int) 3
0x33b: Return(); Pop(2)

