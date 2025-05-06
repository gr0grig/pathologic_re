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
	Fear
	all
	idle
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
	ui/NPC_Klara.png
	ui/NPC_Klara_b.png
	oob11KlaraD1
	b11q01VictimChoosed
	branch

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

RunOp = 0x203
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc9 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x207 Vars = (string)
		EVENT_6 Op = 0x21b Vars = ()
		EVENT_5 Op = 0x228 Vars = ()
		EVENT_7 Op = 0x271 Vars = (int)
		EVENT_45 Op = 0x2b3 Vars = (bool)
		EVENT_0 Op = 0x2bf Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x348

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x494

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x492

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x496

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x498

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4ba

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
0x31: Call2 0x45c

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x39d

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
0x48: Call2 0x38c

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
0x56: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x4a2

0x5c: Pop(1)
0x5d: Pop(1); Push((bool) Stack[-1] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5f: PushEmpty(bool, object)
0x60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61: Call2 0x4ae

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x66: PushEmpty(object, object)
0x67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69: Call2 0x49c

0x6a: Pop(2)
0x6b: PushEmpty(string)
0x6c: Stack[-1] = "Neutral"
0x6d: Call2 0xb3

0x6e: Pop(1)
0x6f: Push((int) 522009)
0x70: @@ SetMessage(Stack[-1])
0x71: Pop(1)
0x72: @@ ClearReplies()
0x73: Pop(0)
0x74: Push((int) 523279)
0x75: Push((int) 24484)
0x76: Push((int) 24483)
0x77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78: Pop(3)
0x79: Push((int) 522010)
0x7a: Push((int) 24503)
0x7b: Push((int) 23180)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: Push((int) 523286)
0x7f: Push((int) 24492)
0x80: Push((int) 24491)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: GOTO 0x95

0x84: PushEmpty(string)
0x85: Stack[-1] = "Fear"
0x86: Call2 0xb3

0x87: Pop(1)
0x88: Push((int) 522096)
0x89: @@ SetMessage(Stack[-1])
0x8a: Pop(1)
0x8b: @@ ClearReplies()
0x8c: Pop(0)
0x8d: Push((int) 522097)
0x8e: Push((int) -1)
0x8f: Push((int) 23266)
0x90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91: Pop(3)
0x92: GOTO 0x95

0x93: Return(); Pop(0)

0x94: GOTO 0x55

0x95: PushEmpty(bool)
0x96: Call2 0x49a

0x97: Pop(0)
0x98: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x99: @ lshWaitForAnimEnd()
0x9a: Pop(0)
0x9b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: GOTO 0xa3

0x9e: PushEmpty(string)
0x9f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa0: Call2 0x427

0xa1: Pop(1)
0xa2: GOTO 0x99

0xa3: GOTO 0xb2

0xa4: Push("all")
0xa5: Push("idle")
0xa6: @ PlayAnimation(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: @ WaitForAnimEnd()
0xa9: Pop(0)
0xaa: Push( Stack[3 + Tasks[-1].StackPointer] )
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: GOTO 0xb2

0xad: Push("all")
0xae: Push("idle")
0xaf: @ PlayAnimation(Stack[-2], Stack[-1])
0xb0: Pop(2)
0xb1: GOTO 0xa8

0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: PushEmpty(bool)
0xb5: Call2 0x49a

0xb6: Pop(0)
0xb7: Pop(1); Push((bool) Stack[-1] == 0)
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: Return(); Pop(0)

0xba: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: Return(); Pop(0)

0xbd: PushEmpty(string, bool)
0xbe: Stack[-2] = Stack[-3]
0xbf: Push("")
0xc0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc2: Stack[-1] = (bool) 0
0xc3: GOTO 0xc5

0xc4: Stack[-1] = (bool) 1
0xc5: Call2 0x437

0xc6: Pop(2)
0xc7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc8: Return(); Pop(0)

0xc9: PushEmpty()
0xca: Push((int) 1)
0xcb: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0xcc: PushEmpty()
0xcd: Call2 0x455

0xce: Pop(0)
0xcf: Push((int) 23179)
0xd0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd1: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0xd2: PushEmpty(bool)
0xd3: Stack[-1] = (bool) 0
0xd4: PushEmpty(bool, object)
0xd5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd6: Call2 0x4a2

0xd7: Pop(1)
0xd8: Pop(1); Push((bool) Stack[-1] == 0)
0xd9: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xda: PushEmpty(bool, object)
0xdb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdc: Call2 0x4ae

0xdd: Pop(1)
0xde: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdf: Stack[-1] = (bool) 1
0xe0: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xe1: PushEmpty(object, object)
0xe2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe4: Call2 0x49c

0xe5: Pop(2)
0xe6: PushEmpty(string)
0xe7: Stack[-1] = "Neutral"
0xe8: Call2 0xb3

0xe9: Pop(1)
0xea: Push((int) 522009)
0xeb: @@ SetMessage(Stack[-1])
0xec: Pop(1)
0xed: @@ ClearReplies()
0xee: Pop(0)
0xef: Push((int) 523279)
0xf0: Push((int) 24484)
0xf1: Push((int) 24483)
0xf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3: Pop(3)
0xf4: Push((int) 522010)
0xf5: Push((int) 24503)
0xf6: Push((int) 23180)
0xf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8: Pop(3)
0xf9: Push((int) 523286)
0xfa: Push((int) 24492)
0xfb: Push((int) 24491)
0xfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd: Pop(3)
0xfe: Return(); Pop(0)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Fear"
0x101: Call2 0xb3

0x102: Pop(1)
0x103: Push((int) 522096)
0x104: @@ SetMessage(Stack[-1])
0x105: Pop(1)
0x106: @@ ClearReplies()
0x107: Pop(0)
0x108: Push((int) 522097)
0x109: Push((int) -1)
0x10a: Push((int) 23266)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Return(); Pop(0)

0x10e: Push((int) 24533)
0x10f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x111: Push((int) 24514)
0x112: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x114: Push((int) 24518)
0x115: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x117: PushEmpty(string)
0x118: Stack[-1] = "Fear"
0x119: Call2 0xb3

0x11a: Pop(1)
0x11b: Push((int) 523310)
0x11c: @@ SetMessage(Stack[-1])
0x11d: Pop(1)
0x11e: @@ ClearReplies()
0x11f: Pop(0)
0x120: Push((int) 523312)
0x121: Push((int) 24508)
0x122: Push((int) 24521)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Push((int) 523314)
0x126: Push((int) 24484)
0x127: Push((int) 24524)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: Return(); Pop(0)

0x12b: Push((int) 24516)
0x12c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x12e: PushEmpty(string)
0x12f: Stack[-1] = "Fear"
0x130: Call2 0xb3

0x131: Pop(1)
0x132: Push((int) 523308)
0x133: @@ SetMessage(Stack[-1])
0x134: Pop(1)
0x135: @@ ClearReplies()
0x136: Pop(0)
0x137: Push((int) 523311)
0x138: Push((int) 24508)
0x139: Push((int) 24519)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: Push((int) 523313)
0x13d: Push((int) 24484)
0x13e: Push((int) 24523)
0x13f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x140: Pop(3)
0x141: Return(); Pop(0)

0x142: Push((int) 24492)
0x143: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x144: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x145: PushEmpty(string)
0x146: Stack[-1] = "Fear"
0x147: Call2 0xb3

0x148: Pop(1)
0x149: Push((int) 523287)
0x14a: @@ SetMessage(Stack[-1])
0x14b: Pop(1)
0x14c: @@ ClearReplies()
0x14d: Pop(0)
0x14e: Push((int) 523300)
0x14f: Push((int) 24508)
0x150: Push((int) 24506)
0x151: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x152: Pop(3)
0x153: Return(); Pop(0)

0x154: Push((int) 24490)
0x155: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x156: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x157: Push((int) 24503)
0x158: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Fear"
0x15c: Call2 0xb3

0x15d: Pop(1)
0x15e: Push((int) 523298)
0x15f: @@ SetMessage(Stack[-1])
0x160: Pop(1)
0x161: @@ ClearReplies()
0x162: Pop(0)
0x163: Push((int) 523299)
0x164: Push((int) 24494)
0x165: Push((int) 24504)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Return(); Pop(0)

0x169: Push((int) 24484)
0x16a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Neutral"
0x16e: Call2 0xb3

0x16f: Pop(1)
0x170: Push((int) 523280)
0x171: @@ SetMessage(Stack[-1])
0x172: Pop(1)
0x173: @@ ClearReplies()
0x174: Pop(0)
0x175: Push((int) 523281)
0x176: Push((int) 24486)
0x177: Push((int) 24485)
0x178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: Push((int) 523315)
0x17b: Push((int) 24494)
0x17c: Push((int) 24527)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: Return(); Pop(0)

0x180: Push((int) 24486)
0x181: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x183: PushEmpty(string)
0x184: Stack[-1] = "Fear"
0x185: Call2 0xb3

0x186: Pop(1)
0x187: Push((int) 523282)
0x188: @@ SetMessage(Stack[-1])
0x189: Pop(1)
0x18a: @@ ClearReplies()
0x18b: Pop(0)
0x18c: Push((int) 523288)
0x18d: Push((int) 24494)
0x18e: Push((int) 24493)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Push((int) 523316)
0x192: Push((int) 24498)
0x193: Push((int) 24529)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: Return(); Pop(0)

0x197: Push((int) 24494)
0x198: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x199: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x19a: PushEmpty(string)
0x19b: Stack[-1] = "Neutral"
0x19c: Call2 0xb3

0x19d: Pop(1)
0x19e: Push((int) 523289)
0x19f: @@ SetMessage(Stack[-1])
0x1a0: Pop(1)
0x1a1: @@ ClearReplies()
0x1a2: Pop(0)
0x1a3: Push((int) 523292)
0x1a4: Push((int) 24498)
0x1a5: Push((int) 24497)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: Return(); Pop(0)

0x1a9: Push((int) 24498)
0x1aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1ac: PushEmpty(string)
0x1ad: Stack[-1] = "Neutral"
0x1ae: Call2 0xb3

0x1af: Pop(1)
0x1b0: Push((int) 523293)
0x1b1: @@ SetMessage(Stack[-1])
0x1b2: Pop(1)
0x1b3: @@ ClearReplies()
0x1b4: Pop(0)
0x1b5: Push((int) 523294)
0x1b6: Push((int) 24508)
0x1b7: Push((int) 24499)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: Push((int) 523295)
0x1bb: Push((int) 24501)
0x1bc: Push((int) 24500)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: Return(); Pop(0)

0x1c0: Push((int) 24501)
0x1c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1c3: PushEmpty(string)
0x1c4: Stack[-1] = "Neutral"
0x1c5: Call2 0xb3

0x1c6: Pop(1)
0x1c7: Push((int) 523296)
0x1c8: @@ SetMessage(Stack[-1])
0x1c9: Pop(1)
0x1ca: @@ ClearReplies()
0x1cb: Pop(0)
0x1cc: Push((int) 523301)
0x1cd: Push((int) 24508)
0x1ce: Push((int) 24507)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: Push((int) 523297)
0x1d2: Push((int) -1)
0x1d3: Push((int) 24502)
0x1d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d5: Pop(3)
0x1d6: Return(); Pop(0)

0x1d7: Push((int) 24508)
0x1d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1da: PushEmpty(string)
0x1db: Stack[-1] = "Neutral"
0x1dc: Call2 0xb3

0x1dd: Pop(1)
0x1de: Push((int) 523302)
0x1df: @@ SetMessage(Stack[-1])
0x1e0: Pop(1)
0x1e1: @@ ClearReplies()
0x1e2: Pop(0)
0x1e3: Push((int) 523303)
0x1e4: Push((int) -1)
0x1e5: Push((int) 24509)
0x1e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e7: Pop(3)
0x1e8: Push((int) 523317)
0x1e9: Push((int) -1)
0x1ea: Push((int) 24531)
0x1eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ec: Pop(3)
0x1ed: Return(); Pop(0)

0x1ee: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ef: PushEmpty(bool)
0x1f0: Call2 0x49a

0x1f1: Pop(0)
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f3: @ lshStopAnimation()
0x1f4: Pop(0)
0x1f5: GOTO 0x1f8

0x1f6: @ StopAnimation()
0x1f7: Pop(0)
0x1f8: Return(); Pop(0)

0x1f9: GOTO 0xca

0x1fa: Return(); Pop(0)

0x1fb: PushEmpty()
0x1fc: PushEmpty(int, object)
0x1fd: Stack[-1] = Stack[-3]
0x1fe: Push(-2, 1); TaskCall(0)
0x1ff: Call2 0x0

0x200: Pop(-2, 1); TaskReturn
0x201: Pop(2)
0x202: Return(); Pop(0)

0x203: PushEmpty()
0x204: Call2 0x22c

0x205: Pop(0)
0x206: Return(); Pop(0)

0x207: PushEmpty(bool, bool)
0x208: Push("cleanup")
0x209: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x20b: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x20c: @ IsLoaded(Stack[-1])
0x20d: Pop(0)
0x20e: Pop(0); Push((bool) Stack[-1] == 0)
0x20f: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x210: PushEmpty(object)
0x211: Call2 0x45c

0x212: Pop(0)
0x213: @ RemoveActor(Stack[-1])
0x214: Pop(1)
0x215: GOTO 0x21a

0x216: Push("restore")
0x217: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x219: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x21a: Return(); Pop(2)

0x21b: Push( Stack[1 + Tasks[-1].StackPointer] )
0x21c: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x21d: PushEmpty(object)
0x21e: Call2 0x45c

0x21f: Pop(0)
0x220: @ RemoveActor(Stack[-1])
0x221: Pop(1)
0x222: @ Hold()
0x223: Pop(0)
0x224: PushEmpty()
0x225: Call2 0x297

0x226: Pop(0)
0x227: Return(); Pop(0)

0x228: PushEmpty()
0x229: Call2 0x2a6

0x22a: Pop(0)
0x22b: Return(); Pop(0)

0x22c: PushEmpty(bool)
0x22d: Call2 0x343

0x22e: Pop(0)
0x22f: Pop(1); Push((bool) Stack[-1] == 0)
0x230: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x231: @ Hold()
0x232: Pop(0)
0x233: @ GetDirection(Stack[-0])
0x234: Pop(0)
0x235: PushEmpty()
0x236: Call2 0x2dc

0x237: Pop(0)
0x238: GOTO 0x235

0x239: Return(); Pop(0)

0x23a: PushEmpty(object, object)
0x23b: Push("player")
0x23c: @ FindActor(Stack[-2], Stack[-1])
0x23d: Pop(1)
0x23e: Pop(0); Push((bool) Stack[-1] == 0)
0x23f: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x240: Stack[-3] = (bool) 0
0x241: Return(); Pop(2)

0x242: PushEmpty(bool, object)
0x243: Stack[-1] = Stack[-3]
0x244: Call2 0x33a

0x245: Stack[-5] = Stack[-2]
0x246: Pop(2)
0x247: Return(); Pop(2)

0x248: Stack[-1] = 0
0x249: Push(CvectorIndex(Stack[-0], 0))
0x24a: Push(CvectorIndex(Stack[-0], 2))
0x24b: @ RotateAsync(Stack[-2], Stack[-1])
0x24c: Pop(2)
0x24d: Return(); Pop(0)

0x24e: PushEmpty(object, bool, object, bool)
0x24f: Push("player")
0x250: @ FindActor(Stack[-3], Stack[-1])
0x251: Pop(1)
0x252: Pop(0); Push((bool) Stack[-2] == 0)
0x253: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x254: Stack[-5] = (bool) 0
0x255: Return(); Pop(4)

0x256: PushEmpty(float, object)
0x257: Stack[-1] = Stack[-4]
0x258: Call2 0x328

0x259: Pop(1)
0x25a: Push((float)90000.0)
0x25b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x25c: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25d: Stack[-5] = (bool) 0
0x25e: Return(); Pop(4)

0x25f: @ CanSee(Stack[-1], Stack[-2])
0x260: Pop(0)
0x261: Stack[-5] = Stack[-1]
0x262: Return(); Pop(4)

0x263: Stack[-2] = 0
0x264: PushEmpty(float, float)
0x265: Push((int) 8)
0x266: Push((int) 16)
0x267: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x268: Pop(2)
0x269: Push((int) 10)
0x26a: @ SetTimer(Stack[-1], Stack[-2])
0x26b: Pop(1)
0x26c: Return(); Pop(2)

0x26d: Push((int) 10)
0x26e: @ KillTimer(Stack[-1])
0x26f: Pop(1)
0x270: Return(); Pop(0)

0x271: PushEmpty()
0x272: Push((int) 10)
0x273: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x274: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x275: PushEmpty()
0x276: Call2 0x26d

0x277: Pop(0)
0x278: PushEmpty(bool)
0x279: Stack[-1] = (bool) 0
0x27a: PushEmpty(bool)
0x27b: Call2 0x343

0x27c: Pop(0)
0x27d: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x27e: PushEmpty(bool)
0x27f: Call2 0x24e

0x280: Pop(0)
0x281: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x282: Stack[-1] = (bool) 1
0x283: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x284: PushEmpty(bool)
0x285: Call2 0x23a

0x286: Pop(0)
0x287: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x288: PushEmpty(bool, object)
0x289: PushEmpty(object)
0x28a: Call2 0x45c

0x28b: Stack[-2] = Stack[-1]
0x28c: Pop(1)
0x28d: Call2 0x3d7

0x28e: Pop(2)
0x28f: GOTO 0x296

0x290: PushEmpty()
0x291: Call2 0x249

0x292: Pop(0)
0x293: PushEmpty()
0x294: Call2 0x264

0x295: Pop(0)
0x296: Return(); Pop(0)

0x297: PushEmpty()
0x298: Call2 0x323

0x299: Pop(0)
0x29a: PushEmpty()
0x29b: Call2 0x26d

0x29c: Pop(0)
0x29d: @ lshStopSpeech()
0x29e: Pop(0)
0x29f: @ lshStopAnimation()
0x2a0: Pop(0)
0x2a1: @ StopAsync()
0x2a2: Pop(0)
0x2a3: @ Hold()
0x2a4: Pop(0)
0x2a5: Return(); Pop(0)

0x2a6: @ StopGroup0()
0x2a7: Pop(0)
0x2a8: PushEmpty()
0x2a9: Call2 0x26d

0x2aa: Pop(0)
0x2ab: PushEmpty(string)
0x2ac: Stack[-1] = "Neutral"
0x2ad: Call2 0x427

0x2ae: Pop(1)
0x2af: PushEmpty()
0x2b0: Call2 0x264

0x2b1: Pop(0)
0x2b2: Return(); Pop(0)

0x2b3: PushEmpty()
0x2b4: Push(Stack[-1])
0x2b5: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b6: PushEmpty()
0x2b7: Call2 0x264

0x2b8: Pop(0)
0x2b9: GOTO 0x2be

0x2ba: PushEmpty(string)
0x2bb: Stack[-1] = "Neutral"
0x2bc: Call2 0x427

0x2bd: Pop(1)
0x2be: Return(); Pop(0)

0x2bf: PushEmpty(bool, bool)
0x2c0: @ IsOverrideActive(Stack[-1])
0x2c1: Pop(0)
0x2c2: Pop(0); Push((bool) Stack[-1] == 0)
0x2c3: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2c4: EventDisable(0)
0x2c5: PushEmpty()
0x2c6: Call2 0x323

0x2c7: Pop(0)
0x2c8: PushEmpty(bool, object)
0x2c9: Stack[-1] = Stack[-5]
0x2ca: Call2 0x33a

0x2cb: Pop(2)
0x2cc: EventEnable(0)
0x2cd: PushEmpty(object)
0x2ce: Stack[-1] = Stack[-4]
0x2cf: Call2 0x1fb

0x2d0: Pop(1)
0x2d1: PushEmpty(string)
0x2d2: Stack[-1] = "Neutral"
0x2d3: Call2 0x427

0x2d4: Pop(1)
0x2d5: PushEmpty()
0x2d6: Call2 0x26d

0x2d7: Pop(0)
0x2d8: PushEmpty()
0x2d9: Call2 0x264

0x2da: Pop(0)
0x2db: Return(); Pop(2)

0x2dc: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x2dd: @ WaitForAnimEnd()
0x2de: Pop(0)
0x2df: PushEmpty(bool)
0x2e0: Call2 0x343

0x2e1: Pop(0)
0x2e2: Pop(1); Push((bool) Stack[-1] == 0)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e4: Return(); Pop(12)

0x2e5: PushEmpty(int)
0x2e6: Call2 0x481

0x2e7: Stack[-7] = Stack[-1]
0x2e8: Pop(1)
0x2e9: Stack[-5] = (int) 0
0x2ea: PushEmpty(bool)
0x2eb: Stack[-1] = (bool) 0
0x2ec: Push((int) 5)
0x2ed: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2ef: PushEmpty(bool)
0x2f0: Call2 0x343

0x2f1: Pop(0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f3: Stack[-1] = (bool) 1
0x2f4: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x2f5: Pop(0); Push((bool) Stack[-6] == 0)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f7: Push((int) 3)
0x2f8: @ Sleep(Stack[-1], Stack[-5])
0x2f9: Pop(1)
0x2fa: Pop(0); Push((bool) Stack[-4] == 0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fc: GOTO 0x31e

0x2fd: GOTO 0x313

0x2fe: @ irand(Stack[-3], Stack[-6])
0x2ff: Pop(0)
0x300: Push((int) 5)
0x301: @ irand(Stack[-3], Stack[-1])
0x302: Pop(1)
0x303: Push((int) 0)
0x304: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x305: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x306: Stack[-3] = (int) 0
0x307: Push("all")
0x308: PushEmpty(string, int)
0x309: Stack[-1] = Stack[-6]
0x30a: Call2 0x47a

0x30b: Pop(1)
0x30c: @ PlayAnimation(Stack[-2], Stack[-1])
0x30d: Pop(2)
0x30e: @ WaitForAnimEnd(Stack[-1])
0x30f: Pop(0)
0x310: Pop(0); Push((bool) Stack[-1] == 0)
0x311: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x312: GOTO 0x31e

0x313: PushEmpty(bool)
0x314: Call2 0x321

0x315: Pop(0)
0x316: Pop(1); Push((bool) Stack[-1] == 0)
0x317: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x318: GOTO 0x31e

0x319: @ ResetAAS()
0x31a: Pop(0)
0x31b: Push((int) 1)
0x31c: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x31d: GOTO 0x2ea

0x31e: @ ResetAAS()
0x31f: Pop(0)
0x320: Return(); Pop(12)

0x321: Stack[-1] = (bool) 1
0x322: Return(); Pop(0)

0x323: @ StopAnimation()
0x324: Pop(0)
0x325: @ StopGroup0()
0x326: Pop(0)
0x327: Return(); Pop(0)

0x328: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x329: @ GetPosition(Stack[-3])
0x32a: Pop(0)
0x32b: @@ GetPosition(Stack[-2])
0x32c: Pop(0)
0x32d: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x32e: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x32f: Return(); Pop(6)

0x330: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x331: @ GetPosition(Stack[-3])
0x332: Pop(0)
0x333: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x334: Push(CvectorIndex(Stack[-2], 0))
0x335: Push(CvectorIndex(Stack[-3], 2))
0x336: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x337: Pop(2)
0x338: Stack[-8] = Stack[-1]
0x339: Return(); Pop(6)

0x33a: PushEmpty(cvector, cvector)
0x33b: @@ GetPosition(Stack[-1])
0x33c: Pop(0)
0x33d: PushEmpty(bool, cvector)
0x33e: Stack[-1] = Stack[-3]
0x33f: Call2 0x330

0x340: Stack[-6] = Stack[-2]
0x341: Pop(2)
0x342: Return(); Pop(2)

0x343: PushEmpty(bool, bool)
0x344: @ IsLoaded(Stack[-1])
0x345: Pop(0)
0x346: Stack[-3] = Stack[-1]
0x347: Return(); Pop(2)

0x348: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x349: @@ GetPosition(Stack[-8])
0x34a: Pop(0)
0x34b: @@ GetEyesHeight(Stack[-9])
0x34c: Pop(0)
0x34d: Push(CvectorIndex(Stack[-8], 1))
0x34e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x34f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x350: @ GetPosition(Stack[-7])
0x351: Pop(0)
0x352: @ GetEyesHeight(Stack[-9])
0x353: Pop(0)
0x354: Push(CvectorIndex(Stack[-7], 1))
0x355: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x356: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x357: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x358: Push(CvectorIndex(Stack[-6], 1))
0x359: Stack[-1] = (int) 0
0x35a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x35b: Pop(0); Push(Stack[-6] | Stack[-6]);
0x35c: Pop(1); Push(Sqrt(Stack[-1]))
0x35d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x35e: Stack[-5] = -Stack[-6]; Pop(0);
0x35f: Pop(0); Push(Stack[-6] * Stack[-19]);
0x360: PushEmpty(cvector, cvector)
0x361: Push(CVector(0.0, 1.0, 0.0))
0x362: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x363: Call2 0x462

0x364: Pop(1)
0x365: Push((int) 25)
0x366: Pop(2); Push(Stack[-2] * Stack[-1]);
0x367: Pop(2); Push(Stack[-2] + Stack[-1]);
0x368: Push(CVector(0.0, 10.0, 0.0))
0x369: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x36a: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x36b: @ IsOverrideActive(Stack[-2])
0x36c: Pop(0)
0x36d: Push(Stack[-2])
0x36e: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36f: Stack[-21] = (bool) 0
0x370: Return(); Pop(18)

0x371: @ StopWorld()
0x372: Pop(0)
0x373: @ CameraTransit(Stack[-3], Stack[-5])
0x374: Pop(0)
0x375: Push(CvectorIndex(Stack[-4], 0))
0x376: Push(CvectorIndex(Stack[-5], 2))
0x377: @ Rotate(Stack[-2], Stack[-1])
0x378: Pop(2)
0x379: PushEmpty(bool)
0x37a: Call2 0x49a

0x37b: Pop(0)
0x37c: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37d: GOTO 0x386

0x37e: Push("head")
0x37f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x380: Pop(1)
0x381: Push(Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x383: Push("head")
0x384: @ LookAsyncCamera(Stack[-1])
0x385: Pop(1)
0x386: @ CameraWaitForPlayFinish()
0x387: Pop(0)
0x388: @ ResumeWorld()
0x389: Pop(0)
0x38a: Stack[-21] = (bool) 1
0x38b: Return(); Pop(18)

0x38c: PushEmpty(bool, bool)
0x38d: @ CameraSwitchToNormal()
0x38e: Pop(0)
0x38f: PushEmpty(bool)
0x390: Call2 0x49a

0x391: Pop(0)
0x392: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x393: GOTO 0x39c

0x394: Push("head")
0x395: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x396: Pop(1)
0x397: Push(Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x399: Push("head")
0x39a: @ UnlookAsync(Stack[-1])
0x39b: Pop(1)
0x39c: Return(); Pop(2)

0x39d: PushEmpty(int, int, int, int)
0x39e: Push("voice_common")
0x39f: @ GetVariable(Stack[-1], Stack[-3])
0x3a0: Pop(1)
0x3a1: Push(Stack[-2])
0x3a2: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3a3: PushEmpty(bool, object)
0x3a4: Stack[-1] = Stack[-7]
0x3a5: Call2 0x3d7

0x3a6: Pop(1)
0x3a7: Pop(1); Push((bool) Stack[-1] == 0)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3a9: PushEmpty(bool, object)
0x3aa: Stack[-1] = Stack[-7]
0x3ab: Call2 0x3fc

0x3ac: Pop(1)
0x3ad: Pop(1); Push((bool) Stack[-1] == 0)
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3af: Stack[-6] = (bool) 0
0x3b0: Return(); Pop(4)

0x3b1: Push((int) 2)
0x3b2: @ irand(Stack[-2], Stack[-1])
0x3b3: Pop(1)
0x3b4: Push(Stack[-1])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3b6: Push("voice_common")
0x3b7: Push((int) 1)
0x3b8: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3b9: Push((int) 3)
0x3ba: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3bb: @ SetVariable(Stack[-2], Stack[-1])
0x3bc: Pop(2)
0x3bd: GOTO 0x3c2

0x3be: Push("voice_common")
0x3bf: Push((int) 0)
0x3c0: @ SetVariable(Stack[-2], Stack[-1])
0x3c1: Pop(2)
0x3c2: GOTO 0x3d5

0x3c3: PushEmpty(bool, object)
0x3c4: Stack[-1] = Stack[-7]
0x3c5: Call2 0x3fc

0x3c6: Pop(1)
0x3c7: Pop(1); Push((bool) Stack[-1] == 0)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3c9: PushEmpty(bool, object)
0x3ca: Stack[-1] = Stack[-7]
0x3cb: Call2 0x3d7

0x3cc: Pop(1)
0x3cd: Pop(1); Push((bool) Stack[-1] == 0)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3cf: Stack[-6] = (bool) 0
0x3d0: Return(); Pop(4)

0x3d1: Push("voice_common")
0x3d2: Push((int) 1)
0x3d3: @ SetVariable(Stack[-2], Stack[-1])
0x3d4: Pop(2)
0x3d5: Stack[-6] = (bool) 1
0x3d6: Return(); Pop(4)

0x3d7: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3d8: Stack[-5] = "c"
0x3d9: Stack[-4] = (int) 0
0x3da: Push((int) 1)
0x3db: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3dc: Push((int) 1)
0x3dd: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3de: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3df: @@ HasProperty(Stack[-1], Stack[-4])
0x3e0: Pop(1)
0x3e1: Pop(0); Push((bool) Stack[-3] == 0)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e3: GOTO 0x3e7

0x3e4: Push((int) 1)
0x3e5: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3e6: GOTO 0x3da

0x3e7: Pop(0); Push((bool) Stack[-4] == 0)
0x3e8: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e9: Stack[-12] = (bool) 0
0x3ea: Return(); Pop(10)

0x3eb: Stack[-2] = (int) 0
0x3ec: Push((int) 1)
0x3ed: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ef: @ irand(Stack[-2], Stack[-4])
0x3f0: Pop(0)
0x3f1: Push((int) 1)
0x3f2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3f3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3f4: @@ GetProperty(Stack[-1], Stack[-2])
0x3f5: Pop(1)
0x3f6: PushEmpty(bool, string)
0x3f7: Stack[-1] = Stack[-3]
0x3f8: Call2 0x446

0x3f9: Stack[-14] = Stack[-2]
0x3fa: Pop(2)
0x3fb: Return(); Pop(10)

0x3fc: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3fd: Push("d")
0x3fe: PushEmpty(int)
0x3ff: Call2 0x471

0x400: Pop(0)
0x401: Pop(2); Push(Stack[-2] + Stack[-1]);
0x402: Push("m")
0x403: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x404: Stack[-4] = (int) 0
0x405: Push((int) 1)
0x406: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x407: Push((int) 1)
0x408: Pop(1); Push(Stack[-5] + Stack[-1]);
0x409: Pop(1); Push(Stack[-6] + Stack[-1]);
0x40a: @@ HasProperty(Stack[-1], Stack[-4])
0x40b: Pop(1)
0x40c: Pop(0); Push((bool) Stack[-3] == 0)
0x40d: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40e: GOTO 0x412

0x40f: Push((int) 1)
0x410: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x411: GOTO 0x405

0x412: Pop(0); Push((bool) Stack[-4] == 0)
0x413: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x414: Stack[-12] = (bool) 0
0x415: Return(); Pop(10)

0x416: Stack[-2] = (int) 0
0x417: Push((int) 1)
0x418: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x419: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x41a: @ irand(Stack[-2], Stack[-4])
0x41b: Pop(0)
0x41c: Push((int) 1)
0x41d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x41e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x41f: @@ GetProperty(Stack[-1], Stack[-2])
0x420: Pop(1)
0x421: PushEmpty(bool, string)
0x422: Stack[-1] = Stack[-3]
0x423: Call2 0x446

0x424: Stack[-14] = Stack[-2]
0x425: Pop(2)
0x426: Return(); Pop(10)

0x427: PushEmpty(bool, float, float, bool, float, float)
0x428: @ lshHasAnimation(Stack[-3], Stack[-7])
0x429: Pop(0)
0x42a: Push(Stack[-3])
0x42b: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x42c: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x42d: Pop(0)
0x42e: Push((bool) 0)
0x42f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x430: Pop(1)
0x431: GOTO 0x436

0x432: Push("Can't find lsh animation : ")
0x433: Pop(1); Push(Stack[-1] + Stack[-8]);
0x434: @ Trace(Stack[-1])
0x435: Pop(1)
0x436: Return(); Pop(6)

0x437: PushEmpty(bool, float, float, bool, float, float)
0x438: @ lshHasAnimation(Stack[-3], Stack[-8])
0x439: Pop(0)
0x43a: Push(Stack[-3])
0x43b: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x43c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x43d: Pop(0)
0x43e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x43f: Pop(0)
0x440: GOTO 0x445

0x441: Push("Can't find lsh animation : ")
0x442: Pop(1); Push(Stack[-1] + Stack[-9]);
0x443: @ Trace(Stack[-1])
0x444: Pop(1)
0x445: Return(); Pop(6)

0x446: PushEmpty(bool, bool)
0x447: PushEmpty(bool)
0x448: Call2 0x49a

0x449: Pop(0)
0x44a: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x44b: @ lshHasSpeech(Stack[-1], Stack[-3])
0x44c: Pop(0)
0x44d: Push(Stack[-1])
0x44e: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x44f: @ lshPlaySpeech(Stack[-3])
0x450: Pop(0)
0x451: Stack[-4] = (bool) 1
0x452: Return(); Pop(2)

0x453: Stack[-4] = (bool) 0
0x454: Return(); Pop(2)

0x455: PushEmpty(bool)
0x456: Call2 0x49a

0x457: Pop(0)
0x458: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x459: @ lshStopSpeech()
0x45a: Pop(0)
0x45b: Return(); Pop(0)

0x45c: PushEmpty(object, object)
0x45d: @ self(Stack[-1])
0x45e: Pop(0)
0x45f: Stack[-3] = Stack[-1]
0x460: Return(); Pop(2)

0x461: Stack[-1] = 0
0x462: PushEmpty(float, float)
0x463: Pop(0); Push(Stack[-3] | Stack[-3]);
0x464: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x465: Push((float)0.0)
0x466: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x467: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x468: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x469: Return(); Pop(2)

0x46a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x46b: Return(); Pop(2)

0x46c: PushEmpty(int, int)
0x46d: @ GetVariable(Stack[-3], Stack[-1])
0x46e: Pop(0)
0x46f: Stack[-4] = Stack[-1]
0x470: Return(); Pop(2)

0x471: PushEmpty(float, float)
0x472: @ GetGameTime(Stack[-1])
0x473: Pop(0)
0x474: Push((int) 1)
0x475: PushEmpty(int)
0x476: Push((int) 24)
0x477: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x478: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x479: Return(); Pop(2)

0x47a: PushEmpty(string, string)
0x47b: Stack[-1] = "idle"
0x47c: Push(Stack[-3])
0x47d: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x47e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x47f: Stack[-4] = Stack[-1]
0x480: Return(); Pop(2)

0x481: PushEmpty(int, bool, int, bool)
0x482: Stack[-2] = (int) 0
0x483: Push("all")
0x484: PushEmpty(string, int)
0x485: Stack[-1] = Stack[-5]
0x486: Call2 0x47a

0x487: Pop(1)
0x488: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x489: Pop(2)
0x48a: Pop(0); Push((bool) Stack[-1] == 0)
0x48b: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x48c: GOTO 0x490

0x48d: Push((int) 1)
0x48e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x48f: GOTO 0x483

0x490: Stack[-5] = Stack[-2]
0x491: Return(); Pop(4)

0x492: Stack[-1] = (int) 515540
0x493: Return(); Pop(0)

0x494: Stack[-1] = (int) 502865
0x495: Return(); Pop(0)

0x496: Stack[-1] = "ui/NPC_Klara.png"
0x497: Return(); Pop(0)

0x498: Stack[-1] = "ui/NPC_Klara_b.png"
0x499: Return(); Pop(0)

0x49a: Stack[-1] = (bool) 1
0x49b: Return(); Pop(0)

0x49c: PushEmpty()
0x49d: Push("oob11KlaraD1")
0x49e: Push((int) 1)
0x49f: @ SetVariable(Stack[-2], Stack[-1])
0x4a0: Pop(2)
0x4a1: Return(); Pop(0)

0x4a2: PushEmpty()
0x4a3: PushEmpty(int, string)
0x4a4: Stack[-1] = "b11q01VictimChoosed"
0x4a5: Call2 0x46c

0x4a6: Pop(1)
0x4a7: Push((int) 0)
0x4a8: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4aa: Stack[-2] = (bool) 1
0x4ab: Return(); Pop(0)

0x4ac: Stack[-2] = (bool) 0
0x4ad: Return(); Pop(0)

0x4ae: PushEmpty()
0x4af: PushEmpty(int, string)
0x4b0: Stack[-1] = "oob11KlaraD1"
0x4b1: Call2 0x46c

0x4b2: Pop(1)
0x4b3: Push((int) 0)
0x4b4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b6: Stack[-2] = (bool) 1
0x4b7: Return(); Pop(0)

0x4b8: Stack[-2] = (bool) 0
0x4b9: Return(); Pop(0)

0x4ba: PushEmpty(int, int)
0x4bb: Push("branch")
0x4bc: @ GetVariable(Stack[-1], Stack[-2])
0x4bd: Pop(1)
0x4be: Push((int) 0)
0x4bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c1: Stack[-3] = (int) 1
0x4c2: Return(); Pop(2)

0x4c3: GOTO 0x4c9

0x4c4: Push((int) 1)
0x4c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c6: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c7: Stack[-3] = (int) 2
0x4c8: Return(); Pop(2)

0x4c9: Stack[-3] = (int) 3
0x4ca: Return(); Pop(2)

