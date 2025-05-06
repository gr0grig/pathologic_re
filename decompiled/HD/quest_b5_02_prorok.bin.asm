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
	b5q02
	quest_b5_02
	remove_prophet
	oob5Prophet1
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Prophet.png
	ui/NPC_Prophet_b.png

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
	self (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x18a
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x190 Vars = (object)
		EVENT_26 Op = 0x1c1 Vars = (string)
		EVENT_6 Op = 0x1c9 Vars = ()
		EVENT_7 Op = 0x20a Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x292

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3bc

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3ba

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3be

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3c0

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3a9

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
0x41: Call2 0x2d7

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
0x54: Push((int) 520182)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x367

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 520183)
0x5f: Push((int) 21374)
0x60: Push((int) 21373)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 520201)
0x64: Push((int) -1)
0x65: Push((int) 21393)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x3c2

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x2e9

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
0x8b: Call2 0x3c2

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
0x9b: Call2 0x2f9

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x313

0xa4: Pop(0)
0xa5: Push((int) 21373)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x361

0xac: Pop(2)
0xad: Push((int) 21383)
0xae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb0: PushEmpty(object, object)
0xb1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb3: Call2 0x353

0xb4: Pop(2)
0xb5: Push((int) 21386)
0xb6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb8: PushEmpty(object, object)
0xb9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbb: Call2 0x353

0xbc: Pop(2)
0xbd: Push((int) 21372)
0xbe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xc0: PushEmpty(string)
0xc1: Stack[-1] = "Neutral"
0xc2: Call2 0x89

0xc3: Pop(1)
0xc4: Push((int) 520182)
0xc5: @@ SetMessage(Stack[-1])
0xc6: Pop(1)
0xc7: @@ ClearReplies()
0xc8: Pop(0)
0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0x367

0xcc: Pop(1)
0xcd: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xce: Push((int) 520183)
0xcf: Push((int) 21374)
0xd0: Push((int) 21373)
0xd1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2: Pop(3)
0xd3: Push((int) 520201)
0xd4: Push((int) -1)
0xd5: Push((int) 21393)
0xd6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7: Pop(3)
0xd8: Return(); Pop(0)

0xd9: Push((int) 21374)
0xda: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xdc: PushEmpty(string)
0xdd: Stack[-1] = "Neutral"
0xde: Call2 0x89

0xdf: Pop(1)
0xe0: Push((int) 520184)
0xe1: @@ SetMessage(Stack[-1])
0xe2: Pop(1)
0xe3: @@ ClearReplies()
0xe4: Pop(0)
0xe5: Push((int) 520185)
0xe6: Push((int) 21376)
0xe7: Push((int) 21375)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Push((int) 520198)
0xeb: Push((int) 21390)
0xec: Push((int) 21389)
0xed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee: Pop(3)
0xef: Return(); Pop(0)

0xf0: Push((int) 21390)
0xf1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xf3: PushEmpty(string)
0xf4: Stack[-1] = "Neutral"
0xf5: Call2 0x89

0xf6: Pop(1)
0xf7: Push((int) 520199)
0xf8: @@ SetMessage(Stack[-1])
0xf9: Pop(1)
0xfa: @@ ClearReplies()
0xfb: Pop(0)
0xfc: Push((int) 528307)
0xfd: Push((int) 29678)
0xfe: Push((int) 29677)
0xff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100: Pop(3)
0x101: Push((int) 528309)
0x102: Push((int) 21376)
0x103: Push((int) 29679)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Return(); Pop(0)

0x107: Push((int) 29678)
0x108: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x10a: PushEmpty(string)
0x10b: Stack[-1] = "Neutral"
0x10c: Call2 0x89

0x10d: Pop(1)
0x10e: Push((int) 528308)
0x10f: @@ SetMessage(Stack[-1])
0x110: Pop(1)
0x111: @@ ClearReplies()
0x112: Pop(0)
0x113: Push((int) 520200)
0x114: Push((int) 21376)
0x115: Push((int) 21391)
0x116: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117: Pop(3)
0x118: Return(); Pop(0)

0x119: Push((int) 21376)
0x11a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x11c: PushEmpty(string)
0x11d: Stack[-1] = "Neutral"
0x11e: Call2 0x89

0x11f: Pop(1)
0x120: Push((int) 520186)
0x121: @@ SetMessage(Stack[-1])
0x122: Pop(1)
0x123: @@ ClearReplies()
0x124: Pop(0)
0x125: Push((int) 520187)
0x126: Push((int) 21378)
0x127: Push((int) 21377)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: Push((int) 520197)
0x12b: Push((int) 21378)
0x12c: Push((int) 21387)
0x12d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(3)
0x12f: Return(); Pop(0)

0x130: Push((int) 21378)
0x131: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x133: PushEmpty(string)
0x134: Stack[-1] = "Neutral"
0x135: Call2 0x89

0x136: Pop(1)
0x137: Push((int) 520188)
0x138: @@ SetMessage(Stack[-1])
0x139: Pop(1)
0x13a: @@ ClearReplies()
0x13b: Pop(0)
0x13c: Push((int) 520189)
0x13d: Push((int) 21380)
0x13e: Push((int) 21379)
0x13f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x140: Pop(3)
0x141: Push((int) 520194)
0x142: Push((int) 21385)
0x143: Push((int) 21384)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Return(); Pop(0)

0x147: Push((int) 21385)
0x148: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x14a: PushEmpty(string)
0x14b: Stack[-1] = "Neutral"
0x14c: Call2 0x89

0x14d: Pop(1)
0x14e: Push((int) 520195)
0x14f: @@ SetMessage(Stack[-1])
0x150: Pop(1)
0x151: @@ ClearReplies()
0x152: Pop(0)
0x153: Push((int) 520196)
0x154: Push((int) -1)
0x155: Push((int) 21386)
0x156: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x157: Pop(3)
0x158: Return(); Pop(0)

0x159: Push((int) 21380)
0x15a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x15c: PushEmpty(string)
0x15d: Stack[-1] = "Neutral"
0x15e: Call2 0x89

0x15f: Pop(1)
0x160: Push((int) 520190)
0x161: @@ SetMessage(Stack[-1])
0x162: Pop(1)
0x163: @@ ClearReplies()
0x164: Pop(0)
0x165: Push((int) 520191)
0x166: Push((int) 21382)
0x167: Push((int) 21381)
0x168: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x169: Pop(3)
0x16a: Return(); Pop(0)

0x16b: Push((int) 21382)
0x16c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16d: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x16e: PushEmpty(string)
0x16f: Stack[-1] = "Neutral"
0x170: Call2 0x89

0x171: Pop(1)
0x172: Push((int) 520192)
0x173: @@ SetMessage(Stack[-1])
0x174: Pop(1)
0x175: @@ ClearReplies()
0x176: Pop(0)
0x177: Push((int) 520193)
0x178: Push((int) -1)
0x179: Push((int) 21383)
0x17a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17b: Pop(3)
0x17c: Return(); Pop(0)

0x17d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x17e: PushEmpty(bool)
0x17f: Call2 0x3c2

0x180: Pop(0)
0x181: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x182: @ lshStopAnimation()
0x183: Pop(0)
0x184: GOTO 0x187

0x185: @ StopAnimation()
0x186: Pop(0)
0x187: Return(); Pop(0)

0x188: GOTO 0xa0

0x189: Return(); Pop(0)

0x18a: PushEmpty(float, float)
0x18b: Stack[-2] = (int) 300
0x18c: Stack[-1] = (int) 100
0x18d: Call2 0x19b

0x18e: Pop(2)
0x18f: Return(); Pop(0)

0x190: PushEmpty()
0x191: PushEmpty()
0x192: Call2 0x221

0x193: Pop(0)
0x194: PushEmpty(int, object)
0x195: Stack[-1] = Stack[-3]
0x196: Push(-2, 1); TaskCall(0)
0x197: Call2 0x0

0x198: Pop(-2, 1); TaskReturn
0x199: Pop(2)
0x19a: Return(); Pop(0)

0x19b: PushEmpty(float, bool, float, bool)
0x19c: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x19d: Push((int) 3)
0x19e: @ rand(Stack[-3], Stack[-1])
0x19f: Pop(1)
0x1a0: Push((int) 3)
0x1a1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1a2: @ Sleep(Stack[-1], Stack[-2])
0x1a3: Pop(1)
0x1a4: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x1a5: PushEmpty(float, float)
0x1a6: Stack[-2] = Stack[-8]
0x1a7: Stack[-1] = Stack[-7]
0x1a8: Call2 0x1e0

0x1a9: Pop(2)
0x1aa: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1ab: GOTO 0x19d

0x1ac: Return(); Pop(4)

0x1ad: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1ae: PushEmpty(bool)
0x1af: Stack[-1] = (bool) 0
0x1b0: PushEmpty(bool)
0x1b1: Call2 0x28d

0x1b2: Pop(0)
0x1b3: Pop(1); Push((bool) Stack[-1] == 0)
0x1b4: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b5: PushEmpty(bool)
0x1b6: Call2 0x1de

0x1b7: Pop(0)
0x1b8: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b9: Stack[-1] = (bool) 1
0x1ba: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bb: PushEmpty(object)
0x1bc: Call2 0x31a

0x1bd: Pop(0)
0x1be: @ RemoveActor(Stack[-1])
0x1bf: Pop(1)
0x1c0: Return(); Pop(0)

0x1c1: PushEmpty()
0x1c2: Push("cleanup")
0x1c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c5: PushEmpty()
0x1c6: Call2 0x1ad

0x1c7: Pop(0)
0x1c8: Return(); Pop(0)

0x1c9: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1ca: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cb: PushEmpty()
0x1cc: Call2 0x221

0x1cd: Pop(0)
0x1ce: PushEmpty(bool)
0x1cf: Stack[-1] = (bool) 0
0x1d0: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d2: PushEmpty(bool)
0x1d3: Call2 0x1de

0x1d4: Pop(0)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d6: Stack[-1] = (bool) 1
0x1d7: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d8: PushEmpty(object)
0x1d9: Call2 0x31a

0x1da: Pop(0)
0x1db: @ RemoveActor(Stack[-1])
0x1dc: Pop(1)
0x1dd: Return(); Pop(0)

0x1de: Stack[-1] = (bool) 1
0x1df: Return(); Pop(0)

0x1e0: PushEmpty()
0x1e1: PushEmpty(bool)
0x1e2: Call2 0x28d

0x1e3: Pop(0)
0x1e4: Pop(1); Push((bool) Stack[-1] == 0)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e6: Return(); Pop(0)

0x1e7: Push("player")
0x1e8: @ FindActor(Stack[-4], Stack[-1])
0x1e9: Pop(1)
0x1ea: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1eb: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1ec: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1ed: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1ee: Push((int) 10)
0x1ef: Push((float)1.0)
0x1f0: @ SetTimer(Stack[-2], Stack[-1])
0x1f1: Pop(2)
0x1f2: PushEmpty()
0x1f3: Call2 0x22f

0x1f4: Pop(0)
0x1f5: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f7: Push((int) 10)
0x1f8: @ KillTimer(Stack[-1])
0x1f9: Pop(1)
0x1fa: Return(); Pop(0)

0x1fb: PushEmpty(float, float)
0x1fc: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1fd: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fe: Stack[-3] = (bool) 0
0x1ff: Return(); Pop(2)

0x200: PushEmpty(float, object)
0x201: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x202: Call2 0x285

0x203: Pop(1)
0x204: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x205: Push( Stack[2 + Tasks[-1].StackPointer] )
0x206: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x207: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x208: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x209: Return(); Pop(2)

0x20a: PushEmpty()
0x20b: Push((int) 10)
0x20c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x20e: PushEmpty(bool)
0x20f: Call2 0x1fb

0x210: Pop(0)
0x211: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x212: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x213: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x214: PushEmpty(object)
0x215: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x216: Call2 0x308

0x217: Pop(1)
0x218: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x219: GOTO 0x220

0x21a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x21b: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21c: Push("head")
0x21d: @ UnlookAsync(Stack[-1])
0x21e: Pop(1)
0x21f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x220: Return(); Pop(0)

0x221: PushEmpty()
0x222: Call2 0x280

0x223: Pop(0)
0x224: Push((int) 10)
0x225: @ KillTimer(Stack[-1])
0x226: Pop(1)
0x227: Push( Stack[2 + Tasks[-1].StackPointer] )
0x228: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x229: Push("head")
0x22a: @ UnlookAsync(Stack[-1])
0x22b: Pop(1)
0x22c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x22d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x22e: Return(); Pop(0)

0x22f: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x230: @ WaitForAnimEnd()
0x231: Pop(0)
0x232: PushEmpty(bool)
0x233: Call2 0x28d

0x234: Pop(0)
0x235: Pop(1); Push((bool) Stack[-1] == 0)
0x236: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x237: Return(); Pop(14)

0x238: PushEmpty(int)
0x239: Call2 0x342

0x23a: Stack[-8] = Stack[-1]
0x23b: Pop(1)
0x23c: Stack[-6] = (int) 0
0x23d: PushEmpty(bool)
0x23e: Stack[-1] = (bool) 0
0x23f: Push((int) 5)
0x240: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x242: PushEmpty(bool)
0x243: Call2 0x28d

0x244: Pop(0)
0x245: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x246: Stack[-1] = (bool) 1
0x247: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x248: Push((int) 3)
0x249: @ irand(Stack[-6], Stack[-1])
0x24a: Pop(1)
0x24b: Push((int) 0)
0x24c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x24e: Push(Stack[-7])
0x24f: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x250: @ irand(Stack[-4], Stack[-7])
0x251: Pop(0)
0x252: Push("all")
0x253: PushEmpty(string, int)
0x254: Stack[-1] = Stack[-7]
0x255: Call2 0x33b

0x256: Pop(1)
0x257: @ PlayAnimation(Stack[-2], Stack[-1])
0x258: Pop(2)
0x259: @ WaitForAnimEnd(Stack[-3])
0x25a: Pop(0)
0x25b: Pop(0); Push((bool) Stack[-3] == 0)
0x25c: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25d: GOTO 0x27b

0x25e: GOTO 0x270

0x25f: Push((int) 1)
0x260: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x262: Push((int) 4)
0x263: @ rand(Stack[-3], Stack[-1])
0x264: Pop(1)
0x265: Push((int) 1)
0x266: Pop(1); Push(Stack[-3] + Stack[-1]);
0x267: @ Sleep(Stack[-1], Stack[-2])
0x268: Pop(1)
0x269: Pop(0); Push((bool) Stack[-1] == 0)
0x26a: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26b: GOTO 0x27b

0x26c: GOTO 0x270

0x26d: Push(Stack[-6])
0x26e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26f: GOTO 0x27b

0x270: PushEmpty(bool)
0x271: Call2 0x27e

0x272: Pop(0)
0x273: Pop(1); Push((bool) Stack[-1] == 0)
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: GOTO 0x27b

0x276: @ ResetAAS()
0x277: Pop(0)
0x278: Push((int) 1)
0x279: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x27a: GOTO 0x23d

0x27b: @ ResetAAS()
0x27c: Pop(0)
0x27d: Return(); Pop(14)

0x27e: Stack[-1] = (bool) 1
0x27f: Return(); Pop(0)

0x280: @ StopAnimation()
0x281: Pop(0)
0x282: @ StopGroup0()
0x283: Pop(0)
0x284: Return(); Pop(0)

0x285: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x286: @ GetPosition(Stack[-3])
0x287: Pop(0)
0x288: @@ GetPosition(Stack[-2])
0x289: Pop(0)
0x28a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x28b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x28c: Return(); Pop(6)

0x28d: PushEmpty(bool, bool)
0x28e: @ IsLoaded(Stack[-1])
0x28f: Pop(0)
0x290: Stack[-3] = Stack[-1]
0x291: Return(); Pop(2)

0x292: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x293: @@ GetPosition(Stack[-8])
0x294: Pop(0)
0x295: @@ GetEyesHeight(Stack[-9])
0x296: Pop(0)
0x297: Push(CvectorIndex(Stack[-8], 1))
0x298: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x299: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x29a: @ GetPosition(Stack[-7])
0x29b: Pop(0)
0x29c: @ GetEyesHeight(Stack[-9])
0x29d: Pop(0)
0x29e: Push(CvectorIndex(Stack[-7], 1))
0x29f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2a1: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2a2: Push(CvectorIndex(Stack[-6], 1))
0x2a3: Stack[-1] = (int) 0
0x2a4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2a5: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2a6: Pop(1); Push(Sqrt(Stack[-1]))
0x2a7: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2a8: Stack[-5] = -Stack[-6]; Pop(0);
0x2a9: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2aa: PushEmpty(cvector, cvector)
0x2ab: Push(CVector(0.0, 1.0, 0.0))
0x2ac: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2ad: Call2 0x320

0x2ae: Pop(1)
0x2af: Push((int) 25)
0x2b0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2b1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b2: Push(CVector(0.0, 10.0, 0.0))
0x2b3: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2b4: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2b5: @ IsOverrideActive(Stack[-2])
0x2b6: Pop(0)
0x2b7: Push(Stack[-2])
0x2b8: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b9: Stack[-21] = (bool) 0
0x2ba: Return(); Pop(18)

0x2bb: @ StopWorld()
0x2bc: Pop(0)
0x2bd: Push((bool) 1)
0x2be: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2bf: Pop(1)
0x2c0: Push(CvectorIndex(Stack[-4], 0))
0x2c1: Push(CvectorIndex(Stack[-5], 2))
0x2c2: @ Rotate(Stack[-2], Stack[-1])
0x2c3: Pop(2)
0x2c4: PushEmpty(bool)
0x2c5: Call2 0x3c2

0x2c6: Pop(0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: GOTO 0x2d1

0x2c9: Push("head")
0x2ca: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2cb: Pop(1)
0x2cc: Push(Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2ce: Push("head")
0x2cf: @ LookAsyncCamera(Stack[-1])
0x2d0: Pop(1)
0x2d1: @ CameraWaitForPlayFinish()
0x2d2: Pop(0)
0x2d3: @ ResumeWorld()
0x2d4: Pop(0)
0x2d5: Stack[-21] = (bool) 1
0x2d6: Return(); Pop(18)

0x2d7: PushEmpty(bool, bool)
0x2d8: Push((bool) 1)
0x2d9: @ CameraSwitchToNormal(Stack[-1])
0x2da: Pop(1)
0x2db: PushEmpty(bool)
0x2dc: Call2 0x3c2

0x2dd: Pop(0)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2df: GOTO 0x2e8

0x2e0: Push("head")
0x2e1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e2: Pop(1)
0x2e3: Push(Stack[-1])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e5: Push("head")
0x2e6: @ UnlookAsync(Stack[-1])
0x2e7: Pop(1)
0x2e8: Return(); Pop(2)

0x2e9: PushEmpty(bool, float, float, bool, float, float)
0x2ea: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2eb: Pop(0)
0x2ec: Push(Stack[-3])
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2ee: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2ef: Pop(0)
0x2f0: Push((bool) 0)
0x2f1: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2f2: Pop(1)
0x2f3: GOTO 0x2f8

0x2f4: Push("Can't find lsh animation : ")
0x2f5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2f6: @ Trace(Stack[-1])
0x2f7: Pop(1)
0x2f8: Return(); Pop(6)

0x2f9: PushEmpty(bool, float, float, bool, float, float)
0x2fa: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2fb: Pop(0)
0x2fc: Push(Stack[-3])
0x2fd: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2fe: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2ff: Pop(0)
0x300: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x301: Pop(0)
0x302: GOTO 0x307

0x303: Push("Can't find lsh animation : ")
0x304: Pop(1); Push(Stack[-1] + Stack[-9]);
0x305: @ Trace(Stack[-1])
0x306: Pop(1)
0x307: Return(); Pop(6)

0x308: PushEmpty(float, cvector, float, cvector)
0x309: @@ GetEyesHeight(Stack[-2])
0x30a: Pop(0)
0x30b: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x30c: Push(CvectorIndex(Stack[-1], 1))
0x30d: Stack[-1] = Stack[-3]
0x30e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x30f: Push("head")
0x310: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x311: Pop(1)
0x312: Return(); Pop(4)

0x313: PushEmpty(bool)
0x314: Call2 0x3c2

0x315: Pop(0)
0x316: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x317: @ lshStopSpeech()
0x318: Pop(0)
0x319: Return(); Pop(0)

0x31a: PushEmpty(object, object)
0x31b: @ self(Stack[-1])
0x31c: Pop(0)
0x31d: Stack[-3] = Stack[-1]
0x31e: Return(); Pop(2)

0x31f: Stack[-1] = 0
0x320: PushEmpty(float, float)
0x321: Pop(0); Push(Stack[-3] | Stack[-3]);
0x322: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x323: Push((float)0.0)
0x324: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x326: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x327: Return(); Pop(2)

0x328: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x329: Return(); Pop(2)

0x32a: PushEmpty(int, int)
0x32b: @ GetVariable(Stack[-3], Stack[-1])
0x32c: Pop(0)
0x32d: Stack[-4] = Stack[-1]
0x32e: Return(); Pop(2)

0x32f: PushEmpty(object, object)
0x330: @ FindActor(Stack[-1], Stack[-4])
0x331: Pop(0)
0x332: Pop(0); Push((bool) Stack[-1] == 0)
0x333: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x334: Stack[-5] = (bool) 0
0x335: Return(); Pop(2)

0x336: @ Trigger(Stack[-1], Stack[-3])
0x337: Pop(0)
0x338: Stack[-5] = (bool) 1
0x339: Return(); Pop(2)

0x33a: Stack[-1] = 0
0x33b: PushEmpty(string, string)
0x33c: Stack[-1] = "idle"
0x33d: Push(Stack[-3])
0x33e: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x340: Stack[-4] = Stack[-1]
0x341: Return(); Pop(2)

0x342: PushEmpty(int, bool, int, bool)
0x343: Stack[-2] = (int) 0
0x344: Push("all")
0x345: PushEmpty(string, int)
0x346: Stack[-1] = Stack[-5]
0x347: Call2 0x33b

0x348: Pop(1)
0x349: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x34a: Pop(2)
0x34b: Pop(0); Push((bool) Stack[-1] == 0)
0x34c: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34d: GOTO 0x351

0x34e: Push((int) 1)
0x34f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x350: GOTO 0x344

0x351: Stack[-5] = Stack[-2]
0x352: Return(); Pop(4)

0x353: PushEmpty()
0x354: Push("b5q02")
0x355: Push((int) 2)
0x356: @ SetVariable(Stack[-2], Stack[-1])
0x357: Pop(2)
0x358: PushEmpty()
0x359: Call2 0x373

0x35a: Pop(0)
0x35b: PushEmpty(bool, string, string)
0x35c: Stack[-2] = "quest_b5_02"
0x35d: Stack[-1] = "remove_prophet"
0x35e: Call2 0x32f

0x35f: Pop(3)
0x360: Return(); Pop(0)

0x361: PushEmpty()
0x362: Push("oob5Prophet1")
0x363: Push((int) 1)
0x364: @ SetVariable(Stack[-2], Stack[-1])
0x365: Pop(2)
0x366: Return(); Pop(0)

0x367: PushEmpty()
0x368: PushEmpty(int, string)
0x369: Stack[-1] = "oob5Prophet1"
0x36a: Call2 0x32a

0x36b: Pop(1)
0x36c: Push((int) 0)
0x36d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x36e: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36f: Stack[-2] = (bool) 1
0x370: Return(); Pop(0)

0x371: Stack[-2] = (bool) 0
0x372: Return(); Pop(0)

0x373: PushEmpty(object, object)
0x374: Push((int) 251)
0x375: Push((int) 2)
0x376: Push((int) 520667)
0x377: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x378: Pop(3)
0x379: PushEmpty(bool, object, int)
0x37a: Stack[-2] = Stack[-4]
0x37b: Stack[-1] = (int) 249
0x37c: Call2 0x38d

0x37d: Pop(3)
0x37e: Return(); Pop(2)

0x37f: Stack[-1] = 0
0x380: PushEmpty(object, object)
0x381: @ GetDiaryRoot(Stack[-1])
0x382: Pop(0)
0x383: Pop(0); Push((bool) Stack[-1] == 0)
0x384: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x385: Push("Can't retrieve diary root")
0x386: @ Trace(Stack[-1])
0x387: Pop(1)
0x388: Stack[-3] = (bool) 0
0x389: Return(); Pop(2)

0x38a: Stack[-3] = Stack[-1]
0x38b: Return(); Pop(2)

0x38c: Stack[-1] = 0
0x38d: PushEmpty(object, object, int, object, object, int)
0x38e: PushEmpty(object)
0x38f: Call2 0x380

0x390: Stack[-4] = Stack[-1]
0x391: Pop(1)
0x392: @@ Find(Stack[-7], Stack[-2])
0x393: Pop(0)
0x394: Pop(0); Push((bool) Stack[-2] == 0)
0x395: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x396: Push("Can't find diary parent with id: ")
0x397: Pop(1); Push(Stack[-1] + Stack[-8]);
0x398: @ Trace(Stack[-1])
0x399: Pop(1)
0x39a: Stack[-9] = (bool) 0
0x39b: Return(); Pop(6)

0x39c: @@ AddChild(Stack[-8])
0x39d: Pop(0)
0x39e: Push((int) 7)
0x39f: @ SendWorldWndMessage(Stack[-1])
0x3a0: Pop(1)
0x3a1: @@ GetCategory(Stack[-1])
0x3a2: Pop(0)
0x3a3: @ SetDiarySection(Stack[-1])
0x3a4: Pop(0)
0x3a5: Stack[-9] = (bool) 0
0x3a6: Return(); Pop(6)

0x3a7: Stack[-2] = 0
0x3a8: Stack[-3] = 0
0x3a9: PushEmpty(int, int)
0x3aa: Push("branch")
0x3ab: @ GetVariable(Stack[-1], Stack[-2])
0x3ac: Pop(1)
0x3ad: Push((int) 0)
0x3ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3af: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b0: Stack[-3] = (int) 1
0x3b1: Return(); Pop(2)

0x3b2: GOTO 0x3b8

0x3b3: Push((int) 1)
0x3b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b6: Stack[-3] = (int) 2
0x3b7: Return(); Pop(2)

0x3b8: Stack[-3] = (int) 3
0x3b9: Return(); Pop(2)

0x3ba: Stack[-1] = (int) 518716
0x3bb: Return(); Pop(0)

0x3bc: Stack[-1] = (int) 518715
0x3bd: Return(); Pop(0)

0x3be: Stack[-1] = "ui/NPC_Prophet.png"
0x3bf: Return(); Pop(0)

0x3c0: Stack[-1] = "ui/NPC_Prophet_b.png"
0x3c1: Return(); Pop(0)

0x3c2: Stack[-1] = (bool) 0
0x3c3: Return(); Pop(0)

