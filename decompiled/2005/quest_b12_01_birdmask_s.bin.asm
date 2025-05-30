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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateIntVector (1 args)

RunOp = 0x271
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf5 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x27d Vars = (object)
		EVENT_7 Op = 0x2b8 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x340

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x414

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x412

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x416

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x418

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x485

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
0x41: Call2 0x384

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
0x4f: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x43c

0x53: Pop(1)
0x54: Pop(1); Push((bool) Stack[-1] == 0)
0x55: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x56: PushEmpty(string)
0x57: Stack[-1] = "Neutral"
0x58: Call2 0xdf

0x59: Pop(1)
0x5a: Push((int) 522134)
0x5b: @@ SetMessage(Stack[-1])
0x5c: Pop(1)
0x5d: @@ ClearReplies()
0x5e: Pop(0)
0x5f: PushEmpty(bool, object)
0x60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61: Call2 0x45c

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x64: Push((int) 522135)
0x65: Push((int) 23323)
0x66: Push((int) 23302)
0x67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68: Pop(3)
0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call2 0x468

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
0x78: GOTO 0xc1

0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x446

0x7c: Pop(1)
0x7d: Pop(1); Push((bool) Stack[-1] == 0)
0x7e: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x7f: PushEmpty(string)
0x80: Stack[-1] = "Neutral"
0x81: Call2 0xdf

0x82: Pop(1)
0x83: Push((int) 522130)
0x84: @@ SetMessage(Stack[-1])
0x85: Pop(1)
0x86: @@ ClearReplies()
0x87: Pop(0)
0x88: Push((int) 522140)
0x89: Push((int) -1)
0x8a: Push((int) 23307)
0x8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c: Pop(3)
0x8d: GOTO 0xc1

0x8e: PushEmpty(bool)
0x8f: Stack[-1] = (bool) 0
0x90: PushEmpty(bool, object)
0x91: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x92: Call2 0x450

0x93: Pop(1)
0x94: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x95: PushEmpty(bool, object)
0x96: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97: Call2 0x43c

0x98: Pop(1)
0x99: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x9a: Stack[-1] = (bool) 1
0x9b: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0x9c: PushEmpty(object, object)
0x9d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9f: Call2 0x41c

0xa0: Pop(2)
0xa1: PushEmpty(string)
0xa2: Stack[-1] = "Neutral"
0xa3: Call2 0xdf

0xa4: Pop(1)
0xa5: Push((int) 522136)
0xa6: @@ SetMessage(Stack[-1])
0xa7: Pop(1)
0xa8: @@ ClearReplies()
0xa9: Pop(0)
0xaa: Push((int) 522137)
0xab: Push((int) -1)
0xac: Push((int) 23304)
0xad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae: Pop(3)
0xaf: GOTO 0xc1

0xb0: PushEmpty(string)
0xb1: Stack[-1] = "Neutral"
0xb2: Call2 0xdf

0xb3: Pop(1)
0xb4: Push((int) 522138)
0xb5: @@ SetMessage(Stack[-1])
0xb6: Pop(1)
0xb7: @@ ClearReplies()
0xb8: Pop(0)
0xb9: Push((int) 522139)
0xba: Push((int) -1)
0xbb: Push((int) 23306)
0xbc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd: Pop(3)
0xbe: GOTO 0xc1

0xbf: Return(); Pop(0)

0xc0: GOTO 0x4e

0xc1: PushEmpty(bool)
0xc2: Call2 0x41a

0xc3: Pop(0)
0xc4: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xc5: @ lshWaitForAnimEnd()
0xc6: Pop(0)
0xc7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc8: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc9: GOTO 0xcf

0xca: PushEmpty(string)
0xcb: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xcc: Call2 0x395

0xcd: Pop(1)
0xce: GOTO 0xc5

0xcf: GOTO 0xde

0xd0: Push("all")
0xd1: Push("idle")
0xd2: @ PlayAnimation(Stack[-2], Stack[-1])
0xd3: Pop(2)
0xd4: @ WaitForAnimEnd()
0xd5: Pop(0)
0xd6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd7: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd8: GOTO 0xde

0xd9: Push("all")
0xda: Push("idle")
0xdb: @ PlayAnimation(Stack[-2], Stack[-1])
0xdc: Pop(2)
0xdd: GOTO 0xd4

0xde: Return(); Pop(0)

0xdf: PushEmpty()
0xe0: PushEmpty(bool)
0xe1: Call2 0x41a

0xe2: Pop(0)
0xe3: Pop(1); Push((bool) Stack[-1] == 0)
0xe4: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe5: Return(); Pop(0)

0xe6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe7: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe8: Return(); Pop(0)

0xe9: PushEmpty(string, bool)
0xea: Stack[-2] = Stack[-3]
0xeb: Push("")
0xec: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xee: Stack[-1] = (bool) 0
0xef: GOTO 0xf1

0xf0: Stack[-1] = (bool) 1
0xf1: Call2 0x3a5

0xf2: Pop(2)
0xf3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf4: Return(); Pop(0)

0xf5: PushEmpty()
0xf6: Push((int) 1)
0xf7: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0xf8: PushEmpty()
0xf9: Call2 0x3bf

0xfa: Pop(0)
0xfb: Push((int) 23302)
0xfc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xfe: PushEmpty(object, object)
0xff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x100: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101: Call2 0x429

0x102: Pop(2)
0x103: Push((int) 23324)
0x104: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x106: PushEmpty(object, object)
0x107: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x108: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x109: Call2 0x42f

0x10a: Pop(2)
0x10b: Push((int) 23304)
0x10c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call2 0x435

0x112: Pop(2)
0x113: PushEmpty(object, object)
0x114: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x115: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x116: Call2 0x422

0x117: Pop(2)
0x118: Push((int) 23301)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x11b: PushEmpty(bool, object)
0x11c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Call2 0x43c

0x11e: Pop(1)
0x11f: Pop(1); Push((bool) Stack[-1] == 0)
0x120: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x121: PushEmpty(string)
0x122: Stack[-1] = "Neutral"
0x123: Call2 0xdf

0x124: Pop(1)
0x125: Push((int) 522134)
0x126: @@ SetMessage(Stack[-1])
0x127: Pop(1)
0x128: @@ ClearReplies()
0x129: Pop(0)
0x12a: PushEmpty(bool, object)
0x12b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Call2 0x45c

0x12d: Pop(1)
0x12e: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x12f: Push((int) 522135)
0x130: Push((int) 23323)
0x131: Push((int) 23302)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: PushEmpty(bool, object)
0x135: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x136: Call2 0x468

0x137: Pop(1)
0x138: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x139: Push((int) 522157)
0x13a: Push((int) 23325)
0x13b: Push((int) 23324)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: Push((int) 522166)
0x13f: Push((int) -1)
0x140: Push((int) 23333)
0x141: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142: Pop(3)
0x143: Return(); Pop(0)

0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x146: Call2 0x446

0x147: Pop(1)
0x148: Pop(1); Push((bool) Stack[-1] == 0)
0x149: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x14a: PushEmpty(string)
0x14b: Stack[-1] = "Neutral"
0x14c: Call2 0xdf

0x14d: Pop(1)
0x14e: Push((int) 522130)
0x14f: @@ SetMessage(Stack[-1])
0x150: Pop(1)
0x151: @@ ClearReplies()
0x152: Pop(0)
0x153: Push((int) 522140)
0x154: Push((int) -1)
0x155: Push((int) 23307)
0x156: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x157: Pop(3)
0x158: Return(); Pop(0)

0x159: PushEmpty(bool)
0x15a: Stack[-1] = (bool) 0
0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call2 0x450

0x15e: Pop(1)
0x15f: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x160: PushEmpty(bool, object)
0x161: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x162: Call2 0x43c

0x163: Pop(1)
0x164: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x165: Stack[-1] = (bool) 1
0x166: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x167: PushEmpty(object, object)
0x168: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x169: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16a: Call2 0x41c

0x16b: Pop(2)
0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Neutral"
0x16e: Call2 0xdf

0x16f: Pop(1)
0x170: Push((int) 522136)
0x171: @@ SetMessage(Stack[-1])
0x172: Pop(1)
0x173: @@ ClearReplies()
0x174: Pop(0)
0x175: Push((int) 522137)
0x176: Push((int) -1)
0x177: Push((int) 23304)
0x178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: Return(); Pop(0)

0x17b: PushEmpty(string)
0x17c: Stack[-1] = "Neutral"
0x17d: Call2 0xdf

0x17e: Pop(1)
0x17f: Push((int) 522138)
0x180: @@ SetMessage(Stack[-1])
0x181: Pop(1)
0x182: @@ ClearReplies()
0x183: Pop(0)
0x184: Push((int) 522139)
0x185: Push((int) -1)
0x186: Push((int) 23306)
0x187: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x188: Pop(3)
0x189: Return(); Pop(0)

0x18a: Push((int) 23308)
0x18b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18d: Push((int) 23311)
0x18e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Neutral"
0x192: Call2 0xdf

0x193: Pop(1)
0x194: Push((int) 522144)
0x195: @@ SetMessage(Stack[-1])
0x196: Pop(1)
0x197: @@ ClearReplies()
0x198: Pop(0)
0x199: Push((int) 522145)
0x19a: Push((int) 23314)
0x19b: Push((int) 23312)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: Push((int) 522146)
0x19f: Push((int) -1)
0x1a0: Push((int) 23313)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 23314)
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = "Neutral"
0x1a9: Call2 0xdf

0x1aa: Pop(1)
0x1ab: Push((int) 522147)
0x1ac: @@ SetMessage(Stack[-1])
0x1ad: Pop(1)
0x1ae: @@ ClearReplies()
0x1af: Pop(0)
0x1b0: Push((int) 522148)
0x1b1: Push((int) 23317)
0x1b2: Push((int) 23315)
0x1b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4: Pop(3)
0x1b5: Push((int) 522149)
0x1b6: Push((int) -1)
0x1b7: Push((int) 23316)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: Return(); Pop(0)

0x1bb: Push((int) 23317)
0x1bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1be: PushEmpty(string)
0x1bf: Stack[-1] = "Neutral"
0x1c0: Call2 0xdf

0x1c1: Pop(1)
0x1c2: Push((int) 522150)
0x1c3: @@ SetMessage(Stack[-1])
0x1c4: Pop(1)
0x1c5: @@ ClearReplies()
0x1c6: Pop(0)
0x1c7: Push((int) 522151)
0x1c8: Push((int) 23320)
0x1c9: Push((int) 23318)
0x1ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cb: Pop(3)
0x1cc: Push((int) 522152)
0x1cd: Push((int) -1)
0x1ce: Push((int) 23319)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: Return(); Pop(0)

0x1d2: Push((int) 23320)
0x1d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1d5: PushEmpty(string)
0x1d6: Stack[-1] = "Neutral"
0x1d7: Call2 0xdf

0x1d8: Pop(1)
0x1d9: Push((int) 522153)
0x1da: @@ SetMessage(Stack[-1])
0x1db: Pop(1)
0x1dc: @@ ClearReplies()
0x1dd: Pop(0)
0x1de: Push((int) 522154)
0x1df: Push((int) -1)
0x1e0: Push((int) 23321)
0x1e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e2: Pop(3)
0x1e3: Push((int) 522155)
0x1e4: Push((int) -1)
0x1e5: Push((int) 23322)
0x1e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e7: Pop(3)
0x1e8: Return(); Pop(0)

0x1e9: Push((int) 23325)
0x1ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ec: PushEmpty(string)
0x1ed: Stack[-1] = "Neutral"
0x1ee: Call2 0xdf

0x1ef: Pop(1)
0x1f0: Push((int) 522158)
0x1f1: @@ SetMessage(Stack[-1])
0x1f2: Pop(1)
0x1f3: @@ ClearReplies()
0x1f4: Pop(0)
0x1f5: Push((int) 522159)
0x1f6: Push((int) 23327)
0x1f7: Push((int) 23326)
0x1f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f9: Pop(3)
0x1fa: Push((int) 522161)
0x1fb: Push((int) 23997)
0x1fc: Push((int) 23328)
0x1fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fe: Pop(3)
0x1ff: Return(); Pop(0)

0x200: Push((int) 23997)
0x201: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x203: PushEmpty(string)
0x204: Stack[-1] = "Neutral"
0x205: Call2 0xdf

0x206: Pop(1)
0x207: Push((int) 522814)
0x208: @@ SetMessage(Stack[-1])
0x209: Pop(1)
0x20a: @@ ClearReplies()
0x20b: Pop(0)
0x20c: Push((int) 522815)
0x20d: Push((int) -1)
0x20e: Push((int) 23998)
0x20f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x210: Pop(3)
0x211: Return(); Pop(0)

0x212: Push((int) 23327)
0x213: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x215: PushEmpty(string)
0x216: Stack[-1] = "Neutral"
0x217: Call2 0xdf

0x218: Pop(1)
0x219: Push((int) 522160)
0x21a: @@ SetMessage(Stack[-1])
0x21b: Pop(1)
0x21c: @@ ClearReplies()
0x21d: Pop(0)
0x21e: Push((int) 522162)
0x21f: Push((int) 23330)
0x220: Push((int) 23329)
0x221: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x222: Pop(3)
0x223: Return(); Pop(0)

0x224: Push((int) 23330)
0x225: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x226: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x227: PushEmpty(string)
0x228: Stack[-1] = "Neutral"
0x229: Call2 0xdf

0x22a: Pop(1)
0x22b: Push((int) 522163)
0x22c: @@ SetMessage(Stack[-1])
0x22d: Pop(1)
0x22e: @@ ClearReplies()
0x22f: Pop(0)
0x230: Push((int) 522164)
0x231: Push((int) -1)
0x232: Push((int) 23331)
0x233: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x234: Pop(3)
0x235: Push((int) 522165)
0x236: Push((int) -1)
0x237: Push((int) 23332)
0x238: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x239: Pop(3)
0x23a: Return(); Pop(0)

0x23b: Push((int) 23323)
0x23c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x23e: PushEmpty(string)
0x23f: Stack[-1] = "Neutral"
0x240: Call2 0xdf

0x241: Pop(1)
0x242: Push((int) 522156)
0x243: @@ SetMessage(Stack[-1])
0x244: Pop(1)
0x245: @@ ClearReplies()
0x246: Pop(0)
0x247: Push((int) 522808)
0x248: Push((int) 23992)
0x249: Push((int) 23991)
0x24a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24b: Pop(3)
0x24c: Push((int) 522807)
0x24d: Push((int) -1)
0x24e: Push((int) 23990)
0x24f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x250: Pop(3)
0x251: Return(); Pop(0)

0x252: Push((int) 23992)
0x253: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x255: PushEmpty(string)
0x256: Stack[-1] = "Neutral"
0x257: Call2 0xdf

0x258: Pop(1)
0x259: Push((int) 522809)
0x25a: @@ SetMessage(Stack[-1])
0x25b: Pop(1)
0x25c: @@ ClearReplies()
0x25d: Pop(0)
0x25e: Push((int) 522810)
0x25f: Push((int) -1)
0x260: Push((int) 23993)
0x261: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x262: Pop(3)
0x263: Return(); Pop(0)

0x264: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x265: PushEmpty(bool)
0x266: Call2 0x41a

0x267: Pop(0)
0x268: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x269: @ lshStopAnimation()
0x26a: Pop(0)
0x26b: GOTO 0x26e

0x26c: @ StopAnimation()
0x26d: Pop(0)
0x26e: Return(); Pop(0)

0x26f: GOTO 0xf6

0x270: Return(); Pop(0)

0x271: Push((bool) 1)
0x272: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x273: PushEmpty(float, float)
0x274: Stack[-2] = (int) 300
0x275: Stack[-1] = (int) 100
0x276: Call2 0x28e

0x277: Pop(2)
0x278: Push((int) 1)
0x279: @ Sleep(Stack[-1])
0x27a: Pop(1)
0x27b: GOTO 0x271

0x27c: Return(); Pop(0)

0x27d: PushEmpty()
0x27e: PushEmpty(int)
0x27f: Call2 0x4f1

0x280: Pop(0)
0x281: Push((int) 0)
0x282: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x283: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x284: PushEmpty()
0x285: Call2 0x2cf

0x286: Pop(0)
0x287: PushEmpty(int, object)
0x288: Stack[-1] = Stack[-3]
0x289: Push(-2, 1); TaskCall(0)
0x28a: Call2 0x0

0x28b: Pop(-2, 1); TaskReturn
0x28c: Pop(2)
0x28d: Return(); Pop(0)

0x28e: PushEmpty()
0x28f: PushEmpty(bool)
0x290: Call2 0x33b

0x291: Pop(0)
0x292: Pop(1); Push((bool) Stack[-1] == 0)
0x293: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x294: Return(); Pop(0)

0x295: Push("player")
0x296: @ FindActor(Stack[-4], Stack[-1])
0x297: Pop(1)
0x298: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x299: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x29a: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x29b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x29c: Push((int) 10)
0x29d: Push((float)1.0)
0x29e: @ SetTimer(Stack[-2], Stack[-1])
0x29f: Pop(2)
0x2a0: PushEmpty()
0x2a1: Call2 0x2dd

0x2a2: Pop(0)
0x2a3: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a5: Push((int) 10)
0x2a6: @ KillTimer(Stack[-1])
0x2a7: Pop(1)
0x2a8: Return(); Pop(0)

0x2a9: PushEmpty(float, float)
0x2aa: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ac: Stack[-3] = (bool) 0
0x2ad: Return(); Pop(2)

0x2ae: PushEmpty(float, object)
0x2af: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2b0: Call2 0x333

0x2b1: Pop(1)
0x2b2: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2b3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b5: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x2b6: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x2b7: Return(); Pop(2)

0x2b8: PushEmpty()
0x2b9: Push((int) 10)
0x2ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2bc: PushEmpty(bool)
0x2bd: Call2 0x2a9

0x2be: Pop(0)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c2: PushEmpty(object)
0x2c3: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2c4: Call2 0x3b4

0x2c5: Pop(1)
0x2c6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2c7: GOTO 0x2ce

0x2c8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2c9: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2ca: Push("head")
0x2cb: @ UnlookAsync(Stack[-1])
0x2cc: Pop(1)
0x2cd: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2ce: Return(); Pop(0)

0x2cf: PushEmpty()
0x2d0: Call2 0x32e

0x2d1: Pop(0)
0x2d2: Push((int) 10)
0x2d3: @ KillTimer(Stack[-1])
0x2d4: Pop(1)
0x2d5: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2d6: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d7: Push("head")
0x2d8: @ UnlookAsync(Stack[-1])
0x2d9: Pop(1)
0x2da: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2db: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2dc: Return(); Pop(0)

0x2dd: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2de: @ WaitForAnimEnd()
0x2df: Pop(0)
0x2e0: PushEmpty(bool)
0x2e1: Call2 0x33b

0x2e2: Pop(0)
0x2e3: Pop(1); Push((bool) Stack[-1] == 0)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e5: Return(); Pop(14)

0x2e6: PushEmpty(int)
0x2e7: Call2 0x401

0x2e8: Stack[-8] = Stack[-1]
0x2e9: Pop(1)
0x2ea: Stack[-6] = (int) 0
0x2eb: PushEmpty(bool)
0x2ec: Stack[-1] = (bool) 0
0x2ed: Push((int) 5)
0x2ee: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f0: PushEmpty(bool)
0x2f1: Call2 0x33b

0x2f2: Pop(0)
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f4: Stack[-1] = (bool) 1
0x2f5: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x2f6: Push((int) 3)
0x2f7: @ irand(Stack[-6], Stack[-1])
0x2f8: Pop(1)
0x2f9: Push((int) 0)
0x2fa: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2fb: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x2fc: Push(Stack[-7])
0x2fd: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x2fe: @ irand(Stack[-4], Stack[-7])
0x2ff: Pop(0)
0x300: Push("all")
0x301: PushEmpty(string, int)
0x302: Stack[-1] = Stack[-7]
0x303: Call2 0x3fa

0x304: Pop(1)
0x305: @ PlayAnimation(Stack[-2], Stack[-1])
0x306: Pop(2)
0x307: @ WaitForAnimEnd(Stack[-3])
0x308: Pop(0)
0x309: Pop(0); Push((bool) Stack[-3] == 0)
0x30a: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30b: GOTO 0x329

0x30c: GOTO 0x31e

0x30d: Push((int) 1)
0x30e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x310: Push((int) 4)
0x311: @ rand(Stack[-3], Stack[-1])
0x312: Pop(1)
0x313: Push((int) 1)
0x314: Pop(1); Push(Stack[-3] + Stack[-1]);
0x315: @ Sleep(Stack[-1], Stack[-2])
0x316: Pop(1)
0x317: Pop(0); Push((bool) Stack[-1] == 0)
0x318: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x319: GOTO 0x329

0x31a: GOTO 0x31e

0x31b: Push(Stack[-6])
0x31c: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31d: GOTO 0x329

0x31e: PushEmpty(bool)
0x31f: Call2 0x32c

0x320: Pop(0)
0x321: Pop(1); Push((bool) Stack[-1] == 0)
0x322: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x323: GOTO 0x329

0x324: @ ResetAAS()
0x325: Pop(0)
0x326: Push((int) 1)
0x327: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x328: GOTO 0x2eb

0x329: @ ResetAAS()
0x32a: Pop(0)
0x32b: Return(); Pop(14)

0x32c: Stack[-1] = (bool) 1
0x32d: Return(); Pop(0)

0x32e: @ StopAnimation()
0x32f: Pop(0)
0x330: @ StopGroup0()
0x331: Pop(0)
0x332: Return(); Pop(0)

0x333: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x334: @ GetPosition(Stack[-3])
0x335: Pop(0)
0x336: @@ GetPosition(Stack[-2])
0x337: Pop(0)
0x338: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x339: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x33a: Return(); Pop(6)

0x33b: PushEmpty(bool, bool)
0x33c: @ IsLoaded(Stack[-1])
0x33d: Pop(0)
0x33e: Stack[-3] = Stack[-1]
0x33f: Return(); Pop(2)

0x340: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x341: @@ GetPosition(Stack[-8])
0x342: Pop(0)
0x343: @@ GetEyesHeight(Stack[-9])
0x344: Pop(0)
0x345: Push(CvectorIndex(Stack[-8], 1))
0x346: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x347: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x348: @ GetPosition(Stack[-7])
0x349: Pop(0)
0x34a: @ GetEyesHeight(Stack[-9])
0x34b: Pop(0)
0x34c: Push(CvectorIndex(Stack[-7], 1))
0x34d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x34e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x34f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x350: Push(CvectorIndex(Stack[-6], 1))
0x351: Stack[-1] = (int) 0
0x352: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x353: Pop(0); Push(Stack[-6] | Stack[-6]);
0x354: Pop(1); Push(Sqrt(Stack[-1]))
0x355: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x356: Stack[-5] = -Stack[-6]; Pop(0);
0x357: Pop(0); Push(Stack[-6] * Stack[-19]);
0x358: PushEmpty(cvector, cvector)
0x359: Push(CVector(0.0, 1.0, 0.0))
0x35a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x35b: Call2 0x3c6

0x35c: Pop(1)
0x35d: Push((int) 25)
0x35e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x35f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x360: Push(CVector(0.0, 10.0, 0.0))
0x361: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x362: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x363: @ IsOverrideActive(Stack[-2])
0x364: Pop(0)
0x365: Push(Stack[-2])
0x366: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x367: Stack[-21] = (bool) 0
0x368: Return(); Pop(18)

0x369: @ StopWorld()
0x36a: Pop(0)
0x36b: @ CameraTransit(Stack[-3], Stack[-5])
0x36c: Pop(0)
0x36d: Push(CvectorIndex(Stack[-4], 0))
0x36e: Push(CvectorIndex(Stack[-5], 2))
0x36f: @ Rotate(Stack[-2], Stack[-1])
0x370: Pop(2)
0x371: PushEmpty(bool)
0x372: Call2 0x41a

0x373: Pop(0)
0x374: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x375: GOTO 0x37e

0x376: Push("head")
0x377: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x378: Pop(1)
0x379: Push(Stack[-1])
0x37a: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37b: Push("head")
0x37c: @ LookAsyncCamera(Stack[-1])
0x37d: Pop(1)
0x37e: @ CameraWaitForPlayFinish()
0x37f: Pop(0)
0x380: @ ResumeWorld()
0x381: Pop(0)
0x382: Stack[-21] = (bool) 1
0x383: Return(); Pop(18)

0x384: PushEmpty(bool, bool)
0x385: @ CameraSwitchToNormal()
0x386: Pop(0)
0x387: PushEmpty(bool)
0x388: Call2 0x41a

0x389: Pop(0)
0x38a: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38b: GOTO 0x394

0x38c: Push("head")
0x38d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x38e: Pop(1)
0x38f: Push(Stack[-1])
0x390: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x391: Push("head")
0x392: @ UnlookAsync(Stack[-1])
0x393: Pop(1)
0x394: Return(); Pop(2)

0x395: PushEmpty(bool, float, float, bool, float, float)
0x396: @ lshHasAnimation(Stack[-3], Stack[-7])
0x397: Pop(0)
0x398: Push(Stack[-3])
0x399: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39a: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x39b: Pop(0)
0x39c: Push((bool) 0)
0x39d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x39e: Pop(1)
0x39f: GOTO 0x3a4

0x3a0: Push("Can't find lsh animation : ")
0x3a1: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3a2: @ Trace(Stack[-1])
0x3a3: Pop(1)
0x3a4: Return(); Pop(6)

0x3a5: PushEmpty(bool, float, float, bool, float, float)
0x3a6: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3a7: Pop(0)
0x3a8: Push(Stack[-3])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3aa: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3ab: Pop(0)
0x3ac: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3ad: Pop(0)
0x3ae: GOTO 0x3b3

0x3af: Push("Can't find lsh animation : ")
0x3b0: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3b1: @ Trace(Stack[-1])
0x3b2: Pop(1)
0x3b3: Return(); Pop(6)

0x3b4: PushEmpty(float, cvector, float, cvector)
0x3b5: @@ GetEyesHeight(Stack[-2])
0x3b6: Pop(0)
0x3b7: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x3b8: Push(CvectorIndex(Stack[-1], 1))
0x3b9: Stack[-1] = Stack[-3]
0x3ba: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3bb: Push("head")
0x3bc: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x3bd: Pop(1)
0x3be: Return(); Pop(4)

0x3bf: PushEmpty(bool)
0x3c0: Call2 0x41a

0x3c1: Pop(0)
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c3: @ lshStopSpeech()
0x3c4: Pop(0)
0x3c5: Return(); Pop(0)

0x3c6: PushEmpty(float, float)
0x3c7: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3c8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3c9: Push((float)0.0)
0x3ca: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cc: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3cd: Return(); Pop(2)

0x3ce: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3cf: Return(); Pop(2)

0x3d0: PushEmpty(int, int)
0x3d1: @ GetVariable(Stack[-3], Stack[-1])
0x3d2: Pop(0)
0x3d3: Stack[-4] = Stack[-1]
0x3d4: Return(); Pop(2)

0x3d5: PushEmpty(object, object)
0x3d6: @ FindActor(Stack[-1], Stack[-4])
0x3d7: Pop(0)
0x3d8: Pop(0); Push((bool) Stack[-1] == 0)
0x3d9: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3da: Push("Door ")
0x3db: Pop(1); Push(Stack[-1] + Stack[-5]);
0x3dc: Push(" not found")
0x3dd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3de: @ Trace(Stack[-1])
0x3df: Pop(1)
0x3e0: GOTO 0x3e4

0x3e1: Push("locked")
0x3e2: @@ SetProperty(Stack[-1], Stack[-4])
0x3e3: Pop(1)
0x3e4: Return(); Pop(2)

0x3e5: Stack[-1] = 0
0x3e6: PushEmpty(object, object)
0x3e7: @ FindActor(Stack[-1], Stack[-4])
0x3e8: Pop(0)
0x3e9: Pop(0); Push((bool) Stack[-1] == 0)
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3eb: Stack[-5] = (bool) 0
0x3ec: Return(); Pop(2)

0x3ed: @ Trigger(Stack[-1], Stack[-3])
0x3ee: Pop(0)
0x3ef: Stack[-5] = (bool) 1
0x3f0: Return(); Pop(2)

0x3f1: Stack[-1] = 0
0x3f2: PushEmpty(float, float)
0x3f3: @ GetGameTime(Stack[-1])
0x3f4: Pop(0)
0x3f5: PushEmpty(int)
0x3f6: Stack[-1] = Stack[-2]
0x3f7: Push((int) 24)
0x3f8: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x3f9: Return(); Pop(2)

0x3fa: PushEmpty(string, string)
0x3fb: Stack[-1] = "idle"
0x3fc: Push(Stack[-3])
0x3fd: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fe: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3ff: Stack[-4] = Stack[-1]
0x400: Return(); Pop(2)

0x401: PushEmpty(int, bool, int, bool)
0x402: Stack[-2] = (int) 0
0x403: Push("all")
0x404: PushEmpty(string, int)
0x405: Stack[-1] = Stack[-5]
0x406: Call2 0x3fa

0x407: Pop(1)
0x408: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x409: Pop(2)
0x40a: Pop(0); Push((bool) Stack[-1] == 0)
0x40b: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40c: GOTO 0x410

0x40d: Push((int) 1)
0x40e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x40f: GOTO 0x403

0x410: Stack[-5] = Stack[-2]
0x411: Return(); Pop(4)

0x412: Stack[-1] = (int) 515571
0x413: Return(); Pop(0)

0x414: Stack[-1] = (int) 504029
0x415: Return(); Pop(0)

0x416: Stack[-1] = "ui/NPC_bmask.png"
0x417: Return(); Pop(0)

0x418: Stack[-1] = "ui/NPC_bmask_b.png"
0x419: Return(); Pop(0)

0x41a: Stack[-1] = (bool) 0
0x41b: Return(); Pop(0)

0x41c: PushEmpty()
0x41d: Push("oob12BirdmaskS1")
0x41e: Push((int) 1)
0x41f: @ SetVariable(Stack[-2], Stack[-1])
0x420: Pop(2)
0x421: Return(); Pop(0)

0x422: PushEmpty()
0x423: PushEmpty(bool, string, string)
0x424: Stack[-2] = "quest_b12_01"
0x425: Stack[-1] = "init_sobor"
0x426: Call2 0x3e6

0x427: Pop(3)
0x428: Return(); Pop(0)

0x429: PushEmpty()
0x42a: Push("oob12BirdmaskS3")
0x42b: Push((int) 1)
0x42c: @ SetVariable(Stack[-2], Stack[-1])
0x42d: Pop(2)
0x42e: Return(); Pop(0)

0x42f: PushEmpty()
0x430: Push("oob12BirdmaskS4")
0x431: Push((int) 1)
0x432: @ SetVariable(Stack[-2], Stack[-1])
0x433: Pop(2)
0x434: Return(); Pop(0)

0x435: PushEmpty()
0x436: PushEmpty(string, bool)
0x437: Stack[-2] = "sobor@door1"
0x438: Stack[-1] = (bool) 0
0x439: Call2 0x3d5

0x43a: Pop(2)
0x43b: Return(); Pop(0)

0x43c: PushEmpty()
0x43d: PushEmpty(bool, object)
0x43e: Stack[-1] = Stack[-3]
0x43f: Call2 0x474

0x440: Pop(1)
0x441: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x442: Stack[-2] = (bool) 1
0x443: Return(); Pop(0)

0x444: Stack[-2] = (bool) 0
0x445: Return(); Pop(0)

0x446: PushEmpty()
0x447: PushEmpty(bool, object)
0x448: Stack[-1] = Stack[-3]
0x449: Call2 0x47a

0x44a: Pop(1)
0x44b: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44c: Stack[-2] = (bool) 1
0x44d: Return(); Pop(0)

0x44e: Stack[-2] = (bool) 0
0x44f: Return(); Pop(0)

0x450: PushEmpty()
0x451: PushEmpty(int, string)
0x452: Stack[-1] = "oob12BirdmaskS1"
0x453: Call2 0x3d0

0x454: Pop(1)
0x455: Push((int) 0)
0x456: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x457: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x458: Stack[-2] = (bool) 1
0x459: Return(); Pop(0)

0x45a: Stack[-2] = (bool) 0
0x45b: Return(); Pop(0)

0x45c: PushEmpty()
0x45d: PushEmpty(int, string)
0x45e: Stack[-1] = "oob12BirdmaskS3"
0x45f: Call2 0x3d0

0x460: Pop(1)
0x461: Push((int) 0)
0x462: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x463: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x464: Stack[-2] = (bool) 1
0x465: Return(); Pop(0)

0x466: Stack[-2] = (bool) 0
0x467: Return(); Pop(0)

0x468: PushEmpty()
0x469: PushEmpty(int, string)
0x46a: Stack[-1] = "oob12BirdmaskS4"
0x46b: Call2 0x3d0

0x46c: Pop(1)
0x46d: Push((int) 0)
0x46e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x46f: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x470: Stack[-2] = (bool) 1
0x471: Return(); Pop(0)

0x472: Stack[-2] = (bool) 0
0x473: Return(); Pop(0)

0x474: PushEmpty()
0x475: PushEmpty(bool)
0x476: Call2 0x4cb

0x477: Stack[-3] = Stack[-1]
0x478: Pop(1)
0x479: Return(); Pop(0)

0x47a: PushEmpty()
0x47b: PushEmpty(int)
0x47c: Call2 0x3f2

0x47d: Pop(0)
0x47e: Push((int) 19)
0x47f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x480: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x481: Stack[-2] = (bool) 1
0x482: Return(); Pop(0)

0x483: Stack[-2] = (bool) 0
0x484: Return(); Pop(0)

0x485: PushEmpty(int, int)
0x486: Push("branch")
0x487: @ GetVariable(Stack[-1], Stack[-2])
0x488: Pop(1)
0x489: Push((int) 0)
0x48a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x48b: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48c: Stack[-3] = (int) 1
0x48d: Return(); Pop(2)

0x48e: GOTO 0x494

0x48f: Push((int) 1)
0x490: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x491: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x492: Stack[-3] = (int) 2
0x493: Return(); Pop(2)

0x494: Stack[-3] = (int) 3
0x495: Return(); Pop(2)

0x496: PushEmpty()
0x497: Push((int) 18)
0x498: @@ add(Stack[-1])
0x499: Pop(1)
0x49a: Push((int) 24)
0x49b: @@ add(Stack[-1])
0x49c: Pop(1)
0x49d: Push((int) 20)
0x49e: @@ add(Stack[-1])
0x49f: Pop(1)
0x4a0: Push((int) 14)
0x4a1: @@ add(Stack[-1])
0x4a2: Pop(1)
0x4a3: Push((bool) 0)
0x4a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4a6: Push((int) 10)
0x4a7: @@ add(Stack[-1])
0x4a8: Pop(1)
0x4a9: Push((int) 17)
0x4aa: @@ add(Stack[-1])
0x4ab: Pop(1)
0x4ac: Push((int) 8)
0x4ad: @@ add(Stack[-1])
0x4ae: Pop(1)
0x4af: GOTO 0x4b6

0x4b0: Push((int) 1)
0x4b1: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b3: Push((int) 10)
0x4b4: @@ add(Stack[-1])
0x4b5: Pop(1)
0x4b6: Return(); Pop(0)

0x4b7: PushEmpty(int, int)
0x4b8: Push("vol_")
0x4b9: Pop(1); Push(Stack[-1] + Stack[-4]);
0x4ba: @ GetVariable(Stack[-1], Stack[-2])
0x4bb: Pop(1)
0x4bc: Push((int) 4)
0x4bd: Pop(1); Push(Stack[-2] & Stack[-1]);
0x4be: Push((int) 0)
0x4bf: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x4c0: Return(); Pop(2)

0x4c1: PushEmpty(int, int)
0x4c2: Push("vol_")
0x4c3: Pop(1); Push(Stack[-1] + Stack[-4]);
0x4c4: @ GetVariable(Stack[-1], Stack[-2])
0x4c5: Pop(1)
0x4c6: Push((int) 16)
0x4c7: Pop(1); Push(Stack[-2] & Stack[-1]);
0x4c8: Push((int) 0)
0x4c9: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x4ca: Return(); Pop(2)

0x4cb: PushEmpty(object, int, int, int, object, int, int, int)
0x4cc: @ CreateIntVector(Stack[-4])
0x4cd: Pop(0)
0x4ce: PushEmpty(object, bool, int)
0x4cf: Stack[-3] = Stack[-7]
0x4d0: Stack[-2] = (bool) 0
0x4d1: Stack[-1] = (int) -1
0x4d2: Call2 0x496

0x4d3: Pop(3)
0x4d4: @@ size(Stack[-3])
0x4d5: Pop(0)
0x4d6: Stack[-2] = (int) 0
0x4d7: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x4d8: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4d9: @@ get(Stack[-1], Stack[-2])
0x4da: Pop(0)
0x4db: PushEmpty(bool)
0x4dc: Stack[-1] = (bool) 1
0x4dd: PushEmpty(bool, int)
0x4de: Stack[-1] = Stack[-4]
0x4df: Call2 0x4c1

0x4e0: Pop(1)
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e2: PushEmpty(bool, int)
0x4e3: Stack[-1] = Stack[-4]
0x4e4: Call2 0x4b7

0x4e5: Pop(1)
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e7: Stack[-1] = (bool) 0
0x4e8: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4e9: Stack[-9] = (bool) 0
0x4ea: Return(); Pop(8)

0x4eb: Push((int) 1)
0x4ec: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4ed: GOTO 0x4d7

0x4ee: Stack[-9] = (bool) 1
0x4ef: Return(); Pop(8)

0x4f0: Stack[-4] = 0
0x4f1: PushEmpty(int, int)
0x4f2: Push("game_final")
0x4f3: @ GetVariable(Stack[-1], Stack[-2])
0x4f4: Pop(1)
0x4f5: Stack[-3] = Stack[-1]
0x4f6: Return(); Pop(2)

