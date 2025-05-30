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
	ui/NPC_Prophet.png
	ui/NPC_Prophet_b.png
	quest_k10_01
	teleport
	k10q01
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
	Trigger (2 args)
	HasAnimation (3 args)

RunOp = 0x120
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x12a Vars = (object)
		EVENT_7 Op = 0x15f Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1e7

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x28c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x28a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x28e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x290

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2bf

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
0x41: Call2 0x22c

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
0x4f: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x8e

0x53: Pop(1)
0x54: Push((int) 526993)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x2b3

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 526994)
0x5f: Push((int) 28287)
0x60: Push((int) 28286)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 526997)
0x64: Push((int) -1)
0x65: Push((int) 28289)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 528127)
0x69: Push((int) -1)
0x6a: Push((int) 29475)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x292

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x23e

0x7c: Pop(1)
0x7d: GOTO 0x74

0x7e: GOTO 0x8d

0x7f: Push("all")
0x80: Push("idle")
0x81: @ PlayAnimation(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: @ WaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: Push("all")
0x89: Push("idle")
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: GOTO 0x83

0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: PushEmpty(bool)
0x90: Call2 0x292

0x91: Pop(0)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Return(); Pop(0)

0x98: PushEmpty(string, bool)
0x99: Stack[-2] = Stack[-3]
0x9a: Push("")
0x9b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: Stack[-1] = (bool) 0
0x9e: GOTO 0xa0

0x9f: Stack[-1] = (bool) 1
0xa0: Call2 0x24e

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x268

0xa9: Pop(0)
0xaa: Push((int) 28288)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x2ac

0xb1: Pop(2)
0xb2: Push((int) 28285)
0xb3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xb5: PushEmpty(string)
0xb6: Stack[-1] = "Neutral"
0xb7: Call2 0x8e

0xb8: Pop(1)
0xb9: Push((int) 526993)
0xba: @@ SetMessage(Stack[-1])
0xbb: Pop(1)
0xbc: @@ ClearReplies()
0xbd: Pop(0)
0xbe: PushEmpty(bool, object)
0xbf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Call2 0x2b3

0xc1: Pop(1)
0xc2: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc3: Push((int) 526994)
0xc4: Push((int) 28287)
0xc5: Push((int) 28286)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Push((int) 526997)
0xc9: Push((int) -1)
0xca: Push((int) 28289)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: Push((int) 528127)
0xce: Push((int) -1)
0xcf: Push((int) 29475)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: Return(); Pop(0)

0xd3: Push((int) 28287)
0xd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xd6: PushEmpty(string)
0xd7: Stack[-1] = "Neutral"
0xd8: Call2 0x8e

0xd9: Pop(1)
0xda: Push((int) 526995)
0xdb: @@ SetMessage(Stack[-1])
0xdc: Pop(1)
0xdd: @@ ClearReplies()
0xde: Pop(0)
0xdf: Push((int) 528128)
0xe0: Push((int) 29478)
0xe1: Push((int) 29476)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Push((int) 528129)
0xe5: Push((int) 29478)
0xe6: Push((int) 29477)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Return(); Pop(0)

0xea: Push((int) 29478)
0xeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral"
0xef: Call2 0x8e

0xf0: Pop(1)
0xf1: Push((int) 528130)
0xf2: @@ SetMessage(Stack[-1])
0xf3: Pop(1)
0xf4: @@ ClearReplies()
0xf5: Pop(0)
0xf6: Push((int) 528131)
0xf7: Push((int) 29481)
0xf8: Push((int) 29479)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Push((int) 528132)
0xfc: Push((int) 29481)
0xfd: Push((int) 29480)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Return(); Pop(0)

0x101: Push((int) 29481)
0x102: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x104: PushEmpty(string)
0x105: Stack[-1] = "Neutral"
0x106: Call2 0x8e

0x107: Pop(1)
0x108: Push((int) 528133)
0x109: @@ SetMessage(Stack[-1])
0x10a: Pop(1)
0x10b: @@ ClearReplies()
0x10c: Pop(0)
0x10d: Push((int) 526996)
0x10e: Push((int) -1)
0x10f: Push((int) 28288)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x114: PushEmpty(bool)
0x115: Call2 0x292

0x116: Pop(0)
0x117: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x118: @ lshStopAnimation()
0x119: Pop(0)
0x11a: GOTO 0x11d

0x11b: @ StopAnimation()
0x11c: Pop(0)
0x11d: Return(); Pop(0)

0x11e: GOTO 0xa5

0x11f: Return(); Pop(0)

0x120: PushEmpty(float, float)
0x121: Stack[-2] = (int) 300
0x122: Stack[-1] = (int) 100
0x123: Call2 0x135

0x124: Pop(2)
0x125: Push((int) 3)
0x126: @ Sleep(Stack[-1])
0x127: Pop(1)
0x128: GOTO 0x120

0x129: Return(); Pop(0)

0x12a: PushEmpty()
0x12b: PushEmpty()
0x12c: Call2 0x176

0x12d: Pop(0)
0x12e: PushEmpty(int, object)
0x12f: Stack[-1] = Stack[-3]
0x130: Push(-2, 1); TaskCall(0)
0x131: Call2 0x0

0x132: Pop(-2, 1); TaskReturn
0x133: Pop(2)
0x134: Return(); Pop(0)

0x135: PushEmpty()
0x136: PushEmpty(bool)
0x137: Call2 0x1e2

0x138: Pop(0)
0x139: Pop(1); Push((bool) Stack[-1] == 0)
0x13a: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x13b: Return(); Pop(0)

0x13c: Push("player")
0x13d: @ FindActor(Stack[-4], Stack[-1])
0x13e: Pop(1)
0x13f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x140: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x141: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x142: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x143: Push((int) 10)
0x144: Push((float)1.0)
0x145: @ SetTimer(Stack[-2], Stack[-1])
0x146: Pop(2)
0x147: PushEmpty()
0x148: Call2 0x184

0x149: Pop(0)
0x14a: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x14b: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14c: Push((int) 10)
0x14d: @ KillTimer(Stack[-1])
0x14e: Pop(1)
0x14f: Return(); Pop(0)

0x150: PushEmpty(float, float)
0x151: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x152: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x153: Stack[-3] = (bool) 0
0x154: Return(); Pop(2)

0x155: PushEmpty(float, object)
0x156: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x157: Call2 0x1da

0x158: Pop(1)
0x159: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x15a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x15b: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15c: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x15d: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x15e: Return(); Pop(2)

0x15f: PushEmpty()
0x160: Push((int) 10)
0x161: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x163: PushEmpty(bool)
0x164: Call2 0x150

0x165: Pop(0)
0x166: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x167: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x168: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x169: PushEmpty(object)
0x16a: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x16b: Call2 0x25d

0x16c: Pop(1)
0x16d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x16e: GOTO 0x175

0x16f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x170: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x171: Push("head")
0x172: @ UnlookAsync(Stack[-1])
0x173: Pop(1)
0x174: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x175: Return(); Pop(0)

0x176: PushEmpty()
0x177: Call2 0x1d5

0x178: Pop(0)
0x179: Push((int) 10)
0x17a: @ KillTimer(Stack[-1])
0x17b: Pop(1)
0x17c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x17d: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x17e: Push("head")
0x17f: @ UnlookAsync(Stack[-1])
0x180: Pop(1)
0x181: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x182: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x183: Return(); Pop(0)

0x184: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x185: @ WaitForAnimEnd()
0x186: Pop(0)
0x187: PushEmpty(bool)
0x188: Call2 0x1e2

0x189: Pop(0)
0x18a: Pop(1); Push((bool) Stack[-1] == 0)
0x18b: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18c: Return(); Pop(14)

0x18d: PushEmpty(int)
0x18e: Call2 0x29b

0x18f: Stack[-8] = Stack[-1]
0x190: Pop(1)
0x191: Stack[-6] = (int) 0
0x192: PushEmpty(bool)
0x193: Stack[-1] = (bool) 0
0x194: Push((int) 5)
0x195: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x196: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x197: PushEmpty(bool)
0x198: Call2 0x1e2

0x199: Pop(0)
0x19a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19b: Stack[-1] = (bool) 1
0x19c: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x19d: Push((int) 3)
0x19e: @ irand(Stack[-6], Stack[-1])
0x19f: Pop(1)
0x1a0: Push((int) 0)
0x1a1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1a3: Push(Stack[-7])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1a5: @ irand(Stack[-4], Stack[-7])
0x1a6: Pop(0)
0x1a7: Push("all")
0x1a8: PushEmpty(string, int)
0x1a9: Stack[-1] = Stack[-7]
0x1aa: Call2 0x294

0x1ab: Pop(1)
0x1ac: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ad: Pop(2)
0x1ae: @ WaitForAnimEnd(Stack[-3])
0x1af: Pop(0)
0x1b0: Pop(0); Push((bool) Stack[-3] == 0)
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b2: GOTO 0x1d0

0x1b3: GOTO 0x1c5

0x1b4: Push((int) 1)
0x1b5: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1b7: Push((int) 4)
0x1b8: @ rand(Stack[-3], Stack[-1])
0x1b9: Pop(1)
0x1ba: Push((int) 1)
0x1bb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1bc: @ Sleep(Stack[-1], Stack[-2])
0x1bd: Pop(1)
0x1be: Pop(0); Push((bool) Stack[-1] == 0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: GOTO 0x1d0

0x1c1: GOTO 0x1c5

0x1c2: Push(Stack[-6])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: GOTO 0x1d0

0x1c5: PushEmpty(bool)
0x1c6: Call2 0x1d3

0x1c7: Pop(0)
0x1c8: Pop(1); Push((bool) Stack[-1] == 0)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1ca: GOTO 0x1d0

0x1cb: @ ResetAAS()
0x1cc: Pop(0)
0x1cd: Push((int) 1)
0x1ce: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1cf: GOTO 0x192

0x1d0: @ ResetAAS()
0x1d1: Pop(0)
0x1d2: Return(); Pop(14)

0x1d3: Stack[-1] = (bool) 1
0x1d4: Return(); Pop(0)

0x1d5: @ StopAnimation()
0x1d6: Pop(0)
0x1d7: @ StopGroup0()
0x1d8: Pop(0)
0x1d9: Return(); Pop(0)

0x1da: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1db: @ GetPosition(Stack[-3])
0x1dc: Pop(0)
0x1dd: @@ GetPosition(Stack[-2])
0x1de: Pop(0)
0x1df: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1e0: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1e1: Return(); Pop(6)

0x1e2: PushEmpty(bool, bool)
0x1e3: @ IsLoaded(Stack[-1])
0x1e4: Pop(0)
0x1e5: Stack[-3] = Stack[-1]
0x1e6: Return(); Pop(2)

0x1e7: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1e8: @@ GetPosition(Stack[-8])
0x1e9: Pop(0)
0x1ea: @@ GetEyesHeight(Stack[-9])
0x1eb: Pop(0)
0x1ec: Push(CvectorIndex(Stack[-8], 1))
0x1ed: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1ee: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1ef: @ GetPosition(Stack[-7])
0x1f0: Pop(0)
0x1f1: @ GetEyesHeight(Stack[-9])
0x1f2: Pop(0)
0x1f3: Push(CvectorIndex(Stack[-7], 1))
0x1f4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1f5: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1f6: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1f7: Push(CvectorIndex(Stack[-6], 1))
0x1f8: Stack[-1] = (int) 0
0x1f9: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1fa: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1fb: Pop(1); Push(Sqrt(Stack[-1]))
0x1fc: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1fd: Stack[-5] = -Stack[-6]; Pop(0);
0x1fe: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1ff: PushEmpty(cvector, cvector)
0x200: Push(CVector(0.0, 1.0, 0.0))
0x201: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x202: Call2 0x26f

0x203: Pop(1)
0x204: Push((int) 25)
0x205: Pop(2); Push(Stack[-2] * Stack[-1]);
0x206: Pop(2); Push(Stack[-2] + Stack[-1]);
0x207: Push(CVector(0.0, 10.0, 0.0))
0x208: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x209: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x20a: @ IsOverrideActive(Stack[-2])
0x20b: Pop(0)
0x20c: Push(Stack[-2])
0x20d: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20e: Stack[-21] = (bool) 0
0x20f: Return(); Pop(18)

0x210: @ StopWorld()
0x211: Pop(0)
0x212: Push((bool) 1)
0x213: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x214: Pop(1)
0x215: Push(CvectorIndex(Stack[-4], 0))
0x216: Push(CvectorIndex(Stack[-5], 2))
0x217: @ Rotate(Stack[-2], Stack[-1])
0x218: Pop(2)
0x219: PushEmpty(bool)
0x21a: Call2 0x292

0x21b: Pop(0)
0x21c: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21d: GOTO 0x226

0x21e: Push("head")
0x21f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x220: Pop(1)
0x221: Push(Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x223: Push("head")
0x224: @ LookAsyncCamera(Stack[-1])
0x225: Pop(1)
0x226: @ CameraWaitForPlayFinish()
0x227: Pop(0)
0x228: @ ResumeWorld()
0x229: Pop(0)
0x22a: Stack[-21] = (bool) 1
0x22b: Return(); Pop(18)

0x22c: PushEmpty(bool, bool)
0x22d: Push((bool) 1)
0x22e: @ CameraSwitchToNormal(Stack[-1])
0x22f: Pop(1)
0x230: PushEmpty(bool)
0x231: Call2 0x292

0x232: Pop(0)
0x233: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x234: GOTO 0x23d

0x235: Push("head")
0x236: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x237: Pop(1)
0x238: Push(Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23a: Push("head")
0x23b: @ UnlookAsync(Stack[-1])
0x23c: Pop(1)
0x23d: Return(); Pop(2)

0x23e: PushEmpty(bool, float, float, bool, float, float)
0x23f: @ lshHasAnimation(Stack[-3], Stack[-7])
0x240: Pop(0)
0x241: Push(Stack[-3])
0x242: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x243: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x244: Pop(0)
0x245: Push((bool) 0)
0x246: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x247: Pop(1)
0x248: GOTO 0x24d

0x249: Push("Can't find lsh animation : ")
0x24a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x24b: @ Trace(Stack[-1])
0x24c: Pop(1)
0x24d: Return(); Pop(6)

0x24e: PushEmpty(bool, float, float, bool, float, float)
0x24f: @ lshHasAnimation(Stack[-3], Stack[-8])
0x250: Pop(0)
0x251: Push(Stack[-3])
0x252: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x253: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x254: Pop(0)
0x255: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x256: Pop(0)
0x257: GOTO 0x25c

0x258: Push("Can't find lsh animation : ")
0x259: Pop(1); Push(Stack[-1] + Stack[-9]);
0x25a: @ Trace(Stack[-1])
0x25b: Pop(1)
0x25c: Return(); Pop(6)

0x25d: PushEmpty(float, cvector, float, cvector)
0x25e: @@ GetEyesHeight(Stack[-2])
0x25f: Pop(0)
0x260: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x261: Push(CvectorIndex(Stack[-1], 1))
0x262: Stack[-1] = Stack[-3]
0x263: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x264: Push("head")
0x265: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x266: Pop(1)
0x267: Return(); Pop(4)

0x268: PushEmpty(bool)
0x269: Call2 0x292

0x26a: Pop(0)
0x26b: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26c: @ lshStopSpeech()
0x26d: Pop(0)
0x26e: Return(); Pop(0)

0x26f: PushEmpty(float, float)
0x270: Pop(0); Push(Stack[-3] | Stack[-3]);
0x271: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x272: Push((float)0.0)
0x273: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x274: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x275: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x276: Return(); Pop(2)

0x277: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x278: Return(); Pop(2)

0x279: PushEmpty(int, int)
0x27a: @ GetVariable(Stack[-3], Stack[-1])
0x27b: Pop(0)
0x27c: Stack[-4] = Stack[-1]
0x27d: Return(); Pop(2)

0x27e: PushEmpty(object, object)
0x27f: @ FindActor(Stack[-1], Stack[-4])
0x280: Pop(0)
0x281: Pop(0); Push((bool) Stack[-1] == 0)
0x282: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x283: Stack[-5] = (bool) 0
0x284: Return(); Pop(2)

0x285: @ Trigger(Stack[-1], Stack[-3])
0x286: Pop(0)
0x287: Stack[-5] = (bool) 1
0x288: Return(); Pop(2)

0x289: Stack[-1] = 0
0x28a: Stack[-1] = (int) 518716
0x28b: Return(); Pop(0)

0x28c: Stack[-1] = (int) 518715
0x28d: Return(); Pop(0)

0x28e: Stack[-1] = "ui/NPC_Prophet.png"
0x28f: Return(); Pop(0)

0x290: Stack[-1] = "ui/NPC_Prophet_b.png"
0x291: Return(); Pop(0)

0x292: Stack[-1] = (bool) 0
0x293: Return(); Pop(0)

0x294: PushEmpty(string, string)
0x295: Stack[-1] = "idle"
0x296: Push(Stack[-3])
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x299: Stack[-4] = Stack[-1]
0x29a: Return(); Pop(2)

0x29b: PushEmpty(int, bool, int, bool)
0x29c: Stack[-2] = (int) 0
0x29d: Push("all")
0x29e: PushEmpty(string, int)
0x29f: Stack[-1] = Stack[-5]
0x2a0: Call2 0x294

0x2a1: Pop(1)
0x2a2: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2a3: Pop(2)
0x2a4: Pop(0); Push((bool) Stack[-1] == 0)
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a6: GOTO 0x2aa

0x2a7: Push((int) 1)
0x2a8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2a9: GOTO 0x29d

0x2aa: Stack[-5] = Stack[-2]
0x2ab: Return(); Pop(4)

0x2ac: PushEmpty()
0x2ad: PushEmpty(bool, string, string)
0x2ae: Stack[-2] = "quest_k10_01"
0x2af: Stack[-1] = "teleport"
0x2b0: Call2 0x27e

0x2b1: Pop(3)
0x2b2: Return(); Pop(0)

0x2b3: PushEmpty()
0x2b4: PushEmpty(int, string)
0x2b5: Stack[-1] = "k10q01"
0x2b6: Call2 0x279

0x2b7: Pop(1)
0x2b8: Push((int) 7)
0x2b9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2bb: Stack[-2] = (bool) 1
0x2bc: Return(); Pop(0)

0x2bd: Stack[-2] = (bool) 0
0x2be: Return(); Pop(0)

0x2bf: PushEmpty(int, int)
0x2c0: Push("branch")
0x2c1: @ GetVariable(Stack[-1], Stack[-2])
0x2c2: Pop(1)
0x2c3: Push((int) 0)
0x2c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c5: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c6: Stack[-3] = (int) 1
0x2c7: Return(); Pop(2)

0x2c8: GOTO 0x2ce

0x2c9: Push((int) 1)
0x2ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cc: Stack[-3] = (int) 2
0x2cd: Return(); Pop(2)

0x2ce: Stack[-3] = (int) 3
0x2cf: Return(); Pop(2)

