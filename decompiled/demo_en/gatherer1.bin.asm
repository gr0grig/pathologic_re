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
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png

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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
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
		EVENT_11 Op = 0xd5 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2b7 Vars = (int, int)
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
0x5: Call2 0x729

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0x5a4

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
0x1c: Call2 0x729

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
0x36: Call2 0x723

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0x721

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1])
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0x725

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1])
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0x727

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0x70a

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
0x69: Call2 0x560

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
0x77: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral"
0x7a: Call2 0xbf

0x7b: Pop(1)
0x7c: Push((int) 525385)
0x7d: @@ SetMessage(Stack[-1])
0x7e: Pop(1)
0x7f: @@ ClearReplies()
0x80: Pop(0)
0x81: PushEmpty(bool)
0x82: Stack[-1] = (bool) 0
0x83: PushEmpty(bool, object)
0x84: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85: Call2 0x650

0x86: Pop(1)
0x87: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x88: PushEmpty(bool, object)
0x89: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a: Call2 0x65c

0x8b: Pop(1)
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Stack[-1] = (bool) 1
0x8e: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8f: Push((int) 525387)
0x90: Push((int) 40946)
0x91: Push((int) 26755)
0x92: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93: Pop(3)
0x94: Push((int) 539023)
0x95: Push((int) -1)
0x96: Push((int) 40966)
0x97: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98: Pop(3)
0x99: Push((int) 539024)
0x9a: Push((int) -1)
0x9b: Push((int) 40967)
0x9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d: Pop(3)
0x9e: GOTO 0xa1

0x9f: Return(); Pop(0)

0xa0: GOTO 0x76

0xa1: PushEmpty(bool)
0xa2: Call2 0x729

0xa3: Pop(0)
0xa4: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xa5: @ lshWaitForAnimEnd()
0xa6: Pop(0)
0xa7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: GOTO 0xaf

0xaa: PushEmpty(string)
0xab: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xac: Call2 0x5a4

0xad: Pop(1)
0xae: GOTO 0xa5

0xaf: GOTO 0xbe

0xb0: Push("all")
0xb1: Push("idle")
0xb2: @ PlayAnimation(Stack[-2], Stack[-1])
0xb3: Pop(2)
0xb4: @ WaitForAnimEnd()
0xb5: Pop(0)
0xb6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: GOTO 0xbe

0xb9: Push("all")
0xba: Push("idle")
0xbb: @ PlayAnimation(Stack[-2], Stack[-1])
0xbc: Pop(2)
0xbd: GOTO 0xb4

0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: PushEmpty(bool)
0xc1: Call2 0x729

0xc2: Pop(0)
0xc3: Pop(1); Push((bool) Stack[-1] == 0)
0xc4: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc5: Return(); Pop(0)

0xc6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc7: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc8: Return(); Pop(0)

0xc9: PushEmpty(string, bool)
0xca: Stack[-2] = Stack[-3]
0xcb: Push("")
0xcc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xce: Stack[-1] = (bool) 0
0xcf: GOTO 0xd1

0xd0: Stack[-1] = (bool) 1
0xd1: Call2 0x5b4

0xd2: Pop(2)
0xd3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd4: Return(); Pop(0)

0xd5: PushEmpty()
0xd6: Push((int) 1)
0xd7: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0xd8: PushEmpty()
0xd9: Call2 0x5ce

0xda: Pop(0)
0xdb: Push((int) 26755)
0xdc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xde: PushEmpty(object, object)
0xdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe1: Call2 0x626

0xe2: Pop(2)
0xe3: Push((int) 40957)
0xe4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe6: PushEmpty(object, object)
0xe7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe9: Call2 0x62c

0xea: Pop(2)
0xeb: Push((int) 40958)
0xec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xee: PushEmpty(object, object)
0xef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf1: Call2 0x62c

0xf2: Pop(2)
0xf3: Push((int) 40959)
0xf4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0x62c

0xfa: Pop(2)
0xfb: Push((int) 26757)
0xfc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xfe: PushEmpty(object, object)
0xff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x100: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101: Call2 0x62c

0x102: Pop(2)
0x103: Push((int) 26753)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral"
0x108: Call2 0xbf

0x109: Pop(1)
0x10a: Push((int) 525385)
0x10b: @@ SetMessage(Stack[-1])
0x10c: Pop(1)
0x10d: @@ ClearReplies()
0x10e: Pop(0)
0x10f: PushEmpty(bool)
0x110: Stack[-1] = (bool) 0
0x111: PushEmpty(bool, object)
0x112: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x113: Call2 0x650

0x114: Pop(1)
0x115: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x116: PushEmpty(bool, object)
0x117: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x118: Call2 0x65c

0x119: Pop(1)
0x11a: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11b: Stack[-1] = (bool) 1
0x11c: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x11d: Push((int) 525387)
0x11e: Push((int) 40946)
0x11f: Push((int) 26755)
0x120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: Push((int) 539023)
0x123: Push((int) -1)
0x124: Push((int) 40966)
0x125: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126: Pop(3)
0x127: Push((int) 539024)
0x128: Push((int) -1)
0x129: Push((int) 40967)
0x12a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b: Pop(3)
0x12c: Return(); Pop(0)

0x12d: Push((int) 40946)
0x12e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x130: PushEmpty(string)
0x131: Stack[-1] = "Neutral"
0x132: Call2 0xbf

0x133: Pop(1)
0x134: Push((int) 539004)
0x135: @@ SetMessage(Stack[-1])
0x136: Pop(1)
0x137: @@ ClearReplies()
0x138: Pop(0)
0x139: Push((int) 539005)
0x13a: Push((int) 40948)
0x13b: Push((int) 40947)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: Push((int) 539022)
0x13f: Push((int) 40948)
0x140: Push((int) 40964)
0x141: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142: Pop(3)
0x143: Return(); Pop(0)

0x144: Push((int) 40948)
0x145: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x147: PushEmpty(string)
0x148: Stack[-1] = "Neutral"
0x149: Call2 0xbf

0x14a: Pop(1)
0x14b: Push((int) 539006)
0x14c: @@ SetMessage(Stack[-1])
0x14d: Pop(1)
0x14e: @@ ClearReplies()
0x14f: Pop(0)
0x150: Push((int) 539007)
0x151: Push((int) 40950)
0x152: Push((int) 40949)
0x153: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x154: Pop(3)
0x155: Return(); Pop(0)

0x156: Push((int) 40950)
0x157: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x158: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x159: PushEmpty(string)
0x15a: Stack[-1] = "Neutral"
0x15b: Call2 0xbf

0x15c: Pop(1)
0x15d: Push((int) 539008)
0x15e: @@ SetMessage(Stack[-1])
0x15f: Pop(1)
0x160: @@ ClearReplies()
0x161: Pop(0)
0x162: Push((int) 539009)
0x163: Push((int) 40952)
0x164: Push((int) 40951)
0x165: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x166: Pop(3)
0x167: Push((int) 539021)
0x168: Push((int) -1)
0x169: Push((int) 40963)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: Return(); Pop(0)

0x16d: Push((int) 40952)
0x16e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16f: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x170: PushEmpty(string)
0x171: Stack[-1] = "Neutral"
0x172: Call2 0xbf

0x173: Pop(1)
0x174: Push((int) 539010)
0x175: @@ SetMessage(Stack[-1])
0x176: Pop(1)
0x177: @@ ClearReplies()
0x178: Pop(0)
0x179: Push((int) 539011)
0x17a: Push((int) 40954)
0x17b: Push((int) 40953)
0x17c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17d: Pop(3)
0x17e: Push((int) 539018)
0x17f: Push((int) 40961)
0x180: Push((int) 40960)
0x181: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x182: Pop(3)
0x183: Return(); Pop(0)

0x184: Push((int) 40961)
0x185: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x186: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x187: PushEmpty(string)
0x188: Stack[-1] = "Neutral"
0x189: Call2 0xbf

0x18a: Pop(1)
0x18b: Push((int) 539019)
0x18c: @@ SetMessage(Stack[-1])
0x18d: Pop(1)
0x18e: @@ ClearReplies()
0x18f: Pop(0)
0x190: Push((int) 525389)
0x191: Push((int) -1)
0x192: Push((int) 26757)
0x193: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x194: Pop(3)
0x195: Return(); Pop(0)

0x196: Push((int) 40954)
0x197: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x199: PushEmpty(string)
0x19a: Stack[-1] = "Neutral"
0x19b: Call2 0xbf

0x19c: Pop(1)
0x19d: Push((int) 539012)
0x19e: @@ SetMessage(Stack[-1])
0x19f: Pop(1)
0x1a0: @@ ClearReplies()
0x1a1: Pop(0)
0x1a2: Push((int) 539013)
0x1a3: Push((int) 40956)
0x1a4: Push((int) 40955)
0x1a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a6: Pop(3)
0x1a7: Push((int) 539017)
0x1a8: Push((int) -1)
0x1a9: Push((int) 40959)
0x1aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ab: Pop(3)
0x1ac: Return(); Pop(0)

0x1ad: Push((int) 40956)
0x1ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1b0: PushEmpty(string)
0x1b1: Stack[-1] = "Neutral"
0x1b2: Call2 0xbf

0x1b3: Pop(1)
0x1b4: Push((int) 539014)
0x1b5: @@ SetMessage(Stack[-1])
0x1b6: Pop(1)
0x1b7: @@ ClearReplies()
0x1b8: Pop(0)
0x1b9: Push((int) 539015)
0x1ba: Push((int) -1)
0x1bb: Push((int) 40957)
0x1bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bd: Pop(3)
0x1be: Push((int) 539016)
0x1bf: Push((int) -1)
0x1c0: Push((int) 40958)
0x1c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c2: Pop(3)
0x1c3: Return(); Pop(0)

0x1c4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c5: PushEmpty(bool)
0x1c6: Call2 0x729

0x1c7: Pop(0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c9: @ lshStopAnimation()
0x1ca: Pop(0)
0x1cb: GOTO 0x1ce

0x1cc: @ StopAnimation()
0x1cd: Pop(0)
0x1ce: Return(); Pop(0)

0x1cf: GOTO 0xd6

0x1d0: Return(); Pop(0)

0x1d1: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1d2: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1d3: PushEmpty(bool, object, float)
0x1d4: Stack[-2] = Stack[-12]
0x1d5: Stack[-1] = (float) 110.0
0x1d6: Call2 0x51c

0x1d7: Pop(2)
0x1d8: Pop(1); Push((bool) Stack[-1] == 0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1da: Stack[-10] = (int) -2
0x1db: Return(); Pop(8)

0x1dc: @ CreateDialog(Stack[-4])
0x1dd: Pop(0)
0x1de: PushEmpty(int)
0x1df: Call2 0x723

0x1e0: Pop(0)
0x1e1: @@ SetNPCName(Stack[-1])
0x1e2: Pop(1)
0x1e3: PushEmpty(int)
0x1e4: Call2 0x721

0x1e5: Pop(0)
0x1e6: @@ SetNPCDescription(Stack[-1])
0x1e7: Pop(1)
0x1e8: PushEmpty(string)
0x1e9: Call2 0x725

0x1ea: Pop(0)
0x1eb: @@ SetPhoto(Stack[-1])
0x1ec: Pop(1)
0x1ed: PushEmpty(string)
0x1ee: Call2 0x727

0x1ef: Pop(0)
0x1f0: @@ SetPhoto2(Stack[-1])
0x1f1: Pop(1)
0x1f2: PushEmpty(int)
0x1f3: Call2 0x70a

0x1f4: Pop(0)
0x1f5: @@ SetPlayerName(Stack[-1])
0x1f6: Pop(1)
0x1f7: Stack[-2] = (int) -1
0x1f8: @ IsOverrideActive(Stack[-3])
0x1f9: Pop(0)
0x1fa: Push(Stack[-3])
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fc: Stack[-10] = (int) -2
0x1fd: Return(); Pop(8)

0x1fe: @ DoDialog(Stack[-4])
0x1ff: Pop(0)
0x200: PushEmpty(object, object)
0x201: Stack[-2] = Stack[-11]
0x202: Stack[-1] = Stack[-6]
0x203: Push(-2, 4); TaskCall(4)
0x204: Call2 0x21b

0x205: Pop(-2, 4); TaskReturn
0x206: Pop(2)
0x207: @@ IsDialogEnd(Stack[-1])
0x208: Pop(0)
0x209: Pop(0); Push((bool) Stack[-1] == 0)
0x20a: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20b: @ sync()
0x20c: Pop(0)
0x20d: @@ IsDialogEnd(Stack[-1])
0x20e: Pop(0)
0x20f: GOTO 0x209

0x210: PushEmpty(object)
0x211: Stack[-1] = Stack[-10]
0x212: Call2 0x560

0x213: Pop(1)
0x214: @ StopDialog(Stack[-4])
0x215: Pop(0)
0x216: @@ GetReturnValue(Stack[-2])
0x217: Pop(0)
0x218: Stack[-10] = Stack[-2]
0x219: Return(); Pop(8)

0x21a: Stack[-4] = 0
0x21b: PushEmpty()
0x21c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x21d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x21e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x21f: Push((int) 1)
0x220: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x221: PushEmpty(bool)
0x222: Stack[-1] = (bool) 0
0x223: PushEmpty(bool, object)
0x224: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x225: Call2 0x67f

0x226: Pop(1)
0x227: Pop(1); Push((bool) Stack[-1] == 0)
0x228: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x229: PushEmpty(bool, object)
0x22a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22b: Call2 0x674

0x22c: Pop(1)
0x22d: Pop(1); Push((bool) Stack[-1] == 0)
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: Stack[-1] = (bool) 1
0x230: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x231: PushEmpty(string)
0x232: Stack[-1] = "Neutral"
0x233: Call2 0x2a1

0x234: Pop(1)
0x235: Push((int) 518145)
0x236: @@ SetMessage(Stack[-1])
0x237: Pop(1)
0x238: @@ ClearReplies()
0x239: Pop(0)
0x23a: Push((int) 518146)
0x23b: Push((int) 19260)
0x23c: Push((int) 19259)
0x23d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23e: Pop(3)
0x23f: Push((int) 529952)
0x240: Push((int) -1)
0x241: Push((int) 31336)
0x242: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x243: Pop(3)
0x244: GOTO 0x283

0x245: PushEmpty(bool)
0x246: Stack[-1] = (bool) 0
0x247: PushEmpty(bool, object)
0x248: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x249: Call2 0x674

0x24a: Pop(1)
0x24b: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x24c: PushEmpty(bool, object)
0x24d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24e: Call2 0x67f

0x24f: Pop(1)
0x250: Pop(1); Push((bool) Stack[-1] == 0)
0x251: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x252: Stack[-1] = (bool) 1
0x253: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x254: PushEmpty(string)
0x255: Stack[-1] = "Neutral"
0x256: Call2 0x2a1

0x257: Pop(1)
0x258: Push((int) 518150)
0x259: @@ SetMessage(Stack[-1])
0x25a: Pop(1)
0x25b: @@ ClearReplies()
0x25c: Pop(0)
0x25d: Push((int) 518151)
0x25e: Push((int) 19265)
0x25f: Push((int) 19264)
0x260: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x261: Pop(3)
0x262: GOTO 0x283

0x263: PushEmpty(string)
0x264: Stack[-1] = "Neutral"
0x265: Call2 0x2a1

0x266: Pop(1)
0x267: Push((int) 518155)
0x268: @@ SetMessage(Stack[-1])
0x269: Pop(1)
0x26a: @@ ClearReplies()
0x26b: Pop(0)
0x26c: Push((int) 518156)
0x26d: Push((int) -1)
0x26e: Push((int) 19269)
0x26f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x270: Pop(3)
0x271: PushEmpty(bool, object)
0x272: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x273: Call2 0x668

0x274: Pop(1)
0x275: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x276: Push((int) 518199)
0x277: Push((int) 19313)
0x278: Push((int) 19312)
0x279: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27a: Pop(3)
0x27b: Push((int) 518157)
0x27c: Push((int) -1)
0x27d: Push((int) 19270)
0x27e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27f: Pop(3)
0x280: GOTO 0x283

0x281: Return(); Pop(0)

0x282: GOTO 0x21f

0x283: PushEmpty(bool)
0x284: Call2 0x729

0x285: Pop(0)
0x286: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x287: @ lshWaitForAnimEnd()
0x288: Pop(0)
0x289: Push( Stack[3 + Tasks[-1].StackPointer] )
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: GOTO 0x291

0x28c: PushEmpty(string)
0x28d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x28e: Call2 0x5a4

0x28f: Pop(1)
0x290: GOTO 0x287

0x291: GOTO 0x2a0

0x292: Push("all")
0x293: Push("idle")
0x294: @ PlayAnimation(Stack[-2], Stack[-1])
0x295: Pop(2)
0x296: @ WaitForAnimEnd()
0x297: Pop(0)
0x298: Push( Stack[3 + Tasks[-1].StackPointer] )
0x299: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x29a: GOTO 0x2a0

0x29b: Push("all")
0x29c: Push("idle")
0x29d: @ PlayAnimation(Stack[-2], Stack[-1])
0x29e: Pop(2)
0x29f: GOTO 0x296

0x2a0: Return(); Pop(0)

0x2a1: PushEmpty()
0x2a2: PushEmpty(bool)
0x2a3: Call2 0x729

0x2a4: Pop(0)
0x2a5: Pop(1); Push((bool) Stack[-1] == 0)
0x2a6: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a7: Return(); Pop(0)

0x2a8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: Return(); Pop(0)

0x2ab: PushEmpty(string, bool)
0x2ac: Stack[-2] = Stack[-3]
0x2ad: Push("")
0x2ae: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2af: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b0: Stack[-1] = (bool) 0
0x2b1: GOTO 0x2b3

0x2b2: Stack[-1] = (bool) 1
0x2b3: Call2 0x5b4

0x2b4: Pop(2)
0x2b5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2b6: Return(); Pop(0)

0x2b7: PushEmpty()
0x2b8: Push((int) 1)
0x2b9: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x2ba: PushEmpty()
0x2bb: Call2 0x5ce

0x2bc: Pop(0)
0x2bd: Push((int) 19266)
0x2be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c0: PushEmpty(object, object)
0x2c1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c3: Call2 0x617

0x2c4: Pop(2)
0x2c5: PushEmpty(object, object)
0x2c6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c8: Call2 0x645

0x2c9: Pop(2)
0x2ca: Push((int) 19269)
0x2cb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2cc: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2cd: PushEmpty(object, object)
0x2ce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d0: Call2 0x64b

0x2d1: Pop(2)
0x2d2: Push((int) 19312)
0x2d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d5: PushEmpty(object, object)
0x2d6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d8: Call2 0x63f

0x2d9: Pop(2)
0x2da: Push((int) 19258)
0x2db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x2dd: PushEmpty(bool)
0x2de: Stack[-1] = (bool) 0
0x2df: PushEmpty(bool, object)
0x2e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e1: Call2 0x67f

0x2e2: Pop(1)
0x2e3: Pop(1); Push((bool) Stack[-1] == 0)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e5: PushEmpty(bool, object)
0x2e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e7: Call2 0x674

0x2e8: Pop(1)
0x2e9: Pop(1); Push((bool) Stack[-1] == 0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2eb: Stack[-1] = (bool) 1
0x2ec: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2ed: PushEmpty(string)
0x2ee: Stack[-1] = "Neutral"
0x2ef: Call2 0x2a1

0x2f0: Pop(1)
0x2f1: Push((int) 518145)
0x2f2: @@ SetMessage(Stack[-1])
0x2f3: Pop(1)
0x2f4: @@ ClearReplies()
0x2f5: Pop(0)
0x2f6: Push((int) 518146)
0x2f7: Push((int) 19260)
0x2f8: Push((int) 19259)
0x2f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fa: Pop(3)
0x2fb: Push((int) 529952)
0x2fc: Push((int) -1)
0x2fd: Push((int) 31336)
0x2fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ff: Pop(3)
0x300: Return(); Pop(0)

0x301: PushEmpty(bool)
0x302: Stack[-1] = (bool) 0
0x303: PushEmpty(bool, object)
0x304: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x305: Call2 0x674

0x306: Pop(1)
0x307: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x308: PushEmpty(bool, object)
0x309: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30a: Call2 0x67f

0x30b: Pop(1)
0x30c: Pop(1); Push((bool) Stack[-1] == 0)
0x30d: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30e: Stack[-1] = (bool) 1
0x30f: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x310: PushEmpty(string)
0x311: Stack[-1] = "Neutral"
0x312: Call2 0x2a1

0x313: Pop(1)
0x314: Push((int) 518150)
0x315: @@ SetMessage(Stack[-1])
0x316: Pop(1)
0x317: @@ ClearReplies()
0x318: Pop(0)
0x319: Push((int) 518151)
0x31a: Push((int) 19265)
0x31b: Push((int) 19264)
0x31c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31d: Pop(3)
0x31e: Return(); Pop(0)

0x31f: PushEmpty(string)
0x320: Stack[-1] = "Neutral"
0x321: Call2 0x2a1

0x322: Pop(1)
0x323: Push((int) 518155)
0x324: @@ SetMessage(Stack[-1])
0x325: Pop(1)
0x326: @@ ClearReplies()
0x327: Pop(0)
0x328: Push((int) 518156)
0x329: Push((int) -1)
0x32a: Push((int) 19269)
0x32b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32c: Pop(3)
0x32d: PushEmpty(bool, object)
0x32e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32f: Call2 0x668

0x330: Pop(1)
0x331: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x332: Push((int) 518199)
0x333: Push((int) 19313)
0x334: Push((int) 19312)
0x335: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x336: Pop(3)
0x337: Push((int) 518157)
0x338: Push((int) -1)
0x339: Push((int) 19270)
0x33a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33b: Pop(3)
0x33c: Return(); Pop(0)

0x33d: Push((int) 19313)
0x33e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33f: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x340: PushEmpty(string)
0x341: Stack[-1] = "Neutral"
0x342: Call2 0x2a1

0x343: Pop(1)
0x344: Push((int) 518200)
0x345: @@ SetMessage(Stack[-1])
0x346: Pop(1)
0x347: @@ ClearReplies()
0x348: Pop(0)
0x349: Push((int) 534598)
0x34a: Push((int) 36237)
0x34b: Push((int) 36236)
0x34c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34d: Pop(3)
0x34e: Push((int) 518201)
0x34f: Push((int) -1)
0x350: Push((int) 19314)
0x351: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x352: Pop(3)
0x353: Return(); Pop(0)

0x354: Push((int) 36237)
0x355: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x357: PushEmpty(string)
0x358: Stack[-1] = "Neutral"
0x359: Call2 0x2a1

0x35a: Pop(1)
0x35b: Push((int) 534599)
0x35c: @@ SetMessage(Stack[-1])
0x35d: Pop(1)
0x35e: @@ ClearReplies()
0x35f: Pop(0)
0x360: Push((int) 534600)
0x361: Push((int) -1)
0x362: Push((int) 36238)
0x363: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x364: Pop(3)
0x365: Push((int) 534601)
0x366: Push((int) 36240)
0x367: Push((int) 36239)
0x368: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x369: Pop(3)
0x36a: Return(); Pop(0)

0x36b: Push((int) 36240)
0x36c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36d: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x36e: PushEmpty(string)
0x36f: Stack[-1] = "Neutral"
0x370: Call2 0x2a1

0x371: Pop(1)
0x372: Push((int) 534602)
0x373: @@ SetMessage(Stack[-1])
0x374: Pop(1)
0x375: @@ ClearReplies()
0x376: Pop(0)
0x377: Push((int) 534603)
0x378: Push((int) -1)
0x379: Push((int) 36241)
0x37a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37b: Pop(3)
0x37c: Push((int) 534604)
0x37d: Push((int) -1)
0x37e: Push((int) 36242)
0x37f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x380: Pop(3)
0x381: Return(); Pop(0)

0x382: Push((int) 19265)
0x383: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x385: PushEmpty(string)
0x386: Stack[-1] = "Neutral"
0x387: Call2 0x2a1

0x388: Pop(1)
0x389: Push((int) 518152)
0x38a: @@ SetMessage(Stack[-1])
0x38b: Pop(1)
0x38c: @@ ClearReplies()
0x38d: Pop(0)
0x38e: Push((int) 518153)
0x38f: Push((int) -1)
0x390: Push((int) 19266)
0x391: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x392: Pop(3)
0x393: Push((int) 518154)
0x394: Push((int) -1)
0x395: Push((int) 19267)
0x396: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x397: Pop(3)
0x398: Return(); Pop(0)

0x399: Push((int) 19260)
0x39a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x39c: PushEmpty(string)
0x39d: Stack[-1] = "Neutral"
0x39e: Call2 0x2a1

0x39f: Pop(1)
0x3a0: Push((int) 518147)
0x3a1: @@ SetMessage(Stack[-1])
0x3a2: Pop(1)
0x3a3: @@ ClearReplies()
0x3a4: Pop(0)
0x3a5: Push((int) 529953)
0x3a6: Push((int) 31339)
0x3a7: Push((int) 31337)
0x3a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a9: Pop(3)
0x3aa: Push((int) 529954)
0x3ab: Push((int) -1)
0x3ac: Push((int) 31338)
0x3ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ae: Pop(3)
0x3af: Return(); Pop(0)

0x3b0: Push((int) 31339)
0x3b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3b3: PushEmpty(string)
0x3b4: Stack[-1] = "Neutral"
0x3b5: Call2 0x2a1

0x3b6: Pop(1)
0x3b7: Push((int) 529955)
0x3b8: @@ SetMessage(Stack[-1])
0x3b9: Pop(1)
0x3ba: @@ ClearReplies()
0x3bb: Pop(0)
0x3bc: Push((int) 518148)
0x3bd: Push((int) -1)
0x3be: Push((int) 19261)
0x3bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c0: Pop(3)
0x3c1: Push((int) 518162)
0x3c2: Push((int) -1)
0x3c3: Push((int) 19275)
0x3c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c5: Pop(3)
0x3c6: Return(); Pop(0)

0x3c7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3c8: PushEmpty(bool)
0x3c9: Call2 0x729

0x3ca: Pop(0)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3cc: @ lshStopAnimation()
0x3cd: Pop(0)
0x3ce: GOTO 0x3d1

0x3cf: @ StopAnimation()
0x3d0: Pop(0)
0x3d1: Return(); Pop(0)

0x3d2: GOTO 0x2b8

0x3d3: Return(); Pop(0)

0x3d4: PushEmpty(int)
0x3d5: Call2 0x5f6

0x3d6: Stack[7 + Tasks[-1].StackPointer] = Stack[-1]
0x3d7: Pop(1)
0x3d8: PushEmpty()
0x3d9: Call2 0x6dc

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
0x3e6: Call2 0x71b

0x3e7: Pop(0)
0x3e8: Push((int) 1)
0x3e9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3eb: PushEmpty(int, object)
0x3ec: Stack[-1] = Stack[-5]
0x3ed: Push(-2, 1); TaskCall(3)
0x3ee: Call2 0x1d1

0x3ef: Pop(-2, 1); TaskReturn
0x3f0: Stack[-3] = Stack[-2]
0x3f1: Pop(2)
0x3f2: GOTO 0x402

0x3f3: PushEmpty(int)
0x3f4: Call2 0x71b

0x3f5: Pop(0)
0x3f6: Push((int) 2)
0x3f7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3f8: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3f9: PushEmpty(int, object)
0x3fa: Stack[-1] = Stack[-5]
0x3fb: Push(-2, 1); TaskCall(1)
0x3fc: Call2 0x28

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
0x408: Call2 0x571

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
0x415: Call2 0x5a0

0x416: Pop(1)
0x417: Return(); Pop(2)

0x418: PushEmpty(int)
0x419: Call2 0x5f6

0x41a: Pop(0)
0x41b: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] != Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x41d: PushEmpty()
0x41e: Call2 0x6dc

0x41f: Pop(0)
0x420: PushEmpty(int)
0x421: Call2 0x5f6

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
0x446: Call2 0x5d5

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
0x463: Call2 0x5d5

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
0x4a0: Call2 0x5c3

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
0x4c3: Call2 0x606

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
0x4df: Call2 0x5ff

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
0x537: Call2 0x5db

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
0x547: @ CameraTransit(Stack[-3], Stack[-5])
0x548: Pop(0)
0x549: Push(CvectorIndex(Stack[-4], 0))
0x54a: Push(CvectorIndex(Stack[-5], 2))
0x54b: @ Rotate(Stack[-2], Stack[-1])
0x54c: Pop(2)
0x54d: PushEmpty(bool)
0x54e: Call2 0x729

0x54f: Pop(0)
0x550: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x551: GOTO 0x55a

0x552: Push("head")
0x553: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x554: Pop(1)
0x555: Push(Stack[-1])
0x556: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x557: Push("head")
0x558: @ LookAsyncCamera(Stack[-1])
0x559: Pop(1)
0x55a: @ CameraWaitForPlayFinish()
0x55b: Pop(0)
0x55c: @ ResumeWorld()
0x55d: Pop(0)
0x55e: Stack[-21] = (bool) 1
0x55f: Return(); Pop(18)

0x560: PushEmpty(bool, bool)
0x561: @ CameraSwitchToNormal()
0x562: Pop(0)
0x563: PushEmpty(bool)
0x564: Call2 0x729

0x565: Pop(0)
0x566: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x567: GOTO 0x570

0x568: Push("head")
0x569: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x56a: Pop(1)
0x56b: Push(Stack[-1])
0x56c: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x56d: Push("head")
0x56e: @ UnlookAsync(Stack[-1])
0x56f: Pop(1)
0x570: Return(); Pop(2)

0x571: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x572: @@ GetPosition(Stack[-7])
0x573: Pop(0)
0x574: @@ GetEyesHeight(Stack[-8])
0x575: Pop(0)
0x576: Push(CvectorIndex(Stack[-7], 1))
0x577: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x578: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x579: @ GetPosition(Stack[-6])
0x57a: Pop(0)
0x57b: @ GetEyesHeight(Stack[-8])
0x57c: Pop(0)
0x57d: Push(CvectorIndex(Stack[-6], 1))
0x57e: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x57f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x580: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x581: Push(CvectorIndex(Stack[-5], 1))
0x582: Stack[-1] = (int) 0
0x583: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x584: Pop(0); Push(Stack[-5] | Stack[-5]);
0x585: Pop(1); Push(Sqrt(Stack[-1]))
0x586: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x587: Stack[-4] = -Stack[-5]; Pop(0);
0x588: Pop(0); Push(Stack[-5] * Stack[-17]);
0x589: Push(CVector(0.0, 10.0, 0.0))
0x58a: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x58b: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x58c: @ IsOverrideActive(Stack[-1])
0x58d: Pop(0)
0x58e: Push(Stack[-1])
0x58f: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x590: Stack[-19] = (bool) 0
0x591: Return(); Pop(16)

0x592: @ StopWorld()
0x593: Pop(0)
0x594: @ CameraTransit(Stack[-2], Stack[-4])
0x595: Pop(0)
0x596: Push(CvectorIndex(Stack[-3], 0))
0x597: Push(CvectorIndex(Stack[-4], 2))
0x598: @ Rotate(Stack[-2], Stack[-1])
0x599: Pop(2)
0x59a: @ CameraWaitForPlayFinish()
0x59b: Pop(0)
0x59c: @ ResumeWorld()
0x59d: Pop(0)
0x59e: Stack[-19] = (bool) 1
0x59f: Return(); Pop(16)

0x5a0: PushEmpty()
0x5a1: @ CameraSwitchToNormal()
0x5a2: Pop(0)
0x5a3: Return(); Pop(0)

0x5a4: PushEmpty(bool, float, float, bool, float, float)
0x5a5: @ lshHasAnimation(Stack[-3], Stack[-7])
0x5a6: Pop(0)
0x5a7: Push(Stack[-3])
0x5a8: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5a9: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x5aa: Pop(0)
0x5ab: Push((bool) 0)
0x5ac: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5ad: Pop(1)
0x5ae: GOTO 0x5b3

0x5af: Push("Can't find lsh animation : ")
0x5b0: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5b1: @ Trace(Stack[-1])
0x5b2: Pop(1)
0x5b3: Return(); Pop(6)

0x5b4: PushEmpty(bool, float, float, bool, float, float)
0x5b5: @ lshHasAnimation(Stack[-3], Stack[-8])
0x5b6: Pop(0)
0x5b7: Push(Stack[-3])
0x5b8: IF (Stack[-1] == 0) GOTO 0x5be; Pop(1)

0x5b9: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x5ba: Pop(0)
0x5bb: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x5bc: Pop(0)
0x5bd: GOTO 0x5c2

0x5be: Push("Can't find lsh animation : ")
0x5bf: Pop(1); Push(Stack[-1] + Stack[-9]);
0x5c0: @ Trace(Stack[-1])
0x5c1: Pop(1)
0x5c2: Return(); Pop(6)

0x5c3: PushEmpty(float, cvector, float, cvector)
0x5c4: @@ GetEyesHeight(Stack[-2])
0x5c5: Pop(0)
0x5c6: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5c7: Push(CvectorIndex(Stack[-1], 1))
0x5c8: Stack[-1] = Stack[-3]
0x5c9: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5ca: Push("head")
0x5cb: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x5cc: Pop(1)
0x5cd: Return(); Pop(4)

0x5ce: PushEmpty(bool)
0x5cf: Call2 0x729

0x5d0: Pop(0)
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x5d2: @ lshStopSpeech()
0x5d3: Pop(0)
0x5d4: Return(); Pop(0)

0x5d5: PushEmpty(object, object)
0x5d6: @ self(Stack[-1])
0x5d7: Pop(0)
0x5d8: Stack[-3] = Stack[-1]
0x5d9: Return(); Pop(2)

0x5da: Stack[-1] = 0
0x5db: PushEmpty(float, float)
0x5dc: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5dd: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5de: Push((float)0.0)
0x5df: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5e1: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5e2: Return(); Pop(2)

0x5e3: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5e4: Return(); Pop(2)

0x5e5: PushEmpty(int, int)
0x5e6: @ GetVariable(Stack[-3], Stack[-1])
0x5e7: Pop(0)
0x5e8: Stack[-4] = Stack[-1]
0x5e9: Return(); Pop(2)

0x5ea: PushEmpty(int, bool, int, bool)
0x5eb: @ GetInvItemByName(Stack[-2], Stack[-5])
0x5ec: Pop(0)
0x5ed: @@ HasItem(Stack[-2], Stack[-1])
0x5ee: Pop(0)
0x5ef: Stack[-7] = Stack[-1]
0x5f0: Return(); Pop(4)

0x5f1: PushEmpty(float, float)
0x5f2: @ GetGameTime(Stack[-1])
0x5f3: Pop(0)
0x5f4: Stack[-3] = Stack[-1]
0x5f5: Return(); Pop(2)

0x5f6: PushEmpty(float, float)
0x5f7: @ GetGameTime(Stack[-1])
0x5f8: Pop(0)
0x5f9: Push((int) 1)
0x5fa: PushEmpty(int)
0x5fb: Push((int) 24)
0x5fc: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x5fd: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5fe: Return(); Pop(2)

0x5ff: PushEmpty(string, string)
0x600: Stack[-1] = "idle"
0x601: Push(Stack[-3])
0x602: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x603: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x604: Stack[-4] = Stack[-1]
0x605: Return(); Pop(2)

0x606: PushEmpty(int, bool, int, bool)
0x607: Stack[-2] = (int) 0
0x608: Push("all")
0x609: PushEmpty(string, int)
0x60a: Stack[-1] = Stack[-5]
0x60b: Call2 0x5ff

0x60c: Pop(1)
0x60d: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x60e: Pop(2)
0x60f: Pop(0); Push((bool) Stack[-1] == 0)
0x610: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x611: GOTO 0x615

0x612: Push((int) 1)
0x613: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x614: GOTO 0x608

0x615: Stack[-5] = Stack[-2]
0x616: Return(); Pop(4)

0x617: PushEmpty(int, int, int, int)
0x618: PushEmpty(int)
0x619: Call2 0x5f6

0x61a: Stack[-3] = Stack[-1]
0x61b: Pop(1)
0x61c: Push("Gatherer1_")
0x61d: Pop(1); Push(Stack[-1] + Stack[-3]);
0x61e: Push((int) 1)
0x61f: @ SetVariable(Stack[-2], Stack[-1])
0x620: Pop(2)
0x621: Push("blood")
0x622: Push((int) 1)
0x623: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x624: Pop(2)
0x625: Return(); Pop(4)

0x626: PushEmpty()
0x627: Push("ookGatherer1")
0x628: Push((int) 1)
0x629: @ SetVariable(Stack[-2], Stack[-1])
0x62a: Pop(2)
0x62b: Return(); Pop(0)

0x62c: PushEmpty(object, object)
0x62d: PushEmpty(object)
0x62e: Call2 0x6cb

0x62f: Stack[-2] = Stack[-1]
0x630: Pop(1)
0x631: Push("k2q04MorlokGotoAndrei")
0x632: Push("pt_map_andrei")
0x633: Push((int) 0)
0x634: Push((int) 539378)
0x635: PushEmpty(float)
0x636: Call2 0x5f1

0x637: Pop(0)
0x638: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x639: Pop(5)
0x63a: PushEmpty()
0x63b: Call2 0x695

0x63c: Pop(0)
0x63d: Return(); Pop(2)

0x63e: Stack[-1] = 0
0x63f: PushEmpty()
0x640: Push("oobSysGatherer1_1")
0x641: Push((int) 1)
0x642: @ SetVariable(Stack[-2], Stack[-1])
0x643: Pop(2)
0x644: Return(); Pop(0)

0x645: PushEmpty()
0x646: Push("playsound")
0x647: Push("giveitem")
0x648: @ TriggerWorld(Stack[-2], Stack[-1])
0x649: Pop(2)
0x64a: Return(); Pop(0)

0x64b: PushEmpty()
0x64c: Push((int) 1000)
0x64d: @@ SetReturnValue(Stack[-1])
0x64e: Pop(1)
0x64f: Return(); Pop(0)

0x650: PushEmpty()
0x651: PushEmpty(int, string)
0x652: Stack[-1] = "k2q04"
0x653: Call2 0x5e5

0x654: Pop(1)
0x655: Push((int) 2)
0x656: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x657: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x658: Stack[-2] = (bool) 1
0x659: Return(); Pop(0)

0x65a: Stack[-2] = (bool) 0
0x65b: Return(); Pop(0)

0x65c: PushEmpty()
0x65d: PushEmpty(int, string)
0x65e: Stack[-1] = "ookGatherer1"
0x65f: Call2 0x5e5

0x660: Pop(1)
0x661: Push((int) 0)
0x662: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x663: IF (Stack[-1] == 0) GOTO 0x666; Pop(1)

0x664: Stack[-2] = (bool) 1
0x665: Return(); Pop(0)

0x666: Stack[-2] = (bool) 0
0x667: Return(); Pop(0)

0x668: PushEmpty()
0x669: PushEmpty(int, string)
0x66a: Stack[-1] = "oobSysGatherer1_1"
0x66b: Call2 0x5e5

0x66c: Pop(1)
0x66d: Push((int) 0)
0x66e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x66f: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x670: Stack[-2] = (bool) 1
0x671: Return(); Pop(0)

0x672: Stack[-2] = (bool) 0
0x673: Return(); Pop(0)

0x674: PushEmpty()
0x675: PushEmpty(bool, object, string)
0x676: Stack[-2] = Stack[-4]
0x677: Stack[-1] = "blood"
0x678: Call2 0x5ea

0x679: Pop(2)
0x67a: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x67b: Stack[-2] = (bool) 1
0x67c: Return(); Pop(0)

0x67d: Stack[-2] = (bool) 0
0x67e: Return(); Pop(0)

0x67f: PushEmpty()
0x680: PushEmpty(bool, object)
0x681: Stack[-1] = Stack[-3]
0x682: Call2 0x689

0x683: Pop(1)
0x684: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x685: Stack[-2] = (bool) 1
0x686: Return(); Pop(0)

0x687: Stack[-2] = (bool) 0
0x688: Return(); Pop(0)

0x689: PushEmpty(int, int, int, int)
0x68a: PushEmpty(int)
0x68b: Call2 0x5f6

0x68c: Stack[-3] = Stack[-1]
0x68d: Pop(1)
0x68e: Push("Gatherer1_")
0x68f: Pop(1); Push(Stack[-1] + Stack[-3]);
0x690: @ GetVariable(Stack[-1], Stack[-2])
0x691: Pop(1)
0x692: Push((int) 0)
0x693: Stack[-7] = Stack[-2] != Stack[-1]; Pop(1);
0x694: Return(); Pop(4)

0x695: PushEmpty(object, object)
0x696: Push((int) 511)
0x697: Push((int) 2)
0x698: Push((int) 529710)
0x699: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x69a: Pop(3)
0x69b: PushEmpty(bool, object, int)
0x69c: Stack[-2] = Stack[-4]
0x69d: Stack[-1] = (int) 507
0x69e: Call2 0x6af

0x69f: Pop(3)
0x6a0: Return(); Pop(2)

0x6a1: Stack[-1] = 0
0x6a2: PushEmpty(object, object)
0x6a3: @ GetDiaryRoot(Stack[-1])
0x6a4: Pop(0)
0x6a5: Pop(0); Push((bool) Stack[-1] == 0)
0x6a6: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x6a7: Push("Can't retrieve diary root")
0x6a8: @ Trace(Stack[-1])
0x6a9: Pop(1)
0x6aa: Stack[-3] = (bool) 0
0x6ab: Return(); Pop(2)

0x6ac: Stack[-3] = Stack[-1]
0x6ad: Return(); Pop(2)

0x6ae: Stack[-1] = 0
0x6af: PushEmpty(object, object, int, object, object, int)
0x6b0: PushEmpty(object)
0x6b1: Call2 0x6a2

0x6b2: Stack[-4] = Stack[-1]
0x6b3: Pop(1)
0x6b4: @@ Find(Stack[-7], Stack[-2])
0x6b5: Pop(0)
0x6b6: Pop(0); Push((bool) Stack[-2] == 0)
0x6b7: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6b8: Push("Can't find diary parent with id: ")
0x6b9: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6ba: @ Trace(Stack[-1])
0x6bb: Pop(1)
0x6bc: Stack[-9] = (bool) 0
0x6bd: Return(); Pop(6)

0x6be: @@ AddChild(Stack[-8])
0x6bf: Pop(0)
0x6c0: Push((int) 7)
0x6c1: @ SendWorldWndMessage(Stack[-1])
0x6c2: Pop(1)
0x6c3: @@ GetCategory(Stack[-1])
0x6c4: Pop(0)
0x6c5: @ SetDiarySection(Stack[-1])
0x6c6: Pop(0)
0x6c7: Stack[-9] = (bool) 0
0x6c8: Return(); Pop(6)

0x6c9: Stack[-2] = 0
0x6ca: Stack[-3] = 0
0x6cb: PushEmpty(object, object, object, object)
0x6cc: @ GetMainOutdoorScene(Stack[-2])
0x6cd: Pop(0)
0x6ce: Pop(0); Push((bool) Stack[-2] == 0)
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d0: Push("Can't find main outdoor scene")
0x6d1: @ Trace(Stack[-1])
0x6d2: Pop(1)
0x6d3: Stack[-1] = 0
0x6d4: Stack[-5] = Stack[-1]
0x6d5: Return(); Pop(4)

0x6d6: @@ GetMap(Stack[-1])
0x6d7: Pop(0)
0x6d8: Stack[-5] = Stack[-1]
0x6d9: Return(); Pop(4)

0x6da: Stack[-1] = 0
0x6db: Stack[-2] = 0
0x6dc: PushEmpty(bool, int, bool, int)
0x6dd: Push((int) 0)
0x6de: @ ClearSubContainer(Stack[-1])
0x6df: Pop(1)
0x6e0: Push((int) 15)
0x6e1: @ irand(Stack[-2], Stack[-1])
0x6e2: Pop(1)
0x6e3: Push((int) 5)
0x6e4: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x6e5: PushEmpty(int, string)
0x6e6: Stack[-1] = "grass_black_tvir"
0x6e7: Call2 0x705

0x6e8: Pop(1)
0x6e9: Push((int) 0)
0x6ea: @ AddItem(Stack[-4], Stack[-2], Stack[-1], Stack[-3])
0x6eb: Pop(2)
0x6ec: Push((int) 15)
0x6ed: @ irand(Stack[-2], Stack[-1])
0x6ee: Pop(1)
0x6ef: Push((int) 5)
0x6f0: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x6f1: PushEmpty(int, string)
0x6f2: Stack[-1] = "grass_blood_tvir"
0x6f3: Call2 0x705

0x6f4: Pop(1)
0x6f5: Push((int) 0)
0x6f6: @ AddItem(Stack[-4], Stack[-2], Stack[-1], Stack[-3])
0x6f7: Pop(2)
0x6f8: Push((int) 15)
0x6f9: @ irand(Stack[-2], Stack[-1])
0x6fa: Pop(1)
0x6fb: Push((int) 5)
0x6fc: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x6fd: PushEmpty(int, string)
0x6fe: Stack[-1] = "grass_brown_tvir"
0x6ff: Call2 0x705

0x700: Pop(1)
0x701: Push((int) 0)
0x702: @ AddItem(Stack[-4], Stack[-2], Stack[-1], Stack[-3])
0x703: Pop(2)
0x704: Return(); Pop(4)

0x705: PushEmpty(int, int)
0x706: @ GetInvItemByName(Stack[-1], Stack[-3])
0x707: Pop(0)
0x708: Stack[-4] = Stack[-1]
0x709: Return(); Pop(2)

0x70a: PushEmpty(int, int)
0x70b: Push("branch")
0x70c: @ GetVariable(Stack[-1], Stack[-2])
0x70d: Pop(1)
0x70e: Push((int) 0)
0x70f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x710: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x711: Stack[-3] = (int) 1
0x712: Return(); Pop(2)

0x713: GOTO 0x719

0x714: Push((int) 1)
0x715: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x716: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x717: Stack[-3] = (int) 2
0x718: Return(); Pop(2)

0x719: Stack[-3] = (int) 3
0x71a: Return(); Pop(2)

0x71b: PushEmpty(int, int)
0x71c: Push("branch")
0x71d: @ GetVariable(Stack[-1], Stack[-2])
0x71e: Pop(1)
0x71f: Stack[-3] = Stack[-1]
0x720: Return(); Pop(2)

0x721: Stack[-1] = (int) 521048
0x722: Return(); Pop(0)

0x723: Stack[-1] = (int) 521047
0x724: Return(); Pop(0)

0x725: Stack[-1] = "ui/NPC_Citizen2.png"
0x726: Return(); Pop(0)

0x727: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x728: Return(); Pop(0)

0x729: Stack[-1] = (bool) 0
0x72a: Return(); Pop(0)

