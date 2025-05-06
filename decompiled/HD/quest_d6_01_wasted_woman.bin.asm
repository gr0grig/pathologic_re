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
	ood6WastedWoman1
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
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x137
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x143 Vars = (object)
		EVENT_7 Op = 0x178 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x200

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
0x22: Call2 0x2cb

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
0x41: Call2 0x245

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
0x54: Push((int) 503852)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x2bf

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 503853)
0x5f: Push((int) 4193)
0x60: Push((int) 4190)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 503855)
0x64: Push((int) -1)
0x65: Push((int) 4192)
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
0x76: Call2 0x257

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
0x9b: Call2 0x267

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x281

0xa4: Pop(0)
0xa5: Push((int) 4190)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x2b9

0xac: Pop(2)
0xad: Push((int) 4189)
0xae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xb0: PushEmpty(string)
0xb1: Stack[-1] = "Neutral"
0xb2: Call2 0x89

0xb3: Pop(1)
0xb4: Push((int) 503852)
0xb5: @@ SetMessage(Stack[-1])
0xb6: Pop(1)
0xb7: @@ ClearReplies()
0xb8: Pop(0)
0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x2bf

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbe: Push((int) 503853)
0xbf: Push((int) 4193)
0xc0: Push((int) 4190)
0xc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2: Pop(3)
0xc3: Push((int) 503855)
0xc4: Push((int) -1)
0xc5: Push((int) 4192)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Return(); Pop(0)

0xc9: Push((int) 4193)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call2 0x89

0xcf: Pop(1)
0xd0: Push((int) 503856)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: Push((int) 503857)
0xd6: Push((int) 4196)
0xd7: Push((int) 4195)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Push((int) 503864)
0xdb: Push((int) 4196)
0xdc: Push((int) 4204)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Return(); Pop(0)

0xe0: Push((int) 4196)
0xe1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xe3: PushEmpty(string)
0xe4: Stack[-1] = "Neutral"
0xe5: Call2 0x89

0xe6: Pop(1)
0xe7: Push((int) 503858)
0xe8: @@ SetMessage(Stack[-1])
0xe9: Pop(1)
0xea: @@ ClearReplies()
0xeb: Pop(0)
0xec: Push((int) 503859)
0xed: Push((int) 4200)
0xee: Push((int) 4197)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Push((int) 503860)
0xf2: Push((int) 4200)
0xf3: Push((int) 4198)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Push((int) 503861)
0xf7: Push((int) 4200)
0xf8: Push((int) 4199)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Push((int) 4200)
0xfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Neutral"
0x101: Call2 0x89

0x102: Pop(1)
0x103: Push((int) 503862)
0x104: @@ SetMessage(Stack[-1])
0x105: Pop(1)
0x106: @@ ClearReplies()
0x107: Pop(0)
0x108: Push((int) 503863)
0x109: Push((int) 4207)
0x10a: Push((int) 4203)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Push((int) 503865)
0x10e: Push((int) -1)
0x10f: Push((int) 4206)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Push((int) 4207)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x116: PushEmpty(string)
0x117: Stack[-1] = "Neutral"
0x118: Call2 0x89

0x119: Pop(1)
0x11a: Push((int) 503866)
0x11b: @@ SetMessage(Stack[-1])
0x11c: Pop(1)
0x11d: @@ ClearReplies()
0x11e: Pop(0)
0x11f: Push((int) 503867)
0x120: Push((int) -1)
0x121: Push((int) 4208)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Push((int) 503868)
0x125: Push((int) -1)
0x126: Push((int) 4209)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Return(); Pop(0)

0x12a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x12b: PushEmpty(bool)
0x12c: Call2 0x2b7

0x12d: Pop(0)
0x12e: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12f: @ lshStopAnimation()
0x130: Pop(0)
0x131: GOTO 0x134

0x132: @ StopAnimation()
0x133: Pop(0)
0x134: Return(); Pop(0)

0x135: GOTO 0xa0

0x136: Return(); Pop(0)

0x137: Push((bool) 1)
0x138: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x139: Push((int) 1)
0x13a: @ Sleep(Stack[-1])
0x13b: Pop(1)
0x13c: PushEmpty(float, float)
0x13d: Stack[-2] = (int) 300
0x13e: Stack[-1] = (int) 100
0x13f: Call2 0x14e

0x140: Pop(2)
0x141: GOTO 0x137

0x142: Return(); Pop(0)

0x143: PushEmpty()
0x144: PushEmpty()
0x145: Call2 0x18f

0x146: Pop(0)
0x147: PushEmpty(int, object)
0x148: Stack[-1] = Stack[-3]
0x149: Push(-2, 1); TaskCall(0)
0x14a: Call2 0x0

0x14b: Pop(-2, 1); TaskReturn
0x14c: Pop(2)
0x14d: Return(); Pop(0)

0x14e: PushEmpty()
0x14f: PushEmpty(bool)
0x150: Call2 0x1fb

0x151: Pop(0)
0x152: Pop(1); Push((bool) Stack[-1] == 0)
0x153: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x154: Return(); Pop(0)

0x155: Push("player")
0x156: @ FindActor(Stack[-4], Stack[-1])
0x157: Pop(1)
0x158: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x159: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x15a: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x15b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x15c: Push((int) 10)
0x15d: Push((float)1.0)
0x15e: @ SetTimer(Stack[-2], Stack[-1])
0x15f: Pop(2)
0x160: PushEmpty()
0x161: Call2 0x19d

0x162: Pop(0)
0x163: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x164: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x165: Push((int) 10)
0x166: @ KillTimer(Stack[-1])
0x167: Pop(1)
0x168: Return(); Pop(0)

0x169: PushEmpty(float, float)
0x16a: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x16b: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16c: Stack[-3] = (bool) 0
0x16d: Return(); Pop(2)

0x16e: PushEmpty(float, object)
0x16f: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x170: Call2 0x1f3

0x171: Pop(1)
0x172: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x173: Push( Stack[2 + Tasks[-1].StackPointer] )
0x174: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x175: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x176: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x177: Return(); Pop(2)

0x178: PushEmpty()
0x179: Push((int) 10)
0x17a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17b: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x17c: PushEmpty(bool)
0x17d: Call2 0x169

0x17e: Pop(0)
0x17f: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x180: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x181: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x182: PushEmpty(object)
0x183: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x184: Call2 0x276

0x185: Pop(1)
0x186: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x187: GOTO 0x18e

0x188: Push( Stack[2 + Tasks[-1].StackPointer] )
0x189: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18a: Push("head")
0x18b: @ UnlookAsync(Stack[-1])
0x18c: Pop(1)
0x18d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x18e: Return(); Pop(0)

0x18f: PushEmpty()
0x190: Call2 0x1ee

0x191: Pop(0)
0x192: Push((int) 10)
0x193: @ KillTimer(Stack[-1])
0x194: Pop(1)
0x195: Push( Stack[2 + Tasks[-1].StackPointer] )
0x196: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x197: Push("head")
0x198: @ UnlookAsync(Stack[-1])
0x199: Pop(1)
0x19a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x19b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x19c: Return(); Pop(0)

0x19d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x19e: @ WaitForAnimEnd()
0x19f: Pop(0)
0x1a0: PushEmpty(bool)
0x1a1: Call2 0x1fb

0x1a2: Pop(0)
0x1a3: Pop(1); Push((bool) Stack[-1] == 0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: Return(); Pop(14)

0x1a6: PushEmpty(int)
0x1a7: Call2 0x29e

0x1a8: Stack[-8] = Stack[-1]
0x1a9: Pop(1)
0x1aa: Stack[-6] = (int) 0
0x1ab: PushEmpty(bool)
0x1ac: Stack[-1] = (bool) 0
0x1ad: Push((int) 5)
0x1ae: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b0: PushEmpty(bool)
0x1b1: Call2 0x1fb

0x1b2: Pop(0)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b4: Stack[-1] = (bool) 1
0x1b5: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1b6: Push((int) 3)
0x1b7: @ irand(Stack[-6], Stack[-1])
0x1b8: Pop(1)
0x1b9: Push((int) 0)
0x1ba: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1bc: Push(Stack[-7])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1be: @ irand(Stack[-4], Stack[-7])
0x1bf: Pop(0)
0x1c0: Push("all")
0x1c1: PushEmpty(string, int)
0x1c2: Stack[-1] = Stack[-7]
0x1c3: Call2 0x297

0x1c4: Pop(1)
0x1c5: @ PlayAnimation(Stack[-2], Stack[-1])
0x1c6: Pop(2)
0x1c7: @ WaitForAnimEnd(Stack[-3])
0x1c8: Pop(0)
0x1c9: Pop(0); Push((bool) Stack[-3] == 0)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1cb: GOTO 0x1e9

0x1cc: GOTO 0x1de

0x1cd: Push((int) 1)
0x1ce: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d0: Push((int) 4)
0x1d1: @ rand(Stack[-3], Stack[-1])
0x1d2: Pop(1)
0x1d3: Push((int) 1)
0x1d4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1d5: @ Sleep(Stack[-1], Stack[-2])
0x1d6: Pop(1)
0x1d7: Pop(0); Push((bool) Stack[-1] == 0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d9: GOTO 0x1e9

0x1da: GOTO 0x1de

0x1db: Push(Stack[-6])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1dd: GOTO 0x1e9

0x1de: PushEmpty(bool)
0x1df: Call2 0x1ec

0x1e0: Pop(0)
0x1e1: Pop(1); Push((bool) Stack[-1] == 0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e3: GOTO 0x1e9

0x1e4: @ ResetAAS()
0x1e5: Pop(0)
0x1e6: Push((int) 1)
0x1e7: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1e8: GOTO 0x1ab

0x1e9: @ ResetAAS()
0x1ea: Pop(0)
0x1eb: Return(); Pop(14)

0x1ec: Stack[-1] = (bool) 1
0x1ed: Return(); Pop(0)

0x1ee: @ StopAnimation()
0x1ef: Pop(0)
0x1f0: @ StopGroup0()
0x1f1: Pop(0)
0x1f2: Return(); Pop(0)

0x1f3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1f4: @ GetPosition(Stack[-3])
0x1f5: Pop(0)
0x1f6: @@ GetPosition(Stack[-2])
0x1f7: Pop(0)
0x1f8: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1f9: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1fa: Return(); Pop(6)

0x1fb: PushEmpty(bool, bool)
0x1fc: @ IsLoaded(Stack[-1])
0x1fd: Pop(0)
0x1fe: Stack[-3] = Stack[-1]
0x1ff: Return(); Pop(2)

0x200: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x201: @@ GetPosition(Stack[-8])
0x202: Pop(0)
0x203: @@ GetEyesHeight(Stack[-9])
0x204: Pop(0)
0x205: Push(CvectorIndex(Stack[-8], 1))
0x206: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x207: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x208: @ GetPosition(Stack[-7])
0x209: Pop(0)
0x20a: @ GetEyesHeight(Stack[-9])
0x20b: Pop(0)
0x20c: Push(CvectorIndex(Stack[-7], 1))
0x20d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x20e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x20f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x210: Push(CvectorIndex(Stack[-6], 1))
0x211: Stack[-1] = (int) 0
0x212: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x213: Pop(0); Push(Stack[-6] | Stack[-6]);
0x214: Pop(1); Push(Sqrt(Stack[-1]))
0x215: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x216: Stack[-5] = -Stack[-6]; Pop(0);
0x217: Pop(0); Push(Stack[-6] * Stack[-19]);
0x218: PushEmpty(cvector, cvector)
0x219: Push(CVector(0.0, 1.0, 0.0))
0x21a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x21b: Call2 0x288

0x21c: Pop(1)
0x21d: Push((int) 25)
0x21e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x21f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x220: Push(CVector(0.0, 10.0, 0.0))
0x221: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x222: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x223: @ IsOverrideActive(Stack[-2])
0x224: Pop(0)
0x225: Push(Stack[-2])
0x226: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x227: Stack[-21] = (bool) 0
0x228: Return(); Pop(18)

0x229: @ StopWorld()
0x22a: Pop(0)
0x22b: Push((bool) 1)
0x22c: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x22d: Pop(1)
0x22e: Push(CvectorIndex(Stack[-4], 0))
0x22f: Push(CvectorIndex(Stack[-5], 2))
0x230: @ Rotate(Stack[-2], Stack[-1])
0x231: Pop(2)
0x232: PushEmpty(bool)
0x233: Call2 0x2b7

0x234: Pop(0)
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: GOTO 0x23f

0x237: Push("head")
0x238: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x239: Pop(1)
0x23a: Push(Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23c: Push("head")
0x23d: @ LookAsyncCamera(Stack[-1])
0x23e: Pop(1)
0x23f: @ CameraWaitForPlayFinish()
0x240: Pop(0)
0x241: @ ResumeWorld()
0x242: Pop(0)
0x243: Stack[-21] = (bool) 1
0x244: Return(); Pop(18)

0x245: PushEmpty(bool, bool)
0x246: Push((bool) 1)
0x247: @ CameraSwitchToNormal(Stack[-1])
0x248: Pop(1)
0x249: PushEmpty(bool)
0x24a: Call2 0x2b7

0x24b: Pop(0)
0x24c: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24d: GOTO 0x256

0x24e: Push("head")
0x24f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x250: Pop(1)
0x251: Push(Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x253: Push("head")
0x254: @ UnlookAsync(Stack[-1])
0x255: Pop(1)
0x256: Return(); Pop(2)

0x257: PushEmpty(bool, float, float, bool, float, float)
0x258: @ lshHasAnimation(Stack[-3], Stack[-7])
0x259: Pop(0)
0x25a: Push(Stack[-3])
0x25b: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x25c: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x25d: Pop(0)
0x25e: Push((bool) 0)
0x25f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x260: Pop(1)
0x261: GOTO 0x266

0x262: Push("Can't find lsh animation : ")
0x263: Pop(1); Push(Stack[-1] + Stack[-8]);
0x264: @ Trace(Stack[-1])
0x265: Pop(1)
0x266: Return(); Pop(6)

0x267: PushEmpty(bool, float, float, bool, float, float)
0x268: @ lshHasAnimation(Stack[-3], Stack[-8])
0x269: Pop(0)
0x26a: Push(Stack[-3])
0x26b: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x26d: Pop(0)
0x26e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x26f: Pop(0)
0x270: GOTO 0x275

0x271: Push("Can't find lsh animation : ")
0x272: Pop(1); Push(Stack[-1] + Stack[-9]);
0x273: @ Trace(Stack[-1])
0x274: Pop(1)
0x275: Return(); Pop(6)

0x276: PushEmpty(float, cvector, float, cvector)
0x277: @@ GetEyesHeight(Stack[-2])
0x278: Pop(0)
0x279: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x27a: Push(CvectorIndex(Stack[-1], 1))
0x27b: Stack[-1] = Stack[-3]
0x27c: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x27d: Push("head")
0x27e: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x27f: Pop(1)
0x280: Return(); Pop(4)

0x281: PushEmpty(bool)
0x282: Call2 0x2b7

0x283: Pop(0)
0x284: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x285: @ lshStopSpeech()
0x286: Pop(0)
0x287: Return(); Pop(0)

0x288: PushEmpty(float, float)
0x289: Pop(0); Push(Stack[-3] | Stack[-3]);
0x28a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x28b: Push((float)0.0)
0x28c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x28f: Return(); Pop(2)

0x290: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x291: Return(); Pop(2)

0x292: PushEmpty(int, int)
0x293: @ GetVariable(Stack[-3], Stack[-1])
0x294: Pop(0)
0x295: Stack[-4] = Stack[-1]
0x296: Return(); Pop(2)

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

0x2af: Stack[-1] = (int) 515555
0x2b0: Return(); Pop(0)

0x2b1: Stack[-1] = (int) 503340
0x2b2: Return(); Pop(0)

0x2b3: Stack[-1] = "ui/NPC_Citizen2.png"
0x2b4: Return(); Pop(0)

0x2b5: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x2b6: Return(); Pop(0)

0x2b7: Stack[-1] = (bool) 0
0x2b8: Return(); Pop(0)

0x2b9: PushEmpty()
0x2ba: Push("ood6WastedWoman1")
0x2bb: Push((int) 1)
0x2bc: @ SetVariable(Stack[-2], Stack[-1])
0x2bd: Pop(2)
0x2be: Return(); Pop(0)

0x2bf: PushEmpty()
0x2c0: PushEmpty(int, string)
0x2c1: Stack[-1] = "ood6WastedWoman1"
0x2c2: Call2 0x292

0x2c3: Pop(1)
0x2c4: Push((int) 0)
0x2c5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c7: Stack[-2] = (bool) 1
0x2c8: Return(); Pop(0)

0x2c9: Stack[-2] = (bool) 0
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(int, int)
0x2cc: Push("branch")
0x2cd: @ GetVariable(Stack[-1], Stack[-2])
0x2ce: Pop(1)
0x2cf: Push((int) 0)
0x2d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d2: Stack[-3] = (int) 1
0x2d3: Return(); Pop(2)

0x2d4: GOTO 0x2da

0x2d5: Push((int) 1)
0x2d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d7: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d8: Stack[-3] = (int) 2
0x2d9: Return(); Pop(2)

0x2da: Stack[-3] = (int) 3
0x2db: Return(); Pop(2)

