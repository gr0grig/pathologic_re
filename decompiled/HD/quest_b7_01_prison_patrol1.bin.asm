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
	b7q01
	b7q01PatrolGotoGorbun
	pt_map_gorbun
	AddMark
	quest_b7_01
	init_gorbun_house
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
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png

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
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x159
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa9 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x14e Vars = (object)
		EVENT_26 Op = 0x182 Vars = (string)
		EVENT_5 Op = 0x18a Vars = ()
		EVENT_6 Op = 0x18f Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1fc

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x36a

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x368

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x36c

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x36e

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x357

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
0x41: Call2 0x241

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
0x4f: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x2e3

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x93

0x58: Pop(1)
0x59: Push((int) 520989)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 528466)
0x5f: Push((int) 29854)
0x60: Push((int) 29853)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x75

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral"
0x66: Call2 0x93

0x67: Pop(1)
0x68: Push((int) 528472)
0x69: @@ SetMessage(Stack[-1])
0x6a: Pop(1)
0x6b: @@ ClearReplies()
0x6c: Pop(0)
0x6d: Push((int) 520992)
0x6e: Push((int) -1)
0x6f: Push((int) 22205)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: GOTO 0x75

0x73: Return(); Pop(0)

0x74: GOTO 0x4e

0x75: PushEmpty(bool)
0x76: Call2 0x370

0x77: Pop(0)
0x78: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x79: @ lshWaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: PushEmpty(string)
0x7f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x80: Call2 0x253

0x81: Pop(1)
0x82: GOTO 0x79

0x83: GOTO 0x92

0x84: Push("all")
0x85: Push("idle")
0x86: @ PlayAnimation(Stack[-2], Stack[-1])
0x87: Pop(2)
0x88: @ WaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: Push("all")
0x8e: Push("idle")
0x8f: @ PlayAnimation(Stack[-2], Stack[-1])
0x90: Pop(2)
0x91: GOTO 0x88

0x92: Return(); Pop(0)

0x93: PushEmpty()
0x94: PushEmpty(bool)
0x95: Call2 0x370

0x96: Pop(0)
0x97: Pop(1); Push((bool) Stack[-1] == 0)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(0)

0x9a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: Return(); Pop(0)

0x9d: PushEmpty(string, bool)
0x9e: Stack[-2] = Stack[-3]
0x9f: Push("")
0xa0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa1: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa2: Stack[-1] = (bool) 0
0xa3: GOTO 0xa5

0xa4: Stack[-1] = (bool) 1
0xa5: Call2 0x263

0xa6: Pop(2)
0xa7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: Push((int) 1)
0xab: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0xac: PushEmpty()
0xad: Call2 0x272

0xae: Pop(0)
0xaf: Push((int) 22203)
0xb0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb2: PushEmpty(object, object)
0xb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5: Call2 0x2b7

0xb6: Pop(2)
0xb7: PushEmpty(object, object)
0xb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba: Call2 0x2d3

0xbb: Pop(2)
0xbc: Push((int) 22202)
0xbd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xbf: PushEmpty(bool, object)
0xc0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Call2 0x2e3

0xc2: Pop(1)
0xc3: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc4: PushEmpty(string)
0xc5: Stack[-1] = "Neutral"
0xc6: Call2 0x93

0xc7: Pop(1)
0xc8: Push((int) 520989)
0xc9: @@ SetMessage(Stack[-1])
0xca: Pop(1)
0xcb: @@ ClearReplies()
0xcc: Pop(0)
0xcd: Push((int) 528466)
0xce: Push((int) 29854)
0xcf: Push((int) 29853)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: Return(); Pop(0)

0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Neutral"
0xd5: Call2 0x93

0xd6: Pop(1)
0xd7: Push((int) 528472)
0xd8: @@ SetMessage(Stack[-1])
0xd9: Pop(1)
0xda: @@ ClearReplies()
0xdb: Pop(0)
0xdc: Push((int) 520992)
0xdd: Push((int) -1)
0xde: Push((int) 22205)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Push((int) 29854)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Neutral"
0xe7: Call2 0x93

0xe8: Pop(1)
0xe9: Push((int) 528467)
0xea: @@ SetMessage(Stack[-1])
0xeb: Pop(1)
0xec: @@ ClearReplies()
0xed: Pop(0)
0xee: Push((int) 528468)
0xef: Push((int) 29856)
0xf0: Push((int) 29855)
0xf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2: Pop(3)
0xf3: Return(); Pop(0)

0xf4: Push((int) 29856)
0xf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf7: PushEmpty(string)
0xf8: Stack[-1] = "Neutral"
0xf9: Call2 0x93

0xfa: Pop(1)
0xfb: Push((int) 528469)
0xfc: @@ SetMessage(Stack[-1])
0xfd: Pop(1)
0xfe: @@ ClearReplies()
0xff: Pop(0)
0x100: Push((int) 528470)
0x101: Push((int) 29858)
0x102: Push((int) 29857)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: Return(); Pop(0)

0x106: Push((int) 29858)
0x107: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Neutral"
0x10b: Call2 0x93

0x10c: Pop(1)
0x10d: Push((int) 528471)
0x10e: @@ SetMessage(Stack[-1])
0x10f: Pop(1)
0x110: @@ ClearReplies()
0x111: Pop(0)
0x112: Push((int) 528473)
0x113: Push((int) 29861)
0x114: Push((int) 29860)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Push((int) 528477)
0x118: Push((int) 29863)
0x119: Push((int) 29864)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: Return(); Pop(0)

0x11d: Push((int) 29861)
0x11e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x120: PushEmpty(string)
0x121: Stack[-1] = "Neutral"
0x122: Call2 0x93

0x123: Pop(1)
0x124: Push((int) 528474)
0x125: @@ SetMessage(Stack[-1])
0x126: Pop(1)
0x127: @@ ClearReplies()
0x128: Pop(0)
0x129: Push((int) 528475)
0x12a: Push((int) 29863)
0x12b: Push((int) 29862)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Return(); Pop(0)

0x12f: Push((int) 29863)
0x130: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x132: PushEmpty(string)
0x133: Stack[-1] = "Neutral"
0x134: Call2 0x93

0x135: Pop(1)
0x136: Push((int) 528476)
0x137: @@ SetMessage(Stack[-1])
0x138: Pop(1)
0x139: @@ ClearReplies()
0x13a: Pop(0)
0x13b: Push((int) 520990)
0x13c: Push((int) -1)
0x13d: Push((int) 22203)
0x13e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f: Pop(3)
0x140: Return(); Pop(0)

0x141: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x142: PushEmpty(bool)
0x143: Call2 0x370

0x144: Pop(0)
0x145: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x146: @ lshStopAnimation()
0x147: Pop(0)
0x148: GOTO 0x14b

0x149: @ StopAnimation()
0x14a: Pop(0)
0x14b: Return(); Pop(0)

0x14c: GOTO 0xaa

0x14d: Return(); Pop(0)

0x14e: PushEmpty()
0x14f: PushEmpty()
0x150: Call2 0x1f2

0x151: Pop(0)
0x152: PushEmpty(int, object)
0x153: Stack[-1] = Stack[-3]
0x154: Push(-2, 1); TaskCall(0)
0x155: Call2 0x0

0x156: Pop(-2, 1); TaskReturn
0x157: Pop(2)
0x158: Return(); Pop(0)

0x159: PushEmpty(float, float)
0x15a: PushEmpty(bool)
0x15b: Call2 0x1f7

0x15c: Pop(0)
0x15d: Pop(1); Push((bool) Stack[-1] == 0)
0x15e: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x15f: @ Hold()
0x160: Pop(0)
0x161: GOTO 0x15a

0x162: Push((int) 3)
0x163: @ rand(Stack[-2], Stack[-1])
0x164: Pop(1)
0x165: Push((int) 3)
0x166: Pop(1); Push(Stack[-2] + Stack[-1]);
0x167: @ Sleep(Stack[-1])
0x168: Pop(1)
0x169: PushEmpty()
0x16a: Call2 0x1a1

0x16b: Pop(0)
0x16c: GOTO 0x15a

0x16d: Return(); Pop(2)

0x16e: PushEmpty(bool, bool)
0x16f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x170: @ IsLoaded(Stack[-1])
0x171: Pop(0)
0x172: PushEmpty(bool)
0x173: Stack[-1] = (bool) 0
0x174: Pop(0); Push((bool) Stack[-2] == 0)
0x175: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x176: PushEmpty(bool)
0x177: Call2 0x19f

0x178: Pop(0)
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: Stack[-1] = (bool) 1
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: PushEmpty(object)
0x17d: Call2 0x279

0x17e: Pop(0)
0x17f: @ RemoveActor(Stack[-1])
0x180: Pop(1)
0x181: Return(); Pop(2)

0x182: PushEmpty()
0x183: Push("cleanup")
0x184: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x186: PushEmpty()
0x187: Call2 0x16e

0x188: Pop(0)
0x189: Return(); Pop(0)

0x18a: @ StopGroup0()
0x18b: Pop(0)
0x18c: @ sync()
0x18d: Pop(0)
0x18e: Return(); Pop(0)

0x18f: PushEmpty(bool)
0x190: Stack[-1] = (bool) 0
0x191: Push( Stack[0 + Tasks[-1].StackPointer] )
0x192: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x193: PushEmpty(bool)
0x194: Call2 0x19f

0x195: Pop(0)
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: Stack[-1] = (bool) 1
0x198: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x199: PushEmpty(object)
0x19a: Call2 0x279

0x19b: Pop(0)
0x19c: @ RemoveActor(Stack[-1])
0x19d: Pop(1)
0x19e: Return(); Pop(0)

0x19f: Stack[-1] = (bool) 1
0x1a0: Return(); Pop(0)

0x1a1: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1a2: @ WaitForAnimEnd()
0x1a3: Pop(0)
0x1a4: PushEmpty(bool)
0x1a5: Call2 0x1f7

0x1a6: Pop(0)
0x1a7: Pop(1); Push((bool) Stack[-1] == 0)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: Return(); Pop(14)

0x1aa: PushEmpty(int)
0x1ab: Call2 0x2a6

0x1ac: Stack[-8] = Stack[-1]
0x1ad: Pop(1)
0x1ae: Stack[-6] = (int) 0
0x1af: PushEmpty(bool)
0x1b0: Stack[-1] = (bool) 0
0x1b1: Push((int) 5)
0x1b2: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b4: PushEmpty(bool)
0x1b5: Call2 0x1f7

0x1b6: Pop(0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: Stack[-1] = (bool) 1
0x1b9: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ba: Push((int) 3)
0x1bb: @ irand(Stack[-6], Stack[-1])
0x1bc: Pop(1)
0x1bd: Push((int) 0)
0x1be: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1c0: Push(Stack[-7])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1c2: @ irand(Stack[-4], Stack[-7])
0x1c3: Pop(0)
0x1c4: Push("all")
0x1c5: PushEmpty(string, int)
0x1c6: Stack[-1] = Stack[-7]
0x1c7: Call2 0x29f

0x1c8: Pop(1)
0x1c9: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ca: Pop(2)
0x1cb: @ WaitForAnimEnd(Stack[-3])
0x1cc: Pop(0)
0x1cd: Pop(0); Push((bool) Stack[-3] == 0)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cf: GOTO 0x1ed

0x1d0: GOTO 0x1e2

0x1d1: Push((int) 1)
0x1d2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1d4: Push((int) 4)
0x1d5: @ rand(Stack[-3], Stack[-1])
0x1d6: Pop(1)
0x1d7: Push((int) 1)
0x1d8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1d9: @ Sleep(Stack[-1], Stack[-2])
0x1da: Pop(1)
0x1db: Pop(0); Push((bool) Stack[-1] == 0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1dd: GOTO 0x1ed

0x1de: GOTO 0x1e2

0x1df: Push(Stack[-6])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e1: GOTO 0x1ed

0x1e2: PushEmpty(bool)
0x1e3: Call2 0x1f0

0x1e4: Pop(0)
0x1e5: Pop(1); Push((bool) Stack[-1] == 0)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e7: GOTO 0x1ed

0x1e8: @ ResetAAS()
0x1e9: Pop(0)
0x1ea: Push((int) 1)
0x1eb: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1ec: GOTO 0x1af

0x1ed: @ ResetAAS()
0x1ee: Pop(0)
0x1ef: Return(); Pop(14)

0x1f0: Stack[-1] = (bool) 1
0x1f1: Return(); Pop(0)

0x1f2: @ StopAnimation()
0x1f3: Pop(0)
0x1f4: @ StopGroup0()
0x1f5: Pop(0)
0x1f6: Return(); Pop(0)

0x1f7: PushEmpty(bool, bool)
0x1f8: @ IsLoaded(Stack[-1])
0x1f9: Pop(0)
0x1fa: Stack[-3] = Stack[-1]
0x1fb: Return(); Pop(2)

0x1fc: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1fd: @@ GetPosition(Stack[-8])
0x1fe: Pop(0)
0x1ff: @@ GetEyesHeight(Stack[-9])
0x200: Pop(0)
0x201: Push(CvectorIndex(Stack[-8], 1))
0x202: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x203: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x204: @ GetPosition(Stack[-7])
0x205: Pop(0)
0x206: @ GetEyesHeight(Stack[-9])
0x207: Pop(0)
0x208: Push(CvectorIndex(Stack[-7], 1))
0x209: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x20a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x20b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x20c: Push(CvectorIndex(Stack[-6], 1))
0x20d: Stack[-1] = (int) 0
0x20e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x20f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x210: Pop(1); Push(Sqrt(Stack[-1]))
0x211: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x212: Stack[-5] = -Stack[-6]; Pop(0);
0x213: Pop(0); Push(Stack[-6] * Stack[-19]);
0x214: PushEmpty(cvector, cvector)
0x215: Push(CVector(0.0, 1.0, 0.0))
0x216: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x217: Call2 0x27f

0x218: Pop(1)
0x219: Push((int) 25)
0x21a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x21b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x21c: Push(CVector(0.0, 10.0, 0.0))
0x21d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x21e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x21f: @ IsOverrideActive(Stack[-2])
0x220: Pop(0)
0x221: Push(Stack[-2])
0x222: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x223: Stack[-21] = (bool) 0
0x224: Return(); Pop(18)

0x225: @ StopWorld()
0x226: Pop(0)
0x227: Push((bool) 1)
0x228: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x229: Pop(1)
0x22a: Push(CvectorIndex(Stack[-4], 0))
0x22b: Push(CvectorIndex(Stack[-5], 2))
0x22c: @ Rotate(Stack[-2], Stack[-1])
0x22d: Pop(2)
0x22e: PushEmpty(bool)
0x22f: Call2 0x370

0x230: Pop(0)
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: GOTO 0x23b

0x233: Push("head")
0x234: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x235: Pop(1)
0x236: Push(Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x238: Push("head")
0x239: @ LookAsyncCamera(Stack[-1])
0x23a: Pop(1)
0x23b: @ CameraWaitForPlayFinish()
0x23c: Pop(0)
0x23d: @ ResumeWorld()
0x23e: Pop(0)
0x23f: Stack[-21] = (bool) 1
0x240: Return(); Pop(18)

0x241: PushEmpty(bool, bool)
0x242: Push((bool) 1)
0x243: @ CameraSwitchToNormal(Stack[-1])
0x244: Pop(1)
0x245: PushEmpty(bool)
0x246: Call2 0x370

0x247: Pop(0)
0x248: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x249: GOTO 0x252

0x24a: Push("head")
0x24b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x24c: Pop(1)
0x24d: Push(Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x24f: Push("head")
0x250: @ UnlookAsync(Stack[-1])
0x251: Pop(1)
0x252: Return(); Pop(2)

0x253: PushEmpty(bool, float, float, bool, float, float)
0x254: @ lshHasAnimation(Stack[-3], Stack[-7])
0x255: Pop(0)
0x256: Push(Stack[-3])
0x257: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x258: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x259: Pop(0)
0x25a: Push((bool) 0)
0x25b: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x25c: Pop(1)
0x25d: GOTO 0x262

0x25e: Push("Can't find lsh animation : ")
0x25f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x260: @ Trace(Stack[-1])
0x261: Pop(1)
0x262: Return(); Pop(6)

0x263: PushEmpty(bool, float, float, bool, float, float)
0x264: @ lshHasAnimation(Stack[-3], Stack[-8])
0x265: Pop(0)
0x266: Push(Stack[-3])
0x267: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x268: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x269: Pop(0)
0x26a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x26b: Pop(0)
0x26c: GOTO 0x271

0x26d: Push("Can't find lsh animation : ")
0x26e: Pop(1); Push(Stack[-1] + Stack[-9]);
0x26f: @ Trace(Stack[-1])
0x270: Pop(1)
0x271: Return(); Pop(6)

0x272: PushEmpty(bool)
0x273: Call2 0x370

0x274: Pop(0)
0x275: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x276: @ lshStopSpeech()
0x277: Pop(0)
0x278: Return(); Pop(0)

0x279: PushEmpty(object, object)
0x27a: @ self(Stack[-1])
0x27b: Pop(0)
0x27c: Stack[-3] = Stack[-1]
0x27d: Return(); Pop(2)

0x27e: Stack[-1] = 0
0x27f: PushEmpty(float, float)
0x280: Pop(0); Push(Stack[-3] | Stack[-3]);
0x281: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x282: Push((float)0.0)
0x283: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x285: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x286: Return(); Pop(2)

0x287: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x288: Return(); Pop(2)

0x289: PushEmpty(int, int)
0x28a: @ GetVariable(Stack[-3], Stack[-1])
0x28b: Pop(0)
0x28c: Stack[-4] = Stack[-1]
0x28d: Return(); Pop(2)

0x28e: PushEmpty(object, object)
0x28f: @ FindActor(Stack[-1], Stack[-4])
0x290: Pop(0)
0x291: Pop(0); Push((bool) Stack[-1] == 0)
0x292: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x293: Stack[-5] = (bool) 0
0x294: Return(); Pop(2)

0x295: @ Trigger(Stack[-1], Stack[-3])
0x296: Pop(0)
0x297: Stack[-5] = (bool) 1
0x298: Return(); Pop(2)

0x299: Stack[-1] = 0
0x29a: PushEmpty(float, float)
0x29b: @ GetGameTime(Stack[-1])
0x29c: Pop(0)
0x29d: Stack[-3] = Stack[-1]
0x29e: Return(); Pop(2)

0x29f: PushEmpty(string, string)
0x2a0: Stack[-1] = "idle"
0x2a1: Push(Stack[-3])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a3: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2a4: Stack[-4] = Stack[-1]
0x2a5: Return(); Pop(2)

0x2a6: PushEmpty(int, bool, int, bool)
0x2a7: Stack[-2] = (int) 0
0x2a8: Push("all")
0x2a9: PushEmpty(string, int)
0x2aa: Stack[-1] = Stack[-5]
0x2ab: Call2 0x29f

0x2ac: Pop(1)
0x2ad: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2ae: Pop(2)
0x2af: Pop(0); Push((bool) Stack[-1] == 0)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: GOTO 0x2b5

0x2b2: Push((int) 1)
0x2b3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2b4: GOTO 0x2a8

0x2b5: Stack[-5] = Stack[-2]
0x2b6: Return(); Pop(4)

0x2b7: PushEmpty(object, object)
0x2b8: Push("b7q01")
0x2b9: Push((int) 4)
0x2ba: @ SetVariable(Stack[-2], Stack[-1])
0x2bb: Pop(2)
0x2bc: PushEmpty(object)
0x2bd: Call2 0x325

0x2be: Stack[-2] = Stack[-1]
0x2bf: Pop(1)
0x2c0: Push("b7q01PatrolGotoGorbun")
0x2c1: Push("pt_map_gorbun")
0x2c2: Push((int) 1)
0x2c3: Push((int) 521025)
0x2c4: PushEmpty(float)
0x2c5: Call2 0x29a

0x2c6: Pop(0)
0x2c7: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2c8: Pop(5)
0x2c9: PushEmpty()
0x2ca: Call2 0x2ef

0x2cb: Pop(0)
0x2cc: PushEmpty(bool, string, string)
0x2cd: Stack[-2] = "quest_b7_01"
0x2ce: Stack[-1] = "init_gorbun_house"
0x2cf: Call2 0x28e

0x2d0: Pop(3)
0x2d1: Return(); Pop(2)

0x2d2: Stack[-1] = 0
0x2d3: PushEmpty()
0x2d4: PushEmpty(object, string, float)
0x2d5: PushEmpty(object)
0x2d6: Call2 0x325

0x2d7: Stack[-4] = Stack[-1]
0x2d8: Pop(1)
0x2d9: Stack[-2] = "pt_map_gorbun"
0x2da: Stack[-1] = (int) 2
0x2db: Call2 0x336

0x2dc: Pop(3)
0x2dd: PushEmpty(object)
0x2de: Call2 0x325

0x2df: Pop(0)
0x2e0: @@ ShowMap(Stack[-1])
0x2e1: Pop(1)
0x2e2: Return(); Pop(0)

0x2e3: PushEmpty()
0x2e4: PushEmpty(int, string)
0x2e5: Stack[-1] = "b7q01"
0x2e6: Call2 0x289

0x2e7: Pop(1)
0x2e8: Push((int) 3)
0x2e9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2eb: Stack[-2] = (bool) 1
0x2ec: Return(); Pop(0)

0x2ed: Stack[-2] = (bool) 0
0x2ee: Return(); Pop(0)

0x2ef: PushEmpty(object, object)
0x2f0: Push((int) 257)
0x2f1: Push((int) 1)
0x2f2: Push((int) 521029)
0x2f3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2f4: Pop(3)
0x2f5: PushEmpty(bool, object, int)
0x2f6: Stack[-2] = Stack[-4]
0x2f7: Stack[-1] = (int) 253
0x2f8: Call2 0x309

0x2f9: Pop(3)
0x2fa: Return(); Pop(2)

0x2fb: Stack[-1] = 0
0x2fc: PushEmpty(object, object)
0x2fd: @ GetDiaryRoot(Stack[-1])
0x2fe: Pop(0)
0x2ff: Pop(0); Push((bool) Stack[-1] == 0)
0x300: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x301: Push("Can't retrieve diary root")
0x302: @ Trace(Stack[-1])
0x303: Pop(1)
0x304: Stack[-3] = (bool) 0
0x305: Return(); Pop(2)

0x306: Stack[-3] = Stack[-1]
0x307: Return(); Pop(2)

0x308: Stack[-1] = 0
0x309: PushEmpty(object, object, int, object, object, int)
0x30a: PushEmpty(object)
0x30b: Call2 0x2fc

0x30c: Stack[-4] = Stack[-1]
0x30d: Pop(1)
0x30e: @@ Find(Stack[-7], Stack[-2])
0x30f: Pop(0)
0x310: Pop(0); Push((bool) Stack[-2] == 0)
0x311: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x312: Push("Can't find diary parent with id: ")
0x313: Pop(1); Push(Stack[-1] + Stack[-8]);
0x314: @ Trace(Stack[-1])
0x315: Pop(1)
0x316: Stack[-9] = (bool) 0
0x317: Return(); Pop(6)

0x318: @@ AddChild(Stack[-8])
0x319: Pop(0)
0x31a: Push((int) 7)
0x31b: @ SendWorldWndMessage(Stack[-1])
0x31c: Pop(1)
0x31d: @@ GetCategory(Stack[-1])
0x31e: Pop(0)
0x31f: @ SetDiarySection(Stack[-1])
0x320: Pop(0)
0x321: Stack[-9] = (bool) 0
0x322: Return(); Pop(6)

0x323: Stack[-2] = 0
0x324: Stack[-3] = 0
0x325: PushEmpty(object, object, object, object)
0x326: @ GetMainOutdoorScene(Stack[-2])
0x327: Pop(0)
0x328: Pop(0); Push((bool) Stack[-2] == 0)
0x329: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32a: Push("Can't find main outdoor scene")
0x32b: @ Trace(Stack[-1])
0x32c: Pop(1)
0x32d: Stack[-1] = 0
0x32e: Stack[-5] = Stack[-1]
0x32f: Return(); Pop(4)

0x330: @@ GetMap(Stack[-1])
0x331: Pop(0)
0x332: Stack[-5] = Stack[-1]
0x333: Return(); Pop(4)

0x334: Stack[-1] = 0
0x335: Stack[-2] = 0
0x336: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x337: @ GetMainOutdoorScene(Stack[-2])
0x338: Pop(0)
0x339: Pop(0); Push((bool) Stack[-2] == 0)
0x33a: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33b: Push("Can't find main outdoor scene")
0x33c: @ Trace(Stack[-1])
0x33d: Pop(1)
0x33e: Return(); Pop(8)

0x33f: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x340: Pop(0)
0x341: Pop(0); Push((bool) Stack[-1] == 0)
0x342: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x343: Push("Warning: outdoor scene locator ")
0x344: Pop(1); Push(Stack[-1] + Stack[-11]);
0x345: Push(" doesnt exist")
0x346: Pop(2); Push(Stack[-2] + Stack[-1]);
0x347: @ Trace(Stack[-1])
0x348: Pop(1)
0x349: @@ GetMap(Stack[-11])
0x34a: Pop(0)
0x34b: Pop(0); Push((bool) Stack[-11] == 0)
0x34c: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34d: Push("Can't find map")
0x34e: @ Trace(Stack[-1])
0x34f: Pop(1)
0x350: Return(); Pop(8)

0x351: Push(CvectorIndex(Stack[-4], 0))
0x352: Push(CvectorIndex(Stack[-5], 2))
0x353: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x354: Pop(2)
0x355: Return(); Pop(8)

0x356: Stack[-2] = 0
0x357: PushEmpty(int, int)
0x358: Push("branch")
0x359: @ GetVariable(Stack[-1], Stack[-2])
0x35a: Pop(1)
0x35b: Push((int) 0)
0x35c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35d: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x35e: Stack[-3] = (int) 1
0x35f: Return(); Pop(2)

0x360: GOTO 0x366

0x361: Push((int) 1)
0x362: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x364: Stack[-3] = (int) 2
0x365: Return(); Pop(2)

0x366: Stack[-3] = (int) 3
0x367: Return(); Pop(2)

0x368: Stack[-1] = (int) 515572
0x369: Return(); Pop(0)

0x36a: Stack[-1] = (int) 504031
0x36b: Return(); Pop(0)

0x36c: Stack[-1] = "ui/NPC_Citizen2.png"
0x36d: Return(); Pop(0)

0x36e: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x36f: Return(); Pop(0)

0x370: Stack[-1] = (bool) 0
0x371: Return(); Pop(0)

