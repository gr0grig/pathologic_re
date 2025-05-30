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
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png
	ood6WastedMale1
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

RunOp = 0x141
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x14d Vars = (object)
		EVENT_7 Op = 0x182 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x20a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2b9

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2b7

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2bb

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2bd

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2d3

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
0x41: Call2 0x24e

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
0x54: Push((int) 503835)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x2c7

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 503836)
0x5f: Push((int) 4173)
0x60: Push((int) 4170)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 536330)
0x64: Push((int) -1)
0x65: Push((int) 38111)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 536331)
0x69: Push((int) -1)
0x6a: Push((int) 38112)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x2bf

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x25f

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
0x90: Call2 0x2bf

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
0xa0: Call2 0x26f

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x289

0xa9: Pop(0)
0xaa: Push((int) 4170)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x2c1

0xb1: Pop(2)
0xb2: Push((int) 4169)
0xb3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xb5: PushEmpty(string)
0xb6: Stack[-1] = "Neutral"
0xb7: Call2 0x8e

0xb8: Pop(1)
0xb9: Push((int) 503835)
0xba: @@ SetMessage(Stack[-1])
0xbb: Pop(1)
0xbc: @@ ClearReplies()
0xbd: Pop(0)
0xbe: PushEmpty(bool, object)
0xbf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Call2 0x2c7

0xc1: Pop(1)
0xc2: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc3: Push((int) 503836)
0xc4: Push((int) 4173)
0xc5: Push((int) 4170)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Push((int) 536330)
0xc9: Push((int) -1)
0xca: Push((int) 38111)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: Push((int) 536331)
0xce: Push((int) -1)
0xcf: Push((int) 38112)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: Return(); Pop(0)

0xd3: Push((int) 4173)
0xd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xd6: PushEmpty(string)
0xd7: Stack[-1] = "Neutral"
0xd8: Call2 0x8e

0xd9: Pop(1)
0xda: Push((int) 503839)
0xdb: @@ SetMessage(Stack[-1])
0xdc: Pop(1)
0xdd: @@ ClearReplies()
0xde: Pop(0)
0xdf: Push((int) 503842)
0xe0: Push((int) 4179)
0xe1: Push((int) 4177)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Push((int) 503837)
0xe5: Push((int) 4174)
0xe6: Push((int) 4171)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Return(); Pop(0)

0xea: Push((int) 4174)
0xeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral"
0xef: Call2 0x8e

0xf0: Pop(1)
0xf1: Push((int) 503840)
0xf2: @@ SetMessage(Stack[-1])
0xf3: Pop(1)
0xf4: @@ ClearReplies()
0xf5: Pop(0)
0xf6: Push((int) 503841)
0xf7: Push((int) 4179)
0xf8: Push((int) 4175)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Push((int) 503843)
0xfc: Push((int) 4179)
0xfd: Push((int) 4178)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Return(); Pop(0)

0x101: Push((int) 4179)
0x102: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x104: PushEmpty(string)
0x105: Stack[-1] = "Neutral"
0x106: Call2 0x8e

0x107: Pop(1)
0x108: Push((int) 503844)
0x109: @@ SetMessage(Stack[-1])
0x10a: Pop(1)
0x10b: @@ ClearReplies()
0x10c: Pop(0)
0x10d: Push((int) 503845)
0x10e: Push((int) 4183)
0x10f: Push((int) 4181)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Push((int) 503846)
0x113: Push((int) -1)
0x114: Push((int) 4182)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: Push((int) 4183)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Neutral"
0x11d: Call2 0x8e

0x11e: Pop(1)
0x11f: Push((int) 503847)
0x120: @@ SetMessage(Stack[-1])
0x121: Pop(1)
0x122: @@ ClearReplies()
0x123: Pop(0)
0x124: Push((int) 503848)
0x125: Push((int) -1)
0x126: Push((int) 4185)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Push((int) 503849)
0x12a: Push((int) -1)
0x12b: Push((int) 4186)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Push((int) 503850)
0x12f: Push((int) -1)
0x130: Push((int) 4187)
0x131: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132: Pop(3)
0x133: Return(); Pop(0)

0x134: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x135: PushEmpty(bool)
0x136: Call2 0x2bf

0x137: Pop(0)
0x138: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x139: @ lshStopAnimation()
0x13a: Pop(0)
0x13b: GOTO 0x13e

0x13c: @ StopAnimation()
0x13d: Pop(0)
0x13e: Return(); Pop(0)

0x13f: GOTO 0xa5

0x140: Return(); Pop(0)

0x141: Push((bool) 1)
0x142: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x143: Push((int) 1)
0x144: @ Sleep(Stack[-1])
0x145: Pop(1)
0x146: PushEmpty(float, float)
0x147: Stack[-2] = (int) 300
0x148: Stack[-1] = (int) 100
0x149: Call2 0x158

0x14a: Pop(2)
0x14b: GOTO 0x141

0x14c: Return(); Pop(0)

0x14d: PushEmpty()
0x14e: PushEmpty()
0x14f: Call2 0x199

0x150: Pop(0)
0x151: PushEmpty(int, object)
0x152: Stack[-1] = Stack[-3]
0x153: Push(-2, 1); TaskCall(0)
0x154: Call2 0x0

0x155: Pop(-2, 1); TaskReturn
0x156: Pop(2)
0x157: Return(); Pop(0)

0x158: PushEmpty()
0x159: PushEmpty(bool)
0x15a: Call2 0x205

0x15b: Pop(0)
0x15c: Pop(1); Push((bool) Stack[-1] == 0)
0x15d: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15e: Return(); Pop(0)

0x15f: Push("player")
0x160: @ FindActor(Stack[-4], Stack[-1])
0x161: Pop(1)
0x162: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x163: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x164: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x165: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x166: Push((int) 10)
0x167: Push((float)1.0)
0x168: @ SetTimer(Stack[-2], Stack[-1])
0x169: Pop(2)
0x16a: PushEmpty()
0x16b: Call2 0x1a7

0x16c: Pop(0)
0x16d: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x16e: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16f: Push((int) 10)
0x170: @ KillTimer(Stack[-1])
0x171: Pop(1)
0x172: Return(); Pop(0)

0x173: PushEmpty(float, float)
0x174: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x175: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x176: Stack[-3] = (bool) 0
0x177: Return(); Pop(2)

0x178: PushEmpty(float, object)
0x179: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x17a: Call2 0x1fd

0x17b: Pop(1)
0x17c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x17d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x17e: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17f: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x180: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x181: Return(); Pop(2)

0x182: PushEmpty()
0x183: Push((int) 10)
0x184: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x186: PushEmpty(bool)
0x187: Call2 0x173

0x188: Pop(0)
0x189: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x18b: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18c: PushEmpty(object)
0x18d: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x18e: Call2 0x27e

0x18f: Pop(1)
0x190: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x191: GOTO 0x198

0x192: Push( Stack[2 + Tasks[-1].StackPointer] )
0x193: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x194: Push("head")
0x195: @ UnlookAsync(Stack[-1])
0x196: Pop(1)
0x197: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x198: Return(); Pop(0)

0x199: PushEmpty()
0x19a: Call2 0x1f8

0x19b: Pop(0)
0x19c: Push((int) 10)
0x19d: @ KillTimer(Stack[-1])
0x19e: Pop(1)
0x19f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a1: Push("head")
0x1a2: @ UnlookAsync(Stack[-1])
0x1a3: Pop(1)
0x1a4: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1a5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1a6: Return(); Pop(0)

0x1a7: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1a8: @ WaitForAnimEnd()
0x1a9: Pop(0)
0x1aa: PushEmpty(bool)
0x1ab: Call2 0x205

0x1ac: Pop(0)
0x1ad: Pop(1); Push((bool) Stack[-1] == 0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1af: Return(); Pop(14)

0x1b0: PushEmpty(int)
0x1b1: Call2 0x2a6

0x1b2: Stack[-8] = Stack[-1]
0x1b3: Pop(1)
0x1b4: Stack[-6] = (int) 0
0x1b5: PushEmpty(bool)
0x1b6: Stack[-1] = (bool) 0
0x1b7: Push((int) 5)
0x1b8: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ba: PushEmpty(bool)
0x1bb: Call2 0x205

0x1bc: Pop(0)
0x1bd: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1be: Stack[-1] = (bool) 1
0x1bf: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1c0: Push((int) 3)
0x1c1: @ irand(Stack[-6], Stack[-1])
0x1c2: Pop(1)
0x1c3: Push((int) 0)
0x1c4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1c6: Push(Stack[-7])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1c8: @ irand(Stack[-4], Stack[-7])
0x1c9: Pop(0)
0x1ca: Push("all")
0x1cb: PushEmpty(string, int)
0x1cc: Stack[-1] = Stack[-7]
0x1cd: Call2 0x29f

0x1ce: Pop(1)
0x1cf: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d0: Pop(2)
0x1d1: @ WaitForAnimEnd(Stack[-3])
0x1d2: Pop(0)
0x1d3: Pop(0); Push((bool) Stack[-3] == 0)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d5: GOTO 0x1f3

0x1d6: GOTO 0x1e8

0x1d7: Push((int) 1)
0x1d8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1da: Push((int) 4)
0x1db: @ rand(Stack[-3], Stack[-1])
0x1dc: Pop(1)
0x1dd: Push((int) 1)
0x1de: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1df: @ Sleep(Stack[-1], Stack[-2])
0x1e0: Pop(1)
0x1e1: Pop(0); Push((bool) Stack[-1] == 0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e3: GOTO 0x1f3

0x1e4: GOTO 0x1e8

0x1e5: Push(Stack[-6])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e7: GOTO 0x1f3

0x1e8: PushEmpty(bool)
0x1e9: Call2 0x1f6

0x1ea: Pop(0)
0x1eb: Pop(1); Push((bool) Stack[-1] == 0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: GOTO 0x1f3

0x1ee: @ ResetAAS()
0x1ef: Pop(0)
0x1f0: Push((int) 1)
0x1f1: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1f2: GOTO 0x1b5

0x1f3: @ ResetAAS()
0x1f4: Pop(0)
0x1f5: Return(); Pop(14)

0x1f6: Stack[-1] = (bool) 1
0x1f7: Return(); Pop(0)

0x1f8: @ StopAnimation()
0x1f9: Pop(0)
0x1fa: @ StopGroup0()
0x1fb: Pop(0)
0x1fc: Return(); Pop(0)

0x1fd: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1fe: @ GetPosition(Stack[-3])
0x1ff: Pop(0)
0x200: @@ GetPosition(Stack[-2])
0x201: Pop(0)
0x202: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x203: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x204: Return(); Pop(6)

0x205: PushEmpty(bool, bool)
0x206: @ IsLoaded(Stack[-1])
0x207: Pop(0)
0x208: Stack[-3] = Stack[-1]
0x209: Return(); Pop(2)

0x20a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x20b: @@ GetPosition(Stack[-8])
0x20c: Pop(0)
0x20d: @@ GetEyesHeight(Stack[-9])
0x20e: Pop(0)
0x20f: Push(CvectorIndex(Stack[-8], 1))
0x210: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x211: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x212: @ GetPosition(Stack[-7])
0x213: Pop(0)
0x214: @ GetEyesHeight(Stack[-9])
0x215: Pop(0)
0x216: Push(CvectorIndex(Stack[-7], 1))
0x217: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x218: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x219: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x21a: Push(CvectorIndex(Stack[-6], 1))
0x21b: Stack[-1] = (int) 0
0x21c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x21d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x21e: Pop(1); Push(Sqrt(Stack[-1]))
0x21f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x220: Stack[-5] = -Stack[-6]; Pop(0);
0x221: Pop(0); Push(Stack[-6] * Stack[-19]);
0x222: PushEmpty(cvector, cvector)
0x223: Push(CVector(0.0, 1.0, 0.0))
0x224: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x225: Call2 0x290

0x226: Pop(1)
0x227: Push((int) 25)
0x228: Pop(2); Push(Stack[-2] * Stack[-1]);
0x229: Pop(2); Push(Stack[-2] + Stack[-1]);
0x22a: Push(CVector(0.0, 10.0, 0.0))
0x22b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x22c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x22d: @ IsOverrideActive(Stack[-2])
0x22e: Pop(0)
0x22f: Push(Stack[-2])
0x230: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x231: Stack[-21] = (bool) 0
0x232: Return(); Pop(18)

0x233: @ StopWorld()
0x234: Pop(0)
0x235: @ CameraTransit(Stack[-3], Stack[-5])
0x236: Pop(0)
0x237: Push(CvectorIndex(Stack[-4], 0))
0x238: Push(CvectorIndex(Stack[-5], 2))
0x239: @ Rotate(Stack[-2], Stack[-1])
0x23a: Pop(2)
0x23b: PushEmpty(bool)
0x23c: Call2 0x2bf

0x23d: Pop(0)
0x23e: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23f: GOTO 0x248

0x240: Push("head")
0x241: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x242: Pop(1)
0x243: Push(Stack[-1])
0x244: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x245: Push("head")
0x246: @ LookAsyncCamera(Stack[-1])
0x247: Pop(1)
0x248: @ CameraWaitForPlayFinish()
0x249: Pop(0)
0x24a: @ ResumeWorld()
0x24b: Pop(0)
0x24c: Stack[-21] = (bool) 1
0x24d: Return(); Pop(18)

0x24e: PushEmpty(bool, bool)
0x24f: @ CameraSwitchToNormal()
0x250: Pop(0)
0x251: PushEmpty(bool)
0x252: Call2 0x2bf

0x253: Pop(0)
0x254: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x255: GOTO 0x25e

0x256: Push("head")
0x257: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x258: Pop(1)
0x259: Push(Stack[-1])
0x25a: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25b: Push("head")
0x25c: @ UnlookAsync(Stack[-1])
0x25d: Pop(1)
0x25e: Return(); Pop(2)

0x25f: PushEmpty(bool, float, float, bool, float, float)
0x260: @ lshHasAnimation(Stack[-3], Stack[-7])
0x261: Pop(0)
0x262: Push(Stack[-3])
0x263: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x264: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x265: Pop(0)
0x266: Push((bool) 0)
0x267: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x268: Pop(1)
0x269: GOTO 0x26e

0x26a: Push("Can't find lsh animation : ")
0x26b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x26c: @ Trace(Stack[-1])
0x26d: Pop(1)
0x26e: Return(); Pop(6)

0x26f: PushEmpty(bool, float, float, bool, float, float)
0x270: @ lshHasAnimation(Stack[-3], Stack[-8])
0x271: Pop(0)
0x272: Push(Stack[-3])
0x273: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x274: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x275: Pop(0)
0x276: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x277: Pop(0)
0x278: GOTO 0x27d

0x279: Push("Can't find lsh animation : ")
0x27a: Pop(1); Push(Stack[-1] + Stack[-9]);
0x27b: @ Trace(Stack[-1])
0x27c: Pop(1)
0x27d: Return(); Pop(6)

0x27e: PushEmpty(float, cvector, float, cvector)
0x27f: @@ GetEyesHeight(Stack[-2])
0x280: Pop(0)
0x281: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x282: Push(CvectorIndex(Stack[-1], 1))
0x283: Stack[-1] = Stack[-3]
0x284: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x285: Push("head")
0x286: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x287: Pop(1)
0x288: Return(); Pop(4)

0x289: PushEmpty(bool)
0x28a: Call2 0x2bf

0x28b: Pop(0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28d: @ lshStopSpeech()
0x28e: Pop(0)
0x28f: Return(); Pop(0)

0x290: PushEmpty(float, float)
0x291: Pop(0); Push(Stack[-3] | Stack[-3]);
0x292: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x293: Push((float)0.0)
0x294: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x295: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x296: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x297: Return(); Pop(2)

0x298: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x299: Return(); Pop(2)

0x29a: PushEmpty(int, int)
0x29b: @ GetVariable(Stack[-3], Stack[-1])
0x29c: Pop(0)
0x29d: Stack[-4] = Stack[-1]
0x29e: Return(); Pop(2)

0x29f: PushEmpty(string, string)
0x2a0: Stack[-1] = "idle"
0x2a1: Push(Stack[-3])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a3: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2a4: Stack[-4] = Stack[-1]
0x2a5: Return(); Pop(2)

0x2a6: PushEmpty(int, bool, int, bool)
0x2a7: Stack[-2] = (int) 0
0x2a8: Push("all")
0x2a9: PushEmpty(string, int)
0x2aa: Stack[-1] = Stack[-5]
0x2ab: Call2 0x29f

0x2ac: Pop(1)
0x2ad: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2ae: Pop(2)
0x2af: Pop(0); Push((bool) Stack[-1] == 0)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: GOTO 0x2b5

0x2b2: Push((int) 1)
0x2b3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2b4: GOTO 0x2a8

0x2b5: Stack[-5] = Stack[-2]
0x2b6: Return(); Pop(4)

0x2b7: Stack[-1] = (int) 515556
0x2b8: Return(); Pop(0)

0x2b9: Stack[-1] = (int) 503341
0x2ba: Return(); Pop(0)

0x2bb: Stack[-1] = "ui/NPC_Citizen3.png"
0x2bc: Return(); Pop(0)

0x2bd: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x2be: Return(); Pop(0)

0x2bf: Stack[-1] = (bool) 0
0x2c0: Return(); Pop(0)

0x2c1: PushEmpty()
0x2c2: Push("ood6WastedMale1")
0x2c3: Push((int) 1)
0x2c4: @ SetVariable(Stack[-2], Stack[-1])
0x2c5: Pop(2)
0x2c6: Return(); Pop(0)

0x2c7: PushEmpty()
0x2c8: PushEmpty(int, string)
0x2c9: Stack[-1] = "ood6WastedMale1"
0x2ca: Call2 0x29a

0x2cb: Pop(1)
0x2cc: Push((int) 0)
0x2cd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2cf: Stack[-2] = (bool) 1
0x2d0: Return(); Pop(0)

0x2d1: Stack[-2] = (bool) 0
0x2d2: Return(); Pop(0)

0x2d3: PushEmpty(int, int)
0x2d4: Push("branch")
0x2d5: @ GetVariable(Stack[-1], Stack[-2])
0x2d6: Pop(1)
0x2d7: Push((int) 0)
0x2d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2da: Stack[-3] = (int) 1
0x2db: Return(); Pop(2)

0x2dc: GOTO 0x2e2

0x2dd: Push((int) 1)
0x2de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e0: Stack[-3] = (int) 2
0x2e1: Return(); Pop(2)

0x2e2: Stack[-3] = (int) 3
0x2e3: Return(); Pop(2)

