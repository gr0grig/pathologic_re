GlobalVarCount = 3
	G_VAR_0 object 
	G_VAR_1 bool 
	G_VAR_2 bool 

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
	Grin
	Fear
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
	ui/NPC_Katerina.png
	ui/NPC_Katerina_b.png
	oob2Katerina1
	oob2Katerina2
	oob2Katerina3
	b8q03
	b8q03KaterinaGotoMat
	pt_map_mat
	AddMark
	b10q01TalkKaterina
	b10q01
	b2q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
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
	GetMainOutdoorScene (1 args)

RunOp = 0x7ba
RunTask = 12

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1b2 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3af Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x511 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x692 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x790 Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x806 Vars = (int)
		EVENT_6 Op = 0x82c Vars = ()
		EVENT_5 Op = 0x83b Vars = ()
		EVENT_45 Op = 0x848 Vars = (bool)
		EVENT_0 Op = 0x854 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x8dd

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xa36

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xa34

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xa38

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xa3a

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xb08

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
0x31: Call2 0x9f3

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x934

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
0x48: Call2 0x922

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
0x5b: Push((int) 518018)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 518019)
0x61: Push((int) -1)
0x62: Push((int) 19152)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 527797)
0x66: Push((int) -1)
0x67: Push((int) 29130)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0xa3c

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x9be

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
0x8d: Call2 0xa3c

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
0x9d: Call2 0x9ce

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x9ec

0xa6: Pop(0)
0xa7: Push((int) 19151)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 518018)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 518019)
0xb4: Push((int) -1)
0xb5: Push((int) 19152)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 527797)
0xb9: Push((int) -1)
0xba: Push((int) 29130)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xbf: PushEmpty(bool)
0xc0: Call2 0xa3c

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
0xcf: Stack[-1] = (float) 70.0
0xd0: Call2 0x8dd

0xd1: Pop(2)
0xd2: Pop(1); Push((bool) Stack[-1] == 0)
0xd3: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd4: Stack[-10] = (int) -2
0xd5: Return(); Pop(8)

0xd6: @ CreateDialog(Stack[-4])
0xd7: Pop(0)
0xd8: PushEmpty(int)
0xd9: Call2 0xa36

0xda: Pop(0)
0xdb: @@ SetNPCName(Stack[-1])
0xdc: Pop(1)
0xdd: PushEmpty(int)
0xde: Call2 0xa34

0xdf: Pop(0)
0xe0: @@ SetNPCDescription(Stack[-1])
0xe1: Pop(1)
0xe2: PushEmpty(string)
0xe3: Call2 0xa38

0xe4: Pop(0)
0xe5: @@ SetPhoto(Stack[-1])
0xe6: Pop(1)
0xe7: PushEmpty(string)
0xe8: Call2 0xa3a

0xe9: Pop(0)
0xea: @@ SetPhoto2(Stack[-1])
0xeb: Pop(1)
0xec: PushEmpty(int)
0xed: Call2 0xb08

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
0xfc: Call2 0x9f3

0xfd: Stack[-2] = Stack[-1]
0xfe: Pop(1)
0xff: Call2 0x934

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
0x113: Call2 0x922

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
0x121: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x122: PushEmpty(bool)
0x123: Stack[-1] = (bool) 0
0x124: PushEmpty(bool, object)
0x125: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x126: Call2 0xa91

0x127: Pop(1)
0x128: Pop(1); Push((bool) Stack[-1] == 0)
0x129: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12a: PushEmpty(bool, object)
0x12b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Call2 0xa9d

0x12d: Pop(1)
0x12e: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12f: Stack[-1] = (bool) 1
0x130: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x131: PushEmpty(object, object)
0x132: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x133: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x134: Call2 0xa3e

0x135: Pop(2)
0x136: PushEmpty(string)
0x137: Stack[-1] = "Suffering"
0x138: Call2 0x19c

0x139: Pop(1)
0x13a: Push((int) 520248)
0x13b: @@ SetMessage(Stack[-1])
0x13c: Pop(1)
0x13d: @@ ClearReplies()
0x13e: Pop(0)
0x13f: Push((int) 520249)
0x140: Push((int) 21442)
0x141: Push((int) 21441)
0x142: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x143: Pop(3)
0x144: GOTO 0x17e

0x145: PushEmpty(string)
0x146: Stack[-1] = "Neutral"
0x147: Call2 0x19c

0x148: Pop(1)
0x149: Push((int) 520268)
0x14a: @@ SetMessage(Stack[-1])
0x14b: Pop(1)
0x14c: @@ ClearReplies()
0x14d: Pop(0)
0x14e: PushEmpty(bool)
0x14f: Stack[-1] = (bool) 0
0x150: PushEmpty(bool, object)
0x151: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x152: Call2 0xa9d

0x153: Pop(1)
0x154: Pop(1); Push((bool) Stack[-1] == 0)
0x155: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x156: PushEmpty(bool, object)
0x157: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x158: Call2 0xaa9

0x159: Pop(1)
0x15a: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x15b: Stack[-1] = (bool) 1
0x15c: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x15d: Push((int) 520269)
0x15e: Push((int) 21462)
0x15f: Push((int) 21461)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: PushEmpty(bool)
0x163: Stack[-1] = (bool) 0
0x164: PushEmpty(bool, object)
0x165: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x166: Call2 0xa9d

0x167: Pop(1)
0x168: Pop(1); Push((bool) Stack[-1] == 0)
0x169: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16a: PushEmpty(bool, object)
0x16b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16c: Call2 0xab5

0x16d: Pop(1)
0x16e: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16f: Stack[-1] = (bool) 1
0x170: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x171: Push((int) 520272)
0x172: Push((int) 21465)
0x173: Push((int) 21464)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: Push((int) 520277)
0x177: Push((int) -1)
0x178: Push((int) 21469)
0x179: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a: Pop(3)
0x17b: GOTO 0x17e

0x17c: Return(); Pop(0)

0x17d: GOTO 0x120

0x17e: PushEmpty(bool)
0x17f: Call2 0xa3c

0x180: Pop(0)
0x181: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x182: @ lshWaitForAnimEnd()
0x183: Pop(0)
0x184: Push( Stack[3 + Tasks[-1].StackPointer] )
0x185: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x186: GOTO 0x18c

0x187: PushEmpty(string)
0x188: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x189: Call2 0x9be

0x18a: Pop(1)
0x18b: GOTO 0x182

0x18c: GOTO 0x19b

0x18d: Push("all")
0x18e: Push("idle")
0x18f: @ PlayAnimation(Stack[-2], Stack[-1])
0x190: Pop(2)
0x191: @ WaitForAnimEnd()
0x192: Pop(0)
0x193: Push( Stack[3 + Tasks[-1].StackPointer] )
0x194: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x195: GOTO 0x19b

0x196: Push("all")
0x197: Push("idle")
0x198: @ PlayAnimation(Stack[-2], Stack[-1])
0x199: Pop(2)
0x19a: GOTO 0x191

0x19b: Return(); Pop(0)

0x19c: PushEmpty()
0x19d: PushEmpty(bool)
0x19e: Call2 0xa3c

0x19f: Pop(0)
0x1a0: Pop(1); Push((bool) Stack[-1] == 0)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a2: Return(); Pop(0)

0x1a3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: Return(); Pop(0)

0x1a6: PushEmpty(string, bool)
0x1a7: Stack[-2] = Stack[-3]
0x1a8: Push("")
0x1a9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1ab: Stack[-1] = (bool) 0
0x1ac: GOTO 0x1ae

0x1ad: Stack[-1] = (bool) 1
0x1ae: Call2 0x9ce

0x1af: Pop(2)
0x1b0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1b1: Return(); Pop(0)

0x1b2: PushEmpty()
0x1b3: Push((int) 1)
0x1b4: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x1b5: PushEmpty()
0x1b6: Call2 0x9ec

0x1b7: Pop(0)
0x1b8: Push((int) 21461)
0x1b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bb: PushEmpty(object, object)
0x1bc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1be: Call2 0xa44

0x1bf: Pop(2)
0x1c0: Push((int) 21464)
0x1c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c3: PushEmpty(object, object)
0x1c4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c6: Call2 0xa4a

0x1c7: Pop(2)
0x1c8: Push((int) 21440)
0x1c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x1cb: PushEmpty(bool)
0x1cc: Stack[-1] = (bool) 0
0x1cd: PushEmpty(bool, object)
0x1ce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cf: Call2 0xa91

0x1d0: Pop(1)
0x1d1: Pop(1); Push((bool) Stack[-1] == 0)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d3: PushEmpty(bool, object)
0x1d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d5: Call2 0xa9d

0x1d6: Pop(1)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d8: Stack[-1] = (bool) 1
0x1d9: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1da: PushEmpty(object, object)
0x1db: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1dc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1dd: Call2 0xa3e

0x1de: Pop(2)
0x1df: PushEmpty(string)
0x1e0: Stack[-1] = "Suffering"
0x1e1: Call2 0x19c

0x1e2: Pop(1)
0x1e3: Push((int) 520248)
0x1e4: @@ SetMessage(Stack[-1])
0x1e5: Pop(1)
0x1e6: @@ ClearReplies()
0x1e7: Pop(0)
0x1e8: Push((int) 520249)
0x1e9: Push((int) 21442)
0x1ea: Push((int) 21441)
0x1eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ec: Pop(3)
0x1ed: Return(); Pop(0)

0x1ee: PushEmpty(string)
0x1ef: Stack[-1] = "Neutral"
0x1f0: Call2 0x19c

0x1f1: Pop(1)
0x1f2: Push((int) 520268)
0x1f3: @@ SetMessage(Stack[-1])
0x1f4: Pop(1)
0x1f5: @@ ClearReplies()
0x1f6: Pop(0)
0x1f7: PushEmpty(bool)
0x1f8: Stack[-1] = (bool) 0
0x1f9: PushEmpty(bool, object)
0x1fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fb: Call2 0xa9d

0x1fc: Pop(1)
0x1fd: Pop(1); Push((bool) Stack[-1] == 0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1ff: PushEmpty(bool, object)
0x200: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x201: Call2 0xaa9

0x202: Pop(1)
0x203: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x204: Stack[-1] = (bool) 1
0x205: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x206: Push((int) 520269)
0x207: Push((int) 21462)
0x208: Push((int) 21461)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: PushEmpty(bool)
0x20c: Stack[-1] = (bool) 0
0x20d: PushEmpty(bool, object)
0x20e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20f: Call2 0xa9d

0x210: Pop(1)
0x211: Pop(1); Push((bool) Stack[-1] == 0)
0x212: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x213: PushEmpty(bool, object)
0x214: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x215: Call2 0xab5

0x216: Pop(1)
0x217: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x218: Stack[-1] = (bool) 1
0x219: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21a: Push((int) 520272)
0x21b: Push((int) 21465)
0x21c: Push((int) 21464)
0x21d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21e: Pop(3)
0x21f: Push((int) 520277)
0x220: Push((int) -1)
0x221: Push((int) 21469)
0x222: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x223: Pop(3)
0x224: Return(); Pop(0)

0x225: Push((int) 21465)
0x226: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x228: PushEmpty(string)
0x229: Stack[-1] = "Penetrating"
0x22a: Call2 0x19c

0x22b: Pop(1)
0x22c: Push((int) 520273)
0x22d: @@ SetMessage(Stack[-1])
0x22e: Pop(1)
0x22f: @@ ClearReplies()
0x230: Pop(0)
0x231: Push((int) 520274)
0x232: Push((int) 21467)
0x233: Push((int) 21466)
0x234: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x235: Pop(3)
0x236: Return(); Pop(0)

0x237: Push((int) 21467)
0x238: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x23a: PushEmpty(string)
0x23b: Stack[-1] = "Penetrating"
0x23c: Call2 0x19c

0x23d: Pop(1)
0x23e: Push((int) 520275)
0x23f: @@ SetMessage(Stack[-1])
0x240: Pop(1)
0x241: @@ ClearReplies()
0x242: Pop(0)
0x243: Push((int) 520276)
0x244: Push((int) -1)
0x245: Push((int) 21468)
0x246: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x247: Pop(3)
0x248: Push((int) 527804)
0x249: Push((int) -1)
0x24a: Push((int) 29140)
0x24b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24c: Pop(3)
0x24d: Return(); Pop(0)

0x24e: Push((int) 21462)
0x24f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x250: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x251: PushEmpty(string)
0x252: Stack[-1] = "Grin"
0x253: Call2 0x19c

0x254: Pop(1)
0x255: Push((int) 520270)
0x256: @@ SetMessage(Stack[-1])
0x257: Pop(1)
0x258: @@ ClearReplies()
0x259: Pop(0)
0x25a: Push((int) 520271)
0x25b: Push((int) -1)
0x25c: Push((int) 21463)
0x25d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25e: Pop(3)
0x25f: Return(); Pop(0)

0x260: Push((int) 21442)
0x261: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x262: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x263: PushEmpty(string)
0x264: Stack[-1] = "Suffering"
0x265: Call2 0x19c

0x266: Pop(1)
0x267: Push((int) 520250)
0x268: @@ SetMessage(Stack[-1])
0x269: Pop(1)
0x26a: @@ ClearReplies()
0x26b: Pop(0)
0x26c: Push((int) 520251)
0x26d: Push((int) 21444)
0x26e: Push((int) 21443)
0x26f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x270: Pop(3)
0x271: Push((int) 520259)
0x272: Push((int) 21452)
0x273: Push((int) 21451)
0x274: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x275: Pop(3)
0x276: Push((int) 520265)
0x277: Push((int) 21458)
0x278: Push((int) 21457)
0x279: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27a: Pop(3)
0x27b: Return(); Pop(0)

0x27c: Push((int) 21458)
0x27d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x27f: PushEmpty(string)
0x280: Stack[-1] = "Suffering"
0x281: Call2 0x19c

0x282: Pop(1)
0x283: Push((int) 520266)
0x284: @@ SetMessage(Stack[-1])
0x285: Pop(1)
0x286: @@ ClearReplies()
0x287: Pop(0)
0x288: Push((int) 527803)
0x289: Push((int) 21452)
0x28a: Push((int) 29136)
0x28b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28c: Pop(3)
0x28d: Push((int) 520267)
0x28e: Push((int) -1)
0x28f: Push((int) 21459)
0x290: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x291: Pop(3)
0x292: Return(); Pop(0)

0x293: Push((int) 21452)
0x294: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x295: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x296: PushEmpty(string)
0x297: Stack[-1] = "Penetrating"
0x298: Call2 0x19c

0x299: Pop(1)
0x29a: Push((int) 520260)
0x29b: @@ SetMessage(Stack[-1])
0x29c: Pop(1)
0x29d: @@ ClearReplies()
0x29e: Pop(0)
0x29f: Push((int) 520261)
0x2a0: Push((int) 21454)
0x2a1: Push((int) 21453)
0x2a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a3: Pop(3)
0x2a4: Push((int) 520264)
0x2a5: Push((int) 21454)
0x2a6: Push((int) 21456)
0x2a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a8: Pop(3)
0x2a9: Return(); Pop(0)

0x2aa: Push((int) 21454)
0x2ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2ad: PushEmpty(string)
0x2ae: Stack[-1] = "Suffering"
0x2af: Call2 0x19c

0x2b0: Pop(1)
0x2b1: Push((int) 520262)
0x2b2: @@ SetMessage(Stack[-1])
0x2b3: Pop(1)
0x2b4: @@ ClearReplies()
0x2b5: Pop(0)
0x2b6: Push((int) 520263)
0x2b7: Push((int) -1)
0x2b8: Push((int) 21455)
0x2b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ba: Pop(3)
0x2bb: Return(); Pop(0)

0x2bc: Push((int) 21444)
0x2bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2bf: PushEmpty(string)
0x2c0: Stack[-1] = "Suffering"
0x2c1: Call2 0x19c

0x2c2: Pop(1)
0x2c3: Push((int) 520252)
0x2c4: @@ SetMessage(Stack[-1])
0x2c5: Pop(1)
0x2c6: @@ ClearReplies()
0x2c7: Pop(0)
0x2c8: Push((int) 520253)
0x2c9: Push((int) 21446)
0x2ca: Push((int) 21445)
0x2cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cc: Pop(3)
0x2cd: Push((int) 520256)
0x2ce: Push((int) 21449)
0x2cf: Push((int) 21448)
0x2d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d1: Pop(3)
0x2d2: Return(); Pop(0)

0x2d3: Push((int) 21449)
0x2d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2d6: PushEmpty(string)
0x2d7: Stack[-1] = "Neutral"
0x2d8: Call2 0x19c

0x2d9: Pop(1)
0x2da: Push((int) 520257)
0x2db: @@ SetMessage(Stack[-1])
0x2dc: Pop(1)
0x2dd: @@ ClearReplies()
0x2de: Pop(0)
0x2df: Push((int) 520258)
0x2e0: Push((int) -1)
0x2e1: Push((int) 21450)
0x2e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e3: Pop(3)
0x2e4: Return(); Pop(0)

0x2e5: Push((int) 21446)
0x2e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e7: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2e8: PushEmpty(string)
0x2e9: Stack[-1] = "Penetrating"
0x2ea: Call2 0x19c

0x2eb: Pop(1)
0x2ec: Push((int) 520254)
0x2ed: @@ SetMessage(Stack[-1])
0x2ee: Pop(1)
0x2ef: @@ ClearReplies()
0x2f0: Pop(0)
0x2f1: Push((int) 520255)
0x2f2: Push((int) -1)
0x2f3: Push((int) 21447)
0x2f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f5: Pop(3)
0x2f6: Return(); Pop(0)

0x2f7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2f8: PushEmpty(bool)
0x2f9: Call2 0xa3c

0x2fa: Pop(0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fc: @ lshStopAnimation()
0x2fd: Pop(0)
0x2fe: GOTO 0x301

0x2ff: @ StopAnimation()
0x300: Pop(0)
0x301: Return(); Pop(0)

0x302: GOTO 0x1b3

0x303: Return(); Pop(0)

0x304: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x305: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x306: PushEmpty(bool, object, float)
0x307: Stack[-2] = Stack[-12]
0x308: Stack[-1] = (float) 70.0
0x309: Call2 0x8dd

0x30a: Pop(2)
0x30b: Pop(1); Push((bool) Stack[-1] == 0)
0x30c: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30d: Stack[-10] = (int) -2
0x30e: Return(); Pop(8)

0x30f: @ CreateDialog(Stack[-4])
0x310: Pop(0)
0x311: PushEmpty(int)
0x312: Call2 0xa36

0x313: Pop(0)
0x314: @@ SetNPCName(Stack[-1])
0x315: Pop(1)
0x316: PushEmpty(int)
0x317: Call2 0xa34

0x318: Pop(0)
0x319: @@ SetNPCDescription(Stack[-1])
0x31a: Pop(1)
0x31b: PushEmpty(string)
0x31c: Call2 0xa38

0x31d: Pop(0)
0x31e: @@ SetPhoto(Stack[-1])
0x31f: Pop(1)
0x320: PushEmpty(string)
0x321: Call2 0xa3a

0x322: Pop(0)
0x323: @@ SetPhoto2(Stack[-1])
0x324: Pop(1)
0x325: PushEmpty(int)
0x326: Call2 0xb08

0x327: Pop(0)
0x328: @@ SetPlayerName(Stack[-1])
0x329: Pop(1)
0x32a: Stack[-2] = (int) -1
0x32b: @ IsOverrideActive(Stack[-3])
0x32c: Pop(0)
0x32d: Push(Stack[-3])
0x32e: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32f: Stack[-10] = (int) -2
0x330: Return(); Pop(8)

0x331: @ DoDialog(Stack[-4])
0x332: Pop(0)
0x333: PushEmpty(bool, object)
0x334: PushEmpty(object)
0x335: Call2 0x9f3

0x336: Stack[-2] = Stack[-1]
0x337: Pop(1)
0x338: Call2 0x934

0x339: Pop(2)
0x33a: PushEmpty(object, object)
0x33b: Stack[-2] = Stack[-11]
0x33c: Stack[-1] = Stack[-6]
0x33d: Push(-2, 4); TaskCall(5)
0x33e: Call2 0x355

0x33f: Pop(-2, 4); TaskReturn
0x340: Pop(2)
0x341: @@ IsDialogEnd(Stack[-1])
0x342: Pop(0)
0x343: Pop(0); Push((bool) Stack[-1] == 0)
0x344: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x345: @ sync()
0x346: Pop(0)
0x347: @@ IsDialogEnd(Stack[-1])
0x348: Pop(0)
0x349: GOTO 0x343

0x34a: PushEmpty(object)
0x34b: Stack[-1] = Stack[-10]
0x34c: Call2 0x922

0x34d: Pop(1)
0x34e: @ StopDialog(Stack[-4])
0x34f: Pop(0)
0x350: @@ GetReturnValue(Stack[-2])
0x351: Pop(0)
0x352: Stack[-10] = Stack[-2]
0x353: Return(); Pop(8)

0x354: Stack[-4] = 0
0x355: PushEmpty()
0x356: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x357: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x358: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x359: Push((int) 1)
0x35a: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x35b: PushEmpty(string)
0x35c: Stack[-1] = "Fear"
0x35d: Call2 0x399

0x35e: Pop(1)
0x35f: Push((int) 521514)
0x360: @@ SetMessage(Stack[-1])
0x361: Pop(1)
0x362: @@ ClearReplies()
0x363: Pop(0)
0x364: PushEmpty(bool, object)
0x365: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x366: Call2 0xa6d

0x367: Pop(1)
0x368: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x369: Push((int) 521515)
0x36a: Push((int) 22677)
0x36b: Push((int) 22676)
0x36c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36d: Pop(3)
0x36e: Push((int) 521518)
0x36f: Push((int) -1)
0x370: Push((int) 22679)
0x371: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x372: Pop(3)
0x373: Push((int) 523976)
0x374: Push((int) -1)
0x375: Push((int) 25264)
0x376: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x377: Pop(3)
0x378: GOTO 0x37b

0x379: Return(); Pop(0)

0x37a: GOTO 0x359

0x37b: PushEmpty(bool)
0x37c: Call2 0xa3c

0x37d: Pop(0)
0x37e: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x37f: @ lshWaitForAnimEnd()
0x380: Pop(0)
0x381: Push( Stack[3 + Tasks[-1].StackPointer] )
0x382: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x383: GOTO 0x389

0x384: PushEmpty(string)
0x385: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x386: Call2 0x9be

0x387: Pop(1)
0x388: GOTO 0x37f

0x389: GOTO 0x398

0x38a: Push("all")
0x38b: Push("idle")
0x38c: @ PlayAnimation(Stack[-2], Stack[-1])
0x38d: Pop(2)
0x38e: @ WaitForAnimEnd()
0x38f: Pop(0)
0x390: Push( Stack[3 + Tasks[-1].StackPointer] )
0x391: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x392: GOTO 0x398

0x393: Push("all")
0x394: Push("idle")
0x395: @ PlayAnimation(Stack[-2], Stack[-1])
0x396: Pop(2)
0x397: GOTO 0x38e

0x398: Return(); Pop(0)

0x399: PushEmpty()
0x39a: PushEmpty(bool)
0x39b: Call2 0xa3c

0x39c: Pop(0)
0x39d: Pop(1); Push((bool) Stack[-1] == 0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39f: Return(); Pop(0)

0x3a0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a2: Return(); Pop(0)

0x3a3: PushEmpty(string, bool)
0x3a4: Stack[-2] = Stack[-3]
0x3a5: Push("")
0x3a6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3a7: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a8: Stack[-1] = (bool) 0
0x3a9: GOTO 0x3ab

0x3aa: Stack[-1] = (bool) 1
0x3ab: Call2 0x9ce

0x3ac: Pop(2)
0x3ad: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3ae: Return(); Pop(0)

0x3af: PushEmpty()
0x3b0: Push((int) 1)
0x3b1: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x3b2: PushEmpty()
0x3b3: Call2 0x9ec

0x3b4: Pop(0)
0x3b5: Push((int) 22678)
0x3b6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b7: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3b8: PushEmpty(object, object)
0x3b9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3ba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3bb: Call2 0xa50

0x3bc: Pop(2)
0x3bd: Push((int) 22675)
0x3be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3c0: PushEmpty(string)
0x3c1: Stack[-1] = "Fear"
0x3c2: Call2 0x399

0x3c3: Pop(1)
0x3c4: Push((int) 521514)
0x3c5: @@ SetMessage(Stack[-1])
0x3c6: Pop(1)
0x3c7: @@ ClearReplies()
0x3c8: Pop(0)
0x3c9: PushEmpty(bool, object)
0x3ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3cb: Call2 0xa6d

0x3cc: Pop(1)
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3ce: Push((int) 521515)
0x3cf: Push((int) 22677)
0x3d0: Push((int) 22676)
0x3d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d2: Pop(3)
0x3d3: Push((int) 521518)
0x3d4: Push((int) -1)
0x3d5: Push((int) 22679)
0x3d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d7: Pop(3)
0x3d8: Push((int) 523976)
0x3d9: Push((int) -1)
0x3da: Push((int) 25264)
0x3db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dc: Pop(3)
0x3dd: Return(); Pop(0)

0x3de: Push((int) 22677)
0x3df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e0: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3e1: PushEmpty(string)
0x3e2: Stack[-1] = "Fear"
0x3e3: Call2 0x399

0x3e4: Pop(1)
0x3e5: Push((int) 521516)
0x3e6: @@ SetMessage(Stack[-1])
0x3e7: Pop(1)
0x3e8: @@ ClearReplies()
0x3e9: Pop(0)
0x3ea: Push((int) 523977)
0x3eb: Push((int) 25266)
0x3ec: Push((int) 25265)
0x3ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ee: Pop(3)
0x3ef: Push((int) 523981)
0x3f0: Push((int) 25270)
0x3f1: Push((int) 25269)
0x3f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f3: Pop(3)
0x3f4: Return(); Pop(0)

0x3f5: Push((int) 25270)
0x3f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f7: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x3f8: PushEmpty(string)
0x3f9: Stack[-1] = "Suffering"
0x3fa: Call2 0x399

0x3fb: Pop(1)
0x3fc: Push((int) 523982)
0x3fd: @@ SetMessage(Stack[-1])
0x3fe: Pop(1)
0x3ff: @@ ClearReplies()
0x400: Pop(0)
0x401: Push((int) 523983)
0x402: Push((int) 25266)
0x403: Push((int) 25271)
0x404: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x405: Pop(3)
0x406: Return(); Pop(0)

0x407: Push((int) 25266)
0x408: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x409: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x40a: PushEmpty(string)
0x40b: Stack[-1] = "Penetrating"
0x40c: Call2 0x399

0x40d: Pop(1)
0x40e: Push((int) 523978)
0x40f: @@ SetMessage(Stack[-1])
0x410: Pop(1)
0x411: @@ ClearReplies()
0x412: Pop(0)
0x413: Push((int) 523979)
0x414: Push((int) 25268)
0x415: Push((int) 25267)
0x416: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x417: Pop(3)
0x418: Return(); Pop(0)

0x419: Push((int) 25268)
0x41a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41b: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x41c: PushEmpty(string)
0x41d: Stack[-1] = "Penetrating"
0x41e: Call2 0x399

0x41f: Pop(1)
0x420: Push((int) 523980)
0x421: @@ SetMessage(Stack[-1])
0x422: Pop(1)
0x423: @@ ClearReplies()
0x424: Pop(0)
0x425: Push((int) 523984)
0x426: Push((int) 25274)
0x427: Push((int) 25273)
0x428: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x429: Pop(3)
0x42a: Return(); Pop(0)

0x42b: Push((int) 25274)
0x42c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42d: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x42e: PushEmpty(string)
0x42f: Stack[-1] = "Grin"
0x430: Call2 0x399

0x431: Pop(1)
0x432: Push((int) 523985)
0x433: @@ SetMessage(Stack[-1])
0x434: Pop(1)
0x435: @@ ClearReplies()
0x436: Pop(0)
0x437: Push((int) 523986)
0x438: Push((int) 25276)
0x439: Push((int) 25275)
0x43a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43b: Pop(3)
0x43c: Push((int) 523988)
0x43d: Push((int) 25276)
0x43e: Push((int) 25277)
0x43f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x440: Pop(3)
0x441: Return(); Pop(0)

0x442: Push((int) 25276)
0x443: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x444: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x445: PushEmpty(string)
0x446: Stack[-1] = "Grin"
0x447: Call2 0x399

0x448: Pop(1)
0x449: Push((int) 523987)
0x44a: @@ SetMessage(Stack[-1])
0x44b: Pop(1)
0x44c: @@ ClearReplies()
0x44d: Pop(0)
0x44e: Push((int) 521517)
0x44f: Push((int) -1)
0x450: Push((int) 22678)
0x451: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x452: Pop(3)
0x453: Return(); Pop(0)

0x454: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x455: PushEmpty(bool)
0x456: Call2 0xa3c

0x457: Pop(0)
0x458: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x459: @ lshStopAnimation()
0x45a: Pop(0)
0x45b: GOTO 0x45e

0x45c: @ StopAnimation()
0x45d: Pop(0)
0x45e: Return(); Pop(0)

0x45f: GOTO 0x3b0

0x460: Return(); Pop(0)

0x461: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x462: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x463: PushEmpty(bool, object, float)
0x464: Stack[-2] = Stack[-12]
0x465: Stack[-1] = (float) 70.0
0x466: Call2 0x8dd

0x467: Pop(2)
0x468: Pop(1); Push((bool) Stack[-1] == 0)
0x469: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x46a: Stack[-10] = (int) -2
0x46b: Return(); Pop(8)

0x46c: @ CreateDialog(Stack[-4])
0x46d: Pop(0)
0x46e: PushEmpty(int)
0x46f: Call2 0xa36

0x470: Pop(0)
0x471: @@ SetNPCName(Stack[-1])
0x472: Pop(1)
0x473: PushEmpty(int)
0x474: Call2 0xa34

0x475: Pop(0)
0x476: @@ SetNPCDescription(Stack[-1])
0x477: Pop(1)
0x478: PushEmpty(string)
0x479: Call2 0xa38

0x47a: Pop(0)
0x47b: @@ SetPhoto(Stack[-1])
0x47c: Pop(1)
0x47d: PushEmpty(string)
0x47e: Call2 0xa3a

0x47f: Pop(0)
0x480: @@ SetPhoto2(Stack[-1])
0x481: Pop(1)
0x482: PushEmpty(int)
0x483: Call2 0xb08

0x484: Pop(0)
0x485: @@ SetPlayerName(Stack[-1])
0x486: Pop(1)
0x487: Stack[-2] = (int) -1
0x488: @ IsOverrideActive(Stack[-3])
0x489: Pop(0)
0x48a: Push(Stack[-3])
0x48b: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48c: Stack[-10] = (int) -2
0x48d: Return(); Pop(8)

0x48e: @ DoDialog(Stack[-4])
0x48f: Pop(0)
0x490: PushEmpty(bool, object)
0x491: PushEmpty(object)
0x492: Call2 0x9f3

0x493: Stack[-2] = Stack[-1]
0x494: Pop(1)
0x495: Call2 0x934

0x496: Pop(2)
0x497: PushEmpty(object, object)
0x498: Stack[-2] = Stack[-11]
0x499: Stack[-1] = Stack[-6]
0x49a: Push(-2, 4); TaskCall(7)
0x49b: Call2 0x4b2

0x49c: Pop(-2, 4); TaskReturn
0x49d: Pop(2)
0x49e: @@ IsDialogEnd(Stack[-1])
0x49f: Pop(0)
0x4a0: Pop(0); Push((bool) Stack[-1] == 0)
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a2: @ sync()
0x4a3: Pop(0)
0x4a4: @@ IsDialogEnd(Stack[-1])
0x4a5: Pop(0)
0x4a6: GOTO 0x4a0

0x4a7: PushEmpty(object)
0x4a8: Stack[-1] = Stack[-10]
0x4a9: Call2 0x922

0x4aa: Pop(1)
0x4ab: @ StopDialog(Stack[-4])
0x4ac: Pop(0)
0x4ad: @@ GetReturnValue(Stack[-2])
0x4ae: Pop(0)
0x4af: Stack[-10] = Stack[-2]
0x4b0: Return(); Pop(8)

0x4b1: Stack[-4] = 0
0x4b2: PushEmpty()
0x4b3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4b4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4b5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4b6: Push((int) 1)
0x4b7: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4b8: PushEmpty(string)
0x4b9: Stack[-1] = "Neutral"
0x4ba: Call2 0x4fb

0x4bb: Pop(1)
0x4bc: Push((int) 521930)
0x4bd: @@ SetMessage(Stack[-1])
0x4be: Pop(1)
0x4bf: @@ ClearReplies()
0x4c0: Pop(0)
0x4c1: PushEmpty(bool)
0x4c2: Stack[-1] = (bool) 0
0x4c3: PushEmpty(bool, object)
0x4c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c5: Call2 0xa79

0x4c6: Pop(1)
0x4c7: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4c8: PushEmpty(bool, object)
0x4c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ca: Call2 0xa85

0x4cb: Pop(1)
0x4cc: Pop(1); Push((bool) Stack[-1] == 0)
0x4cd: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4ce: Stack[-1] = (bool) 1
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d0: Push((int) 521931)
0x4d1: Push((int) 23673)
0x4d2: Push((int) 23105)
0x4d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d4: Pop(3)
0x4d5: Push((int) 521932)
0x4d6: Push((int) -1)
0x4d7: Push((int) 23106)
0x4d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d9: Pop(3)
0x4da: GOTO 0x4dd

0x4db: Return(); Pop(0)

0x4dc: GOTO 0x4b6

0x4dd: PushEmpty(bool)
0x4de: Call2 0xa3c

0x4df: Pop(0)
0x4e0: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4e1: @ lshWaitForAnimEnd()
0x4e2: Pop(0)
0x4e3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4e5: GOTO 0x4eb

0x4e6: PushEmpty(string)
0x4e7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4e8: Call2 0x9be

0x4e9: Pop(1)
0x4ea: GOTO 0x4e1

0x4eb: GOTO 0x4fa

0x4ec: Push("all")
0x4ed: Push("idle")
0x4ee: @ PlayAnimation(Stack[-2], Stack[-1])
0x4ef: Pop(2)
0x4f0: @ WaitForAnimEnd()
0x4f1: Pop(0)
0x4f2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f4: GOTO 0x4fa

0x4f5: Push("all")
0x4f6: Push("idle")
0x4f7: @ PlayAnimation(Stack[-2], Stack[-1])
0x4f8: Pop(2)
0x4f9: GOTO 0x4f0

0x4fa: Return(); Pop(0)

0x4fb: PushEmpty()
0x4fc: PushEmpty(bool)
0x4fd: Call2 0xa3c

0x4fe: Pop(0)
0x4ff: Pop(1); Push((bool) Stack[-1] == 0)
0x500: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x501: Return(); Pop(0)

0x502: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x503: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x504: Return(); Pop(0)

0x505: PushEmpty(string, bool)
0x506: Stack[-2] = Stack[-3]
0x507: Push("")
0x508: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x509: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x50a: Stack[-1] = (bool) 0
0x50b: GOTO 0x50d

0x50c: Stack[-1] = (bool) 1
0x50d: Call2 0x9ce

0x50e: Pop(2)
0x50f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x510: Return(); Pop(0)

0x511: PushEmpty()
0x512: Push((int) 1)
0x513: IF (Stack[-1] == 0) GOTO 0x5eb; Pop(1)

0x514: PushEmpty()
0x515: Call2 0x9ec

0x516: Pop(0)
0x517: Push((int) 23108)
0x518: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x519: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51a: PushEmpty(object, object)
0x51b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x51c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x51d: Call2 0xa67

0x51e: Pop(2)
0x51f: Push((int) 23687)
0x520: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x521: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x522: PushEmpty(object, object)
0x523: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x524: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x525: Call2 0xa67

0x526: Pop(2)
0x527: Push((int) 23104)
0x528: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x529: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x52a: PushEmpty(string)
0x52b: Stack[-1] = "Neutral"
0x52c: Call2 0x4fb

0x52d: Pop(1)
0x52e: Push((int) 521930)
0x52f: @@ SetMessage(Stack[-1])
0x530: Pop(1)
0x531: @@ ClearReplies()
0x532: Pop(0)
0x533: PushEmpty(bool)
0x534: Stack[-1] = (bool) 0
0x535: PushEmpty(bool, object)
0x536: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x537: Call2 0xa79

0x538: Pop(1)
0x539: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x53a: PushEmpty(bool, object)
0x53b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x53c: Call2 0xa85

0x53d: Pop(1)
0x53e: Pop(1); Push((bool) Stack[-1] == 0)
0x53f: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x540: Stack[-1] = (bool) 1
0x541: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x542: Push((int) 521931)
0x543: Push((int) 23673)
0x544: Push((int) 23105)
0x545: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x546: Pop(3)
0x547: Push((int) 521932)
0x548: Push((int) -1)
0x549: Push((int) 23106)
0x54a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54b: Pop(3)
0x54c: Return(); Pop(0)

0x54d: Push((int) 23673)
0x54e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54f: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x550: PushEmpty(string)
0x551: Stack[-1] = "Penetrating"
0x552: Call2 0x4fb

0x553: Pop(1)
0x554: Push((int) 522498)
0x555: @@ SetMessage(Stack[-1])
0x556: Pop(1)
0x557: @@ ClearReplies()
0x558: Pop(0)
0x559: Push((int) 522501)
0x55a: Push((int) 23677)
0x55b: Push((int) 23676)
0x55c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55d: Pop(3)
0x55e: Push((int) 522499)
0x55f: Push((int) 23675)
0x560: Push((int) 23674)
0x561: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x562: Pop(3)
0x563: Return(); Pop(0)

0x564: Push((int) 23675)
0x565: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x566: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x567: PushEmpty(string)
0x568: Stack[-1] = "Penetrating"
0x569: Call2 0x4fb

0x56a: Pop(1)
0x56b: Push((int) 522500)
0x56c: @@ SetMessage(Stack[-1])
0x56d: Pop(1)
0x56e: @@ ClearReplies()
0x56f: Pop(0)
0x570: Push((int) 522506)
0x571: Push((int) 23679)
0x572: Push((int) 23681)
0x573: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x574: Pop(3)
0x575: Return(); Pop(0)

0x576: Push((int) 23679)
0x577: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x578: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x579: PushEmpty(string)
0x57a: Stack[-1] = "Penetrating"
0x57b: Call2 0x4fb

0x57c: Pop(1)
0x57d: Push((int) 522504)
0x57e: @@ SetMessage(Stack[-1])
0x57f: Pop(1)
0x580: @@ ClearReplies()
0x581: Pop(0)
0x582: Push((int) 522505)
0x583: Push((int) 23677)
0x584: Push((int) 23680)
0x585: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x586: Pop(3)
0x587: Return(); Pop(0)

0x588: Push((int) 23677)
0x589: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58a: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x58b: PushEmpty(string)
0x58c: Stack[-1] = "Penetrating"
0x58d: Call2 0x4fb

0x58e: Pop(1)
0x58f: Push((int) 522502)
0x590: @@ SetMessage(Stack[-1])
0x591: Pop(1)
0x592: @@ ClearReplies()
0x593: Pop(0)
0x594: Push((int) 522503)
0x595: Push((int) 23683)
0x596: Push((int) 23678)
0x597: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x598: Pop(3)
0x599: Push((int) 531516)
0x59a: Push((int) 32868)
0x59b: Push((int) 32871)
0x59c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59d: Pop(3)
0x59e: Return(); Pop(0)

0x59f: Push((int) 23683)
0x5a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a1: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5a2: PushEmpty(string)
0x5a3: Stack[-1] = "Grin"
0x5a4: Call2 0x4fb

0x5a5: Pop(1)
0x5a6: Push((int) 522507)
0x5a7: @@ SetMessage(Stack[-1])
0x5a8: Pop(1)
0x5a9: @@ ClearReplies()
0x5aa: Pop(0)
0x5ab: Push((int) 522508)
0x5ac: Push((int) 23685)
0x5ad: Push((int) 23684)
0x5ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5af: Pop(3)
0x5b0: Push((int) 531513)
0x5b1: Push((int) 32868)
0x5b2: Push((int) 32867)
0x5b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b4: Pop(3)
0x5b5: Return(); Pop(0)

0x5b6: Push((int) 32868)
0x5b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b8: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5b9: PushEmpty(string)
0x5ba: Stack[-1] = "Grin"
0x5bb: Call2 0x4fb

0x5bc: Pop(1)
0x5bd: Push((int) 531514)
0x5be: @@ SetMessage(Stack[-1])
0x5bf: Pop(1)
0x5c0: @@ ClearReplies()
0x5c1: Pop(0)
0x5c2: Push((int) 531515)
0x5c3: Push((int) 23685)
0x5c4: Push((int) 32869)
0x5c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c6: Pop(3)
0x5c7: Return(); Pop(0)

0x5c8: Push((int) 23685)
0x5c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ca: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5cb: PushEmpty(string)
0x5cc: Stack[-1] = "Grin"
0x5cd: Call2 0x4fb

0x5ce: Pop(1)
0x5cf: Push((int) 522509)
0x5d0: @@ SetMessage(Stack[-1])
0x5d1: Pop(1)
0x5d2: @@ ClearReplies()
0x5d3: Pop(0)
0x5d4: Push((int) 521934)
0x5d5: Push((int) -1)
0x5d6: Push((int) 23108)
0x5d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d8: Pop(3)
0x5d9: Push((int) 522511)
0x5da: Push((int) -1)
0x5db: Push((int) 23687)
0x5dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5dd: Pop(3)
0x5de: Return(); Pop(0)

0x5df: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5e0: PushEmpty(bool)
0x5e1: Call2 0xa3c

0x5e2: Pop(0)
0x5e3: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5e4: @ lshStopAnimation()
0x5e5: Pop(0)
0x5e6: GOTO 0x5e9

0x5e7: @ StopAnimation()
0x5e8: Pop(0)
0x5e9: Return(); Pop(0)

0x5ea: GOTO 0x512

0x5eb: Return(); Pop(0)

0x5ec: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5ed: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5ee: PushEmpty(bool, object, float)
0x5ef: Stack[-2] = Stack[-12]
0x5f0: Stack[-1] = (float) 70.0
0x5f1: Call2 0x8dd

0x5f2: Pop(2)
0x5f3: Pop(1); Push((bool) Stack[-1] == 0)
0x5f4: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5f5: Stack[-10] = (int) -2
0x5f6: Return(); Pop(8)

0x5f7: @ CreateDialog(Stack[-4])
0x5f8: Pop(0)
0x5f9: PushEmpty(int)
0x5fa: Call2 0xa36

0x5fb: Pop(0)
0x5fc: @@ SetNPCName(Stack[-1])
0x5fd: Pop(1)
0x5fe: PushEmpty(int)
0x5ff: Call2 0xa34

0x600: Pop(0)
0x601: @@ SetNPCDescription(Stack[-1])
0x602: Pop(1)
0x603: PushEmpty(string)
0x604: Call2 0xa38

0x605: Pop(0)
0x606: @@ SetPhoto(Stack[-1])
0x607: Pop(1)
0x608: PushEmpty(string)
0x609: Call2 0xa3a

0x60a: Pop(0)
0x60b: @@ SetPhoto2(Stack[-1])
0x60c: Pop(1)
0x60d: PushEmpty(int)
0x60e: Call2 0xb08

0x60f: Pop(0)
0x610: @@ SetPlayerName(Stack[-1])
0x611: Pop(1)
0x612: Stack[-2] = (int) -1
0x613: @ IsOverrideActive(Stack[-3])
0x614: Pop(0)
0x615: Push(Stack[-3])
0x616: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x617: Stack[-10] = (int) -2
0x618: Return(); Pop(8)

0x619: @ DoDialog(Stack[-4])
0x61a: Pop(0)
0x61b: PushEmpty(bool, object)
0x61c: PushEmpty(object)
0x61d: Call2 0x9f3

0x61e: Stack[-2] = Stack[-1]
0x61f: Pop(1)
0x620: Call2 0x934

0x621: Pop(2)
0x622: PushEmpty(object, object)
0x623: Stack[-2] = Stack[-11]
0x624: Stack[-1] = Stack[-6]
0x625: Push(-2, 4); TaskCall(9)
0x626: Call2 0x63d

0x627: Pop(-2, 4); TaskReturn
0x628: Pop(2)
0x629: @@ IsDialogEnd(Stack[-1])
0x62a: Pop(0)
0x62b: Pop(0); Push((bool) Stack[-1] == 0)
0x62c: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x62d: @ sync()
0x62e: Pop(0)
0x62f: @@ IsDialogEnd(Stack[-1])
0x630: Pop(0)
0x631: GOTO 0x62b

0x632: PushEmpty(object)
0x633: Stack[-1] = Stack[-10]
0x634: Call2 0x922

0x635: Pop(1)
0x636: @ StopDialog(Stack[-4])
0x637: Pop(0)
0x638: @@ GetReturnValue(Stack[-2])
0x639: Pop(0)
0x63a: Stack[-10] = Stack[-2]
0x63b: Return(); Pop(8)

0x63c: Stack[-4] = 0
0x63d: PushEmpty()
0x63e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x63f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x640: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x641: Push((int) 1)
0x642: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x643: PushEmpty(string)
0x644: Stack[-1] = "Neutral"
0x645: Call2 0x67c

0x646: Pop(1)
0x647: Push((int) 535294)
0x648: @@ SetMessage(Stack[-1])
0x649: Pop(1)
0x64a: @@ ClearReplies()
0x64b: Pop(0)
0x64c: Push((int) 535295)
0x64d: Push((int) 36973)
0x64e: Push((int) 36972)
0x64f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x650: Pop(3)
0x651: Push((int) 535302)
0x652: Push((int) -1)
0x653: Push((int) 36980)
0x654: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x655: Pop(3)
0x656: Push((int) 535303)
0x657: Push((int) -1)
0x658: Push((int) 36981)
0x659: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65a: Pop(3)
0x65b: GOTO 0x65e

0x65c: Return(); Pop(0)

0x65d: GOTO 0x641

0x65e: PushEmpty(bool)
0x65f: Call2 0xa3c

0x660: Pop(0)
0x661: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x662: @ lshWaitForAnimEnd()
0x663: Pop(0)
0x664: Push( Stack[3 + Tasks[-1].StackPointer] )
0x665: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x666: GOTO 0x66c

0x667: PushEmpty(string)
0x668: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x669: Call2 0x9be

0x66a: Pop(1)
0x66b: GOTO 0x662

0x66c: GOTO 0x67b

0x66d: Push("all")
0x66e: Push("idle")
0x66f: @ PlayAnimation(Stack[-2], Stack[-1])
0x670: Pop(2)
0x671: @ WaitForAnimEnd()
0x672: Pop(0)
0x673: Push( Stack[3 + Tasks[-1].StackPointer] )
0x674: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x675: GOTO 0x67b

0x676: Push("all")
0x677: Push("idle")
0x678: @ PlayAnimation(Stack[-2], Stack[-1])
0x679: Pop(2)
0x67a: GOTO 0x671

0x67b: Return(); Pop(0)

0x67c: PushEmpty()
0x67d: PushEmpty(bool)
0x67e: Call2 0xa3c

0x67f: Pop(0)
0x680: Pop(1); Push((bool) Stack[-1] == 0)
0x681: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x682: Return(); Pop(0)

0x683: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x684: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x685: Return(); Pop(0)

0x686: PushEmpty(string, bool)
0x687: Stack[-2] = Stack[-3]
0x688: Push("")
0x689: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x68a: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x68b: Stack[-1] = (bool) 0
0x68c: GOTO 0x68e

0x68d: Stack[-1] = (bool) 1
0x68e: Call2 0x9ce

0x68f: Pop(2)
0x690: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x691: Return(); Pop(0)

0x692: PushEmpty()
0x693: Push((int) 1)
0x694: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x695: PushEmpty()
0x696: Call2 0x9ec

0x697: Pop(0)
0x698: Push((int) 36971)
0x699: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69a: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x69b: PushEmpty(string)
0x69c: Stack[-1] = "Neutral"
0x69d: Call2 0x67c

0x69e: Pop(1)
0x69f: Push((int) 535294)
0x6a0: @@ SetMessage(Stack[-1])
0x6a1: Pop(1)
0x6a2: @@ ClearReplies()
0x6a3: Pop(0)
0x6a4: Push((int) 535295)
0x6a5: Push((int) 36973)
0x6a6: Push((int) 36972)
0x6a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a8: Pop(3)
0x6a9: Push((int) 535302)
0x6aa: Push((int) -1)
0x6ab: Push((int) 36980)
0x6ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ad: Pop(3)
0x6ae: Push((int) 535303)
0x6af: Push((int) -1)
0x6b0: Push((int) 36981)
0x6b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b2: Pop(3)
0x6b3: Return(); Pop(0)

0x6b4: Push((int) 36973)
0x6b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b6: IF (Stack[-1] == 0) GOTO 0x6cb; Pop(1)

0x6b7: PushEmpty(string)
0x6b8: Stack[-1] = "Neutral"
0x6b9: Call2 0x67c

0x6ba: Pop(1)
0x6bb: Push((int) 535296)
0x6bc: @@ SetMessage(Stack[-1])
0x6bd: Pop(1)
0x6be: @@ ClearReplies()
0x6bf: Pop(0)
0x6c0: Push((int) 535297)
0x6c1: Push((int) 36975)
0x6c2: Push((int) 36974)
0x6c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c4: Pop(3)
0x6c5: Push((int) 535301)
0x6c6: Push((int) 36975)
0x6c7: Push((int) 36978)
0x6c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c9: Pop(3)
0x6ca: Return(); Pop(0)

0x6cb: Push((int) 36975)
0x6cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6cd: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6ce: PushEmpty(string)
0x6cf: Stack[-1] = "Neutral"
0x6d0: Call2 0x67c

0x6d1: Pop(1)
0x6d2: Push((int) 535298)
0x6d3: @@ SetMessage(Stack[-1])
0x6d4: Pop(1)
0x6d5: @@ ClearReplies()
0x6d6: Pop(0)
0x6d7: Push((int) 535299)
0x6d8: Push((int) -1)
0x6d9: Push((int) 36976)
0x6da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6db: Pop(3)
0x6dc: Push((int) 535300)
0x6dd: Push((int) -1)
0x6de: Push((int) 36977)
0x6df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e0: Pop(3)
0x6e1: Return(); Pop(0)

0x6e2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6e3: PushEmpty(bool)
0x6e4: Call2 0xa3c

0x6e5: Pop(0)
0x6e6: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e7: @ lshStopAnimation()
0x6e8: Pop(0)
0x6e9: GOTO 0x6ec

0x6ea: @ StopAnimation()
0x6eb: Pop(0)
0x6ec: Return(); Pop(0)

0x6ed: GOTO 0x693

0x6ee: Return(); Pop(0)

0x6ef: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6f0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6f1: PushEmpty(bool, object, float)
0x6f2: Stack[-2] = Stack[-12]
0x6f3: Stack[-1] = (float) 70.0
0x6f4: Call2 0x8dd

0x6f5: Pop(2)
0x6f6: Pop(1); Push((bool) Stack[-1] == 0)
0x6f7: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6f8: Stack[-10] = (int) -2
0x6f9: Return(); Pop(8)

0x6fa: @ CreateDialog(Stack[-4])
0x6fb: Pop(0)
0x6fc: PushEmpty(int)
0x6fd: Call2 0xa36

0x6fe: Pop(0)
0x6ff: @@ SetNPCName(Stack[-1])
0x700: Pop(1)
0x701: PushEmpty(int)
0x702: Call2 0xa34

0x703: Pop(0)
0x704: @@ SetNPCDescription(Stack[-1])
0x705: Pop(1)
0x706: PushEmpty(string)
0x707: Call2 0xa38

0x708: Pop(0)
0x709: @@ SetPhoto(Stack[-1])
0x70a: Pop(1)
0x70b: PushEmpty(string)
0x70c: Call2 0xa3a

0x70d: Pop(0)
0x70e: @@ SetPhoto2(Stack[-1])
0x70f: Pop(1)
0x710: PushEmpty(int)
0x711: Call2 0xb08

0x712: Pop(0)
0x713: @@ SetPlayerName(Stack[-1])
0x714: Pop(1)
0x715: Stack[-2] = (int) -1
0x716: @ IsOverrideActive(Stack[-3])
0x717: Pop(0)
0x718: Push(Stack[-3])
0x719: IF (Stack[-1] == 0) GOTO 0x71c; Pop(1)

0x71a: Stack[-10] = (int) -2
0x71b: Return(); Pop(8)

0x71c: @ DoDialog(Stack[-4])
0x71d: Pop(0)
0x71e: PushEmpty(bool, object)
0x71f: PushEmpty(object)
0x720: Call2 0x9f3

0x721: Stack[-2] = Stack[-1]
0x722: Pop(1)
0x723: Call2 0x934

0x724: Pop(2)
0x725: PushEmpty(object, object)
0x726: Stack[-2] = Stack[-11]
0x727: Stack[-1] = Stack[-6]
0x728: Push(-2, 4); TaskCall(11)
0x729: Call2 0x740

0x72a: Pop(-2, 4); TaskReturn
0x72b: Pop(2)
0x72c: @@ IsDialogEnd(Stack[-1])
0x72d: Pop(0)
0x72e: Pop(0); Push((bool) Stack[-1] == 0)
0x72f: IF (Stack[-1] == 0) GOTO 0x735; Pop(1)

0x730: @ sync()
0x731: Pop(0)
0x732: @@ IsDialogEnd(Stack[-1])
0x733: Pop(0)
0x734: GOTO 0x72e

0x735: PushEmpty(object)
0x736: Stack[-1] = Stack[-10]
0x737: Call2 0x922

0x738: Pop(1)
0x739: @ StopDialog(Stack[-4])
0x73a: Pop(0)
0x73b: @@ GetReturnValue(Stack[-2])
0x73c: Pop(0)
0x73d: Stack[-10] = Stack[-2]
0x73e: Return(); Pop(8)

0x73f: Stack[-4] = 0
0x740: PushEmpty()
0x741: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x742: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x743: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x744: Push((int) 1)
0x745: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x746: PushEmpty(string)
0x747: Stack[-1] = "Neutral"
0x748: Call2 0x77a

0x749: Pop(1)
0x74a: Push((int) 540551)
0x74b: @@ SetMessage(Stack[-1])
0x74c: Pop(1)
0x74d: @@ ClearReplies()
0x74e: Pop(0)
0x74f: Push((int) 540552)
0x750: Push((int) -1)
0x751: Push((int) 42561)
0x752: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x753: Pop(3)
0x754: Push((int) 540795)
0x755: Push((int) -1)
0x756: Push((int) 42844)
0x757: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x758: Pop(3)
0x759: GOTO 0x75c

0x75a: Return(); Pop(0)

0x75b: GOTO 0x744

0x75c: PushEmpty(bool)
0x75d: Call2 0xa3c

0x75e: Pop(0)
0x75f: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x760: @ lshWaitForAnimEnd()
0x761: Pop(0)
0x762: Push( Stack[3 + Tasks[-1].StackPointer] )
0x763: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x764: GOTO 0x76a

0x765: PushEmpty(string)
0x766: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x767: Call2 0x9be

0x768: Pop(1)
0x769: GOTO 0x760

0x76a: GOTO 0x779

0x76b: Push("all")
0x76c: Push("idle")
0x76d: @ PlayAnimation(Stack[-2], Stack[-1])
0x76e: Pop(2)
0x76f: @ WaitForAnimEnd()
0x770: Pop(0)
0x771: Push( Stack[3 + Tasks[-1].StackPointer] )
0x772: IF (Stack[-1] == 0) GOTO 0x774; Pop(1)

0x773: GOTO 0x779

0x774: Push("all")
0x775: Push("idle")
0x776: @ PlayAnimation(Stack[-2], Stack[-1])
0x777: Pop(2)
0x778: GOTO 0x76f

0x779: Return(); Pop(0)

0x77a: PushEmpty()
0x77b: PushEmpty(bool)
0x77c: Call2 0xa3c

0x77d: Pop(0)
0x77e: Pop(1); Push((bool) Stack[-1] == 0)
0x77f: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x780: Return(); Pop(0)

0x781: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x782: IF (Stack[-1] == 0) GOTO 0x784; Pop(1)

0x783: Return(); Pop(0)

0x784: PushEmpty(string, bool)
0x785: Stack[-2] = Stack[-3]
0x786: Push("")
0x787: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x788: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x789: Stack[-1] = (bool) 0
0x78a: GOTO 0x78c

0x78b: Stack[-1] = (bool) 1
0x78c: Call2 0x9ce

0x78d: Pop(2)
0x78e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x78f: Return(); Pop(0)

0x790: PushEmpty()
0x791: Push((int) 1)
0x792: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x793: PushEmpty()
0x794: Call2 0x9ec

0x795: Pop(0)
0x796: Push((int) 42560)
0x797: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x798: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x799: PushEmpty(string)
0x79a: Stack[-1] = "Neutral"
0x79b: Call2 0x77a

0x79c: Pop(1)
0x79d: Push((int) 540551)
0x79e: @@ SetMessage(Stack[-1])
0x79f: Pop(1)
0x7a0: @@ ClearReplies()
0x7a1: Pop(0)
0x7a2: Push((int) 540552)
0x7a3: Push((int) -1)
0x7a4: Push((int) 42561)
0x7a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a6: Pop(3)
0x7a7: Push((int) 540795)
0x7a8: Push((int) -1)
0x7a9: Push((int) 42844)
0x7aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ab: Pop(3)
0x7ac: Return(); Pop(0)

0x7ad: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7ae: PushEmpty(bool)
0x7af: Call2 0xa3c

0x7b0: Pop(0)
0x7b1: IF (Stack[-1] == 0) GOTO 0x7b5; Pop(1)

0x7b2: @ lshStopAnimation()
0x7b3: Pop(0)
0x7b4: GOTO 0x7b7

0x7b5: @ StopAnimation()
0x7b6: Pop(0)
0x7b7: Return(); Pop(0)

0x7b8: GOTO 0x791

0x7b9: Return(); Pop(0)

0x7ba: Push(GlobalVars[1])
0x7bb: Stack[-1] = (bool) 0
0x7bc: GlobalVars[1] = Stack[-1]; Pop(1)
0x7bd: PushEmpty()
0x7be: Call2 0x7c1

0x7bf: Pop(0)
0x7c0: Return(); Pop(0)

0x7c1: PushEmpty(bool)
0x7c2: Call2 0x8d8

0x7c3: Pop(0)
0x7c4: Pop(1); Push((bool) Stack[-1] == 0)
0x7c5: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7c6: @ Hold()
0x7c7: Pop(0)
0x7c8: @ GetDirection(Stack[-0])
0x7c9: Pop(0)
0x7ca: PushEmpty()
0x7cb: Call2 0x871

0x7cc: Pop(0)
0x7cd: GOTO 0x7ca

0x7ce: Return(); Pop(0)

0x7cf: PushEmpty(object, object)
0x7d0: Push("player")
0x7d1: @ FindActor(Stack[-2], Stack[-1])
0x7d2: Pop(1)
0x7d3: Pop(0); Push((bool) Stack[-1] == 0)
0x7d4: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7d5: Stack[-3] = (bool) 0
0x7d6: Return(); Pop(2)

0x7d7: PushEmpty(bool, object)
0x7d8: Stack[-1] = Stack[-3]
0x7d9: Call2 0x8cf

0x7da: Stack[-5] = Stack[-2]
0x7db: Pop(2)
0x7dc: Return(); Pop(2)

0x7dd: Stack[-1] = 0
0x7de: Push(CvectorIndex(Stack[-0], 0))
0x7df: Push(CvectorIndex(Stack[-0], 2))
0x7e0: @ RotateAsync(Stack[-2], Stack[-1])
0x7e1: Pop(2)
0x7e2: Return(); Pop(0)

0x7e3: PushEmpty(object, bool, object, bool)
0x7e4: Push("player")
0x7e5: @ FindActor(Stack[-3], Stack[-1])
0x7e6: Pop(1)
0x7e7: Pop(0); Push((bool) Stack[-2] == 0)
0x7e8: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7e9: Stack[-5] = (bool) 0
0x7ea: Return(); Pop(4)

0x7eb: PushEmpty(float, object)
0x7ec: Stack[-1] = Stack[-4]
0x7ed: Call2 0x8bd

0x7ee: Pop(1)
0x7ef: Push((float)90000.0)
0x7f0: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7f2: Stack[-5] = (bool) 0
0x7f3: Return(); Pop(4)

0x7f4: @ CanSee(Stack[-1], Stack[-2])
0x7f5: Pop(0)
0x7f6: Stack[-5] = Stack[-1]
0x7f7: Return(); Pop(4)

0x7f8: Stack[-2] = 0
0x7f9: PushEmpty(float, float)
0x7fa: Push((int) 8)
0x7fb: Push((int) 16)
0x7fc: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x7fd: Pop(2)
0x7fe: Push((int) 10)
0x7ff: @ SetTimer(Stack[-1], Stack[-2])
0x800: Pop(1)
0x801: Return(); Pop(2)

0x802: Push((int) 10)
0x803: @ KillTimer(Stack[-1])
0x804: Pop(1)
0x805: Return(); Pop(0)

0x806: PushEmpty()
0x807: Push((int) 10)
0x808: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x809: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x80a: PushEmpty()
0x80b: Call2 0x802

0x80c: Pop(0)
0x80d: PushEmpty(bool)
0x80e: Stack[-1] = (bool) 0
0x80f: PushEmpty(bool)
0x810: Call2 0x8d8

0x811: Pop(0)
0x812: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x813: PushEmpty(bool)
0x814: Call2 0x7e3

0x815: Pop(0)
0x816: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x817: Stack[-1] = (bool) 1
0x818: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x819: PushEmpty(bool)
0x81a: Call2 0x7cf

0x81b: Pop(0)
0x81c: IF (Stack[-1] == 0) GOTO 0x824; Pop(1)

0x81d: PushEmpty(bool, object)
0x81e: PushEmpty(object)
0x81f: Call2 0x9f3

0x820: Stack[-2] = Stack[-1]
0x821: Pop(1)
0x822: Call2 0x96e

0x823: Pop(2)
0x824: GOTO 0x82b

0x825: PushEmpty()
0x826: Call2 0x7de

0x827: Pop(0)
0x828: PushEmpty()
0x829: Call2 0x7f9

0x82a: Pop(0)
0x82b: Return(); Pop(0)

0x82c: PushEmpty()
0x82d: Call2 0x8b8

0x82e: Pop(0)
0x82f: PushEmpty()
0x830: Call2 0x802

0x831: Pop(0)
0x832: @ lshStopSpeech()
0x833: Pop(0)
0x834: @ lshStopAnimation()
0x835: Pop(0)
0x836: @ StopAsync()
0x837: Pop(0)
0x838: @ Hold()
0x839: Pop(0)
0x83a: Return(); Pop(0)

0x83b: @ StopGroup0()
0x83c: Pop(0)
0x83d: PushEmpty()
0x83e: Call2 0x802

0x83f: Pop(0)
0x840: PushEmpty(string)
0x841: Stack[-1] = "Neutral"
0x842: Call2 0x9be

0x843: Pop(1)
0x844: PushEmpty()
0x845: Call2 0x7f9

0x846: Pop(0)
0x847: Return(); Pop(0)

0x848: PushEmpty()
0x849: Push(Stack[-1])
0x84a: IF (Stack[-1] == 0) GOTO 0x84f; Pop(1)

0x84b: PushEmpty()
0x84c: Call2 0x7f9

0x84d: Pop(0)
0x84e: GOTO 0x853

0x84f: PushEmpty(string)
0x850: Stack[-1] = "Neutral"
0x851: Call2 0x9be

0x852: Pop(1)
0x853: Return(); Pop(0)

0x854: PushEmpty(bool, bool)
0x855: @ IsOverrideActive(Stack[-1])
0x856: Pop(0)
0x857: Pop(0); Push((bool) Stack[-1] == 0)
0x858: IF (Stack[-1] == 0) GOTO 0x870; Pop(1)

0x859: EventDisable(0)
0x85a: PushEmpty()
0x85b: Call2 0x8b8

0x85c: Pop(0)
0x85d: PushEmpty(bool, object)
0x85e: Stack[-1] = Stack[-5]
0x85f: Call2 0x8cf

0x860: Pop(2)
0x861: EventEnable(0)
0x862: PushEmpty(object)
0x863: Stack[-1] = Stack[-4]
0x864: Call2 0xb19

0x865: Pop(1)
0x866: PushEmpty(string)
0x867: Stack[-1] = "Neutral"
0x868: Call2 0x9be

0x869: Pop(1)
0x86a: PushEmpty()
0x86b: Call2 0x802

0x86c: Pop(0)
0x86d: PushEmpty()
0x86e: Call2 0x7f9

0x86f: Pop(0)
0x870: Return(); Pop(2)

0x871: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x872: @ WaitForAnimEnd()
0x873: Pop(0)
0x874: PushEmpty(bool)
0x875: Call2 0x8d8

0x876: Pop(0)
0x877: Pop(1); Push((bool) Stack[-1] == 0)
0x878: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x879: Return(); Pop(12)

0x87a: PushEmpty(int)
0x87b: Call2 0xa23

0x87c: Stack[-7] = Stack[-1]
0x87d: Pop(1)
0x87e: Stack[-5] = (int) 0
0x87f: PushEmpty(bool)
0x880: Stack[-1] = (bool) 0
0x881: Push((int) 5)
0x882: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x883: IF (Stack[-1] == 0) GOTO 0x889; Pop(1)

0x884: PushEmpty(bool)
0x885: Call2 0x8d8

0x886: Pop(0)
0x887: IF (Stack[-1] == 0) GOTO 0x889; Pop(1)

0x888: Stack[-1] = (bool) 1
0x889: IF (Stack[-1] == 0) GOTO 0x8b3; Pop(1)

0x88a: Pop(0); Push((bool) Stack[-6] == 0)
0x88b: IF (Stack[-1] == 0) GOTO 0x893; Pop(1)

0x88c: Push((int) 3)
0x88d: @ Sleep(Stack[-1], Stack[-5])
0x88e: Pop(1)
0x88f: Pop(0); Push((bool) Stack[-4] == 0)
0x890: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x891: GOTO 0x8b3

0x892: GOTO 0x8a8

0x893: @ irand(Stack[-3], Stack[-6])
0x894: Pop(0)
0x895: Push((int) 5)
0x896: @ irand(Stack[-3], Stack[-1])
0x897: Pop(1)
0x898: Push((int) 0)
0x899: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x89a: IF (Stack[-1] == 0) GOTO 0x89c; Pop(1)

0x89b: Stack[-3] = (int) 0
0x89c: Push("all")
0x89d: PushEmpty(string, int)
0x89e: Stack[-1] = Stack[-6]
0x89f: Call2 0xa1c

0x8a0: Pop(1)
0x8a1: @ PlayAnimation(Stack[-2], Stack[-1])
0x8a2: Pop(2)
0x8a3: @ WaitForAnimEnd(Stack[-1])
0x8a4: Pop(0)
0x8a5: Pop(0); Push((bool) Stack[-1] == 0)
0x8a6: IF (Stack[-1] == 0) GOTO 0x8a8; Pop(1)

0x8a7: GOTO 0x8b3

0x8a8: PushEmpty(bool)
0x8a9: Call2 0x8b6

0x8aa: Pop(0)
0x8ab: Pop(1); Push((bool) Stack[-1] == 0)
0x8ac: IF (Stack[-1] == 0) GOTO 0x8ae; Pop(1)

0x8ad: GOTO 0x8b3

0x8ae: @ ResetAAS()
0x8af: Pop(0)
0x8b0: Push((int) 1)
0x8b1: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x8b2: GOTO 0x87f

0x8b3: @ ResetAAS()
0x8b4: Pop(0)
0x8b5: Return(); Pop(12)

0x8b6: Stack[-1] = (bool) 1
0x8b7: Return(); Pop(0)

0x8b8: @ StopAnimation()
0x8b9: Pop(0)
0x8ba: @ StopGroup0()
0x8bb: Pop(0)
0x8bc: Return(); Pop(0)

0x8bd: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x8be: @ GetPosition(Stack[-3])
0x8bf: Pop(0)
0x8c0: @@ GetPosition(Stack[-2])
0x8c1: Pop(0)
0x8c2: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x8c3: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x8c4: Return(); Pop(6)

0x8c5: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x8c6: @ GetPosition(Stack[-3])
0x8c7: Pop(0)
0x8c8: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x8c9: Push(CvectorIndex(Stack[-2], 0))
0x8ca: Push(CvectorIndex(Stack[-3], 2))
0x8cb: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x8cc: Pop(2)
0x8cd: Stack[-8] = Stack[-1]
0x8ce: Return(); Pop(6)

0x8cf: PushEmpty(cvector, cvector)
0x8d0: @@ GetPosition(Stack[-1])
0x8d1: Pop(0)
0x8d2: PushEmpty(bool, cvector)
0x8d3: Stack[-1] = Stack[-3]
0x8d4: Call2 0x8c5

0x8d5: Stack[-6] = Stack[-2]
0x8d6: Pop(2)
0x8d7: Return(); Pop(2)

0x8d8: PushEmpty(bool, bool)
0x8d9: @ IsLoaded(Stack[-1])
0x8da: Pop(0)
0x8db: Stack[-3] = Stack[-1]
0x8dc: Return(); Pop(2)

0x8dd: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x8de: @@ GetPosition(Stack[-8])
0x8df: Pop(0)
0x8e0: @@ GetEyesHeight(Stack[-9])
0x8e1: Pop(0)
0x8e2: Push(CvectorIndex(Stack[-8], 1))
0x8e3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8e4: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x8e5: @ GetPosition(Stack[-7])
0x8e6: Pop(0)
0x8e7: @ GetEyesHeight(Stack[-9])
0x8e8: Pop(0)
0x8e9: Push(CvectorIndex(Stack[-7], 1))
0x8ea: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8eb: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x8ec: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x8ed: Push(CvectorIndex(Stack[-6], 1))
0x8ee: Stack[-1] = (int) 0
0x8ef: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x8f0: Pop(0); Push(Stack[-6] | Stack[-6]);
0x8f1: Pop(1); Push(Sqrt(Stack[-1]))
0x8f2: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x8f3: Stack[-5] = -Stack[-6]; Pop(0);
0x8f4: Pop(0); Push(Stack[-6] * Stack[-19]);
0x8f5: PushEmpty(cvector, cvector)
0x8f6: Push(CVector(0.0, 1.0, 0.0))
0x8f7: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x8f8: Call2 0x9f9

0x8f9: Pop(1)
0x8fa: Push((int) 25)
0x8fb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8fc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8fd: Push(CVector(0.0, 10.0, 0.0))
0x8fe: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x8ff: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x900: @ IsOverrideActive(Stack[-2])
0x901: Pop(0)
0x902: Push(Stack[-2])
0x903: IF (Stack[-1] == 0) GOTO 0x906; Pop(1)

0x904: Stack[-21] = (bool) 0
0x905: Return(); Pop(18)

0x906: @ StopWorld()
0x907: Pop(0)
0x908: Push((bool) 1)
0x909: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x90a: Pop(1)
0x90b: Push(CvectorIndex(Stack[-4], 0))
0x90c: Push(CvectorIndex(Stack[-5], 2))
0x90d: @ Rotate(Stack[-2], Stack[-1])
0x90e: Pop(2)
0x90f: PushEmpty(bool)
0x910: Call2 0xa3c

0x911: Pop(0)
0x912: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x913: GOTO 0x91c

0x914: Push("head")
0x915: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x916: Pop(1)
0x917: Push(Stack[-1])
0x918: IF (Stack[-1] == 0) GOTO 0x91c; Pop(1)

0x919: Push("head")
0x91a: @ LookAsyncCamera(Stack[-1])
0x91b: Pop(1)
0x91c: @ CameraWaitForPlayFinish()
0x91d: Pop(0)
0x91e: @ ResumeWorld()
0x91f: Pop(0)
0x920: Stack[-21] = (bool) 1
0x921: Return(); Pop(18)

0x922: PushEmpty(bool, bool)
0x923: Push((bool) 1)
0x924: @ CameraSwitchToNormal(Stack[-1])
0x925: Pop(1)
0x926: PushEmpty(bool)
0x927: Call2 0xa3c

0x928: Pop(0)
0x929: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x92a: GOTO 0x933

0x92b: Push("head")
0x92c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x92d: Pop(1)
0x92e: Push(Stack[-1])
0x92f: IF (Stack[-1] == 0) GOTO 0x933; Pop(1)

0x930: Push("head")
0x931: @ UnlookAsync(Stack[-1])
0x932: Pop(1)
0x933: Return(); Pop(2)

0x934: PushEmpty(int, int, int, int)
0x935: Push("voice_common")
0x936: @ GetVariable(Stack[-1], Stack[-3])
0x937: Pop(1)
0x938: Push(Stack[-2])
0x939: IF (Stack[-1] == 0) GOTO 0x95a; Pop(1)

0x93a: PushEmpty(bool, object)
0x93b: Stack[-1] = Stack[-7]
0x93c: Call2 0x96e

0x93d: Pop(1)
0x93e: Pop(1); Push((bool) Stack[-1] == 0)
0x93f: IF (Stack[-1] == 0) GOTO 0x948; Pop(1)

0x940: PushEmpty(bool, object)
0x941: Stack[-1] = Stack[-7]
0x942: Call2 0x993

0x943: Pop(1)
0x944: Pop(1); Push((bool) Stack[-1] == 0)
0x945: IF (Stack[-1] == 0) GOTO 0x948; Pop(1)

0x946: Stack[-6] = (bool) 0
0x947: Return(); Pop(4)

0x948: Push((int) 2)
0x949: @ irand(Stack[-2], Stack[-1])
0x94a: Pop(1)
0x94b: Push(Stack[-1])
0x94c: IF (Stack[-1] == 0) GOTO 0x955; Pop(1)

0x94d: Push("voice_common")
0x94e: Push((int) 1)
0x94f: Pop(1); Push(Stack[-4] + Stack[-1]);
0x950: Push((int) 3)
0x951: Pop(2); Push(Stack[-2] % Stack[-1]);
0x952: @ SetVariable(Stack[-2], Stack[-1])
0x953: Pop(2)
0x954: GOTO 0x959

0x955: Push("voice_common")
0x956: Push((int) 0)
0x957: @ SetVariable(Stack[-2], Stack[-1])
0x958: Pop(2)
0x959: GOTO 0x96c

0x95a: PushEmpty(bool, object)
0x95b: Stack[-1] = Stack[-7]
0x95c: Call2 0x993

0x95d: Pop(1)
0x95e: Pop(1); Push((bool) Stack[-1] == 0)
0x95f: IF (Stack[-1] == 0) GOTO 0x968; Pop(1)

0x960: PushEmpty(bool, object)
0x961: Stack[-1] = Stack[-7]
0x962: Call2 0x96e

0x963: Pop(1)
0x964: Pop(1); Push((bool) Stack[-1] == 0)
0x965: IF (Stack[-1] == 0) GOTO 0x968; Pop(1)

0x966: Stack[-6] = (bool) 0
0x967: Return(); Pop(4)

0x968: Push("voice_common")
0x969: Push((int) 1)
0x96a: @ SetVariable(Stack[-2], Stack[-1])
0x96b: Pop(2)
0x96c: Stack[-6] = (bool) 1
0x96d: Return(); Pop(4)

0x96e: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x96f: Stack[-5] = "c"
0x970: Stack[-4] = (int) 0
0x971: Push((int) 1)
0x972: IF (Stack[-1] == 0) GOTO 0x97e; Pop(1)

0x973: Push((int) 1)
0x974: Pop(1); Push(Stack[-5] + Stack[-1]);
0x975: Pop(1); Push(Stack[-6] + Stack[-1]);
0x976: @@ HasProperty(Stack[-1], Stack[-4])
0x977: Pop(1)
0x978: Pop(0); Push((bool) Stack[-3] == 0)
0x979: IF (Stack[-1] == 0) GOTO 0x97b; Pop(1)

0x97a: GOTO 0x97e

0x97b: Push((int) 1)
0x97c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x97d: GOTO 0x971

0x97e: Pop(0); Push((bool) Stack[-4] == 0)
0x97f: IF (Stack[-1] == 0) GOTO 0x982; Pop(1)

0x980: Stack[-12] = (bool) 0
0x981: Return(); Pop(10)

0x982: Stack[-2] = (int) 0
0x983: Push((int) 1)
0x984: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x985: IF (Stack[-1] == 0) GOTO 0x988; Pop(1)

0x986: @ irand(Stack[-2], Stack[-4])
0x987: Pop(0)
0x988: Push((int) 1)
0x989: Pop(1); Push(Stack[-3] + Stack[-1]);
0x98a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x98b: @@ GetProperty(Stack[-1], Stack[-2])
0x98c: Pop(1)
0x98d: PushEmpty(bool, string)
0x98e: Stack[-1] = Stack[-3]
0x98f: Call2 0x9dd

0x990: Stack[-14] = Stack[-2]
0x991: Pop(2)
0x992: Return(); Pop(10)

0x993: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x994: Push("d")
0x995: PushEmpty(int)
0x996: Call2 0xa0d

0x997: Pop(0)
0x998: Pop(2); Push(Stack[-2] + Stack[-1]);
0x999: Push("m")
0x99a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x99b: Stack[-4] = (int) 0
0x99c: Push((int) 1)
0x99d: IF (Stack[-1] == 0) GOTO 0x9a9; Pop(1)

0x99e: Push((int) 1)
0x99f: Pop(1); Push(Stack[-5] + Stack[-1]);
0x9a0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9a1: @@ HasProperty(Stack[-1], Stack[-4])
0x9a2: Pop(1)
0x9a3: Pop(0); Push((bool) Stack[-3] == 0)
0x9a4: IF (Stack[-1] == 0) GOTO 0x9a6; Pop(1)

0x9a5: GOTO 0x9a9

0x9a6: Push((int) 1)
0x9a7: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x9a8: GOTO 0x99c

0x9a9: Pop(0); Push((bool) Stack[-4] == 0)
0x9aa: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x9ab: Stack[-12] = (bool) 0
0x9ac: Return(); Pop(10)

0x9ad: Stack[-2] = (int) 0
0x9ae: Push((int) 1)
0x9af: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x9b0: IF (Stack[-1] == 0) GOTO 0x9b3; Pop(1)

0x9b1: @ irand(Stack[-2], Stack[-4])
0x9b2: Pop(0)
0x9b3: Push((int) 1)
0x9b4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x9b5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9b6: @@ GetProperty(Stack[-1], Stack[-2])
0x9b7: Pop(1)
0x9b8: PushEmpty(bool, string)
0x9b9: Stack[-1] = Stack[-3]
0x9ba: Call2 0x9dd

0x9bb: Stack[-14] = Stack[-2]
0x9bc: Pop(2)
0x9bd: Return(); Pop(10)

0x9be: PushEmpty(bool, float, float, bool, float, float)
0x9bf: @ lshHasAnimation(Stack[-3], Stack[-7])
0x9c0: Pop(0)
0x9c1: Push(Stack[-3])
0x9c2: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c3: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x9c4: Pop(0)
0x9c5: Push((bool) 0)
0x9c6: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x9c7: Pop(1)
0x9c8: GOTO 0x9cd

0x9c9: Push("Can't find lsh animation : ")
0x9ca: Pop(1); Push(Stack[-1] + Stack[-8]);
0x9cb: @ Trace(Stack[-1])
0x9cc: Pop(1)
0x9cd: Return(); Pop(6)

0x9ce: PushEmpty(bool, float, float, bool, float, float)
0x9cf: @ lshHasAnimation(Stack[-3], Stack[-8])
0x9d0: Pop(0)
0x9d1: Push(Stack[-3])
0x9d2: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9d3: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x9d4: Pop(0)
0x9d5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x9d6: Pop(0)
0x9d7: GOTO 0x9dc

0x9d8: Push("Can't find lsh animation : ")
0x9d9: Pop(1); Push(Stack[-1] + Stack[-9]);
0x9da: @ Trace(Stack[-1])
0x9db: Pop(1)
0x9dc: Return(); Pop(6)

0x9dd: PushEmpty(bool, bool)
0x9de: PushEmpty(bool)
0x9df: Call2 0xa3c

0x9e0: Pop(0)
0x9e1: IF (Stack[-1] == 0) GOTO 0x9ea; Pop(1)

0x9e2: @ lshHasSpeech(Stack[-1], Stack[-3])
0x9e3: Pop(0)
0x9e4: Push(Stack[-1])
0x9e5: IF (Stack[-1] == 0) GOTO 0x9ea; Pop(1)

0x9e6: @ lshPlaySpeech(Stack[-3])
0x9e7: Pop(0)
0x9e8: Stack[-4] = (bool) 1
0x9e9: Return(); Pop(2)

0x9ea: Stack[-4] = (bool) 0
0x9eb: Return(); Pop(2)

0x9ec: PushEmpty(bool)
0x9ed: Call2 0xa3c

0x9ee: Pop(0)
0x9ef: IF (Stack[-1] == 0) GOTO 0x9f2; Pop(1)

0x9f0: @ lshStopSpeech()
0x9f1: Pop(0)
0x9f2: Return(); Pop(0)

0x9f3: PushEmpty(object, object)
0x9f4: @ self(Stack[-1])
0x9f5: Pop(0)
0x9f6: Stack[-3] = Stack[-1]
0x9f7: Return(); Pop(2)

0x9f8: Stack[-1] = 0
0x9f9: PushEmpty(float, float)
0x9fa: Pop(0); Push(Stack[-3] | Stack[-3]);
0x9fb: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x9fc: Push((float)0.0)
0x9fd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x9fe: IF (Stack[-1] == 0) GOTO 0xa01; Pop(1)

0x9ff: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xa00: Return(); Pop(2)

0xa01: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xa02: Return(); Pop(2)

0xa03: PushEmpty(int, int)
0xa04: @ GetVariable(Stack[-3], Stack[-1])
0xa05: Pop(0)
0xa06: Stack[-4] = Stack[-1]
0xa07: Return(); Pop(2)

0xa08: PushEmpty(float, float)
0xa09: @ GetGameTime(Stack[-1])
0xa0a: Pop(0)
0xa0b: Stack[-3] = Stack[-1]
0xa0c: Return(); Pop(2)

0xa0d: PushEmpty(float, float)
0xa0e: @ GetGameTime(Stack[-1])
0xa0f: Pop(0)
0xa10: Push((int) 1)
0xa11: PushEmpty(int)
0xa12: Push((int) 24)
0xa13: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xa14: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xa15: Return(); Pop(2)

0xa16: PushEmpty()
0xa17: PushEmpty(int)
0xa18: Call2 0xa0d

0xa19: Pop(0)
0xa1a: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xa1b: Return(); Pop(0)

0xa1c: PushEmpty(string, string)
0xa1d: Stack[-1] = "idle"
0xa1e: Push(Stack[-3])
0xa1f: IF (Stack[-1] == 0) GOTO 0xa21; Pop(1)

0xa20: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xa21: Stack[-4] = Stack[-1]
0xa22: Return(); Pop(2)

0xa23: PushEmpty(int, bool, int, bool)
0xa24: Stack[-2] = (int) 0
0xa25: Push("all")
0xa26: PushEmpty(string, int)
0xa27: Stack[-1] = Stack[-5]
0xa28: Call2 0xa1c

0xa29: Pop(1)
0xa2a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa2b: Pop(2)
0xa2c: Pop(0); Push((bool) Stack[-1] == 0)
0xa2d: IF (Stack[-1] == 0) GOTO 0xa2f; Pop(1)

0xa2e: GOTO 0xa32

0xa2f: Push((int) 1)
0xa30: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xa31: GOTO 0xa25

0xa32: Stack[-5] = Stack[-2]
0xa33: Return(); Pop(4)

0xa34: Stack[-1] = (int) 515539
0xa35: Return(); Pop(0)

0xa36: Stack[-1] = (int) 502864
0xa37: Return(); Pop(0)

0xa38: Stack[-1] = "ui/NPC_Katerina.png"
0xa39: Return(); Pop(0)

0xa3a: Stack[-1] = "ui/NPC_Katerina_b.png"
0xa3b: Return(); Pop(0)

0xa3c: Stack[-1] = (bool) 1
0xa3d: Return(); Pop(0)

0xa3e: PushEmpty()
0xa3f: Push("oob2Katerina1")
0xa40: Push((int) 1)
0xa41: @ SetVariable(Stack[-2], Stack[-1])
0xa42: Pop(2)
0xa43: Return(); Pop(0)

0xa44: PushEmpty()
0xa45: Push("oob2Katerina2")
0xa46: Push((int) 1)
0xa47: @ SetVariable(Stack[-2], Stack[-1])
0xa48: Pop(2)
0xa49: Return(); Pop(0)

0xa4a: PushEmpty()
0xa4b: Push("oob2Katerina3")
0xa4c: Push((int) 1)
0xa4d: @ SetVariable(Stack[-2], Stack[-1])
0xa4e: Pop(2)
0xa4f: Return(); Pop(0)

0xa50: PushEmpty(object, object)
0xa51: Push("b8q03")
0xa52: Push((int) 2)
0xa53: @ SetVariable(Stack[-2], Stack[-1])
0xa54: Pop(2)
0xa55: PushEmpty(object)
0xa56: Call2 0xaf7

0xa57: Stack[-2] = Stack[-1]
0xa58: Pop(1)
0xa59: Push("b8q03KaterinaGotoMat")
0xa5a: Push("pt_map_mat")
0xa5b: Push((int) 0)
0xa5c: Push((int) 530664)
0xa5d: PushEmpty(float)
0xa5e: Call2 0xa08

0xa5f: Pop(0)
0xa60: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa61: Pop(5)
0xa62: PushEmpty()
0xa63: Call2 0xac1

0xa64: Pop(0)
0xa65: Return(); Pop(2)

0xa66: Stack[-1] = 0
0xa67: PushEmpty()
0xa68: Push("b10q01TalkKaterina")
0xa69: Push((int) 1)
0xa6a: @ SetVariable(Stack[-2], Stack[-1])
0xa6b: Pop(2)
0xa6c: Return(); Pop(0)

0xa6d: PushEmpty()
0xa6e: PushEmpty(int, string)
0xa6f: Stack[-1] = "b8q03"
0xa70: Call2 0xa03

0xa71: Pop(1)
0xa72: Push((int) 1)
0xa73: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa74: IF (Stack[-1] == 0) GOTO 0xa77; Pop(1)

0xa75: Stack[-2] = (bool) 1
0xa76: Return(); Pop(0)

0xa77: Stack[-2] = (bool) 0
0xa78: Return(); Pop(0)

0xa79: PushEmpty()
0xa7a: PushEmpty(int, string)
0xa7b: Stack[-1] = "b10q01"
0xa7c: Call2 0xa03

0xa7d: Pop(1)
0xa7e: Push((int) 4)
0xa7f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa80: IF (Stack[-1] == 0) GOTO 0xa83; Pop(1)

0xa81: Stack[-2] = (bool) 1
0xa82: Return(); Pop(0)

0xa83: Stack[-2] = (bool) 0
0xa84: Return(); Pop(0)

0xa85: PushEmpty()
0xa86: PushEmpty(int, string)
0xa87: Stack[-1] = "b10q01TalkKaterina"
0xa88: Call2 0xa03

0xa89: Pop(1)
0xa8a: Push((int) 1)
0xa8b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa8c: IF (Stack[-1] == 0) GOTO 0xa8f; Pop(1)

0xa8d: Stack[-2] = (bool) 1
0xa8e: Return(); Pop(0)

0xa8f: Stack[-2] = (bool) 0
0xa90: Return(); Pop(0)

0xa91: PushEmpty()
0xa92: PushEmpty(int, string)
0xa93: Stack[-1] = "b2q01"
0xa94: Call2 0xa03

0xa95: Pop(1)
0xa96: Push((int) 0)
0xa97: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa98: IF (Stack[-1] == 0) GOTO 0xa9b; Pop(1)

0xa99: Stack[-2] = (bool) 1
0xa9a: Return(); Pop(0)

0xa9b: Stack[-2] = (bool) 0
0xa9c: Return(); Pop(0)

0xa9d: PushEmpty()
0xa9e: PushEmpty(int, string)
0xa9f: Stack[-1] = "oob2Katerina1"
0xaa0: Call2 0xa03

0xaa1: Pop(1)
0xaa2: Push((int) 0)
0xaa3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xaa4: IF (Stack[-1] == 0) GOTO 0xaa7; Pop(1)

0xaa5: Stack[-2] = (bool) 1
0xaa6: Return(); Pop(0)

0xaa7: Stack[-2] = (bool) 0
0xaa8: Return(); Pop(0)

0xaa9: PushEmpty()
0xaaa: PushEmpty(int, string)
0xaab: Stack[-1] = "oob2Katerina2"
0xaac: Call2 0xa03

0xaad: Pop(1)
0xaae: Push((int) 0)
0xaaf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xab0: IF (Stack[-1] == 0) GOTO 0xab3; Pop(1)

0xab1: Stack[-2] = (bool) 1
0xab2: Return(); Pop(0)

0xab3: Stack[-2] = (bool) 0
0xab4: Return(); Pop(0)

0xab5: PushEmpty()
0xab6: PushEmpty(int, string)
0xab7: Stack[-1] = "oob2Katerina3"
0xab8: Call2 0xa03

0xab9: Pop(1)
0xaba: Push((int) 0)
0xabb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xabc: IF (Stack[-1] == 0) GOTO 0xabf; Pop(1)

0xabd: Stack[-2] = (bool) 1
0xabe: Return(); Pop(0)

0xabf: Stack[-2] = (bool) 0
0xac0: Return(); Pop(0)

0xac1: PushEmpty(object, object)
0xac2: Push((int) 577)
0xac3: Push((int) 2)
0xac4: Push((int) 530657)
0xac5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xac6: Pop(3)
0xac7: PushEmpty(bool, object, int)
0xac8: Stack[-2] = Stack[-4]
0xac9: Stack[-1] = (int) 575
0xaca: Call2 0xadb

0xacb: Pop(3)
0xacc: Return(); Pop(2)

0xacd: Stack[-1] = 0
0xace: PushEmpty(object, object)
0xacf: @ GetDiaryRoot(Stack[-1])
0xad0: Pop(0)
0xad1: Pop(0); Push((bool) Stack[-1] == 0)
0xad2: IF (Stack[-1] == 0) GOTO 0xad8; Pop(1)

0xad3: Push("Can't retrieve diary root")
0xad4: @ Trace(Stack[-1])
0xad5: Pop(1)
0xad6: Stack[-3] = (bool) 0
0xad7: Return(); Pop(2)

0xad8: Stack[-3] = Stack[-1]
0xad9: Return(); Pop(2)

0xada: Stack[-1] = 0
0xadb: PushEmpty(object, object, int, object, object, int)
0xadc: PushEmpty(object)
0xadd: Call2 0xace

0xade: Stack[-4] = Stack[-1]
0xadf: Pop(1)
0xae0: @@ Find(Stack[-7], Stack[-2])
0xae1: Pop(0)
0xae2: Pop(0); Push((bool) Stack[-2] == 0)
0xae3: IF (Stack[-1] == 0) GOTO 0xaea; Pop(1)

0xae4: Push("Can't find diary parent with id: ")
0xae5: Pop(1); Push(Stack[-1] + Stack[-8]);
0xae6: @ Trace(Stack[-1])
0xae7: Pop(1)
0xae8: Stack[-9] = (bool) 0
0xae9: Return(); Pop(6)

0xaea: @@ AddChild(Stack[-8])
0xaeb: Pop(0)
0xaec: Push((int) 7)
0xaed: @ SendWorldWndMessage(Stack[-1])
0xaee: Pop(1)
0xaef: @@ GetCategory(Stack[-1])
0xaf0: Pop(0)
0xaf1: @ SetDiarySection(Stack[-1])
0xaf2: Pop(0)
0xaf3: Stack[-9] = (bool) 0
0xaf4: Return(); Pop(6)

0xaf5: Stack[-2] = 0
0xaf6: Stack[-3] = 0
0xaf7: PushEmpty(object, object, object, object)
0xaf8: @ GetMainOutdoorScene(Stack[-2])
0xaf9: Pop(0)
0xafa: Pop(0); Push((bool) Stack[-2] == 0)
0xafb: IF (Stack[-1] == 0) GOTO 0xb02; Pop(1)

0xafc: Push("Can't find main outdoor scene")
0xafd: @ Trace(Stack[-1])
0xafe: Pop(1)
0xaff: Stack[-1] = 0
0xb00: Stack[-5] = Stack[-1]
0xb01: Return(); Pop(4)

0xb02: @@ GetMap(Stack[-1])
0xb03: Pop(0)
0xb04: Stack[-5] = Stack[-1]
0xb05: Return(); Pop(4)

0xb06: Stack[-1] = 0
0xb07: Stack[-2] = 0
0xb08: PushEmpty(int, int)
0xb09: Push("branch")
0xb0a: @ GetVariable(Stack[-1], Stack[-2])
0xb0b: Pop(1)
0xb0c: Push((int) 0)
0xb0d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb0e: IF (Stack[-1] == 0) GOTO 0xb12; Pop(1)

0xb0f: Stack[-3] = (int) 1
0xb10: Return(); Pop(2)

0xb11: GOTO 0xb17

0xb12: Push((int) 1)
0xb13: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb14: IF (Stack[-1] == 0) GOTO 0xb17; Pop(1)

0xb15: Stack[-3] = (int) 2
0xb16: Return(); Pop(2)

0xb17: Stack[-3] = (int) 3
0xb18: Return(); Pop(2)

0xb19: PushEmpty()
0xb1a: Push(GlobalVars[1])
0xb1b: Pop(1); Push((bool) Stack[-1] == 0)
0xb1c: IF (Stack[-1] == 0) GOTO 0xb26; Pop(1)

0xb1d: PushEmpty(int, object)
0xb1e: Stack[-1] = Stack[-3]
0xb1f: Push(-2, 1); TaskCall(0)
0xb20: Call2 0x0

0xb21: Pop(-2, 1); TaskReturn
0xb22: Pop(2)
0xb23: Push(GlobalVars[1])
0xb24: Stack[-1] = (bool) 1
0xb25: GlobalVars[1] = Stack[-1]; Pop(1)
0xb26: PushEmpty(bool, int)
0xb27: Stack[-1] = (int) 2
0xb28: Call2 0xa16

0xb29: Pop(1)
0xb2a: IF (Stack[-1] == 0) GOTO 0xb32; Pop(1)

0xb2b: PushEmpty(int, object)
0xb2c: Stack[-1] = Stack[-3]
0xb2d: Push(-2, 1); TaskCall(2)
0xb2e: Call2 0xcb

0xb2f: Pop(-2, 1); TaskReturn
0xb30: Pop(2)
0xb31: Return(); Pop(0)

0xb32: PushEmpty(bool, int)
0xb33: Stack[-1] = (int) 8
0xb34: Call2 0xa16

0xb35: Pop(1)
0xb36: IF (Stack[-1] == 0) GOTO 0xb3e; Pop(1)

0xb37: PushEmpty(int, object)
0xb38: Stack[-1] = Stack[-3]
0xb39: Push(-2, 1); TaskCall(4)
0xb3a: Call2 0x304

0xb3b: Pop(-2, 1); TaskReturn
0xb3c: Pop(2)
0xb3d: Return(); Pop(0)

0xb3e: PushEmpty(bool, int)
0xb3f: Stack[-1] = (int) 10
0xb40: Call2 0xa16

0xb41: Pop(1)
0xb42: IF (Stack[-1] == 0) GOTO 0xb4a; Pop(1)

0xb43: PushEmpty(int, object)
0xb44: Stack[-1] = Stack[-3]
0xb45: Push(-2, 1); TaskCall(6)
0xb46: Call2 0x461

0xb47: Pop(-2, 1); TaskReturn
0xb48: Pop(2)
0xb49: Return(); Pop(0)

0xb4a: PushEmpty(bool)
0xb4b: Stack[-1] = (bool) 0
0xb4c: PushEmpty(bool, int)
0xb4d: Stack[-1] = (int) 12
0xb4e: Call2 0xa16

0xb4f: Pop(1)
0xb50: IF (Stack[-1] == 0) GOTO 0xb55; Pop(1)

0xb51: Push(GlobalVars[2])
0xb52: Pop(1); Push((bool) Stack[-1] == 0)
0xb53: IF (Stack[-1] == 0) GOTO 0xb55; Pop(1)

0xb54: Stack[-1] = (bool) 1
0xb55: IF (Stack[-1] == 0) GOTO 0xb60; Pop(1)

0xb56: PushEmpty(int, object)
0xb57: Stack[-1] = Stack[-3]
0xb58: Push(-2, 1); TaskCall(8)
0xb59: Call2 0x5ec

0xb5a: Pop(-2, 1); TaskReturn
0xb5b: Pop(2)
0xb5c: Push(GlobalVars[2])
0xb5d: Stack[-1] = (bool) 1
0xb5e: GlobalVars[2] = Stack[-1]; Pop(1)
0xb5f: Return(); Pop(0)

0xb60: PushEmpty(int, object)
0xb61: Stack[-1] = Stack[-3]
0xb62: Push(-2, 1); TaskCall(10)
0xb63: Call2 0x6ef

0xb64: Pop(-2, 1); TaskReturn
0xb65: Pop(2)
0xb66: Return(); Pop(0)

