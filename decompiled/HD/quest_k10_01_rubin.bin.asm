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
	Confusion
	Warning
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
	quest_k10_01
	completed
	K_Mission4
	k10q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Remove
	branch
	ui/NPC_Rubin.png
	ui/NPC_Rubin_b.png

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

RunOp = 0x1a2
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb5 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1a6 Vars = (string)
		EVENT_6 Op = 0x1ba Vars = ()
		EVENT_5 Op = 0x1c7 Vars = ()
		EVENT_7 Op = 0x210 Vars = (int)
		EVENT_45 Op = 0x252 Vars = (bool)
		EVENT_0 Op = 0x25e Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2e7

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4d8

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4d6

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x4da

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x4dc

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4c5

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
0x31: Call2 0x3fd

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x33e

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
0x48: Call2 0x32c

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
0x56: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x465

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral"
0x5e: Call2 0x9f

0x5f: Pop(1)
0x60: Push((int) 526999)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 527000)
0x66: Push((int) 29484)
0x67: Push((int) 28292)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 528140)
0x6b: Push((int) 29484)
0x6c: Push((int) 29490)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x81

0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral"
0x72: Call2 0x9f

0x73: Pop(1)
0x74: Push((int) 527003)
0x75: @@ SetMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ ClearReplies()
0x78: Pop(0)
0x79: Push((int) 527004)
0x7a: Push((int) -1)
0x7b: Push((int) 28296)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: GOTO 0x81

0x7f: Return(); Pop(0)

0x80: GOTO 0x55

0x81: PushEmpty(bool)
0x82: Call2 0x4de

0x83: Pop(0)
0x84: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x85: @ lshWaitForAnimEnd()
0x86: Pop(0)
0x87: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: GOTO 0x8f

0x8a: PushEmpty(string)
0x8b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8c: Call2 0x3c8

0x8d: Pop(1)
0x8e: GOTO 0x85

0x8f: GOTO 0x9e

0x90: Push("all")
0x91: Push("idle")
0x92: @ PlayAnimation(Stack[-2], Stack[-1])
0x93: Pop(2)
0x94: @ WaitForAnimEnd()
0x95: Pop(0)
0x96: Push( Stack[3 + Tasks[-1].StackPointer] )
0x97: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x98: GOTO 0x9e

0x99: Push("all")
0x9a: Push("idle")
0x9b: @ PlayAnimation(Stack[-2], Stack[-1])
0x9c: Pop(2)
0x9d: GOTO 0x94

0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: PushEmpty(bool)
0xa1: Call2 0x4de

0xa2: Pop(0)
0xa3: Pop(1); Push((bool) Stack[-1] == 0)
0xa4: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa5: Return(); Pop(0)

0xa6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Return(); Pop(0)

0xa9: PushEmpty(string, bool)
0xaa: Stack[-2] = Stack[-3]
0xab: Push("")
0xac: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xad: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xae: Stack[-1] = (bool) 0
0xaf: GOTO 0xb1

0xb0: Stack[-1] = (bool) 1
0xb1: Call2 0x3d8

0xb2: Pop(2)
0xb3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb4: Return(); Pop(0)

0xb5: PushEmpty()
0xb6: Push((int) 1)
0xb7: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0xb8: PushEmpty()
0xb9: Call2 0x3f6

0xba: Pop(0)
0xbb: Push((int) 28294)
0xbc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xbe: PushEmpty(object, object)
0xbf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc1: Call2 0x43f

0xc2: Pop(2)
0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call2 0x449

0xc7: Pop(2)
0xc8: Push((int) 28291)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xcb: PushEmpty(bool, object)
0xcc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Call2 0x465

0xce: Pop(1)
0xcf: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xd0: PushEmpty(string)
0xd1: Stack[-1] = "Neutral"
0xd2: Call2 0x9f

0xd3: Pop(1)
0xd4: Push((int) 526999)
0xd5: @@ SetMessage(Stack[-1])
0xd6: Pop(1)
0xd7: @@ ClearReplies()
0xd8: Pop(0)
0xd9: Push((int) 527000)
0xda: Push((int) 29484)
0xdb: Push((int) 28292)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Push((int) 528140)
0xdf: Push((int) 29484)
0xe0: Push((int) 29490)
0xe1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2: Pop(3)
0xe3: Return(); Pop(0)

0xe4: PushEmpty(string)
0xe5: Stack[-1] = "Neutral"
0xe6: Call2 0x9f

0xe7: Pop(1)
0xe8: Push((int) 527003)
0xe9: @@ SetMessage(Stack[-1])
0xea: Pop(1)
0xeb: @@ ClearReplies()
0xec: Pop(0)
0xed: Push((int) 527004)
0xee: Push((int) -1)
0xef: Push((int) 28296)
0xf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: Return(); Pop(0)

0xf3: Push((int) 29484)
0xf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Confusion"
0xf8: Call2 0x9f

0xf9: Pop(1)
0xfa: Push((int) 528134)
0xfb: @@ SetMessage(Stack[-1])
0xfc: Pop(1)
0xfd: @@ ClearReplies()
0xfe: Pop(0)
0xff: Push((int) 528135)
0x100: Push((int) 29486)
0x101: Push((int) 29485)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Push((int) 528141)
0x105: Push((int) 29486)
0x106: Push((int) 29492)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Push((int) 29486)
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Confusion"
0x10f: Call2 0x9f

0x110: Pop(1)
0x111: Push((int) 528136)
0x112: @@ SetMessage(Stack[-1])
0x113: Pop(1)
0x114: @@ ClearReplies()
0x115: Pop(0)
0x116: Push((int) 528137)
0x117: Push((int) 29494)
0x118: Push((int) 29487)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Return(); Pop(0)

0x11c: Push((int) 29494)
0x11d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x11f: PushEmpty(string)
0x120: Stack[-1] = "Neutral"
0x121: Call2 0x9f

0x122: Pop(1)
0x123: Push((int) 528142)
0x124: @@ SetMessage(Stack[-1])
0x125: Pop(1)
0x126: @@ ClearReplies()
0x127: Pop(0)
0x128: Push((int) 528143)
0x129: Push((int) 29496)
0x12a: Push((int) 29495)
0x12b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c: Pop(3)
0x12d: Return(); Pop(0)

0x12e: Push((int) 29496)
0x12f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x131: PushEmpty(string)
0x132: Stack[-1] = "Neutral"
0x133: Call2 0x9f

0x134: Pop(1)
0x135: Push((int) 528144)
0x136: @@ SetMessage(Stack[-1])
0x137: Pop(1)
0x138: @@ ClearReplies()
0x139: Pop(0)
0x13a: Push((int) 528145)
0x13b: Push((int) 29488)
0x13c: Push((int) 29497)
0x13d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e: Pop(3)
0x13f: Return(); Pop(0)

0x140: Push((int) 29488)
0x141: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Warning"
0x145: Call2 0x9f

0x146: Pop(1)
0x147: Push((int) 528138)
0x148: @@ SetMessage(Stack[-1])
0x149: Pop(1)
0x14a: @@ ClearReplies()
0x14b: Pop(0)
0x14c: Push((int) 528146)
0x14d: Push((int) 29499)
0x14e: Push((int) 29498)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: Push((int) 541107)
0x152: Push((int) 43221)
0x153: Push((int) 43220)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: Return(); Pop(0)

0x157: Push((int) 43221)
0x158: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Confusion"
0x15c: Call2 0x9f

0x15d: Pop(1)
0x15e: Push((int) 541108)
0x15f: @@ SetMessage(Stack[-1])
0x160: Pop(1)
0x161: @@ ClearReplies()
0x162: Pop(0)
0x163: Push((int) 541109)
0x164: Push((int) 29499)
0x165: Push((int) 43222)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Return(); Pop(0)

0x169: Push((int) 29499)
0x16a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Warning"
0x16e: Call2 0x9f

0x16f: Pop(1)
0x170: Push((int) 528147)
0x171: @@ SetMessage(Stack[-1])
0x172: Pop(1)
0x173: @@ ClearReplies()
0x174: Pop(0)
0x175: Push((int) 528139)
0x176: Push((int) 28293)
0x177: Push((int) 29489)
0x178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: Return(); Pop(0)

0x17b: Push((int) 28293)
0x17c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x17e: PushEmpty(string)
0x17f: Stack[-1] = "Warning"
0x180: Call2 0x9f

0x181: Pop(1)
0x182: Push((int) 527001)
0x183: @@ SetMessage(Stack[-1])
0x184: Pop(1)
0x185: @@ ClearReplies()
0x186: Pop(0)
0x187: Push((int) 527002)
0x188: Push((int) -1)
0x189: Push((int) 28294)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: Return(); Pop(0)

0x18d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x18e: PushEmpty(bool)
0x18f: Call2 0x4de

0x190: Pop(0)
0x191: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x192: @ lshStopAnimation()
0x193: Pop(0)
0x194: GOTO 0x197

0x195: @ StopAnimation()
0x196: Pop(0)
0x197: Return(); Pop(0)

0x198: GOTO 0xb6

0x199: Return(); Pop(0)

0x19a: PushEmpty()
0x19b: PushEmpty(int, object)
0x19c: Stack[-1] = Stack[-3]
0x19d: Push(-2, 1); TaskCall(0)
0x19e: Call2 0x0

0x19f: Pop(-2, 1); TaskReturn
0x1a0: Pop(2)
0x1a1: Return(); Pop(0)

0x1a2: PushEmpty()
0x1a3: Call2 0x1cb

0x1a4: Pop(0)
0x1a5: Return(); Pop(0)

0x1a6: PushEmpty(bool, bool)
0x1a7: Push("cleanup")
0x1a8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1aa: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1ab: @ IsLoaded(Stack[-1])
0x1ac: Pop(0)
0x1ad: Pop(0); Push((bool) Stack[-1] == 0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1af: PushEmpty(object)
0x1b0: Call2 0x3fd

0x1b1: Pop(0)
0x1b2: @ RemoveActor(Stack[-1])
0x1b3: Pop(1)
0x1b4: GOTO 0x1b9

0x1b5: Push("restore")
0x1b6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1b9: Return(); Pop(2)

0x1ba: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1bc: PushEmpty(object)
0x1bd: Call2 0x3fd

0x1be: Pop(0)
0x1bf: @ RemoveActor(Stack[-1])
0x1c0: Pop(1)
0x1c1: @ Hold()
0x1c2: Pop(0)
0x1c3: PushEmpty()
0x1c4: Call2 0x236

0x1c5: Pop(0)
0x1c6: Return(); Pop(0)

0x1c7: PushEmpty()
0x1c8: Call2 0x245

0x1c9: Pop(0)
0x1ca: Return(); Pop(0)

0x1cb: PushEmpty(bool)
0x1cc: Call2 0x2e2

0x1cd: Pop(0)
0x1ce: Pop(1); Push((bool) Stack[-1] == 0)
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d0: @ Hold()
0x1d1: Pop(0)
0x1d2: @ GetDirection(Stack[-0])
0x1d3: Pop(0)
0x1d4: PushEmpty()
0x1d5: Call2 0x27b

0x1d6: Pop(0)
0x1d7: GOTO 0x1d4

0x1d8: Return(); Pop(0)

0x1d9: PushEmpty(object, object)
0x1da: Push("player")
0x1db: @ FindActor(Stack[-2], Stack[-1])
0x1dc: Pop(1)
0x1dd: Pop(0); Push((bool) Stack[-1] == 0)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1df: Stack[-3] = (bool) 0
0x1e0: Return(); Pop(2)

0x1e1: PushEmpty(bool, object)
0x1e2: Stack[-1] = Stack[-3]
0x1e3: Call2 0x2d9

0x1e4: Stack[-5] = Stack[-2]
0x1e5: Pop(2)
0x1e6: Return(); Pop(2)

0x1e7: Stack[-1] = 0
0x1e8: Push(CvectorIndex(Stack[-0], 0))
0x1e9: Push(CvectorIndex(Stack[-0], 2))
0x1ea: @ RotateAsync(Stack[-2], Stack[-1])
0x1eb: Pop(2)
0x1ec: Return(); Pop(0)

0x1ed: PushEmpty(object, bool, object, bool)
0x1ee: Push("player")
0x1ef: @ FindActor(Stack[-3], Stack[-1])
0x1f0: Pop(1)
0x1f1: Pop(0); Push((bool) Stack[-2] == 0)
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f3: Stack[-5] = (bool) 0
0x1f4: Return(); Pop(4)

0x1f5: PushEmpty(float, object)
0x1f6: Stack[-1] = Stack[-4]
0x1f7: Call2 0x2c7

0x1f8: Pop(1)
0x1f9: Push((float)90000.0)
0x1fa: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fc: Stack[-5] = (bool) 0
0x1fd: Return(); Pop(4)

0x1fe: @ CanSee(Stack[-1], Stack[-2])
0x1ff: Pop(0)
0x200: Stack[-5] = Stack[-1]
0x201: Return(); Pop(4)

0x202: Stack[-2] = 0
0x203: PushEmpty(float, float)
0x204: Push((int) 8)
0x205: Push((int) 16)
0x206: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x207: Pop(2)
0x208: Push((int) 10)
0x209: @ SetTimer(Stack[-1], Stack[-2])
0x20a: Pop(1)
0x20b: Return(); Pop(2)

0x20c: Push((int) 10)
0x20d: @ KillTimer(Stack[-1])
0x20e: Pop(1)
0x20f: Return(); Pop(0)

0x210: PushEmpty()
0x211: Push((int) 10)
0x212: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x214: PushEmpty()
0x215: Call2 0x20c

0x216: Pop(0)
0x217: PushEmpty(bool)
0x218: Stack[-1] = (bool) 0
0x219: PushEmpty(bool)
0x21a: Call2 0x2e2

0x21b: Pop(0)
0x21c: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21d: PushEmpty(bool)
0x21e: Call2 0x1ed

0x21f: Pop(0)
0x220: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x221: Stack[-1] = (bool) 1
0x222: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x223: PushEmpty(bool)
0x224: Call2 0x1d9

0x225: Pop(0)
0x226: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x227: PushEmpty(bool, object)
0x228: PushEmpty(object)
0x229: Call2 0x3fd

0x22a: Stack[-2] = Stack[-1]
0x22b: Pop(1)
0x22c: Call2 0x378

0x22d: Pop(2)
0x22e: GOTO 0x235

0x22f: PushEmpty()
0x230: Call2 0x1e8

0x231: Pop(0)
0x232: PushEmpty()
0x233: Call2 0x203

0x234: Pop(0)
0x235: Return(); Pop(0)

0x236: PushEmpty()
0x237: Call2 0x2c2

0x238: Pop(0)
0x239: PushEmpty()
0x23a: Call2 0x20c

0x23b: Pop(0)
0x23c: @ lshStopSpeech()
0x23d: Pop(0)
0x23e: @ lshStopAnimation()
0x23f: Pop(0)
0x240: @ StopAsync()
0x241: Pop(0)
0x242: @ Hold()
0x243: Pop(0)
0x244: Return(); Pop(0)

0x245: @ StopGroup0()
0x246: Pop(0)
0x247: PushEmpty()
0x248: Call2 0x20c

0x249: Pop(0)
0x24a: PushEmpty(string)
0x24b: Stack[-1] = "Neutral"
0x24c: Call2 0x3c8

0x24d: Pop(1)
0x24e: PushEmpty()
0x24f: Call2 0x203

0x250: Pop(0)
0x251: Return(); Pop(0)

0x252: PushEmpty()
0x253: Push(Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x255: PushEmpty()
0x256: Call2 0x203

0x257: Pop(0)
0x258: GOTO 0x25d

0x259: PushEmpty(string)
0x25a: Stack[-1] = "Neutral"
0x25b: Call2 0x3c8

0x25c: Pop(1)
0x25d: Return(); Pop(0)

0x25e: PushEmpty(bool, bool)
0x25f: @ IsOverrideActive(Stack[-1])
0x260: Pop(0)
0x261: Pop(0); Push((bool) Stack[-1] == 0)
0x262: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x263: EventDisable(0)
0x264: PushEmpty()
0x265: Call2 0x2c2

0x266: Pop(0)
0x267: PushEmpty(bool, object)
0x268: Stack[-1] = Stack[-5]
0x269: Call2 0x2d9

0x26a: Pop(2)
0x26b: EventEnable(0)
0x26c: PushEmpty(object)
0x26d: Stack[-1] = Stack[-4]
0x26e: Call2 0x19a

0x26f: Pop(1)
0x270: PushEmpty(string)
0x271: Stack[-1] = "Neutral"
0x272: Call2 0x3c8

0x273: Pop(1)
0x274: PushEmpty()
0x275: Call2 0x20c

0x276: Pop(0)
0x277: PushEmpty()
0x278: Call2 0x203

0x279: Pop(0)
0x27a: Return(); Pop(2)

0x27b: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x27c: @ WaitForAnimEnd()
0x27d: Pop(0)
0x27e: PushEmpty(bool)
0x27f: Call2 0x2e2

0x280: Pop(0)
0x281: Pop(1); Push((bool) Stack[-1] == 0)
0x282: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x283: Return(); Pop(12)

0x284: PushEmpty(int)
0x285: Call2 0x42e

0x286: Stack[-7] = Stack[-1]
0x287: Pop(1)
0x288: Stack[-5] = (int) 0
0x289: PushEmpty(bool)
0x28a: Stack[-1] = (bool) 0
0x28b: Push((int) 5)
0x28c: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x28e: PushEmpty(bool)
0x28f: Call2 0x2e2

0x290: Pop(0)
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: Stack[-1] = (bool) 1
0x293: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x294: Pop(0); Push((bool) Stack[-6] == 0)
0x295: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x296: Push((int) 3)
0x297: @ Sleep(Stack[-1], Stack[-5])
0x298: Pop(1)
0x299: Pop(0); Push((bool) Stack[-4] == 0)
0x29a: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29b: GOTO 0x2bd

0x29c: GOTO 0x2b2

0x29d: @ irand(Stack[-3], Stack[-6])
0x29e: Pop(0)
0x29f: Push((int) 5)
0x2a0: @ irand(Stack[-3], Stack[-1])
0x2a1: Pop(1)
0x2a2: Push((int) 0)
0x2a3: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a5: Stack[-3] = (int) 0
0x2a6: Push("all")
0x2a7: PushEmpty(string, int)
0x2a8: Stack[-1] = Stack[-6]
0x2a9: Call2 0x427

0x2aa: Pop(1)
0x2ab: @ PlayAnimation(Stack[-2], Stack[-1])
0x2ac: Pop(2)
0x2ad: @ WaitForAnimEnd(Stack[-1])
0x2ae: Pop(0)
0x2af: Pop(0); Push((bool) Stack[-1] == 0)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: GOTO 0x2bd

0x2b2: PushEmpty(bool)
0x2b3: Call2 0x2c0

0x2b4: Pop(0)
0x2b5: Pop(1); Push((bool) Stack[-1] == 0)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b7: GOTO 0x2bd

0x2b8: @ ResetAAS()
0x2b9: Pop(0)
0x2ba: Push((int) 1)
0x2bb: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2bc: GOTO 0x289

0x2bd: @ ResetAAS()
0x2be: Pop(0)
0x2bf: Return(); Pop(12)

0x2c0: Stack[-1] = (bool) 1
0x2c1: Return(); Pop(0)

0x2c2: @ StopAnimation()
0x2c3: Pop(0)
0x2c4: @ StopGroup0()
0x2c5: Pop(0)
0x2c6: Return(); Pop(0)

0x2c7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2c8: @ GetPosition(Stack[-3])
0x2c9: Pop(0)
0x2ca: @@ GetPosition(Stack[-2])
0x2cb: Pop(0)
0x2cc: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2cd: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2ce: Return(); Pop(6)

0x2cf: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2d0: @ GetPosition(Stack[-3])
0x2d1: Pop(0)
0x2d2: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2d3: Push(CvectorIndex(Stack[-2], 0))
0x2d4: Push(CvectorIndex(Stack[-3], 2))
0x2d5: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2d6: Pop(2)
0x2d7: Stack[-8] = Stack[-1]
0x2d8: Return(); Pop(6)

0x2d9: PushEmpty(cvector, cvector)
0x2da: @@ GetPosition(Stack[-1])
0x2db: Pop(0)
0x2dc: PushEmpty(bool, cvector)
0x2dd: Stack[-1] = Stack[-3]
0x2de: Call2 0x2cf

0x2df: Stack[-6] = Stack[-2]
0x2e0: Pop(2)
0x2e1: Return(); Pop(2)

0x2e2: PushEmpty(bool, bool)
0x2e3: @ IsLoaded(Stack[-1])
0x2e4: Pop(0)
0x2e5: Stack[-3] = Stack[-1]
0x2e6: Return(); Pop(2)

0x2e7: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2e8: @@ GetPosition(Stack[-8])
0x2e9: Pop(0)
0x2ea: @@ GetEyesHeight(Stack[-9])
0x2eb: Pop(0)
0x2ec: Push(CvectorIndex(Stack[-8], 1))
0x2ed: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2ee: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2ef: @ GetPosition(Stack[-7])
0x2f0: Pop(0)
0x2f1: @ GetEyesHeight(Stack[-9])
0x2f2: Pop(0)
0x2f3: Push(CvectorIndex(Stack[-7], 1))
0x2f4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2f5: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2f6: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2f7: Push(CvectorIndex(Stack[-6], 1))
0x2f8: Stack[-1] = (int) 0
0x2f9: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2fa: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2fb: Pop(1); Push(Sqrt(Stack[-1]))
0x2fc: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2fd: Stack[-5] = -Stack[-6]; Pop(0);
0x2fe: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2ff: PushEmpty(cvector, cvector)
0x300: Push(CVector(0.0, 1.0, 0.0))
0x301: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x302: Call2 0x403

0x303: Pop(1)
0x304: Push((int) 25)
0x305: Pop(2); Push(Stack[-2] * Stack[-1]);
0x306: Pop(2); Push(Stack[-2] + Stack[-1]);
0x307: Push(CVector(0.0, 10.0, 0.0))
0x308: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x309: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x30a: @ IsOverrideActive(Stack[-2])
0x30b: Pop(0)
0x30c: Push(Stack[-2])
0x30d: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30e: Stack[-21] = (bool) 0
0x30f: Return(); Pop(18)

0x310: @ StopWorld()
0x311: Pop(0)
0x312: Push((bool) 1)
0x313: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x314: Pop(1)
0x315: Push(CvectorIndex(Stack[-4], 0))
0x316: Push(CvectorIndex(Stack[-5], 2))
0x317: @ Rotate(Stack[-2], Stack[-1])
0x318: Pop(2)
0x319: PushEmpty(bool)
0x31a: Call2 0x4de

0x31b: Pop(0)
0x31c: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31d: GOTO 0x326

0x31e: Push("head")
0x31f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x320: Pop(1)
0x321: Push(Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x323: Push("head")
0x324: @ LookAsyncCamera(Stack[-1])
0x325: Pop(1)
0x326: @ CameraWaitForPlayFinish()
0x327: Pop(0)
0x328: @ ResumeWorld()
0x329: Pop(0)
0x32a: Stack[-21] = (bool) 1
0x32b: Return(); Pop(18)

0x32c: PushEmpty(bool, bool)
0x32d: Push((bool) 1)
0x32e: @ CameraSwitchToNormal(Stack[-1])
0x32f: Pop(1)
0x330: PushEmpty(bool)
0x331: Call2 0x4de

0x332: Pop(0)
0x333: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x334: GOTO 0x33d

0x335: Push("head")
0x336: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x337: Pop(1)
0x338: Push(Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33a: Push("head")
0x33b: @ UnlookAsync(Stack[-1])
0x33c: Pop(1)
0x33d: Return(); Pop(2)

0x33e: PushEmpty(int, int, int, int)
0x33f: Push("voice_common")
0x340: @ GetVariable(Stack[-1], Stack[-3])
0x341: Pop(1)
0x342: Push(Stack[-2])
0x343: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x344: PushEmpty(bool, object)
0x345: Stack[-1] = Stack[-7]
0x346: Call2 0x378

0x347: Pop(1)
0x348: Pop(1); Push((bool) Stack[-1] == 0)
0x349: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x34a: PushEmpty(bool, object)
0x34b: Stack[-1] = Stack[-7]
0x34c: Call2 0x39d

0x34d: Pop(1)
0x34e: Pop(1); Push((bool) Stack[-1] == 0)
0x34f: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x350: Stack[-6] = (bool) 0
0x351: Return(); Pop(4)

0x352: Push((int) 2)
0x353: @ irand(Stack[-2], Stack[-1])
0x354: Pop(1)
0x355: Push(Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x357: Push("voice_common")
0x358: Push((int) 1)
0x359: Pop(1); Push(Stack[-4] + Stack[-1]);
0x35a: Push((int) 3)
0x35b: Pop(2); Push(Stack[-2] % Stack[-1]);
0x35c: @ SetVariable(Stack[-2], Stack[-1])
0x35d: Pop(2)
0x35e: GOTO 0x363

0x35f: Push("voice_common")
0x360: Push((int) 0)
0x361: @ SetVariable(Stack[-2], Stack[-1])
0x362: Pop(2)
0x363: GOTO 0x376

0x364: PushEmpty(bool, object)
0x365: Stack[-1] = Stack[-7]
0x366: Call2 0x39d

0x367: Pop(1)
0x368: Pop(1); Push((bool) Stack[-1] == 0)
0x369: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x36a: PushEmpty(bool, object)
0x36b: Stack[-1] = Stack[-7]
0x36c: Call2 0x378

0x36d: Pop(1)
0x36e: Pop(1); Push((bool) Stack[-1] == 0)
0x36f: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x370: Stack[-6] = (bool) 0
0x371: Return(); Pop(4)

0x372: Push("voice_common")
0x373: Push((int) 1)
0x374: @ SetVariable(Stack[-2], Stack[-1])
0x375: Pop(2)
0x376: Stack[-6] = (bool) 1
0x377: Return(); Pop(4)

0x378: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x379: Stack[-5] = "c"
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
0x399: Call2 0x3e7

0x39a: Stack[-14] = Stack[-2]
0x39b: Pop(2)
0x39c: Return(); Pop(10)

0x39d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x39e: Push("d")
0x39f: PushEmpty(int)
0x3a0: Call2 0x41e

0x3a1: Pop(0)
0x3a2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a3: Push("m")
0x3a4: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3a5: Stack[-4] = (int) 0
0x3a6: Push((int) 1)
0x3a7: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3a8: Push((int) 1)
0x3a9: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3aa: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3ab: @@ HasProperty(Stack[-1], Stack[-4])
0x3ac: Pop(1)
0x3ad: Pop(0); Push((bool) Stack[-3] == 0)
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3af: GOTO 0x3b3

0x3b0: Push((int) 1)
0x3b1: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3b2: GOTO 0x3a6

0x3b3: Pop(0); Push((bool) Stack[-4] == 0)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b5: Stack[-12] = (bool) 0
0x3b6: Return(); Pop(10)

0x3b7: Stack[-2] = (int) 0
0x3b8: Push((int) 1)
0x3b9: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bb: @ irand(Stack[-2], Stack[-4])
0x3bc: Pop(0)
0x3bd: Push((int) 1)
0x3be: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3bf: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3c0: @@ GetProperty(Stack[-1], Stack[-2])
0x3c1: Pop(1)
0x3c2: PushEmpty(bool, string)
0x3c3: Stack[-1] = Stack[-3]
0x3c4: Call2 0x3e7

0x3c5: Stack[-14] = Stack[-2]
0x3c6: Pop(2)
0x3c7: Return(); Pop(10)

0x3c8: PushEmpty(bool, float, float, bool, float, float)
0x3c9: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3ca: Pop(0)
0x3cb: Push(Stack[-3])
0x3cc: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3cd: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3ce: Pop(0)
0x3cf: Push((bool) 0)
0x3d0: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3d1: Pop(1)
0x3d2: GOTO 0x3d7

0x3d3: Push("Can't find lsh animation : ")
0x3d4: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3d5: @ Trace(Stack[-1])
0x3d6: Pop(1)
0x3d7: Return(); Pop(6)

0x3d8: PushEmpty(bool, float, float, bool, float, float)
0x3d9: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3da: Pop(0)
0x3db: Push(Stack[-3])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3dd: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3de: Pop(0)
0x3df: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3e0: Pop(0)
0x3e1: GOTO 0x3e6

0x3e2: Push("Can't find lsh animation : ")
0x3e3: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3e4: @ Trace(Stack[-1])
0x3e5: Pop(1)
0x3e6: Return(); Pop(6)

0x3e7: PushEmpty(bool, bool)
0x3e8: PushEmpty(bool)
0x3e9: Call2 0x4de

0x3ea: Pop(0)
0x3eb: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3ec: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3ed: Pop(0)
0x3ee: Push(Stack[-1])
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3f0: @ lshPlaySpeech(Stack[-3])
0x3f1: Pop(0)
0x3f2: Stack[-4] = (bool) 1
0x3f3: Return(); Pop(2)

0x3f4: Stack[-4] = (bool) 0
0x3f5: Return(); Pop(2)

0x3f6: PushEmpty(bool)
0x3f7: Call2 0x4de

0x3f8: Pop(0)
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: @ lshStopSpeech()
0x3fb: Pop(0)
0x3fc: Return(); Pop(0)

0x3fd: PushEmpty(object, object)
0x3fe: @ self(Stack[-1])
0x3ff: Pop(0)
0x400: Stack[-3] = Stack[-1]
0x401: Return(); Pop(2)

0x402: Stack[-1] = 0
0x403: PushEmpty(float, float)
0x404: Pop(0); Push(Stack[-3] | Stack[-3]);
0x405: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x406: Push((float)0.0)
0x407: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x408: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x409: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x40a: Return(); Pop(2)

0x40b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x40c: Return(); Pop(2)

0x40d: PushEmpty(int, int)
0x40e: @ GetVariable(Stack[-3], Stack[-1])
0x40f: Pop(0)
0x410: Stack[-4] = Stack[-1]
0x411: Return(); Pop(2)

0x412: PushEmpty(object, object)
0x413: @ FindActor(Stack[-1], Stack[-4])
0x414: Pop(0)
0x415: Pop(0); Push((bool) Stack[-1] == 0)
0x416: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x417: Stack[-5] = (bool) 0
0x418: Return(); Pop(2)

0x419: @ Trigger(Stack[-1], Stack[-3])
0x41a: Pop(0)
0x41b: Stack[-5] = (bool) 1
0x41c: Return(); Pop(2)

0x41d: Stack[-1] = 0
0x41e: PushEmpty(float, float)
0x41f: @ GetGameTime(Stack[-1])
0x420: Pop(0)
0x421: Push((int) 1)
0x422: PushEmpty(int)
0x423: Push((int) 24)
0x424: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x425: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x426: Return(); Pop(2)

0x427: PushEmpty(string, string)
0x428: Stack[-1] = "idle"
0x429: Push(Stack[-3])
0x42a: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x42b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x42c: Stack[-4] = Stack[-1]
0x42d: Return(); Pop(2)

0x42e: PushEmpty(int, bool, int, bool)
0x42f: Stack[-2] = (int) 0
0x430: Push("all")
0x431: PushEmpty(string, int)
0x432: Stack[-1] = Stack[-5]
0x433: Call2 0x427

0x434: Pop(1)
0x435: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x436: Pop(2)
0x437: Pop(0); Push((bool) Stack[-1] == 0)
0x438: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x439: GOTO 0x43d

0x43a: Push((int) 1)
0x43b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x43c: GOTO 0x430

0x43d: Stack[-5] = Stack[-2]
0x43e: Return(); Pop(4)

0x43f: PushEmpty()
0x440: PushEmpty()
0x441: Call2 0x47e

0x442: Pop(0)
0x443: PushEmpty(bool, string, string)
0x444: Stack[-2] = "quest_k10_01"
0x445: Stack[-1] = "completed"
0x446: Call2 0x412

0x447: Pop(3)
0x448: Return(); Pop(0)

0x449: PushEmpty()
0x44a: PushEmpty(int, string)
0x44b: Stack[-1] = "K_Mission4"
0x44c: Call2 0x40d

0x44d: Pop(1)
0x44e: Push((int) 0)
0x44f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x450: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x451: Push("K_Mission4")
0x452: Push((int) 1)
0x453: @ SetVariable(Stack[-2], Stack[-1])
0x454: Pop(2)
0x455: PushEmpty()
0x456: Call2 0x471

0x457: Pop(0)
0x458: PushEmpty(bool, int)
0x459: Stack[-1] = (int) 567
0x45a: Call2 0x4b4

0x45b: Pop(2)
0x45c: PushEmpty(bool, int)
0x45d: Stack[-1] = (int) 568
0x45e: Call2 0x4b4

0x45f: Pop(2)
0x460: PushEmpty(bool, int)
0x461: Stack[-1] = (int) 569
0x462: Call2 0x4b4

0x463: Pop(2)
0x464: Return(); Pop(0)

0x465: PushEmpty()
0x466: PushEmpty(int, string)
0x467: Stack[-1] = "k10q01"
0x468: Call2 0x40d

0x469: Pop(1)
0x46a: Push((int) 7)
0x46b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46d: Stack[-2] = (bool) 1
0x46e: Return(); Pop(0)

0x46f: Stack[-2] = (bool) 0
0x470: Return(); Pop(0)

0x471: PushEmpty(object, object)
0x472: Push((int) 570)
0x473: Push((int) 0)
0x474: Push((int) 530584)
0x475: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x476: Pop(3)
0x477: PushEmpty(bool, object, int)
0x478: Stack[-2] = Stack[-4]
0x479: Stack[-1] = (int) -1
0x47a: Call2 0x498

0x47b: Pop(3)
0x47c: Return(); Pop(2)

0x47d: Stack[-1] = 0
0x47e: PushEmpty(object, object)
0x47f: Push((int) 455)
0x480: Push((int) 1)
0x481: Push((int) 527013)
0x482: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x483: Pop(3)
0x484: PushEmpty(bool, object, int)
0x485: Stack[-2] = Stack[-4]
0x486: Stack[-1] = (int) 447
0x487: Call2 0x498

0x488: Pop(3)
0x489: Return(); Pop(2)

0x48a: Stack[-1] = 0
0x48b: PushEmpty(object, object)
0x48c: @ GetDiaryRoot(Stack[-1])
0x48d: Pop(0)
0x48e: Pop(0); Push((bool) Stack[-1] == 0)
0x48f: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x490: Push("Can't retrieve diary root")
0x491: @ Trace(Stack[-1])
0x492: Pop(1)
0x493: Stack[-3] = (bool) 0
0x494: Return(); Pop(2)

0x495: Stack[-3] = Stack[-1]
0x496: Return(); Pop(2)

0x497: Stack[-1] = 0
0x498: PushEmpty(object, object, int, object, object, int)
0x499: PushEmpty(object)
0x49a: Call2 0x48b

0x49b: Stack[-4] = Stack[-1]
0x49c: Pop(1)
0x49d: @@ Find(Stack[-7], Stack[-2])
0x49e: Pop(0)
0x49f: Pop(0); Push((bool) Stack[-2] == 0)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a1: Push("Can't find diary parent with id: ")
0x4a2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4a3: @ Trace(Stack[-1])
0x4a4: Pop(1)
0x4a5: Stack[-9] = (bool) 0
0x4a6: Return(); Pop(6)

0x4a7: @@ AddChild(Stack[-8])
0x4a8: Pop(0)
0x4a9: Push((int) 7)
0x4aa: @ SendWorldWndMessage(Stack[-1])
0x4ab: Pop(1)
0x4ac: @@ GetCategory(Stack[-1])
0x4ad: Pop(0)
0x4ae: @ SetDiarySection(Stack[-1])
0x4af: Pop(0)
0x4b0: Stack[-9] = (bool) 0
0x4b1: Return(); Pop(6)

0x4b2: Stack[-2] = 0
0x4b3: Stack[-3] = 0
0x4b4: PushEmpty(object, object, object, object)
0x4b5: PushEmpty(object)
0x4b6: Call2 0x48b

0x4b7: Stack[-3] = Stack[-1]
0x4b8: Pop(1)
0x4b9: @@ Find(Stack[-5], Stack[-1])
0x4ba: Pop(0)
0x4bb: Pop(0); Push((bool) Stack[-1] == 0)
0x4bc: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4bd: Stack[-6] = (bool) 0
0x4be: Return(); Pop(4)

0x4bf: @@ Remove()
0x4c0: Pop(0)
0x4c1: Stack[-6] = (bool) 1
0x4c2: Return(); Pop(4)

0x4c3: Stack[-1] = 0
0x4c4: Stack[-2] = 0
0x4c5: PushEmpty(int, int)
0x4c6: Push("branch")
0x4c7: @ GetVariable(Stack[-1], Stack[-2])
0x4c8: Pop(1)
0x4c9: Push((int) 0)
0x4ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4cb: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4cc: Stack[-3] = (int) 1
0x4cd: Return(); Pop(2)

0x4ce: GOTO 0x4d4

0x4cf: Push((int) 1)
0x4d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d2: Stack[-3] = (int) 2
0x4d3: Return(); Pop(2)

0x4d4: Stack[-3] = (int) 3
0x4d5: Return(); Pop(2)

0x4d6: Stack[-1] = (int) 515551
0x4d7: Return(); Pop(0)

0x4d8: Stack[-1] = (int) 502876
0x4d9: Return(); Pop(0)

0x4da: Stack[-1] = "ui/NPC_Rubin.png"
0x4db: Return(); Pop(0)

0x4dc: Stack[-1] = "ui/NPC_Rubin_b.png"
0x4dd: Return(); Pop(0)

0x4de: Stack[-1] = (bool) 1
0x4df: Return(); Pop(0)

