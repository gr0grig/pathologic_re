GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

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
	Oracle
	Refusal
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
	ui/NPC_Starshina.png
	ui/NPC_Starshina_b.png
	k8q01
	ook11Starshina1
	k11q01
	quest_k11_01
	place_burah
	ook11Starshina2
	fail
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
	IsLoaded (1 args)
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x6af
RunTask = 8

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x18a Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3c3 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x63b Vars = (int, int)
	GTASK_8 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x6fb Vars = (int)
		EVENT_6 Op = 0x721 Vars = ()
		EVENT_5 Op = 0x730 Vars = ()
		EVENT_45 Op = 0x73d Vars = (bool)
		EVENT_0 Op = 0x749 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x7d2

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x930

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x92e

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x932

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x934

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xa13

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
0x31: Call2 0x8e6

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x827

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
0x48: Call2 0x816

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
0x5b: Push((int) 525528)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 525529)
0x61: Push((int) -1)
0x62: Push((int) 26885)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 529271)
0x66: Push((int) -1)
0x67: Push((int) 30724)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0x936

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x8b1

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
0x8d: Call2 0x936

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
0x9d: Call2 0x8c1

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x8df

0xa6: Pop(0)
0xa7: Push((int) 26884)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 525528)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 525529)
0xb4: Push((int) -1)
0xb5: Push((int) 26885)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 529271)
0xb9: Push((int) -1)
0xba: Push((int) 30724)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xbf: PushEmpty(bool)
0xc0: Call2 0x936

0xc1: Pop(0)
0xc2: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc3: @ lshStopAnimation()
0xc4: Pop(0)
0xc5: GOTO 0xc8

0xc6: @ StopAnimation()
0xc7: Pop(0)
0xc8: Return(); Pop(0)

0xc9: GOTO 0xa2

0xca: Return(); Pop(0)

0xcb: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xcc: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xcd: PushEmpty(bool, object, float)
0xce: Stack[-2] = Stack[-12]
0xcf: Stack[-1] = (float) 130.0
0xd0: Call2 0x7d2

0xd1: Pop(2)
0xd2: Pop(1); Push((bool) Stack[-1] == 0)
0xd3: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd4: Stack[-10] = (int) -2
0xd5: Return(); Pop(8)

0xd6: @ CreateDialog(Stack[-4])
0xd7: Pop(0)
0xd8: PushEmpty(int)
0xd9: Call2 0x930

0xda: Pop(0)
0xdb: @@ SetNPCName(Stack[-1])
0xdc: Pop(1)
0xdd: PushEmpty(int)
0xde: Call2 0x92e

0xdf: Pop(0)
0xe0: @@ SetNPCDescription(Stack[-1])
0xe1: Pop(1)
0xe2: PushEmpty(string)
0xe3: Call2 0x932

0xe4: Pop(0)
0xe5: @@ SetPhoto(Stack[-1])
0xe6: Pop(1)
0xe7: PushEmpty(string)
0xe8: Call2 0x934

0xe9: Pop(0)
0xea: @@ SetPhoto2(Stack[-1])
0xeb: Pop(1)
0xec: PushEmpty(int)
0xed: Call2 0xa13

0xee: Pop(0)
0xef: @@ SetPlayerName(Stack[-1])
0xf0: Pop(1)
0xf1: Stack[-2] = (int) -1
0xf2: @ IsOverrideActive(Stack[-3])
0xf3: Pop(0)
0xf4: Push(Stack[-3])
0xf5: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf6: Stack[-10] = (int) -2
0xf7: Return(); Pop(8)

0xf8: @ DoDialog(Stack[-4])
0xf9: Pop(0)
0xfa: PushEmpty(bool, object)
0xfb: PushEmpty(object)
0xfc: Call2 0x8e6

0xfd: Stack[-2] = Stack[-1]
0xfe: Pop(1)
0xff: Call2 0x827

0x100: Pop(2)
0x101: PushEmpty(object, object)
0x102: Stack[-2] = Stack[-11]
0x103: Stack[-1] = Stack[-6]
0x104: Push(-2, 4); TaskCall(3)
0x105: Call2 0x11c

0x106: Pop(-2, 4); TaskReturn
0x107: Pop(2)
0x108: @@ IsDialogEnd(Stack[-1])
0x109: Pop(0)
0x10a: Pop(0); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10c: @ sync()
0x10d: Pop(0)
0x10e: @@ IsDialogEnd(Stack[-1])
0x10f: Pop(0)
0x110: GOTO 0x10a

0x111: PushEmpty(object)
0x112: Stack[-1] = Stack[-10]
0x113: Call2 0x816

0x114: Pop(1)
0x115: @ StopDialog(Stack[-4])
0x116: Pop(0)
0x117: @@ GetReturnValue(Stack[-2])
0x118: Pop(0)
0x119: Stack[-10] = Stack[-2]
0x11a: Return(); Pop(8)

0x11b: Stack[-4] = 0
0x11c: PushEmpty()
0x11d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x11e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x11f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x120: Push((int) 1)
0x121: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x122: PushEmpty(bool, object)
0x123: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x124: Call2 0x96e

0x125: Pop(1)
0x126: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x127: PushEmpty(string)
0x128: Stack[-1] = "Neutral"
0x129: Call2 0x174

0x12a: Pop(1)
0x12b: Push((int) 526430)
0x12c: @@ SetMessage(Stack[-1])
0x12d: Pop(1)
0x12e: @@ ClearReplies()
0x12f: Pop(0)
0x130: Push((int) 526431)
0x131: Push((int) 27707)
0x132: Push((int) 27706)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Push((int) 529003)
0x136: Push((int) 30441)
0x137: Push((int) 30440)
0x138: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x139: Pop(3)
0x13a: GOTO 0x156

0x13b: PushEmpty(string)
0x13c: Stack[-1] = "Neutral"
0x13d: Call2 0x174

0x13e: Pop(1)
0x13f: Push((int) 526438)
0x140: @@ SetMessage(Stack[-1])
0x141: Pop(1)
0x142: @@ ClearReplies()
0x143: Pop(0)
0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x146: Call2 0x97a

0x147: Pop(1)
0x148: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x149: Push((int) 526450)
0x14a: Push((int) 27726)
0x14b: Push((int) 27725)
0x14c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14d: Pop(3)
0x14e: Push((int) 526439)
0x14f: Push((int) -1)
0x150: Push((int) 27714)
0x151: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x152: Pop(3)
0x153: GOTO 0x156

0x154: Return(); Pop(0)

0x155: GOTO 0x120

0x156: PushEmpty(bool)
0x157: Call2 0x936

0x158: Pop(0)
0x159: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x15a: @ lshWaitForAnimEnd()
0x15b: Pop(0)
0x15c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x15d: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15e: GOTO 0x164

0x15f: PushEmpty(string)
0x160: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x161: Call2 0x8b1

0x162: Pop(1)
0x163: GOTO 0x15a

0x164: GOTO 0x173

0x165: Push("all")
0x166: Push("idle")
0x167: @ PlayAnimation(Stack[-2], Stack[-1])
0x168: Pop(2)
0x169: @ WaitForAnimEnd()
0x16a: Pop(0)
0x16b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x16c: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16d: GOTO 0x173

0x16e: Push("all")
0x16f: Push("idle")
0x170: @ PlayAnimation(Stack[-2], Stack[-1])
0x171: Pop(2)
0x172: GOTO 0x169

0x173: Return(); Pop(0)

0x174: PushEmpty()
0x175: PushEmpty(bool)
0x176: Call2 0x936

0x177: Pop(0)
0x178: Pop(1); Push((bool) Stack[-1] == 0)
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: Return(); Pop(0)

0x17b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x17c: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17d: Return(); Pop(0)

0x17e: PushEmpty(string, bool)
0x17f: Stack[-2] = Stack[-3]
0x180: Push("")
0x181: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x183: Stack[-1] = (bool) 0
0x184: GOTO 0x186

0x185: Stack[-1] = (bool) 1
0x186: Call2 0x8c1

0x187: Pop(2)
0x188: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x189: Return(); Pop(0)

0x18a: PushEmpty()
0x18b: Push((int) 1)
0x18c: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x18d: PushEmpty()
0x18e: Call2 0x8df

0x18f: Pop(0)
0x190: Push((int) 27712)
0x191: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x193: PushEmpty(object, object)
0x194: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x195: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x196: Call2 0x938

0x197: Pop(2)
0x198: Push((int) 27732)
0x199: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19b: PushEmpty(object, object)
0x19c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x19d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x19e: Call2 0x941

0x19f: Pop(2)
0x1a0: Push((int) 27734)
0x1a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a3: PushEmpty(object, object)
0x1a4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a6: Call2 0x941

0x1a7: Pop(2)
0x1a8: Push((int) 27705)
0x1a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1ab: PushEmpty(bool, object)
0x1ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ad: Call2 0x96e

0x1ae: Pop(1)
0x1af: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1b0: PushEmpty(string)
0x1b1: Stack[-1] = "Neutral"
0x1b2: Call2 0x174

0x1b3: Pop(1)
0x1b4: Push((int) 526430)
0x1b5: @@ SetMessage(Stack[-1])
0x1b6: Pop(1)
0x1b7: @@ ClearReplies()
0x1b8: Pop(0)
0x1b9: Push((int) 526431)
0x1ba: Push((int) 27707)
0x1bb: Push((int) 27706)
0x1bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bd: Pop(3)
0x1be: Push((int) 529003)
0x1bf: Push((int) 30441)
0x1c0: Push((int) 30440)
0x1c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c2: Pop(3)
0x1c3: Return(); Pop(0)

0x1c4: PushEmpty(string)
0x1c5: Stack[-1] = "Neutral"
0x1c6: Call2 0x174

0x1c7: Pop(1)
0x1c8: Push((int) 526438)
0x1c9: @@ SetMessage(Stack[-1])
0x1ca: Pop(1)
0x1cb: @@ ClearReplies()
0x1cc: Pop(0)
0x1cd: PushEmpty(bool, object)
0x1ce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cf: Call2 0x97a

0x1d0: Pop(1)
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d2: Push((int) 526450)
0x1d3: Push((int) 27726)
0x1d4: Push((int) 27725)
0x1d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d6: Pop(3)
0x1d7: Push((int) 526439)
0x1d8: Push((int) -1)
0x1d9: Push((int) 27714)
0x1da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1db: Pop(3)
0x1dc: Return(); Pop(0)

0x1dd: Push((int) 27726)
0x1de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e0: PushEmpty(string)
0x1e1: Stack[-1] = "Neutral"
0x1e2: Call2 0x174

0x1e3: Pop(1)
0x1e4: Push((int) 526451)
0x1e5: @@ SetMessage(Stack[-1])
0x1e6: Pop(1)
0x1e7: @@ ClearReplies()
0x1e8: Pop(0)
0x1e9: Push((int) 526452)
0x1ea: Push((int) 30435)
0x1eb: Push((int) 27727)
0x1ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ed: Pop(3)
0x1ee: Push((int) 528997)
0x1ef: Push((int) 30435)
0x1f0: Push((int) 30434)
0x1f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f2: Pop(3)
0x1f3: Return(); Pop(0)

0x1f4: Push((int) 30435)
0x1f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1f7: PushEmpty(string)
0x1f8: Stack[-1] = "Oracle"
0x1f9: Call2 0x174

0x1fa: Pop(1)
0x1fb: Push((int) 528998)
0x1fc: @@ SetMessage(Stack[-1])
0x1fd: Pop(1)
0x1fe: @@ ClearReplies()
0x1ff: Pop(0)
0x200: Push((int) 528999)
0x201: Push((int) 27728)
0x202: Push((int) 30436)
0x203: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x204: Pop(3)
0x205: Return(); Pop(0)

0x206: Push((int) 27728)
0x207: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x209: PushEmpty(string)
0x20a: Stack[-1] = "Oracle"
0x20b: Call2 0x174

0x20c: Pop(1)
0x20d: Push((int) 526453)
0x20e: @@ SetMessage(Stack[-1])
0x20f: Pop(1)
0x210: @@ ClearReplies()
0x211: Pop(0)
0x212: Push((int) 526454)
0x213: Push((int) 27731)
0x214: Push((int) 27729)
0x215: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x216: Pop(3)
0x217: Push((int) 526455)
0x218: Push((int) 27733)
0x219: Push((int) 27730)
0x21a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21b: Pop(3)
0x21c: Return(); Pop(0)

0x21d: Push((int) 27733)
0x21e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x220: PushEmpty(string)
0x221: Stack[-1] = "Neutral"
0x222: Call2 0x174

0x223: Pop(1)
0x224: Push((int) 526458)
0x225: @@ SetMessage(Stack[-1])
0x226: Pop(1)
0x227: @@ ClearReplies()
0x228: Pop(0)
0x229: Push((int) 526459)
0x22a: Push((int) -1)
0x22b: Push((int) 27734)
0x22c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22d: Pop(3)
0x22e: Return(); Pop(0)

0x22f: Push((int) 27731)
0x230: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x232: PushEmpty(string)
0x233: Stack[-1] = "Neutral"
0x234: Call2 0x174

0x235: Pop(1)
0x236: Push((int) 526456)
0x237: @@ SetMessage(Stack[-1])
0x238: Pop(1)
0x239: @@ ClearReplies()
0x23a: Pop(0)
0x23b: Push((int) 529001)
0x23c: Push((int) 30439)
0x23d: Push((int) 30438)
0x23e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23f: Pop(3)
0x240: Return(); Pop(0)

0x241: Push((int) 30439)
0x242: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x243: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x244: PushEmpty(string)
0x245: Stack[-1] = "Neutral"
0x246: Call2 0x174

0x247: Pop(1)
0x248: Push((int) 529002)
0x249: @@ SetMessage(Stack[-1])
0x24a: Pop(1)
0x24b: @@ ClearReplies()
0x24c: Pop(0)
0x24d: Push((int) 526457)
0x24e: Push((int) -1)
0x24f: Push((int) 27732)
0x250: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x251: Pop(3)
0x252: Return(); Pop(0)

0x253: Push((int) 30441)
0x254: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x255: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x256: PushEmpty(string)
0x257: Stack[-1] = "Neutral"
0x258: Call2 0x174

0x259: Pop(1)
0x25a: Push((int) 529004)
0x25b: @@ SetMessage(Stack[-1])
0x25c: Pop(1)
0x25d: @@ ClearReplies()
0x25e: Pop(0)
0x25f: Push((int) 529005)
0x260: Push((int) 27707)
0x261: Push((int) 30442)
0x262: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x263: Pop(3)
0x264: Push((int) 529006)
0x265: Push((int) 30445)
0x266: Push((int) 30444)
0x267: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x268: Pop(3)
0x269: Return(); Pop(0)

0x26a: Push((int) 30445)
0x26b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26c: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x26d: PushEmpty(string)
0x26e: Stack[-1] = "Neutral"
0x26f: Call2 0x174

0x270: Pop(1)
0x271: Push((int) 529007)
0x272: @@ SetMessage(Stack[-1])
0x273: Pop(1)
0x274: @@ ClearReplies()
0x275: Pop(0)
0x276: Push((int) 529008)
0x277: Push((int) 27707)
0x278: Push((int) 30446)
0x279: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27a: Pop(3)
0x27b: Return(); Pop(0)

0x27c: Push((int) 27707)
0x27d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x27f: PushEmpty(string)
0x280: Stack[-1] = "Refusal"
0x281: Call2 0x174

0x282: Pop(1)
0x283: Push((int) 526432)
0x284: @@ SetMessage(Stack[-1])
0x285: Pop(1)
0x286: @@ ClearReplies()
0x287: Pop(0)
0x288: Push((int) 526433)
0x289: Push((int) 27709)
0x28a: Push((int) 27708)
0x28b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28c: Pop(3)
0x28d: Return(); Pop(0)

0x28e: Push((int) 27709)
0x28f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x290: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x291: PushEmpty(string)
0x292: Stack[-1] = "Neutral"
0x293: Call2 0x174

0x294: Pop(1)
0x295: Push((int) 526434)
0x296: @@ SetMessage(Stack[-1])
0x297: Pop(1)
0x298: @@ ClearReplies()
0x299: Pop(0)
0x29a: Push((int) 526435)
0x29b: Push((int) 27711)
0x29c: Push((int) 27710)
0x29d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29e: Pop(3)
0x29f: Push((int) 529009)
0x2a0: Push((int) 27711)
0x2a1: Push((int) 30448)
0x2a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a3: Pop(3)
0x2a4: Return(); Pop(0)

0x2a5: Push((int) 27711)
0x2a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2a8: PushEmpty(string)
0x2a9: Stack[-1] = "Neutral"
0x2aa: Call2 0x174

0x2ab: Pop(1)
0x2ac: Push((int) 526436)
0x2ad: @@ SetMessage(Stack[-1])
0x2ae: Pop(1)
0x2af: @@ ClearReplies()
0x2b0: Pop(0)
0x2b1: Push((int) 529010)
0x2b2: Push((int) 30450)
0x2b3: Push((int) 30449)
0x2b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b5: Pop(3)
0x2b6: Return(); Pop(0)

0x2b7: Push((int) 30450)
0x2b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2ba: PushEmpty(string)
0x2bb: Stack[-1] = "Oracle"
0x2bc: Call2 0x174

0x2bd: Pop(1)
0x2be: Push((int) 529011)
0x2bf: @@ SetMessage(Stack[-1])
0x2c0: Pop(1)
0x2c1: @@ ClearReplies()
0x2c2: Pop(0)
0x2c3: Push((int) 526437)
0x2c4: Push((int) -1)
0x2c5: Push((int) 27712)
0x2c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c7: Pop(3)
0x2c8: Return(); Pop(0)

0x2c9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2ca: PushEmpty(bool)
0x2cb: Call2 0x936

0x2cc: Pop(0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2ce: @ lshStopAnimation()
0x2cf: Pop(0)
0x2d0: GOTO 0x2d3

0x2d1: @ StopAnimation()
0x2d2: Pop(0)
0x2d3: Return(); Pop(0)

0x2d4: GOTO 0x18b

0x2d5: Return(); Pop(0)

0x2d6: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2d7: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2d8: PushEmpty(bool, object, float)
0x2d9: Stack[-2] = Stack[-12]
0x2da: Stack[-1] = (float) 130.0
0x2db: Call2 0x7d2

0x2dc: Pop(2)
0x2dd: Pop(1); Push((bool) Stack[-1] == 0)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2df: Stack[-10] = (int) -2
0x2e0: Return(); Pop(8)

0x2e1: @ CreateDialog(Stack[-4])
0x2e2: Pop(0)
0x2e3: PushEmpty(int)
0x2e4: Call2 0x930

0x2e5: Pop(0)
0x2e6: @@ SetNPCName(Stack[-1])
0x2e7: Pop(1)
0x2e8: PushEmpty(int)
0x2e9: Call2 0x92e

0x2ea: Pop(0)
0x2eb: @@ SetNPCDescription(Stack[-1])
0x2ec: Pop(1)
0x2ed: PushEmpty(string)
0x2ee: Call2 0x932

0x2ef: Pop(0)
0x2f0: @@ SetPhoto(Stack[-1])
0x2f1: Pop(1)
0x2f2: PushEmpty(string)
0x2f3: Call2 0x934

0x2f4: Pop(0)
0x2f5: @@ SetPhoto2(Stack[-1])
0x2f6: Pop(1)
0x2f7: PushEmpty(int)
0x2f8: Call2 0xa13

0x2f9: Pop(0)
0x2fa: @@ SetPlayerName(Stack[-1])
0x2fb: Pop(1)
0x2fc: Stack[-2] = (int) -1
0x2fd: @ IsOverrideActive(Stack[-3])
0x2fe: Pop(0)
0x2ff: Push(Stack[-3])
0x300: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x301: Stack[-10] = (int) -2
0x302: Return(); Pop(8)

0x303: @ DoDialog(Stack[-4])
0x304: Pop(0)
0x305: PushEmpty(bool, object)
0x306: PushEmpty(object)
0x307: Call2 0x8e6

0x308: Stack[-2] = Stack[-1]
0x309: Pop(1)
0x30a: Call2 0x827

0x30b: Pop(2)
0x30c: PushEmpty(object, object)
0x30d: Stack[-2] = Stack[-11]
0x30e: Stack[-1] = Stack[-6]
0x30f: Push(-2, 4); TaskCall(5)
0x310: Call2 0x327

0x311: Pop(-2, 4); TaskReturn
0x312: Pop(2)
0x313: @@ IsDialogEnd(Stack[-1])
0x314: Pop(0)
0x315: Pop(0); Push((bool) Stack[-1] == 0)
0x316: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x317: @ sync()
0x318: Pop(0)
0x319: @@ IsDialogEnd(Stack[-1])
0x31a: Pop(0)
0x31b: GOTO 0x315

0x31c: PushEmpty(object)
0x31d: Stack[-1] = Stack[-10]
0x31e: Call2 0x816

0x31f: Pop(1)
0x320: @ StopDialog(Stack[-4])
0x321: Pop(0)
0x322: @@ GetReturnValue(Stack[-2])
0x323: Pop(0)
0x324: Stack[-10] = Stack[-2]
0x325: Return(); Pop(8)

0x326: Stack[-4] = 0
0x327: PushEmpty()
0x328: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x329: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x32a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x32b: Push((int) 1)
0x32c: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x32d: PushEmpty(bool)
0x32e: Stack[-1] = (bool) 0
0x32f: PushEmpty(bool, object)
0x330: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x331: Call2 0x986

0x332: Pop(1)
0x333: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x334: PushEmpty(bool, object)
0x335: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x336: Call2 0x992

0x337: Pop(1)
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: Stack[-1] = (bool) 1
0x33a: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x33b: PushEmpty(object, object)
0x33c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x33d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33e: Call2 0x94a

0x33f: Pop(2)
0x340: PushEmpty(string)
0x341: Stack[-1] = "Neutral"
0x342: Call2 0x3ad

0x343: Pop(1)
0x344: Push((int) 527376)
0x345: @@ SetMessage(Stack[-1])
0x346: Pop(1)
0x347: @@ ClearReplies()
0x348: Pop(0)
0x349: Push((int) 527379)
0x34a: Push((int) 28703)
0x34b: Push((int) 28702)
0x34c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34d: Pop(3)
0x34e: GOTO 0x38f

0x34f: PushEmpty(string)
0x350: Stack[-1] = "Neutral"
0x351: Call2 0x3ad

0x352: Pop(1)
0x353: Push((int) 527212)
0x354: @@ SetMessage(Stack[-1])
0x355: Pop(1)
0x356: @@ ClearReplies()
0x357: Pop(0)
0x358: PushEmpty(bool, object)
0x359: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x35a: Call2 0x986

0x35b: Pop(1)
0x35c: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x35d: Push((int) 527339)
0x35e: Push((int) 28658)
0x35f: Push((int) 28657)
0x360: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x361: Pop(3)
0x362: PushEmpty(bool)
0x363: Stack[-1] = (bool) 1
0x364: PushEmpty(bool)
0x365: Stack[-1] = (bool) 0
0x366: PushEmpty(bool, object)
0x367: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x368: Call2 0x9aa

0x369: Pop(1)
0x36a: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36b: PushEmpty(bool, object)
0x36c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36d: Call2 0x986

0x36e: Pop(1)
0x36f: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x370: Stack[-1] = (bool) 1
0x371: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x372: PushEmpty(bool)
0x373: Stack[-1] = (bool) 0
0x374: PushEmpty(bool, object)
0x375: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x376: Call2 0x99e

0x377: Pop(1)
0x378: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x379: PushEmpty(bool, object)
0x37a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37b: Call2 0x9aa

0x37c: Pop(1)
0x37d: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37e: Stack[-1] = (bool) 1
0x37f: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x380: Stack[-1] = (bool) 0
0x381: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x382: Push((int) 527373)
0x383: Push((int) 28707)
0x384: Push((int) 28696)
0x385: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x386: Pop(3)
0x387: Push((int) 527218)
0x388: Push((int) -1)
0x389: Push((int) 28526)
0x38a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38b: Pop(3)
0x38c: GOTO 0x38f

0x38d: Return(); Pop(0)

0x38e: GOTO 0x32b

0x38f: PushEmpty(bool)
0x390: Call2 0x936

0x391: Pop(0)
0x392: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x393: @ lshWaitForAnimEnd()
0x394: Pop(0)
0x395: Push( Stack[3 + Tasks[-1].StackPointer] )
0x396: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x397: GOTO 0x39d

0x398: PushEmpty(string)
0x399: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x39a: Call2 0x8b1

0x39b: Pop(1)
0x39c: GOTO 0x393

0x39d: GOTO 0x3ac

0x39e: Push("all")
0x39f: Push("idle")
0x3a0: @ PlayAnimation(Stack[-2], Stack[-1])
0x3a1: Pop(2)
0x3a2: @ WaitForAnimEnd()
0x3a3: Pop(0)
0x3a4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a6: GOTO 0x3ac

0x3a7: Push("all")
0x3a8: Push("idle")
0x3a9: @ PlayAnimation(Stack[-2], Stack[-1])
0x3aa: Pop(2)
0x3ab: GOTO 0x3a2

0x3ac: Return(); Pop(0)

0x3ad: PushEmpty()
0x3ae: PushEmpty(bool)
0x3af: Call2 0x936

0x3b0: Pop(0)
0x3b1: Pop(1); Push((bool) Stack[-1] == 0)
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b3: Return(); Pop(0)

0x3b4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b6: Return(); Pop(0)

0x3b7: PushEmpty(string, bool)
0x3b8: Stack[-2] = Stack[-3]
0x3b9: Push("")
0x3ba: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bc: Stack[-1] = (bool) 0
0x3bd: GOTO 0x3bf

0x3be: Stack[-1] = (bool) 1
0x3bf: Call2 0x8c1

0x3c0: Pop(2)
0x3c1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3c2: Return(); Pop(0)

0x3c3: PushEmpty()
0x3c4: Push((int) 1)
0x3c5: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x3c6: PushEmpty()
0x3c7: Call2 0x8df

0x3c8: Pop(0)
0x3c9: Push((int) 28709)
0x3ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3cc: PushEmpty(object, object)
0x3cd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3ce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3cf: Call2 0x950

0x3d0: Pop(2)
0x3d1: Push((int) 28711)
0x3d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d4: PushEmpty(object, object)
0x3d5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3d6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d7: Call2 0x964

0x3d8: Pop(2)
0x3d9: Push((int) 28669)
0x3da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3dc: PushEmpty(object, object)
0x3dd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3de: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3df: Call2 0x950

0x3e0: Pop(2)
0x3e1: Push((int) 28696)
0x3e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e4: PushEmpty(object, object)
0x3e5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3e6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e7: Call2 0x95e

0x3e8: Pop(2)
0x3e9: Push((int) 28699)
0x3ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3eb: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x3ec: PushEmpty(bool)
0x3ed: Stack[-1] = (bool) 0
0x3ee: PushEmpty(bool, object)
0x3ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f0: Call2 0x986

0x3f1: Pop(1)
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f3: PushEmpty(bool, object)
0x3f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f5: Call2 0x992

0x3f6: Pop(1)
0x3f7: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f8: Stack[-1] = (bool) 1
0x3f9: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x3fa: PushEmpty(object, object)
0x3fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3fd: Call2 0x94a

0x3fe: Pop(2)
0x3ff: PushEmpty(string)
0x400: Stack[-1] = "Neutral"
0x401: Call2 0x3ad

0x402: Pop(1)
0x403: Push((int) 527376)
0x404: @@ SetMessage(Stack[-1])
0x405: Pop(1)
0x406: @@ ClearReplies()
0x407: Pop(0)
0x408: Push((int) 527379)
0x409: Push((int) 28703)
0x40a: Push((int) 28702)
0x40b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40c: Pop(3)
0x40d: Return(); Pop(0)

0x40e: PushEmpty(string)
0x40f: Stack[-1] = "Neutral"
0x410: Call2 0x3ad

0x411: Pop(1)
0x412: Push((int) 527212)
0x413: @@ SetMessage(Stack[-1])
0x414: Pop(1)
0x415: @@ ClearReplies()
0x416: Pop(0)
0x417: PushEmpty(bool, object)
0x418: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x419: Call2 0x986

0x41a: Pop(1)
0x41b: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x41c: Push((int) 527339)
0x41d: Push((int) 28658)
0x41e: Push((int) 28657)
0x41f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x420: Pop(3)
0x421: PushEmpty(bool)
0x422: Stack[-1] = (bool) 1
0x423: PushEmpty(bool)
0x424: Stack[-1] = (bool) 0
0x425: PushEmpty(bool, object)
0x426: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x427: Call2 0x9aa

0x428: Pop(1)
0x429: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42a: PushEmpty(bool, object)
0x42b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x42c: Call2 0x986

0x42d: Pop(1)
0x42e: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42f: Stack[-1] = (bool) 1
0x430: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x431: PushEmpty(bool)
0x432: Stack[-1] = (bool) 0
0x433: PushEmpty(bool, object)
0x434: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x435: Call2 0x99e

0x436: Pop(1)
0x437: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x438: PushEmpty(bool, object)
0x439: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x43a: Call2 0x9aa

0x43b: Pop(1)
0x43c: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43d: Stack[-1] = (bool) 1
0x43e: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43f: Stack[-1] = (bool) 0
0x440: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x441: Push((int) 527373)
0x442: Push((int) 28707)
0x443: Push((int) 28696)
0x444: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x445: Pop(3)
0x446: Push((int) 527218)
0x447: Push((int) -1)
0x448: Push((int) 28526)
0x449: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44a: Pop(3)
0x44b: Return(); Pop(0)

0x44c: Push((int) 28707)
0x44d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44e: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x44f: PushEmpty(string)
0x450: Stack[-1] = "Refusal"
0x451: Call2 0x3ad

0x452: Pop(1)
0x453: Push((int) 527383)
0x454: @@ SetMessage(Stack[-1])
0x455: Pop(1)
0x456: @@ ClearReplies()
0x457: Pop(0)
0x458: Push((int) 527384)
0x459: Push((int) 28697)
0x45a: Push((int) 28708)
0x45b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45c: Pop(3)
0x45d: Return(); Pop(0)

0x45e: Push((int) 28697)
0x45f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x460: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x461: PushEmpty(string)
0x462: Stack[-1] = "Refusal"
0x463: Call2 0x3ad

0x464: Pop(1)
0x465: Push((int) 527374)
0x466: @@ SetMessage(Stack[-1])
0x467: Pop(1)
0x468: @@ ClearReplies()
0x469: Pop(0)
0x46a: Push((int) 527375)
0x46b: Push((int) 28522)
0x46c: Push((int) 28698)
0x46d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46e: Pop(3)
0x46f: Return(); Pop(0)

0x470: Push((int) 28522)
0x471: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x472: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x473: PushEmpty(string)
0x474: Stack[-1] = "Neutral"
0x475: Call2 0x3ad

0x476: Pop(1)
0x477: Push((int) 527214)
0x478: @@ SetMessage(Stack[-1])
0x479: Pop(1)
0x47a: @@ ClearReplies()
0x47b: Pop(0)
0x47c: Push((int) 527215)
0x47d: Push((int) 28524)
0x47e: Push((int) 28523)
0x47f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x480: Pop(3)
0x481: Return(); Pop(0)

0x482: Push((int) 28524)
0x483: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x484: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x485: PushEmpty(string)
0x486: Stack[-1] = "Neutral"
0x487: Call2 0x3ad

0x488: Pop(1)
0x489: Push((int) 527216)
0x48a: @@ SetMessage(Stack[-1])
0x48b: Pop(1)
0x48c: @@ ClearReplies()
0x48d: Pop(0)
0x48e: Push((int) 527217)
0x48f: Push((int) -1)
0x490: Push((int) 28525)
0x491: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x492: Pop(3)
0x493: Return(); Pop(0)

0x494: Push((int) 28658)
0x495: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x496: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x497: PushEmpty(string)
0x498: Stack[-1] = "Neutral"
0x499: Call2 0x3ad

0x49a: Pop(1)
0x49b: Push((int) 527340)
0x49c: @@ SetMessage(Stack[-1])
0x49d: Pop(1)
0x49e: @@ ClearReplies()
0x49f: Pop(0)
0x4a0: Push((int) 527355)
0x4a1: Push((int) 28675)
0x4a2: Push((int) 28674)
0x4a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a4: Pop(3)
0x4a5: Return(); Pop(0)

0x4a6: Push((int) 28675)
0x4a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4a9: PushEmpty(string)
0x4aa: Stack[-1] = "Neutral"
0x4ab: Call2 0x3ad

0x4ac: Pop(1)
0x4ad: Push((int) 527356)
0x4ae: @@ SetMessage(Stack[-1])
0x4af: Pop(1)
0x4b0: @@ ClearReplies()
0x4b1: Pop(0)
0x4b2: Push((int) 527341)
0x4b3: Push((int) 28660)
0x4b4: Push((int) 28659)
0x4b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b6: Pop(3)
0x4b7: Push((int) 527352)
0x4b8: Push((int) 28671)
0x4b9: Push((int) 28670)
0x4ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bb: Pop(3)
0x4bc: Return(); Pop(0)

0x4bd: Push((int) 28671)
0x4be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4bf: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4c0: PushEmpty(string)
0x4c1: Stack[-1] = "Neutral"
0x4c2: Call2 0x3ad

0x4c3: Pop(1)
0x4c4: Push((int) 527353)
0x4c5: @@ SetMessage(Stack[-1])
0x4c6: Pop(1)
0x4c7: @@ ClearReplies()
0x4c8: Pop(0)
0x4c9: Push((int) 527354)
0x4ca: Push((int) 28662)
0x4cb: Push((int) 28672)
0x4cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cd: Pop(3)
0x4ce: Return(); Pop(0)

0x4cf: Push((int) 28660)
0x4d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4d2: PushEmpty(string)
0x4d3: Stack[-1] = "Neutral"
0x4d4: Call2 0x3ad

0x4d5: Pop(1)
0x4d6: Push((int) 527342)
0x4d7: @@ SetMessage(Stack[-1])
0x4d8: Pop(1)
0x4d9: @@ ClearReplies()
0x4da: Pop(0)
0x4db: Push((int) 527343)
0x4dc: Push((int) 28662)
0x4dd: Push((int) 28661)
0x4de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4df: Pop(3)
0x4e0: Return(); Pop(0)

0x4e1: Push((int) 28662)
0x4e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e3: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4e4: PushEmpty(string)
0x4e5: Stack[-1] = "Neutral"
0x4e6: Call2 0x3ad

0x4e7: Pop(1)
0x4e8: Push((int) 527344)
0x4e9: @@ SetMessage(Stack[-1])
0x4ea: Pop(1)
0x4eb: @@ ClearReplies()
0x4ec: Pop(0)
0x4ed: Push((int) 527345)
0x4ee: Push((int) 28664)
0x4ef: Push((int) 28663)
0x4f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f1: Pop(3)
0x4f2: Return(); Pop(0)

0x4f3: Push((int) 28664)
0x4f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f5: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x4f6: PushEmpty(string)
0x4f7: Stack[-1] = "Refusal"
0x4f8: Call2 0x3ad

0x4f9: Pop(1)
0x4fa: Push((int) 527346)
0x4fb: @@ SetMessage(Stack[-1])
0x4fc: Pop(1)
0x4fd: @@ ClearReplies()
0x4fe: Pop(0)
0x4ff: Push((int) 527347)
0x500: Push((int) 28666)
0x501: Push((int) 28665)
0x502: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x503: Pop(3)
0x504: Return(); Pop(0)

0x505: Push((int) 28666)
0x506: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x507: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x508: PushEmpty(string)
0x509: Stack[-1] = "Oracle"
0x50a: Call2 0x3ad

0x50b: Pop(1)
0x50c: Push((int) 527348)
0x50d: @@ SetMessage(Stack[-1])
0x50e: Pop(1)
0x50f: @@ ClearReplies()
0x510: Pop(0)
0x511: Push((int) 527349)
0x512: Push((int) 28668)
0x513: Push((int) 28667)
0x514: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x515: Pop(3)
0x516: Return(); Pop(0)

0x517: Push((int) 28668)
0x518: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x519: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x51a: PushEmpty(string)
0x51b: Stack[-1] = "Oracle"
0x51c: Call2 0x3ad

0x51d: Pop(1)
0x51e: Push((int) 527350)
0x51f: @@ SetMessage(Stack[-1])
0x520: Pop(1)
0x521: @@ ClearReplies()
0x522: Pop(0)
0x523: Push((int) 527351)
0x524: Push((int) -1)
0x525: Push((int) 28669)
0x526: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x527: Pop(3)
0x528: Return(); Pop(0)

0x529: Push((int) 28703)
0x52a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52b: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x52c: PushEmpty(string)
0x52d: Stack[-1] = "Neutral"
0x52e: Call2 0x3ad

0x52f: Pop(1)
0x530: Push((int) 527380)
0x531: @@ SetMessage(Stack[-1])
0x532: Pop(1)
0x533: @@ ClearReplies()
0x534: Pop(0)
0x535: Push((int) 527213)
0x536: Push((int) 28693)
0x537: Push((int) 28521)
0x538: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x539: Pop(3)
0x53a: Return(); Pop(0)

0x53b: Push((int) 28693)
0x53c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53d: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x53e: PushEmpty(string)
0x53f: Stack[-1] = "Neutral"
0x540: Call2 0x3ad

0x541: Pop(1)
0x542: Push((int) 527370)
0x543: @@ SetMessage(Stack[-1])
0x544: Pop(1)
0x545: @@ ClearReplies()
0x546: Pop(0)
0x547: Push((int) 527371)
0x548: Push((int) 28700)
0x549: Push((int) 28694)
0x54a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54b: Pop(3)
0x54c: Return(); Pop(0)

0x54d: Push((int) 28700)
0x54e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54f: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x550: PushEmpty(string)
0x551: Stack[-1] = "Oracle"
0x552: Call2 0x3ad

0x553: Pop(1)
0x554: Push((int) 527377)
0x555: @@ SetMessage(Stack[-1])
0x556: Pop(1)
0x557: @@ ClearReplies()
0x558: Pop(0)
0x559: Push((int) 527378)
0x55a: Push((int) 28695)
0x55b: Push((int) 28701)
0x55c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55d: Pop(3)
0x55e: Return(); Pop(0)

0x55f: Push((int) 28695)
0x560: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x561: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x562: PushEmpty(string)
0x563: Stack[-1] = "Oracle"
0x564: Call2 0x3ad

0x565: Pop(1)
0x566: Push((int) 527372)
0x567: @@ SetMessage(Stack[-1])
0x568: Pop(1)
0x569: @@ ClearReplies()
0x56a: Pop(0)
0x56b: Push((int) 527381)
0x56c: Push((int) 28706)
0x56d: Push((int) 28704)
0x56e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56f: Pop(3)
0x570: Return(); Pop(0)

0x571: Push((int) 28706)
0x572: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x573: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x574: PushEmpty(string)
0x575: Stack[-1] = "Neutral"
0x576: Call2 0x3ad

0x577: Pop(1)
0x578: Push((int) 527382)
0x579: @@ SetMessage(Stack[-1])
0x57a: Pop(1)
0x57b: @@ ClearReplies()
0x57c: Pop(0)
0x57d: Push((int) 527385)
0x57e: Push((int) -1)
0x57f: Push((int) 28709)
0x580: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x581: Pop(3)
0x582: Push((int) 527387)
0x583: Push((int) -1)
0x584: Push((int) 28711)
0x585: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x586: Pop(3)
0x587: Return(); Pop(0)

0x588: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x589: PushEmpty(bool)
0x58a: Call2 0x936

0x58b: Pop(0)
0x58c: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x58d: @ lshStopAnimation()
0x58e: Pop(0)
0x58f: GOTO 0x592

0x590: @ StopAnimation()
0x591: Pop(0)
0x592: Return(); Pop(0)

0x593: GOTO 0x3c4

0x594: Return(); Pop(0)

0x595: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x596: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x597: PushEmpty(bool, object, float)
0x598: Stack[-2] = Stack[-12]
0x599: Stack[-1] = (float) 130.0
0x59a: Call2 0x7d2

0x59b: Pop(2)
0x59c: Pop(1); Push((bool) Stack[-1] == 0)
0x59d: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59e: Stack[-10] = (int) -2
0x59f: Return(); Pop(8)

0x5a0: @ CreateDialog(Stack[-4])
0x5a1: Pop(0)
0x5a2: PushEmpty(int)
0x5a3: Call2 0x930

0x5a4: Pop(0)
0x5a5: @@ SetNPCName(Stack[-1])
0x5a6: Pop(1)
0x5a7: PushEmpty(int)
0x5a8: Call2 0x92e

0x5a9: Pop(0)
0x5aa: @@ SetNPCDescription(Stack[-1])
0x5ab: Pop(1)
0x5ac: PushEmpty(string)
0x5ad: Call2 0x932

0x5ae: Pop(0)
0x5af: @@ SetPhoto(Stack[-1])
0x5b0: Pop(1)
0x5b1: PushEmpty(string)
0x5b2: Call2 0x934

0x5b3: Pop(0)
0x5b4: @@ SetPhoto2(Stack[-1])
0x5b5: Pop(1)
0x5b6: PushEmpty(int)
0x5b7: Call2 0xa13

0x5b8: Pop(0)
0x5b9: @@ SetPlayerName(Stack[-1])
0x5ba: Pop(1)
0x5bb: Stack[-2] = (int) -1
0x5bc: @ IsOverrideActive(Stack[-3])
0x5bd: Pop(0)
0x5be: Push(Stack[-3])
0x5bf: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5c0: Stack[-10] = (int) -2
0x5c1: Return(); Pop(8)

0x5c2: @ DoDialog(Stack[-4])
0x5c3: Pop(0)
0x5c4: PushEmpty(bool, object)
0x5c5: PushEmpty(object)
0x5c6: Call2 0x8e6

0x5c7: Stack[-2] = Stack[-1]
0x5c8: Pop(1)
0x5c9: Call2 0x827

0x5ca: Pop(2)
0x5cb: PushEmpty(object, object)
0x5cc: Stack[-2] = Stack[-11]
0x5cd: Stack[-1] = Stack[-6]
0x5ce: Push(-2, 4); TaskCall(7)
0x5cf: Call2 0x5e6

0x5d0: Pop(-2, 4); TaskReturn
0x5d1: Pop(2)
0x5d2: @@ IsDialogEnd(Stack[-1])
0x5d3: Pop(0)
0x5d4: Pop(0); Push((bool) Stack[-1] == 0)
0x5d5: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5d6: @ sync()
0x5d7: Pop(0)
0x5d8: @@ IsDialogEnd(Stack[-1])
0x5d9: Pop(0)
0x5da: GOTO 0x5d4

0x5db: PushEmpty(object)
0x5dc: Stack[-1] = Stack[-10]
0x5dd: Call2 0x816

0x5de: Pop(1)
0x5df: @ StopDialog(Stack[-4])
0x5e0: Pop(0)
0x5e1: @@ GetReturnValue(Stack[-2])
0x5e2: Pop(0)
0x5e3: Stack[-10] = Stack[-2]
0x5e4: Return(); Pop(8)

0x5e5: Stack[-4] = 0
0x5e6: PushEmpty()
0x5e7: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5e8: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5e9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5ea: Push((int) 1)
0x5eb: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x5ec: PushEmpty(string)
0x5ed: Stack[-1] = "Neutral"
0x5ee: Call2 0x625

0x5ef: Pop(1)
0x5f0: Push((int) 539315)
0x5f1: @@ SetMessage(Stack[-1])
0x5f2: Pop(1)
0x5f3: @@ ClearReplies()
0x5f4: Pop(0)
0x5f5: Push((int) 542623)
0x5f6: Push((int) 45026)
0x5f7: Push((int) 45025)
0x5f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f9: Pop(3)
0x5fa: Push((int) 542622)
0x5fb: Push((int) -1)
0x5fc: Push((int) 45024)
0x5fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fe: Pop(3)
0x5ff: Push((int) 539316)
0x600: Push((int) -1)
0x601: Push((int) 41259)
0x602: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x603: Pop(3)
0x604: GOTO 0x607

0x605: Return(); Pop(0)

0x606: GOTO 0x5ea

0x607: PushEmpty(bool)
0x608: Call2 0x936

0x609: Pop(0)
0x60a: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x60b: @ lshWaitForAnimEnd()
0x60c: Pop(0)
0x60d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x60e: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x60f: GOTO 0x615

0x610: PushEmpty(string)
0x611: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x612: Call2 0x8b1

0x613: Pop(1)
0x614: GOTO 0x60b

0x615: GOTO 0x624

0x616: Push("all")
0x617: Push("idle")
0x618: @ PlayAnimation(Stack[-2], Stack[-1])
0x619: Pop(2)
0x61a: @ WaitForAnimEnd()
0x61b: Pop(0)
0x61c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x61d: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61e: GOTO 0x624

0x61f: Push("all")
0x620: Push("idle")
0x621: @ PlayAnimation(Stack[-2], Stack[-1])
0x622: Pop(2)
0x623: GOTO 0x61a

0x624: Return(); Pop(0)

0x625: PushEmpty()
0x626: PushEmpty(bool)
0x627: Call2 0x936

0x628: Pop(0)
0x629: Pop(1); Push((bool) Stack[-1] == 0)
0x62a: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x62b: Return(); Pop(0)

0x62c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x62d: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62e: Return(); Pop(0)

0x62f: PushEmpty(string, bool)
0x630: Stack[-2] = Stack[-3]
0x631: Push("")
0x632: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x633: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x634: Stack[-1] = (bool) 0
0x635: GOTO 0x637

0x636: Stack[-1] = (bool) 1
0x637: Call2 0x8c1

0x638: Pop(2)
0x639: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x63a: Return(); Pop(0)

0x63b: PushEmpty()
0x63c: Push((int) 1)
0x63d: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x63e: PushEmpty()
0x63f: Call2 0x8df

0x640: Pop(0)
0x641: Push((int) 41258)
0x642: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x643: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x644: PushEmpty(string)
0x645: Stack[-1] = "Neutral"
0x646: Call2 0x625

0x647: Pop(1)
0x648: Push((int) 539315)
0x649: @@ SetMessage(Stack[-1])
0x64a: Pop(1)
0x64b: @@ ClearReplies()
0x64c: Pop(0)
0x64d: Push((int) 542623)
0x64e: Push((int) 45026)
0x64f: Push((int) 45025)
0x650: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x651: Pop(3)
0x652: Push((int) 542622)
0x653: Push((int) -1)
0x654: Push((int) 45024)
0x655: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x656: Pop(3)
0x657: Push((int) 539316)
0x658: Push((int) -1)
0x659: Push((int) 41259)
0x65a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65b: Pop(3)
0x65c: Return(); Pop(0)

0x65d: Push((int) 45026)
0x65e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x65f: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x660: PushEmpty(string)
0x661: Stack[-1] = "Oracle"
0x662: Call2 0x625

0x663: Pop(1)
0x664: Push((int) 542624)
0x665: @@ SetMessage(Stack[-1])
0x666: Pop(1)
0x667: @@ ClearReplies()
0x668: Pop(0)
0x669: Push((int) 542629)
0x66a: Push((int) 45032)
0x66b: Push((int) 45031)
0x66c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66d: Pop(3)
0x66e: Push((int) 542625)
0x66f: Push((int) 45028)
0x670: Push((int) 45027)
0x671: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x672: Pop(3)
0x673: Return(); Pop(0)

0x674: Push((int) 45028)
0x675: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x676: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x677: PushEmpty(string)
0x678: Stack[-1] = "Neutral"
0x679: Call2 0x625

0x67a: Pop(1)
0x67b: Push((int) 542626)
0x67c: @@ SetMessage(Stack[-1])
0x67d: Pop(1)
0x67e: @@ ClearReplies()
0x67f: Pop(0)
0x680: Push((int) 542627)
0x681: Push((int) -1)
0x682: Push((int) 45029)
0x683: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x684: Pop(3)
0x685: Push((int) 542628)
0x686: Push((int) -1)
0x687: Push((int) 45030)
0x688: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x689: Pop(3)
0x68a: Return(); Pop(0)

0x68b: Push((int) 45032)
0x68c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x68d: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x68e: PushEmpty(string)
0x68f: Stack[-1] = "Oracle"
0x690: Call2 0x625

0x691: Pop(1)
0x692: Push((int) 542630)
0x693: @@ SetMessage(Stack[-1])
0x694: Pop(1)
0x695: @@ ClearReplies()
0x696: Pop(0)
0x697: Push((int) 542631)
0x698: Push((int) -1)
0x699: Push((int) 45033)
0x69a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69b: Pop(3)
0x69c: Push((int) 542632)
0x69d: Push((int) -1)
0x69e: Push((int) 45034)
0x69f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a0: Pop(3)
0x6a1: Return(); Pop(0)

0x6a2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6a3: PushEmpty(bool)
0x6a4: Call2 0x936

0x6a5: Pop(0)
0x6a6: IF (Stack[-1] == 0) GOTO 0x6aa; Pop(1)

0x6a7: @ lshStopAnimation()
0x6a8: Pop(0)
0x6a9: GOTO 0x6ac

0x6aa: @ StopAnimation()
0x6ab: Pop(0)
0x6ac: Return(); Pop(0)

0x6ad: GOTO 0x63c

0x6ae: Return(); Pop(0)

0x6af: Push(GlobalVars[1])
0x6b0: Stack[-1] = (bool) 0
0x6b1: GlobalVars[1] = Stack[-1]; Pop(1)
0x6b2: PushEmpty()
0x6b3: Call2 0x6b6

0x6b4: Pop(0)
0x6b5: Return(); Pop(0)

0x6b6: PushEmpty(bool)
0x6b7: Call2 0x7cd

0x6b8: Pop(0)
0x6b9: Pop(1); Push((bool) Stack[-1] == 0)
0x6ba: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6bb: @ Hold()
0x6bc: Pop(0)
0x6bd: @ GetDirection(Stack[-0])
0x6be: Pop(0)
0x6bf: PushEmpty()
0x6c0: Call2 0x766

0x6c1: Pop(0)
0x6c2: GOTO 0x6bf

0x6c3: Return(); Pop(0)

0x6c4: PushEmpty(object, object)
0x6c5: Push("player")
0x6c6: @ FindActor(Stack[-2], Stack[-1])
0x6c7: Pop(1)
0x6c8: Pop(0); Push((bool) Stack[-1] == 0)
0x6c9: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6ca: Stack[-3] = (bool) 0
0x6cb: Return(); Pop(2)

0x6cc: PushEmpty(bool, object)
0x6cd: Stack[-1] = Stack[-3]
0x6ce: Call2 0x7c4

0x6cf: Stack[-5] = Stack[-2]
0x6d0: Pop(2)
0x6d1: Return(); Pop(2)

0x6d2: Stack[-1] = 0
0x6d3: Push(CvectorIndex(Stack[-0], 0))
0x6d4: Push(CvectorIndex(Stack[-0], 2))
0x6d5: @ RotateAsync(Stack[-2], Stack[-1])
0x6d6: Pop(2)
0x6d7: Return(); Pop(0)

0x6d8: PushEmpty(object, bool, object, bool)
0x6d9: Push("player")
0x6da: @ FindActor(Stack[-3], Stack[-1])
0x6db: Pop(1)
0x6dc: Pop(0); Push((bool) Stack[-2] == 0)
0x6dd: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6de: Stack[-5] = (bool) 0
0x6df: Return(); Pop(4)

0x6e0: PushEmpty(float, object)
0x6e1: Stack[-1] = Stack[-4]
0x6e2: Call2 0x7b2

0x6e3: Pop(1)
0x6e4: Push((float)90000.0)
0x6e5: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x6e6: IF (Stack[-1] == 0) GOTO 0x6e9; Pop(1)

0x6e7: Stack[-5] = (bool) 0
0x6e8: Return(); Pop(4)

0x6e9: @ CanSee(Stack[-1], Stack[-2])
0x6ea: Pop(0)
0x6eb: Stack[-5] = Stack[-1]
0x6ec: Return(); Pop(4)

0x6ed: Stack[-2] = 0
0x6ee: PushEmpty(float, float)
0x6ef: Push((int) 8)
0x6f0: Push((int) 16)
0x6f1: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x6f2: Pop(2)
0x6f3: Push((int) 10)
0x6f4: @ SetTimer(Stack[-1], Stack[-2])
0x6f5: Pop(1)
0x6f6: Return(); Pop(2)

0x6f7: Push((int) 10)
0x6f8: @ KillTimer(Stack[-1])
0x6f9: Pop(1)
0x6fa: Return(); Pop(0)

0x6fb: PushEmpty()
0x6fc: Push((int) 10)
0x6fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6fe: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x6ff: PushEmpty()
0x700: Call2 0x6f7

0x701: Pop(0)
0x702: PushEmpty(bool)
0x703: Stack[-1] = (bool) 0
0x704: PushEmpty(bool)
0x705: Call2 0x7cd

0x706: Pop(0)
0x707: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x708: PushEmpty(bool)
0x709: Call2 0x6d8

0x70a: Pop(0)
0x70b: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x70c: Stack[-1] = (bool) 1
0x70d: IF (Stack[-1] == 0) GOTO 0x71a; Pop(1)

0x70e: PushEmpty(bool)
0x70f: Call2 0x6c4

0x710: Pop(0)
0x711: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x712: PushEmpty(bool, object)
0x713: PushEmpty(object)
0x714: Call2 0x8e6

0x715: Stack[-2] = Stack[-1]
0x716: Pop(1)
0x717: Call2 0x861

0x718: Pop(2)
0x719: GOTO 0x720

0x71a: PushEmpty()
0x71b: Call2 0x6d3

0x71c: Pop(0)
0x71d: PushEmpty()
0x71e: Call2 0x6ee

0x71f: Pop(0)
0x720: Return(); Pop(0)

0x721: PushEmpty()
0x722: Call2 0x7ad

0x723: Pop(0)
0x724: PushEmpty()
0x725: Call2 0x6f7

0x726: Pop(0)
0x727: @ lshStopSpeech()
0x728: Pop(0)
0x729: @ lshStopAnimation()
0x72a: Pop(0)
0x72b: @ StopAsync()
0x72c: Pop(0)
0x72d: @ Hold()
0x72e: Pop(0)
0x72f: Return(); Pop(0)

0x730: @ StopGroup0()
0x731: Pop(0)
0x732: PushEmpty()
0x733: Call2 0x6f7

0x734: Pop(0)
0x735: PushEmpty(string)
0x736: Stack[-1] = "Neutral"
0x737: Call2 0x8b1

0x738: Pop(1)
0x739: PushEmpty()
0x73a: Call2 0x6ee

0x73b: Pop(0)
0x73c: Return(); Pop(0)

0x73d: PushEmpty()
0x73e: Push(Stack[-1])
0x73f: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x740: PushEmpty()
0x741: Call2 0x6ee

0x742: Pop(0)
0x743: GOTO 0x748

0x744: PushEmpty(string)
0x745: Stack[-1] = "Neutral"
0x746: Call2 0x8b1

0x747: Pop(1)
0x748: Return(); Pop(0)

0x749: PushEmpty(bool, bool)
0x74a: @ IsOverrideActive(Stack[-1])
0x74b: Pop(0)
0x74c: Pop(0); Push((bool) Stack[-1] == 0)
0x74d: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x74e: EventDisable(0)
0x74f: PushEmpty()
0x750: Call2 0x7ad

0x751: Pop(0)
0x752: PushEmpty(bool, object)
0x753: Stack[-1] = Stack[-5]
0x754: Call2 0x7c4

0x755: Pop(2)
0x756: EventEnable(0)
0x757: PushEmpty(object)
0x758: Stack[-1] = Stack[-4]
0x759: Call2 0xa24

0x75a: Pop(1)
0x75b: PushEmpty(string)
0x75c: Stack[-1] = "Neutral"
0x75d: Call2 0x8b1

0x75e: Pop(1)
0x75f: PushEmpty()
0x760: Call2 0x6f7

0x761: Pop(0)
0x762: PushEmpty()
0x763: Call2 0x6ee

0x764: Pop(0)
0x765: Return(); Pop(2)

0x766: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x767: @ WaitForAnimEnd()
0x768: Pop(0)
0x769: PushEmpty(bool)
0x76a: Call2 0x7cd

0x76b: Pop(0)
0x76c: Pop(1); Push((bool) Stack[-1] == 0)
0x76d: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x76e: Return(); Pop(12)

0x76f: PushEmpty(int)
0x770: Call2 0x91d

0x771: Stack[-7] = Stack[-1]
0x772: Pop(1)
0x773: Stack[-5] = (int) 0
0x774: PushEmpty(bool)
0x775: Stack[-1] = (bool) 0
0x776: Push((int) 5)
0x777: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x778: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x779: PushEmpty(bool)
0x77a: Call2 0x7cd

0x77b: Pop(0)
0x77c: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x77d: Stack[-1] = (bool) 1
0x77e: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x77f: Pop(0); Push((bool) Stack[-6] == 0)
0x780: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x781: Push((int) 3)
0x782: @ Sleep(Stack[-1], Stack[-5])
0x783: Pop(1)
0x784: Pop(0); Push((bool) Stack[-4] == 0)
0x785: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x786: GOTO 0x7a8

0x787: GOTO 0x79d

0x788: @ irand(Stack[-3], Stack[-6])
0x789: Pop(0)
0x78a: Push((int) 5)
0x78b: @ irand(Stack[-3], Stack[-1])
0x78c: Pop(1)
0x78d: Push((int) 0)
0x78e: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x78f: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x790: Stack[-3] = (int) 0
0x791: Push("all")
0x792: PushEmpty(string, int)
0x793: Stack[-1] = Stack[-6]
0x794: Call2 0x916

0x795: Pop(1)
0x796: @ PlayAnimation(Stack[-2], Stack[-1])
0x797: Pop(2)
0x798: @ WaitForAnimEnd(Stack[-1])
0x799: Pop(0)
0x79a: Pop(0); Push((bool) Stack[-1] == 0)
0x79b: IF (Stack[-1] == 0) GOTO 0x79d; Pop(1)

0x79c: GOTO 0x7a8

0x79d: PushEmpty(bool)
0x79e: Call2 0x7ab

0x79f: Pop(0)
0x7a0: Pop(1); Push((bool) Stack[-1] == 0)
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x7a2: GOTO 0x7a8

0x7a3: @ ResetAAS()
0x7a4: Pop(0)
0x7a5: Push((int) 1)
0x7a6: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x7a7: GOTO 0x774

0x7a8: @ ResetAAS()
0x7a9: Pop(0)
0x7aa: Return(); Pop(12)

0x7ab: Stack[-1] = (bool) 1
0x7ac: Return(); Pop(0)

0x7ad: @ StopAnimation()
0x7ae: Pop(0)
0x7af: @ StopGroup0()
0x7b0: Pop(0)
0x7b1: Return(); Pop(0)

0x7b2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x7b3: @ GetPosition(Stack[-3])
0x7b4: Pop(0)
0x7b5: @@ GetPosition(Stack[-2])
0x7b6: Pop(0)
0x7b7: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x7b8: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x7b9: Return(); Pop(6)

0x7ba: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x7bb: @ GetPosition(Stack[-3])
0x7bc: Pop(0)
0x7bd: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x7be: Push(CvectorIndex(Stack[-2], 0))
0x7bf: Push(CvectorIndex(Stack[-3], 2))
0x7c0: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x7c1: Pop(2)
0x7c2: Stack[-8] = Stack[-1]
0x7c3: Return(); Pop(6)

0x7c4: PushEmpty(cvector, cvector)
0x7c5: @@ GetPosition(Stack[-1])
0x7c6: Pop(0)
0x7c7: PushEmpty(bool, cvector)
0x7c8: Stack[-1] = Stack[-3]
0x7c9: Call2 0x7ba

0x7ca: Stack[-6] = Stack[-2]
0x7cb: Pop(2)
0x7cc: Return(); Pop(2)

0x7cd: PushEmpty(bool, bool)
0x7ce: @ IsLoaded(Stack[-1])
0x7cf: Pop(0)
0x7d0: Stack[-3] = Stack[-1]
0x7d1: Return(); Pop(2)

0x7d2: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x7d3: @@ GetPosition(Stack[-8])
0x7d4: Pop(0)
0x7d5: @@ GetEyesHeight(Stack[-9])
0x7d6: Pop(0)
0x7d7: Push(CvectorIndex(Stack[-8], 1))
0x7d8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x7d9: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x7da: @ GetPosition(Stack[-7])
0x7db: Pop(0)
0x7dc: @ GetEyesHeight(Stack[-9])
0x7dd: Pop(0)
0x7de: Push(CvectorIndex(Stack[-7], 1))
0x7df: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x7e0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x7e1: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x7e2: Push(CvectorIndex(Stack[-6], 1))
0x7e3: Stack[-1] = (int) 0
0x7e4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x7e5: Pop(0); Push(Stack[-6] | Stack[-6]);
0x7e6: Pop(1); Push(Sqrt(Stack[-1]))
0x7e7: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x7e8: Stack[-5] = -Stack[-6]; Pop(0);
0x7e9: Pop(0); Push(Stack[-6] * Stack[-19]);
0x7ea: PushEmpty(cvector, cvector)
0x7eb: Push(CVector(0.0, 1.0, 0.0))
0x7ec: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x7ed: Call2 0x8ec

0x7ee: Pop(1)
0x7ef: Push((int) 25)
0x7f0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7f1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7f2: Push(CVector(0.0, 10.0, 0.0))
0x7f3: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x7f4: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x7f5: @ IsOverrideActive(Stack[-2])
0x7f6: Pop(0)
0x7f7: Push(Stack[-2])
0x7f8: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7f9: Stack[-21] = (bool) 0
0x7fa: Return(); Pop(18)

0x7fb: @ StopWorld()
0x7fc: Pop(0)
0x7fd: @ CameraTransit(Stack[-3], Stack[-5])
0x7fe: Pop(0)
0x7ff: Push(CvectorIndex(Stack[-4], 0))
0x800: Push(CvectorIndex(Stack[-5], 2))
0x801: @ Rotate(Stack[-2], Stack[-1])
0x802: Pop(2)
0x803: PushEmpty(bool)
0x804: Call2 0x936

0x805: Pop(0)
0x806: IF (Stack[-1] == 0) GOTO 0x808; Pop(1)

0x807: GOTO 0x810

0x808: Push("head")
0x809: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x80a: Pop(1)
0x80b: Push(Stack[-1])
0x80c: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x80d: Push("head")
0x80e: @ LookAsyncCamera(Stack[-1])
0x80f: Pop(1)
0x810: @ CameraWaitForPlayFinish()
0x811: Pop(0)
0x812: @ ResumeWorld()
0x813: Pop(0)
0x814: Stack[-21] = (bool) 1
0x815: Return(); Pop(18)

0x816: PushEmpty(bool, bool)
0x817: @ CameraSwitchToNormal()
0x818: Pop(0)
0x819: PushEmpty(bool)
0x81a: Call2 0x936

0x81b: Pop(0)
0x81c: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x81d: GOTO 0x826

0x81e: Push("head")
0x81f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x820: Pop(1)
0x821: Push(Stack[-1])
0x822: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x823: Push("head")
0x824: @ UnlookAsync(Stack[-1])
0x825: Pop(1)
0x826: Return(); Pop(2)

0x827: PushEmpty(int, int, int, int)
0x828: Push("voice_common")
0x829: @ GetVariable(Stack[-1], Stack[-3])
0x82a: Pop(1)
0x82b: Push(Stack[-2])
0x82c: IF (Stack[-1] == 0) GOTO 0x84d; Pop(1)

0x82d: PushEmpty(bool, object)
0x82e: Stack[-1] = Stack[-7]
0x82f: Call2 0x861

0x830: Pop(1)
0x831: Pop(1); Push((bool) Stack[-1] == 0)
0x832: IF (Stack[-1] == 0) GOTO 0x83b; Pop(1)

0x833: PushEmpty(bool, object)
0x834: Stack[-1] = Stack[-7]
0x835: Call2 0x886

0x836: Pop(1)
0x837: Pop(1); Push((bool) Stack[-1] == 0)
0x838: IF (Stack[-1] == 0) GOTO 0x83b; Pop(1)

0x839: Stack[-6] = (bool) 0
0x83a: Return(); Pop(4)

0x83b: Push((int) 2)
0x83c: @ irand(Stack[-2], Stack[-1])
0x83d: Pop(1)
0x83e: Push(Stack[-1])
0x83f: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x840: Push("voice_common")
0x841: Push((int) 1)
0x842: Pop(1); Push(Stack[-4] + Stack[-1]);
0x843: Push((int) 3)
0x844: Pop(2); Push(Stack[-2] % Stack[-1]);
0x845: @ SetVariable(Stack[-2], Stack[-1])
0x846: Pop(2)
0x847: GOTO 0x84c

0x848: Push("voice_common")
0x849: Push((int) 0)
0x84a: @ SetVariable(Stack[-2], Stack[-1])
0x84b: Pop(2)
0x84c: GOTO 0x85f

0x84d: PushEmpty(bool, object)
0x84e: Stack[-1] = Stack[-7]
0x84f: Call2 0x886

0x850: Pop(1)
0x851: Pop(1); Push((bool) Stack[-1] == 0)
0x852: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x853: PushEmpty(bool, object)
0x854: Stack[-1] = Stack[-7]
0x855: Call2 0x861

0x856: Pop(1)
0x857: Pop(1); Push((bool) Stack[-1] == 0)
0x858: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x859: Stack[-6] = (bool) 0
0x85a: Return(); Pop(4)

0x85b: Push("voice_common")
0x85c: Push((int) 1)
0x85d: @ SetVariable(Stack[-2], Stack[-1])
0x85e: Pop(2)
0x85f: Stack[-6] = (bool) 1
0x860: Return(); Pop(4)

0x861: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x862: Stack[-5] = "c"
0x863: Stack[-4] = (int) 0
0x864: Push((int) 1)
0x865: IF (Stack[-1] == 0) GOTO 0x871; Pop(1)

0x866: Push((int) 1)
0x867: Pop(1); Push(Stack[-5] + Stack[-1]);
0x868: Pop(1); Push(Stack[-6] + Stack[-1]);
0x869: @@ HasProperty(Stack[-1], Stack[-4])
0x86a: Pop(1)
0x86b: Pop(0); Push((bool) Stack[-3] == 0)
0x86c: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x86d: GOTO 0x871

0x86e: Push((int) 1)
0x86f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x870: GOTO 0x864

0x871: Pop(0); Push((bool) Stack[-4] == 0)
0x872: IF (Stack[-1] == 0) GOTO 0x875; Pop(1)

0x873: Stack[-12] = (bool) 0
0x874: Return(); Pop(10)

0x875: Stack[-2] = (int) 0
0x876: Push((int) 1)
0x877: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x878: IF (Stack[-1] == 0) GOTO 0x87b; Pop(1)

0x879: @ irand(Stack[-2], Stack[-4])
0x87a: Pop(0)
0x87b: Push((int) 1)
0x87c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x87d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x87e: @@ GetProperty(Stack[-1], Stack[-2])
0x87f: Pop(1)
0x880: PushEmpty(bool, string)
0x881: Stack[-1] = Stack[-3]
0x882: Call2 0x8d0

0x883: Stack[-14] = Stack[-2]
0x884: Pop(2)
0x885: Return(); Pop(10)

0x886: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x887: Push("d")
0x888: PushEmpty(int)
0x889: Call2 0x907

0x88a: Pop(0)
0x88b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x88c: Push("m")
0x88d: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x88e: Stack[-4] = (int) 0
0x88f: Push((int) 1)
0x890: IF (Stack[-1] == 0) GOTO 0x89c; Pop(1)

0x891: Push((int) 1)
0x892: Pop(1); Push(Stack[-5] + Stack[-1]);
0x893: Pop(1); Push(Stack[-6] + Stack[-1]);
0x894: @@ HasProperty(Stack[-1], Stack[-4])
0x895: Pop(1)
0x896: Pop(0); Push((bool) Stack[-3] == 0)
0x897: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x898: GOTO 0x89c

0x899: Push((int) 1)
0x89a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x89b: GOTO 0x88f

0x89c: Pop(0); Push((bool) Stack[-4] == 0)
0x89d: IF (Stack[-1] == 0) GOTO 0x8a0; Pop(1)

0x89e: Stack[-12] = (bool) 0
0x89f: Return(); Pop(10)

0x8a0: Stack[-2] = (int) 0
0x8a1: Push((int) 1)
0x8a2: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x8a3: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x8a4: @ irand(Stack[-2], Stack[-4])
0x8a5: Pop(0)
0x8a6: Push((int) 1)
0x8a7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x8a8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x8a9: @@ GetProperty(Stack[-1], Stack[-2])
0x8aa: Pop(1)
0x8ab: PushEmpty(bool, string)
0x8ac: Stack[-1] = Stack[-3]
0x8ad: Call2 0x8d0

0x8ae: Stack[-14] = Stack[-2]
0x8af: Pop(2)
0x8b0: Return(); Pop(10)

0x8b1: PushEmpty(bool, float, float, bool, float, float)
0x8b2: @ lshHasAnimation(Stack[-3], Stack[-7])
0x8b3: Pop(0)
0x8b4: Push(Stack[-3])
0x8b5: IF (Stack[-1] == 0) GOTO 0x8bc; Pop(1)

0x8b6: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x8b7: Pop(0)
0x8b8: Push((bool) 0)
0x8b9: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8ba: Pop(1)
0x8bb: GOTO 0x8c0

0x8bc: Push("Can't find lsh animation : ")
0x8bd: Pop(1); Push(Stack[-1] + Stack[-8]);
0x8be: @ Trace(Stack[-1])
0x8bf: Pop(1)
0x8c0: Return(); Pop(6)

0x8c1: PushEmpty(bool, float, float, bool, float, float)
0x8c2: @ lshHasAnimation(Stack[-3], Stack[-8])
0x8c3: Pop(0)
0x8c4: Push(Stack[-3])
0x8c5: IF (Stack[-1] == 0) GOTO 0x8cb; Pop(1)

0x8c6: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x8c7: Pop(0)
0x8c8: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x8c9: Pop(0)
0x8ca: GOTO 0x8cf

0x8cb: Push("Can't find lsh animation : ")
0x8cc: Pop(1); Push(Stack[-1] + Stack[-9]);
0x8cd: @ Trace(Stack[-1])
0x8ce: Pop(1)
0x8cf: Return(); Pop(6)

0x8d0: PushEmpty(bool, bool)
0x8d1: PushEmpty(bool)
0x8d2: Call2 0x936

0x8d3: Pop(0)
0x8d4: IF (Stack[-1] == 0) GOTO 0x8dd; Pop(1)

0x8d5: @ lshHasSpeech(Stack[-1], Stack[-3])
0x8d6: Pop(0)
0x8d7: Push(Stack[-1])
0x8d8: IF (Stack[-1] == 0) GOTO 0x8dd; Pop(1)

0x8d9: @ lshPlaySpeech(Stack[-3])
0x8da: Pop(0)
0x8db: Stack[-4] = (bool) 1
0x8dc: Return(); Pop(2)

0x8dd: Stack[-4] = (bool) 0
0x8de: Return(); Pop(2)

0x8df: PushEmpty(bool)
0x8e0: Call2 0x936

0x8e1: Pop(0)
0x8e2: IF (Stack[-1] == 0) GOTO 0x8e5; Pop(1)

0x8e3: @ lshStopSpeech()
0x8e4: Pop(0)
0x8e5: Return(); Pop(0)

0x8e6: PushEmpty(object, object)
0x8e7: @ self(Stack[-1])
0x8e8: Pop(0)
0x8e9: Stack[-3] = Stack[-1]
0x8ea: Return(); Pop(2)

0x8eb: Stack[-1] = 0
0x8ec: PushEmpty(float, float)
0x8ed: Pop(0); Push(Stack[-3] | Stack[-3]);
0x8ee: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x8ef: Push((float)0.0)
0x8f0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x8f1: IF (Stack[-1] == 0) GOTO 0x8f4; Pop(1)

0x8f2: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x8f3: Return(); Pop(2)

0x8f4: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x8f5: Return(); Pop(2)

0x8f6: PushEmpty(int, int)
0x8f7: @ GetVariable(Stack[-3], Stack[-1])
0x8f8: Pop(0)
0x8f9: Stack[-4] = Stack[-1]
0x8fa: Return(); Pop(2)

0x8fb: PushEmpty(object, object)
0x8fc: @ FindActor(Stack[-1], Stack[-4])
0x8fd: Pop(0)
0x8fe: Pop(0); Push((bool) Stack[-1] == 0)
0x8ff: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x900: Stack[-5] = (bool) 0
0x901: Return(); Pop(2)

0x902: @ Trigger(Stack[-1], Stack[-3])
0x903: Pop(0)
0x904: Stack[-5] = (bool) 1
0x905: Return(); Pop(2)

0x906: Stack[-1] = 0
0x907: PushEmpty(float, float)
0x908: @ GetGameTime(Stack[-1])
0x909: Pop(0)
0x90a: Push((int) 1)
0x90b: PushEmpty(int)
0x90c: Push((int) 24)
0x90d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x90e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x90f: Return(); Pop(2)

0x910: PushEmpty()
0x911: PushEmpty(int)
0x912: Call2 0x907

0x913: Pop(0)
0x914: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x915: Return(); Pop(0)

0x916: PushEmpty(string, string)
0x917: Stack[-1] = "idle"
0x918: Push(Stack[-3])
0x919: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x91a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x91b: Stack[-4] = Stack[-1]
0x91c: Return(); Pop(2)

0x91d: PushEmpty(int, bool, int, bool)
0x91e: Stack[-2] = (int) 0
0x91f: Push("all")
0x920: PushEmpty(string, int)
0x921: Stack[-1] = Stack[-5]
0x922: Call2 0x916

0x923: Pop(1)
0x924: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x925: Pop(2)
0x926: Pop(0); Push((bool) Stack[-1] == 0)
0x927: IF (Stack[-1] == 0) GOTO 0x929; Pop(1)

0x928: GOTO 0x92c

0x929: Push((int) 1)
0x92a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x92b: GOTO 0x91f

0x92c: Stack[-5] = Stack[-2]
0x92d: Return(); Pop(4)

0x92e: Stack[-1] = (int) 515553
0x92f: Return(); Pop(0)

0x930: Stack[-1] = (int) 502878
0x931: Return(); Pop(0)

0x932: Stack[-1] = "ui/NPC_Starshina.png"
0x933: Return(); Pop(0)

0x934: Stack[-1] = "ui/NPC_Starshina_b.png"
0x935: Return(); Pop(0)

0x936: Stack[-1] = (bool) 1
0x937: Return(); Pop(0)

0x938: PushEmpty()
0x939: Push("k8q01")
0x93a: Push((int) 5)
0x93b: @ SetVariable(Stack[-2], Stack[-1])
0x93c: Pop(2)
0x93d: PushEmpty()
0x93e: Call2 0x9dd

0x93f: Pop(0)
0x940: Return(); Pop(0)

0x941: PushEmpty()
0x942: Push("k8q01")
0x943: Push((int) 7)
0x944: @ SetVariable(Stack[-2], Stack[-1])
0x945: Pop(2)
0x946: PushEmpty()
0x947: Call2 0x9d0

0x948: Pop(0)
0x949: Return(); Pop(0)

0x94a: PushEmpty()
0x94b: Push("ook11Starshina1")
0x94c: Push((int) 1)
0x94d: @ SetVariable(Stack[-2], Stack[-1])
0x94e: Pop(2)
0x94f: Return(); Pop(0)

0x950: PushEmpty()
0x951: Push("k11q01")
0x952: Push((int) 6)
0x953: @ SetVariable(Stack[-2], Stack[-1])
0x954: Pop(2)
0x955: PushEmpty()
0x956: Call2 0x9c3

0x957: Pop(0)
0x958: PushEmpty(bool, string, string)
0x959: Stack[-2] = "quest_k11_01"
0x95a: Stack[-1] = "place_burah"
0x95b: Call2 0x8fb

0x95c: Pop(3)
0x95d: Return(); Pop(0)

0x95e: PushEmpty()
0x95f: Push("ook11Starshina2")
0x960: Push((int) 1)
0x961: @ SetVariable(Stack[-2], Stack[-1])
0x962: Pop(2)
0x963: Return(); Pop(0)

0x964: PushEmpty()
0x965: PushEmpty()
0x966: Call2 0x9b6

0x967: Pop(0)
0x968: PushEmpty(bool, string, string)
0x969: Stack[-2] = "quest_k11_01"
0x96a: Stack[-1] = "fail"
0x96b: Call2 0x8fb

0x96c: Pop(3)
0x96d: Return(); Pop(0)

0x96e: PushEmpty()
0x96f: PushEmpty(int, string)
0x970: Stack[-1] = "k8q01"
0x971: Call2 0x8f6

0x972: Pop(1)
0x973: Push((int) 4)
0x974: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x975: IF (Stack[-1] == 0) GOTO 0x978; Pop(1)

0x976: Stack[-2] = (bool) 1
0x977: Return(); Pop(0)

0x978: Stack[-2] = (bool) 0
0x979: Return(); Pop(0)

0x97a: PushEmpty()
0x97b: PushEmpty(int, string)
0x97c: Stack[-1] = "k8q01"
0x97d: Call2 0x8f6

0x97e: Pop(1)
0x97f: Push((int) 6)
0x980: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x981: IF (Stack[-1] == 0) GOTO 0x984; Pop(1)

0x982: Stack[-2] = (bool) 1
0x983: Return(); Pop(0)

0x984: Stack[-2] = (bool) 0
0x985: Return(); Pop(0)

0x986: PushEmpty()
0x987: PushEmpty(int, string)
0x988: Stack[-1] = "k11q01"
0x989: Call2 0x8f6

0x98a: Pop(1)
0x98b: Push((int) 5)
0x98c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x98d: IF (Stack[-1] == 0) GOTO 0x990; Pop(1)

0x98e: Stack[-2] = (bool) 1
0x98f: Return(); Pop(0)

0x990: Stack[-2] = (bool) 0
0x991: Return(); Pop(0)

0x992: PushEmpty()
0x993: PushEmpty(int, string)
0x994: Stack[-1] = "ook11Starshina1"
0x995: Call2 0x8f6

0x996: Pop(1)
0x997: Push((int) 0)
0x998: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x999: IF (Stack[-1] == 0) GOTO 0x99c; Pop(1)

0x99a: Stack[-2] = (bool) 1
0x99b: Return(); Pop(0)

0x99c: Stack[-2] = (bool) 0
0x99d: Return(); Pop(0)

0x99e: PushEmpty()
0x99f: PushEmpty(int, string)
0x9a0: Stack[-1] = "k11q01"
0x9a1: Call2 0x8f6

0x9a2: Pop(1)
0x9a3: Push((int) 6)
0x9a4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9a5: IF (Stack[-1] == 0) GOTO 0x9a8; Pop(1)

0x9a6: Stack[-2] = (bool) 1
0x9a7: Return(); Pop(0)

0x9a8: Stack[-2] = (bool) 0
0x9a9: Return(); Pop(0)

0x9aa: PushEmpty()
0x9ab: PushEmpty(int, string)
0x9ac: Stack[-1] = "ook11Starshina2"
0x9ad: Call2 0x8f6

0x9ae: Pop(1)
0x9af: Push((int) 0)
0x9b0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9b1: IF (Stack[-1] == 0) GOTO 0x9b4; Pop(1)

0x9b2: Stack[-2] = (bool) 1
0x9b3: Return(); Pop(0)

0x9b4: Stack[-2] = (bool) 0
0x9b5: Return(); Pop(0)

0x9b6: PushEmpty(object, object)
0x9b7: Push((int) 788)
0x9b8: Push((int) 1)
0x9b9: Push((int) 542507)
0x9ba: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9bb: Pop(3)
0x9bc: PushEmpty(bool, object, int)
0x9bd: Stack[-2] = Stack[-4]
0x9be: Stack[-1] = (int) 480
0x9bf: Call2 0x9f7

0x9c0: Pop(3)
0x9c1: Return(); Pop(2)

0x9c2: Stack[-1] = 0
0x9c3: PushEmpty(object, object)
0x9c4: Push((int) 489)
0x9c5: Push((int) 1)
0x9c6: Push((int) 528056)
0x9c7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9c8: Pop(3)
0x9c9: PushEmpty(bool, object, int)
0x9ca: Stack[-2] = Stack[-4]
0x9cb: Stack[-1] = (int) 480
0x9cc: Call2 0x9f7

0x9cd: Pop(3)
0x9ce: Return(); Pop(2)

0x9cf: Stack[-1] = 0
0x9d0: PushEmpty(object, object)
0x9d1: Push((int) 445)
0x9d2: Push((int) 1)
0x9d3: Push((int) 526470)
0x9d4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9d5: Pop(3)
0x9d6: PushEmpty(bool, object, int)
0x9d7: Stack[-2] = Stack[-4]
0x9d8: Stack[-1] = (int) 438
0x9d9: Call2 0x9f7

0x9da: Pop(3)
0x9db: Return(); Pop(2)

0x9dc: Stack[-1] = 0
0x9dd: PushEmpty(object, object)
0x9de: Push((int) 443)
0x9df: Push((int) 1)
0x9e0: Push((int) 526468)
0x9e1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9e2: Pop(3)
0x9e3: PushEmpty(bool, object, int)
0x9e4: Stack[-2] = Stack[-4]
0x9e5: Stack[-1] = (int) 438
0x9e6: Call2 0x9f7

0x9e7: Pop(3)
0x9e8: Return(); Pop(2)

0x9e9: Stack[-1] = 0
0x9ea: PushEmpty(object, object)
0x9eb: @ GetDiaryRoot(Stack[-1])
0x9ec: Pop(0)
0x9ed: Pop(0); Push((bool) Stack[-1] == 0)
0x9ee: IF (Stack[-1] == 0) GOTO 0x9f4; Pop(1)

0x9ef: Push("Can't retrieve diary root")
0x9f0: @ Trace(Stack[-1])
0x9f1: Pop(1)
0x9f2: Stack[-3] = (bool) 0
0x9f3: Return(); Pop(2)

0x9f4: Stack[-3] = Stack[-1]
0x9f5: Return(); Pop(2)

0x9f6: Stack[-1] = 0
0x9f7: PushEmpty(object, object, int, object, object, int)
0x9f8: PushEmpty(object)
0x9f9: Call2 0x9ea

0x9fa: Stack[-4] = Stack[-1]
0x9fb: Pop(1)
0x9fc: @@ Find(Stack[-7], Stack[-2])
0x9fd: Pop(0)
0x9fe: Pop(0); Push((bool) Stack[-2] == 0)
0x9ff: IF (Stack[-1] == 0) GOTO 0xa06; Pop(1)

0xa00: Push("Can't find diary parent with id: ")
0xa01: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa02: @ Trace(Stack[-1])
0xa03: Pop(1)
0xa04: Stack[-9] = (bool) 0
0xa05: Return(); Pop(6)

0xa06: @@ AddChild(Stack[-8])
0xa07: Pop(0)
0xa08: Push((int) 7)
0xa09: @ SendWorldWndMessage(Stack[-1])
0xa0a: Pop(1)
0xa0b: @@ GetCategory(Stack[-1])
0xa0c: Pop(0)
0xa0d: @ SetDiarySection(Stack[-1])
0xa0e: Pop(0)
0xa0f: Stack[-9] = (bool) 0
0xa10: Return(); Pop(6)

0xa11: Stack[-2] = 0
0xa12: Stack[-3] = 0
0xa13: PushEmpty(int, int)
0xa14: Push("branch")
0xa15: @ GetVariable(Stack[-1], Stack[-2])
0xa16: Pop(1)
0xa17: Push((int) 0)
0xa18: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa19: IF (Stack[-1] == 0) GOTO 0xa1d; Pop(1)

0xa1a: Stack[-3] = (int) 1
0xa1b: Return(); Pop(2)

0xa1c: GOTO 0xa22

0xa1d: Push((int) 1)
0xa1e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa1f: IF (Stack[-1] == 0) GOTO 0xa22; Pop(1)

0xa20: Stack[-3] = (int) 2
0xa21: Return(); Pop(2)

0xa22: Stack[-3] = (int) 3
0xa23: Return(); Pop(2)

0xa24: PushEmpty()
0xa25: Push(GlobalVars[1])
0xa26: Pop(1); Push((bool) Stack[-1] == 0)
0xa27: IF (Stack[-1] == 0) GOTO 0xa31; Pop(1)

0xa28: PushEmpty(int, object)
0xa29: Stack[-1] = Stack[-3]
0xa2a: Push(-2, 1); TaskCall(0)
0xa2b: Call2 0x0

0xa2c: Pop(-2, 1); TaskReturn
0xa2d: Pop(2)
0xa2e: Push(GlobalVars[1])
0xa2f: Stack[-1] = (bool) 1
0xa30: GlobalVars[1] = Stack[-1]; Pop(1)
0xa31: PushEmpty(bool, int)
0xa32: Stack[-1] = (int) 8
0xa33: Call2 0x910

0xa34: Pop(1)
0xa35: IF (Stack[-1] == 0) GOTO 0xa3d; Pop(1)

0xa36: PushEmpty(int, object)
0xa37: Stack[-1] = Stack[-3]
0xa38: Push(-2, 1); TaskCall(2)
0xa39: Call2 0xcb

0xa3a: Pop(-2, 1); TaskReturn
0xa3b: Pop(2)
0xa3c: Return(); Pop(0)

0xa3d: PushEmpty(bool, int)
0xa3e: Stack[-1] = (int) 11
0xa3f: Call2 0x910

0xa40: Pop(1)
0xa41: IF (Stack[-1] == 0) GOTO 0xa49; Pop(1)

0xa42: PushEmpty(int, object)
0xa43: Stack[-1] = Stack[-3]
0xa44: Push(-2, 1); TaskCall(4)
0xa45: Call2 0x2d6

0xa46: Pop(-2, 1); TaskReturn
0xa47: Pop(2)
0xa48: Return(); Pop(0)

0xa49: PushEmpty(bool, int)
0xa4a: Stack[-1] = (int) 12
0xa4b: Call2 0x910

0xa4c: Pop(1)
0xa4d: IF (Stack[-1] == 0) GOTO 0xa55; Pop(1)

0xa4e: PushEmpty(int, object)
0xa4f: Stack[-1] = Stack[-3]
0xa50: Push(-2, 1); TaskCall(6)
0xa51: Call2 0x595

0xa52: Pop(-2, 1); TaskReturn
0xa53: Pop(2)
0xa54: Return(); Pop(0)

0xa55: Return(); Pop(0)

