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
	Rage
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	HasItem
	No
	ui/NPC_BigVlad.png
	pt_map_georg
	ShowMap
	ood2BigVlad1
	ood2BigVlad2
	ood2BigVlad3
	ood2BigVlad4
	d2q01BigVladVisit
	ood1BigVlad4
	ood1BigVlad5
	ood1BigVlad6
	ood1BigVlad7
	ood1BigVlad8
	ood1BigVlad9
	d1BigVladAboutKapella
	pt_map_kapella
	AddMark
	d1BigVladAboutMladVlad
	pt_map_mladvlad
	playsound
	mapmark
	ood3BigVlad1
	d3q01
	d3q01BigVladGotoGeorg
	d3q01BigVladGotoGeorgSelf
	pt_map_bigvlad
	ood3BigVlad2
	ood3BigVlad3
	d3q01BigVladAgreedSelf
	d3q01BigVladAgreed
	pt_map_ospina
	pt_map_alexandr
	ood3BigVlad4
	d3q02
	d3q02BigVladGotoHan
	pt_map_han
	ood3BigVlad5
	d4q01
	d4q01BigVladGotoLara
	pt_map_lara
	d4q01BigVladGotoSklad
	pt_map_warehouse_gangster
	d4q01BigVladGotoLaraSelf
	ood4BigVlad1
	ood4BigVlad2
	d4q01BigVladGotoSobor
	pt_map_sobor
	d4q01BigVladGotoSoborAndTheaterSelf
	d4q01BigVladGotoTheater
	pt_map_theater
	quest_d4_01
	pers
	key_actors
	ood4BigVlad3
	FindMark
	Remove
	d4q01LaraGotoMladVlad
	d4q01LaraGotoMladVladSelf
	d4q01LaraGotoOspina
	d4q01LaraGotoOspinaSelf
	d4q01MladVladGotoBigVlad
	d4q01MladVladGotoBigVladSelf
	d4q01MladVladGotoOspina
	d4q01OspinaGotoLara
	d4q01WastedMale
	d4q01Whitemask
	completed
	d4q01_sobor_key
	RemoveItemByType
	d4q01_theater_key
	d5q01
	d5q01BigVladGotoAlexandr
	ood5BigVlad1
	ood6BigVlad1
	ood6BigVlad2
	KnowBigVlad
	d8q01BigVladIsVictim
	ood8BigVlad1
	ood8BigVlad2
	ood8BigVlad3
	ood6BigVlad3
	d6q01BigVladGotoAnna
	pt_map_anna
	d6q01BigVladGotoOspina
	d6q01BigVladGotoAnnaOspinaSelf
	failed
	d4BigVladVisit
	d6q02BigVlad
	d6BigVladVisit
	KnowTermitnik
	ood1BigVlad1
	ood1BigVlad2
	ood1BigVlad3
	d1q01FirstGeorgVisit
	KnowMat
	d2q01
	KnowBurahDead
	KnowRubin
	d6q02
	d6q02KnowAboutAttack
	d6q02Trigger
	d6q01
	d8q01MladVladIsBad
	d8q01BringBadBoy
	KnowAlexandr
	KnowAnna
	KnowGeorg
	KnowMladVlad
	KnowKapella
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
	GetInvItemByName (2 args)
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
		EVENT_11 Op = 0xc4 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x237 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5a8 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb89 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf16 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x15d0 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1b0b Vars = (int, int)
	GTASK_16 Vars = (object) Params = 2
	GTASK_17 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1d19 Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0x2606

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0x1e70

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
0x15: Call 0x1eb1

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
0x26: Call 0x260a

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x1e64

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0x1e75

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0x1f09

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0x1f0b

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x2575

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
0x67: Call 0x1ead

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
0x75: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x76: PushEmpty(object, object)
0x77: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x78: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x79: Call 0x2141

0x7a: Pop(2)
0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral"
0x7d: Call 0xb4

0x7e: Pop(1)
0x7f: Push((int) 401)
0x80: @@ SetMessage(Stack[-1])
0x81: Pop(1)
0x82: @@ ClearReplies()
0x83: Pop(0)
0x84: Push((int) 402)
0x85: Push((int) 471)
0x86: Push((int) 468)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: Push((int) 403)
0x8a: Push((int) 472)
0x8b: Push((int) 469)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: Push((int) 404)
0x8f: Push((int) -1)
0x90: Push((int) 470)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: GOTO 0x96

0x94: Return(); Pop(0)

0x95: GOTO 0x74

0x96: PushEmpty(bool)
0x97: Call 0x1f0d

0x98: Pop(0)
0x99: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9a: @ lshWaitForAnimEnd()
0x9b: Pop(0)
0x9c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xa4

0x9f: PushEmpty(string)
0xa0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa1: Call 0x1eb1

0xa2: Pop(1)
0xa3: GOTO 0x9a

0xa4: GOTO 0xb3

0xa5: Push("all")
0xa6: Push("idle")
0xa7: @ PlayAnimation(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: @ WaitForAnimEnd()
0xaa: Pop(0)
0xab: Push( Stack[3 + Tasks[-1].StackPointer] )
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: GOTO 0xb3

0xae: Push("all")
0xaf: Push("idle")
0xb0: @ PlayAnimation(Stack[-2], Stack[-1])
0xb1: Pop(2)
0xb2: GOTO 0xa9

0xb3: Return(); Pop(0)

0xb4: PushEmpty()
0xb5: PushEmpty(bool)
0xb6: Call 0x1f0d

0xb7: Pop(0)
0xb8: Pop(1); Push((bool) Stack[-1] == 0)
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: Return(); Pop(0)

0xbb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Return(); Pop(0)

0xbe: PushEmpty(string)
0xbf: Stack[-1] = Stack[-2]
0xc0: Call 0x1eb1

0xc1: Pop(1)
0xc2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: Push((int) 1)
0xc6: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0xc7: PushEmpty()
0xc8: Call 0x1ec3

0xc9: Pop(0)
0xca: Push((int) 467)
0xcb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call 0x2141

0xd1: Pop(2)
0xd2: PushEmpty(string)
0xd3: Stack[-1] = "Neutral"
0xd4: Call 0xb4

0xd5: Pop(1)
0xd6: Push((int) 401)
0xd7: @@ SetMessage(Stack[-1])
0xd8: Pop(1)
0xd9: @@ ClearReplies()
0xda: Pop(0)
0xdb: Push((int) 402)
0xdc: Push((int) 471)
0xdd: Push((int) 468)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: Push((int) 403)
0xe1: Push((int) 472)
0xe2: Push((int) 469)
0xe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: Push((int) 404)
0xe6: Push((int) -1)
0xe7: Push((int) 470)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Return(); Pop(0)

0xeb: Push((int) 472)
0xec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xee: PushEmpty(string)
0xef: Stack[-1] = "Neutral"
0xf0: Call 0xb4

0xf1: Pop(1)
0xf2: Push((int) 406)
0xf3: @@ SetMessage(Stack[-1])
0xf4: Pop(1)
0xf5: @@ ClearReplies()
0xf6: Pop(0)
0xf7: Push((int) 413)
0xf8: Push((int) 475)
0xf9: Push((int) 480)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Push((int) 414)
0xfd: Push((int) -1)
0xfe: Push((int) 481)
0xff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100: Pop(3)
0x101: Return(); Pop(0)

0x102: Push((int) 471)
0x103: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x105: PushEmpty(string)
0x106: Stack[-1] = "Neutral"
0x107: Call 0xb4

0x108: Pop(1)
0x109: Push((int) 405)
0x10a: @@ SetMessage(Stack[-1])
0x10b: Pop(1)
0x10c: @@ ClearReplies()
0x10d: Pop(0)
0x10e: Push((int) 407)
0x10f: Push((int) 475)
0x110: Push((int) 473)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Push((int) 408)
0x114: Push((int) 475)
0x115: Push((int) 474)
0x116: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117: Pop(3)
0x118: Return(); Pop(0)

0x119: Push((int) 475)
0x11a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x11c: PushEmpty(string)
0x11d: Stack[-1] = "Neutral"
0x11e: Call 0xb4

0x11f: Pop(1)
0x120: Push((int) 409)
0x121: @@ SetMessage(Stack[-1])
0x122: Pop(1)
0x123: @@ ClearReplies()
0x124: Pop(0)
0x125: Push((int) 410)
0x126: Push((int) -1)
0x127: Push((int) 477)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: Push((int) 411)
0x12b: Push((int) -1)
0x12c: Push((int) 478)
0x12d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(3)
0x12f: Push((int) 412)
0x130: Push((int) -1)
0x131: Push((int) 479)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x136: PushEmpty(bool)
0x137: Call 0x1f0d

0x138: Pop(0)
0x139: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x13a: @ lshStopAnimation()
0x13b: Pop(0)
0x13c: GOTO 0x13f

0x13d: @ StopAnimation()
0x13e: Pop(0)
0x13f: Return(); Pop(0)

0x140: GOTO 0xc5

0x141: Return(); Pop(0)

0x142: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x143: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[-11]
0x146: Call 0x1e75

0x147: Pop(1)
0x148: Pop(1); Push((bool) Stack[-1] == 0)
0x149: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x14a: Stack[-10] = (int) -2
0x14b: Return(); Pop(8)

0x14c: @ CreateDialog(Stack[-4])
0x14d: Pop(0)
0x14e: PushEmpty(int)
0x14f: Call 0x1f09

0x150: Pop(0)
0x151: @@ SetNPCName(Stack[-1])
0x152: Pop(1)
0x153: PushEmpty(string)
0x154: Call 0x1f0b

0x155: Pop(0)
0x156: @@ SetPhoto(Stack[-1])
0x157: Pop(1)
0x158: PushEmpty(int)
0x159: Call 0x2575

0x15a: Pop(0)
0x15b: @@ SetPlayerName(Stack[-1])
0x15c: Pop(1)
0x15d: Stack[-2] = (int) -1
0x15e: @ IsOverrideActive(Stack[-3])
0x15f: Pop(0)
0x160: Push(Stack[-3])
0x161: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x162: Stack[-10] = (int) -2
0x163: Return(); Pop(8)

0x164: @ DoDialog(Stack[-4])
0x165: Pop(0)
0x166: PushEmpty(object, object)
0x167: Stack[-2] = Stack[-11]
0x168: Stack[-1] = Stack[-6]
0x169: Push(-2, 4); TaskCall(5)
0x16a: Call 0x181

0x16b: Pop(-2, 4); TaskReturn
0x16c: Pop(2)
0x16d: @@ IsDialogEnd(Stack[-1])
0x16e: Pop(0)
0x16f: Pop(0); Push((bool) Stack[-1] == 0)
0x170: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x171: @ sync()
0x172: Pop(0)
0x173: @@ IsDialogEnd(Stack[-1])
0x174: Pop(0)
0x175: GOTO 0x16f

0x176: PushEmpty(object)
0x177: Stack[-1] = Stack[-10]
0x178: Call 0x1ead

0x179: Pop(1)
0x17a: @ StopDialog(Stack[-4])
0x17b: Pop(0)
0x17c: @@ GetReturnValue(Stack[-2])
0x17d: Pop(0)
0x17e: Stack[-10] = Stack[-2]
0x17f: Return(); Pop(8)

0x180: Stack[-4] = 0
0x181: PushEmpty()
0x182: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x183: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x184: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x185: Push((int) 1)
0x186: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x187: PushEmpty(bool)
0x188: Stack[-1] = (bool) 0
0x189: PushEmpty(bool, object)
0x18a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18b: Call 0x244a

0x18c: Pop(1)
0x18d: Pop(1); Push((bool) Stack[-1] == 0)
0x18e: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x18f: PushEmpty(bool, object)
0x190: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x191: Call 0x24aa

0x192: Pop(1)
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: Stack[-1] = (bool) 1
0x195: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x196: PushEmpty(object, object)
0x197: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x198: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x199: Call 0x215f

0x19a: Pop(2)
0x19b: PushEmpty(object, object)
0x19c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x19d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x19e: Call 0x2220

0x19f: Pop(2)
0x1a0: PushEmpty(string)
0x1a1: Stack[-1] = "Neutral"
0x1a2: Call 0x227

0x1a3: Pop(1)
0x1a4: Push((int) 10676)
0x1a5: @@ SetMessage(Stack[-1])
0x1a6: Pop(1)
0x1a7: @@ ClearReplies()
0x1a8: Pop(0)
0x1a9: Push((int) 10688)
0x1aa: Push((int) 11789)
0x1ab: Push((int) 11801)
0x1ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ad: Pop(3)
0x1ae: GOTO 0x209

0x1af: PushEmpty(bool, object)
0x1b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b1: Call 0x24da

0x1b2: Pop(1)
0x1b3: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1b4: PushEmpty(string)
0x1b5: Stack[-1] = "Neutral"
0x1b6: Call 0x227

0x1b7: Pop(1)
0x1b8: Push((int) 12502)
0x1b9: @@ SetMessage(Stack[-1])
0x1ba: Pop(1)
0x1bb: @@ ClearReplies()
0x1bc: Pop(0)
0x1bd: PushEmpty(bool)
0x1be: Stack[-1] = (bool) 0
0x1bf: PushEmpty(bool, object)
0x1c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c1: Call 0x244a

0x1c2: Pop(1)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c4: PushEmpty(bool, object)
0x1c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c6: Call 0x2456

0x1c7: Pop(1)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c9: Stack[-1] = (bool) 1
0x1ca: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cb: Push((int) 12027)
0x1cc: Push((int) 13248)
0x1cd: Push((int) 13245)
0x1ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cf: Pop(3)
0x1d0: PushEmpty(bool)
0x1d1: Stack[-1] = (bool) 0
0x1d2: PushEmpty(bool)
0x1d3: Stack[-1] = (bool) 0
0x1d4: PushEmpty(bool)
0x1d5: Stack[-1] = (bool) 0
0x1d6: PushEmpty(bool)
0x1d7: Stack[-1] = (bool) 0
0x1d8: PushEmpty(bool, object)
0x1d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1da: Call 0x2426

0x1db: Pop(1)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1dd: PushEmpty(bool, object)
0x1de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1df: Call 0x2432

0x1e0: Pop(1)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e2: Stack[-1] = (bool) 1
0x1e3: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e4: PushEmpty(bool, object)
0x1e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e6: Call 0x240e

0x1e7: Pop(1)
0x1e8: Pop(1); Push((bool) Stack[-1] == 0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1ea: Stack[-1] = (bool) 1
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1ec: PushEmpty(bool, object)
0x1ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ee: Call 0x241a

0x1ef: Pop(1)
0x1f0: Pop(1); Push((bool) Stack[-1] == 0)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1f2: Stack[-1] = (bool) 1
0x1f3: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f4: PushEmpty(bool, object)
0x1f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f6: Call 0x243e

0x1f7: Pop(1)
0x1f8: Pop(1); Push((bool) Stack[-1] == 0)
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1fa: Stack[-1] = (bool) 1
0x1fb: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fc: Push((int) 12503)
0x1fd: Push((int) 13674)
0x1fe: Push((int) 13673)
0x1ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x200: Pop(3)
0x201: Push((int) 12514)
0x202: Push((int) -1)
0x203: Push((int) 13684)
0x204: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x205: Pop(3)
0x206: GOTO 0x209

0x207: Return(); Pop(0)

0x208: GOTO 0x185

0x209: PushEmpty(bool)
0x20a: Call 0x1f0d

0x20b: Pop(0)
0x20c: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x20d: @ lshWaitForAnimEnd()
0x20e: Pop(0)
0x20f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: GOTO 0x217

0x212: PushEmpty(string)
0x213: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x214: Call 0x1eb1

0x215: Pop(1)
0x216: GOTO 0x20d

0x217: GOTO 0x226

0x218: Push("all")
0x219: Push("idle")
0x21a: @ PlayAnimation(Stack[-2], Stack[-1])
0x21b: Pop(2)
0x21c: @ WaitForAnimEnd()
0x21d: Pop(0)
0x21e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x21f: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x220: GOTO 0x226

0x221: Push("all")
0x222: Push("idle")
0x223: @ PlayAnimation(Stack[-2], Stack[-1])
0x224: Pop(2)
0x225: GOTO 0x21c

0x226: Return(); Pop(0)

0x227: PushEmpty()
0x228: PushEmpty(bool)
0x229: Call 0x1f0d

0x22a: Pop(0)
0x22b: Pop(1); Push((bool) Stack[-1] == 0)
0x22c: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22d: Return(); Pop(0)

0x22e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x22f: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x230: Return(); Pop(0)

0x231: PushEmpty(string)
0x232: Stack[-1] = Stack[-2]
0x233: Call 0x1eb1

0x234: Pop(1)
0x235: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x236: Return(); Pop(0)

0x237: PushEmpty()
0x238: Push((int) 1)
0x239: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x23a: PushEmpty()
0x23b: Call 0x1ec3

0x23c: Pop(0)
0x23d: Push((int) 13245)
0x23e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23f: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x240: PushEmpty(object, object)
0x241: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x242: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x243: Call 0x213b

0x244: Pop(2)
0x245: Push((int) 13253)
0x246: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x247: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x248: PushEmpty(object, object)
0x249: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x24a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24b: Call 0x2165

0x24c: Pop(2)
0x24d: Push((int) 13885)
0x24e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: PushEmpty(object, object)
0x251: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x252: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x253: Call 0x2165

0x254: Pop(2)
0x255: Push((int) 13673)
0x256: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x258: PushEmpty(object, object)
0x259: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x25a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25b: Call 0x2135

0x25c: Pop(2)
0x25d: Push((int) 13683)
0x25e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x260: PushEmpty(object, object)
0x261: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x262: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x263: Call 0x2210

0x264: Pop(2)
0x265: Push((int) 11787)
0x266: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x268: PushEmpty(bool)
0x269: Stack[-1] = (bool) 0
0x26a: PushEmpty(bool, object)
0x26b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x26c: Call 0x244a

0x26d: Pop(1)
0x26e: Pop(1); Push((bool) Stack[-1] == 0)
0x26f: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x270: PushEmpty(bool, object)
0x271: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x272: Call 0x24aa

0x273: Pop(1)
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: Stack[-1] = (bool) 1
0x276: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x277: PushEmpty(object, object)
0x278: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x279: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27a: Call 0x215f

0x27b: Pop(2)
0x27c: PushEmpty(object, object)
0x27d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27f: Call 0x2220

0x280: Pop(2)
0x281: PushEmpty(string)
0x282: Stack[-1] = "Neutral"
0x283: Call 0x227

0x284: Pop(1)
0x285: Push((int) 10676)
0x286: @@ SetMessage(Stack[-1])
0x287: Pop(1)
0x288: @@ ClearReplies()
0x289: Pop(0)
0x28a: Push((int) 10688)
0x28b: Push((int) 11789)
0x28c: Push((int) 11801)
0x28d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28e: Pop(3)
0x28f: Return(); Pop(0)

0x290: PushEmpty(bool, object)
0x291: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x292: Call 0x24da

0x293: Pop(1)
0x294: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x295: PushEmpty(string)
0x296: Stack[-1] = "Neutral"
0x297: Call 0x227

0x298: Pop(1)
0x299: Push((int) 12502)
0x29a: @@ SetMessage(Stack[-1])
0x29b: Pop(1)
0x29c: @@ ClearReplies()
0x29d: Pop(0)
0x29e: PushEmpty(bool)
0x29f: Stack[-1] = (bool) 0
0x2a0: PushEmpty(bool, object)
0x2a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a2: Call 0x244a

0x2a3: Pop(1)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a5: PushEmpty(bool, object)
0x2a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a7: Call 0x2456

0x2a8: Pop(1)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: Stack[-1] = (bool) 1
0x2ab: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2ac: Push((int) 12027)
0x2ad: Push((int) 13248)
0x2ae: Push((int) 13245)
0x2af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b0: Pop(3)
0x2b1: PushEmpty(bool)
0x2b2: Stack[-1] = (bool) 0
0x2b3: PushEmpty(bool)
0x2b4: Stack[-1] = (bool) 0
0x2b5: PushEmpty(bool)
0x2b6: Stack[-1] = (bool) 0
0x2b7: PushEmpty(bool)
0x2b8: Stack[-1] = (bool) 0
0x2b9: PushEmpty(bool, object)
0x2ba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2bb: Call 0x2426

0x2bc: Pop(1)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2be: PushEmpty(bool, object)
0x2bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c0: Call 0x2432

0x2c1: Pop(1)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c3: Stack[-1] = (bool) 1
0x2c4: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c5: PushEmpty(bool, object)
0x2c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c7: Call 0x240e

0x2c8: Pop(1)
0x2c9: Pop(1); Push((bool) Stack[-1] == 0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2cb: Stack[-1] = (bool) 1
0x2cc: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2cd: PushEmpty(bool, object)
0x2ce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2cf: Call 0x241a

0x2d0: Pop(1)
0x2d1: Pop(1); Push((bool) Stack[-1] == 0)
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d3: Stack[-1] = (bool) 1
0x2d4: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d5: PushEmpty(bool, object)
0x2d6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d7: Call 0x243e

0x2d8: Pop(1)
0x2d9: Pop(1); Push((bool) Stack[-1] == 0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2db: Stack[-1] = (bool) 1
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2dd: Push((int) 12503)
0x2de: Push((int) 13674)
0x2df: Push((int) 13673)
0x2e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e1: Pop(3)
0x2e2: Push((int) 12514)
0x2e3: Push((int) -1)
0x2e4: Push((int) 13684)
0x2e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e6: Pop(3)
0x2e7: Return(); Pop(0)

0x2e8: Push((int) 13674)
0x2e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2eb: PushEmpty(string)
0x2ec: Stack[-1] = "Neutral"
0x2ed: Call 0x227

0x2ee: Pop(1)
0x2ef: Push((int) 12504)
0x2f0: @@ SetMessage(Stack[-1])
0x2f1: Pop(1)
0x2f2: @@ ClearReplies()
0x2f3: Pop(0)
0x2f4: Push((int) 12505)
0x2f5: Push((int) 13676)
0x2f6: Push((int) 13675)
0x2f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f8: Pop(3)
0x2f9: Return(); Pop(0)

0x2fa: Push((int) 13676)
0x2fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fc: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x2fd: PushEmpty(string)
0x2fe: Stack[-1] = "Neutral"
0x2ff: Call 0x227

0x300: Pop(1)
0x301: Push((int) 12506)
0x302: @@ SetMessage(Stack[-1])
0x303: Pop(1)
0x304: @@ ClearReplies()
0x305: Pop(0)
0x306: Push((int) 12507)
0x307: Push((int) 13678)
0x308: Push((int) 13677)
0x309: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30a: Pop(3)
0x30b: Return(); Pop(0)

0x30c: Push((int) 13678)
0x30d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x30f: PushEmpty(string)
0x310: Stack[-1] = "Neutral"
0x311: Call 0x227

0x312: Pop(1)
0x313: Push((int) 12508)
0x314: @@ SetMessage(Stack[-1])
0x315: Pop(1)
0x316: @@ ClearReplies()
0x317: Pop(0)
0x318: Push((int) 12509)
0x319: Push((int) 13680)
0x31a: Push((int) 13679)
0x31b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31c: Pop(3)
0x31d: Return(); Pop(0)

0x31e: Push((int) 13680)
0x31f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x321: PushEmpty(string)
0x322: Stack[-1] = "Neutral"
0x323: Call 0x227

0x324: Pop(1)
0x325: Push((int) 12510)
0x326: @@ SetMessage(Stack[-1])
0x327: Pop(1)
0x328: @@ ClearReplies()
0x329: Pop(0)
0x32a: Push((int) 12511)
0x32b: Push((int) 13682)
0x32c: Push((int) 13681)
0x32d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32e: Pop(3)
0x32f: Return(); Pop(0)

0x330: Push((int) 13682)
0x331: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x332: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x333: PushEmpty(string)
0x334: Stack[-1] = "Neutral"
0x335: Call 0x227

0x336: Pop(1)
0x337: Push((int) 12512)
0x338: @@ SetMessage(Stack[-1])
0x339: Pop(1)
0x33a: @@ ClearReplies()
0x33b: Pop(0)
0x33c: Push((int) 12513)
0x33d: Push((int) -1)
0x33e: Push((int) 13683)
0x33f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x340: Pop(3)
0x341: Return(); Pop(0)

0x342: Push((int) 13248)
0x343: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x345: PushEmpty(string)
0x346: Stack[-1] = "Neutral"
0x347: Call 0x227

0x348: Pop(1)
0x349: Push((int) 12030)
0x34a: @@ SetMessage(Stack[-1])
0x34b: Pop(1)
0x34c: @@ ClearReplies()
0x34d: Pop(0)
0x34e: Push((int) 12031)
0x34f: Push((int) 13250)
0x350: Push((int) 13249)
0x351: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x352: Pop(3)
0x353: Push((int) 12692)
0x354: Push((int) 3597)
0x355: Push((int) 13882)
0x356: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x357: Pop(3)
0x358: Return(); Pop(0)

0x359: Push((int) 3597)
0x35a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x35c: PushEmpty(string)
0x35d: Stack[-1] = "Neutral"
0x35e: Call 0x227

0x35f: Pop(1)
0x360: Push((int) 3321)
0x361: @@ SetMessage(Stack[-1])
0x362: Pop(1)
0x363: @@ ClearReplies()
0x364: Pop(0)
0x365: Push((int) 3322)
0x366: Push((int) 3599)
0x367: Push((int) 3598)
0x368: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x369: Pop(3)
0x36a: Push((int) 3535)
0x36b: Push((int) 3817)
0x36c: Push((int) 3816)
0x36d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36e: Pop(3)
0x36f: Return(); Pop(0)

0x370: Push((int) 3817)
0x371: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x372: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x373: PushEmpty(string)
0x374: Stack[-1] = "Neutral"
0x375: Call 0x227

0x376: Pop(1)
0x377: Push((int) 3536)
0x378: @@ SetMessage(Stack[-1])
0x379: Pop(1)
0x37a: @@ ClearReplies()
0x37b: Pop(0)
0x37c: Push((int) 3537)
0x37d: Push((int) 3604)
0x37e: Push((int) 3818)
0x37f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x380: Pop(3)
0x381: Push((int) 3538)
0x382: Push((int) 3599)
0x383: Push((int) 3819)
0x384: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x385: Pop(3)
0x386: Return(); Pop(0)

0x387: Push((int) 3599)
0x388: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x389: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x38a: PushEmpty(string)
0x38b: Stack[-1] = "Neutral"
0x38c: Call 0x227

0x38d: Pop(1)
0x38e: Push((int) 3323)
0x38f: @@ SetMessage(Stack[-1])
0x390: Pop(1)
0x391: @@ ClearReplies()
0x392: Pop(0)
0x393: Push((int) 3324)
0x394: Push((int) 3604)
0x395: Push((int) 3600)
0x396: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x397: Pop(3)
0x398: Push((int) 3325)
0x399: Push((int) 3604)
0x39a: Push((int) 3601)
0x39b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39c: Pop(3)
0x39d: Return(); Pop(0)

0x39e: Push((int) 3604)
0x39f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a0: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3a1: PushEmpty(string)
0x3a2: Stack[-1] = "Neutral"
0x3a3: Call 0x227

0x3a4: Pop(1)
0x3a5: Push((int) 3327)
0x3a6: @@ SetMessage(Stack[-1])
0x3a7: Pop(1)
0x3a8: @@ ClearReplies()
0x3a9: Pop(0)
0x3aa: Push((int) 3330)
0x3ab: Push((int) 3815)
0x3ac: Push((int) 3607)
0x3ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ae: Pop(3)
0x3af: Return(); Pop(0)

0x3b0: Push((int) 13250)
0x3b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3b3: PushEmpty(string)
0x3b4: Stack[-1] = "Neutral"
0x3b5: Call 0x227

0x3b6: Pop(1)
0x3b7: Push((int) 12032)
0x3b8: @@ SetMessage(Stack[-1])
0x3b9: Pop(1)
0x3ba: @@ ClearReplies()
0x3bb: Pop(0)
0x3bc: Push((int) 12033)
0x3bd: Push((int) 13252)
0x3be: Push((int) 13251)
0x3bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c0: Pop(3)
0x3c1: Push((int) 3539)
0x3c2: Push((int) 3823)
0x3c3: Push((int) 3822)
0x3c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c5: Pop(3)
0x3c6: Return(); Pop(0)

0x3c7: Push((int) 3823)
0x3c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c9: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3ca: PushEmpty(string)
0x3cb: Stack[-1] = "Neutral"
0x3cc: Call 0x227

0x3cd: Pop(1)
0x3ce: Push((int) 3540)
0x3cf: @@ SetMessage(Stack[-1])
0x3d0: Pop(1)
0x3d1: @@ ClearReplies()
0x3d2: Pop(0)
0x3d3: Push((int) 3541)
0x3d4: Push((int) 13252)
0x3d5: Push((int) 3824)
0x3d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d7: Pop(3)
0x3d8: Push((int) 3533)
0x3d9: Push((int) 3815)
0x3da: Push((int) 3814)
0x3db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dc: Pop(3)
0x3dd: Return(); Pop(0)

0x3de: Push((int) 3815)
0x3df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e0: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3e1: PushEmpty(string)
0x3e2: Stack[-1] = "Neutral"
0x3e3: Call 0x227

0x3e4: Pop(1)
0x3e5: Push((int) 3534)
0x3e6: @@ SetMessage(Stack[-1])
0x3e7: Pop(1)
0x3e8: @@ ClearReplies()
0x3e9: Pop(0)
0x3ea: Push((int) 12694)
0x3eb: Push((int) -1)
0x3ec: Push((int) 13885)
0x3ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ee: Pop(3)
0x3ef: Return(); Pop(0)

0x3f0: Push((int) 13252)
0x3f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3f3: PushEmpty(string)
0x3f4: Stack[-1] = "Neutral"
0x3f5: Call 0x227

0x3f6: Pop(1)
0x3f7: Push((int) 12034)
0x3f8: @@ SetMessage(Stack[-1])
0x3f9: Pop(1)
0x3fa: @@ ClearReplies()
0x3fb: Pop(0)
0x3fc: Push((int) 12035)
0x3fd: Push((int) -1)
0x3fe: Push((int) 13253)
0x3ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x400: Pop(3)
0x401: Return(); Pop(0)

0x402: Push((int) 11789)
0x403: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x404: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x405: PushEmpty(string)
0x406: Stack[-1] = "Neutral"
0x407: Call 0x227

0x408: Pop(1)
0x409: Push((int) 10678)
0x40a: @@ SetMessage(Stack[-1])
0x40b: Pop(1)
0x40c: @@ ClearReplies()
0x40d: Pop(0)
0x40e: Push((int) 10679)
0x40f: Push((int) 11791)
0x410: Push((int) 11790)
0x411: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x412: Pop(3)
0x413: Push((int) 10687)
0x414: Push((int) -1)
0x415: Push((int) 11800)
0x416: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x417: Pop(3)
0x418: Return(); Pop(0)

0x419: Push((int) 11791)
0x41a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41b: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x41c: PushEmpty(string)
0x41d: Stack[-1] = "Neutral"
0x41e: Call 0x227

0x41f: Pop(1)
0x420: Push((int) 10680)
0x421: @@ SetMessage(Stack[-1])
0x422: Pop(1)
0x423: @@ ClearReplies()
0x424: Pop(0)
0x425: Push((int) 10681)
0x426: Push((int) 11793)
0x427: Push((int) 11792)
0x428: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x429: Pop(3)
0x42a: Push((int) 10685)
0x42b: Push((int) 11793)
0x42c: Push((int) 11796)
0x42d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42e: Pop(3)
0x42f: Push((int) 10686)
0x430: Push((int) 11793)
0x431: Push((int) 11798)
0x432: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x433: Pop(3)
0x434: Return(); Pop(0)

0x435: Push((int) 11793)
0x436: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x437: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x438: PushEmpty(string)
0x439: Stack[-1] = "Neutral"
0x43a: Call 0x227

0x43b: Pop(1)
0x43c: Push((int) 10682)
0x43d: @@ SetMessage(Stack[-1])
0x43e: Pop(1)
0x43f: @@ ClearReplies()
0x440: Pop(0)
0x441: Push((int) 10683)
0x442: Push((int) -1)
0x443: Push((int) 11794)
0x444: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x445: Pop(3)
0x446: Push((int) 10684)
0x447: Push((int) -1)
0x448: Push((int) 11795)
0x449: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44a: Pop(3)
0x44b: Return(); Pop(0)

0x44c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x44d: PushEmpty(bool)
0x44e: Call 0x1f0d

0x44f: Pop(0)
0x450: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x451: @ lshStopAnimation()
0x452: Pop(0)
0x453: GOTO 0x456

0x454: @ StopAnimation()
0x455: Pop(0)
0x456: Return(); Pop(0)

0x457: GOTO 0x238

0x458: Return(); Pop(0)

0x459: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x45a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x45b: PushEmpty(bool, object)
0x45c: Stack[-1] = Stack[-11]
0x45d: Call 0x1e75

0x45e: Pop(1)
0x45f: Pop(1); Push((bool) Stack[-1] == 0)
0x460: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x461: Stack[-10] = (int) -2
0x462: Return(); Pop(8)

0x463: @ CreateDialog(Stack[-4])
0x464: Pop(0)
0x465: PushEmpty(int)
0x466: Call 0x1f09

0x467: Pop(0)
0x468: @@ SetNPCName(Stack[-1])
0x469: Pop(1)
0x46a: PushEmpty(string)
0x46b: Call 0x1f0b

0x46c: Pop(0)
0x46d: @@ SetPhoto(Stack[-1])
0x46e: Pop(1)
0x46f: PushEmpty(int)
0x470: Call 0x2575

0x471: Pop(0)
0x472: @@ SetPlayerName(Stack[-1])
0x473: Pop(1)
0x474: Stack[-2] = (int) -1
0x475: @ IsOverrideActive(Stack[-3])
0x476: Pop(0)
0x477: Push(Stack[-3])
0x478: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x479: Stack[-10] = (int) -2
0x47a: Return(); Pop(8)

0x47b: @ DoDialog(Stack[-4])
0x47c: Pop(0)
0x47d: PushEmpty(object, object)
0x47e: Stack[-2] = Stack[-11]
0x47f: Stack[-1] = Stack[-6]
0x480: Push(-2, 4); TaskCall(7)
0x481: Call 0x498

0x482: Pop(-2, 4); TaskReturn
0x483: Pop(2)
0x484: @@ IsDialogEnd(Stack[-1])
0x485: Pop(0)
0x486: Pop(0); Push((bool) Stack[-1] == 0)
0x487: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x488: @ sync()
0x489: Pop(0)
0x48a: @@ IsDialogEnd(Stack[-1])
0x48b: Pop(0)
0x48c: GOTO 0x486

0x48d: PushEmpty(object)
0x48e: Stack[-1] = Stack[-10]
0x48f: Call 0x1ead

0x490: Pop(1)
0x491: @ StopDialog(Stack[-4])
0x492: Pop(0)
0x493: @@ GetReturnValue(Stack[-2])
0x494: Pop(0)
0x495: Stack[-10] = Stack[-2]
0x496: Return(); Pop(8)

0x497: Stack[-4] = 0
0x498: PushEmpty()
0x499: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x49a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x49b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x49c: Push((int) 1)
0x49d: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x49e: PushEmpty(bool, object)
0x49f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a0: Call 0x24f2

0x4a1: Pop(1)
0x4a2: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4a3: PushEmpty(object, object)
0x4a4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a6: Call 0x2226

0x4a7: Pop(2)
0x4a8: PushEmpty(string)
0x4a9: Stack[-1] = "Neutral"
0x4aa: Call 0x598

0x4ab: Pop(1)
0x4ac: Push((int) 5238)
0x4ad: @@ SetMessage(Stack[-1])
0x4ae: Pop(1)
0x4af: @@ ClearReplies()
0x4b0: Pop(0)
0x4b1: Push((int) 5240)
0x4b2: Push((int) 6468)
0x4b3: Push((int) 5775)
0x4b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b5: Pop(3)
0x4b6: Push((int) 5239)
0x4b7: Push((int) 6465)
0x4b8: Push((int) 5774)
0x4b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ba: Pop(3)
0x4bb: GOTO 0x57a

0x4bc: PushEmpty(bool)
0x4bd: Stack[-1] = (bool) 0
0x4be: PushEmpty(bool, object)
0x4bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c0: Call 0x24fe

0x4c1: Pop(1)
0x4c2: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c3: PushEmpty(bool, object)
0x4c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c5: Call 0x223e

0x4c6: Pop(1)
0x4c7: Pop(1); Push((bool) Stack[-1] == 0)
0x4c8: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c9: Stack[-1] = (bool) 1
0x4ca: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4cb: PushEmpty(string)
0x4cc: Stack[-1] = "Neutral"
0x4cd: Call 0x598

0x4ce: Pop(1)
0x4cf: Push((int) 5253)
0x4d0: @@ SetMessage(Stack[-1])
0x4d1: Pop(1)
0x4d2: @@ ClearReplies()
0x4d3: Pop(0)
0x4d4: Push((int) 5254)
0x4d5: Push((int) 5792)
0x4d6: Push((int) 5791)
0x4d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d8: Pop(3)
0x4d9: Push((int) 5260)
0x4da: Push((int) 5798)
0x4db: Push((int) 5797)
0x4dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4dd: Pop(3)
0x4de: Push((int) 5259)
0x4df: Push((int) -1)
0x4e0: Push((int) 5796)
0x4e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e2: Pop(3)
0x4e3: GOTO 0x57a

0x4e4: PushEmpty(string)
0x4e5: Stack[-1] = "Neutral"
0x4e6: Call 0x598

0x4e7: Pop(1)
0x4e8: Push((int) 7539)
0x4e9: @@ SetMessage(Stack[-1])
0x4ea: Pop(1)
0x4eb: @@ ClearReplies()
0x4ec: Pop(0)
0x4ed: PushEmpty(bool)
0x4ee: Stack[-1] = (bool) 0
0x4ef: PushEmpty(bool, object)
0x4f0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f1: Call 0x250a

0x4f2: Pop(1)
0x4f3: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f4: PushEmpty(bool, object)
0x4f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f6: Call 0x223e

0x4f7: Pop(1)
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f9: Stack[-1] = (bool) 1
0x4fa: IF (Stack[-1] == 0) GOTO 0x500; Pop(1)

0x4fb: Push((int) 7540)
0x4fc: Push((int) 5777)
0x4fd: Push((int) 8322)
0x4fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ff: Pop(3)
0x500: PushEmpty(bool)
0x501: Stack[-1] = (bool) 0
0x502: PushEmpty(bool, object)
0x503: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x504: Call 0x24b6

0x505: Pop(1)
0x506: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x507: PushEmpty(bool, object)
0x508: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x509: Call 0x22a8

0x50a: Pop(1)
0x50b: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50c: Stack[-1] = (bool) 1
0x50d: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x50e: Push((int) 7548)
0x50f: Push((int) 8354)
0x510: Push((int) 8330)
0x511: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x512: Pop(3)
0x513: PushEmpty(bool)
0x514: Stack[-1] = (bool) 0
0x515: PushEmpty(bool, object)
0x516: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x517: Call 0x249e

0x518: Pop(1)
0x519: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51a: PushEmpty(bool, object)
0x51b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x51c: Call 0x22b4

0x51d: Pop(1)
0x51e: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51f: Stack[-1] = (bool) 1
0x520: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x521: Push((int) 7552)
0x522: Push((int) 8349)
0x523: Push((int) 8334)
0x524: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x525: Pop(3)
0x526: PushEmpty(bool)
0x527: Stack[-1] = (bool) 0
0x528: PushEmpty(bool, object)
0x529: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52a: Call 0x24c2

0x52b: Pop(1)
0x52c: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x52d: PushEmpty(bool, object)
0x52e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52f: Call 0x22c0

0x530: Pop(1)
0x531: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x532: Stack[-1] = (bool) 1
0x533: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x534: Push((int) 7553)
0x535: Push((int) 8350)
0x536: Push((int) 8335)
0x537: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x538: Pop(3)
0x539: PushEmpty(bool)
0x53a: Stack[-1] = (bool) 0
0x53b: PushEmpty(bool, object)
0x53c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x53d: Call 0x24ce

0x53e: Pop(1)
0x53f: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x540: PushEmpty(bool, object)
0x541: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x542: Call 0x22cc

0x543: Pop(1)
0x544: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x545: Stack[-1] = (bool) 1
0x546: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x547: Push((int) 7556)
0x548: Push((int) 8351)
0x549: Push((int) 8338)
0x54a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54b: Pop(3)
0x54c: PushEmpty(bool)
0x54d: Stack[-1] = (bool) 0
0x54e: PushEmpty(bool, object)
0x54f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x550: Call 0x232c

0x551: Pop(1)
0x552: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x553: PushEmpty(bool, object)
0x554: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x555: Call 0x22d8

0x556: Pop(1)
0x557: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x558: Stack[-1] = (bool) 1
0x559: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55a: Push((int) 7560)
0x55b: Push((int) 8352)
0x55c: Push((int) 8342)
0x55d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55e: Pop(3)
0x55f: PushEmpty(bool)
0x560: Stack[-1] = (bool) 0
0x561: PushEmpty(bool, object)
0x562: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x563: Call 0x24e6

0x564: Pop(1)
0x565: IF (Stack[-1] == 0) GOTO 0x56c; Pop(1)

0x566: PushEmpty(bool, object)
0x567: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x568: Call 0x22e4

0x569: Pop(1)
0x56a: IF (Stack[-1] == 0) GOTO 0x56c; Pop(1)

0x56b: Stack[-1] = (bool) 1
0x56c: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x56d: Push((int) 7561)
0x56e: Push((int) 8353)
0x56f: Push((int) 8343)
0x570: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x571: Pop(3)
0x572: Push((int) 7590)
0x573: Push((int) -1)
0x574: Push((int) 8376)
0x575: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x576: Pop(3)
0x577: GOTO 0x57a

0x578: Return(); Pop(0)

0x579: GOTO 0x49c

0x57a: PushEmpty(bool)
0x57b: Call 0x1f0d

0x57c: Pop(0)
0x57d: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x57e: @ lshWaitForAnimEnd()
0x57f: Pop(0)
0x580: Push( Stack[3 + Tasks[-1].StackPointer] )
0x581: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x582: GOTO 0x588

0x583: PushEmpty(string)
0x584: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x585: Call 0x1eb1

0x586: Pop(1)
0x587: GOTO 0x57e

0x588: GOTO 0x597

0x589: Push("all")
0x58a: Push("idle")
0x58b: @ PlayAnimation(Stack[-2], Stack[-1])
0x58c: Pop(2)
0x58d: @ WaitForAnimEnd()
0x58e: Pop(0)
0x58f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x590: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x591: GOTO 0x597

0x592: Push("all")
0x593: Push("idle")
0x594: @ PlayAnimation(Stack[-2], Stack[-1])
0x595: Pop(2)
0x596: GOTO 0x58d

0x597: Return(); Pop(0)

0x598: PushEmpty()
0x599: PushEmpty(bool)
0x59a: Call 0x1f0d

0x59b: Pop(0)
0x59c: Pop(1); Push((bool) Stack[-1] == 0)
0x59d: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x59e: Return(); Pop(0)

0x59f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x5a1: Return(); Pop(0)

0x5a2: PushEmpty(string)
0x5a3: Stack[-1] = Stack[-2]
0x5a4: Call 0x1eb1

0x5a5: Pop(1)
0x5a6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5a7: Return(); Pop(0)

0x5a8: PushEmpty()
0x5a9: Push((int) 1)
0x5aa: IF (Stack[-1] == 0) GOTO 0xa9e; Pop(1)

0x5ab: PushEmpty()
0x5ac: Call 0x1ec3

0x5ad: Pop(0)
0x5ae: Push((int) 6488)
0x5af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b0: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5b1: PushEmpty(object, object)
0x5b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5b4: Call 0x222c

0x5b5: Pop(2)
0x5b6: PushEmpty(object, object)
0x5b7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5b9: Call 0x1f61

0x5ba: Pop(2)
0x5bb: PushEmpty(object, object)
0x5bc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5bd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5be: Call 0x1f7a

0x5bf: Pop(2)
0x5c0: Push((int) 6485)
0x5c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c2: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5c3: PushEmpty(object, object)
0x5c4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c6: Call 0x222c

0x5c7: Pop(2)
0x5c8: PushEmpty(object, object)
0x5c9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5cb: Call 0x1f61

0x5cc: Pop(2)
0x5cd: PushEmpty(object, object)
0x5ce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d0: Call 0x1f7a

0x5d1: Pop(2)
0x5d2: Push((int) 6484)
0x5d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d4: IF (Stack[-1] == 0) GOTO 0x5e4; Pop(1)

0x5d5: PushEmpty(object, object)
0x5d6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5d7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d8: Call 0x222c

0x5d9: Pop(2)
0x5da: PushEmpty(object, object)
0x5db: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5dc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5dd: Call 0x1f61

0x5de: Pop(2)
0x5df: PushEmpty(object, object)
0x5e0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5e2: Call 0x1f7a

0x5e3: Pop(2)
0x5e4: Push((int) 6474)
0x5e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e6: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5e7: PushEmpty(object, object)
0x5e8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ea: Call 0x222c

0x5eb: Pop(2)
0x5ec: PushEmpty(object, object)
0x5ed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ef: Call 0x1f61

0x5f0: Pop(2)
0x5f1: PushEmpty(object, object)
0x5f2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f4: Call 0x1f7a

0x5f5: Pop(2)
0x5f6: Push((int) 6481)
0x5f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f8: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x5f9: PushEmpty(object, object)
0x5fa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5fb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5fc: Call 0x222c

0x5fd: Pop(2)
0x5fe: PushEmpty(object, object)
0x5ff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x600: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x601: Call 0x1f61

0x602: Pop(2)
0x603: PushEmpty(object, object)
0x604: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x605: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x606: Call 0x1f7a

0x607: Pop(2)
0x608: Push((int) 6471)
0x609: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x60a: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x60b: PushEmpty(object, object)
0x60c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x60d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x60e: Call 0x222c

0x60f: Pop(2)
0x610: PushEmpty(object, object)
0x611: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x612: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x613: Call 0x1f61

0x614: Pop(2)
0x615: PushEmpty(object, object)
0x616: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x617: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x618: Call 0x1f7a

0x619: Pop(2)
0x61a: Push((int) 5793)
0x61b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x61c: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x61d: PushEmpty(object, object)
0x61e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x61f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x620: Call 0x2232

0x621: Pop(2)
0x622: Push((int) 5794)
0x623: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x624: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x625: PushEmpty(object, object)
0x626: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x627: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x628: Call 0x2232

0x629: Pop(2)
0x62a: Push((int) 5799)
0x62b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x62c: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x62d: PushEmpty(object, object)
0x62e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x62f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x630: Call 0x2232

0x631: Pop(2)
0x632: Push((int) 5796)
0x633: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x634: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x635: PushEmpty(object, object)
0x636: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x637: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x638: Call 0x2232

0x639: Pop(2)
0x63a: Push((int) 5785)
0x63b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x63c: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x63d: PushEmpty(object, object)
0x63e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x63f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x640: Call 0x2238

0x641: Pop(2)
0x642: Push((int) 5782)
0x643: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x644: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x645: PushEmpty(object, object)
0x646: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x647: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x648: Call 0x2238

0x649: Pop(2)
0x64a: Push((int) 8364)
0x64b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x64c: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x64d: PushEmpty(object, object)
0x64e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x64f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x650: Call 0x1f3d

0x651: Pop(2)
0x652: Push((int) 8365)
0x653: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x654: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x655: PushEmpty(object, object)
0x656: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x657: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x658: Call 0x1f3d

0x659: Pop(2)
0x65a: Push((int) 8375)
0x65b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x65c: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x65d: PushEmpty(object, object)
0x65e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x65f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x660: Call 0x1f43

0x661: Pop(2)
0x662: Push((int) 8390)
0x663: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x664: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x665: PushEmpty(object, object)
0x666: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x667: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x668: Call 0x1f49

0x669: Pop(2)
0x66a: Push((int) 8391)
0x66b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x66c: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x66d: PushEmpty(object, object)
0x66e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x66f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x670: Call 0x1f49

0x671: Pop(2)
0x672: Push((int) 8400)
0x673: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x674: IF (Stack[-1] == 0) GOTO 0x67a; Pop(1)

0x675: PushEmpty(object, object)
0x676: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x677: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x678: Call 0x1f4f

0x679: Pop(2)
0x67a: Push((int) 8411)
0x67b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x67c: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x67d: PushEmpty(object, object)
0x67e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x67f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x680: Call 0x1f4f

0x681: Pop(2)
0x682: Push((int) 8415)
0x683: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x684: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x685: PushEmpty(object, object)
0x686: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x687: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x688: Call 0x1f55

0x689: Pop(2)
0x68a: Push((int) 8406)
0x68b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x68c: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x68d: PushEmpty(object, object)
0x68e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x690: Call 0x1f55

0x691: Pop(2)
0x692: Push((int) 8409)
0x693: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x694: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x695: PushEmpty(object, object)
0x696: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x697: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x698: Call 0x1f5b

0x699: Pop(2)
0x69a: Push((int) 5773)
0x69b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69c: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x69d: PushEmpty(bool, object)
0x69e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69f: Call 0x24f2

0x6a0: Pop(1)
0x6a1: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6a2: PushEmpty(object, object)
0x6a3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6a5: Call 0x2226

0x6a6: Pop(2)
0x6a7: PushEmpty(string)
0x6a8: Stack[-1] = "Neutral"
0x6a9: Call 0x598

0x6aa: Pop(1)
0x6ab: Push((int) 5238)
0x6ac: @@ SetMessage(Stack[-1])
0x6ad: Pop(1)
0x6ae: @@ ClearReplies()
0x6af: Pop(0)
0x6b0: Push((int) 5240)
0x6b1: Push((int) 6468)
0x6b2: Push((int) 5775)
0x6b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b4: Pop(3)
0x6b5: Push((int) 5239)
0x6b6: Push((int) 6465)
0x6b7: Push((int) 5774)
0x6b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b9: Pop(3)
0x6ba: Return(); Pop(0)

0x6bb: PushEmpty(bool)
0x6bc: Stack[-1] = (bool) 0
0x6bd: PushEmpty(bool, object)
0x6be: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6bf: Call 0x24fe

0x6c0: Pop(1)
0x6c1: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c2: PushEmpty(bool, object)
0x6c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c4: Call 0x223e

0x6c5: Pop(1)
0x6c6: Pop(1); Push((bool) Stack[-1] == 0)
0x6c7: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c8: Stack[-1] = (bool) 1
0x6c9: IF (Stack[-1] == 0) GOTO 0x6e3; Pop(1)

0x6ca: PushEmpty(string)
0x6cb: Stack[-1] = "Neutral"
0x6cc: Call 0x598

0x6cd: Pop(1)
0x6ce: Push((int) 5253)
0x6cf: @@ SetMessage(Stack[-1])
0x6d0: Pop(1)
0x6d1: @@ ClearReplies()
0x6d2: Pop(0)
0x6d3: Push((int) 5254)
0x6d4: Push((int) 5792)
0x6d5: Push((int) 5791)
0x6d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d7: Pop(3)
0x6d8: Push((int) 5260)
0x6d9: Push((int) 5798)
0x6da: Push((int) 5797)
0x6db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6dc: Pop(3)
0x6dd: Push((int) 5259)
0x6de: Push((int) -1)
0x6df: Push((int) 5796)
0x6e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e1: Pop(3)
0x6e2: Return(); Pop(0)

0x6e3: PushEmpty(string)
0x6e4: Stack[-1] = "Neutral"
0x6e5: Call 0x598

0x6e6: Pop(1)
0x6e7: Push((int) 7539)
0x6e8: @@ SetMessage(Stack[-1])
0x6e9: Pop(1)
0x6ea: @@ ClearReplies()
0x6eb: Pop(0)
0x6ec: PushEmpty(bool)
0x6ed: Stack[-1] = (bool) 0
0x6ee: PushEmpty(bool, object)
0x6ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f0: Call 0x250a

0x6f1: Pop(1)
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6f3: PushEmpty(bool, object)
0x6f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f5: Call 0x223e

0x6f6: Pop(1)
0x6f7: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6f8: Stack[-1] = (bool) 1
0x6f9: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6fa: Push((int) 7540)
0x6fb: Push((int) 5777)
0x6fc: Push((int) 8322)
0x6fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fe: Pop(3)
0x6ff: PushEmpty(bool)
0x700: Stack[-1] = (bool) 0
0x701: PushEmpty(bool, object)
0x702: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x703: Call 0x24b6

0x704: Pop(1)
0x705: IF (Stack[-1] == 0) GOTO 0x70c; Pop(1)

0x706: PushEmpty(bool, object)
0x707: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x708: Call 0x22a8

0x709: Pop(1)
0x70a: IF (Stack[-1] == 0) GOTO 0x70c; Pop(1)

0x70b: Stack[-1] = (bool) 1
0x70c: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x70d: Push((int) 7548)
0x70e: Push((int) 8354)
0x70f: Push((int) 8330)
0x710: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x711: Pop(3)
0x712: PushEmpty(bool)
0x713: Stack[-1] = (bool) 0
0x714: PushEmpty(bool, object)
0x715: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x716: Call 0x249e

0x717: Pop(1)
0x718: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x719: PushEmpty(bool, object)
0x71a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x71b: Call 0x22b4

0x71c: Pop(1)
0x71d: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x71e: Stack[-1] = (bool) 1
0x71f: IF (Stack[-1] == 0) GOTO 0x725; Pop(1)

0x720: Push((int) 7552)
0x721: Push((int) 8349)
0x722: Push((int) 8334)
0x723: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x724: Pop(3)
0x725: PushEmpty(bool)
0x726: Stack[-1] = (bool) 0
0x727: PushEmpty(bool, object)
0x728: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x729: Call 0x24c2

0x72a: Pop(1)
0x72b: IF (Stack[-1] == 0) GOTO 0x732; Pop(1)

0x72c: PushEmpty(bool, object)
0x72d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72e: Call 0x22c0

0x72f: Pop(1)
0x730: IF (Stack[-1] == 0) GOTO 0x732; Pop(1)

0x731: Stack[-1] = (bool) 1
0x732: IF (Stack[-1] == 0) GOTO 0x738; Pop(1)

0x733: Push((int) 7553)
0x734: Push((int) 8350)
0x735: Push((int) 8335)
0x736: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x737: Pop(3)
0x738: PushEmpty(bool)
0x739: Stack[-1] = (bool) 0
0x73a: PushEmpty(bool, object)
0x73b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73c: Call 0x24ce

0x73d: Pop(1)
0x73e: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x73f: PushEmpty(bool, object)
0x740: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x741: Call 0x22cc

0x742: Pop(1)
0x743: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x744: Stack[-1] = (bool) 1
0x745: IF (Stack[-1] == 0) GOTO 0x74b; Pop(1)

0x746: Push((int) 7556)
0x747: Push((int) 8351)
0x748: Push((int) 8338)
0x749: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74a: Pop(3)
0x74b: PushEmpty(bool)
0x74c: Stack[-1] = (bool) 0
0x74d: PushEmpty(bool, object)
0x74e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74f: Call 0x232c

0x750: Pop(1)
0x751: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x752: PushEmpty(bool, object)
0x753: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x754: Call 0x22d8

0x755: Pop(1)
0x756: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x757: Stack[-1] = (bool) 1
0x758: IF (Stack[-1] == 0) GOTO 0x75e; Pop(1)

0x759: Push((int) 7560)
0x75a: Push((int) 8352)
0x75b: Push((int) 8342)
0x75c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75d: Pop(3)
0x75e: PushEmpty(bool)
0x75f: Stack[-1] = (bool) 0
0x760: PushEmpty(bool, object)
0x761: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x762: Call 0x24e6

0x763: Pop(1)
0x764: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x765: PushEmpty(bool, object)
0x766: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x767: Call 0x22e4

0x768: Pop(1)
0x769: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x76a: Stack[-1] = (bool) 1
0x76b: IF (Stack[-1] == 0) GOTO 0x771; Pop(1)

0x76c: Push((int) 7561)
0x76d: Push((int) 8353)
0x76e: Push((int) 8343)
0x76f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x770: Pop(3)
0x771: Push((int) 7590)
0x772: Push((int) -1)
0x773: Push((int) 8376)
0x774: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x775: Pop(3)
0x776: Return(); Pop(0)

0x777: Push((int) 8353)
0x778: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x779: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x77a: PushEmpty(string)
0x77b: Stack[-1] = "Neutral"
0x77c: Call 0x598

0x77d: Pop(1)
0x77e: Push((int) 7571)
0x77f: @@ SetMessage(Stack[-1])
0x780: Pop(1)
0x781: @@ ClearReplies()
0x782: Pop(0)
0x783: Push((int) 7618)
0x784: Push((int) 8408)
0x785: Push((int) 8407)
0x786: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x787: Pop(3)
0x788: Return(); Pop(0)

0x789: Push((int) 8408)
0x78a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x78b: IF (Stack[-1] == 0) GOTO 0x79b; Pop(1)

0x78c: PushEmpty(string)
0x78d: Stack[-1] = "Neutral"
0x78e: Call 0x598

0x78f: Pop(1)
0x790: Push((int) 7619)
0x791: @@ SetMessage(Stack[-1])
0x792: Pop(1)
0x793: @@ ClearReplies()
0x794: Pop(0)
0x795: Push((int) 7620)
0x796: Push((int) -1)
0x797: Push((int) 8409)
0x798: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x799: Pop(3)
0x79a: Return(); Pop(0)

0x79b: Push((int) 8352)
0x79c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x79d: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x79e: PushEmpty(string)
0x79f: Stack[-1] = "Neutral"
0x7a0: Call 0x598

0x7a1: Pop(1)
0x7a2: Push((int) 7570)
0x7a3: @@ SetMessage(Stack[-1])
0x7a4: Pop(1)
0x7a5: @@ ClearReplies()
0x7a6: Pop(0)
0x7a7: Push((int) 7612)
0x7a8: Push((int) 8402)
0x7a9: Push((int) 8401)
0x7aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ab: Pop(3)
0x7ac: Return(); Pop(0)

0x7ad: Push((int) 8402)
0x7ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7af: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x7b0: PushEmpty(string)
0x7b1: Stack[-1] = "Neutral"
0x7b2: Call 0x598

0x7b3: Pop(1)
0x7b4: Push((int) 7613)
0x7b5: @@ SetMessage(Stack[-1])
0x7b6: Pop(1)
0x7b7: @@ ClearReplies()
0x7b8: Pop(0)
0x7b9: Push((int) 7614)
0x7ba: Push((int) 8404)
0x7bb: Push((int) 8403)
0x7bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bd: Pop(3)
0x7be: Return(); Pop(0)

0x7bf: Push((int) 8404)
0x7c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c1: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7c2: PushEmpty(string)
0x7c3: Stack[-1] = "Neutral"
0x7c4: Call 0x598

0x7c5: Pop(1)
0x7c6: Push((int) 7615)
0x7c7: @@ SetMessage(Stack[-1])
0x7c8: Pop(1)
0x7c9: @@ ClearReplies()
0x7ca: Pop(0)
0x7cb: PushEmpty(bool, object)
0x7cc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7cd: Call 0x22f0

0x7ce: Pop(1)
0x7cf: Pop(1); Push((bool) Stack[-1] == 0)
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d1: Push((int) 7616)
0x7d2: Push((int) 8412)
0x7d3: Push((int) 8405)
0x7d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d5: Pop(3)
0x7d6: PushEmpty(bool, object)
0x7d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d8: Call 0x22f0

0x7d9: Pop(1)
0x7da: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7db: Push((int) 7617)
0x7dc: Push((int) -1)
0x7dd: Push((int) 8406)
0x7de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7df: Pop(3)
0x7e0: Return(); Pop(0)

0x7e1: Push((int) 8412)
0x7e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e3: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7e4: PushEmpty(string)
0x7e5: Stack[-1] = "Neutral"
0x7e6: Call 0x598

0x7e7: Pop(1)
0x7e8: Push((int) 7623)
0x7e9: @@ SetMessage(Stack[-1])
0x7ea: Pop(1)
0x7eb: @@ ClearReplies()
0x7ec: Pop(0)
0x7ed: Push((int) 7624)
0x7ee: Push((int) 8414)
0x7ef: Push((int) 8413)
0x7f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f1: Pop(3)
0x7f2: Return(); Pop(0)

0x7f3: Push((int) 8414)
0x7f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f5: IF (Stack[-1] == 0) GOTO 0x805; Pop(1)

0x7f6: PushEmpty(string)
0x7f7: Stack[-1] = "Neutral"
0x7f8: Call 0x598

0x7f9: Pop(1)
0x7fa: Push((int) 7625)
0x7fb: @@ SetMessage(Stack[-1])
0x7fc: Pop(1)
0x7fd: @@ ClearReplies()
0x7fe: Pop(0)
0x7ff: Push((int) 7626)
0x800: Push((int) -1)
0x801: Push((int) 8415)
0x802: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x803: Pop(3)
0x804: Return(); Pop(0)

0x805: Push((int) 8351)
0x806: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x807: IF (Stack[-1] == 0) GOTO 0x81c; Pop(1)

0x808: PushEmpty(string)
0x809: Stack[-1] = "Neutral"
0x80a: Call 0x598

0x80b: Pop(1)
0x80c: Push((int) 7569)
0x80d: @@ SetMessage(Stack[-1])
0x80e: Pop(1)
0x80f: @@ ClearReplies()
0x810: Pop(0)
0x811: Push((int) 7604)
0x812: Push((int) 8396)
0x813: Push((int) 8392)
0x814: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x815: Pop(3)
0x816: Push((int) 7605)
0x817: Push((int) 8394)
0x818: Push((int) 8393)
0x819: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81a: Pop(3)
0x81b: Return(); Pop(0)

0x81c: Push((int) 8394)
0x81d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81e: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x81f: PushEmpty(string)
0x820: Stack[-1] = "Neutral"
0x821: Call 0x598

0x822: Pop(1)
0x823: Push((int) 7606)
0x824: @@ SetMessage(Stack[-1])
0x825: Pop(1)
0x826: @@ ClearReplies()
0x827: Pop(0)
0x828: Push((int) 7607)
0x829: Push((int) 8396)
0x82a: Push((int) 8395)
0x82b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82c: Pop(3)
0x82d: Return(); Pop(0)

0x82e: Push((int) 8396)
0x82f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x830: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x831: PushEmpty(string)
0x832: Stack[-1] = "Neutral"
0x833: Call 0x598

0x834: Pop(1)
0x835: Push((int) 7608)
0x836: @@ SetMessage(Stack[-1])
0x837: Pop(1)
0x838: @@ ClearReplies()
0x839: Pop(0)
0x83a: Push((int) 7609)
0x83b: Push((int) 8398)
0x83c: Push((int) 8397)
0x83d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83e: Pop(3)
0x83f: Return(); Pop(0)

0x840: Push((int) 8398)
0x841: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x842: IF (Stack[-1] == 0) GOTO 0x857; Pop(1)

0x843: PushEmpty(string)
0x844: Stack[-1] = "Neutral"
0x845: Call 0x598

0x846: Pop(1)
0x847: Push((int) 7610)
0x848: @@ SetMessage(Stack[-1])
0x849: Pop(1)
0x84a: @@ ClearReplies()
0x84b: Pop(0)
0x84c: Push((int) 7611)
0x84d: Push((int) -1)
0x84e: Push((int) 8400)
0x84f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x850: Pop(3)
0x851: Push((int) 7622)
0x852: Push((int) -1)
0x853: Push((int) 8411)
0x854: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x855: Pop(3)
0x856: Return(); Pop(0)

0x857: Push((int) 8350)
0x858: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x859: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x85a: PushEmpty(string)
0x85b: Stack[-1] = "Neutral"
0x85c: Call 0x598

0x85d: Pop(1)
0x85e: Push((int) 7568)
0x85f: @@ SetMessage(Stack[-1])
0x860: Pop(1)
0x861: @@ ClearReplies()
0x862: Pop(0)
0x863: Push((int) 7591)
0x864: Push((int) 8378)
0x865: Push((int) 8377)
0x866: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x867: Pop(3)
0x868: Push((int) 7598)
0x869: Push((int) 8386)
0x86a: Push((int) 8385)
0x86b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86c: Pop(3)
0x86d: Return(); Pop(0)

0x86e: Push((int) 8386)
0x86f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x870: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x871: PushEmpty(string)
0x872: Stack[-1] = "Neutral"
0x873: Call 0x598

0x874: Pop(1)
0x875: Push((int) 7599)
0x876: @@ SetMessage(Stack[-1])
0x877: Pop(1)
0x878: @@ ClearReplies()
0x879: Pop(0)
0x87a: Push((int) 7600)
0x87b: Push((int) 8388)
0x87c: Push((int) 8387)
0x87d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87e: Pop(3)
0x87f: Return(); Pop(0)

0x880: Push((int) 8388)
0x881: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x882: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x883: PushEmpty(string)
0x884: Stack[-1] = "Neutral"
0x885: Call 0x598

0x886: Pop(1)
0x887: Push((int) 7601)
0x888: @@ SetMessage(Stack[-1])
0x889: Pop(1)
0x88a: @@ ClearReplies()
0x88b: Pop(0)
0x88c: Push((int) 7603)
0x88d: Push((int) -1)
0x88e: Push((int) 8391)
0x88f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x890: Pop(3)
0x891: Return(); Pop(0)

0x892: Push((int) 8378)
0x893: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x894: IF (Stack[-1] == 0) GOTO 0x8a9; Pop(1)

0x895: PushEmpty(string)
0x896: Stack[-1] = "Neutral"
0x897: Call 0x598

0x898: Pop(1)
0x899: Push((int) 7592)
0x89a: @@ SetMessage(Stack[-1])
0x89b: Pop(1)
0x89c: @@ ClearReplies()
0x89d: Pop(0)
0x89e: Push((int) 7593)
0x89f: Push((int) 8381)
0x8a0: Push((int) 8379)
0x8a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a2: Pop(3)
0x8a3: Push((int) 7594)
0x8a4: Push((int) 8381)
0x8a5: Push((int) 8380)
0x8a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a7: Pop(3)
0x8a8: Return(); Pop(0)

0x8a9: Push((int) 8381)
0x8aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ab: IF (Stack[-1] == 0) GOTO 0x8bb; Pop(1)

0x8ac: PushEmpty(string)
0x8ad: Stack[-1] = "Neutral"
0x8ae: Call 0x598

0x8af: Pop(1)
0x8b0: Push((int) 7595)
0x8b1: @@ SetMessage(Stack[-1])
0x8b2: Pop(1)
0x8b3: @@ ClearReplies()
0x8b4: Pop(0)
0x8b5: Push((int) 7596)
0x8b6: Push((int) 8383)
0x8b7: Push((int) 8382)
0x8b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b9: Pop(3)
0x8ba: Return(); Pop(0)

0x8bb: Push((int) 8383)
0x8bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8bd: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8be: PushEmpty(string)
0x8bf: Stack[-1] = "Neutral"
0x8c0: Call 0x598

0x8c1: Pop(1)
0x8c2: Push((int) 7597)
0x8c3: @@ SetMessage(Stack[-1])
0x8c4: Pop(1)
0x8c5: @@ ClearReplies()
0x8c6: Pop(0)
0x8c7: Push((int) 7602)
0x8c8: Push((int) -1)
0x8c9: Push((int) 8390)
0x8ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cb: Pop(3)
0x8cc: Return(); Pop(0)

0x8cd: Push((int) 8349)
0x8ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8cf: IF (Stack[-1] == 0) GOTO 0x8df; Pop(1)

0x8d0: PushEmpty(string)
0x8d1: Stack[-1] = "Neutral"
0x8d2: Call 0x598

0x8d3: Pop(1)
0x8d4: Push((int) 7567)
0x8d5: @@ SetMessage(Stack[-1])
0x8d6: Pop(1)
0x8d7: @@ ClearReplies()
0x8d8: Pop(0)
0x8d9: Push((int) 7582)
0x8da: Push((int) 8367)
0x8db: Push((int) 8366)
0x8dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8dd: Pop(3)
0x8de: Return(); Pop(0)

0x8df: Push((int) 8367)
0x8e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e1: IF (Stack[-1] == 0) GOTO 0x8f6; Pop(1)

0x8e2: PushEmpty(string)
0x8e3: Stack[-1] = "Neutral"
0x8e4: Call 0x598

0x8e5: Pop(1)
0x8e6: Push((int) 7583)
0x8e7: @@ SetMessage(Stack[-1])
0x8e8: Pop(1)
0x8e9: @@ ClearReplies()
0x8ea: Pop(0)
0x8eb: Push((int) 7584)
0x8ec: Push((int) 8370)
0x8ed: Push((int) 8368)
0x8ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ef: Pop(3)
0x8f0: Push((int) 7585)
0x8f1: Push((int) 8370)
0x8f2: Push((int) 8369)
0x8f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f4: Pop(3)
0x8f5: Return(); Pop(0)

0x8f6: Push((int) 8370)
0x8f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f8: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x8f9: PushEmpty(string)
0x8fa: Stack[-1] = "Neutral"
0x8fb: Call 0x598

0x8fc: Pop(1)
0x8fd: Push((int) 7586)
0x8fe: @@ SetMessage(Stack[-1])
0x8ff: Pop(1)
0x900: @@ ClearReplies()
0x901: Pop(0)
0x902: Push((int) 7587)
0x903: Push((int) 8374)
0x904: Push((int) 8373)
0x905: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x906: Pop(3)
0x907: Return(); Pop(0)

0x908: Push((int) 8374)
0x909: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x90a: IF (Stack[-1] == 0) GOTO 0x91a; Pop(1)

0x90b: PushEmpty(string)
0x90c: Stack[-1] = "Neutral"
0x90d: Call 0x598

0x90e: Pop(1)
0x90f: Push((int) 7588)
0x910: @@ SetMessage(Stack[-1])
0x911: Pop(1)
0x912: @@ ClearReplies()
0x913: Pop(0)
0x914: Push((int) 7589)
0x915: Push((int) -1)
0x916: Push((int) 8375)
0x917: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x918: Pop(3)
0x919: Return(); Pop(0)

0x91a: Push((int) 8354)
0x91b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91c: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x91d: PushEmpty(string)
0x91e: Stack[-1] = "Neutral"
0x91f: Call 0x598

0x920: Pop(1)
0x921: Push((int) 7572)
0x922: @@ SetMessage(Stack[-1])
0x923: Pop(1)
0x924: @@ ClearReplies()
0x925: Pop(0)
0x926: Push((int) 7573)
0x927: Push((int) 8348)
0x928: Push((int) 8355)
0x929: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92a: Pop(3)
0x92b: Push((int) 7574)
0x92c: Push((int) 8348)
0x92d: Push((int) 8356)
0x92e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92f: Pop(3)
0x930: Return(); Pop(0)

0x931: Push((int) 8348)
0x932: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x933: IF (Stack[-1] == 0) GOTO 0x948; Pop(1)

0x934: PushEmpty(string)
0x935: Stack[-1] = "Neutral"
0x936: Call 0x598

0x937: Pop(1)
0x938: Push((int) 7566)
0x939: @@ SetMessage(Stack[-1])
0x93a: Pop(1)
0x93b: @@ ClearReplies()
0x93c: Pop(0)
0x93d: Push((int) 7575)
0x93e: Push((int) 8359)
0x93f: Push((int) 8358)
0x940: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x941: Pop(3)
0x942: Push((int) 7577)
0x943: Push((int) 8359)
0x944: Push((int) 8360)
0x945: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x946: Pop(3)
0x947: Return(); Pop(0)

0x948: Push((int) 8359)
0x949: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x94a: IF (Stack[-1] == 0) GOTO 0x95a; Pop(1)

0x94b: PushEmpty(string)
0x94c: Stack[-1] = "Neutral"
0x94d: Call 0x598

0x94e: Pop(1)
0x94f: Push((int) 7576)
0x950: @@ SetMessage(Stack[-1])
0x951: Pop(1)
0x952: @@ ClearReplies()
0x953: Pop(0)
0x954: Push((int) 7578)
0x955: Push((int) 8363)
0x956: Push((int) 8362)
0x957: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x958: Pop(3)
0x959: Return(); Pop(0)

0x95a: Push((int) 8363)
0x95b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x95c: IF (Stack[-1] == 0) GOTO 0x971; Pop(1)

0x95d: PushEmpty(string)
0x95e: Stack[-1] = "Neutral"
0x95f: Call 0x598

0x960: Pop(1)
0x961: Push((int) 7579)
0x962: @@ SetMessage(Stack[-1])
0x963: Pop(1)
0x964: @@ ClearReplies()
0x965: Pop(0)
0x966: Push((int) 7580)
0x967: Push((int) -1)
0x968: Push((int) 8364)
0x969: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96a: Pop(3)
0x96b: Push((int) 7581)
0x96c: Push((int) -1)
0x96d: Push((int) 8365)
0x96e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96f: Pop(3)
0x970: Return(); Pop(0)

0x971: Push((int) 5777)
0x972: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x973: IF (Stack[-1] == 0) GOTO 0x988; Pop(1)

0x974: PushEmpty(string)
0x975: Stack[-1] = "Neutral"
0x976: Call 0x598

0x977: Pop(1)
0x978: Push((int) 5242)
0x979: @@ SetMessage(Stack[-1])
0x97a: Pop(1)
0x97b: @@ ClearReplies()
0x97c: Pop(0)
0x97d: Push((int) 5243)
0x97e: Push((int) 5779)
0x97f: Push((int) 5778)
0x980: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x981: Pop(3)
0x982: Push((int) 5252)
0x983: Push((int) 5779)
0x984: Push((int) 5788)
0x985: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x986: Pop(3)
0x987: Return(); Pop(0)

0x988: Push((int) 5779)
0x989: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x98a: IF (Stack[-1] == 0) GOTO 0x99f; Pop(1)

0x98b: PushEmpty(string)
0x98c: Stack[-1] = "Neutral"
0x98d: Call 0x598

0x98e: Pop(1)
0x98f: Push((int) 5244)
0x990: @@ SetMessage(Stack[-1])
0x991: Pop(1)
0x992: @@ ClearReplies()
0x993: Pop(0)
0x994: Push((int) 5245)
0x995: Push((int) 5781)
0x996: Push((int) 5780)
0x997: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x998: Pop(3)
0x999: Push((int) 5251)
0x99a: Push((int) 5781)
0x99b: Push((int) 5786)
0x99c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99d: Pop(3)
0x99e: Return(); Pop(0)

0x99f: Push((int) 5781)
0x9a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9a1: IF (Stack[-1] == 0) GOTO 0x9b6; Pop(1)

0x9a2: PushEmpty(string)
0x9a3: Stack[-1] = "Neutral"
0x9a4: Call 0x598

0x9a5: Pop(1)
0x9a6: Push((int) 5246)
0x9a7: @@ SetMessage(Stack[-1])
0x9a8: Pop(1)
0x9a9: @@ ClearReplies()
0x9aa: Pop(0)
0x9ab: Push((int) 5248)
0x9ac: Push((int) 5784)
0x9ad: Push((int) 5783)
0x9ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9af: Pop(3)
0x9b0: Push((int) 5247)
0x9b1: Push((int) -1)
0x9b2: Push((int) 5782)
0x9b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b4: Pop(3)
0x9b5: Return(); Pop(0)

0x9b6: Push((int) 5784)
0x9b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b8: IF (Stack[-1] == 0) GOTO 0x9c8; Pop(1)

0x9b9: PushEmpty(string)
0x9ba: Stack[-1] = "Neutral"
0x9bb: Call 0x598

0x9bc: Pop(1)
0x9bd: Push((int) 5249)
0x9be: @@ SetMessage(Stack[-1])
0x9bf: Pop(1)
0x9c0: @@ ClearReplies()
0x9c1: Pop(0)
0x9c2: Push((int) 5250)
0x9c3: Push((int) -1)
0x9c4: Push((int) 5785)
0x9c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c6: Pop(3)
0x9c7: Return(); Pop(0)

0x9c8: Push((int) 5798)
0x9c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ca: IF (Stack[-1] == 0) GOTO 0x9da; Pop(1)

0x9cb: PushEmpty(string)
0x9cc: Stack[-1] = "Neutral"
0x9cd: Call 0x598

0x9ce: Pop(1)
0x9cf: Push((int) 5261)
0x9d0: @@ SetMessage(Stack[-1])
0x9d1: Pop(1)
0x9d2: @@ ClearReplies()
0x9d3: Pop(0)
0x9d4: Push((int) 5262)
0x9d5: Push((int) -1)
0x9d6: Push((int) 5799)
0x9d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d8: Pop(3)
0x9d9: Return(); Pop(0)

0x9da: Push((int) 5792)
0x9db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9dc: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9dd: PushEmpty(string)
0x9de: Stack[-1] = "Neutral"
0x9df: Call 0x598

0x9e0: Pop(1)
0x9e1: Push((int) 5255)
0x9e2: @@ SetMessage(Stack[-1])
0x9e3: Pop(1)
0x9e4: @@ ClearReplies()
0x9e5: Pop(0)
0x9e6: Push((int) 5256)
0x9e7: Push((int) -1)
0x9e8: Push((int) 5793)
0x9e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ea: Pop(3)
0x9eb: Push((int) 5257)
0x9ec: Push((int) -1)
0x9ed: Push((int) 5794)
0x9ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ef: Pop(3)
0x9f0: Return(); Pop(0)

0x9f1: Push((int) 6465)
0x9f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f3: IF (Stack[-1] == 0) GOTO 0xa08; Pop(1)

0x9f4: PushEmpty(string)
0x9f5: Stack[-1] = "Neutral"
0x9f6: Call 0x598

0x9f7: Pop(1)
0x9f8: Push((int) 5873)
0x9f9: @@ SetMessage(Stack[-1])
0x9fa: Pop(1)
0x9fb: @@ ClearReplies()
0x9fc: Pop(0)
0x9fd: Push((int) 5874)
0x9fe: Push((int) 6469)
0x9ff: Push((int) 6466)
0xa00: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa01: Pop(3)
0xa02: Push((int) 5875)
0xa03: Push((int) 6469)
0xa04: Push((int) 6467)
0xa05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa06: Pop(3)
0xa07: Return(); Pop(0)

0xa08: Push((int) 6469)
0xa09: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa0a: IF (Stack[-1] == 0) GOTO 0xa1f; Pop(1)

0xa0b: PushEmpty(string)
0xa0c: Stack[-1] = "Neutral"
0xa0d: Call 0x598

0xa0e: Pop(1)
0xa0f: Push((int) 5877)
0xa10: @@ SetMessage(Stack[-1])
0xa11: Pop(1)
0xa12: @@ ClearReplies()
0xa13: Pop(0)
0xa14: Push((int) 5880)
0xa15: Push((int) 6473)
0xa16: Push((int) 6472)
0xa17: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa18: Pop(3)
0xa19: Push((int) 5879)
0xa1a: Push((int) -1)
0xa1b: Push((int) 6471)
0xa1c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1d: Pop(3)
0xa1e: Return(); Pop(0)

0xa1f: Push((int) 6473)
0xa20: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa21: IF (Stack[-1] == 0) GOTO 0xa36; Pop(1)

0xa22: PushEmpty(string)
0xa23: Stack[-1] = "Neutral"
0xa24: Call 0x598

0xa25: Pop(1)
0xa26: Push((int) 5881)
0xa27: @@ SetMessage(Stack[-1])
0xa28: Pop(1)
0xa29: @@ ClearReplies()
0xa2a: Pop(0)
0xa2b: Push((int) 5882)
0xa2c: Push((int) -1)
0xa2d: Push((int) 6474)
0xa2e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2f: Pop(3)
0xa30: Push((int) 5887)
0xa31: Push((int) -1)
0xa32: Push((int) 6481)
0xa33: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa34: Pop(3)
0xa35: Return(); Pop(0)

0xa36: Push((int) 6468)
0xa37: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa38: IF (Stack[-1] == 0) GOTO 0xa4d; Pop(1)

0xa39: PushEmpty(string)
0xa3a: Stack[-1] = "Neutral"
0xa3b: Call 0x598

0xa3c: Pop(1)
0xa3d: Push((int) 5876)
0xa3e: @@ SetMessage(Stack[-1])
0xa3f: Pop(1)
0xa40: @@ ClearReplies()
0xa41: Pop(0)
0xa42: Push((int) 5883)
0xa43: Push((int) 6477)
0xa44: Push((int) 6476)
0xa45: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa46: Pop(3)
0xa47: Push((int) 5888)
0xa48: Push((int) 6483)
0xa49: Push((int) 6482)
0xa4a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4b: Pop(3)
0xa4c: Return(); Pop(0)

0xa4d: Push((int) 6483)
0xa4e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa4f: IF (Stack[-1] == 0) GOTO 0xa64; Pop(1)

0xa50: PushEmpty(string)
0xa51: Stack[-1] = "Neutral"
0xa52: Call 0x598

0xa53: Pop(1)
0xa54: Push((int) 5889)
0xa55: @@ SetMessage(Stack[-1])
0xa56: Pop(1)
0xa57: @@ ClearReplies()
0xa58: Pop(0)
0xa59: Push((int) 5891)
0xa5a: Push((int) -1)
0xa5b: Push((int) 6485)
0xa5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5d: Pop(3)
0xa5e: Push((int) 5890)
0xa5f: Push((int) -1)
0xa60: Push((int) 6484)
0xa61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa62: Pop(3)
0xa63: Return(); Pop(0)

0xa64: Push((int) 6477)
0xa65: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa66: IF (Stack[-1] == 0) GOTO 0xa7b; Pop(1)

0xa67: PushEmpty(string)
0xa68: Stack[-1] = "Neutral"
0xa69: Call 0x598

0xa6a: Pop(1)
0xa6b: Push((int) 5884)
0xa6c: @@ SetMessage(Stack[-1])
0xa6d: Pop(1)
0xa6e: @@ ClearReplies()
0xa6f: Pop(0)
0xa70: Push((int) 5885)
0xa71: Push((int) 6469)
0xa72: Push((int) 6478)
0xa73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa74: Pop(3)
0xa75: Push((int) 5892)
0xa76: Push((int) 6487)
0xa77: Push((int) 6486)
0xa78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa79: Pop(3)
0xa7a: Return(); Pop(0)

0xa7b: Push((int) 6487)
0xa7c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa7d: IF (Stack[-1] == 0) GOTO 0xa92; Pop(1)

0xa7e: PushEmpty(string)
0xa7f: Stack[-1] = "Neutral"
0xa80: Call 0x598

0xa81: Pop(1)
0xa82: Push((int) 5893)
0xa83: @@ SetMessage(Stack[-1])
0xa84: Pop(1)
0xa85: @@ ClearReplies()
0xa86: Pop(0)
0xa87: Push((int) 5894)
0xa88: Push((int) -1)
0xa89: Push((int) 6488)
0xa8a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8b: Pop(3)
0xa8c: Push((int) 5895)
0xa8d: Push((int) 6469)
0xa8e: Push((int) 6489)
0xa8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa90: Pop(3)
0xa91: Return(); Pop(0)

0xa92: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa93: PushEmpty(bool)
0xa94: Call 0x1f0d

0xa95: Pop(0)
0xa96: IF (Stack[-1] == 0) GOTO 0xa9a; Pop(1)

0xa97: @ lshStopAnimation()
0xa98: Pop(0)
0xa99: GOTO 0xa9c

0xa9a: @ StopAnimation()
0xa9b: Pop(0)
0xa9c: Return(); Pop(0)

0xa9d: GOTO 0x5a9

0xa9e: Return(); Pop(0)

0xa9f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xaa0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xaa1: PushEmpty(bool, object)
0xaa2: Stack[-1] = Stack[-11]
0xaa3: Call 0x1e75

0xaa4: Pop(1)
0xaa5: Pop(1); Push((bool) Stack[-1] == 0)
0xaa6: IF (Stack[-1] == 0) GOTO 0xaa9; Pop(1)

0xaa7: Stack[-10] = (int) -2
0xaa8: Return(); Pop(8)

0xaa9: @ CreateDialog(Stack[-4])
0xaaa: Pop(0)
0xaab: PushEmpty(int)
0xaac: Call 0x1f09

0xaad: Pop(0)
0xaae: @@ SetNPCName(Stack[-1])
0xaaf: Pop(1)
0xab0: PushEmpty(string)
0xab1: Call 0x1f0b

0xab2: Pop(0)
0xab3: @@ SetPhoto(Stack[-1])
0xab4: Pop(1)
0xab5: PushEmpty(int)
0xab6: Call 0x2575

0xab7: Pop(0)
0xab8: @@ SetPlayerName(Stack[-1])
0xab9: Pop(1)
0xaba: Stack[-2] = (int) -1
0xabb: @ IsOverrideActive(Stack[-3])
0xabc: Pop(0)
0xabd: Push(Stack[-3])
0xabe: IF (Stack[-1] == 0) GOTO 0xac1; Pop(1)

0xabf: Stack[-10] = (int) -2
0xac0: Return(); Pop(8)

0xac1: @ DoDialog(Stack[-4])
0xac2: Pop(0)
0xac3: PushEmpty(object, object)
0xac4: Stack[-2] = Stack[-11]
0xac5: Stack[-1] = Stack[-6]
0xac6: Push(-2, 4); TaskCall(9)
0xac7: Call 0xade

0xac8: Pop(-2, 4); TaskReturn
0xac9: Pop(2)
0xaca: @@ IsDialogEnd(Stack[-1])
0xacb: Pop(0)
0xacc: Pop(0); Push((bool) Stack[-1] == 0)
0xacd: IF (Stack[-1] == 0) GOTO 0xad3; Pop(1)

0xace: @ sync()
0xacf: Pop(0)
0xad0: @@ IsDialogEnd(Stack[-1])
0xad1: Pop(0)
0xad2: GOTO 0xacc

0xad3: PushEmpty(object)
0xad4: Stack[-1] = Stack[-10]
0xad5: Call 0x1ead

0xad6: Pop(1)
0xad7: @ StopDialog(Stack[-4])
0xad8: Pop(0)
0xad9: @@ GetReturnValue(Stack[-2])
0xada: Pop(0)
0xadb: Stack[-10] = Stack[-2]
0xadc: Return(); Pop(8)

0xadd: Stack[-4] = 0
0xade: PushEmpty()
0xadf: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xae0: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xae1: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xae2: Push((int) 1)
0xae3: IF (Stack[-1] == 0) GOTO 0xb5b; Pop(1)

0xae4: PushEmpty(bool)
0xae5: Stack[-1] = (bool) 0
0xae6: PushEmpty(bool, object)
0xae7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xae8: Call 0x2256

0xae9: Pop(1)
0xaea: IF (Stack[-1] == 0) GOTO 0xaf1; Pop(1)

0xaeb: PushEmpty(bool, object)
0xaec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaed: Call 0x2290

0xaee: Pop(1)
0xaef: IF (Stack[-1] == 0) GOTO 0xaf1; Pop(1)

0xaf0: Stack[-1] = (bool) 1
0xaf1: IF (Stack[-1] == 0) GOTO 0xb0b; Pop(1)

0xaf2: PushEmpty(string)
0xaf3: Stack[-1] = "Neutral"
0xaf4: Call 0xb79

0xaf5: Pop(1)
0xaf6: Push((int) 6797)
0xaf7: @@ SetMessage(Stack[-1])
0xaf8: Pop(1)
0xaf9: @@ ClearReplies()
0xafa: Pop(0)
0xafb: Push((int) 6798)
0xafc: Push((int) 7491)
0xafd: Push((int) 7490)
0xafe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaff: Pop(3)
0xb00: Push((int) 6809)
0xb01: Push((int) 7491)
0xb02: Push((int) 7503)
0xb03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb04: Pop(3)
0xb05: Push((int) 6810)
0xb06: Push((int) 7493)
0xb07: Push((int) 7505)
0xb08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb09: Pop(3)
0xb0a: GOTO 0xb5b

0xb0b: PushEmpty(bool)
0xb0c: Stack[-1] = (bool) 0
0xb0d: PushEmpty(bool, object)
0xb0e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb0f: Call 0x2262

0xb10: Pop(1)
0xb11: IF (Stack[-1] == 0) GOTO 0xb18; Pop(1)

0xb12: PushEmpty(bool, object)
0xb13: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb14: Call 0x229c

0xb15: Pop(1)
0xb16: IF (Stack[-1] == 0) GOTO 0xb18; Pop(1)

0xb17: Stack[-1] = (bool) 1
0xb18: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb19: PushEmpty(string)
0xb1a: Stack[-1] = "Neutral"
0xb1b: Call 0xb79

0xb1c: Pop(1)
0xb1d: Push((int) 6765)
0xb1e: @@ SetMessage(Stack[-1])
0xb1f: Pop(1)
0xb20: @@ ClearReplies()
0xb21: Pop(0)
0xb22: Push((int) 6777)
0xb23: Push((int) 7457)
0xb24: Push((int) 7467)
0xb25: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb26: Pop(3)
0xb27: Push((int) 6766)
0xb28: Push((int) 7459)
0xb29: Push((int) 7456)
0xb2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2b: Pop(3)
0xb2c: GOTO 0xb5b

0xb2d: PushEmpty(string)
0xb2e: Stack[-1] = "Neutral"
0xb2f: Call 0xb79

0xb30: Pop(1)
0xb31: Push((int) 6794)
0xb32: @@ SetMessage(Stack[-1])
0xb33: Pop(1)
0xb34: @@ ClearReplies()
0xb35: Pop(0)
0xb36: PushEmpty(bool)
0xb37: Stack[-1] = (bool) 0
0xb38: PushEmpty(bool, object)
0xb39: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb3a: Call 0x226e

0xb3b: Pop(1)
0xb3c: IF (Stack[-1] == 0) GOTO 0xb43; Pop(1)

0xb3d: PushEmpty(bool, object)
0xb3e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb3f: Call 0x2290

0xb40: Pop(1)
0xb41: IF (Stack[-1] == 0) GOTO 0xb43; Pop(1)

0xb42: Stack[-1] = (bool) 1
0xb43: IF (Stack[-1] == 0) GOTO 0xb49; Pop(1)

0xb44: Push((int) 7084)
0xb45: Push((int) 7809)
0xb46: Push((int) 7807)
0xb47: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb48: Pop(3)
0xb49: PushEmpty(bool, object)
0xb4a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb4b: Call 0x227a

0xb4c: Pop(1)
0xb4d: IF (Stack[-1] == 0) GOTO 0xb53; Pop(1)

0xb4e: Push((int) 6795)
0xb4f: Push((int) 7469)
0xb50: Push((int) 7487)
0xb51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb52: Pop(3)
0xb53: Push((int) 7535)
0xb54: Push((int) -1)
0xb55: Push((int) 8317)
0xb56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb57: Pop(3)
0xb58: GOTO 0xb5b

0xb59: Return(); Pop(0)

0xb5a: GOTO 0xae2

0xb5b: PushEmpty(bool)
0xb5c: Call 0x1f0d

0xb5d: Pop(0)
0xb5e: IF (Stack[-1] == 0) GOTO 0xb6a; Pop(1)

0xb5f: @ lshWaitForAnimEnd()
0xb60: Pop(0)
0xb61: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb62: IF (Stack[-1] == 0) GOTO 0xb64; Pop(1)

0xb63: GOTO 0xb69

0xb64: PushEmpty(string)
0xb65: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb66: Call 0x1eb1

0xb67: Pop(1)
0xb68: GOTO 0xb5f

0xb69: GOTO 0xb78

0xb6a: Push("all")
0xb6b: Push("idle")
0xb6c: @ PlayAnimation(Stack[-2], Stack[-1])
0xb6d: Pop(2)
0xb6e: @ WaitForAnimEnd()
0xb6f: Pop(0)
0xb70: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb71: IF (Stack[-1] == 0) GOTO 0xb73; Pop(1)

0xb72: GOTO 0xb78

0xb73: Push("all")
0xb74: Push("idle")
0xb75: @ PlayAnimation(Stack[-2], Stack[-1])
0xb76: Pop(2)
0xb77: GOTO 0xb6e

0xb78: Return(); Pop(0)

0xb79: PushEmpty()
0xb7a: PushEmpty(bool)
0xb7b: Call 0x1f0d

0xb7c: Pop(0)
0xb7d: Pop(1); Push((bool) Stack[-1] == 0)
0xb7e: IF (Stack[-1] == 0) GOTO 0xb80; Pop(1)

0xb7f: Return(); Pop(0)

0xb80: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb81: IF (Stack[-1] == 0) GOTO 0xb83; Pop(1)

0xb82: Return(); Pop(0)

0xb83: PushEmpty(string)
0xb84: Stack[-1] = Stack[-2]
0xb85: Call 0x1eb1

0xb86: Pop(1)
0xb87: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb88: Return(); Pop(0)

0xb89: PushEmpty()
0xb8a: Push((int) 1)
0xb8b: IF (Stack[-1] == 0) GOTO 0xe19; Pop(1)

0xb8c: PushEmpty()
0xb8d: Call 0x1ec3

0xb8e: Pop(0)
0xb8f: Push((int) 7496)
0xb90: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb91: IF (Stack[-1] == 0) GOTO 0xb97; Pop(1)

0xb92: PushEmpty(object, object)
0xb93: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb94: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb95: Call 0x1f1f

0xb96: Pop(2)
0xb97: Push((int) 7497)
0xb98: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb99: IF (Stack[-1] == 0) GOTO 0xb9f; Pop(1)

0xb9a: PushEmpty(object, object)
0xb9b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb9d: Call 0x1f1f

0xb9e: Pop(2)
0xb9f: Push((int) 7828)
0xba0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xba1: IF (Stack[-1] == 0) GOTO 0xba7; Pop(1)

0xba2: PushEmpty(object, object)
0xba3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xba4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba5: Call 0x1f1f

0xba6: Pop(2)
0xba7: Push((int) 7831)
0xba8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xba9: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xbaa: PushEmpty(object, object)
0xbab: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbad: Call 0x1f1f

0xbae: Pop(2)
0xbaf: Push((int) 7460)
0xbb0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb1: IF (Stack[-1] == 0) GOTO 0xbbc; Pop(1)

0xbb2: PushEmpty(object, object)
0xbb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbb5: Call 0x1f25

0xbb6: Pop(2)
0xbb7: PushEmpty(object, object)
0xbb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbba: Call 0x1f37

0xbbb: Pop(2)
0xbbc: Push((int) 7461)
0xbbd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbbe: IF (Stack[-1] == 0) GOTO 0xbc9; Pop(1)

0xbbf: PushEmpty(object, object)
0xbc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc2: Call 0x1f25

0xbc3: Pop(2)
0xbc4: PushEmpty(object, object)
0xbc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc7: Call 0x1f37

0xbc8: Pop(2)
0xbc9: Push((int) 7465)
0xbca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbcb: IF (Stack[-1] == 0) GOTO 0xbd6; Pop(1)

0xbcc: PushEmpty(object, object)
0xbcd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbcf: Call 0x1f25

0xbd0: Pop(2)
0xbd1: PushEmpty(object, object)
0xbd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd4: Call 0x1f37

0xbd5: Pop(2)
0xbd6: Push((int) 7466)
0xbd7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbd8: IF (Stack[-1] == 0) GOTO 0xbe3; Pop(1)

0xbd9: PushEmpty(object, object)
0xbda: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbdb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbdc: Call 0x1f25

0xbdd: Pop(2)
0xbde: PushEmpty(object, object)
0xbdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbe1: Call 0x1f37

0xbe2: Pop(2)
0xbe3: Push((int) 7814)
0xbe4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbe5: IF (Stack[-1] == 0) GOTO 0xbeb; Pop(1)

0xbe6: PushEmpty(object, object)
0xbe7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbe9: Call 0x1f2b

0xbea: Pop(2)
0xbeb: Push((int) 7815)
0xbec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbed: IF (Stack[-1] == 0) GOTO 0xbf3; Pop(1)

0xbee: PushEmpty(object, object)
0xbef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbf0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf1: Call 0x1f2b

0xbf2: Pop(2)
0xbf3: Push((int) 7477)
0xbf4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbf5: IF (Stack[-1] == 0) GOTO 0xbfb; Pop(1)

0xbf6: PushEmpty(object, object)
0xbf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf9: Call 0x1f31

0xbfa: Pop(2)
0xbfb: Push((int) 7478)
0xbfc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbfd: IF (Stack[-1] == 0) GOTO 0xc03; Pop(1)

0xbfe: PushEmpty(object, object)
0xbff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc00: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc01: Call 0x1f31

0xc02: Pop(2)
0xc03: Push((int) 7474)
0xc04: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc05: IF (Stack[-1] == 0) GOTO 0xc0b; Pop(1)

0xc06: PushEmpty(object, object)
0xc07: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc08: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc09: Call 0x1f31

0xc0a: Pop(2)
0xc0b: Push((int) 7479)
0xc0c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0d: IF (Stack[-1] == 0) GOTO 0xc13; Pop(1)

0xc0e: PushEmpty(object, object)
0xc0f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc10: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc11: Call 0x1f31

0xc12: Pop(2)
0xc13: Push((int) 7489)
0xc14: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc15: IF (Stack[-1] == 0) GOTO 0xc8b; Pop(1)

0xc16: PushEmpty(bool)
0xc17: Stack[-1] = (bool) 0
0xc18: PushEmpty(bool, object)
0xc19: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc1a: Call 0x2256

0xc1b: Pop(1)
0xc1c: IF (Stack[-1] == 0) GOTO 0xc23; Pop(1)

0xc1d: PushEmpty(bool, object)
0xc1e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc1f: Call 0x2290

0xc20: Pop(1)
0xc21: IF (Stack[-1] == 0) GOTO 0xc23; Pop(1)

0xc22: Stack[-1] = (bool) 1
0xc23: IF (Stack[-1] == 0) GOTO 0xc3d; Pop(1)

0xc24: PushEmpty(string)
0xc25: Stack[-1] = "Neutral"
0xc26: Call 0xb79

0xc27: Pop(1)
0xc28: Push((int) 6797)
0xc29: @@ SetMessage(Stack[-1])
0xc2a: Pop(1)
0xc2b: @@ ClearReplies()
0xc2c: Pop(0)
0xc2d: Push((int) 6798)
0xc2e: Push((int) 7491)
0xc2f: Push((int) 7490)
0xc30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc31: Pop(3)
0xc32: Push((int) 6809)
0xc33: Push((int) 7491)
0xc34: Push((int) 7503)
0xc35: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc36: Pop(3)
0xc37: Push((int) 6810)
0xc38: Push((int) 7493)
0xc39: Push((int) 7505)
0xc3a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3b: Pop(3)
0xc3c: Return(); Pop(0)

0xc3d: PushEmpty(bool)
0xc3e: Stack[-1] = (bool) 0
0xc3f: PushEmpty(bool, object)
0xc40: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc41: Call 0x2262

0xc42: Pop(1)
0xc43: IF (Stack[-1] == 0) GOTO 0xc4a; Pop(1)

0xc44: PushEmpty(bool, object)
0xc45: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc46: Call 0x229c

0xc47: Pop(1)
0xc48: IF (Stack[-1] == 0) GOTO 0xc4a; Pop(1)

0xc49: Stack[-1] = (bool) 1
0xc4a: IF (Stack[-1] == 0) GOTO 0xc5f; Pop(1)

0xc4b: PushEmpty(string)
0xc4c: Stack[-1] = "Neutral"
0xc4d: Call 0xb79

0xc4e: Pop(1)
0xc4f: Push((int) 6765)
0xc50: @@ SetMessage(Stack[-1])
0xc51: Pop(1)
0xc52: @@ ClearReplies()
0xc53: Pop(0)
0xc54: Push((int) 6777)
0xc55: Push((int) 7457)
0xc56: Push((int) 7467)
0xc57: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc58: Pop(3)
0xc59: Push((int) 6766)
0xc5a: Push((int) 7459)
0xc5b: Push((int) 7456)
0xc5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc5d: Pop(3)
0xc5e: Return(); Pop(0)

0xc5f: PushEmpty(string)
0xc60: Stack[-1] = "Neutral"
0xc61: Call 0xb79

0xc62: Pop(1)
0xc63: Push((int) 6794)
0xc64: @@ SetMessage(Stack[-1])
0xc65: Pop(1)
0xc66: @@ ClearReplies()
0xc67: Pop(0)
0xc68: PushEmpty(bool)
0xc69: Stack[-1] = (bool) 0
0xc6a: PushEmpty(bool, object)
0xc6b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc6c: Call 0x226e

0xc6d: Pop(1)
0xc6e: IF (Stack[-1] == 0) GOTO 0xc75; Pop(1)

0xc6f: PushEmpty(bool, object)
0xc70: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc71: Call 0x2290

0xc72: Pop(1)
0xc73: IF (Stack[-1] == 0) GOTO 0xc75; Pop(1)

0xc74: Stack[-1] = (bool) 1
0xc75: IF (Stack[-1] == 0) GOTO 0xc7b; Pop(1)

0xc76: Push((int) 7084)
0xc77: Push((int) 7809)
0xc78: Push((int) 7807)
0xc79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7a: Pop(3)
0xc7b: PushEmpty(bool, object)
0xc7c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc7d: Call 0x227a

0xc7e: Pop(1)
0xc7f: IF (Stack[-1] == 0) GOTO 0xc85; Pop(1)

0xc80: Push((int) 6795)
0xc81: Push((int) 7469)
0xc82: Push((int) 7487)
0xc83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc84: Pop(3)
0xc85: Push((int) 7535)
0xc86: Push((int) -1)
0xc87: Push((int) 8317)
0xc88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc89: Pop(3)
0xc8a: Return(); Pop(0)

0xc8b: Push((int) 7469)
0xc8c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8d: IF (Stack[-1] == 0) GOTO 0xca2; Pop(1)

0xc8e: PushEmpty(string)
0xc8f: Stack[-1] = "Neutral"
0xc90: Call 0xb79

0xc91: Pop(1)
0xc92: Push((int) 6778)
0xc93: @@ SetMessage(Stack[-1])
0xc94: Pop(1)
0xc95: @@ ClearReplies()
0xc96: Pop(0)
0xc97: Push((int) 6779)
0xc98: Push((int) 7471)
0xc99: Push((int) 7470)
0xc9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9b: Pop(3)
0xc9c: Push((int) 6793)
0xc9d: Push((int) 7476)
0xc9e: Push((int) 7485)
0xc9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca0: Pop(3)
0xca1: Return(); Pop(0)

0xca2: Push((int) 7471)
0xca3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca4: IF (Stack[-1] == 0) GOTO 0xcb9; Pop(1)

0xca5: PushEmpty(string)
0xca6: Stack[-1] = "Neutral"
0xca7: Call 0xb79

0xca8: Pop(1)
0xca9: Push((int) 6780)
0xcaa: @@ SetMessage(Stack[-1])
0xcab: Pop(1)
0xcac: @@ ClearReplies()
0xcad: Pop(0)
0xcae: Push((int) 6781)
0xcaf: Push((int) 7473)
0xcb0: Push((int) 7472)
0xcb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb2: Pop(3)
0xcb3: Push((int) 6788)
0xcb4: Push((int) -1)
0xcb5: Push((int) 7479)
0xcb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb7: Pop(3)
0xcb8: Return(); Pop(0)

0xcb9: Push((int) 7473)
0xcba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcbb: IF (Stack[-1] == 0) GOTO 0xcd0; Pop(1)

0xcbc: PushEmpty(string)
0xcbd: Stack[-1] = "Neutral"
0xcbe: Call 0xb79

0xcbf: Pop(1)
0xcc0: Push((int) 6782)
0xcc1: @@ SetMessage(Stack[-1])
0xcc2: Pop(1)
0xcc3: @@ ClearReplies()
0xcc4: Pop(0)
0xcc5: Push((int) 6784)
0xcc6: Push((int) 7476)
0xcc7: Push((int) 7475)
0xcc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc9: Pop(3)
0xcca: Push((int) 6783)
0xccb: Push((int) -1)
0xccc: Push((int) 7474)
0xccd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcce: Pop(3)
0xccf: Return(); Pop(0)

0xcd0: Push((int) 7476)
0xcd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd2: IF (Stack[-1] == 0) GOTO 0xce7; Pop(1)

0xcd3: PushEmpty(string)
0xcd4: Stack[-1] = "Neutral"
0xcd5: Call 0xb79

0xcd6: Pop(1)
0xcd7: Push((int) 6785)
0xcd8: @@ SetMessage(Stack[-1])
0xcd9: Pop(1)
0xcda: @@ ClearReplies()
0xcdb: Pop(0)
0xcdc: Push((int) 6786)
0xcdd: Push((int) -1)
0xcde: Push((int) 7477)
0xcdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce0: Pop(3)
0xce1: Push((int) 6787)
0xce2: Push((int) -1)
0xce3: Push((int) 7478)
0xce4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce5: Pop(3)
0xce6: Return(); Pop(0)

0xce7: Push((int) 7809)
0xce8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce9: IF (Stack[-1] == 0) GOTO 0xcfe; Pop(1)

0xcea: PushEmpty(string)
0xceb: Stack[-1] = "Neutral"
0xcec: Call 0xb79

0xced: Pop(1)
0xcee: Push((int) 7085)
0xcef: @@ SetMessage(Stack[-1])
0xcf0: Pop(1)
0xcf1: @@ ClearReplies()
0xcf2: Pop(0)
0xcf3: Push((int) 7086)
0xcf4: Push((int) 7811)
0xcf5: Push((int) 7810)
0xcf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf7: Pop(3)
0xcf8: Push((int) 7096)
0xcf9: Push((int) 7813)
0xcfa: Push((int) 7822)
0xcfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfc: Pop(3)
0xcfd: Return(); Pop(0)

0xcfe: Push((int) 7811)
0xcff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd00: IF (Stack[-1] == 0) GOTO 0xd1a; Pop(1)

0xd01: PushEmpty(string)
0xd02: Stack[-1] = "Neutral"
0xd03: Call 0xb79

0xd04: Pop(1)
0xd05: Push((int) 7087)
0xd06: @@ SetMessage(Stack[-1])
0xd07: Pop(1)
0xd08: @@ ClearReplies()
0xd09: Pop(0)
0xd0a: Push((int) 7088)
0xd0b: Push((int) 7813)
0xd0c: Push((int) 7812)
0xd0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0e: Pop(3)
0xd0f: Push((int) 7092)
0xd10: Push((int) 7813)
0xd11: Push((int) 7816)
0xd12: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd13: Pop(3)
0xd14: Push((int) 7093)
0xd15: Push((int) 7819)
0xd16: Push((int) 7818)
0xd17: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd18: Pop(3)
0xd19: Return(); Pop(0)

0xd1a: Push((int) 7819)
0xd1b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd1c: IF (Stack[-1] == 0) GOTO 0xd2c; Pop(1)

0xd1d: PushEmpty(string)
0xd1e: Stack[-1] = "Neutral"
0xd1f: Call 0xb79

0xd20: Pop(1)
0xd21: Push((int) 7094)
0xd22: @@ SetMessage(Stack[-1])
0xd23: Pop(1)
0xd24: @@ ClearReplies()
0xd25: Pop(0)
0xd26: Push((int) 7095)
0xd27: Push((int) 7813)
0xd28: Push((int) 7820)
0xd29: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2a: Pop(3)
0xd2b: Return(); Pop(0)

0xd2c: Push((int) 7813)
0xd2d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2e: IF (Stack[-1] == 0) GOTO 0xd43; Pop(1)

0xd2f: PushEmpty(string)
0xd30: Stack[-1] = "Neutral"
0xd31: Call 0xb79

0xd32: Pop(1)
0xd33: Push((int) 7089)
0xd34: @@ SetMessage(Stack[-1])
0xd35: Pop(1)
0xd36: @@ ClearReplies()
0xd37: Pop(0)
0xd38: Push((int) 7090)
0xd39: Push((int) -1)
0xd3a: Push((int) 7814)
0xd3b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3c: Pop(3)
0xd3d: Push((int) 7091)
0xd3e: Push((int) -1)
0xd3f: Push((int) 7815)
0xd40: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd41: Pop(3)
0xd42: Return(); Pop(0)

0xd43: Push((int) 7457)
0xd44: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd45: IF (Stack[-1] == 0) GOTO 0xd5a; Pop(1)

0xd46: PushEmpty(string)
0xd47: Stack[-1] = "Neutral"
0xd48: Call 0xb79

0xd49: Pop(1)
0xd4a: Push((int) 6767)
0xd4b: @@ SetMessage(Stack[-1])
0xd4c: Pop(1)
0xd4d: @@ ClearReplies()
0xd4e: Pop(0)
0xd4f: Push((int) 6768)
0xd50: Push((int) 7459)
0xd51: Push((int) 7458)
0xd52: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd53: Pop(3)
0xd54: Push((int) 6773)
0xd55: Push((int) 7464)
0xd56: Push((int) 7463)
0xd57: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd58: Pop(3)
0xd59: Return(); Pop(0)

0xd5a: Push((int) 7464)
0xd5b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5c: IF (Stack[-1] == 0) GOTO 0xd71; Pop(1)

0xd5d: PushEmpty(string)
0xd5e: Stack[-1] = "Neutral"
0xd5f: Call 0xb79

0xd60: Pop(1)
0xd61: Push((int) 6774)
0xd62: @@ SetMessage(Stack[-1])
0xd63: Pop(1)
0xd64: @@ ClearReplies()
0xd65: Pop(0)
0xd66: Push((int) 6775)
0xd67: Push((int) -1)
0xd68: Push((int) 7465)
0xd69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6a: Pop(3)
0xd6b: Push((int) 6776)
0xd6c: Push((int) -1)
0xd6d: Push((int) 7466)
0xd6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6f: Pop(3)
0xd70: Return(); Pop(0)

0xd71: Push((int) 7459)
0xd72: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd73: IF (Stack[-1] == 0) GOTO 0xd88; Pop(1)

0xd74: PushEmpty(string)
0xd75: Stack[-1] = "Neutral"
0xd76: Call 0xb79

0xd77: Pop(1)
0xd78: Push((int) 6769)
0xd79: @@ SetMessage(Stack[-1])
0xd7a: Pop(1)
0xd7b: @@ ClearReplies()
0xd7c: Pop(0)
0xd7d: Push((int) 6770)
0xd7e: Push((int) -1)
0xd7f: Push((int) 7460)
0xd80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd81: Pop(3)
0xd82: Push((int) 6771)
0xd83: Push((int) -1)
0xd84: Push((int) 7461)
0xd85: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd86: Pop(3)
0xd87: Return(); Pop(0)

0xd88: Push((int) 7491)
0xd89: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd8a: IF (Stack[-1] == 0) GOTO 0xd9f; Pop(1)

0xd8b: PushEmpty(string)
0xd8c: Stack[-1] = "Neutral"
0xd8d: Call 0xb79

0xd8e: Pop(1)
0xd8f: Push((int) 6799)
0xd90: @@ SetMessage(Stack[-1])
0xd91: Pop(1)
0xd92: @@ ClearReplies()
0xd93: Pop(0)
0xd94: Push((int) 6800)
0xd95: Push((int) 7493)
0xd96: Push((int) 7492)
0xd97: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd98: Pop(3)
0xd99: Push((int) 6807)
0xd9a: Push((int) 7493)
0xd9b: Push((int) 7500)
0xd9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9d: Pop(3)
0xd9e: Return(); Pop(0)

0xd9f: Push((int) 7493)
0xda0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda1: IF (Stack[-1] == 0) GOTO 0xdb6; Pop(1)

0xda2: PushEmpty(string)
0xda3: Stack[-1] = "Neutral"
0xda4: Call 0xb79

0xda5: Pop(1)
0xda6: Push((int) 6801)
0xda7: @@ SetMessage(Stack[-1])
0xda8: Pop(1)
0xda9: @@ ClearReplies()
0xdaa: Pop(0)
0xdab: Push((int) 6802)
0xdac: Push((int) 7495)
0xdad: Push((int) 7494)
0xdae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdaf: Pop(3)
0xdb0: Push((int) 6806)
0xdb1: Push((int) 7495)
0xdb2: Push((int) 7498)
0xdb3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb4: Pop(3)
0xdb5: Return(); Pop(0)

0xdb6: Push((int) 7495)
0xdb7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb8: IF (Stack[-1] == 0) GOTO 0xdd2; Pop(1)

0xdb9: PushEmpty(string)
0xdba: Stack[-1] = "Neutral"
0xdbb: Call 0xb79

0xdbc: Pop(1)
0xdbd: Push((int) 6803)
0xdbe: @@ SetMessage(Stack[-1])
0xdbf: Pop(1)
0xdc0: @@ ClearReplies()
0xdc1: Pop(0)
0xdc2: Push((int) 6804)
0xdc3: Push((int) -1)
0xdc4: Push((int) 7496)
0xdc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc6: Pop(3)
0xdc7: Push((int) 6805)
0xdc8: Push((int) -1)
0xdc9: Push((int) 7497)
0xdca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdcb: Pop(3)
0xdcc: Push((int) 7097)
0xdcd: Push((int) 7825)
0xdce: Push((int) 7824)
0xdcf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd0: Pop(3)
0xdd1: Return(); Pop(0)

0xdd2: Push((int) 7825)
0xdd3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd4: IF (Stack[-1] == 0) GOTO 0xde4; Pop(1)

0xdd5: PushEmpty(string)
0xdd6: Stack[-1] = "Neutral"
0xdd7: Call 0xb79

0xdd8: Pop(1)
0xdd9: Push((int) 7098)
0xdda: @@ SetMessage(Stack[-1])
0xddb: Pop(1)
0xddc: @@ ClearReplies()
0xddd: Pop(0)
0xdde: Push((int) 7099)
0xddf: Push((int) 7827)
0xde0: Push((int) 7826)
0xde1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde2: Pop(3)
0xde3: Return(); Pop(0)

0xde4: Push((int) 7827)
0xde5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xde6: IF (Stack[-1] == 0) GOTO 0xdfb; Pop(1)

0xde7: PushEmpty(string)
0xde8: Stack[-1] = "Neutral"
0xde9: Call 0xb79

0xdea: Pop(1)
0xdeb: Push((int) 7100)
0xdec: @@ SetMessage(Stack[-1])
0xded: Pop(1)
0xdee: @@ ClearReplies()
0xdef: Pop(0)
0xdf0: Push((int) 7101)
0xdf1: Push((int) -1)
0xdf2: Push((int) 7828)
0xdf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf4: Pop(3)
0xdf5: Push((int) 7102)
0xdf6: Push((int) 7830)
0xdf7: Push((int) 7829)
0xdf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf9: Pop(3)
0xdfa: Return(); Pop(0)

0xdfb: Push((int) 7830)
0xdfc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdfd: IF (Stack[-1] == 0) GOTO 0xe0d; Pop(1)

0xdfe: PushEmpty(string)
0xdff: Stack[-1] = "Neutral"
0xe00: Call 0xb79

0xe01: Pop(1)
0xe02: Push((int) 7103)
0xe03: @@ SetMessage(Stack[-1])
0xe04: Pop(1)
0xe05: @@ ClearReplies()
0xe06: Pop(0)
0xe07: Push((int) 7104)
0xe08: Push((int) -1)
0xe09: Push((int) 7831)
0xe0a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0b: Pop(3)
0xe0c: Return(); Pop(0)

0xe0d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe0e: PushEmpty(bool)
0xe0f: Call 0x1f0d

0xe10: Pop(0)
0xe11: IF (Stack[-1] == 0) GOTO 0xe15; Pop(1)

0xe12: @ lshStopAnimation()
0xe13: Pop(0)
0xe14: GOTO 0xe17

0xe15: @ StopAnimation()
0xe16: Pop(0)
0xe17: Return(); Pop(0)

0xe18: GOTO 0xb8a

0xe19: Return(); Pop(0)

0xe1a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe1b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe1c: PushEmpty(bool, object)
0xe1d: Stack[-1] = Stack[-11]
0xe1e: Call 0x1e75

0xe1f: Pop(1)
0xe20: Pop(1); Push((bool) Stack[-1] == 0)
0xe21: IF (Stack[-1] == 0) GOTO 0xe24; Pop(1)

0xe22: Stack[-10] = (int) -2
0xe23: Return(); Pop(8)

0xe24: @ CreateDialog(Stack[-4])
0xe25: Pop(0)
0xe26: PushEmpty(int)
0xe27: Call 0x1f09

0xe28: Pop(0)
0xe29: @@ SetNPCName(Stack[-1])
0xe2a: Pop(1)
0xe2b: PushEmpty(string)
0xe2c: Call 0x1f0b

0xe2d: Pop(0)
0xe2e: @@ SetPhoto(Stack[-1])
0xe2f: Pop(1)
0xe30: PushEmpty(int)
0xe31: Call 0x2575

0xe32: Pop(0)
0xe33: @@ SetPlayerName(Stack[-1])
0xe34: Pop(1)
0xe35: Stack[-2] = (int) -1
0xe36: @ IsOverrideActive(Stack[-3])
0xe37: Pop(0)
0xe38: Push(Stack[-3])
0xe39: IF (Stack[-1] == 0) GOTO 0xe3c; Pop(1)

0xe3a: Stack[-10] = (int) -2
0xe3b: Return(); Pop(8)

0xe3c: @ DoDialog(Stack[-4])
0xe3d: Pop(0)
0xe3e: PushEmpty(object, object)
0xe3f: Stack[-2] = Stack[-11]
0xe40: Stack[-1] = Stack[-6]
0xe41: Push(-2, 4); TaskCall(11)
0xe42: Call 0xe59

0xe43: Pop(-2, 4); TaskReturn
0xe44: Pop(2)
0xe45: @@ IsDialogEnd(Stack[-1])
0xe46: Pop(0)
0xe47: Pop(0); Push((bool) Stack[-1] == 0)
0xe48: IF (Stack[-1] == 0) GOTO 0xe4e; Pop(1)

0xe49: @ sync()
0xe4a: Pop(0)
0xe4b: @@ IsDialogEnd(Stack[-1])
0xe4c: Pop(0)
0xe4d: GOTO 0xe47

0xe4e: PushEmpty(object)
0xe4f: Stack[-1] = Stack[-10]
0xe50: Call 0x1ead

0xe51: Pop(1)
0xe52: @ StopDialog(Stack[-4])
0xe53: Pop(0)
0xe54: @@ GetReturnValue(Stack[-2])
0xe55: Pop(0)
0xe56: Stack[-10] = Stack[-2]
0xe57: Return(); Pop(8)

0xe58: Stack[-4] = 0
0xe59: PushEmpty()
0xe5a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xe5b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xe5c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xe5d: Push((int) 1)
0xe5e: IF (Stack[-1] == 0) GOTO 0xee8; Pop(1)

0xe5f: PushEmpty(string)
0xe60: Stack[-1] = "Neutral"
0xe61: Call 0xf06

0xe62: Pop(1)
0xe63: Push((int) 8926)
0xe64: @@ SetMessage(Stack[-1])
0xe65: Pop(1)
0xe66: @@ ClearReplies()
0xe67: Pop(0)
0xe68: PushEmpty(bool)
0xe69: Stack[-1] = (bool) 0
0xe6a: PushEmpty(bool, object)
0xe6b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe6c: Call 0x22fc

0xe6d: Pop(1)
0xe6e: IF (Stack[-1] == 0) GOTO 0xe75; Pop(1)

0xe6f: PushEmpty(bool, object)
0xe70: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe71: Call 0x2308

0xe72: Pop(1)
0xe73: IF (Stack[-1] == 0) GOTO 0xe75; Pop(1)

0xe74: Stack[-1] = (bool) 1
0xe75: IF (Stack[-1] == 0) GOTO 0xe7b; Pop(1)

0xe76: Push((int) 8977)
0xe77: Push((int) 9847)
0xe78: Push((int) 9846)
0xe79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7a: Pop(3)
0xe7b: PushEmpty(bool)
0xe7c: Stack[-1] = (bool) 0
0xe7d: PushEmpty(bool)
0xe7e: Stack[-1] = (bool) 0
0xe7f: PushEmpty(bool, object)
0xe80: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe81: Call 0x2320

0xe82: Pop(1)
0xe83: IF (Stack[-1] == 0) GOTO 0xe8a; Pop(1)

0xe84: PushEmpty(bool, object)
0xe85: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe86: Call 0x22fc

0xe87: Pop(1)
0xe88: IF (Stack[-1] == 0) GOTO 0xe8a; Pop(1)

0xe89: Stack[-1] = (bool) 1
0xe8a: IF (Stack[-1] == 0) GOTO 0xe92; Pop(1)

0xe8b: PushEmpty(bool, object)
0xe8c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe8d: Call 0x2308

0xe8e: Pop(1)
0xe8f: Pop(1); Push((bool) Stack[-1] == 0)
0xe90: IF (Stack[-1] == 0) GOTO 0xe92; Pop(1)

0xe91: Stack[-1] = (bool) 1
0xe92: IF (Stack[-1] == 0) GOTO 0xe98; Pop(1)

0xe93: Push((int) 9005)
0xe94: Push((int) 9877)
0xe95: Push((int) 9876)
0xe96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe97: Pop(3)
0xe98: PushEmpty(bool)
0xe99: Stack[-1] = (bool) 0
0xe9a: PushEmpty(bool, object)
0xe9b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe9c: Call 0x2344

0xe9d: Pop(1)
0xe9e: IF (Stack[-1] == 0) GOTO 0xea5; Pop(1)

0xe9f: PushEmpty(bool, object)
0xea0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xea1: Call 0x2338

0xea2: Pop(1)
0xea3: IF (Stack[-1] == 0) GOTO 0xea5; Pop(1)

0xea4: Stack[-1] = (bool) 1
0xea5: IF (Stack[-1] == 0) GOTO 0xeab; Pop(1)

0xea6: Push((int) 9008)
0xea7: Push((int) 9880)
0xea8: Push((int) 9879)
0xea9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeaa: Pop(3)
0xeab: PushEmpty(bool)
0xeac: Stack[-1] = (bool) 0
0xead: PushEmpty(bool, object)
0xeae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xeaf: Call 0x2350

0xeb0: Pop(1)
0xeb1: IF (Stack[-1] == 0) GOTO 0xeb8; Pop(1)

0xeb2: PushEmpty(bool, object)
0xeb3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xeb4: Call 0x235c

0xeb5: Pop(1)
0xeb6: IF (Stack[-1] == 0) GOTO 0xeb8; Pop(1)

0xeb7: Stack[-1] = (bool) 1
0xeb8: IF (Stack[-1] == 0) GOTO 0xebe; Pop(1)

0xeb9: Push((int) 10218)
0xeba: Push((int) 11265)
0xebb: Push((int) 11264)
0xebc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xebd: Pop(3)
0xebe: PushEmpty(bool)
0xebf: Stack[-1] = (bool) 0
0xec0: PushEmpty(bool, object)
0xec1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xec2: Call 0x2374

0xec3: Pop(1)
0xec4: IF (Stack[-1] == 0) GOTO 0xecb; Pop(1)

0xec5: PushEmpty(bool, object)
0xec6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xec7: Call 0x2368

0xec8: Pop(1)
0xec9: IF (Stack[-1] == 0) GOTO 0xecb; Pop(1)

0xeca: Stack[-1] = (bool) 1
0xecb: IF (Stack[-1] == 0) GOTO 0xed1; Pop(1)

0xecc: Push((int) 10373)
0xecd: Push((int) 11439)
0xece: Push((int) 11438)
0xecf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed0: Pop(3)
0xed1: Push((int) 8975)
0xed2: Push((int) 9792)
0xed3: Push((int) 9844)
0xed4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed5: Pop(3)
0xed6: Push((int) 8976)
0xed7: Push((int) 9815)
0xed8: Push((int) 9845)
0xed9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeda: Pop(3)
0xedb: Push((int) 9020)
0xedc: Push((int) 9890)
0xedd: Push((int) 9892)
0xede: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xedf: Pop(3)
0xee0: Push((int) 11139)
0xee1: Push((int) -1)
0xee2: Push((int) 12328)
0xee3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee4: Pop(3)
0xee5: GOTO 0xee8

0xee6: Return(); Pop(0)

0xee7: GOTO 0xe5d

0xee8: PushEmpty(bool)
0xee9: Call 0x1f0d

0xeea: Pop(0)
0xeeb: IF (Stack[-1] == 0) GOTO 0xef7; Pop(1)

0xeec: @ lshWaitForAnimEnd()
0xeed: Pop(0)
0xeee: Push( Stack[3 + Tasks[-1].StackPointer] )
0xeef: IF (Stack[-1] == 0) GOTO 0xef1; Pop(1)

0xef0: GOTO 0xef6

0xef1: PushEmpty(string)
0xef2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xef3: Call 0x1eb1

0xef4: Pop(1)
0xef5: GOTO 0xeec

0xef6: GOTO 0xf05

0xef7: Push("all")
0xef8: Push("idle")
0xef9: @ PlayAnimation(Stack[-2], Stack[-1])
0xefa: Pop(2)
0xefb: @ WaitForAnimEnd()
0xefc: Pop(0)
0xefd: Push( Stack[3 + Tasks[-1].StackPointer] )
0xefe: IF (Stack[-1] == 0) GOTO 0xf00; Pop(1)

0xeff: GOTO 0xf05

0xf00: Push("all")
0xf01: Push("idle")
0xf02: @ PlayAnimation(Stack[-2], Stack[-1])
0xf03: Pop(2)
0xf04: GOTO 0xefb

0xf05: Return(); Pop(0)

0xf06: PushEmpty()
0xf07: PushEmpty(bool)
0xf08: Call 0x1f0d

0xf09: Pop(0)
0xf0a: Pop(1); Push((bool) Stack[-1] == 0)
0xf0b: IF (Stack[-1] == 0) GOTO 0xf0d; Pop(1)

0xf0c: Return(); Pop(0)

0xf0d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf0e: IF (Stack[-1] == 0) GOTO 0xf10; Pop(1)

0xf0f: Return(); Pop(0)

0xf10: PushEmpty(string)
0xf11: Stack[-1] = Stack[-2]
0xf12: Call 0x1eb1

0xf13: Pop(1)
0xf14: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf15: Return(); Pop(0)

0xf16: PushEmpty()
0xf17: Push((int) 1)
0xf18: IF (Stack[-1] == 0) GOTO 0x14ef; Pop(1)

0xf19: PushEmpty()
0xf1a: Call 0x1ec3

0xf1b: Pop(0)
0xf1c: Push((int) 9874)
0xf1d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf1e: IF (Stack[-1] == 0) GOTO 0xf2e; Pop(1)

0xf1f: PushEmpty(object, object)
0xf20: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf21: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf22: Call 0x1f80

0xf23: Pop(2)
0xf24: PushEmpty(object, object)
0xf25: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf26: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf27: Call 0x1f86

0xf28: Pop(2)
0xf29: PushEmpty(object, object)
0xf2a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf2b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2c: Call 0x1f0f

0xf2d: Pop(2)
0xf2e: Push((int) 9875)
0xf2f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf30: IF (Stack[-1] == 0) GOTO 0xf40; Pop(1)

0xf31: PushEmpty(object, object)
0xf32: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf33: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf34: Call 0x1f80

0xf35: Pop(2)
0xf36: PushEmpty(object, object)
0xf37: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf38: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf39: Call 0x1f86

0xf3a: Pop(2)
0xf3b: PushEmpty(object, object)
0xf3c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf3e: Call 0x1f0f

0xf3f: Pop(2)
0xf40: Push((int) 12339)
0xf41: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf42: IF (Stack[-1] == 0) GOTO 0xf48; Pop(1)

0xf43: PushEmpty(object, object)
0xf44: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf45: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf46: Call 0x1f80

0xf47: Pop(2)
0xf48: Push((int) 9878)
0xf49: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf4a: IF (Stack[-1] == 0) GOTO 0xf5a; Pop(1)

0xf4b: PushEmpty(object, object)
0xf4c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf4d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4e: Call 0x1fa6

0xf4f: Pop(2)
0xf50: PushEmpty(object, object)
0xf51: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf53: Call 0x1f86

0xf54: Pop(2)
0xf55: PushEmpty(object, object)
0xf56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf58: Call 0x1f0f

0xf59: Pop(2)
0xf5a: Push((int) 9891)
0xf5b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf5c: IF (Stack[-1] == 0) GOTO 0xf67; Pop(1)

0xf5d: PushEmpty(object, object)
0xf5e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf5f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf60: Call 0x1fac

0xf61: Pop(2)
0xf62: PushEmpty(object, object)
0xf63: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf64: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf65: Call 0x1fb2

0xf66: Pop(2)
0xf67: Push((int) 11436)
0xf68: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf69: IF (Stack[-1] == 0) GOTO 0xf79; Pop(1)

0xf6a: PushEmpty(object, object)
0xf6b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf6c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf6d: Call 0x1fdf

0xf6e: Pop(2)
0xf6f: PushEmpty(object, object)
0xf70: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf71: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf72: Call 0x1fe5

0xf73: Pop(2)
0xf74: PushEmpty(object, object)
0xf75: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf76: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf77: Call 0x1ff9

0xf78: Pop(2)
0xf79: Push((int) 11437)
0xf7a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf7b: IF (Stack[-1] == 0) GOTO 0xf8b; Pop(1)

0xf7c: PushEmpty(object, object)
0xf7d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf7e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf7f: Call 0x1fdf

0xf80: Pop(2)
0xf81: PushEmpty(object, object)
0xf82: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf83: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf84: Call 0x1fe5

0xf85: Pop(2)
0xf86: PushEmpty(object, object)
0xf87: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf88: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf89: Call 0x1ff9

0xf8a: Pop(2)
0xf8b: Push((int) 11447)
0xf8c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf8d: IF (Stack[-1] == 0) GOTO 0xf93; Pop(1)

0xf8e: PushEmpty(object, object)
0xf8f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf90: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf91: Call 0x2009

0xf92: Pop(2)
0xf93: Push((int) 11448)
0xf94: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf95: IF (Stack[-1] == 0) GOTO 0xf9b; Pop(1)

0xf96: PushEmpty(object, object)
0xf97: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf98: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf99: Call 0x2009

0xf9a: Pop(2)
0xf9b: Push((int) 9791)
0xf9c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf9d: IF (Stack[-1] == 0) GOTO 0x1025; Pop(1)

0xf9e: PushEmpty(string)
0xf9f: Stack[-1] = "Neutral"
0xfa0: Call 0xf06

0xfa1: Pop(1)
0xfa2: Push((int) 8926)
0xfa3: @@ SetMessage(Stack[-1])
0xfa4: Pop(1)
0xfa5: @@ ClearReplies()
0xfa6: Pop(0)
0xfa7: PushEmpty(bool)
0xfa8: Stack[-1] = (bool) 0
0xfa9: PushEmpty(bool, object)
0xfaa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfab: Call 0x22fc

0xfac: Pop(1)
0xfad: IF (Stack[-1] == 0) GOTO 0xfb4; Pop(1)

0xfae: PushEmpty(bool, object)
0xfaf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfb0: Call 0x2308

0xfb1: Pop(1)
0xfb2: IF (Stack[-1] == 0) GOTO 0xfb4; Pop(1)

0xfb3: Stack[-1] = (bool) 1
0xfb4: IF (Stack[-1] == 0) GOTO 0xfba; Pop(1)

0xfb5: Push((int) 8977)
0xfb6: Push((int) 9847)
0xfb7: Push((int) 9846)
0xfb8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb9: Pop(3)
0xfba: PushEmpty(bool)
0xfbb: Stack[-1] = (bool) 0
0xfbc: PushEmpty(bool)
0xfbd: Stack[-1] = (bool) 0
0xfbe: PushEmpty(bool, object)
0xfbf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfc0: Call 0x2320

0xfc1: Pop(1)
0xfc2: IF (Stack[-1] == 0) GOTO 0xfc9; Pop(1)

0xfc3: PushEmpty(bool, object)
0xfc4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfc5: Call 0x22fc

0xfc6: Pop(1)
0xfc7: IF (Stack[-1] == 0) GOTO 0xfc9; Pop(1)

0xfc8: Stack[-1] = (bool) 1
0xfc9: IF (Stack[-1] == 0) GOTO 0xfd1; Pop(1)

0xfca: PushEmpty(bool, object)
0xfcb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfcc: Call 0x2308

0xfcd: Pop(1)
0xfce: Pop(1); Push((bool) Stack[-1] == 0)
0xfcf: IF (Stack[-1] == 0) GOTO 0xfd1; Pop(1)

0xfd0: Stack[-1] = (bool) 1
0xfd1: IF (Stack[-1] == 0) GOTO 0xfd7; Pop(1)

0xfd2: Push((int) 9005)
0xfd3: Push((int) 9877)
0xfd4: Push((int) 9876)
0xfd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd6: Pop(3)
0xfd7: PushEmpty(bool)
0xfd8: Stack[-1] = (bool) 0
0xfd9: PushEmpty(bool, object)
0xfda: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfdb: Call 0x2344

0xfdc: Pop(1)
0xfdd: IF (Stack[-1] == 0) GOTO 0xfe4; Pop(1)

0xfde: PushEmpty(bool, object)
0xfdf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfe0: Call 0x2338

0xfe1: Pop(1)
0xfe2: IF (Stack[-1] == 0) GOTO 0xfe4; Pop(1)

0xfe3: Stack[-1] = (bool) 1
0xfe4: IF (Stack[-1] == 0) GOTO 0xfea; Pop(1)

0xfe5: Push((int) 9008)
0xfe6: Push((int) 9880)
0xfe7: Push((int) 9879)
0xfe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe9: Pop(3)
0xfea: PushEmpty(bool)
0xfeb: Stack[-1] = (bool) 0
0xfec: PushEmpty(bool, object)
0xfed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfee: Call 0x2350

0xfef: Pop(1)
0xff0: IF (Stack[-1] == 0) GOTO 0xff7; Pop(1)

0xff1: PushEmpty(bool, object)
0xff2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xff3: Call 0x235c

0xff4: Pop(1)
0xff5: IF (Stack[-1] == 0) GOTO 0xff7; Pop(1)

0xff6: Stack[-1] = (bool) 1
0xff7: IF (Stack[-1] == 0) GOTO 0xffd; Pop(1)

0xff8: Push((int) 10218)
0xff9: Push((int) 11265)
0xffa: Push((int) 11264)
0xffb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xffc: Pop(3)
0xffd: PushEmpty(bool)
0xffe: Stack[-1] = (bool) 0
0xfff: PushEmpty(bool, object)
0x1000: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1001: Call 0x2374

0x1002: Pop(1)
0x1003: IF (Stack[-1] == 0) GOTO 0x100a; Pop(1)

0x1004: PushEmpty(bool, object)
0x1005: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1006: Call 0x2368

0x1007: Pop(1)
0x1008: IF (Stack[-1] == 0) GOTO 0x100a; Pop(1)

0x1009: Stack[-1] = (bool) 1
0x100a: IF (Stack[-1] == 0) GOTO 0x1010; Pop(1)

0x100b: Push((int) 10373)
0x100c: Push((int) 11439)
0x100d: Push((int) 11438)
0x100e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100f: Pop(3)
0x1010: Push((int) 8975)
0x1011: Push((int) 9792)
0x1012: Push((int) 9844)
0x1013: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1014: Pop(3)
0x1015: Push((int) 8976)
0x1016: Push((int) 9815)
0x1017: Push((int) 9845)
0x1018: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1019: Pop(3)
0x101a: Push((int) 9020)
0x101b: Push((int) 9890)
0x101c: Push((int) 9892)
0x101d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101e: Pop(3)
0x101f: Push((int) 11139)
0x1020: Push((int) -1)
0x1021: Push((int) 12328)
0x1022: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1023: Pop(3)
0x1024: Return(); Pop(0)

0x1025: Push((int) 9815)
0x1026: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1027: IF (Stack[-1] == 0) GOTO 0x1046; Pop(1)

0x1028: PushEmpty(string)
0x1029: Stack[-1] = "Neutral"
0x102a: Call 0xf06

0x102b: Pop(1)
0x102c: Push((int) 8949)
0x102d: @@ SetMessage(Stack[-1])
0x102e: Pop(1)
0x102f: @@ ClearReplies()
0x1030: Pop(0)
0x1031: Push((int) 8950)
0x1032: Push((int) 9817)
0x1033: Push((int) 9816)
0x1034: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1035: Pop(3)
0x1036: Push((int) 8963)
0x1037: Push((int) 9832)
0x1038: Push((int) 9829)
0x1039: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103a: Pop(3)
0x103b: Push((int) 8964)
0x103c: Push((int) 9832)
0x103d: Push((int) 9831)
0x103e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103f: Pop(3)
0x1040: Push((int) 8972)
0x1041: Push((int) 9841)
0x1042: Push((int) 9840)
0x1043: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1044: Pop(3)
0x1045: Return(); Pop(0)

0x1046: Push((int) 9841)
0x1047: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1048: IF (Stack[-1] == 0) GOTO 0x1058; Pop(1)

0x1049: PushEmpty(string)
0x104a: Stack[-1] = "Neutral"
0x104b: Call 0xf06

0x104c: Pop(1)
0x104d: Push((int) 8973)
0x104e: @@ SetMessage(Stack[-1])
0x104f: Pop(1)
0x1050: @@ ClearReplies()
0x1051: Pop(0)
0x1052: Push((int) 8974)
0x1053: Push((int) 9817)
0x1054: Push((int) 9842)
0x1055: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1056: Pop(3)
0x1057: Return(); Pop(0)

0x1058: Push((int) 9832)
0x1059: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105a: IF (Stack[-1] == 0) GOTO 0x106f; Pop(1)

0x105b: PushEmpty(string)
0x105c: Stack[-1] = "Neutral"
0x105d: Call 0xf06

0x105e: Pop(1)
0x105f: Push((int) 8965)
0x1060: @@ SetMessage(Stack[-1])
0x1061: Pop(1)
0x1062: @@ ClearReplies()
0x1063: Pop(0)
0x1064: Push((int) 8966)
0x1065: Push((int) 9834)
0x1066: Push((int) 9833)
0x1067: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1068: Pop(3)
0x1069: Push((int) 8971)
0x106a: Push((int) 9834)
0x106b: Push((int) 9838)
0x106c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106d: Pop(3)
0x106e: Return(); Pop(0)

0x106f: Push((int) 9834)
0x1070: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1071: IF (Stack[-1] == 0) GOTO 0x1086; Pop(1)

0x1072: PushEmpty(string)
0x1073: Stack[-1] = "Rage"
0x1074: Call 0xf06

0x1075: Pop(1)
0x1076: Push((int) 8967)
0x1077: @@ SetMessage(Stack[-1])
0x1078: Pop(1)
0x1079: @@ ClearReplies()
0x107a: Pop(0)
0x107b: Push((int) 8968)
0x107c: Push((int) 9836)
0x107d: Push((int) 9835)
0x107e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107f: Pop(3)
0x1080: Push((int) 8970)
0x1081: Push((int) -1)
0x1082: Push((int) 9837)
0x1083: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1084: Pop(3)
0x1085: Return(); Pop(0)

0x1086: Push((int) 9836)
0x1087: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1088: IF (Stack[-1] == 0) GOTO 0x1093; Pop(1)

0x1089: PushEmpty(string)
0x108a: Stack[-1] = "Neutral"
0x108b: Call 0xf06

0x108c: Pop(1)
0x108d: Push((int) 8969)
0x108e: @@ SetMessage(Stack[-1])
0x108f: Pop(1)
0x1090: @@ ClearReplies()
0x1091: Pop(0)
0x1092: Return(); Pop(0)

0x1093: Push((int) 9817)
0x1094: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1095: IF (Stack[-1] == 0) GOTO 0x10af; Pop(1)

0x1096: PushEmpty(string)
0x1097: Stack[-1] = "Neutral"
0x1098: Call 0xf06

0x1099: Pop(1)
0x109a: Push((int) 8951)
0x109b: @@ SetMessage(Stack[-1])
0x109c: Pop(1)
0x109d: @@ ClearReplies()
0x109e: Pop(0)
0x109f: Push((int) 8952)
0x10a0: Push((int) -1)
0x10a1: Push((int) 9818)
0x10a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a3: Pop(3)
0x10a4: Push((int) 8953)
0x10a5: Push((int) -1)
0x10a6: Push((int) 9819)
0x10a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a8: Pop(3)
0x10a9: Push((int) 8954)
0x10aa: Push((int) 9821)
0x10ab: Push((int) 9820)
0x10ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10ad: Pop(3)
0x10ae: Return(); Pop(0)

0x10af: Push((int) 9821)
0x10b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b1: IF (Stack[-1] == 0) GOTO 0x10c6; Pop(1)

0x10b2: PushEmpty(string)
0x10b3: Stack[-1] = "Neutral"
0x10b4: Call 0xf06

0x10b5: Pop(1)
0x10b6: Push((int) 8955)
0x10b7: @@ SetMessage(Stack[-1])
0x10b8: Pop(1)
0x10b9: @@ ClearReplies()
0x10ba: Pop(0)
0x10bb: Push((int) 8956)
0x10bc: Push((int) -1)
0x10bd: Push((int) 9822)
0x10be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10bf: Pop(3)
0x10c0: Push((int) 8957)
0x10c1: Push((int) 9824)
0x10c2: Push((int) 9823)
0x10c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c4: Pop(3)
0x10c5: Return(); Pop(0)

0x10c6: Push((int) 9824)
0x10c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c8: IF (Stack[-1] == 0) GOTO 0x10dd; Pop(1)

0x10c9: PushEmpty(string)
0x10ca: Stack[-1] = "Neutral"
0x10cb: Call 0xf06

0x10cc: Pop(1)
0x10cd: Push((int) 8958)
0x10ce: @@ SetMessage(Stack[-1])
0x10cf: Pop(1)
0x10d0: @@ ClearReplies()
0x10d1: Pop(0)
0x10d2: Push((int) 8959)
0x10d3: Push((int) 9826)
0x10d4: Push((int) 9825)
0x10d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d6: Pop(3)
0x10d7: Push((int) 8962)
0x10d8: Push((int) -1)
0x10d9: Push((int) 9828)
0x10da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10db: Pop(3)
0x10dc: Return(); Pop(0)

0x10dd: Push((int) 9826)
0x10de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10df: IF (Stack[-1] == 0) GOTO 0x10ef; Pop(1)

0x10e0: PushEmpty(string)
0x10e1: Stack[-1] = "Neutral"
0x10e2: Call 0xf06

0x10e3: Pop(1)
0x10e4: Push((int) 8960)
0x10e5: @@ SetMessage(Stack[-1])
0x10e6: Pop(1)
0x10e7: @@ ClearReplies()
0x10e8: Pop(0)
0x10e9: Push((int) 8961)
0x10ea: Push((int) -1)
0x10eb: Push((int) 9827)
0x10ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10ed: Pop(3)
0x10ee: Return(); Pop(0)

0x10ef: Push((int) 9792)
0x10f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f1: IF (Stack[-1] == 0) GOTO 0x111f; Pop(1)

0x10f2: PushEmpty(string)
0x10f3: Stack[-1] = "Neutral"
0x10f4: Call 0xf06

0x10f5: Pop(1)
0x10f6: Push((int) 8927)
0x10f7: @@ SetMessage(Stack[-1])
0x10f8: Pop(1)
0x10f9: @@ ClearReplies()
0x10fa: Pop(0)
0x10fb: Push((int) 8928)
0x10fc: Push((int) 9794)
0x10fd: Push((int) 9793)
0x10fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10ff: Pop(3)
0x1100: Push((int) 8941)
0x1101: Push((int) 9808)
0x1102: Push((int) 9807)
0x1103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1104: Pop(3)
0x1105: Return(); Pop(0)

0x1106: PushEmpty(string)
0x1107: Stack[-1] = "Neutral"
0x1108: Call 0xf06

0x1109: Pop(1)
0x110a: Push((int) 10085)
0x110b: @@ SetMessage(Stack[-1])
0x110c: Pop(1)
0x110d: @@ ClearReplies()
0x110e: Pop(0)
0x110f: Push((int) 10086)
0x1110: Push((int) 11117)
0x1111: Push((int) 11116)
0x1112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1113: Pop(3)
0x1114: Push((int) 10106)
0x1115: Push((int) 11117)
0x1116: Push((int) 11139)
0x1117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1118: Pop(3)
0x1119: Push((int) 10107)
0x111a: Push((int) 11142)
0x111b: Push((int) 11141)
0x111c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111d: Pop(3)
0x111e: Return(); Pop(0)

0x111f: Push((int) 11142)
0x1120: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1121: IF (Stack[-1] == 0) GOTO 0x1136; Pop(1)

0x1122: PushEmpty(string)
0x1123: Stack[-1] = "Neutral"
0x1124: Call 0xf06

0x1125: Pop(1)
0x1126: Push((int) 10108)
0x1127: @@ SetMessage(Stack[-1])
0x1128: Pop(1)
0x1129: @@ ClearReplies()
0x112a: Pop(0)
0x112b: Push((int) 10109)
0x112c: Push((int) 11117)
0x112d: Push((int) 11143)
0x112e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112f: Pop(3)
0x1130: Push((int) 10110)
0x1131: Push((int) 11117)
0x1132: Push((int) 11145)
0x1133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1134: Pop(3)
0x1135: Return(); Pop(0)

0x1136: Push((int) 11117)
0x1137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1138: IF (Stack[-1] == 0) GOTO 0x114d; Pop(1)

0x1139: PushEmpty(string)
0x113a: Stack[-1] = "Neutral"
0x113b: Call 0xf06

0x113c: Pop(1)
0x113d: Push((int) 10087)
0x113e: @@ SetMessage(Stack[-1])
0x113f: Pop(1)
0x1140: @@ ClearReplies()
0x1141: Pop(0)
0x1142: Push((int) 10088)
0x1143: Push((int) 11119)
0x1144: Push((int) 11118)
0x1145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1146: Pop(3)
0x1147: Push((int) 10105)
0x1148: Push((int) 11121)
0x1149: Push((int) 11137)
0x114a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114b: Pop(3)
0x114c: Return(); Pop(0)

0x114d: Push((int) 11119)
0x114e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x114f: IF (Stack[-1] == 0) GOTO 0x1164; Pop(1)

0x1150: PushEmpty(string)
0x1151: Stack[-1] = "Neutral"
0x1152: Call 0xf06

0x1153: Pop(1)
0x1154: Push((int) 10089)
0x1155: @@ SetMessage(Stack[-1])
0x1156: Pop(1)
0x1157: @@ ClearReplies()
0x1158: Pop(0)
0x1159: Push((int) 10090)
0x115a: Push((int) 11121)
0x115b: Push((int) 11120)
0x115c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115d: Pop(3)
0x115e: Push((int) 10101)
0x115f: Push((int) 11132)
0x1160: Push((int) 11131)
0x1161: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1162: Pop(3)
0x1163: Return(); Pop(0)

0x1164: Push((int) 11132)
0x1165: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1166: IF (Stack[-1] == 0) GOTO 0x117b; Pop(1)

0x1167: PushEmpty(string)
0x1168: Stack[-1] = "Neutral"
0x1169: Call 0xf06

0x116a: Pop(1)
0x116b: Push((int) 10102)
0x116c: @@ SetMessage(Stack[-1])
0x116d: Pop(1)
0x116e: @@ ClearReplies()
0x116f: Pop(0)
0x1170: Push((int) 10103)
0x1171: Push((int) 11121)
0x1172: Push((int) 11133)
0x1173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1174: Pop(3)
0x1175: Push((int) 10104)
0x1176: Push((int) 11121)
0x1177: Push((int) 11135)
0x1178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1179: Pop(3)
0x117a: Return(); Pop(0)

0x117b: Push((int) 11121)
0x117c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x117d: IF (Stack[-1] == 0) GOTO 0x1192; Pop(1)

0x117e: PushEmpty(string)
0x117f: Stack[-1] = "Neutral"
0x1180: Call 0xf06

0x1181: Pop(1)
0x1182: Push((int) 10091)
0x1183: @@ SetMessage(Stack[-1])
0x1184: Pop(1)
0x1185: @@ ClearReplies()
0x1186: Pop(0)
0x1187: Push((int) 10092)
0x1188: Push((int) 11123)
0x1189: Push((int) 11122)
0x118a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118b: Pop(3)
0x118c: Push((int) 10097)
0x118d: Push((int) 11128)
0x118e: Push((int) 11127)
0x118f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1190: Pop(3)
0x1191: Return(); Pop(0)

0x1192: Push((int) 11128)
0x1193: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1194: IF (Stack[-1] == 0) GOTO 0x11a9; Pop(1)

0x1195: PushEmpty(string)
0x1196: Stack[-1] = "Neutral"
0x1197: Call 0xf06

0x1198: Pop(1)
0x1199: Push((int) 10098)
0x119a: @@ SetMessage(Stack[-1])
0x119b: Pop(1)
0x119c: @@ ClearReplies()
0x119d: Pop(0)
0x119e: Push((int) 10099)
0x119f: Push((int) -1)
0x11a0: Push((int) 11129)
0x11a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a2: Pop(3)
0x11a3: Push((int) 10100)
0x11a4: Push((int) -1)
0x11a5: Push((int) 11130)
0x11a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a7: Pop(3)
0x11a8: Return(); Pop(0)

0x11a9: Push((int) 11123)
0x11aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11ab: IF (Stack[-1] == 0) GOTO 0x11c5; Pop(1)

0x11ac: PushEmpty(string)
0x11ad: Stack[-1] = "Neutral"
0x11ae: Call 0xf06

0x11af: Pop(1)
0x11b0: Push((int) 10093)
0x11b1: @@ SetMessage(Stack[-1])
0x11b2: Pop(1)
0x11b3: @@ ClearReplies()
0x11b4: Pop(0)
0x11b5: Push((int) 10094)
0x11b6: Push((int) -1)
0x11b7: Push((int) 11124)
0x11b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b9: Pop(3)
0x11ba: Push((int) 10095)
0x11bb: Push((int) -1)
0x11bc: Push((int) 11125)
0x11bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11be: Pop(3)
0x11bf: Push((int) 10096)
0x11c0: Push((int) -1)
0x11c1: Push((int) 11126)
0x11c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c3: Pop(3)
0x11c4: Return(); Pop(0)

0x11c5: Push((int) 9808)
0x11c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c7: IF (Stack[-1] == 0) GOTO 0x11d7; Pop(1)

0x11c8: PushEmpty(string)
0x11c9: Stack[-1] = "Neutral"
0x11ca: Call 0xf06

0x11cb: Pop(1)
0x11cc: Push((int) 8942)
0x11cd: @@ SetMessage(Stack[-1])
0x11ce: Pop(1)
0x11cf: @@ ClearReplies()
0x11d0: Pop(0)
0x11d1: Push((int) 8943)
0x11d2: Push((int) 9810)
0x11d3: Push((int) 9809)
0x11d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d5: Pop(3)
0x11d6: Return(); Pop(0)

0x11d7: Push((int) 9810)
0x11d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d9: IF (Stack[-1] == 0) GOTO 0x11ee; Pop(1)

0x11da: PushEmpty(string)
0x11db: Stack[-1] = "Neutral"
0x11dc: Call 0xf06

0x11dd: Pop(1)
0x11de: Push((int) 8944)
0x11df: @@ SetMessage(Stack[-1])
0x11e0: Pop(1)
0x11e1: @@ ClearReplies()
0x11e2: Pop(0)
0x11e3: Push((int) 8945)
0x11e4: Push((int) -1)
0x11e5: Push((int) 9811)
0x11e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e7: Pop(3)
0x11e8: Push((int) 8946)
0x11e9: Push((int) 9813)
0x11ea: Push((int) 9812)
0x11eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11ec: Pop(3)
0x11ed: Return(); Pop(0)

0x11ee: Push((int) 9813)
0x11ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f0: IF (Stack[-1] == 0) GOTO 0x1200; Pop(1)

0x11f1: PushEmpty(string)
0x11f2: Stack[-1] = "Neutral"
0x11f3: Call 0xf06

0x11f4: Pop(1)
0x11f5: Push((int) 8947)
0x11f6: @@ SetMessage(Stack[-1])
0x11f7: Pop(1)
0x11f8: @@ ClearReplies()
0x11f9: Pop(0)
0x11fa: Push((int) 8948)
0x11fb: Push((int) -1)
0x11fc: Push((int) 9814)
0x11fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11fe: Pop(3)
0x11ff: Return(); Pop(0)

0x1200: Push((int) 9794)
0x1201: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1202: IF (Stack[-1] == 0) GOTO 0x1217; Pop(1)

0x1203: PushEmpty(string)
0x1204: Stack[-1] = "Neutral"
0x1205: Call 0xf06

0x1206: Pop(1)
0x1207: Push((int) 8929)
0x1208: @@ SetMessage(Stack[-1])
0x1209: Pop(1)
0x120a: @@ ClearReplies()
0x120b: Pop(0)
0x120c: Push((int) 8930)
0x120d: Push((int) 9796)
0x120e: Push((int) 9795)
0x120f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1210: Pop(3)
0x1211: Push((int) 8938)
0x1212: Push((int) 9804)
0x1213: Push((int) 9803)
0x1214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1215: Pop(3)
0x1216: Return(); Pop(0)

0x1217: Push((int) 9804)
0x1218: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1219: IF (Stack[-1] == 0) GOTO 0x1229; Pop(1)

0x121a: PushEmpty(string)
0x121b: Stack[-1] = "Neutral"
0x121c: Call 0xf06

0x121d: Pop(1)
0x121e: Push((int) 8939)
0x121f: @@ SetMessage(Stack[-1])
0x1220: Pop(1)
0x1221: @@ ClearReplies()
0x1222: Pop(0)
0x1223: Push((int) 8940)
0x1224: Push((int) 9796)
0x1225: Push((int) 9805)
0x1226: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1227: Pop(3)
0x1228: Return(); Pop(0)

0x1229: Push((int) 9796)
0x122a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122b: IF (Stack[-1] == 0) GOTO 0x1245; Pop(1)

0x122c: PushEmpty(string)
0x122d: Stack[-1] = "Neutral"
0x122e: Call 0xf06

0x122f: Pop(1)
0x1230: Push((int) 8931)
0x1231: @@ SetMessage(Stack[-1])
0x1232: Pop(1)
0x1233: @@ ClearReplies()
0x1234: Pop(0)
0x1235: Push((int) 8932)
0x1236: Push((int) -1)
0x1237: Push((int) 9797)
0x1238: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1239: Pop(3)
0x123a: Push((int) 8933)
0x123b: Push((int) -1)
0x123c: Push((int) 9798)
0x123d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123e: Pop(3)
0x123f: Push((int) 8934)
0x1240: Push((int) 9800)
0x1241: Push((int) 9799)
0x1242: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1243: Pop(3)
0x1244: Return(); Pop(0)

0x1245: Push((int) 9800)
0x1246: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1247: IF (Stack[-1] == 0) GOTO 0x125c; Pop(1)

0x1248: PushEmpty(string)
0x1249: Stack[-1] = "Neutral"
0x124a: Call 0xf06

0x124b: Pop(1)
0x124c: Push((int) 8935)
0x124d: @@ SetMessage(Stack[-1])
0x124e: Pop(1)
0x124f: @@ ClearReplies()
0x1250: Pop(0)
0x1251: Push((int) 8936)
0x1252: Push((int) -1)
0x1253: Push((int) 9801)
0x1254: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1255: Pop(3)
0x1256: Push((int) 8937)
0x1257: Push((int) -1)
0x1258: Push((int) 9802)
0x1259: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125a: Pop(3)
0x125b: Return(); Pop(0)

0x125c: Push((int) 11439)
0x125d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x125e: IF (Stack[-1] == 0) GOTO 0x1273; Pop(1)

0x125f: PushEmpty(string)
0x1260: Stack[-1] = "Neutral"
0x1261: Call 0xf06

0x1262: Pop(1)
0x1263: Push((int) 10374)
0x1264: @@ SetMessage(Stack[-1])
0x1265: Pop(1)
0x1266: @@ ClearReplies()
0x1267: Pop(0)
0x1268: Push((int) 10375)
0x1269: Push((int) 11442)
0x126a: Push((int) 11440)
0x126b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126c: Pop(3)
0x126d: Push((int) 10376)
0x126e: Push((int) -1)
0x126f: Push((int) 11441)
0x1270: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1271: Pop(3)
0x1272: Return(); Pop(0)

0x1273: Push((int) 11442)
0x1274: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1275: IF (Stack[-1] == 0) GOTO 0x128a; Pop(1)

0x1276: PushEmpty(string)
0x1277: Stack[-1] = "Neutral"
0x1278: Call 0xf06

0x1279: Pop(1)
0x127a: Push((int) 10377)
0x127b: @@ SetMessage(Stack[-1])
0x127c: Pop(1)
0x127d: @@ ClearReplies()
0x127e: Pop(0)
0x127f: Push((int) 10378)
0x1280: Push((int) 11446)
0x1281: Push((int) 11443)
0x1282: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1283: Pop(3)
0x1284: Push((int) 10379)
0x1285: Push((int) 11445)
0x1286: Push((int) 11444)
0x1287: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1288: Pop(3)
0x1289: Return(); Pop(0)

0x128a: Push((int) 11445)
0x128b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x128c: IF (Stack[-1] == 0) GOTO 0x129c; Pop(1)

0x128d: PushEmpty(string)
0x128e: Stack[-1] = "Neutral"
0x128f: Call 0xf06

0x1290: Pop(1)
0x1291: Push((int) 10380)
0x1292: @@ SetMessage(Stack[-1])
0x1293: Pop(1)
0x1294: @@ ClearReplies()
0x1295: Pop(0)
0x1296: Push((int) 10383)
0x1297: Push((int) -1)
0x1298: Push((int) 11448)
0x1299: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129a: Pop(3)
0x129b: Return(); Pop(0)

0x129c: Push((int) 11446)
0x129d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x129e: IF (Stack[-1] == 0) GOTO 0x12ae; Pop(1)

0x129f: PushEmpty(string)
0x12a0: Stack[-1] = "Neutral"
0x12a1: Call 0xf06

0x12a2: Pop(1)
0x12a3: Push((int) 10381)
0x12a4: @@ SetMessage(Stack[-1])
0x12a5: Pop(1)
0x12a6: @@ ClearReplies()
0x12a7: Pop(0)
0x12a8: Push((int) 10382)
0x12a9: Push((int) -1)
0x12aa: Push((int) 11447)
0x12ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12ac: Pop(3)
0x12ad: Return(); Pop(0)

0x12ae: Push((int) 11265)
0x12af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b0: IF (Stack[-1] == 0) GOTO 0x12ca; Pop(1)

0x12b1: PushEmpty(string)
0x12b2: Stack[-1] = "Neutral"
0x12b3: Call 0xf06

0x12b4: Pop(1)
0x12b5: Push((int) 10219)
0x12b6: @@ SetMessage(Stack[-1])
0x12b7: Pop(1)
0x12b8: @@ ClearReplies()
0x12b9: Pop(0)
0x12ba: Push((int) 10361)
0x12bb: Push((int) 11410)
0x12bc: Push((int) 11423)
0x12bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12be: Pop(3)
0x12bf: Push((int) 10347)
0x12c0: Push((int) 11410)
0x12c1: Push((int) 11408)
0x12c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c3: Pop(3)
0x12c4: Push((int) 10348)
0x12c5: Push((int) 11410)
0x12c6: Push((int) 11409)
0x12c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c8: Pop(3)
0x12c9: Return(); Pop(0)

0x12ca: Push((int) 11410)
0x12cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12cc: IF (Stack[-1] == 0) GOTO 0x12e1; Pop(1)

0x12cd: PushEmpty(string)
0x12ce: Stack[-1] = "Neutral"
0x12cf: Call 0xf06

0x12d0: Pop(1)
0x12d1: Push((int) 10349)
0x12d2: @@ SetMessage(Stack[-1])
0x12d3: Pop(1)
0x12d4: @@ ClearReplies()
0x12d5: Pop(0)
0x12d6: Push((int) 10350)
0x12d7: Push((int) 11413)
0x12d8: Push((int) 11412)
0x12d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12da: Pop(3)
0x12db: Push((int) 10362)
0x12dc: Push((int) 11426)
0x12dd: Push((int) 11425)
0x12de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12df: Pop(3)
0x12e0: Return(); Pop(0)

0x12e1: Push((int) 11426)
0x12e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12e3: IF (Stack[-1] == 0) GOTO 0x12f3; Pop(1)

0x12e4: PushEmpty(string)
0x12e5: Stack[-1] = "Neutral"
0x12e6: Call 0xf06

0x12e7: Pop(1)
0x12e8: Push((int) 10363)
0x12e9: @@ SetMessage(Stack[-1])
0x12ea: Pop(1)
0x12eb: @@ ClearReplies()
0x12ec: Pop(0)
0x12ed: Push((int) 10364)
0x12ee: Push((int) 11428)
0x12ef: Push((int) 11427)
0x12f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f1: Pop(3)
0x12f2: Return(); Pop(0)

0x12f3: Push((int) 11428)
0x12f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12f5: IF (Stack[-1] == 0) GOTO 0x1305; Pop(1)

0x12f6: PushEmpty(string)
0x12f7: Stack[-1] = "Neutral"
0x12f8: Call 0xf06

0x12f9: Pop(1)
0x12fa: Push((int) 10365)
0x12fb: @@ SetMessage(Stack[-1])
0x12fc: Pop(1)
0x12fd: @@ ClearReplies()
0x12fe: Pop(0)
0x12ff: Push((int) 10366)
0x1300: Push((int) 11415)
0x1301: Push((int) 11429)
0x1302: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1303: Pop(3)
0x1304: Return(); Pop(0)

0x1305: Push((int) 11413)
0x1306: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1307: IF (Stack[-1] == 0) GOTO 0x1317; Pop(1)

0x1308: PushEmpty(string)
0x1309: Stack[-1] = "Neutral"
0x130a: Call 0xf06

0x130b: Pop(1)
0x130c: Push((int) 10351)
0x130d: @@ SetMessage(Stack[-1])
0x130e: Pop(1)
0x130f: @@ ClearReplies()
0x1310: Pop(0)
0x1311: Push((int) 10352)
0x1312: Push((int) 11415)
0x1313: Push((int) 11414)
0x1314: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1315: Pop(3)
0x1316: Return(); Pop(0)

0x1317: Push((int) 11415)
0x1318: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1319: IF (Stack[-1] == 0) GOTO 0x1329; Pop(1)

0x131a: PushEmpty(string)
0x131b: Stack[-1] = "Neutral"
0x131c: Call 0xf06

0x131d: Pop(1)
0x131e: Push((int) 10353)
0x131f: @@ SetMessage(Stack[-1])
0x1320: Pop(1)
0x1321: @@ ClearReplies()
0x1322: Pop(0)
0x1323: Push((int) 10354)
0x1324: Push((int) 11417)
0x1325: Push((int) 11416)
0x1326: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1327: Pop(3)
0x1328: Return(); Pop(0)

0x1329: Push((int) 11417)
0x132a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x132b: IF (Stack[-1] == 0) GOTO 0x133b; Pop(1)

0x132c: PushEmpty(string)
0x132d: Stack[-1] = "Neutral"
0x132e: Call 0xf06

0x132f: Pop(1)
0x1330: Push((int) 10355)
0x1331: @@ SetMessage(Stack[-1])
0x1332: Pop(1)
0x1333: @@ ClearReplies()
0x1334: Pop(0)
0x1335: Push((int) 10356)
0x1336: Push((int) 11419)
0x1337: Push((int) 11418)
0x1338: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1339: Pop(3)
0x133a: Return(); Pop(0)

0x133b: Push((int) 11419)
0x133c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133d: IF (Stack[-1] == 0) GOTO 0x1352; Pop(1)

0x133e: PushEmpty(string)
0x133f: Stack[-1] = "Neutral"
0x1340: Call 0xf06

0x1341: Pop(1)
0x1342: Push((int) 10357)
0x1343: @@ SetMessage(Stack[-1])
0x1344: Pop(1)
0x1345: @@ ClearReplies()
0x1346: Pop(0)
0x1347: Push((int) 10358)
0x1348: Push((int) 11421)
0x1349: Push((int) 11420)
0x134a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134b: Pop(3)
0x134c: Push((int) 10367)
0x134d: Push((int) 11432)
0x134e: Push((int) 11431)
0x134f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1350: Pop(3)
0x1351: Return(); Pop(0)

0x1352: Push((int) 11432)
0x1353: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1354: IF (Stack[-1] == 0) GOTO 0x1364; Pop(1)

0x1355: PushEmpty(string)
0x1356: Stack[-1] = "Neutral"
0x1357: Call 0xf06

0x1358: Pop(1)
0x1359: Push((int) 10368)
0x135a: @@ SetMessage(Stack[-1])
0x135b: Pop(1)
0x135c: @@ ClearReplies()
0x135d: Pop(0)
0x135e: Push((int) 10369)
0x135f: Push((int) 11434)
0x1360: Push((int) 11433)
0x1361: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1362: Pop(3)
0x1363: Return(); Pop(0)

0x1364: Push((int) 11421)
0x1365: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1366: IF (Stack[-1] == 0) GOTO 0x1376; Pop(1)

0x1367: PushEmpty(string)
0x1368: Stack[-1] = "Neutral"
0x1369: Call 0xf06

0x136a: Pop(1)
0x136b: Push((int) 10359)
0x136c: @@ SetMessage(Stack[-1])
0x136d: Pop(1)
0x136e: @@ ClearReplies()
0x136f: Pop(0)
0x1370: Push((int) 10360)
0x1371: Push((int) 11434)
0x1372: Push((int) 11422)
0x1373: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1374: Pop(3)
0x1375: Return(); Pop(0)

0x1376: Push((int) 11434)
0x1377: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1378: IF (Stack[-1] == 0) GOTO 0x138d; Pop(1)

0x1379: PushEmpty(string)
0x137a: Stack[-1] = "Neutral"
0x137b: Call 0xf06

0x137c: Pop(1)
0x137d: Push((int) 10370)
0x137e: @@ SetMessage(Stack[-1])
0x137f: Pop(1)
0x1380: @@ ClearReplies()
0x1381: Pop(0)
0x1382: Push((int) 10371)
0x1383: Push((int) -1)
0x1384: Push((int) 11436)
0x1385: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1386: Pop(3)
0x1387: Push((int) 10372)
0x1388: Push((int) -1)
0x1389: Push((int) 11437)
0x138a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138b: Pop(3)
0x138c: Return(); Pop(0)

0x138d: Push((int) 9880)
0x138e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138f: IF (Stack[-1] == 0) GOTO 0x139f; Pop(1)

0x1390: PushEmpty(string)
0x1391: Stack[-1] = "Neutral"
0x1392: Call 0xf06

0x1393: Pop(1)
0x1394: Push((int) 9009)
0x1395: @@ SetMessage(Stack[-1])
0x1396: Pop(1)
0x1397: @@ ClearReplies()
0x1398: Pop(0)
0x1399: Push((int) 9014)
0x139a: Push((int) 9887)
0x139b: Push((int) 9886)
0x139c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x139d: Pop(3)
0x139e: Return(); Pop(0)

0x139f: Push((int) 9887)
0x13a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a1: IF (Stack[-1] == 0) GOTO 0x13bb; Pop(1)

0x13a2: PushEmpty(string)
0x13a3: Stack[-1] = "Neutral"
0x13a4: Call 0xf06

0x13a5: Pop(1)
0x13a6: Push((int) 9015)
0x13a7: @@ SetMessage(Stack[-1])
0x13a8: Pop(1)
0x13a9: @@ ClearReplies()
0x13aa: Pop(0)
0x13ab: Push((int) 9016)
0x13ac: Push((int) 9890)
0x13ad: Push((int) 9888)
0x13ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13af: Pop(3)
0x13b0: Push((int) 9017)
0x13b1: Push((int) 9890)
0x13b2: Push((int) 9889)
0x13b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b4: Pop(3)
0x13b5: Push((int) 9022)
0x13b6: Push((int) 9890)
0x13b7: Push((int) 9894)
0x13b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b9: Pop(3)
0x13ba: Return(); Pop(0)

0x13bb: Push((int) 9890)
0x13bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13bd: IF (Stack[-1] == 0) GOTO 0x13cd; Pop(1)

0x13be: PushEmpty(string)
0x13bf: Stack[-1] = "Neutral"
0x13c0: Call 0xf06

0x13c1: Pop(1)
0x13c2: Push((int) 9018)
0x13c3: @@ SetMessage(Stack[-1])
0x13c4: Pop(1)
0x13c5: @@ ClearReplies()
0x13c6: Pop(0)
0x13c7: Push((int) 9019)
0x13c8: Push((int) -1)
0x13c9: Push((int) 9891)
0x13ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13cb: Pop(3)
0x13cc: Return(); Pop(0)

0x13cd: Push((int) 9877)
0x13ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13cf: IF (Stack[-1] == 0) GOTO 0x13ed; Pop(1)

0x13d0: PushEmpty(string)
0x13d1: Stack[-1] = "Neutral"
0x13d2: Call 0xf06

0x13d3: Pop(1)
0x13d4: Push((int) 9006)
0x13d5: @@ SetMessage(Stack[-1])
0x13d6: Pop(1)
0x13d7: @@ ClearReplies()
0x13d8: Pop(0)
0x13d9: PushEmpty(bool)
0x13da: Stack[-1] = (bool) 1
0x13db: PushEmpty(bool, object)
0x13dc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13dd: Call 0x2314

0x13de: Pop(1)
0x13df: IF (Stack[-1] == 0) GOTO 0x13e6; Pop(1)

0x13e0: PushEmpty(bool, object)
0x13e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13e2: Call 0x2320

0x13e3: Pop(1)
0x13e4: IF (Stack[-1] == 0) GOTO 0x13e6; Pop(1)

0x13e5: Stack[-1] = (bool) 0
0x13e6: IF (Stack[-1] == 0) GOTO 0x13ec; Pop(1)

0x13e7: Push((int) 9007)
0x13e8: Push((int) -1)
0x13e9: Push((int) 9878)
0x13ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13eb: Pop(3)
0x13ec: Return(); Pop(0)

0x13ed: Push((int) 9847)
0x13ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13ef: IF (Stack[-1] == 0) GOTO 0x1404; Pop(1)

0x13f0: PushEmpty(string)
0x13f1: Stack[-1] = "Neutral"
0x13f2: Call 0xf06

0x13f3: Pop(1)
0x13f4: Push((int) 8978)
0x13f5: @@ SetMessage(Stack[-1])
0x13f6: Pop(1)
0x13f7: @@ ClearReplies()
0x13f8: Pop(0)
0x13f9: Push((int) 8979)
0x13fa: Push((int) 9852)
0x13fb: Push((int) 9848)
0x13fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13fd: Pop(3)
0x13fe: Push((int) 8980)
0x13ff: Push((int) 9850)
0x1400: Push((int) 9849)
0x1401: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1402: Pop(3)
0x1403: Return(); Pop(0)

0x1404: Push((int) 9850)
0x1405: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1406: IF (Stack[-1] == 0) GOTO 0x1416; Pop(1)

0x1407: PushEmpty(string)
0x1408: Stack[-1] = "Neutral"
0x1409: Call 0xf06

0x140a: Pop(1)
0x140b: Push((int) 8981)
0x140c: @@ SetMessage(Stack[-1])
0x140d: Pop(1)
0x140e: @@ ClearReplies()
0x140f: Pop(0)
0x1410: Push((int) 8982)
0x1411: Push((int) -1)
0x1412: Push((int) 9851)
0x1413: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1414: Pop(3)
0x1415: Return(); Pop(0)

0x1416: Push((int) 9852)
0x1417: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1418: IF (Stack[-1] == 0) GOTO 0x142d; Pop(1)

0x1419: PushEmpty(string)
0x141a: Stack[-1] = "Neutral"
0x141b: Call 0xf06

0x141c: Pop(1)
0x141d: Push((int) 8983)
0x141e: @@ SetMessage(Stack[-1])
0x141f: Pop(1)
0x1420: @@ ClearReplies()
0x1421: Pop(0)
0x1422: Push((int) 8984)
0x1423: Push((int) 9854)
0x1424: Push((int) 9853)
0x1425: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1426: Pop(3)
0x1427: Push((int) 8987)
0x1428: Push((int) 9857)
0x1429: Push((int) 9856)
0x142a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142b: Pop(3)
0x142c: Return(); Pop(0)

0x142d: Push((int) 9857)
0x142e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x142f: IF (Stack[-1] == 0) GOTO 0x143f; Pop(1)

0x1430: PushEmpty(string)
0x1431: Stack[-1] = "Neutral"
0x1432: Call 0xf06

0x1433: Pop(1)
0x1434: Push((int) 8988)
0x1435: @@ SetMessage(Stack[-1])
0x1436: Pop(1)
0x1437: @@ ClearReplies()
0x1438: Pop(0)
0x1439: Push((int) 8989)
0x143a: Push((int) 9860)
0x143b: Push((int) 9858)
0x143c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x143d: Pop(3)
0x143e: Return(); Pop(0)

0x143f: Push((int) 9860)
0x1440: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1441: IF (Stack[-1] == 0) GOTO 0x1456; Pop(1)

0x1442: PushEmpty(string)
0x1443: Stack[-1] = "Neutral"
0x1444: Call 0xf06

0x1445: Pop(1)
0x1446: Push((int) 8991)
0x1447: @@ SetMessage(Stack[-1])
0x1448: Pop(1)
0x1449: @@ ClearReplies()
0x144a: Pop(0)
0x144b: Push((int) 8992)
0x144c: Push((int) 9863)
0x144d: Push((int) 9861)
0x144e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x144f: Pop(3)
0x1450: Push((int) 8993)
0x1451: Push((int) 9865)
0x1452: Push((int) 9862)
0x1453: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1454: Pop(3)
0x1455: Return(); Pop(0)

0x1456: Push((int) 9865)
0x1457: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1458: IF (Stack[-1] == 0) GOTO 0x1468; Pop(1)

0x1459: PushEmpty(string)
0x145a: Stack[-1] = "Neutral"
0x145b: Call 0xf06

0x145c: Pop(1)
0x145d: Push((int) 8996)
0x145e: @@ SetMessage(Stack[-1])
0x145f: Pop(1)
0x1460: @@ ClearReplies()
0x1461: Pop(0)
0x1462: Push((int) 8997)
0x1463: Push((int) 9859)
0x1464: Push((int) 9866)
0x1465: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1466: Pop(3)
0x1467: Return(); Pop(0)

0x1468: Push((int) 9863)
0x1469: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x146a: IF (Stack[-1] == 0) GOTO 0x147a; Pop(1)

0x146b: PushEmpty(string)
0x146c: Stack[-1] = "Neutral"
0x146d: Call 0xf06

0x146e: Pop(1)
0x146f: Push((int) 8994)
0x1470: @@ SetMessage(Stack[-1])
0x1471: Pop(1)
0x1472: @@ ClearReplies()
0x1473: Pop(0)
0x1474: Push((int) 8995)
0x1475: Push((int) 9859)
0x1476: Push((int) 9864)
0x1477: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1478: Pop(3)
0x1479: Return(); Pop(0)

0x147a: Push((int) 9854)
0x147b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x147c: IF (Stack[-1] == 0) GOTO 0x148c; Pop(1)

0x147d: PushEmpty(string)
0x147e: Stack[-1] = "Neutral"
0x147f: Call 0xf06

0x1480: Pop(1)
0x1481: Push((int) 8985)
0x1482: @@ SetMessage(Stack[-1])
0x1483: Pop(1)
0x1484: @@ ClearReplies()
0x1485: Pop(0)
0x1486: Push((int) 8986)
0x1487: Push((int) 9859)
0x1488: Push((int) 9855)
0x1489: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148a: Pop(3)
0x148b: Return(); Pop(0)

0x148c: Push((int) 9859)
0x148d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x148e: IF (Stack[-1] == 0) GOTO 0x149e; Pop(1)

0x148f: PushEmpty(string)
0x1490: Stack[-1] = "Neutral"
0x1491: Call 0xf06

0x1492: Pop(1)
0x1493: Push((int) 8990)
0x1494: @@ SetMessage(Stack[-1])
0x1495: Pop(1)
0x1496: @@ ClearReplies()
0x1497: Pop(0)
0x1498: Push((int) 8998)
0x1499: Push((int) 9870)
0x149a: Push((int) 9869)
0x149b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x149c: Pop(3)
0x149d: Return(); Pop(0)

0x149e: Push((int) 9870)
0x149f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a0: IF (Stack[-1] == 0) GOTO 0x14ba; Pop(1)

0x14a1: PushEmpty(string)
0x14a2: Stack[-1] = "Neutral"
0x14a3: Call 0xf06

0x14a4: Pop(1)
0x14a5: Push((int) 8999)
0x14a6: @@ SetMessage(Stack[-1])
0x14a7: Pop(1)
0x14a8: @@ ClearReplies()
0x14a9: Pop(0)
0x14aa: Push((int) 9000)
0x14ab: Push((int) 9873)
0x14ac: Push((int) 9871)
0x14ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14ae: Pop(3)
0x14af: Push((int) 9011)
0x14b0: Push((int) 9883)
0x14b1: Push((int) 9882)
0x14b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b3: Pop(3)
0x14b4: Push((int) 11150)
0x14b5: Push((int) -1)
0x14b6: Push((int) 12339)
0x14b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b8: Pop(3)
0x14b9: Return(); Pop(0)

0x14ba: Push((int) 9883)
0x14bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14bc: IF (Stack[-1] == 0) GOTO 0x14cc; Pop(1)

0x14bd: PushEmpty(string)
0x14be: Stack[-1] = "Neutral"
0x14bf: Call 0xf06

0x14c0: Pop(1)
0x14c1: Push((int) 9012)
0x14c2: @@ SetMessage(Stack[-1])
0x14c3: Pop(1)
0x14c4: @@ ClearReplies()
0x14c5: Pop(0)
0x14c6: Push((int) 9013)
0x14c7: Push((int) 9873)
0x14c8: Push((int) 9884)
0x14c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14ca: Pop(3)
0x14cb: Return(); Pop(0)

0x14cc: Push((int) 9873)
0x14cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14ce: IF (Stack[-1] == 0) GOTO 0x14e3; Pop(1)

0x14cf: PushEmpty(string)
0x14d0: Stack[-1] = "Neutral"
0x14d1: Call 0xf06

0x14d2: Pop(1)
0x14d3: Push((int) 9002)
0x14d4: @@ SetMessage(Stack[-1])
0x14d5: Pop(1)
0x14d6: @@ ClearReplies()
0x14d7: Pop(0)
0x14d8: Push((int) 9003)
0x14d9: Push((int) -1)
0x14da: Push((int) 9874)
0x14db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14dc: Pop(3)
0x14dd: Push((int) 9004)
0x14de: Push((int) -1)
0x14df: Push((int) 9875)
0x14e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e1: Pop(3)
0x14e2: Return(); Pop(0)

0x14e3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x14e4: PushEmpty(bool)
0x14e5: Call 0x1f0d

0x14e6: Pop(0)
0x14e7: IF (Stack[-1] == 0) GOTO 0x14eb; Pop(1)

0x14e8: @ lshStopAnimation()
0x14e9: Pop(0)
0x14ea: GOTO 0x14ed

0x14eb: @ StopAnimation()
0x14ec: Pop(0)
0x14ed: Return(); Pop(0)

0x14ee: GOTO 0xf17

0x14ef: Return(); Pop(0)

0x14f0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x14f1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x14f2: PushEmpty(bool, object)
0x14f3: Stack[-1] = Stack[-11]
0x14f4: Call 0x1e75

0x14f5: Pop(1)
0x14f6: Pop(1); Push((bool) Stack[-1] == 0)
0x14f7: IF (Stack[-1] == 0) GOTO 0x14fa; Pop(1)

0x14f8: Stack[-10] = (int) -2
0x14f9: Return(); Pop(8)

0x14fa: @ CreateDialog(Stack[-4])
0x14fb: Pop(0)
0x14fc: PushEmpty(int)
0x14fd: Call 0x1f09

0x14fe: Pop(0)
0x14ff: @@ SetNPCName(Stack[-1])
0x1500: Pop(1)
0x1501: PushEmpty(string)
0x1502: Call 0x1f0b

0x1503: Pop(0)
0x1504: @@ SetPhoto(Stack[-1])
0x1505: Pop(1)
0x1506: PushEmpty(int)
0x1507: Call 0x2575

0x1508: Pop(0)
0x1509: @@ SetPlayerName(Stack[-1])
0x150a: Pop(1)
0x150b: Stack[-2] = (int) -1
0x150c: @ IsOverrideActive(Stack[-3])
0x150d: Pop(0)
0x150e: Push(Stack[-3])
0x150f: IF (Stack[-1] == 0) GOTO 0x1512; Pop(1)

0x1510: Stack[-10] = (int) -2
0x1511: Return(); Pop(8)

0x1512: @ DoDialog(Stack[-4])
0x1513: Pop(0)
0x1514: PushEmpty(object, object)
0x1515: Stack[-2] = Stack[-11]
0x1516: Stack[-1] = Stack[-6]
0x1517: Push(-2, 4); TaskCall(13)
0x1518: Call 0x152f

0x1519: Pop(-2, 4); TaskReturn
0x151a: Pop(2)
0x151b: @@ IsDialogEnd(Stack[-1])
0x151c: Pop(0)
0x151d: Pop(0); Push((bool) Stack[-1] == 0)
0x151e: IF (Stack[-1] == 0) GOTO 0x1524; Pop(1)

0x151f: @ sync()
0x1520: Pop(0)
0x1521: @@ IsDialogEnd(Stack[-1])
0x1522: Pop(0)
0x1523: GOTO 0x151d

0x1524: PushEmpty(object)
0x1525: Stack[-1] = Stack[-10]
0x1526: Call 0x1ead

0x1527: Pop(1)
0x1528: @ StopDialog(Stack[-4])
0x1529: Pop(0)
0x152a: @@ GetReturnValue(Stack[-2])
0x152b: Pop(0)
0x152c: Stack[-10] = Stack[-2]
0x152d: Return(); Pop(8)

0x152e: Stack[-4] = 0
0x152f: PushEmpty()
0x1530: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1531: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1532: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1533: Push((int) 1)
0x1534: IF (Stack[-1] == 0) GOTO 0x15a2; Pop(1)

0x1535: PushEmpty(bool)
0x1536: Stack[-1] = (bool) 0
0x1537: PushEmpty(bool, object)
0x1538: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1539: Call 0x2380

0x153a: Pop(1)
0x153b: IF (Stack[-1] == 0) GOTO 0x1542; Pop(1)

0x153c: PushEmpty(bool, object)
0x153d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x153e: Call 0x238c

0x153f: Pop(1)
0x1540: IF (Stack[-1] == 0) GOTO 0x1542; Pop(1)

0x1541: Stack[-1] = (bool) 1
0x1542: IF (Stack[-1] == 0) GOTO 0x1557; Pop(1)

0x1543: PushEmpty(object, object)
0x1544: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1545: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1546: Call 0x220a

0x1547: Pop(2)
0x1548: PushEmpty(string)
0x1549: Stack[-1] = "Neutral"
0x154a: Call 0x15c0

0x154b: Pop(1)
0x154c: Push((int) 10811)
0x154d: @@ SetMessage(Stack[-1])
0x154e: Pop(1)
0x154f: @@ ClearReplies()
0x1550: Pop(0)
0x1551: Push((int) 10812)
0x1552: Push((int) 11147)
0x1553: Push((int) 11952)
0x1554: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1555: Pop(3)
0x1556: GOTO 0x15a2

0x1557: PushEmpty(string)
0x1558: Stack[-1] = "Neutral"
0x1559: Call 0x15c0

0x155a: Pop(1)
0x155b: Push((int) 10836)
0x155c: @@ SetMessage(Stack[-1])
0x155d: Pop(1)
0x155e: @@ ClearReplies()
0x155f: Pop(0)
0x1560: PushEmpty(bool)
0x1561: Stack[-1] = (bool) 0
0x1562: PushEmpty(bool, object)
0x1563: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1564: Call 0x2398

0x1565: Pop(1)
0x1566: IF (Stack[-1] == 0) GOTO 0x156d; Pop(1)

0x1567: PushEmpty(bool, object)
0x1568: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1569: Call 0x23a4

0x156a: Pop(1)
0x156b: IF (Stack[-1] == 0) GOTO 0x156d; Pop(1)

0x156c: Stack[-1] = (bool) 1
0x156d: IF (Stack[-1] == 0) GOTO 0x1573; Pop(1)

0x156e: Push((int) 10839)
0x156f: Push((int) 11148)
0x1570: Push((int) 11983)
0x1571: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1572: Pop(3)
0x1573: PushEmpty(bool, object)
0x1574: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1575: Call 0x2286

0x1576: Pop(1)
0x1577: IF (Stack[-1] == 0) GOTO 0x157d; Pop(1)

0x1578: Push((int) 10838)
0x1579: Push((int) 10519)
0x157a: Push((int) 11982)
0x157b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x157c: Pop(3)
0x157d: PushEmpty(bool, object)
0x157e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x157f: Call 0x23b0

0x1580: Pop(1)
0x1581: IF (Stack[-1] == 0) GOTO 0x1587; Pop(1)

0x1582: Push((int) 11508)
0x1583: Push((int) 12709)
0x1584: Push((int) 12708)
0x1585: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1586: Pop(3)
0x1587: PushEmpty(bool)
0x1588: Stack[-1] = (bool) 0
0x1589: PushEmpty(bool, object)
0x158a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x158b: Call 0x23ce

0x158c: Pop(1)
0x158d: IF (Stack[-1] == 0) GOTO 0x1594; Pop(1)

0x158e: PushEmpty(bool, object)
0x158f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1590: Call 0x23ea

0x1591: Pop(1)
0x1592: IF (Stack[-1] == 0) GOTO 0x1594; Pop(1)

0x1593: Stack[-1] = (bool) 1
0x1594: IF (Stack[-1] == 0) GOTO 0x159a; Pop(1)

0x1595: Push((int) 10837)
0x1596: Push((int) 10553)
0x1597: Push((int) 11981)
0x1598: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1599: Pop(3)
0x159a: Push((int) 11480)
0x159b: Push((int) -1)
0x159c: Push((int) 12686)
0x159d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x159e: Pop(3)
0x159f: GOTO 0x15a2

0x15a0: Return(); Pop(0)

0x15a1: GOTO 0x1533

0x15a2: PushEmpty(bool)
0x15a3: Call 0x1f0d

0x15a4: Pop(0)
0x15a5: IF (Stack[-1] == 0) GOTO 0x15b1; Pop(1)

0x15a6: @ lshWaitForAnimEnd()
0x15a7: Pop(0)
0x15a8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x15a9: IF (Stack[-1] == 0) GOTO 0x15ab; Pop(1)

0x15aa: GOTO 0x15b0

0x15ab: PushEmpty(string)
0x15ac: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x15ad: Call 0x1eb1

0x15ae: Pop(1)
0x15af: GOTO 0x15a6

0x15b0: GOTO 0x15bf

0x15b1: Push("all")
0x15b2: Push("idle")
0x15b3: @ PlayAnimation(Stack[-2], Stack[-1])
0x15b4: Pop(2)
0x15b5: @ WaitForAnimEnd()
0x15b6: Pop(0)
0x15b7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x15b8: IF (Stack[-1] == 0) GOTO 0x15ba; Pop(1)

0x15b9: GOTO 0x15bf

0x15ba: Push("all")
0x15bb: Push("idle")
0x15bc: @ PlayAnimation(Stack[-2], Stack[-1])
0x15bd: Pop(2)
0x15be: GOTO 0x15b5

0x15bf: Return(); Pop(0)

0x15c0: PushEmpty()
0x15c1: PushEmpty(bool)
0x15c2: Call 0x1f0d

0x15c3: Pop(0)
0x15c4: Pop(1); Push((bool) Stack[-1] == 0)
0x15c5: IF (Stack[-1] == 0) GOTO 0x15c7; Pop(1)

0x15c6: Return(); Pop(0)

0x15c7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x15c8: IF (Stack[-1] == 0) GOTO 0x15ca; Pop(1)

0x15c9: Return(); Pop(0)

0x15ca: PushEmpty(string)
0x15cb: Stack[-1] = Stack[-2]
0x15cc: Call 0x1eb1

0x15cd: Pop(1)
0x15ce: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x15cf: Return(); Pop(0)

0x15d0: PushEmpty()
0x15d1: Push((int) 1)
0x15d2: IF (Stack[-1] == 0) GOTO 0x1a72; Pop(1)

0x15d3: PushEmpty()
0x15d4: Call 0x1ec3

0x15d5: Pop(0)
0x15d6: Push((int) 12081)
0x15d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15d8: IF (Stack[-1] == 0) GOTO 0x15e8; Pop(1)

0x15d9: PushEmpty(object, object)
0x15da: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15dc: Call 0x200f

0x15dd: Pop(2)
0x15de: PushEmpty(object, object)
0x15df: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15e1: Call 0x203b

0x15e2: Pop(2)
0x15e3: PushEmpty(object, object)
0x15e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15e6: Call 0x2041

0x15e7: Pop(2)
0x15e8: Push((int) 12082)
0x15e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15ea: IF (Stack[-1] == 0) GOTO 0x15fa; Pop(1)

0x15eb: PushEmpty(object, object)
0x15ec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15ed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15ee: Call 0x200f

0x15ef: Pop(2)
0x15f0: PushEmpty(object, object)
0x15f1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15f3: Call 0x203b

0x15f4: Pop(2)
0x15f5: PushEmpty(object, object)
0x15f6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15f7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15f8: Call 0x2041

0x15f9: Pop(2)
0x15fa: Push((int) 12079)
0x15fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15fc: IF (Stack[-1] == 0) GOTO 0x160c; Pop(1)

0x15fd: PushEmpty(object, object)
0x15fe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15ff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1600: Call 0x200f

0x1601: Pop(2)
0x1602: PushEmpty(object, object)
0x1603: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1604: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1605: Call 0x203b

0x1606: Pop(2)
0x1607: PushEmpty(object, object)
0x1608: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1609: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x160a: Call 0x2041

0x160b: Pop(2)
0x160c: Push((int) 11191)
0x160d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x160e: IF (Stack[-1] == 0) GOTO 0x161e; Pop(1)

0x160f: PushEmpty(object, object)
0x1610: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1611: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1612: Call 0x200f

0x1613: Pop(2)
0x1614: PushEmpty(object, object)
0x1615: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1616: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1617: Call 0x203b

0x1618: Pop(2)
0x1619: PushEmpty(object, object)
0x161a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x161b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x161c: Call 0x2041

0x161d: Pop(2)
0x161e: Push((int) 12096)
0x161f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1620: IF (Stack[-1] == 0) GOTO 0x162b; Pop(1)

0x1621: PushEmpty(object, object)
0x1622: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1623: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1624: Call 0x2051

0x1625: Pop(2)
0x1626: PushEmpty(object, object)
0x1627: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1628: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1629: Call 0x2057

0x162a: Pop(2)
0x162b: Push((int) 12097)
0x162c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x162d: IF (Stack[-1] == 0) GOTO 0x1638; Pop(1)

0x162e: PushEmpty(object, object)
0x162f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1630: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1631: Call 0x2051

0x1632: Pop(2)
0x1633: PushEmpty(object, object)
0x1634: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1635: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1636: Call 0x218a

0x1637: Pop(2)
0x1638: Push((int) 12105)
0x1639: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x163a: IF (Stack[-1] == 0) GOTO 0x1645; Pop(1)

0x163b: PushEmpty(object, object)
0x163c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x163d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x163e: Call 0x208a

0x163f: Pop(2)
0x1640: PushEmpty(object, object)
0x1641: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1642: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1643: Call 0x2090

0x1644: Pop(2)
0x1645: Push((int) 10563)
0x1646: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1647: IF (Stack[-1] == 0) GOTO 0x1652; Pop(1)

0x1648: PushEmpty(object, object)
0x1649: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x164a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x164b: Call 0x208a

0x164c: Pop(2)
0x164d: PushEmpty(object, object)
0x164e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x164f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1650: Call 0x2090

0x1651: Pop(2)
0x1652: Push((int) 12103)
0x1653: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1654: IF (Stack[-1] == 0) GOTO 0x165f; Pop(1)

0x1655: PushEmpty(object, object)
0x1656: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1657: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1658: Call 0x208a

0x1659: Pop(2)
0x165a: PushEmpty(object, object)
0x165b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x165c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x165d: Call 0x2090

0x165e: Pop(2)
0x165f: Push((int) 10572)
0x1660: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1661: IF (Stack[-1] == 0) GOTO 0x166c; Pop(1)

0x1662: PushEmpty(object, object)
0x1663: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1664: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1665: Call 0x208a

0x1666: Pop(2)
0x1667: PushEmpty(object, object)
0x1668: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1669: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x166a: Call 0x2090

0x166b: Pop(2)
0x166c: Push((int) 10573)
0x166d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x166e: IF (Stack[-1] == 0) GOTO 0x1679; Pop(1)

0x166f: PushEmpty(object, object)
0x1670: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1671: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1672: Call 0x208a

0x1673: Pop(2)
0x1674: PushEmpty(object, object)
0x1675: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1676: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1677: Call 0x2090

0x1678: Pop(2)
0x1679: Push((int) 11951)
0x167a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167b: IF (Stack[-1] == 0) GOTO 0x16e7; Pop(1)

0x167c: PushEmpty(bool)
0x167d: Stack[-1] = (bool) 0
0x167e: PushEmpty(bool, object)
0x167f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1680: Call 0x2380

0x1681: Pop(1)
0x1682: IF (Stack[-1] == 0) GOTO 0x1689; Pop(1)

0x1683: PushEmpty(bool, object)
0x1684: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1685: Call 0x238c

0x1686: Pop(1)
0x1687: IF (Stack[-1] == 0) GOTO 0x1689; Pop(1)

0x1688: Stack[-1] = (bool) 1
0x1689: IF (Stack[-1] == 0) GOTO 0x169e; Pop(1)

0x168a: PushEmpty(object, object)
0x168b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x168c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x168d: Call 0x220a

0x168e: Pop(2)
0x168f: PushEmpty(string)
0x1690: Stack[-1] = "Neutral"
0x1691: Call 0x15c0

0x1692: Pop(1)
0x1693: Push((int) 10811)
0x1694: @@ SetMessage(Stack[-1])
0x1695: Pop(1)
0x1696: @@ ClearReplies()
0x1697: Pop(0)
0x1698: Push((int) 10812)
0x1699: Push((int) 11147)
0x169a: Push((int) 11952)
0x169b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x169c: Pop(3)
0x169d: Return(); Pop(0)

0x169e: PushEmpty(string)
0x169f: Stack[-1] = "Neutral"
0x16a0: Call 0x15c0

0x16a1: Pop(1)
0x16a2: Push((int) 10836)
0x16a3: @@ SetMessage(Stack[-1])
0x16a4: Pop(1)
0x16a5: @@ ClearReplies()
0x16a6: Pop(0)
0x16a7: PushEmpty(bool)
0x16a8: Stack[-1] = (bool) 0
0x16a9: PushEmpty(bool, object)
0x16aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16ab: Call 0x2398

0x16ac: Pop(1)
0x16ad: IF (Stack[-1] == 0) GOTO 0x16b4; Pop(1)

0x16ae: PushEmpty(bool, object)
0x16af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16b0: Call 0x23a4

0x16b1: Pop(1)
0x16b2: IF (Stack[-1] == 0) GOTO 0x16b4; Pop(1)

0x16b3: Stack[-1] = (bool) 1
0x16b4: IF (Stack[-1] == 0) GOTO 0x16ba; Pop(1)

0x16b5: Push((int) 10839)
0x16b6: Push((int) 11148)
0x16b7: Push((int) 11983)
0x16b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b9: Pop(3)
0x16ba: PushEmpty(bool, object)
0x16bb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16bc: Call 0x2286

0x16bd: Pop(1)
0x16be: IF (Stack[-1] == 0) GOTO 0x16c4; Pop(1)

0x16bf: Push((int) 10838)
0x16c0: Push((int) 10519)
0x16c1: Push((int) 11982)
0x16c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c3: Pop(3)
0x16c4: PushEmpty(bool, object)
0x16c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16c6: Call 0x23b0

0x16c7: Pop(1)
0x16c8: IF (Stack[-1] == 0) GOTO 0x16ce; Pop(1)

0x16c9: Push((int) 11508)
0x16ca: Push((int) 12709)
0x16cb: Push((int) 12708)
0x16cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16cd: Pop(3)
0x16ce: PushEmpty(bool)
0x16cf: Stack[-1] = (bool) 0
0x16d0: PushEmpty(bool, object)
0x16d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16d2: Call 0x23ce

0x16d3: Pop(1)
0x16d4: IF (Stack[-1] == 0) GOTO 0x16db; Pop(1)

0x16d5: PushEmpty(bool, object)
0x16d6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16d7: Call 0x23ea

0x16d8: Pop(1)
0x16d9: IF (Stack[-1] == 0) GOTO 0x16db; Pop(1)

0x16da: Stack[-1] = (bool) 1
0x16db: IF (Stack[-1] == 0) GOTO 0x16e1; Pop(1)

0x16dc: Push((int) 10837)
0x16dd: Push((int) 10553)
0x16de: Push((int) 11981)
0x16df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16e0: Pop(3)
0x16e1: Push((int) 11480)
0x16e2: Push((int) -1)
0x16e3: Push((int) 12686)
0x16e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16e5: Pop(3)
0x16e6: Return(); Pop(0)

0x16e7: Push((int) 10553)
0x16e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16e9: IF (Stack[-1] == 0) GOTO 0x1703; Pop(1)

0x16ea: PushEmpty(string)
0x16eb: Stack[-1] = "Neutral"
0x16ec: Call 0x15c0

0x16ed: Pop(1)
0x16ee: Push((int) 9594)
0x16ef: @@ SetMessage(Stack[-1])
0x16f0: Pop(1)
0x16f1: @@ ClearReplies()
0x16f2: Pop(0)
0x16f3: Push((int) 9595)
0x16f4: Push((int) 10555)
0x16f5: Push((int) 10554)
0x16f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f7: Pop(3)
0x16f8: Push((int) 9612)
0x16f9: Push((int) 10555)
0x16fa: Push((int) 10574)
0x16fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16fc: Pop(3)
0x16fd: Push((int) 9613)
0x16fe: Push((int) 10555)
0x16ff: Push((int) 10576)
0x1700: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1701: Pop(3)
0x1702: Return(); Pop(0)

0x1703: Push((int) 10555)
0x1704: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1705: IF (Stack[-1] == 0) GOTO 0x171a; Pop(1)

0x1706: PushEmpty(string)
0x1707: Stack[-1] = "Neutral"
0x1708: Call 0x15c0

0x1709: Pop(1)
0x170a: Push((int) 9596)
0x170b: @@ SetMessage(Stack[-1])
0x170c: Pop(1)
0x170d: @@ ClearReplies()
0x170e: Pop(0)
0x170f: Push((int) 9597)
0x1710: Push((int) 10557)
0x1711: Push((int) 10556)
0x1712: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1713: Pop(3)
0x1714: Push((int) 9608)
0x1715: Push((int) 10571)
0x1716: Push((int) 10570)
0x1717: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1718: Pop(3)
0x1719: Return(); Pop(0)

0x171a: Push((int) 10571)
0x171b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x171c: IF (Stack[-1] == 0) GOTO 0x1731; Pop(1)

0x171d: PushEmpty(string)
0x171e: Stack[-1] = "Neutral"
0x171f: Call 0x15c0

0x1720: Pop(1)
0x1721: Push((int) 9609)
0x1722: @@ SetMessage(Stack[-1])
0x1723: Pop(1)
0x1724: @@ ClearReplies()
0x1725: Pop(0)
0x1726: Push((int) 9610)
0x1727: Push((int) -1)
0x1728: Push((int) 10572)
0x1729: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172a: Pop(3)
0x172b: Push((int) 9611)
0x172c: Push((int) -1)
0x172d: Push((int) 10573)
0x172e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172f: Pop(3)
0x1730: Return(); Pop(0)

0x1731: Push((int) 10557)
0x1732: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1733: IF (Stack[-1] == 0) GOTO 0x1748; Pop(1)

0x1734: PushEmpty(string)
0x1735: Stack[-1] = "Neutral"
0x1736: Call 0x15c0

0x1737: Pop(1)
0x1738: Push((int) 9598)
0x1739: @@ SetMessage(Stack[-1])
0x173a: Pop(1)
0x173b: @@ ClearReplies()
0x173c: Pop(0)
0x173d: Push((int) 9599)
0x173e: Push((int) 10559)
0x173f: Push((int) 10558)
0x1740: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1741: Pop(3)
0x1742: Push((int) 9607)
0x1743: Push((int) 10559)
0x1744: Push((int) 10568)
0x1745: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1746: Pop(3)
0x1747: Return(); Pop(0)

0x1748: Push((int) 10559)
0x1749: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x174a: IF (Stack[-1] == 0) GOTO 0x1764; Pop(1)

0x174b: PushEmpty(string)
0x174c: Stack[-1] = "Neutral"
0x174d: Call 0x15c0

0x174e: Pop(1)
0x174f: Push((int) 9600)
0x1750: @@ SetMessage(Stack[-1])
0x1751: Pop(1)
0x1752: @@ ClearReplies()
0x1753: Pop(0)
0x1754: Push((int) 9601)
0x1755: Push((int) 10561)
0x1756: Push((int) 10560)
0x1757: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1758: Pop(3)
0x1759: Push((int) 9605)
0x175a: Push((int) 10561)
0x175b: Push((int) 10564)
0x175c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175d: Pop(3)
0x175e: Push((int) 9606)
0x175f: Push((int) 10561)
0x1760: Push((int) 10566)
0x1761: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1762: Pop(3)
0x1763: Return(); Pop(0)

0x1764: Push((int) 10561)
0x1765: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1766: IF (Stack[-1] == 0) GOTO 0x1780; Pop(1)

0x1767: PushEmpty(string)
0x1768: Stack[-1] = "Neutral"
0x1769: Call 0x15c0

0x176a: Pop(1)
0x176b: Push((int) 9602)
0x176c: @@ SetMessage(Stack[-1])
0x176d: Pop(1)
0x176e: @@ ClearReplies()
0x176f: Pop(0)
0x1770: Push((int) 9603)
0x1771: Push((int) 12104)
0x1772: Push((int) 10562)
0x1773: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1774: Pop(3)
0x1775: Push((int) 9604)
0x1776: Push((int) -1)
0x1777: Push((int) 10563)
0x1778: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1779: Pop(3)
0x177a: Push((int) 10944)
0x177b: Push((int) -1)
0x177c: Push((int) 12103)
0x177d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x177e: Pop(3)
0x177f: Return(); Pop(0)

0x1780: Push((int) 12104)
0x1781: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1782: IF (Stack[-1] == 0) GOTO 0x1792; Pop(1)

0x1783: PushEmpty(string)
0x1784: Stack[-1] = "Neutral"
0x1785: Call 0x15c0

0x1786: Pop(1)
0x1787: Push((int) 10945)
0x1788: @@ SetMessage(Stack[-1])
0x1789: Pop(1)
0x178a: @@ ClearReplies()
0x178b: Pop(0)
0x178c: Push((int) 10946)
0x178d: Push((int) -1)
0x178e: Push((int) 12105)
0x178f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1790: Pop(3)
0x1791: Return(); Pop(0)

0x1792: Push((int) 12709)
0x1793: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1794: IF (Stack[-1] == 0) GOTO 0x17a9; Pop(1)

0x1795: PushEmpty(string)
0x1796: Stack[-1] = "Neutral"
0x1797: Call 0x15c0

0x1798: Pop(1)
0x1799: Push((int) 11509)
0x179a: @@ SetMessage(Stack[-1])
0x179b: Pop(1)
0x179c: @@ ClearReplies()
0x179d: Pop(0)
0x179e: Push((int) 11510)
0x179f: Push((int) 12711)
0x17a0: Push((int) 12710)
0x17a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a2: Pop(3)
0x17a3: Push((int) 11512)
0x17a4: Push((int) 12713)
0x17a5: Push((int) 12712)
0x17a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a7: Pop(3)
0x17a8: Return(); Pop(0)

0x17a9: Push((int) 12713)
0x17aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17ab: IF (Stack[-1] == 0) GOTO 0x17bb; Pop(1)

0x17ac: PushEmpty(string)
0x17ad: Stack[-1] = "Neutral"
0x17ae: Call 0x15c0

0x17af: Pop(1)
0x17b0: Push((int) 11513)
0x17b1: @@ SetMessage(Stack[-1])
0x17b2: Pop(1)
0x17b3: @@ ClearReplies()
0x17b4: Pop(0)
0x17b5: Push((int) 11514)
0x17b6: Push((int) 12715)
0x17b7: Push((int) 12714)
0x17b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17b9: Pop(3)
0x17ba: Return(); Pop(0)

0x17bb: Push((int) 12715)
0x17bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17bd: IF (Stack[-1] == 0) GOTO 0x17cd; Pop(1)

0x17be: PushEmpty(string)
0x17bf: Stack[-1] = "Neutral"
0x17c0: Call 0x15c0

0x17c1: Pop(1)
0x17c2: Push((int) 11515)
0x17c3: @@ SetMessage(Stack[-1])
0x17c4: Pop(1)
0x17c5: @@ ClearReplies()
0x17c6: Pop(0)
0x17c7: Push((int) 11516)
0x17c8: Push((int) -1)
0x17c9: Push((int) 12716)
0x17ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17cb: Pop(3)
0x17cc: Return(); Pop(0)

0x17cd: Push((int) 12711)
0x17ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17cf: IF (Stack[-1] == 0) GOTO 0x17df; Pop(1)

0x17d0: PushEmpty(string)
0x17d1: Stack[-1] = "Neutral"
0x17d2: Call 0x15c0

0x17d3: Pop(1)
0x17d4: Push((int) 11511)
0x17d5: @@ SetMessage(Stack[-1])
0x17d6: Pop(1)
0x17d7: @@ ClearReplies()
0x17d8: Pop(0)
0x17d9: Push((int) 11517)
0x17da: Push((int) 12718)
0x17db: Push((int) 12717)
0x17dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17dd: Pop(3)
0x17de: Return(); Pop(0)

0x17df: Push((int) 12718)
0x17e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17e1: IF (Stack[-1] == 0) GOTO 0x17f1; Pop(1)

0x17e2: PushEmpty(string)
0x17e3: Stack[-1] = "Neutral"
0x17e4: Call 0x15c0

0x17e5: Pop(1)
0x17e6: Push((int) 11518)
0x17e7: @@ SetMessage(Stack[-1])
0x17e8: Pop(1)
0x17e9: @@ ClearReplies()
0x17ea: Pop(0)
0x17eb: Push((int) 11519)
0x17ec: Push((int) -1)
0x17ed: Push((int) 12719)
0x17ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17ef: Pop(3)
0x17f0: Return(); Pop(0)

0x17f1: Push((int) 10519)
0x17f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17f3: IF (Stack[-1] == 0) GOTO 0x180d; Pop(1)

0x17f4: PushEmpty(string)
0x17f5: Stack[-1] = "Neutral"
0x17f6: Call 0x15c0

0x17f7: Pop(1)
0x17f8: Push((int) 9567)
0x17f9: @@ SetMessage(Stack[-1])
0x17fa: Pop(1)
0x17fb: @@ ClearReplies()
0x17fc: Pop(0)
0x17fd: Push((int) 9568)
0x17fe: Push((int) 10521)
0x17ff: Push((int) 10520)
0x1800: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1801: Pop(3)
0x1802: Push((int) 9589)
0x1803: Push((int) 10521)
0x1804: Push((int) 10545)
0x1805: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1806: Pop(3)
0x1807: Push((int) 9590)
0x1808: Push((int) 10548)
0x1809: Push((int) 10547)
0x180a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x180b: Pop(3)
0x180c: Return(); Pop(0)

0x180d: Push((int) 10548)
0x180e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x180f: IF (Stack[-1] == 0) GOTO 0x1824; Pop(1)

0x1810: PushEmpty(string)
0x1811: Stack[-1] = "Neutral"
0x1812: Call 0x15c0

0x1813: Pop(1)
0x1814: Push((int) 9591)
0x1815: @@ SetMessage(Stack[-1])
0x1816: Pop(1)
0x1817: @@ ClearReplies()
0x1818: Pop(0)
0x1819: Push((int) 9592)
0x181a: Push((int) 10521)
0x181b: Push((int) 10549)
0x181c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x181d: Pop(3)
0x181e: Push((int) 9593)
0x181f: Push((int) 10521)
0x1820: Push((int) 10551)
0x1821: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1822: Pop(3)
0x1823: Return(); Pop(0)

0x1824: Push((int) 10521)
0x1825: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1826: IF (Stack[-1] == 0) GOTO 0x1840; Pop(1)

0x1827: PushEmpty(string)
0x1828: Stack[-1] = "Neutral"
0x1829: Call 0x15c0

0x182a: Pop(1)
0x182b: Push((int) 9569)
0x182c: @@ SetMessage(Stack[-1])
0x182d: Pop(1)
0x182e: @@ ClearReplies()
0x182f: Pop(0)
0x1830: Push((int) 9572)
0x1831: Push((int) 10525)
0x1832: Push((int) 10524)
0x1833: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1834: Pop(3)
0x1835: Push((int) 9570)
0x1836: Push((int) -1)
0x1837: Push((int) 10522)
0x1838: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1839: Pop(3)
0x183a: Push((int) 9571)
0x183b: Push((int) -1)
0x183c: Push((int) 10523)
0x183d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183e: Pop(3)
0x183f: Return(); Pop(0)

0x1840: Push((int) 10525)
0x1841: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1842: IF (Stack[-1] == 0) GOTO 0x1857; Pop(1)

0x1843: PushEmpty(string)
0x1844: Stack[-1] = "Neutral"
0x1845: Call 0x15c0

0x1846: Pop(1)
0x1847: Push((int) 9573)
0x1848: @@ SetMessage(Stack[-1])
0x1849: Pop(1)
0x184a: @@ ClearReplies()
0x184b: Pop(0)
0x184c: Push((int) 9574)
0x184d: Push((int) 10527)
0x184e: Push((int) 10526)
0x184f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1850: Pop(3)
0x1851: Push((int) 9585)
0x1852: Push((int) 10540)
0x1853: Push((int) 10539)
0x1854: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1855: Pop(3)
0x1856: Return(); Pop(0)

0x1857: Push((int) 10540)
0x1858: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1859: IF (Stack[-1] == 0) GOTO 0x186e; Pop(1)

0x185a: PushEmpty(string)
0x185b: Stack[-1] = "Neutral"
0x185c: Call 0x15c0

0x185d: Pop(1)
0x185e: Push((int) 9586)
0x185f: @@ SetMessage(Stack[-1])
0x1860: Pop(1)
0x1861: @@ ClearReplies()
0x1862: Pop(0)
0x1863: Push((int) 9587)
0x1864: Push((int) 10527)
0x1865: Push((int) 10541)
0x1866: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1867: Pop(3)
0x1868: Push((int) 9588)
0x1869: Push((int) 10527)
0x186a: Push((int) 10543)
0x186b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186c: Pop(3)
0x186d: Return(); Pop(0)

0x186e: Push((int) 10527)
0x186f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1870: IF (Stack[-1] == 0) GOTO 0x1880; Pop(1)

0x1871: PushEmpty(string)
0x1872: Stack[-1] = "Neutral"
0x1873: Call 0x15c0

0x1874: Pop(1)
0x1875: Push((int) 9575)
0x1876: @@ SetMessage(Stack[-1])
0x1877: Pop(1)
0x1878: @@ ClearReplies()
0x1879: Pop(0)
0x187a: Push((int) 9577)
0x187b: Push((int) 10530)
0x187c: Push((int) 10529)
0x187d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x187e: Pop(3)
0x187f: Return(); Pop(0)

0x1880: Push((int) 10530)
0x1881: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1882: IF (Stack[-1] == 0) GOTO 0x189c; Pop(1)

0x1883: PushEmpty(string)
0x1884: Stack[-1] = "Neutral"
0x1885: Call 0x15c0

0x1886: Pop(1)
0x1887: Push((int) 9578)
0x1888: @@ SetMessage(Stack[-1])
0x1889: Pop(1)
0x188a: @@ ClearReplies()
0x188b: Pop(0)
0x188c: Push((int) 9579)
0x188d: Push((int) 10532)
0x188e: Push((int) 10531)
0x188f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1890: Pop(3)
0x1891: Push((int) 9583)
0x1892: Push((int) 10532)
0x1893: Push((int) 10535)
0x1894: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1895: Pop(3)
0x1896: Push((int) 9584)
0x1897: Push((int) 10532)
0x1898: Push((int) 10537)
0x1899: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x189a: Pop(3)
0x189b: Return(); Pop(0)

0x189c: Push((int) 10532)
0x189d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x189e: IF (Stack[-1] == 0) GOTO 0x18b3; Pop(1)

0x189f: PushEmpty(string)
0x18a0: Stack[-1] = "Neutral"
0x18a1: Call 0x15c0

0x18a2: Pop(1)
0x18a3: Push((int) 9580)
0x18a4: @@ SetMessage(Stack[-1])
0x18a5: Pop(1)
0x18a6: @@ ClearReplies()
0x18a7: Pop(0)
0x18a8: Push((int) 9581)
0x18a9: Push((int) -1)
0x18aa: Push((int) 10533)
0x18ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18ac: Pop(3)
0x18ad: Push((int) 9582)
0x18ae: Push((int) -1)
0x18af: Push((int) 10534)
0x18b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b1: Pop(3)
0x18b2: Return(); Pop(0)

0x18b3: Push((int) 11148)
0x18b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18b5: IF (Stack[-1] == 0) GOTO 0x18c5; Pop(1)

0x18b6: PushEmpty(string)
0x18b7: Stack[-1] = "Neutral"
0x18b8: Call 0x15c0

0x18b9: Pop(1)
0x18ba: Push((int) 10112)
0x18bb: @@ SetMessage(Stack[-1])
0x18bc: Pop(1)
0x18bd: @@ ClearReplies()
0x18be: Pop(0)
0x18bf: Push((int) 10115)
0x18c0: Push((int) 11154)
0x18c1: Push((int) 11151)
0x18c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18c3: Pop(3)
0x18c4: Return(); Pop(0)

0x18c5: Push((int) 11154)
0x18c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18c7: IF (Stack[-1] == 0) GOTO 0x18e1; Pop(1)

0x18c8: PushEmpty(string)
0x18c9: Stack[-1] = "Neutral"
0x18ca: Call 0x15c0

0x18cb: Pop(1)
0x18cc: Push((int) 10118)
0x18cd: @@ SetMessage(Stack[-1])
0x18ce: Pop(1)
0x18cf: @@ ClearReplies()
0x18d0: Pop(0)
0x18d1: Push((int) 10119)
0x18d2: Push((int) 11156)
0x18d3: Push((int) 11155)
0x18d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18d5: Pop(3)
0x18d6: Push((int) 10933)
0x18d7: Push((int) 12088)
0x18d8: Push((int) 12087)
0x18d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18da: Pop(3)
0x18db: Push((int) 10124)
0x18dc: Push((int) 11161)
0x18dd: Push((int) 11160)
0x18de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18df: Pop(3)
0x18e0: Return(); Pop(0)

0x18e1: Push((int) 11161)
0x18e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18e3: IF (Stack[-1] == 0) GOTO 0x18f8; Pop(1)

0x18e4: PushEmpty(string)
0x18e5: Stack[-1] = "Neutral"
0x18e6: Call 0x15c0

0x18e7: Pop(1)
0x18e8: Push((int) 10125)
0x18e9: @@ SetMessage(Stack[-1])
0x18ea: Pop(1)
0x18eb: @@ ClearReplies()
0x18ec: Pop(0)
0x18ed: Push((int) 10126)
0x18ee: Push((int) 11984)
0x18ef: Push((int) 11162)
0x18f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f1: Pop(3)
0x18f2: Push((int) 10127)
0x18f3: Push((int) 11984)
0x18f4: Push((int) 11163)
0x18f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f6: Pop(3)
0x18f7: Return(); Pop(0)

0x18f8: Push((int) 12088)
0x18f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18fa: IF (Stack[-1] == 0) GOTO 0x190a; Pop(1)

0x18fb: PushEmpty(string)
0x18fc: Stack[-1] = "Neutral"
0x18fd: Call 0x15c0

0x18fe: Pop(1)
0x18ff: Push((int) 10934)
0x1900: @@ SetMessage(Stack[-1])
0x1901: Pop(1)
0x1902: @@ ClearReplies()
0x1903: Pop(0)
0x1904: Push((int) 10935)
0x1905: Push((int) 12090)
0x1906: Push((int) 12089)
0x1907: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1908: Pop(3)
0x1909: Return(); Pop(0)

0x190a: Push((int) 12090)
0x190b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x190c: IF (Stack[-1] == 0) GOTO 0x1921; Pop(1)

0x190d: PushEmpty(string)
0x190e: Stack[-1] = "Neutral"
0x190f: Call 0x15c0

0x1910: Pop(1)
0x1911: Push((int) 10936)
0x1912: @@ SetMessage(Stack[-1])
0x1913: Pop(1)
0x1914: @@ ClearReplies()
0x1915: Pop(0)
0x1916: Push((int) 10939)
0x1917: Push((int) 11156)
0x1918: Push((int) 12093)
0x1919: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191a: Pop(3)
0x191b: Push((int) 10937)
0x191c: Push((int) 12092)
0x191d: Push((int) 12091)
0x191e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191f: Pop(3)
0x1920: Return(); Pop(0)

0x1921: Push((int) 12092)
0x1922: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1923: IF (Stack[-1] == 0) GOTO 0x1933; Pop(1)

0x1924: PushEmpty(string)
0x1925: Stack[-1] = "Neutral"
0x1926: Call 0x15c0

0x1927: Pop(1)
0x1928: Push((int) 10938)
0x1929: @@ SetMessage(Stack[-1])
0x192a: Pop(1)
0x192b: @@ ClearReplies()
0x192c: Pop(0)
0x192d: Push((int) 10943)
0x192e: Push((int) 11156)
0x192f: Push((int) 12101)
0x1930: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1931: Pop(3)
0x1932: Return(); Pop(0)

0x1933: Push((int) 11156)
0x1934: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1935: IF (Stack[-1] == 0) GOTO 0x194a; Pop(1)

0x1936: PushEmpty(string)
0x1937: Stack[-1] = "Neutral"
0x1938: Call 0x15c0

0x1939: Pop(1)
0x193a: Push((int) 10120)
0x193b: @@ SetMessage(Stack[-1])
0x193c: Pop(1)
0x193d: @@ ClearReplies()
0x193e: Pop(0)
0x193f: Push((int) 10121)
0x1940: Push((int) 11984)
0x1941: Push((int) 11157)
0x1942: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1943: Pop(3)
0x1944: Push((int) 10123)
0x1945: Push((int) 12094)
0x1946: Push((int) 11159)
0x1947: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1948: Pop(3)
0x1949: Return(); Pop(0)

0x194a: Push((int) 12094)
0x194b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194c: IF (Stack[-1] == 0) GOTO 0x195c; Pop(1)

0x194d: PushEmpty(string)
0x194e: Stack[-1] = "Neutral"
0x194f: Call 0x15c0

0x1950: Pop(1)
0x1951: Push((int) 10940)
0x1952: @@ SetMessage(Stack[-1])
0x1953: Pop(1)
0x1954: @@ ClearReplies()
0x1955: Pop(0)
0x1956: Push((int) 10122)
0x1957: Push((int) 11984)
0x1958: Push((int) 11158)
0x1959: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195a: Pop(3)
0x195b: Return(); Pop(0)

0x195c: Push((int) 11984)
0x195d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x195e: IF (Stack[-1] == 0) GOTO 0x1973; Pop(1)

0x195f: PushEmpty(string)
0x1960: Stack[-1] = "Neutral"
0x1961: Call 0x15c0

0x1962: Pop(1)
0x1963: Push((int) 10840)
0x1964: @@ SetMessage(Stack[-1])
0x1965: Pop(1)
0x1966: @@ ClearReplies()
0x1967: Pop(0)
0x1968: Push((int) 10941)
0x1969: Push((int) -1)
0x196a: Push((int) 12096)
0x196b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196c: Pop(3)
0x196d: Push((int) 10942)
0x196e: Push((int) -1)
0x196f: Push((int) 12097)
0x1970: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1971: Pop(3)
0x1972: Return(); Pop(0)

0x1973: Push((int) 11147)
0x1974: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1975: IF (Stack[-1] == 0) GOTO 0x198a; Pop(1)

0x1976: PushEmpty(string)
0x1977: Stack[-1] = "Neutral"
0x1978: Call 0x15c0

0x1979: Pop(1)
0x197a: Push((int) 10111)
0x197b: @@ SetMessage(Stack[-1])
0x197c: Pop(1)
0x197d: @@ ClearReplies()
0x197e: Pop(0)
0x197f: Push((int) 10138)
0x1980: Push((int) 11181)
0x1981: Push((int) 11180)
0x1982: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1983: Pop(3)
0x1984: Push((int) 10140)
0x1985: Push((int) 11183)
0x1986: Push((int) 11182)
0x1987: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1988: Pop(3)
0x1989: Return(); Pop(0)

0x198a: Push((int) 11183)
0x198b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x198c: IF (Stack[-1] == 0) GOTO 0x19a1; Pop(1)

0x198d: PushEmpty(string)
0x198e: Stack[-1] = "Neutral"
0x198f: Call 0x15c0

0x1990: Pop(1)
0x1991: Push((int) 10141)
0x1992: @@ SetMessage(Stack[-1])
0x1993: Pop(1)
0x1994: @@ ClearReplies()
0x1995: Pop(0)
0x1996: Push((int) 10142)
0x1997: Push((int) 11186)
0x1998: Push((int) 11184)
0x1999: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x199a: Pop(3)
0x199b: Push((int) 10143)
0x199c: Push((int) 12070)
0x199d: Push((int) 11185)
0x199e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x199f: Pop(3)
0x19a0: Return(); Pop(0)

0x19a1: Push((int) 12070)
0x19a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19a3: IF (Stack[-1] == 0) GOTO 0x19b8; Pop(1)

0x19a4: PushEmpty(string)
0x19a5: Stack[-1] = "Neutral"
0x19a6: Call 0x15c0

0x19a7: Pop(1)
0x19a8: Push((int) 10921)
0x19a9: @@ SetMessage(Stack[-1])
0x19aa: Pop(1)
0x19ab: @@ ClearReplies()
0x19ac: Pop(0)
0x19ad: Push((int) 10922)
0x19ae: Push((int) 11181)
0x19af: Push((int) 12071)
0x19b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19b1: Pop(3)
0x19b2: Push((int) 10923)
0x19b3: Push((int) 12073)
0x19b4: Push((int) 12072)
0x19b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19b6: Pop(3)
0x19b7: Return(); Pop(0)

0x19b8: Push((int) 12073)
0x19b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19ba: IF (Stack[-1] == 0) GOTO 0x19ca; Pop(1)

0x19bb: PushEmpty(string)
0x19bc: Stack[-1] = "Neutral"
0x19bd: Call 0x15c0

0x19be: Pop(1)
0x19bf: Push((int) 10924)
0x19c0: @@ SetMessage(Stack[-1])
0x19c1: Pop(1)
0x19c2: @@ ClearReplies()
0x19c3: Pop(0)
0x19c4: Push((int) 10925)
0x19c5: Push((int) 11181)
0x19c6: Push((int) 12074)
0x19c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19c8: Pop(3)
0x19c9: Return(); Pop(0)

0x19ca: Push((int) 11186)
0x19cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19cc: IF (Stack[-1] == 0) GOTO 0x19e1; Pop(1)

0x19cd: PushEmpty(string)
0x19ce: Stack[-1] = "Neutral"
0x19cf: Call 0x15c0

0x19d0: Pop(1)
0x19d1: Push((int) 10144)
0x19d2: @@ SetMessage(Stack[-1])
0x19d3: Pop(1)
0x19d4: @@ ClearReplies()
0x19d5: Pop(0)
0x19d6: Push((int) 10919)
0x19d7: Push((int) 11175)
0x19d8: Push((int) 12068)
0x19d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19da: Pop(3)
0x19db: Push((int) 10920)
0x19dc: Push((int) -1)
0x19dd: Push((int) 12069)
0x19de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19df: Pop(3)
0x19e0: Return(); Pop(0)

0x19e1: Push((int) 11181)
0x19e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e3: IF (Stack[-1] == 0) GOTO 0x19f8; Pop(1)

0x19e4: PushEmpty(string)
0x19e5: Stack[-1] = "Neutral"
0x19e6: Call 0x15c0

0x19e7: Pop(1)
0x19e8: Push((int) 10139)
0x19e9: @@ SetMessage(Stack[-1])
0x19ea: Pop(1)
0x19eb: @@ ClearReplies()
0x19ec: Pop(0)
0x19ed: Push((int) 10145)
0x19ee: Push((int) 11188)
0x19ef: Push((int) 11187)
0x19f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19f1: Pop(3)
0x19f2: Push((int) 10134)
0x19f3: Push((int) 11175)
0x19f4: Push((int) 11174)
0x19f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19f6: Pop(3)
0x19f7: Return(); Pop(0)

0x19f8: Push((int) 11175)
0x19f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19fa: IF (Stack[-1] == 0) GOTO 0x1a0f; Pop(1)

0x19fb: PushEmpty(string)
0x19fc: Stack[-1] = "Neutral"
0x19fd: Call 0x15c0

0x19fe: Pop(1)
0x19ff: Push((int) 10135)
0x1a00: @@ SetMessage(Stack[-1])
0x1a01: Pop(1)
0x1a02: @@ ClearReplies()
0x1a03: Pop(0)
0x1a04: Push((int) 10136)
0x1a05: Push((int) 12083)
0x1a06: Push((int) 11176)
0x1a07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a08: Pop(3)
0x1a09: Push((int) 10137)
0x1a0a: Push((int) 12083)
0x1a0b: Push((int) 11178)
0x1a0c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a0d: Pop(3)
0x1a0e: Return(); Pop(0)

0x1a0f: Push((int) 12083)
0x1a10: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a11: IF (Stack[-1] == 0) GOTO 0x1a21; Pop(1)

0x1a12: PushEmpty(string)
0x1a13: Stack[-1] = "Neutral"
0x1a14: Call 0x15c0

0x1a15: Pop(1)
0x1a16: Push((int) 10931)
0x1a17: @@ SetMessage(Stack[-1])
0x1a18: Pop(1)
0x1a19: @@ ClearReplies()
0x1a1a: Pop(0)
0x1a1b: Push((int) 10932)
0x1a1c: Push((int) 11188)
0x1a1d: Push((int) 12085)
0x1a1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1f: Pop(3)
0x1a20: Return(); Pop(0)

0x1a21: Push((int) 11188)
0x1a22: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a23: IF (Stack[-1] == 0) GOTO 0x1a38; Pop(1)

0x1a24: PushEmpty(string)
0x1a25: Stack[-1] = "Neutral"
0x1a26: Call 0x15c0

0x1a27: Pop(1)
0x1a28: Push((int) 10146)
0x1a29: @@ SetMessage(Stack[-1])
0x1a2a: Pop(1)
0x1a2b: @@ ClearReplies()
0x1a2c: Pop(0)
0x1a2d: Push((int) 10147)
0x1a2e: Push((int) 11190)
0x1a2f: Push((int) 11189)
0x1a30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a31: Pop(3)
0x1a32: Push((int) 10149)
0x1a33: Push((int) -1)
0x1a34: Push((int) 11191)
0x1a35: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a36: Pop(3)
0x1a37: Return(); Pop(0)

0x1a38: Push((int) 11190)
0x1a39: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a3a: IF (Stack[-1] == 0) GOTO 0x1a4f; Pop(1)

0x1a3b: PushEmpty(string)
0x1a3c: Stack[-1] = "Neutral"
0x1a3d: Call 0x15c0

0x1a3e: Pop(1)
0x1a3f: Push((int) 10148)
0x1a40: @@ SetMessage(Stack[-1])
0x1a41: Pop(1)
0x1a42: @@ ClearReplies()
0x1a43: Pop(0)
0x1a44: Push((int) 10926)
0x1a45: Push((int) 12080)
0x1a46: Push((int) 12078)
0x1a47: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a48: Pop(3)
0x1a49: Push((int) 10927)
0x1a4a: Push((int) -1)
0x1a4b: Push((int) 12079)
0x1a4c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a4d: Pop(3)
0x1a4e: Return(); Pop(0)

0x1a4f: Push((int) 12080)
0x1a50: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a51: IF (Stack[-1] == 0) GOTO 0x1a66; Pop(1)

0x1a52: PushEmpty(string)
0x1a53: Stack[-1] = "Neutral"
0x1a54: Call 0x15c0

0x1a55: Pop(1)
0x1a56: Push((int) 10928)
0x1a57: @@ SetMessage(Stack[-1])
0x1a58: Pop(1)
0x1a59: @@ ClearReplies()
0x1a5a: Pop(0)
0x1a5b: Push((int) 10929)
0x1a5c: Push((int) -1)
0x1a5d: Push((int) 12081)
0x1a5e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a5f: Pop(3)
0x1a60: Push((int) 10930)
0x1a61: Push((int) -1)
0x1a62: Push((int) 12082)
0x1a63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a64: Pop(3)
0x1a65: Return(); Pop(0)

0x1a66: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1a67: PushEmpty(bool)
0x1a68: Call 0x1f0d

0x1a69: Pop(0)
0x1a6a: IF (Stack[-1] == 0) GOTO 0x1a6e; Pop(1)

0x1a6b: @ lshStopAnimation()
0x1a6c: Pop(0)
0x1a6d: GOTO 0x1a70

0x1a6e: @ StopAnimation()
0x1a6f: Pop(0)
0x1a70: Return(); Pop(0)

0x1a71: GOTO 0x15d1

0x1a72: Return(); Pop(0)

0x1a73: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1a74: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1a75: PushEmpty(bool, object)
0x1a76: Stack[-1] = Stack[-11]
0x1a77: Call 0x1e75

0x1a78: Pop(1)
0x1a79: Pop(1); Push((bool) Stack[-1] == 0)
0x1a7a: IF (Stack[-1] == 0) GOTO 0x1a7d; Pop(1)

0x1a7b: Stack[-10] = (int) -2
0x1a7c: Return(); Pop(8)

0x1a7d: @ CreateDialog(Stack[-4])
0x1a7e: Pop(0)
0x1a7f: PushEmpty(int)
0x1a80: Call 0x1f09

0x1a81: Pop(0)
0x1a82: @@ SetNPCName(Stack[-1])
0x1a83: Pop(1)
0x1a84: PushEmpty(string)
0x1a85: Call 0x1f0b

0x1a86: Pop(0)
0x1a87: @@ SetPhoto(Stack[-1])
0x1a88: Pop(1)
0x1a89: PushEmpty(int)
0x1a8a: Call 0x2575

0x1a8b: Pop(0)
0x1a8c: @@ SetPlayerName(Stack[-1])
0x1a8d: Pop(1)
0x1a8e: Stack[-2] = (int) -1
0x1a8f: @ IsOverrideActive(Stack[-3])
0x1a90: Pop(0)
0x1a91: Push(Stack[-3])
0x1a92: IF (Stack[-1] == 0) GOTO 0x1a95; Pop(1)

0x1a93: Stack[-10] = (int) -2
0x1a94: Return(); Pop(8)

0x1a95: @ DoDialog(Stack[-4])
0x1a96: Pop(0)
0x1a97: PushEmpty(object, object)
0x1a98: Stack[-2] = Stack[-11]
0x1a99: Stack[-1] = Stack[-6]
0x1a9a: Push(-2, 4); TaskCall(15)
0x1a9b: Call 0x1ab2

0x1a9c: Pop(-2, 4); TaskReturn
0x1a9d: Pop(2)
0x1a9e: @@ IsDialogEnd(Stack[-1])
0x1a9f: Pop(0)
0x1aa0: Pop(0); Push((bool) Stack[-1] == 0)
0x1aa1: IF (Stack[-1] == 0) GOTO 0x1aa7; Pop(1)

0x1aa2: @ sync()
0x1aa3: Pop(0)
0x1aa4: @@ IsDialogEnd(Stack[-1])
0x1aa5: Pop(0)
0x1aa6: GOTO 0x1aa0

0x1aa7: PushEmpty(object)
0x1aa8: Stack[-1] = Stack[-10]
0x1aa9: Call 0x1ead

0x1aaa: Pop(1)
0x1aab: @ StopDialog(Stack[-4])
0x1aac: Pop(0)
0x1aad: @@ GetReturnValue(Stack[-2])
0x1aae: Pop(0)
0x1aaf: Stack[-10] = Stack[-2]
0x1ab0: Return(); Pop(8)

0x1ab1: Stack[-4] = 0
0x1ab2: PushEmpty()
0x1ab3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1ab4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1ab5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1ab6: Push((int) 1)
0x1ab7: IF (Stack[-1] == 0) GOTO 0x1add; Pop(1)

0x1ab8: PushEmpty(string)
0x1ab9: Stack[-1] = "Neutral"
0x1aba: Call 0x1afb

0x1abb: Pop(1)
0x1abc: Push((int) 11558)
0x1abd: @@ SetMessage(Stack[-1])
0x1abe: Pop(1)
0x1abf: @@ ClearReplies()
0x1ac0: Pop(0)
0x1ac1: PushEmpty(bool, object)
0x1ac2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ac3: Call 0x23f6

0x1ac4: Pop(1)
0x1ac5: IF (Stack[-1] == 0) GOTO 0x1acb; Pop(1)

0x1ac6: Push((int) 11559)
0x1ac7: Push((int) 12754)
0x1ac8: Push((int) 12753)
0x1ac9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1aca: Pop(3)
0x1acb: PushEmpty(bool, object)
0x1acc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1acd: Call 0x2402

0x1ace: Pop(1)
0x1acf: IF (Stack[-1] == 0) GOTO 0x1ad5; Pop(1)

0x1ad0: Push((int) 11570)
0x1ad1: Push((int) 12765)
0x1ad2: Push((int) 12764)
0x1ad3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ad4: Pop(3)
0x1ad5: Push((int) 11589)
0x1ad6: Push((int) -1)
0x1ad7: Push((int) 12784)
0x1ad8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ad9: Pop(3)
0x1ada: GOTO 0x1add

0x1adb: Return(); Pop(0)

0x1adc: GOTO 0x1ab6

0x1add: PushEmpty(bool)
0x1ade: Call 0x1f0d

0x1adf: Pop(0)
0x1ae0: IF (Stack[-1] == 0) GOTO 0x1aec; Pop(1)

0x1ae1: @ lshWaitForAnimEnd()
0x1ae2: Pop(0)
0x1ae3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1ae4: IF (Stack[-1] == 0) GOTO 0x1ae6; Pop(1)

0x1ae5: GOTO 0x1aeb

0x1ae6: PushEmpty(string)
0x1ae7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1ae8: Call 0x1eb1

0x1ae9: Pop(1)
0x1aea: GOTO 0x1ae1

0x1aeb: GOTO 0x1afa

0x1aec: Push("all")
0x1aed: Push("idle")
0x1aee: @ PlayAnimation(Stack[-2], Stack[-1])
0x1aef: Pop(2)
0x1af0: @ WaitForAnimEnd()
0x1af1: Pop(0)
0x1af2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1af3: IF (Stack[-1] == 0) GOTO 0x1af5; Pop(1)

0x1af4: GOTO 0x1afa

0x1af5: Push("all")
0x1af6: Push("idle")
0x1af7: @ PlayAnimation(Stack[-2], Stack[-1])
0x1af8: Pop(2)
0x1af9: GOTO 0x1af0

0x1afa: Return(); Pop(0)

0x1afb: PushEmpty()
0x1afc: PushEmpty(bool)
0x1afd: Call 0x1f0d

0x1afe: Pop(0)
0x1aff: Pop(1); Push((bool) Stack[-1] == 0)
0x1b00: IF (Stack[-1] == 0) GOTO 0x1b02; Pop(1)

0x1b01: Return(); Pop(0)

0x1b02: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1b03: IF (Stack[-1] == 0) GOTO 0x1b05; Pop(1)

0x1b04: Return(); Pop(0)

0x1b05: PushEmpty(string)
0x1b06: Stack[-1] = Stack[-2]
0x1b07: Call 0x1eb1

0x1b08: Pop(1)
0x1b09: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1b0a: Return(); Pop(0)

0x1b0b: PushEmpty()
0x1b0c: Push((int) 1)
0x1b0d: IF (Stack[-1] == 0) GOTO 0x1c51; Pop(1)

0x1b0e: PushEmpty()
0x1b0f: Call 0x1ec3

0x1b10: Pop(0)
0x1b11: Push((int) 12763)
0x1b12: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b13: IF (Stack[-1] == 0) GOTO 0x1b1e; Pop(1)

0x1b14: PushEmpty(object, object)
0x1b15: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b16: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b17: Call 0x2118

0x1b18: Pop(2)
0x1b19: PushEmpty(object, object)
0x1b1a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b1b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b1c: Call 0x1fcf

0x1b1d: Pop(2)
0x1b1e: Push((int) 12778)
0x1b1f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b20: IF (Stack[-1] == 0) GOTO 0x1b26; Pop(1)

0x1b21: PushEmpty(object, object)
0x1b22: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b23: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b24: Call 0x212f

0x1b25: Pop(2)
0x1b26: Push((int) 12752)
0x1b27: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b28: IF (Stack[-1] == 0) GOTO 0x1b4c; Pop(1)

0x1b29: PushEmpty(string)
0x1b2a: Stack[-1] = "Neutral"
0x1b2b: Call 0x1afb

0x1b2c: Pop(1)
0x1b2d: Push((int) 11558)
0x1b2e: @@ SetMessage(Stack[-1])
0x1b2f: Pop(1)
0x1b30: @@ ClearReplies()
0x1b31: Pop(0)
0x1b32: PushEmpty(bool, object)
0x1b33: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b34: Call 0x23f6

0x1b35: Pop(1)
0x1b36: IF (Stack[-1] == 0) GOTO 0x1b3c; Pop(1)

0x1b37: Push((int) 11559)
0x1b38: Push((int) 12754)
0x1b39: Push((int) 12753)
0x1b3a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b3b: Pop(3)
0x1b3c: PushEmpty(bool, object)
0x1b3d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b3e: Call 0x2402

0x1b3f: Pop(1)
0x1b40: IF (Stack[-1] == 0) GOTO 0x1b46; Pop(1)

0x1b41: Push((int) 11570)
0x1b42: Push((int) 12765)
0x1b43: Push((int) 12764)
0x1b44: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b45: Pop(3)
0x1b46: Push((int) 11589)
0x1b47: Push((int) -1)
0x1b48: Push((int) 12784)
0x1b49: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4a: Pop(3)
0x1b4b: Return(); Pop(0)

0x1b4c: Push((int) 12765)
0x1b4d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b4e: IF (Stack[-1] == 0) GOTO 0x1b68; Pop(1)

0x1b4f: PushEmpty(string)
0x1b50: Stack[-1] = "Neutral"
0x1b51: Call 0x1afb

0x1b52: Pop(1)
0x1b53: Push((int) 11571)
0x1b54: @@ SetMessage(Stack[-1])
0x1b55: Pop(1)
0x1b56: @@ ClearReplies()
0x1b57: Pop(0)
0x1b58: Push((int) 11572)
0x1b59: Push((int) 12767)
0x1b5a: Push((int) 12766)
0x1b5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b5c: Pop(3)
0x1b5d: PushEmpty(bool, object)
0x1b5e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b5f: Call 0x224a

0x1b60: Pop(1)
0x1b61: IF (Stack[-1] == 0) GOTO 0x1b67; Pop(1)

0x1b62: Push((int) 11585)
0x1b63: Push((int) -1)
0x1b64: Push((int) 12779)
0x1b65: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b66: Pop(3)
0x1b67: Return(); Pop(0)

0x1b68: Push((int) 12767)
0x1b69: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b6a: IF (Stack[-1] == 0) GOTO 0x1b7a; Pop(1)

0x1b6b: PushEmpty(string)
0x1b6c: Stack[-1] = "Neutral"
0x1b6d: Call 0x1afb

0x1b6e: Pop(1)
0x1b6f: Push((int) 11573)
0x1b70: @@ SetMessage(Stack[-1])
0x1b71: Pop(1)
0x1b72: @@ ClearReplies()
0x1b73: Pop(0)
0x1b74: Push((int) 11574)
0x1b75: Push((int) 12769)
0x1b76: Push((int) 12768)
0x1b77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b78: Pop(3)
0x1b79: Return(); Pop(0)

0x1b7a: Push((int) 12769)
0x1b7b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b7c: IF (Stack[-1] == 0) GOTO 0x1b8c; Pop(1)

0x1b7d: PushEmpty(string)
0x1b7e: Stack[-1] = "Neutral"
0x1b7f: Call 0x1afb

0x1b80: Pop(1)
0x1b81: Push((int) 11575)
0x1b82: @@ SetMessage(Stack[-1])
0x1b83: Pop(1)
0x1b84: @@ ClearReplies()
0x1b85: Pop(0)
0x1b86: Push((int) 11576)
0x1b87: Push((int) 12771)
0x1b88: Push((int) 12770)
0x1b89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b8a: Pop(3)
0x1b8b: Return(); Pop(0)

0x1b8c: Push((int) 12771)
0x1b8d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b8e: IF (Stack[-1] == 0) GOTO 0x1ba3; Pop(1)

0x1b8f: PushEmpty(string)
0x1b90: Stack[-1] = "Neutral"
0x1b91: Call 0x1afb

0x1b92: Pop(1)
0x1b93: Push((int) 11577)
0x1b94: @@ SetMessage(Stack[-1])
0x1b95: Pop(1)
0x1b96: @@ ClearReplies()
0x1b97: Pop(0)
0x1b98: Push((int) 11578)
0x1b99: Push((int) 12773)
0x1b9a: Push((int) 12772)
0x1b9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9c: Pop(3)
0x1b9d: Push((int) 11586)
0x1b9e: Push((int) 12781)
0x1b9f: Push((int) 12780)
0x1ba0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba1: Pop(3)
0x1ba2: Return(); Pop(0)

0x1ba3: Push((int) 12781)
0x1ba4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ba5: IF (Stack[-1] == 0) GOTO 0x1bb5; Pop(1)

0x1ba6: PushEmpty(string)
0x1ba7: Stack[-1] = "Neutral"
0x1ba8: Call 0x1afb

0x1ba9: Pop(1)
0x1baa: Push((int) 11587)
0x1bab: @@ SetMessage(Stack[-1])
0x1bac: Pop(1)
0x1bad: @@ ClearReplies()
0x1bae: Pop(0)
0x1baf: Push((int) 11588)
0x1bb0: Push((int) 12773)
0x1bb1: Push((int) 12782)
0x1bb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bb3: Pop(3)
0x1bb4: Return(); Pop(0)

0x1bb5: Push((int) 12773)
0x1bb6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bb7: IF (Stack[-1] == 0) GOTO 0x1bc7; Pop(1)

0x1bb8: PushEmpty(string)
0x1bb9: Stack[-1] = "Neutral"
0x1bba: Call 0x1afb

0x1bbb: Pop(1)
0x1bbc: Push((int) 11579)
0x1bbd: @@ SetMessage(Stack[-1])
0x1bbe: Pop(1)
0x1bbf: @@ ClearReplies()
0x1bc0: Pop(0)
0x1bc1: Push((int) 11580)
0x1bc2: Push((int) 12775)
0x1bc3: Push((int) 12774)
0x1bc4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bc5: Pop(3)
0x1bc6: Return(); Pop(0)

0x1bc7: Push((int) 12775)
0x1bc8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bc9: IF (Stack[-1] == 0) GOTO 0x1bd9; Pop(1)

0x1bca: PushEmpty(string)
0x1bcb: Stack[-1] = "Neutral"
0x1bcc: Call 0x1afb

0x1bcd: Pop(1)
0x1bce: Push((int) 11581)
0x1bcf: @@ SetMessage(Stack[-1])
0x1bd0: Pop(1)
0x1bd1: @@ ClearReplies()
0x1bd2: Pop(0)
0x1bd3: Push((int) 11582)
0x1bd4: Push((int) 12777)
0x1bd5: Push((int) 12776)
0x1bd6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bd7: Pop(3)
0x1bd8: Return(); Pop(0)

0x1bd9: Push((int) 12777)
0x1bda: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bdb: IF (Stack[-1] == 0) GOTO 0x1beb; Pop(1)

0x1bdc: PushEmpty(string)
0x1bdd: Stack[-1] = "Neutral"
0x1bde: Call 0x1afb

0x1bdf: Pop(1)
0x1be0: Push((int) 11583)
0x1be1: @@ SetMessage(Stack[-1])
0x1be2: Pop(1)
0x1be3: @@ ClearReplies()
0x1be4: Pop(0)
0x1be5: Push((int) 11584)
0x1be6: Push((int) -1)
0x1be7: Push((int) 12778)
0x1be8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be9: Pop(3)
0x1bea: Return(); Pop(0)

0x1beb: Push((int) 12754)
0x1bec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bed: IF (Stack[-1] == 0) GOTO 0x1bfd; Pop(1)

0x1bee: PushEmpty(string)
0x1bef: Stack[-1] = "Neutral"
0x1bf0: Call 0x1afb

0x1bf1: Pop(1)
0x1bf2: Push((int) 11560)
0x1bf3: @@ SetMessage(Stack[-1])
0x1bf4: Pop(1)
0x1bf5: @@ ClearReplies()
0x1bf6: Pop(0)
0x1bf7: Push((int) 11561)
0x1bf8: Push((int) 12756)
0x1bf9: Push((int) 12755)
0x1bfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bfb: Pop(3)
0x1bfc: Return(); Pop(0)

0x1bfd: Push((int) 12756)
0x1bfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bff: IF (Stack[-1] == 0) GOTO 0x1c0f; Pop(1)

0x1c00: PushEmpty(string)
0x1c01: Stack[-1] = "Neutral"
0x1c02: Call 0x1afb

0x1c03: Pop(1)
0x1c04: Push((int) 11562)
0x1c05: @@ SetMessage(Stack[-1])
0x1c06: Pop(1)
0x1c07: @@ ClearReplies()
0x1c08: Pop(0)
0x1c09: Push((int) 11563)
0x1c0a: Push((int) 12758)
0x1c0b: Push((int) 12757)
0x1c0c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c0d: Pop(3)
0x1c0e: Return(); Pop(0)

0x1c0f: Push((int) 12758)
0x1c10: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c11: IF (Stack[-1] == 0) GOTO 0x1c21; Pop(1)

0x1c12: PushEmpty(string)
0x1c13: Stack[-1] = "Neutral"
0x1c14: Call 0x1afb

0x1c15: Pop(1)
0x1c16: Push((int) 11564)
0x1c17: @@ SetMessage(Stack[-1])
0x1c18: Pop(1)
0x1c19: @@ ClearReplies()
0x1c1a: Pop(0)
0x1c1b: Push((int) 11565)
0x1c1c: Push((int) 12760)
0x1c1d: Push((int) 12759)
0x1c1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c1f: Pop(3)
0x1c20: Return(); Pop(0)

0x1c21: Push((int) 12760)
0x1c22: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c23: IF (Stack[-1] == 0) GOTO 0x1c33; Pop(1)

0x1c24: PushEmpty(string)
0x1c25: Stack[-1] = "Neutral"
0x1c26: Call 0x1afb

0x1c27: Pop(1)
0x1c28: Push((int) 11566)
0x1c29: @@ SetMessage(Stack[-1])
0x1c2a: Pop(1)
0x1c2b: @@ ClearReplies()
0x1c2c: Pop(0)
0x1c2d: Push((int) 11567)
0x1c2e: Push((int) 12762)
0x1c2f: Push((int) 12761)
0x1c30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c31: Pop(3)
0x1c32: Return(); Pop(0)

0x1c33: Push((int) 12762)
0x1c34: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c35: IF (Stack[-1] == 0) GOTO 0x1c45; Pop(1)

0x1c36: PushEmpty(string)
0x1c37: Stack[-1] = "Neutral"
0x1c38: Call 0x1afb

0x1c39: Pop(1)
0x1c3a: Push((int) 11568)
0x1c3b: @@ SetMessage(Stack[-1])
0x1c3c: Pop(1)
0x1c3d: @@ ClearReplies()
0x1c3e: Pop(0)
0x1c3f: Push((int) 11569)
0x1c40: Push((int) -1)
0x1c41: Push((int) 12763)
0x1c42: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c43: Pop(3)
0x1c44: Return(); Pop(0)

0x1c45: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c46: PushEmpty(bool)
0x1c47: Call 0x1f0d

0x1c48: Pop(0)
0x1c49: IF (Stack[-1] == 0) GOTO 0x1c4d; Pop(1)

0x1c4a: @ lshStopAnimation()
0x1c4b: Pop(0)
0x1c4c: GOTO 0x1c4f

0x1c4d: @ StopAnimation()
0x1c4e: Pop(0)
0x1c4f: Return(); Pop(0)

0x1c50: GOTO 0x1b0c

0x1c51: Return(); Pop(0)

0x1c52: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1c53: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1c54: PushEmpty(bool, object)
0x1c55: Stack[-1] = Stack[-11]
0x1c56: Call 0x1e75

0x1c57: Pop(1)
0x1c58: Pop(1); Push((bool) Stack[-1] == 0)
0x1c59: IF (Stack[-1] == 0) GOTO 0x1c5c; Pop(1)

0x1c5a: Stack[-10] = (int) -2
0x1c5b: Return(); Pop(8)

0x1c5c: @ CreateDialog(Stack[-4])
0x1c5d: Pop(0)
0x1c5e: PushEmpty(int)
0x1c5f: Call 0x1f09

0x1c60: Pop(0)
0x1c61: @@ SetNPCName(Stack[-1])
0x1c62: Pop(1)
0x1c63: PushEmpty(string)
0x1c64: Call 0x1f0b

0x1c65: Pop(0)
0x1c66: @@ SetPhoto(Stack[-1])
0x1c67: Pop(1)
0x1c68: PushEmpty(int)
0x1c69: Call 0x2575

0x1c6a: Pop(0)
0x1c6b: @@ SetPlayerName(Stack[-1])
0x1c6c: Pop(1)
0x1c6d: Stack[-2] = (int) -1
0x1c6e: @ IsOverrideActive(Stack[-3])
0x1c6f: Pop(0)
0x1c70: Push(Stack[-3])
0x1c71: IF (Stack[-1] == 0) GOTO 0x1c74; Pop(1)

0x1c72: Stack[-10] = (int) -2
0x1c73: Return(); Pop(8)

0x1c74: @ DoDialog(Stack[-4])
0x1c75: Pop(0)
0x1c76: PushEmpty(object, object)
0x1c77: Stack[-2] = Stack[-11]
0x1c78: Stack[-1] = Stack[-6]
0x1c79: Push(-2, 4); TaskCall(17)
0x1c7a: Call 0x1c91

0x1c7b: Pop(-2, 4); TaskReturn
0x1c7c: Pop(2)
0x1c7d: @@ IsDialogEnd(Stack[-1])
0x1c7e: Pop(0)
0x1c7f: Pop(0); Push((bool) Stack[-1] == 0)
0x1c80: IF (Stack[-1] == 0) GOTO 0x1c86; Pop(1)

0x1c81: @ sync()
0x1c82: Pop(0)
0x1c83: @@ IsDialogEnd(Stack[-1])
0x1c84: Pop(0)
0x1c85: GOTO 0x1c7f

0x1c86: PushEmpty(object)
0x1c87: Stack[-1] = Stack[-10]
0x1c88: Call 0x1ead

0x1c89: Pop(1)
0x1c8a: @ StopDialog(Stack[-4])
0x1c8b: Pop(0)
0x1c8c: @@ GetReturnValue(Stack[-2])
0x1c8d: Pop(0)
0x1c8e: Stack[-10] = Stack[-2]
0x1c8f: Return(); Pop(8)

0x1c90: Stack[-4] = 0
0x1c91: PushEmpty()
0x1c92: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1c93: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1c94: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1c95: Push((int) 1)
0x1c96: IF (Stack[-1] == 0) GOTO 0x1ceb; Pop(1)

0x1c97: PushEmpty(string)
0x1c98: Stack[-1] = "Neutral"
0x1c99: Call 0x1d09

0x1c9a: Pop(1)
0x1c9b: Push((int) 13660)
0x1c9c: @@ SetMessage(Stack[-1])
0x1c9d: Pop(1)
0x1c9e: @@ ClearReplies()
0x1c9f: Pop(0)
0x1ca0: PushEmpty(bool)
0x1ca1: Stack[-1] = (bool) 0
0x1ca2: PushEmpty(bool, object)
0x1ca3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ca4: Call 0x247a

0x1ca5: Pop(1)
0x1ca6: IF (Stack[-1] == 0) GOTO 0x1cad; Pop(1)

0x1ca7: PushEmpty(bool, object)
0x1ca8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ca9: Call 0x2462

0x1caa: Pop(1)
0x1cab: IF (Stack[-1] == 0) GOTO 0x1cad; Pop(1)

0x1cac: Stack[-1] = (bool) 1
0x1cad: IF (Stack[-1] == 0) GOTO 0x1cb3; Pop(1)

0x1cae: Push((int) 13661)
0x1caf: Push((int) 14920)
0x1cb0: Push((int) 14919)
0x1cb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cb2: Pop(3)
0x1cb3: PushEmpty(bool)
0x1cb4: Stack[-1] = (bool) 0
0x1cb5: PushEmpty(bool)
0x1cb6: Stack[-1] = (bool) 0
0x1cb7: PushEmpty(bool, object)
0x1cb8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cb9: Call 0x2462

0x1cba: Pop(1)
0x1cbb: Pop(1); Push((bool) Stack[-1] == 0)
0x1cbc: IF (Stack[-1] == 0) GOTO 0x1cc3; Pop(1)

0x1cbd: PushEmpty(bool, object)
0x1cbe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cbf: Call 0x2486

0x1cc0: Pop(1)
0x1cc1: IF (Stack[-1] == 0) GOTO 0x1cc3; Pop(1)

0x1cc2: Stack[-1] = (bool) 1
0x1cc3: IF (Stack[-1] == 0) GOTO 0x1cca; Pop(1)

0x1cc4: PushEmpty(bool, object)
0x1cc5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cc6: Call 0x246e

0x1cc7: Pop(1)
0x1cc8: IF (Stack[-1] == 0) GOTO 0x1cca; Pop(1)

0x1cc9: Stack[-1] = (bool) 1
0x1cca: IF (Stack[-1] == 0) GOTO 0x1cd0; Pop(1)

0x1ccb: Push((int) 13669)
0x1ccc: Push((int) 14928)
0x1ccd: Push((int) 14927)
0x1cce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ccf: Pop(3)
0x1cd0: PushEmpty(bool)
0x1cd1: Stack[-1] = (bool) 0
0x1cd2: PushEmpty(bool, object)
0x1cd3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cd4: Call 0x246e

0x1cd5: Pop(1)
0x1cd6: IF (Stack[-1] == 0) GOTO 0x1cdd; Pop(1)

0x1cd7: PushEmpty(bool, object)
0x1cd8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cd9: Call 0x2492

0x1cda: Pop(1)
0x1cdb: IF (Stack[-1] == 0) GOTO 0x1cdd; Pop(1)

0x1cdc: Stack[-1] = (bool) 1
0x1cdd: IF (Stack[-1] == 0) GOTO 0x1ce3; Pop(1)

0x1cde: Push((int) 13683)
0x1cdf: Push((int) 14944)
0x1ce0: Push((int) 14943)
0x1ce1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ce2: Pop(3)
0x1ce3: Push((int) 13674)
0x1ce4: Push((int) -1)
0x1ce5: Push((int) 14932)
0x1ce6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ce7: Pop(3)
0x1ce8: GOTO 0x1ceb

0x1ce9: Return(); Pop(0)

0x1cea: GOTO 0x1c95

0x1ceb: PushEmpty(bool)
0x1cec: Call 0x1f0d

0x1ced: Pop(0)
0x1cee: IF (Stack[-1] == 0) GOTO 0x1cfa; Pop(1)

0x1cef: @ lshWaitForAnimEnd()
0x1cf0: Pop(0)
0x1cf1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1cf2: IF (Stack[-1] == 0) GOTO 0x1cf4; Pop(1)

0x1cf3: GOTO 0x1cf9

0x1cf4: PushEmpty(string)
0x1cf5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1cf6: Call 0x1eb1

0x1cf7: Pop(1)
0x1cf8: GOTO 0x1cef

0x1cf9: GOTO 0x1d08

0x1cfa: Push("all")
0x1cfb: Push("idle")
0x1cfc: @ PlayAnimation(Stack[-2], Stack[-1])
0x1cfd: Pop(2)
0x1cfe: @ WaitForAnimEnd()
0x1cff: Pop(0)
0x1d00: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1d01: IF (Stack[-1] == 0) GOTO 0x1d03; Pop(1)

0x1d02: GOTO 0x1d08

0x1d03: Push("all")
0x1d04: Push("idle")
0x1d05: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d06: Pop(2)
0x1d07: GOTO 0x1cfe

0x1d08: Return(); Pop(0)

0x1d09: PushEmpty()
0x1d0a: PushEmpty(bool)
0x1d0b: Call 0x1f0d

0x1d0c: Pop(0)
0x1d0d: Pop(1); Push((bool) Stack[-1] == 0)
0x1d0e: IF (Stack[-1] == 0) GOTO 0x1d10; Pop(1)

0x1d0f: Return(); Pop(0)

0x1d10: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1d11: IF (Stack[-1] == 0) GOTO 0x1d13; Pop(1)

0x1d12: Return(); Pop(0)

0x1d13: PushEmpty(string)
0x1d14: Stack[-1] = Stack[-2]
0x1d15: Call 0x1eb1

0x1d16: Pop(1)
0x1d17: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1d18: Return(); Pop(0)

0x1d19: PushEmpty()
0x1d1a: Push((int) 1)
0x1d1b: IF (Stack[-1] == 0) GOTO 0x1e63; Pop(1)

0x1d1c: PushEmpty()
0x1d1d: Call 0x1ec3

0x1d1e: Pop(0)
0x1d1f: Push((int) 14919)
0x1d20: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d21: IF (Stack[-1] == 0) GOTO 0x1d27; Pop(1)

0x1d22: PushEmpty(object, object)
0x1d23: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d24: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d25: Call 0x214d

0x1d26: Pop(2)
0x1d27: Push((int) 14927)
0x1d28: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d29: IF (Stack[-1] == 0) GOTO 0x1d2f; Pop(1)

0x1d2a: PushEmpty(object, object)
0x1d2b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d2c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d2d: Call 0x2153

0x1d2e: Pop(2)
0x1d2f: Push((int) 14931)
0x1d30: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d31: IF (Stack[-1] == 0) GOTO 0x1d37; Pop(1)

0x1d32: PushEmpty(object, object)
0x1d33: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d34: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d35: Call 0x2147

0x1d36: Pop(2)
0x1d37: Push((int) 14943)
0x1d38: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d39: IF (Stack[-1] == 0) GOTO 0x1d3f; Pop(1)

0x1d3a: PushEmpty(object, object)
0x1d3b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d3c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d3d: Call 0x2159

0x1d3e: Pop(2)
0x1d3f: Push((int) 14918)
0x1d40: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d41: IF (Stack[-1] == 0) GOTO 0x1d94; Pop(1)

0x1d42: PushEmpty(string)
0x1d43: Stack[-1] = "Neutral"
0x1d44: Call 0x1d09

0x1d45: Pop(1)
0x1d46: Push((int) 13660)
0x1d47: @@ SetMessage(Stack[-1])
0x1d48: Pop(1)
0x1d49: @@ ClearReplies()
0x1d4a: Pop(0)
0x1d4b: PushEmpty(bool)
0x1d4c: Stack[-1] = (bool) 0
0x1d4d: PushEmpty(bool, object)
0x1d4e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d4f: Call 0x247a

0x1d50: Pop(1)
0x1d51: IF (Stack[-1] == 0) GOTO 0x1d58; Pop(1)

0x1d52: PushEmpty(bool, object)
0x1d53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d54: Call 0x2462

0x1d55: Pop(1)
0x1d56: IF (Stack[-1] == 0) GOTO 0x1d58; Pop(1)

0x1d57: Stack[-1] = (bool) 1
0x1d58: IF (Stack[-1] == 0) GOTO 0x1d5e; Pop(1)

0x1d59: Push((int) 13661)
0x1d5a: Push((int) 14920)
0x1d5b: Push((int) 14919)
0x1d5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d5d: Pop(3)
0x1d5e: PushEmpty(bool)
0x1d5f: Stack[-1] = (bool) 0
0x1d60: PushEmpty(bool)
0x1d61: Stack[-1] = (bool) 0
0x1d62: PushEmpty(bool, object)
0x1d63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d64: Call 0x2462

0x1d65: Pop(1)
0x1d66: Pop(1); Push((bool) Stack[-1] == 0)
0x1d67: IF (Stack[-1] == 0) GOTO 0x1d6e; Pop(1)

0x1d68: PushEmpty(bool, object)
0x1d69: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d6a: Call 0x2486

0x1d6b: Pop(1)
0x1d6c: IF (Stack[-1] == 0) GOTO 0x1d6e; Pop(1)

0x1d6d: Stack[-1] = (bool) 1
0x1d6e: IF (Stack[-1] == 0) GOTO 0x1d75; Pop(1)

0x1d6f: PushEmpty(bool, object)
0x1d70: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d71: Call 0x246e

0x1d72: Pop(1)
0x1d73: IF (Stack[-1] == 0) GOTO 0x1d75; Pop(1)

0x1d74: Stack[-1] = (bool) 1
0x1d75: IF (Stack[-1] == 0) GOTO 0x1d7b; Pop(1)

0x1d76: Push((int) 13669)
0x1d77: Push((int) 14928)
0x1d78: Push((int) 14927)
0x1d79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d7a: Pop(3)
0x1d7b: PushEmpty(bool)
0x1d7c: Stack[-1] = (bool) 0
0x1d7d: PushEmpty(bool, object)
0x1d7e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d7f: Call 0x246e

0x1d80: Pop(1)
0x1d81: IF (Stack[-1] == 0) GOTO 0x1d88; Pop(1)

0x1d82: PushEmpty(bool, object)
0x1d83: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d84: Call 0x2492

0x1d85: Pop(1)
0x1d86: IF (Stack[-1] == 0) GOTO 0x1d88; Pop(1)

0x1d87: Stack[-1] = (bool) 1
0x1d88: IF (Stack[-1] == 0) GOTO 0x1d8e; Pop(1)

0x1d89: Push((int) 13683)
0x1d8a: Push((int) 14944)
0x1d8b: Push((int) 14943)
0x1d8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d8d: Pop(3)
0x1d8e: Push((int) 13674)
0x1d8f: Push((int) -1)
0x1d90: Push((int) 14932)
0x1d91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d92: Pop(3)
0x1d93: Return(); Pop(0)

0x1d94: Push((int) 14944)
0x1d95: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d96: IF (Stack[-1] == 0) GOTO 0x1da6; Pop(1)

0x1d97: PushEmpty(string)
0x1d98: Stack[-1] = "Neutral"
0x1d99: Call 0x1d09

0x1d9a: Pop(1)
0x1d9b: Push((int) 13684)
0x1d9c: @@ SetMessage(Stack[-1])
0x1d9d: Pop(1)
0x1d9e: @@ ClearReplies()
0x1d9f: Pop(0)
0x1da0: Push((int) 13685)
0x1da1: Push((int) 14946)
0x1da2: Push((int) 14945)
0x1da3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1da4: Pop(3)
0x1da5: Return(); Pop(0)

0x1da6: Push((int) 14946)
0x1da7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1da8: IF (Stack[-1] == 0) GOTO 0x1db8; Pop(1)

0x1da9: PushEmpty(string)
0x1daa: Stack[-1] = "Neutral"
0x1dab: Call 0x1d09

0x1dac: Pop(1)
0x1dad: Push((int) 13686)
0x1dae: @@ SetMessage(Stack[-1])
0x1daf: Pop(1)
0x1db0: @@ ClearReplies()
0x1db1: Pop(0)
0x1db2: Push((int) 13687)
0x1db3: Push((int) -1)
0x1db4: Push((int) 14947)
0x1db5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1db6: Pop(3)
0x1db7: Return(); Pop(0)

0x1db8: Push((int) 14928)
0x1db9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dba: IF (Stack[-1] == 0) GOTO 0x1dcf; Pop(1)

0x1dbb: PushEmpty(string)
0x1dbc: Stack[-1] = "Neutral"
0x1dbd: Call 0x1d09

0x1dbe: Pop(1)
0x1dbf: Push((int) 13670)
0x1dc0: @@ SetMessage(Stack[-1])
0x1dc1: Pop(1)
0x1dc2: @@ ClearReplies()
0x1dc3: Pop(0)
0x1dc4: Push((int) 13671)
0x1dc5: Push((int) 14930)
0x1dc6: Push((int) 14929)
0x1dc7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dc8: Pop(3)
0x1dc9: Push((int) 13675)
0x1dca: Push((int) 14930)
0x1dcb: Push((int) 14933)
0x1dcc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dcd: Pop(3)
0x1dce: Return(); Pop(0)

0x1dcf: Push((int) 14930)
0x1dd0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dd1: IF (Stack[-1] == 0) GOTO 0x1de1; Pop(1)

0x1dd2: PushEmpty(string)
0x1dd3: Stack[-1] = "Neutral"
0x1dd4: Call 0x1d09

0x1dd5: Pop(1)
0x1dd6: Push((int) 13672)
0x1dd7: @@ SetMessage(Stack[-1])
0x1dd8: Pop(1)
0x1dd9: @@ ClearReplies()
0x1dda: Pop(0)
0x1ddb: Push((int) 13673)
0x1ddc: Push((int) -1)
0x1ddd: Push((int) 14931)
0x1dde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ddf: Pop(3)
0x1de0: Return(); Pop(0)

0x1de1: Push((int) 14920)
0x1de2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1de3: IF (Stack[-1] == 0) GOTO 0x1df8; Pop(1)

0x1de4: PushEmpty(string)
0x1de5: Stack[-1] = "Neutral"
0x1de6: Call 0x1d09

0x1de7: Pop(1)
0x1de8: Push((int) 13662)
0x1de9: @@ SetMessage(Stack[-1])
0x1dea: Pop(1)
0x1deb: @@ ClearReplies()
0x1dec: Pop(0)
0x1ded: Push((int) 13663)
0x1dee: Push((int) 14922)
0x1def: Push((int) 14921)
0x1df0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1df1: Pop(3)
0x1df2: Push((int) 13677)
0x1df3: Push((int) 14937)
0x1df4: Push((int) 14936)
0x1df5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1df6: Pop(3)
0x1df7: Return(); Pop(0)

0x1df8: Push((int) 14937)
0x1df9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dfa: IF (Stack[-1] == 0) GOTO 0x1e0f; Pop(1)

0x1dfb: PushEmpty(string)
0x1dfc: Stack[-1] = "Neutral"
0x1dfd: Call 0x1d09

0x1dfe: Pop(1)
0x1dff: Push((int) 13678)
0x1e00: @@ SetMessage(Stack[-1])
0x1e01: Pop(1)
0x1e02: @@ ClearReplies()
0x1e03: Pop(0)
0x1e04: Push((int) 13679)
0x1e05: Push((int) 14924)
0x1e06: Push((int) 14938)
0x1e07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e08: Pop(3)
0x1e09: Push((int) 13680)
0x1e0a: Push((int) -1)
0x1e0b: Push((int) 14940)
0x1e0c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e0d: Pop(3)
0x1e0e: Return(); Pop(0)

0x1e0f: Push((int) 14922)
0x1e10: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e11: IF (Stack[-1] == 0) GOTO 0x1e21; Pop(1)

0x1e12: PushEmpty(string)
0x1e13: Stack[-1] = "Neutral"
0x1e14: Call 0x1d09

0x1e15: Pop(1)
0x1e16: Push((int) 13664)
0x1e17: @@ SetMessage(Stack[-1])
0x1e18: Pop(1)
0x1e19: @@ ClearReplies()
0x1e1a: Pop(0)
0x1e1b: Push((int) 13665)
0x1e1c: Push((int) 14924)
0x1e1d: Push((int) 14923)
0x1e1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e1f: Pop(3)
0x1e20: Return(); Pop(0)

0x1e21: Push((int) 14924)
0x1e22: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e23: IF (Stack[-1] == 0) GOTO 0x1e33; Pop(1)

0x1e24: PushEmpty(string)
0x1e25: Stack[-1] = "Neutral"
0x1e26: Call 0x1d09

0x1e27: Pop(1)
0x1e28: Push((int) 13666)
0x1e29: @@ SetMessage(Stack[-1])
0x1e2a: Pop(1)
0x1e2b: @@ ClearReplies()
0x1e2c: Pop(0)
0x1e2d: Push((int) 13667)
0x1e2e: Push((int) 14926)
0x1e2f: Push((int) 14925)
0x1e30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e31: Pop(3)
0x1e32: Return(); Pop(0)

0x1e33: Push((int) 14926)
0x1e34: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e35: IF (Stack[-1] == 0) GOTO 0x1e45; Pop(1)

0x1e36: PushEmpty(string)
0x1e37: Stack[-1] = "Neutral"
0x1e38: Call 0x1d09

0x1e39: Pop(1)
0x1e3a: Push((int) 13668)
0x1e3b: @@ SetMessage(Stack[-1])
0x1e3c: Pop(1)
0x1e3d: @@ ClearReplies()
0x1e3e: Pop(0)
0x1e3f: Push((int) 13676)
0x1e40: Push((int) 14941)
0x1e41: Push((int) 14935)
0x1e42: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e43: Pop(3)
0x1e44: Return(); Pop(0)

0x1e45: Push((int) 14941)
0x1e46: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e47: IF (Stack[-1] == 0) GOTO 0x1e57; Pop(1)

0x1e48: PushEmpty(string)
0x1e49: Stack[-1] = "Neutral"
0x1e4a: Call 0x1d09

0x1e4b: Pop(1)
0x1e4c: Push((int) 13681)
0x1e4d: @@ SetMessage(Stack[-1])
0x1e4e: Pop(1)
0x1e4f: @@ ClearReplies()
0x1e50: Pop(0)
0x1e51: Push((int) 13682)
0x1e52: Push((int) -1)
0x1e53: Push((int) 14942)
0x1e54: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e55: Pop(3)
0x1e56: Return(); Pop(0)

0x1e57: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1e58: PushEmpty(bool)
0x1e59: Call 0x1f0d

0x1e5a: Pop(0)
0x1e5b: IF (Stack[-1] == 0) GOTO 0x1e5f; Pop(1)

0x1e5c: @ lshStopAnimation()
0x1e5d: Pop(0)
0x1e5e: GOTO 0x1e61

0x1e5f: @ StopAnimation()
0x1e60: Pop(0)
0x1e61: Return(); Pop(0)

0x1e62: GOTO 0x1d1a

0x1e63: Return(); Pop(0)

0x1e64: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x1e65: @@ GetPosition(Stack[-4])
0x1e66: Pop(0)
0x1e67: @ GetPosition(Stack[-3])
0x1e68: Pop(0)
0x1e69: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x1e6a: Push(CvectorIndex(Stack[-2], 0))
0x1e6b: Push(CvectorIndex(Stack[-3], 2))
0x1e6c: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x1e6d: Pop(2)
0x1e6e: Stack[-10] = Stack[-1]
0x1e6f: Return(); Pop(8)

0x1e70: PushEmpty(bool, bool)
0x1e71: @ IsLoaded(Stack[-1])
0x1e72: Pop(0)
0x1e73: Stack[-3] = Stack[-1]
0x1e74: Return(); Pop(2)

0x1e75: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1e76: @@ GetPosition(Stack[-7])
0x1e77: Pop(0)
0x1e78: @@ GetEyesHeight(Stack[-8])
0x1e79: Pop(0)
0x1e7a: Push(CvectorIndex(Stack[-7], 1))
0x1e7b: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1e7c: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1e7d: @ GetPosition(Stack[-6])
0x1e7e: Pop(0)
0x1e7f: @ GetEyesHeight(Stack[-8])
0x1e80: Pop(0)
0x1e81: Push(CvectorIndex(Stack[-6], 1))
0x1e82: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1e83: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1e84: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1e85: Push(CvectorIndex(Stack[-5], 1))
0x1e86: Stack[-1] = (int) 0
0x1e87: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1e88: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1e89: Pop(1); Push(Sqrt(Stack[-1]))
0x1e8a: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1e8b: Stack[-4] = -Stack[-5]; Pop(0);
0x1e8c: Push((int) 70)
0x1e8d: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1e8e: PushEmpty(cvector, cvector)
0x1e8f: Push(CVector(0.0, 1.0, 0.0))
0x1e90: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x1e91: Call 0x1eca

0x1e92: Pop(1)
0x1e93: Push((int) 25)
0x1e94: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1e95: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e96: Push(CVector(0.0, 10.0, 0.0))
0x1e97: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1e98: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1e99: @ IsOverrideActive(Stack[-1])
0x1e9a: Pop(0)
0x1e9b: Push(Stack[-1])
0x1e9c: IF (Stack[-1] == 0) GOTO 0x1e9f; Pop(1)

0x1e9d: Stack[-18] = (bool) 0
0x1e9e: Return(); Pop(16)

0x1e9f: @ StopWorld()
0x1ea0: Pop(0)
0x1ea1: @ CameraTransit(Stack[-2], Stack[-4])
0x1ea2: Pop(0)
0x1ea3: Push(CvectorIndex(Stack[-3], 0))
0x1ea4: Push(CvectorIndex(Stack[-4], 2))
0x1ea5: @ Rotate(Stack[-2], Stack[-1])
0x1ea6: Pop(2)
0x1ea7: @ CameraWaitForPlayFinish()
0x1ea8: Pop(0)
0x1ea9: @ ResumeWorld()
0x1eaa: Pop(0)
0x1eab: Stack[-18] = (bool) 1
0x1eac: Return(); Pop(16)

0x1ead: PushEmpty()
0x1eae: @ CameraSwitchToNormal()
0x1eaf: Pop(0)
0x1eb0: Return(); Pop(0)

0x1eb1: PushEmpty(float, float, float, float)
0x1eb2: Push("playing ")
0x1eb3: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1eb4: @ Trace(Stack[-1])
0x1eb5: Pop(1)
0x1eb6: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x1eb7: Pop(0)
0x1eb8: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x1eb9: Pop(0)
0x1eba: Push("start: ")
0x1ebb: Pop(1); Push(Stack[-1] + Stack[-3]);
0x1ebc: @ Trace(Stack[-1])
0x1ebd: Pop(1)
0x1ebe: Push("end: ")
0x1ebf: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1ec0: @ Trace(Stack[-1])
0x1ec1: Pop(1)
0x1ec2: Return(); Pop(4)

0x1ec3: PushEmpty(bool)
0x1ec4: Call 0x1f0d

0x1ec5: Pop(0)
0x1ec6: IF (Stack[-1] == 0) GOTO 0x1ec9; Pop(1)

0x1ec7: @ lshStopSpeech()
0x1ec8: Pop(0)
0x1ec9: Return(); Pop(0)

0x1eca: PushEmpty(float, float)
0x1ecb: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1ecc: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1ecd: Push((float)0.0)
0x1ece: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1ecf: IF (Stack[-1] == 0) GOTO 0x1ed2; Pop(1)

0x1ed0: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1ed1: Return(); Pop(2)

0x1ed2: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x1ed3: Return(); Pop(2)

0x1ed4: PushEmpty(int, int)
0x1ed5: @ GetVariable(Stack[-3], Stack[-1])
0x1ed6: Pop(0)
0x1ed7: Stack[-4] = Stack[-1]
0x1ed8: Return(); Pop(2)

0x1ed9: PushEmpty(int, bool, int, bool)
0x1eda: @ GetInvItemByName(Stack[-2], Stack[-5])
0x1edb: Pop(0)
0x1edc: @@ HasItem(Stack[-2], Stack[-1])
0x1edd: Pop(0)
0x1ede: Stack[-7] = Stack[-1]
0x1edf: Return(); Pop(4)

0x1ee0: PushEmpty(object, object)
0x1ee1: @ FindActor(Stack[-1], Stack[-4])
0x1ee2: Pop(0)
0x1ee3: Pop(0); Push((bool) Stack[-1] == 0)
0x1ee4: IF (Stack[-1] == 0) GOTO 0x1ee7; Pop(1)

0x1ee5: Stack[-5] = (bool) 0
0x1ee6: Return(); Pop(2)

0x1ee7: @ Trigger(Stack[-1], Stack[-3])
0x1ee8: Pop(0)
0x1ee9: Stack[-5] = (bool) 1
0x1eea: Return(); Pop(2)

0x1eeb: Stack[-1] = 0
0x1eec: PushEmpty(float, float)
0x1eed: @ GetGameTime(Stack[-1])
0x1eee: Pop(0)
0x1eef: Stack[-3] = Stack[-1]
0x1ef0: Return(); Pop(2)

0x1ef1: PushEmpty(float, float)
0x1ef2: @ GetGameTime(Stack[-1])
0x1ef3: Pop(0)
0x1ef4: Push((int) 1)
0x1ef5: PushEmpty(int)
0x1ef6: Push((int) 24)
0x1ef7: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1ef8: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1ef9: Return(); Pop(2)

0x1efa: PushEmpty()
0x1efb: PushEmpty(int)
0x1efc: Call 0x1ef1

0x1efd: Pop(0)
0x1efe: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x1eff: Return(); Pop(0)

0x1f00: PushEmpty(bool, bool)
0x1f01: PushEmpty(string)
0x1f02: Stack[-1] = "No"
0x1f03: Call 0x1eb1

0x1f04: Pop(1)
0x1f05: @ lshWaitForAnimEnd(Stack[-1])
0x1f06: Pop(0)
0x1f07: Stack[-3] = Stack[-1]
0x1f08: Return(); Pop(2)

0x1f09: Stack[-1] = (int) 2857
0x1f0a: Return(); Pop(0)

0x1f0b: Stack[-1] = "ui/NPC_BigVlad.png"
0x1f0c: Return(); Pop(0)

0x1f0d: Stack[-1] = (bool) 1
0x1f0e: Return(); Pop(0)

0x1f0f: PushEmpty()
0x1f10: PushEmpty(object, string, float)
0x1f11: PushEmpty(object)
0x1f12: Call 0x2543

0x1f13: Stack[-4] = Stack[-1]
0x1f14: Pop(1)
0x1f15: Stack[-2] = "pt_map_georg"
0x1f16: Stack[-1] = (int) 2
0x1f17: Call 0x2554

0x1f18: Pop(3)
0x1f19: PushEmpty(object)
0x1f1a: Call 0x2543

0x1f1b: Pop(0)
0x1f1c: @@ ShowMap(Stack[-1])
0x1f1d: Pop(1)
0x1f1e: Return(); Pop(0)

0x1f1f: PushEmpty()
0x1f20: Push("ood2BigVlad1")
0x1f21: Push((int) 1)
0x1f22: @ SetVariable(Stack[-2], Stack[-1])
0x1f23: Pop(2)
0x1f24: Return(); Pop(0)

0x1f25: PushEmpty()
0x1f26: Push("ood2BigVlad2")
0x1f27: Push((int) 1)
0x1f28: @ SetVariable(Stack[-2], Stack[-1])
0x1f29: Pop(2)
0x1f2a: Return(); Pop(0)

0x1f2b: PushEmpty()
0x1f2c: Push("ood2BigVlad3")
0x1f2d: Push((int) 1)
0x1f2e: @ SetVariable(Stack[-2], Stack[-1])
0x1f2f: Pop(2)
0x1f30: Return(); Pop(0)

0x1f31: PushEmpty()
0x1f32: Push("ood2BigVlad4")
0x1f33: Push((int) 1)
0x1f34: @ SetVariable(Stack[-2], Stack[-1])
0x1f35: Pop(2)
0x1f36: Return(); Pop(0)

0x1f37: PushEmpty()
0x1f38: Push("d2q01BigVladVisit")
0x1f39: Push((int) 1)
0x1f3a: @ SetVariable(Stack[-2], Stack[-1])
0x1f3b: Pop(2)
0x1f3c: Return(); Pop(0)

0x1f3d: PushEmpty()
0x1f3e: Push("ood1BigVlad4")
0x1f3f: Push((int) 1)
0x1f40: @ SetVariable(Stack[-2], Stack[-1])
0x1f41: Pop(2)
0x1f42: Return(); Pop(0)

0x1f43: PushEmpty()
0x1f44: Push("ood1BigVlad5")
0x1f45: Push((int) 1)
0x1f46: @ SetVariable(Stack[-2], Stack[-1])
0x1f47: Pop(2)
0x1f48: Return(); Pop(0)

0x1f49: PushEmpty()
0x1f4a: Push("ood1BigVlad6")
0x1f4b: Push((int) 1)
0x1f4c: @ SetVariable(Stack[-2], Stack[-1])
0x1f4d: Pop(2)
0x1f4e: Return(); Pop(0)

0x1f4f: PushEmpty()
0x1f50: Push("ood1BigVlad7")
0x1f51: Push((int) 1)
0x1f52: @ SetVariable(Stack[-2], Stack[-1])
0x1f53: Pop(2)
0x1f54: Return(); Pop(0)

0x1f55: PushEmpty()
0x1f56: Push("ood1BigVlad8")
0x1f57: Push((int) 1)
0x1f58: @ SetVariable(Stack[-2], Stack[-1])
0x1f59: Pop(2)
0x1f5a: Return(); Pop(0)

0x1f5b: PushEmpty()
0x1f5c: Push("ood1BigVlad9")
0x1f5d: Push((int) 1)
0x1f5e: @ SetVariable(Stack[-2], Stack[-1])
0x1f5f: Pop(2)
0x1f60: Return(); Pop(0)

0x1f61: PushEmpty(object, object)
0x1f62: PushEmpty(object)
0x1f63: Call 0x2543

0x1f64: Stack[-2] = Stack[-1]
0x1f65: Pop(1)
0x1f66: Push("d1BigVladAboutKapella")
0x1f67: Push("pt_map_kapella")
0x1f68: Push((int) 3)
0x1f69: Push((int) 8638)
0x1f6a: PushEmpty(float)
0x1f6b: Call 0x1eec

0x1f6c: Pop(0)
0x1f6d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1f6e: Pop(5)
0x1f6f: Push("d1BigVladAboutMladVlad")
0x1f70: Push("pt_map_mladvlad")
0x1f71: Push((int) 3)
0x1f72: Push((int) 8689)
0x1f73: PushEmpty(float)
0x1f74: Call 0x1eec

0x1f75: Pop(0)
0x1f76: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1f77: Pop(5)
0x1f78: Return(); Pop(2)

0x1f79: Stack[-1] = 0
0x1f7a: PushEmpty()
0x1f7b: Push("playsound")
0x1f7c: Push("mapmark")
0x1f7d: @ TriggerWorld(Stack[-2], Stack[-1])
0x1f7e: Pop(2)
0x1f7f: Return(); Pop(0)

0x1f80: PushEmpty()
0x1f81: Push("ood3BigVlad1")
0x1f82: Push((int) 1)
0x1f83: @ SetVariable(Stack[-2], Stack[-1])
0x1f84: Pop(2)
0x1f85: Return(); Pop(0)

0x1f86: PushEmpty(object, object)
0x1f87: Push("d3q01")
0x1f88: Push((int) 4)
0x1f89: @ SetVariable(Stack[-2], Stack[-1])
0x1f8a: Pop(2)
0x1f8b: PushEmpty(object)
0x1f8c: Call 0x2543

0x1f8d: Stack[-2] = Stack[-1]
0x1f8e: Pop(1)
0x1f8f: Push("d3q01BigVladGotoGeorg")
0x1f90: Push("pt_map_georg")
0x1f91: Push((int) 1)
0x1f92: Push((int) 11153)
0x1f93: PushEmpty(float)
0x1f94: Call 0x1eec

0x1f95: Pop(0)
0x1f96: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1f97: Pop(5)
0x1f98: Push("d3q01BigVladGotoGeorgSelf")
0x1f99: Push("pt_map_bigvlad")
0x1f9a: Push((int) 1)
0x1f9b: Push((int) 15297)
0x1f9c: PushEmpty(float)
0x1f9d: Call 0x1eec

0x1f9e: Pop(0)
0x1f9f: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1fa0: Pop(5)
0x1fa1: PushEmpty()
0x1fa2: Call 0x2586

0x1fa3: Pop(0)
0x1fa4: Return(); Pop(2)

0x1fa5: Stack[-1] = 0
0x1fa6: PushEmpty()
0x1fa7: Push("ood3BigVlad2")
0x1fa8: Push((int) 1)
0x1fa9: @ SetVariable(Stack[-2], Stack[-1])
0x1faa: Pop(2)
0x1fab: Return(); Pop(0)

0x1fac: PushEmpty()
0x1fad: Push("ood3BigVlad3")
0x1fae: Push((int) 1)
0x1faf: @ SetVariable(Stack[-2], Stack[-1])
0x1fb0: Pop(2)
0x1fb1: Return(); Pop(0)

0x1fb2: PushEmpty(object, object)
0x1fb3: Push("d3q01")
0x1fb4: Push((int) 6)
0x1fb5: @ SetVariable(Stack[-2], Stack[-1])
0x1fb6: Pop(2)
0x1fb7: PushEmpty(object)
0x1fb8: Call 0x2543

0x1fb9: Stack[-2] = Stack[-1]
0x1fba: Pop(1)
0x1fbb: Push("d3q01BigVladAgreedSelf")
0x1fbc: Push("pt_map_bigvlad")
0x1fbd: Push((int) 1)
0x1fbe: Push((int) 11155)
0x1fbf: PushEmpty(float)
0x1fc0: Call 0x1eec

0x1fc1: Pop(0)
0x1fc2: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1fc3: Pop(5)
0x1fc4: Push("d3q01BigVladAgreed")
0x1fc5: Push("pt_map_ospina")
0x1fc6: Push((int) 1)
0x1fc7: Push((int) 15300)
0x1fc8: PushEmpty(float)
0x1fc9: Call 0x1eec

0x1fca: Pop(0)
0x1fcb: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1fcc: Pop(5)
0x1fcd: Return(); Pop(2)

0x1fce: Stack[-1] = 0
0x1fcf: PushEmpty()
0x1fd0: PushEmpty(object, string, float)
0x1fd1: PushEmpty(object)
0x1fd2: Call 0x2543

0x1fd3: Stack[-4] = Stack[-1]
0x1fd4: Pop(1)
0x1fd5: Stack[-2] = "pt_map_alexandr"
0x1fd6: Stack[-1] = (int) 2
0x1fd7: Call 0x2554

0x1fd8: Pop(3)
0x1fd9: PushEmpty(object)
0x1fda: Call 0x2543

0x1fdb: Pop(0)
0x1fdc: @@ ShowMap(Stack[-1])
0x1fdd: Pop(1)
0x1fde: Return(); Pop(0)

0x1fdf: PushEmpty()
0x1fe0: Push("ood3BigVlad4")
0x1fe1: Push((int) 1)
0x1fe2: @ SetVariable(Stack[-2], Stack[-1])
0x1fe3: Pop(2)
0x1fe4: Return(); Pop(0)

0x1fe5: PushEmpty(object, object)
0x1fe6: Push("d3q02")
0x1fe7: Push((int) 3)
0x1fe8: @ SetVariable(Stack[-2], Stack[-1])
0x1fe9: Pop(2)
0x1fea: PushEmpty(object)
0x1feb: Call 0x2543

0x1fec: Stack[-2] = Stack[-1]
0x1fed: Pop(1)
0x1fee: Push("d3q02BigVladGotoHan")
0x1fef: Push("pt_map_han")
0x1ff0: Push((int) 0)
0x1ff1: Push((int) 11385)
0x1ff2: PushEmpty(float)
0x1ff3: Call 0x1eec

0x1ff4: Pop(0)
0x1ff5: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1ff6: Pop(5)
0x1ff7: Return(); Pop(2)

0x1ff8: Stack[-1] = 0
0x1ff9: PushEmpty()
0x1ffa: PushEmpty(object, string, float)
0x1ffb: PushEmpty(object)
0x1ffc: Call 0x2543

0x1ffd: Stack[-4] = Stack[-1]
0x1ffe: Pop(1)
0x1fff: Stack[-2] = "pt_map_han"
0x2000: Stack[-1] = (int) 2
0x2001: Call 0x2554

0x2002: Pop(3)
0x2003: PushEmpty(object)
0x2004: Call 0x2543

0x2005: Pop(0)
0x2006: @@ ShowMap(Stack[-1])
0x2007: Pop(1)
0x2008: Return(); Pop(0)

0x2009: PushEmpty()
0x200a: Push("ood3BigVlad5")
0x200b: Push((int) 1)
0x200c: @ SetVariable(Stack[-2], Stack[-1])
0x200d: Pop(2)
0x200e: Return(); Pop(0)

0x200f: PushEmpty(object, object)
0x2010: Push("d4q01")
0x2011: Push((int) 1)
0x2012: @ SetVariable(Stack[-2], Stack[-1])
0x2013: Pop(2)
0x2014: PushEmpty(object)
0x2015: Call 0x2543

0x2016: Stack[-2] = Stack[-1]
0x2017: Pop(1)
0x2018: Push("d4q01BigVladGotoLara")
0x2019: Push("pt_map_lara")
0x201a: Push((int) 1)
0x201b: Push((int) 11481)
0x201c: PushEmpty(float)
0x201d: Call 0x1eec

0x201e: Pop(0)
0x201f: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2020: Pop(5)
0x2021: Push("d4q01BigVladGotoSklad")
0x2022: Push("pt_map_warehouse_gangster")
0x2023: Push((int) 1)
0x2024: Push((int) 11482)
0x2025: PushEmpty(float)
0x2026: Call 0x1eec

0x2027: Pop(0)
0x2028: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2029: Pop(5)
0x202a: Push("d4q01BigVladGotoLaraSelf")
0x202b: Push("pt_map_bigvlad")
0x202c: Push((int) 1)
0x202d: Push((int) 15320)
0x202e: PushEmpty(float)
0x202f: Call 0x1eec

0x2030: Pop(0)
0x2031: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2032: Pop(5)
0x2033: PushEmpty()
0x2034: Call 0x2596

0x2035: Pop(0)
0x2036: PushEmpty()
0x2037: Call 0x25a6

0x2038: Pop(0)
0x2039: Return(); Pop(2)

0x203a: Stack[-1] = 0
0x203b: PushEmpty()
0x203c: Push("ood4BigVlad1")
0x203d: Push((int) 1)
0x203e: @ SetVariable(Stack[-2], Stack[-1])
0x203f: Pop(2)
0x2040: Return(); Pop(0)

0x2041: PushEmpty()
0x2042: PushEmpty(object, string, float)
0x2043: PushEmpty(object)
0x2044: Call 0x2543

0x2045: Stack[-4] = Stack[-1]
0x2046: Pop(1)
0x2047: Stack[-2] = "pt_map_lara"
0x2048: Stack[-1] = (int) 2
0x2049: Call 0x2554

0x204a: Pop(3)
0x204b: PushEmpty(object)
0x204c: Call 0x2543

0x204d: Pop(0)
0x204e: @@ ShowMap(Stack[-1])
0x204f: Pop(1)
0x2050: Return(); Pop(0)

0x2051: PushEmpty()
0x2052: Push("ood4BigVlad2")
0x2053: Push((int) 1)
0x2054: @ SetVariable(Stack[-2], Stack[-1])
0x2055: Pop(2)
0x2056: Return(); Pop(0)

0x2057: PushEmpty(object, object)
0x2058: Push("d4q01")
0x2059: Push((int) 4)
0x205a: @ SetVariable(Stack[-2], Stack[-1])
0x205b: Pop(2)
0x205c: PushEmpty(object)
0x205d: Call 0x2543

0x205e: Stack[-2] = Stack[-1]
0x205f: Pop(1)
0x2060: Push("d4q01BigVladGotoSobor")
0x2061: Push("pt_map_sobor")
0x2062: Push((int) 1)
0x2063: Push((int) 15325)
0x2064: PushEmpty(float)
0x2065: Call 0x1eec

0x2066: Pop(0)
0x2067: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2068: Pop(5)
0x2069: Push("d4q01BigVladGotoSoborAndTheaterSelf")
0x206a: Push("pt_map_bigvlad")
0x206b: Push((int) 1)
0x206c: Push((int) 15327)
0x206d: PushEmpty(float)
0x206e: Call 0x1eec

0x206f: Pop(0)
0x2070: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2071: Pop(5)
0x2072: Push("d4q01BigVladGotoTheater")
0x2073: Push("pt_map_theater")
0x2074: Push((int) 1)
0x2075: Push((int) 15326)
0x2076: PushEmpty(float)
0x2077: Call 0x1eec

0x2078: Pop(0)
0x2079: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x207a: Pop(5)
0x207b: PushEmpty()
0x207c: Call 0x25b6

0x207d: Pop(0)
0x207e: PushEmpty(bool, string, string)
0x207f: Stack[-2] = "quest_d4_01"
0x2080: Stack[-1] = "pers"
0x2081: Call 0x1ee0

0x2082: Pop(3)
0x2083: PushEmpty(bool, string, string)
0x2084: Stack[-2] = "quest_d4_01"
0x2085: Stack[-1] = "key_actors"
0x2086: Call 0x1ee0

0x2087: Pop(3)
0x2088: Return(); Pop(2)

0x2089: Stack[-1] = 0
0x208a: PushEmpty()
0x208b: Push("ood4BigVlad3")
0x208c: Push((int) 1)
0x208d: @ SetVariable(Stack[-2], Stack[-1])
0x208e: Pop(2)
0x208f: Return(); Pop(0)

0x2090: PushEmpty(object, object, int, object, object, int)
0x2091: PushEmpty(object)
0x2092: Call 0x2543

0x2093: Stack[-4] = Stack[-1]
0x2094: Pop(1)
0x2095: Push("d4q01BigVladGotoLara")
0x2096: @@ FindMark(Stack[-3], Stack[-1])
0x2097: Pop(1)
0x2098: Push(Stack[-2])
0x2099: IF (Stack[-1] == 0) GOTO 0x209c; Pop(1)

0x209a: @@ Remove()
0x209b: Pop(0)
0x209c: Push("d4q01BigVladGotoLaraSelf")
0x209d: @@ FindMark(Stack[-3], Stack[-1])
0x209e: Pop(1)
0x209f: Push(Stack[-2])
0x20a0: IF (Stack[-1] == 0) GOTO 0x20a3; Pop(1)

0x20a1: @@ Remove()
0x20a2: Pop(0)
0x20a3: Push("d4q01BigVladGotoSklad")
0x20a4: @@ FindMark(Stack[-3], Stack[-1])
0x20a5: Pop(1)
0x20a6: Push(Stack[-2])
0x20a7: IF (Stack[-1] == 0) GOTO 0x20aa; Pop(1)

0x20a8: @@ Remove()
0x20a9: Pop(0)
0x20aa: Push("d4q01BigVladGotoSobor")
0x20ab: @@ FindMark(Stack[-3], Stack[-1])
0x20ac: Pop(1)
0x20ad: Push(Stack[-2])
0x20ae: IF (Stack[-1] == 0) GOTO 0x20b1; Pop(1)

0x20af: @@ Remove()
0x20b0: Pop(0)
0x20b1: Push("d4q01BigVladGotoSoborAndTheaterSelf")
0x20b2: @@ FindMark(Stack[-3], Stack[-1])
0x20b3: Pop(1)
0x20b4: Push(Stack[-2])
0x20b5: IF (Stack[-1] == 0) GOTO 0x20b8; Pop(1)

0x20b6: @@ Remove()
0x20b7: Pop(0)
0x20b8: Push("d4q01BigVladGotoTheater")
0x20b9: @@ FindMark(Stack[-3], Stack[-1])
0x20ba: Pop(1)
0x20bb: Push(Stack[-2])
0x20bc: IF (Stack[-1] == 0) GOTO 0x20bf; Pop(1)

0x20bd: @@ Remove()
0x20be: Pop(0)
0x20bf: Push("d4q01LaraGotoMladVlad")
0x20c0: @@ FindMark(Stack[-3], Stack[-1])
0x20c1: Pop(1)
0x20c2: Push(Stack[-2])
0x20c3: IF (Stack[-1] == 0) GOTO 0x20c6; Pop(1)

0x20c4: @@ Remove()
0x20c5: Pop(0)
0x20c6: Push("d4q01LaraGotoMladVladSelf")
0x20c7: @@ FindMark(Stack[-3], Stack[-1])
0x20c8: Pop(1)
0x20c9: Push(Stack[-2])
0x20ca: IF (Stack[-1] == 0) GOTO 0x20cd; Pop(1)

0x20cb: @@ Remove()
0x20cc: Pop(0)
0x20cd: Push("d4q01LaraGotoOspina")
0x20ce: @@ FindMark(Stack[-3], Stack[-1])
0x20cf: Pop(1)
0x20d0: Push(Stack[-2])
0x20d1: IF (Stack[-1] == 0) GOTO 0x20d4; Pop(1)

0x20d2: @@ Remove()
0x20d3: Pop(0)
0x20d4: Push("d4q01LaraGotoOspinaSelf")
0x20d5: @@ FindMark(Stack[-3], Stack[-1])
0x20d6: Pop(1)
0x20d7: Push(Stack[-2])
0x20d8: IF (Stack[-1] == 0) GOTO 0x20db; Pop(1)

0x20d9: @@ Remove()
0x20da: Pop(0)
0x20db: Push("d4q01MladVladGotoBigVlad")
0x20dc: @@ FindMark(Stack[-3], Stack[-1])
0x20dd: Pop(1)
0x20de: Push(Stack[-2])
0x20df: IF (Stack[-1] == 0) GOTO 0x20e2; Pop(1)

0x20e0: @@ Remove()
0x20e1: Pop(0)
0x20e2: Push("d4q01MladVladGotoBigVladSelf")
0x20e3: @@ FindMark(Stack[-3], Stack[-1])
0x20e4: Pop(1)
0x20e5: Push(Stack[-2])
0x20e6: IF (Stack[-1] == 0) GOTO 0x20e9; Pop(1)

0x20e7: @@ Remove()
0x20e8: Pop(0)
0x20e9: Push("d4q01MladVladGotoOspina")
0x20ea: @@ FindMark(Stack[-3], Stack[-1])
0x20eb: Pop(1)
0x20ec: Push(Stack[-2])
0x20ed: IF (Stack[-1] == 0) GOTO 0x20f0; Pop(1)

0x20ee: @@ Remove()
0x20ef: Pop(0)
0x20f0: Push("d4q01OspinaGotoLara")
0x20f1: @@ FindMark(Stack[-3], Stack[-1])
0x20f2: Pop(1)
0x20f3: Push(Stack[-2])
0x20f4: IF (Stack[-1] == 0) GOTO 0x20f7; Pop(1)

0x20f5: @@ Remove()
0x20f6: Pop(0)
0x20f7: Push("d4q01WastedMale")
0x20f8: @@ FindMark(Stack[-3], Stack[-1])
0x20f9: Pop(1)
0x20fa: Push(Stack[-2])
0x20fb: IF (Stack[-1] == 0) GOTO 0x20fe; Pop(1)

0x20fc: @@ Remove()
0x20fd: Pop(0)
0x20fe: Push("d4q01Whitemask")
0x20ff: @@ FindMark(Stack[-3], Stack[-1])
0x2100: Pop(1)
0x2101: Push(Stack[-2])
0x2102: IF (Stack[-1] == 0) GOTO 0x2105; Pop(1)

0x2103: @@ Remove()
0x2104: Pop(0)
0x2105: PushEmpty()
0x2106: Call 0x25c6

0x2107: Pop(0)
0x2108: PushEmpty(bool, string, string)
0x2109: Stack[-2] = "quest_d4_01"
0x210a: Stack[-1] = "completed"
0x210b: Call 0x1ee0

0x210c: Pop(3)
0x210d: Push("d4q01_sobor_key")
0x210e: Push((int) 1)
0x210f: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x2110: Pop(2)
0x2111: Push("d4q01_theater_key")
0x2112: Push((int) 1)
0x2113: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x2114: Pop(2)
0x2115: Return(); Pop(6)

0x2116: Stack[-2] = 0
0x2117: Stack[-3] = 0
0x2118: PushEmpty(object, object)
0x2119: Push("d5q01")
0x211a: Push((int) 2)
0x211b: @ SetVariable(Stack[-2], Stack[-1])
0x211c: Pop(2)
0x211d: PushEmpty(object)
0x211e: Call 0x2543

0x211f: Stack[-2] = Stack[-1]
0x2120: Pop(1)
0x2121: Push("d5q01BigVladGotoAlexandr")
0x2122: Push("pt_map_alexandr")
0x2123: Push((int) 1)
0x2124: Push((int) 11957)
0x2125: PushEmpty(float)
0x2126: Call 0x1eec

0x2127: Pop(0)
0x2128: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2129: Pop(5)
0x212a: PushEmpty()
0x212b: Call 0x25e6

0x212c: Pop(0)
0x212d: Return(); Pop(2)

0x212e: Stack[-1] = 0
0x212f: PushEmpty()
0x2130: Push("ood5BigVlad1")
0x2131: Push((int) 1)
0x2132: @ SetVariable(Stack[-2], Stack[-1])
0x2133: Pop(2)
0x2134: Return(); Pop(0)

0x2135: PushEmpty()
0x2136: Push("ood6BigVlad1")
0x2137: Push((int) 1)
0x2138: @ SetVariable(Stack[-2], Stack[-1])
0x2139: Pop(2)
0x213a: Return(); Pop(0)

0x213b: PushEmpty()
0x213c: Push("ood6BigVlad2")
0x213d: Push((int) 1)
0x213e: @ SetVariable(Stack[-2], Stack[-1])
0x213f: Pop(2)
0x2140: Return(); Pop(0)

0x2141: PushEmpty()
0x2142: Push("KnowBigVlad")
0x2143: Push((int) 1)
0x2144: @ SetVariable(Stack[-2], Stack[-1])
0x2145: Pop(2)
0x2146: Return(); Pop(0)

0x2147: PushEmpty()
0x2148: Push("d8q01BigVladIsVictim")
0x2149: Push((int) 1)
0x214a: @ SetVariable(Stack[-2], Stack[-1])
0x214b: Pop(2)
0x214c: Return(); Pop(0)

0x214d: PushEmpty()
0x214e: Push("ood8BigVlad1")
0x214f: Push((int) 1)
0x2150: @ SetVariable(Stack[-2], Stack[-1])
0x2151: Pop(2)
0x2152: Return(); Pop(0)

0x2153: PushEmpty()
0x2154: Push("ood8BigVlad2")
0x2155: Push((int) 1)
0x2156: @ SetVariable(Stack[-2], Stack[-1])
0x2157: Pop(2)
0x2158: Return(); Pop(0)

0x2159: PushEmpty()
0x215a: Push("ood8BigVlad3")
0x215b: Push((int) 1)
0x215c: @ SetVariable(Stack[-2], Stack[-1])
0x215d: Pop(2)
0x215e: Return(); Pop(0)

0x215f: PushEmpty()
0x2160: Push("ood6BigVlad3")
0x2161: Push((int) 1)
0x2162: @ SetVariable(Stack[-2], Stack[-1])
0x2163: Pop(2)
0x2164: Return(); Pop(0)

0x2165: PushEmpty(object, object)
0x2166: PushEmpty(object)
0x2167: Call 0x2543

0x2168: Stack[-2] = Stack[-1]
0x2169: Pop(1)
0x216a: Push("d6q01BigVladGotoAnna")
0x216b: Push("pt_map_anna")
0x216c: Push((int) 1)
0x216d: Push((int) 15390)
0x216e: PushEmpty(float)
0x216f: Call 0x1eec

0x2170: Pop(0)
0x2171: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2172: Pop(5)
0x2173: Push("d6q01BigVladGotoOspina")
0x2174: Push("pt_map_ospina")
0x2175: Push((int) 1)
0x2176: Push((int) 15389)
0x2177: PushEmpty(float)
0x2178: Call 0x1eec

0x2179: Pop(0)
0x217a: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x217b: Pop(5)
0x217c: Push("d6q01BigVladGotoAnnaOspinaSelf")
0x217d: Push("pt_map_bigvlad")
0x217e: Push((int) 1)
0x217f: Push((int) 15391)
0x2180: PushEmpty(float)
0x2181: Call 0x1eec

0x2182: Pop(0)
0x2183: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2184: Pop(5)
0x2185: PushEmpty()
0x2186: Call 0x25f6

0x2187: Pop(0)
0x2188: Return(); Pop(2)

0x2189: Stack[-1] = 0
0x218a: PushEmpty(object, object, object, object)
0x218b: PushEmpty(object)
0x218c: Call 0x2543

0x218d: Stack[-3] = Stack[-1]
0x218e: Pop(1)
0x218f: Push("d4q01BigVladGotoLara")
0x2190: @@ FindMark(Stack[-2], Stack[-1])
0x2191: Pop(1)
0x2192: Push(Stack[-1])
0x2193: IF (Stack[-1] == 0) GOTO 0x2196; Pop(1)

0x2194: @@ Remove()
0x2195: Pop(0)
0x2196: Push("d4q01BigVladGotoLaraSelf")
0x2197: @@ FindMark(Stack[-2], Stack[-1])
0x2198: Pop(1)
0x2199: Push(Stack[-1])
0x219a: IF (Stack[-1] == 0) GOTO 0x219d; Pop(1)

0x219b: @@ Remove()
0x219c: Pop(0)
0x219d: Push("d4q01BigVladGotoSklad")
0x219e: @@ FindMark(Stack[-2], Stack[-1])
0x219f: Pop(1)
0x21a0: Push(Stack[-1])
0x21a1: IF (Stack[-1] == 0) GOTO 0x21a4; Pop(1)

0x21a2: @@ Remove()
0x21a3: Pop(0)
0x21a4: Push("d4q01BigVladGotoSobor")
0x21a5: @@ FindMark(Stack[-2], Stack[-1])
0x21a6: Pop(1)
0x21a7: Push(Stack[-1])
0x21a8: IF (Stack[-1] == 0) GOTO 0x21ab; Pop(1)

0x21a9: @@ Remove()
0x21aa: Pop(0)
0x21ab: Push("d4q01BigVladGotoSoborAndTheaterSelf")
0x21ac: @@ FindMark(Stack[-2], Stack[-1])
0x21ad: Pop(1)
0x21ae: Push(Stack[-1])
0x21af: IF (Stack[-1] == 0) GOTO 0x21b2; Pop(1)

0x21b0: @@ Remove()
0x21b1: Pop(0)
0x21b2: Push("d4q01BigVladGotoTheater")
0x21b3: @@ FindMark(Stack[-2], Stack[-1])
0x21b4: Pop(1)
0x21b5: Push(Stack[-1])
0x21b6: IF (Stack[-1] == 0) GOTO 0x21b9; Pop(1)

0x21b7: @@ Remove()
0x21b8: Pop(0)
0x21b9: Push("d4q01LaraGotoMladVlad")
0x21ba: @@ FindMark(Stack[-2], Stack[-1])
0x21bb: Pop(1)
0x21bc: Push(Stack[-1])
0x21bd: IF (Stack[-1] == 0) GOTO 0x21c0; Pop(1)

0x21be: @@ Remove()
0x21bf: Pop(0)
0x21c0: Push("d4q01LaraGotoMladVladSelf")
0x21c1: @@ FindMark(Stack[-2], Stack[-1])
0x21c2: Pop(1)
0x21c3: Push(Stack[-1])
0x21c4: IF (Stack[-1] == 0) GOTO 0x21c7; Pop(1)

0x21c5: @@ Remove()
0x21c6: Pop(0)
0x21c7: Push("d4q01LaraGotoOspina")
0x21c8: @@ FindMark(Stack[-2], Stack[-1])
0x21c9: Pop(1)
0x21ca: Push(Stack[-1])
0x21cb: IF (Stack[-1] == 0) GOTO 0x21ce; Pop(1)

0x21cc: @@ Remove()
0x21cd: Pop(0)
0x21ce: Push("d4q01LaraGotoOspinaSelf")
0x21cf: @@ FindMark(Stack[-2], Stack[-1])
0x21d0: Pop(1)
0x21d1: Push(Stack[-1])
0x21d2: IF (Stack[-1] == 0) GOTO 0x21d5; Pop(1)

0x21d3: @@ Remove()
0x21d4: Pop(0)
0x21d5: Push("d4q01MladVladGotoBigVlad")
0x21d6: @@ FindMark(Stack[-2], Stack[-1])
0x21d7: Pop(1)
0x21d8: Push(Stack[-1])
0x21d9: IF (Stack[-1] == 0) GOTO 0x21dc; Pop(1)

0x21da: @@ Remove()
0x21db: Pop(0)
0x21dc: Push("d4q01MladVladGotoBigVladSelf")
0x21dd: @@ FindMark(Stack[-2], Stack[-1])
0x21de: Pop(1)
0x21df: Push(Stack[-1])
0x21e0: IF (Stack[-1] == 0) GOTO 0x21e3; Pop(1)

0x21e1: @@ Remove()
0x21e2: Pop(0)
0x21e3: Push("d4q01MladVladGotoOspina")
0x21e4: @@ FindMark(Stack[-2], Stack[-1])
0x21e5: Pop(1)
0x21e6: Push(Stack[-1])
0x21e7: IF (Stack[-1] == 0) GOTO 0x21ea; Pop(1)

0x21e8: @@ Remove()
0x21e9: Pop(0)
0x21ea: Push("d4q01OspinaGotoLara")
0x21eb: @@ FindMark(Stack[-2], Stack[-1])
0x21ec: Pop(1)
0x21ed: Push(Stack[-1])
0x21ee: IF (Stack[-1] == 0) GOTO 0x21f1; Pop(1)

0x21ef: @@ Remove()
0x21f0: Pop(0)
0x21f1: Push("d4q01WastedMale")
0x21f2: @@ FindMark(Stack[-2], Stack[-1])
0x21f3: Pop(1)
0x21f4: Push(Stack[-1])
0x21f5: IF (Stack[-1] == 0) GOTO 0x21f8; Pop(1)

0x21f6: @@ Remove()
0x21f7: Pop(0)
0x21f8: Push("d4q01Whitemask")
0x21f9: @@ FindMark(Stack[-2], Stack[-1])
0x21fa: Pop(1)
0x21fb: Push(Stack[-1])
0x21fc: IF (Stack[-1] == 0) GOTO 0x21ff; Pop(1)

0x21fd: @@ Remove()
0x21fe: Pop(0)
0x21ff: PushEmpty()
0x2200: Call 0x25d6

0x2201: Pop(0)
0x2202: PushEmpty(bool, string, string)
0x2203: Stack[-2] = "quest_d4_01"
0x2204: Stack[-1] = "failed"
0x2205: Call 0x1ee0

0x2206: Pop(3)
0x2207: Return(); Pop(4)

0x2208: Stack[-1] = 0
0x2209: Stack[-2] = 0
0x220a: PushEmpty()
0x220b: Push("d4BigVladVisit")
0x220c: Push((int) 1)
0x220d: @ SetVariable(Stack[-2], Stack[-1])
0x220e: Pop(2)
0x220f: Return(); Pop(0)

0x2210: PushEmpty(object, object)
0x2211: PushEmpty(object)
0x2212: Call 0x2543

0x2213: Stack[-2] = Stack[-1]
0x2214: Pop(1)
0x2215: Push("d6q02BigVlad")
0x2216: Push("pt_map_bigvlad")
0x2217: Push((int) 0)
0x2218: Push((int) 15380)
0x2219: PushEmpty(float)
0x221a: Call 0x1eec

0x221b: Pop(0)
0x221c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x221d: Pop(5)
0x221e: Return(); Pop(2)

0x221f: Stack[-1] = 0
0x2220: PushEmpty()
0x2221: Push("d6BigVladVisit")
0x2222: Push((int) 1)
0x2223: @ SetVariable(Stack[-2], Stack[-1])
0x2224: Pop(2)
0x2225: Return(); Pop(0)

0x2226: PushEmpty()
0x2227: Push("KnowTermitnik")
0x2228: Push((int) 1)
0x2229: @ SetVariable(Stack[-2], Stack[-1])
0x222a: Pop(2)
0x222b: Return(); Pop(0)

0x222c: PushEmpty()
0x222d: Push("ood1BigVlad1")
0x222e: Push((int) 1)
0x222f: @ SetVariable(Stack[-2], Stack[-1])
0x2230: Pop(2)
0x2231: Return(); Pop(0)

0x2232: PushEmpty()
0x2233: Push("ood1BigVlad2")
0x2234: Push((int) 1)
0x2235: @ SetVariable(Stack[-2], Stack[-1])
0x2236: Pop(2)
0x2237: Return(); Pop(0)

0x2238: PushEmpty()
0x2239: Push("ood1BigVlad3")
0x223a: Push((int) 1)
0x223b: @ SetVariable(Stack[-2], Stack[-1])
0x223c: Pop(2)
0x223d: Return(); Pop(0)

0x223e: PushEmpty()
0x223f: PushEmpty(int, string)
0x2240: Stack[-1] = "d1q01FirstGeorgVisit"
0x2241: Call 0x1ed4

0x2242: Pop(1)
0x2243: Push((int) 1)
0x2244: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2245: IF (Stack[-1] == 0) GOTO 0x2248; Pop(1)

0x2246: Stack[-2] = (bool) 1
0x2247: Return(); Pop(0)

0x2248: Stack[-2] = (bool) 0
0x2249: Return(); Pop(0)

0x224a: PushEmpty()
0x224b: PushEmpty(int, string)
0x224c: Stack[-1] = "KnowMat"
0x224d: Call 0x1ed4

0x224e: Pop(1)
0x224f: Push((int) 1)
0x2250: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2251: IF (Stack[-1] == 0) GOTO 0x2254; Pop(1)

0x2252: Stack[-2] = (bool) 1
0x2253: Return(); Pop(0)

0x2254: Stack[-2] = (bool) 0
0x2255: Return(); Pop(0)

0x2256: PushEmpty()
0x2257: PushEmpty(int, string)
0x2258: Stack[-1] = "ood2BigVlad1"
0x2259: Call 0x1ed4

0x225a: Pop(1)
0x225b: Push((int) 0)
0x225c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x225d: IF (Stack[-1] == 0) GOTO 0x2260; Pop(1)

0x225e: Stack[-2] = (bool) 1
0x225f: Return(); Pop(0)

0x2260: Stack[-2] = (bool) 0
0x2261: Return(); Pop(0)

0x2262: PushEmpty()
0x2263: PushEmpty(int, string)
0x2264: Stack[-1] = "ood2BigVlad2"
0x2265: Call 0x1ed4

0x2266: Pop(1)
0x2267: Push((int) 0)
0x2268: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2269: IF (Stack[-1] == 0) GOTO 0x226c; Pop(1)

0x226a: Stack[-2] = (bool) 1
0x226b: Return(); Pop(0)

0x226c: Stack[-2] = (bool) 0
0x226d: Return(); Pop(0)

0x226e: PushEmpty()
0x226f: PushEmpty(int, string)
0x2270: Stack[-1] = "ood2BigVlad3"
0x2271: Call 0x1ed4

0x2272: Pop(1)
0x2273: Push((int) 0)
0x2274: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2275: IF (Stack[-1] == 0) GOTO 0x2278; Pop(1)

0x2276: Stack[-2] = (bool) 1
0x2277: Return(); Pop(0)

0x2278: Stack[-2] = (bool) 0
0x2279: Return(); Pop(0)

0x227a: PushEmpty()
0x227b: PushEmpty(int, string)
0x227c: Stack[-1] = "ood2BigVlad4"
0x227d: Call 0x1ed4

0x227e: Pop(1)
0x227f: Push((int) 0)
0x2280: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2281: IF (Stack[-1] == 0) GOTO 0x2284; Pop(1)

0x2282: Stack[-2] = (bool) 1
0x2283: Return(); Pop(0)

0x2284: Stack[-2] = (bool) 0
0x2285: Return(); Pop(0)

0x2286: PushEmpty()
0x2287: PushEmpty(bool, object)
0x2288: Stack[-1] = Stack[-3]
0x2289: Call 0x2516

0x228a: Pop(1)
0x228b: IF (Stack[-1] == 0) GOTO 0x228e; Pop(1)

0x228c: Stack[-2] = (bool) 1
0x228d: Return(); Pop(0)

0x228e: Stack[-2] = (bool) 0
0x228f: Return(); Pop(0)

0x2290: PushEmpty()
0x2291: PushEmpty(int, string)
0x2292: Stack[-1] = "d2q01"
0x2293: Call 0x1ed4

0x2294: Pop(1)
0x2295: Push((int) 0)
0x2296: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2297: IF (Stack[-1] == 0) GOTO 0x229a; Pop(1)

0x2298: Stack[-2] = (bool) 1
0x2299: Return(); Pop(0)

0x229a: Stack[-2] = (bool) 0
0x229b: Return(); Pop(0)

0x229c: PushEmpty()
0x229d: PushEmpty(int, string)
0x229e: Stack[-1] = "d2q01"
0x229f: Call 0x1ed4

0x22a0: Pop(1)
0x22a1: Push((int) 6)
0x22a2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x22a3: IF (Stack[-1] == 0) GOTO 0x22a6; Pop(1)

0x22a4: Stack[-2] = (bool) 1
0x22a5: Return(); Pop(0)

0x22a6: Stack[-2] = (bool) 0
0x22a7: Return(); Pop(0)

0x22a8: PushEmpty()
0x22a9: PushEmpty(int, string)
0x22aa: Stack[-1] = "ood1BigVlad4"
0x22ab: Call 0x1ed4

0x22ac: Pop(1)
0x22ad: Push((int) 0)
0x22ae: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x22af: IF (Stack[-1] == 0) GOTO 0x22b2; Pop(1)

0x22b0: Stack[-2] = (bool) 1
0x22b1: Return(); Pop(0)

0x22b2: Stack[-2] = (bool) 0
0x22b3: Return(); Pop(0)

0x22b4: PushEmpty()
0x22b5: PushEmpty(int, string)
0x22b6: Stack[-1] = "ood1BigVlad5"
0x22b7: Call 0x1ed4

0x22b8: Pop(1)
0x22b9: Push((int) 0)
0x22ba: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x22bb: IF (Stack[-1] == 0) GOTO 0x22be; Pop(1)

0x22bc: Stack[-2] = (bool) 1
0x22bd: Return(); Pop(0)

0x22be: Stack[-2] = (bool) 0
0x22bf: Return(); Pop(0)

0x22c0: PushEmpty()
0x22c1: PushEmpty(int, string)
0x22c2: Stack[-1] = "ood1BigVlad6"
0x22c3: Call 0x1ed4

0x22c4: Pop(1)
0x22c5: Push((int) 0)
0x22c6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x22c7: IF (Stack[-1] == 0) GOTO 0x22ca; Pop(1)

0x22c8: Stack[-2] = (bool) 1
0x22c9: Return(); Pop(0)

0x22ca: Stack[-2] = (bool) 0
0x22cb: Return(); Pop(0)

0x22cc: PushEmpty()
0x22cd: PushEmpty(int, string)
0x22ce: Stack[-1] = "ood1BigVlad7"
0x22cf: Call 0x1ed4

0x22d0: Pop(1)
0x22d1: Push((int) 0)
0x22d2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x22d3: IF (Stack[-1] == 0) GOTO 0x22d6; Pop(1)

0x22d4: Stack[-2] = (bool) 1
0x22d5: Return(); Pop(0)

0x22d6: Stack[-2] = (bool) 0
0x22d7: Return(); Pop(0)

0x22d8: PushEmpty()
0x22d9: PushEmpty(int, string)
0x22da: Stack[-1] = "ood1BigVlad8"
0x22db: Call 0x1ed4

0x22dc: Pop(1)
0x22dd: Push((int) 0)
0x22de: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x22df: IF (Stack[-1] == 0) GOTO 0x22e2; Pop(1)

0x22e0: Stack[-2] = (bool) 1
0x22e1: Return(); Pop(0)

0x22e2: Stack[-2] = (bool) 0
0x22e3: Return(); Pop(0)

0x22e4: PushEmpty()
0x22e5: PushEmpty(int, string)
0x22e6: Stack[-1] = "ood1BigVlad9"
0x22e7: Call 0x1ed4

0x22e8: Pop(1)
0x22e9: Push((int) 0)
0x22ea: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x22eb: IF (Stack[-1] == 0) GOTO 0x22ee; Pop(1)

0x22ec: Stack[-2] = (bool) 1
0x22ed: Return(); Pop(0)

0x22ee: Stack[-2] = (bool) 0
0x22ef: Return(); Pop(0)

0x22f0: PushEmpty()
0x22f1: PushEmpty(int, string)
0x22f2: Stack[-1] = "KnowBurahDead"
0x22f3: Call 0x1ed4

0x22f4: Pop(1)
0x22f5: Push((int) 1)
0x22f6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x22f7: IF (Stack[-1] == 0) GOTO 0x22fa; Pop(1)

0x22f8: Stack[-2] = (bool) 1
0x22f9: Return(); Pop(0)

0x22fa: Stack[-2] = (bool) 0
0x22fb: Return(); Pop(0)

0x22fc: PushEmpty()
0x22fd: PushEmpty(int, string)
0x22fe: Stack[-1] = "d3q01"
0x22ff: Call 0x1ed4

0x2300: Pop(1)
0x2301: Push((int) 3)
0x2302: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2303: IF (Stack[-1] == 0) GOTO 0x2306; Pop(1)

0x2304: Stack[-2] = (bool) 1
0x2305: Return(); Pop(0)

0x2306: Stack[-2] = (bool) 0
0x2307: Return(); Pop(0)

0x2308: PushEmpty()
0x2309: PushEmpty(int, string)
0x230a: Stack[-1] = "ood3BigVlad1"
0x230b: Call 0x1ed4

0x230c: Pop(1)
0x230d: Push((int) 0)
0x230e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x230f: IF (Stack[-1] == 0) GOTO 0x2312; Pop(1)

0x2310: Stack[-2] = (bool) 1
0x2311: Return(); Pop(0)

0x2312: Stack[-2] = (bool) 0
0x2313: Return(); Pop(0)

0x2314: PushEmpty()
0x2315: PushEmpty(int, string)
0x2316: Stack[-1] = "d3q01"
0x2317: Call 0x1ed4

0x2318: Pop(1)
0x2319: Push((int) 4)
0x231a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x231b: IF (Stack[-1] == 0) GOTO 0x231e; Pop(1)

0x231c: Stack[-2] = (bool) 1
0x231d: Return(); Pop(0)

0x231e: Stack[-2] = (bool) 0
0x231f: Return(); Pop(0)

0x2320: PushEmpty()
0x2321: PushEmpty(int, string)
0x2322: Stack[-1] = "ood3BigVlad2"
0x2323: Call 0x1ed4

0x2324: Pop(1)
0x2325: Push((int) 0)
0x2326: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2327: IF (Stack[-1] == 0) GOTO 0x232a; Pop(1)

0x2328: Stack[-2] = (bool) 1
0x2329: Return(); Pop(0)

0x232a: Stack[-2] = (bool) 0
0x232b: Return(); Pop(0)

0x232c: PushEmpty()
0x232d: PushEmpty(int, string)
0x232e: Stack[-1] = "KnowRubin"
0x232f: Call 0x1ed4

0x2330: Pop(1)
0x2331: Push((int) 1)
0x2332: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2333: IF (Stack[-1] == 0) GOTO 0x2336; Pop(1)

0x2334: Stack[-2] = (bool) 1
0x2335: Return(); Pop(0)

0x2336: Stack[-2] = (bool) 0
0x2337: Return(); Pop(0)

0x2338: PushEmpty()
0x2339: PushEmpty(int, string)
0x233a: Stack[-1] = "d3q01"
0x233b: Call 0x1ed4

0x233c: Pop(1)
0x233d: Push((int) 5)
0x233e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x233f: IF (Stack[-1] == 0) GOTO 0x2342; Pop(1)

0x2340: Stack[-2] = (bool) 1
0x2341: Return(); Pop(0)

0x2342: Stack[-2] = (bool) 0
0x2343: Return(); Pop(0)

0x2344: PushEmpty()
0x2345: PushEmpty(int, string)
0x2346: Stack[-1] = "ood3BigVlad3"
0x2347: Call 0x1ed4

0x2348: Pop(1)
0x2349: Push((int) 0)
0x234a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x234b: IF (Stack[-1] == 0) GOTO 0x234e; Pop(1)

0x234c: Stack[-2] = (bool) 1
0x234d: Return(); Pop(0)

0x234e: Stack[-2] = (bool) 0
0x234f: Return(); Pop(0)

0x2350: PushEmpty()
0x2351: PushEmpty(int, string)
0x2352: Stack[-1] = "d3q02"
0x2353: Call 0x1ed4

0x2354: Pop(1)
0x2355: Push((int) 2)
0x2356: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2357: IF (Stack[-1] == 0) GOTO 0x235a; Pop(1)

0x2358: Stack[-2] = (bool) 1
0x2359: Return(); Pop(0)

0x235a: Stack[-2] = (bool) 0
0x235b: Return(); Pop(0)

0x235c: PushEmpty()
0x235d: PushEmpty(int, string)
0x235e: Stack[-1] = "ood3BigVlad4"
0x235f: Call 0x1ed4

0x2360: Pop(1)
0x2361: Push((int) 0)
0x2362: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2363: IF (Stack[-1] == 0) GOTO 0x2366; Pop(1)

0x2364: Stack[-2] = (bool) 1
0x2365: Return(); Pop(0)

0x2366: Stack[-2] = (bool) 0
0x2367: Return(); Pop(0)

0x2368: PushEmpty()
0x2369: PushEmpty(int, string)
0x236a: Stack[-1] = "d3q02"
0x236b: Call 0x1ed4

0x236c: Pop(1)
0x236d: Push((int) 6)
0x236e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x236f: IF (Stack[-1] == 0) GOTO 0x2372; Pop(1)

0x2370: Stack[-2] = (bool) 1
0x2371: Return(); Pop(0)

0x2372: Stack[-2] = (bool) 0
0x2373: Return(); Pop(0)

0x2374: PushEmpty()
0x2375: PushEmpty(int, string)
0x2376: Stack[-1] = "ood3BigVlad5"
0x2377: Call 0x1ed4

0x2378: Pop(1)
0x2379: Push((int) 0)
0x237a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x237b: IF (Stack[-1] == 0) GOTO 0x237e; Pop(1)

0x237c: Stack[-2] = (bool) 1
0x237d: Return(); Pop(0)

0x237e: Stack[-2] = (bool) 0
0x237f: Return(); Pop(0)

0x2380: PushEmpty()
0x2381: PushEmpty(int, string)
0x2382: Stack[-1] = "d4q01"
0x2383: Call 0x1ed4

0x2384: Pop(1)
0x2385: Push((int) 0)
0x2386: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2387: IF (Stack[-1] == 0) GOTO 0x238a; Pop(1)

0x2388: Stack[-2] = (bool) 1
0x2389: Return(); Pop(0)

0x238a: Stack[-2] = (bool) 0
0x238b: Return(); Pop(0)

0x238c: PushEmpty()
0x238d: PushEmpty(int, string)
0x238e: Stack[-1] = "ood4BigVlad1"
0x238f: Call 0x1ed4

0x2390: Pop(1)
0x2391: Push((int) 0)
0x2392: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2393: IF (Stack[-1] == 0) GOTO 0x2396; Pop(1)

0x2394: Stack[-2] = (bool) 1
0x2395: Return(); Pop(0)

0x2396: Stack[-2] = (bool) 0
0x2397: Return(); Pop(0)

0x2398: PushEmpty()
0x2399: PushEmpty(int, string)
0x239a: Stack[-1] = "d4q01"
0x239b: Call 0x1ed4

0x239c: Pop(1)
0x239d: Push((int) 3)
0x239e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x239f: IF (Stack[-1] == 0) GOTO 0x23a2; Pop(1)

0x23a0: Stack[-2] = (bool) 1
0x23a1: Return(); Pop(0)

0x23a2: Stack[-2] = (bool) 0
0x23a3: Return(); Pop(0)

0x23a4: PushEmpty()
0x23a5: PushEmpty(int, string)
0x23a6: Stack[-1] = "ood4BigVlad2"
0x23a7: Call 0x1ed4

0x23a8: Pop(1)
0x23a9: Push((int) 0)
0x23aa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x23ab: IF (Stack[-1] == 0) GOTO 0x23ae; Pop(1)

0x23ac: Stack[-2] = (bool) 1
0x23ad: Return(); Pop(0)

0x23ae: Stack[-2] = (bool) 0
0x23af: Return(); Pop(0)

0x23b0: PushEmpty()
0x23b1: PushEmpty(bool)
0x23b2: Stack[-1] = (bool) 1
0x23b3: PushEmpty(bool, object, string)
0x23b4: Stack[-2] = Stack[-5]
0x23b5: Stack[-1] = "d4q01_sobor_key"
0x23b6: Call 0x1ed9

0x23b7: Pop(2)
0x23b8: Pop(1); Push((bool) Stack[-1] == 0)
0x23b9: IF (Stack[-1] == 0) GOTO 0x23c2; Pop(1)

0x23ba: PushEmpty(bool, object, string)
0x23bb: Stack[-2] = Stack[-5]
0x23bc: Stack[-1] = "d4q01_theater_key"
0x23bd: Call 0x1ed9

0x23be: Pop(2)
0x23bf: Pop(1); Push((bool) Stack[-1] == 0)
0x23c0: IF (Stack[-1] == 0) GOTO 0x23c2; Pop(1)

0x23c1: Stack[-1] = (bool) 0
0x23c2: IF (Stack[-1] == 0) GOTO 0x23cc; Pop(1)

0x23c3: PushEmpty(int, string)
0x23c4: Stack[-1] = "d4q01"
0x23c5: Call 0x1ed4

0x23c6: Pop(1)
0x23c7: Push((int) 4)
0x23c8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x23c9: IF (Stack[-1] == 0) GOTO 0x23cc; Pop(1)

0x23ca: Stack[-2] = (bool) 1
0x23cb: Return(); Pop(0)

0x23cc: Stack[-2] = (bool) 0
0x23cd: Return(); Pop(0)

0x23ce: PushEmpty()
0x23cf: PushEmpty(bool)
0x23d0: Stack[-1] = (bool) 0
0x23d1: PushEmpty(bool, object, string)
0x23d2: Stack[-2] = Stack[-5]
0x23d3: Stack[-1] = "d4q01_sobor_key"
0x23d4: Call 0x1ed9

0x23d5: Pop(2)
0x23d6: IF (Stack[-1] == 0) GOTO 0x23de; Pop(1)

0x23d7: PushEmpty(bool, object, string)
0x23d8: Stack[-2] = Stack[-5]
0x23d9: Stack[-1] = "d4q01_theater_key"
0x23da: Call 0x1ed9

0x23db: Pop(2)
0x23dc: IF (Stack[-1] == 0) GOTO 0x23de; Pop(1)

0x23dd: Stack[-1] = (bool) 1
0x23de: IF (Stack[-1] == 0) GOTO 0x23e8; Pop(1)

0x23df: PushEmpty(int, string)
0x23e0: Stack[-1] = "d4q01"
0x23e1: Call 0x1ed4

0x23e2: Pop(1)
0x23e3: Push((int) 4)
0x23e4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x23e5: IF (Stack[-1] == 0) GOTO 0x23e8; Pop(1)

0x23e6: Stack[-2] = (bool) 1
0x23e7: Return(); Pop(0)

0x23e8: Stack[-2] = (bool) 0
0x23e9: Return(); Pop(0)

0x23ea: PushEmpty()
0x23eb: PushEmpty(int, string)
0x23ec: Stack[-1] = "ood4BigVlad3"
0x23ed: Call 0x1ed4

0x23ee: Pop(1)
0x23ef: Push((int) 0)
0x23f0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x23f1: IF (Stack[-1] == 0) GOTO 0x23f4; Pop(1)

0x23f2: Stack[-2] = (bool) 1
0x23f3: Return(); Pop(0)

0x23f4: Stack[-2] = (bool) 0
0x23f5: Return(); Pop(0)

0x23f6: PushEmpty()
0x23f7: PushEmpty(int, string)
0x23f8: Stack[-1] = "d5q01"
0x23f9: Call 0x1ed4

0x23fa: Pop(1)
0x23fb: Push((int) 1)
0x23fc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x23fd: IF (Stack[-1] == 0) GOTO 0x2400; Pop(1)

0x23fe: Stack[-2] = (bool) 1
0x23ff: Return(); Pop(0)

0x2400: Stack[-2] = (bool) 0
0x2401: Return(); Pop(0)

0x2402: PushEmpty()
0x2403: PushEmpty(int, string)
0x2404: Stack[-1] = "ood5BigVlad1"
0x2405: Call 0x1ed4

0x2406: Pop(1)
0x2407: Push((int) 0)
0x2408: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2409: IF (Stack[-1] == 0) GOTO 0x240c; Pop(1)

0x240a: Stack[-2] = (bool) 1
0x240b: Return(); Pop(0)

0x240c: Stack[-2] = (bool) 0
0x240d: Return(); Pop(0)

0x240e: PushEmpty()
0x240f: PushEmpty(int, string)
0x2410: Stack[-1] = "d6q02"
0x2411: Call 0x1ed4

0x2412: Pop(1)
0x2413: Push((int) 1000)
0x2414: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2415: IF (Stack[-1] == 0) GOTO 0x2418; Pop(1)

0x2416: Stack[-2] = (bool) 1
0x2417: Return(); Pop(0)

0x2418: Stack[-2] = (bool) 0
0x2419: Return(); Pop(0)

0x241a: PushEmpty()
0x241b: PushEmpty(int, string)
0x241c: Stack[-1] = "d6q02"
0x241d: Call 0x1ed4

0x241e: Pop(1)
0x241f: Push((int) -1)
0x2420: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2421: IF (Stack[-1] == 0) GOTO 0x2424; Pop(1)

0x2422: Stack[-2] = (bool) 1
0x2423: Return(); Pop(0)

0x2424: Stack[-2] = (bool) 0
0x2425: Return(); Pop(0)

0x2426: PushEmpty()
0x2427: PushEmpty(int, string)
0x2428: Stack[-1] = "ood6BigVlad1"
0x2429: Call 0x1ed4

0x242a: Pop(1)
0x242b: Push((int) 0)
0x242c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x242d: IF (Stack[-1] == 0) GOTO 0x2430; Pop(1)

0x242e: Stack[-2] = (bool) 1
0x242f: Return(); Pop(0)

0x2430: Stack[-2] = (bool) 0
0x2431: Return(); Pop(0)

0x2432: PushEmpty()
0x2433: PushEmpty(int, string)
0x2434: Stack[-1] = "d6q02KnowAboutAttack"
0x2435: Call 0x1ed4

0x2436: Pop(1)
0x2437: Push((int) 1)
0x2438: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2439: IF (Stack[-1] == 0) GOTO 0x243c; Pop(1)

0x243a: Stack[-2] = (bool) 1
0x243b: Return(); Pop(0)

0x243c: Stack[-2] = (bool) 0
0x243d: Return(); Pop(0)

0x243e: PushEmpty()
0x243f: PushEmpty(int, string)
0x2440: Stack[-1] = "d6q02Trigger"
0x2441: Call 0x1ed4

0x2442: Pop(1)
0x2443: Push((int) 0)
0x2444: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x2445: IF (Stack[-1] == 0) GOTO 0x2448; Pop(1)

0x2446: Stack[-2] = (bool) 1
0x2447: Return(); Pop(0)

0x2448: Stack[-2] = (bool) 0
0x2449: Return(); Pop(0)

0x244a: PushEmpty()
0x244b: PushEmpty(int, string)
0x244c: Stack[-1] = "d6q01"
0x244d: Call 0x1ed4

0x244e: Pop(1)
0x244f: Push((int) 1)
0x2450: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2451: IF (Stack[-1] == 0) GOTO 0x2454; Pop(1)

0x2452: Stack[-2] = (bool) 1
0x2453: Return(); Pop(0)

0x2454: Stack[-2] = (bool) 0
0x2455: Return(); Pop(0)

0x2456: PushEmpty()
0x2457: PushEmpty(int, string)
0x2458: Stack[-1] = "ood6BigVlad2"
0x2459: Call 0x1ed4

0x245a: Pop(1)
0x245b: Push((int) 0)
0x245c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x245d: IF (Stack[-1] == 0) GOTO 0x2460; Pop(1)

0x245e: Stack[-2] = (bool) 1
0x245f: Return(); Pop(0)

0x2460: Stack[-2] = (bool) 0
0x2461: Return(); Pop(0)

0x2462: PushEmpty()
0x2463: PushEmpty(int, string)
0x2464: Stack[-1] = "d8q01MladVladIsBad"
0x2465: Call 0x1ed4

0x2466: Pop(1)
0x2467: Push((int) 1)
0x2468: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2469: IF (Stack[-1] == 0) GOTO 0x246c; Pop(1)

0x246a: Stack[-2] = (bool) 1
0x246b: Return(); Pop(0)

0x246c: Stack[-2] = (bool) 0
0x246d: Return(); Pop(0)

0x246e: PushEmpty()
0x246f: PushEmpty(int, string)
0x2470: Stack[-1] = "d8q01BringBadBoy"
0x2471: Call 0x1ed4

0x2472: Pop(1)
0x2473: Push((int) 1)
0x2474: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2475: IF (Stack[-1] == 0) GOTO 0x2478; Pop(1)

0x2476: Stack[-2] = (bool) 1
0x2477: Return(); Pop(0)

0x2478: Stack[-2] = (bool) 0
0x2479: Return(); Pop(0)

0x247a: PushEmpty()
0x247b: PushEmpty(int, string)
0x247c: Stack[-1] = "ood8BigVlad1"
0x247d: Call 0x1ed4

0x247e: Pop(1)
0x247f: Push((int) 0)
0x2480: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2481: IF (Stack[-1] == 0) GOTO 0x2484; Pop(1)

0x2482: Stack[-2] = (bool) 1
0x2483: Return(); Pop(0)

0x2484: Stack[-2] = (bool) 0
0x2485: Return(); Pop(0)

0x2486: PushEmpty()
0x2487: PushEmpty(int, string)
0x2488: Stack[-1] = "ood8BigVlad2"
0x2489: Call 0x1ed4

0x248a: Pop(1)
0x248b: Push((int) 0)
0x248c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x248d: IF (Stack[-1] == 0) GOTO 0x2490; Pop(1)

0x248e: Stack[-2] = (bool) 1
0x248f: Return(); Pop(0)

0x2490: Stack[-2] = (bool) 0
0x2491: Return(); Pop(0)

0x2492: PushEmpty()
0x2493: PushEmpty(int, string)
0x2494: Stack[-1] = "ood8BigVlad3"
0x2495: Call 0x1ed4

0x2496: Pop(1)
0x2497: Push((int) 0)
0x2498: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2499: IF (Stack[-1] == 0) GOTO 0x249c; Pop(1)

0x249a: Stack[-2] = (bool) 1
0x249b: Return(); Pop(0)

0x249c: Stack[-2] = (bool) 0
0x249d: Return(); Pop(0)

0x249e: PushEmpty()
0x249f: PushEmpty(int, string)
0x24a0: Stack[-1] = "KnowAlexandr"
0x24a1: Call 0x1ed4

0x24a2: Pop(1)
0x24a3: Push((int) 1)
0x24a4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x24a5: IF (Stack[-1] == 0) GOTO 0x24a8; Pop(1)

0x24a6: Stack[-2] = (bool) 1
0x24a7: Return(); Pop(0)

0x24a8: Stack[-2] = (bool) 0
0x24a9: Return(); Pop(0)

0x24aa: PushEmpty()
0x24ab: PushEmpty(int, string)
0x24ac: Stack[-1] = "ood6BigVlad3"
0x24ad: Call 0x1ed4

0x24ae: Pop(1)
0x24af: Push((int) 0)
0x24b0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x24b1: IF (Stack[-1] == 0) GOTO 0x24b4; Pop(1)

0x24b2: Stack[-2] = (bool) 1
0x24b3: Return(); Pop(0)

0x24b4: Stack[-2] = (bool) 0
0x24b5: Return(); Pop(0)

0x24b6: PushEmpty()
0x24b7: PushEmpty(int, string)
0x24b8: Stack[-1] = "KnowAnna"
0x24b9: Call 0x1ed4

0x24ba: Pop(1)
0x24bb: Push((int) 1)
0x24bc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x24bd: IF (Stack[-1] == 0) GOTO 0x24c0; Pop(1)

0x24be: Stack[-2] = (bool) 1
0x24bf: Return(); Pop(0)

0x24c0: Stack[-2] = (bool) 0
0x24c1: Return(); Pop(0)

0x24c2: PushEmpty()
0x24c3: PushEmpty(int, string)
0x24c4: Stack[-1] = "KnowGeorg"
0x24c5: Call 0x1ed4

0x24c6: Pop(1)
0x24c7: Push((int) 1)
0x24c8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x24c9: IF (Stack[-1] == 0) GOTO 0x24cc; Pop(1)

0x24ca: Stack[-2] = (bool) 1
0x24cb: Return(); Pop(0)

0x24cc: Stack[-2] = (bool) 0
0x24cd: Return(); Pop(0)

0x24ce: PushEmpty()
0x24cf: PushEmpty(int, string)
0x24d0: Stack[-1] = "KnowMladVlad"
0x24d1: Call 0x1ed4

0x24d2: Pop(1)
0x24d3: Push((int) 1)
0x24d4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x24d5: IF (Stack[-1] == 0) GOTO 0x24d8; Pop(1)

0x24d6: Stack[-2] = (bool) 1
0x24d7: Return(); Pop(0)

0x24d8: Stack[-2] = (bool) 0
0x24d9: Return(); Pop(0)

0x24da: PushEmpty()
0x24db: PushEmpty(int, string)
0x24dc: Stack[-1] = "d6BigVladVisit"
0x24dd: Call 0x1ed4

0x24de: Pop(1)
0x24df: Push((int) 1)
0x24e0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x24e1: IF (Stack[-1] == 0) GOTO 0x24e4; Pop(1)

0x24e2: Stack[-2] = (bool) 1
0x24e3: Return(); Pop(0)

0x24e4: Stack[-2] = (bool) 0
0x24e5: Return(); Pop(0)

0x24e6: PushEmpty()
0x24e7: PushEmpty(int, string)
0x24e8: Stack[-1] = "KnowKapella"
0x24e9: Call 0x1ed4

0x24ea: Pop(1)
0x24eb: Push((int) 1)
0x24ec: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x24ed: IF (Stack[-1] == 0) GOTO 0x24f0; Pop(1)

0x24ee: Stack[-2] = (bool) 1
0x24ef: Return(); Pop(0)

0x24f0: Stack[-2] = (bool) 0
0x24f1: Return(); Pop(0)

0x24f2: PushEmpty()
0x24f3: PushEmpty(int, string)
0x24f4: Stack[-1] = "ood1BigVlad1"
0x24f5: Call 0x1ed4

0x24f6: Pop(1)
0x24f7: Push((int) 0)
0x24f8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x24f9: IF (Stack[-1] == 0) GOTO 0x24fc; Pop(1)

0x24fa: Stack[-2] = (bool) 1
0x24fb: Return(); Pop(0)

0x24fc: Stack[-2] = (bool) 0
0x24fd: Return(); Pop(0)

0x24fe: PushEmpty()
0x24ff: PushEmpty(int, string)
0x2500: Stack[-1] = "ood1BigVlad2"
0x2501: Call 0x1ed4

0x2502: Pop(1)
0x2503: Push((int) 0)
0x2504: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2505: IF (Stack[-1] == 0) GOTO 0x2508; Pop(1)

0x2506: Stack[-2] = (bool) 1
0x2507: Return(); Pop(0)

0x2508: Stack[-2] = (bool) 0
0x2509: Return(); Pop(0)

0x250a: PushEmpty()
0x250b: PushEmpty(int, string)
0x250c: Stack[-1] = "ood1BigVlad3"
0x250d: Call 0x1ed4

0x250e: Pop(1)
0x250f: Push((int) 0)
0x2510: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2511: IF (Stack[-1] == 0) GOTO 0x2514; Pop(1)

0x2512: Stack[-2] = (bool) 1
0x2513: Return(); Pop(0)

0x2514: Stack[-2] = (bool) 0
0x2515: Return(); Pop(0)

0x2516: PushEmpty()
0x2517: Stack[-2] = (bool) 0
0x2518: Return(); Pop(0)

0x2519: PushEmpty(object, object)
0x251a: @ GetDiaryRoot(Stack[-1])
0x251b: Pop(0)
0x251c: Pop(0); Push((bool) Stack[-1] == 0)
0x251d: IF (Stack[-1] == 0) GOTO 0x2523; Pop(1)

0x251e: Push("Can't retrieve diary root")
0x251f: @ Trace(Stack[-1])
0x2520: Pop(1)
0x2521: Stack[-3] = (bool) 0
0x2522: Return(); Pop(2)

0x2523: Stack[-3] = Stack[-1]
0x2524: Return(); Pop(2)

0x2525: Stack[-1] = 0
0x2526: PushEmpty(object, object, int, object, object, int)
0x2527: PushEmpty(object)
0x2528: Call 0x2519

0x2529: Stack[-4] = Stack[-1]
0x252a: Pop(1)
0x252b: @@ Find(Stack[-7], Stack[-2])
0x252c: Pop(0)
0x252d: Pop(0); Push((bool) Stack[-2] == 0)
0x252e: IF (Stack[-1] == 0) GOTO 0x2535; Pop(1)

0x252f: Push("Can't find diary parent with id: ")
0x2530: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2531: @ Trace(Stack[-1])
0x2532: Pop(1)
0x2533: Stack[-9] = (bool) 0
0x2534: Return(); Pop(6)

0x2535: @@ AddChild(Stack[-8])
0x2536: Pop(0)
0x2537: Push("player_diary")
0x2538: Push((int) 1)
0x2539: @ SetVariable(Stack[-2], Stack[-1])
0x253a: Pop(2)
0x253b: @@ GetCategory(Stack[-1])
0x253c: Pop(0)
0x253d: @ SetDiarySection(Stack[-1])
0x253e: Pop(0)
0x253f: Stack[-9] = (bool) 0
0x2540: Return(); Pop(6)

0x2541: Stack[-2] = 0
0x2542: Stack[-3] = 0
0x2543: PushEmpty(object, object, object, object)
0x2544: @ GetMainOutdoorScene(Stack[-2])
0x2545: Pop(0)
0x2546: Pop(0); Push((bool) Stack[-2] == 0)
0x2547: IF (Stack[-1] == 0) GOTO 0x254e; Pop(1)

0x2548: Push("Can't find main outdoor scene")
0x2549: @ Trace(Stack[-1])
0x254a: Pop(1)
0x254b: Stack[-1] = 0
0x254c: Stack[-5] = Stack[-1]
0x254d: Return(); Pop(4)

0x254e: @@ GetMap(Stack[-1])
0x254f: Pop(0)
0x2550: Stack[-5] = Stack[-1]
0x2551: Return(); Pop(4)

0x2552: Stack[-1] = 0
0x2553: Stack[-2] = 0
0x2554: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x2555: @ GetMainOutdoorScene(Stack[-2])
0x2556: Pop(0)
0x2557: Pop(0); Push((bool) Stack[-2] == 0)
0x2558: IF (Stack[-1] == 0) GOTO 0x255d; Pop(1)

0x2559: Push("Can't find main outdoor scene")
0x255a: @ Trace(Stack[-1])
0x255b: Pop(1)
0x255c: Return(); Pop(8)

0x255d: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x255e: Pop(0)
0x255f: Pop(0); Push((bool) Stack[-1] == 0)
0x2560: IF (Stack[-1] == 0) GOTO 0x2567; Pop(1)

0x2561: Push("Warning: outdoor scene locator ")
0x2562: Pop(1); Push(Stack[-1] + Stack[-11]);
0x2563: Push(" doesnt exist")
0x2564: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2565: @ Trace(Stack[-1])
0x2566: Pop(1)
0x2567: @@ GetMap(Stack[-11])
0x2568: Pop(0)
0x2569: Pop(0); Push((bool) Stack[-11] == 0)
0x256a: IF (Stack[-1] == 0) GOTO 0x256f; Pop(1)

0x256b: Push("Can't find map")
0x256c: @ Trace(Stack[-1])
0x256d: Pop(1)
0x256e: Return(); Pop(8)

0x256f: Push(CvectorIndex(Stack[-4], 0))
0x2570: Push(CvectorIndex(Stack[-5], 2))
0x2571: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x2572: Pop(2)
0x2573: Return(); Pop(8)

0x2574: Stack[-2] = 0
0x2575: PushEmpty(int, int)
0x2576: Push("player")
0x2577: @ GetVariable(Stack[-1], Stack[-2])
0x2578: Pop(1)
0x2579: Push((int) 0)
0x257a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x257b: IF (Stack[-1] == 0) GOTO 0x257f; Pop(1)

0x257c: Stack[-3] = (int) 200001
0x257d: Return(); Pop(2)

0x257e: GOTO 0x2584

0x257f: Push((int) 1)
0x2580: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2581: IF (Stack[-1] == 0) GOTO 0x2584; Pop(1)

0x2582: Stack[-3] = (int) 200002
0x2583: Return(); Pop(2)

0x2584: Stack[-3] = (int) 200003
0x2585: Return(); Pop(2)

0x2586: PushEmpty(object, object)
0x2587: Push("Adding diary entry")
0x2588: @ Trace(Stack[-1])
0x2589: Pop(1)
0x258a: Push((int) 135)
0x258b: Push((int) 1)
0x258c: Push((int) 15298)
0x258d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x258e: Pop(3)
0x258f: PushEmpty(bool, object, int)
0x2590: Stack[-2] = Stack[-4]
0x2591: Stack[-1] = (int) 25
0x2592: Call 0x2526

0x2593: Pop(3)
0x2594: Return(); Pop(2)

0x2595: Stack[-1] = 0
0x2596: PushEmpty(object, object)
0x2597: Push("Adding diary entry")
0x2598: @ Trace(Stack[-1])
0x2599: Pop(1)
0x259a: Push((int) 20)
0x259b: Push((int) 1)
0x259c: Push((int) 3360)
0x259d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x259e: Pop(3)
0x259f: PushEmpty(bool, object, int)
0x25a0: Stack[-2] = Stack[-4]
0x25a1: Stack[-1] = (int) -1
0x25a2: Call 0x2526

0x25a3: Pop(3)
0x25a4: Return(); Pop(2)

0x25a5: Stack[-1] = 0
0x25a6: PushEmpty(object, object)
0x25a7: Push("Adding diary entry")
0x25a8: @ Trace(Stack[-1])
0x25a9: Pop(1)
0x25aa: Push((int) 87)
0x25ab: Push((int) 1)
0x25ac: Push((int) 12169)
0x25ad: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x25ae: Pop(3)
0x25af: PushEmpty(bool, object, int)
0x25b0: Stack[-2] = Stack[-4]
0x25b1: Stack[-1] = (int) 20
0x25b2: Call 0x2526

0x25b3: Pop(3)
0x25b4: Return(); Pop(2)

0x25b5: Stack[-1] = 0
0x25b6: PushEmpty(object, object)
0x25b7: Push("Adding diary entry")
0x25b8: @ Trace(Stack[-1])
0x25b9: Pop(1)
0x25ba: Push((int) 89)
0x25bb: Push((int) 1)
0x25bc: Push((int) 12171)
0x25bd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x25be: Pop(3)
0x25bf: PushEmpty(bool, object, int)
0x25c0: Stack[-2] = Stack[-4]
0x25c1: Stack[-1] = (int) 20
0x25c2: Call 0x2526

0x25c3: Pop(3)
0x25c4: Return(); Pop(2)

0x25c5: Stack[-1] = 0
0x25c6: PushEmpty(object, object)
0x25c7: Push("Adding diary entry")
0x25c8: @ Trace(Stack[-1])
0x25c9: Pop(1)
0x25ca: Push((int) 90)
0x25cb: Push((int) 1)
0x25cc: Push((int) 12172)
0x25cd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x25ce: Pop(3)
0x25cf: PushEmpty(bool, object, int)
0x25d0: Stack[-2] = Stack[-4]
0x25d1: Stack[-1] = (int) 20
0x25d2: Call 0x2526

0x25d3: Pop(3)
0x25d4: Return(); Pop(2)

0x25d5: Stack[-1] = 0
0x25d6: PushEmpty(object, object)
0x25d7: Push("Adding diary entry")
0x25d8: @ Trace(Stack[-1])
0x25d9: Pop(1)
0x25da: Push((int) 91)
0x25db: Push((int) 1)
0x25dc: Push((int) 12173)
0x25dd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x25de: Pop(3)
0x25df: PushEmpty(bool, object, int)
0x25e0: Stack[-2] = Stack[-4]
0x25e1: Stack[-1] = (int) 20
0x25e2: Call 0x2526

0x25e3: Pop(3)
0x25e4: Return(); Pop(2)

0x25e5: Stack[-1] = 0
0x25e6: PushEmpty(object, object)
0x25e7: Push("Adding diary entry")
0x25e8: @ Trace(Stack[-1])
0x25e9: Pop(1)
0x25ea: Push((int) 141)
0x25eb: Push((int) 1)
0x25ec: Push((int) 15341)
0x25ed: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x25ee: Pop(3)
0x25ef: PushEmpty(bool, object, int)
0x25f0: Stack[-2] = Stack[-4]
0x25f1: Stack[-1] = (int) 139
0x25f2: Call 0x2526

0x25f3: Pop(3)
0x25f4: Return(); Pop(2)

0x25f5: Stack[-1] = 0
0x25f6: PushEmpty(object, object)
0x25f7: Push("Adding diary entry")
0x25f8: @ Trace(Stack[-1])
0x25f9: Pop(1)
0x25fa: Push((int) 115)
0x25fb: Push((int) 1)
0x25fc: Push((int) 13738)
0x25fd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x25fe: Pop(3)
0x25ff: PushEmpty(bool, object, int)
0x2600: Stack[-2] = Stack[-4]
0x2601: Stack[-1] = (int) 111
0x2602: Call 0x2526

0x2603: Pop(3)
0x2604: Return(); Pop(2)

0x2605: Stack[-1] = 0
0x2606: Push(GlobalVars[1])
0x2607: Stack[-1] = (bool) 0
0x2608: GlobalVars[1] = Stack[-1]; Pop(1)
0x2609: Return(); Pop(0)

0x260a: PushEmpty()
0x260b: Push(GlobalVars[1])
0x260c: Pop(1); Push((bool) Stack[-1] == 0)
0x260d: IF (Stack[-1] == 0) GOTO 0x2617; Pop(1)

0x260e: PushEmpty(int, object)
0x260f: Stack[-1] = Stack[-3]
0x2610: Push(-2, 1); TaskCall(2)
0x2611: Call 0x31

0x2612: Pop(-2, 1); TaskReturn
0x2613: Pop(2)
0x2614: Push(GlobalVars[1])
0x2615: Stack[-1] = (bool) 1
0x2616: GlobalVars[1] = Stack[-1]; Pop(1)
0x2617: PushEmpty(bool, int)
0x2618: Stack[-1] = (int) 1
0x2619: Call 0x1efa

0x261a: Pop(1)
0x261b: IF (Stack[-1] == 0) GOTO 0x2623; Pop(1)

0x261c: PushEmpty(int, object)
0x261d: Stack[-1] = Stack[-3]
0x261e: Push(-2, 1); TaskCall(6)
0x261f: Call 0x459

0x2620: Pop(-2, 1); TaskReturn
0x2621: Pop(2)
0x2622: Return(); Pop(0)

0x2623: PushEmpty(bool, int)
0x2624: Stack[-1] = (int) 2
0x2625: Call 0x1efa

0x2626: Pop(1)
0x2627: IF (Stack[-1] == 0) GOTO 0x262f; Pop(1)

0x2628: PushEmpty(int, object)
0x2629: Stack[-1] = Stack[-3]
0x262a: Push(-2, 1); TaskCall(8)
0x262b: Call 0xa9f

0x262c: Pop(-2, 1); TaskReturn
0x262d: Pop(2)
0x262e: Return(); Pop(0)

0x262f: PushEmpty(bool, int)
0x2630: Stack[-1] = (int) 3
0x2631: Call 0x1efa

0x2632: Pop(1)
0x2633: IF (Stack[-1] == 0) GOTO 0x263b; Pop(1)

0x2634: PushEmpty(int, object)
0x2635: Stack[-1] = Stack[-3]
0x2636: Push(-2, 1); TaskCall(10)
0x2637: Call 0xe1a

0x2638: Pop(-2, 1); TaskReturn
0x2639: Pop(2)
0x263a: Return(); Pop(0)

0x263b: PushEmpty(bool, int)
0x263c: Stack[-1] = (int) 4
0x263d: Call 0x1efa

0x263e: Pop(1)
0x263f: IF (Stack[-1] == 0) GOTO 0x2647; Pop(1)

0x2640: PushEmpty(int, object)
0x2641: Stack[-1] = Stack[-3]
0x2642: Push(-2, 1); TaskCall(12)
0x2643: Call 0x14f0

0x2644: Pop(-2, 1); TaskReturn
0x2645: Pop(2)
0x2646: Return(); Pop(0)

0x2647: PushEmpty(bool, int)
0x2648: Stack[-1] = (int) 5
0x2649: Call 0x1efa

0x264a: Pop(1)
0x264b: IF (Stack[-1] == 0) GOTO 0x2653; Pop(1)

0x264c: PushEmpty(int, object)
0x264d: Stack[-1] = Stack[-3]
0x264e: Push(-2, 1); TaskCall(14)
0x264f: Call 0x1a73

0x2650: Pop(-2, 1); TaskReturn
0x2651: Pop(2)
0x2652: Return(); Pop(0)

0x2653: PushEmpty(bool, int)
0x2654: Stack[-1] = (int) 6
0x2655: Call 0x1efa

0x2656: Pop(1)
0x2657: IF (Stack[-1] == 0) GOTO 0x265f; Pop(1)

0x2658: PushEmpty(int, object)
0x2659: Stack[-1] = Stack[-3]
0x265a: Push(-2, 1); TaskCall(4)
0x265b: Call 0x142

0x265c: Pop(-2, 1); TaskReturn
0x265d: Pop(2)
0x265e: Return(); Pop(0)

0x265f: PushEmpty(bool, int)
0x2660: Stack[-1] = (int) 8
0x2661: Call 0x1efa

0x2662: Pop(1)
0x2663: IF (Stack[-1] == 0) GOTO 0x266b; Pop(1)

0x2664: PushEmpty(int, object)
0x2665: Stack[-1] = Stack[-3]
0x2666: Push(-2, 1); TaskCall(16)
0x2667: Call 0x1c52

0x2668: Pop(-2, 1); TaskReturn
0x2669: Pop(2)
0x266a: Return(); Pop(0)

0x266b: PushEmpty(bool)
0x266c: Call 0x1f00

0x266d: Pop(1)
0x266e: Return(); Pop(0)

