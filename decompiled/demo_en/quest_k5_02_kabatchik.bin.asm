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
0xe: Call2 0x377

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x375

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x379

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x37b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x364

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
0x41: Call2 0x255

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
0x5b: Call2 0x2f0

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
0x71: Call2 0x37d

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x266

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
0x90: Call2 0x37d

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
0xa0: Call2 0x276

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x290

0xa9: Pop(0)
0xaa: Push((int) 27203)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x2c9

0xb1: Pop(2)
0xb2: PushEmpty(object, object)
0xb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5: Call2 0x2e0

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
0xc5: Call2 0x2f0

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
0xfe: Call2 0x37d

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
0x13b: Call2 0x297

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
0x158: Call2 0x297

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
0x195: Call2 0x285

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
0x1b8: Call2 0x2b8

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
0x1d4: Call2 0x2b1

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
0x22c: Call2 0x29d

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
0x23c: @ CameraTransit(Stack[-3], Stack[-5])
0x23d: Pop(0)
0x23e: Push(CvectorIndex(Stack[-4], 0))
0x23f: Push(CvectorIndex(Stack[-5], 2))
0x240: @ Rotate(Stack[-2], Stack[-1])
0x241: Pop(2)
0x242: PushEmpty(bool)
0x243: Call2 0x37d

0x244: Pop(0)
0x245: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x246: GOTO 0x24f

0x247: Push("head")
0x248: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x249: Pop(1)
0x24a: Push(Stack[-1])
0x24b: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24c: Push("head")
0x24d: @ LookAsyncCamera(Stack[-1])
0x24e: Pop(1)
0x24f: @ CameraWaitForPlayFinish()
0x250: Pop(0)
0x251: @ ResumeWorld()
0x252: Pop(0)
0x253: Stack[-21] = (bool) 1
0x254: Return(); Pop(18)

0x255: PushEmpty(bool, bool)
0x256: @ CameraSwitchToNormal()
0x257: Pop(0)
0x258: PushEmpty(bool)
0x259: Call2 0x37d

0x25a: Pop(0)
0x25b: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25c: GOTO 0x265

0x25d: Push("head")
0x25e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x25f: Pop(1)
0x260: Push(Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x262: Push("head")
0x263: @ UnlookAsync(Stack[-1])
0x264: Pop(1)
0x265: Return(); Pop(2)

0x266: PushEmpty(bool, float, float, bool, float, float)
0x267: @ lshHasAnimation(Stack[-3], Stack[-7])
0x268: Pop(0)
0x269: Push(Stack[-3])
0x26a: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26b: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x26c: Pop(0)
0x26d: Push((bool) 0)
0x26e: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x26f: Pop(1)
0x270: GOTO 0x275

0x271: Push("Can't find lsh animation : ")
0x272: Pop(1); Push(Stack[-1] + Stack[-8]);
0x273: @ Trace(Stack[-1])
0x274: Pop(1)
0x275: Return(); Pop(6)

0x276: PushEmpty(bool, float, float, bool, float, float)
0x277: @ lshHasAnimation(Stack[-3], Stack[-8])
0x278: Pop(0)
0x279: Push(Stack[-3])
0x27a: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27b: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x27c: Pop(0)
0x27d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x27e: Pop(0)
0x27f: GOTO 0x284

0x280: Push("Can't find lsh animation : ")
0x281: Pop(1); Push(Stack[-1] + Stack[-9]);
0x282: @ Trace(Stack[-1])
0x283: Pop(1)
0x284: Return(); Pop(6)

0x285: PushEmpty(float, cvector, float, cvector)
0x286: @@ GetEyesHeight(Stack[-2])
0x287: Pop(0)
0x288: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x289: Push(CvectorIndex(Stack[-1], 1))
0x28a: Stack[-1] = Stack[-3]
0x28b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x28c: Push("head")
0x28d: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x28e: Pop(1)
0x28f: Return(); Pop(4)

0x290: PushEmpty(bool)
0x291: Call2 0x37d

0x292: Pop(0)
0x293: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x294: @ lshStopSpeech()
0x295: Pop(0)
0x296: Return(); Pop(0)

0x297: PushEmpty(object, object)
0x298: @ self(Stack[-1])
0x299: Pop(0)
0x29a: Stack[-3] = Stack[-1]
0x29b: Return(); Pop(2)

0x29c: Stack[-1] = 0
0x29d: PushEmpty(float, float)
0x29e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x29f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2a0: Push((float)0.0)
0x2a1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a3: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2a4: Return(); Pop(2)

0x2a5: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2a6: Return(); Pop(2)

0x2a7: PushEmpty(int, int)
0x2a8: @ GetVariable(Stack[-3], Stack[-1])
0x2a9: Pop(0)
0x2aa: Stack[-4] = Stack[-1]
0x2ab: Return(); Pop(2)

0x2ac: PushEmpty(float, float)
0x2ad: @ GetGameTime(Stack[-1])
0x2ae: Pop(0)
0x2af: Stack[-3] = Stack[-1]
0x2b0: Return(); Pop(2)

0x2b1: PushEmpty(string, string)
0x2b2: Stack[-1] = "idle"
0x2b3: Push(Stack[-3])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b5: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2b6: Stack[-4] = Stack[-1]
0x2b7: Return(); Pop(2)

0x2b8: PushEmpty(int, bool, int, bool)
0x2b9: Stack[-2] = (int) 0
0x2ba: Push("all")
0x2bb: PushEmpty(string, int)
0x2bc: Stack[-1] = Stack[-5]
0x2bd: Call2 0x2b1

0x2be: Pop(1)
0x2bf: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2c0: Pop(2)
0x2c1: Pop(0); Push((bool) Stack[-1] == 0)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c3: GOTO 0x2c7

0x2c4: Push((int) 1)
0x2c5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2c6: GOTO 0x2ba

0x2c7: Stack[-5] = Stack[-2]
0x2c8: Return(); Pop(4)

0x2c9: PushEmpty(object, object)
0x2ca: Push("k5q02")
0x2cb: Push((int) 3)
0x2cc: @ SetVariable(Stack[-2], Stack[-1])
0x2cd: Pop(2)
0x2ce: PushEmpty(object)
0x2cf: Call2 0x332

0x2d0: Stack[-2] = Stack[-1]
0x2d1: Pop(1)
0x2d2: Push("k5q02KabatchikGotoAlexandr")
0x2d3: Push("pt_map_alexandr")
0x2d4: Push((int) 0)
0x2d5: Push((int) 511155)
0x2d6: PushEmpty(float)
0x2d7: Call2 0x2ac

0x2d8: Pop(0)
0x2d9: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2da: Pop(5)
0x2db: PushEmpty()
0x2dc: Call2 0x2fc

0x2dd: Pop(0)
0x2de: Return(); Pop(2)

0x2df: Stack[-1] = 0
0x2e0: PushEmpty()
0x2e1: PushEmpty(object, string, float)
0x2e2: PushEmpty(object)
0x2e3: Call2 0x332

0x2e4: Stack[-4] = Stack[-1]
0x2e5: Pop(1)
0x2e6: Stack[-2] = "pt_map_alexandr"
0x2e7: Stack[-1] = (int) 2
0x2e8: Call2 0x343

0x2e9: Pop(3)
0x2ea: PushEmpty(object)
0x2eb: Call2 0x332

0x2ec: Pop(0)
0x2ed: @@ ShowMap(Stack[-1])
0x2ee: Pop(1)
0x2ef: Return(); Pop(0)

0x2f0: PushEmpty()
0x2f1: PushEmpty(int, string)
0x2f2: Stack[-1] = "k5q02"
0x2f3: Call2 0x2a7

0x2f4: Pop(1)
0x2f5: Push((int) 2)
0x2f6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f8: Stack[-2] = (bool) 1
0x2f9: Return(); Pop(0)

0x2fa: Stack[-2] = (bool) 0
0x2fb: Return(); Pop(0)

0x2fc: PushEmpty(object, object)
0x2fd: Push((int) 400)
0x2fe: Push((int) 2)
0x2ff: Push((int) 525938)
0x300: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x301: Pop(3)
0x302: PushEmpty(bool, object, int)
0x303: Stack[-2] = Stack[-4]
0x304: Stack[-1] = (int) 397
0x305: Call2 0x316

0x306: Pop(3)
0x307: Return(); Pop(2)

0x308: Stack[-1] = 0
0x309: PushEmpty(object, object)
0x30a: @ GetDiaryRoot(Stack[-1])
0x30b: Pop(0)
0x30c: Pop(0); Push((bool) Stack[-1] == 0)
0x30d: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x30e: Push("Can't retrieve diary root")
0x30f: @ Trace(Stack[-1])
0x310: Pop(1)
0x311: Stack[-3] = (bool) 0
0x312: Return(); Pop(2)

0x313: Stack[-3] = Stack[-1]
0x314: Return(); Pop(2)

0x315: Stack[-1] = 0
0x316: PushEmpty(object, object, int, object, object, int)
0x317: PushEmpty(object)
0x318: Call2 0x309

0x319: Stack[-4] = Stack[-1]
0x31a: Pop(1)
0x31b: @@ Find(Stack[-7], Stack[-2])
0x31c: Pop(0)
0x31d: Pop(0); Push((bool) Stack[-2] == 0)
0x31e: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x31f: Push("Can't find diary parent with id: ")
0x320: Pop(1); Push(Stack[-1] + Stack[-8]);
0x321: @ Trace(Stack[-1])
0x322: Pop(1)
0x323: Stack[-9] = (bool) 0
0x324: Return(); Pop(6)

0x325: @@ AddChild(Stack[-8])
0x326: Pop(0)
0x327: Push((int) 7)
0x328: @ SendWorldWndMessage(Stack[-1])
0x329: Pop(1)
0x32a: @@ GetCategory(Stack[-1])
0x32b: Pop(0)
0x32c: @ SetDiarySection(Stack[-1])
0x32d: Pop(0)
0x32e: Stack[-9] = (bool) 0
0x32f: Return(); Pop(6)

0x330: Stack[-2] = 0
0x331: Stack[-3] = 0
0x332: PushEmpty(object, object, object, object)
0x333: @ GetMainOutdoorScene(Stack[-2])
0x334: Pop(0)
0x335: Pop(0); Push((bool) Stack[-2] == 0)
0x336: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x337: Push("Can't find main outdoor scene")
0x338: @ Trace(Stack[-1])
0x339: Pop(1)
0x33a: Stack[-1] = 0
0x33b: Stack[-5] = Stack[-1]
0x33c: Return(); Pop(4)

0x33d: @@ GetMap(Stack[-1])
0x33e: Pop(0)
0x33f: Stack[-5] = Stack[-1]
0x340: Return(); Pop(4)

0x341: Stack[-1] = 0
0x342: Stack[-2] = 0
0x343: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x344: @ GetMainOutdoorScene(Stack[-2])
0x345: Pop(0)
0x346: Pop(0); Push((bool) Stack[-2] == 0)
0x347: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x348: Push("Can't find main outdoor scene")
0x349: @ Trace(Stack[-1])
0x34a: Pop(1)
0x34b: Return(); Pop(8)

0x34c: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x34d: Pop(0)
0x34e: Pop(0); Push((bool) Stack[-1] == 0)
0x34f: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x350: Push("Warning: outdoor scene locator ")
0x351: Pop(1); Push(Stack[-1] + Stack[-11]);
0x352: Push(" doesnt exist")
0x353: Pop(2); Push(Stack[-2] + Stack[-1]);
0x354: @ Trace(Stack[-1])
0x355: Pop(1)
0x356: @@ GetMap(Stack[-11])
0x357: Pop(0)
0x358: Pop(0); Push((bool) Stack[-11] == 0)
0x359: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x35a: Push("Can't find map")
0x35b: @ Trace(Stack[-1])
0x35c: Pop(1)
0x35d: Return(); Pop(8)

0x35e: Push(CvectorIndex(Stack[-4], 0))
0x35f: Push(CvectorIndex(Stack[-5], 2))
0x360: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x361: Pop(2)
0x362: Return(); Pop(8)

0x363: Stack[-2] = 0
0x364: PushEmpty(int, int)
0x365: Push("branch")
0x366: @ GetVariable(Stack[-1], Stack[-2])
0x367: Pop(1)
0x368: Push((int) 0)
0x369: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36b: Stack[-3] = (int) 1
0x36c: Return(); Pop(2)

0x36d: GOTO 0x373

0x36e: Push((int) 1)
0x36f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x370: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x371: Stack[-3] = (int) 2
0x372: Return(); Pop(2)

0x373: Stack[-3] = (int) 3
0x374: Return(); Pop(2)

0x375: Stack[-1] = (int) 515563
0x376: Return(); Pop(0)

0x377: Stack[-1] = (int) 503348
0x378: Return(); Pop(0)

0x379: Stack[-1] = "ui/NPC_Citizen3.png"
0x37a: Return(); Pop(0)

0x37b: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x37c: Return(); Pop(0)

0x37d: Stack[-1] = (bool) 0
0x37e: Return(); Pop(0)

