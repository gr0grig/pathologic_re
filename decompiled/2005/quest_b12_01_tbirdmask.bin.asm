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
	oob12TBirdmask1
	itheater@door1
	b12q01TheaterIsVisited
	branch
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png

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

RunOp = 0x1dc
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbd Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x1e2 Vars = (object)
		EVENT_26 Op = 0x213 Vars = (string)
		EVENT_6 Op = 0x21b Vars = ()
		EVENT_7 Op = 0x25c Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x2e4

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3da

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3d8

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3dc

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3de

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3c7

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
0x41: Call2 0x328

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
0x4f: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x3bb

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x3a8

0x59: Pop(2)
0x5a: PushEmpty(object, object)
0x5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d: Call2 0x3ae

0x5e: Pop(2)
0x5f: PushEmpty(object, object)
0x60: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x61: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x62: Call2 0x3b5

0x63: Pop(2)
0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral"
0x66: Call2 0xa7

0x67: Pop(1)
0x68: Push((int) 522931)
0x69: @@ SetMessage(Stack[-1])
0x6a: Pop(1)
0x6b: @@ ClearReplies()
0x6c: Pop(0)
0x6d: Push((int) 522932)
0x6e: Push((int) 24124)
0x6f: Push((int) 24123)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: GOTO 0x89

0x73: PushEmpty(string)
0x74: Stack[-1] = "Neutral"
0x75: Call2 0xa7

0x76: Pop(1)
0x77: Push((int) 523192)
0x78: @@ SetMessage(Stack[-1])
0x79: Pop(1)
0x7a: @@ ClearReplies()
0x7b: Pop(0)
0x7c: Push((int) 523193)
0x7d: Push((int) -1)
0x7e: Push((int) 24396)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: Push((int) 523194)
0x82: Push((int) -1)
0x83: Push((int) 24397)
0x84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85: Pop(3)
0x86: GOTO 0x89

0x87: Return(); Pop(0)

0x88: GOTO 0x4e

0x89: PushEmpty(bool)
0x8a: Call2 0x3e0

0x8b: Pop(0)
0x8c: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x8d: @ lshWaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: PushEmpty(string)
0x93: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x94: Call2 0x339

0x95: Pop(1)
0x96: GOTO 0x8d

0x97: GOTO 0xa6

0x98: Push("all")
0x99: Push("idle")
0x9a: @ PlayAnimation(Stack[-2], Stack[-1])
0x9b: Pop(2)
0x9c: @ WaitForAnimEnd()
0x9d: Pop(0)
0x9e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: GOTO 0xa6

0xa1: Push("all")
0xa2: Push("idle")
0xa3: @ PlayAnimation(Stack[-2], Stack[-1])
0xa4: Pop(2)
0xa5: GOTO 0x9c

0xa6: Return(); Pop(0)

0xa7: PushEmpty()
0xa8: PushEmpty(bool)
0xa9: Call2 0x3e0

0xaa: Pop(0)
0xab: Pop(1); Push((bool) Stack[-1] == 0)
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Return(); Pop(0)

0xae: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: Return(); Pop(0)

0xb1: PushEmpty(string, bool)
0xb2: Stack[-2] = Stack[-3]
0xb3: Push("")
0xb4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb6: Stack[-1] = (bool) 0
0xb7: GOTO 0xb9

0xb8: Stack[-1] = (bool) 1
0xb9: Call2 0x349

0xba: Pop(2)
0xbb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbc: Return(); Pop(0)

0xbd: PushEmpty()
0xbe: Push((int) 1)
0xbf: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0xc0: PushEmpty()
0xc1: Call2 0x363

0xc2: Pop(0)
0xc3: Push((int) 24122)
0xc4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xc6: PushEmpty(bool, object)
0xc7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Call2 0x3bb

0xc9: Pop(1)
0xca: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xcb: PushEmpty(object, object)
0xcc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce: Call2 0x3a8

0xcf: Pop(2)
0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x3ae

0xd4: Pop(2)
0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x3b5

0xd9: Pop(2)
0xda: PushEmpty(string)
0xdb: Stack[-1] = "Neutral"
0xdc: Call2 0xa7

0xdd: Pop(1)
0xde: Push((int) 522931)
0xdf: @@ SetMessage(Stack[-1])
0xe0: Pop(1)
0xe1: @@ ClearReplies()
0xe2: Pop(0)
0xe3: Push((int) 522932)
0xe4: Push((int) 24124)
0xe5: Push((int) 24123)
0xe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7: Pop(3)
0xe8: Return(); Pop(0)

0xe9: PushEmpty(string)
0xea: Stack[-1] = "Neutral"
0xeb: Call2 0xa7

0xec: Pop(1)
0xed: Push((int) 523192)
0xee: @@ SetMessage(Stack[-1])
0xef: Pop(1)
0xf0: @@ ClearReplies()
0xf1: Pop(0)
0xf2: Push((int) 523193)
0xf3: Push((int) -1)
0xf4: Push((int) 24396)
0xf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6: Pop(3)
0xf7: Push((int) 523194)
0xf8: Push((int) -1)
0xf9: Push((int) 24397)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Return(); Pop(0)

0xfd: Push((int) 24124)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral"
0x102: Call2 0xa7

0x103: Pop(1)
0x104: Push((int) 522933)
0x105: @@ SetMessage(Stack[-1])
0x106: Pop(1)
0x107: @@ ClearReplies()
0x108: Pop(0)
0x109: Push((int) 522934)
0x10a: Push((int) 24126)
0x10b: Push((int) 24125)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: Push((int) 522956)
0x10f: Push((int) 24148)
0x110: Push((int) 24147)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Return(); Pop(0)

0x114: Push((int) 24148)
0x115: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x117: PushEmpty(string)
0x118: Stack[-1] = "Neutral"
0x119: Call2 0xa7

0x11a: Pop(1)
0x11b: Push((int) 522957)
0x11c: @@ SetMessage(Stack[-1])
0x11d: Pop(1)
0x11e: @@ ClearReplies()
0x11f: Pop(0)
0x120: Push((int) 522958)
0x121: Push((int) 24128)
0x122: Push((int) 24149)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Return(); Pop(0)

0x126: Push((int) 24126)
0x127: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x129: PushEmpty(string)
0x12a: Stack[-1] = "Neutral"
0x12b: Call2 0xa7

0x12c: Pop(1)
0x12d: Push((int) 522935)
0x12e: @@ SetMessage(Stack[-1])
0x12f: Pop(1)
0x130: @@ ClearReplies()
0x131: Pop(0)
0x132: Push((int) 522936)
0x133: Push((int) 24128)
0x134: Push((int) 24127)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: Push((int) 522955)
0x138: Push((int) 24128)
0x139: Push((int) 24146)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: Return(); Pop(0)

0x13d: Push((int) 24128)
0x13e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13f: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x140: PushEmpty(string)
0x141: Stack[-1] = "Neutral"
0x142: Call2 0xa7

0x143: Pop(1)
0x144: Push((int) 522937)
0x145: @@ SetMessage(Stack[-1])
0x146: Pop(1)
0x147: @@ ClearReplies()
0x148: Pop(0)
0x149: Push((int) 522938)
0x14a: Push((int) 24130)
0x14b: Push((int) 24129)
0x14c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14d: Pop(3)
0x14e: Return(); Pop(0)

0x14f: Push((int) 24130)
0x150: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x152: PushEmpty(string)
0x153: Stack[-1] = "Neutral"
0x154: Call2 0xa7

0x155: Pop(1)
0x156: Push((int) 522939)
0x157: @@ SetMessage(Stack[-1])
0x158: Pop(1)
0x159: @@ ClearReplies()
0x15a: Pop(0)
0x15b: Push((int) 522940)
0x15c: Push((int) 24132)
0x15d: Push((int) 24131)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: Push((int) 522946)
0x161: Push((int) 24138)
0x162: Push((int) 24137)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: Return(); Pop(0)

0x166: Push((int) 24138)
0x167: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x169: PushEmpty(string)
0x16a: Stack[-1] = "Neutral"
0x16b: Call2 0xa7

0x16c: Pop(1)
0x16d: Push((int) 522947)
0x16e: @@ SetMessage(Stack[-1])
0x16f: Pop(1)
0x170: @@ ClearReplies()
0x171: Pop(0)
0x172: Push((int) 522948)
0x173: Push((int) 24134)
0x174: Push((int) 24139)
0x175: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x176: Pop(3)
0x177: Push((int) 522949)
0x178: Push((int) 24141)
0x179: Push((int) 24140)
0x17a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17b: Pop(3)
0x17c: Return(); Pop(0)

0x17d: Push((int) 24141)
0x17e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17f: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x180: PushEmpty(string)
0x181: Stack[-1] = "Neutral"
0x182: Call2 0xa7

0x183: Pop(1)
0x184: Push((int) 522950)
0x185: @@ SetMessage(Stack[-1])
0x186: Pop(1)
0x187: @@ ClearReplies()
0x188: Pop(0)
0x189: Push((int) 522951)
0x18a: Push((int) 24134)
0x18b: Push((int) 24142)
0x18c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18d: Pop(3)
0x18e: Push((int) 522952)
0x18f: Push((int) 24144)
0x190: Push((int) 24143)
0x191: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x192: Pop(3)
0x193: Return(); Pop(0)

0x194: Push((int) 24144)
0x195: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x196: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x197: PushEmpty(string)
0x198: Stack[-1] = "Neutral"
0x199: Call2 0xa7

0x19a: Pop(1)
0x19b: Push((int) 522953)
0x19c: @@ SetMessage(Stack[-1])
0x19d: Pop(1)
0x19e: @@ ClearReplies()
0x19f: Pop(0)
0x1a0: Push((int) 522954)
0x1a1: Push((int) 24134)
0x1a2: Push((int) 24145)
0x1a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a4: Pop(3)
0x1a5: Return(); Pop(0)

0x1a6: Push((int) 24132)
0x1a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1a9: PushEmpty(string)
0x1aa: Stack[-1] = "Neutral"
0x1ab: Call2 0xa7

0x1ac: Pop(1)
0x1ad: Push((int) 522941)
0x1ae: @@ SetMessage(Stack[-1])
0x1af: Pop(1)
0x1b0: @@ ClearReplies()
0x1b1: Pop(0)
0x1b2: Push((int) 522942)
0x1b3: Push((int) 24134)
0x1b4: Push((int) 24133)
0x1b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b6: Pop(3)
0x1b7: Push((int) 522945)
0x1b8: Push((int) -1)
0x1b9: Push((int) 24136)
0x1ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bb: Pop(3)
0x1bc: Return(); Pop(0)

0x1bd: Push((int) 24134)
0x1be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1c0: PushEmpty(string)
0x1c1: Stack[-1] = "Neutral"
0x1c2: Call2 0xa7

0x1c3: Pop(1)
0x1c4: Push((int) 522943)
0x1c5: @@ SetMessage(Stack[-1])
0x1c6: Pop(1)
0x1c7: @@ ClearReplies()
0x1c8: Pop(0)
0x1c9: Push((int) 522944)
0x1ca: Push((int) -1)
0x1cb: Push((int) 24135)
0x1cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cd: Pop(3)
0x1ce: Return(); Pop(0)

0x1cf: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d0: PushEmpty(bool)
0x1d1: Call2 0x3e0

0x1d2: Pop(0)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d4: @ lshStopAnimation()
0x1d5: Pop(0)
0x1d6: GOTO 0x1d9

0x1d7: @ StopAnimation()
0x1d8: Pop(0)
0x1d9: Return(); Pop(0)

0x1da: GOTO 0xbe

0x1db: Return(); Pop(0)

0x1dc: PushEmpty(float, float)
0x1dd: Stack[-2] = (int) 300
0x1de: Stack[-1] = (int) 100
0x1df: Call2 0x1ed

0x1e0: Pop(2)
0x1e1: Return(); Pop(0)

0x1e2: PushEmpty()
0x1e3: PushEmpty()
0x1e4: Call2 0x273

0x1e5: Pop(0)
0x1e6: PushEmpty(int, object)
0x1e7: Stack[-1] = Stack[-3]
0x1e8: Push(-2, 1); TaskCall(0)
0x1e9: Call2 0x0

0x1ea: Pop(-2, 1); TaskReturn
0x1eb: Pop(2)
0x1ec: Return(); Pop(0)

0x1ed: PushEmpty(float, bool, float, bool)
0x1ee: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1ef: Push((int) 3)
0x1f0: @ rand(Stack[-3], Stack[-1])
0x1f1: Pop(1)
0x1f2: Push((int) 3)
0x1f3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1f4: @ Sleep(Stack[-1], Stack[-2])
0x1f5: Pop(1)
0x1f6: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x1f7: PushEmpty(float, float)
0x1f8: Stack[-2] = Stack[-8]
0x1f9: Stack[-1] = Stack[-7]
0x1fa: Call2 0x232

0x1fb: Pop(2)
0x1fc: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1fd: GOTO 0x1ef

0x1fe: Return(); Pop(4)

0x1ff: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x200: PushEmpty(bool)
0x201: Stack[-1] = (bool) 0
0x202: PushEmpty(bool)
0x203: Call2 0x2df

0x204: Pop(0)
0x205: Pop(1); Push((bool) Stack[-1] == 0)
0x206: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x207: PushEmpty(bool)
0x208: Call2 0x230

0x209: Pop(0)
0x20a: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20b: Stack[-1] = (bool) 1
0x20c: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x20d: PushEmpty(object)
0x20e: Call2 0x36a

0x20f: Pop(0)
0x210: @ RemoveActor(Stack[-1])
0x211: Pop(1)
0x212: Return(); Pop(0)

0x213: PushEmpty()
0x214: Push("cleanup")
0x215: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x216: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x217: PushEmpty()
0x218: Call2 0x1ff

0x219: Pop(0)
0x21a: Return(); Pop(0)

0x21b: Push( Stack[6 + Tasks[-1].StackPointer] )
0x21c: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21d: PushEmpty()
0x21e: Call2 0x273

0x21f: Pop(0)
0x220: PushEmpty(bool)
0x221: Stack[-1] = (bool) 0
0x222: Push( Stack[5 + Tasks[-1].StackPointer] )
0x223: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x224: PushEmpty(bool)
0x225: Call2 0x230

0x226: Pop(0)
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: Stack[-1] = (bool) 1
0x229: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22a: PushEmpty(object)
0x22b: Call2 0x36a

0x22c: Pop(0)
0x22d: @ RemoveActor(Stack[-1])
0x22e: Pop(1)
0x22f: Return(); Pop(0)

0x230: Stack[-1] = (bool) 1
0x231: Return(); Pop(0)

0x232: PushEmpty()
0x233: PushEmpty(bool)
0x234: Call2 0x2df

0x235: Pop(0)
0x236: Pop(1); Push((bool) Stack[-1] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x238: Return(); Pop(0)

0x239: Push("player")
0x23a: @ FindActor(Stack[-4], Stack[-1])
0x23b: Pop(1)
0x23c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x23d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x23e: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x23f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x240: Push((int) 10)
0x241: Push((float)1.0)
0x242: @ SetTimer(Stack[-2], Stack[-1])
0x243: Pop(2)
0x244: PushEmpty()
0x245: Call2 0x281

0x246: Pop(0)
0x247: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x248: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x249: Push((int) 10)
0x24a: @ KillTimer(Stack[-1])
0x24b: Pop(1)
0x24c: Return(); Pop(0)

0x24d: PushEmpty(float, float)
0x24e: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x24f: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x250: Stack[-3] = (bool) 0
0x251: Return(); Pop(2)

0x252: PushEmpty(float, object)
0x253: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x254: Call2 0x2d7

0x255: Pop(1)
0x256: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x257: Push( Stack[2 + Tasks[-1].StackPointer] )
0x258: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x259: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x25a: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x25b: Return(); Pop(2)

0x25c: PushEmpty()
0x25d: Push((int) 10)
0x25e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x260: PushEmpty(bool)
0x261: Call2 0x24d

0x262: Pop(0)
0x263: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x264: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x265: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x266: PushEmpty(object)
0x267: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x268: Call2 0x358

0x269: Pop(1)
0x26a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x26b: GOTO 0x272

0x26c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x26d: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x26e: Push("head")
0x26f: @ UnlookAsync(Stack[-1])
0x270: Pop(1)
0x271: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x272: Return(); Pop(0)

0x273: PushEmpty()
0x274: Call2 0x2d2

0x275: Pop(0)
0x276: Push((int) 10)
0x277: @ KillTimer(Stack[-1])
0x278: Pop(1)
0x279: Push( Stack[2 + Tasks[-1].StackPointer] )
0x27a: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27b: Push("head")
0x27c: @ UnlookAsync(Stack[-1])
0x27d: Pop(1)
0x27e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x27f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x280: Return(); Pop(0)

0x281: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x282: @ WaitForAnimEnd()
0x283: Pop(0)
0x284: PushEmpty(bool)
0x285: Call2 0x2df

0x286: Pop(0)
0x287: Pop(1); Push((bool) Stack[-1] == 0)
0x288: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x289: Return(); Pop(14)

0x28a: PushEmpty(int)
0x28b: Call2 0x397

0x28c: Stack[-8] = Stack[-1]
0x28d: Pop(1)
0x28e: Stack[-6] = (int) 0
0x28f: PushEmpty(bool)
0x290: Stack[-1] = (bool) 0
0x291: Push((int) 5)
0x292: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x293: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x294: PushEmpty(bool)
0x295: Call2 0x2df

0x296: Pop(0)
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: Stack[-1] = (bool) 1
0x299: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x29a: Push((int) 3)
0x29b: @ irand(Stack[-6], Stack[-1])
0x29c: Pop(1)
0x29d: Push((int) 0)
0x29e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x29f: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2a0: Push(Stack[-7])
0x2a1: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2a2: @ irand(Stack[-4], Stack[-7])
0x2a3: Pop(0)
0x2a4: Push("all")
0x2a5: PushEmpty(string, int)
0x2a6: Stack[-1] = Stack[-7]
0x2a7: Call2 0x390

0x2a8: Pop(1)
0x2a9: @ PlayAnimation(Stack[-2], Stack[-1])
0x2aa: Pop(2)
0x2ab: @ WaitForAnimEnd(Stack[-3])
0x2ac: Pop(0)
0x2ad: Pop(0); Push((bool) Stack[-3] == 0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2af: GOTO 0x2cd

0x2b0: GOTO 0x2c2

0x2b1: Push((int) 1)
0x2b2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2b3: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2b4: Push((int) 4)
0x2b5: @ rand(Stack[-3], Stack[-1])
0x2b6: Pop(1)
0x2b7: Push((int) 1)
0x2b8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2b9: @ Sleep(Stack[-1], Stack[-2])
0x2ba: Pop(1)
0x2bb: Pop(0); Push((bool) Stack[-1] == 0)
0x2bc: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bd: GOTO 0x2cd

0x2be: GOTO 0x2c2

0x2bf: Push(Stack[-6])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c1: GOTO 0x2cd

0x2c2: PushEmpty(bool)
0x2c3: Call2 0x2d0

0x2c4: Pop(0)
0x2c5: Pop(1); Push((bool) Stack[-1] == 0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c7: GOTO 0x2cd

0x2c8: @ ResetAAS()
0x2c9: Pop(0)
0x2ca: Push((int) 1)
0x2cb: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2cc: GOTO 0x28f

0x2cd: @ ResetAAS()
0x2ce: Pop(0)
0x2cf: Return(); Pop(14)

0x2d0: Stack[-1] = (bool) 1
0x2d1: Return(); Pop(0)

0x2d2: @ StopAnimation()
0x2d3: Pop(0)
0x2d4: @ StopGroup0()
0x2d5: Pop(0)
0x2d6: Return(); Pop(0)

0x2d7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2d8: @ GetPosition(Stack[-3])
0x2d9: Pop(0)
0x2da: @@ GetPosition(Stack[-2])
0x2db: Pop(0)
0x2dc: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2dd: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2de: Return(); Pop(6)

0x2df: PushEmpty(bool, bool)
0x2e0: @ IsLoaded(Stack[-1])
0x2e1: Pop(0)
0x2e2: Stack[-3] = Stack[-1]
0x2e3: Return(); Pop(2)

0x2e4: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2e5: @@ GetPosition(Stack[-8])
0x2e6: Pop(0)
0x2e7: @@ GetEyesHeight(Stack[-9])
0x2e8: Pop(0)
0x2e9: Push(CvectorIndex(Stack[-8], 1))
0x2ea: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2eb: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2ec: @ GetPosition(Stack[-7])
0x2ed: Pop(0)
0x2ee: @ GetEyesHeight(Stack[-9])
0x2ef: Pop(0)
0x2f0: Push(CvectorIndex(Stack[-7], 1))
0x2f1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2f2: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2f3: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2f4: Push(CvectorIndex(Stack[-6], 1))
0x2f5: Stack[-1] = (int) 0
0x2f6: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2f7: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2f8: Pop(1); Push(Sqrt(Stack[-1]))
0x2f9: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2fa: Stack[-5] = -Stack[-6]; Pop(0);
0x2fb: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2fc: PushEmpty(cvector, cvector)
0x2fd: Push(CVector(0.0, 1.0, 0.0))
0x2fe: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2ff: Call2 0x370

0x300: Pop(1)
0x301: Push((int) 25)
0x302: Pop(2); Push(Stack[-2] * Stack[-1]);
0x303: Pop(2); Push(Stack[-2] + Stack[-1]);
0x304: Push(CVector(0.0, 10.0, 0.0))
0x305: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x306: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x307: @ IsOverrideActive(Stack[-2])
0x308: Pop(0)
0x309: Push(Stack[-2])
0x30a: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x30b: Stack[-21] = (bool) 0
0x30c: Return(); Pop(18)

0x30d: @ StopWorld()
0x30e: Pop(0)
0x30f: @ CameraTransit(Stack[-3], Stack[-5])
0x310: Pop(0)
0x311: Push(CvectorIndex(Stack[-4], 0))
0x312: Push(CvectorIndex(Stack[-5], 2))
0x313: @ Rotate(Stack[-2], Stack[-1])
0x314: Pop(2)
0x315: PushEmpty(bool)
0x316: Call2 0x3e0

0x317: Pop(0)
0x318: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x319: GOTO 0x322

0x31a: Push("head")
0x31b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x31c: Pop(1)
0x31d: Push(Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31f: Push("head")
0x320: @ LookAsyncCamera(Stack[-1])
0x321: Pop(1)
0x322: @ CameraWaitForPlayFinish()
0x323: Pop(0)
0x324: @ ResumeWorld()
0x325: Pop(0)
0x326: Stack[-21] = (bool) 1
0x327: Return(); Pop(18)

0x328: PushEmpty(bool, bool)
0x329: @ CameraSwitchToNormal()
0x32a: Pop(0)
0x32b: PushEmpty(bool)
0x32c: Call2 0x3e0

0x32d: Pop(0)
0x32e: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32f: GOTO 0x338

0x330: Push("head")
0x331: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x332: Pop(1)
0x333: Push(Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x335: Push("head")
0x336: @ UnlookAsync(Stack[-1])
0x337: Pop(1)
0x338: Return(); Pop(2)

0x339: PushEmpty(bool, float, float, bool, float, float)
0x33a: @ lshHasAnimation(Stack[-3], Stack[-7])
0x33b: Pop(0)
0x33c: Push(Stack[-3])
0x33d: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x33e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x33f: Pop(0)
0x340: Push((bool) 0)
0x341: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x342: Pop(1)
0x343: GOTO 0x348

0x344: Push("Can't find lsh animation : ")
0x345: Pop(1); Push(Stack[-1] + Stack[-8]);
0x346: @ Trace(Stack[-1])
0x347: Pop(1)
0x348: Return(); Pop(6)

0x349: PushEmpty(bool, float, float, bool, float, float)
0x34a: @ lshHasAnimation(Stack[-3], Stack[-8])
0x34b: Pop(0)
0x34c: Push(Stack[-3])
0x34d: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x34e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x34f: Pop(0)
0x350: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x351: Pop(0)
0x352: GOTO 0x357

0x353: Push("Can't find lsh animation : ")
0x354: Pop(1); Push(Stack[-1] + Stack[-9]);
0x355: @ Trace(Stack[-1])
0x356: Pop(1)
0x357: Return(); Pop(6)

0x358: PushEmpty(float, cvector, float, cvector)
0x359: @@ GetEyesHeight(Stack[-2])
0x35a: Pop(0)
0x35b: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x35c: Push(CvectorIndex(Stack[-1], 1))
0x35d: Stack[-1] = Stack[-3]
0x35e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x35f: Push("head")
0x360: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x361: Pop(1)
0x362: Return(); Pop(4)

0x363: PushEmpty(bool)
0x364: Call2 0x3e0

0x365: Pop(0)
0x366: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x367: @ lshStopSpeech()
0x368: Pop(0)
0x369: Return(); Pop(0)

0x36a: PushEmpty(object, object)
0x36b: @ self(Stack[-1])
0x36c: Pop(0)
0x36d: Stack[-3] = Stack[-1]
0x36e: Return(); Pop(2)

0x36f: Stack[-1] = 0
0x370: PushEmpty(float, float)
0x371: Pop(0); Push(Stack[-3] | Stack[-3]);
0x372: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x373: Push((float)0.0)
0x374: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x375: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x376: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x377: Return(); Pop(2)

0x378: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x379: Return(); Pop(2)

0x37a: PushEmpty(int, int)
0x37b: @ GetVariable(Stack[-3], Stack[-1])
0x37c: Pop(0)
0x37d: Stack[-4] = Stack[-1]
0x37e: Return(); Pop(2)

0x37f: PushEmpty(object, object)
0x380: @ FindActor(Stack[-1], Stack[-4])
0x381: Pop(0)
0x382: Pop(0); Push((bool) Stack[-1] == 0)
0x383: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x384: Push("Door ")
0x385: Pop(1); Push(Stack[-1] + Stack[-5]);
0x386: Push(" not found")
0x387: Pop(2); Push(Stack[-2] + Stack[-1]);
0x388: @ Trace(Stack[-1])
0x389: Pop(1)
0x38a: GOTO 0x38e

0x38b: Push("locked")
0x38c: @@ SetProperty(Stack[-1], Stack[-4])
0x38d: Pop(1)
0x38e: Return(); Pop(2)

0x38f: Stack[-1] = 0
0x390: PushEmpty(string, string)
0x391: Stack[-1] = "idle"
0x392: Push(Stack[-3])
0x393: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x394: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x395: Stack[-4] = Stack[-1]
0x396: Return(); Pop(2)

0x397: PushEmpty(int, bool, int, bool)
0x398: Stack[-2] = (int) 0
0x399: Push("all")
0x39a: PushEmpty(string, int)
0x39b: Stack[-1] = Stack[-5]
0x39c: Call2 0x390

0x39d: Pop(1)
0x39e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x39f: Pop(2)
0x3a0: Pop(0); Push((bool) Stack[-1] == 0)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a2: GOTO 0x3a6

0x3a3: Push((int) 1)
0x3a4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3a5: GOTO 0x399

0x3a6: Stack[-5] = Stack[-2]
0x3a7: Return(); Pop(4)

0x3a8: PushEmpty()
0x3a9: Push("oob12TBirdmask1")
0x3aa: Push((int) 1)
0x3ab: @ SetVariable(Stack[-2], Stack[-1])
0x3ac: Pop(2)
0x3ad: Return(); Pop(0)

0x3ae: PushEmpty()
0x3af: PushEmpty(string, bool)
0x3b0: Stack[-2] = "itheater@door1"
0x3b1: Stack[-1] = (bool) 0
0x3b2: Call2 0x37f

0x3b3: Pop(2)
0x3b4: Return(); Pop(0)

0x3b5: PushEmpty()
0x3b6: Push("b12q01TheaterIsVisited")
0x3b7: Push((int) 1)
0x3b8: @ SetVariable(Stack[-2], Stack[-1])
0x3b9: Pop(2)
0x3ba: Return(); Pop(0)

0x3bb: PushEmpty()
0x3bc: PushEmpty(int, string)
0x3bd: Stack[-1] = "oob12TBirdmask1"
0x3be: Call2 0x37a

0x3bf: Pop(1)
0x3c0: Push((int) 0)
0x3c1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c3: Stack[-2] = (bool) 1
0x3c4: Return(); Pop(0)

0x3c5: Stack[-2] = (bool) 0
0x3c6: Return(); Pop(0)

0x3c7: PushEmpty(int, int)
0x3c8: Push("branch")
0x3c9: @ GetVariable(Stack[-1], Stack[-2])
0x3ca: Pop(1)
0x3cb: Push((int) 0)
0x3cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3ce: Stack[-3] = (int) 1
0x3cf: Return(); Pop(2)

0x3d0: GOTO 0x3d6

0x3d1: Push((int) 1)
0x3d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d4: Stack[-3] = (int) 2
0x3d5: Return(); Pop(2)

0x3d6: Stack[-3] = (int) 3
0x3d7: Return(); Pop(2)

0x3d8: Stack[-1] = (int) 515571
0x3d9: Return(); Pop(0)

0x3da: Stack[-1] = (int) 504029
0x3db: Return(); Pop(0)

0x3dc: Stack[-1] = "ui/NPC_bmask.png"
0x3dd: Return(); Pop(0)

0x3de: Stack[-1] = "ui/NPC_bmask_b.png"
0x3df: Return(); Pop(0)

0x3e0: Stack[-1] = (bool) 0
0x3e1: Return(); Pop(0)

