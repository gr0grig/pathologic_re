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
	Untrust
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
	ook9DankoTermitnik2_1
	k9q01DankoTalk
	k9q01BurahTalk
	k9q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x179
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb4 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x17d Vars = (string)
		EVENT_6 Op = 0x191 Vars = ()
		EVENT_5 Op = 0x19e Vars = ()
		EVENT_7 Op = 0x1e7 Vars = (int)
		EVENT_45 Op = 0x229 Vars = (bool)
		EVENT_0 Op = 0x235 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2be

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x490

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x48e

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x492

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x494

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x47d

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
0x31: Call2 0x3d2

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x313

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
0x48: Call2 0x302

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
0x56: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x9e

0x5a: Pop(1)
0x5b: Push((int) 526491)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool)
0x61: Stack[-1] = (bool) 0
0x62: PushEmpty(bool, object)
0x63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64: Call2 0x42f

0x65: Pop(1)
0x66: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x67: PushEmpty(bool, object)
0x68: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69: Call2 0x43b

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6c: Stack[-1] = (bool) 1
0x6d: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6e: Push((int) 526492)
0x6f: Push((int) 27759)
0x70: Push((int) 27758)
0x71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72: Pop(3)
0x73: Push((int) 526497)
0x74: Push((int) -1)
0x75: Push((int) 27763)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: Push((int) 528836)
0x79: Push((int) -1)
0x7a: Push((int) 30254)
0x7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c: Pop(3)
0x7d: GOTO 0x80

0x7e: Return(); Pop(0)

0x7f: GOTO 0x55

0x80: PushEmpty(bool)
0x81: Call2 0x496

0x82: Pop(0)
0x83: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x84: @ lshWaitForAnimEnd()
0x85: Pop(0)
0x86: Push( Stack[3 + Tasks[-1].StackPointer] )
0x87: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x88: GOTO 0x8e

0x89: PushEmpty(string)
0x8a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8b: Call2 0x39d

0x8c: Pop(1)
0x8d: GOTO 0x84

0x8e: GOTO 0x9d

0x8f: Push("all")
0x90: Push("idle")
0x91: @ PlayAnimation(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: @ WaitForAnimEnd()
0x94: Pop(0)
0x95: Push( Stack[3 + Tasks[-1].StackPointer] )
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: GOTO 0x9d

0x98: Push("all")
0x99: Push("idle")
0x9a: @ PlayAnimation(Stack[-2], Stack[-1])
0x9b: Pop(2)
0x9c: GOTO 0x93

0x9d: Return(); Pop(0)

0x9e: PushEmpty()
0x9f: PushEmpty(bool)
0xa0: Call2 0x496

0xa1: Pop(0)
0xa2: Pop(1); Push((bool) Stack[-1] == 0)
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Return(); Pop(0)

0xa5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: Return(); Pop(0)

0xa8: PushEmpty(string, bool)
0xa9: Stack[-2] = Stack[-3]
0xaa: Push("")
0xab: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xad: Stack[-1] = (bool) 0
0xae: GOTO 0xb0

0xaf: Stack[-1] = (bool) 1
0xb0: Call2 0x3ad

0xb1: Pop(2)
0xb2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb3: Return(); Pop(0)

0xb4: PushEmpty()
0xb5: Push((int) 1)
0xb6: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0xb7: PushEmpty()
0xb8: Call2 0x3cb

0xb9: Pop(0)
0xba: Push((int) 27758)
0xbb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xbd: PushEmpty(object, object)
0xbe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc0: Call2 0x408

0xc1: Pop(2)
0xc2: PushEmpty(object, object)
0xc3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc5: Call2 0x40e

0xc6: Pop(2)
0xc7: PushEmpty(object, object)
0xc8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xca: Call2 0x414

0xcb: Pop(2)
0xcc: Push((int) 27757)
0xcd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xcf: PushEmpty(string)
0xd0: Stack[-1] = "Neutral"
0xd1: Call2 0x9e

0xd2: Pop(1)
0xd3: Push((int) 526491)
0xd4: @@ SetMessage(Stack[-1])
0xd5: Pop(1)
0xd6: @@ ClearReplies()
0xd7: Pop(0)
0xd8: PushEmpty(bool)
0xd9: Stack[-1] = (bool) 0
0xda: PushEmpty(bool, object)
0xdb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdc: Call2 0x42f

0xdd: Pop(1)
0xde: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xdf: PushEmpty(bool, object)
0xe0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Call2 0x43b

0xe2: Pop(1)
0xe3: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe4: Stack[-1] = (bool) 1
0xe5: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe6: Push((int) 526492)
0xe7: Push((int) 27759)
0xe8: Push((int) 27758)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Push((int) 526497)
0xec: Push((int) -1)
0xed: Push((int) 27763)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 528836)
0xf1: Push((int) -1)
0xf2: Push((int) 30254)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Push((int) 27759)
0xf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xf9: PushEmpty(string)
0xfa: Stack[-1] = "Neutral"
0xfb: Call2 0x9e

0xfc: Pop(1)
0xfd: Push((int) 526493)
0xfe: @@ SetMessage(Stack[-1])
0xff: Pop(1)
0x100: @@ ClearReplies()
0x101: Pop(0)
0x102: Push((int) 528837)
0x103: Push((int) 30256)
0x104: Push((int) 30255)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: Push((int) 541112)
0x108: Push((int) 30256)
0x109: Push((int) 43226)
0x10a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b: Pop(3)
0x10c: Return(); Pop(0)

0x10d: Push((int) 30256)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x110: PushEmpty(string)
0x111: Stack[-1] = "Untrust"
0x112: Call2 0x9e

0x113: Pop(1)
0x114: Push((int) 528838)
0x115: @@ SetMessage(Stack[-1])
0x116: Pop(1)
0x117: @@ ClearReplies()
0x118: Pop(0)
0x119: Push((int) 528839)
0x11a: Push((int) 30258)
0x11b: Push((int) 30257)
0x11c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(3)
0x11e: Push((int) 541113)
0x11f: Push((int) 27761)
0x120: Push((int) 43228)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: Push((int) 30258)
0x125: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x127: PushEmpty(string)
0x128: Stack[-1] = "Untrust"
0x129: Call2 0x9e

0x12a: Pop(1)
0x12b: Push((int) 528840)
0x12c: @@ SetMessage(Stack[-1])
0x12d: Pop(1)
0x12e: @@ ClearReplies()
0x12f: Pop(0)
0x130: Push((int) 526494)
0x131: Push((int) 27761)
0x132: Push((int) 27760)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Push((int) 542479)
0x136: Push((int) 44864)
0x137: Push((int) 44863)
0x138: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x139: Pop(3)
0x13a: Return(); Pop(0)

0x13b: Push((int) 44864)
0x13c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x13e: PushEmpty(string)
0x13f: Stack[-1] = "Untrust"
0x140: Call2 0x9e

0x141: Pop(1)
0x142: Push((int) 542480)
0x143: @@ SetMessage(Stack[-1])
0x144: Pop(1)
0x145: @@ ClearReplies()
0x146: Pop(0)
0x147: Push((int) 542481)
0x148: Push((int) 27761)
0x149: Push((int) 44865)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: Return(); Pop(0)

0x14d: Push((int) 27761)
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Untrust"
0x152: Call2 0x9e

0x153: Pop(1)
0x154: Push((int) 526495)
0x155: @@ SetMessage(Stack[-1])
0x156: Pop(1)
0x157: @@ ClearReplies()
0x158: Pop(0)
0x159: Push((int) 526496)
0x15a: Push((int) -1)
0x15b: Push((int) 27762)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: Push((int) 541114)
0x15f: Push((int) -1)
0x160: Push((int) 43230)
0x161: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x162: Pop(3)
0x163: Return(); Pop(0)

0x164: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x165: PushEmpty(bool)
0x166: Call2 0x496

0x167: Pop(0)
0x168: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x169: @ lshStopAnimation()
0x16a: Pop(0)
0x16b: GOTO 0x16e

0x16c: @ StopAnimation()
0x16d: Pop(0)
0x16e: Return(); Pop(0)

0x16f: GOTO 0xb5

0x170: Return(); Pop(0)

0x171: PushEmpty()
0x172: PushEmpty(int, object)
0x173: Stack[-1] = Stack[-3]
0x174: Push(-2, 1); TaskCall(0)
0x175: Call2 0x0

0x176: Pop(-2, 1); TaskReturn
0x177: Pop(2)
0x178: Return(); Pop(0)

0x179: PushEmpty()
0x17a: Call2 0x1a2

0x17b: Pop(0)
0x17c: Return(); Pop(0)

0x17d: PushEmpty(bool, bool)
0x17e: Push("cleanup")
0x17f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x181: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x182: @ IsLoaded(Stack[-1])
0x183: Pop(0)
0x184: Pop(0); Push((bool) Stack[-1] == 0)
0x185: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x186: PushEmpty(object)
0x187: Call2 0x3d2

0x188: Pop(0)
0x189: @ RemoveActor(Stack[-1])
0x18a: Pop(1)
0x18b: GOTO 0x190

0x18c: Push("restore")
0x18d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18f: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x190: Return(); Pop(2)

0x191: Push( Stack[1 + Tasks[-1].StackPointer] )
0x192: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x193: PushEmpty(object)
0x194: Call2 0x3d2

0x195: Pop(0)
0x196: @ RemoveActor(Stack[-1])
0x197: Pop(1)
0x198: @ Hold()
0x199: Pop(0)
0x19a: PushEmpty()
0x19b: Call2 0x20d

0x19c: Pop(0)
0x19d: Return(); Pop(0)

0x19e: PushEmpty()
0x19f: Call2 0x21c

0x1a0: Pop(0)
0x1a1: Return(); Pop(0)

0x1a2: PushEmpty(bool)
0x1a3: Call2 0x2b9

0x1a4: Pop(0)
0x1a5: Pop(1); Push((bool) Stack[-1] == 0)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a7: @ Hold()
0x1a8: Pop(0)
0x1a9: @ GetDirection(Stack[-0])
0x1aa: Pop(0)
0x1ab: PushEmpty()
0x1ac: Call2 0x252

0x1ad: Pop(0)
0x1ae: GOTO 0x1ab

0x1af: Return(); Pop(0)

0x1b0: PushEmpty(object, object)
0x1b1: Push("player")
0x1b2: @ FindActor(Stack[-2], Stack[-1])
0x1b3: Pop(1)
0x1b4: Pop(0); Push((bool) Stack[-1] == 0)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b6: Stack[-3] = (bool) 0
0x1b7: Return(); Pop(2)

0x1b8: PushEmpty(bool, object)
0x1b9: Stack[-1] = Stack[-3]
0x1ba: Call2 0x2b0

0x1bb: Stack[-5] = Stack[-2]
0x1bc: Pop(2)
0x1bd: Return(); Pop(2)

0x1be: Stack[-1] = 0
0x1bf: Push(CvectorIndex(Stack[-0], 0))
0x1c0: Push(CvectorIndex(Stack[-0], 2))
0x1c1: @ RotateAsync(Stack[-2], Stack[-1])
0x1c2: Pop(2)
0x1c3: Return(); Pop(0)

0x1c4: PushEmpty(object, bool, object, bool)
0x1c5: Push("player")
0x1c6: @ FindActor(Stack[-3], Stack[-1])
0x1c7: Pop(1)
0x1c8: Pop(0); Push((bool) Stack[-2] == 0)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1ca: Stack[-5] = (bool) 0
0x1cb: Return(); Pop(4)

0x1cc: PushEmpty(float, object)
0x1cd: Stack[-1] = Stack[-4]
0x1ce: Call2 0x29e

0x1cf: Pop(1)
0x1d0: Push((float)90000.0)
0x1d1: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d3: Stack[-5] = (bool) 0
0x1d4: Return(); Pop(4)

0x1d5: @ CanSee(Stack[-1], Stack[-2])
0x1d6: Pop(0)
0x1d7: Stack[-5] = Stack[-1]
0x1d8: Return(); Pop(4)

0x1d9: Stack[-2] = 0
0x1da: PushEmpty(float, float)
0x1db: Push((int) 8)
0x1dc: Push((int) 16)
0x1dd: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1de: Pop(2)
0x1df: Push((int) 10)
0x1e0: @ SetTimer(Stack[-1], Stack[-2])
0x1e1: Pop(1)
0x1e2: Return(); Pop(2)

0x1e3: Push((int) 10)
0x1e4: @ KillTimer(Stack[-1])
0x1e5: Pop(1)
0x1e6: Return(); Pop(0)

0x1e7: PushEmpty()
0x1e8: Push((int) 10)
0x1e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1eb: PushEmpty()
0x1ec: Call2 0x1e3

0x1ed: Pop(0)
0x1ee: PushEmpty(bool)
0x1ef: Stack[-1] = (bool) 0
0x1f0: PushEmpty(bool)
0x1f1: Call2 0x2b9

0x1f2: Pop(0)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f4: PushEmpty(bool)
0x1f5: Call2 0x1c4

0x1f6: Pop(0)
0x1f7: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f8: Stack[-1] = (bool) 1
0x1f9: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1fa: PushEmpty(bool)
0x1fb: Call2 0x1b0

0x1fc: Pop(0)
0x1fd: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1fe: PushEmpty(bool, object)
0x1ff: PushEmpty(object)
0x200: Call2 0x3d2

0x201: Stack[-2] = Stack[-1]
0x202: Pop(1)
0x203: Call2 0x34d

0x204: Pop(2)
0x205: GOTO 0x20c

0x206: PushEmpty()
0x207: Call2 0x1bf

0x208: Pop(0)
0x209: PushEmpty()
0x20a: Call2 0x1da

0x20b: Pop(0)
0x20c: Return(); Pop(0)

0x20d: PushEmpty()
0x20e: Call2 0x299

0x20f: Pop(0)
0x210: PushEmpty()
0x211: Call2 0x1e3

0x212: Pop(0)
0x213: @ lshStopSpeech()
0x214: Pop(0)
0x215: @ lshStopAnimation()
0x216: Pop(0)
0x217: @ StopAsync()
0x218: Pop(0)
0x219: @ Hold()
0x21a: Pop(0)
0x21b: Return(); Pop(0)

0x21c: @ StopGroup0()
0x21d: Pop(0)
0x21e: PushEmpty()
0x21f: Call2 0x1e3

0x220: Pop(0)
0x221: PushEmpty(string)
0x222: Stack[-1] = "Neutral"
0x223: Call2 0x39d

0x224: Pop(1)
0x225: PushEmpty()
0x226: Call2 0x1da

0x227: Pop(0)
0x228: Return(); Pop(0)

0x229: PushEmpty()
0x22a: Push(Stack[-1])
0x22b: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22c: PushEmpty()
0x22d: Call2 0x1da

0x22e: Pop(0)
0x22f: GOTO 0x234

0x230: PushEmpty(string)
0x231: Stack[-1] = "Neutral"
0x232: Call2 0x39d

0x233: Pop(1)
0x234: Return(); Pop(0)

0x235: PushEmpty(bool, bool)
0x236: @ IsOverrideActive(Stack[-1])
0x237: Pop(0)
0x238: Pop(0); Push((bool) Stack[-1] == 0)
0x239: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x23a: EventDisable(0)
0x23b: PushEmpty()
0x23c: Call2 0x299

0x23d: Pop(0)
0x23e: PushEmpty(bool, object)
0x23f: Stack[-1] = Stack[-5]
0x240: Call2 0x2b0

0x241: Pop(2)
0x242: EventEnable(0)
0x243: PushEmpty(object)
0x244: Stack[-1] = Stack[-4]
0x245: Call2 0x171

0x246: Pop(1)
0x247: PushEmpty(string)
0x248: Stack[-1] = "Neutral"
0x249: Call2 0x39d

0x24a: Pop(1)
0x24b: PushEmpty()
0x24c: Call2 0x1e3

0x24d: Pop(0)
0x24e: PushEmpty()
0x24f: Call2 0x1da

0x250: Pop(0)
0x251: Return(); Pop(2)

0x252: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x253: @ WaitForAnimEnd()
0x254: Pop(0)
0x255: PushEmpty(bool)
0x256: Call2 0x2b9

0x257: Pop(0)
0x258: Pop(1); Push((bool) Stack[-1] == 0)
0x259: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x25a: Return(); Pop(12)

0x25b: PushEmpty(int)
0x25c: Call2 0x3f7

0x25d: Stack[-7] = Stack[-1]
0x25e: Pop(1)
0x25f: Stack[-5] = (int) 0
0x260: PushEmpty(bool)
0x261: Stack[-1] = (bool) 0
0x262: Push((int) 5)
0x263: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x265: PushEmpty(bool)
0x266: Call2 0x2b9

0x267: Pop(0)
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: Stack[-1] = (bool) 1
0x26a: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x26b: Pop(0); Push((bool) Stack[-6] == 0)
0x26c: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x26d: Push((int) 3)
0x26e: @ Sleep(Stack[-1], Stack[-5])
0x26f: Pop(1)
0x270: Pop(0); Push((bool) Stack[-4] == 0)
0x271: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x272: GOTO 0x294

0x273: GOTO 0x289

0x274: @ irand(Stack[-3], Stack[-6])
0x275: Pop(0)
0x276: Push((int) 5)
0x277: @ irand(Stack[-3], Stack[-1])
0x278: Pop(1)
0x279: Push((int) 0)
0x27a: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27c: Stack[-3] = (int) 0
0x27d: Push("all")
0x27e: PushEmpty(string, int)
0x27f: Stack[-1] = Stack[-6]
0x280: Call2 0x3f0

0x281: Pop(1)
0x282: @ PlayAnimation(Stack[-2], Stack[-1])
0x283: Pop(2)
0x284: @ WaitForAnimEnd(Stack[-1])
0x285: Pop(0)
0x286: Pop(0); Push((bool) Stack[-1] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: GOTO 0x294

0x289: PushEmpty(bool)
0x28a: Call2 0x297

0x28b: Pop(0)
0x28c: Pop(1); Push((bool) Stack[-1] == 0)
0x28d: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28e: GOTO 0x294

0x28f: @ ResetAAS()
0x290: Pop(0)
0x291: Push((int) 1)
0x292: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x293: GOTO 0x260

0x294: @ ResetAAS()
0x295: Pop(0)
0x296: Return(); Pop(12)

0x297: Stack[-1] = (bool) 1
0x298: Return(); Pop(0)

0x299: @ StopAnimation()
0x29a: Pop(0)
0x29b: @ StopGroup0()
0x29c: Pop(0)
0x29d: Return(); Pop(0)

0x29e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x29f: @ GetPosition(Stack[-3])
0x2a0: Pop(0)
0x2a1: @@ GetPosition(Stack[-2])
0x2a2: Pop(0)
0x2a3: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2a4: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2a5: Return(); Pop(6)

0x2a6: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2a7: @ GetPosition(Stack[-3])
0x2a8: Pop(0)
0x2a9: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2aa: Push(CvectorIndex(Stack[-2], 0))
0x2ab: Push(CvectorIndex(Stack[-3], 2))
0x2ac: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2ad: Pop(2)
0x2ae: Stack[-8] = Stack[-1]
0x2af: Return(); Pop(6)

0x2b0: PushEmpty(cvector, cvector)
0x2b1: @@ GetPosition(Stack[-1])
0x2b2: Pop(0)
0x2b3: PushEmpty(bool, cvector)
0x2b4: Stack[-1] = Stack[-3]
0x2b5: Call2 0x2a6

0x2b6: Stack[-6] = Stack[-2]
0x2b7: Pop(2)
0x2b8: Return(); Pop(2)

0x2b9: PushEmpty(bool, bool)
0x2ba: @ IsLoaded(Stack[-1])
0x2bb: Pop(0)
0x2bc: Stack[-3] = Stack[-1]
0x2bd: Return(); Pop(2)

0x2be: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2bf: @@ GetPosition(Stack[-8])
0x2c0: Pop(0)
0x2c1: @@ GetEyesHeight(Stack[-9])
0x2c2: Pop(0)
0x2c3: Push(CvectorIndex(Stack[-8], 1))
0x2c4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2c5: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2c6: @ GetPosition(Stack[-7])
0x2c7: Pop(0)
0x2c8: @ GetEyesHeight(Stack[-9])
0x2c9: Pop(0)
0x2ca: Push(CvectorIndex(Stack[-7], 1))
0x2cb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2cc: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2cd: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2ce: Push(CvectorIndex(Stack[-6], 1))
0x2cf: Stack[-1] = (int) 0
0x2d0: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2d1: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2d2: Pop(1); Push(Sqrt(Stack[-1]))
0x2d3: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2d4: Stack[-5] = -Stack[-6]; Pop(0);
0x2d5: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2d6: PushEmpty(cvector, cvector)
0x2d7: Push(CVector(0.0, 1.0, 0.0))
0x2d8: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2d9: Call2 0x3d8

0x2da: Pop(1)
0x2db: Push((int) 25)
0x2dc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2dd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2de: Push(CVector(0.0, 10.0, 0.0))
0x2df: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2e0: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2e1: @ IsOverrideActive(Stack[-2])
0x2e2: Pop(0)
0x2e3: Push(Stack[-2])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e5: Stack[-21] = (bool) 0
0x2e6: Return(); Pop(18)

0x2e7: @ StopWorld()
0x2e8: Pop(0)
0x2e9: @ CameraTransit(Stack[-3], Stack[-5])
0x2ea: Pop(0)
0x2eb: Push(CvectorIndex(Stack[-4], 0))
0x2ec: Push(CvectorIndex(Stack[-5], 2))
0x2ed: @ Rotate(Stack[-2], Stack[-1])
0x2ee: Pop(2)
0x2ef: PushEmpty(bool)
0x2f0: Call2 0x496

0x2f1: Pop(0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f3: GOTO 0x2fc

0x2f4: Push("head")
0x2f5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f6: Pop(1)
0x2f7: Push(Stack[-1])
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f9: Push("head")
0x2fa: @ LookAsyncCamera(Stack[-1])
0x2fb: Pop(1)
0x2fc: @ CameraWaitForPlayFinish()
0x2fd: Pop(0)
0x2fe: @ ResumeWorld()
0x2ff: Pop(0)
0x300: Stack[-21] = (bool) 1
0x301: Return(); Pop(18)

0x302: PushEmpty(bool, bool)
0x303: @ CameraSwitchToNormal()
0x304: Pop(0)
0x305: PushEmpty(bool)
0x306: Call2 0x496

0x307: Pop(0)
0x308: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x309: GOTO 0x312

0x30a: Push("head")
0x30b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x30c: Pop(1)
0x30d: Push(Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x30f: Push("head")
0x310: @ UnlookAsync(Stack[-1])
0x311: Pop(1)
0x312: Return(); Pop(2)

0x313: PushEmpty(int, int, int, int)
0x314: Push("voice_common")
0x315: @ GetVariable(Stack[-1], Stack[-3])
0x316: Pop(1)
0x317: Push(Stack[-2])
0x318: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x319: PushEmpty(bool, object)
0x31a: Stack[-1] = Stack[-7]
0x31b: Call2 0x34d

0x31c: Pop(1)
0x31d: Pop(1); Push((bool) Stack[-1] == 0)
0x31e: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x31f: PushEmpty(bool, object)
0x320: Stack[-1] = Stack[-7]
0x321: Call2 0x372

0x322: Pop(1)
0x323: Pop(1); Push((bool) Stack[-1] == 0)
0x324: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x325: Stack[-6] = (bool) 0
0x326: Return(); Pop(4)

0x327: Push((int) 2)
0x328: @ irand(Stack[-2], Stack[-1])
0x329: Pop(1)
0x32a: Push(Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x32c: Push("voice_common")
0x32d: Push((int) 1)
0x32e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x32f: Push((int) 3)
0x330: Pop(2); Push(Stack[-2] % Stack[-1]);
0x331: @ SetVariable(Stack[-2], Stack[-1])
0x332: Pop(2)
0x333: GOTO 0x338

0x334: Push("voice_common")
0x335: Push((int) 0)
0x336: @ SetVariable(Stack[-2], Stack[-1])
0x337: Pop(2)
0x338: GOTO 0x34b

0x339: PushEmpty(bool, object)
0x33a: Stack[-1] = Stack[-7]
0x33b: Call2 0x372

0x33c: Pop(1)
0x33d: Pop(1); Push((bool) Stack[-1] == 0)
0x33e: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x33f: PushEmpty(bool, object)
0x340: Stack[-1] = Stack[-7]
0x341: Call2 0x34d

0x342: Pop(1)
0x343: Pop(1); Push((bool) Stack[-1] == 0)
0x344: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x345: Stack[-6] = (bool) 0
0x346: Return(); Pop(4)

0x347: Push("voice_common")
0x348: Push((int) 1)
0x349: @ SetVariable(Stack[-2], Stack[-1])
0x34a: Pop(2)
0x34b: Stack[-6] = (bool) 1
0x34c: Return(); Pop(4)

0x34d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x34e: Stack[-5] = "c"
0x34f: Stack[-4] = (int) 0
0x350: Push((int) 1)
0x351: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x352: Push((int) 1)
0x353: Pop(1); Push(Stack[-5] + Stack[-1]);
0x354: Pop(1); Push(Stack[-6] + Stack[-1]);
0x355: @@ HasProperty(Stack[-1], Stack[-4])
0x356: Pop(1)
0x357: Pop(0); Push((bool) Stack[-3] == 0)
0x358: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x359: GOTO 0x35d

0x35a: Push((int) 1)
0x35b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x35c: GOTO 0x350

0x35d: Pop(0); Push((bool) Stack[-4] == 0)
0x35e: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x35f: Stack[-12] = (bool) 0
0x360: Return(); Pop(10)

0x361: Stack[-2] = (int) 0
0x362: Push((int) 1)
0x363: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x365: @ irand(Stack[-2], Stack[-4])
0x366: Pop(0)
0x367: Push((int) 1)
0x368: Pop(1); Push(Stack[-3] + Stack[-1]);
0x369: Pop(1); Push(Stack[-6] + Stack[-1]);
0x36a: @@ GetProperty(Stack[-1], Stack[-2])
0x36b: Pop(1)
0x36c: PushEmpty(bool, string)
0x36d: Stack[-1] = Stack[-3]
0x36e: Call2 0x3bc

0x36f: Stack[-14] = Stack[-2]
0x370: Pop(2)
0x371: Return(); Pop(10)

0x372: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x373: Push("d")
0x374: PushEmpty(int)
0x375: Call2 0x3e7

0x376: Pop(0)
0x377: Pop(2); Push(Stack[-2] + Stack[-1]);
0x378: Push("m")
0x379: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x37a: Stack[-4] = (int) 0
0x37b: Push((int) 1)
0x37c: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x37d: Push((int) 1)
0x37e: Pop(1); Push(Stack[-5] + Stack[-1]);
0x37f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x380: @@ HasProperty(Stack[-1], Stack[-4])
0x381: Pop(1)
0x382: Pop(0); Push((bool) Stack[-3] == 0)
0x383: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x384: GOTO 0x388

0x385: Push((int) 1)
0x386: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x387: GOTO 0x37b

0x388: Pop(0); Push((bool) Stack[-4] == 0)
0x389: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38a: Stack[-12] = (bool) 0
0x38b: Return(); Pop(10)

0x38c: Stack[-2] = (int) 0
0x38d: Push((int) 1)
0x38e: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x38f: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x390: @ irand(Stack[-2], Stack[-4])
0x391: Pop(0)
0x392: Push((int) 1)
0x393: Pop(1); Push(Stack[-3] + Stack[-1]);
0x394: Pop(1); Push(Stack[-6] + Stack[-1]);
0x395: @@ GetProperty(Stack[-1], Stack[-2])
0x396: Pop(1)
0x397: PushEmpty(bool, string)
0x398: Stack[-1] = Stack[-3]
0x399: Call2 0x3bc

0x39a: Stack[-14] = Stack[-2]
0x39b: Pop(2)
0x39c: Return(); Pop(10)

0x39d: PushEmpty(bool, float, float, bool, float, float)
0x39e: @ lshHasAnimation(Stack[-3], Stack[-7])
0x39f: Pop(0)
0x3a0: Push(Stack[-3])
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a2: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3a3: Pop(0)
0x3a4: Push((bool) 0)
0x3a5: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3a6: Pop(1)
0x3a7: GOTO 0x3ac

0x3a8: Push("Can't find lsh animation : ")
0x3a9: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3aa: @ Trace(Stack[-1])
0x3ab: Pop(1)
0x3ac: Return(); Pop(6)

0x3ad: PushEmpty(bool, float, float, bool, float, float)
0x3ae: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3af: Pop(0)
0x3b0: Push(Stack[-3])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b2: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3b3: Pop(0)
0x3b4: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3b5: Pop(0)
0x3b6: GOTO 0x3bb

0x3b7: Push("Can't find lsh animation : ")
0x3b8: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3b9: @ Trace(Stack[-1])
0x3ba: Pop(1)
0x3bb: Return(); Pop(6)

0x3bc: PushEmpty(bool, bool)
0x3bd: PushEmpty(bool)
0x3be: Call2 0x496

0x3bf: Pop(0)
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c1: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3c2: Pop(0)
0x3c3: Push(Stack[-1])
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c5: @ lshPlaySpeech(Stack[-3])
0x3c6: Pop(0)
0x3c7: Stack[-4] = (bool) 1
0x3c8: Return(); Pop(2)

0x3c9: Stack[-4] = (bool) 0
0x3ca: Return(); Pop(2)

0x3cb: PushEmpty(bool)
0x3cc: Call2 0x496

0x3cd: Pop(0)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3cf: @ lshStopSpeech()
0x3d0: Pop(0)
0x3d1: Return(); Pop(0)

0x3d2: PushEmpty(object, object)
0x3d3: @ self(Stack[-1])
0x3d4: Pop(0)
0x3d5: Stack[-3] = Stack[-1]
0x3d6: Return(); Pop(2)

0x3d7: Stack[-1] = 0
0x3d8: PushEmpty(float, float)
0x3d9: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3da: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3db: Push((float)0.0)
0x3dc: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3dd: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3de: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3df: Return(); Pop(2)

0x3e0: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3e1: Return(); Pop(2)

0x3e2: PushEmpty(int, int)
0x3e3: @ GetVariable(Stack[-3], Stack[-1])
0x3e4: Pop(0)
0x3e5: Stack[-4] = Stack[-1]
0x3e6: Return(); Pop(2)

0x3e7: PushEmpty(float, float)
0x3e8: @ GetGameTime(Stack[-1])
0x3e9: Pop(0)
0x3ea: Push((int) 1)
0x3eb: PushEmpty(int)
0x3ec: Push((int) 24)
0x3ed: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3ee: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3ef: Return(); Pop(2)

0x3f0: PushEmpty(string, string)
0x3f1: Stack[-1] = "idle"
0x3f2: Push(Stack[-3])
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f4: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3f5: Stack[-4] = Stack[-1]
0x3f6: Return(); Pop(2)

0x3f7: PushEmpty(int, bool, int, bool)
0x3f8: Stack[-2] = (int) 0
0x3f9: Push("all")
0x3fa: PushEmpty(string, int)
0x3fb: Stack[-1] = Stack[-5]
0x3fc: Call2 0x3f0

0x3fd: Pop(1)
0x3fe: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3ff: Pop(2)
0x400: Pop(0); Push((bool) Stack[-1] == 0)
0x401: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x402: GOTO 0x406

0x403: Push((int) 1)
0x404: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x405: GOTO 0x3f9

0x406: Stack[-5] = Stack[-2]
0x407: Return(); Pop(4)

0x408: PushEmpty()
0x409: Push("ook9DankoTermitnik2_1")
0x40a: Push((int) 1)
0x40b: @ SetVariable(Stack[-2], Stack[-1])
0x40c: Pop(2)
0x40d: Return(); Pop(0)

0x40e: PushEmpty()
0x40f: Push("k9q01DankoTalk")
0x410: Push((int) 1)
0x411: @ SetVariable(Stack[-2], Stack[-1])
0x412: Pop(2)
0x413: Return(); Pop(0)

0x414: PushEmpty()
0x415: PushEmpty(bool)
0x416: Stack[-1] = (bool) 0
0x417: PushEmpty(int, string)
0x418: Stack[-1] = "k9q01BurahTalk"
0x419: Call2 0x3e2

0x41a: Pop(1)
0x41b: Push((int) 0)
0x41c: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x41e: PushEmpty(int, string)
0x41f: Stack[-1] = "k9q01DankoTalk"
0x420: Call2 0x3e2

0x421: Pop(1)
0x422: Push((int) 0)
0x423: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x424: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x425: Stack[-1] = (bool) 1
0x426: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x427: Push("k9q01")
0x428: Push((int) 3)
0x429: @ SetVariable(Stack[-2], Stack[-1])
0x42a: Pop(2)
0x42b: PushEmpty()
0x42c: Call2 0x447

0x42d: Pop(0)
0x42e: Return(); Pop(0)

0x42f: PushEmpty()
0x430: PushEmpty(int, string)
0x431: Stack[-1] = "k9q01"
0x432: Call2 0x3e2

0x433: Pop(1)
0x434: Push((int) 2)
0x435: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x436: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x437: Stack[-2] = (bool) 1
0x438: Return(); Pop(0)

0x439: Stack[-2] = (bool) 0
0x43a: Return(); Pop(0)

0x43b: PushEmpty()
0x43c: PushEmpty(int, string)
0x43d: Stack[-1] = "ook9DankoTermitnik2_1"
0x43e: Call2 0x3e2

0x43f: Pop(1)
0x440: Push((int) 0)
0x441: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x442: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x443: Stack[-2] = (bool) 1
0x444: Return(); Pop(0)

0x445: Stack[-2] = (bool) 0
0x446: Return(); Pop(0)

0x447: PushEmpty(object, object)
0x448: Push((int) 520)
0x449: Push((int) 1)
0x44a: Push((int) 529812)
0x44b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x44c: Pop(3)
0x44d: PushEmpty(bool, object, int)
0x44e: Stack[-2] = Stack[-4]
0x44f: Stack[-1] = (int) 517
0x450: Call2 0x461

0x451: Pop(3)
0x452: Return(); Pop(2)

0x453: Stack[-1] = 0
0x454: PushEmpty(object, object)
0x455: @ GetDiaryRoot(Stack[-1])
0x456: Pop(0)
0x457: Pop(0); Push((bool) Stack[-1] == 0)
0x458: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x459: Push("Can't retrieve diary root")
0x45a: @ Trace(Stack[-1])
0x45b: Pop(1)
0x45c: Stack[-3] = (bool) 0
0x45d: Return(); Pop(2)

0x45e: Stack[-3] = Stack[-1]
0x45f: Return(); Pop(2)

0x460: Stack[-1] = 0
0x461: PushEmpty(object, object, int, object, object, int)
0x462: PushEmpty(object)
0x463: Call2 0x454

0x464: Stack[-4] = Stack[-1]
0x465: Pop(1)
0x466: @@ Find(Stack[-7], Stack[-2])
0x467: Pop(0)
0x468: Pop(0); Push((bool) Stack[-2] == 0)
0x469: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46a: Push("Can't find diary parent with id: ")
0x46b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x46c: @ Trace(Stack[-1])
0x46d: Pop(1)
0x46e: Stack[-9] = (bool) 0
0x46f: Return(); Pop(6)

0x470: @@ AddChild(Stack[-8])
0x471: Pop(0)
0x472: Push((int) 7)
0x473: @ SendWorldWndMessage(Stack[-1])
0x474: Pop(1)
0x475: @@ GetCategory(Stack[-1])
0x476: Pop(0)
0x477: @ SetDiarySection(Stack[-1])
0x478: Pop(0)
0x479: Stack[-9] = (bool) 0
0x47a: Return(); Pop(6)

0x47b: Stack[-2] = 0
0x47c: Stack[-3] = 0
0x47d: PushEmpty(int, int)
0x47e: Push("branch")
0x47f: @ GetVariable(Stack[-1], Stack[-2])
0x480: Pop(1)
0x481: Push((int) 0)
0x482: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x483: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x484: Stack[-3] = (int) 1
0x485: Return(); Pop(2)

0x486: GOTO 0x48c

0x487: Push((int) 1)
0x488: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x489: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x48a: Stack[-3] = (int) 2
0x48b: Return(); Pop(2)

0x48c: Stack[-3] = (int) 3
0x48d: Return(); Pop(2)

0x48e: Stack[-1] = (int) 515573
0x48f: Return(); Pop(0)

0x490: Stack[-1] = (int) 504032
0x491: Return(); Pop(0)

0x492: Stack[-1] = "ui/NPC_Bakalavr.png"
0x493: Return(); Pop(0)

0x494: Stack[-1] = "ui/NPC_Bakalavr_b.png"
0x495: Return(); Pop(0)

0x496: Stack[-1] = (bool) 1
0x497: Return(); Pop(0)

