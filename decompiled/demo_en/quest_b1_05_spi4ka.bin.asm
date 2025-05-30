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
	Fear
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
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

RunOp = 0x2ef
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb5 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x295 Vars = (int, int)
	GTASK_4 Vars = (bool) Params = 0
		EVENT_0 Op = 0x2e3 Vars = (object)
		EVENT_26 Op = 0x2f3 Vars = (string)
		EVENT_6 Op = 0x30f Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x321

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x55b

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x559

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x55d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x55f

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x537

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
0x31: Call2 0x435

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x376

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
0x48: Call2 0x365

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
0x59: Call2 0x4c3

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x475

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Fear"
0x63: Call2 0x9f

0x64: Pop(1)
0x65: Push((int) 530928)
0x66: @@ SetMessage(Stack[-1])
0x67: Pop(1)
0x68: @@ ClearReplies()
0x69: Pop(0)
0x6a: Push((int) 530929)
0x6b: Push((int) 32288)
0x6c: Push((int) 32256)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x81

0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral"
0x72: Call2 0x9f

0x73: Pop(1)
0x74: Push((int) 530936)
0x75: @@ SetMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ ClearReplies()
0x78: Pop(0)
0x79: Push((int) 530937)
0x7a: Push((int) -1)
0x7b: Push((int) 32264)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: GOTO 0x81

0x7f: Return(); Pop(0)

0x80: GOTO 0x55

0x81: PushEmpty(bool)
0x82: Call2 0x561

0x83: Pop(0)
0x84: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x85: @ lshWaitForAnimEnd()
0x86: Pop(0)
0x87: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: GOTO 0x8f

0x8a: PushEmpty(string)
0x8b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8c: Call2 0x400

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
0xa1: Call2 0x561

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
0xb1: Call2 0x410

0xb2: Pop(2)
0xb3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb4: Return(); Pop(0)

0xb5: PushEmpty()
0xb6: Push((int) 1)
0xb7: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0xb8: PushEmpty()
0xb9: Call2 0x42e

0xba: Pop(0)
0xbb: Push((int) 32262)
0xbc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xbe: PushEmpty(object, object)
0xbf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc1: Call2 0x47b

0xc2: Pop(2)
0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call2 0x4bc

0xc7: Pop(2)
0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x49c

0xcc: Pop(2)
0xcd: Push((int) 32312)
0xce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x47b

0xd4: Pop(2)
0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x4bc

0xd9: Pop(2)
0xda: PushEmpty(object, object)
0xdb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdd: Call2 0x4ac

0xde: Pop(2)
0xdf: Push((int) 32255)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xe2: PushEmpty(bool, object)
0xe3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Call2 0x4c3

0xe5: Pop(1)
0xe6: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xe7: PushEmpty(object, object)
0xe8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xea: Call2 0x475

0xeb: Pop(2)
0xec: PushEmpty(string)
0xed: Stack[-1] = "Fear"
0xee: Call2 0x9f

0xef: Pop(1)
0xf0: Push((int) 530928)
0xf1: @@ SetMessage(Stack[-1])
0xf2: Pop(1)
0xf3: @@ ClearReplies()
0xf4: Pop(0)
0xf5: Push((int) 530929)
0xf6: Push((int) 32288)
0xf7: Push((int) 32256)
0xf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9: Pop(3)
0xfa: Return(); Pop(0)

0xfb: PushEmpty(string)
0xfc: Stack[-1] = "Neutral"
0xfd: Call2 0x9f

0xfe: Pop(1)
0xff: Push((int) 530936)
0x100: @@ SetMessage(Stack[-1])
0x101: Pop(1)
0x102: @@ ClearReplies()
0x103: Pop(0)
0x104: Push((int) 530937)
0x105: Push((int) -1)
0x106: Push((int) 32264)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Push((int) 32288)
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Fear"
0x10f: Call2 0x9f

0x110: Pop(1)
0x111: Push((int) 530967)
0x112: @@ SetMessage(Stack[-1])
0x113: Pop(1)
0x114: @@ ClearReplies()
0x115: Pop(0)
0x116: Push((int) 530968)
0x117: Push((int) 32291)
0x118: Push((int) 32289)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Return(); Pop(0)

0x11c: Push((int) 32294)
0x11d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11f: Push((int) 32296)
0x120: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Azart"
0x124: Call2 0x9f

0x125: Pop(1)
0x126: Push((int) 530975)
0x127: @@ SetMessage(Stack[-1])
0x128: Pop(1)
0x129: @@ ClearReplies()
0x12a: Pop(0)
0x12b: Push((int) 530977)
0x12c: Push((int) 32291)
0x12d: Push((int) 32298)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Return(); Pop(0)

0x131: Push((int) 32291)
0x132: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x134: PushEmpty(string)
0x135: Stack[-1] = "Azart"
0x136: Call2 0x9f

0x137: Pop(1)
0x138: Push((int) 530970)
0x139: @@ SetMessage(Stack[-1])
0x13a: Pop(1)
0x13b: @@ ClearReplies()
0x13c: Pop(0)
0x13d: Push((int) 530971)
0x13e: Push((int) 32293)
0x13f: Push((int) 32292)
0x140: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(3)
0x142: Push((int) 530989)
0x143: Push((int) 32315)
0x144: Push((int) 32314)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Push((int) 32315)
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Serious"
0x14d: Call2 0x9f

0x14e: Pop(1)
0x14f: Push((int) 530990)
0x150: @@ SetMessage(Stack[-1])
0x151: Pop(1)
0x152: @@ ClearReplies()
0x153: Pop(0)
0x154: Push((int) 530991)
0x155: Push((int) 32293)
0x156: Push((int) 32316)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Return(); Pop(0)

0x15a: Push((int) 32293)
0x15b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x15d: PushEmpty(string)
0x15e: Stack[-1] = "Azart"
0x15f: Call2 0x9f

0x160: Pop(1)
0x161: Push((int) 530972)
0x162: @@ SetMessage(Stack[-1])
0x163: Pop(1)
0x164: @@ ClearReplies()
0x165: Pop(0)
0x166: Push((int) 530978)
0x167: Push((int) 32302)
0x168: Push((int) 32300)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: Return(); Pop(0)

0x16c: Push((int) 32302)
0x16d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16e: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x16f: PushEmpty(string)
0x170: Stack[-1] = "Serious"
0x171: Call2 0x9f

0x172: Pop(1)
0x173: Push((int) 530980)
0x174: @@ SetMessage(Stack[-1])
0x175: Pop(1)
0x176: @@ ClearReplies()
0x177: Pop(0)
0x178: Push((int) 530981)
0x179: Push((int) 32301)
0x17a: Push((int) 32303)
0x17b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17c: Pop(3)
0x17d: Push((int) 530987)
0x17e: Push((int) 32301)
0x17f: Push((int) 32310)
0x180: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x181: Pop(3)
0x182: Return(); Pop(0)

0x183: Push((int) 32301)
0x184: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x186: PushEmpty(string)
0x187: Stack[-1] = "Serious"
0x188: Call2 0x9f

0x189: Pop(1)
0x18a: Push((int) 530979)
0x18b: @@ SetMessage(Stack[-1])
0x18c: Pop(1)
0x18d: @@ ClearReplies()
0x18e: Pop(0)
0x18f: Push((int) 530982)
0x190: Push((int) 32305)
0x191: Push((int) 32304)
0x192: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x193: Pop(3)
0x194: Return(); Pop(0)

0x195: Push((int) 32305)
0x196: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x197: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x198: PushEmpty(string)
0x199: Stack[-1] = "Azart"
0x19a: Call2 0x9f

0x19b: Pop(1)
0x19c: Push((int) 530983)
0x19d: @@ SetMessage(Stack[-1])
0x19e: Pop(1)
0x19f: @@ ClearReplies()
0x1a0: Pop(0)
0x1a1: Push((int) 530931)
0x1a2: Push((int) 32259)
0x1a3: Push((int) 32258)
0x1a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a5: Pop(3)
0x1a6: Push((int) 530984)
0x1a7: Push((int) 32307)
0x1a8: Push((int) 32306)
0x1a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1aa: Pop(3)
0x1ab: Return(); Pop(0)

0x1ac: Push((int) 32307)
0x1ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1af: PushEmpty(string)
0x1b0: Stack[-1] = "Azart"
0x1b1: Call2 0x9f

0x1b2: Pop(1)
0x1b3: Push((int) 530985)
0x1b4: @@ SetMessage(Stack[-1])
0x1b5: Pop(1)
0x1b6: @@ ClearReplies()
0x1b7: Pop(0)
0x1b8: Push((int) 530986)
0x1b9: Push((int) 32259)
0x1ba: Push((int) 32308)
0x1bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bc: Pop(3)
0x1bd: Return(); Pop(0)

0x1be: Push((int) 32259)
0x1bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1c1: PushEmpty(string)
0x1c2: Stack[-1] = "Serious"
0x1c3: Call2 0x9f

0x1c4: Pop(1)
0x1c5: Push((int) 530932)
0x1c6: @@ SetMessage(Stack[-1])
0x1c7: Pop(1)
0x1c8: @@ ClearReplies()
0x1c9: Pop(0)
0x1ca: Push((int) 530933)
0x1cb: Push((int) 32261)
0x1cc: Push((int) 32260)
0x1cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ce: Pop(3)
0x1cf: Push((int) 530988)
0x1d0: Push((int) -1)
0x1d1: Push((int) 32312)
0x1d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d3: Pop(3)
0x1d4: Return(); Pop(0)

0x1d5: Push((int) 32261)
0x1d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1d8: PushEmpty(string)
0x1d9: Stack[-1] = "Serious"
0x1da: Call2 0x9f

0x1db: Pop(1)
0x1dc: Push((int) 530934)
0x1dd: @@ SetMessage(Stack[-1])
0x1de: Pop(1)
0x1df: @@ ClearReplies()
0x1e0: Pop(0)
0x1e1: Push((int) 530935)
0x1e2: Push((int) -1)
0x1e3: Push((int) 32262)
0x1e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e5: Pop(3)
0x1e6: Return(); Pop(0)

0x1e7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1e8: PushEmpty(bool)
0x1e9: Call2 0x561

0x1ea: Pop(0)
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ec: @ lshStopAnimation()
0x1ed: Pop(0)
0x1ee: GOTO 0x1f1

0x1ef: @ StopAnimation()
0x1f0: Pop(0)
0x1f1: Return(); Pop(0)

0x1f2: GOTO 0xb6

0x1f3: Return(); Pop(0)

0x1f4: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1f5: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1f6: PushEmpty(bool, object, float)
0x1f7: Stack[-2] = Stack[-12]
0x1f8: Stack[-1] = (float) 70.0
0x1f9: Call2 0x321

0x1fa: Pop(2)
0x1fb: Pop(1); Push((bool) Stack[-1] == 0)
0x1fc: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fd: Stack[-10] = (int) -2
0x1fe: Return(); Pop(8)

0x1ff: @ CreateDialog(Stack[-4])
0x200: Pop(0)
0x201: PushEmpty(int)
0x202: Call2 0x55b

0x203: Pop(0)
0x204: @@ SetNPCName(Stack[-1])
0x205: Pop(1)
0x206: PushEmpty(int)
0x207: Call2 0x559

0x208: Pop(0)
0x209: @@ SetNPCDescription(Stack[-1])
0x20a: Pop(1)
0x20b: PushEmpty(string)
0x20c: Call2 0x55d

0x20d: Pop(0)
0x20e: @@ SetPhoto(Stack[-1])
0x20f: Pop(1)
0x210: PushEmpty(string)
0x211: Call2 0x55f

0x212: Pop(0)
0x213: @@ SetPhoto2(Stack[-1])
0x214: Pop(1)
0x215: PushEmpty(int)
0x216: Call2 0x537

0x217: Pop(0)
0x218: @@ SetPlayerName(Stack[-1])
0x219: Pop(1)
0x21a: Stack[-2] = (int) -1
0x21b: @ IsOverrideActive(Stack[-3])
0x21c: Pop(0)
0x21d: Push(Stack[-3])
0x21e: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x21f: Stack[-10] = (int) -2
0x220: Return(); Pop(8)

0x221: @ DoDialog(Stack[-4])
0x222: Pop(0)
0x223: PushEmpty(bool, object)
0x224: PushEmpty(object)
0x225: Call2 0x435

0x226: Stack[-2] = Stack[-1]
0x227: Pop(1)
0x228: Call2 0x376

0x229: Pop(2)
0x22a: PushEmpty(object, object)
0x22b: Stack[-2] = Stack[-11]
0x22c: Stack[-1] = Stack[-6]
0x22d: Push(-2, 4); TaskCall(3)
0x22e: Call2 0x245

0x22f: Pop(-2, 4); TaskReturn
0x230: Pop(2)
0x231: @@ IsDialogEnd(Stack[-1])
0x232: Pop(0)
0x233: Pop(0); Push((bool) Stack[-1] == 0)
0x234: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x235: @ sync()
0x236: Pop(0)
0x237: @@ IsDialogEnd(Stack[-1])
0x238: Pop(0)
0x239: GOTO 0x233

0x23a: PushEmpty(object)
0x23b: Stack[-1] = Stack[-10]
0x23c: Call2 0x365

0x23d: Pop(1)
0x23e: @ StopDialog(Stack[-4])
0x23f: Pop(0)
0x240: @@ GetReturnValue(Stack[-2])
0x241: Pop(0)
0x242: Stack[-10] = Stack[-2]
0x243: Return(); Pop(8)

0x244: Stack[-4] = 0
0x245: PushEmpty()
0x246: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x247: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x248: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x249: Push((int) 1)
0x24a: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x24b: PushEmpty(string)
0x24c: Stack[-1] = "Neutral"
0x24d: Call2 0x27f

0x24e: Pop(1)
0x24f: Push((int) 520803)
0x250: @@ SetMessage(Stack[-1])
0x251: Pop(1)
0x252: @@ ClearReplies()
0x253: Pop(0)
0x254: Push((int) 520804)
0x255: Push((int) 29221)
0x256: Push((int) 22021)
0x257: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x258: Pop(3)
0x259: Push((int) 527876)
0x25a: Push((int) 29224)
0x25b: Push((int) 29223)
0x25c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25d: Pop(3)
0x25e: GOTO 0x261

0x25f: Return(); Pop(0)

0x260: GOTO 0x249

0x261: PushEmpty(bool)
0x262: Call2 0x561

0x263: Pop(0)
0x264: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x265: @ lshWaitForAnimEnd()
0x266: Pop(0)
0x267: Push( Stack[3 + Tasks[-1].StackPointer] )
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: GOTO 0x26f

0x26a: PushEmpty(string)
0x26b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x26c: Call2 0x400

0x26d: Pop(1)
0x26e: GOTO 0x265

0x26f: GOTO 0x27e

0x270: Push("all")
0x271: Push("idle")
0x272: @ PlayAnimation(Stack[-2], Stack[-1])
0x273: Pop(2)
0x274: @ WaitForAnimEnd()
0x275: Pop(0)
0x276: Push( Stack[3 + Tasks[-1].StackPointer] )
0x277: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x278: GOTO 0x27e

0x279: Push("all")
0x27a: Push("idle")
0x27b: @ PlayAnimation(Stack[-2], Stack[-1])
0x27c: Pop(2)
0x27d: GOTO 0x274

0x27e: Return(); Pop(0)

0x27f: PushEmpty()
0x280: PushEmpty(bool)
0x281: Call2 0x561

0x282: Pop(0)
0x283: Pop(1); Push((bool) Stack[-1] == 0)
0x284: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x285: Return(); Pop(0)

0x286: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: Return(); Pop(0)

0x289: PushEmpty(string, bool)
0x28a: Stack[-2] = Stack[-3]
0x28b: Push("")
0x28c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28e: Stack[-1] = (bool) 0
0x28f: GOTO 0x291

0x290: Stack[-1] = (bool) 1
0x291: Call2 0x410

0x292: Pop(2)
0x293: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x294: Return(); Pop(0)

0x295: PushEmpty()
0x296: Push((int) 1)
0x297: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x298: PushEmpty()
0x299: Call2 0x42e

0x29a: Pop(0)
0x29b: Push((int) 22020)
0x29c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x29e: PushEmpty(string)
0x29f: Stack[-1] = "Neutral"
0x2a0: Call2 0x27f

0x2a1: Pop(1)
0x2a2: Push((int) 520803)
0x2a3: @@ SetMessage(Stack[-1])
0x2a4: Pop(1)
0x2a5: @@ ClearReplies()
0x2a6: Pop(0)
0x2a7: Push((int) 520804)
0x2a8: Push((int) 29221)
0x2a9: Push((int) 22021)
0x2aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ab: Pop(3)
0x2ac: Push((int) 527876)
0x2ad: Push((int) 29224)
0x2ae: Push((int) 29223)
0x2af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b0: Pop(3)
0x2b1: Return(); Pop(0)

0x2b2: Push((int) 29224)
0x2b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2b5: PushEmpty(string)
0x2b6: Stack[-1] = "Neutral"
0x2b7: Call2 0x27f

0x2b8: Pop(1)
0x2b9: Push((int) 527877)
0x2ba: @@ SetMessage(Stack[-1])
0x2bb: Pop(1)
0x2bc: @@ ClearReplies()
0x2bd: Pop(0)
0x2be: Push((int) 527878)
0x2bf: Push((int) -1)
0x2c0: Push((int) 29225)
0x2c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c2: Pop(3)
0x2c3: Return(); Pop(0)

0x2c4: Push((int) 29221)
0x2c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2c7: PushEmpty(string)
0x2c8: Stack[-1] = "Neutral"
0x2c9: Call2 0x27f

0x2ca: Pop(1)
0x2cb: Push((int) 527874)
0x2cc: @@ SetMessage(Stack[-1])
0x2cd: Pop(1)
0x2ce: @@ ClearReplies()
0x2cf: Pop(0)
0x2d0: Push((int) 527875)
0x2d1: Push((int) -1)
0x2d2: Push((int) 29222)
0x2d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d4: Pop(3)
0x2d5: Return(); Pop(0)

0x2d6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2d7: PushEmpty(bool)
0x2d8: Call2 0x561

0x2d9: Pop(0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2db: @ lshStopAnimation()
0x2dc: Pop(0)
0x2dd: GOTO 0x2e0

0x2de: @ StopAnimation()
0x2df: Pop(0)
0x2e0: Return(); Pop(0)

0x2e1: GOTO 0x296

0x2e2: Return(); Pop(0)

0x2e3: PushEmpty()
0x2e4: PushEmpty(object)
0x2e5: Stack[-1] = Stack[-2]
0x2e6: Call2 0x548

0x2e7: Pop(1)
0x2e8: PushEmpty(int, object)
0x2e9: Stack[-1] = Stack[-3]
0x2ea: Push(-2, 1); TaskCall(0)
0x2eb: Call2 0x0

0x2ec: Pop(-2, 1); TaskReturn
0x2ed: Pop(2)
0x2ee: Return(); Pop(0)

0x2ef: @ Hold()
0x2f0: Pop(0)
0x2f1: GOTO 0x2ef

0x2f2: Return(); Pop(0)

0x2f3: PushEmpty(bool, bool)
0x2f4: Push("cleanup")
0x2f5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x2f7: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2f8: @ IsLoaded(Stack[-1])
0x2f9: Pop(0)
0x2fa: PushEmpty(bool)
0x2fb: Stack[-1] = (bool) 0
0x2fc: Pop(0); Push((bool) Stack[-2] == 0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2fe: PushEmpty(bool)
0x2ff: Call2 0x31f

0x300: Pop(0)
0x301: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x302: Stack[-1] = (bool) 1
0x303: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x304: PushEmpty(object)
0x305: Call2 0x435

0x306: Pop(0)
0x307: @ RemoveActor(Stack[-1])
0x308: Pop(1)
0x309: GOTO 0x30e

0x30a: Push("restore")
0x30b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x30e: Return(); Pop(2)

0x30f: PushEmpty(bool)
0x310: Stack[-1] = (bool) 0
0x311: Push( Stack[0 + Tasks[-1].StackPointer] )
0x312: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x313: PushEmpty(bool)
0x314: Call2 0x31f

0x315: Pop(0)
0x316: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x317: Stack[-1] = (bool) 1
0x318: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x319: PushEmpty(object)
0x31a: Call2 0x435

0x31b: Pop(0)
0x31c: @ RemoveActor(Stack[-1])
0x31d: Pop(1)
0x31e: Return(); Pop(0)

0x31f: Stack[-1] = (bool) 1
0x320: Return(); Pop(0)

0x321: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x322: @@ GetPosition(Stack[-8])
0x323: Pop(0)
0x324: @@ GetEyesHeight(Stack[-9])
0x325: Pop(0)
0x326: Push(CvectorIndex(Stack[-8], 1))
0x327: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x328: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x329: @ GetPosition(Stack[-7])
0x32a: Pop(0)
0x32b: @ GetEyesHeight(Stack[-9])
0x32c: Pop(0)
0x32d: Push(CvectorIndex(Stack[-7], 1))
0x32e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x32f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x330: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x331: Push(CvectorIndex(Stack[-6], 1))
0x332: Stack[-1] = (int) 0
0x333: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x334: Pop(0); Push(Stack[-6] | Stack[-6]);
0x335: Pop(1); Push(Sqrt(Stack[-1]))
0x336: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x337: Stack[-5] = -Stack[-6]; Pop(0);
0x338: Pop(0); Push(Stack[-6] * Stack[-19]);
0x339: PushEmpty(cvector, cvector)
0x33a: Push(CVector(0.0, 1.0, 0.0))
0x33b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x33c: Call2 0x43b

0x33d: Pop(1)
0x33e: Push((int) 25)
0x33f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x340: Pop(2); Push(Stack[-2] + Stack[-1]);
0x341: Push(CVector(0.0, 10.0, 0.0))
0x342: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x343: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x344: @ IsOverrideActive(Stack[-2])
0x345: Pop(0)
0x346: Push(Stack[-2])
0x347: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x348: Stack[-21] = (bool) 0
0x349: Return(); Pop(18)

0x34a: @ StopWorld()
0x34b: Pop(0)
0x34c: @ CameraTransit(Stack[-3], Stack[-5])
0x34d: Pop(0)
0x34e: Push(CvectorIndex(Stack[-4], 0))
0x34f: Push(CvectorIndex(Stack[-5], 2))
0x350: @ Rotate(Stack[-2], Stack[-1])
0x351: Pop(2)
0x352: PushEmpty(bool)
0x353: Call2 0x561

0x354: Pop(0)
0x355: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x356: GOTO 0x35f

0x357: Push("head")
0x358: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x359: Pop(1)
0x35a: Push(Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35c: Push("head")
0x35d: @ LookAsyncCamera(Stack[-1])
0x35e: Pop(1)
0x35f: @ CameraWaitForPlayFinish()
0x360: Pop(0)
0x361: @ ResumeWorld()
0x362: Pop(0)
0x363: Stack[-21] = (bool) 1
0x364: Return(); Pop(18)

0x365: PushEmpty(bool, bool)
0x366: @ CameraSwitchToNormal()
0x367: Pop(0)
0x368: PushEmpty(bool)
0x369: Call2 0x561

0x36a: Pop(0)
0x36b: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36c: GOTO 0x375

0x36d: Push("head")
0x36e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x36f: Pop(1)
0x370: Push(Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x372: Push("head")
0x373: @ UnlookAsync(Stack[-1])
0x374: Pop(1)
0x375: Return(); Pop(2)

0x376: PushEmpty(int, int, int, int)
0x377: Push("voice_common")
0x378: @ GetVariable(Stack[-1], Stack[-3])
0x379: Pop(1)
0x37a: Push(Stack[-2])
0x37b: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x37c: PushEmpty(bool, object)
0x37d: Stack[-1] = Stack[-7]
0x37e: Call2 0x3b0

0x37f: Pop(1)
0x380: Pop(1); Push((bool) Stack[-1] == 0)
0x381: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x382: PushEmpty(bool, object)
0x383: Stack[-1] = Stack[-7]
0x384: Call2 0x3d5

0x385: Pop(1)
0x386: Pop(1); Push((bool) Stack[-1] == 0)
0x387: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x388: Stack[-6] = (bool) 0
0x389: Return(); Pop(4)

0x38a: Push((int) 2)
0x38b: @ irand(Stack[-2], Stack[-1])
0x38c: Pop(1)
0x38d: Push(Stack[-1])
0x38e: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x38f: Push("voice_common")
0x390: Push((int) 1)
0x391: Pop(1); Push(Stack[-4] + Stack[-1]);
0x392: Push((int) 3)
0x393: Pop(2); Push(Stack[-2] % Stack[-1]);
0x394: @ SetVariable(Stack[-2], Stack[-1])
0x395: Pop(2)
0x396: GOTO 0x39b

0x397: Push("voice_common")
0x398: Push((int) 0)
0x399: @ SetVariable(Stack[-2], Stack[-1])
0x39a: Pop(2)
0x39b: GOTO 0x3ae

0x39c: PushEmpty(bool, object)
0x39d: Stack[-1] = Stack[-7]
0x39e: Call2 0x3d5

0x39f: Pop(1)
0x3a0: Pop(1); Push((bool) Stack[-1] == 0)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a2: PushEmpty(bool, object)
0x3a3: Stack[-1] = Stack[-7]
0x3a4: Call2 0x3b0

0x3a5: Pop(1)
0x3a6: Pop(1); Push((bool) Stack[-1] == 0)
0x3a7: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a8: Stack[-6] = (bool) 0
0x3a9: Return(); Pop(4)

0x3aa: Push("voice_common")
0x3ab: Push((int) 1)
0x3ac: @ SetVariable(Stack[-2], Stack[-1])
0x3ad: Pop(2)
0x3ae: Stack[-6] = (bool) 1
0x3af: Return(); Pop(4)

0x3b0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3b1: Stack[-5] = "c"
0x3b2: Stack[-4] = (int) 0
0x3b3: Push((int) 1)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3b5: Push((int) 1)
0x3b6: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3b7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3b8: @@ HasProperty(Stack[-1], Stack[-4])
0x3b9: Pop(1)
0x3ba: Pop(0); Push((bool) Stack[-3] == 0)
0x3bb: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bc: GOTO 0x3c0

0x3bd: Push((int) 1)
0x3be: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3bf: GOTO 0x3b3

0x3c0: Pop(0); Push((bool) Stack[-4] == 0)
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c2: Stack[-12] = (bool) 0
0x3c3: Return(); Pop(10)

0x3c4: Stack[-2] = (int) 0
0x3c5: Push((int) 1)
0x3c6: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c8: @ irand(Stack[-2], Stack[-4])
0x3c9: Pop(0)
0x3ca: Push((int) 1)
0x3cb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3cc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3cd: @@ GetProperty(Stack[-1], Stack[-2])
0x3ce: Pop(1)
0x3cf: PushEmpty(bool, string)
0x3d0: Stack[-1] = Stack[-3]
0x3d1: Call2 0x41f

0x3d2: Stack[-14] = Stack[-2]
0x3d3: Pop(2)
0x3d4: Return(); Pop(10)

0x3d5: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3d6: Push("d")
0x3d7: PushEmpty(int)
0x3d8: Call2 0x46c

0x3d9: Pop(0)
0x3da: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3db: Push("m")
0x3dc: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3dd: Stack[-4] = (int) 0
0x3de: Push((int) 1)
0x3df: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e0: Push((int) 1)
0x3e1: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3e2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3e3: @@ HasProperty(Stack[-1], Stack[-4])
0x3e4: Pop(1)
0x3e5: Pop(0); Push((bool) Stack[-3] == 0)
0x3e6: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e7: GOTO 0x3eb

0x3e8: Push((int) 1)
0x3e9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3ea: GOTO 0x3de

0x3eb: Pop(0); Push((bool) Stack[-4] == 0)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ed: Stack[-12] = (bool) 0
0x3ee: Return(); Pop(10)

0x3ef: Stack[-2] = (int) 0
0x3f0: Push((int) 1)
0x3f1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f3: @ irand(Stack[-2], Stack[-4])
0x3f4: Pop(0)
0x3f5: Push((int) 1)
0x3f6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3f7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3f8: @@ GetProperty(Stack[-1], Stack[-2])
0x3f9: Pop(1)
0x3fa: PushEmpty(bool, string)
0x3fb: Stack[-1] = Stack[-3]
0x3fc: Call2 0x41f

0x3fd: Stack[-14] = Stack[-2]
0x3fe: Pop(2)
0x3ff: Return(); Pop(10)

0x400: PushEmpty(bool, float, float, bool, float, float)
0x401: @ lshHasAnimation(Stack[-3], Stack[-7])
0x402: Pop(0)
0x403: Push(Stack[-3])
0x404: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x405: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x406: Pop(0)
0x407: Push((bool) 0)
0x408: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x409: Pop(1)
0x40a: GOTO 0x40f

0x40b: Push("Can't find lsh animation : ")
0x40c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x40d: @ Trace(Stack[-1])
0x40e: Pop(1)
0x40f: Return(); Pop(6)

0x410: PushEmpty(bool, float, float, bool, float, float)
0x411: @ lshHasAnimation(Stack[-3], Stack[-8])
0x412: Pop(0)
0x413: Push(Stack[-3])
0x414: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x415: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x416: Pop(0)
0x417: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x418: Pop(0)
0x419: GOTO 0x41e

0x41a: Push("Can't find lsh animation : ")
0x41b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x41c: @ Trace(Stack[-1])
0x41d: Pop(1)
0x41e: Return(); Pop(6)

0x41f: PushEmpty(bool, bool)
0x420: PushEmpty(bool)
0x421: Call2 0x561

0x422: Pop(0)
0x423: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x424: @ lshHasSpeech(Stack[-1], Stack[-3])
0x425: Pop(0)
0x426: Push(Stack[-1])
0x427: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x428: @ lshPlaySpeech(Stack[-3])
0x429: Pop(0)
0x42a: Stack[-4] = (bool) 1
0x42b: Return(); Pop(2)

0x42c: Stack[-4] = (bool) 0
0x42d: Return(); Pop(2)

0x42e: PushEmpty(bool)
0x42f: Call2 0x561

0x430: Pop(0)
0x431: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x432: @ lshStopSpeech()
0x433: Pop(0)
0x434: Return(); Pop(0)

0x435: PushEmpty(object, object)
0x436: @ self(Stack[-1])
0x437: Pop(0)
0x438: Stack[-3] = Stack[-1]
0x439: Return(); Pop(2)

0x43a: Stack[-1] = 0
0x43b: PushEmpty(float, float)
0x43c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x43d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x43e: Push((float)0.0)
0x43f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x441: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x442: Return(); Pop(2)

0x443: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x444: Return(); Pop(2)

0x445: PushEmpty(int, int)
0x446: @ GetVariable(Stack[-3], Stack[-1])
0x447: Pop(0)
0x448: Stack[-4] = Stack[-1]
0x449: Return(); Pop(2)

0x44a: PushEmpty(object, object)
0x44b: @ FindActor(Stack[-1], Stack[-4])
0x44c: Pop(0)
0x44d: Pop(0); Push((bool) Stack[-1] == 0)
0x44e: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x44f: Push("Door ")
0x450: Pop(1); Push(Stack[-1] + Stack[-5]);
0x451: Push(" not found")
0x452: Pop(2); Push(Stack[-2] + Stack[-1]);
0x453: @ Trace(Stack[-1])
0x454: Pop(1)
0x455: GOTO 0x459

0x456: Push("locked")
0x457: @@ SetProperty(Stack[-1], Stack[-4])
0x458: Pop(1)
0x459: Return(); Pop(2)

0x45a: Stack[-1] = 0
0x45b: PushEmpty(object, object)
0x45c: @ FindActor(Stack[-1], Stack[-4])
0x45d: Pop(0)
0x45e: Pop(0); Push((bool) Stack[-1] == 0)
0x45f: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x460: Stack[-5] = (bool) 0
0x461: Return(); Pop(2)

0x462: @ Trigger(Stack[-1], Stack[-3])
0x463: Pop(0)
0x464: Stack[-5] = (bool) 1
0x465: Return(); Pop(2)

0x466: Stack[-1] = 0
0x467: PushEmpty(float, float)
0x468: @ GetGameTime(Stack[-1])
0x469: Pop(0)
0x46a: Stack[-3] = Stack[-1]
0x46b: Return(); Pop(2)

0x46c: PushEmpty(float, float)
0x46d: @ GetGameTime(Stack[-1])
0x46e: Pop(0)
0x46f: Push((int) 1)
0x470: PushEmpty(int)
0x471: Push((int) 24)
0x472: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x473: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x474: Return(); Pop(2)

0x475: PushEmpty()
0x476: Push("oob1Spi4ka1")
0x477: Push((int) 1)
0x478: @ SetVariable(Stack[-2], Stack[-1])
0x479: Pop(2)
0x47a: Return(); Pop(0)

0x47b: PushEmpty(object, object)
0x47c: PushEmpty(object)
0x47d: Call2 0x505

0x47e: Stack[-2] = Stack[-1]
0x47f: Pop(1)
0x480: Push("b1q05Spi4kaGotoLaska")
0x481: Push("pt_map_laska")
0x482: Push((int) 3)
0x483: Push((int) 530954)
0x484: PushEmpty(float)
0x485: Call2 0x467

0x486: Pop(0)
0x487: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x488: Pop(5)
0x489: Push("b1q05Spi4kaGotoMishka")
0x48a: Push("pt_map_mishka")
0x48b: Push((int) 3)
0x48c: Push((int) 530955)
0x48d: PushEmpty(float)
0x48e: Call2 0x467

0x48f: Pop(0)
0x490: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x491: Pop(5)
0x492: PushEmpty()
0x493: Call2 0x4cf

0x494: Pop(0)
0x495: PushEmpty(bool, string, string)
0x496: Stack[-2] = "quest_b1_05"
0x497: Stack[-1] = "completed"
0x498: Call2 0x45b

0x499: Pop(3)
0x49a: Return(); Pop(2)

0x49b: Stack[-1] = 0
0x49c: PushEmpty()
0x49d: PushEmpty(object, string, float)
0x49e: PushEmpty(object)
0x49f: Call2 0x505

0x4a0: Stack[-4] = Stack[-1]
0x4a1: Pop(1)
0x4a2: Stack[-2] = "pt_map_laska"
0x4a3: Stack[-1] = (int) 2
0x4a4: Call2 0x516

0x4a5: Pop(3)
0x4a6: PushEmpty(object)
0x4a7: Call2 0x505

0x4a8: Pop(0)
0x4a9: @@ ShowMap(Stack[-1])
0x4aa: Pop(1)
0x4ab: Return(); Pop(0)

0x4ac: PushEmpty()
0x4ad: PushEmpty(object, string, float)
0x4ae: PushEmpty(object)
0x4af: Call2 0x505

0x4b0: Stack[-4] = Stack[-1]
0x4b1: Pop(1)
0x4b2: Stack[-2] = "pt_map_mishka"
0x4b3: Stack[-1] = (int) 2
0x4b4: Call2 0x516

0x4b5: Pop(3)
0x4b6: PushEmpty(object)
0x4b7: Call2 0x505

0x4b8: Pop(0)
0x4b9: @@ ShowMap(Stack[-1])
0x4ba: Pop(1)
0x4bb: Return(); Pop(0)

0x4bc: PushEmpty()
0x4bd: PushEmpty(string, bool)
0x4be: Stack[-2] = "vagon_mishka@door1"
0x4bf: Stack[-1] = (bool) 0
0x4c0: Call2 0x44a

0x4c1: Pop(2)
0x4c2: Return(); Pop(0)

0x4c3: PushEmpty()
0x4c4: PushEmpty(int, string)
0x4c5: Stack[-1] = "oob1Spi4ka1"
0x4c6: Call2 0x445

0x4c7: Pop(1)
0x4c8: Push((int) 0)
0x4c9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4ca: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4cb: Stack[-2] = (bool) 1
0x4cc: Return(); Pop(0)

0x4cd: Stack[-2] = (bool) 0
0x4ce: Return(); Pop(0)

0x4cf: PushEmpty(object, object)
0x4d0: Push((int) 584)
0x4d1: Push((int) 2)
0x4d2: Push((int) 530953)
0x4d3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4d4: Pop(3)
0x4d5: PushEmpty(bool, object, int)
0x4d6: Stack[-2] = Stack[-4]
0x4d7: Stack[-1] = (int) 582
0x4d8: Call2 0x4e9

0x4d9: Pop(3)
0x4da: Return(); Pop(2)

0x4db: Stack[-1] = 0
0x4dc: PushEmpty(object, object)
0x4dd: @ GetDiaryRoot(Stack[-1])
0x4de: Pop(0)
0x4df: Pop(0); Push((bool) Stack[-1] == 0)
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4e1: Push("Can't retrieve diary root")
0x4e2: @ Trace(Stack[-1])
0x4e3: Pop(1)
0x4e4: Stack[-3] = (bool) 0
0x4e5: Return(); Pop(2)

0x4e6: Stack[-3] = Stack[-1]
0x4e7: Return(); Pop(2)

0x4e8: Stack[-1] = 0
0x4e9: PushEmpty(object, object, int, object, object, int)
0x4ea: PushEmpty(object)
0x4eb: Call2 0x4dc

0x4ec: Stack[-4] = Stack[-1]
0x4ed: Pop(1)
0x4ee: @@ Find(Stack[-7], Stack[-2])
0x4ef: Pop(0)
0x4f0: Pop(0); Push((bool) Stack[-2] == 0)
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f2: Push("Can't find diary parent with id: ")
0x4f3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4f4: @ Trace(Stack[-1])
0x4f5: Pop(1)
0x4f6: Stack[-9] = (bool) 0
0x4f7: Return(); Pop(6)

0x4f8: @@ AddChild(Stack[-8])
0x4f9: Pop(0)
0x4fa: Push((int) 7)
0x4fb: @ SendWorldWndMessage(Stack[-1])
0x4fc: Pop(1)
0x4fd: @@ GetCategory(Stack[-1])
0x4fe: Pop(0)
0x4ff: @ SetDiarySection(Stack[-1])
0x500: Pop(0)
0x501: Stack[-9] = (bool) 0
0x502: Return(); Pop(6)

0x503: Stack[-2] = 0
0x504: Stack[-3] = 0
0x505: PushEmpty(object, object, object, object)
0x506: @ GetMainOutdoorScene(Stack[-2])
0x507: Pop(0)
0x508: Pop(0); Push((bool) Stack[-2] == 0)
0x509: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50a: Push("Can't find main outdoor scene")
0x50b: @ Trace(Stack[-1])
0x50c: Pop(1)
0x50d: Stack[-1] = 0
0x50e: Stack[-5] = Stack[-1]
0x50f: Return(); Pop(4)

0x510: @@ GetMap(Stack[-1])
0x511: Pop(0)
0x512: Stack[-5] = Stack[-1]
0x513: Return(); Pop(4)

0x514: Stack[-1] = 0
0x515: Stack[-2] = 0
0x516: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x517: @ GetMainOutdoorScene(Stack[-2])
0x518: Pop(0)
0x519: Pop(0); Push((bool) Stack[-2] == 0)
0x51a: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51b: Push("Can't find main outdoor scene")
0x51c: @ Trace(Stack[-1])
0x51d: Pop(1)
0x51e: Return(); Pop(8)

0x51f: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x520: Pop(0)
0x521: Pop(0); Push((bool) Stack[-1] == 0)
0x522: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x523: Push("Warning: outdoor scene locator ")
0x524: Pop(1); Push(Stack[-1] + Stack[-11]);
0x525: Push(" doesnt exist")
0x526: Pop(2); Push(Stack[-2] + Stack[-1]);
0x527: @ Trace(Stack[-1])
0x528: Pop(1)
0x529: @@ GetMap(Stack[-11])
0x52a: Pop(0)
0x52b: Pop(0); Push((bool) Stack[-11] == 0)
0x52c: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x52d: Push("Can't find map")
0x52e: @ Trace(Stack[-1])
0x52f: Pop(1)
0x530: Return(); Pop(8)

0x531: Push(CvectorIndex(Stack[-4], 0))
0x532: Push(CvectorIndex(Stack[-5], 2))
0x533: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x534: Pop(2)
0x535: Return(); Pop(8)

0x536: Stack[-2] = 0
0x537: PushEmpty(int, int)
0x538: Push("branch")
0x539: @ GetVariable(Stack[-1], Stack[-2])
0x53a: Pop(1)
0x53b: Push((int) 0)
0x53c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x53d: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x53e: Stack[-3] = (int) 1
0x53f: Return(); Pop(2)

0x540: GOTO 0x546

0x541: Push((int) 1)
0x542: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x543: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x544: Stack[-3] = (int) 2
0x545: Return(); Pop(2)

0x546: Stack[-3] = (int) 3
0x547: Return(); Pop(2)

0x548: PushEmpty(int, int)
0x549: Push("mt_spi4ka")
0x54a: @ GetVariable(Stack[-1], Stack[-2])
0x54b: Pop(1)
0x54c: Pop(0); Push((bool) Stack[-1] == 0)
0x54d: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x54e: PushEmpty(int, object)
0x54f: Stack[-1] = Stack[-5]
0x550: Push(-2, 1); TaskCall(2)
0x551: Call2 0x1f4

0x552: Pop(-2, 1); TaskReturn
0x553: Pop(2)
0x554: Push("mt_spi4ka")
0x555: Push((int) 1)
0x556: @ SetVariable(Stack[-2], Stack[-1])
0x557: Pop(2)
0x558: Return(); Pop(2)

0x559: Stack[-1] = (int) 515552
0x55a: Return(); Pop(0)

0x55b: Stack[-1] = (int) 502877
0x55c: Return(); Pop(0)

0x55d: Stack[-1] = "ui/NPC_Spi4ka.png"
0x55e: Return(); Pop(0)

0x55f: Stack[-1] = "ui/NPC_Spi4ka_b.png"
0x560: Return(); Pop(0)

0x561: Stack[-1] = (bool) 1
0x562: Return(); Pop(0)

