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
	oob12BirdmaskS1
	quest_b12_01
	init_sobor
	oob12BirdmaskS2
	oob12BirdmaskS3
	oob12BirdmaskS4
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

RunOp = 0x2a1
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xff Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x2ad Vars = (object)
		EVENT_7 Op = 0x2e8 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x370

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x446

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x444

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x448

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x44a

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4c9

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
0x41: Call2 0x3b5

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
0x4f: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x474

0x53: Pop(1)
0x54: Pop(1); Push((bool) Stack[-1] == 0)
0x55: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x56: PushEmpty(string)
0x57: Stack[-1] = "Neutral"
0x58: Call2 0xe9

0x59: Pop(1)
0x5a: Push((int) 522134)
0x5b: @@ SetMessage(Stack[-1])
0x5c: Pop(1)
0x5d: @@ ClearReplies()
0x5e: Pop(0)
0x5f: PushEmpty(bool, object)
0x60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61: Call2 0x4a0

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x64: Push((int) 522135)
0x65: Push((int) 23323)
0x66: Push((int) 23302)
0x67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68: Pop(3)
0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call2 0x4ac

0x6c: Pop(1)
0x6d: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6e: Push((int) 522157)
0x6f: Push((int) 23325)
0x70: Push((int) 23324)
0x71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72: Pop(3)
0x73: Push((int) 522166)
0x74: Push((int) -1)
0x75: Push((int) 23333)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: GOTO 0xcb

0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x47e

0x7c: Pop(1)
0x7d: Pop(1); Push((bool) Stack[-1] == 0)
0x7e: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x7f: PushEmpty(string)
0x80: Stack[-1] = "Neutral"
0x81: Call2 0xe9

0x82: Pop(1)
0x83: Push((int) 522130)
0x84: @@ SetMessage(Stack[-1])
0x85: Pop(1)
0x86: @@ ClearReplies()
0x87: Pop(0)
0x88: PushEmpty(bool, object)
0x89: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a: Call2 0x494

0x8b: Pop(1)
0x8c: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8d: Push((int) 522132)
0x8e: Push((int) 23308)
0x8f: Push((int) 23299)
0x90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91: Pop(3)
0x92: Push((int) 522140)
0x93: Push((int) -1)
0x94: Push((int) 23307)
0x95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96: Pop(3)
0x97: GOTO 0xcb

0x98: PushEmpty(bool)
0x99: Stack[-1] = (bool) 0
0x9a: PushEmpty(bool, object)
0x9b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c: Call2 0x488

0x9d: Pop(1)
0x9e: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9f: PushEmpty(bool, object)
0xa0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1: Call2 0x474

0xa2: Pop(1)
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Stack[-1] = (bool) 1
0xa5: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xa6: PushEmpty(object, object)
0xa7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa9: Call2 0x44e

0xaa: Pop(2)
0xab: PushEmpty(string)
0xac: Stack[-1] = "Neutral"
0xad: Call2 0xe9

0xae: Pop(1)
0xaf: Push((int) 522136)
0xb0: @@ SetMessage(Stack[-1])
0xb1: Pop(1)
0xb2: @@ ClearReplies()
0xb3: Pop(0)
0xb4: Push((int) 522137)
0xb5: Push((int) -1)
0xb6: Push((int) 23304)
0xb7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8: Pop(3)
0xb9: GOTO 0xcb

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral"
0xbc: Call2 0xe9

0xbd: Pop(1)
0xbe: Push((int) 522138)
0xbf: @@ SetMessage(Stack[-1])
0xc0: Pop(1)
0xc1: @@ ClearReplies()
0xc2: Pop(0)
0xc3: Push((int) 522139)
0xc4: Push((int) -1)
0xc5: Push((int) 23306)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: GOTO 0xcb

0xc9: Return(); Pop(0)

0xca: GOTO 0x4e

0xcb: PushEmpty(bool)
0xcc: Call2 0x44c

0xcd: Pop(0)
0xce: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xcf: @ lshWaitForAnimEnd()
0xd0: Pop(0)
0xd1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: GOTO 0xd9

0xd4: PushEmpty(string)
0xd5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd6: Call2 0x3c7

0xd7: Pop(1)
0xd8: GOTO 0xcf

0xd9: GOTO 0xe8

0xda: Push("all")
0xdb: Push("idle")
0xdc: @ PlayAnimation(Stack[-2], Stack[-1])
0xdd: Pop(2)
0xde: @ WaitForAnimEnd()
0xdf: Pop(0)
0xe0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe1: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe2: GOTO 0xe8

0xe3: Push("all")
0xe4: Push("idle")
0xe5: @ PlayAnimation(Stack[-2], Stack[-1])
0xe6: Pop(2)
0xe7: GOTO 0xde

0xe8: Return(); Pop(0)

0xe9: PushEmpty()
0xea: PushEmpty(bool)
0xeb: Call2 0x44c

0xec: Pop(0)
0xed: Pop(1); Push((bool) Stack[-1] == 0)
0xee: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xef: Return(); Pop(0)

0xf0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf1: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf2: Return(); Pop(0)

0xf3: PushEmpty(string, bool)
0xf4: Stack[-2] = Stack[-3]
0xf5: Push("")
0xf6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf8: Stack[-1] = (bool) 0
0xf9: GOTO 0xfb

0xfa: Stack[-1] = (bool) 1
0xfb: Call2 0x3d7

0xfc: Pop(2)
0xfd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xfe: Return(); Pop(0)

0xff: PushEmpty()
0x100: Push((int) 1)
0x101: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x102: PushEmpty()
0x103: Call2 0x3f1

0x104: Pop(0)
0x105: Push((int) 23302)
0x106: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x461

0x10c: Pop(2)
0x10d: Push((int) 23324)
0x10e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x110: PushEmpty(object, object)
0x111: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x112: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x113: Call2 0x467

0x114: Pop(2)
0x115: Push((int) 23299)
0x116: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11b: Call2 0x45b

0x11c: Pop(2)
0x11d: Push((int) 23304)
0x11e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x120: PushEmpty(object, object)
0x121: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x122: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x123: Call2 0x46d

0x124: Pop(2)
0x125: PushEmpty(object, object)
0x126: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x127: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x128: Call2 0x454

0x129: Pop(2)
0x12a: Push((int) 23301)
0x12b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x12d: PushEmpty(bool, object)
0x12e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12f: Call2 0x474

0x130: Pop(1)
0x131: Pop(1); Push((bool) Stack[-1] == 0)
0x132: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x133: PushEmpty(string)
0x134: Stack[-1] = "Neutral"
0x135: Call2 0xe9

0x136: Pop(1)
0x137: Push((int) 522134)
0x138: @@ SetMessage(Stack[-1])
0x139: Pop(1)
0x13a: @@ ClearReplies()
0x13b: Pop(0)
0x13c: PushEmpty(bool, object)
0x13d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13e: Call2 0x4a0

0x13f: Pop(1)
0x140: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x141: Push((int) 522135)
0x142: Push((int) 23323)
0x143: Push((int) 23302)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: PushEmpty(bool, object)
0x147: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x148: Call2 0x4ac

0x149: Pop(1)
0x14a: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14b: Push((int) 522157)
0x14c: Push((int) 23325)
0x14d: Push((int) 23324)
0x14e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f: Pop(3)
0x150: Push((int) 522166)
0x151: Push((int) -1)
0x152: Push((int) 23333)
0x153: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x154: Pop(3)
0x155: Return(); Pop(0)

0x156: PushEmpty(bool, object)
0x157: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x158: Call2 0x47e

0x159: Pop(1)
0x15a: Pop(1); Push((bool) Stack[-1] == 0)
0x15b: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x15c: PushEmpty(string)
0x15d: Stack[-1] = "Neutral"
0x15e: Call2 0xe9

0x15f: Pop(1)
0x160: Push((int) 522130)
0x161: @@ SetMessage(Stack[-1])
0x162: Pop(1)
0x163: @@ ClearReplies()
0x164: Pop(0)
0x165: PushEmpty(bool, object)
0x166: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x167: Call2 0x494

0x168: Pop(1)
0x169: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16a: Push((int) 522132)
0x16b: Push((int) 23308)
0x16c: Push((int) 23299)
0x16d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16e: Pop(3)
0x16f: Push((int) 522140)
0x170: Push((int) -1)
0x171: Push((int) 23307)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Return(); Pop(0)

0x175: PushEmpty(bool)
0x176: Stack[-1] = (bool) 0
0x177: PushEmpty(bool, object)
0x178: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x179: Call2 0x488

0x17a: Pop(1)
0x17b: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x17c: PushEmpty(bool, object)
0x17d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17e: Call2 0x474

0x17f: Pop(1)
0x180: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x181: Stack[-1] = (bool) 1
0x182: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x183: PushEmpty(object, object)
0x184: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x185: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x186: Call2 0x44e

0x187: Pop(2)
0x188: PushEmpty(string)
0x189: Stack[-1] = "Neutral"
0x18a: Call2 0xe9

0x18b: Pop(1)
0x18c: Push((int) 522136)
0x18d: @@ SetMessage(Stack[-1])
0x18e: Pop(1)
0x18f: @@ ClearReplies()
0x190: Pop(0)
0x191: Push((int) 522137)
0x192: Push((int) -1)
0x193: Push((int) 23304)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: Return(); Pop(0)

0x197: PushEmpty(string)
0x198: Stack[-1] = "Neutral"
0x199: Call2 0xe9

0x19a: Pop(1)
0x19b: Push((int) 522138)
0x19c: @@ SetMessage(Stack[-1])
0x19d: Pop(1)
0x19e: @@ ClearReplies()
0x19f: Pop(0)
0x1a0: Push((int) 522139)
0x1a1: Push((int) -1)
0x1a2: Push((int) 23306)
0x1a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a4: Pop(3)
0x1a5: Return(); Pop(0)

0x1a6: Push((int) 23308)
0x1a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1a9: PushEmpty(string)
0x1aa: Stack[-1] = "Neutral"
0x1ab: Call2 0xe9

0x1ac: Pop(1)
0x1ad: Push((int) 522141)
0x1ae: @@ SetMessage(Stack[-1])
0x1af: Pop(1)
0x1b0: @@ ClearReplies()
0x1b1: Pop(0)
0x1b2: Push((int) 522142)
0x1b3: Push((int) 23311)
0x1b4: Push((int) 23309)
0x1b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b6: Pop(3)
0x1b7: Push((int) 522143)
0x1b8: Push((int) -1)
0x1b9: Push((int) 23310)
0x1ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bb: Pop(3)
0x1bc: Return(); Pop(0)

0x1bd: Push((int) 23311)
0x1be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1c0: PushEmpty(string)
0x1c1: Stack[-1] = "Neutral"
0x1c2: Call2 0xe9

0x1c3: Pop(1)
0x1c4: Push((int) 522144)
0x1c5: @@ SetMessage(Stack[-1])
0x1c6: Pop(1)
0x1c7: @@ ClearReplies()
0x1c8: Pop(0)
0x1c9: Push((int) 522145)
0x1ca: Push((int) 23314)
0x1cb: Push((int) 23312)
0x1cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cd: Pop(3)
0x1ce: Push((int) 522146)
0x1cf: Push((int) -1)
0x1d0: Push((int) 23313)
0x1d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d2: Pop(3)
0x1d3: Return(); Pop(0)

0x1d4: Push((int) 23314)
0x1d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1d7: PushEmpty(string)
0x1d8: Stack[-1] = "Neutral"
0x1d9: Call2 0xe9

0x1da: Pop(1)
0x1db: Push((int) 522147)
0x1dc: @@ SetMessage(Stack[-1])
0x1dd: Pop(1)
0x1de: @@ ClearReplies()
0x1df: Pop(0)
0x1e0: Push((int) 522148)
0x1e1: Push((int) 23317)
0x1e2: Push((int) 23315)
0x1e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e4: Pop(3)
0x1e5: Push((int) 522149)
0x1e6: Push((int) -1)
0x1e7: Push((int) 23316)
0x1e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e9: Pop(3)
0x1ea: Return(); Pop(0)

0x1eb: Push((int) 23317)
0x1ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1ee: PushEmpty(string)
0x1ef: Stack[-1] = "Neutral"
0x1f0: Call2 0xe9

0x1f1: Pop(1)
0x1f2: Push((int) 522150)
0x1f3: @@ SetMessage(Stack[-1])
0x1f4: Pop(1)
0x1f5: @@ ClearReplies()
0x1f6: Pop(0)
0x1f7: Push((int) 522151)
0x1f8: Push((int) 23320)
0x1f9: Push((int) 23318)
0x1fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fb: Pop(3)
0x1fc: Push((int) 522152)
0x1fd: Push((int) -1)
0x1fe: Push((int) 23319)
0x1ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x200: Pop(3)
0x201: Return(); Pop(0)

0x202: Push((int) 23320)
0x203: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x205: PushEmpty(string)
0x206: Stack[-1] = "Neutral"
0x207: Call2 0xe9

0x208: Pop(1)
0x209: Push((int) 522153)
0x20a: @@ SetMessage(Stack[-1])
0x20b: Pop(1)
0x20c: @@ ClearReplies()
0x20d: Pop(0)
0x20e: Push((int) 522154)
0x20f: Push((int) -1)
0x210: Push((int) 23321)
0x211: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x212: Pop(3)
0x213: Push((int) 522155)
0x214: Push((int) -1)
0x215: Push((int) 23322)
0x216: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x217: Pop(3)
0x218: Return(); Pop(0)

0x219: Push((int) 23325)
0x21a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x21c: PushEmpty(string)
0x21d: Stack[-1] = "Neutral"
0x21e: Call2 0xe9

0x21f: Pop(1)
0x220: Push((int) 522158)
0x221: @@ SetMessage(Stack[-1])
0x222: Pop(1)
0x223: @@ ClearReplies()
0x224: Pop(0)
0x225: Push((int) 522159)
0x226: Push((int) 23327)
0x227: Push((int) 23326)
0x228: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x229: Pop(3)
0x22a: Push((int) 522161)
0x22b: Push((int) 23997)
0x22c: Push((int) 23328)
0x22d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22e: Pop(3)
0x22f: Return(); Pop(0)

0x230: Push((int) 23997)
0x231: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x232: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x233: PushEmpty(string)
0x234: Stack[-1] = "Neutral"
0x235: Call2 0xe9

0x236: Pop(1)
0x237: Push((int) 522814)
0x238: @@ SetMessage(Stack[-1])
0x239: Pop(1)
0x23a: @@ ClearReplies()
0x23b: Pop(0)
0x23c: Push((int) 522815)
0x23d: Push((int) -1)
0x23e: Push((int) 23998)
0x23f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x240: Pop(3)
0x241: Return(); Pop(0)

0x242: Push((int) 23327)
0x243: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x244: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x245: PushEmpty(string)
0x246: Stack[-1] = "Neutral"
0x247: Call2 0xe9

0x248: Pop(1)
0x249: Push((int) 522160)
0x24a: @@ SetMessage(Stack[-1])
0x24b: Pop(1)
0x24c: @@ ClearReplies()
0x24d: Pop(0)
0x24e: Push((int) 522162)
0x24f: Push((int) 23330)
0x250: Push((int) 23329)
0x251: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x252: Pop(3)
0x253: Return(); Pop(0)

0x254: Push((int) 23330)
0x255: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x257: PushEmpty(string)
0x258: Stack[-1] = "Neutral"
0x259: Call2 0xe9

0x25a: Pop(1)
0x25b: Push((int) 522163)
0x25c: @@ SetMessage(Stack[-1])
0x25d: Pop(1)
0x25e: @@ ClearReplies()
0x25f: Pop(0)
0x260: Push((int) 522164)
0x261: Push((int) -1)
0x262: Push((int) 23331)
0x263: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x264: Pop(3)
0x265: Push((int) 522165)
0x266: Push((int) -1)
0x267: Push((int) 23332)
0x268: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x269: Pop(3)
0x26a: Return(); Pop(0)

0x26b: Push((int) 23323)
0x26c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x26e: PushEmpty(string)
0x26f: Stack[-1] = "Neutral"
0x270: Call2 0xe9

0x271: Pop(1)
0x272: Push((int) 522156)
0x273: @@ SetMessage(Stack[-1])
0x274: Pop(1)
0x275: @@ ClearReplies()
0x276: Pop(0)
0x277: Push((int) 522808)
0x278: Push((int) 23992)
0x279: Push((int) 23991)
0x27a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27b: Pop(3)
0x27c: Push((int) 522807)
0x27d: Push((int) -1)
0x27e: Push((int) 23990)
0x27f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x280: Pop(3)
0x281: Return(); Pop(0)

0x282: Push((int) 23992)
0x283: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x285: PushEmpty(string)
0x286: Stack[-1] = "Neutral"
0x287: Call2 0xe9

0x288: Pop(1)
0x289: Push((int) 522809)
0x28a: @@ SetMessage(Stack[-1])
0x28b: Pop(1)
0x28c: @@ ClearReplies()
0x28d: Pop(0)
0x28e: Push((int) 522810)
0x28f: Push((int) -1)
0x290: Push((int) 23993)
0x291: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x292: Pop(3)
0x293: Return(); Pop(0)

0x294: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x295: PushEmpty(bool)
0x296: Call2 0x44c

0x297: Pop(0)
0x298: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x299: @ lshStopAnimation()
0x29a: Pop(0)
0x29b: GOTO 0x29e

0x29c: @ StopAnimation()
0x29d: Pop(0)
0x29e: Return(); Pop(0)

0x29f: GOTO 0x100

0x2a0: Return(); Pop(0)

0x2a1: Push((bool) 1)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a3: PushEmpty(float, float)
0x2a4: Stack[-2] = (int) 300
0x2a5: Stack[-1] = (int) 100
0x2a6: Call2 0x2be

0x2a7: Pop(2)
0x2a8: Push((int) 1)
0x2a9: @ Sleep(Stack[-1])
0x2aa: Pop(1)
0x2ab: GOTO 0x2a1

0x2ac: Return(); Pop(0)

0x2ad: PushEmpty()
0x2ae: PushEmpty(int)
0x2af: Call2 0x535

0x2b0: Pop(0)
0x2b1: Push((int) 0)
0x2b2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2b3: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2b4: PushEmpty()
0x2b5: Call2 0x2ff

0x2b6: Pop(0)
0x2b7: PushEmpty(int, object)
0x2b8: Stack[-1] = Stack[-3]
0x2b9: Push(-2, 1); TaskCall(0)
0x2ba: Call2 0x0

0x2bb: Pop(-2, 1); TaskReturn
0x2bc: Pop(2)
0x2bd: Return(); Pop(0)

0x2be: PushEmpty()
0x2bf: PushEmpty(bool)
0x2c0: Call2 0x36b

0x2c1: Pop(0)
0x2c2: Pop(1); Push((bool) Stack[-1] == 0)
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c4: Return(); Pop(0)

0x2c5: Push("player")
0x2c6: @ FindActor(Stack[-4], Stack[-1])
0x2c7: Pop(1)
0x2c8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2c9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2ca: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x2cb: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x2cc: Push((int) 10)
0x2cd: Push((float)1.0)
0x2ce: @ SetTimer(Stack[-2], Stack[-1])
0x2cf: Pop(2)
0x2d0: PushEmpty()
0x2d1: Call2 0x30d

0x2d2: Pop(0)
0x2d3: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x2d4: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d5: Push((int) 10)
0x2d6: @ KillTimer(Stack[-1])
0x2d7: Pop(1)
0x2d8: Return(); Pop(0)

0x2d9: PushEmpty(float, float)
0x2da: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x2db: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dc: Stack[-3] = (bool) 0
0x2dd: Return(); Pop(2)

0x2de: PushEmpty(float, object)
0x2df: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2e0: Call2 0x363

0x2e1: Pop(1)
0x2e2: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2e3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e5: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x2e6: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x2e7: Return(); Pop(2)

0x2e8: PushEmpty()
0x2e9: Push((int) 10)
0x2ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2ec: PushEmpty(bool)
0x2ed: Call2 0x2d9

0x2ee: Pop(0)
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f2: PushEmpty(object)
0x2f3: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2f4: Call2 0x3e6

0x2f5: Pop(1)
0x2f6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2f7: GOTO 0x2fe

0x2f8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fa: Push("head")
0x2fb: @ UnlookAsync(Stack[-1])
0x2fc: Pop(1)
0x2fd: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2fe: Return(); Pop(0)

0x2ff: PushEmpty()
0x300: Call2 0x35e

0x301: Pop(0)
0x302: Push((int) 10)
0x303: @ KillTimer(Stack[-1])
0x304: Pop(1)
0x305: Push( Stack[2 + Tasks[-1].StackPointer] )
0x306: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x307: Push("head")
0x308: @ UnlookAsync(Stack[-1])
0x309: Pop(1)
0x30a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x30b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x30c: Return(); Pop(0)

0x30d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x30e: @ WaitForAnimEnd()
0x30f: Pop(0)
0x310: PushEmpty(bool)
0x311: Call2 0x36b

0x312: Pop(0)
0x313: Pop(1); Push((bool) Stack[-1] == 0)
0x314: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x315: Return(); Pop(14)

0x316: PushEmpty(int)
0x317: Call2 0x433

0x318: Stack[-8] = Stack[-1]
0x319: Pop(1)
0x31a: Stack[-6] = (int) 0
0x31b: PushEmpty(bool)
0x31c: Stack[-1] = (bool) 0
0x31d: Push((int) 5)
0x31e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x31f: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x320: PushEmpty(bool)
0x321: Call2 0x36b

0x322: Pop(0)
0x323: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x324: Stack[-1] = (bool) 1
0x325: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x326: Push((int) 3)
0x327: @ irand(Stack[-6], Stack[-1])
0x328: Pop(1)
0x329: Push((int) 0)
0x32a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x32c: Push(Stack[-7])
0x32d: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x32e: @ irand(Stack[-4], Stack[-7])
0x32f: Pop(0)
0x330: Push("all")
0x331: PushEmpty(string, int)
0x332: Stack[-1] = Stack[-7]
0x333: Call2 0x42c

0x334: Pop(1)
0x335: @ PlayAnimation(Stack[-2], Stack[-1])
0x336: Pop(2)
0x337: @ WaitForAnimEnd(Stack[-3])
0x338: Pop(0)
0x339: Pop(0); Push((bool) Stack[-3] == 0)
0x33a: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x33b: GOTO 0x359

0x33c: GOTO 0x34e

0x33d: Push((int) 1)
0x33e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x33f: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x340: Push((int) 4)
0x341: @ rand(Stack[-3], Stack[-1])
0x342: Pop(1)
0x343: Push((int) 1)
0x344: Pop(1); Push(Stack[-3] + Stack[-1]);
0x345: @ Sleep(Stack[-1], Stack[-2])
0x346: Pop(1)
0x347: Pop(0); Push((bool) Stack[-1] == 0)
0x348: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x349: GOTO 0x359

0x34a: GOTO 0x34e

0x34b: Push(Stack[-6])
0x34c: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34d: GOTO 0x359

0x34e: PushEmpty(bool)
0x34f: Call2 0x35c

0x350: Pop(0)
0x351: Pop(1); Push((bool) Stack[-1] == 0)
0x352: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x353: GOTO 0x359

0x354: @ ResetAAS()
0x355: Pop(0)
0x356: Push((int) 1)
0x357: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x358: GOTO 0x31b

0x359: @ ResetAAS()
0x35a: Pop(0)
0x35b: Return(); Pop(14)

0x35c: Stack[-1] = (bool) 1
0x35d: Return(); Pop(0)

0x35e: @ StopAnimation()
0x35f: Pop(0)
0x360: @ StopGroup0()
0x361: Pop(0)
0x362: Return(); Pop(0)

0x363: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x364: @ GetPosition(Stack[-3])
0x365: Pop(0)
0x366: @@ GetPosition(Stack[-2])
0x367: Pop(0)
0x368: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x369: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x36a: Return(); Pop(6)

0x36b: PushEmpty(bool, bool)
0x36c: @ IsLoaded(Stack[-1])
0x36d: Pop(0)
0x36e: Stack[-3] = Stack[-1]
0x36f: Return(); Pop(2)

0x370: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x371: @@ GetPosition(Stack[-8])
0x372: Pop(0)
0x373: @@ GetEyesHeight(Stack[-9])
0x374: Pop(0)
0x375: Push(CvectorIndex(Stack[-8], 1))
0x376: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x377: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x378: @ GetPosition(Stack[-7])
0x379: Pop(0)
0x37a: @ GetEyesHeight(Stack[-9])
0x37b: Pop(0)
0x37c: Push(CvectorIndex(Stack[-7], 1))
0x37d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x37e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x37f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x380: Push(CvectorIndex(Stack[-6], 1))
0x381: Stack[-1] = (int) 0
0x382: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x383: Pop(0); Push(Stack[-6] | Stack[-6]);
0x384: Pop(1); Push(Sqrt(Stack[-1]))
0x385: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x386: Stack[-5] = -Stack[-6]; Pop(0);
0x387: Pop(0); Push(Stack[-6] * Stack[-19]);
0x388: PushEmpty(cvector, cvector)
0x389: Push(CVector(0.0, 1.0, 0.0))
0x38a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x38b: Call2 0x3f8

0x38c: Pop(1)
0x38d: Push((int) 25)
0x38e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x38f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x390: Push(CVector(0.0, 10.0, 0.0))
0x391: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x392: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x393: @ IsOverrideActive(Stack[-2])
0x394: Pop(0)
0x395: Push(Stack[-2])
0x396: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x397: Stack[-21] = (bool) 0
0x398: Return(); Pop(18)

0x399: @ StopWorld()
0x39a: Pop(0)
0x39b: Push((bool) 1)
0x39c: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x39d: Pop(1)
0x39e: Push(CvectorIndex(Stack[-4], 0))
0x39f: Push(CvectorIndex(Stack[-5], 2))
0x3a0: @ Rotate(Stack[-2], Stack[-1])
0x3a1: Pop(2)
0x3a2: PushEmpty(bool)
0x3a3: Call2 0x44c

0x3a4: Pop(0)
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a6: GOTO 0x3af

0x3a7: Push("head")
0x3a8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3a9: Pop(1)
0x3aa: Push(Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ac: Push("head")
0x3ad: @ LookAsyncCamera(Stack[-1])
0x3ae: Pop(1)
0x3af: @ CameraWaitForPlayFinish()
0x3b0: Pop(0)
0x3b1: @ ResumeWorld()
0x3b2: Pop(0)
0x3b3: Stack[-21] = (bool) 1
0x3b4: Return(); Pop(18)

0x3b5: PushEmpty(bool, bool)
0x3b6: Push((bool) 1)
0x3b7: @ CameraSwitchToNormal(Stack[-1])
0x3b8: Pop(1)
0x3b9: PushEmpty(bool)
0x3ba: Call2 0x44c

0x3bb: Pop(0)
0x3bc: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bd: GOTO 0x3c6

0x3be: Push("head")
0x3bf: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3c0: Pop(1)
0x3c1: Push(Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c3: Push("head")
0x3c4: @ UnlookAsync(Stack[-1])
0x3c5: Pop(1)
0x3c6: Return(); Pop(2)

0x3c7: PushEmpty(bool, float, float, bool, float, float)
0x3c8: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3c9: Pop(0)
0x3ca: Push(Stack[-3])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3cc: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3cd: Pop(0)
0x3ce: Push((bool) 0)
0x3cf: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3d0: Pop(1)
0x3d1: GOTO 0x3d6

0x3d2: Push("Can't find lsh animation : ")
0x3d3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3d4: @ Trace(Stack[-1])
0x3d5: Pop(1)
0x3d6: Return(); Pop(6)

0x3d7: PushEmpty(bool, float, float, bool, float, float)
0x3d8: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3d9: Pop(0)
0x3da: Push(Stack[-3])
0x3db: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3dc: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3dd: Pop(0)
0x3de: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3df: Pop(0)
0x3e0: GOTO 0x3e5

0x3e1: Push("Can't find lsh animation : ")
0x3e2: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3e3: @ Trace(Stack[-1])
0x3e4: Pop(1)
0x3e5: Return(); Pop(6)

0x3e6: PushEmpty(float, cvector, float, cvector)
0x3e7: @@ GetEyesHeight(Stack[-2])
0x3e8: Pop(0)
0x3e9: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x3ea: Push(CvectorIndex(Stack[-1], 1))
0x3eb: Stack[-1] = Stack[-3]
0x3ec: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3ed: Push("head")
0x3ee: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x3ef: Pop(1)
0x3f0: Return(); Pop(4)

0x3f1: PushEmpty(bool)
0x3f2: Call2 0x44c

0x3f3: Pop(0)
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f5: @ lshStopSpeech()
0x3f6: Pop(0)
0x3f7: Return(); Pop(0)

0x3f8: PushEmpty(float, float)
0x3f9: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3fa: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3fb: Push((float)0.0)
0x3fc: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3fd: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fe: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3ff: Return(); Pop(2)

0x400: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x401: Return(); Pop(2)

0x402: PushEmpty(int, int)
0x403: @ GetVariable(Stack[-3], Stack[-1])
0x404: Pop(0)
0x405: Stack[-4] = Stack[-1]
0x406: Return(); Pop(2)

0x407: PushEmpty(object, object)
0x408: @ FindActor(Stack[-1], Stack[-4])
0x409: Pop(0)
0x40a: Pop(0); Push((bool) Stack[-1] == 0)
0x40b: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x40c: Push("Door ")
0x40d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x40e: Push(" not found")
0x40f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x410: @ Trace(Stack[-1])
0x411: Pop(1)
0x412: GOTO 0x416

0x413: Push("locked")
0x414: @@ SetProperty(Stack[-1], Stack[-4])
0x415: Pop(1)
0x416: Return(); Pop(2)

0x417: Stack[-1] = 0
0x418: PushEmpty(object, object)
0x419: @ FindActor(Stack[-1], Stack[-4])
0x41a: Pop(0)
0x41b: Pop(0); Push((bool) Stack[-1] == 0)
0x41c: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41d: Stack[-5] = (bool) 0
0x41e: Return(); Pop(2)

0x41f: @ Trigger(Stack[-1], Stack[-3])
0x420: Pop(0)
0x421: Stack[-5] = (bool) 1
0x422: Return(); Pop(2)

0x423: Stack[-1] = 0
0x424: PushEmpty(float, float)
0x425: @ GetGameTime(Stack[-1])
0x426: Pop(0)
0x427: PushEmpty(int)
0x428: Stack[-1] = Stack[-2]
0x429: Push((int) 24)
0x42a: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x42b: Return(); Pop(2)

0x42c: PushEmpty(string, string)
0x42d: Stack[-1] = "idle"
0x42e: Push(Stack[-3])
0x42f: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x430: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x431: Stack[-4] = Stack[-1]
0x432: Return(); Pop(2)

0x433: PushEmpty(int, bool, int, bool)
0x434: Stack[-2] = (int) 0
0x435: Push("all")
0x436: PushEmpty(string, int)
0x437: Stack[-1] = Stack[-5]
0x438: Call2 0x42c

0x439: Pop(1)
0x43a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x43b: Pop(2)
0x43c: Pop(0); Push((bool) Stack[-1] == 0)
0x43d: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43e: GOTO 0x442

0x43f: Push((int) 1)
0x440: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x441: GOTO 0x435

0x442: Stack[-5] = Stack[-2]
0x443: Return(); Pop(4)

0x444: Stack[-1] = (int) 515571
0x445: Return(); Pop(0)

0x446: Stack[-1] = (int) 504029
0x447: Return(); Pop(0)

0x448: Stack[-1] = "ui/NPC_bmask.png"
0x449: Return(); Pop(0)

0x44a: Stack[-1] = "ui/NPC_bmask_b.png"
0x44b: Return(); Pop(0)

0x44c: Stack[-1] = (bool) 0
0x44d: Return(); Pop(0)

0x44e: PushEmpty()
0x44f: Push("oob12BirdmaskS1")
0x450: Push((int) 1)
0x451: @ SetVariable(Stack[-2], Stack[-1])
0x452: Pop(2)
0x453: Return(); Pop(0)

0x454: PushEmpty()
0x455: PushEmpty(bool, string, string)
0x456: Stack[-2] = "quest_b12_01"
0x457: Stack[-1] = "init_sobor"
0x458: Call2 0x418

0x459: Pop(3)
0x45a: Return(); Pop(0)

0x45b: PushEmpty()
0x45c: Push("oob12BirdmaskS2")
0x45d: Push((int) 1)
0x45e: @ SetVariable(Stack[-2], Stack[-1])
0x45f: Pop(2)
0x460: Return(); Pop(0)

0x461: PushEmpty()
0x462: Push("oob12BirdmaskS3")
0x463: Push((int) 1)
0x464: @ SetVariable(Stack[-2], Stack[-1])
0x465: Pop(2)
0x466: Return(); Pop(0)

0x467: PushEmpty()
0x468: Push("oob12BirdmaskS4")
0x469: Push((int) 1)
0x46a: @ SetVariable(Stack[-2], Stack[-1])
0x46b: Pop(2)
0x46c: Return(); Pop(0)

0x46d: PushEmpty()
0x46e: PushEmpty(string, bool)
0x46f: Stack[-2] = "sobor@door1"
0x470: Stack[-1] = (bool) 0
0x471: Call2 0x407

0x472: Pop(2)
0x473: Return(); Pop(0)

0x474: PushEmpty()
0x475: PushEmpty(bool, object)
0x476: Stack[-1] = Stack[-3]
0x477: Call2 0x4b8

0x478: Pop(1)
0x479: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47a: Stack[-2] = (bool) 1
0x47b: Return(); Pop(0)

0x47c: Stack[-2] = (bool) 0
0x47d: Return(); Pop(0)

0x47e: PushEmpty()
0x47f: PushEmpty(bool, object)
0x480: Stack[-1] = Stack[-3]
0x481: Call2 0x4be

0x482: Pop(1)
0x483: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x484: Stack[-2] = (bool) 1
0x485: Return(); Pop(0)

0x486: Stack[-2] = (bool) 0
0x487: Return(); Pop(0)

0x488: PushEmpty()
0x489: PushEmpty(int, string)
0x48a: Stack[-1] = "oob12BirdmaskS1"
0x48b: Call2 0x402

0x48c: Pop(1)
0x48d: Push((int) 0)
0x48e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x48f: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x490: Stack[-2] = (bool) 1
0x491: Return(); Pop(0)

0x492: Stack[-2] = (bool) 0
0x493: Return(); Pop(0)

0x494: PushEmpty()
0x495: PushEmpty(int, string)
0x496: Stack[-1] = "oob12BirdmaskS2"
0x497: Call2 0x402

0x498: Pop(1)
0x499: Push((int) 0)
0x49a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x49b: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x49c: Stack[-2] = (bool) 1
0x49d: Return(); Pop(0)

0x49e: Stack[-2] = (bool) 0
0x49f: Return(); Pop(0)

0x4a0: PushEmpty()
0x4a1: PushEmpty(int, string)
0x4a2: Stack[-1] = "oob12BirdmaskS3"
0x4a3: Call2 0x402

0x4a4: Pop(1)
0x4a5: Push((int) 0)
0x4a6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4a7: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a8: Stack[-2] = (bool) 1
0x4a9: Return(); Pop(0)

0x4aa: Stack[-2] = (bool) 0
0x4ab: Return(); Pop(0)

0x4ac: PushEmpty()
0x4ad: PushEmpty(int, string)
0x4ae: Stack[-1] = "oob12BirdmaskS4"
0x4af: Call2 0x402

0x4b0: Pop(1)
0x4b1: Push((int) 0)
0x4b2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b4: Stack[-2] = (bool) 1
0x4b5: Return(); Pop(0)

0x4b6: Stack[-2] = (bool) 0
0x4b7: Return(); Pop(0)

0x4b8: PushEmpty()
0x4b9: PushEmpty(bool)
0x4ba: Call2 0x50f

0x4bb: Stack[-3] = Stack[-1]
0x4bc: Pop(1)
0x4bd: Return(); Pop(0)

0x4be: PushEmpty()
0x4bf: PushEmpty(int)
0x4c0: Call2 0x424

0x4c1: Pop(0)
0x4c2: Push((int) 19)
0x4c3: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c5: Stack[-2] = (bool) 1
0x4c6: Return(); Pop(0)

0x4c7: Stack[-2] = (bool) 0
0x4c8: Return(); Pop(0)

0x4c9: PushEmpty(int, int)
0x4ca: Push("branch")
0x4cb: @ GetVariable(Stack[-1], Stack[-2])
0x4cc: Pop(1)
0x4cd: Push((int) 0)
0x4ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4d0: Stack[-3] = (int) 1
0x4d1: Return(); Pop(2)

0x4d2: GOTO 0x4d8

0x4d3: Push((int) 1)
0x4d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d6: Stack[-3] = (int) 2
0x4d7: Return(); Pop(2)

0x4d8: Stack[-3] = (int) 3
0x4d9: Return(); Pop(2)

0x4da: PushEmpty()
0x4db: Push((int) 18)
0x4dc: @@ add(Stack[-1])
0x4dd: Pop(1)
0x4de: Push((int) 24)
0x4df: @@ add(Stack[-1])
0x4e0: Pop(1)
0x4e1: Push((int) 20)
0x4e2: @@ add(Stack[-1])
0x4e3: Pop(1)
0x4e4: Push((int) 14)
0x4e5: @@ add(Stack[-1])
0x4e6: Pop(1)
0x4e7: Push((bool) 0)
0x4e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e9: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4ea: Push((int) 10)
0x4eb: @@ add(Stack[-1])
0x4ec: Pop(1)
0x4ed: Push((int) 17)
0x4ee: @@ add(Stack[-1])
0x4ef: Pop(1)
0x4f0: Push((int) 8)
0x4f1: @@ add(Stack[-1])
0x4f2: Pop(1)
0x4f3: GOTO 0x4fa

0x4f4: Push((int) 1)
0x4f5: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4f6: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f7: Push((int) 10)
0x4f8: @@ add(Stack[-1])
0x4f9: Pop(1)
0x4fa: Return(); Pop(0)

0x4fb: PushEmpty(int, int)
0x4fc: Push("vol_")
0x4fd: Pop(1); Push(Stack[-1] + Stack[-4]);
0x4fe: @ GetVariable(Stack[-1], Stack[-2])
0x4ff: Pop(1)
0x500: Push((int) 4)
0x501: Pop(1); Push(Stack[-2] & Stack[-1]);
0x502: Push((int) 0)
0x503: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x504: Return(); Pop(2)

0x505: PushEmpty(int, int)
0x506: Push("vol_")
0x507: Pop(1); Push(Stack[-1] + Stack[-4]);
0x508: @ GetVariable(Stack[-1], Stack[-2])
0x509: Pop(1)
0x50a: Push((int) 16)
0x50b: Pop(1); Push(Stack[-2] & Stack[-1]);
0x50c: Push((int) 0)
0x50d: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x50e: Return(); Pop(2)

0x50f: PushEmpty(object, int, int, int, object, int, int, int)
0x510: @ CreateIntVector(Stack[-4])
0x511: Pop(0)
0x512: PushEmpty(object, bool, int)
0x513: Stack[-3] = Stack[-7]
0x514: Stack[-2] = (bool) 0
0x515: Stack[-1] = (int) -1
0x516: Call2 0x4da

0x517: Pop(3)
0x518: @@ size(Stack[-3])
0x519: Pop(0)
0x51a: Stack[-2] = (int) 0
0x51b: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x51c: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x51d: @@ get(Stack[-1], Stack[-2])
0x51e: Pop(0)
0x51f: PushEmpty(bool)
0x520: Stack[-1] = (bool) 1
0x521: PushEmpty(bool, int)
0x522: Stack[-1] = Stack[-4]
0x523: Call2 0x505

0x524: Pop(1)
0x525: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x526: PushEmpty(bool, int)
0x527: Stack[-1] = Stack[-4]
0x528: Call2 0x4fb

0x529: Pop(1)
0x52a: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x52b: Stack[-1] = (bool) 0
0x52c: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x52d: Stack[-9] = (bool) 0
0x52e: Return(); Pop(8)

0x52f: Push((int) 1)
0x530: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x531: GOTO 0x51b

0x532: Stack[-9] = (bool) 1
0x533: Return(); Pop(8)

0x534: Stack[-4] = 0
0x535: PushEmpty(int, int)
0x536: Push("game_final")
0x537: @ GetVariable(Stack[-1], Stack[-2])
0x538: Pop(1)
0x539: Stack[-3] = Stack[-1]
0x53a: Return(); Pop(2)

