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
	GetMainOutdoorScene (1 args)

RunOp = 0x792
RunTask = 12

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a4 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2b5 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4b2 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x600 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x768 Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x7de Vars = (int)
		EVENT_6 Op = 0x804 Vars = ()
		EVENT_5 Op = 0x813 Vars = ()
		EVENT_45 Op = 0x820 Vars = (bool)
		EVENT_0 Op = 0x82c Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x8b5

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xa0c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xa0a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xa0e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xa10

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xade

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
0x31: Call2 0x9c9

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x90a

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
0x48: Call2 0x8f9

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
0x5b: Push((int) 535294)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 535295)
0x61: Push((int) 36973)
0x62: Push((int) 36972)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 535302)
0x66: Push((int) -1)
0x67: Push((int) 36980)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 535303)
0x6b: Push((int) -1)
0x6c: Push((int) 36981)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0xa12

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x994

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
0x92: Call2 0xa12

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
0xa2: Call2 0x9a4

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x9c2

0xab: Pop(0)
0xac: Push((int) 36971)
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xaf: PushEmpty(string)
0xb0: Stack[-1] = "Neutral"
0xb1: Call2 0x90

0xb2: Pop(1)
0xb3: Push((int) 535294)
0xb4: @@ SetMessage(Stack[-1])
0xb5: Pop(1)
0xb6: @@ ClearReplies()
0xb7: Pop(0)
0xb8: Push((int) 535295)
0xb9: Push((int) 36973)
0xba: Push((int) 36972)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Push((int) 535302)
0xbe: Push((int) -1)
0xbf: Push((int) 36980)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: Push((int) 535303)
0xc3: Push((int) -1)
0xc4: Push((int) 36981)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Return(); Pop(0)

0xc8: Push((int) 36973)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0x90

0xce: Pop(1)
0xcf: Push((int) 535296)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 535297)
0xd5: Push((int) 36975)
0xd6: Push((int) 36974)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 535301)
0xda: Push((int) 36975)
0xdb: Push((int) 36978)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 36975)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call2 0x90

0xe5: Pop(1)
0xe6: Push((int) 535298)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 535299)
0xec: Push((int) -1)
0xed: Push((int) 36976)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 535300)
0xf1: Push((int) -1)
0xf2: Push((int) 36977)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf7: PushEmpty(bool)
0xf8: Call2 0xa12

0xf9: Pop(0)
0xfa: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfb: @ lshStopAnimation()
0xfc: Pop(0)
0xfd: GOTO 0x100

0xfe: @ StopAnimation()
0xff: Pop(0)
0x100: Return(); Pop(0)

0x101: GOTO 0xa7

0x102: Return(); Pop(0)

0x103: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x104: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x105: PushEmpty(bool, object, float)
0x106: Stack[-2] = Stack[-12]
0x107: Stack[-1] = (float) 70.0
0x108: Call2 0x8b5

0x109: Pop(2)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-10] = (int) -2
0x10d: Return(); Pop(8)

0x10e: @ CreateDialog(Stack[-4])
0x10f: Pop(0)
0x110: PushEmpty(int)
0x111: Call2 0xa0c

0x112: Pop(0)
0x113: @@ SetNPCName(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(int)
0x116: Call2 0xa0a

0x117: Pop(0)
0x118: @@ SetNPCDescription(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(string)
0x11b: Call2 0xa0e

0x11c: Pop(0)
0x11d: @@ SetPhoto(Stack[-1])
0x11e: Pop(1)
0x11f: PushEmpty(string)
0x120: Call2 0xa10

0x121: Pop(0)
0x122: @@ SetPhoto2(Stack[-1])
0x123: Pop(1)
0x124: PushEmpty(int)
0x125: Call2 0xade

0x126: Pop(0)
0x127: @@ SetPlayerName(Stack[-1])
0x128: Pop(1)
0x129: Stack[-2] = (int) -1
0x12a: @ IsOverrideActive(Stack[-3])
0x12b: Pop(0)
0x12c: Push(Stack[-3])
0x12d: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12e: Stack[-10] = (int) -2
0x12f: Return(); Pop(8)

0x130: @ DoDialog(Stack[-4])
0x131: Pop(0)
0x132: PushEmpty(bool, object)
0x133: PushEmpty(object)
0x134: Call2 0x9c9

0x135: Stack[-2] = Stack[-1]
0x136: Pop(1)
0x137: Call2 0x90a

0x138: Pop(2)
0x139: PushEmpty(object, object)
0x13a: Stack[-2] = Stack[-11]
0x13b: Stack[-1] = Stack[-6]
0x13c: Push(-2, 4); TaskCall(3)
0x13d: Call2 0x154

0x13e: Pop(-2, 4); TaskReturn
0x13f: Pop(2)
0x140: @@ IsDialogEnd(Stack[-1])
0x141: Pop(0)
0x142: Pop(0); Push((bool) Stack[-1] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x144: @ sync()
0x145: Pop(0)
0x146: @@ IsDialogEnd(Stack[-1])
0x147: Pop(0)
0x148: GOTO 0x142

0x149: PushEmpty(object)
0x14a: Stack[-1] = Stack[-10]
0x14b: Call2 0x8f9

0x14c: Pop(1)
0x14d: @ StopDialog(Stack[-4])
0x14e: Pop(0)
0x14f: @@ GetReturnValue(Stack[-2])
0x150: Pop(0)
0x151: Stack[-10] = Stack[-2]
0x152: Return(); Pop(8)

0x153: Stack[-4] = 0
0x154: PushEmpty()
0x155: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x156: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x157: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x158: Push((int) 1)
0x159: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Neutral"
0x15c: Call2 0x18e

0x15d: Pop(1)
0x15e: Push((int) 518018)
0x15f: @@ SetMessage(Stack[-1])
0x160: Pop(1)
0x161: @@ ClearReplies()
0x162: Pop(0)
0x163: Push((int) 518019)
0x164: Push((int) -1)
0x165: Push((int) 19152)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Push((int) 527797)
0x169: Push((int) -1)
0x16a: Push((int) 29130)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: GOTO 0x170

0x16e: Return(); Pop(0)

0x16f: GOTO 0x158

0x170: PushEmpty(bool)
0x171: Call2 0xa12

0x172: Pop(0)
0x173: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x174: @ lshWaitForAnimEnd()
0x175: Pop(0)
0x176: Push( Stack[3 + Tasks[-1].StackPointer] )
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: GOTO 0x17e

0x179: PushEmpty(string)
0x17a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x17b: Call2 0x994

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
0x190: Call2 0xa12

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
0x1a0: Call2 0x9a4

0x1a1: Pop(2)
0x1a2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty()
0x1a5: Push((int) 1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1a7: PushEmpty()
0x1a8: Call2 0x9c2

0x1a9: Pop(0)
0x1aa: Push((int) 19151)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Neutral"
0x1af: Call2 0x18e

0x1b0: Pop(1)
0x1b1: Push((int) 518018)
0x1b2: @@ SetMessage(Stack[-1])
0x1b3: Pop(1)
0x1b4: @@ ClearReplies()
0x1b5: Pop(0)
0x1b6: Push((int) 518019)
0x1b7: Push((int) -1)
0x1b8: Push((int) 19152)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Push((int) 527797)
0x1bc: Push((int) -1)
0x1bd: Push((int) 29130)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Return(); Pop(0)

0x1c1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c2: PushEmpty(bool)
0x1c3: Call2 0xa12

0x1c4: Pop(0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c6: @ lshStopAnimation()
0x1c7: Pop(0)
0x1c8: GOTO 0x1cb

0x1c9: @ StopAnimation()
0x1ca: Pop(0)
0x1cb: Return(); Pop(0)

0x1cc: GOTO 0x1a5

0x1cd: Return(); Pop(0)

0x1ce: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1cf: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1d0: PushEmpty(bool, object, float)
0x1d1: Stack[-2] = Stack[-12]
0x1d2: Stack[-1] = (float) 70.0
0x1d3: Call2 0x8b5

0x1d4: Pop(2)
0x1d5: Pop(1); Push((bool) Stack[-1] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d7: Stack[-10] = (int) -2
0x1d8: Return(); Pop(8)

0x1d9: @ CreateDialog(Stack[-4])
0x1da: Pop(0)
0x1db: PushEmpty(int)
0x1dc: Call2 0xa0c

0x1dd: Pop(0)
0x1de: @@ SetNPCName(Stack[-1])
0x1df: Pop(1)
0x1e0: PushEmpty(int)
0x1e1: Call2 0xa0a

0x1e2: Pop(0)
0x1e3: @@ SetNPCDescription(Stack[-1])
0x1e4: Pop(1)
0x1e5: PushEmpty(string)
0x1e6: Call2 0xa0e

0x1e7: Pop(0)
0x1e8: @@ SetPhoto(Stack[-1])
0x1e9: Pop(1)
0x1ea: PushEmpty(string)
0x1eb: Call2 0xa10

0x1ec: Pop(0)
0x1ed: @@ SetPhoto2(Stack[-1])
0x1ee: Pop(1)
0x1ef: PushEmpty(int)
0x1f0: Call2 0xade

0x1f1: Pop(0)
0x1f2: @@ SetPlayerName(Stack[-1])
0x1f3: Pop(1)
0x1f4: Stack[-2] = (int) -1
0x1f5: @ IsOverrideActive(Stack[-3])
0x1f6: Pop(0)
0x1f7: Push(Stack[-3])
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f9: Stack[-10] = (int) -2
0x1fa: Return(); Pop(8)

0x1fb: @ DoDialog(Stack[-4])
0x1fc: Pop(0)
0x1fd: PushEmpty(bool, object)
0x1fe: PushEmpty(object)
0x1ff: Call2 0x9c9

0x200: Stack[-2] = Stack[-1]
0x201: Pop(1)
0x202: Call2 0x90a

0x203: Pop(2)
0x204: PushEmpty(object, object)
0x205: Stack[-2] = Stack[-11]
0x206: Stack[-1] = Stack[-6]
0x207: Push(-2, 4); TaskCall(5)
0x208: Call2 0x21f

0x209: Pop(-2, 4); TaskReturn
0x20a: Pop(2)
0x20b: @@ IsDialogEnd(Stack[-1])
0x20c: Pop(0)
0x20d: Pop(0); Push((bool) Stack[-1] == 0)
0x20e: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x20f: @ sync()
0x210: Pop(0)
0x211: @@ IsDialogEnd(Stack[-1])
0x212: Pop(0)
0x213: GOTO 0x20d

0x214: PushEmpty(object)
0x215: Stack[-1] = Stack[-10]
0x216: Call2 0x8f9

0x217: Pop(1)
0x218: @ StopDialog(Stack[-4])
0x219: Pop(0)
0x21a: @@ GetReturnValue(Stack[-2])
0x21b: Pop(0)
0x21c: Stack[-10] = Stack[-2]
0x21d: Return(); Pop(8)

0x21e: Stack[-4] = 0
0x21f: PushEmpty()
0x220: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x221: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x222: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x223: Push((int) 1)
0x224: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x225: PushEmpty(bool)
0x226: Stack[-1] = (bool) 0
0x227: PushEmpty(bool, object)
0x228: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x229: Call2 0xa67

0x22a: Pop(1)
0x22b: Pop(1); Push((bool) Stack[-1] == 0)
0x22c: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22d: PushEmpty(bool, object)
0x22e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22f: Call2 0xa73

0x230: Pop(1)
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: Stack[-1] = (bool) 1
0x233: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x234: PushEmpty(object, object)
0x235: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x236: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x237: Call2 0xa14

0x238: Pop(2)
0x239: PushEmpty(string)
0x23a: Stack[-1] = "Suffering"
0x23b: Call2 0x29f

0x23c: Pop(1)
0x23d: Push((int) 520248)
0x23e: @@ SetMessage(Stack[-1])
0x23f: Pop(1)
0x240: @@ ClearReplies()
0x241: Pop(0)
0x242: Push((int) 520249)
0x243: Push((int) 21442)
0x244: Push((int) 21441)
0x245: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x246: Pop(3)
0x247: GOTO 0x281

0x248: PushEmpty(string)
0x249: Stack[-1] = "Neutral"
0x24a: Call2 0x29f

0x24b: Pop(1)
0x24c: Push((int) 520268)
0x24d: @@ SetMessage(Stack[-1])
0x24e: Pop(1)
0x24f: @@ ClearReplies()
0x250: Pop(0)
0x251: PushEmpty(bool)
0x252: Stack[-1] = (bool) 0
0x253: PushEmpty(bool, object)
0x254: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x255: Call2 0xa73

0x256: Pop(1)
0x257: Pop(1); Push((bool) Stack[-1] == 0)
0x258: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x259: PushEmpty(bool, object)
0x25a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x25b: Call2 0xa7f

0x25c: Pop(1)
0x25d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25e: Stack[-1] = (bool) 1
0x25f: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x260: Push((int) 520269)
0x261: Push((int) 21462)
0x262: Push((int) 21461)
0x263: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x264: Pop(3)
0x265: PushEmpty(bool)
0x266: Stack[-1] = (bool) 0
0x267: PushEmpty(bool, object)
0x268: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x269: Call2 0xa73

0x26a: Pop(1)
0x26b: Pop(1); Push((bool) Stack[-1] == 0)
0x26c: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x26d: PushEmpty(bool, object)
0x26e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x26f: Call2 0xa8b

0x270: Pop(1)
0x271: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x272: Stack[-1] = (bool) 1
0x273: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x274: Push((int) 520272)
0x275: Push((int) 21465)
0x276: Push((int) 21464)
0x277: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x278: Pop(3)
0x279: Push((int) 520277)
0x27a: Push((int) -1)
0x27b: Push((int) 21469)
0x27c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27d: Pop(3)
0x27e: GOTO 0x281

0x27f: Return(); Pop(0)

0x280: GOTO 0x223

0x281: PushEmpty(bool)
0x282: Call2 0xa12

0x283: Pop(0)
0x284: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x285: @ lshWaitForAnimEnd()
0x286: Pop(0)
0x287: Push( Stack[3 + Tasks[-1].StackPointer] )
0x288: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x289: GOTO 0x28f

0x28a: PushEmpty(string)
0x28b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x28c: Call2 0x994

0x28d: Pop(1)
0x28e: GOTO 0x285

0x28f: GOTO 0x29e

0x290: Push("all")
0x291: Push("idle")
0x292: @ PlayAnimation(Stack[-2], Stack[-1])
0x293: Pop(2)
0x294: @ WaitForAnimEnd()
0x295: Pop(0)
0x296: Push( Stack[3 + Tasks[-1].StackPointer] )
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: GOTO 0x29e

0x299: Push("all")
0x29a: Push("idle")
0x29b: @ PlayAnimation(Stack[-2], Stack[-1])
0x29c: Pop(2)
0x29d: GOTO 0x294

0x29e: Return(); Pop(0)

0x29f: PushEmpty()
0x2a0: PushEmpty(bool)
0x2a1: Call2 0xa12

0x2a2: Pop(0)
0x2a3: Pop(1); Push((bool) Stack[-1] == 0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a5: Return(); Pop(0)

0x2a6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a8: Return(); Pop(0)

0x2a9: PushEmpty(string, bool)
0x2aa: Stack[-2] = Stack[-3]
0x2ab: Push("")
0x2ac: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2ae: Stack[-1] = (bool) 0
0x2af: GOTO 0x2b1

0x2b0: Stack[-1] = (bool) 1
0x2b1: Call2 0x9a4

0x2b2: Pop(2)
0x2b3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2b4: Return(); Pop(0)

0x2b5: PushEmpty()
0x2b6: Push((int) 1)
0x2b7: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x2b8: PushEmpty()
0x2b9: Call2 0x9c2

0x2ba: Pop(0)
0x2bb: Push((int) 21461)
0x2bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2be: PushEmpty(object, object)
0x2bf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c1: Call2 0xa1a

0x2c2: Pop(2)
0x2c3: Push((int) 21464)
0x2c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c5: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c6: PushEmpty(object, object)
0x2c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c9: Call2 0xa20

0x2ca: Pop(2)
0x2cb: Push((int) 21440)
0x2cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x2ce: PushEmpty(bool)
0x2cf: Stack[-1] = (bool) 0
0x2d0: PushEmpty(bool, object)
0x2d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d2: Call2 0xa67

0x2d3: Pop(1)
0x2d4: Pop(1); Push((bool) Stack[-1] == 0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d6: PushEmpty(bool, object)
0x2d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d8: Call2 0xa73

0x2d9: Pop(1)
0x2da: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2db: Stack[-1] = (bool) 1
0x2dc: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2dd: PushEmpty(object, object)
0x2de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e0: Call2 0xa14

0x2e1: Pop(2)
0x2e2: PushEmpty(string)
0x2e3: Stack[-1] = "Suffering"
0x2e4: Call2 0x29f

0x2e5: Pop(1)
0x2e6: Push((int) 520248)
0x2e7: @@ SetMessage(Stack[-1])
0x2e8: Pop(1)
0x2e9: @@ ClearReplies()
0x2ea: Pop(0)
0x2eb: Push((int) 520249)
0x2ec: Push((int) 21442)
0x2ed: Push((int) 21441)
0x2ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ef: Pop(3)
0x2f0: Return(); Pop(0)

0x2f1: PushEmpty(string)
0x2f2: Stack[-1] = "Neutral"
0x2f3: Call2 0x29f

0x2f4: Pop(1)
0x2f5: Push((int) 520268)
0x2f6: @@ SetMessage(Stack[-1])
0x2f7: Pop(1)
0x2f8: @@ ClearReplies()
0x2f9: Pop(0)
0x2fa: PushEmpty(bool)
0x2fb: Stack[-1] = (bool) 0
0x2fc: PushEmpty(bool, object)
0x2fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2fe: Call2 0xa73

0x2ff: Pop(1)
0x300: Pop(1); Push((bool) Stack[-1] == 0)
0x301: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x302: PushEmpty(bool, object)
0x303: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x304: Call2 0xa7f

0x305: Pop(1)
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: Stack[-1] = (bool) 1
0x308: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x309: Push((int) 520269)
0x30a: Push((int) 21462)
0x30b: Push((int) 21461)
0x30c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30d: Pop(3)
0x30e: PushEmpty(bool)
0x30f: Stack[-1] = (bool) 0
0x310: PushEmpty(bool, object)
0x311: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x312: Call2 0xa73

0x313: Pop(1)
0x314: Pop(1); Push((bool) Stack[-1] == 0)
0x315: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x316: PushEmpty(bool, object)
0x317: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x318: Call2 0xa8b

0x319: Pop(1)
0x31a: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x31b: Stack[-1] = (bool) 1
0x31c: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31d: Push((int) 520272)
0x31e: Push((int) 21465)
0x31f: Push((int) 21464)
0x320: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x321: Pop(3)
0x322: Push((int) 520277)
0x323: Push((int) -1)
0x324: Push((int) 21469)
0x325: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x326: Pop(3)
0x327: Return(); Pop(0)

0x328: Push((int) 21465)
0x329: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x32b: PushEmpty(string)
0x32c: Stack[-1] = "Penetrating"
0x32d: Call2 0x29f

0x32e: Pop(1)
0x32f: Push((int) 520273)
0x330: @@ SetMessage(Stack[-1])
0x331: Pop(1)
0x332: @@ ClearReplies()
0x333: Pop(0)
0x334: Push((int) 520274)
0x335: Push((int) 21467)
0x336: Push((int) 21466)
0x337: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x338: Pop(3)
0x339: Return(); Pop(0)

0x33a: Push((int) 21467)
0x33b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33c: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x33d: PushEmpty(string)
0x33e: Stack[-1] = "Penetrating"
0x33f: Call2 0x29f

0x340: Pop(1)
0x341: Push((int) 520275)
0x342: @@ SetMessage(Stack[-1])
0x343: Pop(1)
0x344: @@ ClearReplies()
0x345: Pop(0)
0x346: Push((int) 520276)
0x347: Push((int) -1)
0x348: Push((int) 21468)
0x349: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34a: Pop(3)
0x34b: Push((int) 527804)
0x34c: Push((int) -1)
0x34d: Push((int) 29140)
0x34e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34f: Pop(3)
0x350: Return(); Pop(0)

0x351: Push((int) 21462)
0x352: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x354: PushEmpty(string)
0x355: Stack[-1] = "Grin"
0x356: Call2 0x29f

0x357: Pop(1)
0x358: Push((int) 520270)
0x359: @@ SetMessage(Stack[-1])
0x35a: Pop(1)
0x35b: @@ ClearReplies()
0x35c: Pop(0)
0x35d: Push((int) 520271)
0x35e: Push((int) -1)
0x35f: Push((int) 21463)
0x360: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x361: Pop(3)
0x362: Return(); Pop(0)

0x363: Push((int) 21442)
0x364: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x366: PushEmpty(string)
0x367: Stack[-1] = "Suffering"
0x368: Call2 0x29f

0x369: Pop(1)
0x36a: Push((int) 520250)
0x36b: @@ SetMessage(Stack[-1])
0x36c: Pop(1)
0x36d: @@ ClearReplies()
0x36e: Pop(0)
0x36f: Push((int) 520251)
0x370: Push((int) 21444)
0x371: Push((int) 21443)
0x372: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x373: Pop(3)
0x374: Push((int) 520259)
0x375: Push((int) 21452)
0x376: Push((int) 21451)
0x377: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x378: Pop(3)
0x379: Push((int) 520265)
0x37a: Push((int) 21458)
0x37b: Push((int) 21457)
0x37c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37d: Pop(3)
0x37e: Return(); Pop(0)

0x37f: Push((int) 21458)
0x380: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x381: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x382: PushEmpty(string)
0x383: Stack[-1] = "Suffering"
0x384: Call2 0x29f

0x385: Pop(1)
0x386: Push((int) 520266)
0x387: @@ SetMessage(Stack[-1])
0x388: Pop(1)
0x389: @@ ClearReplies()
0x38a: Pop(0)
0x38b: Push((int) 527803)
0x38c: Push((int) 21452)
0x38d: Push((int) 29136)
0x38e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38f: Pop(3)
0x390: Push((int) 520267)
0x391: Push((int) -1)
0x392: Push((int) 21459)
0x393: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x394: Pop(3)
0x395: Return(); Pop(0)

0x396: Push((int) 21452)
0x397: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x399: PushEmpty(string)
0x39a: Stack[-1] = "Penetrating"
0x39b: Call2 0x29f

0x39c: Pop(1)
0x39d: Push((int) 520260)
0x39e: @@ SetMessage(Stack[-1])
0x39f: Pop(1)
0x3a0: @@ ClearReplies()
0x3a1: Pop(0)
0x3a2: Push((int) 520261)
0x3a3: Push((int) 21454)
0x3a4: Push((int) 21453)
0x3a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a6: Pop(3)
0x3a7: Push((int) 520264)
0x3a8: Push((int) 21454)
0x3a9: Push((int) 21456)
0x3aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ab: Pop(3)
0x3ac: Return(); Pop(0)

0x3ad: Push((int) 21454)
0x3ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3af: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3b0: PushEmpty(string)
0x3b1: Stack[-1] = "Suffering"
0x3b2: Call2 0x29f

0x3b3: Pop(1)
0x3b4: Push((int) 520262)
0x3b5: @@ SetMessage(Stack[-1])
0x3b6: Pop(1)
0x3b7: @@ ClearReplies()
0x3b8: Pop(0)
0x3b9: Push((int) 520263)
0x3ba: Push((int) -1)
0x3bb: Push((int) 21455)
0x3bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bd: Pop(3)
0x3be: Return(); Pop(0)

0x3bf: Push((int) 21444)
0x3c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3c2: PushEmpty(string)
0x3c3: Stack[-1] = "Suffering"
0x3c4: Call2 0x29f

0x3c5: Pop(1)
0x3c6: Push((int) 520252)
0x3c7: @@ SetMessage(Stack[-1])
0x3c8: Pop(1)
0x3c9: @@ ClearReplies()
0x3ca: Pop(0)
0x3cb: Push((int) 520253)
0x3cc: Push((int) 21446)
0x3cd: Push((int) 21445)
0x3ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cf: Pop(3)
0x3d0: Push((int) 520256)
0x3d1: Push((int) 21449)
0x3d2: Push((int) 21448)
0x3d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d4: Pop(3)
0x3d5: Return(); Pop(0)

0x3d6: Push((int) 21449)
0x3d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3d9: PushEmpty(string)
0x3da: Stack[-1] = "Neutral"
0x3db: Call2 0x29f

0x3dc: Pop(1)
0x3dd: Push((int) 520257)
0x3de: @@ SetMessage(Stack[-1])
0x3df: Pop(1)
0x3e0: @@ ClearReplies()
0x3e1: Pop(0)
0x3e2: Push((int) 520258)
0x3e3: Push((int) -1)
0x3e4: Push((int) 21450)
0x3e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e6: Pop(3)
0x3e7: Return(); Pop(0)

0x3e8: Push((int) 21446)
0x3e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3eb: PushEmpty(string)
0x3ec: Stack[-1] = "Penetrating"
0x3ed: Call2 0x29f

0x3ee: Pop(1)
0x3ef: Push((int) 520254)
0x3f0: @@ SetMessage(Stack[-1])
0x3f1: Pop(1)
0x3f2: @@ ClearReplies()
0x3f3: Pop(0)
0x3f4: Push((int) 520255)
0x3f5: Push((int) -1)
0x3f6: Push((int) 21447)
0x3f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f8: Pop(3)
0x3f9: Return(); Pop(0)

0x3fa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3fb: PushEmpty(bool)
0x3fc: Call2 0xa12

0x3fd: Pop(0)
0x3fe: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3ff: @ lshStopAnimation()
0x400: Pop(0)
0x401: GOTO 0x404

0x402: @ StopAnimation()
0x403: Pop(0)
0x404: Return(); Pop(0)

0x405: GOTO 0x2b6

0x406: Return(); Pop(0)

0x407: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x408: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x409: PushEmpty(bool, object, float)
0x40a: Stack[-2] = Stack[-12]
0x40b: Stack[-1] = (float) 70.0
0x40c: Call2 0x8b5

0x40d: Pop(2)
0x40e: Pop(1); Push((bool) Stack[-1] == 0)
0x40f: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x410: Stack[-10] = (int) -2
0x411: Return(); Pop(8)

0x412: @ CreateDialog(Stack[-4])
0x413: Pop(0)
0x414: PushEmpty(int)
0x415: Call2 0xa0c

0x416: Pop(0)
0x417: @@ SetNPCName(Stack[-1])
0x418: Pop(1)
0x419: PushEmpty(int)
0x41a: Call2 0xa0a

0x41b: Pop(0)
0x41c: @@ SetNPCDescription(Stack[-1])
0x41d: Pop(1)
0x41e: PushEmpty(string)
0x41f: Call2 0xa0e

0x420: Pop(0)
0x421: @@ SetPhoto(Stack[-1])
0x422: Pop(1)
0x423: PushEmpty(string)
0x424: Call2 0xa10

0x425: Pop(0)
0x426: @@ SetPhoto2(Stack[-1])
0x427: Pop(1)
0x428: PushEmpty(int)
0x429: Call2 0xade

0x42a: Pop(0)
0x42b: @@ SetPlayerName(Stack[-1])
0x42c: Pop(1)
0x42d: Stack[-2] = (int) -1
0x42e: @ IsOverrideActive(Stack[-3])
0x42f: Pop(0)
0x430: Push(Stack[-3])
0x431: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x432: Stack[-10] = (int) -2
0x433: Return(); Pop(8)

0x434: @ DoDialog(Stack[-4])
0x435: Pop(0)
0x436: PushEmpty(bool, object)
0x437: PushEmpty(object)
0x438: Call2 0x9c9

0x439: Stack[-2] = Stack[-1]
0x43a: Pop(1)
0x43b: Call2 0x90a

0x43c: Pop(2)
0x43d: PushEmpty(object, object)
0x43e: Stack[-2] = Stack[-11]
0x43f: Stack[-1] = Stack[-6]
0x440: Push(-2, 4); TaskCall(7)
0x441: Call2 0x458

0x442: Pop(-2, 4); TaskReturn
0x443: Pop(2)
0x444: @@ IsDialogEnd(Stack[-1])
0x445: Pop(0)
0x446: Pop(0); Push((bool) Stack[-1] == 0)
0x447: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x448: @ sync()
0x449: Pop(0)
0x44a: @@ IsDialogEnd(Stack[-1])
0x44b: Pop(0)
0x44c: GOTO 0x446

0x44d: PushEmpty(object)
0x44e: Stack[-1] = Stack[-10]
0x44f: Call2 0x8f9

0x450: Pop(1)
0x451: @ StopDialog(Stack[-4])
0x452: Pop(0)
0x453: @@ GetReturnValue(Stack[-2])
0x454: Pop(0)
0x455: Stack[-10] = Stack[-2]
0x456: Return(); Pop(8)

0x457: Stack[-4] = 0
0x458: PushEmpty()
0x459: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x45a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x45b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x45c: Push((int) 1)
0x45d: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x45e: PushEmpty(string)
0x45f: Stack[-1] = "Fear"
0x460: Call2 0x49c

0x461: Pop(1)
0x462: Push((int) 521514)
0x463: @@ SetMessage(Stack[-1])
0x464: Pop(1)
0x465: @@ ClearReplies()
0x466: Pop(0)
0x467: PushEmpty(bool, object)
0x468: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x469: Call2 0xa43

0x46a: Pop(1)
0x46b: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x46c: Push((int) 521515)
0x46d: Push((int) 22677)
0x46e: Push((int) 22676)
0x46f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x470: Pop(3)
0x471: Push((int) 521518)
0x472: Push((int) -1)
0x473: Push((int) 22679)
0x474: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x475: Pop(3)
0x476: Push((int) 523976)
0x477: Push((int) -1)
0x478: Push((int) 25264)
0x479: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47a: Pop(3)
0x47b: GOTO 0x47e

0x47c: Return(); Pop(0)

0x47d: GOTO 0x45c

0x47e: PushEmpty(bool)
0x47f: Call2 0xa12

0x480: Pop(0)
0x481: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x482: @ lshWaitForAnimEnd()
0x483: Pop(0)
0x484: Push( Stack[3 + Tasks[-1].StackPointer] )
0x485: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x486: GOTO 0x48c

0x487: PushEmpty(string)
0x488: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x489: Call2 0x994

0x48a: Pop(1)
0x48b: GOTO 0x482

0x48c: GOTO 0x49b

0x48d: Push("all")
0x48e: Push("idle")
0x48f: @ PlayAnimation(Stack[-2], Stack[-1])
0x490: Pop(2)
0x491: @ WaitForAnimEnd()
0x492: Pop(0)
0x493: Push( Stack[3 + Tasks[-1].StackPointer] )
0x494: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x495: GOTO 0x49b

0x496: Push("all")
0x497: Push("idle")
0x498: @ PlayAnimation(Stack[-2], Stack[-1])
0x499: Pop(2)
0x49a: GOTO 0x491

0x49b: Return(); Pop(0)

0x49c: PushEmpty()
0x49d: PushEmpty(bool)
0x49e: Call2 0xa12

0x49f: Pop(0)
0x4a0: Pop(1); Push((bool) Stack[-1] == 0)
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x4a2: Return(); Pop(0)

0x4a3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a5: Return(); Pop(0)

0x4a6: PushEmpty(string, bool)
0x4a7: Stack[-2] = Stack[-3]
0x4a8: Push("")
0x4a9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4aa: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4ab: Stack[-1] = (bool) 0
0x4ac: GOTO 0x4ae

0x4ad: Stack[-1] = (bool) 1
0x4ae: Call2 0x9a4

0x4af: Pop(2)
0x4b0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4b1: Return(); Pop(0)

0x4b2: PushEmpty()
0x4b3: Push((int) 1)
0x4b4: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x4b5: PushEmpty()
0x4b6: Call2 0x9c2

0x4b7: Pop(0)
0x4b8: Push((int) 22678)
0x4b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4bb: PushEmpty(object, object)
0x4bc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4bd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4be: Call2 0xa26

0x4bf: Pop(2)
0x4c0: Push((int) 22675)
0x4c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c2: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4c3: PushEmpty(string)
0x4c4: Stack[-1] = "Fear"
0x4c5: Call2 0x49c

0x4c6: Pop(1)
0x4c7: Push((int) 521514)
0x4c8: @@ SetMessage(Stack[-1])
0x4c9: Pop(1)
0x4ca: @@ ClearReplies()
0x4cb: Pop(0)
0x4cc: PushEmpty(bool, object)
0x4cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ce: Call2 0xa43

0x4cf: Pop(1)
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d1: Push((int) 521515)
0x4d2: Push((int) 22677)
0x4d3: Push((int) 22676)
0x4d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d5: Pop(3)
0x4d6: Push((int) 521518)
0x4d7: Push((int) -1)
0x4d8: Push((int) 22679)
0x4d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4da: Pop(3)
0x4db: Push((int) 523976)
0x4dc: Push((int) -1)
0x4dd: Push((int) 25264)
0x4de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4df: Pop(3)
0x4e0: Return(); Pop(0)

0x4e1: Push((int) 22677)
0x4e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e3: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4e4: PushEmpty(string)
0x4e5: Stack[-1] = "Fear"
0x4e6: Call2 0x49c

0x4e7: Pop(1)
0x4e8: Push((int) 521516)
0x4e9: @@ SetMessage(Stack[-1])
0x4ea: Pop(1)
0x4eb: @@ ClearReplies()
0x4ec: Pop(0)
0x4ed: Push((int) 523977)
0x4ee: Push((int) 25266)
0x4ef: Push((int) 25265)
0x4f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f1: Pop(3)
0x4f2: Return(); Pop(0)

0x4f3: Push((int) 25270)
0x4f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f5: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f6: Push((int) 25266)
0x4f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f8: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x4f9: PushEmpty(string)
0x4fa: Stack[-1] = "Penetrating"
0x4fb: Call2 0x49c

0x4fc: Pop(1)
0x4fd: Push((int) 523978)
0x4fe: @@ SetMessage(Stack[-1])
0x4ff: Pop(1)
0x500: @@ ClearReplies()
0x501: Pop(0)
0x502: Push((int) 523979)
0x503: Push((int) 25268)
0x504: Push((int) 25267)
0x505: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x506: Pop(3)
0x507: Return(); Pop(0)

0x508: Push((int) 25268)
0x509: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50a: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x50b: PushEmpty(string)
0x50c: Stack[-1] = "Penetrating"
0x50d: Call2 0x49c

0x50e: Pop(1)
0x50f: Push((int) 523980)
0x510: @@ SetMessage(Stack[-1])
0x511: Pop(1)
0x512: @@ ClearReplies()
0x513: Pop(0)
0x514: Push((int) 523984)
0x515: Push((int) 25274)
0x516: Push((int) 25273)
0x517: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x518: Pop(3)
0x519: Return(); Pop(0)

0x51a: Push((int) 25274)
0x51b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51c: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x51d: PushEmpty(string)
0x51e: Stack[-1] = "Grin"
0x51f: Call2 0x49c

0x520: Pop(1)
0x521: Push((int) 523985)
0x522: @@ SetMessage(Stack[-1])
0x523: Pop(1)
0x524: @@ ClearReplies()
0x525: Pop(0)
0x526: Push((int) 523986)
0x527: Push((int) 25276)
0x528: Push((int) 25275)
0x529: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52a: Pop(3)
0x52b: Push((int) 523988)
0x52c: Push((int) 25276)
0x52d: Push((int) 25277)
0x52e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52f: Pop(3)
0x530: Return(); Pop(0)

0x531: Push((int) 25276)
0x532: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x533: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x534: PushEmpty(string)
0x535: Stack[-1] = "Grin"
0x536: Call2 0x49c

0x537: Pop(1)
0x538: Push((int) 523987)
0x539: @@ SetMessage(Stack[-1])
0x53a: Pop(1)
0x53b: @@ ClearReplies()
0x53c: Pop(0)
0x53d: Push((int) 521517)
0x53e: Push((int) -1)
0x53f: Push((int) 22678)
0x540: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x541: Pop(3)
0x542: Return(); Pop(0)

0x543: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x544: PushEmpty(bool)
0x545: Call2 0xa12

0x546: Pop(0)
0x547: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x548: @ lshStopAnimation()
0x549: Pop(0)
0x54a: GOTO 0x54d

0x54b: @ StopAnimation()
0x54c: Pop(0)
0x54d: Return(); Pop(0)

0x54e: GOTO 0x4b3

0x54f: Return(); Pop(0)

0x550: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x551: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x552: PushEmpty(bool, object, float)
0x553: Stack[-2] = Stack[-12]
0x554: Stack[-1] = (float) 70.0
0x555: Call2 0x8b5

0x556: Pop(2)
0x557: Pop(1); Push((bool) Stack[-1] == 0)
0x558: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x559: Stack[-10] = (int) -2
0x55a: Return(); Pop(8)

0x55b: @ CreateDialog(Stack[-4])
0x55c: Pop(0)
0x55d: PushEmpty(int)
0x55e: Call2 0xa0c

0x55f: Pop(0)
0x560: @@ SetNPCName(Stack[-1])
0x561: Pop(1)
0x562: PushEmpty(int)
0x563: Call2 0xa0a

0x564: Pop(0)
0x565: @@ SetNPCDescription(Stack[-1])
0x566: Pop(1)
0x567: PushEmpty(string)
0x568: Call2 0xa0e

0x569: Pop(0)
0x56a: @@ SetPhoto(Stack[-1])
0x56b: Pop(1)
0x56c: PushEmpty(string)
0x56d: Call2 0xa10

0x56e: Pop(0)
0x56f: @@ SetPhoto2(Stack[-1])
0x570: Pop(1)
0x571: PushEmpty(int)
0x572: Call2 0xade

0x573: Pop(0)
0x574: @@ SetPlayerName(Stack[-1])
0x575: Pop(1)
0x576: Stack[-2] = (int) -1
0x577: @ IsOverrideActive(Stack[-3])
0x578: Pop(0)
0x579: Push(Stack[-3])
0x57a: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x57b: Stack[-10] = (int) -2
0x57c: Return(); Pop(8)

0x57d: @ DoDialog(Stack[-4])
0x57e: Pop(0)
0x57f: PushEmpty(bool, object)
0x580: PushEmpty(object)
0x581: Call2 0x9c9

0x582: Stack[-2] = Stack[-1]
0x583: Pop(1)
0x584: Call2 0x90a

0x585: Pop(2)
0x586: PushEmpty(object, object)
0x587: Stack[-2] = Stack[-11]
0x588: Stack[-1] = Stack[-6]
0x589: Push(-2, 4); TaskCall(9)
0x58a: Call2 0x5a1

0x58b: Pop(-2, 4); TaskReturn
0x58c: Pop(2)
0x58d: @@ IsDialogEnd(Stack[-1])
0x58e: Pop(0)
0x58f: Pop(0); Push((bool) Stack[-1] == 0)
0x590: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x591: @ sync()
0x592: Pop(0)
0x593: @@ IsDialogEnd(Stack[-1])
0x594: Pop(0)
0x595: GOTO 0x58f

0x596: PushEmpty(object)
0x597: Stack[-1] = Stack[-10]
0x598: Call2 0x8f9

0x599: Pop(1)
0x59a: @ StopDialog(Stack[-4])
0x59b: Pop(0)
0x59c: @@ GetReturnValue(Stack[-2])
0x59d: Pop(0)
0x59e: Stack[-10] = Stack[-2]
0x59f: Return(); Pop(8)

0x5a0: Stack[-4] = 0
0x5a1: PushEmpty()
0x5a2: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5a3: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5a4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5a5: Push((int) 1)
0x5a6: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5a7: PushEmpty(string)
0x5a8: Stack[-1] = "Neutral"
0x5a9: Call2 0x5ea

0x5aa: Pop(1)
0x5ab: Push((int) 521930)
0x5ac: @@ SetMessage(Stack[-1])
0x5ad: Pop(1)
0x5ae: @@ ClearReplies()
0x5af: Pop(0)
0x5b0: PushEmpty(bool)
0x5b1: Stack[-1] = (bool) 0
0x5b2: PushEmpty(bool, object)
0x5b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b4: Call2 0xa4f

0x5b5: Pop(1)
0x5b6: IF (Stack[-1] == 0) GOTO 0x5be; Pop(1)

0x5b7: PushEmpty(bool, object)
0x5b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b9: Call2 0xa5b

0x5ba: Pop(1)
0x5bb: Pop(1); Push((bool) Stack[-1] == 0)
0x5bc: IF (Stack[-1] == 0) GOTO 0x5be; Pop(1)

0x5bd: Stack[-1] = (bool) 1
0x5be: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5bf: Push((int) 521931)
0x5c0: Push((int) 23673)
0x5c1: Push((int) 23105)
0x5c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c3: Pop(3)
0x5c4: Push((int) 521932)
0x5c5: Push((int) -1)
0x5c6: Push((int) 23106)
0x5c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c8: Pop(3)
0x5c9: GOTO 0x5cc

0x5ca: Return(); Pop(0)

0x5cb: GOTO 0x5a5

0x5cc: PushEmpty(bool)
0x5cd: Call2 0xa12

0x5ce: Pop(0)
0x5cf: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5d0: @ lshWaitForAnimEnd()
0x5d1: Pop(0)
0x5d2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5d3: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d4: GOTO 0x5da

0x5d5: PushEmpty(string)
0x5d6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5d7: Call2 0x994

0x5d8: Pop(1)
0x5d9: GOTO 0x5d0

0x5da: GOTO 0x5e9

0x5db: Push("all")
0x5dc: Push("idle")
0x5dd: @ PlayAnimation(Stack[-2], Stack[-1])
0x5de: Pop(2)
0x5df: @ WaitForAnimEnd()
0x5e0: Pop(0)
0x5e1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5e2: IF (Stack[-1] == 0) GOTO 0x5e4; Pop(1)

0x5e3: GOTO 0x5e9

0x5e4: Push("all")
0x5e5: Push("idle")
0x5e6: @ PlayAnimation(Stack[-2], Stack[-1])
0x5e7: Pop(2)
0x5e8: GOTO 0x5df

0x5e9: Return(); Pop(0)

0x5ea: PushEmpty()
0x5eb: PushEmpty(bool)
0x5ec: Call2 0xa12

0x5ed: Pop(0)
0x5ee: Pop(1); Push((bool) Stack[-1] == 0)
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5f0: Return(); Pop(0)

0x5f1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5f2: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5f3: Return(); Pop(0)

0x5f4: PushEmpty(string, bool)
0x5f5: Stack[-2] = Stack[-3]
0x5f6: Push("")
0x5f7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5f8: IF (Stack[-1] == 0) GOTO 0x5fb; Pop(1)

0x5f9: Stack[-1] = (bool) 0
0x5fa: GOTO 0x5fc

0x5fb: Stack[-1] = (bool) 1
0x5fc: Call2 0x9a4

0x5fd: Pop(2)
0x5fe: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5ff: Return(); Pop(0)

0x600: PushEmpty()
0x601: Push((int) 1)
0x602: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x603: PushEmpty()
0x604: Call2 0x9c2

0x605: Pop(0)
0x606: Push((int) 23108)
0x607: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x608: IF (Stack[-1] == 0) GOTO 0x60e; Pop(1)

0x609: PushEmpty(object, object)
0x60a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x60b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x60c: Call2 0xa3d

0x60d: Pop(2)
0x60e: Push((int) 23687)
0x60f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x610: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x611: PushEmpty(object, object)
0x612: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x613: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x614: Call2 0xa3d

0x615: Pop(2)
0x616: Push((int) 23104)
0x617: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x618: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x619: PushEmpty(string)
0x61a: Stack[-1] = "Neutral"
0x61b: Call2 0x5ea

0x61c: Pop(1)
0x61d: Push((int) 521930)
0x61e: @@ SetMessage(Stack[-1])
0x61f: Pop(1)
0x620: @@ ClearReplies()
0x621: Pop(0)
0x622: PushEmpty(bool)
0x623: Stack[-1] = (bool) 0
0x624: PushEmpty(bool, object)
0x625: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x626: Call2 0xa4f

0x627: Pop(1)
0x628: IF (Stack[-1] == 0) GOTO 0x630; Pop(1)

0x629: PushEmpty(bool, object)
0x62a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62b: Call2 0xa5b

0x62c: Pop(1)
0x62d: Pop(1); Push((bool) Stack[-1] == 0)
0x62e: IF (Stack[-1] == 0) GOTO 0x630; Pop(1)

0x62f: Stack[-1] = (bool) 1
0x630: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x631: Push((int) 521931)
0x632: Push((int) 23673)
0x633: Push((int) 23105)
0x634: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x635: Pop(3)
0x636: Push((int) 521932)
0x637: Push((int) -1)
0x638: Push((int) 23106)
0x639: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63a: Pop(3)
0x63b: Return(); Pop(0)

0x63c: Push((int) 23673)
0x63d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x63e: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x63f: PushEmpty(string)
0x640: Stack[-1] = "Penetrating"
0x641: Call2 0x5ea

0x642: Pop(1)
0x643: Push((int) 522498)
0x644: @@ SetMessage(Stack[-1])
0x645: Pop(1)
0x646: @@ ClearReplies()
0x647: Pop(0)
0x648: Push((int) 522501)
0x649: Push((int) 23677)
0x64a: Push((int) 23676)
0x64b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64c: Pop(3)
0x64d: Return(); Pop(0)

0x64e: Push((int) 23675)
0x64f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x650: IF (Stack[-1] == 0) GOTO 0x651; Pop(1)

0x651: Push((int) 23679)
0x652: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x653: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x654: PushEmpty(string)
0x655: Stack[-1] = "Penetrating"
0x656: Call2 0x5ea

0x657: Pop(1)
0x658: Push((int) 522504)
0x659: @@ SetMessage(Stack[-1])
0x65a: Pop(1)
0x65b: @@ ClearReplies()
0x65c: Pop(0)
0x65d: Push((int) 522505)
0x65e: Push((int) 23677)
0x65f: Push((int) 23680)
0x660: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x661: Pop(3)
0x662: Return(); Pop(0)

0x663: Push((int) 23677)
0x664: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x665: IF (Stack[-1] == 0) GOTO 0x67a; Pop(1)

0x666: PushEmpty(string)
0x667: Stack[-1] = "Penetrating"
0x668: Call2 0x5ea

0x669: Pop(1)
0x66a: Push((int) 522502)
0x66b: @@ SetMessage(Stack[-1])
0x66c: Pop(1)
0x66d: @@ ClearReplies()
0x66e: Pop(0)
0x66f: Push((int) 522503)
0x670: Push((int) 23683)
0x671: Push((int) 23678)
0x672: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x673: Pop(3)
0x674: Push((int) 531516)
0x675: Push((int) 32868)
0x676: Push((int) 32871)
0x677: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x678: Pop(3)
0x679: Return(); Pop(0)

0x67a: Push((int) 23683)
0x67b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x67c: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x67d: PushEmpty(string)
0x67e: Stack[-1] = "Grin"
0x67f: Call2 0x5ea

0x680: Pop(1)
0x681: Push((int) 522507)
0x682: @@ SetMessage(Stack[-1])
0x683: Pop(1)
0x684: @@ ClearReplies()
0x685: Pop(0)
0x686: Push((int) 522508)
0x687: Push((int) 23685)
0x688: Push((int) 23684)
0x689: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68a: Pop(3)
0x68b: Push((int) 531513)
0x68c: Push((int) 32868)
0x68d: Push((int) 32867)
0x68e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68f: Pop(3)
0x690: Return(); Pop(0)

0x691: Push((int) 32868)
0x692: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x693: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x694: PushEmpty(string)
0x695: Stack[-1] = "Grin"
0x696: Call2 0x5ea

0x697: Pop(1)
0x698: Push((int) 531514)
0x699: @@ SetMessage(Stack[-1])
0x69a: Pop(1)
0x69b: @@ ClearReplies()
0x69c: Pop(0)
0x69d: Push((int) 531515)
0x69e: Push((int) 23685)
0x69f: Push((int) 32869)
0x6a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a1: Pop(3)
0x6a2: Return(); Pop(0)

0x6a3: Push((int) 23685)
0x6a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a5: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6a6: PushEmpty(string)
0x6a7: Stack[-1] = "Grin"
0x6a8: Call2 0x5ea

0x6a9: Pop(1)
0x6aa: Push((int) 522509)
0x6ab: @@ SetMessage(Stack[-1])
0x6ac: Pop(1)
0x6ad: @@ ClearReplies()
0x6ae: Pop(0)
0x6af: Push((int) 521934)
0x6b0: Push((int) -1)
0x6b1: Push((int) 23108)
0x6b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b3: Pop(3)
0x6b4: Push((int) 522511)
0x6b5: Push((int) -1)
0x6b6: Push((int) 23687)
0x6b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b8: Pop(3)
0x6b9: Return(); Pop(0)

0x6ba: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6bb: PushEmpty(bool)
0x6bc: Call2 0xa12

0x6bd: Pop(0)
0x6be: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6bf: @ lshStopAnimation()
0x6c0: Pop(0)
0x6c1: GOTO 0x6c4

0x6c2: @ StopAnimation()
0x6c3: Pop(0)
0x6c4: Return(); Pop(0)

0x6c5: GOTO 0x601

0x6c6: Return(); Pop(0)

0x6c7: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6c8: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6c9: PushEmpty(bool, object, float)
0x6ca: Stack[-2] = Stack[-12]
0x6cb: Stack[-1] = (float) 70.0
0x6cc: Call2 0x8b5

0x6cd: Pop(2)
0x6ce: Pop(1); Push((bool) Stack[-1] == 0)
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6d0: Stack[-10] = (int) -2
0x6d1: Return(); Pop(8)

0x6d2: @ CreateDialog(Stack[-4])
0x6d3: Pop(0)
0x6d4: PushEmpty(int)
0x6d5: Call2 0xa0c

0x6d6: Pop(0)
0x6d7: @@ SetNPCName(Stack[-1])
0x6d8: Pop(1)
0x6d9: PushEmpty(int)
0x6da: Call2 0xa0a

0x6db: Pop(0)
0x6dc: @@ SetNPCDescription(Stack[-1])
0x6dd: Pop(1)
0x6de: PushEmpty(string)
0x6df: Call2 0xa0e

0x6e0: Pop(0)
0x6e1: @@ SetPhoto(Stack[-1])
0x6e2: Pop(1)
0x6e3: PushEmpty(string)
0x6e4: Call2 0xa10

0x6e5: Pop(0)
0x6e6: @@ SetPhoto2(Stack[-1])
0x6e7: Pop(1)
0x6e8: PushEmpty(int)
0x6e9: Call2 0xade

0x6ea: Pop(0)
0x6eb: @@ SetPlayerName(Stack[-1])
0x6ec: Pop(1)
0x6ed: Stack[-2] = (int) -1
0x6ee: @ IsOverrideActive(Stack[-3])
0x6ef: Pop(0)
0x6f0: Push(Stack[-3])
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f2: Stack[-10] = (int) -2
0x6f3: Return(); Pop(8)

0x6f4: @ DoDialog(Stack[-4])
0x6f5: Pop(0)
0x6f6: PushEmpty(bool, object)
0x6f7: PushEmpty(object)
0x6f8: Call2 0x9c9

0x6f9: Stack[-2] = Stack[-1]
0x6fa: Pop(1)
0x6fb: Call2 0x90a

0x6fc: Pop(2)
0x6fd: PushEmpty(object, object)
0x6fe: Stack[-2] = Stack[-11]
0x6ff: Stack[-1] = Stack[-6]
0x700: Push(-2, 4); TaskCall(11)
0x701: Call2 0x718

0x702: Pop(-2, 4); TaskReturn
0x703: Pop(2)
0x704: @@ IsDialogEnd(Stack[-1])
0x705: Pop(0)
0x706: Pop(0); Push((bool) Stack[-1] == 0)
0x707: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x708: @ sync()
0x709: Pop(0)
0x70a: @@ IsDialogEnd(Stack[-1])
0x70b: Pop(0)
0x70c: GOTO 0x706

0x70d: PushEmpty(object)
0x70e: Stack[-1] = Stack[-10]
0x70f: Call2 0x8f9

0x710: Pop(1)
0x711: @ StopDialog(Stack[-4])
0x712: Pop(0)
0x713: @@ GetReturnValue(Stack[-2])
0x714: Pop(0)
0x715: Stack[-10] = Stack[-2]
0x716: Return(); Pop(8)

0x717: Stack[-4] = 0
0x718: PushEmpty()
0x719: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x71a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x71b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x71c: Push((int) 1)
0x71d: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x71e: PushEmpty(string)
0x71f: Stack[-1] = "Neutral"
0x720: Call2 0x752

0x721: Pop(1)
0x722: Push((int) 540551)
0x723: @@ SetMessage(Stack[-1])
0x724: Pop(1)
0x725: @@ ClearReplies()
0x726: Pop(0)
0x727: Push((int) 540552)
0x728: Push((int) -1)
0x729: Push((int) 42561)
0x72a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72b: Pop(3)
0x72c: Push((int) 540795)
0x72d: Push((int) -1)
0x72e: Push((int) 42844)
0x72f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x730: Pop(3)
0x731: GOTO 0x734

0x732: Return(); Pop(0)

0x733: GOTO 0x71c

0x734: PushEmpty(bool)
0x735: Call2 0xa12

0x736: Pop(0)
0x737: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x738: @ lshWaitForAnimEnd()
0x739: Pop(0)
0x73a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x73b: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x73c: GOTO 0x742

0x73d: PushEmpty(string)
0x73e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x73f: Call2 0x994

0x740: Pop(1)
0x741: GOTO 0x738

0x742: GOTO 0x751

0x743: Push("all")
0x744: Push("idle")
0x745: @ PlayAnimation(Stack[-2], Stack[-1])
0x746: Pop(2)
0x747: @ WaitForAnimEnd()
0x748: Pop(0)
0x749: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74a: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x74b: GOTO 0x751

0x74c: Push("all")
0x74d: Push("idle")
0x74e: @ PlayAnimation(Stack[-2], Stack[-1])
0x74f: Pop(2)
0x750: GOTO 0x747

0x751: Return(); Pop(0)

0x752: PushEmpty()
0x753: PushEmpty(bool)
0x754: Call2 0xa12

0x755: Pop(0)
0x756: Pop(1); Push((bool) Stack[-1] == 0)
0x757: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x758: Return(); Pop(0)

0x759: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x75a: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x75b: Return(); Pop(0)

0x75c: PushEmpty(string, bool)
0x75d: Stack[-2] = Stack[-3]
0x75e: Push("")
0x75f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x760: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x761: Stack[-1] = (bool) 0
0x762: GOTO 0x764

0x763: Stack[-1] = (bool) 1
0x764: Call2 0x9a4

0x765: Pop(2)
0x766: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x767: Return(); Pop(0)

0x768: PushEmpty()
0x769: Push((int) 1)
0x76a: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x76b: PushEmpty()
0x76c: Call2 0x9c2

0x76d: Pop(0)
0x76e: Push((int) 42560)
0x76f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x770: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x771: PushEmpty(string)
0x772: Stack[-1] = "Neutral"
0x773: Call2 0x752

0x774: Pop(1)
0x775: Push((int) 540551)
0x776: @@ SetMessage(Stack[-1])
0x777: Pop(1)
0x778: @@ ClearReplies()
0x779: Pop(0)
0x77a: Push((int) 540552)
0x77b: Push((int) -1)
0x77c: Push((int) 42561)
0x77d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77e: Pop(3)
0x77f: Push((int) 540795)
0x780: Push((int) -1)
0x781: Push((int) 42844)
0x782: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x783: Pop(3)
0x784: Return(); Pop(0)

0x785: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x786: PushEmpty(bool)
0x787: Call2 0xa12

0x788: Pop(0)
0x789: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x78a: @ lshStopAnimation()
0x78b: Pop(0)
0x78c: GOTO 0x78f

0x78d: @ StopAnimation()
0x78e: Pop(0)
0x78f: Return(); Pop(0)

0x790: GOTO 0x769

0x791: Return(); Pop(0)

0x792: Push(GlobalVars[1])
0x793: Stack[-1] = (bool) 0
0x794: GlobalVars[1] = Stack[-1]; Pop(1)
0x795: PushEmpty()
0x796: Call2 0x799

0x797: Pop(0)
0x798: Return(); Pop(0)

0x799: PushEmpty(bool)
0x79a: Call2 0x8b0

0x79b: Pop(0)
0x79c: Pop(1); Push((bool) Stack[-1] == 0)
0x79d: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x79e: @ Hold()
0x79f: Pop(0)
0x7a0: @ GetDirection(Stack[-0])
0x7a1: Pop(0)
0x7a2: PushEmpty()
0x7a3: Call2 0x849

0x7a4: Pop(0)
0x7a5: GOTO 0x7a2

0x7a6: Return(); Pop(0)

0x7a7: PushEmpty(object, object)
0x7a8: Push("player")
0x7a9: @ FindActor(Stack[-2], Stack[-1])
0x7aa: Pop(1)
0x7ab: Pop(0); Push((bool) Stack[-1] == 0)
0x7ac: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x7ad: Stack[-3] = (bool) 0
0x7ae: Return(); Pop(2)

0x7af: PushEmpty(bool, object)
0x7b0: Stack[-1] = Stack[-3]
0x7b1: Call2 0x8a7

0x7b2: Stack[-5] = Stack[-2]
0x7b3: Pop(2)
0x7b4: Return(); Pop(2)

0x7b5: Stack[-1] = 0
0x7b6: Push(CvectorIndex(Stack[-0], 0))
0x7b7: Push(CvectorIndex(Stack[-0], 2))
0x7b8: @ RotateAsync(Stack[-2], Stack[-1])
0x7b9: Pop(2)
0x7ba: Return(); Pop(0)

0x7bb: PushEmpty(object, bool, object, bool)
0x7bc: Push("player")
0x7bd: @ FindActor(Stack[-3], Stack[-1])
0x7be: Pop(1)
0x7bf: Pop(0); Push((bool) Stack[-2] == 0)
0x7c0: IF (Stack[-1] == 0) GOTO 0x7c3; Pop(1)

0x7c1: Stack[-5] = (bool) 0
0x7c2: Return(); Pop(4)

0x7c3: PushEmpty(float, object)
0x7c4: Stack[-1] = Stack[-4]
0x7c5: Call2 0x895

0x7c6: Pop(1)
0x7c7: Push((float)90000.0)
0x7c8: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x7c9: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7ca: Stack[-5] = (bool) 0
0x7cb: Return(); Pop(4)

0x7cc: @ CanSee(Stack[-1], Stack[-2])
0x7cd: Pop(0)
0x7ce: Stack[-5] = Stack[-1]
0x7cf: Return(); Pop(4)

0x7d0: Stack[-2] = 0
0x7d1: PushEmpty(float, float)
0x7d2: Push((int) 8)
0x7d3: Push((int) 16)
0x7d4: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x7d5: Pop(2)
0x7d6: Push((int) 10)
0x7d7: @ SetTimer(Stack[-1], Stack[-2])
0x7d8: Pop(1)
0x7d9: Return(); Pop(2)

0x7da: Push((int) 10)
0x7db: @ KillTimer(Stack[-1])
0x7dc: Pop(1)
0x7dd: Return(); Pop(0)

0x7de: PushEmpty()
0x7df: Push((int) 10)
0x7e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7e1: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x7e2: PushEmpty()
0x7e3: Call2 0x7da

0x7e4: Pop(0)
0x7e5: PushEmpty(bool)
0x7e6: Stack[-1] = (bool) 0
0x7e7: PushEmpty(bool)
0x7e8: Call2 0x8b0

0x7e9: Pop(0)
0x7ea: IF (Stack[-1] == 0) GOTO 0x7f0; Pop(1)

0x7eb: PushEmpty(bool)
0x7ec: Call2 0x7bb

0x7ed: Pop(0)
0x7ee: IF (Stack[-1] == 0) GOTO 0x7f0; Pop(1)

0x7ef: Stack[-1] = (bool) 1
0x7f0: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7f1: PushEmpty(bool)
0x7f2: Call2 0x7a7

0x7f3: Pop(0)
0x7f4: IF (Stack[-1] == 0) GOTO 0x7fc; Pop(1)

0x7f5: PushEmpty(bool, object)
0x7f6: PushEmpty(object)
0x7f7: Call2 0x9c9

0x7f8: Stack[-2] = Stack[-1]
0x7f9: Pop(1)
0x7fa: Call2 0x944

0x7fb: Pop(2)
0x7fc: GOTO 0x803

0x7fd: PushEmpty()
0x7fe: Call2 0x7b6

0x7ff: Pop(0)
0x800: PushEmpty()
0x801: Call2 0x7d1

0x802: Pop(0)
0x803: Return(); Pop(0)

0x804: PushEmpty()
0x805: Call2 0x890

0x806: Pop(0)
0x807: PushEmpty()
0x808: Call2 0x7da

0x809: Pop(0)
0x80a: @ lshStopSpeech()
0x80b: Pop(0)
0x80c: @ lshStopAnimation()
0x80d: Pop(0)
0x80e: @ StopAsync()
0x80f: Pop(0)
0x810: @ Hold()
0x811: Pop(0)
0x812: Return(); Pop(0)

0x813: @ StopGroup0()
0x814: Pop(0)
0x815: PushEmpty()
0x816: Call2 0x7da

0x817: Pop(0)
0x818: PushEmpty(string)
0x819: Stack[-1] = "Neutral"
0x81a: Call2 0x994

0x81b: Pop(1)
0x81c: PushEmpty()
0x81d: Call2 0x7d1

0x81e: Pop(0)
0x81f: Return(); Pop(0)

0x820: PushEmpty()
0x821: Push(Stack[-1])
0x822: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x823: PushEmpty()
0x824: Call2 0x7d1

0x825: Pop(0)
0x826: GOTO 0x82b

0x827: PushEmpty(string)
0x828: Stack[-1] = "Neutral"
0x829: Call2 0x994

0x82a: Pop(1)
0x82b: Return(); Pop(0)

0x82c: PushEmpty(bool, bool)
0x82d: @ IsOverrideActive(Stack[-1])
0x82e: Pop(0)
0x82f: Pop(0); Push((bool) Stack[-1] == 0)
0x830: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x831: EventDisable(0)
0x832: PushEmpty()
0x833: Call2 0x890

0x834: Pop(0)
0x835: PushEmpty(bool, object)
0x836: Stack[-1] = Stack[-5]
0x837: Call2 0x8a7

0x838: Pop(2)
0x839: EventEnable(0)
0x83a: PushEmpty(object)
0x83b: Stack[-1] = Stack[-4]
0x83c: Call2 0xaef

0x83d: Pop(1)
0x83e: PushEmpty(string)
0x83f: Stack[-1] = "Neutral"
0x840: Call2 0x994

0x841: Pop(1)
0x842: PushEmpty()
0x843: Call2 0x7da

0x844: Pop(0)
0x845: PushEmpty()
0x846: Call2 0x7d1

0x847: Pop(0)
0x848: Return(); Pop(2)

0x849: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x84a: @ WaitForAnimEnd()
0x84b: Pop(0)
0x84c: PushEmpty(bool)
0x84d: Call2 0x8b0

0x84e: Pop(0)
0x84f: Pop(1); Push((bool) Stack[-1] == 0)
0x850: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x851: Return(); Pop(12)

0x852: PushEmpty(int)
0x853: Call2 0x9f9

0x854: Stack[-7] = Stack[-1]
0x855: Pop(1)
0x856: Stack[-5] = (int) 0
0x857: PushEmpty(bool)
0x858: Stack[-1] = (bool) 0
0x859: Push((int) 5)
0x85a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x85b: IF (Stack[-1] == 0) GOTO 0x861; Pop(1)

0x85c: PushEmpty(bool)
0x85d: Call2 0x8b0

0x85e: Pop(0)
0x85f: IF (Stack[-1] == 0) GOTO 0x861; Pop(1)

0x860: Stack[-1] = (bool) 1
0x861: IF (Stack[-1] == 0) GOTO 0x88b; Pop(1)

0x862: Pop(0); Push((bool) Stack[-6] == 0)
0x863: IF (Stack[-1] == 0) GOTO 0x86b; Pop(1)

0x864: Push((int) 3)
0x865: @ Sleep(Stack[-1], Stack[-5])
0x866: Pop(1)
0x867: Pop(0); Push((bool) Stack[-4] == 0)
0x868: IF (Stack[-1] == 0) GOTO 0x86a; Pop(1)

0x869: GOTO 0x88b

0x86a: GOTO 0x880

0x86b: @ irand(Stack[-3], Stack[-6])
0x86c: Pop(0)
0x86d: Push((int) 5)
0x86e: @ irand(Stack[-3], Stack[-1])
0x86f: Pop(1)
0x870: Push((int) 0)
0x871: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x872: IF (Stack[-1] == 0) GOTO 0x874; Pop(1)

0x873: Stack[-3] = (int) 0
0x874: Push("all")
0x875: PushEmpty(string, int)
0x876: Stack[-1] = Stack[-6]
0x877: Call2 0x9f2

0x878: Pop(1)
0x879: @ PlayAnimation(Stack[-2], Stack[-1])
0x87a: Pop(2)
0x87b: @ WaitForAnimEnd(Stack[-1])
0x87c: Pop(0)
0x87d: Pop(0); Push((bool) Stack[-1] == 0)
0x87e: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x87f: GOTO 0x88b

0x880: PushEmpty(bool)
0x881: Call2 0x88e

0x882: Pop(0)
0x883: Pop(1); Push((bool) Stack[-1] == 0)
0x884: IF (Stack[-1] == 0) GOTO 0x886; Pop(1)

0x885: GOTO 0x88b

0x886: @ ResetAAS()
0x887: Pop(0)
0x888: Push((int) 1)
0x889: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x88a: GOTO 0x857

0x88b: @ ResetAAS()
0x88c: Pop(0)
0x88d: Return(); Pop(12)

0x88e: Stack[-1] = (bool) 1
0x88f: Return(); Pop(0)

0x890: @ StopAnimation()
0x891: Pop(0)
0x892: @ StopGroup0()
0x893: Pop(0)
0x894: Return(); Pop(0)

0x895: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x896: @ GetPosition(Stack[-3])
0x897: Pop(0)
0x898: @@ GetPosition(Stack[-2])
0x899: Pop(0)
0x89a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x89b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x89c: Return(); Pop(6)

0x89d: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x89e: @ GetPosition(Stack[-3])
0x89f: Pop(0)
0x8a0: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x8a1: Push(CvectorIndex(Stack[-2], 0))
0x8a2: Push(CvectorIndex(Stack[-3], 2))
0x8a3: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x8a4: Pop(2)
0x8a5: Stack[-8] = Stack[-1]
0x8a6: Return(); Pop(6)

0x8a7: PushEmpty(cvector, cvector)
0x8a8: @@ GetPosition(Stack[-1])
0x8a9: Pop(0)
0x8aa: PushEmpty(bool, cvector)
0x8ab: Stack[-1] = Stack[-3]
0x8ac: Call2 0x89d

0x8ad: Stack[-6] = Stack[-2]
0x8ae: Pop(2)
0x8af: Return(); Pop(2)

0x8b0: PushEmpty(bool, bool)
0x8b1: @ IsLoaded(Stack[-1])
0x8b2: Pop(0)
0x8b3: Stack[-3] = Stack[-1]
0x8b4: Return(); Pop(2)

0x8b5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x8b6: @@ GetPosition(Stack[-8])
0x8b7: Pop(0)
0x8b8: @@ GetEyesHeight(Stack[-9])
0x8b9: Pop(0)
0x8ba: Push(CvectorIndex(Stack[-8], 1))
0x8bb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8bc: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x8bd: @ GetPosition(Stack[-7])
0x8be: Pop(0)
0x8bf: @ GetEyesHeight(Stack[-9])
0x8c0: Pop(0)
0x8c1: Push(CvectorIndex(Stack[-7], 1))
0x8c2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8c3: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x8c4: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x8c5: Push(CvectorIndex(Stack[-6], 1))
0x8c6: Stack[-1] = (int) 0
0x8c7: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x8c8: Pop(0); Push(Stack[-6] | Stack[-6]);
0x8c9: Pop(1); Push(Sqrt(Stack[-1]))
0x8ca: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x8cb: Stack[-5] = -Stack[-6]; Pop(0);
0x8cc: Pop(0); Push(Stack[-6] * Stack[-19]);
0x8cd: PushEmpty(cvector, cvector)
0x8ce: Push(CVector(0.0, 1.0, 0.0))
0x8cf: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x8d0: Call2 0x9cf

0x8d1: Pop(1)
0x8d2: Push((int) 25)
0x8d3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8d4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8d5: Push(CVector(0.0, 10.0, 0.0))
0x8d6: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x8d7: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x8d8: @ IsOverrideActive(Stack[-2])
0x8d9: Pop(0)
0x8da: Push(Stack[-2])
0x8db: IF (Stack[-1] == 0) GOTO 0x8de; Pop(1)

0x8dc: Stack[-21] = (bool) 0
0x8dd: Return(); Pop(18)

0x8de: @ StopWorld()
0x8df: Pop(0)
0x8e0: @ CameraTransit(Stack[-3], Stack[-5])
0x8e1: Pop(0)
0x8e2: Push(CvectorIndex(Stack[-4], 0))
0x8e3: Push(CvectorIndex(Stack[-5], 2))
0x8e4: @ Rotate(Stack[-2], Stack[-1])
0x8e5: Pop(2)
0x8e6: PushEmpty(bool)
0x8e7: Call2 0xa12

0x8e8: Pop(0)
0x8e9: IF (Stack[-1] == 0) GOTO 0x8eb; Pop(1)

0x8ea: GOTO 0x8f3

0x8eb: Push("head")
0x8ec: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x8ed: Pop(1)
0x8ee: Push(Stack[-1])
0x8ef: IF (Stack[-1] == 0) GOTO 0x8f3; Pop(1)

0x8f0: Push("head")
0x8f1: @ LookAsyncCamera(Stack[-1])
0x8f2: Pop(1)
0x8f3: @ CameraWaitForPlayFinish()
0x8f4: Pop(0)
0x8f5: @ ResumeWorld()
0x8f6: Pop(0)
0x8f7: Stack[-21] = (bool) 1
0x8f8: Return(); Pop(18)

0x8f9: PushEmpty(bool, bool)
0x8fa: @ CameraSwitchToNormal()
0x8fb: Pop(0)
0x8fc: PushEmpty(bool)
0x8fd: Call2 0xa12

0x8fe: Pop(0)
0x8ff: IF (Stack[-1] == 0) GOTO 0x901; Pop(1)

0x900: GOTO 0x909

0x901: Push("head")
0x902: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x903: Pop(1)
0x904: Push(Stack[-1])
0x905: IF (Stack[-1] == 0) GOTO 0x909; Pop(1)

0x906: Push("head")
0x907: @ UnlookAsync(Stack[-1])
0x908: Pop(1)
0x909: Return(); Pop(2)

0x90a: PushEmpty(int, int, int, int)
0x90b: Push("voice_common")
0x90c: @ GetVariable(Stack[-1], Stack[-3])
0x90d: Pop(1)
0x90e: Push(Stack[-2])
0x90f: IF (Stack[-1] == 0) GOTO 0x930; Pop(1)

0x910: PushEmpty(bool, object)
0x911: Stack[-1] = Stack[-7]
0x912: Call2 0x944

0x913: Pop(1)
0x914: Pop(1); Push((bool) Stack[-1] == 0)
0x915: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x916: PushEmpty(bool, object)
0x917: Stack[-1] = Stack[-7]
0x918: Call2 0x969

0x919: Pop(1)
0x91a: Pop(1); Push((bool) Stack[-1] == 0)
0x91b: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x91c: Stack[-6] = (bool) 0
0x91d: Return(); Pop(4)

0x91e: Push((int) 2)
0x91f: @ irand(Stack[-2], Stack[-1])
0x920: Pop(1)
0x921: Push(Stack[-1])
0x922: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x923: Push("voice_common")
0x924: Push((int) 1)
0x925: Pop(1); Push(Stack[-4] + Stack[-1]);
0x926: Push((int) 3)
0x927: Pop(2); Push(Stack[-2] % Stack[-1]);
0x928: @ SetVariable(Stack[-2], Stack[-1])
0x929: Pop(2)
0x92a: GOTO 0x92f

0x92b: Push("voice_common")
0x92c: Push((int) 0)
0x92d: @ SetVariable(Stack[-2], Stack[-1])
0x92e: Pop(2)
0x92f: GOTO 0x942

0x930: PushEmpty(bool, object)
0x931: Stack[-1] = Stack[-7]
0x932: Call2 0x969

0x933: Pop(1)
0x934: Pop(1); Push((bool) Stack[-1] == 0)
0x935: IF (Stack[-1] == 0) GOTO 0x93e; Pop(1)

0x936: PushEmpty(bool, object)
0x937: Stack[-1] = Stack[-7]
0x938: Call2 0x944

0x939: Pop(1)
0x93a: Pop(1); Push((bool) Stack[-1] == 0)
0x93b: IF (Stack[-1] == 0) GOTO 0x93e; Pop(1)

0x93c: Stack[-6] = (bool) 0
0x93d: Return(); Pop(4)

0x93e: Push("voice_common")
0x93f: Push((int) 1)
0x940: @ SetVariable(Stack[-2], Stack[-1])
0x941: Pop(2)
0x942: Stack[-6] = (bool) 1
0x943: Return(); Pop(4)

0x944: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x945: Stack[-5] = "c"
0x946: Stack[-4] = (int) 0
0x947: Push((int) 1)
0x948: IF (Stack[-1] == 0) GOTO 0x954; Pop(1)

0x949: Push((int) 1)
0x94a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x94b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x94c: @@ HasProperty(Stack[-1], Stack[-4])
0x94d: Pop(1)
0x94e: Pop(0); Push((bool) Stack[-3] == 0)
0x94f: IF (Stack[-1] == 0) GOTO 0x951; Pop(1)

0x950: GOTO 0x954

0x951: Push((int) 1)
0x952: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x953: GOTO 0x947

0x954: Pop(0); Push((bool) Stack[-4] == 0)
0x955: IF (Stack[-1] == 0) GOTO 0x958; Pop(1)

0x956: Stack[-12] = (bool) 0
0x957: Return(); Pop(10)

0x958: Stack[-2] = (int) 0
0x959: Push((int) 1)
0x95a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x95b: IF (Stack[-1] == 0) GOTO 0x95e; Pop(1)

0x95c: @ irand(Stack[-2], Stack[-4])
0x95d: Pop(0)
0x95e: Push((int) 1)
0x95f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x960: Pop(1); Push(Stack[-6] + Stack[-1]);
0x961: @@ GetProperty(Stack[-1], Stack[-2])
0x962: Pop(1)
0x963: PushEmpty(bool, string)
0x964: Stack[-1] = Stack[-3]
0x965: Call2 0x9b3

0x966: Stack[-14] = Stack[-2]
0x967: Pop(2)
0x968: Return(); Pop(10)

0x969: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x96a: Push("d")
0x96b: PushEmpty(int)
0x96c: Call2 0x9e3

0x96d: Pop(0)
0x96e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x96f: Push("m")
0x970: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x971: Stack[-4] = (int) 0
0x972: Push((int) 1)
0x973: IF (Stack[-1] == 0) GOTO 0x97f; Pop(1)

0x974: Push((int) 1)
0x975: Pop(1); Push(Stack[-5] + Stack[-1]);
0x976: Pop(1); Push(Stack[-6] + Stack[-1]);
0x977: @@ HasProperty(Stack[-1], Stack[-4])
0x978: Pop(1)
0x979: Pop(0); Push((bool) Stack[-3] == 0)
0x97a: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x97b: GOTO 0x97f

0x97c: Push((int) 1)
0x97d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x97e: GOTO 0x972

0x97f: Pop(0); Push((bool) Stack[-4] == 0)
0x980: IF (Stack[-1] == 0) GOTO 0x983; Pop(1)

0x981: Stack[-12] = (bool) 0
0x982: Return(); Pop(10)

0x983: Stack[-2] = (int) 0
0x984: Push((int) 1)
0x985: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x986: IF (Stack[-1] == 0) GOTO 0x989; Pop(1)

0x987: @ irand(Stack[-2], Stack[-4])
0x988: Pop(0)
0x989: Push((int) 1)
0x98a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x98b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x98c: @@ GetProperty(Stack[-1], Stack[-2])
0x98d: Pop(1)
0x98e: PushEmpty(bool, string)
0x98f: Stack[-1] = Stack[-3]
0x990: Call2 0x9b3

0x991: Stack[-14] = Stack[-2]
0x992: Pop(2)
0x993: Return(); Pop(10)

0x994: PushEmpty(bool, float, float, bool, float, float)
0x995: @ lshHasAnimation(Stack[-3], Stack[-7])
0x996: Pop(0)
0x997: Push(Stack[-3])
0x998: IF (Stack[-1] == 0) GOTO 0x99f; Pop(1)

0x999: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x99a: Pop(0)
0x99b: Push((bool) 0)
0x99c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x99d: Pop(1)
0x99e: GOTO 0x9a3

0x99f: Push("Can't find lsh animation : ")
0x9a0: Pop(1); Push(Stack[-1] + Stack[-8]);
0x9a1: @ Trace(Stack[-1])
0x9a2: Pop(1)
0x9a3: Return(); Pop(6)

0x9a4: PushEmpty(bool, float, float, bool, float, float)
0x9a5: @ lshHasAnimation(Stack[-3], Stack[-8])
0x9a6: Pop(0)
0x9a7: Push(Stack[-3])
0x9a8: IF (Stack[-1] == 0) GOTO 0x9ae; Pop(1)

0x9a9: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x9aa: Pop(0)
0x9ab: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x9ac: Pop(0)
0x9ad: GOTO 0x9b2

0x9ae: Push("Can't find lsh animation : ")
0x9af: Pop(1); Push(Stack[-1] + Stack[-9]);
0x9b0: @ Trace(Stack[-1])
0x9b1: Pop(1)
0x9b2: Return(); Pop(6)

0x9b3: PushEmpty(bool, bool)
0x9b4: PushEmpty(bool)
0x9b5: Call2 0xa12

0x9b6: Pop(0)
0x9b7: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9b8: @ lshHasSpeech(Stack[-1], Stack[-3])
0x9b9: Pop(0)
0x9ba: Push(Stack[-1])
0x9bb: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9bc: @ lshPlaySpeech(Stack[-3])
0x9bd: Pop(0)
0x9be: Stack[-4] = (bool) 1
0x9bf: Return(); Pop(2)

0x9c0: Stack[-4] = (bool) 0
0x9c1: Return(); Pop(2)

0x9c2: PushEmpty(bool)
0x9c3: Call2 0xa12

0x9c4: Pop(0)
0x9c5: IF (Stack[-1] == 0) GOTO 0x9c8; Pop(1)

0x9c6: @ lshStopSpeech()
0x9c7: Pop(0)
0x9c8: Return(); Pop(0)

0x9c9: PushEmpty(object, object)
0x9ca: @ self(Stack[-1])
0x9cb: Pop(0)
0x9cc: Stack[-3] = Stack[-1]
0x9cd: Return(); Pop(2)

0x9ce: Stack[-1] = 0
0x9cf: PushEmpty(float, float)
0x9d0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x9d1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x9d2: Push((float)0.0)
0x9d3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x9d4: IF (Stack[-1] == 0) GOTO 0x9d7; Pop(1)

0x9d5: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x9d6: Return(); Pop(2)

0x9d7: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x9d8: Return(); Pop(2)

0x9d9: PushEmpty(int, int)
0x9da: @ GetVariable(Stack[-3], Stack[-1])
0x9db: Pop(0)
0x9dc: Stack[-4] = Stack[-1]
0x9dd: Return(); Pop(2)

0x9de: PushEmpty(float, float)
0x9df: @ GetGameTime(Stack[-1])
0x9e0: Pop(0)
0x9e1: Stack[-3] = Stack[-1]
0x9e2: Return(); Pop(2)

0x9e3: PushEmpty(float, float)
0x9e4: @ GetGameTime(Stack[-1])
0x9e5: Pop(0)
0x9e6: Push((int) 1)
0x9e7: PushEmpty(int)
0x9e8: Push((int) 24)
0x9e9: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x9ea: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x9eb: Return(); Pop(2)

0x9ec: PushEmpty()
0x9ed: PushEmpty(int)
0x9ee: Call2 0x9e3

0x9ef: Pop(0)
0x9f0: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x9f1: Return(); Pop(0)

0x9f2: PushEmpty(string, string)
0x9f3: Stack[-1] = "idle"
0x9f4: Push(Stack[-3])
0x9f5: IF (Stack[-1] == 0) GOTO 0x9f7; Pop(1)

0x9f6: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x9f7: Stack[-4] = Stack[-1]
0x9f8: Return(); Pop(2)

0x9f9: PushEmpty(int, bool, int, bool)
0x9fa: Stack[-2] = (int) 0
0x9fb: Push("all")
0x9fc: PushEmpty(string, int)
0x9fd: Stack[-1] = Stack[-5]
0x9fe: Call2 0x9f2

0x9ff: Pop(1)
0xa00: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa01: Pop(2)
0xa02: Pop(0); Push((bool) Stack[-1] == 0)
0xa03: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0xa04: GOTO 0xa08

0xa05: Push((int) 1)
0xa06: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xa07: GOTO 0x9fb

0xa08: Stack[-5] = Stack[-2]
0xa09: Return(); Pop(4)

0xa0a: Stack[-1] = (int) 515539
0xa0b: Return(); Pop(0)

0xa0c: Stack[-1] = (int) 502864
0xa0d: Return(); Pop(0)

0xa0e: Stack[-1] = "ui/NPC_Katerina.png"
0xa0f: Return(); Pop(0)

0xa10: Stack[-1] = "ui/NPC_Katerina_b.png"
0xa11: Return(); Pop(0)

0xa12: Stack[-1] = (bool) 1
0xa13: Return(); Pop(0)

0xa14: PushEmpty()
0xa15: Push("oob2Katerina1")
0xa16: Push((int) 1)
0xa17: @ SetVariable(Stack[-2], Stack[-1])
0xa18: Pop(2)
0xa19: Return(); Pop(0)

0xa1a: PushEmpty()
0xa1b: Push("oob2Katerina2")
0xa1c: Push((int) 1)
0xa1d: @ SetVariable(Stack[-2], Stack[-1])
0xa1e: Pop(2)
0xa1f: Return(); Pop(0)

0xa20: PushEmpty()
0xa21: Push("oob2Katerina3")
0xa22: Push((int) 1)
0xa23: @ SetVariable(Stack[-2], Stack[-1])
0xa24: Pop(2)
0xa25: Return(); Pop(0)

0xa26: PushEmpty(object, object)
0xa27: Push("b8q03")
0xa28: Push((int) 2)
0xa29: @ SetVariable(Stack[-2], Stack[-1])
0xa2a: Pop(2)
0xa2b: PushEmpty(object)
0xa2c: Call2 0xacd

0xa2d: Stack[-2] = Stack[-1]
0xa2e: Pop(1)
0xa2f: Push("b8q03KaterinaGotoMat")
0xa30: Push("pt_map_mat")
0xa31: Push((int) 0)
0xa32: Push((int) 530664)
0xa33: PushEmpty(float)
0xa34: Call2 0x9de

0xa35: Pop(0)
0xa36: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa37: Pop(5)
0xa38: PushEmpty()
0xa39: Call2 0xa97

0xa3a: Pop(0)
0xa3b: Return(); Pop(2)

0xa3c: Stack[-1] = 0
0xa3d: PushEmpty()
0xa3e: Push("b10q01TalkKaterina")
0xa3f: Push((int) 1)
0xa40: @ SetVariable(Stack[-2], Stack[-1])
0xa41: Pop(2)
0xa42: Return(); Pop(0)

0xa43: PushEmpty()
0xa44: PushEmpty(int, string)
0xa45: Stack[-1] = "b8q03"
0xa46: Call2 0x9d9

0xa47: Pop(1)
0xa48: Push((int) 1)
0xa49: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa4a: IF (Stack[-1] == 0) GOTO 0xa4d; Pop(1)

0xa4b: Stack[-2] = (bool) 1
0xa4c: Return(); Pop(0)

0xa4d: Stack[-2] = (bool) 0
0xa4e: Return(); Pop(0)

0xa4f: PushEmpty()
0xa50: PushEmpty(int, string)
0xa51: Stack[-1] = "b10q01"
0xa52: Call2 0x9d9

0xa53: Pop(1)
0xa54: Push((int) 4)
0xa55: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa56: IF (Stack[-1] == 0) GOTO 0xa59; Pop(1)

0xa57: Stack[-2] = (bool) 1
0xa58: Return(); Pop(0)

0xa59: Stack[-2] = (bool) 0
0xa5a: Return(); Pop(0)

0xa5b: PushEmpty()
0xa5c: PushEmpty(int, string)
0xa5d: Stack[-1] = "b10q01TalkKaterina"
0xa5e: Call2 0x9d9

0xa5f: Pop(1)
0xa60: Push((int) 1)
0xa61: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa62: IF (Stack[-1] == 0) GOTO 0xa65; Pop(1)

0xa63: Stack[-2] = (bool) 1
0xa64: Return(); Pop(0)

0xa65: Stack[-2] = (bool) 0
0xa66: Return(); Pop(0)

0xa67: PushEmpty()
0xa68: PushEmpty(int, string)
0xa69: Stack[-1] = "b2q01"
0xa6a: Call2 0x9d9

0xa6b: Pop(1)
0xa6c: Push((int) 0)
0xa6d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa6e: IF (Stack[-1] == 0) GOTO 0xa71; Pop(1)

0xa6f: Stack[-2] = (bool) 1
0xa70: Return(); Pop(0)

0xa71: Stack[-2] = (bool) 0
0xa72: Return(); Pop(0)

0xa73: PushEmpty()
0xa74: PushEmpty(int, string)
0xa75: Stack[-1] = "oob2Katerina1"
0xa76: Call2 0x9d9

0xa77: Pop(1)
0xa78: Push((int) 0)
0xa79: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa7a: IF (Stack[-1] == 0) GOTO 0xa7d; Pop(1)

0xa7b: Stack[-2] = (bool) 1
0xa7c: Return(); Pop(0)

0xa7d: Stack[-2] = (bool) 0
0xa7e: Return(); Pop(0)

0xa7f: PushEmpty()
0xa80: PushEmpty(int, string)
0xa81: Stack[-1] = "oob2Katerina2"
0xa82: Call2 0x9d9

0xa83: Pop(1)
0xa84: Push((int) 0)
0xa85: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa86: IF (Stack[-1] == 0) GOTO 0xa89; Pop(1)

0xa87: Stack[-2] = (bool) 1
0xa88: Return(); Pop(0)

0xa89: Stack[-2] = (bool) 0
0xa8a: Return(); Pop(0)

0xa8b: PushEmpty()
0xa8c: PushEmpty(int, string)
0xa8d: Stack[-1] = "oob2Katerina3"
0xa8e: Call2 0x9d9

0xa8f: Pop(1)
0xa90: Push((int) 0)
0xa91: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa92: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa93: Stack[-2] = (bool) 1
0xa94: Return(); Pop(0)

0xa95: Stack[-2] = (bool) 0
0xa96: Return(); Pop(0)

0xa97: PushEmpty(object, object)
0xa98: Push((int) 577)
0xa99: Push((int) 2)
0xa9a: Push((int) 530657)
0xa9b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa9c: Pop(3)
0xa9d: PushEmpty(bool, object, int)
0xa9e: Stack[-2] = Stack[-4]
0xa9f: Stack[-1] = (int) 575
0xaa0: Call2 0xab1

0xaa1: Pop(3)
0xaa2: Return(); Pop(2)

0xaa3: Stack[-1] = 0
0xaa4: PushEmpty(object, object)
0xaa5: @ GetDiaryRoot(Stack[-1])
0xaa6: Pop(0)
0xaa7: Pop(0); Push((bool) Stack[-1] == 0)
0xaa8: IF (Stack[-1] == 0) GOTO 0xaae; Pop(1)

0xaa9: Push("Can't retrieve diary root")
0xaaa: @ Trace(Stack[-1])
0xaab: Pop(1)
0xaac: Stack[-3] = (bool) 0
0xaad: Return(); Pop(2)

0xaae: Stack[-3] = Stack[-1]
0xaaf: Return(); Pop(2)

0xab0: Stack[-1] = 0
0xab1: PushEmpty(object, object, int, object, object, int)
0xab2: PushEmpty(object)
0xab3: Call2 0xaa4

0xab4: Stack[-4] = Stack[-1]
0xab5: Pop(1)
0xab6: @@ Find(Stack[-7], Stack[-2])
0xab7: Pop(0)
0xab8: Pop(0); Push((bool) Stack[-2] == 0)
0xab9: IF (Stack[-1] == 0) GOTO 0xac0; Pop(1)

0xaba: Push("Can't find diary parent with id: ")
0xabb: Pop(1); Push(Stack[-1] + Stack[-8]);
0xabc: @ Trace(Stack[-1])
0xabd: Pop(1)
0xabe: Stack[-9] = (bool) 0
0xabf: Return(); Pop(6)

0xac0: @@ AddChild(Stack[-8])
0xac1: Pop(0)
0xac2: Push((int) 7)
0xac3: @ SendWorldWndMessage(Stack[-1])
0xac4: Pop(1)
0xac5: @@ GetCategory(Stack[-1])
0xac6: Pop(0)
0xac7: @ SetDiarySection(Stack[-1])
0xac8: Pop(0)
0xac9: Stack[-9] = (bool) 0
0xaca: Return(); Pop(6)

0xacb: Stack[-2] = 0
0xacc: Stack[-3] = 0
0xacd: PushEmpty(object, object, object, object)
0xace: @ GetMainOutdoorScene(Stack[-2])
0xacf: Pop(0)
0xad0: Pop(0); Push((bool) Stack[-2] == 0)
0xad1: IF (Stack[-1] == 0) GOTO 0xad8; Pop(1)

0xad2: Push("Can't find main outdoor scene")
0xad3: @ Trace(Stack[-1])
0xad4: Pop(1)
0xad5: Stack[-1] = 0
0xad6: Stack[-5] = Stack[-1]
0xad7: Return(); Pop(4)

0xad8: @@ GetMap(Stack[-1])
0xad9: Pop(0)
0xada: Stack[-5] = Stack[-1]
0xadb: Return(); Pop(4)

0xadc: Stack[-1] = 0
0xadd: Stack[-2] = 0
0xade: PushEmpty(int, int)
0xadf: Push("branch")
0xae0: @ GetVariable(Stack[-1], Stack[-2])
0xae1: Pop(1)
0xae2: Push((int) 0)
0xae3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xae4: IF (Stack[-1] == 0) GOTO 0xae8; Pop(1)

0xae5: Stack[-3] = (int) 1
0xae6: Return(); Pop(2)

0xae7: GOTO 0xaed

0xae8: Push((int) 1)
0xae9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaea: IF (Stack[-1] == 0) GOTO 0xaed; Pop(1)

0xaeb: Stack[-3] = (int) 2
0xaec: Return(); Pop(2)

0xaed: Stack[-3] = (int) 3
0xaee: Return(); Pop(2)

0xaef: PushEmpty()
0xaf0: Push(GlobalVars[1])
0xaf1: Pop(1); Push((bool) Stack[-1] == 0)
0xaf2: IF (Stack[-1] == 0) GOTO 0xafc; Pop(1)

0xaf3: PushEmpty(int, object)
0xaf4: Stack[-1] = Stack[-3]
0xaf5: Push(-2, 1); TaskCall(2)
0xaf6: Call2 0x103

0xaf7: Pop(-2, 1); TaskReturn
0xaf8: Pop(2)
0xaf9: Push(GlobalVars[1])
0xafa: Stack[-1] = (bool) 1
0xafb: GlobalVars[1] = Stack[-1]; Pop(1)
0xafc: PushEmpty(bool, int)
0xafd: Stack[-1] = (int) 2
0xafe: Call2 0x9ec

0xaff: Pop(1)
0xb00: IF (Stack[-1] == 0) GOTO 0xb08; Pop(1)

0xb01: PushEmpty(int, object)
0xb02: Stack[-1] = Stack[-3]
0xb03: Push(-2, 1); TaskCall(4)
0xb04: Call2 0x1ce

0xb05: Pop(-2, 1); TaskReturn
0xb06: Pop(2)
0xb07: Return(); Pop(0)

0xb08: PushEmpty(bool, int)
0xb09: Stack[-1] = (int) 8
0xb0a: Call2 0x9ec

0xb0b: Pop(1)
0xb0c: IF (Stack[-1] == 0) GOTO 0xb14; Pop(1)

0xb0d: PushEmpty(int, object)
0xb0e: Stack[-1] = Stack[-3]
0xb0f: Push(-2, 1); TaskCall(6)
0xb10: Call2 0x407

0xb11: Pop(-2, 1); TaskReturn
0xb12: Pop(2)
0xb13: Return(); Pop(0)

0xb14: PushEmpty(bool, int)
0xb15: Stack[-1] = (int) 10
0xb16: Call2 0x9ec

0xb17: Pop(1)
0xb18: IF (Stack[-1] == 0) GOTO 0xb20; Pop(1)

0xb19: PushEmpty(int, object)
0xb1a: Stack[-1] = Stack[-3]
0xb1b: Push(-2, 1); TaskCall(8)
0xb1c: Call2 0x550

0xb1d: Pop(-2, 1); TaskReturn
0xb1e: Pop(2)
0xb1f: Return(); Pop(0)

0xb20: PushEmpty(bool)
0xb21: Stack[-1] = (bool) 0
0xb22: PushEmpty(bool, int)
0xb23: Stack[-1] = (int) 12
0xb24: Call2 0x9ec

0xb25: Pop(1)
0xb26: IF (Stack[-1] == 0) GOTO 0xb2b; Pop(1)

0xb27: Push(GlobalVars[2])
0xb28: Pop(1); Push((bool) Stack[-1] == 0)
0xb29: IF (Stack[-1] == 0) GOTO 0xb2b; Pop(1)

0xb2a: Stack[-1] = (bool) 1
0xb2b: IF (Stack[-1] == 0) GOTO 0xb36; Pop(1)

0xb2c: PushEmpty(int, object)
0xb2d: Stack[-1] = Stack[-3]
0xb2e: Push(-2, 1); TaskCall(0)
0xb2f: Call2 0x0

0xb30: Pop(-2, 1); TaskReturn
0xb31: Pop(2)
0xb32: Push(GlobalVars[2])
0xb33: Stack[-1] = (bool) 1
0xb34: GlobalVars[2] = Stack[-1]; Pop(1)
0xb35: Return(); Pop(0)

0xb36: PushEmpty(int, object)
0xb37: Stack[-1] = Stack[-3]
0xb38: Push(-2, 1); TaskCall(10)
0xb39: Call2 0x6c7

0xb3a: Pop(-2, 1); TaskReturn
0xb3b: Pop(2)
0xb3c: Return(); Pop(0)

