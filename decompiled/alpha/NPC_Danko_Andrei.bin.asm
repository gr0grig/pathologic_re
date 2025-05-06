GlobalVarCount = 1
	G_VAR_0 object 

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
	GetProperty
	SetProperty
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
	ui/NPC_Andrei.png
	ood1Andrei1
	ood1Andrei2
	money1000 is given
	money
	playsound
	givemoney
	giveitem
	ood1Andrei3
	ood1Andrei4
	ood1Andrei5
	ood1Andrei6
	ood1Andrei7
	KnowShabnak
	ood1Andrei8
	KnowMat
	ood2Andrei1
	ood2Andrei2
	ood2Andrei3
	ood2Andrei4
	ood2Andrei5
	KnowAgo
	d2q02
	d2q02AndreiGotoPetr
	pt_map_petr
	AddMark
	d2q02AndreiGotoPetrSelf
	pt_map_andrei
	d2q02AndreiGotoGrif
	pt_map_grif
	d2q02AndreiGotoGrifSelf
	d2q02ReadyAndrei
	quest_d2_02
	put_patrol
	ShowMap
	tvirin is given
	tvirin
	KnowAndrei
	KnowNina
	ood6Andrei1
	ood11Andrei1
	d11q01
	ood11Andrei2
	ood11Andrei3
	KnowMark
	ood3Andrei1
	ood10Andrei1
	KnowTermitnik
	KnowTheater
	d1q01FirstGeorgVisit
	KnowViktor
	d3q01
	d5q01
	KnowAnna
	KnowEva
	KnowGrif
	KnowLaska
	KnowMaria
	d10q01
	KnowPredictions
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	player
	Adding diary entry
	mt_andrei

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
	SetVariable (2 args)
	TriggerWorld (2 args)
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
		EVENT_11 Op = 0x26e Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x89b Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcc3 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe51 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xfe5 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x111e Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x17af

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0x12f8

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
0x15: Call 0x1339

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
0x26: Call 0x17b4

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x12ec

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0x12fd

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0x13ac

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0x13ae

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x175e

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
0x67: Call 0x1335

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
0x79: Call 0x14a0

0x7a: Pop(2)
0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral"
0x7d: Call 0xaf

0x7e: Pop(1)
0x7f: Push((int) 187)
0x80: @@ SetMessage(Stack[-1])
0x81: Pop(1)
0x82: @@ ClearReplies()
0x83: Pop(0)
0x84: Push((int) 190)
0x85: Push((int) 228)
0x86: Push((int) 227)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: Push((int) 188)
0x8a: Push((int) 226)
0x8b: Push((int) 225)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: GOTO 0x91

0x8f: Return(); Pop(0)

0x90: GOTO 0x74

0x91: PushEmpty(bool)
0x92: Call 0x13b0

0x93: Pop(0)
0x94: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x95: @ lshWaitForAnimEnd()
0x96: Pop(0)
0x97: Push( Stack[3 + Tasks[-1].StackPointer] )
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: GOTO 0x9f

0x9a: PushEmpty(string)
0x9b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9c: Call 0x1339

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
0xb1: Call 0x13b0

0xb2: Pop(0)
0xb3: Pop(1); Push((bool) Stack[-1] == 0)
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Return(); Pop(0)

0xb6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: Return(); Pop(0)

0xb9: PushEmpty(string)
0xba: Stack[-1] = Stack[-2]
0xbb: Call 0x1339

0xbc: Pop(1)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0xc2: PushEmpty()
0xc3: Call 0x134b

0xc4: Pop(0)
0xc5: Push((int) 224)
0xc6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call 0x14a0

0xcc: Pop(2)
0xcd: PushEmpty(string)
0xce: Stack[-1] = "Neutral"
0xcf: Call 0xaf

0xd0: Pop(1)
0xd1: Push((int) 187)
0xd2: @@ SetMessage(Stack[-1])
0xd3: Pop(1)
0xd4: @@ ClearReplies()
0xd5: Pop(0)
0xd6: Push((int) 190)
0xd7: Push((int) 228)
0xd8: Push((int) 227)
0xd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda: Pop(3)
0xdb: Push((int) 188)
0xdc: Push((int) 226)
0xdd: Push((int) 225)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: Return(); Pop(0)

0xe1: Push((int) 226)
0xe2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xe4: PushEmpty(string)
0xe5: Stack[-1] = "Neutral"
0xe6: Call 0xaf

0xe7: Pop(1)
0xe8: Push((int) 189)
0xe9: @@ SetMessage(Stack[-1])
0xea: Pop(1)
0xeb: @@ ClearReplies()
0xec: Pop(0)
0xed: Push((int) 192)
0xee: Push((int) 233)
0xef: Push((int) 229)
0xf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: Push((int) 193)
0xf3: Push((int) -1)
0xf4: Push((int) 230)
0xf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6: Pop(3)
0xf7: Return(); Pop(0)

0xf8: Push((int) 233)
0xf9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xfb: PushEmpty(string)
0xfc: Stack[-1] = "Neutral"
0xfd: Call 0xaf

0xfe: Pop(1)
0xff: Push((int) 196)
0x100: @@ SetMessage(Stack[-1])
0x101: Pop(1)
0x102: @@ ClearReplies()
0x103: Pop(0)
0x104: Push((int) 203)
0x105: Push((int) -1)
0x106: Push((int) 241)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Push((int) 228)
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Neutral"
0x10f: Call 0xaf

0x110: Pop(1)
0x111: Push((int) 191)
0x112: @@ SetMessage(Stack[-1])
0x113: Pop(1)
0x114: @@ ClearReplies()
0x115: Pop(0)
0x116: Push((int) 197)
0x117: Push((int) 236)
0x118: Push((int) 234)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Push((int) 198)
0x11c: Push((int) 9260)
0x11d: Push((int) 235)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: Push((int) 9260)
0x122: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Neutral"
0x126: Call 0xaf

0x127: Pop(1)
0x128: Push((int) 8437)
0x129: @@ SetMessage(Stack[-1])
0x12a: Pop(1)
0x12b: @@ ClearReplies()
0x12c: Pop(0)
0x12d: Push((int) 8438)
0x12e: Push((int) -1)
0x12f: Push((int) 9261)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Return(); Pop(0)

0x133: Push((int) 236)
0x134: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x136: PushEmpty(string)
0x137: Stack[-1] = "Neutral"
0x138: Call 0xaf

0x139: Pop(1)
0x13a: Push((int) 199)
0x13b: @@ SetMessage(Stack[-1])
0x13c: Pop(1)
0x13d: @@ ClearReplies()
0x13e: Pop(0)
0x13f: Push((int) 200)
0x140: Push((int) 233)
0x141: Push((int) 237)
0x142: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x143: Pop(3)
0x144: Return(); Pop(0)

0x145: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x146: PushEmpty(bool)
0x147: Call 0x13b0

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
0x156: Call 0x12fd

0x157: Pop(1)
0x158: Pop(1); Push((bool) Stack[-1] == 0)
0x159: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x15a: Stack[-10] = (int) -2
0x15b: Return(); Pop(8)

0x15c: @ CreateDialog(Stack[-4])
0x15d: Pop(0)
0x15e: PushEmpty(int)
0x15f: Call 0x13ac

0x160: Pop(0)
0x161: @@ SetNPCName(Stack[-1])
0x162: Pop(1)
0x163: PushEmpty(string)
0x164: Call 0x13ae

0x165: Pop(0)
0x166: @@ SetPhoto(Stack[-1])
0x167: Pop(1)
0x168: PushEmpty(int)
0x169: Call 0x175e

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
0x188: Call 0x1335

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
0x196: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x197: PushEmpty(string)
0x198: Stack[-1] = "Neutral"
0x199: Call 0x25e

0x19a: Pop(1)
0x19b: Push((int) 6465)
0x19c: @@ SetMessage(Stack[-1])
0x19d: Pop(1)
0x19e: @@ ClearReplies()
0x19f: Pop(0)
0x1a0: PushEmpty(bool)
0x1a1: Stack[-1] = (bool) 0
0x1a2: PushEmpty(bool, object)
0x1a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a4: Call 0x1501

0x1a5: Pop(1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1a7: PushEmpty(bool, object)
0x1a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a9: Call 0x1519

0x1aa: Pop(1)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1ac: Stack[-1] = (bool) 1
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1ae: Push((int) 6466)
0x1af: Push((int) 6344)
0x1b0: Push((int) 7129)
0x1b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b2: Pop(3)
0x1b3: PushEmpty(bool)
0x1b4: Stack[-1] = (bool) 0
0x1b5: PushEmpty(bool, object)
0x1b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b7: Call 0x1609

0x1b8: Pop(1)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1ba: PushEmpty(bool, object)
0x1bb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bc: Call 0x150d

0x1bd: Pop(1)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bf: Stack[-1] = (bool) 1
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c1: Push((int) 6467)
0x1c2: Push((int) 6336)
0x1c3: Push((int) 7130)
0x1c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c5: Pop(3)
0x1c6: PushEmpty(bool)
0x1c7: Stack[-1] = (bool) 0
0x1c8: PushEmpty(bool, object)
0x1c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ca: Call 0x16df

0x1cb: Pop(1)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1cd: PushEmpty(bool, object)
0x1ce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cf: Call 0x1525

0x1d0: Pop(1)
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1d2: Stack[-1] = (bool) 1
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d4: Push((int) 6470)
0x1d5: Push((int) 7167)
0x1d6: Push((int) 7133)
0x1d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d8: Pop(3)
0x1d9: PushEmpty(bool)
0x1da: Stack[-1] = (bool) 0
0x1db: PushEmpty(bool, object)
0x1dc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1dd: Call 0x1643

0x1de: Pop(1)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e0: PushEmpty(bool, object)
0x1e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e2: Call 0x1531

0x1e3: Pop(1)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e5: Stack[-1] = (bool) 1
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e7: Push((int) 6471)
0x1e8: Push((int) 7181)
0x1e9: Push((int) 7134)
0x1ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1eb: Pop(3)
0x1ec: PushEmpty(bool)
0x1ed: Stack[-1] = (bool) 0
0x1ee: PushEmpty(bool, object)
0x1ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f0: Call 0x1637

0x1f1: Pop(1)
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f3: PushEmpty(bool, object)
0x1f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f5: Call 0x153d

0x1f6: Pop(1)
0x1f7: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f8: Stack[-1] = (bool) 1
0x1f9: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fa: Push((int) 6474)
0x1fb: Push((int) 7191)
0x1fc: Push((int) 7137)
0x1fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fe: Pop(3)
0x1ff: PushEmpty(bool)
0x200: Stack[-1] = (bool) 0
0x201: PushEmpty(bool, object)
0x202: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x203: Call 0x16a3

0x204: Pop(1)
0x205: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x206: PushEmpty(bool, object)
0x207: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x208: Call 0x1549

0x209: Pop(1)
0x20a: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20b: Stack[-1] = (bool) 1
0x20c: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x20d: Push((int) 6476)
0x20e: Push((int) 7206)
0x20f: Push((int) 7139)
0x210: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x211: Pop(3)
0x212: PushEmpty(bool)
0x213: Stack[-1] = (bool) 0
0x214: PushEmpty(bool, object)
0x215: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x216: Call 0x15f1

0x217: Pop(1)
0x218: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x219: PushEmpty(bool, object)
0x21a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21b: Call 0x1555

0x21c: Pop(1)
0x21d: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21e: Stack[-1] = (bool) 1
0x21f: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x220: Push((int) 6481)
0x221: Push((int) 7220)
0x222: Push((int) 7144)
0x223: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x224: Pop(3)
0x225: PushEmpty(bool)
0x226: Stack[-1] = (bool) 0
0x227: PushEmpty(bool, object)
0x228: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x229: Call 0x1697

0x22a: Pop(1)
0x22b: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22c: PushEmpty(bool, object)
0x22d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22e: Call 0x1561

0x22f: Pop(1)
0x230: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x231: Stack[-1] = (bool) 1
0x232: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x233: Push((int) 6488)
0x234: Push((int) 7241)
0x235: Push((int) 7151)
0x236: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x237: Pop(3)
0x238: Push((int) 6502)
0x239: Push((int) -1)
0x23a: Push((int) 7166)
0x23b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23c: Pop(3)
0x23d: GOTO 0x240

0x23e: Return(); Pop(0)

0x23f: GOTO 0x195

0x240: PushEmpty(bool)
0x241: Call 0x13b0

0x242: Pop(0)
0x243: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x244: @ lshWaitForAnimEnd()
0x245: Pop(0)
0x246: Push( Stack[3 + Tasks[-1].StackPointer] )
0x247: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x248: GOTO 0x24e

0x249: PushEmpty(string)
0x24a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x24b: Call 0x1339

0x24c: Pop(1)
0x24d: GOTO 0x244

0x24e: GOTO 0x25d

0x24f: Push("all")
0x250: Push("idle")
0x251: @ PlayAnimation(Stack[-2], Stack[-1])
0x252: Pop(2)
0x253: @ WaitForAnimEnd()
0x254: Pop(0)
0x255: Push( Stack[3 + Tasks[-1].StackPointer] )
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: GOTO 0x25d

0x258: Push("all")
0x259: Push("idle")
0x25a: @ PlayAnimation(Stack[-2], Stack[-1])
0x25b: Pop(2)
0x25c: GOTO 0x253

0x25d: Return(); Pop(0)

0x25e: PushEmpty()
0x25f: PushEmpty(bool)
0x260: Call 0x13b0

0x261: Pop(0)
0x262: Pop(1); Push((bool) Stack[-1] == 0)
0x263: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x264: Return(); Pop(0)

0x265: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x266: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x267: Return(); Pop(0)

0x268: PushEmpty(string)
0x269: Stack[-1] = Stack[-2]
0x26a: Call 0x1339

0x26b: Pop(1)
0x26c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x26d: Return(); Pop(0)

0x26e: PushEmpty()
0x26f: Push((int) 1)
0x270: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x271: PushEmpty()
0x272: Call 0x134b

0x273: Pop(0)
0x274: Push((int) 6349)
0x275: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x276: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x277: PushEmpty(object, object)
0x278: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x279: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27a: Call 0x13b2

0x27b: Pop(2)
0x27c: Push((int) 7165)
0x27d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27f: PushEmpty(object, object)
0x280: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x281: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x282: Call 0x13b2

0x283: Pop(2)
0x284: Push((int) 6353)
0x285: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x286: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x287: PushEmpty(object, object)
0x288: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x289: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28a: Call 0x13b2

0x28b: Pop(2)
0x28c: Push((int) 7159)
0x28d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x28f: PushEmpty(object, object)
0x290: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x291: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x292: Call 0x13b8

0x293: Pop(2)
0x294: Push((int) 7160)
0x295: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x296: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x297: PushEmpty(object, object)
0x298: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x299: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29a: Call 0x13b8

0x29b: Pop(2)
0x29c: Push((int) 7156)
0x29d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29e: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x29f: PushEmpty(object, object)
0x2a0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a2: Call 0x13b8

0x2a3: Pop(2)
0x2a4: Push((int) 7157)
0x2a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a7: PushEmpty(object, object)
0x2a8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2aa: Call 0x13b8

0x2ab: Pop(2)
0x2ac: Push((int) 6343)
0x2ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2af: PushEmpty(object, object)
0x2b0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b2: Call 0x13b8

0x2b3: Pop(2)
0x2b4: Push((int) 7171)
0x2b5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2b7: PushEmpty(object, object)
0x2b8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ba: Call 0x13d5

0x2bb: Pop(2)
0x2bc: Push((int) 7180)
0x2bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2bf: PushEmpty(object, object)
0x2c0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c2: Call 0x13d5

0x2c3: Pop(2)
0x2c4: Push((int) 7178)
0x2c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c7: PushEmpty(object, object)
0x2c8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ca: Call 0x13d5

0x2cb: Pop(2)
0x2cc: Push((int) 7190)
0x2cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2cf: PushEmpty(object, object)
0x2d0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d2: Call 0x13db

0x2d3: Pop(2)
0x2d4: Push((int) 7205)
0x2d5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d7: PushEmpty(object, object)
0x2d8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2da: Call 0x13e1

0x2db: Pop(2)
0x2dc: Push((int) 7203)
0x2dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2df: PushEmpty(object, object)
0x2e0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e2: Call 0x13e1

0x2e3: Pop(2)
0x2e4: Push((int) 7200)
0x2e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e7: PushEmpty(object, object)
0x2e8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ea: Call 0x14cd

0x2eb: Pop(2)
0x2ec: Push((int) 7198)
0x2ed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2ef: PushEmpty(object, object)
0x2f0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f2: Call 0x13e1

0x2f3: Pop(2)
0x2f4: Push((int) 7213)
0x2f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f7: PushEmpty(object, object)
0x2f8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fa: Call 0x13e7

0x2fb: Pop(2)
0x2fc: Push((int) 7214)
0x2fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2fe: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2ff: PushEmpty(object, object)
0x300: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x301: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x302: Call 0x13e7

0x303: Pop(2)
0x304: Push((int) 7237)
0x305: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x307: PushEmpty(object, object)
0x308: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x309: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30a: Call 0x13ed

0x30b: Pop(2)
0x30c: Push((int) 7238)
0x30d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30f: PushEmpty(object, object)
0x310: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x311: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x312: Call 0x13ed

0x313: Pop(2)
0x314: Push((int) 7229)
0x315: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x317: PushEmpty(object, object)
0x318: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x319: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31a: Call 0x13ed

0x31b: Pop(2)
0x31c: Push((int) 7230)
0x31d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x31f: PushEmpty(object, object)
0x320: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x321: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x322: Call 0x13ed

0x323: Pop(2)
0x324: Push((int) 7244)
0x325: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x326: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x327: PushEmpty(object, object)
0x328: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x329: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32a: Call 0x14ef

0x32b: Pop(2)
0x32c: PushEmpty(object, object)
0x32d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x32e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32f: Call 0x13ff

0x330: Pop(2)
0x331: PushEmpty(object, object)
0x332: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x333: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x334: Call 0x13f9

0x335: Pop(2)
0x336: Push((int) 7249)
0x337: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x339: PushEmpty(object, object)
0x33a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x33b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33c: Call 0x13f9

0x33d: Pop(2)
0x33e: PushEmpty(object, object)
0x33f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x340: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x341: Call 0x13ff

0x342: Pop(2)
0x343: PushEmpty(object, object)
0x344: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x345: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x346: Call 0x14ef

0x347: Pop(2)
0x348: Push((int) 7250)
0x349: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34a: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x34b: PushEmpty(object, object)
0x34c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x34d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34e: Call 0x13f9

0x34f: Pop(2)
0x350: PushEmpty(object, object)
0x351: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x352: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x353: Call 0x14ef

0x354: Pop(2)
0x355: PushEmpty(object, object)
0x356: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x357: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x358: Call 0x13ff

0x359: Pop(2)
0x35a: Push((int) 7128)
0x35b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x35d: PushEmpty(string)
0x35e: Stack[-1] = "Neutral"
0x35f: Call 0x25e

0x360: Pop(1)
0x361: Push((int) 6465)
0x362: @@ SetMessage(Stack[-1])
0x363: Pop(1)
0x364: @@ ClearReplies()
0x365: Pop(0)
0x366: PushEmpty(bool)
0x367: Stack[-1] = (bool) 0
0x368: PushEmpty(bool, object)
0x369: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36a: Call 0x1501

0x36b: Pop(1)
0x36c: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x36d: PushEmpty(bool, object)
0x36e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36f: Call 0x1519

0x370: Pop(1)
0x371: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x372: Stack[-1] = (bool) 1
0x373: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x374: Push((int) 6466)
0x375: Push((int) 6344)
0x376: Push((int) 7129)
0x377: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x378: Pop(3)
0x379: PushEmpty(bool)
0x37a: Stack[-1] = (bool) 0
0x37b: PushEmpty(bool, object)
0x37c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37d: Call 0x1609

0x37e: Pop(1)
0x37f: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x380: PushEmpty(bool, object)
0x381: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x382: Call 0x150d

0x383: Pop(1)
0x384: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x385: Stack[-1] = (bool) 1
0x386: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x387: Push((int) 6467)
0x388: Push((int) 6336)
0x389: Push((int) 7130)
0x38a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38b: Pop(3)
0x38c: PushEmpty(bool)
0x38d: Stack[-1] = (bool) 0
0x38e: PushEmpty(bool, object)
0x38f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x390: Call 0x16df

0x391: Pop(1)
0x392: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x393: PushEmpty(bool, object)
0x394: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x395: Call 0x1525

0x396: Pop(1)
0x397: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x398: Stack[-1] = (bool) 1
0x399: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39a: Push((int) 6470)
0x39b: Push((int) 7167)
0x39c: Push((int) 7133)
0x39d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39e: Pop(3)
0x39f: PushEmpty(bool)
0x3a0: Stack[-1] = (bool) 0
0x3a1: PushEmpty(bool, object)
0x3a2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a3: Call 0x1643

0x3a4: Pop(1)
0x3a5: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3a6: PushEmpty(bool, object)
0x3a7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a8: Call 0x1531

0x3a9: Pop(1)
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3ab: Stack[-1] = (bool) 1
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3ad: Push((int) 6471)
0x3ae: Push((int) 7181)
0x3af: Push((int) 7134)
0x3b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b1: Pop(3)
0x3b2: PushEmpty(bool)
0x3b3: Stack[-1] = (bool) 0
0x3b4: PushEmpty(bool, object)
0x3b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b6: Call 0x1637

0x3b7: Pop(1)
0x3b8: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3b9: PushEmpty(bool, object)
0x3ba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3bb: Call 0x153d

0x3bc: Pop(1)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3be: Stack[-1] = (bool) 1
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c0: Push((int) 6474)
0x3c1: Push((int) 7191)
0x3c2: Push((int) 7137)
0x3c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c4: Pop(3)
0x3c5: PushEmpty(bool)
0x3c6: Stack[-1] = (bool) 0
0x3c7: PushEmpty(bool, object)
0x3c8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c9: Call 0x16a3

0x3ca: Pop(1)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3cc: PushEmpty(bool, object)
0x3cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ce: Call 0x1549

0x3cf: Pop(1)
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3d1: Stack[-1] = (bool) 1
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d3: Push((int) 6476)
0x3d4: Push((int) 7206)
0x3d5: Push((int) 7139)
0x3d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d7: Pop(3)
0x3d8: PushEmpty(bool)
0x3d9: Stack[-1] = (bool) 0
0x3da: PushEmpty(bool, object)
0x3db: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3dc: Call 0x15f1

0x3dd: Pop(1)
0x3de: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3df: PushEmpty(bool, object)
0x3e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e1: Call 0x1555

0x3e2: Pop(1)
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e4: Stack[-1] = (bool) 1
0x3e5: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e6: Push((int) 6481)
0x3e7: Push((int) 7220)
0x3e8: Push((int) 7144)
0x3e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ea: Pop(3)
0x3eb: PushEmpty(bool)
0x3ec: Stack[-1] = (bool) 0
0x3ed: PushEmpty(bool, object)
0x3ee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ef: Call 0x1697

0x3f0: Pop(1)
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f2: PushEmpty(bool, object)
0x3f3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f4: Call 0x1561

0x3f5: Pop(1)
0x3f6: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f7: Stack[-1] = (bool) 1
0x3f8: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3f9: Push((int) 6488)
0x3fa: Push((int) 7241)
0x3fb: Push((int) 7151)
0x3fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fd: Pop(3)
0x3fe: Push((int) 6502)
0x3ff: Push((int) -1)
0x400: Push((int) 7166)
0x401: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x402: Pop(3)
0x403: Return(); Pop(0)

0x404: Push((int) 7241)
0x405: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x406: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x407: PushEmpty(string)
0x408: Stack[-1] = "Neutral"
0x409: Call 0x25e

0x40a: Pop(1)
0x40b: Push((int) 6572)
0x40c: @@ SetMessage(Stack[-1])
0x40d: Pop(1)
0x40e: @@ ClearReplies()
0x40f: Pop(0)
0x410: Push((int) 6573)
0x411: Push((int) 7243)
0x412: Push((int) 7242)
0x413: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x414: Pop(3)
0x415: Return(); Pop(0)

0x416: Push((int) 7243)
0x417: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x418: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x419: PushEmpty(string)
0x41a: Stack[-1] = "Neutral"
0x41b: Call 0x25e

0x41c: Pop(1)
0x41d: Push((int) 6574)
0x41e: @@ SetMessage(Stack[-1])
0x41f: Pop(1)
0x420: @@ ClearReplies()
0x421: Pop(0)
0x422: Push((int) 6575)
0x423: Push((int) -1)
0x424: Push((int) 7244)
0x425: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x426: Pop(3)
0x427: PushEmpty(bool, object)
0x428: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x429: Call 0x156d

0x42a: Pop(1)
0x42b: Pop(1); Push((bool) Stack[-1] == 0)
0x42c: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x42d: Push((int) 6576)
0x42e: Push((int) 7248)
0x42f: Push((int) 7245)
0x430: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x431: Pop(3)
0x432: PushEmpty(bool, object)
0x433: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x434: Call 0x16eb

0x435: Pop(1)
0x436: Pop(1); Push((bool) Stack[-1] == 0)
0x437: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x438: Push((int) 6577)
0x439: Push((int) 7247)
0x43a: Push((int) 7246)
0x43b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43c: Pop(3)
0x43d: Return(); Pop(0)

0x43e: Push((int) 7247)
0x43f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x441: PushEmpty(string)
0x442: Stack[-1] = "Neutral"
0x443: Call 0x25e

0x444: Pop(1)
0x445: Push((int) 6578)
0x446: @@ SetMessage(Stack[-1])
0x447: Pop(1)
0x448: @@ ClearReplies()
0x449: Pop(0)
0x44a: Push((int) 6581)
0x44b: Push((int) -1)
0x44c: Push((int) 7250)
0x44d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44e: Pop(3)
0x44f: Return(); Pop(0)

0x450: Push((int) 7248)
0x451: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x453: PushEmpty(string)
0x454: Stack[-1] = "Neutral"
0x455: Call 0x25e

0x456: Pop(1)
0x457: Push((int) 6579)
0x458: @@ SetMessage(Stack[-1])
0x459: Pop(1)
0x45a: @@ ClearReplies()
0x45b: Pop(0)
0x45c: Push((int) 6580)
0x45d: Push((int) -1)
0x45e: Push((int) 7249)
0x45f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x460: Pop(3)
0x461: Return(); Pop(0)

0x462: Push((int) 7220)
0x463: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x464: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x465: PushEmpty(string)
0x466: Stack[-1] = "Neutral"
0x467: Call 0x25e

0x468: Pop(1)
0x469: Push((int) 6553)
0x46a: @@ SetMessage(Stack[-1])
0x46b: Pop(1)
0x46c: @@ ClearReplies()
0x46d: Pop(0)
0x46e: Push((int) 6554)
0x46f: Push((int) 7222)
0x470: Push((int) 7221)
0x471: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x472: Pop(3)
0x473: Push((int) 6557)
0x474: Push((int) 7225)
0x475: Push((int) 7224)
0x476: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x477: Pop(3)
0x478: Return(); Pop(0)

0x479: Push((int) 7225)
0x47a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47b: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x47c: PushEmpty(string)
0x47d: Stack[-1] = "Neutral"
0x47e: Call 0x25e

0x47f: Pop(1)
0x480: Push((int) 6558)
0x481: @@ SetMessage(Stack[-1])
0x482: Pop(1)
0x483: @@ ClearReplies()
0x484: Pop(0)
0x485: Push((int) 6559)
0x486: Push((int) 7231)
0x487: Push((int) 7226)
0x488: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x489: Pop(3)
0x48a: Push((int) 6560)
0x48b: Push((int) 7228)
0x48c: Push((int) 7227)
0x48d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48e: Pop(3)
0x48f: Return(); Pop(0)

0x490: Push((int) 7228)
0x491: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x492: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x493: PushEmpty(string)
0x494: Stack[-1] = "Neutral"
0x495: Call 0x25e

0x496: Pop(1)
0x497: Push((int) 6561)
0x498: @@ SetMessage(Stack[-1])
0x499: Pop(1)
0x49a: @@ ClearReplies()
0x49b: Pop(0)
0x49c: Push((int) 6562)
0x49d: Push((int) -1)
0x49e: Push((int) 7229)
0x49f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a0: Pop(3)
0x4a1: Push((int) 6563)
0x4a2: Push((int) -1)
0x4a3: Push((int) 7230)
0x4a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a5: Pop(3)
0x4a6: Return(); Pop(0)

0x4a7: Push((int) 7231)
0x4a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a9: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4aa: PushEmpty(string)
0x4ab: Stack[-1] = "Neutral"
0x4ac: Call 0x25e

0x4ad: Pop(1)
0x4ae: Push((int) 6564)
0x4af: @@ SetMessage(Stack[-1])
0x4b0: Pop(1)
0x4b1: @@ ClearReplies()
0x4b2: Pop(0)
0x4b3: Push((int) 6565)
0x4b4: Push((int) 7234)
0x4b5: Push((int) 7232)
0x4b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b7: Pop(3)
0x4b8: Push((int) 6566)
0x4b9: Push((int) 7234)
0x4ba: Push((int) 7233)
0x4bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bc: Pop(3)
0x4bd: Return(); Pop(0)

0x4be: Push((int) 7222)
0x4bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c0: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4c1: PushEmpty(string)
0x4c2: Stack[-1] = "Neutral"
0x4c3: Call 0x25e

0x4c4: Pop(1)
0x4c5: Push((int) 6555)
0x4c6: @@ SetMessage(Stack[-1])
0x4c7: Pop(1)
0x4c8: @@ ClearReplies()
0x4c9: Pop(0)
0x4ca: Push((int) 6556)
0x4cb: Push((int) 7234)
0x4cc: Push((int) 7223)
0x4cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ce: Pop(3)
0x4cf: Return(); Pop(0)

0x4d0: Push((int) 7234)
0x4d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d2: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4d3: PushEmpty(string)
0x4d4: Stack[-1] = "Neutral"
0x4d5: Call 0x25e

0x4d6: Pop(1)
0x4d7: Push((int) 6567)
0x4d8: @@ SetMessage(Stack[-1])
0x4d9: Pop(1)
0x4da: @@ ClearReplies()
0x4db: Pop(0)
0x4dc: Push((int) 6568)
0x4dd: Push((int) 7236)
0x4de: Push((int) 7235)
0x4df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e0: Pop(3)
0x4e1: Return(); Pop(0)

0x4e2: Push((int) 7236)
0x4e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4e5: PushEmpty(string)
0x4e6: Stack[-1] = "Neutral"
0x4e7: Call 0x25e

0x4e8: Pop(1)
0x4e9: Push((int) 6569)
0x4ea: @@ SetMessage(Stack[-1])
0x4eb: Pop(1)
0x4ec: @@ ClearReplies()
0x4ed: Pop(0)
0x4ee: Push((int) 6570)
0x4ef: Push((int) -1)
0x4f0: Push((int) 7237)
0x4f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f2: Pop(3)
0x4f3: Push((int) 6571)
0x4f4: Push((int) -1)
0x4f5: Push((int) 7238)
0x4f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f7: Pop(3)
0x4f8: Return(); Pop(0)

0x4f9: Push((int) 7206)
0x4fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4fb: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x4fc: PushEmpty(string)
0x4fd: Stack[-1] = "Neutral"
0x4fe: Call 0x25e

0x4ff: Pop(1)
0x500: Push((int) 6541)
0x501: @@ SetMessage(Stack[-1])
0x502: Pop(1)
0x503: @@ ClearReplies()
0x504: Pop(0)
0x505: Push((int) 6542)
0x506: Push((int) 7208)
0x507: Push((int) 7207)
0x508: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x509: Pop(3)
0x50a: Push((int) 6551)
0x50b: Push((int) 7208)
0x50c: Push((int) 7216)
0x50d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50e: Pop(3)
0x50f: Return(); Pop(0)

0x510: Push((int) 7208)
0x511: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x512: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x513: PushEmpty(string)
0x514: Stack[-1] = "Neutral"
0x515: Call 0x25e

0x516: Pop(1)
0x517: Push((int) 6543)
0x518: @@ SetMessage(Stack[-1])
0x519: Pop(1)
0x51a: @@ ClearReplies()
0x51b: Pop(0)
0x51c: Push((int) 6544)
0x51d: Push((int) 7210)
0x51e: Push((int) 7209)
0x51f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x520: Pop(3)
0x521: Push((int) 6552)
0x522: Push((int) 7212)
0x523: Push((int) 7218)
0x524: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x525: Pop(3)
0x526: Return(); Pop(0)

0x527: Push((int) 7210)
0x528: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x529: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x52a: PushEmpty(string)
0x52b: Stack[-1] = "Neutral"
0x52c: Call 0x25e

0x52d: Pop(1)
0x52e: Push((int) 6545)
0x52f: @@ SetMessage(Stack[-1])
0x530: Pop(1)
0x531: @@ ClearReplies()
0x532: Pop(0)
0x533: Push((int) 6546)
0x534: Push((int) 7212)
0x535: Push((int) 7211)
0x536: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x537: Pop(3)
0x538: Return(); Pop(0)

0x539: Push((int) 7212)
0x53a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53b: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x53c: PushEmpty(string)
0x53d: Stack[-1] = "Neutral"
0x53e: Call 0x25e

0x53f: Pop(1)
0x540: Push((int) 6547)
0x541: @@ SetMessage(Stack[-1])
0x542: Pop(1)
0x543: @@ ClearReplies()
0x544: Pop(0)
0x545: Push((int) 6548)
0x546: Push((int) -1)
0x547: Push((int) 7213)
0x548: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x549: Pop(3)
0x54a: Push((int) 6549)
0x54b: Push((int) -1)
0x54c: Push((int) 7214)
0x54d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54e: Pop(3)
0x54f: Return(); Pop(0)

0x550: Push((int) 7191)
0x551: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x552: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x553: PushEmpty(string)
0x554: Stack[-1] = "Neutral"
0x555: Call 0x25e

0x556: Pop(1)
0x557: Push((int) 6526)
0x558: @@ SetMessage(Stack[-1])
0x559: Pop(1)
0x55a: @@ ClearReplies()
0x55b: Pop(0)
0x55c: Push((int) 6527)
0x55d: Push((int) 7193)
0x55e: Push((int) 7192)
0x55f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x560: Pop(3)
0x561: Return(); Pop(0)

0x562: Push((int) 7193)
0x563: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x564: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x565: PushEmpty(string)
0x566: Stack[-1] = "Neutral"
0x567: Call 0x25e

0x568: Pop(1)
0x569: Push((int) 6528)
0x56a: @@ SetMessage(Stack[-1])
0x56b: Pop(1)
0x56c: @@ ClearReplies()
0x56d: Pop(0)
0x56e: Push((int) 6529)
0x56f: Push((int) 7195)
0x570: Push((int) 7194)
0x571: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x572: Pop(3)
0x573: Push((int) 6531)
0x574: Push((int) 7197)
0x575: Push((int) 7196)
0x576: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x577: Pop(3)
0x578: Return(); Pop(0)

0x579: Push((int) 7197)
0x57a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57b: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x57c: PushEmpty(string)
0x57d: Stack[-1] = "Neutral"
0x57e: Call 0x25e

0x57f: Pop(1)
0x580: Push((int) 6532)
0x581: @@ SetMessage(Stack[-1])
0x582: Pop(1)
0x583: @@ ClearReplies()
0x584: Pop(0)
0x585: Push((int) 6533)
0x586: Push((int) -1)
0x587: Push((int) 7198)
0x588: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x589: Pop(3)
0x58a: Return(); Pop(0)

0x58b: Push((int) 7195)
0x58c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58d: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x58e: PushEmpty(object, object)
0x58f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x590: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x591: Call 0x14cd

0x592: Pop(2)
0x593: PushEmpty(string)
0x594: Stack[-1] = "Neutral"
0x595: Call 0x25e

0x596: Pop(1)
0x597: Push((int) 6530)
0x598: @@ SetMessage(Stack[-1])
0x599: Pop(1)
0x59a: @@ ClearReplies()
0x59b: Pop(0)
0x59c: PushEmpty(bool, object)
0x59d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59e: Call 0x1613

0x59f: Pop(1)
0x5a0: Pop(1); Push((bool) Stack[-1] == 0)
0x5a1: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x5a2: Push((int) 6534)
0x5a3: Push((int) 7201)
0x5a4: Push((int) 7199)
0x5a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a6: Pop(3)
0x5a7: Push((int) 6535)
0x5a8: Push((int) -1)
0x5a9: Push((int) 7200)
0x5aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ab: Pop(3)
0x5ac: Return(); Pop(0)

0x5ad: Push((int) 7201)
0x5ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5af: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5b0: PushEmpty(string)
0x5b1: Stack[-1] = "Neutral"
0x5b2: Call 0x25e

0x5b3: Pop(1)
0x5b4: Push((int) 6536)
0x5b5: @@ SetMessage(Stack[-1])
0x5b6: Pop(1)
0x5b7: @@ ClearReplies()
0x5b8: Pop(0)
0x5b9: PushEmpty(bool, object)
0x5ba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5bb: Call 0x14f5

0x5bc: Pop(1)
0x5bd: Pop(1); Push((bool) Stack[-1] == 0)
0x5be: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5bf: Push((int) 6537)
0x5c0: Push((int) 7204)
0x5c1: Push((int) 7202)
0x5c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c3: Pop(3)
0x5c4: Push((int) 6538)
0x5c5: Push((int) -1)
0x5c6: Push((int) 7203)
0x5c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c8: Pop(3)
0x5c9: Return(); Pop(0)

0x5ca: Push((int) 7204)
0x5cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5cc: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5cd: PushEmpty(string)
0x5ce: Stack[-1] = "Neutral"
0x5cf: Call 0x25e

0x5d0: Pop(1)
0x5d1: Push((int) 6539)
0x5d2: @@ SetMessage(Stack[-1])
0x5d3: Pop(1)
0x5d4: @@ ClearReplies()
0x5d5: Pop(0)
0x5d6: Push((int) 6540)
0x5d7: Push((int) -1)
0x5d8: Push((int) 7205)
0x5d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5da: Pop(3)
0x5db: Return(); Pop(0)

0x5dc: Push((int) 7181)
0x5dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5de: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5df: PushEmpty(string)
0x5e0: Stack[-1] = "Neutral"
0x5e1: Call 0x25e

0x5e2: Pop(1)
0x5e3: Push((int) 6517)
0x5e4: @@ SetMessage(Stack[-1])
0x5e5: Pop(1)
0x5e6: @@ ClearReplies()
0x5e7: Pop(0)
0x5e8: Push((int) 6518)
0x5e9: Push((int) 7183)
0x5ea: Push((int) 7182)
0x5eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ec: Pop(3)
0x5ed: Return(); Pop(0)

0x5ee: Push((int) 7183)
0x5ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f0: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x5f1: PushEmpty(string)
0x5f2: Stack[-1] = "Neutral"
0x5f3: Call 0x25e

0x5f4: Pop(1)
0x5f5: Push((int) 6519)
0x5f6: @@ SetMessage(Stack[-1])
0x5f7: Pop(1)
0x5f8: @@ ClearReplies()
0x5f9: Pop(0)
0x5fa: Push((int) 6520)
0x5fb: Push((int) 7185)
0x5fc: Push((int) 7184)
0x5fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fe: Pop(3)
0x5ff: Push((int) 6522)
0x600: Push((int) 7187)
0x601: Push((int) 7186)
0x602: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x603: Pop(3)
0x604: Return(); Pop(0)

0x605: Push((int) 7187)
0x606: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x607: IF (Stack[-1] == 0) GOTO 0x617; Pop(1)

0x608: PushEmpty(string)
0x609: Stack[-1] = "Neutral"
0x60a: Call 0x25e

0x60b: Pop(1)
0x60c: Push((int) 6523)
0x60d: @@ SetMessage(Stack[-1])
0x60e: Pop(1)
0x60f: @@ ClearReplies()
0x610: Pop(0)
0x611: Push((int) 6525)
0x612: Push((int) -1)
0x613: Push((int) 7190)
0x614: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x615: Pop(3)
0x616: Return(); Pop(0)

0x617: Push((int) 7185)
0x618: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x619: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x61a: PushEmpty(string)
0x61b: Stack[-1] = "Neutral"
0x61c: Call 0x25e

0x61d: Pop(1)
0x61e: Push((int) 6521)
0x61f: @@ SetMessage(Stack[-1])
0x620: Pop(1)
0x621: @@ ClearReplies()
0x622: Pop(0)
0x623: Push((int) 6524)
0x624: Push((int) 7187)
0x625: Push((int) 7188)
0x626: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x627: Pop(3)
0x628: Return(); Pop(0)

0x629: Push((int) 7167)
0x62a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62b: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x62c: PushEmpty(string)
0x62d: Stack[-1] = "Neutral"
0x62e: Call 0x25e

0x62f: Pop(1)
0x630: Push((int) 6503)
0x631: @@ SetMessage(Stack[-1])
0x632: Pop(1)
0x633: @@ ClearReplies()
0x634: Pop(0)
0x635: Push((int) 6504)
0x636: Push((int) 7170)
0x637: Push((int) 7168)
0x638: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x639: Pop(3)
0x63a: Push((int) 6505)
0x63b: Push((int) 7173)
0x63c: Push((int) 7169)
0x63d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63e: Pop(3)
0x63f: Return(); Pop(0)

0x640: Push((int) 7173)
0x641: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x642: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x643: PushEmpty(string)
0x644: Stack[-1] = "Neutral"
0x645: Call 0x25e

0x646: Pop(1)
0x647: Push((int) 6509)
0x648: @@ SetMessage(Stack[-1])
0x649: Pop(1)
0x64a: @@ ClearReplies()
0x64b: Pop(0)
0x64c: Push((int) 6510)
0x64d: Push((int) 7175)
0x64e: Push((int) 7174)
0x64f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x650: Pop(3)
0x651: Return(); Pop(0)

0x652: Push((int) 7175)
0x653: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x654: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x655: PushEmpty(string)
0x656: Stack[-1] = "Neutral"
0x657: Call 0x25e

0x658: Pop(1)
0x659: Push((int) 6511)
0x65a: @@ SetMessage(Stack[-1])
0x65b: Pop(1)
0x65c: @@ ClearReplies()
0x65d: Pop(0)
0x65e: Push((int) 6512)
0x65f: Push((int) 7177)
0x660: Push((int) 7176)
0x661: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x662: Pop(3)
0x663: Return(); Pop(0)

0x664: Push((int) 7177)
0x665: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x666: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x667: PushEmpty(string)
0x668: Stack[-1] = "Neutral"
0x669: Call 0x25e

0x66a: Pop(1)
0x66b: Push((int) 6513)
0x66c: @@ SetMessage(Stack[-1])
0x66d: Pop(1)
0x66e: @@ ClearReplies()
0x66f: Pop(0)
0x670: Push((int) 6514)
0x671: Push((int) -1)
0x672: Push((int) 7178)
0x673: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x674: Pop(3)
0x675: Return(); Pop(0)

0x676: Push((int) 7170)
0x677: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x678: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x679: PushEmpty(string)
0x67a: Stack[-1] = "Neutral"
0x67b: Call 0x25e

0x67c: Pop(1)
0x67d: Push((int) 6506)
0x67e: @@ SetMessage(Stack[-1])
0x67f: Pop(1)
0x680: @@ ClearReplies()
0x681: Pop(0)
0x682: Push((int) 6507)
0x683: Push((int) -1)
0x684: Push((int) 7171)
0x685: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x686: Pop(3)
0x687: Push((int) 6508)
0x688: Push((int) 7179)
0x689: Push((int) 7172)
0x68a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68b: Pop(3)
0x68c: Return(); Pop(0)

0x68d: Push((int) 7179)
0x68e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x68f: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x690: PushEmpty(string)
0x691: Stack[-1] = "Neutral"
0x692: Call 0x25e

0x693: Pop(1)
0x694: Push((int) 6515)
0x695: @@ SetMessage(Stack[-1])
0x696: Pop(1)
0x697: @@ ClearReplies()
0x698: Pop(0)
0x699: Push((int) 6516)
0x69a: Push((int) -1)
0x69b: Push((int) 7180)
0x69c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69d: Pop(3)
0x69e: Return(); Pop(0)

0x69f: Push((int) 6336)
0x6a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a1: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6a2: PushEmpty(object, object)
0x6a3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6a5: Call 0x14a6

0x6a6: Pop(2)
0x6a7: PushEmpty(string)
0x6a8: Stack[-1] = "Neutral"
0x6a9: Call 0x25e

0x6aa: Pop(1)
0x6ab: Push((int) 5751)
0x6ac: @@ SetMessage(Stack[-1])
0x6ad: Pop(1)
0x6ae: @@ ClearReplies()
0x6af: Pop(0)
0x6b0: Push((int) 5752)
0x6b1: Push((int) 6338)
0x6b2: Push((int) 6337)
0x6b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b4: Pop(3)
0x6b5: Push((int) 5756)
0x6b6: Push((int) 6342)
0x6b7: Push((int) 6341)
0x6b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b9: Pop(3)
0x6ba: Return(); Pop(0)

0x6bb: Push((int) 6342)
0x6bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6bd: IF (Stack[-1] == 0) GOTO 0x6cd; Pop(1)

0x6be: PushEmpty(string)
0x6bf: Stack[-1] = "Neutral"
0x6c0: Call 0x25e

0x6c1: Pop(1)
0x6c2: Push((int) 5757)
0x6c3: @@ SetMessage(Stack[-1])
0x6c4: Pop(1)
0x6c5: @@ ClearReplies()
0x6c6: Pop(0)
0x6c7: Push((int) 5758)
0x6c8: Push((int) -1)
0x6c9: Push((int) 6343)
0x6ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cb: Pop(3)
0x6cc: Return(); Pop(0)

0x6cd: Push((int) 6338)
0x6ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6cf: IF (Stack[-1] == 0) GOTO 0x6e4; Pop(1)

0x6d0: PushEmpty(string)
0x6d1: Stack[-1] = "Neutral"
0x6d2: Call 0x25e

0x6d3: Pop(1)
0x6d4: Push((int) 5753)
0x6d5: @@ SetMessage(Stack[-1])
0x6d6: Pop(1)
0x6d7: @@ ClearReplies()
0x6d8: Pop(0)
0x6d9: Push((int) 5754)
0x6da: Push((int) 7158)
0x6db: Push((int) 6339)
0x6dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6dd: Pop(3)
0x6de: Push((int) 5755)
0x6df: Push((int) 7155)
0x6e0: Push((int) 6340)
0x6e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e2: Pop(3)
0x6e3: Return(); Pop(0)

0x6e4: Push((int) 7155)
0x6e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e6: IF (Stack[-1] == 0) GOTO 0x6fb; Pop(1)

0x6e7: PushEmpty(string)
0x6e8: Stack[-1] = "Neutral"
0x6e9: Call 0x25e

0x6ea: Pop(1)
0x6eb: Push((int) 6492)
0x6ec: @@ SetMessage(Stack[-1])
0x6ed: Pop(1)
0x6ee: @@ ClearReplies()
0x6ef: Pop(0)
0x6f0: Push((int) 6493)
0x6f1: Push((int) -1)
0x6f2: Push((int) 7156)
0x6f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f4: Pop(3)
0x6f5: Push((int) 6494)
0x6f6: Push((int) -1)
0x6f7: Push((int) 7157)
0x6f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f9: Pop(3)
0x6fa: Return(); Pop(0)

0x6fb: Push((int) 7158)
0x6fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6fd: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x6fe: PushEmpty(string)
0x6ff: Stack[-1] = "Neutral"
0x700: Call 0x25e

0x701: Pop(1)
0x702: Push((int) 6495)
0x703: @@ SetMessage(Stack[-1])
0x704: Pop(1)
0x705: @@ ClearReplies()
0x706: Pop(0)
0x707: Push((int) 6496)
0x708: Push((int) -1)
0x709: Push((int) 7159)
0x70a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70b: Pop(3)
0x70c: Push((int) 6497)
0x70d: Push((int) -1)
0x70e: Push((int) 7160)
0x70f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x710: Pop(3)
0x711: Return(); Pop(0)

0x712: Push((int) 6344)
0x713: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x714: IF (Stack[-1] == 0) GOTO 0x733; Pop(1)

0x715: PushEmpty(bool, object)
0x716: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x717: Call 0x150d

0x718: Pop(1)
0x719: IF (Stack[-1] == 0) GOTO 0x733; Pop(1)

0x71a: PushEmpty(object, object)
0x71b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x71c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x71d: Call 0x13f3

0x71e: Pop(2)
0x71f: PushEmpty(string)
0x720: Stack[-1] = "Neutral"
0x721: Call 0x25e

0x722: Pop(1)
0x723: Push((int) 5759)
0x724: @@ SetMessage(Stack[-1])
0x725: Pop(1)
0x726: @@ ClearReplies()
0x727: Pop(0)
0x728: Push((int) 5760)
0x729: Push((int) 6346)
0x72a: Push((int) 6345)
0x72b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72c: Pop(3)
0x72d: Push((int) 5769)
0x72e: Push((int) 7161)
0x72f: Push((int) 6354)
0x730: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x731: Pop(3)
0x732: Return(); Pop(0)

0x733: Push((int) 7161)
0x734: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x735: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x736: PushEmpty(string)
0x737: Stack[-1] = "Neutral"
0x738: Call 0x25e

0x739: Pop(1)
0x73a: Push((int) 6498)
0x73b: @@ SetMessage(Stack[-1])
0x73c: Pop(1)
0x73d: @@ ClearReplies()
0x73e: Pop(0)
0x73f: Push((int) 6499)
0x740: Push((int) 6346)
0x741: Push((int) 7162)
0x742: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x743: Pop(3)
0x744: Return(); Pop(0)

0x745: Push((int) 6346)
0x746: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x747: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x748: PushEmpty(string)
0x749: Stack[-1] = "Neutral"
0x74a: Call 0x25e

0x74b: Pop(1)
0x74c: Push((int) 5761)
0x74d: @@ SetMessage(Stack[-1])
0x74e: Pop(1)
0x74f: @@ ClearReplies()
0x750: Pop(0)
0x751: Push((int) 5762)
0x752: Push((int) 6348)
0x753: Push((int) 6347)
0x754: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x755: Pop(3)
0x756: Push((int) 5765)
0x757: Push((int) 6351)
0x758: Push((int) 6350)
0x759: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75a: Pop(3)
0x75b: Return(); Pop(0)

0x75c: Push((int) 6351)
0x75d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x75e: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x75f: PushEmpty(string)
0x760: Stack[-1] = "Neutral"
0x761: Call 0x25e

0x762: Pop(1)
0x763: Push((int) 5766)
0x764: @@ SetMessage(Stack[-1])
0x765: Pop(1)
0x766: @@ ClearReplies()
0x767: Pop(0)
0x768: Push((int) 5767)
0x769: Push((int) 7164)
0x76a: Push((int) 6352)
0x76b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76c: Pop(3)
0x76d: Push((int) 5768)
0x76e: Push((int) -1)
0x76f: Push((int) 6353)
0x770: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x771: Pop(3)
0x772: Return(); Pop(0)

0x773: Push((int) 7164)
0x774: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x775: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x776: PushEmpty(string)
0x777: Stack[-1] = "Neutral"
0x778: Call 0x25e

0x779: Pop(1)
0x77a: Push((int) 6500)
0x77b: @@ SetMessage(Stack[-1])
0x77c: Pop(1)
0x77d: @@ ClearReplies()
0x77e: Pop(0)
0x77f: Push((int) 6501)
0x780: Push((int) -1)
0x781: Push((int) 7165)
0x782: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x783: Pop(3)
0x784: Return(); Pop(0)

0x785: Push((int) 6348)
0x786: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x787: IF (Stack[-1] == 0) GOTO 0x797; Pop(1)

0x788: PushEmpty(string)
0x789: Stack[-1] = "Neutral"
0x78a: Call 0x25e

0x78b: Pop(1)
0x78c: Push((int) 5763)
0x78d: @@ SetMessage(Stack[-1])
0x78e: Pop(1)
0x78f: @@ ClearReplies()
0x790: Pop(0)
0x791: Push((int) 5764)
0x792: Push((int) -1)
0x793: Push((int) 6349)
0x794: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x795: Pop(3)
0x796: Return(); Pop(0)

0x797: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x798: PushEmpty(bool)
0x799: Call 0x13b0

0x79a: Pop(0)
0x79b: IF (Stack[-1] == 0) GOTO 0x79f; Pop(1)

0x79c: @ lshStopAnimation()
0x79d: Pop(0)
0x79e: GOTO 0x7a1

0x79f: @ StopAnimation()
0x7a0: Pop(0)
0x7a1: Return(); Pop(0)

0x7a2: GOTO 0x26f

0x7a3: Return(); Pop(0)

0x7a4: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x7a5: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x7a6: PushEmpty(bool, object)
0x7a7: Stack[-1] = Stack[-11]
0x7a8: Call 0x12fd

0x7a9: Pop(1)
0x7aa: Pop(1); Push((bool) Stack[-1] == 0)
0x7ab: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7ac: Stack[-10] = (int) -2
0x7ad: Return(); Pop(8)

0x7ae: @ CreateDialog(Stack[-4])
0x7af: Pop(0)
0x7b0: PushEmpty(int)
0x7b1: Call 0x13ac

0x7b2: Pop(0)
0x7b3: @@ SetNPCName(Stack[-1])
0x7b4: Pop(1)
0x7b5: PushEmpty(string)
0x7b6: Call 0x13ae

0x7b7: Pop(0)
0x7b8: @@ SetPhoto(Stack[-1])
0x7b9: Pop(1)
0x7ba: PushEmpty(int)
0x7bb: Call 0x175e

0x7bc: Pop(0)
0x7bd: @@ SetPlayerName(Stack[-1])
0x7be: Pop(1)
0x7bf: Stack[-2] = (int) -1
0x7c0: @ IsOverrideActive(Stack[-3])
0x7c1: Pop(0)
0x7c2: Push(Stack[-3])
0x7c3: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c4: Stack[-10] = (int) -2
0x7c5: Return(); Pop(8)

0x7c6: @ DoDialog(Stack[-4])
0x7c7: Pop(0)
0x7c8: PushEmpty(object, object)
0x7c9: Stack[-2] = Stack[-11]
0x7ca: Stack[-1] = Stack[-6]
0x7cb: Push(-2, 4); TaskCall(7)
0x7cc: Call 0x7e3

0x7cd: Pop(-2, 4); TaskReturn
0x7ce: Pop(2)
0x7cf: @@ IsDialogEnd(Stack[-1])
0x7d0: Pop(0)
0x7d1: Pop(0); Push((bool) Stack[-1] == 0)
0x7d2: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7d3: @ sync()
0x7d4: Pop(0)
0x7d5: @@ IsDialogEnd(Stack[-1])
0x7d6: Pop(0)
0x7d7: GOTO 0x7d1

0x7d8: PushEmpty(object)
0x7d9: Stack[-1] = Stack[-10]
0x7da: Call 0x1335

0x7db: Pop(1)
0x7dc: @ StopDialog(Stack[-4])
0x7dd: Pop(0)
0x7de: @@ GetReturnValue(Stack[-2])
0x7df: Pop(0)
0x7e0: Stack[-10] = Stack[-2]
0x7e1: Return(); Pop(8)

0x7e2: Stack[-4] = 0
0x7e3: PushEmpty()
0x7e4: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7e5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x7e6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7e7: Push((int) 1)
0x7e8: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x7e9: PushEmpty(string)
0x7ea: Stack[-1] = "Neutral"
0x7eb: Call 0x88b

0x7ec: Pop(1)
0x7ed: Push((int) 6864)
0x7ee: @@ SetMessage(Stack[-1])
0x7ef: Pop(1)
0x7f0: @@ ClearReplies()
0x7f1: Pop(0)
0x7f2: PushEmpty(bool)
0x7f3: Stack[-1] = (bool) 0
0x7f4: PushEmpty(bool, object)
0x7f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f6: Call 0x1579

0x7f7: Pop(1)
0x7f8: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7f9: PushEmpty(bool, object)
0x7fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7fb: Call 0x15c1

0x7fc: Pop(1)
0x7fd: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7fe: Stack[-1] = (bool) 1
0x7ff: IF (Stack[-1] == 0) GOTO 0x805; Pop(1)

0x800: Push((int) 6865)
0x801: Push((int) 7572)
0x802: Push((int) 7571)
0x803: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x804: Pop(3)
0x805: PushEmpty(bool)
0x806: Stack[-1] = (bool) 0
0x807: PushEmpty(bool, object)
0x808: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x809: Call 0x1585

0x80a: Pop(1)
0x80b: IF (Stack[-1] == 0) GOTO 0x812; Pop(1)

0x80c: PushEmpty(bool, object)
0x80d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80e: Call 0x15cd

0x80f: Pop(1)
0x810: IF (Stack[-1] == 0) GOTO 0x812; Pop(1)

0x811: Stack[-1] = (bool) 1
0x812: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x813: Push((int) 6868)
0x814: Push((int) 7575)
0x815: Push((int) 7574)
0x816: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x817: Pop(3)
0x818: PushEmpty(bool)
0x819: Stack[-1] = (bool) 0
0x81a: PushEmpty(bool, object)
0x81b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x81c: Call 0x1591

0x81d: Pop(1)
0x81e: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x81f: PushEmpty(bool, object)
0x820: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x821: Call 0x15d9

0x822: Pop(1)
0x823: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x824: Stack[-1] = (bool) 1
0x825: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x826: Push((int) 6870)
0x827: Push((int) 7577)
0x828: Push((int) 7576)
0x829: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82a: Pop(3)
0x82b: PushEmpty(bool)
0x82c: Stack[-1] = (bool) 0
0x82d: PushEmpty(bool, object)
0x82e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82f: Call 0x159d

0x830: Pop(1)
0x831: IF (Stack[-1] == 0) GOTO 0x838; Pop(1)

0x832: PushEmpty(bool, object)
0x833: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x834: Call 0x15e5

0x835: Pop(1)
0x836: IF (Stack[-1] == 0) GOTO 0x838; Pop(1)

0x837: Stack[-1] = (bool) 1
0x838: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x839: Push((int) 6874)
0x83a: Push((int) 7581)
0x83b: Push((int) 7580)
0x83c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83d: Pop(3)
0x83e: PushEmpty(bool)
0x83f: Stack[-1] = (bool) 0
0x840: PushEmpty(bool, object)
0x841: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x842: Call 0x15a9

0x843: Pop(1)
0x844: IF (Stack[-1] == 0) GOTO 0x84b; Pop(1)

0x845: PushEmpty(bool, object)
0x846: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x847: Call 0x15b5

0x848: Pop(1)
0x849: IF (Stack[-1] == 0) GOTO 0x84b; Pop(1)

0x84a: Stack[-1] = (bool) 1
0x84b: IF (Stack[-1] == 0) GOTO 0x851; Pop(1)

0x84c: Push((int) 6872)
0x84d: Push((int) 7579)
0x84e: Push((int) 7578)
0x84f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x850: Pop(3)
0x851: Push((int) 7531)
0x852: Push((int) -1)
0x853: Push((int) 8313)
0x854: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x855: Pop(3)
0x856: GOTO 0x86d

0x857: PushEmpty(string)
0x858: Stack[-1] = "Neutral"
0x859: Call 0x88b

0x85a: Pop(1)
0x85b: Push((int) 9203)
0x85c: @@ SetMessage(Stack[-1])
0x85d: Pop(1)
0x85e: @@ ClearReplies()
0x85f: Pop(0)
0x860: Push((int) 9204)
0x861: Push((int) 10097)
0x862: Push((int) 10096)
0x863: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x864: Pop(3)
0x865: Push((int) 9216)
0x866: Push((int) 10111)
0x867: Push((int) 10110)
0x868: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x869: Pop(3)
0x86a: GOTO 0x86d

0x86b: Return(); Pop(0)

0x86c: GOTO 0x7e7

0x86d: PushEmpty(bool)
0x86e: Call 0x13b0

0x86f: Pop(0)
0x870: IF (Stack[-1] == 0) GOTO 0x87c; Pop(1)

0x871: @ lshWaitForAnimEnd()
0x872: Pop(0)
0x873: Push( Stack[3 + Tasks[-1].StackPointer] )
0x874: IF (Stack[-1] == 0) GOTO 0x876; Pop(1)

0x875: GOTO 0x87b

0x876: PushEmpty(string)
0x877: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x878: Call 0x1339

0x879: Pop(1)
0x87a: GOTO 0x871

0x87b: GOTO 0x88a

0x87c: Push("all")
0x87d: Push("idle")
0x87e: @ PlayAnimation(Stack[-2], Stack[-1])
0x87f: Pop(2)
0x880: @ WaitForAnimEnd()
0x881: Pop(0)
0x882: Push( Stack[3 + Tasks[-1].StackPointer] )
0x883: IF (Stack[-1] == 0) GOTO 0x885; Pop(1)

0x884: GOTO 0x88a

0x885: Push("all")
0x886: Push("idle")
0x887: @ PlayAnimation(Stack[-2], Stack[-1])
0x888: Pop(2)
0x889: GOTO 0x880

0x88a: Return(); Pop(0)

0x88b: PushEmpty()
0x88c: PushEmpty(bool)
0x88d: Call 0x13b0

0x88e: Pop(0)
0x88f: Pop(1); Push((bool) Stack[-1] == 0)
0x890: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x891: Return(); Pop(0)

0x892: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x893: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x894: Return(); Pop(0)

0x895: PushEmpty(string)
0x896: Stack[-1] = Stack[-2]
0x897: Call 0x1339

0x898: Pop(1)
0x899: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x89a: Return(); Pop(0)

0x89b: PushEmpty()
0x89c: Push((int) 1)
0x89d: IF (Stack[-1] == 0) GOTO 0xc16; Pop(1)

0x89e: PushEmpty()
0x89f: Call 0x134b

0x8a0: Pop(0)
0x8a1: Push((int) 7899)
0x8a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8a3: IF (Stack[-1] == 0) GOTO 0x8b3; Pop(1)

0x8a4: PushEmpty(object, object)
0x8a5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8a6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8a7: Call 0x1405

0x8a8: Pop(2)
0x8a9: PushEmpty(object, object)
0x8aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8ac: Call 0x1429

0x8ad: Pop(2)
0x8ae: PushEmpty(object, object)
0x8af: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8b0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8b1: Call 0x14d3

0x8b2: Pop(2)
0x8b3: Push((int) 7900)
0x8b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8b5: IF (Stack[-1] == 0) GOTO 0x8c0; Pop(1)

0x8b6: PushEmpty(object, object)
0x8b7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8b9: Call 0x1405

0x8ba: Pop(2)
0x8bb: PushEmpty(object, object)
0x8bc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8bd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8be: Call 0x1429

0x8bf: Pop(2)
0x8c0: Push((int) 7913)
0x8c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8c2: IF (Stack[-1] == 0) GOTO 0x8c8; Pop(1)

0x8c3: PushEmpty(object, object)
0x8c4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8c6: Call 0x1405

0x8c7: Pop(2)
0x8c8: Push((int) 7909)
0x8c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8ca: IF (Stack[-1] == 0) GOTO 0x8d0; Pop(1)

0x8cb: PushEmpty(object, object)
0x8cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8ce: Call 0x1405

0x8cf: Pop(2)
0x8d0: Push((int) 7918)
0x8d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8d2: IF (Stack[-1] == 0) GOTO 0x8d8; Pop(1)

0x8d3: PushEmpty(object, object)
0x8d4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8d5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8d6: Call 0x140b

0x8d7: Pop(2)
0x8d8: Push((int) 7919)
0x8d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8da: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8db: PushEmpty(object, object)
0x8dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8de: Call 0x140b

0x8df: Pop(2)
0x8e0: Push((int) 7942)
0x8e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8e2: IF (Stack[-1] == 0) GOTO 0x8fc; Pop(1)

0x8e3: PushEmpty(object, object)
0x8e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8e6: Call 0x1411

0x8e7: Pop(2)
0x8e8: PushEmpty(object, object)
0x8e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8eb: Call 0x1449

0x8ec: Pop(2)
0x8ed: PushEmpty(object, object)
0x8ee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8ef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8f0: Call 0x1485

0x8f1: Pop(2)
0x8f2: PushEmpty(object, object)
0x8f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8f5: Call 0x13be

0x8f6: Pop(2)
0x8f7: PushEmpty(object, object)
0x8f8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8f9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8fa: Call 0x13c9

0x8fb: Pop(2)
0x8fc: Push((int) 7947)
0x8fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8fe: IF (Stack[-1] == 0) GOTO 0x918; Pop(1)

0x8ff: PushEmpty(object, object)
0x900: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x901: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x902: Call 0x1411

0x903: Pop(2)
0x904: PushEmpty(object, object)
0x905: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x906: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x907: Call 0x1449

0x908: Pop(2)
0x909: PushEmpty(object, object)
0x90a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x90b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x90c: Call 0x1485

0x90d: Pop(2)
0x90e: PushEmpty(object, object)
0x90f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x910: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x911: Call 0x13be

0x912: Pop(2)
0x913: PushEmpty(object, object)
0x914: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x915: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x916: Call 0x13c9

0x917: Pop(2)
0x918: Push((int) 7948)
0x919: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x91a: IF (Stack[-1] == 0) GOTO 0x925; Pop(1)

0x91b: PushEmpty(object, object)
0x91c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x91d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x91e: Call 0x1417

0x91f: Pop(2)
0x920: PushEmpty(object, object)
0x921: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x922: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x923: Call 0x1469

0x924: Pop(2)
0x925: Push((int) 7949)
0x926: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x927: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x928: PushEmpty(object, object)
0x929: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x92a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x92b: Call 0x1417

0x92c: Pop(2)
0x92d: PushEmpty(object, object)
0x92e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x92f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x930: Call 0x1469

0x931: Pop(2)
0x932: Push((int) 7950)
0x933: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x934: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x935: PushEmpty(object, object)
0x936: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x937: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x938: Call 0x141d

0x939: Pop(2)
0x93a: Push((int) 7570)
0x93b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93c: IF (Stack[-1] == 0) GOTO 0x9bf; Pop(1)

0x93d: PushEmpty(string)
0x93e: Stack[-1] = "Neutral"
0x93f: Call 0x88b

0x940: Pop(1)
0x941: Push((int) 6864)
0x942: @@ SetMessage(Stack[-1])
0x943: Pop(1)
0x944: @@ ClearReplies()
0x945: Pop(0)
0x946: PushEmpty(bool)
0x947: Stack[-1] = (bool) 0
0x948: PushEmpty(bool, object)
0x949: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x94a: Call 0x1579

0x94b: Pop(1)
0x94c: IF (Stack[-1] == 0) GOTO 0x953; Pop(1)

0x94d: PushEmpty(bool, object)
0x94e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x94f: Call 0x15c1

0x950: Pop(1)
0x951: IF (Stack[-1] == 0) GOTO 0x953; Pop(1)

0x952: Stack[-1] = (bool) 1
0x953: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x954: Push((int) 6865)
0x955: Push((int) 7572)
0x956: Push((int) 7571)
0x957: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x958: Pop(3)
0x959: PushEmpty(bool)
0x95a: Stack[-1] = (bool) 0
0x95b: PushEmpty(bool, object)
0x95c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x95d: Call 0x1585

0x95e: Pop(1)
0x95f: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x960: PushEmpty(bool, object)
0x961: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x962: Call 0x15cd

0x963: Pop(1)
0x964: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x965: Stack[-1] = (bool) 1
0x966: IF (Stack[-1] == 0) GOTO 0x96c; Pop(1)

0x967: Push((int) 6868)
0x968: Push((int) 7575)
0x969: Push((int) 7574)
0x96a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96b: Pop(3)
0x96c: PushEmpty(bool)
0x96d: Stack[-1] = (bool) 0
0x96e: PushEmpty(bool, object)
0x96f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x970: Call 0x1591

0x971: Pop(1)
0x972: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x973: PushEmpty(bool, object)
0x974: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x975: Call 0x15d9

0x976: Pop(1)
0x977: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x978: Stack[-1] = (bool) 1
0x979: IF (Stack[-1] == 0) GOTO 0x97f; Pop(1)

0x97a: Push((int) 6870)
0x97b: Push((int) 7577)
0x97c: Push((int) 7576)
0x97d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97e: Pop(3)
0x97f: PushEmpty(bool)
0x980: Stack[-1] = (bool) 0
0x981: PushEmpty(bool, object)
0x982: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x983: Call 0x159d

0x984: Pop(1)
0x985: IF (Stack[-1] == 0) GOTO 0x98c; Pop(1)

0x986: PushEmpty(bool, object)
0x987: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x988: Call 0x15e5

0x989: Pop(1)
0x98a: IF (Stack[-1] == 0) GOTO 0x98c; Pop(1)

0x98b: Stack[-1] = (bool) 1
0x98c: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x98d: Push((int) 6874)
0x98e: Push((int) 7581)
0x98f: Push((int) 7580)
0x990: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x991: Pop(3)
0x992: PushEmpty(bool)
0x993: Stack[-1] = (bool) 0
0x994: PushEmpty(bool, object)
0x995: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x996: Call 0x15a9

0x997: Pop(1)
0x998: IF (Stack[-1] == 0) GOTO 0x99f; Pop(1)

0x999: PushEmpty(bool, object)
0x99a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x99b: Call 0x15b5

0x99c: Pop(1)
0x99d: IF (Stack[-1] == 0) GOTO 0x99f; Pop(1)

0x99e: Stack[-1] = (bool) 1
0x99f: IF (Stack[-1] == 0) GOTO 0x9a5; Pop(1)

0x9a0: Push((int) 6872)
0x9a1: Push((int) 7579)
0x9a2: Push((int) 7578)
0x9a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a4: Pop(3)
0x9a5: Push((int) 7531)
0x9a6: Push((int) -1)
0x9a7: Push((int) 8313)
0x9a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a9: Pop(3)
0x9aa: Return(); Pop(0)

0x9ab: PushEmpty(string)
0x9ac: Stack[-1] = "Neutral"
0x9ad: Call 0x88b

0x9ae: Pop(1)
0x9af: Push((int) 9203)
0x9b0: @@ SetMessage(Stack[-1])
0x9b1: Pop(1)
0x9b2: @@ ClearReplies()
0x9b3: Pop(0)
0x9b4: Push((int) 9204)
0x9b5: Push((int) 10097)
0x9b6: Push((int) 10096)
0x9b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b8: Pop(3)
0x9b9: Push((int) 9216)
0x9ba: Push((int) 10111)
0x9bb: Push((int) 10110)
0x9bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9bd: Pop(3)
0x9be: Return(); Pop(0)

0x9bf: Push((int) 10111)
0x9c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9c1: IF (Stack[-1] == 0) GOTO 0x9d1; Pop(1)

0x9c2: PushEmpty(string)
0x9c3: Stack[-1] = "Neutral"
0x9c4: Call 0x88b

0x9c5: Pop(1)
0x9c6: Push((int) 9217)
0x9c7: @@ SetMessage(Stack[-1])
0x9c8: Pop(1)
0x9c9: @@ ClearReplies()
0x9ca: Pop(0)
0x9cb: Push((int) 9218)
0x9cc: Push((int) 10097)
0x9cd: Push((int) 10112)
0x9ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9cf: Pop(3)
0x9d0: Return(); Pop(0)

0x9d1: Push((int) 10097)
0x9d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9d3: IF (Stack[-1] == 0) GOTO 0x9e8; Pop(1)

0x9d4: PushEmpty(string)
0x9d5: Stack[-1] = "Neutral"
0x9d6: Call 0x88b

0x9d7: Pop(1)
0x9d8: Push((int) 9205)
0x9d9: @@ SetMessage(Stack[-1])
0x9da: Pop(1)
0x9db: @@ ClearReplies()
0x9dc: Pop(0)
0x9dd: Push((int) 9206)
0x9de: Push((int) 10099)
0x9df: Push((int) 10098)
0x9e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e1: Pop(3)
0x9e2: Push((int) 9210)
0x9e3: Push((int) 10103)
0x9e4: Push((int) 10102)
0x9e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e6: Pop(3)
0x9e7: Return(); Pop(0)

0x9e8: Push((int) 10103)
0x9e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ea: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x9eb: PushEmpty(string)
0x9ec: Stack[-1] = "Neutral"
0x9ed: Call 0x88b

0x9ee: Pop(1)
0x9ef: Push((int) 9211)
0x9f0: @@ SetMessage(Stack[-1])
0x9f1: Pop(1)
0x9f2: @@ ClearReplies()
0x9f3: Pop(0)
0x9f4: Push((int) 9212)
0x9f5: Push((int) 10105)
0x9f6: Push((int) 10104)
0x9f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f8: Pop(3)
0x9f9: Push((int) 9215)
0x9fa: Push((int) 10099)
0x9fb: Push((int) 10108)
0x9fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fd: Pop(3)
0x9fe: Return(); Pop(0)

0x9ff: Push((int) 10105)
0xa00: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa01: IF (Stack[-1] == 0) GOTO 0xa11; Pop(1)

0xa02: PushEmpty(string)
0xa03: Stack[-1] = "Neutral"
0xa04: Call 0x88b

0xa05: Pop(1)
0xa06: Push((int) 9213)
0xa07: @@ SetMessage(Stack[-1])
0xa08: Pop(1)
0xa09: @@ ClearReplies()
0xa0a: Pop(0)
0xa0b: Push((int) 9214)
0xa0c: Push((int) 10099)
0xa0d: Push((int) 10106)
0xa0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0f: Pop(3)
0xa10: Return(); Pop(0)

0xa11: Push((int) 10099)
0xa12: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa13: IF (Stack[-1] == 0) GOTO 0xa28; Pop(1)

0xa14: PushEmpty(string)
0xa15: Stack[-1] = "Neutral"
0xa16: Call 0x88b

0xa17: Pop(1)
0xa18: Push((int) 9207)
0xa19: @@ SetMessage(Stack[-1])
0xa1a: Pop(1)
0xa1b: @@ ClearReplies()
0xa1c: Pop(0)
0xa1d: Push((int) 9208)
0xa1e: Push((int) -1)
0xa1f: Push((int) 10100)
0xa20: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa21: Pop(3)
0xa22: Push((int) 9209)
0xa23: Push((int) -1)
0xa24: Push((int) 10101)
0xa25: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa26: Pop(3)
0xa27: Return(); Pop(0)

0xa28: Push((int) 7579)
0xa29: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2a: IF (Stack[-1] == 0) GOTO 0xa3a; Pop(1)

0xa2b: PushEmpty(string)
0xa2c: Stack[-1] = "Neutral"
0xa2d: Call 0x88b

0xa2e: Pop(1)
0xa2f: Push((int) 6873)
0xa30: @@ SetMessage(Stack[-1])
0xa31: Pop(1)
0xa32: @@ ClearReplies()
0xa33: Pop(0)
0xa34: Push((int) 7214)
0xa35: Push((int) -1)
0xa36: Push((int) 7950)
0xa37: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa38: Pop(3)
0xa39: Return(); Pop(0)

0xa3a: Push((int) 7581)
0xa3b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa3c: IF (Stack[-1] == 0) GOTO 0xa51; Pop(1)

0xa3d: PushEmpty(string)
0xa3e: Stack[-1] = "Neutral"
0xa3f: Call 0x88b

0xa40: Pop(1)
0xa41: Push((int) 6875)
0xa42: @@ SetMessage(Stack[-1])
0xa43: Pop(1)
0xa44: @@ ClearReplies()
0xa45: Pop(0)
0xa46: Push((int) 7212)
0xa47: Push((int) -1)
0xa48: Push((int) 7948)
0xa49: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4a: Pop(3)
0xa4b: Push((int) 7213)
0xa4c: Push((int) -1)
0xa4d: Push((int) 7949)
0xa4e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4f: Pop(3)
0xa50: Return(); Pop(0)

0xa51: Push((int) 7577)
0xa52: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa53: IF (Stack[-1] == 0) GOTO 0xa6d; Pop(1)

0xa54: PushEmpty(string)
0xa55: Stack[-1] = "Neutral"
0xa56: Call 0x88b

0xa57: Pop(1)
0xa58: Push((int) 6871)
0xa59: @@ SetMessage(Stack[-1])
0xa5a: Pop(1)
0xa5b: @@ ClearReplies()
0xa5c: Pop(0)
0xa5d: Push((int) 7192)
0xa5e: Push((int) 7926)
0xa5f: Push((int) 7924)
0xa60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa61: Pop(3)
0xa62: Push((int) 7193)
0xa63: Push((int) 7926)
0xa64: Push((int) 7925)
0xa65: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa66: Pop(3)
0xa67: Push((int) 7195)
0xa68: Push((int) 7928)
0xa69: Push((int) 7927)
0xa6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6b: Pop(3)
0xa6c: Return(); Pop(0)

0xa6d: Push((int) 7928)
0xa6e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa6f: IF (Stack[-1] == 0) GOTO 0xa7f; Pop(1)

0xa70: PushEmpty(string)
0xa71: Stack[-1] = "Neutral"
0xa72: Call 0x88b

0xa73: Pop(1)
0xa74: Push((int) 7196)
0xa75: @@ SetMessage(Stack[-1])
0xa76: Pop(1)
0xa77: @@ ClearReplies()
0xa78: Pop(0)
0xa79: Push((int) 7197)
0xa7a: Push((int) 7926)
0xa7b: Push((int) 7929)
0xa7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7d: Pop(3)
0xa7e: Return(); Pop(0)

0xa7f: Push((int) 7926)
0xa80: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa81: IF (Stack[-1] == 0) GOTO 0xaa1; Pop(1)

0xa82: PushEmpty(string)
0xa83: Stack[-1] = "Neutral"
0xa84: Call 0x88b

0xa85: Pop(1)
0xa86: Push((int) 7194)
0xa87: @@ SetMessage(Stack[-1])
0xa88: Pop(1)
0xa89: @@ ClearReplies()
0xa8a: Pop(0)
0xa8b: PushEmpty(bool, object)
0xa8c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa8d: Call 0x164f

0xa8e: Pop(1)
0xa8f: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa90: Push((int) 7198)
0xa91: Push((int) 7932)
0xa92: Push((int) 7931)
0xa93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa94: Pop(3)
0xa95: PushEmpty(bool, object)
0xa96: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa97: Call 0x164f

0xa98: Pop(1)
0xa99: Pop(1); Push((bool) Stack[-1] == 0)
0xa9a: IF (Stack[-1] == 0) GOTO 0xaa0; Pop(1)

0xa9b: Push((int) 7200)
0xa9c: Push((int) 7935)
0xa9d: Push((int) 7934)
0xa9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9f: Pop(3)
0xaa0: Return(); Pop(0)

0xaa1: Push((int) 7935)
0xaa2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa3: IF (Stack[-1] == 0) GOTO 0xab3; Pop(1)

0xaa4: PushEmpty(string)
0xaa5: Stack[-1] = "Neutral"
0xaa6: Call 0x88b

0xaa7: Pop(1)
0xaa8: Push((int) 7201)
0xaa9: @@ SetMessage(Stack[-1])
0xaaa: Pop(1)
0xaab: @@ ClearReplies()
0xaac: Pop(0)
0xaad: Push((int) 7202)
0xaae: Push((int) 7932)
0xaaf: Push((int) 7936)
0xab0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab1: Pop(3)
0xab2: Return(); Pop(0)

0xab3: Push((int) 7932)
0xab4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xab5: IF (Stack[-1] == 0) GOTO 0xaca; Pop(1)

0xab6: PushEmpty(string)
0xab7: Stack[-1] = "Neutral"
0xab8: Call 0x88b

0xab9: Pop(1)
0xaba: Push((int) 7199)
0xabb: @@ SetMessage(Stack[-1])
0xabc: Pop(1)
0xabd: @@ ClearReplies()
0xabe: Pop(0)
0xabf: Push((int) 7203)
0xac0: Push((int) 7939)
0xac1: Push((int) 7938)
0xac2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac3: Pop(3)
0xac4: Push((int) 7208)
0xac5: Push((int) 7944)
0xac6: Push((int) 7943)
0xac7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac8: Pop(3)
0xac9: Return(); Pop(0)

0xaca: Push((int) 7944)
0xacb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xacc: IF (Stack[-1] == 0) GOTO 0xadc; Pop(1)

0xacd: PushEmpty(string)
0xace: Stack[-1] = "Neutral"
0xacf: Call 0x88b

0xad0: Pop(1)
0xad1: Push((int) 7209)
0xad2: @@ SetMessage(Stack[-1])
0xad3: Pop(1)
0xad4: @@ ClearReplies()
0xad5: Pop(0)
0xad6: Push((int) 7210)
0xad7: Push((int) 7939)
0xad8: Push((int) 7945)
0xad9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xada: Pop(3)
0xadb: Return(); Pop(0)

0xadc: Push((int) 7939)
0xadd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xade: IF (Stack[-1] == 0) GOTO 0xaf3; Pop(1)

0xadf: PushEmpty(string)
0xae0: Stack[-1] = "Neutral"
0xae1: Call 0x88b

0xae2: Pop(1)
0xae3: Push((int) 7204)
0xae4: @@ SetMessage(Stack[-1])
0xae5: Pop(1)
0xae6: @@ ClearReplies()
0xae7: Pop(0)
0xae8: Push((int) 7205)
0xae9: Push((int) 7941)
0xaea: Push((int) 7940)
0xaeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaec: Pop(3)
0xaed: Push((int) 7211)
0xaee: Push((int) -1)
0xaef: Push((int) 7947)
0xaf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf1: Pop(3)
0xaf2: Return(); Pop(0)

0xaf3: Push((int) 7941)
0xaf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf5: IF (Stack[-1] == 0) GOTO 0xb05; Pop(1)

0xaf6: PushEmpty(string)
0xaf7: Stack[-1] = "Neutral"
0xaf8: Call 0x88b

0xaf9: Pop(1)
0xafa: Push((int) 7206)
0xafb: @@ SetMessage(Stack[-1])
0xafc: Pop(1)
0xafd: @@ ClearReplies()
0xafe: Pop(0)
0xaff: Push((int) 7207)
0xb00: Push((int) -1)
0xb01: Push((int) 7942)
0xb02: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb03: Pop(3)
0xb04: Return(); Pop(0)

0xb05: Push((int) 7575)
0xb06: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb07: IF (Stack[-1] == 0) GOTO 0xb1c; Pop(1)

0xb08: PushEmpty(object, object)
0xb09: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb0a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0b: Call 0x1423

0xb0c: Pop(2)
0xb0d: PushEmpty(string)
0xb0e: Stack[-1] = "Neutral"
0xb0f: Call 0x88b

0xb10: Pop(1)
0xb11: Push((int) 6869)
0xb12: @@ SetMessage(Stack[-1])
0xb13: Pop(1)
0xb14: @@ ClearReplies()
0xb15: Pop(0)
0xb16: Push((int) 7183)
0xb17: Push((int) 7915)
0xb18: Push((int) 7914)
0xb19: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1a: Pop(3)
0xb1b: Return(); Pop(0)

0xb1c: Push((int) 7915)
0xb1d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb1e: IF (Stack[-1] == 0) GOTO 0xb33; Pop(1)

0xb1f: PushEmpty(string)
0xb20: Stack[-1] = "Neutral"
0xb21: Call 0x88b

0xb22: Pop(1)
0xb23: Push((int) 7184)
0xb24: @@ SetMessage(Stack[-1])
0xb25: Pop(1)
0xb26: @@ ClearReplies()
0xb27: Pop(0)
0xb28: Push((int) 7185)
0xb29: Push((int) 7917)
0xb2a: Push((int) 7916)
0xb2b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2c: Pop(3)
0xb2d: Push((int) 7189)
0xb2e: Push((int) 7921)
0xb2f: Push((int) 7920)
0xb30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb31: Pop(3)
0xb32: Return(); Pop(0)

0xb33: Push((int) 7921)
0xb34: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb35: IF (Stack[-1] == 0) GOTO 0xb45; Pop(1)

0xb36: PushEmpty(string)
0xb37: Stack[-1] = "Neutral"
0xb38: Call 0x88b

0xb39: Pop(1)
0xb3a: Push((int) 7190)
0xb3b: @@ SetMessage(Stack[-1])
0xb3c: Pop(1)
0xb3d: @@ ClearReplies()
0xb3e: Pop(0)
0xb3f: Push((int) 7191)
0xb40: Push((int) 7917)
0xb41: Push((int) 7922)
0xb42: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb43: Pop(3)
0xb44: Return(); Pop(0)

0xb45: Push((int) 7917)
0xb46: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb47: IF (Stack[-1] == 0) GOTO 0xb5c; Pop(1)

0xb48: PushEmpty(string)
0xb49: Stack[-1] = "Neutral"
0xb4a: Call 0x88b

0xb4b: Pop(1)
0xb4c: Push((int) 7186)
0xb4d: @@ SetMessage(Stack[-1])
0xb4e: Pop(1)
0xb4f: @@ ClearReplies()
0xb50: Pop(0)
0xb51: Push((int) 7187)
0xb52: Push((int) -1)
0xb53: Push((int) 7918)
0xb54: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb55: Pop(3)
0xb56: Push((int) 7188)
0xb57: Push((int) -1)
0xb58: Push((int) 7919)
0xb59: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5a: Pop(3)
0xb5b: Return(); Pop(0)

0xb5c: Push((int) 7572)
0xb5d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb5e: IF (Stack[-1] == 0) GOTO 0xb73; Pop(1)

0xb5f: PushEmpty(string)
0xb60: Stack[-1] = "Neutral"
0xb61: Call 0x88b

0xb62: Pop(1)
0xb63: Push((int) 6866)
0xb64: @@ SetMessage(Stack[-1])
0xb65: Pop(1)
0xb66: @@ ClearReplies()
0xb67: Pop(0)
0xb68: Push((int) 6867)
0xb69: Push((int) 7894)
0xb6a: Push((int) 7573)
0xb6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb6c: Pop(3)
0xb6d: Push((int) 7164)
0xb6e: Push((int) 7901)
0xb6f: Push((int) 7893)
0xb70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb71: Pop(3)
0xb72: Return(); Pop(0)

0xb73: Push((int) 7901)
0xb74: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb75: IF (Stack[-1] == 0) GOTO 0xb85; Pop(1)

0xb76: PushEmpty(string)
0xb77: Stack[-1] = "Neutral"
0xb78: Call 0x88b

0xb79: Pop(1)
0xb7a: Push((int) 7172)
0xb7b: @@ SetMessage(Stack[-1])
0xb7c: Pop(1)
0xb7d: @@ ClearReplies()
0xb7e: Pop(0)
0xb7f: Push((int) 7173)
0xb80: Push((int) 7903)
0xb81: Push((int) 7902)
0xb82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb83: Pop(3)
0xb84: Return(); Pop(0)

0xb85: Push((int) 7903)
0xb86: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb87: IF (Stack[-1] == 0) GOTO 0xb97; Pop(1)

0xb88: PushEmpty(string)
0xb89: Stack[-1] = "Neutral"
0xb8a: Call 0x88b

0xb8b: Pop(1)
0xb8c: Push((int) 7174)
0xb8d: @@ SetMessage(Stack[-1])
0xb8e: Pop(1)
0xb8f: @@ ClearReplies()
0xb90: Pop(0)
0xb91: Push((int) 7175)
0xb92: Push((int) 7896)
0xb93: Push((int) 7904)
0xb94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb95: Pop(3)
0xb96: Return(); Pop(0)

0xb97: Push((int) 7894)
0xb98: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb99: IF (Stack[-1] == 0) GOTO 0xbb3; Pop(1)

0xb9a: PushEmpty(object, object)
0xb9b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb9d: Call 0x1423

0xb9e: Pop(2)
0xb9f: PushEmpty(string)
0xba0: Stack[-1] = "Neutral"
0xba1: Call 0x88b

0xba2: Pop(1)
0xba3: Push((int) 7165)
0xba4: @@ SetMessage(Stack[-1])
0xba5: Pop(1)
0xba6: @@ ClearReplies()
0xba7: Pop(0)
0xba8: Push((int) 7166)
0xba9: Push((int) 7896)
0xbaa: Push((int) 7895)
0xbab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbac: Pop(3)
0xbad: Push((int) 7176)
0xbae: Push((int) 7907)
0xbaf: Push((int) 7906)
0xbb0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb1: Pop(3)
0xbb2: Return(); Pop(0)

0xbb3: Push((int) 7907)
0xbb4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb5: IF (Stack[-1] == 0) GOTO 0xbca; Pop(1)

0xbb6: PushEmpty(string)
0xbb7: Stack[-1] = "Neutral"
0xbb8: Call 0x88b

0xbb9: Pop(1)
0xbba: Push((int) 7177)
0xbbb: @@ SetMessage(Stack[-1])
0xbbc: Pop(1)
0xbbd: @@ ClearReplies()
0xbbe: Pop(0)
0xbbf: Push((int) 7178)
0xbc0: Push((int) 7910)
0xbc1: Push((int) 7908)
0xbc2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc3: Pop(3)
0xbc4: Push((int) 7179)
0xbc5: Push((int) -1)
0xbc6: Push((int) 7909)
0xbc7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc8: Pop(3)
0xbc9: Return(); Pop(0)

0xbca: Push((int) 7910)
0xbcb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbcc: IF (Stack[-1] == 0) GOTO 0xbe1; Pop(1)

0xbcd: PushEmpty(string)
0xbce: Stack[-1] = "Neutral"
0xbcf: Call 0x88b

0xbd0: Pop(1)
0xbd1: Push((int) 7180)
0xbd2: @@ SetMessage(Stack[-1])
0xbd3: Pop(1)
0xbd4: @@ ClearReplies()
0xbd5: Pop(0)
0xbd6: Push((int) 7181)
0xbd7: Push((int) 7896)
0xbd8: Push((int) 7911)
0xbd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbda: Pop(3)
0xbdb: Push((int) 7182)
0xbdc: Push((int) -1)
0xbdd: Push((int) 7913)
0xbde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbdf: Pop(3)
0xbe0: Return(); Pop(0)

0xbe1: Push((int) 7896)
0xbe2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe3: IF (Stack[-1] == 0) GOTO 0xbf3; Pop(1)

0xbe4: PushEmpty(string)
0xbe5: Stack[-1] = "Neutral"
0xbe6: Call 0x88b

0xbe7: Pop(1)
0xbe8: Push((int) 7167)
0xbe9: @@ SetMessage(Stack[-1])
0xbea: Pop(1)
0xbeb: @@ ClearReplies()
0xbec: Pop(0)
0xbed: Push((int) 7168)
0xbee: Push((int) 7898)
0xbef: Push((int) 7897)
0xbf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf1: Pop(3)
0xbf2: Return(); Pop(0)

0xbf3: Push((int) 7898)
0xbf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf5: IF (Stack[-1] == 0) GOTO 0xc0a; Pop(1)

0xbf6: PushEmpty(string)
0xbf7: Stack[-1] = "Neutral"
0xbf8: Call 0x88b

0xbf9: Pop(1)
0xbfa: Push((int) 7169)
0xbfb: @@ SetMessage(Stack[-1])
0xbfc: Pop(1)
0xbfd: @@ ClearReplies()
0xbfe: Pop(0)
0xbff: Push((int) 7170)
0xc00: Push((int) -1)
0xc01: Push((int) 7899)
0xc02: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc03: Pop(3)
0xc04: Push((int) 7171)
0xc05: Push((int) -1)
0xc06: Push((int) 7900)
0xc07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc08: Pop(3)
0xc09: Return(); Pop(0)

0xc0a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc0b: PushEmpty(bool)
0xc0c: Call 0x13b0

0xc0d: Pop(0)
0xc0e: IF (Stack[-1] == 0) GOTO 0xc12; Pop(1)

0xc0f: @ lshStopAnimation()
0xc10: Pop(0)
0xc11: GOTO 0xc14

0xc12: @ StopAnimation()
0xc13: Pop(0)
0xc14: Return(); Pop(0)

0xc15: GOTO 0x89c

0xc16: Return(); Pop(0)

0xc17: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xc18: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xc19: PushEmpty(bool, object)
0xc1a: Stack[-1] = Stack[-11]
0xc1b: Call 0x12fd

0xc1c: Pop(1)
0xc1d: Pop(1); Push((bool) Stack[-1] == 0)
0xc1e: IF (Stack[-1] == 0) GOTO 0xc21; Pop(1)

0xc1f: Stack[-10] = (int) -2
0xc20: Return(); Pop(8)

0xc21: @ CreateDialog(Stack[-4])
0xc22: Pop(0)
0xc23: PushEmpty(int)
0xc24: Call 0x13ac

0xc25: Pop(0)
0xc26: @@ SetNPCName(Stack[-1])
0xc27: Pop(1)
0xc28: PushEmpty(string)
0xc29: Call 0x13ae

0xc2a: Pop(0)
0xc2b: @@ SetPhoto(Stack[-1])
0xc2c: Pop(1)
0xc2d: PushEmpty(int)
0xc2e: Call 0x175e

0xc2f: Pop(0)
0xc30: @@ SetPlayerName(Stack[-1])
0xc31: Pop(1)
0xc32: Stack[-2] = (int) -1
0xc33: @ IsOverrideActive(Stack[-3])
0xc34: Pop(0)
0xc35: Push(Stack[-3])
0xc36: IF (Stack[-1] == 0) GOTO 0xc39; Pop(1)

0xc37: Stack[-10] = (int) -2
0xc38: Return(); Pop(8)

0xc39: @ DoDialog(Stack[-4])
0xc3a: Pop(0)
0xc3b: PushEmpty(object, object)
0xc3c: Stack[-2] = Stack[-11]
0xc3d: Stack[-1] = Stack[-6]
0xc3e: Push(-2, 4); TaskCall(9)
0xc3f: Call 0xc56

0xc40: Pop(-2, 4); TaskReturn
0xc41: Pop(2)
0xc42: @@ IsDialogEnd(Stack[-1])
0xc43: Pop(0)
0xc44: Pop(0); Push((bool) Stack[-1] == 0)
0xc45: IF (Stack[-1] == 0) GOTO 0xc4b; Pop(1)

0xc46: @ sync()
0xc47: Pop(0)
0xc48: @@ IsDialogEnd(Stack[-1])
0xc49: Pop(0)
0xc4a: GOTO 0xc44

0xc4b: PushEmpty(object)
0xc4c: Stack[-1] = Stack[-10]
0xc4d: Call 0x1335

0xc4e: Pop(1)
0xc4f: @ StopDialog(Stack[-4])
0xc50: Pop(0)
0xc51: @@ GetReturnValue(Stack[-2])
0xc52: Pop(0)
0xc53: Stack[-10] = Stack[-2]
0xc54: Return(); Pop(8)

0xc55: Stack[-4] = 0
0xc56: PushEmpty()
0xc57: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xc58: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xc59: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xc5a: Push((int) 1)
0xc5b: IF (Stack[-1] == 0) GOTO 0xc95; Pop(1)

0xc5c: PushEmpty(bool)
0xc5d: Stack[-1] = (bool) 0
0xc5e: PushEmpty(bool, object)
0xc5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc60: Call 0x16af

0xc61: Pop(1)
0xc62: IF (Stack[-1] == 0) GOTO 0xc6a; Pop(1)

0xc63: PushEmpty(bool, object)
0xc64: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc65: Call 0x15fd

0xc66: Pop(1)
0xc67: Pop(1); Push((bool) Stack[-1] == 0)
0xc68: IF (Stack[-1] == 0) GOTO 0xc6a; Pop(1)

0xc69: Stack[-1] = (bool) 1
0xc6a: IF (Stack[-1] == 0) GOTO 0xc84; Pop(1)

0xc6b: PushEmpty(object, object)
0xc6c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6e: Call 0x14e3

0xc6f: Pop(2)
0xc70: PushEmpty(string)
0xc71: Stack[-1] = "Neutral"
0xc72: Call 0xcb3

0xc73: Pop(1)
0xc74: Push((int) 9762)
0xc75: @@ SetMessage(Stack[-1])
0xc76: Pop(1)
0xc77: @@ ClearReplies()
0xc78: Pop(0)
0xc79: Push((int) 9763)
0xc7a: Push((int) 10732)
0xc7b: Push((int) 10753)
0xc7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7d: Pop(3)
0xc7e: Push((int) 9770)
0xc7f: Push((int) 10754)
0xc80: Push((int) 10761)
0xc81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc82: Pop(3)
0xc83: GOTO 0xc95

0xc84: PushEmpty(string)
0xc85: Stack[-1] = "Neutral"
0xc86: Call 0xcb3

0xc87: Pop(1)
0xc88: Push((int) 15310)
0xc89: @@ SetMessage(Stack[-1])
0xc8a: Pop(1)
0xc8b: @@ ClearReplies()
0xc8c: Pop(0)
0xc8d: Push((int) 15311)
0xc8e: Push((int) -1)
0xc8f: Push((int) 16549)
0xc90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc91: Pop(3)
0xc92: GOTO 0xc95

0xc93: Return(); Pop(0)

0xc94: GOTO 0xc5a

0xc95: PushEmpty(bool)
0xc96: Call 0x13b0

0xc97: Pop(0)
0xc98: IF (Stack[-1] == 0) GOTO 0xca4; Pop(1)

0xc99: @ lshWaitForAnimEnd()
0xc9a: Pop(0)
0xc9b: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc9c: IF (Stack[-1] == 0) GOTO 0xc9e; Pop(1)

0xc9d: GOTO 0xca3

0xc9e: PushEmpty(string)
0xc9f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xca0: Call 0x1339

0xca1: Pop(1)
0xca2: GOTO 0xc99

0xca3: GOTO 0xcb2

0xca4: Push("all")
0xca5: Push("idle")
0xca6: @ PlayAnimation(Stack[-2], Stack[-1])
0xca7: Pop(2)
0xca8: @ WaitForAnimEnd()
0xca9: Pop(0)
0xcaa: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcab: IF (Stack[-1] == 0) GOTO 0xcad; Pop(1)

0xcac: GOTO 0xcb2

0xcad: Push("all")
0xcae: Push("idle")
0xcaf: @ PlayAnimation(Stack[-2], Stack[-1])
0xcb0: Pop(2)
0xcb1: GOTO 0xca8

0xcb2: Return(); Pop(0)

0xcb3: PushEmpty()
0xcb4: PushEmpty(bool)
0xcb5: Call 0x13b0

0xcb6: Pop(0)
0xcb7: Pop(1); Push((bool) Stack[-1] == 0)
0xcb8: IF (Stack[-1] == 0) GOTO 0xcba; Pop(1)

0xcb9: Return(); Pop(0)

0xcba: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xcbb: IF (Stack[-1] == 0) GOTO 0xcbd; Pop(1)

0xcbc: Return(); Pop(0)

0xcbd: PushEmpty(string)
0xcbe: Stack[-1] = Stack[-2]
0xcbf: Call 0x1339

0xcc0: Pop(1)
0xcc1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcc2: Return(); Pop(0)

0xcc3: PushEmpty()
0xcc4: Push((int) 1)
0xcc5: IF (Stack[-1] == 0) GOTO 0xdc2; Pop(1)

0xcc6: PushEmpty()
0xcc7: Call 0x134b

0xcc8: Pop(0)
0xcc9: Push((int) 10740)
0xcca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xccb: IF (Stack[-1] == 0) GOTO 0xcd6; Pop(1)

0xccc: PushEmpty(object, object)
0xccd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xccf: Call 0x1495

0xcd0: Pop(2)
0xcd1: PushEmpty(object, object)
0xcd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcd4: Call 0x13cf

0xcd5: Pop(2)
0xcd6: Push((int) 10752)
0xcd7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd8: IF (Stack[-1] == 0) GOTO 0xd10; Pop(1)

0xcd9: PushEmpty(bool)
0xcda: Stack[-1] = (bool) 0
0xcdb: PushEmpty(bool, object)
0xcdc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcdd: Call 0x16af

0xcde: Pop(1)
0xcdf: IF (Stack[-1] == 0) GOTO 0xce7; Pop(1)

0xce0: PushEmpty(bool, object)
0xce1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xce2: Call 0x15fd

0xce3: Pop(1)
0xce4: Pop(1); Push((bool) Stack[-1] == 0)
0xce5: IF (Stack[-1] == 0) GOTO 0xce7; Pop(1)

0xce6: Stack[-1] = (bool) 1
0xce7: IF (Stack[-1] == 0) GOTO 0xd01; Pop(1)

0xce8: PushEmpty(object, object)
0xce9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xceb: Call 0x14e3

0xcec: Pop(2)
0xced: PushEmpty(string)
0xcee: Stack[-1] = "Neutral"
0xcef: Call 0xcb3

0xcf0: Pop(1)
0xcf1: Push((int) 9762)
0xcf2: @@ SetMessage(Stack[-1])
0xcf3: Pop(1)
0xcf4: @@ ClearReplies()
0xcf5: Pop(0)
0xcf6: Push((int) 9763)
0xcf7: Push((int) 10732)
0xcf8: Push((int) 10753)
0xcf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfa: Pop(3)
0xcfb: Push((int) 9770)
0xcfc: Push((int) 10754)
0xcfd: Push((int) 10761)
0xcfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcff: Pop(3)
0xd00: Return(); Pop(0)

0xd01: PushEmpty(string)
0xd02: Stack[-1] = "Neutral"
0xd03: Call 0xcb3

0xd04: Pop(1)
0xd05: Push((int) 15310)
0xd06: @@ SetMessage(Stack[-1])
0xd07: Pop(1)
0xd08: @@ ClearReplies()
0xd09: Pop(0)
0xd0a: Push((int) 15311)
0xd0b: Push((int) -1)
0xd0c: Push((int) 16549)
0xd0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0e: Pop(3)
0xd0f: Return(); Pop(0)

0xd10: Push((int) 10754)
0xd11: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd12: IF (Stack[-1] == 0) GOTO 0xd27; Pop(1)

0xd13: PushEmpty(string)
0xd14: Stack[-1] = "Neutral"
0xd15: Call 0xcb3

0xd16: Pop(1)
0xd17: Push((int) 9764)
0xd18: @@ SetMessage(Stack[-1])
0xd19: Pop(1)
0xd1a: @@ ClearReplies()
0xd1b: Pop(0)
0xd1c: Push((int) 9765)
0xd1d: Push((int) 10756)
0xd1e: Push((int) 10755)
0xd1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd20: Pop(3)
0xd21: Push((int) 9769)
0xd22: Push((int) 10756)
0xd23: Push((int) 10759)
0xd24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd25: Pop(3)
0xd26: Return(); Pop(0)

0xd27: Push((int) 10756)
0xd28: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd29: IF (Stack[-1] == 0) GOTO 0xd3e; Pop(1)

0xd2a: PushEmpty(string)
0xd2b: Stack[-1] = "Neutral"
0xd2c: Call 0xcb3

0xd2d: Pop(1)
0xd2e: Push((int) 9766)
0xd2f: @@ SetMessage(Stack[-1])
0xd30: Pop(1)
0xd31: @@ ClearReplies()
0xd32: Pop(0)
0xd33: Push((int) 9767)
0xd34: Push((int) -1)
0xd35: Push((int) 10757)
0xd36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd37: Pop(3)
0xd38: Push((int) 9768)
0xd39: Push((int) -1)
0xd3a: Push((int) 10758)
0xd3b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3c: Pop(3)
0xd3d: Return(); Pop(0)

0xd3e: Push((int) 10732)
0xd3f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd40: IF (Stack[-1] == 0) GOTO 0xd5a; Pop(1)

0xd41: PushEmpty(string)
0xd42: Stack[-1] = "Neutral"
0xd43: Call 0xcb3

0xd44: Pop(1)
0xd45: Push((int) 9746)
0xd46: @@ SetMessage(Stack[-1])
0xd47: Pop(1)
0xd48: @@ ClearReplies()
0xd49: Pop(0)
0xd4a: Push((int) 9747)
0xd4b: Push((int) 10734)
0xd4c: Push((int) 10733)
0xd4d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4e: Pop(3)
0xd4f: Push((int) 9757)
0xd50: Push((int) 10734)
0xd51: Push((int) 10744)
0xd52: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd53: Pop(3)
0xd54: Push((int) 9758)
0xd55: Push((int) 10747)
0xd56: Push((int) 10746)
0xd57: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd58: Pop(3)
0xd59: Return(); Pop(0)

0xd5a: Push((int) 10747)
0xd5b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5c: IF (Stack[-1] == 0) GOTO 0xd71; Pop(1)

0xd5d: PushEmpty(string)
0xd5e: Stack[-1] = "Neutral"
0xd5f: Call 0xcb3

0xd60: Pop(1)
0xd61: Push((int) 9759)
0xd62: @@ SetMessage(Stack[-1])
0xd63: Pop(1)
0xd64: @@ ClearReplies()
0xd65: Pop(0)
0xd66: Push((int) 9760)
0xd67: Push((int) 10734)
0xd68: Push((int) 10748)
0xd69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6a: Pop(3)
0xd6b: Push((int) 9761)
0xd6c: Push((int) 10734)
0xd6d: Push((int) 10750)
0xd6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6f: Pop(3)
0xd70: Return(); Pop(0)

0xd71: Push((int) 10734)
0xd72: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd73: IF (Stack[-1] == 0) GOTO 0xd88; Pop(1)

0xd74: PushEmpty(string)
0xd75: Stack[-1] = "Neutral"
0xd76: Call 0xcb3

0xd77: Pop(1)
0xd78: Push((int) 9748)
0xd79: @@ SetMessage(Stack[-1])
0xd7a: Pop(1)
0xd7b: @@ ClearReplies()
0xd7c: Pop(0)
0xd7d: Push((int) 9749)
0xd7e: Push((int) 10736)
0xd7f: Push((int) 10735)
0xd80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd81: Pop(3)
0xd82: Push((int) 9756)
0xd83: Push((int) -1)
0xd84: Push((int) 10743)
0xd85: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd86: Pop(3)
0xd87: Return(); Pop(0)

0xd88: Push((int) 10736)
0xd89: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd8a: IF (Stack[-1] == 0) GOTO 0xd9f; Pop(1)

0xd8b: PushEmpty(string)
0xd8c: Stack[-1] = "Neutral"
0xd8d: Call 0xcb3

0xd8e: Pop(1)
0xd8f: Push((int) 9750)
0xd90: @@ SetMessage(Stack[-1])
0xd91: Pop(1)
0xd92: @@ ClearReplies()
0xd93: Pop(0)
0xd94: Push((int) 9751)
0xd95: Push((int) 10738)
0xd96: Push((int) 10737)
0xd97: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd98: Pop(3)
0xd99: Push((int) 9755)
0xd9a: Push((int) 10738)
0xd9b: Push((int) 10741)
0xd9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9d: Pop(3)
0xd9e: Return(); Pop(0)

0xd9f: Push((int) 10738)
0xda0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda1: IF (Stack[-1] == 0) GOTO 0xdb6; Pop(1)

0xda2: PushEmpty(string)
0xda3: Stack[-1] = "Neutral"
0xda4: Call 0xcb3

0xda5: Pop(1)
0xda6: Push((int) 9752)
0xda7: @@ SetMessage(Stack[-1])
0xda8: Pop(1)
0xda9: @@ ClearReplies()
0xdaa: Pop(0)
0xdab: Push((int) 9753)
0xdac: Push((int) -1)
0xdad: Push((int) 10739)
0xdae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdaf: Pop(3)
0xdb0: Push((int) 9754)
0xdb1: Push((int) -1)
0xdb2: Push((int) 10740)
0xdb3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb4: Pop(3)
0xdb5: Return(); Pop(0)

0xdb6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xdb7: PushEmpty(bool)
0xdb8: Call 0x13b0

0xdb9: Pop(0)
0xdba: IF (Stack[-1] == 0) GOTO 0xdbe; Pop(1)

0xdbb: @ lshStopAnimation()
0xdbc: Pop(0)
0xdbd: GOTO 0xdc0

0xdbe: @ StopAnimation()
0xdbf: Pop(0)
0xdc0: Return(); Pop(0)

0xdc1: GOTO 0xcc4

0xdc2: Return(); Pop(0)

0xdc3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xdc4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xdc5: PushEmpty(bool, object)
0xdc6: Stack[-1] = Stack[-11]
0xdc7: Call 0x12fd

0xdc8: Pop(1)
0xdc9: Pop(1); Push((bool) Stack[-1] == 0)
0xdca: IF (Stack[-1] == 0) GOTO 0xdcd; Pop(1)

0xdcb: Stack[-10] = (int) -2
0xdcc: Return(); Pop(8)

0xdcd: @ CreateDialog(Stack[-4])
0xdce: Pop(0)
0xdcf: PushEmpty(int)
0xdd0: Call 0x13ac

0xdd1: Pop(0)
0xdd2: @@ SetNPCName(Stack[-1])
0xdd3: Pop(1)
0xdd4: PushEmpty(string)
0xdd5: Call 0x13ae

0xdd6: Pop(0)
0xdd7: @@ SetPhoto(Stack[-1])
0xdd8: Pop(1)
0xdd9: PushEmpty(int)
0xdda: Call 0x175e

0xddb: Pop(0)
0xddc: @@ SetPlayerName(Stack[-1])
0xddd: Pop(1)
0xdde: Stack[-2] = (int) -1
0xddf: @ IsOverrideActive(Stack[-3])
0xde0: Pop(0)
0xde1: Push(Stack[-3])
0xde2: IF (Stack[-1] == 0) GOTO 0xde5; Pop(1)

0xde3: Stack[-10] = (int) -2
0xde4: Return(); Pop(8)

0xde5: @ DoDialog(Stack[-4])
0xde6: Pop(0)
0xde7: PushEmpty(object, object)
0xde8: Stack[-2] = Stack[-11]
0xde9: Stack[-1] = Stack[-6]
0xdea: Push(-2, 4); TaskCall(11)
0xdeb: Call 0xe02

0xdec: Pop(-2, 4); TaskReturn
0xded: Pop(2)
0xdee: @@ IsDialogEnd(Stack[-1])
0xdef: Pop(0)
0xdf0: Pop(0); Push((bool) Stack[-1] == 0)
0xdf1: IF (Stack[-1] == 0) GOTO 0xdf7; Pop(1)

0xdf2: @ sync()
0xdf3: Pop(0)
0xdf4: @@ IsDialogEnd(Stack[-1])
0xdf5: Pop(0)
0xdf6: GOTO 0xdf0

0xdf7: PushEmpty(object)
0xdf8: Stack[-1] = Stack[-10]
0xdf9: Call 0x1335

0xdfa: Pop(1)
0xdfb: @ StopDialog(Stack[-4])
0xdfc: Pop(0)
0xdfd: @@ GetReturnValue(Stack[-2])
0xdfe: Pop(0)
0xdff: Stack[-10] = Stack[-2]
0xe00: Return(); Pop(8)

0xe01: Stack[-4] = 0
0xe02: PushEmpty()
0xe03: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xe04: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xe05: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xe06: Push((int) 1)
0xe07: IF (Stack[-1] == 0) GOTO 0xe23; Pop(1)

0xe08: PushEmpty(string)
0xe09: Stack[-1] = "Neutral"
0xe0a: Call 0xe41

0xe0b: Pop(1)
0xe0c: Push((int) 13720)
0xe0d: @@ SetMessage(Stack[-1])
0xe0e: Pop(1)
0xe0f: @@ ClearReplies()
0xe10: Pop(0)
0xe11: PushEmpty(bool, object)
0xe12: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe13: Call 0x162b

0xe14: Pop(1)
0xe15: IF (Stack[-1] == 0) GOTO 0xe1b; Pop(1)

0xe16: Push((int) 13721)
0xe17: Push((int) 13787)
0xe18: Push((int) 14987)
0xe19: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1a: Pop(3)
0xe1b: Push((int) 13722)
0xe1c: Push((int) -1)
0xe1d: Push((int) 14988)
0xe1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1f: Pop(3)
0xe20: GOTO 0xe23

0xe21: Return(); Pop(0)

0xe22: GOTO 0xe06

0xe23: PushEmpty(bool)
0xe24: Call 0x13b0

0xe25: Pop(0)
0xe26: IF (Stack[-1] == 0) GOTO 0xe32; Pop(1)

0xe27: @ lshWaitForAnimEnd()
0xe28: Pop(0)
0xe29: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe2a: IF (Stack[-1] == 0) GOTO 0xe2c; Pop(1)

0xe2b: GOTO 0xe31

0xe2c: PushEmpty(string)
0xe2d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe2e: Call 0x1339

0xe2f: Pop(1)
0xe30: GOTO 0xe27

0xe31: GOTO 0xe40

0xe32: Push("all")
0xe33: Push("idle")
0xe34: @ PlayAnimation(Stack[-2], Stack[-1])
0xe35: Pop(2)
0xe36: @ WaitForAnimEnd()
0xe37: Pop(0)
0xe38: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe39: IF (Stack[-1] == 0) GOTO 0xe3b; Pop(1)

0xe3a: GOTO 0xe40

0xe3b: Push("all")
0xe3c: Push("idle")
0xe3d: @ PlayAnimation(Stack[-2], Stack[-1])
0xe3e: Pop(2)
0xe3f: GOTO 0xe36

0xe40: Return(); Pop(0)

0xe41: PushEmpty()
0xe42: PushEmpty(bool)
0xe43: Call 0x13b0

0xe44: Pop(0)
0xe45: Pop(1); Push((bool) Stack[-1] == 0)
0xe46: IF (Stack[-1] == 0) GOTO 0xe48; Pop(1)

0xe47: Return(); Pop(0)

0xe48: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe49: IF (Stack[-1] == 0) GOTO 0xe4b; Pop(1)

0xe4a: Return(); Pop(0)

0xe4b: PushEmpty(string)
0xe4c: Stack[-1] = Stack[-2]
0xe4d: Call 0x1339

0xe4e: Pop(1)
0xe4f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe50: Return(); Pop(0)

0xe51: PushEmpty()
0xe52: Push((int) 1)
0xe53: IF (Stack[-1] == 0) GOTO 0xf33; Pop(1)

0xe54: PushEmpty()
0xe55: Call 0x134b

0xe56: Pop(0)
0xe57: Push((int) 14987)
0xe58: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe59: IF (Stack[-1] == 0) GOTO 0xe5f; Pop(1)

0xe5a: PushEmpty(object, object)
0xe5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5d: Call 0x14ac

0xe5e: Pop(2)
0xe5f: Push((int) 14986)
0xe60: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe61: IF (Stack[-1] == 0) GOTO 0xe7b; Pop(1)

0xe62: PushEmpty(string)
0xe63: Stack[-1] = "Neutral"
0xe64: Call 0xe41

0xe65: Pop(1)
0xe66: Push((int) 13720)
0xe67: @@ SetMessage(Stack[-1])
0xe68: Pop(1)
0xe69: @@ ClearReplies()
0xe6a: Pop(0)
0xe6b: PushEmpty(bool, object)
0xe6c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe6d: Call 0x162b

0xe6e: Pop(1)
0xe6f: IF (Stack[-1] == 0) GOTO 0xe75; Pop(1)

0xe70: Push((int) 13721)
0xe71: Push((int) 13787)
0xe72: Push((int) 14987)
0xe73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe74: Pop(3)
0xe75: Push((int) 13722)
0xe76: Push((int) -1)
0xe77: Push((int) 14988)
0xe78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe79: Pop(3)
0xe7a: Return(); Pop(0)

0xe7b: Push((int) 13787)
0xe7c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7d: IF (Stack[-1] == 0) GOTO 0xea2; Pop(1)

0xe7e: PushEmpty(string)
0xe7f: Stack[-1] = "Neutral"
0xe80: Call 0xe41

0xe81: Pop(1)
0xe82: Push((int) 12613)
0xe83: @@ SetMessage(Stack[-1])
0xe84: Pop(1)
0xe85: @@ ClearReplies()
0xe86: Pop(0)
0xe87: PushEmpty(bool, object)
0xe88: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe89: Call 0x161f

0xe8a: Pop(1)
0xe8b: IF (Stack[-1] == 0) GOTO 0xe91; Pop(1)

0xe8c: Push((int) 12614)
0xe8d: Push((int) 13789)
0xe8e: Push((int) 13788)
0xe8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe90: Pop(3)
0xe91: Push((int) 12632)
0xe92: Push((int) 13812)
0xe93: Push((int) 13811)
0xe94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe95: Pop(3)
0xe96: PushEmpty(bool, object)
0xe97: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe98: Call 0x161f

0xe99: Pop(1)
0xe9a: Pop(1); Push((bool) Stack[-1] == 0)
0xe9b: IF (Stack[-1] == 0) GOTO 0xea1; Pop(1)

0xe9c: Push((int) 12631)
0xe9d: Push((int) 13789)
0xe9e: Push((int) 13809)
0xe9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea0: Pop(3)
0xea1: Return(); Pop(0)

0xea2: Push((int) 13812)
0xea3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xea4: IF (Stack[-1] == 0) GOTO 0xeb4; Pop(1)

0xea5: PushEmpty(string)
0xea6: Stack[-1] = "Neutral"
0xea7: Call 0xe41

0xea8: Pop(1)
0xea9: Push((int) 12633)
0xeaa: @@ SetMessage(Stack[-1])
0xeab: Pop(1)
0xeac: @@ ClearReplies()
0xead: Pop(0)
0xeae: Push((int) 12634)
0xeaf: Push((int) 13791)
0xeb0: Push((int) 13813)
0xeb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb2: Pop(3)
0xeb3: Return(); Pop(0)

0xeb4: Push((int) 13789)
0xeb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeb6: IF (Stack[-1] == 0) GOTO 0xecb; Pop(1)

0xeb7: PushEmpty(string)
0xeb8: Stack[-1] = "Neutral"
0xeb9: Call 0xe41

0xeba: Pop(1)
0xebb: Push((int) 12615)
0xebc: @@ SetMessage(Stack[-1])
0xebd: Pop(1)
0xebe: @@ ClearReplies()
0xebf: Pop(0)
0xec0: Push((int) 12616)
0xec1: Push((int) 13791)
0xec2: Push((int) 13790)
0xec3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec4: Pop(3)
0xec5: Push((int) 12623)
0xec6: Push((int) 13800)
0xec7: Push((int) 13799)
0xec8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec9: Pop(3)
0xeca: Return(); Pop(0)

0xecb: Push((int) 13800)
0xecc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xecd: IF (Stack[-1] == 0) GOTO 0xee2; Pop(1)

0xece: PushEmpty(string)
0xecf: Stack[-1] = "Neutral"
0xed0: Call 0xe41

0xed1: Pop(1)
0xed2: Push((int) 12624)
0xed3: @@ SetMessage(Stack[-1])
0xed4: Pop(1)
0xed5: @@ ClearReplies()
0xed6: Pop(0)
0xed7: Push((int) 12625)
0xed8: Push((int) 13802)
0xed9: Push((int) 13801)
0xeda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xedb: Pop(3)
0xedc: Push((int) 12629)
0xedd: Push((int) 13802)
0xede: Push((int) 13805)
0xedf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee0: Pop(3)
0xee1: Return(); Pop(0)

0xee2: Push((int) 13802)
0xee3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee4: IF (Stack[-1] == 0) GOTO 0xef9; Pop(1)

0xee5: PushEmpty(string)
0xee6: Stack[-1] = "Neutral"
0xee7: Call 0xe41

0xee8: Pop(1)
0xee9: Push((int) 12626)
0xeea: @@ SetMessage(Stack[-1])
0xeeb: Pop(1)
0xeec: @@ ClearReplies()
0xeed: Pop(0)
0xeee: Push((int) 12627)
0xeef: Push((int) -1)
0xef0: Push((int) 13803)
0xef1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef2: Pop(3)
0xef3: Push((int) 12628)
0xef4: Push((int) -1)
0xef5: Push((int) 13804)
0xef6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef7: Pop(3)
0xef8: Return(); Pop(0)

0xef9: Push((int) 13791)
0xefa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xefb: IF (Stack[-1] == 0) GOTO 0xf10; Pop(1)

0xefc: PushEmpty(string)
0xefd: Stack[-1] = "Neutral"
0xefe: Call 0xe41

0xeff: Pop(1)
0xf00: Push((int) 12617)
0xf01: @@ SetMessage(Stack[-1])
0xf02: Pop(1)
0xf03: @@ ClearReplies()
0xf04: Pop(0)
0xf05: Push((int) 12618)
0xf06: Push((int) 13793)
0xf07: Push((int) 13792)
0xf08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf09: Pop(3)
0xf0a: Push((int) 12622)
0xf0b: Push((int) 13802)
0xf0c: Push((int) 13797)
0xf0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0e: Pop(3)
0xf0f: Return(); Pop(0)

0xf10: Push((int) 13793)
0xf11: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf12: IF (Stack[-1] == 0) GOTO 0xf27; Pop(1)

0xf13: PushEmpty(string)
0xf14: Stack[-1] = "Neutral"
0xf15: Call 0xe41

0xf16: Pop(1)
0xf17: Push((int) 12619)
0xf18: @@ SetMessage(Stack[-1])
0xf19: Pop(1)
0xf1a: @@ ClearReplies()
0xf1b: Pop(0)
0xf1c: Push((int) 12621)
0xf1d: Push((int) 13802)
0xf1e: Push((int) 13795)
0xf1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf20: Pop(3)
0xf21: Push((int) 12620)
0xf22: Push((int) -1)
0xf23: Push((int) 13794)
0xf24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf25: Pop(3)
0xf26: Return(); Pop(0)

0xf27: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf28: PushEmpty(bool)
0xf29: Call 0x13b0

0xf2a: Pop(0)
0xf2b: IF (Stack[-1] == 0) GOTO 0xf2f; Pop(1)

0xf2c: @ lshStopAnimation()
0xf2d: Pop(0)
0xf2e: GOTO 0xf31

0xf2f: @ StopAnimation()
0xf30: Pop(0)
0xf31: Return(); Pop(0)

0xf32: GOTO 0xe52

0xf33: Return(); Pop(0)

0xf34: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xf35: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf36: PushEmpty(bool, object)
0xf37: Stack[-1] = Stack[-11]
0xf38: Call 0x12fd

0xf39: Pop(1)
0xf3a: Pop(1); Push((bool) Stack[-1] == 0)
0xf3b: IF (Stack[-1] == 0) GOTO 0xf3e; Pop(1)

0xf3c: Stack[-10] = (int) -2
0xf3d: Return(); Pop(8)

0xf3e: @ CreateDialog(Stack[-4])
0xf3f: Pop(0)
0xf40: PushEmpty(int)
0xf41: Call 0x13ac

0xf42: Pop(0)
0xf43: @@ SetNPCName(Stack[-1])
0xf44: Pop(1)
0xf45: PushEmpty(string)
0xf46: Call 0x13ae

0xf47: Pop(0)
0xf48: @@ SetPhoto(Stack[-1])
0xf49: Pop(1)
0xf4a: PushEmpty(int)
0xf4b: Call 0x175e

0xf4c: Pop(0)
0xf4d: @@ SetPlayerName(Stack[-1])
0xf4e: Pop(1)
0xf4f: Stack[-2] = (int) -1
0xf50: @ IsOverrideActive(Stack[-3])
0xf51: Pop(0)
0xf52: Push(Stack[-3])
0xf53: IF (Stack[-1] == 0) GOTO 0xf56; Pop(1)

0xf54: Stack[-10] = (int) -2
0xf55: Return(); Pop(8)

0xf56: @ DoDialog(Stack[-4])
0xf57: Pop(0)
0xf58: PushEmpty(object, object)
0xf59: Stack[-2] = Stack[-11]
0xf5a: Stack[-1] = Stack[-6]
0xf5b: Push(-2, 4); TaskCall(13)
0xf5c: Call 0xf73

0xf5d: Pop(-2, 4); TaskReturn
0xf5e: Pop(2)
0xf5f: @@ IsDialogEnd(Stack[-1])
0xf60: Pop(0)
0xf61: Pop(0); Push((bool) Stack[-1] == 0)
0xf62: IF (Stack[-1] == 0) GOTO 0xf68; Pop(1)

0xf63: @ sync()
0xf64: Pop(0)
0xf65: @@ IsDialogEnd(Stack[-1])
0xf66: Pop(0)
0xf67: GOTO 0xf61

0xf68: PushEmpty(object)
0xf69: Stack[-1] = Stack[-10]
0xf6a: Call 0x1335

0xf6b: Pop(1)
0xf6c: @ StopDialog(Stack[-4])
0xf6d: Pop(0)
0xf6e: @@ GetReturnValue(Stack[-2])
0xf6f: Pop(0)
0xf70: Stack[-10] = Stack[-2]
0xf71: Return(); Pop(8)

0xf72: Stack[-4] = 0
0xf73: PushEmpty()
0xf74: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xf75: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xf76: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xf77: Push((int) 1)
0xf78: IF (Stack[-1] == 0) GOTO 0xfb7; Pop(1)

0xf79: PushEmpty(bool)
0xf7a: Stack[-1] = (bool) 0
0xf7b: PushEmpty(bool)
0xf7c: Stack[-1] = (bool) 0
0xf7d: PushEmpty(bool, object)
0xf7e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf7f: Call 0x16bb

0xf80: Pop(1)
0xf81: Pop(1); Push((bool) Stack[-1] == 0)
0xf82: IF (Stack[-1] == 0) GOTO 0xf8a; Pop(1)

0xf83: PushEmpty(bool, object)
0xf84: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf85: Call 0x16c7

0xf86: Pop(1)
0xf87: Pop(1); Push((bool) Stack[-1] == 0)
0xf88: IF (Stack[-1] == 0) GOTO 0xf8a; Pop(1)

0xf89: Stack[-1] = (bool) 1
0xf8a: IF (Stack[-1] == 0) GOTO 0xf91; Pop(1)

0xf8b: PushEmpty(bool, object)
0xf8c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf8d: Call 0x16d3

0xf8e: Pop(1)
0xf8f: IF (Stack[-1] == 0) GOTO 0xf91; Pop(1)

0xf90: Stack[-1] = (bool) 1
0xf91: IF (Stack[-1] == 0) GOTO 0xfa6; Pop(1)

0xf92: PushEmpty(object, object)
0xf93: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf94: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf95: Call 0x14e9

0xf96: Pop(2)
0xf97: PushEmpty(string)
0xf98: Stack[-1] = "Neutral"
0xf99: Call 0xfd5

0xf9a: Pop(1)
0xf9b: Push((int) 12960)
0xf9c: @@ SetMessage(Stack[-1])
0xf9d: Pop(1)
0xf9e: @@ ClearReplies()
0xf9f: Pop(0)
0xfa0: Push((int) 12961)
0xfa1: Push((int) 14167)
0xfa2: Push((int) 14166)
0xfa3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa4: Pop(3)
0xfa5: GOTO 0xfb7

0xfa6: PushEmpty(string)
0xfa7: Stack[-1] = "Neutral"
0xfa8: Call 0xfd5

0xfa9: Pop(1)
0xfaa: Push((int) 12966)
0xfab: @@ SetMessage(Stack[-1])
0xfac: Pop(1)
0xfad: @@ ClearReplies()
0xfae: Pop(0)
0xfaf: Push((int) 12967)
0xfb0: Push((int) -1)
0xfb1: Push((int) 14172)
0xfb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb3: Pop(3)
0xfb4: GOTO 0xfb7

0xfb5: Return(); Pop(0)

0xfb6: GOTO 0xf77

0xfb7: PushEmpty(bool)
0xfb8: Call 0x13b0

0xfb9: Pop(0)
0xfba: IF (Stack[-1] == 0) GOTO 0xfc6; Pop(1)

0xfbb: @ lshWaitForAnimEnd()
0xfbc: Pop(0)
0xfbd: Push( Stack[3 + Tasks[-1].StackPointer] )
0xfbe: IF (Stack[-1] == 0) GOTO 0xfc0; Pop(1)

0xfbf: GOTO 0xfc5

0xfc0: PushEmpty(string)
0xfc1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xfc2: Call 0x1339

0xfc3: Pop(1)
0xfc4: GOTO 0xfbb

0xfc5: GOTO 0xfd4

0xfc6: Push("all")
0xfc7: Push("idle")
0xfc8: @ PlayAnimation(Stack[-2], Stack[-1])
0xfc9: Pop(2)
0xfca: @ WaitForAnimEnd()
0xfcb: Pop(0)
0xfcc: Push( Stack[3 + Tasks[-1].StackPointer] )
0xfcd: IF (Stack[-1] == 0) GOTO 0xfcf; Pop(1)

0xfce: GOTO 0xfd4

0xfcf: Push("all")
0xfd0: Push("idle")
0xfd1: @ PlayAnimation(Stack[-2], Stack[-1])
0xfd2: Pop(2)
0xfd3: GOTO 0xfca

0xfd4: Return(); Pop(0)

0xfd5: PushEmpty()
0xfd6: PushEmpty(bool)
0xfd7: Call 0x13b0

0xfd8: Pop(0)
0xfd9: Pop(1); Push((bool) Stack[-1] == 0)
0xfda: IF (Stack[-1] == 0) GOTO 0xfdc; Pop(1)

0xfdb: Return(); Pop(0)

0xfdc: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xfdd: IF (Stack[-1] == 0) GOTO 0xfdf; Pop(1)

0xfde: Return(); Pop(0)

0xfdf: PushEmpty(string)
0xfe0: Stack[-1] = Stack[-2]
0xfe1: Call 0x1339

0xfe2: Pop(1)
0xfe3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xfe4: Return(); Pop(0)

0xfe5: PushEmpty()
0xfe6: Push((int) 1)
0xfe7: IF (Stack[-1] == 0) GOTO 0x105a; Pop(1)

0xfe8: PushEmpty()
0xfe9: Call 0x134b

0xfea: Pop(0)
0xfeb: Push((int) 14165)
0xfec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfed: IF (Stack[-1] == 0) GOTO 0x102a; Pop(1)

0xfee: PushEmpty(bool)
0xfef: Stack[-1] = (bool) 0
0xff0: PushEmpty(bool)
0xff1: Stack[-1] = (bool) 0
0xff2: PushEmpty(bool, object)
0xff3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xff4: Call 0x16bb

0xff5: Pop(1)
0xff6: Pop(1); Push((bool) Stack[-1] == 0)
0xff7: IF (Stack[-1] == 0) GOTO 0xfff; Pop(1)

0xff8: PushEmpty(bool, object)
0xff9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xffa: Call 0x16c7

0xffb: Pop(1)
0xffc: Pop(1); Push((bool) Stack[-1] == 0)
0xffd: IF (Stack[-1] == 0) GOTO 0xfff; Pop(1)

0xffe: Stack[-1] = (bool) 1
0xfff: IF (Stack[-1] == 0) GOTO 0x1006; Pop(1)

0x1000: PushEmpty(bool, object)
0x1001: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1002: Call 0x16d3

0x1003: Pop(1)
0x1004: IF (Stack[-1] == 0) GOTO 0x1006; Pop(1)

0x1005: Stack[-1] = (bool) 1
0x1006: IF (Stack[-1] == 0) GOTO 0x101b; Pop(1)

0x1007: PushEmpty(object, object)
0x1008: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1009: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x100a: Call 0x14e9

0x100b: Pop(2)
0x100c: PushEmpty(string)
0x100d: Stack[-1] = "Neutral"
0x100e: Call 0xfd5

0x100f: Pop(1)
0x1010: Push((int) 12960)
0x1011: @@ SetMessage(Stack[-1])
0x1012: Pop(1)
0x1013: @@ ClearReplies()
0x1014: Pop(0)
0x1015: Push((int) 12961)
0x1016: Push((int) 14167)
0x1017: Push((int) 14166)
0x1018: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1019: Pop(3)
0x101a: Return(); Pop(0)

0x101b: PushEmpty(string)
0x101c: Stack[-1] = "Neutral"
0x101d: Call 0xfd5

0x101e: Pop(1)
0x101f: Push((int) 12966)
0x1020: @@ SetMessage(Stack[-1])
0x1021: Pop(1)
0x1022: @@ ClearReplies()
0x1023: Pop(0)
0x1024: Push((int) 12967)
0x1025: Push((int) -1)
0x1026: Push((int) 14172)
0x1027: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1028: Pop(3)
0x1029: Return(); Pop(0)

0x102a: Push((int) 14167)
0x102b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x102c: IF (Stack[-1] == 0) GOTO 0x103c; Pop(1)

0x102d: PushEmpty(string)
0x102e: Stack[-1] = "Neutral"
0x102f: Call 0xfd5

0x1030: Pop(1)
0x1031: Push((int) 12962)
0x1032: @@ SetMessage(Stack[-1])
0x1033: Pop(1)
0x1034: @@ ClearReplies()
0x1035: Pop(0)
0x1036: Push((int) 12963)
0x1037: Push((int) 14169)
0x1038: Push((int) 14168)
0x1039: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103a: Pop(3)
0x103b: Return(); Pop(0)

0x103c: Push((int) 14169)
0x103d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103e: IF (Stack[-1] == 0) GOTO 0x104e; Pop(1)

0x103f: PushEmpty(string)
0x1040: Stack[-1] = "Neutral"
0x1041: Call 0xfd5

0x1042: Pop(1)
0x1043: Push((int) 12964)
0x1044: @@ SetMessage(Stack[-1])
0x1045: Pop(1)
0x1046: @@ ClearReplies()
0x1047: Pop(0)
0x1048: Push((int) 12965)
0x1049: Push((int) -1)
0x104a: Push((int) 14170)
0x104b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104c: Pop(3)
0x104d: Return(); Pop(0)

0x104e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x104f: PushEmpty(bool)
0x1050: Call 0x13b0

0x1051: Pop(0)
0x1052: IF (Stack[-1] == 0) GOTO 0x1056; Pop(1)

0x1053: @ lshStopAnimation()
0x1054: Pop(0)
0x1055: GOTO 0x1058

0x1056: @ StopAnimation()
0x1057: Pop(0)
0x1058: Return(); Pop(0)

0x1059: GOTO 0xfe6

0x105a: Return(); Pop(0)

0x105b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x105c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x105d: PushEmpty(bool, object)
0x105e: Stack[-1] = Stack[-11]
0x105f: Call 0x12fd

0x1060: Pop(1)
0x1061: Pop(1); Push((bool) Stack[-1] == 0)
0x1062: IF (Stack[-1] == 0) GOTO 0x1065; Pop(1)

0x1063: Stack[-10] = (int) -2
0x1064: Return(); Pop(8)

0x1065: @ CreateDialog(Stack[-4])
0x1066: Pop(0)
0x1067: PushEmpty(int)
0x1068: Call 0x13ac

0x1069: Pop(0)
0x106a: @@ SetNPCName(Stack[-1])
0x106b: Pop(1)
0x106c: PushEmpty(string)
0x106d: Call 0x13ae

0x106e: Pop(0)
0x106f: @@ SetPhoto(Stack[-1])
0x1070: Pop(1)
0x1071: PushEmpty(int)
0x1072: Call 0x175e

0x1073: Pop(0)
0x1074: @@ SetPlayerName(Stack[-1])
0x1075: Pop(1)
0x1076: Stack[-2] = (int) -1
0x1077: @ IsOverrideActive(Stack[-3])
0x1078: Pop(0)
0x1079: Push(Stack[-3])
0x107a: IF (Stack[-1] == 0) GOTO 0x107d; Pop(1)

0x107b: Stack[-10] = (int) -2
0x107c: Return(); Pop(8)

0x107d: @ DoDialog(Stack[-4])
0x107e: Pop(0)
0x107f: PushEmpty(object, object)
0x1080: Stack[-2] = Stack[-11]
0x1081: Stack[-1] = Stack[-6]
0x1082: Push(-2, 4); TaskCall(15)
0x1083: Call 0x109a

0x1084: Pop(-2, 4); TaskReturn
0x1085: Pop(2)
0x1086: @@ IsDialogEnd(Stack[-1])
0x1087: Pop(0)
0x1088: Pop(0); Push((bool) Stack[-1] == 0)
0x1089: IF (Stack[-1] == 0) GOTO 0x108f; Pop(1)

0x108a: @ sync()
0x108b: Pop(0)
0x108c: @@ IsDialogEnd(Stack[-1])
0x108d: Pop(0)
0x108e: GOTO 0x1088

0x108f: PushEmpty(object)
0x1090: Stack[-1] = Stack[-10]
0x1091: Call 0x1335

0x1092: Pop(1)
0x1093: @ StopDialog(Stack[-4])
0x1094: Pop(0)
0x1095: @@ GetReturnValue(Stack[-2])
0x1096: Pop(0)
0x1097: Stack[-10] = Stack[-2]
0x1098: Return(); Pop(8)

0x1099: Stack[-4] = 0
0x109a: PushEmpty()
0x109b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x109c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x109d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x109e: Push((int) 1)
0x109f: IF (Stack[-1] == 0) GOTO 0x10f0; Pop(1)

0x10a0: PushEmpty(bool)
0x10a1: Stack[-1] = (bool) 0
0x10a2: PushEmpty(bool, object)
0x10a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10a4: Call 0x165b

0x10a5: Pop(1)
0x10a6: IF (Stack[-1] == 0) GOTO 0x10ad; Pop(1)

0x10a7: PushEmpty(bool, object)
0x10a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10a9: Call 0x1667

0x10aa: Pop(1)
0x10ab: IF (Stack[-1] == 0) GOTO 0x10ad; Pop(1)

0x10ac: Stack[-1] = (bool) 1
0x10ad: IF (Stack[-1] == 0) GOTO 0x10c2; Pop(1)

0x10ae: PushEmpty(object, object)
0x10af: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10b0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b1: Call 0x14b2

0x10b2: Pop(2)
0x10b3: PushEmpty(string)
0x10b4: Stack[-1] = "Neutral"
0x10b5: Call 0x110e

0x10b6: Pop(1)
0x10b7: Push((int) 14241)
0x10b8: @@ SetMessage(Stack[-1])
0x10b9: Pop(1)
0x10ba: @@ ClearReplies()
0x10bb: Pop(0)
0x10bc: Push((int) 14242)
0x10bd: Push((int) 15461)
0x10be: Push((int) 15460)
0x10bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c0: Pop(3)
0x10c1: GOTO 0x10f0

0x10c2: PushEmpty(string)
0x10c3: Stack[-1] = "Neutral"
0x10c4: Call 0x110e

0x10c5: Pop(1)
0x10c6: Push((int) 14258)
0x10c7: @@ SetMessage(Stack[-1])
0x10c8: Pop(1)
0x10c9: @@ ClearReplies()
0x10ca: Pop(0)
0x10cb: PushEmpty(bool)
0x10cc: Stack[-1] = (bool) 0
0x10cd: PushEmpty(bool, object)
0x10ce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10cf: Call 0x1673

0x10d0: Pop(1)
0x10d1: IF (Stack[-1] == 0) GOTO 0x10d8; Pop(1)

0x10d2: PushEmpty(bool, object)
0x10d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10d4: Call 0x167f

0x10d5: Pop(1)
0x10d6: IF (Stack[-1] == 0) GOTO 0x10d8; Pop(1)

0x10d7: Stack[-1] = (bool) 1
0x10d8: IF (Stack[-1] == 0) GOTO 0x10de; Pop(1)

0x10d9: Push((int) 14259)
0x10da: Push((int) 15479)
0x10db: Push((int) 15478)
0x10dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10dd: Pop(3)
0x10de: PushEmpty(bool, object)
0x10df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10e0: Call 0x168b

0x10e1: Pop(1)
0x10e2: IF (Stack[-1] == 0) GOTO 0x10e8; Pop(1)

0x10e3: Push((int) 14271)
0x10e4: Push((int) 15491)
0x10e5: Push((int) 15490)
0x10e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e7: Pop(3)
0x10e8: Push((int) 14278)
0x10e9: Push((int) -1)
0x10ea: Push((int) 15498)
0x10eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10ec: Pop(3)
0x10ed: GOTO 0x10f0

0x10ee: Return(); Pop(0)

0x10ef: GOTO 0x109e

0x10f0: PushEmpty(bool)
0x10f1: Call 0x13b0

0x10f2: Pop(0)
0x10f3: IF (Stack[-1] == 0) GOTO 0x10ff; Pop(1)

0x10f4: @ lshWaitForAnimEnd()
0x10f5: Pop(0)
0x10f6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x10f7: IF (Stack[-1] == 0) GOTO 0x10f9; Pop(1)

0x10f8: GOTO 0x10fe

0x10f9: PushEmpty(string)
0x10fa: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x10fb: Call 0x1339

0x10fc: Pop(1)
0x10fd: GOTO 0x10f4

0x10fe: GOTO 0x110d

0x10ff: Push("all")
0x1100: Push("idle")
0x1101: @ PlayAnimation(Stack[-2], Stack[-1])
0x1102: Pop(2)
0x1103: @ WaitForAnimEnd()
0x1104: Pop(0)
0x1105: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1106: IF (Stack[-1] == 0) GOTO 0x1108; Pop(1)

0x1107: GOTO 0x110d

0x1108: Push("all")
0x1109: Push("idle")
0x110a: @ PlayAnimation(Stack[-2], Stack[-1])
0x110b: Pop(2)
0x110c: GOTO 0x1103

0x110d: Return(); Pop(0)

0x110e: PushEmpty()
0x110f: PushEmpty(bool)
0x1110: Call 0x13b0

0x1111: Pop(0)
0x1112: Pop(1); Push((bool) Stack[-1] == 0)
0x1113: IF (Stack[-1] == 0) GOTO 0x1115; Pop(1)

0x1114: Return(); Pop(0)

0x1115: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1116: IF (Stack[-1] == 0) GOTO 0x1118; Pop(1)

0x1117: Return(); Pop(0)

0x1118: PushEmpty(string)
0x1119: Stack[-1] = Stack[-2]
0x111a: Call 0x1339

0x111b: Pop(1)
0x111c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x111d: Return(); Pop(0)

0x111e: PushEmpty()
0x111f: Push((int) 1)
0x1120: IF (Stack[-1] == 0) GOTO 0x12e4; Pop(1)

0x1121: PushEmpty()
0x1122: Call 0x134b

0x1123: Pop(0)
0x1124: Push((int) 15743)
0x1125: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1126: IF (Stack[-1] == 0) GOTO 0x112c; Pop(1)

0x1127: PushEmpty(object, object)
0x1128: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1129: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x112a: Call 0x14b8

0x112b: Pop(2)
0x112c: Push((int) 15478)
0x112d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x112e: IF (Stack[-1] == 0) GOTO 0x1134; Pop(1)

0x112f: PushEmpty(object, object)
0x1130: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1131: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1132: Call 0x14c1

0x1133: Pop(2)
0x1134: Push((int) 15490)
0x1135: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1136: IF (Stack[-1] == 0) GOTO 0x113c; Pop(1)

0x1137: PushEmpty(object, object)
0x1138: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1139: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x113a: Call 0x14c7

0x113b: Pop(2)
0x113c: Push((int) 15459)
0x113d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x113e: IF (Stack[-1] == 0) GOTO 0x118d; Pop(1)

0x113f: PushEmpty(bool)
0x1140: Stack[-1] = (bool) 0
0x1141: PushEmpty(bool, object)
0x1142: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1143: Call 0x165b

0x1144: Pop(1)
0x1145: IF (Stack[-1] == 0) GOTO 0x114c; Pop(1)

0x1146: PushEmpty(bool, object)
0x1147: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1148: Call 0x1667

0x1149: Pop(1)
0x114a: IF (Stack[-1] == 0) GOTO 0x114c; Pop(1)

0x114b: Stack[-1] = (bool) 1
0x114c: IF (Stack[-1] == 0) GOTO 0x1161; Pop(1)

0x114d: PushEmpty(object, object)
0x114e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x114f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1150: Call 0x14b2

0x1151: Pop(2)
0x1152: PushEmpty(string)
0x1153: Stack[-1] = "Neutral"
0x1154: Call 0x110e

0x1155: Pop(1)
0x1156: Push((int) 14241)
0x1157: @@ SetMessage(Stack[-1])
0x1158: Pop(1)
0x1159: @@ ClearReplies()
0x115a: Pop(0)
0x115b: Push((int) 14242)
0x115c: Push((int) 15461)
0x115d: Push((int) 15460)
0x115e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115f: Pop(3)
0x1160: Return(); Pop(0)

0x1161: PushEmpty(string)
0x1162: Stack[-1] = "Neutral"
0x1163: Call 0x110e

0x1164: Pop(1)
0x1165: Push((int) 14258)
0x1166: @@ SetMessage(Stack[-1])
0x1167: Pop(1)
0x1168: @@ ClearReplies()
0x1169: Pop(0)
0x116a: PushEmpty(bool)
0x116b: Stack[-1] = (bool) 0
0x116c: PushEmpty(bool, object)
0x116d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x116e: Call 0x1673

0x116f: Pop(1)
0x1170: IF (Stack[-1] == 0) GOTO 0x1177; Pop(1)

0x1171: PushEmpty(bool, object)
0x1172: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1173: Call 0x167f

0x1174: Pop(1)
0x1175: IF (Stack[-1] == 0) GOTO 0x1177; Pop(1)

0x1176: Stack[-1] = (bool) 1
0x1177: IF (Stack[-1] == 0) GOTO 0x117d; Pop(1)

0x1178: Push((int) 14259)
0x1179: Push((int) 15479)
0x117a: Push((int) 15478)
0x117b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117c: Pop(3)
0x117d: PushEmpty(bool, object)
0x117e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x117f: Call 0x168b

0x1180: Pop(1)
0x1181: IF (Stack[-1] == 0) GOTO 0x1187; Pop(1)

0x1182: Push((int) 14271)
0x1183: Push((int) 15491)
0x1184: Push((int) 15490)
0x1185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1186: Pop(3)
0x1187: Push((int) 14278)
0x1188: Push((int) -1)
0x1189: Push((int) 15498)
0x118a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118b: Pop(3)
0x118c: Return(); Pop(0)

0x118d: Push((int) 15491)
0x118e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x118f: IF (Stack[-1] == 0) GOTO 0x119f; Pop(1)

0x1190: PushEmpty(string)
0x1191: Stack[-1] = "Neutral"
0x1192: Call 0x110e

0x1193: Pop(1)
0x1194: Push((int) 14272)
0x1195: @@ SetMessage(Stack[-1])
0x1196: Pop(1)
0x1197: @@ ClearReplies()
0x1198: Pop(0)
0x1199: Push((int) 14273)
0x119a: Push((int) 15493)
0x119b: Push((int) 15492)
0x119c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119d: Pop(3)
0x119e: Return(); Pop(0)

0x119f: Push((int) 15493)
0x11a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a1: IF (Stack[-1] == 0) GOTO 0x11b1; Pop(1)

0x11a2: PushEmpty(string)
0x11a3: Stack[-1] = "Neutral"
0x11a4: Call 0x110e

0x11a5: Pop(1)
0x11a6: Push((int) 14274)
0x11a7: @@ SetMessage(Stack[-1])
0x11a8: Pop(1)
0x11a9: @@ ClearReplies()
0x11aa: Pop(0)
0x11ab: Push((int) 14275)
0x11ac: Push((int) 15495)
0x11ad: Push((int) 15494)
0x11ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11af: Pop(3)
0x11b0: Return(); Pop(0)

0x11b1: Push((int) 15495)
0x11b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b3: IF (Stack[-1] == 0) GOTO 0x11c3; Pop(1)

0x11b4: PushEmpty(string)
0x11b5: Stack[-1] = "Neutral"
0x11b6: Call 0x110e

0x11b7: Pop(1)
0x11b8: Push((int) 14276)
0x11b9: @@ SetMessage(Stack[-1])
0x11ba: Pop(1)
0x11bb: @@ ClearReplies()
0x11bc: Pop(0)
0x11bd: Push((int) 14277)
0x11be: Push((int) -1)
0x11bf: Push((int) 15496)
0x11c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c1: Pop(3)
0x11c2: Return(); Pop(0)

0x11c3: Push((int) 15479)
0x11c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c5: IF (Stack[-1] == 0) GOTO 0x11d5; Pop(1)

0x11c6: PushEmpty(string)
0x11c7: Stack[-1] = "Neutral"
0x11c8: Call 0x110e

0x11c9: Pop(1)
0x11ca: Push((int) 14260)
0x11cb: @@ SetMessage(Stack[-1])
0x11cc: Pop(1)
0x11cd: @@ ClearReplies()
0x11ce: Pop(0)
0x11cf: Push((int) 14261)
0x11d0: Push((int) 15481)
0x11d1: Push((int) 15480)
0x11d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d3: Pop(3)
0x11d4: Return(); Pop(0)

0x11d5: Push((int) 15481)
0x11d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d7: IF (Stack[-1] == 0) GOTO 0x11ec; Pop(1)

0x11d8: PushEmpty(string)
0x11d9: Stack[-1] = "Neutral"
0x11da: Call 0x110e

0x11db: Pop(1)
0x11dc: Push((int) 14262)
0x11dd: @@ SetMessage(Stack[-1])
0x11de: Pop(1)
0x11df: @@ ClearReplies()
0x11e0: Pop(0)
0x11e1: Push((int) 14263)
0x11e2: Push((int) 15483)
0x11e3: Push((int) 15482)
0x11e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e5: Pop(3)
0x11e6: Push((int) 14268)
0x11e7: Push((int) 15488)
0x11e8: Push((int) 15487)
0x11e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11ea: Pop(3)
0x11eb: Return(); Pop(0)

0x11ec: Push((int) 15488)
0x11ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11ee: IF (Stack[-1] == 0) GOTO 0x11fe; Pop(1)

0x11ef: PushEmpty(string)
0x11f0: Stack[-1] = "Neutral"
0x11f1: Call 0x110e

0x11f2: Pop(1)
0x11f3: Push((int) 14269)
0x11f4: @@ SetMessage(Stack[-1])
0x11f5: Pop(1)
0x11f6: @@ ClearReplies()
0x11f7: Pop(0)
0x11f8: Push((int) 14270)
0x11f9: Push((int) -1)
0x11fa: Push((int) 15489)
0x11fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11fc: Pop(3)
0x11fd: Return(); Pop(0)

0x11fe: Push((int) 15483)
0x11ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1200: IF (Stack[-1] == 0) GOTO 0x1210; Pop(1)

0x1201: PushEmpty(string)
0x1202: Stack[-1] = "Neutral"
0x1203: Call 0x110e

0x1204: Pop(1)
0x1205: Push((int) 14264)
0x1206: @@ SetMessage(Stack[-1])
0x1207: Pop(1)
0x1208: @@ ClearReplies()
0x1209: Pop(0)
0x120a: Push((int) 14265)
0x120b: Push((int) 15485)
0x120c: Push((int) 15484)
0x120d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x120e: Pop(3)
0x120f: Return(); Pop(0)

0x1210: Push((int) 15485)
0x1211: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1212: IF (Stack[-1] == 0) GOTO 0x1222; Pop(1)

0x1213: PushEmpty(string)
0x1214: Stack[-1] = "Neutral"
0x1215: Call 0x110e

0x1216: Pop(1)
0x1217: Push((int) 14266)
0x1218: @@ SetMessage(Stack[-1])
0x1219: Pop(1)
0x121a: @@ ClearReplies()
0x121b: Pop(0)
0x121c: Push((int) 14267)
0x121d: Push((int) -1)
0x121e: Push((int) 15486)
0x121f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1220: Pop(3)
0x1221: Return(); Pop(0)

0x1222: Push((int) 15461)
0x1223: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1224: IF (Stack[-1] == 0) GOTO 0x1234; Pop(1)

0x1225: PushEmpty(string)
0x1226: Stack[-1] = "Neutral"
0x1227: Call 0x110e

0x1228: Pop(1)
0x1229: Push((int) 14243)
0x122a: @@ SetMessage(Stack[-1])
0x122b: Pop(1)
0x122c: @@ ClearReplies()
0x122d: Pop(0)
0x122e: Push((int) 14244)
0x122f: Push((int) 15463)
0x1230: Push((int) 15462)
0x1231: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1232: Pop(3)
0x1233: Return(); Pop(0)

0x1234: Push((int) 15463)
0x1235: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1236: IF (Stack[-1] == 0) GOTO 0x124b; Pop(1)

0x1237: PushEmpty(string)
0x1238: Stack[-1] = "Neutral"
0x1239: Call 0x110e

0x123a: Pop(1)
0x123b: Push((int) 14245)
0x123c: @@ SetMessage(Stack[-1])
0x123d: Pop(1)
0x123e: @@ ClearReplies()
0x123f: Pop(0)
0x1240: Push((int) 14246)
0x1241: Push((int) 15465)
0x1242: Push((int) 15464)
0x1243: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1244: Pop(3)
0x1245: Push((int) 14257)
0x1246: Push((int) 15465)
0x1247: Push((int) 15475)
0x1248: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1249: Pop(3)
0x124a: Return(); Pop(0)

0x124b: Push((int) 15465)
0x124c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x124d: IF (Stack[-1] == 0) GOTO 0x125d; Pop(1)

0x124e: PushEmpty(string)
0x124f: Stack[-1] = "Neutral"
0x1250: Call 0x110e

0x1251: Pop(1)
0x1252: Push((int) 14247)
0x1253: @@ SetMessage(Stack[-1])
0x1254: Pop(1)
0x1255: @@ ClearReplies()
0x1256: Pop(0)
0x1257: Push((int) 14248)
0x1258: Push((int) 15467)
0x1259: Push((int) 15466)
0x125a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125b: Pop(3)
0x125c: Return(); Pop(0)

0x125d: Push((int) 15467)
0x125e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x125f: IF (Stack[-1] == 0) GOTO 0x1274; Pop(1)

0x1260: PushEmpty(string)
0x1261: Stack[-1] = "Neutral"
0x1262: Call 0x110e

0x1263: Pop(1)
0x1264: Push((int) 14249)
0x1265: @@ SetMessage(Stack[-1])
0x1266: Pop(1)
0x1267: @@ ClearReplies()
0x1268: Pop(0)
0x1269: Push((int) 14250)
0x126a: Push((int) 15469)
0x126b: Push((int) 15468)
0x126c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126d: Pop(3)
0x126e: Push((int) 14508)
0x126f: Push((int) 15742)
0x1270: Push((int) 15746)
0x1271: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1272: Pop(3)
0x1273: Return(); Pop(0)

0x1274: Push((int) 15469)
0x1275: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1276: IF (Stack[-1] == 0) GOTO 0x128b; Pop(1)

0x1277: PushEmpty(string)
0x1278: Stack[-1] = "Neutral"
0x1279: Call 0x110e

0x127a: Pop(1)
0x127b: Push((int) 14251)
0x127c: @@ SetMessage(Stack[-1])
0x127d: Pop(1)
0x127e: @@ ClearReplies()
0x127f: Pop(0)
0x1280: Push((int) 14252)
0x1281: Push((int) 15471)
0x1282: Push((int) 15470)
0x1283: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1284: Pop(3)
0x1285: Push((int) 14506)
0x1286: Push((int) 15748)
0x1287: Push((int) 15744)
0x1288: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1289: Pop(3)
0x128a: Return(); Pop(0)

0x128b: Push((int) 15748)
0x128c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x128d: IF (Stack[-1] == 0) GOTO 0x12a2; Pop(1)

0x128e: PushEmpty(string)
0x128f: Stack[-1] = "Neutral"
0x1290: Call 0x110e

0x1291: Pop(1)
0x1292: Push((int) 14509)
0x1293: @@ SetMessage(Stack[-1])
0x1294: Pop(1)
0x1295: @@ ClearReplies()
0x1296: Pop(0)
0x1297: Push((int) 14511)
0x1298: Push((int) 15751)
0x1299: Push((int) 15750)
0x129a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129b: Pop(3)
0x129c: Push((int) 14510)
0x129d: Push((int) -1)
0x129e: Push((int) 15749)
0x129f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a0: Pop(3)
0x12a1: Return(); Pop(0)

0x12a2: Push((int) 15751)
0x12a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a4: IF (Stack[-1] == 0) GOTO 0x12b4; Pop(1)

0x12a5: PushEmpty(string)
0x12a6: Stack[-1] = "Neutral"
0x12a7: Call 0x110e

0x12a8: Pop(1)
0x12a9: Push((int) 14512)
0x12aa: @@ SetMessage(Stack[-1])
0x12ab: Pop(1)
0x12ac: @@ ClearReplies()
0x12ad: Pop(0)
0x12ae: Push((int) 14513)
0x12af: Push((int) -1)
0x12b0: Push((int) 15752)
0x12b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b2: Pop(3)
0x12b3: Return(); Pop(0)

0x12b4: Push((int) 15471)
0x12b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b6: IF (Stack[-1] == 0) GOTO 0x12c6; Pop(1)

0x12b7: PushEmpty(string)
0x12b8: Stack[-1] = "Neutral"
0x12b9: Call 0x110e

0x12ba: Pop(1)
0x12bb: Push((int) 14253)
0x12bc: @@ SetMessage(Stack[-1])
0x12bd: Pop(1)
0x12be: @@ ClearReplies()
0x12bf: Pop(0)
0x12c0: Push((int) 14254)
0x12c1: Push((int) 15742)
0x12c2: Push((int) 15472)
0x12c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c4: Pop(3)
0x12c5: Return(); Pop(0)

0x12c6: Push((int) 15742)
0x12c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c8: IF (Stack[-1] == 0) GOTO 0x12d8; Pop(1)

0x12c9: PushEmpty(string)
0x12ca: Stack[-1] = "Neutral"
0x12cb: Call 0x110e

0x12cc: Pop(1)
0x12cd: Push((int) 14504)
0x12ce: @@ SetMessage(Stack[-1])
0x12cf: Pop(1)
0x12d0: @@ ClearReplies()
0x12d1: Pop(0)
0x12d2: Push((int) 14505)
0x12d3: Push((int) -1)
0x12d4: Push((int) 15743)
0x12d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d6: Pop(3)
0x12d7: Return(); Pop(0)

0x12d8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x12d9: PushEmpty(bool)
0x12da: Call 0x13b0

0x12db: Pop(0)
0x12dc: IF (Stack[-1] == 0) GOTO 0x12e0; Pop(1)

0x12dd: @ lshStopAnimation()
0x12de: Pop(0)
0x12df: GOTO 0x12e2

0x12e0: @ StopAnimation()
0x12e1: Pop(0)
0x12e2: Return(); Pop(0)

0x12e3: GOTO 0x111f

0x12e4: Return(); Pop(0)

0x12e5: PushEmpty(int, int)
0x12e6: @@ GetProperty(Stack[-4], Stack[-1])
0x12e7: Pop(0)
0x12e8: Pop(0); Push(Stack[-1] + Stack[-3]);
0x12e9: @@ SetProperty(Stack[-5], Stack[-1])
0x12ea: Pop(1)
0x12eb: Return(); Pop(2)

0x12ec: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x12ed: @@ GetPosition(Stack[-4])
0x12ee: Pop(0)
0x12ef: @ GetPosition(Stack[-3])
0x12f0: Pop(0)
0x12f1: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x12f2: Push(CvectorIndex(Stack[-2], 0))
0x12f3: Push(CvectorIndex(Stack[-3], 2))
0x12f4: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x12f5: Pop(2)
0x12f6: Stack[-10] = Stack[-1]
0x12f7: Return(); Pop(8)

0x12f8: PushEmpty(bool, bool)
0x12f9: @ IsLoaded(Stack[-1])
0x12fa: Pop(0)
0x12fb: Stack[-3] = Stack[-1]
0x12fc: Return(); Pop(2)

0x12fd: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x12fe: @@ GetPosition(Stack[-7])
0x12ff: Pop(0)
0x1300: @@ GetEyesHeight(Stack[-8])
0x1301: Pop(0)
0x1302: Push(CvectorIndex(Stack[-7], 1))
0x1303: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1304: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1305: @ GetPosition(Stack[-6])
0x1306: Pop(0)
0x1307: @ GetEyesHeight(Stack[-8])
0x1308: Pop(0)
0x1309: Push(CvectorIndex(Stack[-6], 1))
0x130a: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x130b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x130c: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x130d: Push(CvectorIndex(Stack[-5], 1))
0x130e: Stack[-1] = (int) 0
0x130f: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1310: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1311: Pop(1); Push(Sqrt(Stack[-1]))
0x1312: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1313: Stack[-4] = -Stack[-5]; Pop(0);
0x1314: Push((int) 70)
0x1315: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1316: PushEmpty(cvector, cvector)
0x1317: Push(CVector(0.0, 1.0, 0.0))
0x1318: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x1319: Call 0x1352

0x131a: Pop(1)
0x131b: Push((int) 25)
0x131c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x131d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x131e: Push(CVector(0.0, 10.0, 0.0))
0x131f: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1320: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1321: @ IsOverrideActive(Stack[-1])
0x1322: Pop(0)
0x1323: Push(Stack[-1])
0x1324: IF (Stack[-1] == 0) GOTO 0x1327; Pop(1)

0x1325: Stack[-18] = (bool) 0
0x1326: Return(); Pop(16)

0x1327: @ StopWorld()
0x1328: Pop(0)
0x1329: @ CameraTransit(Stack[-2], Stack[-4])
0x132a: Pop(0)
0x132b: Push(CvectorIndex(Stack[-3], 0))
0x132c: Push(CvectorIndex(Stack[-4], 2))
0x132d: @ Rotate(Stack[-2], Stack[-1])
0x132e: Pop(2)
0x132f: @ CameraWaitForPlayFinish()
0x1330: Pop(0)
0x1331: @ ResumeWorld()
0x1332: Pop(0)
0x1333: Stack[-18] = (bool) 1
0x1334: Return(); Pop(16)

0x1335: PushEmpty()
0x1336: @ CameraSwitchToNormal()
0x1337: Pop(0)
0x1338: Return(); Pop(0)

0x1339: PushEmpty(float, float, float, float)
0x133a: Push("playing ")
0x133b: Pop(1); Push(Stack[-1] + Stack[-6]);
0x133c: @ Trace(Stack[-1])
0x133d: Pop(1)
0x133e: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x133f: Pop(0)
0x1340: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x1341: Pop(0)
0x1342: Push("start: ")
0x1343: Pop(1); Push(Stack[-1] + Stack[-3]);
0x1344: @ Trace(Stack[-1])
0x1345: Pop(1)
0x1346: Push("end: ")
0x1347: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1348: @ Trace(Stack[-1])
0x1349: Pop(1)
0x134a: Return(); Pop(4)

0x134b: PushEmpty(bool)
0x134c: Call 0x13b0

0x134d: Pop(0)
0x134e: IF (Stack[-1] == 0) GOTO 0x1351; Pop(1)

0x134f: @ lshStopSpeech()
0x1350: Pop(0)
0x1351: Return(); Pop(0)

0x1352: PushEmpty(float, float)
0x1353: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1354: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1355: Push((float)0.0)
0x1356: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1357: IF (Stack[-1] == 0) GOTO 0x135a; Pop(1)

0x1358: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1359: Return(); Pop(2)

0x135a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x135b: Return(); Pop(2)

0x135c: PushEmpty(int, int)
0x135d: @ GetVariable(Stack[-3], Stack[-1])
0x135e: Pop(0)
0x135f: Stack[-4] = Stack[-1]
0x1360: Return(); Pop(2)

0x1361: PushEmpty(int, int, bool, int, int, bool)
0x1362: @@ GetItemID(Stack[-3])
0x1363: Pop(0)
0x1364: Push("Category")
0x1365: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x1366: Pop(1)
0x1367: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x1368: Pop(0)
0x1369: Pop(0); Push((bool) Stack[-1] == 0)
0x136a: IF (Stack[-1] == 0) GOTO 0x136d; Pop(1)

0x136b: @@ DropItems(Stack[-8], Stack[-7])
0x136c: Pop(0)
0x136d: Return(); Pop(6)

0x136e: PushEmpty(object, object)
0x136f: @ CreateInvItem(Stack[-1])
0x1370: Pop(0)
0x1371: @@ SetItemName(Stack[-4])
0x1372: Pop(0)
0x1373: PushEmpty(object, object, int)
0x1374: Stack[-3] = Stack[-8]
0x1375: Stack[-2] = Stack[-4]
0x1376: Stack[-1] = Stack[-6]
0x1377: Call 0x1361

0x1378: Pop(3)
0x1379: Return(); Pop(2)

0x137a: Stack[-1] = 0
0x137b: PushEmpty(object, object)
0x137c: @ FindActor(Stack[-1], Stack[-4])
0x137d: Pop(0)
0x137e: Pop(0); Push((bool) Stack[-1] == 0)
0x137f: IF (Stack[-1] == 0) GOTO 0x1382; Pop(1)

0x1380: Stack[-5] = (bool) 0
0x1381: Return(); Pop(2)

0x1382: @ Trigger(Stack[-1], Stack[-3])
0x1383: Pop(0)
0x1384: Stack[-5] = (bool) 1
0x1385: Return(); Pop(2)

0x1386: Stack[-1] = 0
0x1387: PushEmpty(float, float)
0x1388: @ GetGameTime(Stack[-1])
0x1389: Pop(0)
0x138a: Stack[-3] = Stack[-1]
0x138b: Return(); Pop(2)

0x138c: PushEmpty(float, float)
0x138d: @ GetGameTime(Stack[-1])
0x138e: Pop(0)
0x138f: Push((int) 1)
0x1390: PushEmpty(int)
0x1391: Push((int) 24)
0x1392: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1393: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1394: Return(); Pop(2)

0x1395: PushEmpty(float, float)
0x1396: @ GetGameTime(Stack[-1])
0x1397: Pop(0)
0x1398: PushEmpty(int)
0x1399: Stack[-1] = Stack[-2]
0x139a: Push((int) 24)
0x139b: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x139c: Return(); Pop(2)

0x139d: PushEmpty()
0x139e: PushEmpty(int)
0x139f: Call 0x138c

0x13a0: Pop(0)
0x13a1: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x13a2: Return(); Pop(0)

0x13a3: PushEmpty(bool, bool)
0x13a4: PushEmpty(string)
0x13a5: Stack[-1] = "No"
0x13a6: Call 0x1339

0x13a7: Pop(1)
0x13a8: @ lshWaitForAnimEnd(Stack[-1])
0x13a9: Pop(0)
0x13aa: Stack[-3] = Stack[-1]
0x13ab: Return(); Pop(2)

0x13ac: Stack[-1] = (int) 2855
0x13ad: Return(); Pop(0)

0x13ae: Stack[-1] = "ui/NPC_Andrei.png"
0x13af: Return(); Pop(0)

0x13b0: Stack[-1] = (bool) 1
0x13b1: Return(); Pop(0)

0x13b2: PushEmpty()
0x13b3: Push("ood1Andrei1")
0x13b4: Push((int) 1)
0x13b5: @ SetVariable(Stack[-2], Stack[-1])
0x13b6: Pop(2)
0x13b7: Return(); Pop(0)

0x13b8: PushEmpty()
0x13b9: Push("ood1Andrei2")
0x13ba: Push((int) 1)
0x13bb: @ SetVariable(Stack[-2], Stack[-1])
0x13bc: Pop(2)
0x13bd: Return(); Pop(0)

0x13be: PushEmpty()
0x13bf: Push("money1000 is given")
0x13c0: @ Trace(Stack[-1])
0x13c1: Pop(1)
0x13c2: PushEmpty(object, string, int)
0x13c3: Stack[-3] = Stack[-5]
0x13c4: Stack[-2] = "money"
0x13c5: Stack[-1] = (int) 1000
0x13c6: Call 0x12e5

0x13c7: Pop(3)
0x13c8: Return(); Pop(0)

0x13c9: PushEmpty()
0x13ca: Push("playsound")
0x13cb: Push("givemoney")
0x13cc: @ TriggerWorld(Stack[-2], Stack[-1])
0x13cd: Pop(2)
0x13ce: Return(); Pop(0)

0x13cf: PushEmpty()
0x13d0: Push("playsound")
0x13d1: Push("giveitem")
0x13d2: @ TriggerWorld(Stack[-2], Stack[-1])
0x13d3: Pop(2)
0x13d4: Return(); Pop(0)

0x13d5: PushEmpty()
0x13d6: Push("ood1Andrei3")
0x13d7: Push((int) 1)
0x13d8: @ SetVariable(Stack[-2], Stack[-1])
0x13d9: Pop(2)
0x13da: Return(); Pop(0)

0x13db: PushEmpty()
0x13dc: Push("ood1Andrei4")
0x13dd: Push((int) 1)
0x13de: @ SetVariable(Stack[-2], Stack[-1])
0x13df: Pop(2)
0x13e0: Return(); Pop(0)

0x13e1: PushEmpty()
0x13e2: Push("ood1Andrei5")
0x13e3: Push((int) 1)
0x13e4: @ SetVariable(Stack[-2], Stack[-1])
0x13e5: Pop(2)
0x13e6: Return(); Pop(0)

0x13e7: PushEmpty()
0x13e8: Push("ood1Andrei6")
0x13e9: Push((int) 1)
0x13ea: @ SetVariable(Stack[-2], Stack[-1])
0x13eb: Pop(2)
0x13ec: Return(); Pop(0)

0x13ed: PushEmpty()
0x13ee: Push("ood1Andrei7")
0x13ef: Push((int) 1)
0x13f0: @ SetVariable(Stack[-2], Stack[-1])
0x13f1: Pop(2)
0x13f2: Return(); Pop(0)

0x13f3: PushEmpty()
0x13f4: Push("KnowShabnak")
0x13f5: Push((int) 1)
0x13f6: @ SetVariable(Stack[-2], Stack[-1])
0x13f7: Pop(2)
0x13f8: Return(); Pop(0)

0x13f9: PushEmpty()
0x13fa: Push("ood1Andrei8")
0x13fb: Push((int) 1)
0x13fc: @ SetVariable(Stack[-2], Stack[-1])
0x13fd: Pop(2)
0x13fe: Return(); Pop(0)

0x13ff: PushEmpty()
0x1400: Push("KnowMat")
0x1401: Push((int) 1)
0x1402: @ SetVariable(Stack[-2], Stack[-1])
0x1403: Pop(2)
0x1404: Return(); Pop(0)

0x1405: PushEmpty()
0x1406: Push("ood2Andrei1")
0x1407: Push((int) 1)
0x1408: @ SetVariable(Stack[-2], Stack[-1])
0x1409: Pop(2)
0x140a: Return(); Pop(0)

0x140b: PushEmpty()
0x140c: Push("ood2Andrei2")
0x140d: Push((int) 1)
0x140e: @ SetVariable(Stack[-2], Stack[-1])
0x140f: Pop(2)
0x1410: Return(); Pop(0)

0x1411: PushEmpty()
0x1412: Push("ood2Andrei3")
0x1413: Push((int) 1)
0x1414: @ SetVariable(Stack[-2], Stack[-1])
0x1415: Pop(2)
0x1416: Return(); Pop(0)

0x1417: PushEmpty()
0x1418: Push("ood2Andrei4")
0x1419: Push((int) 1)
0x141a: @ SetVariable(Stack[-2], Stack[-1])
0x141b: Pop(2)
0x141c: Return(); Pop(0)

0x141d: PushEmpty()
0x141e: Push("ood2Andrei5")
0x141f: Push((int) 1)
0x1420: @ SetVariable(Stack[-2], Stack[-1])
0x1421: Pop(2)
0x1422: Return(); Pop(0)

0x1423: PushEmpty()
0x1424: Push("KnowAgo")
0x1425: Push((int) 1)
0x1426: @ SetVariable(Stack[-2], Stack[-1])
0x1427: Pop(2)
0x1428: Return(); Pop(0)

0x1429: PushEmpty(object, object)
0x142a: Push("d2q02")
0x142b: Push((int) 2)
0x142c: @ SetVariable(Stack[-2], Stack[-1])
0x142d: Pop(2)
0x142e: PushEmpty(object)
0x142f: Call 0x172c

0x1430: Stack[-2] = Stack[-1]
0x1431: Pop(1)
0x1432: Push("d2q02AndreiGotoPetr")
0x1433: Push("pt_map_petr")
0x1434: Push((int) 0)
0x1435: Push((int) 15273)
0x1436: PushEmpty(float)
0x1437: Call 0x1387

0x1438: Pop(0)
0x1439: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x143a: Pop(5)
0x143b: Push("d2q02AndreiGotoPetrSelf")
0x143c: Push("pt_map_andrei")
0x143d: Push((int) 0)
0x143e: Push((int) 15279)
0x143f: PushEmpty(float)
0x1440: Call 0x1387

0x1441: Pop(0)
0x1442: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1443: Pop(5)
0x1444: PushEmpty()
0x1445: Call 0x178f

0x1446: Pop(0)
0x1447: Return(); Pop(2)

0x1448: Stack[-1] = 0
0x1449: PushEmpty(object, object)
0x144a: Push("d2q02")
0x144b: Push((int) 6)
0x144c: @ SetVariable(Stack[-2], Stack[-1])
0x144d: Pop(2)
0x144e: PushEmpty(object)
0x144f: Call 0x172c

0x1450: Stack[-2] = Stack[-1]
0x1451: Pop(1)
0x1452: Push("d2q02AndreiGotoGrif")
0x1453: Push("pt_map_grif")
0x1454: Push((int) 0)
0x1455: Push((int) 15277)
0x1456: PushEmpty(float)
0x1457: Call 0x1387

0x1458: Pop(0)
0x1459: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x145a: Pop(5)
0x145b: Push("d2q02AndreiGotoGrifSelf")
0x145c: Push("pt_map_andrei")
0x145d: Push((int) 0)
0x145e: Push((int) 15282)
0x145f: PushEmpty(float)
0x1460: Call 0x1387

0x1461: Pop(0)
0x1462: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1463: Pop(5)
0x1464: PushEmpty()
0x1465: Call 0x177f

0x1466: Pop(0)
0x1467: Return(); Pop(2)

0x1468: Stack[-1] = 0
0x1469: PushEmpty(object, object)
0x146a: Push("d2q02")
0x146b: Push((int) 8)
0x146c: @ SetVariable(Stack[-2], Stack[-1])
0x146d: Pop(2)
0x146e: PushEmpty(object)
0x146f: Call 0x172c

0x1470: Stack[-2] = Stack[-1]
0x1471: Pop(1)
0x1472: Push("d2q02ReadyAndrei")
0x1473: Push("pt_map_andrei")
0x1474: Push((int) 0)
0x1475: Push((int) 15284)
0x1476: PushEmpty(float)
0x1477: Call 0x1387

0x1478: Pop(0)
0x1479: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x147a: Pop(5)
0x147b: PushEmpty()
0x147c: Call 0x179f

0x147d: Pop(0)
0x147e: PushEmpty(bool, string, string)
0x147f: Stack[-2] = "quest_d2_02"
0x1480: Stack[-1] = "put_patrol"
0x1481: Call 0x137b

0x1482: Pop(3)
0x1483: Return(); Pop(2)

0x1484: Stack[-1] = 0
0x1485: PushEmpty()
0x1486: PushEmpty(object, string, float)
0x1487: PushEmpty(object)
0x1488: Call 0x172c

0x1489: Stack[-4] = Stack[-1]
0x148a: Pop(1)
0x148b: Stack[-2] = "pt_map_grif"
0x148c: Stack[-1] = (int) 2
0x148d: Call 0x173d

0x148e: Pop(3)
0x148f: PushEmpty(object)
0x1490: Call 0x172c

0x1491: Pop(0)
0x1492: @@ ShowMap(Stack[-1])
0x1493: Pop(1)
0x1494: Return(); Pop(0)

0x1495: PushEmpty()
0x1496: Push("tvirin is given")
0x1497: @ Trace(Stack[-1])
0x1498: Pop(1)
0x1499: PushEmpty(object, string, int)
0x149a: Stack[-3] = Stack[-5]
0x149b: Stack[-2] = "tvirin"
0x149c: Stack[-1] = (int) 1
0x149d: Call 0x136e

0x149e: Pop(3)
0x149f: Return(); Pop(0)

0x14a0: PushEmpty()
0x14a1: Push("KnowAndrei")
0x14a2: Push((int) 1)
0x14a3: @ SetVariable(Stack[-2], Stack[-1])
0x14a4: Pop(2)
0x14a5: Return(); Pop(0)

0x14a6: PushEmpty()
0x14a7: Push("KnowNina")
0x14a8: Push((int) 1)
0x14a9: @ SetVariable(Stack[-2], Stack[-1])
0x14aa: Pop(2)
0x14ab: Return(); Pop(0)

0x14ac: PushEmpty()
0x14ad: Push("ood6Andrei1")
0x14ae: Push((int) 1)
0x14af: @ SetVariable(Stack[-2], Stack[-1])
0x14b0: Pop(2)
0x14b1: Return(); Pop(0)

0x14b2: PushEmpty()
0x14b3: Push("ood11Andrei1")
0x14b4: Push((int) 1)
0x14b5: @ SetVariable(Stack[-2], Stack[-1])
0x14b6: Pop(2)
0x14b7: Return(); Pop(0)

0x14b8: PushEmpty()
0x14b9: Push("d11q01")
0x14ba: Push((int) 4)
0x14bb: @ SetVariable(Stack[-2], Stack[-1])
0x14bc: Pop(2)
0x14bd: PushEmpty()
0x14be: Call 0x176f

0x14bf: Pop(0)
0x14c0: Return(); Pop(0)

0x14c1: PushEmpty()
0x14c2: Push("ood11Andrei2")
0x14c3: Push((int) 1)
0x14c4: @ SetVariable(Stack[-2], Stack[-1])
0x14c5: Pop(2)
0x14c6: Return(); Pop(0)

0x14c7: PushEmpty()
0x14c8: Push("ood11Andrei3")
0x14c9: Push((int) 1)
0x14ca: @ SetVariable(Stack[-2], Stack[-1])
0x14cb: Pop(2)
0x14cc: Return(); Pop(0)

0x14cd: PushEmpty()
0x14ce: Push("KnowMark")
0x14cf: Push((int) 1)
0x14d0: @ SetVariable(Stack[-2], Stack[-1])
0x14d1: Pop(2)
0x14d2: Return(); Pop(0)

0x14d3: PushEmpty()
0x14d4: PushEmpty(object, string, float)
0x14d5: PushEmpty(object)
0x14d6: Call 0x172c

0x14d7: Stack[-4] = Stack[-1]
0x14d8: Pop(1)
0x14d9: Stack[-2] = "pt_map_petr"
0x14da: Stack[-1] = (int) 2
0x14db: Call 0x173d

0x14dc: Pop(3)
0x14dd: PushEmpty(object)
0x14de: Call 0x172c

0x14df: Pop(0)
0x14e0: @@ ShowMap(Stack[-1])
0x14e1: Pop(1)
0x14e2: Return(); Pop(0)

0x14e3: PushEmpty()
0x14e4: Push("ood3Andrei1")
0x14e5: Push((int) 1)
0x14e6: @ SetVariable(Stack[-2], Stack[-1])
0x14e7: Pop(2)
0x14e8: Return(); Pop(0)

0x14e9: PushEmpty()
0x14ea: Push("ood10Andrei1")
0x14eb: Push((int) 1)
0x14ec: @ SetVariable(Stack[-2], Stack[-1])
0x14ed: Pop(2)
0x14ee: Return(); Pop(0)

0x14ef: PushEmpty()
0x14f0: Push("KnowTermitnik")
0x14f1: Push((int) 1)
0x14f2: @ SetVariable(Stack[-2], Stack[-1])
0x14f3: Pop(2)
0x14f4: Return(); Pop(0)

0x14f5: PushEmpty()
0x14f6: PushEmpty(int, string)
0x14f7: Stack[-1] = "KnowTheater"
0x14f8: Call 0x135c

0x14f9: Pop(1)
0x14fa: Push((int) 1)
0x14fb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14fc: IF (Stack[-1] == 0) GOTO 0x14ff; Pop(1)

0x14fd: Stack[-2] = (bool) 1
0x14fe: Return(); Pop(0)

0x14ff: Stack[-2] = (bool) 0
0x1500: Return(); Pop(0)

0x1501: PushEmpty()
0x1502: PushEmpty(int, string)
0x1503: Stack[-1] = "ood1Andrei1"
0x1504: Call 0x135c

0x1505: Pop(1)
0x1506: Push((int) 0)
0x1507: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1508: IF (Stack[-1] == 0) GOTO 0x150b; Pop(1)

0x1509: Stack[-2] = (bool) 1
0x150a: Return(); Pop(0)

0x150b: Stack[-2] = (bool) 0
0x150c: Return(); Pop(0)

0x150d: PushEmpty()
0x150e: PushEmpty(int, string)
0x150f: Stack[-1] = "ood1Andrei2"
0x1510: Call 0x135c

0x1511: Pop(1)
0x1512: Push((int) 0)
0x1513: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1514: IF (Stack[-1] == 0) GOTO 0x1517; Pop(1)

0x1515: Stack[-2] = (bool) 1
0x1516: Return(); Pop(0)

0x1517: Stack[-2] = (bool) 0
0x1518: Return(); Pop(0)

0x1519: PushEmpty()
0x151a: PushEmpty(int, string)
0x151b: Stack[-1] = "d1q01FirstGeorgVisit"
0x151c: Call 0x135c

0x151d: Pop(1)
0x151e: Push((int) 1)
0x151f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1520: IF (Stack[-1] == 0) GOTO 0x1523; Pop(1)

0x1521: Stack[-2] = (bool) 1
0x1522: Return(); Pop(0)

0x1523: Stack[-2] = (bool) 0
0x1524: Return(); Pop(0)

0x1525: PushEmpty()
0x1526: PushEmpty(int, string)
0x1527: Stack[-1] = "ood1Andrei3"
0x1528: Call 0x135c

0x1529: Pop(1)
0x152a: Push((int) 0)
0x152b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x152c: IF (Stack[-1] == 0) GOTO 0x152f; Pop(1)

0x152d: Stack[-2] = (bool) 1
0x152e: Return(); Pop(0)

0x152f: Stack[-2] = (bool) 0
0x1530: Return(); Pop(0)

0x1531: PushEmpty()
0x1532: PushEmpty(int, string)
0x1533: Stack[-1] = "ood1Andrei4"
0x1534: Call 0x135c

0x1535: Pop(1)
0x1536: Push((int) 0)
0x1537: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1538: IF (Stack[-1] == 0) GOTO 0x153b; Pop(1)

0x1539: Stack[-2] = (bool) 1
0x153a: Return(); Pop(0)

0x153b: Stack[-2] = (bool) 0
0x153c: Return(); Pop(0)

0x153d: PushEmpty()
0x153e: PushEmpty(int, string)
0x153f: Stack[-1] = "ood1Andrei5"
0x1540: Call 0x135c

0x1541: Pop(1)
0x1542: Push((int) 0)
0x1543: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1544: IF (Stack[-1] == 0) GOTO 0x1547; Pop(1)

0x1545: Stack[-2] = (bool) 1
0x1546: Return(); Pop(0)

0x1547: Stack[-2] = (bool) 0
0x1548: Return(); Pop(0)

0x1549: PushEmpty()
0x154a: PushEmpty(int, string)
0x154b: Stack[-1] = "ood1Andrei6"
0x154c: Call 0x135c

0x154d: Pop(1)
0x154e: Push((int) 0)
0x154f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1550: IF (Stack[-1] == 0) GOTO 0x1553; Pop(1)

0x1551: Stack[-2] = (bool) 1
0x1552: Return(); Pop(0)

0x1553: Stack[-2] = (bool) 0
0x1554: Return(); Pop(0)

0x1555: PushEmpty()
0x1556: PushEmpty(int, string)
0x1557: Stack[-1] = "ood1Andrei7"
0x1558: Call 0x135c

0x1559: Pop(1)
0x155a: Push((int) 0)
0x155b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x155c: IF (Stack[-1] == 0) GOTO 0x155f; Pop(1)

0x155d: Stack[-2] = (bool) 1
0x155e: Return(); Pop(0)

0x155f: Stack[-2] = (bool) 0
0x1560: Return(); Pop(0)

0x1561: PushEmpty()
0x1562: PushEmpty(int, string)
0x1563: Stack[-1] = "ood1Andrei8"
0x1564: Call 0x135c

0x1565: Pop(1)
0x1566: Push((int) 0)
0x1567: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1568: IF (Stack[-1] == 0) GOTO 0x156b; Pop(1)

0x1569: Stack[-2] = (bool) 1
0x156a: Return(); Pop(0)

0x156b: Stack[-2] = (bool) 0
0x156c: Return(); Pop(0)

0x156d: PushEmpty()
0x156e: PushEmpty(int, string)
0x156f: Stack[-1] = "KnowMat"
0x1570: Call 0x135c

0x1571: Pop(1)
0x1572: Push((int) 1)
0x1573: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1574: IF (Stack[-1] == 0) GOTO 0x1577; Pop(1)

0x1575: Stack[-2] = (bool) 1
0x1576: Return(); Pop(0)

0x1577: Stack[-2] = (bool) 0
0x1578: Return(); Pop(0)

0x1579: PushEmpty()
0x157a: PushEmpty(int, string)
0x157b: Stack[-1] = "ood2Andrei1"
0x157c: Call 0x135c

0x157d: Pop(1)
0x157e: Push((int) 0)
0x157f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1580: IF (Stack[-1] == 0) GOTO 0x1583; Pop(1)

0x1581: Stack[-2] = (bool) 1
0x1582: Return(); Pop(0)

0x1583: Stack[-2] = (bool) 0
0x1584: Return(); Pop(0)

0x1585: PushEmpty()
0x1586: PushEmpty(int, string)
0x1587: Stack[-1] = "ood2Andrei2"
0x1588: Call 0x135c

0x1589: Pop(1)
0x158a: Push((int) 0)
0x158b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x158c: IF (Stack[-1] == 0) GOTO 0x158f; Pop(1)

0x158d: Stack[-2] = (bool) 1
0x158e: Return(); Pop(0)

0x158f: Stack[-2] = (bool) 0
0x1590: Return(); Pop(0)

0x1591: PushEmpty()
0x1592: PushEmpty(int, string)
0x1593: Stack[-1] = "ood2Andrei3"
0x1594: Call 0x135c

0x1595: Pop(1)
0x1596: Push((int) 0)
0x1597: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1598: IF (Stack[-1] == 0) GOTO 0x159b; Pop(1)

0x1599: Stack[-2] = (bool) 1
0x159a: Return(); Pop(0)

0x159b: Stack[-2] = (bool) 0
0x159c: Return(); Pop(0)

0x159d: PushEmpty()
0x159e: PushEmpty(int, string)
0x159f: Stack[-1] = "ood2Andrei4"
0x15a0: Call 0x135c

0x15a1: Pop(1)
0x15a2: Push((int) 0)
0x15a3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15a4: IF (Stack[-1] == 0) GOTO 0x15a7; Pop(1)

0x15a5: Stack[-2] = (bool) 1
0x15a6: Return(); Pop(0)

0x15a7: Stack[-2] = (bool) 0
0x15a8: Return(); Pop(0)

0x15a9: PushEmpty()
0x15aa: PushEmpty(int, string)
0x15ab: Stack[-1] = "ood2Andrei5"
0x15ac: Call 0x135c

0x15ad: Pop(1)
0x15ae: Push((int) 0)
0x15af: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15b0: IF (Stack[-1] == 0) GOTO 0x15b3; Pop(1)

0x15b1: Stack[-2] = (bool) 1
0x15b2: Return(); Pop(0)

0x15b3: Stack[-2] = (bool) 0
0x15b4: Return(); Pop(0)

0x15b5: PushEmpty()
0x15b6: PushEmpty(int, string)
0x15b7: Stack[-1] = "d2q02"
0x15b8: Call 0x135c

0x15b9: Pop(1)
0x15ba: Push((int) 1000)
0x15bb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15bc: IF (Stack[-1] == 0) GOTO 0x15bf; Pop(1)

0x15bd: Stack[-2] = (bool) 1
0x15be: Return(); Pop(0)

0x15bf: Stack[-2] = (bool) 0
0x15c0: Return(); Pop(0)

0x15c1: PushEmpty()
0x15c2: PushEmpty(int, string)
0x15c3: Stack[-1] = "d2q02"
0x15c4: Call 0x135c

0x15c5: Pop(1)
0x15c6: Push((int) 1)
0x15c7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15c8: IF (Stack[-1] == 0) GOTO 0x15cb; Pop(1)

0x15c9: Stack[-2] = (bool) 1
0x15ca: Return(); Pop(0)

0x15cb: Stack[-2] = (bool) 0
0x15cc: Return(); Pop(0)

0x15cd: PushEmpty()
0x15ce: PushEmpty(int, string)
0x15cf: Stack[-1] = "d2q02"
0x15d0: Call 0x135c

0x15d1: Pop(1)
0x15d2: Push((int) 3)
0x15d3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15d4: IF (Stack[-1] == 0) GOTO 0x15d7; Pop(1)

0x15d5: Stack[-2] = (bool) 1
0x15d6: Return(); Pop(0)

0x15d7: Stack[-2] = (bool) 0
0x15d8: Return(); Pop(0)

0x15d9: PushEmpty()
0x15da: PushEmpty(int, string)
0x15db: Stack[-1] = "d2q02"
0x15dc: Call 0x135c

0x15dd: Pop(1)
0x15de: Push((int) 5)
0x15df: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15e0: IF (Stack[-1] == 0) GOTO 0x15e3; Pop(1)

0x15e1: Stack[-2] = (bool) 1
0x15e2: Return(); Pop(0)

0x15e3: Stack[-2] = (bool) 0
0x15e4: Return(); Pop(0)

0x15e5: PushEmpty()
0x15e6: PushEmpty(int, string)
0x15e7: Stack[-1] = "d2q02"
0x15e8: Call 0x135c

0x15e9: Pop(1)
0x15ea: Push((int) 7)
0x15eb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15ec: IF (Stack[-1] == 0) GOTO 0x15ef; Pop(1)

0x15ed: Stack[-2] = (bool) 1
0x15ee: Return(); Pop(0)

0x15ef: Stack[-2] = (bool) 0
0x15f0: Return(); Pop(0)

0x15f1: PushEmpty()
0x15f2: PushEmpty(int, string)
0x15f3: Stack[-1] = "KnowViktor"
0x15f4: Call 0x135c

0x15f5: Pop(1)
0x15f6: Push((int) 1)
0x15f7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15f8: IF (Stack[-1] == 0) GOTO 0x15fb; Pop(1)

0x15f9: Stack[-2] = (bool) 1
0x15fa: Return(); Pop(0)

0x15fb: Stack[-2] = (bool) 0
0x15fc: Return(); Pop(0)

0x15fd: PushEmpty()
0x15fe: PushEmpty(int, string)
0x15ff: Stack[-1] = "d3q01"
0x1600: Call 0x135c

0x1601: Pop(1)
0x1602: Push((int) 0)
0x1603: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1604: IF (Stack[-1] == 0) GOTO 0x1607; Pop(1)

0x1605: Stack[-2] = (bool) 1
0x1606: Return(); Pop(0)

0x1607: Stack[-2] = (bool) 0
0x1608: Return(); Pop(0)

0x1609: PushEmpty()
0x160a: PushEmpty(bool, object)
0x160b: Stack[-1] = Stack[-3]
0x160c: Call 0x16f7

0x160d: Pop(1)
0x160e: IF (Stack[-1] == 0) GOTO 0x1611; Pop(1)

0x160f: Stack[-2] = (bool) 1
0x1610: Return(); Pop(0)

0x1611: Stack[-2] = (bool) 0
0x1612: Return(); Pop(0)

0x1613: PushEmpty()
0x1614: PushEmpty(int, string)
0x1615: Stack[-1] = "KnowMark"
0x1616: Call 0x135c

0x1617: Pop(1)
0x1618: Push((int) 1)
0x1619: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x161a: IF (Stack[-1] == 0) GOTO 0x161d; Pop(1)

0x161b: Stack[-2] = (bool) 1
0x161c: Return(); Pop(0)

0x161d: Stack[-2] = (bool) 0
0x161e: Return(); Pop(0)

0x161f: PushEmpty()
0x1620: PushEmpty(int, string)
0x1621: Stack[-1] = "d5q01"
0x1622: Call 0x135c

0x1623: Pop(1)
0x1624: Push((int) 1000)
0x1625: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1626: IF (Stack[-1] == 0) GOTO 0x1629; Pop(1)

0x1627: Stack[-2] = (bool) 1
0x1628: Return(); Pop(0)

0x1629: Stack[-2] = (bool) 0
0x162a: Return(); Pop(0)

0x162b: PushEmpty()
0x162c: PushEmpty(int, string)
0x162d: Stack[-1] = "ood6Andrei1"
0x162e: Call 0x135c

0x162f: Pop(1)
0x1630: Push((int) 0)
0x1631: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1632: IF (Stack[-1] == 0) GOTO 0x1635; Pop(1)

0x1633: Stack[-2] = (bool) 1
0x1634: Return(); Pop(0)

0x1635: Stack[-2] = (bool) 0
0x1636: Return(); Pop(0)

0x1637: PushEmpty()
0x1638: PushEmpty(int, string)
0x1639: Stack[-1] = "KnowAnna"
0x163a: Call 0x135c

0x163b: Pop(1)
0x163c: Push((int) 1)
0x163d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x163e: IF (Stack[-1] == 0) GOTO 0x1641; Pop(1)

0x163f: Stack[-2] = (bool) 1
0x1640: Return(); Pop(0)

0x1641: Stack[-2] = (bool) 0
0x1642: Return(); Pop(0)

0x1643: PushEmpty()
0x1644: PushEmpty(int, string)
0x1645: Stack[-1] = "KnowEva"
0x1646: Call 0x135c

0x1647: Pop(1)
0x1648: Push((int) 1)
0x1649: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x164a: IF (Stack[-1] == 0) GOTO 0x164d; Pop(1)

0x164b: Stack[-2] = (bool) 1
0x164c: Return(); Pop(0)

0x164d: Stack[-2] = (bool) 0
0x164e: Return(); Pop(0)

0x164f: PushEmpty()
0x1650: PushEmpty(int, string)
0x1651: Stack[-1] = "KnowGrif"
0x1652: Call 0x135c

0x1653: Pop(1)
0x1654: Push((int) 1)
0x1655: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1656: IF (Stack[-1] == 0) GOTO 0x1659; Pop(1)

0x1657: Stack[-2] = (bool) 1
0x1658: Return(); Pop(0)

0x1659: Stack[-2] = (bool) 0
0x165a: Return(); Pop(0)

0x165b: PushEmpty()
0x165c: PushEmpty(int, string)
0x165d: Stack[-1] = "d11q01"
0x165e: Call 0x135c

0x165f: Pop(1)
0x1660: Push((int) 3)
0x1661: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1662: IF (Stack[-1] == 0) GOTO 0x1665; Pop(1)

0x1663: Stack[-2] = (bool) 1
0x1664: Return(); Pop(0)

0x1665: Stack[-2] = (bool) 0
0x1666: Return(); Pop(0)

0x1667: PushEmpty()
0x1668: PushEmpty(int, string)
0x1669: Stack[-1] = "ood11Andrei1"
0x166a: Call 0x135c

0x166b: Pop(1)
0x166c: Push((int) 0)
0x166d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x166e: IF (Stack[-1] == 0) GOTO 0x1671; Pop(1)

0x166f: Stack[-2] = (bool) 1
0x1670: Return(); Pop(0)

0x1671: Stack[-2] = (bool) 0
0x1672: Return(); Pop(0)

0x1673: PushEmpty()
0x1674: PushEmpty(int, string)
0x1675: Stack[-1] = "d11q01"
0x1676: Call 0x135c

0x1677: Pop(1)
0x1678: Push((int) 4)
0x1679: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x167a: IF (Stack[-1] == 0) GOTO 0x167d; Pop(1)

0x167b: Stack[-2] = (bool) 1
0x167c: Return(); Pop(0)

0x167d: Stack[-2] = (bool) 0
0x167e: Return(); Pop(0)

0x167f: PushEmpty()
0x1680: PushEmpty(int, string)
0x1681: Stack[-1] = "ood11Andrei2"
0x1682: Call 0x135c

0x1683: Pop(1)
0x1684: Push((int) 0)
0x1685: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1686: IF (Stack[-1] == 0) GOTO 0x1689; Pop(1)

0x1687: Stack[-2] = (bool) 1
0x1688: Return(); Pop(0)

0x1689: Stack[-2] = (bool) 0
0x168a: Return(); Pop(0)

0x168b: PushEmpty()
0x168c: PushEmpty(int, string)
0x168d: Stack[-1] = "ood11Andrei3"
0x168e: Call 0x135c

0x168f: Pop(1)
0x1690: Push((int) 0)
0x1691: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1692: IF (Stack[-1] == 0) GOTO 0x1695; Pop(1)

0x1693: Stack[-2] = (bool) 1
0x1694: Return(); Pop(0)

0x1695: Stack[-2] = (bool) 0
0x1696: Return(); Pop(0)

0x1697: PushEmpty()
0x1698: PushEmpty(int, string)
0x1699: Stack[-1] = "KnowLaska"
0x169a: Call 0x135c

0x169b: Pop(1)
0x169c: Push((int) 1)
0x169d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x169e: IF (Stack[-1] == 0) GOTO 0x16a1; Pop(1)

0x169f: Stack[-2] = (bool) 1
0x16a0: Return(); Pop(0)

0x16a1: Stack[-2] = (bool) 0
0x16a2: Return(); Pop(0)

0x16a3: PushEmpty()
0x16a4: PushEmpty(int, string)
0x16a5: Stack[-1] = "KnowMaria"
0x16a6: Call 0x135c

0x16a7: Pop(1)
0x16a8: Push((int) 1)
0x16a9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16aa: IF (Stack[-1] == 0) GOTO 0x16ad; Pop(1)

0x16ab: Stack[-2] = (bool) 1
0x16ac: Return(); Pop(0)

0x16ad: Stack[-2] = (bool) 0
0x16ae: Return(); Pop(0)

0x16af: PushEmpty()
0x16b0: PushEmpty(int, string)
0x16b1: Stack[-1] = "ood3Andrei1"
0x16b2: Call 0x135c

0x16b3: Pop(1)
0x16b4: Push((int) 0)
0x16b5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16b6: IF (Stack[-1] == 0) GOTO 0x16b9; Pop(1)

0x16b7: Stack[-2] = (bool) 1
0x16b8: Return(); Pop(0)

0x16b9: Stack[-2] = (bool) 0
0x16ba: Return(); Pop(0)

0x16bb: PushEmpty()
0x16bc: PushEmpty(int, string)
0x16bd: Stack[-1] = "d10q01"
0x16be: Call 0x135c

0x16bf: Pop(1)
0x16c0: Push((int) 0)
0x16c1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16c2: IF (Stack[-1] == 0) GOTO 0x16c5; Pop(1)

0x16c3: Stack[-2] = (bool) 1
0x16c4: Return(); Pop(0)

0x16c5: Stack[-2] = (bool) 0
0x16c6: Return(); Pop(0)

0x16c7: PushEmpty()
0x16c8: PushEmpty(int, string)
0x16c9: Stack[-1] = "d10q01"
0x16ca: Call 0x135c

0x16cb: Pop(1)
0x16cc: Push((int) 1000)
0x16cd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16ce: IF (Stack[-1] == 0) GOTO 0x16d1; Pop(1)

0x16cf: Stack[-2] = (bool) 1
0x16d0: Return(); Pop(0)

0x16d1: Stack[-2] = (bool) 0
0x16d2: Return(); Pop(0)

0x16d3: PushEmpty()
0x16d4: PushEmpty(int, string)
0x16d5: Stack[-1] = "ood10Andrei1"
0x16d6: Call 0x135c

0x16d7: Pop(1)
0x16d8: Push((int) 0)
0x16d9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16da: IF (Stack[-1] == 0) GOTO 0x16dd; Pop(1)

0x16db: Stack[-2] = (bool) 1
0x16dc: Return(); Pop(0)

0x16dd: Stack[-2] = (bool) 0
0x16de: Return(); Pop(0)

0x16df: PushEmpty()
0x16e0: PushEmpty(int, string)
0x16e1: Stack[-1] = "KnowPredictions"
0x16e2: Call 0x135c

0x16e3: Pop(1)
0x16e4: Push((int) 1)
0x16e5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16e6: IF (Stack[-1] == 0) GOTO 0x16e9; Pop(1)

0x16e7: Stack[-2] = (bool) 1
0x16e8: Return(); Pop(0)

0x16e9: Stack[-2] = (bool) 0
0x16ea: Return(); Pop(0)

0x16eb: PushEmpty()
0x16ec: PushEmpty(int, string)
0x16ed: Stack[-1] = "KnowTermitnik"
0x16ee: Call 0x135c

0x16ef: Pop(1)
0x16f0: Push((int) 1)
0x16f1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16f2: IF (Stack[-1] == 0) GOTO 0x16f5; Pop(1)

0x16f3: Stack[-2] = (bool) 1
0x16f4: Return(); Pop(0)

0x16f5: Stack[-2] = (bool) 0
0x16f6: Return(); Pop(0)

0x16f7: PushEmpty()
0x16f8: PushEmpty(int)
0x16f9: Call 0x1395

0x16fa: Pop(0)
0x16fb: Push((int) 18)
0x16fc: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x16fd: IF (Stack[-1] == 0) GOTO 0x1700; Pop(1)

0x16fe: Stack[-2] = (bool) 1
0x16ff: Return(); Pop(0)

0x1700: Stack[-2] = (bool) 0
0x1701: Return(); Pop(0)

0x1702: PushEmpty(object, object)
0x1703: @ GetDiaryRoot(Stack[-1])
0x1704: Pop(0)
0x1705: Pop(0); Push((bool) Stack[-1] == 0)
0x1706: IF (Stack[-1] == 0) GOTO 0x170c; Pop(1)

0x1707: Push("Can't retrieve diary root")
0x1708: @ Trace(Stack[-1])
0x1709: Pop(1)
0x170a: Stack[-3] = (bool) 0
0x170b: Return(); Pop(2)

0x170c: Stack[-3] = Stack[-1]
0x170d: Return(); Pop(2)

0x170e: Stack[-1] = 0
0x170f: PushEmpty(object, object, int, object, object, int)
0x1710: PushEmpty(object)
0x1711: Call 0x1702

0x1712: Stack[-4] = Stack[-1]
0x1713: Pop(1)
0x1714: @@ Find(Stack[-7], Stack[-2])
0x1715: Pop(0)
0x1716: Pop(0); Push((bool) Stack[-2] == 0)
0x1717: IF (Stack[-1] == 0) GOTO 0x171e; Pop(1)

0x1718: Push("Can't find diary parent with id: ")
0x1719: Pop(1); Push(Stack[-1] + Stack[-8]);
0x171a: @ Trace(Stack[-1])
0x171b: Pop(1)
0x171c: Stack[-9] = (bool) 0
0x171d: Return(); Pop(6)

0x171e: @@ AddChild(Stack[-8])
0x171f: Pop(0)
0x1720: Push("player_diary")
0x1721: Push((int) 1)
0x1722: @ SetVariable(Stack[-2], Stack[-1])
0x1723: Pop(2)
0x1724: @@ GetCategory(Stack[-1])
0x1725: Pop(0)
0x1726: @ SetDiarySection(Stack[-1])
0x1727: Pop(0)
0x1728: Stack[-9] = (bool) 0
0x1729: Return(); Pop(6)

0x172a: Stack[-2] = 0
0x172b: Stack[-3] = 0
0x172c: PushEmpty(object, object, object, object)
0x172d: @ GetMainOutdoorScene(Stack[-2])
0x172e: Pop(0)
0x172f: Pop(0); Push((bool) Stack[-2] == 0)
0x1730: IF (Stack[-1] == 0) GOTO 0x1737; Pop(1)

0x1731: Push("Can't find main outdoor scene")
0x1732: @ Trace(Stack[-1])
0x1733: Pop(1)
0x1734: Stack[-1] = 0
0x1735: Stack[-5] = Stack[-1]
0x1736: Return(); Pop(4)

0x1737: @@ GetMap(Stack[-1])
0x1738: Pop(0)
0x1739: Stack[-5] = Stack[-1]
0x173a: Return(); Pop(4)

0x173b: Stack[-1] = 0
0x173c: Stack[-2] = 0
0x173d: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x173e: @ GetMainOutdoorScene(Stack[-2])
0x173f: Pop(0)
0x1740: Pop(0); Push((bool) Stack[-2] == 0)
0x1741: IF (Stack[-1] == 0) GOTO 0x1746; Pop(1)

0x1742: Push("Can't find main outdoor scene")
0x1743: @ Trace(Stack[-1])
0x1744: Pop(1)
0x1745: Return(); Pop(8)

0x1746: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x1747: Pop(0)
0x1748: Pop(0); Push((bool) Stack[-1] == 0)
0x1749: IF (Stack[-1] == 0) GOTO 0x1750; Pop(1)

0x174a: Push("Warning: outdoor scene locator ")
0x174b: Pop(1); Push(Stack[-1] + Stack[-11]);
0x174c: Push(" doesnt exist")
0x174d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x174e: @ Trace(Stack[-1])
0x174f: Pop(1)
0x1750: @@ GetMap(Stack[-11])
0x1751: Pop(0)
0x1752: Pop(0); Push((bool) Stack[-11] == 0)
0x1753: IF (Stack[-1] == 0) GOTO 0x1758; Pop(1)

0x1754: Push("Can't find map")
0x1755: @ Trace(Stack[-1])
0x1756: Pop(1)
0x1757: Return(); Pop(8)

0x1758: Push(CvectorIndex(Stack[-4], 0))
0x1759: Push(CvectorIndex(Stack[-5], 2))
0x175a: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x175b: Pop(2)
0x175c: Return(); Pop(8)

0x175d: Stack[-2] = 0
0x175e: PushEmpty(int, int)
0x175f: Push("player")
0x1760: @ GetVariable(Stack[-1], Stack[-2])
0x1761: Pop(1)
0x1762: Push((int) 0)
0x1763: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1764: IF (Stack[-1] == 0) GOTO 0x1768; Pop(1)

0x1765: Stack[-3] = (int) 200001
0x1766: Return(); Pop(2)

0x1767: GOTO 0x176d

0x1768: Push((int) 1)
0x1769: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x176a: IF (Stack[-1] == 0) GOTO 0x176d; Pop(1)

0x176b: Stack[-3] = (int) 200002
0x176c: Return(); Pop(2)

0x176d: Stack[-3] = (int) 200003
0x176e: Return(); Pop(2)

0x176f: PushEmpty(object, object)
0x1770: Push("Adding diary entry")
0x1771: @ Trace(Stack[-1])
0x1772: Pop(1)
0x1773: Push((int) 195)
0x1774: Push((int) 1)
0x1775: Push((int) 15480)
0x1776: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1777: Pop(3)
0x1778: PushEmpty(bool, object, int)
0x1779: Stack[-2] = Stack[-4]
0x177a: Stack[-1] = (int) 192
0x177b: Call 0x170f

0x177c: Pop(3)
0x177d: Return(); Pop(2)

0x177e: Stack[-1] = 0
0x177f: PushEmpty(object, object)
0x1780: Push("Adding diary entry")
0x1781: @ Trace(Stack[-1])
0x1782: Pop(1)
0x1783: Push((int) 59)
0x1784: Push((int) 2)
0x1785: Push((int) 12141)
0x1786: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1787: Pop(3)
0x1788: PushEmpty(bool, object, int)
0x1789: Stack[-2] = Stack[-4]
0x178a: Stack[-1] = (int) 11
0x178b: Call 0x170f

0x178c: Pop(3)
0x178d: Return(); Pop(2)

0x178e: Stack[-1] = 0
0x178f: PushEmpty(object, object)
0x1790: Push("Adding diary entry")
0x1791: @ Trace(Stack[-1])
0x1792: Pop(1)
0x1793: Push((int) 58)
0x1794: Push((int) 2)
0x1795: Push((int) 12140)
0x1796: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1797: Pop(3)
0x1798: PushEmpty(bool, object, int)
0x1799: Stack[-2] = Stack[-4]
0x179a: Stack[-1] = (int) 11
0x179b: Call 0x170f

0x179c: Pop(3)
0x179d: Return(); Pop(2)

0x179e: Stack[-1] = 0
0x179f: PushEmpty(object, object)
0x17a0: Push("Adding diary entry")
0x17a1: @ Trace(Stack[-1])
0x17a2: Pop(1)
0x17a3: Push((int) 60)
0x17a4: Push((int) 2)
0x17a5: Push((int) 12142)
0x17a6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x17a7: Pop(3)
0x17a8: PushEmpty(bool, object, int)
0x17a9: Stack[-2] = Stack[-4]
0x17aa: Stack[-1] = (int) 11
0x17ab: Call 0x170f

0x17ac: Pop(3)
0x17ad: Return(); Pop(2)

0x17ae: Stack[-1] = 0
0x17af: Push("mt_andrei")
0x17b0: Push((int) 0)
0x17b1: @ SetVariable(Stack[-2], Stack[-1])
0x17b2: Pop(2)
0x17b3: Return(); Pop(0)

0x17b4: PushEmpty(int, int)
0x17b5: Push("mt_andrei")
0x17b6: @ GetVariable(Stack[-1], Stack[-2])
0x17b7: Pop(1)
0x17b8: Pop(0); Push((bool) Stack[-1] == 0)
0x17b9: IF (Stack[-1] == 0) GOTO 0x17c4; Pop(1)

0x17ba: PushEmpty(int, object)
0x17bb: Stack[-1] = Stack[-5]
0x17bc: Push(-2, 1); TaskCall(2)
0x17bd: Call 0x31

0x17be: Pop(-2, 1); TaskReturn
0x17bf: Pop(2)
0x17c0: Push("mt_andrei")
0x17c1: Push((int) 1)
0x17c2: @ SetVariable(Stack[-2], Stack[-1])
0x17c3: Pop(2)
0x17c4: PushEmpty(bool, int)
0x17c5: Stack[-1] = (int) 1
0x17c6: Call 0x139d

0x17c7: Pop(1)
0x17c8: IF (Stack[-1] == 0) GOTO 0x17d0; Pop(1)

0x17c9: PushEmpty(int, object)
0x17ca: Stack[-1] = Stack[-5]
0x17cb: Push(-2, 1); TaskCall(4)
0x17cc: Call 0x152

0x17cd: Pop(-2, 1); TaskReturn
0x17ce: Pop(2)
0x17cf: Return(); Pop(2)

0x17d0: PushEmpty(bool, int)
0x17d1: Stack[-1] = (int) 2
0x17d2: Call 0x139d

0x17d3: Pop(1)
0x17d4: IF (Stack[-1] == 0) GOTO 0x17dc; Pop(1)

0x17d5: PushEmpty(int, object)
0x17d6: Stack[-1] = Stack[-5]
0x17d7: Push(-2, 1); TaskCall(6)
0x17d8: Call 0x7a4

0x17d9: Pop(-2, 1); TaskReturn
0x17da: Pop(2)
0x17db: Return(); Pop(2)

0x17dc: PushEmpty(bool, int)
0x17dd: Stack[-1] = (int) 3
0x17de: Call 0x139d

0x17df: Pop(1)
0x17e0: IF (Stack[-1] == 0) GOTO 0x17e8; Pop(1)

0x17e1: PushEmpty(int, object)
0x17e2: Stack[-1] = Stack[-5]
0x17e3: Push(-2, 1); TaskCall(8)
0x17e4: Call 0xc17

0x17e5: Pop(-2, 1); TaskReturn
0x17e6: Pop(2)
0x17e7: Return(); Pop(2)

0x17e8: PushEmpty(bool, int)
0x17e9: Stack[-1] = (int) 6
0x17ea: Call 0x139d

0x17eb: Pop(1)
0x17ec: IF (Stack[-1] == 0) GOTO 0x17f4; Pop(1)

0x17ed: PushEmpty(int, object)
0x17ee: Stack[-1] = Stack[-5]
0x17ef: Push(-2, 1); TaskCall(10)
0x17f0: Call 0xdc3

0x17f1: Pop(-2, 1); TaskReturn
0x17f2: Pop(2)
0x17f3: Return(); Pop(2)

0x17f4: PushEmpty(bool, int)
0x17f5: Stack[-1] = (int) 10
0x17f6: Call 0x139d

0x17f7: Pop(1)
0x17f8: IF (Stack[-1] == 0) GOTO 0x1800; Pop(1)

0x17f9: PushEmpty(int, object)
0x17fa: Stack[-1] = Stack[-5]
0x17fb: Push(-2, 1); TaskCall(12)
0x17fc: Call 0xf34

0x17fd: Pop(-2, 1); TaskReturn
0x17fe: Pop(2)
0x17ff: Return(); Pop(2)

0x1800: PushEmpty(bool, int)
0x1801: Stack[-1] = (int) 11
0x1802: Call 0x139d

0x1803: Pop(1)
0x1804: IF (Stack[-1] == 0) GOTO 0x180c; Pop(1)

0x1805: PushEmpty(int, object)
0x1806: Stack[-1] = Stack[-5]
0x1807: Push(-2, 1); TaskCall(14)
0x1808: Call 0x105b

0x1809: Pop(-2, 1); TaskReturn
0x180a: Pop(2)
0x180b: Return(); Pop(2)

0x180c: PushEmpty(bool)
0x180d: Call 0x13a3

0x180e: Pop(1)
0x180f: Return(); Pop(2)

