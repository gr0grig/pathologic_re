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
	Door 
	 not found
	locked
	SetProperty
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png
	ood12BirdmaskS1
	quest_d12_01
	init_sobor
	ood12BirdmaskS2
	ood12BirdmaskS3
	ood12BirdmaskS4
	sobor@door1
	branch
	add
	vol_
	size
	get
	game_final

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
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateIntVector (1 args)

RunOp = 0x2e6
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x104 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x2f2 Vars = (object)
		EVENT_7 Op = 0x32d Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x3b5

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x48b

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x489

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x48d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x48f

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x50e

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
0x41: Call2 0x3fa

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
0x4f: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x4b9

0x53: Pop(1)
0x54: Pop(1); Push((bool) Stack[-1] == 0)
0x55: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x56: PushEmpty(string)
0x57: Stack[-1] = "Neutral"
0x58: Call2 0xee

0x59: Pop(1)
0x5a: Push((int) 535461)
0x5b: @@ SetMessage(Stack[-1])
0x5c: Pop(1)
0x5d: @@ ClearReplies()
0x5e: Pop(0)
0x5f: PushEmpty(bool, object)
0x60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61: Call2 0x4d9

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x64: Push((int) 539970)
0x65: Push((int) 41937)
0x66: Push((int) 41936)
0x67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68: Pop(3)
0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call2 0x4e5

0x6c: Pop(1)
0x6d: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6e: Push((int) 539976)
0x6f: Push((int) 41943)
0x70: Push((int) 41942)
0x71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72: Pop(3)
0x73: Push((int) 535479)
0x74: Push((int) -1)
0x75: Push((int) 37161)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: GOTO 0xd0

0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x4c3

0x7c: Pop(1)
0x7d: Pop(1); Push((bool) Stack[-1] == 0)
0x7e: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x7f: PushEmpty(string)
0x80: Stack[-1] = "Neutral"
0x81: Call2 0xee

0x82: Pop(1)
0x83: Push((int) 535443)
0x84: @@ SetMessage(Stack[-1])
0x85: Pop(1)
0x86: @@ ClearReplies()
0x87: Pop(0)
0x88: PushEmpty(bool, object)
0x89: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a: Call2 0x4f1

0x8b: Pop(1)
0x8c: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8d: Push((int) 539954)
0x8e: Push((int) 41921)
0x8f: Push((int) 41920)
0x90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91: Pop(3)
0x92: Push((int) 535460)
0x93: Push((int) -1)
0x94: Push((int) 37142)
0x95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96: Pop(3)
0x97: GOTO 0xd0

0x98: PushEmpty(bool)
0x99: Stack[-1] = (bool) 0
0x9a: PushEmpty(bool, object)
0x9b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c: Call2 0x4b9

0x9d: Pop(1)
0x9e: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9f: PushEmpty(bool, object)
0xa0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1: Call2 0x4cd

0xa2: Pop(1)
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Stack[-1] = (bool) 1
0xa5: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xa6: PushEmpty(object, object)
0xa7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa9: Call2 0x493

0xaa: Pop(2)
0xab: PushEmpty(string)
0xac: Stack[-1] = "Neutral"
0xad: Call2 0xee

0xae: Pop(1)
0xaf: Push((int) 535485)
0xb0: @@ SetMessage(Stack[-1])
0xb1: Pop(1)
0xb2: @@ ClearReplies()
0xb3: Pop(0)
0xb4: Push((int) 539994)
0xb5: Push((int) 41963)
0xb6: Push((int) 41962)
0xb7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8: Pop(3)
0xb9: GOTO 0xd0

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral"
0xbc: Call2 0xee

0xbd: Pop(1)
0xbe: Push((int) 535487)
0xbf: @@ SetMessage(Stack[-1])
0xc0: Pop(1)
0xc1: @@ ClearReplies()
0xc2: Pop(0)
0xc3: Push((int) 535488)
0xc4: Push((int) -1)
0xc5: Push((int) 37170)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Push((int) 539997)
0xc9: Push((int) -1)
0xca: Push((int) 41965)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: GOTO 0xd0

0xce: Return(); Pop(0)

0xcf: GOTO 0x4e

0xd0: PushEmpty(bool)
0xd1: Call2 0x491

0xd2: Pop(0)
0xd3: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd4: @ lshWaitForAnimEnd()
0xd5: Pop(0)
0xd6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd7: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd8: GOTO 0xde

0xd9: PushEmpty(string)
0xda: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xdb: Call2 0x40c

0xdc: Pop(1)
0xdd: GOTO 0xd4

0xde: GOTO 0xed

0xdf: Push("all")
0xe0: Push("idle")
0xe1: @ PlayAnimation(Stack[-2], Stack[-1])
0xe2: Pop(2)
0xe3: @ WaitForAnimEnd()
0xe4: Pop(0)
0xe5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe6: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe7: GOTO 0xed

0xe8: Push("all")
0xe9: Push("idle")
0xea: @ PlayAnimation(Stack[-2], Stack[-1])
0xeb: Pop(2)
0xec: GOTO 0xe3

0xed: Return(); Pop(0)

0xee: PushEmpty()
0xef: PushEmpty(bool)
0xf0: Call2 0x491

0xf1: Pop(0)
0xf2: Pop(1); Push((bool) Stack[-1] == 0)
0xf3: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf4: Return(); Pop(0)

0xf5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf6: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf7: Return(); Pop(0)

0xf8: PushEmpty(string, bool)
0xf9: Stack[-2] = Stack[-3]
0xfa: Push("")
0xfb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfd: Stack[-1] = (bool) 0
0xfe: GOTO 0x100

0xff: Stack[-1] = (bool) 1
0x100: Call2 0x41c

0x101: Pop(2)
0x102: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x103: Return(); Pop(0)

0x104: PushEmpty()
0x105: Push((int) 1)
0x106: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x107: PushEmpty()
0x108: Call2 0x436

0x109: Pop(0)
0x10a: Push((int) 41936)
0x10b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call2 0x4a0

0x111: Pop(2)
0x112: Push((int) 41942)
0x113: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x115: PushEmpty(object, object)
0x116: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x117: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x118: Call2 0x4a6

0x119: Pop(2)
0x11a: Push((int) 41920)
0x11b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x11d: PushEmpty(object, object)
0x11e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x120: Call2 0x4ac

0x121: Pop(2)
0x122: Push((int) 37168)
0x123: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x125: PushEmpty(object, object)
0x126: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x127: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x128: Call2 0x4b2

0x129: Pop(2)
0x12a: PushEmpty(object, object)
0x12b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12d: Call2 0x499

0x12e: Pop(2)
0x12f: Push((int) 37143)
0x130: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x132: PushEmpty(bool, object)
0x133: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x134: Call2 0x4b9

0x135: Pop(1)
0x136: Pop(1); Push((bool) Stack[-1] == 0)
0x137: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Neutral"
0x13a: Call2 0xee

0x13b: Pop(1)
0x13c: Push((int) 535461)
0x13d: @@ SetMessage(Stack[-1])
0x13e: Pop(1)
0x13f: @@ ClearReplies()
0x140: Pop(0)
0x141: PushEmpty(bool, object)
0x142: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x143: Call2 0x4d9

0x144: Pop(1)
0x145: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x146: Push((int) 539970)
0x147: Push((int) 41937)
0x148: Push((int) 41936)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: PushEmpty(bool, object)
0x14c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14d: Call2 0x4e5

0x14e: Pop(1)
0x14f: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x150: Push((int) 539976)
0x151: Push((int) 41943)
0x152: Push((int) 41942)
0x153: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x154: Pop(3)
0x155: Push((int) 535479)
0x156: Push((int) -1)
0x157: Push((int) 37161)
0x158: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x159: Pop(3)
0x15a: Return(); Pop(0)

0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call2 0x4c3

0x15e: Pop(1)
0x15f: Pop(1); Push((bool) Stack[-1] == 0)
0x160: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x161: PushEmpty(string)
0x162: Stack[-1] = "Neutral"
0x163: Call2 0xee

0x164: Pop(1)
0x165: Push((int) 535443)
0x166: @@ SetMessage(Stack[-1])
0x167: Pop(1)
0x168: @@ ClearReplies()
0x169: Pop(0)
0x16a: PushEmpty(bool, object)
0x16b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16c: Call2 0x4f1

0x16d: Pop(1)
0x16e: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x16f: Push((int) 539954)
0x170: Push((int) 41921)
0x171: Push((int) 41920)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Push((int) 535460)
0x175: Push((int) -1)
0x176: Push((int) 37142)
0x177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x178: Pop(3)
0x179: Return(); Pop(0)

0x17a: PushEmpty(bool)
0x17b: Stack[-1] = (bool) 0
0x17c: PushEmpty(bool, object)
0x17d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17e: Call2 0x4b9

0x17f: Pop(1)
0x180: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x181: PushEmpty(bool, object)
0x182: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x183: Call2 0x4cd

0x184: Pop(1)
0x185: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x186: Stack[-1] = (bool) 1
0x187: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x188: PushEmpty(object, object)
0x189: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x18a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x18b: Call2 0x493

0x18c: Pop(2)
0x18d: PushEmpty(string)
0x18e: Stack[-1] = "Neutral"
0x18f: Call2 0xee

0x190: Pop(1)
0x191: Push((int) 535485)
0x192: @@ SetMessage(Stack[-1])
0x193: Pop(1)
0x194: @@ ClearReplies()
0x195: Pop(0)
0x196: Push((int) 539994)
0x197: Push((int) 41963)
0x198: Push((int) 41962)
0x199: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19a: Pop(3)
0x19b: Return(); Pop(0)

0x19c: PushEmpty(string)
0x19d: Stack[-1] = "Neutral"
0x19e: Call2 0xee

0x19f: Pop(1)
0x1a0: Push((int) 535487)
0x1a1: @@ SetMessage(Stack[-1])
0x1a2: Pop(1)
0x1a3: @@ ClearReplies()
0x1a4: Pop(0)
0x1a5: Push((int) 535488)
0x1a6: Push((int) -1)
0x1a7: Push((int) 37170)
0x1a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a9: Pop(3)
0x1aa: Push((int) 539997)
0x1ab: Push((int) -1)
0x1ac: Push((int) 41965)
0x1ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ae: Pop(3)
0x1af: Return(); Pop(0)

0x1b0: Push((int) 41963)
0x1b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1b3: PushEmpty(string)
0x1b4: Stack[-1] = "Neutral"
0x1b5: Call2 0xee

0x1b6: Pop(1)
0x1b7: Push((int) 539995)
0x1b8: @@ SetMessage(Stack[-1])
0x1b9: Pop(1)
0x1ba: @@ ClearReplies()
0x1bb: Pop(0)
0x1bc: Push((int) 535486)
0x1bd: Push((int) -1)
0x1be: Push((int) 37168)
0x1bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c0: Pop(3)
0x1c1: Return(); Pop(0)

0x1c2: Push((int) 41921)
0x1c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1c5: PushEmpty(string)
0x1c6: Stack[-1] = "Neutral"
0x1c7: Call2 0xee

0x1c8: Pop(1)
0x1c9: Push((int) 539955)
0x1ca: @@ SetMessage(Stack[-1])
0x1cb: Pop(1)
0x1cc: @@ ClearReplies()
0x1cd: Pop(0)
0x1ce: Push((int) 539987)
0x1cf: Push((int) 41954)
0x1d0: Push((int) 41953)
0x1d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d2: Pop(3)
0x1d3: Push((int) 539969)
0x1d4: Push((int) -1)
0x1d5: Push((int) 41935)
0x1d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d7: Pop(3)
0x1d8: Return(); Pop(0)

0x1d9: Push((int) 41954)
0x1da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1dc: PushEmpty(string)
0x1dd: Stack[-1] = "Neutral"
0x1de: Call2 0xee

0x1df: Pop(1)
0x1e0: Push((int) 539988)
0x1e1: @@ SetMessage(Stack[-1])
0x1e2: Pop(1)
0x1e3: @@ ClearReplies()
0x1e4: Pop(0)
0x1e5: Push((int) 539956)
0x1e6: Push((int) 41923)
0x1e7: Push((int) 41922)
0x1e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e9: Pop(3)
0x1ea: Return(); Pop(0)

0x1eb: Push((int) 41923)
0x1ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1ee: PushEmpty(string)
0x1ef: Stack[-1] = "Neutral"
0x1f0: Call2 0xee

0x1f1: Pop(1)
0x1f2: Push((int) 539957)
0x1f3: @@ SetMessage(Stack[-1])
0x1f4: Pop(1)
0x1f5: @@ ClearReplies()
0x1f6: Pop(0)
0x1f7: Push((int) 539958)
0x1f8: Push((int) 41925)
0x1f9: Push((int) 41924)
0x1fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fb: Pop(3)
0x1fc: Push((int) 539989)
0x1fd: Push((int) 41956)
0x1fe: Push((int) 41955)
0x1ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x200: Pop(3)
0x201: Return(); Pop(0)

0x202: Push((int) 41956)
0x203: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x205: PushEmpty(string)
0x206: Stack[-1] = "Neutral"
0x207: Call2 0xee

0x208: Pop(1)
0x209: Push((int) 539990)
0x20a: @@ SetMessage(Stack[-1])
0x20b: Pop(1)
0x20c: @@ ClearReplies()
0x20d: Pop(0)
0x20e: Push((int) 539991)
0x20f: Push((int) 41929)
0x210: Push((int) 41957)
0x211: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x212: Pop(3)
0x213: Push((int) 539992)
0x214: Push((int) 41927)
0x215: Push((int) 41958)
0x216: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x217: Pop(3)
0x218: Return(); Pop(0)

0x219: Push((int) 41925)
0x21a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x21c: PushEmpty(string)
0x21d: Stack[-1] = "Neutral"
0x21e: Call2 0xee

0x21f: Pop(1)
0x220: Push((int) 539959)
0x221: @@ SetMessage(Stack[-1])
0x222: Pop(1)
0x223: @@ ClearReplies()
0x224: Pop(0)
0x225: Push((int) 539960)
0x226: Push((int) 41927)
0x227: Push((int) 41926)
0x228: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x229: Pop(3)
0x22a: Return(); Pop(0)

0x22b: Push((int) 41927)
0x22c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x22e: PushEmpty(string)
0x22f: Stack[-1] = "Neutral"
0x230: Call2 0xee

0x231: Pop(1)
0x232: Push((int) 539961)
0x233: @@ SetMessage(Stack[-1])
0x234: Pop(1)
0x235: @@ ClearReplies()
0x236: Pop(0)
0x237: Push((int) 539962)
0x238: Push((int) 41929)
0x239: Push((int) 41928)
0x23a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23b: Pop(3)
0x23c: Push((int) 539966)
0x23d: Push((int) -1)
0x23e: Push((int) 41932)
0x23f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x240: Pop(3)
0x241: Return(); Pop(0)

0x242: Push((int) 41929)
0x243: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x244: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x245: PushEmpty(string)
0x246: Stack[-1] = "Neutral"
0x247: Call2 0xee

0x248: Pop(1)
0x249: Push((int) 539963)
0x24a: @@ SetMessage(Stack[-1])
0x24b: Pop(1)
0x24c: @@ ClearReplies()
0x24d: Pop(0)
0x24e: Push((int) 539965)
0x24f: Push((int) -1)
0x250: Push((int) 41931)
0x251: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x252: Pop(3)
0x253: Push((int) 539968)
0x254: Push((int) -1)
0x255: Push((int) 41934)
0x256: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x257: Pop(3)
0x258: Return(); Pop(0)

0x259: Push((int) 41943)
0x25a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25b: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x25c: PushEmpty(string)
0x25d: Stack[-1] = "Neutral"
0x25e: Call2 0xee

0x25f: Pop(1)
0x260: Push((int) 539977)
0x261: @@ SetMessage(Stack[-1])
0x262: Pop(1)
0x263: @@ ClearReplies()
0x264: Pop(0)
0x265: Push((int) 539978)
0x266: Push((int) 41945)
0x267: Push((int) 41944)
0x268: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x269: Pop(3)
0x26a: Push((int) 539984)
0x26b: Push((int) 41951)
0x26c: Push((int) 41950)
0x26d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26e: Pop(3)
0x26f: Return(); Pop(0)

0x270: Push((int) 41951)
0x271: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x272: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x273: PushEmpty(string)
0x274: Stack[-1] = "Neutral"
0x275: Call2 0xee

0x276: Pop(1)
0x277: Push((int) 539985)
0x278: @@ SetMessage(Stack[-1])
0x279: Pop(1)
0x27a: @@ ClearReplies()
0x27b: Pop(0)
0x27c: Push((int) 539986)
0x27d: Push((int) -1)
0x27e: Push((int) 41952)
0x27f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x280: Pop(3)
0x281: Return(); Pop(0)

0x282: Push((int) 41945)
0x283: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x285: PushEmpty(string)
0x286: Stack[-1] = "Neutral"
0x287: Call2 0xee

0x288: Pop(1)
0x289: Push((int) 539979)
0x28a: @@ SetMessage(Stack[-1])
0x28b: Pop(1)
0x28c: @@ ClearReplies()
0x28d: Pop(0)
0x28e: Push((int) 539980)
0x28f: Push((int) 41947)
0x290: Push((int) 41946)
0x291: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x292: Pop(3)
0x293: Push((int) 539993)
0x294: Push((int) -1)
0x295: Push((int) 41961)
0x296: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x297: Pop(3)
0x298: Return(); Pop(0)

0x299: Push((int) 41947)
0x29a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x29c: PushEmpty(string)
0x29d: Stack[-1] = "Neutral"
0x29e: Call2 0xee

0x29f: Pop(1)
0x2a0: Push((int) 539981)
0x2a1: @@ SetMessage(Stack[-1])
0x2a2: Pop(1)
0x2a3: @@ ClearReplies()
0x2a4: Pop(0)
0x2a5: Push((int) 539982)
0x2a6: Push((int) -1)
0x2a7: Push((int) 41948)
0x2a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a9: Pop(3)
0x2aa: Push((int) 539983)
0x2ab: Push((int) -1)
0x2ac: Push((int) 41949)
0x2ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ae: Pop(3)
0x2af: Return(); Pop(0)

0x2b0: Push((int) 41937)
0x2b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2b3: PushEmpty(string)
0x2b4: Stack[-1] = "Neutral"
0x2b5: Call2 0xee

0x2b6: Pop(1)
0x2b7: Push((int) 539971)
0x2b8: @@ SetMessage(Stack[-1])
0x2b9: Pop(1)
0x2ba: @@ ClearReplies()
0x2bb: Pop(0)
0x2bc: Push((int) 539972)
0x2bd: Push((int) 41939)
0x2be: Push((int) 41938)
0x2bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c0: Pop(3)
0x2c1: Push((int) 539975)
0x2c2: Push((int) -1)
0x2c3: Push((int) 41941)
0x2c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c5: Pop(3)
0x2c6: Return(); Pop(0)

0x2c7: Push((int) 41939)
0x2c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2ca: PushEmpty(string)
0x2cb: Stack[-1] = "Neutral"
0x2cc: Call2 0xee

0x2cd: Pop(1)
0x2ce: Push((int) 539973)
0x2cf: @@ SetMessage(Stack[-1])
0x2d0: Pop(1)
0x2d1: @@ ClearReplies()
0x2d2: Pop(0)
0x2d3: Push((int) 539974)
0x2d4: Push((int) -1)
0x2d5: Push((int) 41940)
0x2d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d7: Pop(3)
0x2d8: Return(); Pop(0)

0x2d9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2da: PushEmpty(bool)
0x2db: Call2 0x491

0x2dc: Pop(0)
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2de: @ lshStopAnimation()
0x2df: Pop(0)
0x2e0: GOTO 0x2e3

0x2e1: @ StopAnimation()
0x2e2: Pop(0)
0x2e3: Return(); Pop(0)

0x2e4: GOTO 0x105

0x2e5: Return(); Pop(0)

0x2e6: Push((bool) 1)
0x2e7: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2e8: PushEmpty(float, float)
0x2e9: Stack[-2] = (int) 300
0x2ea: Stack[-1] = (int) 100
0x2eb: Call2 0x303

0x2ec: Pop(2)
0x2ed: Push((int) 1)
0x2ee: @ Sleep(Stack[-1])
0x2ef: Pop(1)
0x2f0: GOTO 0x2e6

0x2f1: Return(); Pop(0)

0x2f2: PushEmpty()
0x2f3: PushEmpty(int)
0x2f4: Call2 0x57a

0x2f5: Pop(0)
0x2f6: Push((int) 0)
0x2f7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2f8: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x2f9: PushEmpty()
0x2fa: Call2 0x344

0x2fb: Pop(0)
0x2fc: PushEmpty(int, object)
0x2fd: Stack[-1] = Stack[-3]
0x2fe: Push(-2, 1); TaskCall(0)
0x2ff: Call2 0x0

0x300: Pop(-2, 1); TaskReturn
0x301: Pop(2)
0x302: Return(); Pop(0)

0x303: PushEmpty()
0x304: PushEmpty(bool)
0x305: Call2 0x3b0

0x306: Pop(0)
0x307: Pop(1); Push((bool) Stack[-1] == 0)
0x308: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x309: Return(); Pop(0)

0x30a: Push("player")
0x30b: @ FindActor(Stack[-4], Stack[-1])
0x30c: Pop(1)
0x30d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x30e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x30f: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x310: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x311: Push((int) 10)
0x312: Push((float)1.0)
0x313: @ SetTimer(Stack[-2], Stack[-1])
0x314: Pop(2)
0x315: PushEmpty()
0x316: Call2 0x352

0x317: Pop(0)
0x318: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x319: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31a: Push((int) 10)
0x31b: @ KillTimer(Stack[-1])
0x31c: Pop(1)
0x31d: Return(); Pop(0)

0x31e: PushEmpty(float, float)
0x31f: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x320: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x321: Stack[-3] = (bool) 0
0x322: Return(); Pop(2)

0x323: PushEmpty(float, object)
0x324: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x325: Call2 0x3a8

0x326: Pop(1)
0x327: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x328: Push( Stack[2 + Tasks[-1].StackPointer] )
0x329: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x32a: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x32b: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x32c: Return(); Pop(2)

0x32d: PushEmpty()
0x32e: Push((int) 10)
0x32f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x331: PushEmpty(bool)
0x332: Call2 0x31e

0x333: Pop(0)
0x334: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x335: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x336: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x337: PushEmpty(object)
0x338: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x339: Call2 0x42b

0x33a: Pop(1)
0x33b: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x33c: GOTO 0x343

0x33d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x33e: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x33f: Push("head")
0x340: @ UnlookAsync(Stack[-1])
0x341: Pop(1)
0x342: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x343: Return(); Pop(0)

0x344: PushEmpty()
0x345: Call2 0x3a3

0x346: Pop(0)
0x347: Push((int) 10)
0x348: @ KillTimer(Stack[-1])
0x349: Pop(1)
0x34a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x34b: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34c: Push("head")
0x34d: @ UnlookAsync(Stack[-1])
0x34e: Pop(1)
0x34f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x350: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x351: Return(); Pop(0)

0x352: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x353: @ WaitForAnimEnd()
0x354: Pop(0)
0x355: PushEmpty(bool)
0x356: Call2 0x3b0

0x357: Pop(0)
0x358: Pop(1); Push((bool) Stack[-1] == 0)
0x359: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x35a: Return(); Pop(14)

0x35b: PushEmpty(int)
0x35c: Call2 0x478

0x35d: Stack[-8] = Stack[-1]
0x35e: Pop(1)
0x35f: Stack[-6] = (int) 0
0x360: PushEmpty(bool)
0x361: Stack[-1] = (bool) 0
0x362: Push((int) 5)
0x363: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x365: PushEmpty(bool)
0x366: Call2 0x3b0

0x367: Pop(0)
0x368: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x369: Stack[-1] = (bool) 1
0x36a: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x36b: Push((int) 3)
0x36c: @ irand(Stack[-6], Stack[-1])
0x36d: Pop(1)
0x36e: Push((int) 0)
0x36f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x370: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x371: Push(Stack[-7])
0x372: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x373: @ irand(Stack[-4], Stack[-7])
0x374: Pop(0)
0x375: Push("all")
0x376: PushEmpty(string, int)
0x377: Stack[-1] = Stack[-7]
0x378: Call2 0x471

0x379: Pop(1)
0x37a: @ PlayAnimation(Stack[-2], Stack[-1])
0x37b: Pop(2)
0x37c: @ WaitForAnimEnd(Stack[-3])
0x37d: Pop(0)
0x37e: Pop(0); Push((bool) Stack[-3] == 0)
0x37f: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x380: GOTO 0x39e

0x381: GOTO 0x393

0x382: Push((int) 1)
0x383: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x385: Push((int) 4)
0x386: @ rand(Stack[-3], Stack[-1])
0x387: Pop(1)
0x388: Push((int) 1)
0x389: Pop(1); Push(Stack[-3] + Stack[-1]);
0x38a: @ Sleep(Stack[-1], Stack[-2])
0x38b: Pop(1)
0x38c: Pop(0); Push((bool) Stack[-1] == 0)
0x38d: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38e: GOTO 0x39e

0x38f: GOTO 0x393

0x390: Push(Stack[-6])
0x391: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x392: GOTO 0x39e

0x393: PushEmpty(bool)
0x394: Call2 0x3a1

0x395: Pop(0)
0x396: Pop(1); Push((bool) Stack[-1] == 0)
0x397: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x398: GOTO 0x39e

0x399: @ ResetAAS()
0x39a: Pop(0)
0x39b: Push((int) 1)
0x39c: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x39d: GOTO 0x360

0x39e: @ ResetAAS()
0x39f: Pop(0)
0x3a0: Return(); Pop(14)

0x3a1: Stack[-1] = (bool) 1
0x3a2: Return(); Pop(0)

0x3a3: @ StopAnimation()
0x3a4: Pop(0)
0x3a5: @ StopGroup0()
0x3a6: Pop(0)
0x3a7: Return(); Pop(0)

0x3a8: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3a9: @ GetPosition(Stack[-3])
0x3aa: Pop(0)
0x3ab: @@ GetPosition(Stack[-2])
0x3ac: Pop(0)
0x3ad: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3ae: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3af: Return(); Pop(6)

0x3b0: PushEmpty(bool, bool)
0x3b1: @ IsLoaded(Stack[-1])
0x3b2: Pop(0)
0x3b3: Stack[-3] = Stack[-1]
0x3b4: Return(); Pop(2)

0x3b5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3b6: @@ GetPosition(Stack[-8])
0x3b7: Pop(0)
0x3b8: @@ GetEyesHeight(Stack[-9])
0x3b9: Pop(0)
0x3ba: Push(CvectorIndex(Stack[-8], 1))
0x3bb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3bc: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3bd: @ GetPosition(Stack[-7])
0x3be: Pop(0)
0x3bf: @ GetEyesHeight(Stack[-9])
0x3c0: Pop(0)
0x3c1: Push(CvectorIndex(Stack[-7], 1))
0x3c2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3c3: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3c4: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3c5: Push(CvectorIndex(Stack[-6], 1))
0x3c6: Stack[-1] = (int) 0
0x3c7: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3c8: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3c9: Pop(1); Push(Sqrt(Stack[-1]))
0x3ca: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3cb: Stack[-5] = -Stack[-6]; Pop(0);
0x3cc: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3cd: PushEmpty(cvector, cvector)
0x3ce: Push(CVector(0.0, 1.0, 0.0))
0x3cf: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3d0: Call2 0x43d

0x3d1: Pop(1)
0x3d2: Push((int) 25)
0x3d3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3d4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3d5: Push(CVector(0.0, 10.0, 0.0))
0x3d6: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3d7: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3d8: @ IsOverrideActive(Stack[-2])
0x3d9: Pop(0)
0x3da: Push(Stack[-2])
0x3db: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3dc: Stack[-21] = (bool) 0
0x3dd: Return(); Pop(18)

0x3de: @ StopWorld()
0x3df: Pop(0)
0x3e0: Push((bool) 1)
0x3e1: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x3e2: Pop(1)
0x3e3: Push(CvectorIndex(Stack[-4], 0))
0x3e4: Push(CvectorIndex(Stack[-5], 2))
0x3e5: @ Rotate(Stack[-2], Stack[-1])
0x3e6: Pop(2)
0x3e7: PushEmpty(bool)
0x3e8: Call2 0x491

0x3e9: Pop(0)
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3eb: GOTO 0x3f4

0x3ec: Push("head")
0x3ed: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3ee: Pop(1)
0x3ef: Push(Stack[-1])
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3f1: Push("head")
0x3f2: @ LookAsyncCamera(Stack[-1])
0x3f3: Pop(1)
0x3f4: @ CameraWaitForPlayFinish()
0x3f5: Pop(0)
0x3f6: @ ResumeWorld()
0x3f7: Pop(0)
0x3f8: Stack[-21] = (bool) 1
0x3f9: Return(); Pop(18)

0x3fa: PushEmpty(bool, bool)
0x3fb: Push((bool) 1)
0x3fc: @ CameraSwitchToNormal(Stack[-1])
0x3fd: Pop(1)
0x3fe: PushEmpty(bool)
0x3ff: Call2 0x491

0x400: Pop(0)
0x401: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x402: GOTO 0x40b

0x403: Push("head")
0x404: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x405: Pop(1)
0x406: Push(Stack[-1])
0x407: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x408: Push("head")
0x409: @ UnlookAsync(Stack[-1])
0x40a: Pop(1)
0x40b: Return(); Pop(2)

0x40c: PushEmpty(bool, float, float, bool, float, float)
0x40d: @ lshHasAnimation(Stack[-3], Stack[-7])
0x40e: Pop(0)
0x40f: Push(Stack[-3])
0x410: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x411: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x412: Pop(0)
0x413: Push((bool) 0)
0x414: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x415: Pop(1)
0x416: GOTO 0x41b

0x417: Push("Can't find lsh animation : ")
0x418: Pop(1); Push(Stack[-1] + Stack[-8]);
0x419: @ Trace(Stack[-1])
0x41a: Pop(1)
0x41b: Return(); Pop(6)

0x41c: PushEmpty(bool, float, float, bool, float, float)
0x41d: @ lshHasAnimation(Stack[-3], Stack[-8])
0x41e: Pop(0)
0x41f: Push(Stack[-3])
0x420: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x421: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x422: Pop(0)
0x423: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x424: Pop(0)
0x425: GOTO 0x42a

0x426: Push("Can't find lsh animation : ")
0x427: Pop(1); Push(Stack[-1] + Stack[-9]);
0x428: @ Trace(Stack[-1])
0x429: Pop(1)
0x42a: Return(); Pop(6)

0x42b: PushEmpty(float, cvector, float, cvector)
0x42c: @@ GetEyesHeight(Stack[-2])
0x42d: Pop(0)
0x42e: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x42f: Push(CvectorIndex(Stack[-1], 1))
0x430: Stack[-1] = Stack[-3]
0x431: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x432: Push("head")
0x433: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x434: Pop(1)
0x435: Return(); Pop(4)

0x436: PushEmpty(bool)
0x437: Call2 0x491

0x438: Pop(0)
0x439: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x43a: @ lshStopSpeech()
0x43b: Pop(0)
0x43c: Return(); Pop(0)

0x43d: PushEmpty(float, float)
0x43e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x43f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x440: Push((float)0.0)
0x441: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x442: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x443: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x444: Return(); Pop(2)

0x445: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x446: Return(); Pop(2)

0x447: PushEmpty(int, int)
0x448: @ GetVariable(Stack[-3], Stack[-1])
0x449: Pop(0)
0x44a: Stack[-4] = Stack[-1]
0x44b: Return(); Pop(2)

0x44c: PushEmpty(object, object)
0x44d: @ FindActor(Stack[-1], Stack[-4])
0x44e: Pop(0)
0x44f: Pop(0); Push((bool) Stack[-1] == 0)
0x450: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x451: Push("Door ")
0x452: Pop(1); Push(Stack[-1] + Stack[-5]);
0x453: Push(" not found")
0x454: Pop(2); Push(Stack[-2] + Stack[-1]);
0x455: @ Trace(Stack[-1])
0x456: Pop(1)
0x457: GOTO 0x45b

0x458: Push("locked")
0x459: @@ SetProperty(Stack[-1], Stack[-4])
0x45a: Pop(1)
0x45b: Return(); Pop(2)

0x45c: Stack[-1] = 0
0x45d: PushEmpty(object, object)
0x45e: @ FindActor(Stack[-1], Stack[-4])
0x45f: Pop(0)
0x460: Pop(0); Push((bool) Stack[-1] == 0)
0x461: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x462: Stack[-5] = (bool) 0
0x463: Return(); Pop(2)

0x464: @ Trigger(Stack[-1], Stack[-3])
0x465: Pop(0)
0x466: Stack[-5] = (bool) 1
0x467: Return(); Pop(2)

0x468: Stack[-1] = 0
0x469: PushEmpty(float, float)
0x46a: @ GetGameTime(Stack[-1])
0x46b: Pop(0)
0x46c: PushEmpty(int)
0x46d: Stack[-1] = Stack[-2]
0x46e: Push((int) 24)
0x46f: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x470: Return(); Pop(2)

0x471: PushEmpty(string, string)
0x472: Stack[-1] = "idle"
0x473: Push(Stack[-3])
0x474: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x475: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x476: Stack[-4] = Stack[-1]
0x477: Return(); Pop(2)

0x478: PushEmpty(int, bool, int, bool)
0x479: Stack[-2] = (int) 0
0x47a: Push("all")
0x47b: PushEmpty(string, int)
0x47c: Stack[-1] = Stack[-5]
0x47d: Call2 0x471

0x47e: Pop(1)
0x47f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x480: Pop(2)
0x481: Pop(0); Push((bool) Stack[-1] == 0)
0x482: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x483: GOTO 0x487

0x484: Push((int) 1)
0x485: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x486: GOTO 0x47a

0x487: Stack[-5] = Stack[-2]
0x488: Return(); Pop(4)

0x489: Stack[-1] = (int) 515571
0x48a: Return(); Pop(0)

0x48b: Stack[-1] = (int) 504029
0x48c: Return(); Pop(0)

0x48d: Stack[-1] = "ui/NPC_bmask.png"
0x48e: Return(); Pop(0)

0x48f: Stack[-1] = "ui/NPC_bmask_b.png"
0x490: Return(); Pop(0)

0x491: Stack[-1] = (bool) 0
0x492: Return(); Pop(0)

0x493: PushEmpty()
0x494: Push("ood12BirdmaskS1")
0x495: Push((int) 1)
0x496: @ SetVariable(Stack[-2], Stack[-1])
0x497: Pop(2)
0x498: Return(); Pop(0)

0x499: PushEmpty()
0x49a: PushEmpty(bool, string, string)
0x49b: Stack[-2] = "quest_d12_01"
0x49c: Stack[-1] = "init_sobor"
0x49d: Call2 0x45d

0x49e: Pop(3)
0x49f: Return(); Pop(0)

0x4a0: PushEmpty()
0x4a1: Push("ood12BirdmaskS2")
0x4a2: Push((int) 1)
0x4a3: @ SetVariable(Stack[-2], Stack[-1])
0x4a4: Pop(2)
0x4a5: Return(); Pop(0)

0x4a6: PushEmpty()
0x4a7: Push("ood12BirdmaskS3")
0x4a8: Push((int) 1)
0x4a9: @ SetVariable(Stack[-2], Stack[-1])
0x4aa: Pop(2)
0x4ab: Return(); Pop(0)

0x4ac: PushEmpty()
0x4ad: Push("ood12BirdmaskS4")
0x4ae: Push((int) 1)
0x4af: @ SetVariable(Stack[-2], Stack[-1])
0x4b0: Pop(2)
0x4b1: Return(); Pop(0)

0x4b2: PushEmpty()
0x4b3: PushEmpty(string, bool)
0x4b4: Stack[-2] = "sobor@door1"
0x4b5: Stack[-1] = (bool) 0
0x4b6: Call2 0x44c

0x4b7: Pop(2)
0x4b8: Return(); Pop(0)

0x4b9: PushEmpty()
0x4ba: PushEmpty(bool, object)
0x4bb: Stack[-1] = Stack[-3]
0x4bc: Call2 0x4fd

0x4bd: Pop(1)
0x4be: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4bf: Stack[-2] = (bool) 1
0x4c0: Return(); Pop(0)

0x4c1: Stack[-2] = (bool) 0
0x4c2: Return(); Pop(0)

0x4c3: PushEmpty()
0x4c4: PushEmpty(bool, object)
0x4c5: Stack[-1] = Stack[-3]
0x4c6: Call2 0x503

0x4c7: Pop(1)
0x4c8: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c9: Stack[-2] = (bool) 1
0x4ca: Return(); Pop(0)

0x4cb: Stack[-2] = (bool) 0
0x4cc: Return(); Pop(0)

0x4cd: PushEmpty()
0x4ce: PushEmpty(int, string)
0x4cf: Stack[-1] = "ood12BirdmaskS1"
0x4d0: Call2 0x447

0x4d1: Pop(1)
0x4d2: Push((int) 0)
0x4d3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d5: Stack[-2] = (bool) 1
0x4d6: Return(); Pop(0)

0x4d7: Stack[-2] = (bool) 0
0x4d8: Return(); Pop(0)

0x4d9: PushEmpty()
0x4da: PushEmpty(int, string)
0x4db: Stack[-1] = "ood12BirdmaskS2"
0x4dc: Call2 0x447

0x4dd: Pop(1)
0x4de: Push((int) 0)
0x4df: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4e1: Stack[-2] = (bool) 1
0x4e2: Return(); Pop(0)

0x4e3: Stack[-2] = (bool) 0
0x4e4: Return(); Pop(0)

0x4e5: PushEmpty()
0x4e6: PushEmpty(int, string)
0x4e7: Stack[-1] = "ood12BirdmaskS3"
0x4e8: Call2 0x447

0x4e9: Pop(1)
0x4ea: Push((int) 0)
0x4eb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4ec: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ed: Stack[-2] = (bool) 1
0x4ee: Return(); Pop(0)

0x4ef: Stack[-2] = (bool) 0
0x4f0: Return(); Pop(0)

0x4f1: PushEmpty()
0x4f2: PushEmpty(int, string)
0x4f3: Stack[-1] = "ood12BirdmaskS4"
0x4f4: Call2 0x447

0x4f5: Pop(1)
0x4f6: Push((int) 0)
0x4f7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4f9: Stack[-2] = (bool) 1
0x4fa: Return(); Pop(0)

0x4fb: Stack[-2] = (bool) 0
0x4fc: Return(); Pop(0)

0x4fd: PushEmpty()
0x4fe: PushEmpty(bool)
0x4ff: Call2 0x554

0x500: Stack[-3] = Stack[-1]
0x501: Pop(1)
0x502: Return(); Pop(0)

0x503: PushEmpty()
0x504: PushEmpty(int)
0x505: Call2 0x469

0x506: Pop(0)
0x507: Push((int) 19)
0x508: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x509: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x50a: Stack[-2] = (bool) 1
0x50b: Return(); Pop(0)

0x50c: Stack[-2] = (bool) 0
0x50d: Return(); Pop(0)

0x50e: PushEmpty(int, int)
0x50f: Push("branch")
0x510: @ GetVariable(Stack[-1], Stack[-2])
0x511: Pop(1)
0x512: Push((int) 0)
0x513: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x514: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x515: Stack[-3] = (int) 1
0x516: Return(); Pop(2)

0x517: GOTO 0x51d

0x518: Push((int) 1)
0x519: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x51a: IF (Stack[-1] == 0) GOTO 0x51d; Pop(1)

0x51b: Stack[-3] = (int) 2
0x51c: Return(); Pop(2)

0x51d: Stack[-3] = (int) 3
0x51e: Return(); Pop(2)

0x51f: PushEmpty()
0x520: Push((int) 6)
0x521: @@ add(Stack[-1])
0x522: Pop(1)
0x523: Push((int) 26)
0x524: @@ add(Stack[-1])
0x525: Pop(1)
0x526: Push((int) 2)
0x527: @@ add(Stack[-1])
0x528: Pop(1)
0x529: Push((int) 22)
0x52a: @@ add(Stack[-1])
0x52b: Pop(1)
0x52c: Push((bool) 0)
0x52d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52e: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x52f: Push((int) 15)
0x530: @@ add(Stack[-1])
0x531: Pop(1)
0x532: Push((int) 5)
0x533: @@ add(Stack[-1])
0x534: Pop(1)
0x535: Push((int) 16)
0x536: @@ add(Stack[-1])
0x537: Pop(1)
0x538: GOTO 0x53f

0x539: Push((int) 0)
0x53a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x53b: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53c: Push((int) 15)
0x53d: @@ add(Stack[-1])
0x53e: Pop(1)
0x53f: Return(); Pop(0)

0x540: PushEmpty(int, int)
0x541: Push("vol_")
0x542: Pop(1); Push(Stack[-1] + Stack[-4]);
0x543: @ GetVariable(Stack[-1], Stack[-2])
0x544: Pop(1)
0x545: Push((int) 4)
0x546: Pop(1); Push(Stack[-2] & Stack[-1]);
0x547: Push((int) 0)
0x548: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x549: Return(); Pop(2)

0x54a: PushEmpty(int, int)
0x54b: Push("vol_")
0x54c: Pop(1); Push(Stack[-1] + Stack[-4]);
0x54d: @ GetVariable(Stack[-1], Stack[-2])
0x54e: Pop(1)
0x54f: Push((int) 16)
0x550: Pop(1); Push(Stack[-2] & Stack[-1]);
0x551: Push((int) 0)
0x552: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x553: Return(); Pop(2)

0x554: PushEmpty(object, int, int, int, object, int, int, int)
0x555: @ CreateIntVector(Stack[-4])
0x556: Pop(0)
0x557: PushEmpty(object, bool, int)
0x558: Stack[-3] = Stack[-7]
0x559: Stack[-2] = (bool) 0
0x55a: Stack[-1] = (int) -1
0x55b: Call2 0x51f

0x55c: Pop(3)
0x55d: @@ size(Stack[-3])
0x55e: Pop(0)
0x55f: Stack[-2] = (int) 0
0x560: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x561: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x562: @@ get(Stack[-1], Stack[-2])
0x563: Pop(0)
0x564: PushEmpty(bool)
0x565: Stack[-1] = (bool) 1
0x566: PushEmpty(bool, int)
0x567: Stack[-1] = Stack[-4]
0x568: Call2 0x54a

0x569: Pop(1)
0x56a: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56b: PushEmpty(bool, int)
0x56c: Stack[-1] = Stack[-4]
0x56d: Call2 0x540

0x56e: Pop(1)
0x56f: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x570: Stack[-1] = (bool) 0
0x571: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x572: Stack[-9] = (bool) 0
0x573: Return(); Pop(8)

0x574: Push((int) 1)
0x575: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x576: GOTO 0x560

0x577: Stack[-9] = (bool) 1
0x578: Return(); Pop(8)

0x579: Stack[-4] = 0
0x57a: PushEmpty(int, int)
0x57b: Push("game_final")
0x57c: @ GetVariable(Stack[-1], Stack[-2])
0x57d: Pop(1)
0x57e: Stack[-3] = Stack[-1]
0x57f: Return(); Pop(2)

