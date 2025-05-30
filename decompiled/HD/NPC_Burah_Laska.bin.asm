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
	Autizm
	Welldie
	Pain
	player
	GetPosition
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	Can't find lsh animation : 
	HasItem
	reputation
	add
	ui/NPC_Laska.png
	ui/NPC_Laska_b.png
	oob6Laska1
	oob1Laska4
	b1LaskaGotoMishka
	pt_map_mishka
	AddMark
	oob12Laska1
	ShowMap
	pt_map_gorbun
	oob1Laska1
	b1q02
	b1q02LaskaGotoGorbin
	b1q02LaskaSelf
	pt_map_laska
	b1q02_blood
	RemoveItemByType
	quest_b1_02
	agony_cured
	completed
	oob1Laska2
	oob1Laska3
	fail
	b6q01KlaraLaska
	b1q05
	b1q02_dead
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
	mt_laska

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
	GetInvItemByName (2 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x7d7
RunTask = 10

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x11b Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x464 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x57b Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x679 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x7ad Vars = (int, int)
	GTASK_10 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x820 Vars = (int)
		EVENT_6 Op = 0x846 Vars = ()
		EVENT_5 Op = 0x855 Vars = ()
		EVENT_45 Op = 0x862 Vars = (bool)
		EVENT_0 Op = 0x86e Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x919

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xabd

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xabb

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xabf

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xac1

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xc89

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
0x31: Call2 0xa2f

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x970

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
0x48: Call2 0x95e

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
0x56: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0xba0

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0xbd6

0x61: Pop(1)
0x62: Pop(1); Push((bool) Stack[-1] == 0)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x66: PushEmpty(object, object)
0x67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x69: Call2 0xb15

0x6a: Pop(2)
0x6b: PushEmpty(string)
0x6c: Stack[-1] = "Neutral"
0x6d: Call2 0x105

0x6e: Pop(1)
0x6f: Push((int) 517892)
0x70: @@ SetMessage(Stack[-1])
0x71: Pop(1)
0x72: @@ ClearReplies()
0x73: Pop(0)
0x74: Push((int) 519614)
0x75: Push((int) 20800)
0x76: Push((int) 20799)
0x77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78: Pop(3)
0x79: Push((int) 520399)
0x7a: Push((int) 21606)
0x7b: Push((int) 21605)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: GOTO 0xe7

0x7f: PushEmpty(string)
0x80: Stack[-1] = "Neutral"
0x81: Call2 0x105

0x82: Pop(1)
0x83: Push((int) 517901)
0x84: @@ SetMessage(Stack[-1])
0x85: Pop(1)
0x86: @@ ClearReplies()
0x87: Pop(0)
0x88: PushEmpty(bool)
0x89: Stack[-1] = (bool) 0
0x8a: PushEmpty(bool, object)
0x8b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c: Call2 0xbac

0x8d: Pop(1)
0x8e: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8f: PushEmpty(bool, object)
0x90: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91: Call2 0xbd6

0x92: Pop(1)
0x93: Pop(1); Push((bool) Stack[-1] == 0)
0x94: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x95: Stack[-1] = (bool) 1
0x96: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x97: Push((int) 517902)
0x98: Push((int) 19042)
0x99: Push((int) 19040)
0x9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b: Pop(3)
0x9c: PushEmpty(bool)
0x9d: Stack[-1] = (bool) 0
0x9e: PushEmpty(bool)
0x9f: Stack[-1] = (bool) 0
0xa0: PushEmpty(bool, object)
0xa1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa2: Call2 0xbb8

0xa3: Pop(1)
0xa4: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa5: PushEmpty(bool, object)
0xa6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa7: Call2 0xbca

0xa8: Pop(1)
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: Stack[-1] = (bool) 1
0xab: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xac: PushEmpty(bool, object)
0xad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xae: Call2 0xbd6

0xaf: Pop(1)
0xb0: Pop(1); Push((bool) Stack[-1] == 0)
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: Stack[-1] = (bool) 1
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: Push((int) 517906)
0xb5: Push((int) 19045)
0xb6: Push((int) 19044)
0xb7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8: Pop(3)
0xb9: PushEmpty(bool)
0xba: Stack[-1] = (bool) 0
0xbb: PushEmpty(bool, object)
0xbc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbd: Call2 0xbd6

0xbe: Pop(1)
0xbf: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc0: PushEmpty(bool, object)
0xc1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc2: Call2 0xbe2

0xc3: Pop(1)
0xc4: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc5: Stack[-1] = (bool) 1
0xc6: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc7: Push((int) 517978)
0xc8: Push((int) 20805)
0xc9: Push((int) 19111)
0xca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb: Pop(3)
0xcc: PushEmpty(bool)
0xcd: Stack[-1] = (bool) 0
0xce: PushEmpty(bool, object)
0xcf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Call2 0xb70

0xd1: Pop(1)
0xd2: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd3: PushEmpty(bool, object)
0xd4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Call2 0xb88

0xd6: Pop(1)
0xd7: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd8: Stack[-1] = (bool) 1
0xd9: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xda: Push((int) 527102)
0xdb: Push((int) 28401)
0xdc: Push((int) 28400)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Push((int) 517903)
0xe0: Push((int) -1)
0xe1: Push((int) 19041)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: GOTO 0xe7

0xe5: Return(); Pop(0)

0xe6: GOTO 0x55

0xe7: PushEmpty(bool)
0xe8: Call2 0xac3

0xe9: Pop(0)
0xea: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xeb: @ lshWaitForAnimEnd()
0xec: Pop(0)
0xed: Push( Stack[3 + Tasks[-1].StackPointer] )
0xee: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xef: GOTO 0xf5

0xf0: PushEmpty(string)
0xf1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xf2: Call2 0x9fa

0xf3: Pop(1)
0xf4: GOTO 0xeb

0xf5: GOTO 0x104

0xf6: Push("all")
0xf7: Push("idle")
0xf8: @ PlayAnimation(Stack[-2], Stack[-1])
0xf9: Pop(2)
0xfa: @ WaitForAnimEnd()
0xfb: Pop(0)
0xfc: Push( Stack[3 + Tasks[-1].StackPointer] )
0xfd: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfe: GOTO 0x104

0xff: Push("all")
0x100: Push("idle")
0x101: @ PlayAnimation(Stack[-2], Stack[-1])
0x102: Pop(2)
0x103: GOTO 0xfa

0x104: Return(); Pop(0)

0x105: PushEmpty()
0x106: PushEmpty(bool)
0x107: Call2 0xac3

0x108: Pop(0)
0x109: Pop(1); Push((bool) Stack[-1] == 0)
0x10a: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x10b: Return(); Pop(0)

0x10c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x10d: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10e: Return(); Pop(0)

0x10f: PushEmpty(string, bool)
0x110: Stack[-2] = Stack[-3]
0x111: Push("")
0x112: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x114: Stack[-1] = (bool) 0
0x115: GOTO 0x117

0x116: Stack[-1] = (bool) 1
0x117: Call2 0xa0a

0x118: Pop(2)
0x119: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x11a: Return(); Pop(0)

0x11b: PushEmpty()
0x11c: Push((int) 1)
0x11d: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x11e: PushEmpty()
0x11f: Call2 0xa28

0x120: Pop(0)
0x121: Push((int) 19038)
0x122: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x124: PushEmpty(object, object)
0x125: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x126: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x127: Call2 0xb1b

0x128: Pop(2)
0x129: PushEmpty(object, object)
0x12a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12c: Call2 0xb05

0x12d: Pop(2)
0x12e: Push((int) 20803)
0x12f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x131: PushEmpty(object, object)
0x132: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x133: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x134: Call2 0xb1b

0x135: Pop(2)
0x136: PushEmpty(object, object)
0x137: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x138: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x139: Call2 0xb05

0x13a: Pop(2)
0x13b: Push((int) 21611)
0x13c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x13e: PushEmpty(object, object)
0x13f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x140: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x141: Call2 0xb1b

0x142: Pop(2)
0x143: PushEmpty(object, object)
0x144: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x145: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x146: Call2 0xb05

0x147: Pop(2)
0x148: Push((int) 19043)
0x149: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x14b: PushEmpty(object, object)
0x14c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14e: Call2 0xb1b

0x14f: Pop(2)
0x150: PushEmpty(object, object)
0x151: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x152: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x153: Call2 0xb05

0x154: Pop(2)
0x155: Push((int) 19044)
0x156: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x158: PushEmpty(object, object)
0x159: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15b: Call2 0xb51

0x15c: Pop(2)
0x15d: Push((int) 19046)
0x15e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x160: PushEmpty(object, object)
0x161: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x162: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x163: Call2 0xb3e

0x164: Pop(2)
0x165: PushEmpty(object, object)
0x166: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x167: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x168: Call2 0xaf7

0x169: Pop(2)
0x16a: Push((int) 19111)
0x16b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16d: PushEmpty(object, object)
0x16e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x16f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x170: Call2 0xb57

0x171: Pop(2)
0x172: Push((int) 19113)
0x173: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x175: PushEmpty(object, object)
0x176: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x177: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x178: Call2 0xafe

0x179: Pop(2)
0x17a: PushEmpty(object, object)
0x17b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x17c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17d: Call2 0xb64

0x17e: Pop(2)
0x17f: PushEmpty(object, object)
0x180: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x181: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x182: Call2 0xb5d

0x183: Pop(2)
0x184: Push((int) 28400)
0x185: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x186: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x187: PushEmpty(object, object)
0x188: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x189: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x18a: Call2 0xacb

0x18b: Pop(2)
0x18c: Push((int) 28410)
0x18d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x18f: PushEmpty(object, object)
0x190: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x191: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x192: Call2 0xad1

0x193: Pop(2)
0x194: PushEmpty(object, object)
0x195: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x196: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x197: Call2 0xae7

0x198: Pop(2)
0x199: Push((int) 28411)
0x19a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x19c: PushEmpty(object, object)
0x19d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x19e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x19f: Call2 0xad1

0x1a0: Pop(2)
0x1a1: PushEmpty(object, object)
0x1a2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a4: Call2 0xae7

0x1a5: Pop(2)
0x1a6: Push((int) 19030)
0x1a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x1a9: PushEmpty(bool)
0x1aa: Stack[-1] = (bool) 0
0x1ab: PushEmpty(bool, object)
0x1ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ad: Call2 0xba0

0x1ae: Pop(1)
0x1af: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b0: PushEmpty(bool, object)
0x1b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b2: Call2 0xbd6

0x1b3: Pop(1)
0x1b4: Pop(1); Push((bool) Stack[-1] == 0)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b6: Stack[-1] = (bool) 1
0x1b7: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1b8: PushEmpty(object, object)
0x1b9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bb: Call2 0xb15

0x1bc: Pop(2)
0x1bd: PushEmpty(string)
0x1be: Stack[-1] = "Neutral"
0x1bf: Call2 0x105

0x1c0: Pop(1)
0x1c1: Push((int) 517892)
0x1c2: @@ SetMessage(Stack[-1])
0x1c3: Pop(1)
0x1c4: @@ ClearReplies()
0x1c5: Pop(0)
0x1c6: Push((int) 519614)
0x1c7: Push((int) 20800)
0x1c8: Push((int) 20799)
0x1c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ca: Pop(3)
0x1cb: Push((int) 520399)
0x1cc: Push((int) 21606)
0x1cd: Push((int) 21605)
0x1ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cf: Pop(3)
0x1d0: Return(); Pop(0)

0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = "Neutral"
0x1d3: Call2 0x105

0x1d4: Pop(1)
0x1d5: Push((int) 517901)
0x1d6: @@ SetMessage(Stack[-1])
0x1d7: Pop(1)
0x1d8: @@ ClearReplies()
0x1d9: Pop(0)
0x1da: PushEmpty(bool)
0x1db: Stack[-1] = (bool) 0
0x1dc: PushEmpty(bool, object)
0x1dd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1de: Call2 0xbac

0x1df: Pop(1)
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e1: PushEmpty(bool, object)
0x1e2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e3: Call2 0xbd6

0x1e4: Pop(1)
0x1e5: Pop(1); Push((bool) Stack[-1] == 0)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e7: Stack[-1] = (bool) 1
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e9: Push((int) 517902)
0x1ea: Push((int) 19042)
0x1eb: Push((int) 19040)
0x1ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ed: Pop(3)
0x1ee: PushEmpty(bool)
0x1ef: Stack[-1] = (bool) 0
0x1f0: PushEmpty(bool)
0x1f1: Stack[-1] = (bool) 0
0x1f2: PushEmpty(bool, object)
0x1f3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f4: Call2 0xbb8

0x1f5: Pop(1)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f7: PushEmpty(bool, object)
0x1f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f9: Call2 0xbca

0x1fa: Pop(1)
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fc: Stack[-1] = (bool) 1
0x1fd: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1fe: PushEmpty(bool, object)
0x1ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x200: Call2 0xbd6

0x201: Pop(1)
0x202: Pop(1); Push((bool) Stack[-1] == 0)
0x203: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x204: Stack[-1] = (bool) 1
0x205: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x206: Push((int) 517906)
0x207: Push((int) 19045)
0x208: Push((int) 19044)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: PushEmpty(bool)
0x20c: Stack[-1] = (bool) 0
0x20d: PushEmpty(bool, object)
0x20e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20f: Call2 0xbd6

0x210: Pop(1)
0x211: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x212: PushEmpty(bool, object)
0x213: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x214: Call2 0xbe2

0x215: Pop(1)
0x216: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x217: Stack[-1] = (bool) 1
0x218: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x219: Push((int) 517978)
0x21a: Push((int) 20805)
0x21b: Push((int) 19111)
0x21c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21d: Pop(3)
0x21e: PushEmpty(bool)
0x21f: Stack[-1] = (bool) 0
0x220: PushEmpty(bool, object)
0x221: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x222: Call2 0xb70

0x223: Pop(1)
0x224: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x225: PushEmpty(bool, object)
0x226: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x227: Call2 0xb88

0x228: Pop(1)
0x229: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x22a: Stack[-1] = (bool) 1
0x22b: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22c: Push((int) 527102)
0x22d: Push((int) 28401)
0x22e: Push((int) 28400)
0x22f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x230: Pop(3)
0x231: Push((int) 517903)
0x232: Push((int) -1)
0x233: Push((int) 19041)
0x234: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x235: Pop(3)
0x236: Return(); Pop(0)

0x237: Push((int) 28401)
0x238: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x23a: PushEmpty(string)
0x23b: Stack[-1] = "Autizm"
0x23c: Call2 0x105

0x23d: Pop(1)
0x23e: Push((int) 527103)
0x23f: @@ SetMessage(Stack[-1])
0x240: Pop(1)
0x241: @@ ClearReplies()
0x242: Pop(0)
0x243: Push((int) 527104)
0x244: Push((int) 28403)
0x245: Push((int) 28402)
0x246: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x247: Pop(3)
0x248: Return(); Pop(0)

0x249: Push((int) 28403)
0x24a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24b: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x24c: PushEmpty(string)
0x24d: Stack[-1] = "Autizm"
0x24e: Call2 0x105

0x24f: Pop(1)
0x250: Push((int) 527105)
0x251: @@ SetMessage(Stack[-1])
0x252: Pop(1)
0x253: @@ ClearReplies()
0x254: Pop(0)
0x255: Push((int) 527106)
0x256: Push((int) 28405)
0x257: Push((int) 28404)
0x258: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x259: Pop(3)
0x25a: Return(); Pop(0)

0x25b: Push((int) 28405)
0x25c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x25e: PushEmpty(string)
0x25f: Stack[-1] = "Autizm"
0x260: Call2 0x105

0x261: Pop(1)
0x262: Push((int) 527107)
0x263: @@ SetMessage(Stack[-1])
0x264: Pop(1)
0x265: @@ ClearReplies()
0x266: Pop(0)
0x267: Push((int) 527108)
0x268: Push((int) 28407)
0x269: Push((int) 28406)
0x26a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26b: Pop(3)
0x26c: Return(); Pop(0)

0x26d: Push((int) 28407)
0x26e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x270: PushEmpty(string)
0x271: Stack[-1] = "Welldie"
0x272: Call2 0x105

0x273: Pop(1)
0x274: Push((int) 527109)
0x275: @@ SetMessage(Stack[-1])
0x276: Pop(1)
0x277: @@ ClearReplies()
0x278: Pop(0)
0x279: Push((int) 527110)
0x27a: Push((int) 28409)
0x27b: Push((int) 28408)
0x27c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27d: Pop(3)
0x27e: Return(); Pop(0)

0x27f: Push((int) 28409)
0x280: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x282: PushEmpty(string)
0x283: Stack[-1] = "Welldie"
0x284: Call2 0x105

0x285: Pop(1)
0x286: Push((int) 527111)
0x287: @@ SetMessage(Stack[-1])
0x288: Pop(1)
0x289: @@ ClearReplies()
0x28a: Pop(0)
0x28b: Push((int) 527112)
0x28c: Push((int) -1)
0x28d: Push((int) 28410)
0x28e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28f: Pop(3)
0x290: Push((int) 527113)
0x291: Push((int) -1)
0x292: Push((int) 28411)
0x293: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x294: Pop(3)
0x295: Return(); Pop(0)

0x296: Push((int) 20805)
0x297: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x299: PushEmpty(string)
0x29a: Stack[-1] = "Pain"
0x29b: Call2 0x105

0x29c: Pop(1)
0x29d: Push((int) 519620)
0x29e: @@ SetMessage(Stack[-1])
0x29f: Pop(1)
0x2a0: @@ ClearReplies()
0x2a1: Pop(0)
0x2a2: Push((int) 519621)
0x2a3: Push((int) 20808)
0x2a4: Push((int) 20806)
0x2a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a6: Pop(3)
0x2a7: Push((int) 520405)
0x2a8: Push((int) 20808)
0x2a9: Push((int) 21612)
0x2aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ab: Pop(3)
0x2ac: Push((int) 519622)
0x2ad: Push((int) 20808)
0x2ae: Push((int) 20807)
0x2af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b0: Pop(3)
0x2b1: Return(); Pop(0)

0x2b2: Push((int) 20808)
0x2b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2b5: PushEmpty(string)
0x2b6: Stack[-1] = "Pain"
0x2b7: Call2 0x105

0x2b8: Pop(1)
0x2b9: Push((int) 519623)
0x2ba: @@ SetMessage(Stack[-1])
0x2bb: Pop(1)
0x2bc: @@ ClearReplies()
0x2bd: Pop(0)
0x2be: Push((int) 517980)
0x2bf: Push((int) -1)
0x2c0: Push((int) 19113)
0x2c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c2: Pop(3)
0x2c3: Return(); Pop(0)

0x2c4: Push((int) 19045)
0x2c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2c7: PushEmpty(string)
0x2c8: Stack[-1] = "Welldie"
0x2c9: Call2 0x105

0x2ca: Pop(1)
0x2cb: Push((int) 517907)
0x2cc: @@ SetMessage(Stack[-1])
0x2cd: Pop(1)
0x2ce: @@ ClearReplies()
0x2cf: Pop(0)
0x2d0: Push((int) 517908)
0x2d1: Push((int) -1)
0x2d2: Push((int) 19046)
0x2d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d4: Pop(3)
0x2d5: Return(); Pop(0)

0x2d6: Push((int) 19042)
0x2d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2d9: PushEmpty(string)
0x2da: Stack[-1] = "Welldie"
0x2db: Call2 0x105

0x2dc: Pop(1)
0x2dd: Push((int) 517904)
0x2de: @@ SetMessage(Stack[-1])
0x2df: Pop(1)
0x2e0: @@ ClearReplies()
0x2e1: Pop(0)
0x2e2: Push((int) 520402)
0x2e3: Push((int) 21610)
0x2e4: Push((int) 21609)
0x2e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e6: Pop(3)
0x2e7: Push((int) 517905)
0x2e8: Push((int) -1)
0x2e9: Push((int) 19043)
0x2ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2eb: Pop(3)
0x2ec: Return(); Pop(0)

0x2ed: Push((int) 21610)
0x2ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2f0: PushEmpty(string)
0x2f1: Stack[-1] = "Welldie"
0x2f2: Call2 0x105

0x2f3: Pop(1)
0x2f4: Push((int) 520403)
0x2f5: @@ SetMessage(Stack[-1])
0x2f6: Pop(1)
0x2f7: @@ ClearReplies()
0x2f8: Pop(0)
0x2f9: Push((int) 520404)
0x2fa: Push((int) -1)
0x2fb: Push((int) 21611)
0x2fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fd: Pop(3)
0x2fe: Return(); Pop(0)

0x2ff: Push((int) 21606)
0x300: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x301: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x302: PushEmpty(string)
0x303: Stack[-1] = "Pain"
0x304: Call2 0x105

0x305: Pop(1)
0x306: Push((int) 520400)
0x307: @@ SetMessage(Stack[-1])
0x308: Pop(1)
0x309: @@ ClearReplies()
0x30a: Pop(0)
0x30b: Push((int) 520401)
0x30c: Push((int) 20800)
0x30d: Push((int) 21607)
0x30e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30f: Pop(3)
0x310: Return(); Pop(0)

0x311: Push((int) 20800)
0x312: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x313: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x314: PushEmpty(string)
0x315: Stack[-1] = "Pain"
0x316: Call2 0x105

0x317: Pop(1)
0x318: Push((int) 519615)
0x319: @@ SetMessage(Stack[-1])
0x31a: Pop(1)
0x31b: @@ ClearReplies()
0x31c: Pop(0)
0x31d: Push((int) 517896)
0x31e: Push((int) 19035)
0x31f: Push((int) 19034)
0x320: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x321: Pop(3)
0x322: Push((int) 517893)
0x323: Push((int) 19032)
0x324: Push((int) 19031)
0x325: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x326: Pop(3)
0x327: Push((int) 520398)
0x328: Push((int) -1)
0x329: Push((int) 21604)
0x32a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32b: Pop(3)
0x32c: Return(); Pop(0)

0x32d: Push((int) 19032)
0x32e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32f: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x330: PushEmpty(string)
0x331: Stack[-1] = "Pain"
0x332: Call2 0x105

0x333: Pop(1)
0x334: Push((int) 517894)
0x335: @@ SetMessage(Stack[-1])
0x336: Pop(1)
0x337: @@ ClearReplies()
0x338: Pop(0)
0x339: Push((int) 517895)
0x33a: Push((int) -1)
0x33b: Push((int) 19033)
0x33c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33d: Pop(3)
0x33e: Return(); Pop(0)

0x33f: Push((int) 19035)
0x340: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x342: PushEmpty(string)
0x343: Stack[-1] = "Autizm"
0x344: Call2 0x105

0x345: Pop(1)
0x346: Push((int) 517897)
0x347: @@ SetMessage(Stack[-1])
0x348: Pop(1)
0x349: @@ ClearReplies()
0x34a: Pop(0)
0x34b: Push((int) 517898)
0x34c: Push((int) 19037)
0x34d: Push((int) 19036)
0x34e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34f: Pop(3)
0x350: Push((int) 527070)
0x351: Push((int) 28367)
0x352: Push((int) 28366)
0x353: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x354: Pop(3)
0x355: Return(); Pop(0)

0x356: Push((int) 28367)
0x357: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x359: PushEmpty(string)
0x35a: Stack[-1] = "Autizm"
0x35b: Call2 0x105

0x35c: Pop(1)
0x35d: Push((int) 527071)
0x35e: @@ SetMessage(Stack[-1])
0x35f: Pop(1)
0x360: @@ ClearReplies()
0x361: Pop(0)
0x362: Push((int) 527072)
0x363: Push((int) 28369)
0x364: Push((int) 28368)
0x365: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x366: Pop(3)
0x367: Return(); Pop(0)

0x368: Push((int) 28369)
0x369: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x36b: PushEmpty(string)
0x36c: Stack[-1] = "Autizm"
0x36d: Call2 0x105

0x36e: Pop(1)
0x36f: Push((int) 527073)
0x370: @@ SetMessage(Stack[-1])
0x371: Pop(1)
0x372: @@ ClearReplies()
0x373: Pop(0)
0x374: Push((int) 527074)
0x375: Push((int) 19037)
0x376: Push((int) 28370)
0x377: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x378: Pop(3)
0x379: Return(); Pop(0)

0x37a: Push((int) 19037)
0x37b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37c: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x37d: PushEmpty(string)
0x37e: Stack[-1] = "Autizm"
0x37f: Call2 0x105

0x380: Pop(1)
0x381: Push((int) 517899)
0x382: @@ SetMessage(Stack[-1])
0x383: Pop(1)
0x384: @@ ClearReplies()
0x385: Pop(0)
0x386: Push((int) 517900)
0x387: Push((int) -1)
0x388: Push((int) 19038)
0x389: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38a: Pop(3)
0x38b: Push((int) 519616)
0x38c: Push((int) 20802)
0x38d: Push((int) 20801)
0x38e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38f: Pop(3)
0x390: Return(); Pop(0)

0x391: Push((int) 20802)
0x392: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x394: PushEmpty(string)
0x395: Stack[-1] = "Autizm"
0x396: Call2 0x105

0x397: Pop(1)
0x398: Push((int) 519617)
0x399: @@ SetMessage(Stack[-1])
0x39a: Pop(1)
0x39b: @@ ClearReplies()
0x39c: Pop(0)
0x39d: Push((int) 519618)
0x39e: Push((int) -1)
0x39f: Push((int) 20803)
0x3a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a1: Pop(3)
0x3a2: Push((int) 519619)
0x3a3: Push((int) -1)
0x3a4: Push((int) 20804)
0x3a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a6: Pop(3)
0x3a7: Return(); Pop(0)

0x3a8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3a9: PushEmpty(bool)
0x3aa: Call2 0xac3

0x3ab: Pop(0)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ad: @ lshStopAnimation()
0x3ae: Pop(0)
0x3af: GOTO 0x3b2

0x3b0: @ StopAnimation()
0x3b1: Pop(0)
0x3b2: Return(); Pop(0)

0x3b3: GOTO 0x11c

0x3b4: Return(); Pop(0)

0x3b5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3b6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3b7: PushEmpty(bool, object, float)
0x3b8: Stack[-2] = Stack[-12]
0x3b9: Stack[-1] = (float) 70.0
0x3ba: Call2 0x919

0x3bb: Pop(2)
0x3bc: Pop(1); Push((bool) Stack[-1] == 0)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3be: Stack[-10] = (int) -2
0x3bf: Return(); Pop(8)

0x3c0: @ CreateDialog(Stack[-4])
0x3c1: Pop(0)
0x3c2: PushEmpty(int)
0x3c3: Call2 0xabd

0x3c4: Pop(0)
0x3c5: @@ SetNPCName(Stack[-1])
0x3c6: Pop(1)
0x3c7: PushEmpty(int)
0x3c8: Call2 0xabb

0x3c9: Pop(0)
0x3ca: @@ SetNPCDescription(Stack[-1])
0x3cb: Pop(1)
0x3cc: PushEmpty(string)
0x3cd: Call2 0xabf

0x3ce: Pop(0)
0x3cf: @@ SetPhoto(Stack[-1])
0x3d0: Pop(1)
0x3d1: PushEmpty(string)
0x3d2: Call2 0xac1

0x3d3: Pop(0)
0x3d4: @@ SetPhoto2(Stack[-1])
0x3d5: Pop(1)
0x3d6: PushEmpty(int)
0x3d7: Call2 0xc89

0x3d8: Pop(0)
0x3d9: @@ SetPlayerName(Stack[-1])
0x3da: Pop(1)
0x3db: Stack[-2] = (int) -1
0x3dc: @ IsOverrideActive(Stack[-3])
0x3dd: Pop(0)
0x3de: Push(Stack[-3])
0x3df: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3e0: Stack[-10] = (int) -2
0x3e1: Return(); Pop(8)

0x3e2: @ DoDialog(Stack[-4])
0x3e3: Pop(0)
0x3e4: PushEmpty(bool, object)
0x3e5: PushEmpty(object)
0x3e6: Call2 0xa2f

0x3e7: Stack[-2] = Stack[-1]
0x3e8: Pop(1)
0x3e9: Call2 0x970

0x3ea: Pop(2)
0x3eb: PushEmpty(object, object)
0x3ec: Stack[-2] = Stack[-11]
0x3ed: Stack[-1] = Stack[-6]
0x3ee: Push(-2, 4); TaskCall(3)
0x3ef: Call2 0x406

0x3f0: Pop(-2, 4); TaskReturn
0x3f1: Pop(2)
0x3f2: @@ IsDialogEnd(Stack[-1])
0x3f3: Pop(0)
0x3f4: Pop(0); Push((bool) Stack[-1] == 0)
0x3f5: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3f6: @ sync()
0x3f7: Pop(0)
0x3f8: @@ IsDialogEnd(Stack[-1])
0x3f9: Pop(0)
0x3fa: GOTO 0x3f4

0x3fb: PushEmpty(object)
0x3fc: Stack[-1] = Stack[-10]
0x3fd: Call2 0x95e

0x3fe: Pop(1)
0x3ff: @ StopDialog(Stack[-4])
0x400: Pop(0)
0x401: @@ GetReturnValue(Stack[-2])
0x402: Pop(0)
0x403: Stack[-10] = Stack[-2]
0x404: Return(); Pop(8)

0x405: Stack[-4] = 0
0x406: PushEmpty()
0x407: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x408: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x409: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x40a: Push((int) 1)
0x40b: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x40c: PushEmpty(string)
0x40d: Stack[-1] = "Welldie"
0x40e: Call2 0x44e

0x40f: Pop(1)
0x410: Push((int) 520656)
0x411: @@ SetMessage(Stack[-1])
0x412: Pop(1)
0x413: @@ ClearReplies()
0x414: Pop(0)
0x415: PushEmpty(bool)
0x416: Stack[-1] = (bool) 0
0x417: PushEmpty(bool, object)
0x418: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x419: Call2 0xbee

0x41a: Pop(1)
0x41b: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x41c: PushEmpty(bool, object)
0x41d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x41e: Call2 0xb7c

0x41f: Pop(1)
0x420: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x421: Stack[-1] = (bool) 1
0x422: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x423: Push((int) 520657)
0x424: Push((int) 21869)
0x425: Push((int) 21868)
0x426: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x427: Pop(3)
0x428: Push((int) 520664)
0x429: Push((int) -1)
0x42a: Push((int) 21875)
0x42b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42c: Pop(3)
0x42d: GOTO 0x430

0x42e: Return(); Pop(0)

0x42f: GOTO 0x40a

0x430: PushEmpty(bool)
0x431: Call2 0xac3

0x432: Pop(0)
0x433: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x434: @ lshWaitForAnimEnd()
0x435: Pop(0)
0x436: Push( Stack[3 + Tasks[-1].StackPointer] )
0x437: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x438: GOTO 0x43e

0x439: PushEmpty(string)
0x43a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x43b: Call2 0x9fa

0x43c: Pop(1)
0x43d: GOTO 0x434

0x43e: GOTO 0x44d

0x43f: Push("all")
0x440: Push("idle")
0x441: @ PlayAnimation(Stack[-2], Stack[-1])
0x442: Pop(2)
0x443: @ WaitForAnimEnd()
0x444: Pop(0)
0x445: Push( Stack[3 + Tasks[-1].StackPointer] )
0x446: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x447: GOTO 0x44d

0x448: Push("all")
0x449: Push("idle")
0x44a: @ PlayAnimation(Stack[-2], Stack[-1])
0x44b: Pop(2)
0x44c: GOTO 0x443

0x44d: Return(); Pop(0)

0x44e: PushEmpty()
0x44f: PushEmpty(bool)
0x450: Call2 0xac3

0x451: Pop(0)
0x452: Pop(1); Push((bool) Stack[-1] == 0)
0x453: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x454: Return(); Pop(0)

0x455: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x456: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x457: Return(); Pop(0)

0x458: PushEmpty(string, bool)
0x459: Stack[-2] = Stack[-3]
0x45a: Push("")
0x45b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x45c: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45d: Stack[-1] = (bool) 0
0x45e: GOTO 0x460

0x45f: Stack[-1] = (bool) 1
0x460: Call2 0xa0a

0x461: Pop(2)
0x462: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x463: Return(); Pop(0)

0x464: PushEmpty()
0x465: Push((int) 1)
0x466: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x467: PushEmpty()
0x468: Call2 0xa28

0x469: Pop(0)
0x46a: Push((int) 21868)
0x46b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x46d: PushEmpty(object, object)
0x46e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x46f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x470: Call2 0xac5

0x471: Pop(2)
0x472: Push((int) 21867)
0x473: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x474: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x475: PushEmpty(string)
0x476: Stack[-1] = "Welldie"
0x477: Call2 0x44e

0x478: Pop(1)
0x479: Push((int) 520656)
0x47a: @@ SetMessage(Stack[-1])
0x47b: Pop(1)
0x47c: @@ ClearReplies()
0x47d: Pop(0)
0x47e: PushEmpty(bool)
0x47f: Stack[-1] = (bool) 0
0x480: PushEmpty(bool, object)
0x481: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x482: Call2 0xbee

0x483: Pop(1)
0x484: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x485: PushEmpty(bool, object)
0x486: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x487: Call2 0xb7c

0x488: Pop(1)
0x489: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x48a: Stack[-1] = (bool) 1
0x48b: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x48c: Push((int) 520657)
0x48d: Push((int) 21869)
0x48e: Push((int) 21868)
0x48f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x490: Pop(3)
0x491: Push((int) 520664)
0x492: Push((int) -1)
0x493: Push((int) 21875)
0x494: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x495: Pop(3)
0x496: Return(); Pop(0)

0x497: Push((int) 21869)
0x498: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x499: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x49a: PushEmpty(string)
0x49b: Stack[-1] = "Welldie"
0x49c: Call2 0x44e

0x49d: Pop(1)
0x49e: Push((int) 520658)
0x49f: @@ SetMessage(Stack[-1])
0x4a0: Pop(1)
0x4a1: @@ ClearReplies()
0x4a2: Pop(0)
0x4a3: Push((int) 520659)
0x4a4: Push((int) 21871)
0x4a5: Push((int) 21870)
0x4a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a7: Pop(3)
0x4a8: Return(); Pop(0)

0x4a9: Push((int) 21871)
0x4aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ab: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4ac: PushEmpty(string)
0x4ad: Stack[-1] = "Autizm"
0x4ae: Call2 0x44e

0x4af: Pop(1)
0x4b0: Push((int) 520660)
0x4b1: @@ SetMessage(Stack[-1])
0x4b2: Pop(1)
0x4b3: @@ ClearReplies()
0x4b4: Pop(0)
0x4b5: Push((int) 520661)
0x4b6: Push((int) 21873)
0x4b7: Push((int) 21872)
0x4b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b9: Pop(3)
0x4ba: Return(); Pop(0)

0x4bb: Push((int) 21873)
0x4bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4be: PushEmpty(string)
0x4bf: Stack[-1] = "Autizm"
0x4c0: Call2 0x44e

0x4c1: Pop(1)
0x4c2: Push((int) 520662)
0x4c3: @@ SetMessage(Stack[-1])
0x4c4: Pop(1)
0x4c5: @@ ClearReplies()
0x4c6: Pop(0)
0x4c7: Push((int) 520663)
0x4c8: Push((int) -1)
0x4c9: Push((int) 21874)
0x4ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cb: Pop(3)
0x4cc: Return(); Pop(0)

0x4cd: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4ce: PushEmpty(bool)
0x4cf: Call2 0xac3

0x4d0: Pop(0)
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d2: @ lshStopAnimation()
0x4d3: Pop(0)
0x4d4: GOTO 0x4d7

0x4d5: @ StopAnimation()
0x4d6: Pop(0)
0x4d7: Return(); Pop(0)

0x4d8: GOTO 0x465

0x4d9: Return(); Pop(0)

0x4da: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4db: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4dc: PushEmpty(bool, object, float)
0x4dd: Stack[-2] = Stack[-12]
0x4de: Stack[-1] = (float) 70.0
0x4df: Call2 0x919

0x4e0: Pop(2)
0x4e1: Pop(1); Push((bool) Stack[-1] == 0)
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e3: Stack[-10] = (int) -2
0x4e4: Return(); Pop(8)

0x4e5: @ CreateDialog(Stack[-4])
0x4e6: Pop(0)
0x4e7: PushEmpty(int)
0x4e8: Call2 0xabd

0x4e9: Pop(0)
0x4ea: @@ SetNPCName(Stack[-1])
0x4eb: Pop(1)
0x4ec: PushEmpty(int)
0x4ed: Call2 0xabb

0x4ee: Pop(0)
0x4ef: @@ SetNPCDescription(Stack[-1])
0x4f0: Pop(1)
0x4f1: PushEmpty(string)
0x4f2: Call2 0xabf

0x4f3: Pop(0)
0x4f4: @@ SetPhoto(Stack[-1])
0x4f5: Pop(1)
0x4f6: PushEmpty(string)
0x4f7: Call2 0xac1

0x4f8: Pop(0)
0x4f9: @@ SetPhoto2(Stack[-1])
0x4fa: Pop(1)
0x4fb: PushEmpty(int)
0x4fc: Call2 0xc89

0x4fd: Pop(0)
0x4fe: @@ SetPlayerName(Stack[-1])
0x4ff: Pop(1)
0x500: Stack[-2] = (int) -1
0x501: @ IsOverrideActive(Stack[-3])
0x502: Pop(0)
0x503: Push(Stack[-3])
0x504: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x505: Stack[-10] = (int) -2
0x506: Return(); Pop(8)

0x507: @ DoDialog(Stack[-4])
0x508: Pop(0)
0x509: PushEmpty(bool, object)
0x50a: PushEmpty(object)
0x50b: Call2 0xa2f

0x50c: Stack[-2] = Stack[-1]
0x50d: Pop(1)
0x50e: Call2 0x970

0x50f: Pop(2)
0x510: PushEmpty(object, object)
0x511: Stack[-2] = Stack[-11]
0x512: Stack[-1] = Stack[-6]
0x513: Push(-2, 4); TaskCall(5)
0x514: Call2 0x52b

0x515: Pop(-2, 4); TaskReturn
0x516: Pop(2)
0x517: @@ IsDialogEnd(Stack[-1])
0x518: Pop(0)
0x519: Pop(0); Push((bool) Stack[-1] == 0)
0x51a: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51b: @ sync()
0x51c: Pop(0)
0x51d: @@ IsDialogEnd(Stack[-1])
0x51e: Pop(0)
0x51f: GOTO 0x519

0x520: PushEmpty(object)
0x521: Stack[-1] = Stack[-10]
0x522: Call2 0x95e

0x523: Pop(1)
0x524: @ StopDialog(Stack[-4])
0x525: Pop(0)
0x526: @@ GetReturnValue(Stack[-2])
0x527: Pop(0)
0x528: Stack[-10] = Stack[-2]
0x529: Return(); Pop(8)

0x52a: Stack[-4] = 0
0x52b: PushEmpty()
0x52c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x52d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x52e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x52f: Push((int) 1)
0x530: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x531: PushEmpty(string)
0x532: Stack[-1] = "Neutral"
0x533: Call2 0x565

0x534: Pop(1)
0x535: Push((int) 520750)
0x536: @@ SetMessage(Stack[-1])
0x537: Pop(1)
0x538: @@ ClearReplies()
0x539: Pop(0)
0x53a: Push((int) 520751)
0x53b: Push((int) 21964)
0x53c: Push((int) 21963)
0x53d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53e: Pop(3)
0x53f: Push((int) 520755)
0x540: Push((int) 21968)
0x541: Push((int) 21967)
0x542: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x543: Pop(3)
0x544: GOTO 0x547

0x545: Return(); Pop(0)

0x546: GOTO 0x52f

0x547: PushEmpty(bool)
0x548: Call2 0xac3

0x549: Pop(0)
0x54a: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x54b: @ lshWaitForAnimEnd()
0x54c: Pop(0)
0x54d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x54e: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54f: GOTO 0x555

0x550: PushEmpty(string)
0x551: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x552: Call2 0x9fa

0x553: Pop(1)
0x554: GOTO 0x54b

0x555: GOTO 0x564

0x556: Push("all")
0x557: Push("idle")
0x558: @ PlayAnimation(Stack[-2], Stack[-1])
0x559: Pop(2)
0x55a: @ WaitForAnimEnd()
0x55b: Pop(0)
0x55c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x55d: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55e: GOTO 0x564

0x55f: Push("all")
0x560: Push("idle")
0x561: @ PlayAnimation(Stack[-2], Stack[-1])
0x562: Pop(2)
0x563: GOTO 0x55a

0x564: Return(); Pop(0)

0x565: PushEmpty()
0x566: PushEmpty(bool)
0x567: Call2 0xac3

0x568: Pop(0)
0x569: Pop(1); Push((bool) Stack[-1] == 0)
0x56a: IF (Stack[-1] == 0) GOTO 0x56c; Pop(1)

0x56b: Return(); Pop(0)

0x56c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x56d: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x56e: Return(); Pop(0)

0x56f: PushEmpty(string, bool)
0x570: Stack[-2] = Stack[-3]
0x571: Push("")
0x572: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x573: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x574: Stack[-1] = (bool) 0
0x575: GOTO 0x577

0x576: Stack[-1] = (bool) 1
0x577: Call2 0xa0a

0x578: Pop(2)
0x579: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x57a: Return(); Pop(0)

0x57b: PushEmpty()
0x57c: Push((int) 1)
0x57d: IF (Stack[-1] == 0) GOTO 0x5cd; Pop(1)

0x57e: PushEmpty()
0x57f: Call2 0xa28

0x580: Pop(0)
0x581: Push((int) 21962)
0x582: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x583: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x584: PushEmpty(string)
0x585: Stack[-1] = "Neutral"
0x586: Call2 0x565

0x587: Pop(1)
0x588: Push((int) 520750)
0x589: @@ SetMessage(Stack[-1])
0x58a: Pop(1)
0x58b: @@ ClearReplies()
0x58c: Pop(0)
0x58d: Push((int) 520751)
0x58e: Push((int) 21964)
0x58f: Push((int) 21963)
0x590: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x591: Pop(3)
0x592: Push((int) 520755)
0x593: Push((int) 21968)
0x594: Push((int) 21967)
0x595: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x596: Pop(3)
0x597: Return(); Pop(0)

0x598: Push((int) 21968)
0x599: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59a: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x59b: PushEmpty(string)
0x59c: Stack[-1] = "Neutral"
0x59d: Call2 0x565

0x59e: Pop(1)
0x59f: Push((int) 520756)
0x5a0: @@ SetMessage(Stack[-1])
0x5a1: Pop(1)
0x5a2: @@ ClearReplies()
0x5a3: Pop(0)
0x5a4: Push((int) 520757)
0x5a5: Push((int) 21964)
0x5a6: Push((int) 21969)
0x5a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a8: Pop(3)
0x5a9: Return(); Pop(0)

0x5aa: Push((int) 21964)
0x5ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ac: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5ad: PushEmpty(string)
0x5ae: Stack[-1] = "Neutral"
0x5af: Call2 0x565

0x5b0: Pop(1)
0x5b1: Push((int) 520752)
0x5b2: @@ SetMessage(Stack[-1])
0x5b3: Pop(1)
0x5b4: @@ ClearReplies()
0x5b5: Pop(0)
0x5b6: Push((int) 520753)
0x5b7: Push((int) -1)
0x5b8: Push((int) 21965)
0x5b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ba: Pop(3)
0x5bb: Push((int) 520754)
0x5bc: Push((int) -1)
0x5bd: Push((int) 21966)
0x5be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bf: Pop(3)
0x5c0: Return(); Pop(0)

0x5c1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5c2: PushEmpty(bool)
0x5c3: Call2 0xac3

0x5c4: Pop(0)
0x5c5: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c6: @ lshStopAnimation()
0x5c7: Pop(0)
0x5c8: GOTO 0x5cb

0x5c9: @ StopAnimation()
0x5ca: Pop(0)
0x5cb: Return(); Pop(0)

0x5cc: GOTO 0x57c

0x5cd: Return(); Pop(0)

0x5ce: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5cf: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5d0: PushEmpty(bool, object, float)
0x5d1: Stack[-2] = Stack[-12]
0x5d2: Stack[-1] = (float) 70.0
0x5d3: Call2 0x919

0x5d4: Pop(2)
0x5d5: Pop(1); Push((bool) Stack[-1] == 0)
0x5d6: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d7: Stack[-10] = (int) -2
0x5d8: Return(); Pop(8)

0x5d9: @ CreateDialog(Stack[-4])
0x5da: Pop(0)
0x5db: PushEmpty(int)
0x5dc: Call2 0xabd

0x5dd: Pop(0)
0x5de: @@ SetNPCName(Stack[-1])
0x5df: Pop(1)
0x5e0: PushEmpty(int)
0x5e1: Call2 0xabb

0x5e2: Pop(0)
0x5e3: @@ SetNPCDescription(Stack[-1])
0x5e4: Pop(1)
0x5e5: PushEmpty(string)
0x5e6: Call2 0xabf

0x5e7: Pop(0)
0x5e8: @@ SetPhoto(Stack[-1])
0x5e9: Pop(1)
0x5ea: PushEmpty(string)
0x5eb: Call2 0xac1

0x5ec: Pop(0)
0x5ed: @@ SetPhoto2(Stack[-1])
0x5ee: Pop(1)
0x5ef: PushEmpty(int)
0x5f0: Call2 0xc89

0x5f1: Pop(0)
0x5f2: @@ SetPlayerName(Stack[-1])
0x5f3: Pop(1)
0x5f4: Stack[-2] = (int) -1
0x5f5: @ IsOverrideActive(Stack[-3])
0x5f6: Pop(0)
0x5f7: Push(Stack[-3])
0x5f8: IF (Stack[-1] == 0) GOTO 0x5fb; Pop(1)

0x5f9: Stack[-10] = (int) -2
0x5fa: Return(); Pop(8)

0x5fb: @ DoDialog(Stack[-4])
0x5fc: Pop(0)
0x5fd: PushEmpty(bool, object)
0x5fe: PushEmpty(object)
0x5ff: Call2 0xa2f

0x600: Stack[-2] = Stack[-1]
0x601: Pop(1)
0x602: Call2 0x970

0x603: Pop(2)
0x604: PushEmpty(object, object)
0x605: Stack[-2] = Stack[-11]
0x606: Stack[-1] = Stack[-6]
0x607: Push(-2, 4); TaskCall(7)
0x608: Call2 0x61f

0x609: Pop(-2, 4); TaskReturn
0x60a: Pop(2)
0x60b: @@ IsDialogEnd(Stack[-1])
0x60c: Pop(0)
0x60d: Pop(0); Push((bool) Stack[-1] == 0)
0x60e: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x60f: @ sync()
0x610: Pop(0)
0x611: @@ IsDialogEnd(Stack[-1])
0x612: Pop(0)
0x613: GOTO 0x60d

0x614: PushEmpty(object)
0x615: Stack[-1] = Stack[-10]
0x616: Call2 0x95e

0x617: Pop(1)
0x618: @ StopDialog(Stack[-4])
0x619: Pop(0)
0x61a: @@ GetReturnValue(Stack[-2])
0x61b: Pop(0)
0x61c: Stack[-10] = Stack[-2]
0x61d: Return(); Pop(8)

0x61e: Stack[-4] = 0
0x61f: PushEmpty()
0x620: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x621: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x622: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x623: Push((int) 1)
0x624: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x625: PushEmpty(string)
0x626: Stack[-1] = "Welldie"
0x627: Call2 0x663

0x628: Pop(1)
0x629: Push((int) 535253)
0x62a: @@ SetMessage(Stack[-1])
0x62b: Pop(1)
0x62c: @@ ClearReplies()
0x62d: Pop(0)
0x62e: PushEmpty(bool, object)
0x62f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x630: Call2 0xb94

0x631: Pop(1)
0x632: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x633: Push((int) 535254)
0x634: Push((int) 37026)
0x635: Push((int) 36929)
0x636: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x637: Pop(3)
0x638: Push((int) 535341)
0x639: Push((int) -1)
0x63a: Push((int) 37024)
0x63b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63c: Pop(3)
0x63d: Push((int) 535342)
0x63e: Push((int) -1)
0x63f: Push((int) 37025)
0x640: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x641: Pop(3)
0x642: GOTO 0x645

0x643: Return(); Pop(0)

0x644: GOTO 0x623

0x645: PushEmpty(bool)
0x646: Call2 0xac3

0x647: Pop(0)
0x648: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x649: @ lshWaitForAnimEnd()
0x64a: Pop(0)
0x64b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x64c: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x64d: GOTO 0x653

0x64e: PushEmpty(string)
0x64f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x650: Call2 0x9fa

0x651: Pop(1)
0x652: GOTO 0x649

0x653: GOTO 0x662

0x654: Push("all")
0x655: Push("idle")
0x656: @ PlayAnimation(Stack[-2], Stack[-1])
0x657: Pop(2)
0x658: @ WaitForAnimEnd()
0x659: Pop(0)
0x65a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x65b: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x65c: GOTO 0x662

0x65d: Push("all")
0x65e: Push("idle")
0x65f: @ PlayAnimation(Stack[-2], Stack[-1])
0x660: Pop(2)
0x661: GOTO 0x658

0x662: Return(); Pop(0)

0x663: PushEmpty()
0x664: PushEmpty(bool)
0x665: Call2 0xac3

0x666: Pop(0)
0x667: Pop(1); Push((bool) Stack[-1] == 0)
0x668: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x669: Return(); Pop(0)

0x66a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x66b: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x66c: Return(); Pop(0)

0x66d: PushEmpty(string, bool)
0x66e: Stack[-2] = Stack[-3]
0x66f: Push("")
0x670: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x671: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x672: Stack[-1] = (bool) 0
0x673: GOTO 0x675

0x674: Stack[-1] = (bool) 1
0x675: Call2 0xa0a

0x676: Pop(2)
0x677: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x678: Return(); Pop(0)

0x679: PushEmpty()
0x67a: Push((int) 1)
0x67b: IF (Stack[-1] == 0) GOTO 0x70b; Pop(1)

0x67c: PushEmpty()
0x67d: Call2 0xa28

0x67e: Pop(0)
0x67f: Push((int) 36929)
0x680: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x681: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x682: PushEmpty(object, object)
0x683: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x684: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x685: Call2 0xae1

0x686: Pop(2)
0x687: Push((int) 36928)
0x688: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x689: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x68a: PushEmpty(string)
0x68b: Stack[-1] = "Welldie"
0x68c: Call2 0x663

0x68d: Pop(1)
0x68e: Push((int) 535253)
0x68f: @@ SetMessage(Stack[-1])
0x690: Pop(1)
0x691: @@ ClearReplies()
0x692: Pop(0)
0x693: PushEmpty(bool, object)
0x694: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x695: Call2 0xb94

0x696: Pop(1)
0x697: IF (Stack[-1] == 0) GOTO 0x69d; Pop(1)

0x698: Push((int) 535254)
0x699: Push((int) 37026)
0x69a: Push((int) 36929)
0x69b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69c: Pop(3)
0x69d: Push((int) 535341)
0x69e: Push((int) -1)
0x69f: Push((int) 37024)
0x6a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a1: Pop(3)
0x6a2: Push((int) 535342)
0x6a3: Push((int) -1)
0x6a4: Push((int) 37025)
0x6a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a6: Pop(3)
0x6a7: Return(); Pop(0)

0x6a8: Push((int) 37026)
0x6a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6aa: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x6ab: PushEmpty(string)
0x6ac: Stack[-1] = "Welldie"
0x6ad: Call2 0x663

0x6ae: Pop(1)
0x6af: Push((int) 535343)
0x6b0: @@ SetMessage(Stack[-1])
0x6b1: Pop(1)
0x6b2: @@ ClearReplies()
0x6b3: Pop(0)
0x6b4: Push((int) 535344)
0x6b5: Push((int) 37028)
0x6b6: Push((int) 37027)
0x6b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b8: Pop(3)
0x6b9: Push((int) 535347)
0x6ba: Push((int) 37031)
0x6bb: Push((int) 37030)
0x6bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bd: Pop(3)
0x6be: Return(); Pop(0)

0x6bf: Push((int) 37031)
0x6c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c1: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x6c2: PushEmpty(string)
0x6c3: Stack[-1] = "Welldie"
0x6c4: Call2 0x663

0x6c5: Pop(1)
0x6c6: Push((int) 535348)
0x6c7: @@ SetMessage(Stack[-1])
0x6c8: Pop(1)
0x6c9: @@ ClearReplies()
0x6ca: Pop(0)
0x6cb: Push((int) 535349)
0x6cc: Push((int) 37033)
0x6cd: Push((int) 37032)
0x6ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cf: Pop(3)
0x6d0: Return(); Pop(0)

0x6d1: Push((int) 37033)
0x6d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d3: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6d4: PushEmpty(string)
0x6d5: Stack[-1] = "Welldie"
0x6d6: Call2 0x663

0x6d7: Pop(1)
0x6d8: Push((int) 535350)
0x6d9: @@ SetMessage(Stack[-1])
0x6da: Pop(1)
0x6db: @@ ClearReplies()
0x6dc: Pop(0)
0x6dd: Push((int) 535351)
0x6de: Push((int) 37028)
0x6df: Push((int) 37034)
0x6e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e1: Pop(3)
0x6e2: Push((int) 535352)
0x6e3: Push((int) -1)
0x6e4: Push((int) 37035)
0x6e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e6: Pop(3)
0x6e7: Return(); Pop(0)

0x6e8: Push((int) 37028)
0x6e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ea: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6eb: PushEmpty(string)
0x6ec: Stack[-1] = "Welldie"
0x6ed: Call2 0x663

0x6ee: Pop(1)
0x6ef: Push((int) 535345)
0x6f0: @@ SetMessage(Stack[-1])
0x6f1: Pop(1)
0x6f2: @@ ClearReplies()
0x6f3: Pop(0)
0x6f4: Push((int) 535346)
0x6f5: Push((int) -1)
0x6f6: Push((int) 37029)
0x6f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f8: Pop(3)
0x6f9: Push((int) 535353)
0x6fa: Push((int) -1)
0x6fb: Push((int) 37037)
0x6fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fd: Pop(3)
0x6fe: Return(); Pop(0)

0x6ff: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x700: PushEmpty(bool)
0x701: Call2 0xac3

0x702: Pop(0)
0x703: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x704: @ lshStopAnimation()
0x705: Pop(0)
0x706: GOTO 0x709

0x707: @ StopAnimation()
0x708: Pop(0)
0x709: Return(); Pop(0)

0x70a: GOTO 0x67a

0x70b: Return(); Pop(0)

0x70c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x70d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x70e: PushEmpty(bool, object, float)
0x70f: Stack[-2] = Stack[-12]
0x710: Stack[-1] = (float) 70.0
0x711: Call2 0x919

0x712: Pop(2)
0x713: Pop(1); Push((bool) Stack[-1] == 0)
0x714: IF (Stack[-1] == 0) GOTO 0x717; Pop(1)

0x715: Stack[-10] = (int) -2
0x716: Return(); Pop(8)

0x717: @ CreateDialog(Stack[-4])
0x718: Pop(0)
0x719: PushEmpty(int)
0x71a: Call2 0xabd

0x71b: Pop(0)
0x71c: @@ SetNPCName(Stack[-1])
0x71d: Pop(1)
0x71e: PushEmpty(int)
0x71f: Call2 0xabb

0x720: Pop(0)
0x721: @@ SetNPCDescription(Stack[-1])
0x722: Pop(1)
0x723: PushEmpty(string)
0x724: Call2 0xabf

0x725: Pop(0)
0x726: @@ SetPhoto(Stack[-1])
0x727: Pop(1)
0x728: PushEmpty(string)
0x729: Call2 0xac1

0x72a: Pop(0)
0x72b: @@ SetPhoto2(Stack[-1])
0x72c: Pop(1)
0x72d: PushEmpty(int)
0x72e: Call2 0xc89

0x72f: Pop(0)
0x730: @@ SetPlayerName(Stack[-1])
0x731: Pop(1)
0x732: Stack[-2] = (int) -1
0x733: @ IsOverrideActive(Stack[-3])
0x734: Pop(0)
0x735: Push(Stack[-3])
0x736: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x737: Stack[-10] = (int) -2
0x738: Return(); Pop(8)

0x739: @ DoDialog(Stack[-4])
0x73a: Pop(0)
0x73b: PushEmpty(bool, object)
0x73c: PushEmpty(object)
0x73d: Call2 0xa2f

0x73e: Stack[-2] = Stack[-1]
0x73f: Pop(1)
0x740: Call2 0x970

0x741: Pop(2)
0x742: PushEmpty(object, object)
0x743: Stack[-2] = Stack[-11]
0x744: Stack[-1] = Stack[-6]
0x745: Push(-2, 4); TaskCall(9)
0x746: Call2 0x75d

0x747: Pop(-2, 4); TaskReturn
0x748: Pop(2)
0x749: @@ IsDialogEnd(Stack[-1])
0x74a: Pop(0)
0x74b: Pop(0); Push((bool) Stack[-1] == 0)
0x74c: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x74d: @ sync()
0x74e: Pop(0)
0x74f: @@ IsDialogEnd(Stack[-1])
0x750: Pop(0)
0x751: GOTO 0x74b

0x752: PushEmpty(object)
0x753: Stack[-1] = Stack[-10]
0x754: Call2 0x95e

0x755: Pop(1)
0x756: @ StopDialog(Stack[-4])
0x757: Pop(0)
0x758: @@ GetReturnValue(Stack[-2])
0x759: Pop(0)
0x75a: Stack[-10] = Stack[-2]
0x75b: Return(); Pop(8)

0x75c: Stack[-4] = 0
0x75d: PushEmpty()
0x75e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x75f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x760: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x761: Push((int) 1)
0x762: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x763: PushEmpty(string)
0x764: Stack[-1] = "Neutral"
0x765: Call2 0x797

0x766: Pop(1)
0x767: Push((int) 540551)
0x768: @@ SetMessage(Stack[-1])
0x769: Pop(1)
0x76a: @@ ClearReplies()
0x76b: Pop(0)
0x76c: Push((int) 540552)
0x76d: Push((int) -1)
0x76e: Push((int) 42561)
0x76f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x770: Pop(3)
0x771: Push((int) 540795)
0x772: Push((int) -1)
0x773: Push((int) 42844)
0x774: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x775: Pop(3)
0x776: GOTO 0x779

0x777: Return(); Pop(0)

0x778: GOTO 0x761

0x779: PushEmpty(bool)
0x77a: Call2 0xac3

0x77b: Pop(0)
0x77c: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x77d: @ lshWaitForAnimEnd()
0x77e: Pop(0)
0x77f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x780: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x781: GOTO 0x787

0x782: PushEmpty(string)
0x783: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x784: Call2 0x9fa

0x785: Pop(1)
0x786: GOTO 0x77d

0x787: GOTO 0x796

0x788: Push("all")
0x789: Push("idle")
0x78a: @ PlayAnimation(Stack[-2], Stack[-1])
0x78b: Pop(2)
0x78c: @ WaitForAnimEnd()
0x78d: Pop(0)
0x78e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x78f: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x790: GOTO 0x796

0x791: Push("all")
0x792: Push("idle")
0x793: @ PlayAnimation(Stack[-2], Stack[-1])
0x794: Pop(2)
0x795: GOTO 0x78c

0x796: Return(); Pop(0)

0x797: PushEmpty()
0x798: PushEmpty(bool)
0x799: Call2 0xac3

0x79a: Pop(0)
0x79b: Pop(1); Push((bool) Stack[-1] == 0)
0x79c: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x79d: Return(); Pop(0)

0x79e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x79f: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x7a0: Return(); Pop(0)

0x7a1: PushEmpty(string, bool)
0x7a2: Stack[-2] = Stack[-3]
0x7a3: Push("")
0x7a4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7a5: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a6: Stack[-1] = (bool) 0
0x7a7: GOTO 0x7a9

0x7a8: Stack[-1] = (bool) 1
0x7a9: Call2 0xa0a

0x7aa: Pop(2)
0x7ab: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x7ac: Return(); Pop(0)

0x7ad: PushEmpty()
0x7ae: Push((int) 1)
0x7af: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7b0: PushEmpty()
0x7b1: Call2 0xa28

0x7b2: Pop(0)
0x7b3: Push((int) 42560)
0x7b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b5: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7b6: PushEmpty(string)
0x7b7: Stack[-1] = "Neutral"
0x7b8: Call2 0x797

0x7b9: Pop(1)
0x7ba: Push((int) 540551)
0x7bb: @@ SetMessage(Stack[-1])
0x7bc: Pop(1)
0x7bd: @@ ClearReplies()
0x7be: Pop(0)
0x7bf: Push((int) 540552)
0x7c0: Push((int) -1)
0x7c1: Push((int) 42561)
0x7c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c3: Pop(3)
0x7c4: Push((int) 540795)
0x7c5: Push((int) -1)
0x7c6: Push((int) 42844)
0x7c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c8: Pop(3)
0x7c9: Return(); Pop(0)

0x7ca: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7cb: PushEmpty(bool)
0x7cc: Call2 0xac3

0x7cd: Pop(0)
0x7ce: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7cf: @ lshStopAnimation()
0x7d0: Pop(0)
0x7d1: GOTO 0x7d4

0x7d2: @ StopAnimation()
0x7d3: Pop(0)
0x7d4: Return(); Pop(0)

0x7d5: GOTO 0x7ae

0x7d6: Return(); Pop(0)

0x7d7: PushEmpty()
0x7d8: Call2 0x7db

0x7d9: Pop(0)
0x7da: Return(); Pop(0)

0x7db: PushEmpty(bool)
0x7dc: Call2 0x914

0x7dd: Pop(0)
0x7de: Pop(1); Push((bool) Stack[-1] == 0)
0x7df: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7e0: @ Hold()
0x7e1: Pop(0)
0x7e2: @ GetDirection(Stack[-0])
0x7e3: Pop(0)
0x7e4: PushEmpty()
0x7e5: Call2 0x88b

0x7e6: Pop(0)
0x7e7: GOTO 0x7e4

0x7e8: Return(); Pop(0)

0x7e9: PushEmpty(object, object)
0x7ea: Push("player")
0x7eb: @ FindActor(Stack[-2], Stack[-1])
0x7ec: Pop(1)
0x7ed: Pop(0); Push((bool) Stack[-1] == 0)
0x7ee: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7ef: Stack[-3] = (bool) 0
0x7f0: Return(); Pop(2)

0x7f1: PushEmpty(bool, object)
0x7f2: Stack[-1] = Stack[-3]
0x7f3: Call2 0x90b

0x7f4: Stack[-5] = Stack[-2]
0x7f5: Pop(2)
0x7f6: Return(); Pop(2)

0x7f7: Stack[-1] = 0
0x7f8: Push(CvectorIndex(Stack[-0], 0))
0x7f9: Push(CvectorIndex(Stack[-0], 2))
0x7fa: @ RotateAsync(Stack[-2], Stack[-1])
0x7fb: Pop(2)
0x7fc: Return(); Pop(0)

0x7fd: PushEmpty(object, bool, object, bool)
0x7fe: Push("player")
0x7ff: @ FindActor(Stack[-3], Stack[-1])
0x800: Pop(1)
0x801: Pop(0); Push((bool) Stack[-2] == 0)
0x802: IF (Stack[-1] == 0) GOTO 0x805; Pop(1)

0x803: Stack[-5] = (bool) 0
0x804: Return(); Pop(4)

0x805: PushEmpty(float, object)
0x806: Stack[-1] = Stack[-4]
0x807: Call2 0x8d7

0x808: Pop(1)
0x809: Push((float)90000.0)
0x80a: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x80b: IF (Stack[-1] == 0) GOTO 0x80e; Pop(1)

0x80c: Stack[-5] = (bool) 0
0x80d: Return(); Pop(4)

0x80e: @ CanSee(Stack[-1], Stack[-2])
0x80f: Pop(0)
0x810: Stack[-5] = Stack[-1]
0x811: Return(); Pop(4)

0x812: Stack[-2] = 0
0x813: PushEmpty(float, float)
0x814: Push((int) 8)
0x815: Push((int) 16)
0x816: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x817: Pop(2)
0x818: Push((int) 10)
0x819: @ SetTimer(Stack[-1], Stack[-2])
0x81a: Pop(1)
0x81b: Return(); Pop(2)

0x81c: Push((int) 10)
0x81d: @ KillTimer(Stack[-1])
0x81e: Pop(1)
0x81f: Return(); Pop(0)

0x820: PushEmpty()
0x821: Push((int) 10)
0x822: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x823: IF (Stack[-1] == 0) GOTO 0x845; Pop(1)

0x824: PushEmpty()
0x825: Call2 0x81c

0x826: Pop(0)
0x827: PushEmpty(bool)
0x828: Stack[-1] = (bool) 0
0x829: PushEmpty(bool)
0x82a: Call2 0x914

0x82b: Pop(0)
0x82c: IF (Stack[-1] == 0) GOTO 0x832; Pop(1)

0x82d: PushEmpty(bool)
0x82e: Call2 0x7fd

0x82f: Pop(0)
0x830: IF (Stack[-1] == 0) GOTO 0x832; Pop(1)

0x831: Stack[-1] = (bool) 1
0x832: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x833: PushEmpty(bool)
0x834: Call2 0x7e9

0x835: Pop(0)
0x836: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x837: PushEmpty(bool, object)
0x838: PushEmpty(object)
0x839: Call2 0xa2f

0x83a: Stack[-2] = Stack[-1]
0x83b: Pop(1)
0x83c: Call2 0x9aa

0x83d: Pop(2)
0x83e: GOTO 0x845

0x83f: PushEmpty()
0x840: Call2 0x7f8

0x841: Pop(0)
0x842: PushEmpty()
0x843: Call2 0x813

0x844: Pop(0)
0x845: Return(); Pop(0)

0x846: PushEmpty()
0x847: Call2 0x8d2

0x848: Pop(0)
0x849: PushEmpty()
0x84a: Call2 0x81c

0x84b: Pop(0)
0x84c: @ lshStopSpeech()
0x84d: Pop(0)
0x84e: @ lshStopAnimation()
0x84f: Pop(0)
0x850: @ StopAsync()
0x851: Pop(0)
0x852: @ Hold()
0x853: Pop(0)
0x854: Return(); Pop(0)

0x855: @ StopGroup0()
0x856: Pop(0)
0x857: PushEmpty()
0x858: Call2 0x81c

0x859: Pop(0)
0x85a: PushEmpty(string)
0x85b: Stack[-1] = "Neutral"
0x85c: Call2 0x9fa

0x85d: Pop(1)
0x85e: PushEmpty()
0x85f: Call2 0x813

0x860: Pop(0)
0x861: Return(); Pop(0)

0x862: PushEmpty()
0x863: Push(Stack[-1])
0x864: IF (Stack[-1] == 0) GOTO 0x869; Pop(1)

0x865: PushEmpty()
0x866: Call2 0x813

0x867: Pop(0)
0x868: GOTO 0x86d

0x869: PushEmpty(string)
0x86a: Stack[-1] = "Neutral"
0x86b: Call2 0x9fa

0x86c: Pop(1)
0x86d: Return(); Pop(0)

0x86e: PushEmpty(bool, bool)
0x86f: @ IsOverrideActive(Stack[-1])
0x870: Pop(0)
0x871: Pop(0); Push((bool) Stack[-1] == 0)
0x872: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x873: EventDisable(0)
0x874: PushEmpty()
0x875: Call2 0x8d2

0x876: Pop(0)
0x877: PushEmpty(bool, object)
0x878: Stack[-1] = Stack[-5]
0x879: Call2 0x90b

0x87a: Pop(2)
0x87b: EventEnable(0)
0x87c: PushEmpty(object)
0x87d: Stack[-1] = Stack[-4]
0x87e: Call2 0xc9a

0x87f: Pop(1)
0x880: PushEmpty(string)
0x881: Stack[-1] = "Neutral"
0x882: Call2 0x9fa

0x883: Pop(1)
0x884: PushEmpty()
0x885: Call2 0x81c

0x886: Pop(0)
0x887: PushEmpty()
0x888: Call2 0x813

0x889: Pop(0)
0x88a: Return(); Pop(2)

0x88b: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x88c: @ WaitForAnimEnd()
0x88d: Pop(0)
0x88e: PushEmpty(bool)
0x88f: Call2 0x914

0x890: Pop(0)
0x891: Pop(1); Push((bool) Stack[-1] == 0)
0x892: IF (Stack[-1] == 0) GOTO 0x894; Pop(1)

0x893: Return(); Pop(12)

0x894: PushEmpty(int)
0x895: Call2 0xaaa

0x896: Stack[-7] = Stack[-1]
0x897: Pop(1)
0x898: Stack[-5] = (int) 0
0x899: PushEmpty(bool)
0x89a: Stack[-1] = (bool) 0
0x89b: Push((int) 5)
0x89c: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x89d: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x89e: PushEmpty(bool)
0x89f: Call2 0x914

0x8a0: Pop(0)
0x8a1: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x8a2: Stack[-1] = (bool) 1
0x8a3: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8a4: Pop(0); Push((bool) Stack[-6] == 0)
0x8a5: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x8a6: Push((int) 3)
0x8a7: @ Sleep(Stack[-1], Stack[-5])
0x8a8: Pop(1)
0x8a9: Pop(0); Push((bool) Stack[-4] == 0)
0x8aa: IF (Stack[-1] == 0) GOTO 0x8ac; Pop(1)

0x8ab: GOTO 0x8cd

0x8ac: GOTO 0x8c2

0x8ad: @ irand(Stack[-3], Stack[-6])
0x8ae: Pop(0)
0x8af: Push((int) 5)
0x8b0: @ irand(Stack[-3], Stack[-1])
0x8b1: Pop(1)
0x8b2: Push((int) 0)
0x8b3: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x8b4: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8b5: Stack[-3] = (int) 0
0x8b6: Push("all")
0x8b7: PushEmpty(string, int)
0x8b8: Stack[-1] = Stack[-6]
0x8b9: Call2 0xaa3

0x8ba: Pop(1)
0x8bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x8bc: Pop(2)
0x8bd: @ WaitForAnimEnd(Stack[-1])
0x8be: Pop(0)
0x8bf: Pop(0); Push((bool) Stack[-1] == 0)
0x8c0: IF (Stack[-1] == 0) GOTO 0x8c2; Pop(1)

0x8c1: GOTO 0x8cd

0x8c2: PushEmpty(bool)
0x8c3: Call2 0x8d0

0x8c4: Pop(0)
0x8c5: Pop(1); Push((bool) Stack[-1] == 0)
0x8c6: IF (Stack[-1] == 0) GOTO 0x8c8; Pop(1)

0x8c7: GOTO 0x8cd

0x8c8: @ ResetAAS()
0x8c9: Pop(0)
0x8ca: Push((int) 1)
0x8cb: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x8cc: GOTO 0x899

0x8cd: @ ResetAAS()
0x8ce: Pop(0)
0x8cf: Return(); Pop(12)

0x8d0: Stack[-1] = (bool) 1
0x8d1: Return(); Pop(0)

0x8d2: @ StopAnimation()
0x8d3: Pop(0)
0x8d4: @ StopGroup0()
0x8d5: Pop(0)
0x8d6: Return(); Pop(0)

0x8d7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x8d8: @ GetPosition(Stack[-3])
0x8d9: Pop(0)
0x8da: @@ GetPosition(Stack[-2])
0x8db: Pop(0)
0x8dc: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x8dd: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x8de: Return(); Pop(6)

0x8df: PushEmpty(bool, bool)
0x8e0: Push("HasProperty")
0x8e1: Push((int) 2)
0x8e2: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x8e3: Pop(1); Push((bool) Stack[-1] == 0)
0x8e4: IF (Stack[-1] == 0) GOTO 0x8e7; Pop(1)

0x8e5: Stack[-5] = (bool) 0
0x8e6: Return(); Pop(2)

0x8e7: @@ HasProperty(Stack[-3], Stack[-1])
0x8e8: Pop(0)
0x8e9: Stack[-5] = Stack[-1]
0x8ea: Return(); Pop(2)

0x8eb: PushEmpty(float, float)
0x8ec: PushEmpty(bool, object, string)
0x8ed: Stack[-2] = Stack[-10]
0x8ee: Stack[-1] = Stack[-9]
0x8ef: Call2 0x8df

0x8f0: Pop(2)
0x8f1: Pop(1); Push((bool) Stack[-1] == 0)
0x8f2: IF (Stack[-1] == 0) GOTO 0x8f5; Pop(1)

0x8f3: Stack[-8] = (bool) 0
0x8f4: Return(); Pop(2)

0x8f5: @@ GetProperty(Stack[-6], Stack[-1])
0x8f6: Pop(0)
0x8f7: PushEmpty(float, float, float, float)
0x8f8: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x8f9: Stack[-2] = Stack[-8]
0x8fa: Stack[-1] = Stack[-7]
0x8fb: Call2 0xa3f

0x8fc: Pop(3)
0x8fd: @@ SetProperty(Stack[-7], Stack[-1])
0x8fe: Pop(1)
0x8ff: Stack[-8] = (bool) 1
0x900: Return(); Pop(2)

0x901: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x902: @ GetPosition(Stack[-3])
0x903: Pop(0)
0x904: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x905: Push(CvectorIndex(Stack[-2], 0))
0x906: Push(CvectorIndex(Stack[-3], 2))
0x907: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x908: Pop(2)
0x909: Stack[-8] = Stack[-1]
0x90a: Return(); Pop(6)

0x90b: PushEmpty(cvector, cvector)
0x90c: @@ GetPosition(Stack[-1])
0x90d: Pop(0)
0x90e: PushEmpty(bool, cvector)
0x90f: Stack[-1] = Stack[-3]
0x910: Call2 0x901

0x911: Stack[-6] = Stack[-2]
0x912: Pop(2)
0x913: Return(); Pop(2)

0x914: PushEmpty(bool, bool)
0x915: @ IsLoaded(Stack[-1])
0x916: Pop(0)
0x917: Stack[-3] = Stack[-1]
0x918: Return(); Pop(2)

0x919: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x91a: @@ GetPosition(Stack[-8])
0x91b: Pop(0)
0x91c: @@ GetEyesHeight(Stack[-9])
0x91d: Pop(0)
0x91e: Push(CvectorIndex(Stack[-8], 1))
0x91f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x920: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x921: @ GetPosition(Stack[-7])
0x922: Pop(0)
0x923: @ GetEyesHeight(Stack[-9])
0x924: Pop(0)
0x925: Push(CvectorIndex(Stack[-7], 1))
0x926: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x927: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x928: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x929: Push(CvectorIndex(Stack[-6], 1))
0x92a: Stack[-1] = (int) 0
0x92b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x92c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x92d: Pop(1); Push(Sqrt(Stack[-1]))
0x92e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x92f: Stack[-5] = -Stack[-6]; Pop(0);
0x930: Pop(0); Push(Stack[-6] * Stack[-19]);
0x931: PushEmpty(cvector, cvector)
0x932: Push(CVector(0.0, 1.0, 0.0))
0x933: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x934: Call2 0xa35

0x935: Pop(1)
0x936: Push((int) 25)
0x937: Pop(2); Push(Stack[-2] * Stack[-1]);
0x938: Pop(2); Push(Stack[-2] + Stack[-1]);
0x939: Push(CVector(0.0, 10.0, 0.0))
0x93a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x93b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x93c: @ IsOverrideActive(Stack[-2])
0x93d: Pop(0)
0x93e: Push(Stack[-2])
0x93f: IF (Stack[-1] == 0) GOTO 0x942; Pop(1)

0x940: Stack[-21] = (bool) 0
0x941: Return(); Pop(18)

0x942: @ StopWorld()
0x943: Pop(0)
0x944: Push((bool) 1)
0x945: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x946: Pop(1)
0x947: Push(CvectorIndex(Stack[-4], 0))
0x948: Push(CvectorIndex(Stack[-5], 2))
0x949: @ Rotate(Stack[-2], Stack[-1])
0x94a: Pop(2)
0x94b: PushEmpty(bool)
0x94c: Call2 0xac3

0x94d: Pop(0)
0x94e: IF (Stack[-1] == 0) GOTO 0x950; Pop(1)

0x94f: GOTO 0x958

0x950: Push("head")
0x951: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x952: Pop(1)
0x953: Push(Stack[-1])
0x954: IF (Stack[-1] == 0) GOTO 0x958; Pop(1)

0x955: Push("head")
0x956: @ LookAsyncCamera(Stack[-1])
0x957: Pop(1)
0x958: @ CameraWaitForPlayFinish()
0x959: Pop(0)
0x95a: @ ResumeWorld()
0x95b: Pop(0)
0x95c: Stack[-21] = (bool) 1
0x95d: Return(); Pop(18)

0x95e: PushEmpty(bool, bool)
0x95f: Push((bool) 1)
0x960: @ CameraSwitchToNormal(Stack[-1])
0x961: Pop(1)
0x962: PushEmpty(bool)
0x963: Call2 0xac3

0x964: Pop(0)
0x965: IF (Stack[-1] == 0) GOTO 0x967; Pop(1)

0x966: GOTO 0x96f

0x967: Push("head")
0x968: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x969: Pop(1)
0x96a: Push(Stack[-1])
0x96b: IF (Stack[-1] == 0) GOTO 0x96f; Pop(1)

0x96c: Push("head")
0x96d: @ UnlookAsync(Stack[-1])
0x96e: Pop(1)
0x96f: Return(); Pop(2)

0x970: PushEmpty(int, int, int, int)
0x971: Push("voice_common")
0x972: @ GetVariable(Stack[-1], Stack[-3])
0x973: Pop(1)
0x974: Push(Stack[-2])
0x975: IF (Stack[-1] == 0) GOTO 0x996; Pop(1)

0x976: PushEmpty(bool, object)
0x977: Stack[-1] = Stack[-7]
0x978: Call2 0x9aa

0x979: Pop(1)
0x97a: Pop(1); Push((bool) Stack[-1] == 0)
0x97b: IF (Stack[-1] == 0) GOTO 0x984; Pop(1)

0x97c: PushEmpty(bool, object)
0x97d: Stack[-1] = Stack[-7]
0x97e: Call2 0x9cf

0x97f: Pop(1)
0x980: Pop(1); Push((bool) Stack[-1] == 0)
0x981: IF (Stack[-1] == 0) GOTO 0x984; Pop(1)

0x982: Stack[-6] = (bool) 0
0x983: Return(); Pop(4)

0x984: Push((int) 2)
0x985: @ irand(Stack[-2], Stack[-1])
0x986: Pop(1)
0x987: Push(Stack[-1])
0x988: IF (Stack[-1] == 0) GOTO 0x991; Pop(1)

0x989: Push("voice_common")
0x98a: Push((int) 1)
0x98b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x98c: Push((int) 3)
0x98d: Pop(2); Push(Stack[-2] % Stack[-1]);
0x98e: @ SetVariable(Stack[-2], Stack[-1])
0x98f: Pop(2)
0x990: GOTO 0x995

0x991: Push("voice_common")
0x992: Push((int) 0)
0x993: @ SetVariable(Stack[-2], Stack[-1])
0x994: Pop(2)
0x995: GOTO 0x9a8

0x996: PushEmpty(bool, object)
0x997: Stack[-1] = Stack[-7]
0x998: Call2 0x9cf

0x999: Pop(1)
0x99a: Pop(1); Push((bool) Stack[-1] == 0)
0x99b: IF (Stack[-1] == 0) GOTO 0x9a4; Pop(1)

0x99c: PushEmpty(bool, object)
0x99d: Stack[-1] = Stack[-7]
0x99e: Call2 0x9aa

0x99f: Pop(1)
0x9a0: Pop(1); Push((bool) Stack[-1] == 0)
0x9a1: IF (Stack[-1] == 0) GOTO 0x9a4; Pop(1)

0x9a2: Stack[-6] = (bool) 0
0x9a3: Return(); Pop(4)

0x9a4: Push("voice_common")
0x9a5: Push((int) 1)
0x9a6: @ SetVariable(Stack[-2], Stack[-1])
0x9a7: Pop(2)
0x9a8: Stack[-6] = (bool) 1
0x9a9: Return(); Pop(4)

0x9aa: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x9ab: Stack[-5] = "c"
0x9ac: Stack[-4] = (int) 0
0x9ad: Push((int) 1)
0x9ae: IF (Stack[-1] == 0) GOTO 0x9ba; Pop(1)

0x9af: Push((int) 1)
0x9b0: Pop(1); Push(Stack[-5] + Stack[-1]);
0x9b1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9b2: @@ HasProperty(Stack[-1], Stack[-4])
0x9b3: Pop(1)
0x9b4: Pop(0); Push((bool) Stack[-3] == 0)
0x9b5: IF (Stack[-1] == 0) GOTO 0x9b7; Pop(1)

0x9b6: GOTO 0x9ba

0x9b7: Push((int) 1)
0x9b8: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x9b9: GOTO 0x9ad

0x9ba: Pop(0); Push((bool) Stack[-4] == 0)
0x9bb: IF (Stack[-1] == 0) GOTO 0x9be; Pop(1)

0x9bc: Stack[-12] = (bool) 0
0x9bd: Return(); Pop(10)

0x9be: Stack[-2] = (int) 0
0x9bf: Push((int) 1)
0x9c0: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x9c1: IF (Stack[-1] == 0) GOTO 0x9c4; Pop(1)

0x9c2: @ irand(Stack[-2], Stack[-4])
0x9c3: Pop(0)
0x9c4: Push((int) 1)
0x9c5: Pop(1); Push(Stack[-3] + Stack[-1]);
0x9c6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9c7: @@ GetProperty(Stack[-1], Stack[-2])
0x9c8: Pop(1)
0x9c9: PushEmpty(bool, string)
0x9ca: Stack[-1] = Stack[-3]
0x9cb: Call2 0xa19

0x9cc: Stack[-14] = Stack[-2]
0x9cd: Pop(2)
0x9ce: Return(); Pop(10)

0x9cf: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x9d0: Push("d")
0x9d1: PushEmpty(int)
0x9d2: Call2 0xa94

0x9d3: Pop(0)
0x9d4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9d5: Push("m")
0x9d6: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x9d7: Stack[-4] = (int) 0
0x9d8: Push((int) 1)
0x9d9: IF (Stack[-1] == 0) GOTO 0x9e5; Pop(1)

0x9da: Push((int) 1)
0x9db: Pop(1); Push(Stack[-5] + Stack[-1]);
0x9dc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9dd: @@ HasProperty(Stack[-1], Stack[-4])
0x9de: Pop(1)
0x9df: Pop(0); Push((bool) Stack[-3] == 0)
0x9e0: IF (Stack[-1] == 0) GOTO 0x9e2; Pop(1)

0x9e1: GOTO 0x9e5

0x9e2: Push((int) 1)
0x9e3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x9e4: GOTO 0x9d8

0x9e5: Pop(0); Push((bool) Stack[-4] == 0)
0x9e6: IF (Stack[-1] == 0) GOTO 0x9e9; Pop(1)

0x9e7: Stack[-12] = (bool) 0
0x9e8: Return(); Pop(10)

0x9e9: Stack[-2] = (int) 0
0x9ea: Push((int) 1)
0x9eb: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x9ec: IF (Stack[-1] == 0) GOTO 0x9ef; Pop(1)

0x9ed: @ irand(Stack[-2], Stack[-4])
0x9ee: Pop(0)
0x9ef: Push((int) 1)
0x9f0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x9f1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9f2: @@ GetProperty(Stack[-1], Stack[-2])
0x9f3: Pop(1)
0x9f4: PushEmpty(bool, string)
0x9f5: Stack[-1] = Stack[-3]
0x9f6: Call2 0xa19

0x9f7: Stack[-14] = Stack[-2]
0x9f8: Pop(2)
0x9f9: Return(); Pop(10)

0x9fa: PushEmpty(bool, float, float, bool, float, float)
0x9fb: @ lshHasAnimation(Stack[-3], Stack[-7])
0x9fc: Pop(0)
0x9fd: Push(Stack[-3])
0x9fe: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0x9ff: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xa00: Pop(0)
0xa01: Push((bool) 0)
0xa02: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa03: Pop(1)
0xa04: GOTO 0xa09

0xa05: Push("Can't find lsh animation : ")
0xa06: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa07: @ Trace(Stack[-1])
0xa08: Pop(1)
0xa09: Return(); Pop(6)

0xa0a: PushEmpty(bool, float, float, bool, float, float)
0xa0b: @ lshHasAnimation(Stack[-3], Stack[-8])
0xa0c: Pop(0)
0xa0d: Push(Stack[-3])
0xa0e: IF (Stack[-1] == 0) GOTO 0xa14; Pop(1)

0xa0f: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xa10: Pop(0)
0xa11: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xa12: Pop(0)
0xa13: GOTO 0xa18

0xa14: Push("Can't find lsh animation : ")
0xa15: Pop(1); Push(Stack[-1] + Stack[-9]);
0xa16: @ Trace(Stack[-1])
0xa17: Pop(1)
0xa18: Return(); Pop(6)

0xa19: PushEmpty(bool, bool)
0xa1a: PushEmpty(bool)
0xa1b: Call2 0xac3

0xa1c: Pop(0)
0xa1d: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa1e: @ lshHasSpeech(Stack[-1], Stack[-3])
0xa1f: Pop(0)
0xa20: Push(Stack[-1])
0xa21: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa22: @ lshPlaySpeech(Stack[-3])
0xa23: Pop(0)
0xa24: Stack[-4] = (bool) 1
0xa25: Return(); Pop(2)

0xa26: Stack[-4] = (bool) 0
0xa27: Return(); Pop(2)

0xa28: PushEmpty(bool)
0xa29: Call2 0xac3

0xa2a: Pop(0)
0xa2b: IF (Stack[-1] == 0) GOTO 0xa2e; Pop(1)

0xa2c: @ lshStopSpeech()
0xa2d: Pop(0)
0xa2e: Return(); Pop(0)

0xa2f: PushEmpty(object, object)
0xa30: @ self(Stack[-1])
0xa31: Pop(0)
0xa32: Stack[-3] = Stack[-1]
0xa33: Return(); Pop(2)

0xa34: Stack[-1] = 0
0xa35: PushEmpty(float, float)
0xa36: Pop(0); Push(Stack[-3] | Stack[-3]);
0xa37: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xa38: Push((float)0.0)
0xa39: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa3a: IF (Stack[-1] == 0) GOTO 0xa3d; Pop(1)

0xa3b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xa3c: Return(); Pop(2)

0xa3d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xa3e: Return(); Pop(2)

0xa3f: PushEmpty()
0xa40: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xa41: IF (Stack[-1] == 0) GOTO 0xa44; Pop(1)

0xa42: Stack[-4] = Stack[-2]
0xa43: Return(); Pop(0)

0xa44: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xa45: IF (Stack[-1] == 0) GOTO 0xa48; Pop(1)

0xa46: Stack[-4] = Stack[-1]
0xa47: Return(); Pop(0)

0xa48: Stack[-4] = Stack[-3]
0xa49: Return(); Pop(0)

0xa4a: PushEmpty(int, int)
0xa4b: @ GetVariable(Stack[-3], Stack[-1])
0xa4c: Pop(0)
0xa4d: Stack[-4] = Stack[-1]
0xa4e: Return(); Pop(2)

0xa4f: PushEmpty(int, bool, int, bool)
0xa50: @ GetInvItemByName(Stack[-2], Stack[-5])
0xa51: Pop(0)
0xa52: @@ HasItem(Stack[-2], Stack[-1])
0xa53: Pop(0)
0xa54: Stack[-7] = Stack[-1]
0xa55: Return(); Pop(4)

0xa56: PushEmpty()
0xa57: Pop(0); Push((bool) Stack[-2] == 0)
0xa58: IF (Stack[-1] == 0) GOTO 0xa5b; Pop(1)

0xa59: Stack[-3] = (bool) 0
0xa5a: Return(); Pop(0)

0xa5b: Push((int) 0)
0xa5c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa5d: IF (Stack[-1] == 0) GOTO 0xa62; Pop(1)

0xa5e: Push((int) 8)
0xa5f: @ SendWorldWndMessage(Stack[-1])
0xa60: Pop(1)
0xa61: GOTO 0xa6b

0xa62: Push((int) 0)
0xa63: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa64: IF (Stack[-1] == 0) GOTO 0xa69; Pop(1)

0xa65: Push((int) 9)
0xa66: @ SendWorldWndMessage(Stack[-1])
0xa67: Pop(1)
0xa68: GOTO 0xa6b

0xa69: Stack[-3] = (bool) 0
0xa6a: Return(); Pop(0)

0xa6b: PushEmpty(float)
0xa6c: Stack[-1] = Stack[-2]
0xa6d: Call2 0xa79

0xa6e: Pop(1)
0xa6f: PushEmpty(bool, object, string, float, float, float)
0xa70: Stack[-5] = Stack[-8]
0xa71: Stack[-4] = "reputation"
0xa72: Stack[-3] = Stack[-7]
0xa73: Stack[-2] = (int) 0
0xa74: Stack[-1] = (int) 1
0xa75: Call2 0x8eb

0xa76: Pop(6)
0xa77: Stack[-3] = (bool) 1
0xa78: Return(); Pop(0)

0xa79: PushEmpty(object, object)
0xa7a: @ CreateFloatVector(Stack[-1])
0xa7b: Pop(0)
0xa7c: @@ add(Stack[-3])
0xa7d: Pop(0)
0xa7e: Push((int) 16)
0xa7f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xa80: Pop(1)
0xa81: Return(); Pop(2)

0xa82: Stack[-1] = 0
0xa83: PushEmpty(object, object)
0xa84: @ FindActor(Stack[-1], Stack[-4])
0xa85: Pop(0)
0xa86: Pop(0); Push((bool) Stack[-1] == 0)
0xa87: IF (Stack[-1] == 0) GOTO 0xa8a; Pop(1)

0xa88: Stack[-5] = (bool) 0
0xa89: Return(); Pop(2)

0xa8a: @ Trigger(Stack[-1], Stack[-3])
0xa8b: Pop(0)
0xa8c: Stack[-5] = (bool) 1
0xa8d: Return(); Pop(2)

0xa8e: Stack[-1] = 0
0xa8f: PushEmpty(float, float)
0xa90: @ GetGameTime(Stack[-1])
0xa91: Pop(0)
0xa92: Stack[-3] = Stack[-1]
0xa93: Return(); Pop(2)

0xa94: PushEmpty(float, float)
0xa95: @ GetGameTime(Stack[-1])
0xa96: Pop(0)
0xa97: Push((int) 1)
0xa98: PushEmpty(int)
0xa99: Push((int) 24)
0xa9a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xa9b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xa9c: Return(); Pop(2)

0xa9d: PushEmpty()
0xa9e: PushEmpty(int)
0xa9f: Call2 0xa94

0xaa0: Pop(0)
0xaa1: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xaa2: Return(); Pop(0)

0xaa3: PushEmpty(string, string)
0xaa4: Stack[-1] = "idle"
0xaa5: Push(Stack[-3])
0xaa6: IF (Stack[-1] == 0) GOTO 0xaa8; Pop(1)

0xaa7: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xaa8: Stack[-4] = Stack[-1]
0xaa9: Return(); Pop(2)

0xaaa: PushEmpty(int, bool, int, bool)
0xaab: Stack[-2] = (int) 0
0xaac: Push("all")
0xaad: PushEmpty(string, int)
0xaae: Stack[-1] = Stack[-5]
0xaaf: Call2 0xaa3

0xab0: Pop(1)
0xab1: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xab2: Pop(2)
0xab3: Pop(0); Push((bool) Stack[-1] == 0)
0xab4: IF (Stack[-1] == 0) GOTO 0xab6; Pop(1)

0xab5: GOTO 0xab9

0xab6: Push((int) 1)
0xab7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xab8: GOTO 0xaac

0xab9: Stack[-5] = Stack[-2]
0xaba: Return(); Pop(4)

0xabb: Stack[-1] = (int) 515542
0xabc: Return(); Pop(0)

0xabd: Stack[-1] = (int) 502867
0xabe: Return(); Pop(0)

0xabf: Stack[-1] = "ui/NPC_Laska.png"
0xac0: Return(); Pop(0)

0xac1: Stack[-1] = "ui/NPC_Laska_b.png"
0xac2: Return(); Pop(0)

0xac3: Stack[-1] = (bool) 1
0xac4: Return(); Pop(0)

0xac5: PushEmpty()
0xac6: Push("oob6Laska1")
0xac7: Push((int) 1)
0xac8: @ SetVariable(Stack[-2], Stack[-1])
0xac9: Pop(2)
0xaca: Return(); Pop(0)

0xacb: PushEmpty()
0xacc: Push("oob1Laska4")
0xacd: Push((int) 1)
0xace: @ SetVariable(Stack[-2], Stack[-1])
0xacf: Pop(2)
0xad0: Return(); Pop(0)

0xad1: PushEmpty(object, object)
0xad2: PushEmpty(object)
0xad3: Call2 0xc57

0xad4: Stack[-2] = Stack[-1]
0xad5: Pop(1)
0xad6: Push("b1LaskaGotoMishka")
0xad7: Push("pt_map_mishka")
0xad8: Push((int) 3)
0xad9: Push((int) 530602)
0xada: PushEmpty(float)
0xadb: Call2 0xa8f

0xadc: Pop(0)
0xadd: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xade: Pop(5)
0xadf: Return(); Pop(2)

0xae0: Stack[-1] = 0
0xae1: PushEmpty()
0xae2: Push("oob12Laska1")
0xae3: Push((int) 1)
0xae4: @ SetVariable(Stack[-2], Stack[-1])
0xae5: Pop(2)
0xae6: Return(); Pop(0)

0xae7: PushEmpty()
0xae8: PushEmpty(object, string, float)
0xae9: PushEmpty(object)
0xaea: Call2 0xc57

0xaeb: Stack[-4] = Stack[-1]
0xaec: Pop(1)
0xaed: Stack[-2] = "pt_map_mishka"
0xaee: Stack[-1] = (int) 2
0xaef: Call2 0xc68

0xaf0: Pop(3)
0xaf1: PushEmpty(object)
0xaf2: Call2 0xc57

0xaf3: Pop(0)
0xaf4: @@ ShowMap(Stack[-1])
0xaf5: Pop(1)
0xaf6: Return(); Pop(0)

0xaf7: PushEmpty()
0xaf8: PushEmpty(bool, object, float)
0xaf9: Stack[-2] = Stack[-5]
0xafa: Stack[-1] = (float) 0.3
0xafb: Call2 0xa56

0xafc: Pop(3)
0xafd: Return(); Pop(0)

0xafe: PushEmpty()
0xaff: PushEmpty(bool, object, float)
0xb00: Stack[-2] = Stack[-5]
0xb01: Stack[-1] = (float) -0.1
0xb02: Call2 0xa56

0xb03: Pop(3)
0xb04: Return(); Pop(0)

0xb05: PushEmpty()
0xb06: PushEmpty(object, string, float)
0xb07: PushEmpty(object)
0xb08: Call2 0xc57

0xb09: Stack[-4] = Stack[-1]
0xb0a: Pop(1)
0xb0b: Stack[-2] = "pt_map_gorbun"
0xb0c: Stack[-1] = (int) 2
0xb0d: Call2 0xc68

0xb0e: Pop(3)
0xb0f: PushEmpty(object)
0xb10: Call2 0xc57

0xb11: Pop(0)
0xb12: @@ ShowMap(Stack[-1])
0xb13: Pop(1)
0xb14: Return(); Pop(0)

0xb15: PushEmpty()
0xb16: Push("oob1Laska1")
0xb17: Push((int) 1)
0xb18: @ SetVariable(Stack[-2], Stack[-1])
0xb19: Pop(2)
0xb1a: Return(); Pop(0)

0xb1b: PushEmpty(object, object)
0xb1c: Push("b1q02")
0xb1d: Push((int) 1)
0xb1e: @ SetVariable(Stack[-2], Stack[-1])
0xb1f: Pop(2)
0xb20: PushEmpty(object)
0xb21: Call2 0xc57

0xb22: Stack[-2] = Stack[-1]
0xb23: Pop(1)
0xb24: Push("b1q02LaskaGotoGorbin")
0xb25: Push("pt_map_gorbun")
0xb26: Push((int) 0)
0xb27: Push((int) 517938)
0xb28: PushEmpty(float)
0xb29: Call2 0xa8f

0xb2a: Pop(0)
0xb2b: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb2c: Pop(5)
0xb2d: Push("b1q02LaskaSelf")
0xb2e: Push("pt_map_laska")
0xb2f: Push((int) 0)
0xb30: Push((int) 517939)
0xb31: PushEmpty(float)
0xb32: Call2 0xa8f

0xb33: Pop(0)
0xb34: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb35: Pop(5)
0xb36: PushEmpty()
0xb37: Call2 0xbfa

0xb38: Pop(0)
0xb39: PushEmpty()
0xb3a: Call2 0xc21

0xb3b: Pop(0)
0xb3c: Return(); Pop(2)

0xb3d: Stack[-1] = 0
0xb3e: PushEmpty(int, int)
0xb3f: PushEmpty()
0xb40: Call2 0xc07

0xb41: Pop(0)
0xb42: Push("b1q02_blood")
0xb43: Push((int) 1)
0xb44: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xb45: Pop(2)
0xb46: PushEmpty(bool, string, string)
0xb47: Stack[-2] = "quest_b1_02"
0xb48: Stack[-1] = "agony_cured"
0xb49: Call2 0xa83

0xb4a: Pop(3)
0xb4b: PushEmpty(bool, string, string)
0xb4c: Stack[-2] = "quest_b1_02"
0xb4d: Stack[-1] = "completed"
0xb4e: Call2 0xa83

0xb4f: Pop(3)
0xb50: Return(); Pop(2)

0xb51: PushEmpty()
0xb52: Push("oob1Laska2")
0xb53: Push((int) 1)
0xb54: @ SetVariable(Stack[-2], Stack[-1])
0xb55: Pop(2)
0xb56: Return(); Pop(0)

0xb57: PushEmpty()
0xb58: Push("oob1Laska3")
0xb59: Push((int) 1)
0xb5a: @ SetVariable(Stack[-2], Stack[-1])
0xb5b: Pop(2)
0xb5c: Return(); Pop(0)

0xb5d: PushEmpty()
0xb5e: PushEmpty(bool, string, string)
0xb5f: Stack[-2] = "quest_b1_02"
0xb60: Stack[-1] = "fail"
0xb61: Call2 0xa83

0xb62: Pop(3)
0xb63: Return(); Pop(0)

0xb64: PushEmpty()
0xb65: PushEmpty(int, string)
0xb66: Stack[-1] = "b1q02"
0xb67: Call2 0xa4a

0xb68: Pop(1)
0xb69: Push((int) 0)
0xb6a: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xb6b: IF (Stack[-1] == 0) GOTO 0xb6f; Pop(1)

0xb6c: PushEmpty()
0xb6d: Call2 0xc14

0xb6e: Pop(0)
0xb6f: Return(); Pop(0)

0xb70: PushEmpty()
0xb71: PushEmpty(int, string)
0xb72: Stack[-1] = "oob1Laska4"
0xb73: Call2 0xa4a

0xb74: Pop(1)
0xb75: Push((int) 0)
0xb76: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb77: IF (Stack[-1] == 0) GOTO 0xb7a; Pop(1)

0xb78: Stack[-2] = (bool) 1
0xb79: Return(); Pop(0)

0xb7a: Stack[-2] = (bool) 0
0xb7b: Return(); Pop(0)

0xb7c: PushEmpty()
0xb7d: PushEmpty(int, string)
0xb7e: Stack[-1] = "b6q01KlaraLaska"
0xb7f: Call2 0xa4a

0xb80: Pop(1)
0xb81: Push((int) 0)
0xb82: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xb83: IF (Stack[-1] == 0) GOTO 0xb86; Pop(1)

0xb84: Stack[-2] = (bool) 1
0xb85: Return(); Pop(0)

0xb86: Stack[-2] = (bool) 0
0xb87: Return(); Pop(0)

0xb88: PushEmpty()
0xb89: PushEmpty(int, string)
0xb8a: Stack[-1] = "b1q05"
0xb8b: Call2 0xa4a

0xb8c: Pop(1)
0xb8d: Push((int) 1000)
0xb8e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb8f: IF (Stack[-1] == 0) GOTO 0xb92; Pop(1)

0xb90: Stack[-2] = (bool) 1
0xb91: Return(); Pop(0)

0xb92: Stack[-2] = (bool) 0
0xb93: Return(); Pop(0)

0xb94: PushEmpty()
0xb95: PushEmpty(int, string)
0xb96: Stack[-1] = "oob12Laska1"
0xb97: Call2 0xa4a

0xb98: Pop(1)
0xb99: Push((int) 0)
0xb9a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb9b: IF (Stack[-1] == 0) GOTO 0xb9e; Pop(1)

0xb9c: Stack[-2] = (bool) 1
0xb9d: Return(); Pop(0)

0xb9e: Stack[-2] = (bool) 0
0xb9f: Return(); Pop(0)

0xba0: PushEmpty()
0xba1: PushEmpty(int, string)
0xba2: Stack[-1] = "oob1Laska1"
0xba3: Call2 0xa4a

0xba4: Pop(1)
0xba5: Push((int) 0)
0xba6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xba7: IF (Stack[-1] == 0) GOTO 0xbaa; Pop(1)

0xba8: Stack[-2] = (bool) 1
0xba9: Return(); Pop(0)

0xbaa: Stack[-2] = (bool) 0
0xbab: Return(); Pop(0)

0xbac: PushEmpty()
0xbad: PushEmpty(int, string)
0xbae: Stack[-1] = "b1q02"
0xbaf: Call2 0xa4a

0xbb0: Pop(1)
0xbb1: Push((int) 0)
0xbb2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbb3: IF (Stack[-1] == 0) GOTO 0xbb6; Pop(1)

0xbb4: Stack[-2] = (bool) 1
0xbb5: Return(); Pop(0)

0xbb6: Stack[-2] = (bool) 0
0xbb7: Return(); Pop(0)

0xbb8: PushEmpty()
0xbb9: PushEmpty(bool, object, string)
0xbba: Stack[-2] = Stack[-4]
0xbbb: Stack[-1] = "b1q02_blood"
0xbbc: Call2 0xa4f

0xbbd: Pop(2)
0xbbe: IF (Stack[-1] == 0) GOTO 0xbc8; Pop(1)

0xbbf: PushEmpty(int, string)
0xbc0: Stack[-1] = "b1q02"
0xbc1: Call2 0xa4a

0xbc2: Pop(1)
0xbc3: Push((int) 2)
0xbc4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbc5: IF (Stack[-1] == 0) GOTO 0xbc8; Pop(1)

0xbc6: Stack[-2] = (bool) 1
0xbc7: Return(); Pop(0)

0xbc8: Stack[-2] = (bool) 0
0xbc9: Return(); Pop(0)

0xbca: PushEmpty()
0xbcb: PushEmpty(int, string)
0xbcc: Stack[-1] = "oob1Laska2"
0xbcd: Call2 0xa4a

0xbce: Pop(1)
0xbcf: Push((int) 0)
0xbd0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbd1: IF (Stack[-1] == 0) GOTO 0xbd4; Pop(1)

0xbd2: Stack[-2] = (bool) 1
0xbd3: Return(); Pop(0)

0xbd4: Stack[-2] = (bool) 0
0xbd5: Return(); Pop(0)

0xbd6: PushEmpty()
0xbd7: PushEmpty(int, string)
0xbd8: Stack[-1] = "b1q02_dead"
0xbd9: Call2 0xa4a

0xbda: Pop(1)
0xbdb: Push((int) 0)
0xbdc: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xbdd: IF (Stack[-1] == 0) GOTO 0xbe0; Pop(1)

0xbde: Stack[-2] = (bool) 1
0xbdf: Return(); Pop(0)

0xbe0: Stack[-2] = (bool) 0
0xbe1: Return(); Pop(0)

0xbe2: PushEmpty()
0xbe3: PushEmpty(int, string)
0xbe4: Stack[-1] = "oob1Laska3"
0xbe5: Call2 0xa4a

0xbe6: Pop(1)
0xbe7: Push((int) 0)
0xbe8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbe9: IF (Stack[-1] == 0) GOTO 0xbec; Pop(1)

0xbea: Stack[-2] = (bool) 1
0xbeb: Return(); Pop(0)

0xbec: Stack[-2] = (bool) 0
0xbed: Return(); Pop(0)

0xbee: PushEmpty()
0xbef: PushEmpty(int, string)
0xbf0: Stack[-1] = "oob6Laska1"
0xbf1: Call2 0xa4a

0xbf2: Pop(1)
0xbf3: Push((int) 0)
0xbf4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbf5: IF (Stack[-1] == 0) GOTO 0xbf8; Pop(1)

0xbf6: Stack[-2] = (bool) 1
0xbf7: Return(); Pop(0)

0xbf8: Stack[-2] = (bool) 0
0xbf9: Return(); Pop(0)

0xbfa: PushEmpty(object, object)
0xbfb: Push((int) 200)
0xbfc: Push((int) 2)
0xbfd: Push((int) 517940)
0xbfe: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbff: Pop(3)
0xc00: PushEmpty(bool, object, int)
0xc01: Stack[-2] = Stack[-4]
0xc02: Stack[-1] = (int) -1
0xc03: Call2 0xc3b

0xc04: Pop(3)
0xc05: Return(); Pop(2)

0xc06: Stack[-1] = 0
0xc07: PushEmpty(object, object)
0xc08: Push((int) 203)
0xc09: Push((int) 2)
0xc0a: Push((int) 517943)
0xc0b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc0c: Pop(3)
0xc0d: PushEmpty(bool, object, int)
0xc0e: Stack[-2] = Stack[-4]
0xc0f: Stack[-1] = (int) 200
0xc10: Call2 0xc3b

0xc11: Pop(3)
0xc12: Return(); Pop(2)

0xc13: Stack[-1] = 0
0xc14: PushEmpty(object, object)
0xc15: Push((int) 204)
0xc16: Push((int) 2)
0xc17: Push((int) 518079)
0xc18: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc19: Pop(3)
0xc1a: PushEmpty(bool, object, int)
0xc1b: Stack[-2] = Stack[-4]
0xc1c: Stack[-1] = (int) 200
0xc1d: Call2 0xc3b

0xc1e: Pop(3)
0xc1f: Return(); Pop(2)

0xc20: Stack[-1] = 0
0xc21: PushEmpty(object, object)
0xc22: Push((int) 201)
0xc23: Push((int) 2)
0xc24: Push((int) 517941)
0xc25: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc26: Pop(3)
0xc27: PushEmpty(bool, object, int)
0xc28: Stack[-2] = Stack[-4]
0xc29: Stack[-1] = (int) 200
0xc2a: Call2 0xc3b

0xc2b: Pop(3)
0xc2c: Return(); Pop(2)

0xc2d: Stack[-1] = 0
0xc2e: PushEmpty(object, object)
0xc2f: @ GetDiaryRoot(Stack[-1])
0xc30: Pop(0)
0xc31: Pop(0); Push((bool) Stack[-1] == 0)
0xc32: IF (Stack[-1] == 0) GOTO 0xc38; Pop(1)

0xc33: Push("Can't retrieve diary root")
0xc34: @ Trace(Stack[-1])
0xc35: Pop(1)
0xc36: Stack[-3] = (bool) 0
0xc37: Return(); Pop(2)

0xc38: Stack[-3] = Stack[-1]
0xc39: Return(); Pop(2)

0xc3a: Stack[-1] = 0
0xc3b: PushEmpty(object, object, int, object, object, int)
0xc3c: PushEmpty(object)
0xc3d: Call2 0xc2e

0xc3e: Stack[-4] = Stack[-1]
0xc3f: Pop(1)
0xc40: @@ Find(Stack[-7], Stack[-2])
0xc41: Pop(0)
0xc42: Pop(0); Push((bool) Stack[-2] == 0)
0xc43: IF (Stack[-1] == 0) GOTO 0xc4a; Pop(1)

0xc44: Push("Can't find diary parent with id: ")
0xc45: Pop(1); Push(Stack[-1] + Stack[-8]);
0xc46: @ Trace(Stack[-1])
0xc47: Pop(1)
0xc48: Stack[-9] = (bool) 0
0xc49: Return(); Pop(6)

0xc4a: @@ AddChild(Stack[-8])
0xc4b: Pop(0)
0xc4c: Push((int) 7)
0xc4d: @ SendWorldWndMessage(Stack[-1])
0xc4e: Pop(1)
0xc4f: @@ GetCategory(Stack[-1])
0xc50: Pop(0)
0xc51: @ SetDiarySection(Stack[-1])
0xc52: Pop(0)
0xc53: Stack[-9] = (bool) 0
0xc54: Return(); Pop(6)

0xc55: Stack[-2] = 0
0xc56: Stack[-3] = 0
0xc57: PushEmpty(object, object, object, object)
0xc58: @ GetMainOutdoorScene(Stack[-2])
0xc59: Pop(0)
0xc5a: Pop(0); Push((bool) Stack[-2] == 0)
0xc5b: IF (Stack[-1] == 0) GOTO 0xc62; Pop(1)

0xc5c: Push("Can't find main outdoor scene")
0xc5d: @ Trace(Stack[-1])
0xc5e: Pop(1)
0xc5f: Stack[-1] = 0
0xc60: Stack[-5] = Stack[-1]
0xc61: Return(); Pop(4)

0xc62: @@ GetMap(Stack[-1])
0xc63: Pop(0)
0xc64: Stack[-5] = Stack[-1]
0xc65: Return(); Pop(4)

0xc66: Stack[-1] = 0
0xc67: Stack[-2] = 0
0xc68: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xc69: @ GetMainOutdoorScene(Stack[-2])
0xc6a: Pop(0)
0xc6b: Pop(0); Push((bool) Stack[-2] == 0)
0xc6c: IF (Stack[-1] == 0) GOTO 0xc71; Pop(1)

0xc6d: Push("Can't find main outdoor scene")
0xc6e: @ Trace(Stack[-1])
0xc6f: Pop(1)
0xc70: Return(); Pop(8)

0xc71: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xc72: Pop(0)
0xc73: Pop(0); Push((bool) Stack[-1] == 0)
0xc74: IF (Stack[-1] == 0) GOTO 0xc7b; Pop(1)

0xc75: Push("Warning: outdoor scene locator ")
0xc76: Pop(1); Push(Stack[-1] + Stack[-11]);
0xc77: Push(" doesnt exist")
0xc78: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc79: @ Trace(Stack[-1])
0xc7a: Pop(1)
0xc7b: @@ GetMap(Stack[-11])
0xc7c: Pop(0)
0xc7d: Pop(0); Push((bool) Stack[-11] == 0)
0xc7e: IF (Stack[-1] == 0) GOTO 0xc83; Pop(1)

0xc7f: Push("Can't find map")
0xc80: @ Trace(Stack[-1])
0xc81: Pop(1)
0xc82: Return(); Pop(8)

0xc83: Push(CvectorIndex(Stack[-4], 0))
0xc84: Push(CvectorIndex(Stack[-5], 2))
0xc85: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xc86: Pop(2)
0xc87: Return(); Pop(8)

0xc88: Stack[-2] = 0
0xc89: PushEmpty(int, int)
0xc8a: Push("branch")
0xc8b: @ GetVariable(Stack[-1], Stack[-2])
0xc8c: Pop(1)
0xc8d: Push((int) 0)
0xc8e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc8f: IF (Stack[-1] == 0) GOTO 0xc93; Pop(1)

0xc90: Stack[-3] = (int) 1
0xc91: Return(); Pop(2)

0xc92: GOTO 0xc98

0xc93: Push((int) 1)
0xc94: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc95: IF (Stack[-1] == 0) GOTO 0xc98; Pop(1)

0xc96: Stack[-3] = (int) 2
0xc97: Return(); Pop(2)

0xc98: Stack[-3] = (int) 3
0xc99: Return(); Pop(2)

0xc9a: PushEmpty(int, int)
0xc9b: Push("mt_laska")
0xc9c: @ GetVariable(Stack[-1], Stack[-2])
0xc9d: Pop(1)
0xc9e: Pop(0); Push((bool) Stack[-1] == 0)
0xc9f: IF (Stack[-1] == 0) GOTO 0xcaa; Pop(1)

0xca0: PushEmpty(int, object)
0xca1: Stack[-1] = Stack[-5]
0xca2: Push(-2, 1); TaskCall(4)
0xca3: Call2 0x4da

0xca4: Pop(-2, 1); TaskReturn
0xca5: Pop(2)
0xca6: Push("mt_laska")
0xca7: Push((int) 1)
0xca8: @ SetVariable(Stack[-2], Stack[-1])
0xca9: Pop(2)
0xcaa: PushEmpty(bool, int)
0xcab: Stack[-1] = (int) 1
0xcac: Call2 0xa9d

0xcad: Pop(1)
0xcae: IF (Stack[-1] == 0) GOTO 0xcb6; Pop(1)

0xcaf: PushEmpty(int, object)
0xcb0: Stack[-1] = Stack[-5]
0xcb1: Push(-2, 1); TaskCall(0)
0xcb2: Call2 0x0

0xcb3: Pop(-2, 1); TaskReturn
0xcb4: Pop(2)
0xcb5: Return(); Pop(2)

0xcb6: PushEmpty(bool, int)
0xcb7: Stack[-1] = (int) 6
0xcb8: Call2 0xa9d

0xcb9: Pop(1)
0xcba: IF (Stack[-1] == 0) GOTO 0xcc2; Pop(1)

0xcbb: PushEmpty(int, object)
0xcbc: Stack[-1] = Stack[-5]
0xcbd: Push(-2, 1); TaskCall(2)
0xcbe: Call2 0x3b5

0xcbf: Pop(-2, 1); TaskReturn
0xcc0: Pop(2)
0xcc1: Return(); Pop(2)

0xcc2: PushEmpty(bool, int)
0xcc3: Stack[-1] = (int) 12
0xcc4: Call2 0xa9d

0xcc5: Pop(1)
0xcc6: IF (Stack[-1] == 0) GOTO 0xcce; Pop(1)

0xcc7: PushEmpty(int, object)
0xcc8: Stack[-1] = Stack[-5]
0xcc9: Push(-2, 1); TaskCall(6)
0xcca: Call2 0x5ce

0xccb: Pop(-2, 1); TaskReturn
0xccc: Pop(2)
0xccd: Return(); Pop(2)

0xcce: PushEmpty(int, object)
0xccf: Stack[-1] = Stack[-5]
0xcd0: Push(-2, 1); TaskCall(8)
0xcd1: Call2 0x70c

0xcd2: Pop(-2, 1); TaskReturn
0xcd3: Pop(2)
0xcd4: Return(); Pop(2)

