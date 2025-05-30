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
	Agression
	SetMessage
	ClearReplies
	AddReply
	Smile
	all
	idle
	Sorrow
	Neutral
	Doubt
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
	k4q03
	ook4BurahIndoor1
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

RunOp = 0x1d0
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbf Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1d4 Vars = (string)
		EVENT_6 Op = 0x1e8 Vars = ()
		EVENT_5 Op = 0x1f5 Vars = ()
		EVENT_7 Op = 0x23e Vars = (int)
		EVENT_45 Op = 0x280 Vars = (bool)
		EVENT_0 Op = 0x28c Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x315

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4d9

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4d7

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x4db

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x4dd

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4c6

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
0x31: Call2 0x429

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x36a

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
0x48: Call2 0x359

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
0x59: Call2 0x477

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x471

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Agression"
0x63: Call2 0xa9

0x64: Pop(1)
0x65: Push((int) 525808)
0x66: @@ SetMessage(Stack[-1])
0x67: Pop(1)
0x68: @@ ClearReplies()
0x69: Pop(0)
0x6a: Push((int) 542324)
0x6b: Push((int) 44685)
0x6c: Push((int) 44683)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 542325)
0x70: Push((int) 44686)
0x71: Push((int) 44684)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x8b

0x75: PushEmpty(string)
0x76: Stack[-1] = "Smile"
0x77: Call2 0xa9

0x78: Pop(1)
0x79: Push((int) 525811)
0x7a: @@ SetMessage(Stack[-1])
0x7b: Pop(1)
0x7c: @@ ClearReplies()
0x7d: Pop(0)
0x7e: Push((int) 525812)
0x7f: Push((int) -1)
0x80: Push((int) 27118)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: Push((int) 529232)
0x84: Push((int) -1)
0x85: Push((int) 30686)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: GOTO 0x8b

0x89: Return(); Pop(0)

0x8a: GOTO 0x55

0x8b: PushEmpty(bool)
0x8c: Call2 0x4df

0x8d: Pop(0)
0x8e: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x8f: @ lshWaitForAnimEnd()
0x90: Pop(0)
0x91: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: GOTO 0x99

0x94: PushEmpty(string)
0x95: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x96: Call2 0x3f4

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
0xab: Call2 0x4df

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
0xbb: Call2 0x404

0xbc: Pop(2)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0xc2: PushEmpty()
0xc3: Call2 0x422

0xc4: Pop(0)
0xc5: Push((int) 27115)
0xc6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x45f

0xcc: Pop(2)
0xcd: Push((int) 27116)
0xce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x468

0xd4: Pop(2)
0xd5: Push((int) 44698)
0xd6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd8: PushEmpty(object, object)
0xd9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xda: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdb: Call2 0x45f

0xdc: Pop(2)
0xdd: Push((int) 27114)
0xde: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0xe0: PushEmpty(bool, object)
0xe1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Call2 0x477

0xe3: Pop(1)
0xe4: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xe5: PushEmpty(object, object)
0xe6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe8: Call2 0x471

0xe9: Pop(2)
0xea: PushEmpty(string)
0xeb: Stack[-1] = "Agression"
0xec: Call2 0xa9

0xed: Pop(1)
0xee: Push((int) 525808)
0xef: @@ SetMessage(Stack[-1])
0xf0: Pop(1)
0xf1: @@ ClearReplies()
0xf2: Pop(0)
0xf3: Push((int) 542324)
0xf4: Push((int) 44685)
0xf5: Push((int) 44683)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: Push((int) 542325)
0xf9: Push((int) 44686)
0xfa: Push((int) 44684)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: Return(); Pop(0)

0xfe: PushEmpty(string)
0xff: Stack[-1] = "Smile"
0x100: Call2 0xa9

0x101: Pop(1)
0x102: Push((int) 525811)
0x103: @@ SetMessage(Stack[-1])
0x104: Pop(1)
0x105: @@ ClearReplies()
0x106: Pop(0)
0x107: Push((int) 525812)
0x108: Push((int) -1)
0x109: Push((int) 27118)
0x10a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b: Pop(3)
0x10c: Push((int) 529232)
0x10d: Push((int) -1)
0x10e: Push((int) 30686)
0x10f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110: Pop(3)
0x111: Return(); Pop(0)

0x112: Push((int) 44686)
0x113: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x115: PushEmpty(string)
0x116: Stack[-1] = "Agression"
0x117: Call2 0xa9

0x118: Pop(1)
0x119: Push((int) 542327)
0x11a: @@ SetMessage(Stack[-1])
0x11b: Pop(1)
0x11c: @@ ClearReplies()
0x11d: Pop(0)
0x11e: Push((int) 542330)
0x11f: Push((int) 44690)
0x120: Push((int) 44689)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: Push((int) 542332)
0x124: Push((int) 44692)
0x125: Push((int) 44691)
0x126: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x127: Pop(3)
0x128: Return(); Pop(0)

0x129: Push((int) 44692)
0x12a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x12c: PushEmpty(string)
0x12d: Stack[-1] = "Sorrow"
0x12e: Call2 0xa9

0x12f: Pop(1)
0x130: Push((int) 542333)
0x131: @@ SetMessage(Stack[-1])
0x132: Pop(1)
0x133: @@ ClearReplies()
0x134: Pop(0)
0x135: Push((int) 542334)
0x136: Push((int) 44694)
0x137: Push((int) 44693)
0x138: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x139: Pop(3)
0x13a: Return(); Pop(0)

0x13b: Push((int) 44694)
0x13c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x13e: PushEmpty(string)
0x13f: Stack[-1] = "Neutral"
0x140: Call2 0xa9

0x141: Pop(1)
0x142: Push((int) 542335)
0x143: @@ SetMessage(Stack[-1])
0x144: Pop(1)
0x145: @@ ClearReplies()
0x146: Pop(0)
0x147: Push((int) 542336)
0x148: Push((int) 44697)
0x149: Push((int) 44695)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: Push((int) 542337)
0x14d: Push((int) 44697)
0x14e: Push((int) 44696)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: Return(); Pop(0)

0x152: Push((int) 44697)
0x153: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x155: PushEmpty(string)
0x156: Stack[-1] = "Agression"
0x157: Call2 0xa9

0x158: Pop(1)
0x159: Push((int) 542338)
0x15a: @@ SetMessage(Stack[-1])
0x15b: Pop(1)
0x15c: @@ ClearReplies()
0x15d: Pop(0)
0x15e: Push((int) 542339)
0x15f: Push((int) -1)
0x160: Push((int) 44698)
0x161: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x162: Pop(3)
0x163: Push((int) 542340)
0x164: Push((int) 44690)
0x165: Push((int) 44700)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Return(); Pop(0)

0x169: Push((int) 44690)
0x16a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Doubt"
0x16e: Call2 0xa9

0x16f: Pop(1)
0x170: Push((int) 542331)
0x171: @@ SetMessage(Stack[-1])
0x172: Pop(1)
0x173: @@ ClearReplies()
0x174: Pop(0)
0x175: Push((int) 542341)
0x176: Push((int) 44704)
0x177: Push((int) 44702)
0x178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: Push((int) 542342)
0x17b: Push((int) 44704)
0x17c: Push((int) 44703)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: Return(); Pop(0)

0x180: Push((int) 44704)
0x181: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x183: PushEmpty(string)
0x184: Stack[-1] = "Neutral"
0x185: Call2 0xa9

0x186: Pop(1)
0x187: Push((int) 542343)
0x188: @@ SetMessage(Stack[-1])
0x189: Pop(1)
0x18a: @@ ClearReplies()
0x18b: Pop(0)
0x18c: Push((int) 525810)
0x18d: Push((int) -1)
0x18e: Push((int) 27116)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Return(); Pop(0)

0x192: Push((int) 44685)
0x193: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x195: PushEmpty(string)
0x196: Stack[-1] = "Sorrow"
0x197: Call2 0xa9

0x198: Pop(1)
0x199: Push((int) 542326)
0x19a: @@ SetMessage(Stack[-1])
0x19b: Pop(1)
0x19c: @@ ClearReplies()
0x19d: Pop(0)
0x19e: Push((int) 542328)
0x19f: Push((int) 44688)
0x1a0: Push((int) 44687)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Push((int) 542344)
0x1a4: Push((int) 44688)
0x1a5: Push((int) 44706)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: Return(); Pop(0)

0x1a9: Push((int) 44688)
0x1aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ac: PushEmpty(string)
0x1ad: Stack[-1] = "Neutral"
0x1ae: Call2 0xa9

0x1af: Pop(1)
0x1b0: Push((int) 542329)
0x1b1: @@ SetMessage(Stack[-1])
0x1b2: Pop(1)
0x1b3: @@ ClearReplies()
0x1b4: Pop(0)
0x1b5: Push((int) 525809)
0x1b6: Push((int) -1)
0x1b7: Push((int) 27115)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: Return(); Pop(0)

0x1bb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1bc: PushEmpty(bool)
0x1bd: Call2 0x4df

0x1be: Pop(0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c0: @ lshStopAnimation()
0x1c1: Pop(0)
0x1c2: GOTO 0x1c5

0x1c3: @ StopAnimation()
0x1c4: Pop(0)
0x1c5: Return(); Pop(0)

0x1c6: GOTO 0xc0

0x1c7: Return(); Pop(0)

0x1c8: PushEmpty()
0x1c9: PushEmpty(int, object)
0x1ca: Stack[-1] = Stack[-3]
0x1cb: Push(-2, 1); TaskCall(0)
0x1cc: Call2 0x0

0x1cd: Pop(-2, 1); TaskReturn
0x1ce: Pop(2)
0x1cf: Return(); Pop(0)

0x1d0: PushEmpty()
0x1d1: Call2 0x1f9

0x1d2: Pop(0)
0x1d3: Return(); Pop(0)

0x1d4: PushEmpty(bool, bool)
0x1d5: Push("cleanup")
0x1d6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1d8: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1d9: @ IsLoaded(Stack[-1])
0x1da: Pop(0)
0x1db: Pop(0); Push((bool) Stack[-1] == 0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1dd: PushEmpty(object)
0x1de: Call2 0x429

0x1df: Pop(0)
0x1e0: @ RemoveActor(Stack[-1])
0x1e1: Pop(1)
0x1e2: GOTO 0x1e7

0x1e3: Push("restore")
0x1e4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e6: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1e7: Return(); Pop(2)

0x1e8: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1e9: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ea: PushEmpty(object)
0x1eb: Call2 0x429

0x1ec: Pop(0)
0x1ed: @ RemoveActor(Stack[-1])
0x1ee: Pop(1)
0x1ef: @ Hold()
0x1f0: Pop(0)
0x1f1: PushEmpty()
0x1f2: Call2 0x264

0x1f3: Pop(0)
0x1f4: Return(); Pop(0)

0x1f5: PushEmpty()
0x1f6: Call2 0x273

0x1f7: Pop(0)
0x1f8: Return(); Pop(0)

0x1f9: PushEmpty(bool)
0x1fa: Call2 0x310

0x1fb: Pop(0)
0x1fc: Pop(1); Push((bool) Stack[-1] == 0)
0x1fd: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fe: @ Hold()
0x1ff: Pop(0)
0x200: @ GetDirection(Stack[-0])
0x201: Pop(0)
0x202: PushEmpty()
0x203: Call2 0x2a9

0x204: Pop(0)
0x205: GOTO 0x202

0x206: Return(); Pop(0)

0x207: PushEmpty(object, object)
0x208: Push("player")
0x209: @ FindActor(Stack[-2], Stack[-1])
0x20a: Pop(1)
0x20b: Pop(0); Push((bool) Stack[-1] == 0)
0x20c: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20d: Stack[-3] = (bool) 0
0x20e: Return(); Pop(2)

0x20f: PushEmpty(bool, object)
0x210: Stack[-1] = Stack[-3]
0x211: Call2 0x307

0x212: Stack[-5] = Stack[-2]
0x213: Pop(2)
0x214: Return(); Pop(2)

0x215: Stack[-1] = 0
0x216: Push(CvectorIndex(Stack[-0], 0))
0x217: Push(CvectorIndex(Stack[-0], 2))
0x218: @ RotateAsync(Stack[-2], Stack[-1])
0x219: Pop(2)
0x21a: Return(); Pop(0)

0x21b: PushEmpty(object, bool, object, bool)
0x21c: Push("player")
0x21d: @ FindActor(Stack[-3], Stack[-1])
0x21e: Pop(1)
0x21f: Pop(0); Push((bool) Stack[-2] == 0)
0x220: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x221: Stack[-5] = (bool) 0
0x222: Return(); Pop(4)

0x223: PushEmpty(float, object)
0x224: Stack[-1] = Stack[-4]
0x225: Call2 0x2f5

0x226: Pop(1)
0x227: Push((float)90000.0)
0x228: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x229: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22a: Stack[-5] = (bool) 0
0x22b: Return(); Pop(4)

0x22c: @ CanSee(Stack[-1], Stack[-2])
0x22d: Pop(0)
0x22e: Stack[-5] = Stack[-1]
0x22f: Return(); Pop(4)

0x230: Stack[-2] = 0
0x231: PushEmpty(float, float)
0x232: Push((int) 8)
0x233: Push((int) 16)
0x234: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x235: Pop(2)
0x236: Push((int) 10)
0x237: @ SetTimer(Stack[-1], Stack[-2])
0x238: Pop(1)
0x239: Return(); Pop(2)

0x23a: Push((int) 10)
0x23b: @ KillTimer(Stack[-1])
0x23c: Pop(1)
0x23d: Return(); Pop(0)

0x23e: PushEmpty()
0x23f: Push((int) 10)
0x240: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x242: PushEmpty()
0x243: Call2 0x23a

0x244: Pop(0)
0x245: PushEmpty(bool)
0x246: Stack[-1] = (bool) 0
0x247: PushEmpty(bool)
0x248: Call2 0x310

0x249: Pop(0)
0x24a: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24b: PushEmpty(bool)
0x24c: Call2 0x21b

0x24d: Pop(0)
0x24e: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24f: Stack[-1] = (bool) 1
0x250: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x251: PushEmpty(bool)
0x252: Call2 0x207

0x253: Pop(0)
0x254: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x255: PushEmpty(bool, object)
0x256: PushEmpty(object)
0x257: Call2 0x429

0x258: Stack[-2] = Stack[-1]
0x259: Pop(1)
0x25a: Call2 0x3a4

0x25b: Pop(2)
0x25c: GOTO 0x263

0x25d: PushEmpty()
0x25e: Call2 0x216

0x25f: Pop(0)
0x260: PushEmpty()
0x261: Call2 0x231

0x262: Pop(0)
0x263: Return(); Pop(0)

0x264: PushEmpty()
0x265: Call2 0x2f0

0x266: Pop(0)
0x267: PushEmpty()
0x268: Call2 0x23a

0x269: Pop(0)
0x26a: @ lshStopSpeech()
0x26b: Pop(0)
0x26c: @ lshStopAnimation()
0x26d: Pop(0)
0x26e: @ StopAsync()
0x26f: Pop(0)
0x270: @ Hold()
0x271: Pop(0)
0x272: Return(); Pop(0)

0x273: @ StopGroup0()
0x274: Pop(0)
0x275: PushEmpty()
0x276: Call2 0x23a

0x277: Pop(0)
0x278: PushEmpty(string)
0x279: Stack[-1] = "Neutral"
0x27a: Call2 0x3f4

0x27b: Pop(1)
0x27c: PushEmpty()
0x27d: Call2 0x231

0x27e: Pop(0)
0x27f: Return(); Pop(0)

0x280: PushEmpty()
0x281: Push(Stack[-1])
0x282: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x283: PushEmpty()
0x284: Call2 0x231

0x285: Pop(0)
0x286: GOTO 0x28b

0x287: PushEmpty(string)
0x288: Stack[-1] = "Neutral"
0x289: Call2 0x3f4

0x28a: Pop(1)
0x28b: Return(); Pop(0)

0x28c: PushEmpty(bool, bool)
0x28d: @ IsOverrideActive(Stack[-1])
0x28e: Pop(0)
0x28f: Pop(0); Push((bool) Stack[-1] == 0)
0x290: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x291: EventDisable(0)
0x292: PushEmpty()
0x293: Call2 0x2f0

0x294: Pop(0)
0x295: PushEmpty(bool, object)
0x296: Stack[-1] = Stack[-5]
0x297: Call2 0x307

0x298: Pop(2)
0x299: EventEnable(0)
0x29a: PushEmpty(object)
0x29b: Stack[-1] = Stack[-4]
0x29c: Call2 0x1c8

0x29d: Pop(1)
0x29e: PushEmpty(string)
0x29f: Stack[-1] = "Neutral"
0x2a0: Call2 0x3f4

0x2a1: Pop(1)
0x2a2: PushEmpty()
0x2a3: Call2 0x23a

0x2a4: Pop(0)
0x2a5: PushEmpty()
0x2a6: Call2 0x231

0x2a7: Pop(0)
0x2a8: Return(); Pop(2)

0x2a9: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x2aa: @ WaitForAnimEnd()
0x2ab: Pop(0)
0x2ac: PushEmpty(bool)
0x2ad: Call2 0x310

0x2ae: Pop(0)
0x2af: Pop(1); Push((bool) Stack[-1] == 0)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: Return(); Pop(12)

0x2b2: PushEmpty(int)
0x2b3: Call2 0x44e

0x2b4: Stack[-7] = Stack[-1]
0x2b5: Pop(1)
0x2b6: Stack[-5] = (int) 0
0x2b7: PushEmpty(bool)
0x2b8: Stack[-1] = (bool) 0
0x2b9: Push((int) 5)
0x2ba: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2bc: PushEmpty(bool)
0x2bd: Call2 0x310

0x2be: Pop(0)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2c0: Stack[-1] = (bool) 1
0x2c1: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2c2: Pop(0); Push((bool) Stack[-6] == 0)
0x2c3: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c4: Push((int) 3)
0x2c5: @ Sleep(Stack[-1], Stack[-5])
0x2c6: Pop(1)
0x2c7: Pop(0); Push((bool) Stack[-4] == 0)
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c9: GOTO 0x2eb

0x2ca: GOTO 0x2e0

0x2cb: @ irand(Stack[-3], Stack[-6])
0x2cc: Pop(0)
0x2cd: Push((int) 5)
0x2ce: @ irand(Stack[-3], Stack[-1])
0x2cf: Pop(1)
0x2d0: Push((int) 0)
0x2d1: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d3: Stack[-3] = (int) 0
0x2d4: Push("all")
0x2d5: PushEmpty(string, int)
0x2d6: Stack[-1] = Stack[-6]
0x2d7: Call2 0x447

0x2d8: Pop(1)
0x2d9: @ PlayAnimation(Stack[-2], Stack[-1])
0x2da: Pop(2)
0x2db: @ WaitForAnimEnd(Stack[-1])
0x2dc: Pop(0)
0x2dd: Pop(0); Push((bool) Stack[-1] == 0)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2df: GOTO 0x2eb

0x2e0: PushEmpty(bool)
0x2e1: Call2 0x2ee

0x2e2: Pop(0)
0x2e3: Pop(1); Push((bool) Stack[-1] == 0)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e5: GOTO 0x2eb

0x2e6: @ ResetAAS()
0x2e7: Pop(0)
0x2e8: Push((int) 1)
0x2e9: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2ea: GOTO 0x2b7

0x2eb: @ ResetAAS()
0x2ec: Pop(0)
0x2ed: Return(); Pop(12)

0x2ee: Stack[-1] = (bool) 1
0x2ef: Return(); Pop(0)

0x2f0: @ StopAnimation()
0x2f1: Pop(0)
0x2f2: @ StopGroup0()
0x2f3: Pop(0)
0x2f4: Return(); Pop(0)

0x2f5: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2f6: @ GetPosition(Stack[-3])
0x2f7: Pop(0)
0x2f8: @@ GetPosition(Stack[-2])
0x2f9: Pop(0)
0x2fa: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2fb: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2fc: Return(); Pop(6)

0x2fd: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2fe: @ GetPosition(Stack[-3])
0x2ff: Pop(0)
0x300: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x301: Push(CvectorIndex(Stack[-2], 0))
0x302: Push(CvectorIndex(Stack[-3], 2))
0x303: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x304: Pop(2)
0x305: Stack[-8] = Stack[-1]
0x306: Return(); Pop(6)

0x307: PushEmpty(cvector, cvector)
0x308: @@ GetPosition(Stack[-1])
0x309: Pop(0)
0x30a: PushEmpty(bool, cvector)
0x30b: Stack[-1] = Stack[-3]
0x30c: Call2 0x2fd

0x30d: Stack[-6] = Stack[-2]
0x30e: Pop(2)
0x30f: Return(); Pop(2)

0x310: PushEmpty(bool, bool)
0x311: @ IsLoaded(Stack[-1])
0x312: Pop(0)
0x313: Stack[-3] = Stack[-1]
0x314: Return(); Pop(2)

0x315: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x316: @@ GetPosition(Stack[-8])
0x317: Pop(0)
0x318: @@ GetEyesHeight(Stack[-9])
0x319: Pop(0)
0x31a: Push(CvectorIndex(Stack[-8], 1))
0x31b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x31c: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x31d: @ GetPosition(Stack[-7])
0x31e: Pop(0)
0x31f: @ GetEyesHeight(Stack[-9])
0x320: Pop(0)
0x321: Push(CvectorIndex(Stack[-7], 1))
0x322: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x323: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x324: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x325: Push(CvectorIndex(Stack[-6], 1))
0x326: Stack[-1] = (int) 0
0x327: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x328: Pop(0); Push(Stack[-6] | Stack[-6]);
0x329: Pop(1); Push(Sqrt(Stack[-1]))
0x32a: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x32b: Stack[-5] = -Stack[-6]; Pop(0);
0x32c: Pop(0); Push(Stack[-6] * Stack[-19]);
0x32d: PushEmpty(cvector, cvector)
0x32e: Push(CVector(0.0, 1.0, 0.0))
0x32f: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x330: Call2 0x42f

0x331: Pop(1)
0x332: Push((int) 25)
0x333: Pop(2); Push(Stack[-2] * Stack[-1]);
0x334: Pop(2); Push(Stack[-2] + Stack[-1]);
0x335: Push(CVector(0.0, 10.0, 0.0))
0x336: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x337: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x338: @ IsOverrideActive(Stack[-2])
0x339: Pop(0)
0x33a: Push(Stack[-2])
0x33b: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33c: Stack[-21] = (bool) 0
0x33d: Return(); Pop(18)

0x33e: @ StopWorld()
0x33f: Pop(0)
0x340: @ CameraTransit(Stack[-3], Stack[-5])
0x341: Pop(0)
0x342: Push(CvectorIndex(Stack[-4], 0))
0x343: Push(CvectorIndex(Stack[-5], 2))
0x344: @ Rotate(Stack[-2], Stack[-1])
0x345: Pop(2)
0x346: PushEmpty(bool)
0x347: Call2 0x4df

0x348: Pop(0)
0x349: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x34a: GOTO 0x353

0x34b: Push("head")
0x34c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x34d: Pop(1)
0x34e: Push(Stack[-1])
0x34f: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x350: Push("head")
0x351: @ LookAsyncCamera(Stack[-1])
0x352: Pop(1)
0x353: @ CameraWaitForPlayFinish()
0x354: Pop(0)
0x355: @ ResumeWorld()
0x356: Pop(0)
0x357: Stack[-21] = (bool) 1
0x358: Return(); Pop(18)

0x359: PushEmpty(bool, bool)
0x35a: @ CameraSwitchToNormal()
0x35b: Pop(0)
0x35c: PushEmpty(bool)
0x35d: Call2 0x4df

0x35e: Pop(0)
0x35f: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x360: GOTO 0x369

0x361: Push("head")
0x362: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x363: Pop(1)
0x364: Push(Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x366: Push("head")
0x367: @ UnlookAsync(Stack[-1])
0x368: Pop(1)
0x369: Return(); Pop(2)

0x36a: PushEmpty(int, int, int, int)
0x36b: Push("voice_common")
0x36c: @ GetVariable(Stack[-1], Stack[-3])
0x36d: Pop(1)
0x36e: Push(Stack[-2])
0x36f: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x370: PushEmpty(bool, object)
0x371: Stack[-1] = Stack[-7]
0x372: Call2 0x3a4

0x373: Pop(1)
0x374: Pop(1); Push((bool) Stack[-1] == 0)
0x375: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x376: PushEmpty(bool, object)
0x377: Stack[-1] = Stack[-7]
0x378: Call2 0x3c9

0x379: Pop(1)
0x37a: Pop(1); Push((bool) Stack[-1] == 0)
0x37b: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37c: Stack[-6] = (bool) 0
0x37d: Return(); Pop(4)

0x37e: Push((int) 2)
0x37f: @ irand(Stack[-2], Stack[-1])
0x380: Pop(1)
0x381: Push(Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x383: Push("voice_common")
0x384: Push((int) 1)
0x385: Pop(1); Push(Stack[-4] + Stack[-1]);
0x386: Push((int) 3)
0x387: Pop(2); Push(Stack[-2] % Stack[-1]);
0x388: @ SetVariable(Stack[-2], Stack[-1])
0x389: Pop(2)
0x38a: GOTO 0x38f

0x38b: Push("voice_common")
0x38c: Push((int) 0)
0x38d: @ SetVariable(Stack[-2], Stack[-1])
0x38e: Pop(2)
0x38f: GOTO 0x3a2

0x390: PushEmpty(bool, object)
0x391: Stack[-1] = Stack[-7]
0x392: Call2 0x3c9

0x393: Pop(1)
0x394: Pop(1); Push((bool) Stack[-1] == 0)
0x395: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x396: PushEmpty(bool, object)
0x397: Stack[-1] = Stack[-7]
0x398: Call2 0x3a4

0x399: Pop(1)
0x39a: Pop(1); Push((bool) Stack[-1] == 0)
0x39b: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39c: Stack[-6] = (bool) 0
0x39d: Return(); Pop(4)

0x39e: Push("voice_common")
0x39f: Push((int) 1)
0x3a0: @ SetVariable(Stack[-2], Stack[-1])
0x3a1: Pop(2)
0x3a2: Stack[-6] = (bool) 1
0x3a3: Return(); Pop(4)

0x3a4: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3a5: Stack[-5] = "c"
0x3a6: Stack[-4] = (int) 0
0x3a7: Push((int) 1)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3a9: Push((int) 1)
0x3aa: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3ab: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3ac: @@ HasProperty(Stack[-1], Stack[-4])
0x3ad: Pop(1)
0x3ae: Pop(0); Push((bool) Stack[-3] == 0)
0x3af: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3b0: GOTO 0x3b4

0x3b1: Push((int) 1)
0x3b2: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3b3: GOTO 0x3a7

0x3b4: Pop(0); Push((bool) Stack[-4] == 0)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b6: Stack[-12] = (bool) 0
0x3b7: Return(); Pop(10)

0x3b8: Stack[-2] = (int) 0
0x3b9: Push((int) 1)
0x3ba: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bc: @ irand(Stack[-2], Stack[-4])
0x3bd: Pop(0)
0x3be: Push((int) 1)
0x3bf: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3c0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3c1: @@ GetProperty(Stack[-1], Stack[-2])
0x3c2: Pop(1)
0x3c3: PushEmpty(bool, string)
0x3c4: Stack[-1] = Stack[-3]
0x3c5: Call2 0x413

0x3c6: Stack[-14] = Stack[-2]
0x3c7: Pop(2)
0x3c8: Return(); Pop(10)

0x3c9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3ca: Push("d")
0x3cb: PushEmpty(int)
0x3cc: Call2 0x43e

0x3cd: Pop(0)
0x3ce: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3cf: Push("m")
0x3d0: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3d1: Stack[-4] = (int) 0
0x3d2: Push((int) 1)
0x3d3: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3d4: Push((int) 1)
0x3d5: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3d6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3d7: @@ HasProperty(Stack[-1], Stack[-4])
0x3d8: Pop(1)
0x3d9: Pop(0); Push((bool) Stack[-3] == 0)
0x3da: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3db: GOTO 0x3df

0x3dc: Push((int) 1)
0x3dd: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3de: GOTO 0x3d2

0x3df: Pop(0); Push((bool) Stack[-4] == 0)
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e1: Stack[-12] = (bool) 0
0x3e2: Return(); Pop(10)

0x3e3: Stack[-2] = (int) 0
0x3e4: Push((int) 1)
0x3e5: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e7: @ irand(Stack[-2], Stack[-4])
0x3e8: Pop(0)
0x3e9: Push((int) 1)
0x3ea: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3eb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3ec: @@ GetProperty(Stack[-1], Stack[-2])
0x3ed: Pop(1)
0x3ee: PushEmpty(bool, string)
0x3ef: Stack[-1] = Stack[-3]
0x3f0: Call2 0x413

0x3f1: Stack[-14] = Stack[-2]
0x3f2: Pop(2)
0x3f3: Return(); Pop(10)

0x3f4: PushEmpty(bool, float, float, bool, float, float)
0x3f5: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3f6: Pop(0)
0x3f7: Push(Stack[-3])
0x3f8: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3f9: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3fa: Pop(0)
0x3fb: Push((bool) 0)
0x3fc: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3fd: Pop(1)
0x3fe: GOTO 0x403

0x3ff: Push("Can't find lsh animation : ")
0x400: Pop(1); Push(Stack[-1] + Stack[-8]);
0x401: @ Trace(Stack[-1])
0x402: Pop(1)
0x403: Return(); Pop(6)

0x404: PushEmpty(bool, float, float, bool, float, float)
0x405: @ lshHasAnimation(Stack[-3], Stack[-8])
0x406: Pop(0)
0x407: Push(Stack[-3])
0x408: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x409: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x40a: Pop(0)
0x40b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x40c: Pop(0)
0x40d: GOTO 0x412

0x40e: Push("Can't find lsh animation : ")
0x40f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x410: @ Trace(Stack[-1])
0x411: Pop(1)
0x412: Return(); Pop(6)

0x413: PushEmpty(bool, bool)
0x414: PushEmpty(bool)
0x415: Call2 0x4df

0x416: Pop(0)
0x417: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x418: @ lshHasSpeech(Stack[-1], Stack[-3])
0x419: Pop(0)
0x41a: Push(Stack[-1])
0x41b: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41c: @ lshPlaySpeech(Stack[-3])
0x41d: Pop(0)
0x41e: Stack[-4] = (bool) 1
0x41f: Return(); Pop(2)

0x420: Stack[-4] = (bool) 0
0x421: Return(); Pop(2)

0x422: PushEmpty(bool)
0x423: Call2 0x4df

0x424: Pop(0)
0x425: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x426: @ lshStopSpeech()
0x427: Pop(0)
0x428: Return(); Pop(0)

0x429: PushEmpty(object, object)
0x42a: @ self(Stack[-1])
0x42b: Pop(0)
0x42c: Stack[-3] = Stack[-1]
0x42d: Return(); Pop(2)

0x42e: Stack[-1] = 0
0x42f: PushEmpty(float, float)
0x430: Pop(0); Push(Stack[-3] | Stack[-3]);
0x431: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x432: Push((float)0.0)
0x433: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x434: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x435: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x436: Return(); Pop(2)

0x437: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x438: Return(); Pop(2)

0x439: PushEmpty(int, int)
0x43a: @ GetVariable(Stack[-3], Stack[-1])
0x43b: Pop(0)
0x43c: Stack[-4] = Stack[-1]
0x43d: Return(); Pop(2)

0x43e: PushEmpty(float, float)
0x43f: @ GetGameTime(Stack[-1])
0x440: Pop(0)
0x441: Push((int) 1)
0x442: PushEmpty(int)
0x443: Push((int) 24)
0x444: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x445: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x446: Return(); Pop(2)

0x447: PushEmpty(string, string)
0x448: Stack[-1] = "idle"
0x449: Push(Stack[-3])
0x44a: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x44b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x44c: Stack[-4] = Stack[-1]
0x44d: Return(); Pop(2)

0x44e: PushEmpty(int, bool, int, bool)
0x44f: Stack[-2] = (int) 0
0x450: Push("all")
0x451: PushEmpty(string, int)
0x452: Stack[-1] = Stack[-5]
0x453: Call2 0x447

0x454: Pop(1)
0x455: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x456: Pop(2)
0x457: Pop(0); Push((bool) Stack[-1] == 0)
0x458: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x459: GOTO 0x45d

0x45a: Push((int) 1)
0x45b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x45c: GOTO 0x450

0x45d: Stack[-5] = Stack[-2]
0x45e: Return(); Pop(4)

0x45f: PushEmpty()
0x460: Push("k4q03")
0x461: Push((int) 3)
0x462: @ SetVariable(Stack[-2], Stack[-1])
0x463: Pop(2)
0x464: PushEmpty()
0x465: Call2 0x490

0x466: Pop(0)
0x467: Return(); Pop(0)

0x468: PushEmpty()
0x469: Push("k4q03")
0x46a: Push((int) 4)
0x46b: @ SetVariable(Stack[-2], Stack[-1])
0x46c: Pop(2)
0x46d: PushEmpty()
0x46e: Call2 0x483

0x46f: Pop(0)
0x470: Return(); Pop(0)

0x471: PushEmpty()
0x472: Push("ook4BurahIndoor1")
0x473: Push((int) 1)
0x474: @ SetVariable(Stack[-2], Stack[-1])
0x475: Pop(2)
0x476: Return(); Pop(0)

0x477: PushEmpty()
0x478: PushEmpty(int, string)
0x479: Stack[-1] = "ook4BurahIndoor1"
0x47a: Call2 0x439

0x47b: Pop(1)
0x47c: Push((int) 0)
0x47d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x47e: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47f: Stack[-2] = (bool) 1
0x480: Return(); Pop(0)

0x481: Stack[-2] = (bool) 0
0x482: Return(); Pop(0)

0x483: PushEmpty(object, object)
0x484: Push((int) 506)
0x485: Push((int) 2)
0x486: Push((int) 529270)
0x487: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x488: Pop(3)
0x489: PushEmpty(bool, object, int)
0x48a: Stack[-2] = Stack[-4]
0x48b: Stack[-1] = (int) 384
0x48c: Call2 0x4aa

0x48d: Pop(3)
0x48e: Return(); Pop(2)

0x48f: Stack[-1] = 0
0x490: PushEmpty(object, object)
0x491: Push((int) 505)
0x492: Push((int) 2)
0x493: Push((int) 529269)
0x494: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x495: Pop(3)
0x496: PushEmpty(bool, object, int)
0x497: Stack[-2] = Stack[-4]
0x498: Stack[-1] = (int) 384
0x499: Call2 0x4aa

0x49a: Pop(3)
0x49b: Return(); Pop(2)

0x49c: Stack[-1] = 0
0x49d: PushEmpty(object, object)
0x49e: @ GetDiaryRoot(Stack[-1])
0x49f: Pop(0)
0x4a0: Pop(0); Push((bool) Stack[-1] == 0)
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a2: Push("Can't retrieve diary root")
0x4a3: @ Trace(Stack[-1])
0x4a4: Pop(1)
0x4a5: Stack[-3] = (bool) 0
0x4a6: Return(); Pop(2)

0x4a7: Stack[-3] = Stack[-1]
0x4a8: Return(); Pop(2)

0x4a9: Stack[-1] = 0
0x4aa: PushEmpty(object, object, int, object, object, int)
0x4ab: PushEmpty(object)
0x4ac: Call2 0x49d

0x4ad: Stack[-4] = Stack[-1]
0x4ae: Pop(1)
0x4af: @@ Find(Stack[-7], Stack[-2])
0x4b0: Pop(0)
0x4b1: Pop(0); Push((bool) Stack[-2] == 0)
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b3: Push("Can't find diary parent with id: ")
0x4b4: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4b5: @ Trace(Stack[-1])
0x4b6: Pop(1)
0x4b7: Stack[-9] = (bool) 0
0x4b8: Return(); Pop(6)

0x4b9: @@ AddChild(Stack[-8])
0x4ba: Pop(0)
0x4bb: Push((int) 7)
0x4bc: @ SendWorldWndMessage(Stack[-1])
0x4bd: Pop(1)
0x4be: @@ GetCategory(Stack[-1])
0x4bf: Pop(0)
0x4c0: @ SetDiarySection(Stack[-1])
0x4c1: Pop(0)
0x4c2: Stack[-9] = (bool) 0
0x4c3: Return(); Pop(6)

0x4c4: Stack[-2] = 0
0x4c5: Stack[-3] = 0
0x4c6: PushEmpty(int, int)
0x4c7: Push("branch")
0x4c8: @ GetVariable(Stack[-1], Stack[-2])
0x4c9: Pop(1)
0x4ca: Push((int) 0)
0x4cb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4cc: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4cd: Stack[-3] = (int) 1
0x4ce: Return(); Pop(2)

0x4cf: GOTO 0x4d5

0x4d0: Push((int) 1)
0x4d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d3: Stack[-3] = (int) 2
0x4d4: Return(); Pop(2)

0x4d5: Stack[-3] = (int) 3
0x4d6: Return(); Pop(2)

0x4d7: Stack[-1] = (int) 515592
0x4d8: Return(); Pop(0)

0x4d9: Stack[-1] = (int) 511961
0x4da: Return(); Pop(0)

0x4db: Stack[-1] = "ui/NPC_Burah.png"
0x4dc: Return(); Pop(0)

0x4dd: Stack[-1] = "ui/NPC_Burah_b.png"
0x4de: Return(); Pop(0)

0x4df: Stack[-1] = (bool) 1
0x4e0: Return(); Pop(0)

