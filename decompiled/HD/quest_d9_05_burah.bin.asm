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
	ood9Burah1
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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x1e8
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb0 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1ec Vars = (string)
		EVENT_6 Op = 0x200 Vars = ()
		EVENT_5 Op = 0x20d Vars = ()
		EVENT_7 Op = 0x256 Vars = (int)
		EVENT_45 Op = 0x298 Vars = (bool)
		EVENT_0 Op = 0x2a4 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x32d

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x47b

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x479

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x47d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x47f

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4e0

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
0x31: Call2 0x443

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x384

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
0x48: Call2 0x372

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
0x56: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x9a

0x5a: Pop(1)
0x5b: Push((int) 513949)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x492

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 513950)
0x66: Push((int) 15186)
0x67: Push((int) 15185)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: PushEmpty(bool, object)
0x6b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c: Call2 0x49e

0x6d: Pop(1)
0x6e: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6f: Push((int) 513977)
0x70: Push((int) 15213)
0x71: Push((int) 15212)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: Push((int) 513980)
0x75: Push((int) -1)
0x76: Push((int) 15215)
0x77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78: Pop(3)
0x79: GOTO 0x7c

0x7a: Return(); Pop(0)

0x7b: GOTO 0x55

0x7c: PushEmpty(bool)
0x7d: Call2 0x481

0x7e: Pop(0)
0x7f: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x80: @ lshWaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: PushEmpty(string)
0x86: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x87: Call2 0x40e

0x88: Pop(1)
0x89: GOTO 0x80

0x8a: GOTO 0x99

0x8b: Push("all")
0x8c: Push("idle")
0x8d: @ PlayAnimation(Stack[-2], Stack[-1])
0x8e: Pop(2)
0x8f: @ WaitForAnimEnd()
0x90: Pop(0)
0x91: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: GOTO 0x99

0x94: Push("all")
0x95: Push("idle")
0x96: @ PlayAnimation(Stack[-2], Stack[-1])
0x97: Pop(2)
0x98: GOTO 0x8f

0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: PushEmpty(bool)
0x9c: Call2 0x481

0x9d: Pop(0)
0x9e: Pop(1); Push((bool) Stack[-1] == 0)
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: Return(); Pop(0)

0xa1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: PushEmpty(string, bool)
0xa5: Stack[-2] = Stack[-3]
0xa6: Push("")
0xa7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa8: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa9: Stack[-1] = (bool) 0
0xaa: GOTO 0xac

0xab: Stack[-1] = (bool) 1
0xac: Call2 0x41e

0xad: Pop(2)
0xae: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaf: Return(); Pop(0)

0xb0: PushEmpty()
0xb1: Push((int) 1)
0xb2: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0xb3: PushEmpty()
0xb4: Call2 0x43c

0xb5: Pop(0)
0xb6: Push((int) 15199)
0xb7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb9: PushEmpty(object, object)
0xba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc: Call2 0x483

0xbd: Pop(2)
0xbe: Push((int) 40555)
0xbf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x483

0xc5: Pop(2)
0xc6: Push((int) 40548)
0xc7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x483

0xcd: Pop(2)
0xce: Push((int) 15212)
0xcf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x48c

0xd5: Pop(2)
0xd6: Push((int) 15184)
0xd7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xd9: PushEmpty(string)
0xda: Stack[-1] = "Neutral"
0xdb: Call2 0x9a

0xdc: Pop(1)
0xdd: Push((int) 513949)
0xde: @@ SetMessage(Stack[-1])
0xdf: Pop(1)
0xe0: @@ ClearReplies()
0xe1: Pop(0)
0xe2: PushEmpty(bool, object)
0xe3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Call2 0x492

0xe5: Pop(1)
0xe6: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe7: Push((int) 513950)
0xe8: Push((int) 15186)
0xe9: Push((int) 15185)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: PushEmpty(bool, object)
0xed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xee: Call2 0x49e

0xef: Pop(1)
0xf0: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf1: Push((int) 513977)
0xf2: Push((int) 15213)
0xf3: Push((int) 15212)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Push((int) 513980)
0xf7: Push((int) -1)
0xf8: Push((int) 15215)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Push((int) 15213)
0xfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Smile"
0x101: Call2 0x9a

0x102: Pop(1)
0x103: Push((int) 513978)
0x104: @@ SetMessage(Stack[-1])
0x105: Pop(1)
0x106: @@ ClearReplies()
0x107: Pop(0)
0x108: Push((int) 513979)
0x109: Push((int) -1)
0x10a: Push((int) 15214)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Push((int) 538655)
0x10e: Push((int) -1)
0x10f: Push((int) 40549)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Push((int) 15186)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x116: PushEmpty(string)
0x117: Stack[-1] = "Sorrow"
0x118: Call2 0x9a

0x119: Pop(1)
0x11a: Push((int) 513951)
0x11b: @@ SetMessage(Stack[-1])
0x11c: Pop(1)
0x11d: @@ ClearReplies()
0x11e: Pop(0)
0x11f: Push((int) 513952)
0x120: Push((int) 15188)
0x121: Push((int) 15187)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Push((int) 538654)
0x125: Push((int) -1)
0x126: Push((int) 40548)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Return(); Pop(0)

0x12a: Push((int) 15188)
0x12b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x12d: PushEmpty(string)
0x12e: Stack[-1] = "Sorrow"
0x12f: Call2 0x9a

0x130: Pop(1)
0x131: Push((int) 513953)
0x132: @@ SetMessage(Stack[-1])
0x133: Pop(1)
0x134: @@ ClearReplies()
0x135: Pop(0)
0x136: Push((int) 513954)
0x137: Push((int) 15190)
0x138: Push((int) 15189)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Return(); Pop(0)

0x13c: Push((int) 15190)
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Neutral"
0x141: Call2 0x9a

0x142: Pop(1)
0x143: Push((int) 513955)
0x144: @@ SetMessage(Stack[-1])
0x145: Pop(1)
0x146: @@ ClearReplies()
0x147: Pop(0)
0x148: Push((int) 538657)
0x149: Push((int) 40553)
0x14a: Push((int) 40551)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Push((int) 538658)
0x14e: Push((int) 40554)
0x14f: Push((int) 40552)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: Push((int) 40554)
0x154: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x156: PushEmpty(string)
0x157: Stack[-1] = "Neutral"
0x158: Call2 0x9a

0x159: Pop(1)
0x15a: Push((int) 538660)
0x15b: @@ SetMessage(Stack[-1])
0x15c: Pop(1)
0x15d: @@ ClearReplies()
0x15e: Pop(0)
0x15f: Push((int) 538661)
0x160: Push((int) -1)
0x161: Push((int) 40555)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Push((int) 538662)
0x165: Push((int) 40553)
0x166: Push((int) 40556)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Return(); Pop(0)

0x16a: Push((int) 40553)
0x16b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x16d: PushEmpty(string)
0x16e: Stack[-1] = "Neutral"
0x16f: Call2 0x9a

0x170: Pop(1)
0x171: Push((int) 538659)
0x172: @@ SetMessage(Stack[-1])
0x173: Pop(1)
0x174: @@ ClearReplies()
0x175: Pop(0)
0x176: Push((int) 513956)
0x177: Push((int) 15192)
0x178: Push((int) 15191)
0x179: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a: Pop(3)
0x17b: Push((int) 538663)
0x17c: Push((int) 15194)
0x17d: Push((int) 40558)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Return(); Pop(0)

0x181: Push((int) 15192)
0x182: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x184: PushEmpty(string)
0x185: Stack[-1] = "Doubt"
0x186: Call2 0x9a

0x187: Pop(1)
0x188: Push((int) 513957)
0x189: @@ SetMessage(Stack[-1])
0x18a: Pop(1)
0x18b: @@ ClearReplies()
0x18c: Pop(0)
0x18d: Push((int) 513958)
0x18e: Push((int) 15194)
0x18f: Push((int) 15193)
0x190: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191: Pop(3)
0x192: Push((int) 538664)
0x193: Push((int) 15196)
0x194: Push((int) 40560)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Return(); Pop(0)

0x198: Push((int) 15194)
0x199: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x19b: PushEmpty(string)
0x19c: Stack[-1] = "Agression"
0x19d: Call2 0x9a

0x19e: Pop(1)
0x19f: Push((int) 513959)
0x1a0: @@ SetMessage(Stack[-1])
0x1a1: Pop(1)
0x1a2: @@ ClearReplies()
0x1a3: Pop(0)
0x1a4: Push((int) 513960)
0x1a5: Push((int) 15196)
0x1a6: Push((int) 15195)
0x1a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a8: Pop(3)
0x1a9: Return(); Pop(0)

0x1aa: Push((int) 15196)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Agression"
0x1af: Call2 0x9a

0x1b0: Pop(1)
0x1b1: Push((int) 513961)
0x1b2: @@ SetMessage(Stack[-1])
0x1b3: Pop(1)
0x1b4: @@ ClearReplies()
0x1b5: Pop(0)
0x1b6: Push((int) 513962)
0x1b7: Push((int) 15198)
0x1b8: Push((int) 15197)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Push((int) 538665)
0x1bc: Push((int) 15198)
0x1bd: Push((int) 40562)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Return(); Pop(0)

0x1c1: Push((int) 15198)
0x1c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1c4: PushEmpty(string)
0x1c5: Stack[-1] = "Doubt"
0x1c6: Call2 0x9a

0x1c7: Pop(1)
0x1c8: Push((int) 513963)
0x1c9: @@ SetMessage(Stack[-1])
0x1ca: Pop(1)
0x1cb: @@ ClearReplies()
0x1cc: Pop(0)
0x1cd: Push((int) 513964)
0x1ce: Push((int) -1)
0x1cf: Push((int) 15199)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: Return(); Pop(0)

0x1d3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d4: PushEmpty(bool)
0x1d5: Call2 0x481

0x1d6: Pop(0)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d8: @ lshStopAnimation()
0x1d9: Pop(0)
0x1da: GOTO 0x1dd

0x1db: @ StopAnimation()
0x1dc: Pop(0)
0x1dd: Return(); Pop(0)

0x1de: GOTO 0xb1

0x1df: Return(); Pop(0)

0x1e0: PushEmpty()
0x1e1: PushEmpty(int, object)
0x1e2: Stack[-1] = Stack[-3]
0x1e3: Push(-2, 1); TaskCall(0)
0x1e4: Call2 0x0

0x1e5: Pop(-2, 1); TaskReturn
0x1e6: Pop(2)
0x1e7: Return(); Pop(0)

0x1e8: PushEmpty()
0x1e9: Call2 0x211

0x1ea: Pop(0)
0x1eb: Return(); Pop(0)

0x1ec: PushEmpty(bool, bool)
0x1ed: Push("cleanup")
0x1ee: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f0: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1f1: @ IsLoaded(Stack[-1])
0x1f2: Pop(0)
0x1f3: Pop(0); Push((bool) Stack[-1] == 0)
0x1f4: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f5: PushEmpty(object)
0x1f6: Call2 0x443

0x1f7: Pop(0)
0x1f8: @ RemoveActor(Stack[-1])
0x1f9: Pop(1)
0x1fa: GOTO 0x1ff

0x1fb: Push("restore")
0x1fc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fe: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1ff: Return(); Pop(2)

0x200: Push( Stack[1 + Tasks[-1].StackPointer] )
0x201: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x202: PushEmpty(object)
0x203: Call2 0x443

0x204: Pop(0)
0x205: @ RemoveActor(Stack[-1])
0x206: Pop(1)
0x207: @ Hold()
0x208: Pop(0)
0x209: PushEmpty()
0x20a: Call2 0x27c

0x20b: Pop(0)
0x20c: Return(); Pop(0)

0x20d: PushEmpty()
0x20e: Call2 0x28b

0x20f: Pop(0)
0x210: Return(); Pop(0)

0x211: PushEmpty(bool)
0x212: Call2 0x328

0x213: Pop(0)
0x214: Pop(1); Push((bool) Stack[-1] == 0)
0x215: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x216: @ Hold()
0x217: Pop(0)
0x218: @ GetDirection(Stack[-0])
0x219: Pop(0)
0x21a: PushEmpty()
0x21b: Call2 0x2c1

0x21c: Pop(0)
0x21d: GOTO 0x21a

0x21e: Return(); Pop(0)

0x21f: PushEmpty(object, object)
0x220: Push("player")
0x221: @ FindActor(Stack[-2], Stack[-1])
0x222: Pop(1)
0x223: Pop(0); Push((bool) Stack[-1] == 0)
0x224: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x225: Stack[-3] = (bool) 0
0x226: Return(); Pop(2)

0x227: PushEmpty(bool, object)
0x228: Stack[-1] = Stack[-3]
0x229: Call2 0x31f

0x22a: Stack[-5] = Stack[-2]
0x22b: Pop(2)
0x22c: Return(); Pop(2)

0x22d: Stack[-1] = 0
0x22e: Push(CvectorIndex(Stack[-0], 0))
0x22f: Push(CvectorIndex(Stack[-0], 2))
0x230: @ RotateAsync(Stack[-2], Stack[-1])
0x231: Pop(2)
0x232: Return(); Pop(0)

0x233: PushEmpty(object, bool, object, bool)
0x234: Push("player")
0x235: @ FindActor(Stack[-3], Stack[-1])
0x236: Pop(1)
0x237: Pop(0); Push((bool) Stack[-2] == 0)
0x238: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x239: Stack[-5] = (bool) 0
0x23a: Return(); Pop(4)

0x23b: PushEmpty(float, object)
0x23c: Stack[-1] = Stack[-4]
0x23d: Call2 0x30d

0x23e: Pop(1)
0x23f: Push((float)90000.0)
0x240: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x242: Stack[-5] = (bool) 0
0x243: Return(); Pop(4)

0x244: @ CanSee(Stack[-1], Stack[-2])
0x245: Pop(0)
0x246: Stack[-5] = Stack[-1]
0x247: Return(); Pop(4)

0x248: Stack[-2] = 0
0x249: PushEmpty(float, float)
0x24a: Push((int) 8)
0x24b: Push((int) 16)
0x24c: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x24d: Pop(2)
0x24e: Push((int) 10)
0x24f: @ SetTimer(Stack[-1], Stack[-2])
0x250: Pop(1)
0x251: Return(); Pop(2)

0x252: Push((int) 10)
0x253: @ KillTimer(Stack[-1])
0x254: Pop(1)
0x255: Return(); Pop(0)

0x256: PushEmpty()
0x257: Push((int) 10)
0x258: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x259: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x25a: PushEmpty()
0x25b: Call2 0x252

0x25c: Pop(0)
0x25d: PushEmpty(bool)
0x25e: Stack[-1] = (bool) 0
0x25f: PushEmpty(bool)
0x260: Call2 0x328

0x261: Pop(0)
0x262: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x263: PushEmpty(bool)
0x264: Call2 0x233

0x265: Pop(0)
0x266: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x267: Stack[-1] = (bool) 1
0x268: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x269: PushEmpty(bool)
0x26a: Call2 0x21f

0x26b: Pop(0)
0x26c: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x26d: PushEmpty(bool, object)
0x26e: PushEmpty(object)
0x26f: Call2 0x443

0x270: Stack[-2] = Stack[-1]
0x271: Pop(1)
0x272: Call2 0x3be

0x273: Pop(2)
0x274: GOTO 0x27b

0x275: PushEmpty()
0x276: Call2 0x22e

0x277: Pop(0)
0x278: PushEmpty()
0x279: Call2 0x249

0x27a: Pop(0)
0x27b: Return(); Pop(0)

0x27c: PushEmpty()
0x27d: Call2 0x308

0x27e: Pop(0)
0x27f: PushEmpty()
0x280: Call2 0x252

0x281: Pop(0)
0x282: @ lshStopSpeech()
0x283: Pop(0)
0x284: @ lshStopAnimation()
0x285: Pop(0)
0x286: @ StopAsync()
0x287: Pop(0)
0x288: @ Hold()
0x289: Pop(0)
0x28a: Return(); Pop(0)

0x28b: @ StopGroup0()
0x28c: Pop(0)
0x28d: PushEmpty()
0x28e: Call2 0x252

0x28f: Pop(0)
0x290: PushEmpty(string)
0x291: Stack[-1] = "Neutral"
0x292: Call2 0x40e

0x293: Pop(1)
0x294: PushEmpty()
0x295: Call2 0x249

0x296: Pop(0)
0x297: Return(); Pop(0)

0x298: PushEmpty()
0x299: Push(Stack[-1])
0x29a: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29b: PushEmpty()
0x29c: Call2 0x249

0x29d: Pop(0)
0x29e: GOTO 0x2a3

0x29f: PushEmpty(string)
0x2a0: Stack[-1] = "Neutral"
0x2a1: Call2 0x40e

0x2a2: Pop(1)
0x2a3: Return(); Pop(0)

0x2a4: PushEmpty(bool, bool)
0x2a5: @ IsOverrideActive(Stack[-1])
0x2a6: Pop(0)
0x2a7: Pop(0); Push((bool) Stack[-1] == 0)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2a9: EventDisable(0)
0x2aa: PushEmpty()
0x2ab: Call2 0x308

0x2ac: Pop(0)
0x2ad: PushEmpty(bool, object)
0x2ae: Stack[-1] = Stack[-5]
0x2af: Call2 0x31f

0x2b0: Pop(2)
0x2b1: EventEnable(0)
0x2b2: PushEmpty(object)
0x2b3: Stack[-1] = Stack[-4]
0x2b4: Call2 0x1e0

0x2b5: Pop(1)
0x2b6: PushEmpty(string)
0x2b7: Stack[-1] = "Neutral"
0x2b8: Call2 0x40e

0x2b9: Pop(1)
0x2ba: PushEmpty()
0x2bb: Call2 0x252

0x2bc: Pop(0)
0x2bd: PushEmpty()
0x2be: Call2 0x249

0x2bf: Pop(0)
0x2c0: Return(); Pop(2)

0x2c1: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x2c2: @ WaitForAnimEnd()
0x2c3: Pop(0)
0x2c4: PushEmpty(bool)
0x2c5: Call2 0x328

0x2c6: Pop(0)
0x2c7: Pop(1); Push((bool) Stack[-1] == 0)
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c9: Return(); Pop(12)

0x2ca: PushEmpty(int)
0x2cb: Call2 0x468

0x2cc: Stack[-7] = Stack[-1]
0x2cd: Pop(1)
0x2ce: Stack[-5] = (int) 0
0x2cf: PushEmpty(bool)
0x2d0: Stack[-1] = (bool) 0
0x2d1: Push((int) 5)
0x2d2: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d4: PushEmpty(bool)
0x2d5: Call2 0x328

0x2d6: Pop(0)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d8: Stack[-1] = (bool) 1
0x2d9: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2da: Pop(0); Push((bool) Stack[-6] == 0)
0x2db: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2dc: Push((int) 3)
0x2dd: @ Sleep(Stack[-1], Stack[-5])
0x2de: Pop(1)
0x2df: Pop(0); Push((bool) Stack[-4] == 0)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e1: GOTO 0x303

0x2e2: GOTO 0x2f8

0x2e3: @ irand(Stack[-3], Stack[-6])
0x2e4: Pop(0)
0x2e5: Push((int) 5)
0x2e6: @ irand(Stack[-3], Stack[-1])
0x2e7: Pop(1)
0x2e8: Push((int) 0)
0x2e9: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2eb: Stack[-3] = (int) 0
0x2ec: Push("all")
0x2ed: PushEmpty(string, int)
0x2ee: Stack[-1] = Stack[-6]
0x2ef: Call2 0x461

0x2f0: Pop(1)
0x2f1: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f2: Pop(2)
0x2f3: @ WaitForAnimEnd(Stack[-1])
0x2f4: Pop(0)
0x2f5: Pop(0); Push((bool) Stack[-1] == 0)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f7: GOTO 0x303

0x2f8: PushEmpty(bool)
0x2f9: Call2 0x306

0x2fa: Pop(0)
0x2fb: Pop(1); Push((bool) Stack[-1] == 0)
0x2fc: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fd: GOTO 0x303

0x2fe: @ ResetAAS()
0x2ff: Pop(0)
0x300: Push((int) 1)
0x301: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x302: GOTO 0x2cf

0x303: @ ResetAAS()
0x304: Pop(0)
0x305: Return(); Pop(12)

0x306: Stack[-1] = (bool) 1
0x307: Return(); Pop(0)

0x308: @ StopAnimation()
0x309: Pop(0)
0x30a: @ StopGroup0()
0x30b: Pop(0)
0x30c: Return(); Pop(0)

0x30d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x30e: @ GetPosition(Stack[-3])
0x30f: Pop(0)
0x310: @@ GetPosition(Stack[-2])
0x311: Pop(0)
0x312: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x313: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x314: Return(); Pop(6)

0x315: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x316: @ GetPosition(Stack[-3])
0x317: Pop(0)
0x318: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x319: Push(CvectorIndex(Stack[-2], 0))
0x31a: Push(CvectorIndex(Stack[-3], 2))
0x31b: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x31c: Pop(2)
0x31d: Stack[-8] = Stack[-1]
0x31e: Return(); Pop(6)

0x31f: PushEmpty(cvector, cvector)
0x320: @@ GetPosition(Stack[-1])
0x321: Pop(0)
0x322: PushEmpty(bool, cvector)
0x323: Stack[-1] = Stack[-3]
0x324: Call2 0x315

0x325: Stack[-6] = Stack[-2]
0x326: Pop(2)
0x327: Return(); Pop(2)

0x328: PushEmpty(bool, bool)
0x329: @ IsLoaded(Stack[-1])
0x32a: Pop(0)
0x32b: Stack[-3] = Stack[-1]
0x32c: Return(); Pop(2)

0x32d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x32e: @@ GetPosition(Stack[-8])
0x32f: Pop(0)
0x330: @@ GetEyesHeight(Stack[-9])
0x331: Pop(0)
0x332: Push(CvectorIndex(Stack[-8], 1))
0x333: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x334: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x335: @ GetPosition(Stack[-7])
0x336: Pop(0)
0x337: @ GetEyesHeight(Stack[-9])
0x338: Pop(0)
0x339: Push(CvectorIndex(Stack[-7], 1))
0x33a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x33b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x33c: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x33d: Push(CvectorIndex(Stack[-6], 1))
0x33e: Stack[-1] = (int) 0
0x33f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x340: Pop(0); Push(Stack[-6] | Stack[-6]);
0x341: Pop(1); Push(Sqrt(Stack[-1]))
0x342: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x343: Stack[-5] = -Stack[-6]; Pop(0);
0x344: Pop(0); Push(Stack[-6] * Stack[-19]);
0x345: PushEmpty(cvector, cvector)
0x346: Push(CVector(0.0, 1.0, 0.0))
0x347: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x348: Call2 0x449

0x349: Pop(1)
0x34a: Push((int) 25)
0x34b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x34c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x34d: Push(CVector(0.0, 10.0, 0.0))
0x34e: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x34f: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x350: @ IsOverrideActive(Stack[-2])
0x351: Pop(0)
0x352: Push(Stack[-2])
0x353: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x354: Stack[-21] = (bool) 0
0x355: Return(); Pop(18)

0x356: @ StopWorld()
0x357: Pop(0)
0x358: Push((bool) 1)
0x359: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x35a: Pop(1)
0x35b: Push(CvectorIndex(Stack[-4], 0))
0x35c: Push(CvectorIndex(Stack[-5], 2))
0x35d: @ Rotate(Stack[-2], Stack[-1])
0x35e: Pop(2)
0x35f: PushEmpty(bool)
0x360: Call2 0x481

0x361: Pop(0)
0x362: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x363: GOTO 0x36c

0x364: Push("head")
0x365: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x366: Pop(1)
0x367: Push(Stack[-1])
0x368: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x369: Push("head")
0x36a: @ LookAsyncCamera(Stack[-1])
0x36b: Pop(1)
0x36c: @ CameraWaitForPlayFinish()
0x36d: Pop(0)
0x36e: @ ResumeWorld()
0x36f: Pop(0)
0x370: Stack[-21] = (bool) 1
0x371: Return(); Pop(18)

0x372: PushEmpty(bool, bool)
0x373: Push((bool) 1)
0x374: @ CameraSwitchToNormal(Stack[-1])
0x375: Pop(1)
0x376: PushEmpty(bool)
0x377: Call2 0x481

0x378: Pop(0)
0x379: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x37a: GOTO 0x383

0x37b: Push("head")
0x37c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x37d: Pop(1)
0x37e: Push(Stack[-1])
0x37f: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x380: Push("head")
0x381: @ UnlookAsync(Stack[-1])
0x382: Pop(1)
0x383: Return(); Pop(2)

0x384: PushEmpty(int, int, int, int)
0x385: Push("voice_common")
0x386: @ GetVariable(Stack[-1], Stack[-3])
0x387: Pop(1)
0x388: Push(Stack[-2])
0x389: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x38a: PushEmpty(bool, object)
0x38b: Stack[-1] = Stack[-7]
0x38c: Call2 0x3be

0x38d: Pop(1)
0x38e: Pop(1); Push((bool) Stack[-1] == 0)
0x38f: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x390: PushEmpty(bool, object)
0x391: Stack[-1] = Stack[-7]
0x392: Call2 0x3e3

0x393: Pop(1)
0x394: Pop(1); Push((bool) Stack[-1] == 0)
0x395: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x396: Stack[-6] = (bool) 0
0x397: Return(); Pop(4)

0x398: Push((int) 2)
0x399: @ irand(Stack[-2], Stack[-1])
0x39a: Pop(1)
0x39b: Push(Stack[-1])
0x39c: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39d: Push("voice_common")
0x39e: Push((int) 1)
0x39f: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3a0: Push((int) 3)
0x3a1: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3a2: @ SetVariable(Stack[-2], Stack[-1])
0x3a3: Pop(2)
0x3a4: GOTO 0x3a9

0x3a5: Push("voice_common")
0x3a6: Push((int) 0)
0x3a7: @ SetVariable(Stack[-2], Stack[-1])
0x3a8: Pop(2)
0x3a9: GOTO 0x3bc

0x3aa: PushEmpty(bool, object)
0x3ab: Stack[-1] = Stack[-7]
0x3ac: Call2 0x3e3

0x3ad: Pop(1)
0x3ae: Pop(1); Push((bool) Stack[-1] == 0)
0x3af: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b0: PushEmpty(bool, object)
0x3b1: Stack[-1] = Stack[-7]
0x3b2: Call2 0x3be

0x3b3: Pop(1)
0x3b4: Pop(1); Push((bool) Stack[-1] == 0)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b6: Stack[-6] = (bool) 0
0x3b7: Return(); Pop(4)

0x3b8: Push("voice_common")
0x3b9: Push((int) 1)
0x3ba: @ SetVariable(Stack[-2], Stack[-1])
0x3bb: Pop(2)
0x3bc: Stack[-6] = (bool) 1
0x3bd: Return(); Pop(4)

0x3be: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3bf: Stack[-5] = "c"
0x3c0: Stack[-4] = (int) 0
0x3c1: Push((int) 1)
0x3c2: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3c3: Push((int) 1)
0x3c4: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3c5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3c6: @@ HasProperty(Stack[-1], Stack[-4])
0x3c7: Pop(1)
0x3c8: Pop(0); Push((bool) Stack[-3] == 0)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3ca: GOTO 0x3ce

0x3cb: Push((int) 1)
0x3cc: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3cd: GOTO 0x3c1

0x3ce: Pop(0); Push((bool) Stack[-4] == 0)
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3d0: Stack[-12] = (bool) 0
0x3d1: Return(); Pop(10)

0x3d2: Stack[-2] = (int) 0
0x3d3: Push((int) 1)
0x3d4: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d6: @ irand(Stack[-2], Stack[-4])
0x3d7: Pop(0)
0x3d8: Push((int) 1)
0x3d9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3da: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3db: @@ GetProperty(Stack[-1], Stack[-2])
0x3dc: Pop(1)
0x3dd: PushEmpty(bool, string)
0x3de: Stack[-1] = Stack[-3]
0x3df: Call2 0x42d

0x3e0: Stack[-14] = Stack[-2]
0x3e1: Pop(2)
0x3e2: Return(); Pop(10)

0x3e3: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3e4: Push("d")
0x3e5: PushEmpty(int)
0x3e6: Call2 0x458

0x3e7: Pop(0)
0x3e8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3e9: Push("m")
0x3ea: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3eb: Stack[-4] = (int) 0
0x3ec: Push((int) 1)
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3ee: Push((int) 1)
0x3ef: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3f0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3f1: @@ HasProperty(Stack[-1], Stack[-4])
0x3f2: Pop(1)
0x3f3: Pop(0); Push((bool) Stack[-3] == 0)
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f5: GOTO 0x3f9

0x3f6: Push((int) 1)
0x3f7: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3f8: GOTO 0x3ec

0x3f9: Pop(0); Push((bool) Stack[-4] == 0)
0x3fa: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3fb: Stack[-12] = (bool) 0
0x3fc: Return(); Pop(10)

0x3fd: Stack[-2] = (int) 0
0x3fe: Push((int) 1)
0x3ff: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x400: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x401: @ irand(Stack[-2], Stack[-4])
0x402: Pop(0)
0x403: Push((int) 1)
0x404: Pop(1); Push(Stack[-3] + Stack[-1]);
0x405: Pop(1); Push(Stack[-6] + Stack[-1]);
0x406: @@ GetProperty(Stack[-1], Stack[-2])
0x407: Pop(1)
0x408: PushEmpty(bool, string)
0x409: Stack[-1] = Stack[-3]
0x40a: Call2 0x42d

0x40b: Stack[-14] = Stack[-2]
0x40c: Pop(2)
0x40d: Return(); Pop(10)

0x40e: PushEmpty(bool, float, float, bool, float, float)
0x40f: @ lshHasAnimation(Stack[-3], Stack[-7])
0x410: Pop(0)
0x411: Push(Stack[-3])
0x412: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x413: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x414: Pop(0)
0x415: Push((bool) 0)
0x416: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x417: Pop(1)
0x418: GOTO 0x41d

0x419: Push("Can't find lsh animation : ")
0x41a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x41b: @ Trace(Stack[-1])
0x41c: Pop(1)
0x41d: Return(); Pop(6)

0x41e: PushEmpty(bool, float, float, bool, float, float)
0x41f: @ lshHasAnimation(Stack[-3], Stack[-8])
0x420: Pop(0)
0x421: Push(Stack[-3])
0x422: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x423: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x424: Pop(0)
0x425: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x426: Pop(0)
0x427: GOTO 0x42c

0x428: Push("Can't find lsh animation : ")
0x429: Pop(1); Push(Stack[-1] + Stack[-9]);
0x42a: @ Trace(Stack[-1])
0x42b: Pop(1)
0x42c: Return(); Pop(6)

0x42d: PushEmpty(bool, bool)
0x42e: PushEmpty(bool)
0x42f: Call2 0x481

0x430: Pop(0)
0x431: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x432: @ lshHasSpeech(Stack[-1], Stack[-3])
0x433: Pop(0)
0x434: Push(Stack[-1])
0x435: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x436: @ lshPlaySpeech(Stack[-3])
0x437: Pop(0)
0x438: Stack[-4] = (bool) 1
0x439: Return(); Pop(2)

0x43a: Stack[-4] = (bool) 0
0x43b: Return(); Pop(2)

0x43c: PushEmpty(bool)
0x43d: Call2 0x481

0x43e: Pop(0)
0x43f: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x440: @ lshStopSpeech()
0x441: Pop(0)
0x442: Return(); Pop(0)

0x443: PushEmpty(object, object)
0x444: @ self(Stack[-1])
0x445: Pop(0)
0x446: Stack[-3] = Stack[-1]
0x447: Return(); Pop(2)

0x448: Stack[-1] = 0
0x449: PushEmpty(float, float)
0x44a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x44b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x44c: Push((float)0.0)
0x44d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x44e: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x450: Return(); Pop(2)

0x451: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x452: Return(); Pop(2)

0x453: PushEmpty(int, int)
0x454: @ GetVariable(Stack[-3], Stack[-1])
0x455: Pop(0)
0x456: Stack[-4] = Stack[-1]
0x457: Return(); Pop(2)

0x458: PushEmpty(float, float)
0x459: @ GetGameTime(Stack[-1])
0x45a: Pop(0)
0x45b: Push((int) 1)
0x45c: PushEmpty(int)
0x45d: Push((int) 24)
0x45e: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x45f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x460: Return(); Pop(2)

0x461: PushEmpty(string, string)
0x462: Stack[-1] = "idle"
0x463: Push(Stack[-3])
0x464: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x465: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x466: Stack[-4] = Stack[-1]
0x467: Return(); Pop(2)

0x468: PushEmpty(int, bool, int, bool)
0x469: Stack[-2] = (int) 0
0x46a: Push("all")
0x46b: PushEmpty(string, int)
0x46c: Stack[-1] = Stack[-5]
0x46d: Call2 0x461

0x46e: Pop(1)
0x46f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x470: Pop(2)
0x471: Pop(0); Push((bool) Stack[-1] == 0)
0x472: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x473: GOTO 0x477

0x474: Push((int) 1)
0x475: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x476: GOTO 0x46a

0x477: Stack[-5] = Stack[-2]
0x478: Return(); Pop(4)

0x479: Stack[-1] = (int) 515592
0x47a: Return(); Pop(0)

0x47b: Stack[-1] = (int) 511961
0x47c: Return(); Pop(0)

0x47d: Stack[-1] = "ui/NPC_Burah.png"
0x47e: Return(); Pop(0)

0x47f: Stack[-1] = "ui/NPC_Burah_b.png"
0x480: Return(); Pop(0)

0x481: Stack[-1] = (bool) 1
0x482: Return(); Pop(0)

0x483: PushEmpty()
0x484: Push("d9q05")
0x485: Push((int) 2)
0x486: @ SetVariable(Stack[-2], Stack[-1])
0x487: Pop(2)
0x488: PushEmpty()
0x489: Call2 0x4aa

0x48a: Pop(0)
0x48b: Return(); Pop(0)

0x48c: PushEmpty()
0x48d: Push("ood9Burah1")
0x48e: Push((int) 1)
0x48f: @ SetVariable(Stack[-2], Stack[-1])
0x490: Pop(2)
0x491: Return(); Pop(0)

0x492: PushEmpty()
0x493: PushEmpty(int, string)
0x494: Stack[-1] = "d9q05"
0x495: Call2 0x453

0x496: Pop(1)
0x497: Push((int) 1)
0x498: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x499: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x49a: Stack[-2] = (bool) 1
0x49b: Return(); Pop(0)

0x49c: Stack[-2] = (bool) 0
0x49d: Return(); Pop(0)

0x49e: PushEmpty()
0x49f: PushEmpty(int, string)
0x4a0: Stack[-1] = "ood9Burah1"
0x4a1: Call2 0x453

0x4a2: Pop(1)
0x4a3: Push((int) 0)
0x4a4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a6: Stack[-2] = (bool) 1
0x4a7: Return(); Pop(0)

0x4a8: Stack[-2] = (bool) 0
0x4a9: Return(); Pop(0)

0x4aa: PushEmpty(object, object)
0x4ab: Push((int) 766)
0x4ac: Push((int) 2)
0x4ad: Push((int) 540063)
0x4ae: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4af: Pop(3)
0x4b0: PushEmpty(bool, object, int)
0x4b1: Stack[-2] = Stack[-4]
0x4b2: Stack[-1] = (int) 764
0x4b3: Call2 0x4c4

0x4b4: Pop(3)
0x4b5: Return(); Pop(2)

0x4b6: Stack[-1] = 0
0x4b7: PushEmpty(object, object)
0x4b8: @ GetDiaryRoot(Stack[-1])
0x4b9: Pop(0)
0x4ba: Pop(0); Push((bool) Stack[-1] == 0)
0x4bb: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4bc: Push("Can't retrieve diary root")
0x4bd: @ Trace(Stack[-1])
0x4be: Pop(1)
0x4bf: Stack[-3] = (bool) 0
0x4c0: Return(); Pop(2)

0x4c1: Stack[-3] = Stack[-1]
0x4c2: Return(); Pop(2)

0x4c3: Stack[-1] = 0
0x4c4: PushEmpty(object, object, int, object, object, int)
0x4c5: PushEmpty(object)
0x4c6: Call2 0x4b7

0x4c7: Stack[-4] = Stack[-1]
0x4c8: Pop(1)
0x4c9: @@ Find(Stack[-7], Stack[-2])
0x4ca: Pop(0)
0x4cb: Pop(0); Push((bool) Stack[-2] == 0)
0x4cc: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4cd: Push("Can't find diary parent with id: ")
0x4ce: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4cf: @ Trace(Stack[-1])
0x4d0: Pop(1)
0x4d1: Stack[-9] = (bool) 0
0x4d2: Return(); Pop(6)

0x4d3: @@ AddChild(Stack[-8])
0x4d4: Pop(0)
0x4d5: Push((int) 7)
0x4d6: @ SendWorldWndMessage(Stack[-1])
0x4d7: Pop(1)
0x4d8: @@ GetCategory(Stack[-1])
0x4d9: Pop(0)
0x4da: @ SetDiarySection(Stack[-1])
0x4db: Pop(0)
0x4dc: Stack[-9] = (bool) 0
0x4dd: Return(); Pop(6)

0x4de: Stack[-2] = 0
0x4df: Stack[-3] = 0
0x4e0: PushEmpty(int, int)
0x4e1: Push("branch")
0x4e2: @ GetVariable(Stack[-1], Stack[-2])
0x4e3: Pop(1)
0x4e4: Push((int) 0)
0x4e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e7: Stack[-3] = (int) 1
0x4e8: Return(); Pop(2)

0x4e9: GOTO 0x4ef

0x4ea: Push((int) 1)
0x4eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ec: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ed: Stack[-3] = (int) 2
0x4ee: Return(); Pop(2)

0x4ef: Stack[-3] = (int) 3
0x4f0: Return(); Pop(2)

