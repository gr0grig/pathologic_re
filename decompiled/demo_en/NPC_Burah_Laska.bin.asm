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
	Welldie
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Neutral
	Autizm
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

RunOp = 0x7c3
RunTask = 10

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x245 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x58e Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6a5 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x799 Vars = (int, int)
	GTASK_10 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x80c Vars = (int)
		EVENT_6 Op = 0x832 Vars = ()
		EVENT_5 Op = 0x841 Vars = ()
		EVENT_45 Op = 0x84e Vars = (bool)
		EVENT_0 Op = 0x85a Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x905

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xaa7

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xaa5

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xaa9

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xaab

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xc73

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
0x31: Call2 0xa19

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x95a

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
0x48: Call2 0x949

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
0x56: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Welldie"
0x59: Call2 0x95

0x5a: Pop(1)
0x5b: Push((int) 535253)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0xb7e

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 535254)
0x66: Push((int) 37026)
0x67: Push((int) 36929)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 535341)
0x6b: Push((int) -1)
0x6c: Push((int) 37024)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 535342)
0x70: Push((int) -1)
0x71: Push((int) 37025)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x77

0x75: Return(); Pop(0)

0x76: GOTO 0x55

0x77: PushEmpty(bool)
0x78: Call2 0xaad

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @ lshWaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: PushEmpty(string)
0x81: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x82: Call2 0x9e4

0x83: Pop(1)
0x84: GOTO 0x7b

0x85: GOTO 0x94

0x86: Push("all")
0x87: Push("idle")
0x88: @ PlayAnimation(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: @ WaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: Push("all")
0x90: Push("idle")
0x91: @ PlayAnimation(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: GOTO 0x8a

0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: PushEmpty(bool)
0x97: Call2 0xaad

0x98: Pop(0)
0x99: Pop(1); Push((bool) Stack[-1] == 0)
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Return(); Pop(0)

0x9c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: PushEmpty(string, bool)
0xa0: Stack[-2] = Stack[-3]
0xa1: Push("")
0xa2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa4: Stack[-1] = (bool) 0
0xa5: GOTO 0xa7

0xa6: Stack[-1] = (bool) 1
0xa7: Call2 0x9f4

0xa8: Pop(2)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0xae: PushEmpty()
0xaf: Call2 0xa12

0xb0: Pop(0)
0xb1: Push((int) 36929)
0xb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0xacb

0xb8: Pop(2)
0xb9: Push((int) 36928)
0xba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xbc: PushEmpty(string)
0xbd: Stack[-1] = "Welldie"
0xbe: Call2 0x95

0xbf: Pop(1)
0xc0: Push((int) 535253)
0xc1: @@ SetMessage(Stack[-1])
0xc2: Pop(1)
0xc3: @@ ClearReplies()
0xc4: Pop(0)
0xc5: PushEmpty(bool, object)
0xc6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc7: Call2 0xb7e

0xc8: Pop(1)
0xc9: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xca: Push((int) 535254)
0xcb: Push((int) 37026)
0xcc: Push((int) 36929)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 535341)
0xd0: Push((int) -1)
0xd1: Push((int) 37024)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Push((int) 535342)
0xd5: Push((int) -1)
0xd6: Push((int) 37025)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Return(); Pop(0)

0xda: Push((int) 37026)
0xdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xdd: PushEmpty(string)
0xde: Stack[-1] = "Welldie"
0xdf: Call2 0x95

0xe0: Pop(1)
0xe1: Push((int) 535343)
0xe2: @@ SetMessage(Stack[-1])
0xe3: Pop(1)
0xe4: @@ ClearReplies()
0xe5: Pop(0)
0xe6: Push((int) 535344)
0xe7: Push((int) 37028)
0xe8: Push((int) 37027)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Push((int) 37031)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xef: Push((int) 37033)
0xf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Welldie"
0xf4: Call2 0x95

0xf5: Pop(1)
0xf6: Push((int) 535350)
0xf7: @@ SetMessage(Stack[-1])
0xf8: Pop(1)
0xf9: @@ ClearReplies()
0xfa: Pop(0)
0xfb: Push((int) 535351)
0xfc: Push((int) 37028)
0xfd: Push((int) 37034)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Push((int) 535352)
0x101: Push((int) -1)
0x102: Push((int) 37035)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: Return(); Pop(0)

0x106: Push((int) 37028)
0x107: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Welldie"
0x10b: Call2 0x95

0x10c: Pop(1)
0x10d: Push((int) 535345)
0x10e: @@ SetMessage(Stack[-1])
0x10f: Pop(1)
0x110: @@ ClearReplies()
0x111: Pop(0)
0x112: Push((int) 535346)
0x113: Push((int) -1)
0x114: Push((int) 37029)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Push((int) 535353)
0x118: Push((int) -1)
0x119: Push((int) 37037)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: Return(); Pop(0)

0x11d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x11e: PushEmpty(bool)
0x11f: Call2 0xaad

0x120: Pop(0)
0x121: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x122: @ lshStopAnimation()
0x123: Pop(0)
0x124: GOTO 0x127

0x125: @ StopAnimation()
0x126: Pop(0)
0x127: Return(); Pop(0)

0x128: GOTO 0xac

0x129: Return(); Pop(0)

0x12a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x12b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x12c: PushEmpty(bool, object, float)
0x12d: Stack[-2] = Stack[-12]
0x12e: Stack[-1] = (float) 70.0
0x12f: Call2 0x905

0x130: Pop(2)
0x131: Pop(1); Push((bool) Stack[-1] == 0)
0x132: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x133: Stack[-10] = (int) -2
0x134: Return(); Pop(8)

0x135: @ CreateDialog(Stack[-4])
0x136: Pop(0)
0x137: PushEmpty(int)
0x138: Call2 0xaa7

0x139: Pop(0)
0x13a: @@ SetNPCName(Stack[-1])
0x13b: Pop(1)
0x13c: PushEmpty(int)
0x13d: Call2 0xaa5

0x13e: Pop(0)
0x13f: @@ SetNPCDescription(Stack[-1])
0x140: Pop(1)
0x141: PushEmpty(string)
0x142: Call2 0xaa9

0x143: Pop(0)
0x144: @@ SetPhoto(Stack[-1])
0x145: Pop(1)
0x146: PushEmpty(string)
0x147: Call2 0xaab

0x148: Pop(0)
0x149: @@ SetPhoto2(Stack[-1])
0x14a: Pop(1)
0x14b: PushEmpty(int)
0x14c: Call2 0xc73

0x14d: Pop(0)
0x14e: @@ SetPlayerName(Stack[-1])
0x14f: Pop(1)
0x150: Stack[-2] = (int) -1
0x151: @ IsOverrideActive(Stack[-3])
0x152: Pop(0)
0x153: Push(Stack[-3])
0x154: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x155: Stack[-10] = (int) -2
0x156: Return(); Pop(8)

0x157: @ DoDialog(Stack[-4])
0x158: Pop(0)
0x159: PushEmpty(bool, object)
0x15a: PushEmpty(object)
0x15b: Call2 0xa19

0x15c: Stack[-2] = Stack[-1]
0x15d: Pop(1)
0x15e: Call2 0x95a

0x15f: Pop(2)
0x160: PushEmpty(object, object)
0x161: Stack[-2] = Stack[-11]
0x162: Stack[-1] = Stack[-6]
0x163: Push(-2, 4); TaskCall(3)
0x164: Call2 0x17b

0x165: Pop(-2, 4); TaskReturn
0x166: Pop(2)
0x167: @@ IsDialogEnd(Stack[-1])
0x168: Pop(0)
0x169: Pop(0); Push((bool) Stack[-1] == 0)
0x16a: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16b: @ sync()
0x16c: Pop(0)
0x16d: @@ IsDialogEnd(Stack[-1])
0x16e: Pop(0)
0x16f: GOTO 0x169

0x170: PushEmpty(object)
0x171: Stack[-1] = Stack[-10]
0x172: Call2 0x949

0x173: Pop(1)
0x174: @ StopDialog(Stack[-4])
0x175: Pop(0)
0x176: @@ GetReturnValue(Stack[-2])
0x177: Pop(0)
0x178: Stack[-10] = Stack[-2]
0x179: Return(); Pop(8)

0x17a: Stack[-4] = 0
0x17b: PushEmpty()
0x17c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x17d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x17e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x17f: Push((int) 1)
0x180: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x181: PushEmpty(bool)
0x182: Stack[-1] = (bool) 0
0x183: PushEmpty(bool, object)
0x184: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x185: Call2 0xb8a

0x186: Pop(1)
0x187: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x188: PushEmpty(bool, object)
0x189: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18a: Call2 0xbc0

0x18b: Pop(1)
0x18c: Pop(1); Push((bool) Stack[-1] == 0)
0x18d: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18e: Stack[-1] = (bool) 1
0x18f: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x190: PushEmpty(object, object)
0x191: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x192: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x193: Call2 0xaff

0x194: Pop(2)
0x195: PushEmpty(string)
0x196: Stack[-1] = "Neutral"
0x197: Call2 0x22f

0x198: Pop(1)
0x199: Push((int) 517892)
0x19a: @@ SetMessage(Stack[-1])
0x19b: Pop(1)
0x19c: @@ ClearReplies()
0x19d: Pop(0)
0x19e: Push((int) 519614)
0x19f: Push((int) 20800)
0x1a0: Push((int) 20799)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Push((int) 520399)
0x1a4: Push((int) 21606)
0x1a5: Push((int) 21605)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: GOTO 0x211

0x1a9: PushEmpty(string)
0x1aa: Stack[-1] = "Neutral"
0x1ab: Call2 0x22f

0x1ac: Pop(1)
0x1ad: Push((int) 517901)
0x1ae: @@ SetMessage(Stack[-1])
0x1af: Pop(1)
0x1b0: @@ ClearReplies()
0x1b1: Pop(0)
0x1b2: PushEmpty(bool)
0x1b3: Stack[-1] = (bool) 0
0x1b4: PushEmpty(bool, object)
0x1b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b6: Call2 0xb96

0x1b7: Pop(1)
0x1b8: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1b9: PushEmpty(bool, object)
0x1ba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bb: Call2 0xbc0

0x1bc: Pop(1)
0x1bd: Pop(1); Push((bool) Stack[-1] == 0)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bf: Stack[-1] = (bool) 1
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c1: Push((int) 517902)
0x1c2: Push((int) 19042)
0x1c3: Push((int) 19040)
0x1c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c5: Pop(3)
0x1c6: PushEmpty(bool)
0x1c7: Stack[-1] = (bool) 0
0x1c8: PushEmpty(bool)
0x1c9: Stack[-1] = (bool) 0
0x1ca: PushEmpty(bool, object)
0x1cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cc: Call2 0xba2

0x1cd: Pop(1)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1cf: PushEmpty(bool, object)
0x1d0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d1: Call2 0xbb4

0x1d2: Pop(1)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d4: Stack[-1] = (bool) 1
0x1d5: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d6: PushEmpty(bool, object)
0x1d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d8: Call2 0xbc0

0x1d9: Pop(1)
0x1da: Pop(1); Push((bool) Stack[-1] == 0)
0x1db: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1dc: Stack[-1] = (bool) 1
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1de: Push((int) 517906)
0x1df: Push((int) 19045)
0x1e0: Push((int) 19044)
0x1e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e2: Pop(3)
0x1e3: PushEmpty(bool)
0x1e4: Stack[-1] = (bool) 0
0x1e5: PushEmpty(bool, object)
0x1e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e7: Call2 0xbc0

0x1e8: Pop(1)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ea: PushEmpty(bool, object)
0x1eb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ec: Call2 0xbcc

0x1ed: Pop(1)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ef: Stack[-1] = (bool) 1
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f1: Push((int) 517978)
0x1f2: Push((int) 20805)
0x1f3: Push((int) 19111)
0x1f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f5: Pop(3)
0x1f6: PushEmpty(bool)
0x1f7: Stack[-1] = (bool) 0
0x1f8: PushEmpty(bool, object)
0x1f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fa: Call2 0xb5a

0x1fb: Pop(1)
0x1fc: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1fd: PushEmpty(bool, object)
0x1fe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ff: Call2 0xb72

0x200: Pop(1)
0x201: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x202: Stack[-1] = (bool) 1
0x203: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x204: Push((int) 527102)
0x205: Push((int) 28401)
0x206: Push((int) 28400)
0x207: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x208: Pop(3)
0x209: Push((int) 517903)
0x20a: Push((int) -1)
0x20b: Push((int) 19041)
0x20c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20d: Pop(3)
0x20e: GOTO 0x211

0x20f: Return(); Pop(0)

0x210: GOTO 0x17f

0x211: PushEmpty(bool)
0x212: Call2 0xaad

0x213: Pop(0)
0x214: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x215: @ lshWaitForAnimEnd()
0x216: Pop(0)
0x217: Push( Stack[3 + Tasks[-1].StackPointer] )
0x218: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x219: GOTO 0x21f

0x21a: PushEmpty(string)
0x21b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x21c: Call2 0x9e4

0x21d: Pop(1)
0x21e: GOTO 0x215

0x21f: GOTO 0x22e

0x220: Push("all")
0x221: Push("idle")
0x222: @ PlayAnimation(Stack[-2], Stack[-1])
0x223: Pop(2)
0x224: @ WaitForAnimEnd()
0x225: Pop(0)
0x226: Push( Stack[3 + Tasks[-1].StackPointer] )
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: GOTO 0x22e

0x229: Push("all")
0x22a: Push("idle")
0x22b: @ PlayAnimation(Stack[-2], Stack[-1])
0x22c: Pop(2)
0x22d: GOTO 0x224

0x22e: Return(); Pop(0)

0x22f: PushEmpty()
0x230: PushEmpty(bool)
0x231: Call2 0xaad

0x232: Pop(0)
0x233: Pop(1); Push((bool) Stack[-1] == 0)
0x234: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x235: Return(); Pop(0)

0x236: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x237: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x238: Return(); Pop(0)

0x239: PushEmpty(string, bool)
0x23a: Stack[-2] = Stack[-3]
0x23b: Push("")
0x23c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23e: Stack[-1] = (bool) 0
0x23f: GOTO 0x241

0x240: Stack[-1] = (bool) 1
0x241: Call2 0x9f4

0x242: Pop(2)
0x243: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x244: Return(); Pop(0)

0x245: PushEmpty()
0x246: Push((int) 1)
0x247: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x248: PushEmpty()
0x249: Call2 0xa12

0x24a: Pop(0)
0x24b: Push((int) 19038)
0x24c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x24e: PushEmpty(object, object)
0x24f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x250: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x251: Call2 0xb05

0x252: Pop(2)
0x253: PushEmpty(object, object)
0x254: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x255: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x256: Call2 0xaef

0x257: Pop(2)
0x258: Push((int) 20803)
0x259: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25a: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x25b: PushEmpty(object, object)
0x25c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x25d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25e: Call2 0xb05

0x25f: Pop(2)
0x260: PushEmpty(object, object)
0x261: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x262: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x263: Call2 0xaef

0x264: Pop(2)
0x265: Push((int) 21611)
0x266: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x268: PushEmpty(object, object)
0x269: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x26a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26b: Call2 0xb05

0x26c: Pop(2)
0x26d: PushEmpty(object, object)
0x26e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x26f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x270: Call2 0xaef

0x271: Pop(2)
0x272: Push((int) 19043)
0x273: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x274: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x275: PushEmpty(object, object)
0x276: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x277: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x278: Call2 0xb05

0x279: Pop(2)
0x27a: PushEmpty(object, object)
0x27b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27d: Call2 0xaef

0x27e: Pop(2)
0x27f: Push((int) 19044)
0x280: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x282: PushEmpty(object, object)
0x283: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x284: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x285: Call2 0xb3b

0x286: Pop(2)
0x287: Push((int) 19046)
0x288: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x28a: PushEmpty(object, object)
0x28b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x28c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28d: Call2 0xb28

0x28e: Pop(2)
0x28f: PushEmpty(object, object)
0x290: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x291: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x292: Call2 0xae1

0x293: Pop(2)
0x294: Push((int) 19111)
0x295: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x296: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x297: PushEmpty(object, object)
0x298: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x299: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29a: Call2 0xb41

0x29b: Pop(2)
0x29c: Push((int) 19113)
0x29d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29e: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x29f: PushEmpty(object, object)
0x2a0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a2: Call2 0xae8

0x2a3: Pop(2)
0x2a4: PushEmpty(object, object)
0x2a5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a7: Call2 0xb4e

0x2a8: Pop(2)
0x2a9: PushEmpty(object, object)
0x2aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ac: Call2 0xb47

0x2ad: Pop(2)
0x2ae: Push((int) 28400)
0x2af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b1: PushEmpty(object, object)
0x2b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b4: Call2 0xab5

0x2b5: Pop(2)
0x2b6: Push((int) 28410)
0x2b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b8: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2b9: PushEmpty(object, object)
0x2ba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2bc: Call2 0xabb

0x2bd: Pop(2)
0x2be: PushEmpty(object, object)
0x2bf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c1: Call2 0xad1

0x2c2: Pop(2)
0x2c3: Push((int) 28411)
0x2c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c5: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2c6: PushEmpty(object, object)
0x2c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c9: Call2 0xabb

0x2ca: Pop(2)
0x2cb: PushEmpty(object, object)
0x2cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ce: Call2 0xad1

0x2cf: Pop(2)
0x2d0: Push((int) 19030)
0x2d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x2d3: PushEmpty(bool)
0x2d4: Stack[-1] = (bool) 0
0x2d5: PushEmpty(bool, object)
0x2d6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d7: Call2 0xb8a

0x2d8: Pop(1)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2da: PushEmpty(bool, object)
0x2db: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2dc: Call2 0xbc0

0x2dd: Pop(1)
0x2de: Pop(1); Push((bool) Stack[-1] == 0)
0x2df: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2e0: Stack[-1] = (bool) 1
0x2e1: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2e2: PushEmpty(object, object)
0x2e3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e5: Call2 0xaff

0x2e6: Pop(2)
0x2e7: PushEmpty(string)
0x2e8: Stack[-1] = "Neutral"
0x2e9: Call2 0x22f

0x2ea: Pop(1)
0x2eb: Push((int) 517892)
0x2ec: @@ SetMessage(Stack[-1])
0x2ed: Pop(1)
0x2ee: @@ ClearReplies()
0x2ef: Pop(0)
0x2f0: Push((int) 519614)
0x2f1: Push((int) 20800)
0x2f2: Push((int) 20799)
0x2f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f4: Pop(3)
0x2f5: Push((int) 520399)
0x2f6: Push((int) 21606)
0x2f7: Push((int) 21605)
0x2f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f9: Pop(3)
0x2fa: Return(); Pop(0)

0x2fb: PushEmpty(string)
0x2fc: Stack[-1] = "Neutral"
0x2fd: Call2 0x22f

0x2fe: Pop(1)
0x2ff: Push((int) 517901)
0x300: @@ SetMessage(Stack[-1])
0x301: Pop(1)
0x302: @@ ClearReplies()
0x303: Pop(0)
0x304: PushEmpty(bool)
0x305: Stack[-1] = (bool) 0
0x306: PushEmpty(bool, object)
0x307: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x308: Call2 0xb96

0x309: Pop(1)
0x30a: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x30b: PushEmpty(bool, object)
0x30c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30d: Call2 0xbc0

0x30e: Pop(1)
0x30f: Pop(1); Push((bool) Stack[-1] == 0)
0x310: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x311: Stack[-1] = (bool) 1
0x312: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x313: Push((int) 517902)
0x314: Push((int) 19042)
0x315: Push((int) 19040)
0x316: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x317: Pop(3)
0x318: PushEmpty(bool)
0x319: Stack[-1] = (bool) 0
0x31a: PushEmpty(bool)
0x31b: Stack[-1] = (bool) 0
0x31c: PushEmpty(bool, object)
0x31d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x31e: Call2 0xba2

0x31f: Pop(1)
0x320: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x321: PushEmpty(bool, object)
0x322: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x323: Call2 0xbb4

0x324: Pop(1)
0x325: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x326: Stack[-1] = (bool) 1
0x327: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x328: PushEmpty(bool, object)
0x329: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32a: Call2 0xbc0

0x32b: Pop(1)
0x32c: Pop(1); Push((bool) Stack[-1] == 0)
0x32d: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32e: Stack[-1] = (bool) 1
0x32f: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x330: Push((int) 517906)
0x331: Push((int) 19045)
0x332: Push((int) 19044)
0x333: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x334: Pop(3)
0x335: PushEmpty(bool)
0x336: Stack[-1] = (bool) 0
0x337: PushEmpty(bool, object)
0x338: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x339: Call2 0xbc0

0x33a: Pop(1)
0x33b: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x33c: PushEmpty(bool, object)
0x33d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x33e: Call2 0xbcc

0x33f: Pop(1)
0x340: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x341: Stack[-1] = (bool) 1
0x342: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x343: Push((int) 517978)
0x344: Push((int) 20805)
0x345: Push((int) 19111)
0x346: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x347: Pop(3)
0x348: PushEmpty(bool)
0x349: Stack[-1] = (bool) 0
0x34a: PushEmpty(bool, object)
0x34b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34c: Call2 0xb5a

0x34d: Pop(1)
0x34e: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x34f: PushEmpty(bool, object)
0x350: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x351: Call2 0xb72

0x352: Pop(1)
0x353: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x354: Stack[-1] = (bool) 1
0x355: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x356: Push((int) 527102)
0x357: Push((int) 28401)
0x358: Push((int) 28400)
0x359: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35a: Pop(3)
0x35b: Push((int) 517903)
0x35c: Push((int) -1)
0x35d: Push((int) 19041)
0x35e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35f: Pop(3)
0x360: Return(); Pop(0)

0x361: Push((int) 28401)
0x362: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x364: PushEmpty(string)
0x365: Stack[-1] = "Autizm"
0x366: Call2 0x22f

0x367: Pop(1)
0x368: Push((int) 527103)
0x369: @@ SetMessage(Stack[-1])
0x36a: Pop(1)
0x36b: @@ ClearReplies()
0x36c: Pop(0)
0x36d: Push((int) 527104)
0x36e: Push((int) 28403)
0x36f: Push((int) 28402)
0x370: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x371: Pop(3)
0x372: Return(); Pop(0)

0x373: Push((int) 28403)
0x374: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x375: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x376: PushEmpty(string)
0x377: Stack[-1] = "Autizm"
0x378: Call2 0x22f

0x379: Pop(1)
0x37a: Push((int) 527105)
0x37b: @@ SetMessage(Stack[-1])
0x37c: Pop(1)
0x37d: @@ ClearReplies()
0x37e: Pop(0)
0x37f: Push((int) 527106)
0x380: Push((int) 28405)
0x381: Push((int) 28404)
0x382: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x383: Pop(3)
0x384: Return(); Pop(0)

0x385: Push((int) 28405)
0x386: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x387: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x388: PushEmpty(string)
0x389: Stack[-1] = "Autizm"
0x38a: Call2 0x22f

0x38b: Pop(1)
0x38c: Push((int) 527107)
0x38d: @@ SetMessage(Stack[-1])
0x38e: Pop(1)
0x38f: @@ ClearReplies()
0x390: Pop(0)
0x391: Push((int) 527108)
0x392: Push((int) 28407)
0x393: Push((int) 28406)
0x394: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x395: Pop(3)
0x396: Return(); Pop(0)

0x397: Push((int) 28407)
0x398: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x399: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x39a: PushEmpty(string)
0x39b: Stack[-1] = "Welldie"
0x39c: Call2 0x22f

0x39d: Pop(1)
0x39e: Push((int) 527109)
0x39f: @@ SetMessage(Stack[-1])
0x3a0: Pop(1)
0x3a1: @@ ClearReplies()
0x3a2: Pop(0)
0x3a3: Push((int) 527110)
0x3a4: Push((int) 28409)
0x3a5: Push((int) 28408)
0x3a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a7: Pop(3)
0x3a8: Return(); Pop(0)

0x3a9: Push((int) 28409)
0x3aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3ac: PushEmpty(string)
0x3ad: Stack[-1] = "Welldie"
0x3ae: Call2 0x22f

0x3af: Pop(1)
0x3b0: Push((int) 527111)
0x3b1: @@ SetMessage(Stack[-1])
0x3b2: Pop(1)
0x3b3: @@ ClearReplies()
0x3b4: Pop(0)
0x3b5: Push((int) 527112)
0x3b6: Push((int) -1)
0x3b7: Push((int) 28410)
0x3b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b9: Pop(3)
0x3ba: Push((int) 527113)
0x3bb: Push((int) -1)
0x3bc: Push((int) 28411)
0x3bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3be: Pop(3)
0x3bf: Return(); Pop(0)

0x3c0: Push((int) 20805)
0x3c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3c3: PushEmpty(string)
0x3c4: Stack[-1] = "Pain"
0x3c5: Call2 0x22f

0x3c6: Pop(1)
0x3c7: Push((int) 519620)
0x3c8: @@ SetMessage(Stack[-1])
0x3c9: Pop(1)
0x3ca: @@ ClearReplies()
0x3cb: Pop(0)
0x3cc: Push((int) 519621)
0x3cd: Push((int) 20808)
0x3ce: Push((int) 20806)
0x3cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d0: Pop(3)
0x3d1: Push((int) 520405)
0x3d2: Push((int) 20808)
0x3d3: Push((int) 21612)
0x3d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d5: Pop(3)
0x3d6: Push((int) 519622)
0x3d7: Push((int) 20808)
0x3d8: Push((int) 20807)
0x3d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3da: Pop(3)
0x3db: Return(); Pop(0)

0x3dc: Push((int) 20808)
0x3dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3de: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3df: PushEmpty(string)
0x3e0: Stack[-1] = "Pain"
0x3e1: Call2 0x22f

0x3e2: Pop(1)
0x3e3: Push((int) 519623)
0x3e4: @@ SetMessage(Stack[-1])
0x3e5: Pop(1)
0x3e6: @@ ClearReplies()
0x3e7: Pop(0)
0x3e8: Push((int) 517980)
0x3e9: Push((int) -1)
0x3ea: Push((int) 19113)
0x3eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ec: Pop(3)
0x3ed: Return(); Pop(0)

0x3ee: Push((int) 19045)
0x3ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f0: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3f1: PushEmpty(string)
0x3f2: Stack[-1] = "Welldie"
0x3f3: Call2 0x22f

0x3f4: Pop(1)
0x3f5: Push((int) 517907)
0x3f6: @@ SetMessage(Stack[-1])
0x3f7: Pop(1)
0x3f8: @@ ClearReplies()
0x3f9: Pop(0)
0x3fa: Push((int) 517908)
0x3fb: Push((int) -1)
0x3fc: Push((int) 19046)
0x3fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fe: Pop(3)
0x3ff: Return(); Pop(0)

0x400: Push((int) 19042)
0x401: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x403: PushEmpty(string)
0x404: Stack[-1] = "Welldie"
0x405: Call2 0x22f

0x406: Pop(1)
0x407: Push((int) 517904)
0x408: @@ SetMessage(Stack[-1])
0x409: Pop(1)
0x40a: @@ ClearReplies()
0x40b: Pop(0)
0x40c: Push((int) 520402)
0x40d: Push((int) 21610)
0x40e: Push((int) 21609)
0x40f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x410: Pop(3)
0x411: Push((int) 517905)
0x412: Push((int) -1)
0x413: Push((int) 19043)
0x414: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x415: Pop(3)
0x416: Return(); Pop(0)

0x417: Push((int) 21610)
0x418: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x419: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x41a: PushEmpty(string)
0x41b: Stack[-1] = "Welldie"
0x41c: Call2 0x22f

0x41d: Pop(1)
0x41e: Push((int) 520403)
0x41f: @@ SetMessage(Stack[-1])
0x420: Pop(1)
0x421: @@ ClearReplies()
0x422: Pop(0)
0x423: Push((int) 520404)
0x424: Push((int) -1)
0x425: Push((int) 21611)
0x426: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x427: Pop(3)
0x428: Return(); Pop(0)

0x429: Push((int) 21606)
0x42a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42b: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x42c: PushEmpty(string)
0x42d: Stack[-1] = "Pain"
0x42e: Call2 0x22f

0x42f: Pop(1)
0x430: Push((int) 520400)
0x431: @@ SetMessage(Stack[-1])
0x432: Pop(1)
0x433: @@ ClearReplies()
0x434: Pop(0)
0x435: Push((int) 520401)
0x436: Push((int) 20800)
0x437: Push((int) 21607)
0x438: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x439: Pop(3)
0x43a: Return(); Pop(0)

0x43b: Push((int) 20800)
0x43c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x43d: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x43e: PushEmpty(string)
0x43f: Stack[-1] = "Pain"
0x440: Call2 0x22f

0x441: Pop(1)
0x442: Push((int) 519615)
0x443: @@ SetMessage(Stack[-1])
0x444: Pop(1)
0x445: @@ ClearReplies()
0x446: Pop(0)
0x447: Push((int) 517896)
0x448: Push((int) 19035)
0x449: Push((int) 19034)
0x44a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44b: Pop(3)
0x44c: Push((int) 517893)
0x44d: Push((int) 19032)
0x44e: Push((int) 19031)
0x44f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x450: Pop(3)
0x451: Push((int) 520398)
0x452: Push((int) -1)
0x453: Push((int) 21604)
0x454: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x455: Pop(3)
0x456: Return(); Pop(0)

0x457: Push((int) 19032)
0x458: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x459: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x45a: PushEmpty(string)
0x45b: Stack[-1] = "Pain"
0x45c: Call2 0x22f

0x45d: Pop(1)
0x45e: Push((int) 517894)
0x45f: @@ SetMessage(Stack[-1])
0x460: Pop(1)
0x461: @@ ClearReplies()
0x462: Pop(0)
0x463: Push((int) 517895)
0x464: Push((int) -1)
0x465: Push((int) 19033)
0x466: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x467: Pop(3)
0x468: Return(); Pop(0)

0x469: Push((int) 19035)
0x46a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46b: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x46c: PushEmpty(string)
0x46d: Stack[-1] = "Autizm"
0x46e: Call2 0x22f

0x46f: Pop(1)
0x470: Push((int) 517897)
0x471: @@ SetMessage(Stack[-1])
0x472: Pop(1)
0x473: @@ ClearReplies()
0x474: Pop(0)
0x475: Push((int) 517898)
0x476: Push((int) 19037)
0x477: Push((int) 19036)
0x478: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x479: Pop(3)
0x47a: Push((int) 527070)
0x47b: Push((int) 28367)
0x47c: Push((int) 28366)
0x47d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47e: Pop(3)
0x47f: Return(); Pop(0)

0x480: Push((int) 28367)
0x481: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x482: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x483: PushEmpty(string)
0x484: Stack[-1] = "Autizm"
0x485: Call2 0x22f

0x486: Pop(1)
0x487: Push((int) 527071)
0x488: @@ SetMessage(Stack[-1])
0x489: Pop(1)
0x48a: @@ ClearReplies()
0x48b: Pop(0)
0x48c: Push((int) 527072)
0x48d: Push((int) 28369)
0x48e: Push((int) 28368)
0x48f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x490: Pop(3)
0x491: Return(); Pop(0)

0x492: Push((int) 28369)
0x493: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x494: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x495: PushEmpty(string)
0x496: Stack[-1] = "Autizm"
0x497: Call2 0x22f

0x498: Pop(1)
0x499: Push((int) 527073)
0x49a: @@ SetMessage(Stack[-1])
0x49b: Pop(1)
0x49c: @@ ClearReplies()
0x49d: Pop(0)
0x49e: Push((int) 527074)
0x49f: Push((int) 19037)
0x4a0: Push((int) 28370)
0x4a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a2: Pop(3)
0x4a3: Return(); Pop(0)

0x4a4: Push((int) 19037)
0x4a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a6: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4a7: PushEmpty(string)
0x4a8: Stack[-1] = "Autizm"
0x4a9: Call2 0x22f

0x4aa: Pop(1)
0x4ab: Push((int) 517899)
0x4ac: @@ SetMessage(Stack[-1])
0x4ad: Pop(1)
0x4ae: @@ ClearReplies()
0x4af: Pop(0)
0x4b0: Push((int) 517900)
0x4b1: Push((int) -1)
0x4b2: Push((int) 19038)
0x4b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b4: Pop(3)
0x4b5: Push((int) 519616)
0x4b6: Push((int) 20802)
0x4b7: Push((int) 20801)
0x4b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b9: Pop(3)
0x4ba: Return(); Pop(0)

0x4bb: Push((int) 20802)
0x4bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4be: PushEmpty(string)
0x4bf: Stack[-1] = "Autizm"
0x4c0: Call2 0x22f

0x4c1: Pop(1)
0x4c2: Push((int) 519617)
0x4c3: @@ SetMessage(Stack[-1])
0x4c4: Pop(1)
0x4c5: @@ ClearReplies()
0x4c6: Pop(0)
0x4c7: Push((int) 519618)
0x4c8: Push((int) -1)
0x4c9: Push((int) 20803)
0x4ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cb: Pop(3)
0x4cc: Push((int) 519619)
0x4cd: Push((int) -1)
0x4ce: Push((int) 20804)
0x4cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d0: Pop(3)
0x4d1: Return(); Pop(0)

0x4d2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4d3: PushEmpty(bool)
0x4d4: Call2 0xaad

0x4d5: Pop(0)
0x4d6: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d7: @ lshStopAnimation()
0x4d8: Pop(0)
0x4d9: GOTO 0x4dc

0x4da: @ StopAnimation()
0x4db: Pop(0)
0x4dc: Return(); Pop(0)

0x4dd: GOTO 0x246

0x4de: Return(); Pop(0)

0x4df: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4e0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4e1: PushEmpty(bool, object, float)
0x4e2: Stack[-2] = Stack[-12]
0x4e3: Stack[-1] = (float) 70.0
0x4e4: Call2 0x905

0x4e5: Pop(2)
0x4e6: Pop(1); Push((bool) Stack[-1] == 0)
0x4e7: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e8: Stack[-10] = (int) -2
0x4e9: Return(); Pop(8)

0x4ea: @ CreateDialog(Stack[-4])
0x4eb: Pop(0)
0x4ec: PushEmpty(int)
0x4ed: Call2 0xaa7

0x4ee: Pop(0)
0x4ef: @@ SetNPCName(Stack[-1])
0x4f0: Pop(1)
0x4f1: PushEmpty(int)
0x4f2: Call2 0xaa5

0x4f3: Pop(0)
0x4f4: @@ SetNPCDescription(Stack[-1])
0x4f5: Pop(1)
0x4f6: PushEmpty(string)
0x4f7: Call2 0xaa9

0x4f8: Pop(0)
0x4f9: @@ SetPhoto(Stack[-1])
0x4fa: Pop(1)
0x4fb: PushEmpty(string)
0x4fc: Call2 0xaab

0x4fd: Pop(0)
0x4fe: @@ SetPhoto2(Stack[-1])
0x4ff: Pop(1)
0x500: PushEmpty(int)
0x501: Call2 0xc73

0x502: Pop(0)
0x503: @@ SetPlayerName(Stack[-1])
0x504: Pop(1)
0x505: Stack[-2] = (int) -1
0x506: @ IsOverrideActive(Stack[-3])
0x507: Pop(0)
0x508: Push(Stack[-3])
0x509: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x50a: Stack[-10] = (int) -2
0x50b: Return(); Pop(8)

0x50c: @ DoDialog(Stack[-4])
0x50d: Pop(0)
0x50e: PushEmpty(bool, object)
0x50f: PushEmpty(object)
0x510: Call2 0xa19

0x511: Stack[-2] = Stack[-1]
0x512: Pop(1)
0x513: Call2 0x95a

0x514: Pop(2)
0x515: PushEmpty(object, object)
0x516: Stack[-2] = Stack[-11]
0x517: Stack[-1] = Stack[-6]
0x518: Push(-2, 4); TaskCall(5)
0x519: Call2 0x530

0x51a: Pop(-2, 4); TaskReturn
0x51b: Pop(2)
0x51c: @@ IsDialogEnd(Stack[-1])
0x51d: Pop(0)
0x51e: Pop(0); Push((bool) Stack[-1] == 0)
0x51f: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x520: @ sync()
0x521: Pop(0)
0x522: @@ IsDialogEnd(Stack[-1])
0x523: Pop(0)
0x524: GOTO 0x51e

0x525: PushEmpty(object)
0x526: Stack[-1] = Stack[-10]
0x527: Call2 0x949

0x528: Pop(1)
0x529: @ StopDialog(Stack[-4])
0x52a: Pop(0)
0x52b: @@ GetReturnValue(Stack[-2])
0x52c: Pop(0)
0x52d: Stack[-10] = Stack[-2]
0x52e: Return(); Pop(8)

0x52f: Stack[-4] = 0
0x530: PushEmpty()
0x531: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x532: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x533: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x534: Push((int) 1)
0x535: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x536: PushEmpty(string)
0x537: Stack[-1] = "Welldie"
0x538: Call2 0x578

0x539: Pop(1)
0x53a: Push((int) 520656)
0x53b: @@ SetMessage(Stack[-1])
0x53c: Pop(1)
0x53d: @@ ClearReplies()
0x53e: Pop(0)
0x53f: PushEmpty(bool)
0x540: Stack[-1] = (bool) 0
0x541: PushEmpty(bool, object)
0x542: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x543: Call2 0xbd8

0x544: Pop(1)
0x545: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x546: PushEmpty(bool, object)
0x547: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x548: Call2 0xb66

0x549: Pop(1)
0x54a: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x54b: Stack[-1] = (bool) 1
0x54c: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x54d: Push((int) 520657)
0x54e: Push((int) 21869)
0x54f: Push((int) 21868)
0x550: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x551: Pop(3)
0x552: Push((int) 520664)
0x553: Push((int) -1)
0x554: Push((int) 21875)
0x555: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x556: Pop(3)
0x557: GOTO 0x55a

0x558: Return(); Pop(0)

0x559: GOTO 0x534

0x55a: PushEmpty(bool)
0x55b: Call2 0xaad

0x55c: Pop(0)
0x55d: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x55e: @ lshWaitForAnimEnd()
0x55f: Pop(0)
0x560: Push( Stack[3 + Tasks[-1].StackPointer] )
0x561: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x562: GOTO 0x568

0x563: PushEmpty(string)
0x564: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x565: Call2 0x9e4

0x566: Pop(1)
0x567: GOTO 0x55e

0x568: GOTO 0x577

0x569: Push("all")
0x56a: Push("idle")
0x56b: @ PlayAnimation(Stack[-2], Stack[-1])
0x56c: Pop(2)
0x56d: @ WaitForAnimEnd()
0x56e: Pop(0)
0x56f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x570: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x571: GOTO 0x577

0x572: Push("all")
0x573: Push("idle")
0x574: @ PlayAnimation(Stack[-2], Stack[-1])
0x575: Pop(2)
0x576: GOTO 0x56d

0x577: Return(); Pop(0)

0x578: PushEmpty()
0x579: PushEmpty(bool)
0x57a: Call2 0xaad

0x57b: Pop(0)
0x57c: Pop(1); Push((bool) Stack[-1] == 0)
0x57d: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x57e: Return(); Pop(0)

0x57f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x580: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x581: Return(); Pop(0)

0x582: PushEmpty(string, bool)
0x583: Stack[-2] = Stack[-3]
0x584: Push("")
0x585: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x586: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x587: Stack[-1] = (bool) 0
0x588: GOTO 0x58a

0x589: Stack[-1] = (bool) 1
0x58a: Call2 0x9f4

0x58b: Pop(2)
0x58c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x58d: Return(); Pop(0)

0x58e: PushEmpty()
0x58f: Push((int) 1)
0x590: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x591: PushEmpty()
0x592: Call2 0xa12

0x593: Pop(0)
0x594: Push((int) 21868)
0x595: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x596: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x597: PushEmpty(object, object)
0x598: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x599: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x59a: Call2 0xaaf

0x59b: Pop(2)
0x59c: Push((int) 21867)
0x59d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59e: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x59f: PushEmpty(string)
0x5a0: Stack[-1] = "Welldie"
0x5a1: Call2 0x578

0x5a2: Pop(1)
0x5a3: Push((int) 520656)
0x5a4: @@ SetMessage(Stack[-1])
0x5a5: Pop(1)
0x5a6: @@ ClearReplies()
0x5a7: Pop(0)
0x5a8: PushEmpty(bool)
0x5a9: Stack[-1] = (bool) 0
0x5aa: PushEmpty(bool, object)
0x5ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5ac: Call2 0xbd8

0x5ad: Pop(1)
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5af: PushEmpty(bool, object)
0x5b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b1: Call2 0xb66

0x5b2: Pop(1)
0x5b3: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5b4: Stack[-1] = (bool) 1
0x5b5: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b6: Push((int) 520657)
0x5b7: Push((int) 21869)
0x5b8: Push((int) 21868)
0x5b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ba: Pop(3)
0x5bb: Push((int) 520664)
0x5bc: Push((int) -1)
0x5bd: Push((int) 21875)
0x5be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bf: Pop(3)
0x5c0: Return(); Pop(0)

0x5c1: Push((int) 21869)
0x5c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c3: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5c4: PushEmpty(string)
0x5c5: Stack[-1] = "Welldie"
0x5c6: Call2 0x578

0x5c7: Pop(1)
0x5c8: Push((int) 520658)
0x5c9: @@ SetMessage(Stack[-1])
0x5ca: Pop(1)
0x5cb: @@ ClearReplies()
0x5cc: Pop(0)
0x5cd: Push((int) 520659)
0x5ce: Push((int) 21871)
0x5cf: Push((int) 21870)
0x5d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d1: Pop(3)
0x5d2: Return(); Pop(0)

0x5d3: Push((int) 21871)
0x5d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d5: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5d6: PushEmpty(string)
0x5d7: Stack[-1] = "Autizm"
0x5d8: Call2 0x578

0x5d9: Pop(1)
0x5da: Push((int) 520660)
0x5db: @@ SetMessage(Stack[-1])
0x5dc: Pop(1)
0x5dd: @@ ClearReplies()
0x5de: Pop(0)
0x5df: Push((int) 520661)
0x5e0: Push((int) 21873)
0x5e1: Push((int) 21872)
0x5e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e3: Pop(3)
0x5e4: Return(); Pop(0)

0x5e5: Push((int) 21873)
0x5e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e7: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5e8: PushEmpty(string)
0x5e9: Stack[-1] = "Autizm"
0x5ea: Call2 0x578

0x5eb: Pop(1)
0x5ec: Push((int) 520662)
0x5ed: @@ SetMessage(Stack[-1])
0x5ee: Pop(1)
0x5ef: @@ ClearReplies()
0x5f0: Pop(0)
0x5f1: Push((int) 520663)
0x5f2: Push((int) -1)
0x5f3: Push((int) 21874)
0x5f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f5: Pop(3)
0x5f6: Return(); Pop(0)

0x5f7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5f8: PushEmpty(bool)
0x5f9: Call2 0xaad

0x5fa: Pop(0)
0x5fb: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fc: @ lshStopAnimation()
0x5fd: Pop(0)
0x5fe: GOTO 0x601

0x5ff: @ StopAnimation()
0x600: Pop(0)
0x601: Return(); Pop(0)

0x602: GOTO 0x58f

0x603: Return(); Pop(0)

0x604: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x605: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x606: PushEmpty(bool, object, float)
0x607: Stack[-2] = Stack[-12]
0x608: Stack[-1] = (float) 70.0
0x609: Call2 0x905

0x60a: Pop(2)
0x60b: Pop(1); Push((bool) Stack[-1] == 0)
0x60c: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60d: Stack[-10] = (int) -2
0x60e: Return(); Pop(8)

0x60f: @ CreateDialog(Stack[-4])
0x610: Pop(0)
0x611: PushEmpty(int)
0x612: Call2 0xaa7

0x613: Pop(0)
0x614: @@ SetNPCName(Stack[-1])
0x615: Pop(1)
0x616: PushEmpty(int)
0x617: Call2 0xaa5

0x618: Pop(0)
0x619: @@ SetNPCDescription(Stack[-1])
0x61a: Pop(1)
0x61b: PushEmpty(string)
0x61c: Call2 0xaa9

0x61d: Pop(0)
0x61e: @@ SetPhoto(Stack[-1])
0x61f: Pop(1)
0x620: PushEmpty(string)
0x621: Call2 0xaab

0x622: Pop(0)
0x623: @@ SetPhoto2(Stack[-1])
0x624: Pop(1)
0x625: PushEmpty(int)
0x626: Call2 0xc73

0x627: Pop(0)
0x628: @@ SetPlayerName(Stack[-1])
0x629: Pop(1)
0x62a: Stack[-2] = (int) -1
0x62b: @ IsOverrideActive(Stack[-3])
0x62c: Pop(0)
0x62d: Push(Stack[-3])
0x62e: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62f: Stack[-10] = (int) -2
0x630: Return(); Pop(8)

0x631: @ DoDialog(Stack[-4])
0x632: Pop(0)
0x633: PushEmpty(bool, object)
0x634: PushEmpty(object)
0x635: Call2 0xa19

0x636: Stack[-2] = Stack[-1]
0x637: Pop(1)
0x638: Call2 0x95a

0x639: Pop(2)
0x63a: PushEmpty(object, object)
0x63b: Stack[-2] = Stack[-11]
0x63c: Stack[-1] = Stack[-6]
0x63d: Push(-2, 4); TaskCall(7)
0x63e: Call2 0x655

0x63f: Pop(-2, 4); TaskReturn
0x640: Pop(2)
0x641: @@ IsDialogEnd(Stack[-1])
0x642: Pop(0)
0x643: Pop(0); Push((bool) Stack[-1] == 0)
0x644: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x645: @ sync()
0x646: Pop(0)
0x647: @@ IsDialogEnd(Stack[-1])
0x648: Pop(0)
0x649: GOTO 0x643

0x64a: PushEmpty(object)
0x64b: Stack[-1] = Stack[-10]
0x64c: Call2 0x949

0x64d: Pop(1)
0x64e: @ StopDialog(Stack[-4])
0x64f: Pop(0)
0x650: @@ GetReturnValue(Stack[-2])
0x651: Pop(0)
0x652: Stack[-10] = Stack[-2]
0x653: Return(); Pop(8)

0x654: Stack[-4] = 0
0x655: PushEmpty()
0x656: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x657: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x658: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x659: Push((int) 1)
0x65a: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x65b: PushEmpty(string)
0x65c: Stack[-1] = "Neutral"
0x65d: Call2 0x68f

0x65e: Pop(1)
0x65f: Push((int) 520750)
0x660: @@ SetMessage(Stack[-1])
0x661: Pop(1)
0x662: @@ ClearReplies()
0x663: Pop(0)
0x664: Push((int) 520751)
0x665: Push((int) 21964)
0x666: Push((int) 21963)
0x667: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x668: Pop(3)
0x669: Push((int) 520755)
0x66a: Push((int) 21968)
0x66b: Push((int) 21967)
0x66c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66d: Pop(3)
0x66e: GOTO 0x671

0x66f: Return(); Pop(0)

0x670: GOTO 0x659

0x671: PushEmpty(bool)
0x672: Call2 0xaad

0x673: Pop(0)
0x674: IF (Stack[-1] == 0) GOTO 0x680; Pop(1)

0x675: @ lshWaitForAnimEnd()
0x676: Pop(0)
0x677: Push( Stack[3 + Tasks[-1].StackPointer] )
0x678: IF (Stack[-1] == 0) GOTO 0x67a; Pop(1)

0x679: GOTO 0x67f

0x67a: PushEmpty(string)
0x67b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x67c: Call2 0x9e4

0x67d: Pop(1)
0x67e: GOTO 0x675

0x67f: GOTO 0x68e

0x680: Push("all")
0x681: Push("idle")
0x682: @ PlayAnimation(Stack[-2], Stack[-1])
0x683: Pop(2)
0x684: @ WaitForAnimEnd()
0x685: Pop(0)
0x686: Push( Stack[3 + Tasks[-1].StackPointer] )
0x687: IF (Stack[-1] == 0) GOTO 0x689; Pop(1)

0x688: GOTO 0x68e

0x689: Push("all")
0x68a: Push("idle")
0x68b: @ PlayAnimation(Stack[-2], Stack[-1])
0x68c: Pop(2)
0x68d: GOTO 0x684

0x68e: Return(); Pop(0)

0x68f: PushEmpty()
0x690: PushEmpty(bool)
0x691: Call2 0xaad

0x692: Pop(0)
0x693: Pop(1); Push((bool) Stack[-1] == 0)
0x694: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x695: Return(); Pop(0)

0x696: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x697: IF (Stack[-1] == 0) GOTO 0x699; Pop(1)

0x698: Return(); Pop(0)

0x699: PushEmpty(string, bool)
0x69a: Stack[-2] = Stack[-3]
0x69b: Push("")
0x69c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x69d: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69e: Stack[-1] = (bool) 0
0x69f: GOTO 0x6a1

0x6a0: Stack[-1] = (bool) 1
0x6a1: Call2 0x9f4

0x6a2: Pop(2)
0x6a3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6a4: Return(); Pop(0)

0x6a5: PushEmpty()
0x6a6: Push((int) 1)
0x6a7: IF (Stack[-1] == 0) GOTO 0x6f7; Pop(1)

0x6a8: PushEmpty()
0x6a9: Call2 0xa12

0x6aa: Pop(0)
0x6ab: Push((int) 21962)
0x6ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ad: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6ae: PushEmpty(string)
0x6af: Stack[-1] = "Neutral"
0x6b0: Call2 0x68f

0x6b1: Pop(1)
0x6b2: Push((int) 520750)
0x6b3: @@ SetMessage(Stack[-1])
0x6b4: Pop(1)
0x6b5: @@ ClearReplies()
0x6b6: Pop(0)
0x6b7: Push((int) 520751)
0x6b8: Push((int) 21964)
0x6b9: Push((int) 21963)
0x6ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6bb: Pop(3)
0x6bc: Push((int) 520755)
0x6bd: Push((int) 21968)
0x6be: Push((int) 21967)
0x6bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c0: Pop(3)
0x6c1: Return(); Pop(0)

0x6c2: Push((int) 21968)
0x6c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c4: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6c5: PushEmpty(string)
0x6c6: Stack[-1] = "Neutral"
0x6c7: Call2 0x68f

0x6c8: Pop(1)
0x6c9: Push((int) 520756)
0x6ca: @@ SetMessage(Stack[-1])
0x6cb: Pop(1)
0x6cc: @@ ClearReplies()
0x6cd: Pop(0)
0x6ce: Push((int) 520757)
0x6cf: Push((int) 21964)
0x6d0: Push((int) 21969)
0x6d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d2: Pop(3)
0x6d3: Return(); Pop(0)

0x6d4: Push((int) 21964)
0x6d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d6: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6d7: PushEmpty(string)
0x6d8: Stack[-1] = "Neutral"
0x6d9: Call2 0x68f

0x6da: Pop(1)
0x6db: Push((int) 520752)
0x6dc: @@ SetMessage(Stack[-1])
0x6dd: Pop(1)
0x6de: @@ ClearReplies()
0x6df: Pop(0)
0x6e0: Push((int) 520753)
0x6e1: Push((int) -1)
0x6e2: Push((int) 21965)
0x6e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e4: Pop(3)
0x6e5: Push((int) 520754)
0x6e6: Push((int) -1)
0x6e7: Push((int) 21966)
0x6e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e9: Pop(3)
0x6ea: Return(); Pop(0)

0x6eb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6ec: PushEmpty(bool)
0x6ed: Call2 0xaad

0x6ee: Pop(0)
0x6ef: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6f0: @ lshStopAnimation()
0x6f1: Pop(0)
0x6f2: GOTO 0x6f5

0x6f3: @ StopAnimation()
0x6f4: Pop(0)
0x6f5: Return(); Pop(0)

0x6f6: GOTO 0x6a6

0x6f7: Return(); Pop(0)

0x6f8: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6f9: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6fa: PushEmpty(bool, object, float)
0x6fb: Stack[-2] = Stack[-12]
0x6fc: Stack[-1] = (float) 70.0
0x6fd: Call2 0x905

0x6fe: Pop(2)
0x6ff: Pop(1); Push((bool) Stack[-1] == 0)
0x700: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x701: Stack[-10] = (int) -2
0x702: Return(); Pop(8)

0x703: @ CreateDialog(Stack[-4])
0x704: Pop(0)
0x705: PushEmpty(int)
0x706: Call2 0xaa7

0x707: Pop(0)
0x708: @@ SetNPCName(Stack[-1])
0x709: Pop(1)
0x70a: PushEmpty(int)
0x70b: Call2 0xaa5

0x70c: Pop(0)
0x70d: @@ SetNPCDescription(Stack[-1])
0x70e: Pop(1)
0x70f: PushEmpty(string)
0x710: Call2 0xaa9

0x711: Pop(0)
0x712: @@ SetPhoto(Stack[-1])
0x713: Pop(1)
0x714: PushEmpty(string)
0x715: Call2 0xaab

0x716: Pop(0)
0x717: @@ SetPhoto2(Stack[-1])
0x718: Pop(1)
0x719: PushEmpty(int)
0x71a: Call2 0xc73

0x71b: Pop(0)
0x71c: @@ SetPlayerName(Stack[-1])
0x71d: Pop(1)
0x71e: Stack[-2] = (int) -1
0x71f: @ IsOverrideActive(Stack[-3])
0x720: Pop(0)
0x721: Push(Stack[-3])
0x722: IF (Stack[-1] == 0) GOTO 0x725; Pop(1)

0x723: Stack[-10] = (int) -2
0x724: Return(); Pop(8)

0x725: @ DoDialog(Stack[-4])
0x726: Pop(0)
0x727: PushEmpty(bool, object)
0x728: PushEmpty(object)
0x729: Call2 0xa19

0x72a: Stack[-2] = Stack[-1]
0x72b: Pop(1)
0x72c: Call2 0x95a

0x72d: Pop(2)
0x72e: PushEmpty(object, object)
0x72f: Stack[-2] = Stack[-11]
0x730: Stack[-1] = Stack[-6]
0x731: Push(-2, 4); TaskCall(9)
0x732: Call2 0x749

0x733: Pop(-2, 4); TaskReturn
0x734: Pop(2)
0x735: @@ IsDialogEnd(Stack[-1])
0x736: Pop(0)
0x737: Pop(0); Push((bool) Stack[-1] == 0)
0x738: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x739: @ sync()
0x73a: Pop(0)
0x73b: @@ IsDialogEnd(Stack[-1])
0x73c: Pop(0)
0x73d: GOTO 0x737

0x73e: PushEmpty(object)
0x73f: Stack[-1] = Stack[-10]
0x740: Call2 0x949

0x741: Pop(1)
0x742: @ StopDialog(Stack[-4])
0x743: Pop(0)
0x744: @@ GetReturnValue(Stack[-2])
0x745: Pop(0)
0x746: Stack[-10] = Stack[-2]
0x747: Return(); Pop(8)

0x748: Stack[-4] = 0
0x749: PushEmpty()
0x74a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x74b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x74c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x74d: Push((int) 1)
0x74e: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x74f: PushEmpty(string)
0x750: Stack[-1] = "Neutral"
0x751: Call2 0x783

0x752: Pop(1)
0x753: Push((int) 540551)
0x754: @@ SetMessage(Stack[-1])
0x755: Pop(1)
0x756: @@ ClearReplies()
0x757: Pop(0)
0x758: Push((int) 540552)
0x759: Push((int) -1)
0x75a: Push((int) 42561)
0x75b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75c: Pop(3)
0x75d: Push((int) 540795)
0x75e: Push((int) -1)
0x75f: Push((int) 42844)
0x760: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x761: Pop(3)
0x762: GOTO 0x765

0x763: Return(); Pop(0)

0x764: GOTO 0x74d

0x765: PushEmpty(bool)
0x766: Call2 0xaad

0x767: Pop(0)
0x768: IF (Stack[-1] == 0) GOTO 0x774; Pop(1)

0x769: @ lshWaitForAnimEnd()
0x76a: Pop(0)
0x76b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x76c: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x76d: GOTO 0x773

0x76e: PushEmpty(string)
0x76f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x770: Call2 0x9e4

0x771: Pop(1)
0x772: GOTO 0x769

0x773: GOTO 0x782

0x774: Push("all")
0x775: Push("idle")
0x776: @ PlayAnimation(Stack[-2], Stack[-1])
0x777: Pop(2)
0x778: @ WaitForAnimEnd()
0x779: Pop(0)
0x77a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77b: IF (Stack[-1] == 0) GOTO 0x77d; Pop(1)

0x77c: GOTO 0x782

0x77d: Push("all")
0x77e: Push("idle")
0x77f: @ PlayAnimation(Stack[-2], Stack[-1])
0x780: Pop(2)
0x781: GOTO 0x778

0x782: Return(); Pop(0)

0x783: PushEmpty()
0x784: PushEmpty(bool)
0x785: Call2 0xaad

0x786: Pop(0)
0x787: Pop(1); Push((bool) Stack[-1] == 0)
0x788: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x789: Return(); Pop(0)

0x78a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x78b: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x78c: Return(); Pop(0)

0x78d: PushEmpty(string, bool)
0x78e: Stack[-2] = Stack[-3]
0x78f: Push("")
0x790: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x791: IF (Stack[-1] == 0) GOTO 0x794; Pop(1)

0x792: Stack[-1] = (bool) 0
0x793: GOTO 0x795

0x794: Stack[-1] = (bool) 1
0x795: Call2 0x9f4

0x796: Pop(2)
0x797: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x798: Return(); Pop(0)

0x799: PushEmpty()
0x79a: Push((int) 1)
0x79b: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x79c: PushEmpty()
0x79d: Call2 0xa12

0x79e: Pop(0)
0x79f: Push((int) 42560)
0x7a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a1: IF (Stack[-1] == 0) GOTO 0x7b6; Pop(1)

0x7a2: PushEmpty(string)
0x7a3: Stack[-1] = "Neutral"
0x7a4: Call2 0x783

0x7a5: Pop(1)
0x7a6: Push((int) 540551)
0x7a7: @@ SetMessage(Stack[-1])
0x7a8: Pop(1)
0x7a9: @@ ClearReplies()
0x7aa: Pop(0)
0x7ab: Push((int) 540552)
0x7ac: Push((int) -1)
0x7ad: Push((int) 42561)
0x7ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7af: Pop(3)
0x7b0: Push((int) 540795)
0x7b1: Push((int) -1)
0x7b2: Push((int) 42844)
0x7b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b4: Pop(3)
0x7b5: Return(); Pop(0)

0x7b6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7b7: PushEmpty(bool)
0x7b8: Call2 0xaad

0x7b9: Pop(0)
0x7ba: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7bb: @ lshStopAnimation()
0x7bc: Pop(0)
0x7bd: GOTO 0x7c0

0x7be: @ StopAnimation()
0x7bf: Pop(0)
0x7c0: Return(); Pop(0)

0x7c1: GOTO 0x79a

0x7c2: Return(); Pop(0)

0x7c3: PushEmpty()
0x7c4: Call2 0x7c7

0x7c5: Pop(0)
0x7c6: Return(); Pop(0)

0x7c7: PushEmpty(bool)
0x7c8: Call2 0x900

0x7c9: Pop(0)
0x7ca: Pop(1); Push((bool) Stack[-1] == 0)
0x7cb: IF (Stack[-1] == 0) GOTO 0x7ce; Pop(1)

0x7cc: @ Hold()
0x7cd: Pop(0)
0x7ce: @ GetDirection(Stack[-0])
0x7cf: Pop(0)
0x7d0: PushEmpty()
0x7d1: Call2 0x877

0x7d2: Pop(0)
0x7d3: GOTO 0x7d0

0x7d4: Return(); Pop(0)

0x7d5: PushEmpty(object, object)
0x7d6: Push("player")
0x7d7: @ FindActor(Stack[-2], Stack[-1])
0x7d8: Pop(1)
0x7d9: Pop(0); Push((bool) Stack[-1] == 0)
0x7da: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7db: Stack[-3] = (bool) 0
0x7dc: Return(); Pop(2)

0x7dd: PushEmpty(bool, object)
0x7de: Stack[-1] = Stack[-3]
0x7df: Call2 0x8f7

0x7e0: Stack[-5] = Stack[-2]
0x7e1: Pop(2)
0x7e2: Return(); Pop(2)

0x7e3: Stack[-1] = 0
0x7e4: Push(CvectorIndex(Stack[-0], 0))
0x7e5: Push(CvectorIndex(Stack[-0], 2))
0x7e6: @ RotateAsync(Stack[-2], Stack[-1])
0x7e7: Pop(2)
0x7e8: Return(); Pop(0)

0x7e9: PushEmpty(object, bool, object, bool)
0x7ea: Push("player")
0x7eb: @ FindActor(Stack[-3], Stack[-1])
0x7ec: Pop(1)
0x7ed: Pop(0); Push((bool) Stack[-2] == 0)
0x7ee: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7ef: Stack[-5] = (bool) 0
0x7f0: Return(); Pop(4)

0x7f1: PushEmpty(float, object)
0x7f2: Stack[-1] = Stack[-4]
0x7f3: Call2 0x8c3

0x7f4: Pop(1)
0x7f5: Push((float)90000.0)
0x7f6: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x7f7: IF (Stack[-1] == 0) GOTO 0x7fa; Pop(1)

0x7f8: Stack[-5] = (bool) 0
0x7f9: Return(); Pop(4)

0x7fa: @ CanSee(Stack[-1], Stack[-2])
0x7fb: Pop(0)
0x7fc: Stack[-5] = Stack[-1]
0x7fd: Return(); Pop(4)

0x7fe: Stack[-2] = 0
0x7ff: PushEmpty(float, float)
0x800: Push((int) 8)
0x801: Push((int) 16)
0x802: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x803: Pop(2)
0x804: Push((int) 10)
0x805: @ SetTimer(Stack[-1], Stack[-2])
0x806: Pop(1)
0x807: Return(); Pop(2)

0x808: Push((int) 10)
0x809: @ KillTimer(Stack[-1])
0x80a: Pop(1)
0x80b: Return(); Pop(0)

0x80c: PushEmpty()
0x80d: Push((int) 10)
0x80e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x80f: IF (Stack[-1] == 0) GOTO 0x831; Pop(1)

0x810: PushEmpty()
0x811: Call2 0x808

0x812: Pop(0)
0x813: PushEmpty(bool)
0x814: Stack[-1] = (bool) 0
0x815: PushEmpty(bool)
0x816: Call2 0x900

0x817: Pop(0)
0x818: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x819: PushEmpty(bool)
0x81a: Call2 0x7e9

0x81b: Pop(0)
0x81c: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x81d: Stack[-1] = (bool) 1
0x81e: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x81f: PushEmpty(bool)
0x820: Call2 0x7d5

0x821: Pop(0)
0x822: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x823: PushEmpty(bool, object)
0x824: PushEmpty(object)
0x825: Call2 0xa19

0x826: Stack[-2] = Stack[-1]
0x827: Pop(1)
0x828: Call2 0x994

0x829: Pop(2)
0x82a: GOTO 0x831

0x82b: PushEmpty()
0x82c: Call2 0x7e4

0x82d: Pop(0)
0x82e: PushEmpty()
0x82f: Call2 0x7ff

0x830: Pop(0)
0x831: Return(); Pop(0)

0x832: PushEmpty()
0x833: Call2 0x8be

0x834: Pop(0)
0x835: PushEmpty()
0x836: Call2 0x808

0x837: Pop(0)
0x838: @ lshStopSpeech()
0x839: Pop(0)
0x83a: @ lshStopAnimation()
0x83b: Pop(0)
0x83c: @ StopAsync()
0x83d: Pop(0)
0x83e: @ Hold()
0x83f: Pop(0)
0x840: Return(); Pop(0)

0x841: @ StopGroup0()
0x842: Pop(0)
0x843: PushEmpty()
0x844: Call2 0x808

0x845: Pop(0)
0x846: PushEmpty(string)
0x847: Stack[-1] = "Neutral"
0x848: Call2 0x9e4

0x849: Pop(1)
0x84a: PushEmpty()
0x84b: Call2 0x7ff

0x84c: Pop(0)
0x84d: Return(); Pop(0)

0x84e: PushEmpty()
0x84f: Push(Stack[-1])
0x850: IF (Stack[-1] == 0) GOTO 0x855; Pop(1)

0x851: PushEmpty()
0x852: Call2 0x7ff

0x853: Pop(0)
0x854: GOTO 0x859

0x855: PushEmpty(string)
0x856: Stack[-1] = "Neutral"
0x857: Call2 0x9e4

0x858: Pop(1)
0x859: Return(); Pop(0)

0x85a: PushEmpty(bool, bool)
0x85b: @ IsOverrideActive(Stack[-1])
0x85c: Pop(0)
0x85d: Pop(0); Push((bool) Stack[-1] == 0)
0x85e: IF (Stack[-1] == 0) GOTO 0x876; Pop(1)

0x85f: EventDisable(0)
0x860: PushEmpty()
0x861: Call2 0x8be

0x862: Pop(0)
0x863: PushEmpty(bool, object)
0x864: Stack[-1] = Stack[-5]
0x865: Call2 0x8f7

0x866: Pop(2)
0x867: EventEnable(0)
0x868: PushEmpty(object)
0x869: Stack[-1] = Stack[-4]
0x86a: Call2 0xc84

0x86b: Pop(1)
0x86c: PushEmpty(string)
0x86d: Stack[-1] = "Neutral"
0x86e: Call2 0x9e4

0x86f: Pop(1)
0x870: PushEmpty()
0x871: Call2 0x808

0x872: Pop(0)
0x873: PushEmpty()
0x874: Call2 0x7ff

0x875: Pop(0)
0x876: Return(); Pop(2)

0x877: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x878: @ WaitForAnimEnd()
0x879: Pop(0)
0x87a: PushEmpty(bool)
0x87b: Call2 0x900

0x87c: Pop(0)
0x87d: Pop(1); Push((bool) Stack[-1] == 0)
0x87e: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x87f: Return(); Pop(12)

0x880: PushEmpty(int)
0x881: Call2 0xa94

0x882: Stack[-7] = Stack[-1]
0x883: Pop(1)
0x884: Stack[-5] = (int) 0
0x885: PushEmpty(bool)
0x886: Stack[-1] = (bool) 0
0x887: Push((int) 5)
0x888: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x889: IF (Stack[-1] == 0) GOTO 0x88f; Pop(1)

0x88a: PushEmpty(bool)
0x88b: Call2 0x900

0x88c: Pop(0)
0x88d: IF (Stack[-1] == 0) GOTO 0x88f; Pop(1)

0x88e: Stack[-1] = (bool) 1
0x88f: IF (Stack[-1] == 0) GOTO 0x8b9; Pop(1)

0x890: Pop(0); Push((bool) Stack[-6] == 0)
0x891: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x892: Push((int) 3)
0x893: @ Sleep(Stack[-1], Stack[-5])
0x894: Pop(1)
0x895: Pop(0); Push((bool) Stack[-4] == 0)
0x896: IF (Stack[-1] == 0) GOTO 0x898; Pop(1)

0x897: GOTO 0x8b9

0x898: GOTO 0x8ae

0x899: @ irand(Stack[-3], Stack[-6])
0x89a: Pop(0)
0x89b: Push((int) 5)
0x89c: @ irand(Stack[-3], Stack[-1])
0x89d: Pop(1)
0x89e: Push((int) 0)
0x89f: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x8a0: IF (Stack[-1] == 0) GOTO 0x8a2; Pop(1)

0x8a1: Stack[-3] = (int) 0
0x8a2: Push("all")
0x8a3: PushEmpty(string, int)
0x8a4: Stack[-1] = Stack[-6]
0x8a5: Call2 0xa8d

0x8a6: Pop(1)
0x8a7: @ PlayAnimation(Stack[-2], Stack[-1])
0x8a8: Pop(2)
0x8a9: @ WaitForAnimEnd(Stack[-1])
0x8aa: Pop(0)
0x8ab: Pop(0); Push((bool) Stack[-1] == 0)
0x8ac: IF (Stack[-1] == 0) GOTO 0x8ae; Pop(1)

0x8ad: GOTO 0x8b9

0x8ae: PushEmpty(bool)
0x8af: Call2 0x8bc

0x8b0: Pop(0)
0x8b1: Pop(1); Push((bool) Stack[-1] == 0)
0x8b2: IF (Stack[-1] == 0) GOTO 0x8b4; Pop(1)

0x8b3: GOTO 0x8b9

0x8b4: @ ResetAAS()
0x8b5: Pop(0)
0x8b6: Push((int) 1)
0x8b7: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x8b8: GOTO 0x885

0x8b9: @ ResetAAS()
0x8ba: Pop(0)
0x8bb: Return(); Pop(12)

0x8bc: Stack[-1] = (bool) 1
0x8bd: Return(); Pop(0)

0x8be: @ StopAnimation()
0x8bf: Pop(0)
0x8c0: @ StopGroup0()
0x8c1: Pop(0)
0x8c2: Return(); Pop(0)

0x8c3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x8c4: @ GetPosition(Stack[-3])
0x8c5: Pop(0)
0x8c6: @@ GetPosition(Stack[-2])
0x8c7: Pop(0)
0x8c8: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x8c9: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x8ca: Return(); Pop(6)

0x8cb: PushEmpty(bool, bool)
0x8cc: Push("HasProperty")
0x8cd: Push((int) 2)
0x8ce: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x8cf: Pop(1); Push((bool) Stack[-1] == 0)
0x8d0: IF (Stack[-1] == 0) GOTO 0x8d3; Pop(1)

0x8d1: Stack[-5] = (bool) 0
0x8d2: Return(); Pop(2)

0x8d3: @@ HasProperty(Stack[-3], Stack[-1])
0x8d4: Pop(0)
0x8d5: Stack[-5] = Stack[-1]
0x8d6: Return(); Pop(2)

0x8d7: PushEmpty(float, float)
0x8d8: PushEmpty(bool, object, string)
0x8d9: Stack[-2] = Stack[-10]
0x8da: Stack[-1] = Stack[-9]
0x8db: Call2 0x8cb

0x8dc: Pop(2)
0x8dd: Pop(1); Push((bool) Stack[-1] == 0)
0x8de: IF (Stack[-1] == 0) GOTO 0x8e1; Pop(1)

0x8df: Stack[-8] = (bool) 0
0x8e0: Return(); Pop(2)

0x8e1: @@ GetProperty(Stack[-6], Stack[-1])
0x8e2: Pop(0)
0x8e3: PushEmpty(float, float, float, float)
0x8e4: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x8e5: Stack[-2] = Stack[-8]
0x8e6: Stack[-1] = Stack[-7]
0x8e7: Call2 0xa29

0x8e8: Pop(3)
0x8e9: @@ SetProperty(Stack[-7], Stack[-1])
0x8ea: Pop(1)
0x8eb: Stack[-8] = (bool) 1
0x8ec: Return(); Pop(2)

0x8ed: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x8ee: @ GetPosition(Stack[-3])
0x8ef: Pop(0)
0x8f0: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x8f1: Push(CvectorIndex(Stack[-2], 0))
0x8f2: Push(CvectorIndex(Stack[-3], 2))
0x8f3: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x8f4: Pop(2)
0x8f5: Stack[-8] = Stack[-1]
0x8f6: Return(); Pop(6)

0x8f7: PushEmpty(cvector, cvector)
0x8f8: @@ GetPosition(Stack[-1])
0x8f9: Pop(0)
0x8fa: PushEmpty(bool, cvector)
0x8fb: Stack[-1] = Stack[-3]
0x8fc: Call2 0x8ed

0x8fd: Stack[-6] = Stack[-2]
0x8fe: Pop(2)
0x8ff: Return(); Pop(2)

0x900: PushEmpty(bool, bool)
0x901: @ IsLoaded(Stack[-1])
0x902: Pop(0)
0x903: Stack[-3] = Stack[-1]
0x904: Return(); Pop(2)

0x905: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x906: @@ GetPosition(Stack[-8])
0x907: Pop(0)
0x908: @@ GetEyesHeight(Stack[-9])
0x909: Pop(0)
0x90a: Push(CvectorIndex(Stack[-8], 1))
0x90b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x90c: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x90d: @ GetPosition(Stack[-7])
0x90e: Pop(0)
0x90f: @ GetEyesHeight(Stack[-9])
0x910: Pop(0)
0x911: Push(CvectorIndex(Stack[-7], 1))
0x912: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x913: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x914: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x915: Push(CvectorIndex(Stack[-6], 1))
0x916: Stack[-1] = (int) 0
0x917: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x918: Pop(0); Push(Stack[-6] | Stack[-6]);
0x919: Pop(1); Push(Sqrt(Stack[-1]))
0x91a: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x91b: Stack[-5] = -Stack[-6]; Pop(0);
0x91c: Pop(0); Push(Stack[-6] * Stack[-19]);
0x91d: PushEmpty(cvector, cvector)
0x91e: Push(CVector(0.0, 1.0, 0.0))
0x91f: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x920: Call2 0xa1f

0x921: Pop(1)
0x922: Push((int) 25)
0x923: Pop(2); Push(Stack[-2] * Stack[-1]);
0x924: Pop(2); Push(Stack[-2] + Stack[-1]);
0x925: Push(CVector(0.0, 10.0, 0.0))
0x926: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x927: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x928: @ IsOverrideActive(Stack[-2])
0x929: Pop(0)
0x92a: Push(Stack[-2])
0x92b: IF (Stack[-1] == 0) GOTO 0x92e; Pop(1)

0x92c: Stack[-21] = (bool) 0
0x92d: Return(); Pop(18)

0x92e: @ StopWorld()
0x92f: Pop(0)
0x930: @ CameraTransit(Stack[-3], Stack[-5])
0x931: Pop(0)
0x932: Push(CvectorIndex(Stack[-4], 0))
0x933: Push(CvectorIndex(Stack[-5], 2))
0x934: @ Rotate(Stack[-2], Stack[-1])
0x935: Pop(2)
0x936: PushEmpty(bool)
0x937: Call2 0xaad

0x938: Pop(0)
0x939: IF (Stack[-1] == 0) GOTO 0x93b; Pop(1)

0x93a: GOTO 0x943

0x93b: Push("head")
0x93c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x93d: Pop(1)
0x93e: Push(Stack[-1])
0x93f: IF (Stack[-1] == 0) GOTO 0x943; Pop(1)

0x940: Push("head")
0x941: @ LookAsyncCamera(Stack[-1])
0x942: Pop(1)
0x943: @ CameraWaitForPlayFinish()
0x944: Pop(0)
0x945: @ ResumeWorld()
0x946: Pop(0)
0x947: Stack[-21] = (bool) 1
0x948: Return(); Pop(18)

0x949: PushEmpty(bool, bool)
0x94a: @ CameraSwitchToNormal()
0x94b: Pop(0)
0x94c: PushEmpty(bool)
0x94d: Call2 0xaad

0x94e: Pop(0)
0x94f: IF (Stack[-1] == 0) GOTO 0x951; Pop(1)

0x950: GOTO 0x959

0x951: Push("head")
0x952: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x953: Pop(1)
0x954: Push(Stack[-1])
0x955: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x956: Push("head")
0x957: @ UnlookAsync(Stack[-1])
0x958: Pop(1)
0x959: Return(); Pop(2)

0x95a: PushEmpty(int, int, int, int)
0x95b: Push("voice_common")
0x95c: @ GetVariable(Stack[-1], Stack[-3])
0x95d: Pop(1)
0x95e: Push(Stack[-2])
0x95f: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x960: PushEmpty(bool, object)
0x961: Stack[-1] = Stack[-7]
0x962: Call2 0x994

0x963: Pop(1)
0x964: Pop(1); Push((bool) Stack[-1] == 0)
0x965: IF (Stack[-1] == 0) GOTO 0x96e; Pop(1)

0x966: PushEmpty(bool, object)
0x967: Stack[-1] = Stack[-7]
0x968: Call2 0x9b9

0x969: Pop(1)
0x96a: Pop(1); Push((bool) Stack[-1] == 0)
0x96b: IF (Stack[-1] == 0) GOTO 0x96e; Pop(1)

0x96c: Stack[-6] = (bool) 0
0x96d: Return(); Pop(4)

0x96e: Push((int) 2)
0x96f: @ irand(Stack[-2], Stack[-1])
0x970: Pop(1)
0x971: Push(Stack[-1])
0x972: IF (Stack[-1] == 0) GOTO 0x97b; Pop(1)

0x973: Push("voice_common")
0x974: Push((int) 1)
0x975: Pop(1); Push(Stack[-4] + Stack[-1]);
0x976: Push((int) 3)
0x977: Pop(2); Push(Stack[-2] % Stack[-1]);
0x978: @ SetVariable(Stack[-2], Stack[-1])
0x979: Pop(2)
0x97a: GOTO 0x97f

0x97b: Push("voice_common")
0x97c: Push((int) 0)
0x97d: @ SetVariable(Stack[-2], Stack[-1])
0x97e: Pop(2)
0x97f: GOTO 0x992

0x980: PushEmpty(bool, object)
0x981: Stack[-1] = Stack[-7]
0x982: Call2 0x9b9

0x983: Pop(1)
0x984: Pop(1); Push((bool) Stack[-1] == 0)
0x985: IF (Stack[-1] == 0) GOTO 0x98e; Pop(1)

0x986: PushEmpty(bool, object)
0x987: Stack[-1] = Stack[-7]
0x988: Call2 0x994

0x989: Pop(1)
0x98a: Pop(1); Push((bool) Stack[-1] == 0)
0x98b: IF (Stack[-1] == 0) GOTO 0x98e; Pop(1)

0x98c: Stack[-6] = (bool) 0
0x98d: Return(); Pop(4)

0x98e: Push("voice_common")
0x98f: Push((int) 1)
0x990: @ SetVariable(Stack[-2], Stack[-1])
0x991: Pop(2)
0x992: Stack[-6] = (bool) 1
0x993: Return(); Pop(4)

0x994: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x995: Stack[-5] = "c"
0x996: Stack[-4] = (int) 0
0x997: Push((int) 1)
0x998: IF (Stack[-1] == 0) GOTO 0x9a4; Pop(1)

0x999: Push((int) 1)
0x99a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x99b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x99c: @@ HasProperty(Stack[-1], Stack[-4])
0x99d: Pop(1)
0x99e: Pop(0); Push((bool) Stack[-3] == 0)
0x99f: IF (Stack[-1] == 0) GOTO 0x9a1; Pop(1)

0x9a0: GOTO 0x9a4

0x9a1: Push((int) 1)
0x9a2: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x9a3: GOTO 0x997

0x9a4: Pop(0); Push((bool) Stack[-4] == 0)
0x9a5: IF (Stack[-1] == 0) GOTO 0x9a8; Pop(1)

0x9a6: Stack[-12] = (bool) 0
0x9a7: Return(); Pop(10)

0x9a8: Stack[-2] = (int) 0
0x9a9: Push((int) 1)
0x9aa: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x9ab: IF (Stack[-1] == 0) GOTO 0x9ae; Pop(1)

0x9ac: @ irand(Stack[-2], Stack[-4])
0x9ad: Pop(0)
0x9ae: Push((int) 1)
0x9af: Pop(1); Push(Stack[-3] + Stack[-1]);
0x9b0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9b1: @@ GetProperty(Stack[-1], Stack[-2])
0x9b2: Pop(1)
0x9b3: PushEmpty(bool, string)
0x9b4: Stack[-1] = Stack[-3]
0x9b5: Call2 0xa03

0x9b6: Stack[-14] = Stack[-2]
0x9b7: Pop(2)
0x9b8: Return(); Pop(10)

0x9b9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x9ba: Push("d")
0x9bb: PushEmpty(int)
0x9bc: Call2 0xa7e

0x9bd: Pop(0)
0x9be: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9bf: Push("m")
0x9c0: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x9c1: Stack[-4] = (int) 0
0x9c2: Push((int) 1)
0x9c3: IF (Stack[-1] == 0) GOTO 0x9cf; Pop(1)

0x9c4: Push((int) 1)
0x9c5: Pop(1); Push(Stack[-5] + Stack[-1]);
0x9c6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9c7: @@ HasProperty(Stack[-1], Stack[-4])
0x9c8: Pop(1)
0x9c9: Pop(0); Push((bool) Stack[-3] == 0)
0x9ca: IF (Stack[-1] == 0) GOTO 0x9cc; Pop(1)

0x9cb: GOTO 0x9cf

0x9cc: Push((int) 1)
0x9cd: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x9ce: GOTO 0x9c2

0x9cf: Pop(0); Push((bool) Stack[-4] == 0)
0x9d0: IF (Stack[-1] == 0) GOTO 0x9d3; Pop(1)

0x9d1: Stack[-12] = (bool) 0
0x9d2: Return(); Pop(10)

0x9d3: Stack[-2] = (int) 0
0x9d4: Push((int) 1)
0x9d5: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x9d6: IF (Stack[-1] == 0) GOTO 0x9d9; Pop(1)

0x9d7: @ irand(Stack[-2], Stack[-4])
0x9d8: Pop(0)
0x9d9: Push((int) 1)
0x9da: Pop(1); Push(Stack[-3] + Stack[-1]);
0x9db: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9dc: @@ GetProperty(Stack[-1], Stack[-2])
0x9dd: Pop(1)
0x9de: PushEmpty(bool, string)
0x9df: Stack[-1] = Stack[-3]
0x9e0: Call2 0xa03

0x9e1: Stack[-14] = Stack[-2]
0x9e2: Pop(2)
0x9e3: Return(); Pop(10)

0x9e4: PushEmpty(bool, float, float, bool, float, float)
0x9e5: @ lshHasAnimation(Stack[-3], Stack[-7])
0x9e6: Pop(0)
0x9e7: Push(Stack[-3])
0x9e8: IF (Stack[-1] == 0) GOTO 0x9ef; Pop(1)

0x9e9: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x9ea: Pop(0)
0x9eb: Push((bool) 0)
0x9ec: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x9ed: Pop(1)
0x9ee: GOTO 0x9f3

0x9ef: Push("Can't find lsh animation : ")
0x9f0: Pop(1); Push(Stack[-1] + Stack[-8]);
0x9f1: @ Trace(Stack[-1])
0x9f2: Pop(1)
0x9f3: Return(); Pop(6)

0x9f4: PushEmpty(bool, float, float, bool, float, float)
0x9f5: @ lshHasAnimation(Stack[-3], Stack[-8])
0x9f6: Pop(0)
0x9f7: Push(Stack[-3])
0x9f8: IF (Stack[-1] == 0) GOTO 0x9fe; Pop(1)

0x9f9: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x9fa: Pop(0)
0x9fb: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x9fc: Pop(0)
0x9fd: GOTO 0xa02

0x9fe: Push("Can't find lsh animation : ")
0x9ff: Pop(1); Push(Stack[-1] + Stack[-9]);
0xa00: @ Trace(Stack[-1])
0xa01: Pop(1)
0xa02: Return(); Pop(6)

0xa03: PushEmpty(bool, bool)
0xa04: PushEmpty(bool)
0xa05: Call2 0xaad

0xa06: Pop(0)
0xa07: IF (Stack[-1] == 0) GOTO 0xa10; Pop(1)

0xa08: @ lshHasSpeech(Stack[-1], Stack[-3])
0xa09: Pop(0)
0xa0a: Push(Stack[-1])
0xa0b: IF (Stack[-1] == 0) GOTO 0xa10; Pop(1)

0xa0c: @ lshPlaySpeech(Stack[-3])
0xa0d: Pop(0)
0xa0e: Stack[-4] = (bool) 1
0xa0f: Return(); Pop(2)

0xa10: Stack[-4] = (bool) 0
0xa11: Return(); Pop(2)

0xa12: PushEmpty(bool)
0xa13: Call2 0xaad

0xa14: Pop(0)
0xa15: IF (Stack[-1] == 0) GOTO 0xa18; Pop(1)

0xa16: @ lshStopSpeech()
0xa17: Pop(0)
0xa18: Return(); Pop(0)

0xa19: PushEmpty(object, object)
0xa1a: @ self(Stack[-1])
0xa1b: Pop(0)
0xa1c: Stack[-3] = Stack[-1]
0xa1d: Return(); Pop(2)

0xa1e: Stack[-1] = 0
0xa1f: PushEmpty(float, float)
0xa20: Pop(0); Push(Stack[-3] | Stack[-3]);
0xa21: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xa22: Push((float)0.0)
0xa23: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa24: IF (Stack[-1] == 0) GOTO 0xa27; Pop(1)

0xa25: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xa26: Return(); Pop(2)

0xa27: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xa28: Return(); Pop(2)

0xa29: PushEmpty()
0xa2a: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xa2b: IF (Stack[-1] == 0) GOTO 0xa2e; Pop(1)

0xa2c: Stack[-4] = Stack[-2]
0xa2d: Return(); Pop(0)

0xa2e: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xa2f: IF (Stack[-1] == 0) GOTO 0xa32; Pop(1)

0xa30: Stack[-4] = Stack[-1]
0xa31: Return(); Pop(0)

0xa32: Stack[-4] = Stack[-3]
0xa33: Return(); Pop(0)

0xa34: PushEmpty(int, int)
0xa35: @ GetVariable(Stack[-3], Stack[-1])
0xa36: Pop(0)
0xa37: Stack[-4] = Stack[-1]
0xa38: Return(); Pop(2)

0xa39: PushEmpty(int, bool, int, bool)
0xa3a: @ GetInvItemByName(Stack[-2], Stack[-5])
0xa3b: Pop(0)
0xa3c: @@ HasItem(Stack[-2], Stack[-1])
0xa3d: Pop(0)
0xa3e: Stack[-7] = Stack[-1]
0xa3f: Return(); Pop(4)

0xa40: PushEmpty()
0xa41: Pop(0); Push((bool) Stack[-2] == 0)
0xa42: IF (Stack[-1] == 0) GOTO 0xa45; Pop(1)

0xa43: Stack[-3] = (bool) 0
0xa44: Return(); Pop(0)

0xa45: Push((int) 0)
0xa46: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa47: IF (Stack[-1] == 0) GOTO 0xa4c; Pop(1)

0xa48: Push((int) 8)
0xa49: @ SendWorldWndMessage(Stack[-1])
0xa4a: Pop(1)
0xa4b: GOTO 0xa55

0xa4c: Push((int) 0)
0xa4d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa4e: IF (Stack[-1] == 0) GOTO 0xa53; Pop(1)

0xa4f: Push((int) 9)
0xa50: @ SendWorldWndMessage(Stack[-1])
0xa51: Pop(1)
0xa52: GOTO 0xa55

0xa53: Stack[-3] = (bool) 0
0xa54: Return(); Pop(0)

0xa55: PushEmpty(float)
0xa56: Stack[-1] = Stack[-2]
0xa57: Call2 0xa63

0xa58: Pop(1)
0xa59: PushEmpty(bool, object, string, float, float, float)
0xa5a: Stack[-5] = Stack[-8]
0xa5b: Stack[-4] = "reputation"
0xa5c: Stack[-3] = Stack[-7]
0xa5d: Stack[-2] = (int) 0
0xa5e: Stack[-1] = (int) 1
0xa5f: Call2 0x8d7

0xa60: Pop(6)
0xa61: Stack[-3] = (bool) 1
0xa62: Return(); Pop(0)

0xa63: PushEmpty(object, object)
0xa64: @ CreateFloatVector(Stack[-1])
0xa65: Pop(0)
0xa66: @@ add(Stack[-3])
0xa67: Pop(0)
0xa68: Push((int) 16)
0xa69: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xa6a: Pop(1)
0xa6b: Return(); Pop(2)

0xa6c: Stack[-1] = 0
0xa6d: PushEmpty(object, object)
0xa6e: @ FindActor(Stack[-1], Stack[-4])
0xa6f: Pop(0)
0xa70: Pop(0); Push((bool) Stack[-1] == 0)
0xa71: IF (Stack[-1] == 0) GOTO 0xa74; Pop(1)

0xa72: Stack[-5] = (bool) 0
0xa73: Return(); Pop(2)

0xa74: @ Trigger(Stack[-1], Stack[-3])
0xa75: Pop(0)
0xa76: Stack[-5] = (bool) 1
0xa77: Return(); Pop(2)

0xa78: Stack[-1] = 0
0xa79: PushEmpty(float, float)
0xa7a: @ GetGameTime(Stack[-1])
0xa7b: Pop(0)
0xa7c: Stack[-3] = Stack[-1]
0xa7d: Return(); Pop(2)

0xa7e: PushEmpty(float, float)
0xa7f: @ GetGameTime(Stack[-1])
0xa80: Pop(0)
0xa81: Push((int) 1)
0xa82: PushEmpty(int)
0xa83: Push((int) 24)
0xa84: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xa85: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xa86: Return(); Pop(2)

0xa87: PushEmpty()
0xa88: PushEmpty(int)
0xa89: Call2 0xa7e

0xa8a: Pop(0)
0xa8b: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xa8c: Return(); Pop(0)

0xa8d: PushEmpty(string, string)
0xa8e: Stack[-1] = "idle"
0xa8f: Push(Stack[-3])
0xa90: IF (Stack[-1] == 0) GOTO 0xa92; Pop(1)

0xa91: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xa92: Stack[-4] = Stack[-1]
0xa93: Return(); Pop(2)

0xa94: PushEmpty(int, bool, int, bool)
0xa95: Stack[-2] = (int) 0
0xa96: Push("all")
0xa97: PushEmpty(string, int)
0xa98: Stack[-1] = Stack[-5]
0xa99: Call2 0xa8d

0xa9a: Pop(1)
0xa9b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa9c: Pop(2)
0xa9d: Pop(0); Push((bool) Stack[-1] == 0)
0xa9e: IF (Stack[-1] == 0) GOTO 0xaa0; Pop(1)

0xa9f: GOTO 0xaa3

0xaa0: Push((int) 1)
0xaa1: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xaa2: GOTO 0xa96

0xaa3: Stack[-5] = Stack[-2]
0xaa4: Return(); Pop(4)

0xaa5: Stack[-1] = (int) 515542
0xaa6: Return(); Pop(0)

0xaa7: Stack[-1] = (int) 502867
0xaa8: Return(); Pop(0)

0xaa9: Stack[-1] = "ui/NPC_Laska.png"
0xaaa: Return(); Pop(0)

0xaab: Stack[-1] = "ui/NPC_Laska_b.png"
0xaac: Return(); Pop(0)

0xaad: Stack[-1] = (bool) 1
0xaae: Return(); Pop(0)

0xaaf: PushEmpty()
0xab0: Push("oob6Laska1")
0xab1: Push((int) 1)
0xab2: @ SetVariable(Stack[-2], Stack[-1])
0xab3: Pop(2)
0xab4: Return(); Pop(0)

0xab5: PushEmpty()
0xab6: Push("oob1Laska4")
0xab7: Push((int) 1)
0xab8: @ SetVariable(Stack[-2], Stack[-1])
0xab9: Pop(2)
0xaba: Return(); Pop(0)

0xabb: PushEmpty(object, object)
0xabc: PushEmpty(object)
0xabd: Call2 0xc41

0xabe: Stack[-2] = Stack[-1]
0xabf: Pop(1)
0xac0: Push("b1LaskaGotoMishka")
0xac1: Push("pt_map_mishka")
0xac2: Push((int) 3)
0xac3: Push((int) 530602)
0xac4: PushEmpty(float)
0xac5: Call2 0xa79

0xac6: Pop(0)
0xac7: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xac8: Pop(5)
0xac9: Return(); Pop(2)

0xaca: Stack[-1] = 0
0xacb: PushEmpty()
0xacc: Push("oob12Laska1")
0xacd: Push((int) 1)
0xace: @ SetVariable(Stack[-2], Stack[-1])
0xacf: Pop(2)
0xad0: Return(); Pop(0)

0xad1: PushEmpty()
0xad2: PushEmpty(object, string, float)
0xad3: PushEmpty(object)
0xad4: Call2 0xc41

0xad5: Stack[-4] = Stack[-1]
0xad6: Pop(1)
0xad7: Stack[-2] = "pt_map_mishka"
0xad8: Stack[-1] = (int) 2
0xad9: Call2 0xc52

0xada: Pop(3)
0xadb: PushEmpty(object)
0xadc: Call2 0xc41

0xadd: Pop(0)
0xade: @@ ShowMap(Stack[-1])
0xadf: Pop(1)
0xae0: Return(); Pop(0)

0xae1: PushEmpty()
0xae2: PushEmpty(bool, object, float)
0xae3: Stack[-2] = Stack[-5]
0xae4: Stack[-1] = (float) 0.3
0xae5: Call2 0xa40

0xae6: Pop(3)
0xae7: Return(); Pop(0)

0xae8: PushEmpty()
0xae9: PushEmpty(bool, object, float)
0xaea: Stack[-2] = Stack[-5]
0xaeb: Stack[-1] = (float) -0.1
0xaec: Call2 0xa40

0xaed: Pop(3)
0xaee: Return(); Pop(0)

0xaef: PushEmpty()
0xaf0: PushEmpty(object, string, float)
0xaf1: PushEmpty(object)
0xaf2: Call2 0xc41

0xaf3: Stack[-4] = Stack[-1]
0xaf4: Pop(1)
0xaf5: Stack[-2] = "pt_map_gorbun"
0xaf6: Stack[-1] = (int) 2
0xaf7: Call2 0xc52

0xaf8: Pop(3)
0xaf9: PushEmpty(object)
0xafa: Call2 0xc41

0xafb: Pop(0)
0xafc: @@ ShowMap(Stack[-1])
0xafd: Pop(1)
0xafe: Return(); Pop(0)

0xaff: PushEmpty()
0xb00: Push("oob1Laska1")
0xb01: Push((int) 1)
0xb02: @ SetVariable(Stack[-2], Stack[-1])
0xb03: Pop(2)
0xb04: Return(); Pop(0)

0xb05: PushEmpty(object, object)
0xb06: Push("b1q02")
0xb07: Push((int) 1)
0xb08: @ SetVariable(Stack[-2], Stack[-1])
0xb09: Pop(2)
0xb0a: PushEmpty(object)
0xb0b: Call2 0xc41

0xb0c: Stack[-2] = Stack[-1]
0xb0d: Pop(1)
0xb0e: Push("b1q02LaskaGotoGorbin")
0xb0f: Push("pt_map_gorbun")
0xb10: Push((int) 0)
0xb11: Push((int) 517938)
0xb12: PushEmpty(float)
0xb13: Call2 0xa79

0xb14: Pop(0)
0xb15: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb16: Pop(5)
0xb17: Push("b1q02LaskaSelf")
0xb18: Push("pt_map_laska")
0xb19: Push((int) 0)
0xb1a: Push((int) 517939)
0xb1b: PushEmpty(float)
0xb1c: Call2 0xa79

0xb1d: Pop(0)
0xb1e: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb1f: Pop(5)
0xb20: PushEmpty()
0xb21: Call2 0xbe4

0xb22: Pop(0)
0xb23: PushEmpty()
0xb24: Call2 0xc0b

0xb25: Pop(0)
0xb26: Return(); Pop(2)

0xb27: Stack[-1] = 0
0xb28: PushEmpty(int, int)
0xb29: PushEmpty()
0xb2a: Call2 0xbf1

0xb2b: Pop(0)
0xb2c: Push("b1q02_blood")
0xb2d: Push((int) 1)
0xb2e: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xb2f: Pop(2)
0xb30: PushEmpty(bool, string, string)
0xb31: Stack[-2] = "quest_b1_02"
0xb32: Stack[-1] = "agony_cured"
0xb33: Call2 0xa6d

0xb34: Pop(3)
0xb35: PushEmpty(bool, string, string)
0xb36: Stack[-2] = "quest_b1_02"
0xb37: Stack[-1] = "completed"
0xb38: Call2 0xa6d

0xb39: Pop(3)
0xb3a: Return(); Pop(2)

0xb3b: PushEmpty()
0xb3c: Push("oob1Laska2")
0xb3d: Push((int) 1)
0xb3e: @ SetVariable(Stack[-2], Stack[-1])
0xb3f: Pop(2)
0xb40: Return(); Pop(0)

0xb41: PushEmpty()
0xb42: Push("oob1Laska3")
0xb43: Push((int) 1)
0xb44: @ SetVariable(Stack[-2], Stack[-1])
0xb45: Pop(2)
0xb46: Return(); Pop(0)

0xb47: PushEmpty()
0xb48: PushEmpty(bool, string, string)
0xb49: Stack[-2] = "quest_b1_02"
0xb4a: Stack[-1] = "fail"
0xb4b: Call2 0xa6d

0xb4c: Pop(3)
0xb4d: Return(); Pop(0)

0xb4e: PushEmpty()
0xb4f: PushEmpty(int, string)
0xb50: Stack[-1] = "b1q02"
0xb51: Call2 0xa34

0xb52: Pop(1)
0xb53: Push((int) 0)
0xb54: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xb55: IF (Stack[-1] == 0) GOTO 0xb59; Pop(1)

0xb56: PushEmpty()
0xb57: Call2 0xbfe

0xb58: Pop(0)
0xb59: Return(); Pop(0)

0xb5a: PushEmpty()
0xb5b: PushEmpty(int, string)
0xb5c: Stack[-1] = "oob1Laska4"
0xb5d: Call2 0xa34

0xb5e: Pop(1)
0xb5f: Push((int) 0)
0xb60: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb61: IF (Stack[-1] == 0) GOTO 0xb64; Pop(1)

0xb62: Stack[-2] = (bool) 1
0xb63: Return(); Pop(0)

0xb64: Stack[-2] = (bool) 0
0xb65: Return(); Pop(0)

0xb66: PushEmpty()
0xb67: PushEmpty(int, string)
0xb68: Stack[-1] = "b6q01KlaraLaska"
0xb69: Call2 0xa34

0xb6a: Pop(1)
0xb6b: Push((int) 0)
0xb6c: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xb6d: IF (Stack[-1] == 0) GOTO 0xb70; Pop(1)

0xb6e: Stack[-2] = (bool) 1
0xb6f: Return(); Pop(0)

0xb70: Stack[-2] = (bool) 0
0xb71: Return(); Pop(0)

0xb72: PushEmpty()
0xb73: PushEmpty(int, string)
0xb74: Stack[-1] = "b1q05"
0xb75: Call2 0xa34

0xb76: Pop(1)
0xb77: Push((int) 1000)
0xb78: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb79: IF (Stack[-1] == 0) GOTO 0xb7c; Pop(1)

0xb7a: Stack[-2] = (bool) 1
0xb7b: Return(); Pop(0)

0xb7c: Stack[-2] = (bool) 0
0xb7d: Return(); Pop(0)

0xb7e: PushEmpty()
0xb7f: PushEmpty(int, string)
0xb80: Stack[-1] = "oob12Laska1"
0xb81: Call2 0xa34

0xb82: Pop(1)
0xb83: Push((int) 0)
0xb84: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb85: IF (Stack[-1] == 0) GOTO 0xb88; Pop(1)

0xb86: Stack[-2] = (bool) 1
0xb87: Return(); Pop(0)

0xb88: Stack[-2] = (bool) 0
0xb89: Return(); Pop(0)

0xb8a: PushEmpty()
0xb8b: PushEmpty(int, string)
0xb8c: Stack[-1] = "oob1Laska1"
0xb8d: Call2 0xa34

0xb8e: Pop(1)
0xb8f: Push((int) 0)
0xb90: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb91: IF (Stack[-1] == 0) GOTO 0xb94; Pop(1)

0xb92: Stack[-2] = (bool) 1
0xb93: Return(); Pop(0)

0xb94: Stack[-2] = (bool) 0
0xb95: Return(); Pop(0)

0xb96: PushEmpty()
0xb97: PushEmpty(int, string)
0xb98: Stack[-1] = "b1q02"
0xb99: Call2 0xa34

0xb9a: Pop(1)
0xb9b: Push((int) 0)
0xb9c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb9d: IF (Stack[-1] == 0) GOTO 0xba0; Pop(1)

0xb9e: Stack[-2] = (bool) 1
0xb9f: Return(); Pop(0)

0xba0: Stack[-2] = (bool) 0
0xba1: Return(); Pop(0)

0xba2: PushEmpty()
0xba3: PushEmpty(bool, object, string)
0xba4: Stack[-2] = Stack[-4]
0xba5: Stack[-1] = "b1q02_blood"
0xba6: Call2 0xa39

0xba7: Pop(2)
0xba8: IF (Stack[-1] == 0) GOTO 0xbb2; Pop(1)

0xba9: PushEmpty(int, string)
0xbaa: Stack[-1] = "b1q02"
0xbab: Call2 0xa34

0xbac: Pop(1)
0xbad: Push((int) 2)
0xbae: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbaf: IF (Stack[-1] == 0) GOTO 0xbb2; Pop(1)

0xbb0: Stack[-2] = (bool) 1
0xbb1: Return(); Pop(0)

0xbb2: Stack[-2] = (bool) 0
0xbb3: Return(); Pop(0)

0xbb4: PushEmpty()
0xbb5: PushEmpty(int, string)
0xbb6: Stack[-1] = "oob1Laska2"
0xbb7: Call2 0xa34

0xbb8: Pop(1)
0xbb9: Push((int) 0)
0xbba: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbbb: IF (Stack[-1] == 0) GOTO 0xbbe; Pop(1)

0xbbc: Stack[-2] = (bool) 1
0xbbd: Return(); Pop(0)

0xbbe: Stack[-2] = (bool) 0
0xbbf: Return(); Pop(0)

0xbc0: PushEmpty()
0xbc1: PushEmpty(int, string)
0xbc2: Stack[-1] = "b1q02_dead"
0xbc3: Call2 0xa34

0xbc4: Pop(1)
0xbc5: Push((int) 0)
0xbc6: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xbc7: IF (Stack[-1] == 0) GOTO 0xbca; Pop(1)

0xbc8: Stack[-2] = (bool) 1
0xbc9: Return(); Pop(0)

0xbca: Stack[-2] = (bool) 0
0xbcb: Return(); Pop(0)

0xbcc: PushEmpty()
0xbcd: PushEmpty(int, string)
0xbce: Stack[-1] = "oob1Laska3"
0xbcf: Call2 0xa34

0xbd0: Pop(1)
0xbd1: Push((int) 0)
0xbd2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbd3: IF (Stack[-1] == 0) GOTO 0xbd6; Pop(1)

0xbd4: Stack[-2] = (bool) 1
0xbd5: Return(); Pop(0)

0xbd6: Stack[-2] = (bool) 0
0xbd7: Return(); Pop(0)

0xbd8: PushEmpty()
0xbd9: PushEmpty(int, string)
0xbda: Stack[-1] = "oob6Laska1"
0xbdb: Call2 0xa34

0xbdc: Pop(1)
0xbdd: Push((int) 0)
0xbde: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbdf: IF (Stack[-1] == 0) GOTO 0xbe2; Pop(1)

0xbe0: Stack[-2] = (bool) 1
0xbe1: Return(); Pop(0)

0xbe2: Stack[-2] = (bool) 0
0xbe3: Return(); Pop(0)

0xbe4: PushEmpty(object, object)
0xbe5: Push((int) 200)
0xbe6: Push((int) 2)
0xbe7: Push((int) 517940)
0xbe8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbe9: Pop(3)
0xbea: PushEmpty(bool, object, int)
0xbeb: Stack[-2] = Stack[-4]
0xbec: Stack[-1] = (int) -1
0xbed: Call2 0xc25

0xbee: Pop(3)
0xbef: Return(); Pop(2)

0xbf0: Stack[-1] = 0
0xbf1: PushEmpty(object, object)
0xbf2: Push((int) 203)
0xbf3: Push((int) 2)
0xbf4: Push((int) 517943)
0xbf5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbf6: Pop(3)
0xbf7: PushEmpty(bool, object, int)
0xbf8: Stack[-2] = Stack[-4]
0xbf9: Stack[-1] = (int) 200
0xbfa: Call2 0xc25

0xbfb: Pop(3)
0xbfc: Return(); Pop(2)

0xbfd: Stack[-1] = 0
0xbfe: PushEmpty(object, object)
0xbff: Push((int) 204)
0xc00: Push((int) 2)
0xc01: Push((int) 518079)
0xc02: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc03: Pop(3)
0xc04: PushEmpty(bool, object, int)
0xc05: Stack[-2] = Stack[-4]
0xc06: Stack[-1] = (int) 200
0xc07: Call2 0xc25

0xc08: Pop(3)
0xc09: Return(); Pop(2)

0xc0a: Stack[-1] = 0
0xc0b: PushEmpty(object, object)
0xc0c: Push((int) 201)
0xc0d: Push((int) 2)
0xc0e: Push((int) 517941)
0xc0f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc10: Pop(3)
0xc11: PushEmpty(bool, object, int)
0xc12: Stack[-2] = Stack[-4]
0xc13: Stack[-1] = (int) 200
0xc14: Call2 0xc25

0xc15: Pop(3)
0xc16: Return(); Pop(2)

0xc17: Stack[-1] = 0
0xc18: PushEmpty(object, object)
0xc19: @ GetDiaryRoot(Stack[-1])
0xc1a: Pop(0)
0xc1b: Pop(0); Push((bool) Stack[-1] == 0)
0xc1c: IF (Stack[-1] == 0) GOTO 0xc22; Pop(1)

0xc1d: Push("Can't retrieve diary root")
0xc1e: @ Trace(Stack[-1])
0xc1f: Pop(1)
0xc20: Stack[-3] = (bool) 0
0xc21: Return(); Pop(2)

0xc22: Stack[-3] = Stack[-1]
0xc23: Return(); Pop(2)

0xc24: Stack[-1] = 0
0xc25: PushEmpty(object, object, int, object, object, int)
0xc26: PushEmpty(object)
0xc27: Call2 0xc18

0xc28: Stack[-4] = Stack[-1]
0xc29: Pop(1)
0xc2a: @@ Find(Stack[-7], Stack[-2])
0xc2b: Pop(0)
0xc2c: Pop(0); Push((bool) Stack[-2] == 0)
0xc2d: IF (Stack[-1] == 0) GOTO 0xc34; Pop(1)

0xc2e: Push("Can't find diary parent with id: ")
0xc2f: Pop(1); Push(Stack[-1] + Stack[-8]);
0xc30: @ Trace(Stack[-1])
0xc31: Pop(1)
0xc32: Stack[-9] = (bool) 0
0xc33: Return(); Pop(6)

0xc34: @@ AddChild(Stack[-8])
0xc35: Pop(0)
0xc36: Push((int) 7)
0xc37: @ SendWorldWndMessage(Stack[-1])
0xc38: Pop(1)
0xc39: @@ GetCategory(Stack[-1])
0xc3a: Pop(0)
0xc3b: @ SetDiarySection(Stack[-1])
0xc3c: Pop(0)
0xc3d: Stack[-9] = (bool) 0
0xc3e: Return(); Pop(6)

0xc3f: Stack[-2] = 0
0xc40: Stack[-3] = 0
0xc41: PushEmpty(object, object, object, object)
0xc42: @ GetMainOutdoorScene(Stack[-2])
0xc43: Pop(0)
0xc44: Pop(0); Push((bool) Stack[-2] == 0)
0xc45: IF (Stack[-1] == 0) GOTO 0xc4c; Pop(1)

0xc46: Push("Can't find main outdoor scene")
0xc47: @ Trace(Stack[-1])
0xc48: Pop(1)
0xc49: Stack[-1] = 0
0xc4a: Stack[-5] = Stack[-1]
0xc4b: Return(); Pop(4)

0xc4c: @@ GetMap(Stack[-1])
0xc4d: Pop(0)
0xc4e: Stack[-5] = Stack[-1]
0xc4f: Return(); Pop(4)

0xc50: Stack[-1] = 0
0xc51: Stack[-2] = 0
0xc52: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xc53: @ GetMainOutdoorScene(Stack[-2])
0xc54: Pop(0)
0xc55: Pop(0); Push((bool) Stack[-2] == 0)
0xc56: IF (Stack[-1] == 0) GOTO 0xc5b; Pop(1)

0xc57: Push("Can't find main outdoor scene")
0xc58: @ Trace(Stack[-1])
0xc59: Pop(1)
0xc5a: Return(); Pop(8)

0xc5b: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xc5c: Pop(0)
0xc5d: Pop(0); Push((bool) Stack[-1] == 0)
0xc5e: IF (Stack[-1] == 0) GOTO 0xc65; Pop(1)

0xc5f: Push("Warning: outdoor scene locator ")
0xc60: Pop(1); Push(Stack[-1] + Stack[-11]);
0xc61: Push(" doesnt exist")
0xc62: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc63: @ Trace(Stack[-1])
0xc64: Pop(1)
0xc65: @@ GetMap(Stack[-11])
0xc66: Pop(0)
0xc67: Pop(0); Push((bool) Stack[-11] == 0)
0xc68: IF (Stack[-1] == 0) GOTO 0xc6d; Pop(1)

0xc69: Push("Can't find map")
0xc6a: @ Trace(Stack[-1])
0xc6b: Pop(1)
0xc6c: Return(); Pop(8)

0xc6d: Push(CvectorIndex(Stack[-4], 0))
0xc6e: Push(CvectorIndex(Stack[-5], 2))
0xc6f: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xc70: Pop(2)
0xc71: Return(); Pop(8)

0xc72: Stack[-2] = 0
0xc73: PushEmpty(int, int)
0xc74: Push("branch")
0xc75: @ GetVariable(Stack[-1], Stack[-2])
0xc76: Pop(1)
0xc77: Push((int) 0)
0xc78: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc79: IF (Stack[-1] == 0) GOTO 0xc7d; Pop(1)

0xc7a: Stack[-3] = (int) 1
0xc7b: Return(); Pop(2)

0xc7c: GOTO 0xc82

0xc7d: Push((int) 1)
0xc7e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc7f: IF (Stack[-1] == 0) GOTO 0xc82; Pop(1)

0xc80: Stack[-3] = (int) 2
0xc81: Return(); Pop(2)

0xc82: Stack[-3] = (int) 3
0xc83: Return(); Pop(2)

0xc84: PushEmpty(int, int)
0xc85: Push("mt_laska")
0xc86: @ GetVariable(Stack[-1], Stack[-2])
0xc87: Pop(1)
0xc88: Pop(0); Push((bool) Stack[-1] == 0)
0xc89: IF (Stack[-1] == 0) GOTO 0xc94; Pop(1)

0xc8a: PushEmpty(int, object)
0xc8b: Stack[-1] = Stack[-5]
0xc8c: Push(-2, 1); TaskCall(6)
0xc8d: Call2 0x604

0xc8e: Pop(-2, 1); TaskReturn
0xc8f: Pop(2)
0xc90: Push("mt_laska")
0xc91: Push((int) 1)
0xc92: @ SetVariable(Stack[-2], Stack[-1])
0xc93: Pop(2)
0xc94: PushEmpty(bool, int)
0xc95: Stack[-1] = (int) 1
0xc96: Call2 0xa87

0xc97: Pop(1)
0xc98: IF (Stack[-1] == 0) GOTO 0xca0; Pop(1)

0xc99: PushEmpty(int, object)
0xc9a: Stack[-1] = Stack[-5]
0xc9b: Push(-2, 1); TaskCall(2)
0xc9c: Call2 0x12a

0xc9d: Pop(-2, 1); TaskReturn
0xc9e: Pop(2)
0xc9f: Return(); Pop(2)

0xca0: PushEmpty(bool, int)
0xca1: Stack[-1] = (int) 6
0xca2: Call2 0xa87

0xca3: Pop(1)
0xca4: IF (Stack[-1] == 0) GOTO 0xcac; Pop(1)

0xca5: PushEmpty(int, object)
0xca6: Stack[-1] = Stack[-5]
0xca7: Push(-2, 1); TaskCall(4)
0xca8: Call2 0x4df

0xca9: Pop(-2, 1); TaskReturn
0xcaa: Pop(2)
0xcab: Return(); Pop(2)

0xcac: PushEmpty(bool, int)
0xcad: Stack[-1] = (int) 12
0xcae: Call2 0xa87

0xcaf: Pop(1)
0xcb0: IF (Stack[-1] == 0) GOTO 0xcb8; Pop(1)

0xcb1: PushEmpty(int, object)
0xcb2: Stack[-1] = Stack[-5]
0xcb3: Push(-2, 1); TaskCall(0)
0xcb4: Call2 0x0

0xcb5: Pop(-2, 1); TaskReturn
0xcb6: Pop(2)
0xcb7: Return(); Pop(2)

0xcb8: PushEmpty(int, object)
0xcb9: Stack[-1] = Stack[-5]
0xcba: Push(-2, 1); TaskCall(8)
0xcbb: Call2 0x6f8

0xcbc: Pop(-2, 1); TaskReturn
0xcbd: Pop(2)
0xcbe: Return(); Pop(2)

