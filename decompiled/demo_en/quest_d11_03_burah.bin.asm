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
	GetMainOutdoorScene (1 args)

RunOp = 0x225
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xba Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x229 Vars = (string)
		EVENT_6 Op = 0x23d Vars = ()
		EVENT_5 Op = 0x24a Vars = ()
		EVENT_7 Op = 0x293 Vars = (int)
		EVENT_45 Op = 0x2d5 Vars = (bool)
		EVENT_0 Op = 0x2e1 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x36a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x52c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x52a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x52e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x530

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x519

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
0x31: Call2 0x47e

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x3bf

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
0x48: Call2 0x3ae

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
0x59: Call2 0x4db

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x4d5

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
0x87: Call2 0x532

0x88: Pop(0)
0x89: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8a: @ lshWaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: PushEmpty(string)
0x90: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x91: Call2 0x449

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
0xa6: Call2 0x532

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
0xb6: Call2 0x459

0xb7: Pop(2)
0xb8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: Push((int) 1)
0xbc: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0xbd: PushEmpty()
0xbe: Call2 0x477

0xbf: Pop(0)
0xc0: Push((int) 15565)
0xc1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call2 0x4b4

0xc7: Pop(2)
0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x4c5

0xcc: Pop(2)
0xcd: Push((int) 41689)
0xce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x4b4

0xd4: Pop(2)
0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x4c5

0xd9: Pop(2)
0xda: Push((int) 15548)
0xdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xdd: PushEmpty(bool, object)
0xde: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Call2 0x4db

0xe0: Pop(1)
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(object, object)
0xe3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5: Call2 0x4d5

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
0x170: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

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
0x17f: Return(); Pop(0)

0x180: Push((int) 41678)
0x181: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x183: Push((int) 41680)
0x184: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x186: PushEmpty(string)
0x187: Stack[-1] = "Neutral"
0x188: Call2 0xa4

0x189: Pop(1)
0x18a: Push((int) 539720)
0x18b: @@ SetMessage(Stack[-1])
0x18c: Pop(1)
0x18d: @@ ClearReplies()
0x18e: Pop(0)
0x18f: Push((int) 539721)
0x190: Push((int) 15560)
0x191: Push((int) 41681)
0x192: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x193: Pop(3)
0x194: Return(); Pop(0)

0x195: Push((int) 15556)
0x196: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x197: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x198: PushEmpty(string)
0x199: Stack[-1] = "Smile"
0x19a: Call2 0xa4

0x19b: Pop(1)
0x19c: Push((int) 514334)
0x19d: @@ SetMessage(Stack[-1])
0x19e: Pop(1)
0x19f: @@ ClearReplies()
0x1a0: Pop(0)
0x1a1: Push((int) 514335)
0x1a2: Push((int) 15558)
0x1a3: Push((int) 15557)
0x1a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a5: Pop(3)
0x1a6: Return(); Pop(0)

0x1a7: Push((int) 15558)
0x1a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1aa: PushEmpty(string)
0x1ab: Stack[-1] = "Neutral"
0x1ac: Call2 0xa4

0x1ad: Pop(1)
0x1ae: Push((int) 514336)
0x1af: @@ SetMessage(Stack[-1])
0x1b0: Pop(1)
0x1b1: @@ ClearReplies()
0x1b2: Pop(0)
0x1b3: Push((int) 514337)
0x1b4: Push((int) 15560)
0x1b5: Push((int) 15559)
0x1b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b7: Pop(3)
0x1b8: Return(); Pop(0)

0x1b9: Push((int) 15560)
0x1ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1bc: PushEmpty(string)
0x1bd: Stack[-1] = "Doubt"
0x1be: Call2 0xa4

0x1bf: Pop(1)
0x1c0: Push((int) 514338)
0x1c1: @@ SetMessage(Stack[-1])
0x1c2: Pop(1)
0x1c3: @@ ClearReplies()
0x1c4: Pop(0)
0x1c5: Push((int) 514339)
0x1c6: Push((int) 15562)
0x1c7: Push((int) 15561)
0x1c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c9: Pop(3)
0x1ca: Push((int) 539722)
0x1cb: Push((int) 41684)
0x1cc: Push((int) 41683)
0x1cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ce: Pop(3)
0x1cf: Return(); Pop(0)

0x1d0: Push((int) 41684)
0x1d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1d3: PushEmpty(string)
0x1d4: Stack[-1] = "Neutral"
0x1d5: Call2 0xa4

0x1d6: Pop(1)
0x1d7: Push((int) 539723)
0x1d8: @@ SetMessage(Stack[-1])
0x1d9: Pop(1)
0x1da: @@ ClearReplies()
0x1db: Pop(0)
0x1dc: Push((int) 539724)
0x1dd: Push((int) 15562)
0x1de: Push((int) 41685)
0x1df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e0: Pop(3)
0x1e1: Return(); Pop(0)

0x1e2: Push((int) 15562)
0x1e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1e5: PushEmpty(string)
0x1e6: Stack[-1] = "Agression"
0x1e7: Call2 0xa4

0x1e8: Pop(1)
0x1e9: Push((int) 514340)
0x1ea: @@ SetMessage(Stack[-1])
0x1eb: Pop(1)
0x1ec: @@ ClearReplies()
0x1ed: Pop(0)
0x1ee: Push((int) 514341)
0x1ef: Push((int) 15564)
0x1f0: Push((int) 15563)
0x1f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f2: Pop(3)
0x1f3: Push((int) 539725)
0x1f4: Push((int) 15564)
0x1f5: Push((int) 41687)
0x1f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f7: Pop(3)
0x1f8: Return(); Pop(0)

0x1f9: Push((int) 15564)
0x1fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x1fc: PushEmpty(string)
0x1fd: Stack[-1] = "Neutral"
0x1fe: Call2 0xa4

0x1ff: Pop(1)
0x200: Push((int) 514342)
0x201: @@ SetMessage(Stack[-1])
0x202: Pop(1)
0x203: @@ ClearReplies()
0x204: Pop(0)
0x205: Push((int) 514343)
0x206: Push((int) -1)
0x207: Push((int) 15565)
0x208: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x209: Pop(3)
0x20a: Push((int) 539726)
0x20b: Push((int) -1)
0x20c: Push((int) 41689)
0x20d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20e: Pop(3)
0x20f: Return(); Pop(0)

0x210: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x211: PushEmpty(bool)
0x212: Call2 0x532

0x213: Pop(0)
0x214: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x215: @ lshStopAnimation()
0x216: Pop(0)
0x217: GOTO 0x21a

0x218: @ StopAnimation()
0x219: Pop(0)
0x21a: Return(); Pop(0)

0x21b: GOTO 0xbb

0x21c: Return(); Pop(0)

0x21d: PushEmpty()
0x21e: PushEmpty(int, object)
0x21f: Stack[-1] = Stack[-3]
0x220: Push(-2, 1); TaskCall(0)
0x221: Call2 0x0

0x222: Pop(-2, 1); TaskReturn
0x223: Pop(2)
0x224: Return(); Pop(0)

0x225: PushEmpty()
0x226: Call2 0x24e

0x227: Pop(0)
0x228: Return(); Pop(0)

0x229: PushEmpty(bool, bool)
0x22a: Push("cleanup")
0x22b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x22d: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x22e: @ IsLoaded(Stack[-1])
0x22f: Pop(0)
0x230: Pop(0); Push((bool) Stack[-1] == 0)
0x231: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x232: PushEmpty(object)
0x233: Call2 0x47e

0x234: Pop(0)
0x235: @ RemoveActor(Stack[-1])
0x236: Pop(1)
0x237: GOTO 0x23c

0x238: Push("restore")
0x239: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23b: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x23c: Return(); Pop(2)

0x23d: Push( Stack[1 + Tasks[-1].StackPointer] )
0x23e: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x23f: PushEmpty(object)
0x240: Call2 0x47e

0x241: Pop(0)
0x242: @ RemoveActor(Stack[-1])
0x243: Pop(1)
0x244: @ Hold()
0x245: Pop(0)
0x246: PushEmpty()
0x247: Call2 0x2b9

0x248: Pop(0)
0x249: Return(); Pop(0)

0x24a: PushEmpty()
0x24b: Call2 0x2c8

0x24c: Pop(0)
0x24d: Return(); Pop(0)

0x24e: PushEmpty(bool)
0x24f: Call2 0x365

0x250: Pop(0)
0x251: Pop(1); Push((bool) Stack[-1] == 0)
0x252: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x253: @ Hold()
0x254: Pop(0)
0x255: @ GetDirection(Stack[-0])
0x256: Pop(0)
0x257: PushEmpty()
0x258: Call2 0x2fe

0x259: Pop(0)
0x25a: GOTO 0x257

0x25b: Return(); Pop(0)

0x25c: PushEmpty(object, object)
0x25d: Push("player")
0x25e: @ FindActor(Stack[-2], Stack[-1])
0x25f: Pop(1)
0x260: Pop(0); Push((bool) Stack[-1] == 0)
0x261: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x262: Stack[-3] = (bool) 0
0x263: Return(); Pop(2)

0x264: PushEmpty(bool, object)
0x265: Stack[-1] = Stack[-3]
0x266: Call2 0x35c

0x267: Stack[-5] = Stack[-2]
0x268: Pop(2)
0x269: Return(); Pop(2)

0x26a: Stack[-1] = 0
0x26b: Push(CvectorIndex(Stack[-0], 0))
0x26c: Push(CvectorIndex(Stack[-0], 2))
0x26d: @ RotateAsync(Stack[-2], Stack[-1])
0x26e: Pop(2)
0x26f: Return(); Pop(0)

0x270: PushEmpty(object, bool, object, bool)
0x271: Push("player")
0x272: @ FindActor(Stack[-3], Stack[-1])
0x273: Pop(1)
0x274: Pop(0); Push((bool) Stack[-2] == 0)
0x275: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x276: Stack[-5] = (bool) 0
0x277: Return(); Pop(4)

0x278: PushEmpty(float, object)
0x279: Stack[-1] = Stack[-4]
0x27a: Call2 0x34a

0x27b: Pop(1)
0x27c: Push((float)90000.0)
0x27d: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27f: Stack[-5] = (bool) 0
0x280: Return(); Pop(4)

0x281: @ CanSee(Stack[-1], Stack[-2])
0x282: Pop(0)
0x283: Stack[-5] = Stack[-1]
0x284: Return(); Pop(4)

0x285: Stack[-2] = 0
0x286: PushEmpty(float, float)
0x287: Push((int) 8)
0x288: Push((int) 16)
0x289: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x28a: Pop(2)
0x28b: Push((int) 10)
0x28c: @ SetTimer(Stack[-1], Stack[-2])
0x28d: Pop(1)
0x28e: Return(); Pop(2)

0x28f: Push((int) 10)
0x290: @ KillTimer(Stack[-1])
0x291: Pop(1)
0x292: Return(); Pop(0)

0x293: PushEmpty()
0x294: Push((int) 10)
0x295: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x296: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x297: PushEmpty()
0x298: Call2 0x28f

0x299: Pop(0)
0x29a: PushEmpty(bool)
0x29b: Stack[-1] = (bool) 0
0x29c: PushEmpty(bool)
0x29d: Call2 0x365

0x29e: Pop(0)
0x29f: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a0: PushEmpty(bool)
0x2a1: Call2 0x270

0x2a2: Pop(0)
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a4: Stack[-1] = (bool) 1
0x2a5: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2a6: PushEmpty(bool)
0x2a7: Call2 0x25c

0x2a8: Pop(0)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2aa: PushEmpty(bool, object)
0x2ab: PushEmpty(object)
0x2ac: Call2 0x47e

0x2ad: Stack[-2] = Stack[-1]
0x2ae: Pop(1)
0x2af: Call2 0x3f9

0x2b0: Pop(2)
0x2b1: GOTO 0x2b8

0x2b2: PushEmpty()
0x2b3: Call2 0x26b

0x2b4: Pop(0)
0x2b5: PushEmpty()
0x2b6: Call2 0x286

0x2b7: Pop(0)
0x2b8: Return(); Pop(0)

0x2b9: PushEmpty()
0x2ba: Call2 0x345

0x2bb: Pop(0)
0x2bc: PushEmpty()
0x2bd: Call2 0x28f

0x2be: Pop(0)
0x2bf: @ lshStopSpeech()
0x2c0: Pop(0)
0x2c1: @ lshStopAnimation()
0x2c2: Pop(0)
0x2c3: @ StopAsync()
0x2c4: Pop(0)
0x2c5: @ Hold()
0x2c6: Pop(0)
0x2c7: Return(); Pop(0)

0x2c8: @ StopGroup0()
0x2c9: Pop(0)
0x2ca: PushEmpty()
0x2cb: Call2 0x28f

0x2cc: Pop(0)
0x2cd: PushEmpty(string)
0x2ce: Stack[-1] = "Neutral"
0x2cf: Call2 0x449

0x2d0: Pop(1)
0x2d1: PushEmpty()
0x2d2: Call2 0x286

0x2d3: Pop(0)
0x2d4: Return(); Pop(0)

0x2d5: PushEmpty()
0x2d6: Push(Stack[-1])
0x2d7: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d8: PushEmpty()
0x2d9: Call2 0x286

0x2da: Pop(0)
0x2db: GOTO 0x2e0

0x2dc: PushEmpty(string)
0x2dd: Stack[-1] = "Neutral"
0x2de: Call2 0x449

0x2df: Pop(1)
0x2e0: Return(); Pop(0)

0x2e1: PushEmpty(bool, bool)
0x2e2: @ IsOverrideActive(Stack[-1])
0x2e3: Pop(0)
0x2e4: Pop(0); Push((bool) Stack[-1] == 0)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2e6: EventDisable(0)
0x2e7: PushEmpty()
0x2e8: Call2 0x345

0x2e9: Pop(0)
0x2ea: PushEmpty(bool, object)
0x2eb: Stack[-1] = Stack[-5]
0x2ec: Call2 0x35c

0x2ed: Pop(2)
0x2ee: EventEnable(0)
0x2ef: PushEmpty(object)
0x2f0: Stack[-1] = Stack[-4]
0x2f1: Call2 0x21d

0x2f2: Pop(1)
0x2f3: PushEmpty(string)
0x2f4: Stack[-1] = "Neutral"
0x2f5: Call2 0x449

0x2f6: Pop(1)
0x2f7: PushEmpty()
0x2f8: Call2 0x28f

0x2f9: Pop(0)
0x2fa: PushEmpty()
0x2fb: Call2 0x286

0x2fc: Pop(0)
0x2fd: Return(); Pop(2)

0x2fe: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x2ff: @ WaitForAnimEnd()
0x300: Pop(0)
0x301: PushEmpty(bool)
0x302: Call2 0x365

0x303: Pop(0)
0x304: Pop(1); Push((bool) Stack[-1] == 0)
0x305: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x306: Return(); Pop(12)

0x307: PushEmpty(int)
0x308: Call2 0x4a3

0x309: Stack[-7] = Stack[-1]
0x30a: Pop(1)
0x30b: Stack[-5] = (int) 0
0x30c: PushEmpty(bool)
0x30d: Stack[-1] = (bool) 0
0x30e: Push((int) 5)
0x30f: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x310: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x311: PushEmpty(bool)
0x312: Call2 0x365

0x313: Pop(0)
0x314: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x315: Stack[-1] = (bool) 1
0x316: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x317: Pop(0); Push((bool) Stack[-6] == 0)
0x318: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x319: Push((int) 3)
0x31a: @ Sleep(Stack[-1], Stack[-5])
0x31b: Pop(1)
0x31c: Pop(0); Push((bool) Stack[-4] == 0)
0x31d: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31e: GOTO 0x340

0x31f: GOTO 0x335

0x320: @ irand(Stack[-3], Stack[-6])
0x321: Pop(0)
0x322: Push((int) 5)
0x323: @ irand(Stack[-3], Stack[-1])
0x324: Pop(1)
0x325: Push((int) 0)
0x326: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x327: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x328: Stack[-3] = (int) 0
0x329: Push("all")
0x32a: PushEmpty(string, int)
0x32b: Stack[-1] = Stack[-6]
0x32c: Call2 0x49c

0x32d: Pop(1)
0x32e: @ PlayAnimation(Stack[-2], Stack[-1])
0x32f: Pop(2)
0x330: @ WaitForAnimEnd(Stack[-1])
0x331: Pop(0)
0x332: Pop(0); Push((bool) Stack[-1] == 0)
0x333: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x334: GOTO 0x340

0x335: PushEmpty(bool)
0x336: Call2 0x343

0x337: Pop(0)
0x338: Pop(1); Push((bool) Stack[-1] == 0)
0x339: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x33a: GOTO 0x340

0x33b: @ ResetAAS()
0x33c: Pop(0)
0x33d: Push((int) 1)
0x33e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x33f: GOTO 0x30c

0x340: @ ResetAAS()
0x341: Pop(0)
0x342: Return(); Pop(12)

0x343: Stack[-1] = (bool) 1
0x344: Return(); Pop(0)

0x345: @ StopAnimation()
0x346: Pop(0)
0x347: @ StopGroup0()
0x348: Pop(0)
0x349: Return(); Pop(0)

0x34a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x34b: @ GetPosition(Stack[-3])
0x34c: Pop(0)
0x34d: @@ GetPosition(Stack[-2])
0x34e: Pop(0)
0x34f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x350: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x351: Return(); Pop(6)

0x352: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x353: @ GetPosition(Stack[-3])
0x354: Pop(0)
0x355: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x356: Push(CvectorIndex(Stack[-2], 0))
0x357: Push(CvectorIndex(Stack[-3], 2))
0x358: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x359: Pop(2)
0x35a: Stack[-8] = Stack[-1]
0x35b: Return(); Pop(6)

0x35c: PushEmpty(cvector, cvector)
0x35d: @@ GetPosition(Stack[-1])
0x35e: Pop(0)
0x35f: PushEmpty(bool, cvector)
0x360: Stack[-1] = Stack[-3]
0x361: Call2 0x352

0x362: Stack[-6] = Stack[-2]
0x363: Pop(2)
0x364: Return(); Pop(2)

0x365: PushEmpty(bool, bool)
0x366: @ IsLoaded(Stack[-1])
0x367: Pop(0)
0x368: Stack[-3] = Stack[-1]
0x369: Return(); Pop(2)

0x36a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x36b: @@ GetPosition(Stack[-8])
0x36c: Pop(0)
0x36d: @@ GetEyesHeight(Stack[-9])
0x36e: Pop(0)
0x36f: Push(CvectorIndex(Stack[-8], 1))
0x370: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x371: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x372: @ GetPosition(Stack[-7])
0x373: Pop(0)
0x374: @ GetEyesHeight(Stack[-9])
0x375: Pop(0)
0x376: Push(CvectorIndex(Stack[-7], 1))
0x377: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x378: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x379: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x37a: Push(CvectorIndex(Stack[-6], 1))
0x37b: Stack[-1] = (int) 0
0x37c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x37d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x37e: Pop(1); Push(Sqrt(Stack[-1]))
0x37f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x380: Stack[-5] = -Stack[-6]; Pop(0);
0x381: Pop(0); Push(Stack[-6] * Stack[-19]);
0x382: PushEmpty(cvector, cvector)
0x383: Push(CVector(0.0, 1.0, 0.0))
0x384: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x385: Call2 0x484

0x386: Pop(1)
0x387: Push((int) 25)
0x388: Pop(2); Push(Stack[-2] * Stack[-1]);
0x389: Pop(2); Push(Stack[-2] + Stack[-1]);
0x38a: Push(CVector(0.0, 10.0, 0.0))
0x38b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x38c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x38d: @ IsOverrideActive(Stack[-2])
0x38e: Pop(0)
0x38f: Push(Stack[-2])
0x390: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x391: Stack[-21] = (bool) 0
0x392: Return(); Pop(18)

0x393: @ StopWorld()
0x394: Pop(0)
0x395: @ CameraTransit(Stack[-3], Stack[-5])
0x396: Pop(0)
0x397: Push(CvectorIndex(Stack[-4], 0))
0x398: Push(CvectorIndex(Stack[-5], 2))
0x399: @ Rotate(Stack[-2], Stack[-1])
0x39a: Pop(2)
0x39b: PushEmpty(bool)
0x39c: Call2 0x532

0x39d: Pop(0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39f: GOTO 0x3a8

0x3a0: Push("head")
0x3a1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3a2: Pop(1)
0x3a3: Push(Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a5: Push("head")
0x3a6: @ LookAsyncCamera(Stack[-1])
0x3a7: Pop(1)
0x3a8: @ CameraWaitForPlayFinish()
0x3a9: Pop(0)
0x3aa: @ ResumeWorld()
0x3ab: Pop(0)
0x3ac: Stack[-21] = (bool) 1
0x3ad: Return(); Pop(18)

0x3ae: PushEmpty(bool, bool)
0x3af: @ CameraSwitchToNormal()
0x3b0: Pop(0)
0x3b1: PushEmpty(bool)
0x3b2: Call2 0x532

0x3b3: Pop(0)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b5: GOTO 0x3be

0x3b6: Push("head")
0x3b7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3b8: Pop(1)
0x3b9: Push(Stack[-1])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bb: Push("head")
0x3bc: @ UnlookAsync(Stack[-1])
0x3bd: Pop(1)
0x3be: Return(); Pop(2)

0x3bf: PushEmpty(int, int, int, int)
0x3c0: Push("voice_common")
0x3c1: @ GetVariable(Stack[-1], Stack[-3])
0x3c2: Pop(1)
0x3c3: Push(Stack[-2])
0x3c4: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3c5: PushEmpty(bool, object)
0x3c6: Stack[-1] = Stack[-7]
0x3c7: Call2 0x3f9

0x3c8: Pop(1)
0x3c9: Pop(1); Push((bool) Stack[-1] == 0)
0x3ca: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3cb: PushEmpty(bool, object)
0x3cc: Stack[-1] = Stack[-7]
0x3cd: Call2 0x41e

0x3ce: Pop(1)
0x3cf: Pop(1); Push((bool) Stack[-1] == 0)
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d1: Stack[-6] = (bool) 0
0x3d2: Return(); Pop(4)

0x3d3: Push((int) 2)
0x3d4: @ irand(Stack[-2], Stack[-1])
0x3d5: Pop(1)
0x3d6: Push(Stack[-1])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3d8: Push("voice_common")
0x3d9: Push((int) 1)
0x3da: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3db: Push((int) 3)
0x3dc: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3dd: @ SetVariable(Stack[-2], Stack[-1])
0x3de: Pop(2)
0x3df: GOTO 0x3e4

0x3e0: Push("voice_common")
0x3e1: Push((int) 0)
0x3e2: @ SetVariable(Stack[-2], Stack[-1])
0x3e3: Pop(2)
0x3e4: GOTO 0x3f7

0x3e5: PushEmpty(bool, object)
0x3e6: Stack[-1] = Stack[-7]
0x3e7: Call2 0x41e

0x3e8: Pop(1)
0x3e9: Pop(1); Push((bool) Stack[-1] == 0)
0x3ea: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3eb: PushEmpty(bool, object)
0x3ec: Stack[-1] = Stack[-7]
0x3ed: Call2 0x3f9

0x3ee: Pop(1)
0x3ef: Pop(1); Push((bool) Stack[-1] == 0)
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f1: Stack[-6] = (bool) 0
0x3f2: Return(); Pop(4)

0x3f3: Push("voice_common")
0x3f4: Push((int) 1)
0x3f5: @ SetVariable(Stack[-2], Stack[-1])
0x3f6: Pop(2)
0x3f7: Stack[-6] = (bool) 1
0x3f8: Return(); Pop(4)

0x3f9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3fa: Stack[-5] = "c"
0x3fb: Stack[-4] = (int) 0
0x3fc: Push((int) 1)
0x3fd: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x3fe: Push((int) 1)
0x3ff: Pop(1); Push(Stack[-5] + Stack[-1]);
0x400: Pop(1); Push(Stack[-6] + Stack[-1]);
0x401: @@ HasProperty(Stack[-1], Stack[-4])
0x402: Pop(1)
0x403: Pop(0); Push((bool) Stack[-3] == 0)
0x404: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x405: GOTO 0x409

0x406: Push((int) 1)
0x407: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x408: GOTO 0x3fc

0x409: Pop(0); Push((bool) Stack[-4] == 0)
0x40a: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40b: Stack[-12] = (bool) 0
0x40c: Return(); Pop(10)

0x40d: Stack[-2] = (int) 0
0x40e: Push((int) 1)
0x40f: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x411: @ irand(Stack[-2], Stack[-4])
0x412: Pop(0)
0x413: Push((int) 1)
0x414: Pop(1); Push(Stack[-3] + Stack[-1]);
0x415: Pop(1); Push(Stack[-6] + Stack[-1]);
0x416: @@ GetProperty(Stack[-1], Stack[-2])
0x417: Pop(1)
0x418: PushEmpty(bool, string)
0x419: Stack[-1] = Stack[-3]
0x41a: Call2 0x468

0x41b: Stack[-14] = Stack[-2]
0x41c: Pop(2)
0x41d: Return(); Pop(10)

0x41e: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x41f: Push("d")
0x420: PushEmpty(int)
0x421: Call2 0x493

0x422: Pop(0)
0x423: Pop(2); Push(Stack[-2] + Stack[-1]);
0x424: Push("m")
0x425: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x426: Stack[-4] = (int) 0
0x427: Push((int) 1)
0x428: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x429: Push((int) 1)
0x42a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x42b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x42c: @@ HasProperty(Stack[-1], Stack[-4])
0x42d: Pop(1)
0x42e: Pop(0); Push((bool) Stack[-3] == 0)
0x42f: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x430: GOTO 0x434

0x431: Push((int) 1)
0x432: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x433: GOTO 0x427

0x434: Pop(0); Push((bool) Stack[-4] == 0)
0x435: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x436: Stack[-12] = (bool) 0
0x437: Return(); Pop(10)

0x438: Stack[-2] = (int) 0
0x439: Push((int) 1)
0x43a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x43b: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43c: @ irand(Stack[-2], Stack[-4])
0x43d: Pop(0)
0x43e: Push((int) 1)
0x43f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x440: Pop(1); Push(Stack[-6] + Stack[-1]);
0x441: @@ GetProperty(Stack[-1], Stack[-2])
0x442: Pop(1)
0x443: PushEmpty(bool, string)
0x444: Stack[-1] = Stack[-3]
0x445: Call2 0x468

0x446: Stack[-14] = Stack[-2]
0x447: Pop(2)
0x448: Return(); Pop(10)

0x449: PushEmpty(bool, float, float, bool, float, float)
0x44a: @ lshHasAnimation(Stack[-3], Stack[-7])
0x44b: Pop(0)
0x44c: Push(Stack[-3])
0x44d: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x44e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x44f: Pop(0)
0x450: Push((bool) 0)
0x451: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x452: Pop(1)
0x453: GOTO 0x458

0x454: Push("Can't find lsh animation : ")
0x455: Pop(1); Push(Stack[-1] + Stack[-8]);
0x456: @ Trace(Stack[-1])
0x457: Pop(1)
0x458: Return(); Pop(6)

0x459: PushEmpty(bool, float, float, bool, float, float)
0x45a: @ lshHasAnimation(Stack[-3], Stack[-8])
0x45b: Pop(0)
0x45c: Push(Stack[-3])
0x45d: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x45e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x45f: Pop(0)
0x460: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x461: Pop(0)
0x462: GOTO 0x467

0x463: Push("Can't find lsh animation : ")
0x464: Pop(1); Push(Stack[-1] + Stack[-9]);
0x465: @ Trace(Stack[-1])
0x466: Pop(1)
0x467: Return(); Pop(6)

0x468: PushEmpty(bool, bool)
0x469: PushEmpty(bool)
0x46a: Call2 0x532

0x46b: Pop(0)
0x46c: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x46d: @ lshHasSpeech(Stack[-1], Stack[-3])
0x46e: Pop(0)
0x46f: Push(Stack[-1])
0x470: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x471: @ lshPlaySpeech(Stack[-3])
0x472: Pop(0)
0x473: Stack[-4] = (bool) 1
0x474: Return(); Pop(2)

0x475: Stack[-4] = (bool) 0
0x476: Return(); Pop(2)

0x477: PushEmpty(bool)
0x478: Call2 0x532

0x479: Pop(0)
0x47a: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x47b: @ lshStopSpeech()
0x47c: Pop(0)
0x47d: Return(); Pop(0)

0x47e: PushEmpty(object, object)
0x47f: @ self(Stack[-1])
0x480: Pop(0)
0x481: Stack[-3] = Stack[-1]
0x482: Return(); Pop(2)

0x483: Stack[-1] = 0
0x484: PushEmpty(float, float)
0x485: Pop(0); Push(Stack[-3] | Stack[-3]);
0x486: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x487: Push((float)0.0)
0x488: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x489: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x48a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x48b: Return(); Pop(2)

0x48c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x48d: Return(); Pop(2)

0x48e: PushEmpty(int, int)
0x48f: @ GetVariable(Stack[-3], Stack[-1])
0x490: Pop(0)
0x491: Stack[-4] = Stack[-1]
0x492: Return(); Pop(2)

0x493: PushEmpty(float, float)
0x494: @ GetGameTime(Stack[-1])
0x495: Pop(0)
0x496: Push((int) 1)
0x497: PushEmpty(int)
0x498: Push((int) 24)
0x499: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x49a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x49b: Return(); Pop(2)

0x49c: PushEmpty(string, string)
0x49d: Stack[-1] = "idle"
0x49e: Push(Stack[-3])
0x49f: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x4a0: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4a1: Stack[-4] = Stack[-1]
0x4a2: Return(); Pop(2)

0x4a3: PushEmpty(int, bool, int, bool)
0x4a4: Stack[-2] = (int) 0
0x4a5: Push("all")
0x4a6: PushEmpty(string, int)
0x4a7: Stack[-1] = Stack[-5]
0x4a8: Call2 0x49c

0x4a9: Pop(1)
0x4aa: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4ab: Pop(2)
0x4ac: Pop(0); Push((bool) Stack[-1] == 0)
0x4ad: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ae: GOTO 0x4b2

0x4af: Push((int) 1)
0x4b0: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4b1: GOTO 0x4a5

0x4b2: Stack[-5] = Stack[-2]
0x4b3: Return(); Pop(4)

0x4b4: PushEmpty()
0x4b5: PushEmpty(int, string)
0x4b6: Stack[-1] = "map_chertez_state"
0x4b7: Call2 0x48e

0x4b8: Pop(1)
0x4b9: Push((int) 5)
0x4ba: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x4bb: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4bc: Push("map_chertez_state")
0x4bd: Push((int) 5)
0x4be: @ SetVariable(Stack[-2], Stack[-1])
0x4bf: Pop(2)
0x4c0: Push("map_chertez_force")
0x4c1: Push((int) 1)
0x4c2: @ SetVariable(Stack[-2], Stack[-1])
0x4c3: Pop(2)
0x4c4: Return(); Pop(0)

0x4c5: PushEmpty()
0x4c6: PushEmpty(object, string, float)
0x4c7: PushEmpty(object)
0x4c8: Call2 0x4e7

0x4c9: Stack[-4] = Stack[-1]
0x4ca: Pop(1)
0x4cb: Stack[-2] = "pt_map_aglaja"
0x4cc: Stack[-1] = (int) -1
0x4cd: Call2 0x4f8

0x4ce: Pop(3)
0x4cf: PushEmpty(object)
0x4d0: Call2 0x4e7

0x4d1: Pop(0)
0x4d2: @@ ShowMap(Stack[-1])
0x4d3: Pop(1)
0x4d4: Return(); Pop(0)

0x4d5: PushEmpty()
0x4d6: Push("ood11Burah1")
0x4d7: Push((int) 1)
0x4d8: @ SetVariable(Stack[-2], Stack[-1])
0x4d9: Pop(2)
0x4da: Return(); Pop(0)

0x4db: PushEmpty()
0x4dc: PushEmpty(int, string)
0x4dd: Stack[-1] = "ood11Burah1"
0x4de: Call2 0x48e

0x4df: Pop(1)
0x4e0: Push((int) 0)
0x4e1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e3: Stack[-2] = (bool) 1
0x4e4: Return(); Pop(0)

0x4e5: Stack[-2] = (bool) 0
0x4e6: Return(); Pop(0)

0x4e7: PushEmpty(object, object, object, object)
0x4e8: @ GetMainOutdoorScene(Stack[-2])
0x4e9: Pop(0)
0x4ea: Pop(0); Push((bool) Stack[-2] == 0)
0x4eb: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4ec: Push("Can't find main outdoor scene")
0x4ed: @ Trace(Stack[-1])
0x4ee: Pop(1)
0x4ef: Stack[-1] = 0
0x4f0: Stack[-5] = Stack[-1]
0x4f1: Return(); Pop(4)

0x4f2: @@ GetMap(Stack[-1])
0x4f3: Pop(0)
0x4f4: Stack[-5] = Stack[-1]
0x4f5: Return(); Pop(4)

0x4f6: Stack[-1] = 0
0x4f7: Stack[-2] = 0
0x4f8: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x4f9: @ GetMainOutdoorScene(Stack[-2])
0x4fa: Pop(0)
0x4fb: Pop(0); Push((bool) Stack[-2] == 0)
0x4fc: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4fd: Push("Can't find main outdoor scene")
0x4fe: @ Trace(Stack[-1])
0x4ff: Pop(1)
0x500: Return(); Pop(8)

0x501: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x502: Pop(0)
0x503: Pop(0); Push((bool) Stack[-1] == 0)
0x504: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x505: Push("Warning: outdoor scene locator ")
0x506: Pop(1); Push(Stack[-1] + Stack[-11]);
0x507: Push(" doesnt exist")
0x508: Pop(2); Push(Stack[-2] + Stack[-1]);
0x509: @ Trace(Stack[-1])
0x50a: Pop(1)
0x50b: @@ GetMap(Stack[-11])
0x50c: Pop(0)
0x50d: Pop(0); Push((bool) Stack[-11] == 0)
0x50e: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x50f: Push("Can't find map")
0x510: @ Trace(Stack[-1])
0x511: Pop(1)
0x512: Return(); Pop(8)

0x513: Push(CvectorIndex(Stack[-4], 0))
0x514: Push(CvectorIndex(Stack[-5], 2))
0x515: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x516: Pop(2)
0x517: Return(); Pop(8)

0x518: Stack[-2] = 0
0x519: PushEmpty(int, int)
0x51a: Push("branch")
0x51b: @ GetVariable(Stack[-1], Stack[-2])
0x51c: Pop(1)
0x51d: Push((int) 0)
0x51e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x51f: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x520: Stack[-3] = (int) 1
0x521: Return(); Pop(2)

0x522: GOTO 0x528

0x523: Push((int) 1)
0x524: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x525: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x526: Stack[-3] = (int) 2
0x527: Return(); Pop(2)

0x528: Stack[-3] = (int) 3
0x529: Return(); Pop(2)

0x52a: Stack[-1] = (int) 515592
0x52b: Return(); Pop(0)

0x52c: Stack[-1] = (int) 511961
0x52d: Return(); Pop(0)

0x52e: Stack[-1] = "ui/NPC_Burah.png"
0x52f: Return(); Pop(0)

0x530: Stack[-1] = "ui/NPC_Burah_b.png"
0x531: Return(); Pop(0)

0x532: Stack[-1] = (bool) 1
0x533: Return(); Pop(0)

