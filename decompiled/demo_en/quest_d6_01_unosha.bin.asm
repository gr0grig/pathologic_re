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
	ood6Unosha1
	ood6Unosha2
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
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x125
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa9 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x131 Vars = (object)
		EVENT_7 Op = 0x166 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1ee

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x29d

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x29b

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x29f

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2a1

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2c9

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
0x41: Call2 0x232

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
0x54: Push((int) 504018)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x2b1

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 504019)
0x5f: Push((int) 4375)
0x60: Push((int) 4374)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: PushEmpty(bool, object)
0x64: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x65: Call2 0x2bd

0x66: Pop(1)
0x67: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x68: Push((int) 504021)
0x69: Push((int) 4377)
0x6a: Push((int) 4376)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: Push((int) 536329)
0x6e: Push((int) -1)
0x6f: Push((int) 38110)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: GOTO 0x75

0x73: Return(); Pop(0)

0x74: GOTO 0x4e

0x75: PushEmpty(bool)
0x76: Call2 0x2a3

0x77: Pop(0)
0x78: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x79: @ lshWaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: PushEmpty(string)
0x7f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x80: Call2 0x243

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
0x95: Call2 0x2a3

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
0xa5: Call2 0x253

0xa6: Pop(2)
0xa7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: Push((int) 1)
0xab: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0xac: PushEmpty()
0xad: Call2 0x26d

0xae: Pop(0)
0xaf: Push((int) 4374)
0xb0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb2: PushEmpty(object, object)
0xb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5: Call2 0x2a5

0xb6: Pop(2)
0xb7: Push((int) 4376)
0xb8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xba: PushEmpty(object, object)
0xbb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd: Call2 0x2ab

0xbe: Pop(2)
0xbf: Push((int) 4373)
0xc0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xc2: PushEmpty(string)
0xc3: Stack[-1] = "Neutral"
0xc4: Call2 0x93

0xc5: Pop(1)
0xc6: Push((int) 504018)
0xc7: @@ SetMessage(Stack[-1])
0xc8: Pop(1)
0xc9: @@ ClearReplies()
0xca: Pop(0)
0xcb: PushEmpty(bool, object)
0xcc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Call2 0x2b1

0xce: Pop(1)
0xcf: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd0: Push((int) 504019)
0xd1: Push((int) 4375)
0xd2: Push((int) 4374)
0xd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4: Pop(3)
0xd5: PushEmpty(bool, object)
0xd6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Call2 0x2bd

0xd8: Pop(1)
0xd9: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xda: Push((int) 504021)
0xdb: Push((int) 4377)
0xdc: Push((int) 4376)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Push((int) 536329)
0xe0: Push((int) -1)
0xe1: Push((int) 38110)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Return(); Pop(0)

0xe5: Push((int) 4377)
0xe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral"
0xea: Call2 0x93

0xeb: Pop(1)
0xec: Push((int) 504022)
0xed: @@ SetMessage(Stack[-1])
0xee: Pop(1)
0xef: @@ ClearReplies()
0xf0: Pop(0)
0xf1: Push((int) 504023)
0xf2: Push((int) -1)
0xf3: Push((int) 4378)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Push((int) 504024)
0xf7: Push((int) -1)
0xf8: Push((int) 4379)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Push((int) 504025)
0xfc: Push((int) -1)
0xfd: Push((int) 4380)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Return(); Pop(0)

0x101: Push((int) 4375)
0x102: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x104: PushEmpty(string)
0x105: Stack[-1] = "Neutral"
0x106: Call2 0x93

0x107: Pop(1)
0x108: Push((int) 504020)
0x109: @@ SetMessage(Stack[-1])
0x10a: Pop(1)
0x10b: @@ ClearReplies()
0x10c: Pop(0)
0x10d: Push((int) 504026)
0x10e: Push((int) -1)
0x10f: Push((int) 4381)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Push((int) 504027)
0x113: Push((int) -1)
0x114: Push((int) 4382)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x119: PushEmpty(bool)
0x11a: Call2 0x2a3

0x11b: Pop(0)
0x11c: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11d: @ lshStopAnimation()
0x11e: Pop(0)
0x11f: GOTO 0x122

0x120: @ StopAnimation()
0x121: Pop(0)
0x122: Return(); Pop(0)

0x123: GOTO 0xaa

0x124: Return(); Pop(0)

0x125: Push((bool) 1)
0x126: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x127: Push((int) 1)
0x128: @ Sleep(Stack[-1])
0x129: Pop(1)
0x12a: PushEmpty(float, float)
0x12b: Stack[-2] = (int) 300
0x12c: Stack[-1] = (int) 100
0x12d: Call2 0x13c

0x12e: Pop(2)
0x12f: GOTO 0x125

0x130: Return(); Pop(0)

0x131: PushEmpty()
0x132: PushEmpty()
0x133: Call2 0x17d

0x134: Pop(0)
0x135: PushEmpty(int, object)
0x136: Stack[-1] = Stack[-3]
0x137: Push(-2, 1); TaskCall(0)
0x138: Call2 0x0

0x139: Pop(-2, 1); TaskReturn
0x13a: Pop(2)
0x13b: Return(); Pop(0)

0x13c: PushEmpty()
0x13d: PushEmpty(bool)
0x13e: Call2 0x1e9

0x13f: Pop(0)
0x140: Pop(1); Push((bool) Stack[-1] == 0)
0x141: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x142: Return(); Pop(0)

0x143: Push("player")
0x144: @ FindActor(Stack[-4], Stack[-1])
0x145: Pop(1)
0x146: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x147: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x148: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x149: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x14a: Push((int) 10)
0x14b: Push((float)1.0)
0x14c: @ SetTimer(Stack[-2], Stack[-1])
0x14d: Pop(2)
0x14e: PushEmpty()
0x14f: Call2 0x18b

0x150: Pop(0)
0x151: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x152: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x153: Push((int) 10)
0x154: @ KillTimer(Stack[-1])
0x155: Pop(1)
0x156: Return(); Pop(0)

0x157: PushEmpty(float, float)
0x158: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x159: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x15a: Stack[-3] = (bool) 0
0x15b: Return(); Pop(2)

0x15c: PushEmpty(float, object)
0x15d: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x15e: Call2 0x1e1

0x15f: Pop(1)
0x160: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x161: Push( Stack[2 + Tasks[-1].StackPointer] )
0x162: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x163: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x164: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x165: Return(); Pop(2)

0x166: PushEmpty()
0x167: Push((int) 10)
0x168: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x169: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x16a: PushEmpty(bool)
0x16b: Call2 0x157

0x16c: Pop(0)
0x16d: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x16e: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x16f: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x170: PushEmpty(object)
0x171: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x172: Call2 0x262

0x173: Pop(1)
0x174: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x175: GOTO 0x17c

0x176: Push( Stack[2 + Tasks[-1].StackPointer] )
0x177: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x178: Push("head")
0x179: @ UnlookAsync(Stack[-1])
0x17a: Pop(1)
0x17b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x17c: Return(); Pop(0)

0x17d: PushEmpty()
0x17e: Call2 0x1dc

0x17f: Pop(0)
0x180: Push((int) 10)
0x181: @ KillTimer(Stack[-1])
0x182: Pop(1)
0x183: Push( Stack[2 + Tasks[-1].StackPointer] )
0x184: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x185: Push("head")
0x186: @ UnlookAsync(Stack[-1])
0x187: Pop(1)
0x188: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x189: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x18a: Return(); Pop(0)

0x18b: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x18c: @ WaitForAnimEnd()
0x18d: Pop(0)
0x18e: PushEmpty(bool)
0x18f: Call2 0x1e9

0x190: Pop(0)
0x191: Pop(1); Push((bool) Stack[-1] == 0)
0x192: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x193: Return(); Pop(14)

0x194: PushEmpty(int)
0x195: Call2 0x28a

0x196: Stack[-8] = Stack[-1]
0x197: Pop(1)
0x198: Stack[-6] = (int) 0
0x199: PushEmpty(bool)
0x19a: Stack[-1] = (bool) 0
0x19b: Push((int) 5)
0x19c: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x19d: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x19e: PushEmpty(bool)
0x19f: Call2 0x1e9

0x1a0: Pop(0)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a2: Stack[-1] = (bool) 1
0x1a3: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1a4: Push((int) 3)
0x1a5: @ irand(Stack[-6], Stack[-1])
0x1a6: Pop(1)
0x1a7: Push((int) 0)
0x1a8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1aa: Push(Stack[-7])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1ac: @ irand(Stack[-4], Stack[-7])
0x1ad: Pop(0)
0x1ae: Push("all")
0x1af: PushEmpty(string, int)
0x1b0: Stack[-1] = Stack[-7]
0x1b1: Call2 0x283

0x1b2: Pop(1)
0x1b3: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b4: Pop(2)
0x1b5: @ WaitForAnimEnd(Stack[-3])
0x1b6: Pop(0)
0x1b7: Pop(0); Push((bool) Stack[-3] == 0)
0x1b8: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b9: GOTO 0x1d7

0x1ba: GOTO 0x1cc

0x1bb: Push((int) 1)
0x1bc: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1be: Push((int) 4)
0x1bf: @ rand(Stack[-3], Stack[-1])
0x1c0: Pop(1)
0x1c1: Push((int) 1)
0x1c2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1c3: @ Sleep(Stack[-1], Stack[-2])
0x1c4: Pop(1)
0x1c5: Pop(0); Push((bool) Stack[-1] == 0)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c7: GOTO 0x1d7

0x1c8: GOTO 0x1cc

0x1c9: Push(Stack[-6])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1cb: GOTO 0x1d7

0x1cc: PushEmpty(bool)
0x1cd: Call2 0x1da

0x1ce: Pop(0)
0x1cf: Pop(1); Push((bool) Stack[-1] == 0)
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d1: GOTO 0x1d7

0x1d2: @ ResetAAS()
0x1d3: Pop(0)
0x1d4: Push((int) 1)
0x1d5: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1d6: GOTO 0x199

0x1d7: @ ResetAAS()
0x1d8: Pop(0)
0x1d9: Return(); Pop(14)

0x1da: Stack[-1] = (bool) 1
0x1db: Return(); Pop(0)

0x1dc: @ StopAnimation()
0x1dd: Pop(0)
0x1de: @ StopGroup0()
0x1df: Pop(0)
0x1e0: Return(); Pop(0)

0x1e1: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1e2: @ GetPosition(Stack[-3])
0x1e3: Pop(0)
0x1e4: @@ GetPosition(Stack[-2])
0x1e5: Pop(0)
0x1e6: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1e7: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1e8: Return(); Pop(6)

0x1e9: PushEmpty(bool, bool)
0x1ea: @ IsLoaded(Stack[-1])
0x1eb: Pop(0)
0x1ec: Stack[-3] = Stack[-1]
0x1ed: Return(); Pop(2)

0x1ee: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1ef: @@ GetPosition(Stack[-8])
0x1f0: Pop(0)
0x1f1: @@ GetEyesHeight(Stack[-9])
0x1f2: Pop(0)
0x1f3: Push(CvectorIndex(Stack[-8], 1))
0x1f4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1f5: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1f6: @ GetPosition(Stack[-7])
0x1f7: Pop(0)
0x1f8: @ GetEyesHeight(Stack[-9])
0x1f9: Pop(0)
0x1fa: Push(CvectorIndex(Stack[-7], 1))
0x1fb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1fc: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1fd: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1fe: Push(CvectorIndex(Stack[-6], 1))
0x1ff: Stack[-1] = (int) 0
0x200: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x201: Pop(0); Push(Stack[-6] | Stack[-6]);
0x202: Pop(1); Push(Sqrt(Stack[-1]))
0x203: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x204: Stack[-5] = -Stack[-6]; Pop(0);
0x205: Pop(0); Push(Stack[-6] * Stack[-19]);
0x206: PushEmpty(cvector, cvector)
0x207: Push(CVector(0.0, 1.0, 0.0))
0x208: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x209: Call2 0x274

0x20a: Pop(1)
0x20b: Push((int) 25)
0x20c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x20d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x20e: Push(CVector(0.0, 10.0, 0.0))
0x20f: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x210: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x211: @ IsOverrideActive(Stack[-2])
0x212: Pop(0)
0x213: Push(Stack[-2])
0x214: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x215: Stack[-21] = (bool) 0
0x216: Return(); Pop(18)

0x217: @ StopWorld()
0x218: Pop(0)
0x219: @ CameraTransit(Stack[-3], Stack[-5])
0x21a: Pop(0)
0x21b: Push(CvectorIndex(Stack[-4], 0))
0x21c: Push(CvectorIndex(Stack[-5], 2))
0x21d: @ Rotate(Stack[-2], Stack[-1])
0x21e: Pop(2)
0x21f: PushEmpty(bool)
0x220: Call2 0x2a3

0x221: Pop(0)
0x222: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x223: GOTO 0x22c

0x224: Push("head")
0x225: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x226: Pop(1)
0x227: Push(Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x229: Push("head")
0x22a: @ LookAsyncCamera(Stack[-1])
0x22b: Pop(1)
0x22c: @ CameraWaitForPlayFinish()
0x22d: Pop(0)
0x22e: @ ResumeWorld()
0x22f: Pop(0)
0x230: Stack[-21] = (bool) 1
0x231: Return(); Pop(18)

0x232: PushEmpty(bool, bool)
0x233: @ CameraSwitchToNormal()
0x234: Pop(0)
0x235: PushEmpty(bool)
0x236: Call2 0x2a3

0x237: Pop(0)
0x238: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x239: GOTO 0x242

0x23a: Push("head")
0x23b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x23c: Pop(1)
0x23d: Push(Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x23f: Push("head")
0x240: @ UnlookAsync(Stack[-1])
0x241: Pop(1)
0x242: Return(); Pop(2)

0x243: PushEmpty(bool, float, float, bool, float, float)
0x244: @ lshHasAnimation(Stack[-3], Stack[-7])
0x245: Pop(0)
0x246: Push(Stack[-3])
0x247: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x248: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x249: Pop(0)
0x24a: Push((bool) 0)
0x24b: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x24c: Pop(1)
0x24d: GOTO 0x252

0x24e: Push("Can't find lsh animation : ")
0x24f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x250: @ Trace(Stack[-1])
0x251: Pop(1)
0x252: Return(); Pop(6)

0x253: PushEmpty(bool, float, float, bool, float, float)
0x254: @ lshHasAnimation(Stack[-3], Stack[-8])
0x255: Pop(0)
0x256: Push(Stack[-3])
0x257: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x258: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x259: Pop(0)
0x25a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x25b: Pop(0)
0x25c: GOTO 0x261

0x25d: Push("Can't find lsh animation : ")
0x25e: Pop(1); Push(Stack[-1] + Stack[-9]);
0x25f: @ Trace(Stack[-1])
0x260: Pop(1)
0x261: Return(); Pop(6)

0x262: PushEmpty(float, cvector, float, cvector)
0x263: @@ GetEyesHeight(Stack[-2])
0x264: Pop(0)
0x265: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x266: Push(CvectorIndex(Stack[-1], 1))
0x267: Stack[-1] = Stack[-3]
0x268: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x269: Push("head")
0x26a: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x26b: Pop(1)
0x26c: Return(); Pop(4)

0x26d: PushEmpty(bool)
0x26e: Call2 0x2a3

0x26f: Pop(0)
0x270: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x271: @ lshStopSpeech()
0x272: Pop(0)
0x273: Return(); Pop(0)

0x274: PushEmpty(float, float)
0x275: Pop(0); Push(Stack[-3] | Stack[-3]);
0x276: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x277: Push((float)0.0)
0x278: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x27b: Return(); Pop(2)

0x27c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x27d: Return(); Pop(2)

0x27e: PushEmpty(int, int)
0x27f: @ GetVariable(Stack[-3], Stack[-1])
0x280: Pop(0)
0x281: Stack[-4] = Stack[-1]
0x282: Return(); Pop(2)

0x283: PushEmpty(string, string)
0x284: Stack[-1] = "idle"
0x285: Push(Stack[-3])
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x288: Stack[-4] = Stack[-1]
0x289: Return(); Pop(2)

0x28a: PushEmpty(int, bool, int, bool)
0x28b: Stack[-2] = (int) 0
0x28c: Push("all")
0x28d: PushEmpty(string, int)
0x28e: Stack[-1] = Stack[-5]
0x28f: Call2 0x283

0x290: Pop(1)
0x291: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x292: Pop(2)
0x293: Pop(0); Push((bool) Stack[-1] == 0)
0x294: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x295: GOTO 0x299

0x296: Push((int) 1)
0x297: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x298: GOTO 0x28c

0x299: Stack[-5] = Stack[-2]
0x29a: Return(); Pop(4)

0x29b: Stack[-1] = (int) 515564
0x29c: Return(); Pop(0)

0x29d: Stack[-1] = (int) 503349
0x29e: Return(); Pop(0)

0x29f: Stack[-1] = "ui/NPC_Citizen2.png"
0x2a0: Return(); Pop(0)

0x2a1: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x2a2: Return(); Pop(0)

0x2a3: Stack[-1] = (bool) 0
0x2a4: Return(); Pop(0)

0x2a5: PushEmpty()
0x2a6: Push("ood6Unosha1")
0x2a7: Push((int) 1)
0x2a8: @ SetVariable(Stack[-2], Stack[-1])
0x2a9: Pop(2)
0x2aa: Return(); Pop(0)

0x2ab: PushEmpty()
0x2ac: Push("ood6Unosha2")
0x2ad: Push((int) 1)
0x2ae: @ SetVariable(Stack[-2], Stack[-1])
0x2af: Pop(2)
0x2b0: Return(); Pop(0)

0x2b1: PushEmpty()
0x2b2: PushEmpty(int, string)
0x2b3: Stack[-1] = "ood6Unosha1"
0x2b4: Call2 0x27e

0x2b5: Pop(1)
0x2b6: Push((int) 0)
0x2b7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2b8: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b9: Stack[-2] = (bool) 1
0x2ba: Return(); Pop(0)

0x2bb: Stack[-2] = (bool) 0
0x2bc: Return(); Pop(0)

0x2bd: PushEmpty()
0x2be: PushEmpty(int, string)
0x2bf: Stack[-1] = "ood6Unosha2"
0x2c0: Call2 0x27e

0x2c1: Pop(1)
0x2c2: Push((int) 0)
0x2c3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c5: Stack[-2] = (bool) 1
0x2c6: Return(); Pop(0)

0x2c7: Stack[-2] = (bool) 0
0x2c8: Return(); Pop(0)

0x2c9: PushEmpty(int, int)
0x2ca: Push("branch")
0x2cb: @ GetVariable(Stack[-1], Stack[-2])
0x2cc: Pop(1)
0x2cd: Push((int) 0)
0x2ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d0: Stack[-3] = (int) 1
0x2d1: Return(); Pop(2)

0x2d2: GOTO 0x2d8

0x2d3: Push((int) 1)
0x2d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d6: Stack[-3] = (int) 2
0x2d7: Return(); Pop(2)

0x2d8: Stack[-3] = (int) 3
0x2d9: Return(); Pop(2)

