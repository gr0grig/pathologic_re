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
	ook9Littleboy1
	k9q01ChildTalk
	k9q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

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
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	HasAnimation (3 args)

RunOp = 0x164
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb8 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x16a Vars = (object)
		EVENT_26 Op = 0x19b Vars = (string)
		EVENT_6 Op = 0x1a3 Vars = ()
		EVENT_7 Op = 0x1e4 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x26c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x378

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x376

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x37a

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x37c

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x365

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
0x41: Call2 0x2b1

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
0x52: Call2 0x323

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x309

0x59: Pop(2)
0x5a: PushEmpty(object, object)
0x5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d: Call2 0x30f

0x5e: Pop(2)
0x5f: PushEmpty(string)
0x60: Stack[-1] = "Neutral"
0x61: Call2 0xa2

0x62: Pop(1)
0x63: Push((int) 529790)
0x64: @@ SetMessage(Stack[-1])
0x65: Pop(1)
0x66: @@ ClearReplies()
0x67: Pop(0)
0x68: Push((int) 529794)
0x69: Push((int) 31253)
0x6a: Push((int) 31252)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x84

0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral"
0x70: Call2 0xa2

0x71: Pop(1)
0x72: Push((int) 529791)
0x73: @@ SetMessage(Stack[-1])
0x74: Pop(1)
0x75: @@ ClearReplies()
0x76: Pop(0)
0x77: Push((int) 529792)
0x78: Push((int) -1)
0x79: Push((int) 31250)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: Push((int) 529793)
0x7d: Push((int) -1)
0x7e: Push((int) 31251)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: GOTO 0x84

0x82: Return(); Pop(0)

0x83: GOTO 0x4e

0x84: PushEmpty(bool)
0x85: Call2 0x37e

0x86: Pop(0)
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: @ lshWaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f: Call2 0x2c3

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
0xa4: Call2 0x37e

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
0xb4: Call2 0x2d3

0xb5: Pop(2)
0xb6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Push((int) 1)
0xba: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0x2ed

0xbd: Pop(0)
0xbe: Push((int) 31248)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xc1: PushEmpty(bool, object)
0xc2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Call2 0x323

0xc4: Pop(1)
0xc5: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call2 0x309

0xca: Pop(2)
0xcb: PushEmpty(object, object)
0xcc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce: Call2 0x30f

0xcf: Pop(2)
0xd0: PushEmpty(string)
0xd1: Stack[-1] = "Neutral"
0xd2: Call2 0xa2

0xd3: Pop(1)
0xd4: Push((int) 529790)
0xd5: @@ SetMessage(Stack[-1])
0xd6: Pop(1)
0xd7: @@ ClearReplies()
0xd8: Pop(0)
0xd9: Push((int) 529794)
0xda: Push((int) 31253)
0xdb: Push((int) 31252)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: PushEmpty(string)
0xe0: Stack[-1] = "Neutral"
0xe1: Call2 0xa2

0xe2: Pop(1)
0xe3: Push((int) 529791)
0xe4: @@ SetMessage(Stack[-1])
0xe5: Pop(1)
0xe6: @@ ClearReplies()
0xe7: Pop(0)
0xe8: Push((int) 529792)
0xe9: Push((int) -1)
0xea: Push((int) 31250)
0xeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec: Pop(3)
0xed: Push((int) 529793)
0xee: Push((int) -1)
0xef: Push((int) 31251)
0xf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: Return(); Pop(0)

0xf3: Push((int) 31253)
0xf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Neutral"
0xf8: Call2 0xa2

0xf9: Pop(1)
0xfa: Push((int) 529795)
0xfb: @@ SetMessage(Stack[-1])
0xfc: Pop(1)
0xfd: @@ ClearReplies()
0xfe: Pop(0)
0xff: Push((int) 529796)
0x100: Push((int) 31255)
0x101: Push((int) 31254)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Return(); Pop(0)

0x105: Push((int) 31255)
0x106: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x108: PushEmpty(string)
0x109: Stack[-1] = "Neutral"
0x10a: Call2 0xa2

0x10b: Pop(1)
0x10c: Push((int) 529797)
0x10d: @@ SetMessage(Stack[-1])
0x10e: Pop(1)
0x10f: @@ ClearReplies()
0x110: Pop(0)
0x111: Push((int) 529798)
0x112: Push((int) 31257)
0x113: Push((int) 31256)
0x114: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115: Pop(3)
0x116: Push((int) 529803)
0x117: Push((int) 31262)
0x118: Push((int) 31261)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Return(); Pop(0)

0x11c: Push((int) 31257)
0x11d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x11f: PushEmpty(string)
0x120: Stack[-1] = "Neutral"
0x121: Call2 0xa2

0x122: Pop(1)
0x123: Push((int) 529799)
0x124: @@ SetMessage(Stack[-1])
0x125: Pop(1)
0x126: @@ ClearReplies()
0x127: Pop(0)
0x128: Push((int) 529800)
0x129: Push((int) 31259)
0x12a: Push((int) 31258)
0x12b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c: Pop(3)
0x12d: Return(); Pop(0)

0x12e: Push((int) 31259)
0x12f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x131: PushEmpty(string)
0x132: Stack[-1] = "Neutral"
0x133: Call2 0xa2

0x134: Pop(1)
0x135: Push((int) 529801)
0x136: @@ SetMessage(Stack[-1])
0x137: Pop(1)
0x138: @@ ClearReplies()
0x139: Pop(0)
0x13a: Push((int) 529802)
0x13b: Push((int) 31262)
0x13c: Push((int) 31260)
0x13d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e: Pop(3)
0x13f: Return(); Pop(0)

0x140: Push((int) 31262)
0x141: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Neutral"
0x145: Call2 0xa2

0x146: Pop(1)
0x147: Push((int) 529804)
0x148: @@ SetMessage(Stack[-1])
0x149: Pop(1)
0x14a: @@ ClearReplies()
0x14b: Pop(0)
0x14c: Push((int) 529805)
0x14d: Push((int) -1)
0x14e: Push((int) 31264)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: Push((int) 529806)
0x152: Push((int) -1)
0x153: Push((int) 31265)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: Return(); Pop(0)

0x157: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x158: PushEmpty(bool)
0x159: Call2 0x37e

0x15a: Pop(0)
0x15b: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15c: @ lshStopAnimation()
0x15d: Pop(0)
0x15e: GOTO 0x161

0x15f: @ StopAnimation()
0x160: Pop(0)
0x161: Return(); Pop(0)

0x162: GOTO 0xb9

0x163: Return(); Pop(0)

0x164: PushEmpty(float, float)
0x165: Stack[-2] = (int) 300
0x166: Stack[-1] = (int) 100
0x167: Call2 0x175

0x168: Pop(2)
0x169: Return(); Pop(0)

0x16a: PushEmpty()
0x16b: PushEmpty()
0x16c: Call2 0x1fb

0x16d: Pop(0)
0x16e: PushEmpty(int, object)
0x16f: Stack[-1] = Stack[-3]
0x170: Push(-2, 1); TaskCall(0)
0x171: Call2 0x0

0x172: Pop(-2, 1); TaskReturn
0x173: Pop(2)
0x174: Return(); Pop(0)

0x175: PushEmpty(float, bool, float, bool)
0x176: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x177: Push((int) 3)
0x178: @ rand(Stack[-3], Stack[-1])
0x179: Pop(1)
0x17a: Push((int) 3)
0x17b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x17c: @ Sleep(Stack[-1], Stack[-2])
0x17d: Pop(1)
0x17e: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x17f: PushEmpty(float, float)
0x180: Stack[-2] = Stack[-8]
0x181: Stack[-1] = Stack[-7]
0x182: Call2 0x1ba

0x183: Pop(2)
0x184: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x185: GOTO 0x177

0x186: Return(); Pop(4)

0x187: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x188: PushEmpty(bool)
0x189: Stack[-1] = (bool) 0
0x18a: PushEmpty(bool)
0x18b: Call2 0x267

0x18c: Pop(0)
0x18d: Pop(1); Push((bool) Stack[-1] == 0)
0x18e: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18f: PushEmpty(bool)
0x190: Call2 0x1b8

0x191: Pop(0)
0x192: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x193: Stack[-1] = (bool) 1
0x194: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x195: PushEmpty(object)
0x196: Call2 0x2f4

0x197: Pop(0)
0x198: @ RemoveActor(Stack[-1])
0x199: Pop(1)
0x19a: Return(); Pop(0)

0x19b: PushEmpty()
0x19c: Push("cleanup")
0x19d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19f: PushEmpty()
0x1a0: Call2 0x187

0x1a1: Pop(0)
0x1a2: Return(); Pop(0)

0x1a3: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a5: PushEmpty()
0x1a6: Call2 0x1fb

0x1a7: Pop(0)
0x1a8: PushEmpty(bool)
0x1a9: Stack[-1] = (bool) 0
0x1aa: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1ac: PushEmpty(bool)
0x1ad: Call2 0x1b8

0x1ae: Pop(0)
0x1af: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1b0: Stack[-1] = (bool) 1
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b2: PushEmpty(object)
0x1b3: Call2 0x2f4

0x1b4: Pop(0)
0x1b5: @ RemoveActor(Stack[-1])
0x1b6: Pop(1)
0x1b7: Return(); Pop(0)

0x1b8: Stack[-1] = (bool) 1
0x1b9: Return(); Pop(0)

0x1ba: PushEmpty()
0x1bb: PushEmpty(bool)
0x1bc: Call2 0x267

0x1bd: Pop(0)
0x1be: Pop(1); Push((bool) Stack[-1] == 0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: Return(); Pop(0)

0x1c1: Push("player")
0x1c2: @ FindActor(Stack[-4], Stack[-1])
0x1c3: Pop(1)
0x1c4: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1c5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1c6: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1c7: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1c8: Push((int) 10)
0x1c9: Push((float)1.0)
0x1ca: @ SetTimer(Stack[-2], Stack[-1])
0x1cb: Pop(2)
0x1cc: PushEmpty()
0x1cd: Call2 0x209

0x1ce: Pop(0)
0x1cf: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d1: Push((int) 10)
0x1d2: @ KillTimer(Stack[-1])
0x1d3: Pop(1)
0x1d4: Return(); Pop(0)

0x1d5: PushEmpty(float, float)
0x1d6: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d8: Stack[-3] = (bool) 0
0x1d9: Return(); Pop(2)

0x1da: PushEmpty(float, object)
0x1db: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1dc: Call2 0x25f

0x1dd: Pop(1)
0x1de: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1df: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e1: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1e2: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1e3: Return(); Pop(2)

0x1e4: PushEmpty()
0x1e5: Push((int) 10)
0x1e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1e8: PushEmpty(bool)
0x1e9: Call2 0x1d5

0x1ea: Pop(0)
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ec: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1ee: PushEmpty(object)
0x1ef: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1f0: Call2 0x2e2

0x1f1: Pop(1)
0x1f2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1f3: GOTO 0x1fa

0x1f4: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f6: Push("head")
0x1f7: @ UnlookAsync(Stack[-1])
0x1f8: Pop(1)
0x1f9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1fa: Return(); Pop(0)

0x1fb: PushEmpty()
0x1fc: Call2 0x25a

0x1fd: Pop(0)
0x1fe: Push((int) 10)
0x1ff: @ KillTimer(Stack[-1])
0x200: Pop(1)
0x201: Push( Stack[2 + Tasks[-1].StackPointer] )
0x202: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x203: Push("head")
0x204: @ UnlookAsync(Stack[-1])
0x205: Pop(1)
0x206: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x207: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x208: Return(); Pop(0)

0x209: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x20a: @ WaitForAnimEnd()
0x20b: Pop(0)
0x20c: PushEmpty(bool)
0x20d: Call2 0x267

0x20e: Pop(0)
0x20f: Pop(1); Push((bool) Stack[-1] == 0)
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: Return(); Pop(14)

0x212: PushEmpty(int)
0x213: Call2 0x387

0x214: Stack[-8] = Stack[-1]
0x215: Pop(1)
0x216: Stack[-6] = (int) 0
0x217: PushEmpty(bool)
0x218: Stack[-1] = (bool) 0
0x219: Push((int) 5)
0x21a: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x21c: PushEmpty(bool)
0x21d: Call2 0x267

0x21e: Pop(0)
0x21f: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x220: Stack[-1] = (bool) 1
0x221: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x222: Push((int) 3)
0x223: @ irand(Stack[-6], Stack[-1])
0x224: Pop(1)
0x225: Push((int) 0)
0x226: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x228: Push(Stack[-7])
0x229: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x22a: @ irand(Stack[-4], Stack[-7])
0x22b: Pop(0)
0x22c: Push("all")
0x22d: PushEmpty(string, int)
0x22e: Stack[-1] = Stack[-7]
0x22f: Call2 0x380

0x230: Pop(1)
0x231: @ PlayAnimation(Stack[-2], Stack[-1])
0x232: Pop(2)
0x233: @ WaitForAnimEnd(Stack[-3])
0x234: Pop(0)
0x235: Pop(0); Push((bool) Stack[-3] == 0)
0x236: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x237: GOTO 0x255

0x238: GOTO 0x24a

0x239: Push((int) 1)
0x23a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x23c: Push((int) 4)
0x23d: @ rand(Stack[-3], Stack[-1])
0x23e: Pop(1)
0x23f: Push((int) 1)
0x240: Pop(1); Push(Stack[-3] + Stack[-1]);
0x241: @ Sleep(Stack[-1], Stack[-2])
0x242: Pop(1)
0x243: Pop(0); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: GOTO 0x255

0x246: GOTO 0x24a

0x247: Push(Stack[-6])
0x248: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x249: GOTO 0x255

0x24a: PushEmpty(bool)
0x24b: Call2 0x258

0x24c: Pop(0)
0x24d: Pop(1); Push((bool) Stack[-1] == 0)
0x24e: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24f: GOTO 0x255

0x250: @ ResetAAS()
0x251: Pop(0)
0x252: Push((int) 1)
0x253: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x254: GOTO 0x217

0x255: @ ResetAAS()
0x256: Pop(0)
0x257: Return(); Pop(14)

0x258: Stack[-1] = (bool) 1
0x259: Return(); Pop(0)

0x25a: @ StopAnimation()
0x25b: Pop(0)
0x25c: @ StopGroup0()
0x25d: Pop(0)
0x25e: Return(); Pop(0)

0x25f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x260: @ GetPosition(Stack[-3])
0x261: Pop(0)
0x262: @@ GetPosition(Stack[-2])
0x263: Pop(0)
0x264: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x265: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x266: Return(); Pop(6)

0x267: PushEmpty(bool, bool)
0x268: @ IsLoaded(Stack[-1])
0x269: Pop(0)
0x26a: Stack[-3] = Stack[-1]
0x26b: Return(); Pop(2)

0x26c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x26d: @@ GetPosition(Stack[-8])
0x26e: Pop(0)
0x26f: @@ GetEyesHeight(Stack[-9])
0x270: Pop(0)
0x271: Push(CvectorIndex(Stack[-8], 1))
0x272: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x273: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x274: @ GetPosition(Stack[-7])
0x275: Pop(0)
0x276: @ GetEyesHeight(Stack[-9])
0x277: Pop(0)
0x278: Push(CvectorIndex(Stack[-7], 1))
0x279: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x27a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x27b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x27c: Push(CvectorIndex(Stack[-6], 1))
0x27d: Stack[-1] = (int) 0
0x27e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x27f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x280: Pop(1); Push(Sqrt(Stack[-1]))
0x281: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x282: Stack[-5] = -Stack[-6]; Pop(0);
0x283: Pop(0); Push(Stack[-6] * Stack[-19]);
0x284: PushEmpty(cvector, cvector)
0x285: Push(CVector(0.0, 1.0, 0.0))
0x286: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x287: Call2 0x2fa

0x288: Pop(1)
0x289: Push((int) 25)
0x28a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x28b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x28c: Push(CVector(0.0, 10.0, 0.0))
0x28d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x28e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x28f: @ IsOverrideActive(Stack[-2])
0x290: Pop(0)
0x291: Push(Stack[-2])
0x292: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x293: Stack[-21] = (bool) 0
0x294: Return(); Pop(18)

0x295: @ StopWorld()
0x296: Pop(0)
0x297: Push((bool) 1)
0x298: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x299: Pop(1)
0x29a: Push(CvectorIndex(Stack[-4], 0))
0x29b: Push(CvectorIndex(Stack[-5], 2))
0x29c: @ Rotate(Stack[-2], Stack[-1])
0x29d: Pop(2)
0x29e: PushEmpty(bool)
0x29f: Call2 0x37e

0x2a0: Pop(0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a2: GOTO 0x2ab

0x2a3: Push("head")
0x2a4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2a5: Pop(1)
0x2a6: Push(Stack[-1])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a8: Push("head")
0x2a9: @ LookAsyncCamera(Stack[-1])
0x2aa: Pop(1)
0x2ab: @ CameraWaitForPlayFinish()
0x2ac: Pop(0)
0x2ad: @ ResumeWorld()
0x2ae: Pop(0)
0x2af: Stack[-21] = (bool) 1
0x2b0: Return(); Pop(18)

0x2b1: PushEmpty(bool, bool)
0x2b2: Push((bool) 1)
0x2b3: @ CameraSwitchToNormal(Stack[-1])
0x2b4: Pop(1)
0x2b5: PushEmpty(bool)
0x2b6: Call2 0x37e

0x2b7: Pop(0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: GOTO 0x2c2

0x2ba: Push("head")
0x2bb: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2bc: Pop(1)
0x2bd: Push(Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2bf: Push("head")
0x2c0: @ UnlookAsync(Stack[-1])
0x2c1: Pop(1)
0x2c2: Return(); Pop(2)

0x2c3: PushEmpty(bool, float, float, bool, float, float)
0x2c4: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2c5: Pop(0)
0x2c6: Push(Stack[-3])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2c8: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2c9: Pop(0)
0x2ca: Push((bool) 0)
0x2cb: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2cc: Pop(1)
0x2cd: GOTO 0x2d2

0x2ce: Push("Can't find lsh animation : ")
0x2cf: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2d0: @ Trace(Stack[-1])
0x2d1: Pop(1)
0x2d2: Return(); Pop(6)

0x2d3: PushEmpty(bool, float, float, bool, float, float)
0x2d4: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2d5: Pop(0)
0x2d6: Push(Stack[-3])
0x2d7: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2d8: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2d9: Pop(0)
0x2da: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2db: Pop(0)
0x2dc: GOTO 0x2e1

0x2dd: Push("Can't find lsh animation : ")
0x2de: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2df: @ Trace(Stack[-1])
0x2e0: Pop(1)
0x2e1: Return(); Pop(6)

0x2e2: PushEmpty(float, cvector, float, cvector)
0x2e3: @@ GetEyesHeight(Stack[-2])
0x2e4: Pop(0)
0x2e5: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2e6: Push(CvectorIndex(Stack[-1], 1))
0x2e7: Stack[-1] = Stack[-3]
0x2e8: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2e9: Push("head")
0x2ea: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2eb: Pop(1)
0x2ec: Return(); Pop(4)

0x2ed: PushEmpty(bool)
0x2ee: Call2 0x37e

0x2ef: Pop(0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f1: @ lshStopSpeech()
0x2f2: Pop(0)
0x2f3: Return(); Pop(0)

0x2f4: PushEmpty(object, object)
0x2f5: @ self(Stack[-1])
0x2f6: Pop(0)
0x2f7: Stack[-3] = Stack[-1]
0x2f8: Return(); Pop(2)

0x2f9: Stack[-1] = 0
0x2fa: PushEmpty(float, float)
0x2fb: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2fc: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2fd: Push((float)0.0)
0x2fe: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x300: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x301: Return(); Pop(2)

0x302: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x303: Return(); Pop(2)

0x304: PushEmpty(int, int)
0x305: @ GetVariable(Stack[-3], Stack[-1])
0x306: Pop(0)
0x307: Stack[-4] = Stack[-1]
0x308: Return(); Pop(2)

0x309: PushEmpty()
0x30a: Push("ook9Littleboy1")
0x30b: Push((int) 1)
0x30c: @ SetVariable(Stack[-2], Stack[-1])
0x30d: Pop(2)
0x30e: Return(); Pop(0)

0x30f: PushEmpty()
0x310: PushEmpty(int, string)
0x311: Stack[-1] = "k9q01ChildTalk"
0x312: Call2 0x304

0x313: Pop(1)
0x314: Push((int) 0)
0x315: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x317: Push("k9q01ChildTalk")
0x318: Push((int) 1)
0x319: @ SetVariable(Stack[-2], Stack[-1])
0x31a: Pop(2)
0x31b: Push("k9q01")
0x31c: Push((int) 7)
0x31d: @ SetVariable(Stack[-2], Stack[-1])
0x31e: Pop(2)
0x31f: PushEmpty()
0x320: Call2 0x32f

0x321: Pop(0)
0x322: Return(); Pop(0)

0x323: PushEmpty()
0x324: PushEmpty(int, string)
0x325: Stack[-1] = "ook9Littleboy1"
0x326: Call2 0x304

0x327: Pop(1)
0x328: Push((int) 0)
0x329: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32b: Stack[-2] = (bool) 1
0x32c: Return(); Pop(0)

0x32d: Stack[-2] = (bool) 0
0x32e: Return(); Pop(0)

0x32f: PushEmpty(object, object)
0x330: Push((int) 524)
0x331: Push((int) 1)
0x332: Push((int) 529816)
0x333: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x334: Pop(3)
0x335: PushEmpty(bool, object, int)
0x336: Stack[-2] = Stack[-4]
0x337: Stack[-1] = (int) 517
0x338: Call2 0x349

0x339: Pop(3)
0x33a: Return(); Pop(2)

0x33b: Stack[-1] = 0
0x33c: PushEmpty(object, object)
0x33d: @ GetDiaryRoot(Stack[-1])
0x33e: Pop(0)
0x33f: Pop(0); Push((bool) Stack[-1] == 0)
0x340: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x341: Push("Can't retrieve diary root")
0x342: @ Trace(Stack[-1])
0x343: Pop(1)
0x344: Stack[-3] = (bool) 0
0x345: Return(); Pop(2)

0x346: Stack[-3] = Stack[-1]
0x347: Return(); Pop(2)

0x348: Stack[-1] = 0
0x349: PushEmpty(object, object, int, object, object, int)
0x34a: PushEmpty(object)
0x34b: Call2 0x33c

0x34c: Stack[-4] = Stack[-1]
0x34d: Pop(1)
0x34e: @@ Find(Stack[-7], Stack[-2])
0x34f: Pop(0)
0x350: Pop(0); Push((bool) Stack[-2] == 0)
0x351: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x352: Push("Can't find diary parent with id: ")
0x353: Pop(1); Push(Stack[-1] + Stack[-8]);
0x354: @ Trace(Stack[-1])
0x355: Pop(1)
0x356: Stack[-9] = (bool) 0
0x357: Return(); Pop(6)

0x358: @@ AddChild(Stack[-8])
0x359: Pop(0)
0x35a: Push((int) 7)
0x35b: @ SendWorldWndMessage(Stack[-1])
0x35c: Pop(1)
0x35d: @@ GetCategory(Stack[-1])
0x35e: Pop(0)
0x35f: @ SetDiarySection(Stack[-1])
0x360: Pop(0)
0x361: Stack[-9] = (bool) 0
0x362: Return(); Pop(6)

0x363: Stack[-2] = 0
0x364: Stack[-3] = 0
0x365: PushEmpty(int, int)
0x366: Push("branch")
0x367: @ GetVariable(Stack[-1], Stack[-2])
0x368: Pop(1)
0x369: Push((int) 0)
0x36a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36c: Stack[-3] = (int) 1
0x36d: Return(); Pop(2)

0x36e: GOTO 0x374

0x36f: Push((int) 1)
0x370: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x372: Stack[-3] = (int) 2
0x373: Return(); Pop(2)

0x374: Stack[-3] = (int) 3
0x375: Return(); Pop(2)

0x376: Stack[-1] = (int) 515560
0x377: Return(); Pop(0)

0x378: Stack[-1] = (int) 503345
0x379: Return(); Pop(0)

0x37a: Stack[-1] = "ui/NPC_Citizen3.png"
0x37b: Return(); Pop(0)

0x37c: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x37d: Return(); Pop(0)

0x37e: Stack[-1] = (bool) 0
0x37f: Return(); Pop(0)

0x380: PushEmpty(string, string)
0x381: Stack[-1] = "idle"
0x382: Push(Stack[-3])
0x383: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x384: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x385: Stack[-4] = Stack[-1]
0x386: Return(); Pop(2)

0x387: PushEmpty(int, bool, int, bool)
0x388: Stack[-2] = (int) 0
0x389: Push("all")
0x38a: PushEmpty(string, int)
0x38b: Stack[-1] = Stack[-5]
0x38c: Call2 0x380

0x38d: Pop(1)
0x38e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x38f: Pop(2)
0x390: Pop(0); Push((bool) Stack[-1] == 0)
0x391: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x392: GOTO 0x396

0x393: Push((int) 1)
0x394: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x395: GOTO 0x389

0x396: Stack[-5] = Stack[-2]
0x397: Return(); Pop(4)

