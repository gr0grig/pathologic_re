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
	Sly
	Untrust
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
	oob2MladVladFactory1
	oob2MladVladFactory2
	oob2MladVladFactory3
	quest_b2_01
	remove_mladvlad
	branch
	ui/NPC_MladVlad.png
	ui/NPC_MladVlad_b.png

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

RunOp = 0x1dd
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xba Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1e1 Vars = (string)
		EVENT_6 Op = 0x1f5 Vars = ()
		EVENT_5 Op = 0x202 Vars = ()
		EVENT_7 Op = 0x24b Vars = (int)
		EVENT_45 Op = 0x28d Vars = (bool)
		EVENT_0 Op = 0x299 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x322

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x4e7

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x4e5

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x4e9

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x4eb

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4d4

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
0x31: Call2 0x438

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x379

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
0x48: Call2 0x367

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

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0xa4

0x5a: Pop(1)
0x5b: Push((int) 520225)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x4b0

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 520226)
0x66: Push((int) 21419)
0x67: Push((int) 21418)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: PushEmpty(bool, object)
0x6b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c: Call2 0x4bc

0x6d: Pop(1)
0x6e: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6f: Push((int) 520231)
0x70: Push((int) 21424)
0x71: Push((int) 21423)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0x4c8

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x79: Push((int) 520239)
0x7a: Push((int) 21432)
0x7b: Push((int) 21431)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: Push((int) 520246)
0x7f: Push((int) -1)
0x80: Push((int) 21438)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: GOTO 0x86

0x84: Return(); Pop(0)

0x85: GOTO 0x55

0x86: PushEmpty(bool)
0x87: Call2 0x4ed

0x88: Pop(0)
0x89: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8a: @ lshWaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: PushEmpty(string)
0x90: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x91: Call2 0x403

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
0xa6: Call2 0x4ed

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
0xb6: Call2 0x413

0xb7: Pop(2)
0xb8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: Push((int) 1)
0xbc: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0xbd: PushEmpty()
0xbe: Call2 0x431

0xbf: Pop(0)
0xc0: Push((int) 21418)
0xc1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call2 0x47a

0xc7: Pop(2)
0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x48c

0xcc: Pop(2)
0xcd: Push((int) 21423)
0xce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x480

0xd4: Pop(2)
0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x48c

0xd9: Pop(2)
0xda: Push((int) 21431)
0xdb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xdd: PushEmpty(object, object)
0xde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0x486

0xe1: Pop(2)
0xe2: PushEmpty(object, object)
0xe3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5: Call2 0x48c

0xe6: Pop(2)
0xe7: Push((int) 21417)
0xe8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0xea: PushEmpty(string)
0xeb: Stack[-1] = "Neutral"
0xec: Call2 0xa4

0xed: Pop(1)
0xee: Push((int) 520225)
0xef: @@ SetMessage(Stack[-1])
0xf0: Pop(1)
0xf1: @@ ClearReplies()
0xf2: Pop(0)
0xf3: PushEmpty(bool, object)
0xf4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Call2 0x4b0

0xf6: Pop(1)
0xf7: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf8: Push((int) 520226)
0xf9: Push((int) 21419)
0xfa: Push((int) 21418)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: PushEmpty(bool, object)
0xfe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xff: Call2 0x4bc

0x100: Pop(1)
0x101: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x102: Push((int) 520231)
0x103: Push((int) 21424)
0x104: Push((int) 21423)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: PushEmpty(bool, object)
0x108: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x109: Call2 0x4c8

0x10a: Pop(1)
0x10b: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10c: Push((int) 520239)
0x10d: Push((int) 21432)
0x10e: Push((int) 21431)
0x10f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110: Pop(3)
0x111: Push((int) 520246)
0x112: Push((int) -1)
0x113: Push((int) 21438)
0x114: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115: Pop(3)
0x116: Return(); Pop(0)

0x117: Push((int) 21432)
0x118: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x11a: PushEmpty(string)
0x11b: Stack[-1] = "Sly"
0x11c: Call2 0xa4

0x11d: Pop(1)
0x11e: Push((int) 520240)
0x11f: @@ SetMessage(Stack[-1])
0x120: Pop(1)
0x121: @@ ClearReplies()
0x122: Pop(0)
0x123: Push((int) 520241)
0x124: Push((int) 21434)
0x125: Push((int) 21433)
0x126: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x127: Pop(3)
0x128: Return(); Pop(0)

0x129: Push((int) 21434)
0x12a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x12c: PushEmpty(string)
0x12d: Stack[-1] = "Neutral"
0x12e: Call2 0xa4

0x12f: Pop(1)
0x130: Push((int) 520242)
0x131: @@ SetMessage(Stack[-1])
0x132: Pop(1)
0x133: @@ ClearReplies()
0x134: Pop(0)
0x135: Push((int) 520243)
0x136: Push((int) 21436)
0x137: Push((int) 21435)
0x138: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x139: Pop(3)
0x13a: Push((int) 530818)
0x13b: Push((int) 32128)
0x13c: Push((int) 32127)
0x13d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e: Pop(3)
0x13f: Return(); Pop(0)

0x140: Push((int) 32128)
0x141: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Neutral"
0x145: Call2 0xa4

0x146: Pop(1)
0x147: Push((int) 530819)
0x148: @@ SetMessage(Stack[-1])
0x149: Pop(1)
0x14a: @@ ClearReplies()
0x14b: Pop(0)
0x14c: Push((int) 530820)
0x14d: Push((int) 21436)
0x14e: Push((int) 32129)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: Return(); Pop(0)

0x152: Push((int) 21436)
0x153: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x155: PushEmpty(string)
0x156: Stack[-1] = "Neutral"
0x157: Call2 0xa4

0x158: Pop(1)
0x159: Push((int) 520244)
0x15a: @@ SetMessage(Stack[-1])
0x15b: Pop(1)
0x15c: @@ ClearReplies()
0x15d: Pop(0)
0x15e: Push((int) 520245)
0x15f: Push((int) -1)
0x160: Push((int) 21437)
0x161: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x162: Pop(3)
0x163: Push((int) 527839)
0x164: Push((int) -1)
0x165: Push((int) 29182)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Return(); Pop(0)

0x169: Push((int) 21424)
0x16a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Neutral"
0x16e: Call2 0xa4

0x16f: Pop(1)
0x170: Push((int) 520232)
0x171: @@ SetMessage(Stack[-1])
0x172: Pop(1)
0x173: @@ ClearReplies()
0x174: Pop(0)
0x175: Push((int) 520233)
0x176: Push((int) 21426)
0x177: Push((int) 21425)
0x178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: Return(); Pop(0)

0x17b: Push((int) 21426)
0x17c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x17e: PushEmpty(string)
0x17f: Stack[-1] = "Untrust"
0x180: Call2 0xa4

0x181: Pop(1)
0x182: Push((int) 520234)
0x183: @@ SetMessage(Stack[-1])
0x184: Pop(1)
0x185: @@ ClearReplies()
0x186: Pop(0)
0x187: Push((int) 520235)
0x188: Push((int) 21428)
0x189: Push((int) 21427)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: Push((int) 520238)
0x18d: Push((int) -1)
0x18e: Push((int) 21430)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Return(); Pop(0)

0x192: Push((int) 21428)
0x193: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x195: PushEmpty(string)
0x196: Stack[-1] = "Neutral"
0x197: Call2 0xa4

0x198: Pop(1)
0x199: Push((int) 520236)
0x19a: @@ SetMessage(Stack[-1])
0x19b: Pop(1)
0x19c: @@ ClearReplies()
0x19d: Pop(0)
0x19e: Push((int) 520237)
0x19f: Push((int) -1)
0x1a0: Push((int) 21429)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 21419)
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = "Untrust"
0x1a9: Call2 0xa4

0x1aa: Pop(1)
0x1ab: Push((int) 520227)
0x1ac: @@ SetMessage(Stack[-1])
0x1ad: Pop(1)
0x1ae: @@ ClearReplies()
0x1af: Pop(0)
0x1b0: Push((int) 520228)
0x1b1: Push((int) 21421)
0x1b2: Push((int) 21420)
0x1b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4: Pop(3)
0x1b5: Return(); Pop(0)

0x1b6: Push((int) 21421)
0x1b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1b9: PushEmpty(string)
0x1ba: Stack[-1] = "Neutral"
0x1bb: Call2 0xa4

0x1bc: Pop(1)
0x1bd: Push((int) 520229)
0x1be: @@ SetMessage(Stack[-1])
0x1bf: Pop(1)
0x1c0: @@ ClearReplies()
0x1c1: Pop(0)
0x1c2: Push((int) 520230)
0x1c3: Push((int) -1)
0x1c4: Push((int) 21422)
0x1c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c6: Pop(3)
0x1c7: Return(); Pop(0)

0x1c8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c9: PushEmpty(bool)
0x1ca: Call2 0x4ed

0x1cb: Pop(0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cd: @ lshStopAnimation()
0x1ce: Pop(0)
0x1cf: GOTO 0x1d2

0x1d0: @ StopAnimation()
0x1d1: Pop(0)
0x1d2: Return(); Pop(0)

0x1d3: GOTO 0xbb

0x1d4: Return(); Pop(0)

0x1d5: PushEmpty()
0x1d6: PushEmpty(int, object)
0x1d7: Stack[-1] = Stack[-3]
0x1d8: Push(-2, 1); TaskCall(0)
0x1d9: Call2 0x0

0x1da: Pop(-2, 1); TaskReturn
0x1db: Pop(2)
0x1dc: Return(); Pop(0)

0x1dd: PushEmpty()
0x1de: Call2 0x206

0x1df: Pop(0)
0x1e0: Return(); Pop(0)

0x1e1: PushEmpty(bool, bool)
0x1e2: Push("cleanup")
0x1e3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1e5: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1e6: @ IsLoaded(Stack[-1])
0x1e7: Pop(0)
0x1e8: Pop(0); Push((bool) Stack[-1] == 0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ea: PushEmpty(object)
0x1eb: Call2 0x438

0x1ec: Pop(0)
0x1ed: @ RemoveActor(Stack[-1])
0x1ee: Pop(1)
0x1ef: GOTO 0x1f4

0x1f0: Push("restore")
0x1f1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f3: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1f4: Return(); Pop(2)

0x1f5: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1f7: PushEmpty(object)
0x1f8: Call2 0x438

0x1f9: Pop(0)
0x1fa: @ RemoveActor(Stack[-1])
0x1fb: Pop(1)
0x1fc: @ Hold()
0x1fd: Pop(0)
0x1fe: PushEmpty()
0x1ff: Call2 0x271

0x200: Pop(0)
0x201: Return(); Pop(0)

0x202: PushEmpty()
0x203: Call2 0x280

0x204: Pop(0)
0x205: Return(); Pop(0)

0x206: PushEmpty(bool)
0x207: Call2 0x31d

0x208: Pop(0)
0x209: Pop(1); Push((bool) Stack[-1] == 0)
0x20a: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20b: @ Hold()
0x20c: Pop(0)
0x20d: @ GetDirection(Stack[-0])
0x20e: Pop(0)
0x20f: PushEmpty()
0x210: Call2 0x2b6

0x211: Pop(0)
0x212: GOTO 0x20f

0x213: Return(); Pop(0)

0x214: PushEmpty(object, object)
0x215: Push("player")
0x216: @ FindActor(Stack[-2], Stack[-1])
0x217: Pop(1)
0x218: Pop(0); Push((bool) Stack[-1] == 0)
0x219: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x21a: Stack[-3] = (bool) 0
0x21b: Return(); Pop(2)

0x21c: PushEmpty(bool, object)
0x21d: Stack[-1] = Stack[-3]
0x21e: Call2 0x314

0x21f: Stack[-5] = Stack[-2]
0x220: Pop(2)
0x221: Return(); Pop(2)

0x222: Stack[-1] = 0
0x223: Push(CvectorIndex(Stack[-0], 0))
0x224: Push(CvectorIndex(Stack[-0], 2))
0x225: @ RotateAsync(Stack[-2], Stack[-1])
0x226: Pop(2)
0x227: Return(); Pop(0)

0x228: PushEmpty(object, bool, object, bool)
0x229: Push("player")
0x22a: @ FindActor(Stack[-3], Stack[-1])
0x22b: Pop(1)
0x22c: Pop(0); Push((bool) Stack[-2] == 0)
0x22d: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22e: Stack[-5] = (bool) 0
0x22f: Return(); Pop(4)

0x230: PushEmpty(float, object)
0x231: Stack[-1] = Stack[-4]
0x232: Call2 0x302

0x233: Pop(1)
0x234: Push((float)90000.0)
0x235: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x237: Stack[-5] = (bool) 0
0x238: Return(); Pop(4)

0x239: @ CanSee(Stack[-1], Stack[-2])
0x23a: Pop(0)
0x23b: Stack[-5] = Stack[-1]
0x23c: Return(); Pop(4)

0x23d: Stack[-2] = 0
0x23e: PushEmpty(float, float)
0x23f: Push((int) 8)
0x240: Push((int) 16)
0x241: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x242: Pop(2)
0x243: Push((int) 10)
0x244: @ SetTimer(Stack[-1], Stack[-2])
0x245: Pop(1)
0x246: Return(); Pop(2)

0x247: Push((int) 10)
0x248: @ KillTimer(Stack[-1])
0x249: Pop(1)
0x24a: Return(); Pop(0)

0x24b: PushEmpty()
0x24c: Push((int) 10)
0x24d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x24f: PushEmpty()
0x250: Call2 0x247

0x251: Pop(0)
0x252: PushEmpty(bool)
0x253: Stack[-1] = (bool) 0
0x254: PushEmpty(bool)
0x255: Call2 0x31d

0x256: Pop(0)
0x257: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x258: PushEmpty(bool)
0x259: Call2 0x228

0x25a: Pop(0)
0x25b: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25c: Stack[-1] = (bool) 1
0x25d: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x25e: PushEmpty(bool)
0x25f: Call2 0x214

0x260: Pop(0)
0x261: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x262: PushEmpty(bool, object)
0x263: PushEmpty(object)
0x264: Call2 0x438

0x265: Stack[-2] = Stack[-1]
0x266: Pop(1)
0x267: Call2 0x3b3

0x268: Pop(2)
0x269: GOTO 0x270

0x26a: PushEmpty()
0x26b: Call2 0x223

0x26c: Pop(0)
0x26d: PushEmpty()
0x26e: Call2 0x23e

0x26f: Pop(0)
0x270: Return(); Pop(0)

0x271: PushEmpty()
0x272: Call2 0x2fd

0x273: Pop(0)
0x274: PushEmpty()
0x275: Call2 0x247

0x276: Pop(0)
0x277: @ lshStopSpeech()
0x278: Pop(0)
0x279: @ lshStopAnimation()
0x27a: Pop(0)
0x27b: @ StopAsync()
0x27c: Pop(0)
0x27d: @ Hold()
0x27e: Pop(0)
0x27f: Return(); Pop(0)

0x280: @ StopGroup0()
0x281: Pop(0)
0x282: PushEmpty()
0x283: Call2 0x247

0x284: Pop(0)
0x285: PushEmpty(string)
0x286: Stack[-1] = "Neutral"
0x287: Call2 0x403

0x288: Pop(1)
0x289: PushEmpty()
0x28a: Call2 0x23e

0x28b: Pop(0)
0x28c: Return(); Pop(0)

0x28d: PushEmpty()
0x28e: Push(Stack[-1])
0x28f: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x290: PushEmpty()
0x291: Call2 0x23e

0x292: Pop(0)
0x293: GOTO 0x298

0x294: PushEmpty(string)
0x295: Stack[-1] = "Neutral"
0x296: Call2 0x403

0x297: Pop(1)
0x298: Return(); Pop(0)

0x299: PushEmpty(bool, bool)
0x29a: @ IsOverrideActive(Stack[-1])
0x29b: Pop(0)
0x29c: Pop(0); Push((bool) Stack[-1] == 0)
0x29d: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x29e: EventDisable(0)
0x29f: PushEmpty()
0x2a0: Call2 0x2fd

0x2a1: Pop(0)
0x2a2: PushEmpty(bool, object)
0x2a3: Stack[-1] = Stack[-5]
0x2a4: Call2 0x314

0x2a5: Pop(2)
0x2a6: EventEnable(0)
0x2a7: PushEmpty(object)
0x2a8: Stack[-1] = Stack[-4]
0x2a9: Call2 0x1d5

0x2aa: Pop(1)
0x2ab: PushEmpty(string)
0x2ac: Stack[-1] = "Neutral"
0x2ad: Call2 0x403

0x2ae: Pop(1)
0x2af: PushEmpty()
0x2b0: Call2 0x247

0x2b1: Pop(0)
0x2b2: PushEmpty()
0x2b3: Call2 0x23e

0x2b4: Pop(0)
0x2b5: Return(); Pop(2)

0x2b6: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x2b7: @ WaitForAnimEnd()
0x2b8: Pop(0)
0x2b9: PushEmpty(bool)
0x2ba: Call2 0x31d

0x2bb: Pop(0)
0x2bc: Pop(1); Push((bool) Stack[-1] == 0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: Return(); Pop(12)

0x2bf: PushEmpty(int)
0x2c0: Call2 0x469

0x2c1: Stack[-7] = Stack[-1]
0x2c2: Pop(1)
0x2c3: Stack[-5] = (int) 0
0x2c4: PushEmpty(bool)
0x2c5: Stack[-1] = (bool) 0
0x2c6: Push((int) 5)
0x2c7: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2c9: PushEmpty(bool)
0x2ca: Call2 0x31d

0x2cb: Pop(0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: Stack[-1] = (bool) 1
0x2ce: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2cf: Pop(0); Push((bool) Stack[-6] == 0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d1: Push((int) 3)
0x2d2: @ Sleep(Stack[-1], Stack[-5])
0x2d3: Pop(1)
0x2d4: Pop(0); Push((bool) Stack[-4] == 0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d6: GOTO 0x2f8

0x2d7: GOTO 0x2ed

0x2d8: @ irand(Stack[-3], Stack[-6])
0x2d9: Pop(0)
0x2da: Push((int) 5)
0x2db: @ irand(Stack[-3], Stack[-1])
0x2dc: Pop(1)
0x2dd: Push((int) 0)
0x2de: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2e0: Stack[-3] = (int) 0
0x2e1: Push("all")
0x2e2: PushEmpty(string, int)
0x2e3: Stack[-1] = Stack[-6]
0x2e4: Call2 0x462

0x2e5: Pop(1)
0x2e6: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e7: Pop(2)
0x2e8: @ WaitForAnimEnd(Stack[-1])
0x2e9: Pop(0)
0x2ea: Pop(0); Push((bool) Stack[-1] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2ec: GOTO 0x2f8

0x2ed: PushEmpty(bool)
0x2ee: Call2 0x2fb

0x2ef: Pop(0)
0x2f0: Pop(1); Push((bool) Stack[-1] == 0)
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f2: GOTO 0x2f8

0x2f3: @ ResetAAS()
0x2f4: Pop(0)
0x2f5: Push((int) 1)
0x2f6: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2f7: GOTO 0x2c4

0x2f8: @ ResetAAS()
0x2f9: Pop(0)
0x2fa: Return(); Pop(12)

0x2fb: Stack[-1] = (bool) 1
0x2fc: Return(); Pop(0)

0x2fd: @ StopAnimation()
0x2fe: Pop(0)
0x2ff: @ StopGroup0()
0x300: Pop(0)
0x301: Return(); Pop(0)

0x302: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x303: @ GetPosition(Stack[-3])
0x304: Pop(0)
0x305: @@ GetPosition(Stack[-2])
0x306: Pop(0)
0x307: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x308: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x309: Return(); Pop(6)

0x30a: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x30b: @ GetPosition(Stack[-3])
0x30c: Pop(0)
0x30d: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x30e: Push(CvectorIndex(Stack[-2], 0))
0x30f: Push(CvectorIndex(Stack[-3], 2))
0x310: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x311: Pop(2)
0x312: Stack[-8] = Stack[-1]
0x313: Return(); Pop(6)

0x314: PushEmpty(cvector, cvector)
0x315: @@ GetPosition(Stack[-1])
0x316: Pop(0)
0x317: PushEmpty(bool, cvector)
0x318: Stack[-1] = Stack[-3]
0x319: Call2 0x30a

0x31a: Stack[-6] = Stack[-2]
0x31b: Pop(2)
0x31c: Return(); Pop(2)

0x31d: PushEmpty(bool, bool)
0x31e: @ IsLoaded(Stack[-1])
0x31f: Pop(0)
0x320: Stack[-3] = Stack[-1]
0x321: Return(); Pop(2)

0x322: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x323: @@ GetPosition(Stack[-8])
0x324: Pop(0)
0x325: @@ GetEyesHeight(Stack[-9])
0x326: Pop(0)
0x327: Push(CvectorIndex(Stack[-8], 1))
0x328: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x329: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x32a: @ GetPosition(Stack[-7])
0x32b: Pop(0)
0x32c: @ GetEyesHeight(Stack[-9])
0x32d: Pop(0)
0x32e: Push(CvectorIndex(Stack[-7], 1))
0x32f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x330: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x331: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x332: Push(CvectorIndex(Stack[-6], 1))
0x333: Stack[-1] = (int) 0
0x334: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x335: Pop(0); Push(Stack[-6] | Stack[-6]);
0x336: Pop(1); Push(Sqrt(Stack[-1]))
0x337: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x338: Stack[-5] = -Stack[-6]; Pop(0);
0x339: Pop(0); Push(Stack[-6] * Stack[-19]);
0x33a: PushEmpty(cvector, cvector)
0x33b: Push(CVector(0.0, 1.0, 0.0))
0x33c: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x33d: Call2 0x43e

0x33e: Pop(1)
0x33f: Push((int) 25)
0x340: Pop(2); Push(Stack[-2] * Stack[-1]);
0x341: Pop(2); Push(Stack[-2] + Stack[-1]);
0x342: Push(CVector(0.0, 10.0, 0.0))
0x343: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x344: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x345: @ IsOverrideActive(Stack[-2])
0x346: Pop(0)
0x347: Push(Stack[-2])
0x348: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x349: Stack[-21] = (bool) 0
0x34a: Return(); Pop(18)

0x34b: @ StopWorld()
0x34c: Pop(0)
0x34d: Push((bool) 1)
0x34e: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x34f: Pop(1)
0x350: Push(CvectorIndex(Stack[-4], 0))
0x351: Push(CvectorIndex(Stack[-5], 2))
0x352: @ Rotate(Stack[-2], Stack[-1])
0x353: Pop(2)
0x354: PushEmpty(bool)
0x355: Call2 0x4ed

0x356: Pop(0)
0x357: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x358: GOTO 0x361

0x359: Push("head")
0x35a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x35b: Pop(1)
0x35c: Push(Stack[-1])
0x35d: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x35e: Push("head")
0x35f: @ LookAsyncCamera(Stack[-1])
0x360: Pop(1)
0x361: @ CameraWaitForPlayFinish()
0x362: Pop(0)
0x363: @ ResumeWorld()
0x364: Pop(0)
0x365: Stack[-21] = (bool) 1
0x366: Return(); Pop(18)

0x367: PushEmpty(bool, bool)
0x368: Push((bool) 1)
0x369: @ CameraSwitchToNormal(Stack[-1])
0x36a: Pop(1)
0x36b: PushEmpty(bool)
0x36c: Call2 0x4ed

0x36d: Pop(0)
0x36e: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36f: GOTO 0x378

0x370: Push("head")
0x371: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x372: Pop(1)
0x373: Push(Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x375: Push("head")
0x376: @ UnlookAsync(Stack[-1])
0x377: Pop(1)
0x378: Return(); Pop(2)

0x379: PushEmpty(int, int, int, int)
0x37a: Push("voice_common")
0x37b: @ GetVariable(Stack[-1], Stack[-3])
0x37c: Pop(1)
0x37d: Push(Stack[-2])
0x37e: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x37f: PushEmpty(bool, object)
0x380: Stack[-1] = Stack[-7]
0x381: Call2 0x3b3

0x382: Pop(1)
0x383: Pop(1); Push((bool) Stack[-1] == 0)
0x384: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x385: PushEmpty(bool, object)
0x386: Stack[-1] = Stack[-7]
0x387: Call2 0x3d8

0x388: Pop(1)
0x389: Pop(1); Push((bool) Stack[-1] == 0)
0x38a: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x38b: Stack[-6] = (bool) 0
0x38c: Return(); Pop(4)

0x38d: Push((int) 2)
0x38e: @ irand(Stack[-2], Stack[-1])
0x38f: Pop(1)
0x390: Push(Stack[-1])
0x391: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x392: Push("voice_common")
0x393: Push((int) 1)
0x394: Pop(1); Push(Stack[-4] + Stack[-1]);
0x395: Push((int) 3)
0x396: Pop(2); Push(Stack[-2] % Stack[-1]);
0x397: @ SetVariable(Stack[-2], Stack[-1])
0x398: Pop(2)
0x399: GOTO 0x39e

0x39a: Push("voice_common")
0x39b: Push((int) 0)
0x39c: @ SetVariable(Stack[-2], Stack[-1])
0x39d: Pop(2)
0x39e: GOTO 0x3b1

0x39f: PushEmpty(bool, object)
0x3a0: Stack[-1] = Stack[-7]
0x3a1: Call2 0x3d8

0x3a2: Pop(1)
0x3a3: Pop(1); Push((bool) Stack[-1] == 0)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3a5: PushEmpty(bool, object)
0x3a6: Stack[-1] = Stack[-7]
0x3a7: Call2 0x3b3

0x3a8: Pop(1)
0x3a9: Pop(1); Push((bool) Stack[-1] == 0)
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ab: Stack[-6] = (bool) 0
0x3ac: Return(); Pop(4)

0x3ad: Push("voice_common")
0x3ae: Push((int) 1)
0x3af: @ SetVariable(Stack[-2], Stack[-1])
0x3b0: Pop(2)
0x3b1: Stack[-6] = (bool) 1
0x3b2: Return(); Pop(4)

0x3b3: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3b4: Stack[-5] = "c"
0x3b5: Stack[-4] = (int) 0
0x3b6: Push((int) 1)
0x3b7: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3b8: Push((int) 1)
0x3b9: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3ba: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3bb: @@ HasProperty(Stack[-1], Stack[-4])
0x3bc: Pop(1)
0x3bd: Pop(0); Push((bool) Stack[-3] == 0)
0x3be: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bf: GOTO 0x3c3

0x3c0: Push((int) 1)
0x3c1: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3c2: GOTO 0x3b6

0x3c3: Pop(0); Push((bool) Stack[-4] == 0)
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c5: Stack[-12] = (bool) 0
0x3c6: Return(); Pop(10)

0x3c7: Stack[-2] = (int) 0
0x3c8: Push((int) 1)
0x3c9: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3cb: @ irand(Stack[-2], Stack[-4])
0x3cc: Pop(0)
0x3cd: Push((int) 1)
0x3ce: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3cf: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3d0: @@ GetProperty(Stack[-1], Stack[-2])
0x3d1: Pop(1)
0x3d2: PushEmpty(bool, string)
0x3d3: Stack[-1] = Stack[-3]
0x3d4: Call2 0x422

0x3d5: Stack[-14] = Stack[-2]
0x3d6: Pop(2)
0x3d7: Return(); Pop(10)

0x3d8: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3d9: Push("d")
0x3da: PushEmpty(int)
0x3db: Call2 0x459

0x3dc: Pop(0)
0x3dd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3de: Push("m")
0x3df: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3e0: Stack[-4] = (int) 0
0x3e1: Push((int) 1)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3e3: Push((int) 1)
0x3e4: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3e5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3e6: @@ HasProperty(Stack[-1], Stack[-4])
0x3e7: Pop(1)
0x3e8: Pop(0); Push((bool) Stack[-3] == 0)
0x3e9: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3ea: GOTO 0x3ee

0x3eb: Push((int) 1)
0x3ec: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3ed: GOTO 0x3e1

0x3ee: Pop(0); Push((bool) Stack[-4] == 0)
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3f0: Stack[-12] = (bool) 0
0x3f1: Return(); Pop(10)

0x3f2: Stack[-2] = (int) 0
0x3f3: Push((int) 1)
0x3f4: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f6: @ irand(Stack[-2], Stack[-4])
0x3f7: Pop(0)
0x3f8: Push((int) 1)
0x3f9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3fa: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3fb: @@ GetProperty(Stack[-1], Stack[-2])
0x3fc: Pop(1)
0x3fd: PushEmpty(bool, string)
0x3fe: Stack[-1] = Stack[-3]
0x3ff: Call2 0x422

0x400: Stack[-14] = Stack[-2]
0x401: Pop(2)
0x402: Return(); Pop(10)

0x403: PushEmpty(bool, float, float, bool, float, float)
0x404: @ lshHasAnimation(Stack[-3], Stack[-7])
0x405: Pop(0)
0x406: Push(Stack[-3])
0x407: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x408: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x409: Pop(0)
0x40a: Push((bool) 0)
0x40b: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x40c: Pop(1)
0x40d: GOTO 0x412

0x40e: Push("Can't find lsh animation : ")
0x40f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x410: @ Trace(Stack[-1])
0x411: Pop(1)
0x412: Return(); Pop(6)

0x413: PushEmpty(bool, float, float, bool, float, float)
0x414: @ lshHasAnimation(Stack[-3], Stack[-8])
0x415: Pop(0)
0x416: Push(Stack[-3])
0x417: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x418: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x419: Pop(0)
0x41a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x41b: Pop(0)
0x41c: GOTO 0x421

0x41d: Push("Can't find lsh animation : ")
0x41e: Pop(1); Push(Stack[-1] + Stack[-9]);
0x41f: @ Trace(Stack[-1])
0x420: Pop(1)
0x421: Return(); Pop(6)

0x422: PushEmpty(bool, bool)
0x423: PushEmpty(bool)
0x424: Call2 0x4ed

0x425: Pop(0)
0x426: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x427: @ lshHasSpeech(Stack[-1], Stack[-3])
0x428: Pop(0)
0x429: Push(Stack[-1])
0x42a: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42b: @ lshPlaySpeech(Stack[-3])
0x42c: Pop(0)
0x42d: Stack[-4] = (bool) 1
0x42e: Return(); Pop(2)

0x42f: Stack[-4] = (bool) 0
0x430: Return(); Pop(2)

0x431: PushEmpty(bool)
0x432: Call2 0x4ed

0x433: Pop(0)
0x434: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x435: @ lshStopSpeech()
0x436: Pop(0)
0x437: Return(); Pop(0)

0x438: PushEmpty(object, object)
0x439: @ self(Stack[-1])
0x43a: Pop(0)
0x43b: Stack[-3] = Stack[-1]
0x43c: Return(); Pop(2)

0x43d: Stack[-1] = 0
0x43e: PushEmpty(float, float)
0x43f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x440: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x441: Push((float)0.0)
0x442: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x443: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x444: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x445: Return(); Pop(2)

0x446: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x447: Return(); Pop(2)

0x448: PushEmpty(int, int)
0x449: @ GetVariable(Stack[-3], Stack[-1])
0x44a: Pop(0)
0x44b: Stack[-4] = Stack[-1]
0x44c: Return(); Pop(2)

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
0x47b: Push("oob2MladVladFactory1")
0x47c: Push((int) 1)
0x47d: @ SetVariable(Stack[-2], Stack[-1])
0x47e: Pop(2)
0x47f: Return(); Pop(0)

0x480: PushEmpty()
0x481: Push("oob2MladVladFactory2")
0x482: Push((int) 1)
0x483: @ SetVariable(Stack[-2], Stack[-1])
0x484: Pop(2)
0x485: Return(); Pop(0)

0x486: PushEmpty()
0x487: Push("oob2MladVladFactory3")
0x488: Push((int) 1)
0x489: @ SetVariable(Stack[-2], Stack[-1])
0x48a: Pop(2)
0x48b: Return(); Pop(0)

0x48c: PushEmpty()
0x48d: PushEmpty(bool)
0x48e: Stack[-1] = (bool) 0
0x48f: PushEmpty(bool)
0x490: Stack[-1] = (bool) 0
0x491: PushEmpty(int, string)
0x492: Stack[-1] = "oob2MladVladFactory1"
0x493: Call2 0x448

0x494: Pop(1)
0x495: Push((int) 0)
0x496: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x497: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x498: PushEmpty(int, string)
0x499: Stack[-1] = "oob2MladVladFactory2"
0x49a: Call2 0x448

0x49b: Pop(1)
0x49c: Push((int) 0)
0x49d: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x49e: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49f: Stack[-1] = (bool) 1
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a1: PushEmpty(int, string)
0x4a2: Stack[-1] = "oob2MladVladFactory3"
0x4a3: Call2 0x448

0x4a4: Pop(1)
0x4a5: Push((int) 0)
0x4a6: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x4a7: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a8: Stack[-1] = (bool) 1
0x4a9: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4aa: PushEmpty(bool, string, string)
0x4ab: Stack[-2] = "quest_b2_01"
0x4ac: Stack[-1] = "remove_mladvlad"
0x4ad: Call2 0x44d

0x4ae: Pop(3)
0x4af: Return(); Pop(0)

0x4b0: PushEmpty()
0x4b1: PushEmpty(int, string)
0x4b2: Stack[-1] = "oob2MladVladFactory1"
0x4b3: Call2 0x448

0x4b4: Pop(1)
0x4b5: Push((int) 0)
0x4b6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b8: Stack[-2] = (bool) 1
0x4b9: Return(); Pop(0)

0x4ba: Stack[-2] = (bool) 0
0x4bb: Return(); Pop(0)

0x4bc: PushEmpty()
0x4bd: PushEmpty(int, string)
0x4be: Stack[-1] = "oob2MladVladFactory2"
0x4bf: Call2 0x448

0x4c0: Pop(1)
0x4c1: Push((int) 0)
0x4c2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c4: Stack[-2] = (bool) 1
0x4c5: Return(); Pop(0)

0x4c6: Stack[-2] = (bool) 0
0x4c7: Return(); Pop(0)

0x4c8: PushEmpty()
0x4c9: PushEmpty(int, string)
0x4ca: Stack[-1] = "oob2MladVladFactory3"
0x4cb: Call2 0x448

0x4cc: Pop(1)
0x4cd: Push((int) 0)
0x4ce: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4d0: Stack[-2] = (bool) 1
0x4d1: Return(); Pop(0)

0x4d2: Stack[-2] = (bool) 0
0x4d3: Return(); Pop(0)

0x4d4: PushEmpty(int, int)
0x4d5: Push("branch")
0x4d6: @ GetVariable(Stack[-1], Stack[-2])
0x4d7: Pop(1)
0x4d8: Push((int) 0)
0x4d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4da: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4db: Stack[-3] = (int) 1
0x4dc: Return(); Pop(2)

0x4dd: GOTO 0x4e3

0x4de: Push((int) 1)
0x4df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4e1: Stack[-3] = (int) 2
0x4e2: Return(); Pop(2)

0x4e3: Stack[-3] = (int) 3
0x4e4: Return(); Pop(2)

0x4e5: Stack[-1] = (int) 515547
0x4e6: Return(); Pop(0)

0x4e7: Stack[-1] = (int) 502872
0x4e8: Return(); Pop(0)

0x4e9: Stack[-1] = "ui/NPC_MladVlad.png"
0x4ea: Return(); Pop(0)

0x4eb: Stack[-1] = "ui/NPC_MladVlad_b.png"
0x4ec: Return(); Pop(0)

0x4ed: Stack[-1] = (bool) 1
0x4ee: Return(); Pop(0)

