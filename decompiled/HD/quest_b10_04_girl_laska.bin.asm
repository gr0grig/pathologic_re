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
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png
	oob10GirlLaska1
	b10q04GirlGotoKapella
	pt_map_kapella
	AddMark
	ShowMap
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch

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
	GetMainOutdoorScene (1 args)

RunOp = 0x107
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x10d Vars = (object)
		EVENT_26 Op = 0x13e Vars = (string)
		EVENT_6 Op = 0x146 Vars = ()
		EVENT_7 Op = 0x187 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x20f

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2cb

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2c9

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2cd

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2cf

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x33b

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
0x41: Call2 0x254

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
0x54: Push((int) 530443)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x2fd

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 530444)
0x5f: Push((int) 31811)
0x60: Push((int) 31810)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 530447)
0x64: Push((int) -1)
0x65: Push((int) 31813)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x2d1

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x266

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
0x8b: Call2 0x2d1

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
0x9b: Call2 0x276

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x290

0xa4: Pop(0)
0xa5: Push((int) 31810)
0xa6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x2d3

0xac: Pop(2)
0xad: Push((int) 31812)
0xae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb0: PushEmpty(object, object)
0xb1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb3: Call2 0x2d9

0xb4: Pop(2)
0xb5: PushEmpty(object, object)
0xb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call2 0x2ed

0xb9: Pop(2)
0xba: Push((int) 32837)
0xbb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xbd: PushEmpty(object, object)
0xbe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc0: Call2 0x2d9

0xc1: Pop(2)
0xc2: PushEmpty(object, object)
0xc3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc5: Call2 0x2ed

0xc6: Pop(2)
0xc7: Push((int) 31809)
0xc8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xca: PushEmpty(string)
0xcb: Stack[-1] = "Neutral"
0xcc: Call2 0x89

0xcd: Pop(1)
0xce: Push((int) 530443)
0xcf: @@ SetMessage(Stack[-1])
0xd0: Pop(1)
0xd1: @@ ClearReplies()
0xd2: Pop(0)
0xd3: PushEmpty(bool, object)
0xd4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Call2 0x2fd

0xd6: Pop(1)
0xd7: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd8: Push((int) 530444)
0xd9: Push((int) 31811)
0xda: Push((int) 31810)
0xdb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc: Pop(3)
0xdd: Push((int) 530447)
0xde: Push((int) -1)
0xdf: Push((int) 31813)
0xe0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1: Pop(3)
0xe2: Return(); Pop(0)

0xe3: Push((int) 31811)
0xe4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xe6: PushEmpty(string)
0xe7: Stack[-1] = "Neutral"
0xe8: Call2 0x89

0xe9: Pop(1)
0xea: Push((int) 530445)
0xeb: @@ SetMessage(Stack[-1])
0xec: Pop(1)
0xed: @@ ClearReplies()
0xee: Pop(0)
0xef: Push((int) 530446)
0xf0: Push((int) -1)
0xf1: Push((int) 31812)
0xf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3: Pop(3)
0xf4: Push((int) 531483)
0xf5: Push((int) -1)
0xf6: Push((int) 32837)
0xf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8: Pop(3)
0xf9: Return(); Pop(0)

0xfa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xfb: PushEmpty(bool)
0xfc: Call2 0x2d1

0xfd: Pop(0)
0xfe: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xff: @ lshStopAnimation()
0x100: Pop(0)
0x101: GOTO 0x104

0x102: @ StopAnimation()
0x103: Pop(0)
0x104: Return(); Pop(0)

0x105: GOTO 0xa0

0x106: Return(); Pop(0)

0x107: PushEmpty(float, float)
0x108: Stack[-2] = (int) 300
0x109: Stack[-1] = (int) 100
0x10a: Call2 0x118

0x10b: Pop(2)
0x10c: Return(); Pop(0)

0x10d: PushEmpty()
0x10e: PushEmpty()
0x10f: Call2 0x19e

0x110: Pop(0)
0x111: PushEmpty(int, object)
0x112: Stack[-1] = Stack[-3]
0x113: Push(-2, 1); TaskCall(0)
0x114: Call2 0x0

0x115: Pop(-2, 1); TaskReturn
0x116: Pop(2)
0x117: Return(); Pop(0)

0x118: PushEmpty(float, bool, float, bool)
0x119: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x11a: Push((int) 3)
0x11b: @ rand(Stack[-3], Stack[-1])
0x11c: Pop(1)
0x11d: Push((int) 3)
0x11e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x11f: @ Sleep(Stack[-1], Stack[-2])
0x120: Pop(1)
0x121: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x122: PushEmpty(float, float)
0x123: Stack[-2] = Stack[-8]
0x124: Stack[-1] = Stack[-7]
0x125: Call2 0x15d

0x126: Pop(2)
0x127: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x128: GOTO 0x11a

0x129: Return(); Pop(4)

0x12a: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x12b: PushEmpty(bool)
0x12c: Stack[-1] = (bool) 0
0x12d: PushEmpty(bool)
0x12e: Call2 0x20a

0x12f: Pop(0)
0x130: Pop(1); Push((bool) Stack[-1] == 0)
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: PushEmpty(bool)
0x133: Call2 0x15b

0x134: Pop(0)
0x135: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x136: Stack[-1] = (bool) 1
0x137: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x138: PushEmpty(object)
0x139: Call2 0x297

0x13a: Pop(0)
0x13b: @ RemoveActor(Stack[-1])
0x13c: Pop(1)
0x13d: Return(); Pop(0)

0x13e: PushEmpty()
0x13f: Push("cleanup")
0x140: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x142: PushEmpty()
0x143: Call2 0x12a

0x144: Pop(0)
0x145: Return(); Pop(0)

0x146: Push( Stack[6 + Tasks[-1].StackPointer] )
0x147: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x148: PushEmpty()
0x149: Call2 0x19e

0x14a: Pop(0)
0x14b: PushEmpty(bool)
0x14c: Stack[-1] = (bool) 0
0x14d: Push( Stack[5 + Tasks[-1].StackPointer] )
0x14e: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x14f: PushEmpty(bool)
0x150: Call2 0x15b

0x151: Pop(0)
0x152: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x153: Stack[-1] = (bool) 1
0x154: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x155: PushEmpty(object)
0x156: Call2 0x297

0x157: Pop(0)
0x158: @ RemoveActor(Stack[-1])
0x159: Pop(1)
0x15a: Return(); Pop(0)

0x15b: Stack[-1] = (bool) 1
0x15c: Return(); Pop(0)

0x15d: PushEmpty()
0x15e: PushEmpty(bool)
0x15f: Call2 0x20a

0x160: Pop(0)
0x161: Pop(1); Push((bool) Stack[-1] == 0)
0x162: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x163: Return(); Pop(0)

0x164: Push("player")
0x165: @ FindActor(Stack[-4], Stack[-1])
0x166: Pop(1)
0x167: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x168: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x169: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x16a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x16b: Push((int) 10)
0x16c: Push((float)1.0)
0x16d: @ SetTimer(Stack[-2], Stack[-1])
0x16e: Pop(2)
0x16f: PushEmpty()
0x170: Call2 0x1ac

0x171: Pop(0)
0x172: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x173: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x174: Push((int) 10)
0x175: @ KillTimer(Stack[-1])
0x176: Pop(1)
0x177: Return(); Pop(0)

0x178: PushEmpty(float, float)
0x179: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x17a: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17b: Stack[-3] = (bool) 0
0x17c: Return(); Pop(2)

0x17d: PushEmpty(float, object)
0x17e: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x17f: Call2 0x202

0x180: Pop(1)
0x181: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x182: Push( Stack[2 + Tasks[-1].StackPointer] )
0x183: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x184: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x185: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x186: Return(); Pop(2)

0x187: PushEmpty()
0x188: Push((int) 10)
0x189: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x18b: PushEmpty(bool)
0x18c: Call2 0x178

0x18d: Pop(0)
0x18e: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x18f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x190: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x191: PushEmpty(object)
0x192: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x193: Call2 0x285

0x194: Pop(1)
0x195: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x196: GOTO 0x19d

0x197: Push( Stack[2 + Tasks[-1].StackPointer] )
0x198: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x199: Push("head")
0x19a: @ UnlookAsync(Stack[-1])
0x19b: Pop(1)
0x19c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x19d: Return(); Pop(0)

0x19e: PushEmpty()
0x19f: Call2 0x1fd

0x1a0: Pop(0)
0x1a1: Push((int) 10)
0x1a2: @ KillTimer(Stack[-1])
0x1a3: Pop(1)
0x1a4: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1a5: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a6: Push("head")
0x1a7: @ UnlookAsync(Stack[-1])
0x1a8: Pop(1)
0x1a9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1aa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ab: Return(); Pop(0)

0x1ac: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1ad: @ WaitForAnimEnd()
0x1ae: Pop(0)
0x1af: PushEmpty(bool)
0x1b0: Call2 0x20a

0x1b1: Pop(0)
0x1b2: Pop(1); Push((bool) Stack[-1] == 0)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b4: Return(); Pop(14)

0x1b5: PushEmpty(int)
0x1b6: Call2 0x2b8

0x1b7: Stack[-8] = Stack[-1]
0x1b8: Pop(1)
0x1b9: Stack[-6] = (int) 0
0x1ba: PushEmpty(bool)
0x1bb: Stack[-1] = (bool) 0
0x1bc: Push((int) 5)
0x1bd: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1bf: PushEmpty(bool)
0x1c0: Call2 0x20a

0x1c1: Pop(0)
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c3: Stack[-1] = (bool) 1
0x1c4: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1c5: Push((int) 3)
0x1c6: @ irand(Stack[-6], Stack[-1])
0x1c7: Pop(1)
0x1c8: Push((int) 0)
0x1c9: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1cb: Push(Stack[-7])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1cd: @ irand(Stack[-4], Stack[-7])
0x1ce: Pop(0)
0x1cf: Push("all")
0x1d0: PushEmpty(string, int)
0x1d1: Stack[-1] = Stack[-7]
0x1d2: Call2 0x2b1

0x1d3: Pop(1)
0x1d4: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d5: Pop(2)
0x1d6: @ WaitForAnimEnd(Stack[-3])
0x1d7: Pop(0)
0x1d8: Pop(0); Push((bool) Stack[-3] == 0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1da: GOTO 0x1f8

0x1db: GOTO 0x1ed

0x1dc: Push((int) 1)
0x1dd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1df: Push((int) 4)
0x1e0: @ rand(Stack[-3], Stack[-1])
0x1e1: Pop(1)
0x1e2: Push((int) 1)
0x1e3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1e4: @ Sleep(Stack[-1], Stack[-2])
0x1e5: Pop(1)
0x1e6: Pop(0); Push((bool) Stack[-1] == 0)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e8: GOTO 0x1f8

0x1e9: GOTO 0x1ed

0x1ea: Push(Stack[-6])
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ec: GOTO 0x1f8

0x1ed: PushEmpty(bool)
0x1ee: Call2 0x1fb

0x1ef: Pop(0)
0x1f0: Pop(1); Push((bool) Stack[-1] == 0)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1f2: GOTO 0x1f8

0x1f3: @ ResetAAS()
0x1f4: Pop(0)
0x1f5: Push((int) 1)
0x1f6: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1f7: GOTO 0x1ba

0x1f8: @ ResetAAS()
0x1f9: Pop(0)
0x1fa: Return(); Pop(14)

0x1fb: Stack[-1] = (bool) 1
0x1fc: Return(); Pop(0)

0x1fd: @ StopAnimation()
0x1fe: Pop(0)
0x1ff: @ StopGroup0()
0x200: Pop(0)
0x201: Return(); Pop(0)

0x202: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x203: @ GetPosition(Stack[-3])
0x204: Pop(0)
0x205: @@ GetPosition(Stack[-2])
0x206: Pop(0)
0x207: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x208: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x209: Return(); Pop(6)

0x20a: PushEmpty(bool, bool)
0x20b: @ IsLoaded(Stack[-1])
0x20c: Pop(0)
0x20d: Stack[-3] = Stack[-1]
0x20e: Return(); Pop(2)

0x20f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x210: @@ GetPosition(Stack[-8])
0x211: Pop(0)
0x212: @@ GetEyesHeight(Stack[-9])
0x213: Pop(0)
0x214: Push(CvectorIndex(Stack[-8], 1))
0x215: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x216: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x217: @ GetPosition(Stack[-7])
0x218: Pop(0)
0x219: @ GetEyesHeight(Stack[-9])
0x21a: Pop(0)
0x21b: Push(CvectorIndex(Stack[-7], 1))
0x21c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x21d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x21e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x21f: Push(CvectorIndex(Stack[-6], 1))
0x220: Stack[-1] = (int) 0
0x221: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x222: Pop(0); Push(Stack[-6] | Stack[-6]);
0x223: Pop(1); Push(Sqrt(Stack[-1]))
0x224: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x225: Stack[-5] = -Stack[-6]; Pop(0);
0x226: Pop(0); Push(Stack[-6] * Stack[-19]);
0x227: PushEmpty(cvector, cvector)
0x228: Push(CVector(0.0, 1.0, 0.0))
0x229: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x22a: Call2 0x29d

0x22b: Pop(1)
0x22c: Push((int) 25)
0x22d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x22e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x22f: Push(CVector(0.0, 10.0, 0.0))
0x230: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x231: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x232: @ IsOverrideActive(Stack[-2])
0x233: Pop(0)
0x234: Push(Stack[-2])
0x235: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x236: Stack[-21] = (bool) 0
0x237: Return(); Pop(18)

0x238: @ StopWorld()
0x239: Pop(0)
0x23a: Push((bool) 1)
0x23b: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x23c: Pop(1)
0x23d: Push(CvectorIndex(Stack[-4], 0))
0x23e: Push(CvectorIndex(Stack[-5], 2))
0x23f: @ Rotate(Stack[-2], Stack[-1])
0x240: Pop(2)
0x241: PushEmpty(bool)
0x242: Call2 0x2d1

0x243: Pop(0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: GOTO 0x24e

0x246: Push("head")
0x247: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x248: Pop(1)
0x249: Push(Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24b: Push("head")
0x24c: @ LookAsyncCamera(Stack[-1])
0x24d: Pop(1)
0x24e: @ CameraWaitForPlayFinish()
0x24f: Pop(0)
0x250: @ ResumeWorld()
0x251: Pop(0)
0x252: Stack[-21] = (bool) 1
0x253: Return(); Pop(18)

0x254: PushEmpty(bool, bool)
0x255: Push((bool) 1)
0x256: @ CameraSwitchToNormal(Stack[-1])
0x257: Pop(1)
0x258: PushEmpty(bool)
0x259: Call2 0x2d1

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
0x291: Call2 0x2d1

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

0x2c9: Stack[-1] = (int) 515559
0x2ca: Return(); Pop(0)

0x2cb: Stack[-1] = (int) 503344
0x2cc: Return(); Pop(0)

0x2cd: Stack[-1] = "ui/NPC_Citizen1.png"
0x2ce: Return(); Pop(0)

0x2cf: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x2d0: Return(); Pop(0)

0x2d1: Stack[-1] = (bool) 0
0x2d2: Return(); Pop(0)

0x2d3: PushEmpty()
0x2d4: Push("oob10GirlLaska1")
0x2d5: Push((int) 1)
0x2d6: @ SetVariable(Stack[-2], Stack[-1])
0x2d7: Pop(2)
0x2d8: Return(); Pop(0)

0x2d9: PushEmpty(object, object)
0x2da: Push("b10q04GirlGotoKapella")
0x2db: Push((int) 1)
0x2dc: @ SetVariable(Stack[-2], Stack[-1])
0x2dd: Pop(2)
0x2de: PushEmpty(object)
0x2df: Call2 0x309

0x2e0: Stack[-2] = Stack[-1]
0x2e1: Pop(1)
0x2e2: Push("b10q04GirlGotoKapella")
0x2e3: Push("pt_map_kapella")
0x2e4: Push((int) 0)
0x2e5: Push((int) 530490)
0x2e6: PushEmpty(float)
0x2e7: Call2 0x2ac

0x2e8: Pop(0)
0x2e9: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2ea: Pop(5)
0x2eb: Return(); Pop(2)

0x2ec: Stack[-1] = 0
0x2ed: PushEmpty()
0x2ee: PushEmpty(object, string, float)
0x2ef: PushEmpty(object)
0x2f0: Call2 0x309

0x2f1: Stack[-4] = Stack[-1]
0x2f2: Pop(1)
0x2f3: Stack[-2] = "pt_map_kapella"
0x2f4: Stack[-1] = (int) 2
0x2f5: Call2 0x31a

0x2f6: Pop(3)
0x2f7: PushEmpty(object)
0x2f8: Call2 0x309

0x2f9: Pop(0)
0x2fa: @@ ShowMap(Stack[-1])
0x2fb: Pop(1)
0x2fc: Return(); Pop(0)

0x2fd: PushEmpty()
0x2fe: PushEmpty(int, string)
0x2ff: Stack[-1] = "oob10GirlLaska1"
0x300: Call2 0x2a7

0x301: Pop(1)
0x302: Push((int) 0)
0x303: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x305: Stack[-2] = (bool) 1
0x306: Return(); Pop(0)

0x307: Stack[-2] = (bool) 0
0x308: Return(); Pop(0)

0x309: PushEmpty(object, object, object, object)
0x30a: @ GetMainOutdoorScene(Stack[-2])
0x30b: Pop(0)
0x30c: Pop(0); Push((bool) Stack[-2] == 0)
0x30d: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30e: Push("Can't find main outdoor scene")
0x30f: @ Trace(Stack[-1])
0x310: Pop(1)
0x311: Stack[-1] = 0
0x312: Stack[-5] = Stack[-1]
0x313: Return(); Pop(4)

0x314: @@ GetMap(Stack[-1])
0x315: Pop(0)
0x316: Stack[-5] = Stack[-1]
0x317: Return(); Pop(4)

0x318: Stack[-1] = 0
0x319: Stack[-2] = 0
0x31a: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x31b: @ GetMainOutdoorScene(Stack[-2])
0x31c: Pop(0)
0x31d: Pop(0); Push((bool) Stack[-2] == 0)
0x31e: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x31f: Push("Can't find main outdoor scene")
0x320: @ Trace(Stack[-1])
0x321: Pop(1)
0x322: Return(); Pop(8)

0x323: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x324: Pop(0)
0x325: Pop(0); Push((bool) Stack[-1] == 0)
0x326: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x327: Push("Warning: outdoor scene locator ")
0x328: Pop(1); Push(Stack[-1] + Stack[-11]);
0x329: Push(" doesnt exist")
0x32a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x32b: @ Trace(Stack[-1])
0x32c: Pop(1)
0x32d: @@ GetMap(Stack[-11])
0x32e: Pop(0)
0x32f: Pop(0); Push((bool) Stack[-11] == 0)
0x330: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x331: Push("Can't find map")
0x332: @ Trace(Stack[-1])
0x333: Pop(1)
0x334: Return(); Pop(8)

0x335: Push(CvectorIndex(Stack[-4], 0))
0x336: Push(CvectorIndex(Stack[-5], 2))
0x337: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x338: Pop(2)
0x339: Return(); Pop(8)

0x33a: Stack[-2] = 0
0x33b: PushEmpty(int, int)
0x33c: Push("branch")
0x33d: @ GetVariable(Stack[-1], Stack[-2])
0x33e: Pop(1)
0x33f: Push((int) 0)
0x340: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x342: Stack[-3] = (int) 1
0x343: Return(); Pop(2)

0x344: GOTO 0x34a

0x345: Push((int) 1)
0x346: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x348: Stack[-3] = (int) 2
0x349: Return(); Pop(2)

0x34a: Stack[-3] = (int) 3
0x34b: Return(); Pop(2)

