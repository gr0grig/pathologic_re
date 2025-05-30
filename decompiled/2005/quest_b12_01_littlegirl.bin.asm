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
	oob12Littlegirl1
	oob12Littlegirl2
	mnogogrannik@door2
	B_Mission5
	b12q01ChildsAreVisited
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Remove
	branch
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png

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
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	HasAnimation (3 args)

RunOp = 0x195
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb8 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x19b Vars = (object)
		EVENT_26 Op = 0x1cc Vars = (string)
		EVENT_6 Op = 0x1d4 Vars = ()
		EVENT_7 Op = 0x215 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x29d

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3f4

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3f2

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3f6

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3f8

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3e1

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
0x41: Call2 0x2e1

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

0x50: PushEmpty(object, object)
0x51: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53: Call2 0x355

0x54: Pop(2)
0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x37c

0x59: Pop(2)
0x5a: PushEmpty(object, object)
0x5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d: Call2 0x35c

0x5e: Pop(2)
0x5f: PushEmpty(string)
0x60: Stack[-1] = "Neutral"
0x61: Call2 0xa2

0x62: Pop(1)
0x63: Push((int) 522914)
0x64: @@ SetMessage(Stack[-1])
0x65: Pop(1)
0x66: @@ ClearReplies()
0x67: Pop(0)
0x68: PushEmpty(bool, object)
0x69: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a: Call2 0x382

0x6b: Pop(1)
0x6c: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6d: Push((int) 522915)
0x6e: Push((int) 37091)
0x6f: Push((int) 24105)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: PushEmpty(bool, object)
0x73: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74: Call2 0x38e

0x75: Pop(1)
0x76: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x77: Push((int) 522927)
0x78: Push((int) 24119)
0x79: Push((int) 24118)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: Push((int) 522926)
0x7d: Push((int) -1)
0x7e: Push((int) 24117)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: GOTO 0x84

0x82: Return(); Pop(0)

0x83: GOTO 0x4e

0x84: PushEmpty(bool)
0x85: Call2 0x3fa

0x86: Pop(0)
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: @ lshWaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f: Call2 0x2f2

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
0xa4: Call2 0x3fa

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
0xb4: Call2 0x302

0xb5: Pop(2)
0xb6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Push((int) 1)
0xba: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0x31c

0xbd: Pop(0)
0xbe: Push((int) 24105)
0xbf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x349

0xc5: Pop(2)
0xc6: Push((int) 24118)
0xc7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x34f

0xcd: Pop(2)
0xce: Push((int) 24104)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x355

0xd5: Pop(2)
0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x37c

0xda: Pop(2)
0xdb: PushEmpty(object, object)
0xdc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde: Call2 0x35c

0xdf: Pop(2)
0xe0: PushEmpty(string)
0xe1: Stack[-1] = "Neutral"
0xe2: Call2 0xa2

0xe3: Pop(1)
0xe4: Push((int) 522914)
0xe5: @@ SetMessage(Stack[-1])
0xe6: Pop(1)
0xe7: @@ ClearReplies()
0xe8: Pop(0)
0xe9: PushEmpty(bool, object)
0xea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Call2 0x382

0xec: Pop(1)
0xed: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xee: Push((int) 522915)
0xef: Push((int) 37091)
0xf0: Push((int) 24105)
0xf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2: Pop(3)
0xf3: PushEmpty(bool, object)
0xf4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Call2 0x38e

0xf6: Pop(1)
0xf7: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf8: Push((int) 522927)
0xf9: Push((int) 24119)
0xfa: Push((int) 24118)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: Push((int) 522926)
0xfe: Push((int) -1)
0xff: Push((int) 24117)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Push((int) 24119)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral"
0x108: Call2 0xa2

0x109: Pop(1)
0x10a: Push((int) 522928)
0x10b: @@ SetMessage(Stack[-1])
0x10c: Pop(1)
0x10d: @@ ClearReplies()
0x10e: Pop(0)
0x10f: Push((int) 522929)
0x110: Push((int) -1)
0x111: Push((int) 24120)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: Push((int) 522930)
0x115: Push((int) -1)
0x116: Push((int) 24121)
0x117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: Return(); Pop(0)

0x11a: Push((int) 37091)
0x11b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x11d: PushEmpty(string)
0x11e: Stack[-1] = "Neutral"
0x11f: Call2 0xa2

0x120: Pop(1)
0x121: Push((int) 535411)
0x122: @@ SetMessage(Stack[-1])
0x123: Pop(1)
0x124: @@ ClearReplies()
0x125: Pop(0)
0x126: Push((int) 535412)
0x127: Push((int) 37093)
0x128: Push((int) 37092)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: Push((int) 37093)
0x12d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x12f: PushEmpty(string)
0x130: Stack[-1] = "Neutral"
0x131: Call2 0xa2

0x132: Pop(1)
0x133: Push((int) 535413)
0x134: @@ SetMessage(Stack[-1])
0x135: Pop(1)
0x136: @@ ClearReplies()
0x137: Pop(0)
0x138: Push((int) 535414)
0x139: Push((int) 24106)
0x13a: Push((int) 37094)
0x13b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c: Pop(3)
0x13d: Push((int) 535415)
0x13e: Push((int) -1)
0x13f: Push((int) 37095)
0x140: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(3)
0x142: Return(); Pop(0)

0x143: Push((int) 24106)
0x144: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x145: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x146: PushEmpty(string)
0x147: Stack[-1] = "Neutral"
0x148: Call2 0xa2

0x149: Pop(1)
0x14a: Push((int) 522916)
0x14b: @@ SetMessage(Stack[-1])
0x14c: Pop(1)
0x14d: @@ ClearReplies()
0x14e: Pop(0)
0x14f: Push((int) 522917)
0x150: Push((int) 24108)
0x151: Push((int) 24107)
0x152: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x153: Pop(3)
0x154: Return(); Pop(0)

0x155: Push((int) 24108)
0x156: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x158: PushEmpty(string)
0x159: Stack[-1] = "Neutral"
0x15a: Call2 0xa2

0x15b: Pop(1)
0x15c: Push((int) 522918)
0x15d: @@ SetMessage(Stack[-1])
0x15e: Pop(1)
0x15f: @@ ClearReplies()
0x160: Pop(0)
0x161: Push((int) 522920)
0x162: Push((int) -1)
0x163: Push((int) 24110)
0x164: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x165: Pop(3)
0x166: Push((int) 522921)
0x167: Push((int) 24112)
0x168: Push((int) 24111)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: Push((int) 522925)
0x16c: Push((int) 24112)
0x16d: Push((int) 24115)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Return(); Pop(0)

0x171: Push((int) 24112)
0x172: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x174: PushEmpty(string)
0x175: Stack[-1] = "Neutral"
0x176: Call2 0xa2

0x177: Pop(1)
0x178: Push((int) 522922)
0x179: @@ SetMessage(Stack[-1])
0x17a: Pop(1)
0x17b: @@ ClearReplies()
0x17c: Pop(0)
0x17d: Push((int) 522923)
0x17e: Push((int) -1)
0x17f: Push((int) 24113)
0x180: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x181: Pop(3)
0x182: Push((int) 522924)
0x183: Push((int) -1)
0x184: Push((int) 24114)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Return(); Pop(0)

0x188: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x189: PushEmpty(bool)
0x18a: Call2 0x3fa

0x18b: Pop(0)
0x18c: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18d: @ lshStopAnimation()
0x18e: Pop(0)
0x18f: GOTO 0x192

0x190: @ StopAnimation()
0x191: Pop(0)
0x192: Return(); Pop(0)

0x193: GOTO 0xb9

0x194: Return(); Pop(0)

0x195: PushEmpty(float, float)
0x196: Stack[-2] = (int) 300
0x197: Stack[-1] = (int) 100
0x198: Call2 0x1a6

0x199: Pop(2)
0x19a: Return(); Pop(0)

0x19b: PushEmpty()
0x19c: PushEmpty()
0x19d: Call2 0x22c

0x19e: Pop(0)
0x19f: PushEmpty(int, object)
0x1a0: Stack[-1] = Stack[-3]
0x1a1: Push(-2, 1); TaskCall(0)
0x1a2: Call2 0x0

0x1a3: Pop(-2, 1); TaskReturn
0x1a4: Pop(2)
0x1a5: Return(); Pop(0)

0x1a6: PushEmpty(float, bool, float, bool)
0x1a7: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1a8: Push((int) 3)
0x1a9: @ rand(Stack[-3], Stack[-1])
0x1aa: Pop(1)
0x1ab: Push((int) 3)
0x1ac: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1ad: @ Sleep(Stack[-1], Stack[-2])
0x1ae: Pop(1)
0x1af: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x1b0: PushEmpty(float, float)
0x1b1: Stack[-2] = Stack[-8]
0x1b2: Stack[-1] = Stack[-7]
0x1b3: Call2 0x1eb

0x1b4: Pop(2)
0x1b5: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1b6: GOTO 0x1a8

0x1b7: Return(); Pop(4)

0x1b8: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1b9: PushEmpty(bool)
0x1ba: Stack[-1] = (bool) 0
0x1bb: PushEmpty(bool)
0x1bc: Call2 0x298

0x1bd: Pop(0)
0x1be: Pop(1); Push((bool) Stack[-1] == 0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c0: PushEmpty(bool)
0x1c1: Call2 0x1e9

0x1c2: Pop(0)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: Stack[-1] = (bool) 1
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c6: PushEmpty(object)
0x1c7: Call2 0x323

0x1c8: Pop(0)
0x1c9: @ RemoveActor(Stack[-1])
0x1ca: Pop(1)
0x1cb: Return(); Pop(0)

0x1cc: PushEmpty()
0x1cd: Push("cleanup")
0x1ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1d0: PushEmpty()
0x1d1: Call2 0x1b8

0x1d2: Pop(0)
0x1d3: Return(); Pop(0)

0x1d4: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d6: PushEmpty()
0x1d7: Call2 0x22c

0x1d8: Pop(0)
0x1d9: PushEmpty(bool)
0x1da: Stack[-1] = (bool) 0
0x1db: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1dd: PushEmpty(bool)
0x1de: Call2 0x1e9

0x1df: Pop(0)
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e1: Stack[-1] = (bool) 1
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e3: PushEmpty(object)
0x1e4: Call2 0x323

0x1e5: Pop(0)
0x1e6: @ RemoveActor(Stack[-1])
0x1e7: Pop(1)
0x1e8: Return(); Pop(0)

0x1e9: Stack[-1] = (bool) 1
0x1ea: Return(); Pop(0)

0x1eb: PushEmpty()
0x1ec: PushEmpty(bool)
0x1ed: Call2 0x298

0x1ee: Pop(0)
0x1ef: Pop(1); Push((bool) Stack[-1] == 0)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f1: Return(); Pop(0)

0x1f2: Push("player")
0x1f3: @ FindActor(Stack[-4], Stack[-1])
0x1f4: Pop(1)
0x1f5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1f7: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1f8: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1f9: Push((int) 10)
0x1fa: Push((float)1.0)
0x1fb: @ SetTimer(Stack[-2], Stack[-1])
0x1fc: Pop(2)
0x1fd: PushEmpty()
0x1fe: Call2 0x23a

0x1ff: Pop(0)
0x200: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x201: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x202: Push((int) 10)
0x203: @ KillTimer(Stack[-1])
0x204: Pop(1)
0x205: Return(); Pop(0)

0x206: PushEmpty(float, float)
0x207: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x208: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x209: Stack[-3] = (bool) 0
0x20a: Return(); Pop(2)

0x20b: PushEmpty(float, object)
0x20c: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x20d: Call2 0x290

0x20e: Pop(1)
0x20f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x210: Push( Stack[2 + Tasks[-1].StackPointer] )
0x211: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x212: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x213: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x214: Return(); Pop(2)

0x215: PushEmpty()
0x216: Push((int) 10)
0x217: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x219: PushEmpty(bool)
0x21a: Call2 0x206

0x21b: Pop(0)
0x21c: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x21d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x21e: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x21f: PushEmpty(object)
0x220: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x221: Call2 0x311

0x222: Pop(1)
0x223: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x224: GOTO 0x22b

0x225: Push( Stack[2 + Tasks[-1].StackPointer] )
0x226: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x227: Push("head")
0x228: @ UnlookAsync(Stack[-1])
0x229: Pop(1)
0x22a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x22b: Return(); Pop(0)

0x22c: PushEmpty()
0x22d: Call2 0x28b

0x22e: Pop(0)
0x22f: Push((int) 10)
0x230: @ KillTimer(Stack[-1])
0x231: Pop(1)
0x232: Push( Stack[2 + Tasks[-1].StackPointer] )
0x233: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x234: Push("head")
0x235: @ UnlookAsync(Stack[-1])
0x236: Pop(1)
0x237: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x238: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x239: Return(); Pop(0)

0x23a: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x23b: @ WaitForAnimEnd()
0x23c: Pop(0)
0x23d: PushEmpty(bool)
0x23e: Call2 0x298

0x23f: Pop(0)
0x240: Pop(1); Push((bool) Stack[-1] == 0)
0x241: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x242: Return(); Pop(14)

0x243: PushEmpty(int)
0x244: Call2 0x403

0x245: Stack[-8] = Stack[-1]
0x246: Pop(1)
0x247: Stack[-6] = (int) 0
0x248: PushEmpty(bool)
0x249: Stack[-1] = (bool) 0
0x24a: Push((int) 5)
0x24b: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x24d: PushEmpty(bool)
0x24e: Call2 0x298

0x24f: Pop(0)
0x250: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x251: Stack[-1] = (bool) 1
0x252: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x253: Push((int) 3)
0x254: @ irand(Stack[-6], Stack[-1])
0x255: Pop(1)
0x256: Push((int) 0)
0x257: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x259: Push(Stack[-7])
0x25a: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x25b: @ irand(Stack[-4], Stack[-7])
0x25c: Pop(0)
0x25d: Push("all")
0x25e: PushEmpty(string, int)
0x25f: Stack[-1] = Stack[-7]
0x260: Call2 0x3fc

0x261: Pop(1)
0x262: @ PlayAnimation(Stack[-2], Stack[-1])
0x263: Pop(2)
0x264: @ WaitForAnimEnd(Stack[-3])
0x265: Pop(0)
0x266: Pop(0); Push((bool) Stack[-3] == 0)
0x267: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x268: GOTO 0x286

0x269: GOTO 0x27b

0x26a: Push((int) 1)
0x26b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x26c: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x26d: Push((int) 4)
0x26e: @ rand(Stack[-3], Stack[-1])
0x26f: Pop(1)
0x270: Push((int) 1)
0x271: Pop(1); Push(Stack[-3] + Stack[-1]);
0x272: @ Sleep(Stack[-1], Stack[-2])
0x273: Pop(1)
0x274: Pop(0); Push((bool) Stack[-1] == 0)
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: GOTO 0x286

0x277: GOTO 0x27b

0x278: Push(Stack[-6])
0x279: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x27a: GOTO 0x286

0x27b: PushEmpty(bool)
0x27c: Call2 0x289

0x27d: Pop(0)
0x27e: Pop(1); Push((bool) Stack[-1] == 0)
0x27f: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x280: GOTO 0x286

0x281: @ ResetAAS()
0x282: Pop(0)
0x283: Push((int) 1)
0x284: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x285: GOTO 0x248

0x286: @ ResetAAS()
0x287: Pop(0)
0x288: Return(); Pop(14)

0x289: Stack[-1] = (bool) 1
0x28a: Return(); Pop(0)

0x28b: @ StopAnimation()
0x28c: Pop(0)
0x28d: @ StopGroup0()
0x28e: Pop(0)
0x28f: Return(); Pop(0)

0x290: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x291: @ GetPosition(Stack[-3])
0x292: Pop(0)
0x293: @@ GetPosition(Stack[-2])
0x294: Pop(0)
0x295: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x296: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x297: Return(); Pop(6)

0x298: PushEmpty(bool, bool)
0x299: @ IsLoaded(Stack[-1])
0x29a: Pop(0)
0x29b: Stack[-3] = Stack[-1]
0x29c: Return(); Pop(2)

0x29d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x29e: @@ GetPosition(Stack[-8])
0x29f: Pop(0)
0x2a0: @@ GetEyesHeight(Stack[-9])
0x2a1: Pop(0)
0x2a2: Push(CvectorIndex(Stack[-8], 1))
0x2a3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a4: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2a5: @ GetPosition(Stack[-7])
0x2a6: Pop(0)
0x2a7: @ GetEyesHeight(Stack[-9])
0x2a8: Pop(0)
0x2a9: Push(CvectorIndex(Stack[-7], 1))
0x2aa: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2ab: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2ac: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2ad: Push(CvectorIndex(Stack[-6], 1))
0x2ae: Stack[-1] = (int) 0
0x2af: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2b0: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2b1: Pop(1); Push(Sqrt(Stack[-1]))
0x2b2: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2b3: Stack[-5] = -Stack[-6]; Pop(0);
0x2b4: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2b5: PushEmpty(cvector, cvector)
0x2b6: Push(CVector(0.0, 1.0, 0.0))
0x2b7: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2b8: Call2 0x329

0x2b9: Pop(1)
0x2ba: Push((int) 25)
0x2bb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2bc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2bd: Push(CVector(0.0, 10.0, 0.0))
0x2be: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2bf: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2c0: @ IsOverrideActive(Stack[-2])
0x2c1: Pop(0)
0x2c2: Push(Stack[-2])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c4: Stack[-21] = (bool) 0
0x2c5: Return(); Pop(18)

0x2c6: @ StopWorld()
0x2c7: Pop(0)
0x2c8: @ CameraTransit(Stack[-3], Stack[-5])
0x2c9: Pop(0)
0x2ca: Push(CvectorIndex(Stack[-4], 0))
0x2cb: Push(CvectorIndex(Stack[-5], 2))
0x2cc: @ Rotate(Stack[-2], Stack[-1])
0x2cd: Pop(2)
0x2ce: PushEmpty(bool)
0x2cf: Call2 0x3fa

0x2d0: Pop(0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d2: GOTO 0x2db

0x2d3: Push("head")
0x2d4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2d5: Pop(1)
0x2d6: Push(Stack[-1])
0x2d7: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d8: Push("head")
0x2d9: @ LookAsyncCamera(Stack[-1])
0x2da: Pop(1)
0x2db: @ CameraWaitForPlayFinish()
0x2dc: Pop(0)
0x2dd: @ ResumeWorld()
0x2de: Pop(0)
0x2df: Stack[-21] = (bool) 1
0x2e0: Return(); Pop(18)

0x2e1: PushEmpty(bool, bool)
0x2e2: @ CameraSwitchToNormal()
0x2e3: Pop(0)
0x2e4: PushEmpty(bool)
0x2e5: Call2 0x3fa

0x2e6: Pop(0)
0x2e7: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e8: GOTO 0x2f1

0x2e9: Push("head")
0x2ea: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2eb: Pop(1)
0x2ec: Push(Stack[-1])
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ee: Push("head")
0x2ef: @ UnlookAsync(Stack[-1])
0x2f0: Pop(1)
0x2f1: Return(); Pop(2)

0x2f2: PushEmpty(bool, float, float, bool, float, float)
0x2f3: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2f4: Pop(0)
0x2f5: Push(Stack[-3])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f7: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2f8: Pop(0)
0x2f9: Push((bool) 0)
0x2fa: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2fb: Pop(1)
0x2fc: GOTO 0x301

0x2fd: Push("Can't find lsh animation : ")
0x2fe: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2ff: @ Trace(Stack[-1])
0x300: Pop(1)
0x301: Return(); Pop(6)

0x302: PushEmpty(bool, float, float, bool, float, float)
0x303: @ lshHasAnimation(Stack[-3], Stack[-8])
0x304: Pop(0)
0x305: Push(Stack[-3])
0x306: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x307: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x308: Pop(0)
0x309: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x30a: Pop(0)
0x30b: GOTO 0x310

0x30c: Push("Can't find lsh animation : ")
0x30d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x30e: @ Trace(Stack[-1])
0x30f: Pop(1)
0x310: Return(); Pop(6)

0x311: PushEmpty(float, cvector, float, cvector)
0x312: @@ GetEyesHeight(Stack[-2])
0x313: Pop(0)
0x314: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x315: Push(CvectorIndex(Stack[-1], 1))
0x316: Stack[-1] = Stack[-3]
0x317: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x318: Push("head")
0x319: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x31a: Pop(1)
0x31b: Return(); Pop(4)

0x31c: PushEmpty(bool)
0x31d: Call2 0x3fa

0x31e: Pop(0)
0x31f: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x320: @ lshStopSpeech()
0x321: Pop(0)
0x322: Return(); Pop(0)

0x323: PushEmpty(object, object)
0x324: @ self(Stack[-1])
0x325: Pop(0)
0x326: Stack[-3] = Stack[-1]
0x327: Return(); Pop(2)

0x328: Stack[-1] = 0
0x329: PushEmpty(float, float)
0x32a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x32b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x32c: Push((float)0.0)
0x32d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x32e: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x330: Return(); Pop(2)

0x331: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x332: Return(); Pop(2)

0x333: PushEmpty(int, int)
0x334: @ GetVariable(Stack[-3], Stack[-1])
0x335: Pop(0)
0x336: Stack[-4] = Stack[-1]
0x337: Return(); Pop(2)

0x338: PushEmpty(object, object)
0x339: @ FindActor(Stack[-1], Stack[-4])
0x33a: Pop(0)
0x33b: Pop(0); Push((bool) Stack[-1] == 0)
0x33c: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x33d: Push("Door ")
0x33e: Pop(1); Push(Stack[-1] + Stack[-5]);
0x33f: Push(" not found")
0x340: Pop(2); Push(Stack[-2] + Stack[-1]);
0x341: @ Trace(Stack[-1])
0x342: Pop(1)
0x343: GOTO 0x347

0x344: Push("locked")
0x345: @@ SetProperty(Stack[-1], Stack[-4])
0x346: Pop(1)
0x347: Return(); Pop(2)

0x348: Stack[-1] = 0
0x349: PushEmpty()
0x34a: Push("oob12Littlegirl1")
0x34b: Push((int) 1)
0x34c: @ SetVariable(Stack[-2], Stack[-1])
0x34d: Pop(2)
0x34e: Return(); Pop(0)

0x34f: PushEmpty()
0x350: Push("oob12Littlegirl2")
0x351: Push((int) 1)
0x352: @ SetVariable(Stack[-2], Stack[-1])
0x353: Pop(2)
0x354: Return(); Pop(0)

0x355: PushEmpty()
0x356: PushEmpty(string, bool)
0x357: Stack[-2] = "mnogogrannik@door2"
0x358: Stack[-1] = (bool) 0
0x359: Call2 0x338

0x35a: Pop(2)
0x35b: Return(); Pop(0)

0x35c: PushEmpty()
0x35d: PushEmpty(int, string)
0x35e: Stack[-1] = "B_Mission5"
0x35f: Call2 0x333

0x360: Pop(1)
0x361: Push((int) 0)
0x362: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x364: Push("B_Mission5")
0x365: Push((int) 1)
0x366: @ SetVariable(Stack[-2], Stack[-1])
0x367: Pop(2)
0x368: PushEmpty()
0x369: Call2 0x39a

0x36a: Pop(0)
0x36b: PushEmpty(bool, int)
0x36c: Stack[-1] = (int) 562
0x36d: Call2 0x3d0

0x36e: Pop(2)
0x36f: PushEmpty(bool, int)
0x370: Stack[-1] = (int) 563
0x371: Call2 0x3d0

0x372: Pop(2)
0x373: PushEmpty(bool, int)
0x374: Stack[-1] = (int) 564
0x375: Call2 0x3d0

0x376: Pop(2)
0x377: PushEmpty(bool, int)
0x378: Stack[-1] = (int) 565
0x379: Call2 0x3d0

0x37a: Pop(2)
0x37b: Return(); Pop(0)

0x37c: PushEmpty()
0x37d: Push("b12q01ChildsAreVisited")
0x37e: Push((int) 1)
0x37f: @ SetVariable(Stack[-2], Stack[-1])
0x380: Pop(2)
0x381: Return(); Pop(0)

0x382: PushEmpty()
0x383: PushEmpty(int, string)
0x384: Stack[-1] = "oob12Littlegirl1"
0x385: Call2 0x333

0x386: Pop(1)
0x387: Push((int) 0)
0x388: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x389: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38a: Stack[-2] = (bool) 1
0x38b: Return(); Pop(0)

0x38c: Stack[-2] = (bool) 0
0x38d: Return(); Pop(0)

0x38e: PushEmpty()
0x38f: PushEmpty(int, string)
0x390: Stack[-1] = "oob12Littlegirl2"
0x391: Call2 0x333

0x392: Pop(1)
0x393: Push((int) 0)
0x394: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x395: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x396: Stack[-2] = (bool) 1
0x397: Return(); Pop(0)

0x398: Stack[-2] = (bool) 0
0x399: Return(); Pop(0)

0x39a: PushEmpty(object, object)
0x39b: Push((int) 566)
0x39c: Push((int) 0)
0x39d: Push((int) 530580)
0x39e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x39f: Pop(3)
0x3a0: PushEmpty(bool, object, int)
0x3a1: Stack[-2] = Stack[-4]
0x3a2: Stack[-1] = (int) -1
0x3a3: Call2 0x3b4

0x3a4: Pop(3)
0x3a5: Return(); Pop(2)

0x3a6: Stack[-1] = 0
0x3a7: PushEmpty(object, object)
0x3a8: @ GetDiaryRoot(Stack[-1])
0x3a9: Pop(0)
0x3aa: Pop(0); Push((bool) Stack[-1] == 0)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3ac: Push("Can't retrieve diary root")
0x3ad: @ Trace(Stack[-1])
0x3ae: Pop(1)
0x3af: Stack[-3] = (bool) 0
0x3b0: Return(); Pop(2)

0x3b1: Stack[-3] = Stack[-1]
0x3b2: Return(); Pop(2)

0x3b3: Stack[-1] = 0
0x3b4: PushEmpty(object, object, int, object, object, int)
0x3b5: PushEmpty(object)
0x3b6: Call2 0x3a7

0x3b7: Stack[-4] = Stack[-1]
0x3b8: Pop(1)
0x3b9: @@ Find(Stack[-7], Stack[-2])
0x3ba: Pop(0)
0x3bb: Pop(0); Push((bool) Stack[-2] == 0)
0x3bc: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3bd: Push("Can't find diary parent with id: ")
0x3be: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3bf: @ Trace(Stack[-1])
0x3c0: Pop(1)
0x3c1: Stack[-9] = (bool) 0
0x3c2: Return(); Pop(6)

0x3c3: @@ AddChild(Stack[-8])
0x3c4: Pop(0)
0x3c5: Push((int) 7)
0x3c6: @ SendWorldWndMessage(Stack[-1])
0x3c7: Pop(1)
0x3c8: @@ GetCategory(Stack[-1])
0x3c9: Pop(0)
0x3ca: @ SetDiarySection(Stack[-1])
0x3cb: Pop(0)
0x3cc: Stack[-9] = (bool) 0
0x3cd: Return(); Pop(6)

0x3ce: Stack[-2] = 0
0x3cf: Stack[-3] = 0
0x3d0: PushEmpty(object, object, object, object)
0x3d1: PushEmpty(object)
0x3d2: Call2 0x3a7

0x3d3: Stack[-3] = Stack[-1]
0x3d4: Pop(1)
0x3d5: @@ Find(Stack[-5], Stack[-1])
0x3d6: Pop(0)
0x3d7: Pop(0); Push((bool) Stack[-1] == 0)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3d9: Stack[-6] = (bool) 0
0x3da: Return(); Pop(4)

0x3db: @@ Remove()
0x3dc: Pop(0)
0x3dd: Stack[-6] = (bool) 1
0x3de: Return(); Pop(4)

0x3df: Stack[-1] = 0
0x3e0: Stack[-2] = 0
0x3e1: PushEmpty(int, int)
0x3e2: Push("branch")
0x3e3: @ GetVariable(Stack[-1], Stack[-2])
0x3e4: Pop(1)
0x3e5: Push((int) 0)
0x3e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e7: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e8: Stack[-3] = (int) 1
0x3e9: Return(); Pop(2)

0x3ea: GOTO 0x3f0

0x3eb: Push((int) 1)
0x3ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ee: Stack[-3] = (int) 2
0x3ef: Return(); Pop(2)

0x3f0: Stack[-3] = (int) 3
0x3f1: Return(); Pop(2)

0x3f2: Stack[-1] = (int) 515561
0x3f3: Return(); Pop(0)

0x3f4: Stack[-1] = (int) 503346
0x3f5: Return(); Pop(0)

0x3f6: Stack[-1] = "ui/NPC_Citizen1.png"
0x3f7: Return(); Pop(0)

0x3f8: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x3f9: Return(); Pop(0)

0x3fa: Stack[-1] = (bool) 0
0x3fb: Return(); Pop(0)

0x3fc: PushEmpty(string, string)
0x3fd: Stack[-1] = "idle"
0x3fe: Push(Stack[-3])
0x3ff: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x400: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x401: Stack[-4] = Stack[-1]
0x402: Return(); Pop(2)

0x403: PushEmpty(int, bool, int, bool)
0x404: Stack[-2] = (int) 0
0x405: Push("all")
0x406: PushEmpty(string, int)
0x407: Stack[-1] = Stack[-5]
0x408: Call2 0x3fc

0x409: Pop(1)
0x40a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x40b: Pop(2)
0x40c: Pop(0); Push((bool) Stack[-1] == 0)
0x40d: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40e: GOTO 0x412

0x40f: Push((int) 1)
0x410: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x411: GOTO 0x405

0x412: Stack[-5] = Stack[-2]
0x413: Return(); Pop(4)

