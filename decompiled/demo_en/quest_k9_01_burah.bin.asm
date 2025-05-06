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
	Smile
	Agression
	Sorrow
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
	ook9BurahTermitnik2_1
	k9q01BurahTalk
	k9q01DankoTalk
	k9q01
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

RunOp = 0x1c1
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xaf Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1c5 Vars = (string)
		EVENT_6 Op = 0x1d9 Vars = ()
		EVENT_5 Op = 0x1e6 Vars = ()
		EVENT_7 Op = 0x22f Vars = (int)
		EVENT_45 Op = 0x271 Vars = (bool)
		EVENT_0 Op = 0x27d Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x306

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
0x31: Call2 0x41a

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x35b

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
0x48: Call2 0x34a

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
0x56: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x99

0x5a: Pop(1)
0x5b: Push((int) 526499)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool)
0x61: Stack[-1] = (bool) 0
0x62: PushEmpty(bool, object)
0x63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64: Call2 0x477

0x65: Pop(1)
0x66: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x67: PushEmpty(bool, object)
0x68: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69: Call2 0x483

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6c: Stack[-1] = (bool) 1
0x6d: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6e: Push((int) 526501)
0x6f: Push((int) 27768)
0x70: Push((int) 27767)
0x71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72: Pop(3)
0x73: Push((int) 526500)
0x74: Push((int) -1)
0x75: Push((int) 27766)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: GOTO 0x7b

0x79: Return(); Pop(0)

0x7a: GOTO 0x55

0x7b: PushEmpty(bool)
0x7c: Call2 0x4de

0x7d: Pop(0)
0x7e: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x7f: @ lshWaitForAnimEnd()
0x80: Pop(0)
0x81: Push( Stack[3 + Tasks[-1].StackPointer] )
0x82: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x83: GOTO 0x89

0x84: PushEmpty(string)
0x85: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x86: Call2 0x3e5

0x87: Pop(1)
0x88: GOTO 0x7f

0x89: GOTO 0x98

0x8a: Push("all")
0x8b: Push("idle")
0x8c: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: @ WaitForAnimEnd()
0x8f: Pop(0)
0x90: Push( Stack[3 + Tasks[-1].StackPointer] )
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: GOTO 0x98

0x93: Push("all")
0x94: Push("idle")
0x95: @ PlayAnimation(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: GOTO 0x8e

0x98: Return(); Pop(0)

0x99: PushEmpty()
0x9a: PushEmpty(bool)
0x9b: Call2 0x4de

0x9c: Pop(0)
0x9d: Pop(1); Push((bool) Stack[-1] == 0)
0x9e: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9f: Return(); Pop(0)

0xa0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa1: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa2: Return(); Pop(0)

0xa3: PushEmpty(string, bool)
0xa4: Stack[-2] = Stack[-3]
0xa5: Push("")
0xa6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa8: Stack[-1] = (bool) 0
0xa9: GOTO 0xab

0xaa: Stack[-1] = (bool) 1
0xab: Call2 0x3f5

0xac: Pop(2)
0xad: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xae: Return(); Pop(0)

0xaf: PushEmpty()
0xb0: Push((int) 1)
0xb1: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0xb2: PushEmpty()
0xb3: Call2 0x413

0xb4: Pop(0)
0xb5: Push((int) 27767)
0xb6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xb8: PushEmpty(object, object)
0xb9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbb: Call2 0x450

0xbc: Pop(2)
0xbd: PushEmpty(object, object)
0xbe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc0: Call2 0x456

0xc1: Pop(2)
0xc2: PushEmpty(object, object)
0xc3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc5: Call2 0x45c

0xc6: Pop(2)
0xc7: Push((int) 27765)
0xc8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xca: PushEmpty(string)
0xcb: Stack[-1] = "Neutral"
0xcc: Call2 0x99

0xcd: Pop(1)
0xce: Push((int) 526499)
0xcf: @@ SetMessage(Stack[-1])
0xd0: Pop(1)
0xd1: @@ ClearReplies()
0xd2: Pop(0)
0xd3: PushEmpty(bool)
0xd4: Stack[-1] = (bool) 0
0xd5: PushEmpty(bool, object)
0xd6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Call2 0x477

0xd8: Pop(1)
0xd9: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xda: PushEmpty(bool, object)
0xdb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdc: Call2 0x483

0xdd: Pop(1)
0xde: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdf: Stack[-1] = (bool) 1
0xe0: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe1: Push((int) 526501)
0xe2: Push((int) 27768)
0xe3: Push((int) 27767)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Push((int) 526500)
0xe7: Push((int) -1)
0xe8: Push((int) 27766)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Push((int) 27768)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral"
0xf1: Call2 0x99

0xf2: Pop(1)
0xf3: Push((int) 526502)
0xf4: @@ SetMessage(Stack[-1])
0xf5: Pop(1)
0xf6: @@ ClearReplies()
0xf7: Pop(0)
0xf8: Push((int) 526503)
0xf9: Push((int) 30235)
0xfa: Push((int) 27769)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: Push((int) 528825)
0xfe: Push((int) 30242)
0xff: Push((int) 30241)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Push((int) 30242)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral"
0x108: Call2 0x99

0x109: Pop(1)
0x10a: Push((int) 528826)
0x10b: @@ SetMessage(Stack[-1])
0x10c: Pop(1)
0x10d: @@ ClearReplies()
0x10e: Pop(0)
0x10f: Push((int) 528827)
0x110: Push((int) 30235)
0x111: Push((int) 30243)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: Return(); Pop(0)

0x115: Push((int) 30235)
0x116: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x118: PushEmpty(string)
0x119: Stack[-1] = "Neutral"
0x11a: Call2 0x99

0x11b: Pop(1)
0x11c: Push((int) 528819)
0x11d: @@ SetMessage(Stack[-1])
0x11e: Pop(1)
0x11f: @@ ClearReplies()
0x120: Pop(0)
0x121: Push((int) 528820)
0x122: Push((int) 30246)
0x123: Push((int) 30236)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: Push((int) 528828)
0x127: Push((int) 30246)
0x128: Push((int) 30245)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: Push((int) 30246)
0x12d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x12f: PushEmpty(string)
0x130: Stack[-1] = "Smile"
0x131: Call2 0x99

0x132: Pop(1)
0x133: Push((int) 528829)
0x134: @@ SetMessage(Stack[-1])
0x135: Pop(1)
0x136: @@ ClearReplies()
0x137: Pop(0)
0x138: Push((int) 528830)
0x139: Push((int) 30248)
0x13a: Push((int) 30247)
0x13b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c: Pop(3)
0x13d: Push((int) 528833)
0x13e: Push((int) 30252)
0x13f: Push((int) 30251)
0x140: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(3)
0x142: Return(); Pop(0)

0x143: Push((int) 30252)
0x144: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x145: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x146: PushEmpty(string)
0x147: Stack[-1] = "Agression"
0x148: Call2 0x99

0x149: Pop(1)
0x14a: Push((int) 528834)
0x14b: @@ SetMessage(Stack[-1])
0x14c: Pop(1)
0x14d: @@ ClearReplies()
0x14e: Pop(0)
0x14f: Push((int) 528835)
0x150: Push((int) 30248)
0x151: Push((int) 30253)
0x152: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x153: Pop(3)
0x154: Return(); Pop(0)

0x155: Push((int) 30248)
0x156: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x158: PushEmpty(string)
0x159: Stack[-1] = "Sorrow"
0x15a: Call2 0x99

0x15b: Pop(1)
0x15c: Push((int) 528831)
0x15d: @@ SetMessage(Stack[-1])
0x15e: Pop(1)
0x15f: @@ ClearReplies()
0x160: Pop(0)
0x161: Push((int) 528832)
0x162: Push((int) 30237)
0x163: Push((int) 30249)
0x164: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x165: Pop(3)
0x166: Push((int) 542482)
0x167: Push((int) 44868)
0x168: Push((int) 44867)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: Return(); Pop(0)

0x16c: Push((int) 30237)
0x16d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16e: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x16f: PushEmpty(string)
0x170: Stack[-1] = "Sorrow"
0x171: Call2 0x99

0x172: Pop(1)
0x173: Push((int) 528821)
0x174: @@ SetMessage(Stack[-1])
0x175: Pop(1)
0x176: @@ ClearReplies()
0x177: Pop(0)
0x178: Push((int) 528822)
0x179: Push((int) 30239)
0x17a: Push((int) 30238)
0x17b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17c: Pop(3)
0x17d: Return(); Pop(0)

0x17e: Push((int) 30239)
0x17f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x181: PushEmpty(string)
0x182: Stack[-1] = "Doubt"
0x183: Call2 0x99

0x184: Pop(1)
0x185: Push((int) 528823)
0x186: @@ SetMessage(Stack[-1])
0x187: Pop(1)
0x188: @@ ClearReplies()
0x189: Pop(0)
0x18a: Push((int) 528824)
0x18b: Push((int) -1)
0x18c: Push((int) 30240)
0x18d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18e: Pop(3)
0x18f: Push((int) 541115)
0x190: Push((int) 44868)
0x191: Push((int) 43231)
0x192: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x193: Pop(3)
0x194: Return(); Pop(0)

0x195: Push((int) 44868)
0x196: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x197: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x198: PushEmpty(string)
0x199: Stack[-1] = "Neutral"
0x19a: Call2 0x99

0x19b: Pop(1)
0x19c: Push((int) 542483)
0x19d: @@ SetMessage(Stack[-1])
0x19e: Pop(1)
0x19f: @@ ClearReplies()
0x1a0: Pop(0)
0x1a1: Push((int) 542484)
0x1a2: Push((int) -1)
0x1a3: Push((int) 44870)
0x1a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a5: Pop(3)
0x1a6: Push((int) 542485)
0x1a7: Push((int) -1)
0x1a8: Push((int) 44871)
0x1a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1aa: Pop(3)
0x1ab: Return(); Pop(0)

0x1ac: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ad: PushEmpty(bool)
0x1ae: Call2 0x4de

0x1af: Pop(0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b1: @ lshStopAnimation()
0x1b2: Pop(0)
0x1b3: GOTO 0x1b6

0x1b4: @ StopAnimation()
0x1b5: Pop(0)
0x1b6: Return(); Pop(0)

0x1b7: GOTO 0xb0

0x1b8: Return(); Pop(0)

0x1b9: PushEmpty()
0x1ba: PushEmpty(int, object)
0x1bb: Stack[-1] = Stack[-3]
0x1bc: Push(-2, 1); TaskCall(0)
0x1bd: Call2 0x0

0x1be: Pop(-2, 1); TaskReturn
0x1bf: Pop(2)
0x1c0: Return(); Pop(0)

0x1c1: PushEmpty()
0x1c2: Call2 0x1ea

0x1c3: Pop(0)
0x1c4: Return(); Pop(0)

0x1c5: PushEmpty(bool, bool)
0x1c6: Push("cleanup")
0x1c7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1c9: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1ca: @ IsLoaded(Stack[-1])
0x1cb: Pop(0)
0x1cc: Pop(0); Push((bool) Stack[-1] == 0)
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1ce: PushEmpty(object)
0x1cf: Call2 0x41a

0x1d0: Pop(0)
0x1d1: @ RemoveActor(Stack[-1])
0x1d2: Pop(1)
0x1d3: GOTO 0x1d8

0x1d4: Push("restore")
0x1d5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d7: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1d8: Return(); Pop(2)

0x1d9: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1da: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1db: PushEmpty(object)
0x1dc: Call2 0x41a

0x1dd: Pop(0)
0x1de: @ RemoveActor(Stack[-1])
0x1df: Pop(1)
0x1e0: @ Hold()
0x1e1: Pop(0)
0x1e2: PushEmpty()
0x1e3: Call2 0x255

0x1e4: Pop(0)
0x1e5: Return(); Pop(0)

0x1e6: PushEmpty()
0x1e7: Call2 0x264

0x1e8: Pop(0)
0x1e9: Return(); Pop(0)

0x1ea: PushEmpty(bool)
0x1eb: Call2 0x301

0x1ec: Pop(0)
0x1ed: Pop(1); Push((bool) Stack[-1] == 0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ef: @ Hold()
0x1f0: Pop(0)
0x1f1: @ GetDirection(Stack[-0])
0x1f2: Pop(0)
0x1f3: PushEmpty()
0x1f4: Call2 0x29a

0x1f5: Pop(0)
0x1f6: GOTO 0x1f3

0x1f7: Return(); Pop(0)

0x1f8: PushEmpty(object, object)
0x1f9: Push("player")
0x1fa: @ FindActor(Stack[-2], Stack[-1])
0x1fb: Pop(1)
0x1fc: Pop(0); Push((bool) Stack[-1] == 0)
0x1fd: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fe: Stack[-3] = (bool) 0
0x1ff: Return(); Pop(2)

0x200: PushEmpty(bool, object)
0x201: Stack[-1] = Stack[-3]
0x202: Call2 0x2f8

0x203: Stack[-5] = Stack[-2]
0x204: Pop(2)
0x205: Return(); Pop(2)

0x206: Stack[-1] = 0
0x207: Push(CvectorIndex(Stack[-0], 0))
0x208: Push(CvectorIndex(Stack[-0], 2))
0x209: @ RotateAsync(Stack[-2], Stack[-1])
0x20a: Pop(2)
0x20b: Return(); Pop(0)

0x20c: PushEmpty(object, bool, object, bool)
0x20d: Push("player")
0x20e: @ FindActor(Stack[-3], Stack[-1])
0x20f: Pop(1)
0x210: Pop(0); Push((bool) Stack[-2] == 0)
0x211: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x212: Stack[-5] = (bool) 0
0x213: Return(); Pop(4)

0x214: PushEmpty(float, object)
0x215: Stack[-1] = Stack[-4]
0x216: Call2 0x2e6

0x217: Pop(1)
0x218: Push((float)90000.0)
0x219: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21b: Stack[-5] = (bool) 0
0x21c: Return(); Pop(4)

0x21d: @ CanSee(Stack[-1], Stack[-2])
0x21e: Pop(0)
0x21f: Stack[-5] = Stack[-1]
0x220: Return(); Pop(4)

0x221: Stack[-2] = 0
0x222: PushEmpty(float, float)
0x223: Push((int) 8)
0x224: Push((int) 16)
0x225: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x226: Pop(2)
0x227: Push((int) 10)
0x228: @ SetTimer(Stack[-1], Stack[-2])
0x229: Pop(1)
0x22a: Return(); Pop(2)

0x22b: Push((int) 10)
0x22c: @ KillTimer(Stack[-1])
0x22d: Pop(1)
0x22e: Return(); Pop(0)

0x22f: PushEmpty()
0x230: Push((int) 10)
0x231: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x232: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x233: PushEmpty()
0x234: Call2 0x22b

0x235: Pop(0)
0x236: PushEmpty(bool)
0x237: Stack[-1] = (bool) 0
0x238: PushEmpty(bool)
0x239: Call2 0x301

0x23a: Pop(0)
0x23b: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23c: PushEmpty(bool)
0x23d: Call2 0x20c

0x23e: Pop(0)
0x23f: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x240: Stack[-1] = (bool) 1
0x241: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x242: PushEmpty(bool)
0x243: Call2 0x1f8

0x244: Pop(0)
0x245: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x246: PushEmpty(bool, object)
0x247: PushEmpty(object)
0x248: Call2 0x41a

0x249: Stack[-2] = Stack[-1]
0x24a: Pop(1)
0x24b: Call2 0x395

0x24c: Pop(2)
0x24d: GOTO 0x254

0x24e: PushEmpty()
0x24f: Call2 0x207

0x250: Pop(0)
0x251: PushEmpty()
0x252: Call2 0x222

0x253: Pop(0)
0x254: Return(); Pop(0)

0x255: PushEmpty()
0x256: Call2 0x2e1

0x257: Pop(0)
0x258: PushEmpty()
0x259: Call2 0x22b

0x25a: Pop(0)
0x25b: @ lshStopSpeech()
0x25c: Pop(0)
0x25d: @ lshStopAnimation()
0x25e: Pop(0)
0x25f: @ StopAsync()
0x260: Pop(0)
0x261: @ Hold()
0x262: Pop(0)
0x263: Return(); Pop(0)

0x264: @ StopGroup0()
0x265: Pop(0)
0x266: PushEmpty()
0x267: Call2 0x22b

0x268: Pop(0)
0x269: PushEmpty(string)
0x26a: Stack[-1] = "Neutral"
0x26b: Call2 0x3e5

0x26c: Pop(1)
0x26d: PushEmpty()
0x26e: Call2 0x222

0x26f: Pop(0)
0x270: Return(); Pop(0)

0x271: PushEmpty()
0x272: Push(Stack[-1])
0x273: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x274: PushEmpty()
0x275: Call2 0x222

0x276: Pop(0)
0x277: GOTO 0x27c

0x278: PushEmpty(string)
0x279: Stack[-1] = "Neutral"
0x27a: Call2 0x3e5

0x27b: Pop(1)
0x27c: Return(); Pop(0)

0x27d: PushEmpty(bool, bool)
0x27e: @ IsOverrideActive(Stack[-1])
0x27f: Pop(0)
0x280: Pop(0); Push((bool) Stack[-1] == 0)
0x281: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x282: EventDisable(0)
0x283: PushEmpty()
0x284: Call2 0x2e1

0x285: Pop(0)
0x286: PushEmpty(bool, object)
0x287: Stack[-1] = Stack[-5]
0x288: Call2 0x2f8

0x289: Pop(2)
0x28a: EventEnable(0)
0x28b: PushEmpty(object)
0x28c: Stack[-1] = Stack[-4]
0x28d: Call2 0x1b9

0x28e: Pop(1)
0x28f: PushEmpty(string)
0x290: Stack[-1] = "Neutral"
0x291: Call2 0x3e5

0x292: Pop(1)
0x293: PushEmpty()
0x294: Call2 0x22b

0x295: Pop(0)
0x296: PushEmpty()
0x297: Call2 0x222

0x298: Pop(0)
0x299: Return(); Pop(2)

0x29a: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x29b: @ WaitForAnimEnd()
0x29c: Pop(0)
0x29d: PushEmpty(bool)
0x29e: Call2 0x301

0x29f: Pop(0)
0x2a0: Pop(1); Push((bool) Stack[-1] == 0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a2: Return(); Pop(12)

0x2a3: PushEmpty(int)
0x2a4: Call2 0x43f

0x2a5: Stack[-7] = Stack[-1]
0x2a6: Pop(1)
0x2a7: Stack[-5] = (int) 0
0x2a8: PushEmpty(bool)
0x2a9: Stack[-1] = (bool) 0
0x2aa: Push((int) 5)
0x2ab: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2ad: PushEmpty(bool)
0x2ae: Call2 0x301

0x2af: Pop(0)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: Stack[-1] = (bool) 1
0x2b2: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2b3: Pop(0); Push((bool) Stack[-6] == 0)
0x2b4: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2b5: Push((int) 3)
0x2b6: @ Sleep(Stack[-1], Stack[-5])
0x2b7: Pop(1)
0x2b8: Pop(0); Push((bool) Stack[-4] == 0)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ba: GOTO 0x2dc

0x2bb: GOTO 0x2d1

0x2bc: @ irand(Stack[-3], Stack[-6])
0x2bd: Pop(0)
0x2be: Push((int) 5)
0x2bf: @ irand(Stack[-3], Stack[-1])
0x2c0: Pop(1)
0x2c1: Push((int) 0)
0x2c2: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c4: Stack[-3] = (int) 0
0x2c5: Push("all")
0x2c6: PushEmpty(string, int)
0x2c7: Stack[-1] = Stack[-6]
0x2c8: Call2 0x438

0x2c9: Pop(1)
0x2ca: @ PlayAnimation(Stack[-2], Stack[-1])
0x2cb: Pop(2)
0x2cc: @ WaitForAnimEnd(Stack[-1])
0x2cd: Pop(0)
0x2ce: Pop(0); Push((bool) Stack[-1] == 0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2d0: GOTO 0x2dc

0x2d1: PushEmpty(bool)
0x2d2: Call2 0x2df

0x2d3: Pop(0)
0x2d4: Pop(1); Push((bool) Stack[-1] == 0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d6: GOTO 0x2dc

0x2d7: @ ResetAAS()
0x2d8: Pop(0)
0x2d9: Push((int) 1)
0x2da: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2db: GOTO 0x2a8

0x2dc: @ ResetAAS()
0x2dd: Pop(0)
0x2de: Return(); Pop(12)

0x2df: Stack[-1] = (bool) 1
0x2e0: Return(); Pop(0)

0x2e1: @ StopAnimation()
0x2e2: Pop(0)
0x2e3: @ StopGroup0()
0x2e4: Pop(0)
0x2e5: Return(); Pop(0)

0x2e6: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2e7: @ GetPosition(Stack[-3])
0x2e8: Pop(0)
0x2e9: @@ GetPosition(Stack[-2])
0x2ea: Pop(0)
0x2eb: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2ec: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2ed: Return(); Pop(6)

0x2ee: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2ef: @ GetPosition(Stack[-3])
0x2f0: Pop(0)
0x2f1: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2f2: Push(CvectorIndex(Stack[-2], 0))
0x2f3: Push(CvectorIndex(Stack[-3], 2))
0x2f4: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2f5: Pop(2)
0x2f6: Stack[-8] = Stack[-1]
0x2f7: Return(); Pop(6)

0x2f8: PushEmpty(cvector, cvector)
0x2f9: @@ GetPosition(Stack[-1])
0x2fa: Pop(0)
0x2fb: PushEmpty(bool, cvector)
0x2fc: Stack[-1] = Stack[-3]
0x2fd: Call2 0x2ee

0x2fe: Stack[-6] = Stack[-2]
0x2ff: Pop(2)
0x300: Return(); Pop(2)

0x301: PushEmpty(bool, bool)
0x302: @ IsLoaded(Stack[-1])
0x303: Pop(0)
0x304: Stack[-3] = Stack[-1]
0x305: Return(); Pop(2)

0x306: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x307: @@ GetPosition(Stack[-8])
0x308: Pop(0)
0x309: @@ GetEyesHeight(Stack[-9])
0x30a: Pop(0)
0x30b: Push(CvectorIndex(Stack[-8], 1))
0x30c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x30d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x30e: @ GetPosition(Stack[-7])
0x30f: Pop(0)
0x310: @ GetEyesHeight(Stack[-9])
0x311: Pop(0)
0x312: Push(CvectorIndex(Stack[-7], 1))
0x313: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x314: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x315: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x316: Push(CvectorIndex(Stack[-6], 1))
0x317: Stack[-1] = (int) 0
0x318: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x319: Pop(0); Push(Stack[-6] | Stack[-6]);
0x31a: Pop(1); Push(Sqrt(Stack[-1]))
0x31b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x31c: Stack[-5] = -Stack[-6]; Pop(0);
0x31d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x31e: PushEmpty(cvector, cvector)
0x31f: Push(CVector(0.0, 1.0, 0.0))
0x320: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x321: Call2 0x420

0x322: Pop(1)
0x323: Push((int) 25)
0x324: Pop(2); Push(Stack[-2] * Stack[-1]);
0x325: Pop(2); Push(Stack[-2] + Stack[-1]);
0x326: Push(CVector(0.0, 10.0, 0.0))
0x327: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x328: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x329: @ IsOverrideActive(Stack[-2])
0x32a: Pop(0)
0x32b: Push(Stack[-2])
0x32c: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32d: Stack[-21] = (bool) 0
0x32e: Return(); Pop(18)

0x32f: @ StopWorld()
0x330: Pop(0)
0x331: @ CameraTransit(Stack[-3], Stack[-5])
0x332: Pop(0)
0x333: Push(CvectorIndex(Stack[-4], 0))
0x334: Push(CvectorIndex(Stack[-5], 2))
0x335: @ Rotate(Stack[-2], Stack[-1])
0x336: Pop(2)
0x337: PushEmpty(bool)
0x338: Call2 0x4de

0x339: Pop(0)
0x33a: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x33b: GOTO 0x344

0x33c: Push("head")
0x33d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x33e: Pop(1)
0x33f: Push(Stack[-1])
0x340: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x341: Push("head")
0x342: @ LookAsyncCamera(Stack[-1])
0x343: Pop(1)
0x344: @ CameraWaitForPlayFinish()
0x345: Pop(0)
0x346: @ ResumeWorld()
0x347: Pop(0)
0x348: Stack[-21] = (bool) 1
0x349: Return(); Pop(18)

0x34a: PushEmpty(bool, bool)
0x34b: @ CameraSwitchToNormal()
0x34c: Pop(0)
0x34d: PushEmpty(bool)
0x34e: Call2 0x4de

0x34f: Pop(0)
0x350: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x351: GOTO 0x35a

0x352: Push("head")
0x353: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x354: Pop(1)
0x355: Push(Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x357: Push("head")
0x358: @ UnlookAsync(Stack[-1])
0x359: Pop(1)
0x35a: Return(); Pop(2)

0x35b: PushEmpty(int, int, int, int)
0x35c: Push("voice_common")
0x35d: @ GetVariable(Stack[-1], Stack[-3])
0x35e: Pop(1)
0x35f: Push(Stack[-2])
0x360: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x361: PushEmpty(bool, object)
0x362: Stack[-1] = Stack[-7]
0x363: Call2 0x395

0x364: Pop(1)
0x365: Pop(1); Push((bool) Stack[-1] == 0)
0x366: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x367: PushEmpty(bool, object)
0x368: Stack[-1] = Stack[-7]
0x369: Call2 0x3ba

0x36a: Pop(1)
0x36b: Pop(1); Push((bool) Stack[-1] == 0)
0x36c: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36d: Stack[-6] = (bool) 0
0x36e: Return(); Pop(4)

0x36f: Push((int) 2)
0x370: @ irand(Stack[-2], Stack[-1])
0x371: Pop(1)
0x372: Push(Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x374: Push("voice_common")
0x375: Push((int) 1)
0x376: Pop(1); Push(Stack[-4] + Stack[-1]);
0x377: Push((int) 3)
0x378: Pop(2); Push(Stack[-2] % Stack[-1]);
0x379: @ SetVariable(Stack[-2], Stack[-1])
0x37a: Pop(2)
0x37b: GOTO 0x380

0x37c: Push("voice_common")
0x37d: Push((int) 0)
0x37e: @ SetVariable(Stack[-2], Stack[-1])
0x37f: Pop(2)
0x380: GOTO 0x393

0x381: PushEmpty(bool, object)
0x382: Stack[-1] = Stack[-7]
0x383: Call2 0x3ba

0x384: Pop(1)
0x385: Pop(1); Push((bool) Stack[-1] == 0)
0x386: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x387: PushEmpty(bool, object)
0x388: Stack[-1] = Stack[-7]
0x389: Call2 0x395

0x38a: Pop(1)
0x38b: Pop(1); Push((bool) Stack[-1] == 0)
0x38c: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38d: Stack[-6] = (bool) 0
0x38e: Return(); Pop(4)

0x38f: Push("voice_common")
0x390: Push((int) 1)
0x391: @ SetVariable(Stack[-2], Stack[-1])
0x392: Pop(2)
0x393: Stack[-6] = (bool) 1
0x394: Return(); Pop(4)

0x395: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x396: Stack[-5] = "c"
0x397: Stack[-4] = (int) 0
0x398: Push((int) 1)
0x399: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39a: Push((int) 1)
0x39b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x39c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x39d: @@ HasProperty(Stack[-1], Stack[-4])
0x39e: Pop(1)
0x39f: Pop(0); Push((bool) Stack[-3] == 0)
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x3a1: GOTO 0x3a5

0x3a2: Push((int) 1)
0x3a3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3a4: GOTO 0x398

0x3a5: Pop(0); Push((bool) Stack[-4] == 0)
0x3a6: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a7: Stack[-12] = (bool) 0
0x3a8: Return(); Pop(10)

0x3a9: Stack[-2] = (int) 0
0x3aa: Push((int) 1)
0x3ab: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3ac: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ad: @ irand(Stack[-2], Stack[-4])
0x3ae: Pop(0)
0x3af: Push((int) 1)
0x3b0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3b1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3b2: @@ GetProperty(Stack[-1], Stack[-2])
0x3b3: Pop(1)
0x3b4: PushEmpty(bool, string)
0x3b5: Stack[-1] = Stack[-3]
0x3b6: Call2 0x404

0x3b7: Stack[-14] = Stack[-2]
0x3b8: Pop(2)
0x3b9: Return(); Pop(10)

0x3ba: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3bb: Push("d")
0x3bc: PushEmpty(int)
0x3bd: Call2 0x42f

0x3be: Pop(0)
0x3bf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3c0: Push("m")
0x3c1: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3c2: Stack[-4] = (int) 0
0x3c3: Push((int) 1)
0x3c4: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3c5: Push((int) 1)
0x3c6: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3c7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3c8: @@ HasProperty(Stack[-1], Stack[-4])
0x3c9: Pop(1)
0x3ca: Pop(0); Push((bool) Stack[-3] == 0)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3cc: GOTO 0x3d0

0x3cd: Push((int) 1)
0x3ce: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3cf: GOTO 0x3c3

0x3d0: Pop(0); Push((bool) Stack[-4] == 0)
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d2: Stack[-12] = (bool) 0
0x3d3: Return(); Pop(10)

0x3d4: Stack[-2] = (int) 0
0x3d5: Push((int) 1)
0x3d6: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d8: @ irand(Stack[-2], Stack[-4])
0x3d9: Pop(0)
0x3da: Push((int) 1)
0x3db: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3dc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3dd: @@ GetProperty(Stack[-1], Stack[-2])
0x3de: Pop(1)
0x3df: PushEmpty(bool, string)
0x3e0: Stack[-1] = Stack[-3]
0x3e1: Call2 0x404

0x3e2: Stack[-14] = Stack[-2]
0x3e3: Pop(2)
0x3e4: Return(); Pop(10)

0x3e5: PushEmpty(bool, float, float, bool, float, float)
0x3e6: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3e7: Pop(0)
0x3e8: Push(Stack[-3])
0x3e9: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ea: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3eb: Pop(0)
0x3ec: Push((bool) 0)
0x3ed: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3ee: Pop(1)
0x3ef: GOTO 0x3f4

0x3f0: Push("Can't find lsh animation : ")
0x3f1: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3f2: @ Trace(Stack[-1])
0x3f3: Pop(1)
0x3f4: Return(); Pop(6)

0x3f5: PushEmpty(bool, float, float, bool, float, float)
0x3f6: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3f7: Pop(0)
0x3f8: Push(Stack[-3])
0x3f9: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fa: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3fb: Pop(0)
0x3fc: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3fd: Pop(0)
0x3fe: GOTO 0x403

0x3ff: Push("Can't find lsh animation : ")
0x400: Pop(1); Push(Stack[-1] + Stack[-9]);
0x401: @ Trace(Stack[-1])
0x402: Pop(1)
0x403: Return(); Pop(6)

0x404: PushEmpty(bool, bool)
0x405: PushEmpty(bool)
0x406: Call2 0x4de

0x407: Pop(0)
0x408: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x409: @ lshHasSpeech(Stack[-1], Stack[-3])
0x40a: Pop(0)
0x40b: Push(Stack[-1])
0x40c: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40d: @ lshPlaySpeech(Stack[-3])
0x40e: Pop(0)
0x40f: Stack[-4] = (bool) 1
0x410: Return(); Pop(2)

0x411: Stack[-4] = (bool) 0
0x412: Return(); Pop(2)

0x413: PushEmpty(bool)
0x414: Call2 0x4de

0x415: Pop(0)
0x416: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x417: @ lshStopSpeech()
0x418: Pop(0)
0x419: Return(); Pop(0)

0x41a: PushEmpty(object, object)
0x41b: @ self(Stack[-1])
0x41c: Pop(0)
0x41d: Stack[-3] = Stack[-1]
0x41e: Return(); Pop(2)

0x41f: Stack[-1] = 0
0x420: PushEmpty(float, float)
0x421: Pop(0); Push(Stack[-3] | Stack[-3]);
0x422: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x423: Push((float)0.0)
0x424: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x425: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x426: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x427: Return(); Pop(2)

0x428: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x429: Return(); Pop(2)

0x42a: PushEmpty(int, int)
0x42b: @ GetVariable(Stack[-3], Stack[-1])
0x42c: Pop(0)
0x42d: Stack[-4] = Stack[-1]
0x42e: Return(); Pop(2)

0x42f: PushEmpty(float, float)
0x430: @ GetGameTime(Stack[-1])
0x431: Pop(0)
0x432: Push((int) 1)
0x433: PushEmpty(int)
0x434: Push((int) 24)
0x435: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x436: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x437: Return(); Pop(2)

0x438: PushEmpty(string, string)
0x439: Stack[-1] = "idle"
0x43a: Push(Stack[-3])
0x43b: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x43c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x43d: Stack[-4] = Stack[-1]
0x43e: Return(); Pop(2)

0x43f: PushEmpty(int, bool, int, bool)
0x440: Stack[-2] = (int) 0
0x441: Push("all")
0x442: PushEmpty(string, int)
0x443: Stack[-1] = Stack[-5]
0x444: Call2 0x438

0x445: Pop(1)
0x446: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x447: Pop(2)
0x448: Pop(0); Push((bool) Stack[-1] == 0)
0x449: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x44a: GOTO 0x44e

0x44b: Push((int) 1)
0x44c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x44d: GOTO 0x441

0x44e: Stack[-5] = Stack[-2]
0x44f: Return(); Pop(4)

0x450: PushEmpty()
0x451: Push("ook9BurahTermitnik2_1")
0x452: Push((int) 1)
0x453: @ SetVariable(Stack[-2], Stack[-1])
0x454: Pop(2)
0x455: Return(); Pop(0)

0x456: PushEmpty()
0x457: Push("k9q01BurahTalk")
0x458: Push((int) 1)
0x459: @ SetVariable(Stack[-2], Stack[-1])
0x45a: Pop(2)
0x45b: Return(); Pop(0)

0x45c: PushEmpty()
0x45d: PushEmpty(bool)
0x45e: Stack[-1] = (bool) 0
0x45f: PushEmpty(int, string)
0x460: Stack[-1] = "k9q01BurahTalk"
0x461: Call2 0x42a

0x462: Pop(1)
0x463: Push((int) 0)
0x464: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x466: PushEmpty(int, string)
0x467: Stack[-1] = "k9q01DankoTalk"
0x468: Call2 0x42a

0x469: Pop(1)
0x46a: Push((int) 0)
0x46b: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46d: Stack[-1] = (bool) 1
0x46e: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x46f: Push("k9q01")
0x470: Push((int) 3)
0x471: @ SetVariable(Stack[-2], Stack[-1])
0x472: Pop(2)
0x473: PushEmpty()
0x474: Call2 0x48f

0x475: Pop(0)
0x476: Return(); Pop(0)

0x477: PushEmpty()
0x478: PushEmpty(int, string)
0x479: Stack[-1] = "k9q01"
0x47a: Call2 0x42a

0x47b: Pop(1)
0x47c: Push((int) 2)
0x47d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x47e: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47f: Stack[-2] = (bool) 1
0x480: Return(); Pop(0)

0x481: Stack[-2] = (bool) 0
0x482: Return(); Pop(0)

0x483: PushEmpty()
0x484: PushEmpty(int, string)
0x485: Stack[-1] = "ook9BurahTermitnik2_1"
0x486: Call2 0x42a

0x487: Pop(1)
0x488: Push((int) 0)
0x489: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x48a: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x48b: Stack[-2] = (bool) 1
0x48c: Return(); Pop(0)

0x48d: Stack[-2] = (bool) 0
0x48e: Return(); Pop(0)

0x48f: PushEmpty(object, object)
0x490: Push((int) 520)
0x491: Push((int) 1)
0x492: Push((int) 529812)
0x493: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x494: Pop(3)
0x495: PushEmpty(bool, object, int)
0x496: Stack[-2] = Stack[-4]
0x497: Stack[-1] = (int) 517
0x498: Call2 0x4a9

0x499: Pop(3)
0x49a: Return(); Pop(2)

0x49b: Stack[-1] = 0
0x49c: PushEmpty(object, object)
0x49d: @ GetDiaryRoot(Stack[-1])
0x49e: Pop(0)
0x49f: Pop(0); Push((bool) Stack[-1] == 0)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a1: Push("Can't retrieve diary root")
0x4a2: @ Trace(Stack[-1])
0x4a3: Pop(1)
0x4a4: Stack[-3] = (bool) 0
0x4a5: Return(); Pop(2)

0x4a6: Stack[-3] = Stack[-1]
0x4a7: Return(); Pop(2)

0x4a8: Stack[-1] = 0
0x4a9: PushEmpty(object, object, int, object, object, int)
0x4aa: PushEmpty(object)
0x4ab: Call2 0x49c

0x4ac: Stack[-4] = Stack[-1]
0x4ad: Pop(1)
0x4ae: @@ Find(Stack[-7], Stack[-2])
0x4af: Pop(0)
0x4b0: Pop(0); Push((bool) Stack[-2] == 0)
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b2: Push("Can't find diary parent with id: ")
0x4b3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4b4: @ Trace(Stack[-1])
0x4b5: Pop(1)
0x4b6: Stack[-9] = (bool) 0
0x4b7: Return(); Pop(6)

0x4b8: @@ AddChild(Stack[-8])
0x4b9: Pop(0)
0x4ba: Push((int) 7)
0x4bb: @ SendWorldWndMessage(Stack[-1])
0x4bc: Pop(1)
0x4bd: @@ GetCategory(Stack[-1])
0x4be: Pop(0)
0x4bf: @ SetDiarySection(Stack[-1])
0x4c0: Pop(0)
0x4c1: Stack[-9] = (bool) 0
0x4c2: Return(); Pop(6)

0x4c3: Stack[-2] = 0
0x4c4: Stack[-3] = 0
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

0x4d6: Stack[-1] = (int) 515592
0x4d7: Return(); Pop(0)

0x4d8: Stack[-1] = (int) 511961
0x4d9: Return(); Pop(0)

0x4da: Stack[-1] = "ui/NPC_Burah.png"
0x4db: Return(); Pop(0)

0x4dc: Stack[-1] = "ui/NPC_Burah_b.png"
0x4dd: Return(); Pop(0)

0x4de: Stack[-1] = (bool) 1
0x4df: Return(); Pop(0)

