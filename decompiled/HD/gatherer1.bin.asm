GlobalVarCount = 0

Strings:
	Neutral
	all
	idle
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	SetMessage
	ClearReplies
	AddReply
	cleanup
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	HasItem
	Gatherer1_
	blood
	RemoveItemByType
	ookGatherer1
	k2q04MorlokGotoAndrei
	pt_map_andrei
	AddMark
	oobSysGatherer1_1
	playsound
	giveitem
	SetReturnValue
	k2q04
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	grass_black_tvir
	grass_blood_tvir
	grass_brown_tvir
	branch
	ui/NPC_Morlok.png
	ui/NPC_Morlok_b.png

Import:
	DoTrade (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	StopTrade (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	GetInvItemByName (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	ClearSubContainer (1 args)
	AddItem (4 args)

RunOp = 0x3d4
RunTask = 5

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x10e Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2d8 Vars = (int, int)
	GTASK_5 Vars = (int, int, bool, bool, object, bool, bool, int) Params = 0
		EVENT_0 Op = 0x3e1 Vars = (object)
		EVENT_5 Op = 0x418 Vars = ()
		EVENT_26 Op = 0x44b Vars = (string)
		EVENT_6 Op = 0x453 Vars = ()
		EVENT_7 Op = 0x494 Vars = (int)


0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x72d

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0x5a8

0xb: Pop(1)
0xc: @ lshWaitForAnimEnd()
0xd: Pop(0)
0xe: GOTO 0x15

0xf: @ WaitForAnimEnd()
0x10: Pop(0)
0x11: Push("all")
0x12: Push("idle")
0x13: @ PlayAnimation(Stack[-2], Stack[-1])
0x14: Pop(2)
0x15: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x17: Return(); Pop(0)

0x18: GOTO 0x4

0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool)
0x1c: Call2 0x72d

0x1d: Pop(0)
0x1e: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1f: @ lshStopAnimation()
0x20: Pop(0)
0x21: GOTO 0x24

0x22: @ StopAnimation()
0x23: Pop(0)
0x24: @ StopTrade()
0x25: Pop(0)
0x26: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x27: Return(); Pop(0)

0x28: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x29: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2a: PushEmpty(bool, object, float)
0x2b: Stack[-2] = Stack[-12]
0x2c: Stack[-1] = (float) 110.0
0x2d: Call2 0x51c

0x2e: Pop(2)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-10] = (int) -2
0x32: Return(); Pop(8)

0x33: @ CreateDialog(Stack[-4])
0x34: Pop(0)
0x35: PushEmpty(int)
0x36: Call2 0x727

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0x725

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1])
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0x729

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1])
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0x72b

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0x70e

0x4b: Pop(0)
0x4c: @@ SetPlayerName(Stack[-1])
0x4d: Pop(1)
0x4e: Stack[-2] = (int) -1
0x4f: @ IsOverrideActive(Stack[-3])
0x50: Pop(0)
0x51: Push(Stack[-3])
0x52: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x53: Stack[-10] = (int) -2
0x54: Return(); Pop(8)

0x55: @ DoDialog(Stack[-4])
0x56: Pop(0)
0x57: PushEmpty(object, object)
0x58: Stack[-2] = Stack[-11]
0x59: Stack[-1] = Stack[-6]
0x5a: Push(-2, 4); TaskCall(2)
0x5b: Call2 0x72

0x5c: Pop(-2, 4); TaskReturn
0x5d: Pop(2)
0x5e: @@ IsDialogEnd(Stack[-1])
0x5f: Pop(0)
0x60: Pop(0); Push((bool) Stack[-1] == 0)
0x61: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x62: @ sync()
0x63: Pop(0)
0x64: @@ IsDialogEnd(Stack[-1])
0x65: Pop(0)
0x66: GOTO 0x60

0x67: PushEmpty(object)
0x68: Stack[-1] = Stack[-10]
0x69: Call2 0x561

0x6a: Pop(1)
0x6b: @ StopDialog(Stack[-4])
0x6c: Pop(0)
0x6d: @@ GetReturnValue(Stack[-2])
0x6e: Pop(0)
0x6f: Stack[-10] = Stack[-2]
0x70: Return(); Pop(8)

0x71: Stack[-4] = 0
0x72: PushEmpty()
0x73: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x74: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x75: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x76: Push((int) 1)
0x77: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0x78: PushEmpty(bool)
0x79: Stack[-1] = (bool) 0
0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0x683

0x7d: Pop(1)
0x7e: Pop(1); Push((bool) Stack[-1] == 0)
0x7f: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call2 0x678

0x83: Pop(1)
0x84: Pop(1); Push((bool) Stack[-1] == 0)
0x85: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x86: Stack[-1] = (bool) 1
0x87: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x88: PushEmpty(string)
0x89: Stack[-1] = "Neutral"
0x8a: Call2 0xf8

0x8b: Pop(1)
0x8c: Push((int) 518145)
0x8d: @@ SetMessage(Stack[-1])
0x8e: Pop(1)
0x8f: @@ ClearReplies()
0x90: Pop(0)
0x91: Push((int) 518146)
0x92: Push((int) 19260)
0x93: Push((int) 19259)
0x94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95: Pop(3)
0x96: Push((int) 529952)
0x97: Push((int) -1)
0x98: Push((int) 31336)
0x99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a: Pop(3)
0x9b: GOTO 0xda

0x9c: PushEmpty(bool)
0x9d: Stack[-1] = (bool) 0
0x9e: PushEmpty(bool, object)
0x9f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0: Call2 0x678

0xa1: Pop(1)
0xa2: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa3: PushEmpty(bool, object)
0xa4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Call2 0x683

0xa6: Pop(1)
0xa7: Pop(1); Push((bool) Stack[-1] == 0)
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: Stack[-1] = (bool) 1
0xaa: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xab: PushEmpty(string)
0xac: Stack[-1] = "Neutral"
0xad: Call2 0xf8

0xae: Pop(1)
0xaf: Push((int) 518150)
0xb0: @@ SetMessage(Stack[-1])
0xb1: Pop(1)
0xb2: @@ ClearReplies()
0xb3: Pop(0)
0xb4: Push((int) 518151)
0xb5: Push((int) 19265)
0xb6: Push((int) 19264)
0xb7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8: Pop(3)
0xb9: GOTO 0xda

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral"
0xbc: Call2 0xf8

0xbd: Pop(1)
0xbe: Push((int) 518155)
0xbf: @@ SetMessage(Stack[-1])
0xc0: Pop(1)
0xc1: @@ ClearReplies()
0xc2: Pop(0)
0xc3: Push((int) 518156)
0xc4: Push((int) -1)
0xc5: Push((int) 19269)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: PushEmpty(bool, object)
0xc9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xca: Call2 0x66c

0xcb: Pop(1)
0xcc: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcd: Push((int) 518199)
0xce: Push((int) 19313)
0xcf: Push((int) 19312)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: Push((int) 518157)
0xd3: Push((int) -1)
0xd4: Push((int) 19270)
0xd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6: Pop(3)
0xd7: GOTO 0xda

0xd8: Return(); Pop(0)

0xd9: GOTO 0x76

0xda: PushEmpty(bool)
0xdb: Call2 0x72d

0xdc: Pop(0)
0xdd: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xde: @ lshWaitForAnimEnd()
0xdf: Pop(0)
0xe0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe1: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe2: GOTO 0xe8

0xe3: PushEmpty(string)
0xe4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe5: Call2 0x5a8

0xe6: Pop(1)
0xe7: GOTO 0xde

0xe8: GOTO 0xf7

0xe9: Push("all")
0xea: Push("idle")
0xeb: @ PlayAnimation(Stack[-2], Stack[-1])
0xec: Pop(2)
0xed: @ WaitForAnimEnd()
0xee: Pop(0)
0xef: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf0: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xf1: GOTO 0xf7

0xf2: Push("all")
0xf3: Push("idle")
0xf4: @ PlayAnimation(Stack[-2], Stack[-1])
0xf5: Pop(2)
0xf6: GOTO 0xed

0xf7: Return(); Pop(0)

0xf8: PushEmpty()
0xf9: PushEmpty(bool)
0xfa: Call2 0x72d

0xfb: Pop(0)
0xfc: Pop(1); Push((bool) Stack[-1] == 0)
0xfd: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfe: Return(); Pop(0)

0xff: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x100: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0x101: Return(); Pop(0)

0x102: PushEmpty(string, bool)
0x103: Stack[-2] = Stack[-3]
0x104: Push("")
0x105: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x107: Stack[-1] = (bool) 0
0x108: GOTO 0x10a

0x109: Stack[-1] = (bool) 1
0x10a: Call2 0x5b8

0x10b: Pop(2)
0x10c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x10d: Return(); Pop(0)

0x10e: PushEmpty()
0x10f: Push((int) 1)
0x110: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x111: PushEmpty()
0x112: Call2 0x5d2

0x113: Pop(0)
0x114: Push((int) 19266)
0x115: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x117: PushEmpty(object, object)
0x118: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x119: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11a: Call2 0x61b

0x11b: Pop(2)
0x11c: PushEmpty(object, object)
0x11d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11f: Call2 0x649

0x120: Pop(2)
0x121: Push((int) 19269)
0x122: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x124: PushEmpty(object, object)
0x125: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x126: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x127: Call2 0x64f

0x128: Pop(2)
0x129: Push((int) 19312)
0x12a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12c: PushEmpty(object, object)
0x12d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12f: Call2 0x643

0x130: Pop(2)
0x131: Push((int) 19258)
0x132: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x134: PushEmpty(bool)
0x135: Stack[-1] = (bool) 0
0x136: PushEmpty(bool, object)
0x137: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x138: Call2 0x683

0x139: Pop(1)
0x13a: Pop(1); Push((bool) Stack[-1] == 0)
0x13b: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x13c: PushEmpty(bool, object)
0x13d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13e: Call2 0x678

0x13f: Pop(1)
0x140: Pop(1); Push((bool) Stack[-1] == 0)
0x141: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x142: Stack[-1] = (bool) 1
0x143: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x144: PushEmpty(string)
0x145: Stack[-1] = "Neutral"
0x146: Call2 0xf8

0x147: Pop(1)
0x148: Push((int) 518145)
0x149: @@ SetMessage(Stack[-1])
0x14a: Pop(1)
0x14b: @@ ClearReplies()
0x14c: Pop(0)
0x14d: Push((int) 518146)
0x14e: Push((int) 19260)
0x14f: Push((int) 19259)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Push((int) 529952)
0x153: Push((int) -1)
0x154: Push((int) 31336)
0x155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x156: Pop(3)
0x157: Return(); Pop(0)

0x158: PushEmpty(bool)
0x159: Stack[-1] = (bool) 0
0x15a: PushEmpty(bool, object)
0x15b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Call2 0x678

0x15d: Pop(1)
0x15e: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x15f: PushEmpty(bool, object)
0x160: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x161: Call2 0x683

0x162: Pop(1)
0x163: Pop(1); Push((bool) Stack[-1] == 0)
0x164: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x165: Stack[-1] = (bool) 1
0x166: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x167: PushEmpty(string)
0x168: Stack[-1] = "Neutral"
0x169: Call2 0xf8

0x16a: Pop(1)
0x16b: Push((int) 518150)
0x16c: @@ SetMessage(Stack[-1])
0x16d: Pop(1)
0x16e: @@ ClearReplies()
0x16f: Pop(0)
0x170: Push((int) 518151)
0x171: Push((int) 19265)
0x172: Push((int) 19264)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: PushEmpty(string)
0x177: Stack[-1] = "Neutral"
0x178: Call2 0xf8

0x179: Pop(1)
0x17a: Push((int) 518155)
0x17b: @@ SetMessage(Stack[-1])
0x17c: Pop(1)
0x17d: @@ ClearReplies()
0x17e: Pop(0)
0x17f: Push((int) 518156)
0x180: Push((int) -1)
0x181: Push((int) 19269)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: PushEmpty(bool, object)
0x185: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x186: Call2 0x66c

0x187: Pop(1)
0x188: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x189: Push((int) 518199)
0x18a: Push((int) 19313)
0x18b: Push((int) 19312)
0x18c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18d: Pop(3)
0x18e: Push((int) 518157)
0x18f: Push((int) -1)
0x190: Push((int) 19270)
0x191: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x192: Pop(3)
0x193: Return(); Pop(0)

0x194: Push((int) 19313)
0x195: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x196: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x197: PushEmpty(string)
0x198: Stack[-1] = "Neutral"
0x199: Call2 0xf8

0x19a: Pop(1)
0x19b: Push((int) 518200)
0x19c: @@ SetMessage(Stack[-1])
0x19d: Pop(1)
0x19e: @@ ClearReplies()
0x19f: Pop(0)
0x1a0: Push((int) 534598)
0x1a1: Push((int) 36237)
0x1a2: Push((int) 36236)
0x1a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a4: Pop(3)
0x1a5: Push((int) 518201)
0x1a6: Push((int) -1)
0x1a7: Push((int) 19314)
0x1a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a9: Pop(3)
0x1aa: Return(); Pop(0)

0x1ab: Push((int) 36237)
0x1ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1ae: PushEmpty(string)
0x1af: Stack[-1] = "Neutral"
0x1b0: Call2 0xf8

0x1b1: Pop(1)
0x1b2: Push((int) 534599)
0x1b3: @@ SetMessage(Stack[-1])
0x1b4: Pop(1)
0x1b5: @@ ClearReplies()
0x1b6: Pop(0)
0x1b7: Push((int) 534600)
0x1b8: Push((int) -1)
0x1b9: Push((int) 36238)
0x1ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bb: Pop(3)
0x1bc: Push((int) 534601)
0x1bd: Push((int) 36240)
0x1be: Push((int) 36239)
0x1bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c0: Pop(3)
0x1c1: Return(); Pop(0)

0x1c2: Push((int) 36240)
0x1c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1c5: PushEmpty(string)
0x1c6: Stack[-1] = "Neutral"
0x1c7: Call2 0xf8

0x1c8: Pop(1)
0x1c9: Push((int) 534602)
0x1ca: @@ SetMessage(Stack[-1])
0x1cb: Pop(1)
0x1cc: @@ ClearReplies()
0x1cd: Pop(0)
0x1ce: Push((int) 534603)
0x1cf: Push((int) -1)
0x1d0: Push((int) 36241)
0x1d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d2: Pop(3)
0x1d3: Push((int) 534604)
0x1d4: Push((int) -1)
0x1d5: Push((int) 36242)
0x1d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d7: Pop(3)
0x1d8: Return(); Pop(0)

0x1d9: Push((int) 19265)
0x1da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1dc: PushEmpty(string)
0x1dd: Stack[-1] = "Neutral"
0x1de: Call2 0xf8

0x1df: Pop(1)
0x1e0: Push((int) 518152)
0x1e1: @@ SetMessage(Stack[-1])
0x1e2: Pop(1)
0x1e3: @@ ClearReplies()
0x1e4: Pop(0)
0x1e5: Push((int) 518153)
0x1e6: Push((int) -1)
0x1e7: Push((int) 19266)
0x1e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e9: Pop(3)
0x1ea: Push((int) 518154)
0x1eb: Push((int) -1)
0x1ec: Push((int) 19267)
0x1ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ee: Pop(3)
0x1ef: Return(); Pop(0)

0x1f0: Push((int) 19260)
0x1f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1f3: PushEmpty(string)
0x1f4: Stack[-1] = "Neutral"
0x1f5: Call2 0xf8

0x1f6: Pop(1)
0x1f7: Push((int) 518147)
0x1f8: @@ SetMessage(Stack[-1])
0x1f9: Pop(1)
0x1fa: @@ ClearReplies()
0x1fb: Pop(0)
0x1fc: Push((int) 529953)
0x1fd: Push((int) 31339)
0x1fe: Push((int) 31337)
0x1ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x200: Pop(3)
0x201: Push((int) 529954)
0x202: Push((int) -1)
0x203: Push((int) 31338)
0x204: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x205: Pop(3)
0x206: Return(); Pop(0)

0x207: Push((int) 31339)
0x208: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x20a: PushEmpty(string)
0x20b: Stack[-1] = "Neutral"
0x20c: Call2 0xf8

0x20d: Pop(1)
0x20e: Push((int) 529955)
0x20f: @@ SetMessage(Stack[-1])
0x210: Pop(1)
0x211: @@ ClearReplies()
0x212: Pop(0)
0x213: Push((int) 518148)
0x214: Push((int) -1)
0x215: Push((int) 19261)
0x216: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x217: Pop(3)
0x218: Push((int) 518162)
0x219: Push((int) -1)
0x21a: Push((int) 19275)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: Return(); Pop(0)

0x21e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x21f: PushEmpty(bool)
0x220: Call2 0x72d

0x221: Pop(0)
0x222: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x223: @ lshStopAnimation()
0x224: Pop(0)
0x225: GOTO 0x228

0x226: @ StopAnimation()
0x227: Pop(0)
0x228: Return(); Pop(0)

0x229: GOTO 0x10f

0x22a: Return(); Pop(0)

0x22b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x22c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x22d: PushEmpty(bool, object, float)
0x22e: Stack[-2] = Stack[-12]
0x22f: Stack[-1] = (float) 110.0
0x230: Call2 0x51c

0x231: Pop(2)
0x232: Pop(1); Push((bool) Stack[-1] == 0)
0x233: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x234: Stack[-10] = (int) -2
0x235: Return(); Pop(8)

0x236: @ CreateDialog(Stack[-4])
0x237: Pop(0)
0x238: PushEmpty(int)
0x239: Call2 0x727

0x23a: Pop(0)
0x23b: @@ SetNPCName(Stack[-1])
0x23c: Pop(1)
0x23d: PushEmpty(int)
0x23e: Call2 0x725

0x23f: Pop(0)
0x240: @@ SetNPCDescription(Stack[-1])
0x241: Pop(1)
0x242: PushEmpty(string)
0x243: Call2 0x729

0x244: Pop(0)
0x245: @@ SetPhoto(Stack[-1])
0x246: Pop(1)
0x247: PushEmpty(string)
0x248: Call2 0x72b

0x249: Pop(0)
0x24a: @@ SetPhoto2(Stack[-1])
0x24b: Pop(1)
0x24c: PushEmpty(int)
0x24d: Call2 0x70e

0x24e: Pop(0)
0x24f: @@ SetPlayerName(Stack[-1])
0x250: Pop(1)
0x251: Stack[-2] = (int) -1
0x252: @ IsOverrideActive(Stack[-3])
0x253: Pop(0)
0x254: Push(Stack[-3])
0x255: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x256: Stack[-10] = (int) -2
0x257: Return(); Pop(8)

0x258: @ DoDialog(Stack[-4])
0x259: Pop(0)
0x25a: PushEmpty(object, object)
0x25b: Stack[-2] = Stack[-11]
0x25c: Stack[-1] = Stack[-6]
0x25d: Push(-2, 4); TaskCall(4)
0x25e: Call2 0x275

0x25f: Pop(-2, 4); TaskReturn
0x260: Pop(2)
0x261: @@ IsDialogEnd(Stack[-1])
0x262: Pop(0)
0x263: Pop(0); Push((bool) Stack[-1] == 0)
0x264: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x265: @ sync()
0x266: Pop(0)
0x267: @@ IsDialogEnd(Stack[-1])
0x268: Pop(0)
0x269: GOTO 0x263

0x26a: PushEmpty(object)
0x26b: Stack[-1] = Stack[-10]
0x26c: Call2 0x561

0x26d: Pop(1)
0x26e: @ StopDialog(Stack[-4])
0x26f: Pop(0)
0x270: @@ GetReturnValue(Stack[-2])
0x271: Pop(0)
0x272: Stack[-10] = Stack[-2]
0x273: Return(); Pop(8)

0x274: Stack[-4] = 0
0x275: PushEmpty()
0x276: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x277: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x278: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x279: Push((int) 1)
0x27a: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x27b: PushEmpty(string)
0x27c: Stack[-1] = "Neutral"
0x27d: Call2 0x2c2

0x27e: Pop(1)
0x27f: Push((int) 525385)
0x280: @@ SetMessage(Stack[-1])
0x281: Pop(1)
0x282: @@ ClearReplies()
0x283: Pop(0)
0x284: PushEmpty(bool)
0x285: Stack[-1] = (bool) 0
0x286: PushEmpty(bool, object)
0x287: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x288: Call2 0x654

0x289: Pop(1)
0x28a: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x28b: PushEmpty(bool, object)
0x28c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28d: Call2 0x660

0x28e: Pop(1)
0x28f: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x290: Stack[-1] = (bool) 1
0x291: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x292: Push((int) 525387)
0x293: Push((int) 40946)
0x294: Push((int) 26755)
0x295: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x296: Pop(3)
0x297: Push((int) 539023)
0x298: Push((int) -1)
0x299: Push((int) 40966)
0x29a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29b: Pop(3)
0x29c: Push((int) 539024)
0x29d: Push((int) -1)
0x29e: Push((int) 40967)
0x29f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a0: Pop(3)
0x2a1: GOTO 0x2a4

0x2a2: Return(); Pop(0)

0x2a3: GOTO 0x279

0x2a4: PushEmpty(bool)
0x2a5: Call2 0x72d

0x2a6: Pop(0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2a8: @ lshWaitForAnimEnd()
0x2a9: Pop(0)
0x2aa: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: GOTO 0x2b2

0x2ad: PushEmpty(string)
0x2ae: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2af: Call2 0x5a8

0x2b0: Pop(1)
0x2b1: GOTO 0x2a8

0x2b2: GOTO 0x2c1

0x2b3: Push("all")
0x2b4: Push("idle")
0x2b5: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b6: Pop(2)
0x2b7: @ WaitForAnimEnd()
0x2b8: Pop(0)
0x2b9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2bb: GOTO 0x2c1

0x2bc: Push("all")
0x2bd: Push("idle")
0x2be: @ PlayAnimation(Stack[-2], Stack[-1])
0x2bf: Pop(2)
0x2c0: GOTO 0x2b7

0x2c1: Return(); Pop(0)

0x2c2: PushEmpty()
0x2c3: PushEmpty(bool)
0x2c4: Call2 0x72d

0x2c5: Pop(0)
0x2c6: Pop(1); Push((bool) Stack[-1] == 0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: Return(); Pop(0)

0x2c9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2cb: Return(); Pop(0)

0x2cc: PushEmpty(string, bool)
0x2cd: Stack[-2] = Stack[-3]
0x2ce: Push("")
0x2cf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d1: Stack[-1] = (bool) 0
0x2d2: GOTO 0x2d4

0x2d3: Stack[-1] = (bool) 1
0x2d4: Call2 0x5b8

0x2d5: Pop(2)
0x2d6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2d7: Return(); Pop(0)

0x2d8: PushEmpty()
0x2d9: Push((int) 1)
0x2da: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x2db: PushEmpty()
0x2dc: Call2 0x5d2

0x2dd: Pop(0)
0x2de: Push((int) 26755)
0x2df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e1: PushEmpty(object, object)
0x2e2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e4: Call2 0x62a

0x2e5: Pop(2)
0x2e6: Push((int) 40957)
0x2e7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2e9: PushEmpty(object, object)
0x2ea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ec: Call2 0x630

0x2ed: Pop(2)
0x2ee: Push((int) 40958)
0x2ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f1: PushEmpty(object, object)
0x2f2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f4: Call2 0x630

0x2f5: Pop(2)
0x2f6: Push((int) 40959)
0x2f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f9: PushEmpty(object, object)
0x2fa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2fb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fc: Call2 0x630

0x2fd: Pop(2)
0x2fe: Push((int) 26757)
0x2ff: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x301: PushEmpty(object, object)
0x302: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x303: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x304: Call2 0x630

0x305: Pop(2)
0x306: Push((int) 26753)
0x307: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x308: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x309: PushEmpty(string)
0x30a: Stack[-1] = "Neutral"
0x30b: Call2 0x2c2

0x30c: Pop(1)
0x30d: Push((int) 525385)
0x30e: @@ SetMessage(Stack[-1])
0x30f: Pop(1)
0x310: @@ ClearReplies()
0x311: Pop(0)
0x312: PushEmpty(bool)
0x313: Stack[-1] = (bool) 0
0x314: PushEmpty(bool, object)
0x315: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x316: Call2 0x654

0x317: Pop(1)
0x318: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x319: PushEmpty(bool, object)
0x31a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x31b: Call2 0x660

0x31c: Pop(1)
0x31d: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31e: Stack[-1] = (bool) 1
0x31f: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x320: Push((int) 525387)
0x321: Push((int) 40946)
0x322: Push((int) 26755)
0x323: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x324: Pop(3)
0x325: Push((int) 539023)
0x326: Push((int) -1)
0x327: Push((int) 40966)
0x328: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x329: Pop(3)
0x32a: Push((int) 539024)
0x32b: Push((int) -1)
0x32c: Push((int) 40967)
0x32d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32e: Pop(3)
0x32f: Return(); Pop(0)

0x330: Push((int) 40946)
0x331: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x332: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x333: PushEmpty(string)
0x334: Stack[-1] = "Neutral"
0x335: Call2 0x2c2

0x336: Pop(1)
0x337: Push((int) 539004)
0x338: @@ SetMessage(Stack[-1])
0x339: Pop(1)
0x33a: @@ ClearReplies()
0x33b: Pop(0)
0x33c: Push((int) 539005)
0x33d: Push((int) 40948)
0x33e: Push((int) 40947)
0x33f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x340: Pop(3)
0x341: Push((int) 539022)
0x342: Push((int) 40948)
0x343: Push((int) 40964)
0x344: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x345: Pop(3)
0x346: Return(); Pop(0)

0x347: Push((int) 40948)
0x348: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x349: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x34a: PushEmpty(string)
0x34b: Stack[-1] = "Neutral"
0x34c: Call2 0x2c2

0x34d: Pop(1)
0x34e: Push((int) 539006)
0x34f: @@ SetMessage(Stack[-1])
0x350: Pop(1)
0x351: @@ ClearReplies()
0x352: Pop(0)
0x353: Push((int) 539007)
0x354: Push((int) 40950)
0x355: Push((int) 40949)
0x356: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x357: Pop(3)
0x358: Return(); Pop(0)

0x359: Push((int) 40950)
0x35a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x35c: PushEmpty(string)
0x35d: Stack[-1] = "Neutral"
0x35e: Call2 0x2c2

0x35f: Pop(1)
0x360: Push((int) 539008)
0x361: @@ SetMessage(Stack[-1])
0x362: Pop(1)
0x363: @@ ClearReplies()
0x364: Pop(0)
0x365: Push((int) 539009)
0x366: Push((int) 40952)
0x367: Push((int) 40951)
0x368: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x369: Pop(3)
0x36a: Push((int) 539021)
0x36b: Push((int) -1)
0x36c: Push((int) 40963)
0x36d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36e: Pop(3)
0x36f: Return(); Pop(0)

0x370: Push((int) 40952)
0x371: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x372: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x373: PushEmpty(string)
0x374: Stack[-1] = "Neutral"
0x375: Call2 0x2c2

0x376: Pop(1)
0x377: Push((int) 539010)
0x378: @@ SetMessage(Stack[-1])
0x379: Pop(1)
0x37a: @@ ClearReplies()
0x37b: Pop(0)
0x37c: Push((int) 539011)
0x37d: Push((int) 40954)
0x37e: Push((int) 40953)
0x37f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x380: Pop(3)
0x381: Push((int) 539018)
0x382: Push((int) 40961)
0x383: Push((int) 40960)
0x384: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x385: Pop(3)
0x386: Return(); Pop(0)

0x387: Push((int) 40961)
0x388: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x389: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x38a: PushEmpty(string)
0x38b: Stack[-1] = "Neutral"
0x38c: Call2 0x2c2

0x38d: Pop(1)
0x38e: Push((int) 539019)
0x38f: @@ SetMessage(Stack[-1])
0x390: Pop(1)
0x391: @@ ClearReplies()
0x392: Pop(0)
0x393: Push((int) 525389)
0x394: Push((int) -1)
0x395: Push((int) 26757)
0x396: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x397: Pop(3)
0x398: Return(); Pop(0)

0x399: Push((int) 40954)
0x39a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x39c: PushEmpty(string)
0x39d: Stack[-1] = "Neutral"
0x39e: Call2 0x2c2

0x39f: Pop(1)
0x3a0: Push((int) 539012)
0x3a1: @@ SetMessage(Stack[-1])
0x3a2: Pop(1)
0x3a3: @@ ClearReplies()
0x3a4: Pop(0)
0x3a5: Push((int) 539013)
0x3a6: Push((int) 40956)
0x3a7: Push((int) 40955)
0x3a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a9: Pop(3)
0x3aa: Push((int) 539017)
0x3ab: Push((int) -1)
0x3ac: Push((int) 40959)
0x3ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ae: Pop(3)
0x3af: Return(); Pop(0)

0x3b0: Push((int) 40956)
0x3b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3b3: PushEmpty(string)
0x3b4: Stack[-1] = "Neutral"
0x3b5: Call2 0x2c2

0x3b6: Pop(1)
0x3b7: Push((int) 539014)
0x3b8: @@ SetMessage(Stack[-1])
0x3b9: Pop(1)
0x3ba: @@ ClearReplies()
0x3bb: Pop(0)
0x3bc: Push((int) 539015)
0x3bd: Push((int) -1)
0x3be: Push((int) 40957)
0x3bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c0: Pop(3)
0x3c1: Push((int) 539016)
0x3c2: Push((int) -1)
0x3c3: Push((int) 40958)
0x3c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c5: Pop(3)
0x3c6: Return(); Pop(0)

0x3c7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3c8: PushEmpty(bool)
0x3c9: Call2 0x72d

0x3ca: Pop(0)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3cc: @ lshStopAnimation()
0x3cd: Pop(0)
0x3ce: GOTO 0x3d1

0x3cf: @ StopAnimation()
0x3d0: Pop(0)
0x3d1: Return(); Pop(0)

0x3d2: GOTO 0x2d9

0x3d3: Return(); Pop(0)

0x3d4: PushEmpty(int)
0x3d5: Call2 0x5fa

0x3d6: Stack[7 + Tasks[-1].StackPointer] = Stack[-1]
0x3d7: Pop(1)
0x3d8: PushEmpty()
0x3d9: Call2 0x6e0

0x3da: Pop(0)
0x3db: PushEmpty(float, float)
0x3dc: Stack[-2] = (int) 300
0x3dd: Stack[-1] = (int) 100
0x3de: Call2 0x425

0x3df: Pop(2)
0x3e0: Return(); Pop(0)

0x3e1: PushEmpty(int, int)
0x3e2: PushEmpty()
0x3e3: Call2 0x4ab

0x3e4: Pop(0)
0x3e5: PushEmpty(int)
0x3e6: Call2 0x71f

0x3e7: Pop(0)
0x3e8: Push((int) 1)
0x3e9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3eb: PushEmpty(int, object)
0x3ec: Stack[-1] = Stack[-5]
0x3ed: Push(-2, 1); TaskCall(1)
0x3ee: Call2 0x28

0x3ef: Pop(-2, 1); TaskReturn
0x3f0: Stack[-3] = Stack[-2]
0x3f1: Pop(2)
0x3f2: GOTO 0x402

0x3f3: PushEmpty(int)
0x3f4: Call2 0x71f

0x3f5: Pop(0)
0x3f6: Push((int) 2)
0x3f7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3f8: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3f9: PushEmpty(int, object)
0x3fa: Stack[-1] = Stack[-5]
0x3fb: Push(-2, 1); TaskCall(3)
0x3fc: Call2 0x22b

0x3fd: Pop(-2, 1); TaskReturn
0x3fe: Stack[-3] = Stack[-2]
0x3ff: Pop(2)
0x400: GOTO 0x402

0x401: Return(); Pop(2)

0x402: Push((int) 1000)
0x403: Pop(1); Push((bool) Stack[-1] == Stack[-2])
0x404: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x405: PushEmpty(bool, object, float)
0x406: Stack[-2] = Stack[-6]
0x407: Stack[-1] = (float) 110.0
0x408: Call2 0x573

0x409: Pop(2)
0x40a: Pop(1); Push((bool) Stack[-1] == 0)
0x40b: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40c: Return(); Pop(2)

0x40d: PushEmpty(object)
0x40e: Stack[-1] = Stack[-4]
0x40f: Push(-1, 1); TaskCall(0)
0x410: Call2 0x0

0x411: Pop(-1, 1); TaskReturn
0x412: Pop(1)
0x413: PushEmpty(object)
0x414: Stack[-1] = Stack[-4]
0x415: Call2 0x5a3

0x416: Pop(1)
0x417: Return(); Pop(2)

0x418: PushEmpty(int)
0x419: Call2 0x5fa

0x41a: Pop(0)
0x41b: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] != Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x41d: PushEmpty()
0x41e: Call2 0x6e0

0x41f: Pop(0)
0x420: PushEmpty(int)
0x421: Call2 0x5fa

0x422: Stack[7 + Tasks[-1].StackPointer] = Stack[-1]
0x423: Pop(1)
0x424: Return(); Pop(0)

0x425: PushEmpty(float, bool, float, bool)
0x426: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x427: Push((int) 3)
0x428: @ rand(Stack[-3], Stack[-1])
0x429: Pop(1)
0x42a: Push((int) 3)
0x42b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x42c: @ Sleep(Stack[-1], Stack[-2])
0x42d: Pop(1)
0x42e: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x42f: PushEmpty(float, float)
0x430: Stack[-2] = Stack[-8]
0x431: Stack[-1] = Stack[-7]
0x432: Call2 0x46a

0x433: Pop(2)
0x434: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x435: GOTO 0x427

0x436: Return(); Pop(4)

0x437: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x438: PushEmpty(bool)
0x439: Stack[-1] = (bool) 0
0x43a: PushEmpty(bool)
0x43b: Call2 0x517

0x43c: Pop(0)
0x43d: Pop(1); Push((bool) Stack[-1] == 0)
0x43e: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x43f: PushEmpty(bool)
0x440: Call2 0x468

0x441: Pop(0)
0x442: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x443: Stack[-1] = (bool) 1
0x444: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x445: PushEmpty(object)
0x446: Call2 0x5d9

0x447: Pop(0)
0x448: @ RemoveActor(Stack[-1])
0x449: Pop(1)
0x44a: Return(); Pop(0)

0x44b: PushEmpty()
0x44c: Push("cleanup")
0x44d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44e: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x44f: PushEmpty()
0x450: Call2 0x437

0x451: Pop(0)
0x452: Return(); Pop(0)

0x453: Push( Stack[6 + Tasks[-1].StackPointer] )
0x454: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x455: PushEmpty()
0x456: Call2 0x4ab

0x457: Pop(0)
0x458: PushEmpty(bool)
0x459: Stack[-1] = (bool) 0
0x45a: Push( Stack[5 + Tasks[-1].StackPointer] )
0x45b: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45c: PushEmpty(bool)
0x45d: Call2 0x468

0x45e: Pop(0)
0x45f: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x460: Stack[-1] = (bool) 1
0x461: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x462: PushEmpty(object)
0x463: Call2 0x5d9

0x464: Pop(0)
0x465: @ RemoveActor(Stack[-1])
0x466: Pop(1)
0x467: Return(); Pop(0)

0x468: Stack[-1] = (bool) 1
0x469: Return(); Pop(0)

0x46a: PushEmpty()
0x46b: PushEmpty(bool)
0x46c: Call2 0x517

0x46d: Pop(0)
0x46e: Pop(1); Push((bool) Stack[-1] == 0)
0x46f: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x470: Return(); Pop(0)

0x471: Push("player")
0x472: @ FindActor(Stack[-4], Stack[-1])
0x473: Pop(1)
0x474: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x475: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x476: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x477: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x478: Push((int) 10)
0x479: Push((float)1.0)
0x47a: @ SetTimer(Stack[-2], Stack[-1])
0x47b: Pop(2)
0x47c: PushEmpty()
0x47d: Call2 0x4b9

0x47e: Pop(0)
0x47f: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x480: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x481: Push((int) 10)
0x482: @ KillTimer(Stack[-1])
0x483: Pop(1)
0x484: Return(); Pop(0)

0x485: PushEmpty(float, float)
0x486: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x487: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x488: Stack[-3] = (bool) 0
0x489: Return(); Pop(2)

0x48a: PushEmpty(float, object)
0x48b: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x48c: Call2 0x50f

0x48d: Pop(1)
0x48e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x48f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x490: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x491: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x492: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x493: Return(); Pop(2)

0x494: PushEmpty()
0x495: Push((int) 10)
0x496: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x497: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x498: PushEmpty(bool)
0x499: Call2 0x485

0x49a: Pop(0)
0x49b: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x49c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x49d: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x49e: PushEmpty(object)
0x49f: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x4a0: Call2 0x5c7

0x4a1: Pop(1)
0x4a2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4a3: GOTO 0x4aa

0x4a4: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4a5: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a6: Push("head")
0x4a7: @ UnlookAsync(Stack[-1])
0x4a8: Pop(1)
0x4a9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4aa: Return(); Pop(0)

0x4ab: PushEmpty()
0x4ac: Call2 0x50a

0x4ad: Pop(0)
0x4ae: Push((int) 10)
0x4af: @ KillTimer(Stack[-1])
0x4b0: Pop(1)
0x4b1: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b3: Push("head")
0x4b4: @ UnlookAsync(Stack[-1])
0x4b5: Pop(1)
0x4b6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4b7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4b8: Return(); Pop(0)

0x4b9: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x4ba: @ WaitForAnimEnd()
0x4bb: Pop(0)
0x4bc: PushEmpty(bool)
0x4bd: Call2 0x517

0x4be: Pop(0)
0x4bf: Pop(1); Push((bool) Stack[-1] == 0)
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c1: Return(); Pop(14)

0x4c2: PushEmpty(int)
0x4c3: Call2 0x60a

0x4c4: Stack[-8] = Stack[-1]
0x4c5: Pop(1)
0x4c6: Stack[-6] = (int) 0
0x4c7: PushEmpty(bool)
0x4c8: Stack[-1] = (bool) 0
0x4c9: Push((int) 5)
0x4ca: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x4cb: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4cc: PushEmpty(bool)
0x4cd: Call2 0x517

0x4ce: Pop(0)
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4d0: Stack[-1] = (bool) 1
0x4d1: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x4d2: Push((int) 3)
0x4d3: @ irand(Stack[-6], Stack[-1])
0x4d4: Pop(1)
0x4d5: Push((int) 0)
0x4d6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4d7: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4d8: Push(Stack[-7])
0x4d9: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4da: @ irand(Stack[-4], Stack[-7])
0x4db: Pop(0)
0x4dc: Push("all")
0x4dd: PushEmpty(string, int)
0x4de: Stack[-1] = Stack[-7]
0x4df: Call2 0x603

0x4e0: Pop(1)
0x4e1: @ PlayAnimation(Stack[-2], Stack[-1])
0x4e2: Pop(2)
0x4e3: @ WaitForAnimEnd(Stack[-3])
0x4e4: Pop(0)
0x4e5: Pop(0); Push((bool) Stack[-3] == 0)
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e7: GOTO 0x505

0x4e8: GOTO 0x4fa

0x4e9: Push((int) 1)
0x4ea: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4eb: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4ec: Push((int) 4)
0x4ed: @ rand(Stack[-3], Stack[-1])
0x4ee: Pop(1)
0x4ef: Push((int) 1)
0x4f0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4f1: @ Sleep(Stack[-1], Stack[-2])
0x4f2: Pop(1)
0x4f3: Pop(0); Push((bool) Stack[-1] == 0)
0x4f4: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f5: GOTO 0x505

0x4f6: GOTO 0x4fa

0x4f7: Push(Stack[-6])
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f9: GOTO 0x505

0x4fa: PushEmpty(bool)
0x4fb: Call2 0x508

0x4fc: Pop(0)
0x4fd: Pop(1); Push((bool) Stack[-1] == 0)
0x4fe: IF (Stack[-1] == 0) GOTO 0x500; Pop(1)

0x4ff: GOTO 0x505

0x500: @ ResetAAS()
0x501: Pop(0)
0x502: Push((int) 1)
0x503: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x504: GOTO 0x4c7

0x505: @ ResetAAS()
0x506: Pop(0)
0x507: Return(); Pop(14)

0x508: Stack[-1] = (bool) 1
0x509: Return(); Pop(0)

0x50a: @ StopAnimation()
0x50b: Pop(0)
0x50c: @ StopGroup0()
0x50d: Pop(0)
0x50e: Return(); Pop(0)

0x50f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x510: @ GetPosition(Stack[-3])
0x511: Pop(0)
0x512: @@ GetPosition(Stack[-2])
0x513: Pop(0)
0x514: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x515: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x516: Return(); Pop(6)

0x517: PushEmpty(bool, bool)
0x518: @ IsLoaded(Stack[-1])
0x519: Pop(0)
0x51a: Stack[-3] = Stack[-1]
0x51b: Return(); Pop(2)

0x51c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x51d: @@ GetPosition(Stack[-8])
0x51e: Pop(0)
0x51f: @@ GetEyesHeight(Stack[-9])
0x520: Pop(0)
0x521: Push(CvectorIndex(Stack[-8], 1))
0x522: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x523: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x524: @ GetPosition(Stack[-7])
0x525: Pop(0)
0x526: @ GetEyesHeight(Stack[-9])
0x527: Pop(0)
0x528: Push(CvectorIndex(Stack[-7], 1))
0x529: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x52a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x52b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x52c: Push(CvectorIndex(Stack[-6], 1))
0x52d: Stack[-1] = (int) 0
0x52e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x52f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x530: Pop(1); Push(Sqrt(Stack[-1]))
0x531: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x532: Stack[-5] = -Stack[-6]; Pop(0);
0x533: Pop(0); Push(Stack[-6] * Stack[-19]);
0x534: PushEmpty(cvector, cvector)
0x535: Push(CVector(0.0, 1.0, 0.0))
0x536: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x537: Call2 0x5df

0x538: Pop(1)
0x539: Push((int) 25)
0x53a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x53b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x53c: Push(CVector(0.0, 10.0, 0.0))
0x53d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x53e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x53f: @ IsOverrideActive(Stack[-2])
0x540: Pop(0)
0x541: Push(Stack[-2])
0x542: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x543: Stack[-21] = (bool) 0
0x544: Return(); Pop(18)

0x545: @ StopWorld()
0x546: Pop(0)
0x547: Push((bool) 1)
0x548: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x549: Pop(1)
0x54a: Push(CvectorIndex(Stack[-4], 0))
0x54b: Push(CvectorIndex(Stack[-5], 2))
0x54c: @ Rotate(Stack[-2], Stack[-1])
0x54d: Pop(2)
0x54e: PushEmpty(bool)
0x54f: Call2 0x72d

0x550: Pop(0)
0x551: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x552: GOTO 0x55b

0x553: Push("head")
0x554: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x555: Pop(1)
0x556: Push(Stack[-1])
0x557: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x558: Push("head")
0x559: @ LookAsyncCamera(Stack[-1])
0x55a: Pop(1)
0x55b: @ CameraWaitForPlayFinish()
0x55c: Pop(0)
0x55d: @ ResumeWorld()
0x55e: Pop(0)
0x55f: Stack[-21] = (bool) 1
0x560: Return(); Pop(18)

0x561: PushEmpty(bool, bool)
0x562: Push((bool) 1)
0x563: @ CameraSwitchToNormal(Stack[-1])
0x564: Pop(1)
0x565: PushEmpty(bool)
0x566: Call2 0x72d

0x567: Pop(0)
0x568: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x569: GOTO 0x572

0x56a: Push("head")
0x56b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x56c: Pop(1)
0x56d: Push(Stack[-1])
0x56e: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x56f: Push("head")
0x570: @ UnlookAsync(Stack[-1])
0x571: Pop(1)
0x572: Return(); Pop(2)

0x573: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x574: @@ GetPosition(Stack[-7])
0x575: Pop(0)
0x576: @@ GetEyesHeight(Stack[-8])
0x577: Pop(0)
0x578: Push(CvectorIndex(Stack[-7], 1))
0x579: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x57a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x57b: @ GetPosition(Stack[-6])
0x57c: Pop(0)
0x57d: @ GetEyesHeight(Stack[-8])
0x57e: Pop(0)
0x57f: Push(CvectorIndex(Stack[-6], 1))
0x580: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x581: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x582: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x583: Push(CvectorIndex(Stack[-5], 1))
0x584: Stack[-1] = (int) 0
0x585: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x586: Pop(0); Push(Stack[-5] | Stack[-5]);
0x587: Pop(1); Push(Sqrt(Stack[-1]))
0x588: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x589: Stack[-4] = -Stack[-5]; Pop(0);
0x58a: Pop(0); Push(Stack[-5] * Stack[-17]);
0x58b: Push(CVector(0.0, 10.0, 0.0))
0x58c: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x58d: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x58e: @ IsOverrideActive(Stack[-1])
0x58f: Pop(0)
0x590: Push(Stack[-1])
0x591: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x592: Stack[-19] = (bool) 0
0x593: Return(); Pop(16)

0x594: @ StopWorld()
0x595: Pop(0)
0x596: Push((bool) 1)
0x597: @ CameraTransit(Stack[-3], Stack[-5], Stack[-1])
0x598: Pop(1)
0x599: Push(CvectorIndex(Stack[-3], 0))
0x59a: Push(CvectorIndex(Stack[-4], 2))
0x59b: @ Rotate(Stack[-2], Stack[-1])
0x59c: Pop(2)
0x59d: @ CameraWaitForPlayFinish()
0x59e: Pop(0)
0x59f: @ ResumeWorld()
0x5a0: Pop(0)
0x5a1: Stack[-19] = (bool) 1
0x5a2: Return(); Pop(16)

0x5a3: PushEmpty()
0x5a4: Push((bool) 1)
0x5a5: @ CameraSwitchToNormal(Stack[-1])
0x5a6: Pop(1)
0x5a7: Return(); Pop(0)

0x5a8: PushEmpty(bool, float, float, bool, float, float)
0x5a9: @ lshHasAnimation(Stack[-3], Stack[-7])
0x5aa: Pop(0)
0x5ab: Push(Stack[-3])
0x5ac: IF (Stack[-1] == 0) GOTO 0x5b3; Pop(1)

0x5ad: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x5ae: Pop(0)
0x5af: Push((bool) 0)
0x5b0: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5b1: Pop(1)
0x5b2: GOTO 0x5b7

0x5b3: Push("Can't find lsh animation : ")
0x5b4: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5b5: @ Trace(Stack[-1])
0x5b6: Pop(1)
0x5b7: Return(); Pop(6)

0x5b8: PushEmpty(bool, float, float, bool, float, float)
0x5b9: @ lshHasAnimation(Stack[-3], Stack[-8])
0x5ba: Pop(0)
0x5bb: Push(Stack[-3])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5bd: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x5be: Pop(0)
0x5bf: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x5c0: Pop(0)
0x5c1: GOTO 0x5c6

0x5c2: Push("Can't find lsh animation : ")
0x5c3: Pop(1); Push(Stack[-1] + Stack[-9]);
0x5c4: @ Trace(Stack[-1])
0x5c5: Pop(1)
0x5c6: Return(); Pop(6)

0x5c7: PushEmpty(float, cvector, float, cvector)
0x5c8: @@ GetEyesHeight(Stack[-2])
0x5c9: Pop(0)
0x5ca: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5cb: Push(CvectorIndex(Stack[-1], 1))
0x5cc: Stack[-1] = Stack[-3]
0x5cd: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5ce: Push("head")
0x5cf: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x5d0: Pop(1)
0x5d1: Return(); Pop(4)

0x5d2: PushEmpty(bool)
0x5d3: Call2 0x72d

0x5d4: Pop(0)
0x5d5: IF (Stack[-1] == 0) GOTO 0x5d8; Pop(1)

0x5d6: @ lshStopSpeech()
0x5d7: Pop(0)
0x5d8: Return(); Pop(0)

0x5d9: PushEmpty(object, object)
0x5da: @ self(Stack[-1])
0x5db: Pop(0)
0x5dc: Stack[-3] = Stack[-1]
0x5dd: Return(); Pop(2)

0x5de: Stack[-1] = 0
0x5df: PushEmpty(float, float)
0x5e0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5e1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5e2: Push((float)0.0)
0x5e3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5e4: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5e5: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5e6: Return(); Pop(2)

0x5e7: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5e8: Return(); Pop(2)

0x5e9: PushEmpty(int, int)
0x5ea: @ GetVariable(Stack[-3], Stack[-1])
0x5eb: Pop(0)
0x5ec: Stack[-4] = Stack[-1]
0x5ed: Return(); Pop(2)

0x5ee: PushEmpty(int, bool, int, bool)
0x5ef: @ GetInvItemByName(Stack[-2], Stack[-5])
0x5f0: Pop(0)
0x5f1: @@ HasItem(Stack[-2], Stack[-1])
0x5f2: Pop(0)
0x5f3: Stack[-7] = Stack[-1]
0x5f4: Return(); Pop(4)

0x5f5: PushEmpty(float, float)
0x5f6: @ GetGameTime(Stack[-1])
0x5f7: Pop(0)
0x5f8: Stack[-3] = Stack[-1]
0x5f9: Return(); Pop(2)

0x5fa: PushEmpty(float, float)
0x5fb: @ GetGameTime(Stack[-1])
0x5fc: Pop(0)
0x5fd: Push((int) 1)
0x5fe: PushEmpty(int)
0x5ff: Push((int) 24)
0x600: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x601: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x602: Return(); Pop(2)

0x603: PushEmpty(string, string)
0x604: Stack[-1] = "idle"
0x605: Push(Stack[-3])
0x606: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x607: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x608: Stack[-4] = Stack[-1]
0x609: Return(); Pop(2)

0x60a: PushEmpty(int, bool, int, bool)
0x60b: Stack[-2] = (int) 0
0x60c: Push("all")
0x60d: PushEmpty(string, int)
0x60e: Stack[-1] = Stack[-5]
0x60f: Call2 0x603

0x610: Pop(1)
0x611: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x612: Pop(2)
0x613: Pop(0); Push((bool) Stack[-1] == 0)
0x614: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x615: GOTO 0x619

0x616: Push((int) 1)
0x617: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x618: GOTO 0x60c

0x619: Stack[-5] = Stack[-2]
0x61a: Return(); Pop(4)

0x61b: PushEmpty(int, int, int, int)
0x61c: PushEmpty(int)
0x61d: Call2 0x5fa

0x61e: Stack[-3] = Stack[-1]
0x61f: Pop(1)
0x620: Push("Gatherer1_")
0x621: Pop(1); Push(Stack[-1] + Stack[-3]);
0x622: Push((int) 1)
0x623: @ SetVariable(Stack[-2], Stack[-1])
0x624: Pop(2)
0x625: Push("blood")
0x626: Push((int) 1)
0x627: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x628: Pop(2)
0x629: Return(); Pop(4)

0x62a: PushEmpty()
0x62b: Push("ookGatherer1")
0x62c: Push((int) 1)
0x62d: @ SetVariable(Stack[-2], Stack[-1])
0x62e: Pop(2)
0x62f: Return(); Pop(0)

0x630: PushEmpty(object, object)
0x631: PushEmpty(object)
0x632: Call2 0x6cf

0x633: Stack[-2] = Stack[-1]
0x634: Pop(1)
0x635: Push("k2q04MorlokGotoAndrei")
0x636: Push("pt_map_andrei")
0x637: Push((int) 0)
0x638: Push((int) 539378)
0x639: PushEmpty(float)
0x63a: Call2 0x5f5

0x63b: Pop(0)
0x63c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x63d: Pop(5)
0x63e: PushEmpty()
0x63f: Call2 0x699

0x640: Pop(0)
0x641: Return(); Pop(2)

0x642: Stack[-1] = 0
0x643: PushEmpty()
0x644: Push("oobSysGatherer1_1")
0x645: Push((int) 1)
0x646: @ SetVariable(Stack[-2], Stack[-1])
0x647: Pop(2)
0x648: Return(); Pop(0)

0x649: PushEmpty()
0x64a: Push("playsound")
0x64b: Push("giveitem")
0x64c: @ TriggerWorld(Stack[-2], Stack[-1])
0x64d: Pop(2)
0x64e: Return(); Pop(0)

0x64f: PushEmpty()
0x650: Push((int) 1000)
0x651: @@ SetReturnValue(Stack[-1])
0x652: Pop(1)
0x653: Return(); Pop(0)

0x654: PushEmpty()
0x655: PushEmpty(int, string)
0x656: Stack[-1] = "k2q04"
0x657: Call2 0x5e9

0x658: Pop(1)
0x659: Push((int) 2)
0x65a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x65b: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x65c: Stack[-2] = (bool) 1
0x65d: Return(); Pop(0)

0x65e: Stack[-2] = (bool) 0
0x65f: Return(); Pop(0)

0x660: PushEmpty()
0x661: PushEmpty(int, string)
0x662: Stack[-1] = "ookGatherer1"
0x663: Call2 0x5e9

0x664: Pop(1)
0x665: Push((int) 0)
0x666: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x667: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x668: Stack[-2] = (bool) 1
0x669: Return(); Pop(0)

0x66a: Stack[-2] = (bool) 0
0x66b: Return(); Pop(0)

0x66c: PushEmpty()
0x66d: PushEmpty(int, string)
0x66e: Stack[-1] = "oobSysGatherer1_1"
0x66f: Call2 0x5e9

0x670: Pop(1)
0x671: Push((int) 0)
0x672: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x673: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x674: Stack[-2] = (bool) 1
0x675: Return(); Pop(0)

0x676: Stack[-2] = (bool) 0
0x677: Return(); Pop(0)

0x678: PushEmpty()
0x679: PushEmpty(bool, object, string)
0x67a: Stack[-2] = Stack[-4]
0x67b: Stack[-1] = "blood"
0x67c: Call2 0x5ee

0x67d: Pop(2)
0x67e: IF (Stack[-1] == 0) GOTO 0x681; Pop(1)

0x67f: Stack[-2] = (bool) 1
0x680: Return(); Pop(0)

0x681: Stack[-2] = (bool) 0
0x682: Return(); Pop(0)

0x683: PushEmpty()
0x684: PushEmpty(bool, object)
0x685: Stack[-1] = Stack[-3]
0x686: Call2 0x68d

0x687: Pop(1)
0x688: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x689: Stack[-2] = (bool) 1
0x68a: Return(); Pop(0)

0x68b: Stack[-2] = (bool) 0
0x68c: Return(); Pop(0)

0x68d: PushEmpty(int, int, int, int)
0x68e: PushEmpty(int)
0x68f: Call2 0x5fa

0x690: Stack[-3] = Stack[-1]
0x691: Pop(1)
0x692: Push("Gatherer1_")
0x693: Pop(1); Push(Stack[-1] + Stack[-3]);
0x694: @ GetVariable(Stack[-1], Stack[-2])
0x695: Pop(1)
0x696: Push((int) 0)
0x697: Stack[-7] = Stack[-2] != Stack[-1]; Pop(1);
0x698: Return(); Pop(4)

0x699: PushEmpty(object, object)
0x69a: Push((int) 511)
0x69b: Push((int) 2)
0x69c: Push((int) 529710)
0x69d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x69e: Pop(3)
0x69f: PushEmpty(bool, object, int)
0x6a0: Stack[-2] = Stack[-4]
0x6a1: Stack[-1] = (int) 507
0x6a2: Call2 0x6b3

0x6a3: Pop(3)
0x6a4: Return(); Pop(2)

0x6a5: Stack[-1] = 0
0x6a6: PushEmpty(object, object)
0x6a7: @ GetDiaryRoot(Stack[-1])
0x6a8: Pop(0)
0x6a9: Pop(0); Push((bool) Stack[-1] == 0)
0x6aa: IF (Stack[-1] == 0) GOTO 0x6b0; Pop(1)

0x6ab: Push("Can't retrieve diary root")
0x6ac: @ Trace(Stack[-1])
0x6ad: Pop(1)
0x6ae: Stack[-3] = (bool) 0
0x6af: Return(); Pop(2)

0x6b0: Stack[-3] = Stack[-1]
0x6b1: Return(); Pop(2)

0x6b2: Stack[-1] = 0
0x6b3: PushEmpty(object, object, int, object, object, int)
0x6b4: PushEmpty(object)
0x6b5: Call2 0x6a6

0x6b6: Stack[-4] = Stack[-1]
0x6b7: Pop(1)
0x6b8: @@ Find(Stack[-7], Stack[-2])
0x6b9: Pop(0)
0x6ba: Pop(0); Push((bool) Stack[-2] == 0)
0x6bb: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6bc: Push("Can't find diary parent with id: ")
0x6bd: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6be: @ Trace(Stack[-1])
0x6bf: Pop(1)
0x6c0: Stack[-9] = (bool) 0
0x6c1: Return(); Pop(6)

0x6c2: @@ AddChild(Stack[-8])
0x6c3: Pop(0)
0x6c4: Push((int) 7)
0x6c5: @ SendWorldWndMessage(Stack[-1])
0x6c6: Pop(1)
0x6c7: @@ GetCategory(Stack[-1])
0x6c8: Pop(0)
0x6c9: @ SetDiarySection(Stack[-1])
0x6ca: Pop(0)
0x6cb: Stack[-9] = (bool) 0
0x6cc: Return(); Pop(6)

0x6cd: Stack[-2] = 0
0x6ce: Stack[-3] = 0
0x6cf: PushEmpty(object, object, object, object)
0x6d0: @ GetMainOutdoorScene(Stack[-2])
0x6d1: Pop(0)
0x6d2: Pop(0); Push((bool) Stack[-2] == 0)
0x6d3: IF (Stack[-1] == 0) GOTO 0x6da; Pop(1)

0x6d4: Push("Can't find main outdoor scene")
0x6d5: @ Trace(Stack[-1])
0x6d6: Pop(1)
0x6d7: Stack[-1] = 0
0x6d8: Stack[-5] = Stack[-1]
0x6d9: Return(); Pop(4)

0x6da: @@ GetMap(Stack[-1])
0x6db: Pop(0)
0x6dc: Stack[-5] = Stack[-1]
0x6dd: Return(); Pop(4)

0x6de: Stack[-1] = 0
0x6df: Stack[-2] = 0
0x6e0: PushEmpty(bool, int, bool, int)
0x6e1: Push((int) 0)
0x6e2: @ ClearSubContainer(Stack[-1])
0x6e3: Pop(1)
0x6e4: Push((int) 15)
0x6e5: @ irand(Stack[-2], Stack[-1])
0x6e6: Pop(1)
0x6e7: Push((int) 5)
0x6e8: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x6e9: PushEmpty(int, string)
0x6ea: Stack[-1] = "grass_black_tvir"
0x6eb: Call2 0x709

0x6ec: Pop(1)
0x6ed: Push((int) 0)
0x6ee: @ AddItem(Stack[-4], Stack[-2], Stack[-1], Stack[-3])
0x6ef: Pop(2)
0x6f0: Push((int) 15)
0x6f1: @ irand(Stack[-2], Stack[-1])
0x6f2: Pop(1)
0x6f3: Push((int) 5)
0x6f4: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x6f5: PushEmpty(int, string)
0x6f6: Stack[-1] = "grass_blood_tvir"
0x6f7: Call2 0x709

0x6f8: Pop(1)
0x6f9: Push((int) 0)
0x6fa: @ AddItem(Stack[-4], Stack[-2], Stack[-1], Stack[-3])
0x6fb: Pop(2)
0x6fc: Push((int) 15)
0x6fd: @ irand(Stack[-2], Stack[-1])
0x6fe: Pop(1)
0x6ff: Push((int) 5)
0x700: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x701: PushEmpty(int, string)
0x702: Stack[-1] = "grass_brown_tvir"
0x703: Call2 0x709

0x704: Pop(1)
0x705: Push((int) 0)
0x706: @ AddItem(Stack[-4], Stack[-2], Stack[-1], Stack[-3])
0x707: Pop(2)
0x708: Return(); Pop(4)

0x709: PushEmpty(int, int)
0x70a: @ GetInvItemByName(Stack[-1], Stack[-3])
0x70b: Pop(0)
0x70c: Stack[-4] = Stack[-1]
0x70d: Return(); Pop(2)

0x70e: PushEmpty(int, int)
0x70f: Push("branch")
0x710: @ GetVariable(Stack[-1], Stack[-2])
0x711: Pop(1)
0x712: Push((int) 0)
0x713: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x714: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x715: Stack[-3] = (int) 1
0x716: Return(); Pop(2)

0x717: GOTO 0x71d

0x718: Push((int) 1)
0x719: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x71a: IF (Stack[-1] == 0) GOTO 0x71d; Pop(1)

0x71b: Stack[-3] = (int) 2
0x71c: Return(); Pop(2)

0x71d: Stack[-3] = (int) 3
0x71e: Return(); Pop(2)

0x71f: PushEmpty(int, int)
0x720: Push("branch")
0x721: @ GetVariable(Stack[-1], Stack[-2])
0x722: Pop(1)
0x723: Stack[-3] = Stack[-1]
0x724: Return(); Pop(2)

0x725: Stack[-1] = (int) 521048
0x726: Return(); Pop(0)

0x727: Stack[-1] = (int) 521047
0x728: Return(); Pop(0)

0x729: Stack[-1] = "ui/NPC_Morlok.png"
0x72a: Return(); Pop(0)

0x72b: Stack[-1] = "ui/NPC_Morlok_b.png"
0x72c: Return(); Pop(0)

0x72d: Stack[-1] = (bool) 0
0x72e: Return(); Pop(0)

