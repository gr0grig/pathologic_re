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
	k5q02
	k5q02KabatchikGotoAlexandr
	pt_map_alexandr
	AddMark
	ShowMap
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
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
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x109
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x10f Vars = (object)
		EVENT_26 Op = 0x140 Vars = (string)
		EVENT_6 Op = 0x148 Vars = ()
		EVENT_7 Op = 0x189 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x211

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x379

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x377

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x37b

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x37d

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x366

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
0x41: Call2 0x256

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
0x4f: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x8e

0x53: Pop(1)
0x54: Push((int) 525906)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x2f2

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 525907)
0x5f: Push((int) 27200)
0x60: Push((int) 27199)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 525912)
0x64: Push((int) -1)
0x65: Push((int) 27204)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 529037)
0x69: Push((int) -1)
0x6a: Push((int) 30478)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x37f

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x268

0x7c: Pop(1)
0x7d: GOTO 0x74

0x7e: GOTO 0x8d

0x7f: Push("all")
0x80: Push("idle")
0x81: @ PlayAnimation(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: @ WaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: Push("all")
0x89: Push("idle")
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: GOTO 0x83

0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: PushEmpty(bool)
0x90: Call2 0x37f

0x91: Pop(0)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Return(); Pop(0)

0x98: PushEmpty(string, bool)
0x99: Stack[-2] = Stack[-3]
0x9a: Push("")
0x9b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: Stack[-1] = (bool) 0
0x9e: GOTO 0xa0

0x9f: Stack[-1] = (bool) 1
0xa0: Call2 0x278

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x292

0xa9: Pop(0)
0xaa: Push((int) 27203)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x2cb

0xb1: Pop(2)
0xb2: PushEmpty(object, object)
0xb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5: Call2 0x2e2

0xb6: Pop(2)
0xb7: Push((int) 27198)
0xb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral"
0xbc: Call2 0x8e

0xbd: Pop(1)
0xbe: Push((int) 525906)
0xbf: @@ SetMessage(Stack[-1])
0xc0: Pop(1)
0xc1: @@ ClearReplies()
0xc2: Pop(0)
0xc3: PushEmpty(bool, object)
0xc4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Call2 0x2f2

0xc6: Pop(1)
0xc7: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc8: Push((int) 525907)
0xc9: Push((int) 27200)
0xca: Push((int) 27199)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: Push((int) 525912)
0xce: Push((int) -1)
0xcf: Push((int) 27204)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: Push((int) 529037)
0xd3: Push((int) -1)
0xd4: Push((int) 30478)
0xd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6: Pop(3)
0xd7: Return(); Pop(0)

0xd8: Push((int) 27200)
0xd9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xdb: PushEmpty(string)
0xdc: Stack[-1] = "Neutral"
0xdd: Call2 0x8e

0xde: Pop(1)
0xdf: Push((int) 525908)
0xe0: @@ SetMessage(Stack[-1])
0xe1: Pop(1)
0xe2: @@ ClearReplies()
0xe3: Pop(0)
0xe4: Push((int) 525909)
0xe5: Push((int) 27202)
0xe6: Push((int) 27201)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Return(); Pop(0)

0xea: Push((int) 27202)
0xeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral"
0xef: Call2 0x8e

0xf0: Pop(1)
0xf1: Push((int) 525910)
0xf2: @@ SetMessage(Stack[-1])
0xf3: Pop(1)
0xf4: @@ ClearReplies()
0xf5: Pop(0)
0xf6: Push((int) 525911)
0xf7: Push((int) -1)
0xf8: Push((int) 27203)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xfd: PushEmpty(bool)
0xfe: Call2 0x37f

0xff: Pop(0)
0x100: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x101: @ lshStopAnimation()
0x102: Pop(0)
0x103: GOTO 0x106

0x104: @ StopAnimation()
0x105: Pop(0)
0x106: Return(); Pop(0)

0x107: GOTO 0xa5

0x108: Return(); Pop(0)

0x109: PushEmpty(float, float)
0x10a: Stack[-2] = (int) 300
0x10b: Stack[-1] = (int) 100
0x10c: Call2 0x11a

0x10d: Pop(2)
0x10e: Return(); Pop(0)

0x10f: PushEmpty()
0x110: PushEmpty()
0x111: Call2 0x1a0

0x112: Pop(0)
0x113: PushEmpty(int, object)
0x114: Stack[-1] = Stack[-3]
0x115: Push(-2, 1); TaskCall(0)
0x116: Call2 0x0

0x117: Pop(-2, 1); TaskReturn
0x118: Pop(2)
0x119: Return(); Pop(0)

0x11a: PushEmpty(float, bool, float, bool)
0x11b: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x11c: Push((int) 3)
0x11d: @ rand(Stack[-3], Stack[-1])
0x11e: Pop(1)
0x11f: Push((int) 3)
0x120: Pop(1); Push(Stack[-3] + Stack[-1]);
0x121: @ Sleep(Stack[-1], Stack[-2])
0x122: Pop(1)
0x123: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x124: PushEmpty(float, float)
0x125: Stack[-2] = Stack[-8]
0x126: Stack[-1] = Stack[-7]
0x127: Call2 0x15f

0x128: Pop(2)
0x129: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x12a: GOTO 0x11c

0x12b: Return(); Pop(4)

0x12c: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x12d: PushEmpty(bool)
0x12e: Stack[-1] = (bool) 0
0x12f: PushEmpty(bool)
0x130: Call2 0x20c

0x131: Pop(0)
0x132: Pop(1); Push((bool) Stack[-1] == 0)
0x133: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x134: PushEmpty(bool)
0x135: Call2 0x15d

0x136: Pop(0)
0x137: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x138: Stack[-1] = (bool) 1
0x139: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13a: PushEmpty(object)
0x13b: Call2 0x299

0x13c: Pop(0)
0x13d: @ RemoveActor(Stack[-1])
0x13e: Pop(1)
0x13f: Return(); Pop(0)

0x140: PushEmpty()
0x141: Push("cleanup")
0x142: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x143: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x144: PushEmpty()
0x145: Call2 0x12c

0x146: Pop(0)
0x147: Return(); Pop(0)

0x148: Push( Stack[6 + Tasks[-1].StackPointer] )
0x149: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14a: PushEmpty()
0x14b: Call2 0x1a0

0x14c: Pop(0)
0x14d: PushEmpty(bool)
0x14e: Stack[-1] = (bool) 0
0x14f: Push( Stack[5 + Tasks[-1].StackPointer] )
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: PushEmpty(bool)
0x152: Call2 0x15d

0x153: Pop(0)
0x154: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x155: Stack[-1] = (bool) 1
0x156: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x157: PushEmpty(object)
0x158: Call2 0x299

0x159: Pop(0)
0x15a: @ RemoveActor(Stack[-1])
0x15b: Pop(1)
0x15c: Return(); Pop(0)

0x15d: Stack[-1] = (bool) 1
0x15e: Return(); Pop(0)

0x15f: PushEmpty()
0x160: PushEmpty(bool)
0x161: Call2 0x20c

0x162: Pop(0)
0x163: Pop(1); Push((bool) Stack[-1] == 0)
0x164: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x165: Return(); Pop(0)

0x166: Push("player")
0x167: @ FindActor(Stack[-4], Stack[-1])
0x168: Pop(1)
0x169: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x16a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x16b: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x16c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x16d: Push((int) 10)
0x16e: Push((float)1.0)
0x16f: @ SetTimer(Stack[-2], Stack[-1])
0x170: Pop(2)
0x171: PushEmpty()
0x172: Call2 0x1ae

0x173: Pop(0)
0x174: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x175: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x176: Push((int) 10)
0x177: @ KillTimer(Stack[-1])
0x178: Pop(1)
0x179: Return(); Pop(0)

0x17a: PushEmpty(float, float)
0x17b: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x17c: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17d: Stack[-3] = (bool) 0
0x17e: Return(); Pop(2)

0x17f: PushEmpty(float, object)
0x180: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x181: Call2 0x204

0x182: Pop(1)
0x183: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x184: Push( Stack[2 + Tasks[-1].StackPointer] )
0x185: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x186: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x187: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x188: Return(); Pop(2)

0x189: PushEmpty()
0x18a: Push((int) 10)
0x18b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x18d: PushEmpty(bool)
0x18e: Call2 0x17a

0x18f: Pop(0)
0x190: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x191: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x192: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x193: PushEmpty(object)
0x194: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x195: Call2 0x287

0x196: Pop(1)
0x197: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x198: GOTO 0x19f

0x199: Push( Stack[2 + Tasks[-1].StackPointer] )
0x19a: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19b: Push("head")
0x19c: @ UnlookAsync(Stack[-1])
0x19d: Pop(1)
0x19e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x19f: Return(); Pop(0)

0x1a0: PushEmpty()
0x1a1: Call2 0x1ff

0x1a2: Pop(0)
0x1a3: Push((int) 10)
0x1a4: @ KillTimer(Stack[-1])
0x1a5: Pop(1)
0x1a6: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1a7: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a8: Push("head")
0x1a9: @ UnlookAsync(Stack[-1])
0x1aa: Pop(1)
0x1ab: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1ac: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ad: Return(); Pop(0)

0x1ae: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1af: @ WaitForAnimEnd()
0x1b0: Pop(0)
0x1b1: PushEmpty(bool)
0x1b2: Call2 0x20c

0x1b3: Pop(0)
0x1b4: Pop(1); Push((bool) Stack[-1] == 0)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b6: Return(); Pop(14)

0x1b7: PushEmpty(int)
0x1b8: Call2 0x2ba

0x1b9: Stack[-8] = Stack[-1]
0x1ba: Pop(1)
0x1bb: Stack[-6] = (int) 0
0x1bc: PushEmpty(bool)
0x1bd: Stack[-1] = (bool) 0
0x1be: Push((int) 5)
0x1bf: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c1: PushEmpty(bool)
0x1c2: Call2 0x20c

0x1c3: Pop(0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c5: Stack[-1] = (bool) 1
0x1c6: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1c7: Push((int) 3)
0x1c8: @ irand(Stack[-6], Stack[-1])
0x1c9: Pop(1)
0x1ca: Push((int) 0)
0x1cb: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1cd: Push(Stack[-7])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1cf: @ irand(Stack[-4], Stack[-7])
0x1d0: Pop(0)
0x1d1: Push("all")
0x1d2: PushEmpty(string, int)
0x1d3: Stack[-1] = Stack[-7]
0x1d4: Call2 0x2b3

0x1d5: Pop(1)
0x1d6: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d7: Pop(2)
0x1d8: @ WaitForAnimEnd(Stack[-3])
0x1d9: Pop(0)
0x1da: Pop(0); Push((bool) Stack[-3] == 0)
0x1db: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1dc: GOTO 0x1fa

0x1dd: GOTO 0x1ef

0x1de: Push((int) 1)
0x1df: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e1: Push((int) 4)
0x1e2: @ rand(Stack[-3], Stack[-1])
0x1e3: Pop(1)
0x1e4: Push((int) 1)
0x1e5: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1e6: @ Sleep(Stack[-1], Stack[-2])
0x1e7: Pop(1)
0x1e8: Pop(0); Push((bool) Stack[-1] == 0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1ea: GOTO 0x1fa

0x1eb: GOTO 0x1ef

0x1ec: Push(Stack[-6])
0x1ed: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ee: GOTO 0x1fa

0x1ef: PushEmpty(bool)
0x1f0: Call2 0x1fd

0x1f1: Pop(0)
0x1f2: Pop(1); Push((bool) Stack[-1] == 0)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f4: GOTO 0x1fa

0x1f5: @ ResetAAS()
0x1f6: Pop(0)
0x1f7: Push((int) 1)
0x1f8: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1f9: GOTO 0x1bc

0x1fa: @ ResetAAS()
0x1fb: Pop(0)
0x1fc: Return(); Pop(14)

0x1fd: Stack[-1] = (bool) 1
0x1fe: Return(); Pop(0)

0x1ff: @ StopAnimation()
0x200: Pop(0)
0x201: @ StopGroup0()
0x202: Pop(0)
0x203: Return(); Pop(0)

0x204: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x205: @ GetPosition(Stack[-3])
0x206: Pop(0)
0x207: @@ GetPosition(Stack[-2])
0x208: Pop(0)
0x209: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x20a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x20b: Return(); Pop(6)

0x20c: PushEmpty(bool, bool)
0x20d: @ IsLoaded(Stack[-1])
0x20e: Pop(0)
0x20f: Stack[-3] = Stack[-1]
0x210: Return(); Pop(2)

0x211: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x212: @@ GetPosition(Stack[-8])
0x213: Pop(0)
0x214: @@ GetEyesHeight(Stack[-9])
0x215: Pop(0)
0x216: Push(CvectorIndex(Stack[-8], 1))
0x217: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x218: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x219: @ GetPosition(Stack[-7])
0x21a: Pop(0)
0x21b: @ GetEyesHeight(Stack[-9])
0x21c: Pop(0)
0x21d: Push(CvectorIndex(Stack[-7], 1))
0x21e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x21f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x220: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x221: Push(CvectorIndex(Stack[-6], 1))
0x222: Stack[-1] = (int) 0
0x223: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x224: Pop(0); Push(Stack[-6] | Stack[-6]);
0x225: Pop(1); Push(Sqrt(Stack[-1]))
0x226: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x227: Stack[-5] = -Stack[-6]; Pop(0);
0x228: Pop(0); Push(Stack[-6] * Stack[-19]);
0x229: PushEmpty(cvector, cvector)
0x22a: Push(CVector(0.0, 1.0, 0.0))
0x22b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x22c: Call2 0x29f

0x22d: Pop(1)
0x22e: Push((int) 25)
0x22f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x230: Pop(2); Push(Stack[-2] + Stack[-1]);
0x231: Push(CVector(0.0, 10.0, 0.0))
0x232: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x233: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x234: @ IsOverrideActive(Stack[-2])
0x235: Pop(0)
0x236: Push(Stack[-2])
0x237: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x238: Stack[-21] = (bool) 0
0x239: Return(); Pop(18)

0x23a: @ StopWorld()
0x23b: Pop(0)
0x23c: Push((bool) 1)
0x23d: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x23e: Pop(1)
0x23f: Push(CvectorIndex(Stack[-4], 0))
0x240: Push(CvectorIndex(Stack[-5], 2))
0x241: @ Rotate(Stack[-2], Stack[-1])
0x242: Pop(2)
0x243: PushEmpty(bool)
0x244: Call2 0x37f

0x245: Pop(0)
0x246: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x247: GOTO 0x250

0x248: Push("head")
0x249: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x24a: Pop(1)
0x24b: Push(Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24d: Push("head")
0x24e: @ LookAsyncCamera(Stack[-1])
0x24f: Pop(1)
0x250: @ CameraWaitForPlayFinish()
0x251: Pop(0)
0x252: @ ResumeWorld()
0x253: Pop(0)
0x254: Stack[-21] = (bool) 1
0x255: Return(); Pop(18)

0x256: PushEmpty(bool, bool)
0x257: Push((bool) 1)
0x258: @ CameraSwitchToNormal(Stack[-1])
0x259: Pop(1)
0x25a: PushEmpty(bool)
0x25b: Call2 0x37f

0x25c: Pop(0)
0x25d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25e: GOTO 0x267

0x25f: Push("head")
0x260: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x261: Pop(1)
0x262: Push(Stack[-1])
0x263: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x264: Push("head")
0x265: @ UnlookAsync(Stack[-1])
0x266: Pop(1)
0x267: Return(); Pop(2)

0x268: PushEmpty(bool, float, float, bool, float, float)
0x269: @ lshHasAnimation(Stack[-3], Stack[-7])
0x26a: Pop(0)
0x26b: Push(Stack[-3])
0x26c: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x26d: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x26e: Pop(0)
0x26f: Push((bool) 0)
0x270: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x271: Pop(1)
0x272: GOTO 0x277

0x273: Push("Can't find lsh animation : ")
0x274: Pop(1); Push(Stack[-1] + Stack[-8]);
0x275: @ Trace(Stack[-1])
0x276: Pop(1)
0x277: Return(); Pop(6)

0x278: PushEmpty(bool, float, float, bool, float, float)
0x279: @ lshHasAnimation(Stack[-3], Stack[-8])
0x27a: Pop(0)
0x27b: Push(Stack[-3])
0x27c: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x27d: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x27e: Pop(0)
0x27f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x280: Pop(0)
0x281: GOTO 0x286

0x282: Push("Can't find lsh animation : ")
0x283: Pop(1); Push(Stack[-1] + Stack[-9]);
0x284: @ Trace(Stack[-1])
0x285: Pop(1)
0x286: Return(); Pop(6)

0x287: PushEmpty(float, cvector, float, cvector)
0x288: @@ GetEyesHeight(Stack[-2])
0x289: Pop(0)
0x28a: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x28b: Push(CvectorIndex(Stack[-1], 1))
0x28c: Stack[-1] = Stack[-3]
0x28d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x28e: Push("head")
0x28f: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x290: Pop(1)
0x291: Return(); Pop(4)

0x292: PushEmpty(bool)
0x293: Call2 0x37f

0x294: Pop(0)
0x295: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x296: @ lshStopSpeech()
0x297: Pop(0)
0x298: Return(); Pop(0)

0x299: PushEmpty(object, object)
0x29a: @ self(Stack[-1])
0x29b: Pop(0)
0x29c: Stack[-3] = Stack[-1]
0x29d: Return(); Pop(2)

0x29e: Stack[-1] = 0
0x29f: PushEmpty(float, float)
0x2a0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2a1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2a2: Push((float)0.0)
0x2a3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a5: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2a6: Return(); Pop(2)

0x2a7: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2a8: Return(); Pop(2)

0x2a9: PushEmpty(int, int)
0x2aa: @ GetVariable(Stack[-3], Stack[-1])
0x2ab: Pop(0)
0x2ac: Stack[-4] = Stack[-1]
0x2ad: Return(); Pop(2)

0x2ae: PushEmpty(float, float)
0x2af: @ GetGameTime(Stack[-1])
0x2b0: Pop(0)
0x2b1: Stack[-3] = Stack[-1]
0x2b2: Return(); Pop(2)

0x2b3: PushEmpty(string, string)
0x2b4: Stack[-1] = "idle"
0x2b5: Push(Stack[-3])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b7: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2b8: Stack[-4] = Stack[-1]
0x2b9: Return(); Pop(2)

0x2ba: PushEmpty(int, bool, int, bool)
0x2bb: Stack[-2] = (int) 0
0x2bc: Push("all")
0x2bd: PushEmpty(string, int)
0x2be: Stack[-1] = Stack[-5]
0x2bf: Call2 0x2b3

0x2c0: Pop(1)
0x2c1: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2c2: Pop(2)
0x2c3: Pop(0); Push((bool) Stack[-1] == 0)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c5: GOTO 0x2c9

0x2c6: Push((int) 1)
0x2c7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2c8: GOTO 0x2bc

0x2c9: Stack[-5] = Stack[-2]
0x2ca: Return(); Pop(4)

0x2cb: PushEmpty(object, object)
0x2cc: Push("k5q02")
0x2cd: Push((int) 3)
0x2ce: @ SetVariable(Stack[-2], Stack[-1])
0x2cf: Pop(2)
0x2d0: PushEmpty(object)
0x2d1: Call2 0x334

0x2d2: Stack[-2] = Stack[-1]
0x2d3: Pop(1)
0x2d4: Push("k5q02KabatchikGotoAlexandr")
0x2d5: Push("pt_map_alexandr")
0x2d6: Push((int) 0)
0x2d7: Push((int) 511155)
0x2d8: PushEmpty(float)
0x2d9: Call2 0x2ae

0x2da: Pop(0)
0x2db: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2dc: Pop(5)
0x2dd: PushEmpty()
0x2de: Call2 0x2fe

0x2df: Pop(0)
0x2e0: Return(); Pop(2)

0x2e1: Stack[-1] = 0
0x2e2: PushEmpty()
0x2e3: PushEmpty(object, string, float)
0x2e4: PushEmpty(object)
0x2e5: Call2 0x334

0x2e6: Stack[-4] = Stack[-1]
0x2e7: Pop(1)
0x2e8: Stack[-2] = "pt_map_alexandr"
0x2e9: Stack[-1] = (int) 2
0x2ea: Call2 0x345

0x2eb: Pop(3)
0x2ec: PushEmpty(object)
0x2ed: Call2 0x334

0x2ee: Pop(0)
0x2ef: @@ ShowMap(Stack[-1])
0x2f0: Pop(1)
0x2f1: Return(); Pop(0)

0x2f2: PushEmpty()
0x2f3: PushEmpty(int, string)
0x2f4: Stack[-1] = "k5q02"
0x2f5: Call2 0x2a9

0x2f6: Pop(1)
0x2f7: Push((int) 2)
0x2f8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fa: Stack[-2] = (bool) 1
0x2fb: Return(); Pop(0)

0x2fc: Stack[-2] = (bool) 0
0x2fd: Return(); Pop(0)

0x2fe: PushEmpty(object, object)
0x2ff: Push((int) 400)
0x300: Push((int) 2)
0x301: Push((int) 525938)
0x302: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x303: Pop(3)
0x304: PushEmpty(bool, object, int)
0x305: Stack[-2] = Stack[-4]
0x306: Stack[-1] = (int) 397
0x307: Call2 0x318

0x308: Pop(3)
0x309: Return(); Pop(2)

0x30a: Stack[-1] = 0
0x30b: PushEmpty(object, object)
0x30c: @ GetDiaryRoot(Stack[-1])
0x30d: Pop(0)
0x30e: Pop(0); Push((bool) Stack[-1] == 0)
0x30f: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x310: Push("Can't retrieve diary root")
0x311: @ Trace(Stack[-1])
0x312: Pop(1)
0x313: Stack[-3] = (bool) 0
0x314: Return(); Pop(2)

0x315: Stack[-3] = Stack[-1]
0x316: Return(); Pop(2)

0x317: Stack[-1] = 0
0x318: PushEmpty(object, object, int, object, object, int)
0x319: PushEmpty(object)
0x31a: Call2 0x30b

0x31b: Stack[-4] = Stack[-1]
0x31c: Pop(1)
0x31d: @@ Find(Stack[-7], Stack[-2])
0x31e: Pop(0)
0x31f: Pop(0); Push((bool) Stack[-2] == 0)
0x320: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x321: Push("Can't find diary parent with id: ")
0x322: Pop(1); Push(Stack[-1] + Stack[-8]);
0x323: @ Trace(Stack[-1])
0x324: Pop(1)
0x325: Stack[-9] = (bool) 0
0x326: Return(); Pop(6)

0x327: @@ AddChild(Stack[-8])
0x328: Pop(0)
0x329: Push((int) 7)
0x32a: @ SendWorldWndMessage(Stack[-1])
0x32b: Pop(1)
0x32c: @@ GetCategory(Stack[-1])
0x32d: Pop(0)
0x32e: @ SetDiarySection(Stack[-1])
0x32f: Pop(0)
0x330: Stack[-9] = (bool) 0
0x331: Return(); Pop(6)

0x332: Stack[-2] = 0
0x333: Stack[-3] = 0
0x334: PushEmpty(object, object, object, object)
0x335: @ GetMainOutdoorScene(Stack[-2])
0x336: Pop(0)
0x337: Pop(0); Push((bool) Stack[-2] == 0)
0x338: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x339: Push("Can't find main outdoor scene")
0x33a: @ Trace(Stack[-1])
0x33b: Pop(1)
0x33c: Stack[-1] = 0
0x33d: Stack[-5] = Stack[-1]
0x33e: Return(); Pop(4)

0x33f: @@ GetMap(Stack[-1])
0x340: Pop(0)
0x341: Stack[-5] = Stack[-1]
0x342: Return(); Pop(4)

0x343: Stack[-1] = 0
0x344: Stack[-2] = 0
0x345: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x346: @ GetMainOutdoorScene(Stack[-2])
0x347: Pop(0)
0x348: Pop(0); Push((bool) Stack[-2] == 0)
0x349: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34a: Push("Can't find main outdoor scene")
0x34b: @ Trace(Stack[-1])
0x34c: Pop(1)
0x34d: Return(); Pop(8)

0x34e: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x34f: Pop(0)
0x350: Pop(0); Push((bool) Stack[-1] == 0)
0x351: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x352: Push("Warning: outdoor scene locator ")
0x353: Pop(1); Push(Stack[-1] + Stack[-11]);
0x354: Push(" doesnt exist")
0x355: Pop(2); Push(Stack[-2] + Stack[-1]);
0x356: @ Trace(Stack[-1])
0x357: Pop(1)
0x358: @@ GetMap(Stack[-11])
0x359: Pop(0)
0x35a: Pop(0); Push((bool) Stack[-11] == 0)
0x35b: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35c: Push("Can't find map")
0x35d: @ Trace(Stack[-1])
0x35e: Pop(1)
0x35f: Return(); Pop(8)

0x360: Push(CvectorIndex(Stack[-4], 0))
0x361: Push(CvectorIndex(Stack[-5], 2))
0x362: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x363: Pop(2)
0x364: Return(); Pop(8)

0x365: Stack[-2] = 0
0x366: PushEmpty(int, int)
0x367: Push("branch")
0x368: @ GetVariable(Stack[-1], Stack[-2])
0x369: Pop(1)
0x36a: Push((int) 0)
0x36b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36c: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36d: Stack[-3] = (int) 1
0x36e: Return(); Pop(2)

0x36f: GOTO 0x375

0x370: Push((int) 1)
0x371: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x372: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x373: Stack[-3] = (int) 2
0x374: Return(); Pop(2)

0x375: Stack[-3] = (int) 3
0x376: Return(); Pop(2)

0x377: Stack[-1] = (int) 515563
0x378: Return(); Pop(0)

0x379: Stack[-1] = (int) 503348
0x37a: Return(); Pop(0)

0x37b: Stack[-1] = "ui/NPC_Citizen3.png"
0x37c: Return(); Pop(0)

0x37d: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x37e: Return(); Pop(0)

0x37f: Stack[-1] = (bool) 0
0x380: Return(); Pop(0)

