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
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png
	quest_d9_01
	teleport_to_han
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

RunOp = 0x114
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x11b Vars = (object)
		EVENT_7 Op = 0x150 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1d8

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x28e

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x28c

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x290

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x292

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x29d

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
0x41: Call2 0x21c

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
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x84

0x53: Pop(1)
0x54: Push((int) 536373)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 536374)
0x5a: Push((int) 38150)
0x5b: Push((int) 38149)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 538483)
0x5f: Push((int) -1)
0x60: Push((int) 40367)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x294

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x22d

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all")
0x76: Push("idle")
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all")
0x7f: Push("idle")
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0x294

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-2] = Stack[-3]
0x90: Push("")
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x23d

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x257

0x9f: Pop(0)
0xa0: Push((int) 38151)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x296

0xa7: Pop(2)
0xa8: Push((int) 40373)
0xa9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xab: PushEmpty(object, object)
0xac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xae: Call2 0x296

0xaf: Pop(2)
0xb0: Push((int) 38148)
0xb1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xb3: PushEmpty(string)
0xb4: Stack[-1] = "Neutral"
0xb5: Call2 0x84

0xb6: Pop(1)
0xb7: Push((int) 536373)
0xb8: @@ SetMessage(Stack[-1])
0xb9: Pop(1)
0xba: @@ ClearReplies()
0xbb: Pop(0)
0xbc: Push((int) 536374)
0xbd: Push((int) 38150)
0xbe: Push((int) 38149)
0xbf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0: Pop(3)
0xc1: Push((int) 538483)
0xc2: Push((int) -1)
0xc3: Push((int) 40367)
0xc4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc5: Pop(3)
0xc6: Return(); Pop(0)

0xc7: Push((int) 38150)
0xc8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xca: PushEmpty(string)
0xcb: Stack[-1] = "Neutral"
0xcc: Call2 0x84

0xcd: Pop(1)
0xce: Push((int) 536375)
0xcf: @@ SetMessage(Stack[-1])
0xd0: Pop(1)
0xd1: @@ ClearReplies()
0xd2: Pop(0)
0xd3: Push((int) 538484)
0xd4: Push((int) 40369)
0xd5: Push((int) 40368)
0xd6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7: Pop(3)
0xd8: Push((int) 538489)
0xd9: Push((int) -1)
0xda: Push((int) 40373)
0xdb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc: Pop(3)
0xdd: Return(); Pop(0)

0xde: Push((int) 40369)
0xdf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xe1: PushEmpty(string)
0xe2: Stack[-1] = "Neutral"
0xe3: Call2 0x84

0xe4: Pop(1)
0xe5: Push((int) 538485)
0xe6: @@ SetMessage(Stack[-1])
0xe7: Pop(1)
0xe8: @@ ClearReplies()
0xe9: Pop(0)
0xea: Push((int) 538486)
0xeb: Push((int) 40371)
0xec: Push((int) 40370)
0xed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee: Pop(3)
0xef: Push((int) 538488)
0xf0: Push((int) 40371)
0xf1: Push((int) 40372)
0xf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3: Pop(3)
0xf4: Return(); Pop(0)

0xf5: Push((int) 40371)
0xf6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xf8: PushEmpty(string)
0xf9: Stack[-1] = "Neutral"
0xfa: Call2 0x84

0xfb: Pop(1)
0xfc: Push((int) 538487)
0xfd: @@ SetMessage(Stack[-1])
0xfe: Pop(1)
0xff: @@ ClearReplies()
0x100: Pop(0)
0x101: Push((int) 536376)
0x102: Push((int) -1)
0x103: Push((int) 38151)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Return(); Pop(0)

0x107: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x108: PushEmpty(bool)
0x109: Call2 0x294

0x10a: Pop(0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10c: @ lshStopAnimation()
0x10d: Pop(0)
0x10e: GOTO 0x111

0x10f: @ StopAnimation()
0x110: Pop(0)
0x111: Return(); Pop(0)

0x112: GOTO 0x9b

0x113: Return(); Pop(0)

0x114: PushEmpty(float, float)
0x115: Stack[-2] = (int) 300
0x116: Stack[-1] = (int) 100
0x117: Call2 0x126

0x118: Pop(2)
0x119: GOTO 0x114

0x11a: Return(); Pop(0)

0x11b: PushEmpty()
0x11c: PushEmpty()
0x11d: Call2 0x167

0x11e: Pop(0)
0x11f: PushEmpty(int, object)
0x120: Stack[-1] = Stack[-3]
0x121: Push(-2, 1); TaskCall(0)
0x122: Call2 0x0

0x123: Pop(-2, 1); TaskReturn
0x124: Pop(2)
0x125: Return(); Pop(0)

0x126: PushEmpty()
0x127: PushEmpty(bool)
0x128: Call2 0x1d3

0x129: Pop(0)
0x12a: Pop(1); Push((bool) Stack[-1] == 0)
0x12b: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12c: Return(); Pop(0)

0x12d: Push("player")
0x12e: @ FindActor(Stack[-4], Stack[-1])
0x12f: Pop(1)
0x130: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x131: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x132: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x133: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x134: Push((int) 10)
0x135: Push((float)1.0)
0x136: @ SetTimer(Stack[-2], Stack[-1])
0x137: Pop(2)
0x138: PushEmpty()
0x139: Call2 0x175

0x13a: Pop(0)
0x13b: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x13c: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13d: Push((int) 10)
0x13e: @ KillTimer(Stack[-1])
0x13f: Pop(1)
0x140: Return(); Pop(0)

0x141: PushEmpty(float, float)
0x142: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x144: Stack[-3] = (bool) 0
0x145: Return(); Pop(2)

0x146: PushEmpty(float, object)
0x147: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x148: Call2 0x1cb

0x149: Pop(1)
0x14a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x14b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x14c: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x14d: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x14e: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x14f: Return(); Pop(2)

0x150: PushEmpty()
0x151: Push((int) 10)
0x152: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x154: PushEmpty(bool)
0x155: Call2 0x141

0x156: Pop(0)
0x157: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x158: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x159: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15a: PushEmpty(object)
0x15b: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x15c: Call2 0x24c

0x15d: Pop(1)
0x15e: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x15f: GOTO 0x166

0x160: Push( Stack[2 + Tasks[-1].StackPointer] )
0x161: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x162: Push("head")
0x163: @ UnlookAsync(Stack[-1])
0x164: Pop(1)
0x165: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x166: Return(); Pop(0)

0x167: PushEmpty()
0x168: Call2 0x1c6

0x169: Pop(0)
0x16a: Push((int) 10)
0x16b: @ KillTimer(Stack[-1])
0x16c: Pop(1)
0x16d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x16e: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16f: Push("head")
0x170: @ UnlookAsync(Stack[-1])
0x171: Pop(1)
0x172: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x173: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x174: Return(); Pop(0)

0x175: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x176: @ WaitForAnimEnd()
0x177: Pop(0)
0x178: PushEmpty(bool)
0x179: Call2 0x1d3

0x17a: Pop(0)
0x17b: Pop(1); Push((bool) Stack[-1] == 0)
0x17c: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17d: Return(); Pop(14)

0x17e: PushEmpty(int)
0x17f: Call2 0x27b

0x180: Stack[-8] = Stack[-1]
0x181: Pop(1)
0x182: Stack[-6] = (int) 0
0x183: PushEmpty(bool)
0x184: Stack[-1] = (bool) 0
0x185: Push((int) 5)
0x186: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x188: PushEmpty(bool)
0x189: Call2 0x1d3

0x18a: Pop(0)
0x18b: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18c: Stack[-1] = (bool) 1
0x18d: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x18e: Push((int) 3)
0x18f: @ irand(Stack[-6], Stack[-1])
0x190: Pop(1)
0x191: Push((int) 0)
0x192: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x194: Push(Stack[-7])
0x195: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x196: @ irand(Stack[-4], Stack[-7])
0x197: Pop(0)
0x198: Push("all")
0x199: PushEmpty(string, int)
0x19a: Stack[-1] = Stack[-7]
0x19b: Call2 0x274

0x19c: Pop(1)
0x19d: @ PlayAnimation(Stack[-2], Stack[-1])
0x19e: Pop(2)
0x19f: @ WaitForAnimEnd(Stack[-3])
0x1a0: Pop(0)
0x1a1: Pop(0); Push((bool) Stack[-3] == 0)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a3: GOTO 0x1c1

0x1a4: GOTO 0x1b6

0x1a5: Push((int) 1)
0x1a6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1a8: Push((int) 4)
0x1a9: @ rand(Stack[-3], Stack[-1])
0x1aa: Pop(1)
0x1ab: Push((int) 1)
0x1ac: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1ad: @ Sleep(Stack[-1], Stack[-2])
0x1ae: Pop(1)
0x1af: Pop(0); Push((bool) Stack[-1] == 0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: GOTO 0x1c1

0x1b2: GOTO 0x1b6

0x1b3: Push(Stack[-6])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b5: GOTO 0x1c1

0x1b6: PushEmpty(bool)
0x1b7: Call2 0x1c4

0x1b8: Pop(0)
0x1b9: Pop(1); Push((bool) Stack[-1] == 0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1bb: GOTO 0x1c1

0x1bc: @ ResetAAS()
0x1bd: Pop(0)
0x1be: Push((int) 1)
0x1bf: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1c0: GOTO 0x183

0x1c1: @ ResetAAS()
0x1c2: Pop(0)
0x1c3: Return(); Pop(14)

0x1c4: Stack[-1] = (bool) 1
0x1c5: Return(); Pop(0)

0x1c6: @ StopAnimation()
0x1c7: Pop(0)
0x1c8: @ StopGroup0()
0x1c9: Pop(0)
0x1ca: Return(); Pop(0)

0x1cb: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1cc: @ GetPosition(Stack[-3])
0x1cd: Pop(0)
0x1ce: @@ GetPosition(Stack[-2])
0x1cf: Pop(0)
0x1d0: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1d1: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1d2: Return(); Pop(6)

0x1d3: PushEmpty(bool, bool)
0x1d4: @ IsLoaded(Stack[-1])
0x1d5: Pop(0)
0x1d6: Stack[-3] = Stack[-1]
0x1d7: Return(); Pop(2)

0x1d8: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1d9: @@ GetPosition(Stack[-8])
0x1da: Pop(0)
0x1db: @@ GetEyesHeight(Stack[-9])
0x1dc: Pop(0)
0x1dd: Push(CvectorIndex(Stack[-8], 1))
0x1de: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1df: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1e0: @ GetPosition(Stack[-7])
0x1e1: Pop(0)
0x1e2: @ GetEyesHeight(Stack[-9])
0x1e3: Pop(0)
0x1e4: Push(CvectorIndex(Stack[-7], 1))
0x1e5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1e6: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1e7: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1e8: Push(CvectorIndex(Stack[-6], 1))
0x1e9: Stack[-1] = (int) 0
0x1ea: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1eb: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1ec: Pop(1); Push(Sqrt(Stack[-1]))
0x1ed: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1ee: Stack[-5] = -Stack[-6]; Pop(0);
0x1ef: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1f0: PushEmpty(cvector, cvector)
0x1f1: Push(CVector(0.0, 1.0, 0.0))
0x1f2: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1f3: Call2 0x25e

0x1f4: Pop(1)
0x1f5: Push((int) 25)
0x1f6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1f7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1f8: Push(CVector(0.0, 10.0, 0.0))
0x1f9: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1fa: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1fb: @ IsOverrideActive(Stack[-2])
0x1fc: Pop(0)
0x1fd: Push(Stack[-2])
0x1fe: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1ff: Stack[-21] = (bool) 0
0x200: Return(); Pop(18)

0x201: @ StopWorld()
0x202: Pop(0)
0x203: @ CameraTransit(Stack[-3], Stack[-5])
0x204: Pop(0)
0x205: Push(CvectorIndex(Stack[-4], 0))
0x206: Push(CvectorIndex(Stack[-5], 2))
0x207: @ Rotate(Stack[-2], Stack[-1])
0x208: Pop(2)
0x209: PushEmpty(bool)
0x20a: Call2 0x294

0x20b: Pop(0)
0x20c: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x20d: GOTO 0x216

0x20e: Push("head")
0x20f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x210: Pop(1)
0x211: Push(Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x213: Push("head")
0x214: @ LookAsyncCamera(Stack[-1])
0x215: Pop(1)
0x216: @ CameraWaitForPlayFinish()
0x217: Pop(0)
0x218: @ ResumeWorld()
0x219: Pop(0)
0x21a: Stack[-21] = (bool) 1
0x21b: Return(); Pop(18)

0x21c: PushEmpty(bool, bool)
0x21d: @ CameraSwitchToNormal()
0x21e: Pop(0)
0x21f: PushEmpty(bool)
0x220: Call2 0x294

0x221: Pop(0)
0x222: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x223: GOTO 0x22c

0x224: Push("head")
0x225: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x226: Pop(1)
0x227: Push(Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x229: Push("head")
0x22a: @ UnlookAsync(Stack[-1])
0x22b: Pop(1)
0x22c: Return(); Pop(2)

0x22d: PushEmpty(bool, float, float, bool, float, float)
0x22e: @ lshHasAnimation(Stack[-3], Stack[-7])
0x22f: Pop(0)
0x230: Push(Stack[-3])
0x231: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x232: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x233: Pop(0)
0x234: Push((bool) 0)
0x235: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x236: Pop(1)
0x237: GOTO 0x23c

0x238: Push("Can't find lsh animation : ")
0x239: Pop(1); Push(Stack[-1] + Stack[-8]);
0x23a: @ Trace(Stack[-1])
0x23b: Pop(1)
0x23c: Return(); Pop(6)

0x23d: PushEmpty(bool, float, float, bool, float, float)
0x23e: @ lshHasAnimation(Stack[-3], Stack[-8])
0x23f: Pop(0)
0x240: Push(Stack[-3])
0x241: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x242: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x243: Pop(0)
0x244: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x245: Pop(0)
0x246: GOTO 0x24b

0x247: Push("Can't find lsh animation : ")
0x248: Pop(1); Push(Stack[-1] + Stack[-9]);
0x249: @ Trace(Stack[-1])
0x24a: Pop(1)
0x24b: Return(); Pop(6)

0x24c: PushEmpty(float, cvector, float, cvector)
0x24d: @@ GetEyesHeight(Stack[-2])
0x24e: Pop(0)
0x24f: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x250: Push(CvectorIndex(Stack[-1], 1))
0x251: Stack[-1] = Stack[-3]
0x252: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x253: Push("head")
0x254: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x255: Pop(1)
0x256: Return(); Pop(4)

0x257: PushEmpty(bool)
0x258: Call2 0x294

0x259: Pop(0)
0x25a: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25b: @ lshStopSpeech()
0x25c: Pop(0)
0x25d: Return(); Pop(0)

0x25e: PushEmpty(float, float)
0x25f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x260: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x261: Push((float)0.0)
0x262: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x263: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x264: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x265: Return(); Pop(2)

0x266: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x267: Return(); Pop(2)

0x268: PushEmpty(object, object)
0x269: @ FindActor(Stack[-1], Stack[-4])
0x26a: Pop(0)
0x26b: Pop(0); Push((bool) Stack[-1] == 0)
0x26c: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26d: Stack[-5] = (bool) 0
0x26e: Return(); Pop(2)

0x26f: @ Trigger(Stack[-1], Stack[-3])
0x270: Pop(0)
0x271: Stack[-5] = (bool) 1
0x272: Return(); Pop(2)

0x273: Stack[-1] = 0
0x274: PushEmpty(string, string)
0x275: Stack[-1] = "idle"
0x276: Push(Stack[-3])
0x277: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x278: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x279: Stack[-4] = Stack[-1]
0x27a: Return(); Pop(2)

0x27b: PushEmpty(int, bool, int, bool)
0x27c: Stack[-2] = (int) 0
0x27d: Push("all")
0x27e: PushEmpty(string, int)
0x27f: Stack[-1] = Stack[-5]
0x280: Call2 0x274

0x281: Pop(1)
0x282: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x283: Pop(2)
0x284: Pop(0); Push((bool) Stack[-1] == 0)
0x285: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x286: GOTO 0x28a

0x287: Push((int) 1)
0x288: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x289: GOTO 0x27d

0x28a: Stack[-5] = Stack[-2]
0x28b: Return(); Pop(4)

0x28c: Stack[-1] = (int) 518097
0x28d: Return(); Pop(0)

0x28e: Stack[-1] = (int) 518096
0x28f: Return(); Pop(0)

0x290: Stack[-1] = "ui/NPC_Citizen2.png"
0x291: Return(); Pop(0)

0x292: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x293: Return(); Pop(0)

0x294: Stack[-1] = (bool) 0
0x295: Return(); Pop(0)

0x296: PushEmpty()
0x297: PushEmpty(bool, string, string)
0x298: Stack[-2] = "quest_d9_01"
0x299: Stack[-1] = "teleport_to_han"
0x29a: Call2 0x268

0x29b: Pop(3)
0x29c: Return(); Pop(0)

0x29d: PushEmpty(int, int)
0x29e: Push("branch")
0x29f: @ GetVariable(Stack[-1], Stack[-2])
0x2a0: Pop(1)
0x2a1: Push((int) 0)
0x2a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a4: Stack[-3] = (int) 1
0x2a5: Return(); Pop(2)

0x2a6: GOTO 0x2ac

0x2a7: Push((int) 1)
0x2a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2aa: Stack[-3] = (int) 2
0x2ab: Return(); Pop(2)

0x2ac: Stack[-3] = (int) 3
0x2ad: Return(); Pop(2)

