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
	GetProperty
	SetProperty
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	.bin
	No
	ui/NPC_Viktor.png
	ood1Viktor1
	ood1Viktor2
	ood1Viktor3
	ood1Viktor4
	quest_d1_02
	ood1Viktor5
	playsound
	givemoney
	KnowBattleBrods
	KnowShabnak
	ood2Viktor1
	KnowRavell
	money 5000 is given
	ood1Viktor6
	ood1Viktor7
	ood1Viktor8
	ood1Viktor9
	ood1Viktor10
	ood1Viktor11
	d1q02ViktorGotoAnna
	pt_map_anna
	AddMark
	ShowMap
	KnowStation
	KnowFactory
	KnowWarehouses
	KnowViktor
	d3q02ViktorGotoMladVlad
	pt_map_maldvlad
	d3q02ViktorGotoMladVladSelf
	pt_map_viktor
	pt_map_mladvlad
	d3q02
	d5q03
	d5q03ViktorSavePrisonersSelf
	d5q03SavePrisoners
	pt_map_uprava_prison
	quest_d5_03
	place_prisoners
	ood5Viktor1
	money30000 is given
	ood5Viktor2
	ood5Viktor3
	ood6Viktor1
	d6q01
	d6q01ViktorGotoAlexandr
	pt_map_alexandr
	d6q01ViktorGotoBigVlad
	pt_map_bigvlad
	d6q01ViktorGotoAlxBigSelf
	KnowAlexandr
	ood8Viktor1
	ood9Viktor1
	d9q01
	quest_d9_01
	place_rifles
	ood9Viktor2
	KnowMyth
	d6ViktorVisit
	ood9Viktor3
	KnowBoyni
	KnowTaurusProject
	d1q01
	d1q01TeloNedostupno
	d1q02
	d1q01FirstGeorgVisit
	d2q03
	d2q03MariaGotoViktor
	KnowSaburivClan
	KnowBigVlad
	d8KainIsReason
	KnowEva
	d9TalkToPolkovodec
	KnowJulia
	KnowStamatins
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
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	lshWaitForAnimEnd (1 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
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
		EVENT_11 Op = 0x1c3 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x40b Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc9a Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe54 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x11f0 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1474 Vars = (int, int)
	GTASK_16 Vars = (object) Params = 2
	GTASK_17 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x15fd Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x1d61

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0x17e0

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
0x15: Call 0x1821

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
0x26: Call 0x1d65

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x17d4

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0x17e5

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0x187d

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0x187f

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x1cc0

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
0x67: Call 0x181d

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
0x79: Call 0x192d

0x7a: Pop(2)
0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral"
0x7d: Call 0xaf

0x7e: Pop(1)
0x7f: Push((int) 1575)
0x80: @@ SetMessage(Stack[-1])
0x81: Pop(1)
0x82: @@ ClearReplies()
0x83: Pop(0)
0x84: Push((int) 1576)
0x85: Push((int) 1782)
0x86: Push((int) 1780)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: Push((int) 1577)
0x8a: Push((int) 1782)
0x8b: Push((int) 1781)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: GOTO 0x91

0x8f: Return(); Pop(0)

0x90: GOTO 0x74

0x91: PushEmpty(bool)
0x92: Call 0x1881

0x93: Pop(0)
0x94: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x95: @ lshWaitForAnimEnd()
0x96: Pop(0)
0x97: Push( Stack[3 + Tasks[-1].StackPointer] )
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: GOTO 0x9f

0x9a: PushEmpty(string)
0x9b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9c: Call 0x1821

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
0xb1: Call 0x1881

0xb2: Pop(0)
0xb3: Pop(1); Push((bool) Stack[-1] == 0)
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Return(); Pop(0)

0xb6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: Return(); Pop(0)

0xb9: PushEmpty(string)
0xba: Stack[-1] = Stack[-2]
0xbb: Call 0x1821

0xbc: Pop(1)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0xc2: PushEmpty()
0xc3: Call 0x1833

0xc4: Pop(0)
0xc5: Push((int) 1779)
0xc6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call 0x192d

0xcc: Pop(2)
0xcd: PushEmpty(string)
0xce: Stack[-1] = "Neutral"
0xcf: Call 0xaf

0xd0: Pop(1)
0xd1: Push((int) 1575)
0xd2: @@ SetMessage(Stack[-1])
0xd3: Pop(1)
0xd4: @@ ClearReplies()
0xd5: Pop(0)
0xd6: Push((int) 1576)
0xd7: Push((int) 1782)
0xd8: Push((int) 1780)
0xd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda: Pop(3)
0xdb: Push((int) 1577)
0xdc: Push((int) 1782)
0xdd: Push((int) 1781)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: Return(); Pop(0)

0xe1: Push((int) 1782)
0xe2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xe4: PushEmpty(object, object)
0xe5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe7: Call 0x1a1b

0xe8: Pop(2)
0xe9: PushEmpty(string)
0xea: Stack[-1] = "Neutral"
0xeb: Call 0xaf

0xec: Pop(1)
0xed: Push((int) 1578)
0xee: @@ SetMessage(Stack[-1])
0xef: Pop(1)
0xf0: @@ ClearReplies()
0xf1: Pop(0)
0xf2: Push((int) 1580)
0xf3: Push((int) 1785)
0xf4: Push((int) 1784)
0xf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6: Pop(3)
0xf7: Push((int) 1579)
0xf8: Push((int) -1)
0xf9: Push((int) 1783)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Return(); Pop(0)

0xfd: Push((int) 1785)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral"
0x102: Call 0xaf

0x103: Pop(1)
0x104: Push((int) 1581)
0x105: @@ SetMessage(Stack[-1])
0x106: Pop(1)
0x107: @@ ClearReplies()
0x108: Pop(0)
0x109: Push((int) 1582)
0x10a: Push((int) -1)
0x10b: Push((int) 1786)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: Push((int) 1583)
0x10f: Push((int) -1)
0x110: Push((int) 1787)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Return(); Pop(0)

0x114: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x115: PushEmpty(bool)
0x116: Call 0x1881

0x117: Pop(0)
0x118: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x119: @ lshStopAnimation()
0x11a: Pop(0)
0x11b: GOTO 0x11e

0x11c: @ StopAnimation()
0x11d: Pop(0)
0x11e: Return(); Pop(0)

0x11f: GOTO 0xc0

0x120: Return(); Pop(0)

0x121: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x122: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x123: PushEmpty(bool, object)
0x124: Stack[-1] = Stack[-11]
0x125: Call 0x17e5

0x126: Pop(1)
0x127: Pop(1); Push((bool) Stack[-1] == 0)
0x128: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x129: Stack[-10] = (int) -2
0x12a: Return(); Pop(8)

0x12b: @ CreateDialog(Stack[-4])
0x12c: Pop(0)
0x12d: PushEmpty(int)
0x12e: Call 0x187d

0x12f: Pop(0)
0x130: @@ SetNPCName(Stack[-1])
0x131: Pop(1)
0x132: PushEmpty(string)
0x133: Call 0x187f

0x134: Pop(0)
0x135: @@ SetPhoto(Stack[-1])
0x136: Pop(1)
0x137: PushEmpty(int)
0x138: Call 0x1cc0

0x139: Pop(0)
0x13a: @@ SetPlayerName(Stack[-1])
0x13b: Pop(1)
0x13c: Stack[-2] = (int) -1
0x13d: @ IsOverrideActive(Stack[-3])
0x13e: Pop(0)
0x13f: Push(Stack[-3])
0x140: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x141: Stack[-10] = (int) -2
0x142: Return(); Pop(8)

0x143: @ DoDialog(Stack[-4])
0x144: Pop(0)
0x145: PushEmpty(object, object)
0x146: Stack[-2] = Stack[-11]
0x147: Stack[-1] = Stack[-6]
0x148: Push(-2, 4); TaskCall(5)
0x149: Call 0x160

0x14a: Pop(-2, 4); TaskReturn
0x14b: Pop(2)
0x14c: @@ IsDialogEnd(Stack[-1])
0x14d: Pop(0)
0x14e: Pop(0); Push((bool) Stack[-1] == 0)
0x14f: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x150: @ sync()
0x151: Pop(0)
0x152: @@ IsDialogEnd(Stack[-1])
0x153: Pop(0)
0x154: GOTO 0x14e

0x155: PushEmpty(object)
0x156: Stack[-1] = Stack[-10]
0x157: Call 0x181d

0x158: Pop(1)
0x159: @ StopDialog(Stack[-4])
0x15a: Pop(0)
0x15b: @@ GetReturnValue(Stack[-2])
0x15c: Pop(0)
0x15d: Stack[-10] = Stack[-2]
0x15e: Return(); Pop(8)

0x15f: Stack[-4] = 0
0x160: PushEmpty()
0x161: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x162: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x163: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x164: Push((int) 1)
0x165: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x166: PushEmpty(bool, object)
0x167: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x168: Call 0x1bbc

0x169: Pop(1)
0x16a: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x16b: PushEmpty(object, object)
0x16c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x16d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16e: Call 0x1a21

0x16f: Pop(2)
0x170: PushEmpty(string)
0x171: Stack[-1] = "Neutral"
0x172: Call 0x1b3

0x173: Pop(1)
0x174: Push((int) 12036)
0x175: @@ SetMessage(Stack[-1])
0x176: Pop(1)
0x177: @@ ClearReplies()
0x178: Pop(0)
0x179: Push((int) 12037)
0x17a: Push((int) 13256)
0x17b: Push((int) 13255)
0x17c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17d: Pop(3)
0x17e: Push((int) 12640)
0x17f: Push((int) 13821)
0x180: Push((int) 13820)
0x181: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x182: Pop(3)
0x183: GOTO 0x195

0x184: PushEmpty(string)
0x185: Stack[-1] = "Neutral"
0x186: Call 0x1b3

0x187: Pop(1)
0x188: Push((int) 13016)
0x189: @@ SetMessage(Stack[-1])
0x18a: Pop(1)
0x18b: @@ ClearReplies()
0x18c: Pop(0)
0x18d: Push((int) 13017)
0x18e: Push((int) -1)
0x18f: Push((int) 14223)
0x190: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191: Pop(3)
0x192: GOTO 0x195

0x193: Return(); Pop(0)

0x194: GOTO 0x164

0x195: PushEmpty(bool)
0x196: Call 0x1881

0x197: Pop(0)
0x198: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x199: @ lshWaitForAnimEnd()
0x19a: Pop(0)
0x19b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x19c: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19d: GOTO 0x1a3

0x19e: PushEmpty(string)
0x19f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1a0: Call 0x1821

0x1a1: Pop(1)
0x1a2: GOTO 0x199

0x1a3: GOTO 0x1b2

0x1a4: Push("all")
0x1a5: Push("idle")
0x1a6: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a7: Pop(2)
0x1a8: @ WaitForAnimEnd()
0x1a9: Pop(0)
0x1aa: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1ab: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1ac: GOTO 0x1b2

0x1ad: Push("all")
0x1ae: Push("idle")
0x1af: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b0: Pop(2)
0x1b1: GOTO 0x1a8

0x1b2: Return(); Pop(0)

0x1b3: PushEmpty()
0x1b4: PushEmpty(bool)
0x1b5: Call 0x1881

0x1b6: Pop(0)
0x1b7: Pop(1); Push((bool) Stack[-1] == 0)
0x1b8: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b9: Return(); Pop(0)

0x1ba: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bc: Return(); Pop(0)

0x1bd: PushEmpty(string)
0x1be: Stack[-1] = Stack[-2]
0x1bf: Call 0x1821

0x1c0: Pop(1)
0x1c1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1c2: Return(); Pop(0)

0x1c3: PushEmpty()
0x1c4: Push((int) 1)
0x1c5: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x1c6: PushEmpty()
0x1c7: Call 0x1833

0x1c8: Pop(0)
0x1c9: Push((int) 13819)
0x1ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1cc: PushEmpty(object, object)
0x1cd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1cf: Call 0x19c3

0x1d0: Pop(2)
0x1d1: PushEmpty(object, object)
0x1d2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d4: Call 0x19bd

0x1d5: Pop(2)
0x1d6: Push((int) 13848)
0x1d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1d9: PushEmpty(object, object)
0x1da: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1dc: Call 0x19c3

0x1dd: Pop(2)
0x1de: PushEmpty(object, object)
0x1df: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e1: Call 0x19bd

0x1e2: Pop(2)
0x1e3: Push((int) 13254)
0x1e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x1e6: PushEmpty(bool, object)
0x1e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e8: Call 0x1bbc

0x1e9: Pop(1)
0x1ea: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1eb: PushEmpty(object, object)
0x1ec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ee: Call 0x1a21

0x1ef: Pop(2)
0x1f0: PushEmpty(string)
0x1f1: Stack[-1] = "Neutral"
0x1f2: Call 0x1b3

0x1f3: Pop(1)
0x1f4: Push((int) 12036)
0x1f5: @@ SetMessage(Stack[-1])
0x1f6: Pop(1)
0x1f7: @@ ClearReplies()
0x1f8: Pop(0)
0x1f9: Push((int) 12037)
0x1fa: Push((int) 13256)
0x1fb: Push((int) 13255)
0x1fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fd: Pop(3)
0x1fe: Push((int) 12640)
0x1ff: Push((int) 13821)
0x200: Push((int) 13820)
0x201: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x202: Pop(3)
0x203: Return(); Pop(0)

0x204: PushEmpty(string)
0x205: Stack[-1] = "Neutral"
0x206: Call 0x1b3

0x207: Pop(1)
0x208: Push((int) 13016)
0x209: @@ SetMessage(Stack[-1])
0x20a: Pop(1)
0x20b: @@ ClearReplies()
0x20c: Pop(0)
0x20d: Push((int) 13017)
0x20e: Push((int) -1)
0x20f: Push((int) 14223)
0x210: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x211: Pop(3)
0x212: Return(); Pop(0)

0x213: Push((int) 13821)
0x214: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x216: PushEmpty(string)
0x217: Stack[-1] = "Neutral"
0x218: Call 0x1b3

0x219: Pop(1)
0x21a: Push((int) 12641)
0x21b: @@ SetMessage(Stack[-1])
0x21c: Pop(1)
0x21d: @@ ClearReplies()
0x21e: Pop(0)
0x21f: Push((int) 12642)
0x220: Push((int) 13823)
0x221: Push((int) 13822)
0x222: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x223: Pop(3)
0x224: Return(); Pop(0)

0x225: Push((int) 13823)
0x226: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x228: PushEmpty(string)
0x229: Stack[-1] = "Neutral"
0x22a: Call 0x1b3

0x22b: Pop(1)
0x22c: Push((int) 12643)
0x22d: @@ SetMessage(Stack[-1])
0x22e: Pop(1)
0x22f: @@ ClearReplies()
0x230: Pop(0)
0x231: Push((int) 12644)
0x232: Push((int) 13825)
0x233: Push((int) 13824)
0x234: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x235: Pop(3)
0x236: Return(); Pop(0)

0x237: Push((int) 13825)
0x238: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x23a: PushEmpty(string)
0x23b: Stack[-1] = "Neutral"
0x23c: Call 0x1b3

0x23d: Pop(1)
0x23e: Push((int) 12645)
0x23f: @@ SetMessage(Stack[-1])
0x240: Pop(1)
0x241: @@ ClearReplies()
0x242: Pop(0)
0x243: Push((int) 12666)
0x244: Push((int) -1)
0x245: Push((int) 13848)
0x246: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x247: Pop(3)
0x248: Return(); Pop(0)

0x249: Push((int) 13256)
0x24a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24b: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x24c: PushEmpty(string)
0x24d: Stack[-1] = "Neutral"
0x24e: Call 0x1b3

0x24f: Pop(1)
0x250: Push((int) 12038)
0x251: @@ SetMessage(Stack[-1])
0x252: Pop(1)
0x253: @@ ClearReplies()
0x254: Pop(0)
0x255: Push((int) 12635)
0x256: Push((int) 13816)
0x257: Push((int) 13815)
0x258: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x259: Pop(3)
0x25a: Return(); Pop(0)

0x25b: Push((int) 13816)
0x25c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x25e: PushEmpty(string)
0x25f: Stack[-1] = "Neutral"
0x260: Call 0x1b3

0x261: Pop(1)
0x262: Push((int) 12636)
0x263: @@ SetMessage(Stack[-1])
0x264: Pop(1)
0x265: @@ ClearReplies()
0x266: Pop(0)
0x267: Push((int) 12637)
0x268: Push((int) 13818)
0x269: Push((int) 13817)
0x26a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26b: Pop(3)
0x26c: Return(); Pop(0)

0x26d: Push((int) 13818)
0x26e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x270: PushEmpty(string)
0x271: Stack[-1] = "Neutral"
0x272: Call 0x1b3

0x273: Pop(1)
0x274: Push((int) 12638)
0x275: @@ SetMessage(Stack[-1])
0x276: Pop(1)
0x277: @@ ClearReplies()
0x278: Pop(0)
0x279: Push((int) 12639)
0x27a: Push((int) -1)
0x27b: Push((int) 13819)
0x27c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27d: Pop(3)
0x27e: Return(); Pop(0)

0x27f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x280: PushEmpty(bool)
0x281: Call 0x1881

0x282: Pop(0)
0x283: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x284: @ lshStopAnimation()
0x285: Pop(0)
0x286: GOTO 0x289

0x287: @ StopAnimation()
0x288: Pop(0)
0x289: Return(); Pop(0)

0x28a: GOTO 0x1c4

0x28b: Return(); Pop(0)

0x28c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x28d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x28e: PushEmpty(bool, object)
0x28f: Stack[-1] = Stack[-11]
0x290: Call 0x17e5

0x291: Pop(1)
0x292: Pop(1); Push((bool) Stack[-1] == 0)
0x293: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x294: Stack[-10] = (int) -2
0x295: Return(); Pop(8)

0x296: @ CreateDialog(Stack[-4])
0x297: Pop(0)
0x298: PushEmpty(int)
0x299: Call 0x187d

0x29a: Pop(0)
0x29b: @@ SetNPCName(Stack[-1])
0x29c: Pop(1)
0x29d: PushEmpty(string)
0x29e: Call 0x187f

0x29f: Pop(0)
0x2a0: @@ SetPhoto(Stack[-1])
0x2a1: Pop(1)
0x2a2: PushEmpty(int)
0x2a3: Call 0x1cc0

0x2a4: Pop(0)
0x2a5: @@ SetPlayerName(Stack[-1])
0x2a6: Pop(1)
0x2a7: Stack[-2] = (int) -1
0x2a8: @ IsOverrideActive(Stack[-3])
0x2a9: Pop(0)
0x2aa: Push(Stack[-3])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ac: Stack[-10] = (int) -2
0x2ad: Return(); Pop(8)

0x2ae: @ DoDialog(Stack[-4])
0x2af: Pop(0)
0x2b0: PushEmpty(object, object)
0x2b1: Stack[-2] = Stack[-11]
0x2b2: Stack[-1] = Stack[-6]
0x2b3: Push(-2, 4); TaskCall(7)
0x2b4: Call 0x2cb

0x2b5: Pop(-2, 4); TaskReturn
0x2b6: Pop(2)
0x2b7: @@ IsDialogEnd(Stack[-1])
0x2b8: Pop(0)
0x2b9: Pop(0); Push((bool) Stack[-1] == 0)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bb: @ sync()
0x2bc: Pop(0)
0x2bd: @@ IsDialogEnd(Stack[-1])
0x2be: Pop(0)
0x2bf: GOTO 0x2b9

0x2c0: PushEmpty(object)
0x2c1: Stack[-1] = Stack[-10]
0x2c2: Call 0x181d

0x2c3: Pop(1)
0x2c4: @ StopDialog(Stack[-4])
0x2c5: Pop(0)
0x2c6: @@ GetReturnValue(Stack[-2])
0x2c7: Pop(0)
0x2c8: Stack[-10] = Stack[-2]
0x2c9: Return(); Pop(8)

0x2ca: Stack[-4] = 0
0x2cb: PushEmpty()
0x2cc: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2cd: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2ce: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2cf: Push((int) 1)
0x2d0: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x2d1: PushEmpty(bool, object)
0x2d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d3: Call 0x1aa5

0x2d4: Pop(1)
0x2d5: Pop(1); Push((bool) Stack[-1] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2d7: PushEmpty(string)
0x2d8: Stack[-1] = "Neutral"
0x2d9: Call 0x3fb

0x2da: Pop(1)
0x2db: Push((int) 5111)
0x2dc: @@ SetMessage(Stack[-1])
0x2dd: Pop(1)
0x2de: @@ ClearReplies()
0x2df: Pop(0)
0x2e0: Push((int) 5112)
0x2e1: Push((int) 5626)
0x2e2: Push((int) 5625)
0x2e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e4: Pop(3)
0x2e5: Push((int) 5119)
0x2e6: Push((int) 5626)
0x2e7: Push((int) 5632)
0x2e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e9: Pop(3)
0x2ea: Push((int) 5120)
0x2eb: Push((int) -1)
0x2ec: Push((int) 5634)
0x2ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ee: Pop(3)
0x2ef: GOTO 0x3dd

0x2f0: PushEmpty(bool, object)
0x2f1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f2: Call 0x1a39

0x2f3: Pop(1)
0x2f4: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x2f5: PushEmpty(string)
0x2f6: Stack[-1] = "Neutral"
0x2f7: Call 0x3fb

0x2f8: Pop(1)
0x2f9: Push((int) 5155)
0x2fa: @@ SetMessage(Stack[-1])
0x2fb: Pop(1)
0x2fc: @@ ClearReplies()
0x2fd: Pop(0)
0x2fe: Push((int) 5156)
0x2ff: Push((int) 5678)
0x300: Push((int) 5677)
0x301: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x302: Pop(3)
0x303: Push((int) 5183)
0x304: Push((int) 5678)
0x305: Push((int) 5707)
0x306: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x307: Pop(3)
0x308: Push((int) 5184)
0x309: Push((int) 5678)
0x30a: Push((int) 5709)
0x30b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30c: Pop(3)
0x30d: GOTO 0x3dd

0x30e: PushEmpty(string)
0x30f: Stack[-1] = "Neutral"
0x310: Call 0x3fb

0x311: Pop(1)
0x312: Push((int) 5106)
0x313: @@ SetMessage(Stack[-1])
0x314: Pop(1)
0x315: @@ ClearReplies()
0x316: Pop(0)
0x317: PushEmpty(bool)
0x318: Stack[-1] = (bool) 0
0x319: PushEmpty(bool, object)
0x31a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x31b: Call 0x1a45

0x31c: Pop(1)
0x31d: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x31e: PushEmpty(bool, object)
0x31f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x320: Call 0x1aa5

0x321: Pop(1)
0x322: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x323: Stack[-1] = (bool) 1
0x324: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x325: Push((int) 5107)
0x326: Push((int) 9234)
0x327: Push((int) 5620)
0x328: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x329: Pop(3)
0x32a: PushEmpty(bool)
0x32b: Stack[-1] = (bool) 0
0x32c: PushEmpty(bool, object)
0x32d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32e: Call 0x1a81

0x32f: Pop(1)
0x330: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x331: PushEmpty(bool, object)
0x332: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x333: Call 0x1a5d

0x334: Pop(1)
0x335: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x336: Stack[-1] = (bool) 1
0x337: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x338: Push((int) 5108)
0x339: Push((int) 9315)
0x33a: Push((int) 5621)
0x33b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33c: Pop(3)
0x33d: PushEmpty(bool)
0x33e: Stack[-1] = (bool) 0
0x33f: PushEmpty(bool, object)
0x340: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x341: Call 0x1ae1

0x342: Pop(1)
0x343: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x344: PushEmpty(bool, object)
0x345: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x346: Call 0x1a51

0x347: Pop(1)
0x348: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x349: Stack[-1] = (bool) 1
0x34a: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34b: Push((int) 8455)
0x34c: Push((int) 5635)
0x34d: Push((int) 9290)
0x34e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34f: Pop(3)
0x350: PushEmpty(bool)
0x351: Stack[-1] = (bool) 0
0x352: PushEmpty(bool, object)
0x353: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x354: Call 0x1a8d

0x355: Pop(1)
0x356: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x357: PushEmpty(bool, object)
0x358: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x359: Call 0x1a99

0x35a: Pop(1)
0x35b: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x35c: Stack[-1] = (bool) 1
0x35d: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x35e: Push((int) 5109)
0x35f: Push((int) 5711)
0x360: Push((int) 5622)
0x361: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x362: Pop(3)
0x363: PushEmpty(bool)
0x364: Stack[-1] = (bool) 0
0x365: PushEmpty(bool, object)
0x366: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x367: Call 0x1c04

0x368: Pop(1)
0x369: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36a: PushEmpty(bool, object)
0x36b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36c: Call 0x1ae6

0x36d: Pop(1)
0x36e: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36f: Stack[-1] = (bool) 1
0x370: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x371: Push((int) 8390)
0x372: Push((int) 9317)
0x373: Push((int) 9213)
0x374: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x375: Pop(3)
0x376: PushEmpty(bool)
0x377: Stack[-1] = (bool) 0
0x378: PushEmpty(bool, object)
0x379: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37a: Call 0x1c34

0x37b: Pop(1)
0x37c: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x37d: PushEmpty(bool, object)
0x37e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37f: Call 0x1af2

0x380: Pop(1)
0x381: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x382: Stack[-1] = (bool) 1
0x383: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x384: Push((int) 8392)
0x385: Push((int) 9247)
0x386: Push((int) 9215)
0x387: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x388: Pop(3)
0x389: PushEmpty(bool)
0x38a: Stack[-1] = (bool) 0
0x38b: PushEmpty(bool, object)
0x38c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x38d: Call 0x1bc8

0x38e: Pop(1)
0x38f: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x390: PushEmpty(bool, object)
0x391: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x392: Call 0x1afe

0x393: Pop(1)
0x394: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x395: Stack[-1] = (bool) 1
0x396: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x397: Push((int) 8397)
0x398: Push((int) 9248)
0x399: Push((int) 9220)
0x39a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39b: Pop(3)
0x39c: PushEmpty(bool)
0x39d: Stack[-1] = (bool) 0
0x39e: PushEmpty(bool, object)
0x39f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a0: Call 0x1bd4

0x3a1: Pop(1)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a3: PushEmpty(bool, object)
0x3a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a5: Call 0x1b0a

0x3a6: Pop(1)
0x3a7: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a8: Stack[-1] = (bool) 1
0x3a9: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3aa: Push((int) 8399)
0x3ab: Push((int) 9249)
0x3ac: Push((int) 9222)
0x3ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ae: Pop(3)
0x3af: PushEmpty(bool)
0x3b0: Stack[-1] = (bool) 0
0x3b1: PushEmpty(bool, object)
0x3b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b3: Call 0x1c4c

0x3b4: Pop(1)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3b6: PushEmpty(bool, object)
0x3b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b8: Call 0x1b16

0x3b9: Pop(1)
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3bb: Stack[-1] = (bool) 1
0x3bc: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3bd: Push((int) 8404)
0x3be: Push((int) 9358)
0x3bf: Push((int) 9227)
0x3c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c1: Pop(3)
0x3c2: PushEmpty(bool)
0x3c3: Stack[-1] = (bool) 0
0x3c4: PushEmpty(bool, object)
0x3c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c6: Call 0x1a75

0x3c7: Pop(1)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3c9: PushEmpty(bool, object)
0x3ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3cb: Call 0x1b22

0x3cc: Pop(1)
0x3cd: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3ce: Stack[-1] = (bool) 1
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d0: Push((int) 5142)
0x3d1: Push((int) 5662)
0x3d2: Push((int) 5661)
0x3d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d4: Pop(3)
0x3d5: Push((int) 5110)
0x3d6: Push((int) -1)
0x3d7: Push((int) 5623)
0x3d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d9: Pop(3)
0x3da: GOTO 0x3dd

0x3db: Return(); Pop(0)

0x3dc: GOTO 0x2cf

0x3dd: PushEmpty(bool)
0x3de: Call 0x1881

0x3df: Pop(0)
0x3e0: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3e1: @ lshWaitForAnimEnd()
0x3e2: Pop(0)
0x3e3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e5: GOTO 0x3eb

0x3e6: PushEmpty(string)
0x3e7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3e8: Call 0x1821

0x3e9: Pop(1)
0x3ea: GOTO 0x3e1

0x3eb: GOTO 0x3fa

0x3ec: Push("all")
0x3ed: Push("idle")
0x3ee: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ef: Pop(2)
0x3f0: @ WaitForAnimEnd()
0x3f1: Pop(0)
0x3f2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f4: GOTO 0x3fa

0x3f5: Push("all")
0x3f6: Push("idle")
0x3f7: @ PlayAnimation(Stack[-2], Stack[-1])
0x3f8: Pop(2)
0x3f9: GOTO 0x3f0

0x3fa: Return(); Pop(0)

0x3fb: PushEmpty()
0x3fc: PushEmpty(bool)
0x3fd: Call 0x1881

0x3fe: Pop(0)
0x3ff: Pop(1); Push((bool) Stack[-1] == 0)
0x400: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x401: Return(); Pop(0)

0x402: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x403: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x404: Return(); Pop(0)

0x405: PushEmpty(string)
0x406: Stack[-1] = Stack[-2]
0x407: Call 0x1821

0x408: Pop(1)
0x409: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x40a: Return(); Pop(0)

0x40b: PushEmpty()
0x40c: Push((int) 1)
0x40d: IF (Stack[-1] == 0) GOTO 0xbe5; Pop(1)

0x40e: PushEmpty()
0x40f: Call 0x1833

0x410: Pop(0)
0x411: Push((int) 5686)
0x412: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x413: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x414: PushEmpty(object, object)
0x415: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x416: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x417: Call 0x189b

0x418: Pop(2)
0x419: PushEmpty(object, object)
0x41a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x41b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x41c: Call 0x1883

0x41d: Pop(2)
0x41e: PushEmpty(object, object)
0x41f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x420: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x421: Call 0x18fb

0x422: Pop(2)
0x423: PushEmpty(object, object)
0x424: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x425: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x426: Call 0x190b

0x427: Pop(2)
0x428: Push((int) 5685)
0x429: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x42a: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42b: PushEmpty(object, object)
0x42c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x42d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x42e: Call 0x1883

0x42f: Pop(2)
0x430: Push((int) 5689)
0x431: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x432: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x433: PushEmpty(object, object)
0x434: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x435: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x436: Call 0x189b

0x437: Pop(2)
0x438: PushEmpty(object, object)
0x439: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x43a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x43b: Call 0x1883

0x43c: Pop(2)
0x43d: PushEmpty(object, object)
0x43e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x43f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x440: Call 0x18fb

0x441: Pop(2)
0x442: Push((int) 9297)
0x443: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x444: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x445: PushEmpty(object, object)
0x446: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x447: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x448: Call 0x18d5

0x449: Pop(2)
0x44a: PushEmpty(object, object)
0x44b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x44c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x44d: Call 0x1889

0x44e: Pop(2)
0x44f: PushEmpty(object, object)
0x450: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x451: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x452: Call 0x1969

0x453: Pop(2)
0x454: Push((int) 5621)
0x455: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x456: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x457: PushEmpty(object, object)
0x458: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x459: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x45a: Call 0x189b

0x45b: Pop(2)
0x45c: Push((int) 9316)
0x45d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x45e: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x45f: PushEmpty(object, object)
0x460: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x461: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x462: Call 0x1895

0x463: Pop(2)
0x464: PushEmpty(object, object)
0x465: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x466: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x467: Call 0x18fb

0x468: Pop(2)
0x469: PushEmpty(object, object)
0x46a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x46b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x46c: Call 0x189b

0x46d: Pop(2)
0x46e: PushEmpty(object, object)
0x46f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x470: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x471: Call 0x190b

0x472: Pop(2)
0x473: Push((int) 5648)
0x474: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x476: PushEmpty(object, object)
0x477: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x478: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x479: Call 0x188f

0x47a: Pop(2)
0x47b: Push((int) 5649)
0x47c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47d: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x47e: PushEmpty(object, object)
0x47f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x480: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x481: Call 0x188f

0x482: Pop(2)
0x483: Push((int) 5718)
0x484: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x485: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x486: PushEmpty(object, object)
0x487: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x488: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x489: Call 0x18a4

0x48a: Pop(2)
0x48b: Push((int) 5719)
0x48c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x48d: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x48e: PushEmpty(object, object)
0x48f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x490: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x491: Call 0x18a4

0x492: Pop(2)
0x493: Push((int) 5724)
0x494: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x495: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x496: PushEmpty(object, object)
0x497: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x498: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x499: Call 0x18a4

0x49a: Pop(2)
0x49b: Push((int) 5725)
0x49c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x49d: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x49e: PushEmpty(object, object)
0x49f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a1: Call 0x18a4

0x4a2: Pop(2)
0x4a3: Push((int) 5726)
0x4a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a6: PushEmpty(object, object)
0x4a7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a9: Call 0x18a4

0x4aa: Pop(2)
0x4ab: Push((int) 9329)
0x4ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ad: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4ae: PushEmpty(object, object)
0x4af: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b1: Call 0x18d7

0x4b2: Pop(2)
0x4b3: Push((int) 9334)
0x4b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b6: PushEmpty(object, object)
0x4b7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b9: Call 0x18d7

0x4ba: Pop(2)
0x4bb: Push((int) 9341)
0x4bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4be: PushEmpty(object, object)
0x4bf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c1: Call 0x18dd

0x4c2: Pop(2)
0x4c3: Push((int) 9347)
0x4c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c5: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c6: PushEmpty(object, object)
0x4c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c9: Call 0x18e3

0x4ca: Pop(2)
0x4cb: Push((int) 9349)
0x4cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4ce: PushEmpty(object, object)
0x4cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d1: Call 0x18e3

0x4d2: Pop(2)
0x4d3: Push((int) 9354)
0x4d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d5: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4d6: PushEmpty(object, object)
0x4d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d9: Call 0x18e9

0x4da: Pop(2)
0x4db: Push((int) 9357)
0x4dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4de: PushEmpty(object, object)
0x4df: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e1: Call 0x18e9

0x4e2: Pop(2)
0x4e3: Push((int) 9360)
0x4e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e5: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4e6: PushEmpty(object, object)
0x4e7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e9: Call 0x18ef

0x4ea: Pop(2)
0x4eb: Push((int) 9361)
0x4ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ed: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4ee: PushEmpty(object, object)
0x4ef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4f0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f1: Call 0x18ef

0x4f2: Pop(2)
0x4f3: Push((int) 5667)
0x4f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f5: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4f6: PushEmpty(object, object)
0x4f7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f9: Call 0x18f5

0x4fa: Pop(2)
0x4fb: Push((int) 5668)
0x4fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4fd: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x4fe: PushEmpty(object, object)
0x4ff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x500: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x501: Call 0x18f5

0x502: Pop(2)
0x503: Push((int) 5671)
0x504: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x505: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x506: PushEmpty(object, object)
0x507: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x508: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x509: Call 0x18f5

0x50a: Pop(2)
0x50b: Push((int) 5624)
0x50c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50d: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x50e: PushEmpty(bool, object)
0x50f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x510: Call 0x1aa5

0x511: Pop(1)
0x512: Pop(1); Push((bool) Stack[-1] == 0)
0x513: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x514: PushEmpty(string)
0x515: Stack[-1] = "Neutral"
0x516: Call 0x3fb

0x517: Pop(1)
0x518: Push((int) 5111)
0x519: @@ SetMessage(Stack[-1])
0x51a: Pop(1)
0x51b: @@ ClearReplies()
0x51c: Pop(0)
0x51d: Push((int) 5112)
0x51e: Push((int) 5626)
0x51f: Push((int) 5625)
0x520: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x521: Pop(3)
0x522: Push((int) 5119)
0x523: Push((int) 5626)
0x524: Push((int) 5632)
0x525: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x526: Pop(3)
0x527: Push((int) 5120)
0x528: Push((int) -1)
0x529: Push((int) 5634)
0x52a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52b: Pop(3)
0x52c: Return(); Pop(0)

0x52d: PushEmpty(bool, object)
0x52e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52f: Call 0x1a39

0x530: Pop(1)
0x531: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x532: PushEmpty(string)
0x533: Stack[-1] = "Neutral"
0x534: Call 0x3fb

0x535: Pop(1)
0x536: Push((int) 5155)
0x537: @@ SetMessage(Stack[-1])
0x538: Pop(1)
0x539: @@ ClearReplies()
0x53a: Pop(0)
0x53b: Push((int) 5156)
0x53c: Push((int) 5678)
0x53d: Push((int) 5677)
0x53e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53f: Pop(3)
0x540: Push((int) 5183)
0x541: Push((int) 5678)
0x542: Push((int) 5707)
0x543: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x544: Pop(3)
0x545: Push((int) 5184)
0x546: Push((int) 5678)
0x547: Push((int) 5709)
0x548: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x549: Pop(3)
0x54a: Return(); Pop(0)

0x54b: PushEmpty(string)
0x54c: Stack[-1] = "Neutral"
0x54d: Call 0x3fb

0x54e: Pop(1)
0x54f: Push((int) 5106)
0x550: @@ SetMessage(Stack[-1])
0x551: Pop(1)
0x552: @@ ClearReplies()
0x553: Pop(0)
0x554: PushEmpty(bool)
0x555: Stack[-1] = (bool) 0
0x556: PushEmpty(bool, object)
0x557: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x558: Call 0x1a45

0x559: Pop(1)
0x55a: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x55b: PushEmpty(bool, object)
0x55c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x55d: Call 0x1aa5

0x55e: Pop(1)
0x55f: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x560: Stack[-1] = (bool) 1
0x561: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x562: Push((int) 5107)
0x563: Push((int) 9234)
0x564: Push((int) 5620)
0x565: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x566: Pop(3)
0x567: PushEmpty(bool)
0x568: Stack[-1] = (bool) 0
0x569: PushEmpty(bool, object)
0x56a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x56b: Call 0x1a81

0x56c: Pop(1)
0x56d: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x56e: PushEmpty(bool, object)
0x56f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x570: Call 0x1a5d

0x571: Pop(1)
0x572: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x573: Stack[-1] = (bool) 1
0x574: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x575: Push((int) 5108)
0x576: Push((int) 9315)
0x577: Push((int) 5621)
0x578: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x579: Pop(3)
0x57a: PushEmpty(bool)
0x57b: Stack[-1] = (bool) 0
0x57c: PushEmpty(bool, object)
0x57d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x57e: Call 0x1ae1

0x57f: Pop(1)
0x580: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x581: PushEmpty(bool, object)
0x582: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x583: Call 0x1a51

0x584: Pop(1)
0x585: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x586: Stack[-1] = (bool) 1
0x587: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x588: Push((int) 8455)
0x589: Push((int) 5635)
0x58a: Push((int) 9290)
0x58b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58c: Pop(3)
0x58d: PushEmpty(bool)
0x58e: Stack[-1] = (bool) 0
0x58f: PushEmpty(bool, object)
0x590: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x591: Call 0x1a8d

0x592: Pop(1)
0x593: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x594: PushEmpty(bool, object)
0x595: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x596: Call 0x1a99

0x597: Pop(1)
0x598: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x599: Stack[-1] = (bool) 1
0x59a: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59b: Push((int) 5109)
0x59c: Push((int) 5711)
0x59d: Push((int) 5622)
0x59e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59f: Pop(3)
0x5a0: PushEmpty(bool)
0x5a1: Stack[-1] = (bool) 0
0x5a2: PushEmpty(bool, object)
0x5a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a4: Call 0x1c04

0x5a5: Pop(1)
0x5a6: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5a7: PushEmpty(bool, object)
0x5a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a9: Call 0x1ae6

0x5aa: Pop(1)
0x5ab: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5ac: Stack[-1] = (bool) 1
0x5ad: IF (Stack[-1] == 0) GOTO 0x5b3; Pop(1)

0x5ae: Push((int) 8390)
0x5af: Push((int) 9317)
0x5b0: Push((int) 9213)
0x5b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b2: Pop(3)
0x5b3: PushEmpty(bool)
0x5b4: Stack[-1] = (bool) 0
0x5b5: PushEmpty(bool, object)
0x5b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b7: Call 0x1c34

0x5b8: Pop(1)
0x5b9: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5ba: PushEmpty(bool, object)
0x5bb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5bc: Call 0x1af2

0x5bd: Pop(1)
0x5be: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5bf: Stack[-1] = (bool) 1
0x5c0: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5c1: Push((int) 8392)
0x5c2: Push((int) 9247)
0x5c3: Push((int) 9215)
0x5c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c5: Pop(3)
0x5c6: PushEmpty(bool)
0x5c7: Stack[-1] = (bool) 0
0x5c8: PushEmpty(bool, object)
0x5c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5ca: Call 0x1bc8

0x5cb: Pop(1)
0x5cc: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5cd: PushEmpty(bool, object)
0x5ce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5cf: Call 0x1afe

0x5d0: Pop(1)
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5d2: Stack[-1] = (bool) 1
0x5d3: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d4: Push((int) 8397)
0x5d5: Push((int) 9248)
0x5d6: Push((int) 9220)
0x5d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d8: Pop(3)
0x5d9: PushEmpty(bool)
0x5da: Stack[-1] = (bool) 0
0x5db: PushEmpty(bool, object)
0x5dc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5dd: Call 0x1bd4

0x5de: Pop(1)
0x5df: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e0: PushEmpty(bool, object)
0x5e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5e2: Call 0x1b0a

0x5e3: Pop(1)
0x5e4: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e5: Stack[-1] = (bool) 1
0x5e6: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5e7: Push((int) 8399)
0x5e8: Push((int) 9249)
0x5e9: Push((int) 9222)
0x5ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5eb: Pop(3)
0x5ec: PushEmpty(bool)
0x5ed: Stack[-1] = (bool) 0
0x5ee: PushEmpty(bool, object)
0x5ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5f0: Call 0x1c4c

0x5f1: Pop(1)
0x5f2: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f3: PushEmpty(bool, object)
0x5f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5f5: Call 0x1b16

0x5f6: Pop(1)
0x5f7: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f8: Stack[-1] = (bool) 1
0x5f9: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5fa: Push((int) 8404)
0x5fb: Push((int) 9358)
0x5fc: Push((int) 9227)
0x5fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fe: Pop(3)
0x5ff: PushEmpty(bool)
0x600: Stack[-1] = (bool) 0
0x601: PushEmpty(bool, object)
0x602: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x603: Call 0x1a75

0x604: Pop(1)
0x605: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x606: PushEmpty(bool, object)
0x607: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x608: Call 0x1b22

0x609: Pop(1)
0x60a: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x60b: Stack[-1] = (bool) 1
0x60c: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x60d: Push((int) 5142)
0x60e: Push((int) 5662)
0x60f: Push((int) 5661)
0x610: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x611: Pop(3)
0x612: Push((int) 5110)
0x613: Push((int) -1)
0x614: Push((int) 5623)
0x615: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x616: Pop(3)
0x617: Return(); Pop(0)

0x618: Push((int) 5662)
0x619: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61a: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x61b: PushEmpty(string)
0x61c: Stack[-1] = "Neutral"
0x61d: Call 0x3fb

0x61e: Pop(1)
0x61f: Push((int) 5143)
0x620: @@ SetMessage(Stack[-1])
0x621: Pop(1)
0x622: @@ ClearReplies()
0x623: Pop(0)
0x624: Push((int) 5144)
0x625: Push((int) 5664)
0x626: Push((int) 5663)
0x627: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x628: Pop(3)
0x629: Push((int) 5154)
0x62a: Push((int) 5664)
0x62b: Push((int) 5674)
0x62c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62d: Pop(3)
0x62e: Return(); Pop(0)

0x62f: Push((int) 5664)
0x630: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x631: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x632: PushEmpty(string)
0x633: Stack[-1] = "Neutral"
0x634: Call 0x3fb

0x635: Pop(1)
0x636: Push((int) 5145)
0x637: @@ SetMessage(Stack[-1])
0x638: Pop(1)
0x639: @@ ClearReplies()
0x63a: Pop(0)
0x63b: Push((int) 5146)
0x63c: Push((int) 5666)
0x63d: Push((int) 5665)
0x63e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63f: Pop(3)
0x640: Push((int) 5153)
0x641: Push((int) 5666)
0x642: Push((int) 5672)
0x643: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x644: Pop(3)
0x645: Return(); Pop(0)

0x646: Push((int) 5666)
0x647: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x648: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x649: PushEmpty(string)
0x64a: Stack[-1] = "Neutral"
0x64b: Call 0x3fb

0x64c: Pop(1)
0x64d: Push((int) 5147)
0x64e: @@ SetMessage(Stack[-1])
0x64f: Pop(1)
0x650: @@ ClearReplies()
0x651: Pop(0)
0x652: Push((int) 5148)
0x653: Push((int) -1)
0x654: Push((int) 5667)
0x655: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x656: Pop(3)
0x657: Push((int) 5149)
0x658: Push((int) -1)
0x659: Push((int) 5668)
0x65a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65b: Pop(3)
0x65c: Push((int) 5150)
0x65d: Push((int) 5670)
0x65e: Push((int) 5669)
0x65f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x660: Pop(3)
0x661: Return(); Pop(0)

0x662: Push((int) 5670)
0x663: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x664: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x665: PushEmpty(string)
0x666: Stack[-1] = "Neutral"
0x667: Call 0x3fb

0x668: Pop(1)
0x669: Push((int) 5151)
0x66a: @@ SetMessage(Stack[-1])
0x66b: Pop(1)
0x66c: @@ ClearReplies()
0x66d: Pop(0)
0x66e: Push((int) 5152)
0x66f: Push((int) -1)
0x670: Push((int) 5671)
0x671: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x672: Pop(3)
0x673: Return(); Pop(0)

0x674: Push((int) 9358)
0x675: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x676: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x677: PushEmpty(string)
0x678: Stack[-1] = "Neutral"
0x679: Call 0x3fb

0x67a: Pop(1)
0x67b: Push((int) 8516)
0x67c: @@ SetMessage(Stack[-1])
0x67d: Pop(1)
0x67e: @@ ClearReplies()
0x67f: Pop(0)
0x680: Push((int) 8517)
0x681: Push((int) 9250)
0x682: Push((int) 9359)
0x683: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x684: Pop(3)
0x685: Return(); Pop(0)

0x686: Push((int) 9250)
0x687: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x688: IF (Stack[-1] == 0) GOTO 0x69d; Pop(1)

0x689: PushEmpty(string)
0x68a: Stack[-1] = "Neutral"
0x68b: Call 0x3fb

0x68c: Pop(1)
0x68d: Push((int) 8427)
0x68e: @@ SetMessage(Stack[-1])
0x68f: Pop(1)
0x690: @@ ClearReplies()
0x691: Pop(0)
0x692: Push((int) 8518)
0x693: Push((int) -1)
0x694: Push((int) 9360)
0x695: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x696: Pop(3)
0x697: Push((int) 8519)
0x698: Push((int) -1)
0x699: Push((int) 9361)
0x69a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69b: Pop(3)
0x69c: Return(); Pop(0)

0x69d: Push((int) 9249)
0x69e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69f: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x6a0: PushEmpty(string)
0x6a1: Stack[-1] = "Neutral"
0x6a2: Call 0x3fb

0x6a3: Pop(1)
0x6a4: Push((int) 8426)
0x6a5: @@ SetMessage(Stack[-1])
0x6a6: Pop(1)
0x6a7: @@ ClearReplies()
0x6a8: Pop(0)
0x6a9: Push((int) 8508)
0x6aa: Push((int) 9351)
0x6ab: Push((int) 9350)
0x6ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ad: Pop(3)
0x6ae: Return(); Pop(0)

0x6af: Push((int) 9351)
0x6b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b1: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x6b2: PushEmpty(object, object)
0x6b3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6b5: Call 0x19f2

0x6b6: Pop(2)
0x6b7: PushEmpty(string)
0x6b8: Stack[-1] = "Neutral"
0x6b9: Call 0x3fb

0x6ba: Pop(1)
0x6bb: Push((int) 8509)
0x6bc: @@ SetMessage(Stack[-1])
0x6bd: Pop(1)
0x6be: @@ ClearReplies()
0x6bf: Pop(0)
0x6c0: Push((int) 8510)
0x6c1: Push((int) 9353)
0x6c2: Push((int) 9352)
0x6c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c4: Pop(3)
0x6c5: PushEmpty(bool, object)
0x6c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c7: Call 0x1c58

0x6c8: Pop(1)
0x6c9: Pop(1); Push((bool) Stack[-1] == 0)
0x6ca: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6cb: Push((int) 8513)
0x6cc: Push((int) 9356)
0x6cd: Push((int) 9355)
0x6ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cf: Pop(3)
0x6d0: Return(); Pop(0)

0x6d1: Push((int) 9356)
0x6d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d3: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6d4: PushEmpty(object, object)
0x6d5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6d6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6d7: Call 0x1a2d

0x6d8: Pop(2)
0x6d9: PushEmpty(object, object)
0x6da: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6dc: Call 0x1921

0x6dd: Pop(2)
0x6de: PushEmpty(object, object)
0x6df: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e1: Call 0x191b

0x6e2: Pop(2)
0x6e3: PushEmpty(object, object)
0x6e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e6: Call 0x1927

0x6e7: Pop(2)
0x6e8: PushEmpty(object, object)
0x6e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6eb: Call 0x1a33

0x6ec: Pop(2)
0x6ed: PushEmpty(string)
0x6ee: Stack[-1] = "Neutral"
0x6ef: Call 0x3fb

0x6f0: Pop(1)
0x6f1: Push((int) 8514)
0x6f2: @@ SetMessage(Stack[-1])
0x6f3: Pop(1)
0x6f4: @@ ClearReplies()
0x6f5: Pop(0)
0x6f6: Push((int) 8515)
0x6f7: Push((int) -1)
0x6f8: Push((int) 9357)
0x6f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fa: Pop(3)
0x6fb: Return(); Pop(0)

0x6fc: Push((int) 9353)
0x6fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6fe: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x6ff: PushEmpty(string)
0x700: Stack[-1] = "Neutral"
0x701: Call 0x3fb

0x702: Pop(1)
0x703: Push((int) 8511)
0x704: @@ SetMessage(Stack[-1])
0x705: Pop(1)
0x706: @@ ClearReplies()
0x707: Pop(0)
0x708: Push((int) 8512)
0x709: Push((int) -1)
0x70a: Push((int) 9354)
0x70b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70c: Pop(3)
0x70d: Return(); Pop(0)

0x70e: Push((int) 9248)
0x70f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x710: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x711: PushEmpty(string)
0x712: Stack[-1] = "Neutral"
0x713: Call 0x3fb

0x714: Pop(1)
0x715: Push((int) 8425)
0x716: @@ SetMessage(Stack[-1])
0x717: Pop(1)
0x718: @@ ClearReplies()
0x719: Pop(0)
0x71a: Push((int) 8500)
0x71b: Push((int) 9343)
0x71c: Push((int) 9342)
0x71d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71e: Pop(3)
0x71f: Return(); Pop(0)

0x720: Push((int) 9343)
0x721: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x722: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x723: PushEmpty(string)
0x724: Stack[-1] = "Neutral"
0x725: Call 0x3fb

0x726: Pop(1)
0x727: Push((int) 8501)
0x728: @@ SetMessage(Stack[-1])
0x729: Pop(1)
0x72a: @@ ClearReplies()
0x72b: Pop(0)
0x72c: Push((int) 8502)
0x72d: Push((int) 9345)
0x72e: Push((int) 9344)
0x72f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x730: Pop(3)
0x731: Push((int) 8507)
0x732: Push((int) -1)
0x733: Push((int) 9349)
0x734: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x735: Pop(3)
0x736: Return(); Pop(0)

0x737: Push((int) 9345)
0x738: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x739: IF (Stack[-1] == 0) GOTO 0x749; Pop(1)

0x73a: PushEmpty(string)
0x73b: Stack[-1] = "Neutral"
0x73c: Call 0x3fb

0x73d: Pop(1)
0x73e: Push((int) 8503)
0x73f: @@ SetMessage(Stack[-1])
0x740: Pop(1)
0x741: @@ ClearReplies()
0x742: Pop(0)
0x743: Push((int) 8504)
0x744: Push((int) 9348)
0x745: Push((int) 9346)
0x746: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x747: Pop(3)
0x748: Return(); Pop(0)

0x749: Push((int) 9348)
0x74a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x74b: IF (Stack[-1] == 0) GOTO 0x760; Pop(1)

0x74c: PushEmpty(object, object)
0x74d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x74e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x74f: Call 0x18b0

0x750: Pop(2)
0x751: PushEmpty(string)
0x752: Stack[-1] = "Neutral"
0x753: Call 0x3fb

0x754: Pop(1)
0x755: Push((int) 8506)
0x756: @@ SetMessage(Stack[-1])
0x757: Pop(1)
0x758: @@ ClearReplies()
0x759: Pop(0)
0x75a: Push((int) 8505)
0x75b: Push((int) -1)
0x75c: Push((int) 9347)
0x75d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75e: Pop(3)
0x75f: Return(); Pop(0)

0x760: Push((int) 9247)
0x761: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x762: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x763: PushEmpty(string)
0x764: Stack[-1] = "Neutral"
0x765: Call 0x3fb

0x766: Pop(1)
0x767: Push((int) 8424)
0x768: @@ SetMessage(Stack[-1])
0x769: Pop(1)
0x76a: @@ ClearReplies()
0x76b: Pop(0)
0x76c: Push((int) 8495)
0x76d: Push((int) 9338)
0x76e: Push((int) 9337)
0x76f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x770: Pop(3)
0x771: Return(); Pop(0)

0x772: Push((int) 9338)
0x773: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x774: IF (Stack[-1] == 0) GOTO 0x784; Pop(1)

0x775: PushEmpty(string)
0x776: Stack[-1] = "Neutral"
0x777: Call 0x3fb

0x778: Pop(1)
0x779: Push((int) 8496)
0x77a: @@ SetMessage(Stack[-1])
0x77b: Pop(1)
0x77c: @@ ClearReplies()
0x77d: Pop(0)
0x77e: Push((int) 8497)
0x77f: Push((int) 9340)
0x780: Push((int) 9339)
0x781: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x782: Pop(3)
0x783: Return(); Pop(0)

0x784: Push((int) 9340)
0x785: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x786: IF (Stack[-1] == 0) GOTO 0x796; Pop(1)

0x787: PushEmpty(string)
0x788: Stack[-1] = "Neutral"
0x789: Call 0x3fb

0x78a: Pop(1)
0x78b: Push((int) 8498)
0x78c: @@ SetMessage(Stack[-1])
0x78d: Pop(1)
0x78e: @@ ClearReplies()
0x78f: Pop(0)
0x790: Push((int) 8499)
0x791: Push((int) -1)
0x792: Push((int) 9341)
0x793: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x794: Pop(3)
0x795: Return(); Pop(0)

0x796: Push((int) 9317)
0x797: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x798: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x799: PushEmpty(string)
0x79a: Stack[-1] = "Neutral"
0x79b: Call 0x3fb

0x79c: Pop(1)
0x79d: Push((int) 8477)
0x79e: @@ SetMessage(Stack[-1])
0x79f: Pop(1)
0x7a0: @@ ClearReplies()
0x7a1: Pop(0)
0x7a2: Push((int) 8478)
0x7a3: Push((int) 9246)
0x7a4: Push((int) 9318)
0x7a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a6: Pop(3)
0x7a7: Push((int) 8481)
0x7a8: Push((int) 9322)
0x7a9: Push((int) 9321)
0x7aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ab: Pop(3)
0x7ac: Return(); Pop(0)

0x7ad: Push((int) 9322)
0x7ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7af: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x7b0: PushEmpty(string)
0x7b1: Stack[-1] = "Neutral"
0x7b2: Call 0x3fb

0x7b3: Pop(1)
0x7b4: Push((int) 8482)
0x7b5: @@ SetMessage(Stack[-1])
0x7b6: Pop(1)
0x7b7: @@ ClearReplies()
0x7b8: Pop(0)
0x7b9: Push((int) 8483)
0x7ba: Push((int) 9246)
0x7bb: Push((int) 9323)
0x7bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bd: Pop(3)
0x7be: Return(); Pop(0)

0x7bf: Push((int) 9246)
0x7c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c1: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7c2: PushEmpty(string)
0x7c3: Stack[-1] = "Neutral"
0x7c4: Call 0x3fb

0x7c5: Pop(1)
0x7c6: Push((int) 8423)
0x7c7: @@ SetMessage(Stack[-1])
0x7c8: Pop(1)
0x7c9: @@ ClearReplies()
0x7ca: Pop(0)
0x7cb: Push((int) 8479)
0x7cc: Push((int) 9320)
0x7cd: Push((int) 9319)
0x7ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cf: Pop(3)
0x7d0: Push((int) 8494)
0x7d1: Push((int) 9331)
0x7d2: Push((int) 9335)
0x7d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d4: Pop(3)
0x7d5: Return(); Pop(0)

0x7d6: Push((int) 9320)
0x7d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d8: IF (Stack[-1] == 0) GOTO 0x7e8; Pop(1)

0x7d9: PushEmpty(string)
0x7da: Stack[-1] = "Neutral"
0x7db: Call 0x3fb

0x7dc: Pop(1)
0x7dd: Push((int) 8480)
0x7de: @@ SetMessage(Stack[-1])
0x7df: Pop(1)
0x7e0: @@ ClearReplies()
0x7e1: Pop(0)
0x7e2: Push((int) 8484)
0x7e3: Push((int) 9326)
0x7e4: Push((int) 9325)
0x7e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e6: Pop(3)
0x7e7: Return(); Pop(0)

0x7e8: Push((int) 9326)
0x7e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ea: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7eb: PushEmpty(string)
0x7ec: Stack[-1] = "Neutral"
0x7ed: Call 0x3fb

0x7ee: Pop(1)
0x7ef: Push((int) 8485)
0x7f0: @@ SetMessage(Stack[-1])
0x7f1: Pop(1)
0x7f2: @@ ClearReplies()
0x7f3: Pop(0)
0x7f4: Push((int) 8486)
0x7f5: Push((int) 9328)
0x7f6: Push((int) 9327)
0x7f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f8: Pop(3)
0x7f9: Push((int) 8489)
0x7fa: Push((int) 9331)
0x7fb: Push((int) 9330)
0x7fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fd: Pop(3)
0x7fe: Return(); Pop(0)

0x7ff: Push((int) 9331)
0x800: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x801: IF (Stack[-1] == 0) GOTO 0x811; Pop(1)

0x802: PushEmpty(string)
0x803: Stack[-1] = "Neutral"
0x804: Call 0x3fb

0x805: Pop(1)
0x806: Push((int) 8490)
0x807: @@ SetMessage(Stack[-1])
0x808: Pop(1)
0x809: @@ ClearReplies()
0x80a: Pop(0)
0x80b: Push((int) 8491)
0x80c: Push((int) 9333)
0x80d: Push((int) 9332)
0x80e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80f: Pop(3)
0x810: Return(); Pop(0)

0x811: Push((int) 9333)
0x812: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x813: IF (Stack[-1] == 0) GOTO 0x823; Pop(1)

0x814: PushEmpty(string)
0x815: Stack[-1] = "Neutral"
0x816: Call 0x3fb

0x817: Pop(1)
0x818: Push((int) 8492)
0x819: @@ SetMessage(Stack[-1])
0x81a: Pop(1)
0x81b: @@ ClearReplies()
0x81c: Pop(0)
0x81d: Push((int) 8493)
0x81e: Push((int) -1)
0x81f: Push((int) 9334)
0x820: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x821: Pop(3)
0x822: Return(); Pop(0)

0x823: Push((int) 9328)
0x824: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x825: IF (Stack[-1] == 0) GOTO 0x835; Pop(1)

0x826: PushEmpty(string)
0x827: Stack[-1] = "Neutral"
0x828: Call 0x3fb

0x829: Pop(1)
0x82a: Push((int) 8487)
0x82b: @@ SetMessage(Stack[-1])
0x82c: Pop(1)
0x82d: @@ ClearReplies()
0x82e: Pop(0)
0x82f: Push((int) 8488)
0x830: Push((int) -1)
0x831: Push((int) 9329)
0x832: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x833: Pop(3)
0x834: Return(); Pop(0)

0x835: Push((int) 5711)
0x836: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x837: IF (Stack[-1] == 0) GOTO 0x851; Pop(1)

0x838: PushEmpty(string)
0x839: Stack[-1] = "Neutral"
0x83a: Call 0x3fb

0x83b: Pop(1)
0x83c: Push((int) 5185)
0x83d: @@ SetMessage(Stack[-1])
0x83e: Pop(1)
0x83f: @@ ClearReplies()
0x840: Pop(0)
0x841: Push((int) 5186)
0x842: Push((int) 5713)
0x843: Push((int) 5712)
0x844: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x845: Pop(3)
0x846: Push((int) 5202)
0x847: Push((int) 5713)
0x848: Push((int) 5729)
0x849: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84a: Pop(3)
0x84b: Push((int) 5203)
0x84c: Push((int) 5713)
0x84d: Push((int) 5731)
0x84e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84f: Pop(3)
0x850: Return(); Pop(0)

0x851: Push((int) 5713)
0x852: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x853: IF (Stack[-1] == 0) GOTO 0x868; Pop(1)

0x854: PushEmpty(string)
0x855: Stack[-1] = "Neutral"
0x856: Call 0x3fb

0x857: Pop(1)
0x858: Push((int) 5187)
0x859: @@ SetMessage(Stack[-1])
0x85a: Pop(1)
0x85b: @@ ClearReplies()
0x85c: Pop(0)
0x85d: Push((int) 5188)
0x85e: Push((int) 5715)
0x85f: Push((int) 5714)
0x860: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x861: Pop(3)
0x862: Push((int) 5201)
0x863: Push((int) 5715)
0x864: Push((int) 5727)
0x865: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x866: Pop(3)
0x867: Return(); Pop(0)

0x868: Push((int) 5715)
0x869: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x86a: IF (Stack[-1] == 0) GOTO 0x87f; Pop(1)

0x86b: PushEmpty(string)
0x86c: Stack[-1] = "Neutral"
0x86d: Call 0x3fb

0x86e: Pop(1)
0x86f: Push((int) 5189)
0x870: @@ SetMessage(Stack[-1])
0x871: Pop(1)
0x872: @@ ClearReplies()
0x873: Pop(0)
0x874: Push((int) 5190)
0x875: Push((int) 5717)
0x876: Push((int) 5716)
0x877: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x878: Pop(3)
0x879: Push((int) 5194)
0x87a: Push((int) 5721)
0x87b: Push((int) 5720)
0x87c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87d: Pop(3)
0x87e: Return(); Pop(0)

0x87f: Push((int) 5721)
0x880: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x881: IF (Stack[-1] == 0) GOTO 0x896; Pop(1)

0x882: PushEmpty(string)
0x883: Stack[-1] = "Neutral"
0x884: Call 0x3fb

0x885: Pop(1)
0x886: Push((int) 5195)
0x887: @@ SetMessage(Stack[-1])
0x888: Pop(1)
0x889: @@ ClearReplies()
0x88a: Pop(0)
0x88b: Push((int) 5196)
0x88c: Push((int) 5723)
0x88d: Push((int) 5722)
0x88e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88f: Pop(3)
0x890: Push((int) 5200)
0x891: Push((int) -1)
0x892: Push((int) 5726)
0x893: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x894: Pop(3)
0x895: Return(); Pop(0)

0x896: Push((int) 5723)
0x897: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x898: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x899: PushEmpty(string)
0x89a: Stack[-1] = "Neutral"
0x89b: Call 0x3fb

0x89c: Pop(1)
0x89d: Push((int) 5197)
0x89e: @@ SetMessage(Stack[-1])
0x89f: Pop(1)
0x8a0: @@ ClearReplies()
0x8a1: Pop(0)
0x8a2: Push((int) 5198)
0x8a3: Push((int) -1)
0x8a4: Push((int) 5724)
0x8a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a6: Pop(3)
0x8a7: Push((int) 5199)
0x8a8: Push((int) -1)
0x8a9: Push((int) 5725)
0x8aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ab: Pop(3)
0x8ac: Return(); Pop(0)

0x8ad: Push((int) 5717)
0x8ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8af: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8b0: PushEmpty(string)
0x8b1: Stack[-1] = "Neutral"
0x8b2: Call 0x3fb

0x8b3: Pop(1)
0x8b4: Push((int) 5191)
0x8b5: @@ SetMessage(Stack[-1])
0x8b6: Pop(1)
0x8b7: @@ ClearReplies()
0x8b8: Pop(0)
0x8b9: Push((int) 5192)
0x8ba: Push((int) -1)
0x8bb: Push((int) 5718)
0x8bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bd: Pop(3)
0x8be: Push((int) 5193)
0x8bf: Push((int) -1)
0x8c0: Push((int) 5719)
0x8c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c2: Pop(3)
0x8c3: Return(); Pop(0)

0x8c4: Push((int) 5635)
0x8c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c6: IF (Stack[-1] == 0) GOTO 0x8e6; Pop(1)

0x8c7: PushEmpty(object, object)
0x8c8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8ca: Call 0x18b6

0x8cb: Pop(2)
0x8cc: PushEmpty(string)
0x8cd: Stack[-1] = "Neutral"
0x8ce: Call 0x3fb

0x8cf: Pop(1)
0x8d0: Push((int) 5121)
0x8d1: @@ SetMessage(Stack[-1])
0x8d2: Pop(1)
0x8d3: @@ ClearReplies()
0x8d4: Pop(0)
0x8d5: Push((int) 5122)
0x8d6: Push((int) 5637)
0x8d7: Push((int) 5636)
0x8d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d9: Pop(3)
0x8da: PushEmpty(bool, object)
0x8db: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8dc: Call 0x1b5c

0x8dd: Pop(1)
0x8de: Pop(1); Push((bool) Stack[-1] == 0)
0x8df: IF (Stack[-1] == 0) GOTO 0x8e5; Pop(1)

0x8e0: Push((int) 8466)
0x8e1: Push((int) 9304)
0x8e2: Push((int) 9303)
0x8e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e4: Pop(3)
0x8e5: Return(); Pop(0)

0x8e6: Push((int) 9304)
0x8e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e8: IF (Stack[-1] == 0) GOTO 0x8fd; Pop(1)

0x8e9: PushEmpty(object, object)
0x8ea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8ec: Call 0x18b6

0x8ed: Pop(2)
0x8ee: PushEmpty(string)
0x8ef: Stack[-1] = "Neutral"
0x8f0: Call 0x3fb

0x8f1: Pop(1)
0x8f2: Push((int) 8467)
0x8f3: @@ SetMessage(Stack[-1])
0x8f4: Pop(1)
0x8f5: @@ ClearReplies()
0x8f6: Pop(0)
0x8f7: Push((int) 8468)
0x8f8: Push((int) 5637)
0x8f9: Push((int) 9305)
0x8fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fb: Pop(3)
0x8fc: Return(); Pop(0)

0x8fd: Push((int) 5637)
0x8fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ff: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x900: PushEmpty(string)
0x901: Stack[-1] = "Neutral"
0x902: Call 0x3fb

0x903: Pop(1)
0x904: Push((int) 5123)
0x905: @@ SetMessage(Stack[-1])
0x906: Pop(1)
0x907: @@ ClearReplies()
0x908: Pop(0)
0x909: Push((int) 5124)
0x90a: Push((int) 5639)
0x90b: Push((int) 5638)
0x90c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90d: Pop(3)
0x90e: Push((int) 8472)
0x90f: Push((int) 9312)
0x910: Push((int) 9311)
0x911: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x912: Pop(3)
0x913: Push((int) 8469)
0x914: Push((int) 9308)
0x915: Push((int) 9307)
0x916: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x917: Pop(3)
0x918: Return(); Pop(0)

0x919: Push((int) 9308)
0x91a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91b: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x91c: PushEmpty(string)
0x91d: Stack[-1] = "Neutral"
0x91e: Call 0x3fb

0x91f: Pop(1)
0x920: Push((int) 8470)
0x921: @@ SetMessage(Stack[-1])
0x922: Pop(1)
0x923: @@ ClearReplies()
0x924: Pop(0)
0x925: Push((int) 8471)
0x926: Push((int) 5639)
0x927: Push((int) 9309)
0x928: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x929: Pop(3)
0x92a: Return(); Pop(0)

0x92b: Push((int) 9312)
0x92c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x92d: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x92e: PushEmpty(string)
0x92f: Stack[-1] = "Neutral"
0x930: Call 0x3fb

0x931: Pop(1)
0x932: Push((int) 8473)
0x933: @@ SetMessage(Stack[-1])
0x934: Pop(1)
0x935: @@ ClearReplies()
0x936: Pop(0)
0x937: Push((int) 8474)
0x938: Push((int) 5639)
0x939: Push((int) 9313)
0x93a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93b: Pop(3)
0x93c: Return(); Pop(0)

0x93d: Push((int) 5639)
0x93e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93f: IF (Stack[-1] == 0) GOTO 0x954; Pop(1)

0x940: PushEmpty(string)
0x941: Stack[-1] = "Neutral"
0x942: Call 0x3fb

0x943: Pop(1)
0x944: Push((int) 5125)
0x945: @@ SetMessage(Stack[-1])
0x946: Pop(1)
0x947: @@ ClearReplies()
0x948: Pop(0)
0x949: Push((int) 5126)
0x94a: Push((int) 5641)
0x94b: Push((int) 5640)
0x94c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94d: Pop(3)
0x94e: Push((int) 5138)
0x94f: Push((int) 5641)
0x950: Push((int) 5654)
0x951: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x952: Pop(3)
0x953: Return(); Pop(0)

0x954: Push((int) 5641)
0x955: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x956: IF (Stack[-1] == 0) GOTO 0x96b; Pop(1)

0x957: PushEmpty(string)
0x958: Stack[-1] = "Neutral"
0x959: Call 0x3fb

0x95a: Pop(1)
0x95b: Push((int) 5127)
0x95c: @@ SetMessage(Stack[-1])
0x95d: Pop(1)
0x95e: @@ ClearReplies()
0x95f: Pop(0)
0x960: Push((int) 5128)
0x961: Push((int) 5643)
0x962: Push((int) 5642)
0x963: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x964: Pop(3)
0x965: Push((int) 5137)
0x966: Push((int) 5643)
0x967: Push((int) 5652)
0x968: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x969: Pop(3)
0x96a: Return(); Pop(0)

0x96b: Push((int) 5643)
0x96c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x96d: IF (Stack[-1] == 0) GOTO 0x97d; Pop(1)

0x96e: PushEmpty(string)
0x96f: Stack[-1] = "Neutral"
0x970: Call 0x3fb

0x971: Pop(1)
0x972: Push((int) 5129)
0x973: @@ SetMessage(Stack[-1])
0x974: Pop(1)
0x975: @@ ClearReplies()
0x976: Pop(0)
0x977: Push((int) 5130)
0x978: Push((int) 5645)
0x979: Push((int) 5644)
0x97a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97b: Pop(3)
0x97c: Return(); Pop(0)

0x97d: Push((int) 5645)
0x97e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x97f: IF (Stack[-1] == 0) GOTO 0x994; Pop(1)

0x980: PushEmpty(string)
0x981: Stack[-1] = "Neutral"
0x982: Call 0x3fb

0x983: Pop(1)
0x984: Push((int) 5131)
0x985: @@ SetMessage(Stack[-1])
0x986: Pop(1)
0x987: @@ ClearReplies()
0x988: Pop(0)
0x989: Push((int) 5132)
0x98a: Push((int) 5647)
0x98b: Push((int) 5646)
0x98c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98d: Pop(3)
0x98e: Push((int) 5136)
0x98f: Push((int) 5647)
0x990: Push((int) 5650)
0x991: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x992: Pop(3)
0x993: Return(); Pop(0)

0x994: Push((int) 5647)
0x995: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x996: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x997: PushEmpty(string)
0x998: Stack[-1] = "Neutral"
0x999: Call 0x3fb

0x99a: Pop(1)
0x99b: Push((int) 5133)
0x99c: @@ SetMessage(Stack[-1])
0x99d: Pop(1)
0x99e: @@ ClearReplies()
0x99f: Pop(0)
0x9a0: Push((int) 5134)
0x9a1: Push((int) -1)
0x9a2: Push((int) 5648)
0x9a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a4: Pop(3)
0x9a5: Push((int) 5135)
0x9a6: Push((int) -1)
0x9a7: Push((int) 5649)
0x9a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a9: Pop(3)
0x9aa: Return(); Pop(0)

0x9ab: Push((int) 9315)
0x9ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ad: IF (Stack[-1] == 0) GOTO 0x9bd; Pop(1)

0x9ae: PushEmpty(string)
0x9af: Stack[-1] = "Neutral"
0x9b0: Call 0x3fb

0x9b1: Pop(1)
0x9b2: Push((int) 8475)
0x9b3: @@ SetMessage(Stack[-1])
0x9b4: Pop(1)
0x9b5: @@ ClearReplies()
0x9b6: Pop(0)
0x9b7: Push((int) 8476)
0x9b8: Push((int) -1)
0x9b9: Push((int) 9316)
0x9ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9bb: Pop(3)
0x9bc: Return(); Pop(0)

0x9bd: Push((int) 9234)
0x9be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9bf: IF (Stack[-1] == 0) GOTO 0x9de; Pop(1)

0x9c0: PushEmpty(string)
0x9c1: Stack[-1] = "Neutral"
0x9c2: Call 0x3fb

0x9c3: Pop(1)
0x9c4: Push((int) 8411)
0x9c5: @@ SetMessage(Stack[-1])
0x9c6: Pop(1)
0x9c7: @@ ClearReplies()
0x9c8: Pop(0)
0x9c9: PushEmpty(bool, object)
0x9ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9cb: Call 0x1b2e

0x9cc: Pop(1)
0x9cd: IF (Stack[-1] == 0) GOTO 0x9d3; Pop(1)

0x9ce: Push((int) 8448)
0x9cf: Push((int) 9282)
0x9d0: Push((int) 9281)
0x9d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d2: Pop(3)
0x9d3: PushEmpty(bool, object)
0x9d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9d5: Call 0x1a69

0x9d6: Pop(1)
0x9d7: IF (Stack[-1] == 0) GOTO 0x9dd; Pop(1)

0x9d8: Push((int) 8463)
0x9d9: Push((int) 9300)
0x9da: Push((int) 9299)
0x9db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9dc: Pop(3)
0x9dd: Return(); Pop(0)

0x9de: Push((int) 9300)
0x9df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e0: IF (Stack[-1] == 0) GOTO 0x9f0; Pop(1)

0x9e1: PushEmpty(string)
0x9e2: Stack[-1] = "Neutral"
0x9e3: Call 0x3fb

0x9e4: Pop(1)
0x9e5: Push((int) 8464)
0x9e6: @@ SetMessage(Stack[-1])
0x9e7: Pop(1)
0x9e8: @@ ClearReplies()
0x9e9: Pop(0)
0x9ea: Push((int) 8465)
0x9eb: Push((int) -1)
0x9ec: Push((int) 9301)
0x9ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ee: Pop(3)
0x9ef: Return(); Pop(0)

0x9f0: Push((int) 9282)
0x9f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f2: IF (Stack[-1] == 0) GOTO 0xa0c; Pop(1)

0x9f3: PushEmpty(string)
0x9f4: Stack[-1] = "Neutral"
0x9f5: Call 0x3fb

0x9f6: Pop(1)
0x9f7: Push((int) 8449)
0x9f8: @@ SetMessage(Stack[-1])
0x9f9: Pop(1)
0x9fa: @@ ClearReplies()
0x9fb: Pop(0)
0x9fc: Push((int) 8451)
0x9fd: Push((int) 9287)
0x9fe: Push((int) 9284)
0x9ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa00: Pop(3)
0xa01: Push((int) 8452)
0xa02: Push((int) 9287)
0xa03: Push((int) 9285)
0xa04: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa05: Pop(3)
0xa06: Push((int) 8453)
0xa07: Push((int) 9287)
0xa08: Push((int) 9286)
0xa09: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0a: Pop(3)
0xa0b: Return(); Pop(0)

0xa0c: Push((int) 9287)
0xa0d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa0e: IF (Stack[-1] == 0) GOTO 0xa1e; Pop(1)

0xa0f: PushEmpty(string)
0xa10: Stack[-1] = "Neutral"
0xa11: Call 0x3fb

0xa12: Pop(1)
0xa13: Push((int) 8454)
0xa14: @@ SetMessage(Stack[-1])
0xa15: Pop(1)
0xa16: @@ ClearReplies()
0xa17: Pop(0)
0xa18: Push((int) 8412)
0xa19: Push((int) 9236)
0xa1a: Push((int) 9235)
0xa1b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1c: Pop(3)
0xa1d: Return(); Pop(0)

0xa1e: Push((int) 9236)
0xa1f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa20: IF (Stack[-1] == 0) GOTO 0xa30; Pop(1)

0xa21: PushEmpty(string)
0xa22: Stack[-1] = "Neutral"
0xa23: Call 0x3fb

0xa24: Pop(1)
0xa25: Push((int) 8413)
0xa26: @@ SetMessage(Stack[-1])
0xa27: Pop(1)
0xa28: @@ ClearReplies()
0xa29: Pop(0)
0xa2a: Push((int) 8414)
0xa2b: Push((int) 9238)
0xa2c: Push((int) 9237)
0xa2d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2e: Pop(3)
0xa2f: Return(); Pop(0)

0xa30: Push((int) 9238)
0xa31: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa32: IF (Stack[-1] == 0) GOTO 0xa47; Pop(1)

0xa33: PushEmpty(string)
0xa34: Stack[-1] = "Neutral"
0xa35: Call 0x3fb

0xa36: Pop(1)
0xa37: Push((int) 8415)
0xa38: @@ SetMessage(Stack[-1])
0xa39: Pop(1)
0xa3a: @@ ClearReplies()
0xa3b: Pop(0)
0xa3c: Push((int) 8416)
0xa3d: Push((int) 9240)
0xa3e: Push((int) 9239)
0xa3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa40: Pop(3)
0xa41: Push((int) 8418)
0xa42: Push((int) 9242)
0xa43: Push((int) 9241)
0xa44: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa45: Pop(3)
0xa46: Return(); Pop(0)

0xa47: Push((int) 9242)
0xa48: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa49: IF (Stack[-1] == 0) GOTO 0xa59; Pop(1)

0xa4a: PushEmpty(string)
0xa4b: Stack[-1] = "Neutral"
0xa4c: Call 0x3fb

0xa4d: Pop(1)
0xa4e: Push((int) 8419)
0xa4f: @@ SetMessage(Stack[-1])
0xa50: Pop(1)
0xa51: @@ ClearReplies()
0xa52: Pop(0)
0xa53: Push((int) 8456)
0xa54: Push((int) 9292)
0xa55: Push((int) 9291)
0xa56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa57: Pop(3)
0xa58: Return(); Pop(0)

0xa59: Push((int) 9292)
0xa5a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa5b: IF (Stack[-1] == 0) GOTO 0xa6b; Pop(1)

0xa5c: PushEmpty(string)
0xa5d: Stack[-1] = "Neutral"
0xa5e: Call 0x3fb

0xa5f: Pop(1)
0xa60: Push((int) 8457)
0xa61: @@ SetMessage(Stack[-1])
0xa62: Pop(1)
0xa63: @@ ClearReplies()
0xa64: Pop(0)
0xa65: Push((int) 8459)
0xa66: Push((int) 9244)
0xa67: Push((int) 9294)
0xa68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa69: Pop(3)
0xa6a: Return(); Pop(0)

0xa6b: Push((int) 9240)
0xa6c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa6d: IF (Stack[-1] == 0) GOTO 0xa7d; Pop(1)

0xa6e: PushEmpty(string)
0xa6f: Stack[-1] = "Neutral"
0xa70: Call 0x3fb

0xa71: Pop(1)
0xa72: Push((int) 8417)
0xa73: @@ SetMessage(Stack[-1])
0xa74: Pop(1)
0xa75: @@ ClearReplies()
0xa76: Pop(0)
0xa77: Push((int) 8420)
0xa78: Push((int) 9244)
0xa79: Push((int) 9243)
0xa7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7b: Pop(3)
0xa7c: Return(); Pop(0)

0xa7d: Push((int) 9244)
0xa7e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa7f: IF (Stack[-1] == 0) GOTO 0xa94; Pop(1)

0xa80: PushEmpty(string)
0xa81: Stack[-1] = "Neutral"
0xa82: Call 0x3fb

0xa83: Pop(1)
0xa84: Push((int) 8421)
0xa85: @@ SetMessage(Stack[-1])
0xa86: Pop(1)
0xa87: @@ ClearReplies()
0xa88: Pop(0)
0xa89: Push((int) 8430)
0xa8a: Push((int) 9254)
0xa8b: Push((int) 9253)
0xa8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8d: Pop(3)
0xa8e: Push((int) 8422)
0xa8f: Push((int) 9251)
0xa90: Push((int) 9245)
0xa91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa92: Pop(3)
0xa93: Return(); Pop(0)

0xa94: Push((int) 9254)
0xa95: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa96: IF (Stack[-1] == 0) GOTO 0xaa6; Pop(1)

0xa97: PushEmpty(string)
0xa98: Stack[-1] = "Neutral"
0xa99: Call 0x3fb

0xa9a: Pop(1)
0xa9b: Push((int) 8431)
0xa9c: @@ SetMessage(Stack[-1])
0xa9d: Pop(1)
0xa9e: @@ ClearReplies()
0xa9f: Pop(0)
0xaa0: Push((int) 8432)
0xaa1: Push((int) 9256)
0xaa2: Push((int) 9255)
0xaa3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa4: Pop(3)
0xaa5: Return(); Pop(0)

0xaa6: Push((int) 9256)
0xaa7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa8: IF (Stack[-1] == 0) GOTO 0xab8; Pop(1)

0xaa9: PushEmpty(string)
0xaaa: Stack[-1] = "Neutral"
0xaab: Call 0x3fb

0xaac: Pop(1)
0xaad: Push((int) 8433)
0xaae: @@ SetMessage(Stack[-1])
0xaaf: Pop(1)
0xab0: @@ ClearReplies()
0xab1: Pop(0)
0xab2: Push((int) 8434)
0xab3: Push((int) 9258)
0xab4: Push((int) 9257)
0xab5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab6: Pop(3)
0xab7: Return(); Pop(0)

0xab8: Push((int) 9258)
0xab9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaba: IF (Stack[-1] == 0) GOTO 0xaca; Pop(1)

0xabb: PushEmpty(string)
0xabc: Stack[-1] = "Neutral"
0xabd: Call 0x3fb

0xabe: Pop(1)
0xabf: Push((int) 8435)
0xac0: @@ SetMessage(Stack[-1])
0xac1: Pop(1)
0xac2: @@ ClearReplies()
0xac3: Pop(0)
0xac4: Push((int) 8436)
0xac5: Push((int) 9251)
0xac6: Push((int) 9259)
0xac7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac8: Pop(3)
0xac9: Return(); Pop(0)

0xaca: Push((int) 9251)
0xacb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xacc: IF (Stack[-1] == 0) GOTO 0xadc; Pop(1)

0xacd: PushEmpty(string)
0xace: Stack[-1] = "Neutral"
0xacf: Call 0x3fb

0xad0: Pop(1)
0xad1: Push((int) 8428)
0xad2: @@ SetMessage(Stack[-1])
0xad3: Pop(1)
0xad4: @@ ClearReplies()
0xad5: Pop(0)
0xad6: Push((int) 8429)
0xad7: Push((int) 9296)
0xad8: Push((int) 9252)
0xad9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xada: Pop(3)
0xadb: Return(); Pop(0)

0xadc: Push((int) 9296)
0xadd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xade: IF (Stack[-1] == 0) GOTO 0xaee; Pop(1)

0xadf: PushEmpty(string)
0xae0: Stack[-1] = "Neutral"
0xae1: Call 0x3fb

0xae2: Pop(1)
0xae3: Push((int) 8460)
0xae4: @@ SetMessage(Stack[-1])
0xae5: Pop(1)
0xae6: @@ ClearReplies()
0xae7: Pop(0)
0xae8: Push((int) 8461)
0xae9: Push((int) -1)
0xaea: Push((int) 9297)
0xaeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaec: Pop(3)
0xaed: Return(); Pop(0)

0xaee: Push((int) 5678)
0xaef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf0: IF (Stack[-1] == 0) GOTO 0xb0a; Pop(1)

0xaf1: PushEmpty(string)
0xaf2: Stack[-1] = "Neutral"
0xaf3: Call 0x3fb

0xaf4: Pop(1)
0xaf5: Push((int) 5157)
0xaf6: @@ SetMessage(Stack[-1])
0xaf7: Pop(1)
0xaf8: @@ ClearReplies()
0xaf9: Pop(0)
0xafa: Push((int) 5158)
0xafb: Push((int) 5680)
0xafc: Push((int) 5679)
0xafd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xafe: Pop(3)
0xaff: Push((int) 5181)
0xb00: Push((int) 5680)
0xb01: Push((int) 5705)
0xb02: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb03: Pop(3)
0xb04: Push((int) 5182)
0xb05: Push((int) 5680)
0xb06: Push((int) 5706)
0xb07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb08: Pop(3)
0xb09: Return(); Pop(0)

0xb0a: Push((int) 5680)
0xb0b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb0c: IF (Stack[-1] == 0) GOTO 0xb26; Pop(1)

0xb0d: PushEmpty(string)
0xb0e: Stack[-1] = "Neutral"
0xb0f: Call 0x3fb

0xb10: Pop(1)
0xb11: Push((int) 5159)
0xb12: @@ SetMessage(Stack[-1])
0xb13: Pop(1)
0xb14: @@ ClearReplies()
0xb15: Pop(0)
0xb16: Push((int) 5160)
0xb17: Push((int) 5682)
0xb18: Push((int) 5681)
0xb19: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1a: Pop(3)
0xb1b: Push((int) 5177)
0xb1c: Push((int) 5684)
0xb1d: Push((int) 5700)
0xb1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1f: Pop(3)
0xb20: Push((int) 5178)
0xb21: Push((int) 5703)
0xb22: Push((int) 5702)
0xb23: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb24: Pop(3)
0xb25: Return(); Pop(0)

0xb26: Push((int) 5703)
0xb27: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb28: IF (Stack[-1] == 0) GOTO 0xb38; Pop(1)

0xb29: PushEmpty(string)
0xb2a: Stack[-1] = "Neutral"
0xb2b: Call 0x3fb

0xb2c: Pop(1)
0xb2d: Push((int) 5179)
0xb2e: @@ SetMessage(Stack[-1])
0xb2f: Pop(1)
0xb30: @@ ClearReplies()
0xb31: Pop(0)
0xb32: Push((int) 5180)
0xb33: Push((int) 5694)
0xb34: Push((int) 5704)
0xb35: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb36: Pop(3)
0xb37: Return(); Pop(0)

0xb38: Push((int) 5682)
0xb39: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb3a: IF (Stack[-1] == 0) GOTO 0xb4f; Pop(1)

0xb3b: PushEmpty(string)
0xb3c: Stack[-1] = "Neutral"
0xb3d: Call 0x3fb

0xb3e: Pop(1)
0xb3f: Push((int) 5161)
0xb40: @@ SetMessage(Stack[-1])
0xb41: Pop(1)
0xb42: @@ ClearReplies()
0xb43: Pop(0)
0xb44: Push((int) 5162)
0xb45: Push((int) 5684)
0xb46: Push((int) 5683)
0xb47: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb48: Pop(3)
0xb49: Push((int) 5170)
0xb4a: Push((int) 5692)
0xb4b: Push((int) 5691)
0xb4c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb4d: Pop(3)
0xb4e: Return(); Pop(0)

0xb4f: Push((int) 5692)
0xb50: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb51: IF (Stack[-1] == 0) GOTO 0xb66; Pop(1)

0xb52: PushEmpty(string)
0xb53: Stack[-1] = "Neutral"
0xb54: Call 0x3fb

0xb55: Pop(1)
0xb56: Push((int) 5171)
0xb57: @@ SetMessage(Stack[-1])
0xb58: Pop(1)
0xb59: @@ ClearReplies()
0xb5a: Pop(0)
0xb5b: Push((int) 5172)
0xb5c: Push((int) 5694)
0xb5d: Push((int) 5693)
0xb5e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5f: Pop(3)
0xb60: Push((int) 5176)
0xb61: Push((int) 5694)
0xb62: Push((int) 5699)
0xb63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb64: Pop(3)
0xb65: Return(); Pop(0)

0xb66: Push((int) 5694)
0xb67: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb68: IF (Stack[-1] == 0) GOTO 0xb7d; Pop(1)

0xb69: PushEmpty(string)
0xb6a: Stack[-1] = "Neutral"
0xb6b: Call 0x3fb

0xb6c: Pop(1)
0xb6d: Push((int) 5173)
0xb6e: @@ SetMessage(Stack[-1])
0xb6f: Pop(1)
0xb70: @@ ClearReplies()
0xb71: Pop(0)
0xb72: Push((int) 5174)
0xb73: Push((int) 5684)
0xb74: Push((int) 5695)
0xb75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb76: Pop(3)
0xb77: Push((int) 5175)
0xb78: Push((int) 5684)
0xb79: Push((int) 5697)
0xb7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7b: Pop(3)
0xb7c: Return(); Pop(0)

0xb7d: Push((int) 5684)
0xb7e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb7f: IF (Stack[-1] == 0) GOTO 0xb99; Pop(1)

0xb80: PushEmpty(string)
0xb81: Stack[-1] = "Neutral"
0xb82: Call 0x3fb

0xb83: Pop(1)
0xb84: Push((int) 5163)
0xb85: @@ SetMessage(Stack[-1])
0xb86: Pop(1)
0xb87: @@ ClearReplies()
0xb88: Pop(0)
0xb89: Push((int) 5165)
0xb8a: Push((int) -1)
0xb8b: Push((int) 5686)
0xb8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8d: Pop(3)
0xb8e: Push((int) 5164)
0xb8f: Push((int) -1)
0xb90: Push((int) 5685)
0xb91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb92: Pop(3)
0xb93: Push((int) 5166)
0xb94: Push((int) 5688)
0xb95: Push((int) 5687)
0xb96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb97: Pop(3)
0xb98: Return(); Pop(0)

0xb99: Push((int) 5688)
0xb9a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9b: IF (Stack[-1] == 0) GOTO 0xbab; Pop(1)

0xb9c: PushEmpty(string)
0xb9d: Stack[-1] = "Neutral"
0xb9e: Call 0x3fb

0xb9f: Pop(1)
0xba0: Push((int) 5167)
0xba1: @@ SetMessage(Stack[-1])
0xba2: Pop(1)
0xba3: @@ ClearReplies()
0xba4: Pop(0)
0xba5: Push((int) 5168)
0xba6: Push((int) -1)
0xba7: Push((int) 5689)
0xba8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba9: Pop(3)
0xbaa: Return(); Pop(0)

0xbab: Push((int) 5626)
0xbac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbad: IF (Stack[-1] == 0) GOTO 0xbc2; Pop(1)

0xbae: PushEmpty(string)
0xbaf: Stack[-1] = "Neutral"
0xbb0: Call 0x3fb

0xbb1: Pop(1)
0xbb2: Push((int) 5113)
0xbb3: @@ SetMessage(Stack[-1])
0xbb4: Pop(1)
0xbb5: @@ ClearReplies()
0xbb6: Pop(0)
0xbb7: Push((int) 5114)
0xbb8: Push((int) 5628)
0xbb9: Push((int) 5627)
0xbba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbbb: Pop(3)
0xbbc: Push((int) 5118)
0xbbd: Push((int) -1)
0xbbe: Push((int) 5631)
0xbbf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc0: Pop(3)
0xbc1: Return(); Pop(0)

0xbc2: Push((int) 5628)
0xbc3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc4: IF (Stack[-1] == 0) GOTO 0xbd9; Pop(1)

0xbc5: PushEmpty(string)
0xbc6: Stack[-1] = "Neutral"
0xbc7: Call 0x3fb

0xbc8: Pop(1)
0xbc9: Push((int) 5115)
0xbca: @@ SetMessage(Stack[-1])
0xbcb: Pop(1)
0xbcc: @@ ClearReplies()
0xbcd: Pop(0)
0xbce: Push((int) 5116)
0xbcf: Push((int) -1)
0xbd0: Push((int) 5629)
0xbd1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd2: Pop(3)
0xbd3: Push((int) 5117)
0xbd4: Push((int) -1)
0xbd5: Push((int) 5630)
0xbd6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd7: Pop(3)
0xbd8: Return(); Pop(0)

0xbd9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xbda: PushEmpty(bool)
0xbdb: Call 0x1881

0xbdc: Pop(0)
0xbdd: IF (Stack[-1] == 0) GOTO 0xbe1; Pop(1)

0xbde: @ lshStopAnimation()
0xbdf: Pop(0)
0xbe0: GOTO 0xbe3

0xbe1: @ StopAnimation()
0xbe2: Pop(0)
0xbe3: Return(); Pop(0)

0xbe4: GOTO 0x40c

0xbe5: Return(); Pop(0)

0xbe6: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xbe7: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xbe8: PushEmpty(bool, object)
0xbe9: Stack[-1] = Stack[-11]
0xbea: Call 0x17e5

0xbeb: Pop(1)
0xbec: Pop(1); Push((bool) Stack[-1] == 0)
0xbed: IF (Stack[-1] == 0) GOTO 0xbf0; Pop(1)

0xbee: Stack[-10] = (int) -2
0xbef: Return(); Pop(8)

0xbf0: @ CreateDialog(Stack[-4])
0xbf1: Pop(0)
0xbf2: PushEmpty(int)
0xbf3: Call 0x187d

0xbf4: Pop(0)
0xbf5: @@ SetNPCName(Stack[-1])
0xbf6: Pop(1)
0xbf7: PushEmpty(string)
0xbf8: Call 0x187f

0xbf9: Pop(0)
0xbfa: @@ SetPhoto(Stack[-1])
0xbfb: Pop(1)
0xbfc: PushEmpty(int)
0xbfd: Call 0x1cc0

0xbfe: Pop(0)
0xbff: @@ SetPlayerName(Stack[-1])
0xc00: Pop(1)
0xc01: Stack[-2] = (int) -1
0xc02: @ IsOverrideActive(Stack[-3])
0xc03: Pop(0)
0xc04: Push(Stack[-3])
0xc05: IF (Stack[-1] == 0) GOTO 0xc08; Pop(1)

0xc06: Stack[-10] = (int) -2
0xc07: Return(); Pop(8)

0xc08: @ DoDialog(Stack[-4])
0xc09: Pop(0)
0xc0a: PushEmpty(object, object)
0xc0b: Stack[-2] = Stack[-11]
0xc0c: Stack[-1] = Stack[-6]
0xc0d: Push(-2, 4); TaskCall(9)
0xc0e: Call 0xc25

0xc0f: Pop(-2, 4); TaskReturn
0xc10: Pop(2)
0xc11: @@ IsDialogEnd(Stack[-1])
0xc12: Pop(0)
0xc13: Pop(0); Push((bool) Stack[-1] == 0)
0xc14: IF (Stack[-1] == 0) GOTO 0xc1a; Pop(1)

0xc15: @ sync()
0xc16: Pop(0)
0xc17: @@ IsDialogEnd(Stack[-1])
0xc18: Pop(0)
0xc19: GOTO 0xc13

0xc1a: PushEmpty(object)
0xc1b: Stack[-1] = Stack[-10]
0xc1c: Call 0x181d

0xc1d: Pop(1)
0xc1e: @ StopDialog(Stack[-4])
0xc1f: Pop(0)
0xc20: @@ GetReturnValue(Stack[-2])
0xc21: Pop(0)
0xc22: Stack[-10] = Stack[-2]
0xc23: Return(); Pop(8)

0xc24: Stack[-4] = 0
0xc25: PushEmpty()
0xc26: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xc27: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xc28: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xc29: Push((int) 1)
0xc2a: IF (Stack[-1] == 0) GOTO 0xc6c; Pop(1)

0xc2b: PushEmpty(string)
0xc2c: Stack[-1] = "Neutral"
0xc2d: Call 0xc8a

0xc2e: Pop(1)
0xc2f: Push((int) 6924)
0xc30: @@ SetMessage(Stack[-1])
0xc31: Pop(1)
0xc32: @@ ClearReplies()
0xc33: Pop(0)
0xc34: PushEmpty(bool)
0xc35: Stack[-1] = (bool) 0
0xc36: PushEmpty(bool)
0xc37: Stack[-1] = (bool) 0
0xc38: PushEmpty(bool, object)
0xc39: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc3a: Call 0x1ab1

0xc3b: Pop(1)
0xc3c: IF (Stack[-1] == 0) GOTO 0xc43; Pop(1)

0xc3d: PushEmpty(bool, object)
0xc3e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc3f: Call 0x1ad5

0xc40: Pop(1)
0xc41: IF (Stack[-1] == 0) GOTO 0xc43; Pop(1)

0xc42: Stack[-1] = (bool) 1
0xc43: IF (Stack[-1] == 0) GOTO 0xc4a; Pop(1)

0xc44: PushEmpty(bool, object)
0xc45: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc46: Call 0x1ac9

0xc47: Pop(1)
0xc48: IF (Stack[-1] == 0) GOTO 0xc4a; Pop(1)

0xc49: Stack[-1] = (bool) 1
0xc4a: IF (Stack[-1] == 0) GOTO 0xc50; Pop(1)

0xc4b: Push((int) 6925)
0xc4c: Push((int) 7632)
0xc4d: Push((int) 7631)
0xc4e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4f: Pop(3)
0xc50: Push((int) 7777)
0xc51: Push((int) -1)
0xc52: Push((int) 8579)
0xc53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc54: Pop(3)
0xc55: GOTO 0xc6c

0xc56: PushEmpty(string)
0xc57: Stack[-1] = "Neutral"
0xc58: Call 0xc8a

0xc59: Pop(1)
0xc5a: Push((int) 9531)
0xc5b: @@ SetMessage(Stack[-1])
0xc5c: Pop(1)
0xc5d: @@ ClearReplies()
0xc5e: Pop(0)
0xc5f: Push((int) 9532)
0xc60: Push((int) 10478)
0xc61: Push((int) 10477)
0xc62: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc63: Pop(3)
0xc64: Push((int) 9539)
0xc65: Push((int) 10478)
0xc66: Push((int) 10484)
0xc67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc68: Pop(3)
0xc69: GOTO 0xc6c

0xc6a: Return(); Pop(0)

0xc6b: GOTO 0xc29

0xc6c: PushEmpty(bool)
0xc6d: Call 0x1881

0xc6e: Pop(0)
0xc6f: IF (Stack[-1] == 0) GOTO 0xc7b; Pop(1)

0xc70: @ lshWaitForAnimEnd()
0xc71: Pop(0)
0xc72: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc73: IF (Stack[-1] == 0) GOTO 0xc75; Pop(1)

0xc74: GOTO 0xc7a

0xc75: PushEmpty(string)
0xc76: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc77: Call 0x1821

0xc78: Pop(1)
0xc79: GOTO 0xc70

0xc7a: GOTO 0xc89

0xc7b: Push("all")
0xc7c: Push("idle")
0xc7d: @ PlayAnimation(Stack[-2], Stack[-1])
0xc7e: Pop(2)
0xc7f: @ WaitForAnimEnd()
0xc80: Pop(0)
0xc81: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc82: IF (Stack[-1] == 0) GOTO 0xc84; Pop(1)

0xc83: GOTO 0xc89

0xc84: Push("all")
0xc85: Push("idle")
0xc86: @ PlayAnimation(Stack[-2], Stack[-1])
0xc87: Pop(2)
0xc88: GOTO 0xc7f

0xc89: Return(); Pop(0)

0xc8a: PushEmpty()
0xc8b: PushEmpty(bool)
0xc8c: Call 0x1881

0xc8d: Pop(0)
0xc8e: Pop(1); Push((bool) Stack[-1] == 0)
0xc8f: IF (Stack[-1] == 0) GOTO 0xc91; Pop(1)

0xc90: Return(); Pop(0)

0xc91: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc92: IF (Stack[-1] == 0) GOTO 0xc94; Pop(1)

0xc93: Return(); Pop(0)

0xc94: PushEmpty(string)
0xc95: Stack[-1] = Stack[-2]
0xc96: Call 0x1821

0xc97: Pop(1)
0xc98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc99: Return(); Pop(0)

0xc9a: PushEmpty()
0xc9b: Push((int) 1)
0xc9c: IF (Stack[-1] == 0) GOTO 0xda4; Pop(1)

0xc9d: PushEmpty()
0xc9e: Call 0x1833

0xc9f: Pop(0)
0xca0: Push((int) 8194)
0xca1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xca2: IF (Stack[-1] == 0) GOTO 0xcb2; Pop(1)

0xca3: PushEmpty(object, object)
0xca4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xca6: Call 0x18be

0xca7: Pop(2)
0xca8: PushEmpty(object, object)
0xca9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcab: Call 0x18ca

0xcac: Pop(2)
0xcad: PushEmpty(object, object)
0xcae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb0: Call 0x18aa

0xcb1: Pop(2)
0xcb2: Push((int) 8192)
0xcb3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcb4: IF (Stack[-1] == 0) GOTO 0xcba; Pop(1)

0xcb5: PushEmpty(object, object)
0xcb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb8: Call 0x18be

0xcb9: Pop(2)
0xcba: Push((int) 7630)
0xcbb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcbc: IF (Stack[-1] == 0) GOTO 0xcfc; Pop(1)

0xcbd: PushEmpty(string)
0xcbe: Stack[-1] = "Neutral"
0xcbf: Call 0xc8a

0xcc0: Pop(1)
0xcc1: Push((int) 6924)
0xcc2: @@ SetMessage(Stack[-1])
0xcc3: Pop(1)
0xcc4: @@ ClearReplies()
0xcc5: Pop(0)
0xcc6: PushEmpty(bool)
0xcc7: Stack[-1] = (bool) 0
0xcc8: PushEmpty(bool)
0xcc9: Stack[-1] = (bool) 0
0xcca: PushEmpty(bool, object)
0xccb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xccc: Call 0x1ab1

0xccd: Pop(1)
0xcce: IF (Stack[-1] == 0) GOTO 0xcd5; Pop(1)

0xccf: PushEmpty(bool, object)
0xcd0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcd1: Call 0x1ad5

0xcd2: Pop(1)
0xcd3: IF (Stack[-1] == 0) GOTO 0xcd5; Pop(1)

0xcd4: Stack[-1] = (bool) 1
0xcd5: IF (Stack[-1] == 0) GOTO 0xcdc; Pop(1)

0xcd6: PushEmpty(bool, object)
0xcd7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcd8: Call 0x1ac9

0xcd9: Pop(1)
0xcda: IF (Stack[-1] == 0) GOTO 0xcdc; Pop(1)

0xcdb: Stack[-1] = (bool) 1
0xcdc: IF (Stack[-1] == 0) GOTO 0xce2; Pop(1)

0xcdd: Push((int) 6925)
0xcde: Push((int) 7632)
0xcdf: Push((int) 7631)
0xce0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce1: Pop(3)
0xce2: Push((int) 7777)
0xce3: Push((int) -1)
0xce4: Push((int) 8579)
0xce5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce6: Pop(3)
0xce7: Return(); Pop(0)

0xce8: PushEmpty(string)
0xce9: Stack[-1] = "Neutral"
0xcea: Call 0xc8a

0xceb: Pop(1)
0xcec: Push((int) 9531)
0xced: @@ SetMessage(Stack[-1])
0xcee: Pop(1)
0xcef: @@ ClearReplies()
0xcf0: Pop(0)
0xcf1: Push((int) 9532)
0xcf2: Push((int) 10478)
0xcf3: Push((int) 10477)
0xcf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf5: Pop(3)
0xcf6: Push((int) 9539)
0xcf7: Push((int) 10478)
0xcf8: Push((int) 10484)
0xcf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfa: Pop(3)
0xcfb: Return(); Pop(0)

0xcfc: Push((int) 10478)
0xcfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcfe: IF (Stack[-1] == 0) GOTO 0xd13; Pop(1)

0xcff: PushEmpty(string)
0xd00: Stack[-1] = "Neutral"
0xd01: Call 0xc8a

0xd02: Pop(1)
0xd03: Push((int) 9533)
0xd04: @@ SetMessage(Stack[-1])
0xd05: Pop(1)
0xd06: @@ ClearReplies()
0xd07: Pop(0)
0xd08: Push((int) 9534)
0xd09: Push((int) -1)
0xd0a: Push((int) 10479)
0xd0b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0c: Pop(3)
0xd0d: Push((int) 9535)
0xd0e: Push((int) 10481)
0xd0f: Push((int) 10480)
0xd10: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd11: Pop(3)
0xd12: Return(); Pop(0)

0xd13: Push((int) 10481)
0xd14: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd15: IF (Stack[-1] == 0) GOTO 0xd2a; Pop(1)

0xd16: PushEmpty(string)
0xd17: Stack[-1] = "Neutral"
0xd18: Call 0xc8a

0xd19: Pop(1)
0xd1a: Push((int) 9536)
0xd1b: @@ SetMessage(Stack[-1])
0xd1c: Pop(1)
0xd1d: @@ ClearReplies()
0xd1e: Pop(0)
0xd1f: Push((int) 9537)
0xd20: Push((int) -1)
0xd21: Push((int) 10482)
0xd22: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd23: Pop(3)
0xd24: Push((int) 9538)
0xd25: Push((int) -1)
0xd26: Push((int) 10483)
0xd27: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd28: Pop(3)
0xd29: Return(); Pop(0)

0xd2a: Push((int) 7632)
0xd2b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2c: IF (Stack[-1] == 0) GOTO 0xd46; Pop(1)

0xd2d: PushEmpty(string)
0xd2e: Stack[-1] = "Neutral"
0xd2f: Call 0xc8a

0xd30: Pop(1)
0xd31: Push((int) 6926)
0xd32: @@ SetMessage(Stack[-1])
0xd33: Pop(1)
0xd34: @@ ClearReplies()
0xd35: Pop(0)
0xd36: Push((int) 6927)
0xd37: Push((int) 8188)
0xd38: Push((int) 7633)
0xd39: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3a: Pop(3)
0xd3b: PushEmpty(bool, object)
0xd3c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd3d: Call 0x1abd

0xd3e: Pop(1)
0xd3f: IF (Stack[-1] == 0) GOTO 0xd45; Pop(1)

0xd40: Push((int) 7420)
0xd41: Push((int) 8190)
0xd42: Push((int) 8189)
0xd43: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd44: Pop(3)
0xd45: Return(); Pop(0)

0xd46: Push((int) 8190)
0xd47: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd48: IF (Stack[-1] == 0) GOTO 0xd58; Pop(1)

0xd49: PushEmpty(string)
0xd4a: Stack[-1] = "Neutral"
0xd4b: Call 0xc8a

0xd4c: Pop(1)
0xd4d: Push((int) 7421)
0xd4e: @@ SetMessage(Stack[-1])
0xd4f: Pop(1)
0xd50: @@ ClearReplies()
0xd51: Pop(0)
0xd52: Push((int) 7426)
0xd53: Push((int) 8197)
0xd54: Push((int) 8195)
0xd55: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd56: Pop(3)
0xd57: Return(); Pop(0)

0xd58: Push((int) 8197)
0xd59: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5a: IF (Stack[-1] == 0) GOTO 0xd6a; Pop(1)

0xd5b: PushEmpty(string)
0xd5c: Stack[-1] = "Neutral"
0xd5d: Call 0xc8a

0xd5e: Pop(1)
0xd5f: Push((int) 7427)
0xd60: @@ SetMessage(Stack[-1])
0xd61: Pop(1)
0xd62: @@ ClearReplies()
0xd63: Pop(0)
0xd64: Push((int) 7428)
0xd65: Push((int) 8188)
0xd66: Push((int) 8198)
0xd67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd68: Pop(3)
0xd69: Return(); Pop(0)

0xd6a: Push((int) 8188)
0xd6b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd6c: IF (Stack[-1] == 0) GOTO 0xd86; Pop(1)

0xd6d: PushEmpty(object, object)
0xd6e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd6f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd70: Call 0x18c4

0xd71: Pop(2)
0xd72: PushEmpty(string)
0xd73: Stack[-1] = "Neutral"
0xd74: Call 0xc8a

0xd75: Pop(1)
0xd76: Push((int) 7419)
0xd77: @@ SetMessage(Stack[-1])
0xd78: Pop(1)
0xd79: @@ ClearReplies()
0xd7a: Pop(0)
0xd7b: Push((int) 7422)
0xd7c: Push((int) 8193)
0xd7d: Push((int) 8191)
0xd7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7f: Pop(3)
0xd80: Push((int) 7423)
0xd81: Push((int) -1)
0xd82: Push((int) 8192)
0xd83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd84: Pop(3)
0xd85: Return(); Pop(0)

0xd86: Push((int) 8193)
0xd87: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd88: IF (Stack[-1] == 0) GOTO 0xd98; Pop(1)

0xd89: PushEmpty(string)
0xd8a: Stack[-1] = "Neutral"
0xd8b: Call 0xc8a

0xd8c: Pop(1)
0xd8d: Push((int) 7424)
0xd8e: @@ SetMessage(Stack[-1])
0xd8f: Pop(1)
0xd90: @@ ClearReplies()
0xd91: Pop(0)
0xd92: Push((int) 7425)
0xd93: Push((int) -1)
0xd94: Push((int) 8194)
0xd95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd96: Pop(3)
0xd97: Return(); Pop(0)

0xd98: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd99: PushEmpty(bool)
0xd9a: Call 0x1881

0xd9b: Pop(0)
0xd9c: IF (Stack[-1] == 0) GOTO 0xda0; Pop(1)

0xd9d: @ lshStopAnimation()
0xd9e: Pop(0)
0xd9f: GOTO 0xda2

0xda0: @ StopAnimation()
0xda1: Pop(0)
0xda2: Return(); Pop(0)

0xda3: GOTO 0xc9b

0xda4: Return(); Pop(0)

0xda5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xda6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xda7: PushEmpty(bool, object)
0xda8: Stack[-1] = Stack[-11]
0xda9: Call 0x17e5

0xdaa: Pop(1)
0xdab: Pop(1); Push((bool) Stack[-1] == 0)
0xdac: IF (Stack[-1] == 0) GOTO 0xdaf; Pop(1)

0xdad: Stack[-10] = (int) -2
0xdae: Return(); Pop(8)

0xdaf: @ CreateDialog(Stack[-4])
0xdb0: Pop(0)
0xdb1: PushEmpty(int)
0xdb2: Call 0x187d

0xdb3: Pop(0)
0xdb4: @@ SetNPCName(Stack[-1])
0xdb5: Pop(1)
0xdb6: PushEmpty(string)
0xdb7: Call 0x187f

0xdb8: Pop(0)
0xdb9: @@ SetPhoto(Stack[-1])
0xdba: Pop(1)
0xdbb: PushEmpty(int)
0xdbc: Call 0x1cc0

0xdbd: Pop(0)
0xdbe: @@ SetPlayerName(Stack[-1])
0xdbf: Pop(1)
0xdc0: Stack[-2] = (int) -1
0xdc1: @ IsOverrideActive(Stack[-3])
0xdc2: Pop(0)
0xdc3: Push(Stack[-3])
0xdc4: IF (Stack[-1] == 0) GOTO 0xdc7; Pop(1)

0xdc5: Stack[-10] = (int) -2
0xdc6: Return(); Pop(8)

0xdc7: @ DoDialog(Stack[-4])
0xdc8: Pop(0)
0xdc9: PushEmpty(object, object)
0xdca: Stack[-2] = Stack[-11]
0xdcb: Stack[-1] = Stack[-6]
0xdcc: Push(-2, 4); TaskCall(11)
0xdcd: Call 0xde4

0xdce: Pop(-2, 4); TaskReturn
0xdcf: Pop(2)
0xdd0: @@ IsDialogEnd(Stack[-1])
0xdd1: Pop(0)
0xdd2: Pop(0); Push((bool) Stack[-1] == 0)
0xdd3: IF (Stack[-1] == 0) GOTO 0xdd9; Pop(1)

0xdd4: @ sync()
0xdd5: Pop(0)
0xdd6: @@ IsDialogEnd(Stack[-1])
0xdd7: Pop(0)
0xdd8: GOTO 0xdd2

0xdd9: PushEmpty(object)
0xdda: Stack[-1] = Stack[-10]
0xddb: Call 0x181d

0xddc: Pop(1)
0xddd: @ StopDialog(Stack[-4])
0xdde: Pop(0)
0xddf: @@ GetReturnValue(Stack[-2])
0xde0: Pop(0)
0xde1: Stack[-10] = Stack[-2]
0xde2: Return(); Pop(8)

0xde3: Stack[-4] = 0
0xde4: PushEmpty()
0xde5: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xde6: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xde7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xde8: Push((int) 1)
0xde9: IF (Stack[-1] == 0) GOTO 0xe26; Pop(1)

0xdea: PushEmpty(string)
0xdeb: Stack[-1] = "Neutral"
0xdec: Call 0xe44

0xded: Pop(1)
0xdee: Push((int) 10235)
0xdef: @@ SetMessage(Stack[-1])
0xdf0: Pop(1)
0xdf1: @@ ClearReplies()
0xdf2: Pop(0)
0xdf3: PushEmpty(bool)
0xdf4: Stack[-1] = (bool) 0
0xdf5: PushEmpty(bool, object)
0xdf6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdf7: Call 0x1b3a

0xdf8: Pop(1)
0xdf9: IF (Stack[-1] == 0) GOTO 0xe00; Pop(1)

0xdfa: PushEmpty(bool, object)
0xdfb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdfc: Call 0x1b46

0xdfd: Pop(1)
0xdfe: IF (Stack[-1] == 0) GOTO 0xe00; Pop(1)

0xdff: Stack[-1] = (bool) 1
0xe00: IF (Stack[-1] == 0) GOTO 0xe06; Pop(1)

0xe01: Push((int) 10236)
0xe02: Push((int) 11288)
0xe03: Push((int) 11286)
0xe04: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe05: Pop(3)
0xe06: PushEmpty(bool)
0xe07: Stack[-1] = (bool) 0
0xe08: PushEmpty(bool, object)
0xe09: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe0a: Call 0x1b4b

0xe0b: Pop(1)
0xe0c: IF (Stack[-1] == 0) GOTO 0xe13; Pop(1)

0xe0d: PushEmpty(bool, object)
0xe0e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe0f: Call 0x1b57

0xe10: Pop(1)
0xe11: IF (Stack[-1] == 0) GOTO 0xe13; Pop(1)

0xe12: Stack[-1] = (bool) 1
0xe13: IF (Stack[-1] == 0) GOTO 0xe19; Pop(1)

0xe14: Push((int) 10266)
0xe15: Push((int) 11321)
0xe16: Push((int) 11320)
0xe17: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe18: Pop(3)
0xe19: Push((int) 10237)
0xe1a: Push((int) 11089)
0xe1b: Push((int) 11287)
0xe1c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1d: Pop(3)
0xe1e: Push((int) 11382)
0xe1f: Push((int) -1)
0xe20: Push((int) 12578)
0xe21: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe22: Pop(3)
0xe23: GOTO 0xe26

0xe24: Return(); Pop(0)

0xe25: GOTO 0xde8

0xe26: PushEmpty(bool)
0xe27: Call 0x1881

0xe28: Pop(0)
0xe29: IF (Stack[-1] == 0) GOTO 0xe35; Pop(1)

0xe2a: @ lshWaitForAnimEnd()
0xe2b: Pop(0)
0xe2c: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe2d: IF (Stack[-1] == 0) GOTO 0xe2f; Pop(1)

0xe2e: GOTO 0xe34

0xe2f: PushEmpty(string)
0xe30: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe31: Call 0x1821

0xe32: Pop(1)
0xe33: GOTO 0xe2a

0xe34: GOTO 0xe43

0xe35: Push("all")
0xe36: Push("idle")
0xe37: @ PlayAnimation(Stack[-2], Stack[-1])
0xe38: Pop(2)
0xe39: @ WaitForAnimEnd()
0xe3a: Pop(0)
0xe3b: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe3c: IF (Stack[-1] == 0) GOTO 0xe3e; Pop(1)

0xe3d: GOTO 0xe43

0xe3e: Push("all")
0xe3f: Push("idle")
0xe40: @ PlayAnimation(Stack[-2], Stack[-1])
0xe41: Pop(2)
0xe42: GOTO 0xe39

0xe43: Return(); Pop(0)

0xe44: PushEmpty()
0xe45: PushEmpty(bool)
0xe46: Call 0x1881

0xe47: Pop(0)
0xe48: Pop(1); Push((bool) Stack[-1] == 0)
0xe49: IF (Stack[-1] == 0) GOTO 0xe4b; Pop(1)

0xe4a: Return(); Pop(0)

0xe4b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe4c: IF (Stack[-1] == 0) GOTO 0xe4e; Pop(1)

0xe4d: Return(); Pop(0)

0xe4e: PushEmpty(string)
0xe4f: Stack[-1] = Stack[-2]
0xe50: Call 0x1821

0xe51: Pop(1)
0xe52: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe53: Return(); Pop(0)

0xe54: PushEmpty()
0xe55: Push((int) 1)
0xe56: IF (Stack[-1] == 0) GOTO 0x1112; Pop(1)

0xe57: PushEmpty()
0xe58: Call 0x1833

0xe59: Pop(0)
0xe5a: Push((int) 11314)
0xe5b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe5c: IF (Stack[-1] == 0) GOTO 0xe6c; Pop(1)

0xe5d: PushEmpty(object, object)
0xe5e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe5f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe60: Call 0x194f

0xe61: Pop(2)
0xe62: PushEmpty(object, object)
0xe63: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe64: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe65: Call 0x1933

0xe66: Pop(2)
0xe67: PushEmpty(object, object)
0xe68: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe69: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe6a: Call 0x1951

0xe6b: Pop(2)
0xe6c: Push((int) 11315)
0xe6d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe6e: IF (Stack[-1] == 0) GOTO 0xe7e; Pop(1)

0xe6f: PushEmpty(object, object)
0xe70: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe71: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe72: Call 0x194f

0xe73: Pop(2)
0xe74: PushEmpty(object, object)
0xe75: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe76: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe77: Call 0x1933

0xe78: Pop(2)
0xe79: PushEmpty(object, object)
0xe7a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe7b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe7c: Call 0x1951

0xe7d: Pop(2)
0xe7e: Push((int) 11318)
0xe7f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe80: IF (Stack[-1] == 0) GOTO 0xe90; Pop(1)

0xe81: PushEmpty(object, object)
0xe82: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe83: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe84: Call 0x194f

0xe85: Pop(2)
0xe86: PushEmpty(object, object)
0xe87: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe88: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe89: Call 0x1933

0xe8a: Pop(2)
0xe8b: PushEmpty(object, object)
0xe8c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe8d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe8e: Call 0x1951

0xe8f: Pop(2)
0xe90: Push((int) 11340)
0xe91: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe92: IF (Stack[-1] == 0) GOTO 0xea2; Pop(1)

0xe93: PushEmpty(object, object)
0xe94: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe95: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe96: Call 0x1961

0xe97: Pop(2)
0xe98: PushEmpty(object, object)
0xe99: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe9a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe9b: Call 0x1963

0xe9c: Pop(2)
0xe9d: PushEmpty(object, object)
0xe9e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe9f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xea0: Call 0x190b

0xea1: Pop(2)
0xea2: Push((int) 11341)
0xea3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xea4: IF (Stack[-1] == 0) GOTO 0xeb4; Pop(1)

0xea5: PushEmpty(object, object)
0xea6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xea7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xea8: Call 0x1961

0xea9: Pop(2)
0xeaa: PushEmpty(object, object)
0xeab: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xead: Call 0x1963

0xeae: Pop(2)
0xeaf: PushEmpty(object, object)
0xeb0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeb2: Call 0x190b

0xeb3: Pop(2)
0xeb4: Push((int) 11335)
0xeb5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xeb6: IF (Stack[-1] == 0) GOTO 0xebc; Pop(1)

0xeb7: PushEmpty(object, object)
0xeb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeba: Call 0x1961

0xebb: Pop(2)
0xebc: Push((int) 11326)
0xebd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xebe: IF (Stack[-1] == 0) GOTO 0xec4; Pop(1)

0xebf: PushEmpty(object, object)
0xec0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xec1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec2: Call 0x1961

0xec3: Pop(2)
0xec4: Push((int) 11285)
0xec5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec6: IF (Stack[-1] == 0) GOTO 0xf01; Pop(1)

0xec7: PushEmpty(string)
0xec8: Stack[-1] = "Neutral"
0xec9: Call 0xe44

0xeca: Pop(1)
0xecb: Push((int) 10235)
0xecc: @@ SetMessage(Stack[-1])
0xecd: Pop(1)
0xece: @@ ClearReplies()
0xecf: Pop(0)
0xed0: PushEmpty(bool)
0xed1: Stack[-1] = (bool) 0
0xed2: PushEmpty(bool, object)
0xed3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xed4: Call 0x1b3a

0xed5: Pop(1)
0xed6: IF (Stack[-1] == 0) GOTO 0xedd; Pop(1)

0xed7: PushEmpty(bool, object)
0xed8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xed9: Call 0x1b46

0xeda: Pop(1)
0xedb: IF (Stack[-1] == 0) GOTO 0xedd; Pop(1)

0xedc: Stack[-1] = (bool) 1
0xedd: IF (Stack[-1] == 0) GOTO 0xee3; Pop(1)

0xede: Push((int) 10236)
0xedf: Push((int) 11288)
0xee0: Push((int) 11286)
0xee1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee2: Pop(3)
0xee3: PushEmpty(bool)
0xee4: Stack[-1] = (bool) 0
0xee5: PushEmpty(bool, object)
0xee6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xee7: Call 0x1b4b

0xee8: Pop(1)
0xee9: IF (Stack[-1] == 0) GOTO 0xef0; Pop(1)

0xeea: PushEmpty(bool, object)
0xeeb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xeec: Call 0x1b57

0xeed: Pop(1)
0xeee: IF (Stack[-1] == 0) GOTO 0xef0; Pop(1)

0xeef: Stack[-1] = (bool) 1
0xef0: IF (Stack[-1] == 0) GOTO 0xef6; Pop(1)

0xef1: Push((int) 10266)
0xef2: Push((int) 11321)
0xef3: Push((int) 11320)
0xef4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef5: Pop(3)
0xef6: Push((int) 10237)
0xef7: Push((int) 11089)
0xef8: Push((int) 11287)
0xef9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xefa: Pop(3)
0xefb: Push((int) 11382)
0xefc: Push((int) -1)
0xefd: Push((int) 12578)
0xefe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeff: Pop(3)
0xf00: Return(); Pop(0)

0xf01: Push((int) 11089)
0xf02: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf03: IF (Stack[-1] == 0) GOTO 0xf13; Pop(1)

0xf04: PushEmpty(string)
0xf05: Stack[-1] = "Neutral"
0xf06: Call 0xe44

0xf07: Pop(1)
0xf08: Push((int) 10063)
0xf09: @@ SetMessage(Stack[-1])
0xf0a: Pop(1)
0xf0b: @@ ClearReplies()
0xf0c: Pop(0)
0xf0d: Push((int) 10064)
0xf0e: Push((int) 11091)
0xf0f: Push((int) 11090)
0xf10: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf11: Pop(3)
0xf12: Return(); Pop(0)

0xf13: Push((int) 11091)
0xf14: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf15: IF (Stack[-1] == 0) GOTO 0xf2a; Pop(1)

0xf16: PushEmpty(string)
0xf17: Stack[-1] = "Neutral"
0xf18: Call 0xe44

0xf19: Pop(1)
0xf1a: Push((int) 10065)
0xf1b: @@ SetMessage(Stack[-1])
0xf1c: Pop(1)
0xf1d: @@ ClearReplies()
0xf1e: Pop(0)
0xf1f: Push((int) 10066)
0xf20: Push((int) 11093)
0xf21: Push((int) 11092)
0xf22: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf23: Pop(3)
0xf24: Push((int) 10070)
0xf25: Push((int) 11097)
0xf26: Push((int) 11096)
0xf27: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf28: Pop(3)
0xf29: Return(); Pop(0)

0xf2a: Push((int) 11097)
0xf2b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf2c: IF (Stack[-1] == 0) GOTO 0xf46; Pop(1)

0xf2d: PushEmpty(string)
0xf2e: Stack[-1] = "Neutral"
0xf2f: Call 0xe44

0xf30: Pop(1)
0xf31: Push((int) 10071)
0xf32: @@ SetMessage(Stack[-1])
0xf33: Pop(1)
0xf34: @@ ClearReplies()
0xf35: Pop(0)
0xf36: Push((int) 10072)
0xf37: Push((int) 11099)
0xf38: Push((int) 11098)
0xf39: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3a: Pop(3)
0xf3b: Push((int) 10080)
0xf3c: Push((int) -1)
0xf3d: Push((int) 11109)
0xf3e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3f: Pop(3)
0xf40: Push((int) 10242)
0xf41: Push((int) 11293)
0xf42: Push((int) 11292)
0xf43: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf44: Pop(3)
0xf45: Return(); Pop(0)

0xf46: Push((int) 11293)
0xf47: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf48: IF (Stack[-1] == 0) GOTO 0xf5d; Pop(1)

0xf49: PushEmpty(string)
0xf4a: Stack[-1] = "Neutral"
0xf4b: Call 0xe44

0xf4c: Pop(1)
0xf4d: Push((int) 10243)
0xf4e: @@ SetMessage(Stack[-1])
0xf4f: Pop(1)
0xf50: @@ ClearReplies()
0xf51: Pop(0)
0xf52: Push((int) 10244)
0xf53: Push((int) 11110)
0xf54: Push((int) 11294)
0xf55: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf56: Pop(3)
0xf57: Push((int) 10245)
0xf58: Push((int) 11290)
0xf59: Push((int) 11295)
0xf5a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5b: Pop(3)
0xf5c: Return(); Pop(0)

0xf5d: Push((int) 11110)
0xf5e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5f: IF (Stack[-1] == 0) GOTO 0xf74; Pop(1)

0xf60: PushEmpty(string)
0xf61: Stack[-1] = "Neutral"
0xf62: Call 0xe44

0xf63: Pop(1)
0xf64: Push((int) 10081)
0xf65: @@ SetMessage(Stack[-1])
0xf66: Pop(1)
0xf67: @@ ClearReplies()
0xf68: Pop(0)
0xf69: Push((int) 10239)
0xf6a: Push((int) 11290)
0xf6b: Push((int) 11289)
0xf6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6d: Pop(3)
0xf6e: Push((int) 10083)
0xf6f: Push((int) -1)
0xf70: Push((int) 11112)
0xf71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf72: Pop(3)
0xf73: Return(); Pop(0)

0xf74: Push((int) 11290)
0xf75: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf76: IF (Stack[-1] == 0) GOTO 0xf86; Pop(1)

0xf77: PushEmpty(string)
0xf78: Stack[-1] = "Neutral"
0xf79: Call 0xe44

0xf7a: Pop(1)
0xf7b: Push((int) 10240)
0xf7c: @@ SetMessage(Stack[-1])
0xf7d: Pop(1)
0xf7e: @@ ClearReplies()
0xf7f: Pop(0)
0xf80: Push((int) 10082)
0xf81: Push((int) -1)
0xf82: Push((int) 11111)
0xf83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf84: Pop(3)
0xf85: Return(); Pop(0)

0xf86: Push((int) 11099)
0xf87: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf88: IF (Stack[-1] == 0) GOTO 0xf9d; Pop(1)

0xf89: PushEmpty(string)
0xf8a: Stack[-1] = "Neutral"
0xf8b: Call 0xe44

0xf8c: Pop(1)
0xf8d: Push((int) 10073)
0xf8e: @@ SetMessage(Stack[-1])
0xf8f: Pop(1)
0xf90: @@ ClearReplies()
0xf91: Pop(0)
0xf92: Push((int) 10074)
0xf93: Push((int) 11101)
0xf94: Push((int) 11100)
0xf95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf96: Pop(3)
0xf97: Push((int) 10079)
0xf98: Push((int) 11101)
0xf99: Push((int) 11107)
0xf9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9b: Pop(3)
0xf9c: Return(); Pop(0)

0xf9d: Push((int) 11101)
0xf9e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf9f: IF (Stack[-1] == 0) GOTO 0xfb4; Pop(1)

0xfa0: PushEmpty(string)
0xfa1: Stack[-1] = "Neutral"
0xfa2: Call 0xe44

0xfa3: Pop(1)
0xfa4: Push((int) 10075)
0xfa5: @@ SetMessage(Stack[-1])
0xfa6: Pop(1)
0xfa7: @@ ClearReplies()
0xfa8: Pop(0)
0xfa9: Push((int) 10076)
0xfaa: Push((int) 11093)
0xfab: Push((int) 11102)
0xfac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfad: Pop(3)
0xfae: Push((int) 10078)
0xfaf: Push((int) -1)
0xfb0: Push((int) 11106)
0xfb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb2: Pop(3)
0xfb3: Return(); Pop(0)

0xfb4: Push((int) 11093)
0xfb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb6: IF (Stack[-1] == 0) GOTO 0xfcb; Pop(1)

0xfb7: PushEmpty(string)
0xfb8: Stack[-1] = "Neutral"
0xfb9: Call 0xe44

0xfba: Pop(1)
0xfbb: Push((int) 10067)
0xfbc: @@ SetMessage(Stack[-1])
0xfbd: Pop(1)
0xfbe: @@ ClearReplies()
0xfbf: Pop(0)
0xfc0: Push((int) 10068)
0xfc1: Push((int) -1)
0xfc2: Push((int) 11094)
0xfc3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc4: Pop(3)
0xfc5: Push((int) 10069)
0xfc6: Push((int) -1)
0xfc7: Push((int) 11095)
0xfc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc9: Pop(3)
0xfca: Return(); Pop(0)

0xfcb: Push((int) 11321)
0xfcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfcd: IF (Stack[-1] == 0) GOTO 0xfe2; Pop(1)

0xfce: PushEmpty(string)
0xfcf: Stack[-1] = "Neutral"
0xfd0: Call 0xe44

0xfd1: Pop(1)
0xfd2: Push((int) 10267)
0xfd3: @@ SetMessage(Stack[-1])
0xfd4: Pop(1)
0xfd5: @@ ClearReplies()
0xfd6: Pop(0)
0xfd7: Push((int) 10268)
0xfd8: Push((int) 11323)
0xfd9: Push((int) 11322)
0xfda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfdb: Pop(3)
0xfdc: Push((int) 10270)
0xfdd: Push((int) 11325)
0xfde: Push((int) 11324)
0xfdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe0: Pop(3)
0xfe1: Return(); Pop(0)

0xfe2: Push((int) 11325)
0xfe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe4: IF (Stack[-1] == 0) GOTO 0xff4; Pop(1)

0xfe5: PushEmpty(string)
0xfe6: Stack[-1] = "Neutral"
0xfe7: Call 0xe44

0xfe8: Pop(1)
0xfe9: Push((int) 10271)
0xfea: @@ SetMessage(Stack[-1])
0xfeb: Pop(1)
0xfec: @@ ClearReplies()
0xfed: Pop(0)
0xfee: Push((int) 10272)
0xfef: Push((int) -1)
0xff0: Push((int) 11326)
0xff1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff2: Pop(3)
0xff3: Return(); Pop(0)

0xff4: Push((int) 11323)
0xff5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff6: IF (Stack[-1] == 0) GOTO 0x100b; Pop(1)

0xff7: PushEmpty(string)
0xff8: Stack[-1] = "Neutral"
0xff9: Call 0xe44

0xffa: Pop(1)
0xffb: Push((int) 10269)
0xffc: @@ SetMessage(Stack[-1])
0xffd: Pop(1)
0xffe: @@ ClearReplies()
0xfff: Pop(0)
0x1000: Push((int) 10273)
0x1001: Push((int) 11328)
0x1002: Push((int) 11327)
0x1003: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1004: Pop(3)
0x1005: Push((int) 10275)
0x1006: Push((int) 11330)
0x1007: Push((int) 11329)
0x1008: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1009: Pop(3)
0x100a: Return(); Pop(0)

0x100b: Push((int) 11330)
0x100c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x100d: IF (Stack[-1] == 0) GOTO 0x101d; Pop(1)

0x100e: PushEmpty(string)
0x100f: Stack[-1] = "Neutral"
0x1010: Call 0xe44

0x1011: Pop(1)
0x1012: Push((int) 10276)
0x1013: @@ SetMessage(Stack[-1])
0x1014: Pop(1)
0x1015: @@ ClearReplies()
0x1016: Pop(0)
0x1017: Push((int) 10277)
0x1018: Push((int) 11332)
0x1019: Push((int) 11331)
0x101a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101b: Pop(3)
0x101c: Return(); Pop(0)

0x101d: Push((int) 11332)
0x101e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x101f: IF (Stack[-1] == 0) GOTO 0x1034; Pop(1)

0x1020: PushEmpty(string)
0x1021: Stack[-1] = "Neutral"
0x1022: Call 0xe44

0x1023: Pop(1)
0x1024: Push((int) 10278)
0x1025: @@ SetMessage(Stack[-1])
0x1026: Pop(1)
0x1027: @@ ClearReplies()
0x1028: Pop(0)
0x1029: Push((int) 10279)
0x102a: Push((int) 11328)
0x102b: Push((int) 11333)
0x102c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102d: Pop(3)
0x102e: Push((int) 10280)
0x102f: Push((int) -1)
0x1030: Push((int) 11335)
0x1031: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1032: Pop(3)
0x1033: Return(); Pop(0)

0x1034: Push((int) 11328)
0x1035: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1036: IF (Stack[-1] == 0) GOTO 0x1046; Pop(1)

0x1037: PushEmpty(string)
0x1038: Stack[-1] = "Neutral"
0x1039: Call 0xe44

0x103a: Pop(1)
0x103b: Push((int) 10274)
0x103c: @@ SetMessage(Stack[-1])
0x103d: Pop(1)
0x103e: @@ ClearReplies()
0x103f: Pop(0)
0x1040: Push((int) 10281)
0x1041: Push((int) 11337)
0x1042: Push((int) 11336)
0x1043: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1044: Pop(3)
0x1045: Return(); Pop(0)

0x1046: Push((int) 11337)
0x1047: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1048: IF (Stack[-1] == 0) GOTO 0x1058; Pop(1)

0x1049: PushEmpty(string)
0x104a: Stack[-1] = "Neutral"
0x104b: Call 0xe44

0x104c: Pop(1)
0x104d: Push((int) 10282)
0x104e: @@ SetMessage(Stack[-1])
0x104f: Pop(1)
0x1050: @@ ClearReplies()
0x1051: Pop(0)
0x1052: Push((int) 10283)
0x1053: Push((int) 11339)
0x1054: Push((int) 11338)
0x1055: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1056: Pop(3)
0x1057: Return(); Pop(0)

0x1058: Push((int) 11339)
0x1059: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105a: IF (Stack[-1] == 0) GOTO 0x106f; Pop(1)

0x105b: PushEmpty(string)
0x105c: Stack[-1] = "Neutral"
0x105d: Call 0xe44

0x105e: Pop(1)
0x105f: Push((int) 10284)
0x1060: @@ SetMessage(Stack[-1])
0x1061: Pop(1)
0x1062: @@ ClearReplies()
0x1063: Pop(0)
0x1064: Push((int) 10285)
0x1065: Push((int) -1)
0x1066: Push((int) 11340)
0x1067: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1068: Pop(3)
0x1069: Push((int) 10286)
0x106a: Push((int) -1)
0x106b: Push((int) 11341)
0x106c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106d: Pop(3)
0x106e: Return(); Pop(0)

0x106f: Push((int) 11288)
0x1070: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1071: IF (Stack[-1] == 0) GOTO 0x1086; Pop(1)

0x1072: PushEmpty(string)
0x1073: Stack[-1] = "Neutral"
0x1074: Call 0xe44

0x1075: Pop(1)
0x1076: Push((int) 10238)
0x1077: @@ SetMessage(Stack[-1])
0x1078: Pop(1)
0x1079: @@ ClearReplies()
0x107a: Pop(0)
0x107b: Push((int) 10246)
0x107c: Push((int) 11298)
0x107d: Push((int) 11297)
0x107e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107f: Pop(3)
0x1080: Push((int) 10253)
0x1081: Push((int) 11308)
0x1082: Push((int) 11304)
0x1083: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1084: Pop(3)
0x1085: Return(); Pop(0)

0x1086: Push((int) 11298)
0x1087: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1088: IF (Stack[-1] == 0) GOTO 0x109d; Pop(1)

0x1089: PushEmpty(string)
0x108a: Stack[-1] = "Neutral"
0x108b: Call 0xe44

0x108c: Pop(1)
0x108d: Push((int) 10247)
0x108e: @@ SetMessage(Stack[-1])
0x108f: Pop(1)
0x1090: @@ ClearReplies()
0x1091: Pop(0)
0x1092: Push((int) 10248)
0x1093: Push((int) 11300)
0x1094: Push((int) 11299)
0x1095: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1096: Pop(3)
0x1097: Push((int) 10258)
0x1098: Push((int) 11308)
0x1099: Push((int) 11309)
0x109a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109b: Pop(3)
0x109c: Return(); Pop(0)

0x109d: Push((int) 11300)
0x109e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x109f: IF (Stack[-1] == 0) GOTO 0x10b4; Pop(1)

0x10a0: PushEmpty(string)
0x10a1: Stack[-1] = "Neutral"
0x10a2: Call 0xe44

0x10a3: Pop(1)
0x10a4: Push((int) 10249)
0x10a5: @@ SetMessage(Stack[-1])
0x10a6: Pop(1)
0x10a7: @@ ClearReplies()
0x10a8: Pop(0)
0x10a9: Push((int) 10250)
0x10aa: Push((int) 11302)
0x10ab: Push((int) 11301)
0x10ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10ad: Pop(3)
0x10ae: Push((int) 10256)
0x10af: Push((int) 11302)
0x10b0: Push((int) 11307)
0x10b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b2: Pop(3)
0x10b3: Return(); Pop(0)

0x10b4: Push((int) 11302)
0x10b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b6: IF (Stack[-1] == 0) GOTO 0x10c6; Pop(1)

0x10b7: PushEmpty(string)
0x10b8: Stack[-1] = "Neutral"
0x10b9: Call 0xe44

0x10ba: Pop(1)
0x10bb: Push((int) 10251)
0x10bc: @@ SetMessage(Stack[-1])
0x10bd: Pop(1)
0x10be: @@ ClearReplies()
0x10bf: Pop(0)
0x10c0: Push((int) 10259)
0x10c1: Push((int) 11313)
0x10c2: Push((int) 11312)
0x10c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c4: Pop(3)
0x10c5: Return(); Pop(0)

0x10c6: Push((int) 11313)
0x10c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c8: IF (Stack[-1] == 0) GOTO 0x10dd; Pop(1)

0x10c9: PushEmpty(string)
0x10ca: Stack[-1] = "Neutral"
0x10cb: Call 0xe44

0x10cc: Pop(1)
0x10cd: Push((int) 10260)
0x10ce: @@ SetMessage(Stack[-1])
0x10cf: Pop(1)
0x10d0: @@ ClearReplies()
0x10d1: Pop(0)
0x10d2: Push((int) 10261)
0x10d3: Push((int) -1)
0x10d4: Push((int) 11314)
0x10d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d6: Pop(3)
0x10d7: Push((int) 10252)
0x10d8: Push((int) 11308)
0x10d9: Push((int) 11303)
0x10da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10db: Pop(3)
0x10dc: Return(); Pop(0)

0x10dd: Push((int) 11308)
0x10de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10df: IF (Stack[-1] == 0) GOTO 0x10f4; Pop(1)

0x10e0: PushEmpty(string)
0x10e1: Stack[-1] = "Neutral"
0x10e2: Call 0xe44

0x10e3: Pop(1)
0x10e4: Push((int) 10257)
0x10e5: @@ SetMessage(Stack[-1])
0x10e6: Pop(1)
0x10e7: @@ ClearReplies()
0x10e8: Pop(0)
0x10e9: Push((int) 10262)
0x10ea: Push((int) -1)
0x10eb: Push((int) 11315)
0x10ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10ed: Pop(3)
0x10ee: Push((int) 10263)
0x10ef: Push((int) 11317)
0x10f0: Push((int) 11316)
0x10f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f2: Pop(3)
0x10f3: Return(); Pop(0)

0x10f4: Push((int) 11317)
0x10f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f6: IF (Stack[-1] == 0) GOTO 0x1106; Pop(1)

0x10f7: PushEmpty(string)
0x10f8: Stack[-1] = "Neutral"
0x10f9: Call 0xe44

0x10fa: Pop(1)
0x10fb: Push((int) 10264)
0x10fc: @@ SetMessage(Stack[-1])
0x10fd: Pop(1)
0x10fe: @@ ClearReplies()
0x10ff: Pop(0)
0x1100: Push((int) 10265)
0x1101: Push((int) -1)
0x1102: Push((int) 11318)
0x1103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1104: Pop(3)
0x1105: Return(); Pop(0)

0x1106: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1107: PushEmpty(bool)
0x1108: Call 0x1881

0x1109: Pop(0)
0x110a: IF (Stack[-1] == 0) GOTO 0x110e; Pop(1)

0x110b: @ lshStopAnimation()
0x110c: Pop(0)
0x110d: GOTO 0x1110

0x110e: @ StopAnimation()
0x110f: Pop(0)
0x1110: Return(); Pop(0)

0x1111: GOTO 0xe55

0x1112: Return(); Pop(0)

0x1113: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1114: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1115: PushEmpty(bool, object)
0x1116: Stack[-1] = Stack[-11]
0x1117: Call 0x17e5

0x1118: Pop(1)
0x1119: Pop(1); Push((bool) Stack[-1] == 0)
0x111a: IF (Stack[-1] == 0) GOTO 0x111d; Pop(1)

0x111b: Stack[-10] = (int) -2
0x111c: Return(); Pop(8)

0x111d: @ CreateDialog(Stack[-4])
0x111e: Pop(0)
0x111f: PushEmpty(int)
0x1120: Call 0x187d

0x1121: Pop(0)
0x1122: @@ SetNPCName(Stack[-1])
0x1123: Pop(1)
0x1124: PushEmpty(string)
0x1125: Call 0x187f

0x1126: Pop(0)
0x1127: @@ SetPhoto(Stack[-1])
0x1128: Pop(1)
0x1129: PushEmpty(int)
0x112a: Call 0x1cc0

0x112b: Pop(0)
0x112c: @@ SetPlayerName(Stack[-1])
0x112d: Pop(1)
0x112e: Stack[-2] = (int) -1
0x112f: @ IsOverrideActive(Stack[-3])
0x1130: Pop(0)
0x1131: Push(Stack[-3])
0x1132: IF (Stack[-1] == 0) GOTO 0x1135; Pop(1)

0x1133: Stack[-10] = (int) -2
0x1134: Return(); Pop(8)

0x1135: @ DoDialog(Stack[-4])
0x1136: Pop(0)
0x1137: PushEmpty(object, object)
0x1138: Stack[-2] = Stack[-11]
0x1139: Stack[-1] = Stack[-6]
0x113a: Push(-2, 4); TaskCall(13)
0x113b: Call 0x1152

0x113c: Pop(-2, 4); TaskReturn
0x113d: Pop(2)
0x113e: @@ IsDialogEnd(Stack[-1])
0x113f: Pop(0)
0x1140: Pop(0); Push((bool) Stack[-1] == 0)
0x1141: IF (Stack[-1] == 0) GOTO 0x1147; Pop(1)

0x1142: @ sync()
0x1143: Pop(0)
0x1144: @@ IsDialogEnd(Stack[-1])
0x1145: Pop(0)
0x1146: GOTO 0x1140

0x1147: PushEmpty(object)
0x1148: Stack[-1] = Stack[-10]
0x1149: Call 0x181d

0x114a: Pop(1)
0x114b: @ StopDialog(Stack[-4])
0x114c: Pop(0)
0x114d: @@ GetReturnValue(Stack[-2])
0x114e: Pop(0)
0x114f: Stack[-10] = Stack[-2]
0x1150: Return(); Pop(8)

0x1151: Stack[-4] = 0
0x1152: PushEmpty()
0x1153: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1154: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1155: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1156: Push((int) 1)
0x1157: IF (Stack[-1] == 0) GOTO 0x11c2; Pop(1)

0x1158: PushEmpty(bool)
0x1159: Stack[-1] = (bool) 0
0x115a: PushEmpty(bool)
0x115b: Stack[-1] = (bool) 0
0x115c: PushEmpty(bool, object)
0x115d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x115e: Call 0x1bb0

0x115f: Pop(1)
0x1160: IF (Stack[-1] == 0) GOTO 0x1168; Pop(1)

0x1161: PushEmpty(bool, object)
0x1162: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1163: Call 0x1b74

0x1164: Pop(1)
0x1165: Pop(1); Push((bool) Stack[-1] == 0)
0x1166: IF (Stack[-1] == 0) GOTO 0x1168; Pop(1)

0x1167: Stack[-1] = (bool) 1
0x1168: IF (Stack[-1] == 0) GOTO 0x1170; Pop(1)

0x1169: PushEmpty(bool, object)
0x116a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x116b: Call 0x1b80

0x116c: Pop(1)
0x116d: Pop(1); Push((bool) Stack[-1] == 0)
0x116e: IF (Stack[-1] == 0) GOTO 0x1170; Pop(1)

0x116f: Stack[-1] = (bool) 1
0x1170: IF (Stack[-1] == 0) GOTO 0x118b; Pop(1)

0x1171: PushEmpty(string)
0x1172: Stack[-1] = "Neutral"
0x1173: Call 0x11e0

0x1174: Pop(1)
0x1175: Push((int) 12584)
0x1176: @@ SetMessage(Stack[-1])
0x1177: Pop(1)
0x1178: @@ ClearReplies()
0x1179: Pop(0)
0x117a: Push((int) 11771)
0x117b: Push((int) 12991)
0x117c: Push((int) 12979)
0x117d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117e: Pop(3)
0x117f: PushEmpty(bool, object)
0x1180: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1181: Call 0x1b68

0x1182: Pop(1)
0x1183: Pop(1); Push((bool) Stack[-1] == 0)
0x1184: IF (Stack[-1] == 0) GOTO 0x118a; Pop(1)

0x1185: Push((int) 12585)
0x1186: Push((int) 13755)
0x1187: Push((int) 13752)
0x1188: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1189: Pop(3)
0x118a: GOTO 0x11c2

0x118b: PushEmpty(string)
0x118c: Stack[-1] = "Neutral"
0x118d: Call 0x11e0

0x118e: Pop(1)
0x118f: Push((int) 11765)
0x1190: @@ SetMessage(Stack[-1])
0x1191: Pop(1)
0x1192: @@ ClearReplies()
0x1193: Pop(0)
0x1194: PushEmpty(bool)
0x1195: Stack[-1] = (bool) 0
0x1196: PushEmpty(bool, object)
0x1197: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1198: Call 0x1b8c

0x1199: Pop(1)
0x119a: IF (Stack[-1] == 0) GOTO 0x11a1; Pop(1)

0x119b: PushEmpty(bool, object)
0x119c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x119d: Call 0x1b98

0x119e: Pop(1)
0x119f: IF (Stack[-1] == 0) GOTO 0x11a1; Pop(1)

0x11a0: Stack[-1] = (bool) 1
0x11a1: IF (Stack[-1] == 0) GOTO 0x11a7; Pop(1)

0x11a2: Push((int) 11767)
0x11a3: Push((int) 12977)
0x11a4: Push((int) 12975)
0x11a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a6: Pop(3)
0x11a7: PushEmpty(bool)
0x11a8: Stack[-1] = (bool) 0
0x11a9: PushEmpty(bool, object)
0x11aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11ab: Call 0x1b74

0x11ac: Pop(1)
0x11ad: IF (Stack[-1] == 0) GOTO 0x11b4; Pop(1)

0x11ae: PushEmpty(bool, object)
0x11af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11b0: Call 0x1ba4

0x11b1: Pop(1)
0x11b2: IF (Stack[-1] == 0) GOTO 0x11b4; Pop(1)

0x11b3: Stack[-1] = (bool) 1
0x11b4: IF (Stack[-1] == 0) GOTO 0x11ba; Pop(1)

0x11b5: Push((int) 12570)
0x11b6: Push((int) 13740)
0x11b7: Push((int) 13739)
0x11b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b9: Pop(3)
0x11ba: Push((int) 11766)
0x11bb: Push((int) -1)
0x11bc: Push((int) 12974)
0x11bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11be: Pop(3)
0x11bf: GOTO 0x11c2

0x11c0: Return(); Pop(0)

0x11c1: GOTO 0x1156

0x11c2: PushEmpty(bool)
0x11c3: Call 0x1881

0x11c4: Pop(0)
0x11c5: IF (Stack[-1] == 0) GOTO 0x11d1; Pop(1)

0x11c6: @ lshWaitForAnimEnd()
0x11c7: Pop(0)
0x11c8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x11c9: IF (Stack[-1] == 0) GOTO 0x11cb; Pop(1)

0x11ca: GOTO 0x11d0

0x11cb: PushEmpty(string)
0x11cc: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x11cd: Call 0x1821

0x11ce: Pop(1)
0x11cf: GOTO 0x11c6

0x11d0: GOTO 0x11df

0x11d1: Push("all")
0x11d2: Push("idle")
0x11d3: @ PlayAnimation(Stack[-2], Stack[-1])
0x11d4: Pop(2)
0x11d5: @ WaitForAnimEnd()
0x11d6: Pop(0)
0x11d7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x11d8: IF (Stack[-1] == 0) GOTO 0x11da; Pop(1)

0x11d9: GOTO 0x11df

0x11da: Push("all")
0x11db: Push("idle")
0x11dc: @ PlayAnimation(Stack[-2], Stack[-1])
0x11dd: Pop(2)
0x11de: GOTO 0x11d5

0x11df: Return(); Pop(0)

0x11e0: PushEmpty()
0x11e1: PushEmpty(bool)
0x11e2: Call 0x1881

0x11e3: Pop(0)
0x11e4: Pop(1); Push((bool) Stack[-1] == 0)
0x11e5: IF (Stack[-1] == 0) GOTO 0x11e7; Pop(1)

0x11e6: Return(); Pop(0)

0x11e7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x11e8: IF (Stack[-1] == 0) GOTO 0x11ea; Pop(1)

0x11e9: Return(); Pop(0)

0x11ea: PushEmpty(string)
0x11eb: Stack[-1] = Stack[-2]
0x11ec: Call 0x1821

0x11ed: Pop(1)
0x11ee: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x11ef: Return(); Pop(0)

0x11f0: PushEmpty()
0x11f1: Push((int) 1)
0x11f2: IF (Stack[-1] == 0) GOTO 0x13c8; Pop(1)

0x11f3: PushEmpty()
0x11f4: Call 0x1833

0x11f5: Pop(0)
0x11f6: Push((int) 12998)
0x11f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11f8: IF (Stack[-1] == 0) GOTO 0x1203; Pop(1)

0x11f9: PushEmpty(object, object)
0x11fa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11fb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11fc: Call 0x196e

0x11fd: Pop(2)
0x11fe: PushEmpty(object, object)
0x11ff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1200: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1201: Call 0x19b7

0x1202: Pop(2)
0x1203: Push((int) 12999)
0x1204: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1205: IF (Stack[-1] == 0) GOTO 0x1210; Pop(1)

0x1206: PushEmpty(object, object)
0x1207: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1208: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1209: Call 0x19b7

0x120a: Pop(2)
0x120b: PushEmpty(object, object)
0x120c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x120d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x120e: Call 0x196e

0x120f: Pop(2)
0x1210: Push((int) 13752)
0x1211: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1212: IF (Stack[-1] == 0) GOTO 0x1218; Pop(1)

0x1213: PushEmpty(object, object)
0x1214: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1215: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1216: Call 0x19b7

0x1217: Pop(2)
0x1218: Push((int) 12989)
0x1219: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x121a: IF (Stack[-1] == 0) GOTO 0x122a; Pop(1)

0x121b: PushEmpty(object, object)
0x121c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x121d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x121e: Call 0x199e

0x121f: Pop(2)
0x1220: PushEmpty(object, object)
0x1221: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1222: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1223: Call 0x19a4

0x1224: Pop(2)
0x1225: PushEmpty(object, object)
0x1226: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1227: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1228: Call 0x18aa

0x1229: Pop(2)
0x122a: Push((int) 12990)
0x122b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x122c: IF (Stack[-1] == 0) GOTO 0x123c; Pop(1)

0x122d: PushEmpty(object, object)
0x122e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x122f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1230: Call 0x199e

0x1231: Pop(2)
0x1232: PushEmpty(object, object)
0x1233: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1234: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1235: Call 0x19a4

0x1236: Pop(2)
0x1237: PushEmpty(object, object)
0x1238: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1239: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x123a: Call 0x18aa

0x123b: Pop(2)
0x123c: Push((int) 13741)
0x123d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x123e: IF (Stack[-1] == 0) GOTO 0x124e; Pop(1)

0x123f: PushEmpty(object, object)
0x1240: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1241: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1242: Call 0x19af

0x1243: Pop(2)
0x1244: PushEmpty(object, object)
0x1245: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1246: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1247: Call 0x18bc

0x1248: Pop(2)
0x1249: PushEmpty(object, object)
0x124a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x124b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x124c: Call 0x19b5

0x124d: Pop(2)
0x124e: Push((int) 13751)
0x124f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1250: IF (Stack[-1] == 0) GOTO 0x12b9; Pop(1)

0x1251: PushEmpty(bool)
0x1252: Stack[-1] = (bool) 0
0x1253: PushEmpty(bool)
0x1254: Stack[-1] = (bool) 0
0x1255: PushEmpty(bool, object)
0x1256: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1257: Call 0x1bb0

0x1258: Pop(1)
0x1259: IF (Stack[-1] == 0) GOTO 0x1261; Pop(1)

0x125a: PushEmpty(bool, object)
0x125b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x125c: Call 0x1b74

0x125d: Pop(1)
0x125e: Pop(1); Push((bool) Stack[-1] == 0)
0x125f: IF (Stack[-1] == 0) GOTO 0x1261; Pop(1)

0x1260: Stack[-1] = (bool) 1
0x1261: IF (Stack[-1] == 0) GOTO 0x1269; Pop(1)

0x1262: PushEmpty(bool, object)
0x1263: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1264: Call 0x1b80

0x1265: Pop(1)
0x1266: Pop(1); Push((bool) Stack[-1] == 0)
0x1267: IF (Stack[-1] == 0) GOTO 0x1269; Pop(1)

0x1268: Stack[-1] = (bool) 1
0x1269: IF (Stack[-1] == 0) GOTO 0x1284; Pop(1)

0x126a: PushEmpty(string)
0x126b: Stack[-1] = "Neutral"
0x126c: Call 0x11e0

0x126d: Pop(1)
0x126e: Push((int) 12584)
0x126f: @@ SetMessage(Stack[-1])
0x1270: Pop(1)
0x1271: @@ ClearReplies()
0x1272: Pop(0)
0x1273: Push((int) 11771)
0x1274: Push((int) 12991)
0x1275: Push((int) 12979)
0x1276: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1277: Pop(3)
0x1278: PushEmpty(bool, object)
0x1279: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x127a: Call 0x1b68

0x127b: Pop(1)
0x127c: Pop(1); Push((bool) Stack[-1] == 0)
0x127d: IF (Stack[-1] == 0) GOTO 0x1283; Pop(1)

0x127e: Push((int) 12585)
0x127f: Push((int) 13755)
0x1280: Push((int) 13752)
0x1281: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1282: Pop(3)
0x1283: Return(); Pop(0)

0x1284: PushEmpty(string)
0x1285: Stack[-1] = "Neutral"
0x1286: Call 0x11e0

0x1287: Pop(1)
0x1288: Push((int) 11765)
0x1289: @@ SetMessage(Stack[-1])
0x128a: Pop(1)
0x128b: @@ ClearReplies()
0x128c: Pop(0)
0x128d: PushEmpty(bool)
0x128e: Stack[-1] = (bool) 0
0x128f: PushEmpty(bool, object)
0x1290: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1291: Call 0x1b8c

0x1292: Pop(1)
0x1293: IF (Stack[-1] == 0) GOTO 0x129a; Pop(1)

0x1294: PushEmpty(bool, object)
0x1295: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1296: Call 0x1b98

0x1297: Pop(1)
0x1298: IF (Stack[-1] == 0) GOTO 0x129a; Pop(1)

0x1299: Stack[-1] = (bool) 1
0x129a: IF (Stack[-1] == 0) GOTO 0x12a0; Pop(1)

0x129b: Push((int) 11767)
0x129c: Push((int) 12977)
0x129d: Push((int) 12975)
0x129e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129f: Pop(3)
0x12a0: PushEmpty(bool)
0x12a1: Stack[-1] = (bool) 0
0x12a2: PushEmpty(bool, object)
0x12a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12a4: Call 0x1b74

0x12a5: Pop(1)
0x12a6: IF (Stack[-1] == 0) GOTO 0x12ad; Pop(1)

0x12a7: PushEmpty(bool, object)
0x12a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12a9: Call 0x1ba4

0x12aa: Pop(1)
0x12ab: IF (Stack[-1] == 0) GOTO 0x12ad; Pop(1)

0x12ac: Stack[-1] = (bool) 1
0x12ad: IF (Stack[-1] == 0) GOTO 0x12b3; Pop(1)

0x12ae: Push((int) 12570)
0x12af: Push((int) 13740)
0x12b0: Push((int) 13739)
0x12b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b2: Pop(3)
0x12b3: Push((int) 11766)
0x12b4: Push((int) -1)
0x12b5: Push((int) 12974)
0x12b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b7: Pop(3)
0x12b8: Return(); Pop(0)

0x12b9: Push((int) 13740)
0x12ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12bb: IF (Stack[-1] == 0) GOTO 0x12cb; Pop(1)

0x12bc: PushEmpty(string)
0x12bd: Stack[-1] = "Neutral"
0x12be: Call 0x11e0

0x12bf: Pop(1)
0x12c0: Push((int) 12571)
0x12c1: @@ SetMessage(Stack[-1])
0x12c2: Pop(1)
0x12c3: @@ ClearReplies()
0x12c4: Pop(0)
0x12c5: Push((int) 12592)
0x12c6: Push((int) 13763)
0x12c7: Push((int) 13762)
0x12c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c9: Pop(3)
0x12ca: Return(); Pop(0)

0x12cb: Push((int) 13763)
0x12cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12cd: IF (Stack[-1] == 0) GOTO 0x12dd; Pop(1)

0x12ce: PushEmpty(string)
0x12cf: Stack[-1] = "Neutral"
0x12d0: Call 0x11e0

0x12d1: Pop(1)
0x12d2: Push((int) 12593)
0x12d3: @@ SetMessage(Stack[-1])
0x12d4: Pop(1)
0x12d5: @@ ClearReplies()
0x12d6: Pop(0)
0x12d7: Push((int) 12594)
0x12d8: Push((int) 13765)
0x12d9: Push((int) 13764)
0x12da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12db: Pop(3)
0x12dc: Return(); Pop(0)

0x12dd: Push((int) 13765)
0x12de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12df: IF (Stack[-1] == 0) GOTO 0x12ef; Pop(1)

0x12e0: PushEmpty(string)
0x12e1: Stack[-1] = "Neutral"
0x12e2: Call 0x11e0

0x12e3: Pop(1)
0x12e4: Push((int) 12595)
0x12e5: @@ SetMessage(Stack[-1])
0x12e6: Pop(1)
0x12e7: @@ ClearReplies()
0x12e8: Pop(0)
0x12e9: Push((int) 12572)
0x12ea: Push((int) -1)
0x12eb: Push((int) 13741)
0x12ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12ed: Pop(3)
0x12ee: Return(); Pop(0)

0x12ef: Push((int) 12977)
0x12f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12f1: IF (Stack[-1] == 0) GOTO 0x1306; Pop(1)

0x12f2: PushEmpty(string)
0x12f3: Stack[-1] = "Neutral"
0x12f4: Call 0x11e0

0x12f5: Pop(1)
0x12f6: Push((int) 11769)
0x12f7: @@ SetMessage(Stack[-1])
0x12f8: Pop(1)
0x12f9: @@ ClearReplies()
0x12fa: Pop(0)
0x12fb: Push((int) 11770)
0x12fc: Push((int) 12981)
0x12fd: Push((int) 12978)
0x12fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12ff: Pop(3)
0x1300: Push((int) 11772)
0x1301: Push((int) 12981)
0x1302: Push((int) 12980)
0x1303: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1304: Pop(3)
0x1305: Return(); Pop(0)

0x1306: Push((int) 12981)
0x1307: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1308: IF (Stack[-1] == 0) GOTO 0x1318; Pop(1)

0x1309: PushEmpty(string)
0x130a: Stack[-1] = "Neutral"
0x130b: Call 0x11e0

0x130c: Pop(1)
0x130d: Push((int) 11773)
0x130e: @@ SetMessage(Stack[-1])
0x130f: Pop(1)
0x1310: @@ ClearReplies()
0x1311: Pop(0)
0x1312: Push((int) 11774)
0x1313: Push((int) 12984)
0x1314: Push((int) 12983)
0x1315: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1316: Pop(3)
0x1317: Return(); Pop(0)

0x1318: Push((int) 12984)
0x1319: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131a: IF (Stack[-1] == 0) GOTO 0x132f; Pop(1)

0x131b: PushEmpty(string)
0x131c: Stack[-1] = "Neutral"
0x131d: Call 0x11e0

0x131e: Pop(1)
0x131f: Push((int) 11775)
0x1320: @@ SetMessage(Stack[-1])
0x1321: Pop(1)
0x1322: @@ ClearReplies()
0x1323: Pop(0)
0x1324: Push((int) 11776)
0x1325: Push((int) 12987)
0x1326: Push((int) 12985)
0x1327: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1328: Pop(3)
0x1329: Push((int) 11777)
0x132a: Push((int) 12987)
0x132b: Push((int) 12986)
0x132c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132d: Pop(3)
0x132e: Return(); Pop(0)

0x132f: Push((int) 12987)
0x1330: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1331: IF (Stack[-1] == 0) GOTO 0x1346; Pop(1)

0x1332: PushEmpty(string)
0x1333: Stack[-1] = "Neutral"
0x1334: Call 0x11e0

0x1335: Pop(1)
0x1336: Push((int) 11778)
0x1337: @@ SetMessage(Stack[-1])
0x1338: Pop(1)
0x1339: @@ ClearReplies()
0x133a: Pop(0)
0x133b: Push((int) 11779)
0x133c: Push((int) -1)
0x133d: Push((int) 12989)
0x133e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133f: Pop(3)
0x1340: Push((int) 11780)
0x1341: Push((int) -1)
0x1342: Push((int) 12990)
0x1343: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1344: Pop(3)
0x1345: Return(); Pop(0)

0x1346: Push((int) 13755)
0x1347: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1348: IF (Stack[-1] == 0) GOTO 0x1358; Pop(1)

0x1349: PushEmpty(string)
0x134a: Stack[-1] = "Neutral"
0x134b: Call 0x11e0

0x134c: Pop(1)
0x134d: Push((int) 12587)
0x134e: @@ SetMessage(Stack[-1])
0x134f: Pop(1)
0x1350: @@ ClearReplies()
0x1351: Pop(0)
0x1352: Push((int) 12588)
0x1353: Push((int) 12993)
0x1354: Push((int) 13756)
0x1355: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1356: Pop(3)
0x1357: Return(); Pop(0)

0x1358: Push((int) 12991)
0x1359: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x135a: IF (Stack[-1] == 0) GOTO 0x136a; Pop(1)

0x135b: PushEmpty(string)
0x135c: Stack[-1] = "Neutral"
0x135d: Call 0x11e0

0x135e: Pop(1)
0x135f: Push((int) 11781)
0x1360: @@ SetMessage(Stack[-1])
0x1361: Pop(1)
0x1362: @@ ClearReplies()
0x1363: Pop(0)
0x1364: Push((int) 11782)
0x1365: Push((int) 12993)
0x1366: Push((int) 12992)
0x1367: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1368: Pop(3)
0x1369: Return(); Pop(0)

0x136a: Push((int) 12993)
0x136b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x136c: IF (Stack[-1] == 0) GOTO 0x1381; Pop(1)

0x136d: PushEmpty(string)
0x136e: Stack[-1] = "Neutral"
0x136f: Call 0x11e0

0x1370: Pop(1)
0x1371: Push((int) 11783)
0x1372: @@ SetMessage(Stack[-1])
0x1373: Pop(1)
0x1374: @@ ClearReplies()
0x1375: Pop(0)
0x1376: Push((int) 12589)
0x1377: Push((int) 12995)
0x1378: Push((int) 13758)
0x1379: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x137a: Pop(3)
0x137b: Push((int) 11784)
0x137c: Push((int) 13760)
0x137d: Push((int) 12994)
0x137e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x137f: Pop(3)
0x1380: Return(); Pop(0)

0x1381: Push((int) 12995)
0x1382: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1383: IF (Stack[-1] == 0) GOTO 0x1393; Pop(1)

0x1384: PushEmpty(string)
0x1385: Stack[-1] = "Neutral"
0x1386: Call 0x11e0

0x1387: Pop(1)
0x1388: Push((int) 11785)
0x1389: @@ SetMessage(Stack[-1])
0x138a: Pop(1)
0x138b: @@ ClearReplies()
0x138c: Pop(0)
0x138d: Push((int) 12590)
0x138e: Push((int) 13760)
0x138f: Push((int) 13759)
0x1390: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1391: Pop(3)
0x1392: Return(); Pop(0)

0x1393: Push((int) 13760)
0x1394: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1395: IF (Stack[-1] == 0) GOTO 0x13a5; Pop(1)

0x1396: PushEmpty(string)
0x1397: Stack[-1] = "Neutral"
0x1398: Call 0x11e0

0x1399: Pop(1)
0x139a: Push((int) 12591)
0x139b: @@ SetMessage(Stack[-1])
0x139c: Pop(1)
0x139d: @@ ClearReplies()
0x139e: Pop(0)
0x139f: Push((int) 11786)
0x13a0: Push((int) 12997)
0x13a1: Push((int) 12996)
0x13a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a3: Pop(3)
0x13a4: Return(); Pop(0)

0x13a5: Push((int) 12997)
0x13a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a7: IF (Stack[-1] == 0) GOTO 0x13bc; Pop(1)

0x13a8: PushEmpty(string)
0x13a9: Stack[-1] = "Neutral"
0x13aa: Call 0x11e0

0x13ab: Pop(1)
0x13ac: Push((int) 11787)
0x13ad: @@ SetMessage(Stack[-1])
0x13ae: Pop(1)
0x13af: @@ ClearReplies()
0x13b0: Pop(0)
0x13b1: Push((int) 11788)
0x13b2: Push((int) -1)
0x13b3: Push((int) 12998)
0x13b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b5: Pop(3)
0x13b6: Push((int) 11789)
0x13b7: Push((int) -1)
0x13b8: Push((int) 12999)
0x13b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13ba: Pop(3)
0x13bb: Return(); Pop(0)

0x13bc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x13bd: PushEmpty(bool)
0x13be: Call 0x1881

0x13bf: Pop(0)
0x13c0: IF (Stack[-1] == 0) GOTO 0x13c4; Pop(1)

0x13c1: @ lshStopAnimation()
0x13c2: Pop(0)
0x13c3: GOTO 0x13c6

0x13c4: @ StopAnimation()
0x13c5: Pop(0)
0x13c6: Return(); Pop(0)

0x13c7: GOTO 0x11f1

0x13c8: Return(); Pop(0)

0x13c9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x13ca: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x13cb: PushEmpty(bool, object)
0x13cc: Stack[-1] = Stack[-11]
0x13cd: Call 0x17e5

0x13ce: Pop(1)
0x13cf: Pop(1); Push((bool) Stack[-1] == 0)
0x13d0: IF (Stack[-1] == 0) GOTO 0x13d3; Pop(1)

0x13d1: Stack[-10] = (int) -2
0x13d2: Return(); Pop(8)

0x13d3: @ CreateDialog(Stack[-4])
0x13d4: Pop(0)
0x13d5: PushEmpty(int)
0x13d6: Call 0x187d

0x13d7: Pop(0)
0x13d8: @@ SetNPCName(Stack[-1])
0x13d9: Pop(1)
0x13da: PushEmpty(string)
0x13db: Call 0x187f

0x13dc: Pop(0)
0x13dd: @@ SetPhoto(Stack[-1])
0x13de: Pop(1)
0x13df: PushEmpty(int)
0x13e0: Call 0x1cc0

0x13e1: Pop(0)
0x13e2: @@ SetPlayerName(Stack[-1])
0x13e3: Pop(1)
0x13e4: Stack[-2] = (int) -1
0x13e5: @ IsOverrideActive(Stack[-3])
0x13e6: Pop(0)
0x13e7: Push(Stack[-3])
0x13e8: IF (Stack[-1] == 0) GOTO 0x13eb; Pop(1)

0x13e9: Stack[-10] = (int) -2
0x13ea: Return(); Pop(8)

0x13eb: @ DoDialog(Stack[-4])
0x13ec: Pop(0)
0x13ed: PushEmpty(object, object)
0x13ee: Stack[-2] = Stack[-11]
0x13ef: Stack[-1] = Stack[-6]
0x13f0: Push(-2, 4); TaskCall(15)
0x13f1: Call 0x1408

0x13f2: Pop(-2, 4); TaskReturn
0x13f3: Pop(2)
0x13f4: @@ IsDialogEnd(Stack[-1])
0x13f5: Pop(0)
0x13f6: Pop(0); Push((bool) Stack[-1] == 0)
0x13f7: IF (Stack[-1] == 0) GOTO 0x13fd; Pop(1)

0x13f8: @ sync()
0x13f9: Pop(0)
0x13fa: @@ IsDialogEnd(Stack[-1])
0x13fb: Pop(0)
0x13fc: GOTO 0x13f6

0x13fd: PushEmpty(object)
0x13fe: Stack[-1] = Stack[-10]
0x13ff: Call 0x181d

0x1400: Pop(1)
0x1401: @ StopDialog(Stack[-4])
0x1402: Pop(0)
0x1403: @@ GetReturnValue(Stack[-2])
0x1404: Pop(0)
0x1405: Stack[-10] = Stack[-2]
0x1406: Return(); Pop(8)

0x1407: Stack[-4] = 0
0x1408: PushEmpty()
0x1409: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x140a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x140b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x140c: Push((int) 1)
0x140d: IF (Stack[-1] == 0) GOTO 0x1446; Pop(1)

0x140e: PushEmpty(bool)
0x140f: Stack[-1] = (bool) 0
0x1410: PushEmpty(bool, object)
0x1411: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1412: Call 0x1bec

0x1413: Pop(1)
0x1414: IF (Stack[-1] == 0) GOTO 0x141b; Pop(1)

0x1415: PushEmpty(bool, object)
0x1416: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1417: Call 0x1be0

0x1418: Pop(1)
0x1419: IF (Stack[-1] == 0) GOTO 0x141b; Pop(1)

0x141a: Stack[-1] = (bool) 1
0x141b: IF (Stack[-1] == 0) GOTO 0x1435; Pop(1)

0x141c: PushEmpty(object, object)
0x141d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x141e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x141f: Call 0x19f8

0x1420: Pop(2)
0x1421: PushEmpty(string)
0x1422: Stack[-1] = "Neutral"
0x1423: Call 0x1464

0x1424: Pop(1)
0x1425: Push((int) 12275)
0x1426: @@ SetMessage(Stack[-1])
0x1427: Pop(1)
0x1428: @@ ClearReplies()
0x1429: Pop(0)
0x142a: Push((int) 12276)
0x142b: Push((int) 13435)
0x142c: Push((int) 13433)
0x142d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142e: Pop(3)
0x142f: Push((int) 12277)
0x1430: Push((int) 13435)
0x1431: Push((int) 13434)
0x1432: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1433: Pop(3)
0x1434: GOTO 0x1446

0x1435: PushEmpty(string)
0x1436: Stack[-1] = "Neutral"
0x1437: Call 0x1464

0x1438: Pop(1)
0x1439: Push((int) 13779)
0x143a: @@ SetMessage(Stack[-1])
0x143b: Pop(1)
0x143c: @@ ClearReplies()
0x143d: Pop(0)
0x143e: Push((int) 13780)
0x143f: Push((int) -1)
0x1440: Push((int) 15016)
0x1441: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1442: Pop(3)
0x1443: GOTO 0x1446

0x1444: Return(); Pop(0)

0x1445: GOTO 0x140c

0x1446: PushEmpty(bool)
0x1447: Call 0x1881

0x1448: Pop(0)
0x1449: IF (Stack[-1] == 0) GOTO 0x1455; Pop(1)

0x144a: @ lshWaitForAnimEnd()
0x144b: Pop(0)
0x144c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x144d: IF (Stack[-1] == 0) GOTO 0x144f; Pop(1)

0x144e: GOTO 0x1454

0x144f: PushEmpty(string)
0x1450: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1451: Call 0x1821

0x1452: Pop(1)
0x1453: GOTO 0x144a

0x1454: GOTO 0x1463

0x1455: Push("all")
0x1456: Push("idle")
0x1457: @ PlayAnimation(Stack[-2], Stack[-1])
0x1458: Pop(2)
0x1459: @ WaitForAnimEnd()
0x145a: Pop(0)
0x145b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x145c: IF (Stack[-1] == 0) GOTO 0x145e; Pop(1)

0x145d: GOTO 0x1463

0x145e: Push("all")
0x145f: Push("idle")
0x1460: @ PlayAnimation(Stack[-2], Stack[-1])
0x1461: Pop(2)
0x1462: GOTO 0x1459

0x1463: Return(); Pop(0)

0x1464: PushEmpty()
0x1465: PushEmpty(bool)
0x1466: Call 0x1881

0x1467: Pop(0)
0x1468: Pop(1); Push((bool) Stack[-1] == 0)
0x1469: IF (Stack[-1] == 0) GOTO 0x146b; Pop(1)

0x146a: Return(); Pop(0)

0x146b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x146c: IF (Stack[-1] == 0) GOTO 0x146e; Pop(1)

0x146d: Return(); Pop(0)

0x146e: PushEmpty(string)
0x146f: Stack[-1] = Stack[-2]
0x1470: Call 0x1821

0x1471: Pop(1)
0x1472: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1473: Return(); Pop(0)

0x1474: PushEmpty()
0x1475: Push((int) 1)
0x1476: IF (Stack[-1] == 0) GOTO 0x1542; Pop(1)

0x1477: PushEmpty()
0x1478: Call 0x1833

0x1479: Pop(0)
0x147a: Push((int) 13432)
0x147b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x147c: IF (Stack[-1] == 0) GOTO 0x14b3; Pop(1)

0x147d: PushEmpty(bool)
0x147e: Stack[-1] = (bool) 0
0x147f: PushEmpty(bool, object)
0x1480: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1481: Call 0x1bec

0x1482: Pop(1)
0x1483: IF (Stack[-1] == 0) GOTO 0x148a; Pop(1)

0x1484: PushEmpty(bool, object)
0x1485: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1486: Call 0x1be0

0x1487: Pop(1)
0x1488: IF (Stack[-1] == 0) GOTO 0x148a; Pop(1)

0x1489: Stack[-1] = (bool) 1
0x148a: IF (Stack[-1] == 0) GOTO 0x14a4; Pop(1)

0x148b: PushEmpty(object, object)
0x148c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x148d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x148e: Call 0x19f8

0x148f: Pop(2)
0x1490: PushEmpty(string)
0x1491: Stack[-1] = "Neutral"
0x1492: Call 0x1464

0x1493: Pop(1)
0x1494: Push((int) 12275)
0x1495: @@ SetMessage(Stack[-1])
0x1496: Pop(1)
0x1497: @@ ClearReplies()
0x1498: Pop(0)
0x1499: Push((int) 12276)
0x149a: Push((int) 13435)
0x149b: Push((int) 13433)
0x149c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x149d: Pop(3)
0x149e: Push((int) 12277)
0x149f: Push((int) 13435)
0x14a0: Push((int) 13434)
0x14a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a2: Pop(3)
0x14a3: Return(); Pop(0)

0x14a4: PushEmpty(string)
0x14a5: Stack[-1] = "Neutral"
0x14a6: Call 0x1464

0x14a7: Pop(1)
0x14a8: Push((int) 13779)
0x14a9: @@ SetMessage(Stack[-1])
0x14aa: Pop(1)
0x14ab: @@ ClearReplies()
0x14ac: Pop(0)
0x14ad: Push((int) 13780)
0x14ae: Push((int) -1)
0x14af: Push((int) 15016)
0x14b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b1: Pop(3)
0x14b2: Return(); Pop(0)

0x14b3: Push((int) 13435)
0x14b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14b5: IF (Stack[-1] == 0) GOTO 0x14ca; Pop(1)

0x14b6: PushEmpty(string)
0x14b7: Stack[-1] = "Neutral"
0x14b8: Call 0x1464

0x14b9: Pop(1)
0x14ba: Push((int) 12278)
0x14bb: @@ SetMessage(Stack[-1])
0x14bc: Pop(1)
0x14bd: @@ ClearReplies()
0x14be: Pop(0)
0x14bf: Push((int) 12279)
0x14c0: Push((int) 13439)
0x14c1: Push((int) 13437)
0x14c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c3: Pop(3)
0x14c4: Push((int) 12280)
0x14c5: Push((int) 13439)
0x14c6: Push((int) 13438)
0x14c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c8: Pop(3)
0x14c9: Return(); Pop(0)

0x14ca: Push((int) 13439)
0x14cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14cc: IF (Stack[-1] == 0) GOTO 0x14dc; Pop(1)

0x14cd: PushEmpty(string)
0x14ce: Stack[-1] = "Neutral"
0x14cf: Call 0x1464

0x14d0: Pop(1)
0x14d1: Push((int) 12281)
0x14d2: @@ SetMessage(Stack[-1])
0x14d3: Pop(1)
0x14d4: @@ ClearReplies()
0x14d5: Pop(0)
0x14d6: Push((int) 12282)
0x14d7: Push((int) 13442)
0x14d8: Push((int) 13441)
0x14d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14da: Pop(3)
0x14db: Return(); Pop(0)

0x14dc: Push((int) 13442)
0x14dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14de: IF (Stack[-1] == 0) GOTO 0x14ee; Pop(1)

0x14df: PushEmpty(string)
0x14e0: Stack[-1] = "Neutral"
0x14e1: Call 0x1464

0x14e2: Pop(1)
0x14e3: Push((int) 12283)
0x14e4: @@ SetMessage(Stack[-1])
0x14e5: Pop(1)
0x14e6: @@ ClearReplies()
0x14e7: Pop(0)
0x14e8: Push((int) 12284)
0x14e9: Push((int) 13444)
0x14ea: Push((int) 13443)
0x14eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14ec: Pop(3)
0x14ed: Return(); Pop(0)

0x14ee: Push((int) 13444)
0x14ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f0: IF (Stack[-1] == 0) GOTO 0x1500; Pop(1)

0x14f1: PushEmpty(string)
0x14f2: Stack[-1] = "Neutral"
0x14f3: Call 0x1464

0x14f4: Pop(1)
0x14f5: Push((int) 12285)
0x14f6: @@ SetMessage(Stack[-1])
0x14f7: Pop(1)
0x14f8: @@ ClearReplies()
0x14f9: Pop(0)
0x14fa: Push((int) 12286)
0x14fb: Push((int) 13446)
0x14fc: Push((int) 13445)
0x14fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14fe: Pop(3)
0x14ff: Return(); Pop(0)

0x1500: Push((int) 13446)
0x1501: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1502: IF (Stack[-1] == 0) GOTO 0x1512; Pop(1)

0x1503: PushEmpty(string)
0x1504: Stack[-1] = "Neutral"
0x1505: Call 0x1464

0x1506: Pop(1)
0x1507: Push((int) 12287)
0x1508: @@ SetMessage(Stack[-1])
0x1509: Pop(1)
0x150a: @@ ClearReplies()
0x150b: Pop(0)
0x150c: Push((int) 12288)
0x150d: Push((int) 13448)
0x150e: Push((int) 13447)
0x150f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1510: Pop(3)
0x1511: Return(); Pop(0)

0x1512: Push((int) 13448)
0x1513: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1514: IF (Stack[-1] == 0) GOTO 0x1524; Pop(1)

0x1515: PushEmpty(string)
0x1516: Stack[-1] = "Neutral"
0x1517: Call 0x1464

0x1518: Pop(1)
0x1519: Push((int) 12289)
0x151a: @@ SetMessage(Stack[-1])
0x151b: Pop(1)
0x151c: @@ ClearReplies()
0x151d: Pop(0)
0x151e: Push((int) 12290)
0x151f: Push((int) 13450)
0x1520: Push((int) 13449)
0x1521: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1522: Pop(3)
0x1523: Return(); Pop(0)

0x1524: Push((int) 13450)
0x1525: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1526: IF (Stack[-1] == 0) GOTO 0x1536; Pop(1)

0x1527: PushEmpty(string)
0x1528: Stack[-1] = "Neutral"
0x1529: Call 0x1464

0x152a: Pop(1)
0x152b: Push((int) 12291)
0x152c: @@ SetMessage(Stack[-1])
0x152d: Pop(1)
0x152e: @@ ClearReplies()
0x152f: Pop(0)
0x1530: Push((int) 12292)
0x1531: Push((int) -1)
0x1532: Push((int) 13451)
0x1533: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1534: Pop(3)
0x1535: Return(); Pop(0)

0x1536: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1537: PushEmpty(bool)
0x1538: Call 0x1881

0x1539: Pop(0)
0x153a: IF (Stack[-1] == 0) GOTO 0x153e; Pop(1)

0x153b: @ lshStopAnimation()
0x153c: Pop(0)
0x153d: GOTO 0x1540

0x153e: @ StopAnimation()
0x153f: Pop(0)
0x1540: Return(); Pop(0)

0x1541: GOTO 0x1475

0x1542: Return(); Pop(0)

0x1543: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1544: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1545: PushEmpty(bool, object)
0x1546: Stack[-1] = Stack[-11]
0x1547: Call 0x17e5

0x1548: Pop(1)
0x1549: Pop(1); Push((bool) Stack[-1] == 0)
0x154a: IF (Stack[-1] == 0) GOTO 0x154d; Pop(1)

0x154b: Stack[-10] = (int) -2
0x154c: Return(); Pop(8)

0x154d: @ CreateDialog(Stack[-4])
0x154e: Pop(0)
0x154f: PushEmpty(int)
0x1550: Call 0x187d

0x1551: Pop(0)
0x1552: @@ SetNPCName(Stack[-1])
0x1553: Pop(1)
0x1554: PushEmpty(string)
0x1555: Call 0x187f

0x1556: Pop(0)
0x1557: @@ SetPhoto(Stack[-1])
0x1558: Pop(1)
0x1559: PushEmpty(int)
0x155a: Call 0x1cc0

0x155b: Pop(0)
0x155c: @@ SetPlayerName(Stack[-1])
0x155d: Pop(1)
0x155e: Stack[-2] = (int) -1
0x155f: @ IsOverrideActive(Stack[-3])
0x1560: Pop(0)
0x1561: Push(Stack[-3])
0x1562: IF (Stack[-1] == 0) GOTO 0x1565; Pop(1)

0x1563: Stack[-10] = (int) -2
0x1564: Return(); Pop(8)

0x1565: @ DoDialog(Stack[-4])
0x1566: Pop(0)
0x1567: PushEmpty(object, object)
0x1568: Stack[-2] = Stack[-11]
0x1569: Stack[-1] = Stack[-6]
0x156a: Push(-2, 4); TaskCall(17)
0x156b: Call 0x1582

0x156c: Pop(-2, 4); TaskReturn
0x156d: Pop(2)
0x156e: @@ IsDialogEnd(Stack[-1])
0x156f: Pop(0)
0x1570: Pop(0); Push((bool) Stack[-1] == 0)
0x1571: IF (Stack[-1] == 0) GOTO 0x1577; Pop(1)

0x1572: @ sync()
0x1573: Pop(0)
0x1574: @@ IsDialogEnd(Stack[-1])
0x1575: Pop(0)
0x1576: GOTO 0x1570

0x1577: PushEmpty(object)
0x1578: Stack[-1] = Stack[-10]
0x1579: Call 0x181d

0x157a: Pop(1)
0x157b: @ StopDialog(Stack[-4])
0x157c: Pop(0)
0x157d: @@ GetReturnValue(Stack[-2])
0x157e: Pop(0)
0x157f: Stack[-10] = Stack[-2]
0x1580: Return(); Pop(8)

0x1581: Stack[-4] = 0
0x1582: PushEmpty()
0x1583: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1584: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1585: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1586: Push((int) 1)
0x1587: IF (Stack[-1] == 0) GOTO 0x15cf; Pop(1)

0x1588: PushEmpty(bool, object)
0x1589: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x158a: Call 0x1bf8

0x158b: Pop(1)
0x158c: IF (Stack[-1] == 0) GOTO 0x15a1; Pop(1)

0x158d: PushEmpty(object, object)
0x158e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x158f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1590: Call 0x19fe

0x1591: Pop(2)
0x1592: PushEmpty(string)
0x1593: Stack[-1] = "Neutral"
0x1594: Call 0x15ed

0x1595: Pop(1)
0x1596: Push((int) 13994)
0x1597: @@ SetMessage(Stack[-1])
0x1598: Pop(1)
0x1599: @@ ClearReplies()
0x159a: Pop(0)
0x159b: Push((int) 13995)
0x159c: Push((int) 15231)
0x159d: Push((int) 15230)
0x159e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x159f: Pop(3)
0x15a0: GOTO 0x15cf

0x15a1: PushEmpty(string)
0x15a2: Stack[-1] = "Neutral"
0x15a3: Call 0x15ed

0x15a4: Pop(1)
0x15a5: Push((int) 14011)
0x15a6: @@ SetMessage(Stack[-1])
0x15a7: Pop(1)
0x15a8: @@ ClearReplies()
0x15a9: Pop(0)
0x15aa: PushEmpty(bool, object)
0x15ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15ac: Call 0x1c40

0x15ad: Pop(1)
0x15ae: IF (Stack[-1] == 0) GOTO 0x15b4; Pop(1)

0x15af: Push((int) 14012)
0x15b0: Push((int) 15248)
0x15b1: Push((int) 15247)
0x15b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15b3: Pop(3)
0x15b4: PushEmpty(bool)
0x15b5: Stack[-1] = (bool) 0
0x15b6: PushEmpty(bool, object)
0x15b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15b8: Call 0x1c10

0x15b9: Pop(1)
0x15ba: IF (Stack[-1] == 0) GOTO 0x15c1; Pop(1)

0x15bb: PushEmpty(bool, object)
0x15bc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15bd: Call 0x1c1c

0x15be: Pop(1)
0x15bf: IF (Stack[-1] == 0) GOTO 0x15c1; Pop(1)

0x15c0: Stack[-1] = (bool) 1
0x15c1: IF (Stack[-1] == 0) GOTO 0x15c7; Pop(1)

0x15c2: Push((int) 14029)
0x15c3: Push((int) 15265)
0x15c4: Push((int) 15264)
0x15c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c6: Pop(3)
0x15c7: Push((int) 14039)
0x15c8: Push((int) -1)
0x15c9: Push((int) 15274)
0x15ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15cb: Pop(3)
0x15cc: GOTO 0x15cf

0x15cd: Return(); Pop(0)

0x15ce: GOTO 0x1586

0x15cf: PushEmpty(bool)
0x15d0: Call 0x1881

0x15d1: Pop(0)
0x15d2: IF (Stack[-1] == 0) GOTO 0x15de; Pop(1)

0x15d3: @ lshWaitForAnimEnd()
0x15d4: Pop(0)
0x15d5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x15d6: IF (Stack[-1] == 0) GOTO 0x15d8; Pop(1)

0x15d7: GOTO 0x15dd

0x15d8: PushEmpty(string)
0x15d9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x15da: Call 0x1821

0x15db: Pop(1)
0x15dc: GOTO 0x15d3

0x15dd: GOTO 0x15ec

0x15de: Push("all")
0x15df: Push("idle")
0x15e0: @ PlayAnimation(Stack[-2], Stack[-1])
0x15e1: Pop(2)
0x15e2: @ WaitForAnimEnd()
0x15e3: Pop(0)
0x15e4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x15e5: IF (Stack[-1] == 0) GOTO 0x15e7; Pop(1)

0x15e6: GOTO 0x15ec

0x15e7: Push("all")
0x15e8: Push("idle")
0x15e9: @ PlayAnimation(Stack[-2], Stack[-1])
0x15ea: Pop(2)
0x15eb: GOTO 0x15e2

0x15ec: Return(); Pop(0)

0x15ed: PushEmpty()
0x15ee: PushEmpty(bool)
0x15ef: Call 0x1881

0x15f0: Pop(0)
0x15f1: Pop(1); Push((bool) Stack[-1] == 0)
0x15f2: IF (Stack[-1] == 0) GOTO 0x15f4; Pop(1)

0x15f3: Return(); Pop(0)

0x15f4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x15f5: IF (Stack[-1] == 0) GOTO 0x15f7; Pop(1)

0x15f6: Return(); Pop(0)

0x15f7: PushEmpty(string)
0x15f8: Stack[-1] = Stack[-2]
0x15f9: Call 0x1821

0x15fa: Pop(1)
0x15fb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x15fc: Return(); Pop(0)

0x15fd: PushEmpty()
0x15fe: Push((int) 1)
0x15ff: IF (Stack[-1] == 0) GOTO 0x17cc; Pop(1)

0x1600: PushEmpty()
0x1601: Call 0x1833

0x1602: Pop(0)
0x1603: Push((int) 15244)
0x1604: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1605: IF (Stack[-1] == 0) GOTO 0x160b; Pop(1)

0x1606: PushEmpty(object, object)
0x1607: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1608: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1609: Call 0x1a04

0x160a: Pop(2)
0x160b: Push((int) 15245)
0x160c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x160d: IF (Stack[-1] == 0) GOTO 0x1613; Pop(1)

0x160e: PushEmpty(object, object)
0x160f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1610: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1611: Call 0x1a04

0x1612: Pop(2)
0x1613: Push((int) 15247)
0x1614: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1615: IF (Stack[-1] == 0) GOTO 0x161b; Pop(1)

0x1616: PushEmpty(object, object)
0x1617: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1618: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1619: Call 0x1a27

0x161a: Pop(2)
0x161b: Push((int) 15264)
0x161c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x161d: IF (Stack[-1] == 0) GOTO 0x1623; Pop(1)

0x161e: PushEmpty(object, object)
0x161f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1620: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1621: Call 0x1a15

0x1622: Pop(2)
0x1623: Push((int) 15229)
0x1624: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1625: IF (Stack[-1] == 0) GOTO 0x166b; Pop(1)

0x1626: PushEmpty(bool, object)
0x1627: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1628: Call 0x1bf8

0x1629: Pop(1)
0x162a: IF (Stack[-1] == 0) GOTO 0x163f; Pop(1)

0x162b: PushEmpty(object, object)
0x162c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x162d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x162e: Call 0x19fe

0x162f: Pop(2)
0x1630: PushEmpty(string)
0x1631: Stack[-1] = "Neutral"
0x1632: Call 0x15ed

0x1633: Pop(1)
0x1634: Push((int) 13994)
0x1635: @@ SetMessage(Stack[-1])
0x1636: Pop(1)
0x1637: @@ ClearReplies()
0x1638: Pop(0)
0x1639: Push((int) 13995)
0x163a: Push((int) 15231)
0x163b: Push((int) 15230)
0x163c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163d: Pop(3)
0x163e: Return(); Pop(0)

0x163f: PushEmpty(string)
0x1640: Stack[-1] = "Neutral"
0x1641: Call 0x15ed

0x1642: Pop(1)
0x1643: Push((int) 14011)
0x1644: @@ SetMessage(Stack[-1])
0x1645: Pop(1)
0x1646: @@ ClearReplies()
0x1647: Pop(0)
0x1648: PushEmpty(bool, object)
0x1649: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x164a: Call 0x1c40

0x164b: Pop(1)
0x164c: IF (Stack[-1] == 0) GOTO 0x1652; Pop(1)

0x164d: Push((int) 14012)
0x164e: Push((int) 15248)
0x164f: Push((int) 15247)
0x1650: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1651: Pop(3)
0x1652: PushEmpty(bool)
0x1653: Stack[-1] = (bool) 0
0x1654: PushEmpty(bool, object)
0x1655: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1656: Call 0x1c10

0x1657: Pop(1)
0x1658: IF (Stack[-1] == 0) GOTO 0x165f; Pop(1)

0x1659: PushEmpty(bool, object)
0x165a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x165b: Call 0x1c1c

0x165c: Pop(1)
0x165d: IF (Stack[-1] == 0) GOTO 0x165f; Pop(1)

0x165e: Stack[-1] = (bool) 1
0x165f: IF (Stack[-1] == 0) GOTO 0x1665; Pop(1)

0x1660: Push((int) 14029)
0x1661: Push((int) 15265)
0x1662: Push((int) 15264)
0x1663: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1664: Pop(3)
0x1665: Push((int) 14039)
0x1666: Push((int) -1)
0x1667: Push((int) 15274)
0x1668: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1669: Pop(3)
0x166a: Return(); Pop(0)

0x166b: Push((int) 15265)
0x166c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x166d: IF (Stack[-1] == 0) GOTO 0x167d; Pop(1)

0x166e: PushEmpty(string)
0x166f: Stack[-1] = "Neutral"
0x1670: Call 0x15ed

0x1671: Pop(1)
0x1672: Push((int) 14030)
0x1673: @@ SetMessage(Stack[-1])
0x1674: Pop(1)
0x1675: @@ ClearReplies()
0x1676: Pop(0)
0x1677: Push((int) 14031)
0x1678: Push((int) 15267)
0x1679: Push((int) 15266)
0x167a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167b: Pop(3)
0x167c: Return(); Pop(0)

0x167d: Push((int) 15267)
0x167e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167f: IF (Stack[-1] == 0) GOTO 0x1699; Pop(1)

0x1680: PushEmpty(string)
0x1681: Stack[-1] = "Neutral"
0x1682: Call 0x15ed

0x1683: Pop(1)
0x1684: Push((int) 14032)
0x1685: @@ SetMessage(Stack[-1])
0x1686: Pop(1)
0x1687: @@ ClearReplies()
0x1688: Pop(0)
0x1689: PushEmpty(bool, object)
0x168a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x168b: Call 0x1c28

0x168c: Pop(1)
0x168d: IF (Stack[-1] == 0) GOTO 0x1693; Pop(1)

0x168e: Push((int) 14033)
0x168f: Push((int) 15269)
0x1690: Push((int) 15268)
0x1691: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1692: Pop(3)
0x1693: Push((int) 14038)
0x1694: Push((int) -1)
0x1695: Push((int) 15273)
0x1696: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1697: Pop(3)
0x1698: Return(); Pop(0)

0x1699: Push((int) 15269)
0x169a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x169b: IF (Stack[-1] == 0) GOTO 0x16b5; Pop(1)

0x169c: PushEmpty(string)
0x169d: Stack[-1] = "Neutral"
0x169e: Call 0x15ed

0x169f: Pop(1)
0x16a0: Push((int) 14034)
0x16a1: @@ SetMessage(Stack[-1])
0x16a2: Pop(1)
0x16a3: @@ ClearReplies()
0x16a4: Pop(0)
0x16a5: Push((int) 14035)
0x16a6: Push((int) -1)
0x16a7: Push((int) 15270)
0x16a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a9: Pop(3)
0x16aa: Push((int) 14036)
0x16ab: Push((int) -1)
0x16ac: Push((int) 15271)
0x16ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16ae: Pop(3)
0x16af: Push((int) 14037)
0x16b0: Push((int) -1)
0x16b1: Push((int) 15272)
0x16b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b3: Pop(3)
0x16b4: Return(); Pop(0)

0x16b5: Push((int) 15248)
0x16b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16b7: IF (Stack[-1] == 0) GOTO 0x16cc; Pop(1)

0x16b8: PushEmpty(string)
0x16b9: Stack[-1] = "Neutral"
0x16ba: Call 0x15ed

0x16bb: Pop(1)
0x16bc: Push((int) 14013)
0x16bd: @@ SetMessage(Stack[-1])
0x16be: Pop(1)
0x16bf: @@ ClearReplies()
0x16c0: Pop(0)
0x16c1: Push((int) 14014)
0x16c2: Push((int) 15250)
0x16c3: Push((int) 15249)
0x16c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c5: Pop(3)
0x16c6: Push((int) 14024)
0x16c7: Push((int) 15260)
0x16c8: Push((int) 15259)
0x16c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16ca: Pop(3)
0x16cb: Return(); Pop(0)

0x16cc: Push((int) 15260)
0x16cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16ce: IF (Stack[-1] == 0) GOTO 0x16de; Pop(1)

0x16cf: PushEmpty(string)
0x16d0: Stack[-1] = "Neutral"
0x16d1: Call 0x15ed

0x16d2: Pop(1)
0x16d3: Push((int) 14025)
0x16d4: @@ SetMessage(Stack[-1])
0x16d5: Pop(1)
0x16d6: @@ ClearReplies()
0x16d7: Pop(0)
0x16d8: Push((int) 14026)
0x16d9: Push((int) 15262)
0x16da: Push((int) 15261)
0x16db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16dc: Pop(3)
0x16dd: Return(); Pop(0)

0x16de: Push((int) 15262)
0x16df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16e0: IF (Stack[-1] == 0) GOTO 0x16f0; Pop(1)

0x16e1: PushEmpty(string)
0x16e2: Stack[-1] = "Neutral"
0x16e3: Call 0x15ed

0x16e4: Pop(1)
0x16e5: Push((int) 14027)
0x16e6: @@ SetMessage(Stack[-1])
0x16e7: Pop(1)
0x16e8: @@ ClearReplies()
0x16e9: Pop(0)
0x16ea: Push((int) 14028)
0x16eb: Push((int) -1)
0x16ec: Push((int) 15263)
0x16ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16ee: Pop(3)
0x16ef: Return(); Pop(0)

0x16f0: Push((int) 15250)
0x16f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16f2: IF (Stack[-1] == 0) GOTO 0x1702; Pop(1)

0x16f3: PushEmpty(string)
0x16f4: Stack[-1] = "Neutral"
0x16f5: Call 0x15ed

0x16f6: Pop(1)
0x16f7: Push((int) 14015)
0x16f8: @@ SetMessage(Stack[-1])
0x16f9: Pop(1)
0x16fa: @@ ClearReplies()
0x16fb: Pop(0)
0x16fc: Push((int) 14016)
0x16fd: Push((int) 15252)
0x16fe: Push((int) 15251)
0x16ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1700: Pop(3)
0x1701: Return(); Pop(0)

0x1702: Push((int) 15252)
0x1703: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1704: IF (Stack[-1] == 0) GOTO 0x1719; Pop(1)

0x1705: PushEmpty(string)
0x1706: Stack[-1] = "Neutral"
0x1707: Call 0x15ed

0x1708: Pop(1)
0x1709: Push((int) 14017)
0x170a: @@ SetMessage(Stack[-1])
0x170b: Pop(1)
0x170c: @@ ClearReplies()
0x170d: Pop(0)
0x170e: Push((int) 14018)
0x170f: Push((int) -1)
0x1710: Push((int) 15253)
0x1711: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1712: Pop(3)
0x1713: Push((int) 14019)
0x1714: Push((int) 15255)
0x1715: Push((int) 15254)
0x1716: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1717: Pop(3)
0x1718: Return(); Pop(0)

0x1719: Push((int) 15255)
0x171a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x171b: IF (Stack[-1] == 0) GOTO 0x172b; Pop(1)

0x171c: PushEmpty(string)
0x171d: Stack[-1] = "Neutral"
0x171e: Call 0x15ed

0x171f: Pop(1)
0x1720: Push((int) 14020)
0x1721: @@ SetMessage(Stack[-1])
0x1722: Pop(1)
0x1723: @@ ClearReplies()
0x1724: Pop(0)
0x1725: Push((int) 14021)
0x1726: Push((int) 15257)
0x1727: Push((int) 15256)
0x1728: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1729: Pop(3)
0x172a: Return(); Pop(0)

0x172b: Push((int) 15257)
0x172c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x172d: IF (Stack[-1] == 0) GOTO 0x173d; Pop(1)

0x172e: PushEmpty(string)
0x172f: Stack[-1] = "Neutral"
0x1730: Call 0x15ed

0x1731: Pop(1)
0x1732: Push((int) 14022)
0x1733: @@ SetMessage(Stack[-1])
0x1734: Pop(1)
0x1735: @@ ClearReplies()
0x1736: Pop(0)
0x1737: Push((int) 14023)
0x1738: Push((int) -1)
0x1739: Push((int) 15258)
0x173a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173b: Pop(3)
0x173c: Return(); Pop(0)

0x173d: Push((int) 15231)
0x173e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x173f: IF (Stack[-1] == 0) GOTO 0x174f; Pop(1)

0x1740: PushEmpty(string)
0x1741: Stack[-1] = "Neutral"
0x1742: Call 0x15ed

0x1743: Pop(1)
0x1744: Push((int) 13996)
0x1745: @@ SetMessage(Stack[-1])
0x1746: Pop(1)
0x1747: @@ ClearReplies()
0x1748: Pop(0)
0x1749: Push((int) 13997)
0x174a: Push((int) 15233)
0x174b: Push((int) 15232)
0x174c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174d: Pop(3)
0x174e: Return(); Pop(0)

0x174f: Push((int) 15233)
0x1750: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1751: IF (Stack[-1] == 0) GOTO 0x1761; Pop(1)

0x1752: PushEmpty(string)
0x1753: Stack[-1] = "Neutral"
0x1754: Call 0x15ed

0x1755: Pop(1)
0x1756: Push((int) 13998)
0x1757: @@ SetMessage(Stack[-1])
0x1758: Pop(1)
0x1759: @@ ClearReplies()
0x175a: Pop(0)
0x175b: Push((int) 13999)
0x175c: Push((int) 15235)
0x175d: Push((int) 15234)
0x175e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175f: Pop(3)
0x1760: Return(); Pop(0)

0x1761: Push((int) 15235)
0x1762: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1763: IF (Stack[-1] == 0) GOTO 0x1773; Pop(1)

0x1764: PushEmpty(string)
0x1765: Stack[-1] = "Neutral"
0x1766: Call 0x15ed

0x1767: Pop(1)
0x1768: Push((int) 14000)
0x1769: @@ SetMessage(Stack[-1])
0x176a: Pop(1)
0x176b: @@ ClearReplies()
0x176c: Pop(0)
0x176d: Push((int) 14001)
0x176e: Push((int) 15237)
0x176f: Push((int) 15236)
0x1770: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1771: Pop(3)
0x1772: Return(); Pop(0)

0x1773: Push((int) 15237)
0x1774: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1775: IF (Stack[-1] == 0) GOTO 0x1785; Pop(1)

0x1776: PushEmpty(string)
0x1777: Stack[-1] = "Neutral"
0x1778: Call 0x15ed

0x1779: Pop(1)
0x177a: Push((int) 14002)
0x177b: @@ SetMessage(Stack[-1])
0x177c: Pop(1)
0x177d: @@ ClearReplies()
0x177e: Pop(0)
0x177f: Push((int) 14003)
0x1780: Push((int) 15239)
0x1781: Push((int) 15238)
0x1782: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1783: Pop(3)
0x1784: Return(); Pop(0)

0x1785: Push((int) 15239)
0x1786: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1787: IF (Stack[-1] == 0) GOTO 0x1797; Pop(1)

0x1788: PushEmpty(string)
0x1789: Stack[-1] = "Neutral"
0x178a: Call 0x15ed

0x178b: Pop(1)
0x178c: Push((int) 14004)
0x178d: @@ SetMessage(Stack[-1])
0x178e: Pop(1)
0x178f: @@ ClearReplies()
0x1790: Pop(0)
0x1791: Push((int) 14005)
0x1792: Push((int) 15241)
0x1793: Push((int) 15240)
0x1794: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1795: Pop(3)
0x1796: Return(); Pop(0)

0x1797: Push((int) 15241)
0x1798: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1799: IF (Stack[-1] == 0) GOTO 0x17a9; Pop(1)

0x179a: PushEmpty(string)
0x179b: Stack[-1] = "Neutral"
0x179c: Call 0x15ed

0x179d: Pop(1)
0x179e: Push((int) 14006)
0x179f: @@ SetMessage(Stack[-1])
0x17a0: Pop(1)
0x17a1: @@ ClearReplies()
0x17a2: Pop(0)
0x17a3: Push((int) 14007)
0x17a4: Push((int) 15243)
0x17a5: Push((int) 15242)
0x17a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a7: Pop(3)
0x17a8: Return(); Pop(0)

0x17a9: Push((int) 15243)
0x17aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17ab: IF (Stack[-1] == 0) GOTO 0x17c0; Pop(1)

0x17ac: PushEmpty(string)
0x17ad: Stack[-1] = "Neutral"
0x17ae: Call 0x15ed

0x17af: Pop(1)
0x17b0: Push((int) 14008)
0x17b1: @@ SetMessage(Stack[-1])
0x17b2: Pop(1)
0x17b3: @@ ClearReplies()
0x17b4: Pop(0)
0x17b5: Push((int) 14009)
0x17b6: Push((int) -1)
0x17b7: Push((int) 15244)
0x17b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17b9: Pop(3)
0x17ba: Push((int) 14010)
0x17bb: Push((int) -1)
0x17bc: Push((int) 15245)
0x17bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17be: Pop(3)
0x17bf: Return(); Pop(0)

0x17c0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x17c1: PushEmpty(bool)
0x17c2: Call 0x1881

0x17c3: Pop(0)
0x17c4: IF (Stack[-1] == 0) GOTO 0x17c8; Pop(1)

0x17c5: @ lshStopAnimation()
0x17c6: Pop(0)
0x17c7: GOTO 0x17ca

0x17c8: @ StopAnimation()
0x17c9: Pop(0)
0x17ca: Return(); Pop(0)

0x17cb: GOTO 0x15fe

0x17cc: Return(); Pop(0)

0x17cd: PushEmpty(int, int)
0x17ce: @@ GetProperty(Stack[-4], Stack[-1])
0x17cf: Pop(0)
0x17d0: Pop(0); Push(Stack[-1] + Stack[-3]);
0x17d1: @@ SetProperty(Stack[-5], Stack[-1])
0x17d2: Pop(1)
0x17d3: Return(); Pop(2)

0x17d4: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x17d5: @@ GetPosition(Stack[-4])
0x17d6: Pop(0)
0x17d7: @ GetPosition(Stack[-3])
0x17d8: Pop(0)
0x17d9: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x17da: Push(CvectorIndex(Stack[-2], 0))
0x17db: Push(CvectorIndex(Stack[-3], 2))
0x17dc: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x17dd: Pop(2)
0x17de: Stack[-10] = Stack[-1]
0x17df: Return(); Pop(8)

0x17e0: PushEmpty(bool, bool)
0x17e1: @ IsLoaded(Stack[-1])
0x17e2: Pop(0)
0x17e3: Stack[-3] = Stack[-1]
0x17e4: Return(); Pop(2)

0x17e5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x17e6: @@ GetPosition(Stack[-7])
0x17e7: Pop(0)
0x17e8: @@ GetEyesHeight(Stack[-8])
0x17e9: Pop(0)
0x17ea: Push(CvectorIndex(Stack[-7], 1))
0x17eb: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x17ec: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x17ed: @ GetPosition(Stack[-6])
0x17ee: Pop(0)
0x17ef: @ GetEyesHeight(Stack[-8])
0x17f0: Pop(0)
0x17f1: Push(CvectorIndex(Stack[-6], 1))
0x17f2: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x17f3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x17f4: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x17f5: Push(CvectorIndex(Stack[-5], 1))
0x17f6: Stack[-1] = (int) 0
0x17f7: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x17f8: Pop(0); Push(Stack[-5] | Stack[-5]);
0x17f9: Pop(1); Push(Sqrt(Stack[-1]))
0x17fa: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x17fb: Stack[-4] = -Stack[-5]; Pop(0);
0x17fc: Push((int) 70)
0x17fd: Pop(1); Push(Stack[-6] * Stack[-1]);
0x17fe: PushEmpty(cvector, cvector)
0x17ff: Push(CVector(0.0, 1.0, 0.0))
0x1800: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x1801: Call 0x183a

0x1802: Pop(1)
0x1803: Push((int) 25)
0x1804: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1805: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1806: Push(CVector(0.0, 10.0, 0.0))
0x1807: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1808: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1809: @ IsOverrideActive(Stack[-1])
0x180a: Pop(0)
0x180b: Push(Stack[-1])
0x180c: IF (Stack[-1] == 0) GOTO 0x180f; Pop(1)

0x180d: Stack[-18] = (bool) 0
0x180e: Return(); Pop(16)

0x180f: @ StopWorld()
0x1810: Pop(0)
0x1811: @ CameraTransit(Stack[-2], Stack[-4])
0x1812: Pop(0)
0x1813: Push(CvectorIndex(Stack[-3], 0))
0x1814: Push(CvectorIndex(Stack[-4], 2))
0x1815: @ Rotate(Stack[-2], Stack[-1])
0x1816: Pop(2)
0x1817: @ CameraWaitForPlayFinish()
0x1818: Pop(0)
0x1819: @ ResumeWorld()
0x181a: Pop(0)
0x181b: Stack[-18] = (bool) 1
0x181c: Return(); Pop(16)

0x181d: PushEmpty()
0x181e: @ CameraSwitchToNormal()
0x181f: Pop(0)
0x1820: Return(); Pop(0)

0x1821: PushEmpty(float, float, float, float)
0x1822: Push("playing ")
0x1823: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1824: @ Trace(Stack[-1])
0x1825: Pop(1)
0x1826: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x1827: Pop(0)
0x1828: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x1829: Pop(0)
0x182a: Push("start: ")
0x182b: Pop(1); Push(Stack[-1] + Stack[-3]);
0x182c: @ Trace(Stack[-1])
0x182d: Pop(1)
0x182e: Push("end: ")
0x182f: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1830: @ Trace(Stack[-1])
0x1831: Pop(1)
0x1832: Return(); Pop(4)

0x1833: PushEmpty(bool)
0x1834: Call 0x1881

0x1835: Pop(0)
0x1836: IF (Stack[-1] == 0) GOTO 0x1839; Pop(1)

0x1837: @ lshStopSpeech()
0x1838: Pop(0)
0x1839: Return(); Pop(0)

0x183a: PushEmpty(float, float)
0x183b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x183c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x183d: Push((float)0.0)
0x183e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x183f: IF (Stack[-1] == 0) GOTO 0x1842; Pop(1)

0x1840: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1841: Return(); Pop(2)

0x1842: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1843: Return(); Pop(2)

0x1844: PushEmpty(int, int)
0x1845: @ GetVariable(Stack[-3], Stack[-1])
0x1846: Pop(0)
0x1847: Stack[-4] = Stack[-1]
0x1848: Return(); Pop(2)

0x1849: PushEmpty(object, object, object, object)
0x184a: @ GetMainOutdoorScene(Stack[-2])
0x184b: Pop(0)
0x184c: Push(".bin")
0x184d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x184e: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x184f: Pop(1)
0x1850: Stack[-6] = Stack[-1]
0x1851: Return(); Pop(4)

0x1852: Stack[-1] = 0
0x1853: Stack[-2] = 0
0x1854: PushEmpty(object, object)
0x1855: @ FindActor(Stack[-1], Stack[-4])
0x1856: Pop(0)
0x1857: Pop(0); Push((bool) Stack[-1] == 0)
0x1858: IF (Stack[-1] == 0) GOTO 0x185b; Pop(1)

0x1859: Stack[-5] = (bool) 0
0x185a: Return(); Pop(2)

0x185b: @ Trigger(Stack[-1], Stack[-3])
0x185c: Pop(0)
0x185d: Stack[-5] = (bool) 1
0x185e: Return(); Pop(2)

0x185f: Stack[-1] = 0
0x1860: PushEmpty(float, float)
0x1861: @ GetGameTime(Stack[-1])
0x1862: Pop(0)
0x1863: Stack[-3] = Stack[-1]
0x1864: Return(); Pop(2)

0x1865: PushEmpty(float, float)
0x1866: @ GetGameTime(Stack[-1])
0x1867: Pop(0)
0x1868: Push((int) 1)
0x1869: PushEmpty(int)
0x186a: Push((int) 24)
0x186b: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x186c: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x186d: Return(); Pop(2)

0x186e: PushEmpty()
0x186f: PushEmpty(int)
0x1870: Call 0x1865

0x1871: Pop(0)
0x1872: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x1873: Return(); Pop(0)

0x1874: PushEmpty(bool, bool)
0x1875: PushEmpty(string)
0x1876: Stack[-1] = "No"
0x1877: Call 0x1821

0x1878: Pop(1)
0x1879: @ lshWaitForAnimEnd(Stack[-1])
0x187a: Pop(0)
0x187b: Stack[-3] = Stack[-1]
0x187c: Return(); Pop(2)

0x187d: Stack[-1] = (int) 2879
0x187e: Return(); Pop(0)

0x187f: Stack[-1] = "ui/NPC_Viktor.png"
0x1880: Return(); Pop(0)

0x1881: Stack[-1] = (bool) 1
0x1882: Return(); Pop(0)

0x1883: PushEmpty()
0x1884: Push("ood1Viktor1")
0x1885: Push((int) 1)
0x1886: @ SetVariable(Stack[-2], Stack[-1])
0x1887: Pop(2)
0x1888: Return(); Pop(0)

0x1889: PushEmpty()
0x188a: Push("ood1Viktor2")
0x188b: Push((int) 1)
0x188c: @ SetVariable(Stack[-2], Stack[-1])
0x188d: Pop(2)
0x188e: Return(); Pop(0)

0x188f: PushEmpty()
0x1890: Push("ood1Viktor3")
0x1891: Push((int) 1)
0x1892: @ SetVariable(Stack[-2], Stack[-1])
0x1893: Pop(2)
0x1894: Return(); Pop(0)

0x1895: PushEmpty()
0x1896: Push("ood1Viktor4")
0x1897: Push((int) 1)
0x1898: @ SetVariable(Stack[-2], Stack[-1])
0x1899: Pop(2)
0x189a: Return(); Pop(0)

0x189b: PushEmpty()
0x189c: PushEmpty()
0x189d: Call 0x1ce1

0x189e: Pop(0)
0x189f: PushEmpty(object, string)
0x18a0: Stack[-1] = "quest_d1_02"
0x18a1: Call 0x1849

0x18a2: Pop(2)
0x18a3: Return(); Pop(0)

0x18a4: PushEmpty()
0x18a5: Push("ood1Viktor5")
0x18a6: Push((int) 1)
0x18a7: @ SetVariable(Stack[-2], Stack[-1])
0x18a8: Pop(2)
0x18a9: Return(); Pop(0)

0x18aa: PushEmpty()
0x18ab: Push("playsound")
0x18ac: Push("givemoney")
0x18ad: @ TriggerWorld(Stack[-2], Stack[-1])
0x18ae: Pop(2)
0x18af: Return(); Pop(0)

0x18b0: PushEmpty()
0x18b1: Push("KnowBattleBrods")
0x18b2: Push((int) 1)
0x18b3: @ SetVariable(Stack[-2], Stack[-1])
0x18b4: Pop(2)
0x18b5: Return(); Pop(0)

0x18b6: PushEmpty()
0x18b7: Push("KnowShabnak")
0x18b8: Push((int) 1)
0x18b9: @ SetVariable(Stack[-2], Stack[-1])
0x18ba: Pop(2)
0x18bb: Return(); Pop(0)

0x18bc: PushEmpty()
0x18bd: Return(); Pop(0)

0x18be: PushEmpty()
0x18bf: Push("ood2Viktor1")
0x18c0: Push((int) 1)
0x18c1: @ SetVariable(Stack[-2], Stack[-1])
0x18c2: Pop(2)
0x18c3: Return(); Pop(0)

0x18c4: PushEmpty()
0x18c5: Push("KnowRavell")
0x18c6: Push((int) 1)
0x18c7: @ SetVariable(Stack[-2], Stack[-1])
0x18c8: Pop(2)
0x18c9: Return(); Pop(0)

0x18ca: PushEmpty()
0x18cb: Push("money 5000 is given")
0x18cc: @ Trace(Stack[-1])
0x18cd: Pop(1)
0x18ce: PushEmpty(object, string, int)
0x18cf: Stack[-3] = Stack[-5]
0x18d0: Stack[-2] = "money"
0x18d1: Stack[-1] = (int) 5000
0x18d2: Call 0x17cd

0x18d3: Pop(3)
0x18d4: Return(); Pop(0)

0x18d5: PushEmpty()
0x18d6: Return(); Pop(0)

0x18d7: PushEmpty()
0x18d8: Push("ood1Viktor6")
0x18d9: Push((int) 1)
0x18da: @ SetVariable(Stack[-2], Stack[-1])
0x18db: Pop(2)
0x18dc: Return(); Pop(0)

0x18dd: PushEmpty()
0x18de: Push("ood1Viktor7")
0x18df: Push((int) 1)
0x18e0: @ SetVariable(Stack[-2], Stack[-1])
0x18e1: Pop(2)
0x18e2: Return(); Pop(0)

0x18e3: PushEmpty()
0x18e4: Push("ood1Viktor8")
0x18e5: Push((int) 1)
0x18e6: @ SetVariable(Stack[-2], Stack[-1])
0x18e7: Pop(2)
0x18e8: Return(); Pop(0)

0x18e9: PushEmpty()
0x18ea: Push("ood1Viktor9")
0x18eb: Push((int) 1)
0x18ec: @ SetVariable(Stack[-2], Stack[-1])
0x18ed: Pop(2)
0x18ee: Return(); Pop(0)

0x18ef: PushEmpty()
0x18f0: Push("ood1Viktor10")
0x18f1: Push((int) 1)
0x18f2: @ SetVariable(Stack[-2], Stack[-1])
0x18f3: Pop(2)
0x18f4: Return(); Pop(0)

0x18f5: PushEmpty()
0x18f6: Push("ood1Viktor11")
0x18f7: Push((int) 1)
0x18f8: @ SetVariable(Stack[-2], Stack[-1])
0x18f9: Pop(2)
0x18fa: Return(); Pop(0)

0x18fb: PushEmpty(object, object)
0x18fc: PushEmpty(object)
0x18fd: Call 0x1c8e

0x18fe: Stack[-2] = Stack[-1]
0x18ff: Pop(1)
0x1900: Push("d1q02ViktorGotoAnna")
0x1901: Push("pt_map_anna")
0x1902: Push((int) 0)
0x1903: Push((int) 8634)
0x1904: PushEmpty(float)
0x1905: Call 0x1860

0x1906: Pop(0)
0x1907: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1908: Pop(5)
0x1909: Return(); Pop(2)

0x190a: Stack[-1] = 0
0x190b: PushEmpty()
0x190c: PushEmpty(object, string, float)
0x190d: PushEmpty(object)
0x190e: Call 0x1c8e

0x190f: Stack[-4] = Stack[-1]
0x1910: Pop(1)
0x1911: Stack[-2] = "pt_map_anna"
0x1912: Stack[-1] = (int) 2
0x1913: Call 0x1c9f

0x1914: Pop(3)
0x1915: PushEmpty(object)
0x1916: Call 0x1c8e

0x1917: Pop(0)
0x1918: @@ ShowMap(Stack[-1])
0x1919: Pop(1)
0x191a: Return(); Pop(0)

0x191b: PushEmpty()
0x191c: Push("KnowStation")
0x191d: Push((int) 1)
0x191e: @ SetVariable(Stack[-2], Stack[-1])
0x191f: Pop(2)
0x1920: Return(); Pop(0)

0x1921: PushEmpty()
0x1922: Push("KnowFactory")
0x1923: Push((int) 1)
0x1924: @ SetVariable(Stack[-2], Stack[-1])
0x1925: Pop(2)
0x1926: Return(); Pop(0)

0x1927: PushEmpty()
0x1928: Push("KnowWarehouses")
0x1929: Push((int) 1)
0x192a: @ SetVariable(Stack[-2], Stack[-1])
0x192b: Pop(2)
0x192c: Return(); Pop(0)

0x192d: PushEmpty()
0x192e: Push("KnowViktor")
0x192f: Push((int) 1)
0x1930: @ SetVariable(Stack[-2], Stack[-1])
0x1931: Pop(2)
0x1932: Return(); Pop(0)

0x1933: PushEmpty(object, object)
0x1934: PushEmpty(object)
0x1935: Call 0x1c8e

0x1936: Stack[-2] = Stack[-1]
0x1937: Pop(1)
0x1938: Push("d3q02ViktorGotoMladVlad")
0x1939: Push("pt_map_maldvlad")
0x193a: Push((int) 0)
0x193b: Push((int) 11380)
0x193c: PushEmpty(float)
0x193d: Call 0x1860

0x193e: Pop(0)
0x193f: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1940: Pop(5)
0x1941: Push("d3q02ViktorGotoMladVladSelf")
0x1942: Push("pt_map_viktor")
0x1943: Push((int) 0)
0x1944: Push((int) 15305)
0x1945: PushEmpty(float)
0x1946: Call 0x1860

0x1947: Pop(0)
0x1948: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1949: Pop(5)
0x194a: PushEmpty()
0x194b: Call 0x1cf1

0x194c: Pop(0)
0x194d: Return(); Pop(2)

0x194e: Stack[-1] = 0
0x194f: PushEmpty()
0x1950: Return(); Pop(0)

0x1951: PushEmpty()
0x1952: PushEmpty(object, string, float)
0x1953: PushEmpty(object)
0x1954: Call 0x1c8e

0x1955: Stack[-4] = Stack[-1]
0x1956: Pop(1)
0x1957: Stack[-2] = "pt_map_mladvlad"
0x1958: Stack[-1] = (int) 2
0x1959: Call 0x1c9f

0x195a: Pop(3)
0x195b: PushEmpty(object)
0x195c: Call 0x1c8e

0x195d: Pop(0)
0x195e: @@ ShowMap(Stack[-1])
0x195f: Pop(1)
0x1960: Return(); Pop(0)

0x1961: PushEmpty()
0x1962: Return(); Pop(0)

0x1963: PushEmpty()
0x1964: Push("d3q02")
0x1965: Push((int) 5)
0x1966: @ SetVariable(Stack[-2], Stack[-1])
0x1967: Pop(2)
0x1968: Return(); Pop(0)

0x1969: PushEmpty()
0x196a: PushEmpty()
0x196b: Call 0x1cd1

0x196c: Pop(0)
0x196d: Return(); Pop(0)

0x196e: PushEmpty(object, object)
0x196f: PushEmpty(int, string)
0x1970: Stack[-1] = "d5q03"
0x1971: Call 0x1844

0x1972: Pop(1)
0x1973: Push((int) 0)
0x1974: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1975: IF (Stack[-1] == 0) GOTO 0x199d; Pop(1)

0x1976: Push("d5q03")
0x1977: Push((int) 1)
0x1978: @ SetVariable(Stack[-2], Stack[-1])
0x1979: Pop(2)
0x197a: PushEmpty(object)
0x197b: Call 0x1c8e

0x197c: Stack[-2] = Stack[-1]
0x197d: Pop(1)
0x197e: Push("d5q03ViktorSavePrisonersSelf")
0x197f: Push("pt_map_viktor")
0x1980: Push((int) 0)
0x1981: Push((int) 15371)
0x1982: PushEmpty(float)
0x1983: Call 0x1860

0x1984: Pop(0)
0x1985: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1986: Pop(5)
0x1987: Push("d5q03SavePrisoners")
0x1988: Push("pt_map_uprava_prison")
0x1989: Push((int) 0)
0x198a: Push((int) 15370)
0x198b: PushEmpty(float)
0x198c: Call 0x1860

0x198d: Pop(0)
0x198e: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x198f: Pop(5)
0x1990: PushEmpty()
0x1991: Call 0x1d01

0x1992: Pop(0)
0x1993: PushEmpty(object, string)
0x1994: Stack[-1] = "quest_d5_03"
0x1995: Call 0x1849

0x1996: Pop(2)
0x1997: PushEmpty(bool, string, string)
0x1998: Stack[-2] = "quest_d5_03"
0x1999: Stack[-1] = "place_prisoners"
0x199a: Call 0x1854

0x199b: Pop(3)
0x199c: Stack[-1] = 0
0x199d: Return(); Pop(2)

0x199e: PushEmpty()
0x199f: Push("ood5Viktor1")
0x19a0: Push((int) 1)
0x19a1: @ SetVariable(Stack[-2], Stack[-1])
0x19a2: Pop(2)
0x19a3: Return(); Pop(0)

0x19a4: PushEmpty()
0x19a5: Push("money30000 is given")
0x19a6: @ Trace(Stack[-1])
0x19a7: Pop(1)
0x19a8: PushEmpty(object, string, int)
0x19a9: Stack[-3] = Stack[-5]
0x19aa: Stack[-2] = "money"
0x19ab: Stack[-1] = (int) 30000
0x19ac: Call 0x17cd

0x19ad: Pop(3)
0x19ae: Return(); Pop(0)

0x19af: PushEmpty()
0x19b0: Push("ood5Viktor2")
0x19b1: Push((int) 1)
0x19b2: @ SetVariable(Stack[-2], Stack[-1])
0x19b3: Pop(2)
0x19b4: Return(); Pop(0)

0x19b5: PushEmpty()
0x19b6: Return(); Pop(0)

0x19b7: PushEmpty()
0x19b8: Push("ood5Viktor3")
0x19b9: Push((int) 1)
0x19ba: @ SetVariable(Stack[-2], Stack[-1])
0x19bb: Pop(2)
0x19bc: Return(); Pop(0)

0x19bd: PushEmpty()
0x19be: Push("ood6Viktor1")
0x19bf: Push((int) 1)
0x19c0: @ SetVariable(Stack[-2], Stack[-1])
0x19c1: Pop(2)
0x19c2: Return(); Pop(0)

0x19c3: PushEmpty(object, object)
0x19c4: Push("d6q01")
0x19c5: Push((int) 1)
0x19c6: @ SetVariable(Stack[-2], Stack[-1])
0x19c7: Pop(2)
0x19c8: PushEmpty(object)
0x19c9: Call 0x1c8e

0x19ca: Stack[-2] = Stack[-1]
0x19cb: Pop(1)
0x19cc: Push("d6q01ViktorGotoAlexandr")
0x19cd: Push("pt_map_alexandr")
0x19ce: Push((int) 1)
0x19cf: Push((int) 15383)
0x19d0: PushEmpty(float)
0x19d1: Call 0x1860

0x19d2: Pop(0)
0x19d3: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x19d4: Pop(5)
0x19d5: Push("d6q01ViktorGotoBigVlad")
0x19d6: Push("pt_map_bigvlad")
0x19d7: Push((int) 1)
0x19d8: Push((int) 15384)
0x19d9: PushEmpty(float)
0x19da: Call 0x1860

0x19db: Pop(0)
0x19dc: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x19dd: Pop(5)
0x19de: Push("d6q01ViktorGotoAlxBigSelf")
0x19df: Push("pt_map_viktor")
0x19e0: Push((int) 1)
0x19e1: Push((int) 15385)
0x19e2: PushEmpty(float)
0x19e3: Call 0x1860

0x19e4: Pop(0)
0x19e5: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x19e6: Pop(5)
0x19e7: PushEmpty()
0x19e8: Call 0x1d11

0x19e9: Pop(0)
0x19ea: PushEmpty()
0x19eb: Call 0x1d31

0x19ec: Pop(0)
0x19ed: PushEmpty()
0x19ee: Call 0x1d21

0x19ef: Pop(0)
0x19f0: Return(); Pop(2)

0x19f1: Stack[-1] = 0
0x19f2: PushEmpty()
0x19f3: Push("KnowAlexandr")
0x19f4: Push((int) 1)
0x19f5: @ SetVariable(Stack[-2], Stack[-1])
0x19f6: Pop(2)
0x19f7: Return(); Pop(0)

0x19f8: PushEmpty()
0x19f9: Push("ood8Viktor1")
0x19fa: Push((int) 1)
0x19fb: @ SetVariable(Stack[-2], Stack[-1])
0x19fc: Pop(2)
0x19fd: Return(); Pop(0)

0x19fe: PushEmpty()
0x19ff: Push("ood9Viktor1")
0x1a00: Push((int) 1)
0x1a01: @ SetVariable(Stack[-2], Stack[-1])
0x1a02: Pop(2)
0x1a03: Return(); Pop(0)

0x1a04: PushEmpty()
0x1a05: Push("d9q01")
0x1a06: Push((int) 1)
0x1a07: @ SetVariable(Stack[-2], Stack[-1])
0x1a08: Pop(2)
0x1a09: PushEmpty()
0x1a0a: Call 0x1d41

0x1a0b: Pop(0)
0x1a0c: PushEmpty()
0x1a0d: Call 0x1d51

0x1a0e: Pop(0)
0x1a0f: PushEmpty(bool, string, string)
0x1a10: Stack[-2] = "quest_d9_01"
0x1a11: Stack[-1] = "place_rifles"
0x1a12: Call 0x1854

0x1a13: Pop(3)
0x1a14: Return(); Pop(0)

0x1a15: PushEmpty()
0x1a16: Push("ood9Viktor2")
0x1a17: Push((int) 1)
0x1a18: @ SetVariable(Stack[-2], Stack[-1])
0x1a19: Pop(2)
0x1a1a: Return(); Pop(0)

0x1a1b: PushEmpty()
0x1a1c: Push("KnowMyth")
0x1a1d: Push((int) 1)
0x1a1e: @ SetVariable(Stack[-2], Stack[-1])
0x1a1f: Pop(2)
0x1a20: Return(); Pop(0)

0x1a21: PushEmpty()
0x1a22: Push("d6ViktorVisit")
0x1a23: Push((int) 1)
0x1a24: @ SetVariable(Stack[-2], Stack[-1])
0x1a25: Pop(2)
0x1a26: Return(); Pop(0)

0x1a27: PushEmpty()
0x1a28: Push("ood9Viktor3")
0x1a29: Push((int) 1)
0x1a2a: @ SetVariable(Stack[-2], Stack[-1])
0x1a2b: Pop(2)
0x1a2c: Return(); Pop(0)

0x1a2d: PushEmpty()
0x1a2e: Push("KnowBoyni")
0x1a2f: Push((int) 1)
0x1a30: @ SetVariable(Stack[-2], Stack[-1])
0x1a31: Pop(2)
0x1a32: Return(); Pop(0)

0x1a33: PushEmpty()
0x1a34: Push("KnowTaurusProject")
0x1a35: Push((int) 1)
0x1a36: @ SetVariable(Stack[-2], Stack[-1])
0x1a37: Pop(2)
0x1a38: Return(); Pop(0)

0x1a39: PushEmpty()
0x1a3a: PushEmpty(int, string)
0x1a3b: Stack[-1] = "ood1Viktor1"
0x1a3c: Call 0x1844

0x1a3d: Pop(1)
0x1a3e: Push((int) 0)
0x1a3f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a40: IF (Stack[-1] == 0) GOTO 0x1a43; Pop(1)

0x1a41: Stack[-2] = (bool) 1
0x1a42: Return(); Pop(0)

0x1a43: Stack[-2] = (bool) 0
0x1a44: Return(); Pop(0)

0x1a45: PushEmpty()
0x1a46: PushEmpty(int, string)
0x1a47: Stack[-1] = "ood1Viktor2"
0x1a48: Call 0x1844

0x1a49: Pop(1)
0x1a4a: Push((int) 0)
0x1a4b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a4c: IF (Stack[-1] == 0) GOTO 0x1a4f; Pop(1)

0x1a4d: Stack[-2] = (bool) 1
0x1a4e: Return(); Pop(0)

0x1a4f: Stack[-2] = (bool) 0
0x1a50: Return(); Pop(0)

0x1a51: PushEmpty()
0x1a52: PushEmpty(int, string)
0x1a53: Stack[-1] = "ood1Viktor3"
0x1a54: Call 0x1844

0x1a55: Pop(1)
0x1a56: Push((int) 0)
0x1a57: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a58: IF (Stack[-1] == 0) GOTO 0x1a5b; Pop(1)

0x1a59: Stack[-2] = (bool) 1
0x1a5a: Return(); Pop(0)

0x1a5b: Stack[-2] = (bool) 0
0x1a5c: Return(); Pop(0)

0x1a5d: PushEmpty()
0x1a5e: PushEmpty(int, string)
0x1a5f: Stack[-1] = "ood1Viktor4"
0x1a60: Call 0x1844

0x1a61: Pop(1)
0x1a62: Push((int) 0)
0x1a63: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a64: IF (Stack[-1] == 0) GOTO 0x1a67; Pop(1)

0x1a65: Stack[-2] = (bool) 1
0x1a66: Return(); Pop(0)

0x1a67: Stack[-2] = (bool) 0
0x1a68: Return(); Pop(0)

0x1a69: PushEmpty()
0x1a6a: PushEmpty(int, string)
0x1a6b: Stack[-1] = "d1q01"
0x1a6c: Call 0x1844

0x1a6d: Pop(1)
0x1a6e: Push((int) 0)
0x1a6f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a70: IF (Stack[-1] == 0) GOTO 0x1a73; Pop(1)

0x1a71: Stack[-2] = (bool) 1
0x1a72: Return(); Pop(0)

0x1a73: Stack[-2] = (bool) 0
0x1a74: Return(); Pop(0)

0x1a75: PushEmpty()
0x1a76: PushEmpty(int, string)
0x1a77: Stack[-1] = "d1q01TeloNedostupno"
0x1a78: Call 0x1844

0x1a79: Pop(1)
0x1a7a: Push((int) 1)
0x1a7b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a7c: IF (Stack[-1] == 0) GOTO 0x1a7f; Pop(1)

0x1a7d: Stack[-2] = (bool) 1
0x1a7e: Return(); Pop(0)

0x1a7f: Stack[-2] = (bool) 0
0x1a80: Return(); Pop(0)

0x1a81: PushEmpty()
0x1a82: PushEmpty(int, string)
0x1a83: Stack[-1] = "d1q02"
0x1a84: Call 0x1844

0x1a85: Pop(1)
0x1a86: Push((int) 0)
0x1a87: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a88: IF (Stack[-1] == 0) GOTO 0x1a8b; Pop(1)

0x1a89: Stack[-2] = (bool) 1
0x1a8a: Return(); Pop(0)

0x1a8b: Stack[-2] = (bool) 0
0x1a8c: Return(); Pop(0)

0x1a8d: PushEmpty()
0x1a8e: PushEmpty(int, string)
0x1a8f: Stack[-1] = "d1q02"
0x1a90: Call 0x1844

0x1a91: Pop(1)
0x1a92: Push((int) 1000)
0x1a93: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a94: IF (Stack[-1] == 0) GOTO 0x1a97; Pop(1)

0x1a95: Stack[-2] = (bool) 1
0x1a96: Return(); Pop(0)

0x1a97: Stack[-2] = (bool) 0
0x1a98: Return(); Pop(0)

0x1a99: PushEmpty()
0x1a9a: PushEmpty(int, string)
0x1a9b: Stack[-1] = "ood1Viktor5"
0x1a9c: Call 0x1844

0x1a9d: Pop(1)
0x1a9e: Push((int) 0)
0x1a9f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1aa0: IF (Stack[-1] == 0) GOTO 0x1aa3; Pop(1)

0x1aa1: Stack[-2] = (bool) 1
0x1aa2: Return(); Pop(0)

0x1aa3: Stack[-2] = (bool) 0
0x1aa4: Return(); Pop(0)

0x1aa5: PushEmpty()
0x1aa6: PushEmpty(int, string)
0x1aa7: Stack[-1] = "d1q01FirstGeorgVisit"
0x1aa8: Call 0x1844

0x1aa9: Pop(1)
0x1aaa: Push((int) 1)
0x1aab: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1aac: IF (Stack[-1] == 0) GOTO 0x1aaf; Pop(1)

0x1aad: Stack[-2] = (bool) 1
0x1aae: Return(); Pop(0)

0x1aaf: Stack[-2] = (bool) 0
0x1ab0: Return(); Pop(0)

0x1ab1: PushEmpty()
0x1ab2: PushEmpty(int, string)
0x1ab3: Stack[-1] = "ood2Viktor1"
0x1ab4: Call 0x1844

0x1ab5: Pop(1)
0x1ab6: Push((int) 0)
0x1ab7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1ab8: IF (Stack[-1] == 0) GOTO 0x1abb; Pop(1)

0x1ab9: Stack[-2] = (bool) 1
0x1aba: Return(); Pop(0)

0x1abb: Stack[-2] = (bool) 0
0x1abc: Return(); Pop(0)

0x1abd: PushEmpty()
0x1abe: PushEmpty(int, string)
0x1abf: Stack[-1] = "KnowRavell"
0x1ac0: Call 0x1844

0x1ac1: Pop(1)
0x1ac2: Push((int) 1)
0x1ac3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1ac4: IF (Stack[-1] == 0) GOTO 0x1ac7; Pop(1)

0x1ac5: Stack[-2] = (bool) 1
0x1ac6: Return(); Pop(0)

0x1ac7: Stack[-2] = (bool) 0
0x1ac8: Return(); Pop(0)

0x1ac9: PushEmpty()
0x1aca: PushEmpty(int, string)
0x1acb: Stack[-1] = "d2q03"
0x1acc: Call 0x1844

0x1acd: Pop(1)
0x1ace: Push((int) 1)
0x1acf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1ad0: IF (Stack[-1] == 0) GOTO 0x1ad3; Pop(1)

0x1ad1: Stack[-2] = (bool) 1
0x1ad2: Return(); Pop(0)

0x1ad3: Stack[-2] = (bool) 0
0x1ad4: Return(); Pop(0)

0x1ad5: PushEmpty()
0x1ad6: PushEmpty(int, string)
0x1ad7: Stack[-1] = "d2q03MariaGotoViktor"
0x1ad8: Call 0x1844

0x1ad9: Pop(1)
0x1ada: Push((int) 1)
0x1adb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1adc: IF (Stack[-1] == 0) GOTO 0x1adf; Pop(1)

0x1add: Stack[-2] = (bool) 1
0x1ade: Return(); Pop(0)

0x1adf: Stack[-2] = (bool) 0
0x1ae0: Return(); Pop(0)

0x1ae1: PushEmpty()
0x1ae2: Stack[-2] = (bool) 1
0x1ae3: Return(); Pop(0)

0x1ae4: Stack[-2] = (bool) 0
0x1ae5: Return(); Pop(0)

0x1ae6: PushEmpty()
0x1ae7: PushEmpty(int, string)
0x1ae8: Stack[-1] = "ood1Viktor6"
0x1ae9: Call 0x1844

0x1aea: Pop(1)
0x1aeb: Push((int) 0)
0x1aec: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1aed: IF (Stack[-1] == 0) GOTO 0x1af0; Pop(1)

0x1aee: Stack[-2] = (bool) 1
0x1aef: Return(); Pop(0)

0x1af0: Stack[-2] = (bool) 0
0x1af1: Return(); Pop(0)

0x1af2: PushEmpty()
0x1af3: PushEmpty(int, string)
0x1af4: Stack[-1] = "ood1Viktor7"
0x1af5: Call 0x1844

0x1af6: Pop(1)
0x1af7: Push((int) 0)
0x1af8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1af9: IF (Stack[-1] == 0) GOTO 0x1afc; Pop(1)

0x1afa: Stack[-2] = (bool) 1
0x1afb: Return(); Pop(0)

0x1afc: Stack[-2] = (bool) 0
0x1afd: Return(); Pop(0)

0x1afe: PushEmpty()
0x1aff: PushEmpty(int, string)
0x1b00: Stack[-1] = "ood1Viktor8"
0x1b01: Call 0x1844

0x1b02: Pop(1)
0x1b03: Push((int) 0)
0x1b04: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1b05: IF (Stack[-1] == 0) GOTO 0x1b08; Pop(1)

0x1b06: Stack[-2] = (bool) 1
0x1b07: Return(); Pop(0)

0x1b08: Stack[-2] = (bool) 0
0x1b09: Return(); Pop(0)

0x1b0a: PushEmpty()
0x1b0b: PushEmpty(int, string)
0x1b0c: Stack[-1] = "ood1Viktor9"
0x1b0d: Call 0x1844

0x1b0e: Pop(1)
0x1b0f: Push((int) 0)
0x1b10: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1b11: IF (Stack[-1] == 0) GOTO 0x1b14; Pop(1)

0x1b12: Stack[-2] = (bool) 1
0x1b13: Return(); Pop(0)

0x1b14: Stack[-2] = (bool) 0
0x1b15: Return(); Pop(0)

0x1b16: PushEmpty()
0x1b17: PushEmpty(int, string)
0x1b18: Stack[-1] = "ood1Viktor10"
0x1b19: Call 0x1844

0x1b1a: Pop(1)
0x1b1b: Push((int) 0)
0x1b1c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1b1d: IF (Stack[-1] == 0) GOTO 0x1b20; Pop(1)

0x1b1e: Stack[-2] = (bool) 1
0x1b1f: Return(); Pop(0)

0x1b20: Stack[-2] = (bool) 0
0x1b21: Return(); Pop(0)

0x1b22: PushEmpty()
0x1b23: PushEmpty(int, string)
0x1b24: Stack[-1] = "ood1Viktor11"
0x1b25: Call 0x1844

0x1b26: Pop(1)
0x1b27: Push((int) 0)
0x1b28: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1b29: IF (Stack[-1] == 0) GOTO 0x1b2c; Pop(1)

0x1b2a: Stack[-2] = (bool) 1
0x1b2b: Return(); Pop(0)

0x1b2c: Stack[-2] = (bool) 0
0x1b2d: Return(); Pop(0)

0x1b2e: PushEmpty()
0x1b2f: PushEmpty(int, string)
0x1b30: Stack[-1] = "d1q01"
0x1b31: Call 0x1844

0x1b32: Pop(1)
0x1b33: Push((int) 1)
0x1b34: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1b35: IF (Stack[-1] == 0) GOTO 0x1b38; Pop(1)

0x1b36: Stack[-2] = (bool) 1
0x1b37: Return(); Pop(0)

0x1b38: Stack[-2] = (bool) 0
0x1b39: Return(); Pop(0)

0x1b3a: PushEmpty()
0x1b3b: PushEmpty(int, string)
0x1b3c: Stack[-1] = "d3q02"
0x1b3d: Call 0x1844

0x1b3e: Pop(1)
0x1b3f: Push((int) 1)
0x1b40: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1b41: IF (Stack[-1] == 0) GOTO 0x1b44; Pop(1)

0x1b42: Stack[-2] = (bool) 1
0x1b43: Return(); Pop(0)

0x1b44: Stack[-2] = (bool) 0
0x1b45: Return(); Pop(0)

0x1b46: PushEmpty()
0x1b47: Stack[-2] = (bool) 1
0x1b48: Return(); Pop(0)

0x1b49: Stack[-2] = (bool) 0
0x1b4a: Return(); Pop(0)

0x1b4b: PushEmpty()
0x1b4c: PushEmpty(int, string)
0x1b4d: Stack[-1] = "d3q02"
0x1b4e: Call 0x1844

0x1b4f: Pop(1)
0x1b50: Push((int) 4)
0x1b51: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1b52: IF (Stack[-1] == 0) GOTO 0x1b55; Pop(1)

0x1b53: Stack[-2] = (bool) 1
0x1b54: Return(); Pop(0)

0x1b55: Stack[-2] = (bool) 0
0x1b56: Return(); Pop(0)

0x1b57: PushEmpty()
0x1b58: Stack[-2] = (bool) 1
0x1b59: Return(); Pop(0)

0x1b5a: Stack[-2] = (bool) 0
0x1b5b: Return(); Pop(0)

0x1b5c: PushEmpty()
0x1b5d: PushEmpty(int, string)
0x1b5e: Stack[-1] = "KnowSaburivClan"
0x1b5f: Call 0x1844

0x1b60: Pop(1)
0x1b61: Push((int) 1)
0x1b62: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1b63: IF (Stack[-1] == 0) GOTO 0x1b66; Pop(1)

0x1b64: Stack[-2] = (bool) 1
0x1b65: Return(); Pop(0)

0x1b66: Stack[-2] = (bool) 0
0x1b67: Return(); Pop(0)

0x1b68: PushEmpty()
0x1b69: PushEmpty(int, string)
0x1b6a: Stack[-1] = "d5q03"
0x1b6b: Call 0x1844

0x1b6c: Pop(1)
0x1b6d: Push((int) 0)
0x1b6e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1b6f: IF (Stack[-1] == 0) GOTO 0x1b72; Pop(1)

0x1b70: Stack[-2] = (bool) 1
0x1b71: Return(); Pop(0)

0x1b72: Stack[-2] = (bool) 0
0x1b73: Return(); Pop(0)

0x1b74: PushEmpty()
0x1b75: PushEmpty(int, string)
0x1b76: Stack[-1] = "d5q03"
0x1b77: Call 0x1844

0x1b78: Pop(1)
0x1b79: Push((int) 1000)
0x1b7a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1b7b: IF (Stack[-1] == 0) GOTO 0x1b7e; Pop(1)

0x1b7c: Stack[-2] = (bool) 1
0x1b7d: Return(); Pop(0)

0x1b7e: Stack[-2] = (bool) 0
0x1b7f: Return(); Pop(0)

0x1b80: PushEmpty()
0x1b81: PushEmpty(int, string)
0x1b82: Stack[-1] = "d5q03"
0x1b83: Call 0x1844

0x1b84: Pop(1)
0x1b85: Push((int) -1)
0x1b86: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1b87: IF (Stack[-1] == 0) GOTO 0x1b8a; Pop(1)

0x1b88: Stack[-2] = (bool) 1
0x1b89: Return(); Pop(0)

0x1b8a: Stack[-2] = (bool) 0
0x1b8b: Return(); Pop(0)

0x1b8c: PushEmpty()
0x1b8d: PushEmpty(int, string)
0x1b8e: Stack[-1] = "d5q03"
0x1b8f: Call 0x1844

0x1b90: Pop(1)
0x1b91: Push((int) 2)
0x1b92: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1b93: IF (Stack[-1] == 0) GOTO 0x1b96; Pop(1)

0x1b94: Stack[-2] = (bool) 1
0x1b95: Return(); Pop(0)

0x1b96: Stack[-2] = (bool) 0
0x1b97: Return(); Pop(0)

0x1b98: PushEmpty()
0x1b99: PushEmpty(int, string)
0x1b9a: Stack[-1] = "ood5Viktor1"
0x1b9b: Call 0x1844

0x1b9c: Pop(1)
0x1b9d: Push((int) 0)
0x1b9e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1b9f: IF (Stack[-1] == 0) GOTO 0x1ba2; Pop(1)

0x1ba0: Stack[-2] = (bool) 1
0x1ba1: Return(); Pop(0)

0x1ba2: Stack[-2] = (bool) 0
0x1ba3: Return(); Pop(0)

0x1ba4: PushEmpty()
0x1ba5: PushEmpty(int, string)
0x1ba6: Stack[-1] = "ood5Viktor2"
0x1ba7: Call 0x1844

0x1ba8: Pop(1)
0x1ba9: Push((int) 0)
0x1baa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1bab: IF (Stack[-1] == 0) GOTO 0x1bae; Pop(1)

0x1bac: Stack[-2] = (bool) 1
0x1bad: Return(); Pop(0)

0x1bae: Stack[-2] = (bool) 0
0x1baf: Return(); Pop(0)

0x1bb0: PushEmpty()
0x1bb1: PushEmpty(int, string)
0x1bb2: Stack[-1] = "ood5Viktor3"
0x1bb3: Call 0x1844

0x1bb4: Pop(1)
0x1bb5: Push((int) 0)
0x1bb6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1bb7: IF (Stack[-1] == 0) GOTO 0x1bba; Pop(1)

0x1bb8: Stack[-2] = (bool) 1
0x1bb9: Return(); Pop(0)

0x1bba: Stack[-2] = (bool) 0
0x1bbb: Return(); Pop(0)

0x1bbc: PushEmpty()
0x1bbd: PushEmpty(int, string)
0x1bbe: Stack[-1] = "ood6Viktor1"
0x1bbf: Call 0x1844

0x1bc0: Pop(1)
0x1bc1: Push((int) 0)
0x1bc2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1bc3: IF (Stack[-1] == 0) GOTO 0x1bc6; Pop(1)

0x1bc4: Stack[-2] = (bool) 1
0x1bc5: Return(); Pop(0)

0x1bc6: Stack[-2] = (bool) 0
0x1bc7: Return(); Pop(0)

0x1bc8: PushEmpty()
0x1bc9: PushEmpty(int, string)
0x1bca: Stack[-1] = "KnowAlexandr"
0x1bcb: Call 0x1844

0x1bcc: Pop(1)
0x1bcd: Push((int) 1)
0x1bce: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1bcf: IF (Stack[-1] == 0) GOTO 0x1bd2; Pop(1)

0x1bd0: Stack[-2] = (bool) 1
0x1bd1: Return(); Pop(0)

0x1bd2: Stack[-2] = (bool) 0
0x1bd3: Return(); Pop(0)

0x1bd4: PushEmpty()
0x1bd5: PushEmpty(int, string)
0x1bd6: Stack[-1] = "KnowBigVlad"
0x1bd7: Call 0x1844

0x1bd8: Pop(1)
0x1bd9: Push((int) 1)
0x1bda: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1bdb: IF (Stack[-1] == 0) GOTO 0x1bde; Pop(1)

0x1bdc: Stack[-2] = (bool) 1
0x1bdd: Return(); Pop(0)

0x1bde: Stack[-2] = (bool) 0
0x1bdf: Return(); Pop(0)

0x1be0: PushEmpty()
0x1be1: PushEmpty(int, string)
0x1be2: Stack[-1] = "ood8Viktor1"
0x1be3: Call 0x1844

0x1be4: Pop(1)
0x1be5: Push((int) 0)
0x1be6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1be7: IF (Stack[-1] == 0) GOTO 0x1bea; Pop(1)

0x1be8: Stack[-2] = (bool) 1
0x1be9: Return(); Pop(0)

0x1bea: Stack[-2] = (bool) 0
0x1beb: Return(); Pop(0)

0x1bec: PushEmpty()
0x1bed: PushEmpty(int, string)
0x1bee: Stack[-1] = "d8KainIsReason"
0x1bef: Call 0x1844

0x1bf0: Pop(1)
0x1bf1: Push((int) 1)
0x1bf2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1bf3: IF (Stack[-1] == 0) GOTO 0x1bf6; Pop(1)

0x1bf4: Stack[-2] = (bool) 1
0x1bf5: Return(); Pop(0)

0x1bf6: Stack[-2] = (bool) 0
0x1bf7: Return(); Pop(0)

0x1bf8: PushEmpty()
0x1bf9: PushEmpty(int, string)
0x1bfa: Stack[-1] = "ood9Viktor1"
0x1bfb: Call 0x1844

0x1bfc: Pop(1)
0x1bfd: Push((int) 0)
0x1bfe: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1bff: IF (Stack[-1] == 0) GOTO 0x1c02; Pop(1)

0x1c00: Stack[-2] = (bool) 1
0x1c01: Return(); Pop(0)

0x1c02: Stack[-2] = (bool) 0
0x1c03: Return(); Pop(0)

0x1c04: PushEmpty()
0x1c05: PushEmpty(int, string)
0x1c06: Stack[-1] = "KnowEva"
0x1c07: Call 0x1844

0x1c08: Pop(1)
0x1c09: Push((int) 1)
0x1c0a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1c0b: IF (Stack[-1] == 0) GOTO 0x1c0e; Pop(1)

0x1c0c: Stack[-2] = (bool) 1
0x1c0d: Return(); Pop(0)

0x1c0e: Stack[-2] = (bool) 0
0x1c0f: Return(); Pop(0)

0x1c10: PushEmpty()
0x1c11: PushEmpty(int, string)
0x1c12: Stack[-1] = "d9q01"
0x1c13: Call 0x1844

0x1c14: Pop(1)
0x1c15: Push((int) 2)
0x1c16: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1c17: IF (Stack[-1] == 0) GOTO 0x1c1a; Pop(1)

0x1c18: Stack[-2] = (bool) 1
0x1c19: Return(); Pop(0)

0x1c1a: Stack[-2] = (bool) 0
0x1c1b: Return(); Pop(0)

0x1c1c: PushEmpty()
0x1c1d: PushEmpty(int, string)
0x1c1e: Stack[-1] = "ood9Viktor2"
0x1c1f: Call 0x1844

0x1c20: Pop(1)
0x1c21: Push((int) 0)
0x1c22: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1c23: IF (Stack[-1] == 0) GOTO 0x1c26; Pop(1)

0x1c24: Stack[-2] = (bool) 1
0x1c25: Return(); Pop(0)

0x1c26: Stack[-2] = (bool) 0
0x1c27: Return(); Pop(0)

0x1c28: PushEmpty()
0x1c29: PushEmpty(int, string)
0x1c2a: Stack[-1] = "d9TalkToPolkovodec"
0x1c2b: Call 0x1844

0x1c2c: Pop(1)
0x1c2d: Push((int) 0)
0x1c2e: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1c2f: IF (Stack[-1] == 0) GOTO 0x1c32; Pop(1)

0x1c30: Stack[-2] = (bool) 1
0x1c31: Return(); Pop(0)

0x1c32: Stack[-2] = (bool) 0
0x1c33: Return(); Pop(0)

0x1c34: PushEmpty()
0x1c35: PushEmpty(int, string)
0x1c36: Stack[-1] = "KnowJulia"
0x1c37: Call 0x1844

0x1c38: Pop(1)
0x1c39: Push((int) 1)
0x1c3a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1c3b: IF (Stack[-1] == 0) GOTO 0x1c3e; Pop(1)

0x1c3c: Stack[-2] = (bool) 1
0x1c3d: Return(); Pop(0)

0x1c3e: Stack[-2] = (bool) 0
0x1c3f: Return(); Pop(0)

0x1c40: PushEmpty()
0x1c41: PushEmpty(int, string)
0x1c42: Stack[-1] = "ood9Viktor3"
0x1c43: Call 0x1844

0x1c44: Pop(1)
0x1c45: Push((int) 0)
0x1c46: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1c47: IF (Stack[-1] == 0) GOTO 0x1c4a; Pop(1)

0x1c48: Stack[-2] = (bool) 1
0x1c49: Return(); Pop(0)

0x1c4a: Stack[-2] = (bool) 0
0x1c4b: Return(); Pop(0)

0x1c4c: PushEmpty()
0x1c4d: PushEmpty(int, string)
0x1c4e: Stack[-1] = "KnowStamatins"
0x1c4f: Call 0x1844

0x1c50: Pop(1)
0x1c51: Push((int) 1)
0x1c52: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1c53: IF (Stack[-1] == 0) GOTO 0x1c56; Pop(1)

0x1c54: Stack[-2] = (bool) 1
0x1c55: Return(); Pop(0)

0x1c56: Stack[-2] = (bool) 0
0x1c57: Return(); Pop(0)

0x1c58: PushEmpty()
0x1c59: PushEmpty(int, string)
0x1c5a: Stack[-1] = "KnowTaurusProject"
0x1c5b: Call 0x1844

0x1c5c: Pop(1)
0x1c5d: Push((int) 1)
0x1c5e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1c5f: IF (Stack[-1] == 0) GOTO 0x1c62; Pop(1)

0x1c60: Stack[-2] = (bool) 1
0x1c61: Return(); Pop(0)

0x1c62: Stack[-2] = (bool) 0
0x1c63: Return(); Pop(0)

0x1c64: PushEmpty(object, object)
0x1c65: @ GetDiaryRoot(Stack[-1])
0x1c66: Pop(0)
0x1c67: Pop(0); Push((bool) Stack[-1] == 0)
0x1c68: IF (Stack[-1] == 0) GOTO 0x1c6e; Pop(1)

0x1c69: Push("Can't retrieve diary root")
0x1c6a: @ Trace(Stack[-1])
0x1c6b: Pop(1)
0x1c6c: Stack[-3] = (bool) 0
0x1c6d: Return(); Pop(2)

0x1c6e: Stack[-3] = Stack[-1]
0x1c6f: Return(); Pop(2)

0x1c70: Stack[-1] = 0
0x1c71: PushEmpty(object, object, int, object, object, int)
0x1c72: PushEmpty(object)
0x1c73: Call 0x1c64

0x1c74: Stack[-4] = Stack[-1]
0x1c75: Pop(1)
0x1c76: @@ Find(Stack[-7], Stack[-2])
0x1c77: Pop(0)
0x1c78: Pop(0); Push((bool) Stack[-2] == 0)
0x1c79: IF (Stack[-1] == 0) GOTO 0x1c80; Pop(1)

0x1c7a: Push("Can't find diary parent with id: ")
0x1c7b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1c7c: @ Trace(Stack[-1])
0x1c7d: Pop(1)
0x1c7e: Stack[-9] = (bool) 0
0x1c7f: Return(); Pop(6)

0x1c80: @@ AddChild(Stack[-8])
0x1c81: Pop(0)
0x1c82: Push("player_diary")
0x1c83: Push((int) 1)
0x1c84: @ SetVariable(Stack[-2], Stack[-1])
0x1c85: Pop(2)
0x1c86: @@ GetCategory(Stack[-1])
0x1c87: Pop(0)
0x1c88: @ SetDiarySection(Stack[-1])
0x1c89: Pop(0)
0x1c8a: Stack[-9] = (bool) 0
0x1c8b: Return(); Pop(6)

0x1c8c: Stack[-2] = 0
0x1c8d: Stack[-3] = 0
0x1c8e: PushEmpty(object, object, object, object)
0x1c8f: @ GetMainOutdoorScene(Stack[-2])
0x1c90: Pop(0)
0x1c91: Pop(0); Push((bool) Stack[-2] == 0)
0x1c92: IF (Stack[-1] == 0) GOTO 0x1c99; Pop(1)

0x1c93: Push("Can't find main outdoor scene")
0x1c94: @ Trace(Stack[-1])
0x1c95: Pop(1)
0x1c96: Stack[-1] = 0
0x1c97: Stack[-5] = Stack[-1]
0x1c98: Return(); Pop(4)

0x1c99: @@ GetMap(Stack[-1])
0x1c9a: Pop(0)
0x1c9b: Stack[-5] = Stack[-1]
0x1c9c: Return(); Pop(4)

0x1c9d: Stack[-1] = 0
0x1c9e: Stack[-2] = 0
0x1c9f: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x1ca0: @ GetMainOutdoorScene(Stack[-2])
0x1ca1: Pop(0)
0x1ca2: Pop(0); Push((bool) Stack[-2] == 0)
0x1ca3: IF (Stack[-1] == 0) GOTO 0x1ca8; Pop(1)

0x1ca4: Push("Can't find main outdoor scene")
0x1ca5: @ Trace(Stack[-1])
0x1ca6: Pop(1)
0x1ca7: Return(); Pop(8)

0x1ca8: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x1ca9: Pop(0)
0x1caa: Pop(0); Push((bool) Stack[-1] == 0)
0x1cab: IF (Stack[-1] == 0) GOTO 0x1cb2; Pop(1)

0x1cac: Push("Warning: outdoor scene locator ")
0x1cad: Pop(1); Push(Stack[-1] + Stack[-11]);
0x1cae: Push(" doesnt exist")
0x1caf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1cb0: @ Trace(Stack[-1])
0x1cb1: Pop(1)
0x1cb2: @@ GetMap(Stack[-11])
0x1cb3: Pop(0)
0x1cb4: Pop(0); Push((bool) Stack[-11] == 0)
0x1cb5: IF (Stack[-1] == 0) GOTO 0x1cba; Pop(1)

0x1cb6: Push("Can't find map")
0x1cb7: @ Trace(Stack[-1])
0x1cb8: Pop(1)
0x1cb9: Return(); Pop(8)

0x1cba: Push(CvectorIndex(Stack[-4], 0))
0x1cbb: Push(CvectorIndex(Stack[-5], 2))
0x1cbc: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x1cbd: Pop(2)
0x1cbe: Return(); Pop(8)

0x1cbf: Stack[-2] = 0
0x1cc0: PushEmpty(int, int)
0x1cc1: Push("player")
0x1cc2: @ GetVariable(Stack[-1], Stack[-2])
0x1cc3: Pop(1)
0x1cc4: Push((int) 0)
0x1cc5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cc6: IF (Stack[-1] == 0) GOTO 0x1cca; Pop(1)

0x1cc7: Stack[-3] = (int) 200001
0x1cc8: Return(); Pop(2)

0x1cc9: GOTO 0x1ccf

0x1cca: Push((int) 1)
0x1ccb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ccc: IF (Stack[-1] == 0) GOTO 0x1ccf; Pop(1)

0x1ccd: Stack[-3] = (int) 200002
0x1cce: Return(); Pop(2)

0x1ccf: Stack[-3] = (int) 200003
0x1cd0: Return(); Pop(2)

0x1cd1: PushEmpty(object, object)
0x1cd2: Push("Adding diary entry")
0x1cd3: @ Trace(Stack[-1])
0x1cd4: Pop(1)
0x1cd5: Push((int) 31)
0x1cd6: Push((int) 1)
0x1cd7: Push((int) 12113)
0x1cd8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1cd9: Pop(3)
0x1cda: PushEmpty(bool, object, int)
0x1cdb: Stack[-2] = Stack[-4]
0x1cdc: Stack[-1] = (int) 2
0x1cdd: Call 0x1c71

0x1cde: Pop(3)
0x1cdf: Return(); Pop(2)

0x1ce0: Stack[-1] = 0
0x1ce1: PushEmpty(object, object)
0x1ce2: Push("Adding diary entry")
0x1ce3: @ Trace(Stack[-1])
0x1ce4: Pop(1)
0x1ce5: Push((int) 7)
0x1ce6: Push((int) 2)
0x1ce7: Push((int) 3078)
0x1ce8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1ce9: Pop(3)
0x1cea: PushEmpty(bool, object, int)
0x1ceb: Stack[-2] = Stack[-4]
0x1cec: Stack[-1] = (int) -1
0x1ced: Call 0x1c71

0x1cee: Pop(3)
0x1cef: Return(); Pop(2)

0x1cf0: Stack[-1] = 0
0x1cf1: PushEmpty(object, object)
0x1cf2: Push("Adding diary entry")
0x1cf3: @ Trace(Stack[-1])
0x1cf4: Pop(1)
0x1cf5: Push((int) 77)
0x1cf6: Push((int) 2)
0x1cf7: Push((int) 12159)
0x1cf8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1cf9: Pop(3)
0x1cfa: PushEmpty(bool, object, int)
0x1cfb: Stack[-2] = Stack[-4]
0x1cfc: Stack[-1] = (int) 26
0x1cfd: Call 0x1c71

0x1cfe: Pop(3)
0x1cff: Return(); Pop(2)

0x1d00: Stack[-1] = 0
0x1d01: PushEmpty(object, object)
0x1d02: Push("Adding diary entry")
0x1d03: @ Trace(Stack[-1])
0x1d04: Pop(1)
0x1d05: Push((int) 154)
0x1d06: Push((int) 2)
0x1d07: Push((int) 15365)
0x1d08: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1d09: Pop(3)
0x1d0a: PushEmpty(bool, object, int)
0x1d0b: Stack[-2] = Stack[-4]
0x1d0c: Stack[-1] = (int) -1
0x1d0d: Call 0x1c71

0x1d0e: Pop(3)
0x1d0f: Return(); Pop(2)

0x1d10: Stack[-1] = 0
0x1d11: PushEmpty(object, object)
0x1d12: Push("Adding diary entry")
0x1d13: @ Trace(Stack[-1])
0x1d14: Pop(1)
0x1d15: Push((int) 111)
0x1d16: Push((int) 1)
0x1d17: Push((int) 13734)
0x1d18: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1d19: Pop(3)
0x1d1a: PushEmpty(bool, object, int)
0x1d1b: Stack[-2] = Stack[-4]
0x1d1c: Stack[-1] = (int) -1
0x1d1d: Call 0x1c71

0x1d1e: Pop(3)
0x1d1f: Return(); Pop(2)

0x1d20: Stack[-1] = 0
0x1d21: PushEmpty(object, object)
0x1d22: Push("Adding diary entry")
0x1d23: @ Trace(Stack[-1])
0x1d24: Pop(1)
0x1d25: Push((int) 113)
0x1d26: Push((int) 1)
0x1d27: Push((int) 13736)
0x1d28: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1d29: Pop(3)
0x1d2a: PushEmpty(bool, object, int)
0x1d2b: Stack[-2] = Stack[-4]
0x1d2c: Stack[-1] = (int) 111
0x1d2d: Call 0x1c71

0x1d2e: Pop(3)
0x1d2f: Return(); Pop(2)

0x1d30: Stack[-1] = 0
0x1d31: PushEmpty(object, object)
0x1d32: Push("Adding diary entry")
0x1d33: @ Trace(Stack[-1])
0x1d34: Pop(1)
0x1d35: Push((int) 112)
0x1d36: Push((int) 1)
0x1d37: Push((int) 13735)
0x1d38: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1d39: Pop(3)
0x1d3a: PushEmpty(bool, object, int)
0x1d3b: Stack[-2] = Stack[-4]
0x1d3c: Stack[-1] = (int) 111
0x1d3d: Call 0x1c71

0x1d3e: Pop(3)
0x1d3f: Return(); Pop(2)

0x1d40: Stack[-1] = 0
0x1d41: PushEmpty(object, object)
0x1d42: Push("Adding diary entry")
0x1d43: @ Trace(Stack[-1])
0x1d44: Pop(1)
0x1d45: Push((int) 182)
0x1d46: Push((int) 1)
0x1d47: Push((int) 15445)
0x1d48: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1d49: Pop(3)
0x1d4a: PushEmpty(bool, object, int)
0x1d4b: Stack[-2] = Stack[-4]
0x1d4c: Stack[-1] = (int) -1
0x1d4d: Call 0x1c71

0x1d4e: Pop(3)
0x1d4f: Return(); Pop(2)

0x1d50: Stack[-1] = 0
0x1d51: PushEmpty(object, object)
0x1d52: Push("Adding diary entry")
0x1d53: @ Trace(Stack[-1])
0x1d54: Pop(1)
0x1d55: Push((int) 183)
0x1d56: Push((int) 1)
0x1d57: Push((int) 15446)
0x1d58: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1d59: Pop(3)
0x1d5a: PushEmpty(bool, object, int)
0x1d5b: Stack[-2] = Stack[-4]
0x1d5c: Stack[-1] = (int) 182
0x1d5d: Call 0x1c71

0x1d5e: Pop(3)
0x1d5f: Return(); Pop(2)

0x1d60: Stack[-1] = 0
0x1d61: Push(GlobalVars[1])
0x1d62: Stack[-1] = (bool) 0
0x1d63: GlobalVars[1] = Stack[-1]; Pop(1)
0x1d64: Return(); Pop(0)

0x1d65: PushEmpty()
0x1d66: Push(GlobalVars[1])
0x1d67: Pop(1); Push((bool) Stack[-1] == 0)
0x1d68: IF (Stack[-1] == 0) GOTO 0x1d72; Pop(1)

0x1d69: PushEmpty(int, object)
0x1d6a: Stack[-1] = Stack[-3]
0x1d6b: Push(-2, 1); TaskCall(2)
0x1d6c: Call 0x31

0x1d6d: Pop(-2, 1); TaskReturn
0x1d6e: Pop(2)
0x1d6f: Push(GlobalVars[1])
0x1d70: Stack[-1] = (bool) 1
0x1d71: GlobalVars[1] = Stack[-1]; Pop(1)
0x1d72: PushEmpty(bool, int)
0x1d73: Stack[-1] = (int) 1
0x1d74: Call 0x186e

0x1d75: Pop(1)
0x1d76: IF (Stack[-1] == 0) GOTO 0x1d7e; Pop(1)

0x1d77: PushEmpty(int, object)
0x1d78: Stack[-1] = Stack[-3]
0x1d79: Push(-2, 1); TaskCall(6)
0x1d7a: Call 0x28c

0x1d7b: Pop(-2, 1); TaskReturn
0x1d7c: Pop(2)
0x1d7d: Return(); Pop(0)

0x1d7e: PushEmpty(bool, int)
0x1d7f: Stack[-1] = (int) 2
0x1d80: Call 0x186e

0x1d81: Pop(1)
0x1d82: IF (Stack[-1] == 0) GOTO 0x1d8a; Pop(1)

0x1d83: PushEmpty(int, object)
0x1d84: Stack[-1] = Stack[-3]
0x1d85: Push(-2, 1); TaskCall(8)
0x1d86: Call 0xbe6

0x1d87: Pop(-2, 1); TaskReturn
0x1d88: Pop(2)
0x1d89: Return(); Pop(0)

0x1d8a: PushEmpty(bool, int)
0x1d8b: Stack[-1] = (int) 3
0x1d8c: Call 0x186e

0x1d8d: Pop(1)
0x1d8e: IF (Stack[-1] == 0) GOTO 0x1d96; Pop(1)

0x1d8f: PushEmpty(int, object)
0x1d90: Stack[-1] = Stack[-3]
0x1d91: Push(-2, 1); TaskCall(10)
0x1d92: Call 0xda5

0x1d93: Pop(-2, 1); TaskReturn
0x1d94: Pop(2)
0x1d95: Return(); Pop(0)

0x1d96: PushEmpty(bool, int)
0x1d97: Stack[-1] = (int) 5
0x1d98: Call 0x186e

0x1d99: Pop(1)
0x1d9a: IF (Stack[-1] == 0) GOTO 0x1da2; Pop(1)

0x1d9b: PushEmpty(int, object)
0x1d9c: Stack[-1] = Stack[-3]
0x1d9d: Push(-2, 1); TaskCall(12)
0x1d9e: Call 0x1113

0x1d9f: Pop(-2, 1); TaskReturn
0x1da0: Pop(2)
0x1da1: Return(); Pop(0)

0x1da2: PushEmpty(bool, int)
0x1da3: Stack[-1] = (int) 6
0x1da4: Call 0x186e

0x1da5: Pop(1)
0x1da6: IF (Stack[-1] == 0) GOTO 0x1dae; Pop(1)

0x1da7: PushEmpty(int, object)
0x1da8: Stack[-1] = Stack[-3]
0x1da9: Push(-2, 1); TaskCall(4)
0x1daa: Call 0x121

0x1dab: Pop(-2, 1); TaskReturn
0x1dac: Pop(2)
0x1dad: Return(); Pop(0)

0x1dae: PushEmpty(bool, int)
0x1daf: Stack[-1] = (int) 8
0x1db0: Call 0x186e

0x1db1: Pop(1)
0x1db2: IF (Stack[-1] == 0) GOTO 0x1dba; Pop(1)

0x1db3: PushEmpty(int, object)
0x1db4: Stack[-1] = Stack[-3]
0x1db5: Push(-2, 1); TaskCall(14)
0x1db6: Call 0x13c9

0x1db7: Pop(-2, 1); TaskReturn
0x1db8: Pop(2)
0x1db9: Return(); Pop(0)

0x1dba: PushEmpty(bool, int)
0x1dbb: Stack[-1] = (int) 9
0x1dbc: Call 0x186e

0x1dbd: Pop(1)
0x1dbe: IF (Stack[-1] == 0) GOTO 0x1dc6; Pop(1)

0x1dbf: PushEmpty(int, object)
0x1dc0: Stack[-1] = Stack[-3]
0x1dc1: Push(-2, 1); TaskCall(16)
0x1dc2: Call 0x1543

0x1dc3: Pop(-2, 1); TaskReturn
0x1dc4: Pop(2)
0x1dc5: Return(); Pop(0)

0x1dc6: PushEmpty(bool)
0x1dc7: Call 0x1874

0x1dc8: Pop(1)
0x1dc9: Return(); Pop(0)

