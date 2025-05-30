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
	ood4SoborGuard1
	ood4TheaterGuard2
	d4q01KeyWasted
	d4q01
	branch
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

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

RunOp = 0x18f
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcc Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x199 Vars = (object)
		EVENT_7 Op = 0x1ce Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x256

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x354

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x352

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x356

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x358

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x341

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
0x41: Call2 0x29b

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
0x4f: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x311

0x55: Pop(1)
0x56: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x31d

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5d: Stack[-1] = (bool) 1
0x5e: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x5f: PushEmpty(string)
0x60: Stack[-1] = "Neutral"
0x61: Call2 0xb6

0x62: Pop(1)
0x63: Push((int) 536270)
0x64: @@ SetMessage(Stack[-1])
0x65: Pop(1)
0x66: @@ ClearReplies()
0x67: Pop(0)
0x68: PushEmpty(bool, object)
0x69: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a: Call2 0x329

0x6b: Pop(1)
0x6c: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6d: Push((int) 536271)
0x6e: Push((int) 38074)
0x6f: Push((int) 38055)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: Push((int) 536289)
0x73: Push((int) -1)
0x74: Push((int) 38073)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: GOTO 0x98

0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral"
0x7a: Call2 0xb6

0x7b: Pop(1)
0x7c: Push((int) 536284)
0x7d: @@ SetMessage(Stack[-1])
0x7e: Pop(1)
0x7f: @@ ClearReplies()
0x80: Pop(0)
0x81: PushEmpty(bool, object)
0x82: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x83: Call2 0x335

0x84: Pop(1)
0x85: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x86: Push((int) 536285)
0x87: Push((int) 38070)
0x88: Push((int) 38069)
0x89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a: Pop(3)
0x8b: Push((int) 536288)
0x8c: Push((int) -1)
0x8d: Push((int) 38072)
0x8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f: Pop(3)
0x90: Push((int) 536291)
0x91: Push((int) -1)
0x92: Push((int) 38075)
0x93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94: Pop(3)
0x95: GOTO 0x98

0x96: Return(); Pop(0)

0x97: GOTO 0x4e

0x98: PushEmpty(bool)
0x99: Call2 0x35a

0x9a: Pop(0)
0x9b: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0x9c: @ lshWaitForAnimEnd()
0x9d: Pop(0)
0x9e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: GOTO 0xa6

0xa1: PushEmpty(string)
0xa2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa3: Call2 0x2ad

0xa4: Pop(1)
0xa5: GOTO 0x9c

0xa6: GOTO 0xb5

0xa7: Push("all")
0xa8: Push("idle")
0xa9: @ PlayAnimation(Stack[-2], Stack[-1])
0xaa: Pop(2)
0xab: @ WaitForAnimEnd()
0xac: Pop(0)
0xad: Push( Stack[3 + Tasks[-1].StackPointer] )
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: GOTO 0xb5

0xb0: Push("all")
0xb1: Push("idle")
0xb2: @ PlayAnimation(Stack[-2], Stack[-1])
0xb3: Pop(2)
0xb4: GOTO 0xab

0xb5: Return(); Pop(0)

0xb6: PushEmpty()
0xb7: PushEmpty(bool)
0xb8: Call2 0x35a

0xb9: Pop(0)
0xba: Pop(1); Push((bool) Stack[-1] == 0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: Return(); Pop(0)

0xbd: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: Return(); Pop(0)

0xc0: PushEmpty(string, bool)
0xc1: Stack[-2] = Stack[-3]
0xc2: Push("")
0xc3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc5: Stack[-1] = (bool) 0
0xc6: GOTO 0xc8

0xc7: Stack[-1] = (bool) 1
0xc8: Call2 0x2bd

0xc9: Pop(2)
0xca: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcb: Return(); Pop(0)

0xcc: PushEmpty()
0xcd: Push((int) 1)
0xce: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0xcf: PushEmpty()
0xd0: Call2 0x2d7

0xd1: Pop(0)
0xd2: Push((int) 38055)
0xd3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x305

0xd9: Pop(2)
0xda: Push((int) 38069)
0xdb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdd: PushEmpty(object, object)
0xde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0x30b

0xe1: Pop(2)
0xe2: Push((int) 38054)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0xe5: PushEmpty(bool)
0xe6: Stack[-1] = (bool) 0
0xe7: PushEmpty(bool, object)
0xe8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Call2 0x311

0xea: Pop(1)
0xeb: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xec: PushEmpty(bool, object)
0xed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xee: Call2 0x31d

0xef: Pop(1)
0xf0: Pop(1); Push((bool) Stack[-1] == 0)
0xf1: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf2: Stack[-1] = (bool) 1
0xf3: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xf4: PushEmpty(string)
0xf5: Stack[-1] = "Neutral"
0xf6: Call2 0xb6

0xf7: Pop(1)
0xf8: Push((int) 536270)
0xf9: @@ SetMessage(Stack[-1])
0xfa: Pop(1)
0xfb: @@ ClearReplies()
0xfc: Pop(0)
0xfd: PushEmpty(bool, object)
0xfe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xff: Call2 0x329

0x100: Pop(1)
0x101: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x102: Push((int) 536271)
0x103: Push((int) 38074)
0x104: Push((int) 38055)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: Push((int) 536289)
0x108: Push((int) -1)
0x109: Push((int) 38073)
0x10a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b: Pop(3)
0x10c: Return(); Pop(0)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Neutral"
0x10f: Call2 0xb6

0x110: Pop(1)
0x111: Push((int) 536284)
0x112: @@ SetMessage(Stack[-1])
0x113: Pop(1)
0x114: @@ ClearReplies()
0x115: Pop(0)
0x116: PushEmpty(bool, object)
0x117: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x118: Call2 0x335

0x119: Pop(1)
0x11a: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11b: Push((int) 536285)
0x11c: Push((int) 38070)
0x11d: Push((int) 38069)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Push((int) 536288)
0x121: Push((int) -1)
0x122: Push((int) 38072)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Push((int) 536291)
0x126: Push((int) -1)
0x127: Push((int) 38075)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: Return(); Pop(0)

0x12b: Push((int) 38070)
0x12c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x12e: PushEmpty(string)
0x12f: Stack[-1] = "Neutral"
0x130: Call2 0xb6

0x131: Pop(1)
0x132: Push((int) 536286)
0x133: @@ SetMessage(Stack[-1])
0x134: Pop(1)
0x135: @@ ClearReplies()
0x136: Pop(0)
0x137: Push((int) 536287)
0x138: Push((int) 38076)
0x139: Push((int) 38071)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: Return(); Pop(0)

0x13d: Push((int) 38076)
0x13e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13f: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x140: PushEmpty(string)
0x141: Stack[-1] = "Neutral"
0x142: Call2 0xb6

0x143: Pop(1)
0x144: Push((int) 536292)
0x145: @@ SetMessage(Stack[-1])
0x146: Pop(1)
0x147: @@ ClearReplies()
0x148: Pop(0)
0x149: Push((int) 536293)
0x14a: Push((int) 38079)
0x14b: Push((int) 38077)
0x14c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14d: Pop(3)
0x14e: Push((int) 536294)
0x14f: Push((int) -1)
0x150: Push((int) 38078)
0x151: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x152: Pop(3)
0x153: Return(); Pop(0)

0x154: Push((int) 38079)
0x155: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x156: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x157: PushEmpty(string)
0x158: Stack[-1] = "Neutral"
0x159: Call2 0xb6

0x15a: Pop(1)
0x15b: Push((int) 536295)
0x15c: @@ SetMessage(Stack[-1])
0x15d: Pop(1)
0x15e: @@ ClearReplies()
0x15f: Pop(0)
0x160: Push((int) 536296)
0x161: Push((int) -1)
0x162: Push((int) 38080)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: Return(); Pop(0)

0x166: Push((int) 38074)
0x167: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x169: PushEmpty(string)
0x16a: Stack[-1] = "Neutral"
0x16b: Call2 0xb6

0x16c: Pop(1)
0x16d: Push((int) 536290)
0x16e: @@ SetMessage(Stack[-1])
0x16f: Pop(1)
0x170: @@ ClearReplies()
0x171: Pop(0)
0x172: Push((int) 536297)
0x173: Push((int) -1)
0x174: Push((int) 38081)
0x175: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x176: Pop(3)
0x177: Push((int) 536298)
0x178: Push((int) -1)
0x179: Push((int) 38082)
0x17a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17b: Pop(3)
0x17c: Push((int) 536299)
0x17d: Push((int) -1)
0x17e: Push((int) 38083)
0x17f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x180: Pop(3)
0x181: Return(); Pop(0)

0x182: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x183: PushEmpty(bool)
0x184: Call2 0x35a

0x185: Pop(0)
0x186: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x187: @ lshStopAnimation()
0x188: Pop(0)
0x189: GOTO 0x18c

0x18a: @ StopAnimation()
0x18b: Pop(0)
0x18c: Return(); Pop(0)

0x18d: GOTO 0xcd

0x18e: Return(); Pop(0)

0x18f: Push((int) 1)
0x190: @ Sleep(Stack[-1])
0x191: Pop(1)
0x192: PushEmpty(float, float)
0x193: Stack[-2] = (int) 300
0x194: Stack[-1] = (int) 100
0x195: Call2 0x1a4

0x196: Pop(2)
0x197: GOTO 0x18f

0x198: Return(); Pop(0)

0x199: PushEmpty()
0x19a: PushEmpty()
0x19b: Call2 0x1e5

0x19c: Pop(0)
0x19d: PushEmpty(int, object)
0x19e: Stack[-1] = Stack[-3]
0x19f: Push(-2, 1); TaskCall(0)
0x1a0: Call2 0x0

0x1a1: Pop(-2, 1); TaskReturn
0x1a2: Pop(2)
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty()
0x1a5: PushEmpty(bool)
0x1a6: Call2 0x251

0x1a7: Pop(0)
0x1a8: Pop(1); Push((bool) Stack[-1] == 0)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1aa: Return(); Pop(0)

0x1ab: Push("player")
0x1ac: @ FindActor(Stack[-4], Stack[-1])
0x1ad: Pop(1)
0x1ae: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1af: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1b0: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1b1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1b2: Push((int) 10)
0x1b3: Push((float)1.0)
0x1b4: @ SetTimer(Stack[-2], Stack[-1])
0x1b5: Pop(2)
0x1b6: PushEmpty()
0x1b7: Call2 0x1f3

0x1b8: Pop(0)
0x1b9: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bb: Push((int) 10)
0x1bc: @ KillTimer(Stack[-1])
0x1bd: Pop(1)
0x1be: Return(); Pop(0)

0x1bf: PushEmpty(float, float)
0x1c0: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c2: Stack[-3] = (bool) 0
0x1c3: Return(); Pop(2)

0x1c4: PushEmpty(float, object)
0x1c5: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1c6: Call2 0x249

0x1c7: Pop(1)
0x1c8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1c9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1cb: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1cc: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1cd: Return(); Pop(2)

0x1ce: PushEmpty()
0x1cf: Push((int) 10)
0x1d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1d2: PushEmpty(bool)
0x1d3: Call2 0x1bf

0x1d4: Pop(0)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1d6: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d8: PushEmpty(object)
0x1d9: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1da: Call2 0x2cc

0x1db: Pop(1)
0x1dc: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1dd: GOTO 0x1e4

0x1de: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1df: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e0: Push("head")
0x1e1: @ UnlookAsync(Stack[-1])
0x1e2: Pop(1)
0x1e3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e4: Return(); Pop(0)

0x1e5: PushEmpty()
0x1e6: Call2 0x244

0x1e7: Pop(0)
0x1e8: Push((int) 10)
0x1e9: @ KillTimer(Stack[-1])
0x1ea: Pop(1)
0x1eb: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ed: Push("head")
0x1ee: @ UnlookAsync(Stack[-1])
0x1ef: Pop(1)
0x1f0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f2: Return(); Pop(0)

0x1f3: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1f4: @ WaitForAnimEnd()
0x1f5: Pop(0)
0x1f6: PushEmpty(bool)
0x1f7: Call2 0x251

0x1f8: Pop(0)
0x1f9: Pop(1); Push((bool) Stack[-1] == 0)
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fb: Return(); Pop(14)

0x1fc: PushEmpty(int)
0x1fd: Call2 0x2f4

0x1fe: Stack[-8] = Stack[-1]
0x1ff: Pop(1)
0x200: Stack[-6] = (int) 0
0x201: PushEmpty(bool)
0x202: Stack[-1] = (bool) 0
0x203: Push((int) 5)
0x204: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x206: PushEmpty(bool)
0x207: Call2 0x251

0x208: Pop(0)
0x209: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x20a: Stack[-1] = (bool) 1
0x20b: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x20c: Push((int) 3)
0x20d: @ irand(Stack[-6], Stack[-1])
0x20e: Pop(1)
0x20f: Push((int) 0)
0x210: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x212: Push(Stack[-7])
0x213: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x214: @ irand(Stack[-4], Stack[-7])
0x215: Pop(0)
0x216: Push("all")
0x217: PushEmpty(string, int)
0x218: Stack[-1] = Stack[-7]
0x219: Call2 0x2ed

0x21a: Pop(1)
0x21b: @ PlayAnimation(Stack[-2], Stack[-1])
0x21c: Pop(2)
0x21d: @ WaitForAnimEnd(Stack[-3])
0x21e: Pop(0)
0x21f: Pop(0); Push((bool) Stack[-3] == 0)
0x220: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x221: GOTO 0x23f

0x222: GOTO 0x234

0x223: Push((int) 1)
0x224: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x226: Push((int) 4)
0x227: @ rand(Stack[-3], Stack[-1])
0x228: Pop(1)
0x229: Push((int) 1)
0x22a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x22b: @ Sleep(Stack[-1], Stack[-2])
0x22c: Pop(1)
0x22d: Pop(0); Push((bool) Stack[-1] == 0)
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: GOTO 0x23f

0x230: GOTO 0x234

0x231: Push(Stack[-6])
0x232: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x233: GOTO 0x23f

0x234: PushEmpty(bool)
0x235: Call2 0x242

0x236: Pop(0)
0x237: Pop(1); Push((bool) Stack[-1] == 0)
0x238: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x239: GOTO 0x23f

0x23a: @ ResetAAS()
0x23b: Pop(0)
0x23c: Push((int) 1)
0x23d: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x23e: GOTO 0x201

0x23f: @ ResetAAS()
0x240: Pop(0)
0x241: Return(); Pop(14)

0x242: Stack[-1] = (bool) 1
0x243: Return(); Pop(0)

0x244: @ StopAnimation()
0x245: Pop(0)
0x246: @ StopGroup0()
0x247: Pop(0)
0x248: Return(); Pop(0)

0x249: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x24a: @ GetPosition(Stack[-3])
0x24b: Pop(0)
0x24c: @@ GetPosition(Stack[-2])
0x24d: Pop(0)
0x24e: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x24f: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x250: Return(); Pop(6)

0x251: PushEmpty(bool, bool)
0x252: @ IsLoaded(Stack[-1])
0x253: Pop(0)
0x254: Stack[-3] = Stack[-1]
0x255: Return(); Pop(2)

0x256: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x257: @@ GetPosition(Stack[-8])
0x258: Pop(0)
0x259: @@ GetEyesHeight(Stack[-9])
0x25a: Pop(0)
0x25b: Push(CvectorIndex(Stack[-8], 1))
0x25c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x25d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x25e: @ GetPosition(Stack[-7])
0x25f: Pop(0)
0x260: @ GetEyesHeight(Stack[-9])
0x261: Pop(0)
0x262: Push(CvectorIndex(Stack[-7], 1))
0x263: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x264: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x265: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x266: Push(CvectorIndex(Stack[-6], 1))
0x267: Stack[-1] = (int) 0
0x268: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x269: Pop(0); Push(Stack[-6] | Stack[-6]);
0x26a: Pop(1); Push(Sqrt(Stack[-1]))
0x26b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x26c: Stack[-5] = -Stack[-6]; Pop(0);
0x26d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x26e: PushEmpty(cvector, cvector)
0x26f: Push(CVector(0.0, 1.0, 0.0))
0x270: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x271: Call2 0x2de

0x272: Pop(1)
0x273: Push((int) 25)
0x274: Pop(2); Push(Stack[-2] * Stack[-1]);
0x275: Pop(2); Push(Stack[-2] + Stack[-1]);
0x276: Push(CVector(0.0, 10.0, 0.0))
0x277: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x278: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x279: @ IsOverrideActive(Stack[-2])
0x27a: Pop(0)
0x27b: Push(Stack[-2])
0x27c: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27d: Stack[-21] = (bool) 0
0x27e: Return(); Pop(18)

0x27f: @ StopWorld()
0x280: Pop(0)
0x281: Push((bool) 1)
0x282: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x283: Pop(1)
0x284: Push(CvectorIndex(Stack[-4], 0))
0x285: Push(CvectorIndex(Stack[-5], 2))
0x286: @ Rotate(Stack[-2], Stack[-1])
0x287: Pop(2)
0x288: PushEmpty(bool)
0x289: Call2 0x35a

0x28a: Pop(0)
0x28b: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28c: GOTO 0x295

0x28d: Push("head")
0x28e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x28f: Pop(1)
0x290: Push(Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x292: Push("head")
0x293: @ LookAsyncCamera(Stack[-1])
0x294: Pop(1)
0x295: @ CameraWaitForPlayFinish()
0x296: Pop(0)
0x297: @ ResumeWorld()
0x298: Pop(0)
0x299: Stack[-21] = (bool) 1
0x29a: Return(); Pop(18)

0x29b: PushEmpty(bool, bool)
0x29c: Push((bool) 1)
0x29d: @ CameraSwitchToNormal(Stack[-1])
0x29e: Pop(1)
0x29f: PushEmpty(bool)
0x2a0: Call2 0x35a

0x2a1: Pop(0)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a3: GOTO 0x2ac

0x2a4: Push("head")
0x2a5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2a6: Pop(1)
0x2a7: Push(Stack[-1])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a9: Push("head")
0x2aa: @ UnlookAsync(Stack[-1])
0x2ab: Pop(1)
0x2ac: Return(); Pop(2)

0x2ad: PushEmpty(bool, float, float, bool, float, float)
0x2ae: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2af: Pop(0)
0x2b0: Push(Stack[-3])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b2: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2b3: Pop(0)
0x2b4: Push((bool) 0)
0x2b5: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2b6: Pop(1)
0x2b7: GOTO 0x2bc

0x2b8: Push("Can't find lsh animation : ")
0x2b9: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2ba: @ Trace(Stack[-1])
0x2bb: Pop(1)
0x2bc: Return(); Pop(6)

0x2bd: PushEmpty(bool, float, float, bool, float, float)
0x2be: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2bf: Pop(0)
0x2c0: Push(Stack[-3])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c2: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2c3: Pop(0)
0x2c4: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2c5: Pop(0)
0x2c6: GOTO 0x2cb

0x2c7: Push("Can't find lsh animation : ")
0x2c8: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2c9: @ Trace(Stack[-1])
0x2ca: Pop(1)
0x2cb: Return(); Pop(6)

0x2cc: PushEmpty(float, cvector, float, cvector)
0x2cd: @@ GetEyesHeight(Stack[-2])
0x2ce: Pop(0)
0x2cf: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2d0: Push(CvectorIndex(Stack[-1], 1))
0x2d1: Stack[-1] = Stack[-3]
0x2d2: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2d3: Push("head")
0x2d4: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2d5: Pop(1)
0x2d6: Return(); Pop(4)

0x2d7: PushEmpty(bool)
0x2d8: Call2 0x35a

0x2d9: Pop(0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2db: @ lshStopSpeech()
0x2dc: Pop(0)
0x2dd: Return(); Pop(0)

0x2de: PushEmpty(float, float)
0x2df: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2e0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2e1: Push((float)0.0)
0x2e2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e4: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2e5: Return(); Pop(2)

0x2e6: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2e7: Return(); Pop(2)

0x2e8: PushEmpty(int, int)
0x2e9: @ GetVariable(Stack[-3], Stack[-1])
0x2ea: Pop(0)
0x2eb: Stack[-4] = Stack[-1]
0x2ec: Return(); Pop(2)

0x2ed: PushEmpty(string, string)
0x2ee: Stack[-1] = "idle"
0x2ef: Push(Stack[-3])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f1: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2f2: Stack[-4] = Stack[-1]
0x2f3: Return(); Pop(2)

0x2f4: PushEmpty(int, bool, int, bool)
0x2f5: Stack[-2] = (int) 0
0x2f6: Push("all")
0x2f7: PushEmpty(string, int)
0x2f8: Stack[-1] = Stack[-5]
0x2f9: Call2 0x2ed

0x2fa: Pop(1)
0x2fb: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2fc: Pop(2)
0x2fd: Pop(0); Push((bool) Stack[-1] == 0)
0x2fe: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2ff: GOTO 0x303

0x300: Push((int) 1)
0x301: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x302: GOTO 0x2f6

0x303: Stack[-5] = Stack[-2]
0x304: Return(); Pop(4)

0x305: PushEmpty()
0x306: Push("ood4SoborGuard1")
0x307: Push((int) 1)
0x308: @ SetVariable(Stack[-2], Stack[-1])
0x309: Pop(2)
0x30a: Return(); Pop(0)

0x30b: PushEmpty()
0x30c: Push("ood4TheaterGuard2")
0x30d: Push((int) 1)
0x30e: @ SetVariable(Stack[-2], Stack[-1])
0x30f: Pop(2)
0x310: Return(); Pop(0)

0x311: PushEmpty()
0x312: PushEmpty(int, string)
0x313: Stack[-1] = "d4q01KeyWasted"
0x314: Call2 0x2e8

0x315: Pop(1)
0x316: Push((int) 0)
0x317: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x318: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x319: Stack[-2] = (bool) 1
0x31a: Return(); Pop(0)

0x31b: Stack[-2] = (bool) 0
0x31c: Return(); Pop(0)

0x31d: PushEmpty()
0x31e: PushEmpty(int, string)
0x31f: Stack[-1] = "d4q01"
0x320: Call2 0x2e8

0x321: Pop(1)
0x322: Push((int) 1000)
0x323: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x325: Stack[-2] = (bool) 1
0x326: Return(); Pop(0)

0x327: Stack[-2] = (bool) 0
0x328: Return(); Pop(0)

0x329: PushEmpty()
0x32a: PushEmpty(int, string)
0x32b: Stack[-1] = "ood4SoborGuard1"
0x32c: Call2 0x2e8

0x32d: Pop(1)
0x32e: Push((int) 0)
0x32f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x331: Stack[-2] = (bool) 1
0x332: Return(); Pop(0)

0x333: Stack[-2] = (bool) 0
0x334: Return(); Pop(0)

0x335: PushEmpty()
0x336: PushEmpty(int, string)
0x337: Stack[-1] = "ood4TheaterGuard2"
0x338: Call2 0x2e8

0x339: Pop(1)
0x33a: Push((int) 0)
0x33b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x33c: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33d: Stack[-2] = (bool) 1
0x33e: Return(); Pop(0)

0x33f: Stack[-2] = (bool) 0
0x340: Return(); Pop(0)

0x341: PushEmpty(int, int)
0x342: Push("branch")
0x343: @ GetVariable(Stack[-1], Stack[-2])
0x344: Pop(1)
0x345: Push((int) 0)
0x346: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x348: Stack[-3] = (int) 1
0x349: Return(); Pop(2)

0x34a: GOTO 0x350

0x34b: Push((int) 1)
0x34c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34d: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34e: Stack[-3] = (int) 2
0x34f: Return(); Pop(2)

0x350: Stack[-3] = (int) 3
0x351: Return(); Pop(2)

0x352: Stack[-1] = (int) 515556
0x353: Return(); Pop(0)

0x354: Stack[-1] = (int) 503341
0x355: Return(); Pop(0)

0x356: Stack[-1] = "ui/NPC_Citizen3.png"
0x357: Return(); Pop(0)

0x358: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x359: Return(); Pop(0)

0x35a: Stack[-1] = (bool) 0
0x35b: Return(); Pop(0)

