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
	ook11Soldier1
	ook11Soldier2
	k11q01
	k11q01Cured
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

RunOp = 0x1b4
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xfb Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x1be Vars = (object)
		EVENT_7 Op = 0x1f3 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x27b

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x312

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x310

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x314

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x316

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x36e

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
0x41: Call2 0x2bf

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
0x4f: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool)
0x53: Stack[-1] = (bool) 0
0x54: PushEmpty(bool, object)
0x55: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x56: Call2 0x34a

0x57: Pop(1)
0x58: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x33e

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5e: Stack[-1] = (bool) 1
0x5f: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x356

0x63: Pop(1)
0x64: Pop(1); Push((bool) Stack[-1] == 0)
0x65: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x66: Stack[-1] = (bool) 1
0x67: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x68: PushEmpty(object, object)
0x69: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6b: Call2 0x332

0x6c: Pop(2)
0x6d: PushEmpty(string)
0x6e: Stack[-1] = "Neutral"
0x6f: Call2 0xe5

0x70: Pop(1)
0x71: Push((int) 528020)
0x72: @@ SetMessage(Stack[-1])
0x73: Pop(1)
0x74: @@ ClearReplies()
0x75: Pop(0)
0x76: Push((int) 528021)
0x77: Push((int) 31634)
0x78: Push((int) 29383)
0x79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a: Pop(3)
0x7b: Push((int) 530245)
0x7c: Push((int) 31634)
0x7d: Push((int) 31633)
0x7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f: Pop(3)
0x80: GOTO 0xc7

0x81: PushEmpty(bool)
0x82: Stack[-1] = (bool) 0
0x83: PushEmpty(bool)
0x84: Stack[-1] = (bool) 0
0x85: PushEmpty(bool, object)
0x86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87: Call2 0x362

0x88: Pop(1)
0x89: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8a: PushEmpty(bool, object)
0x8b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c: Call2 0x33e

0x8d: Pop(1)
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Stack[-1] = (bool) 1
0x90: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x91: PushEmpty(bool, object)
0x92: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x93: Call2 0x356

0x94: Pop(1)
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Stack[-1] = (bool) 1
0x97: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0x98: PushEmpty(object, object)
0x99: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9b: Call2 0x338

0x9c: Pop(2)
0x9d: PushEmpty(string)
0x9e: Stack[-1] = "Neutral"
0x9f: Call2 0xe5

0xa0: Pop(1)
0xa1: Push((int) 528028)
0xa2: @@ SetMessage(Stack[-1])
0xa3: Pop(1)
0xa4: @@ ClearReplies()
0xa5: Pop(0)
0xa6: Push((int) 530244)
0xa7: Push((int) -1)
0xa8: Push((int) 31632)
0xa9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa: Pop(3)
0xab: Push((int) 528029)
0xac: Push((int) -1)
0xad: Push((int) 29391)
0xae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf: Pop(3)
0xb0: GOTO 0xc7

0xb1: PushEmpty(string)
0xb2: Stack[-1] = "Neutral"
0xb3: Call2 0xe5

0xb4: Pop(1)
0xb5: Push((int) 528022)
0xb6: @@ SetMessage(Stack[-1])
0xb7: Pop(1)
0xb8: @@ ClearReplies()
0xb9: Pop(0)
0xba: Push((int) 528023)
0xbb: Push((int) -1)
0xbc: Push((int) 29385)
0xbd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe: Pop(3)
0xbf: Push((int) 530243)
0xc0: Push((int) -1)
0xc1: Push((int) 31631)
0xc2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3: Pop(3)
0xc4: GOTO 0xc7

0xc5: Return(); Pop(0)

0xc6: GOTO 0x4e

0xc7: PushEmpty(bool)
0xc8: Call2 0x318

0xc9: Pop(0)
0xca: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xcb: @ lshWaitForAnimEnd()
0xcc: Pop(0)
0xcd: Push( Stack[3 + Tasks[-1].StackPointer] )
0xce: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcf: GOTO 0xd5

0xd0: PushEmpty(string)
0xd1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd2: Call2 0x2d0

0xd3: Pop(1)
0xd4: GOTO 0xcb

0xd5: GOTO 0xe4

0xd6: Push("all")
0xd7: Push("idle")
0xd8: @ PlayAnimation(Stack[-2], Stack[-1])
0xd9: Pop(2)
0xda: @ WaitForAnimEnd()
0xdb: Pop(0)
0xdc: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdd: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xde: GOTO 0xe4

0xdf: Push("all")
0xe0: Push("idle")
0xe1: @ PlayAnimation(Stack[-2], Stack[-1])
0xe2: Pop(2)
0xe3: GOTO 0xda

0xe4: Return(); Pop(0)

0xe5: PushEmpty()
0xe6: PushEmpty(bool)
0xe7: Call2 0x318

0xe8: Pop(0)
0xe9: Pop(1); Push((bool) Stack[-1] == 0)
0xea: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xeb: Return(); Pop(0)

0xec: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xed: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xee: Return(); Pop(0)

0xef: PushEmpty(string, bool)
0xf0: Stack[-2] = Stack[-3]
0xf1: Push("")
0xf2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf4: Stack[-1] = (bool) 0
0xf5: GOTO 0xf7

0xf6: Stack[-1] = (bool) 1
0xf7: Call2 0x2e0

0xf8: Pop(2)
0xf9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xfa: Return(); Pop(0)

0xfb: PushEmpty()
0xfc: Push((int) 1)
0xfd: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0xfe: PushEmpty()
0xff: Call2 0x2fa

0x100: Pop(0)
0x101: Push((int) 29382)
0x102: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x104: PushEmpty(bool)
0x105: Stack[-1] = (bool) 0
0x106: PushEmpty(bool)
0x107: Stack[-1] = (bool) 0
0x108: PushEmpty(bool, object)
0x109: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Call2 0x34a

0x10b: Pop(1)
0x10c: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10d: PushEmpty(bool, object)
0x10e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Call2 0x33e

0x110: Pop(1)
0x111: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x112: Stack[-1] = (bool) 1
0x113: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x114: PushEmpty(bool, object)
0x115: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x116: Call2 0x356

0x117: Pop(1)
0x118: Pop(1); Push((bool) Stack[-1] == 0)
0x119: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x11a: Stack[-1] = (bool) 1
0x11b: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x11c: PushEmpty(object, object)
0x11d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11f: Call2 0x332

0x120: Pop(2)
0x121: PushEmpty(string)
0x122: Stack[-1] = "Neutral"
0x123: Call2 0xe5

0x124: Pop(1)
0x125: Push((int) 528020)
0x126: @@ SetMessage(Stack[-1])
0x127: Pop(1)
0x128: @@ ClearReplies()
0x129: Pop(0)
0x12a: Push((int) 528021)
0x12b: Push((int) 31634)
0x12c: Push((int) 29383)
0x12d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(3)
0x12f: Push((int) 530245)
0x130: Push((int) 31634)
0x131: Push((int) 31633)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: PushEmpty(bool)
0x136: Stack[-1] = (bool) 0
0x137: PushEmpty(bool)
0x138: Stack[-1] = (bool) 0
0x139: PushEmpty(bool, object)
0x13a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13b: Call2 0x362

0x13c: Pop(1)
0x13d: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x13e: PushEmpty(bool, object)
0x13f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x140: Call2 0x33e

0x141: Pop(1)
0x142: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x143: Stack[-1] = (bool) 1
0x144: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x145: PushEmpty(bool, object)
0x146: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x147: Call2 0x356

0x148: Pop(1)
0x149: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x14a: Stack[-1] = (bool) 1
0x14b: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x14c: PushEmpty(object, object)
0x14d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14f: Call2 0x338

0x150: Pop(2)
0x151: PushEmpty(string)
0x152: Stack[-1] = "Neutral"
0x153: Call2 0xe5

0x154: Pop(1)
0x155: Push((int) 528028)
0x156: @@ SetMessage(Stack[-1])
0x157: Pop(1)
0x158: @@ ClearReplies()
0x159: Pop(0)
0x15a: Push((int) 530244)
0x15b: Push((int) -1)
0x15c: Push((int) 31632)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Push((int) 528029)
0x160: Push((int) -1)
0x161: Push((int) 29391)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Return(); Pop(0)

0x165: PushEmpty(string)
0x166: Stack[-1] = "Neutral"
0x167: Call2 0xe5

0x168: Pop(1)
0x169: Push((int) 528022)
0x16a: @@ SetMessage(Stack[-1])
0x16b: Pop(1)
0x16c: @@ ClearReplies()
0x16d: Pop(0)
0x16e: Push((int) 528023)
0x16f: Push((int) -1)
0x170: Push((int) 29385)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: Push((int) 530243)
0x174: Push((int) -1)
0x175: Push((int) 31631)
0x176: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x177: Pop(3)
0x178: Return(); Pop(0)

0x179: Push((int) 31634)
0x17a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17b: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x17c: PushEmpty(string)
0x17d: Stack[-1] = "Neutral"
0x17e: Call2 0xe5

0x17f: Pop(1)
0x180: Push((int) 530246)
0x181: @@ SetMessage(Stack[-1])
0x182: Pop(1)
0x183: @@ ClearReplies()
0x184: Pop(0)
0x185: Push((int) 530247)
0x186: Push((int) 31636)
0x187: Push((int) 31635)
0x188: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x189: Pop(3)
0x18a: Push((int) 530249)
0x18b: Push((int) 31636)
0x18c: Push((int) 31637)
0x18d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18e: Pop(3)
0x18f: Return(); Pop(0)

0x190: Push((int) 31636)
0x191: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x193: PushEmpty(string)
0x194: Stack[-1] = "Neutral"
0x195: Call2 0xe5

0x196: Pop(1)
0x197: Push((int) 530248)
0x198: @@ SetMessage(Stack[-1])
0x199: Pop(1)
0x19a: @@ ClearReplies()
0x19b: Pop(0)
0x19c: Push((int) 530250)
0x19d: Push((int) -1)
0x19e: Push((int) 31639)
0x19f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a0: Pop(3)
0x1a1: Push((int) 530251)
0x1a2: Push((int) -1)
0x1a3: Push((int) 31640)
0x1a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a5: Pop(3)
0x1a6: Return(); Pop(0)

0x1a7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1a8: PushEmpty(bool)
0x1a9: Call2 0x318

0x1aa: Pop(0)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ac: @ lshStopAnimation()
0x1ad: Pop(0)
0x1ae: GOTO 0x1b1

0x1af: @ StopAnimation()
0x1b0: Pop(0)
0x1b1: Return(); Pop(0)

0x1b2: GOTO 0xfc

0x1b3: Return(); Pop(0)

0x1b4: PushEmpty(float, float)
0x1b5: Stack[-2] = (int) 300
0x1b6: Stack[-1] = (int) 100
0x1b7: Call2 0x1c9

0x1b8: Pop(2)
0x1b9: Push((int) 3)
0x1ba: @ Sleep(Stack[-1])
0x1bb: Pop(1)
0x1bc: GOTO 0x1b4

0x1bd: Return(); Pop(0)

0x1be: PushEmpty()
0x1bf: PushEmpty()
0x1c0: Call2 0x20a

0x1c1: Pop(0)
0x1c2: PushEmpty(int, object)
0x1c3: Stack[-1] = Stack[-3]
0x1c4: Push(-2, 1); TaskCall(0)
0x1c5: Call2 0x0

0x1c6: Pop(-2, 1); TaskReturn
0x1c7: Pop(2)
0x1c8: Return(); Pop(0)

0x1c9: PushEmpty()
0x1ca: PushEmpty(bool)
0x1cb: Call2 0x276

0x1cc: Pop(0)
0x1cd: Pop(1); Push((bool) Stack[-1] == 0)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cf: Return(); Pop(0)

0x1d0: Push("player")
0x1d1: @ FindActor(Stack[-4], Stack[-1])
0x1d2: Pop(1)
0x1d3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1d4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1d5: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1d6: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1d7: Push((int) 10)
0x1d8: Push((float)1.0)
0x1d9: @ SetTimer(Stack[-2], Stack[-1])
0x1da: Pop(2)
0x1db: PushEmpty()
0x1dc: Call2 0x218

0x1dd: Pop(0)
0x1de: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e0: Push((int) 10)
0x1e1: @ KillTimer(Stack[-1])
0x1e2: Pop(1)
0x1e3: Return(); Pop(0)

0x1e4: PushEmpty(float, float)
0x1e5: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e7: Stack[-3] = (bool) 0
0x1e8: Return(); Pop(2)

0x1e9: PushEmpty(float, object)
0x1ea: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1eb: Call2 0x26e

0x1ec: Pop(1)
0x1ed: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1ee: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1f0: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1f1: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1f2: Return(); Pop(2)

0x1f3: PushEmpty()
0x1f4: Push((int) 10)
0x1f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1f7: PushEmpty(bool)
0x1f8: Call2 0x1e4

0x1f9: Pop(0)
0x1fa: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1fb: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1fc: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1fd: PushEmpty(object)
0x1fe: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1ff: Call2 0x2ef

0x200: Pop(1)
0x201: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x202: GOTO 0x209

0x203: Push( Stack[2 + Tasks[-1].StackPointer] )
0x204: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x205: Push("head")
0x206: @ UnlookAsync(Stack[-1])
0x207: Pop(1)
0x208: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x209: Return(); Pop(0)

0x20a: PushEmpty()
0x20b: Call2 0x269

0x20c: Pop(0)
0x20d: Push((int) 10)
0x20e: @ KillTimer(Stack[-1])
0x20f: Pop(1)
0x210: Push( Stack[2 + Tasks[-1].StackPointer] )
0x211: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x212: Push("head")
0x213: @ UnlookAsync(Stack[-1])
0x214: Pop(1)
0x215: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x216: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x217: Return(); Pop(0)

0x218: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x219: @ WaitForAnimEnd()
0x21a: Pop(0)
0x21b: PushEmpty(bool)
0x21c: Call2 0x276

0x21d: Pop(0)
0x21e: Pop(1); Push((bool) Stack[-1] == 0)
0x21f: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x220: Return(); Pop(14)

0x221: PushEmpty(int)
0x222: Call2 0x321

0x223: Stack[-8] = Stack[-1]
0x224: Pop(1)
0x225: Stack[-6] = (int) 0
0x226: PushEmpty(bool)
0x227: Stack[-1] = (bool) 0
0x228: Push((int) 5)
0x229: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22b: PushEmpty(bool)
0x22c: Call2 0x276

0x22d: Pop(0)
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: Stack[-1] = (bool) 1
0x230: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x231: Push((int) 3)
0x232: @ irand(Stack[-6], Stack[-1])
0x233: Pop(1)
0x234: Push((int) 0)
0x235: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x237: Push(Stack[-7])
0x238: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x239: @ irand(Stack[-4], Stack[-7])
0x23a: Pop(0)
0x23b: Push("all")
0x23c: PushEmpty(string, int)
0x23d: Stack[-1] = Stack[-7]
0x23e: Call2 0x31a

0x23f: Pop(1)
0x240: @ PlayAnimation(Stack[-2], Stack[-1])
0x241: Pop(2)
0x242: @ WaitForAnimEnd(Stack[-3])
0x243: Pop(0)
0x244: Pop(0); Push((bool) Stack[-3] == 0)
0x245: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x246: GOTO 0x264

0x247: GOTO 0x259

0x248: Push((int) 1)
0x249: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x24b: Push((int) 4)
0x24c: @ rand(Stack[-3], Stack[-1])
0x24d: Pop(1)
0x24e: Push((int) 1)
0x24f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x250: @ Sleep(Stack[-1], Stack[-2])
0x251: Pop(1)
0x252: Pop(0); Push((bool) Stack[-1] == 0)
0x253: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x254: GOTO 0x264

0x255: GOTO 0x259

0x256: Push(Stack[-6])
0x257: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x258: GOTO 0x264

0x259: PushEmpty(bool)
0x25a: Call2 0x267

0x25b: Pop(0)
0x25c: Pop(1); Push((bool) Stack[-1] == 0)
0x25d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25e: GOTO 0x264

0x25f: @ ResetAAS()
0x260: Pop(0)
0x261: Push((int) 1)
0x262: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x263: GOTO 0x226

0x264: @ ResetAAS()
0x265: Pop(0)
0x266: Return(); Pop(14)

0x267: Stack[-1] = (bool) 1
0x268: Return(); Pop(0)

0x269: @ StopAnimation()
0x26a: Pop(0)
0x26b: @ StopGroup0()
0x26c: Pop(0)
0x26d: Return(); Pop(0)

0x26e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x26f: @ GetPosition(Stack[-3])
0x270: Pop(0)
0x271: @@ GetPosition(Stack[-2])
0x272: Pop(0)
0x273: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x274: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x275: Return(); Pop(6)

0x276: PushEmpty(bool, bool)
0x277: @ IsLoaded(Stack[-1])
0x278: Pop(0)
0x279: Stack[-3] = Stack[-1]
0x27a: Return(); Pop(2)

0x27b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x27c: @@ GetPosition(Stack[-8])
0x27d: Pop(0)
0x27e: @@ GetEyesHeight(Stack[-9])
0x27f: Pop(0)
0x280: Push(CvectorIndex(Stack[-8], 1))
0x281: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x282: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x283: @ GetPosition(Stack[-7])
0x284: Pop(0)
0x285: @ GetEyesHeight(Stack[-9])
0x286: Pop(0)
0x287: Push(CvectorIndex(Stack[-7], 1))
0x288: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x289: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x28a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x28b: Push(CvectorIndex(Stack[-6], 1))
0x28c: Stack[-1] = (int) 0
0x28d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x28e: Pop(0); Push(Stack[-6] | Stack[-6]);
0x28f: Pop(1); Push(Sqrt(Stack[-1]))
0x290: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x291: Stack[-5] = -Stack[-6]; Pop(0);
0x292: Pop(0); Push(Stack[-6] * Stack[-19]);
0x293: PushEmpty(cvector, cvector)
0x294: Push(CVector(0.0, 1.0, 0.0))
0x295: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x296: Call2 0x301

0x297: Pop(1)
0x298: Push((int) 25)
0x299: Pop(2); Push(Stack[-2] * Stack[-1]);
0x29a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x29b: Push(CVector(0.0, 10.0, 0.0))
0x29c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x29d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x29e: @ IsOverrideActive(Stack[-2])
0x29f: Pop(0)
0x2a0: Push(Stack[-2])
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a2: Stack[-21] = (bool) 0
0x2a3: Return(); Pop(18)

0x2a4: @ StopWorld()
0x2a5: Pop(0)
0x2a6: @ CameraTransit(Stack[-3], Stack[-5])
0x2a7: Pop(0)
0x2a8: Push(CvectorIndex(Stack[-4], 0))
0x2a9: Push(CvectorIndex(Stack[-5], 2))
0x2aa: @ Rotate(Stack[-2], Stack[-1])
0x2ab: Pop(2)
0x2ac: PushEmpty(bool)
0x2ad: Call2 0x318

0x2ae: Pop(0)
0x2af: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2b0: GOTO 0x2b9

0x2b1: Push("head")
0x2b2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2b3: Pop(1)
0x2b4: Push(Stack[-1])
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b6: Push("head")
0x2b7: @ LookAsyncCamera(Stack[-1])
0x2b8: Pop(1)
0x2b9: @ CameraWaitForPlayFinish()
0x2ba: Pop(0)
0x2bb: @ ResumeWorld()
0x2bc: Pop(0)
0x2bd: Stack[-21] = (bool) 1
0x2be: Return(); Pop(18)

0x2bf: PushEmpty(bool, bool)
0x2c0: @ CameraSwitchToNormal()
0x2c1: Pop(0)
0x2c2: PushEmpty(bool)
0x2c3: Call2 0x318

0x2c4: Pop(0)
0x2c5: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c6: GOTO 0x2cf

0x2c7: Push("head")
0x2c8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c9: Pop(1)
0x2ca: Push(Stack[-1])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2cc: Push("head")
0x2cd: @ UnlookAsync(Stack[-1])
0x2ce: Pop(1)
0x2cf: Return(); Pop(2)

0x2d0: PushEmpty(bool, float, float, bool, float, float)
0x2d1: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2d2: Pop(0)
0x2d3: Push(Stack[-3])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d5: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2d6: Pop(0)
0x2d7: Push((bool) 0)
0x2d8: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2d9: Pop(1)
0x2da: GOTO 0x2df

0x2db: Push("Can't find lsh animation : ")
0x2dc: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2dd: @ Trace(Stack[-1])
0x2de: Pop(1)
0x2df: Return(); Pop(6)

0x2e0: PushEmpty(bool, float, float, bool, float, float)
0x2e1: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2e2: Pop(0)
0x2e3: Push(Stack[-3])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e5: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2e6: Pop(0)
0x2e7: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2e8: Pop(0)
0x2e9: GOTO 0x2ee

0x2ea: Push("Can't find lsh animation : ")
0x2eb: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2ec: @ Trace(Stack[-1])
0x2ed: Pop(1)
0x2ee: Return(); Pop(6)

0x2ef: PushEmpty(float, cvector, float, cvector)
0x2f0: @@ GetEyesHeight(Stack[-2])
0x2f1: Pop(0)
0x2f2: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2f3: Push(CvectorIndex(Stack[-1], 1))
0x2f4: Stack[-1] = Stack[-3]
0x2f5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2f6: Push("head")
0x2f7: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2f8: Pop(1)
0x2f9: Return(); Pop(4)

0x2fa: PushEmpty(bool)
0x2fb: Call2 0x318

0x2fc: Pop(0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fe: @ lshStopSpeech()
0x2ff: Pop(0)
0x300: Return(); Pop(0)

0x301: PushEmpty(float, float)
0x302: Pop(0); Push(Stack[-3] | Stack[-3]);
0x303: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x304: Push((float)0.0)
0x305: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x307: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x308: Return(); Pop(2)

0x309: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x30a: Return(); Pop(2)

0x30b: PushEmpty(int, int)
0x30c: @ GetVariable(Stack[-3], Stack[-1])
0x30d: Pop(0)
0x30e: Stack[-4] = Stack[-1]
0x30f: Return(); Pop(2)

0x310: Stack[-1] = (int) 527721
0x311: Return(); Pop(0)

0x312: Stack[-1] = (int) 527720
0x313: Return(); Pop(0)

0x314: Stack[-1] = "ui/NPC_Citizen1.png"
0x315: Return(); Pop(0)

0x316: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x317: Return(); Pop(0)

0x318: Stack[-1] = (bool) 0
0x319: Return(); Pop(0)

0x31a: PushEmpty(string, string)
0x31b: Stack[-1] = "idle"
0x31c: Push(Stack[-3])
0x31d: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x31f: Stack[-4] = Stack[-1]
0x320: Return(); Pop(2)

0x321: PushEmpty(int, bool, int, bool)
0x322: Stack[-2] = (int) 0
0x323: Push("all")
0x324: PushEmpty(string, int)
0x325: Stack[-1] = Stack[-5]
0x326: Call2 0x31a

0x327: Pop(1)
0x328: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x329: Pop(2)
0x32a: Pop(0); Push((bool) Stack[-1] == 0)
0x32b: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32c: GOTO 0x330

0x32d: Push((int) 1)
0x32e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x32f: GOTO 0x323

0x330: Stack[-5] = Stack[-2]
0x331: Return(); Pop(4)

0x332: PushEmpty()
0x333: Push("ook11Soldier1")
0x334: Push((int) 1)
0x335: @ SetVariable(Stack[-2], Stack[-1])
0x336: Pop(2)
0x337: Return(); Pop(0)

0x338: PushEmpty()
0x339: Push("ook11Soldier2")
0x33a: Push((int) 1)
0x33b: @ SetVariable(Stack[-2], Stack[-1])
0x33c: Pop(2)
0x33d: Return(); Pop(0)

0x33e: PushEmpty()
0x33f: PushEmpty(int, string)
0x340: Stack[-1] = "k11q01"
0x341: Call2 0x30b

0x342: Pop(1)
0x343: Push((int) 2)
0x344: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x345: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x346: Stack[-2] = (bool) 1
0x347: Return(); Pop(0)

0x348: Stack[-2] = (bool) 0
0x349: Return(); Pop(0)

0x34a: PushEmpty()
0x34b: PushEmpty(int, string)
0x34c: Stack[-1] = "ook11Soldier1"
0x34d: Call2 0x30b

0x34e: Pop(1)
0x34f: Push((int) 0)
0x350: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x352: Stack[-2] = (bool) 1
0x353: Return(); Pop(0)

0x354: Stack[-2] = (bool) 0
0x355: Return(); Pop(0)

0x356: PushEmpty()
0x357: PushEmpty(int, string)
0x358: Stack[-1] = "k11q01Cured"
0x359: Call2 0x30b

0x35a: Pop(1)
0x35b: Push((int) 0)
0x35c: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x35d: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35e: Stack[-2] = (bool) 1
0x35f: Return(); Pop(0)

0x360: Stack[-2] = (bool) 0
0x361: Return(); Pop(0)

0x362: PushEmpty()
0x363: PushEmpty(int, string)
0x364: Stack[-1] = "ook11Soldier2"
0x365: Call2 0x30b

0x366: Pop(1)
0x367: Push((int) 0)
0x368: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x369: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36a: Stack[-2] = (bool) 1
0x36b: Return(); Pop(0)

0x36c: Stack[-2] = (bool) 0
0x36d: Return(); Pop(0)

0x36e: PushEmpty(int, int)
0x36f: Push("branch")
0x370: @ GetVariable(Stack[-1], Stack[-2])
0x371: Pop(1)
0x372: Push((int) 0)
0x373: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x375: Stack[-3] = (int) 1
0x376: Return(); Pop(2)

0x377: GOTO 0x37d

0x378: Push((int) 1)
0x379: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37a: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x37b: Stack[-3] = (int) 2
0x37c: Return(); Pop(2)

0x37d: Stack[-3] = (int) 3
0x37e: Return(); Pop(2)

