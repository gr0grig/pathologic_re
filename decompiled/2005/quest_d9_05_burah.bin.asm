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
	ui/NPC_Burah.png
	ui/NPC_Burah_b.png
	d9q05
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x1b8
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1bc Vars = (string)
		EVENT_6 Op = 0x1d0 Vars = ()
		EVENT_5 Op = 0x1dd Vars = ()
		EVENT_7 Op = 0x226 Vars = (int)
		EVENT_45 Op = 0x268 Vars = (bool)
		EVENT_0 Op = 0x274 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2fd

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x449

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x447

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x44b

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x44d

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x49c

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
0x31: Call2 0x411

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x352

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
0x48: Call2 0x341

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
0x56: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x90

0x5a: Pop(1)
0x5b: Push((int) 513949)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x45a

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 513950)
0x66: Push((int) 15186)
0x67: Push((int) 15185)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 513980)
0x6b: Push((int) -1)
0x6c: Push((int) 15215)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0x44f

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x3dc

0x7e: Pop(1)
0x7f: GOTO 0x76

0x80: GOTO 0x8f

0x81: Push("all")
0x82: Push("idle")
0x83: @ PlayAnimation(Stack[-2], Stack[-1])
0x84: Pop(2)
0x85: @ WaitForAnimEnd()
0x86: Pop(0)
0x87: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: GOTO 0x8f

0x8a: Push("all")
0x8b: Push("idle")
0x8c: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: GOTO 0x85

0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: PushEmpty(bool)
0x92: Call2 0x44f

0x93: Pop(0)
0x94: Pop(1); Push((bool) Stack[-1] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Return(); Pop(0)

0x97: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(0)

0x9a: PushEmpty(string, bool)
0x9b: Stack[-2] = Stack[-3]
0x9c: Push("")
0x9d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9f: Stack[-1] = (bool) 0
0xa0: GOTO 0xa2

0xa1: Stack[-1] = (bool) 1
0xa2: Call2 0x3ec

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x40a

0xab: Pop(0)
0xac: Push((int) 15199)
0xad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xaf: PushEmpty(object, object)
0xb0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2: Call2 0x451

0xb3: Pop(2)
0xb4: Push((int) 40555)
0xb5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: PushEmpty(object, object)
0xb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba: Call2 0x451

0xbb: Pop(2)
0xbc: Push((int) 40548)
0xbd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbf: PushEmpty(object, object)
0xc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2: Call2 0x451

0xc3: Pop(2)
0xc4: Push((int) 15184)
0xc5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xc7: PushEmpty(string)
0xc8: Stack[-1] = "Neutral"
0xc9: Call2 0x90

0xca: Pop(1)
0xcb: Push((int) 513949)
0xcc: @@ SetMessage(Stack[-1])
0xcd: Pop(1)
0xce: @@ ClearReplies()
0xcf: Pop(0)
0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Call2 0x45a

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd5: Push((int) 513950)
0xd6: Push((int) 15186)
0xd7: Push((int) 15185)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Push((int) 513980)
0xdb: Push((int) -1)
0xdc: Push((int) 15215)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Return(); Pop(0)

0xe0: Push((int) 15213)
0xe1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe3: Push((int) 15186)
0xe4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xe6: PushEmpty(string)
0xe7: Stack[-1] = "Sorrow"
0xe8: Call2 0x90

0xe9: Pop(1)
0xea: Push((int) 513951)
0xeb: @@ SetMessage(Stack[-1])
0xec: Pop(1)
0xed: @@ ClearReplies()
0xee: Pop(0)
0xef: Push((int) 513952)
0xf0: Push((int) 15188)
0xf1: Push((int) 15187)
0xf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3: Pop(3)
0xf4: Push((int) 538654)
0xf5: Push((int) -1)
0xf6: Push((int) 40548)
0xf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8: Pop(3)
0xf9: Return(); Pop(0)

0xfa: Push((int) 15188)
0xfb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xfd: PushEmpty(string)
0xfe: Stack[-1] = "Sorrow"
0xff: Call2 0x90

0x100: Pop(1)
0x101: Push((int) 513953)
0x102: @@ SetMessage(Stack[-1])
0x103: Pop(1)
0x104: @@ ClearReplies()
0x105: Pop(0)
0x106: Push((int) 513954)
0x107: Push((int) 15190)
0x108: Push((int) 15189)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Return(); Pop(0)

0x10c: Push((int) 15190)
0x10d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x10f: PushEmpty(string)
0x110: Stack[-1] = "Neutral"
0x111: Call2 0x90

0x112: Pop(1)
0x113: Push((int) 513955)
0x114: @@ SetMessage(Stack[-1])
0x115: Pop(1)
0x116: @@ ClearReplies()
0x117: Pop(0)
0x118: Push((int) 538657)
0x119: Push((int) 40553)
0x11a: Push((int) 40551)
0x11b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: Push((int) 538658)
0x11e: Push((int) 40554)
0x11f: Push((int) 40552)
0x120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: Return(); Pop(0)

0x123: Push((int) 40554)
0x124: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x125: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x126: PushEmpty(string)
0x127: Stack[-1] = "Neutral"
0x128: Call2 0x90

0x129: Pop(1)
0x12a: Push((int) 538660)
0x12b: @@ SetMessage(Stack[-1])
0x12c: Pop(1)
0x12d: @@ ClearReplies()
0x12e: Pop(0)
0x12f: Push((int) 538661)
0x130: Push((int) -1)
0x131: Push((int) 40555)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Push((int) 538662)
0x135: Push((int) 40553)
0x136: Push((int) 40556)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: Return(); Pop(0)

0x13a: Push((int) 40553)
0x13b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13c: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x13d: PushEmpty(string)
0x13e: Stack[-1] = "Neutral"
0x13f: Call2 0x90

0x140: Pop(1)
0x141: Push((int) 538659)
0x142: @@ SetMessage(Stack[-1])
0x143: Pop(1)
0x144: @@ ClearReplies()
0x145: Pop(0)
0x146: Push((int) 513956)
0x147: Push((int) 15192)
0x148: Push((int) 15191)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Push((int) 538663)
0x14c: Push((int) 15194)
0x14d: Push((int) 40558)
0x14e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f: Pop(3)
0x150: Return(); Pop(0)

0x151: Push((int) 15192)
0x152: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x154: PushEmpty(string)
0x155: Stack[-1] = "Doubt"
0x156: Call2 0x90

0x157: Pop(1)
0x158: Push((int) 513957)
0x159: @@ SetMessage(Stack[-1])
0x15a: Pop(1)
0x15b: @@ ClearReplies()
0x15c: Pop(0)
0x15d: Push((int) 513958)
0x15e: Push((int) 15194)
0x15f: Push((int) 15193)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Push((int) 538664)
0x163: Push((int) 15196)
0x164: Push((int) 40560)
0x165: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x166: Pop(3)
0x167: Return(); Pop(0)

0x168: Push((int) 15194)
0x169: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x16b: PushEmpty(string)
0x16c: Stack[-1] = "Agression"
0x16d: Call2 0x90

0x16e: Pop(1)
0x16f: Push((int) 513959)
0x170: @@ SetMessage(Stack[-1])
0x171: Pop(1)
0x172: @@ ClearReplies()
0x173: Pop(0)
0x174: Push((int) 513960)
0x175: Push((int) 15196)
0x176: Push((int) 15195)
0x177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x178: Pop(3)
0x179: Return(); Pop(0)

0x17a: Push((int) 15196)
0x17b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x17d: PushEmpty(string)
0x17e: Stack[-1] = "Agression"
0x17f: Call2 0x90

0x180: Pop(1)
0x181: Push((int) 513961)
0x182: @@ SetMessage(Stack[-1])
0x183: Pop(1)
0x184: @@ ClearReplies()
0x185: Pop(0)
0x186: Push((int) 513962)
0x187: Push((int) 15198)
0x188: Push((int) 15197)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Push((int) 538665)
0x18c: Push((int) 15198)
0x18d: Push((int) 40562)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: Return(); Pop(0)

0x191: Push((int) 15198)
0x192: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Doubt"
0x196: Call2 0x90

0x197: Pop(1)
0x198: Push((int) 513963)
0x199: @@ SetMessage(Stack[-1])
0x19a: Pop(1)
0x19b: @@ ClearReplies()
0x19c: Pop(0)
0x19d: Push((int) 513964)
0x19e: Push((int) -1)
0x19f: Push((int) 15199)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: Return(); Pop(0)

0x1a3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1a4: PushEmpty(bool)
0x1a5: Call2 0x44f

0x1a6: Pop(0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a8: @ lshStopAnimation()
0x1a9: Pop(0)
0x1aa: GOTO 0x1ad

0x1ab: @ StopAnimation()
0x1ac: Pop(0)
0x1ad: Return(); Pop(0)

0x1ae: GOTO 0xa7

0x1af: Return(); Pop(0)

0x1b0: PushEmpty()
0x1b1: PushEmpty(int, object)
0x1b2: Stack[-1] = Stack[-3]
0x1b3: Push(-2, 1); TaskCall(0)
0x1b4: Call2 0x0

0x1b5: Pop(-2, 1); TaskReturn
0x1b6: Pop(2)
0x1b7: Return(); Pop(0)

0x1b8: PushEmpty()
0x1b9: Call2 0x1e1

0x1ba: Pop(0)
0x1bb: Return(); Pop(0)

0x1bc: PushEmpty(bool, bool)
0x1bd: Push("cleanup")
0x1be: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c0: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1c1: @ IsLoaded(Stack[-1])
0x1c2: Pop(0)
0x1c3: Pop(0); Push((bool) Stack[-1] == 0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c5: PushEmpty(object)
0x1c6: Call2 0x411

0x1c7: Pop(0)
0x1c8: @ RemoveActor(Stack[-1])
0x1c9: Pop(1)
0x1ca: GOTO 0x1cf

0x1cb: Push("restore")
0x1cc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1ce: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1cf: Return(); Pop(2)

0x1d0: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d2: PushEmpty(object)
0x1d3: Call2 0x411

0x1d4: Pop(0)
0x1d5: @ RemoveActor(Stack[-1])
0x1d6: Pop(1)
0x1d7: @ Hold()
0x1d8: Pop(0)
0x1d9: PushEmpty()
0x1da: Call2 0x24c

0x1db: Pop(0)
0x1dc: Return(); Pop(0)

0x1dd: PushEmpty()
0x1de: Call2 0x25b

0x1df: Pop(0)
0x1e0: Return(); Pop(0)

0x1e1: PushEmpty(bool)
0x1e2: Call2 0x2f8

0x1e3: Pop(0)
0x1e4: Pop(1); Push((bool) Stack[-1] == 0)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e6: @ Hold()
0x1e7: Pop(0)
0x1e8: @ GetDirection(Stack[-0])
0x1e9: Pop(0)
0x1ea: PushEmpty()
0x1eb: Call2 0x291

0x1ec: Pop(0)
0x1ed: GOTO 0x1ea

0x1ee: Return(); Pop(0)

0x1ef: PushEmpty(object, object)
0x1f0: Push("player")
0x1f1: @ FindActor(Stack[-2], Stack[-1])
0x1f2: Pop(1)
0x1f3: Pop(0); Push((bool) Stack[-1] == 0)
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f5: Stack[-3] = (bool) 0
0x1f6: Return(); Pop(2)

0x1f7: PushEmpty(bool, object)
0x1f8: Stack[-1] = Stack[-3]
0x1f9: Call2 0x2ef

0x1fa: Stack[-5] = Stack[-2]
0x1fb: Pop(2)
0x1fc: Return(); Pop(2)

0x1fd: Stack[-1] = 0
0x1fe: Push(CvectorIndex(Stack[-0], 0))
0x1ff: Push(CvectorIndex(Stack[-0], 2))
0x200: @ RotateAsync(Stack[-2], Stack[-1])
0x201: Pop(2)
0x202: Return(); Pop(0)

0x203: PushEmpty(object, bool, object, bool)
0x204: Push("player")
0x205: @ FindActor(Stack[-3], Stack[-1])
0x206: Pop(1)
0x207: Pop(0); Push((bool) Stack[-2] == 0)
0x208: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x209: Stack[-5] = (bool) 0
0x20a: Return(); Pop(4)

0x20b: PushEmpty(float, object)
0x20c: Stack[-1] = Stack[-4]
0x20d: Call2 0x2dd

0x20e: Pop(1)
0x20f: Push((float)90000.0)
0x210: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x212: Stack[-5] = (bool) 0
0x213: Return(); Pop(4)

0x214: @ CanSee(Stack[-1], Stack[-2])
0x215: Pop(0)
0x216: Stack[-5] = Stack[-1]
0x217: Return(); Pop(4)

0x218: Stack[-2] = 0
0x219: PushEmpty(float, float)
0x21a: Push((int) 8)
0x21b: Push((int) 16)
0x21c: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x21d: Pop(2)
0x21e: Push((int) 10)
0x21f: @ SetTimer(Stack[-1], Stack[-2])
0x220: Pop(1)
0x221: Return(); Pop(2)

0x222: Push((int) 10)
0x223: @ KillTimer(Stack[-1])
0x224: Pop(1)
0x225: Return(); Pop(0)

0x226: PushEmpty()
0x227: Push((int) 10)
0x228: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x229: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x22a: PushEmpty()
0x22b: Call2 0x222

0x22c: Pop(0)
0x22d: PushEmpty(bool)
0x22e: Stack[-1] = (bool) 0
0x22f: PushEmpty(bool)
0x230: Call2 0x2f8

0x231: Pop(0)
0x232: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x233: PushEmpty(bool)
0x234: Call2 0x203

0x235: Pop(0)
0x236: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x237: Stack[-1] = (bool) 1
0x238: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x239: PushEmpty(bool)
0x23a: Call2 0x1ef

0x23b: Pop(0)
0x23c: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23d: PushEmpty(bool, object)
0x23e: PushEmpty(object)
0x23f: Call2 0x411

0x240: Stack[-2] = Stack[-1]
0x241: Pop(1)
0x242: Call2 0x38c

0x243: Pop(2)
0x244: GOTO 0x24b

0x245: PushEmpty()
0x246: Call2 0x1fe

0x247: Pop(0)
0x248: PushEmpty()
0x249: Call2 0x219

0x24a: Pop(0)
0x24b: Return(); Pop(0)

0x24c: PushEmpty()
0x24d: Call2 0x2d8

0x24e: Pop(0)
0x24f: PushEmpty()
0x250: Call2 0x222

0x251: Pop(0)
0x252: @ lshStopSpeech()
0x253: Pop(0)
0x254: @ lshStopAnimation()
0x255: Pop(0)
0x256: @ StopAsync()
0x257: Pop(0)
0x258: @ Hold()
0x259: Pop(0)
0x25a: Return(); Pop(0)

0x25b: @ StopGroup0()
0x25c: Pop(0)
0x25d: PushEmpty()
0x25e: Call2 0x222

0x25f: Pop(0)
0x260: PushEmpty(string)
0x261: Stack[-1] = "Neutral"
0x262: Call2 0x3dc

0x263: Pop(1)
0x264: PushEmpty()
0x265: Call2 0x219

0x266: Pop(0)
0x267: Return(); Pop(0)

0x268: PushEmpty()
0x269: Push(Stack[-1])
0x26a: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26b: PushEmpty()
0x26c: Call2 0x219

0x26d: Pop(0)
0x26e: GOTO 0x273

0x26f: PushEmpty(string)
0x270: Stack[-1] = "Neutral"
0x271: Call2 0x3dc

0x272: Pop(1)
0x273: Return(); Pop(0)

0x274: PushEmpty(bool, bool)
0x275: @ IsOverrideActive(Stack[-1])
0x276: Pop(0)
0x277: Pop(0); Push((bool) Stack[-1] == 0)
0x278: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x279: EventDisable(0)
0x27a: PushEmpty()
0x27b: Call2 0x2d8

0x27c: Pop(0)
0x27d: PushEmpty(bool, object)
0x27e: Stack[-1] = Stack[-5]
0x27f: Call2 0x2ef

0x280: Pop(2)
0x281: EventEnable(0)
0x282: PushEmpty(object)
0x283: Stack[-1] = Stack[-4]
0x284: Call2 0x1b0

0x285: Pop(1)
0x286: PushEmpty(string)
0x287: Stack[-1] = "Neutral"
0x288: Call2 0x3dc

0x289: Pop(1)
0x28a: PushEmpty()
0x28b: Call2 0x222

0x28c: Pop(0)
0x28d: PushEmpty()
0x28e: Call2 0x219

0x28f: Pop(0)
0x290: Return(); Pop(2)

0x291: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x292: @ WaitForAnimEnd()
0x293: Pop(0)
0x294: PushEmpty(bool)
0x295: Call2 0x2f8

0x296: Pop(0)
0x297: Pop(1); Push((bool) Stack[-1] == 0)
0x298: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x299: Return(); Pop(12)

0x29a: PushEmpty(int)
0x29b: Call2 0x436

0x29c: Stack[-7] = Stack[-1]
0x29d: Pop(1)
0x29e: Stack[-5] = (int) 0
0x29f: PushEmpty(bool)
0x2a0: Stack[-1] = (bool) 0
0x2a1: Push((int) 5)
0x2a2: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a4: PushEmpty(bool)
0x2a5: Call2 0x2f8

0x2a6: Pop(0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a8: Stack[-1] = (bool) 1
0x2a9: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2aa: Pop(0); Push((bool) Stack[-6] == 0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2ac: Push((int) 3)
0x2ad: @ Sleep(Stack[-1], Stack[-5])
0x2ae: Pop(1)
0x2af: Pop(0); Push((bool) Stack[-4] == 0)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: GOTO 0x2d3

0x2b2: GOTO 0x2c8

0x2b3: @ irand(Stack[-3], Stack[-6])
0x2b4: Pop(0)
0x2b5: Push((int) 5)
0x2b6: @ irand(Stack[-3], Stack[-1])
0x2b7: Pop(1)
0x2b8: Push((int) 0)
0x2b9: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2bb: Stack[-3] = (int) 0
0x2bc: Push("all")
0x2bd: PushEmpty(string, int)
0x2be: Stack[-1] = Stack[-6]
0x2bf: Call2 0x42f

0x2c0: Pop(1)
0x2c1: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c2: Pop(2)
0x2c3: @ WaitForAnimEnd(Stack[-1])
0x2c4: Pop(0)
0x2c5: Pop(0); Push((bool) Stack[-1] == 0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c7: GOTO 0x2d3

0x2c8: PushEmpty(bool)
0x2c9: Call2 0x2d6

0x2ca: Pop(0)
0x2cb: Pop(1); Push((bool) Stack[-1] == 0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: GOTO 0x2d3

0x2ce: @ ResetAAS()
0x2cf: Pop(0)
0x2d0: Push((int) 1)
0x2d1: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2d2: GOTO 0x29f

0x2d3: @ ResetAAS()
0x2d4: Pop(0)
0x2d5: Return(); Pop(12)

0x2d6: Stack[-1] = (bool) 1
0x2d7: Return(); Pop(0)

0x2d8: @ StopAnimation()
0x2d9: Pop(0)
0x2da: @ StopGroup0()
0x2db: Pop(0)
0x2dc: Return(); Pop(0)

0x2dd: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2de: @ GetPosition(Stack[-3])
0x2df: Pop(0)
0x2e0: @@ GetPosition(Stack[-2])
0x2e1: Pop(0)
0x2e2: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2e3: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2e4: Return(); Pop(6)

0x2e5: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x2e6: @ GetPosition(Stack[-3])
0x2e7: Pop(0)
0x2e8: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x2e9: Push(CvectorIndex(Stack[-2], 0))
0x2ea: Push(CvectorIndex(Stack[-3], 2))
0x2eb: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x2ec: Pop(2)
0x2ed: Stack[-8] = Stack[-1]
0x2ee: Return(); Pop(6)

0x2ef: PushEmpty(cvector, cvector)
0x2f0: @@ GetPosition(Stack[-1])
0x2f1: Pop(0)
0x2f2: PushEmpty(bool, cvector)
0x2f3: Stack[-1] = Stack[-3]
0x2f4: Call2 0x2e5

0x2f5: Stack[-6] = Stack[-2]
0x2f6: Pop(2)
0x2f7: Return(); Pop(2)

0x2f8: PushEmpty(bool, bool)
0x2f9: @ IsLoaded(Stack[-1])
0x2fa: Pop(0)
0x2fb: Stack[-3] = Stack[-1]
0x2fc: Return(); Pop(2)

0x2fd: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2fe: @@ GetPosition(Stack[-8])
0x2ff: Pop(0)
0x300: @@ GetEyesHeight(Stack[-9])
0x301: Pop(0)
0x302: Push(CvectorIndex(Stack[-8], 1))
0x303: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x304: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x305: @ GetPosition(Stack[-7])
0x306: Pop(0)
0x307: @ GetEyesHeight(Stack[-9])
0x308: Pop(0)
0x309: Push(CvectorIndex(Stack[-7], 1))
0x30a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x30b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x30c: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x30d: Push(CvectorIndex(Stack[-6], 1))
0x30e: Stack[-1] = (int) 0
0x30f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x310: Pop(0); Push(Stack[-6] | Stack[-6]);
0x311: Pop(1); Push(Sqrt(Stack[-1]))
0x312: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x313: Stack[-5] = -Stack[-6]; Pop(0);
0x314: Pop(0); Push(Stack[-6] * Stack[-19]);
0x315: PushEmpty(cvector, cvector)
0x316: Push(CVector(0.0, 1.0, 0.0))
0x317: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x318: Call2 0x417

0x319: Pop(1)
0x31a: Push((int) 25)
0x31b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x31c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x31d: Push(CVector(0.0, 10.0, 0.0))
0x31e: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x31f: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x320: @ IsOverrideActive(Stack[-2])
0x321: Pop(0)
0x322: Push(Stack[-2])
0x323: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x324: Stack[-21] = (bool) 0
0x325: Return(); Pop(18)

0x326: @ StopWorld()
0x327: Pop(0)
0x328: @ CameraTransit(Stack[-3], Stack[-5])
0x329: Pop(0)
0x32a: Push(CvectorIndex(Stack[-4], 0))
0x32b: Push(CvectorIndex(Stack[-5], 2))
0x32c: @ Rotate(Stack[-2], Stack[-1])
0x32d: Pop(2)
0x32e: PushEmpty(bool)
0x32f: Call2 0x44f

0x330: Pop(0)
0x331: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x332: GOTO 0x33b

0x333: Push("head")
0x334: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x335: Pop(1)
0x336: Push(Stack[-1])
0x337: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x338: Push("head")
0x339: @ LookAsyncCamera(Stack[-1])
0x33a: Pop(1)
0x33b: @ CameraWaitForPlayFinish()
0x33c: Pop(0)
0x33d: @ ResumeWorld()
0x33e: Pop(0)
0x33f: Stack[-21] = (bool) 1
0x340: Return(); Pop(18)

0x341: PushEmpty(bool, bool)
0x342: @ CameraSwitchToNormal()
0x343: Pop(0)
0x344: PushEmpty(bool)
0x345: Call2 0x44f

0x346: Pop(0)
0x347: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x348: GOTO 0x351

0x349: Push("head")
0x34a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x34b: Pop(1)
0x34c: Push(Stack[-1])
0x34d: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34e: Push("head")
0x34f: @ UnlookAsync(Stack[-1])
0x350: Pop(1)
0x351: Return(); Pop(2)

0x352: PushEmpty(int, int, int, int)
0x353: Push("voice_common")
0x354: @ GetVariable(Stack[-1], Stack[-3])
0x355: Pop(1)
0x356: Push(Stack[-2])
0x357: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x358: PushEmpty(bool, object)
0x359: Stack[-1] = Stack[-7]
0x35a: Call2 0x38c

0x35b: Pop(1)
0x35c: Pop(1); Push((bool) Stack[-1] == 0)
0x35d: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x35e: PushEmpty(bool, object)
0x35f: Stack[-1] = Stack[-7]
0x360: Call2 0x3b1

0x361: Pop(1)
0x362: Pop(1); Push((bool) Stack[-1] == 0)
0x363: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x364: Stack[-6] = (bool) 0
0x365: Return(); Pop(4)

0x366: Push((int) 2)
0x367: @ irand(Stack[-2], Stack[-1])
0x368: Pop(1)
0x369: Push(Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x36b: Push("voice_common")
0x36c: Push((int) 1)
0x36d: Pop(1); Push(Stack[-4] + Stack[-1]);
0x36e: Push((int) 3)
0x36f: Pop(2); Push(Stack[-2] % Stack[-1]);
0x370: @ SetVariable(Stack[-2], Stack[-1])
0x371: Pop(2)
0x372: GOTO 0x377

0x373: Push("voice_common")
0x374: Push((int) 0)
0x375: @ SetVariable(Stack[-2], Stack[-1])
0x376: Pop(2)
0x377: GOTO 0x38a

0x378: PushEmpty(bool, object)
0x379: Stack[-1] = Stack[-7]
0x37a: Call2 0x3b1

0x37b: Pop(1)
0x37c: Pop(1); Push((bool) Stack[-1] == 0)
0x37d: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x37e: PushEmpty(bool, object)
0x37f: Stack[-1] = Stack[-7]
0x380: Call2 0x38c

0x381: Pop(1)
0x382: Pop(1); Push((bool) Stack[-1] == 0)
0x383: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x384: Stack[-6] = (bool) 0
0x385: Return(); Pop(4)

0x386: Push("voice_common")
0x387: Push((int) 1)
0x388: @ SetVariable(Stack[-2], Stack[-1])
0x389: Pop(2)
0x38a: Stack[-6] = (bool) 1
0x38b: Return(); Pop(4)

0x38c: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x38d: Stack[-5] = "c"
0x38e: Stack[-4] = (int) 0
0x38f: Push((int) 1)
0x390: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x391: Push((int) 1)
0x392: Pop(1); Push(Stack[-5] + Stack[-1]);
0x393: Pop(1); Push(Stack[-6] + Stack[-1]);
0x394: @@ HasProperty(Stack[-1], Stack[-4])
0x395: Pop(1)
0x396: Pop(0); Push((bool) Stack[-3] == 0)
0x397: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x398: GOTO 0x39c

0x399: Push((int) 1)
0x39a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x39b: GOTO 0x38f

0x39c: Pop(0); Push((bool) Stack[-4] == 0)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39e: Stack[-12] = (bool) 0
0x39f: Return(); Pop(10)

0x3a0: Stack[-2] = (int) 0
0x3a1: Push((int) 1)
0x3a2: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a4: @ irand(Stack[-2], Stack[-4])
0x3a5: Pop(0)
0x3a6: Push((int) 1)
0x3a7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3a8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3a9: @@ GetProperty(Stack[-1], Stack[-2])
0x3aa: Pop(1)
0x3ab: PushEmpty(bool, string)
0x3ac: Stack[-1] = Stack[-3]
0x3ad: Call2 0x3fb

0x3ae: Stack[-14] = Stack[-2]
0x3af: Pop(2)
0x3b0: Return(); Pop(10)

0x3b1: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3b2: Push("d")
0x3b3: PushEmpty(int)
0x3b4: Call2 0x426

0x3b5: Pop(0)
0x3b6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3b7: Push("m")
0x3b8: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3b9: Stack[-4] = (int) 0
0x3ba: Push((int) 1)
0x3bb: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3bc: Push((int) 1)
0x3bd: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3be: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3bf: @@ HasProperty(Stack[-1], Stack[-4])
0x3c0: Pop(1)
0x3c1: Pop(0); Push((bool) Stack[-3] == 0)
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c3: GOTO 0x3c7

0x3c4: Push((int) 1)
0x3c5: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3c6: GOTO 0x3ba

0x3c7: Pop(0); Push((bool) Stack[-4] == 0)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c9: Stack[-12] = (bool) 0
0x3ca: Return(); Pop(10)

0x3cb: Stack[-2] = (int) 0
0x3cc: Push((int) 1)
0x3cd: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3cf: @ irand(Stack[-2], Stack[-4])
0x3d0: Pop(0)
0x3d1: Push((int) 1)
0x3d2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3d3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3d4: @@ GetProperty(Stack[-1], Stack[-2])
0x3d5: Pop(1)
0x3d6: PushEmpty(bool, string)
0x3d7: Stack[-1] = Stack[-3]
0x3d8: Call2 0x3fb

0x3d9: Stack[-14] = Stack[-2]
0x3da: Pop(2)
0x3db: Return(); Pop(10)

0x3dc: PushEmpty(bool, float, float, bool, float, float)
0x3dd: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3de: Pop(0)
0x3df: Push(Stack[-3])
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e1: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3e2: Pop(0)
0x3e3: Push((bool) 0)
0x3e4: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3e5: Pop(1)
0x3e6: GOTO 0x3eb

0x3e7: Push("Can't find lsh animation : ")
0x3e8: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3e9: @ Trace(Stack[-1])
0x3ea: Pop(1)
0x3eb: Return(); Pop(6)

0x3ec: PushEmpty(bool, float, float, bool, float, float)
0x3ed: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3ee: Pop(0)
0x3ef: Push(Stack[-3])
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f1: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3f2: Pop(0)
0x3f3: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3f4: Pop(0)
0x3f5: GOTO 0x3fa

0x3f6: Push("Can't find lsh animation : ")
0x3f7: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3f8: @ Trace(Stack[-1])
0x3f9: Pop(1)
0x3fa: Return(); Pop(6)

0x3fb: PushEmpty(bool, bool)
0x3fc: PushEmpty(bool)
0x3fd: Call2 0x44f

0x3fe: Pop(0)
0x3ff: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x400: @ lshHasSpeech(Stack[-1], Stack[-3])
0x401: Pop(0)
0x402: Push(Stack[-1])
0x403: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x404: @ lshPlaySpeech(Stack[-3])
0x405: Pop(0)
0x406: Stack[-4] = (bool) 1
0x407: Return(); Pop(2)

0x408: Stack[-4] = (bool) 0
0x409: Return(); Pop(2)

0x40a: PushEmpty(bool)
0x40b: Call2 0x44f

0x40c: Pop(0)
0x40d: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40e: @ lshStopSpeech()
0x40f: Pop(0)
0x410: Return(); Pop(0)

0x411: PushEmpty(object, object)
0x412: @ self(Stack[-1])
0x413: Pop(0)
0x414: Stack[-3] = Stack[-1]
0x415: Return(); Pop(2)

0x416: Stack[-1] = 0
0x417: PushEmpty(float, float)
0x418: Pop(0); Push(Stack[-3] | Stack[-3]);
0x419: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x41a: Push((float)0.0)
0x41b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x41e: Return(); Pop(2)

0x41f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x420: Return(); Pop(2)

0x421: PushEmpty(int, int)
0x422: @ GetVariable(Stack[-3], Stack[-1])
0x423: Pop(0)
0x424: Stack[-4] = Stack[-1]
0x425: Return(); Pop(2)

0x426: PushEmpty(float, float)
0x427: @ GetGameTime(Stack[-1])
0x428: Pop(0)
0x429: Push((int) 1)
0x42a: PushEmpty(int)
0x42b: Push((int) 24)
0x42c: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x42d: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x42e: Return(); Pop(2)

0x42f: PushEmpty(string, string)
0x430: Stack[-1] = "idle"
0x431: Push(Stack[-3])
0x432: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x433: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x434: Stack[-4] = Stack[-1]
0x435: Return(); Pop(2)

0x436: PushEmpty(int, bool, int, bool)
0x437: Stack[-2] = (int) 0
0x438: Push("all")
0x439: PushEmpty(string, int)
0x43a: Stack[-1] = Stack[-5]
0x43b: Call2 0x42f

0x43c: Pop(1)
0x43d: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x43e: Pop(2)
0x43f: Pop(0); Push((bool) Stack[-1] == 0)
0x440: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x441: GOTO 0x445

0x442: Push((int) 1)
0x443: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x444: GOTO 0x438

0x445: Stack[-5] = Stack[-2]
0x446: Return(); Pop(4)

0x447: Stack[-1] = (int) 515592
0x448: Return(); Pop(0)

0x449: Stack[-1] = (int) 511961
0x44a: Return(); Pop(0)

0x44b: Stack[-1] = "ui/NPC_Burah.png"
0x44c: Return(); Pop(0)

0x44d: Stack[-1] = "ui/NPC_Burah_b.png"
0x44e: Return(); Pop(0)

0x44f: Stack[-1] = (bool) 1
0x450: Return(); Pop(0)

0x451: PushEmpty()
0x452: Push("d9q05")
0x453: Push((int) 2)
0x454: @ SetVariable(Stack[-2], Stack[-1])
0x455: Pop(2)
0x456: PushEmpty()
0x457: Call2 0x466

0x458: Pop(0)
0x459: Return(); Pop(0)

0x45a: PushEmpty()
0x45b: PushEmpty(int, string)
0x45c: Stack[-1] = "d9q05"
0x45d: Call2 0x421

0x45e: Pop(1)
0x45f: Push((int) 1)
0x460: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x461: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x462: Stack[-2] = (bool) 1
0x463: Return(); Pop(0)

0x464: Stack[-2] = (bool) 0
0x465: Return(); Pop(0)

0x466: PushEmpty(object, object)
0x467: Push((int) 766)
0x468: Push((int) 2)
0x469: Push((int) 540063)
0x46a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x46b: Pop(3)
0x46c: PushEmpty(bool, object, int)
0x46d: Stack[-2] = Stack[-4]
0x46e: Stack[-1] = (int) 764
0x46f: Call2 0x480

0x470: Pop(3)
0x471: Return(); Pop(2)

0x472: Stack[-1] = 0
0x473: PushEmpty(object, object)
0x474: @ GetDiaryRoot(Stack[-1])
0x475: Pop(0)
0x476: Pop(0); Push((bool) Stack[-1] == 0)
0x477: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x478: Push("Can't retrieve diary root")
0x479: @ Trace(Stack[-1])
0x47a: Pop(1)
0x47b: Stack[-3] = (bool) 0
0x47c: Return(); Pop(2)

0x47d: Stack[-3] = Stack[-1]
0x47e: Return(); Pop(2)

0x47f: Stack[-1] = 0
0x480: PushEmpty(object, object, int, object, object, int)
0x481: PushEmpty(object)
0x482: Call2 0x473

0x483: Stack[-4] = Stack[-1]
0x484: Pop(1)
0x485: @@ Find(Stack[-7], Stack[-2])
0x486: Pop(0)
0x487: Pop(0); Push((bool) Stack[-2] == 0)
0x488: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x489: Push("Can't find diary parent with id: ")
0x48a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x48b: @ Trace(Stack[-1])
0x48c: Pop(1)
0x48d: Stack[-9] = (bool) 0
0x48e: Return(); Pop(6)

0x48f: @@ AddChild(Stack[-8])
0x490: Pop(0)
0x491: Push((int) 7)
0x492: @ SendWorldWndMessage(Stack[-1])
0x493: Pop(1)
0x494: @@ GetCategory(Stack[-1])
0x495: Pop(0)
0x496: @ SetDiarySection(Stack[-1])
0x497: Pop(0)
0x498: Stack[-9] = (bool) 0
0x499: Return(); Pop(6)

0x49a: Stack[-2] = 0
0x49b: Stack[-3] = 0
0x49c: PushEmpty(int, int)
0x49d: Push("branch")
0x49e: @ GetVariable(Stack[-1], Stack[-2])
0x49f: Pop(1)
0x4a0: Push((int) 0)
0x4a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a3: Stack[-3] = (int) 1
0x4a4: Return(); Pop(2)

0x4a5: GOTO 0x4ab

0x4a6: Push((int) 1)
0x4a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a9: Stack[-3] = (int) 2
0x4aa: Return(); Pop(2)

0x4ab: Stack[-3] = (int) 3
0x4ac: Return(); Pop(2)

