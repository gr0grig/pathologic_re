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
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	b7q03
	disease
	GetProperty
	SetProperty
	quest_b7_03
	remove_birdmask
	b7q03SerumWorks
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
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
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	FindActor (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x1ae
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcd Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x1a3 Vars = (object)
		EVENT_26 Op = 0x1d7 Vars = (string)
		EVENT_5 Op = 0x1df Vars = ()
		EVENT_6 Op = 0x1e4 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x251

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x38b

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x389

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x38d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x38f

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x378

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
0x41: Call2 0x296

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
0x52: Call2 0x325

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0xb7

0x58: Pop(1)
0x59: Push((int) 521352)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 524063)
0x5f: Push((int) 25361)
0x60: Push((int) 25360)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x99

0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66: Call2 0x331

0x67: Pop(1)
0x68: Pop(1); Push((bool) Stack[-1] == 0)
0x69: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x6a: PushEmpty(string)
0x6b: Stack[-1] = "Neutral"
0x6c: Call2 0xb7

0x6d: Pop(1)
0x6e: Push((int) 521356)
0x6f: @@ SetMessage(Stack[-1])
0x70: Pop(1)
0x71: @@ ClearReplies()
0x72: Pop(0)
0x73: Push((int) 521357)
0x74: Push((int) 25366)
0x75: Push((int) 22544)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: Push((int) 524069)
0x79: Push((int) 25368)
0x7a: Push((int) 25367)
0x7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c: Pop(3)
0x7d: GOTO 0x99

0x7e: PushEmpty(bool, object)
0x7f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80: Call2 0x331

0x81: Pop(1)
0x82: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x83: PushEmpty(object, object)
0x84: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x85: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x86: Call2 0x31f

0x87: Pop(2)
0x88: PushEmpty(string)
0x89: Stack[-1] = "Neutral"
0x8a: Call2 0xb7

0x8b: Pop(1)
0x8c: Push((int) 521358)
0x8d: @@ SetMessage(Stack[-1])
0x8e: Pop(1)
0x8f: @@ ClearReplies()
0x90: Pop(0)
0x91: Push((int) 521359)
0x92: Push((int) -1)
0x93: Push((int) 22546)
0x94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95: Pop(3)
0x96: GOTO 0x99

0x97: Return(); Pop(0)

0x98: GOTO 0x4e

0x99: PushEmpty(bool)
0x9a: Call2 0x391

0x9b: Pop(0)
0x9c: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0x9d: @ lshWaitForAnimEnd()
0x9e: Pop(0)
0x9f: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: GOTO 0xa7

0xa2: PushEmpty(string)
0xa3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa4: Call2 0x2a8

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
0xb9: Call2 0x391

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
0xc9: Call2 0x2b8

0xca: Pop(2)
0xcb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcc: Return(); Pop(0)

0xcd: PushEmpty()
0xce: Push((int) 1)
0xcf: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0xd0: PushEmpty()
0xd1: Call2 0x2c7

0xd2: Pop(0)
0xd3: Push((int) 22542)
0xd4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x307

0xda: Pop(2)
0xdb: Push((int) 22539)
0xdc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0xde: PushEmpty(bool, object)
0xdf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Call2 0x325

0xe1: Pop(1)
0xe2: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xe3: PushEmpty(string)
0xe4: Stack[-1] = "Neutral"
0xe5: Call2 0xb7

0xe6: Pop(1)
0xe7: Push((int) 521352)
0xe8: @@ SetMessage(Stack[-1])
0xe9: Pop(1)
0xea: @@ ClearReplies()
0xeb: Pop(0)
0xec: Push((int) 524063)
0xed: Push((int) 25361)
0xee: Push((int) 25360)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Return(); Pop(0)

0xf2: PushEmpty(bool, object)
0xf3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Call2 0x331

0xf5: Pop(1)
0xf6: Pop(1); Push((bool) Stack[-1] == 0)
0xf7: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xf8: PushEmpty(string)
0xf9: Stack[-1] = "Neutral"
0xfa: Call2 0xb7

0xfb: Pop(1)
0xfc: Push((int) 521356)
0xfd: @@ SetMessage(Stack[-1])
0xfe: Pop(1)
0xff: @@ ClearReplies()
0x100: Pop(0)
0x101: Push((int) 521357)
0x102: Push((int) 25366)
0x103: Push((int) 22544)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Push((int) 524069)
0x107: Push((int) 25368)
0x108: Push((int) 25367)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Return(); Pop(0)

0x10c: PushEmpty(bool, object)
0x10d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Call2 0x331

0x10f: Pop(1)
0x110: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x111: PushEmpty(object, object)
0x112: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x113: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x114: Call2 0x31f

0x115: Pop(2)
0x116: PushEmpty(string)
0x117: Stack[-1] = "Neutral"
0x118: Call2 0xb7

0x119: Pop(1)
0x11a: Push((int) 521358)
0x11b: @@ SetMessage(Stack[-1])
0x11c: Pop(1)
0x11d: @@ ClearReplies()
0x11e: Pop(0)
0x11f: Push((int) 521359)
0x120: Push((int) -1)
0x121: Push((int) 22546)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Return(); Pop(0)

0x125: Push((int) 25368)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x128: PushEmpty(string)
0x129: Stack[-1] = "Neutral"
0x12a: Call2 0xb7

0x12b: Pop(1)
0x12c: Push((int) 524070)
0x12d: @@ SetMessage(Stack[-1])
0x12e: Pop(1)
0x12f: @@ ClearReplies()
0x130: Pop(0)
0x131: Push((int) 524071)
0x132: Push((int) 25366)
0x133: Push((int) 25369)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Push((int) 25366)
0x138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x13a: PushEmpty(string)
0x13b: Stack[-1] = "Neutral"
0x13c: Call2 0xb7

0x13d: Pop(1)
0x13e: Push((int) 524068)
0x13f: @@ SetMessage(Stack[-1])
0x140: Pop(1)
0x141: @@ ClearReplies()
0x142: Pop(0)
0x143: Push((int) 524072)
0x144: Push((int) 25372)
0x145: Push((int) 25371)
0x146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x147: Pop(3)
0x148: Return(); Pop(0)

0x149: Push((int) 25372)
0x14a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x14c: PushEmpty(string)
0x14d: Stack[-1] = "Neutral"
0x14e: Call2 0xb7

0x14f: Pop(1)
0x150: Push((int) 524073)
0x151: @@ SetMessage(Stack[-1])
0x152: Pop(1)
0x153: @@ ClearReplies()
0x154: Pop(0)
0x155: Push((int) 524074)
0x156: Push((int) -1)
0x157: Push((int) 25373)
0x158: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x159: Pop(3)
0x15a: Return(); Pop(0)

0x15b: Push((int) 25361)
0x15c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x15e: PushEmpty(string)
0x15f: Stack[-1] = "Neutral"
0x160: Call2 0xb7

0x161: Pop(1)
0x162: Push((int) 524064)
0x163: @@ SetMessage(Stack[-1])
0x164: Pop(1)
0x165: @@ ClearReplies()
0x166: Pop(0)
0x167: Push((int) 524065)
0x168: Push((int) 25363)
0x169: Push((int) 25362)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: Return(); Pop(0)

0x16d: Push((int) 25363)
0x16e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16f: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x170: PushEmpty(string)
0x171: Stack[-1] = "Neutral"
0x172: Call2 0xb7

0x173: Pop(1)
0x174: Push((int) 524066)
0x175: @@ SetMessage(Stack[-1])
0x176: Pop(1)
0x177: @@ ClearReplies()
0x178: Pop(0)
0x179: Push((int) 521353)
0x17a: Push((int) 22541)
0x17b: Push((int) 22540)
0x17c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17d: Pop(3)
0x17e: Push((int) 524067)
0x17f: Push((int) 22541)
0x180: Push((int) 25364)
0x181: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x182: Pop(3)
0x183: Return(); Pop(0)

0x184: Push((int) 22541)
0x185: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x186: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x187: PushEmpty(string)
0x188: Stack[-1] = "Neutral"
0x189: Call2 0xb7

0x18a: Pop(1)
0x18b: Push((int) 521354)
0x18c: @@ SetMessage(Stack[-1])
0x18d: Pop(1)
0x18e: @@ ClearReplies()
0x18f: Pop(0)
0x190: Push((int) 521355)
0x191: Push((int) -1)
0x192: Push((int) 22542)
0x193: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x194: Pop(3)
0x195: Return(); Pop(0)

0x196: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x197: PushEmpty(bool)
0x198: Call2 0x391

0x199: Pop(0)
0x19a: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19b: @ lshStopAnimation()
0x19c: Pop(0)
0x19d: GOTO 0x1a0

0x19e: @ StopAnimation()
0x19f: Pop(0)
0x1a0: Return(); Pop(0)

0x1a1: GOTO 0xce

0x1a2: Return(); Pop(0)

0x1a3: PushEmpty()
0x1a4: PushEmpty()
0x1a5: Call2 0x247

0x1a6: Pop(0)
0x1a7: PushEmpty(int, object)
0x1a8: Stack[-1] = Stack[-3]
0x1a9: Push(-2, 1); TaskCall(0)
0x1aa: Call2 0x0

0x1ab: Pop(-2, 1); TaskReturn
0x1ac: Pop(2)
0x1ad: Return(); Pop(0)

0x1ae: PushEmpty(float, float)
0x1af: PushEmpty(bool)
0x1b0: Call2 0x24c

0x1b1: Pop(0)
0x1b2: Pop(1); Push((bool) Stack[-1] == 0)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b4: @ Hold()
0x1b5: Pop(0)
0x1b6: GOTO 0x1af

0x1b7: Push((int) 3)
0x1b8: @ rand(Stack[-2], Stack[-1])
0x1b9: Pop(1)
0x1ba: Push((int) 3)
0x1bb: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1bc: @ Sleep(Stack[-1])
0x1bd: Pop(1)
0x1be: PushEmpty()
0x1bf: Call2 0x1f6

0x1c0: Pop(0)
0x1c1: GOTO 0x1af

0x1c2: Return(); Pop(2)

0x1c3: PushEmpty(bool, bool)
0x1c4: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1c5: @ IsLoaded(Stack[-1])
0x1c6: Pop(0)
0x1c7: PushEmpty(bool)
0x1c8: Stack[-1] = (bool) 0
0x1c9: Pop(0); Push((bool) Stack[-2] == 0)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cb: PushEmpty(bool)
0x1cc: Call2 0x1f4

0x1cd: Pop(0)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cf: Stack[-1] = (bool) 1
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d1: PushEmpty(object)
0x1d2: Call2 0x2ce

0x1d3: Pop(0)
0x1d4: @ RemoveActor(Stack[-1])
0x1d5: Pop(1)
0x1d6: Return(); Pop(2)

0x1d7: PushEmpty()
0x1d8: Push("cleanup")
0x1d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1db: PushEmpty()
0x1dc: Call2 0x1c3

0x1dd: Pop(0)
0x1de: Return(); Pop(0)

0x1df: @ StopGroup0()
0x1e0: Pop(0)
0x1e1: @ sync()
0x1e2: Pop(0)
0x1e3: Return(); Pop(0)

0x1e4: PushEmpty(bool)
0x1e5: Stack[-1] = (bool) 0
0x1e6: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e8: PushEmpty(bool)
0x1e9: Call2 0x1f4

0x1ea: Pop(0)
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ec: Stack[-1] = (bool) 1
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1ee: PushEmpty(object)
0x1ef: Call2 0x2ce

0x1f0: Pop(0)
0x1f1: @ RemoveActor(Stack[-1])
0x1f2: Pop(1)
0x1f3: Return(); Pop(0)

0x1f4: Stack[-1] = (bool) 1
0x1f5: Return(); Pop(0)

0x1f6: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1f7: @ WaitForAnimEnd()
0x1f8: Pop(0)
0x1f9: PushEmpty(bool)
0x1fa: Call2 0x24c

0x1fb: Pop(0)
0x1fc: Pop(1); Push((bool) Stack[-1] == 0)
0x1fd: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fe: Return(); Pop(14)

0x1ff: PushEmpty(int)
0x200: Call2 0x2f6

0x201: Stack[-8] = Stack[-1]
0x202: Pop(1)
0x203: Stack[-6] = (int) 0
0x204: PushEmpty(bool)
0x205: Stack[-1] = (bool) 0
0x206: Push((int) 5)
0x207: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x209: PushEmpty(bool)
0x20a: Call2 0x24c

0x20b: Pop(0)
0x20c: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x20d: Stack[-1] = (bool) 1
0x20e: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x20f: Push((int) 3)
0x210: @ irand(Stack[-6], Stack[-1])
0x211: Pop(1)
0x212: Push((int) 0)
0x213: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x215: Push(Stack[-7])
0x216: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x217: @ irand(Stack[-4], Stack[-7])
0x218: Pop(0)
0x219: Push("all")
0x21a: PushEmpty(string, int)
0x21b: Stack[-1] = Stack[-7]
0x21c: Call2 0x2ef

0x21d: Pop(1)
0x21e: @ PlayAnimation(Stack[-2], Stack[-1])
0x21f: Pop(2)
0x220: @ WaitForAnimEnd(Stack[-3])
0x221: Pop(0)
0x222: Pop(0); Push((bool) Stack[-3] == 0)
0x223: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x224: GOTO 0x242

0x225: GOTO 0x237

0x226: Push((int) 1)
0x227: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x229: Push((int) 4)
0x22a: @ rand(Stack[-3], Stack[-1])
0x22b: Pop(1)
0x22c: Push((int) 1)
0x22d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x22e: @ Sleep(Stack[-1], Stack[-2])
0x22f: Pop(1)
0x230: Pop(0); Push((bool) Stack[-1] == 0)
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: GOTO 0x242

0x233: GOTO 0x237

0x234: Push(Stack[-6])
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: GOTO 0x242

0x237: PushEmpty(bool)
0x238: Call2 0x245

0x239: Pop(0)
0x23a: Pop(1); Push((bool) Stack[-1] == 0)
0x23b: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23c: GOTO 0x242

0x23d: @ ResetAAS()
0x23e: Pop(0)
0x23f: Push((int) 1)
0x240: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x241: GOTO 0x204

0x242: @ ResetAAS()
0x243: Pop(0)
0x244: Return(); Pop(14)

0x245: Stack[-1] = (bool) 1
0x246: Return(); Pop(0)

0x247: @ StopAnimation()
0x248: Pop(0)
0x249: @ StopGroup0()
0x24a: Pop(0)
0x24b: Return(); Pop(0)

0x24c: PushEmpty(bool, bool)
0x24d: @ IsLoaded(Stack[-1])
0x24e: Pop(0)
0x24f: Stack[-3] = Stack[-1]
0x250: Return(); Pop(2)

0x251: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x252: @@ GetPosition(Stack[-8])
0x253: Pop(0)
0x254: @@ GetEyesHeight(Stack[-9])
0x255: Pop(0)
0x256: Push(CvectorIndex(Stack[-8], 1))
0x257: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x258: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x259: @ GetPosition(Stack[-7])
0x25a: Pop(0)
0x25b: @ GetEyesHeight(Stack[-9])
0x25c: Pop(0)
0x25d: Push(CvectorIndex(Stack[-7], 1))
0x25e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x25f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x260: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x261: Push(CvectorIndex(Stack[-6], 1))
0x262: Stack[-1] = (int) 0
0x263: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x264: Pop(0); Push(Stack[-6] | Stack[-6]);
0x265: Pop(1); Push(Sqrt(Stack[-1]))
0x266: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x267: Stack[-5] = -Stack[-6]; Pop(0);
0x268: Pop(0); Push(Stack[-6] * Stack[-19]);
0x269: PushEmpty(cvector, cvector)
0x26a: Push(CVector(0.0, 1.0, 0.0))
0x26b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x26c: Call2 0x2d4

0x26d: Pop(1)
0x26e: Push((int) 25)
0x26f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x270: Pop(2); Push(Stack[-2] + Stack[-1]);
0x271: Push(CVector(0.0, 10.0, 0.0))
0x272: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x273: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x274: @ IsOverrideActive(Stack[-2])
0x275: Pop(0)
0x276: Push(Stack[-2])
0x277: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x278: Stack[-21] = (bool) 0
0x279: Return(); Pop(18)

0x27a: @ StopWorld()
0x27b: Pop(0)
0x27c: Push((bool) 1)
0x27d: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x27e: Pop(1)
0x27f: Push(CvectorIndex(Stack[-4], 0))
0x280: Push(CvectorIndex(Stack[-5], 2))
0x281: @ Rotate(Stack[-2], Stack[-1])
0x282: Pop(2)
0x283: PushEmpty(bool)
0x284: Call2 0x391

0x285: Pop(0)
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: GOTO 0x290

0x288: Push("head")
0x289: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x28a: Pop(1)
0x28b: Push(Stack[-1])
0x28c: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28d: Push("head")
0x28e: @ LookAsyncCamera(Stack[-1])
0x28f: Pop(1)
0x290: @ CameraWaitForPlayFinish()
0x291: Pop(0)
0x292: @ ResumeWorld()
0x293: Pop(0)
0x294: Stack[-21] = (bool) 1
0x295: Return(); Pop(18)

0x296: PushEmpty(bool, bool)
0x297: Push((bool) 1)
0x298: @ CameraSwitchToNormal(Stack[-1])
0x299: Pop(1)
0x29a: PushEmpty(bool)
0x29b: Call2 0x391

0x29c: Pop(0)
0x29d: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29e: GOTO 0x2a7

0x29f: Push("head")
0x2a0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2a1: Pop(1)
0x2a2: Push(Stack[-1])
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a4: Push("head")
0x2a5: @ UnlookAsync(Stack[-1])
0x2a6: Pop(1)
0x2a7: Return(); Pop(2)

0x2a8: PushEmpty(bool, float, float, bool, float, float)
0x2a9: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2aa: Pop(0)
0x2ab: Push(Stack[-3])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2ad: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2ae: Pop(0)
0x2af: Push((bool) 0)
0x2b0: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2b1: Pop(1)
0x2b2: GOTO 0x2b7

0x2b3: Push("Can't find lsh animation : ")
0x2b4: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2b5: @ Trace(Stack[-1])
0x2b6: Pop(1)
0x2b7: Return(); Pop(6)

0x2b8: PushEmpty(bool, float, float, bool, float, float)
0x2b9: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2ba: Pop(0)
0x2bb: Push(Stack[-3])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2bd: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2be: Pop(0)
0x2bf: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2c0: Pop(0)
0x2c1: GOTO 0x2c6

0x2c2: Push("Can't find lsh animation : ")
0x2c3: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2c4: @ Trace(Stack[-1])
0x2c5: Pop(1)
0x2c6: Return(); Pop(6)

0x2c7: PushEmpty(bool)
0x2c8: Call2 0x391

0x2c9: Pop(0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cb: @ lshStopSpeech()
0x2cc: Pop(0)
0x2cd: Return(); Pop(0)

0x2ce: PushEmpty(object, object)
0x2cf: @ self(Stack[-1])
0x2d0: Pop(0)
0x2d1: Stack[-3] = Stack[-1]
0x2d2: Return(); Pop(2)

0x2d3: Stack[-1] = 0
0x2d4: PushEmpty(float, float)
0x2d5: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2d6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2d7: Push((float)0.0)
0x2d8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2da: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2db: Return(); Pop(2)

0x2dc: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2dd: Return(); Pop(2)

0x2de: PushEmpty(int, int)
0x2df: @ GetVariable(Stack[-3], Stack[-1])
0x2e0: Pop(0)
0x2e1: Stack[-4] = Stack[-1]
0x2e2: Return(); Pop(2)

0x2e3: PushEmpty(object, object)
0x2e4: @ FindActor(Stack[-1], Stack[-4])
0x2e5: Pop(0)
0x2e6: Pop(0); Push((bool) Stack[-1] == 0)
0x2e7: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e8: Stack[-5] = (bool) 0
0x2e9: Return(); Pop(2)

0x2ea: @ Trigger(Stack[-1], Stack[-3])
0x2eb: Pop(0)
0x2ec: Stack[-5] = (bool) 1
0x2ed: Return(); Pop(2)

0x2ee: Stack[-1] = 0
0x2ef: PushEmpty(string, string)
0x2f0: Stack[-1] = "idle"
0x2f1: Push(Stack[-3])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f3: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2f4: Stack[-4] = Stack[-1]
0x2f5: Return(); Pop(2)

0x2f6: PushEmpty(int, bool, int, bool)
0x2f7: Stack[-2] = (int) 0
0x2f8: Push("all")
0x2f9: PushEmpty(string, int)
0x2fa: Stack[-1] = Stack[-5]
0x2fb: Call2 0x2ef

0x2fc: Pop(1)
0x2fd: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2fe: Pop(2)
0x2ff: Pop(0); Push((bool) Stack[-1] == 0)
0x300: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x301: GOTO 0x305

0x302: Push((int) 1)
0x303: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x304: GOTO 0x2f8

0x305: Stack[-5] = Stack[-2]
0x306: Return(); Pop(4)

0x307: PushEmpty(float, float)
0x308: Push("b7q03")
0x309: Push((int) 2)
0x30a: @ SetVariable(Stack[-2], Stack[-1])
0x30b: Pop(2)
0x30c: PushEmpty()
0x30d: Call2 0x342

0x30e: Pop(0)
0x30f: Push("disease")
0x310: @@ GetProperty(Stack[-1], Stack[-2])
0x311: Pop(1)
0x312: Push((float)0.5)
0x313: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x314: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x315: Push("disease")
0x316: Push((float)0.5)
0x317: @@ SetProperty(Stack[-2], Stack[-1])
0x318: Pop(2)
0x319: PushEmpty(bool, string, string)
0x31a: Stack[-2] = "quest_b7_03"
0x31b: Stack[-1] = "remove_birdmask"
0x31c: Call2 0x2e3

0x31d: Pop(3)
0x31e: Return(); Pop(2)

0x31f: PushEmpty()
0x320: Push("b7q03SerumWorks")
0x321: Push((int) 1)
0x322: @ SetVariable(Stack[-2], Stack[-1])
0x323: Pop(2)
0x324: Return(); Pop(0)

0x325: PushEmpty()
0x326: PushEmpty(int, string)
0x327: Stack[-1] = "b7q03"
0x328: Call2 0x2de

0x329: Pop(1)
0x32a: Push((int) 1)
0x32b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x32c: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32d: Stack[-2] = (bool) 1
0x32e: Return(); Pop(0)

0x32f: Stack[-2] = (bool) 0
0x330: Return(); Pop(0)

0x331: PushEmpty()
0x332: PushEmpty(bool, object)
0x333: Stack[-1] = Stack[-3]
0x334: Call2 0x33b

0x335: Pop(1)
0x336: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x337: Stack[-2] = (bool) 1
0x338: Return(); Pop(0)

0x339: Stack[-2] = (bool) 0
0x33a: Return(); Pop(0)

0x33b: PushEmpty(float, float)
0x33c: Push("disease")
0x33d: @@ GetProperty(Stack[-1], Stack[-2])
0x33e: Pop(1)
0x33f: Push((int) 0)
0x340: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x341: Return(); Pop(2)

0x342: PushEmpty(object, object)
0x343: Push((int) 282)
0x344: Push((int) 2)
0x345: Push((int) 521365)
0x346: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x347: Pop(3)
0x348: PushEmpty(bool, object, int)
0x349: Stack[-2] = Stack[-4]
0x34a: Stack[-1] = (int) 280
0x34b: Call2 0x35c

0x34c: Pop(3)
0x34d: Return(); Pop(2)

0x34e: Stack[-1] = 0
0x34f: PushEmpty(object, object)
0x350: @ GetDiaryRoot(Stack[-1])
0x351: Pop(0)
0x352: Pop(0); Push((bool) Stack[-1] == 0)
0x353: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x354: Push("Can't retrieve diary root")
0x355: @ Trace(Stack[-1])
0x356: Pop(1)
0x357: Stack[-3] = (bool) 0
0x358: Return(); Pop(2)

0x359: Stack[-3] = Stack[-1]
0x35a: Return(); Pop(2)

0x35b: Stack[-1] = 0
0x35c: PushEmpty(object, object, int, object, object, int)
0x35d: PushEmpty(object)
0x35e: Call2 0x34f

0x35f: Stack[-4] = Stack[-1]
0x360: Pop(1)
0x361: @@ Find(Stack[-7], Stack[-2])
0x362: Pop(0)
0x363: Pop(0); Push((bool) Stack[-2] == 0)
0x364: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x365: Push("Can't find diary parent with id: ")
0x366: Pop(1); Push(Stack[-1] + Stack[-8]);
0x367: @ Trace(Stack[-1])
0x368: Pop(1)
0x369: Stack[-9] = (bool) 0
0x36a: Return(); Pop(6)

0x36b: @@ AddChild(Stack[-8])
0x36c: Pop(0)
0x36d: Push((int) 7)
0x36e: @ SendWorldWndMessage(Stack[-1])
0x36f: Pop(1)
0x370: @@ GetCategory(Stack[-1])
0x371: Pop(0)
0x372: @ SetDiarySection(Stack[-1])
0x373: Pop(0)
0x374: Stack[-9] = (bool) 0
0x375: Return(); Pop(6)

0x376: Stack[-2] = 0
0x377: Stack[-3] = 0
0x378: PushEmpty(int, int)
0x379: Push("branch")
0x37a: @ GetVariable(Stack[-1], Stack[-2])
0x37b: Pop(1)
0x37c: Push((int) 0)
0x37d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x37f: Stack[-3] = (int) 1
0x380: Return(); Pop(2)

0x381: GOTO 0x387

0x382: Push((int) 1)
0x383: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x385: Stack[-3] = (int) 2
0x386: Return(); Pop(2)

0x387: Stack[-3] = (int) 3
0x388: Return(); Pop(2)

0x389: Stack[-1] = (int) 515571
0x38a: Return(); Pop(0)

0x38b: Stack[-1] = (int) 504029
0x38c: Return(); Pop(0)

0x38d: Stack[-1] = "ui/NPC_bmask.png"
0x38e: Return(); Pop(0)

0x38f: Stack[-1] = "ui/NPC_bmask_b.png"
0x390: Return(); Pop(0)

0x391: Stack[-1] = (bool) 0
0x392: Return(); Pop(0)

