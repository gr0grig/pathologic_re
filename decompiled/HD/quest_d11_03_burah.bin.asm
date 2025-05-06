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
	Sorrow
	Smile
	Doubt
	Agression
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
	map_chertez_state
	map_chertez_force
	pt_map_aglaja
	ShowMap
	ood11Burah1
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
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
	GetGameTime (1 args)
	HasAnimation (3 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x239
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xba Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x23d Vars = (string)
		EVENT_6 Op = 0x251 Vars = ()
		EVENT_5 Op = 0x25e Vars = ()
		EVENT_7 Op = 0x2a7 Vars = (int)
		EVENT_45 Op = 0x2e9 Vars = (bool)
		EVENT_0 Op = 0x2f5 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x37e

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x542

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x540

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x544

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x546

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x52f

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
0x31: Call2 0x494

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x3d5

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
0x48: Call2 0x3c3

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
0x56: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x4f1

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x4eb

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Neutral"
0x63: Call2 0xa4

0x64: Pop(1)
0x65: Push((int) 514326)
0x66: @@ SetMessage(Stack[-1])
0x67: Pop(1)
0x68: @@ ClearReplies()
0x69: Pop(0)
0x6a: Push((int) 514327)
0x6b: Push((int) 15550)
0x6c: Push((int) 15549)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x86

0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral"
0x72: Call2 0xa4

0x73: Pop(1)
0x74: Push((int) 514532)
0x75: @@ SetMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ ClearReplies()
0x78: Pop(0)
0x79: Push((int) 514533)
0x7a: Push((int) -1)
0x7b: Push((int) 15764)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: Push((int) 539713)
0x7f: Push((int) -1)
0x80: Push((int) 41672)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: GOTO 0x86

0x84: Return(); Pop(0)

0x85: GOTO 0x55

0x86: PushEmpty(bool)
0x87: Call2 0x548

0x88: Pop(0)
0x89: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8a: @ lshWaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: PushEmpty(string)
0x90: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x91: Call2 0x45f

0x92: Pop(1)
0x93: GOTO 0x8a

0x94: GOTO 0xa3

0x95: Push("all")
0x96: Push("idle")
0x97: @ PlayAnimation(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: @ WaitForAnimEnd()
0x9a: Pop(0)
0x9b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: GOTO 0xa3

0x9e: Push("all")
0x9f: Push("idle")
0xa0: @ PlayAnimation(Stack[-2], Stack[-1])
0xa1: Pop(2)
0xa2: GOTO 0x99

0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: PushEmpty(bool)
0xa6: Call2 0x548

0xa7: Pop(0)
0xa8: Pop(1); Push((bool) Stack[-1] == 0)
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: Return(); Pop(0)

0xab: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Return(); Pop(0)

0xae: PushEmpty(string, bool)
0xaf: Stack[-2] = Stack[-3]
0xb0: Push("")
0xb1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb3: Stack[-1] = (bool) 0
0xb4: GOTO 0xb6

0xb5: Stack[-1] = (bool) 1
0xb6: Call2 0x46f

0xb7: Pop(2)
0xb8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: Push((int) 1)
0xbc: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0xbd: PushEmpty()
0xbe: Call2 0x48d

0xbf: Pop(0)
0xc0: Push((int) 15565)
0xc1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call2 0x4ca

0xc7: Pop(2)
0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x4db

0xcc: Pop(2)
0xcd: Push((int) 41689)
0xce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x4ca

0xd4: Pop(2)
0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x4db

0xd9: Pop(2)
0xda: Push((int) 15548)
0xdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xdd: PushEmpty(bool, object)
0xde: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Call2 0x4f1

0xe0: Pop(1)
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(object, object)
0xe3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5: Call2 0x4eb

0xe6: Pop(2)
0xe7: PushEmpty(string)
0xe8: Stack[-1] = "Neutral"
0xe9: Call2 0xa4

0xea: Pop(1)
0xeb: Push((int) 514326)
0xec: @@ SetMessage(Stack[-1])
0xed: Pop(1)
0xee: @@ ClearReplies()
0xef: Pop(0)
0xf0: Push((int) 514327)
0xf1: Push((int) 15550)
0xf2: Push((int) 15549)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Neutral"
0xf8: Call2 0xa4

0xf9: Pop(1)
0xfa: Push((int) 514532)
0xfb: @@ SetMessage(Stack[-1])
0xfc: Pop(1)
0xfd: @@ ClearReplies()
0xfe: Pop(0)
0xff: Push((int) 514533)
0x100: Push((int) -1)
0x101: Push((int) 15764)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Push((int) 539713)
0x105: Push((int) -1)
0x106: Push((int) 41672)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Push((int) 15550)
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Sorrow"
0x10f: Call2 0xa4

0x110: Pop(1)
0x111: Push((int) 514328)
0x112: @@ SetMessage(Stack[-1])
0x113: Pop(1)
0x114: @@ ClearReplies()
0x115: Pop(0)
0x116: Push((int) 514329)
0x117: Push((int) 15552)
0x118: Push((int) 15551)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Push((int) 539714)
0x11c: Push((int) 41674)
0x11d: Push((int) 41673)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: Push((int) 41674)
0x122: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Neutral"
0x126: Call2 0xa4

0x127: Pop(1)
0x128: Push((int) 539715)
0x129: @@ SetMessage(Stack[-1])
0x12a: Pop(1)
0x12b: @@ ClearReplies()
0x12c: Pop(0)
0x12d: Push((int) 539716)
0x12e: Push((int) 15552)
0x12f: Push((int) 41675)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Return(); Pop(0)

0x133: Push((int) 15552)
0x134: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x136: PushEmpty(string)
0x137: Stack[-1] = "Sorrow"
0x138: Call2 0xa4

0x139: Pop(1)
0x13a: Push((int) 514330)
0x13b: @@ SetMessage(Stack[-1])
0x13c: Pop(1)
0x13d: @@ ClearReplies()
0x13e: Pop(0)
0x13f: Push((int) 514331)
0x140: Push((int) 15554)
0x141: Push((int) 15553)
0x142: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x143: Pop(3)
0x144: Push((int) 514344)
0x145: Push((int) 15567)
0x146: Push((int) 15566)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: Return(); Pop(0)

0x14a: Push((int) 15567)
0x14b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x14d: PushEmpty(string)
0x14e: Stack[-1] = "Sorrow"
0x14f: Call2 0xa4

0x150: Pop(1)
0x151: Push((int) 514345)
0x152: @@ SetMessage(Stack[-1])
0x153: Pop(1)
0x154: @@ ClearReplies()
0x155: Pop(0)
0x156: Push((int) 514346)
0x157: Push((int) 15569)
0x158: Push((int) 15568)
0x159: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15a: Pop(3)
0x15b: Return(); Pop(0)

0x15c: Push((int) 15569)
0x15d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x15f: PushEmpty(string)
0x160: Stack[-1] = "Sorrow"
0x161: Call2 0xa4

0x162: Pop(1)
0x163: Push((int) 514347)
0x164: @@ SetMessage(Stack[-1])
0x165: Pop(1)
0x166: @@ ClearReplies()
0x167: Pop(0)
0x168: Push((int) 514348)
0x169: Push((int) 15554)
0x16a: Push((int) 15570)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: Return(); Pop(0)

0x16e: Push((int) 15554)
0x16f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x170: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x171: PushEmpty(string)
0x172: Stack[-1] = "Sorrow"
0x173: Call2 0xa4

0x174: Pop(1)
0x175: Push((int) 514332)
0x176: @@ SetMessage(Stack[-1])
0x177: Pop(1)
0x178: @@ ClearReplies()
0x179: Pop(0)
0x17a: Push((int) 514333)
0x17b: Push((int) 15556)
0x17c: Push((int) 15555)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: Push((int) 539717)
0x180: Push((int) 41678)
0x181: Push((int) 41677)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: Return(); Pop(0)

0x185: Push((int) 41678)
0x186: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x188: PushEmpty(string)
0x189: Stack[-1] = "Neutral"
0x18a: Call2 0xa4

0x18b: Pop(1)
0x18c: Push((int) 539718)
0x18d: @@ SetMessage(Stack[-1])
0x18e: Pop(1)
0x18f: @@ ClearReplies()
0x190: Pop(0)
0x191: Push((int) 539719)
0x192: Push((int) 41680)
0x193: Push((int) 41679)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: Return(); Pop(0)

0x197: Push((int) 41680)
0x198: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x199: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x19a: PushEmpty(string)
0x19b: Stack[-1] = "Neutral"
0x19c: Call2 0xa4

0x19d: Pop(1)
0x19e: Push((int) 539720)
0x19f: @@ SetMessage(Stack[-1])
0x1a0: Pop(1)
0x1a1: @@ ClearReplies()
0x1a2: Pop(0)
0x1a3: Push((int) 539721)
0x1a4: Push((int) 15560)
0x1a5: Push((int) 41681)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: Return(); Pop(0)

0x1a9: Push((int) 15556)
0x1aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ac: PushEmpty(string)
0x1ad: Stack[-1] = "Smile"
0x1ae: Call2 0xa4

0x1af: Pop(1)
0x1b0: Push((int) 514334)
0x1b1: @@ SetMessage(Stack[-1])
0x1b2: Pop(1)
0x1b3: @@ ClearReplies()
0x1b4: Pop(0)
0x1b5: Push((int) 514335)
0x1b6: Push((int) 15558)
0x1b7: Push((int) 15557)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: Return(); Pop(0)

0x1bb: Push((int) 15558)
0x1bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1be: PushEmpty(string)
0x1bf: Stack[-1] = "Neutral"
0x1c0: Call2 0xa4

0x1c1: Pop(1)
0x1c2: Push((int) 514336)
0x1c3: @@ SetMessage(Stack[-1])
0x1c4: Pop(1)
0x1c5: @@ ClearReplies()
0x1c6: Pop(0)
0x1c7: Push((int) 514337)
0x1c8: Push((int) 15560)
0x1c9: Push((int) 15559)
0x1ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cb: Pop(3)
0x1cc: Return(); Pop(0)

0x1cd: Push((int) 15560)
0x1ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1d0: PushEmpty(string)
0x1d1: Stack[-1] = "Doubt"
0x1d2: Call2 0xa4

0x1d3: Pop(1)
0x1d4: Push((int) 514338)
0x1d5: @@ SetMessage(Stack[-1])
0x1d6: Pop(1)
0x1d7: @@ ClearReplies()
0x1d8: Pop(0)
0x1d9: Push((int) 514339)
0x1da: Push((int) 15562)
0x1db: Push((int) 15561)
0x1dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dd: Pop(3)
0x1de: Push((int) 539722)
0x1df: Push((int) 41684)
0x1e0: Push((int) 41683)
0x1e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e2: Pop(3)
0x1e3: Return(); Pop(0)

0x1e4: Push((int) 41684)
0x1e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1e7: PushEmpty(string)
0x1e8: Stack[-1] = "Neutral"
0x1e9: Call2 0xa4

0x1ea: Pop(1)
0x1eb: Push((int) 539723)
0x1ec: @@ SetMessage(Stack[-1])
0x1ed: Pop(1)
0x1ee: @@ ClearReplies()
0x1ef: Pop(0)
0x1f0: Push((int) 539724)
0x1f1: Push((int) 15562)
0x1f2: Push((int) 41685)
0x1f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f4: Pop(3)
0x1f5: Return(); Pop(0)

0x1f6: Push((int) 15562)
0x1f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x1f9: PushEmpty(string)
0x1fa: Stack[-1] = "Agression"
0x1fb: Call2 0xa4

0x1fc: Pop(1)
0x1fd: Push((int) 514340)
0x1fe: @@ SetMessage(Stack[-1])
0x1ff: Pop(1)
0x200: @@ ClearReplies()
0x201: Pop(0)
0x202: Push((int) 514341)
0x203: Push((int) 15564)
0x204: Push((int) 15563)
0x205: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x206: Pop(3)
0x207: Push((int) 539725)
0x208: Push((int) 15564)
0x209: Push((int) 41687)
0x20a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20b: Pop(3)
0x20c: Return(); Pop(0)

0x20d: Push((int) 15564)
0x20e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x210: PushEmpty(string)
0x211: Stack[-1] = "Neutral"
0x212: Call2 0xa4

0x213: Pop(1)
0x214: Push((int) 514342)
0x215: @@ SetMessage(Stack[-1])
0x216: Pop(1)
0x217: @@ ClearReplies()
0x218: Pop(0)
0x219: Push((int) 514343)
0x21a: Push((int) -1)
0x21b: Push((int) 15565)
0x21c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21d: Pop(3)
0x21e: Push((int) 539726)
0x21f: Push((int) -1)
0x220: Push((int) 41689)
0x221: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x222: Pop(3)
0x223: Return(); Pop(0)

0x224: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x225: PushEmpty(bool)
0x226: Call2 0x548

0x227: Pop(0)
0x228: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x229: @ lshStopAnimation()
0x22a: Pop(0)
0x22b: GOTO 0x22e

0x22c: @ StopAnimation()
0x22d: Pop(0)
0x22e: Return(); Pop(0)

0x22f: GOTO 0xbb

0x230: Return(); Pop(0)

0x231: PushEmpty()
0x232: PushEmpty(int, object)
0x233: Stack[-1] = Stack[-3]
0x234: Push(-2, 1); TaskCall(0)
0x235: Call2 0x0

0x236: Pop(-2, 1); TaskReturn
0x237: Pop(2)
0x238: Return(); Pop(0)

0x239: PushEmpty()
0x23a: Call2 0x262

0x23b: Pop(0)
0x23c: Return(); Pop(0)

0x23d: PushEmpty(bool, bool)
0x23e: Push("cleanup")
0x23f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x241: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x242: @ IsLoaded(Stack[-1])
0x243: Pop(0)
0x244: Pop(0); Push((bool) Stack[-1] == 0)
0x245: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x246: PushEmpty(object)
0x247: Call2 0x494

0x248: Pop(0)
0x249: @ RemoveActor(Stack[-1])
0x24a: Pop(1)
0x24b: GOTO 0x250

0x24c: Push("restore")
0x24d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24f: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x250: Return(); Pop(2)

0x251: Push( Stack[1 + Tasks[-1].StackPointer] )
0x252: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x253: PushEmpty(object)
0x254: Call2 0x494

0x255: Pop(0)
0x256: @ RemoveActor(Stack[-1])
0x257: Pop(1)
0x258: @ Hold()
0x259: Pop(0)
0x25a: PushEmpty()
0x25b: Call2 0x2cd

0x25c: Pop(0)
0x25d: Return(); Pop(0)

0x25e: PushEmpty()
0x25f: Call2 0x2dc

0x260: Pop(0)
0x261: Return(); Pop(0)

0x262: PushEmpty(bool)
0x263: Call2 0x379

0x264: Pop(0)
0x265: Pop(1); Push((bool) Stack[-1] == 0)
0x266: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x267: @ Hold()
0x268: Pop(0)
0x269: @ GetDirection(Stack[-0])
0x26a: Pop(0)
0x26b: PushEmpty()
0x26c: Call2 0x312

0x26d: Pop(0)
0x26e: GOTO 0x26b

0x26f: Return(); Pop(0)

0x270: PushEmpty(object, object)
0x271: Push("player")
0x272: @ FindActor(Stack[-2], Stack[-1])
0x273: Pop(1)
0x274: Pop(0); Push((bool) Stack[-1] == 0)
0x275: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x276: Stack[-3] = (bool) 0
0x277: Return(); Pop(2)

0x278: PushEmpty(bool, object)
0x279: Stack[-1] = Stack[-3]
0x27a: Call2 0x370

0x27b: Stack[-5] = Stack[-2]
0x27c: Pop(2)
0x27d: Return(); Pop(2)

0x27e: Stack[-1] = 0
0x27f: Push(CvectorIndex(Stack[-0], 0))
0x280: Push(CvectorIndex(Stack[-0], 2))
0x281: @ RotateAsync(Stack[-2], Stack[-1])
0x282: Pop(2)
0x283: Return(); Pop(0)

0x284: PushEmpty(object, bool, object, bool)
0x285: Push("player")
0x286: @ FindActor(Stack[-3], Stack[-1])
0x287: Pop(1)
0x288: Pop(0); Push((bool) Stack[-2] == 0)
0x289: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28a: Stack[-5] = (bool) 0
0x28b: Return(); Pop(4)

0x28c: PushEmpty(float, object)
0x28d: Stack[-1] = Stack[-4]
0x28e: Call2 0x35e

0x28f: Pop(1)
0x290: Push((float)90000.0)
0x291: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x293: Stack[-5] = (bool) 0
0x294: Return(); Pop(4)

0x295: @ CanSee(Stack[-1], Stack[-2])
0x296: Pop(0)
0x297: Stack[-5] = Stack[-1]
0x298: Return(); Pop(4)

0x299: Stack[-2] = 0
0x29a: PushEmpty(float, float)
0x29b: Push((int) 8)
0x29c: Push((int) 16)
0x29d: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x29e: Pop(2)
0x29f: Push((int) 10)
0x2a0: @ SetTimer(Stack[-1], Stack[-2])
0x2a1: Pop(1)
0x2a2: Return(); Pop(2)

0x2a3: Push((int) 10)
0x2a4: @ KillTimer(Stack[-1])
0x2a5: Pop(1)
0x2a6: Return(); Pop(0)

0x2a7: PushEmpty()
0x2a8: Push((int) 10)
0x2a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2ab: PushEmpty()
0x2ac: Call2 0x2a3

0x2ad: Pop(0)
0x2ae: PushEmpty(bool)
0x2af: Stack[-1] = (bool) 0
0x2b0: PushEmpty(bool)
0x2b1: Call2 0x379

0x2b2: Pop(0)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b4: PushEmpty(bool)
0x2b5: Call2 0x284

0x2b6: Pop(0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b8: Stack[-1] = (bool) 1
0x2b9: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2ba: PushEmpty(bool)
0x2bb: Call2 0x270

0x2bc: Pop(0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2be: PushEmpty(bool, object)
0x2bf: PushEmpty(object)
0x2c0: Call2 0x494

0x2c1: Stack[-2] = Stack[-1]
0x2c2: Pop(1)
0x2c3: Call2 0x40f

0x2c4: Pop(2)
0x2c5: GOTO 0x2cc

0x2c6: PushEmpty()
0x2c7: Call2 0x27f

0x2c8: Pop(0)
0x2c9: PushEmpty()
0x2ca: Call2 0x29a

0x2cb: Pop(0)
0x2cc: Return(); Pop(0)

0x2cd: PushEmpty()
0x2ce: Call2 0x359

0x2cf: Pop(0)
0x2d0: PushEmpty()
0x2d1: Call2 0x2a3

0x2d2: Pop(0)
0x2d3: @ lshStopSpeech()
0x2d4: Pop(0)
0x2d5: @ lshStopAnimation()
0x2d6: Pop(0)
0x2d7: @ StopAsync()
0x2d8: Pop(0)
0x2d9: @ Hold()
0x2da: Pop(0)
0x2db: Return(); Pop(0)

0x2dc: @ StopGroup0()
0x2dd: Pop(0)
0x2de: PushEmpty()
0x2df: Call2 0x2a3

0x2e0: Pop(0)
0x2e1: PushEmpty(string)
0x2e2: Stack[-1] = "Neutral"
0x2e3: Call2 0x45f

0x2e4: Pop(1)
0x2e5: PushEmpty()
0x2e6: Call2 0x29a

0x2e7: Pop(0)
0x2e8: Return(); Pop(0)

0x2e9: PushEmpty()
0x2ea: Push(Stack[-1])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ec: PushEmpty()
0x2ed: Call2 0x29a

0x2ee: Pop(0)
0x2ef: GOTO 0x2f4

0x2f0: PushEmpty(string)
0x2f1: Stack[-1] = "Neutral"
0x2f2: Call2 0x45f

0x2f3: Pop(1)
0x2f4: Return(); Pop(0)

0x2f5: PushEmpty(bool, bool)
0x2f6: @ IsOverrideActive(Stack[-1])
0x2f7: Pop(0)
0x2f8: Pop(0); Push((bool) Stack[-1] == 0)
0x2f9: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x2fa: EventDisable(0)
0x2fb: PushEmpty()
0x2fc: Call2 0x359

0x2fd: Pop(0)
0x2fe: PushEmpty(bool, object)
0x2ff: Stack[-1] = Stack[-5]
0x300: Call2 0x370

0x301: Pop(2)
0x302: EventEnable(0)
0x303: PushEmpty(object)
0x304: Stack[-1] = Stack[-4]
0x305: Call2 0x231

0x306: Pop(1)
0x307: PushEmpty(string)
0x308: Stack[-1] = "Neutral"
0x309: Call2 0x45f

0x30a: Pop(1)
0x30b: PushEmpty()
0x30c: Call2 0x2a3

0x30d: Pop(0)
0x30e: PushEmpty()
0x30f: Call2 0x29a

0x310: Pop(0)
0x311: Return(); Pop(2)

0x312: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x313: @ WaitForAnimEnd()
0x314: Pop(0)
0x315: PushEmpty(bool)
0x316: Call2 0x379

0x317: Pop(0)
0x318: Pop(1); Push((bool) Stack[-1] == 0)
0x319: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x31a: Return(); Pop(12)

0x31b: PushEmpty(int)
0x31c: Call2 0x4b9

0x31d: Stack[-7] = Stack[-1]
0x31e: Pop(1)
0x31f: Stack[-5] = (int) 0
0x320: PushEmpty(bool)
0x321: Stack[-1] = (bool) 0
0x322: Push((int) 5)
0x323: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x325: PushEmpty(bool)
0x326: Call2 0x379

0x327: Pop(0)
0x328: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x329: Stack[-1] = (bool) 1
0x32a: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x32b: Pop(0); Push((bool) Stack[-6] == 0)
0x32c: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x32d: Push((int) 3)
0x32e: @ Sleep(Stack[-1], Stack[-5])
0x32f: Pop(1)
0x330: Pop(0); Push((bool) Stack[-4] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x332: GOTO 0x354

0x333: GOTO 0x349

0x334: @ irand(Stack[-3], Stack[-6])
0x335: Pop(0)
0x336: Push((int) 5)
0x337: @ irand(Stack[-3], Stack[-1])
0x338: Pop(1)
0x339: Push((int) 0)
0x33a: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33c: Stack[-3] = (int) 0
0x33d: Push("all")
0x33e: PushEmpty(string, int)
0x33f: Stack[-1] = Stack[-6]
0x340: Call2 0x4b2

0x341: Pop(1)
0x342: @ PlayAnimation(Stack[-2], Stack[-1])
0x343: Pop(2)
0x344: @ WaitForAnimEnd(Stack[-1])
0x345: Pop(0)
0x346: Pop(0); Push((bool) Stack[-1] == 0)
0x347: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x348: GOTO 0x354

0x349: PushEmpty(bool)
0x34a: Call2 0x357

0x34b: Pop(0)
0x34c: Pop(1); Push((bool) Stack[-1] == 0)
0x34d: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34e: GOTO 0x354

0x34f: @ ResetAAS()
0x350: Pop(0)
0x351: Push((int) 1)
0x352: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x353: GOTO 0x320

0x354: @ ResetAAS()
0x355: Pop(0)
0x356: Return(); Pop(12)

0x357: Stack[-1] = (bool) 1
0x358: Return(); Pop(0)

0x359: @ StopAnimation()
0x35a: Pop(0)
0x35b: @ StopGroup0()
0x35c: Pop(0)
0x35d: Return(); Pop(0)

0x35e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x35f: @ GetPosition(Stack[-3])
0x360: Pop(0)
0x361: @@ GetPosition(Stack[-2])
0x362: Pop(0)
0x363: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x364: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x365: Return(); Pop(6)

0x366: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x367: @ GetPosition(Stack[-3])
0x368: Pop(0)
0x369: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x36a: Push(CvectorIndex(Stack[-2], 0))
0x36b: Push(CvectorIndex(Stack[-3], 2))
0x36c: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x36d: Pop(2)
0x36e: Stack[-8] = Stack[-1]
0x36f: Return(); Pop(6)

0x370: PushEmpty(cvector, cvector)
0x371: @@ GetPosition(Stack[-1])
0x372: Pop(0)
0x373: PushEmpty(bool, cvector)
0x374: Stack[-1] = Stack[-3]
0x375: Call2 0x366

0x376: Stack[-6] = Stack[-2]
0x377: Pop(2)
0x378: Return(); Pop(2)

0x379: PushEmpty(bool, bool)
0x37a: @ IsLoaded(Stack[-1])
0x37b: Pop(0)
0x37c: Stack[-3] = Stack[-1]
0x37d: Return(); Pop(2)

0x37e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x37f: @@ GetPosition(Stack[-8])
0x380: Pop(0)
0x381: @@ GetEyesHeight(Stack[-9])
0x382: Pop(0)
0x383: Push(CvectorIndex(Stack[-8], 1))
0x384: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x385: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x386: @ GetPosition(Stack[-7])
0x387: Pop(0)
0x388: @ GetEyesHeight(Stack[-9])
0x389: Pop(0)
0x38a: Push(CvectorIndex(Stack[-7], 1))
0x38b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x38c: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x38d: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x38e: Push(CvectorIndex(Stack[-6], 1))
0x38f: Stack[-1] = (int) 0
0x390: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x391: Pop(0); Push(Stack[-6] | Stack[-6]);
0x392: Pop(1); Push(Sqrt(Stack[-1]))
0x393: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x394: Stack[-5] = -Stack[-6]; Pop(0);
0x395: Pop(0); Push(Stack[-6] * Stack[-19]);
0x396: PushEmpty(cvector, cvector)
0x397: Push(CVector(0.0, 1.0, 0.0))
0x398: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x399: Call2 0x49a

0x39a: Pop(1)
0x39b: Push((int) 25)
0x39c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x39d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x39e: Push(CVector(0.0, 10.0, 0.0))
0x39f: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3a0: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3a1: @ IsOverrideActive(Stack[-2])
0x3a2: Pop(0)
0x3a3: Push(Stack[-2])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a5: Stack[-21] = (bool) 0
0x3a6: Return(); Pop(18)

0x3a7: @ StopWorld()
0x3a8: Pop(0)
0x3a9: Push((bool) 1)
0x3aa: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x3ab: Pop(1)
0x3ac: Push(CvectorIndex(Stack[-4], 0))
0x3ad: Push(CvectorIndex(Stack[-5], 2))
0x3ae: @ Rotate(Stack[-2], Stack[-1])
0x3af: Pop(2)
0x3b0: PushEmpty(bool)
0x3b1: Call2 0x548

0x3b2: Pop(0)
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b4: GOTO 0x3bd

0x3b5: Push("head")
0x3b6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3b7: Pop(1)
0x3b8: Push(Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3ba: Push("head")
0x3bb: @ LookAsyncCamera(Stack[-1])
0x3bc: Pop(1)
0x3bd: @ CameraWaitForPlayFinish()
0x3be: Pop(0)
0x3bf: @ ResumeWorld()
0x3c0: Pop(0)
0x3c1: Stack[-21] = (bool) 1
0x3c2: Return(); Pop(18)

0x3c3: PushEmpty(bool, bool)
0x3c4: Push((bool) 1)
0x3c5: @ CameraSwitchToNormal(Stack[-1])
0x3c6: Pop(1)
0x3c7: PushEmpty(bool)
0x3c8: Call2 0x548

0x3c9: Pop(0)
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3cb: GOTO 0x3d4

0x3cc: Push("head")
0x3cd: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3ce: Pop(1)
0x3cf: Push(Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d1: Push("head")
0x3d2: @ UnlookAsync(Stack[-1])
0x3d3: Pop(1)
0x3d4: Return(); Pop(2)

0x3d5: PushEmpty(int, int, int, int)
0x3d6: Push("voice_common")
0x3d7: @ GetVariable(Stack[-1], Stack[-3])
0x3d8: Pop(1)
0x3d9: Push(Stack[-2])
0x3da: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3db: PushEmpty(bool, object)
0x3dc: Stack[-1] = Stack[-7]
0x3dd: Call2 0x40f

0x3de: Pop(1)
0x3df: Pop(1); Push((bool) Stack[-1] == 0)
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e1: PushEmpty(bool, object)
0x3e2: Stack[-1] = Stack[-7]
0x3e3: Call2 0x434

0x3e4: Pop(1)
0x3e5: Pop(1); Push((bool) Stack[-1] == 0)
0x3e6: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e7: Stack[-6] = (bool) 0
0x3e8: Return(); Pop(4)

0x3e9: Push((int) 2)
0x3ea: @ irand(Stack[-2], Stack[-1])
0x3eb: Pop(1)
0x3ec: Push(Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3ee: Push("voice_common")
0x3ef: Push((int) 1)
0x3f0: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3f1: Push((int) 3)
0x3f2: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3f3: @ SetVariable(Stack[-2], Stack[-1])
0x3f4: Pop(2)
0x3f5: GOTO 0x3fa

0x3f6: Push("voice_common")
0x3f7: Push((int) 0)
0x3f8: @ SetVariable(Stack[-2], Stack[-1])
0x3f9: Pop(2)
0x3fa: GOTO 0x40d

0x3fb: PushEmpty(bool, object)
0x3fc: Stack[-1] = Stack[-7]
0x3fd: Call2 0x434

0x3fe: Pop(1)
0x3ff: Pop(1); Push((bool) Stack[-1] == 0)
0x400: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x401: PushEmpty(bool, object)
0x402: Stack[-1] = Stack[-7]
0x403: Call2 0x40f

0x404: Pop(1)
0x405: Pop(1); Push((bool) Stack[-1] == 0)
0x406: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x407: Stack[-6] = (bool) 0
0x408: Return(); Pop(4)

0x409: Push("voice_common")
0x40a: Push((int) 1)
0x40b: @ SetVariable(Stack[-2], Stack[-1])
0x40c: Pop(2)
0x40d: Stack[-6] = (bool) 1
0x40e: Return(); Pop(4)

0x40f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x410: Stack[-5] = "c"
0x411: Stack[-4] = (int) 0
0x412: Push((int) 1)
0x413: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x414: Push((int) 1)
0x415: Pop(1); Push(Stack[-5] + Stack[-1]);
0x416: Pop(1); Push(Stack[-6] + Stack[-1]);
0x417: @@ HasProperty(Stack[-1], Stack[-4])
0x418: Pop(1)
0x419: Pop(0); Push((bool) Stack[-3] == 0)
0x41a: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x41b: GOTO 0x41f

0x41c: Push((int) 1)
0x41d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x41e: GOTO 0x412

0x41f: Pop(0); Push((bool) Stack[-4] == 0)
0x420: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x421: Stack[-12] = (bool) 0
0x422: Return(); Pop(10)

0x423: Stack[-2] = (int) 0
0x424: Push((int) 1)
0x425: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x426: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x427: @ irand(Stack[-2], Stack[-4])
0x428: Pop(0)
0x429: Push((int) 1)
0x42a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x42b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x42c: @@ GetProperty(Stack[-1], Stack[-2])
0x42d: Pop(1)
0x42e: PushEmpty(bool, string)
0x42f: Stack[-1] = Stack[-3]
0x430: Call2 0x47e

0x431: Stack[-14] = Stack[-2]
0x432: Pop(2)
0x433: Return(); Pop(10)

0x434: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x435: Push("d")
0x436: PushEmpty(int)
0x437: Call2 0x4a9

0x438: Pop(0)
0x439: Pop(2); Push(Stack[-2] + Stack[-1]);
0x43a: Push("m")
0x43b: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x43c: Stack[-4] = (int) 0
0x43d: Push((int) 1)
0x43e: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x43f: Push((int) 1)
0x440: Pop(1); Push(Stack[-5] + Stack[-1]);
0x441: Pop(1); Push(Stack[-6] + Stack[-1]);
0x442: @@ HasProperty(Stack[-1], Stack[-4])
0x443: Pop(1)
0x444: Pop(0); Push((bool) Stack[-3] == 0)
0x445: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x446: GOTO 0x44a

0x447: Push((int) 1)
0x448: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x449: GOTO 0x43d

0x44a: Pop(0); Push((bool) Stack[-4] == 0)
0x44b: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44c: Stack[-12] = (bool) 0
0x44d: Return(); Pop(10)

0x44e: Stack[-2] = (int) 0
0x44f: Push((int) 1)
0x450: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x451: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x452: @ irand(Stack[-2], Stack[-4])
0x453: Pop(0)
0x454: Push((int) 1)
0x455: Pop(1); Push(Stack[-3] + Stack[-1]);
0x456: Pop(1); Push(Stack[-6] + Stack[-1]);
0x457: @@ GetProperty(Stack[-1], Stack[-2])
0x458: Pop(1)
0x459: PushEmpty(bool, string)
0x45a: Stack[-1] = Stack[-3]
0x45b: Call2 0x47e

0x45c: Stack[-14] = Stack[-2]
0x45d: Pop(2)
0x45e: Return(); Pop(10)

0x45f: PushEmpty(bool, float, float, bool, float, float)
0x460: @ lshHasAnimation(Stack[-3], Stack[-7])
0x461: Pop(0)
0x462: Push(Stack[-3])
0x463: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x464: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x465: Pop(0)
0x466: Push((bool) 0)
0x467: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x468: Pop(1)
0x469: GOTO 0x46e

0x46a: Push("Can't find lsh animation : ")
0x46b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x46c: @ Trace(Stack[-1])
0x46d: Pop(1)
0x46e: Return(); Pop(6)

0x46f: PushEmpty(bool, float, float, bool, float, float)
0x470: @ lshHasAnimation(Stack[-3], Stack[-8])
0x471: Pop(0)
0x472: Push(Stack[-3])
0x473: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x474: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x475: Pop(0)
0x476: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x477: Pop(0)
0x478: GOTO 0x47d

0x479: Push("Can't find lsh animation : ")
0x47a: Pop(1); Push(Stack[-1] + Stack[-9]);
0x47b: @ Trace(Stack[-1])
0x47c: Pop(1)
0x47d: Return(); Pop(6)

0x47e: PushEmpty(bool, bool)
0x47f: PushEmpty(bool)
0x480: Call2 0x548

0x481: Pop(0)
0x482: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x483: @ lshHasSpeech(Stack[-1], Stack[-3])
0x484: Pop(0)
0x485: Push(Stack[-1])
0x486: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x487: @ lshPlaySpeech(Stack[-3])
0x488: Pop(0)
0x489: Stack[-4] = (bool) 1
0x48a: Return(); Pop(2)

0x48b: Stack[-4] = (bool) 0
0x48c: Return(); Pop(2)

0x48d: PushEmpty(bool)
0x48e: Call2 0x548

0x48f: Pop(0)
0x490: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x491: @ lshStopSpeech()
0x492: Pop(0)
0x493: Return(); Pop(0)

0x494: PushEmpty(object, object)
0x495: @ self(Stack[-1])
0x496: Pop(0)
0x497: Stack[-3] = Stack[-1]
0x498: Return(); Pop(2)

0x499: Stack[-1] = 0
0x49a: PushEmpty(float, float)
0x49b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x49c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x49d: Push((float)0.0)
0x49e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x49f: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x4a0: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x4a1: Return(); Pop(2)

0x4a2: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4a3: Return(); Pop(2)

0x4a4: PushEmpty(int, int)
0x4a5: @ GetVariable(Stack[-3], Stack[-1])
0x4a6: Pop(0)
0x4a7: Stack[-4] = Stack[-1]
0x4a8: Return(); Pop(2)

0x4a9: PushEmpty(float, float)
0x4aa: @ GetGameTime(Stack[-1])
0x4ab: Pop(0)
0x4ac: Push((int) 1)
0x4ad: PushEmpty(int)
0x4ae: Push((int) 24)
0x4af: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x4b0: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x4b1: Return(); Pop(2)

0x4b2: PushEmpty(string, string)
0x4b3: Stack[-1] = "idle"
0x4b4: Push(Stack[-3])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b6: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4b7: Stack[-4] = Stack[-1]
0x4b8: Return(); Pop(2)

0x4b9: PushEmpty(int, bool, int, bool)
0x4ba: Stack[-2] = (int) 0
0x4bb: Push("all")
0x4bc: PushEmpty(string, int)
0x4bd: Stack[-1] = Stack[-5]
0x4be: Call2 0x4b2

0x4bf: Pop(1)
0x4c0: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4c1: Pop(2)
0x4c2: Pop(0); Push((bool) Stack[-1] == 0)
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c4: GOTO 0x4c8

0x4c5: Push((int) 1)
0x4c6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4c7: GOTO 0x4bb

0x4c8: Stack[-5] = Stack[-2]
0x4c9: Return(); Pop(4)

0x4ca: PushEmpty()
0x4cb: PushEmpty(int, string)
0x4cc: Stack[-1] = "map_chertez_state"
0x4cd: Call2 0x4a4

0x4ce: Pop(1)
0x4cf: Push((int) 5)
0x4d0: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d2: Push("map_chertez_state")
0x4d3: Push((int) 5)
0x4d4: @ SetVariable(Stack[-2], Stack[-1])
0x4d5: Pop(2)
0x4d6: Push("map_chertez_force")
0x4d7: Push((int) 1)
0x4d8: @ SetVariable(Stack[-2], Stack[-1])
0x4d9: Pop(2)
0x4da: Return(); Pop(0)

0x4db: PushEmpty()
0x4dc: PushEmpty(object, string, float)
0x4dd: PushEmpty(object)
0x4de: Call2 0x4fd

0x4df: Stack[-4] = Stack[-1]
0x4e0: Pop(1)
0x4e1: Stack[-2] = "pt_map_aglaja"
0x4e2: Stack[-1] = (int) -1
0x4e3: Call2 0x50e

0x4e4: Pop(3)
0x4e5: PushEmpty(object)
0x4e6: Call2 0x4fd

0x4e7: Pop(0)
0x4e8: @@ ShowMap(Stack[-1])
0x4e9: Pop(1)
0x4ea: Return(); Pop(0)

0x4eb: PushEmpty()
0x4ec: Push("ood11Burah1")
0x4ed: Push((int) 1)
0x4ee: @ SetVariable(Stack[-2], Stack[-1])
0x4ef: Pop(2)
0x4f0: Return(); Pop(0)

0x4f1: PushEmpty()
0x4f2: PushEmpty(int, string)
0x4f3: Stack[-1] = "ood11Burah1"
0x4f4: Call2 0x4a4

0x4f5: Pop(1)
0x4f6: Push((int) 0)
0x4f7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4f9: Stack[-2] = (bool) 1
0x4fa: Return(); Pop(0)

0x4fb: Stack[-2] = (bool) 0
0x4fc: Return(); Pop(0)

0x4fd: PushEmpty(object, object, object, object)
0x4fe: @ GetMainOutdoorScene(Stack[-2])
0x4ff: Pop(0)
0x500: Pop(0); Push((bool) Stack[-2] == 0)
0x501: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x502: Push("Can't find main outdoor scene")
0x503: @ Trace(Stack[-1])
0x504: Pop(1)
0x505: Stack[-1] = 0
0x506: Stack[-5] = Stack[-1]
0x507: Return(); Pop(4)

0x508: @@ GetMap(Stack[-1])
0x509: Pop(0)
0x50a: Stack[-5] = Stack[-1]
0x50b: Return(); Pop(4)

0x50c: Stack[-1] = 0
0x50d: Stack[-2] = 0
0x50e: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x50f: @ GetMainOutdoorScene(Stack[-2])
0x510: Pop(0)
0x511: Pop(0); Push((bool) Stack[-2] == 0)
0x512: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x513: Push("Can't find main outdoor scene")
0x514: @ Trace(Stack[-1])
0x515: Pop(1)
0x516: Return(); Pop(8)

0x517: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x518: Pop(0)
0x519: Pop(0); Push((bool) Stack[-1] == 0)
0x51a: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x51b: Push("Warning: outdoor scene locator ")
0x51c: Pop(1); Push(Stack[-1] + Stack[-11]);
0x51d: Push(" doesnt exist")
0x51e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x51f: @ Trace(Stack[-1])
0x520: Pop(1)
0x521: @@ GetMap(Stack[-11])
0x522: Pop(0)
0x523: Pop(0); Push((bool) Stack[-11] == 0)
0x524: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x525: Push("Can't find map")
0x526: @ Trace(Stack[-1])
0x527: Pop(1)
0x528: Return(); Pop(8)

0x529: Push(CvectorIndex(Stack[-4], 0))
0x52a: Push(CvectorIndex(Stack[-5], 2))
0x52b: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x52c: Pop(2)
0x52d: Return(); Pop(8)

0x52e: Stack[-2] = 0
0x52f: PushEmpty(int, int)
0x530: Push("branch")
0x531: @ GetVariable(Stack[-1], Stack[-2])
0x532: Pop(1)
0x533: Push((int) 0)
0x534: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x535: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x536: Stack[-3] = (int) 1
0x537: Return(); Pop(2)

0x538: GOTO 0x53e

0x539: Push((int) 1)
0x53a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x53b: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x53c: Stack[-3] = (int) 2
0x53d: Return(); Pop(2)

0x53e: Stack[-3] = (int) 3
0x53f: Return(); Pop(2)

0x540: Stack[-1] = (int) 515592
0x541: Return(); Pop(0)

0x542: Stack[-1] = (int) 511961
0x543: Return(); Pop(0)

0x544: Stack[-1] = "ui/NPC_Burah.png"
0x545: Return(); Pop(0)

0x546: Stack[-1] = "ui/NPC_Burah_b.png"
0x547: Return(); Pop(0)

0x548: Stack[-1] = (bool) 1
0x549: Return(); Pop(0)

