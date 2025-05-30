GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
	Neutral
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	No
	ui/NPC_Petr.png
	playsound
	giveitem
	KnowTvirin
	ood2Petr1
	ood2Petr2
	ood2Petr3
	d2q02
	d2q02PetrRefusedSelf
	pt_map_petr
	AddMark
	d2q02PetrGotoAndrei
	pt_map_andrei
	d2q02PetrGotoAndreiSelf
	ood1Petr1
	ood1Petr2
	ood1Petr3
	ood1Petr4
	ood1Petr5
	ood1Petr6
	ood1Petr7
	ood1Petr8
	KnowPetr
	KnowMistresses
	KnowNina
	d7q02
	d7q02BirdBalahon
	d7q02AlexandrGotoPetr
	FindMark
	Remove
	d7q02MarkGotoAlexandr
	d7q02MarkGotoCemetery
	quest_d7_02
	completed
	ood7Petr1
	birdmask is given
	bird_mask
	ood11Petr1
	ood11Petr2
	ood3Petr1
	KnowMyth
	d1q01FirstGeorgVisit
	KnowViktor
	KnowAnna
	KnowEva
	KnowGrif
	d11q01
	KnowMaria
	KnowPredictions
	KnowMnogogrannik
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Can't find main outdoor scene
	GetMap
	player
	Adding diary entry

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	lshWaitForAnimEnd (1 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x6
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x1d Vars = ()
		EVENT_0 Op = 0x23 Vars = (object)
		EVENT_10 Op = 0x29 Vars = (object)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbf Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x280 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6d8 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9e5 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb27 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd2e Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x12a0

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0xeb7

0xb: Pop(0)
0xc: Pop(1); Push((bool) Stack[-1] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xe: PushEmpty()
0xf: Push(-0, 0); TaskCall(0)
0x10: Call 0x0

0x11: Pop(-0, 0); TaskReturn
0x12: Pop(0)
0x13: PushEmpty(string)
0x14: Stack[-1] = "Neutral"
0x15: Call 0xef8

0x16: Pop(1)
0x17: @ lshWaitForAnimEnd()
0x18: Pop(0)
0x19: GOTO 0x13

0x1a: @ Hold()
0x1b: Pop(0)
0x1c: Return(); Pop(0)

0x1d: PushEmpty()
0x1e: Push(-0, 0); TaskCall(0)
0x1f: Call 0x0

0x20: Pop(-0, 0); TaskReturn
0x21: Pop(0)
0x22: Return(); Pop(0)

0x23: PushEmpty()
0x24: PushEmpty(object)
0x25: Stack[-1] = Stack[-2]
0x26: Call 0x12a4

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0xeab

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0xebc

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0xf6b

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0xf6d

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x124f

0x49: Pop(0)
0x4a: @@ SetPlayerName(Stack[-1])
0x4b: Pop(1)
0x4c: Stack[-2] = (int) -1
0x4d: @ IsOverrideActive(Stack[-3])
0x4e: Pop(0)
0x4f: Push(Stack[-3])
0x50: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x51: Stack[-10] = (int) -2
0x52: Return(); Pop(8)

0x53: @ DoDialog(Stack[-4])
0x54: Pop(0)
0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[-11]
0x57: Stack[-1] = Stack[-6]
0x58: Push(-2, 4); TaskCall(3)
0x59: Call 0x70

0x5a: Pop(-2, 4); TaskReturn
0x5b: Pop(2)
0x5c: @@ IsDialogEnd(Stack[-1])
0x5d: Pop(0)
0x5e: Pop(0); Push((bool) Stack[-1] == 0)
0x5f: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x60: @ sync()
0x61: Pop(0)
0x62: @@ IsDialogEnd(Stack[-1])
0x63: Pop(0)
0x64: GOTO 0x5e

0x65: PushEmpty(object)
0x66: Stack[-1] = Stack[-10]
0x67: Call 0xef4

0x68: Pop(1)
0x69: @ StopDialog(Stack[-4])
0x6a: Pop(0)
0x6b: @@ GetReturnValue(Stack[-2])
0x6c: Pop(0)
0x6d: Stack[-10] = Stack[-2]
0x6e: Return(); Pop(8)

0x6f: Stack[-4] = 0
0x70: PushEmpty()
0x71: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x72: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x73: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x74: Push((int) 1)
0x75: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x76: PushEmpty(object, object)
0x77: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x78: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x79: Call 0xff6

0x7a: Pop(2)
0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral"
0x7d: Call 0xaf

0x7e: Pop(1)
0x7f: Push((int) 170)
0x80: @@ SetMessage(Stack[-1])
0x81: Pop(1)
0x82: @@ ClearReplies()
0x83: Pop(0)
0x84: Push((int) 171)
0x85: Push((int) 210)
0x86: Push((int) 206)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: Push((int) 172)
0x8a: Push((int) 209)
0x8b: Push((int) 207)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: GOTO 0x91

0x8f: Return(); Pop(0)

0x90: GOTO 0x74

0x91: PushEmpty(bool)
0x92: Call 0xf6f

0x93: Pop(0)
0x94: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x95: @ lshWaitForAnimEnd()
0x96: Pop(0)
0x97: Push( Stack[3 + Tasks[-1].StackPointer] )
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: GOTO 0x9f

0x9a: PushEmpty(string)
0x9b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9c: Call 0xef8

0x9d: Pop(1)
0x9e: GOTO 0x95

0x9f: GOTO 0xae

0xa0: Push("all")
0xa1: Push("idle")
0xa2: @ PlayAnimation(Stack[-2], Stack[-1])
0xa3: Pop(2)
0xa4: @ WaitForAnimEnd()
0xa5: Pop(0)
0xa6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: GOTO 0xae

0xa9: Push("all")
0xaa: Push("idle")
0xab: @ PlayAnimation(Stack[-2], Stack[-1])
0xac: Pop(2)
0xad: GOTO 0xa4

0xae: Return(); Pop(0)

0xaf: PushEmpty()
0xb0: PushEmpty(bool)
0xb1: Call 0xf6f

0xb2: Pop(0)
0xb3: Pop(1); Push((bool) Stack[-1] == 0)
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Return(); Pop(0)

0xb6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: Return(); Pop(0)

0xb9: PushEmpty(string)
0xba: Stack[-1] = Stack[-2]
0xbb: Call 0xef8

0xbc: Pop(1)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0xc2: PushEmpty()
0xc3: Call 0xf0a

0xc4: Pop(0)
0xc5: Push((int) 205)
0xc6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call 0xff6

0xcc: Pop(2)
0xcd: PushEmpty(string)
0xce: Stack[-1] = "Neutral"
0xcf: Call 0xaf

0xd0: Pop(1)
0xd1: Push((int) 170)
0xd2: @@ SetMessage(Stack[-1])
0xd3: Pop(1)
0xd4: @@ ClearReplies()
0xd5: Pop(0)
0xd6: Push((int) 171)
0xd7: Push((int) 210)
0xd8: Push((int) 206)
0xd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda: Pop(3)
0xdb: Push((int) 172)
0xdc: Push((int) 209)
0xdd: Push((int) 207)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: Return(); Pop(0)

0xe1: Push((int) 209)
0xe2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xe4: PushEmpty(string)
0xe5: Stack[-1] = "Neutral"
0xe6: Call 0xaf

0xe7: Pop(1)
0xe8: Push((int) 174)
0xe9: @@ SetMessage(Stack[-1])
0xea: Pop(1)
0xeb: @@ ClearReplies()
0xec: Pop(0)
0xed: Push((int) 178)
0xee: Push((int) 218)
0xef: Push((int) 213)
0xf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: Return(); Pop(0)

0xf3: Push((int) 210)
0xf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Neutral"
0xf8: Call 0xaf

0xf9: Pop(1)
0xfa: Push((int) 175)
0xfb: @@ SetMessage(Stack[-1])
0xfc: Pop(1)
0xfd: @@ ClearReplies()
0xfe: Pop(0)
0xff: Push((int) 176)
0x100: Push((int) 215)
0x101: Push((int) 211)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Push((int) 177)
0x105: Push((int) 214)
0x106: Push((int) 212)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Push((int) 214)
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Neutral"
0x10f: Call 0xaf

0x110: Pop(1)
0x111: Push((int) 179)
0x112: @@ SetMessage(Stack[-1])
0x113: Pop(1)
0x114: @@ ClearReplies()
0x115: Pop(0)
0x116: Push((int) 181)
0x117: Push((int) 218)
0x118: Push((int) 216)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Return(); Pop(0)

0x11c: Push((int) 215)
0x11d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x11f: PushEmpty(string)
0x120: Stack[-1] = "Neutral"
0x121: Call 0xaf

0x122: Pop(1)
0x123: Push((int) 180)
0x124: @@ SetMessage(Stack[-1])
0x125: Pop(1)
0x126: @@ ClearReplies()
0x127: Pop(0)
0x128: Push((int) 182)
0x129: Push((int) 218)
0x12a: Push((int) 217)
0x12b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c: Pop(3)
0x12d: Return(); Pop(0)

0x12e: Push((int) 218)
0x12f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x131: PushEmpty(string)
0x132: Stack[-1] = "Neutral"
0x133: Call 0xaf

0x134: Pop(1)
0x135: Push((int) 183)
0x136: @@ SetMessage(Stack[-1])
0x137: Pop(1)
0x138: @@ ClearReplies()
0x139: Pop(0)
0x13a: Push((int) 184)
0x13b: Push((int) -1)
0x13c: Push((int) 221)
0x13d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e: Pop(3)
0x13f: Push((int) 185)
0x140: Push((int) -1)
0x141: Push((int) 222)
0x142: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x143: Pop(3)
0x144: Return(); Pop(0)

0x145: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x146: PushEmpty(bool)
0x147: Call 0xf6f

0x148: Pop(0)
0x149: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14a: @ lshStopAnimation()
0x14b: Pop(0)
0x14c: GOTO 0x14f

0x14d: @ StopAnimation()
0x14e: Pop(0)
0x14f: Return(); Pop(0)

0x150: GOTO 0xc0

0x151: Return(); Pop(0)

0x152: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x153: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x154: PushEmpty(bool, object)
0x155: Stack[-1] = Stack[-11]
0x156: Call 0xebc

0x157: Pop(1)
0x158: Pop(1); Push((bool) Stack[-1] == 0)
0x159: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x15a: Stack[-10] = (int) -2
0x15b: Return(); Pop(8)

0x15c: @ CreateDialog(Stack[-4])
0x15d: Pop(0)
0x15e: PushEmpty(int)
0x15f: Call 0xf6b

0x160: Pop(0)
0x161: @@ SetNPCName(Stack[-1])
0x162: Pop(1)
0x163: PushEmpty(string)
0x164: Call 0xf6d

0x165: Pop(0)
0x166: @@ SetPhoto(Stack[-1])
0x167: Pop(1)
0x168: PushEmpty(int)
0x169: Call 0x124f

0x16a: Pop(0)
0x16b: @@ SetPlayerName(Stack[-1])
0x16c: Pop(1)
0x16d: Stack[-2] = (int) -1
0x16e: @ IsOverrideActive(Stack[-3])
0x16f: Pop(0)
0x170: Push(Stack[-3])
0x171: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x172: Stack[-10] = (int) -2
0x173: Return(); Pop(8)

0x174: @ DoDialog(Stack[-4])
0x175: Pop(0)
0x176: PushEmpty(object, object)
0x177: Stack[-2] = Stack[-11]
0x178: Stack[-1] = Stack[-6]
0x179: Push(-2, 4); TaskCall(5)
0x17a: Call 0x191

0x17b: Pop(-2, 4); TaskReturn
0x17c: Pop(2)
0x17d: @@ IsDialogEnd(Stack[-1])
0x17e: Pop(0)
0x17f: Pop(0); Push((bool) Stack[-1] == 0)
0x180: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x181: @ sync()
0x182: Pop(0)
0x183: @@ IsDialogEnd(Stack[-1])
0x184: Pop(0)
0x185: GOTO 0x17f

0x186: PushEmpty(object)
0x187: Stack[-1] = Stack[-10]
0x188: Call 0xef4

0x189: Pop(1)
0x18a: @ StopDialog(Stack[-4])
0x18b: Pop(0)
0x18c: @@ GetReturnValue(Stack[-2])
0x18d: Pop(0)
0x18e: Stack[-10] = Stack[-2]
0x18f: Return(); Pop(8)

0x190: Stack[-4] = 0
0x191: PushEmpty()
0x192: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x193: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x194: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x195: Push((int) 1)
0x196: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x197: PushEmpty(string)
0x198: Stack[-1] = "Neutral"
0x199: Call 0x270

0x19a: Pop(1)
0x19b: Push((int) 8318)
0x19c: @@ SetMessage(Stack[-1])
0x19d: Pop(1)
0x19e: @@ ClearReplies()
0x19f: Pop(0)
0x1a0: PushEmpty(bool)
0x1a1: Stack[-1] = (bool) 0
0x1a2: PushEmpty(bool, object)
0x1a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a4: Call 0x10cc

0x1a5: Pop(1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1a7: PushEmpty(bool, object)
0x1a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a9: Call 0x106c

0x1aa: Pop(1)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1ac: Stack[-1] = (bool) 1
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1ae: Push((int) 8319)
0x1af: Push((int) 6356)
0x1b0: Push((int) 9142)
0x1b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b2: Pop(3)
0x1b3: PushEmpty(bool)
0x1b4: Stack[-1] = (bool) 1
0x1b5: PushEmpty(bool)
0x1b6: Stack[-1] = (bool) 0
0x1b7: PushEmpty(bool, object)
0x1b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b9: Call 0x1138

0x1ba: Pop(1)
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1bc: PushEmpty(bool, object)
0x1bd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1be: Call 0x10d8

0x1bf: Pop(1)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1c1: Stack[-1] = (bool) 1
0x1c2: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1c3: PushEmpty(bool)
0x1c4: Stack[-1] = (bool) 0
0x1c5: PushEmpty(bool, object)
0x1c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c7: Call 0x1142

0x1c8: Pop(1)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1ca: PushEmpty(bool, object)
0x1cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cc: Call 0x10d8

0x1cd: Pop(1)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cf: Stack[-1] = (bool) 1
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d1: Stack[-1] = (bool) 0
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d3: Push((int) 8320)
0x1d4: Push((int) 6369)
0x1d5: Push((int) 9143)
0x1d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d7: Pop(3)
0x1d8: PushEmpty(bool)
0x1d9: Stack[-1] = (bool) 0
0x1da: PushEmpty(bool, object)
0x1db: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1dc: Call 0x11dc

0x1dd: Pop(1)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1df: PushEmpty(bool, object)
0x1e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e1: Call 0x10e4

0x1e2: Pop(1)
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e4: Stack[-1] = (bool) 1
0x1e5: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e6: Push((int) 8322)
0x1e7: Push((int) 6376)
0x1e8: Push((int) 9145)
0x1e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ea: Pop(3)
0x1eb: PushEmpty(bool)
0x1ec: Stack[-1] = (bool) 0
0x1ed: PushEmpty(bool, object)
0x1ee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ef: Call 0x117c

0x1f0: Pop(1)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f2: PushEmpty(bool, object)
0x1f3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f4: Call 0x10f0

0x1f5: Pop(1)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f7: Stack[-1] = (bool) 1
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1f9: Push((int) 8324)
0x1fa: Push((int) 9417)
0x1fb: Push((int) 9147)
0x1fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fd: Pop(3)
0x1fe: PushEmpty(bool)
0x1ff: Stack[-1] = (bool) 0
0x200: PushEmpty(bool, object)
0x201: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x202: Call 0x1170

0x203: Pop(1)
0x204: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x205: PushEmpty(bool, object)
0x206: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x207: Call 0x10fc

0x208: Pop(1)
0x209: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x20a: Stack[-1] = (bool) 1
0x20b: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20c: Push((int) 8327)
0x20d: Push((int) 9169)
0x20e: Push((int) 9150)
0x20f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x210: Pop(3)
0x211: PushEmpty(bool)
0x212: Stack[-1] = (bool) 0
0x213: PushEmpty(bool, object)
0x214: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x215: Call 0x11c4

0x216: Pop(1)
0x217: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x218: PushEmpty(bool, object)
0x219: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21a: Call 0x1108

0x21b: Pop(1)
0x21c: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21d: Stack[-1] = (bool) 1
0x21e: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x21f: Push((int) 8329)
0x220: Push((int) 9170)
0x221: Push((int) 9152)
0x222: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x223: Pop(3)
0x224: PushEmpty(bool)
0x225: Stack[-1] = (bool) 0
0x226: PushEmpty(bool, object)
0x227: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x228: Call 0x112c

0x229: Pop(1)
0x22a: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22b: PushEmpty(bool, object)
0x22c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22d: Call 0x1114

0x22e: Pop(1)
0x22f: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x230: Stack[-1] = (bool) 1
0x231: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x232: Push((int) 8334)
0x233: Push((int) 9171)
0x234: Push((int) 9157)
0x235: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x236: Pop(3)
0x237: PushEmpty(bool)
0x238: Stack[-1] = (bool) 0
0x239: PushEmpty(bool, object)
0x23a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23b: Call 0x1188

0x23c: Pop(1)
0x23d: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23e: PushEmpty(bool, object)
0x23f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x240: Call 0x1120

0x241: Pop(1)
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Stack[-1] = (bool) 1
0x244: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x245: Push((int) 8337)
0x246: Push((int) 9172)
0x247: Push((int) 9160)
0x248: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x249: Pop(3)
0x24a: Push((int) 8724)
0x24b: Push((int) -1)
0x24c: Push((int) 9561)
0x24d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24e: Pop(3)
0x24f: GOTO 0x252

0x250: Return(); Pop(0)

0x251: GOTO 0x195

0x252: PushEmpty(bool)
0x253: Call 0xf6f

0x254: Pop(0)
0x255: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x256: @ lshWaitForAnimEnd()
0x257: Pop(0)
0x258: Push( Stack[3 + Tasks[-1].StackPointer] )
0x259: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x25a: GOTO 0x260

0x25b: PushEmpty(string)
0x25c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x25d: Call 0xef8

0x25e: Pop(1)
0x25f: GOTO 0x256

0x260: GOTO 0x26f

0x261: Push("all")
0x262: Push("idle")
0x263: @ PlayAnimation(Stack[-2], Stack[-1])
0x264: Pop(2)
0x265: @ WaitForAnimEnd()
0x266: Pop(0)
0x267: Push( Stack[3 + Tasks[-1].StackPointer] )
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: GOTO 0x26f

0x26a: Push("all")
0x26b: Push("idle")
0x26c: @ PlayAnimation(Stack[-2], Stack[-1])
0x26d: Pop(2)
0x26e: GOTO 0x265

0x26f: Return(); Pop(0)

0x270: PushEmpty()
0x271: PushEmpty(bool)
0x272: Call 0xf6f

0x273: Pop(0)
0x274: Pop(1); Push((bool) Stack[-1] == 0)
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: Return(); Pop(0)

0x277: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x278: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x279: Return(); Pop(0)

0x27a: PushEmpty(string)
0x27b: Stack[-1] = Stack[-2]
0x27c: Call 0xef8

0x27d: Pop(1)
0x27e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x27f: Return(); Pop(0)

0x280: PushEmpty()
0x281: Push((int) 1)
0x282: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x283: PushEmpty()
0x284: Call 0xf0a

0x285: Pop(0)
0x286: Push((int) 6364)
0x287: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x289: PushEmpty(object, object)
0x28a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x28b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28c: Call 0xfc6

0x28d: Pop(2)
0x28e: Push((int) 6361)
0x28f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x290: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x291: PushEmpty(object, object)
0x292: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x293: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x294: Call 0xfc6

0x295: Pop(2)
0x296: Push((int) 6365)
0x297: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x299: PushEmpty(object, object)
0x29a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x29b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29c: Call 0xfc6

0x29d: Pop(2)
0x29e: Push((int) 6372)
0x29f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a1: PushEmpty(object, object)
0x2a2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a4: Call 0xfcc

0x2a5: Pop(2)
0x2a6: Push((int) 6373)
0x2a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2a9: PushEmpty(object, object)
0x2aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ac: Call 0xfcc

0x2ad: Pop(2)
0x2ae: Push((int) 6383)
0x2af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b1: PushEmpty(object, object)
0x2b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b4: Call 0xfd2

0x2b5: Pop(2)
0x2b6: Push((int) 6384)
0x2b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b8: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2b9: PushEmpty(object, object)
0x2ba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2bc: Call 0xfd2

0x2bd: Pop(2)
0x2be: Push((int) 6385)
0x2bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c1: PushEmpty(object, object)
0x2c2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c4: Call 0xfd2

0x2c5: Pop(2)
0x2c6: Push((int) 9428)
0x2c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2c9: PushEmpty(object, object)
0x2ca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2cb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2cc: Call 0xfd8

0x2cd: Pop(2)
0x2ce: Push((int) 9429)
0x2cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d1: PushEmpty(object, object)
0x2d2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d4: Call 0xfd8

0x2d5: Pop(2)
0x2d6: Push((int) 9434)
0x2d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d9: PushEmpty(object, object)
0x2da: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2dc: Call 0xfde

0x2dd: Pop(2)
0x2de: Push((int) 9435)
0x2df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e1: PushEmpty(object, object)
0x2e2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e4: Call 0xfde

0x2e5: Pop(2)
0x2e6: Push((int) 9440)
0x2e7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2e9: PushEmpty(object, object)
0x2ea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ec: Call 0xfe4

0x2ed: Pop(2)
0x2ee: Push((int) 9447)
0x2ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f1: PushEmpty(object, object)
0x2f2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f4: Call 0xfea

0x2f5: Pop(2)
0x2f6: Push((int) 9450)
0x2f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f9: PushEmpty(object, object)
0x2fa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2fb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fc: Call 0xff0

0x2fd: Pop(2)
0x2fe: Push((int) 9141)
0x2ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x301: PushEmpty(string)
0x302: Stack[-1] = "Neutral"
0x303: Call 0x270

0x304: Pop(1)
0x305: Push((int) 8318)
0x306: @@ SetMessage(Stack[-1])
0x307: Pop(1)
0x308: @@ ClearReplies()
0x309: Pop(0)
0x30a: PushEmpty(bool)
0x30b: Stack[-1] = (bool) 0
0x30c: PushEmpty(bool, object)
0x30d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30e: Call 0x10cc

0x30f: Pop(1)
0x310: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x311: PushEmpty(bool, object)
0x312: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x313: Call 0x106c

0x314: Pop(1)
0x315: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x316: Stack[-1] = (bool) 1
0x317: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x318: Push((int) 8319)
0x319: Push((int) 6356)
0x31a: Push((int) 9142)
0x31b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31c: Pop(3)
0x31d: PushEmpty(bool)
0x31e: Stack[-1] = (bool) 1
0x31f: PushEmpty(bool)
0x320: Stack[-1] = (bool) 0
0x321: PushEmpty(bool, object)
0x322: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x323: Call 0x1138

0x324: Pop(1)
0x325: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x326: PushEmpty(bool, object)
0x327: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x328: Call 0x10d8

0x329: Pop(1)
0x32a: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x32b: Stack[-1] = (bool) 1
0x32c: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x32d: PushEmpty(bool)
0x32e: Stack[-1] = (bool) 0
0x32f: PushEmpty(bool, object)
0x330: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x331: Call 0x1142

0x332: Pop(1)
0x333: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x334: PushEmpty(bool, object)
0x335: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x336: Call 0x10d8

0x337: Pop(1)
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: Stack[-1] = (bool) 1
0x33a: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x33b: Stack[-1] = (bool) 0
0x33c: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x33d: Push((int) 8320)
0x33e: Push((int) 6369)
0x33f: Push((int) 9143)
0x340: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x341: Pop(3)
0x342: PushEmpty(bool)
0x343: Stack[-1] = (bool) 0
0x344: PushEmpty(bool, object)
0x345: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x346: Call 0x11dc

0x347: Pop(1)
0x348: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x349: PushEmpty(bool, object)
0x34a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34b: Call 0x10e4

0x34c: Pop(1)
0x34d: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34e: Stack[-1] = (bool) 1
0x34f: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x350: Push((int) 8322)
0x351: Push((int) 6376)
0x352: Push((int) 9145)
0x353: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x354: Pop(3)
0x355: PushEmpty(bool)
0x356: Stack[-1] = (bool) 0
0x357: PushEmpty(bool, object)
0x358: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x359: Call 0x117c

0x35a: Pop(1)
0x35b: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x35c: PushEmpty(bool, object)
0x35d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x35e: Call 0x10f0

0x35f: Pop(1)
0x360: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x361: Stack[-1] = (bool) 1
0x362: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x363: Push((int) 8324)
0x364: Push((int) 9417)
0x365: Push((int) 9147)
0x366: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x367: Pop(3)
0x368: PushEmpty(bool)
0x369: Stack[-1] = (bool) 0
0x36a: PushEmpty(bool, object)
0x36b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36c: Call 0x1170

0x36d: Pop(1)
0x36e: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x36f: PushEmpty(bool, object)
0x370: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x371: Call 0x10fc

0x372: Pop(1)
0x373: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x374: Stack[-1] = (bool) 1
0x375: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x376: Push((int) 8327)
0x377: Push((int) 9169)
0x378: Push((int) 9150)
0x379: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37a: Pop(3)
0x37b: PushEmpty(bool)
0x37c: Stack[-1] = (bool) 0
0x37d: PushEmpty(bool, object)
0x37e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37f: Call 0x11c4

0x380: Pop(1)
0x381: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x382: PushEmpty(bool, object)
0x383: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x384: Call 0x1108

0x385: Pop(1)
0x386: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x387: Stack[-1] = (bool) 1
0x388: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x389: Push((int) 8329)
0x38a: Push((int) 9170)
0x38b: Push((int) 9152)
0x38c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38d: Pop(3)
0x38e: PushEmpty(bool)
0x38f: Stack[-1] = (bool) 0
0x390: PushEmpty(bool, object)
0x391: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x392: Call 0x112c

0x393: Pop(1)
0x394: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x395: PushEmpty(bool, object)
0x396: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x397: Call 0x1114

0x398: Pop(1)
0x399: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x39a: Stack[-1] = (bool) 1
0x39b: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39c: Push((int) 8334)
0x39d: Push((int) 9171)
0x39e: Push((int) 9157)
0x39f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a0: Pop(3)
0x3a1: PushEmpty(bool)
0x3a2: Stack[-1] = (bool) 0
0x3a3: PushEmpty(bool, object)
0x3a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a5: Call 0x1188

0x3a6: Pop(1)
0x3a7: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3a8: PushEmpty(bool, object)
0x3a9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3aa: Call 0x1120

0x3ab: Pop(1)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3ad: Stack[-1] = (bool) 1
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3af: Push((int) 8337)
0x3b0: Push((int) 9172)
0x3b1: Push((int) 9160)
0x3b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b3: Pop(3)
0x3b4: Push((int) 8724)
0x3b5: Push((int) -1)
0x3b6: Push((int) 9561)
0x3b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b8: Pop(3)
0x3b9: Return(); Pop(0)

0x3ba: Push((int) 9172)
0x3bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3bd: PushEmpty(string)
0x3be: Stack[-1] = "Neutral"
0x3bf: Call 0x270

0x3c0: Pop(1)
0x3c1: Push((int) 8349)
0x3c2: @@ SetMessage(Stack[-1])
0x3c3: Pop(1)
0x3c4: @@ ClearReplies()
0x3c5: Pop(0)
0x3c6: Push((int) 8601)
0x3c7: Push((int) 9449)
0x3c8: Push((int) 9448)
0x3c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ca: Pop(3)
0x3cb: Return(); Pop(0)

0x3cc: Push((int) 9449)
0x3cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3cf: PushEmpty(object, object)
0x3d0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3d1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d2: Call 0xf77

0x3d3: Pop(2)
0x3d4: PushEmpty(string)
0x3d5: Stack[-1] = "Neutral"
0x3d6: Call 0x270

0x3d7: Pop(1)
0x3d8: Push((int) 8602)
0x3d9: @@ SetMessage(Stack[-1])
0x3da: Pop(1)
0x3db: @@ ClearReplies()
0x3dc: Pop(0)
0x3dd: Push((int) 8603)
0x3de: Push((int) -1)
0x3df: Push((int) 9450)
0x3e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e1: Pop(3)
0x3e2: Return(); Pop(0)

0x3e3: Push((int) 9171)
0x3e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e5: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3e6: PushEmpty(object, object)
0x3e7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e9: Call 0x1002

0x3ea: Pop(2)
0x3eb: PushEmpty(string)
0x3ec: Stack[-1] = "Neutral"
0x3ed: Call 0x270

0x3ee: Pop(1)
0x3ef: Push((int) 8348)
0x3f0: @@ SetMessage(Stack[-1])
0x3f1: Pop(1)
0x3f2: @@ ClearReplies()
0x3f3: Pop(0)
0x3f4: Push((int) 8595)
0x3f5: Push((int) 9443)
0x3f6: Push((int) 9441)
0x3f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f8: Pop(3)
0x3f9: Push((int) 8596)
0x3fa: Push((int) 9444)
0x3fb: Push((int) 9442)
0x3fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fd: Pop(3)
0x3fe: Return(); Pop(0)

0x3ff: Push((int) 9444)
0x400: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x401: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x402: PushEmpty(string)
0x403: Stack[-1] = "Neutral"
0x404: Call 0x270

0x405: Pop(1)
0x406: Push((int) 8598)
0x407: @@ SetMessage(Stack[-1])
0x408: Pop(1)
0x409: @@ ClearReplies()
0x40a: Pop(0)
0x40b: Push((int) 8599)
0x40c: Push((int) 9443)
0x40d: Push((int) 9445)
0x40e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40f: Pop(3)
0x410: Return(); Pop(0)

0x411: Push((int) 9443)
0x412: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x413: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x414: PushEmpty(string)
0x415: Stack[-1] = "Neutral"
0x416: Call 0x270

0x417: Pop(1)
0x418: Push((int) 8597)
0x419: @@ SetMessage(Stack[-1])
0x41a: Pop(1)
0x41b: @@ ClearReplies()
0x41c: Pop(0)
0x41d: Push((int) 8600)
0x41e: Push((int) -1)
0x41f: Push((int) 9447)
0x420: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x421: Pop(3)
0x422: Return(); Pop(0)

0x423: Push((int) 9170)
0x424: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x425: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x426: PushEmpty(object, object)
0x427: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x428: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x429: Call 0x1002

0x42a: Pop(2)
0x42b: PushEmpty(string)
0x42c: Stack[-1] = "Neutral"
0x42d: Call 0x270

0x42e: Pop(1)
0x42f: Push((int) 8347)
0x430: @@ SetMessage(Stack[-1])
0x431: Pop(1)
0x432: @@ ClearReplies()
0x433: Pop(0)
0x434: Push((int) 8591)
0x435: Push((int) 9437)
0x436: Push((int) 9436)
0x437: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x438: Pop(3)
0x439: Push((int) 8593)
0x43a: Push((int) 9437)
0x43b: Push((int) 9438)
0x43c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43d: Pop(3)
0x43e: Return(); Pop(0)

0x43f: Push((int) 9437)
0x440: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x441: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x442: PushEmpty(string)
0x443: Stack[-1] = "Neutral"
0x444: Call 0x270

0x445: Pop(1)
0x446: Push((int) 8592)
0x447: @@ SetMessage(Stack[-1])
0x448: Pop(1)
0x449: @@ ClearReplies()
0x44a: Pop(0)
0x44b: Push((int) 8594)
0x44c: Push((int) -1)
0x44d: Push((int) 9440)
0x44e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44f: Pop(3)
0x450: Return(); Pop(0)

0x451: Push((int) 9169)
0x452: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x453: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x454: PushEmpty(string)
0x455: Stack[-1] = "Neutral"
0x456: Call 0x270

0x457: Pop(1)
0x458: Push((int) 8346)
0x459: @@ SetMessage(Stack[-1])
0x45a: Pop(1)
0x45b: @@ ClearReplies()
0x45c: Pop(0)
0x45d: Push((int) 8585)
0x45e: Push((int) 9431)
0x45f: Push((int) 9430)
0x460: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x461: Pop(3)
0x462: Return(); Pop(0)

0x463: Push((int) 9431)
0x464: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x466: PushEmpty(string)
0x467: Stack[-1] = "Neutral"
0x468: Call 0x270

0x469: Pop(1)
0x46a: Push((int) 8586)
0x46b: @@ SetMessage(Stack[-1])
0x46c: Pop(1)
0x46d: @@ ClearReplies()
0x46e: Pop(0)
0x46f: Push((int) 8587)
0x470: Push((int) 9433)
0x471: Push((int) 9432)
0x472: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x473: Pop(3)
0x474: Return(); Pop(0)

0x475: Push((int) 9433)
0x476: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x477: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x478: PushEmpty(string)
0x479: Stack[-1] = "Neutral"
0x47a: Call 0x270

0x47b: Pop(1)
0x47c: Push((int) 8588)
0x47d: @@ SetMessage(Stack[-1])
0x47e: Pop(1)
0x47f: @@ ClearReplies()
0x480: Pop(0)
0x481: Push((int) 8589)
0x482: Push((int) -1)
0x483: Push((int) 9434)
0x484: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x485: Pop(3)
0x486: Push((int) 8590)
0x487: Push((int) -1)
0x488: Push((int) 9435)
0x489: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48a: Pop(3)
0x48b: Return(); Pop(0)

0x48c: Push((int) 9417)
0x48d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48e: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x48f: PushEmpty(string)
0x490: Stack[-1] = "Neutral"
0x491: Call 0x270

0x492: Pop(1)
0x493: Push((int) 8573)
0x494: @@ SetMessage(Stack[-1])
0x495: Pop(1)
0x496: @@ ClearReplies()
0x497: Pop(0)
0x498: PushEmpty(bool, object)
0x499: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x49a: Call 0x11e8

0x49b: Pop(1)
0x49c: Pop(1); Push((bool) Stack[-1] == 0)
0x49d: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x49e: Push((int) 8574)
0x49f: Push((int) 9419)
0x4a0: Push((int) 9418)
0x4a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a2: Pop(3)
0x4a3: Push((int) 8576)
0x4a4: Push((int) 9421)
0x4a5: Push((int) 9420)
0x4a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a7: Pop(3)
0x4a8: Return(); Pop(0)

0x4a9: Push((int) 9421)
0x4aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ab: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4ac: PushEmpty(string)
0x4ad: Stack[-1] = "Neutral"
0x4ae: Call 0x270

0x4af: Pop(1)
0x4b0: Push((int) 8577)
0x4b1: @@ SetMessage(Stack[-1])
0x4b2: Pop(1)
0x4b3: @@ ClearReplies()
0x4b4: Pop(0)
0x4b5: Push((int) 8578)
0x4b6: Push((int) 9424)
0x4b7: Push((int) 9422)
0x4b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b9: Pop(3)
0x4ba: Return(); Pop(0)

0x4bb: Push((int) 9419)
0x4bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4be: PushEmpty(string)
0x4bf: Stack[-1] = "Neutral"
0x4c0: Call 0x270

0x4c1: Pop(1)
0x4c2: Push((int) 8575)
0x4c3: @@ SetMessage(Stack[-1])
0x4c4: Pop(1)
0x4c5: @@ ClearReplies()
0x4c6: Pop(0)
0x4c7: Push((int) 8579)
0x4c8: Push((int) 9424)
0x4c9: Push((int) 9423)
0x4ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cb: Pop(3)
0x4cc: Return(); Pop(0)

0x4cd: Push((int) 9424)
0x4ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4cf: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4d0: PushEmpty(string)
0x4d1: Stack[-1] = "Neutral"
0x4d2: Call 0x270

0x4d3: Pop(1)
0x4d4: Push((int) 8580)
0x4d5: @@ SetMessage(Stack[-1])
0x4d6: Pop(1)
0x4d7: @@ ClearReplies()
0x4d8: Pop(0)
0x4d9: Push((int) 8581)
0x4da: Push((int) 9427)
0x4db: Push((int) 9426)
0x4dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4dd: Pop(3)
0x4de: Return(); Pop(0)

0x4df: Push((int) 9427)
0x4e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e1: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4e2: PushEmpty(string)
0x4e3: Stack[-1] = "Neutral"
0x4e4: Call 0x270

0x4e5: Pop(1)
0x4e6: Push((int) 8582)
0x4e7: @@ SetMessage(Stack[-1])
0x4e8: Pop(1)
0x4e9: @@ ClearReplies()
0x4ea: Pop(0)
0x4eb: Push((int) 8583)
0x4ec: Push((int) -1)
0x4ed: Push((int) 9428)
0x4ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ef: Pop(3)
0x4f0: Push((int) 8584)
0x4f1: Push((int) -1)
0x4f2: Push((int) 9429)
0x4f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f4: Pop(3)
0x4f5: Return(); Pop(0)

0x4f6: Push((int) 6376)
0x4f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f8: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x4f9: PushEmpty(object, object)
0x4fa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4fb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4fc: Call 0x1066

0x4fd: Pop(2)
0x4fe: PushEmpty(object, object)
0x4ff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x500: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x501: Call 0xffc

0x502: Pop(2)
0x503: PushEmpty(string)
0x504: Stack[-1] = "Neutral"
0x505: Call 0x270

0x506: Pop(1)
0x507: Push((int) 5788)
0x508: @@ SetMessage(Stack[-1])
0x509: Pop(1)
0x50a: @@ ClearReplies()
0x50b: Pop(0)
0x50c: Push((int) 5789)
0x50d: Push((int) 6378)
0x50e: Push((int) 6377)
0x50f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x510: Pop(3)
0x511: Push((int) 5798)
0x512: Push((int) 6378)
0x513: Push((int) 6386)
0x514: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x515: Pop(3)
0x516: Return(); Pop(0)

0x517: Push((int) 6378)
0x518: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x519: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x51a: PushEmpty(string)
0x51b: Stack[-1] = "Neutral"
0x51c: Call 0x270

0x51d: Pop(1)
0x51e: Push((int) 5790)
0x51f: @@ SetMessage(Stack[-1])
0x520: Pop(1)
0x521: @@ ClearReplies()
0x522: Pop(0)
0x523: Push((int) 5791)
0x524: Push((int) 6380)
0x525: Push((int) 6379)
0x526: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x527: Pop(3)
0x528: Push((int) 5797)
0x529: Push((int) -1)
0x52a: Push((int) 6385)
0x52b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52c: Pop(3)
0x52d: Return(); Pop(0)

0x52e: Push((int) 6380)
0x52f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x530: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x531: PushEmpty(string)
0x532: Stack[-1] = "Neutral"
0x533: Call 0x270

0x534: Pop(1)
0x535: Push((int) 5792)
0x536: @@ SetMessage(Stack[-1])
0x537: Pop(1)
0x538: @@ ClearReplies()
0x539: Pop(0)
0x53a: Push((int) 5793)
0x53b: Push((int) 6382)
0x53c: Push((int) 6381)
0x53d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53e: Pop(3)
0x53f: Push((int) 5796)
0x540: Push((int) -1)
0x541: Push((int) 6384)
0x542: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x543: Pop(3)
0x544: Return(); Pop(0)

0x545: Push((int) 6382)
0x546: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x547: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x548: PushEmpty(string)
0x549: Stack[-1] = "Neutral"
0x54a: Call 0x270

0x54b: Pop(1)
0x54c: Push((int) 5794)
0x54d: @@ SetMessage(Stack[-1])
0x54e: Pop(1)
0x54f: @@ ClearReplies()
0x550: Pop(0)
0x551: Push((int) 5795)
0x552: Push((int) -1)
0x553: Push((int) 6383)
0x554: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x555: Pop(3)
0x556: Return(); Pop(0)

0x557: Push((int) 6369)
0x558: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x559: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x55a: PushEmpty(string)
0x55b: Stack[-1] = "Neutral"
0x55c: Call 0x270

0x55d: Pop(1)
0x55e: Push((int) 5782)
0x55f: @@ SetMessage(Stack[-1])
0x560: Pop(1)
0x561: @@ ClearReplies()
0x562: Pop(0)
0x563: Push((int) 5783)
0x564: Push((int) 6371)
0x565: Push((int) 6370)
0x566: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x567: Pop(3)
0x568: Push((int) 5787)
0x569: Push((int) 6371)
0x56a: Push((int) 6374)
0x56b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56c: Pop(3)
0x56d: Return(); Pop(0)

0x56e: Push((int) 6371)
0x56f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x570: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x571: PushEmpty(string)
0x572: Stack[-1] = "Neutral"
0x573: Call 0x270

0x574: Pop(1)
0x575: Push((int) 5784)
0x576: @@ SetMessage(Stack[-1])
0x577: Pop(1)
0x578: @@ ClearReplies()
0x579: Pop(0)
0x57a: Push((int) 5785)
0x57b: Push((int) -1)
0x57c: Push((int) 6372)
0x57d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57e: Pop(3)
0x57f: Push((int) 5786)
0x580: Push((int) -1)
0x581: Push((int) 6373)
0x582: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x583: Pop(3)
0x584: Return(); Pop(0)

0x585: Push((int) 6356)
0x586: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x587: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x588: PushEmpty(string)
0x589: Stack[-1] = "Neutral"
0x58a: Call 0x270

0x58b: Pop(1)
0x58c: Push((int) 5771)
0x58d: @@ SetMessage(Stack[-1])
0x58e: Pop(1)
0x58f: @@ ClearReplies()
0x590: Pop(0)
0x591: Push((int) 5772)
0x592: Push((int) 6358)
0x593: Push((int) 6357)
0x594: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x595: Pop(3)
0x596: Push((int) 5781)
0x597: Push((int) 6358)
0x598: Push((int) 6367)
0x599: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59a: Pop(3)
0x59b: Return(); Pop(0)

0x59c: Push((int) 6358)
0x59d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59e: IF (Stack[-1] == 0) GOTO 0x5b3; Pop(1)

0x59f: PushEmpty(string)
0x5a0: Stack[-1] = "Neutral"
0x5a1: Call 0x270

0x5a2: Pop(1)
0x5a3: Push((int) 5773)
0x5a4: @@ SetMessage(Stack[-1])
0x5a5: Pop(1)
0x5a6: @@ ClearReplies()
0x5a7: Pop(0)
0x5a8: Push((int) 5774)
0x5a9: Push((int) 6360)
0x5aa: Push((int) 6359)
0x5ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ac: Pop(3)
0x5ad: Push((int) 5780)
0x5ae: Push((int) 6360)
0x5af: Push((int) 6365)
0x5b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b1: Pop(3)
0x5b2: Return(); Pop(0)

0x5b3: Push((int) 6360)
0x5b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b5: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5b6: PushEmpty(string)
0x5b7: Stack[-1] = "Neutral"
0x5b8: Call 0x270

0x5b9: Pop(1)
0x5ba: Push((int) 5775)
0x5bb: @@ SetMessage(Stack[-1])
0x5bc: Pop(1)
0x5bd: @@ ClearReplies()
0x5be: Pop(0)
0x5bf: Push((int) 5777)
0x5c0: Push((int) 6363)
0x5c1: Push((int) 6362)
0x5c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c3: Pop(3)
0x5c4: Push((int) 5776)
0x5c5: Push((int) -1)
0x5c6: Push((int) 6361)
0x5c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c8: Pop(3)
0x5c9: Return(); Pop(0)

0x5ca: Push((int) 6363)
0x5cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5cc: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5cd: PushEmpty(string)
0x5ce: Stack[-1] = "Neutral"
0x5cf: Call 0x270

0x5d0: Pop(1)
0x5d1: Push((int) 5778)
0x5d2: @@ SetMessage(Stack[-1])
0x5d3: Pop(1)
0x5d4: @@ ClearReplies()
0x5d5: Pop(0)
0x5d6: Push((int) 5779)
0x5d7: Push((int) -1)
0x5d8: Push((int) 6364)
0x5d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5da: Pop(3)
0x5db: Return(); Pop(0)

0x5dc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5dd: PushEmpty(bool)
0x5de: Call 0xf6f

0x5df: Pop(0)
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e4; Pop(1)

0x5e1: @ lshStopAnimation()
0x5e2: Pop(0)
0x5e3: GOTO 0x5e6

0x5e4: @ StopAnimation()
0x5e5: Pop(0)
0x5e6: Return(); Pop(0)

0x5e7: GOTO 0x281

0x5e8: Return(); Pop(0)

0x5e9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5ea: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5eb: PushEmpty(bool, object)
0x5ec: Stack[-1] = Stack[-11]
0x5ed: Call 0xebc

0x5ee: Pop(1)
0x5ef: Pop(1); Push((bool) Stack[-1] == 0)
0x5f0: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5f1: Stack[-10] = (int) -2
0x5f2: Return(); Pop(8)

0x5f3: @ CreateDialog(Stack[-4])
0x5f4: Pop(0)
0x5f5: PushEmpty(int)
0x5f6: Call 0xf6b

0x5f7: Pop(0)
0x5f8: @@ SetNPCName(Stack[-1])
0x5f9: Pop(1)
0x5fa: PushEmpty(string)
0x5fb: Call 0xf6d

0x5fc: Pop(0)
0x5fd: @@ SetPhoto(Stack[-1])
0x5fe: Pop(1)
0x5ff: PushEmpty(int)
0x600: Call 0x124f

0x601: Pop(0)
0x602: @@ SetPlayerName(Stack[-1])
0x603: Pop(1)
0x604: Stack[-2] = (int) -1
0x605: @ IsOverrideActive(Stack[-3])
0x606: Pop(0)
0x607: Push(Stack[-3])
0x608: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x609: Stack[-10] = (int) -2
0x60a: Return(); Pop(8)

0x60b: @ DoDialog(Stack[-4])
0x60c: Pop(0)
0x60d: PushEmpty(object, object)
0x60e: Stack[-2] = Stack[-11]
0x60f: Stack[-1] = Stack[-6]
0x610: Push(-2, 4); TaskCall(7)
0x611: Call 0x628

0x612: Pop(-2, 4); TaskReturn
0x613: Pop(2)
0x614: @@ IsDialogEnd(Stack[-1])
0x615: Pop(0)
0x616: Pop(0); Push((bool) Stack[-1] == 0)
0x617: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x618: @ sync()
0x619: Pop(0)
0x61a: @@ IsDialogEnd(Stack[-1])
0x61b: Pop(0)
0x61c: GOTO 0x616

0x61d: PushEmpty(object)
0x61e: Stack[-1] = Stack[-10]
0x61f: Call 0xef4

0x620: Pop(1)
0x621: @ StopDialog(Stack[-4])
0x622: Pop(0)
0x623: @@ GetReturnValue(Stack[-2])
0x624: Pop(0)
0x625: Stack[-10] = Stack[-2]
0x626: Return(); Pop(8)

0x627: Stack[-4] = 0
0x628: PushEmpty()
0x629: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x62a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x62b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x62c: Push((int) 1)
0x62d: IF (Stack[-1] == 0) GOTO 0x6aa; Pop(1)

0x62e: PushEmpty(string)
0x62f: Stack[-1] = "Neutral"
0x630: Call 0x6c8

0x631: Pop(1)
0x632: Push((int) 6877)
0x633: @@ SetMessage(Stack[-1])
0x634: Pop(1)
0x635: @@ ClearReplies()
0x636: Pop(0)
0x637: PushEmpty(bool)
0x638: Stack[-1] = (bool) 0
0x639: PushEmpty(bool, object)
0x63a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x63b: Call 0x1078

0x63c: Pop(1)
0x63d: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x63e: PushEmpty(bool, object)
0x63f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x640: Call 0x10a8

0x641: Pop(1)
0x642: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x643: Stack[-1] = (bool) 1
0x644: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x645: Push((int) 6878)
0x646: Push((int) 7585)
0x647: Push((int) 7584)
0x648: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x649: Pop(3)
0x64a: PushEmpty(bool)
0x64b: Stack[-1] = (bool) 0
0x64c: PushEmpty(bool, object)
0x64d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64e: Call 0x1084

0x64f: Pop(1)
0x650: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x651: PushEmpty(bool, object)
0x652: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x653: Call 0x10c0

0x654: Pop(1)
0x655: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x656: Stack[-1] = (bool) 1
0x657: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x658: Push((int) 7431)
0x659: Push((int) 8203)
0x65a: Push((int) 8202)
0x65b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65c: Pop(3)
0x65d: PushEmpty(bool)
0x65e: Stack[-1] = (bool) 0
0x65f: PushEmpty(bool, object)
0x660: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x661: Call 0x1090

0x662: Pop(1)
0x663: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x664: PushEmpty(bool, object)
0x665: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x666: Call 0x109c

0x667: Pop(1)
0x668: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x669: Stack[-1] = (bool) 1
0x66a: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x66b: Push((int) 6884)
0x66c: Push((int) 7591)
0x66d: Push((int) 7590)
0x66e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66f: Pop(3)
0x670: Push((int) 7529)
0x671: Push((int) -1)
0x672: Push((int) 8311)
0x673: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x674: Pop(3)
0x675: GOTO 0x6aa

0x676: PushEmpty(string)
0x677: Stack[-1] = "Neutral"
0x678: Call 0x6c8

0x679: Pop(1)
0x67a: Push((int) 9408)
0x67b: @@ SetMessage(Stack[-1])
0x67c: Pop(1)
0x67d: @@ ClearReplies()
0x67e: Pop(0)
0x67f: Push((int) 9409)
0x680: Push((int) 10339)
0x681: Push((int) 10338)
0x682: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x683: Pop(3)
0x684: Push((int) 9418)
0x685: Push((int) 10339)
0x686: Push((int) 10348)
0x687: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x688: Pop(3)
0x689: Push((int) 9419)
0x68a: Push((int) 10351)
0x68b: Push((int) 10350)
0x68c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68d: Pop(3)
0x68e: GOTO 0x6aa

0x68f: PushEmpty(string)
0x690: Stack[-1] = "Neutral"
0x691: Call 0x6c8

0x692: Pop(1)
0x693: Push((int) 9422)
0x694: @@ SetMessage(Stack[-1])
0x695: Pop(1)
0x696: @@ ClearReplies()
0x697: Pop(0)
0x698: Push((int) 9423)
0x699: Push((int) 10356)
0x69a: Push((int) 10355)
0x69b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69c: Pop(3)
0x69d: Push((int) 9432)
0x69e: Push((int) 10366)
0x69f: Push((int) 10365)
0x6a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a1: Pop(3)
0x6a2: Push((int) 9435)
0x6a3: Push((int) 10370)
0x6a4: Push((int) 10369)
0x6a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a6: Pop(3)
0x6a7: GOTO 0x6aa

0x6a8: Return(); Pop(0)

0x6a9: GOTO 0x62c

0x6aa: PushEmpty(bool)
0x6ab: Call 0xf6f

0x6ac: Pop(0)
0x6ad: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x6ae: @ lshWaitForAnimEnd()
0x6af: Pop(0)
0x6b0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6b1: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6b2: GOTO 0x6b8

0x6b3: PushEmpty(string)
0x6b4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6b5: Call 0xef8

0x6b6: Pop(1)
0x6b7: GOTO 0x6ae

0x6b8: GOTO 0x6c7

0x6b9: Push("all")
0x6ba: Push("idle")
0x6bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x6bc: Pop(2)
0x6bd: @ WaitForAnimEnd()
0x6be: Pop(0)
0x6bf: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6c1: GOTO 0x6c7

0x6c2: Push("all")
0x6c3: Push("idle")
0x6c4: @ PlayAnimation(Stack[-2], Stack[-1])
0x6c5: Pop(2)
0x6c6: GOTO 0x6bd

0x6c7: Return(); Pop(0)

0x6c8: PushEmpty()
0x6c9: PushEmpty(bool)
0x6ca: Call 0xf6f

0x6cb: Pop(0)
0x6cc: Pop(1); Push((bool) Stack[-1] == 0)
0x6cd: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6ce: Return(); Pop(0)

0x6cf: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6d1: Return(); Pop(0)

0x6d2: PushEmpty(string)
0x6d3: Stack[-1] = Stack[-2]
0x6d4: Call 0xef8

0x6d5: Pop(1)
0x6d6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6d7: Return(); Pop(0)

0x6d8: PushEmpty()
0x6d9: Push((int) 1)
0x6da: IF (Stack[-1] == 0) GOTO 0x942; Pop(1)

0x6db: PushEmpty()
0x6dc: Call 0xf0a

0x6dd: Pop(0)
0x6de: Push((int) 8221)
0x6df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6e0: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6e1: PushEmpty(object, object)
0x6e2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e4: Call 0xf7d

0x6e5: Pop(2)
0x6e6: PushEmpty(object, object)
0x6e7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e9: Call 0xf8f

0x6ea: Pop(2)
0x6eb: Push((int) 8222)
0x6ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6ed: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6ee: PushEmpty(object, object)
0x6ef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6f0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6f1: Call 0xf7d

0x6f2: Pop(2)
0x6f3: Push((int) 8210)
0x6f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6f5: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6f6: PushEmpty(object, object)
0x6f7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6f9: Call 0xf83

0x6fa: Pop(2)
0x6fb: PushEmpty(object, object)
0x6fc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6fd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6fe: Call 0xfa6

0x6ff: Pop(2)
0x700: Push((int) 8201)
0x701: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x702: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x703: PushEmpty(object, object)
0x704: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x705: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x706: Call 0xf89

0x707: Pop(2)
0x708: Push((int) 7583)
0x709: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x70a: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x70b: PushEmpty(string)
0x70c: Stack[-1] = "Neutral"
0x70d: Call 0x6c8

0x70e: Pop(1)
0x70f: Push((int) 6877)
0x710: @@ SetMessage(Stack[-1])
0x711: Pop(1)
0x712: @@ ClearReplies()
0x713: Pop(0)
0x714: PushEmpty(bool)
0x715: Stack[-1] = (bool) 0
0x716: PushEmpty(bool, object)
0x717: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x718: Call 0x1078

0x719: Pop(1)
0x71a: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x71b: PushEmpty(bool, object)
0x71c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x71d: Call 0x10a8

0x71e: Pop(1)
0x71f: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x720: Stack[-1] = (bool) 1
0x721: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x722: Push((int) 6878)
0x723: Push((int) 7585)
0x724: Push((int) 7584)
0x725: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x726: Pop(3)
0x727: PushEmpty(bool)
0x728: Stack[-1] = (bool) 0
0x729: PushEmpty(bool, object)
0x72a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72b: Call 0x1084

0x72c: Pop(1)
0x72d: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x72e: PushEmpty(bool, object)
0x72f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x730: Call 0x10c0

0x731: Pop(1)
0x732: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x733: Stack[-1] = (bool) 1
0x734: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x735: Push((int) 7431)
0x736: Push((int) 8203)
0x737: Push((int) 8202)
0x738: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x739: Pop(3)
0x73a: PushEmpty(bool)
0x73b: Stack[-1] = (bool) 0
0x73c: PushEmpty(bool, object)
0x73d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73e: Call 0x1090

0x73f: Pop(1)
0x740: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x741: PushEmpty(bool, object)
0x742: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x743: Call 0x109c

0x744: Pop(1)
0x745: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x746: Stack[-1] = (bool) 1
0x747: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x748: Push((int) 6884)
0x749: Push((int) 7591)
0x74a: Push((int) 7590)
0x74b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74c: Pop(3)
0x74d: Push((int) 7529)
0x74e: Push((int) -1)
0x74f: Push((int) 8311)
0x750: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x751: Pop(3)
0x752: Return(); Pop(0)

0x753: PushEmpty(string)
0x754: Stack[-1] = "Neutral"
0x755: Call 0x6c8

0x756: Pop(1)
0x757: Push((int) 9408)
0x758: @@ SetMessage(Stack[-1])
0x759: Pop(1)
0x75a: @@ ClearReplies()
0x75b: Pop(0)
0x75c: Push((int) 9409)
0x75d: Push((int) 10339)
0x75e: Push((int) 10338)
0x75f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x760: Pop(3)
0x761: Push((int) 9418)
0x762: Push((int) 10339)
0x763: Push((int) 10348)
0x764: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x765: Pop(3)
0x766: Push((int) 9419)
0x767: Push((int) 10351)
0x768: Push((int) 10350)
0x769: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76a: Pop(3)
0x76b: Return(); Pop(0)

0x76c: PushEmpty(string)
0x76d: Stack[-1] = "Neutral"
0x76e: Call 0x6c8

0x76f: Pop(1)
0x770: Push((int) 9422)
0x771: @@ SetMessage(Stack[-1])
0x772: Pop(1)
0x773: @@ ClearReplies()
0x774: Pop(0)
0x775: Push((int) 9423)
0x776: Push((int) 10356)
0x777: Push((int) 10355)
0x778: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x779: Pop(3)
0x77a: Push((int) 9432)
0x77b: Push((int) 10366)
0x77c: Push((int) 10365)
0x77d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77e: Pop(3)
0x77f: Push((int) 9435)
0x780: Push((int) 10370)
0x781: Push((int) 10369)
0x782: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x783: Pop(3)
0x784: Return(); Pop(0)

0x785: Push((int) 10370)
0x786: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x787: IF (Stack[-1] == 0) GOTO 0x797; Pop(1)

0x788: PushEmpty(string)
0x789: Stack[-1] = "Neutral"
0x78a: Call 0x6c8

0x78b: Pop(1)
0x78c: Push((int) 9436)
0x78d: @@ SetMessage(Stack[-1])
0x78e: Pop(1)
0x78f: @@ ClearReplies()
0x790: Pop(0)
0x791: Push((int) 9437)
0x792: Push((int) 10356)
0x793: Push((int) 10371)
0x794: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x795: Pop(3)
0x796: Return(); Pop(0)

0x797: Push((int) 10366)
0x798: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x799: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x79a: PushEmpty(string)
0x79b: Stack[-1] = "Neutral"
0x79c: Call 0x6c8

0x79d: Pop(1)
0x79e: Push((int) 9433)
0x79f: @@ SetMessage(Stack[-1])
0x7a0: Pop(1)
0x7a1: @@ ClearReplies()
0x7a2: Pop(0)
0x7a3: Push((int) 9434)
0x7a4: Push((int) 10356)
0x7a5: Push((int) 10367)
0x7a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a7: Pop(3)
0x7a8: Return(); Pop(0)

0x7a9: Push((int) 10356)
0x7aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ab: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x7ac: PushEmpty(string)
0x7ad: Stack[-1] = "Neutral"
0x7ae: Call 0x6c8

0x7af: Pop(1)
0x7b0: Push((int) 9424)
0x7b1: @@ SetMessage(Stack[-1])
0x7b2: Pop(1)
0x7b3: @@ ClearReplies()
0x7b4: Pop(0)
0x7b5: Push((int) 9425)
0x7b6: Push((int) 10358)
0x7b7: Push((int) 10357)
0x7b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b9: Pop(3)
0x7ba: Push((int) 9429)
0x7bb: Push((int) 10362)
0x7bc: Push((int) 10361)
0x7bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7be: Pop(3)
0x7bf: Return(); Pop(0)

0x7c0: Push((int) 10362)
0x7c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c2: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7c3: PushEmpty(string)
0x7c4: Stack[-1] = "Neutral"
0x7c5: Call 0x6c8

0x7c6: Pop(1)
0x7c7: Push((int) 9430)
0x7c8: @@ SetMessage(Stack[-1])
0x7c9: Pop(1)
0x7ca: @@ ClearReplies()
0x7cb: Pop(0)
0x7cc: Push((int) 9431)
0x7cd: Push((int) 10358)
0x7ce: Push((int) 10363)
0x7cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d0: Pop(3)
0x7d1: Return(); Pop(0)

0x7d2: Push((int) 10358)
0x7d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d4: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x7d5: PushEmpty(string)
0x7d6: Stack[-1] = "Neutral"
0x7d7: Call 0x6c8

0x7d8: Pop(1)
0x7d9: Push((int) 9426)
0x7da: @@ SetMessage(Stack[-1])
0x7db: Pop(1)
0x7dc: @@ ClearReplies()
0x7dd: Pop(0)
0x7de: Push((int) 9427)
0x7df: Push((int) -1)
0x7e0: Push((int) 10359)
0x7e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e2: Pop(3)
0x7e3: Push((int) 9428)
0x7e4: Push((int) -1)
0x7e5: Push((int) 10360)
0x7e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e7: Pop(3)
0x7e8: Return(); Pop(0)

0x7e9: Push((int) 10351)
0x7ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7eb: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7ec: PushEmpty(string)
0x7ed: Stack[-1] = "Neutral"
0x7ee: Call 0x6c8

0x7ef: Pop(1)
0x7f0: Push((int) 9420)
0x7f1: @@ SetMessage(Stack[-1])
0x7f2: Pop(1)
0x7f3: @@ ClearReplies()
0x7f4: Pop(0)
0x7f5: Push((int) 9421)
0x7f6: Push((int) 10339)
0x7f7: Push((int) 10352)
0x7f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f9: Pop(3)
0x7fa: Return(); Pop(0)

0x7fb: Push((int) 10339)
0x7fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7fd: IF (Stack[-1] == 0) GOTO 0x812; Pop(1)

0x7fe: PushEmpty(string)
0x7ff: Stack[-1] = "Neutral"
0x800: Call 0x6c8

0x801: Pop(1)
0x802: Push((int) 9410)
0x803: @@ SetMessage(Stack[-1])
0x804: Pop(1)
0x805: @@ ClearReplies()
0x806: Pop(0)
0x807: Push((int) 9411)
0x808: Push((int) 10341)
0x809: Push((int) 10340)
0x80a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80b: Pop(3)
0x80c: Push((int) 9417)
0x80d: Push((int) -1)
0x80e: Push((int) 10347)
0x80f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x810: Pop(3)
0x811: Return(); Pop(0)

0x812: Push((int) 10341)
0x813: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x814: IF (Stack[-1] == 0) GOTO 0x829; Pop(1)

0x815: PushEmpty(string)
0x816: Stack[-1] = "Neutral"
0x817: Call 0x6c8

0x818: Pop(1)
0x819: Push((int) 9412)
0x81a: @@ SetMessage(Stack[-1])
0x81b: Pop(1)
0x81c: @@ ClearReplies()
0x81d: Pop(0)
0x81e: Push((int) 9413)
0x81f: Push((int) 10343)
0x820: Push((int) 10342)
0x821: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x822: Pop(3)
0x823: Push((int) 9416)
0x824: Push((int) 10343)
0x825: Push((int) 10345)
0x826: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x827: Pop(3)
0x828: Return(); Pop(0)

0x829: Push((int) 10343)
0x82a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82b: IF (Stack[-1] == 0) GOTO 0x83b; Pop(1)

0x82c: PushEmpty(string)
0x82d: Stack[-1] = "Neutral"
0x82e: Call 0x6c8

0x82f: Pop(1)
0x830: Push((int) 9414)
0x831: @@ SetMessage(Stack[-1])
0x832: Pop(1)
0x833: @@ ClearReplies()
0x834: Pop(0)
0x835: Push((int) 9415)
0x836: Push((int) -1)
0x837: Push((int) 10344)
0x838: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x839: Pop(3)
0x83a: Return(); Pop(0)

0x83b: Push((int) 7591)
0x83c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x83d: IF (Stack[-1] == 0) GOTO 0x84d; Pop(1)

0x83e: PushEmpty(string)
0x83f: Stack[-1] = "Neutral"
0x840: Call 0x6c8

0x841: Pop(1)
0x842: Push((int) 6885)
0x843: @@ SetMessage(Stack[-1])
0x844: Pop(1)
0x845: @@ ClearReplies()
0x846: Pop(0)
0x847: Push((int) 7430)
0x848: Push((int) -1)
0x849: Push((int) 8201)
0x84a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84b: Pop(3)
0x84c: Return(); Pop(0)

0x84d: Push((int) 8203)
0x84e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x84f: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x850: PushEmpty(string)
0x851: Stack[-1] = "Neutral"
0x852: Call 0x6c8

0x853: Pop(1)
0x854: Push((int) 7432)
0x855: @@ SetMessage(Stack[-1])
0x856: Pop(1)
0x857: @@ ClearReplies()
0x858: Pop(0)
0x859: Push((int) 7433)
0x85a: Push((int) 8205)
0x85b: Push((int) 8204)
0x85c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85d: Pop(3)
0x85e: Return(); Pop(0)

0x85f: Push((int) 8205)
0x860: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x861: IF (Stack[-1] == 0) GOTO 0x871; Pop(1)

0x862: PushEmpty(string)
0x863: Stack[-1] = "Neutral"
0x864: Call 0x6c8

0x865: Pop(1)
0x866: Push((int) 7434)
0x867: @@ SetMessage(Stack[-1])
0x868: Pop(1)
0x869: @@ ClearReplies()
0x86a: Pop(0)
0x86b: Push((int) 6882)
0x86c: Push((int) 7589)
0x86d: Push((int) 7588)
0x86e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86f: Pop(3)
0x870: Return(); Pop(0)

0x871: Push((int) 7589)
0x872: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x873: IF (Stack[-1] == 0) GOTO 0x888; Pop(1)

0x874: PushEmpty(string)
0x875: Stack[-1] = "Neutral"
0x876: Call 0x6c8

0x877: Pop(1)
0x878: Push((int) 6883)
0x879: @@ SetMessage(Stack[-1])
0x87a: Pop(1)
0x87b: @@ ClearReplies()
0x87c: Pop(0)
0x87d: Push((int) 7435)
0x87e: Push((int) 8207)
0x87f: Push((int) 8206)
0x880: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x881: Pop(3)
0x882: Push((int) 7440)
0x883: Push((int) 8207)
0x884: Push((int) 8211)
0x885: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x886: Pop(3)
0x887: Return(); Pop(0)

0x888: Push((int) 8207)
0x889: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x88a: IF (Stack[-1] == 0) GOTO 0x89f; Pop(1)

0x88b: PushEmpty(string)
0x88c: Stack[-1] = "Neutral"
0x88d: Call 0x6c8

0x88e: Pop(1)
0x88f: Push((int) 7436)
0x890: @@ SetMessage(Stack[-1])
0x891: Pop(1)
0x892: @@ ClearReplies()
0x893: Pop(0)
0x894: Push((int) 7437)
0x895: Push((int) 8209)
0x896: Push((int) 8208)
0x897: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x898: Pop(3)
0x899: Push((int) 7441)
0x89a: Push((int) 8209)
0x89b: Push((int) 8213)
0x89c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89d: Pop(3)
0x89e: Return(); Pop(0)

0x89f: Push((int) 8209)
0x8a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a1: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8a2: PushEmpty(string)
0x8a3: Stack[-1] = "Neutral"
0x8a4: Call 0x6c8

0x8a5: Pop(1)
0x8a6: Push((int) 7438)
0x8a7: @@ SetMessage(Stack[-1])
0x8a8: Pop(1)
0x8a9: @@ ClearReplies()
0x8aa: Pop(0)
0x8ab: Push((int) 7439)
0x8ac: Push((int) -1)
0x8ad: Push((int) 8210)
0x8ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8af: Pop(3)
0x8b0: Return(); Pop(0)

0x8b1: Push((int) 7585)
0x8b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b3: IF (Stack[-1] == 0) GOTO 0x8c8; Pop(1)

0x8b4: PushEmpty(string)
0x8b5: Stack[-1] = "Neutral"
0x8b6: Call 0x6c8

0x8b7: Pop(1)
0x8b8: Push((int) 6879)
0x8b9: @@ SetMessage(Stack[-1])
0x8ba: Pop(1)
0x8bb: @@ ClearReplies()
0x8bc: Pop(0)
0x8bd: Push((int) 6880)
0x8be: Push((int) 7587)
0x8bf: Push((int) 7586)
0x8c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c1: Pop(3)
0x8c2: Push((int) 7450)
0x8c3: Push((int) 8216)
0x8c4: Push((int) 8223)
0x8c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c6: Pop(3)
0x8c7: Return(); Pop(0)

0x8c8: Push((int) 7587)
0x8c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ca: IF (Stack[-1] == 0) GOTO 0x8e4; Pop(1)

0x8cb: PushEmpty(object, object)
0x8cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8ce: Call 0xf77

0x8cf: Pop(2)
0x8d0: PushEmpty(string)
0x8d1: Stack[-1] = "Neutral"
0x8d2: Call 0x6c8

0x8d3: Pop(1)
0x8d4: Push((int) 6881)
0x8d5: @@ SetMessage(Stack[-1])
0x8d6: Pop(1)
0x8d7: @@ ClearReplies()
0x8d8: Pop(0)
0x8d9: Push((int) 7442)
0x8da: Push((int) 8216)
0x8db: Push((int) 8215)
0x8dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8dd: Pop(3)
0x8de: Push((int) 7451)
0x8df: Push((int) 8226)
0x8e0: Push((int) 8225)
0x8e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e2: Pop(3)
0x8e3: Return(); Pop(0)

0x8e4: Push((int) 8226)
0x8e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e6: IF (Stack[-1] == 0) GOTO 0x8f6; Pop(1)

0x8e7: PushEmpty(string)
0x8e8: Stack[-1] = "Neutral"
0x8e9: Call 0x6c8

0x8ea: Pop(1)
0x8eb: Push((int) 7452)
0x8ec: @@ SetMessage(Stack[-1])
0x8ed: Pop(1)
0x8ee: @@ ClearReplies()
0x8ef: Pop(0)
0x8f0: Push((int) 7453)
0x8f1: Push((int) 8216)
0x8f2: Push((int) 8227)
0x8f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f4: Pop(3)
0x8f5: Return(); Pop(0)

0x8f6: Push((int) 8216)
0x8f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f8: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x8f9: PushEmpty(string)
0x8fa: Stack[-1] = "Neutral"
0x8fb: Call 0x6c8

0x8fc: Pop(1)
0x8fd: Push((int) 7443)
0x8fe: @@ SetMessage(Stack[-1])
0x8ff: Pop(1)
0x900: @@ ClearReplies()
0x901: Pop(0)
0x902: Push((int) 7444)
0x903: Push((int) 8218)
0x904: Push((int) 8217)
0x905: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x906: Pop(3)
0x907: Return(); Pop(0)

0x908: Push((int) 8218)
0x909: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x90a: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x90b: PushEmpty(string)
0x90c: Stack[-1] = "Neutral"
0x90d: Call 0x6c8

0x90e: Pop(1)
0x90f: Push((int) 7445)
0x910: @@ SetMessage(Stack[-1])
0x911: Pop(1)
0x912: @@ ClearReplies()
0x913: Pop(0)
0x914: Push((int) 7446)
0x915: Push((int) 8220)
0x916: Push((int) 8219)
0x917: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x918: Pop(3)
0x919: PushEmpty(bool, object)
0x91a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91b: Call 0x10b4

0x91c: Pop(1)
0x91d: IF (Stack[-1] == 0) GOTO 0x923; Pop(1)

0x91e: Push((int) 7449)
0x91f: Push((int) -1)
0x920: Push((int) 8222)
0x921: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x922: Pop(3)
0x923: Return(); Pop(0)

0x924: Push((int) 8220)
0x925: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x926: IF (Stack[-1] == 0) GOTO 0x936; Pop(1)

0x927: PushEmpty(string)
0x928: Stack[-1] = "Neutral"
0x929: Call 0x6c8

0x92a: Pop(1)
0x92b: Push((int) 7447)
0x92c: @@ SetMessage(Stack[-1])
0x92d: Pop(1)
0x92e: @@ ClearReplies()
0x92f: Pop(0)
0x930: Push((int) 7448)
0x931: Push((int) -1)
0x932: Push((int) 8221)
0x933: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x934: Pop(3)
0x935: Return(); Pop(0)

0x936: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x937: PushEmpty(bool)
0x938: Call 0xf6f

0x939: Pop(0)
0x93a: IF (Stack[-1] == 0) GOTO 0x93e; Pop(1)

0x93b: @ lshStopAnimation()
0x93c: Pop(0)
0x93d: GOTO 0x940

0x93e: @ StopAnimation()
0x93f: Pop(0)
0x940: Return(); Pop(0)

0x941: GOTO 0x6d9

0x942: Return(); Pop(0)

0x943: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x944: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x945: PushEmpty(bool, object)
0x946: Stack[-1] = Stack[-11]
0x947: Call 0xebc

0x948: Pop(1)
0x949: Pop(1); Push((bool) Stack[-1] == 0)
0x94a: IF (Stack[-1] == 0) GOTO 0x94d; Pop(1)

0x94b: Stack[-10] = (int) -2
0x94c: Return(); Pop(8)

0x94d: @ CreateDialog(Stack[-4])
0x94e: Pop(0)
0x94f: PushEmpty(int)
0x950: Call 0xf6b

0x951: Pop(0)
0x952: @@ SetNPCName(Stack[-1])
0x953: Pop(1)
0x954: PushEmpty(string)
0x955: Call 0xf6d

0x956: Pop(0)
0x957: @@ SetPhoto(Stack[-1])
0x958: Pop(1)
0x959: PushEmpty(int)
0x95a: Call 0x124f

0x95b: Pop(0)
0x95c: @@ SetPlayerName(Stack[-1])
0x95d: Pop(1)
0x95e: Stack[-2] = (int) -1
0x95f: @ IsOverrideActive(Stack[-3])
0x960: Pop(0)
0x961: Push(Stack[-3])
0x962: IF (Stack[-1] == 0) GOTO 0x965; Pop(1)

0x963: Stack[-10] = (int) -2
0x964: Return(); Pop(8)

0x965: @ DoDialog(Stack[-4])
0x966: Pop(0)
0x967: PushEmpty(object, object)
0x968: Stack[-2] = Stack[-11]
0x969: Stack[-1] = Stack[-6]
0x96a: Push(-2, 4); TaskCall(9)
0x96b: Call 0x982

0x96c: Pop(-2, 4); TaskReturn
0x96d: Pop(2)
0x96e: @@ IsDialogEnd(Stack[-1])
0x96f: Pop(0)
0x970: Pop(0); Push((bool) Stack[-1] == 0)
0x971: IF (Stack[-1] == 0) GOTO 0x977; Pop(1)

0x972: @ sync()
0x973: Pop(0)
0x974: @@ IsDialogEnd(Stack[-1])
0x975: Pop(0)
0x976: GOTO 0x970

0x977: PushEmpty(object)
0x978: Stack[-1] = Stack[-10]
0x979: Call 0xef4

0x97a: Pop(1)
0x97b: @ StopDialog(Stack[-4])
0x97c: Pop(0)
0x97d: @@ GetReturnValue(Stack[-2])
0x97e: Pop(0)
0x97f: Stack[-10] = Stack[-2]
0x980: Return(); Pop(8)

0x981: Stack[-4] = 0
0x982: PushEmpty()
0x983: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x984: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x985: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x986: Push((int) 1)
0x987: IF (Stack[-1] == 0) GOTO 0x9b7; Pop(1)

0x988: PushEmpty(bool, object)
0x989: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x98a: Call 0x11d0

0x98b: Pop(1)
0x98c: IF (Stack[-1] == 0) GOTO 0x9a6; Pop(1)

0x98d: PushEmpty(object, object)
0x98e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x98f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x990: Call 0x1060

0x991: Pop(2)
0x992: PushEmpty(string)
0x993: Stack[-1] = "Neutral"
0x994: Call 0x9d5

0x995: Pop(1)
0x996: Push((int) 10030)
0x997: @@ SetMessage(Stack[-1])
0x998: Pop(1)
0x999: @@ ClearReplies()
0x99a: Pop(0)
0x99b: Push((int) 10031)
0x99c: Push((int) 11054)
0x99d: Push((int) 11053)
0x99e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99f: Pop(3)
0x9a0: Push((int) 10039)
0x9a1: Push((int) 11063)
0x9a2: Push((int) 11062)
0x9a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a4: Pop(3)
0x9a5: GOTO 0x9b7

0x9a6: PushEmpty(string)
0x9a7: Stack[-1] = "Neutral"
0x9a8: Call 0x9d5

0x9a9: Pop(1)
0x9aa: Push((int) 15308)
0x9ab: @@ SetMessage(Stack[-1])
0x9ac: Pop(1)
0x9ad: @@ ClearReplies()
0x9ae: Pop(0)
0x9af: Push((int) 15309)
0x9b0: Push((int) -1)
0x9b1: Push((int) 16547)
0x9b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b3: Pop(3)
0x9b4: GOTO 0x9b7

0x9b5: Return(); Pop(0)

0x9b6: GOTO 0x986

0x9b7: PushEmpty(bool)
0x9b8: Call 0xf6f

0x9b9: Pop(0)
0x9ba: IF (Stack[-1] == 0) GOTO 0x9c6; Pop(1)

0x9bb: @ lshWaitForAnimEnd()
0x9bc: Pop(0)
0x9bd: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9be: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9bf: GOTO 0x9c5

0x9c0: PushEmpty(string)
0x9c1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9c2: Call 0xef8

0x9c3: Pop(1)
0x9c4: GOTO 0x9bb

0x9c5: GOTO 0x9d4

0x9c6: Push("all")
0x9c7: Push("idle")
0x9c8: @ PlayAnimation(Stack[-2], Stack[-1])
0x9c9: Pop(2)
0x9ca: @ WaitForAnimEnd()
0x9cb: Pop(0)
0x9cc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9cd: IF (Stack[-1] == 0) GOTO 0x9cf; Pop(1)

0x9ce: GOTO 0x9d4

0x9cf: Push("all")
0x9d0: Push("idle")
0x9d1: @ PlayAnimation(Stack[-2], Stack[-1])
0x9d2: Pop(2)
0x9d3: GOTO 0x9ca

0x9d4: Return(); Pop(0)

0x9d5: PushEmpty()
0x9d6: PushEmpty(bool)
0x9d7: Call 0xf6f

0x9d8: Pop(0)
0x9d9: Pop(1); Push((bool) Stack[-1] == 0)
0x9da: IF (Stack[-1] == 0) GOTO 0x9dc; Pop(1)

0x9db: Return(); Pop(0)

0x9dc: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9dd: IF (Stack[-1] == 0) GOTO 0x9df; Pop(1)

0x9de: Return(); Pop(0)

0x9df: PushEmpty(string)
0x9e0: Stack[-1] = Stack[-2]
0x9e1: Call 0xef8

0x9e2: Pop(1)
0x9e3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e4: Return(); Pop(0)

0x9e5: PushEmpty()
0x9e6: Push((int) 1)
0x9e7: IF (Stack[-1] == 0) GOTO 0xa71; Pop(1)

0x9e8: PushEmpty()
0x9e9: Call 0xf0a

0x9ea: Pop(0)
0x9eb: Push((int) 11052)
0x9ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ed: IF (Stack[-1] == 0) GOTO 0xa1b; Pop(1)

0x9ee: PushEmpty(bool, object)
0x9ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f0: Call 0x11d0

0x9f1: Pop(1)
0x9f2: IF (Stack[-1] == 0) GOTO 0xa0c; Pop(1)

0x9f3: PushEmpty(object, object)
0x9f4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9f6: Call 0x1060

0x9f7: Pop(2)
0x9f8: PushEmpty(string)
0x9f9: Stack[-1] = "Neutral"
0x9fa: Call 0x9d5

0x9fb: Pop(1)
0x9fc: Push((int) 10030)
0x9fd: @@ SetMessage(Stack[-1])
0x9fe: Pop(1)
0x9ff: @@ ClearReplies()
0xa00: Pop(0)
0xa01: Push((int) 10031)
0xa02: Push((int) 11054)
0xa03: Push((int) 11053)
0xa04: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa05: Pop(3)
0xa06: Push((int) 10039)
0xa07: Push((int) 11063)
0xa08: Push((int) 11062)
0xa09: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0a: Pop(3)
0xa0b: Return(); Pop(0)

0xa0c: PushEmpty(string)
0xa0d: Stack[-1] = "Neutral"
0xa0e: Call 0x9d5

0xa0f: Pop(1)
0xa10: Push((int) 15308)
0xa11: @@ SetMessage(Stack[-1])
0xa12: Pop(1)
0xa13: @@ ClearReplies()
0xa14: Pop(0)
0xa15: Push((int) 15309)
0xa16: Push((int) -1)
0xa17: Push((int) 16547)
0xa18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa19: Pop(3)
0xa1a: Return(); Pop(0)

0xa1b: Push((int) 11063)
0xa1c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa1d: IF (Stack[-1] == 0) GOTO 0xa32; Pop(1)

0xa1e: PushEmpty(string)
0xa1f: Stack[-1] = "Neutral"
0xa20: Call 0x9d5

0xa21: Pop(1)
0xa22: Push((int) 10040)
0xa23: @@ SetMessage(Stack[-1])
0xa24: Pop(1)
0xa25: @@ ClearReplies()
0xa26: Pop(0)
0xa27: Push((int) 10041)
0xa28: Push((int) -1)
0xa29: Push((int) 11064)
0xa2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2b: Pop(3)
0xa2c: Push((int) 10042)
0xa2d: Push((int) 11056)
0xa2e: Push((int) 11065)
0xa2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa30: Pop(3)
0xa31: Return(); Pop(0)

0xa32: Push((int) 11054)
0xa33: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa34: IF (Stack[-1] == 0) GOTO 0xa49; Pop(1)

0xa35: PushEmpty(string)
0xa36: Stack[-1] = "Neutral"
0xa37: Call 0x9d5

0xa38: Pop(1)
0xa39: Push((int) 10032)
0xa3a: @@ SetMessage(Stack[-1])
0xa3b: Pop(1)
0xa3c: @@ ClearReplies()
0xa3d: Pop(0)
0xa3e: Push((int) 10033)
0xa3f: Push((int) 11056)
0xa40: Push((int) 11055)
0xa41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa42: Pop(3)
0xa43: Push((int) 10038)
0xa44: Push((int) 11056)
0xa45: Push((int) 11060)
0xa46: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa47: Pop(3)
0xa48: Return(); Pop(0)

0xa49: Push((int) 11056)
0xa4a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa4b: IF (Stack[-1] == 0) GOTO 0xa65; Pop(1)

0xa4c: PushEmpty(string)
0xa4d: Stack[-1] = "Neutral"
0xa4e: Call 0x9d5

0xa4f: Pop(1)
0xa50: Push((int) 10034)
0xa51: @@ SetMessage(Stack[-1])
0xa52: Pop(1)
0xa53: @@ ClearReplies()
0xa54: Pop(0)
0xa55: Push((int) 10035)
0xa56: Push((int) -1)
0xa57: Push((int) 11057)
0xa58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa59: Pop(3)
0xa5a: Push((int) 10036)
0xa5b: Push((int) -1)
0xa5c: Push((int) 11058)
0xa5d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5e: Pop(3)
0xa5f: Push((int) 10037)
0xa60: Push((int) -1)
0xa61: Push((int) 11059)
0xa62: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa63: Pop(3)
0xa64: Return(); Pop(0)

0xa65: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa66: PushEmpty(bool)
0xa67: Call 0xf6f

0xa68: Pop(0)
0xa69: IF (Stack[-1] == 0) GOTO 0xa6d; Pop(1)

0xa6a: @ lshStopAnimation()
0xa6b: Pop(0)
0xa6c: GOTO 0xa6f

0xa6d: @ StopAnimation()
0xa6e: Pop(0)
0xa6f: Return(); Pop(0)

0xa70: GOTO 0x9e6

0xa71: Return(); Pop(0)

0xa72: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xa73: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa74: PushEmpty(bool, object)
0xa75: Stack[-1] = Stack[-11]
0xa76: Call 0xebc

0xa77: Pop(1)
0xa78: Pop(1); Push((bool) Stack[-1] == 0)
0xa79: IF (Stack[-1] == 0) GOTO 0xa7c; Pop(1)

0xa7a: Stack[-10] = (int) -2
0xa7b: Return(); Pop(8)

0xa7c: @ CreateDialog(Stack[-4])
0xa7d: Pop(0)
0xa7e: PushEmpty(int)
0xa7f: Call 0xf6b

0xa80: Pop(0)
0xa81: @@ SetNPCName(Stack[-1])
0xa82: Pop(1)
0xa83: PushEmpty(string)
0xa84: Call 0xf6d

0xa85: Pop(0)
0xa86: @@ SetPhoto(Stack[-1])
0xa87: Pop(1)
0xa88: PushEmpty(int)
0xa89: Call 0x124f

0xa8a: Pop(0)
0xa8b: @@ SetPlayerName(Stack[-1])
0xa8c: Pop(1)
0xa8d: Stack[-2] = (int) -1
0xa8e: @ IsOverrideActive(Stack[-3])
0xa8f: Pop(0)
0xa90: Push(Stack[-3])
0xa91: IF (Stack[-1] == 0) GOTO 0xa94; Pop(1)

0xa92: Stack[-10] = (int) -2
0xa93: Return(); Pop(8)

0xa94: @ DoDialog(Stack[-4])
0xa95: Pop(0)
0xa96: PushEmpty(object, object)
0xa97: Stack[-2] = Stack[-11]
0xa98: Stack[-1] = Stack[-6]
0xa99: Push(-2, 4); TaskCall(11)
0xa9a: Call 0xab1

0xa9b: Pop(-2, 4); TaskReturn
0xa9c: Pop(2)
0xa9d: @@ IsDialogEnd(Stack[-1])
0xa9e: Pop(0)
0xa9f: Pop(0); Push((bool) Stack[-1] == 0)
0xaa0: IF (Stack[-1] == 0) GOTO 0xaa6; Pop(1)

0xaa1: @ sync()
0xaa2: Pop(0)
0xaa3: @@ IsDialogEnd(Stack[-1])
0xaa4: Pop(0)
0xaa5: GOTO 0xa9f

0xaa6: PushEmpty(object)
0xaa7: Stack[-1] = Stack[-10]
0xaa8: Call 0xef4

0xaa9: Pop(1)
0xaaa: @ StopDialog(Stack[-4])
0xaab: Pop(0)
0xaac: @@ GetReturnValue(Stack[-2])
0xaad: Pop(0)
0xaae: Stack[-10] = Stack[-2]
0xaaf: Return(); Pop(8)

0xab0: Stack[-4] = 0
0xab1: PushEmpty()
0xab2: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xab3: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xab4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xab5: Push((int) 1)
0xab6: IF (Stack[-1] == 0) GOTO 0xaf9; Pop(1)

0xab7: PushEmpty(string)
0xab8: Stack[-1] = "Neutral"
0xab9: Call 0xb17

0xaba: Pop(1)
0xabb: Push((int) 13353)
0xabc: @@ SetMessage(Stack[-1])
0xabd: Pop(1)
0xabe: @@ ClearReplies()
0xabf: Pop(0)
0xac0: PushEmpty(bool)
0xac1: Stack[-1] = (bool) 0
0xac2: PushEmpty(bool, object)
0xac3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xac4: Call 0x1158

0xac5: Pop(1)
0xac6: IF (Stack[-1] == 0) GOTO 0xacd; Pop(1)

0xac7: PushEmpty(bool, object)
0xac8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xac9: Call 0x114c

0xaca: Pop(1)
0xacb: IF (Stack[-1] == 0) GOTO 0xacd; Pop(1)

0xacc: Stack[-1] = (bool) 1
0xacd: IF (Stack[-1] == 0) GOTO 0xad3; Pop(1)

0xace: Push((int) 13355)
0xacf: Push((int) 14598)
0xad0: Push((int) 14587)
0xad1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad2: Pop(3)
0xad3: PushEmpty(bool)
0xad4: Stack[-1] = (bool) 0
0xad5: PushEmpty(bool, object)
0xad6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xad7: Call 0x1158

0xad8: Pop(1)
0xad9: Pop(1); Push((bool) Stack[-1] == 0)
0xada: IF (Stack[-1] == 0) GOTO 0xae1; Pop(1)

0xadb: PushEmpty(bool, object)
0xadc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xadd: Call 0x114c

0xade: Pop(1)
0xadf: IF (Stack[-1] == 0) GOTO 0xae1; Pop(1)

0xae0: Stack[-1] = (bool) 1
0xae1: IF (Stack[-1] == 0) GOTO 0xae7; Pop(1)

0xae2: Push((int) 13374)
0xae3: Push((int) 14607)
0xae4: Push((int) 14606)
0xae5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae6: Pop(3)
0xae7: PushEmpty(bool, object)
0xae8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xae9: Call 0x1164

0xaea: Pop(1)
0xaeb: IF (Stack[-1] == 0) GOTO 0xaf1; Pop(1)

0xaec: Push((int) 13390)
0xaed: Push((int) 14625)
0xaee: Push((int) 14624)
0xaef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf0: Pop(3)
0xaf1: Push((int) 13354)
0xaf2: Push((int) -1)
0xaf3: Push((int) 14586)
0xaf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf5: Pop(3)
0xaf6: GOTO 0xaf9

0xaf7: Return(); Pop(0)

0xaf8: GOTO 0xab5

0xaf9: PushEmpty(bool)
0xafa: Call 0xf6f

0xafb: Pop(0)
0xafc: IF (Stack[-1] == 0) GOTO 0xb08; Pop(1)

0xafd: @ lshWaitForAnimEnd()
0xafe: Pop(0)
0xaff: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb00: IF (Stack[-1] == 0) GOTO 0xb02; Pop(1)

0xb01: GOTO 0xb07

0xb02: PushEmpty(string)
0xb03: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb04: Call 0xef8

0xb05: Pop(1)
0xb06: GOTO 0xafd

0xb07: GOTO 0xb16

0xb08: Push("all")
0xb09: Push("idle")
0xb0a: @ PlayAnimation(Stack[-2], Stack[-1])
0xb0b: Pop(2)
0xb0c: @ WaitForAnimEnd()
0xb0d: Pop(0)
0xb0e: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb0f: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xb10: GOTO 0xb16

0xb11: Push("all")
0xb12: Push("idle")
0xb13: @ PlayAnimation(Stack[-2], Stack[-1])
0xb14: Pop(2)
0xb15: GOTO 0xb0c

0xb16: Return(); Pop(0)

0xb17: PushEmpty()
0xb18: PushEmpty(bool)
0xb19: Call 0xf6f

0xb1a: Pop(0)
0xb1b: Pop(1); Push((bool) Stack[-1] == 0)
0xb1c: IF (Stack[-1] == 0) GOTO 0xb1e; Pop(1)

0xb1d: Return(); Pop(0)

0xb1e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb1f: IF (Stack[-1] == 0) GOTO 0xb21; Pop(1)

0xb20: Return(); Pop(0)

0xb21: PushEmpty(string)
0xb22: Stack[-1] = Stack[-2]
0xb23: Call 0xef8

0xb24: Pop(1)
0xb25: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb26: Return(); Pop(0)

0xb27: PushEmpty()
0xb28: Push((int) 1)
0xb29: IF (Stack[-1] == 0) GOTO 0xc6e; Pop(1)

0xb2a: PushEmpty()
0xb2b: Call 0xf0a

0xb2c: Pop(0)
0xb2d: Push((int) 14602)
0xb2e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb2f: IF (Stack[-1] == 0) GOTO 0xb3a; Pop(1)

0xb30: PushEmpty(object, object)
0xb31: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb32: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb33: Call 0x1043

0xb34: Pop(2)
0xb35: PushEmpty(object, object)
0xb36: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb37: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb38: Call 0x1008

0xb39: Pop(2)
0xb3a: Push((int) 14605)
0xb3b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3c: IF (Stack[-1] == 0) GOTO 0xb42; Pop(1)

0xb3d: PushEmpty(object, object)
0xb3e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb3f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb40: Call 0x1043

0xb41: Pop(2)
0xb42: Push((int) 14608)
0xb43: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb44: IF (Stack[-1] == 0) GOTO 0xb4a; Pop(1)

0xb45: PushEmpty(object, object)
0xb46: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb47: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb48: Call 0x1008

0xb49: Pop(2)
0xb4a: Push((int) 14626)
0xb4b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb4c: IF (Stack[-1] == 0) GOTO 0xb61; Pop(1)

0xb4d: PushEmpty(object, object)
0xb4e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb50: Call 0x1011

0xb51: Pop(2)
0xb52: PushEmpty(object, object)
0xb53: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb54: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb55: Call 0x1017

0xb56: Pop(2)
0xb57: PushEmpty(object, object)
0xb58: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb59: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5a: Call 0x1049

0xb5b: Pop(2)
0xb5c: PushEmpty(object, object)
0xb5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5f: Call 0xf71

0xb60: Pop(2)
0xb61: Push((int) 14585)
0xb62: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb63: IF (Stack[-1] == 0) GOTO 0xba4; Pop(1)

0xb64: PushEmpty(string)
0xb65: Stack[-1] = "Neutral"
0xb66: Call 0xb17

0xb67: Pop(1)
0xb68: Push((int) 13353)
0xb69: @@ SetMessage(Stack[-1])
0xb6a: Pop(1)
0xb6b: @@ ClearReplies()
0xb6c: Pop(0)
0xb6d: PushEmpty(bool)
0xb6e: Stack[-1] = (bool) 0
0xb6f: PushEmpty(bool, object)
0xb70: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb71: Call 0x1158

0xb72: Pop(1)
0xb73: IF (Stack[-1] == 0) GOTO 0xb7a; Pop(1)

0xb74: PushEmpty(bool, object)
0xb75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb76: Call 0x114c

0xb77: Pop(1)
0xb78: IF (Stack[-1] == 0) GOTO 0xb7a; Pop(1)

0xb79: Stack[-1] = (bool) 1
0xb7a: IF (Stack[-1] == 0) GOTO 0xb80; Pop(1)

0xb7b: Push((int) 13355)
0xb7c: Push((int) 14598)
0xb7d: Push((int) 14587)
0xb7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7f: Pop(3)
0xb80: PushEmpty(bool)
0xb81: Stack[-1] = (bool) 0
0xb82: PushEmpty(bool, object)
0xb83: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb84: Call 0x1158

0xb85: Pop(1)
0xb86: Pop(1); Push((bool) Stack[-1] == 0)
0xb87: IF (Stack[-1] == 0) GOTO 0xb8e; Pop(1)

0xb88: PushEmpty(bool, object)
0xb89: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb8a: Call 0x114c

0xb8b: Pop(1)
0xb8c: IF (Stack[-1] == 0) GOTO 0xb8e; Pop(1)

0xb8d: Stack[-1] = (bool) 1
0xb8e: IF (Stack[-1] == 0) GOTO 0xb94; Pop(1)

0xb8f: Push((int) 13374)
0xb90: Push((int) 14607)
0xb91: Push((int) 14606)
0xb92: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb93: Pop(3)
0xb94: PushEmpty(bool, object)
0xb95: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb96: Call 0x1164

0xb97: Pop(1)
0xb98: IF (Stack[-1] == 0) GOTO 0xb9e; Pop(1)

0xb99: Push((int) 13390)
0xb9a: Push((int) 14625)
0xb9b: Push((int) 14624)
0xb9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9d: Pop(3)
0xb9e: Push((int) 13354)
0xb9f: Push((int) -1)
0xba0: Push((int) 14586)
0xba1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba2: Pop(3)
0xba3: Return(); Pop(0)

0xba4: Push((int) 14625)
0xba5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xba6: IF (Stack[-1] == 0) GOTO 0xbb6; Pop(1)

0xba7: PushEmpty(string)
0xba8: Stack[-1] = "Neutral"
0xba9: Call 0xb17

0xbaa: Pop(1)
0xbab: Push((int) 13391)
0xbac: @@ SetMessage(Stack[-1])
0xbad: Pop(1)
0xbae: @@ ClearReplies()
0xbaf: Pop(0)
0xbb0: Push((int) 13392)
0xbb1: Push((int) -1)
0xbb2: Push((int) 14626)
0xbb3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb4: Pop(3)
0xbb5: Return(); Pop(0)

0xbb6: Push((int) 14607)
0xbb7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb8: IF (Stack[-1] == 0) GOTO 0xbc8; Pop(1)

0xbb9: PushEmpty(string)
0xbba: Stack[-1] = "Neutral"
0xbbb: Call 0xb17

0xbbc: Pop(1)
0xbbd: Push((int) 13375)
0xbbe: @@ SetMessage(Stack[-1])
0xbbf: Pop(1)
0xbc0: @@ ClearReplies()
0xbc1: Pop(0)
0xbc2: Push((int) 13376)
0xbc3: Push((int) -1)
0xbc4: Push((int) 14608)
0xbc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc6: Pop(3)
0xbc7: Return(); Pop(0)

0xbc8: Push((int) 14598)
0xbc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbca: IF (Stack[-1] == 0) GOTO 0xbda; Pop(1)

0xbcb: PushEmpty(string)
0xbcc: Stack[-1] = "Neutral"
0xbcd: Call 0xb17

0xbce: Pop(1)
0xbcf: Push((int) 13366)
0xbd0: @@ SetMessage(Stack[-1])
0xbd1: Pop(1)
0xbd2: @@ ClearReplies()
0xbd3: Pop(0)
0xbd4: Push((int) 13367)
0xbd5: Push((int) 14588)
0xbd6: Push((int) 14599)
0xbd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd8: Pop(3)
0xbd9: Return(); Pop(0)

0xbda: Push((int) 14588)
0xbdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbdc: IF (Stack[-1] == 0) GOTO 0xbec; Pop(1)

0xbdd: PushEmpty(string)
0xbde: Stack[-1] = "Neutral"
0xbdf: Call 0xb17

0xbe0: Pop(1)
0xbe1: Push((int) 13356)
0xbe2: @@ SetMessage(Stack[-1])
0xbe3: Pop(1)
0xbe4: @@ ClearReplies()
0xbe5: Pop(0)
0xbe6: Push((int) 13357)
0xbe7: Push((int) 14590)
0xbe8: Push((int) 14589)
0xbe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbea: Pop(3)
0xbeb: Return(); Pop(0)

0xbec: Push((int) 14590)
0xbed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbee: IF (Stack[-1] == 0) GOTO 0xbfe; Pop(1)

0xbef: PushEmpty(string)
0xbf0: Stack[-1] = "Neutral"
0xbf1: Call 0xb17

0xbf2: Pop(1)
0xbf3: Push((int) 13358)
0xbf4: @@ SetMessage(Stack[-1])
0xbf5: Pop(1)
0xbf6: @@ ClearReplies()
0xbf7: Pop(0)
0xbf8: Push((int) 13359)
0xbf9: Push((int) 14592)
0xbfa: Push((int) 14591)
0xbfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbfc: Pop(3)
0xbfd: Return(); Pop(0)

0xbfe: Push((int) 14592)
0xbff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc00: IF (Stack[-1] == 0) GOTO 0xc10; Pop(1)

0xc01: PushEmpty(string)
0xc02: Stack[-1] = "Neutral"
0xc03: Call 0xb17

0xc04: Pop(1)
0xc05: Push((int) 13360)
0xc06: @@ SetMessage(Stack[-1])
0xc07: Pop(1)
0xc08: @@ ClearReplies()
0xc09: Pop(0)
0xc0a: Push((int) 13361)
0xc0b: Push((int) 14594)
0xc0c: Push((int) 14593)
0xc0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0e: Pop(3)
0xc0f: Return(); Pop(0)

0xc10: Push((int) 14594)
0xc11: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc12: IF (Stack[-1] == 0) GOTO 0xc27; Pop(1)

0xc13: PushEmpty(string)
0xc14: Stack[-1] = "Neutral"
0xc15: Call 0xb17

0xc16: Pop(1)
0xc17: Push((int) 13362)
0xc18: @@ SetMessage(Stack[-1])
0xc19: Pop(1)
0xc1a: @@ ClearReplies()
0xc1b: Pop(0)
0xc1c: Push((int) 13364)
0xc1d: Push((int) 14597)
0xc1e: Push((int) 14596)
0xc1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc20: Pop(3)
0xc21: Push((int) 13363)
0xc22: Push((int) -1)
0xc23: Push((int) 14595)
0xc24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc25: Pop(3)
0xc26: Return(); Pop(0)

0xc27: Push((int) 14597)
0xc28: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc29: IF (Stack[-1] == 0) GOTO 0xc3e; Pop(1)

0xc2a: PushEmpty(string)
0xc2b: Stack[-1] = "Neutral"
0xc2c: Call 0xb17

0xc2d: Pop(1)
0xc2e: Push((int) 13365)
0xc2f: @@ SetMessage(Stack[-1])
0xc30: Pop(1)
0xc31: @@ ClearReplies()
0xc32: Pop(0)
0xc33: Push((int) 13368)
0xc34: Push((int) 14601)
0xc35: Push((int) 14600)
0xc36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc37: Pop(3)
0xc38: Push((int) 13371)
0xc39: Push((int) 14604)
0xc3a: Push((int) 14603)
0xc3b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3c: Pop(3)
0xc3d: Return(); Pop(0)

0xc3e: Push((int) 14604)
0xc3f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc40: IF (Stack[-1] == 0) GOTO 0xc50; Pop(1)

0xc41: PushEmpty(string)
0xc42: Stack[-1] = "Neutral"
0xc43: Call 0xb17

0xc44: Pop(1)
0xc45: Push((int) 13372)
0xc46: @@ SetMessage(Stack[-1])
0xc47: Pop(1)
0xc48: @@ ClearReplies()
0xc49: Pop(0)
0xc4a: Push((int) 13373)
0xc4b: Push((int) -1)
0xc4c: Push((int) 14605)
0xc4d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4e: Pop(3)
0xc4f: Return(); Pop(0)

0xc50: Push((int) 14601)
0xc51: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc52: IF (Stack[-1] == 0) GOTO 0xc62; Pop(1)

0xc53: PushEmpty(string)
0xc54: Stack[-1] = "Neutral"
0xc55: Call 0xb17

0xc56: Pop(1)
0xc57: Push((int) 13369)
0xc58: @@ SetMessage(Stack[-1])
0xc59: Pop(1)
0xc5a: @@ ClearReplies()
0xc5b: Pop(0)
0xc5c: Push((int) 13370)
0xc5d: Push((int) -1)
0xc5e: Push((int) 14602)
0xc5f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc60: Pop(3)
0xc61: Return(); Pop(0)

0xc62: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc63: PushEmpty(bool)
0xc64: Call 0xf6f

0xc65: Pop(0)
0xc66: IF (Stack[-1] == 0) GOTO 0xc6a; Pop(1)

0xc67: @ lshStopAnimation()
0xc68: Pop(0)
0xc69: GOTO 0xc6c

0xc6a: @ StopAnimation()
0xc6b: Pop(0)
0xc6c: Return(); Pop(0)

0xc6d: GOTO 0xb28

0xc6e: Return(); Pop(0)

0xc6f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xc70: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xc71: PushEmpty(bool, object)
0xc72: Stack[-1] = Stack[-11]
0xc73: Call 0xebc

0xc74: Pop(1)
0xc75: Pop(1); Push((bool) Stack[-1] == 0)
0xc76: IF (Stack[-1] == 0) GOTO 0xc79; Pop(1)

0xc77: Stack[-10] = (int) -2
0xc78: Return(); Pop(8)

0xc79: @ CreateDialog(Stack[-4])
0xc7a: Pop(0)
0xc7b: PushEmpty(int)
0xc7c: Call 0xf6b

0xc7d: Pop(0)
0xc7e: @@ SetNPCName(Stack[-1])
0xc7f: Pop(1)
0xc80: PushEmpty(string)
0xc81: Call 0xf6d

0xc82: Pop(0)
0xc83: @@ SetPhoto(Stack[-1])
0xc84: Pop(1)
0xc85: PushEmpty(int)
0xc86: Call 0x124f

0xc87: Pop(0)
0xc88: @@ SetPlayerName(Stack[-1])
0xc89: Pop(1)
0xc8a: Stack[-2] = (int) -1
0xc8b: @ IsOverrideActive(Stack[-3])
0xc8c: Pop(0)
0xc8d: Push(Stack[-3])
0xc8e: IF (Stack[-1] == 0) GOTO 0xc91; Pop(1)

0xc8f: Stack[-10] = (int) -2
0xc90: Return(); Pop(8)

0xc91: @ DoDialog(Stack[-4])
0xc92: Pop(0)
0xc93: PushEmpty(object, object)
0xc94: Stack[-2] = Stack[-11]
0xc95: Stack[-1] = Stack[-6]
0xc96: Push(-2, 4); TaskCall(13)
0xc97: Call 0xcae

0xc98: Pop(-2, 4); TaskReturn
0xc99: Pop(2)
0xc9a: @@ IsDialogEnd(Stack[-1])
0xc9b: Pop(0)
0xc9c: Pop(0); Push((bool) Stack[-1] == 0)
0xc9d: IF (Stack[-1] == 0) GOTO 0xca3; Pop(1)

0xc9e: @ sync()
0xc9f: Pop(0)
0xca0: @@ IsDialogEnd(Stack[-1])
0xca1: Pop(0)
0xca2: GOTO 0xc9c

0xca3: PushEmpty(object)
0xca4: Stack[-1] = Stack[-10]
0xca5: Call 0xef4

0xca6: Pop(1)
0xca7: @ StopDialog(Stack[-4])
0xca8: Pop(0)
0xca9: @@ GetReturnValue(Stack[-2])
0xcaa: Pop(0)
0xcab: Stack[-10] = Stack[-2]
0xcac: Return(); Pop(8)

0xcad: Stack[-4] = 0
0xcae: PushEmpty()
0xcaf: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xcb0: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xcb1: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xcb2: Push((int) 1)
0xcb3: IF (Stack[-1] == 0) GOTO 0xd00; Pop(1)

0xcb4: PushEmpty(bool)
0xcb5: Stack[-1] = (bool) 0
0xcb6: PushEmpty(bool, object)
0xcb7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb8: Call 0x1194

0xcb9: Pop(1)
0xcba: IF (Stack[-1] == 0) GOTO 0xcc1; Pop(1)

0xcbb: PushEmpty(bool, object)
0xcbc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcbd: Call 0x11a0

0xcbe: Pop(1)
0xcbf: IF (Stack[-1] == 0) GOTO 0xcc1; Pop(1)

0xcc0: Stack[-1] = (bool) 1
0xcc1: IF (Stack[-1] == 0) GOTO 0xcdb; Pop(1)

0xcc2: PushEmpty(object, object)
0xcc3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcc4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc5: Call 0x1054

0xcc6: Pop(2)
0xcc7: PushEmpty(string)
0xcc8: Stack[-1] = "Neutral"
0xcc9: Call 0xd1e

0xcca: Pop(1)
0xccb: Push((int) 14462)
0xccc: @@ SetMessage(Stack[-1])
0xccd: Pop(1)
0xcce: @@ ClearReplies()
0xccf: Pop(0)
0xcd0: Push((int) 14463)
0xcd1: Push((int) 15695)
0xcd2: Push((int) 15694)
0xcd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd4: Pop(3)
0xcd5: Push((int) 14473)
0xcd6: Push((int) 15695)
0xcd7: Push((int) 15705)
0xcd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd9: Pop(3)
0xcda: GOTO 0xd00

0xcdb: PushEmpty(string)
0xcdc: Stack[-1] = "Neutral"
0xcdd: Call 0xd1e

0xcde: Pop(1)
0xcdf: Push((int) 14474)
0xce0: @@ SetMessage(Stack[-1])
0xce1: Pop(1)
0xce2: @@ ClearReplies()
0xce3: Pop(0)
0xce4: PushEmpty(bool, object)
0xce5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xce6: Call 0x11b8

0xce7: Pop(1)
0xce8: IF (Stack[-1] == 0) GOTO 0xcee; Pop(1)

0xce9: Push((int) 14475)
0xcea: Push((int) 15709)
0xceb: Push((int) 15708)
0xcec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xced: Pop(3)
0xcee: Push((int) 14500)
0xcef: Push((int) -1)
0xcf0: Push((int) 15736)
0xcf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf2: Pop(3)
0xcf3: PushEmpty(bool, object)
0xcf4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcf5: Call 0x11ac

0xcf6: Pop(1)
0xcf7: IF (Stack[-1] == 0) GOTO 0xcfd; Pop(1)

0xcf8: Push((int) 14501)
0xcf9: Push((int) -1)
0xcfa: Push((int) 15737)
0xcfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfc: Pop(3)
0xcfd: GOTO 0xd00

0xcfe: Return(); Pop(0)

0xcff: GOTO 0xcb2

0xd00: PushEmpty(bool)
0xd01: Call 0xf6f

0xd02: Pop(0)
0xd03: IF (Stack[-1] == 0) GOTO 0xd0f; Pop(1)

0xd04: @ lshWaitForAnimEnd()
0xd05: Pop(0)
0xd06: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd07: IF (Stack[-1] == 0) GOTO 0xd09; Pop(1)

0xd08: GOTO 0xd0e

0xd09: PushEmpty(string)
0xd0a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd0b: Call 0xef8

0xd0c: Pop(1)
0xd0d: GOTO 0xd04

0xd0e: GOTO 0xd1d

0xd0f: Push("all")
0xd10: Push("idle")
0xd11: @ PlayAnimation(Stack[-2], Stack[-1])
0xd12: Pop(2)
0xd13: @ WaitForAnimEnd()
0xd14: Pop(0)
0xd15: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd16: IF (Stack[-1] == 0) GOTO 0xd18; Pop(1)

0xd17: GOTO 0xd1d

0xd18: Push("all")
0xd19: Push("idle")
0xd1a: @ PlayAnimation(Stack[-2], Stack[-1])
0xd1b: Pop(2)
0xd1c: GOTO 0xd13

0xd1d: Return(); Pop(0)

0xd1e: PushEmpty()
0xd1f: PushEmpty(bool)
0xd20: Call 0xf6f

0xd21: Pop(0)
0xd22: Pop(1); Push((bool) Stack[-1] == 0)
0xd23: IF (Stack[-1] == 0) GOTO 0xd25; Pop(1)

0xd24: Return(); Pop(0)

0xd25: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd26: IF (Stack[-1] == 0) GOTO 0xd28; Pop(1)

0xd27: Return(); Pop(0)

0xd28: PushEmpty(string)
0xd29: Stack[-1] = Stack[-2]
0xd2a: Call 0xef8

0xd2b: Pop(1)
0xd2c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd2d: Return(); Pop(0)

0xd2e: PushEmpty()
0xd2f: Push((int) 1)
0xd30: IF (Stack[-1] == 0) GOTO 0xeaa; Pop(1)

0xd31: PushEmpty()
0xd32: Call 0xf0a

0xd33: Pop(0)
0xd34: Push((int) 15708)
0xd35: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd36: IF (Stack[-1] == 0) GOTO 0xd3c; Pop(1)

0xd37: PushEmpty(object, object)
0xd38: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd39: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3a: Call 0x105a

0xd3b: Pop(2)
0xd3c: Push((int) 15693)
0xd3d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd3e: IF (Stack[-1] == 0) GOTO 0xd89; Pop(1)

0xd3f: PushEmpty(bool)
0xd40: Stack[-1] = (bool) 0
0xd41: PushEmpty(bool, object)
0xd42: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd43: Call 0x1194

0xd44: Pop(1)
0xd45: IF (Stack[-1] == 0) GOTO 0xd4c; Pop(1)

0xd46: PushEmpty(bool, object)
0xd47: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd48: Call 0x11a0

0xd49: Pop(1)
0xd4a: IF (Stack[-1] == 0) GOTO 0xd4c; Pop(1)

0xd4b: Stack[-1] = (bool) 1
0xd4c: IF (Stack[-1] == 0) GOTO 0xd66; Pop(1)

0xd4d: PushEmpty(object, object)
0xd4e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd4f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd50: Call 0x1054

0xd51: Pop(2)
0xd52: PushEmpty(string)
0xd53: Stack[-1] = "Neutral"
0xd54: Call 0xd1e

0xd55: Pop(1)
0xd56: Push((int) 14462)
0xd57: @@ SetMessage(Stack[-1])
0xd58: Pop(1)
0xd59: @@ ClearReplies()
0xd5a: Pop(0)
0xd5b: Push((int) 14463)
0xd5c: Push((int) 15695)
0xd5d: Push((int) 15694)
0xd5e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5f: Pop(3)
0xd60: Push((int) 14473)
0xd61: Push((int) 15695)
0xd62: Push((int) 15705)
0xd63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd64: Pop(3)
0xd65: Return(); Pop(0)

0xd66: PushEmpty(string)
0xd67: Stack[-1] = "Neutral"
0xd68: Call 0xd1e

0xd69: Pop(1)
0xd6a: Push((int) 14474)
0xd6b: @@ SetMessage(Stack[-1])
0xd6c: Pop(1)
0xd6d: @@ ClearReplies()
0xd6e: Pop(0)
0xd6f: PushEmpty(bool, object)
0xd70: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd71: Call 0x11b8

0xd72: Pop(1)
0xd73: IF (Stack[-1] == 0) GOTO 0xd79; Pop(1)

0xd74: Push((int) 14475)
0xd75: Push((int) 15709)
0xd76: Push((int) 15708)
0xd77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd78: Pop(3)
0xd79: Push((int) 14500)
0xd7a: Push((int) -1)
0xd7b: Push((int) 15736)
0xd7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7d: Pop(3)
0xd7e: PushEmpty(bool, object)
0xd7f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd80: Call 0x11ac

0xd81: Pop(1)
0xd82: IF (Stack[-1] == 0) GOTO 0xd88; Pop(1)

0xd83: Push((int) 14501)
0xd84: Push((int) -1)
0xd85: Push((int) 15737)
0xd86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd87: Pop(3)
0xd88: Return(); Pop(0)

0xd89: Push((int) 15709)
0xd8a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd8b: IF (Stack[-1] == 0) GOTO 0xda0; Pop(1)

0xd8c: PushEmpty(string)
0xd8d: Stack[-1] = "Neutral"
0xd8e: Call 0xd1e

0xd8f: Pop(1)
0xd90: Push((int) 14476)
0xd91: @@ SetMessage(Stack[-1])
0xd92: Pop(1)
0xd93: @@ ClearReplies()
0xd94: Pop(0)
0xd95: Push((int) 14477)
0xd96: Push((int) 15711)
0xd97: Push((int) 15710)
0xd98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd99: Pop(3)
0xd9a: Push((int) 14499)
0xd9b: Push((int) 15711)
0xd9c: Push((int) 15734)
0xd9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9e: Pop(3)
0xd9f: Return(); Pop(0)

0xda0: Push((int) 15711)
0xda1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda2: IF (Stack[-1] == 0) GOTO 0xdb7; Pop(1)

0xda3: PushEmpty(string)
0xda4: Stack[-1] = "Neutral"
0xda5: Call 0xd1e

0xda6: Pop(1)
0xda7: Push((int) 14478)
0xda8: @@ SetMessage(Stack[-1])
0xda9: Pop(1)
0xdaa: @@ ClearReplies()
0xdab: Pop(0)
0xdac: Push((int) 14479)
0xdad: Push((int) 15713)
0xdae: Push((int) 15712)
0xdaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb0: Pop(3)
0xdb1: Push((int) 14494)
0xdb2: Push((int) 15729)
0xdb3: Push((int) 15728)
0xdb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb5: Pop(3)
0xdb6: Return(); Pop(0)

0xdb7: Push((int) 15729)
0xdb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb9: IF (Stack[-1] == 0) GOTO 0xdc9; Pop(1)

0xdba: PushEmpty(string)
0xdbb: Stack[-1] = "Neutral"
0xdbc: Call 0xd1e

0xdbd: Pop(1)
0xdbe: Push((int) 14495)
0xdbf: @@ SetMessage(Stack[-1])
0xdc0: Pop(1)
0xdc1: @@ ClearReplies()
0xdc2: Pop(0)
0xdc3: Push((int) 14496)
0xdc4: Push((int) 15731)
0xdc5: Push((int) 15730)
0xdc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc7: Pop(3)
0xdc8: Return(); Pop(0)

0xdc9: Push((int) 15731)
0xdca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdcb: IF (Stack[-1] == 0) GOTO 0xddb; Pop(1)

0xdcc: PushEmpty(string)
0xdcd: Stack[-1] = "Neutral"
0xdce: Call 0xd1e

0xdcf: Pop(1)
0xdd0: Push((int) 14497)
0xdd1: @@ SetMessage(Stack[-1])
0xdd2: Pop(1)
0xdd3: @@ ClearReplies()
0xdd4: Pop(0)
0xdd5: Push((int) 14498)
0xdd6: Push((int) 15713)
0xdd7: Push((int) 15732)
0xdd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd9: Pop(3)
0xdda: Return(); Pop(0)

0xddb: Push((int) 15713)
0xddc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xddd: IF (Stack[-1] == 0) GOTO 0xded; Pop(1)

0xdde: PushEmpty(string)
0xddf: Stack[-1] = "Neutral"
0xde0: Call 0xd1e

0xde1: Pop(1)
0xde2: Push((int) 14480)
0xde3: @@ SetMessage(Stack[-1])
0xde4: Pop(1)
0xde5: @@ ClearReplies()
0xde6: Pop(0)
0xde7: Push((int) 14481)
0xde8: Push((int) 15715)
0xde9: Push((int) 15714)
0xdea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdeb: Pop(3)
0xdec: Return(); Pop(0)

0xded: Push((int) 15715)
0xdee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdef: IF (Stack[-1] == 0) GOTO 0xdff; Pop(1)

0xdf0: PushEmpty(string)
0xdf1: Stack[-1] = "Neutral"
0xdf2: Call 0xd1e

0xdf3: Pop(1)
0xdf4: Push((int) 14482)
0xdf5: @@ SetMessage(Stack[-1])
0xdf6: Pop(1)
0xdf7: @@ ClearReplies()
0xdf8: Pop(0)
0xdf9: Push((int) 14483)
0xdfa: Push((int) 15717)
0xdfb: Push((int) 15716)
0xdfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdfd: Pop(3)
0xdfe: Return(); Pop(0)

0xdff: Push((int) 15717)
0xe00: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe01: IF (Stack[-1] == 0) GOTO 0xe11; Pop(1)

0xe02: PushEmpty(string)
0xe03: Stack[-1] = "Neutral"
0xe04: Call 0xd1e

0xe05: Pop(1)
0xe06: Push((int) 14484)
0xe07: @@ SetMessage(Stack[-1])
0xe08: Pop(1)
0xe09: @@ ClearReplies()
0xe0a: Pop(0)
0xe0b: Push((int) 14485)
0xe0c: Push((int) 15719)
0xe0d: Push((int) 15718)
0xe0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0f: Pop(3)
0xe10: Return(); Pop(0)

0xe11: Push((int) 15719)
0xe12: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe13: IF (Stack[-1] == 0) GOTO 0xe28; Pop(1)

0xe14: PushEmpty(string)
0xe15: Stack[-1] = "Neutral"
0xe16: Call 0xd1e

0xe17: Pop(1)
0xe18: Push((int) 14486)
0xe19: @@ SetMessage(Stack[-1])
0xe1a: Pop(1)
0xe1b: @@ ClearReplies()
0xe1c: Pop(0)
0xe1d: Push((int) 14487)
0xe1e: Push((int) 15721)
0xe1f: Push((int) 15720)
0xe20: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe21: Pop(3)
0xe22: Push((int) 14491)
0xe23: Push((int) 15725)
0xe24: Push((int) 15724)
0xe25: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe26: Pop(3)
0xe27: Return(); Pop(0)

0xe28: Push((int) 15725)
0xe29: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2a: IF (Stack[-1] == 0) GOTO 0xe3a; Pop(1)

0xe2b: PushEmpty(string)
0xe2c: Stack[-1] = "Neutral"
0xe2d: Call 0xd1e

0xe2e: Pop(1)
0xe2f: Push((int) 14492)
0xe30: @@ SetMessage(Stack[-1])
0xe31: Pop(1)
0xe32: @@ ClearReplies()
0xe33: Pop(0)
0xe34: Push((int) 14493)
0xe35: Push((int) 15721)
0xe36: Push((int) 15726)
0xe37: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe38: Pop(3)
0xe39: Return(); Pop(0)

0xe3a: Push((int) 15721)
0xe3b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe3c: IF (Stack[-1] == 0) GOTO 0xe51; Pop(1)

0xe3d: PushEmpty(string)
0xe3e: Stack[-1] = "Neutral"
0xe3f: Call 0xd1e

0xe40: Pop(1)
0xe41: Push((int) 14488)
0xe42: @@ SetMessage(Stack[-1])
0xe43: Pop(1)
0xe44: @@ ClearReplies()
0xe45: Pop(0)
0xe46: Push((int) 14489)
0xe47: Push((int) -1)
0xe48: Push((int) 15722)
0xe49: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4a: Pop(3)
0xe4b: Push((int) 14490)
0xe4c: Push((int) -1)
0xe4d: Push((int) 15723)
0xe4e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4f: Pop(3)
0xe50: Return(); Pop(0)

0xe51: Push((int) 15695)
0xe52: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe53: IF (Stack[-1] == 0) GOTO 0xe63; Pop(1)

0xe54: PushEmpty(string)
0xe55: Stack[-1] = "Neutral"
0xe56: Call 0xd1e

0xe57: Pop(1)
0xe58: Push((int) 14464)
0xe59: @@ SetMessage(Stack[-1])
0xe5a: Pop(1)
0xe5b: @@ ClearReplies()
0xe5c: Pop(0)
0xe5d: Push((int) 14465)
0xe5e: Push((int) 15697)
0xe5f: Push((int) 15696)
0xe60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe61: Pop(3)
0xe62: Return(); Pop(0)

0xe63: Push((int) 15697)
0xe64: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe65: IF (Stack[-1] == 0) GOTO 0xe75; Pop(1)

0xe66: PushEmpty(string)
0xe67: Stack[-1] = "Neutral"
0xe68: Call 0xd1e

0xe69: Pop(1)
0xe6a: Push((int) 14466)
0xe6b: @@ SetMessage(Stack[-1])
0xe6c: Pop(1)
0xe6d: @@ ClearReplies()
0xe6e: Pop(0)
0xe6f: Push((int) 14467)
0xe70: Push((int) 15699)
0xe71: Push((int) 15698)
0xe72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe73: Pop(3)
0xe74: Return(); Pop(0)

0xe75: Push((int) 15699)
0xe76: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe77: IF (Stack[-1] == 0) GOTO 0xe8c; Pop(1)

0xe78: PushEmpty(string)
0xe79: Stack[-1] = "Neutral"
0xe7a: Call 0xd1e

0xe7b: Pop(1)
0xe7c: Push((int) 14468)
0xe7d: @@ SetMessage(Stack[-1])
0xe7e: Pop(1)
0xe7f: @@ ClearReplies()
0xe80: Pop(0)
0xe81: Push((int) 14469)
0xe82: Push((int) 15701)
0xe83: Push((int) 15700)
0xe84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe85: Pop(3)
0xe86: Push((int) 14472)
0xe87: Push((int) 15701)
0xe88: Push((int) 15703)
0xe89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8a: Pop(3)
0xe8b: Return(); Pop(0)

0xe8c: Push((int) 15701)
0xe8d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe8e: IF (Stack[-1] == 0) GOTO 0xe9e; Pop(1)

0xe8f: PushEmpty(string)
0xe90: Stack[-1] = "Neutral"
0xe91: Call 0xd1e

0xe92: Pop(1)
0xe93: Push((int) 14470)
0xe94: @@ SetMessage(Stack[-1])
0xe95: Pop(1)
0xe96: @@ ClearReplies()
0xe97: Pop(0)
0xe98: Push((int) 14471)
0xe99: Push((int) -1)
0xe9a: Push((int) 15702)
0xe9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9c: Pop(3)
0xe9d: Return(); Pop(0)

0xe9e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe9f: PushEmpty(bool)
0xea0: Call 0xf6f

0xea1: Pop(0)
0xea2: IF (Stack[-1] == 0) GOTO 0xea6; Pop(1)

0xea3: @ lshStopAnimation()
0xea4: Pop(0)
0xea5: GOTO 0xea8

0xea6: @ StopAnimation()
0xea7: Pop(0)
0xea8: Return(); Pop(0)

0xea9: GOTO 0xd2f

0xeaa: Return(); Pop(0)

0xeab: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0xeac: @@ GetPosition(Stack[-4])
0xead: Pop(0)
0xeae: @ GetPosition(Stack[-3])
0xeaf: Pop(0)
0xeb0: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0xeb1: Push(CvectorIndex(Stack[-2], 0))
0xeb2: Push(CvectorIndex(Stack[-3], 2))
0xeb3: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xeb4: Pop(2)
0xeb5: Stack[-10] = Stack[-1]
0xeb6: Return(); Pop(8)

0xeb7: PushEmpty(bool, bool)
0xeb8: @ IsLoaded(Stack[-1])
0xeb9: Pop(0)
0xeba: Stack[-3] = Stack[-1]
0xebb: Return(); Pop(2)

0xebc: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0xebd: @@ GetPosition(Stack[-7])
0xebe: Pop(0)
0xebf: @@ GetEyesHeight(Stack[-8])
0xec0: Pop(0)
0xec1: Push(CvectorIndex(Stack[-7], 1))
0xec2: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xec3: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xec4: @ GetPosition(Stack[-6])
0xec5: Pop(0)
0xec6: @ GetEyesHeight(Stack[-8])
0xec7: Pop(0)
0xec8: Push(CvectorIndex(Stack[-6], 1))
0xec9: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xeca: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xecb: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0xecc: Push(CvectorIndex(Stack[-5], 1))
0xecd: Stack[-1] = (int) 0
0xece: CvectorIndex(Stack[-6], 1) = Stack[-1];
0xecf: Pop(0); Push(Stack[-5] | Stack[-5]);
0xed0: Pop(1); Push(Sqrt(Stack[-1]))
0xed1: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0xed2: Stack[-4] = -Stack[-5]; Pop(0);
0xed3: Push((int) 70)
0xed4: Pop(1); Push(Stack[-6] * Stack[-1]);
0xed5: PushEmpty(cvector, cvector)
0xed6: Push(CVector(0.0, 1.0, 0.0))
0xed7: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0xed8: Call 0xf11

0xed9: Pop(1)
0xeda: Push((int) 25)
0xedb: Pop(2); Push(Stack[-2] * Stack[-1]);
0xedc: Pop(2); Push(Stack[-2] + Stack[-1]);
0xedd: Push(CVector(0.0, 10.0, 0.0))
0xede: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0xedf: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0xee0: @ IsOverrideActive(Stack[-1])
0xee1: Pop(0)
0xee2: Push(Stack[-1])
0xee3: IF (Stack[-1] == 0) GOTO 0xee6; Pop(1)

0xee4: Stack[-18] = (bool) 0
0xee5: Return(); Pop(16)

0xee6: @ StopWorld()
0xee7: Pop(0)
0xee8: @ CameraTransit(Stack[-2], Stack[-4])
0xee9: Pop(0)
0xeea: Push(CvectorIndex(Stack[-3], 0))
0xeeb: Push(CvectorIndex(Stack[-4], 2))
0xeec: @ Rotate(Stack[-2], Stack[-1])
0xeed: Pop(2)
0xeee: @ CameraWaitForPlayFinish()
0xeef: Pop(0)
0xef0: @ ResumeWorld()
0xef1: Pop(0)
0xef2: Stack[-18] = (bool) 1
0xef3: Return(); Pop(16)

0xef4: PushEmpty()
0xef5: @ CameraSwitchToNormal()
0xef6: Pop(0)
0xef7: Return(); Pop(0)

0xef8: PushEmpty(float, float, float, float)
0xef9: Push("playing ")
0xefa: Pop(1); Push(Stack[-1] + Stack[-6]);
0xefb: @ Trace(Stack[-1])
0xefc: Pop(1)
0xefd: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0xefe: Pop(0)
0xeff: @ lshPlayAnimation(Stack[-2], Stack[-1])
0xf00: Pop(0)
0xf01: Push("start: ")
0xf02: Pop(1); Push(Stack[-1] + Stack[-3]);
0xf03: @ Trace(Stack[-1])
0xf04: Pop(1)
0xf05: Push("end: ")
0xf06: Pop(1); Push(Stack[-1] + Stack[-2]);
0xf07: @ Trace(Stack[-1])
0xf08: Pop(1)
0xf09: Return(); Pop(4)

0xf0a: PushEmpty(bool)
0xf0b: Call 0xf6f

0xf0c: Pop(0)
0xf0d: IF (Stack[-1] == 0) GOTO 0xf10; Pop(1)

0xf0e: @ lshStopSpeech()
0xf0f: Pop(0)
0xf10: Return(); Pop(0)

0xf11: PushEmpty(float, float)
0xf12: Pop(0); Push(Stack[-3] | Stack[-3]);
0xf13: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xf14: Push((float)0.0)
0xf15: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xf16: IF (Stack[-1] == 0) GOTO 0xf19; Pop(1)

0xf17: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xf18: Return(); Pop(2)

0xf19: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xf1a: Return(); Pop(2)

0xf1b: PushEmpty(int, int)
0xf1c: @ GetVariable(Stack[-3], Stack[-1])
0xf1d: Pop(0)
0xf1e: Stack[-4] = Stack[-1]
0xf1f: Return(); Pop(2)

0xf20: PushEmpty(int, int, bool, int, int, bool)
0xf21: @@ GetItemID(Stack[-3])
0xf22: Pop(0)
0xf23: Push("Category")
0xf24: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xf25: Pop(1)
0xf26: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xf27: Pop(0)
0xf28: Pop(0); Push((bool) Stack[-1] == 0)
0xf29: IF (Stack[-1] == 0) GOTO 0xf2c; Pop(1)

0xf2a: @@ DropItems(Stack[-8], Stack[-7])
0xf2b: Pop(0)
0xf2c: Return(); Pop(6)

0xf2d: PushEmpty(object, object)
0xf2e: @ CreateInvItem(Stack[-1])
0xf2f: Pop(0)
0xf30: @@ SetItemName(Stack[-4])
0xf31: Pop(0)
0xf32: PushEmpty(object, object, int)
0xf33: Stack[-3] = Stack[-8]
0xf34: Stack[-2] = Stack[-4]
0xf35: Stack[-1] = Stack[-6]
0xf36: Call 0xf20

0xf37: Pop(3)
0xf38: Return(); Pop(2)

0xf39: Stack[-1] = 0
0xf3a: PushEmpty(object, object)
0xf3b: @ FindActor(Stack[-1], Stack[-4])
0xf3c: Pop(0)
0xf3d: Pop(0); Push((bool) Stack[-1] == 0)
0xf3e: IF (Stack[-1] == 0) GOTO 0xf41; Pop(1)

0xf3f: Stack[-5] = (bool) 0
0xf40: Return(); Pop(2)

0xf41: @ Trigger(Stack[-1], Stack[-3])
0xf42: Pop(0)
0xf43: Stack[-5] = (bool) 1
0xf44: Return(); Pop(2)

0xf45: Stack[-1] = 0
0xf46: PushEmpty(float, float)
0xf47: @ GetGameTime(Stack[-1])
0xf48: Pop(0)
0xf49: Stack[-3] = Stack[-1]
0xf4a: Return(); Pop(2)

0xf4b: PushEmpty(float, float)
0xf4c: @ GetGameTime(Stack[-1])
0xf4d: Pop(0)
0xf4e: Push((int) 1)
0xf4f: PushEmpty(int)
0xf50: Push((int) 24)
0xf51: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xf52: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xf53: Return(); Pop(2)

0xf54: PushEmpty(float, float)
0xf55: @ GetGameTime(Stack[-1])
0xf56: Pop(0)
0xf57: PushEmpty(int)
0xf58: Stack[-1] = Stack[-2]
0xf59: Push((int) 24)
0xf5a: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xf5b: Return(); Pop(2)

0xf5c: PushEmpty()
0xf5d: PushEmpty(int)
0xf5e: Call 0xf4b

0xf5f: Pop(0)
0xf60: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xf61: Return(); Pop(0)

0xf62: PushEmpty(bool, bool)
0xf63: PushEmpty(string)
0xf64: Stack[-1] = "No"
0xf65: Call 0xef8

0xf66: Pop(1)
0xf67: @ lshWaitForAnimEnd(Stack[-1])
0xf68: Pop(0)
0xf69: Stack[-3] = Stack[-1]
0xf6a: Return(); Pop(2)

0xf6b: Stack[-1] = (int) 2875
0xf6c: Return(); Pop(0)

0xf6d: Stack[-1] = "ui/NPC_Petr.png"
0xf6e: Return(); Pop(0)

0xf6f: Stack[-1] = (bool) 1
0xf70: Return(); Pop(0)

0xf71: PushEmpty()
0xf72: Push("playsound")
0xf73: Push("giveitem")
0xf74: @ TriggerWorld(Stack[-2], Stack[-1])
0xf75: Pop(2)
0xf76: Return(); Pop(0)

0xf77: PushEmpty()
0xf78: Push("KnowTvirin")
0xf79: Push((int) 1)
0xf7a: @ SetVariable(Stack[-2], Stack[-1])
0xf7b: Pop(2)
0xf7c: Return(); Pop(0)

0xf7d: PushEmpty()
0xf7e: Push("ood2Petr1")
0xf7f: Push((int) 1)
0xf80: @ SetVariable(Stack[-2], Stack[-1])
0xf81: Pop(2)
0xf82: Return(); Pop(0)

0xf83: PushEmpty()
0xf84: Push("ood2Petr2")
0xf85: Push((int) 1)
0xf86: @ SetVariable(Stack[-2], Stack[-1])
0xf87: Pop(2)
0xf88: Return(); Pop(0)

0xf89: PushEmpty()
0xf8a: Push("ood2Petr3")
0xf8b: Push((int) 1)
0xf8c: @ SetVariable(Stack[-2], Stack[-1])
0xf8d: Pop(2)
0xf8e: Return(); Pop(0)

0xf8f: PushEmpty(object, object)
0xf90: Push("d2q02")
0xf91: Push((int) 3)
0xf92: @ SetVariable(Stack[-2], Stack[-1])
0xf93: Pop(2)
0xf94: PushEmpty(object)
0xf95: Call 0x123e

0xf96: Stack[-2] = Stack[-1]
0xf97: Pop(1)
0xf98: Push("d2q02PetrRefusedSelf")
0xf99: Push("pt_map_petr")
0xf9a: Push((int) 0)
0xf9b: Push((int) 15280)
0xf9c: PushEmpty(float)
0xf9d: Call 0xf46

0xf9e: Pop(0)
0xf9f: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfa0: Pop(5)
0xfa1: PushEmpty()
0xfa2: Call 0x1260

0xfa3: Pop(0)
0xfa4: Return(); Pop(2)

0xfa5: Stack[-1] = 0
0xfa6: PushEmpty(object, object)
0xfa7: Push("d2q02")
0xfa8: Push((int) 5)
0xfa9: @ SetVariable(Stack[-2], Stack[-1])
0xfaa: Pop(2)
0xfab: PushEmpty(object)
0xfac: Call 0x123e

0xfad: Stack[-2] = Stack[-1]
0xfae: Pop(1)
0xfaf: Push("d2q02PetrGotoAndrei")
0xfb0: Push("pt_map_andrei")
0xfb1: Push((int) 0)
0xfb2: Push((int) 15276)
0xfb3: PushEmpty(float)
0xfb4: Call 0xf46

0xfb5: Pop(0)
0xfb6: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfb7: Pop(5)
0xfb8: Push("d2q02PetrGotoAndreiSelf")
0xfb9: Push("pt_map_petr")
0xfba: Push((int) 0)
0xfbb: Push((int) 15281)
0xfbc: PushEmpty(float)
0xfbd: Call 0xf46

0xfbe: Pop(0)
0xfbf: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfc0: Pop(5)
0xfc1: PushEmpty()
0xfc2: Call 0x1270

0xfc3: Pop(0)
0xfc4: Return(); Pop(2)

0xfc5: Stack[-1] = 0
0xfc6: PushEmpty()
0xfc7: Push("ood1Petr1")
0xfc8: Push((int) 1)
0xfc9: @ SetVariable(Stack[-2], Stack[-1])
0xfca: Pop(2)
0xfcb: Return(); Pop(0)

0xfcc: PushEmpty()
0xfcd: Push("ood1Petr2")
0xfce: Push((int) 1)
0xfcf: @ SetVariable(Stack[-2], Stack[-1])
0xfd0: Pop(2)
0xfd1: Return(); Pop(0)

0xfd2: PushEmpty()
0xfd3: Push("ood1Petr3")
0xfd4: Push((int) 1)
0xfd5: @ SetVariable(Stack[-2], Stack[-1])
0xfd6: Pop(2)
0xfd7: Return(); Pop(0)

0xfd8: PushEmpty()
0xfd9: Push("ood1Petr4")
0xfda: Push((int) 1)
0xfdb: @ SetVariable(Stack[-2], Stack[-1])
0xfdc: Pop(2)
0xfdd: Return(); Pop(0)

0xfde: PushEmpty()
0xfdf: Push("ood1Petr5")
0xfe0: Push((int) 1)
0xfe1: @ SetVariable(Stack[-2], Stack[-1])
0xfe2: Pop(2)
0xfe3: Return(); Pop(0)

0xfe4: PushEmpty()
0xfe5: Push("ood1Petr6")
0xfe6: Push((int) 1)
0xfe7: @ SetVariable(Stack[-2], Stack[-1])
0xfe8: Pop(2)
0xfe9: Return(); Pop(0)

0xfea: PushEmpty()
0xfeb: Push("ood1Petr7")
0xfec: Push((int) 1)
0xfed: @ SetVariable(Stack[-2], Stack[-1])
0xfee: Pop(2)
0xfef: Return(); Pop(0)

0xff0: PushEmpty()
0xff1: Push("ood1Petr8")
0xff2: Push((int) 1)
0xff3: @ SetVariable(Stack[-2], Stack[-1])
0xff4: Pop(2)
0xff5: Return(); Pop(0)

0xff6: PushEmpty()
0xff7: Push("KnowPetr")
0xff8: Push((int) 1)
0xff9: @ SetVariable(Stack[-2], Stack[-1])
0xffa: Pop(2)
0xffb: Return(); Pop(0)

0xffc: PushEmpty()
0xffd: Push("KnowMistresses")
0xffe: Push((int) 1)
0xfff: @ SetVariable(Stack[-2], Stack[-1])
0x1000: Pop(2)
0x1001: Return(); Pop(0)

0x1002: PushEmpty()
0x1003: Push("KnowNina")
0x1004: Push((int) 1)
0x1005: @ SetVariable(Stack[-2], Stack[-1])
0x1006: Pop(2)
0x1007: Return(); Pop(0)

0x1008: PushEmpty()
0x1009: Push("d7q02")
0x100a: Push((int) 2)
0x100b: @ SetVariable(Stack[-2], Stack[-1])
0x100c: Pop(2)
0x100d: PushEmpty()
0x100e: Call 0x1280

0x100f: Pop(0)
0x1010: Return(); Pop(0)

0x1011: PushEmpty()
0x1012: Push("d7q02")
0x1013: Push((int) 4)
0x1014: @ SetVariable(Stack[-2], Stack[-1])
0x1015: Pop(2)
0x1016: Return(); Pop(0)

0x1017: PushEmpty(object, object, object, object)
0x1018: PushEmpty(int, string)
0x1019: Stack[-1] = "d7q02BirdBalahon"
0x101a: Call 0xf1b

0x101b: Pop(1)
0x101c: Push((int) 0)
0x101d: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x101e: IF (Stack[-1] == 0) GOTO 0x1042; Pop(1)

0x101f: PushEmpty(object)
0x1020: Call 0x123e

0x1021: Stack[-3] = Stack[-1]
0x1022: Pop(1)
0x1023: Push("d7q02AlexandrGotoPetr")
0x1024: @@ FindMark(Stack[-2], Stack[-1])
0x1025: Pop(1)
0x1026: Push(Stack[-1])
0x1027: IF (Stack[-1] == 0) GOTO 0x102a; Pop(1)

0x1028: @@ Remove()
0x1029: Pop(0)
0x102a: Push("d7q02MarkGotoAlexandr")
0x102b: @@ FindMark(Stack[-2], Stack[-1])
0x102c: Pop(1)
0x102d: Push(Stack[-1])
0x102e: IF (Stack[-1] == 0) GOTO 0x1031; Pop(1)

0x102f: @@ Remove()
0x1030: Pop(0)
0x1031: Push("d7q02MarkGotoCemetery")
0x1032: @@ FindMark(Stack[-2], Stack[-1])
0x1033: Pop(1)
0x1034: Push(Stack[-1])
0x1035: IF (Stack[-1] == 0) GOTO 0x1038; Pop(1)

0x1036: @@ Remove()
0x1037: Pop(0)
0x1038: PushEmpty()
0x1039: Call 0x1290

0x103a: Pop(0)
0x103b: PushEmpty(bool, string, string)
0x103c: Stack[-2] = "quest_d7_02"
0x103d: Stack[-1] = "completed"
0x103e: Call 0xf3a

0x103f: Pop(3)
0x1040: Stack[-1] = 0
0x1041: Stack[-2] = 0
0x1042: Return(); Pop(4)

0x1043: PushEmpty()
0x1044: Push("ood7Petr1")
0x1045: Push((int) 1)
0x1046: @ SetVariable(Stack[-2], Stack[-1])
0x1047: Pop(2)
0x1048: Return(); Pop(0)

0x1049: PushEmpty()
0x104a: Push("birdmask is given")
0x104b: @ Trace(Stack[-1])
0x104c: Pop(1)
0x104d: PushEmpty(object, string, int)
0x104e: Stack[-3] = Stack[-5]
0x104f: Stack[-2] = "bird_mask"
0x1050: Stack[-1] = (int) 1
0x1051: Call 0xf2d

0x1052: Pop(3)
0x1053: Return(); Pop(0)

0x1054: PushEmpty()
0x1055: Push("ood11Petr1")
0x1056: Push((int) 1)
0x1057: @ SetVariable(Stack[-2], Stack[-1])
0x1058: Pop(2)
0x1059: Return(); Pop(0)

0x105a: PushEmpty()
0x105b: Push("ood11Petr2")
0x105c: Push((int) 1)
0x105d: @ SetVariable(Stack[-2], Stack[-1])
0x105e: Pop(2)
0x105f: Return(); Pop(0)

0x1060: PushEmpty()
0x1061: Push("ood3Petr1")
0x1062: Push((int) 1)
0x1063: @ SetVariable(Stack[-2], Stack[-1])
0x1064: Pop(2)
0x1065: Return(); Pop(0)

0x1066: PushEmpty()
0x1067: Push("KnowMyth")
0x1068: Push((int) 1)
0x1069: @ SetVariable(Stack[-2], Stack[-1])
0x106a: Pop(2)
0x106b: Return(); Pop(0)

0x106c: PushEmpty()
0x106d: PushEmpty(int, string)
0x106e: Stack[-1] = "d1q01FirstGeorgVisit"
0x106f: Call 0xf1b

0x1070: Pop(1)
0x1071: Push((int) 1)
0x1072: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1073: IF (Stack[-1] == 0) GOTO 0x1076; Pop(1)

0x1074: Stack[-2] = (bool) 1
0x1075: Return(); Pop(0)

0x1076: Stack[-2] = (bool) 0
0x1077: Return(); Pop(0)

0x1078: PushEmpty()
0x1079: PushEmpty(int, string)
0x107a: Stack[-1] = "ood2Petr1"
0x107b: Call 0xf1b

0x107c: Pop(1)
0x107d: Push((int) 0)
0x107e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x107f: IF (Stack[-1] == 0) GOTO 0x1082; Pop(1)

0x1080: Stack[-2] = (bool) 1
0x1081: Return(); Pop(0)

0x1082: Stack[-2] = (bool) 0
0x1083: Return(); Pop(0)

0x1084: PushEmpty()
0x1085: PushEmpty(int, string)
0x1086: Stack[-1] = "ood2Petr2"
0x1087: Call 0xf1b

0x1088: Pop(1)
0x1089: Push((int) 0)
0x108a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x108b: IF (Stack[-1] == 0) GOTO 0x108e; Pop(1)

0x108c: Stack[-2] = (bool) 1
0x108d: Return(); Pop(0)

0x108e: Stack[-2] = (bool) 0
0x108f: Return(); Pop(0)

0x1090: PushEmpty()
0x1091: PushEmpty(int, string)
0x1092: Stack[-1] = "ood2Petr3"
0x1093: Call 0xf1b

0x1094: Pop(1)
0x1095: Push((int) 0)
0x1096: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1097: IF (Stack[-1] == 0) GOTO 0x109a; Pop(1)

0x1098: Stack[-2] = (bool) 1
0x1099: Return(); Pop(0)

0x109a: Stack[-2] = (bool) 0
0x109b: Return(); Pop(0)

0x109c: PushEmpty()
0x109d: PushEmpty(int, string)
0x109e: Stack[-1] = "d2q02"
0x109f: Call 0xf1b

0x10a0: Pop(1)
0x10a1: Push((int) 1000)
0x10a2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10a3: IF (Stack[-1] == 0) GOTO 0x10a6; Pop(1)

0x10a4: Stack[-2] = (bool) 1
0x10a5: Return(); Pop(0)

0x10a6: Stack[-2] = (bool) 0
0x10a7: Return(); Pop(0)

0x10a8: PushEmpty()
0x10a9: PushEmpty(int, string)
0x10aa: Stack[-1] = "d2q02"
0x10ab: Call 0xf1b

0x10ac: Pop(1)
0x10ad: Push((int) 2)
0x10ae: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10af: IF (Stack[-1] == 0) GOTO 0x10b2; Pop(1)

0x10b0: Stack[-2] = (bool) 1
0x10b1: Return(); Pop(0)

0x10b2: Stack[-2] = (bool) 0
0x10b3: Return(); Pop(0)

0x10b4: PushEmpty()
0x10b5: PushEmpty(int, string)
0x10b6: Stack[-1] = "d2q02"
0x10b7: Call 0xf1b

0x10b8: Pop(1)
0x10b9: Push((int) 3)
0x10ba: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10bb: IF (Stack[-1] == 0) GOTO 0x10be; Pop(1)

0x10bc: Stack[-2] = (bool) 1
0x10bd: Return(); Pop(0)

0x10be: Stack[-2] = (bool) 0
0x10bf: Return(); Pop(0)

0x10c0: PushEmpty()
0x10c1: PushEmpty(int, string)
0x10c2: Stack[-1] = "d2q02"
0x10c3: Call 0xf1b

0x10c4: Pop(1)
0x10c5: Push((int) 4)
0x10c6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10c7: IF (Stack[-1] == 0) GOTO 0x10ca; Pop(1)

0x10c8: Stack[-2] = (bool) 1
0x10c9: Return(); Pop(0)

0x10ca: Stack[-2] = (bool) 0
0x10cb: Return(); Pop(0)

0x10cc: PushEmpty()
0x10cd: PushEmpty(int, string)
0x10ce: Stack[-1] = "ood1Petr1"
0x10cf: Call 0xf1b

0x10d0: Pop(1)
0x10d1: Push((int) 0)
0x10d2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10d3: IF (Stack[-1] == 0) GOTO 0x10d6; Pop(1)

0x10d4: Stack[-2] = (bool) 1
0x10d5: Return(); Pop(0)

0x10d6: Stack[-2] = (bool) 0
0x10d7: Return(); Pop(0)

0x10d8: PushEmpty()
0x10d9: PushEmpty(int, string)
0x10da: Stack[-1] = "ood1Petr2"
0x10db: Call 0xf1b

0x10dc: Pop(1)
0x10dd: Push((int) 0)
0x10de: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10df: IF (Stack[-1] == 0) GOTO 0x10e2; Pop(1)

0x10e0: Stack[-2] = (bool) 1
0x10e1: Return(); Pop(0)

0x10e2: Stack[-2] = (bool) 0
0x10e3: Return(); Pop(0)

0x10e4: PushEmpty()
0x10e5: PushEmpty(int, string)
0x10e6: Stack[-1] = "ood1Petr3"
0x10e7: Call 0xf1b

0x10e8: Pop(1)
0x10e9: Push((int) 0)
0x10ea: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10eb: IF (Stack[-1] == 0) GOTO 0x10ee; Pop(1)

0x10ec: Stack[-2] = (bool) 1
0x10ed: Return(); Pop(0)

0x10ee: Stack[-2] = (bool) 0
0x10ef: Return(); Pop(0)

0x10f0: PushEmpty()
0x10f1: PushEmpty(int, string)
0x10f2: Stack[-1] = "ood1Petr4"
0x10f3: Call 0xf1b

0x10f4: Pop(1)
0x10f5: Push((int) 0)
0x10f6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10f7: IF (Stack[-1] == 0) GOTO 0x10fa; Pop(1)

0x10f8: Stack[-2] = (bool) 1
0x10f9: Return(); Pop(0)

0x10fa: Stack[-2] = (bool) 0
0x10fb: Return(); Pop(0)

0x10fc: PushEmpty()
0x10fd: PushEmpty(int, string)
0x10fe: Stack[-1] = "ood1Petr5"
0x10ff: Call 0xf1b

0x1100: Pop(1)
0x1101: Push((int) 0)
0x1102: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1103: IF (Stack[-1] == 0) GOTO 0x1106; Pop(1)

0x1104: Stack[-2] = (bool) 1
0x1105: Return(); Pop(0)

0x1106: Stack[-2] = (bool) 0
0x1107: Return(); Pop(0)

0x1108: PushEmpty()
0x1109: PushEmpty(int, string)
0x110a: Stack[-1] = "ood1Petr6"
0x110b: Call 0xf1b

0x110c: Pop(1)
0x110d: Push((int) 0)
0x110e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x110f: IF (Stack[-1] == 0) GOTO 0x1112; Pop(1)

0x1110: Stack[-2] = (bool) 1
0x1111: Return(); Pop(0)

0x1112: Stack[-2] = (bool) 0
0x1113: Return(); Pop(0)

0x1114: PushEmpty()
0x1115: PushEmpty(int, string)
0x1116: Stack[-1] = "ood1Petr7"
0x1117: Call 0xf1b

0x1118: Pop(1)
0x1119: Push((int) 0)
0x111a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x111b: IF (Stack[-1] == 0) GOTO 0x111e; Pop(1)

0x111c: Stack[-2] = (bool) 1
0x111d: Return(); Pop(0)

0x111e: Stack[-2] = (bool) 0
0x111f: Return(); Pop(0)

0x1120: PushEmpty()
0x1121: PushEmpty(int, string)
0x1122: Stack[-1] = "ood1Petr8"
0x1123: Call 0xf1b

0x1124: Pop(1)
0x1125: Push((int) 0)
0x1126: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1127: IF (Stack[-1] == 0) GOTO 0x112a; Pop(1)

0x1128: Stack[-2] = (bool) 1
0x1129: Return(); Pop(0)

0x112a: Stack[-2] = (bool) 0
0x112b: Return(); Pop(0)

0x112c: PushEmpty()
0x112d: PushEmpty(int, string)
0x112e: Stack[-1] = "KnowViktor"
0x112f: Call 0xf1b

0x1130: Pop(1)
0x1131: Push((int) 1)
0x1132: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1133: IF (Stack[-1] == 0) GOTO 0x1136; Pop(1)

0x1134: Stack[-2] = (bool) 1
0x1135: Return(); Pop(0)

0x1136: Stack[-2] = (bool) 0
0x1137: Return(); Pop(0)

0x1138: PushEmpty()
0x1139: PushEmpty(bool, object)
0x113a: Stack[-1] = Stack[-3]
0x113b: Call 0x11f4

0x113c: Pop(1)
0x113d: IF (Stack[-1] == 0) GOTO 0x1140; Pop(1)

0x113e: Stack[-2] = (bool) 1
0x113f: Return(); Pop(0)

0x1140: Stack[-2] = (bool) 0
0x1141: Return(); Pop(0)

0x1142: PushEmpty()
0x1143: PushEmpty(bool, object)
0x1144: Stack[-1] = Stack[-3]
0x1145: Call 0x11ff

0x1146: Pop(1)
0x1147: IF (Stack[-1] == 0) GOTO 0x114a; Pop(1)

0x1148: Stack[-2] = (bool) 1
0x1149: Return(); Pop(0)

0x114a: Stack[-2] = (bool) 0
0x114b: Return(); Pop(0)

0x114c: PushEmpty()
0x114d: PushEmpty(int, string)
0x114e: Stack[-1] = "d7q02"
0x114f: Call 0xf1b

0x1150: Pop(1)
0x1151: Push((int) 1)
0x1152: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1153: IF (Stack[-1] == 0) GOTO 0x1156; Pop(1)

0x1154: Stack[-2] = (bool) 1
0x1155: Return(); Pop(0)

0x1156: Stack[-2] = (bool) 0
0x1157: Return(); Pop(0)

0x1158: PushEmpty()
0x1159: PushEmpty(int, string)
0x115a: Stack[-1] = "ood7Petr1"
0x115b: Call 0xf1b

0x115c: Pop(1)
0x115d: Push((int) 0)
0x115e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x115f: IF (Stack[-1] == 0) GOTO 0x1162; Pop(1)

0x1160: Stack[-2] = (bool) 1
0x1161: Return(); Pop(0)

0x1162: Stack[-2] = (bool) 0
0x1163: Return(); Pop(0)

0x1164: PushEmpty()
0x1165: PushEmpty(int, string)
0x1166: Stack[-1] = "d7q02"
0x1167: Call 0xf1b

0x1168: Pop(1)
0x1169: Push((int) 3)
0x116a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x116b: IF (Stack[-1] == 0) GOTO 0x116e; Pop(1)

0x116c: Stack[-2] = (bool) 1
0x116d: Return(); Pop(0)

0x116e: Stack[-2] = (bool) 0
0x116f: Return(); Pop(0)

0x1170: PushEmpty()
0x1171: PushEmpty(int, string)
0x1172: Stack[-1] = "KnowAnna"
0x1173: Call 0xf1b

0x1174: Pop(1)
0x1175: Push((int) 1)
0x1176: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1177: IF (Stack[-1] == 0) GOTO 0x117a; Pop(1)

0x1178: Stack[-2] = (bool) 1
0x1179: Return(); Pop(0)

0x117a: Stack[-2] = (bool) 0
0x117b: Return(); Pop(0)

0x117c: PushEmpty()
0x117d: PushEmpty(int, string)
0x117e: Stack[-1] = "KnowEva"
0x117f: Call 0xf1b

0x1180: Pop(1)
0x1181: Push((int) 1)
0x1182: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1183: IF (Stack[-1] == 0) GOTO 0x1186; Pop(1)

0x1184: Stack[-2] = (bool) 1
0x1185: Return(); Pop(0)

0x1186: Stack[-2] = (bool) 0
0x1187: Return(); Pop(0)

0x1188: PushEmpty()
0x1189: PushEmpty(int, string)
0x118a: Stack[-1] = "KnowGrif"
0x118b: Call 0xf1b

0x118c: Pop(1)
0x118d: Push((int) 1)
0x118e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x118f: IF (Stack[-1] == 0) GOTO 0x1192; Pop(1)

0x1190: Stack[-2] = (bool) 1
0x1191: Return(); Pop(0)

0x1192: Stack[-2] = (bool) 0
0x1193: Return(); Pop(0)

0x1194: PushEmpty()
0x1195: PushEmpty(int, string)
0x1196: Stack[-1] = "d11q01"
0x1197: Call 0xf1b

0x1198: Pop(1)
0x1199: Push((int) 1)
0x119a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x119b: IF (Stack[-1] == 0) GOTO 0x119e; Pop(1)

0x119c: Stack[-2] = (bool) 1
0x119d: Return(); Pop(0)

0x119e: Stack[-2] = (bool) 0
0x119f: Return(); Pop(0)

0x11a0: PushEmpty()
0x11a1: PushEmpty(int, string)
0x11a2: Stack[-1] = "ood11Petr1"
0x11a3: Call 0xf1b

0x11a4: Pop(1)
0x11a5: Push((int) 0)
0x11a6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x11a7: IF (Stack[-1] == 0) GOTO 0x11aa; Pop(1)

0x11a8: Stack[-2] = (bool) 1
0x11a9: Return(); Pop(0)

0x11aa: Stack[-2] = (bool) 0
0x11ab: Return(); Pop(0)

0x11ac: PushEmpty()
0x11ad: PushEmpty(int, string)
0x11ae: Stack[-1] = "d11q01"
0x11af: Call 0xf1b

0x11b0: Pop(1)
0x11b1: Push((int) 1000)
0x11b2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x11b3: IF (Stack[-1] == 0) GOTO 0x11b6; Pop(1)

0x11b4: Stack[-2] = (bool) 1
0x11b5: Return(); Pop(0)

0x11b6: Stack[-2] = (bool) 0
0x11b7: Return(); Pop(0)

0x11b8: PushEmpty()
0x11b9: PushEmpty(int, string)
0x11ba: Stack[-1] = "ood11Petr2"
0x11bb: Call 0xf1b

0x11bc: Pop(1)
0x11bd: Push((int) 0)
0x11be: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x11bf: IF (Stack[-1] == 0) GOTO 0x11c2; Pop(1)

0x11c0: Stack[-2] = (bool) 1
0x11c1: Return(); Pop(0)

0x11c2: Stack[-2] = (bool) 0
0x11c3: Return(); Pop(0)

0x11c4: PushEmpty()
0x11c5: PushEmpty(int, string)
0x11c6: Stack[-1] = "KnowMaria"
0x11c7: Call 0xf1b

0x11c8: Pop(1)
0x11c9: Push((int) 1)
0x11ca: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x11cb: IF (Stack[-1] == 0) GOTO 0x11ce; Pop(1)

0x11cc: Stack[-2] = (bool) 1
0x11cd: Return(); Pop(0)

0x11ce: Stack[-2] = (bool) 0
0x11cf: Return(); Pop(0)

0x11d0: PushEmpty()
0x11d1: PushEmpty(int, string)
0x11d2: Stack[-1] = "ood3Petr1"
0x11d3: Call 0xf1b

0x11d4: Pop(1)
0x11d5: Push((int) 0)
0x11d6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x11d7: IF (Stack[-1] == 0) GOTO 0x11da; Pop(1)

0x11d8: Stack[-2] = (bool) 1
0x11d9: Return(); Pop(0)

0x11da: Stack[-2] = (bool) 0
0x11db: Return(); Pop(0)

0x11dc: PushEmpty()
0x11dd: PushEmpty(int, string)
0x11de: Stack[-1] = "KnowPredictions"
0x11df: Call 0xf1b

0x11e0: Pop(1)
0x11e1: Push((int) 1)
0x11e2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x11e3: IF (Stack[-1] == 0) GOTO 0x11e6; Pop(1)

0x11e4: Stack[-2] = (bool) 1
0x11e5: Return(); Pop(0)

0x11e6: Stack[-2] = (bool) 0
0x11e7: Return(); Pop(0)

0x11e8: PushEmpty()
0x11e9: PushEmpty(int, string)
0x11ea: Stack[-1] = "KnowMnogogrannik"
0x11eb: Call 0xf1b

0x11ec: Pop(1)
0x11ed: Push((int) 1)
0x11ee: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x11ef: IF (Stack[-1] == 0) GOTO 0x11f2; Pop(1)

0x11f0: Stack[-2] = (bool) 1
0x11f1: Return(); Pop(0)

0x11f2: Stack[-2] = (bool) 0
0x11f3: Return(); Pop(0)

0x11f4: PushEmpty()
0x11f5: PushEmpty(int)
0x11f6: Call 0xf54

0x11f7: Pop(0)
0x11f8: Push((int) 18)
0x11f9: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x11fa: IF (Stack[-1] == 0) GOTO 0x11fd; Pop(1)

0x11fb: Stack[-2] = (bool) 1
0x11fc: Return(); Pop(0)

0x11fd: Stack[-2] = (bool) 0
0x11fe: Return(); Pop(0)

0x11ff: PushEmpty()
0x1200: PushEmpty(bool)
0x1201: Stack[-1] = (bool) 0
0x1202: PushEmpty(int)
0x1203: Call 0xf54

0x1204: Pop(0)
0x1205: Push((int) 12)
0x1206: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x1207: IF (Stack[-1] == 0) GOTO 0x120f; Pop(1)

0x1208: PushEmpty(int)
0x1209: Call 0xf54

0x120a: Pop(0)
0x120b: Push((int) 18)
0x120c: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x120d: IF (Stack[-1] == 0) GOTO 0x120f; Pop(1)

0x120e: Stack[-1] = (bool) 1
0x120f: IF (Stack[-1] == 0) GOTO 0x1212; Pop(1)

0x1210: Stack[-2] = (bool) 1
0x1211: Return(); Pop(0)

0x1212: Stack[-2] = (bool) 0
0x1213: Return(); Pop(0)

0x1214: PushEmpty(object, object)
0x1215: @ GetDiaryRoot(Stack[-1])
0x1216: Pop(0)
0x1217: Pop(0); Push((bool) Stack[-1] == 0)
0x1218: IF (Stack[-1] == 0) GOTO 0x121e; Pop(1)

0x1219: Push("Can't retrieve diary root")
0x121a: @ Trace(Stack[-1])
0x121b: Pop(1)
0x121c: Stack[-3] = (bool) 0
0x121d: Return(); Pop(2)

0x121e: Stack[-3] = Stack[-1]
0x121f: Return(); Pop(2)

0x1220: Stack[-1] = 0
0x1221: PushEmpty(object, object, int, object, object, int)
0x1222: PushEmpty(object)
0x1223: Call 0x1214

0x1224: Stack[-4] = Stack[-1]
0x1225: Pop(1)
0x1226: @@ Find(Stack[-7], Stack[-2])
0x1227: Pop(0)
0x1228: Pop(0); Push((bool) Stack[-2] == 0)
0x1229: IF (Stack[-1] == 0) GOTO 0x1230; Pop(1)

0x122a: Push("Can't find diary parent with id: ")
0x122b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x122c: @ Trace(Stack[-1])
0x122d: Pop(1)
0x122e: Stack[-9] = (bool) 0
0x122f: Return(); Pop(6)

0x1230: @@ AddChild(Stack[-8])
0x1231: Pop(0)
0x1232: Push("player_diary")
0x1233: Push((int) 1)
0x1234: @ SetVariable(Stack[-2], Stack[-1])
0x1235: Pop(2)
0x1236: @@ GetCategory(Stack[-1])
0x1237: Pop(0)
0x1238: @ SetDiarySection(Stack[-1])
0x1239: Pop(0)
0x123a: Stack[-9] = (bool) 0
0x123b: Return(); Pop(6)

0x123c: Stack[-2] = 0
0x123d: Stack[-3] = 0
0x123e: PushEmpty(object, object, object, object)
0x123f: @ GetMainOutdoorScene(Stack[-2])
0x1240: Pop(0)
0x1241: Pop(0); Push((bool) Stack[-2] == 0)
0x1242: IF (Stack[-1] == 0) GOTO 0x1249; Pop(1)

0x1243: Push("Can't find main outdoor scene")
0x1244: @ Trace(Stack[-1])
0x1245: Pop(1)
0x1246: Stack[-1] = 0
0x1247: Stack[-5] = Stack[-1]
0x1248: Return(); Pop(4)

0x1249: @@ GetMap(Stack[-1])
0x124a: Pop(0)
0x124b: Stack[-5] = Stack[-1]
0x124c: Return(); Pop(4)

0x124d: Stack[-1] = 0
0x124e: Stack[-2] = 0
0x124f: PushEmpty(int, int)
0x1250: Push("player")
0x1251: @ GetVariable(Stack[-1], Stack[-2])
0x1252: Pop(1)
0x1253: Push((int) 0)
0x1254: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1255: IF (Stack[-1] == 0) GOTO 0x1259; Pop(1)

0x1256: Stack[-3] = (int) 200001
0x1257: Return(); Pop(2)

0x1258: GOTO 0x125e

0x1259: Push((int) 1)
0x125a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x125b: IF (Stack[-1] == 0) GOTO 0x125e; Pop(1)

0x125c: Stack[-3] = (int) 200002
0x125d: Return(); Pop(2)

0x125e: Stack[-3] = (int) 200003
0x125f: Return(); Pop(2)

0x1260: PushEmpty(object, object)
0x1261: Push("Adding diary entry")
0x1262: @ Trace(Stack[-1])
0x1263: Pop(1)
0x1264: Push((int) 130)
0x1265: Push((int) 2)
0x1266: Push((int) 15267)
0x1267: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1268: Pop(3)
0x1269: PushEmpty(bool, object, int)
0x126a: Stack[-2] = Stack[-4]
0x126b: Stack[-1] = (int) 11
0x126c: Call 0x1221

0x126d: Pop(3)
0x126e: Return(); Pop(2)

0x126f: Stack[-1] = 0
0x1270: PushEmpty(object, object)
0x1271: Push("Adding diary entry")
0x1272: @ Trace(Stack[-1])
0x1273: Pop(1)
0x1274: Push((int) 131)
0x1275: Push((int) 2)
0x1276: Push((int) 15268)
0x1277: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1278: Pop(3)
0x1279: PushEmpty(bool, object, int)
0x127a: Stack[-2] = Stack[-4]
0x127b: Stack[-1] = (int) 11
0x127c: Call 0x1221

0x127d: Pop(3)
0x127e: Return(); Pop(2)

0x127f: Stack[-1] = 0
0x1280: PushEmpty(object, object)
0x1281: Push("Adding diary entry")
0x1282: @ Trace(Stack[-1])
0x1283: Pop(1)
0x1284: Push((int) 173)
0x1285: Push((int) 0)
0x1286: Push((int) 15425)
0x1287: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1288: Pop(3)
0x1289: PushEmpty(bool, object, int)
0x128a: Stack[-2] = Stack[-4]
0x128b: Stack[-1] = (int) 170
0x128c: Call 0x1221

0x128d: Pop(3)
0x128e: Return(); Pop(2)

0x128f: Stack[-1] = 0
0x1290: PushEmpty(object, object)
0x1291: Push("Adding diary entry")
0x1292: @ Trace(Stack[-1])
0x1293: Pop(1)
0x1294: Push((int) 174)
0x1295: Push((int) 0)
0x1296: Push((int) 15426)
0x1297: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1298: Pop(3)
0x1299: PushEmpty(bool, object, int)
0x129a: Stack[-2] = Stack[-4]
0x129b: Stack[-1] = (int) 170
0x129c: Call 0x1221

0x129d: Pop(3)
0x129e: Return(); Pop(2)

0x129f: Stack[-1] = 0
0x12a0: Push(GlobalVars[1])
0x12a1: Stack[-1] = (bool) 0
0x12a2: GlobalVars[1] = Stack[-1]; Pop(1)
0x12a3: Return(); Pop(0)

0x12a4: PushEmpty()
0x12a5: Push(GlobalVars[1])
0x12a6: Pop(1); Push((bool) Stack[-1] == 0)
0x12a7: IF (Stack[-1] == 0) GOTO 0x12b1; Pop(1)

0x12a8: PushEmpty(int, object)
0x12a9: Stack[-1] = Stack[-3]
0x12aa: Push(-2, 1); TaskCall(2)
0x12ab: Call 0x31

0x12ac: Pop(-2, 1); TaskReturn
0x12ad: Pop(2)
0x12ae: Push(GlobalVars[1])
0x12af: Stack[-1] = (bool) 1
0x12b0: GlobalVars[1] = Stack[-1]; Pop(1)
0x12b1: PushEmpty(bool, int)
0x12b2: Stack[-1] = (int) 1
0x12b3: Call 0xf5c

0x12b4: Pop(1)
0x12b5: IF (Stack[-1] == 0) GOTO 0x12bc; Pop(1)

0x12b6: PushEmpty(int, object)
0x12b7: Stack[-1] = Stack[-3]
0x12b8: Push(-2, 1); TaskCall(4)
0x12b9: Call 0x152

0x12ba: Pop(-2, 1); TaskReturn
0x12bb: Pop(2)
0x12bc: PushEmpty(bool, int)
0x12bd: Stack[-1] = (int) 2
0x12be: Call 0xf5c

0x12bf: Pop(1)
0x12c0: IF (Stack[-1] == 0) GOTO 0x12c8; Pop(1)

0x12c1: PushEmpty(int, object)
0x12c2: Stack[-1] = Stack[-3]
0x12c3: Push(-2, 1); TaskCall(6)
0x12c4: Call 0x5e9

0x12c5: Pop(-2, 1); TaskReturn
0x12c6: Pop(2)
0x12c7: Return(); Pop(0)

0x12c8: PushEmpty(bool, int)
0x12c9: Stack[-1] = (int) 3
0x12ca: Call 0xf5c

0x12cb: Pop(1)
0x12cc: IF (Stack[-1] == 0) GOTO 0x12d4; Pop(1)

0x12cd: PushEmpty(int, object)
0x12ce: Stack[-1] = Stack[-3]
0x12cf: Push(-2, 1); TaskCall(8)
0x12d0: Call 0x943

0x12d1: Pop(-2, 1); TaskReturn
0x12d2: Pop(2)
0x12d3: Return(); Pop(0)

0x12d4: PushEmpty(bool, int)
0x12d5: Stack[-1] = (int) 7
0x12d6: Call 0xf5c

0x12d7: Pop(1)
0x12d8: IF (Stack[-1] == 0) GOTO 0x12e0; Pop(1)

0x12d9: PushEmpty(int, object)
0x12da: Stack[-1] = Stack[-3]
0x12db: Push(-2, 1); TaskCall(10)
0x12dc: Call 0xa72

0x12dd: Pop(-2, 1); TaskReturn
0x12de: Pop(2)
0x12df: Return(); Pop(0)

0x12e0: PushEmpty(bool, int)
0x12e1: Stack[-1] = (int) 11
0x12e2: Call 0xf5c

0x12e3: Pop(1)
0x12e4: IF (Stack[-1] == 0) GOTO 0x12ec; Pop(1)

0x12e5: PushEmpty(int, object)
0x12e6: Stack[-1] = Stack[-3]
0x12e7: Push(-2, 1); TaskCall(12)
0x12e8: Call 0xc6f

0x12e9: Pop(-2, 1); TaskReturn
0x12ea: Pop(2)
0x12eb: Return(); Pop(0)

0x12ec: PushEmpty(bool)
0x12ed: Call 0xf62

0x12ee: Pop(1)
0x12ef: Return(); Pop(0)

