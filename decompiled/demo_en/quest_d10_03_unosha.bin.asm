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
	cleanup
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	ood10Crowd1
	branch
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png

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
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
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
	self (1 args)
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x117
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb8 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x11d Vars = (object)
		EVENT_26 Op = 0x14e Vars = (string)
		EVENT_6 Op = 0x156 Vars = ()
		EVENT_7 Op = 0x197 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x21f

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2f7

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2f5

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2f9

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2fb

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2e4

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
0x41: Call2 0x263

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
0x4f: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x2d8

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x2d2

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0xa2

0x5d: Pop(1)
0x5e: Push((int) 534137)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 534138)
0x64: Push((int) 36063)
0x65: Push((int) 35725)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 536530)
0x69: Push((int) -1)
0x6a: Push((int) 38337)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x84

0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral"
0x70: Call2 0xa2

0x71: Pop(1)
0x72: Push((int) 534139)
0x73: @@ SetMessage(Stack[-1])
0x74: Pop(1)
0x75: @@ ClearReplies()
0x76: Pop(0)
0x77: Push((int) 534140)
0x78: Push((int) -1)
0x79: Push((int) 35727)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: Push((int) 534434)
0x7d: Push((int) -1)
0x7e: Push((int) 36065)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: GOTO 0x84

0x82: Return(); Pop(0)

0x83: GOTO 0x4e

0x84: PushEmpty(bool)
0x85: Call2 0x2fd

0x86: Pop(0)
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: @ lshWaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f: Call2 0x274

0x90: Pop(1)
0x91: GOTO 0x88

0x92: GOTO 0xa1

0x93: Push("all")
0x94: Push("idle")
0x95: @ PlayAnimation(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: @ WaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: Push("all")
0x9d: Push("idle")
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: GOTO 0x97

0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Call2 0x2fd

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Return(); Pop(0)

0xa9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: PushEmpty(string, bool)
0xad: Stack[-2] = Stack[-3]
0xae: Push("")
0xaf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb1: Stack[-1] = (bool) 0
0xb2: GOTO 0xb4

0xb3: Stack[-1] = (bool) 1
0xb4: Call2 0x284

0xb5: Pop(2)
0xb6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Push((int) 1)
0xba: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0x29e

0xbd: Pop(0)
0xbe: Push((int) 35724)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xc1: PushEmpty(bool, object)
0xc2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Call2 0x2d8

0xc4: Pop(1)
0xc5: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call2 0x2d2

0xca: Pop(2)
0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0xa2

0xce: Pop(1)
0xcf: Push((int) 534137)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 534138)
0xd5: Push((int) 36063)
0xd6: Push((int) 35725)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 536530)
0xda: Push((int) -1)
0xdb: Push((int) 38337)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: PushEmpty(string)
0xe0: Stack[-1] = "Neutral"
0xe1: Call2 0xa2

0xe2: Pop(1)
0xe3: Push((int) 534139)
0xe4: @@ SetMessage(Stack[-1])
0xe5: Pop(1)
0xe6: @@ ClearReplies()
0xe7: Pop(0)
0xe8: Push((int) 534140)
0xe9: Push((int) -1)
0xea: Push((int) 35727)
0xeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec: Pop(3)
0xed: Push((int) 534434)
0xee: Push((int) -1)
0xef: Push((int) 36065)
0xf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: Return(); Pop(0)

0xf3: Push((int) 36063)
0xf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Neutral"
0xf8: Call2 0xa2

0xf9: Pop(1)
0xfa: Push((int) 534432)
0xfb: @@ SetMessage(Stack[-1])
0xfc: Pop(1)
0xfd: @@ ClearReplies()
0xfe: Pop(0)
0xff: Push((int) 534433)
0x100: Push((int) -1)
0x101: Push((int) 36064)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Push((int) 536531)
0x105: Push((int) -1)
0x106: Push((int) 38338)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x10b: PushEmpty(bool)
0x10c: Call2 0x2fd

0x10d: Pop(0)
0x10e: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10f: @ lshStopAnimation()
0x110: Pop(0)
0x111: GOTO 0x114

0x112: @ StopAnimation()
0x113: Pop(0)
0x114: Return(); Pop(0)

0x115: GOTO 0xb9

0x116: Return(); Pop(0)

0x117: PushEmpty(float, float)
0x118: Stack[-2] = (int) 300
0x119: Stack[-1] = (int) 100
0x11a: Call2 0x128

0x11b: Pop(2)
0x11c: Return(); Pop(0)

0x11d: PushEmpty()
0x11e: PushEmpty()
0x11f: Call2 0x1ae

0x120: Pop(0)
0x121: PushEmpty(int, object)
0x122: Stack[-1] = Stack[-3]
0x123: Push(-2, 1); TaskCall(0)
0x124: Call2 0x0

0x125: Pop(-2, 1); TaskReturn
0x126: Pop(2)
0x127: Return(); Pop(0)

0x128: PushEmpty(float, bool, float, bool)
0x129: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x12a: Push((int) 3)
0x12b: @ rand(Stack[-3], Stack[-1])
0x12c: Pop(1)
0x12d: Push((int) 3)
0x12e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x12f: @ Sleep(Stack[-1], Stack[-2])
0x130: Pop(1)
0x131: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x132: PushEmpty(float, float)
0x133: Stack[-2] = Stack[-8]
0x134: Stack[-1] = Stack[-7]
0x135: Call2 0x16d

0x136: Pop(2)
0x137: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x138: GOTO 0x12a

0x139: Return(); Pop(4)

0x13a: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x13b: PushEmpty(bool)
0x13c: Stack[-1] = (bool) 0
0x13d: PushEmpty(bool)
0x13e: Call2 0x21a

0x13f: Pop(0)
0x140: Pop(1); Push((bool) Stack[-1] == 0)
0x141: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x142: PushEmpty(bool)
0x143: Call2 0x16b

0x144: Pop(0)
0x145: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x146: Stack[-1] = (bool) 1
0x147: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x148: PushEmpty(object)
0x149: Call2 0x2a5

0x14a: Pop(0)
0x14b: @ RemoveActor(Stack[-1])
0x14c: Pop(1)
0x14d: Return(); Pop(0)

0x14e: PushEmpty()
0x14f: Push("cleanup")
0x150: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x152: PushEmpty()
0x153: Call2 0x13a

0x154: Pop(0)
0x155: Return(); Pop(0)

0x156: Push( Stack[6 + Tasks[-1].StackPointer] )
0x157: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x158: PushEmpty()
0x159: Call2 0x1ae

0x15a: Pop(0)
0x15b: PushEmpty(bool)
0x15c: Stack[-1] = (bool) 0
0x15d: Push( Stack[5 + Tasks[-1].StackPointer] )
0x15e: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x15f: PushEmpty(bool)
0x160: Call2 0x16b

0x161: Pop(0)
0x162: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x163: Stack[-1] = (bool) 1
0x164: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x165: PushEmpty(object)
0x166: Call2 0x2a5

0x167: Pop(0)
0x168: @ RemoveActor(Stack[-1])
0x169: Pop(1)
0x16a: Return(); Pop(0)

0x16b: Stack[-1] = (bool) 1
0x16c: Return(); Pop(0)

0x16d: PushEmpty()
0x16e: PushEmpty(bool)
0x16f: Call2 0x21a

0x170: Pop(0)
0x171: Pop(1); Push((bool) Stack[-1] == 0)
0x172: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x173: Return(); Pop(0)

0x174: Push("player")
0x175: @ FindActor(Stack[-4], Stack[-1])
0x176: Pop(1)
0x177: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x178: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x179: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x17a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x17b: Push((int) 10)
0x17c: Push((float)1.0)
0x17d: @ SetTimer(Stack[-2], Stack[-1])
0x17e: Pop(2)
0x17f: PushEmpty()
0x180: Call2 0x1bc

0x181: Pop(0)
0x182: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x183: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x184: Push((int) 10)
0x185: @ KillTimer(Stack[-1])
0x186: Pop(1)
0x187: Return(); Pop(0)

0x188: PushEmpty(float, float)
0x189: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x18a: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18b: Stack[-3] = (bool) 0
0x18c: Return(); Pop(2)

0x18d: PushEmpty(float, object)
0x18e: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x18f: Call2 0x212

0x190: Pop(1)
0x191: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x192: Push( Stack[2 + Tasks[-1].StackPointer] )
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x195: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x196: Return(); Pop(2)

0x197: PushEmpty()
0x198: Push((int) 10)
0x199: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x19b: PushEmpty(bool)
0x19c: Call2 0x188

0x19d: Pop(0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x19f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a1: PushEmpty(object)
0x1a2: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1a3: Call2 0x293

0x1a4: Pop(1)
0x1a5: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1a6: GOTO 0x1ad

0x1a7: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1a8: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1a9: Push("head")
0x1aa: @ UnlookAsync(Stack[-1])
0x1ab: Pop(1)
0x1ac: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1ad: Return(); Pop(0)

0x1ae: PushEmpty()
0x1af: Call2 0x20d

0x1b0: Pop(0)
0x1b1: Push((int) 10)
0x1b2: @ KillTimer(Stack[-1])
0x1b3: Pop(1)
0x1b4: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1b5: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b6: Push("head")
0x1b7: @ UnlookAsync(Stack[-1])
0x1b8: Pop(1)
0x1b9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1ba: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1bb: Return(); Pop(0)

0x1bc: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1bd: @ WaitForAnimEnd()
0x1be: Pop(0)
0x1bf: PushEmpty(bool)
0x1c0: Call2 0x21a

0x1c1: Pop(0)
0x1c2: Pop(1); Push((bool) Stack[-1] == 0)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: Return(); Pop(14)

0x1c5: PushEmpty(int)
0x1c6: Call2 0x2c1

0x1c7: Stack[-8] = Stack[-1]
0x1c8: Pop(1)
0x1c9: Stack[-6] = (int) 0
0x1ca: PushEmpty(bool)
0x1cb: Stack[-1] = (bool) 0
0x1cc: Push((int) 5)
0x1cd: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1cf: PushEmpty(bool)
0x1d0: Call2 0x21a

0x1d1: Pop(0)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d3: Stack[-1] = (bool) 1
0x1d4: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1d5: Push((int) 3)
0x1d6: @ irand(Stack[-6], Stack[-1])
0x1d7: Pop(1)
0x1d8: Push((int) 0)
0x1d9: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1db: Push(Stack[-7])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1dd: @ irand(Stack[-4], Stack[-7])
0x1de: Pop(0)
0x1df: Push("all")
0x1e0: PushEmpty(string, int)
0x1e1: Stack[-1] = Stack[-7]
0x1e2: Call2 0x2ba

0x1e3: Pop(1)
0x1e4: @ PlayAnimation(Stack[-2], Stack[-1])
0x1e5: Pop(2)
0x1e6: @ WaitForAnimEnd(Stack[-3])
0x1e7: Pop(0)
0x1e8: Pop(0); Push((bool) Stack[-3] == 0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1ea: GOTO 0x208

0x1eb: GOTO 0x1fd

0x1ec: Push((int) 1)
0x1ed: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1ef: Push((int) 4)
0x1f0: @ rand(Stack[-3], Stack[-1])
0x1f1: Pop(1)
0x1f2: Push((int) 1)
0x1f3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1f4: @ Sleep(Stack[-1], Stack[-2])
0x1f5: Pop(1)
0x1f6: Pop(0); Push((bool) Stack[-1] == 0)
0x1f7: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f8: GOTO 0x208

0x1f9: GOTO 0x1fd

0x1fa: Push(Stack[-6])
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fc: GOTO 0x208

0x1fd: PushEmpty(bool)
0x1fe: Call2 0x20b

0x1ff: Pop(0)
0x200: Pop(1); Push((bool) Stack[-1] == 0)
0x201: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x202: GOTO 0x208

0x203: @ ResetAAS()
0x204: Pop(0)
0x205: Push((int) 1)
0x206: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x207: GOTO 0x1ca

0x208: @ ResetAAS()
0x209: Pop(0)
0x20a: Return(); Pop(14)

0x20b: Stack[-1] = (bool) 1
0x20c: Return(); Pop(0)

0x20d: @ StopAnimation()
0x20e: Pop(0)
0x20f: @ StopGroup0()
0x210: Pop(0)
0x211: Return(); Pop(0)

0x212: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x213: @ GetPosition(Stack[-3])
0x214: Pop(0)
0x215: @@ GetPosition(Stack[-2])
0x216: Pop(0)
0x217: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x218: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x219: Return(); Pop(6)

0x21a: PushEmpty(bool, bool)
0x21b: @ IsLoaded(Stack[-1])
0x21c: Pop(0)
0x21d: Stack[-3] = Stack[-1]
0x21e: Return(); Pop(2)

0x21f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x220: @@ GetPosition(Stack[-8])
0x221: Pop(0)
0x222: @@ GetEyesHeight(Stack[-9])
0x223: Pop(0)
0x224: Push(CvectorIndex(Stack[-8], 1))
0x225: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x226: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x227: @ GetPosition(Stack[-7])
0x228: Pop(0)
0x229: @ GetEyesHeight(Stack[-9])
0x22a: Pop(0)
0x22b: Push(CvectorIndex(Stack[-7], 1))
0x22c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x22d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x22e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x22f: Push(CvectorIndex(Stack[-6], 1))
0x230: Stack[-1] = (int) 0
0x231: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x232: Pop(0); Push(Stack[-6] | Stack[-6]);
0x233: Pop(1); Push(Sqrt(Stack[-1]))
0x234: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x235: Stack[-5] = -Stack[-6]; Pop(0);
0x236: Pop(0); Push(Stack[-6] * Stack[-19]);
0x237: PushEmpty(cvector, cvector)
0x238: Push(CVector(0.0, 1.0, 0.0))
0x239: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x23a: Call2 0x2ab

0x23b: Pop(1)
0x23c: Push((int) 25)
0x23d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x23e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x23f: Push(CVector(0.0, 10.0, 0.0))
0x240: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x241: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x242: @ IsOverrideActive(Stack[-2])
0x243: Pop(0)
0x244: Push(Stack[-2])
0x245: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x246: Stack[-21] = (bool) 0
0x247: Return(); Pop(18)

0x248: @ StopWorld()
0x249: Pop(0)
0x24a: @ CameraTransit(Stack[-3], Stack[-5])
0x24b: Pop(0)
0x24c: Push(CvectorIndex(Stack[-4], 0))
0x24d: Push(CvectorIndex(Stack[-5], 2))
0x24e: @ Rotate(Stack[-2], Stack[-1])
0x24f: Pop(2)
0x250: PushEmpty(bool)
0x251: Call2 0x2fd

0x252: Pop(0)
0x253: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x254: GOTO 0x25d

0x255: Push("head")
0x256: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x257: Pop(1)
0x258: Push(Stack[-1])
0x259: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25a: Push("head")
0x25b: @ LookAsyncCamera(Stack[-1])
0x25c: Pop(1)
0x25d: @ CameraWaitForPlayFinish()
0x25e: Pop(0)
0x25f: @ ResumeWorld()
0x260: Pop(0)
0x261: Stack[-21] = (bool) 1
0x262: Return(); Pop(18)

0x263: PushEmpty(bool, bool)
0x264: @ CameraSwitchToNormal()
0x265: Pop(0)
0x266: PushEmpty(bool)
0x267: Call2 0x2fd

0x268: Pop(0)
0x269: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x26a: GOTO 0x273

0x26b: Push("head")
0x26c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x26d: Pop(1)
0x26e: Push(Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x270: Push("head")
0x271: @ UnlookAsync(Stack[-1])
0x272: Pop(1)
0x273: Return(); Pop(2)

0x274: PushEmpty(bool, float, float, bool, float, float)
0x275: @ lshHasAnimation(Stack[-3], Stack[-7])
0x276: Pop(0)
0x277: Push(Stack[-3])
0x278: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x279: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x27a: Pop(0)
0x27b: Push((bool) 0)
0x27c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x27d: Pop(1)
0x27e: GOTO 0x283

0x27f: Push("Can't find lsh animation : ")
0x280: Pop(1); Push(Stack[-1] + Stack[-8]);
0x281: @ Trace(Stack[-1])
0x282: Pop(1)
0x283: Return(); Pop(6)

0x284: PushEmpty(bool, float, float, bool, float, float)
0x285: @ lshHasAnimation(Stack[-3], Stack[-8])
0x286: Pop(0)
0x287: Push(Stack[-3])
0x288: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x289: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x28a: Pop(0)
0x28b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x28c: Pop(0)
0x28d: GOTO 0x292

0x28e: Push("Can't find lsh animation : ")
0x28f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x290: @ Trace(Stack[-1])
0x291: Pop(1)
0x292: Return(); Pop(6)

0x293: PushEmpty(float, cvector, float, cvector)
0x294: @@ GetEyesHeight(Stack[-2])
0x295: Pop(0)
0x296: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x297: Push(CvectorIndex(Stack[-1], 1))
0x298: Stack[-1] = Stack[-3]
0x299: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x29a: Push("head")
0x29b: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x29c: Pop(1)
0x29d: Return(); Pop(4)

0x29e: PushEmpty(bool)
0x29f: Call2 0x2fd

0x2a0: Pop(0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a2: @ lshStopSpeech()
0x2a3: Pop(0)
0x2a4: Return(); Pop(0)

0x2a5: PushEmpty(object, object)
0x2a6: @ self(Stack[-1])
0x2a7: Pop(0)
0x2a8: Stack[-3] = Stack[-1]
0x2a9: Return(); Pop(2)

0x2aa: Stack[-1] = 0
0x2ab: PushEmpty(float, float)
0x2ac: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2ad: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2ae: Push((float)0.0)
0x2af: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b1: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2b2: Return(); Pop(2)

0x2b3: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2b4: Return(); Pop(2)

0x2b5: PushEmpty(int, int)
0x2b6: @ GetVariable(Stack[-3], Stack[-1])
0x2b7: Pop(0)
0x2b8: Stack[-4] = Stack[-1]
0x2b9: Return(); Pop(2)

0x2ba: PushEmpty(string, string)
0x2bb: Stack[-1] = "idle"
0x2bc: Push(Stack[-3])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2bf: Stack[-4] = Stack[-1]
0x2c0: Return(); Pop(2)

0x2c1: PushEmpty(int, bool, int, bool)
0x2c2: Stack[-2] = (int) 0
0x2c3: Push("all")
0x2c4: PushEmpty(string, int)
0x2c5: Stack[-1] = Stack[-5]
0x2c6: Call2 0x2ba

0x2c7: Pop(1)
0x2c8: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2c9: Pop(2)
0x2ca: Pop(0); Push((bool) Stack[-1] == 0)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cc: GOTO 0x2d0

0x2cd: Push((int) 1)
0x2ce: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2cf: GOTO 0x2c3

0x2d0: Stack[-5] = Stack[-2]
0x2d1: Return(); Pop(4)

0x2d2: PushEmpty()
0x2d3: Push("ood10Crowd1")
0x2d4: Push((int) 1)
0x2d5: @ SetVariable(Stack[-2], Stack[-1])
0x2d6: Pop(2)
0x2d7: Return(); Pop(0)

0x2d8: PushEmpty()
0x2d9: PushEmpty(int, string)
0x2da: Stack[-1] = "ood10Crowd1"
0x2db: Call2 0x2b5

0x2dc: Pop(1)
0x2dd: Push((int) 0)
0x2de: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e0: Stack[-2] = (bool) 1
0x2e1: Return(); Pop(0)

0x2e2: Stack[-2] = (bool) 0
0x2e3: Return(); Pop(0)

0x2e4: PushEmpty(int, int)
0x2e5: Push("branch")
0x2e6: @ GetVariable(Stack[-1], Stack[-2])
0x2e7: Pop(1)
0x2e8: Push((int) 0)
0x2e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2eb: Stack[-3] = (int) 1
0x2ec: Return(); Pop(2)

0x2ed: GOTO 0x2f3

0x2ee: Push((int) 1)
0x2ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f1: Stack[-3] = (int) 2
0x2f2: Return(); Pop(2)

0x2f3: Stack[-3] = (int) 3
0x2f4: Return(); Pop(2)

0x2f5: Stack[-1] = (int) 515564
0x2f6: Return(); Pop(0)

0x2f7: Stack[-1] = (int) 503349
0x2f8: Return(); Pop(0)

0x2f9: Stack[-1] = "ui/NPC_Citizen2.png"
0x2fa: Return(); Pop(0)

0x2fb: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x2fc: Return(); Pop(0)

0x2fd: Stack[-1] = (bool) 0
0x2fe: Return(); Pop(0)

