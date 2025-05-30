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
	oob1WhiteMask1
	b1BigVlad11Hours
	pt_map_bigvlad
	AddMark
	Can't find main outdoor scene
	GetMap
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
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x16d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc8 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x177 Vars = (object)
		EVENT_7 Op = 0x1ac Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x234

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2d8

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2d6

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2da

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2dc

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x340

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
0x41: Call2 0x278

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
0x4f: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x318

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x2f8

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0xb2

0x5d: Pop(1)
0x5e: Push((int) 519919)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 519920)
0x64: Push((int) 21090)
0x65: Push((int) 21089)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x94

0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call2 0x30e

0x6c: Pop(1)
0x6d: Pop(1); Push((bool) Stack[-1] == 0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x6f: PushEmpty(string)
0x70: Stack[-1] = "Neutral"
0x71: Call2 0xb2

0x72: Pop(1)
0x73: Push((int) 520031)
0x74: @@ SetMessage(Stack[-1])
0x75: Pop(1)
0x76: @@ ClearReplies()
0x77: Pop(0)
0x78: Push((int) 520032)
0x79: Push((int) -1)
0x7a: Push((int) 21216)
0x7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c: Pop(3)
0x7d: GOTO 0x94

0x7e: PushEmpty(bool, object)
0x7f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80: Call2 0x30e

0x81: Pop(1)
0x82: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x83: PushEmpty(string)
0x84: Stack[-1] = "Neutral"
0x85: Call2 0xb2

0x86: Pop(1)
0x87: Push((int) 524628)
0x88: @@ SetMessage(Stack[-1])
0x89: Pop(1)
0x8a: @@ ClearReplies()
0x8b: Pop(0)
0x8c: Push((int) 524629)
0x8d: Push((int) -1)
0x8e: Push((int) 25969)
0x8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90: Pop(3)
0x91: GOTO 0x94

0x92: Return(); Pop(0)

0x93: GOTO 0x4e

0x94: PushEmpty(bool)
0x95: Call2 0x2de

0x96: Pop(0)
0x97: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x98: @ lshWaitForAnimEnd()
0x99: Pop(0)
0x9a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: GOTO 0xa2

0x9d: PushEmpty(string)
0x9e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9f: Call2 0x289

0xa0: Pop(1)
0xa1: GOTO 0x98

0xa2: GOTO 0xb1

0xa3: Push("all")
0xa4: Push("idle")
0xa5: @ PlayAnimation(Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: @ WaitForAnimEnd()
0xa8: Pop(0)
0xa9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: GOTO 0xb1

0xac: Push("all")
0xad: Push("idle")
0xae: @ PlayAnimation(Stack[-2], Stack[-1])
0xaf: Pop(2)
0xb0: GOTO 0xa7

0xb1: Return(); Pop(0)

0xb2: PushEmpty()
0xb3: PushEmpty(bool)
0xb4: Call2 0x2de

0xb5: Pop(0)
0xb6: Pop(1); Push((bool) Stack[-1] == 0)
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: Return(); Pop(0)

0xb9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xba: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xbb: Return(); Pop(0)

0xbc: PushEmpty(string, bool)
0xbd: Stack[-2] = Stack[-3]
0xbe: Push("")
0xbf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc1: Stack[-1] = (bool) 0
0xc2: GOTO 0xc4

0xc3: Stack[-1] = (bool) 1
0xc4: Call2 0x299

0xc5: Pop(2)
0xc6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc7: Return(); Pop(0)

0xc8: PushEmpty()
0xc9: Push((int) 1)
0xca: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0xcb: PushEmpty()
0xcc: Call2 0x2b3

0xcd: Pop(0)
0xce: Push((int) 21088)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xd1: PushEmpty(bool, object)
0xd2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Call2 0x318

0xd4: Pop(1)
0xd5: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x2f8

0xda: Pop(2)
0xdb: PushEmpty(string)
0xdc: Stack[-1] = "Neutral"
0xdd: Call2 0xb2

0xde: Pop(1)
0xdf: Push((int) 519919)
0xe0: @@ SetMessage(Stack[-1])
0xe1: Pop(1)
0xe2: @@ ClearReplies()
0xe3: Pop(0)
0xe4: Push((int) 519920)
0xe5: Push((int) 21090)
0xe6: Push((int) 21089)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Return(); Pop(0)

0xea: PushEmpty(bool, object)
0xeb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xec: Call2 0x30e

0xed: Pop(1)
0xee: Pop(1); Push((bool) Stack[-1] == 0)
0xef: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf0: PushEmpty(string)
0xf1: Stack[-1] = "Neutral"
0xf2: Call2 0xb2

0xf3: Pop(1)
0xf4: Push((int) 520031)
0xf5: @@ SetMessage(Stack[-1])
0xf6: Pop(1)
0xf7: @@ ClearReplies()
0xf8: Pop(0)
0xf9: Push((int) 520032)
0xfa: Push((int) -1)
0xfb: Push((int) 21216)
0xfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd: Pop(3)
0xfe: Return(); Pop(0)

0xff: PushEmpty(bool, object)
0x100: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x101: Call2 0x30e

0x102: Pop(1)
0x103: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x104: PushEmpty(string)
0x105: Stack[-1] = "Neutral"
0x106: Call2 0xb2

0x107: Pop(1)
0x108: Push((int) 524628)
0x109: @@ SetMessage(Stack[-1])
0x10a: Pop(1)
0x10b: @@ ClearReplies()
0x10c: Pop(0)
0x10d: Push((int) 524629)
0x10e: Push((int) -1)
0x10f: Push((int) 25969)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Push((int) 21099)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x116: Push((int) 21090)
0x117: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x119: PushEmpty(object, object)
0x11a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11c: Call2 0x2fe

0x11d: Pop(2)
0x11e: PushEmpty(string)
0x11f: Stack[-1] = "Neutral"
0x120: Call2 0xb2

0x121: Pop(1)
0x122: Push((int) 519921)
0x123: @@ SetMessage(Stack[-1])
0x124: Pop(1)
0x125: @@ ClearReplies()
0x126: Pop(0)
0x127: Push((int) 519922)
0x128: Push((int) 21092)
0x129: Push((int) 21091)
0x12a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b: Pop(3)
0x12c: Push((int) 519928)
0x12d: Push((int) -1)
0x12e: Push((int) 21097)
0x12f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x130: Pop(3)
0x131: Return(); Pop(0)

0x132: Push((int) 21092)
0x133: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x135: PushEmpty(string)
0x136: Stack[-1] = "Neutral"
0x137: Call2 0xb2

0x138: Pop(1)
0x139: Push((int) 519923)
0x13a: @@ SetMessage(Stack[-1])
0x13b: Pop(1)
0x13c: @@ ClearReplies()
0x13d: Pop(0)
0x13e: Push((int) 519924)
0x13f: Push((int) 21094)
0x140: Push((int) 21093)
0x141: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142: Pop(3)
0x143: Push((int) 519927)
0x144: Push((int) -1)
0x145: Push((int) 21096)
0x146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x147: Pop(3)
0x148: Return(); Pop(0)

0x149: Push((int) 21094)
0x14a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x14c: PushEmpty(string)
0x14d: Stack[-1] = "Neutral"
0x14e: Call2 0xb2

0x14f: Pop(1)
0x150: Push((int) 519925)
0x151: @@ SetMessage(Stack[-1])
0x152: Pop(1)
0x153: @@ ClearReplies()
0x154: Pop(0)
0x155: Push((int) 519926)
0x156: Push((int) -1)
0x157: Push((int) 21095)
0x158: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x159: Pop(3)
0x15a: Push((int) 527022)
0x15b: Push((int) -1)
0x15c: Push((int) 28306)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Return(); Pop(0)

0x160: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x161: PushEmpty(bool)
0x162: Call2 0x2de

0x163: Pop(0)
0x164: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x165: @ lshStopAnimation()
0x166: Pop(0)
0x167: GOTO 0x16a

0x168: @ StopAnimation()
0x169: Pop(0)
0x16a: Return(); Pop(0)

0x16b: GOTO 0xc9

0x16c: Return(); Pop(0)

0x16d: PushEmpty(float, float)
0x16e: Stack[-2] = (int) 300
0x16f: Stack[-1] = (int) 100
0x170: Call2 0x182

0x171: Pop(2)
0x172: Push((int) 3)
0x173: @ Sleep(Stack[-1])
0x174: Pop(1)
0x175: GOTO 0x16d

0x176: Return(); Pop(0)

0x177: PushEmpty()
0x178: PushEmpty()
0x179: Call2 0x1c3

0x17a: Pop(0)
0x17b: PushEmpty(int, object)
0x17c: Stack[-1] = Stack[-3]
0x17d: Push(-2, 1); TaskCall(0)
0x17e: Call2 0x0

0x17f: Pop(-2, 1); TaskReturn
0x180: Pop(2)
0x181: Return(); Pop(0)

0x182: PushEmpty()
0x183: PushEmpty(bool)
0x184: Call2 0x22f

0x185: Pop(0)
0x186: Pop(1); Push((bool) Stack[-1] == 0)
0x187: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x188: Return(); Pop(0)

0x189: Push("player")
0x18a: @ FindActor(Stack[-4], Stack[-1])
0x18b: Pop(1)
0x18c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x18d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x18e: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x18f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x190: Push((int) 10)
0x191: Push((float)1.0)
0x192: @ SetTimer(Stack[-2], Stack[-1])
0x193: Pop(2)
0x194: PushEmpty()
0x195: Call2 0x1d1

0x196: Pop(0)
0x197: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x198: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x199: Push((int) 10)
0x19a: @ KillTimer(Stack[-1])
0x19b: Pop(1)
0x19c: Return(); Pop(0)

0x19d: PushEmpty(float, float)
0x19e: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a0: Stack[-3] = (bool) 0
0x1a1: Return(); Pop(2)

0x1a2: PushEmpty(float, object)
0x1a3: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1a4: Call2 0x227

0x1a5: Pop(1)
0x1a6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1a7: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1aa: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1ab: Return(); Pop(2)

0x1ac: PushEmpty()
0x1ad: Push((int) 10)
0x1ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1b0: PushEmpty(bool)
0x1b1: Call2 0x19d

0x1b2: Pop(0)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b4: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b6: PushEmpty(object)
0x1b7: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1b8: Call2 0x2a8

0x1b9: Pop(1)
0x1ba: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1bb: GOTO 0x1c2

0x1bc: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1be: Push("head")
0x1bf: @ UnlookAsync(Stack[-1])
0x1c0: Pop(1)
0x1c1: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1c2: Return(); Pop(0)

0x1c3: PushEmpty()
0x1c4: Call2 0x222

0x1c5: Pop(0)
0x1c6: Push((int) 10)
0x1c7: @ KillTimer(Stack[-1])
0x1c8: Pop(1)
0x1c9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1cb: Push("head")
0x1cc: @ UnlookAsync(Stack[-1])
0x1cd: Pop(1)
0x1ce: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1cf: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d0: Return(); Pop(0)

0x1d1: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1d2: @ WaitForAnimEnd()
0x1d3: Pop(0)
0x1d4: PushEmpty(bool)
0x1d5: Call2 0x22f

0x1d6: Pop(0)
0x1d7: Pop(1); Push((bool) Stack[-1] == 0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d9: Return(); Pop(14)

0x1da: PushEmpty(int)
0x1db: Call2 0x2e7

0x1dc: Stack[-8] = Stack[-1]
0x1dd: Pop(1)
0x1de: Stack[-6] = (int) 0
0x1df: PushEmpty(bool)
0x1e0: Stack[-1] = (bool) 0
0x1e1: Push((int) 5)
0x1e2: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e4: PushEmpty(bool)
0x1e5: Call2 0x22f

0x1e6: Pop(0)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e8: Stack[-1] = (bool) 1
0x1e9: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x1ea: Push((int) 3)
0x1eb: @ irand(Stack[-6], Stack[-1])
0x1ec: Pop(1)
0x1ed: Push((int) 0)
0x1ee: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1f0: Push(Stack[-7])
0x1f1: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f2: @ irand(Stack[-4], Stack[-7])
0x1f3: Pop(0)
0x1f4: Push("all")
0x1f5: PushEmpty(string, int)
0x1f6: Stack[-1] = Stack[-7]
0x1f7: Call2 0x2e0

0x1f8: Pop(1)
0x1f9: @ PlayAnimation(Stack[-2], Stack[-1])
0x1fa: Pop(2)
0x1fb: @ WaitForAnimEnd(Stack[-3])
0x1fc: Pop(0)
0x1fd: Pop(0); Push((bool) Stack[-3] == 0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ff: GOTO 0x21d

0x200: GOTO 0x212

0x201: Push((int) 1)
0x202: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x204: Push((int) 4)
0x205: @ rand(Stack[-3], Stack[-1])
0x206: Pop(1)
0x207: Push((int) 1)
0x208: Pop(1); Push(Stack[-3] + Stack[-1]);
0x209: @ Sleep(Stack[-1], Stack[-2])
0x20a: Pop(1)
0x20b: Pop(0); Push((bool) Stack[-1] == 0)
0x20c: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x20d: GOTO 0x21d

0x20e: GOTO 0x212

0x20f: Push(Stack[-6])
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: GOTO 0x21d

0x212: PushEmpty(bool)
0x213: Call2 0x220

0x214: Pop(0)
0x215: Pop(1); Push((bool) Stack[-1] == 0)
0x216: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x217: GOTO 0x21d

0x218: @ ResetAAS()
0x219: Pop(0)
0x21a: Push((int) 1)
0x21b: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x21c: GOTO 0x1df

0x21d: @ ResetAAS()
0x21e: Pop(0)
0x21f: Return(); Pop(14)

0x220: Stack[-1] = (bool) 1
0x221: Return(); Pop(0)

0x222: @ StopAnimation()
0x223: Pop(0)
0x224: @ StopGroup0()
0x225: Pop(0)
0x226: Return(); Pop(0)

0x227: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x228: @ GetPosition(Stack[-3])
0x229: Pop(0)
0x22a: @@ GetPosition(Stack[-2])
0x22b: Pop(0)
0x22c: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x22d: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x22e: Return(); Pop(6)

0x22f: PushEmpty(bool, bool)
0x230: @ IsLoaded(Stack[-1])
0x231: Pop(0)
0x232: Stack[-3] = Stack[-1]
0x233: Return(); Pop(2)

0x234: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x235: @@ GetPosition(Stack[-8])
0x236: Pop(0)
0x237: @@ GetEyesHeight(Stack[-9])
0x238: Pop(0)
0x239: Push(CvectorIndex(Stack[-8], 1))
0x23a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x23b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x23c: @ GetPosition(Stack[-7])
0x23d: Pop(0)
0x23e: @ GetEyesHeight(Stack[-9])
0x23f: Pop(0)
0x240: Push(CvectorIndex(Stack[-7], 1))
0x241: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x242: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x243: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x244: Push(CvectorIndex(Stack[-6], 1))
0x245: Stack[-1] = (int) 0
0x246: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x247: Pop(0); Push(Stack[-6] | Stack[-6]);
0x248: Pop(1); Push(Sqrt(Stack[-1]))
0x249: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x24a: Stack[-5] = -Stack[-6]; Pop(0);
0x24b: Pop(0); Push(Stack[-6] * Stack[-19]);
0x24c: PushEmpty(cvector, cvector)
0x24d: Push(CVector(0.0, 1.0, 0.0))
0x24e: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x24f: Call2 0x2ba

0x250: Pop(1)
0x251: Push((int) 25)
0x252: Pop(2); Push(Stack[-2] * Stack[-1]);
0x253: Pop(2); Push(Stack[-2] + Stack[-1]);
0x254: Push(CVector(0.0, 10.0, 0.0))
0x255: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x256: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x257: @ IsOverrideActive(Stack[-2])
0x258: Pop(0)
0x259: Push(Stack[-2])
0x25a: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25b: Stack[-21] = (bool) 0
0x25c: Return(); Pop(18)

0x25d: @ StopWorld()
0x25e: Pop(0)
0x25f: @ CameraTransit(Stack[-3], Stack[-5])
0x260: Pop(0)
0x261: Push(CvectorIndex(Stack[-4], 0))
0x262: Push(CvectorIndex(Stack[-5], 2))
0x263: @ Rotate(Stack[-2], Stack[-1])
0x264: Pop(2)
0x265: PushEmpty(bool)
0x266: Call2 0x2de

0x267: Pop(0)
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: GOTO 0x272

0x26a: Push("head")
0x26b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x26c: Pop(1)
0x26d: Push(Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x26f: Push("head")
0x270: @ LookAsyncCamera(Stack[-1])
0x271: Pop(1)
0x272: @ CameraWaitForPlayFinish()
0x273: Pop(0)
0x274: @ ResumeWorld()
0x275: Pop(0)
0x276: Stack[-21] = (bool) 1
0x277: Return(); Pop(18)

0x278: PushEmpty(bool, bool)
0x279: @ CameraSwitchToNormal()
0x27a: Pop(0)
0x27b: PushEmpty(bool)
0x27c: Call2 0x2de

0x27d: Pop(0)
0x27e: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27f: GOTO 0x288

0x280: Push("head")
0x281: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x282: Pop(1)
0x283: Push(Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x285: Push("head")
0x286: @ UnlookAsync(Stack[-1])
0x287: Pop(1)
0x288: Return(); Pop(2)

0x289: PushEmpty(bool, float, float, bool, float, float)
0x28a: @ lshHasAnimation(Stack[-3], Stack[-7])
0x28b: Pop(0)
0x28c: Push(Stack[-3])
0x28d: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x28e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x28f: Pop(0)
0x290: Push((bool) 0)
0x291: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x292: Pop(1)
0x293: GOTO 0x298

0x294: Push("Can't find lsh animation : ")
0x295: Pop(1); Push(Stack[-1] + Stack[-8]);
0x296: @ Trace(Stack[-1])
0x297: Pop(1)
0x298: Return(); Pop(6)

0x299: PushEmpty(bool, float, float, bool, float, float)
0x29a: @ lshHasAnimation(Stack[-3], Stack[-8])
0x29b: Pop(0)
0x29c: Push(Stack[-3])
0x29d: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x29e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x29f: Pop(0)
0x2a0: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2a1: Pop(0)
0x2a2: GOTO 0x2a7

0x2a3: Push("Can't find lsh animation : ")
0x2a4: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2a5: @ Trace(Stack[-1])
0x2a6: Pop(1)
0x2a7: Return(); Pop(6)

0x2a8: PushEmpty(float, cvector, float, cvector)
0x2a9: @@ GetEyesHeight(Stack[-2])
0x2aa: Pop(0)
0x2ab: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2ac: Push(CvectorIndex(Stack[-1], 1))
0x2ad: Stack[-1] = Stack[-3]
0x2ae: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2af: Push("head")
0x2b0: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2b1: Pop(1)
0x2b2: Return(); Pop(4)

0x2b3: PushEmpty(bool)
0x2b4: Call2 0x2de

0x2b5: Pop(0)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b7: @ lshStopSpeech()
0x2b8: Pop(0)
0x2b9: Return(); Pop(0)

0x2ba: PushEmpty(float, float)
0x2bb: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2bc: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2bd: Push((float)0.0)
0x2be: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c0: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2c1: Return(); Pop(2)

0x2c2: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2c3: Return(); Pop(2)

0x2c4: PushEmpty(int, int)
0x2c5: @ GetVariable(Stack[-3], Stack[-1])
0x2c6: Pop(0)
0x2c7: Stack[-4] = Stack[-1]
0x2c8: Return(); Pop(2)

0x2c9: PushEmpty(float, float)
0x2ca: @ GetGameTime(Stack[-1])
0x2cb: Pop(0)
0x2cc: Stack[-3] = Stack[-1]
0x2cd: Return(); Pop(2)

0x2ce: PushEmpty(float, float)
0x2cf: @ GetGameTime(Stack[-1])
0x2d0: Pop(0)
0x2d1: PushEmpty(int)
0x2d2: Stack[-1] = Stack[-2]
0x2d3: Push((int) 24)
0x2d4: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x2d5: Return(); Pop(2)

0x2d6: Stack[-1] = (int) 515569
0x2d7: Return(); Pop(0)

0x2d8: Stack[-1] = (int) 503354
0x2d9: Return(); Pop(0)

0x2da: Stack[-1] = "ui/NPC_wmask.png"
0x2db: Return(); Pop(0)

0x2dc: Stack[-1] = "ui/NPC_wmask_b.png"
0x2dd: Return(); Pop(0)

0x2de: Stack[-1] = (bool) 0
0x2df: Return(); Pop(0)

0x2e0: PushEmpty(string, string)
0x2e1: Stack[-1] = "idle"
0x2e2: Push(Stack[-3])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e4: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2e5: Stack[-4] = Stack[-1]
0x2e6: Return(); Pop(2)

0x2e7: PushEmpty(int, bool, int, bool)
0x2e8: Stack[-2] = (int) 0
0x2e9: Push("all")
0x2ea: PushEmpty(string, int)
0x2eb: Stack[-1] = Stack[-5]
0x2ec: Call2 0x2e0

0x2ed: Pop(1)
0x2ee: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2ef: Pop(2)
0x2f0: Pop(0); Push((bool) Stack[-1] == 0)
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f2: GOTO 0x2f6

0x2f3: Push((int) 1)
0x2f4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2f5: GOTO 0x2e9

0x2f6: Stack[-5] = Stack[-2]
0x2f7: Return(); Pop(4)

0x2f8: PushEmpty()
0x2f9: Push("oob1WhiteMask1")
0x2fa: Push((int) 1)
0x2fb: @ SetVariable(Stack[-2], Stack[-1])
0x2fc: Pop(2)
0x2fd: Return(); Pop(0)

0x2fe: PushEmpty(object, object)
0x2ff: PushEmpty(object)
0x300: Call2 0x32f

0x301: Stack[-2] = Stack[-1]
0x302: Pop(1)
0x303: Push("b1BigVlad11Hours")
0x304: Push("pt_map_bigvlad")
0x305: Push((int) 3)
0x306: Push((int) 524625)
0x307: PushEmpty(float)
0x308: Call2 0x2c9

0x309: Pop(0)
0x30a: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x30b: Pop(5)
0x30c: Return(); Pop(2)

0x30d: Stack[-1] = 0
0x30e: PushEmpty()
0x30f: PushEmpty(bool, object)
0x310: Stack[-1] = Stack[-3]
0x311: Call2 0x324

0x312: Pop(1)
0x313: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x314: Stack[-2] = (bool) 1
0x315: Return(); Pop(0)

0x316: Stack[-2] = (bool) 0
0x317: Return(); Pop(0)

0x318: PushEmpty()
0x319: PushEmpty(int, string)
0x31a: Stack[-1] = "oob1WhiteMask1"
0x31b: Call2 0x2c4

0x31c: Pop(1)
0x31d: Push((int) 0)
0x31e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x31f: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x320: Stack[-2] = (bool) 1
0x321: Return(); Pop(0)

0x322: Stack[-2] = (bool) 0
0x323: Return(); Pop(0)

0x324: PushEmpty()
0x325: PushEmpty(int)
0x326: Call2 0x2ce

0x327: Pop(0)
0x328: Push((int) 11)
0x329: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32b: Stack[-2] = (bool) 1
0x32c: Return(); Pop(0)

0x32d: Stack[-2] = (bool) 0
0x32e: Return(); Pop(0)

0x32f: PushEmpty(object, object, object, object)
0x330: @ GetMainOutdoorScene(Stack[-2])
0x331: Pop(0)
0x332: Pop(0); Push((bool) Stack[-2] == 0)
0x333: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x334: Push("Can't find main outdoor scene")
0x335: @ Trace(Stack[-1])
0x336: Pop(1)
0x337: Stack[-1] = 0
0x338: Stack[-5] = Stack[-1]
0x339: Return(); Pop(4)

0x33a: @@ GetMap(Stack[-1])
0x33b: Pop(0)
0x33c: Stack[-5] = Stack[-1]
0x33d: Return(); Pop(4)

0x33e: Stack[-1] = 0
0x33f: Stack[-2] = 0
0x340: PushEmpty(int, int)
0x341: Push("branch")
0x342: @ GetVariable(Stack[-1], Stack[-2])
0x343: Pop(1)
0x344: Push((int) 0)
0x345: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x346: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x347: Stack[-3] = (int) 1
0x348: Return(); Pop(2)

0x349: GOTO 0x34f

0x34a: Push((int) 1)
0x34b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34c: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34d: Stack[-3] = (int) 2
0x34e: Return(); Pop(2)

0x34f: Stack[-3] = (int) 3
0x350: Return(); Pop(2)

