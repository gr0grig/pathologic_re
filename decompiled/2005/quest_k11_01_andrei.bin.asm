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
0xe: Call2 0x3cc

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3ca

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3ce

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3d0

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3b9

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
0x31: Call2 0x371

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x2b2

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
0x48: Call2 0x2a1

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
0x62: Call2 0x3ad

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
0x78: Call2 0x3d2

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @ lshWaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: PushEmpty(string)
0x81: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x82: Call2 0x33c

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
0x97: Call2 0x3d2

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
0xa7: Call2 0x34c

0xa8: Pop(2)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xae: PushEmpty()
0xaf: Call2 0x36a

0xb0: Pop(0)
0xb1: Push((int) 29399)
0xb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0x3a7

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
0xc7: Call2 0x3ad

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
0x105: Call2 0x3d2

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
0x126: Call2 0x371

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
0x133: Call2 0x371

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
0x19f: Call2 0x371

0x1a0: Stack[-2] = Stack[-1]
0x1a1: Pop(1)
0x1a2: Call2 0x2ec

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
0x1c2: Call2 0x33c

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
0x1d1: Call2 0x33c

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
0x1e8: Call2 0x33c

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
0x1fb: Call2 0x396

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
0x21f: Call2 0x38f

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
0x278: Call2 0x377

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
0x288: @ CameraTransit(Stack[-3], Stack[-5])
0x289: Pop(0)
0x28a: Push(CvectorIndex(Stack[-4], 0))
0x28b: Push(CvectorIndex(Stack[-5], 2))
0x28c: @ Rotate(Stack[-2], Stack[-1])
0x28d: Pop(2)
0x28e: PushEmpty(bool)
0x28f: Call2 0x3d2

0x290: Pop(0)
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: GOTO 0x29b

0x293: Push("head")
0x294: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x295: Pop(1)
0x296: Push(Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x298: Push("head")
0x299: @ LookAsyncCamera(Stack[-1])
0x29a: Pop(1)
0x29b: @ CameraWaitForPlayFinish()
0x29c: Pop(0)
0x29d: @ ResumeWorld()
0x29e: Pop(0)
0x29f: Stack[-21] = (bool) 1
0x2a0: Return(); Pop(18)

0x2a1: PushEmpty(bool, bool)
0x2a2: @ CameraSwitchToNormal()
0x2a3: Pop(0)
0x2a4: PushEmpty(bool)
0x2a5: Call2 0x3d2

0x2a6: Pop(0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a8: GOTO 0x2b1

0x2a9: Push("head")
0x2aa: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ab: Pop(1)
0x2ac: Push(Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2ae: Push("head")
0x2af: @ UnlookAsync(Stack[-1])
0x2b0: Pop(1)
0x2b1: Return(); Pop(2)

0x2b2: PushEmpty(int, int, int, int)
0x2b3: Push("voice_common")
0x2b4: @ GetVariable(Stack[-1], Stack[-3])
0x2b5: Pop(1)
0x2b6: Push(Stack[-2])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2b8: PushEmpty(bool, object)
0x2b9: Stack[-1] = Stack[-7]
0x2ba: Call2 0x2ec

0x2bb: Pop(1)
0x2bc: Pop(1); Push((bool) Stack[-1] == 0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2be: PushEmpty(bool, object)
0x2bf: Stack[-1] = Stack[-7]
0x2c0: Call2 0x311

0x2c1: Pop(1)
0x2c2: Pop(1); Push((bool) Stack[-1] == 0)
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c4: Stack[-6] = (bool) 0
0x2c5: Return(); Pop(4)

0x2c6: Push((int) 2)
0x2c7: @ irand(Stack[-2], Stack[-1])
0x2c8: Pop(1)
0x2c9: Push(Stack[-1])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2cb: Push("voice_common")
0x2cc: Push((int) 1)
0x2cd: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2ce: Push((int) 3)
0x2cf: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2d0: @ SetVariable(Stack[-2], Stack[-1])
0x2d1: Pop(2)
0x2d2: GOTO 0x2d7

0x2d3: Push("voice_common")
0x2d4: Push((int) 0)
0x2d5: @ SetVariable(Stack[-2], Stack[-1])
0x2d6: Pop(2)
0x2d7: GOTO 0x2ea

0x2d8: PushEmpty(bool, object)
0x2d9: Stack[-1] = Stack[-7]
0x2da: Call2 0x311

0x2db: Pop(1)
0x2dc: Pop(1); Push((bool) Stack[-1] == 0)
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2de: PushEmpty(bool, object)
0x2df: Stack[-1] = Stack[-7]
0x2e0: Call2 0x2ec

0x2e1: Pop(1)
0x2e2: Pop(1); Push((bool) Stack[-1] == 0)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e4: Stack[-6] = (bool) 0
0x2e5: Return(); Pop(4)

0x2e6: Push("voice_common")
0x2e7: Push((int) 1)
0x2e8: @ SetVariable(Stack[-2], Stack[-1])
0x2e9: Pop(2)
0x2ea: Stack[-6] = (bool) 1
0x2eb: Return(); Pop(4)

0x2ec: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2ed: Stack[-5] = "c"
0x2ee: Stack[-4] = (int) 0
0x2ef: Push((int) 1)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f1: Push((int) 1)
0x2f2: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2f3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2f4: @@ HasProperty(Stack[-1], Stack[-4])
0x2f5: Pop(1)
0x2f6: Pop(0); Push((bool) Stack[-3] == 0)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f8: GOTO 0x2fc

0x2f9: Push((int) 1)
0x2fa: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2fb: GOTO 0x2ef

0x2fc: Pop(0); Push((bool) Stack[-4] == 0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fe: Stack[-12] = (bool) 0
0x2ff: Return(); Pop(10)

0x300: Stack[-2] = (int) 0
0x301: Push((int) 1)
0x302: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x303: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x304: @ irand(Stack[-2], Stack[-4])
0x305: Pop(0)
0x306: Push((int) 1)
0x307: Pop(1); Push(Stack[-3] + Stack[-1]);
0x308: Pop(1); Push(Stack[-6] + Stack[-1]);
0x309: @@ GetProperty(Stack[-1], Stack[-2])
0x30a: Pop(1)
0x30b: PushEmpty(bool, string)
0x30c: Stack[-1] = Stack[-3]
0x30d: Call2 0x35b

0x30e: Stack[-14] = Stack[-2]
0x30f: Pop(2)
0x310: Return(); Pop(10)

0x311: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x312: Push("d")
0x313: PushEmpty(int)
0x314: Call2 0x386

0x315: Pop(0)
0x316: Pop(2); Push(Stack[-2] + Stack[-1]);
0x317: Push("m")
0x318: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x319: Stack[-4] = (int) 0
0x31a: Push((int) 1)
0x31b: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x31c: Push((int) 1)
0x31d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x31e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x31f: @@ HasProperty(Stack[-1], Stack[-4])
0x320: Pop(1)
0x321: Pop(0); Push((bool) Stack[-3] == 0)
0x322: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x323: GOTO 0x327

0x324: Push((int) 1)
0x325: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x326: GOTO 0x31a

0x327: Pop(0); Push((bool) Stack[-4] == 0)
0x328: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x329: Stack[-12] = (bool) 0
0x32a: Return(); Pop(10)

0x32b: Stack[-2] = (int) 0
0x32c: Push((int) 1)
0x32d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x32e: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32f: @ irand(Stack[-2], Stack[-4])
0x330: Pop(0)
0x331: Push((int) 1)
0x332: Pop(1); Push(Stack[-3] + Stack[-1]);
0x333: Pop(1); Push(Stack[-6] + Stack[-1]);
0x334: @@ GetProperty(Stack[-1], Stack[-2])
0x335: Pop(1)
0x336: PushEmpty(bool, string)
0x337: Stack[-1] = Stack[-3]
0x338: Call2 0x35b

0x339: Stack[-14] = Stack[-2]
0x33a: Pop(2)
0x33b: Return(); Pop(10)

0x33c: PushEmpty(bool, float, float, bool, float, float)
0x33d: @ lshHasAnimation(Stack[-3], Stack[-7])
0x33e: Pop(0)
0x33f: Push(Stack[-3])
0x340: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x341: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x342: Pop(0)
0x343: Push((bool) 0)
0x344: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x345: Pop(1)
0x346: GOTO 0x34b

0x347: Push("Can't find lsh animation : ")
0x348: Pop(1); Push(Stack[-1] + Stack[-8]);
0x349: @ Trace(Stack[-1])
0x34a: Pop(1)
0x34b: Return(); Pop(6)

0x34c: PushEmpty(bool, float, float, bool, float, float)
0x34d: @ lshHasAnimation(Stack[-3], Stack[-8])
0x34e: Pop(0)
0x34f: Push(Stack[-3])
0x350: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x351: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x352: Pop(0)
0x353: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x354: Pop(0)
0x355: GOTO 0x35a

0x356: Push("Can't find lsh animation : ")
0x357: Pop(1); Push(Stack[-1] + Stack[-9]);
0x358: @ Trace(Stack[-1])
0x359: Pop(1)
0x35a: Return(); Pop(6)

0x35b: PushEmpty(bool, bool)
0x35c: PushEmpty(bool)
0x35d: Call2 0x3d2

0x35e: Pop(0)
0x35f: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x360: @ lshHasSpeech(Stack[-1], Stack[-3])
0x361: Pop(0)
0x362: Push(Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x364: @ lshPlaySpeech(Stack[-3])
0x365: Pop(0)
0x366: Stack[-4] = (bool) 1
0x367: Return(); Pop(2)

0x368: Stack[-4] = (bool) 0
0x369: Return(); Pop(2)

0x36a: PushEmpty(bool)
0x36b: Call2 0x3d2

0x36c: Pop(0)
0x36d: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36e: @ lshStopSpeech()
0x36f: Pop(0)
0x370: Return(); Pop(0)

0x371: PushEmpty(object, object)
0x372: @ self(Stack[-1])
0x373: Pop(0)
0x374: Stack[-3] = Stack[-1]
0x375: Return(); Pop(2)

0x376: Stack[-1] = 0
0x377: PushEmpty(float, float)
0x378: Pop(0); Push(Stack[-3] | Stack[-3]);
0x379: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x37a: Push((float)0.0)
0x37b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x37c: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x37e: Return(); Pop(2)

0x37f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x380: Return(); Pop(2)

0x381: PushEmpty(int, int)
0x382: @ GetVariable(Stack[-3], Stack[-1])
0x383: Pop(0)
0x384: Stack[-4] = Stack[-1]
0x385: Return(); Pop(2)

0x386: PushEmpty(float, float)
0x387: @ GetGameTime(Stack[-1])
0x388: Pop(0)
0x389: Push((int) 1)
0x38a: PushEmpty(int)
0x38b: Push((int) 24)
0x38c: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x38d: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x38e: Return(); Pop(2)

0x38f: PushEmpty(string, string)
0x390: Stack[-1] = "idle"
0x391: Push(Stack[-3])
0x392: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x393: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x394: Stack[-4] = Stack[-1]
0x395: Return(); Pop(2)

0x396: PushEmpty(int, bool, int, bool)
0x397: Stack[-2] = (int) 0
0x398: Push("all")
0x399: PushEmpty(string, int)
0x39a: Stack[-1] = Stack[-5]
0x39b: Call2 0x38f

0x39c: Pop(1)
0x39d: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x39e: Pop(2)
0x39f: Pop(0); Push((bool) Stack[-1] == 0)
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x3a1: GOTO 0x3a5

0x3a2: Push((int) 1)
0x3a3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3a4: GOTO 0x398

0x3a5: Stack[-5] = Stack[-2]
0x3a6: Return(); Pop(4)

0x3a7: PushEmpty()
0x3a8: Push("ook11Andrei1")
0x3a9: Push((int) 1)
0x3aa: @ SetVariable(Stack[-2], Stack[-1])
0x3ab: Pop(2)
0x3ac: Return(); Pop(0)

0x3ad: PushEmpty()
0x3ae: PushEmpty(int, string)
0x3af: Stack[-1] = "ook11Andrei1"
0x3b0: Call2 0x381

0x3b1: Pop(1)
0x3b2: Push((int) 0)
0x3b3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b5: Stack[-2] = (bool) 1
0x3b6: Return(); Pop(0)

0x3b7: Stack[-2] = (bool) 0
0x3b8: Return(); Pop(0)

0x3b9: PushEmpty(int, int)
0x3ba: Push("branch")
0x3bb: @ GetVariable(Stack[-1], Stack[-2])
0x3bc: Pop(1)
0x3bd: Push((int) 0)
0x3be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c0: Stack[-3] = (int) 1
0x3c1: Return(); Pop(2)

0x3c2: GOTO 0x3c8

0x3c3: Push((int) 1)
0x3c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c6: Stack[-3] = (int) 2
0x3c7: Return(); Pop(2)

0x3c8: Stack[-3] = (int) 3
0x3c9: Return(); Pop(2)

0x3ca: Stack[-1] = (int) 515529
0x3cb: Return(); Pop(0)

0x3cc: Stack[-1] = (int) 502855
0x3cd: Return(); Pop(0)

0x3ce: Stack[-1] = "ui/NPC_Andrei.png"
0x3cf: Return(); Pop(0)

0x3d0: Stack[-1] = "ui/NPC_Andrei_b.png"
0x3d1: Return(); Pop(0)

0x3d2: Stack[-1] = (bool) 1
0x3d3: Return(); Pop(0)

