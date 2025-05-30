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
	Fear
	Sympathy
	Confusion
	Tiredness
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
	ui/NPC_Lara.png
	ui/NPC_Lara_b.png
	b4q01
	b4q01LaraGotoRubin
	pt_map_warehouse_gangster
	AddMark
	quest_b4_01
	place_rubin
	b4q01LaraWasBadRep
	oob4Lara1
	oob8Lara1
	ShowMap
	b8q02
	reputation
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x780
RunTask = 12

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a3 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x448 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x58d Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x658 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x756 Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x7cc Vars = (int)
		EVENT_6 Op = 0x7f2 Vars = ()
		EVENT_5 Op = 0x801 Vars = ()
		EVENT_45 Op = 0x80e Vars = (bool)
		EVENT_0 Op = 0x81a Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x8a3

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xa08

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xa06

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xa0a

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xa0c

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xb03

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
0x31: Call2 0x9b9

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x8fa

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
0x48: Call2 0x8e8

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
0x5b: Push((int) 518021)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 518022)
0x61: Push((int) -1)
0x62: Push((int) 19155)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 531564)
0x66: Push((int) -1)
0x67: Push((int) 32923)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0xa0e

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x984

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
0x8d: Call2 0xa0e

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
0x9d: Call2 0x994

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x9b2

0xa6: Pop(0)
0xa7: Push((int) 19154)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 518021)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 518022)
0xb4: Push((int) -1)
0xb5: Push((int) 19155)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 531564)
0xb9: Push((int) -1)
0xba: Push((int) 32923)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xbf: PushEmpty(bool)
0xc0: Call2 0xa0e

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
0xd0: Call2 0x8a3

0xd1: Pop(2)
0xd2: Pop(1); Push((bool) Stack[-1] == 0)
0xd3: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd4: Stack[-10] = (int) -2
0xd5: Return(); Pop(8)

0xd6: @ CreateDialog(Stack[-4])
0xd7: Pop(0)
0xd8: PushEmpty(int)
0xd9: Call2 0xa08

0xda: Pop(0)
0xdb: @@ SetNPCName(Stack[-1])
0xdc: Pop(1)
0xdd: PushEmpty(int)
0xde: Call2 0xa06

0xdf: Pop(0)
0xe0: @@ SetNPCDescription(Stack[-1])
0xe1: Pop(1)
0xe2: PushEmpty(string)
0xe3: Call2 0xa0a

0xe4: Pop(0)
0xe5: @@ SetPhoto(Stack[-1])
0xe6: Pop(1)
0xe7: PushEmpty(string)
0xe8: Call2 0xa0c

0xe9: Pop(0)
0xea: @@ SetPhoto2(Stack[-1])
0xeb: Pop(1)
0xec: PushEmpty(int)
0xed: Call2 0xb03

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
0xfc: Call2 0x9b9

0xfd: Stack[-2] = Stack[-1]
0xfe: Pop(1)
0xff: Call2 0x8fa

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
0x113: Call2 0x8e8

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
0x121: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x122: PushEmpty(bool, object)
0x123: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x124: Call2 0xa66

0x125: Pop(1)
0x126: Pop(1); Push((bool) Stack[-1] == 0)
0x127: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x128: PushEmpty(object, object)
0x129: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12b: Call2 0xa2c

0x12c: Pop(2)
0x12d: PushEmpty(string)
0x12e: Stack[-1] = "Fear"
0x12f: Call2 0x18d

0x130: Pop(1)
0x131: Push((int) 518548)
0x132: @@ SetMessage(Stack[-1])
0x133: Pop(1)
0x134: @@ ClearReplies()
0x135: Pop(0)
0x136: Push((int) 518549)
0x137: Push((int) 20132)
0x138: Push((int) 19659)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Push((int) 519021)
0x13c: Push((int) 20141)
0x13d: Push((int) 20140)
0x13e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f: Pop(3)
0x140: GOTO 0x16f

0x141: PushEmpty(string)
0x142: Stack[-1] = "Sympathy"
0x143: Call2 0x18d

0x144: Pop(1)
0x145: Push((int) 518550)
0x146: @@ SetMessage(Stack[-1])
0x147: Pop(1)
0x148: @@ ClearReplies()
0x149: Pop(0)
0x14a: PushEmpty(bool, object)
0x14b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14c: Call2 0xa70

0x14d: Pop(1)
0x14e: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x14f: Push((int) 518551)
0x150: Push((int) 20163)
0x151: Push((int) 19661)
0x152: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x153: Pop(3)
0x154: PushEmpty(bool)
0x155: Stack[-1] = (bool) 0
0x156: PushEmpty(bool, object)
0x157: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x158: Call2 0xa7c

0x159: Pop(1)
0x15a: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call2 0xa88

0x15e: Pop(1)
0x15f: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x160: Stack[-1] = (bool) 1
0x161: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x162: Push((int) 519028)
0x163: Push((int) 20149)
0x164: Push((int) 20148)
0x165: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x166: Pop(3)
0x167: Push((int) 518554)
0x168: Push((int) -1)
0x169: Push((int) 19664)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: GOTO 0x16f

0x16d: Return(); Pop(0)

0x16e: GOTO 0x120

0x16f: PushEmpty(bool)
0x170: Call2 0xa0e

0x171: Pop(0)
0x172: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x173: @ lshWaitForAnimEnd()
0x174: Pop(0)
0x175: Push( Stack[3 + Tasks[-1].StackPointer] )
0x176: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x177: GOTO 0x17d

0x178: PushEmpty(string)
0x179: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x17a: Call2 0x984

0x17b: Pop(1)
0x17c: GOTO 0x173

0x17d: GOTO 0x18c

0x17e: Push("all")
0x17f: Push("idle")
0x180: @ PlayAnimation(Stack[-2], Stack[-1])
0x181: Pop(2)
0x182: @ WaitForAnimEnd()
0x183: Pop(0)
0x184: Push( Stack[3 + Tasks[-1].StackPointer] )
0x185: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x186: GOTO 0x18c

0x187: Push("all")
0x188: Push("idle")
0x189: @ PlayAnimation(Stack[-2], Stack[-1])
0x18a: Pop(2)
0x18b: GOTO 0x182

0x18c: Return(); Pop(0)

0x18d: PushEmpty()
0x18e: PushEmpty(bool)
0x18f: Call2 0xa0e

0x190: Pop(0)
0x191: Pop(1); Push((bool) Stack[-1] == 0)
0x192: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x193: Return(); Pop(0)

0x194: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x195: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x196: Return(); Pop(0)

0x197: PushEmpty(string, bool)
0x198: Stack[-2] = Stack[-3]
0x199: Push("")
0x19a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19c: Stack[-1] = (bool) 0
0x19d: GOTO 0x19f

0x19e: Stack[-1] = (bool) 1
0x19f: Call2 0x994

0x1a0: Pop(2)
0x1a1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a2: Return(); Pop(0)

0x1a3: PushEmpty()
0x1a4: Push((int) 1)
0x1a5: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x1a6: PushEmpty()
0x1a7: Call2 0x9b2

0x1a8: Pop(0)
0x1a9: Push((int) 19663)
0x1aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1ac: PushEmpty(object, object)
0x1ad: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ae: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1af: Call2 0xa10

0x1b0: Pop(2)
0x1b1: PushEmpty(object, object)
0x1b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b4: Call2 0xa3e

0x1b5: Pop(2)
0x1b6: Push((int) 20148)
0x1b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1b9: PushEmpty(object, object)
0x1ba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bc: Call2 0xa32

0x1bd: Pop(2)
0x1be: Push((int) 19658)
0x1bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1c1: PushEmpty(bool, object)
0x1c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c3: Call2 0xa66

0x1c4: Pop(1)
0x1c5: Pop(1); Push((bool) Stack[-1] == 0)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1c7: PushEmpty(object, object)
0x1c8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ca: Call2 0xa2c

0x1cb: Pop(2)
0x1cc: PushEmpty(string)
0x1cd: Stack[-1] = "Fear"
0x1ce: Call2 0x18d

0x1cf: Pop(1)
0x1d0: Push((int) 518548)
0x1d1: @@ SetMessage(Stack[-1])
0x1d2: Pop(1)
0x1d3: @@ ClearReplies()
0x1d4: Pop(0)
0x1d5: Push((int) 518549)
0x1d6: Push((int) 20132)
0x1d7: Push((int) 19659)
0x1d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d9: Pop(3)
0x1da: Push((int) 519021)
0x1db: Push((int) 20141)
0x1dc: Push((int) 20140)
0x1dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1de: Pop(3)
0x1df: Return(); Pop(0)

0x1e0: PushEmpty(string)
0x1e1: Stack[-1] = "Sympathy"
0x1e2: Call2 0x18d

0x1e3: Pop(1)
0x1e4: Push((int) 518550)
0x1e5: @@ SetMessage(Stack[-1])
0x1e6: Pop(1)
0x1e7: @@ ClearReplies()
0x1e8: Pop(0)
0x1e9: PushEmpty(bool, object)
0x1ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1eb: Call2 0xa70

0x1ec: Pop(1)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1ee: Push((int) 518551)
0x1ef: Push((int) 20163)
0x1f0: Push((int) 19661)
0x1f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f2: Pop(3)
0x1f3: PushEmpty(bool)
0x1f4: Stack[-1] = (bool) 0
0x1f5: PushEmpty(bool, object)
0x1f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f7: Call2 0xa7c

0x1f8: Pop(1)
0x1f9: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fa: PushEmpty(bool, object)
0x1fb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fc: Call2 0xa88

0x1fd: Pop(1)
0x1fe: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ff: Stack[-1] = (bool) 1
0x200: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x201: Push((int) 519028)
0x202: Push((int) 20149)
0x203: Push((int) 20148)
0x204: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x205: Pop(3)
0x206: Push((int) 518554)
0x207: Push((int) -1)
0x208: Push((int) 19664)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: Return(); Pop(0)

0x20c: Push((int) 20149)
0x20d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x20f: PushEmpty(string)
0x210: Stack[-1] = "Confusion"
0x211: Call2 0x18d

0x212: Pop(1)
0x213: Push((int) 519029)
0x214: @@ SetMessage(Stack[-1])
0x215: Pop(1)
0x216: @@ ClearReplies()
0x217: Pop(0)
0x218: Push((int) 519030)
0x219: Push((int) 20152)
0x21a: Push((int) 20150)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: Push((int) 519031)
0x21e: Push((int) -1)
0x21f: Push((int) 20151)
0x220: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x221: Pop(3)
0x222: Return(); Pop(0)

0x223: Push((int) 20152)
0x224: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x226: PushEmpty(string)
0x227: Stack[-1] = "Confusion"
0x228: Call2 0x18d

0x229: Pop(1)
0x22a: Push((int) 519032)
0x22b: @@ SetMessage(Stack[-1])
0x22c: Pop(1)
0x22d: @@ ClearReplies()
0x22e: Pop(0)
0x22f: Push((int) 519033)
0x230: Push((int) 20154)
0x231: Push((int) 20153)
0x232: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x233: Pop(3)
0x234: Push((int) 519035)
0x235: Push((int) 20154)
0x236: Push((int) 20155)
0x237: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x238: Pop(3)
0x239: Return(); Pop(0)

0x23a: Push((int) 20154)
0x23b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x23d: PushEmpty(string)
0x23e: Stack[-1] = "Confusion"
0x23f: Call2 0x18d

0x240: Pop(1)
0x241: Push((int) 519034)
0x242: @@ SetMessage(Stack[-1])
0x243: Pop(1)
0x244: @@ ClearReplies()
0x245: Pop(0)
0x246: Push((int) 519036)
0x247: Push((int) 20157)
0x248: Push((int) 20156)
0x249: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24a: Pop(3)
0x24b: Push((int) 519039)
0x24c: Push((int) 20157)
0x24d: Push((int) 20160)
0x24e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24f: Pop(3)
0x250: Return(); Pop(0)

0x251: Push((int) 20157)
0x252: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x253: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x254: PushEmpty(string)
0x255: Stack[-1] = "Confusion"
0x256: Call2 0x18d

0x257: Pop(1)
0x258: Push((int) 519037)
0x259: @@ SetMessage(Stack[-1])
0x25a: Pop(1)
0x25b: @@ ClearReplies()
0x25c: Pop(0)
0x25d: Push((int) 519038)
0x25e: Push((int) -1)
0x25f: Push((int) 20158)
0x260: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x261: Pop(3)
0x262: Push((int) 519040)
0x263: Push((int) -1)
0x264: Push((int) 20162)
0x265: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x266: Pop(3)
0x267: Return(); Pop(0)

0x268: Push((int) 20163)
0x269: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26a: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x26b: PushEmpty(string)
0x26c: Stack[-1] = "Confusion"
0x26d: Call2 0x18d

0x26e: Pop(1)
0x26f: Push((int) 519041)
0x270: @@ SetMessage(Stack[-1])
0x271: Pop(1)
0x272: @@ ClearReplies()
0x273: Pop(0)
0x274: Push((int) 519042)
0x275: Push((int) 20165)
0x276: Push((int) 20164)
0x277: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x278: Pop(3)
0x279: Push((int) 519059)
0x27a: Push((int) 20180)
0x27b: Push((int) 20183)
0x27c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27d: Pop(3)
0x27e: Return(); Pop(0)

0x27f: Push((int) 20165)
0x280: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x282: PushEmpty(string)
0x283: Stack[-1] = "Confusion"
0x284: Call2 0x18d

0x285: Pop(1)
0x286: Push((int) 519043)
0x287: @@ SetMessage(Stack[-1])
0x288: Pop(1)
0x289: @@ ClearReplies()
0x28a: Pop(0)
0x28b: Push((int) 519044)
0x28c: Push((int) 20167)
0x28d: Push((int) 20166)
0x28e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28f: Pop(3)
0x290: Push((int) 519046)
0x291: Push((int) 20169)
0x292: Push((int) 20168)
0x293: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x294: Pop(3)
0x295: Return(); Pop(0)

0x296: Push((int) 20169)
0x297: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x299: PushEmpty(string)
0x29a: Stack[-1] = "Neutral"
0x29b: Call2 0x18d

0x29c: Pop(1)
0x29d: Push((int) 519047)
0x29e: @@ SetMessage(Stack[-1])
0x29f: Pop(1)
0x2a0: @@ ClearReplies()
0x2a1: Pop(0)
0x2a2: Push((int) 519048)
0x2a3: Push((int) 20167)
0x2a4: Push((int) 20170)
0x2a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a6: Pop(3)
0x2a7: Return(); Pop(0)

0x2a8: Push((int) 20167)
0x2a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2ab: PushEmpty(string)
0x2ac: Stack[-1] = "Confusion"
0x2ad: Call2 0x18d

0x2ae: Pop(1)
0x2af: Push((int) 519045)
0x2b0: @@ SetMessage(Stack[-1])
0x2b1: Pop(1)
0x2b2: @@ ClearReplies()
0x2b3: Pop(0)
0x2b4: Push((int) 519049)
0x2b5: Push((int) 20177)
0x2b6: Push((int) 20172)
0x2b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b8: Pop(3)
0x2b9: Push((int) 519050)
0x2ba: Push((int) 20174)
0x2bb: Push((int) 20173)
0x2bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bd: Pop(3)
0x2be: Return(); Pop(0)

0x2bf: Push((int) 20174)
0x2c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2c2: PushEmpty(string)
0x2c3: Stack[-1] = "Fear"
0x2c4: Call2 0x18d

0x2c5: Pop(1)
0x2c6: Push((int) 519051)
0x2c7: @@ SetMessage(Stack[-1])
0x2c8: Pop(1)
0x2c9: @@ ClearReplies()
0x2ca: Pop(0)
0x2cb: Push((int) 519052)
0x2cc: Push((int) -1)
0x2cd: Push((int) 20175)
0x2ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cf: Pop(3)
0x2d0: Push((int) 519053)
0x2d1: Push((int) 20177)
0x2d2: Push((int) 20176)
0x2d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d4: Pop(3)
0x2d5: Return(); Pop(0)

0x2d6: Push((int) 20177)
0x2d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2d9: PushEmpty(string)
0x2da: Stack[-1] = "Neutral"
0x2db: Call2 0x18d

0x2dc: Pop(1)
0x2dd: Push((int) 519054)
0x2de: @@ SetMessage(Stack[-1])
0x2df: Pop(1)
0x2e0: @@ ClearReplies()
0x2e1: Pop(0)
0x2e2: Push((int) 519055)
0x2e3: Push((int) 19662)
0x2e4: Push((int) 20178)
0x2e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e6: Pop(3)
0x2e7: Push((int) 519056)
0x2e8: Push((int) 20180)
0x2e9: Push((int) 20179)
0x2ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2eb: Pop(3)
0x2ec: Return(); Pop(0)

0x2ed: Push((int) 20180)
0x2ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2f0: PushEmpty(string)
0x2f1: Stack[-1] = "Neutral"
0x2f2: Call2 0x18d

0x2f3: Pop(1)
0x2f4: Push((int) 519057)
0x2f5: @@ SetMessage(Stack[-1])
0x2f6: Pop(1)
0x2f7: @@ ClearReplies()
0x2f8: Pop(0)
0x2f9: Push((int) 519058)
0x2fa: Push((int) -1)
0x2fb: Push((int) 20181)
0x2fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fd: Pop(3)
0x2fe: Return(); Pop(0)

0x2ff: Push((int) 19662)
0x300: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x301: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x302: PushEmpty(string)
0x303: Stack[-1] = "Neutral"
0x304: Call2 0x18d

0x305: Pop(1)
0x306: Push((int) 518552)
0x307: @@ SetMessage(Stack[-1])
0x308: Pop(1)
0x309: @@ ClearReplies()
0x30a: Pop(0)
0x30b: Push((int) 518553)
0x30c: Push((int) -1)
0x30d: Push((int) 19663)
0x30e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30f: Pop(3)
0x310: Return(); Pop(0)

0x311: Push((int) 20141)
0x312: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x313: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x314: PushEmpty(string)
0x315: Stack[-1] = "Fear"
0x316: Call2 0x18d

0x317: Pop(1)
0x318: Push((int) 519022)
0x319: @@ SetMessage(Stack[-1])
0x31a: Pop(1)
0x31b: @@ ClearReplies()
0x31c: Pop(0)
0x31d: Push((int) 519023)
0x31e: Push((int) 20138)
0x31f: Push((int) 20142)
0x320: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x321: Pop(3)
0x322: Return(); Pop(0)

0x323: Push((int) 20132)
0x324: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x326: PushEmpty(string)
0x327: Stack[-1] = "Sympathy"
0x328: Call2 0x18d

0x329: Pop(1)
0x32a: Push((int) 519014)
0x32b: @@ SetMessage(Stack[-1])
0x32c: Pop(1)
0x32d: @@ ClearReplies()
0x32e: Pop(0)
0x32f: Push((int) 519015)
0x330: Push((int) 20138)
0x331: Push((int) 20133)
0x332: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x333: Pop(3)
0x334: Push((int) 519016)
0x335: Push((int) 20135)
0x336: Push((int) 20134)
0x337: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x338: Pop(3)
0x339: Return(); Pop(0)

0x33a: Push((int) 20135)
0x33b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33c: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x33d: PushEmpty(string)
0x33e: Stack[-1] = "Fear"
0x33f: Call2 0x18d

0x340: Pop(1)
0x341: Push((int) 519017)
0x342: @@ SetMessage(Stack[-1])
0x343: Pop(1)
0x344: @@ ClearReplies()
0x345: Pop(0)
0x346: Push((int) 519019)
0x347: Push((int) 20138)
0x348: Push((int) 20137)
0x349: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34a: Pop(3)
0x34b: Push((int) 519018)
0x34c: Push((int) -1)
0x34d: Push((int) 20136)
0x34e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34f: Pop(3)
0x350: Return(); Pop(0)

0x351: Push((int) 20138)
0x352: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x354: PushEmpty(string)
0x355: Stack[-1] = "Confusion"
0x356: Call2 0x18d

0x357: Pop(1)
0x358: Push((int) 519020)
0x359: @@ SetMessage(Stack[-1])
0x35a: Pop(1)
0x35b: @@ ClearReplies()
0x35c: Pop(0)
0x35d: Push((int) 519024)
0x35e: Push((int) 20145)
0x35f: Push((int) 20144)
0x360: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x361: Pop(3)
0x362: Return(); Pop(0)

0x363: Push((int) 20145)
0x364: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x366: PushEmpty(string)
0x367: Stack[-1] = "Neutral"
0x368: Call2 0x18d

0x369: Pop(1)
0x36a: Push((int) 519025)
0x36b: @@ SetMessage(Stack[-1])
0x36c: Pop(1)
0x36d: @@ ClearReplies()
0x36e: Pop(0)
0x36f: Push((int) 527912)
0x370: Push((int) 29261)
0x371: Push((int) 29260)
0x372: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x373: Pop(3)
0x374: Return(); Pop(0)

0x375: Push((int) 29261)
0x376: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x377: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x378: PushEmpty(string)
0x379: Stack[-1] = "Tiredness"
0x37a: Call2 0x18d

0x37b: Pop(1)
0x37c: Push((int) 527913)
0x37d: @@ SetMessage(Stack[-1])
0x37e: Pop(1)
0x37f: @@ ClearReplies()
0x380: Pop(0)
0x381: Push((int) 519026)
0x382: Push((int) -1)
0x383: Push((int) 20146)
0x384: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x385: Pop(3)
0x386: Push((int) 519027)
0x387: Push((int) -1)
0x388: Push((int) 20147)
0x389: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38a: Pop(3)
0x38b: Return(); Pop(0)

0x38c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x38d: PushEmpty(bool)
0x38e: Call2 0xa0e

0x38f: Pop(0)
0x390: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x391: @ lshStopAnimation()
0x392: Pop(0)
0x393: GOTO 0x396

0x394: @ StopAnimation()
0x395: Pop(0)
0x396: Return(); Pop(0)

0x397: GOTO 0x1a4

0x398: Return(); Pop(0)

0x399: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x39a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x39b: PushEmpty(bool, object, float)
0x39c: Stack[-2] = Stack[-12]
0x39d: Stack[-1] = (float) 70.0
0x39e: Call2 0x8a3

0x39f: Pop(2)
0x3a0: Pop(1); Push((bool) Stack[-1] == 0)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a2: Stack[-10] = (int) -2
0x3a3: Return(); Pop(8)

0x3a4: @ CreateDialog(Stack[-4])
0x3a5: Pop(0)
0x3a6: PushEmpty(int)
0x3a7: Call2 0xa08

0x3a8: Pop(0)
0x3a9: @@ SetNPCName(Stack[-1])
0x3aa: Pop(1)
0x3ab: PushEmpty(int)
0x3ac: Call2 0xa06

0x3ad: Pop(0)
0x3ae: @@ SetNPCDescription(Stack[-1])
0x3af: Pop(1)
0x3b0: PushEmpty(string)
0x3b1: Call2 0xa0a

0x3b2: Pop(0)
0x3b3: @@ SetPhoto(Stack[-1])
0x3b4: Pop(1)
0x3b5: PushEmpty(string)
0x3b6: Call2 0xa0c

0x3b7: Pop(0)
0x3b8: @@ SetPhoto2(Stack[-1])
0x3b9: Pop(1)
0x3ba: PushEmpty(int)
0x3bb: Call2 0xb03

0x3bc: Pop(0)
0x3bd: @@ SetPlayerName(Stack[-1])
0x3be: Pop(1)
0x3bf: Stack[-2] = (int) -1
0x3c0: @ IsOverrideActive(Stack[-3])
0x3c1: Pop(0)
0x3c2: Push(Stack[-3])
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c4: Stack[-10] = (int) -2
0x3c5: Return(); Pop(8)

0x3c6: @ DoDialog(Stack[-4])
0x3c7: Pop(0)
0x3c8: PushEmpty(bool, object)
0x3c9: PushEmpty(object)
0x3ca: Call2 0x9b9

0x3cb: Stack[-2] = Stack[-1]
0x3cc: Pop(1)
0x3cd: Call2 0x8fa

0x3ce: Pop(2)
0x3cf: PushEmpty(object, object)
0x3d0: Stack[-2] = Stack[-11]
0x3d1: Stack[-1] = Stack[-6]
0x3d2: Push(-2, 4); TaskCall(5)
0x3d3: Call2 0x3ea

0x3d4: Pop(-2, 4); TaskReturn
0x3d5: Pop(2)
0x3d6: @@ IsDialogEnd(Stack[-1])
0x3d7: Pop(0)
0x3d8: Pop(0); Push((bool) Stack[-1] == 0)
0x3d9: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3da: @ sync()
0x3db: Pop(0)
0x3dc: @@ IsDialogEnd(Stack[-1])
0x3dd: Pop(0)
0x3de: GOTO 0x3d8

0x3df: PushEmpty(object)
0x3e0: Stack[-1] = Stack[-10]
0x3e1: Call2 0x8e8

0x3e2: Pop(1)
0x3e3: @ StopDialog(Stack[-4])
0x3e4: Pop(0)
0x3e5: @@ GetReturnValue(Stack[-2])
0x3e6: Pop(0)
0x3e7: Stack[-10] = Stack[-2]
0x3e8: Return(); Pop(8)

0x3e9: Stack[-4] = 0
0x3ea: PushEmpty()
0x3eb: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3ec: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3ed: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3ee: Push((int) 1)
0x3ef: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x3f0: PushEmpty(string)
0x3f1: Stack[-1] = "Fear"
0x3f2: Call2 0x432

0x3f3: Pop(1)
0x3f4: Push((int) 521486)
0x3f5: @@ SetMessage(Stack[-1])
0x3f6: Pop(1)
0x3f7: @@ ClearReplies()
0x3f8: Pop(0)
0x3f9: PushEmpty(bool)
0x3fa: Stack[-1] = (bool) 0
0x3fb: PushEmpty(bool, object)
0x3fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3fd: Call2 0xa5a

0x3fe: Pop(1)
0x3ff: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x400: PushEmpty(bool, object)
0x401: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x402: Call2 0xa4e

0x403: Pop(1)
0x404: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x405: Stack[-1] = (bool) 1
0x406: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x407: Push((int) 521487)
0x408: Push((int) 22653)
0x409: Push((int) 22652)
0x40a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40b: Pop(3)
0x40c: Push((int) 521490)
0x40d: Push((int) -1)
0x40e: Push((int) 22655)
0x40f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x410: Pop(3)
0x411: GOTO 0x414

0x412: Return(); Pop(0)

0x413: GOTO 0x3ee

0x414: PushEmpty(bool)
0x415: Call2 0xa0e

0x416: Pop(0)
0x417: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x418: @ lshWaitForAnimEnd()
0x419: Pop(0)
0x41a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x41b: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41c: GOTO 0x422

0x41d: PushEmpty(string)
0x41e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x41f: Call2 0x984

0x420: Pop(1)
0x421: GOTO 0x418

0x422: GOTO 0x431

0x423: Push("all")
0x424: Push("idle")
0x425: @ PlayAnimation(Stack[-2], Stack[-1])
0x426: Pop(2)
0x427: @ WaitForAnimEnd()
0x428: Pop(0)
0x429: Push( Stack[3 + Tasks[-1].StackPointer] )
0x42a: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x42b: GOTO 0x431

0x42c: Push("all")
0x42d: Push("idle")
0x42e: @ PlayAnimation(Stack[-2], Stack[-1])
0x42f: Pop(2)
0x430: GOTO 0x427

0x431: Return(); Pop(0)

0x432: PushEmpty()
0x433: PushEmpty(bool)
0x434: Call2 0xa0e

0x435: Pop(0)
0x436: Pop(1); Push((bool) Stack[-1] == 0)
0x437: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x438: Return(); Pop(0)

0x439: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x43a: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x43b: Return(); Pop(0)

0x43c: PushEmpty(string, bool)
0x43d: Stack[-2] = Stack[-3]
0x43e: Push("")
0x43f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x441: Stack[-1] = (bool) 0
0x442: GOTO 0x444

0x443: Stack[-1] = (bool) 1
0x444: Call2 0x994

0x445: Pop(2)
0x446: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x447: Return(); Pop(0)

0x448: PushEmpty()
0x449: Push((int) 1)
0x44a: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x44b: PushEmpty()
0x44c: Call2 0x9b2

0x44d: Pop(0)
0x44e: Push((int) 22652)
0x44f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x450: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x451: PushEmpty(object, object)
0x452: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x453: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x454: Call2 0xa38

0x455: Pop(2)
0x456: Push((int) 22651)
0x457: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x458: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x459: PushEmpty(string)
0x45a: Stack[-1] = "Fear"
0x45b: Call2 0x432

0x45c: Pop(1)
0x45d: Push((int) 521486)
0x45e: @@ SetMessage(Stack[-1])
0x45f: Pop(1)
0x460: @@ ClearReplies()
0x461: Pop(0)
0x462: PushEmpty(bool)
0x463: Stack[-1] = (bool) 0
0x464: PushEmpty(bool, object)
0x465: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x466: Call2 0xa5a

0x467: Pop(1)
0x468: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x469: PushEmpty(bool, object)
0x46a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x46b: Call2 0xa4e

0x46c: Pop(1)
0x46d: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46e: Stack[-1] = (bool) 1
0x46f: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x470: Push((int) 521487)
0x471: Push((int) 22653)
0x472: Push((int) 22652)
0x473: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x474: Pop(3)
0x475: Push((int) 521490)
0x476: Push((int) -1)
0x477: Push((int) 22655)
0x478: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x479: Pop(3)
0x47a: Return(); Pop(0)

0x47b: Push((int) 22653)
0x47c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47d: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x47e: PushEmpty(string)
0x47f: Stack[-1] = "Confusion"
0x480: Call2 0x432

0x481: Pop(1)
0x482: Push((int) 521488)
0x483: @@ SetMessage(Stack[-1])
0x484: Pop(1)
0x485: @@ ClearReplies()
0x486: Pop(0)
0x487: Push((int) 521489)
0x488: Push((int) 25167)
0x489: Push((int) 22654)
0x48a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48b: Pop(3)
0x48c: Push((int) 523891)
0x48d: Push((int) 25171)
0x48e: Push((int) 25170)
0x48f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x490: Pop(3)
0x491: Return(); Pop(0)

0x492: Push((int) 25171)
0x493: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x494: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x495: PushEmpty(string)
0x496: Stack[-1] = "Confusion"
0x497: Call2 0x432

0x498: Pop(1)
0x499: Push((int) 523892)
0x49a: @@ SetMessage(Stack[-1])
0x49b: Pop(1)
0x49c: @@ ClearReplies()
0x49d: Pop(0)
0x49e: Push((int) 523893)
0x49f: Push((int) 25173)
0x4a0: Push((int) 25172)
0x4a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a2: Pop(3)
0x4a3: Return(); Pop(0)

0x4a4: Push((int) 25167)
0x4a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a6: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4a7: PushEmpty(string)
0x4a8: Stack[-1] = "Confusion"
0x4a9: Call2 0x432

0x4aa: Pop(1)
0x4ab: Push((int) 523888)
0x4ac: @@ SetMessage(Stack[-1])
0x4ad: Pop(1)
0x4ae: @@ ClearReplies()
0x4af: Pop(0)
0x4b0: Push((int) 523889)
0x4b1: Push((int) 25173)
0x4b2: Push((int) 25168)
0x4b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b4: Pop(3)
0x4b5: Push((int) 523890)
0x4b6: Push((int) -1)
0x4b7: Push((int) 25169)
0x4b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b9: Pop(3)
0x4ba: Return(); Pop(0)

0x4bb: Push((int) 25173)
0x4bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4be: PushEmpty(string)
0x4bf: Stack[-1] = "Neutral"
0x4c0: Call2 0x432

0x4c1: Pop(1)
0x4c2: Push((int) 523894)
0x4c3: @@ SetMessage(Stack[-1])
0x4c4: Pop(1)
0x4c5: @@ ClearReplies()
0x4c6: Pop(0)
0x4c7: Push((int) 523895)
0x4c8: Push((int) 25176)
0x4c9: Push((int) 25175)
0x4ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cb: Pop(3)
0x4cc: Push((int) 523898)
0x4cd: Push((int) -1)
0x4ce: Push((int) 25178)
0x4cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d0: Pop(3)
0x4d1: Return(); Pop(0)

0x4d2: Push((int) 25176)
0x4d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d4: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4d5: PushEmpty(string)
0x4d6: Stack[-1] = "Neutral"
0x4d7: Call2 0x432

0x4d8: Pop(1)
0x4d9: Push((int) 523896)
0x4da: @@ SetMessage(Stack[-1])
0x4db: Pop(1)
0x4dc: @@ ClearReplies()
0x4dd: Pop(0)
0x4de: Push((int) 523897)
0x4df: Push((int) -1)
0x4e0: Push((int) 25177)
0x4e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e2: Pop(3)
0x4e3: Return(); Pop(0)

0x4e4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4e5: PushEmpty(bool)
0x4e6: Call2 0xa0e

0x4e7: Pop(0)
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4e9: @ lshStopAnimation()
0x4ea: Pop(0)
0x4eb: GOTO 0x4ee

0x4ec: @ StopAnimation()
0x4ed: Pop(0)
0x4ee: Return(); Pop(0)

0x4ef: GOTO 0x449

0x4f0: Return(); Pop(0)

0x4f1: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4f2: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4f3: PushEmpty(bool, object, float)
0x4f4: Stack[-2] = Stack[-12]
0x4f5: Stack[-1] = (float) 70.0
0x4f6: Call2 0x8a3

0x4f7: Pop(2)
0x4f8: Pop(1); Push((bool) Stack[-1] == 0)
0x4f9: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fa: Stack[-10] = (int) -2
0x4fb: Return(); Pop(8)

0x4fc: @ CreateDialog(Stack[-4])
0x4fd: Pop(0)
0x4fe: PushEmpty(int)
0x4ff: Call2 0xa08

0x500: Pop(0)
0x501: @@ SetNPCName(Stack[-1])
0x502: Pop(1)
0x503: PushEmpty(int)
0x504: Call2 0xa06

0x505: Pop(0)
0x506: @@ SetNPCDescription(Stack[-1])
0x507: Pop(1)
0x508: PushEmpty(string)
0x509: Call2 0xa0a

0x50a: Pop(0)
0x50b: @@ SetPhoto(Stack[-1])
0x50c: Pop(1)
0x50d: PushEmpty(string)
0x50e: Call2 0xa0c

0x50f: Pop(0)
0x510: @@ SetPhoto2(Stack[-1])
0x511: Pop(1)
0x512: PushEmpty(int)
0x513: Call2 0xb03

0x514: Pop(0)
0x515: @@ SetPlayerName(Stack[-1])
0x516: Pop(1)
0x517: Stack[-2] = (int) -1
0x518: @ IsOverrideActive(Stack[-3])
0x519: Pop(0)
0x51a: Push(Stack[-3])
0x51b: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x51c: Stack[-10] = (int) -2
0x51d: Return(); Pop(8)

0x51e: @ DoDialog(Stack[-4])
0x51f: Pop(0)
0x520: PushEmpty(bool, object)
0x521: PushEmpty(object)
0x522: Call2 0x9b9

0x523: Stack[-2] = Stack[-1]
0x524: Pop(1)
0x525: Call2 0x8fa

0x526: Pop(2)
0x527: PushEmpty(object, object)
0x528: Stack[-2] = Stack[-11]
0x529: Stack[-1] = Stack[-6]
0x52a: Push(-2, 4); TaskCall(7)
0x52b: Call2 0x542

0x52c: Pop(-2, 4); TaskReturn
0x52d: Pop(2)
0x52e: @@ IsDialogEnd(Stack[-1])
0x52f: Pop(0)
0x530: Pop(0); Push((bool) Stack[-1] == 0)
0x531: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x532: @ sync()
0x533: Pop(0)
0x534: @@ IsDialogEnd(Stack[-1])
0x535: Pop(0)
0x536: GOTO 0x530

0x537: PushEmpty(object)
0x538: Stack[-1] = Stack[-10]
0x539: Call2 0x8e8

0x53a: Pop(1)
0x53b: @ StopDialog(Stack[-4])
0x53c: Pop(0)
0x53d: @@ GetReturnValue(Stack[-2])
0x53e: Pop(0)
0x53f: Stack[-10] = Stack[-2]
0x540: Return(); Pop(8)

0x541: Stack[-4] = 0
0x542: PushEmpty()
0x543: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x544: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x545: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x546: Push((int) 1)
0x547: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x548: PushEmpty(string)
0x549: Stack[-1] = "Neutral"
0x54a: Call2 0x577

0x54b: Pop(1)
0x54c: Push((int) 522629)
0x54d: @@ SetMessage(Stack[-1])
0x54e: Pop(1)
0x54f: @@ ClearReplies()
0x550: Pop(0)
0x551: Push((int) 522630)
0x552: Push((int) -1)
0x553: Push((int) 23817)
0x554: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x555: Pop(3)
0x556: GOTO 0x559

0x557: Return(); Pop(0)

0x558: GOTO 0x546

0x559: PushEmpty(bool)
0x55a: Call2 0xa0e

0x55b: Pop(0)
0x55c: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x55d: @ lshWaitForAnimEnd()
0x55e: Pop(0)
0x55f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x560: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x561: GOTO 0x567

0x562: PushEmpty(string)
0x563: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x564: Call2 0x984

0x565: Pop(1)
0x566: GOTO 0x55d

0x567: GOTO 0x576

0x568: Push("all")
0x569: Push("idle")
0x56a: @ PlayAnimation(Stack[-2], Stack[-1])
0x56b: Pop(2)
0x56c: @ WaitForAnimEnd()
0x56d: Pop(0)
0x56e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x56f: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x570: GOTO 0x576

0x571: Push("all")
0x572: Push("idle")
0x573: @ PlayAnimation(Stack[-2], Stack[-1])
0x574: Pop(2)
0x575: GOTO 0x56c

0x576: Return(); Pop(0)

0x577: PushEmpty()
0x578: PushEmpty(bool)
0x579: Call2 0xa0e

0x57a: Pop(0)
0x57b: Pop(1); Push((bool) Stack[-1] == 0)
0x57c: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x57d: Return(); Pop(0)

0x57e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x57f: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x580: Return(); Pop(0)

0x581: PushEmpty(string, bool)
0x582: Stack[-2] = Stack[-3]
0x583: Push("")
0x584: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x585: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x586: Stack[-1] = (bool) 0
0x587: GOTO 0x589

0x588: Stack[-1] = (bool) 1
0x589: Call2 0x994

0x58a: Pop(2)
0x58b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x58c: Return(); Pop(0)

0x58d: PushEmpty()
0x58e: Push((int) 1)
0x58f: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x590: PushEmpty()
0x591: Call2 0x9b2

0x592: Pop(0)
0x593: Push((int) 23816)
0x594: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x595: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x596: PushEmpty(string)
0x597: Stack[-1] = "Neutral"
0x598: Call2 0x577

0x599: Pop(1)
0x59a: Push((int) 522629)
0x59b: @@ SetMessage(Stack[-1])
0x59c: Pop(1)
0x59d: @@ ClearReplies()
0x59e: Pop(0)
0x59f: Push((int) 522630)
0x5a0: Push((int) -1)
0x5a1: Push((int) 23817)
0x5a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a3: Pop(3)
0x5a4: Return(); Pop(0)

0x5a5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5a6: PushEmpty(bool)
0x5a7: Call2 0xa0e

0x5a8: Pop(0)
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5aa: @ lshStopAnimation()
0x5ab: Pop(0)
0x5ac: GOTO 0x5af

0x5ad: @ StopAnimation()
0x5ae: Pop(0)
0x5af: Return(); Pop(0)

0x5b0: GOTO 0x58e

0x5b1: Return(); Pop(0)

0x5b2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5b3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5b4: PushEmpty(bool, object, float)
0x5b5: Stack[-2] = Stack[-12]
0x5b6: Stack[-1] = (float) 70.0
0x5b7: Call2 0x8a3

0x5b8: Pop(2)
0x5b9: Pop(1); Push((bool) Stack[-1] == 0)
0x5ba: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5bb: Stack[-10] = (int) -2
0x5bc: Return(); Pop(8)

0x5bd: @ CreateDialog(Stack[-4])
0x5be: Pop(0)
0x5bf: PushEmpty(int)
0x5c0: Call2 0xa08

0x5c1: Pop(0)
0x5c2: @@ SetNPCName(Stack[-1])
0x5c3: Pop(1)
0x5c4: PushEmpty(int)
0x5c5: Call2 0xa06

0x5c6: Pop(0)
0x5c7: @@ SetNPCDescription(Stack[-1])
0x5c8: Pop(1)
0x5c9: PushEmpty(string)
0x5ca: Call2 0xa0a

0x5cb: Pop(0)
0x5cc: @@ SetPhoto(Stack[-1])
0x5cd: Pop(1)
0x5ce: PushEmpty(string)
0x5cf: Call2 0xa0c

0x5d0: Pop(0)
0x5d1: @@ SetPhoto2(Stack[-1])
0x5d2: Pop(1)
0x5d3: PushEmpty(int)
0x5d4: Call2 0xb03

0x5d5: Pop(0)
0x5d6: @@ SetPlayerName(Stack[-1])
0x5d7: Pop(1)
0x5d8: Stack[-2] = (int) -1
0x5d9: @ IsOverrideActive(Stack[-3])
0x5da: Pop(0)
0x5db: Push(Stack[-3])
0x5dc: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5dd: Stack[-10] = (int) -2
0x5de: Return(); Pop(8)

0x5df: @ DoDialog(Stack[-4])
0x5e0: Pop(0)
0x5e1: PushEmpty(bool, object)
0x5e2: PushEmpty(object)
0x5e3: Call2 0x9b9

0x5e4: Stack[-2] = Stack[-1]
0x5e5: Pop(1)
0x5e6: Call2 0x8fa

0x5e7: Pop(2)
0x5e8: PushEmpty(object, object)
0x5e9: Stack[-2] = Stack[-11]
0x5ea: Stack[-1] = Stack[-6]
0x5eb: Push(-2, 4); TaskCall(9)
0x5ec: Call2 0x603

0x5ed: Pop(-2, 4); TaskReturn
0x5ee: Pop(2)
0x5ef: @@ IsDialogEnd(Stack[-1])
0x5f0: Pop(0)
0x5f1: Pop(0); Push((bool) Stack[-1] == 0)
0x5f2: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5f3: @ sync()
0x5f4: Pop(0)
0x5f5: @@ IsDialogEnd(Stack[-1])
0x5f6: Pop(0)
0x5f7: GOTO 0x5f1

0x5f8: PushEmpty(object)
0x5f9: Stack[-1] = Stack[-10]
0x5fa: Call2 0x8e8

0x5fb: Pop(1)
0x5fc: @ StopDialog(Stack[-4])
0x5fd: Pop(0)
0x5fe: @@ GetReturnValue(Stack[-2])
0x5ff: Pop(0)
0x600: Stack[-10] = Stack[-2]
0x601: Return(); Pop(8)

0x602: Stack[-4] = 0
0x603: PushEmpty()
0x604: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x605: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x606: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x607: Push((int) 1)
0x608: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x609: PushEmpty(string)
0x60a: Stack[-1] = "Neutral"
0x60b: Call2 0x642

0x60c: Pop(1)
0x60d: Push((int) 535294)
0x60e: @@ SetMessage(Stack[-1])
0x60f: Pop(1)
0x610: @@ ClearReplies()
0x611: Pop(0)
0x612: Push((int) 535295)
0x613: Push((int) 36973)
0x614: Push((int) 36972)
0x615: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x616: Pop(3)
0x617: Push((int) 535302)
0x618: Push((int) -1)
0x619: Push((int) 36980)
0x61a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61b: Pop(3)
0x61c: Push((int) 535303)
0x61d: Push((int) -1)
0x61e: Push((int) 36981)
0x61f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x620: Pop(3)
0x621: GOTO 0x624

0x622: Return(); Pop(0)

0x623: GOTO 0x607

0x624: PushEmpty(bool)
0x625: Call2 0xa0e

0x626: Pop(0)
0x627: IF (Stack[-1] == 0) GOTO 0x633; Pop(1)

0x628: @ lshWaitForAnimEnd()
0x629: Pop(0)
0x62a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x62b: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x62c: GOTO 0x632

0x62d: PushEmpty(string)
0x62e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x62f: Call2 0x984

0x630: Pop(1)
0x631: GOTO 0x628

0x632: GOTO 0x641

0x633: Push("all")
0x634: Push("idle")
0x635: @ PlayAnimation(Stack[-2], Stack[-1])
0x636: Pop(2)
0x637: @ WaitForAnimEnd()
0x638: Pop(0)
0x639: Push( Stack[3 + Tasks[-1].StackPointer] )
0x63a: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x63b: GOTO 0x641

0x63c: Push("all")
0x63d: Push("idle")
0x63e: @ PlayAnimation(Stack[-2], Stack[-1])
0x63f: Pop(2)
0x640: GOTO 0x637

0x641: Return(); Pop(0)

0x642: PushEmpty()
0x643: PushEmpty(bool)
0x644: Call2 0xa0e

0x645: Pop(0)
0x646: Pop(1); Push((bool) Stack[-1] == 0)
0x647: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x648: Return(); Pop(0)

0x649: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x64a: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x64b: Return(); Pop(0)

0x64c: PushEmpty(string, bool)
0x64d: Stack[-2] = Stack[-3]
0x64e: Push("")
0x64f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x650: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x651: Stack[-1] = (bool) 0
0x652: GOTO 0x654

0x653: Stack[-1] = (bool) 1
0x654: Call2 0x994

0x655: Pop(2)
0x656: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x657: Return(); Pop(0)

0x658: PushEmpty()
0x659: Push((int) 1)
0x65a: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x65b: PushEmpty()
0x65c: Call2 0x9b2

0x65d: Pop(0)
0x65e: Push((int) 36971)
0x65f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x660: IF (Stack[-1] == 0) GOTO 0x67a; Pop(1)

0x661: PushEmpty(string)
0x662: Stack[-1] = "Neutral"
0x663: Call2 0x642

0x664: Pop(1)
0x665: Push((int) 535294)
0x666: @@ SetMessage(Stack[-1])
0x667: Pop(1)
0x668: @@ ClearReplies()
0x669: Pop(0)
0x66a: Push((int) 535295)
0x66b: Push((int) 36973)
0x66c: Push((int) 36972)
0x66d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66e: Pop(3)
0x66f: Push((int) 535302)
0x670: Push((int) -1)
0x671: Push((int) 36980)
0x672: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x673: Pop(3)
0x674: Push((int) 535303)
0x675: Push((int) -1)
0x676: Push((int) 36981)
0x677: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x678: Pop(3)
0x679: Return(); Pop(0)

0x67a: Push((int) 36973)
0x67b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x67c: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x67d: PushEmpty(string)
0x67e: Stack[-1] = "Neutral"
0x67f: Call2 0x642

0x680: Pop(1)
0x681: Push((int) 535296)
0x682: @@ SetMessage(Stack[-1])
0x683: Pop(1)
0x684: @@ ClearReplies()
0x685: Pop(0)
0x686: Push((int) 535297)
0x687: Push((int) 36975)
0x688: Push((int) 36974)
0x689: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68a: Pop(3)
0x68b: Push((int) 535301)
0x68c: Push((int) 36975)
0x68d: Push((int) 36978)
0x68e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68f: Pop(3)
0x690: Return(); Pop(0)

0x691: Push((int) 36975)
0x692: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x693: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x694: PushEmpty(string)
0x695: Stack[-1] = "Neutral"
0x696: Call2 0x642

0x697: Pop(1)
0x698: Push((int) 535298)
0x699: @@ SetMessage(Stack[-1])
0x69a: Pop(1)
0x69b: @@ ClearReplies()
0x69c: Pop(0)
0x69d: Push((int) 535299)
0x69e: Push((int) -1)
0x69f: Push((int) 36976)
0x6a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a1: Pop(3)
0x6a2: Push((int) 535300)
0x6a3: Push((int) -1)
0x6a4: Push((int) 36977)
0x6a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a6: Pop(3)
0x6a7: Return(); Pop(0)

0x6a8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6a9: PushEmpty(bool)
0x6aa: Call2 0xa0e

0x6ab: Pop(0)
0x6ac: IF (Stack[-1] == 0) GOTO 0x6b0; Pop(1)

0x6ad: @ lshStopAnimation()
0x6ae: Pop(0)
0x6af: GOTO 0x6b2

0x6b0: @ StopAnimation()
0x6b1: Pop(0)
0x6b2: Return(); Pop(0)

0x6b3: GOTO 0x659

0x6b4: Return(); Pop(0)

0x6b5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6b6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6b7: PushEmpty(bool, object, float)
0x6b8: Stack[-2] = Stack[-12]
0x6b9: Stack[-1] = (float) 70.0
0x6ba: Call2 0x8a3

0x6bb: Pop(2)
0x6bc: Pop(1); Push((bool) Stack[-1] == 0)
0x6bd: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6be: Stack[-10] = (int) -2
0x6bf: Return(); Pop(8)

0x6c0: @ CreateDialog(Stack[-4])
0x6c1: Pop(0)
0x6c2: PushEmpty(int)
0x6c3: Call2 0xa08

0x6c4: Pop(0)
0x6c5: @@ SetNPCName(Stack[-1])
0x6c6: Pop(1)
0x6c7: PushEmpty(int)
0x6c8: Call2 0xa06

0x6c9: Pop(0)
0x6ca: @@ SetNPCDescription(Stack[-1])
0x6cb: Pop(1)
0x6cc: PushEmpty(string)
0x6cd: Call2 0xa0a

0x6ce: Pop(0)
0x6cf: @@ SetPhoto(Stack[-1])
0x6d0: Pop(1)
0x6d1: PushEmpty(string)
0x6d2: Call2 0xa0c

0x6d3: Pop(0)
0x6d4: @@ SetPhoto2(Stack[-1])
0x6d5: Pop(1)
0x6d6: PushEmpty(int)
0x6d7: Call2 0xb03

0x6d8: Pop(0)
0x6d9: @@ SetPlayerName(Stack[-1])
0x6da: Pop(1)
0x6db: Stack[-2] = (int) -1
0x6dc: @ IsOverrideActive(Stack[-3])
0x6dd: Pop(0)
0x6de: Push(Stack[-3])
0x6df: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6e0: Stack[-10] = (int) -2
0x6e1: Return(); Pop(8)

0x6e2: @ DoDialog(Stack[-4])
0x6e3: Pop(0)
0x6e4: PushEmpty(bool, object)
0x6e5: PushEmpty(object)
0x6e6: Call2 0x9b9

0x6e7: Stack[-2] = Stack[-1]
0x6e8: Pop(1)
0x6e9: Call2 0x8fa

0x6ea: Pop(2)
0x6eb: PushEmpty(object, object)
0x6ec: Stack[-2] = Stack[-11]
0x6ed: Stack[-1] = Stack[-6]
0x6ee: Push(-2, 4); TaskCall(11)
0x6ef: Call2 0x706

0x6f0: Pop(-2, 4); TaskReturn
0x6f1: Pop(2)
0x6f2: @@ IsDialogEnd(Stack[-1])
0x6f3: Pop(0)
0x6f4: Pop(0); Push((bool) Stack[-1] == 0)
0x6f5: IF (Stack[-1] == 0) GOTO 0x6fb; Pop(1)

0x6f6: @ sync()
0x6f7: Pop(0)
0x6f8: @@ IsDialogEnd(Stack[-1])
0x6f9: Pop(0)
0x6fa: GOTO 0x6f4

0x6fb: PushEmpty(object)
0x6fc: Stack[-1] = Stack[-10]
0x6fd: Call2 0x8e8

0x6fe: Pop(1)
0x6ff: @ StopDialog(Stack[-4])
0x700: Pop(0)
0x701: @@ GetReturnValue(Stack[-2])
0x702: Pop(0)
0x703: Stack[-10] = Stack[-2]
0x704: Return(); Pop(8)

0x705: Stack[-4] = 0
0x706: PushEmpty()
0x707: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x708: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x709: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x70a: Push((int) 1)
0x70b: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x70c: PushEmpty(string)
0x70d: Stack[-1] = "Neutral"
0x70e: Call2 0x740

0x70f: Pop(1)
0x710: Push((int) 540551)
0x711: @@ SetMessage(Stack[-1])
0x712: Pop(1)
0x713: @@ ClearReplies()
0x714: Pop(0)
0x715: Push((int) 540552)
0x716: Push((int) -1)
0x717: Push((int) 42561)
0x718: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x719: Pop(3)
0x71a: Push((int) 540795)
0x71b: Push((int) -1)
0x71c: Push((int) 42844)
0x71d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71e: Pop(3)
0x71f: GOTO 0x722

0x720: Return(); Pop(0)

0x721: GOTO 0x70a

0x722: PushEmpty(bool)
0x723: Call2 0xa0e

0x724: Pop(0)
0x725: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x726: @ lshWaitForAnimEnd()
0x727: Pop(0)
0x728: Push( Stack[3 + Tasks[-1].StackPointer] )
0x729: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x72a: GOTO 0x730

0x72b: PushEmpty(string)
0x72c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x72d: Call2 0x984

0x72e: Pop(1)
0x72f: GOTO 0x726

0x730: GOTO 0x73f

0x731: Push("all")
0x732: Push("idle")
0x733: @ PlayAnimation(Stack[-2], Stack[-1])
0x734: Pop(2)
0x735: @ WaitForAnimEnd()
0x736: Pop(0)
0x737: Push( Stack[3 + Tasks[-1].StackPointer] )
0x738: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x739: GOTO 0x73f

0x73a: Push("all")
0x73b: Push("idle")
0x73c: @ PlayAnimation(Stack[-2], Stack[-1])
0x73d: Pop(2)
0x73e: GOTO 0x735

0x73f: Return(); Pop(0)

0x740: PushEmpty()
0x741: PushEmpty(bool)
0x742: Call2 0xa0e

0x743: Pop(0)
0x744: Pop(1); Push((bool) Stack[-1] == 0)
0x745: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x746: Return(); Pop(0)

0x747: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x748: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x749: Return(); Pop(0)

0x74a: PushEmpty(string, bool)
0x74b: Stack[-2] = Stack[-3]
0x74c: Push("")
0x74d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x74e: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x74f: Stack[-1] = (bool) 0
0x750: GOTO 0x752

0x751: Stack[-1] = (bool) 1
0x752: Call2 0x994

0x753: Pop(2)
0x754: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x755: Return(); Pop(0)

0x756: PushEmpty()
0x757: Push((int) 1)
0x758: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x759: PushEmpty()
0x75a: Call2 0x9b2

0x75b: Pop(0)
0x75c: Push((int) 42560)
0x75d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x75e: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x75f: PushEmpty(string)
0x760: Stack[-1] = "Neutral"
0x761: Call2 0x740

0x762: Pop(1)
0x763: Push((int) 540551)
0x764: @@ SetMessage(Stack[-1])
0x765: Pop(1)
0x766: @@ ClearReplies()
0x767: Pop(0)
0x768: Push((int) 540552)
0x769: Push((int) -1)
0x76a: Push((int) 42561)
0x76b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76c: Pop(3)
0x76d: Push((int) 540795)
0x76e: Push((int) -1)
0x76f: Push((int) 42844)
0x770: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x771: Pop(3)
0x772: Return(); Pop(0)

0x773: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x774: PushEmpty(bool)
0x775: Call2 0xa0e

0x776: Pop(0)
0x777: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x778: @ lshStopAnimation()
0x779: Pop(0)
0x77a: GOTO 0x77d

0x77b: @ StopAnimation()
0x77c: Pop(0)
0x77d: Return(); Pop(0)

0x77e: GOTO 0x757

0x77f: Return(); Pop(0)

0x780: Push(GlobalVars[1])
0x781: Stack[-1] = (bool) 0
0x782: GlobalVars[1] = Stack[-1]; Pop(1)
0x783: PushEmpty()
0x784: Call2 0x787

0x785: Pop(0)
0x786: Return(); Pop(0)

0x787: PushEmpty(bool)
0x788: Call2 0x89e

0x789: Pop(0)
0x78a: Pop(1); Push((bool) Stack[-1] == 0)
0x78b: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x78c: @ Hold()
0x78d: Pop(0)
0x78e: @ GetDirection(Stack[-0])
0x78f: Pop(0)
0x790: PushEmpty()
0x791: Call2 0x837

0x792: Pop(0)
0x793: GOTO 0x790

0x794: Return(); Pop(0)

0x795: PushEmpty(object, object)
0x796: Push("player")
0x797: @ FindActor(Stack[-2], Stack[-1])
0x798: Pop(1)
0x799: Pop(0); Push((bool) Stack[-1] == 0)
0x79a: IF (Stack[-1] == 0) GOTO 0x79d; Pop(1)

0x79b: Stack[-3] = (bool) 0
0x79c: Return(); Pop(2)

0x79d: PushEmpty(bool, object)
0x79e: Stack[-1] = Stack[-3]
0x79f: Call2 0x895

0x7a0: Stack[-5] = Stack[-2]
0x7a1: Pop(2)
0x7a2: Return(); Pop(2)

0x7a3: Stack[-1] = 0
0x7a4: Push(CvectorIndex(Stack[-0], 0))
0x7a5: Push(CvectorIndex(Stack[-0], 2))
0x7a6: @ RotateAsync(Stack[-2], Stack[-1])
0x7a7: Pop(2)
0x7a8: Return(); Pop(0)

0x7a9: PushEmpty(object, bool, object, bool)
0x7aa: Push("player")
0x7ab: @ FindActor(Stack[-3], Stack[-1])
0x7ac: Pop(1)
0x7ad: Pop(0); Push((bool) Stack[-2] == 0)
0x7ae: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x7af: Stack[-5] = (bool) 0
0x7b0: Return(); Pop(4)

0x7b1: PushEmpty(float, object)
0x7b2: Stack[-1] = Stack[-4]
0x7b3: Call2 0x883

0x7b4: Pop(1)
0x7b5: Push((float)90000.0)
0x7b6: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x7b7: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7b8: Stack[-5] = (bool) 0
0x7b9: Return(); Pop(4)

0x7ba: @ CanSee(Stack[-1], Stack[-2])
0x7bb: Pop(0)
0x7bc: Stack[-5] = Stack[-1]
0x7bd: Return(); Pop(4)

0x7be: Stack[-2] = 0
0x7bf: PushEmpty(float, float)
0x7c0: Push((int) 8)
0x7c1: Push((int) 16)
0x7c2: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x7c3: Pop(2)
0x7c4: Push((int) 10)
0x7c5: @ SetTimer(Stack[-1], Stack[-2])
0x7c6: Pop(1)
0x7c7: Return(); Pop(2)

0x7c8: Push((int) 10)
0x7c9: @ KillTimer(Stack[-1])
0x7ca: Pop(1)
0x7cb: Return(); Pop(0)

0x7cc: PushEmpty()
0x7cd: Push((int) 10)
0x7ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7cf: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7d0: PushEmpty()
0x7d1: Call2 0x7c8

0x7d2: Pop(0)
0x7d3: PushEmpty(bool)
0x7d4: Stack[-1] = (bool) 0
0x7d5: PushEmpty(bool)
0x7d6: Call2 0x89e

0x7d7: Pop(0)
0x7d8: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7d9: PushEmpty(bool)
0x7da: Call2 0x7a9

0x7db: Pop(0)
0x7dc: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7dd: Stack[-1] = (bool) 1
0x7de: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7df: PushEmpty(bool)
0x7e0: Call2 0x795

0x7e1: Pop(0)
0x7e2: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e3: PushEmpty(bool, object)
0x7e4: PushEmpty(object)
0x7e5: Call2 0x9b9

0x7e6: Stack[-2] = Stack[-1]
0x7e7: Pop(1)
0x7e8: Call2 0x934

0x7e9: Pop(2)
0x7ea: GOTO 0x7f1

0x7eb: PushEmpty()
0x7ec: Call2 0x7a4

0x7ed: Pop(0)
0x7ee: PushEmpty()
0x7ef: Call2 0x7bf

0x7f0: Pop(0)
0x7f1: Return(); Pop(0)

0x7f2: PushEmpty()
0x7f3: Call2 0x87e

0x7f4: Pop(0)
0x7f5: PushEmpty()
0x7f6: Call2 0x7c8

0x7f7: Pop(0)
0x7f8: @ lshStopSpeech()
0x7f9: Pop(0)
0x7fa: @ lshStopAnimation()
0x7fb: Pop(0)
0x7fc: @ StopAsync()
0x7fd: Pop(0)
0x7fe: @ Hold()
0x7ff: Pop(0)
0x800: Return(); Pop(0)

0x801: @ StopGroup0()
0x802: Pop(0)
0x803: PushEmpty()
0x804: Call2 0x7c8

0x805: Pop(0)
0x806: PushEmpty(string)
0x807: Stack[-1] = "Neutral"
0x808: Call2 0x984

0x809: Pop(1)
0x80a: PushEmpty()
0x80b: Call2 0x7bf

0x80c: Pop(0)
0x80d: Return(); Pop(0)

0x80e: PushEmpty()
0x80f: Push(Stack[-1])
0x810: IF (Stack[-1] == 0) GOTO 0x815; Pop(1)

0x811: PushEmpty()
0x812: Call2 0x7bf

0x813: Pop(0)
0x814: GOTO 0x819

0x815: PushEmpty(string)
0x816: Stack[-1] = "Neutral"
0x817: Call2 0x984

0x818: Pop(1)
0x819: Return(); Pop(0)

0x81a: PushEmpty(bool, bool)
0x81b: @ IsOverrideActive(Stack[-1])
0x81c: Pop(0)
0x81d: Pop(0); Push((bool) Stack[-1] == 0)
0x81e: IF (Stack[-1] == 0) GOTO 0x836; Pop(1)

0x81f: EventDisable(0)
0x820: PushEmpty()
0x821: Call2 0x87e

0x822: Pop(0)
0x823: PushEmpty(bool, object)
0x824: Stack[-1] = Stack[-5]
0x825: Call2 0x895

0x826: Pop(2)
0x827: EventEnable(0)
0x828: PushEmpty(object)
0x829: Stack[-1] = Stack[-4]
0x82a: Call2 0xb14

0x82b: Pop(1)
0x82c: PushEmpty(string)
0x82d: Stack[-1] = "Neutral"
0x82e: Call2 0x984

0x82f: Pop(1)
0x830: PushEmpty()
0x831: Call2 0x7c8

0x832: Pop(0)
0x833: PushEmpty()
0x834: Call2 0x7bf

0x835: Pop(0)
0x836: Return(); Pop(2)

0x837: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x838: @ WaitForAnimEnd()
0x839: Pop(0)
0x83a: PushEmpty(bool)
0x83b: Call2 0x89e

0x83c: Pop(0)
0x83d: Pop(1); Push((bool) Stack[-1] == 0)
0x83e: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x83f: Return(); Pop(12)

0x840: PushEmpty(int)
0x841: Call2 0x9f5

0x842: Stack[-7] = Stack[-1]
0x843: Pop(1)
0x844: Stack[-5] = (int) 0
0x845: PushEmpty(bool)
0x846: Stack[-1] = (bool) 0
0x847: Push((int) 5)
0x848: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x849: IF (Stack[-1] == 0) GOTO 0x84f; Pop(1)

0x84a: PushEmpty(bool)
0x84b: Call2 0x89e

0x84c: Pop(0)
0x84d: IF (Stack[-1] == 0) GOTO 0x84f; Pop(1)

0x84e: Stack[-1] = (bool) 1
0x84f: IF (Stack[-1] == 0) GOTO 0x879; Pop(1)

0x850: Pop(0); Push((bool) Stack[-6] == 0)
0x851: IF (Stack[-1] == 0) GOTO 0x859; Pop(1)

0x852: Push((int) 3)
0x853: @ Sleep(Stack[-1], Stack[-5])
0x854: Pop(1)
0x855: Pop(0); Push((bool) Stack[-4] == 0)
0x856: IF (Stack[-1] == 0) GOTO 0x858; Pop(1)

0x857: GOTO 0x879

0x858: GOTO 0x86e

0x859: @ irand(Stack[-3], Stack[-6])
0x85a: Pop(0)
0x85b: Push((int) 5)
0x85c: @ irand(Stack[-3], Stack[-1])
0x85d: Pop(1)
0x85e: Push((int) 0)
0x85f: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x860: IF (Stack[-1] == 0) GOTO 0x862; Pop(1)

0x861: Stack[-3] = (int) 0
0x862: Push("all")
0x863: PushEmpty(string, int)
0x864: Stack[-1] = Stack[-6]
0x865: Call2 0x9ee

0x866: Pop(1)
0x867: @ PlayAnimation(Stack[-2], Stack[-1])
0x868: Pop(2)
0x869: @ WaitForAnimEnd(Stack[-1])
0x86a: Pop(0)
0x86b: Pop(0); Push((bool) Stack[-1] == 0)
0x86c: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x86d: GOTO 0x879

0x86e: PushEmpty(bool)
0x86f: Call2 0x87c

0x870: Pop(0)
0x871: Pop(1); Push((bool) Stack[-1] == 0)
0x872: IF (Stack[-1] == 0) GOTO 0x874; Pop(1)

0x873: GOTO 0x879

0x874: @ ResetAAS()
0x875: Pop(0)
0x876: Push((int) 1)
0x877: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x878: GOTO 0x845

0x879: @ ResetAAS()
0x87a: Pop(0)
0x87b: Return(); Pop(12)

0x87c: Stack[-1] = (bool) 1
0x87d: Return(); Pop(0)

0x87e: @ StopAnimation()
0x87f: Pop(0)
0x880: @ StopGroup0()
0x881: Pop(0)
0x882: Return(); Pop(0)

0x883: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x884: @ GetPosition(Stack[-3])
0x885: Pop(0)
0x886: @@ GetPosition(Stack[-2])
0x887: Pop(0)
0x888: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x889: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x88a: Return(); Pop(6)

0x88b: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x88c: @ GetPosition(Stack[-3])
0x88d: Pop(0)
0x88e: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x88f: Push(CvectorIndex(Stack[-2], 0))
0x890: Push(CvectorIndex(Stack[-3], 2))
0x891: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x892: Pop(2)
0x893: Stack[-8] = Stack[-1]
0x894: Return(); Pop(6)

0x895: PushEmpty(cvector, cvector)
0x896: @@ GetPosition(Stack[-1])
0x897: Pop(0)
0x898: PushEmpty(bool, cvector)
0x899: Stack[-1] = Stack[-3]
0x89a: Call2 0x88b

0x89b: Stack[-6] = Stack[-2]
0x89c: Pop(2)
0x89d: Return(); Pop(2)

0x89e: PushEmpty(bool, bool)
0x89f: @ IsLoaded(Stack[-1])
0x8a0: Pop(0)
0x8a1: Stack[-3] = Stack[-1]
0x8a2: Return(); Pop(2)

0x8a3: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x8a4: @@ GetPosition(Stack[-8])
0x8a5: Pop(0)
0x8a6: @@ GetEyesHeight(Stack[-9])
0x8a7: Pop(0)
0x8a8: Push(CvectorIndex(Stack[-8], 1))
0x8a9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8aa: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x8ab: @ GetPosition(Stack[-7])
0x8ac: Pop(0)
0x8ad: @ GetEyesHeight(Stack[-9])
0x8ae: Pop(0)
0x8af: Push(CvectorIndex(Stack[-7], 1))
0x8b0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8b1: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x8b2: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x8b3: Push(CvectorIndex(Stack[-6], 1))
0x8b4: Stack[-1] = (int) 0
0x8b5: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x8b6: Pop(0); Push(Stack[-6] | Stack[-6]);
0x8b7: Pop(1); Push(Sqrt(Stack[-1]))
0x8b8: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x8b9: Stack[-5] = -Stack[-6]; Pop(0);
0x8ba: Pop(0); Push(Stack[-6] * Stack[-19]);
0x8bb: PushEmpty(cvector, cvector)
0x8bc: Push(CVector(0.0, 1.0, 0.0))
0x8bd: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x8be: Call2 0x9bf

0x8bf: Pop(1)
0x8c0: Push((int) 25)
0x8c1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8c2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8c3: Push(CVector(0.0, 10.0, 0.0))
0x8c4: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x8c5: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x8c6: @ IsOverrideActive(Stack[-2])
0x8c7: Pop(0)
0x8c8: Push(Stack[-2])
0x8c9: IF (Stack[-1] == 0) GOTO 0x8cc; Pop(1)

0x8ca: Stack[-21] = (bool) 0
0x8cb: Return(); Pop(18)

0x8cc: @ StopWorld()
0x8cd: Pop(0)
0x8ce: Push((bool) 1)
0x8cf: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x8d0: Pop(1)
0x8d1: Push(CvectorIndex(Stack[-4], 0))
0x8d2: Push(CvectorIndex(Stack[-5], 2))
0x8d3: @ Rotate(Stack[-2], Stack[-1])
0x8d4: Pop(2)
0x8d5: PushEmpty(bool)
0x8d6: Call2 0xa0e

0x8d7: Pop(0)
0x8d8: IF (Stack[-1] == 0) GOTO 0x8da; Pop(1)

0x8d9: GOTO 0x8e2

0x8da: Push("head")
0x8db: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x8dc: Pop(1)
0x8dd: Push(Stack[-1])
0x8de: IF (Stack[-1] == 0) GOTO 0x8e2; Pop(1)

0x8df: Push("head")
0x8e0: @ LookAsyncCamera(Stack[-1])
0x8e1: Pop(1)
0x8e2: @ CameraWaitForPlayFinish()
0x8e3: Pop(0)
0x8e4: @ ResumeWorld()
0x8e5: Pop(0)
0x8e6: Stack[-21] = (bool) 1
0x8e7: Return(); Pop(18)

0x8e8: PushEmpty(bool, bool)
0x8e9: Push((bool) 1)
0x8ea: @ CameraSwitchToNormal(Stack[-1])
0x8eb: Pop(1)
0x8ec: PushEmpty(bool)
0x8ed: Call2 0xa0e

0x8ee: Pop(0)
0x8ef: IF (Stack[-1] == 0) GOTO 0x8f1; Pop(1)

0x8f0: GOTO 0x8f9

0x8f1: Push("head")
0x8f2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x8f3: Pop(1)
0x8f4: Push(Stack[-1])
0x8f5: IF (Stack[-1] == 0) GOTO 0x8f9; Pop(1)

0x8f6: Push("head")
0x8f7: @ UnlookAsync(Stack[-1])
0x8f8: Pop(1)
0x8f9: Return(); Pop(2)

0x8fa: PushEmpty(int, int, int, int)
0x8fb: Push("voice_common")
0x8fc: @ GetVariable(Stack[-1], Stack[-3])
0x8fd: Pop(1)
0x8fe: Push(Stack[-2])
0x8ff: IF (Stack[-1] == 0) GOTO 0x920; Pop(1)

0x900: PushEmpty(bool, object)
0x901: Stack[-1] = Stack[-7]
0x902: Call2 0x934

0x903: Pop(1)
0x904: Pop(1); Push((bool) Stack[-1] == 0)
0x905: IF (Stack[-1] == 0) GOTO 0x90e; Pop(1)

0x906: PushEmpty(bool, object)
0x907: Stack[-1] = Stack[-7]
0x908: Call2 0x959

0x909: Pop(1)
0x90a: Pop(1); Push((bool) Stack[-1] == 0)
0x90b: IF (Stack[-1] == 0) GOTO 0x90e; Pop(1)

0x90c: Stack[-6] = (bool) 0
0x90d: Return(); Pop(4)

0x90e: Push((int) 2)
0x90f: @ irand(Stack[-2], Stack[-1])
0x910: Pop(1)
0x911: Push(Stack[-1])
0x912: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x913: Push("voice_common")
0x914: Push((int) 1)
0x915: Pop(1); Push(Stack[-4] + Stack[-1]);
0x916: Push((int) 3)
0x917: Pop(2); Push(Stack[-2] % Stack[-1]);
0x918: @ SetVariable(Stack[-2], Stack[-1])
0x919: Pop(2)
0x91a: GOTO 0x91f

0x91b: Push("voice_common")
0x91c: Push((int) 0)
0x91d: @ SetVariable(Stack[-2], Stack[-1])
0x91e: Pop(2)
0x91f: GOTO 0x932

0x920: PushEmpty(bool, object)
0x921: Stack[-1] = Stack[-7]
0x922: Call2 0x959

0x923: Pop(1)
0x924: Pop(1); Push((bool) Stack[-1] == 0)
0x925: IF (Stack[-1] == 0) GOTO 0x92e; Pop(1)

0x926: PushEmpty(bool, object)
0x927: Stack[-1] = Stack[-7]
0x928: Call2 0x934

0x929: Pop(1)
0x92a: Pop(1); Push((bool) Stack[-1] == 0)
0x92b: IF (Stack[-1] == 0) GOTO 0x92e; Pop(1)

0x92c: Stack[-6] = (bool) 0
0x92d: Return(); Pop(4)

0x92e: Push("voice_common")
0x92f: Push((int) 1)
0x930: @ SetVariable(Stack[-2], Stack[-1])
0x931: Pop(2)
0x932: Stack[-6] = (bool) 1
0x933: Return(); Pop(4)

0x934: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x935: Stack[-5] = "c"
0x936: Stack[-4] = (int) 0
0x937: Push((int) 1)
0x938: IF (Stack[-1] == 0) GOTO 0x944; Pop(1)

0x939: Push((int) 1)
0x93a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x93b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x93c: @@ HasProperty(Stack[-1], Stack[-4])
0x93d: Pop(1)
0x93e: Pop(0); Push((bool) Stack[-3] == 0)
0x93f: IF (Stack[-1] == 0) GOTO 0x941; Pop(1)

0x940: GOTO 0x944

0x941: Push((int) 1)
0x942: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x943: GOTO 0x937

0x944: Pop(0); Push((bool) Stack[-4] == 0)
0x945: IF (Stack[-1] == 0) GOTO 0x948; Pop(1)

0x946: Stack[-12] = (bool) 0
0x947: Return(); Pop(10)

0x948: Stack[-2] = (int) 0
0x949: Push((int) 1)
0x94a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x94b: IF (Stack[-1] == 0) GOTO 0x94e; Pop(1)

0x94c: @ irand(Stack[-2], Stack[-4])
0x94d: Pop(0)
0x94e: Push((int) 1)
0x94f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x950: Pop(1); Push(Stack[-6] + Stack[-1]);
0x951: @@ GetProperty(Stack[-1], Stack[-2])
0x952: Pop(1)
0x953: PushEmpty(bool, string)
0x954: Stack[-1] = Stack[-3]
0x955: Call2 0x9a3

0x956: Stack[-14] = Stack[-2]
0x957: Pop(2)
0x958: Return(); Pop(10)

0x959: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x95a: Push("d")
0x95b: PushEmpty(int)
0x95c: Call2 0x9df

0x95d: Pop(0)
0x95e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x95f: Push("m")
0x960: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x961: Stack[-4] = (int) 0
0x962: Push((int) 1)
0x963: IF (Stack[-1] == 0) GOTO 0x96f; Pop(1)

0x964: Push((int) 1)
0x965: Pop(1); Push(Stack[-5] + Stack[-1]);
0x966: Pop(1); Push(Stack[-6] + Stack[-1]);
0x967: @@ HasProperty(Stack[-1], Stack[-4])
0x968: Pop(1)
0x969: Pop(0); Push((bool) Stack[-3] == 0)
0x96a: IF (Stack[-1] == 0) GOTO 0x96c; Pop(1)

0x96b: GOTO 0x96f

0x96c: Push((int) 1)
0x96d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x96e: GOTO 0x962

0x96f: Pop(0); Push((bool) Stack[-4] == 0)
0x970: IF (Stack[-1] == 0) GOTO 0x973; Pop(1)

0x971: Stack[-12] = (bool) 0
0x972: Return(); Pop(10)

0x973: Stack[-2] = (int) 0
0x974: Push((int) 1)
0x975: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x976: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x977: @ irand(Stack[-2], Stack[-4])
0x978: Pop(0)
0x979: Push((int) 1)
0x97a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x97b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x97c: @@ GetProperty(Stack[-1], Stack[-2])
0x97d: Pop(1)
0x97e: PushEmpty(bool, string)
0x97f: Stack[-1] = Stack[-3]
0x980: Call2 0x9a3

0x981: Stack[-14] = Stack[-2]
0x982: Pop(2)
0x983: Return(); Pop(10)

0x984: PushEmpty(bool, float, float, bool, float, float)
0x985: @ lshHasAnimation(Stack[-3], Stack[-7])
0x986: Pop(0)
0x987: Push(Stack[-3])
0x988: IF (Stack[-1] == 0) GOTO 0x98f; Pop(1)

0x989: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x98a: Pop(0)
0x98b: Push((bool) 0)
0x98c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x98d: Pop(1)
0x98e: GOTO 0x993

0x98f: Push("Can't find lsh animation : ")
0x990: Pop(1); Push(Stack[-1] + Stack[-8]);
0x991: @ Trace(Stack[-1])
0x992: Pop(1)
0x993: Return(); Pop(6)

0x994: PushEmpty(bool, float, float, bool, float, float)
0x995: @ lshHasAnimation(Stack[-3], Stack[-8])
0x996: Pop(0)
0x997: Push(Stack[-3])
0x998: IF (Stack[-1] == 0) GOTO 0x99e; Pop(1)

0x999: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x99a: Pop(0)
0x99b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x99c: Pop(0)
0x99d: GOTO 0x9a2

0x99e: Push("Can't find lsh animation : ")
0x99f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x9a0: @ Trace(Stack[-1])
0x9a1: Pop(1)
0x9a2: Return(); Pop(6)

0x9a3: PushEmpty(bool, bool)
0x9a4: PushEmpty(bool)
0x9a5: Call2 0xa0e

0x9a6: Pop(0)
0x9a7: IF (Stack[-1] == 0) GOTO 0x9b0; Pop(1)

0x9a8: @ lshHasSpeech(Stack[-1], Stack[-3])
0x9a9: Pop(0)
0x9aa: Push(Stack[-1])
0x9ab: IF (Stack[-1] == 0) GOTO 0x9b0; Pop(1)

0x9ac: @ lshPlaySpeech(Stack[-3])
0x9ad: Pop(0)
0x9ae: Stack[-4] = (bool) 1
0x9af: Return(); Pop(2)

0x9b0: Stack[-4] = (bool) 0
0x9b1: Return(); Pop(2)

0x9b2: PushEmpty(bool)
0x9b3: Call2 0xa0e

0x9b4: Pop(0)
0x9b5: IF (Stack[-1] == 0) GOTO 0x9b8; Pop(1)

0x9b6: @ lshStopSpeech()
0x9b7: Pop(0)
0x9b8: Return(); Pop(0)

0x9b9: PushEmpty(object, object)
0x9ba: @ self(Stack[-1])
0x9bb: Pop(0)
0x9bc: Stack[-3] = Stack[-1]
0x9bd: Return(); Pop(2)

0x9be: Stack[-1] = 0
0x9bf: PushEmpty(float, float)
0x9c0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x9c1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x9c2: Push((float)0.0)
0x9c3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x9c4: IF (Stack[-1] == 0) GOTO 0x9c7; Pop(1)

0x9c5: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x9c6: Return(); Pop(2)

0x9c7: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x9c8: Return(); Pop(2)

0x9c9: PushEmpty(int, int)
0x9ca: @ GetVariable(Stack[-3], Stack[-1])
0x9cb: Pop(0)
0x9cc: Stack[-4] = Stack[-1]
0x9cd: Return(); Pop(2)

0x9ce: PushEmpty(object, object)
0x9cf: @ FindActor(Stack[-1], Stack[-4])
0x9d0: Pop(0)
0x9d1: Pop(0); Push((bool) Stack[-1] == 0)
0x9d2: IF (Stack[-1] == 0) GOTO 0x9d5; Pop(1)

0x9d3: Stack[-5] = (bool) 0
0x9d4: Return(); Pop(2)

0x9d5: @ Trigger(Stack[-1], Stack[-3])
0x9d6: Pop(0)
0x9d7: Stack[-5] = (bool) 1
0x9d8: Return(); Pop(2)

0x9d9: Stack[-1] = 0
0x9da: PushEmpty(float, float)
0x9db: @ GetGameTime(Stack[-1])
0x9dc: Pop(0)
0x9dd: Stack[-3] = Stack[-1]
0x9de: Return(); Pop(2)

0x9df: PushEmpty(float, float)
0x9e0: @ GetGameTime(Stack[-1])
0x9e1: Pop(0)
0x9e2: Push((int) 1)
0x9e3: PushEmpty(int)
0x9e4: Push((int) 24)
0x9e5: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x9e6: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x9e7: Return(); Pop(2)

0x9e8: PushEmpty()
0x9e9: PushEmpty(int)
0x9ea: Call2 0x9df

0x9eb: Pop(0)
0x9ec: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x9ed: Return(); Pop(0)

0x9ee: PushEmpty(string, string)
0x9ef: Stack[-1] = "idle"
0x9f0: Push(Stack[-3])
0x9f1: IF (Stack[-1] == 0) GOTO 0x9f3; Pop(1)

0x9f2: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x9f3: Stack[-4] = Stack[-1]
0x9f4: Return(); Pop(2)

0x9f5: PushEmpty(int, bool, int, bool)
0x9f6: Stack[-2] = (int) 0
0x9f7: Push("all")
0x9f8: PushEmpty(string, int)
0x9f9: Stack[-1] = Stack[-5]
0x9fa: Call2 0x9ee

0x9fb: Pop(1)
0x9fc: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x9fd: Pop(2)
0x9fe: Pop(0); Push((bool) Stack[-1] == 0)
0x9ff: IF (Stack[-1] == 0) GOTO 0xa01; Pop(1)

0xa00: GOTO 0xa04

0xa01: Push((int) 1)
0xa02: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xa03: GOTO 0x9f7

0xa04: Stack[-5] = Stack[-2]
0xa05: Return(); Pop(4)

0xa06: Stack[-1] = (int) 515541
0xa07: Return(); Pop(0)

0xa08: Stack[-1] = (int) 502866
0xa09: Return(); Pop(0)

0xa0a: Stack[-1] = "ui/NPC_Lara.png"
0xa0b: Return(); Pop(0)

0xa0c: Stack[-1] = "ui/NPC_Lara_b.png"
0xa0d: Return(); Pop(0)

0xa0e: Stack[-1] = (bool) 1
0xa0f: Return(); Pop(0)

0xa10: PushEmpty(object, object)
0xa11: Push("b4q01")
0xa12: Push((int) 2)
0xa13: @ SetVariable(Stack[-2], Stack[-1])
0xa14: Pop(2)
0xa15: PushEmpty(object)
0xa16: Call2 0xad1

0xa17: Stack[-2] = Stack[-1]
0xa18: Pop(1)
0xa19: Push("b4q01LaraGotoRubin")
0xa1a: Push("pt_map_warehouse_gangster")
0xa1b: Push((int) 1)
0xa1c: Push((int) 518593)
0xa1d: PushEmpty(float)
0xa1e: Call2 0x9da

0xa1f: Pop(0)
0xa20: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa21: Pop(5)
0xa22: PushEmpty()
0xa23: Call2 0xa9b

0xa24: Pop(0)
0xa25: PushEmpty(bool, string, string)
0xa26: Stack[-2] = "quest_b4_01"
0xa27: Stack[-1] = "place_rubin"
0xa28: Call2 0x9ce

0xa29: Pop(3)
0xa2a: Return(); Pop(2)

0xa2b: Stack[-1] = 0
0xa2c: PushEmpty()
0xa2d: Push("b4q01LaraWasBadRep")
0xa2e: Push((int) 1)
0xa2f: @ SetVariable(Stack[-2], Stack[-1])
0xa30: Pop(2)
0xa31: Return(); Pop(0)

0xa32: PushEmpty()
0xa33: Push("oob4Lara1")
0xa34: Push((int) 1)
0xa35: @ SetVariable(Stack[-2], Stack[-1])
0xa36: Pop(2)
0xa37: Return(); Pop(0)

0xa38: PushEmpty()
0xa39: Push("oob8Lara1")
0xa3a: Push((int) 1)
0xa3b: @ SetVariable(Stack[-2], Stack[-1])
0xa3c: Pop(2)
0xa3d: Return(); Pop(0)

0xa3e: PushEmpty()
0xa3f: PushEmpty(object, string, float)
0xa40: PushEmpty(object)
0xa41: Call2 0xad1

0xa42: Stack[-4] = Stack[-1]
0xa43: Pop(1)
0xa44: Stack[-2] = "pt_map_warehouse_gangster"
0xa45: Stack[-1] = (int) 2
0xa46: Call2 0xae2

0xa47: Pop(3)
0xa48: PushEmpty(object)
0xa49: Call2 0xad1

0xa4a: Pop(0)
0xa4b: @@ ShowMap(Stack[-1])
0xa4c: Pop(1)
0xa4d: Return(); Pop(0)

0xa4e: PushEmpty()
0xa4f: PushEmpty(int, string)
0xa50: Stack[-1] = "b8q02"
0xa51: Call2 0x9c9

0xa52: Pop(1)
0xa53: Push((int) 1)
0xa54: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa55: IF (Stack[-1] == 0) GOTO 0xa58; Pop(1)

0xa56: Stack[-2] = (bool) 1
0xa57: Return(); Pop(0)

0xa58: Stack[-2] = (bool) 0
0xa59: Return(); Pop(0)

0xa5a: PushEmpty()
0xa5b: PushEmpty(int, string)
0xa5c: Stack[-1] = "oob8Lara1"
0xa5d: Call2 0x9c9

0xa5e: Pop(1)
0xa5f: Push((int) 0)
0xa60: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa61: IF (Stack[-1] == 0) GOTO 0xa64; Pop(1)

0xa62: Stack[-2] = (bool) 1
0xa63: Return(); Pop(0)

0xa64: Stack[-2] = (bool) 0
0xa65: Return(); Pop(0)

0xa66: PushEmpty()
0xa67: PushEmpty(bool, object)
0xa68: Stack[-1] = Stack[-3]
0xa69: Call2 0xa94

0xa6a: Pop(1)
0xa6b: IF (Stack[-1] == 0) GOTO 0xa6e; Pop(1)

0xa6c: Stack[-2] = (bool) 1
0xa6d: Return(); Pop(0)

0xa6e: Stack[-2] = (bool) 0
0xa6f: Return(); Pop(0)

0xa70: PushEmpty()
0xa71: PushEmpty(int, string)
0xa72: Stack[-1] = "b4q01"
0xa73: Call2 0x9c9

0xa74: Pop(1)
0xa75: Push((int) 1)
0xa76: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa77: IF (Stack[-1] == 0) GOTO 0xa7a; Pop(1)

0xa78: Stack[-2] = (bool) 1
0xa79: Return(); Pop(0)

0xa7a: Stack[-2] = (bool) 0
0xa7b: Return(); Pop(0)

0xa7c: PushEmpty()
0xa7d: PushEmpty(int, string)
0xa7e: Stack[-1] = "b4q01LaraWasBadRep"
0xa7f: Call2 0x9c9

0xa80: Pop(1)
0xa81: Push((int) 1)
0xa82: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa83: IF (Stack[-1] == 0) GOTO 0xa86; Pop(1)

0xa84: Stack[-2] = (bool) 1
0xa85: Return(); Pop(0)

0xa86: Stack[-2] = (bool) 0
0xa87: Return(); Pop(0)

0xa88: PushEmpty()
0xa89: PushEmpty(int, string)
0xa8a: Stack[-1] = "oob4Lara1"
0xa8b: Call2 0x9c9

0xa8c: Pop(1)
0xa8d: Push((int) 0)
0xa8e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa8f: IF (Stack[-1] == 0) GOTO 0xa92; Pop(1)

0xa90: Stack[-2] = (bool) 1
0xa91: Return(); Pop(0)

0xa92: Stack[-2] = (bool) 0
0xa93: Return(); Pop(0)

0xa94: PushEmpty(float, float)
0xa95: Push("reputation")
0xa96: @@ GetProperty(Stack[-1], Stack[-2])
0xa97: Pop(1)
0xa98: Push((float)0.7)
0xa99: Stack[-5] = Stack[-2] >= Stack[-1]; Pop(1);
0xa9a: Return(); Pop(2)

0xa9b: PushEmpty(object, object)
0xa9c: Push((int) 218)
0xa9d: Push((int) 1)
0xa9e: Push((int) 518596)
0xa9f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xaa0: Pop(3)
0xaa1: PushEmpty(bool, object, int)
0xaa2: Stack[-2] = Stack[-4]
0xaa3: Stack[-1] = (int) 216
0xaa4: Call2 0xab5

0xaa5: Pop(3)
0xaa6: Return(); Pop(2)

0xaa7: Stack[-1] = 0
0xaa8: PushEmpty(object, object)
0xaa9: @ GetDiaryRoot(Stack[-1])
0xaaa: Pop(0)
0xaab: Pop(0); Push((bool) Stack[-1] == 0)
0xaac: IF (Stack[-1] == 0) GOTO 0xab2; Pop(1)

0xaad: Push("Can't retrieve diary root")
0xaae: @ Trace(Stack[-1])
0xaaf: Pop(1)
0xab0: Stack[-3] = (bool) 0
0xab1: Return(); Pop(2)

0xab2: Stack[-3] = Stack[-1]
0xab3: Return(); Pop(2)

0xab4: Stack[-1] = 0
0xab5: PushEmpty(object, object, int, object, object, int)
0xab6: PushEmpty(object)
0xab7: Call2 0xaa8

0xab8: Stack[-4] = Stack[-1]
0xab9: Pop(1)
0xaba: @@ Find(Stack[-7], Stack[-2])
0xabb: Pop(0)
0xabc: Pop(0); Push((bool) Stack[-2] == 0)
0xabd: IF (Stack[-1] == 0) GOTO 0xac4; Pop(1)

0xabe: Push("Can't find diary parent with id: ")
0xabf: Pop(1); Push(Stack[-1] + Stack[-8]);
0xac0: @ Trace(Stack[-1])
0xac1: Pop(1)
0xac2: Stack[-9] = (bool) 0
0xac3: Return(); Pop(6)

0xac4: @@ AddChild(Stack[-8])
0xac5: Pop(0)
0xac6: Push((int) 7)
0xac7: @ SendWorldWndMessage(Stack[-1])
0xac8: Pop(1)
0xac9: @@ GetCategory(Stack[-1])
0xaca: Pop(0)
0xacb: @ SetDiarySection(Stack[-1])
0xacc: Pop(0)
0xacd: Stack[-9] = (bool) 0
0xace: Return(); Pop(6)

0xacf: Stack[-2] = 0
0xad0: Stack[-3] = 0
0xad1: PushEmpty(object, object, object, object)
0xad2: @ GetMainOutdoorScene(Stack[-2])
0xad3: Pop(0)
0xad4: Pop(0); Push((bool) Stack[-2] == 0)
0xad5: IF (Stack[-1] == 0) GOTO 0xadc; Pop(1)

0xad6: Push("Can't find main outdoor scene")
0xad7: @ Trace(Stack[-1])
0xad8: Pop(1)
0xad9: Stack[-1] = 0
0xada: Stack[-5] = Stack[-1]
0xadb: Return(); Pop(4)

0xadc: @@ GetMap(Stack[-1])
0xadd: Pop(0)
0xade: Stack[-5] = Stack[-1]
0xadf: Return(); Pop(4)

0xae0: Stack[-1] = 0
0xae1: Stack[-2] = 0
0xae2: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xae3: @ GetMainOutdoorScene(Stack[-2])
0xae4: Pop(0)
0xae5: Pop(0); Push((bool) Stack[-2] == 0)
0xae6: IF (Stack[-1] == 0) GOTO 0xaeb; Pop(1)

0xae7: Push("Can't find main outdoor scene")
0xae8: @ Trace(Stack[-1])
0xae9: Pop(1)
0xaea: Return(); Pop(8)

0xaeb: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xaec: Pop(0)
0xaed: Pop(0); Push((bool) Stack[-1] == 0)
0xaee: IF (Stack[-1] == 0) GOTO 0xaf5; Pop(1)

0xaef: Push("Warning: outdoor scene locator ")
0xaf0: Pop(1); Push(Stack[-1] + Stack[-11]);
0xaf1: Push(" doesnt exist")
0xaf2: Pop(2); Push(Stack[-2] + Stack[-1]);
0xaf3: @ Trace(Stack[-1])
0xaf4: Pop(1)
0xaf5: @@ GetMap(Stack[-11])
0xaf6: Pop(0)
0xaf7: Pop(0); Push((bool) Stack[-11] == 0)
0xaf8: IF (Stack[-1] == 0) GOTO 0xafd; Pop(1)

0xaf9: Push("Can't find map")
0xafa: @ Trace(Stack[-1])
0xafb: Pop(1)
0xafc: Return(); Pop(8)

0xafd: Push(CvectorIndex(Stack[-4], 0))
0xafe: Push(CvectorIndex(Stack[-5], 2))
0xaff: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xb00: Pop(2)
0xb01: Return(); Pop(8)

0xb02: Stack[-2] = 0
0xb03: PushEmpty(int, int)
0xb04: Push("branch")
0xb05: @ GetVariable(Stack[-1], Stack[-2])
0xb06: Pop(1)
0xb07: Push((int) 0)
0xb08: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb09: IF (Stack[-1] == 0) GOTO 0xb0d; Pop(1)

0xb0a: Stack[-3] = (int) 1
0xb0b: Return(); Pop(2)

0xb0c: GOTO 0xb12

0xb0d: Push((int) 1)
0xb0e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb0f: IF (Stack[-1] == 0) GOTO 0xb12; Pop(1)

0xb10: Stack[-3] = (int) 2
0xb11: Return(); Pop(2)

0xb12: Stack[-3] = (int) 3
0xb13: Return(); Pop(2)

0xb14: PushEmpty()
0xb15: Push(GlobalVars[1])
0xb16: Pop(1); Push((bool) Stack[-1] == 0)
0xb17: IF (Stack[-1] == 0) GOTO 0xb21; Pop(1)

0xb18: PushEmpty(int, object)
0xb19: Stack[-1] = Stack[-3]
0xb1a: Push(-2, 1); TaskCall(0)
0xb1b: Call2 0x0

0xb1c: Pop(-2, 1); TaskReturn
0xb1d: Pop(2)
0xb1e: Push(GlobalVars[1])
0xb1f: Stack[-1] = (bool) 1
0xb20: GlobalVars[1] = Stack[-1]; Pop(1)
0xb21: PushEmpty(bool, int)
0xb22: Stack[-1] = (int) 4
0xb23: Call2 0x9e8

0xb24: Pop(1)
0xb25: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb26: PushEmpty(int, object)
0xb27: Stack[-1] = Stack[-3]
0xb28: Push(-2, 1); TaskCall(2)
0xb29: Call2 0xcb

0xb2a: Pop(-2, 1); TaskReturn
0xb2b: Pop(2)
0xb2c: Return(); Pop(0)

0xb2d: PushEmpty(bool, int)
0xb2e: Stack[-1] = (int) 8
0xb2f: Call2 0x9e8

0xb30: Pop(1)
0xb31: IF (Stack[-1] == 0) GOTO 0xb39; Pop(1)

0xb32: PushEmpty(int, object)
0xb33: Stack[-1] = Stack[-3]
0xb34: Push(-2, 1); TaskCall(4)
0xb35: Call2 0x399

0xb36: Pop(-2, 1); TaskReturn
0xb37: Pop(2)
0xb38: Return(); Pop(0)

0xb39: PushEmpty(bool, int)
0xb3a: Stack[-1] = (int) 10
0xb3b: Call2 0x9e8

0xb3c: Pop(1)
0xb3d: IF (Stack[-1] == 0) GOTO 0xb45; Pop(1)

0xb3e: PushEmpty(int, object)
0xb3f: Stack[-1] = Stack[-3]
0xb40: Push(-2, 1); TaskCall(6)
0xb41: Call2 0x4f1

0xb42: Pop(-2, 1); TaskReturn
0xb43: Pop(2)
0xb44: Return(); Pop(0)

0xb45: PushEmpty(bool)
0xb46: Stack[-1] = (bool) 0
0xb47: PushEmpty(bool, int)
0xb48: Stack[-1] = (int) 12
0xb49: Call2 0x9e8

0xb4a: Pop(1)
0xb4b: IF (Stack[-1] == 0) GOTO 0xb50; Pop(1)

0xb4c: Push(GlobalVars[2])
0xb4d: Pop(1); Push((bool) Stack[-1] == 0)
0xb4e: IF (Stack[-1] == 0) GOTO 0xb50; Pop(1)

0xb4f: Stack[-1] = (bool) 1
0xb50: IF (Stack[-1] == 0) GOTO 0xb5b; Pop(1)

0xb51: PushEmpty(int, object)
0xb52: Stack[-1] = Stack[-3]
0xb53: Push(-2, 1); TaskCall(8)
0xb54: Call2 0x5b2

0xb55: Pop(-2, 1); TaskReturn
0xb56: Pop(2)
0xb57: Push(GlobalVars[2])
0xb58: Stack[-1] = (bool) 1
0xb59: GlobalVars[2] = Stack[-1]; Pop(1)
0xb5a: Return(); Pop(0)

0xb5b: PushEmpty(int, object)
0xb5c: Stack[-1] = Stack[-3]
0xb5d: Push(-2, 1); TaskCall(10)
0xb5e: Call2 0x6b5

0xb5f: Pop(-2, 1); TaskReturn
0xb60: Pop(2)
0xb61: Return(); Pop(0)

