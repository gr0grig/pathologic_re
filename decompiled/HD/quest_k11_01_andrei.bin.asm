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
	Untrust
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Smile
	Neutral
	cleanup
	restore
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ook11Andrei1
	branch
	ui/NPC_Andrei.png
	ui/NPC_Andrei_b.png

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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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

RunOp = 0x118
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x11c Vars = (string)
		EVENT_6 Op = 0x130 Vars = ()
		EVENT_5 Op = 0x13d Vars = ()
		EVENT_7 Op = 0x186 Vars = (int)
		EVENT_45 Op = 0x1c8 Vars = (bool)
		EVENT_0 Op = 0x1d4 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x25d

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3ce

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3cc

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3d0

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3d2

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3bb

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
0x31: Call2 0x373

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x2b4

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
0x48: Call2 0x2a2

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
0x56: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Untrust"
0x59: Call2 0x95

0x5a: Pop(1)
0x5b: Push((int) 528036)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x3af

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 528037)
0x66: Push((int) 29400)
0x67: Push((int) 29399)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 528040)
0x6b: Push((int) -1)
0x6c: Push((int) 29402)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 541066)
0x70: Push((int) -1)
0x71: Push((int) 43171)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x77

0x75: Return(); Pop(0)

0x76: GOTO 0x55

0x77: PushEmpty(bool)
0x78: Call2 0x3d4

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @ lshWaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: PushEmpty(string)
0x81: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x82: Call2 0x33e

0x83: Pop(1)
0x84: GOTO 0x7b

0x85: GOTO 0x94

0x86: Push("all")
0x87: Push("idle")
0x88: @ PlayAnimation(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: @ WaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: Push("all")
0x90: Push("idle")
0x91: @ PlayAnimation(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: GOTO 0x8a

0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: PushEmpty(bool)
0x97: Call2 0x3d4

0x98: Pop(0)
0x99: Pop(1); Push((bool) Stack[-1] == 0)
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Return(); Pop(0)

0x9c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: PushEmpty(string, bool)
0xa0: Stack[-2] = Stack[-3]
0xa1: Push("")
0xa2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa4: Stack[-1] = (bool) 0
0xa5: GOTO 0xa7

0xa6: Stack[-1] = (bool) 1
0xa7: Call2 0x34e

0xa8: Pop(2)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xae: PushEmpty()
0xaf: Call2 0x36c

0xb0: Pop(0)
0xb1: Push((int) 29399)
0xb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0x3a9

0xb8: Pop(2)
0xb9: Push((int) 29398)
0xba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xbc: PushEmpty(string)
0xbd: Stack[-1] = "Untrust"
0xbe: Call2 0x95

0xbf: Pop(1)
0xc0: Push((int) 528036)
0xc1: @@ SetMessage(Stack[-1])
0xc2: Pop(1)
0xc3: @@ ClearReplies()
0xc4: Pop(0)
0xc5: PushEmpty(bool, object)
0xc6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc7: Call2 0x3af

0xc8: Pop(1)
0xc9: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xca: Push((int) 528037)
0xcb: Push((int) 29400)
0xcc: Push((int) 29399)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 528040)
0xd0: Push((int) -1)
0xd1: Push((int) 29402)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Push((int) 541066)
0xd5: Push((int) -1)
0xd6: Push((int) 43171)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Return(); Pop(0)

0xda: Push((int) 29400)
0xdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xdd: PushEmpty(string)
0xde: Stack[-1] = "Smile"
0xdf: Call2 0x95

0xe0: Pop(1)
0xe1: Push((int) 528038)
0xe2: @@ SetMessage(Stack[-1])
0xe3: Pop(1)
0xe4: @@ ClearReplies()
0xe5: Pop(0)
0xe6: Push((int) 528039)
0xe7: Push((int) 43172)
0xe8: Push((int) 29401)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Push((int) 43172)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral"
0xf1: Call2 0x95

0xf2: Pop(1)
0xf3: Push((int) 541067)
0xf4: @@ SetMessage(Stack[-1])
0xf5: Pop(1)
0xf6: @@ ClearReplies()
0xf7: Pop(0)
0xf8: Push((int) 541068)
0xf9: Push((int) -1)
0xfa: Push((int) 43173)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: Push((int) 541069)
0xfe: Push((int) -1)
0xff: Push((int) 43174)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x104: PushEmpty(bool)
0x105: Call2 0x3d4

0x106: Pop(0)
0x107: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x108: @ lshStopAnimation()
0x109: Pop(0)
0x10a: GOTO 0x10d

0x10b: @ StopAnimation()
0x10c: Pop(0)
0x10d: Return(); Pop(0)

0x10e: GOTO 0xac

0x10f: Return(); Pop(0)

0x110: PushEmpty()
0x111: PushEmpty(int, object)
0x112: Stack[-1] = Stack[-3]
0x113: Push(-2, 1); TaskCall(0)
0x114: Call2 0x0

0x115: Pop(-2, 1); TaskReturn
0x116: Pop(2)
0x117: Return(); Pop(0)

0x118: PushEmpty()
0x119: Call2 0x141

0x11a: Pop(0)
0x11b: Return(); Pop(0)

0x11c: PushEmpty(bool, bool)
0x11d: Push("cleanup")
0x11e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x120: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x121: @ IsLoaded(Stack[-1])
0x122: Pop(0)
0x123: Pop(0); Push((bool) Stack[-1] == 0)
0x124: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x125: PushEmpty(object)
0x126: Call2 0x373

0x127: Pop(0)
0x128: @ RemoveActor(Stack[-1])
0x129: Pop(1)
0x12a: GOTO 0x12f

0x12b: Push("restore")
0x12c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12e: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x12f: Return(); Pop(2)

0x130: Push( Stack[1 + Tasks[-1].StackPointer] )
0x131: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x132: PushEmpty(object)
0x133: Call2 0x373

0x134: Pop(0)
0x135: @ RemoveActor(Stack[-1])
0x136: Pop(1)
0x137: @ Hold()
0x138: Pop(0)
0x139: PushEmpty()
0x13a: Call2 0x1ac

0x13b: Pop(0)
0x13c: Return(); Pop(0)

0x13d: PushEmpty()
0x13e: Call2 0x1bb

0x13f: Pop(0)
0x140: Return(); Pop(0)

0x141: PushEmpty(bool)
0x142: Call2 0x258

0x143: Pop(0)
0x144: Pop(1); Push((bool) Stack[-1] == 0)
0x145: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x146: @ Hold()
0x147: Pop(0)
0x148: @ GetDirection(Stack[-0])
0x149: Pop(0)
0x14a: PushEmpty()
0x14b: Call2 0x1f1

0x14c: Pop(0)
0x14d: GOTO 0x14a

0x14e: Return(); Pop(0)

0x14f: PushEmpty(object, object)
0x150: Push("player")
0x151: @ FindActor(Stack[-2], Stack[-1])
0x152: Pop(1)
0x153: Pop(0); Push((bool) Stack[-1] == 0)
0x154: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x155: Stack[-3] = (bool) 0
0x156: Return(); Pop(2)

0x157: PushEmpty(bool, object)
0x158: Stack[-1] = Stack[-3]
0x159: Call2 0x24f

0x15a: Stack[-5] = Stack[-2]
0x15b: Pop(2)
0x15c: Return(); Pop(2)

0x15d: Stack[-1] = 0
0x15e: Push(CvectorIndex(Stack[-0], 0))
0x15f: Push(CvectorIndex(Stack[-0], 2))
0x160: @ RotateAsync(Stack[-2], Stack[-1])
0x161: Pop(2)
0x162: Return(); Pop(0)

0x163: PushEmpty(object, bool, object, bool)
0x164: Push("player")
0x165: @ FindActor(Stack[-3], Stack[-1])
0x166: Pop(1)
0x167: Pop(0); Push((bool) Stack[-2] == 0)
0x168: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x169: Stack[-5] = (bool) 0
0x16a: Return(); Pop(4)

0x16b: PushEmpty(float, object)
0x16c: Stack[-1] = Stack[-4]
0x16d: Call2 0x23d

0x16e: Pop(1)
0x16f: Push((float)90000.0)
0x170: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x172: Stack[-5] = (bool) 0
0x173: Return(); Pop(4)

0x174: @ CanSee(Stack[-1], Stack[-2])
0x175: Pop(0)
0x176: Stack[-5] = Stack[-1]
0x177: Return(); Pop(4)

0x178: Stack[-2] = 0
0x179: PushEmpty(float, float)
0x17a: Push((int) 8)
0x17b: Push((int) 16)
0x17c: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x17d: Pop(2)
0x17e: Push((int) 10)
0x17f: @ SetTimer(Stack[-1], Stack[-2])
0x180: Pop(1)
0x181: Return(); Pop(2)

0x182: Push((int) 10)
0x183: @ KillTimer(Stack[-1])
0x184: Pop(1)
0x185: Return(); Pop(0)

0x186: PushEmpty()
0x187: Push((int) 10)
0x188: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x18a: PushEmpty()
0x18b: Call2 0x182

0x18c: Pop(0)
0x18d: PushEmpty(bool)
0x18e: Stack[-1] = (bool) 0
0x18f: PushEmpty(bool)
0x190: Call2 0x258

0x191: Pop(0)
0x192: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x193: PushEmpty(bool)
0x194: Call2 0x163

0x195: Pop(0)
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: Stack[-1] = (bool) 1
0x198: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x199: PushEmpty(bool)
0x19a: Call2 0x14f

0x19b: Pop(0)
0x19c: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x19d: PushEmpty(bool, object)
0x19e: PushEmpty(object)
0x19f: Call2 0x373

0x1a0: Stack[-2] = Stack[-1]
0x1a1: Pop(1)
0x1a2: Call2 0x2ee

0x1a3: Pop(2)
0x1a4: GOTO 0x1ab

0x1a5: PushEmpty()
0x1a6: Call2 0x15e

0x1a7: Pop(0)
0x1a8: PushEmpty()
0x1a9: Call2 0x179

0x1aa: Pop(0)
0x1ab: Return(); Pop(0)

0x1ac: PushEmpty()
0x1ad: Call2 0x238

0x1ae: Pop(0)
0x1af: PushEmpty()
0x1b0: Call2 0x182

0x1b1: Pop(0)
0x1b2: @ lshStopSpeech()
0x1b3: Pop(0)
0x1b4: @ lshStopAnimation()
0x1b5: Pop(0)
0x1b6: @ StopAsync()
0x1b7: Pop(0)
0x1b8: @ Hold()
0x1b9: Pop(0)
0x1ba: Return(); Pop(0)

0x1bb: @ StopGroup0()
0x1bc: Pop(0)
0x1bd: PushEmpty()
0x1be: Call2 0x182

0x1bf: Pop(0)
0x1c0: PushEmpty(string)
0x1c1: Stack[-1] = "Neutral"
0x1c2: Call2 0x33e

0x1c3: Pop(1)
0x1c4: PushEmpty()
0x1c5: Call2 0x179

0x1c6: Pop(0)
0x1c7: Return(); Pop(0)

0x1c8: PushEmpty()
0x1c9: Push(Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1cb: PushEmpty()
0x1cc: Call2 0x179

0x1cd: Pop(0)
0x1ce: GOTO 0x1d3

0x1cf: PushEmpty(string)
0x1d0: Stack[-1] = "Neutral"
0x1d1: Call2 0x33e

0x1d2: Pop(1)
0x1d3: Return(); Pop(0)

0x1d4: PushEmpty(bool, bool)
0x1d5: @ IsOverrideActive(Stack[-1])
0x1d6: Pop(0)
0x1d7: Pop(0); Push((bool) Stack[-1] == 0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1d9: EventDisable(0)
0x1da: PushEmpty()
0x1db: Call2 0x238

0x1dc: Pop(0)
0x1dd: PushEmpty(bool, object)
0x1de: Stack[-1] = Stack[-5]
0x1df: Call2 0x24f

0x1e0: Pop(2)
0x1e1: EventEnable(0)
0x1e2: PushEmpty(object)
0x1e3: Stack[-1] = Stack[-4]
0x1e4: Call2 0x110

0x1e5: Pop(1)
0x1e6: PushEmpty(string)
0x1e7: Stack[-1] = "Neutral"
0x1e8: Call2 0x33e

0x1e9: Pop(1)
0x1ea: PushEmpty()
0x1eb: Call2 0x182

0x1ec: Pop(0)
0x1ed: PushEmpty()
0x1ee: Call2 0x179

0x1ef: Pop(0)
0x1f0: Return(); Pop(2)

0x1f1: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x1f2: @ WaitForAnimEnd()
0x1f3: Pop(0)
0x1f4: PushEmpty(bool)
0x1f5: Call2 0x258

0x1f6: Pop(0)
0x1f7: Pop(1); Push((bool) Stack[-1] == 0)
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f9: Return(); Pop(12)

0x1fa: PushEmpty(int)
0x1fb: Call2 0x398

0x1fc: Stack[-7] = Stack[-1]
0x1fd: Pop(1)
0x1fe: Stack[-5] = (int) 0
0x1ff: PushEmpty(bool)
0x200: Stack[-1] = (bool) 0
0x201: Push((int) 5)
0x202: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x204: PushEmpty(bool)
0x205: Call2 0x258

0x206: Pop(0)
0x207: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x208: Stack[-1] = (bool) 1
0x209: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x20a: Pop(0); Push((bool) Stack[-6] == 0)
0x20b: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x20c: Push((int) 3)
0x20d: @ Sleep(Stack[-1], Stack[-5])
0x20e: Pop(1)
0x20f: Pop(0); Push((bool) Stack[-4] == 0)
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: GOTO 0x233

0x212: GOTO 0x228

0x213: @ irand(Stack[-3], Stack[-6])
0x214: Pop(0)
0x215: Push((int) 5)
0x216: @ irand(Stack[-3], Stack[-1])
0x217: Pop(1)
0x218: Push((int) 0)
0x219: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x21b: Stack[-3] = (int) 0
0x21c: Push("all")
0x21d: PushEmpty(string, int)
0x21e: Stack[-1] = Stack[-6]
0x21f: Call2 0x391

0x220: Pop(1)
0x221: @ PlayAnimation(Stack[-2], Stack[-1])
0x222: Pop(2)
0x223: @ WaitForAnimEnd(Stack[-1])
0x224: Pop(0)
0x225: Pop(0); Push((bool) Stack[-1] == 0)
0x226: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x227: GOTO 0x233

0x228: PushEmpty(bool)
0x229: Call2 0x236

0x22a: Pop(0)
0x22b: Pop(1); Push((bool) Stack[-1] == 0)
0x22c: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22d: GOTO 0x233

0x22e: @ ResetAAS()
0x22f: Pop(0)
0x230: Push((int) 1)
0x231: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x232: GOTO 0x1ff

0x233: @ ResetAAS()
0x234: Pop(0)
0x235: Return(); Pop(12)

0x236: Stack[-1] = (bool) 1
0x237: Return(); Pop(0)

0x238: @ StopAnimation()
0x239: Pop(0)
0x23a: @ StopGroup0()
0x23b: Pop(0)
0x23c: Return(); Pop(0)

0x23d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x23e: @ GetPosition(Stack[-3])
0x23f: Pop(0)
0x240: @@ GetPosition(Stack[-2])
0x241: Pop(0)
0x242: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x243: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x244: Return(); Pop(6)

0x245: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x246: @ GetPosition(Stack[-3])
0x247: Pop(0)
0x248: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x249: Push(CvectorIndex(Stack[-2], 0))
0x24a: Push(CvectorIndex(Stack[-3], 2))
0x24b: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x24c: Pop(2)
0x24d: Stack[-8] = Stack[-1]
0x24e: Return(); Pop(6)

0x24f: PushEmpty(cvector, cvector)
0x250: @@ GetPosition(Stack[-1])
0x251: Pop(0)
0x252: PushEmpty(bool, cvector)
0x253: Stack[-1] = Stack[-3]
0x254: Call2 0x245

0x255: Stack[-6] = Stack[-2]
0x256: Pop(2)
0x257: Return(); Pop(2)

0x258: PushEmpty(bool, bool)
0x259: @ IsLoaded(Stack[-1])
0x25a: Pop(0)
0x25b: Stack[-3] = Stack[-1]
0x25c: Return(); Pop(2)

0x25d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x25e: @@ GetPosition(Stack[-8])
0x25f: Pop(0)
0x260: @@ GetEyesHeight(Stack[-9])
0x261: Pop(0)
0x262: Push(CvectorIndex(Stack[-8], 1))
0x263: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x264: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x265: @ GetPosition(Stack[-7])
0x266: Pop(0)
0x267: @ GetEyesHeight(Stack[-9])
0x268: Pop(0)
0x269: Push(CvectorIndex(Stack[-7], 1))
0x26a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x26b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x26c: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x26d: Push(CvectorIndex(Stack[-6], 1))
0x26e: Stack[-1] = (int) 0
0x26f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x270: Pop(0); Push(Stack[-6] | Stack[-6]);
0x271: Pop(1); Push(Sqrt(Stack[-1]))
0x272: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x273: Stack[-5] = -Stack[-6]; Pop(0);
0x274: Pop(0); Push(Stack[-6] * Stack[-19]);
0x275: PushEmpty(cvector, cvector)
0x276: Push(CVector(0.0, 1.0, 0.0))
0x277: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x278: Call2 0x379

0x279: Pop(1)
0x27a: Push((int) 25)
0x27b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x27c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x27d: Push(CVector(0.0, 10.0, 0.0))
0x27e: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x27f: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x280: @ IsOverrideActive(Stack[-2])
0x281: Pop(0)
0x282: Push(Stack[-2])
0x283: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x284: Stack[-21] = (bool) 0
0x285: Return(); Pop(18)

0x286: @ StopWorld()
0x287: Pop(0)
0x288: Push((bool) 1)
0x289: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x28a: Pop(1)
0x28b: Push(CvectorIndex(Stack[-4], 0))
0x28c: Push(CvectorIndex(Stack[-5], 2))
0x28d: @ Rotate(Stack[-2], Stack[-1])
0x28e: Pop(2)
0x28f: PushEmpty(bool)
0x290: Call2 0x3d4

0x291: Pop(0)
0x292: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x293: GOTO 0x29c

0x294: Push("head")
0x295: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x296: Pop(1)
0x297: Push(Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x299: Push("head")
0x29a: @ LookAsyncCamera(Stack[-1])
0x29b: Pop(1)
0x29c: @ CameraWaitForPlayFinish()
0x29d: Pop(0)
0x29e: @ ResumeWorld()
0x29f: Pop(0)
0x2a0: Stack[-21] = (bool) 1
0x2a1: Return(); Pop(18)

0x2a2: PushEmpty(bool, bool)
0x2a3: Push((bool) 1)
0x2a4: @ CameraSwitchToNormal(Stack[-1])
0x2a5: Pop(1)
0x2a6: PushEmpty(bool)
0x2a7: Call2 0x3d4

0x2a8: Pop(0)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: GOTO 0x2b3

0x2ab: Push("head")
0x2ac: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ad: Pop(1)
0x2ae: Push(Stack[-1])
0x2af: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b0: Push("head")
0x2b1: @ UnlookAsync(Stack[-1])
0x2b2: Pop(1)
0x2b3: Return(); Pop(2)

0x2b4: PushEmpty(int, int, int, int)
0x2b5: Push("voice_common")
0x2b6: @ GetVariable(Stack[-1], Stack[-3])
0x2b7: Pop(1)
0x2b8: Push(Stack[-2])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2ba: PushEmpty(bool, object)
0x2bb: Stack[-1] = Stack[-7]
0x2bc: Call2 0x2ee

0x2bd: Pop(1)
0x2be: Pop(1); Push((bool) Stack[-1] == 0)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c0: PushEmpty(bool, object)
0x2c1: Stack[-1] = Stack[-7]
0x2c2: Call2 0x313

0x2c3: Pop(1)
0x2c4: Pop(1); Push((bool) Stack[-1] == 0)
0x2c5: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c6: Stack[-6] = (bool) 0
0x2c7: Return(); Pop(4)

0x2c8: Push((int) 2)
0x2c9: @ irand(Stack[-2], Stack[-1])
0x2ca: Pop(1)
0x2cb: Push(Stack[-1])
0x2cc: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2cd: Push("voice_common")
0x2ce: Push((int) 1)
0x2cf: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2d0: Push((int) 3)
0x2d1: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2d2: @ SetVariable(Stack[-2], Stack[-1])
0x2d3: Pop(2)
0x2d4: GOTO 0x2d9

0x2d5: Push("voice_common")
0x2d6: Push((int) 0)
0x2d7: @ SetVariable(Stack[-2], Stack[-1])
0x2d8: Pop(2)
0x2d9: GOTO 0x2ec

0x2da: PushEmpty(bool, object)
0x2db: Stack[-1] = Stack[-7]
0x2dc: Call2 0x313

0x2dd: Pop(1)
0x2de: Pop(1); Push((bool) Stack[-1] == 0)
0x2df: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e0: PushEmpty(bool, object)
0x2e1: Stack[-1] = Stack[-7]
0x2e2: Call2 0x2ee

0x2e3: Pop(1)
0x2e4: Pop(1); Push((bool) Stack[-1] == 0)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e6: Stack[-6] = (bool) 0
0x2e7: Return(); Pop(4)

0x2e8: Push("voice_common")
0x2e9: Push((int) 1)
0x2ea: @ SetVariable(Stack[-2], Stack[-1])
0x2eb: Pop(2)
0x2ec: Stack[-6] = (bool) 1
0x2ed: Return(); Pop(4)

0x2ee: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2ef: Stack[-5] = "c"
0x2f0: Stack[-4] = (int) 0
0x2f1: Push((int) 1)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f3: Push((int) 1)
0x2f4: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2f5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2f6: @@ HasProperty(Stack[-1], Stack[-4])
0x2f7: Pop(1)
0x2f8: Pop(0); Push((bool) Stack[-3] == 0)
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2fa: GOTO 0x2fe

0x2fb: Push((int) 1)
0x2fc: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2fd: GOTO 0x2f1

0x2fe: Pop(0); Push((bool) Stack[-4] == 0)
0x2ff: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x300: Stack[-12] = (bool) 0
0x301: Return(); Pop(10)

0x302: Stack[-2] = (int) 0
0x303: Push((int) 1)
0x304: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x305: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x306: @ irand(Stack[-2], Stack[-4])
0x307: Pop(0)
0x308: Push((int) 1)
0x309: Pop(1); Push(Stack[-3] + Stack[-1]);
0x30a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x30b: @@ GetProperty(Stack[-1], Stack[-2])
0x30c: Pop(1)
0x30d: PushEmpty(bool, string)
0x30e: Stack[-1] = Stack[-3]
0x30f: Call2 0x35d

0x310: Stack[-14] = Stack[-2]
0x311: Pop(2)
0x312: Return(); Pop(10)

0x313: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x314: Push("d")
0x315: PushEmpty(int)
0x316: Call2 0x388

0x317: Pop(0)
0x318: Pop(2); Push(Stack[-2] + Stack[-1]);
0x319: Push("m")
0x31a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x31b: Stack[-4] = (int) 0
0x31c: Push((int) 1)
0x31d: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x31e: Push((int) 1)
0x31f: Pop(1); Push(Stack[-5] + Stack[-1]);
0x320: Pop(1); Push(Stack[-6] + Stack[-1]);
0x321: @@ HasProperty(Stack[-1], Stack[-4])
0x322: Pop(1)
0x323: Pop(0); Push((bool) Stack[-3] == 0)
0x324: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x325: GOTO 0x329

0x326: Push((int) 1)
0x327: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x328: GOTO 0x31c

0x329: Pop(0); Push((bool) Stack[-4] == 0)
0x32a: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32b: Stack[-12] = (bool) 0
0x32c: Return(); Pop(10)

0x32d: Stack[-2] = (int) 0
0x32e: Push((int) 1)
0x32f: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x331: @ irand(Stack[-2], Stack[-4])
0x332: Pop(0)
0x333: Push((int) 1)
0x334: Pop(1); Push(Stack[-3] + Stack[-1]);
0x335: Pop(1); Push(Stack[-6] + Stack[-1]);
0x336: @@ GetProperty(Stack[-1], Stack[-2])
0x337: Pop(1)
0x338: PushEmpty(bool, string)
0x339: Stack[-1] = Stack[-3]
0x33a: Call2 0x35d

0x33b: Stack[-14] = Stack[-2]
0x33c: Pop(2)
0x33d: Return(); Pop(10)

0x33e: PushEmpty(bool, float, float, bool, float, float)
0x33f: @ lshHasAnimation(Stack[-3], Stack[-7])
0x340: Pop(0)
0x341: Push(Stack[-3])
0x342: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x343: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x344: Pop(0)
0x345: Push((bool) 0)
0x346: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x347: Pop(1)
0x348: GOTO 0x34d

0x349: Push("Can't find lsh animation : ")
0x34a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x34b: @ Trace(Stack[-1])
0x34c: Pop(1)
0x34d: Return(); Pop(6)

0x34e: PushEmpty(bool, float, float, bool, float, float)
0x34f: @ lshHasAnimation(Stack[-3], Stack[-8])
0x350: Pop(0)
0x351: Push(Stack[-3])
0x352: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x353: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x354: Pop(0)
0x355: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x356: Pop(0)
0x357: GOTO 0x35c

0x358: Push("Can't find lsh animation : ")
0x359: Pop(1); Push(Stack[-1] + Stack[-9]);
0x35a: @ Trace(Stack[-1])
0x35b: Pop(1)
0x35c: Return(); Pop(6)

0x35d: PushEmpty(bool, bool)
0x35e: PushEmpty(bool)
0x35f: Call2 0x3d4

0x360: Pop(0)
0x361: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x362: @ lshHasSpeech(Stack[-1], Stack[-3])
0x363: Pop(0)
0x364: Push(Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x366: @ lshPlaySpeech(Stack[-3])
0x367: Pop(0)
0x368: Stack[-4] = (bool) 1
0x369: Return(); Pop(2)

0x36a: Stack[-4] = (bool) 0
0x36b: Return(); Pop(2)

0x36c: PushEmpty(bool)
0x36d: Call2 0x3d4

0x36e: Pop(0)
0x36f: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x370: @ lshStopSpeech()
0x371: Pop(0)
0x372: Return(); Pop(0)

0x373: PushEmpty(object, object)
0x374: @ self(Stack[-1])
0x375: Pop(0)
0x376: Stack[-3] = Stack[-1]
0x377: Return(); Pop(2)

0x378: Stack[-1] = 0
0x379: PushEmpty(float, float)
0x37a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x37b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x37c: Push((float)0.0)
0x37d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x380: Return(); Pop(2)

0x381: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x382: Return(); Pop(2)

0x383: PushEmpty(int, int)
0x384: @ GetVariable(Stack[-3], Stack[-1])
0x385: Pop(0)
0x386: Stack[-4] = Stack[-1]
0x387: Return(); Pop(2)

0x388: PushEmpty(float, float)
0x389: @ GetGameTime(Stack[-1])
0x38a: Pop(0)
0x38b: Push((int) 1)
0x38c: PushEmpty(int)
0x38d: Push((int) 24)
0x38e: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x38f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x390: Return(); Pop(2)

0x391: PushEmpty(string, string)
0x392: Stack[-1] = "idle"
0x393: Push(Stack[-3])
0x394: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x395: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x396: Stack[-4] = Stack[-1]
0x397: Return(); Pop(2)

0x398: PushEmpty(int, bool, int, bool)
0x399: Stack[-2] = (int) 0
0x39a: Push("all")
0x39b: PushEmpty(string, int)
0x39c: Stack[-1] = Stack[-5]
0x39d: Call2 0x391

0x39e: Pop(1)
0x39f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3a0: Pop(2)
0x3a1: Pop(0); Push((bool) Stack[-1] == 0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a3: GOTO 0x3a7

0x3a4: Push((int) 1)
0x3a5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3a6: GOTO 0x39a

0x3a7: Stack[-5] = Stack[-2]
0x3a8: Return(); Pop(4)

0x3a9: PushEmpty()
0x3aa: Push("ook11Andrei1")
0x3ab: Push((int) 1)
0x3ac: @ SetVariable(Stack[-2], Stack[-1])
0x3ad: Pop(2)
0x3ae: Return(); Pop(0)

0x3af: PushEmpty()
0x3b0: PushEmpty(int, string)
0x3b1: Stack[-1] = "ook11Andrei1"
0x3b2: Call2 0x383

0x3b3: Pop(1)
0x3b4: Push((int) 0)
0x3b5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3b6: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b7: Stack[-2] = (bool) 1
0x3b8: Return(); Pop(0)

0x3b9: Stack[-2] = (bool) 0
0x3ba: Return(); Pop(0)

0x3bb: PushEmpty(int, int)
0x3bc: Push("branch")
0x3bd: @ GetVariable(Stack[-1], Stack[-2])
0x3be: Pop(1)
0x3bf: Push((int) 0)
0x3c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c2: Stack[-3] = (int) 1
0x3c3: Return(); Pop(2)

0x3c4: GOTO 0x3ca

0x3c5: Push((int) 1)
0x3c6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c8: Stack[-3] = (int) 2
0x3c9: Return(); Pop(2)

0x3ca: Stack[-3] = (int) 3
0x3cb: Return(); Pop(2)

0x3cc: Stack[-1] = (int) 515529
0x3cd: Return(); Pop(0)

0x3ce: Stack[-1] = (int) 502855
0x3cf: Return(); Pop(0)

0x3d0: Stack[-1] = "ui/NPC_Andrei.png"
0x3d1: Return(); Pop(0)

0x3d2: Stack[-1] = "ui/NPC_Andrei_b.png"
0x3d3: Return(); Pop(0)

0x3d4: Stack[-1] = (bool) 1
0x3d5: Return(); Pop(0)

