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
	Smile
	Untrust
	Sorrow
	cleanup
	restore
	player
	Neutral
	GetPosition
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	m
	Can't find lsh animation : 
	reputation
	add
	ook6Danko1
	quest_k6_01
	teleport
	completed
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
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)

RunOp = 0x185
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbf Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x189 Vars = (string)
		EVENT_6 Op = 0x19d Vars = ()
		EVENT_5 Op = 0x1aa Vars = ()
		EVENT_7 Op = 0x1f3 Vars = (int)
		EVENT_45 Op = 0x235 Vars = (bool)
		EVENT_0 Op = 0x241 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2ec

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4ed

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4eb

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x4ef

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x4f1

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4da

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
0x31: Call2 0x400

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x341

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
0x48: Call2 0x330

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
0x56: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x498

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x47a

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Menace"
0x63: Call2 0xa9

0x64: Pop(1)
0x65: Push((int) 526097)
0x66: @@ SetMessage(Stack[-1])
0x67: Pop(1)
0x68: @@ ClearReplies()
0x69: Pop(0)
0x6a: Push((int) 526098)
0x6b: Push((int) 27386)
0x6c: Push((int) 27384)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 526099)
0x70: Push((int) 27386)
0x71: Push((int) 27385)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x8b

0x75: PushEmpty(string)
0x76: Stack[-1] = "Menace"
0x77: Call2 0xa9

0x78: Pop(1)
0x79: Push((int) 526107)
0x7a: @@ SetMessage(Stack[-1])
0x7b: Pop(1)
0x7c: @@ ClearReplies()
0x7d: Pop(0)
0x7e: Push((int) 526108)
0x7f: Push((int) -1)
0x80: Push((int) 27395)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: Push((int) 528917)
0x84: Push((int) -1)
0x85: Push((int) 30347)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: GOTO 0x8b

0x89: Return(); Pop(0)

0x8a: GOTO 0x55

0x8b: PushEmpty(bool)
0x8c: Call2 0x4f3

0x8d: Pop(0)
0x8e: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x8f: @ lshWaitForAnimEnd()
0x90: Pop(0)
0x91: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: GOTO 0x99

0x94: PushEmpty(string)
0x95: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x96: Call2 0x3cb

0x97: Pop(1)
0x98: GOTO 0x8f

0x99: GOTO 0xa8

0x9a: Push("all")
0x9b: Push("idle")
0x9c: @ PlayAnimation(Stack[-2], Stack[-1])
0x9d: Pop(2)
0x9e: @ WaitForAnimEnd()
0x9f: Pop(0)
0xa0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa1: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa2: GOTO 0xa8

0xa3: Push("all")
0xa4: Push("idle")
0xa5: @ PlayAnimation(Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: GOTO 0x9e

0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: PushEmpty(bool)
0xab: Call2 0x4f3

0xac: Pop(0)
0xad: Pop(1); Push((bool) Stack[-1] == 0)
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: Return(); Pop(0)

0xb0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: Return(); Pop(0)

0xb3: PushEmpty(string, bool)
0xb4: Stack[-2] = Stack[-3]
0xb5: Push("")
0xb6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb8: Stack[-1] = (bool) 0
0xb9: GOTO 0xbb

0xba: Stack[-1] = (bool) 1
0xbb: Call2 0x3db

0xbc: Pop(2)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0xc2: PushEmpty()
0xc3: Call2 0x3f9

0xc4: Pop(0)
0xc5: Push((int) 27393)
0xc6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x480

0xcc: Pop(2)
0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call2 0x487

0xd1: Pop(2)
0xd2: PushEmpty(object, object)
0xd3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd5: Call2 0x491

0xd6: Pop(2)
0xd7: Push((int) 27390)
0xd8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd9: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xda: PushEmpty(object, object)
0xdb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdd: Call2 0x480

0xde: Pop(2)
0xdf: PushEmpty(object, object)
0xe0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe2: Call2 0x487

0xe3: Pop(2)
0xe4: PushEmpty(object, object)
0xe5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe7: Call2 0x491

0xe8: Pop(2)
0xe9: Push((int) 27383)
0xea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0xec: PushEmpty(bool, object)
0xed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xee: Call2 0x498

0xef: Pop(1)
0xf0: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xf1: PushEmpty(object, object)
0xf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call2 0x47a

0xf5: Pop(2)
0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Menace"
0xf8: Call2 0xa9

0xf9: Pop(1)
0xfa: Push((int) 526097)
0xfb: @@ SetMessage(Stack[-1])
0xfc: Pop(1)
0xfd: @@ ClearReplies()
0xfe: Pop(0)
0xff: Push((int) 526098)
0x100: Push((int) 27386)
0x101: Push((int) 27384)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Push((int) 526099)
0x105: Push((int) 27386)
0x106: Push((int) 27385)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: PushEmpty(string)
0x10b: Stack[-1] = "Menace"
0x10c: Call2 0xa9

0x10d: Pop(1)
0x10e: Push((int) 526107)
0x10f: @@ SetMessage(Stack[-1])
0x110: Pop(1)
0x111: @@ ClearReplies()
0x112: Pop(0)
0x113: Push((int) 526108)
0x114: Push((int) -1)
0x115: Push((int) 27395)
0x116: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117: Pop(3)
0x118: Push((int) 528917)
0x119: Push((int) -1)
0x11a: Push((int) 30347)
0x11b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: Return(); Pop(0)

0x11e: Push((int) 27386)
0x11f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x121: PushEmpty(string)
0x122: Stack[-1] = "Smile"
0x123: Call2 0xa9

0x124: Pop(1)
0x125: Push((int) 526100)
0x126: @@ SetMessage(Stack[-1])
0x127: Pop(1)
0x128: @@ ClearReplies()
0x129: Pop(0)
0x12a: Push((int) 526101)
0x12b: Push((int) 27388)
0x12c: Push((int) 27387)
0x12d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(3)
0x12f: Push((int) 541281)
0x130: Push((int) 43414)
0x131: Push((int) 43413)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: Push((int) 43414)
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Untrust"
0x13a: Call2 0xa9

0x13b: Pop(1)
0x13c: Push((int) 541282)
0x13d: @@ SetMessage(Stack[-1])
0x13e: Pop(1)
0x13f: @@ ClearReplies()
0x140: Pop(0)
0x141: Push((int) 541283)
0x142: Push((int) 27392)
0x143: Push((int) 43415)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Return(); Pop(0)

0x147: Push((int) 27388)
0x148: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x14a: PushEmpty(string)
0x14b: Stack[-1] = "Sorrow"
0x14c: Call2 0xa9

0x14d: Pop(1)
0x14e: Push((int) 526102)
0x14f: @@ SetMessage(Stack[-1])
0x150: Pop(1)
0x151: @@ ClearReplies()
0x152: Pop(0)
0x153: Push((int) 526103)
0x154: Push((int) 27392)
0x155: Push((int) 27389)
0x156: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x157: Pop(3)
0x158: Push((int) 526104)
0x159: Push((int) -1)
0x15a: Push((int) 27390)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Return(); Pop(0)

0x15e: Push((int) 27392)
0x15f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x160: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x161: PushEmpty(string)
0x162: Stack[-1] = "Smile"
0x163: Call2 0xa9

0x164: Pop(1)
0x165: Push((int) 526105)
0x166: @@ SetMessage(Stack[-1])
0x167: Pop(1)
0x168: @@ ClearReplies()
0x169: Pop(0)
0x16a: Push((int) 526106)
0x16b: Push((int) -1)
0x16c: Push((int) 27393)
0x16d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16e: Pop(3)
0x16f: Return(); Pop(0)

0x170: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x171: PushEmpty(bool)
0x172: Call2 0x4f3

0x173: Pop(0)
0x174: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x175: @ lshStopAnimation()
0x176: Pop(0)
0x177: GOTO 0x17a

0x178: @ StopAnimation()
0x179: Pop(0)
0x17a: Return(); Pop(0)

0x17b: GOTO 0xc0

0x17c: Return(); Pop(0)

0x17d: PushEmpty()
0x17e: PushEmpty(int, object)
0x17f: Stack[-1] = Stack[-3]
0x180: Push(-2, 1); TaskCall(0)
0x181: Call2 0x0

0x182: Pop(-2, 1); TaskReturn
0x183: Pop(2)
0x184: Return(); Pop(0)

0x185: PushEmpty()
0x186: Call2 0x1ae

0x187: Pop(0)
0x188: Return(); Pop(0)

0x189: PushEmpty(bool, bool)
0x18a: Push("cleanup")
0x18b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x18d: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x18e: @ IsLoaded(Stack[-1])
0x18f: Pop(0)
0x190: Pop(0); Push((bool) Stack[-1] == 0)
0x191: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x192: PushEmpty(object)
0x193: Call2 0x400

0x194: Pop(0)
0x195: @ RemoveActor(Stack[-1])
0x196: Pop(1)
0x197: GOTO 0x19c

0x198: Push("restore")
0x199: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19b: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x19c: Return(); Pop(2)

0x19d: Push( Stack[1 + Tasks[-1].StackPointer] )
0x19e: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x19f: PushEmpty(object)
0x1a0: Call2 0x400

0x1a1: Pop(0)
0x1a2: @ RemoveActor(Stack[-1])
0x1a3: Pop(1)
0x1a4: @ Hold()
0x1a5: Pop(0)
0x1a6: PushEmpty()
0x1a7: Call2 0x219

0x1a8: Pop(0)
0x1a9: Return(); Pop(0)

0x1aa: PushEmpty()
0x1ab: Call2 0x228

0x1ac: Pop(0)
0x1ad: Return(); Pop(0)

0x1ae: PushEmpty(bool)
0x1af: Call2 0x2e7

0x1b0: Pop(0)
0x1b1: Pop(1); Push((bool) Stack[-1] == 0)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b3: @ Hold()
0x1b4: Pop(0)
0x1b5: @ GetDirection(Stack[-0])
0x1b6: Pop(0)
0x1b7: PushEmpty()
0x1b8: Call2 0x25e

0x1b9: Pop(0)
0x1ba: GOTO 0x1b7

0x1bb: Return(); Pop(0)

0x1bc: PushEmpty(object, object)
0x1bd: Push("player")
0x1be: @ FindActor(Stack[-2], Stack[-1])
0x1bf: Pop(1)
0x1c0: Pop(0); Push((bool) Stack[-1] == 0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c2: Stack[-3] = (bool) 0
0x1c3: Return(); Pop(2)

0x1c4: PushEmpty(bool, object)
0x1c5: Stack[-1] = Stack[-3]
0x1c6: Call2 0x2de

0x1c7: Stack[-5] = Stack[-2]
0x1c8: Pop(2)
0x1c9: Return(); Pop(2)

0x1ca: Stack[-1] = 0
0x1cb: Push(CvectorIndex(Stack[-0], 0))
0x1cc: Push(CvectorIndex(Stack[-0], 2))
0x1cd: @ RotateAsync(Stack[-2], Stack[-1])
0x1ce: Pop(2)
0x1cf: Return(); Pop(0)

0x1d0: PushEmpty(object, bool, object, bool)
0x1d1: Push("player")
0x1d2: @ FindActor(Stack[-3], Stack[-1])
0x1d3: Pop(1)
0x1d4: Pop(0); Push((bool) Stack[-2] == 0)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d6: Stack[-5] = (bool) 0
0x1d7: Return(); Pop(4)

0x1d8: PushEmpty(float, object)
0x1d9: Stack[-1] = Stack[-4]
0x1da: Call2 0x2aa

0x1db: Pop(1)
0x1dc: Push((float)90000.0)
0x1dd: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1df: Stack[-5] = (bool) 0
0x1e0: Return(); Pop(4)

0x1e1: @ CanSee(Stack[-1], Stack[-2])
0x1e2: Pop(0)
0x1e3: Stack[-5] = Stack[-1]
0x1e4: Return(); Pop(4)

0x1e5: Stack[-2] = 0
0x1e6: PushEmpty(float, float)
0x1e7: Push((int) 8)
0x1e8: Push((int) 16)
0x1e9: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1ea: Pop(2)
0x1eb: Push((int) 10)
0x1ec: @ SetTimer(Stack[-1], Stack[-2])
0x1ed: Pop(1)
0x1ee: Return(); Pop(2)

0x1ef: Push((int) 10)
0x1f0: @ KillTimer(Stack[-1])
0x1f1: Pop(1)
0x1f2: Return(); Pop(0)

0x1f3: PushEmpty()
0x1f4: Push((int) 10)
0x1f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x1f7: PushEmpty()
0x1f8: Call2 0x1ef

0x1f9: Pop(0)
0x1fa: PushEmpty(bool)
0x1fb: Stack[-1] = (bool) 0
0x1fc: PushEmpty(bool)
0x1fd: Call2 0x2e7

0x1fe: Pop(0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x200: PushEmpty(bool)
0x201: Call2 0x1d0

0x202: Pop(0)
0x203: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x204: Stack[-1] = (bool) 1
0x205: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x206: PushEmpty(bool)
0x207: Call2 0x1bc

0x208: Pop(0)
0x209: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20a: PushEmpty(bool, object)
0x20b: PushEmpty(object)
0x20c: Call2 0x400

0x20d: Stack[-2] = Stack[-1]
0x20e: Pop(1)
0x20f: Call2 0x37b

0x210: Pop(2)
0x211: GOTO 0x218

0x212: PushEmpty()
0x213: Call2 0x1cb

0x214: Pop(0)
0x215: PushEmpty()
0x216: Call2 0x1e6

0x217: Pop(0)
0x218: Return(); Pop(0)

0x219: PushEmpty()
0x21a: Call2 0x2a5

0x21b: Pop(0)
0x21c: PushEmpty()
0x21d: Call2 0x1ef

0x21e: Pop(0)
0x21f: @ lshStopSpeech()
0x220: Pop(0)
0x221: @ lshStopAnimation()
0x222: Pop(0)
0x223: @ StopAsync()
0x224: Pop(0)
0x225: @ Hold()
0x226: Pop(0)
0x227: Return(); Pop(0)

0x228: @ StopGroup0()
0x229: Pop(0)
0x22a: PushEmpty()
0x22b: Call2 0x1ef

0x22c: Pop(0)
0x22d: PushEmpty(string)
0x22e: Stack[-1] = "Neutral"
0x22f: Call2 0x3cb

0x230: Pop(1)
0x231: PushEmpty()
0x232: Call2 0x1e6

0x233: Pop(0)
0x234: Return(); Pop(0)

0x235: PushEmpty()
0x236: Push(Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x238: PushEmpty()
0x239: Call2 0x1e6

0x23a: Pop(0)
0x23b: GOTO 0x240

0x23c: PushEmpty(string)
0x23d: Stack[-1] = "Neutral"
0x23e: Call2 0x3cb

0x23f: Pop(1)
0x240: Return(); Pop(0)

0x241: PushEmpty(bool, bool)
0x242: @ IsOverrideActive(Stack[-1])
0x243: Pop(0)
0x244: Pop(0); Push((bool) Stack[-1] == 0)
0x245: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x246: EventDisable(0)
0x247: PushEmpty()
0x248: Call2 0x2a5

0x249: Pop(0)
0x24a: PushEmpty(bool, object)
0x24b: Stack[-1] = Stack[-5]
0x24c: Call2 0x2de

0x24d: Pop(2)
0x24e: EventEnable(0)
0x24f: PushEmpty(object)
0x250: Stack[-1] = Stack[-4]
0x251: Call2 0x17d

0x252: Pop(1)
0x253: PushEmpty(string)
0x254: Stack[-1] = "Neutral"
0x255: Call2 0x3cb

0x256: Pop(1)
0x257: PushEmpty()
0x258: Call2 0x1ef

0x259: Pop(0)
0x25a: PushEmpty()
0x25b: Call2 0x1e6

0x25c: Pop(0)
0x25d: Return(); Pop(2)

0x25e: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x25f: @ WaitForAnimEnd()
0x260: Pop(0)
0x261: PushEmpty(bool)
0x262: Call2 0x2e7

0x263: Pop(0)
0x264: Pop(1); Push((bool) Stack[-1] == 0)
0x265: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x266: Return(); Pop(12)

0x267: PushEmpty(int)
0x268: Call2 0x469

0x269: Stack[-7] = Stack[-1]
0x26a: Pop(1)
0x26b: Stack[-5] = (int) 0
0x26c: PushEmpty(bool)
0x26d: Stack[-1] = (bool) 0
0x26e: Push((int) 5)
0x26f: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x271: PushEmpty(bool)
0x272: Call2 0x2e7

0x273: Pop(0)
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: Stack[-1] = (bool) 1
0x276: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x277: Pop(0); Push((bool) Stack[-6] == 0)
0x278: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x279: Push((int) 3)
0x27a: @ Sleep(Stack[-1], Stack[-5])
0x27b: Pop(1)
0x27c: Pop(0); Push((bool) Stack[-4] == 0)
0x27d: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27e: GOTO 0x2a0

0x27f: GOTO 0x295

0x280: @ irand(Stack[-3], Stack[-6])
0x281: Pop(0)
0x282: Push((int) 5)
0x283: @ irand(Stack[-3], Stack[-1])
0x284: Pop(1)
0x285: Push((int) 0)
0x286: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: Stack[-3] = (int) 0
0x289: Push("all")
0x28a: PushEmpty(string, int)
0x28b: Stack[-1] = Stack[-6]
0x28c: Call2 0x462

0x28d: Pop(1)
0x28e: @ PlayAnimation(Stack[-2], Stack[-1])
0x28f: Pop(2)
0x290: @ WaitForAnimEnd(Stack[-1])
0x291: Pop(0)
0x292: Pop(0); Push((bool) Stack[-1] == 0)
0x293: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x294: GOTO 0x2a0

0x295: PushEmpty(bool)
0x296: Call2 0x2a3

0x297: Pop(0)
0x298: Pop(1); Push((bool) Stack[-1] == 0)
0x299: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x29a: GOTO 0x2a0

0x29b: @ ResetAAS()
0x29c: Pop(0)
0x29d: Push((int) 1)
0x29e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x29f: GOTO 0x26c

0x2a0: @ ResetAAS()
0x2a1: Pop(0)
0x2a2: Return(); Pop(12)

0x2a3: Stack[-1] = (bool) 1
0x2a4: Return(); Pop(0)

0x2a5: @ StopAnimation()
0x2a6: Pop(0)
0x2a7: @ StopGroup0()
0x2a8: Pop(0)
0x2a9: Return(); Pop(0)

0x2aa: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2ab: @ GetPosition(Stack[-3])
0x2ac: Pop(0)
0x2ad: @@ GetPosition(Stack[-2])
0x2ae: Pop(0)
0x2af: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2b0: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2b1: Return(); Pop(6)

0x2b2: PushEmpty(bool, bool)
0x2b3: Push("HasProperty")
0x2b4: Push((int) 2)
0x2b5: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x2b6: Pop(1); Push((bool) Stack[-1] == 0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b8: Stack[-5] = (bool) 0
0x2b9: Return(); Pop(2)

0x2ba: @@ HasProperty(Stack[-3], Stack[-1])
0x2bb: Pop(0)
0x2bc: Stack[-5] = Stack[-1]
0x2bd: Return(); Pop(2)

0x2be: PushEmpty(float, float)
0x2bf: PushEmpty(bool, object, string)
0x2c0: Stack[-2] = Stack[-10]
0x2c1: Stack[-1] = Stack[-9]
0x2c2: Call2 0x2b2

0x2c3: Pop(2)
0x2c4: Pop(1); Push((bool) Stack[-1] == 0)
0x2c5: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c6: Stack[-8] = (bool) 0
0x2c7: Return(); Pop(2)

0x2c8: @@ GetProperty(Stack[-6], Stack[-1])
0x2c9: Pop(0)
0x2ca: PushEmpty(float, float, float, float)
0x2cb: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x2cc: Stack[-2] = Stack[-8]
0x2cd: Stack[-1] = Stack[-7]
0x2ce: Call2 0x410

0x2cf: Pop(3)
0x2d0: @@ SetProperty(Stack[-7], Stack[-1])
0x2d1: Pop(1)
0x2d2: Stack[-8] = (bool) 1
0x2d3: Return(); Pop(2)

0x2d4: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2d5: @ GetPosition(Stack[-3])
0x2d6: Pop(0)
0x2d7: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2d8: Push(CvectorIndex(Stack[-2], 0))
0x2d9: Push(CvectorIndex(Stack[-3], 2))
0x2da: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2db: Pop(2)
0x2dc: Stack[-8] = Stack[-1]
0x2dd: Return(); Pop(6)

0x2de: PushEmpty(cvector, cvector)
0x2df: @@ GetPosition(Stack[-1])
0x2e0: Pop(0)
0x2e1: PushEmpty(bool, cvector)
0x2e2: Stack[-1] = Stack[-3]
0x2e3: Call2 0x2d4

0x2e4: Stack[-6] = Stack[-2]
0x2e5: Pop(2)
0x2e6: Return(); Pop(2)

0x2e7: PushEmpty(bool, bool)
0x2e8: @ IsLoaded(Stack[-1])
0x2e9: Pop(0)
0x2ea: Stack[-3] = Stack[-1]
0x2eb: Return(); Pop(2)

0x2ec: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2ed: @@ GetPosition(Stack[-8])
0x2ee: Pop(0)
0x2ef: @@ GetEyesHeight(Stack[-9])
0x2f0: Pop(0)
0x2f1: Push(CvectorIndex(Stack[-8], 1))
0x2f2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2f3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2f4: @ GetPosition(Stack[-7])
0x2f5: Pop(0)
0x2f6: @ GetEyesHeight(Stack[-9])
0x2f7: Pop(0)
0x2f8: Push(CvectorIndex(Stack[-7], 1))
0x2f9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2fa: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2fb: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2fc: Push(CvectorIndex(Stack[-6], 1))
0x2fd: Stack[-1] = (int) 0
0x2fe: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2ff: Pop(0); Push(Stack[-6] | Stack[-6]);
0x300: Pop(1); Push(Sqrt(Stack[-1]))
0x301: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x302: Stack[-5] = -Stack[-6]; Pop(0);
0x303: Pop(0); Push(Stack[-6] * Stack[-19]);
0x304: PushEmpty(cvector, cvector)
0x305: Push(CVector(0.0, 1.0, 0.0))
0x306: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x307: Call2 0x406

0x308: Pop(1)
0x309: Push((int) 25)
0x30a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x30b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x30c: Push(CVector(0.0, 10.0, 0.0))
0x30d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x30e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x30f: @ IsOverrideActive(Stack[-2])
0x310: Pop(0)
0x311: Push(Stack[-2])
0x312: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x313: Stack[-21] = (bool) 0
0x314: Return(); Pop(18)

0x315: @ StopWorld()
0x316: Pop(0)
0x317: @ CameraTransit(Stack[-3], Stack[-5])
0x318: Pop(0)
0x319: Push(CvectorIndex(Stack[-4], 0))
0x31a: Push(CvectorIndex(Stack[-5], 2))
0x31b: @ Rotate(Stack[-2], Stack[-1])
0x31c: Pop(2)
0x31d: PushEmpty(bool)
0x31e: Call2 0x4f3

0x31f: Pop(0)
0x320: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x321: GOTO 0x32a

0x322: Push("head")
0x323: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x324: Pop(1)
0x325: Push(Stack[-1])
0x326: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x327: Push("head")
0x328: @ LookAsyncCamera(Stack[-1])
0x329: Pop(1)
0x32a: @ CameraWaitForPlayFinish()
0x32b: Pop(0)
0x32c: @ ResumeWorld()
0x32d: Pop(0)
0x32e: Stack[-21] = (bool) 1
0x32f: Return(); Pop(18)

0x330: PushEmpty(bool, bool)
0x331: @ CameraSwitchToNormal()
0x332: Pop(0)
0x333: PushEmpty(bool)
0x334: Call2 0x4f3

0x335: Pop(0)
0x336: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x337: GOTO 0x340

0x338: Push("head")
0x339: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x33a: Pop(1)
0x33b: Push(Stack[-1])
0x33c: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33d: Push("head")
0x33e: @ UnlookAsync(Stack[-1])
0x33f: Pop(1)
0x340: Return(); Pop(2)

0x341: PushEmpty(int, int, int, int)
0x342: Push("voice_common")
0x343: @ GetVariable(Stack[-1], Stack[-3])
0x344: Pop(1)
0x345: Push(Stack[-2])
0x346: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x347: PushEmpty(bool, object)
0x348: Stack[-1] = Stack[-7]
0x349: Call2 0x37b

0x34a: Pop(1)
0x34b: Pop(1); Push((bool) Stack[-1] == 0)
0x34c: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x34d: PushEmpty(bool, object)
0x34e: Stack[-1] = Stack[-7]
0x34f: Call2 0x3a0

0x350: Pop(1)
0x351: Pop(1); Push((bool) Stack[-1] == 0)
0x352: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x353: Stack[-6] = (bool) 0
0x354: Return(); Pop(4)

0x355: Push((int) 2)
0x356: @ irand(Stack[-2], Stack[-1])
0x357: Pop(1)
0x358: Push(Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x35a: Push("voice_common")
0x35b: Push((int) 1)
0x35c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x35d: Push((int) 3)
0x35e: Pop(2); Push(Stack[-2] % Stack[-1]);
0x35f: @ SetVariable(Stack[-2], Stack[-1])
0x360: Pop(2)
0x361: GOTO 0x366

0x362: Push("voice_common")
0x363: Push((int) 0)
0x364: @ SetVariable(Stack[-2], Stack[-1])
0x365: Pop(2)
0x366: GOTO 0x379

0x367: PushEmpty(bool, object)
0x368: Stack[-1] = Stack[-7]
0x369: Call2 0x3a0

0x36a: Pop(1)
0x36b: Pop(1); Push((bool) Stack[-1] == 0)
0x36c: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x36d: PushEmpty(bool, object)
0x36e: Stack[-1] = Stack[-7]
0x36f: Call2 0x37b

0x370: Pop(1)
0x371: Pop(1); Push((bool) Stack[-1] == 0)
0x372: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x373: Stack[-6] = (bool) 0
0x374: Return(); Pop(4)

0x375: Push("voice_common")
0x376: Push((int) 1)
0x377: @ SetVariable(Stack[-2], Stack[-1])
0x378: Pop(2)
0x379: Stack[-6] = (bool) 1
0x37a: Return(); Pop(4)

0x37b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x37c: Stack[-5] = "c"
0x37d: Stack[-4] = (int) 0
0x37e: Push((int) 1)
0x37f: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x380: Push((int) 1)
0x381: Pop(1); Push(Stack[-5] + Stack[-1]);
0x382: Pop(1); Push(Stack[-6] + Stack[-1]);
0x383: @@ HasProperty(Stack[-1], Stack[-4])
0x384: Pop(1)
0x385: Pop(0); Push((bool) Stack[-3] == 0)
0x386: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x387: GOTO 0x38b

0x388: Push((int) 1)
0x389: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x38a: GOTO 0x37e

0x38b: Pop(0); Push((bool) Stack[-4] == 0)
0x38c: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38d: Stack[-12] = (bool) 0
0x38e: Return(); Pop(10)

0x38f: Stack[-2] = (int) 0
0x390: Push((int) 1)
0x391: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x393: @ irand(Stack[-2], Stack[-4])
0x394: Pop(0)
0x395: Push((int) 1)
0x396: Pop(1); Push(Stack[-3] + Stack[-1]);
0x397: Pop(1); Push(Stack[-6] + Stack[-1]);
0x398: @@ GetProperty(Stack[-1], Stack[-2])
0x399: Pop(1)
0x39a: PushEmpty(bool, string)
0x39b: Stack[-1] = Stack[-3]
0x39c: Call2 0x3ea

0x39d: Stack[-14] = Stack[-2]
0x39e: Pop(2)
0x39f: Return(); Pop(10)

0x3a0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3a1: Push("d")
0x3a2: PushEmpty(int)
0x3a3: Call2 0x459

0x3a4: Pop(0)
0x3a5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a6: Push("m")
0x3a7: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3a8: Stack[-4] = (int) 0
0x3a9: Push((int) 1)
0x3aa: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3ab: Push((int) 1)
0x3ac: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3ad: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3ae: @@ HasProperty(Stack[-1], Stack[-4])
0x3af: Pop(1)
0x3b0: Pop(0); Push((bool) Stack[-3] == 0)
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b2: GOTO 0x3b6

0x3b3: Push((int) 1)
0x3b4: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3b5: GOTO 0x3a9

0x3b6: Pop(0); Push((bool) Stack[-4] == 0)
0x3b7: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b8: Stack[-12] = (bool) 0
0x3b9: Return(); Pop(10)

0x3ba: Stack[-2] = (int) 0
0x3bb: Push((int) 1)
0x3bc: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3be: @ irand(Stack[-2], Stack[-4])
0x3bf: Pop(0)
0x3c0: Push((int) 1)
0x3c1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3c2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3c3: @@ GetProperty(Stack[-1], Stack[-2])
0x3c4: Pop(1)
0x3c5: PushEmpty(bool, string)
0x3c6: Stack[-1] = Stack[-3]
0x3c7: Call2 0x3ea

0x3c8: Stack[-14] = Stack[-2]
0x3c9: Pop(2)
0x3ca: Return(); Pop(10)

0x3cb: PushEmpty(bool, float, float, bool, float, float)
0x3cc: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3cd: Pop(0)
0x3ce: Push(Stack[-3])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d0: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3d1: Pop(0)
0x3d2: Push((bool) 0)
0x3d3: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3d4: Pop(1)
0x3d5: GOTO 0x3da

0x3d6: Push("Can't find lsh animation : ")
0x3d7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3d8: @ Trace(Stack[-1])
0x3d9: Pop(1)
0x3da: Return(); Pop(6)

0x3db: PushEmpty(bool, float, float, bool, float, float)
0x3dc: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3dd: Pop(0)
0x3de: Push(Stack[-3])
0x3df: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e0: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3e1: Pop(0)
0x3e2: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3e3: Pop(0)
0x3e4: GOTO 0x3e9

0x3e5: Push("Can't find lsh animation : ")
0x3e6: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3e7: @ Trace(Stack[-1])
0x3e8: Pop(1)
0x3e9: Return(); Pop(6)

0x3ea: PushEmpty(bool, bool)
0x3eb: PushEmpty(bool)
0x3ec: Call2 0x4f3

0x3ed: Pop(0)
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3ef: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3f0: Pop(0)
0x3f1: Push(Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f3: @ lshPlaySpeech(Stack[-3])
0x3f4: Pop(0)
0x3f5: Stack[-4] = (bool) 1
0x3f6: Return(); Pop(2)

0x3f7: Stack[-4] = (bool) 0
0x3f8: Return(); Pop(2)

0x3f9: PushEmpty(bool)
0x3fa: Call2 0x4f3

0x3fb: Pop(0)
0x3fc: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fd: @ lshStopSpeech()
0x3fe: Pop(0)
0x3ff: Return(); Pop(0)

0x400: PushEmpty(object, object)
0x401: @ self(Stack[-1])
0x402: Pop(0)
0x403: Stack[-3] = Stack[-1]
0x404: Return(); Pop(2)

0x405: Stack[-1] = 0
0x406: PushEmpty(float, float)
0x407: Pop(0); Push(Stack[-3] | Stack[-3]);
0x408: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x409: Push((float)0.0)
0x40a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x40b: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40c: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x40d: Return(); Pop(2)

0x40e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x40f: Return(); Pop(2)

0x410: PushEmpty()
0x411: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x412: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x413: Stack[-4] = Stack[-2]
0x414: Return(); Pop(0)

0x415: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x416: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x417: Stack[-4] = Stack[-1]
0x418: Return(); Pop(0)

0x419: Stack[-4] = Stack[-3]
0x41a: Return(); Pop(0)

0x41b: PushEmpty(int, int)
0x41c: @ GetVariable(Stack[-3], Stack[-1])
0x41d: Pop(0)
0x41e: Stack[-4] = Stack[-1]
0x41f: Return(); Pop(2)

0x420: PushEmpty()
0x421: Pop(0); Push((bool) Stack[-2] == 0)
0x422: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x423: Stack[-3] = (bool) 0
0x424: Return(); Pop(0)

0x425: Push((int) 0)
0x426: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x427: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x428: Push((int) 8)
0x429: @ SendWorldWndMessage(Stack[-1])
0x42a: Pop(1)
0x42b: GOTO 0x435

0x42c: Push((int) 0)
0x42d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x42e: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x42f: Push((int) 9)
0x430: @ SendWorldWndMessage(Stack[-1])
0x431: Pop(1)
0x432: GOTO 0x435

0x433: Stack[-3] = (bool) 0
0x434: Return(); Pop(0)

0x435: PushEmpty(float)
0x436: Stack[-1] = Stack[-2]
0x437: Call2 0x443

0x438: Pop(1)
0x439: PushEmpty(bool, object, string, float, float, float)
0x43a: Stack[-5] = Stack[-8]
0x43b: Stack[-4] = "reputation"
0x43c: Stack[-3] = Stack[-7]
0x43d: Stack[-2] = (int) 0
0x43e: Stack[-1] = (int) 1
0x43f: Call2 0x2be

0x440: Pop(6)
0x441: Stack[-3] = (bool) 1
0x442: Return(); Pop(0)

0x443: PushEmpty(object, object)
0x444: @ CreateFloatVector(Stack[-1])
0x445: Pop(0)
0x446: @@ add(Stack[-3])
0x447: Pop(0)
0x448: Push((int) 16)
0x449: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x44a: Pop(1)
0x44b: Return(); Pop(2)

0x44c: Stack[-1] = 0
0x44d: PushEmpty(object, object)
0x44e: @ FindActor(Stack[-1], Stack[-4])
0x44f: Pop(0)
0x450: Pop(0); Push((bool) Stack[-1] == 0)
0x451: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x452: Stack[-5] = (bool) 0
0x453: Return(); Pop(2)

0x454: @ Trigger(Stack[-1], Stack[-3])
0x455: Pop(0)
0x456: Stack[-5] = (bool) 1
0x457: Return(); Pop(2)

0x458: Stack[-1] = 0
0x459: PushEmpty(float, float)
0x45a: @ GetGameTime(Stack[-1])
0x45b: Pop(0)
0x45c: Push((int) 1)
0x45d: PushEmpty(int)
0x45e: Push((int) 24)
0x45f: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x460: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x461: Return(); Pop(2)

0x462: PushEmpty(string, string)
0x463: Stack[-1] = "idle"
0x464: Push(Stack[-3])
0x465: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x466: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x467: Stack[-4] = Stack[-1]
0x468: Return(); Pop(2)

0x469: PushEmpty(int, bool, int, bool)
0x46a: Stack[-2] = (int) 0
0x46b: Push("all")
0x46c: PushEmpty(string, int)
0x46d: Stack[-1] = Stack[-5]
0x46e: Call2 0x462

0x46f: Pop(1)
0x470: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x471: Pop(2)
0x472: Pop(0); Push((bool) Stack[-1] == 0)
0x473: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x474: GOTO 0x478

0x475: Push((int) 1)
0x476: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x477: GOTO 0x46b

0x478: Stack[-5] = Stack[-2]
0x479: Return(); Pop(4)

0x47a: PushEmpty()
0x47b: Push("ook6Danko1")
0x47c: Push((int) 1)
0x47d: @ SetVariable(Stack[-2], Stack[-1])
0x47e: Pop(2)
0x47f: Return(); Pop(0)

0x480: PushEmpty()
0x481: PushEmpty(bool, string, string)
0x482: Stack[-2] = "quest_k6_01"
0x483: Stack[-1] = "teleport"
0x484: Call2 0x44d

0x485: Pop(3)
0x486: Return(); Pop(0)

0x487: PushEmpty()
0x488: PushEmpty()
0x489: Call2 0x4a4

0x48a: Pop(0)
0x48b: PushEmpty(bool, string, string)
0x48c: Stack[-2] = "quest_k6_01"
0x48d: Stack[-1] = "completed"
0x48e: Call2 0x44d

0x48f: Pop(3)
0x490: Return(); Pop(0)

0x491: PushEmpty()
0x492: PushEmpty(bool, object, float)
0x493: Stack[-2] = Stack[-5]
0x494: Stack[-1] = (float) 0.3
0x495: Call2 0x420

0x496: Pop(3)
0x497: Return(); Pop(0)

0x498: PushEmpty()
0x499: PushEmpty(int, string)
0x49a: Stack[-1] = "ook6Danko1"
0x49b: Call2 0x41b

0x49c: Pop(1)
0x49d: Push((int) 0)
0x49e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x49f: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x4a0: Stack[-2] = (bool) 1
0x4a1: Return(); Pop(0)

0x4a2: Stack[-2] = (bool) 0
0x4a3: Return(); Pop(0)

0x4a4: PushEmpty(object, object)
0x4a5: Push((int) 415)
0x4a6: Push((int) 1)
0x4a7: Push((int) 526116)
0x4a8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4a9: Pop(3)
0x4aa: PushEmpty(bool, object, int)
0x4ab: Stack[-2] = Stack[-4]
0x4ac: Stack[-1] = (int) 408
0x4ad: Call2 0x4be

0x4ae: Pop(3)
0x4af: Return(); Pop(2)

0x4b0: Stack[-1] = 0
0x4b1: PushEmpty(object, object)
0x4b2: @ GetDiaryRoot(Stack[-1])
0x4b3: Pop(0)
0x4b4: Pop(0); Push((bool) Stack[-1] == 0)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b6: Push("Can't retrieve diary root")
0x4b7: @ Trace(Stack[-1])
0x4b8: Pop(1)
0x4b9: Stack[-3] = (bool) 0
0x4ba: Return(); Pop(2)

0x4bb: Stack[-3] = Stack[-1]
0x4bc: Return(); Pop(2)

0x4bd: Stack[-1] = 0
0x4be: PushEmpty(object, object, int, object, object, int)
0x4bf: PushEmpty(object)
0x4c0: Call2 0x4b1

0x4c1: Stack[-4] = Stack[-1]
0x4c2: Pop(1)
0x4c3: @@ Find(Stack[-7], Stack[-2])
0x4c4: Pop(0)
0x4c5: Pop(0); Push((bool) Stack[-2] == 0)
0x4c6: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4c7: Push("Can't find diary parent with id: ")
0x4c8: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4c9: @ Trace(Stack[-1])
0x4ca: Pop(1)
0x4cb: Stack[-9] = (bool) 0
0x4cc: Return(); Pop(6)

0x4cd: @@ AddChild(Stack[-8])
0x4ce: Pop(0)
0x4cf: Push((int) 7)
0x4d0: @ SendWorldWndMessage(Stack[-1])
0x4d1: Pop(1)
0x4d2: @@ GetCategory(Stack[-1])
0x4d3: Pop(0)
0x4d4: @ SetDiarySection(Stack[-1])
0x4d5: Pop(0)
0x4d6: Stack[-9] = (bool) 0
0x4d7: Return(); Pop(6)

0x4d8: Stack[-2] = 0
0x4d9: Stack[-3] = 0
0x4da: PushEmpty(int, int)
0x4db: Push("branch")
0x4dc: @ GetVariable(Stack[-1], Stack[-2])
0x4dd: Pop(1)
0x4de: Push((int) 0)
0x4df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e1: Stack[-3] = (int) 1
0x4e2: Return(); Pop(2)

0x4e3: GOTO 0x4e9

0x4e4: Push((int) 1)
0x4e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e7: Stack[-3] = (int) 2
0x4e8: Return(); Pop(2)

0x4e9: Stack[-3] = (int) 3
0x4ea: Return(); Pop(2)

0x4eb: Stack[-1] = (int) 515573
0x4ec: Return(); Pop(0)

0x4ed: Stack[-1] = (int) 504032
0x4ee: Return(); Pop(0)

0x4ef: Stack[-1] = "ui/NPC_Bakalavr.png"
0x4f0: Return(); Pop(0)

0x4f1: Stack[-1] = "ui/NPC_Bakalavr_b.png"
0x4f2: Return(); Pop(0)

0x4f3: Stack[-1] = (bool) 1
0x4f4: Return(); Pop(0)

