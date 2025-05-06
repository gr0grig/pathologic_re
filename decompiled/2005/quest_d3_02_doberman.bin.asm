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
	cleanup
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png
	quest_d3_02
	teleport
	d3q02
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
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
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
	self (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	HasAnimation (3 args)

RunOp = 0xe8
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0xee Vars = (object)
		EVENT_26 Op = 0x11f Vars = (string)
		EVENT_6 Op = 0x127 Vars = ()
		EVENT_7 Op = 0x168 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1f0

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2b1

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2af

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2b3

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2b5

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2cc

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
0x41: Call2 0x234

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
0x54: Push((int) 535420)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x2c0

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 535421)
0x5f: Push((int) 37102)
0x60: Push((int) 37101)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 535424)
0x64: Push((int) -1)
0x65: Push((int) 37104)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x2b7

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x245

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
0x8b: Call2 0x2b7

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
0x9b: Call2 0x255

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x26f

0xa4: Pop(0)
0xa5: Push((int) 37103)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x2b9

0xac: Pop(2)
0xad: Push((int) 37100)
0xae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xb0: PushEmpty(string)
0xb1: Stack[-1] = "Neutral"
0xb2: Call2 0x89

0xb3: Pop(1)
0xb4: Push((int) 535420)
0xb5: @@ SetMessage(Stack[-1])
0xb6: Pop(1)
0xb7: @@ ClearReplies()
0xb8: Pop(0)
0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x2c0

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 535421)
0xbf: Push((int) 37102)
0xc0: Push((int) 37101)
0xc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2: Pop(3)
0xc3: Push((int) 535424)
0xc4: Push((int) -1)
0xc5: Push((int) 37104)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Push((int) 37102)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call2 0x89

0xcf: Pop(1)
0xd0: Push((int) 535422)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: Push((int) 535423)
0xd6: Push((int) -1)
0xd7: Push((int) 37103)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Return(); Pop(0)

0xdb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xdc: PushEmpty(bool)
0xdd: Call2 0x2b7

0xde: Pop(0)
0xdf: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe0: @ lshStopAnimation()
0xe1: Pop(0)
0xe2: GOTO 0xe5

0xe3: @ StopAnimation()
0xe4: Pop(0)
0xe5: Return(); Pop(0)

0xe6: GOTO 0xa0

0xe7: Return(); Pop(0)

0xe8: PushEmpty(float, float)
0xe9: Stack[-2] = (int) 300
0xea: Stack[-1] = (int) 100
0xeb: Call2 0xf9

0xec: Pop(2)
0xed: Return(); Pop(0)

0xee: PushEmpty()
0xef: PushEmpty()
0xf0: Call2 0x17f

0xf1: Pop(0)
0xf2: PushEmpty(int, object)
0xf3: Stack[-1] = Stack[-3]
0xf4: Push(-2, 1); TaskCall(0)
0xf5: Call2 0x0

0xf6: Pop(-2, 1); TaskReturn
0xf7: Pop(2)
0xf8: Return(); Pop(0)

0xf9: PushEmpty(float, bool, float, bool)
0xfa: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0xfb: Push((int) 3)
0xfc: @ rand(Stack[-3], Stack[-1])
0xfd: Pop(1)
0xfe: Push((int) 3)
0xff: Pop(1); Push(Stack[-3] + Stack[-1]);
0x100: @ Sleep(Stack[-1], Stack[-2])
0x101: Pop(1)
0x102: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x103: PushEmpty(float, float)
0x104: Stack[-2] = Stack[-8]
0x105: Stack[-1] = Stack[-7]
0x106: Call2 0x13e

0x107: Pop(2)
0x108: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x109: GOTO 0xfb

0x10a: Return(); Pop(4)

0x10b: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x10c: PushEmpty(bool)
0x10d: Stack[-1] = (bool) 0
0x10e: PushEmpty(bool)
0x10f: Call2 0x1eb

0x110: Pop(0)
0x111: Pop(1); Push((bool) Stack[-1] == 0)
0x112: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x113: PushEmpty(bool)
0x114: Call2 0x13c

0x115: Pop(0)
0x116: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x117: Stack[-1] = (bool) 1
0x118: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x119: PushEmpty(object)
0x11a: Call2 0x276

0x11b: Pop(0)
0x11c: @ RemoveActor(Stack[-1])
0x11d: Pop(1)
0x11e: Return(); Pop(0)

0x11f: PushEmpty()
0x120: Push("cleanup")
0x121: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x123: PushEmpty()
0x124: Call2 0x10b

0x125: Pop(0)
0x126: Return(); Pop(0)

0x127: Push( Stack[6 + Tasks[-1].StackPointer] )
0x128: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x129: PushEmpty()
0x12a: Call2 0x17f

0x12b: Pop(0)
0x12c: PushEmpty(bool)
0x12d: Stack[-1] = (bool) 0
0x12e: Push( Stack[5 + Tasks[-1].StackPointer] )
0x12f: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x130: PushEmpty(bool)
0x131: Call2 0x13c

0x132: Pop(0)
0x133: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x134: Stack[-1] = (bool) 1
0x135: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x136: PushEmpty(object)
0x137: Call2 0x276

0x138: Pop(0)
0x139: @ RemoveActor(Stack[-1])
0x13a: Pop(1)
0x13b: Return(); Pop(0)

0x13c: Stack[-1] = (bool) 1
0x13d: Return(); Pop(0)

0x13e: PushEmpty()
0x13f: PushEmpty(bool)
0x140: Call2 0x1eb

0x141: Pop(0)
0x142: Pop(1); Push((bool) Stack[-1] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x144: Return(); Pop(0)

0x145: Push("player")
0x146: @ FindActor(Stack[-4], Stack[-1])
0x147: Pop(1)
0x148: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x149: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x14a: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x14b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x14c: Push((int) 10)
0x14d: Push((float)1.0)
0x14e: @ SetTimer(Stack[-2], Stack[-1])
0x14f: Pop(2)
0x150: PushEmpty()
0x151: Call2 0x18d

0x152: Pop(0)
0x153: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x154: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x155: Push((int) 10)
0x156: @ KillTimer(Stack[-1])
0x157: Pop(1)
0x158: Return(); Pop(0)

0x159: PushEmpty(float, float)
0x15a: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x15b: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15c: Stack[-3] = (bool) 0
0x15d: Return(); Pop(2)

0x15e: PushEmpty(float, object)
0x15f: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x160: Call2 0x1e3

0x161: Pop(1)
0x162: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x163: Push( Stack[2 + Tasks[-1].StackPointer] )
0x164: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x165: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x166: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x167: Return(); Pop(2)

0x168: PushEmpty()
0x169: Push((int) 10)
0x16a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x16c: PushEmpty(bool)
0x16d: Call2 0x159

0x16e: Pop(0)
0x16f: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x170: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x171: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x172: PushEmpty(object)
0x173: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x174: Call2 0x264

0x175: Pop(1)
0x176: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x177: GOTO 0x17e

0x178: Push( Stack[2 + Tasks[-1].StackPointer] )
0x179: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17a: Push("head")
0x17b: @ UnlookAsync(Stack[-1])
0x17c: Pop(1)
0x17d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x17e: Return(); Pop(0)

0x17f: PushEmpty()
0x180: Call2 0x1de

0x181: Pop(0)
0x182: Push((int) 10)
0x183: @ KillTimer(Stack[-1])
0x184: Pop(1)
0x185: Push( Stack[2 + Tasks[-1].StackPointer] )
0x186: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x187: Push("head")
0x188: @ UnlookAsync(Stack[-1])
0x189: Pop(1)
0x18a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x18b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x18c: Return(); Pop(0)

0x18d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x18e: @ WaitForAnimEnd()
0x18f: Pop(0)
0x190: PushEmpty(bool)
0x191: Call2 0x1eb

0x192: Pop(0)
0x193: Pop(1); Push((bool) Stack[-1] == 0)
0x194: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x195: Return(); Pop(14)

0x196: PushEmpty(int)
0x197: Call2 0x29e

0x198: Stack[-8] = Stack[-1]
0x199: Pop(1)
0x19a: Stack[-6] = (int) 0
0x19b: PushEmpty(bool)
0x19c: Stack[-1] = (bool) 0
0x19d: Push((int) 5)
0x19e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a0: PushEmpty(bool)
0x1a1: Call2 0x1eb

0x1a2: Pop(0)
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: Stack[-1] = (bool) 1
0x1a5: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

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
0x1b3: Call2 0x297

0x1b4: Pop(1)
0x1b5: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b6: Pop(2)
0x1b7: @ WaitForAnimEnd(Stack[-3])
0x1b8: Pop(0)
0x1b9: Pop(0); Push((bool) Stack[-3] == 0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1bb: GOTO 0x1d9

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

0x1c9: GOTO 0x1d9

0x1ca: GOTO 0x1ce

0x1cb: Push(Stack[-6])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cd: GOTO 0x1d9

0x1ce: PushEmpty(bool)
0x1cf: Call2 0x1dc

0x1d0: Pop(0)
0x1d1: Pop(1); Push((bool) Stack[-1] == 0)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d3: GOTO 0x1d9

0x1d4: @ ResetAAS()
0x1d5: Pop(0)
0x1d6: Push((int) 1)
0x1d7: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1d8: GOTO 0x19b

0x1d9: @ ResetAAS()
0x1da: Pop(0)
0x1db: Return(); Pop(14)

0x1dc: Stack[-1] = (bool) 1
0x1dd: Return(); Pop(0)

0x1de: @ StopAnimation()
0x1df: Pop(0)
0x1e0: @ StopGroup0()
0x1e1: Pop(0)
0x1e2: Return(); Pop(0)

0x1e3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1e4: @ GetPosition(Stack[-3])
0x1e5: Pop(0)
0x1e6: @@ GetPosition(Stack[-2])
0x1e7: Pop(0)
0x1e8: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1e9: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1ea: Return(); Pop(6)

0x1eb: PushEmpty(bool, bool)
0x1ec: @ IsLoaded(Stack[-1])
0x1ed: Pop(0)
0x1ee: Stack[-3] = Stack[-1]
0x1ef: Return(); Pop(2)

0x1f0: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1f1: @@ GetPosition(Stack[-8])
0x1f2: Pop(0)
0x1f3: @@ GetEyesHeight(Stack[-9])
0x1f4: Pop(0)
0x1f5: Push(CvectorIndex(Stack[-8], 1))
0x1f6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1f7: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1f8: @ GetPosition(Stack[-7])
0x1f9: Pop(0)
0x1fa: @ GetEyesHeight(Stack[-9])
0x1fb: Pop(0)
0x1fc: Push(CvectorIndex(Stack[-7], 1))
0x1fd: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1fe: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1ff: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x200: Push(CvectorIndex(Stack[-6], 1))
0x201: Stack[-1] = (int) 0
0x202: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x203: Pop(0); Push(Stack[-6] | Stack[-6]);
0x204: Pop(1); Push(Sqrt(Stack[-1]))
0x205: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x206: Stack[-5] = -Stack[-6]; Pop(0);
0x207: Pop(0); Push(Stack[-6] * Stack[-19]);
0x208: PushEmpty(cvector, cvector)
0x209: Push(CVector(0.0, 1.0, 0.0))
0x20a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x20b: Call2 0x27c

0x20c: Pop(1)
0x20d: Push((int) 25)
0x20e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x20f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x210: Push(CVector(0.0, 10.0, 0.0))
0x211: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x212: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x213: @ IsOverrideActive(Stack[-2])
0x214: Pop(0)
0x215: Push(Stack[-2])
0x216: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x217: Stack[-21] = (bool) 0
0x218: Return(); Pop(18)

0x219: @ StopWorld()
0x21a: Pop(0)
0x21b: @ CameraTransit(Stack[-3], Stack[-5])
0x21c: Pop(0)
0x21d: Push(CvectorIndex(Stack[-4], 0))
0x21e: Push(CvectorIndex(Stack[-5], 2))
0x21f: @ Rotate(Stack[-2], Stack[-1])
0x220: Pop(2)
0x221: PushEmpty(bool)
0x222: Call2 0x2b7

0x223: Pop(0)
0x224: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x225: GOTO 0x22e

0x226: Push("head")
0x227: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x228: Pop(1)
0x229: Push(Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22b: Push("head")
0x22c: @ LookAsyncCamera(Stack[-1])
0x22d: Pop(1)
0x22e: @ CameraWaitForPlayFinish()
0x22f: Pop(0)
0x230: @ ResumeWorld()
0x231: Pop(0)
0x232: Stack[-21] = (bool) 1
0x233: Return(); Pop(18)

0x234: PushEmpty(bool, bool)
0x235: @ CameraSwitchToNormal()
0x236: Pop(0)
0x237: PushEmpty(bool)
0x238: Call2 0x2b7

0x239: Pop(0)
0x23a: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23b: GOTO 0x244

0x23c: Push("head")
0x23d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x23e: Pop(1)
0x23f: Push(Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x241: Push("head")
0x242: @ UnlookAsync(Stack[-1])
0x243: Pop(1)
0x244: Return(); Pop(2)

0x245: PushEmpty(bool, float, float, bool, float, float)
0x246: @ lshHasAnimation(Stack[-3], Stack[-7])
0x247: Pop(0)
0x248: Push(Stack[-3])
0x249: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24a: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x24b: Pop(0)
0x24c: Push((bool) 0)
0x24d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x24e: Pop(1)
0x24f: GOTO 0x254

0x250: Push("Can't find lsh animation : ")
0x251: Pop(1); Push(Stack[-1] + Stack[-8]);
0x252: @ Trace(Stack[-1])
0x253: Pop(1)
0x254: Return(); Pop(6)

0x255: PushEmpty(bool, float, float, bool, float, float)
0x256: @ lshHasAnimation(Stack[-3], Stack[-8])
0x257: Pop(0)
0x258: Push(Stack[-3])
0x259: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25a: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x25b: Pop(0)
0x25c: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x25d: Pop(0)
0x25e: GOTO 0x263

0x25f: Push("Can't find lsh animation : ")
0x260: Pop(1); Push(Stack[-1] + Stack[-9]);
0x261: @ Trace(Stack[-1])
0x262: Pop(1)
0x263: Return(); Pop(6)

0x264: PushEmpty(float, cvector, float, cvector)
0x265: @@ GetEyesHeight(Stack[-2])
0x266: Pop(0)
0x267: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x268: Push(CvectorIndex(Stack[-1], 1))
0x269: Stack[-1] = Stack[-3]
0x26a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x26b: Push("head")
0x26c: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x26d: Pop(1)
0x26e: Return(); Pop(4)

0x26f: PushEmpty(bool)
0x270: Call2 0x2b7

0x271: Pop(0)
0x272: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x273: @ lshStopSpeech()
0x274: Pop(0)
0x275: Return(); Pop(0)

0x276: PushEmpty(object, object)
0x277: @ self(Stack[-1])
0x278: Pop(0)
0x279: Stack[-3] = Stack[-1]
0x27a: Return(); Pop(2)

0x27b: Stack[-1] = 0
0x27c: PushEmpty(float, float)
0x27d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x27e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x27f: Push((float)0.0)
0x280: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x282: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x283: Return(); Pop(2)

0x284: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x285: Return(); Pop(2)

0x286: PushEmpty(int, int)
0x287: @ GetVariable(Stack[-3], Stack[-1])
0x288: Pop(0)
0x289: Stack[-4] = Stack[-1]
0x28a: Return(); Pop(2)

0x28b: PushEmpty(object, object)
0x28c: @ FindActor(Stack[-1], Stack[-4])
0x28d: Pop(0)
0x28e: Pop(0); Push((bool) Stack[-1] == 0)
0x28f: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x290: Stack[-5] = (bool) 0
0x291: Return(); Pop(2)

0x292: @ Trigger(Stack[-1], Stack[-3])
0x293: Pop(0)
0x294: Stack[-5] = (bool) 1
0x295: Return(); Pop(2)

0x296: Stack[-1] = 0
0x297: PushEmpty(string, string)
0x298: Stack[-1] = "idle"
0x299: Push(Stack[-3])
0x29a: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x29c: Stack[-4] = Stack[-1]
0x29d: Return(); Pop(2)

0x29e: PushEmpty(int, bool, int, bool)
0x29f: Stack[-2] = (int) 0
0x2a0: Push("all")
0x2a1: PushEmpty(string, int)
0x2a2: Stack[-1] = Stack[-5]
0x2a3: Call2 0x297

0x2a4: Pop(1)
0x2a5: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2a6: Pop(2)
0x2a7: Pop(0); Push((bool) Stack[-1] == 0)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a9: GOTO 0x2ad

0x2aa: Push((int) 1)
0x2ab: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2ac: GOTO 0x2a0

0x2ad: Stack[-5] = Stack[-2]
0x2ae: Return(); Pop(4)

0x2af: Stack[-1] = (int) 518097
0x2b0: Return(); Pop(0)

0x2b1: Stack[-1] = (int) 518096
0x2b2: Return(); Pop(0)

0x2b3: Stack[-1] = "ui/NPC_Citizen2.png"
0x2b4: Return(); Pop(0)

0x2b5: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x2b6: Return(); Pop(0)

0x2b7: Stack[-1] = (bool) 0
0x2b8: Return(); Pop(0)

0x2b9: PushEmpty()
0x2ba: PushEmpty(bool, string, string)
0x2bb: Stack[-2] = "quest_d3_02"
0x2bc: Stack[-1] = "teleport"
0x2bd: Call2 0x28b

0x2be: Pop(3)
0x2bf: Return(); Pop(0)

0x2c0: PushEmpty()
0x2c1: PushEmpty(int, string)
0x2c2: Stack[-1] = "d3q02"
0x2c3: Call2 0x286

0x2c4: Pop(1)
0x2c5: Push((int) 3)
0x2c6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c8: Stack[-2] = (bool) 1
0x2c9: Return(); Pop(0)

0x2ca: Stack[-2] = (bool) 0
0x2cb: Return(); Pop(0)

0x2cc: PushEmpty(int, int)
0x2cd: Push("branch")
0x2ce: @ GetVariable(Stack[-1], Stack[-2])
0x2cf: Pop(1)
0x2d0: Push((int) 0)
0x2d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d3: Stack[-3] = (int) 1
0x2d4: Return(); Pop(2)

0x2d5: GOTO 0x2db

0x2d6: Push((int) 1)
0x2d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d9: Stack[-3] = (int) 2
0x2da: Return(); Pop(2)

0x2db: Stack[-3] = (int) 3
0x2dc: Return(); Pop(2)

