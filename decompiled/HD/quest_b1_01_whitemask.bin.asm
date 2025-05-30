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
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x18b
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcd Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x195 Vars = (object)
		EVENT_7 Op = 0x1ca Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x252

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2f8

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2f6

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2fa

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2fc

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x360

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
0x41: Call2 0x297

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
0x4f: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x338

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x318

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0xb7

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
0x68: Push((int) 519929)
0x69: Push((int) 21099)
0x6a: Push((int) 21098)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x99

0x6e: PushEmpty(bool, object)
0x6f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x70: Call2 0x32e

0x71: Pop(1)
0x72: Pop(1); Push((bool) Stack[-1] == 0)
0x73: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x74: PushEmpty(string)
0x75: Stack[-1] = "Neutral"
0x76: Call2 0xb7

0x77: Pop(1)
0x78: Push((int) 520031)
0x79: @@ SetMessage(Stack[-1])
0x7a: Pop(1)
0x7b: @@ ClearReplies()
0x7c: Pop(0)
0x7d: Push((int) 520032)
0x7e: Push((int) -1)
0x7f: Push((int) 21216)
0x80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81: Pop(3)
0x82: GOTO 0x99

0x83: PushEmpty(bool, object)
0x84: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85: Call2 0x32e

0x86: Pop(1)
0x87: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x88: PushEmpty(string)
0x89: Stack[-1] = "Neutral"
0x8a: Call2 0xb7

0x8b: Pop(1)
0x8c: Push((int) 524628)
0x8d: @@ SetMessage(Stack[-1])
0x8e: Pop(1)
0x8f: @@ ClearReplies()
0x90: Pop(0)
0x91: Push((int) 524629)
0x92: Push((int) -1)
0x93: Push((int) 25969)
0x94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95: Pop(3)
0x96: GOTO 0x99

0x97: Return(); Pop(0)

0x98: GOTO 0x4e

0x99: PushEmpty(bool)
0x9a: Call2 0x2fe

0x9b: Pop(0)
0x9c: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0x9d: @ lshWaitForAnimEnd()
0x9e: Pop(0)
0x9f: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: GOTO 0xa7

0xa2: PushEmpty(string)
0xa3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa4: Call2 0x2a9

0xa5: Pop(1)
0xa6: GOTO 0x9d

0xa7: GOTO 0xb6

0xa8: Push("all")
0xa9: Push("idle")
0xaa: @ PlayAnimation(Stack[-2], Stack[-1])
0xab: Pop(2)
0xac: @ WaitForAnimEnd()
0xad: Pop(0)
0xae: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: GOTO 0xb6

0xb1: Push("all")
0xb2: Push("idle")
0xb3: @ PlayAnimation(Stack[-2], Stack[-1])
0xb4: Pop(2)
0xb5: GOTO 0xac

0xb6: Return(); Pop(0)

0xb7: PushEmpty()
0xb8: PushEmpty(bool)
0xb9: Call2 0x2fe

0xba: Pop(0)
0xbb: Pop(1); Push((bool) Stack[-1] == 0)
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Return(); Pop(0)

0xbe: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbf: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xc0: Return(); Pop(0)

0xc1: PushEmpty(string, bool)
0xc2: Stack[-2] = Stack[-3]
0xc3: Push("")
0xc4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc6: Stack[-1] = (bool) 0
0xc7: GOTO 0xc9

0xc8: Stack[-1] = (bool) 1
0xc9: Call2 0x2b9

0xca: Pop(2)
0xcb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcc: Return(); Pop(0)

0xcd: PushEmpty()
0xce: Push((int) 1)
0xcf: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0xd0: PushEmpty()
0xd1: Call2 0x2d3

0xd2: Pop(0)
0xd3: Push((int) 21088)
0xd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0xd6: PushEmpty(bool, object)
0xd7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Call2 0x338

0xd9: Pop(1)
0xda: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xdb: PushEmpty(object, object)
0xdc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde: Call2 0x318

0xdf: Pop(2)
0xe0: PushEmpty(string)
0xe1: Stack[-1] = "Neutral"
0xe2: Call2 0xb7

0xe3: Pop(1)
0xe4: Push((int) 519919)
0xe5: @@ SetMessage(Stack[-1])
0xe6: Pop(1)
0xe7: @@ ClearReplies()
0xe8: Pop(0)
0xe9: Push((int) 519920)
0xea: Push((int) 21090)
0xeb: Push((int) 21089)
0xec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: Push((int) 519929)
0xef: Push((int) 21099)
0xf0: Push((int) 21098)
0xf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2: Pop(3)
0xf3: Return(); Pop(0)

0xf4: PushEmpty(bool, object)
0xf5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Call2 0x32e

0xf7: Pop(1)
0xf8: Pop(1); Push((bool) Stack[-1] == 0)
0xf9: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xfa: PushEmpty(string)
0xfb: Stack[-1] = "Neutral"
0xfc: Call2 0xb7

0xfd: Pop(1)
0xfe: Push((int) 520031)
0xff: @@ SetMessage(Stack[-1])
0x100: Pop(1)
0x101: @@ ClearReplies()
0x102: Pop(0)
0x103: Push((int) 520032)
0x104: Push((int) -1)
0x105: Push((int) 21216)
0x106: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107: Pop(3)
0x108: Return(); Pop(0)

0x109: PushEmpty(bool, object)
0x10a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10b: Call2 0x32e

0x10c: Pop(1)
0x10d: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x10e: PushEmpty(string)
0x10f: Stack[-1] = "Neutral"
0x110: Call2 0xb7

0x111: Pop(1)
0x112: Push((int) 524628)
0x113: @@ SetMessage(Stack[-1])
0x114: Pop(1)
0x115: @@ ClearReplies()
0x116: Pop(0)
0x117: Push((int) 524629)
0x118: Push((int) -1)
0x119: Push((int) 25969)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: Return(); Pop(0)

0x11d: Push((int) 21099)
0x11e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x120: PushEmpty(string)
0x121: Stack[-1] = "Neutral"
0x122: Call2 0xb7

0x123: Pop(1)
0x124: Push((int) 519930)
0x125: @@ SetMessage(Stack[-1])
0x126: Pop(1)
0x127: @@ ClearReplies()
0x128: Pop(0)
0x129: Push((int) 519931)
0x12a: Push((int) 21090)
0x12b: Push((int) 21100)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Push((int) 519932)
0x12f: Push((int) 21090)
0x130: Push((int) 21102)
0x131: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132: Pop(3)
0x133: Return(); Pop(0)

0x134: Push((int) 21090)
0x135: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x136: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x137: PushEmpty(object, object)
0x138: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x139: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13a: Call2 0x31e

0x13b: Pop(2)
0x13c: PushEmpty(string)
0x13d: Stack[-1] = "Neutral"
0x13e: Call2 0xb7

0x13f: Pop(1)
0x140: Push((int) 519921)
0x141: @@ SetMessage(Stack[-1])
0x142: Pop(1)
0x143: @@ ClearReplies()
0x144: Pop(0)
0x145: Push((int) 519922)
0x146: Push((int) 21092)
0x147: Push((int) 21091)
0x148: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x149: Pop(3)
0x14a: Push((int) 519928)
0x14b: Push((int) -1)
0x14c: Push((int) 21097)
0x14d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e: Pop(3)
0x14f: Return(); Pop(0)

0x150: Push((int) 21092)
0x151: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x153: PushEmpty(string)
0x154: Stack[-1] = "Neutral"
0x155: Call2 0xb7

0x156: Pop(1)
0x157: Push((int) 519923)
0x158: @@ SetMessage(Stack[-1])
0x159: Pop(1)
0x15a: @@ ClearReplies()
0x15b: Pop(0)
0x15c: Push((int) 519924)
0x15d: Push((int) 21094)
0x15e: Push((int) 21093)
0x15f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x160: Pop(3)
0x161: Push((int) 519927)
0x162: Push((int) -1)
0x163: Push((int) 21096)
0x164: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x165: Pop(3)
0x166: Return(); Pop(0)

0x167: Push((int) 21094)
0x168: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x169: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x16a: PushEmpty(string)
0x16b: Stack[-1] = "Neutral"
0x16c: Call2 0xb7

0x16d: Pop(1)
0x16e: Push((int) 519925)
0x16f: @@ SetMessage(Stack[-1])
0x170: Pop(1)
0x171: @@ ClearReplies()
0x172: Pop(0)
0x173: Push((int) 519926)
0x174: Push((int) -1)
0x175: Push((int) 21095)
0x176: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x177: Pop(3)
0x178: Push((int) 527022)
0x179: Push((int) -1)
0x17a: Push((int) 28306)
0x17b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17c: Pop(3)
0x17d: Return(); Pop(0)

0x17e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x17f: PushEmpty(bool)
0x180: Call2 0x2fe

0x181: Pop(0)
0x182: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x183: @ lshStopAnimation()
0x184: Pop(0)
0x185: GOTO 0x188

0x186: @ StopAnimation()
0x187: Pop(0)
0x188: Return(); Pop(0)

0x189: GOTO 0xce

0x18a: Return(); Pop(0)

0x18b: PushEmpty(float, float)
0x18c: Stack[-2] = (int) 300
0x18d: Stack[-1] = (int) 100
0x18e: Call2 0x1a0

0x18f: Pop(2)
0x190: Push((int) 3)
0x191: @ Sleep(Stack[-1])
0x192: Pop(1)
0x193: GOTO 0x18b

0x194: Return(); Pop(0)

0x195: PushEmpty()
0x196: PushEmpty()
0x197: Call2 0x1e1

0x198: Pop(0)
0x199: PushEmpty(int, object)
0x19a: Stack[-1] = Stack[-3]
0x19b: Push(-2, 1); TaskCall(0)
0x19c: Call2 0x0

0x19d: Pop(-2, 1); TaskReturn
0x19e: Pop(2)
0x19f: Return(); Pop(0)

0x1a0: PushEmpty()
0x1a1: PushEmpty(bool)
0x1a2: Call2 0x24d

0x1a3: Pop(0)
0x1a4: Pop(1); Push((bool) Stack[-1] == 0)
0x1a5: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a6: Return(); Pop(0)

0x1a7: Push("player")
0x1a8: @ FindActor(Stack[-4], Stack[-1])
0x1a9: Pop(1)
0x1aa: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1ab: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1ac: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1ad: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1ae: Push((int) 10)
0x1af: Push((float)1.0)
0x1b0: @ SetTimer(Stack[-2], Stack[-1])
0x1b1: Pop(2)
0x1b2: PushEmpty()
0x1b3: Call2 0x1ef

0x1b4: Pop(0)
0x1b5: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b7: Push((int) 10)
0x1b8: @ KillTimer(Stack[-1])
0x1b9: Pop(1)
0x1ba: Return(); Pop(0)

0x1bb: PushEmpty(float, float)
0x1bc: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1be: Stack[-3] = (bool) 0
0x1bf: Return(); Pop(2)

0x1c0: PushEmpty(float, object)
0x1c1: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1c2: Call2 0x245

0x1c3: Pop(1)
0x1c4: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1c5: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c7: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1c8: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1c9: Return(); Pop(2)

0x1ca: PushEmpty()
0x1cb: Push((int) 10)
0x1cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1ce: PushEmpty(bool)
0x1cf: Call2 0x1bb

0x1d0: Pop(0)
0x1d1: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d2: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d4: PushEmpty(object)
0x1d5: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1d6: Call2 0x2c8

0x1d7: Pop(1)
0x1d8: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1d9: GOTO 0x1e0

0x1da: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1db: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1dc: Push("head")
0x1dd: @ UnlookAsync(Stack[-1])
0x1de: Pop(1)
0x1df: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e0: Return(); Pop(0)

0x1e1: PushEmpty()
0x1e2: Call2 0x240

0x1e3: Pop(0)
0x1e4: Push((int) 10)
0x1e5: @ KillTimer(Stack[-1])
0x1e6: Pop(1)
0x1e7: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e9: Push("head")
0x1ea: @ UnlookAsync(Stack[-1])
0x1eb: Pop(1)
0x1ec: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1ed: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ee: Return(); Pop(0)

0x1ef: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1f0: @ WaitForAnimEnd()
0x1f1: Pop(0)
0x1f2: PushEmpty(bool)
0x1f3: Call2 0x24d

0x1f4: Pop(0)
0x1f5: Pop(1); Push((bool) Stack[-1] == 0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f7: Return(); Pop(14)

0x1f8: PushEmpty(int)
0x1f9: Call2 0x307

0x1fa: Stack[-8] = Stack[-1]
0x1fb: Pop(1)
0x1fc: Stack[-6] = (int) 0
0x1fd: PushEmpty(bool)
0x1fe: Stack[-1] = (bool) 0
0x1ff: Push((int) 5)
0x200: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x202: PushEmpty(bool)
0x203: Call2 0x24d

0x204: Pop(0)
0x205: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x206: Stack[-1] = (bool) 1
0x207: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x208: Push((int) 3)
0x209: @ irand(Stack[-6], Stack[-1])
0x20a: Pop(1)
0x20b: Push((int) 0)
0x20c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x20e: Push(Stack[-7])
0x20f: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x210: @ irand(Stack[-4], Stack[-7])
0x211: Pop(0)
0x212: Push("all")
0x213: PushEmpty(string, int)
0x214: Stack[-1] = Stack[-7]
0x215: Call2 0x300

0x216: Pop(1)
0x217: @ PlayAnimation(Stack[-2], Stack[-1])
0x218: Pop(2)
0x219: @ WaitForAnimEnd(Stack[-3])
0x21a: Pop(0)
0x21b: Pop(0); Push((bool) Stack[-3] == 0)
0x21c: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21d: GOTO 0x23b

0x21e: GOTO 0x230

0x21f: Push((int) 1)
0x220: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x222: Push((int) 4)
0x223: @ rand(Stack[-3], Stack[-1])
0x224: Pop(1)
0x225: Push((int) 1)
0x226: Pop(1); Push(Stack[-3] + Stack[-1]);
0x227: @ Sleep(Stack[-1], Stack[-2])
0x228: Pop(1)
0x229: Pop(0); Push((bool) Stack[-1] == 0)
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: GOTO 0x23b

0x22c: GOTO 0x230

0x22d: Push(Stack[-6])
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: GOTO 0x23b

0x230: PushEmpty(bool)
0x231: Call2 0x23e

0x232: Pop(0)
0x233: Pop(1); Push((bool) Stack[-1] == 0)
0x234: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x235: GOTO 0x23b

0x236: @ ResetAAS()
0x237: Pop(0)
0x238: Push((int) 1)
0x239: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x23a: GOTO 0x1fd

0x23b: @ ResetAAS()
0x23c: Pop(0)
0x23d: Return(); Pop(14)

0x23e: Stack[-1] = (bool) 1
0x23f: Return(); Pop(0)

0x240: @ StopAnimation()
0x241: Pop(0)
0x242: @ StopGroup0()
0x243: Pop(0)
0x244: Return(); Pop(0)

0x245: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x246: @ GetPosition(Stack[-3])
0x247: Pop(0)
0x248: @@ GetPosition(Stack[-2])
0x249: Pop(0)
0x24a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x24b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x24c: Return(); Pop(6)

0x24d: PushEmpty(bool, bool)
0x24e: @ IsLoaded(Stack[-1])
0x24f: Pop(0)
0x250: Stack[-3] = Stack[-1]
0x251: Return(); Pop(2)

0x252: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x253: @@ GetPosition(Stack[-8])
0x254: Pop(0)
0x255: @@ GetEyesHeight(Stack[-9])
0x256: Pop(0)
0x257: Push(CvectorIndex(Stack[-8], 1))
0x258: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x259: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x25a: @ GetPosition(Stack[-7])
0x25b: Pop(0)
0x25c: @ GetEyesHeight(Stack[-9])
0x25d: Pop(0)
0x25e: Push(CvectorIndex(Stack[-7], 1))
0x25f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x260: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x261: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x262: Push(CvectorIndex(Stack[-6], 1))
0x263: Stack[-1] = (int) 0
0x264: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x265: Pop(0); Push(Stack[-6] | Stack[-6]);
0x266: Pop(1); Push(Sqrt(Stack[-1]))
0x267: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x268: Stack[-5] = -Stack[-6]; Pop(0);
0x269: Pop(0); Push(Stack[-6] * Stack[-19]);
0x26a: PushEmpty(cvector, cvector)
0x26b: Push(CVector(0.0, 1.0, 0.0))
0x26c: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x26d: Call2 0x2da

0x26e: Pop(1)
0x26f: Push((int) 25)
0x270: Pop(2); Push(Stack[-2] * Stack[-1]);
0x271: Pop(2); Push(Stack[-2] + Stack[-1]);
0x272: Push(CVector(0.0, 10.0, 0.0))
0x273: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x274: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x275: @ IsOverrideActive(Stack[-2])
0x276: Pop(0)
0x277: Push(Stack[-2])
0x278: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x279: Stack[-21] = (bool) 0
0x27a: Return(); Pop(18)

0x27b: @ StopWorld()
0x27c: Pop(0)
0x27d: Push((bool) 1)
0x27e: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x27f: Pop(1)
0x280: Push(CvectorIndex(Stack[-4], 0))
0x281: Push(CvectorIndex(Stack[-5], 2))
0x282: @ Rotate(Stack[-2], Stack[-1])
0x283: Pop(2)
0x284: PushEmpty(bool)
0x285: Call2 0x2fe

0x286: Pop(0)
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: GOTO 0x291

0x289: Push("head")
0x28a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x28b: Pop(1)
0x28c: Push(Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x28e: Push("head")
0x28f: @ LookAsyncCamera(Stack[-1])
0x290: Pop(1)
0x291: @ CameraWaitForPlayFinish()
0x292: Pop(0)
0x293: @ ResumeWorld()
0x294: Pop(0)
0x295: Stack[-21] = (bool) 1
0x296: Return(); Pop(18)

0x297: PushEmpty(bool, bool)
0x298: Push((bool) 1)
0x299: @ CameraSwitchToNormal(Stack[-1])
0x29a: Pop(1)
0x29b: PushEmpty(bool)
0x29c: Call2 0x2fe

0x29d: Pop(0)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29f: GOTO 0x2a8

0x2a0: Push("head")
0x2a1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2a2: Pop(1)
0x2a3: Push(Stack[-1])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a5: Push("head")
0x2a6: @ UnlookAsync(Stack[-1])
0x2a7: Pop(1)
0x2a8: Return(); Pop(2)

0x2a9: PushEmpty(bool, float, float, bool, float, float)
0x2aa: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2ab: Pop(0)
0x2ac: Push(Stack[-3])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2ae: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2af: Pop(0)
0x2b0: Push((bool) 0)
0x2b1: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2b2: Pop(1)
0x2b3: GOTO 0x2b8

0x2b4: Push("Can't find lsh animation : ")
0x2b5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2b6: @ Trace(Stack[-1])
0x2b7: Pop(1)
0x2b8: Return(); Pop(6)

0x2b9: PushEmpty(bool, float, float, bool, float, float)
0x2ba: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2bb: Pop(0)
0x2bc: Push(Stack[-3])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2be: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2bf: Pop(0)
0x2c0: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2c1: Pop(0)
0x2c2: GOTO 0x2c7

0x2c3: Push("Can't find lsh animation : ")
0x2c4: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2c5: @ Trace(Stack[-1])
0x2c6: Pop(1)
0x2c7: Return(); Pop(6)

0x2c8: PushEmpty(float, cvector, float, cvector)
0x2c9: @@ GetEyesHeight(Stack[-2])
0x2ca: Pop(0)
0x2cb: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2cc: Push(CvectorIndex(Stack[-1], 1))
0x2cd: Stack[-1] = Stack[-3]
0x2ce: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2cf: Push("head")
0x2d0: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2d1: Pop(1)
0x2d2: Return(); Pop(4)

0x2d3: PushEmpty(bool)
0x2d4: Call2 0x2fe

0x2d5: Pop(0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d7: @ lshStopSpeech()
0x2d8: Pop(0)
0x2d9: Return(); Pop(0)

0x2da: PushEmpty(float, float)
0x2db: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2dc: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2dd: Push((float)0.0)
0x2de: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e0: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2e1: Return(); Pop(2)

0x2e2: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2e3: Return(); Pop(2)

0x2e4: PushEmpty(int, int)
0x2e5: @ GetVariable(Stack[-3], Stack[-1])
0x2e6: Pop(0)
0x2e7: Stack[-4] = Stack[-1]
0x2e8: Return(); Pop(2)

0x2e9: PushEmpty(float, float)
0x2ea: @ GetGameTime(Stack[-1])
0x2eb: Pop(0)
0x2ec: Stack[-3] = Stack[-1]
0x2ed: Return(); Pop(2)

0x2ee: PushEmpty(float, float)
0x2ef: @ GetGameTime(Stack[-1])
0x2f0: Pop(0)
0x2f1: PushEmpty(int)
0x2f2: Stack[-1] = Stack[-2]
0x2f3: Push((int) 24)
0x2f4: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x2f5: Return(); Pop(2)

0x2f6: Stack[-1] = (int) 515569
0x2f7: Return(); Pop(0)

0x2f8: Stack[-1] = (int) 503354
0x2f9: Return(); Pop(0)

0x2fa: Stack[-1] = "ui/NPC_wmask.png"
0x2fb: Return(); Pop(0)

0x2fc: Stack[-1] = "ui/NPC_wmask_b.png"
0x2fd: Return(); Pop(0)

0x2fe: Stack[-1] = (bool) 0
0x2ff: Return(); Pop(0)

0x300: PushEmpty(string, string)
0x301: Stack[-1] = "idle"
0x302: Push(Stack[-3])
0x303: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x304: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x305: Stack[-4] = Stack[-1]
0x306: Return(); Pop(2)

0x307: PushEmpty(int, bool, int, bool)
0x308: Stack[-2] = (int) 0
0x309: Push("all")
0x30a: PushEmpty(string, int)
0x30b: Stack[-1] = Stack[-5]
0x30c: Call2 0x300

0x30d: Pop(1)
0x30e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x30f: Pop(2)
0x310: Pop(0); Push((bool) Stack[-1] == 0)
0x311: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x312: GOTO 0x316

0x313: Push((int) 1)
0x314: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x315: GOTO 0x309

0x316: Stack[-5] = Stack[-2]
0x317: Return(); Pop(4)

0x318: PushEmpty()
0x319: Push("oob1WhiteMask1")
0x31a: Push((int) 1)
0x31b: @ SetVariable(Stack[-2], Stack[-1])
0x31c: Pop(2)
0x31d: Return(); Pop(0)

0x31e: PushEmpty(object, object)
0x31f: PushEmpty(object)
0x320: Call2 0x34f

0x321: Stack[-2] = Stack[-1]
0x322: Pop(1)
0x323: Push("b1BigVlad11Hours")
0x324: Push("pt_map_bigvlad")
0x325: Push((int) 3)
0x326: Push((int) 524625)
0x327: PushEmpty(float)
0x328: Call2 0x2e9

0x329: Pop(0)
0x32a: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x32b: Pop(5)
0x32c: Return(); Pop(2)

0x32d: Stack[-1] = 0
0x32e: PushEmpty()
0x32f: PushEmpty(bool, object)
0x330: Stack[-1] = Stack[-3]
0x331: Call2 0x344

0x332: Pop(1)
0x333: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x334: Stack[-2] = (bool) 1
0x335: Return(); Pop(0)

0x336: Stack[-2] = (bool) 0
0x337: Return(); Pop(0)

0x338: PushEmpty()
0x339: PushEmpty(int, string)
0x33a: Stack[-1] = "oob1WhiteMask1"
0x33b: Call2 0x2e4

0x33c: Pop(1)
0x33d: Push((int) 0)
0x33e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x33f: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x340: Stack[-2] = (bool) 1
0x341: Return(); Pop(0)

0x342: Stack[-2] = (bool) 0
0x343: Return(); Pop(0)

0x344: PushEmpty()
0x345: PushEmpty(int)
0x346: Call2 0x2ee

0x347: Pop(0)
0x348: Push((int) 11)
0x349: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x34a: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34b: Stack[-2] = (bool) 1
0x34c: Return(); Pop(0)

0x34d: Stack[-2] = (bool) 0
0x34e: Return(); Pop(0)

0x34f: PushEmpty(object, object, object, object)
0x350: @ GetMainOutdoorScene(Stack[-2])
0x351: Pop(0)
0x352: Pop(0); Push((bool) Stack[-2] == 0)
0x353: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x354: Push("Can't find main outdoor scene")
0x355: @ Trace(Stack[-1])
0x356: Pop(1)
0x357: Stack[-1] = 0
0x358: Stack[-5] = Stack[-1]
0x359: Return(); Pop(4)

0x35a: @@ GetMap(Stack[-1])
0x35b: Pop(0)
0x35c: Stack[-5] = Stack[-1]
0x35d: Return(); Pop(4)

0x35e: Stack[-1] = 0
0x35f: Stack[-2] = 0
0x360: PushEmpty(int, int)
0x361: Push("branch")
0x362: @ GetVariable(Stack[-1], Stack[-2])
0x363: Pop(1)
0x364: Push((int) 0)
0x365: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x366: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x367: Stack[-3] = (int) 1
0x368: Return(); Pop(2)

0x369: GOTO 0x36f

0x36a: Push((int) 1)
0x36b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36c: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36d: Stack[-3] = (int) 2
0x36e: Return(); Pop(2)

0x36f: Stack[-3] = (int) 3
0x370: Return(); Pop(2)

