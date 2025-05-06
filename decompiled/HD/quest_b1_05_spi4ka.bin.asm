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
	Fear
	Azart
	Serious
	cleanup
	restore
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	Door 
	 not found
	locked
	SetProperty
	oob1Spi4ka1
	b1q05Spi4kaGotoLaska
	pt_map_laska
	AddMark
	b1q05Spi4kaGotoMishka
	pt_map_mishka
	quest_b1_05
	completed
	ShowMap
	vagon_mishka@door1
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
	mt_spi4ka
	ui/NPC_Spi4ka.png
	ui/NPC_Spi4ka_b.png

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
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPosition (1 args)
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
	irand (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x308
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a4 Vars = (int, int)
	GTASK_4 Vars = (bool) Params = 0
		EVENT_0 Op = 0x2fc Vars = (object)
		EVENT_26 Op = 0x30c Vars = (string)
		EVENT_6 Op = 0x328 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x33a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x576

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x574

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x578

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x57a

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x552

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
0x31: Call2 0x450

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x391

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
0x48: Call2 0x37f

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
0x56: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x8b

0x5a: Pop(1)
0x5b: Push((int) 520803)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 520804)
0x61: Push((int) 29221)
0x62: Push((int) 22021)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 527876)
0x66: Push((int) 29224)
0x67: Push((int) 29223)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0x57c

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x41b

0x79: Pop(1)
0x7a: GOTO 0x71

0x7b: GOTO 0x8a

0x7c: Push("all")
0x7d: Push("idle")
0x7e: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: @ WaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: Push("all")
0x86: Push("idle")
0x87: @ PlayAnimation(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: GOTO 0x80

0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: PushEmpty(bool)
0x8d: Call2 0x57c

0x8e: Pop(0)
0x8f: Pop(1); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Return(); Pop(0)

0x92: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: PushEmpty(string, bool)
0x96: Stack[-2] = Stack[-3]
0x97: Push("")
0x98: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: GOTO 0x9d

0x9c: Stack[-1] = (bool) 1
0x9d: Call2 0x42b

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x449

0xa6: Pop(0)
0xa7: Push((int) 22020)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 520803)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 520804)
0xb4: Push((int) 29221)
0xb5: Push((int) 22021)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 527876)
0xb9: Push((int) 29224)
0xba: Push((int) 29223)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 29224)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Neutral"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 527877)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 527878)
0xcb: Push((int) -1)
0xcc: Push((int) 29225)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Return(); Pop(0)

0xd0: Push((int) 29221)
0xd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Neutral"
0xd5: Call2 0x8b

0xd6: Pop(1)
0xd7: Push((int) 527874)
0xd8: @@ SetMessage(Stack[-1])
0xd9: Pop(1)
0xda: @@ ClearReplies()
0xdb: Pop(0)
0xdc: Push((int) 527875)
0xdd: Push((int) -1)
0xde: Push((int) 29222)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe3: PushEmpty(bool)
0xe4: Call2 0x57c

0xe5: Pop(0)
0xe6: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe7: @ lshStopAnimation()
0xe8: Pop(0)
0xe9: GOTO 0xec

0xea: @ StopAnimation()
0xeb: Pop(0)
0xec: Return(); Pop(0)

0xed: GOTO 0xa2

0xee: Return(); Pop(0)

0xef: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xf0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf1: PushEmpty(bool, object, float)
0xf2: Stack[-2] = Stack[-12]
0xf3: Stack[-1] = (float) 70.0
0xf4: Call2 0x33a

0xf5: Pop(2)
0xf6: Pop(1); Push((bool) Stack[-1] == 0)
0xf7: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf8: Stack[-10] = (int) -2
0xf9: Return(); Pop(8)

0xfa: @ CreateDialog(Stack[-4])
0xfb: Pop(0)
0xfc: PushEmpty(int)
0xfd: Call2 0x576

0xfe: Pop(0)
0xff: @@ SetNPCName(Stack[-1])
0x100: Pop(1)
0x101: PushEmpty(int)
0x102: Call2 0x574

0x103: Pop(0)
0x104: @@ SetNPCDescription(Stack[-1])
0x105: Pop(1)
0x106: PushEmpty(string)
0x107: Call2 0x578

0x108: Pop(0)
0x109: @@ SetPhoto(Stack[-1])
0x10a: Pop(1)
0x10b: PushEmpty(string)
0x10c: Call2 0x57a

0x10d: Pop(0)
0x10e: @@ SetPhoto2(Stack[-1])
0x10f: Pop(1)
0x110: PushEmpty(int)
0x111: Call2 0x552

0x112: Pop(0)
0x113: @@ SetPlayerName(Stack[-1])
0x114: Pop(1)
0x115: Stack[-2] = (int) -1
0x116: @ IsOverrideActive(Stack[-3])
0x117: Pop(0)
0x118: Push(Stack[-3])
0x119: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11a: Stack[-10] = (int) -2
0x11b: Return(); Pop(8)

0x11c: @ DoDialog(Stack[-4])
0x11d: Pop(0)
0x11e: PushEmpty(bool, object)
0x11f: PushEmpty(object)
0x120: Call2 0x450

0x121: Stack[-2] = Stack[-1]
0x122: Pop(1)
0x123: Call2 0x391

0x124: Pop(2)
0x125: PushEmpty(object, object)
0x126: Stack[-2] = Stack[-11]
0x127: Stack[-1] = Stack[-6]
0x128: Push(-2, 4); TaskCall(3)
0x129: Call2 0x140

0x12a: Pop(-2, 4); TaskReturn
0x12b: Pop(2)
0x12c: @@ IsDialogEnd(Stack[-1])
0x12d: Pop(0)
0x12e: Pop(0); Push((bool) Stack[-1] == 0)
0x12f: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x130: @ sync()
0x131: Pop(0)
0x132: @@ IsDialogEnd(Stack[-1])
0x133: Pop(0)
0x134: GOTO 0x12e

0x135: PushEmpty(object)
0x136: Stack[-1] = Stack[-10]
0x137: Call2 0x37f

0x138: Pop(1)
0x139: @ StopDialog(Stack[-4])
0x13a: Pop(0)
0x13b: @@ GetReturnValue(Stack[-2])
0x13c: Pop(0)
0x13d: Stack[-10] = Stack[-2]
0x13e: Return(); Pop(8)

0x13f: Stack[-4] = 0
0x140: PushEmpty()
0x141: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x142: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x143: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x144: Push((int) 1)
0x145: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x146: PushEmpty(bool, object)
0x147: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x148: Call2 0x4de

0x149: Pop(1)
0x14a: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x14b: PushEmpty(object, object)
0x14c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14e: Call2 0x490

0x14f: Pop(2)
0x150: PushEmpty(string)
0x151: Stack[-1] = "Fear"
0x152: Call2 0x18e

0x153: Pop(1)
0x154: Push((int) 530928)
0x155: @@ SetMessage(Stack[-1])
0x156: Pop(1)
0x157: @@ ClearReplies()
0x158: Pop(0)
0x159: Push((int) 530929)
0x15a: Push((int) 32288)
0x15b: Push((int) 32256)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: GOTO 0x170

0x15f: PushEmpty(string)
0x160: Stack[-1] = "Neutral"
0x161: Call2 0x18e

0x162: Pop(1)
0x163: Push((int) 530936)
0x164: @@ SetMessage(Stack[-1])
0x165: Pop(1)
0x166: @@ ClearReplies()
0x167: Pop(0)
0x168: Push((int) 530937)
0x169: Push((int) -1)
0x16a: Push((int) 32264)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: GOTO 0x170

0x16e: Return(); Pop(0)

0x16f: GOTO 0x144

0x170: PushEmpty(bool)
0x171: Call2 0x57c

0x172: Pop(0)
0x173: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x174: @ lshWaitForAnimEnd()
0x175: Pop(0)
0x176: Push( Stack[3 + Tasks[-1].StackPointer] )
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: GOTO 0x17e

0x179: PushEmpty(string)
0x17a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x17b: Call2 0x41b

0x17c: Pop(1)
0x17d: GOTO 0x174

0x17e: GOTO 0x18d

0x17f: Push("all")
0x180: Push("idle")
0x181: @ PlayAnimation(Stack[-2], Stack[-1])
0x182: Pop(2)
0x183: @ WaitForAnimEnd()
0x184: Pop(0)
0x185: Push( Stack[3 + Tasks[-1].StackPointer] )
0x186: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x187: GOTO 0x18d

0x188: Push("all")
0x189: Push("idle")
0x18a: @ PlayAnimation(Stack[-2], Stack[-1])
0x18b: Pop(2)
0x18c: GOTO 0x183

0x18d: Return(); Pop(0)

0x18e: PushEmpty()
0x18f: PushEmpty(bool)
0x190: Call2 0x57c

0x191: Pop(0)
0x192: Pop(1); Push((bool) Stack[-1] == 0)
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: Return(); Pop(0)

0x195: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: Return(); Pop(0)

0x198: PushEmpty(string, bool)
0x199: Stack[-2] = Stack[-3]
0x19a: Push("")
0x19b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19d: Stack[-1] = (bool) 0
0x19e: GOTO 0x1a0

0x19f: Stack[-1] = (bool) 1
0x1a0: Call2 0x42b

0x1a1: Pop(2)
0x1a2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty()
0x1a5: Push((int) 1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x1a7: PushEmpty()
0x1a8: Call2 0x449

0x1a9: Pop(0)
0x1aa: Push((int) 32262)
0x1ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1ad: PushEmpty(object, object)
0x1ae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1af: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b0: Call2 0x496

0x1b1: Pop(2)
0x1b2: PushEmpty(object, object)
0x1b3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b5: Call2 0x4d7

0x1b6: Pop(2)
0x1b7: PushEmpty(object, object)
0x1b8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ba: Call2 0x4b7

0x1bb: Pop(2)
0x1bc: Push((int) 32312)
0x1bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1bf: PushEmpty(object, object)
0x1c0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c2: Call2 0x496

0x1c3: Pop(2)
0x1c4: PushEmpty(object, object)
0x1c5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c7: Call2 0x4d7

0x1c8: Pop(2)
0x1c9: PushEmpty(object, object)
0x1ca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1cc: Call2 0x4c7

0x1cd: Pop(2)
0x1ce: Push((int) 32255)
0x1cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1d1: PushEmpty(bool, object)
0x1d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d3: Call2 0x4de

0x1d4: Pop(1)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1d6: PushEmpty(object, object)
0x1d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d9: Call2 0x490

0x1da: Pop(2)
0x1db: PushEmpty(string)
0x1dc: Stack[-1] = "Fear"
0x1dd: Call2 0x18e

0x1de: Pop(1)
0x1df: Push((int) 530928)
0x1e0: @@ SetMessage(Stack[-1])
0x1e1: Pop(1)
0x1e2: @@ ClearReplies()
0x1e3: Pop(0)
0x1e4: Push((int) 530929)
0x1e5: Push((int) 32288)
0x1e6: Push((int) 32256)
0x1e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e8: Pop(3)
0x1e9: Return(); Pop(0)

0x1ea: PushEmpty(string)
0x1eb: Stack[-1] = "Neutral"
0x1ec: Call2 0x18e

0x1ed: Pop(1)
0x1ee: Push((int) 530936)
0x1ef: @@ SetMessage(Stack[-1])
0x1f0: Pop(1)
0x1f1: @@ ClearReplies()
0x1f2: Pop(0)
0x1f3: Push((int) 530937)
0x1f4: Push((int) -1)
0x1f5: Push((int) 32264)
0x1f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f7: Pop(3)
0x1f8: Return(); Pop(0)

0x1f9: Push((int) 32288)
0x1fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x1fc: PushEmpty(string)
0x1fd: Stack[-1] = "Fear"
0x1fe: Call2 0x18e

0x1ff: Pop(1)
0x200: Push((int) 530967)
0x201: @@ SetMessage(Stack[-1])
0x202: Pop(1)
0x203: @@ ClearReplies()
0x204: Pop(0)
0x205: Push((int) 530968)
0x206: Push((int) 32291)
0x207: Push((int) 32289)
0x208: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x209: Pop(3)
0x20a: Push((int) 530969)
0x20b: Push((int) 32294)
0x20c: Push((int) 32290)
0x20d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20e: Pop(3)
0x20f: Return(); Pop(0)

0x210: Push((int) 32294)
0x211: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x213: PushEmpty(string)
0x214: Stack[-1] = "Azart"
0x215: Call2 0x18e

0x216: Pop(1)
0x217: Push((int) 530973)
0x218: @@ SetMessage(Stack[-1])
0x219: Pop(1)
0x21a: @@ ClearReplies()
0x21b: Pop(0)
0x21c: Push((int) 530974)
0x21d: Push((int) 32296)
0x21e: Push((int) 32295)
0x21f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x220: Pop(3)
0x221: Push((int) 530976)
0x222: Push((int) 32291)
0x223: Push((int) 32297)
0x224: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x225: Pop(3)
0x226: Return(); Pop(0)

0x227: Push((int) 32296)
0x228: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x229: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x22a: PushEmpty(string)
0x22b: Stack[-1] = "Azart"
0x22c: Call2 0x18e

0x22d: Pop(1)
0x22e: Push((int) 530975)
0x22f: @@ SetMessage(Stack[-1])
0x230: Pop(1)
0x231: @@ ClearReplies()
0x232: Pop(0)
0x233: Push((int) 530977)
0x234: Push((int) 32291)
0x235: Push((int) 32298)
0x236: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x237: Pop(3)
0x238: Return(); Pop(0)

0x239: Push((int) 32291)
0x23a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x23c: PushEmpty(string)
0x23d: Stack[-1] = "Azart"
0x23e: Call2 0x18e

0x23f: Pop(1)
0x240: Push((int) 530970)
0x241: @@ SetMessage(Stack[-1])
0x242: Pop(1)
0x243: @@ ClearReplies()
0x244: Pop(0)
0x245: Push((int) 530971)
0x246: Push((int) 32293)
0x247: Push((int) 32292)
0x248: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x249: Pop(3)
0x24a: Push((int) 530989)
0x24b: Push((int) 32315)
0x24c: Push((int) 32314)
0x24d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24e: Pop(3)
0x24f: Return(); Pop(0)

0x250: Push((int) 32315)
0x251: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x253: PushEmpty(string)
0x254: Stack[-1] = "Serious"
0x255: Call2 0x18e

0x256: Pop(1)
0x257: Push((int) 530990)
0x258: @@ SetMessage(Stack[-1])
0x259: Pop(1)
0x25a: @@ ClearReplies()
0x25b: Pop(0)
0x25c: Push((int) 530991)
0x25d: Push((int) 32293)
0x25e: Push((int) 32316)
0x25f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x260: Pop(3)
0x261: Return(); Pop(0)

0x262: Push((int) 32293)
0x263: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x265: PushEmpty(string)
0x266: Stack[-1] = "Azart"
0x267: Call2 0x18e

0x268: Pop(1)
0x269: Push((int) 530972)
0x26a: @@ SetMessage(Stack[-1])
0x26b: Pop(1)
0x26c: @@ ClearReplies()
0x26d: Pop(0)
0x26e: Push((int) 530978)
0x26f: Push((int) 32302)
0x270: Push((int) 32300)
0x271: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x272: Pop(3)
0x273: Return(); Pop(0)

0x274: Push((int) 32302)
0x275: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x276: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x277: PushEmpty(string)
0x278: Stack[-1] = "Serious"
0x279: Call2 0x18e

0x27a: Pop(1)
0x27b: Push((int) 530980)
0x27c: @@ SetMessage(Stack[-1])
0x27d: Pop(1)
0x27e: @@ ClearReplies()
0x27f: Pop(0)
0x280: Push((int) 530981)
0x281: Push((int) 32301)
0x282: Push((int) 32303)
0x283: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x284: Pop(3)
0x285: Push((int) 530987)
0x286: Push((int) 32301)
0x287: Push((int) 32310)
0x288: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x289: Pop(3)
0x28a: Return(); Pop(0)

0x28b: Push((int) 32301)
0x28c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x28e: PushEmpty(string)
0x28f: Stack[-1] = "Serious"
0x290: Call2 0x18e

0x291: Pop(1)
0x292: Push((int) 530979)
0x293: @@ SetMessage(Stack[-1])
0x294: Pop(1)
0x295: @@ ClearReplies()
0x296: Pop(0)
0x297: Push((int) 530982)
0x298: Push((int) 32305)
0x299: Push((int) 32304)
0x29a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29b: Pop(3)
0x29c: Return(); Pop(0)

0x29d: Push((int) 32305)
0x29e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29f: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2a0: PushEmpty(string)
0x2a1: Stack[-1] = "Azart"
0x2a2: Call2 0x18e

0x2a3: Pop(1)
0x2a4: Push((int) 530983)
0x2a5: @@ SetMessage(Stack[-1])
0x2a6: Pop(1)
0x2a7: @@ ClearReplies()
0x2a8: Pop(0)
0x2a9: Push((int) 530931)
0x2aa: Push((int) 32259)
0x2ab: Push((int) 32258)
0x2ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ad: Pop(3)
0x2ae: Push((int) 530984)
0x2af: Push((int) 32307)
0x2b0: Push((int) 32306)
0x2b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b2: Pop(3)
0x2b3: Return(); Pop(0)

0x2b4: Push((int) 32307)
0x2b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2b7: PushEmpty(string)
0x2b8: Stack[-1] = "Azart"
0x2b9: Call2 0x18e

0x2ba: Pop(1)
0x2bb: Push((int) 530985)
0x2bc: @@ SetMessage(Stack[-1])
0x2bd: Pop(1)
0x2be: @@ ClearReplies()
0x2bf: Pop(0)
0x2c0: Push((int) 530986)
0x2c1: Push((int) 32259)
0x2c2: Push((int) 32308)
0x2c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c4: Pop(3)
0x2c5: Return(); Pop(0)

0x2c6: Push((int) 32259)
0x2c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2c9: PushEmpty(string)
0x2ca: Stack[-1] = "Serious"
0x2cb: Call2 0x18e

0x2cc: Pop(1)
0x2cd: Push((int) 530932)
0x2ce: @@ SetMessage(Stack[-1])
0x2cf: Pop(1)
0x2d0: @@ ClearReplies()
0x2d1: Pop(0)
0x2d2: Push((int) 530933)
0x2d3: Push((int) 32261)
0x2d4: Push((int) 32260)
0x2d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d6: Pop(3)
0x2d7: Push((int) 530988)
0x2d8: Push((int) -1)
0x2d9: Push((int) 32312)
0x2da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2db: Pop(3)
0x2dc: Return(); Pop(0)

0x2dd: Push((int) 32261)
0x2de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2e0: PushEmpty(string)
0x2e1: Stack[-1] = "Serious"
0x2e2: Call2 0x18e

0x2e3: Pop(1)
0x2e4: Push((int) 530934)
0x2e5: @@ SetMessage(Stack[-1])
0x2e6: Pop(1)
0x2e7: @@ ClearReplies()
0x2e8: Pop(0)
0x2e9: Push((int) 530935)
0x2ea: Push((int) -1)
0x2eb: Push((int) 32262)
0x2ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ed: Pop(3)
0x2ee: Return(); Pop(0)

0x2ef: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2f0: PushEmpty(bool)
0x2f1: Call2 0x57c

0x2f2: Pop(0)
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f4: @ lshStopAnimation()
0x2f5: Pop(0)
0x2f6: GOTO 0x2f9

0x2f7: @ StopAnimation()
0x2f8: Pop(0)
0x2f9: Return(); Pop(0)

0x2fa: GOTO 0x1a5

0x2fb: Return(); Pop(0)

0x2fc: PushEmpty()
0x2fd: PushEmpty(object)
0x2fe: Stack[-1] = Stack[-2]
0x2ff: Call2 0x563

0x300: Pop(1)
0x301: PushEmpty(int, object)
0x302: Stack[-1] = Stack[-3]
0x303: Push(-2, 1); TaskCall(2)
0x304: Call2 0xef

0x305: Pop(-2, 1); TaskReturn
0x306: Pop(2)
0x307: Return(); Pop(0)

0x308: @ Hold()
0x309: Pop(0)
0x30a: GOTO 0x308

0x30b: Return(); Pop(0)

0x30c: PushEmpty(bool, bool)
0x30d: Push("cleanup")
0x30e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x310: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x311: @ IsLoaded(Stack[-1])
0x312: Pop(0)
0x313: PushEmpty(bool)
0x314: Stack[-1] = (bool) 0
0x315: Pop(0); Push((bool) Stack[-2] == 0)
0x316: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x317: PushEmpty(bool)
0x318: Call2 0x338

0x319: Pop(0)
0x31a: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x31b: Stack[-1] = (bool) 1
0x31c: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31d: PushEmpty(object)
0x31e: Call2 0x450

0x31f: Pop(0)
0x320: @ RemoveActor(Stack[-1])
0x321: Pop(1)
0x322: GOTO 0x327

0x323: Push("restore")
0x324: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x326: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x327: Return(); Pop(2)

0x328: PushEmpty(bool)
0x329: Stack[-1] = (bool) 0
0x32a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x32b: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32c: PushEmpty(bool)
0x32d: Call2 0x338

0x32e: Pop(0)
0x32f: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x330: Stack[-1] = (bool) 1
0x331: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x332: PushEmpty(object)
0x333: Call2 0x450

0x334: Pop(0)
0x335: @ RemoveActor(Stack[-1])
0x336: Pop(1)
0x337: Return(); Pop(0)

0x338: Stack[-1] = (bool) 1
0x339: Return(); Pop(0)

0x33a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x33b: @@ GetPosition(Stack[-8])
0x33c: Pop(0)
0x33d: @@ GetEyesHeight(Stack[-9])
0x33e: Pop(0)
0x33f: Push(CvectorIndex(Stack[-8], 1))
0x340: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x341: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x342: @ GetPosition(Stack[-7])
0x343: Pop(0)
0x344: @ GetEyesHeight(Stack[-9])
0x345: Pop(0)
0x346: Push(CvectorIndex(Stack[-7], 1))
0x347: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x348: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x349: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x34a: Push(CvectorIndex(Stack[-6], 1))
0x34b: Stack[-1] = (int) 0
0x34c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x34d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x34e: Pop(1); Push(Sqrt(Stack[-1]))
0x34f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x350: Stack[-5] = -Stack[-6]; Pop(0);
0x351: Pop(0); Push(Stack[-6] * Stack[-19]);
0x352: PushEmpty(cvector, cvector)
0x353: Push(CVector(0.0, 1.0, 0.0))
0x354: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x355: Call2 0x456

0x356: Pop(1)
0x357: Push((int) 25)
0x358: Pop(2); Push(Stack[-2] * Stack[-1]);
0x359: Pop(2); Push(Stack[-2] + Stack[-1]);
0x35a: Push(CVector(0.0, 10.0, 0.0))
0x35b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x35c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x35d: @ IsOverrideActive(Stack[-2])
0x35e: Pop(0)
0x35f: Push(Stack[-2])
0x360: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x361: Stack[-21] = (bool) 0
0x362: Return(); Pop(18)

0x363: @ StopWorld()
0x364: Pop(0)
0x365: Push((bool) 1)
0x366: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x367: Pop(1)
0x368: Push(CvectorIndex(Stack[-4], 0))
0x369: Push(CvectorIndex(Stack[-5], 2))
0x36a: @ Rotate(Stack[-2], Stack[-1])
0x36b: Pop(2)
0x36c: PushEmpty(bool)
0x36d: Call2 0x57c

0x36e: Pop(0)
0x36f: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x370: GOTO 0x379

0x371: Push("head")
0x372: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x373: Pop(1)
0x374: Push(Stack[-1])
0x375: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x376: Push("head")
0x377: @ LookAsyncCamera(Stack[-1])
0x378: Pop(1)
0x379: @ CameraWaitForPlayFinish()
0x37a: Pop(0)
0x37b: @ ResumeWorld()
0x37c: Pop(0)
0x37d: Stack[-21] = (bool) 1
0x37e: Return(); Pop(18)

0x37f: PushEmpty(bool, bool)
0x380: Push((bool) 1)
0x381: @ CameraSwitchToNormal(Stack[-1])
0x382: Pop(1)
0x383: PushEmpty(bool)
0x384: Call2 0x57c

0x385: Pop(0)
0x386: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x387: GOTO 0x390

0x388: Push("head")
0x389: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x38a: Pop(1)
0x38b: Push(Stack[-1])
0x38c: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38d: Push("head")
0x38e: @ UnlookAsync(Stack[-1])
0x38f: Pop(1)
0x390: Return(); Pop(2)

0x391: PushEmpty(int, int, int, int)
0x392: Push("voice_common")
0x393: @ GetVariable(Stack[-1], Stack[-3])
0x394: Pop(1)
0x395: Push(Stack[-2])
0x396: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x397: PushEmpty(bool, object)
0x398: Stack[-1] = Stack[-7]
0x399: Call2 0x3cb

0x39a: Pop(1)
0x39b: Pop(1); Push((bool) Stack[-1] == 0)
0x39c: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39d: PushEmpty(bool, object)
0x39e: Stack[-1] = Stack[-7]
0x39f: Call2 0x3f0

0x3a0: Pop(1)
0x3a1: Pop(1); Push((bool) Stack[-1] == 0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a3: Stack[-6] = (bool) 0
0x3a4: Return(); Pop(4)

0x3a5: Push((int) 2)
0x3a6: @ irand(Stack[-2], Stack[-1])
0x3a7: Pop(1)
0x3a8: Push(Stack[-1])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3aa: Push("voice_common")
0x3ab: Push((int) 1)
0x3ac: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3ad: Push((int) 3)
0x3ae: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3af: @ SetVariable(Stack[-2], Stack[-1])
0x3b0: Pop(2)
0x3b1: GOTO 0x3b6

0x3b2: Push("voice_common")
0x3b3: Push((int) 0)
0x3b4: @ SetVariable(Stack[-2], Stack[-1])
0x3b5: Pop(2)
0x3b6: GOTO 0x3c9

0x3b7: PushEmpty(bool, object)
0x3b8: Stack[-1] = Stack[-7]
0x3b9: Call2 0x3f0

0x3ba: Pop(1)
0x3bb: Pop(1); Push((bool) Stack[-1] == 0)
0x3bc: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3bd: PushEmpty(bool, object)
0x3be: Stack[-1] = Stack[-7]
0x3bf: Call2 0x3cb

0x3c0: Pop(1)
0x3c1: Pop(1); Push((bool) Stack[-1] == 0)
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c3: Stack[-6] = (bool) 0
0x3c4: Return(); Pop(4)

0x3c5: Push("voice_common")
0x3c6: Push((int) 1)
0x3c7: @ SetVariable(Stack[-2], Stack[-1])
0x3c8: Pop(2)
0x3c9: Stack[-6] = (bool) 1
0x3ca: Return(); Pop(4)

0x3cb: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3cc: Stack[-5] = "c"
0x3cd: Stack[-4] = (int) 0
0x3ce: Push((int) 1)
0x3cf: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3d0: Push((int) 1)
0x3d1: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3d2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3d3: @@ HasProperty(Stack[-1], Stack[-4])
0x3d4: Pop(1)
0x3d5: Pop(0); Push((bool) Stack[-3] == 0)
0x3d6: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d7: GOTO 0x3db

0x3d8: Push((int) 1)
0x3d9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3da: GOTO 0x3ce

0x3db: Pop(0); Push((bool) Stack[-4] == 0)
0x3dc: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3dd: Stack[-12] = (bool) 0
0x3de: Return(); Pop(10)

0x3df: Stack[-2] = (int) 0
0x3e0: Push((int) 1)
0x3e1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e3: @ irand(Stack[-2], Stack[-4])
0x3e4: Pop(0)
0x3e5: Push((int) 1)
0x3e6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3e7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3e8: @@ GetProperty(Stack[-1], Stack[-2])
0x3e9: Pop(1)
0x3ea: PushEmpty(bool, string)
0x3eb: Stack[-1] = Stack[-3]
0x3ec: Call2 0x43a

0x3ed: Stack[-14] = Stack[-2]
0x3ee: Pop(2)
0x3ef: Return(); Pop(10)

0x3f0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3f1: Push("d")
0x3f2: PushEmpty(int)
0x3f3: Call2 0x487

0x3f4: Pop(0)
0x3f5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f6: Push("m")
0x3f7: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3f8: Stack[-4] = (int) 0
0x3f9: Push((int) 1)
0x3fa: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x3fb: Push((int) 1)
0x3fc: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3fd: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3fe: @@ HasProperty(Stack[-1], Stack[-4])
0x3ff: Pop(1)
0x400: Pop(0); Push((bool) Stack[-3] == 0)
0x401: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x402: GOTO 0x406

0x403: Push((int) 1)
0x404: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x405: GOTO 0x3f9

0x406: Pop(0); Push((bool) Stack[-4] == 0)
0x407: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x408: Stack[-12] = (bool) 0
0x409: Return(); Pop(10)

0x40a: Stack[-2] = (int) 0
0x40b: Push((int) 1)
0x40c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x40d: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40e: @ irand(Stack[-2], Stack[-4])
0x40f: Pop(0)
0x410: Push((int) 1)
0x411: Pop(1); Push(Stack[-3] + Stack[-1]);
0x412: Pop(1); Push(Stack[-6] + Stack[-1]);
0x413: @@ GetProperty(Stack[-1], Stack[-2])
0x414: Pop(1)
0x415: PushEmpty(bool, string)
0x416: Stack[-1] = Stack[-3]
0x417: Call2 0x43a

0x418: Stack[-14] = Stack[-2]
0x419: Pop(2)
0x41a: Return(); Pop(10)

0x41b: PushEmpty(bool, float, float, bool, float, float)
0x41c: @ lshHasAnimation(Stack[-3], Stack[-7])
0x41d: Pop(0)
0x41e: Push(Stack[-3])
0x41f: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x420: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x421: Pop(0)
0x422: Push((bool) 0)
0x423: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x424: Pop(1)
0x425: GOTO 0x42a

0x426: Push("Can't find lsh animation : ")
0x427: Pop(1); Push(Stack[-1] + Stack[-8]);
0x428: @ Trace(Stack[-1])
0x429: Pop(1)
0x42a: Return(); Pop(6)

0x42b: PushEmpty(bool, float, float, bool, float, float)
0x42c: @ lshHasAnimation(Stack[-3], Stack[-8])
0x42d: Pop(0)
0x42e: Push(Stack[-3])
0x42f: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x430: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x431: Pop(0)
0x432: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x433: Pop(0)
0x434: GOTO 0x439

0x435: Push("Can't find lsh animation : ")
0x436: Pop(1); Push(Stack[-1] + Stack[-9]);
0x437: @ Trace(Stack[-1])
0x438: Pop(1)
0x439: Return(); Pop(6)

0x43a: PushEmpty(bool, bool)
0x43b: PushEmpty(bool)
0x43c: Call2 0x57c

0x43d: Pop(0)
0x43e: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x43f: @ lshHasSpeech(Stack[-1], Stack[-3])
0x440: Pop(0)
0x441: Push(Stack[-1])
0x442: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x443: @ lshPlaySpeech(Stack[-3])
0x444: Pop(0)
0x445: Stack[-4] = (bool) 1
0x446: Return(); Pop(2)

0x447: Stack[-4] = (bool) 0
0x448: Return(); Pop(2)

0x449: PushEmpty(bool)
0x44a: Call2 0x57c

0x44b: Pop(0)
0x44c: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44d: @ lshStopSpeech()
0x44e: Pop(0)
0x44f: Return(); Pop(0)

0x450: PushEmpty(object, object)
0x451: @ self(Stack[-1])
0x452: Pop(0)
0x453: Stack[-3] = Stack[-1]
0x454: Return(); Pop(2)

0x455: Stack[-1] = 0
0x456: PushEmpty(float, float)
0x457: Pop(0); Push(Stack[-3] | Stack[-3]);
0x458: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x459: Push((float)0.0)
0x45a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x45b: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x45c: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x45d: Return(); Pop(2)

0x45e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x45f: Return(); Pop(2)

0x460: PushEmpty(int, int)
0x461: @ GetVariable(Stack[-3], Stack[-1])
0x462: Pop(0)
0x463: Stack[-4] = Stack[-1]
0x464: Return(); Pop(2)

0x465: PushEmpty(object, object)
0x466: @ FindActor(Stack[-1], Stack[-4])
0x467: Pop(0)
0x468: Pop(0); Push((bool) Stack[-1] == 0)
0x469: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x46a: Push("Door ")
0x46b: Pop(1); Push(Stack[-1] + Stack[-5]);
0x46c: Push(" not found")
0x46d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x46e: @ Trace(Stack[-1])
0x46f: Pop(1)
0x470: GOTO 0x474

0x471: Push("locked")
0x472: @@ SetProperty(Stack[-1], Stack[-4])
0x473: Pop(1)
0x474: Return(); Pop(2)

0x475: Stack[-1] = 0
0x476: PushEmpty(object, object)
0x477: @ FindActor(Stack[-1], Stack[-4])
0x478: Pop(0)
0x479: Pop(0); Push((bool) Stack[-1] == 0)
0x47a: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x47b: Stack[-5] = (bool) 0
0x47c: Return(); Pop(2)

0x47d: @ Trigger(Stack[-1], Stack[-3])
0x47e: Pop(0)
0x47f: Stack[-5] = (bool) 1
0x480: Return(); Pop(2)

0x481: Stack[-1] = 0
0x482: PushEmpty(float, float)
0x483: @ GetGameTime(Stack[-1])
0x484: Pop(0)
0x485: Stack[-3] = Stack[-1]
0x486: Return(); Pop(2)

0x487: PushEmpty(float, float)
0x488: @ GetGameTime(Stack[-1])
0x489: Pop(0)
0x48a: Push((int) 1)
0x48b: PushEmpty(int)
0x48c: Push((int) 24)
0x48d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x48e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x48f: Return(); Pop(2)

0x490: PushEmpty()
0x491: Push("oob1Spi4ka1")
0x492: Push((int) 1)
0x493: @ SetVariable(Stack[-2], Stack[-1])
0x494: Pop(2)
0x495: Return(); Pop(0)

0x496: PushEmpty(object, object)
0x497: PushEmpty(object)
0x498: Call2 0x520

0x499: Stack[-2] = Stack[-1]
0x49a: Pop(1)
0x49b: Push("b1q05Spi4kaGotoLaska")
0x49c: Push("pt_map_laska")
0x49d: Push((int) 3)
0x49e: Push((int) 530954)
0x49f: PushEmpty(float)
0x4a0: Call2 0x482

0x4a1: Pop(0)
0x4a2: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4a3: Pop(5)
0x4a4: Push("b1q05Spi4kaGotoMishka")
0x4a5: Push("pt_map_mishka")
0x4a6: Push((int) 3)
0x4a7: Push((int) 530955)
0x4a8: PushEmpty(float)
0x4a9: Call2 0x482

0x4aa: Pop(0)
0x4ab: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4ac: Pop(5)
0x4ad: PushEmpty()
0x4ae: Call2 0x4ea

0x4af: Pop(0)
0x4b0: PushEmpty(bool, string, string)
0x4b1: Stack[-2] = "quest_b1_05"
0x4b2: Stack[-1] = "completed"
0x4b3: Call2 0x476

0x4b4: Pop(3)
0x4b5: Return(); Pop(2)

0x4b6: Stack[-1] = 0
0x4b7: PushEmpty()
0x4b8: PushEmpty(object, string, float)
0x4b9: PushEmpty(object)
0x4ba: Call2 0x520

0x4bb: Stack[-4] = Stack[-1]
0x4bc: Pop(1)
0x4bd: Stack[-2] = "pt_map_laska"
0x4be: Stack[-1] = (int) 2
0x4bf: Call2 0x531

0x4c0: Pop(3)
0x4c1: PushEmpty(object)
0x4c2: Call2 0x520

0x4c3: Pop(0)
0x4c4: @@ ShowMap(Stack[-1])
0x4c5: Pop(1)
0x4c6: Return(); Pop(0)

0x4c7: PushEmpty()
0x4c8: PushEmpty(object, string, float)
0x4c9: PushEmpty(object)
0x4ca: Call2 0x520

0x4cb: Stack[-4] = Stack[-1]
0x4cc: Pop(1)
0x4cd: Stack[-2] = "pt_map_mishka"
0x4ce: Stack[-1] = (int) 2
0x4cf: Call2 0x531

0x4d0: Pop(3)
0x4d1: PushEmpty(object)
0x4d2: Call2 0x520

0x4d3: Pop(0)
0x4d4: @@ ShowMap(Stack[-1])
0x4d5: Pop(1)
0x4d6: Return(); Pop(0)

0x4d7: PushEmpty()
0x4d8: PushEmpty(string, bool)
0x4d9: Stack[-2] = "vagon_mishka@door1"
0x4da: Stack[-1] = (bool) 0
0x4db: Call2 0x465

0x4dc: Pop(2)
0x4dd: Return(); Pop(0)

0x4de: PushEmpty()
0x4df: PushEmpty(int, string)
0x4e0: Stack[-1] = "oob1Spi4ka1"
0x4e1: Call2 0x460

0x4e2: Pop(1)
0x4e3: Push((int) 0)
0x4e4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4e5: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e6: Stack[-2] = (bool) 1
0x4e7: Return(); Pop(0)

0x4e8: Stack[-2] = (bool) 0
0x4e9: Return(); Pop(0)

0x4ea: PushEmpty(object, object)
0x4eb: Push((int) 584)
0x4ec: Push((int) 2)
0x4ed: Push((int) 530953)
0x4ee: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4ef: Pop(3)
0x4f0: PushEmpty(bool, object, int)
0x4f1: Stack[-2] = Stack[-4]
0x4f2: Stack[-1] = (int) 582
0x4f3: Call2 0x504

0x4f4: Pop(3)
0x4f5: Return(); Pop(2)

0x4f6: Stack[-1] = 0
0x4f7: PushEmpty(object, object)
0x4f8: @ GetDiaryRoot(Stack[-1])
0x4f9: Pop(0)
0x4fa: Pop(0); Push((bool) Stack[-1] == 0)
0x4fb: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4fc: Push("Can't retrieve diary root")
0x4fd: @ Trace(Stack[-1])
0x4fe: Pop(1)
0x4ff: Stack[-3] = (bool) 0
0x500: Return(); Pop(2)

0x501: Stack[-3] = Stack[-1]
0x502: Return(); Pop(2)

0x503: Stack[-1] = 0
0x504: PushEmpty(object, object, int, object, object, int)
0x505: PushEmpty(object)
0x506: Call2 0x4f7

0x507: Stack[-4] = Stack[-1]
0x508: Pop(1)
0x509: @@ Find(Stack[-7], Stack[-2])
0x50a: Pop(0)
0x50b: Pop(0); Push((bool) Stack[-2] == 0)
0x50c: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x50d: Push("Can't find diary parent with id: ")
0x50e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x50f: @ Trace(Stack[-1])
0x510: Pop(1)
0x511: Stack[-9] = (bool) 0
0x512: Return(); Pop(6)

0x513: @@ AddChild(Stack[-8])
0x514: Pop(0)
0x515: Push((int) 7)
0x516: @ SendWorldWndMessage(Stack[-1])
0x517: Pop(1)
0x518: @@ GetCategory(Stack[-1])
0x519: Pop(0)
0x51a: @ SetDiarySection(Stack[-1])
0x51b: Pop(0)
0x51c: Stack[-9] = (bool) 0
0x51d: Return(); Pop(6)

0x51e: Stack[-2] = 0
0x51f: Stack[-3] = 0
0x520: PushEmpty(object, object, object, object)
0x521: @ GetMainOutdoorScene(Stack[-2])
0x522: Pop(0)
0x523: Pop(0); Push((bool) Stack[-2] == 0)
0x524: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x525: Push("Can't find main outdoor scene")
0x526: @ Trace(Stack[-1])
0x527: Pop(1)
0x528: Stack[-1] = 0
0x529: Stack[-5] = Stack[-1]
0x52a: Return(); Pop(4)

0x52b: @@ GetMap(Stack[-1])
0x52c: Pop(0)
0x52d: Stack[-5] = Stack[-1]
0x52e: Return(); Pop(4)

0x52f: Stack[-1] = 0
0x530: Stack[-2] = 0
0x531: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x532: @ GetMainOutdoorScene(Stack[-2])
0x533: Pop(0)
0x534: Pop(0); Push((bool) Stack[-2] == 0)
0x535: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x536: Push("Can't find main outdoor scene")
0x537: @ Trace(Stack[-1])
0x538: Pop(1)
0x539: Return(); Pop(8)

0x53a: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x53b: Pop(0)
0x53c: Pop(0); Push((bool) Stack[-1] == 0)
0x53d: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x53e: Push("Warning: outdoor scene locator ")
0x53f: Pop(1); Push(Stack[-1] + Stack[-11]);
0x540: Push(" doesnt exist")
0x541: Pop(2); Push(Stack[-2] + Stack[-1]);
0x542: @ Trace(Stack[-1])
0x543: Pop(1)
0x544: @@ GetMap(Stack[-11])
0x545: Pop(0)
0x546: Pop(0); Push((bool) Stack[-11] == 0)
0x547: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x548: Push("Can't find map")
0x549: @ Trace(Stack[-1])
0x54a: Pop(1)
0x54b: Return(); Pop(8)

0x54c: Push(CvectorIndex(Stack[-4], 0))
0x54d: Push(CvectorIndex(Stack[-5], 2))
0x54e: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x54f: Pop(2)
0x550: Return(); Pop(8)

0x551: Stack[-2] = 0
0x552: PushEmpty(int, int)
0x553: Push("branch")
0x554: @ GetVariable(Stack[-1], Stack[-2])
0x555: Pop(1)
0x556: Push((int) 0)
0x557: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x558: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x559: Stack[-3] = (int) 1
0x55a: Return(); Pop(2)

0x55b: GOTO 0x561

0x55c: Push((int) 1)
0x55d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x55e: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x55f: Stack[-3] = (int) 2
0x560: Return(); Pop(2)

0x561: Stack[-3] = (int) 3
0x562: Return(); Pop(2)

0x563: PushEmpty(int, int)
0x564: Push("mt_spi4ka")
0x565: @ GetVariable(Stack[-1], Stack[-2])
0x566: Pop(1)
0x567: Pop(0); Push((bool) Stack[-1] == 0)
0x568: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x569: PushEmpty(int, object)
0x56a: Stack[-1] = Stack[-5]
0x56b: Push(-2, 1); TaskCall(0)
0x56c: Call2 0x0

0x56d: Pop(-2, 1); TaskReturn
0x56e: Pop(2)
0x56f: Push("mt_spi4ka")
0x570: Push((int) 1)
0x571: @ SetVariable(Stack[-2], Stack[-1])
0x572: Pop(2)
0x573: Return(); Pop(2)

0x574: Stack[-1] = (int) 515552
0x575: Return(); Pop(0)

0x576: Stack[-1] = (int) 502877
0x577: Return(); Pop(0)

0x578: Stack[-1] = "ui/NPC_Spi4ka.png"
0x579: Return(); Pop(0)

0x57a: Stack[-1] = "ui/NPC_Spi4ka_b.png"
0x57b: Return(); Pop(0)

0x57c: Stack[-1] = (bool) 1
0x57d: Return(); Pop(0)

