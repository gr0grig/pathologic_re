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
	Menace
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	cleanup
	restore
	player
	Neutral
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	branch
	ui/NPC_Bakalavr.png
	ui/NPC_Bakalavr_b.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
	Hold (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)

RunOp = 0xc9
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9c Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0xcd Vars = (string)
		EVENT_6 Op = 0xe1 Vars = ()
		EVENT_5 Op = 0xee Vars = ()
		EVENT_7 Op = 0x137 Vars = (int)
		EVENT_45 Op = 0x179 Vars = (bool)
		EVENT_0 Op = 0x185 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x20e

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x366

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x364

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x368

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x36a

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x353

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
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x322

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x263

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x252

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Menace"
0x59: Call2 0x86

0x5a: Pop(1)
0x5b: Push((int) 525332)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 525333)
0x61: Push((int) -1)
0x62: Push((int) 26701)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: GOTO 0x68

0x66: Return(); Pop(0)

0x67: GOTO 0x55

0x68: PushEmpty(bool)
0x69: Call2 0x36c

0x6a: Pop(0)
0x6b: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x6c: @ lshWaitForAnimEnd()
0x6d: Pop(0)
0x6e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6f: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x70: GOTO 0x76

0x71: PushEmpty(string)
0x72: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x73: Call2 0x2ed

0x74: Pop(1)
0x75: GOTO 0x6c

0x76: GOTO 0x85

0x77: Push("all")
0x78: Push("idle")
0x79: @ PlayAnimation(Stack[-2], Stack[-1])
0x7a: Pop(2)
0x7b: @ WaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: Push("all")
0x81: Push("idle")
0x82: @ PlayAnimation(Stack[-2], Stack[-1])
0x83: Pop(2)
0x84: GOTO 0x7b

0x85: Return(); Pop(0)

0x86: PushEmpty()
0x87: PushEmpty(bool)
0x88: Call2 0x36c

0x89: Pop(0)
0x8a: Pop(1); Push((bool) Stack[-1] == 0)
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: Return(); Pop(0)

0x8d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Return(); Pop(0)

0x90: PushEmpty(string, bool)
0x91: Stack[-2] = Stack[-3]
0x92: Push("")
0x93: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x95: Stack[-1] = (bool) 0
0x96: GOTO 0x98

0x97: Stack[-1] = (bool) 1
0x98: Call2 0x2fd

0x99: Pop(2)
0x9a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9b: Return(); Pop(0)

0x9c: PushEmpty()
0x9d: Push((int) 1)
0x9e: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0x9f: PushEmpty()
0xa0: Call2 0x31b

0xa1: Pop(0)
0xa2: Push((int) 26700)
0xa3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa4: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xa5: PushEmpty(string)
0xa6: Stack[-1] = "Menace"
0xa7: Call2 0x86

0xa8: Pop(1)
0xa9: Push((int) 525332)
0xaa: @@ SetMessage(Stack[-1])
0xab: Pop(1)
0xac: @@ ClearReplies()
0xad: Pop(0)
0xae: Push((int) 525333)
0xaf: Push((int) -1)
0xb0: Push((int) 26701)
0xb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2: Pop(3)
0xb3: Return(); Pop(0)

0xb4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb5: PushEmpty(bool)
0xb6: Call2 0x36c

0xb7: Pop(0)
0xb8: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb9: @ lshStopAnimation()
0xba: Pop(0)
0xbb: GOTO 0xbe

0xbc: @ StopAnimation()
0xbd: Pop(0)
0xbe: Return(); Pop(0)

0xbf: GOTO 0x9d

0xc0: Return(); Pop(0)

0xc1: PushEmpty()
0xc2: PushEmpty(int, object)
0xc3: Stack[-1] = Stack[-3]
0xc4: Push(-2, 1); TaskCall(0)
0xc5: Call2 0x0

0xc6: Pop(-2, 1); TaskReturn
0xc7: Pop(2)
0xc8: Return(); Pop(0)

0xc9: PushEmpty()
0xca: Call2 0xf2

0xcb: Pop(0)
0xcc: Return(); Pop(0)

0xcd: PushEmpty(bool, bool)
0xce: Push("cleanup")
0xcf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd1: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xd2: @ IsLoaded(Stack[-1])
0xd3: Pop(0)
0xd4: Pop(0); Push((bool) Stack[-1] == 0)
0xd5: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd6: PushEmpty(object)
0xd7: Call2 0x322

0xd8: Pop(0)
0xd9: @ RemoveActor(Stack[-1])
0xda: Pop(1)
0xdb: GOTO 0xe0

0xdc: Push("restore")
0xdd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdf: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xe0: Return(); Pop(2)

0xe1: Push( Stack[1 + Tasks[-1].StackPointer] )
0xe2: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe3: PushEmpty(object)
0xe4: Call2 0x322

0xe5: Pop(0)
0xe6: @ RemoveActor(Stack[-1])
0xe7: Pop(1)
0xe8: @ Hold()
0xe9: Pop(0)
0xea: PushEmpty()
0xeb: Call2 0x15d

0xec: Pop(0)
0xed: Return(); Pop(0)

0xee: PushEmpty()
0xef: Call2 0x16c

0xf0: Pop(0)
0xf1: Return(); Pop(0)

0xf2: PushEmpty(bool)
0xf3: Call2 0x209

0xf4: Pop(0)
0xf5: Pop(1); Push((bool) Stack[-1] == 0)
0xf6: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf7: @ Hold()
0xf8: Pop(0)
0xf9: @ GetDirection(Stack[-0])
0xfa: Pop(0)
0xfb: PushEmpty()
0xfc: Call2 0x1a2

0xfd: Pop(0)
0xfe: GOTO 0xfb

0xff: Return(); Pop(0)

0x100: PushEmpty(object, object)
0x101: Push("player")
0x102: @ FindActor(Stack[-2], Stack[-1])
0x103: Pop(1)
0x104: Pop(0); Push((bool) Stack[-1] == 0)
0x105: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x106: Stack[-3] = (bool) 0
0x107: Return(); Pop(2)

0x108: PushEmpty(bool, object)
0x109: Stack[-1] = Stack[-3]
0x10a: Call2 0x200

0x10b: Stack[-5] = Stack[-2]
0x10c: Pop(2)
0x10d: Return(); Pop(2)

0x10e: Stack[-1] = 0
0x10f: Push(CvectorIndex(Stack[-0], 0))
0x110: Push(CvectorIndex(Stack[-0], 2))
0x111: @ RotateAsync(Stack[-2], Stack[-1])
0x112: Pop(2)
0x113: Return(); Pop(0)

0x114: PushEmpty(object, bool, object, bool)
0x115: Push("player")
0x116: @ FindActor(Stack[-3], Stack[-1])
0x117: Pop(1)
0x118: Pop(0); Push((bool) Stack[-2] == 0)
0x119: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11a: Stack[-5] = (bool) 0
0x11b: Return(); Pop(4)

0x11c: PushEmpty(float, object)
0x11d: Stack[-1] = Stack[-4]
0x11e: Call2 0x1ee

0x11f: Pop(1)
0x120: Push((float)90000.0)
0x121: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x123: Stack[-5] = (bool) 0
0x124: Return(); Pop(4)

0x125: @ CanSee(Stack[-1], Stack[-2])
0x126: Pop(0)
0x127: Stack[-5] = Stack[-1]
0x128: Return(); Pop(4)

0x129: Stack[-2] = 0
0x12a: PushEmpty(float, float)
0x12b: Push((int) 8)
0x12c: Push((int) 16)
0x12d: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(2)
0x12f: Push((int) 10)
0x130: @ SetTimer(Stack[-1], Stack[-2])
0x131: Pop(1)
0x132: Return(); Pop(2)

0x133: Push((int) 10)
0x134: @ KillTimer(Stack[-1])
0x135: Pop(1)
0x136: Return(); Pop(0)

0x137: PushEmpty()
0x138: Push((int) 10)
0x139: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x13b: PushEmpty()
0x13c: Call2 0x133

0x13d: Pop(0)
0x13e: PushEmpty(bool)
0x13f: Stack[-1] = (bool) 0
0x140: PushEmpty(bool)
0x141: Call2 0x209

0x142: Pop(0)
0x143: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x144: PushEmpty(bool)
0x145: Call2 0x114

0x146: Pop(0)
0x147: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x148: Stack[-1] = (bool) 1
0x149: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x14a: PushEmpty(bool)
0x14b: Call2 0x100

0x14c: Pop(0)
0x14d: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x14e: PushEmpty(bool, object)
0x14f: PushEmpty(object)
0x150: Call2 0x322

0x151: Stack[-2] = Stack[-1]
0x152: Pop(1)
0x153: Call2 0x29d

0x154: Pop(2)
0x155: GOTO 0x15c

0x156: PushEmpty()
0x157: Call2 0x10f

0x158: Pop(0)
0x159: PushEmpty()
0x15a: Call2 0x12a

0x15b: Pop(0)
0x15c: Return(); Pop(0)

0x15d: PushEmpty()
0x15e: Call2 0x1e9

0x15f: Pop(0)
0x160: PushEmpty()
0x161: Call2 0x133

0x162: Pop(0)
0x163: @ lshStopSpeech()
0x164: Pop(0)
0x165: @ lshStopAnimation()
0x166: Pop(0)
0x167: @ StopAsync()
0x168: Pop(0)
0x169: @ Hold()
0x16a: Pop(0)
0x16b: Return(); Pop(0)

0x16c: @ StopGroup0()
0x16d: Pop(0)
0x16e: PushEmpty()
0x16f: Call2 0x133

0x170: Pop(0)
0x171: PushEmpty(string)
0x172: Stack[-1] = "Neutral"
0x173: Call2 0x2ed

0x174: Pop(1)
0x175: PushEmpty()
0x176: Call2 0x12a

0x177: Pop(0)
0x178: Return(); Pop(0)

0x179: PushEmpty()
0x17a: Push(Stack[-1])
0x17b: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17c: PushEmpty()
0x17d: Call2 0x12a

0x17e: Pop(0)
0x17f: GOTO 0x184

0x180: PushEmpty(string)
0x181: Stack[-1] = "Neutral"
0x182: Call2 0x2ed

0x183: Pop(1)
0x184: Return(); Pop(0)

0x185: PushEmpty(bool, bool)
0x186: @ IsOverrideActive(Stack[-1])
0x187: Pop(0)
0x188: Pop(0); Push((bool) Stack[-1] == 0)
0x189: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x18a: EventDisable(0)
0x18b: PushEmpty()
0x18c: Call2 0x1e9

0x18d: Pop(0)
0x18e: PushEmpty(bool, object)
0x18f: Stack[-1] = Stack[-5]
0x190: Call2 0x200

0x191: Pop(2)
0x192: EventEnable(0)
0x193: PushEmpty(object)
0x194: Stack[-1] = Stack[-4]
0x195: Call2 0xc1

0x196: Pop(1)
0x197: PushEmpty(string)
0x198: Stack[-1] = "Neutral"
0x199: Call2 0x2ed

0x19a: Pop(1)
0x19b: PushEmpty()
0x19c: Call2 0x133

0x19d: Pop(0)
0x19e: PushEmpty()
0x19f: Call2 0x12a

0x1a0: Pop(0)
0x1a1: Return(); Pop(2)

0x1a2: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x1a3: @ WaitForAnimEnd()
0x1a4: Pop(0)
0x1a5: PushEmpty(bool)
0x1a6: Call2 0x209

0x1a7: Pop(0)
0x1a8: Pop(1); Push((bool) Stack[-1] == 0)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1aa: Return(); Pop(12)

0x1ab: PushEmpty(int)
0x1ac: Call2 0x342

0x1ad: Stack[-7] = Stack[-1]
0x1ae: Pop(1)
0x1af: Stack[-5] = (int) 0
0x1b0: PushEmpty(bool)
0x1b1: Stack[-1] = (bool) 0
0x1b2: Push((int) 5)
0x1b3: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b5: PushEmpty(bool)
0x1b6: Call2 0x209

0x1b7: Pop(0)
0x1b8: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b9: Stack[-1] = (bool) 1
0x1ba: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1bb: Pop(0); Push((bool) Stack[-6] == 0)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1bd: Push((int) 3)
0x1be: @ Sleep(Stack[-1], Stack[-5])
0x1bf: Pop(1)
0x1c0: Pop(0); Push((bool) Stack[-4] == 0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c2: GOTO 0x1e4

0x1c3: GOTO 0x1d9

0x1c4: @ irand(Stack[-3], Stack[-6])
0x1c5: Pop(0)
0x1c6: Push((int) 5)
0x1c7: @ irand(Stack[-3], Stack[-1])
0x1c8: Pop(1)
0x1c9: Push((int) 0)
0x1ca: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cc: Stack[-3] = (int) 0
0x1cd: Push("all")
0x1ce: PushEmpty(string, int)
0x1cf: Stack[-1] = Stack[-6]
0x1d0: Call2 0x33b

0x1d1: Pop(1)
0x1d2: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d3: Pop(2)
0x1d4: @ WaitForAnimEnd(Stack[-1])
0x1d5: Pop(0)
0x1d6: Pop(0); Push((bool) Stack[-1] == 0)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d8: GOTO 0x1e4

0x1d9: PushEmpty(bool)
0x1da: Call2 0x1e7

0x1db: Pop(0)
0x1dc: Pop(1); Push((bool) Stack[-1] == 0)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1de: GOTO 0x1e4

0x1df: @ ResetAAS()
0x1e0: Pop(0)
0x1e1: Push((int) 1)
0x1e2: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x1e3: GOTO 0x1b0

0x1e4: @ ResetAAS()
0x1e5: Pop(0)
0x1e6: Return(); Pop(12)

0x1e7: Stack[-1] = (bool) 1
0x1e8: Return(); Pop(0)

0x1e9: @ StopAnimation()
0x1ea: Pop(0)
0x1eb: @ StopGroup0()
0x1ec: Pop(0)
0x1ed: Return(); Pop(0)

0x1ee: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1ef: @ GetPosition(Stack[-3])
0x1f0: Pop(0)
0x1f1: @@ GetPosition(Stack[-2])
0x1f2: Pop(0)
0x1f3: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1f4: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1f5: Return(); Pop(6)

0x1f6: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x1f7: @ GetPosition(Stack[-3])
0x1f8: Pop(0)
0x1f9: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x1fa: Push(CvectorIndex(Stack[-2], 0))
0x1fb: Push(CvectorIndex(Stack[-3], 2))
0x1fc: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x1fd: Pop(2)
0x1fe: Stack[-8] = Stack[-1]
0x1ff: Return(); Pop(6)

0x200: PushEmpty(cvector, cvector)
0x201: @@ GetPosition(Stack[-1])
0x202: Pop(0)
0x203: PushEmpty(bool, cvector)
0x204: Stack[-1] = Stack[-3]
0x205: Call2 0x1f6

0x206: Stack[-6] = Stack[-2]
0x207: Pop(2)
0x208: Return(); Pop(2)

0x209: PushEmpty(bool, bool)
0x20a: @ IsLoaded(Stack[-1])
0x20b: Pop(0)
0x20c: Stack[-3] = Stack[-1]
0x20d: Return(); Pop(2)

0x20e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x20f: @@ GetPosition(Stack[-8])
0x210: Pop(0)
0x211: @@ GetEyesHeight(Stack[-9])
0x212: Pop(0)
0x213: Push(CvectorIndex(Stack[-8], 1))
0x214: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x215: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x216: @ GetPosition(Stack[-7])
0x217: Pop(0)
0x218: @ GetEyesHeight(Stack[-9])
0x219: Pop(0)
0x21a: Push(CvectorIndex(Stack[-7], 1))
0x21b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x21c: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x21d: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x21e: Push(CvectorIndex(Stack[-6], 1))
0x21f: Stack[-1] = (int) 0
0x220: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x221: Pop(0); Push(Stack[-6] | Stack[-6]);
0x222: Pop(1); Push(Sqrt(Stack[-1]))
0x223: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x224: Stack[-5] = -Stack[-6]; Pop(0);
0x225: Pop(0); Push(Stack[-6] * Stack[-19]);
0x226: PushEmpty(cvector, cvector)
0x227: Push(CVector(0.0, 1.0, 0.0))
0x228: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x229: Call2 0x328

0x22a: Pop(1)
0x22b: Push((int) 25)
0x22c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x22d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x22e: Push(CVector(0.0, 10.0, 0.0))
0x22f: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x230: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x231: @ IsOverrideActive(Stack[-2])
0x232: Pop(0)
0x233: Push(Stack[-2])
0x234: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x235: Stack[-21] = (bool) 0
0x236: Return(); Pop(18)

0x237: @ StopWorld()
0x238: Pop(0)
0x239: @ CameraTransit(Stack[-3], Stack[-5])
0x23a: Pop(0)
0x23b: Push(CvectorIndex(Stack[-4], 0))
0x23c: Push(CvectorIndex(Stack[-5], 2))
0x23d: @ Rotate(Stack[-2], Stack[-1])
0x23e: Pop(2)
0x23f: PushEmpty(bool)
0x240: Call2 0x36c

0x241: Pop(0)
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: GOTO 0x24c

0x244: Push("head")
0x245: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x246: Pop(1)
0x247: Push(Stack[-1])
0x248: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x249: Push("head")
0x24a: @ LookAsyncCamera(Stack[-1])
0x24b: Pop(1)
0x24c: @ CameraWaitForPlayFinish()
0x24d: Pop(0)
0x24e: @ ResumeWorld()
0x24f: Pop(0)
0x250: Stack[-21] = (bool) 1
0x251: Return(); Pop(18)

0x252: PushEmpty(bool, bool)
0x253: @ CameraSwitchToNormal()
0x254: Pop(0)
0x255: PushEmpty(bool)
0x256: Call2 0x36c

0x257: Pop(0)
0x258: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x259: GOTO 0x262

0x25a: Push("head")
0x25b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x25c: Pop(1)
0x25d: Push(Stack[-1])
0x25e: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x25f: Push("head")
0x260: @ UnlookAsync(Stack[-1])
0x261: Pop(1)
0x262: Return(); Pop(2)

0x263: PushEmpty(int, int, int, int)
0x264: Push("voice_common")
0x265: @ GetVariable(Stack[-1], Stack[-3])
0x266: Pop(1)
0x267: Push(Stack[-2])
0x268: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x269: PushEmpty(bool, object)
0x26a: Stack[-1] = Stack[-7]
0x26b: Call2 0x29d

0x26c: Pop(1)
0x26d: Pop(1); Push((bool) Stack[-1] == 0)
0x26e: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x26f: PushEmpty(bool, object)
0x270: Stack[-1] = Stack[-7]
0x271: Call2 0x2c2

0x272: Pop(1)
0x273: Pop(1); Push((bool) Stack[-1] == 0)
0x274: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x275: Stack[-6] = (bool) 0
0x276: Return(); Pop(4)

0x277: Push((int) 2)
0x278: @ irand(Stack[-2], Stack[-1])
0x279: Pop(1)
0x27a: Push(Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27c: Push("voice_common")
0x27d: Push((int) 1)
0x27e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x27f: Push((int) 3)
0x280: Pop(2); Push(Stack[-2] % Stack[-1]);
0x281: @ SetVariable(Stack[-2], Stack[-1])
0x282: Pop(2)
0x283: GOTO 0x288

0x284: Push("voice_common")
0x285: Push((int) 0)
0x286: @ SetVariable(Stack[-2], Stack[-1])
0x287: Pop(2)
0x288: GOTO 0x29b

0x289: PushEmpty(bool, object)
0x28a: Stack[-1] = Stack[-7]
0x28b: Call2 0x2c2

0x28c: Pop(1)
0x28d: Pop(1); Push((bool) Stack[-1] == 0)
0x28e: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x28f: PushEmpty(bool, object)
0x290: Stack[-1] = Stack[-7]
0x291: Call2 0x29d

0x292: Pop(1)
0x293: Pop(1); Push((bool) Stack[-1] == 0)
0x294: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x295: Stack[-6] = (bool) 0
0x296: Return(); Pop(4)

0x297: Push("voice_common")
0x298: Push((int) 1)
0x299: @ SetVariable(Stack[-2], Stack[-1])
0x29a: Pop(2)
0x29b: Stack[-6] = (bool) 1
0x29c: Return(); Pop(4)

0x29d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x29e: Stack[-5] = "c"
0x29f: Stack[-4] = (int) 0
0x2a0: Push((int) 1)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a2: Push((int) 1)
0x2a3: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2a4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2a5: @@ HasProperty(Stack[-1], Stack[-4])
0x2a6: Pop(1)
0x2a7: Pop(0); Push((bool) Stack[-3] == 0)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a9: GOTO 0x2ad

0x2aa: Push((int) 1)
0x2ab: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2ac: GOTO 0x2a0

0x2ad: Pop(0); Push((bool) Stack[-4] == 0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2af: Stack[-12] = (bool) 0
0x2b0: Return(); Pop(10)

0x2b1: Stack[-2] = (int) 0
0x2b2: Push((int) 1)
0x2b3: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b5: @ irand(Stack[-2], Stack[-4])
0x2b6: Pop(0)
0x2b7: Push((int) 1)
0x2b8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2b9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2ba: @@ GetProperty(Stack[-1], Stack[-2])
0x2bb: Pop(1)
0x2bc: PushEmpty(bool, string)
0x2bd: Stack[-1] = Stack[-3]
0x2be: Call2 0x30c

0x2bf: Stack[-14] = Stack[-2]
0x2c0: Pop(2)
0x2c1: Return(); Pop(10)

0x2c2: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2c3: Push("d")
0x2c4: PushEmpty(int)
0x2c5: Call2 0x332

0x2c6: Pop(0)
0x2c7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c8: Push("m")
0x2c9: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x2ca: Stack[-4] = (int) 0
0x2cb: Push((int) 1)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2cd: Push((int) 1)
0x2ce: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2cf: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2d0: @@ HasProperty(Stack[-1], Stack[-4])
0x2d1: Pop(1)
0x2d2: Pop(0); Push((bool) Stack[-3] == 0)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d4: GOTO 0x2d8

0x2d5: Push((int) 1)
0x2d6: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2d7: GOTO 0x2cb

0x2d8: Pop(0); Push((bool) Stack[-4] == 0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2da: Stack[-12] = (bool) 0
0x2db: Return(); Pop(10)

0x2dc: Stack[-2] = (int) 0
0x2dd: Push((int) 1)
0x2de: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e0: @ irand(Stack[-2], Stack[-4])
0x2e1: Pop(0)
0x2e2: Push((int) 1)
0x2e3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2e4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2e5: @@ GetProperty(Stack[-1], Stack[-2])
0x2e6: Pop(1)
0x2e7: PushEmpty(bool, string)
0x2e8: Stack[-1] = Stack[-3]
0x2e9: Call2 0x30c

0x2ea: Stack[-14] = Stack[-2]
0x2eb: Pop(2)
0x2ec: Return(); Pop(10)

0x2ed: PushEmpty(bool, float, float, bool, float, float)
0x2ee: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2ef: Pop(0)
0x2f0: Push(Stack[-3])
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f2: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2f3: Pop(0)
0x2f4: Push((bool) 0)
0x2f5: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2f6: Pop(1)
0x2f7: GOTO 0x2fc

0x2f8: Push("Can't find lsh animation : ")
0x2f9: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2fa: @ Trace(Stack[-1])
0x2fb: Pop(1)
0x2fc: Return(); Pop(6)

0x2fd: PushEmpty(bool, float, float, bool, float, float)
0x2fe: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2ff: Pop(0)
0x300: Push(Stack[-3])
0x301: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x302: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x303: Pop(0)
0x304: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x305: Pop(0)
0x306: GOTO 0x30b

0x307: Push("Can't find lsh animation : ")
0x308: Pop(1); Push(Stack[-1] + Stack[-9]);
0x309: @ Trace(Stack[-1])
0x30a: Pop(1)
0x30b: Return(); Pop(6)

0x30c: PushEmpty(bool, bool)
0x30d: PushEmpty(bool)
0x30e: Call2 0x36c

0x30f: Pop(0)
0x310: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x311: @ lshHasSpeech(Stack[-1], Stack[-3])
0x312: Pop(0)
0x313: Push(Stack[-1])
0x314: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x315: @ lshPlaySpeech(Stack[-3])
0x316: Pop(0)
0x317: Stack[-4] = (bool) 1
0x318: Return(); Pop(2)

0x319: Stack[-4] = (bool) 0
0x31a: Return(); Pop(2)

0x31b: PushEmpty(bool)
0x31c: Call2 0x36c

0x31d: Pop(0)
0x31e: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31f: @ lshStopSpeech()
0x320: Pop(0)
0x321: Return(); Pop(0)

0x322: PushEmpty(object, object)
0x323: @ self(Stack[-1])
0x324: Pop(0)
0x325: Stack[-3] = Stack[-1]
0x326: Return(); Pop(2)

0x327: Stack[-1] = 0
0x328: PushEmpty(float, float)
0x329: Pop(0); Push(Stack[-3] | Stack[-3]);
0x32a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x32b: Push((float)0.0)
0x32c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x32d: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x32f: Return(); Pop(2)

0x330: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x331: Return(); Pop(2)

0x332: PushEmpty(float, float)
0x333: @ GetGameTime(Stack[-1])
0x334: Pop(0)
0x335: Push((int) 1)
0x336: PushEmpty(int)
0x337: Push((int) 24)
0x338: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x339: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x33a: Return(); Pop(2)

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

0x353: PushEmpty(int, int)
0x354: Push("branch")
0x355: @ GetVariable(Stack[-1], Stack[-2])
0x356: Pop(1)
0x357: Push((int) 0)
0x358: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x35a: Stack[-3] = (int) 1
0x35b: Return(); Pop(2)

0x35c: GOTO 0x362

0x35d: Push((int) 1)
0x35e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35f: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x360: Stack[-3] = (int) 2
0x361: Return(); Pop(2)

0x362: Stack[-3] = (int) 3
0x363: Return(); Pop(2)

0x364: Stack[-1] = (int) 515573
0x365: Return(); Pop(0)

0x366: Stack[-1] = (int) 504032
0x367: Return(); Pop(0)

0x368: Stack[-1] = "ui/NPC_Bakalavr.png"
0x369: Return(); Pop(0)

0x36a: Stack[-1] = "ui/NPC_Bakalavr_b.png"
0x36b: Return(); Pop(0)

0x36c: Stack[-1] = (bool) 1
0x36d: Return(); Pop(0)

