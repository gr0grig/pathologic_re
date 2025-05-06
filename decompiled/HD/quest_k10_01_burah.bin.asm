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
	Agression
	Doubt
	Sorrow
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
	k10q01
	quest_k10_01
	place_prophet
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Burah.png
	ui/NPC_Burah_b.png

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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x184
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x188 Vars = (string)
		EVENT_6 Op = 0x19c Vars = ()
		EVENT_5 Op = 0x1a9 Vars = ()
		EVENT_7 Op = 0x1f2 Vars = (int)
		EVENT_45 Op = 0x234 Vars = (bool)
		EVENT_0 Op = 0x240 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2c9

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x484

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x482

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x486

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x488

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x471

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
0x31: Call2 0x3df

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x320

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
0x48: Call2 0x30e

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
0x56: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x90

0x5a: Pop(1)
0x5b: Push((int) 526985)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x42f

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 526986)
0x66: Push((int) 29458)
0x67: Push((int) 28278)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 526991)
0x6b: Push((int) -1)
0x6c: Push((int) 28283)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0x48a

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x3aa

0x7e: Pop(1)
0x7f: GOTO 0x76

0x80: GOTO 0x8f

0x81: Push("all")
0x82: Push("idle")
0x83: @ PlayAnimation(Stack[-2], Stack[-1])
0x84: Pop(2)
0x85: @ WaitForAnimEnd()
0x86: Pop(0)
0x87: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: GOTO 0x8f

0x8a: Push("all")
0x8b: Push("idle")
0x8c: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: GOTO 0x85

0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: PushEmpty(bool)
0x92: Call2 0x48a

0x93: Pop(0)
0x94: Pop(1); Push((bool) Stack[-1] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Return(); Pop(0)

0x97: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(0)

0x9a: PushEmpty(string, bool)
0x9b: Stack[-2] = Stack[-3]
0x9c: Push("")
0x9d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9f: Stack[-1] = (bool) 0
0xa0: GOTO 0xa2

0xa1: Stack[-1] = (bool) 1
0xa2: Call2 0x3ba

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x3d8

0xab: Pop(0)
0xac: Push((int) 28282)
0xad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xaf: PushEmpty(object, object)
0xb0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2: Call2 0x421

0xb3: Pop(2)
0xb4: Push((int) 28277)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Neutral"
0xb9: Call2 0x90

0xba: Pop(1)
0xbb: Push((int) 526985)
0xbc: @@ SetMessage(Stack[-1])
0xbd: Pop(1)
0xbe: @@ ClearReplies()
0xbf: Pop(0)
0xc0: PushEmpty(bool, object)
0xc1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc2: Call2 0x42f

0xc3: Pop(1)
0xc4: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc5: Push((int) 526986)
0xc6: Push((int) 29458)
0xc7: Push((int) 28278)
0xc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9: Pop(3)
0xca: Push((int) 526991)
0xcb: Push((int) -1)
0xcc: Push((int) 28283)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Return(); Pop(0)

0xd0: Push((int) 29458)
0xd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Agression"
0xd5: Call2 0x90

0xd6: Pop(1)
0xd7: Push((int) 528112)
0xd8: @@ SetMessage(Stack[-1])
0xd9: Pop(1)
0xda: @@ ClearReplies()
0xdb: Pop(0)
0xdc: Push((int) 528113)
0xdd: Push((int) 29460)
0xde: Push((int) 29459)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Push((int) 29460)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Agression"
0xe7: Call2 0x90

0xe8: Pop(1)
0xe9: Push((int) 528114)
0xea: @@ SetMessage(Stack[-1])
0xeb: Pop(1)
0xec: @@ ClearReplies()
0xed: Pop(0)
0xee: Push((int) 528115)
0xef: Push((int) 28279)
0xf0: Push((int) 29461)
0xf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2: Pop(3)
0xf3: Push((int) 528116)
0xf4: Push((int) 29464)
0xf5: Push((int) 29462)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: Push((int) 528117)
0xf9: Push((int) 29464)
0xfa: Push((int) 29463)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: Return(); Pop(0)

0xfe: Push((int) 29464)
0xff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x100: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x101: PushEmpty(string)
0x102: Stack[-1] = "Doubt"
0x103: Call2 0x90

0x104: Pop(1)
0x105: Push((int) 528118)
0x106: @@ SetMessage(Stack[-1])
0x107: Pop(1)
0x108: @@ ClearReplies()
0x109: Pop(0)
0x10a: Push((int) 528119)
0x10b: Push((int) 28279)
0x10c: Push((int) 29466)
0x10d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e: Pop(3)
0x10f: Return(); Pop(0)

0x110: Push((int) 28279)
0x111: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x113: PushEmpty(string)
0x114: Stack[-1] = "Agression"
0x115: Call2 0x90

0x116: Pop(1)
0x117: Push((int) 526987)
0x118: @@ SetMessage(Stack[-1])
0x119: Pop(1)
0x11a: @@ ClearReplies()
0x11b: Pop(0)
0x11c: Push((int) 528120)
0x11d: Push((int) 29468)
0x11e: Push((int) 29467)
0x11f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x120: Pop(3)
0x121: Return(); Pop(0)

0x122: Push((int) 29468)
0x123: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x125: PushEmpty(string)
0x126: Stack[-1] = "Doubt"
0x127: Call2 0x90

0x128: Pop(1)
0x129: Push((int) 528121)
0x12a: @@ SetMessage(Stack[-1])
0x12b: Pop(1)
0x12c: @@ ClearReplies()
0x12d: Pop(0)
0x12e: Push((int) 528122)
0x12f: Push((int) 29470)
0x130: Push((int) 29469)
0x131: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132: Pop(3)
0x133: Push((int) 528124)
0x134: Push((int) 29472)
0x135: Push((int) 29471)
0x136: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x137: Pop(3)
0x138: Return(); Pop(0)

0x139: Push((int) 29472)
0x13a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x13c: PushEmpty(string)
0x13d: Stack[-1] = "Neutral"
0x13e: Call2 0x90

0x13f: Pop(1)
0x140: Push((int) 528125)
0x141: @@ SetMessage(Stack[-1])
0x142: Pop(1)
0x143: @@ ClearReplies()
0x144: Pop(0)
0x145: Push((int) 528126)
0x146: Push((int) 28281)
0x147: Push((int) 29473)
0x148: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x149: Pop(3)
0x14a: Return(); Pop(0)

0x14b: Push((int) 29470)
0x14c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14d: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x14e: PushEmpty(string)
0x14f: Stack[-1] = "Doubt"
0x150: Call2 0x90

0x151: Pop(1)
0x152: Push((int) 528123)
0x153: @@ SetMessage(Stack[-1])
0x154: Pop(1)
0x155: @@ ClearReplies()
0x156: Pop(0)
0x157: Push((int) 526988)
0x158: Push((int) 28281)
0x159: Push((int) 28280)
0x15a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15b: Pop(3)
0x15c: Return(); Pop(0)

0x15d: Push((int) 28281)
0x15e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x160: PushEmpty(string)
0x161: Stack[-1] = "Sorrow"
0x162: Call2 0x90

0x163: Pop(1)
0x164: Push((int) 526989)
0x165: @@ SetMessage(Stack[-1])
0x166: Pop(1)
0x167: @@ ClearReplies()
0x168: Pop(0)
0x169: Push((int) 526990)
0x16a: Push((int) -1)
0x16b: Push((int) 28282)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Return(); Pop(0)

0x16f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x170: PushEmpty(bool)
0x171: Call2 0x48a

0x172: Pop(0)
0x173: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x174: @ lshStopAnimation()
0x175: Pop(0)
0x176: GOTO 0x179

0x177: @ StopAnimation()
0x178: Pop(0)
0x179: Return(); Pop(0)

0x17a: GOTO 0xa7

0x17b: Return(); Pop(0)

0x17c: PushEmpty()
0x17d: PushEmpty(int, object)
0x17e: Stack[-1] = Stack[-3]
0x17f: Push(-2, 1); TaskCall(0)
0x180: Call2 0x0

0x181: Pop(-2, 1); TaskReturn
0x182: Pop(2)
0x183: Return(); Pop(0)

0x184: PushEmpty()
0x185: Call2 0x1ad

0x186: Pop(0)
0x187: Return(); Pop(0)

0x188: PushEmpty(bool, bool)
0x189: Push("cleanup")
0x18a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x18c: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x18d: @ IsLoaded(Stack[-1])
0x18e: Pop(0)
0x18f: Pop(0); Push((bool) Stack[-1] == 0)
0x190: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x191: PushEmpty(object)
0x192: Call2 0x3df

0x193: Pop(0)
0x194: @ RemoveActor(Stack[-1])
0x195: Pop(1)
0x196: GOTO 0x19b

0x197: Push("restore")
0x198: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x199: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x19a: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x19b: Return(); Pop(2)

0x19c: Push( Stack[1 + Tasks[-1].StackPointer] )
0x19d: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x19e: PushEmpty(object)
0x19f: Call2 0x3df

0x1a0: Pop(0)
0x1a1: @ RemoveActor(Stack[-1])
0x1a2: Pop(1)
0x1a3: @ Hold()
0x1a4: Pop(0)
0x1a5: PushEmpty()
0x1a6: Call2 0x218

0x1a7: Pop(0)
0x1a8: Return(); Pop(0)

0x1a9: PushEmpty()
0x1aa: Call2 0x227

0x1ab: Pop(0)
0x1ac: Return(); Pop(0)

0x1ad: PushEmpty(bool)
0x1ae: Call2 0x2c4

0x1af: Pop(0)
0x1b0: Pop(1); Push((bool) Stack[-1] == 0)
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b2: @ Hold()
0x1b3: Pop(0)
0x1b4: @ GetDirection(Stack[-0])
0x1b5: Pop(0)
0x1b6: PushEmpty()
0x1b7: Call2 0x25d

0x1b8: Pop(0)
0x1b9: GOTO 0x1b6

0x1ba: Return(); Pop(0)

0x1bb: PushEmpty(object, object)
0x1bc: Push("player")
0x1bd: @ FindActor(Stack[-2], Stack[-1])
0x1be: Pop(1)
0x1bf: Pop(0); Push((bool) Stack[-1] == 0)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c1: Stack[-3] = (bool) 0
0x1c2: Return(); Pop(2)

0x1c3: PushEmpty(bool, object)
0x1c4: Stack[-1] = Stack[-3]
0x1c5: Call2 0x2bb

0x1c6: Stack[-5] = Stack[-2]
0x1c7: Pop(2)
0x1c8: Return(); Pop(2)

0x1c9: Stack[-1] = 0
0x1ca: Push(CvectorIndex(Stack[-0], 0))
0x1cb: Push(CvectorIndex(Stack[-0], 2))
0x1cc: @ RotateAsync(Stack[-2], Stack[-1])
0x1cd: Pop(2)
0x1ce: Return(); Pop(0)

0x1cf: PushEmpty(object, bool, object, bool)
0x1d0: Push("player")
0x1d1: @ FindActor(Stack[-3], Stack[-1])
0x1d2: Pop(1)
0x1d3: Pop(0); Push((bool) Stack[-2] == 0)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d5: Stack[-5] = (bool) 0
0x1d6: Return(); Pop(4)

0x1d7: PushEmpty(float, object)
0x1d8: Stack[-1] = Stack[-4]
0x1d9: Call2 0x2a9

0x1da: Pop(1)
0x1db: Push((float)90000.0)
0x1dc: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1de: Stack[-5] = (bool) 0
0x1df: Return(); Pop(4)

0x1e0: @ CanSee(Stack[-1], Stack[-2])
0x1e1: Pop(0)
0x1e2: Stack[-5] = Stack[-1]
0x1e3: Return(); Pop(4)

0x1e4: Stack[-2] = 0
0x1e5: PushEmpty(float, float)
0x1e6: Push((int) 8)
0x1e7: Push((int) 16)
0x1e8: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1e9: Pop(2)
0x1ea: Push((int) 10)
0x1eb: @ SetTimer(Stack[-1], Stack[-2])
0x1ec: Pop(1)
0x1ed: Return(); Pop(2)

0x1ee: Push((int) 10)
0x1ef: @ KillTimer(Stack[-1])
0x1f0: Pop(1)
0x1f1: Return(); Pop(0)

0x1f2: PushEmpty()
0x1f3: Push((int) 10)
0x1f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x1f6: PushEmpty()
0x1f7: Call2 0x1ee

0x1f8: Pop(0)
0x1f9: PushEmpty(bool)
0x1fa: Stack[-1] = (bool) 0
0x1fb: PushEmpty(bool)
0x1fc: Call2 0x2c4

0x1fd: Pop(0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1ff: PushEmpty(bool)
0x200: Call2 0x1cf

0x201: Pop(0)
0x202: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x203: Stack[-1] = (bool) 1
0x204: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x205: PushEmpty(bool)
0x206: Call2 0x1bb

0x207: Pop(0)
0x208: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x209: PushEmpty(bool, object)
0x20a: PushEmpty(object)
0x20b: Call2 0x3df

0x20c: Stack[-2] = Stack[-1]
0x20d: Pop(1)
0x20e: Call2 0x35a

0x20f: Pop(2)
0x210: GOTO 0x217

0x211: PushEmpty()
0x212: Call2 0x1ca

0x213: Pop(0)
0x214: PushEmpty()
0x215: Call2 0x1e5

0x216: Pop(0)
0x217: Return(); Pop(0)

0x218: PushEmpty()
0x219: Call2 0x2a4

0x21a: Pop(0)
0x21b: PushEmpty()
0x21c: Call2 0x1ee

0x21d: Pop(0)
0x21e: @ lshStopSpeech()
0x21f: Pop(0)
0x220: @ lshStopAnimation()
0x221: Pop(0)
0x222: @ StopAsync()
0x223: Pop(0)
0x224: @ Hold()
0x225: Pop(0)
0x226: Return(); Pop(0)

0x227: @ StopGroup0()
0x228: Pop(0)
0x229: PushEmpty()
0x22a: Call2 0x1ee

0x22b: Pop(0)
0x22c: PushEmpty(string)
0x22d: Stack[-1] = "Neutral"
0x22e: Call2 0x3aa

0x22f: Pop(1)
0x230: PushEmpty()
0x231: Call2 0x1e5

0x232: Pop(0)
0x233: Return(); Pop(0)

0x234: PushEmpty()
0x235: Push(Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x237: PushEmpty()
0x238: Call2 0x1e5

0x239: Pop(0)
0x23a: GOTO 0x23f

0x23b: PushEmpty(string)
0x23c: Stack[-1] = "Neutral"
0x23d: Call2 0x3aa

0x23e: Pop(1)
0x23f: Return(); Pop(0)

0x240: PushEmpty(bool, bool)
0x241: @ IsOverrideActive(Stack[-1])
0x242: Pop(0)
0x243: Pop(0); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x245: EventDisable(0)
0x246: PushEmpty()
0x247: Call2 0x2a4

0x248: Pop(0)
0x249: PushEmpty(bool, object)
0x24a: Stack[-1] = Stack[-5]
0x24b: Call2 0x2bb

0x24c: Pop(2)
0x24d: EventEnable(0)
0x24e: PushEmpty(object)
0x24f: Stack[-1] = Stack[-4]
0x250: Call2 0x17c

0x251: Pop(1)
0x252: PushEmpty(string)
0x253: Stack[-1] = "Neutral"
0x254: Call2 0x3aa

0x255: Pop(1)
0x256: PushEmpty()
0x257: Call2 0x1ee

0x258: Pop(0)
0x259: PushEmpty()
0x25a: Call2 0x1e5

0x25b: Pop(0)
0x25c: Return(); Pop(2)

0x25d: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x25e: @ WaitForAnimEnd()
0x25f: Pop(0)
0x260: PushEmpty(bool)
0x261: Call2 0x2c4

0x262: Pop(0)
0x263: Pop(1); Push((bool) Stack[-1] == 0)
0x264: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x265: Return(); Pop(12)

0x266: PushEmpty(int)
0x267: Call2 0x410

0x268: Stack[-7] = Stack[-1]
0x269: Pop(1)
0x26a: Stack[-5] = (int) 0
0x26b: PushEmpty(bool)
0x26c: Stack[-1] = (bool) 0
0x26d: Push((int) 5)
0x26e: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x270: PushEmpty(bool)
0x271: Call2 0x2c4

0x272: Pop(0)
0x273: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x274: Stack[-1] = (bool) 1
0x275: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x276: Pop(0); Push((bool) Stack[-6] == 0)
0x277: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x278: Push((int) 3)
0x279: @ Sleep(Stack[-1], Stack[-5])
0x27a: Pop(1)
0x27b: Pop(0); Push((bool) Stack[-4] == 0)
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: GOTO 0x29f

0x27e: GOTO 0x294

0x27f: @ irand(Stack[-3], Stack[-6])
0x280: Pop(0)
0x281: Push((int) 5)
0x282: @ irand(Stack[-3], Stack[-1])
0x283: Pop(1)
0x284: Push((int) 0)
0x285: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: Stack[-3] = (int) 0
0x288: Push("all")
0x289: PushEmpty(string, int)
0x28a: Stack[-1] = Stack[-6]
0x28b: Call2 0x409

0x28c: Pop(1)
0x28d: @ PlayAnimation(Stack[-2], Stack[-1])
0x28e: Pop(2)
0x28f: @ WaitForAnimEnd(Stack[-1])
0x290: Pop(0)
0x291: Pop(0); Push((bool) Stack[-1] == 0)
0x292: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x293: GOTO 0x29f

0x294: PushEmpty(bool)
0x295: Call2 0x2a2

0x296: Pop(0)
0x297: Pop(1); Push((bool) Stack[-1] == 0)
0x298: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x299: GOTO 0x29f

0x29a: @ ResetAAS()
0x29b: Pop(0)
0x29c: Push((int) 1)
0x29d: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x29e: GOTO 0x26b

0x29f: @ ResetAAS()
0x2a0: Pop(0)
0x2a1: Return(); Pop(12)

0x2a2: Stack[-1] = (bool) 1
0x2a3: Return(); Pop(0)

0x2a4: @ StopAnimation()
0x2a5: Pop(0)
0x2a6: @ StopGroup0()
0x2a7: Pop(0)
0x2a8: Return(); Pop(0)

0x2a9: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2aa: @ GetPosition(Stack[-3])
0x2ab: Pop(0)
0x2ac: @@ GetPosition(Stack[-2])
0x2ad: Pop(0)
0x2ae: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2af: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2b0: Return(); Pop(6)

0x2b1: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2b2: @ GetPosition(Stack[-3])
0x2b3: Pop(0)
0x2b4: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2b5: Push(CvectorIndex(Stack[-2], 0))
0x2b6: Push(CvectorIndex(Stack[-3], 2))
0x2b7: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2b8: Pop(2)
0x2b9: Stack[-8] = Stack[-1]
0x2ba: Return(); Pop(6)

0x2bb: PushEmpty(cvector, cvector)
0x2bc: @@ GetPosition(Stack[-1])
0x2bd: Pop(0)
0x2be: PushEmpty(bool, cvector)
0x2bf: Stack[-1] = Stack[-3]
0x2c0: Call2 0x2b1

0x2c1: Stack[-6] = Stack[-2]
0x2c2: Pop(2)
0x2c3: Return(); Pop(2)

0x2c4: PushEmpty(bool, bool)
0x2c5: @ IsLoaded(Stack[-1])
0x2c6: Pop(0)
0x2c7: Stack[-3] = Stack[-1]
0x2c8: Return(); Pop(2)

0x2c9: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2ca: @@ GetPosition(Stack[-8])
0x2cb: Pop(0)
0x2cc: @@ GetEyesHeight(Stack[-9])
0x2cd: Pop(0)
0x2ce: Push(CvectorIndex(Stack[-8], 1))
0x2cf: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2d0: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2d1: @ GetPosition(Stack[-7])
0x2d2: Pop(0)
0x2d3: @ GetEyesHeight(Stack[-9])
0x2d4: Pop(0)
0x2d5: Push(CvectorIndex(Stack[-7], 1))
0x2d6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2d7: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2d8: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2d9: Push(CvectorIndex(Stack[-6], 1))
0x2da: Stack[-1] = (int) 0
0x2db: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2dc: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2dd: Pop(1); Push(Sqrt(Stack[-1]))
0x2de: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2df: Stack[-5] = -Stack[-6]; Pop(0);
0x2e0: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2e1: PushEmpty(cvector, cvector)
0x2e2: Push(CVector(0.0, 1.0, 0.0))
0x2e3: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2e4: Call2 0x3e5

0x2e5: Pop(1)
0x2e6: Push((int) 25)
0x2e7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2e8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2e9: Push(CVector(0.0, 10.0, 0.0))
0x2ea: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2eb: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2ec: @ IsOverrideActive(Stack[-2])
0x2ed: Pop(0)
0x2ee: Push(Stack[-2])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f0: Stack[-21] = (bool) 0
0x2f1: Return(); Pop(18)

0x2f2: @ StopWorld()
0x2f3: Pop(0)
0x2f4: Push((bool) 1)
0x2f5: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2f6: Pop(1)
0x2f7: Push(CvectorIndex(Stack[-4], 0))
0x2f8: Push(CvectorIndex(Stack[-5], 2))
0x2f9: @ Rotate(Stack[-2], Stack[-1])
0x2fa: Pop(2)
0x2fb: PushEmpty(bool)
0x2fc: Call2 0x48a

0x2fd: Pop(0)
0x2fe: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2ff: GOTO 0x308

0x300: Push("head")
0x301: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x302: Pop(1)
0x303: Push(Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x305: Push("head")
0x306: @ LookAsyncCamera(Stack[-1])
0x307: Pop(1)
0x308: @ CameraWaitForPlayFinish()
0x309: Pop(0)
0x30a: @ ResumeWorld()
0x30b: Pop(0)
0x30c: Stack[-21] = (bool) 1
0x30d: Return(); Pop(18)

0x30e: PushEmpty(bool, bool)
0x30f: Push((bool) 1)
0x310: @ CameraSwitchToNormal(Stack[-1])
0x311: Pop(1)
0x312: PushEmpty(bool)
0x313: Call2 0x48a

0x314: Pop(0)
0x315: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x316: GOTO 0x31f

0x317: Push("head")
0x318: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x319: Pop(1)
0x31a: Push(Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31c: Push("head")
0x31d: @ UnlookAsync(Stack[-1])
0x31e: Pop(1)
0x31f: Return(); Pop(2)

0x320: PushEmpty(int, int, int, int)
0x321: Push("voice_common")
0x322: @ GetVariable(Stack[-1], Stack[-3])
0x323: Pop(1)
0x324: Push(Stack[-2])
0x325: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x326: PushEmpty(bool, object)
0x327: Stack[-1] = Stack[-7]
0x328: Call2 0x35a

0x329: Pop(1)
0x32a: Pop(1); Push((bool) Stack[-1] == 0)
0x32b: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x32c: PushEmpty(bool, object)
0x32d: Stack[-1] = Stack[-7]
0x32e: Call2 0x37f

0x32f: Pop(1)
0x330: Pop(1); Push((bool) Stack[-1] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x332: Stack[-6] = (bool) 0
0x333: Return(); Pop(4)

0x334: Push((int) 2)
0x335: @ irand(Stack[-2], Stack[-1])
0x336: Pop(1)
0x337: Push(Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x339: Push("voice_common")
0x33a: Push((int) 1)
0x33b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x33c: Push((int) 3)
0x33d: Pop(2); Push(Stack[-2] % Stack[-1]);
0x33e: @ SetVariable(Stack[-2], Stack[-1])
0x33f: Pop(2)
0x340: GOTO 0x345

0x341: Push("voice_common")
0x342: Push((int) 0)
0x343: @ SetVariable(Stack[-2], Stack[-1])
0x344: Pop(2)
0x345: GOTO 0x358

0x346: PushEmpty(bool, object)
0x347: Stack[-1] = Stack[-7]
0x348: Call2 0x37f

0x349: Pop(1)
0x34a: Pop(1); Push((bool) Stack[-1] == 0)
0x34b: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x34c: PushEmpty(bool, object)
0x34d: Stack[-1] = Stack[-7]
0x34e: Call2 0x35a

0x34f: Pop(1)
0x350: Pop(1); Push((bool) Stack[-1] == 0)
0x351: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x352: Stack[-6] = (bool) 0
0x353: Return(); Pop(4)

0x354: Push("voice_common")
0x355: Push((int) 1)
0x356: @ SetVariable(Stack[-2], Stack[-1])
0x357: Pop(2)
0x358: Stack[-6] = (bool) 1
0x359: Return(); Pop(4)

0x35a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x35b: Stack[-5] = "c"
0x35c: Stack[-4] = (int) 0
0x35d: Push((int) 1)
0x35e: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x35f: Push((int) 1)
0x360: Pop(1); Push(Stack[-5] + Stack[-1]);
0x361: Pop(1); Push(Stack[-6] + Stack[-1]);
0x362: @@ HasProperty(Stack[-1], Stack[-4])
0x363: Pop(1)
0x364: Pop(0); Push((bool) Stack[-3] == 0)
0x365: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x366: GOTO 0x36a

0x367: Push((int) 1)
0x368: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x369: GOTO 0x35d

0x36a: Pop(0); Push((bool) Stack[-4] == 0)
0x36b: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36c: Stack[-12] = (bool) 0
0x36d: Return(); Pop(10)

0x36e: Stack[-2] = (int) 0
0x36f: Push((int) 1)
0x370: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x372: @ irand(Stack[-2], Stack[-4])
0x373: Pop(0)
0x374: Push((int) 1)
0x375: Pop(1); Push(Stack[-3] + Stack[-1]);
0x376: Pop(1); Push(Stack[-6] + Stack[-1]);
0x377: @@ GetProperty(Stack[-1], Stack[-2])
0x378: Pop(1)
0x379: PushEmpty(bool, string)
0x37a: Stack[-1] = Stack[-3]
0x37b: Call2 0x3c9

0x37c: Stack[-14] = Stack[-2]
0x37d: Pop(2)
0x37e: Return(); Pop(10)

0x37f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x380: Push("d")
0x381: PushEmpty(int)
0x382: Call2 0x400

0x383: Pop(0)
0x384: Pop(2); Push(Stack[-2] + Stack[-1]);
0x385: Push("m")
0x386: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x387: Stack[-4] = (int) 0
0x388: Push((int) 1)
0x389: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x38a: Push((int) 1)
0x38b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x38c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x38d: @@ HasProperty(Stack[-1], Stack[-4])
0x38e: Pop(1)
0x38f: Pop(0); Push((bool) Stack[-3] == 0)
0x390: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x391: GOTO 0x395

0x392: Push((int) 1)
0x393: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x394: GOTO 0x388

0x395: Pop(0); Push((bool) Stack[-4] == 0)
0x396: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x397: Stack[-12] = (bool) 0
0x398: Return(); Pop(10)

0x399: Stack[-2] = (int) 0
0x39a: Push((int) 1)
0x39b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x39c: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39d: @ irand(Stack[-2], Stack[-4])
0x39e: Pop(0)
0x39f: Push((int) 1)
0x3a0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3a1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3a2: @@ GetProperty(Stack[-1], Stack[-2])
0x3a3: Pop(1)
0x3a4: PushEmpty(bool, string)
0x3a5: Stack[-1] = Stack[-3]
0x3a6: Call2 0x3c9

0x3a7: Stack[-14] = Stack[-2]
0x3a8: Pop(2)
0x3a9: Return(); Pop(10)

0x3aa: PushEmpty(bool, float, float, bool, float, float)
0x3ab: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3ac: Pop(0)
0x3ad: Push(Stack[-3])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3af: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3b0: Pop(0)
0x3b1: Push((bool) 0)
0x3b2: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3b3: Pop(1)
0x3b4: GOTO 0x3b9

0x3b5: Push("Can't find lsh animation : ")
0x3b6: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3b7: @ Trace(Stack[-1])
0x3b8: Pop(1)
0x3b9: Return(); Pop(6)

0x3ba: PushEmpty(bool, float, float, bool, float, float)
0x3bb: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3bc: Pop(0)
0x3bd: Push(Stack[-3])
0x3be: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3bf: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3c0: Pop(0)
0x3c1: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3c2: Pop(0)
0x3c3: GOTO 0x3c8

0x3c4: Push("Can't find lsh animation : ")
0x3c5: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3c6: @ Trace(Stack[-1])
0x3c7: Pop(1)
0x3c8: Return(); Pop(6)

0x3c9: PushEmpty(bool, bool)
0x3ca: PushEmpty(bool)
0x3cb: Call2 0x48a

0x3cc: Pop(0)
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3ce: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3cf: Pop(0)
0x3d0: Push(Stack[-1])
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d2: @ lshPlaySpeech(Stack[-3])
0x3d3: Pop(0)
0x3d4: Stack[-4] = (bool) 1
0x3d5: Return(); Pop(2)

0x3d6: Stack[-4] = (bool) 0
0x3d7: Return(); Pop(2)

0x3d8: PushEmpty(bool)
0x3d9: Call2 0x48a

0x3da: Pop(0)
0x3db: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3dc: @ lshStopSpeech()
0x3dd: Pop(0)
0x3de: Return(); Pop(0)

0x3df: PushEmpty(object, object)
0x3e0: @ self(Stack[-1])
0x3e1: Pop(0)
0x3e2: Stack[-3] = Stack[-1]
0x3e3: Return(); Pop(2)

0x3e4: Stack[-1] = 0
0x3e5: PushEmpty(float, float)
0x3e6: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3e7: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3e8: Push((float)0.0)
0x3e9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3eb: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3ec: Return(); Pop(2)

0x3ed: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3ee: Return(); Pop(2)

0x3ef: PushEmpty(int, int)
0x3f0: @ GetVariable(Stack[-3], Stack[-1])
0x3f1: Pop(0)
0x3f2: Stack[-4] = Stack[-1]
0x3f3: Return(); Pop(2)

0x3f4: PushEmpty(object, object)
0x3f5: @ FindActor(Stack[-1], Stack[-4])
0x3f6: Pop(0)
0x3f7: Pop(0); Push((bool) Stack[-1] == 0)
0x3f8: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3f9: Stack[-5] = (bool) 0
0x3fa: Return(); Pop(2)

0x3fb: @ Trigger(Stack[-1], Stack[-3])
0x3fc: Pop(0)
0x3fd: Stack[-5] = (bool) 1
0x3fe: Return(); Pop(2)

0x3ff: Stack[-1] = 0
0x400: PushEmpty(float, float)
0x401: @ GetGameTime(Stack[-1])
0x402: Pop(0)
0x403: Push((int) 1)
0x404: PushEmpty(int)
0x405: Push((int) 24)
0x406: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x407: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x408: Return(); Pop(2)

0x409: PushEmpty(string, string)
0x40a: Stack[-1] = "idle"
0x40b: Push(Stack[-3])
0x40c: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40d: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x40e: Stack[-4] = Stack[-1]
0x40f: Return(); Pop(2)

0x410: PushEmpty(int, bool, int, bool)
0x411: Stack[-2] = (int) 0
0x412: Push("all")
0x413: PushEmpty(string, int)
0x414: Stack[-1] = Stack[-5]
0x415: Call2 0x409

0x416: Pop(1)
0x417: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x418: Pop(2)
0x419: Pop(0); Push((bool) Stack[-1] == 0)
0x41a: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x41b: GOTO 0x41f

0x41c: Push((int) 1)
0x41d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x41e: GOTO 0x412

0x41f: Stack[-5] = Stack[-2]
0x420: Return(); Pop(4)

0x421: PushEmpty()
0x422: Push("k10q01")
0x423: Push((int) 7)
0x424: @ SetVariable(Stack[-2], Stack[-1])
0x425: Pop(2)
0x426: PushEmpty()
0x427: Call2 0x43b

0x428: Pop(0)
0x429: PushEmpty(bool, string, string)
0x42a: Stack[-2] = "quest_k10_01"
0x42b: Stack[-1] = "place_prophet"
0x42c: Call2 0x3f4

0x42d: Pop(3)
0x42e: Return(); Pop(0)

0x42f: PushEmpty()
0x430: PushEmpty(int, string)
0x431: Stack[-1] = "k10q01"
0x432: Call2 0x3ef

0x433: Pop(1)
0x434: Push((int) 6)
0x435: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x436: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x437: Stack[-2] = (bool) 1
0x438: Return(); Pop(0)

0x439: Stack[-2] = (bool) 0
0x43a: Return(); Pop(0)

0x43b: PushEmpty(object, object)
0x43c: Push((int) 454)
0x43d: Push((int) 1)
0x43e: Push((int) 527012)
0x43f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x440: Pop(3)
0x441: PushEmpty(bool, object, int)
0x442: Stack[-2] = Stack[-4]
0x443: Stack[-1] = (int) 447
0x444: Call2 0x455

0x445: Pop(3)
0x446: Return(); Pop(2)

0x447: Stack[-1] = 0
0x448: PushEmpty(object, object)
0x449: @ GetDiaryRoot(Stack[-1])
0x44a: Pop(0)
0x44b: Pop(0); Push((bool) Stack[-1] == 0)
0x44c: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x44d: Push("Can't retrieve diary root")
0x44e: @ Trace(Stack[-1])
0x44f: Pop(1)
0x450: Stack[-3] = (bool) 0
0x451: Return(); Pop(2)

0x452: Stack[-3] = Stack[-1]
0x453: Return(); Pop(2)

0x454: Stack[-1] = 0
0x455: PushEmpty(object, object, int, object, object, int)
0x456: PushEmpty(object)
0x457: Call2 0x448

0x458: Stack[-4] = Stack[-1]
0x459: Pop(1)
0x45a: @@ Find(Stack[-7], Stack[-2])
0x45b: Pop(0)
0x45c: Pop(0); Push((bool) Stack[-2] == 0)
0x45d: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x45e: Push("Can't find diary parent with id: ")
0x45f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x460: @ Trace(Stack[-1])
0x461: Pop(1)
0x462: Stack[-9] = (bool) 0
0x463: Return(); Pop(6)

0x464: @@ AddChild(Stack[-8])
0x465: Pop(0)
0x466: Push((int) 7)
0x467: @ SendWorldWndMessage(Stack[-1])
0x468: Pop(1)
0x469: @@ GetCategory(Stack[-1])
0x46a: Pop(0)
0x46b: @ SetDiarySection(Stack[-1])
0x46c: Pop(0)
0x46d: Stack[-9] = (bool) 0
0x46e: Return(); Pop(6)

0x46f: Stack[-2] = 0
0x470: Stack[-3] = 0
0x471: PushEmpty(int, int)
0x472: Push("branch")
0x473: @ GetVariable(Stack[-1], Stack[-2])
0x474: Pop(1)
0x475: Push((int) 0)
0x476: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x477: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x478: Stack[-3] = (int) 1
0x479: Return(); Pop(2)

0x47a: GOTO 0x480

0x47b: Push((int) 1)
0x47c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47d: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47e: Stack[-3] = (int) 2
0x47f: Return(); Pop(2)

0x480: Stack[-3] = (int) 3
0x481: Return(); Pop(2)

0x482: Stack[-1] = (int) 515592
0x483: Return(); Pop(0)

0x484: Stack[-1] = (int) 511961
0x485: Return(); Pop(0)

0x486: Stack[-1] = "ui/NPC_Burah.png"
0x487: Return(); Pop(0)

0x488: Stack[-1] = "ui/NPC_Burah_b.png"
0x489: Return(); Pop(0)

0x48a: Stack[-1] = (bool) 1
0x48b: Return(); Pop(0)

