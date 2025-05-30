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
	ood6Littlegirl1
	ood6Littlegirl2
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

RunOp = 0x12d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa9 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x139 Vars = (object)
		EVENT_7 Op = 0x16e Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1f6

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2a5

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2a3

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2a7

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2a9

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2d1

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
0x41: Call2 0x23a

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
0x54: Push((int) 503978)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x2b9

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 503979)
0x5f: Push((int) 4336)
0x60: Push((int) 4332)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: PushEmpty(bool, object)
0x64: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x65: Call2 0x2c5

0x66: Pop(1)
0x67: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x68: Push((int) 503980)
0x69: Push((int) 4334)
0x6a: Push((int) 4333)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: Push((int) 536325)
0x6e: Push((int) -1)
0x6f: Push((int) 38106)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: GOTO 0x75

0x73: Return(); Pop(0)

0x74: GOTO 0x4e

0x75: PushEmpty(bool)
0x76: Call2 0x2ab

0x77: Pop(0)
0x78: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x79: @ lshWaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: PushEmpty(string)
0x7f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x80: Call2 0x24b

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
0x95: Call2 0x2ab

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
0xa5: Call2 0x25b

0xa6: Pop(2)
0xa7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: Push((int) 1)
0xab: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0xac: PushEmpty()
0xad: Call2 0x275

0xae: Pop(0)
0xaf: Push((int) 4332)
0xb0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb2: PushEmpty(object, object)
0xb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5: Call2 0x2ad

0xb6: Pop(2)
0xb7: Push((int) 4333)
0xb8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xba: PushEmpty(object, object)
0xbb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd: Call2 0x2b3

0xbe: Pop(2)
0xbf: Push((int) 4331)
0xc0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xc2: PushEmpty(string)
0xc3: Stack[-1] = "Neutral"
0xc4: Call2 0x93

0xc5: Pop(1)
0xc6: Push((int) 503978)
0xc7: @@ SetMessage(Stack[-1])
0xc8: Pop(1)
0xc9: @@ ClearReplies()
0xca: Pop(0)
0xcb: PushEmpty(bool, object)
0xcc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Call2 0x2b9

0xce: Pop(1)
0xcf: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd0: Push((int) 503979)
0xd1: Push((int) 4336)
0xd2: Push((int) 4332)
0xd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4: Pop(3)
0xd5: PushEmpty(bool, object)
0xd6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Call2 0x2c5

0xd8: Pop(1)
0xd9: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xda: Push((int) 503980)
0xdb: Push((int) 4334)
0xdc: Push((int) 4333)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Push((int) 536325)
0xe0: Push((int) -1)
0xe1: Push((int) 38106)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Return(); Pop(0)

0xe5: Push((int) 4334)
0xe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral"
0xea: Call2 0x93

0xeb: Pop(1)
0xec: Push((int) 503981)
0xed: @@ SetMessage(Stack[-1])
0xee: Pop(1)
0xef: @@ ClearReplies()
0xf0: Pop(0)
0xf1: Push((int) 503982)
0xf2: Push((int) -1)
0xf3: Push((int) 4335)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Return(); Pop(0)

0xf7: Push((int) 4336)
0xf8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0xfa: PushEmpty(string)
0xfb: Stack[-1] = "Neutral"
0xfc: Call2 0x93

0xfd: Pop(1)
0xfe: Push((int) 503983)
0xff: @@ SetMessage(Stack[-1])
0x100: Pop(1)
0x101: @@ ClearReplies()
0x102: Pop(0)
0x103: Push((int) 503984)
0x104: Push((int) 4338)
0x105: Push((int) 4337)
0x106: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107: Pop(3)
0x108: Push((int) 503986)
0x109: Push((int) -1)
0x10a: Push((int) 4339)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Return(); Pop(0)

0x10e: Push((int) 4338)
0x10f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x111: PushEmpty(string)
0x112: Stack[-1] = "Neutral"
0x113: Call2 0x93

0x114: Pop(1)
0x115: Push((int) 503985)
0x116: @@ SetMessage(Stack[-1])
0x117: Pop(1)
0x118: @@ ClearReplies()
0x119: Pop(0)
0x11a: Push((int) 503987)
0x11b: Push((int) -1)
0x11c: Push((int) 4340)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x121: PushEmpty(bool)
0x122: Call2 0x2ab

0x123: Pop(0)
0x124: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x125: @ lshStopAnimation()
0x126: Pop(0)
0x127: GOTO 0x12a

0x128: @ StopAnimation()
0x129: Pop(0)
0x12a: Return(); Pop(0)

0x12b: GOTO 0xaa

0x12c: Return(); Pop(0)

0x12d: Push((bool) 1)
0x12e: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x12f: Push((int) 1)
0x130: @ Sleep(Stack[-1])
0x131: Pop(1)
0x132: PushEmpty(float, float)
0x133: Stack[-2] = (int) 300
0x134: Stack[-1] = (int) 100
0x135: Call2 0x144

0x136: Pop(2)
0x137: GOTO 0x12d

0x138: Return(); Pop(0)

0x139: PushEmpty()
0x13a: PushEmpty()
0x13b: Call2 0x185

0x13c: Pop(0)
0x13d: PushEmpty(int, object)
0x13e: Stack[-1] = Stack[-3]
0x13f: Push(-2, 1); TaskCall(0)
0x140: Call2 0x0

0x141: Pop(-2, 1); TaskReturn
0x142: Pop(2)
0x143: Return(); Pop(0)

0x144: PushEmpty()
0x145: PushEmpty(bool)
0x146: Call2 0x1f1

0x147: Pop(0)
0x148: Pop(1); Push((bool) Stack[-1] == 0)
0x149: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x14a: Return(); Pop(0)

0x14b: Push("player")
0x14c: @ FindActor(Stack[-4], Stack[-1])
0x14d: Pop(1)
0x14e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x14f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x150: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x151: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x152: Push((int) 10)
0x153: Push((float)1.0)
0x154: @ SetTimer(Stack[-2], Stack[-1])
0x155: Pop(2)
0x156: PushEmpty()
0x157: Call2 0x193

0x158: Pop(0)
0x159: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x15a: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15b: Push((int) 10)
0x15c: @ KillTimer(Stack[-1])
0x15d: Pop(1)
0x15e: Return(); Pop(0)

0x15f: PushEmpty(float, float)
0x160: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x161: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x162: Stack[-3] = (bool) 0
0x163: Return(); Pop(2)

0x164: PushEmpty(float, object)
0x165: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x166: Call2 0x1e9

0x167: Pop(1)
0x168: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x169: Push( Stack[2 + Tasks[-1].StackPointer] )
0x16a: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x16b: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x16c: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x16d: Return(); Pop(2)

0x16e: PushEmpty()
0x16f: Push((int) 10)
0x170: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x172: PushEmpty(bool)
0x173: Call2 0x15f

0x174: Pop(0)
0x175: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x176: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x177: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x178: PushEmpty(object)
0x179: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x17a: Call2 0x26a

0x17b: Pop(1)
0x17c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x17d: GOTO 0x184

0x17e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x17f: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x180: Push("head")
0x181: @ UnlookAsync(Stack[-1])
0x182: Pop(1)
0x183: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x184: Return(); Pop(0)

0x185: PushEmpty()
0x186: Call2 0x1e4

0x187: Pop(0)
0x188: Push((int) 10)
0x189: @ KillTimer(Stack[-1])
0x18a: Pop(1)
0x18b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x18c: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18d: Push("head")
0x18e: @ UnlookAsync(Stack[-1])
0x18f: Pop(1)
0x190: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x191: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x192: Return(); Pop(0)

0x193: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x194: @ WaitForAnimEnd()
0x195: Pop(0)
0x196: PushEmpty(bool)
0x197: Call2 0x1f1

0x198: Pop(0)
0x199: Pop(1); Push((bool) Stack[-1] == 0)
0x19a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19b: Return(); Pop(14)

0x19c: PushEmpty(int)
0x19d: Call2 0x292

0x19e: Stack[-8] = Stack[-1]
0x19f: Pop(1)
0x1a0: Stack[-6] = (int) 0
0x1a1: PushEmpty(bool)
0x1a2: Stack[-1] = (bool) 0
0x1a3: Push((int) 5)
0x1a4: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a6: PushEmpty(bool)
0x1a7: Call2 0x1f1

0x1a8: Pop(0)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1aa: Stack[-1] = (bool) 1
0x1ab: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1ac: Push((int) 3)
0x1ad: @ irand(Stack[-6], Stack[-1])
0x1ae: Pop(1)
0x1af: Push((int) 0)
0x1b0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1b2: Push(Stack[-7])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1b4: @ irand(Stack[-4], Stack[-7])
0x1b5: Pop(0)
0x1b6: Push("all")
0x1b7: PushEmpty(string, int)
0x1b8: Stack[-1] = Stack[-7]
0x1b9: Call2 0x28b

0x1ba: Pop(1)
0x1bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x1bc: Pop(2)
0x1bd: @ WaitForAnimEnd(Stack[-3])
0x1be: Pop(0)
0x1bf: Pop(0); Push((bool) Stack[-3] == 0)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1c1: GOTO 0x1df

0x1c2: GOTO 0x1d4

0x1c3: Push((int) 1)
0x1c4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1c6: Push((int) 4)
0x1c7: @ rand(Stack[-3], Stack[-1])
0x1c8: Pop(1)
0x1c9: Push((int) 1)
0x1ca: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1cb: @ Sleep(Stack[-1], Stack[-2])
0x1cc: Pop(1)
0x1cd: Pop(0); Push((bool) Stack[-1] == 0)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cf: GOTO 0x1df

0x1d0: GOTO 0x1d4

0x1d1: Push(Stack[-6])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d3: GOTO 0x1df

0x1d4: PushEmpty(bool)
0x1d5: Call2 0x1e2

0x1d6: Pop(0)
0x1d7: Pop(1); Push((bool) Stack[-1] == 0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d9: GOTO 0x1df

0x1da: @ ResetAAS()
0x1db: Pop(0)
0x1dc: Push((int) 1)
0x1dd: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1de: GOTO 0x1a1

0x1df: @ ResetAAS()
0x1e0: Pop(0)
0x1e1: Return(); Pop(14)

0x1e2: Stack[-1] = (bool) 1
0x1e3: Return(); Pop(0)

0x1e4: @ StopAnimation()
0x1e5: Pop(0)
0x1e6: @ StopGroup0()
0x1e7: Pop(0)
0x1e8: Return(); Pop(0)

0x1e9: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1ea: @ GetPosition(Stack[-3])
0x1eb: Pop(0)
0x1ec: @@ GetPosition(Stack[-2])
0x1ed: Pop(0)
0x1ee: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1ef: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1f0: Return(); Pop(6)

0x1f1: PushEmpty(bool, bool)
0x1f2: @ IsLoaded(Stack[-1])
0x1f3: Pop(0)
0x1f4: Stack[-3] = Stack[-1]
0x1f5: Return(); Pop(2)

0x1f6: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1f7: @@ GetPosition(Stack[-8])
0x1f8: Pop(0)
0x1f9: @@ GetEyesHeight(Stack[-9])
0x1fa: Pop(0)
0x1fb: Push(CvectorIndex(Stack[-8], 1))
0x1fc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1fd: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1fe: @ GetPosition(Stack[-7])
0x1ff: Pop(0)
0x200: @ GetEyesHeight(Stack[-9])
0x201: Pop(0)
0x202: Push(CvectorIndex(Stack[-7], 1))
0x203: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x204: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x205: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x206: Push(CvectorIndex(Stack[-6], 1))
0x207: Stack[-1] = (int) 0
0x208: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x209: Pop(0); Push(Stack[-6] | Stack[-6]);
0x20a: Pop(1); Push(Sqrt(Stack[-1]))
0x20b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x20c: Stack[-5] = -Stack[-6]; Pop(0);
0x20d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x20e: PushEmpty(cvector, cvector)
0x20f: Push(CVector(0.0, 1.0, 0.0))
0x210: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x211: Call2 0x27c

0x212: Pop(1)
0x213: Push((int) 25)
0x214: Pop(2); Push(Stack[-2] * Stack[-1]);
0x215: Pop(2); Push(Stack[-2] + Stack[-1]);
0x216: Push(CVector(0.0, 10.0, 0.0))
0x217: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x218: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x219: @ IsOverrideActive(Stack[-2])
0x21a: Pop(0)
0x21b: Push(Stack[-2])
0x21c: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21d: Stack[-21] = (bool) 0
0x21e: Return(); Pop(18)

0x21f: @ StopWorld()
0x220: Pop(0)
0x221: @ CameraTransit(Stack[-3], Stack[-5])
0x222: Pop(0)
0x223: Push(CvectorIndex(Stack[-4], 0))
0x224: Push(CvectorIndex(Stack[-5], 2))
0x225: @ Rotate(Stack[-2], Stack[-1])
0x226: Pop(2)
0x227: PushEmpty(bool)
0x228: Call2 0x2ab

0x229: Pop(0)
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: GOTO 0x234

0x22c: Push("head")
0x22d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x22e: Pop(1)
0x22f: Push(Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x231: Push("head")
0x232: @ LookAsyncCamera(Stack[-1])
0x233: Pop(1)
0x234: @ CameraWaitForPlayFinish()
0x235: Pop(0)
0x236: @ ResumeWorld()
0x237: Pop(0)
0x238: Stack[-21] = (bool) 1
0x239: Return(); Pop(18)

0x23a: PushEmpty(bool, bool)
0x23b: @ CameraSwitchToNormal()
0x23c: Pop(0)
0x23d: PushEmpty(bool)
0x23e: Call2 0x2ab

0x23f: Pop(0)
0x240: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x241: GOTO 0x24a

0x242: Push("head")
0x243: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x244: Pop(1)
0x245: Push(Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x247: Push("head")
0x248: @ UnlookAsync(Stack[-1])
0x249: Pop(1)
0x24a: Return(); Pop(2)

0x24b: PushEmpty(bool, float, float, bool, float, float)
0x24c: @ lshHasAnimation(Stack[-3], Stack[-7])
0x24d: Pop(0)
0x24e: Push(Stack[-3])
0x24f: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x250: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x251: Pop(0)
0x252: Push((bool) 0)
0x253: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x254: Pop(1)
0x255: GOTO 0x25a

0x256: Push("Can't find lsh animation : ")
0x257: Pop(1); Push(Stack[-1] + Stack[-8]);
0x258: @ Trace(Stack[-1])
0x259: Pop(1)
0x25a: Return(); Pop(6)

0x25b: PushEmpty(bool, float, float, bool, float, float)
0x25c: @ lshHasAnimation(Stack[-3], Stack[-8])
0x25d: Pop(0)
0x25e: Push(Stack[-3])
0x25f: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x260: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x261: Pop(0)
0x262: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x263: Pop(0)
0x264: GOTO 0x269

0x265: Push("Can't find lsh animation : ")
0x266: Pop(1); Push(Stack[-1] + Stack[-9]);
0x267: @ Trace(Stack[-1])
0x268: Pop(1)
0x269: Return(); Pop(6)

0x26a: PushEmpty(float, cvector, float, cvector)
0x26b: @@ GetEyesHeight(Stack[-2])
0x26c: Pop(0)
0x26d: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x26e: Push(CvectorIndex(Stack[-1], 1))
0x26f: Stack[-1] = Stack[-3]
0x270: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x271: Push("head")
0x272: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x273: Pop(1)
0x274: Return(); Pop(4)

0x275: PushEmpty(bool)
0x276: Call2 0x2ab

0x277: Pop(0)
0x278: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x279: @ lshStopSpeech()
0x27a: Pop(0)
0x27b: Return(); Pop(0)

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

0x28b: PushEmpty(string, string)
0x28c: Stack[-1] = "idle"
0x28d: Push(Stack[-3])
0x28e: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x290: Stack[-4] = Stack[-1]
0x291: Return(); Pop(2)

0x292: PushEmpty(int, bool, int, bool)
0x293: Stack[-2] = (int) 0
0x294: Push("all")
0x295: PushEmpty(string, int)
0x296: Stack[-1] = Stack[-5]
0x297: Call2 0x28b

0x298: Pop(1)
0x299: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x29a: Pop(2)
0x29b: Pop(0); Push((bool) Stack[-1] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29d: GOTO 0x2a1

0x29e: Push((int) 1)
0x29f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2a0: GOTO 0x294

0x2a1: Stack[-5] = Stack[-2]
0x2a2: Return(); Pop(4)

0x2a3: Stack[-1] = (int) 515561
0x2a4: Return(); Pop(0)

0x2a5: Stack[-1] = (int) 503346
0x2a6: Return(); Pop(0)

0x2a7: Stack[-1] = "ui/NPC_Citizen1.png"
0x2a8: Return(); Pop(0)

0x2a9: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x2aa: Return(); Pop(0)

0x2ab: Stack[-1] = (bool) 0
0x2ac: Return(); Pop(0)

0x2ad: PushEmpty()
0x2ae: Push("ood6Littlegirl1")
0x2af: Push((int) 1)
0x2b0: @ SetVariable(Stack[-2], Stack[-1])
0x2b1: Pop(2)
0x2b2: Return(); Pop(0)

0x2b3: PushEmpty()
0x2b4: Push("ood6Littlegirl2")
0x2b5: Push((int) 1)
0x2b6: @ SetVariable(Stack[-2], Stack[-1])
0x2b7: Pop(2)
0x2b8: Return(); Pop(0)

0x2b9: PushEmpty()
0x2ba: PushEmpty(int, string)
0x2bb: Stack[-1] = "ood6Littlegirl1"
0x2bc: Call2 0x286

0x2bd: Pop(1)
0x2be: Push((int) 0)
0x2bf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c1: Stack[-2] = (bool) 1
0x2c2: Return(); Pop(0)

0x2c3: Stack[-2] = (bool) 0
0x2c4: Return(); Pop(0)

0x2c5: PushEmpty()
0x2c6: PushEmpty(int, string)
0x2c7: Stack[-1] = "ood6Littlegirl2"
0x2c8: Call2 0x286

0x2c9: Pop(1)
0x2ca: Push((int) 0)
0x2cb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2cc: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2cd: Stack[-2] = (bool) 1
0x2ce: Return(); Pop(0)

0x2cf: Stack[-2] = (bool) 0
0x2d0: Return(); Pop(0)

0x2d1: PushEmpty(int, int)
0x2d2: Push("branch")
0x2d3: @ GetVariable(Stack[-1], Stack[-2])
0x2d4: Pop(1)
0x2d5: Push((int) 0)
0x2d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d7: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d8: Stack[-3] = (int) 1
0x2d9: Return(); Pop(2)

0x2da: GOTO 0x2e0

0x2db: Push((int) 1)
0x2dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2de: Stack[-3] = (int) 2
0x2df: Return(); Pop(2)

0x2e0: Stack[-3] = (int) 3
0x2e1: Return(); Pop(2)

