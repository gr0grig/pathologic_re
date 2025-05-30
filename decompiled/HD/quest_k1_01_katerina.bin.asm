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
	Suffering
	Penetrating
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
	k1q01
	k1q01KaterinaGotoAlexandr
	pt_map_alexandr
	AddMark
	quest_k1_01
	remove_katerina
	ShowMap
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch
	ui/NPC_Katerina.png
	ui/NPC_Katerina_b.png

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
	GetMainOutdoorScene (1 args)

RunOp = 0x180
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbf Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x184 Vars = (string)
		EVENT_6 Op = 0x198 Vars = ()
		EVENT_5 Op = 0x1a5 Vars = ()
		EVENT_7 Op = 0x1ee Vars = (int)
		EVENT_45 Op = 0x230 Vars = (bool)
		EVENT_0 Op = 0x23c Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2c5

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4e5

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4e3

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x4e7

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x4e9

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4d2

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
0x31: Call2 0x3db

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x31c

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
0x48: Call2 0x30a

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
0x59: Call2 0x451

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral"
0x5e: Call2 0xa9

0x5f: Pop(1)
0x60: Push((int) 524639)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 524640)
0x66: Push((int) 27569)
0x67: Push((int) 25979)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 526284)
0x6b: Push((int) 27569)
0x6c: Push((int) 27562)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x8b

0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral"
0x72: Call2 0xa9

0x73: Pop(1)
0x74: Push((int) 524641)
0x75: @@ SetMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ ClearReplies()
0x78: Pop(0)
0x79: Push((int) 524642)
0x7a: Push((int) 27563)
0x7b: Push((int) 25981)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: Push((int) 526287)
0x7f: Push((int) 27567)
0x80: Push((int) 27565)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: Push((int) 526288)
0x84: Push((int) -1)
0x85: Push((int) 27566)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: GOTO 0x8b

0x89: Return(); Pop(0)

0x8a: GOTO 0x55

0x8b: PushEmpty(bool)
0x8c: Call2 0x4eb

0x8d: Pop(0)
0x8e: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x8f: @ lshWaitForAnimEnd()
0x90: Pop(0)
0x91: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: GOTO 0x99

0x94: PushEmpty(string)
0x95: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x96: Call2 0x3a6

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
0xab: Call2 0x4eb

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
0xbb: Call2 0x3b6

0xbc: Pop(2)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0xc2: PushEmpty()
0xc3: Call2 0x3d4

0xc4: Pop(0)
0xc5: Push((int) 25990)
0xc6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x422

0xcc: Pop(2)
0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call2 0x441

0xd1: Pop(2)
0xd2: Push((int) 25978)
0xd3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xd5: PushEmpty(bool, object)
0xd6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Call2 0x451

0xd8: Pop(1)
0xd9: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xda: PushEmpty(string)
0xdb: Stack[-1] = "Neutral"
0xdc: Call2 0xa9

0xdd: Pop(1)
0xde: Push((int) 524639)
0xdf: @@ SetMessage(Stack[-1])
0xe0: Pop(1)
0xe1: @@ ClearReplies()
0xe2: Pop(0)
0xe3: Push((int) 524640)
0xe4: Push((int) 27569)
0xe5: Push((int) 25979)
0xe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7: Pop(3)
0xe8: Push((int) 526284)
0xe9: Push((int) 27569)
0xea: Push((int) 27562)
0xeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec: Pop(3)
0xed: Return(); Pop(0)

0xee: PushEmpty(string)
0xef: Stack[-1] = "Neutral"
0xf0: Call2 0xa9

0xf1: Pop(1)
0xf2: Push((int) 524641)
0xf3: @@ SetMessage(Stack[-1])
0xf4: Pop(1)
0xf5: @@ ClearReplies()
0xf6: Pop(0)
0xf7: Push((int) 524642)
0xf8: Push((int) 27563)
0xf9: Push((int) 25981)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Push((int) 526287)
0xfd: Push((int) 27567)
0xfe: Push((int) 27565)
0xff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100: Pop(3)
0x101: Push((int) 526288)
0x102: Push((int) -1)
0x103: Push((int) 27566)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Return(); Pop(0)

0x107: Push((int) 27567)
0x108: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x10a: PushEmpty(string)
0x10b: Stack[-1] = "Neutral"
0x10c: Call2 0xa9

0x10d: Pop(1)
0x10e: Push((int) 526289)
0x10f: @@ SetMessage(Stack[-1])
0x110: Pop(1)
0x111: @@ ClearReplies()
0x112: Pop(0)
0x113: Push((int) 526290)
0x114: Push((int) -1)
0x115: Push((int) 27568)
0x116: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117: Pop(3)
0x118: Return(); Pop(0)

0x119: Push((int) 27563)
0x11a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x11c: PushEmpty(string)
0x11d: Stack[-1] = "Suffering"
0x11e: Call2 0xa9

0x11f: Pop(1)
0x120: Push((int) 526285)
0x121: @@ SetMessage(Stack[-1])
0x122: Pop(1)
0x123: @@ ClearReplies()
0x124: Pop(0)
0x125: Push((int) 526286)
0x126: Push((int) -1)
0x127: Push((int) 27564)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: Push((int) 541700)
0x12b: Push((int) -1)
0x12c: Push((int) 43882)
0x12d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(3)
0x12f: Return(); Pop(0)

0x130: Push((int) 27569)
0x131: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x133: PushEmpty(string)
0x134: Stack[-1] = "Penetrating"
0x135: Call2 0xa9

0x136: Pop(1)
0x137: Push((int) 526291)
0x138: @@ SetMessage(Stack[-1])
0x139: Pop(1)
0x13a: @@ ClearReplies()
0x13b: Pop(0)
0x13c: Push((int) 526292)
0x13d: Push((int) 25989)
0x13e: Push((int) 27570)
0x13f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x140: Pop(3)
0x141: Push((int) 526293)
0x142: Push((int) 25989)
0x143: Push((int) 27572)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Return(); Pop(0)

0x147: Push((int) 25989)
0x148: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x14a: PushEmpty(string)
0x14b: Stack[-1] = "Neutral"
0x14c: Call2 0xa9

0x14d: Pop(1)
0x14e: Push((int) 524650)
0x14f: @@ SetMessage(Stack[-1])
0x150: Pop(1)
0x151: @@ ClearReplies()
0x152: Pop(0)
0x153: Push((int) 526296)
0x154: Push((int) 27577)
0x155: Push((int) 27576)
0x156: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x157: Pop(3)
0x158: Return(); Pop(0)

0x159: Push((int) 27577)
0x15a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x15c: PushEmpty(string)
0x15d: Stack[-1] = "Suffering"
0x15e: Call2 0xa9

0x15f: Pop(1)
0x160: Push((int) 526297)
0x161: @@ SetMessage(Stack[-1])
0x162: Pop(1)
0x163: @@ ClearReplies()
0x164: Pop(0)
0x165: Push((int) 524651)
0x166: Push((int) -1)
0x167: Push((int) 25990)
0x168: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x169: Pop(3)
0x16a: Return(); Pop(0)

0x16b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x16c: PushEmpty(bool)
0x16d: Call2 0x4eb

0x16e: Pop(0)
0x16f: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x170: @ lshStopAnimation()
0x171: Pop(0)
0x172: GOTO 0x175

0x173: @ StopAnimation()
0x174: Pop(0)
0x175: Return(); Pop(0)

0x176: GOTO 0xc0

0x177: Return(); Pop(0)

0x178: PushEmpty()
0x179: PushEmpty(int, object)
0x17a: Stack[-1] = Stack[-3]
0x17b: Push(-2, 1); TaskCall(0)
0x17c: Call2 0x0

0x17d: Pop(-2, 1); TaskReturn
0x17e: Pop(2)
0x17f: Return(); Pop(0)

0x180: PushEmpty()
0x181: Call2 0x1a9

0x182: Pop(0)
0x183: Return(); Pop(0)

0x184: PushEmpty(bool, bool)
0x185: Push("cleanup")
0x186: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x188: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x189: @ IsLoaded(Stack[-1])
0x18a: Pop(0)
0x18b: Pop(0); Push((bool) Stack[-1] == 0)
0x18c: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18d: PushEmpty(object)
0x18e: Call2 0x3db

0x18f: Pop(0)
0x190: @ RemoveActor(Stack[-1])
0x191: Pop(1)
0x192: GOTO 0x197

0x193: Push("restore")
0x194: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x196: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x197: Return(); Pop(2)

0x198: Push( Stack[1 + Tasks[-1].StackPointer] )
0x199: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19a: PushEmpty(object)
0x19b: Call2 0x3db

0x19c: Pop(0)
0x19d: @ RemoveActor(Stack[-1])
0x19e: Pop(1)
0x19f: @ Hold()
0x1a0: Pop(0)
0x1a1: PushEmpty()
0x1a2: Call2 0x214

0x1a3: Pop(0)
0x1a4: Return(); Pop(0)

0x1a5: PushEmpty()
0x1a6: Call2 0x223

0x1a7: Pop(0)
0x1a8: Return(); Pop(0)

0x1a9: PushEmpty(bool)
0x1aa: Call2 0x2c0

0x1ab: Pop(0)
0x1ac: Pop(1); Push((bool) Stack[-1] == 0)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ae: @ Hold()
0x1af: Pop(0)
0x1b0: @ GetDirection(Stack[-0])
0x1b1: Pop(0)
0x1b2: PushEmpty()
0x1b3: Call2 0x259

0x1b4: Pop(0)
0x1b5: GOTO 0x1b2

0x1b6: Return(); Pop(0)

0x1b7: PushEmpty(object, object)
0x1b8: Push("player")
0x1b9: @ FindActor(Stack[-2], Stack[-1])
0x1ba: Pop(1)
0x1bb: Pop(0); Push((bool) Stack[-1] == 0)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1bd: Stack[-3] = (bool) 0
0x1be: Return(); Pop(2)

0x1bf: PushEmpty(bool, object)
0x1c0: Stack[-1] = Stack[-3]
0x1c1: Call2 0x2b7

0x1c2: Stack[-5] = Stack[-2]
0x1c3: Pop(2)
0x1c4: Return(); Pop(2)

0x1c5: Stack[-1] = 0
0x1c6: Push(CvectorIndex(Stack[-0], 0))
0x1c7: Push(CvectorIndex(Stack[-0], 2))
0x1c8: @ RotateAsync(Stack[-2], Stack[-1])
0x1c9: Pop(2)
0x1ca: Return(); Pop(0)

0x1cb: PushEmpty(object, bool, object, bool)
0x1cc: Push("player")
0x1cd: @ FindActor(Stack[-3], Stack[-1])
0x1ce: Pop(1)
0x1cf: Pop(0); Push((bool) Stack[-2] == 0)
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1d1: Stack[-5] = (bool) 0
0x1d2: Return(); Pop(4)

0x1d3: PushEmpty(float, object)
0x1d4: Stack[-1] = Stack[-4]
0x1d5: Call2 0x2a5

0x1d6: Pop(1)
0x1d7: Push((float)90000.0)
0x1d8: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1da: Stack[-5] = (bool) 0
0x1db: Return(); Pop(4)

0x1dc: @ CanSee(Stack[-1], Stack[-2])
0x1dd: Pop(0)
0x1de: Stack[-5] = Stack[-1]
0x1df: Return(); Pop(4)

0x1e0: Stack[-2] = 0
0x1e1: PushEmpty(float, float)
0x1e2: Push((int) 8)
0x1e3: Push((int) 16)
0x1e4: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1e5: Pop(2)
0x1e6: Push((int) 10)
0x1e7: @ SetTimer(Stack[-1], Stack[-2])
0x1e8: Pop(1)
0x1e9: Return(); Pop(2)

0x1ea: Push((int) 10)
0x1eb: @ KillTimer(Stack[-1])
0x1ec: Pop(1)
0x1ed: Return(); Pop(0)

0x1ee: PushEmpty()
0x1ef: Push((int) 10)
0x1f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x1f2: PushEmpty()
0x1f3: Call2 0x1ea

0x1f4: Pop(0)
0x1f5: PushEmpty(bool)
0x1f6: Stack[-1] = (bool) 0
0x1f7: PushEmpty(bool)
0x1f8: Call2 0x2c0

0x1f9: Pop(0)
0x1fa: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fb: PushEmpty(bool)
0x1fc: Call2 0x1cb

0x1fd: Pop(0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ff: Stack[-1] = (bool) 1
0x200: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x201: PushEmpty(bool)
0x202: Call2 0x1b7

0x203: Pop(0)
0x204: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x205: PushEmpty(bool, object)
0x206: PushEmpty(object)
0x207: Call2 0x3db

0x208: Stack[-2] = Stack[-1]
0x209: Pop(1)
0x20a: Call2 0x356

0x20b: Pop(2)
0x20c: GOTO 0x213

0x20d: PushEmpty()
0x20e: Call2 0x1c6

0x20f: Pop(0)
0x210: PushEmpty()
0x211: Call2 0x1e1

0x212: Pop(0)
0x213: Return(); Pop(0)

0x214: PushEmpty()
0x215: Call2 0x2a0

0x216: Pop(0)
0x217: PushEmpty()
0x218: Call2 0x1ea

0x219: Pop(0)
0x21a: @ lshStopSpeech()
0x21b: Pop(0)
0x21c: @ lshStopAnimation()
0x21d: Pop(0)
0x21e: @ StopAsync()
0x21f: Pop(0)
0x220: @ Hold()
0x221: Pop(0)
0x222: Return(); Pop(0)

0x223: @ StopGroup0()
0x224: Pop(0)
0x225: PushEmpty()
0x226: Call2 0x1ea

0x227: Pop(0)
0x228: PushEmpty(string)
0x229: Stack[-1] = "Neutral"
0x22a: Call2 0x3a6

0x22b: Pop(1)
0x22c: PushEmpty()
0x22d: Call2 0x1e1

0x22e: Pop(0)
0x22f: Return(); Pop(0)

0x230: PushEmpty()
0x231: Push(Stack[-1])
0x232: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x233: PushEmpty()
0x234: Call2 0x1e1

0x235: Pop(0)
0x236: GOTO 0x23b

0x237: PushEmpty(string)
0x238: Stack[-1] = "Neutral"
0x239: Call2 0x3a6

0x23a: Pop(1)
0x23b: Return(); Pop(0)

0x23c: PushEmpty(bool, bool)
0x23d: @ IsOverrideActive(Stack[-1])
0x23e: Pop(0)
0x23f: Pop(0); Push((bool) Stack[-1] == 0)
0x240: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x241: EventDisable(0)
0x242: PushEmpty()
0x243: Call2 0x2a0

0x244: Pop(0)
0x245: PushEmpty(bool, object)
0x246: Stack[-1] = Stack[-5]
0x247: Call2 0x2b7

0x248: Pop(2)
0x249: EventEnable(0)
0x24a: PushEmpty(object)
0x24b: Stack[-1] = Stack[-4]
0x24c: Call2 0x178

0x24d: Pop(1)
0x24e: PushEmpty(string)
0x24f: Stack[-1] = "Neutral"
0x250: Call2 0x3a6

0x251: Pop(1)
0x252: PushEmpty()
0x253: Call2 0x1ea

0x254: Pop(0)
0x255: PushEmpty()
0x256: Call2 0x1e1

0x257: Pop(0)
0x258: Return(); Pop(2)

0x259: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x25a: @ WaitForAnimEnd()
0x25b: Pop(0)
0x25c: PushEmpty(bool)
0x25d: Call2 0x2c0

0x25e: Pop(0)
0x25f: Pop(1); Push((bool) Stack[-1] == 0)
0x260: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x261: Return(); Pop(12)

0x262: PushEmpty(int)
0x263: Call2 0x411

0x264: Stack[-7] = Stack[-1]
0x265: Pop(1)
0x266: Stack[-5] = (int) 0
0x267: PushEmpty(bool)
0x268: Stack[-1] = (bool) 0
0x269: Push((int) 5)
0x26a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26c: PushEmpty(bool)
0x26d: Call2 0x2c0

0x26e: Pop(0)
0x26f: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x270: Stack[-1] = (bool) 1
0x271: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x272: Pop(0); Push((bool) Stack[-6] == 0)
0x273: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x274: Push((int) 3)
0x275: @ Sleep(Stack[-1], Stack[-5])
0x276: Pop(1)
0x277: Pop(0); Push((bool) Stack[-4] == 0)
0x278: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x279: GOTO 0x29b

0x27a: GOTO 0x290

0x27b: @ irand(Stack[-3], Stack[-6])
0x27c: Pop(0)
0x27d: Push((int) 5)
0x27e: @ irand(Stack[-3], Stack[-1])
0x27f: Pop(1)
0x280: Push((int) 0)
0x281: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x282: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x283: Stack[-3] = (int) 0
0x284: Push("all")
0x285: PushEmpty(string, int)
0x286: Stack[-1] = Stack[-6]
0x287: Call2 0x40a

0x288: Pop(1)
0x289: @ PlayAnimation(Stack[-2], Stack[-1])
0x28a: Pop(2)
0x28b: @ WaitForAnimEnd(Stack[-1])
0x28c: Pop(0)
0x28d: Pop(0); Push((bool) Stack[-1] == 0)
0x28e: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28f: GOTO 0x29b

0x290: PushEmpty(bool)
0x291: Call2 0x29e

0x292: Pop(0)
0x293: Pop(1); Push((bool) Stack[-1] == 0)
0x294: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x295: GOTO 0x29b

0x296: @ ResetAAS()
0x297: Pop(0)
0x298: Push((int) 1)
0x299: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x29a: GOTO 0x267

0x29b: @ ResetAAS()
0x29c: Pop(0)
0x29d: Return(); Pop(12)

0x29e: Stack[-1] = (bool) 1
0x29f: Return(); Pop(0)

0x2a0: @ StopAnimation()
0x2a1: Pop(0)
0x2a2: @ StopGroup0()
0x2a3: Pop(0)
0x2a4: Return(); Pop(0)

0x2a5: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2a6: @ GetPosition(Stack[-3])
0x2a7: Pop(0)
0x2a8: @@ GetPosition(Stack[-2])
0x2a9: Pop(0)
0x2aa: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2ab: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2ac: Return(); Pop(6)

0x2ad: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2ae: @ GetPosition(Stack[-3])
0x2af: Pop(0)
0x2b0: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2b1: Push(CvectorIndex(Stack[-2], 0))
0x2b2: Push(CvectorIndex(Stack[-3], 2))
0x2b3: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2b4: Pop(2)
0x2b5: Stack[-8] = Stack[-1]
0x2b6: Return(); Pop(6)

0x2b7: PushEmpty(cvector, cvector)
0x2b8: @@ GetPosition(Stack[-1])
0x2b9: Pop(0)
0x2ba: PushEmpty(bool, cvector)
0x2bb: Stack[-1] = Stack[-3]
0x2bc: Call2 0x2ad

0x2bd: Stack[-6] = Stack[-2]
0x2be: Pop(2)
0x2bf: Return(); Pop(2)

0x2c0: PushEmpty(bool, bool)
0x2c1: @ IsLoaded(Stack[-1])
0x2c2: Pop(0)
0x2c3: Stack[-3] = Stack[-1]
0x2c4: Return(); Pop(2)

0x2c5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2c6: @@ GetPosition(Stack[-8])
0x2c7: Pop(0)
0x2c8: @@ GetEyesHeight(Stack[-9])
0x2c9: Pop(0)
0x2ca: Push(CvectorIndex(Stack[-8], 1))
0x2cb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2cc: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2cd: @ GetPosition(Stack[-7])
0x2ce: Pop(0)
0x2cf: @ GetEyesHeight(Stack[-9])
0x2d0: Pop(0)
0x2d1: Push(CvectorIndex(Stack[-7], 1))
0x2d2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2d3: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2d4: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2d5: Push(CvectorIndex(Stack[-6], 1))
0x2d6: Stack[-1] = (int) 0
0x2d7: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2d8: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2d9: Pop(1); Push(Sqrt(Stack[-1]))
0x2da: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2db: Stack[-5] = -Stack[-6]; Pop(0);
0x2dc: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2dd: PushEmpty(cvector, cvector)
0x2de: Push(CVector(0.0, 1.0, 0.0))
0x2df: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2e0: Call2 0x3e1

0x2e1: Pop(1)
0x2e2: Push((int) 25)
0x2e3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2e4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2e5: Push(CVector(0.0, 10.0, 0.0))
0x2e6: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2e7: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2e8: @ IsOverrideActive(Stack[-2])
0x2e9: Pop(0)
0x2ea: Push(Stack[-2])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ec: Stack[-21] = (bool) 0
0x2ed: Return(); Pop(18)

0x2ee: @ StopWorld()
0x2ef: Pop(0)
0x2f0: Push((bool) 1)
0x2f1: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2f2: Pop(1)
0x2f3: Push(CvectorIndex(Stack[-4], 0))
0x2f4: Push(CvectorIndex(Stack[-5], 2))
0x2f5: @ Rotate(Stack[-2], Stack[-1])
0x2f6: Pop(2)
0x2f7: PushEmpty(bool)
0x2f8: Call2 0x4eb

0x2f9: Pop(0)
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fb: GOTO 0x304

0x2fc: Push("head")
0x2fd: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2fe: Pop(1)
0x2ff: Push(Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x301: Push("head")
0x302: @ LookAsyncCamera(Stack[-1])
0x303: Pop(1)
0x304: @ CameraWaitForPlayFinish()
0x305: Pop(0)
0x306: @ ResumeWorld()
0x307: Pop(0)
0x308: Stack[-21] = (bool) 1
0x309: Return(); Pop(18)

0x30a: PushEmpty(bool, bool)
0x30b: Push((bool) 1)
0x30c: @ CameraSwitchToNormal(Stack[-1])
0x30d: Pop(1)
0x30e: PushEmpty(bool)
0x30f: Call2 0x4eb

0x310: Pop(0)
0x311: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x312: GOTO 0x31b

0x313: Push("head")
0x314: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x315: Pop(1)
0x316: Push(Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x318: Push("head")
0x319: @ UnlookAsync(Stack[-1])
0x31a: Pop(1)
0x31b: Return(); Pop(2)

0x31c: PushEmpty(int, int, int, int)
0x31d: Push("voice_common")
0x31e: @ GetVariable(Stack[-1], Stack[-3])
0x31f: Pop(1)
0x320: Push(Stack[-2])
0x321: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x322: PushEmpty(bool, object)
0x323: Stack[-1] = Stack[-7]
0x324: Call2 0x356

0x325: Pop(1)
0x326: Pop(1); Push((bool) Stack[-1] == 0)
0x327: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x328: PushEmpty(bool, object)
0x329: Stack[-1] = Stack[-7]
0x32a: Call2 0x37b

0x32b: Pop(1)
0x32c: Pop(1); Push((bool) Stack[-1] == 0)
0x32d: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32e: Stack[-6] = (bool) 0
0x32f: Return(); Pop(4)

0x330: Push((int) 2)
0x331: @ irand(Stack[-2], Stack[-1])
0x332: Pop(1)
0x333: Push(Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x335: Push("voice_common")
0x336: Push((int) 1)
0x337: Pop(1); Push(Stack[-4] + Stack[-1]);
0x338: Push((int) 3)
0x339: Pop(2); Push(Stack[-2] % Stack[-1]);
0x33a: @ SetVariable(Stack[-2], Stack[-1])
0x33b: Pop(2)
0x33c: GOTO 0x341

0x33d: Push("voice_common")
0x33e: Push((int) 0)
0x33f: @ SetVariable(Stack[-2], Stack[-1])
0x340: Pop(2)
0x341: GOTO 0x354

0x342: PushEmpty(bool, object)
0x343: Stack[-1] = Stack[-7]
0x344: Call2 0x37b

0x345: Pop(1)
0x346: Pop(1); Push((bool) Stack[-1] == 0)
0x347: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x348: PushEmpty(bool, object)
0x349: Stack[-1] = Stack[-7]
0x34a: Call2 0x356

0x34b: Pop(1)
0x34c: Pop(1); Push((bool) Stack[-1] == 0)
0x34d: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34e: Stack[-6] = (bool) 0
0x34f: Return(); Pop(4)

0x350: Push("voice_common")
0x351: Push((int) 1)
0x352: @ SetVariable(Stack[-2], Stack[-1])
0x353: Pop(2)
0x354: Stack[-6] = (bool) 1
0x355: Return(); Pop(4)

0x356: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x357: Stack[-5] = "c"
0x358: Stack[-4] = (int) 0
0x359: Push((int) 1)
0x35a: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x35b: Push((int) 1)
0x35c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x35d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x35e: @@ HasProperty(Stack[-1], Stack[-4])
0x35f: Pop(1)
0x360: Pop(0); Push((bool) Stack[-3] == 0)
0x361: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x362: GOTO 0x366

0x363: Push((int) 1)
0x364: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x365: GOTO 0x359

0x366: Pop(0); Push((bool) Stack[-4] == 0)
0x367: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x368: Stack[-12] = (bool) 0
0x369: Return(); Pop(10)

0x36a: Stack[-2] = (int) 0
0x36b: Push((int) 1)
0x36c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x36d: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36e: @ irand(Stack[-2], Stack[-4])
0x36f: Pop(0)
0x370: Push((int) 1)
0x371: Pop(1); Push(Stack[-3] + Stack[-1]);
0x372: Pop(1); Push(Stack[-6] + Stack[-1]);
0x373: @@ GetProperty(Stack[-1], Stack[-2])
0x374: Pop(1)
0x375: PushEmpty(bool, string)
0x376: Stack[-1] = Stack[-3]
0x377: Call2 0x3c5

0x378: Stack[-14] = Stack[-2]
0x379: Pop(2)
0x37a: Return(); Pop(10)

0x37b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x37c: Push("d")
0x37d: PushEmpty(int)
0x37e: Call2 0x401

0x37f: Pop(0)
0x380: Pop(2); Push(Stack[-2] + Stack[-1]);
0x381: Push("m")
0x382: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x383: Stack[-4] = (int) 0
0x384: Push((int) 1)
0x385: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x386: Push((int) 1)
0x387: Pop(1); Push(Stack[-5] + Stack[-1]);
0x388: Pop(1); Push(Stack[-6] + Stack[-1]);
0x389: @@ HasProperty(Stack[-1], Stack[-4])
0x38a: Pop(1)
0x38b: Pop(0); Push((bool) Stack[-3] == 0)
0x38c: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38d: GOTO 0x391

0x38e: Push((int) 1)
0x38f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x390: GOTO 0x384

0x391: Pop(0); Push((bool) Stack[-4] == 0)
0x392: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x393: Stack[-12] = (bool) 0
0x394: Return(); Pop(10)

0x395: Stack[-2] = (int) 0
0x396: Push((int) 1)
0x397: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x399: @ irand(Stack[-2], Stack[-4])
0x39a: Pop(0)
0x39b: Push((int) 1)
0x39c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x39d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x39e: @@ GetProperty(Stack[-1], Stack[-2])
0x39f: Pop(1)
0x3a0: PushEmpty(bool, string)
0x3a1: Stack[-1] = Stack[-3]
0x3a2: Call2 0x3c5

0x3a3: Stack[-14] = Stack[-2]
0x3a4: Pop(2)
0x3a5: Return(); Pop(10)

0x3a6: PushEmpty(bool, float, float, bool, float, float)
0x3a7: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3a8: Pop(0)
0x3a9: Push(Stack[-3])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3ab: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3ac: Pop(0)
0x3ad: Push((bool) 0)
0x3ae: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3af: Pop(1)
0x3b0: GOTO 0x3b5

0x3b1: Push("Can't find lsh animation : ")
0x3b2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3b3: @ Trace(Stack[-1])
0x3b4: Pop(1)
0x3b5: Return(); Pop(6)

0x3b6: PushEmpty(bool, float, float, bool, float, float)
0x3b7: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3b8: Pop(0)
0x3b9: Push(Stack[-3])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bb: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3bc: Pop(0)
0x3bd: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3be: Pop(0)
0x3bf: GOTO 0x3c4

0x3c0: Push("Can't find lsh animation : ")
0x3c1: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3c2: @ Trace(Stack[-1])
0x3c3: Pop(1)
0x3c4: Return(); Pop(6)

0x3c5: PushEmpty(bool, bool)
0x3c6: PushEmpty(bool)
0x3c7: Call2 0x4eb

0x3c8: Pop(0)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3ca: @ lshHasSpeech(Stack[-1], Stack[-3])
0x3cb: Pop(0)
0x3cc: Push(Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3ce: @ lshPlaySpeech(Stack[-3])
0x3cf: Pop(0)
0x3d0: Stack[-4] = (bool) 1
0x3d1: Return(); Pop(2)

0x3d2: Stack[-4] = (bool) 0
0x3d3: Return(); Pop(2)

0x3d4: PushEmpty(bool)
0x3d5: Call2 0x4eb

0x3d6: Pop(0)
0x3d7: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d8: @ lshStopSpeech()
0x3d9: Pop(0)
0x3da: Return(); Pop(0)

0x3db: PushEmpty(object, object)
0x3dc: @ self(Stack[-1])
0x3dd: Pop(0)
0x3de: Stack[-3] = Stack[-1]
0x3df: Return(); Pop(2)

0x3e0: Stack[-1] = 0
0x3e1: PushEmpty(float, float)
0x3e2: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3e3: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3e4: Push((float)0.0)
0x3e5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e7: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3e8: Return(); Pop(2)

0x3e9: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3ea: Return(); Pop(2)

0x3eb: PushEmpty(int, int)
0x3ec: @ GetVariable(Stack[-3], Stack[-1])
0x3ed: Pop(0)
0x3ee: Stack[-4] = Stack[-1]
0x3ef: Return(); Pop(2)

0x3f0: PushEmpty(object, object)
0x3f1: @ FindActor(Stack[-1], Stack[-4])
0x3f2: Pop(0)
0x3f3: Pop(0); Push((bool) Stack[-1] == 0)
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f5: Stack[-5] = (bool) 0
0x3f6: Return(); Pop(2)

0x3f7: @ Trigger(Stack[-1], Stack[-3])
0x3f8: Pop(0)
0x3f9: Stack[-5] = (bool) 1
0x3fa: Return(); Pop(2)

0x3fb: Stack[-1] = 0
0x3fc: PushEmpty(float, float)
0x3fd: @ GetGameTime(Stack[-1])
0x3fe: Pop(0)
0x3ff: Stack[-3] = Stack[-1]
0x400: Return(); Pop(2)

0x401: PushEmpty(float, float)
0x402: @ GetGameTime(Stack[-1])
0x403: Pop(0)
0x404: Push((int) 1)
0x405: PushEmpty(int)
0x406: Push((int) 24)
0x407: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x408: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x409: Return(); Pop(2)

0x40a: PushEmpty(string, string)
0x40b: Stack[-1] = "idle"
0x40c: Push(Stack[-3])
0x40d: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x40f: Stack[-4] = Stack[-1]
0x410: Return(); Pop(2)

0x411: PushEmpty(int, bool, int, bool)
0x412: Stack[-2] = (int) 0
0x413: Push("all")
0x414: PushEmpty(string, int)
0x415: Stack[-1] = Stack[-5]
0x416: Call2 0x40a

0x417: Pop(1)
0x418: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x419: Pop(2)
0x41a: Pop(0); Push((bool) Stack[-1] == 0)
0x41b: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41c: GOTO 0x420

0x41d: Push((int) 1)
0x41e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x41f: GOTO 0x413

0x420: Stack[-5] = Stack[-2]
0x421: Return(); Pop(4)

0x422: PushEmpty(object, object)
0x423: Push("k1q01")
0x424: Push((int) 1)
0x425: @ SetVariable(Stack[-2], Stack[-1])
0x426: Pop(2)
0x427: PushEmpty(object)
0x428: Call2 0x4a0

0x429: Stack[-2] = Stack[-1]
0x42a: Pop(1)
0x42b: Push("k1q01KaterinaGotoAlexandr")
0x42c: Push("pt_map_alexandr")
0x42d: Push((int) 1)
0x42e: Push((int) 524727)
0x42f: PushEmpty(float)
0x430: Call2 0x3fc

0x431: Pop(0)
0x432: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x433: Pop(5)
0x434: PushEmpty()
0x435: Call2 0x45d

0x436: Pop(0)
0x437: PushEmpty()
0x438: Call2 0x46a

0x439: Pop(0)
0x43a: PushEmpty(bool, string, string)
0x43b: Stack[-2] = "quest_k1_01"
0x43c: Stack[-1] = "remove_katerina"
0x43d: Call2 0x3f0

0x43e: Pop(3)
0x43f: Return(); Pop(2)

0x440: Stack[-1] = 0
0x441: PushEmpty()
0x442: PushEmpty(object, string, float)
0x443: PushEmpty(object)
0x444: Call2 0x4a0

0x445: Stack[-4] = Stack[-1]
0x446: Pop(1)
0x447: Stack[-2] = "pt_map_alexandr"
0x448: Stack[-1] = (int) 2
0x449: Call2 0x4b1

0x44a: Pop(3)
0x44b: PushEmpty(object)
0x44c: Call2 0x4a0

0x44d: Pop(0)
0x44e: @@ ShowMap(Stack[-1])
0x44f: Pop(1)
0x450: Return(); Pop(0)

0x451: PushEmpty()
0x452: PushEmpty(int, string)
0x453: Stack[-1] = "k1q01"
0x454: Call2 0x3eb

0x455: Pop(1)
0x456: Push((int) 0)
0x457: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x458: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x459: Stack[-2] = (bool) 1
0x45a: Return(); Pop(0)

0x45b: Stack[-2] = (bool) 0
0x45c: Return(); Pop(0)

0x45d: PushEmpty(object, object)
0x45e: Push((int) 318)
0x45f: Push((int) 1)
0x460: Push((int) 524734)
0x461: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x462: Pop(3)
0x463: PushEmpty(bool, object, int)
0x464: Stack[-2] = Stack[-4]
0x465: Stack[-1] = (int) -1
0x466: Call2 0x484

0x467: Pop(3)
0x468: Return(); Pop(2)

0x469: Stack[-1] = 0
0x46a: PushEmpty(object, object)
0x46b: Push((int) 319)
0x46c: Push((int) 1)
0x46d: Push((int) 524735)
0x46e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x46f: Pop(3)
0x470: PushEmpty(bool, object, int)
0x471: Stack[-2] = Stack[-4]
0x472: Stack[-1] = (int) 318
0x473: Call2 0x484

0x474: Pop(3)
0x475: Return(); Pop(2)

0x476: Stack[-1] = 0
0x477: PushEmpty(object, object)
0x478: @ GetDiaryRoot(Stack[-1])
0x479: Pop(0)
0x47a: Pop(0); Push((bool) Stack[-1] == 0)
0x47b: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47c: Push("Can't retrieve diary root")
0x47d: @ Trace(Stack[-1])
0x47e: Pop(1)
0x47f: Stack[-3] = (bool) 0
0x480: Return(); Pop(2)

0x481: Stack[-3] = Stack[-1]
0x482: Return(); Pop(2)

0x483: Stack[-1] = 0
0x484: PushEmpty(object, object, int, object, object, int)
0x485: PushEmpty(object)
0x486: Call2 0x477

0x487: Stack[-4] = Stack[-1]
0x488: Pop(1)
0x489: @@ Find(Stack[-7], Stack[-2])
0x48a: Pop(0)
0x48b: Pop(0); Push((bool) Stack[-2] == 0)
0x48c: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x48d: Push("Can't find diary parent with id: ")
0x48e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x48f: @ Trace(Stack[-1])
0x490: Pop(1)
0x491: Stack[-9] = (bool) 0
0x492: Return(); Pop(6)

0x493: @@ AddChild(Stack[-8])
0x494: Pop(0)
0x495: Push((int) 7)
0x496: @ SendWorldWndMessage(Stack[-1])
0x497: Pop(1)
0x498: @@ GetCategory(Stack[-1])
0x499: Pop(0)
0x49a: @ SetDiarySection(Stack[-1])
0x49b: Pop(0)
0x49c: Stack[-9] = (bool) 0
0x49d: Return(); Pop(6)

0x49e: Stack[-2] = 0
0x49f: Stack[-3] = 0
0x4a0: PushEmpty(object, object, object, object)
0x4a1: @ GetMainOutdoorScene(Stack[-2])
0x4a2: Pop(0)
0x4a3: Pop(0); Push((bool) Stack[-2] == 0)
0x4a4: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a5: Push("Can't find main outdoor scene")
0x4a6: @ Trace(Stack[-1])
0x4a7: Pop(1)
0x4a8: Stack[-1] = 0
0x4a9: Stack[-5] = Stack[-1]
0x4aa: Return(); Pop(4)

0x4ab: @@ GetMap(Stack[-1])
0x4ac: Pop(0)
0x4ad: Stack[-5] = Stack[-1]
0x4ae: Return(); Pop(4)

0x4af: Stack[-1] = 0
0x4b0: Stack[-2] = 0
0x4b1: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x4b2: @ GetMainOutdoorScene(Stack[-2])
0x4b3: Pop(0)
0x4b4: Pop(0); Push((bool) Stack[-2] == 0)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b6: Push("Can't find main outdoor scene")
0x4b7: @ Trace(Stack[-1])
0x4b8: Pop(1)
0x4b9: Return(); Pop(8)

0x4ba: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x4bb: Pop(0)
0x4bc: Pop(0); Push((bool) Stack[-1] == 0)
0x4bd: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4be: Push("Warning: outdoor scene locator ")
0x4bf: Pop(1); Push(Stack[-1] + Stack[-11]);
0x4c0: Push(" doesnt exist")
0x4c1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4c2: @ Trace(Stack[-1])
0x4c3: Pop(1)
0x4c4: @@ GetMap(Stack[-11])
0x4c5: Pop(0)
0x4c6: Pop(0); Push((bool) Stack[-11] == 0)
0x4c7: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4c8: Push("Can't find map")
0x4c9: @ Trace(Stack[-1])
0x4ca: Pop(1)
0x4cb: Return(); Pop(8)

0x4cc: Push(CvectorIndex(Stack[-4], 0))
0x4cd: Push(CvectorIndex(Stack[-5], 2))
0x4ce: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x4cf: Pop(2)
0x4d0: Return(); Pop(8)

0x4d1: Stack[-2] = 0
0x4d2: PushEmpty(int, int)
0x4d3: Push("branch")
0x4d4: @ GetVariable(Stack[-1], Stack[-2])
0x4d5: Pop(1)
0x4d6: Push((int) 0)
0x4d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d8: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4d9: Stack[-3] = (int) 1
0x4da: Return(); Pop(2)

0x4db: GOTO 0x4e1

0x4dc: Push((int) 1)
0x4dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4de: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4df: Stack[-3] = (int) 2
0x4e0: Return(); Pop(2)

0x4e1: Stack[-3] = (int) 3
0x4e2: Return(); Pop(2)

0x4e3: Stack[-1] = (int) 515539
0x4e4: Return(); Pop(0)

0x4e5: Stack[-1] = (int) 502864
0x4e6: Return(); Pop(0)

0x4e7: Stack[-1] = "ui/NPC_Katerina.png"
0x4e8: Return(); Pop(0)

0x4e9: Stack[-1] = "ui/NPC_Katerina_b.png"
0x4ea: Return(); Pop(0)

0x4eb: Stack[-1] = (bool) 1
0x4ec: Return(); Pop(0)

