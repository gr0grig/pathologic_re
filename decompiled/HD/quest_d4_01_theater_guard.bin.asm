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
	ood4TheaterGuard1
	ood4TheaterGuard2
	d4q01KeyWhite
	d4q01
	branch
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png

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

RunOp = 0x18a
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc7 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x194 Vars = (object)
		EVENT_7 Op = 0x1c9 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x251

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x34f

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x34d

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x351

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x353

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x33c

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
0x41: Call2 0x296

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
0x4f: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x30c

0x55: Pop(1)
0x56: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x318

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5d: Stack[-1] = (bool) 1
0x5e: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x5f: PushEmpty(string)
0x60: Stack[-1] = "Neutral"
0x61: Call2 0xb1

0x62: Pop(1)
0x63: Push((int) 536275)
0x64: @@ SetMessage(Stack[-1])
0x65: Pop(1)
0x66: @@ ClearReplies()
0x67: Pop(0)
0x68: PushEmpty(bool, object)
0x69: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a: Call2 0x324

0x6b: Pop(1)
0x6c: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6d: Push((int) 536276)
0x6e: Push((int) 38085)
0x6f: Push((int) 38060)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: Push((int) 536300)
0x73: Push((int) -1)
0x74: Push((int) 38084)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: GOTO 0x93

0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral"
0x7a: Call2 0xb1

0x7b: Pop(1)
0x7c: Push((int) 536279)
0x7d: @@ SetMessage(Stack[-1])
0x7e: Pop(1)
0x7f: @@ ClearReplies()
0x80: Pop(0)
0x81: PushEmpty(bool, object)
0x82: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x83: Call2 0x330

0x84: Pop(1)
0x85: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x86: Push((int) 536280)
0x87: Push((int) 38092)
0x88: Push((int) 38064)
0x89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a: Pop(3)
0x8b: Push((int) 536283)
0x8c: Push((int) -1)
0x8d: Push((int) 38067)
0x8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f: Pop(3)
0x90: GOTO 0x93

0x91: Return(); Pop(0)

0x92: GOTO 0x4e

0x93: PushEmpty(bool)
0x94: Call2 0x355

0x95: Pop(0)
0x96: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x97: @ lshWaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: PushEmpty(string)
0x9d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9e: Call2 0x2a8

0x9f: Pop(1)
0xa0: GOTO 0x97

0xa1: GOTO 0xb0

0xa2: Push("all")
0xa3: Push("idle")
0xa4: @ PlayAnimation(Stack[-2], Stack[-1])
0xa5: Pop(2)
0xa6: @ WaitForAnimEnd()
0xa7: Pop(0)
0xa8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: GOTO 0xb0

0xab: Push("all")
0xac: Push("idle")
0xad: @ PlayAnimation(Stack[-2], Stack[-1])
0xae: Pop(2)
0xaf: GOTO 0xa6

0xb0: Return(); Pop(0)

0xb1: PushEmpty()
0xb2: PushEmpty(bool)
0xb3: Call2 0x355

0xb4: Pop(0)
0xb5: Pop(1); Push((bool) Stack[-1] == 0)
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: Return(); Pop(0)

0xb8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: Return(); Pop(0)

0xbb: PushEmpty(string, bool)
0xbc: Stack[-2] = Stack[-3]
0xbd: Push("")
0xbe: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc0: Stack[-1] = (bool) 0
0xc1: GOTO 0xc3

0xc2: Stack[-1] = (bool) 1
0xc3: Call2 0x2b8

0xc4: Pop(2)
0xc5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc6: Return(); Pop(0)

0xc7: PushEmpty()
0xc8: Push((int) 1)
0xc9: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0xca: PushEmpty()
0xcb: Call2 0x2d2

0xcc: Pop(0)
0xcd: Push((int) 38060)
0xce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x300

0xd4: Pop(2)
0xd5: Push((int) 38064)
0xd6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd8: PushEmpty(object, object)
0xd9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xda: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdb: Call2 0x306

0xdc: Pop(2)
0xdd: Push((int) 38059)
0xde: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0xe0: PushEmpty(bool)
0xe1: Stack[-1] = (bool) 0
0xe2: PushEmpty(bool, object)
0xe3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Call2 0x30c

0xe5: Pop(1)
0xe6: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe7: PushEmpty(bool, object)
0xe8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Call2 0x318

0xea: Pop(1)
0xeb: Pop(1); Push((bool) Stack[-1] == 0)
0xec: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xed: Stack[-1] = (bool) 1
0xee: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral"
0xf1: Call2 0xb1

0xf2: Pop(1)
0xf3: Push((int) 536275)
0xf4: @@ SetMessage(Stack[-1])
0xf5: Pop(1)
0xf6: @@ ClearReplies()
0xf7: Pop(0)
0xf8: PushEmpty(bool, object)
0xf9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Call2 0x324

0xfb: Pop(1)
0xfc: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xfd: Push((int) 536276)
0xfe: Push((int) 38085)
0xff: Push((int) 38060)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Push((int) 536300)
0x103: Push((int) -1)
0x104: Push((int) 38084)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: Return(); Pop(0)

0x108: PushEmpty(string)
0x109: Stack[-1] = "Neutral"
0x10a: Call2 0xb1

0x10b: Pop(1)
0x10c: Push((int) 536279)
0x10d: @@ SetMessage(Stack[-1])
0x10e: Pop(1)
0x10f: @@ ClearReplies()
0x110: Pop(0)
0x111: PushEmpty(bool, object)
0x112: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x113: Call2 0x330

0x114: Pop(1)
0x115: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x116: Push((int) 536280)
0x117: Push((int) 38092)
0x118: Push((int) 38064)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Push((int) 536283)
0x11c: Push((int) -1)
0x11d: Push((int) 38067)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: Push((int) 38092)
0x122: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Neutral"
0x126: Call2 0xb1

0x127: Pop(1)
0x128: Push((int) 536308)
0x129: @@ SetMessage(Stack[-1])
0x12a: Pop(1)
0x12b: @@ ClearReplies()
0x12c: Pop(0)
0x12d: Push((int) 536309)
0x12e: Push((int) 38065)
0x12f: Push((int) 38093)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Push((int) 536310)
0x133: Push((int) 38065)
0x134: Push((int) 38094)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: Return(); Pop(0)

0x138: Push((int) 38065)
0x139: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x13b: PushEmpty(string)
0x13c: Stack[-1] = "Neutral"
0x13d: Call2 0xb1

0x13e: Pop(1)
0x13f: Push((int) 536281)
0x140: @@ SetMessage(Stack[-1])
0x141: Pop(1)
0x142: @@ ClearReplies()
0x143: Pop(0)
0x144: Push((int) 536282)
0x145: Push((int) -1)
0x146: Push((int) 38066)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: Push((int) 536307)
0x14a: Push((int) -1)
0x14b: Push((int) 38091)
0x14c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14d: Pop(3)
0x14e: Return(); Pop(0)

0x14f: Push((int) 38085)
0x150: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x152: PushEmpty(string)
0x153: Stack[-1] = "Neutral"
0x154: Call2 0xb1

0x155: Pop(1)
0x156: Push((int) 536301)
0x157: @@ SetMessage(Stack[-1])
0x158: Pop(1)
0x159: @@ ClearReplies()
0x15a: Pop(0)
0x15b: Push((int) 536302)
0x15c: Push((int) 38088)
0x15d: Push((int) 38086)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: Push((int) 536303)
0x161: Push((int) -1)
0x162: Push((int) 38087)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: Return(); Pop(0)

0x166: Push((int) 38088)
0x167: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x169: PushEmpty(string)
0x16a: Stack[-1] = "Neutral"
0x16b: Call2 0xb1

0x16c: Pop(1)
0x16d: Push((int) 536304)
0x16e: @@ SetMessage(Stack[-1])
0x16f: Pop(1)
0x170: @@ ClearReplies()
0x171: Pop(0)
0x172: Push((int) 536305)
0x173: Push((int) -1)
0x174: Push((int) 38089)
0x175: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x176: Pop(3)
0x177: Push((int) 536306)
0x178: Push((int) -1)
0x179: Push((int) 38090)
0x17a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17b: Pop(3)
0x17c: Return(); Pop(0)

0x17d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x17e: PushEmpty(bool)
0x17f: Call2 0x355

0x180: Pop(0)
0x181: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x182: @ lshStopAnimation()
0x183: Pop(0)
0x184: GOTO 0x187

0x185: @ StopAnimation()
0x186: Pop(0)
0x187: Return(); Pop(0)

0x188: GOTO 0xc8

0x189: Return(); Pop(0)

0x18a: Push((int) 1)
0x18b: @ Sleep(Stack[-1])
0x18c: Pop(1)
0x18d: PushEmpty(float, float)
0x18e: Stack[-2] = (int) 300
0x18f: Stack[-1] = (int) 100
0x190: Call2 0x19f

0x191: Pop(2)
0x192: GOTO 0x18a

0x193: Return(); Pop(0)

0x194: PushEmpty()
0x195: PushEmpty()
0x196: Call2 0x1e0

0x197: Pop(0)
0x198: PushEmpty(int, object)
0x199: Stack[-1] = Stack[-3]
0x19a: Push(-2, 1); TaskCall(0)
0x19b: Call2 0x0

0x19c: Pop(-2, 1); TaskReturn
0x19d: Pop(2)
0x19e: Return(); Pop(0)

0x19f: PushEmpty()
0x1a0: PushEmpty(bool)
0x1a1: Call2 0x24c

0x1a2: Pop(0)
0x1a3: Pop(1); Push((bool) Stack[-1] == 0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: Return(); Pop(0)

0x1a6: Push("player")
0x1a7: @ FindActor(Stack[-4], Stack[-1])
0x1a8: Pop(1)
0x1a9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1aa: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1ab: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1ac: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1ad: Push((int) 10)
0x1ae: Push((float)1.0)
0x1af: @ SetTimer(Stack[-2], Stack[-1])
0x1b0: Pop(2)
0x1b1: PushEmpty()
0x1b2: Call2 0x1ee

0x1b3: Pop(0)
0x1b4: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b6: Push((int) 10)
0x1b7: @ KillTimer(Stack[-1])
0x1b8: Pop(1)
0x1b9: Return(); Pop(0)

0x1ba: PushEmpty(float, float)
0x1bb: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1bd: Stack[-3] = (bool) 0
0x1be: Return(); Pop(2)

0x1bf: PushEmpty(float, object)
0x1c0: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1c1: Call2 0x244

0x1c2: Pop(1)
0x1c3: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1c4: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c6: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1c7: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1c8: Return(); Pop(2)

0x1c9: PushEmpty()
0x1ca: Push((int) 10)
0x1cb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1cd: PushEmpty(bool)
0x1ce: Call2 0x1ba

0x1cf: Pop(0)
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d1: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d3: PushEmpty(object)
0x1d4: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1d5: Call2 0x2c7

0x1d6: Pop(1)
0x1d7: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1d8: GOTO 0x1df

0x1d9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1da: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1db: Push("head")
0x1dc: @ UnlookAsync(Stack[-1])
0x1dd: Pop(1)
0x1de: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1df: Return(); Pop(0)

0x1e0: PushEmpty()
0x1e1: Call2 0x23f

0x1e2: Pop(0)
0x1e3: Push((int) 10)
0x1e4: @ KillTimer(Stack[-1])
0x1e5: Pop(1)
0x1e6: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e8: Push("head")
0x1e9: @ UnlookAsync(Stack[-1])
0x1ea: Pop(1)
0x1eb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1ec: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ed: Return(); Pop(0)

0x1ee: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1ef: @ WaitForAnimEnd()
0x1f0: Pop(0)
0x1f1: PushEmpty(bool)
0x1f2: Call2 0x24c

0x1f3: Pop(0)
0x1f4: Pop(1); Push((bool) Stack[-1] == 0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: Return(); Pop(14)

0x1f7: PushEmpty(int)
0x1f8: Call2 0x2ef

0x1f9: Stack[-8] = Stack[-1]
0x1fa: Pop(1)
0x1fb: Stack[-6] = (int) 0
0x1fc: PushEmpty(bool)
0x1fd: Stack[-1] = (bool) 0
0x1fe: Push((int) 5)
0x1ff: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x200: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x201: PushEmpty(bool)
0x202: Call2 0x24c

0x203: Pop(0)
0x204: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x205: Stack[-1] = (bool) 1
0x206: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x207: Push((int) 3)
0x208: @ irand(Stack[-6], Stack[-1])
0x209: Pop(1)
0x20a: Push((int) 0)
0x20b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x20d: Push(Stack[-7])
0x20e: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x20f: @ irand(Stack[-4], Stack[-7])
0x210: Pop(0)
0x211: Push("all")
0x212: PushEmpty(string, int)
0x213: Stack[-1] = Stack[-7]
0x214: Call2 0x2e8

0x215: Pop(1)
0x216: @ PlayAnimation(Stack[-2], Stack[-1])
0x217: Pop(2)
0x218: @ WaitForAnimEnd(Stack[-3])
0x219: Pop(0)
0x21a: Pop(0); Push((bool) Stack[-3] == 0)
0x21b: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21c: GOTO 0x23a

0x21d: GOTO 0x22f

0x21e: Push((int) 1)
0x21f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x220: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x221: Push((int) 4)
0x222: @ rand(Stack[-3], Stack[-1])
0x223: Pop(1)
0x224: Push((int) 1)
0x225: Pop(1); Push(Stack[-3] + Stack[-1]);
0x226: @ Sleep(Stack[-1], Stack[-2])
0x227: Pop(1)
0x228: Pop(0); Push((bool) Stack[-1] == 0)
0x229: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x22a: GOTO 0x23a

0x22b: GOTO 0x22f

0x22c: Push(Stack[-6])
0x22d: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22e: GOTO 0x23a

0x22f: PushEmpty(bool)
0x230: Call2 0x23d

0x231: Pop(0)
0x232: Pop(1); Push((bool) Stack[-1] == 0)
0x233: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x234: GOTO 0x23a

0x235: @ ResetAAS()
0x236: Pop(0)
0x237: Push((int) 1)
0x238: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x239: GOTO 0x1fc

0x23a: @ ResetAAS()
0x23b: Pop(0)
0x23c: Return(); Pop(14)

0x23d: Stack[-1] = (bool) 1
0x23e: Return(); Pop(0)

0x23f: @ StopAnimation()
0x240: Pop(0)
0x241: @ StopGroup0()
0x242: Pop(0)
0x243: Return(); Pop(0)

0x244: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x245: @ GetPosition(Stack[-3])
0x246: Pop(0)
0x247: @@ GetPosition(Stack[-2])
0x248: Pop(0)
0x249: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x24a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x24b: Return(); Pop(6)

0x24c: PushEmpty(bool, bool)
0x24d: @ IsLoaded(Stack[-1])
0x24e: Pop(0)
0x24f: Stack[-3] = Stack[-1]
0x250: Return(); Pop(2)

0x251: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x252: @@ GetPosition(Stack[-8])
0x253: Pop(0)
0x254: @@ GetEyesHeight(Stack[-9])
0x255: Pop(0)
0x256: Push(CvectorIndex(Stack[-8], 1))
0x257: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x258: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x259: @ GetPosition(Stack[-7])
0x25a: Pop(0)
0x25b: @ GetEyesHeight(Stack[-9])
0x25c: Pop(0)
0x25d: Push(CvectorIndex(Stack[-7], 1))
0x25e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x25f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x260: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x261: Push(CvectorIndex(Stack[-6], 1))
0x262: Stack[-1] = (int) 0
0x263: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x264: Pop(0); Push(Stack[-6] | Stack[-6]);
0x265: Pop(1); Push(Sqrt(Stack[-1]))
0x266: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x267: Stack[-5] = -Stack[-6]; Pop(0);
0x268: Pop(0); Push(Stack[-6] * Stack[-19]);
0x269: PushEmpty(cvector, cvector)
0x26a: Push(CVector(0.0, 1.0, 0.0))
0x26b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x26c: Call2 0x2d9

0x26d: Pop(1)
0x26e: Push((int) 25)
0x26f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x270: Pop(2); Push(Stack[-2] + Stack[-1]);
0x271: Push(CVector(0.0, 10.0, 0.0))
0x272: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x273: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x274: @ IsOverrideActive(Stack[-2])
0x275: Pop(0)
0x276: Push(Stack[-2])
0x277: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x278: Stack[-21] = (bool) 0
0x279: Return(); Pop(18)

0x27a: @ StopWorld()
0x27b: Pop(0)
0x27c: Push((bool) 1)
0x27d: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x27e: Pop(1)
0x27f: Push(CvectorIndex(Stack[-4], 0))
0x280: Push(CvectorIndex(Stack[-5], 2))
0x281: @ Rotate(Stack[-2], Stack[-1])
0x282: Pop(2)
0x283: PushEmpty(bool)
0x284: Call2 0x355

0x285: Pop(0)
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: GOTO 0x290

0x288: Push("head")
0x289: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x28a: Pop(1)
0x28b: Push(Stack[-1])
0x28c: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28d: Push("head")
0x28e: @ LookAsyncCamera(Stack[-1])
0x28f: Pop(1)
0x290: @ CameraWaitForPlayFinish()
0x291: Pop(0)
0x292: @ ResumeWorld()
0x293: Pop(0)
0x294: Stack[-21] = (bool) 1
0x295: Return(); Pop(18)

0x296: PushEmpty(bool, bool)
0x297: Push((bool) 1)
0x298: @ CameraSwitchToNormal(Stack[-1])
0x299: Pop(1)
0x29a: PushEmpty(bool)
0x29b: Call2 0x355

0x29c: Pop(0)
0x29d: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29e: GOTO 0x2a7

0x29f: Push("head")
0x2a0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2a1: Pop(1)
0x2a2: Push(Stack[-1])
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a4: Push("head")
0x2a5: @ UnlookAsync(Stack[-1])
0x2a6: Pop(1)
0x2a7: Return(); Pop(2)

0x2a8: PushEmpty(bool, float, float, bool, float, float)
0x2a9: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2aa: Pop(0)
0x2ab: Push(Stack[-3])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2ad: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2ae: Pop(0)
0x2af: Push((bool) 0)
0x2b0: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2b1: Pop(1)
0x2b2: GOTO 0x2b7

0x2b3: Push("Can't find lsh animation : ")
0x2b4: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2b5: @ Trace(Stack[-1])
0x2b6: Pop(1)
0x2b7: Return(); Pop(6)

0x2b8: PushEmpty(bool, float, float, bool, float, float)
0x2b9: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2ba: Pop(0)
0x2bb: Push(Stack[-3])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2bd: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2be: Pop(0)
0x2bf: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2c0: Pop(0)
0x2c1: GOTO 0x2c6

0x2c2: Push("Can't find lsh animation : ")
0x2c3: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2c4: @ Trace(Stack[-1])
0x2c5: Pop(1)
0x2c6: Return(); Pop(6)

0x2c7: PushEmpty(float, cvector, float, cvector)
0x2c8: @@ GetEyesHeight(Stack[-2])
0x2c9: Pop(0)
0x2ca: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2cb: Push(CvectorIndex(Stack[-1], 1))
0x2cc: Stack[-1] = Stack[-3]
0x2cd: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2ce: Push("head")
0x2cf: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2d0: Pop(1)
0x2d1: Return(); Pop(4)

0x2d2: PushEmpty(bool)
0x2d3: Call2 0x355

0x2d4: Pop(0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d6: @ lshStopSpeech()
0x2d7: Pop(0)
0x2d8: Return(); Pop(0)

0x2d9: PushEmpty(float, float)
0x2da: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2db: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2dc: Push((float)0.0)
0x2dd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2df: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2e0: Return(); Pop(2)

0x2e1: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2e2: Return(); Pop(2)

0x2e3: PushEmpty(int, int)
0x2e4: @ GetVariable(Stack[-3], Stack[-1])
0x2e5: Pop(0)
0x2e6: Stack[-4] = Stack[-1]
0x2e7: Return(); Pop(2)

0x2e8: PushEmpty(string, string)
0x2e9: Stack[-1] = "idle"
0x2ea: Push(Stack[-3])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2ec: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2ed: Stack[-4] = Stack[-1]
0x2ee: Return(); Pop(2)

0x2ef: PushEmpty(int, bool, int, bool)
0x2f0: Stack[-2] = (int) 0
0x2f1: Push("all")
0x2f2: PushEmpty(string, int)
0x2f3: Stack[-1] = Stack[-5]
0x2f4: Call2 0x2e8

0x2f5: Pop(1)
0x2f6: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2f7: Pop(2)
0x2f8: Pop(0); Push((bool) Stack[-1] == 0)
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2fa: GOTO 0x2fe

0x2fb: Push((int) 1)
0x2fc: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2fd: GOTO 0x2f1

0x2fe: Stack[-5] = Stack[-2]
0x2ff: Return(); Pop(4)

0x300: PushEmpty()
0x301: Push("ood4TheaterGuard1")
0x302: Push((int) 1)
0x303: @ SetVariable(Stack[-2], Stack[-1])
0x304: Pop(2)
0x305: Return(); Pop(0)

0x306: PushEmpty()
0x307: Push("ood4TheaterGuard2")
0x308: Push((int) 1)
0x309: @ SetVariable(Stack[-2], Stack[-1])
0x30a: Pop(2)
0x30b: Return(); Pop(0)

0x30c: PushEmpty()
0x30d: PushEmpty(int, string)
0x30e: Stack[-1] = "d4q01KeyWhite"
0x30f: Call2 0x2e3

0x310: Pop(1)
0x311: Push((int) 0)
0x312: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x313: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x314: Stack[-2] = (bool) 1
0x315: Return(); Pop(0)

0x316: Stack[-2] = (bool) 0
0x317: Return(); Pop(0)

0x318: PushEmpty()
0x319: PushEmpty(int, string)
0x31a: Stack[-1] = "d4q01"
0x31b: Call2 0x2e3

0x31c: Pop(1)
0x31d: Push((int) 1000)
0x31e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x31f: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x320: Stack[-2] = (bool) 1
0x321: Return(); Pop(0)

0x322: Stack[-2] = (bool) 0
0x323: Return(); Pop(0)

0x324: PushEmpty()
0x325: PushEmpty(int, string)
0x326: Stack[-1] = "ood4TheaterGuard1"
0x327: Call2 0x2e3

0x328: Pop(1)
0x329: Push((int) 0)
0x32a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32c: Stack[-2] = (bool) 1
0x32d: Return(); Pop(0)

0x32e: Stack[-2] = (bool) 0
0x32f: Return(); Pop(0)

0x330: PushEmpty()
0x331: PushEmpty(int, string)
0x332: Stack[-1] = "ood4TheaterGuard2"
0x333: Call2 0x2e3

0x334: Pop(1)
0x335: Push((int) 0)
0x336: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x337: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x338: Stack[-2] = (bool) 1
0x339: Return(); Pop(0)

0x33a: Stack[-2] = (bool) 0
0x33b: Return(); Pop(0)

0x33c: PushEmpty(int, int)
0x33d: Push("branch")
0x33e: @ GetVariable(Stack[-1], Stack[-2])
0x33f: Pop(1)
0x340: Push((int) 0)
0x341: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x342: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x343: Stack[-3] = (int) 1
0x344: Return(); Pop(2)

0x345: GOTO 0x34b

0x346: Push((int) 1)
0x347: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x348: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x349: Stack[-3] = (int) 2
0x34a: Return(); Pop(2)

0x34b: Stack[-3] = (int) 3
0x34c: Return(); Pop(2)

0x34d: Stack[-1] = (int) 515571
0x34e: Return(); Pop(0)

0x34f: Stack[-1] = (int) 504029
0x350: Return(); Pop(0)

0x351: Stack[-1] = "ui/NPC_bmask.png"
0x352: Return(); Pop(0)

0x353: Stack[-1] = "ui/NPC_bmask_b.png"
0x354: Return(); Pop(0)

0x355: Stack[-1] = (bool) 0
0x356: Return(); Pop(0)

