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
	Door 
	 not found
	locked
	SetProperty
	oob12TWhitemask1
	itheater@door1
	b12q01TheaterIsVisited
	branch
	ui/NPC_wmask.png
	ui/NPC_wmask_b.png

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

RunOp = 0x170
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc2 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x176 Vars = (object)
		EVENT_26 Op = 0x1a7 Vars = (string)
		EVENT_6 Op = 0x1af Vars = ()
		EVENT_7 Op = 0x1f0 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x278

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x36e

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x36c

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x370

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x372

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x35b

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
0x41: Call2 0x2bc

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
0x4f: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x34f

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x33c

0x59: Pop(2)
0x5a: PushEmpty(object, object)
0x5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d: Call2 0x342

0x5e: Pop(2)
0x5f: PushEmpty(object, object)
0x60: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x61: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x62: Call2 0x349

0x63: Pop(2)
0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral"
0x66: Call2 0xac

0x67: Pop(1)
0x68: Push((int) 522959)
0x69: @@ SetMessage(Stack[-1])
0x6a: Pop(1)
0x6b: @@ ClearReplies()
0x6c: Pop(0)
0x6d: Push((int) 522960)
0x6e: Push((int) 24152)
0x6f: Push((int) 24151)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: Push((int) 522973)
0x73: Push((int) -1)
0x74: Push((int) 24164)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: GOTO 0x8e

0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral"
0x7a: Call2 0xac

0x7b: Pop(1)
0x7c: Push((int) 523196)
0x7d: @@ SetMessage(Stack[-1])
0x7e: Pop(1)
0x7f: @@ ClearReplies()
0x80: Pop(0)
0x81: Push((int) 523197)
0x82: Push((int) -1)
0x83: Push((int) 24400)
0x84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85: Pop(3)
0x86: Push((int) 523198)
0x87: Push((int) -1)
0x88: Push((int) 24401)
0x89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a: Pop(3)
0x8b: GOTO 0x8e

0x8c: Return(); Pop(0)

0x8d: GOTO 0x4e

0x8e: PushEmpty(bool)
0x8f: Call2 0x374

0x90: Pop(0)
0x91: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x92: @ lshWaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: PushEmpty(string)
0x98: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x99: Call2 0x2cd

0x9a: Pop(1)
0x9b: GOTO 0x92

0x9c: GOTO 0xab

0x9d: Push("all")
0x9e: Push("idle")
0x9f: @ PlayAnimation(Stack[-2], Stack[-1])
0xa0: Pop(2)
0xa1: @ WaitForAnimEnd()
0xa2: Pop(0)
0xa3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa4: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa5: GOTO 0xab

0xa6: Push("all")
0xa7: Push("idle")
0xa8: @ PlayAnimation(Stack[-2], Stack[-1])
0xa9: Pop(2)
0xaa: GOTO 0xa1

0xab: Return(); Pop(0)

0xac: PushEmpty()
0xad: PushEmpty(bool)
0xae: Call2 0x374

0xaf: Pop(0)
0xb0: Pop(1); Push((bool) Stack[-1] == 0)
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: Return(); Pop(0)

0xb3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Return(); Pop(0)

0xb6: PushEmpty(string, bool)
0xb7: Stack[-2] = Stack[-3]
0xb8: Push("")
0xb9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbb: Stack[-1] = (bool) 0
0xbc: GOTO 0xbe

0xbd: Stack[-1] = (bool) 1
0xbe: Call2 0x2dd

0xbf: Pop(2)
0xc0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc1: Return(); Pop(0)

0xc2: PushEmpty()
0xc3: Push((int) 1)
0xc4: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0xc5: PushEmpty()
0xc6: Call2 0x2f7

0xc7: Pop(0)
0xc8: Push((int) 24150)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xcb: PushEmpty(bool, object)
0xcc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Call2 0x34f

0xce: Pop(1)
0xcf: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x33c

0xd4: Pop(2)
0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x342

0xd9: Pop(2)
0xda: PushEmpty(object, object)
0xdb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdd: Call2 0x349

0xde: Pop(2)
0xdf: PushEmpty(string)
0xe0: Stack[-1] = "Neutral"
0xe1: Call2 0xac

0xe2: Pop(1)
0xe3: Push((int) 522959)
0xe4: @@ SetMessage(Stack[-1])
0xe5: Pop(1)
0xe6: @@ ClearReplies()
0xe7: Pop(0)
0xe8: Push((int) 522960)
0xe9: Push((int) 24152)
0xea: Push((int) 24151)
0xeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec: Pop(3)
0xed: Push((int) 522973)
0xee: Push((int) -1)
0xef: Push((int) 24164)
0xf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: Return(); Pop(0)

0xf3: PushEmpty(string)
0xf4: Stack[-1] = "Neutral"
0xf5: Call2 0xac

0xf6: Pop(1)
0xf7: Push((int) 523196)
0xf8: @@ SetMessage(Stack[-1])
0xf9: Pop(1)
0xfa: @@ ClearReplies()
0xfb: Pop(0)
0xfc: Push((int) 523197)
0xfd: Push((int) -1)
0xfe: Push((int) 24400)
0xff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100: Pop(3)
0x101: Push((int) 523198)
0x102: Push((int) -1)
0x103: Push((int) 24401)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Return(); Pop(0)

0x107: Push((int) 24152)
0x108: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x10a: PushEmpty(string)
0x10b: Stack[-1] = "Neutral"
0x10c: Call2 0xac

0x10d: Pop(1)
0x10e: Push((int) 522961)
0x10f: @@ SetMessage(Stack[-1])
0x110: Pop(1)
0x111: @@ ClearReplies()
0x112: Pop(0)
0x113: Push((int) 522962)
0x114: Push((int) 24154)
0x115: Push((int) 24153)
0x116: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117: Pop(3)
0x118: Push((int) 522972)
0x119: Push((int) -1)
0x11a: Push((int) 24163)
0x11b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: Return(); Pop(0)

0x11e: Push((int) 24154)
0x11f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x121: PushEmpty(string)
0x122: Stack[-1] = "Neutral"
0x123: Call2 0xac

0x124: Pop(1)
0x125: Push((int) 522963)
0x126: @@ SetMessage(Stack[-1])
0x127: Pop(1)
0x128: @@ ClearReplies()
0x129: Pop(0)
0x12a: Push((int) 522964)
0x12b: Push((int) 24156)
0x12c: Push((int) 24155)
0x12d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(3)
0x12f: Push((int) 522968)
0x130: Push((int) 24160)
0x131: Push((int) 24159)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: Push((int) 24160)
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Neutral"
0x13a: Call2 0xac

0x13b: Pop(1)
0x13c: Push((int) 522969)
0x13d: @@ SetMessage(Stack[-1])
0x13e: Pop(1)
0x13f: @@ ClearReplies()
0x140: Pop(0)
0x141: Push((int) 522970)
0x142: Push((int) -1)
0x143: Push((int) 24161)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Push((int) 522971)
0x147: Push((int) -1)
0x148: Push((int) 24162)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: Push((int) 24156)
0x14d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14e: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x14f: PushEmpty(string)
0x150: Stack[-1] = "Neutral"
0x151: Call2 0xac

0x152: Pop(1)
0x153: Push((int) 522965)
0x154: @@ SetMessage(Stack[-1])
0x155: Pop(1)
0x156: @@ ClearReplies()
0x157: Pop(0)
0x158: Push((int) 522966)
0x159: Push((int) -1)
0x15a: Push((int) 24157)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Push((int) 522967)
0x15e: Push((int) -1)
0x15f: Push((int) 24158)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x164: PushEmpty(bool)
0x165: Call2 0x374

0x166: Pop(0)
0x167: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x168: @ lshStopAnimation()
0x169: Pop(0)
0x16a: GOTO 0x16d

0x16b: @ StopAnimation()
0x16c: Pop(0)
0x16d: Return(); Pop(0)

0x16e: GOTO 0xc3

0x16f: Return(); Pop(0)

0x170: PushEmpty(float, float)
0x171: Stack[-2] = (int) 300
0x172: Stack[-1] = (int) 100
0x173: Call2 0x181

0x174: Pop(2)
0x175: Return(); Pop(0)

0x176: PushEmpty()
0x177: PushEmpty()
0x178: Call2 0x207

0x179: Pop(0)
0x17a: PushEmpty(int, object)
0x17b: Stack[-1] = Stack[-3]
0x17c: Push(-2, 1); TaskCall(0)
0x17d: Call2 0x0

0x17e: Pop(-2, 1); TaskReturn
0x17f: Pop(2)
0x180: Return(); Pop(0)

0x181: PushEmpty(float, bool, float, bool)
0x182: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x183: Push((int) 3)
0x184: @ rand(Stack[-3], Stack[-1])
0x185: Pop(1)
0x186: Push((int) 3)
0x187: Pop(1); Push(Stack[-3] + Stack[-1]);
0x188: @ Sleep(Stack[-1], Stack[-2])
0x189: Pop(1)
0x18a: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x18b: PushEmpty(float, float)
0x18c: Stack[-2] = Stack[-8]
0x18d: Stack[-1] = Stack[-7]
0x18e: Call2 0x1c6

0x18f: Pop(2)
0x190: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x191: GOTO 0x183

0x192: Return(); Pop(4)

0x193: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x194: PushEmpty(bool)
0x195: Stack[-1] = (bool) 0
0x196: PushEmpty(bool)
0x197: Call2 0x273

0x198: Pop(0)
0x199: Pop(1); Push((bool) Stack[-1] == 0)
0x19a: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19b: PushEmpty(bool)
0x19c: Call2 0x1c4

0x19d: Pop(0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19f: Stack[-1] = (bool) 1
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a1: PushEmpty(object)
0x1a2: Call2 0x2fe

0x1a3: Pop(0)
0x1a4: @ RemoveActor(Stack[-1])
0x1a5: Pop(1)
0x1a6: Return(); Pop(0)

0x1a7: PushEmpty()
0x1a8: Push("cleanup")
0x1a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ab: PushEmpty()
0x1ac: Call2 0x193

0x1ad: Pop(0)
0x1ae: Return(); Pop(0)

0x1af: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b1: PushEmpty()
0x1b2: Call2 0x207

0x1b3: Pop(0)
0x1b4: PushEmpty(bool)
0x1b5: Stack[-1] = (bool) 0
0x1b6: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1b7: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1b8: PushEmpty(bool)
0x1b9: Call2 0x1c4

0x1ba: Pop(0)
0x1bb: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bc: Stack[-1] = (bool) 1
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1be: PushEmpty(object)
0x1bf: Call2 0x2fe

0x1c0: Pop(0)
0x1c1: @ RemoveActor(Stack[-1])
0x1c2: Pop(1)
0x1c3: Return(); Pop(0)

0x1c4: Stack[-1] = (bool) 1
0x1c5: Return(); Pop(0)

0x1c6: PushEmpty()
0x1c7: PushEmpty(bool)
0x1c8: Call2 0x273

0x1c9: Pop(0)
0x1ca: Pop(1); Push((bool) Stack[-1] == 0)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cc: Return(); Pop(0)

0x1cd: Push("player")
0x1ce: @ FindActor(Stack[-4], Stack[-1])
0x1cf: Pop(1)
0x1d0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1d1: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1d2: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1d3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1d4: Push((int) 10)
0x1d5: Push((float)1.0)
0x1d6: @ SetTimer(Stack[-2], Stack[-1])
0x1d7: Pop(2)
0x1d8: PushEmpty()
0x1d9: Call2 0x215

0x1da: Pop(0)
0x1db: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1dd: Push((int) 10)
0x1de: @ KillTimer(Stack[-1])
0x1df: Pop(1)
0x1e0: Return(); Pop(0)

0x1e1: PushEmpty(float, float)
0x1e2: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e4: Stack[-3] = (bool) 0
0x1e5: Return(); Pop(2)

0x1e6: PushEmpty(float, object)
0x1e7: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1e8: Call2 0x26b

0x1e9: Pop(1)
0x1ea: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1eb: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1ee: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1ef: Return(); Pop(2)

0x1f0: PushEmpty()
0x1f1: Push((int) 10)
0x1f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1f4: PushEmpty(bool)
0x1f5: Call2 0x1e1

0x1f6: Pop(0)
0x1f7: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f8: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1f9: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fa: PushEmpty(object)
0x1fb: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1fc: Call2 0x2ec

0x1fd: Pop(1)
0x1fe: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1ff: GOTO 0x206

0x200: Push( Stack[2 + Tasks[-1].StackPointer] )
0x201: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x202: Push("head")
0x203: @ UnlookAsync(Stack[-1])
0x204: Pop(1)
0x205: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x206: Return(); Pop(0)

0x207: PushEmpty()
0x208: Call2 0x266

0x209: Pop(0)
0x20a: Push((int) 10)
0x20b: @ KillTimer(Stack[-1])
0x20c: Pop(1)
0x20d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x20e: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x20f: Push("head")
0x210: @ UnlookAsync(Stack[-1])
0x211: Pop(1)
0x212: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x213: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x214: Return(); Pop(0)

0x215: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x216: @ WaitForAnimEnd()
0x217: Pop(0)
0x218: PushEmpty(bool)
0x219: Call2 0x273

0x21a: Pop(0)
0x21b: Pop(1); Push((bool) Stack[-1] == 0)
0x21c: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21d: Return(); Pop(14)

0x21e: PushEmpty(int)
0x21f: Call2 0x32b

0x220: Stack[-8] = Stack[-1]
0x221: Pop(1)
0x222: Stack[-6] = (int) 0
0x223: PushEmpty(bool)
0x224: Stack[-1] = (bool) 0
0x225: Push((int) 5)
0x226: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x228: PushEmpty(bool)
0x229: Call2 0x273

0x22a: Pop(0)
0x22b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22c: Stack[-1] = (bool) 1
0x22d: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x22e: Push((int) 3)
0x22f: @ irand(Stack[-6], Stack[-1])
0x230: Pop(1)
0x231: Push((int) 0)
0x232: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x233: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x234: Push(Stack[-7])
0x235: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x236: @ irand(Stack[-4], Stack[-7])
0x237: Pop(0)
0x238: Push("all")
0x239: PushEmpty(string, int)
0x23a: Stack[-1] = Stack[-7]
0x23b: Call2 0x324

0x23c: Pop(1)
0x23d: @ PlayAnimation(Stack[-2], Stack[-1])
0x23e: Pop(2)
0x23f: @ WaitForAnimEnd(Stack[-3])
0x240: Pop(0)
0x241: Pop(0); Push((bool) Stack[-3] == 0)
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: GOTO 0x261

0x244: GOTO 0x256

0x245: Push((int) 1)
0x246: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x247: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x248: Push((int) 4)
0x249: @ rand(Stack[-3], Stack[-1])
0x24a: Pop(1)
0x24b: Push((int) 1)
0x24c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x24d: @ Sleep(Stack[-1], Stack[-2])
0x24e: Pop(1)
0x24f: Pop(0); Push((bool) Stack[-1] == 0)
0x250: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x251: GOTO 0x261

0x252: GOTO 0x256

0x253: Push(Stack[-6])
0x254: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x255: GOTO 0x261

0x256: PushEmpty(bool)
0x257: Call2 0x264

0x258: Pop(0)
0x259: Pop(1); Push((bool) Stack[-1] == 0)
0x25a: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x25b: GOTO 0x261

0x25c: @ ResetAAS()
0x25d: Pop(0)
0x25e: Push((int) 1)
0x25f: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x260: GOTO 0x223

0x261: @ ResetAAS()
0x262: Pop(0)
0x263: Return(); Pop(14)

0x264: Stack[-1] = (bool) 1
0x265: Return(); Pop(0)

0x266: @ StopAnimation()
0x267: Pop(0)
0x268: @ StopGroup0()
0x269: Pop(0)
0x26a: Return(); Pop(0)

0x26b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x26c: @ GetPosition(Stack[-3])
0x26d: Pop(0)
0x26e: @@ GetPosition(Stack[-2])
0x26f: Pop(0)
0x270: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x271: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x272: Return(); Pop(6)

0x273: PushEmpty(bool, bool)
0x274: @ IsLoaded(Stack[-1])
0x275: Pop(0)
0x276: Stack[-3] = Stack[-1]
0x277: Return(); Pop(2)

0x278: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x279: @@ GetPosition(Stack[-8])
0x27a: Pop(0)
0x27b: @@ GetEyesHeight(Stack[-9])
0x27c: Pop(0)
0x27d: Push(CvectorIndex(Stack[-8], 1))
0x27e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x27f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x280: @ GetPosition(Stack[-7])
0x281: Pop(0)
0x282: @ GetEyesHeight(Stack[-9])
0x283: Pop(0)
0x284: Push(CvectorIndex(Stack[-7], 1))
0x285: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x286: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x287: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x288: Push(CvectorIndex(Stack[-6], 1))
0x289: Stack[-1] = (int) 0
0x28a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x28b: Pop(0); Push(Stack[-6] | Stack[-6]);
0x28c: Pop(1); Push(Sqrt(Stack[-1]))
0x28d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x28e: Stack[-5] = -Stack[-6]; Pop(0);
0x28f: Pop(0); Push(Stack[-6] * Stack[-19]);
0x290: PushEmpty(cvector, cvector)
0x291: Push(CVector(0.0, 1.0, 0.0))
0x292: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x293: Call2 0x304

0x294: Pop(1)
0x295: Push((int) 25)
0x296: Pop(2); Push(Stack[-2] * Stack[-1]);
0x297: Pop(2); Push(Stack[-2] + Stack[-1]);
0x298: Push(CVector(0.0, 10.0, 0.0))
0x299: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x29a: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x29b: @ IsOverrideActive(Stack[-2])
0x29c: Pop(0)
0x29d: Push(Stack[-2])
0x29e: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29f: Stack[-21] = (bool) 0
0x2a0: Return(); Pop(18)

0x2a1: @ StopWorld()
0x2a2: Pop(0)
0x2a3: @ CameraTransit(Stack[-3], Stack[-5])
0x2a4: Pop(0)
0x2a5: Push(CvectorIndex(Stack[-4], 0))
0x2a6: Push(CvectorIndex(Stack[-5], 2))
0x2a7: @ Rotate(Stack[-2], Stack[-1])
0x2a8: Pop(2)
0x2a9: PushEmpty(bool)
0x2aa: Call2 0x374

0x2ab: Pop(0)
0x2ac: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ad: GOTO 0x2b6

0x2ae: Push("head")
0x2af: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2b0: Pop(1)
0x2b1: Push(Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b3: Push("head")
0x2b4: @ LookAsyncCamera(Stack[-1])
0x2b5: Pop(1)
0x2b6: @ CameraWaitForPlayFinish()
0x2b7: Pop(0)
0x2b8: @ ResumeWorld()
0x2b9: Pop(0)
0x2ba: Stack[-21] = (bool) 1
0x2bb: Return(); Pop(18)

0x2bc: PushEmpty(bool, bool)
0x2bd: @ CameraSwitchToNormal()
0x2be: Pop(0)
0x2bf: PushEmpty(bool)
0x2c0: Call2 0x374

0x2c1: Pop(0)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c3: GOTO 0x2cc

0x2c4: Push("head")
0x2c5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c6: Pop(1)
0x2c7: Push(Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c9: Push("head")
0x2ca: @ UnlookAsync(Stack[-1])
0x2cb: Pop(1)
0x2cc: Return(); Pop(2)

0x2cd: PushEmpty(bool, float, float, bool, float, float)
0x2ce: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2cf: Pop(0)
0x2d0: Push(Stack[-3])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d2: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2d3: Pop(0)
0x2d4: Push((bool) 0)
0x2d5: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2d6: Pop(1)
0x2d7: GOTO 0x2dc

0x2d8: Push("Can't find lsh animation : ")
0x2d9: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2da: @ Trace(Stack[-1])
0x2db: Pop(1)
0x2dc: Return(); Pop(6)

0x2dd: PushEmpty(bool, float, float, bool, float, float)
0x2de: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2df: Pop(0)
0x2e0: Push(Stack[-3])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e2: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2e3: Pop(0)
0x2e4: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2e5: Pop(0)
0x2e6: GOTO 0x2eb

0x2e7: Push("Can't find lsh animation : ")
0x2e8: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2e9: @ Trace(Stack[-1])
0x2ea: Pop(1)
0x2eb: Return(); Pop(6)

0x2ec: PushEmpty(float, cvector, float, cvector)
0x2ed: @@ GetEyesHeight(Stack[-2])
0x2ee: Pop(0)
0x2ef: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2f0: Push(CvectorIndex(Stack[-1], 1))
0x2f1: Stack[-1] = Stack[-3]
0x2f2: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2f3: Push("head")
0x2f4: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2f5: Pop(1)
0x2f6: Return(); Pop(4)

0x2f7: PushEmpty(bool)
0x2f8: Call2 0x374

0x2f9: Pop(0)
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fb: @ lshStopSpeech()
0x2fc: Pop(0)
0x2fd: Return(); Pop(0)

0x2fe: PushEmpty(object, object)
0x2ff: @ self(Stack[-1])
0x300: Pop(0)
0x301: Stack[-3] = Stack[-1]
0x302: Return(); Pop(2)

0x303: Stack[-1] = 0
0x304: PushEmpty(float, float)
0x305: Pop(0); Push(Stack[-3] | Stack[-3]);
0x306: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x307: Push((float)0.0)
0x308: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x30b: Return(); Pop(2)

0x30c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x30d: Return(); Pop(2)

0x30e: PushEmpty(int, int)
0x30f: @ GetVariable(Stack[-3], Stack[-1])
0x310: Pop(0)
0x311: Stack[-4] = Stack[-1]
0x312: Return(); Pop(2)

0x313: PushEmpty(object, object)
0x314: @ FindActor(Stack[-1], Stack[-4])
0x315: Pop(0)
0x316: Pop(0); Push((bool) Stack[-1] == 0)
0x317: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x318: Push("Door ")
0x319: Pop(1); Push(Stack[-1] + Stack[-5]);
0x31a: Push(" not found")
0x31b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x31c: @ Trace(Stack[-1])
0x31d: Pop(1)
0x31e: GOTO 0x322

0x31f: Push("locked")
0x320: @@ SetProperty(Stack[-1], Stack[-4])
0x321: Pop(1)
0x322: Return(); Pop(2)

0x323: Stack[-1] = 0
0x324: PushEmpty(string, string)
0x325: Stack[-1] = "idle"
0x326: Push(Stack[-3])
0x327: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x328: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x329: Stack[-4] = Stack[-1]
0x32a: Return(); Pop(2)

0x32b: PushEmpty(int, bool, int, bool)
0x32c: Stack[-2] = (int) 0
0x32d: Push("all")
0x32e: PushEmpty(string, int)
0x32f: Stack[-1] = Stack[-5]
0x330: Call2 0x324

0x331: Pop(1)
0x332: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x333: Pop(2)
0x334: Pop(0); Push((bool) Stack[-1] == 0)
0x335: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x336: GOTO 0x33a

0x337: Push((int) 1)
0x338: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x339: GOTO 0x32d

0x33a: Stack[-5] = Stack[-2]
0x33b: Return(); Pop(4)

0x33c: PushEmpty()
0x33d: Push("oob12TWhitemask1")
0x33e: Push((int) 1)
0x33f: @ SetVariable(Stack[-2], Stack[-1])
0x340: Pop(2)
0x341: Return(); Pop(0)

0x342: PushEmpty()
0x343: PushEmpty(string, bool)
0x344: Stack[-2] = "itheater@door1"
0x345: Stack[-1] = (bool) 0
0x346: Call2 0x313

0x347: Pop(2)
0x348: Return(); Pop(0)

0x349: PushEmpty()
0x34a: Push("b12q01TheaterIsVisited")
0x34b: Push((int) 1)
0x34c: @ SetVariable(Stack[-2], Stack[-1])
0x34d: Pop(2)
0x34e: Return(); Pop(0)

0x34f: PushEmpty()
0x350: PushEmpty(int, string)
0x351: Stack[-1] = "oob12TWhitemask1"
0x352: Call2 0x30e

0x353: Pop(1)
0x354: Push((int) 0)
0x355: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x357: Stack[-2] = (bool) 1
0x358: Return(); Pop(0)

0x359: Stack[-2] = (bool) 0
0x35a: Return(); Pop(0)

0x35b: PushEmpty(int, int)
0x35c: Push("branch")
0x35d: @ GetVariable(Stack[-1], Stack[-2])
0x35e: Pop(1)
0x35f: Push((int) 0)
0x360: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x361: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x362: Stack[-3] = (int) 1
0x363: Return(); Pop(2)

0x364: GOTO 0x36a

0x365: Push((int) 1)
0x366: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x367: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x368: Stack[-3] = (int) 2
0x369: Return(); Pop(2)

0x36a: Stack[-3] = (int) 3
0x36b: Return(); Pop(2)

0x36c: Stack[-1] = (int) 515569
0x36d: Return(); Pop(0)

0x36e: Stack[-1] = (int) 503354
0x36f: Return(); Pop(0)

0x370: Stack[-1] = "ui/NPC_wmask.png"
0x371: Return(); Pop(0)

0x372: Stack[-1] = "ui/NPC_wmask_b.png"
0x373: Return(); Pop(0)

0x374: Stack[-1] = (bool) 0
0x375: Return(); Pop(0)

